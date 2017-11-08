// -g 86,32,1 -l 1,32,1
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


// Seed: 806962278

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    uint8_t g_4;
    int32_t g_6;
    int16_t g_7;
    int32_t *g_16;
    int32_t **g_15;
    int64_t g_21[4];
    int32_t *** volatile g_23;
    volatile int64_t g_25[5][4];
    volatile uint16_t g_26[5];
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S1 * p_29);
int32_t ** func_11(int8_t  p_12, int32_t ** p_13, int32_t  p_14, struct S1 * p_29);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_29->g_4 p_29->g_6 p_29->g_7 p_29->g_15 p_29->g_23 p_29->g_26 p_29->g_25
 * writes: p_29->g_6 p_29->g_7 p_29->g_4 p_29->g_15 p_29->g_26
 */
int8_t  func_1(struct S1 * p_29)
{ /* block id: 4 */
    int32_t *l_5[2][3][7] = {{{&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6},{&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6},{&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6}},{{&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6},{&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6},{&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6,&p_29->g_6}}};
    int i, j, k;
    p_29->g_7 = (safe_add_func_int8_t_s_s(p_29->g_4, ((p_29->g_6 = 0x4173BF38L) || 0x6E74A6E8L)));
    for (p_29->g_4 = 13; (p_29->g_4 >= 51); p_29->g_4 = safe_add_func_uint32_t_u_u(p_29->g_4, 3))
    { /* block id: 9 */
        int32_t l_10[9][2][10] = {{{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L},{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L}},{{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L},{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L}},{{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L},{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L}},{{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L},{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L}},{{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L},{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L}},{{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L},{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L}},{{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L},{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L}},{{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L},{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L}},{{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L},{(-1L),0x038BE40EL,1L,0x7F77771FL,0x69B8A514L,0x23986B29L,0x3C3AE507L,0x3F8E16D7L,0x20F84B0FL,6L}}};
        int i, j, k;
        if (p_29->g_4)
            break;
        for (p_29->g_6 = 0; (p_29->g_6 <= 1); p_29->g_6 += 1)
        { /* block id: 13 */
            return l_10[0][0][4];
        }
        (*p_29->g_23) = (p_29->g_7 , func_11(p_29->g_6, p_29->g_15, p_29->g_7, p_29));
        for (p_29->g_6 = 0; (p_29->g_6 <= 1); p_29->g_6 += 1)
        { /* block id: 27 */
            int16_t l_24 = 0x3348L;
            return l_24;
        }
    }
    p_29->g_26[2]++;
    return p_29->g_25[2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_29->g_6
 * writes: p_29->g_6
 */
int32_t ** func_11(int8_t  p_12, int32_t ** p_13, int32_t  p_14, struct S1 * p_29)
{ /* block id: 16 */
    uint8_t l_19 = 0x08L;
    int32_t *l_20 = &p_29->g_6;
    int32_t **l_22 = &l_20;
    (*l_20) &= (safe_rshift_func_int16_t_s_s(l_19, 12));
    for (p_14 = 3; (p_14 >= 0); p_14 -= 1)
    { /* block id: 20 */
        return &p_29->g_16;
    }
    return p_13;
}


__kernel void entry(__global ulong *result) {
    int i, j;
    struct S1 c_30;
    struct S1* p_29 = &c_30;
    struct S1 c_31 = {
        0xFAL, // p_29->g_4
        0x2FA4AD74L, // p_29->g_6
        (-7L), // p_29->g_7
        (void*)0, // p_29->g_16
        &p_29->g_16, // p_29->g_15
        {0x485063020822C3E5L,0x485063020822C3E5L,0x485063020822C3E5L,0x485063020822C3E5L}, // p_29->g_21
        &p_29->g_15, // p_29->g_23
        {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}}, // p_29->g_25
        {65535UL,65535UL,65535UL,65535UL,65535UL}, // p_29->g_26
    };
    c_30 = c_31;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_29);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_29->g_4, "p_29->g_4", print_hash_value);
    transparent_crc(p_29->g_6, "p_29->g_6", print_hash_value);
    transparent_crc(p_29->g_7, "p_29->g_7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_29->g_21[i], "p_29->g_21[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_29->g_25[i][j], "p_29->g_25[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_29->g_26[i], "p_29->g_26[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
