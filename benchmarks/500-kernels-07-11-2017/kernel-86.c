// -g 10,36,9 -l 1,2,1
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


// Seed: 488860134

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_4[6];
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->g_4
 * writes: p_5->g_4
 */
uint32_t  func_1(struct S0 * p_5)
{ /* block id: 4 */
    uint32_t l_2 = 0x57E8B72FL;
    int32_t *l_3[6][8][5] = {{{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]}},{{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]}},{{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]}},{{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]}},{{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]}},{{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]},{&p_5->g_4[1],&p_5->g_4[3],&p_5->g_4[0],&p_5->g_4[0],&p_5->g_4[4]}}};
    int i, j, k;
    p_5->g_4[5] ^= l_2;
    return p_5->g_4[5];
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S0 c_6;
    struct S0* p_5 = &c_6;
    struct S0 c_7 = {
        {0L,(-4L),0L,0L,(-4L),0L}, // p_5->g_4
    };
    c_6 = c_7;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_5);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_5->g_4[i], "p_5->g_4[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
