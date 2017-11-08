// -g 93,31,3 -l 31,1,1
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


// Seed: 3118236596

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    uint16_t g_2[4][6][9];
    int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S2 * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_7->g_3 p_7->g_4 p_7->g_5 p_7->g_2
 */
int8_t  func_1(struct S2 * p_7)
{ /* block id: 4 */
    int8_t l_6 = 0x7AL;
    for (p_7->g_3 = 0; p_7->g_3 < 4; p_7->g_3 += 1)
    {
        for (p_7->g_4 = 0; p_7->g_4 < 6; p_7->g_4 += 1)
        {
            for (p_7->g_5 = 0; p_7->g_5 < 9; p_7->g_5 += 1)
            {
                p_7->g_2[p_7->g_3][p_7->g_4][p_7->g_5] = 0x3B1DL;
            }
        }
    }
    return l_6;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_8;
    struct S2* p_7 = &c_8;
    struct S2 c_9 = {
        {{{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L}},{{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L}},{{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L}},{{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L},{0x8AAFL,65535UL,65535UL,0x8AAFL,0x963AL,0x3C6FL,65528UL,65535UL,0x1D14L}}}, // p_7->g_2
        0x3A6B42BEL, // p_7->g_3
        1L, // p_7->g_4
        1L, // p_7->g_5
    };
    c_8 = c_9;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_7);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_7->g_2[i][j][k], "p_7->g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_7->g_3, "p_7->g_3", print_hash_value);
    transparent_crc(p_7->g_4, "p_7->g_4", print_hash_value);
    transparent_crc(p_7->g_5, "p_7->g_5", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
