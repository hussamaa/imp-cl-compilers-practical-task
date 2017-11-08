// -g 43,52,4 -l 1,13,2
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


// Seed: 1394587789

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U1 {
   int32_t  f0;
   uint64_t  f1;
};

struct S2 {
    volatile int32_t g_4[4];
    int32_t g_7;
};


/* --- FORWARD DECLARATIONS --- */
union U1  func_1(struct S2 * p_9);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_9->g_4 p_9->g_7
 * writes: p_9->g_7
 */
union U1  func_1(struct S2 * p_9)
{ /* block id: 4 */
    int64_t l_5 = 0x38F3D4210E164CAFL;
    int32_t *l_6 = &p_9->g_7;
    union U1 l_8 = {0L};
    (*l_6) |= (safe_div_func_int64_t_s_s(p_9->g_4[1], l_5));
    return l_8;
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S2 c_10;
    struct S2* p_9 = &c_10;
    struct S2 c_11 = {
        {0L,0L,0L,0L}, // p_9->g_4
        3L, // p_9->g_7
    };
    c_10 = c_11;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_9);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_9->g_4[i], "p_9->g_4[i]", print_hash_value);

    }
    transparent_crc(p_9->g_7, "p_9->g_7", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
