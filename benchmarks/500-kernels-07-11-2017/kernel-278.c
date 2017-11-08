// -g 7,68,19 -l 1,4,1
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


// Seed: 1854665853

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
   int16_t  f1;
   int16_t  f2;
   volatile int32_t  f3;
   uint64_t  f4;
   volatile int32_t  f5;
   volatile int8_t  f6;
   volatile uint32_t  f7;
   volatile uint8_t  f8;
};

union U1 {
   volatile uint32_t  f0;
   int32_t  f1;
   struct S0  f2;
   volatile int64_t  f3;
   int32_t  f4;
};

struct S4 {
    volatile union U1 g_3;
    volatile union U1 * volatile g_2;
    volatile union U1 * volatile * volatile g_4;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S4 * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_7->g_2
 * writes: p_7->g_2
 */
int64_t  func_1(struct S4 * p_7)
{ /* block id: 4 */
    volatile union U1 * volatile *l_5[6] = {(void*)0,&p_7->g_2,(void*)0,(void*)0,&p_7->g_2,(void*)0};
    int32_t l_6 = 0x44142B91L;
    int i;
    p_7->g_2 = p_7->g_2;
    return l_6;
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S4 c_8;
    struct S4* p_7 = &c_8;
    struct S4 c_9 = {
        {0x7ED6F186L}, // p_7->g_3
        &p_7->g_3, // p_7->g_2
        (void*)0, // p_7->g_4
    };
    c_8 = c_9;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_7);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_7->g_3.f0, "p_7->g_3.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
