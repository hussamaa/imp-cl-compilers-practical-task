// -g 35,17,11 -l 35,1,1
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


// Seed: 478621152

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint16_t  f0;
   volatile uint32_t  f1;
   volatile int32_t  f2;
   volatile uint16_t  f3;
   int16_t  f4;
   uint64_t  f5;
   uint8_t  f6;
   volatile int32_t  f7;
   volatile int32_t  f8;
   int64_t  f9;
};

struct S1 {
    int32_t g_4;
    int16_t g_12;
    int32_t g_13;
    uint16_t g_15;
    struct S0 g_18;
};


/* --- FORWARD DECLARATIONS --- */
struct S0  func_1(struct S1 * p_19);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_19->g_15 p_19->g_18
 * writes: p_19->g_15
 */
struct S0  func_1(struct S1 * p_19)
{ /* block id: 4 */
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = &p_19->g_4;
    int32_t *l_5 = &p_19->g_4;
    int32_t *l_6 = (void*)0;
    int32_t l_7 = (-3L);
    int32_t *l_8 = &l_7;
    int32_t l_9 = (-8L);
    int32_t *l_10 = &l_7;
    int32_t *l_11[3];
    int32_t l_14 = 0x6B379904L;
    int i;
    for (i = 0; i < 3; i++)
        l_11[i] = &l_9;
    ++p_19->g_15;
    return p_19->g_18;
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S1 c_20;
    struct S1* p_19 = &c_20;
    struct S1 c_21 = {
        0x14B58E17L, // p_19->g_4
        (-3L), // p_19->g_12
        (-10L), // p_19->g_13
        0x0271L, // p_19->g_15
        {65535UL,0x3B8CFF26L,-5L,0x31EAL,-1L,1UL,0xA7L,-1L,0x3ED23C5AL,0x058BBE58ED0BD2F2L}, // p_19->g_18
    };
    c_20 = c_21;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_19);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_19->g_4, "p_19->g_4", print_hash_value);
    transparent_crc(p_19->g_12, "p_19->g_12", print_hash_value);
    transparent_crc(p_19->g_13, "p_19->g_13", print_hash_value);
    transparent_crc(p_19->g_15, "p_19->g_15", print_hash_value);
    transparent_crc(p_19->g_18.f0, "p_19->g_18.f0", print_hash_value);
    transparent_crc(p_19->g_18.f1, "p_19->g_18.f1", print_hash_value);
    transparent_crc(p_19->g_18.f2, "p_19->g_18.f2", print_hash_value);
    transparent_crc(p_19->g_18.f3, "p_19->g_18.f3", print_hash_value);
    transparent_crc(p_19->g_18.f4, "p_19->g_18.f4", print_hash_value);
    transparent_crc(p_19->g_18.f5, "p_19->g_18.f5", print_hash_value);
    transparent_crc(p_19->g_18.f6, "p_19->g_18.f6", print_hash_value);
    transparent_crc(p_19->g_18.f7, "p_19->g_18.f7", print_hash_value);
    transparent_crc(p_19->g_18.f8, "p_19->g_18.f8", print_hash_value);
    transparent_crc(p_19->g_18.f9, "p_19->g_18.f9", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
