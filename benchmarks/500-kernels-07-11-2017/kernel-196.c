// -g 8,74,16 -l 4,1,1
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


// Seed: 1878255554

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   volatile uint32_t  f1;
   int64_t  f2;
   int64_t  f3;
   volatile uint32_t  f4;
   volatile uint32_t  f5;
   int32_t  f6;
   volatile int64_t  f7;
   int16_t  f8;
};

struct S4 {
    int32_t g_3;
    int32_t *g_5;
    int32_t ** volatile g_4;
    int32_t g_11;
    struct S0 g_12;
    int16_t g_14;
    volatile uint8_t g_15;
};


/* --- FORWARD DECLARATIONS --- */
struct S0  func_1(struct S4 * p_18);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_18->g_4 p_18->g_3 p_18->g_11 p_18->g_12 p_18->g_15
 * writes: p_18->g_5 p_18->g_3 p_18->g_11 p_18->g_15
 */
struct S0  func_1(struct S4 * p_18)
{ /* block id: 4 */
    int32_t *l_2 = &p_18->g_3;
    int32_t **l_7 = &l_2;
    int32_t ***l_6 = &l_7;
    int32_t *l_13[8] = {&p_18->g_3,&p_18->g_3,&p_18->g_3,&p_18->g_3,&p_18->g_3,&p_18->g_3,&p_18->g_3,&p_18->g_3};
    int i;
    (*p_18->g_4) = l_2;
    (*l_6) = &l_2;
    for (p_18->g_3 = 11; (p_18->g_3 > 24); p_18->g_3 = safe_add_func_int64_t_s_s(p_18->g_3, 2))
    { /* block id: 9 */
        int32_t *l_10 = &p_18->g_11;
        (*l_10) |= (0UL > (*l_2));
        return p_18->g_12;
    }
    --p_18->g_15;
    return p_18->g_12;
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S4 c_19;
    struct S4* p_18 = &c_19;
    struct S4 c_20 = {
        0x4C4B7C70L, // p_18->g_3
        &p_18->g_3, // p_18->g_5
        &p_18->g_5, // p_18->g_4
        0x402DA3C3L, // p_18->g_11
        {0x4D2044653FFD03B1L,2UL,2L,0x42E11914CC5C6A3FL,0x540EE1D4L,1UL,0L,0x12C51978E60D743CL,-1L}, // p_18->g_12
        0x0A88L, // p_18->g_14
        0UL, // p_18->g_15
    };
    c_19 = c_20;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_18);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_18->g_3, "p_18->g_3", print_hash_value);
    transparent_crc(p_18->g_11, "p_18->g_11", print_hash_value);
    transparent_crc(p_18->g_12.f0, "p_18->g_12.f0", print_hash_value);
    transparent_crc(p_18->g_12.f1, "p_18->g_12.f1", print_hash_value);
    transparent_crc(p_18->g_12.f2, "p_18->g_12.f2", print_hash_value);
    transparent_crc(p_18->g_12.f3, "p_18->g_12.f3", print_hash_value);
    transparent_crc(p_18->g_12.f4, "p_18->g_12.f4", print_hash_value);
    transparent_crc(p_18->g_12.f5, "p_18->g_12.f5", print_hash_value);
    transparent_crc(p_18->g_12.f6, "p_18->g_12.f6", print_hash_value);
    transparent_crc(p_18->g_12.f7, "p_18->g_12.f7", print_hash_value);
    transparent_crc(p_18->g_12.f8, "p_18->g_12.f8", print_hash_value);
    transparent_crc(p_18->g_14, "p_18->g_14", print_hash_value);
    transparent_crc(p_18->g_15, "p_18->g_15", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
