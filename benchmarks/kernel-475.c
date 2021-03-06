// --atomics 98 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 6,8,50 -l 1,4,50
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

__constant uint32_t permutations[10][200] = {
{118,156,105,189,68,154,1,78,116,115,111,74,97,160,22,70,25,11,72,182,14,183,106,55,157,126,141,147,132,36,185,175,169,163,87,32,179,60,158,181,81,171,145,165,7,29,13,162,93,150,76,178,131,53,121,113,33,127,35,49,136,37,102,170,89,67,125,64,161,172,152,159,168,137,39,82,23,5,20,50,26,48,114,8,122,120,107,187,86,2,28,195,191,167,135,66,173,91,190,44,43,199,194,57,17,117,79,16,75,108,61,143,52,148,58,110,166,21,73,149,104,94,188,133,174,24,31,34,62,59,6,155,96,0,176,144,134,3,196,84,15,100,101,192,92,184,142,54,41,46,119,112,109,19,193,139,45,56,129,18,153,90,65,9,27,128,47,69,198,95,80,83,151,88,51,164,12,146,138,71,85,130,180,99,38,40,124,140,77,30,10,186,177,42,103,63,98,197,123,4}, // permutation 0
{151,37,76,11,8,77,66,108,158,35,31,68,56,162,91,49,178,18,164,39,13,6,80,27,103,125,118,89,106,62,143,42,10,87,153,69,179,190,96,167,53,161,9,74,51,38,130,132,149,177,104,134,111,15,110,90,102,147,7,196,93,72,46,120,182,63,159,65,34,176,71,107,50,189,5,100,191,193,97,128,174,169,54,58,141,181,122,145,195,88,140,112,79,98,82,148,194,163,25,85,165,105,1,23,170,144,70,131,59,129,3,113,187,175,48,29,184,99,21,92,75,17,83,146,55,24,32,133,94,109,16,124,47,126,119,81,155,41,139,22,26,150,52,116,123,45,142,28,73,33,157,137,4,114,173,2,121,188,117,166,154,199,0,67,172,61,95,197,86,14,127,64,84,44,136,138,12,40,19,135,156,20,183,192,30,180,171,78,198,57,168,185,101,152,186,43,115,60,160,36}, // permutation 1
{96,23,94,132,196,128,6,55,126,86,53,123,42,41,9,150,98,103,169,151,63,85,176,141,62,97,7,54,156,186,50,137,144,82,46,56,66,77,190,20,111,193,64,76,173,3,19,119,61,49,67,25,118,145,134,18,21,73,68,170,198,148,154,74,127,189,175,109,28,147,78,44,125,108,43,172,129,159,133,24,107,153,112,138,71,105,12,188,130,48,136,174,140,2,60,22,116,191,79,40,47,165,115,195,45,168,30,88,163,152,93,182,149,185,0,114,27,124,146,178,187,100,104,171,35,197,70,177,164,157,183,10,36,179,58,17,83,59,39,121,192,160,180,34,11,87,161,120,32,5,101,166,143,110,14,4,15,13,90,33,72,81,37,102,113,181,199,95,131,184,92,122,106,29,89,26,75,194,38,162,139,80,84,1,8,69,135,99,167,158,52,51,16,31,57,91,65,142,117,155}, // permutation 2
{12,178,157,59,179,42,113,52,152,67,141,19,89,84,51,7,62,150,148,86,34,33,28,101,20,73,82,127,64,24,147,74,159,14,13,129,164,144,32,44,115,135,154,96,98,145,97,197,43,4,49,171,142,90,95,68,23,85,66,104,195,121,198,170,176,133,110,31,29,117,105,187,165,102,139,54,92,6,55,35,39,106,190,180,79,87,173,119,177,128,111,38,107,120,181,163,8,132,156,134,9,77,26,192,2,76,25,53,193,5,36,10,48,169,153,18,118,11,140,194,60,80,151,93,130,47,40,0,1,22,69,108,114,3,30,112,78,81,175,122,161,158,131,185,37,138,191,143,167,71,196,75,155,162,41,188,137,99,149,109,50,27,57,166,172,186,83,91,146,94,183,126,88,174,72,45,15,184,136,21,123,46,116,16,61,124,56,182,168,125,189,58,65,70,100,160,17,63,199,103}, // permutation 3
{1,199,100,41,36,65,137,191,129,10,159,130,64,3,196,163,126,143,155,169,93,55,132,158,179,0,177,140,116,63,90,88,180,47,33,32,87,106,4,72,124,141,29,150,112,14,189,181,154,102,13,125,52,44,83,9,70,43,134,89,25,81,67,22,118,18,30,117,167,21,188,77,162,17,35,78,11,40,107,92,122,109,157,144,7,160,6,178,73,156,151,149,27,138,186,34,2,111,53,171,68,26,185,108,113,174,94,20,128,45,75,198,133,31,51,71,76,164,123,79,99,84,147,85,197,80,58,101,131,57,39,48,37,50,176,139,42,16,165,61,168,184,119,46,103,145,104,170,135,152,187,183,110,114,28,172,166,105,192,66,161,60,12,91,98,62,146,5,38,120,195,173,193,8,142,194,153,59,54,19,97,121,136,49,182,175,56,148,24,69,15,190,95,23,115,86,82,96,74,127}, // permutation 4
{147,5,16,67,8,100,187,149,85,81,78,188,114,60,99,109,86,10,15,3,124,162,196,168,56,121,61,0,68,111,91,119,174,184,195,44,140,125,135,145,113,36,58,144,183,158,107,143,27,192,92,169,116,19,54,89,108,142,70,155,161,83,170,50,29,34,106,33,9,134,90,131,95,97,62,64,93,74,173,30,129,199,137,57,20,189,152,2,37,181,128,115,24,175,148,88,11,193,123,130,65,151,28,104,66,82,25,84,18,133,118,69,26,41,21,163,154,76,12,32,197,79,150,40,46,164,23,71,167,105,1,73,75,132,194,191,179,176,6,157,17,103,45,127,177,39,159,42,55,198,48,80,94,146,52,117,166,53,160,7,172,139,51,98,13,141,185,138,122,186,153,31,190,4,110,63,77,178,35,136,182,22,14,156,47,59,87,126,171,72,120,102,180,96,49,112,165,101,38,43}, // permutation 5
{87,16,100,115,192,31,112,3,155,96,8,59,98,51,190,198,44,110,182,180,80,89,88,147,139,116,114,95,56,97,103,38,1,72,165,85,75,86,82,117,62,15,11,191,131,60,84,46,18,158,48,166,129,183,83,163,154,52,159,0,149,156,144,30,49,197,29,143,157,70,132,25,58,179,185,94,124,123,168,175,152,196,20,176,146,41,32,178,126,92,27,104,7,160,111,77,181,57,6,188,173,137,128,172,138,24,13,167,67,193,9,102,36,34,10,194,141,39,171,121,187,74,35,91,33,69,108,17,37,113,151,170,136,109,45,79,186,118,2,63,107,47,184,55,145,134,174,28,42,127,12,195,53,68,61,22,161,81,101,162,122,130,65,125,142,133,5,148,106,19,4,150,199,21,120,71,153,189,78,66,50,76,119,23,140,40,14,93,169,43,177,164,54,73,26,64,99,105,135,90}, // permutation 6
{77,24,70,25,34,44,127,162,40,172,21,9,123,4,168,72,149,52,142,103,102,146,126,157,45,15,139,74,95,196,113,99,49,63,166,65,112,80,192,5,131,176,33,69,68,125,78,17,47,16,177,136,120,96,124,144,150,110,90,87,37,191,23,109,188,167,28,161,32,57,35,121,20,43,26,132,180,89,187,59,185,97,107,154,79,153,184,164,175,30,108,148,122,56,14,195,138,76,190,55,199,134,140,143,135,159,27,3,12,42,82,147,129,160,156,145,194,114,91,51,94,83,93,67,198,66,171,193,104,84,6,1,130,50,73,60,137,155,58,174,48,197,18,36,165,119,170,8,81,118,71,181,88,133,46,100,31,61,86,53,38,7,85,22,116,151,92,13,39,117,179,152,163,186,19,115,0,182,111,98,29,11,41,183,75,173,128,62,105,10,141,189,158,169,2,101,54,106,64,178}, // permutation 7
{149,98,28,185,14,55,198,73,184,5,182,95,96,173,135,36,142,8,26,158,9,116,30,68,64,38,147,101,24,109,59,131,20,169,0,126,92,84,180,79,67,4,153,129,108,162,10,66,21,17,125,188,128,33,7,181,99,31,199,81,127,110,111,138,62,27,113,93,69,82,76,193,140,43,146,57,61,187,53,163,39,106,40,189,141,46,56,1,157,71,114,11,195,174,90,89,63,159,194,70,77,190,85,177,176,124,183,35,44,130,134,118,107,143,50,72,29,19,136,2,150,151,112,145,91,100,122,13,42,172,161,34,132,123,154,192,175,74,196,160,41,178,58,155,104,12,86,170,75,97,164,168,80,94,25,103,51,119,22,137,148,32,3,37,87,156,171,88,117,78,186,179,23,49,197,139,15,105,65,165,166,16,45,48,191,6,152,18,120,102,52,83,54,47,115,60,167,133,121,144}, // permutation 8
{122,52,98,80,73,143,103,67,11,106,97,38,47,92,152,110,13,192,19,198,139,55,76,50,140,115,78,138,179,119,95,105,14,184,18,90,79,59,128,4,194,188,24,173,118,151,71,148,107,7,181,180,81,85,101,86,155,168,160,99,49,134,62,64,153,1,169,111,158,12,34,100,146,33,96,102,6,43,31,145,185,3,175,133,93,187,170,82,163,193,42,147,35,109,136,190,149,17,142,70,26,165,27,9,40,28,176,186,141,54,197,41,131,162,36,114,8,156,172,69,108,135,129,124,174,21,39,87,113,123,191,32,45,22,51,84,15,127,74,25,167,195,159,75,144,46,60,56,183,157,117,89,61,63,150,68,57,161,171,58,112,29,120,16,137,48,94,91,2,66,5,104,121,154,88,177,65,125,182,189,83,10,196,178,130,0,164,20,199,37,72,77,23,44,126,53,30,116,166,132} // permutation 9
};

// Seed: 400150062

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int32_t  f1;
   volatile int64_t  f2;
   int32_t  f3;
   volatile int16_t  f4;
   uint32_t  f5;
   volatile int64_t  f6;
   int32_t  f7;
};

struct S4 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    struct S0 g_7;
    uint32_t v_collective;
    uint64_t global_0_offset;
    uint64_t global_1_offset;
    uint64_t global_2_offset;
    uint64_t local_0_offset;
    uint64_t local_1_offset;
    uint64_t local_2_offset;
    uint64_t group_0_offset;
    uint64_t group_1_offset;
    uint64_t group_2_offset;
    uint32_t tid;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
struct S0  func_1(struct S4 * p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_10->g_4 p_10->g_7
 * writes: p_10->g_4
 */
struct S0  func_1(struct S4 * p_10)
{ /* block id: 4 */
    volatile int32_t *l_8[1];
    volatile int64_t l_9 = 1L;/* VOLATILE GLOBAL l_9 */
    int i;
    for (i = 0; i < 1; i++)
        l_8[i] = &p_10->g_3;
    for (p_10->g_4 = 23; (p_10->g_4 <= (-15)); p_10->g_4--)
    { /* block id: 7 */
        return p_10->g_7;
    }
    l_9 = p_10->g_7.f4;
    return p_10->g_7;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[200];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 200; i++)
            l_comm_values[i] = 1;
    struct S4 c_11;
    struct S4* p_10 = &c_11;
    struct S4 c_12 = {
        0x693D0B54L, // p_10->g_2
        0x6FEB9E9DL, // p_10->g_3
        0x2215256EL, // p_10->g_4
        {0x4307A329EF4A0426L,0x7609FA85L,-1L,0x10E5E534L,0x4ABCL,0x4891023FL,0x26C7F05F43260389L,0x1B8FA48AL}, // p_10->g_7
        0, // p_10->v_collective
        sequence_input[get_global_id(0)], // p_10->global_0_offset
        sequence_input[get_global_id(1)], // p_10->global_1_offset
        sequence_input[get_global_id(2)], // p_10->global_2_offset
        sequence_input[get_local_id(0)], // p_10->local_0_offset
        sequence_input[get_local_id(1)], // p_10->local_1_offset
        sequence_input[get_local_id(2)], // p_10->local_2_offset
        sequence_input[get_group_id(0)], // p_10->group_0_offset
        sequence_input[get_group_id(1)], // p_10->group_1_offset
        sequence_input[get_group_id(2)], // p_10->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 200)), permutations[0][get_linear_local_id()])), // p_10->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_11 = c_12;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_10);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_10->g_2, "p_10->g_2", print_hash_value);
    transparent_crc(p_10->g_3, "p_10->g_3", print_hash_value);
    transparent_crc(p_10->g_4, "p_10->g_4", print_hash_value);
    transparent_crc(p_10->g_7.f0, "p_10->g_7.f0", print_hash_value);
    transparent_crc(p_10->g_7.f1, "p_10->g_7.f1", print_hash_value);
    transparent_crc(p_10->g_7.f2, "p_10->g_7.f2", print_hash_value);
    transparent_crc(p_10->g_7.f3, "p_10->g_7.f3", print_hash_value);
    transparent_crc(p_10->g_7.f4, "p_10->g_7.f4", print_hash_value);
    transparent_crc(p_10->g_7.f5, "p_10->g_7.f5", print_hash_value);
    transparent_crc(p_10->g_7.f6, "p_10->g_7.f6", print_hash_value);
    transparent_crc(p_10->g_7.f7, "p_10->g_7.f7", print_hash_value);
    transparent_crc(p_10->v_collective, "p_10->v_collective", print_hash_value);
    transparent_crc(p_10->l_comm_values[get_linear_local_id()], "p_10->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_10->g_comm_values[get_linear_group_id() * 200 + get_linear_local_id()], "p_10->g_comm_values[get_linear_group_id() * 200 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
