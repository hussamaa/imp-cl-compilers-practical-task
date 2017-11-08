// --atomics 53 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 79,97,1 -l 79,1,1
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

__constant uint32_t permutations[10][79] = {
{22,75,66,29,76,36,44,34,8,49,57,60,26,50,13,73,68,10,77,55,2,63,46,45,43,19,31,37,71,33,11,1,56,14,20,61,39,12,6,21,18,70,67,47,3,4,40,74,41,52,24,65,25,9,58,23,48,30,38,69,53,0,16,78,7,17,35,27,5,72,54,59,64,51,62,28,42,15,32}, // permutation 0
{55,66,25,51,77,17,67,44,5,61,43,16,68,19,48,62,7,49,10,73,13,39,9,0,24,57,8,34,31,74,52,23,65,29,20,21,4,12,26,2,41,47,76,11,15,54,40,63,60,46,36,18,64,6,27,3,30,59,58,32,78,38,56,53,70,45,72,42,14,50,69,37,28,71,75,35,1,33,22}, // permutation 1
{71,4,46,8,68,51,6,42,40,55,28,29,53,59,56,1,75,60,58,47,78,57,77,45,65,30,67,12,61,48,0,10,38,33,5,9,3,17,52,26,39,54,11,50,25,22,2,31,19,74,43,21,15,24,34,62,32,13,37,70,69,23,7,41,27,64,44,73,66,16,35,36,18,63,76,49,20,72,14}, // permutation 2
{58,6,34,53,62,56,60,45,7,11,48,43,17,26,71,20,49,63,13,59,36,14,40,8,38,12,5,18,76,57,68,54,77,3,30,78,42,47,27,29,21,31,22,50,23,41,74,25,2,39,0,35,24,66,69,1,15,72,64,75,9,61,55,10,67,52,16,19,33,65,28,32,70,37,73,44,46,51,4}, // permutation 3
{59,12,41,38,63,45,9,8,4,76,64,73,40,18,70,71,22,0,58,29,49,20,11,10,15,77,51,24,65,72,56,27,19,5,67,3,54,48,14,53,36,33,50,1,13,78,21,43,25,44,69,35,42,39,46,7,6,28,62,47,23,61,30,31,32,17,68,74,16,26,55,37,34,75,60,52,57,2,66}, // permutation 4
{63,31,60,57,42,78,7,47,10,41,66,34,77,32,0,58,38,55,24,51,21,73,18,22,50,39,65,4,9,15,49,35,6,40,44,29,43,27,54,17,62,28,20,72,71,36,5,48,30,70,33,3,53,1,52,12,13,25,76,64,69,56,59,75,2,45,23,68,37,67,61,11,8,46,26,19,74,16,14}, // permutation 5
{56,55,15,52,69,47,44,1,29,10,14,63,70,16,74,5,68,67,35,39,11,7,27,73,51,24,66,65,61,6,3,77,2,49,25,19,54,23,46,18,33,8,41,50,4,64,26,21,34,62,75,53,43,36,78,38,28,71,12,9,48,17,45,59,76,72,20,31,22,60,32,0,40,13,30,57,37,42,58}, // permutation 6
{1,10,34,43,50,3,17,15,59,24,68,74,4,69,58,49,39,76,21,78,56,12,37,72,40,45,26,42,67,8,19,73,9,23,33,7,48,41,31,65,71,32,61,25,30,63,14,46,27,38,5,18,20,52,28,55,57,2,66,60,11,36,51,44,22,0,6,53,54,64,13,75,77,62,35,16,29,70,47}, // permutation 7
{9,41,53,66,45,74,61,2,17,18,16,24,36,34,42,67,71,78,10,26,50,15,55,64,22,46,23,68,19,62,31,48,21,72,20,59,76,60,14,38,4,52,13,6,65,25,28,32,75,58,12,49,33,0,56,27,44,73,35,8,37,43,3,70,29,39,54,40,77,30,51,1,7,11,69,47,57,5,63}, // permutation 8
{48,9,47,21,53,37,69,5,76,72,10,78,2,74,19,42,60,38,45,14,3,35,34,54,6,4,63,71,68,77,0,73,27,51,26,66,8,40,61,41,58,50,44,55,32,1,31,65,18,23,43,56,33,39,30,20,28,17,25,22,29,16,46,24,11,75,64,12,59,57,13,7,62,52,49,36,67,70,15} // permutation 9
};

// Seed: 2424421272

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
   int32_t  f1;
   volatile uint32_t  f2;
   uint64_t  f3;
   uint16_t  f4;
};

struct S1 {
   volatile uint32_t  f0;
   volatile int32_t  f1;
   volatile uint32_t  f2;
   int32_t  f3;
   volatile int16_t  f4;
};

struct S2 {
   int32_t  f0;
   volatile uint64_t  f1;
   volatile int32_t  f2;
};

union U3 {
   int64_t  f0;
   volatile struct S0  f1;
   int32_t  f2;
   int8_t  f3;
};

union U4 {
   volatile int16_t  f0;
};

union U5 {
   struct S2  f0;
   int8_t * f1;
   uint64_t  f2;
};

union U8 {
   uint64_t  f0;
   struct S2  f1;
   uint32_t  f2;
};

struct S9 {
    int32_t g_2[2];
    VECTOR(int16_t, 4) g_14;
    uint32_t g_15;
    uint64_t g_29;
    int8_t g_33;
    uint64_t g_42;
    uint16_t g_67;
    union U4 g_79;
    union U4 ** volatile g_80;
    volatile VECTOR(uint16_t, 4) g_83;
    int8_t g_89;
    int32_t g_91;
    volatile int16_t g_92;
    volatile int64_t g_93;
    int32_t g_94;
    volatile uint32_t g_95;
    union U4 g_99;
    union U5 g_101;
    union U5 *g_100;
    uint8_t g_108;
    volatile VECTOR(int16_t, 8) g_118;
    union U4 g_131;
    union U4 *g_130;
    int64_t g_141;
    volatile VECTOR(int32_t, 2) g_147;
    int64_t g_188[3];
    struct S2 * volatile g_193[10];
    struct S2 * volatile g_194;
    struct S2 g_195;
    VECTOR(uint32_t, 2) g_203;
    struct S2 g_205;
    int32_t g_222[5];
    union U8 g_225;
    struct S2 g_227;
    struct S2 * volatile g_228;
    struct S2 * volatile g_231;
    struct S2 g_234[4];
    union U3 g_240;
    union U3 *g_242;
    union U3 ** volatile g_241;
    uint64_t g_245;
    uint64_t *g_244;
    VECTOR(uint16_t, 16) g_253;
    struct S0 g_273[4];
    struct S0 g_275;
    VECTOR(uint16_t, 4) g_300;
    int8_t g_311[1];
    struct S2 g_320[5][6];
    volatile VECTOR(int16_t, 2) g_329;
    volatile struct S0 g_335;
    VECTOR(uint32_t, 8) g_342;
    int32_t g_347;
    union U3 g_350[6][3];
    int32_t *g_381[9];
    int32_t ** volatile g_380;
    union U3 ** volatile g_384;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S9 * p_386);
int16_t  func_18(uint32_t  p_19, int8_t * p_20, int8_t * p_21, uint32_t  p_22, struct S9 * p_386);
uint32_t  func_23(uint64_t  p_24, int8_t * p_25, int8_t * p_26, struct S9 * p_386);
int8_t * func_34(int32_t  p_35, uint64_t * p_36, uint64_t * p_37, int16_t  p_38, struct S9 * p_386);
int32_t  func_39(uint64_t * p_40, struct S9 * p_386);
struct S2  func_45(uint64_t * p_46, uint64_t * p_47, int16_t  p_48, uint64_t * p_49, int8_t * p_50, struct S9 * p_386);
uint64_t * func_51(int32_t  p_52, struct S9 * p_386);
uint8_t  func_58(uint64_t  p_59, int16_t  p_60, uint64_t * p_61, int32_t  p_62, int8_t * p_63, struct S9 * p_386);
uint16_t  func_69(int64_t  p_70, struct S9 * p_386);
uint64_t  func_71(uint64_t  p_72, struct S9 * p_386);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_386->g_2 p_386->g_14 p_386->g_15 p_386->l_comm_values p_386->g_29 p_386->g_42 p_386->g_comm_values p_386->g_83 p_386->g_95 p_386->g_99 p_386->g_100 p_386->g_101.f0.f2 p_386->g_108 p_386->g_118 p_386->g_101.f0.f0 p_386->g_33 p_386->g_130 p_386->g_141 p_386->g_67 p_386->g_93 p_386->g_101.f0 p_386->g_203 p_386->g_195.f2 p_386->g_131.f0 p_386->g_205 p_386->g_222 p_386->g_227 p_386->g_228 p_386->g_194 p_386->g_94 p_386->g_241 p_386->g_244 p_386->g_225.f0 p_386->g_89 p_386->g_225 p_386->g_253 p_386->g_91 p_386->g_240.f3 p_386->g_273 p_386->g_188 p_386->g_300 p_386->g_147 p_386->g_240.f0 p_386->g_234.f0 p_386->g_275.f0 p_386->g_195.f0 p_386->g_320 p_386->g_329 p_386->g_335 p_386->g_342 p_386->g_347 p_386->g_242 p_386->g_245 p_386->g_275.f2 p_386->g_380 p_386->g_384
 * writes: p_386->g_2 p_386->g_15 p_386->g_29 p_386->g_42 p_386->g_67 p_386->g_89 p_386->g_95 p_386->g_100 p_386->g_108 p_386->g_141 p_386->g_14 p_386->g_188 p_386->g_195 p_386->g_234 p_386->g_94 p_386->g_242 p_386->g_91 p_386->g_240.f3 p_386->g_275 p_386->g_240.f0 p_386->g_311 p_386->g_225.f0 p_386->g_350.f2 p_386->g_347 p_386->g_381
 */
int16_t  func_1(struct S9 * p_386)
{ /* block id: 4 */
    uint16_t l_5 = 1UL;
    int32_t l_27[9] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
    uint64_t *l_41 = &p_386->g_42;
    int8_t *l_357 = &p_386->g_89;
    uint8_t l_368 = 0xF9L;
    int8_t l_385 = (-2L);
    int i;
    for (p_386->g_2[0] = 0; (p_386->g_2[0] != (-17)); p_386->g_2[0]--)
    { /* block id: 7 */
        VECTOR(uint32_t, 2) l_13 = (VECTOR(uint32_t, 2))(4294967294UL, 0x8FBFC75DL);
        int8_t *l_32 = &p_386->g_33;
        int32_t *l_365 = &p_386->g_240.f2;
        int32_t *l_366 = &l_27[5];
        int32_t *l_367[5];
        int i;
        for (i = 0; i < 5; i++)
            l_367[i] = &l_27[8];
        if (l_5)
            break;
        for (l_5 = 0; (l_5 >= 21); ++l_5)
        { /* block id: 11 */
            uint8_t l_10[1][10];
            uint64_t *l_28 = &p_386->g_29;
            int8_t *l_324 = &p_386->g_311[0];
            int32_t *l_358 = (void*)0;
            int32_t *l_359 = &l_27[8];
            int32_t *l_360 = &p_386->g_347;
            int32_t *l_361[5][5] = {{&p_386->g_91,&p_386->g_347,&p_386->g_91,&p_386->g_91,&p_386->g_347},{&p_386->g_91,&p_386->g_347,&p_386->g_91,&p_386->g_91,&p_386->g_347},{&p_386->g_91,&p_386->g_347,&p_386->g_91,&p_386->g_91,&p_386->g_347},{&p_386->g_91,&p_386->g_347,&p_386->g_91,&p_386->g_91,&p_386->g_347},{&p_386->g_91,&p_386->g_347,&p_386->g_91,&p_386->g_91,&p_386->g_347}};
            uint16_t l_362 = 0xEF3AL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 10; j++)
                    l_10[i][j] = 0xDEL;
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_386->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[(safe_mod_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((l_10[0][6] > (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_13.xxxxyyyyxxyxxxyy)).s52)).lo, l_13.y)), ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_386->g_14.xzzwzxxzwxzyywzy)).odd)).s70, (int16_t)(l_13.y == 0xF3L), (int16_t)((++p_386->g_15) , func_18((p_386->l_comm_values[(safe_mod_func_uint32_t_u_u(p_386->tid, 79))] == func_23(((*l_28)--), l_32, func_34(func_39(l_41, p_386), func_51(p_386->g_205.f0, p_386), p_386->g_244, p_386->g_225.f0, p_386), p_386)), l_324, &p_386->g_311[0], l_13.y, p_386))))), 0x4580L)).ywzyywywwzxywxzz)).sa == p_386->g_245)), p_386->g_203.x)) , l_357) == (void*)0), 10))][(safe_mod_func_uint32_t_u_u(p_386->tid, 79))]));
            --l_362;
            return p_386->g_275.f2;
        }
        ++l_368;
    }
    for (p_386->g_29 = 21; (p_386->g_29 != 48); ++p_386->g_29)
    { /* block id: 152 */
        uint32_t l_377 = 0x59E93B6CL;
        struct S2 *l_382[7] = {&p_386->g_101.f0,&p_386->g_234[0],&p_386->g_101.f0,&p_386->g_101.f0,&p_386->g_234[0],&p_386->g_101.f0,&p_386->g_101.f0};
        int i;
        if (p_386->g_335.f3)
            break;
        for (p_386->g_347 = 0; (p_386->g_347 <= (-14)); p_386->g_347 = safe_sub_func_int64_t_s_s(p_386->g_347, 1))
        { /* block id: 156 */
            int32_t *l_375 = &p_386->g_2[1];
            int32_t *l_376[5];
            struct S2 **l_383 = &l_382[1];
            int i;
            for (i = 0; i < 5; i++)
                l_376[i] = &p_386->g_2[0];
            l_377++;
            (*p_386->g_380) = &p_386->g_347;
            (*l_383) = l_382[2];
            if (l_27[4])
                break;
        }
        if (l_377)
            continue;
        (*p_386->g_384) = (*p_386->g_241);
    }
    return l_385;
}


/* ------------------------------------------ */
/* 
 * reads : p_386->g_234.f0 p_386->g_329 p_386->g_335 p_386->g_342 p_386->g_273.f0 p_386->g_94 p_386->g_347 p_386->g_242 p_386->g_245 p_386->g_2
 * writes: p_386->g_311 p_386->g_225.f0 p_386->g_350.f2
 */
int16_t  func_18(uint32_t  p_19, int8_t * p_20, int8_t * p_21, uint32_t  p_22, struct S9 * p_386)
{ /* block id: 135 */
    VECTOR(int16_t, 2) l_330 = (VECTOR(int16_t, 2))((-6L), (-1L));
    int32_t l_348 = 0x7B7ADCC2L;
    union U3 *l_349[4][3][1];
    int32_t l_351 = 0x0E44C25FL;
    int16_t *l_352 = (void*)0;
    int16_t *l_353 = (void*)0;
    int16_t *l_354[3];
    int32_t l_355 = 1L;
    int16_t l_356 = (-6L);
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_349[i][j][k] = &p_386->g_350[0][0];
        }
    }
    for (i = 0; i < 3; i++)
        l_354[i] = &p_386->g_275.f0;
    p_386->g_350[0][0].f2 = (safe_div_func_int8_t_s_s((((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x6C76L, 0x20B1L)), 0x7285L, 0x26F6L)).lo, ((VECTOR(int16_t, 16))((-8L), 0x29A9L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x4214L, (l_355 &= ((safe_add_func_int8_t_s_s(((*p_21) = ((p_386->g_234[0].f0 , 0xA5L) || 9UL)), ((p_21 == &p_386->g_89) >= ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_386->g_329.yyxy)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(l_330.yxxyyxxyxyxxxyxx)).s602c, ((VECTOR(int16_t, 16))(0x4D9DL, ((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((p_386->g_335 , GROUP_DIVERGE(2, 1)), (safe_add_func_uint32_t_u_u((((((((l_348 = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(p_386->g_342.s5160)).w, ((((((safe_sub_func_uint8_t_u_u(p_386->g_273[1].f0, (((p_386->g_225.f0 = (safe_sub_func_uint8_t_u_u((+p_22), p_386->g_94))) , FAKE_DIVERGE(p_386->group_0_offset, get_group_id(0), 10)) && 255UL))) ^ 7UL) < p_386->g_347) , FAKE_DIVERGE(p_386->group_0_offset, get_group_id(0), 10)) <= p_386->g_94) , 0L))), l_330.x)) < p_19)) , l_349[2][0][0]) == p_386->g_242) > 0x31E5L) , 0x2AD2L) | p_386->g_245) , 0x288BBBB0L), l_330.y)))) ^ (-8L)), p_386->g_347)) >= l_330.x) , p_19) || l_351), 9L, p_386->g_2[1], 0x7A1AL, 0x1D18L, l_351, l_351, l_330.y, ((VECTOR(int16_t, 4))(0L)), p_19, (-4L), 0x181BL)).sdba1, ((VECTOR(int16_t, 4))(1L))))).zywywwwxxyxzxxxx, (int16_t)l_330.x))).se7)), ((VECTOR(int16_t, 8))(0x2563L)), 0x0554L, (-1L))).s6ea4, ((VECTOR(uint16_t, 4))(65527UL))))).w))) > 0UL)), 1L, 0L)), l_348, 0L, 0x7949L, 0x1127L)).even)), l_356, ((VECTOR(int16_t, 2))(1L)), 0x3179L, 0L, 0x23E0L, 1L, 0x02A1L, 0x0003L, (-3L))).s2f))).even ^ 1L), l_330.y));
    return l_330.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_386->g_33 p_386->g_188 p_386->g_300 p_386->g_147 p_386->g_273.f1 p_386->g_240.f0 p_386->g_94 p_386->g_42 p_386->g_234.f0 p_386->g_253 p_386->g_275.f0 p_386->l_comm_values p_386->g_227.f0 p_386->g_195.f0 p_386->g_273.f2 p_386->g_320
 * writes: p_386->g_89 p_386->g_141 p_386->g_240.f0 p_386->g_91 p_386->g_94 p_386->g_100
 */
uint32_t  func_23(uint64_t  p_24, int8_t * p_25, int8_t * p_26, struct S9 * p_386)
{ /* block id: 120 */
    int64_t l_277[4][7][8] = {{{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L}},{{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L}},{{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L}},{{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L},{0x04988C3F0006055EL,9L,0x2E59CB8B082DA739L,1L,2L,1L,0x1F5C7FB6934789D0L,1L}}};
    int32_t l_278[5] = {1L,1L,1L,1L,1L};
    int32_t *l_279 = &p_386->g_91;
    int32_t *l_280 = (void*)0;
    int32_t *l_281 = &p_386->g_94;
    int32_t *l_282 = &l_278[2];
    int32_t *l_283 = &p_386->g_240.f2;
    int32_t *l_284 = &p_386->g_240.f2;
    int32_t *l_285 = &p_386->g_94;
    int32_t *l_286 = (void*)0;
    int32_t *l_287 = (void*)0;
    int32_t *l_288[4];
    uint32_t l_289 = 0x623DC06BL;
    VECTOR(uint32_t, 8) l_305 = (VECTOR(uint32_t, 8))(0xA561795AL, (VECTOR(uint32_t, 4))(0xA561795AL, (VECTOR(uint32_t, 2))(0xA561795AL, 0UL), 0UL), 0UL, 0xA561795AL, 0UL);
    VECTOR(uint32_t, 2) l_306 = (VECTOR(uint32_t, 2))(0xF23B7BDEL, 0xDDDB469AL);
    int64_t *l_307 = (void*)0;
    int64_t *l_308 = &p_386->g_141;
    VECTOR(int8_t, 4) l_309 = (VECTOR(int8_t, 4))(0x00L, (VECTOR(int8_t, 2))(0x00L, 0x40L), 0x40L);
    int8_t *l_310[8];
    int8_t l_318[10] = {0x6FL,0x45L,0L,0x45L,0x6FL,0x6FL,0x45L,0L,0x45L,0x6FL};
    int32_t l_319 = (-1L);
    union U5 *l_321 = &p_386->g_101;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_288[i] = &p_386->g_94;
    for (i = 0; i < 8; i++)
        l_310[i] = &p_386->g_311[0];
    l_289--;
    p_386->g_100 = (((((*l_282) > p_24) >= (safe_div_func_int8_t_s_s((+((*p_26) = (*p_25))), ((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_386->group_2_offset, get_group_id(2), 10), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((safe_lshift_func_int8_t_s_u(0x62L, ((safe_sub_func_uint8_t_u_u(p_386->g_188[2], ((!((VECTOR(uint16_t, 8))(p_386->g_300.yzyzxzwy)).s4) | (((p_386->g_147.y | (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_305.s4677)))).xzxxzyyx, ((VECTOR(uint32_t, 2))(l_306.yx)).xxxyxyxy))).s3 || (((p_386->g_240.f0 |= ((*l_308) = p_386->g_273[1].f1)) > (((((((*l_285) |= ((*l_279) = ((VECTOR(int8_t, 4))(l_309.zywx)).z)) >= (~((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((!(*l_282)), (((((((safe_mul_func_uint16_t_u_u(l_318[5], 1UL)) , (-1L)) < p_386->g_42) > p_24) > p_24) >= p_386->g_234[0].f0) || p_386->g_253.sc))), p_386->g_275.f0)) < 0x4E8BL))) >= p_386->l_comm_values[(safe_mod_func_uint32_t_u_u(p_386->tid, 79))]) && 2L) >= p_386->g_227.f0) , l_319)) , p_386->g_195.f0)) | 0x018CL) != (*l_282)) == p_24), p_386->g_253.s4)), 251UL))) > 5L) , p_386->g_273[1].f2)))) ^ p_386->g_253.sc))), ((VECTOR(int8_t, 2))(1L)), 0x1EL)), ((VECTOR(int8_t, 2))(1L)), 0x29L, (-1L))).s2)) & 255UL)))) , p_386->g_320[2][2]) , l_321);
    if ((atomic_inc(&p_386->g_atomic_input[53 * get_linear_group_id() + 5]) == 0))
    { /* block id: 129 */
        struct S1 *l_322 = (void*)0;
        struct S1 *l_323 = (void*)0;
        l_323 = l_322;
        unsigned int result = 0;
        atomic_add(&p_386->g_special_values[53 * get_linear_group_id() + 5], result);
    }
    else
    { /* block id: 131 */
        (1 + 1);
    }
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_386->g_89 p_386->g_222 p_386->g_225 p_386->g_253 p_386->g_91 p_386->g_240.f3 p_386->g_141 p_386->g_273
 * writes: p_386->g_89 p_386->g_91 p_386->g_240.f3 p_386->g_275
 */
int8_t * func_34(int32_t  p_35, uint64_t * p_36, uint64_t * p_37, int16_t  p_38, struct S9 * p_386)
{ /* block id: 101 */
    uint32_t l_251[3][8][7];
    uint32_t l_252 = 4294967287UL;
    int32_t l_262 = (-9L);
    VECTOR(int8_t, 4) l_263 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0L), 0L);
    VECTOR(int8_t, 16) l_264 = (VECTOR(int8_t, 16))(0x25L, (VECTOR(int8_t, 4))(0x25L, (VECTOR(int8_t, 2))(0x25L, 1L), 1L), 1L, 0x25L, 1L, (VECTOR(int8_t, 2))(0x25L, 1L), (VECTOR(int8_t, 2))(0x25L, 1L), 0x25L, 1L, 0x25L, 1L);
    int32_t *l_269[9][6];
    int32_t **l_268 = &l_269[4][1];
    int32_t *l_270 = &p_386->g_91;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 7; k++)
                l_251[i][j][k] = 0x53CF452AL;
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
            l_269[i][j] = &p_386->g_2[0];
    }
    for (p_386->g_89 = 10; (p_386->g_89 != (-9)); p_386->g_89--)
    { /* block id: 104 */
        if (p_386->g_222[4])
            break;
        return &p_386->g_89;
    }
    (*l_270) ^= ((safe_div_func_uint16_t_u_u((((safe_unary_minus_func_uint64_t_u(0x7D87469C53B7783CL)) || l_251[0][5][2]) | (p_386->g_225 , l_252)), ((VECTOR(uint16_t, 2))(p_386->g_253.s96)).lo)) , (((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((0x773DE9391A50DC03L | ((safe_rshift_func_int8_t_s_s((l_262 = (safe_lshift_func_int8_t_s_s(l_251[0][5][2], 7))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_263.wyzzxxxxxywwyxxy)).odd)), ((VECTOR(int8_t, 2))(l_264.s96)).xxxxxxyy))).hi)).y)) || 4UL)), 4)), (safe_unary_minus_func_uint16_t_u((safe_div_func_uint8_t_u_u((((*l_268) = (void*)0) != &p_386->g_91), p_386->g_253.s3)))))) >= 0xA2071430L) == l_264.s5));
    for (p_386->g_240.f3 = (-22); (p_386->g_240.f3 > 3); p_386->g_240.f3 = safe_add_func_int64_t_s_s(p_386->g_240.f3, 5))
    { /* block id: 113 */
        struct S0 *l_274[1];
        int32_t l_276 = (-8L);
        int i;
        for (i = 0; i < 1; i++)
            l_274[i] = &p_386->g_273[1];
        (*l_270) |= ((!p_386->g_141) >= (18446744073709551606UL < FAKE_DIVERGE(p_386->group_1_offset, get_group_id(1), 10)));
        p_386->g_275 = p_386->g_273[1];
        (*l_268) = &p_386->g_91;
        if (l_276)
            continue;
    }
    return &p_386->g_89;
}


/* ------------------------------------------ */
/* 
 * reads : p_386->g_42 p_386->g_2 p_386->g_comm_values p_386->g_14 p_386->g_83 p_386->g_95 p_386->g_99 p_386->g_100 p_386->g_101.f0.f2 p_386->g_108 p_386->g_15 p_386->g_118 p_386->g_101.f0.f0 p_386->g_33 p_386->g_130 p_386->g_141 p_386->g_67 p_386->g_93 p_386->g_101.f0 p_386->g_203 p_386->g_195.f2 p_386->g_131.f0 p_386->g_205 p_386->g_222 p_386->g_227 p_386->g_228 p_386->g_194 p_386->g_94 p_386->g_241
 * writes: p_386->g_42 p_386->g_67 p_386->g_89 p_386->g_95 p_386->g_100 p_386->g_108 p_386->g_15 p_386->g_141 p_386->g_14 p_386->g_188 p_386->g_195 p_386->g_234 p_386->g_94 p_386->g_242
 */
int32_t  func_39(uint64_t * p_40, struct S9 * p_386)
{ /* block id: 14 */
    VECTOR(uint16_t, 8) l_68 = (VECTOR(uint16_t, 8))(0x8F5BL, (VECTOR(uint16_t, 4))(0x8F5BL, (VECTOR(uint16_t, 2))(0x8F5BL, 0xF3BBL), 0xF3BBL), 0xF3BBL, 0x8F5BL, 0xF3BBL);
    int8_t *l_109 = &p_386->g_33;
    int32_t l_236 = 0x2C0EC065L;
    uint16_t l_243 = 0x57D3L;
    int i;
    for (p_386->g_42 = (-22); (p_386->g_42 < 45); p_386->g_42 = safe_add_func_int64_t_s_s(p_386->g_42, 6))
    { /* block id: 17 */
        uint16_t *l_64 = (void*)0;
        uint16_t *l_65 = (void*)0;
        uint16_t *l_66 = &p_386->g_67;
        int32_t l_73 = 0L;
        uint8_t *l_107 = &p_386->g_108;
        union U3 *l_239 = &p_386->g_240;
        (*p_386->g_228) = func_45(p_40, func_51(p_386->g_2[0], p_386), (safe_add_func_uint8_t_u_u(0xFCL, ((safe_lshift_func_uint8_t_u_u(((*l_107) = func_58(((((*l_107) ^= (((*l_66) = p_386->g_comm_values[p_386->tid]) > ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(6UL, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(65526UL, 65535UL)).xyyx, ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_68.s57123673)).s3055014212065741)).even, ((VECTOR(uint16_t, 8))(func_69((func_71(((65532UL && (FAKE_DIVERGE(p_386->global_0_offset, get_global_id(0), 10) & l_73)) , (safe_rshift_func_int16_t_s_u(((safe_div_func_int64_t_s_s(0L, ((((((((void*)0 == l_64) < p_386->g_14.x) < 0x00F61094B98F8D6FL) , 0xDAL) | l_73) , FAKE_DIVERGE(p_386->global_2_offset, get_global_id(2), 10)) || l_73))) , 0x0818L), 15))), p_386) , l_68.s7), p_386), ((VECTOR(uint16_t, 2))(5UL)), l_68.s6, ((VECTOR(uint16_t, 2))(0xBCF7L)), 0UL, 0UL))))).hi))), ((VECTOR(uint16_t, 2))(65535UL)), 8UL)))).s7275220654412107)), (uint16_t)l_73))).s5a, ((VECTOR(uint16_t, 2))(0xB374L))))), ((VECTOR(uint16_t, 4))(0xD2F3L)), 0x1296L, 0x17F8L)).s6)) >= 1UL) | p_386->g_42), l_73, p_40, l_73, l_109, p_386)), GROUP_DIVERGE(2, 1))) ^ p_386->g_comm_values[p_386->tid]))), &p_386->g_42, l_107, p_386);
        for (p_386->g_141 = 0; (p_386->g_141 >= 6); ++p_386->g_141)
        { /* block id: 86 */
            struct S2 *l_232 = &p_386->g_101.f0;
            struct S2 *l_233[3][9] = {{&p_386->g_205,&p_386->g_205,&p_386->g_205,(void*)0,&p_386->g_101.f0,&p_386->g_227,&p_386->g_101.f0,&p_386->g_205,&p_386->g_101.f0},{&p_386->g_205,&p_386->g_205,&p_386->g_205,(void*)0,&p_386->g_101.f0,&p_386->g_227,&p_386->g_101.f0,&p_386->g_205,&p_386->g_101.f0},{&p_386->g_205,&p_386->g_205,&p_386->g_205,(void*)0,&p_386->g_101.f0,&p_386->g_227,&p_386->g_101.f0,&p_386->g_205,&p_386->g_101.f0}};
            int32_t *l_235[1][8][3] = {{{&p_386->g_91,&p_386->g_91,&p_386->g_91},{&p_386->g_91,&p_386->g_91,&p_386->g_91},{&p_386->g_91,&p_386->g_91,&p_386->g_91},{&p_386->g_91,&p_386->g_91,&p_386->g_91},{&p_386->g_91,&p_386->g_91,&p_386->g_91},{&p_386->g_91,&p_386->g_91,&p_386->g_91},{&p_386->g_91,&p_386->g_91,&p_386->g_91},{&p_386->g_91,&p_386->g_91,&p_386->g_91}}};
            int i, j, k;
            p_386->g_234[0] = (*p_386->g_194);
            l_236 = (l_73 = p_386->g_205.f0);
            for (p_386->g_94 = 0; (p_386->g_94 <= (-21)); --p_386->g_94)
            { /* block id: 92 */
                (*p_386->g_241) = l_239;
                if (l_243)
                    break;
                l_73 = 1L;
            }
            if (p_386->g_2[0])
                continue;
        }
    }
    return l_68.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_386->g_15 p_386->g_118 p_386->g_101.f0.f0 p_386->g_33 p_386->g_130 p_386->g_108 p_386->g_14 p_386->g_141 p_386->g_42 p_386->g_67 p_386->g_93 p_386->g_83 p_386->g_2 p_386->g_101.f0 p_386->g_203 p_386->g_195.f2 p_386->g_131.f0 p_386->g_205 p_386->g_222 p_386->g_227
 * writes: p_386->g_15 p_386->g_108 p_386->g_141 p_386->g_67 p_386->g_14 p_386->g_188 p_386->g_195
 */
struct S2  func_45(uint64_t * p_46, uint64_t * p_47, int16_t  p_48, uint64_t * p_49, int8_t * p_50, struct S9 * p_386)
{ /* block id: 36 */
    VECTOR(int64_t, 4) l_122 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 7L), 7L);
    int32_t l_129 = 0x59A7C643L;
    int8_t l_204[9][7][4] = {{{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL}},{{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL}},{{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL}},{{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL}},{{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL}},{{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL}},{{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL}},{{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL}},{{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL},{(-5L),0x23L,5L,0x6EL}}};
    int32_t l_221 = 0L;
    int32_t l_223 = (-1L);
    union U8 *l_224 = &p_386->g_225;
    union U8 **l_226 = &l_224;
    int i, j, k;
    for (p_386->g_15 = 0; (p_386->g_15 < 7); ++p_386->g_15)
    { /* block id: 39 */
        int32_t *l_112[3][8] = {{&p_386->g_2[0],&p_386->g_91,&p_386->g_91,&p_386->g_2[0],&p_386->g_2[0],&p_386->g_91,&p_386->g_91,&p_386->g_2[0]},{&p_386->g_2[0],&p_386->g_91,&p_386->g_91,&p_386->g_2[0],&p_386->g_2[0],&p_386->g_91,&p_386->g_91,&p_386->g_2[0]},{&p_386->g_2[0],&p_386->g_91,&p_386->g_91,&p_386->g_2[0],&p_386->g_2[0],&p_386->g_91,&p_386->g_91,&p_386->g_2[0]}};
        uint32_t l_113 = 0x6111D559L;
        VECTOR(uint8_t, 8) l_121 = (VECTOR(uint8_t, 8))(0xAFL, (VECTOR(uint8_t, 4))(0xAFL, (VECTOR(uint8_t, 2))(0xAFL, 0xA4L), 0xA4L), 0xA4L, 0xAFL, 0xA4L);
        int64_t *l_123 = (void*)0;
        int64_t *l_124 = (void*)0;
        int64_t *l_125 = (void*)0;
        int64_t *l_126 = (void*)0;
        int64_t *l_127 = (void*)0;
        int64_t *l_128 = (void*)0;
        uint8_t *l_138[8][1] = {{&p_386->g_108},{&p_386->g_108},{&p_386->g_108},{&p_386->g_108},{&p_386->g_108},{&p_386->g_108},{&p_386->g_108},{&p_386->g_108}};
        int32_t **l_142 = &l_112[1][5];
        VECTOR(int16_t, 8) l_157 = (VECTOR(int16_t, 8))(0x5A0FL, (VECTOR(int16_t, 4))(0x5A0FL, (VECTOR(int16_t, 2))(0x5A0FL, 0L), 0L), 0L, 0x5A0FL, 0L);
        VECTOR(uint64_t, 16) l_196 = (VECTOR(uint64_t, 16))(0x226BEB426B7B25FEL, (VECTOR(uint64_t, 4))(0x226BEB426B7B25FEL, (VECTOR(uint64_t, 2))(0x226BEB426B7B25FEL, 0xC59D00192FCFE0A5L), 0xC59D00192FCFE0A5L), 0xC59D00192FCFE0A5L, 0x226BEB426B7B25FEL, 0xC59D00192FCFE0A5L, (VECTOR(uint64_t, 2))(0x226BEB426B7B25FEL, 0xC59D00192FCFE0A5L), (VECTOR(uint64_t, 2))(0x226BEB426B7B25FEL, 0xC59D00192FCFE0A5L), 0x226BEB426B7B25FEL, 0xC59D00192FCFE0A5L, 0x226BEB426B7B25FEL, 0xC59D00192FCFE0A5L);
        int i, j;
        l_113--;
        (*l_142) = (((safe_mul_func_int16_t_s_s((((VECTOR(int16_t, 16))(p_386->g_118.s7271116317702262)).s4 != p_386->g_15), 65530UL)) ^ ((p_386->g_101.f0.f0 & ((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_121.s2765)).x, 0)) , (((((((l_129 = ((VECTOR(int64_t, 8))(0x118AE1307C177FA4L, 0x08C6B94EFEA996BBL, 0L, 5L, ((VECTOR(int64_t, 2))(l_122.zz)), (-9L), 0x2D9615D0954A6F35L)).s3) != p_386->g_33) > (((void*)0 != p_386->g_130) > ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))((-1L), 0x58C38B956188C7F9L)).yyyyyxxx)).s5)) || ((((p_48 ^ (safe_div_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((safe_lshift_func_int8_t_s_u(((((p_386->g_108--) , (void*)0) != (void*)0) | 0x7A5E242FL), 5)) , 0x26L), 0x52L, 0xD1L, ((VECTOR(uint8_t, 4))(0x5DL)), 255UL)))).s0, 0UL)) & p_386->g_15) , p_48), 0x15L))) | p_386->g_14.x) , p_47) != (void*)0)) != p_386->g_141) <= l_122.z) | 0L))) & p_48)) , l_112[1][5]);
        l_129 &= p_48;
        for (p_386->g_108 = 21; (p_386->g_108 <= 40); ++p_386->g_108)
        { /* block id: 47 */
            VECTOR(int16_t, 16) l_156 = (VECTOR(int16_t, 16))(0x6011L, (VECTOR(int16_t, 4))(0x6011L, (VECTOR(int16_t, 2))(0x6011L, 0x1F09L), 0x1F09L), 0x1F09L, 0x6011L, 0x1F09L, (VECTOR(int16_t, 2))(0x6011L, 0x1F09L), (VECTOR(int16_t, 2))(0x6011L, 0x1F09L), 0x6011L, 0x1F09L, 0x6011L, 0x1F09L);
            VECTOR(uint8_t, 16) l_164 = (VECTOR(uint8_t, 16))(0x75L, (VECTOR(uint8_t, 4))(0x75L, (VECTOR(uint8_t, 2))(0x75L, 0x54L), 0x54L), 0x54L, 0x75L, 0x54L, (VECTOR(uint8_t, 2))(0x75L, 0x54L), (VECTOR(uint8_t, 2))(0x75L, 0x54L), 0x75L, 0x54L, 0x75L, 0x54L);
            int32_t l_178 = 0x5395DFB6L;
            int32_t l_192 = 0L;
            int i;
            for (p_386->g_141 = 0; (p_386->g_141 != (-20)); p_386->g_141--)
            { /* block id: 50 */
                uint64_t *l_150[1];
                int32_t l_151 = 0x6F5D40A5L;
                uint32_t *l_167 = &l_113;
                uint16_t *l_170 = &p_386->g_67;
                int16_t *l_171 = (void*)0;
                int16_t *l_172 = (void*)0;
                int16_t *l_173 = (void*)0;
                int16_t *l_174 = (void*)0;
                int16_t *l_175 = (void*)0;
                VECTOR(int16_t, 2) l_189 = (VECTOR(int16_t, 2))(0x29B7L, 0x65BDL);
                int i;
                for (i = 0; i < 1; i++)
                    l_150[i] = &p_386->g_101.f2;
                if ((((VECTOR(int32_t, 2))(p_386->g_147.yy)).odd == (safe_add_func_uint64_t_u_u((l_151 = p_48), ((p_386->g_14.y = (safe_sub_func_int8_t_s_s(((((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_156.s44a3)).yxxzzzzz)).even, ((VECTOR(int16_t, 4))(l_157.s0441))))).w | ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_170) &= (((l_129 = (safe_sub_func_int8_t_s_s(0x58L, 246UL))) && (~(l_164.sb >= (safe_div_func_int32_t_s_s((p_48 == p_386->g_42), ((*l_167)++)))))) , 65529UL)), 6)), p_386->g_42)) >= p_386->g_42)) , l_129), (*p_50)))) > l_156.sb)))))
                { /* block id: 56 */
                    if (p_386->g_93)
                        break;
                    for (p_48 = 0; (p_48 > 22); p_48 = safe_add_func_uint8_t_u_u(p_48, 4))
                    { /* block id: 60 */
                        if (p_386->g_67)
                            break;
                    }
                    (*l_142) = &l_129;
                }
                else
                { /* block id: 64 */
                    uint32_t l_179 = 4294967295UL;
                    int8_t *l_191 = (void*)0;
                    int8_t **l_190 = &l_191;
                    ++l_179;
                    l_192 ^= ((safe_mul_func_int8_t_s_s((l_151 ^ p_386->g_83.w), (safe_lshift_func_uint8_t_u_s(((((((safe_add_func_uint8_t_u_u(((p_386->g_188[0] = l_178) | (*p_50)), p_48)) & p_48) ^ 0x43EDL) >= ((VECTOR(int16_t, 16))(0x050DL, 0x4D09L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(l_189.xyyxyyyy)).s20, ((VECTOR(int16_t, 16))((-1L), ((((*l_190) = (void*)0) != &p_386->g_89) & 0x1CCF118B289E97AAL), l_164.s8, 0x2C81L, ((VECTOR(int16_t, 2))((-1L))), (-2L), 0x1C83L, p_386->g_91, ((VECTOR(int16_t, 4))(0x4F7CL)), 0x7AE3L, 9L, 0x596CL)).s44))), (-5L), 0L)), ((VECTOR(int16_t, 4))(0L)))), p_386->g_comm_values[p_386->tid], p_386->g_101.f0.f0, ((VECTOR(int16_t, 4))(0x3AFFL)))).s7) , p_386->g_2[0]) <= l_122.y), l_179)))) & GROUP_DIVERGE(0, 1));
                }
                p_386->g_195 = p_386->g_101.f0;
                l_204[5][5][0] |= (((((VECTOR(uint64_t, 2))(l_196.s95)).hi < (safe_div_func_uint64_t_u_u(((l_129 > (safe_mul_func_uint8_t_u_u((l_178 = (&p_386->g_89 == l_138[1][0])), (safe_sub_func_int16_t_s_s((((0x34A6L ^ ((1UL & ((-4L) == ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_386->g_203.yyyyyyxy)))).s3)) != (l_122.x | 0x36D5L))) && (*p_50)) && p_386->g_195.f2), p_48))))) && l_151), FAKE_DIVERGE(p_386->local_2_offset, get_local_id(2), 10)))) >= l_156.s1) || p_48);
                if (p_386->g_131.f0)
                    continue;
            }
            return p_386->g_205;
        }
    }
    (*l_226) = ((safe_sub_func_uint64_t_u_u((((VECTOR(uint32_t, 2))(0x5D61E199L, 0x337A3339L)).lo != p_48), ((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(0x23A1L, (0x55911529E7C32A7BL ^ (p_48 & 1L)), ((VECTOR(int16_t, 2))(0x1827L, 7L)), ((l_223 &= (safe_unary_minus_func_uint64_t_u((((l_221 = ((safe_lshift_func_uint8_t_u_s(p_386->g_15, (safe_lshift_func_int8_t_s_u(((&p_386->g_2[0] != &p_386->g_94) || (((((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((l_129 = (safe_rshift_func_uint16_t_u_u(l_122.x, 13))) <= 0L), l_204[1][0][2])), l_204[5][5][0])) < 0x68D3L) == 0x02L) >= p_48) <= GROUP_DIVERGE(0, 1))), 5)))) & p_386->g_2[0])) == p_386->g_222[2]) > GROUP_DIVERGE(1, 1))))) , p_386->g_205.f0), l_129, 7L, 0x2321L)).s5, FAKE_DIVERGE(p_386->local_0_offset, get_local_id(0), 10))) | 0x8EL))) , l_224);
    return p_386->g_227;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t * func_51(int32_t  p_52, struct S9 * p_386)
{ /* block id: 18 */
    uint64_t *l_53 = &p_386->g_42;
    return l_53;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_58(uint64_t  p_59, int16_t  p_60, uint64_t * p_61, int32_t  p_62, int8_t * p_63, struct S9 * p_386)
{ /* block id: 33 */
    return p_60;
}


/* ------------------------------------------ */
/* 
 * reads : p_386->g_comm_values p_386->g_99 p_386->g_100 p_386->g_101.f0.f2
 * writes: p_386->g_100
 */
uint16_t  func_69(int64_t  p_70, struct S9 * p_386)
{ /* block id: 26 */
    int32_t l_98 = (-1L);
    union U5 **l_102 = &p_386->g_100;
    union U5 *l_104[10] = {&p_386->g_101,&p_386->g_101,&p_386->g_101,&p_386->g_101,&p_386->g_101,&p_386->g_101,&p_386->g_101,&p_386->g_101,&p_386->g_101,&p_386->g_101};
    union U5 **l_103 = &l_104[9];
    int32_t *l_106 = &p_386->g_2[0];
    int32_t **l_105 = &l_106;
    int i;
    l_98 = p_386->g_comm_values[p_386->tid];
    (*l_103) = ((*l_102) = (p_386->g_99 , p_386->g_100));
    (*l_105) = &l_98;
    return p_386->g_101.f0.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_386->g_83 p_386->g_95 p_386->g_42
 * writes: p_386->g_89 p_386->g_95
 */
uint64_t  func_71(uint64_t  p_72, struct S9 * p_386)
{ /* block id: 21 */
    union U4 *l_78[2];
    union U4 **l_81 = &l_78[1];
    VECTOR(int16_t, 16) l_82 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int16_t, 2))(0L, 1L), (VECTOR(int16_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    VECTOR(uint16_t, 8) l_84 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 65535UL), 65535UL), 65535UL, 65532UL, 65535UL);
    VECTOR(uint16_t, 2) l_85 = (VECTOR(uint16_t, 2))(0UL, 0x15B5L);
    VECTOR(uint16_t, 4) l_86 = (VECTOR(uint16_t, 4))(0x3C71L, (VECTOR(uint16_t, 2))(0x3C71L, 65535UL), 65535UL);
    VECTOR(uint16_t, 8) l_87 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xE810L), 0xE810L), 0xE810L, 65535UL, 0xE810L);
    VECTOR(uint16_t, 2) l_88 = (VECTOR(uint16_t, 2))(65535UL, 1UL);
    int32_t *l_90[10][7] = {{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]},{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]},{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]},{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]},{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]},{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]},{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]},{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]},{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]},{&p_386->g_2[1],(void*)0,&p_386->g_2[0],(void*)0,(void*)0,&p_386->g_2[0],&p_386->g_2[1]}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_78[i] = &p_386->g_79;
    (*l_81) = l_78[1];
    p_386->g_89 = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(0x22910E9FL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_82.s39bca7af)).s04, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(p_386->g_83.wzzwwxzzzzxxyzxz)).s60))), 65535UL, 0x1321L)).odd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_84.s1561437011627153)).sc3)).yxxy)).even))), ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(l_85.xyxyyyxy)).s24, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(l_86.wxywwwzzwwzxzwxx)).s1120))).hi)))))).xxxyxxyx))).s11, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_87.s71556464)).s44)), 65533UL, 0UL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_88.yxyyyyyy)).odd))))).lo)))))))), 0x21833D83L, 0x6D8564F5L)), 0L, 0x2EF27357L, (-1L))).s53))).odd;
    p_386->g_95++;
    return p_386->g_42;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[79];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 79; i++)
            l_comm_values[i] = 1;
    struct S9 c_387;
    struct S9* p_386 = &c_387;
    struct S9 c_388 = {
        {1L,1L}, // p_386->g_2
        (VECTOR(int16_t, 4))(0x626BL, (VECTOR(int16_t, 2))(0x626BL, 0x7DA6L), 0x7DA6L), // p_386->g_14
        0x487972E7L, // p_386->g_15
        0x97EC53A21B78CD90L, // p_386->g_29
        0x51L, // p_386->g_33
        0x4126315BFEB1EC6CL, // p_386->g_42
        0x9588L, // p_386->g_67
        {-1L}, // p_386->g_79
        (void*)0, // p_386->g_80
        (VECTOR(uint16_t, 4))(0xD061L, (VECTOR(uint16_t, 2))(0xD061L, 0xE56BL), 0xE56BL), // p_386->g_83
        0x4EL, // p_386->g_89
        0L, // p_386->g_91
        0x2E82L, // p_386->g_92
        0L, // p_386->g_93
        (-1L), // p_386->g_94
        4294967295UL, // p_386->g_95
        {0L}, // p_386->g_99
        {{0x37C3E796L,0xA17685C1309E2023L,-1L}}, // p_386->g_101
        &p_386->g_101, // p_386->g_100
        246UL, // p_386->g_108
        (VECTOR(int16_t, 8))(0x5BA7L, (VECTOR(int16_t, 4))(0x5BA7L, (VECTOR(int16_t, 2))(0x5BA7L, 0x6B29L), 0x6B29L), 0x6B29L, 0x5BA7L, 0x6B29L), // p_386->g_118
        {5L}, // p_386->g_131
        &p_386->g_131, // p_386->g_130
        0x330F89493EADC2A9L, // p_386->g_141
        (VECTOR(int32_t, 2))((-4L), 5L), // p_386->g_147
        {0x6744938FFB32E192L,0x6744938FFB32E192L,0x6744938FFB32E192L}, // p_386->g_188
        {&p_386->g_101.f0,&p_386->g_101.f0,&p_386->g_101.f0,&p_386->g_101.f0,&p_386->g_101.f0,&p_386->g_101.f0,&p_386->g_101.f0,&p_386->g_101.f0,&p_386->g_101.f0,&p_386->g_101.f0}, // p_386->g_193
        &p_386->g_101.f0, // p_386->g_194
        {0x58ABC683L,0xD5A70149C1215010L,0L}, // p_386->g_195
        (VECTOR(uint32_t, 2))(1UL, 8UL), // p_386->g_203
        {4L,0xB91CD5F59C59D2C9L,0x5BBE093AL}, // p_386->g_205
        {0x41140D0FL,0x41140D0FL,0x41140D0FL,0x41140D0FL,0x41140D0FL}, // p_386->g_222
        {0xF5F3997202116EFCL}, // p_386->g_225
        {-1L,0x4169CB32DCF4C4EFL,8L}, // p_386->g_227
        &p_386->g_195, // p_386->g_228
        &p_386->g_101.f0, // p_386->g_231
        {{0x612D4DC2L,0UL,-6L},{0x612D4DC2L,0UL,-6L},{0x612D4DC2L,0UL,-6L},{0x612D4DC2L,0UL,-6L}}, // p_386->g_234
        {0x78CF511DB535A2EFL}, // p_386->g_240
        &p_386->g_240, // p_386->g_242
        &p_386->g_242, // p_386->g_241
        7UL, // p_386->g_245
        &p_386->g_245, // p_386->g_244
        (VECTOR(uint16_t, 16))(0x234EL, (VECTOR(uint16_t, 4))(0x234EL, (VECTOR(uint16_t, 2))(0x234EL, 6UL), 6UL), 6UL, 0x234EL, 6UL, (VECTOR(uint16_t, 2))(0x234EL, 6UL), (VECTOR(uint16_t, 2))(0x234EL, 6UL), 0x234EL, 6UL, 0x234EL, 6UL), // p_386->g_253
        {{-1L,0x5D79ECDAL,0x980F06EDL,0xE048C7DDD2FD38EEL,0x2D07L},{-1L,0x5D79ECDAL,0x980F06EDL,0xE048C7DDD2FD38EEL,0x2D07L},{-1L,0x5D79ECDAL,0x980F06EDL,0xE048C7DDD2FD38EEL,0x2D07L},{-1L,0x5D79ECDAL,0x980F06EDL,0xE048C7DDD2FD38EEL,0x2D07L}}, // p_386->g_273
        {3L,0L,4294967295UL,18446744073709551613UL,65530UL}, // p_386->g_275
        (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x8A88L), 0x8A88L), // p_386->g_300
        {0x78L}, // p_386->g_311
        {{{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L}},{{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L}},{{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L}},{{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L}},{{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L},{0L,0xB7D85DBEB43ED56CL,0x2F7ED305L}}}, // p_386->g_320
        (VECTOR(int16_t, 2))((-1L), 1L), // p_386->g_329
        {1L,1L,4294967295UL,18446744073709551613UL,0xB89AL}, // p_386->g_335
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x7386A1B6L), 0x7386A1B6L), 0x7386A1B6L, 4294967295UL, 0x7386A1B6L), // p_386->g_342
        0x4E999821L, // p_386->g_347
        {{{-5L},{0x15150329AF886292L},{0x15150329AF886292L}},{{-5L},{0x15150329AF886292L},{0x15150329AF886292L}},{{-5L},{0x15150329AF886292L},{0x15150329AF886292L}},{{-5L},{0x15150329AF886292L},{0x15150329AF886292L}},{{-5L},{0x15150329AF886292L},{0x15150329AF886292L}},{{-5L},{0x15150329AF886292L},{0x15150329AF886292L}}}, // p_386->g_350
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_386->g_381
        &p_386->g_381[8], // p_386->g_380
        &p_386->g_242, // p_386->g_384
        0, // p_386->v_collective
        sequence_input[get_global_id(0)], // p_386->global_0_offset
        sequence_input[get_global_id(1)], // p_386->global_1_offset
        sequence_input[get_global_id(2)], // p_386->global_2_offset
        sequence_input[get_local_id(0)], // p_386->local_0_offset
        sequence_input[get_local_id(1)], // p_386->local_1_offset
        sequence_input[get_local_id(2)], // p_386->local_2_offset
        sequence_input[get_group_id(0)], // p_386->group_0_offset
        sequence_input[get_group_id(1)], // p_386->group_1_offset
        sequence_input[get_group_id(2)], // p_386->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[0][get_linear_local_id()])), // p_386->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_387 = c_388;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_386);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_386->g_2[i], "p_386->g_2[i]", print_hash_value);

    }
    transparent_crc(p_386->g_14.x, "p_386->g_14.x", print_hash_value);
    transparent_crc(p_386->g_14.y, "p_386->g_14.y", print_hash_value);
    transparent_crc(p_386->g_14.z, "p_386->g_14.z", print_hash_value);
    transparent_crc(p_386->g_14.w, "p_386->g_14.w", print_hash_value);
    transparent_crc(p_386->g_15, "p_386->g_15", print_hash_value);
    transparent_crc(p_386->g_29, "p_386->g_29", print_hash_value);
    transparent_crc(p_386->g_33, "p_386->g_33", print_hash_value);
    transparent_crc(p_386->g_42, "p_386->g_42", print_hash_value);
    transparent_crc(p_386->g_67, "p_386->g_67", print_hash_value);
    transparent_crc(p_386->g_79.f0, "p_386->g_79.f0", print_hash_value);
    transparent_crc(p_386->g_83.x, "p_386->g_83.x", print_hash_value);
    transparent_crc(p_386->g_83.y, "p_386->g_83.y", print_hash_value);
    transparent_crc(p_386->g_83.z, "p_386->g_83.z", print_hash_value);
    transparent_crc(p_386->g_83.w, "p_386->g_83.w", print_hash_value);
    transparent_crc(p_386->g_89, "p_386->g_89", print_hash_value);
    transparent_crc(p_386->g_91, "p_386->g_91", print_hash_value);
    transparent_crc(p_386->g_92, "p_386->g_92", print_hash_value);
    transparent_crc(p_386->g_93, "p_386->g_93", print_hash_value);
    transparent_crc(p_386->g_94, "p_386->g_94", print_hash_value);
    transparent_crc(p_386->g_95, "p_386->g_95", print_hash_value);
    transparent_crc(p_386->g_99.f0, "p_386->g_99.f0", print_hash_value);
    transparent_crc(p_386->g_101.f0.f0, "p_386->g_101.f0.f0", print_hash_value);
    transparent_crc(p_386->g_101.f0.f1, "p_386->g_101.f0.f1", print_hash_value);
    transparent_crc(p_386->g_101.f0.f2, "p_386->g_101.f0.f2", print_hash_value);
    transparent_crc(p_386->g_108, "p_386->g_108", print_hash_value);
    transparent_crc(p_386->g_118.s0, "p_386->g_118.s0", print_hash_value);
    transparent_crc(p_386->g_118.s1, "p_386->g_118.s1", print_hash_value);
    transparent_crc(p_386->g_118.s2, "p_386->g_118.s2", print_hash_value);
    transparent_crc(p_386->g_118.s3, "p_386->g_118.s3", print_hash_value);
    transparent_crc(p_386->g_118.s4, "p_386->g_118.s4", print_hash_value);
    transparent_crc(p_386->g_118.s5, "p_386->g_118.s5", print_hash_value);
    transparent_crc(p_386->g_118.s6, "p_386->g_118.s6", print_hash_value);
    transparent_crc(p_386->g_118.s7, "p_386->g_118.s7", print_hash_value);
    transparent_crc(p_386->g_131.f0, "p_386->g_131.f0", print_hash_value);
    transparent_crc(p_386->g_141, "p_386->g_141", print_hash_value);
    transparent_crc(p_386->g_147.x, "p_386->g_147.x", print_hash_value);
    transparent_crc(p_386->g_147.y, "p_386->g_147.y", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_386->g_188[i], "p_386->g_188[i]", print_hash_value);

    }
    transparent_crc(p_386->g_195.f0, "p_386->g_195.f0", print_hash_value);
    transparent_crc(p_386->g_195.f1, "p_386->g_195.f1", print_hash_value);
    transparent_crc(p_386->g_195.f2, "p_386->g_195.f2", print_hash_value);
    transparent_crc(p_386->g_203.x, "p_386->g_203.x", print_hash_value);
    transparent_crc(p_386->g_203.y, "p_386->g_203.y", print_hash_value);
    transparent_crc(p_386->g_205.f0, "p_386->g_205.f0", print_hash_value);
    transparent_crc(p_386->g_205.f1, "p_386->g_205.f1", print_hash_value);
    transparent_crc(p_386->g_205.f2, "p_386->g_205.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_386->g_222[i], "p_386->g_222[i]", print_hash_value);

    }
    transparent_crc(p_386->g_225.f0, "p_386->g_225.f0", print_hash_value);
    transparent_crc(p_386->g_227.f0, "p_386->g_227.f0", print_hash_value);
    transparent_crc(p_386->g_227.f1, "p_386->g_227.f1", print_hash_value);
    transparent_crc(p_386->g_227.f2, "p_386->g_227.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_386->g_234[i].f0, "p_386->g_234[i].f0", print_hash_value);
        transparent_crc(p_386->g_234[i].f1, "p_386->g_234[i].f1", print_hash_value);
        transparent_crc(p_386->g_234[i].f2, "p_386->g_234[i].f2", print_hash_value);

    }
    transparent_crc(p_386->g_240.f0, "p_386->g_240.f0", print_hash_value);
    transparent_crc(p_386->g_245, "p_386->g_245", print_hash_value);
    transparent_crc(p_386->g_253.s0, "p_386->g_253.s0", print_hash_value);
    transparent_crc(p_386->g_253.s1, "p_386->g_253.s1", print_hash_value);
    transparent_crc(p_386->g_253.s2, "p_386->g_253.s2", print_hash_value);
    transparent_crc(p_386->g_253.s3, "p_386->g_253.s3", print_hash_value);
    transparent_crc(p_386->g_253.s4, "p_386->g_253.s4", print_hash_value);
    transparent_crc(p_386->g_253.s5, "p_386->g_253.s5", print_hash_value);
    transparent_crc(p_386->g_253.s6, "p_386->g_253.s6", print_hash_value);
    transparent_crc(p_386->g_253.s7, "p_386->g_253.s7", print_hash_value);
    transparent_crc(p_386->g_253.s8, "p_386->g_253.s8", print_hash_value);
    transparent_crc(p_386->g_253.s9, "p_386->g_253.s9", print_hash_value);
    transparent_crc(p_386->g_253.sa, "p_386->g_253.sa", print_hash_value);
    transparent_crc(p_386->g_253.sb, "p_386->g_253.sb", print_hash_value);
    transparent_crc(p_386->g_253.sc, "p_386->g_253.sc", print_hash_value);
    transparent_crc(p_386->g_253.sd, "p_386->g_253.sd", print_hash_value);
    transparent_crc(p_386->g_253.se, "p_386->g_253.se", print_hash_value);
    transparent_crc(p_386->g_253.sf, "p_386->g_253.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_386->g_273[i].f0, "p_386->g_273[i].f0", print_hash_value);
        transparent_crc(p_386->g_273[i].f1, "p_386->g_273[i].f1", print_hash_value);
        transparent_crc(p_386->g_273[i].f2, "p_386->g_273[i].f2", print_hash_value);
        transparent_crc(p_386->g_273[i].f3, "p_386->g_273[i].f3", print_hash_value);
        transparent_crc(p_386->g_273[i].f4, "p_386->g_273[i].f4", print_hash_value);

    }
    transparent_crc(p_386->g_275.f0, "p_386->g_275.f0", print_hash_value);
    transparent_crc(p_386->g_275.f1, "p_386->g_275.f1", print_hash_value);
    transparent_crc(p_386->g_275.f2, "p_386->g_275.f2", print_hash_value);
    transparent_crc(p_386->g_275.f3, "p_386->g_275.f3", print_hash_value);
    transparent_crc(p_386->g_275.f4, "p_386->g_275.f4", print_hash_value);
    transparent_crc(p_386->g_300.x, "p_386->g_300.x", print_hash_value);
    transparent_crc(p_386->g_300.y, "p_386->g_300.y", print_hash_value);
    transparent_crc(p_386->g_300.z, "p_386->g_300.z", print_hash_value);
    transparent_crc(p_386->g_300.w, "p_386->g_300.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_386->g_311[i], "p_386->g_311[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_386->g_320[i][j].f0, "p_386->g_320[i][j].f0", print_hash_value);
            transparent_crc(p_386->g_320[i][j].f1, "p_386->g_320[i][j].f1", print_hash_value);
            transparent_crc(p_386->g_320[i][j].f2, "p_386->g_320[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_386->g_329.x, "p_386->g_329.x", print_hash_value);
    transparent_crc(p_386->g_329.y, "p_386->g_329.y", print_hash_value);
    transparent_crc(p_386->g_335.f0, "p_386->g_335.f0", print_hash_value);
    transparent_crc(p_386->g_335.f1, "p_386->g_335.f1", print_hash_value);
    transparent_crc(p_386->g_335.f2, "p_386->g_335.f2", print_hash_value);
    transparent_crc(p_386->g_335.f3, "p_386->g_335.f3", print_hash_value);
    transparent_crc(p_386->g_335.f4, "p_386->g_335.f4", print_hash_value);
    transparent_crc(p_386->g_342.s0, "p_386->g_342.s0", print_hash_value);
    transparent_crc(p_386->g_342.s1, "p_386->g_342.s1", print_hash_value);
    transparent_crc(p_386->g_342.s2, "p_386->g_342.s2", print_hash_value);
    transparent_crc(p_386->g_342.s3, "p_386->g_342.s3", print_hash_value);
    transparent_crc(p_386->g_342.s4, "p_386->g_342.s4", print_hash_value);
    transparent_crc(p_386->g_342.s5, "p_386->g_342.s5", print_hash_value);
    transparent_crc(p_386->g_342.s6, "p_386->g_342.s6", print_hash_value);
    transparent_crc(p_386->g_342.s7, "p_386->g_342.s7", print_hash_value);
    transparent_crc(p_386->g_347, "p_386->g_347", print_hash_value);
    transparent_crc(p_386->v_collective, "p_386->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 53; i++)
            transparent_crc(p_386->g_special_values[i + 53 * get_linear_group_id()], "p_386->g_special_values[i + 53 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_386->l_comm_values[get_linear_local_id()], "p_386->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_386->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()], "p_386->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
