// -g 49,70,2 -l 1,10,2
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


// Seed: 665573105

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    int64_t g_2;
    int32_t g_4;
    int32_t * volatile g_3;
    uint8_t g_6[3][1];
    volatile int16_t g_15;
    uint16_t g_16[3];
};


/* --- FORWARD DECLARATIONS --- */
uint8_t  func_1(struct S2 * p_20);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_20->g_2 p_20->g_3 p_20->g_4 p_20->g_6 p_20->g_16
 * writes: p_20->g_4 p_20->g_6 p_20->g_2 p_20->g_16
 */
uint8_t  func_1(struct S2 * p_20)
{ /* block id: 4 */
    int32_t *l_5[1];
    int16_t l_14 = 0x06E3L;
    uint16_t l_19 = 0x731EL;
    int i;
    for (i = 0; i < 1; i++)
        l_5[i] = &p_20->g_4;
    (*p_20->g_3) ^= p_20->g_2;
    p_20->g_6[0][0]++;
    for (p_20->g_2 = 0; (p_20->g_2 == (-15)); --p_20->g_2)
    { /* block id: 9 */
        int32_t *l_11 = &p_20->g_4;
        int32_t **l_12 = (void*)0;
        int32_t **l_13 = &l_5[0];
        (*l_13) = l_11;
    }
    --p_20->g_16[2];
    return l_19;
}


__kernel void entry(__global ulong *result) {
    int i, j;
    struct S2 c_21;
    struct S2* p_20 = &c_21;
    struct S2 c_22 = {
        0L, // p_20->g_2
        0L, // p_20->g_4
        &p_20->g_4, // p_20->g_3
        {{0x48L},{0x48L},{0x48L}}, // p_20->g_6
        8L, // p_20->g_15
        {65533UL,65533UL,65533UL}, // p_20->g_16
    };
    c_21 = c_22;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_20);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_20->g_2, "p_20->g_2", print_hash_value);
    transparent_crc(p_20->g_4, "p_20->g_4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_20->g_6[i][j], "p_20->g_6[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_20->g_15, "p_20->g_15", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_20->g_16[i], "p_20->g_16[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
