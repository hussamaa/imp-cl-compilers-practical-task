// -g 90,56,1 -l 6,28,1
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


// Seed: 3652899870

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S6 {
    uint16_t g_6[3];
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S6 * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_7->g_6
 * writes:
 */
uint16_t  func_1(struct S6 * p_7)
{ /* block id: 4 */
    int32_t l_4 = 0x1BC7DCD6L;
    int16_t l_5 = 0x2F07L;
    l_5 |= (safe_lshift_func_int8_t_s_s(l_4, 2));
    return p_7->g_6[1];
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S6 c_8;
    struct S6* p_7 = &c_8;
    struct S6 c_9 = {
        {65535UL,65535UL,65535UL}, // p_7->g_6
    };
    c_8 = c_9;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_7);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_7->g_6[i], "p_7->g_6[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
