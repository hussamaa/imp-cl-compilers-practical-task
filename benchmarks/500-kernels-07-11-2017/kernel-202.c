// -g 72,58,2 -l 2,58,2
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


// Seed: 3725213106

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_2;
    int32_t g_8;
    int32_t g_12;
    volatile int16_t g_13;
    volatile int32_t g_14;
    volatile int64_t g_15;
    volatile int32_t g_16;
    uint64_t g_17;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_20);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_20->g_2 p_20->g_17 p_20->g_8 p_20->g_16
 * writes: p_20->g_2 p_20->g_17 p_20->g_8
 */
uint32_t  func_1(struct S1 * p_20)
{ /* block id: 4 */
    int64_t l_11 = 0x69161D594D035725L;
    for (p_20->g_2 = (-6); (p_20->g_2 == 5); ++p_20->g_2)
    { /* block id: 7 */
        if (p_20->g_2)
            break;
    }
    for (p_20->g_2 = 0; (p_20->g_2 < (-14)); p_20->g_2--)
    { /* block id: 12 */
        int32_t *l_7 = &p_20->g_8;
        int32_t *l_9 = &p_20->g_8;
        int32_t *l_10[1];
        int i;
        for (i = 0; i < 1; i++)
            l_10[i] = (void*)0;
        p_20->g_17--;
        (*l_9) ^= l_11;
        if (p_20->g_16)
            continue;
    }
    return p_20->g_16;
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S1 c_21;
    struct S1* p_20 = &c_21;
    struct S1 c_22 = {
        0x05BA7723L, // p_20->g_2
        0L, // p_20->g_8
        8L, // p_20->g_12
        1L, // p_20->g_13
        0L, // p_20->g_14
        0x4CA69919C44D4E2BL, // p_20->g_15
        0x4448110CL, // p_20->g_16
        0x5ABA9A9843657218L, // p_20->g_17
    };
    c_21 = c_22;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_20);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_20->g_2, "p_20->g_2", print_hash_value);
    transparent_crc(p_20->g_8, "p_20->g_8", print_hash_value);
    transparent_crc(p_20->g_12, "p_20->g_12", print_hash_value);
    transparent_crc(p_20->g_13, "p_20->g_13", print_hash_value);
    transparent_crc(p_20->g_14, "p_20->g_14", print_hash_value);
    transparent_crc(p_20->g_15, "p_20->g_15", print_hash_value);
    transparent_crc(p_20->g_16, "p_20->g_16", print_hash_value);
    transparent_crc(p_20->g_17, "p_20->g_17", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
