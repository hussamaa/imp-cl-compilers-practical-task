// -g 87,65,1 -l 87,1,1
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


// Seed: 829634112

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_5[5];
    int32_t g_7;
    int32_t g_9[8];
    int32_t * volatile g_8[9];
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S1 * p_11);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_11->g_9
 * writes: p_11->g_5 p_11->g_7 p_11->g_9
 */
uint16_t  func_1(struct S1 * p_11)
{ /* block id: 4 */
    uint32_t l_2[6] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int32_t *l_3 = (void*)0;
    int32_t *l_4 = &p_11->g_5[1];
    int32_t *l_6 = &p_11->g_7;
    int32_t *l_10 = &p_11->g_9[2];
    int i;
    (*l_10) |= ((*l_6) = ((*l_4) = (1UL ^ l_2[1])));
    (*l_10) = (*l_10);
    return p_11->g_9[7];
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S1 c_12;
    struct S1* p_11 = &c_12;
    struct S1 c_13 = {
        {0x44555950L,0x44555950L,0x44555950L,0x44555950L,0x44555950L}, // p_11->g_5
        0x664FD9E2L, // p_11->g_7
        {1L,1L,1L,1L,1L,1L,1L,1L}, // p_11->g_9
        {&p_11->g_9[2],&p_11->g_9[2],&p_11->g_9[2],&p_11->g_9[2],&p_11->g_9[2],&p_11->g_9[2],&p_11->g_9[2],&p_11->g_9[2],&p_11->g_9[2]}, // p_11->g_8
    };
    c_12 = c_13;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_11);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_11->g_5[i], "p_11->g_5[i]", print_hash_value);

    }
    transparent_crc(p_11->g_7, "p_11->g_7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_11->g_9[i], "p_11->g_9[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
