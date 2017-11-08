// -g 52,81,1 -l 4,9,1
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


// Seed: 46863127

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    volatile int32_t g_2;
    uint16_t g_3;
    int32_t g_14;
    int64_t g_16;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_18);
int64_t  func_8(int8_t  p_9, struct S1 * p_18);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_18->g_2 p_18->g_3 p_18->g_16 p_18->g_14
 * writes: p_18->g_14 p_18->g_16
 */
int32_t  func_1(struct S1 * p_18)
{ /* block id: 4 */
    int8_t l_10[5] = {0L,0L,0L,0L,0L};
    int64_t *l_15[9];
    int32_t l_17 = 0x5C99220CL;
    int i;
    for (i = 0; i < 9; i++)
        l_15[i] = &p_18->g_16;
    l_17 = (p_18->g_2 > ((!p_18->g_3) == (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((p_18->g_16 &= func_8(l_10[2], p_18)) > 0x0AE28DE637C5B151L), p_18->g_3)), ((void*)0 != l_15[4])))));
    return p_18->g_14;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_18->g_14
 */
int64_t  func_8(int8_t  p_9, struct S1 * p_18)
{ /* block id: 5 */
    for (p_9 = 1; (p_9 <= 3); p_9++)
    { /* block id: 8 */
        int32_t *l_13[4];
        int i;
        for (i = 0; i < 4; i++)
            l_13[i] = &p_18->g_14;
        p_18->g_14 = p_9;
    }
    return p_9;
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S1 c_19;
    struct S1* p_18 = &c_19;
    struct S1 c_20 = {
        0L, // p_18->g_2
        0x0069L, // p_18->g_3
        (-9L), // p_18->g_14
        0x2CED45B0E82CA968L, // p_18->g_16
    };
    c_19 = c_20;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_18);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_18->g_2, "p_18->g_2", print_hash_value);
    transparent_crc(p_18->g_3, "p_18->g_3", print_hash_value);
    transparent_crc(p_18->g_14, "p_18->g_14", print_hash_value);
    transparent_crc(p_18->g_16, "p_18->g_16", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
