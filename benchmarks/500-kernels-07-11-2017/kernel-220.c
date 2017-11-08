// -g 31,60,3 -l 1,20,3
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


// Seed: 1318712245

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    volatile int8_t g_7;
    int64_t g_9;
    uint8_t g_15;
    uint32_t g_16[2];
    int32_t g_18[8];
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_19);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_19->g_7 p_19->g_9 p_19->g_16 p_19->g_18
 * writes: p_19->g_9 p_19->g_15 p_19->g_16 p_19->g_18
 */
int32_t  func_1(struct S1 * p_19)
{ /* block id: 4 */
    uint16_t l_6 = 65535UL;
    uint8_t *l_14[7][1][6] = {{{(void*)0,(void*)0,&p_19->g_15,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_19->g_15,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_19->g_15,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_19->g_15,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_19->g_15,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_19->g_15,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_19->g_15,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_17 = &p_19->g_18[2];
    int i, j, k;
    p_19->g_9 |= (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((l_6 || p_19->g_7), (safe_unary_minus_func_int32_t_s(1L)))), 7L));
    (*l_17) &= (l_6 ^ (safe_mod_func_int8_t_s_s(p_19->g_7, (safe_mod_func_uint16_t_u_u(((p_19->g_16[0] |= (p_19->g_15 = l_6)) | 0x65L), 0x859BL)))));
    return (*l_17);
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S1 c_20;
    struct S1* p_19 = &c_20;
    struct S1 c_21 = {
        1L, // p_19->g_7
        (-1L), // p_19->g_9
        8UL, // p_19->g_15
        {0UL,0UL}, // p_19->g_16
        {0x55248722L,0x55248722L,0x55248722L,0x55248722L,0x55248722L,0x55248722L,0x55248722L,0x55248722L}, // p_19->g_18
    };
    c_20 = c_21;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_19);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_19->g_7, "p_19->g_7", print_hash_value);
    transparent_crc(p_19->g_9, "p_19->g_9", print_hash_value);
    transparent_crc(p_19->g_15, "p_19->g_15", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_19->g_16[i], "p_19->g_16[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_19->g_18[i], "p_19->g_18[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
