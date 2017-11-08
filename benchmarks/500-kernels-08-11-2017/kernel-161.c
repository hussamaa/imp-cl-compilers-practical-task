// --atomics 64 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 64,98,1 -l 4,49,1
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

__constant uint32_t permutations[10][196] = {
{1,23,113,15,157,96,153,78,46,69,55,110,180,174,106,121,74,139,38,170,24,32,60,62,33,149,29,163,54,134,183,28,123,53,25,7,37,30,147,152,119,50,42,43,71,64,164,167,185,135,122,76,88,128,34,73,115,156,186,165,182,108,140,188,49,84,80,142,11,141,39,151,133,102,131,67,176,14,81,146,158,171,10,21,99,143,193,68,31,75,145,137,66,91,98,3,77,92,126,159,40,100,20,138,181,187,169,97,93,89,65,160,58,26,94,44,9,5,63,79,56,83,0,90,112,136,148,87,120,2,59,101,51,161,47,111,173,195,36,57,130,45,4,16,114,175,85,191,103,179,172,109,192,162,178,190,27,82,104,125,144,177,168,6,13,166,48,194,41,22,70,184,35,154,18,189,52,127,8,19,105,61,72,124,117,12,155,129,107,17,86,116,132,95,150,118}, // permutation 0
{116,123,150,69,31,81,65,160,97,88,138,49,135,27,137,18,68,163,28,78,6,39,2,52,136,35,17,66,120,101,130,8,30,182,55,145,85,82,141,162,1,164,111,144,71,131,172,96,118,170,149,84,189,178,177,186,14,190,12,4,11,47,117,179,20,94,33,110,151,32,121,142,86,109,0,70,10,155,143,154,15,9,168,25,195,87,90,77,140,22,113,174,166,147,100,180,95,167,134,24,132,187,127,102,21,104,188,125,43,107,185,61,148,173,153,157,152,159,26,112,192,45,16,161,3,44,122,171,99,40,60,46,57,129,58,119,194,38,106,191,59,80,169,67,42,72,63,139,91,93,37,29,79,13,108,34,115,114,103,64,5,74,105,41,48,181,128,56,53,98,184,19,50,62,89,83,7,75,133,36,193,176,146,23,92,126,76,175,51,158,124,54,156,73,165,183}, // permutation 1
{173,139,129,25,176,12,180,106,5,62,183,185,116,142,174,157,23,118,192,109,47,44,39,90,138,181,125,179,15,85,34,89,28,186,97,6,83,94,150,128,31,137,0,79,52,162,48,43,132,103,10,77,133,86,143,67,61,152,136,57,4,58,190,73,93,7,177,141,135,60,84,41,105,191,13,33,59,155,115,188,187,121,72,195,169,22,117,130,80,1,147,144,49,70,148,114,134,74,40,27,149,16,14,154,9,122,17,71,81,96,8,167,26,2,107,66,178,184,110,156,168,68,18,45,182,91,32,111,55,42,20,120,171,172,30,160,193,145,76,165,11,166,78,19,100,140,50,99,101,151,46,131,51,189,158,87,108,170,38,175,63,161,163,37,35,53,119,92,95,21,64,65,124,56,194,104,82,127,88,69,36,159,102,113,146,75,123,3,112,153,54,126,24,98,164,29}, // permutation 2
{169,161,89,91,155,141,84,14,103,182,180,109,65,157,3,142,164,190,96,153,21,97,133,81,101,36,60,1,170,23,39,61,24,186,20,37,88,57,63,55,127,128,144,52,166,181,185,42,106,187,76,121,4,138,126,134,167,108,146,66,85,83,163,69,102,172,46,189,48,43,11,47,139,98,150,34,13,12,49,51,33,114,191,94,148,117,78,156,73,177,45,130,15,120,56,10,8,86,174,75,90,116,176,71,7,31,50,87,67,137,79,129,5,165,80,132,193,53,2,194,41,72,68,125,183,18,143,30,131,100,168,27,40,173,16,19,124,44,160,17,29,58,175,99,93,192,105,32,195,158,122,145,178,171,184,70,107,38,152,62,0,111,119,6,82,154,22,74,151,140,35,159,188,59,28,77,25,92,123,54,118,9,113,179,162,115,26,110,149,112,104,135,64,147,136,95}, // permutation 3
{40,176,98,154,86,90,165,71,6,173,190,33,186,195,89,147,41,65,74,143,27,102,118,56,7,43,151,119,80,18,32,77,108,17,11,163,107,189,92,112,24,84,133,139,128,149,192,140,114,0,36,175,83,97,87,37,68,94,44,160,134,53,61,81,58,185,166,48,162,100,168,110,93,164,155,49,191,51,127,9,131,179,137,181,169,14,57,20,183,125,59,172,153,96,152,42,3,129,156,73,79,12,136,171,5,161,135,148,70,15,45,104,95,142,39,180,99,76,158,22,141,31,188,178,159,47,123,103,174,19,54,111,177,1,138,144,187,170,105,66,82,109,117,122,21,72,8,50,130,30,121,150,78,10,67,167,116,193,106,16,146,60,52,13,23,25,194,88,55,91,35,157,101,64,85,120,62,184,113,126,63,34,132,115,182,69,75,26,124,46,2,29,38,4,28,145}, // permutation 4
{79,156,12,128,148,18,19,162,83,129,0,102,41,152,160,133,74,141,70,116,120,173,147,71,106,44,10,40,184,186,6,78,117,15,33,30,168,165,150,172,11,28,154,193,140,5,131,35,58,50,94,134,124,169,96,86,137,146,118,98,92,72,13,188,142,144,65,77,81,180,163,107,97,67,139,125,103,161,63,32,181,127,68,155,57,111,4,89,136,80,119,112,64,20,8,104,115,49,151,178,113,105,138,114,7,191,85,59,36,109,174,55,60,87,24,43,192,2,3,185,101,176,38,54,108,189,45,75,69,100,179,99,76,110,56,149,46,158,37,93,51,132,166,22,53,21,48,182,73,194,167,187,39,145,171,84,66,17,26,1,31,135,126,121,159,82,130,123,52,25,175,34,95,91,42,157,62,190,195,14,47,90,27,88,61,29,23,164,122,153,143,177,170,183,16,9}, // permutation 5
{15,33,14,11,133,0,188,107,12,104,87,75,77,110,153,191,80,89,167,83,8,154,85,127,178,86,136,63,189,25,74,108,52,176,125,24,126,5,91,135,164,170,181,34,175,148,193,71,84,159,131,161,129,179,155,13,118,109,100,46,152,177,121,62,130,60,9,123,37,163,98,145,180,112,172,119,111,149,186,35,18,41,45,22,160,96,2,67,57,174,137,58,151,66,59,64,69,113,157,134,76,54,68,23,144,120,92,88,124,140,79,19,173,55,36,48,90,194,61,70,81,187,115,7,117,103,158,32,132,116,26,51,142,141,147,97,143,156,56,122,171,162,38,3,49,138,106,42,72,182,40,114,99,195,185,21,93,4,43,31,16,168,6,39,44,47,192,17,65,102,10,53,94,184,183,20,146,105,50,82,150,78,169,30,139,29,190,73,165,128,166,27,1,28,101,95}, // permutation 6
{69,35,87,149,46,129,182,37,74,115,20,65,80,122,169,53,75,154,188,142,174,190,83,189,16,4,193,10,138,165,40,50,73,76,70,121,31,19,184,21,161,136,6,91,14,194,57,58,118,44,139,23,60,185,45,34,163,127,100,13,86,79,119,164,172,183,36,77,126,195,96,148,155,144,147,108,146,55,28,88,0,39,157,151,114,11,48,103,177,173,133,187,131,51,143,90,137,24,109,152,112,26,9,150,123,3,63,8,171,47,89,5,92,66,1,124,85,159,162,95,81,166,167,110,156,94,7,140,54,59,43,176,104,64,113,56,120,125,41,42,102,68,186,141,175,101,130,22,67,135,78,15,168,191,30,71,178,12,111,61,158,52,99,49,2,72,153,82,180,17,106,192,38,160,132,145,62,33,18,29,107,27,84,98,116,97,93,134,128,179,105,181,32,117,170,25}, // permutation 7
{184,165,96,22,195,155,164,134,29,19,51,161,8,27,24,15,177,89,0,66,16,190,130,188,12,94,183,108,129,139,1,175,88,185,113,11,74,186,156,115,149,73,132,17,105,49,28,75,23,53,141,138,65,95,18,2,143,93,63,64,67,174,20,90,162,131,152,182,192,110,68,116,9,145,59,84,39,54,157,106,32,111,25,144,81,98,38,85,79,120,62,77,179,86,172,173,104,97,40,87,91,56,112,92,114,58,48,102,109,159,148,60,3,147,167,13,160,191,171,46,146,4,101,135,193,118,128,125,33,107,140,44,82,34,10,45,42,168,121,142,76,6,170,124,72,176,154,80,153,30,150,137,55,194,117,7,78,169,47,119,181,71,21,70,163,14,35,50,36,122,5,189,69,166,26,127,126,100,61,43,133,187,123,37,178,99,57,31,158,180,151,83,52,41,136,103}, // permutation 8
{129,167,157,108,135,77,173,117,49,155,73,161,1,149,95,177,171,25,176,118,150,184,131,151,42,56,24,123,182,170,174,63,13,79,65,44,83,178,68,121,116,10,147,181,67,134,140,114,81,16,141,175,2,66,61,20,50,162,115,111,48,185,80,60,51,98,96,45,91,107,35,37,85,99,38,168,136,72,4,46,86,143,180,194,55,148,19,0,5,113,138,192,102,74,190,90,32,89,103,145,133,195,163,69,40,7,97,153,15,88,14,120,12,189,76,124,23,29,110,26,84,57,127,17,54,62,28,104,30,172,22,27,92,64,82,43,139,188,130,100,112,53,94,59,58,137,166,144,125,18,36,93,179,156,21,159,87,11,152,191,193,105,169,47,158,160,3,75,78,109,39,52,165,142,9,41,164,106,8,101,146,122,34,186,126,31,33,71,6,128,187,70,154,183,119,132} // permutation 9
};

// Seed: 2679716170

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_4;
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
int32_t  func_1(struct S0 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->g_comm_values p_5->g_4
 * writes: p_5->g_4
 */
int32_t  func_1(struct S0 * p_5)
{ /* block id: 4 */
    VECTOR(int32_t, 16) l_2 = (VECTOR(int32_t, 16))(0x7759609CL, (VECTOR(int32_t, 4))(0x7759609CL, (VECTOR(int32_t, 2))(0x7759609CL, 0L), 0L), 0L, 0x7759609CL, 0L, (VECTOR(int32_t, 2))(0x7759609CL, 0L), (VECTOR(int32_t, 2))(0x7759609CL, 0L), 0x7759609CL, 0L, 0x7759609CL, 0L);
    int32_t *l_3 = &p_5->g_4;
    int i;
    (*l_3) |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_5->g_comm_values[p_5->tid], ((VECTOR(int32_t, 2))(l_2.s4e)), 1L)).hi)).xxxyxxyxyyyyyyxx)).s2;
    return p_5->g_4;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[196];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 196; i++)
            l_comm_values[i] = 1;
    struct S0 c_6;
    struct S0* p_5 = &c_6;
    struct S0 c_7 = {
        0x79E672CAL, // p_5->g_4
        0, // p_5->v_collective
        sequence_input[get_global_id(0)], // p_5->global_0_offset
        sequence_input[get_global_id(1)], // p_5->global_1_offset
        sequence_input[get_global_id(2)], // p_5->global_2_offset
        sequence_input[get_local_id(0)], // p_5->local_0_offset
        sequence_input[get_local_id(1)], // p_5->local_1_offset
        sequence_input[get_local_id(2)], // p_5->local_2_offset
        sequence_input[get_group_id(0)], // p_5->group_0_offset
        sequence_input[get_group_id(1)], // p_5->group_1_offset
        sequence_input[get_group_id(2)], // p_5->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 196)), permutations[0][get_linear_local_id()])), // p_5->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_6 = c_7;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_5);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_5->g_4, "p_5->g_4", print_hash_value);
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 196 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 196 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}