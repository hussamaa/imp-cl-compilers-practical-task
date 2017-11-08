// -g 4,45,31 -l 1,1,1
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


// Seed: 40071583

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    int32_t g_3;
    int32_t * volatile g_2;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S2 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_6->g_2
 * writes: p_6->g_2
 */
uint16_t  func_1(struct S2 * p_6)
{ /* block id: 4 */
    int32_t * volatile *l_4 = &p_6->g_2;
    int32_t l_5[3];
    int i;
    for (i = 0; i < 3; i++)
        l_5[i] = 0x15F0ED1AL;
    (*l_4) = p_6->g_2;
    return l_5[2];
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S2 c_7;
    struct S2* p_6 = &c_7;
    struct S2 c_8 = {
        5L, // p_6->g_3
        &p_6->g_3, // p_6->g_2
    };
    c_7 = c_8;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_6);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_6->g_3, "p_6->g_3", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
