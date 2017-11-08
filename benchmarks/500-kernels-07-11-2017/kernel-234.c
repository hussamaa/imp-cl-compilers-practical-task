// -g 16,65,9 -l 1,5,1
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


// Seed: 2473082463

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S3 {
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    int32_t g_7[10][9][2];
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S3 * p_23);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_23->g_5
 * writes: p_23->g_5
 */
int32_t  func_1(struct S3 * p_23)
{ /* block id: 4 */
    int8_t l_2[1];
    int32_t l_11 = 0x17F1FF7CL;
    int32_t l_12 = 0x5AAD5032L;
    int32_t l_13 = (-1L);
    int32_t l_14 = 0x0E960871L;
    int32_t l_15 = 1L;
    int32_t l_16 = 1L;
    int32_t l_17 = 1L;
    int32_t l_18 = (-1L);
    uint64_t l_19 = 0xB19522E61FFE8B44L;
    uint64_t l_22 = 18446744073709551612UL;
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = 4L;
    for (p_23->g_5 = 0; (p_23->g_5 <= 0); p_23->g_5 += 1)
    { /* block id: 7 */
        int32_t *l_6 = &p_23->g_7[7][5][1];
        int32_t l_8 = 0x25AA9C4AL;
        int32_t *l_9 = &p_23->g_7[1][7][0];
        int32_t *l_10[7][6][1] = {{{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5}},{{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5}},{{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5}},{{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5}},{{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5}},{{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5}},{{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5},{&p_23->g_5}}};
        int i, j, k;
        l_19++;
    }
    return l_22;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S3 c_24;
    struct S3* p_23 = &c_24;
    struct S3 c_25 = {
        (-1L), // p_23->g_3
        0x308F4727L, // p_23->g_4
        (-9L), // p_23->g_5
        {{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}},{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}},{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}},{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}},{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}},{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}},{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}},{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}},{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}},{{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L},{(-1L),0x5F4E26C1L}}}, // p_23->g_7
    };
    c_24 = c_25;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_23);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_23->g_3, "p_23->g_3", print_hash_value);
    transparent_crc(p_23->g_4, "p_23->g_4", print_hash_value);
    transparent_crc(p_23->g_5, "p_23->g_5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_23->g_7[i][j][k], "p_23->g_7[i][j][k]", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
