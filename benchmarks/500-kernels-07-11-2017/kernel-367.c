// -g 50,88,2 -l 5,22,2
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


// Seed: 2564225854

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S4 {
    volatile int8_t g_10;
    volatile int8_t * volatile g_9;
    int8_t g_14;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S4 * p_16);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_16->g_9 p_16->g_10
 * writes:
 */
uint32_t  func_1(struct S4 * p_16)
{ /* block id: 4 */
    uint16_t l_2[4][7][2] = {{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}}};
    int32_t l_11 = 0x7CBAE8B0L;
    int8_t *l_13 = &p_16->g_14;
    int8_t **l_12 = &l_13;
    int8_t ***l_15 = &l_12;
    int i, j, k;
    l_2[2][6][0]--;
    l_11 ^= ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(l_2[2][3][0], 1)), 2)) | (p_16->g_9 != (void*)0));
    (*l_15) = l_12;
    return p_16->g_10;
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S4 c_17;
    struct S4* p_16 = &c_17;
    struct S4 c_18 = {
        0x37L, // p_16->g_10
        &p_16->g_10, // p_16->g_9
        5L, // p_16->g_14
    };
    c_17 = c_18;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_16);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_16->g_10, "p_16->g_10", print_hash_value);
    transparent_crc(p_16->g_14, "p_16->g_14", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
