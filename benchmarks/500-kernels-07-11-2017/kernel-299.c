// -g 40,53,1 -l 1,1,1
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


// Seed: 1720418511

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
   uint16_t  f0;
   volatile int32_t  f1;
   uint16_t  f2;
   uint8_t  f3;
   uint32_t  f4;
};

struct S6 {
   int64_t  f0;
   uint16_t  f1;
   volatile int8_t  f2;
   struct S2  f3;
   uint32_t  f4;
};

struct S7 {
    int32_t g_4[6][2];
    struct S6 g_5;
};


/* --- FORWARD DECLARATIONS --- */
struct S6  func_1(struct S7 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_6->g_4 p_6->g_5
 * writes: p_6->g_4
 */
struct S6  func_1(struct S7 * p_6)
{ /* block id: 4 */
    int32_t l_2 = 0x49A2F381L;
    int32_t *l_3 = &p_6->g_4[0][1];
    (*l_3) ^= l_2;
    return p_6->g_5;
}


__kernel void entry(__global ulong *result) {
    int i, j;
    struct S7 c_7;
    struct S7* p_6 = &c_7;
    struct S7 c_8 = {
        {{(-9L),(-9L)},{(-9L),(-9L)},{(-9L),(-9L)},{(-9L),(-9L)},{(-9L),(-9L)},{(-9L),(-9L)}}, // p_6->g_4
        {0x3CA955A63A74ADF2L,0x855EL,-6L,{0xF219L,1L,0xD8FBL,0xCEL,4294967293UL},0x1E60E779L}, // p_6->g_5
    };
    c_7 = c_8;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_6);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_6->g_4[i][j], "p_6->g_4[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_6->g_5.f0, "p_6->g_5.f0", print_hash_value);
    transparent_crc(p_6->g_5.f1, "p_6->g_5.f1", print_hash_value);
    transparent_crc(p_6->g_5.f2, "p_6->g_5.f2", print_hash_value);
    transparent_crc(p_6->g_5.f3.f0, "p_6->g_5.f3.f0", print_hash_value);
    transparent_crc(p_6->g_5.f3.f1, "p_6->g_5.f3.f1", print_hash_value);
    transparent_crc(p_6->g_5.f3.f2, "p_6->g_5.f3.f2", print_hash_value);
    transparent_crc(p_6->g_5.f3.f3, "p_6->g_5.f3.f3", print_hash_value);
    transparent_crc(p_6->g_5.f3.f4, "p_6->g_5.f3.f4", print_hash_value);
    transparent_crc(p_6->g_5.f4, "p_6->g_5.f4", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
