// -g 24,50,8 -l 4,10,4
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


// Seed: 3281657026

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_2[8];
    int32_t g_3;
    int32_t * volatile g_6;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S1 * p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_8->g_3 p_8->g_2 p_8->g_6
 * writes: p_8->g_3 p_8->g_2
 */
int16_t  func_1(struct S1 * p_8)
{ /* block id: 4 */
    uint32_t l_4[7][10] = {{0x8B78ACC4L,4294967290UL,0xDE9E8436L,0UL,4294967290UL,0UL,0xDE9E8436L,4294967290UL,0x8B78ACC4L,0x8B78ACC4L},{0x8B78ACC4L,4294967290UL,0xDE9E8436L,0UL,4294967290UL,0UL,0xDE9E8436L,4294967290UL,0x8B78ACC4L,0x8B78ACC4L},{0x8B78ACC4L,4294967290UL,0xDE9E8436L,0UL,4294967290UL,0UL,0xDE9E8436L,4294967290UL,0x8B78ACC4L,0x8B78ACC4L},{0x8B78ACC4L,4294967290UL,0xDE9E8436L,0UL,4294967290UL,0UL,0xDE9E8436L,4294967290UL,0x8B78ACC4L,0x8B78ACC4L},{0x8B78ACC4L,4294967290UL,0xDE9E8436L,0UL,4294967290UL,0UL,0xDE9E8436L,4294967290UL,0x8B78ACC4L,0x8B78ACC4L},{0x8B78ACC4L,4294967290UL,0xDE9E8436L,0UL,4294967290UL,0UL,0xDE9E8436L,4294967290UL,0x8B78ACC4L,0x8B78ACC4L},{0x8B78ACC4L,4294967290UL,0xDE9E8436L,0UL,4294967290UL,0UL,0xDE9E8436L,4294967290UL,0x8B78ACC4L,0x8B78ACC4L}};
    int32_t *l_5 = (void*)0;
    uint32_t l_7 = 4294967295UL;
    int i, j;
    for (p_8->g_3 = 7; (p_8->g_3 >= 0); p_8->g_3 -= 1)
    { /* block id: 7 */
        int i;
        if (p_8->g_2[p_8->g_3])
            break;
    }
    (*p_8->g_6) |= (~l_4[5][0]);
    return l_7;
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S1 c_9;
    struct S1* p_8 = &c_9;
    struct S1 c_10 = {
        {8L,8L,8L,8L,8L,8L,8L,8L}, // p_8->g_2
        0x22FAFD11L, // p_8->g_3
        &p_8->g_2[0], // p_8->g_6
    };
    c_9 = c_10;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_8);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_8->g_2[i], "p_8->g_2[i]", print_hash_value);

    }
    transparent_crc(p_8->g_3, "p_8->g_3", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
