// -g 16,29,2 -l 8,1,1
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


// Seed: 2615032479

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    int32_t *g_2[5];
    volatile int32_t g_5;
    volatile int32_t g_6;
    volatile int32_t g_7;
    volatile int32_t g_8;
    int32_t g_9;
    volatile int32_t g_10;
    int32_t g_11;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_26);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_26->g_2 p_26->g_3 p_26->g_9 p_26->g_11
 * writes: p_26->g_2 p_26->g_3 p_26->g_9 p_26->g_11
 */
int32_t  func_1(struct S0 * p_26)
{ /* block id: 4 */
    int32_t **l_4 = &p_26->g_2[4];
    int32_t l_17 = (-1L);
    int32_t l_19 = 0x6B903CFCL;
    int8_t l_25[1];
    int i;
    for (i = 0; i < 1; i++)
        l_25[i] = 0x01L;
    (*l_4) = p_26->g_2[2];
    for (p_26->g_3 = 4; (p_26->g_3 >= 0); p_26->g_3 -= 1)
    { /* block id: 8 */
        int64_t l_18 = 0x4939E63A5BED8572L;
        int32_t l_20 = 0x5691704DL;
        int32_t l_21 = 0L;
        for (p_26->g_9 = 4; (p_26->g_9 >= 0); p_26->g_9 -= 1)
        { /* block id: 11 */
            int32_t l_12 = 0L;
            int32_t l_16 = 0x2EB2FC25L;
            uint16_t l_22 = 5UL;
            int i;
            p_26->g_2[p_26->g_3] = (void*)0;
            for (p_26->g_11 = 0; (p_26->g_11 <= 4); p_26->g_11 += 1)
            { /* block id: 15 */
                int32_t *l_13 = &l_12;
                int32_t *l_14 = &l_12;
                int32_t *l_15[6][1][2] = {{{&l_12,&l_12}},{{&l_12,&l_12}},{{&l_12,&l_12}},{{&l_12,&l_12}},{{&l_12,&l_12}},{{&l_12,&l_12}}};
                int i, j, k;
                if (l_12)
                    break;
                l_22--;
            }
            return l_17;
        }
    }
    return l_25[0];
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S0 c_27;
    struct S0* p_26 = &c_27;
    struct S0 c_28 = {
        0x35F394A2L, // p_26->g_3
        {&p_26->g_3,&p_26->g_3,&p_26->g_3,&p_26->g_3,&p_26->g_3}, // p_26->g_2
        9L, // p_26->g_5
        0x5F0ED1ADL, // p_26->g_6
        (-3L), // p_26->g_7
        1L, // p_26->g_8
        0L, // p_26->g_9
        (-1L), // p_26->g_10
        0x67BFF44CL, // p_26->g_11
    };
    c_27 = c_28;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_26);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_26->g_3, "p_26->g_3", print_hash_value);
    transparent_crc(p_26->g_5, "p_26->g_5", print_hash_value);
    transparent_crc(p_26->g_6, "p_26->g_6", print_hash_value);
    transparent_crc(p_26->g_7, "p_26->g_7", print_hash_value);
    transparent_crc(p_26->g_8, "p_26->g_8", print_hash_value);
    transparent_crc(p_26->g_9, "p_26->g_9", print_hash_value);
    transparent_crc(p_26->g_10, "p_26->g_10", print_hash_value);
    transparent_crc(p_26->g_11, "p_26->g_11", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
