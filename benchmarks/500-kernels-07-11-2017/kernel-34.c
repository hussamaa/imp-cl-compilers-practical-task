// -g 68,5,4 -l 1,1,1
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


// Seed: 2873182359

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5;
    int32_t g_6;
    int32_t g_9[1][2];
    volatile int32_t g_10;
    volatile int32_t g_11;
    volatile int32_t g_12;
    int32_t g_13[8][10];
    int32_t g_15;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_27);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_27->g_6 p_27->g_13 p_27->g_9 p_27->g_15 p_27->g_5
 * writes: p_27->g_6 p_27->g_13 p_27->g_15
 */
uint32_t  func_1(struct S1 * p_27)
{ /* block id: 4 */
    int32_t l_22 = 1L;
    for (p_27->g_6 = 4; (p_27->g_6 != (-17)); p_27->g_6 = safe_sub_func_int8_t_s_s(p_27->g_6, 7))
    { /* block id: 7 */
        int32_t l_21 = 0L;
        uint16_t l_24[4];
        int i;
        for (i = 0; i < 4; i++)
            l_24[i] = 65535UL;
        for (p_27->g_13[0][8] = 0; (p_27->g_13[0][8] <= 0); p_27->g_13[0][8] += 1)
        { /* block id: 10 */
            int32_t *l_14 = &p_27->g_15;
            int32_t *l_16 = (void*)0;
            int32_t *l_17 = &p_27->g_15;
            int32_t l_18 = 0L;
            int32_t l_19[8] = {0x5E637C5BL,0x5E637C5BL,0x5E637C5BL,0x5E637C5BL,0x5E637C5BL,0x5E637C5BL,0x5E637C5BL,0x5E637C5BL};
            int32_t l_20 = (-1L);
            int32_t *l_23[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_23[i] = (void*)0;
            (*l_14) &= p_27->g_9[p_27->g_13[0][8]][p_27->g_13[0][8]];
            --l_24[1];
        }
        return p_27->g_5;
    }
    return l_22;
}


__kernel void entry(__global ulong *result) {
    int i, j;
    struct S1 c_28;
    struct S1* p_27 = &c_28;
    struct S1 c_29 = {
        0x506E60B0L, // p_27->g_2
        (-5L), // p_27->g_3
        0x65F36F6DL, // p_27->g_4
        (-3L), // p_27->g_5
        (-1L), // p_27->g_6
        {{0x607A9881L,0x607A9881L}}, // p_27->g_9
        0L, // p_27->g_10
        2L, // p_27->g_11
        0x3FC4B03EL, // p_27->g_12
        {{0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L},{0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L},{0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L},{0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L},{0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L},{0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L},{0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L},{0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L,0x1393DDA3L}}, // p_27->g_13
        0x6E348CC3L, // p_27->g_15
    };
    c_28 = c_29;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_27);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_27->g_2, "p_27->g_2", print_hash_value);
    transparent_crc(p_27->g_3, "p_27->g_3", print_hash_value);
    transparent_crc(p_27->g_4, "p_27->g_4", print_hash_value);
    transparent_crc(p_27->g_5, "p_27->g_5", print_hash_value);
    transparent_crc(p_27->g_6, "p_27->g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_27->g_9[i][j], "p_27->g_9[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_27->g_10, "p_27->g_10", print_hash_value);
    transparent_crc(p_27->g_11, "p_27->g_11", print_hash_value);
    transparent_crc(p_27->g_12, "p_27->g_12", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_27->g_13[i][j], "p_27->g_13[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_27->g_15, "p_27->g_15", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
