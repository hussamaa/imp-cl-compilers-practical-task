// -g 97,87,1 -l 97,1,1
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


// Seed: 1358709228

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    int32_t g_3;
    volatile int32_t g_6[5];
    int32_t g_7;
    int32_t g_8[6][2];
    volatile int64_t g_10;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S2 * p_15);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_15->g_3
 * writes:
 */
int32_t  func_1(struct S2 * p_15)
{ /* block id: 4 */
    int32_t *l_2 = &p_15->g_3;
    int32_t *l_4 = &p_15->g_3;
    int32_t *l_5[4][4] = {{&p_15->g_3,&p_15->g_3,&p_15->g_3,&p_15->g_3},{&p_15->g_3,&p_15->g_3,&p_15->g_3,&p_15->g_3},{&p_15->g_3,&p_15->g_3,&p_15->g_3,&p_15->g_3},{&p_15->g_3,&p_15->g_3,&p_15->g_3,&p_15->g_3}};
    int64_t l_9 = (-4L);
    int16_t l_11[5][10] = {{0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L},{0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L},{0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L},{0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L},{0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L,0x4EC1L,0x3772L,0x3772L}};
    uint64_t l_12 = 18446744073709551614UL;
    int i, j;
    --l_12;
    return (*l_2);
}


__kernel void entry(__global ulong *result) {
    int i, j;
    struct S2 c_16;
    struct S2* p_15 = &c_16;
    struct S2 c_17 = {
        0L, // p_15->g_3
        {(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_15->g_6
        0x7ECF7921L, // p_15->g_7
        {{0x117AB6DAL,0x4657E3B6L},{0x117AB6DAL,0x4657E3B6L},{0x117AB6DAL,0x4657E3B6L},{0x117AB6DAL,0x4657E3B6L},{0x117AB6DAL,0x4657E3B6L},{0x117AB6DAL,0x4657E3B6L}}, // p_15->g_8
        8L, // p_15->g_10
    };
    c_16 = c_17;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_15);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_15->g_3, "p_15->g_3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_15->g_6[i], "p_15->g_6[i]", print_hash_value);

    }
    transparent_crc(p_15->g_7, "p_15->g_7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_15->g_8[i][j], "p_15->g_8[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_15->g_10, "p_15->g_10", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
