// --atomics 70 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 59,17,7 -l 59,1,1
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

__constant uint32_t permutations[10][59] = {
{40,51,8,20,19,0,43,52,49,3,9,34,58,47,48,46,26,50,33,37,23,2,21,42,38,41,6,16,12,14,55,5,45,10,15,30,56,28,32,44,27,31,35,7,39,25,17,54,36,18,4,22,29,57,11,13,1,24,53}, // permutation 0
{22,14,10,18,41,3,8,28,7,2,51,39,27,56,30,55,47,15,24,48,16,52,58,4,44,26,50,0,19,53,37,29,9,49,13,31,32,46,33,57,40,12,34,35,17,42,36,5,6,45,43,25,1,38,23,21,54,20,11}, // permutation 1
{54,38,41,29,33,18,35,42,21,50,28,48,58,37,16,13,56,34,51,27,53,31,52,30,22,57,46,10,25,32,17,0,43,20,26,23,19,15,8,36,47,4,6,45,1,12,55,5,7,49,40,9,24,2,14,3,44,11,39}, // permutation 2
{51,25,39,17,37,53,49,48,23,33,11,43,30,3,47,36,19,10,54,26,20,50,58,9,34,18,42,24,40,8,32,35,46,13,31,16,56,22,2,6,15,12,1,57,29,14,5,0,44,45,52,7,41,38,55,21,27,28,4}, // permutation 3
{49,30,58,23,28,25,21,7,24,2,19,32,35,43,33,0,15,12,22,54,8,47,14,27,13,34,3,37,40,53,20,51,6,5,44,26,42,56,50,36,57,29,39,46,4,18,45,17,9,55,41,16,11,38,52,48,31,10,1}, // permutation 4
{21,20,16,54,38,45,19,28,17,11,31,9,37,26,15,53,36,51,40,22,4,44,46,41,1,55,7,23,14,3,29,58,32,47,50,25,10,42,8,6,49,56,5,24,33,2,0,13,39,57,48,35,18,27,12,34,30,52,43}, // permutation 5
{1,31,41,9,3,8,34,40,46,21,23,58,13,24,0,17,43,6,47,44,49,32,53,52,4,51,42,54,28,33,29,48,38,55,7,27,35,19,20,15,57,36,37,45,22,2,14,30,18,16,25,11,10,26,39,12,5,56,50}, // permutation 6
{54,49,13,27,40,29,21,22,26,36,1,37,33,20,25,19,55,43,8,34,15,56,4,6,23,48,50,42,10,32,45,53,47,30,41,31,2,18,11,16,44,35,57,28,46,52,12,14,51,0,58,38,17,7,9,3,5,24,39}, // permutation 7
{33,6,15,50,13,41,29,39,26,0,16,47,5,14,44,1,43,25,32,9,4,31,52,42,48,57,49,51,24,46,54,8,36,56,27,12,45,58,37,22,40,28,7,17,18,53,34,20,3,11,10,38,35,2,23,55,21,19,30}, // permutation 8
{57,43,44,0,23,24,50,36,49,28,16,42,5,47,9,13,32,14,26,20,46,58,4,17,18,45,54,34,10,48,1,30,15,55,31,12,39,56,8,29,35,22,52,25,3,2,33,37,53,38,40,51,27,11,41,21,19,6,7} // permutation 9
};

// Seed: 2530132584

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   uint8_t  f1;
};

union U1 {
   int32_t  f0;
   uint16_t  f1;
   int8_t  f2;
};

union U2 {
   uint16_t  f0;
   int32_t  f1;
   int8_t * volatile  f2;
   uint32_t  f3;
   uint32_t  f4;
};

union U3 {
   uint16_t  f0;
   uint16_t  f1;
};

struct S4 {
    int32_t g_36;
    union U0 g_58;
    int8_t **g_61;
    int8_t g_64;
    int32_t g_69;
    int32_t *g_68;
    int32_t *g_70;
    volatile VECTOR(int32_t, 4) g_75;
    VECTOR(int64_t, 2) g_83;
    uint32_t g_89;
    volatile union U2 g_90[8];
    int32_t g_100[3][2];
    volatile union U2 g_105;
    uint16_t g_169;
    VECTOR(int32_t, 8) g_184;
    uint32_t g_323;
    uint32_t g_330;
    volatile VECTOR(int8_t, 2) g_341;
    VECTOR(int16_t, 8) g_345;
    int32_t * volatile g_360;
    volatile VECTOR(int32_t, 2) g_390;
    VECTOR(int32_t, 8) g_391;
    volatile VECTOR(int32_t, 4) g_401;
    uint64_t g_409;
    VECTOR(int32_t, 8) g_413;
    volatile union U1 g_430[9];
    union U0 *g_433;
    union U0 ** volatile g_432;
    uint32_t *g_442;
    int32_t ** volatile g_469;
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
int32_t  func_1(struct S4 * p_494);
int32_t * func_4(int8_t * p_5, struct S4 * p_494);
int8_t  func_8(union U3  p_9, int64_t  p_10, int8_t ** p_11, int16_t  p_12, struct S4 * p_494);
union U3  func_13(int32_t * p_14, int8_t ** p_15, int64_t  p_16, struct S4 * p_494);
int32_t * func_17(uint16_t  p_18, int8_t * p_19, int8_t * p_20, int8_t * p_21, int32_t  p_22, struct S4 * p_494);
int16_t  func_39(int8_t * p_40, int8_t ** p_41, struct S4 * p_494);
int8_t * func_42(int32_t  p_43, int32_t * p_44, uint16_t  p_45, uint8_t  p_46, struct S4 * p_494);
int32_t * func_47(int8_t ** p_48, int8_t * p_49, union U1  p_50, uint64_t  p_51, struct S4 * p_494);
int8_t ** func_52(uint8_t  p_53, int32_t * p_54, int32_t * p_55, union U0  p_56, int32_t  p_57, struct S4 * p_494);
int32_t  func_73(int64_t  p_74, struct S4 * p_494);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_494->l_comm_values p_494->g_comm_values p_494->g_36 p_494->g_58 p_494->g_61 p_494->g_64 p_494->g_75 p_494->g_83 p_494->g_89 p_494->g_69 p_494->g_90 p_494->g_100 p_494->g_58.f0 p_494->g_105 p_494->g_169 p_494->g_184 p_494->g_323 p_494->g_341 p_494->g_345 p_494->g_330 p_494->g_105.f0 p_494->g_360 p_494->g_430 p_494->g_90.f0 p_494->g_432 p_494->g_409 p_494->g_390 p_494->g_391 p_494->g_469 p_494->g_413 p_494->g_70
 * writes: p_494->g_68 p_494->g_70 p_494->g_64 p_494->g_89 p_494->g_100 p_494->g_69 p_494->g_169 p_494->g_323 p_494->g_330 p_494->g_58.f1 p_494->g_36 p_494->g_433 p_494->g_58.f0 p_494->g_442 p_494->g_409 p_494->g_391
 */
int32_t  func_1(struct S4 * p_494)
{ /* block id: 4 */
    uint64_t l_2 = 0xD21F1EB32A831D26L;
    int32_t l_3 = 2L;
    int8_t *l_6 = (void*)0;
    int8_t **l_7 = &l_6;
    int32_t *l_493 = (void*)0;
    l_3 ^= l_2;
    l_493 = func_4(((*l_7) = l_6), p_494);
    return p_494->g_83.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_494->l_comm_values p_494->g_comm_values p_494->g_36 p_494->g_58 p_494->g_61 p_494->g_64 p_494->g_75 p_494->g_83 p_494->g_89 p_494->g_69 p_494->g_90 p_494->g_100 p_494->g_58.f0 p_494->g_105 p_494->g_169 p_494->g_184 p_494->g_323 p_494->g_341 p_494->g_345 p_494->g_330 p_494->g_105.f0 p_494->g_360 p_494->g_430 p_494->g_90.f0 p_494->g_432 p_494->g_409 p_494->g_390 p_494->g_391 p_494->g_469 p_494->g_413 p_494->g_70
 * writes: p_494->g_68 p_494->g_70 p_494->g_64 p_494->g_89 p_494->g_100 p_494->g_69 p_494->g_169 p_494->g_323 p_494->g_330 p_494->g_58.f1 p_494->g_36 p_494->g_433 p_494->g_58.f0 p_494->g_442 p_494->g_409 p_494->g_391
 */
int32_t * func_4(int8_t * p_5, struct S4 * p_494)
{ /* block id: 7 */
    uint32_t l_23[2];
    VECTOR(int8_t, 8) l_28 = (VECTOR(int8_t, 8))(0x4BL, (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 2L), 2L), 2L, 0x4BL, 2L);
    VECTOR(uint16_t, 16) l_31 = (VECTOR(uint16_t, 16))(0x0EF2L, (VECTOR(uint16_t, 4))(0x0EF2L, (VECTOR(uint16_t, 2))(0x0EF2L, 0x7FC0L), 0x7FC0L), 0x7FC0L, 0x0EF2L, 0x7FC0L, (VECTOR(uint16_t, 2))(0x0EF2L, 0x7FC0L), (VECTOR(uint16_t, 2))(0x0EF2L, 0x7FC0L), 0x0EF2L, 0x7FC0L, 0x0EF2L, 0x7FC0L);
    VECTOR(int64_t, 16) l_34 = (VECTOR(int64_t, 16))(0x4D6BA8DAD4F6C553L, (VECTOR(int64_t, 4))(0x4D6BA8DAD4F6C553L, (VECTOR(int64_t, 2))(0x4D6BA8DAD4F6C553L, 4L), 4L), 4L, 0x4D6BA8DAD4F6C553L, 4L, (VECTOR(int64_t, 2))(0x4D6BA8DAD4F6C553L, 4L), (VECTOR(int64_t, 2))(0x4D6BA8DAD4F6C553L, 4L), 0x4D6BA8DAD4F6C553L, 4L, 0x4D6BA8DAD4F6C553L, 4L);
    int32_t *l_35 = &p_494->g_36;
    union U1 l_65 = {-5L};
    int8_t *l_148 = (void*)0;
    int8_t **l_147 = &l_148;
    uint8_t l_181 = 0x0AL;
    uint32_t l_182 = 4294967288UL;
    int8_t *l_183 = (void*)0;
    int32_t *l_463[3];
    int32_t l_464 = 0x0898CA08L;
    uint32_t l_465[4][4] = {{0xC11EBED9L,0x05354F41L,4294967295UL,0x05354F41L},{0xC11EBED9L,0x05354F41L,4294967295UL,0x05354F41L},{0xC11EBED9L,0x05354F41L,4294967295UL,0x05354F41L},{0xC11EBED9L,0x05354F41L,4294967295UL,0x05354F41L}};
    uint16_t *l_468 = (void*)0;
    uint32_t l_472 = 1UL;
    uint64_t l_473 = 0x191386733284590BL;
    uint16_t *l_476[7][2][10] = {{{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169},{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169}},{{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169},{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169}},{{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169},{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169}},{{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169},{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169}},{{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169},{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169}},{{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169},{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169}},{{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169},{(void*)0,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,&p_494->g_169,&p_494->g_169,(void*)0,(void*)0,&p_494->g_169}}};
    int64_t l_483 = 0x0757CD0F41F11E86L;
    int16_t l_490[8][8][4] = {{{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L}},{{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L}},{{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L}},{{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L}},{{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L}},{{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L}},{{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L}},{{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L},{0x4D06L,0x3BA0L,(-1L),0x3297L}}};
    int32_t **l_491 = (void*)0;
    int32_t **l_492 = &l_35;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_23[i] = 5UL;
    for (i = 0; i < 3; i++)
        l_463[i] = (void*)0;
    p_494->g_391.s6 &= (func_8(func_13(func_17(l_23[1], ((FAKE_DIVERGE(p_494->group_1_offset, get_group_id(1), 10) || (safe_div_func_int64_t_s_s((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_28.s1342773554040737)).s4fd5)), ((VECTOR(int8_t, 8))((-7L), 0x00L, (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_31.s33)).lo, ((+(l_28.s6 >= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((((safe_add_func_uint32_t_u_u((p_494->l_comm_values[(safe_mod_func_uint32_t_u_u(p_494->tid, 59))] > (FAKE_DIVERGE(p_494->local_1_offset, get_local_id(1), 10) , p_494->g_comm_values[p_494->tid])), (((VECTOR(int64_t, 8))(l_34.s6add33d7)).s3 && ((((l_35 == (void*)0) , (safe_add_func_uint16_t_u_u((*l_35), func_39(func_42(p_494->g_comm_values[p_494->tid], func_47(func_52((*l_35), &p_494->g_36, l_35, p_494->g_58, (*l_35), p_494), p_5, l_65, (*l_35), p_494), (*l_35), p_494->g_83.y, p_494), l_147, p_494)))) > p_494->g_58.f0) && p_494->g_75.x)))) >= p_494->g_36) && l_181) > (*l_35)), ((VECTOR(uint32_t, 4))(0x3C0C79DFL)), 4294967295UL, 0xD4CE2010L, (*l_35), l_182, p_494->g_89, ((VECTOR(uint32_t, 4))(0x8984B9C5L)), 0xBC2CC7AFL, 0x6450F9E0L)).sa5fc)).y)) | FAKE_DIVERGE(p_494->local_2_offset, get_local_id(2), 10)))), (*l_35), 8L, ((VECTOR(int8_t, 2))(0x3CL)), 0x3FL)).hi))).z, p_494->g_83.x)), 0x1B939D7BC268F25BL))) , (void*)0), p_5, l_183, (*l_35), p_494), p_494->g_61, p_494->g_58.f0, p_494), l_28.s4, p_494->g_61, l_34.s9, p_494) < l_28.s4);
    ++l_465[3][0];
    (*p_494->g_469) = func_17((p_494->g_169 = (&p_494->g_100[2][1] == l_35)), (*l_147), func_42(p_494->g_184.s2, &p_494->g_100[0][0], (*l_35), (*l_35), p_494), &p_494->g_64, p_494->g_323, p_494);
    (*l_492) = (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(6L, 0x700A405B12BCAAC5L)).xyxy, (int64_t)((((safe_mul_func_int8_t_s_s(l_472, l_473)) , (safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), (p_494->g_90[6].f0 | (((((*l_35) ^= p_494->g_89) & (((safe_sub_func_int32_t_s_s((0xC4C76B76L ^ ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(l_483, p_494->g_83.x)), 2)) ^ ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((+(safe_add_func_uint32_t_u_u(((((2UL >= ((l_468 == (void*)0) , l_490[4][0][2])) | p_494->g_345.s3) == 0x5DL) >= p_494->g_413.s7), (*p_494->g_70)))) && p_494->g_comm_values[p_494->tid]), 4)), 2L)) & (*p_494->g_70)))), (*p_494->g_70))) & p_494->g_409) <= p_494->g_comm_values[p_494->tid])) , (*l_35)) == (*p_494->g_70)))))) < GROUP_DIVERGE(2, 1)) || (*l_35))))).lo)).odd , (*p_494->g_469));
    return (*p_494->g_469);
}


/* ------------------------------------------ */
/* 
 * reads : p_494->g_58.f0 p_494->g_100 p_494->g_409 p_494->g_390
 * writes: p_494->g_58.f0 p_494->g_442 p_494->g_409
 */
int8_t  func_8(union U3  p_9, int64_t  p_10, int8_t ** p_11, int16_t  p_12, struct S4 * p_494)
{ /* block id: 236 */
    uint32_t *l_441 = &p_494->g_323;
    VECTOR(uint16_t, 2) l_457 = (VECTOR(uint16_t, 2))(0x8278L, 7UL);
    int32_t l_459 = 0x7B266415L;
    int i;
    for (p_494->g_58.f0 = 0; (p_494->g_58.f0 >= (-14)); --p_494->g_58.f0)
    { /* block id: 239 */
        int64_t l_447 = 0L;
        int32_t *l_450 = &p_494->g_100[0][0];
        VECTOR(uint16_t, 4) l_451 = (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 65531UL), 65531UL);
        VECTOR(uint16_t, 4) l_456 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x38CBL), 0x38CBL);
        int32_t *l_458[5][9] = {{&p_494->g_100[2][0],&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,&p_494->g_100[0][0],&p_494->g_36,&p_494->g_69,&p_494->g_100[0][0],&p_494->g_100[2][0]},{&p_494->g_100[2][0],&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,&p_494->g_100[0][0],&p_494->g_36,&p_494->g_69,&p_494->g_100[0][0],&p_494->g_100[2][0]},{&p_494->g_100[2][0],&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,&p_494->g_100[0][0],&p_494->g_36,&p_494->g_69,&p_494->g_100[0][0],&p_494->g_100[2][0]},{&p_494->g_100[2][0],&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,&p_494->g_100[0][0],&p_494->g_36,&p_494->g_69,&p_494->g_100[0][0],&p_494->g_100[2][0]},{&p_494->g_100[2][0],&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,&p_494->g_100[0][0],&p_494->g_36,&p_494->g_69,&p_494->g_100[0][0],&p_494->g_100[2][0]}};
        int32_t **l_460 = &l_458[2][2];
        int i, j;
        l_459 ^= (safe_rshift_func_int16_t_s_u(((((((safe_add_func_uint8_t_u_u(((p_494->g_442 = l_441) != l_441), (!(safe_mul_func_uint16_t_u_u(p_12, (safe_mod_func_uint64_t_u_u(l_447, (safe_lshift_func_uint8_t_u_u((l_450 != (void*)0), 1))))))))) != 0x4AA1B70DL) < ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_451.xwzy)).zzxxywyyywwyyxww)).sa5)).odd) == (((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0xDBF2D430CDAC9B48L, 1UL)).yxxyxyxx)).s0335466123177451, ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 4))((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((+((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x9649L, 0x4659L)), 4UL, 4UL)).wzxzwwzw, ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(0xCB0FL, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(l_456.xzyxzwwx)).s7404416553731210, ((VECTOR(uint16_t, 2))(l_457.xy)).yyxxxyxyxxyxxyyx))).even, (uint16_t)((VECTOR(uint16_t, 4))(65532UL, 0xAFC7L, 0UL, 6UL)).z, (uint16_t)0xAC64L))).hi, (uint16_t)0x3574L))), 0x5F1BL, ((VECTOR(uint16_t, 4))(0xBF94L)), ((VECTOR(uint16_t, 4))(0xB384L)), 1UL, 0x0162L)), ((VECTOR(uint16_t, 16))(1UL)), ((VECTOR(uint16_t, 16))(1UL))))).hi, ((VECTOR(uint16_t, 8))(0UL))))).s1), 0x9CE1L)) || l_457.y), (-1L))), 0x8424E8B0A5A06651L, 18446744073709551607UL, 1UL)).yyzywzxxzwwyywwy, ((VECTOR(uint64_t, 16))(0UL))))), ((VECTOR(uint64_t, 16))(0x354D78A8CF6E253FL))))).s2f)).xxyyyyyyxyxxyyyy)).s21, ((VECTOR(uint64_t, 2))(0UL)), ((VECTOR(uint64_t, 2))(0xFC7DEDEDBB41DC97L))))).lo & p_12)) | (*l_450)) || 0x01C2L), p_9.f0));
        (*l_460) = &p_494->g_100[0][0];
    }
    for (p_494->g_409 = 0; (p_494->g_409 == 32); ++p_494->g_409)
    { /* block id: 246 */
        if (p_9.f0)
            break;
    }
    return p_494->g_390.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_494->g_89 p_494->g_100 p_494->g_36 p_494->g_430 p_494->g_90.f0 p_494->g_432
 * writes: p_494->g_89 p_494->g_58.f1 p_494->g_323 p_494->g_36 p_494->g_70 p_494->g_100 p_494->g_433
 */
union U3  func_13(int32_t * p_14, int8_t ** p_15, int64_t  p_16, struct S4 * p_494)
{ /* block id: 210 */
    uint8_t l_396 = 0x99L;
    int32_t *l_422 = &p_494->g_36;
    int32_t *l_424[10][4][5] = {{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}},{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}},{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}},{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}},{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}},{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}},{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}},{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}},{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}},{{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0},{(void*)0,&p_494->g_100[0][0],&p_494->g_69,&p_494->g_36,(void*)0}}};
    int16_t l_425 = 0x4901L;
    int8_t l_426 = 0x42L;
    uint32_t l_427[10][7] = {{1UL,8UL,8UL,1UL,1UL,8UL,8UL},{1UL,8UL,8UL,1UL,1UL,8UL,8UL},{1UL,8UL,8UL,1UL,1UL,8UL,8UL},{1UL,8UL,8UL,1UL,1UL,8UL,8UL},{1UL,8UL,8UL,1UL,1UL,8UL,8UL},{1UL,8UL,8UL,1UL,1UL,8UL,8UL},{1UL,8UL,8UL,1UL,1UL,8UL,8UL},{1UL,8UL,8UL,1UL,1UL,8UL,8UL},{1UL,8UL,8UL,1UL,1UL,8UL,8UL},{1UL,8UL,8UL,1UL,1UL,8UL,8UL}};
    union U0 *l_431 = &p_494->g_58;
    union U3 l_434 = {0x2029L};
    int i, j, k;
    for (p_494->g_89 = 0; (p_494->g_89 == 9); ++p_494->g_89)
    { /* block id: 213 */
        uint32_t l_389 = 0x4344784EL;
        int32_t l_406 = 1L;
        VECTOR(int32_t, 8) l_412 = (VECTOR(int32_t, 8))(0x40EB8D5EL, (VECTOR(int32_t, 4))(0x40EB8D5EL, (VECTOR(int32_t, 2))(0x40EB8D5EL, 0x32A463FFL), 0x32A463FFL), 0x32A463FFL, 0x40EB8D5EL, 0x32A463FFL);
        int64_t l_420 = 0L;
        int32_t **l_423[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (p_494->g_58.f1 = 0; (p_494->g_58.f1 > 55); p_494->g_58.f1 = safe_add_func_uint16_t_u_u(p_494->g_58.f1, 4))
        { /* block id: 216 */
            union U3 l_386[3][3] = {{{0xA1A5L},{0xA1A5L},{0xA1A5L}},{{0xA1A5L},{0xA1A5L},{0xA1A5L}},{{0xA1A5L},{0xA1A5L},{0xA1A5L}}};
            int i, j;
            return l_386[1][1];
        }
        for (p_494->g_323 = 27; (p_494->g_323 == 13); p_494->g_323 = safe_sub_func_uint16_t_u_u(p_494->g_323, 6))
        { /* block id: 221 */
            VECTOR(int32_t, 16) l_392 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-2L)), (-2L)), (-2L), 9L, (-2L), (VECTOR(int32_t, 2))(9L, (-2L)), (VECTOR(int32_t, 2))(9L, (-2L)), 9L, (-2L), 9L, (-2L));
            VECTOR(int32_t, 16) l_393 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2E7E4AFBL), 0x2E7E4AFBL), 0x2E7E4AFBL, 0L, 0x2E7E4AFBL, (VECTOR(int32_t, 2))(0L, 0x2E7E4AFBL), (VECTOR(int32_t, 2))(0L, 0x2E7E4AFBL), 0L, 0x2E7E4AFBL, 0L, 0x2E7E4AFBL);
            uint64_t *l_407 = (void*)0;
            uint64_t *l_408 = &p_494->g_409;
            int32_t *l_421 = &p_494->g_36;
            int i;
            l_389 |= (p_14 != ((p_14 != &p_494->g_89) , (p_494->g_100[2][0] , (void*)0)));
            (*l_421) = ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x65B10184L, (-1L), 0L, 0x0DB97C4DL)))).hi)).yyyxyyxyyyyxxxyx, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_494->g_390.xy)), 1L, 0x6F2928B9L)).yyxzyywxzwxzwzzz, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(p_494->g_391.s0276563124040627)), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_392.s94e8)).xxxxxzzzyxzzwxyw)).sadeb, ((VECTOR(int32_t, 2))((-10L), (-1L))).xxxx, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(0x2CDC7761L, ((VECTOR(int32_t, 4))(l_393.s54ae)), ((p_494->g_83.y || (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))((safe_div_func_uint16_t_u_u((l_396 | ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((+(((VECTOR(int32_t, 2))(p_494->g_401.wz)).lo ^ (safe_lshift_func_int8_t_s_s((((((+(p_16 | (safe_div_func_int64_t_s_s((8L <= l_393.s5), (++(*l_408)))))) | ((((VECTOR(int32_t, 2))(l_412.s35)).odd > ((*p_14) = (*p_14))) != ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_494->g_413.s02630332)).s03)).even)) || (safe_mul_func_uint8_t_u_u((0x75L | ((safe_lshift_func_uint16_t_u_s((((p_14 == ((safe_mul_func_uint8_t_u_u(l_393.s4, l_406)) , &p_494->g_100[0][0])) , p_16) > 0x0F61A7614259A3E5L), 13)) ^ p_494->g_58.f0)), p_16))) && l_420) & p_16), p_16)))) && 0UL), 1)), 0)) >= p_16)), (-8L))), p_16, 0x48DCAB2CDC5172E1L, 0xE65F1AFBDEDD9470L)), ((VECTOR(uint64_t, 4))(0xC0C2B7958AED1166L))))).lo)).odd == p_494->g_69)) || p_16), 0x0866E137L, 0x7B510B97L, ((VECTOR(int32_t, 4))(4L)), ((VECTOR(int32_t, 2))(0x7FF921C2L)), (-4L), 0x60F02089L)).s67, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0L))))).yxxx))).wyywyxzzxwywxwyy, ((VECTOR(int32_t, 16))(0x3BF9C2A4L))))))))))).se;
            if (l_406)
                break;
            (*l_421) |= (*p_14);
        }
        p_494->g_70 = l_422;
    }
    --l_427[2][3];
    (*p_14) |= (253UL == (p_494->g_430[4] , ((*l_422) = p_494->g_90[6].f0)));
    (*p_494->g_432) = l_431;
    return l_434;
}


/* ------------------------------------------ */
/* 
 * reads : p_494->g_184 p_494->g_323 p_494->g_341 p_494->g_345 p_494->g_36 p_494->g_75 p_494->g_330 p_494->g_105.f0 p_494->g_169 p_494->g_83 p_494->g_360
 * writes: p_494->g_323 p_494->g_330 p_494->g_64 p_494->g_100
 */
int32_t * func_17(uint16_t  p_18, int8_t * p_19, int8_t * p_20, int8_t * p_21, int32_t  p_22, struct S4 * p_494)
{ /* block id: 91 */
    int32_t *l_185 = (void*)0;
    int32_t l_186 = 0x6E515C3CL;
    uint32_t *l_322[5][3] = {{&p_494->g_323,&p_494->g_323,&p_494->g_323},{&p_494->g_323,&p_494->g_323,&p_494->g_323},{&p_494->g_323,&p_494->g_323,&p_494->g_323},{&p_494->g_323,&p_494->g_323,&p_494->g_323},{&p_494->g_323,&p_494->g_323,&p_494->g_323}};
    VECTOR(int16_t, 8) l_326 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0L), 0L), 0L, 8L, 0L);
    int16_t *l_327 = (void*)0;
    int16_t *l_328 = (void*)0;
    int16_t *l_329[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_331[2][8][10] = {{{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L}},{{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L},{18446744073709551606UL,0x591B0979CFFEB184L,0x591B0979CFFEB184L,18446744073709551606UL,5UL,0xCB6A71BACA6DEC18L,0xCB6A71BACA6DEC18L,5UL,18446744073709551606UL,0x591B0979CFFEB184L}}};
    VECTOR(uint64_t, 16) l_334 = (VECTOR(uint64_t, 16))(0xAE677EC04D9ADC42L, (VECTOR(uint64_t, 4))(0xAE677EC04D9ADC42L, (VECTOR(uint64_t, 2))(0xAE677EC04D9ADC42L, 0UL), 0UL), 0UL, 0xAE677EC04D9ADC42L, 0UL, (VECTOR(uint64_t, 2))(0xAE677EC04D9ADC42L, 0UL), (VECTOR(uint64_t, 2))(0xAE677EC04D9ADC42L, 0UL), 0xAE677EC04D9ADC42L, 0UL, 0xAE677EC04D9ADC42L, 0UL);
    union U1 l_335 = {-1L};
    VECTOR(int32_t, 16) l_338 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L), (VECTOR(int32_t, 2))(1L, (-9L)), (VECTOR(int32_t, 2))(1L, (-9L)), 1L, (-9L), 1L, (-9L));
    VECTOR(int8_t, 2) l_342 = (VECTOR(int8_t, 2))(0x79L, 1L);
    VECTOR(uint16_t, 8) l_343 = (VECTOR(uint16_t, 8))(0xF912L, (VECTOR(uint16_t, 4))(0xF912L, (VECTOR(uint16_t, 2))(0xF912L, 0xC483L), 0xC483L), 0xC483L, 0xF912L, 0xC483L);
    VECTOR(int16_t, 2) l_344 = (VECTOR(int16_t, 2))(0x39EFL, 0L);
    int8_t *l_350 = (void*)0;
    int8_t *l_351 = &p_494->g_64;
    int8_t *l_352 = (void*)0;
    int8_t *l_353 = (void*)0;
    int8_t *l_354 = &l_335.f2;
    int8_t *l_355 = &l_335.f2;
    int8_t *l_356 = &l_335.f2;
    int8_t *l_357 = &l_335.f2;
    int8_t *l_358[9];
    int64_t l_359 = 0L;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_358[i] = (void*)0;
    l_186 &= ((VECTOR(int32_t, 2))(p_494->g_184.s62)).lo;
    if ((atomic_inc(&p_494->l_atomic_input[54]) == 3))
    { /* block id: 94 */
        int64_t l_187 = 0x19F614CAE8D20A93L;
        uint32_t l_188 = 4UL;
        if ((l_188 &= l_187))
        { /* block id: 96 */
            int32_t l_189 = 0x13F45361L;
            int32_t *l_233 = &l_189;
            int32_t *l_234 = (void*)0;
            int32_t *l_235 = (void*)0;
            uint64_t l_236 = 18446744073709551612UL;
            for (l_189 = 15; (l_189 != 25); ++l_189)
            { /* block id: 99 */
                int32_t l_192 = (-5L);
                for (l_192 = 26; (l_192 == 15); --l_192)
                { /* block id: 102 */
                    uint8_t l_195 = 255UL;
                    VECTOR(int32_t, 2) l_196 = (VECTOR(int32_t, 2))(0L, 0x07D77FA0L);
                    int i;
                    l_195 ^= 5L;
                    if (((VECTOR(int32_t, 8))(l_196.yyxxyxyx)).s3)
                    { /* block id: 104 */
                        uint16_t l_197 = 1UL;
                        VECTOR(int8_t, 8) l_198 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x4BL), 0x4BL), 0x4BL, 0L, 0x4BL);
                        int32_t l_201 = 1L;
                        VECTOR(uint8_t, 16) l_202 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x90L), 0x90L), 0x90L, 1UL, 0x90L, (VECTOR(uint8_t, 2))(1UL, 0x90L), (VECTOR(uint8_t, 2))(1UL, 0x90L), 1UL, 0x90L, 1UL, 0x90L);
                        VECTOR(uint8_t, 8) l_203 = (VECTOR(uint8_t, 8))(0x14L, (VECTOR(uint8_t, 4))(0x14L, (VECTOR(uint8_t, 2))(0x14L, 0x5FL), 0x5FL), 0x5FL, 0x14L, 0x5FL);
                        int16_t l_204 = 0x6B58L;
                        VECTOR(uint8_t, 16) l_205 = (VECTOR(uint8_t, 16))(0xC5L, (VECTOR(uint8_t, 4))(0xC5L, (VECTOR(uint8_t, 2))(0xC5L, 0xCBL), 0xCBL), 0xCBL, 0xC5L, 0xCBL, (VECTOR(uint8_t, 2))(0xC5L, 0xCBL), (VECTOR(uint8_t, 2))(0xC5L, 0xCBL), 0xC5L, 0xCBL, 0xC5L, 0xCBL);
                        VECTOR(uint8_t, 4) l_206 = (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 1UL), 1UL);
                        VECTOR(uint16_t, 8) l_207 = (VECTOR(uint16_t, 8))(0x4081L, (VECTOR(uint16_t, 4))(0x4081L, (VECTOR(uint16_t, 2))(0x4081L, 0x5E96L), 0x5E96L), 0x5E96L, 0x4081L, 0x5E96L);
                        VECTOR(uint16_t, 2) l_208 = (VECTOR(uint16_t, 2))(1UL, 0xB13EL);
                        VECTOR(uint16_t, 4) l_209 = (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 65534UL), 65534UL);
                        int64_t l_210 = 0x6A3EBE08290AFDDBL;
                        int32_t *l_212 = (void*)0;
                        int32_t **l_211 = &l_212;
                        int32_t **l_213 = (void*)0;
                        VECTOR(int16_t, 4) l_214 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1FC5L), 0x1FC5L);
                        int32_t *l_215 = &l_201;
                        int32_t *l_216 = (void*)0;
                        int8_t l_217 = 0x7DL;
                        VECTOR(int32_t, 4) l_218 = (VECTOR(int32_t, 4))(0x5BCB941CL, (VECTOR(int32_t, 2))(0x5BCB941CL, (-1L)), (-1L));
                        uint32_t l_219 = 4294967292UL;
                        VECTOR(uint32_t, 16) l_220 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 6UL), 6UL), 6UL, 4294967295UL, 6UL, (VECTOR(uint32_t, 2))(4294967295UL, 6UL), (VECTOR(uint32_t, 2))(4294967295UL, 6UL), 4294967295UL, 6UL, 4294967295UL, 6UL);
                        int32_t l_221 = 0x254678E9L;
                        int16_t l_222 = 0x5272L;
                        union U2 l_223 = {0UL};/* VOLATILE GLOBAL l_223 */
                        int32_t l_224 = (-2L);
                        union U2 l_225 = {0x8D63L};/* VOLATILE GLOBAL l_225 */
                        uint32_t l_226 = 0UL;
                        int32_t l_227 = 0x7B11FA8AL;
                        int i;
                        l_196.y = l_197;
                        l_213 = ((l_210 = ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_198.s01426302)))).hi, ((VECTOR(uint8_t, 8))((l_201 = (l_195++)), 0xD5L, ((VECTOR(uint8_t, 4))(l_202.s1dac)).z, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_203.s3726)).zwwyyxzz)).s0, l_204, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(l_205.seb)).yxxyyxxx, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_206.yyzxywywwzxywzyx)).lo)), ((VECTOR(uint8_t, 2))(9UL, 0xDCL)).yxxyyyxx)))))).s73)), 0xA3L)).hi))).xwwyzyxy, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(l_207.s11121337)).lo, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_208.xxyyyxyyyxyxyxyx)))).s858a))), ((VECTOR(uint16_t, 16))(l_209.wyzxyyyyyyzyzwxw)).sa2f3))).wwwxxzyw))).s1) , l_211);
                        l_216 = (l_215 = (l_214.x , (void*)0));
                        l_227 = (l_217 , ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_218.xzyz)).wxwxzwzyzzzywxzy)), ((VECTOR(int32_t, 8))(l_219, (l_221 = l_220.s8), l_222, ((VECTOR(int32_t, 2))(0x64E493BEL, 0x3E547552L)).hi, (l_196.x = (l_223 , ((l_224 , l_225) , l_226))), ((VECTOR(int32_t, 2))((-5L), 0x1FD82234L)), 2L)).s0617076401364216))).sb);
                    }
                    else
                    { /* block id: 115 */
                        uint8_t l_228 = 255UL;
                        uint32_t l_229 = 0xB2A55D4DL;
                        uint64_t l_230 = 0xDFF8256CFA103EE5L;
                        int16_t l_231 = 0x3554L;
                        VECTOR(int32_t, 8) l_232 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                        int i;
                        l_231 ^= (l_230 = (l_228 , (l_196.y ^= l_229)));
                        l_196.y ^= ((VECTOR(int32_t, 16))(l_232.s5764656067757550)).s8;
                    }
                }
            }
            l_235 = (l_233 = (l_234 = l_233));
            --l_236;
        }
        else
        { /* block id: 127 */
            int32_t l_239 = 0x31CF1519L;
            int32_t l_314 = 0x438B6D6AL;
            uint8_t l_315[3];
            int i;
            for (i = 0; i < 3; i++)
                l_315[i] = 0xCFL;
            for (l_239 = 0; (l_239 <= (-2)); --l_239)
            { /* block id: 130 */
                uint16_t l_242[5] = {65527UL,65527UL,65527UL,65527UL,65527UL};
                VECTOR(uint32_t, 8) l_243 = (VECTOR(uint32_t, 8))(0x7D13A130L, (VECTOR(uint32_t, 4))(0x7D13A130L, (VECTOR(uint32_t, 2))(0x7D13A130L, 0xEF2F3691L), 0xEF2F3691L), 0xEF2F3691L, 0x7D13A130L, 0xEF2F3691L);
                int64_t l_244 = 0x353869009A4825EFL;
                uint8_t l_245 = 255UL;
                int16_t l_246 = 0x09A8L;
                int8_t l_247 = 0x52L;
                int32_t l_248 = 0x6DA7B335L;
                int32_t *l_249 = &l_248;
                int32_t *l_250 = (void*)0;
                int i;
                l_243.s6 = l_242[3];
                l_245 ^= l_244;
                l_248 ^= (l_246 , (l_247 = 0x0AF4106DL));
                l_250 = l_249;
            }
            for (l_239 = 26; (l_239 >= (-7)); l_239 = safe_sub_func_int32_t_s_s(l_239, 5))
            { /* block id: 139 */
                VECTOR(uint32_t, 4) l_253 = (VECTOR(uint32_t, 4))(0xD83EAFCFL, (VECTOR(uint32_t, 2))(0xD83EAFCFL, 4294967291UL), 4294967291UL);
                union U0 l_254 = {-9L};
                union U1 l_255[1] = {{8L}};
                union U1 l_256 = {4L};
                int16_t l_257 = (-10L);
                union U0 l_258 = {0x1E3334ADL};
                union U0 l_259 = {-1L};
                uint32_t l_260 = 4UL;
                union U1 l_261 = {-4L};
                union U3 l_262 = {0x0E87L};
                union U3 l_263 = {0x1627L};
                union U0 l_264 = {1L};
                union U0 l_265 = {0L};
                union U2 l_266 = {0x112EL};/* VOLATILE GLOBAL l_266 */
                uint32_t l_267[4][4][5] = {{{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L}},{{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L}},{{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L}},{{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L},{4294967291UL,0UL,0x6E2DF889L,4294967295UL,0x6E2DF889L}}};
                int i, j, k;
                l_267[2][0][1] = ((((l_253.w , (l_254 , (l_256 = l_255[0]))) , (l_265 = ((l_263 = (((l_257 , (((l_259 = l_258) , 0xF9BA95C358AB34EFL) , 6L)) , l_260) , (l_261 , l_262))) , l_264))) , l_266) , 0x381081BDL);
                for (l_256.f2 = 0; (l_256.f2 <= (-4)); --l_256.f2)
                { /* block id: 147 */
                    VECTOR(int32_t, 16) l_270 = (VECTOR(int32_t, 16))(0x35EFD4EDL, (VECTOR(int32_t, 4))(0x35EFD4EDL, (VECTOR(int32_t, 2))(0x35EFD4EDL, 0x5BF9705CL), 0x5BF9705CL), 0x5BF9705CL, 0x35EFD4EDL, 0x5BF9705CL, (VECTOR(int32_t, 2))(0x35EFD4EDL, 0x5BF9705CL), (VECTOR(int32_t, 2))(0x35EFD4EDL, 0x5BF9705CL), 0x35EFD4EDL, 0x5BF9705CL, 0x35EFD4EDL, 0x5BF9705CL);
                    int32_t l_271 = 0x3F3F1525L;
                    int32_t *l_272[9][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int32_t *l_273 = (void*)0;
                    int32_t *l_274 = (void*)0;
                    int i, j, k;
                    l_274 = (l_273 = ((l_271 = ((VECTOR(int32_t, 2))(l_270.s1f)).hi) , l_272[7][0][1]));
                    for (l_271 = 8; (l_271 >= (-26)); l_271 = safe_sub_func_uint64_t_u_u(l_271, 1))
                    { /* block id: 153 */
                        int32_t l_277 = 0x34024CB0L;
                        VECTOR(int32_t, 4) l_278 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x29D448EBL), 0x29D448EBL);
                        int i;
                        l_278.y = ((VECTOR(int32_t, 4))(l_277, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))((-1L), 0x6D2BC901L)), ((VECTOR(int32_t, 4))(l_278.wxyw)).lo))), 9L)).y;
                    }
                    for (l_270.sf = 2; (l_270.sf <= (-23)); --l_270.sf)
                    { /* block id: 158 */
                        uint8_t l_281 = 0UL;
                        union U3 l_282 = {0x0012L};
                        VECTOR(uint64_t, 16) l_283 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x0C6C97D4F73E1BCFL), 0x0C6C97D4F73E1BCFL), 0x0C6C97D4F73E1BCFL, 0UL, 0x0C6C97D4F73E1BCFL, (VECTOR(uint64_t, 2))(0UL, 0x0C6C97D4F73E1BCFL), (VECTOR(uint64_t, 2))(0UL, 0x0C6C97D4F73E1BCFL), 0UL, 0x0C6C97D4F73E1BCFL, 0UL, 0x0C6C97D4F73E1BCFL);
                        VECTOR(uint64_t, 8) l_284 = (VECTOR(uint64_t, 8))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 0xA6D1430380A52FB1L), 0xA6D1430380A52FB1L), 0xA6D1430380A52FB1L, 18446744073709551607UL, 0xA6D1430380A52FB1L);
                        VECTOR(uint64_t, 16) l_285 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x350790CDCE41174DL), 0x350790CDCE41174DL), 0x350790CDCE41174DL, 18446744073709551615UL, 0x350790CDCE41174DL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x350790CDCE41174DL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x350790CDCE41174DL), 18446744073709551615UL, 0x350790CDCE41174DL, 18446744073709551615UL, 0x350790CDCE41174DL);
                        int8_t l_286 = 0x74L;
                        int64_t l_287 = 0L;
                        uint8_t l_288[5];
                        int32_t l_289 = (-6L);
                        int8_t l_290 = (-10L);
                        int64_t l_291 = 0x66CB6D5B29963323L;
                        uint64_t l_292 = 0x68BF895B2C4312D8L;
                        int8_t l_293 = 0x7FL;
                        int64_t l_294 = 2L;
                        int64_t l_295 = 0L;
                        uint64_t l_296 = 4UL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_288[i] = 255UL;
                        l_289 &= (l_281 , ((l_282 , ((((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 8))(l_283.s0158a440)), (uint64_t)((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(l_284.s23)), ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 2))(0xAA33F3846020A5E6L, 0x536371DD7C6B35F5L)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_285.s2f)).xxxyyxxx)).s33)))))).hi))).s7 , l_286) , (l_288[2] = (l_287 = 0x0943L)))) , 0x655B3C0CL));
                        l_291 &= l_290;
                        l_294 = (l_292 , l_293);
                        l_296 = l_295;
                    }
                }
                for (l_254.f1 = 0; (l_254.f1 > 24); l_254.f1++)
                { /* block id: 169 */
                    int8_t l_299[1][3][8] = {{{3L,0L,0L,3L,3L,0L,0L,3L},{3L,0L,0L,3L,3L,0L,0L,3L},{3L,0L,0L,3L,3L,0L,0L,3L}}};
                    uint8_t l_300 = 0x07L;
                    int32_t l_304[1];
                    int32_t *l_303[10][2][4] = {{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}},{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}},{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}},{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}},{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}},{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}},{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}},{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}},{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}},{{&l_304[0],&l_304[0],&l_304[0],(void*)0},{&l_304[0],&l_304[0],&l_304[0],(void*)0}}};
                    int32_t *l_305 = &l_304[0];
                    int16_t l_306[4] = {0x3495L,0x3495L,0x3495L,0x3495L};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_304[i] = 0x07C8B32EL;
                    l_300++;
                    l_305 = l_303[3][0][2];
                    l_306[0] = (-5L);
                    for (l_304[0] = 0; (l_304[0] >= (-17)); l_304[0] = safe_sub_func_uint64_t_u_u(l_304[0], 8))
                    { /* block id: 175 */
                        uint64_t l_309 = 0x494CCD08A4846136L;
                        uint8_t l_312 = 0x96L;
                        int8_t l_313 = 0x10L;
                        ++l_309;
                        l_313 = l_312;
                    }
                }
            }
            l_239 ^= 0x662EE07EL;
            l_315[1]++;
        }
        unsigned int result = 0;
        result += l_187;
        result += l_188;
        atomic_add(&p_494->l_special_values[54], result);
    }
    else
    { /* block id: 184 */
        (1 + 1);
    }
    (*p_494->g_360) = (safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((p_494->g_330 = ((p_494->g_323++) , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_326.s26)).yyxy)).xxwwwzywxwwxxwzw)).s7)) , (l_331[1][2][9] && (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(l_334.s2ec2)).w, l_326.s5)))) , ((l_335 , ((safe_div_func_int32_t_s_s(((((VECTOR(int32_t, 8))(l_338.sbf2325a2)).s7 , (((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(p_494->g_341.yyyxxyyy)), ((VECTOR(int8_t, 8))(l_342.xyxxyyxx))))).lo)).ywxzywzwxxyxwxwy)).sa, l_334.s0)), 65534UL, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(65526UL, 65528UL, 0UL, 0UL)).odd, ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_343.s2172064656456305)).s7b6b)).wwzzyyyy, (uint16_t)((((((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(l_344.xyxyyxyyyyyyxyxy)).hi, ((VECTOR(int16_t, 2))(p_494->g_345.s17)).xxxyxxxx))).s5 >= p_494->g_36) > (safe_rshift_func_int8_t_s_s((l_186 ^= (~((*l_351) = ((safe_div_func_uint32_t_u_u((0xD07EL <= ((void*)0 == l_322[2][0])), p_494->g_75.w)) || p_494->g_184.s1)))), 3))) > p_494->g_330) , GROUP_DIVERGE(1, 1))))).s56))), 0x27F6L, ((VECTOR(uint16_t, 4))(0xD72DL)), 0UL, 0x31E6L, l_359, 65527UL, p_494->g_105.f0, 65529UL, 0x3ACCL)).hi, ((VECTOR(uint16_t, 8))(1UL))))).s7517154715027224, ((VECTOR(uint32_t, 16))(0UL)), ((VECTOR(uint32_t, 16))(0x7904C0D5L))))).s3 , p_494->g_105.f0)) | p_494->g_169), 4L)) | 18446744073709551610UL)) >= p_22)), p_18)) == p_494->g_184.s5), p_494->g_83.x));
    if ((atomic_inc(&p_494->g_atomic_input[70 * get_linear_group_id() + 35]) == 6))
    { /* block id: 193 */
        int32_t l_361 = (-2L);
        VECTOR(int32_t, 16) l_362 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x218020EDL), 0x218020EDL), 0x218020EDL, 1L, 0x218020EDL, (VECTOR(int32_t, 2))(1L, 0x218020EDL), (VECTOR(int32_t, 2))(1L, 0x218020EDL), 1L, 0x218020EDL, 1L, 0x218020EDL);
        int32_t l_363 = (-1L);
        int32_t l_364 = 0x62F4CE8AL;
        VECTOR(int32_t, 8) l_372 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
        VECTOR(int32_t, 2) l_373 = (VECTOR(int32_t, 2))((-1L), 8L);
        VECTOR(int32_t, 4) l_374 = (VECTOR(int32_t, 4))(0x360FB0E2L, (VECTOR(int32_t, 2))(0x360FB0E2L, 3L), 3L);
        VECTOR(uint64_t, 16) l_375 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL);
        uint64_t l_376 = 1UL;
        int32_t l_377 = 0x5F51B6DEL;
        int64_t l_378[2][1][2];
        VECTOR(int32_t, 4) l_379 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-5L)), (-5L));
        VECTOR(int32_t, 16) l_380 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
        uint64_t l_381 = 0x14F5B04E45F982F0L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_378[i][j][k] = 0x55C3C14E789EAF65L;
            }
        }
        l_364 ^= (l_363 = ((VECTOR(int32_t, 4))((l_361 , 0x274B98C5L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_362.s5610dbb6b75f2333)).s3d)), 0x15BD04D2L)).w);
        for (l_363 = (-20); (l_363 != 6); l_363 = safe_add_func_uint64_t_u_u(l_363, 5))
        { /* block id: 198 */
            int32_t l_368[2][6] = {{0x7567B245L,0x7567B245L,0x7567B245L,0x7567B245L,0x7567B245L,0x7567B245L},{0x7567B245L,0x7567B245L,0x7567B245L,0x7567B245L,0x7567B245L,0x7567B245L}};
            int32_t *l_367 = &l_368[0][3];
            int32_t *l_369 = &l_368[0][3];
            int32_t *l_370 = &l_368[0][3];
            int16_t l_371 = 0L;
            int i, j;
            l_370 = (l_369 = l_367);
            l_371 |= 0x158A97BCL;
        }
        l_381 = ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(l_372.s0352523717413041)).even, (int32_t)((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(l_373.xxxxxyxx)).s20, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_374.yzxw)))).hi))).xyyy)), 0x287ECD72L, ((l_377 = (l_376 = ((VECTOR(uint64_t, 16))(l_375.sd901efc0fe5f93fc)).sa)) , l_378[1][0][0]), ((VECTOR(int32_t, 2))(l_379.xw)), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_380.seb9ebaa9)).hi)), ((VECTOR(int32_t, 2))(0L, 0L)), 0x46DBBE11L)).s5))).s0;
        unsigned int result = 0;
        result += l_361;
        result += l_362.sf;
        result += l_362.se;
        result += l_362.sd;
        result += l_362.sc;
        result += l_362.sb;
        result += l_362.sa;
        result += l_362.s9;
        result += l_362.s8;
        result += l_362.s7;
        result += l_362.s6;
        result += l_362.s5;
        result += l_362.s4;
        result += l_362.s3;
        result += l_362.s2;
        result += l_362.s1;
        result += l_362.s0;
        result += l_363;
        result += l_364;
        result += l_372.s7;
        result += l_372.s6;
        result += l_372.s5;
        result += l_372.s4;
        result += l_372.s3;
        result += l_372.s2;
        result += l_372.s1;
        result += l_372.s0;
        result += l_373.y;
        result += l_373.x;
        result += l_374.w;
        result += l_374.z;
        result += l_374.y;
        result += l_374.x;
        result += l_375.sf;
        result += l_375.se;
        result += l_375.sd;
        result += l_375.sc;
        result += l_375.sb;
        result += l_375.sa;
        result += l_375.s9;
        result += l_375.s8;
        result += l_375.s7;
        result += l_375.s6;
        result += l_375.s5;
        result += l_375.s4;
        result += l_375.s3;
        result += l_375.s2;
        result += l_375.s1;
        result += l_375.s0;
        result += l_376;
        result += l_377;
        int l_378_i0, l_378_i1, l_378_i2;
        for (l_378_i0 = 0; l_378_i0 < 2; l_378_i0++) {
            for (l_378_i1 = 0; l_378_i1 < 1; l_378_i1++) {
                for (l_378_i2 = 0; l_378_i2 < 2; l_378_i2++) {
                    result += l_378[l_378_i0][l_378_i1][l_378_i2];
                }
            }
        }
        result += l_379.w;
        result += l_379.z;
        result += l_379.y;
        result += l_379.x;
        result += l_380.sf;
        result += l_380.se;
        result += l_380.sd;
        result += l_380.sc;
        result += l_380.sb;
        result += l_380.sa;
        result += l_380.s9;
        result += l_380.s8;
        result += l_380.s7;
        result += l_380.s6;
        result += l_380.s5;
        result += l_380.s4;
        result += l_380.s3;
        result += l_380.s2;
        result += l_380.s1;
        result += l_380.s0;
        result += l_381;
        atomic_add(&p_494->g_special_values[70 * get_linear_group_id() + 35], result);
    }
    else
    { /* block id: 206 */
        (1 + 1);
    }
    return &p_494->g_100[0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_494->g_69 p_494->g_169 p_494->g_75 p_494->l_comm_values p_494->g_100 p_494->g_83 p_494->g_64 p_494->g_58.f0
 * writes: p_494->g_69 p_494->g_169 p_494->g_100
 */
int16_t  func_39(int8_t * p_40, int8_t ** p_41, struct S4 * p_494)
{ /* block id: 71 */
    int16_t l_151 = 0x34CCL;
    VECTOR(uint32_t, 4) l_160 = (VECTOR(uint32_t, 4))(0x0F72682EL, (VECTOR(uint32_t, 2))(0x0F72682EL, 0xF5BDECA5L), 0xF5BDECA5L);
    VECTOR(uint32_t, 4) l_161 = (VECTOR(uint32_t, 4))(0x7D0B8D76L, (VECTOR(uint32_t, 2))(0x7D0B8D76L, 1UL), 1UL);
    int32_t *l_162[5][8][4] = {{{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0}},{{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0}},{{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0}},{{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0}},{{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_100[2][1],&p_494->g_69,(void*)0}}};
    int32_t **l_163 = &l_162[0][1][0];
    uint16_t *l_168 = &p_494->g_169;
    int32_t *l_172 = &p_494->g_100[0][0];
    int64_t *l_173 = (void*)0;
    int8_t *l_174 = &p_494->g_64;
    uint64_t l_175 = 0x79903A0161F22465L;
    int i, j, k;
    for (p_494->g_69 = 0; (p_494->g_69 <= 3); p_494->g_69 = safe_add_func_uint16_t_u_u(p_494->g_69, 1))
    { /* block id: 74 */
        if (l_151)
            break;
    }
    if ((safe_rshift_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((&p_494->g_100[0][0] != (((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 16))(l_160.wzzwxxzxwwzwwwyw)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_161.xzzwywwy)).s07)).yyxyyyyxyxyxxxxx))).sf , ((*l_163) = l_162[0][1][0]))), l_161.z)) ^ (safe_rshift_func_int8_t_s_u((((((l_161.z != (safe_rshift_func_uint16_t_u_s(((*l_168) |= l_161.y), 9))) | (safe_add_func_int8_t_s_s(((((*p_41) = func_42(p_494->g_75.z, l_172, p_494->l_comm_values[(safe_mod_func_uint32_t_u_u(p_494->tid, 59))], (((*l_172) |= 0x30AC00ABAC2E1585L) , p_494->g_100[1][0]), p_494)) == l_174) , (*p_40)), l_161.x))) <= 65535UL) < p_494->g_58.f0) <= p_494->l_comm_values[(safe_mod_func_uint32_t_u_u(p_494->tid, 59))]), 1))) || 0x079EL), (*p_40))) < p_494->l_comm_values[(safe_mod_func_uint32_t_u_u(p_494->tid, 59))]), 0x0EL)) , 0x51L) == l_175) | 0x4091520AL), GROUP_DIVERGE(1, 1))))
    { /* block id: 81 */
        for (l_151 = 6; (l_151 <= (-10)); l_151 = safe_sub_func_uint16_t_u_u(l_151, 8))
        { /* block id: 84 */
            int32_t l_178 = 0x436A30DAL;
            if (l_178)
                break;
        }
    }
    else
    { /* block id: 87 */
        uint32_t l_179 = 0x3B8ED1E4L;
        int32_t l_180 = 0x52E1ABEAL;
        l_180 ^= l_179;
    }
    return p_494->g_169;
}


/* ------------------------------------------ */
/* 
 * reads : p_494->g_69 p_494->g_83 p_494->g_64 p_494->g_100
 * writes: p_494->g_69
 */
int8_t * func_42(int32_t  p_43, int32_t * p_44, uint16_t  p_45, uint8_t  p_46, struct S4 * p_494)
{ /* block id: 33 */
    uint32_t l_141 = 0x7AEC48A5L;
    for (p_46 = 0; (p_46 != 36); p_46 = safe_add_func_int8_t_s_s(p_46, 6))
    { /* block id: 36 */
        int32_t *l_111 = &p_494->g_69;
        uint64_t l_112 = 0x82BA979D12DC1848L;
        int64_t l_122 = (-7L);
        int16_t l_137 = 0x2221L;
        VECTOR(int32_t, 4) l_139 = (VECTOR(int32_t, 4))(0x0C7BFA83L, (VECTOR(int32_t, 2))(0x0C7BFA83L, 9L), 9L);
        int8_t *l_144[2];
        int i;
        for (i = 0; i < 2; i++)
            l_144[i] = &p_494->g_64;
        l_112--;
        for (l_112 = 27; (l_112 < 29); ++l_112)
        { /* block id: 40 */
            int8_t *l_133 = &p_494->g_64;
            int32_t l_135 = 0x38701C1BL;
            int32_t l_138 = (-2L);
            int32_t l_140 = 0x775008D7L;
            if ((safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((-1L), p_46)) != p_43), (0x2A01D187L && (FAKE_DIVERGE(p_494->group_0_offset, get_group_id(0), 10) || (l_122 == (*l_111)))))) == p_494->g_83.x))))
            { /* block id: 41 */
                if ((atomic_inc(&p_494->l_atomic_input[2]) == 6))
                { /* block id: 43 */
                    int32_t l_124 = 0x1CAE4519L;
                    int32_t *l_123[8][8] = {{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124}};
                    int32_t *l_125 = &l_124;
                    uint16_t l_130[5];
                    int32_t l_131 = 0x0BEF2037L;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_130[i] = 0xD2AFL;
                    l_125 = l_123[6][6];
                    for (l_124 = 0; (l_124 != (-20)); l_124--)
                    { /* block id: 47 */
                        int8_t l_128[6];
                        uint8_t l_129 = 0xADL;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_128[i] = 0x67L;
                        l_129 ^= (l_128[2] = 0x7FD6F7C9L);
                    }
                    l_130[2] = 8L;
                    if (l_131)
                    { /* block id: 52 */
                        uint64_t l_132 = 0xA2CE7F336F0E2525L;
                        l_132 |= 0L;
                    }
                    else
                    { /* block id: 54 */
                        (*l_125) = 0x5C81AE91L;
                    }
                    unsigned int result = 0;
                    result += l_124;
                    int l_130_i0;
                    for (l_130_i0 = 0; l_130_i0 < 5; l_130_i0++) {
                        result += l_130[l_130_i0];
                    }
                    result += l_131;
                    atomic_add(&p_494->l_special_values[2], result);
                }
                else
                { /* block id: 57 */
                    (1 + 1);
                }
                if ((*p_44))
                    continue;
                return l_133;
            }
            else
            { /* block id: 62 */
                int32_t *l_134 = &p_494->g_69;
                int32_t *l_136[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_136[i] = &p_494->g_100[1][1];
                l_141++;
                if ((*p_44))
                    break;
            }
            return l_144[0];
        }
        (*l_111) |= (safe_lshift_func_uint16_t_u_s(p_494->g_64, 4));
    }
    return &p_494->g_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_494->g_64 p_494->g_75 p_494->g_83 p_494->g_89 p_494->g_69 p_494->g_90 p_494->g_61 p_494->g_100 p_494->g_58.f0 p_494->g_105
 * writes: p_494->g_68 p_494->g_70 p_494->g_64 p_494->g_89 p_494->g_100 p_494->g_69
 */
int32_t * func_47(int8_t ** p_48, int8_t * p_49, union U1  p_50, uint64_t  p_51, struct S4 * p_494)
{ /* block id: 15 */
    int32_t *l_67 = &p_494->g_36;
    int32_t **l_66[4][8] = {{&l_67,&l_67,(void*)0,&l_67,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,(void*)0,&l_67,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,(void*)0,&l_67,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,(void*)0,&l_67,&l_67,&l_67,&l_67,&l_67}};
    int i, j;
    p_494->g_70 = (p_494->g_68 = (void*)0);
    for (p_494->g_64 = 29; (p_494->g_64 <= 8); p_494->g_64 = safe_sub_func_int64_t_s_s(p_494->g_64, 1))
    { /* block id: 20 */
        uint16_t l_108 = 0xC8CCL;
        l_108 ^= ((&p_494->g_36 != (void*)0) , func_73(p_50.f0, p_494));
    }
    return &p_494->g_69;
}


/* ------------------------------------------ */
/* 
 * reads : p_494->g_61
 * writes:
 */
int8_t ** func_52(uint8_t  p_53, int32_t * p_54, int32_t * p_55, union U0  p_56, int32_t  p_57, struct S4 * p_494)
{ /* block id: 8 */
    int8_t *l_63 = &p_494->g_64;
    int8_t **l_62 = &l_63;
    for (p_56.f0 = 0; (p_56.f0 > 5); ++p_56.f0)
    { /* block id: 11 */
        return p_494->g_61;
    }
    return p_494->g_61;
}


/* ------------------------------------------ */
/* 
 * reads : p_494->g_75 p_494->g_83 p_494->g_89 p_494->g_69 p_494->g_90 p_494->g_64 p_494->g_61 p_494->g_100 p_494->g_58.f0 p_494->g_105
 * writes: p_494->g_89 p_494->g_100 p_494->g_69
 */
int32_t  func_73(int64_t  p_74, struct S4 * p_494)
{ /* block id: 21 */
    VECTOR(uint8_t, 8) l_80 = (VECTOR(uint8_t, 8))(0x83L, (VECTOR(uint8_t, 4))(0x83L, (VECTOR(uint8_t, 2))(0x83L, 0xBCL), 0xBCL), 0xBCL, 0x83L, 0xBCL);
    int8_t *l_82 = (void*)0;
    int8_t **l_81 = &l_82;
    uint32_t *l_88 = &p_494->g_89;
    int64_t *l_91 = (void*)0;
    int64_t *l_92 = (void*)0;
    int64_t *l_93 = (void*)0;
    int64_t *l_94[6][8][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_95 = 0x00D6BF4BL;
    union U0 l_96 = {0x3783AD51L};
    int8_t **l_97[6];
    uint32_t l_98 = 0xA96B5814L;
    int32_t *l_99[5][10] = {{(void*)0,&p_494->g_69,&p_494->g_100[0][0],(void*)0,(void*)0,(void*)0,(void*)0,&p_494->g_100[0][0],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_69,&p_494->g_100[0][0],(void*)0,(void*)0,(void*)0,(void*)0,&p_494->g_100[0][0],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_69,&p_494->g_100[0][0],(void*)0,(void*)0,(void*)0,(void*)0,&p_494->g_100[0][0],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_69,&p_494->g_100[0][0],(void*)0,(void*)0,(void*)0,(void*)0,&p_494->g_100[0][0],&p_494->g_69,(void*)0},{(void*)0,&p_494->g_69,&p_494->g_100[0][0],(void*)0,(void*)0,(void*)0,(void*)0,&p_494->g_100[0][0],&p_494->g_69,(void*)0}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_97[i] = (void*)0;
    p_494->g_100[0][0] ^= ((VECTOR(int32_t, 16))(0x333DF123L, ((VECTOR(int32_t, 2))(p_494->g_75.xx)), (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(9L, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(l_80.s4263)).ywyywyywxyyyyxxy))).s039a, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((l_81 == (l_97[5] = func_52(((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(1L, 0L)).xxxxyyxx, ((VECTOR(int64_t, 16))(p_494->g_83.xyyyxxyyxxxyyyyy)).lo))).s2545445052775735, ((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 8))((safe_lshift_func_int16_t_s_u((0x77C8A60B10F657D2L || 0x0D7774CA6A66835AL), l_80.s1)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((l_95 &= (GROUP_DIVERGE(1, 1) || (((!0x04030276420880F5L) | (((((((safe_add_func_uint32_t_u_u(p_74, ((*l_88) = p_74))) , ((*l_88) |= p_74)) , p_494->g_69) ^ l_80.s1) >= l_80.s7) , p_494->g_90[6]) , p_74)) , 0xBD6B41A2L))), (-8L), 0x1FE0D49B816A8AB2L, 1L)).even)), 0x62794C0DA3939728L, l_95, ((VECTOR(int64_t, 2))(0x002EBDDE1E780F4AL)), (-1L))), (int64_t)l_80.s2))).s1112115432136375, ((VECTOR(int64_t, 16))(0L))))).s75)).odd < p_494->g_64) | 0x223BFC9F35A7B369L), l_88, &p_494->g_69, l_96, p_494->g_64, p_494))) , p_494->g_64), ((VECTOR(uint8_t, 2))(0UL)), 3UL)).xxwzywzzzyyzyzxy)).hi)).hi, ((VECTOR(uint8_t, 4))(253UL))))).z)), l_98)), ((VECTOR(int32_t, 8))((-2L))), 0x5364FFC8L, (-10L), 0x2A3FF9C5L, 6L)).s3;
    p_494->g_69 &= ((((p_494->g_100[1][1] == (p_494->g_58.f0 , (safe_mul_func_int16_t_s_s(p_74, p_494->g_64)))) , ((safe_add_func_uint32_t_u_u((p_494->g_105 , (safe_lshift_func_uint8_t_u_u((((0x8AA5L < (((void*)0 != l_99[0][2]) | (-6L))) , 2UL) , 0xD8L), 0))), p_74)) ^ p_74)) , p_74) | p_494->g_83.x);
    p_494->g_100[1][0] &= 0x11E331E6L;
    return p_74;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_comm_values[i] = 1;
    struct S4 c_495;
    struct S4* p_494 = &c_495;
    struct S4 c_496 = {
        (-1L), // p_494->g_36
        {-1L}, // p_494->g_58
        (void*)0, // p_494->g_61
        0x00L, // p_494->g_64
        0L, // p_494->g_69
        &p_494->g_69, // p_494->g_68
        &p_494->g_69, // p_494->g_70
        (VECTOR(int32_t, 4))(0x09421A0EL, (VECTOR(int32_t, 2))(0x09421A0EL, 0x41F20CF6L), 0x41F20CF6L), // p_494->g_75
        (VECTOR(int64_t, 2))(7L, (-5L)), // p_494->g_83
        0x679804E6L, // p_494->g_89
        {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}, // p_494->g_90
        {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}, // p_494->g_100
        {0x172FL}, // p_494->g_105
        0UL, // p_494->g_169
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2474D7A5L), 0x2474D7A5L), 0x2474D7A5L, 1L, 0x2474D7A5L), // p_494->g_184
        0UL, // p_494->g_323
        0x86226D4EL, // p_494->g_330
        (VECTOR(int8_t, 2))(0x5DL, 3L), // p_494->g_341
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L), // p_494->g_345
        &p_494->g_100[0][0], // p_494->g_360
        (VECTOR(int32_t, 2))(0x4AD75C8BL, 9L), // p_494->g_390
        (VECTOR(int32_t, 8))(0x795881A7L, (VECTOR(int32_t, 4))(0x795881A7L, (VECTOR(int32_t, 2))(0x795881A7L, 0x1C125527L), 0x1C125527L), 0x1C125527L, 0x795881A7L, 0x1C125527L), // p_494->g_391
        (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x6088B177L), 0x6088B177L), // p_494->g_401
        0x6155CBC5B2803182L, // p_494->g_409
        (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L), // p_494->g_413
        {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}, // p_494->g_430
        &p_494->g_58, // p_494->g_433
        &p_494->g_433, // p_494->g_432
        (void*)0, // p_494->g_442
        &p_494->g_70, // p_494->g_469
        0, // p_494->v_collective
        sequence_input[get_global_id(0)], // p_494->global_0_offset
        sequence_input[get_global_id(1)], // p_494->global_1_offset
        sequence_input[get_global_id(2)], // p_494->global_2_offset
        sequence_input[get_local_id(0)], // p_494->local_0_offset
        sequence_input[get_local_id(1)], // p_494->local_1_offset
        sequence_input[get_local_id(2)], // p_494->local_2_offset
        sequence_input[get_group_id(0)], // p_494->group_0_offset
        sequence_input[get_group_id(1)], // p_494->group_1_offset
        sequence_input[get_group_id(2)], // p_494->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 59)), permutations[0][get_linear_local_id()])), // p_494->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_495 = c_496;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_494);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_494->g_36, "p_494->g_36", print_hash_value);
    transparent_crc(p_494->g_64, "p_494->g_64", print_hash_value);
    transparent_crc(p_494->g_69, "p_494->g_69", print_hash_value);
    transparent_crc(p_494->g_75.x, "p_494->g_75.x", print_hash_value);
    transparent_crc(p_494->g_75.y, "p_494->g_75.y", print_hash_value);
    transparent_crc(p_494->g_75.z, "p_494->g_75.z", print_hash_value);
    transparent_crc(p_494->g_75.w, "p_494->g_75.w", print_hash_value);
    transparent_crc(p_494->g_83.x, "p_494->g_83.x", print_hash_value);
    transparent_crc(p_494->g_83.y, "p_494->g_83.y", print_hash_value);
    transparent_crc(p_494->g_89, "p_494->g_89", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_494->g_90[i].f0, "p_494->g_90[i].f0", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_494->g_100[i][j], "p_494->g_100[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_494->g_105.f0, "p_494->g_105.f0", print_hash_value);
    transparent_crc(p_494->g_169, "p_494->g_169", print_hash_value);
    transparent_crc(p_494->g_184.s0, "p_494->g_184.s0", print_hash_value);
    transparent_crc(p_494->g_184.s1, "p_494->g_184.s1", print_hash_value);
    transparent_crc(p_494->g_184.s2, "p_494->g_184.s2", print_hash_value);
    transparent_crc(p_494->g_184.s3, "p_494->g_184.s3", print_hash_value);
    transparent_crc(p_494->g_184.s4, "p_494->g_184.s4", print_hash_value);
    transparent_crc(p_494->g_184.s5, "p_494->g_184.s5", print_hash_value);
    transparent_crc(p_494->g_184.s6, "p_494->g_184.s6", print_hash_value);
    transparent_crc(p_494->g_184.s7, "p_494->g_184.s7", print_hash_value);
    transparent_crc(p_494->g_323, "p_494->g_323", print_hash_value);
    transparent_crc(p_494->g_330, "p_494->g_330", print_hash_value);
    transparent_crc(p_494->g_341.x, "p_494->g_341.x", print_hash_value);
    transparent_crc(p_494->g_341.y, "p_494->g_341.y", print_hash_value);
    transparent_crc(p_494->g_345.s0, "p_494->g_345.s0", print_hash_value);
    transparent_crc(p_494->g_345.s1, "p_494->g_345.s1", print_hash_value);
    transparent_crc(p_494->g_345.s2, "p_494->g_345.s2", print_hash_value);
    transparent_crc(p_494->g_345.s3, "p_494->g_345.s3", print_hash_value);
    transparent_crc(p_494->g_345.s4, "p_494->g_345.s4", print_hash_value);
    transparent_crc(p_494->g_345.s5, "p_494->g_345.s5", print_hash_value);
    transparent_crc(p_494->g_345.s6, "p_494->g_345.s6", print_hash_value);
    transparent_crc(p_494->g_345.s7, "p_494->g_345.s7", print_hash_value);
    transparent_crc(p_494->g_390.x, "p_494->g_390.x", print_hash_value);
    transparent_crc(p_494->g_390.y, "p_494->g_390.y", print_hash_value);
    transparent_crc(p_494->g_391.s0, "p_494->g_391.s0", print_hash_value);
    transparent_crc(p_494->g_391.s1, "p_494->g_391.s1", print_hash_value);
    transparent_crc(p_494->g_391.s2, "p_494->g_391.s2", print_hash_value);
    transparent_crc(p_494->g_391.s3, "p_494->g_391.s3", print_hash_value);
    transparent_crc(p_494->g_391.s4, "p_494->g_391.s4", print_hash_value);
    transparent_crc(p_494->g_391.s5, "p_494->g_391.s5", print_hash_value);
    transparent_crc(p_494->g_391.s6, "p_494->g_391.s6", print_hash_value);
    transparent_crc(p_494->g_391.s7, "p_494->g_391.s7", print_hash_value);
    transparent_crc(p_494->g_401.x, "p_494->g_401.x", print_hash_value);
    transparent_crc(p_494->g_401.y, "p_494->g_401.y", print_hash_value);
    transparent_crc(p_494->g_401.z, "p_494->g_401.z", print_hash_value);
    transparent_crc(p_494->g_401.w, "p_494->g_401.w", print_hash_value);
    transparent_crc(p_494->g_409, "p_494->g_409", print_hash_value);
    transparent_crc(p_494->g_413.s0, "p_494->g_413.s0", print_hash_value);
    transparent_crc(p_494->g_413.s1, "p_494->g_413.s1", print_hash_value);
    transparent_crc(p_494->g_413.s2, "p_494->g_413.s2", print_hash_value);
    transparent_crc(p_494->g_413.s3, "p_494->g_413.s3", print_hash_value);
    transparent_crc(p_494->g_413.s4, "p_494->g_413.s4", print_hash_value);
    transparent_crc(p_494->g_413.s5, "p_494->g_413.s5", print_hash_value);
    transparent_crc(p_494->g_413.s6, "p_494->g_413.s6", print_hash_value);
    transparent_crc(p_494->g_413.s7, "p_494->g_413.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_494->g_430[i].f0, "p_494->g_430[i].f0", print_hash_value);

    }
    transparent_crc(p_494->v_collective, "p_494->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 70; i++)
            transparent_crc(p_494->g_special_values[i + 70 * get_linear_group_id()], "p_494->g_special_values[i + 70 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 70; i++)
            transparent_crc(p_494->l_special_values[i], "p_494->l_special_values[i]", print_hash_value);
    transparent_crc(p_494->l_comm_values[get_linear_local_id()], "p_494->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_494->g_comm_values[get_linear_group_id() * 59 + get_linear_local_id()], "p_494->g_comm_values[get_linear_group_id() * 59 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
