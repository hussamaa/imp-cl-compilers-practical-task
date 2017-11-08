// -g 80,93,1 -l 2,3,1
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


// Seed: 630173119

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_4;
    int32_t g_11;
    volatile uint8_t g_12[7];
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_15);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_15->g_12 p_15->g_4
 * writes: p_15->g_12
 */
uint32_t  func_1(struct S0 * p_15)
{ /* block id: 4 */
    int32_t *l_3 = &p_15->g_4;
    int32_t **l_2 = &l_3;
    int16_t l_5 = 1L;
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = &p_15->g_4;
    int32_t *l_8 = &p_15->g_4;
    int32_t *l_9 = &p_15->g_4;
    int32_t *l_10[2][10] = {{&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4},{&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4,&p_15->g_4}};
    int i, j;
    (*l_2) = (void*)0;
    --p_15->g_12[6];
    return (*l_9);
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S0 c_16;
    struct S0* p_15 = &c_16;
    struct S0 c_17 = {
        9L, // p_15->g_4
        (-4L), // p_15->g_11
        {0xC1L,0xC1L,0xC1L,0xC1L,0xC1L,0xC1L,0xC1L}, // p_15->g_12
    };
    c_16 = c_17;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_15);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_15->g_4, "p_15->g_4", print_hash_value);
    transparent_crc(p_15->g_11, "p_15->g_11", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_15->g_12[i], "p_15->g_12[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
