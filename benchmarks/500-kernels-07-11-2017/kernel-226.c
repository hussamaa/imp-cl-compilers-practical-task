// -g 77,71,1 -l 11,1,1
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


// Seed: 1872090972

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int8_t g_4;
    uint16_t g_9;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_12);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_12->g_9 p_12->g_4
 * writes: p_12->g_9
 */
int32_t  func_1(struct S0 * p_12)
{ /* block id: 4 */
    uint8_t l_2 = 248UL;
    int32_t l_3 = 0x04B81147L;
    int32_t *l_5 = &l_3;
    int32_t *l_6 = &l_3;
    int32_t *l_7 = (void*)0;
    int32_t *l_8[8] = {&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3};
    int i;
    l_3 = l_2;
    p_12->g_9--;
    return p_12->g_4;
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S0 c_13;
    struct S0* p_12 = &c_13;
    struct S0 c_14 = {
        0x08L, // p_12->g_4
        0x25BFL, // p_12->g_9
    };
    c_13 = c_14;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_12);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_12->g_4, "p_12->g_4", print_hash_value);
    transparent_crc(p_12->g_9, "p_12->g_9", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
