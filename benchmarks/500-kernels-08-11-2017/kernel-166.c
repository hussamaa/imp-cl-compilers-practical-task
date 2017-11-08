// --atomics 84 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 25,95,1 -l 25,5,1
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

__constant uint32_t permutations[10][125] = {
{59,70,123,65,97,60,8,106,58,107,69,80,30,115,39,12,88,6,11,62,3,103,45,55,95,25,4,99,119,54,17,76,24,117,10,112,33,87,121,28,9,114,51,37,94,63,64,18,0,27,91,61,35,82,79,56,29,78,20,53,89,74,81,98,48,38,42,85,73,1,22,19,105,100,2,57,31,109,50,86,96,72,5,110,75,47,71,113,67,120,41,34,46,111,49,116,102,36,108,52,122,43,104,118,66,44,90,93,7,124,68,14,13,15,23,40,26,16,83,92,84,21,77,101,32}, // permutation 0
{9,55,120,71,93,108,27,64,28,83,85,44,109,100,73,92,15,90,8,4,30,24,70,104,106,82,29,40,67,17,118,111,34,117,58,5,32,41,89,86,96,101,98,10,7,1,68,57,54,97,121,14,81,12,94,114,25,61,11,2,112,91,59,99,110,42,103,0,48,45,113,3,33,69,95,105,79,39,31,102,37,76,47,62,35,107,20,74,123,77,80,19,52,88,115,22,26,56,78,51,23,87,53,6,72,66,49,50,38,65,18,36,60,119,84,13,63,124,16,116,43,46,75,21,122}, // permutation 1
{70,16,103,29,28,34,14,20,122,4,18,73,72,85,35,82,2,59,12,3,58,94,98,42,66,8,26,41,104,89,81,63,7,15,45,75,37,114,61,91,86,74,92,27,112,109,96,84,95,79,9,118,113,121,0,65,51,40,111,43,108,116,110,120,100,55,119,71,80,99,10,24,46,50,23,39,6,49,31,21,107,11,97,88,117,1,5,44,123,115,67,52,57,101,105,48,93,62,30,78,124,32,38,106,17,25,102,68,83,87,54,22,53,60,13,19,77,36,76,90,56,47,33,64,69}, // permutation 2
{87,104,18,67,84,118,58,112,14,120,70,88,48,69,13,39,86,124,2,43,22,36,55,35,8,113,33,56,111,123,17,54,25,20,63,62,96,49,98,108,27,4,31,80,76,93,65,46,115,30,74,0,85,83,6,116,45,117,16,11,75,51,34,12,100,101,77,44,121,94,42,52,9,90,119,53,24,114,91,28,19,66,3,97,72,110,10,32,103,64,109,59,60,89,5,26,71,73,47,15,50,38,79,7,29,107,37,122,41,81,57,78,92,1,23,106,99,105,40,68,82,21,61,95,102}, // permutation 3
{40,29,109,86,56,6,76,30,124,111,123,97,85,1,52,34,57,91,80,19,9,113,26,20,70,31,22,2,79,7,17,36,77,60,72,73,13,5,32,95,38,122,37,53,120,65,21,71,25,41,43,108,92,115,90,105,106,114,16,88,55,61,98,47,81,119,50,116,27,49,82,48,118,63,59,104,75,93,4,107,12,101,44,39,100,103,78,23,58,69,15,51,66,74,117,8,87,46,94,3,24,35,33,83,99,0,28,112,96,45,62,110,84,10,18,64,42,68,11,102,89,54,14,67,121}, // permutation 4
{8,105,43,88,123,12,74,118,85,119,96,1,89,49,55,20,110,17,79,39,109,63,40,75,91,10,111,120,4,31,21,104,7,57,90,66,103,93,113,108,71,65,38,14,106,30,70,27,16,32,95,24,102,28,73,37,25,34,76,62,26,78,121,67,18,9,64,86,97,92,87,29,56,84,60,50,3,116,107,99,41,46,33,51,48,22,101,100,69,114,83,80,72,23,94,52,77,15,45,2,47,19,58,117,42,98,59,35,124,68,61,0,54,44,81,5,6,36,122,112,11,13,53,115,82}, // permutation 5
{62,65,26,111,98,75,59,2,20,46,81,114,50,91,87,90,95,107,47,106,100,48,116,44,105,13,108,79,101,92,82,19,33,77,84,80,61,8,121,29,15,25,118,10,71,66,34,27,42,45,12,37,70,54,119,11,96,24,58,14,60,22,78,3,69,97,109,40,57,76,30,16,17,123,43,68,21,5,31,113,93,41,67,117,86,85,36,23,74,28,0,35,94,64,112,88,115,55,56,73,89,122,63,104,51,124,9,18,99,53,52,6,102,49,4,103,1,110,72,120,32,39,38,7,83}, // permutation 6
{85,29,30,92,111,6,65,15,74,103,41,59,80,37,123,64,20,9,106,66,73,46,112,51,11,57,60,122,115,93,22,28,86,96,81,105,14,61,62,43,124,12,5,54,44,116,91,72,31,8,97,90,95,114,2,25,33,35,109,79,18,34,117,36,67,89,40,48,75,99,94,107,50,101,58,120,82,17,110,104,83,118,45,78,53,63,84,42,13,21,32,108,1,100,88,76,7,70,49,26,19,16,10,52,102,47,38,119,98,0,68,24,27,87,69,71,23,55,39,4,121,56,77,3,113}, // permutation 7
{99,36,28,69,66,123,55,75,34,111,78,17,27,18,61,54,50,51,107,121,3,67,53,62,10,113,115,31,44,5,73,23,114,14,117,97,32,46,57,82,116,88,12,74,120,2,60,49,9,0,95,29,16,87,105,86,68,8,119,103,19,41,35,90,93,20,122,52,39,26,92,13,124,1,80,112,64,79,43,108,42,15,11,7,96,37,83,102,40,56,71,100,85,104,106,110,24,91,59,70,72,6,98,48,101,22,25,109,30,118,63,4,65,33,84,81,76,58,77,21,38,45,94,47,89}, // permutation 8
{90,50,57,61,99,46,33,86,51,102,67,98,85,65,43,82,88,40,91,25,108,123,12,19,56,5,119,3,42,69,59,49,13,104,54,27,113,114,16,47,34,83,84,78,21,97,94,79,38,14,107,116,72,39,28,24,7,44,36,120,109,70,41,101,9,18,26,31,48,2,92,75,23,15,53,115,17,0,1,60,66,112,68,35,95,81,32,64,105,8,121,93,52,6,103,80,37,118,45,63,124,76,74,87,4,111,30,20,77,110,29,62,73,89,100,96,10,55,71,117,106,11,22,58,122} // permutation 9
};

// Seed: 3372851812

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
};

struct S1 {
   volatile int16_t  f0;
   int64_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   int64_t  f4;
   int32_t  f5;
};

struct S2 {
    struct S1 g_18;
    int32_t g_24;
    uint16_t g_31;
    struct S1 g_43;
    struct S1 *g_42[4][4][5];
    struct S1 g_59;
    struct S1 g_60;
    int8_t g_62;
    VECTOR(uint64_t, 16) g_76;
    VECTOR(uint32_t, 4) g_79;
    int8_t g_82;
    VECTOR(int16_t, 2) g_90;
    VECTOR(int16_t, 4) g_92;
    VECTOR(int16_t, 4) g_93;
    int32_t *g_112;
    int32_t *g_113;
    int64_t g_136;
    struct S1 g_145;
    struct S1 g_154;
    struct S0 g_155;
    int32_t ** volatile g_158;
    uint64_t g_167;
    VECTOR(uint16_t, 16) g_183;
    volatile int32_t g_186[2][4][4];
    volatile uint16_t g_187;
    VECTOR(uint64_t, 2) g_208;
    VECTOR(uint64_t, 16) g_209;
    int64_t * volatile g_213;
    int64_t * volatile *g_212[5];
    VECTOR(int16_t, 16) g_220;
    uint8_t g_224;
    int8_t g_232[4][7][7];
    volatile VECTOR(uint8_t, 2) g_237;
    int32_t g_251[2][7][4];
    volatile int16_t * volatile g_253;
    volatile int16_t * volatile * volatile g_252;
    volatile int16_t * volatile * volatile * volatile g_254;
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
uint32_t  func_1(struct S2 * p_417);
uint64_t  func_5(uint64_t  p_6, int64_t  p_7, struct S2 * p_417);
uint32_t  func_8(int64_t  p_9, int32_t  p_10, uint64_t  p_11, struct S2 * p_417);
struct S1 * func_14(struct S1 * p_15, uint32_t  p_16, struct S2 * p_417);
int32_t * func_19(int32_t * p_20, int32_t  p_21, int32_t * p_22, struct S2 * p_417);
struct S0  func_25(uint16_t  p_26, int32_t * p_27, int32_t * p_28, struct S2 * p_417);
int32_t * func_32(uint16_t  p_33, uint64_t  p_34, uint16_t * p_35, int64_t  p_36, struct S2 * p_417);
int8_t  func_37(struct S1 * p_38, uint64_t  p_39, struct S0  p_40, struct S1 * p_41, struct S2 * p_417);
int32_t  func_46(struct S1 * p_47, int32_t  p_48, struct S1 * p_49, struct S2 * p_417);
struct S1 * func_50(uint8_t  p_51, int32_t * p_52, uint16_t  p_53, struct S2 * p_417);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_417->l_comm_values p_417->g_comm_values p_417->g_237 p_417->g_113 p_417->g_24 p_417->g_251
 * writes: p_417->g_251
 */
uint32_t  func_1(struct S2 * p_417)
{ /* block id: 4 */
    uint64_t l_3 = 0x5FAC12265E3EDFA8L;
    if (p_417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_417->tid, 125))])
    { /* block id: 5 */
        uint16_t l_2 = 0x05B4L;
        return l_2;
    }
    else
    { /* block id: 7 */
        int32_t l_4 = 0x0980DB95L;
        int32_t *l_416 = &p_417->g_251[0][6][1];
        (*l_416) |= ((0x9A971867B8F5F499L & (FAKE_DIVERGE(p_417->global_0_offset, get_global_id(0), 10) == l_3)) >= (((l_4 < func_5(((l_4 == (((((p_417->g_comm_values[p_417->tid] , ((func_8(l_3, p_417->g_comm_values[p_417->tid], p_417->g_comm_values[p_417->tid], p_417) , l_4) == GROUP_DIVERGE(1, 1))) ^ p_417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_417->tid, 125))]) < p_417->g_comm_values[p_417->tid]) != 0x0C9BL) > p_417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_417->tid, 125))])) < l_3), p_417->g_comm_values[p_417->tid], p_417)) <= (*p_417->g_113)) == 0x4BL));
    }
    return l_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_237
 * writes:
 */
uint64_t  func_5(uint64_t  p_6, int64_t  p_7, struct S2 * p_417)
{ /* block id: 10 */
    uint16_t l_415 = 65528UL;
    int i, j;
    for (p_7 = 0; (p_7 <= (-14)); p_7 = safe_sub_func_uint16_t_u_u(p_7, 3))
    { /* block id: 13 */
        struct S1 *l_17 = &p_417->g_18;
        struct S1 **l_414[4][9] = {{&l_17,&l_17,&l_17,&l_17,&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&l_17},{&l_17,&l_17,&l_17,&l_17,&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&l_17},{&l_17,&l_17,&l_17,&l_17,&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&l_17},{&l_17,&l_17,&l_17,&l_17,&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&p_417->g_42[3][0][1],&l_17}};
        int i, j;
        (1 + 1);
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_417->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 125)), permutations[(safe_mod_func_uint32_t_u_u(p_417->g_237.x, 10))][(safe_mod_func_uint32_t_u_u(p_417->tid, 125))]));
    return l_415;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->l_comm_values
 * writes:
 */
uint32_t  func_8(int64_t  p_9, int32_t  p_10, uint64_t  p_11, struct S2 * p_417)
{ /* block id: 8 */
    return p_417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_417->tid, 125))];
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_18.f0 p_417->g_18.f3 p_417->l_comm_values p_417->g_42 p_417->g_43.f1 p_417->g_60.f4 p_417->g_62 p_417->g_24 p_417->g_76 p_417->g_43.f3 p_417->g_79 p_417->g_60.f2 p_417->g_18.f1 p_417->g_59.f4 p_417->g_82 p_417->g_59.f3 p_417->g_90 p_417->g_92 p_417->g_93 p_417->g_59.f2 p_417->g_43.f4 p_417->g_18.f4 permutations p_417->g_113 p_417->g_60.f3 p_417->g_43.f5 p_417->g_112 p_417->g_155 p_417->g_158 p_417->g_145.f4 p_417->g_183 p_417->g_60.f5 p_417->g_187 p_417->g_154.f1 p_417->g_186 p_417->g_212 p_417->g_252
 * writes: p_417->g_31 p_417->g_18.f1 p_417->g_62 p_417->g_82 p_417->g_59.f3 p_417->g_43.f3 p_417->g_24 p_417->g_18.f4 p_417->g_112 p_417->g_113 p_417->g_136 p_417->g_42 p_417->g_155 p_417->g_167 p_417->g_18.f3 p_417->g_187 p_417->g_154.f1 p_417->g_76 p_417->g_224
 */
struct S1 * func_14(struct S1 * p_15, uint32_t  p_16, struct S2 * p_417)
{ /* block id: 14 */
    int32_t *l_23 = &p_417->g_24;
    int32_t *l_184 = &p_417->g_24;
    int32_t *l_185[7] = {&p_417->g_24,&p_417->g_24,&p_417->g_24,&p_417->g_24,&p_417->g_24,&p_417->g_24,&p_417->g_24};
    uint8_t l_214 = 0x83L;
    int32_t *l_225 = (void*)0;
    VECTOR(uint8_t, 16) l_235 = (VECTOR(uint8_t, 16))(0x83L, (VECTOR(uint8_t, 4))(0x83L, (VECTOR(uint8_t, 2))(0x83L, 0x7EL), 0x7EL), 0x7EL, 0x83L, 0x7EL, (VECTOR(uint8_t, 2))(0x83L, 0x7EL), (VECTOR(uint8_t, 2))(0x83L, 0x7EL), 0x83L, 0x7EL, 0x83L, 0x7EL);
    VECTOR(uint8_t, 16) l_236 = (VECTOR(uint8_t, 16))(0x23L, (VECTOR(uint8_t, 4))(0x23L, (VECTOR(uint8_t, 2))(0x23L, 0x6AL), 0x6AL), 0x6AL, 0x23L, 0x6AL, (VECTOR(uint8_t, 2))(0x23L, 0x6AL), (VECTOR(uint8_t, 2))(0x23L, 0x6AL), 0x23L, 0x6AL, 0x23L, 0x6AL);
    int64_t *l_250[6][5][8] = {{{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1}},{{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1}},{{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1}},{{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1}},{{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1}},{{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1},{(void*)0,(void*)0,&p_417->g_60.f1,&p_417->g_154.f1,&p_417->g_18.f4,&p_417->g_59.f1,&p_417->g_18.f1,&p_417->g_60.f1}}};
    int64_t **l_249 = &l_250[3][3][1];
    int64_t ***l_248 = &l_249;
    int16_t l_259 = (-1L);
    int64_t l_410 = 1L;
    uint32_t l_411 = 0x6FF2CD97L;
    int i, j, k;
    l_23 = func_19(l_23, p_16, &p_417->g_24, p_417);
    for (p_417->g_43.f3 = 0; (p_417->g_43.f3 <= 42); p_417->g_43.f3++)
    { /* block id: 73 */
        (*p_417->g_112) = ((GROUP_DIVERGE(2, 1) , (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 0x77A3L)), (-1L), 0x7302L)).wywyyxzw)).lo)))).x, ((VECTOR(uint16_t, 8))(p_417->g_183.s6459fd89)).s6))) | p_417->g_60.f5);
    }
    --p_417->g_187;
    for (p_417->g_154.f1 = 0; (p_417->g_154.f1 > (-19)); --p_417->g_154.f1)
    { /* block id: 79 */
        uint64_t l_201 = 5UL;
        int64_t *l_211 = &p_417->g_145.f1;
        int64_t **l_210 = &l_211;
        uint64_t *l_215 = (void*)0;
        uint64_t *l_216[10] = {&l_201,&p_417->g_167,(void*)0,&p_417->g_167,&l_201,&l_201,&p_417->g_167,(void*)0,&p_417->g_167,&l_201};
        VECTOR(int32_t, 16) l_217 = (VECTOR(int32_t, 16))(0x434EC5D3L, (VECTOR(int32_t, 4))(0x434EC5D3L, (VECTOR(int32_t, 2))(0x434EC5D3L, 0L), 0L), 0L, 0x434EC5D3L, 0L, (VECTOR(int32_t, 2))(0x434EC5D3L, 0L), (VECTOR(int32_t, 2))(0x434EC5D3L, 0L), 0x434EC5D3L, 0L, 0x434EC5D3L, 0L);
        uint8_t *l_223 = &p_417->g_224;
        struct S1 **l_226 = &p_417->g_42[3][0][1];
        uint16_t *l_240[2][2];
        VECTOR(int16_t, 4) l_243 = (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), (-1L)), (-1L));
        volatile int16_t * volatile * volatile l_255 = (void*)0;/* VOLATILE GLOBAL l_255 */
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_240[i][j] = (void*)0;
        }
        (*l_226) = func_50(((safe_sub_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(p_417->g_24, ((p_417->g_186[0][3][3] | (safe_unary_minus_func_int8_t_s((safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((l_201 & 2UL) && l_201) , ((*l_223) = (safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s(((+(l_214 &= (safe_rshift_func_int16_t_s_s((((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_417->g_208.xxyxxyxyxyyyyxyy)).even)), ((VECTOR(uint64_t, 16))(p_417->g_209.s65cae71ca8741e03)).lo))).s3 & (0x4DL ^ (l_210 != p_417->g_212[1]))), 3)))) && (p_417->g_76.s8--)), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(p_417->g_220.s3772e757)).s75, ((VECTOR(int16_t, 4))((safe_sub_func_int8_t_s_s(p_417->g_92.y, p_417->g_92.w)), p_16, 0x53F9L, 0x1668L)).odd))), 0x0D94L, (-1L))).xwzyxwyxyywyzxwz)), ((VECTOR(int16_t, 16))((-10L)))))).s2e0b)).xyyxxwzxxyxwyywy)).s12, ((VECTOR(int16_t, 2))((-9L)))))).lo)), p_16)))), l_201)) >= p_16), 0x4EL))))) , p_16))) , 0UL), l_217.se)) , 253UL), l_225, p_16, p_417);
        if ((*p_417->g_112))
            continue;
        if (((safe_rshift_func_uint16_t_u_u((((safe_div_func_int16_t_s_s((((l_217.s0 = p_16) != (safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 16))(0x15B6L, 65530UL, p_417->g_183.s7, ((VECTOR(uint16_t, 8))(0x5E12L, 65534UL, 0x1B12L, 65534UL, ((void*)0 != &p_417->g_167), 1UL, 0x0D0CL, 1UL)), (p_417->g_24 | (GROUP_DIVERGE(2, 1) , (p_417->g_224 |= p_417->g_232[0][3][6]))), ((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 2))(0x8C1AL, 9UL)).xyxyxxyyyxxxxxxx, ((VECTOR(uint16_t, 16))(GROUP_DIVERGE(1, 1), (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(l_235.s7f28e239a327664d)).lo, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(l_236.se9)).xxxyxxxx, ((VECTOR(uint8_t, 8))(0xB8L, ((VECTOR(uint8_t, 4))(p_417->g_237.yyxx)), 1UL, 255UL, 0xFAL))))).s1600513071442101)).even))).s4, ((safe_rshift_func_uint16_t_u_u((++p_417->g_31), (((((VECTOR(int16_t, 16))(l_243.yzxxwzxzzzzywwwx)).sd == (safe_rshift_func_uint16_t_u_u((p_417->g_183.s4 = ((((safe_div_func_uint8_t_u_u((+(((l_248 == &l_210) < p_417->g_183.sf) & l_243.x)), p_16)) , &p_15) != (void*)0) != l_201)), 11))) == 0x3BDAC993L) <= 0x6D16L))) | 0x21BED76A3A427FD2L))), p_417->g_251[0][6][1], l_201, ((VECTOR(uint16_t, 8))(0xA682L)), 0xE956L, ((VECTOR(uint16_t, 2))(0UL)), 0xF8BEL)))))))).s1337)).hi))), 65529UL, 65531UL)).se))) && 9L), p_16)) & 0x05L) == GROUP_DIVERGE(1, 1)), p_417->g_62)) <= p_16))
        { /* block id: 89 */
            uint64_t l_256 = 0x358BD54BD57DC6D3L;
            int32_t l_260 = (-9L);
            int32_t l_261[4] = {0x398669CBL,0x398669CBL,0x398669CBL,0x398669CBL};
            uint16_t l_262 = 0UL;
            int i;
            l_255 = p_417->g_252;
            (*l_184) = p_16;
            l_256--;
            l_262++;
        }
        else
        { /* block id: 94 */
            if ((atomic_inc(&p_417->g_atomic_input[84 * get_linear_group_id() + 19]) == 0))
            { /* block id: 96 */
                VECTOR(int32_t, 2) l_265 = (VECTOR(int32_t, 2))(0x013A6416L, 5L);
                VECTOR(int32_t, 16) l_266 = (VECTOR(int32_t, 16))(0x00CBAC44L, (VECTOR(int32_t, 4))(0x00CBAC44L, (VECTOR(int32_t, 2))(0x00CBAC44L, 0x09A180EDL), 0x09A180EDL), 0x09A180EDL, 0x00CBAC44L, 0x09A180EDL, (VECTOR(int32_t, 2))(0x00CBAC44L, 0x09A180EDL), (VECTOR(int32_t, 2))(0x00CBAC44L, 0x09A180EDL), 0x00CBAC44L, 0x09A180EDL, 0x00CBAC44L, 0x09A180EDL);
                VECTOR(uint32_t, 4) l_267 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xB57541A5L), 0xB57541A5L);
                int64_t l_268 = (-4L);
                VECTOR(int32_t, 2) l_269 = (VECTOR(int32_t, 2))(0x5E48FA14L, 1L);
                VECTOR(uint16_t, 4) l_270 = (VECTOR(uint16_t, 4))(0x8115L, (VECTOR(uint16_t, 2))(0x8115L, 0x42EBL), 0x42EBL);
                VECTOR(int32_t, 4) l_271 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x162812FEL), 0x162812FEL);
                VECTOR(int16_t, 2) l_272 = (VECTOR(int16_t, 2))(7L, 0x4A43L);
                VECTOR(int32_t, 2) l_273 = (VECTOR(int32_t, 2))((-7L), 6L);
                VECTOR(int32_t, 2) l_274 = (VECTOR(int32_t, 2))(0x68943416L, 0x20F50867L);
                int32_t l_275 = 0x2CE9B3D0L;
                int8_t l_276 = 0x11L;
                int8_t l_277 = (-1L);
                VECTOR(int8_t, 8) l_278 = (VECTOR(int8_t, 8))(0x57L, (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, 0x62L), 0x62L), 0x62L, 0x57L, 0x62L);
                VECTOR(int8_t, 8) l_279 = (VECTOR(int8_t, 8))(0x3BL, (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 0x25L), 0x25L), 0x25L, 0x3BL, 0x25L);
                uint16_t l_280 = 65528UL;
                uint16_t l_281 = 1UL;
                VECTOR(int32_t, 16) l_282 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L, (VECTOR(int32_t, 2))((-2L), 1L), (VECTOR(int32_t, 2))((-2L), 1L), (-2L), 1L, (-2L), 1L);
                VECTOR(int32_t, 16) l_337 = (VECTOR(int32_t, 16))(0x391C406FL, (VECTOR(int32_t, 4))(0x391C406FL, (VECTOR(int32_t, 2))(0x391C406FL, 0x34B9699EL), 0x34B9699EL), 0x34B9699EL, 0x391C406FL, 0x34B9699EL, (VECTOR(int32_t, 2))(0x391C406FL, 0x34B9699EL), (VECTOR(int32_t, 2))(0x391C406FL, 0x34B9699EL), 0x391C406FL, 0x34B9699EL, 0x391C406FL, 0x34B9699EL);
                VECTOR(int32_t, 16) l_338 = (VECTOR(int32_t, 16))(0x41BCA0F0L, (VECTOR(int32_t, 4))(0x41BCA0F0L, (VECTOR(int32_t, 2))(0x41BCA0F0L, 0x70C34D30L), 0x70C34D30L), 0x70C34D30L, 0x41BCA0F0L, 0x70C34D30L, (VECTOR(int32_t, 2))(0x41BCA0F0L, 0x70C34D30L), (VECTOR(int32_t, 2))(0x41BCA0F0L, 0x70C34D30L), 0x41BCA0F0L, 0x70C34D30L, 0x41BCA0F0L, 0x70C34D30L);
                VECTOR(int32_t, 2) l_339 = (VECTOR(int32_t, 2))(0x736D7CA7L, 0x5293A673L);
                VECTOR(int32_t, 8) l_340 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x51502551L), 0x51502551L), 0x51502551L, 0L, 0x51502551L);
                int16_t l_341 = (-7L);
                VECTOR(int32_t, 8) l_342 = (VECTOR(int32_t, 8))(0x0AEF52FCL, (VECTOR(int32_t, 4))(0x0AEF52FCL, (VECTOR(int32_t, 2))(0x0AEF52FCL, 2L), 2L), 2L, 0x0AEF52FCL, 2L);
                VECTOR(int32_t, 16) l_343 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x64B72D0EL), 0x64B72D0EL), 0x64B72D0EL, 0L, 0x64B72D0EL, (VECTOR(int32_t, 2))(0L, 0x64B72D0EL), (VECTOR(int32_t, 2))(0L, 0x64B72D0EL), 0L, 0x64B72D0EL, 0L, 0x64B72D0EL);
                VECTOR(int32_t, 8) l_344 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L));
                VECTOR(int32_t, 4) l_345 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x511230DBL), 0x511230DBL);
                VECTOR(int16_t, 4) l_346 = (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), (-1L)), (-1L));
                uint32_t l_347 = 0x280EBF06L;
                uint32_t l_348 = 0x1CD262EEL;
                VECTOR(int16_t, 16) l_349 = (VECTOR(int16_t, 16))(0x7C36L, (VECTOR(int16_t, 4))(0x7C36L, (VECTOR(int16_t, 2))(0x7C36L, 5L), 5L), 5L, 0x7C36L, 5L, (VECTOR(int16_t, 2))(0x7C36L, 5L), (VECTOR(int16_t, 2))(0x7C36L, 5L), 0x7C36L, 5L, 0x7C36L, 5L);
                VECTOR(int16_t, 8) l_350 = (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 1L), 1L), 1L, 4L, 1L);
                uint64_t l_351 = 0x5A88354F028AAC1CL;
                VECTOR(int8_t, 2) l_352 = (VECTOR(int8_t, 2))(0x30L, (-1L));
                VECTOR(int16_t, 8) l_353 = (VECTOR(int16_t, 8))(0x0AD3L, (VECTOR(int16_t, 4))(0x0AD3L, (VECTOR(int16_t, 2))(0x0AD3L, 0x312DL), 0x312DL), 0x312DL, 0x0AD3L, 0x312DL);
                uint32_t l_354 = 4294967291UL;
                int64_t l_355 = (-1L);
                uint16_t l_356 = 0x9B57L;
                VECTOR(int32_t, 8) l_357 = (VECTOR(int32_t, 8))(0x2FA75F79L, (VECTOR(int32_t, 4))(0x2FA75F79L, (VECTOR(int32_t, 2))(0x2FA75F79L, 0x090F38BFL), 0x090F38BFL), 0x090F38BFL, 0x2FA75F79L, 0x090F38BFL);
                int32_t l_358 = (-8L);
                uint32_t l_359[7][10] = {{0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL,0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL},{0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL,0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL},{0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL,0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL},{0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL,0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL},{0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL,0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL},{0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL,0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL},{0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL,0x9DFE5DAEL,0xD937E00EL,4294967286UL,0xD937E00EL,0x9DFE5DAEL}};
                uint16_t l_360 = 65534UL;
                int64_t l_361[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_361[i] = 0L;
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_265.yy)).yyxx, ((VECTOR(int32_t, 2))(0L, (-10L))).xxyy, ((VECTOR(int32_t, 4))(l_266.sb1e2))))), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_267.x, (-3L), l_268, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_269.xxxxyxxyxyxxxxxy)).s54)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(0x4076FA71L, 8L)).yxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4EDFAD66L, 0x37AEF03BL)), 0L, 0x33B86707L)).xxwyzxxy)).lo))).xwwxxxyxxxxyyxzz)).sabf8)).odd)), 0x05CA28C2L, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(2L, 0x7304L)))).xyyxxyyxxxxxyyxx)).odd, ((VECTOR(uint16_t, 4))(l_270.wwyz)).xwxyzxzx))))))).sb4, ((VECTOR(int32_t, 4))(0x52DC2B95L, ((VECTOR(int32_t, 2))(0x0506F589L, 0L)), 9L)).odd, ((VECTOR(int32_t, 2))(l_271.xx))))).xxxy))), 0x40BBEF1FL, 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))((l_272.x = ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x47DCL, 0x2B69L)).xyyxxyyy)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x16CAL, 0x3B5FL)))), 0L, 0x0BCEL)).lo)).yyxyyxxy))).s5735416422577007, ((VECTOR(int16_t, 8))(l_272.xxyxyxyy)).s1411504737313351))).s6), 4L, 0x7296L, 0x1997L)), ((VECTOR(uint16_t, 2))(8UL, 0UL)).yxyy))))).z, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_273.yyyy)).hi)), ((VECTOR(int32_t, 2))(l_274.xx)), ((VECTOR(int32_t, 8))(1L, 0x2507C90EL, l_275, ((l_277 = l_276) , ((((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_278.s2773)).hi)).yxyyyyyyxyxyxyyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_279.s2037)).odd)), (-8L), 0x7EL)).ywyxwyyyzyzyzzxy))).s3 , (l_281 = l_280)) , (-2L))), 0L, 0x1DBE3394L, 0x14BB4250L, (-1L))).s1, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_282.s42)).xyyy)))))).sf)
                { /* block id: 100 */
                    uint32_t l_283 = 0x57BAD7B6L;
                    int32_t l_287 = 0L;
                    int32_t *l_286 = &l_287;
                    int32_t *l_288 = &l_287;
                    l_283--;
                    l_288 = l_286;
                }
                else
                { /* block id: 103 */
                    int32_t l_289 = 0x5419E4F1L;
                    uint64_t l_290 = 18446744073709551615UL;
                    VECTOR(int32_t, 8) l_291 = (VECTOR(int32_t, 8))(0x60469241L, (VECTOR(int32_t, 4))(0x60469241L, (VECTOR(int32_t, 2))(0x60469241L, 0x71D65AB0L), 0x71D65AB0L), 0x71D65AB0L, 0x60469241L, 0x71D65AB0L);
                    VECTOR(int32_t, 8) l_292 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 3L), 3L), 3L, 1L, 3L);
                    int8_t l_293 = 0x7EL;
                    VECTOR(int32_t, 16) l_294 = (VECTOR(int32_t, 16))(0x3D731B62L, (VECTOR(int32_t, 4))(0x3D731B62L, (VECTOR(int32_t, 2))(0x3D731B62L, 5L), 5L), 5L, 0x3D731B62L, 5L, (VECTOR(int32_t, 2))(0x3D731B62L, 5L), (VECTOR(int32_t, 2))(0x3D731B62L, 5L), 0x3D731B62L, 5L, 0x3D731B62L, 5L);
                    int64_t l_336 = 0L;
                    int i;
                    l_265.y = ((l_289 = (l_282.s8 &= l_289)) , l_290);
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_291.s0167)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_292.s0244)), ((VECTOR(int32_t, 2))((-1L), 0L)).yyxy))).xyzywzzwxxyywxzy, (int32_t)l_293))).s39)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_294.sae59)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x0522CE8AL, (-1L))).xyyyxxxx)).s64))), 6L, 0x025F1282L)).hi))), 3L, (-1L))).hi)).z)
                    { /* block id: 107 */
                        int16_t l_295 = 0L;
                        uint32_t l_296[8] = {0xD9A530B4L,9UL,0xD9A530B4L,0xD9A530B4L,9UL,0xD9A530B4L,0xD9A530B4L,9UL};
                        uint16_t l_297[8];
                        uint16_t l_298[8];
                        uint32_t l_299 = 2UL;
                        uint8_t l_300 = 0xC6L;
                        struct S1 l_301 = {-2L,0x60C490DDEF2FD902L,0UL,4294967289UL,0L,0x5A6D4357L};/* VOLATILE GLOBAL l_301 */
                        uint32_t l_302 = 0x7BE7A95DL;
                        VECTOR(int64_t, 4) l_303 = (VECTOR(int64_t, 4))(0x4391C7FB66839CFAL, (VECTOR(int64_t, 2))(0x4391C7FB66839CFAL, 0x16242BDF68D6B1C4L), 0x16242BDF68D6B1C4L);
                        int64_t l_304 = 0x01F26A2760B0B682L;
                        uint16_t l_305 = 0xE1A2L;
                        struct S0 l_306 = {0L};
                        uint8_t l_307[1];
                        int64_t l_308[5][9][5] = {{{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L}},{{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L}},{{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L}},{{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L}},{{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L},{(-6L),0x2843BA56D8757812L,0x626C057EF1B187F4L,0x50F0E9F3FECB31ACL,9L}}};
                        int32_t l_309[1][4][8] = {{{(-1L),0x72F42F70L,8L,0x31B2E097L,1L,(-1L),0x31B2E097L,0x7DC4D2F9L},{(-1L),0x72F42F70L,8L,0x31B2E097L,1L,(-1L),0x31B2E097L,0x7DC4D2F9L},{(-1L),0x72F42F70L,8L,0x31B2E097L,1L,(-1L),0x31B2E097L,0x7DC4D2F9L},{(-1L),0x72F42F70L,8L,0x31B2E097L,1L,(-1L),0x31B2E097L,0x7DC4D2F9L}}};
                        uint8_t l_310 = 0xF8L;
                        VECTOR(int32_t, 2) l_311 = (VECTOR(int32_t, 2))(0x1D4E75E4L, 9L);
                        int32_t *l_312 = (void*)0;
                        int32_t *l_313 = (void*)0;
                        int32_t *l_314 = (void*)0;
                        int32_t *l_315[1][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                        uint8_t l_316 = 8UL;
                        VECTOR(uint32_t, 4) l_317 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0x56AD4737L), 0x56AD4737L);
                        int16_t *l_319 = &l_295;
                        int16_t **l_318[6] = {&l_319,&l_319,&l_319,&l_319,&l_319,&l_319};
                        int16_t **l_320 = &l_319;
                        int16_t **l_321 = &l_319;
                        VECTOR(int32_t, 2) l_322 = (VECTOR(int32_t, 2))((-10L), 0x4600EC42L);
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_297[i] = 1UL;
                        for (i = 0; i < 8; i++)
                            l_298[i] = 0UL;
                        for (i = 0; i < 1; i++)
                            l_307[i] = 0UL;
                        l_300 = (l_299 = (l_292.s1 &= ((l_295 , (l_296[6] , (l_280 = (l_270.x = l_297[7])))) , l_298[1])));
                        l_315[0][8][1] = (l_301 , (l_314 = (l_302 , (l_313 = (((l_268 ^= ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(l_303.wyyyxwzzxzzyxzxw)).sd1, ((VECTOR(int64_t, 2))(0x48C645B7BFBE90F8L, (-1L)))))).xyxyyxxy)).s4) , ((l_310 |= (l_309[0][2][6] = (((l_305 |= l_304) , l_306) , ((l_307[0] , 0x086E9191ECFDBE57L) , (l_308[1][2][1] = (FAKE_DIVERGE(p_417->group_1_offset, get_group_id(1), 10) , 0x2AB05334L)))))) , 0x3F561DA9L)) , (((VECTOR(int32_t, 2))(l_311.yy)).hi , l_312))))));
                        l_321 = (l_320 = (((l_280 = (l_316 , 5UL)) , ((VECTOR(uint32_t, 2))(l_317.yw)).lo) , l_318[1]));
                        l_274.x ^= l_322.y;
                    }
                    else
                    { /* block id: 125 */
                        int32_t l_323 = 0x436BD2E5L;
                        uint8_t l_324 = 0x9FL;
                        int32_t l_326 = 1L;
                        int32_t *l_325 = &l_326;
                        int32_t *l_327 = &l_326;
                        int32_t *l_328 = &l_326;
                        int32_t *l_329 = &l_326;
                        int32_t l_330[8][5][6] = {{{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L}},{{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L}},{{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L}},{{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L}},{{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L}},{{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L}},{{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L}},{{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L},{0x0F2E4CC1L,0L,0x7CAD346CL,0x4F95F059L,9L,0x0F2E4CC1L}}};
                        int8_t l_331[9][1][5] = {{{0x2CL,0x3CL,(-1L),0x27L,0x3CL}},{{0x2CL,0x3CL,(-1L),0x27L,0x3CL}},{{0x2CL,0x3CL,(-1L),0x27L,0x3CL}},{{0x2CL,0x3CL,(-1L),0x27L,0x3CL}},{{0x2CL,0x3CL,(-1L),0x27L,0x3CL}},{{0x2CL,0x3CL,(-1L),0x27L,0x3CL}},{{0x2CL,0x3CL,(-1L),0x27L,0x3CL}},{{0x2CL,0x3CL,(-1L),0x27L,0x3CL}},{{0x2CL,0x3CL,(-1L),0x27L,0x3CL}}};
                        int32_t l_332 = 0x06DE9C2FL;
                        uint32_t l_333 = 4294967290UL;
                        int i, j, k;
                        l_327 = (((VECTOR(int16_t, 2))((-2L), (-1L))).odd , ((l_324 = l_323) , l_325));
                        l_329 = l_328;
                        l_333++;
                    }
                    l_265.y |= l_336;
                }
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0L)).yyxyxyyxyyyxyyyx)).s6578)).xywwxyzz, ((VECTOR(int32_t, 2))(0L, 0x33AF782CL)).xyxyxxyy))).even, ((VECTOR(int32_t, 4))(l_337.s69c0)), ((VECTOR(int32_t, 4))((GROUP_DIVERGE(1, 1) , ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(l_338.s542d)), ((VECTOR(int32_t, 8))(l_339.xxxxyyxy)).lo, ((VECTOR(int32_t, 4))(l_340.s4130))))).y), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_341, ((VECTOR(int32_t, 2))(0x21F4056BL, 0x3A707F6EL)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_342.s3224502120344326)).s77)), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_343.s55)).yxxy)).x, ((VECTOR(int32_t, 2))(0x5C49A5CCL, 0x6FA0EF61L)), 0x53251B80L)).hi)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x21AF5AA0L, (-1L))))).yyxxyxxx)).s6413263744163142)).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_344.s53711415)).even)).even)).xxyx)))).xxzxzyyw, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_345.xywy)).x, ((VECTOR(int32_t, 2))(0x41587A9BL, 0x183327FBL)), 0x0DC0A0A9L)).ywzwzzwz))).lo, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(l_346.xzwzzwxx)), ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(0xA399L, 0x3029L)).xyxx, ((VECTOR(uint16_t, 16))(0xBBC5L, 0xEC51L, (l_348 = (l_347 , FAKE_DIVERGE(p_417->global_1_offset, get_global_id(1), 10))), 0xCE46L, 65526UL, ((VECTOR(uint16_t, 2))(65535UL, 0UL)), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_349.s9714aeca)).s30)).xxxxxxyx)).s74, ((VECTOR(int16_t, 2))(l_350.s50)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(0x0BL, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(8L, l_351, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x69L, 0x28L)).yyxy)), 0x7CL, (-2L))).hi)).yyxwzxwz)).s1, ((VECTOR(int8_t, 4))(l_352.xyxx)), 0L, 0x14L)).s2252101117530761, ((VECTOR(uint8_t, 8))(0xA5L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xAFL, 255UL)), 0x61L, 0x8DL)))), 0x06L, 253UL, 254UL)).s3510763674052037))).hi)).s01))).xyxxxxxyyxxxxyxy)).s2fab)).even, ((VECTOR(int16_t, 2))(l_353.s42))))).yxyxyxyy, (int16_t)(l_355 |= l_354), (int16_t)(l_356 , (((VECTOR(int32_t, 16))(l_357.s0713742771651206)).s3 , l_358))))).lo, (int16_t)l_359[3][4]))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-5L), (-5L))).xxyyxyyy)))).s57)).xxyx)).even)).yyyxxxyy, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x65L, ((VECTOR(int8_t, 2))(0x6FL, 0x59L)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(0x0EL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x51L, 2L)), 0x39L, (-7L))), l_360, 7L, 0x38L)).odd))).z, 0L, ((VECTOR(int8_t, 2))(0x7CL)), 8L, (-8L), 0L, 0x2DL)), ((VECTOR(int8_t, 8))((-1L)))))).s7463601774232527)).s65d8, ((VECTOR(int8_t, 4))(3L))))).odd)))).odd, ((VECTOR(int8_t, 2))(6L)), 0L, 2L)).s11)), 0x33L, 0x65L)), ((VECTOR(uint8_t, 4))(0UL))))).wxyzwwwz, ((VECTOR(int16_t, 8))((-6L)))))).s53)).yxxy))), 0x0ADCL, 0x4661L, 0x9883L, 7UL, 0x465AL)).sb4bc))).zzxwzywx))).hi))))).hi)))))), l_361[0], 0x4FC305E6L, 0x476549AEL)).s51)), 0x55A50DAFL))))).yyywzxww)).even)).even)), ((VECTOR(int32_t, 2))(0x66702D9FL))))).xxxyxxyxyyxxxxyx, ((VECTOR(int32_t, 16))(0x78F1976CL)), ((VECTOR(int32_t, 16))((-1L)))))).s879d)).z)
                { /* block id: 135 */
                    int32_t l_362 = 7L;
                    int16_t l_366 = 2L;
                    int32_t *l_371 = &l_362;
                    uint64_t l_372[3];
                    uint64_t l_373 = 18446744073709551615UL;
                    uint64_t l_374 = 0x51C9278EF296DA3DL;
                    int16_t l_375 = 0x42C0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_372[i] = 18446744073709551609UL;
                    for (l_362 = 0; (l_362 < 9); l_362 = safe_add_func_uint64_t_u_u(l_362, 9))
                    { /* block id: 138 */
                        int32_t l_365 = (-3L);
                        l_342.s5 = l_365;
                    }
                    if (l_366)
                    { /* block id: 141 */
                        VECTOR(int32_t, 4) l_367 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x329E2B0AL), 0x329E2B0AL);
                        int i;
                        l_362 &= (l_339.x = (l_274.x = l_367.w));
                    }
                    else
                    { /* block id: 145 */
                        int32_t l_369 = 0x23F55A90L;
                        int32_t *l_368 = &l_369;
                        int32_t *l_370 = &l_369;
                        l_370 = l_368;
                    }
                    l_371 = (void*)0;
                    if (((l_374 = (l_372[1] , l_373)) , l_375))
                    { /* block id: 150 */
                        int16_t l_376 = (-2L);
                        int32_t l_377[7];
                        uint8_t l_378 = 0xE2L;
                        int16_t l_379 = (-3L);
                        uint8_t l_380 = 0xADL;
                        int32_t *l_381 = &l_377[3];
                        int32_t *l_382[4][1];
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_377[i] = 0x6A307C37L;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_382[i][j] = &l_377[3];
                        }
                        l_380 = ((l_378 = (l_377[3] = l_376)) , (l_337.se = l_379));
                        l_371 = l_381;
                        (*l_371) &= 0x14996A10L;
                        l_371 = l_382[3][0];
                    }
                    else
                    { /* block id: 158 */
                        uint32_t l_383 = 0x82461E03L;
                        int32_t l_385 = 7L;
                        int32_t *l_384 = &l_385;
                        int64_t l_386 = (-1L);
                        uint32_t l_387[2][7][1] = {{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}},{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}}};
                        int i, j, k;
                        l_383 = (-4L);
                        l_371 = l_384;
                        ++l_387[1][3][0];
                    }
                }
                else
                { /* block id: 163 */
                    struct S0 l_390 = {-1L};
                    struct S0 l_391 = {-2L};
                    VECTOR(int8_t, 8) l_392 = (VECTOR(int8_t, 8))(0x18L, (VECTOR(int8_t, 4))(0x18L, (VECTOR(int8_t, 2))(0x18L, 0x79L), 0x79L), 0x79L, 0x18L, 0x79L);
                    VECTOR(int8_t, 8) l_393 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x39L), 0x39L), 0x39L, (-1L), 0x39L);
                    VECTOR(int8_t, 16) l_394 = (VECTOR(int8_t, 16))(0x49L, (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, (-2L)), (-2L)), (-2L), 0x49L, (-2L), (VECTOR(int8_t, 2))(0x49L, (-2L)), (VECTOR(int8_t, 2))(0x49L, (-2L)), 0x49L, (-2L), 0x49L, (-2L));
                    VECTOR(uint8_t, 2) l_395 = (VECTOR(uint8_t, 2))(246UL, 0x2EL);
                    uint32_t l_396 = 0xA5AB4AA5L;
                    VECTOR(int8_t, 4) l_397 = (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x45L), 0x45L);
                    uint64_t l_398 = 0UL;
                    VECTOR(int8_t, 2) l_399 = (VECTOR(int8_t, 2))(1L, 0x4BL);
                    VECTOR(int8_t, 4) l_400 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x52L), 0x52L);
                    uint64_t l_401 = 0x8C8228A0B8D37320L;
                    int16_t l_402 = 0x3E68L;
                    uint8_t l_403 = 0x71L;
                    int32_t l_404[8][1] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
                    int32_t l_406 = (-1L);
                    int32_t *l_405 = &l_406;
                    int32_t *l_407 = &l_406;
                    int32_t *l_408 = (void*)0;
                    uint8_t l_409 = 6UL;
                    int i, j;
                    l_337.s9 = (((VECTOR(int8_t, 16))(((l_391 = l_390) , (-8L)), ((VECTOR(int8_t, 16))(l_392.s7044022442016704)).sd, (l_278.s4 = (-1L)), (-3L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(8L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(l_393.s5604)).even, ((VECTOR(int8_t, 8))(l_394.sc4afb487)).s51))))), (((VECTOR(uint8_t, 8))(l_395.xxxxyyxx)).s3 , (l_352.x = 0L)), l_396, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_397.zwywxzyw)).odd)).odd)), ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((-1L), ((l_351 = l_398) , 0x46L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_399.xyxxyyyx)).s73)))), ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_400.zx)).xxyx)).odd, ((VECTOR(int8_t, 16))(1L, 0x0CL, (-3L), l_401, ((VECTOR(int8_t, 4))(0x43L)), 7L, ((VECTOR(int8_t, 2))(0x1CL)), 6L, 0L, ((VECTOR(int8_t, 2))(5L)), 0x3BL)).s59))).xxyy, ((VECTOR(int8_t, 4))(0x0AL))))))).s1367172330666762)).s0, l_402, ((VECTOR(int8_t, 4))(0x22L)), (-1L), 0L)).s5, 0x74L, ((VECTOR(int8_t, 4))(0L)), (-3L), 0L)).hi, ((VECTOR(int8_t, 4))(0x3BL))))), 0x19L, l_403, 0x73L, 0x72L, 0x6AL)).sd2)).xxxyxxxxyxyyyxyy)).hi, ((VECTOR(int8_t, 8))(0x6AL))))).s4062645267646720, ((VECTOR(int8_t, 16))(0L)), ((VECTOR(int8_t, 16))(0L))))))).sa0)), ((VECTOR(int8_t, 4))((-5L))), 0x2AL, ((VECTOR(int8_t, 4))((-1L))), 0L)).sf , l_404[7][0]);
                    l_408 = (l_407 = l_405);
                    l_271.z &= l_409;
                }
                unsigned int result = 0;
                result += l_265.y;
                result += l_265.x;
                result += l_266.sf;
                result += l_266.se;
                result += l_266.sd;
                result += l_266.sc;
                result += l_266.sb;
                result += l_266.sa;
                result += l_266.s9;
                result += l_266.s8;
                result += l_266.s7;
                result += l_266.s6;
                result += l_266.s5;
                result += l_266.s4;
                result += l_266.s3;
                result += l_266.s2;
                result += l_266.s1;
                result += l_266.s0;
                result += l_267.w;
                result += l_267.z;
                result += l_267.y;
                result += l_267.x;
                result += l_268;
                result += l_269.y;
                result += l_269.x;
                result += l_270.w;
                result += l_270.z;
                result += l_270.y;
                result += l_270.x;
                result += l_271.w;
                result += l_271.z;
                result += l_271.y;
                result += l_271.x;
                result += l_272.y;
                result += l_272.x;
                result += l_273.y;
                result += l_273.x;
                result += l_274.y;
                result += l_274.x;
                result += l_275;
                result += l_276;
                result += l_277;
                result += l_278.s7;
                result += l_278.s6;
                result += l_278.s5;
                result += l_278.s4;
                result += l_278.s3;
                result += l_278.s2;
                result += l_278.s1;
                result += l_278.s0;
                result += l_279.s7;
                result += l_279.s6;
                result += l_279.s5;
                result += l_279.s4;
                result += l_279.s3;
                result += l_279.s2;
                result += l_279.s1;
                result += l_279.s0;
                result += l_280;
                result += l_281;
                result += l_282.sf;
                result += l_282.se;
                result += l_282.sd;
                result += l_282.sc;
                result += l_282.sb;
                result += l_282.sa;
                result += l_282.s9;
                result += l_282.s8;
                result += l_282.s7;
                result += l_282.s6;
                result += l_282.s5;
                result += l_282.s4;
                result += l_282.s3;
                result += l_282.s2;
                result += l_282.s1;
                result += l_282.s0;
                result += l_337.sf;
                result += l_337.se;
                result += l_337.sd;
                result += l_337.sc;
                result += l_337.sb;
                result += l_337.sa;
                result += l_337.s9;
                result += l_337.s8;
                result += l_337.s7;
                result += l_337.s6;
                result += l_337.s5;
                result += l_337.s4;
                result += l_337.s3;
                result += l_337.s2;
                result += l_337.s1;
                result += l_337.s0;
                result += l_338.sf;
                result += l_338.se;
                result += l_338.sd;
                result += l_338.sc;
                result += l_338.sb;
                result += l_338.sa;
                result += l_338.s9;
                result += l_338.s8;
                result += l_338.s7;
                result += l_338.s6;
                result += l_338.s5;
                result += l_338.s4;
                result += l_338.s3;
                result += l_338.s2;
                result += l_338.s1;
                result += l_338.s0;
                result += l_339.y;
                result += l_339.x;
                result += l_340.s7;
                result += l_340.s6;
                result += l_340.s5;
                result += l_340.s4;
                result += l_340.s3;
                result += l_340.s2;
                result += l_340.s1;
                result += l_340.s0;
                result += l_341;
                result += l_342.s7;
                result += l_342.s6;
                result += l_342.s5;
                result += l_342.s4;
                result += l_342.s3;
                result += l_342.s2;
                result += l_342.s1;
                result += l_342.s0;
                result += l_343.sf;
                result += l_343.se;
                result += l_343.sd;
                result += l_343.sc;
                result += l_343.sb;
                result += l_343.sa;
                result += l_343.s9;
                result += l_343.s8;
                result += l_343.s7;
                result += l_343.s6;
                result += l_343.s5;
                result += l_343.s4;
                result += l_343.s3;
                result += l_343.s2;
                result += l_343.s1;
                result += l_343.s0;
                result += l_344.s7;
                result += l_344.s6;
                result += l_344.s5;
                result += l_344.s4;
                result += l_344.s3;
                result += l_344.s2;
                result += l_344.s1;
                result += l_344.s0;
                result += l_345.w;
                result += l_345.z;
                result += l_345.y;
                result += l_345.x;
                result += l_346.w;
                result += l_346.z;
                result += l_346.y;
                result += l_346.x;
                result += l_347;
                result += l_348;
                result += l_349.sf;
                result += l_349.se;
                result += l_349.sd;
                result += l_349.sc;
                result += l_349.sb;
                result += l_349.sa;
                result += l_349.s9;
                result += l_349.s8;
                result += l_349.s7;
                result += l_349.s6;
                result += l_349.s5;
                result += l_349.s4;
                result += l_349.s3;
                result += l_349.s2;
                result += l_349.s1;
                result += l_349.s0;
                result += l_350.s7;
                result += l_350.s6;
                result += l_350.s5;
                result += l_350.s4;
                result += l_350.s3;
                result += l_350.s2;
                result += l_350.s1;
                result += l_350.s0;
                result += l_351;
                result += l_352.y;
                result += l_352.x;
                result += l_353.s7;
                result += l_353.s6;
                result += l_353.s5;
                result += l_353.s4;
                result += l_353.s3;
                result += l_353.s2;
                result += l_353.s1;
                result += l_353.s0;
                result += l_354;
                result += l_355;
                result += l_356;
                result += l_357.s7;
                result += l_357.s6;
                result += l_357.s5;
                result += l_357.s4;
                result += l_357.s3;
                result += l_357.s2;
                result += l_357.s1;
                result += l_357.s0;
                result += l_358;
                int l_359_i0, l_359_i1;
                for (l_359_i0 = 0; l_359_i0 < 7; l_359_i0++) {
                    for (l_359_i1 = 0; l_359_i1 < 10; l_359_i1++) {
                        result += l_359[l_359_i0][l_359_i1];
                    }
                }
                result += l_360;
                int l_361_i0;
                for (l_361_i0 = 0; l_361_i0 < 2; l_361_i0++) {
                    result += l_361[l_361_i0];
                }
                atomic_add(&p_417->g_special_values[84 * get_linear_group_id() + 19], result);
            }
            else
            { /* block id: 173 */
                (1 + 1);
            }
            (*l_248) = (void*)0;
        }
        ++l_411;
    }
    return &p_417->g_145;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_18.f0 p_417->g_18.f3 p_417->l_comm_values p_417->g_42 p_417->g_43.f1 p_417->g_60.f4 p_417->g_62 p_417->g_24 p_417->g_76 p_417->g_43.f3 p_417->g_79 p_417->g_60.f2 p_417->g_18.f1 p_417->g_59.f4 p_417->g_82 p_417->g_59.f3 p_417->g_90 p_417->g_92 p_417->g_93 p_417->g_59.f2 p_417->g_43.f4 p_417->g_18.f4 permutations p_417->g_113 p_417->g_60.f3 p_417->g_43.f5 p_417->g_112 p_417->g_155 p_417->g_158 p_417->g_145.f4
 * writes: p_417->g_31 p_417->g_18.f1 p_417->g_62 p_417->g_82 p_417->g_59.f3 p_417->g_43.f3 p_417->g_24 p_417->g_18.f4 p_417->g_112 p_417->g_113 p_417->g_136 p_417->g_42 p_417->g_155 p_417->g_167 p_417->g_18.f3
 */
int32_t * func_19(int32_t * p_20, int32_t  p_21, int32_t * p_22, struct S2 * p_417)
{ /* block id: 15 */
    uint64_t l_29 = 18446744073709551612UL;
    uint16_t *l_30 = &p_417->g_31;
    struct S0 l_56 = {-8L};
    int64_t *l_57 = &p_417->g_18.f1;
    struct S1 *l_58[5] = {&p_417->g_59,&p_417->g_59,&p_417->g_59,&p_417->g_59,&p_417->g_59};
    int32_t l_103[3];
    struct S0 *l_161 = &l_56;
    struct S0 *l_162 = &p_417->g_155;
    struct S0 l_163 = {-7L};
    uint64_t *l_166[5] = {&l_29,&l_29,&l_29,&l_29,&l_29};
    uint32_t *l_172 = &p_417->g_18.f3;
    uint16_t l_177 = 0x3313L;
    int32_t **l_178 = &p_417->g_113;
    int i;
    for (i = 0; i < 3; i++)
        l_103[i] = 1L;
    l_163 = ((*l_162) = ((*l_161) = func_25(((*l_30) = func_8(p_417->g_18.f0, p_417->g_18.f3, l_29, p_417)), func_32(((((func_37(p_417->g_42[3][0][1], (((safe_sub_func_uint32_t_u_u((func_46(func_50((safe_div_func_int64_t_s_s(p_417->g_43.f1, (l_56 , ((*l_57) = (-6L))))), &p_417->g_24, p_21, p_417), p_21, l_58[3], p_417) , 4294967295UL), 0xA607CF51L)) | l_103[2]) , p_21), l_56, l_58[3], p_417) != p_21) ^ l_103[1]) != 1L) != FAKE_DIVERGE(p_417->global_0_offset, get_global_id(0), 10)), l_56.f0, l_30, l_103[0], p_417), p_20, p_417)));
    (*l_178) = (((safe_sub_func_uint8_t_u_u(((p_417->g_76.s3 & (p_417->g_167 = p_21)) , 255UL), ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((((~((*l_172)++)) != ((*l_162) , p_417->g_43.f3)) > 1UL), 2)) | ((VECTOR(int8_t, 2))(0x4AL, 1L)).odd), (((safe_mul_func_int8_t_s_s((p_417->g_145.f4 == l_163.f0), 0x30L)) >= p_417->g_82) > l_163.f0))) & (*p_22)))) , l_177) , (void*)0);
    return (*l_178);
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_158 p_417->g_24
 * writes: p_417->g_113 p_417->g_24
 */
struct S0  func_25(uint16_t  p_26, int32_t * p_27, int32_t * p_28, struct S2 * p_417)
{ /* block id: 59 */
    int32_t *l_157 = (void*)0;
    int64_t *l_159[4][10] = {{&p_417->g_136,&p_417->g_136,&p_417->g_136,(void*)0,&p_417->g_136,(void*)0,&p_417->g_136,&p_417->g_136,&p_417->g_136,&p_417->g_136},{&p_417->g_136,&p_417->g_136,&p_417->g_136,(void*)0,&p_417->g_136,(void*)0,&p_417->g_136,&p_417->g_136,&p_417->g_136,&p_417->g_136},{&p_417->g_136,&p_417->g_136,&p_417->g_136,(void*)0,&p_417->g_136,(void*)0,&p_417->g_136,&p_417->g_136,&p_417->g_136,&p_417->g_136},{&p_417->g_136,&p_417->g_136,&p_417->g_136,(void*)0,&p_417->g_136,(void*)0,&p_417->g_136,&p_417->g_136,&p_417->g_136,&p_417->g_136}};
    struct S0 l_160 = {0x0C64F516L};
    int i, j;
    (*p_417->g_158) = l_157;
    (*p_28) ^= ((void*)0 != l_159[0][1]);
    return l_160;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_112 p_417->g_42 p_417->g_76 p_417->g_113 p_417->g_24 p_417->g_155
 * writes: p_417->g_24 p_417->g_155
 */
int32_t * func_32(uint16_t  p_33, uint64_t  p_34, uint16_t * p_35, int64_t  p_36, struct S2 * p_417)
{ /* block id: 48 */
    int32_t *l_149[6][2];
    struct S1 *l_153 = &p_417->g_154;
    struct S0 *l_156[1][10] = {{&p_417->g_155,&p_417->g_155,&p_417->g_155,&p_417->g_155,&p_417->g_155,&p_417->g_155,&p_417->g_155,&p_417->g_155,&p_417->g_155,&p_417->g_155}};
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_149[i][j] = (void*)0;
    }
    if ((+((*p_417->g_112) = ((safe_unary_minus_func_uint32_t_u((l_149[5][1] != &p_417->g_24))) >= p_33))))
    { /* block id: 50 */
        int32_t *l_150 = (void*)0;
        return l_150;
    }
    else
    { /* block id: 52 */
        (*p_417->g_112) = p_36;
        (*p_417->g_113) |= ((safe_lshift_func_uint8_t_u_s((l_153 != p_417->g_42[3][0][1]), p_417->g_76.s6)) | 1UL);
    }
    (*p_417->g_112) |= (+0x63028313L);
    p_417->g_155 = p_417->g_155;
    return &p_417->g_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_18.f4 permutations p_417->g_90 p_417->g_59.f4 p_417->g_113 p_417->g_24 p_417->g_60.f3 p_417->g_43.f5 p_417->g_59.f2 p_417->g_62 p_417->g_112 p_417->g_42 p_417->g_43.f1
 * writes: p_417->g_18.f4 p_417->g_112 p_417->g_113 p_417->g_136 p_417->g_42 p_417->g_24
 */
int8_t  func_37(struct S1 * p_38, uint64_t  p_39, struct S0  p_40, struct S1 * p_41, struct S2 * p_417)
{ /* block id: 29 */
    int64_t **l_108 = (void*)0;
    int8_t *l_122 = (void*)0;
    int64_t *l_135 = &p_417->g_136;
    int32_t l_142 = 0x65171BFAL;
    VECTOR(int32_t, 16) l_143 = (VECTOR(int32_t, 16))(0x173B0BAAL, (VECTOR(int32_t, 4))(0x173B0BAAL, (VECTOR(int32_t, 2))(0x173B0BAAL, (-1L)), (-1L)), (-1L), 0x173B0BAAL, (-1L), (VECTOR(int32_t, 2))(0x173B0BAAL, (-1L)), (VECTOR(int32_t, 2))(0x173B0BAAL, (-1L)), 0x173B0BAAL, (-1L), 0x173B0BAAL, (-1L));
    struct S1 *l_144 = &p_417->g_145;
    struct S1 **l_146 = (void*)0;
    struct S1 **l_147 = &p_417->g_42[1][2][2];
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_417->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 125)), permutations[(safe_mod_func_uint32_t_u_u(0x843EB036L, 10))][(safe_mod_func_uint32_t_u_u(p_417->tid, 125))]));
    for (p_417->g_18.f4 = 0; (p_417->g_18.f4 <= 17); p_417->g_18.f4 = safe_add_func_int64_t_s_s(p_417->g_18.f4, 9))
    { /* block id: 35 */
        int64_t **l_107 = (void*)0;
        int64_t ***l_106[4][5] = {{(void*)0,&l_107,(void*)0,(void*)0,&l_107},{(void*)0,&l_107,(void*)0,(void*)0,&l_107},{(void*)0,&l_107,(void*)0,(void*)0,&l_107},{(void*)0,&l_107,(void*)0,(void*)0,&l_107}};
        int32_t **l_109 = (void*)0;
        int32_t *l_111 = &p_417->g_24;
        int32_t **l_110[4][9][1];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 9; j++)
            {
                for (k = 0; k < 1; k++)
                    l_110[i][j][k] = &l_111;
            }
        }
        l_108 = (void*)0;
        p_417->g_113 = (p_417->g_112 = &p_417->g_24);
        return permutations[(safe_mod_func_uint32_t_u_u(0x843EB036L, 10))][(safe_mod_func_uint32_t_u_u(p_417->tid, 125))];
    }
    (*l_147) = (l_144 = func_50((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(p_417->g_90.x, ((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_417->group_2_offset, get_group_id(2), 10), (safe_rshift_func_int8_t_s_u((((((void*)0 != l_122) < ((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_417->g_59.f4, ((VECTOR(int16_t, 2))(0x2302L, 0x48D3L)).even)), (safe_mul_func_int8_t_s_s((l_143.s0 = (safe_sub_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(((!((permutations[(safe_mod_func_uint32_t_u_u(0x843EB036L, 10))][(safe_mod_func_uint32_t_u_u(p_417->tid, 125))] && ((((*l_135) = (safe_rshift_func_int16_t_s_s((!(-9L)), 9))) , (safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s(((l_142 ^= (*p_417->g_113)) , ((permutations[(safe_mod_func_uint32_t_u_u(0x843EB036L, 10))][(safe_mod_func_uint32_t_u_u(p_417->tid, 125))] && ((VECTOR(int32_t, 4))(l_143.s23f6)).x) & 0xE036E825438B6353L)))) > p_40.f0), GROUP_DIVERGE(2, 1))), p_39))) && p_417->g_60.f3)) > p_417->g_43.f5)) < p_417->g_59.f2), FAKE_DIVERGE(p_417->local_2_offset, get_local_id(2), 10))) != p_417->g_62), 2L))), 9UL)))) & GROUP_DIVERGE(2, 1))) & GROUP_DIVERGE(1, 1)) & (*p_417->g_112)), permutations[(safe_mod_func_uint32_t_u_u(0x843EB036L, 10))][(safe_mod_func_uint32_t_u_u(p_417->tid, 125))])))) & 1L))), p_39)), &p_417->g_24, p_39, p_417));
    (*p_417->g_112) |= 0x18C778EFL;
    return p_417->g_43.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_60.f4 p_417->g_62 p_417->g_24 p_417->g_76 p_417->g_43.f3 p_417->g_79 p_417->g_60.f2 p_417->g_18.f1 p_417->g_59.f4 p_417->g_82 p_417->g_59.f3 p_417->g_90 p_417->g_92 p_417->g_93 p_417->g_59.f2 p_417->g_43.f4
 * writes: p_417->g_62 p_417->g_82 p_417->g_59.f3 p_417->g_43.f3 p_417->g_24
 */
int32_t  func_46(struct S1 * p_47, int32_t  p_48, struct S1 * p_49, struct S2 * p_417)
{ /* block id: 20 */
    int8_t *l_61 = &p_417->g_62;
    VECTOR(int8_t, 4) l_65 = (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, 0x05L), 0x05L);
    VECTOR(int8_t, 16) l_66 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    uint8_t l_73[9][6] = {{0x22L,0xA5L,251UL,0xACL,1UL,0xCEL},{0x22L,0xA5L,251UL,0xACL,1UL,0xCEL},{0x22L,0xA5L,251UL,0xACL,1UL,0xCEL},{0x22L,0xA5L,251UL,0xACL,1UL,0xCEL},{0x22L,0xA5L,251UL,0xACL,1UL,0xCEL},{0x22L,0xA5L,251UL,0xACL,1UL,0xCEL},{0x22L,0xA5L,251UL,0xACL,1UL,0xCEL},{0x22L,0xA5L,251UL,0xACL,1UL,0xCEL},{0x22L,0xA5L,251UL,0xACL,1UL,0xCEL}};
    int32_t l_80[7][4] = {{0x29BE908AL,0L,0x29BE908AL,0x29BE908AL},{0x29BE908AL,0L,0x29BE908AL,0x29BE908AL},{0x29BE908AL,0L,0x29BE908AL,0x29BE908AL},{0x29BE908AL,0L,0x29BE908AL,0x29BE908AL},{0x29BE908AL,0L,0x29BE908AL,0x29BE908AL},{0x29BE908AL,0L,0x29BE908AL,0x29BE908AL},{0x29BE908AL,0L,0x29BE908AL,0x29BE908AL}};
    int32_t *l_81 = (void*)0;
    int16_t l_85[3][8][5] = {{{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L}},{{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L}},{{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L},{(-7L),0x73D5L,(-7L),(-7L),0x73D5L}}};
    VECTOR(int16_t, 16) l_88 = (VECTOR(int16_t, 16))(0x58FFL, (VECTOR(int16_t, 4))(0x58FFL, (VECTOR(int16_t, 2))(0x58FFL, 9L), 9L), 9L, 0x58FFL, 9L, (VECTOR(int16_t, 2))(0x58FFL, 9L), (VECTOR(int16_t, 2))(0x58FFL, 9L), 0x58FFL, 9L, 0x58FFL, 9L);
    VECTOR(int16_t, 16) l_89 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x39B8L), 0x39B8L), 0x39B8L, (-1L), 0x39B8L, (VECTOR(int16_t, 2))((-1L), 0x39B8L), (VECTOR(int16_t, 2))((-1L), 0x39B8L), (-1L), 0x39B8L, (-1L), 0x39B8L);
    VECTOR(int16_t, 8) l_91 = (VECTOR(int16_t, 8))(0x5D26L, (VECTOR(int16_t, 4))(0x5D26L, (VECTOR(int16_t, 2))(0x5D26L, 1L), 1L), 1L, 0x5D26L, 1L);
    VECTOR(int16_t, 8) l_94 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), (-3L)), (-3L)), (-3L), (-2L), (-3L));
    VECTOR(int16_t, 4) l_95 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0L), 0L);
    int16_t *l_96 = (void*)0;
    int16_t *l_97 = &l_85[1][0][1];
    int8_t l_100 = 0x43L;
    uint32_t *l_101 = &p_417->g_59.f3;
    uint32_t *l_102 = &p_417->g_43.f3;
    int i, j, k;
    p_417->g_82 &= (((((*l_61) |= p_417->g_60.f4) | (l_80[6][3] = (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(0x1CL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0x19L, ((VECTOR(int8_t, 4))(l_65.xzxz)), ((VECTOR(int8_t, 2))(0x2CL, 0L)), 7L)))).s5364730434154055)).sa404)), ((VECTOR(int8_t, 2))(l_66.sc4)), 0x07L)).lo)).w, (p_417->g_24 >= (safe_div_func_int64_t_s_s((-1L), (((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_417->global_2_offset, get_global_id(2), 10), 2)) , (((((l_73[1][0] || (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_417->g_76.s7542)).odd)))).hi, l_66.s4))) || p_417->g_43.f3) <= ((safe_div_func_int32_t_s_s(0x6622CCD0L, ((VECTOR(uint32_t, 4))(p_417->g_79.xwzw)).x)) > GROUP_DIVERGE(2, 1))) ^ l_66.s2) , l_66.s5)), p_417->g_60.f2)) >= p_417->g_18.f1) || 0xB9L) <= p_417->g_59.f4) , 0x87CCB484BB253DC1L)))))))) , (void*)0) == (void*)0);
    p_417->g_24 = (((*l_102) = ((*l_101) = (safe_mod_func_uint32_t_u_u((l_85[0][3][3] && ((((-1L) == ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(0L, 0x4C16L)).xxxx, (int16_t)p_48))).zzyzxxwy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(l_88.s3a)).yxyyxyyyxyxyyxxx, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(l_89.s0995afd9)).s30, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(8L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 1L)).xxxy)), p_417->g_59.f3, 0x65F0L, 0x0C29L)).s05, (int16_t)((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(p_417->g_90.xyyxxyyyyyyyyxxx)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(l_91.s50)), ((VECTOR(int16_t, 8))(p_417->g_92.yyzyywwx)).s27))).xyxxyyyy, ((VECTOR(int16_t, 16))(p_417->g_93.wzwyxzyxxxzwwxyy)).odd))), ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(l_94.s44712010)).s16, ((VECTOR(int16_t, 16))(l_95.ywzwzxzywzywyxzx)).scf))).yyyyyyxx)), ((*l_97) = p_48), ((VECTOR(int16_t, 2))((-1L), (-1L))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), (-5L))), (-1L), 0x7254L)), ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(4L, 5L)), 0x7D80L, ((safe_rshift_func_int16_t_s_s(l_100, 5)) ^ ((p_48 , (p_48 > 0UL)) , p_48)), l_95.w, 0x6241L, ((VECTOR(int16_t, 2))(0x5C07L)), (-1L), 0x420CL, (-6L), p_417->g_59.f2, (-3L), ((VECTOR(int16_t, 2))(0x3A8CL)), (-1L))).s9a, (int16_t)(-4L), (int16_t)l_89.s7))).xxxxxyyy))).s34, ((VECTOR(int16_t, 2))(0x2815L))))), (-3L))).lo, (int16_t)p_417->g_82))).zwwzxzzzzyzzzxyw, (int16_t)p_417->g_43.f4, (int16_t)p_417->g_59.f2))).sda, ((VECTOR(int16_t, 2))(0x292CL))))))), ((VECTOR(int16_t, 2))(0x7E74L)), 0x018FL)).s5f)).yyxy)).hi, (int16_t)(-1L), (int16_t)p_48))).yxyxxxxy))), ((VECTOR(int16_t, 8))(0x2C3EL))))))).sa961)).wwxwzzzy)).hi, ((VECTOR(int16_t, 4))(0x3177L))))).y))), 1L, (-1L))).hi))).yyxyyyxyxyyyyxyx))).sace5)).yzzwwyyx, ((VECTOR(int16_t, 8))(1L))))).s10, (int16_t)1L))))).lo, FAKE_DIVERGE(p_417->global_0_offset, get_global_id(0), 10))) < GROUP_DIVERGE(0, 1))) , &l_80[6][3]) != &l_80[6][3])), p_417->g_90.y)))) == 5UL);
    return p_417->g_92.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_417->g_42
 * writes:
 */
struct S1 * func_50(uint8_t  p_51, int32_t * p_52, uint16_t  p_53, struct S2 * p_417)
{ /* block id: 18 */
    return p_417->g_42[1][0][3];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[125];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 125; i++)
            l_comm_values[i] = 1;
    struct S2 c_418;
    struct S2* p_417 = &c_418;
    struct S2 c_419 = {
        {3L,-1L,1UL,4294967295UL,-9L,0x555ADB51L}, // p_417->g_18
        0x718B0119L, // p_417->g_24
        0xC533L, // p_417->g_31
        {0x2EE4L,0x1DB3AAC012777FC3L,5UL,0UL,0x124A04C7C9A7B2E0L,0x550A0C20L}, // p_417->g_43
        {{{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43}},{{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43}},{{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43}},{{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43},{&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43,&p_417->g_43}}}, // p_417->g_42
        {1L,-7L,0x2BE9700AL,0xFF0F9AB1L,7L,0x7A943C7DL}, // p_417->g_59
        {0x5A4CL,0x2E3B72CD76E66819L,0xE547EF21L,0xEDEBCD59L,0x21B0A093F7740323L,0x23630DD3L}, // p_417->g_60
        0x6BL, // p_417->g_62
        (VECTOR(uint64_t, 16))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xD1C2D9EA4C7FA1D5L), 0xD1C2D9EA4C7FA1D5L), 0xD1C2D9EA4C7FA1D5L, 18446744073709551606UL, 0xD1C2D9EA4C7FA1D5L, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xD1C2D9EA4C7FA1D5L), (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xD1C2D9EA4C7FA1D5L), 18446744073709551606UL, 0xD1C2D9EA4C7FA1D5L, 18446744073709551606UL, 0xD1C2D9EA4C7FA1D5L), // p_417->g_76
        (VECTOR(uint32_t, 4))(0x594313D3L, (VECTOR(uint32_t, 2))(0x594313D3L, 1UL), 1UL), // p_417->g_79
        0x29L, // p_417->g_82
        (VECTOR(int16_t, 2))(0x2336L, (-10L)), // p_417->g_90
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x723DL), 0x723DL), // p_417->g_92
        (VECTOR(int16_t, 4))(0x4EB6L, (VECTOR(int16_t, 2))(0x4EB6L, (-9L)), (-9L)), // p_417->g_93
        &p_417->g_24, // p_417->g_112
        &p_417->g_24, // p_417->g_113
        0x32153381E5C00A65L, // p_417->g_136
        {0x6BC9L,3L,0x6F053ABDL,0UL,0x3E9E0A6E090A8C73L,1L}, // p_417->g_145
        {0x6958L,0x33A3D88CF5AA1C89L,0x38A55269L,4294967295UL,0x0199EC3F422AACBBL,0x4B8FFC6AL}, // p_417->g_154
        {-10L}, // p_417->g_155
        &p_417->g_113, // p_417->g_158
        18446744073709551615UL, // p_417->g_167
        (VECTOR(uint16_t, 16))(0xA5B2L, (VECTOR(uint16_t, 4))(0xA5B2L, (VECTOR(uint16_t, 2))(0xA5B2L, 0x21F9L), 0x21F9L), 0x21F9L, 0xA5B2L, 0x21F9L, (VECTOR(uint16_t, 2))(0xA5B2L, 0x21F9L), (VECTOR(uint16_t, 2))(0xA5B2L, 0x21F9L), 0xA5B2L, 0x21F9L, 0xA5B2L, 0x21F9L), // p_417->g_183
        {{{(-4L),0x365CF4BAL,(-10L),0x4EA202B7L},{(-4L),0x365CF4BAL,(-10L),0x4EA202B7L},{(-4L),0x365CF4BAL,(-10L),0x4EA202B7L},{(-4L),0x365CF4BAL,(-10L),0x4EA202B7L}},{{(-4L),0x365CF4BAL,(-10L),0x4EA202B7L},{(-4L),0x365CF4BAL,(-10L),0x4EA202B7L},{(-4L),0x365CF4BAL,(-10L),0x4EA202B7L},{(-4L),0x365CF4BAL,(-10L),0x4EA202B7L}}}, // p_417->g_186
        1UL, // p_417->g_187
        (VECTOR(uint64_t, 2))(0xDD6E431DA364DE6CL, 0xDA6C3DDF1352EBC1L), // p_417->g_208
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x7D368092EE9E647DL), 0x7D368092EE9E647DL), 0x7D368092EE9E647DL, 1UL, 0x7D368092EE9E647DL, (VECTOR(uint64_t, 2))(1UL, 0x7D368092EE9E647DL), (VECTOR(uint64_t, 2))(1UL, 0x7D368092EE9E647DL), 1UL, 0x7D368092EE9E647DL, 1UL, 0x7D368092EE9E647DL), // p_417->g_209
        &p_417->g_59.f4, // p_417->g_213
        {&p_417->g_213,&p_417->g_213,&p_417->g_213,&p_417->g_213,&p_417->g_213}, // p_417->g_212
        (VECTOR(int16_t, 16))(0x11BFL, (VECTOR(int16_t, 4))(0x11BFL, (VECTOR(int16_t, 2))(0x11BFL, 0x72D7L), 0x72D7L), 0x72D7L, 0x11BFL, 0x72D7L, (VECTOR(int16_t, 2))(0x11BFL, 0x72D7L), (VECTOR(int16_t, 2))(0x11BFL, 0x72D7L), 0x11BFL, 0x72D7L, 0x11BFL, 0x72D7L), // p_417->g_220
        0xF6L, // p_417->g_224
        {{{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL}},{{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL}},{{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL}},{{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL},{0L,0L,(-7L),0x24L,0x70L,0x68L,0x6CL}}}, // p_417->g_232
        (VECTOR(uint8_t, 2))(0x9CL, 0UL), // p_417->g_237
        {{{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L}},{{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L},{7L,5L,0L,8L}}}, // p_417->g_251
        &p_417->g_43.f0, // p_417->g_253
        &p_417->g_253, // p_417->g_252
        (void*)0, // p_417->g_254
        0, // p_417->v_collective
        sequence_input[get_global_id(0)], // p_417->global_0_offset
        sequence_input[get_global_id(1)], // p_417->global_1_offset
        sequence_input[get_global_id(2)], // p_417->global_2_offset
        sequence_input[get_local_id(0)], // p_417->local_0_offset
        sequence_input[get_local_id(1)], // p_417->local_1_offset
        sequence_input[get_local_id(2)], // p_417->local_2_offset
        sequence_input[get_group_id(0)], // p_417->group_0_offset
        sequence_input[get_group_id(1)], // p_417->group_1_offset
        sequence_input[get_group_id(2)], // p_417->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 125)), permutations[0][get_linear_local_id()])), // p_417->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_418 = c_419;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_417);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_417->g_18.f0, "p_417->g_18.f0", print_hash_value);
    transparent_crc(p_417->g_18.f1, "p_417->g_18.f1", print_hash_value);
    transparent_crc(p_417->g_18.f2, "p_417->g_18.f2", print_hash_value);
    transparent_crc(p_417->g_18.f3, "p_417->g_18.f3", print_hash_value);
    transparent_crc(p_417->g_18.f4, "p_417->g_18.f4", print_hash_value);
    transparent_crc(p_417->g_18.f5, "p_417->g_18.f5", print_hash_value);
    transparent_crc(p_417->g_24, "p_417->g_24", print_hash_value);
    transparent_crc(p_417->g_31, "p_417->g_31", print_hash_value);
    transparent_crc(p_417->g_43.f0, "p_417->g_43.f0", print_hash_value);
    transparent_crc(p_417->g_43.f1, "p_417->g_43.f1", print_hash_value);
    transparent_crc(p_417->g_43.f2, "p_417->g_43.f2", print_hash_value);
    transparent_crc(p_417->g_43.f3, "p_417->g_43.f3", print_hash_value);
    transparent_crc(p_417->g_43.f4, "p_417->g_43.f4", print_hash_value);
    transparent_crc(p_417->g_43.f5, "p_417->g_43.f5", print_hash_value);
    transparent_crc(p_417->g_59.f0, "p_417->g_59.f0", print_hash_value);
    transparent_crc(p_417->g_59.f1, "p_417->g_59.f1", print_hash_value);
    transparent_crc(p_417->g_59.f2, "p_417->g_59.f2", print_hash_value);
    transparent_crc(p_417->g_59.f3, "p_417->g_59.f3", print_hash_value);
    transparent_crc(p_417->g_59.f4, "p_417->g_59.f4", print_hash_value);
    transparent_crc(p_417->g_59.f5, "p_417->g_59.f5", print_hash_value);
    transparent_crc(p_417->g_60.f0, "p_417->g_60.f0", print_hash_value);
    transparent_crc(p_417->g_60.f1, "p_417->g_60.f1", print_hash_value);
    transparent_crc(p_417->g_60.f2, "p_417->g_60.f2", print_hash_value);
    transparent_crc(p_417->g_60.f3, "p_417->g_60.f3", print_hash_value);
    transparent_crc(p_417->g_60.f4, "p_417->g_60.f4", print_hash_value);
    transparent_crc(p_417->g_60.f5, "p_417->g_60.f5", print_hash_value);
    transparent_crc(p_417->g_62, "p_417->g_62", print_hash_value);
    transparent_crc(p_417->g_76.s0, "p_417->g_76.s0", print_hash_value);
    transparent_crc(p_417->g_76.s1, "p_417->g_76.s1", print_hash_value);
    transparent_crc(p_417->g_76.s2, "p_417->g_76.s2", print_hash_value);
    transparent_crc(p_417->g_76.s3, "p_417->g_76.s3", print_hash_value);
    transparent_crc(p_417->g_76.s4, "p_417->g_76.s4", print_hash_value);
    transparent_crc(p_417->g_76.s5, "p_417->g_76.s5", print_hash_value);
    transparent_crc(p_417->g_76.s6, "p_417->g_76.s6", print_hash_value);
    transparent_crc(p_417->g_76.s7, "p_417->g_76.s7", print_hash_value);
    transparent_crc(p_417->g_76.s8, "p_417->g_76.s8", print_hash_value);
    transparent_crc(p_417->g_76.s9, "p_417->g_76.s9", print_hash_value);
    transparent_crc(p_417->g_76.sa, "p_417->g_76.sa", print_hash_value);
    transparent_crc(p_417->g_76.sb, "p_417->g_76.sb", print_hash_value);
    transparent_crc(p_417->g_76.sc, "p_417->g_76.sc", print_hash_value);
    transparent_crc(p_417->g_76.sd, "p_417->g_76.sd", print_hash_value);
    transparent_crc(p_417->g_76.se, "p_417->g_76.se", print_hash_value);
    transparent_crc(p_417->g_76.sf, "p_417->g_76.sf", print_hash_value);
    transparent_crc(p_417->g_79.x, "p_417->g_79.x", print_hash_value);
    transparent_crc(p_417->g_79.y, "p_417->g_79.y", print_hash_value);
    transparent_crc(p_417->g_79.z, "p_417->g_79.z", print_hash_value);
    transparent_crc(p_417->g_79.w, "p_417->g_79.w", print_hash_value);
    transparent_crc(p_417->g_82, "p_417->g_82", print_hash_value);
    transparent_crc(p_417->g_90.x, "p_417->g_90.x", print_hash_value);
    transparent_crc(p_417->g_90.y, "p_417->g_90.y", print_hash_value);
    transparent_crc(p_417->g_92.x, "p_417->g_92.x", print_hash_value);
    transparent_crc(p_417->g_92.y, "p_417->g_92.y", print_hash_value);
    transparent_crc(p_417->g_92.z, "p_417->g_92.z", print_hash_value);
    transparent_crc(p_417->g_92.w, "p_417->g_92.w", print_hash_value);
    transparent_crc(p_417->g_93.x, "p_417->g_93.x", print_hash_value);
    transparent_crc(p_417->g_93.y, "p_417->g_93.y", print_hash_value);
    transparent_crc(p_417->g_93.z, "p_417->g_93.z", print_hash_value);
    transparent_crc(p_417->g_93.w, "p_417->g_93.w", print_hash_value);
    transparent_crc(p_417->g_136, "p_417->g_136", print_hash_value);
    transparent_crc(p_417->g_145.f0, "p_417->g_145.f0", print_hash_value);
    transparent_crc(p_417->g_145.f1, "p_417->g_145.f1", print_hash_value);
    transparent_crc(p_417->g_145.f2, "p_417->g_145.f2", print_hash_value);
    transparent_crc(p_417->g_145.f3, "p_417->g_145.f3", print_hash_value);
    transparent_crc(p_417->g_145.f4, "p_417->g_145.f4", print_hash_value);
    transparent_crc(p_417->g_145.f5, "p_417->g_145.f5", print_hash_value);
    transparent_crc(p_417->g_154.f0, "p_417->g_154.f0", print_hash_value);
    transparent_crc(p_417->g_154.f1, "p_417->g_154.f1", print_hash_value);
    transparent_crc(p_417->g_154.f2, "p_417->g_154.f2", print_hash_value);
    transparent_crc(p_417->g_154.f3, "p_417->g_154.f3", print_hash_value);
    transparent_crc(p_417->g_154.f4, "p_417->g_154.f4", print_hash_value);
    transparent_crc(p_417->g_154.f5, "p_417->g_154.f5", print_hash_value);
    transparent_crc(p_417->g_155.f0, "p_417->g_155.f0", print_hash_value);
    transparent_crc(p_417->g_167, "p_417->g_167", print_hash_value);
    transparent_crc(p_417->g_183.s0, "p_417->g_183.s0", print_hash_value);
    transparent_crc(p_417->g_183.s1, "p_417->g_183.s1", print_hash_value);
    transparent_crc(p_417->g_183.s2, "p_417->g_183.s2", print_hash_value);
    transparent_crc(p_417->g_183.s3, "p_417->g_183.s3", print_hash_value);
    transparent_crc(p_417->g_183.s4, "p_417->g_183.s4", print_hash_value);
    transparent_crc(p_417->g_183.s5, "p_417->g_183.s5", print_hash_value);
    transparent_crc(p_417->g_183.s6, "p_417->g_183.s6", print_hash_value);
    transparent_crc(p_417->g_183.s7, "p_417->g_183.s7", print_hash_value);
    transparent_crc(p_417->g_183.s8, "p_417->g_183.s8", print_hash_value);
    transparent_crc(p_417->g_183.s9, "p_417->g_183.s9", print_hash_value);
    transparent_crc(p_417->g_183.sa, "p_417->g_183.sa", print_hash_value);
    transparent_crc(p_417->g_183.sb, "p_417->g_183.sb", print_hash_value);
    transparent_crc(p_417->g_183.sc, "p_417->g_183.sc", print_hash_value);
    transparent_crc(p_417->g_183.sd, "p_417->g_183.sd", print_hash_value);
    transparent_crc(p_417->g_183.se, "p_417->g_183.se", print_hash_value);
    transparent_crc(p_417->g_183.sf, "p_417->g_183.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_417->g_186[i][j][k], "p_417->g_186[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_417->g_187, "p_417->g_187", print_hash_value);
    transparent_crc(p_417->g_208.x, "p_417->g_208.x", print_hash_value);
    transparent_crc(p_417->g_208.y, "p_417->g_208.y", print_hash_value);
    transparent_crc(p_417->g_209.s0, "p_417->g_209.s0", print_hash_value);
    transparent_crc(p_417->g_209.s1, "p_417->g_209.s1", print_hash_value);
    transparent_crc(p_417->g_209.s2, "p_417->g_209.s2", print_hash_value);
    transparent_crc(p_417->g_209.s3, "p_417->g_209.s3", print_hash_value);
    transparent_crc(p_417->g_209.s4, "p_417->g_209.s4", print_hash_value);
    transparent_crc(p_417->g_209.s5, "p_417->g_209.s5", print_hash_value);
    transparent_crc(p_417->g_209.s6, "p_417->g_209.s6", print_hash_value);
    transparent_crc(p_417->g_209.s7, "p_417->g_209.s7", print_hash_value);
    transparent_crc(p_417->g_209.s8, "p_417->g_209.s8", print_hash_value);
    transparent_crc(p_417->g_209.s9, "p_417->g_209.s9", print_hash_value);
    transparent_crc(p_417->g_209.sa, "p_417->g_209.sa", print_hash_value);
    transparent_crc(p_417->g_209.sb, "p_417->g_209.sb", print_hash_value);
    transparent_crc(p_417->g_209.sc, "p_417->g_209.sc", print_hash_value);
    transparent_crc(p_417->g_209.sd, "p_417->g_209.sd", print_hash_value);
    transparent_crc(p_417->g_209.se, "p_417->g_209.se", print_hash_value);
    transparent_crc(p_417->g_209.sf, "p_417->g_209.sf", print_hash_value);
    transparent_crc(p_417->g_220.s0, "p_417->g_220.s0", print_hash_value);
    transparent_crc(p_417->g_220.s1, "p_417->g_220.s1", print_hash_value);
    transparent_crc(p_417->g_220.s2, "p_417->g_220.s2", print_hash_value);
    transparent_crc(p_417->g_220.s3, "p_417->g_220.s3", print_hash_value);
    transparent_crc(p_417->g_220.s4, "p_417->g_220.s4", print_hash_value);
    transparent_crc(p_417->g_220.s5, "p_417->g_220.s5", print_hash_value);
    transparent_crc(p_417->g_220.s6, "p_417->g_220.s6", print_hash_value);
    transparent_crc(p_417->g_220.s7, "p_417->g_220.s7", print_hash_value);
    transparent_crc(p_417->g_220.s8, "p_417->g_220.s8", print_hash_value);
    transparent_crc(p_417->g_220.s9, "p_417->g_220.s9", print_hash_value);
    transparent_crc(p_417->g_220.sa, "p_417->g_220.sa", print_hash_value);
    transparent_crc(p_417->g_220.sb, "p_417->g_220.sb", print_hash_value);
    transparent_crc(p_417->g_220.sc, "p_417->g_220.sc", print_hash_value);
    transparent_crc(p_417->g_220.sd, "p_417->g_220.sd", print_hash_value);
    transparent_crc(p_417->g_220.se, "p_417->g_220.se", print_hash_value);
    transparent_crc(p_417->g_220.sf, "p_417->g_220.sf", print_hash_value);
    transparent_crc(p_417->g_224, "p_417->g_224", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_417->g_232[i][j][k], "p_417->g_232[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_417->g_237.x, "p_417->g_237.x", print_hash_value);
    transparent_crc(p_417->g_237.y, "p_417->g_237.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_417->g_251[i][j][k], "p_417->g_251[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_417->v_collective, "p_417->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 84; i++)
            transparent_crc(p_417->g_special_values[i + 84 * get_linear_group_id()], "p_417->g_special_values[i + 84 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_417->l_comm_values[get_linear_local_id()], "p_417->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_417->g_comm_values[get_linear_group_id() * 125 + get_linear_local_id()], "p_417->g_comm_values[get_linear_group_id() * 125 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
