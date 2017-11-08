// -g 56,5,15 -l 4,1,3
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


// Seed: 4277740151

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint16_t  f0;
   uint64_t  f1;
   int32_t  f2;
   int8_t  f3;
   volatile int8_t  f4;
   int8_t  f5;
   int32_t  f6;
};

struct S1 {
   int8_t  f0;
   struct S0  f1;
   struct S0  f2;
   volatile uint16_t  f3;
   int64_t  f4;
   volatile uint32_t  f5;
   int32_t  f6;
   volatile uint32_t  f7;
};

union U4 {
   struct S1  f0;
   uint32_t  f1;
   volatile uint64_t  f2;
   int8_t  f3;
};

struct S5 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5;
    volatile int32_t g_6;
    volatile int32_t g_7;
    volatile int32_t g_8;
    int32_t g_9;
    int32_t g_12;
    union U4 g_16;
};


/* --- FORWARD DECLARATIONS --- */
union U4  func_1(struct S5 * p_17);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_17->g_9 p_17->g_12 p_17->g_16
 * writes: p_17->g_9 p_17->g_12
 */
union U4  func_1(struct S5 * p_17)
{ /* block id: 4 */
    for (p_17->g_9 = (-29); (p_17->g_9 <= (-2)); p_17->g_9 = safe_add_func_uint32_t_u_u(p_17->g_9, 8))
    { /* block id: 7 */
        uint64_t l_15 = 0x5378470ED99EA7EBL;
        for (p_17->g_12 = 0; (p_17->g_12 < (-13)); --p_17->g_12)
        { /* block id: 10 */
            if (l_15)
                break;
        }
    }
    return p_17->g_16;
}


__kernel void entry(__global ulong *result) {
    int ;
    struct S5 c_18;
    struct S5* p_17 = &c_18;
    struct S5 c_19 = {
        0x63869393L, // p_17->g_2
        0x37BB0086L, // p_17->g_3
        1L, // p_17->g_4
        (-5L), // p_17->g_5
        0x189B1AB4L, // p_17->g_6
        (-3L), // p_17->g_7
        1L, // p_17->g_8
        1L, // p_17->g_9
        0L, // p_17->g_12
        {{-5L,{0x9922L,0xC4365DEA311C3FC0L,5L,0L,0x24L,0x3BL,0x4AA41A80L},{0x1C1DL,0x86A37BD55FD0A320L,-1L,1L,0x17L,0L,4L},65535UL,1L,0xA922A198L,1L,0x75CF8B87L}}, // p_17->g_16
    };
    c_18 = c_19;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_17);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_17->g_2, "p_17->g_2", print_hash_value);
    transparent_crc(p_17->g_3, "p_17->g_3", print_hash_value);
    transparent_crc(p_17->g_4, "p_17->g_4", print_hash_value);
    transparent_crc(p_17->g_5, "p_17->g_5", print_hash_value);
    transparent_crc(p_17->g_6, "p_17->g_6", print_hash_value);
    transparent_crc(p_17->g_7, "p_17->g_7", print_hash_value);
    transparent_crc(p_17->g_8, "p_17->g_8", print_hash_value);
    transparent_crc(p_17->g_9, "p_17->g_9", print_hash_value);
    transparent_crc(p_17->g_12, "p_17->g_12", print_hash_value);
    transparent_crc(p_17->g_16.f0.f0, "p_17->g_16.f0.f0", print_hash_value);
    transparent_crc(p_17->g_16.f0.f1.f0, "p_17->g_16.f0.f1.f0", print_hash_value);
    transparent_crc(p_17->g_16.f0.f1.f1, "p_17->g_16.f0.f1.f1", print_hash_value);
    transparent_crc(p_17->g_16.f0.f1.f2, "p_17->g_16.f0.f1.f2", print_hash_value);
    transparent_crc(p_17->g_16.f0.f1.f3, "p_17->g_16.f0.f1.f3", print_hash_value);
    transparent_crc(p_17->g_16.f0.f1.f4, "p_17->g_16.f0.f1.f4", print_hash_value);
    transparent_crc(p_17->g_16.f0.f1.f5, "p_17->g_16.f0.f1.f5", print_hash_value);
    transparent_crc(p_17->g_16.f0.f1.f6, "p_17->g_16.f0.f1.f6", print_hash_value);
    transparent_crc(p_17->g_16.f0.f2.f0, "p_17->g_16.f0.f2.f0", print_hash_value);
    transparent_crc(p_17->g_16.f0.f2.f1, "p_17->g_16.f0.f2.f1", print_hash_value);
    transparent_crc(p_17->g_16.f0.f2.f2, "p_17->g_16.f0.f2.f2", print_hash_value);
    transparent_crc(p_17->g_16.f0.f2.f3, "p_17->g_16.f0.f2.f3", print_hash_value);
    transparent_crc(p_17->g_16.f0.f2.f4, "p_17->g_16.f0.f2.f4", print_hash_value);
    transparent_crc(p_17->g_16.f0.f2.f5, "p_17->g_16.f0.f2.f5", print_hash_value);
    transparent_crc(p_17->g_16.f0.f2.f6, "p_17->g_16.f0.f2.f6", print_hash_value);
    transparent_crc(p_17->g_16.f0.f3, "p_17->g_16.f0.f3", print_hash_value);
    transparent_crc(p_17->g_16.f0.f4, "p_17->g_16.f0.f4", print_hash_value);
    transparent_crc(p_17->g_16.f0.f5, "p_17->g_16.f0.f5", print_hash_value);
    transparent_crc(p_17->g_16.f0.f6, "p_17->g_16.f0.f6", print_hash_value);
    transparent_crc(p_17->g_16.f0.f7, "p_17->g_16.f0.f7", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
