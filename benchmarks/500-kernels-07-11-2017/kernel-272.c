// -g 35,5,38 -l 35,1,2
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


// Seed: 1574840272

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_3[2][5][5];
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_4->g_3
 * writes: p_4->g_3
 */
uint32_t  func_1(struct S1 * p_4)
{ /* block id: 4 */
    int32_t *l_2 = &p_4->g_3[1][1][0];
    (*l_2) &= 0x69AED23BL;
    return p_4->g_3[1][1][0];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_5;
    struct S1* p_4 = &c_5;
    struct S1 c_6 = {
        {{{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L},{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L},{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L},{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L},{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L}},{{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L},{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L},{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L},{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L},{0x5DD1D8F8L,1L,0x5DD1D8F8L,0x5DD1D8F8L,1L}}}, // p_4->g_3
    };
    c_5 = c_6;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_4);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_4->g_3[i][j][k], "p_4->g_3[i][j][k]", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
