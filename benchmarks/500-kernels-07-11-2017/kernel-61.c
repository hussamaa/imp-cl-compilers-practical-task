// -g 84,82,1 -l 2,82,1
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


// Seed: 3833180466

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    int32_t g_3;
    int8_t g_6;
    uint32_t g_8[4][1];
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S2 * p_11);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_11->g_8 p_11->g_3
 * writes: p_11->g_8 p_11->g_3
 */
int8_t  func_1(struct S2 * p_11)
{ /* block id: 4 */
    int32_t *l_2 = &p_11->g_3;
    int32_t *l_4 = &p_11->g_3;
    int32_t *l_5[2];
    int16_t l_7[6][1][7] = {{{3L,7L,7L,3L,3L,7L,7L}},{{3L,7L,7L,3L,3L,7L,7L}},{{3L,7L,7L,3L,3L,7L,7L}},{{3L,7L,7L,3L,3L,7L,7L}},{{3L,7L,7L,3L,3L,7L,7L}},{{3L,7L,7L,3L,3L,7L,7L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_5[i] = &p_11->g_3;
    --p_11->g_8[3][0];
    (*l_4) &= 0L;
    return p_11->g_8[3][0];
}


__kernel void entry(__global ulong *result) {
    int i, j;
    struct S2 c_12;
    struct S2* p_11 = &c_12;
    struct S2 c_13 = {
        0x3FF82FF4L, // p_11->g_3
        0x6FL, // p_11->g_6
        {{0x21EC2184L},{0x21EC2184L},{0x21EC2184L},{0x21EC2184L}}, // p_11->g_8
    };
    c_12 = c_13;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_11);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_11->g_3, "p_11->g_3", print_hash_value);
    transparent_crc(p_11->g_6, "p_11->g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_11->g_8[i][j], "p_11->g_8[i][j]", print_hash_value);

        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
