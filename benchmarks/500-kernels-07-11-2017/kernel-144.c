// -g 43,1,91 -l 1,1,13
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


// Seed: 3948060840

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5;
    int32_t g_6;
    uint32_t g_9[7];
    int32_t g_10[6][9];
    volatile int32_t g_11;
    volatile int32_t g_12;
    int32_t g_13;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S1 * p_44);
int32_t  func_32(uint32_t  p_33, struct S1 * p_44);
uint32_t  func_34(int64_t  p_35, uint32_t  p_36, uint8_t  p_37, int32_t  p_38, int16_t  p_39, struct S1 * p_44);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_44->g_6 p_44->g_10 p_44->g_9 p_44->g_13 p_44->g_12 p_44->g_3
 * writes: p_44->g_6 p_44->g_10 p_44->g_13
 */
int64_t  func_1(struct S1 * p_44)
{ /* block id: 4 */
    uint16_t l_26 = 65527UL;
    int32_t *l_31 = (void*)0;
    for (p_44->g_6 = (-27); (p_44->g_6 != (-10)); ++p_44->g_6)
    { /* block id: 7 */
        int8_t l_25 = 0x33L;
        for (p_44->g_10[0][0] = 0; (p_44->g_10[0][0] <= 6); p_44->g_10[0][0] += 1)
        { /* block id: 10 */
            int i;
            return p_44->g_9[p_44->g_10[0][0]];
        }
        for (p_44->g_13 = 27; (p_44->g_13 > (-7)); p_44->g_13--)
        { /* block id: 15 */
            int32_t *l_16 = (void*)0;
            int32_t *l_17 = &p_44->g_10[0][4];
            int32_t *l_18 = &p_44->g_10[3][0];
            int32_t *l_19 = &p_44->g_10[0][0];
            int32_t *l_20 = &p_44->g_10[0][6];
            int32_t *l_21 = &p_44->g_10[0][0];
            int32_t *l_22 = &p_44->g_10[5][2];
            int32_t *l_23 = &p_44->g_10[0][7];
            int32_t *l_24[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_24[i][j] = &p_44->g_10[0][0];
            }
            --l_26;
            if ((*l_22))
                continue;
            for (l_26 = 0; (l_26 < 60); l_26++)
            { /* block id: 20 */
                return l_25;
            }
            if (l_26)
                continue;
        }
    }
    p_44->g_10[0][0] = l_26;
    p_44->g_6 ^= func_32(func_34(p_44->g_9[4], l_26, p_44->g_12, p_44->g_10[4][5], l_26, p_44), p_44);
    return p_44->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_44->g_3
 * writes:
 */
int32_t  func_32(uint32_t  p_33, struct S1 * p_44)
{ /* block id: 29 */
    int32_t *l_40[9][10] = {{&p_44->g_10[0][0],&p_44->g_10[2][2],&p_44->g_13,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0],&p_44->g_6,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0]},{&p_44->g_10[0][0],&p_44->g_10[2][2],&p_44->g_13,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0],&p_44->g_6,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0]},{&p_44->g_10[0][0],&p_44->g_10[2][2],&p_44->g_13,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0],&p_44->g_6,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0]},{&p_44->g_10[0][0],&p_44->g_10[2][2],&p_44->g_13,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0],&p_44->g_6,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0]},{&p_44->g_10[0][0],&p_44->g_10[2][2],&p_44->g_13,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0],&p_44->g_6,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0]},{&p_44->g_10[0][0],&p_44->g_10[2][2],&p_44->g_13,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0],&p_44->g_6,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0]},{&p_44->g_10[0][0],&p_44->g_10[2][2],&p_44->g_13,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0],&p_44->g_6,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0]},{&p_44->g_10[0][0],&p_44->g_10[2][2],&p_44->g_13,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0],&p_44->g_6,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0]},{&p_44->g_10[0][0],&p_44->g_10[2][2],&p_44->g_13,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0],&p_44->g_6,&p_44->g_6,&p_44->g_6,&p_44->g_10[0][0]}};
    uint8_t l_41 = 255UL;
    int i, j;
    ++l_41;
    return p_44->g_3;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_34(int64_t  p_35, uint32_t  p_36, uint8_t  p_37, int32_t  p_38, int16_t  p_39, struct S1 * p_44)
{ /* block id: 27 */
    return p_39;
}


__kernel void entry(__global ulong *result) {
    int i, j;
    struct S1 c_45;
    struct S1* p_44 = &c_45;
    struct S1 c_46 = {
        5L, // p_44->g_2
        0x6E2FDE2BL, // p_44->g_3
        (-9L), // p_44->g_4
        0x21AC4888L, // p_44->g_5
        (-1L), // p_44->g_6
        {0x31D26EC1L,0x31D26EC1L,0x31D26EC1L,0x31D26EC1L,0x31D26EC1L,0x31D26EC1L,0x31D26EC1L}, // p_44->g_9
        {{0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L},{0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L},{0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L},{0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L},{0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L},{0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L,0x090C5440L,0x7D373EE7L,0x090C5440L}}, // p_44->g_10
        1L, // p_44->g_11
        0x3C7D24B5L, // p_44->g_12
        (-1L), // p_44->g_13
    };
    c_45 = c_46;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_44);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_44->g_2, "p_44->g_2", print_hash_value);
    transparent_crc(p_44->g_3, "p_44->g_3", print_hash_value);
    transparent_crc(p_44->g_4, "p_44->g_4", print_hash_value);
    transparent_crc(p_44->g_5, "p_44->g_5", print_hash_value);
    transparent_crc(p_44->g_6, "p_44->g_6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_44->g_9[i], "p_44->g_9[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_44->g_10[i][j], "p_44->g_10[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_44->g_11, "p_44->g_11", print_hash_value);
    transparent_crc(p_44->g_12, "p_44->g_12", print_hash_value);
    transparent_crc(p_44->g_13, "p_44->g_13", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
