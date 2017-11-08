// -g 39,32,8 -l 3,1,2
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


// Seed: 3146272965

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    int16_t g_7;
    int32_t g_10;
    uint32_t g_12;
    int32_t *g_13[9][10][2];
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S2 * p_14);
int32_t * func_2(uint64_t  p_3, uint64_t  p_4, uint32_t  p_5, int64_t  p_6, struct S2 * p_14);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_14->g_7 p_14->g_10 p_14->g_12
 * writes: p_14->g_10 p_14->g_12 p_14->g_13
 */
int8_t  func_1(struct S2 * p_14)
{ /* block id: 4 */
    uint8_t l_8[5] = {0xB9L,0xB9L,0xB9L,0xB9L,0xB9L};
    int32_t *l_9 = &p_14->g_10;
    int i;
    p_14->g_13[2][6][1] = func_2(p_14->g_7, l_8[4], ((void*)0 == l_9), (*l_9), p_14);
    return (*l_9);
}


/* ------------------------------------------ */
/* 
 * reads : p_14->g_7 p_14->g_12 p_14->g_10
 * writes: p_14->g_10 p_14->g_12
 */
int32_t * func_2(uint64_t  p_3, uint64_t  p_4, uint32_t  p_5, int64_t  p_6, struct S2 * p_14)
{ /* block id: 5 */
    int32_t *l_11[1];
    int i;
    for (i = 0; i < 1; i++)
        l_11[i] = &p_14->g_10;
    p_14->g_12 &= (p_14->g_10 = p_14->g_7);
    p_14->g_10 |= p_4;
    return l_11[0];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_15;
    struct S2* p_14 = &c_15;
    struct S2 c_16 = {
        0x727DL, // p_14->g_7
        0L, // p_14->g_10
        5UL, // p_14->g_12
        {{{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10}},{{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10}},{{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10}},{{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10}},{{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10}},{{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10}},{{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10}},{{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10}},{{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10},{&p_14->g_10,&p_14->g_10}}}, // p_14->g_13
    };
    c_15 = c_16;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_14);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_14->g_7, "p_14->g_7", print_hash_value);
    transparent_crc(p_14->g_10, "p_14->g_10", print_hash_value);
    transparent_crc(p_14->g_12, "p_14->g_12", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
