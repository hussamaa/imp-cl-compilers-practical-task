// -g 77,95,1 -l 11,5,1
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


// Seed: 3403469444

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   volatile uint16_t  f1;
   int16_t  f2;
   uint32_t  f3;
   int16_t  f4;
};

struct S1 {
    int32_t g_2;
    int32_t g_6;
    volatile uint8_t g_8[4][6][5];
    union U0 g_11[6];
};


/* --- FORWARD DECLARATIONS --- */
union U0  func_1(struct S1 * p_12);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_12->g_2 p_12->g_8 p_12->g_11
 * writes: p_12->g_2 p_12->g_8
 */
union U0  func_1(struct S1 * p_12)
{ /* block id: 4 */
    for (p_12->g_2 = (-16); (p_12->g_2 != (-7)); p_12->g_2 = safe_add_func_uint8_t_u_u(p_12->g_2, 3))
    { /* block id: 7 */
        int32_t *l_5 = &p_12->g_6;
        int32_t *l_7[2];
        int i;
        for (i = 0; i < 2; i++)
            l_7[i] = &p_12->g_6;
        --p_12->g_8[2][3][1];
    }
    return p_12->g_11[1];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_13;
    struct S1* p_12 = &c_13;
    struct S1 c_14 = {
        0x558BAC04L, // p_12->g_2
        0x22E6E7F7L, // p_12->g_6
        {{{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL}},{{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL}},{{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL}},{{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL},{249UL,0x98L,0xBAL,0x98L,249UL}}}, // p_12->g_8
        {{0x6729694DL},{0x6729694DL},{0x6729694DL},{0x6729694DL},{0x6729694DL},{0x6729694DL}}, // p_12->g_11
    };
    c_13 = c_14;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_12);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_12->g_2, "p_12->g_2", print_hash_value);
    transparent_crc(p_12->g_6, "p_12->g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_12->g_8[i][j][k], "p_12->g_8[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_12->g_11[i].f0, "p_12->g_11[i].f0", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
