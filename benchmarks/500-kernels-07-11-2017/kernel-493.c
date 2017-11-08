// -g 31,89,3 -l 31,1,1
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


// Seed: 3719500096

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int64_t  f0;
   uint32_t  f1;
   volatile int32_t  f2;
   volatile int8_t  f3;
   int16_t  f4;
   uint16_t  f5;
};

struct S3 {
    int32_t g_3;
    volatile uint32_t g_9;
    int16_t g_12;
    struct S0 g_13;
};


/* --- FORWARD DECLARATIONS --- */
struct S0  func_1(struct S3 * p_14);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_14->g_9 p_14->g_3 p_14->g_12 p_14->g_13
 * writes: p_14->g_9 p_14->g_12
 */
struct S0  func_1(struct S3 * p_14)
{ /* block id: 4 */
    int32_t *l_2 = &p_14->g_3;
    int32_t *l_4 = &p_14->g_3;
    int32_t *l_5 = &p_14->g_3;
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = &p_14->g_3;
    int32_t *l_8[10] = {&p_14->g_3,&p_14->g_3,&p_14->g_3,&p_14->g_3,&p_14->g_3,&p_14->g_3,&p_14->g_3,&p_14->g_3,&p_14->g_3,&p_14->g_3};
    int i;
    ++p_14->g_9;
    p_14->g_12 &= p_14->g_3;
    return p_14->g_13;
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S3 c_15;
    struct S3* p_14 = &c_15;
    struct S3 c_16 = {
        0x1EDBDA7FL, // p_14->g_3
        0x45C8100CL, // p_14->g_9
        0x13D0L, // p_14->g_12
        {1L,1UL,0x301355FFL,0x03L,0L,0x1A05L}, // p_14->g_13
    };
    c_15 = c_16;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_14);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_14->g_3, "p_14->g_3", print_hash_value);
    transparent_crc(p_14->g_9, "p_14->g_9", print_hash_value);
    transparent_crc(p_14->g_12, "p_14->g_12", print_hash_value);
    transparent_crc(p_14->g_13.f0, "p_14->g_13.f0", print_hash_value);
    transparent_crc(p_14->g_13.f1, "p_14->g_13.f1", print_hash_value);
    transparent_crc(p_14->g_13.f2, "p_14->g_13.f2", print_hash_value);
    transparent_crc(p_14->g_13.f3, "p_14->g_13.f3", print_hash_value);
    transparent_crc(p_14->g_13.f4, "p_14->g_13.f4", print_hash_value);
    transparent_crc(p_14->g_13.f5, "p_14->g_13.f5", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
