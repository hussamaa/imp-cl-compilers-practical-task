// --atomics 35 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 43,25,8 -l 1,25,4
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

__constant uint32_t permutations[10][100] = {
{15,82,20,56,21,96,79,50,86,11,26,87,73,31,60,49,69,37,24,16,57,67,35,93,48,2,66,54,65,25,8,52,88,85,39,91,1,62,70,80,83,22,5,55,6,19,94,13,84,51,36,12,74,92,17,4,89,58,59,99,46,63,76,18,3,14,77,43,9,29,75,10,27,45,98,68,61,90,42,38,41,32,34,97,30,47,33,64,71,0,40,95,78,7,28,44,23,72,81,53}, // permutation 0
{24,26,22,46,6,27,48,95,96,79,94,17,28,56,70,11,68,20,38,43,84,76,73,52,53,25,7,31,59,81,91,65,67,3,97,2,32,93,47,0,58,34,82,1,63,23,18,45,10,98,57,75,30,83,85,74,55,4,37,39,86,8,40,54,5,88,64,60,13,35,14,78,77,90,36,41,12,71,61,49,99,72,15,62,87,50,66,19,44,29,33,42,69,9,21,80,51,89,92,16}, // permutation 1
{82,15,99,55,24,59,6,61,97,91,72,85,83,75,73,77,54,84,2,1,34,11,18,65,47,60,51,28,19,35,16,26,48,70,46,95,90,32,57,4,78,71,67,81,63,88,66,21,44,22,10,69,56,40,62,74,3,31,96,7,9,5,49,52,33,92,86,39,68,36,20,13,8,53,50,0,93,42,87,30,14,98,43,17,64,37,25,45,29,38,41,89,94,27,12,79,76,23,80,58}, // permutation 2
{56,90,49,60,21,22,18,34,65,36,95,0,29,38,13,93,64,8,25,67,72,83,59,45,54,55,31,94,3,82,71,1,28,86,5,75,14,70,87,9,17,7,23,19,78,97,73,85,89,92,52,44,61,46,79,11,84,40,24,37,41,96,74,12,51,26,77,63,98,53,99,50,57,66,91,76,69,2,43,88,48,62,68,30,4,15,42,39,35,81,47,80,10,16,32,27,20,33,6,58}, // permutation 3
{16,88,28,99,15,53,45,8,76,73,71,35,5,47,38,87,41,21,94,13,84,36,33,66,27,97,80,81,20,7,46,32,48,6,93,19,25,23,52,69,92,74,0,49,89,17,58,67,96,79,56,22,9,31,12,68,14,90,29,85,50,65,3,83,24,40,70,54,91,57,2,59,64,77,61,86,95,42,4,10,62,72,34,18,98,26,60,63,55,43,39,30,1,51,82,78,75,11,37,44}, // permutation 4
{31,63,75,16,29,61,42,6,64,51,81,28,14,72,58,50,48,2,60,30,24,62,91,88,37,85,54,47,9,57,21,39,70,93,69,22,77,34,44,38,98,55,35,73,66,56,92,84,49,65,46,71,20,25,1,13,26,32,5,67,15,17,12,68,87,33,8,97,82,74,94,45,80,95,10,27,40,4,90,96,3,41,59,43,86,52,79,78,18,36,23,89,11,83,99,0,19,7,76,53}, // permutation 5
{63,32,46,84,90,70,72,69,80,26,5,19,76,34,44,91,85,60,68,56,96,31,0,33,71,6,17,47,65,15,8,28,51,89,66,30,53,88,43,45,93,42,64,9,82,78,48,23,54,35,18,83,87,25,61,40,77,62,50,57,29,3,4,81,27,21,94,22,2,59,74,20,92,16,12,79,86,10,75,38,24,55,98,41,36,58,11,52,37,99,97,14,13,39,67,1,95,49,7,73}, // permutation 6
{48,71,78,97,30,47,39,8,20,0,5,28,83,7,12,76,22,50,46,90,13,19,88,57,4,26,37,89,61,55,81,64,51,15,56,95,96,80,36,84,53,11,75,79,98,3,33,58,63,60,40,52,72,18,65,70,62,68,54,1,44,91,25,35,74,94,66,85,87,38,73,23,9,45,32,41,24,34,17,29,42,77,49,10,27,86,2,69,59,92,99,14,6,43,21,67,82,31,93,16}, // permutation 7
{61,50,11,10,16,5,7,69,41,37,21,90,59,49,57,68,17,94,72,12,39,62,70,20,56,52,31,85,14,79,60,63,34,95,19,84,35,65,67,75,87,30,15,73,28,29,81,4,80,66,78,89,47,64,8,32,92,48,71,82,42,27,25,97,74,53,58,88,18,9,38,44,55,36,3,76,93,86,91,6,26,77,2,13,0,96,51,1,40,24,98,46,43,54,83,23,45,22,33,99}, // permutation 8
{96,83,15,34,43,2,25,67,32,13,97,27,93,98,58,33,74,94,75,41,30,8,95,10,57,59,19,35,46,64,99,26,29,72,89,54,45,24,60,21,16,7,88,39,22,62,82,9,84,92,90,31,23,81,79,1,28,56,14,80,52,61,47,87,18,85,42,44,20,3,40,12,50,55,76,0,71,11,49,48,37,77,6,4,78,86,51,38,17,91,70,36,65,68,66,63,69,5,73,53} // permutation 9
};

// Seed: 4092264000

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_4[10][10][2];
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
uint32_t  func_1(struct S1 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_5->g_4
 * writes:
 */
uint32_t  func_1(struct S1 * p_5)
{ /* block id: 4 */
    int32_t *l_3[8][5][6] = {{{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0}},{{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0}},{{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0}},{{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0}},{{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0}},{{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0}},{{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0}},{{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0},{(void*)0,(void*)0,&p_5->g_4[7][4][0],&p_5->g_4[8][4][0],&p_5->g_4[6][2][0],(void*)0}}};
    int32_t **l_2 = &l_3[3][3][5];
    int i, j, k;
    (*l_2) = (void*)0;
    return p_5->g_4[2][1][1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[100];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 100; i++)
            l_comm_values[i] = 1;
    struct S1 c_6;
    struct S1* p_5 = &c_6;
    struct S1 c_7 = {
        {{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}},{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}},{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}},{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}},{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}},{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}},{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}},{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}},{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}},{{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L},{0x2DAFFA89L,0x4FF26AF9L}}}, // p_5->g_4
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 100)), permutations[0][get_linear_local_id()])), // p_5->tid
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
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_5->g_4[i][j][k], "p_5->g_4[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_5->v_collective, "p_5->v_collective", print_hash_value);
    transparent_crc(p_5->l_comm_values[get_linear_local_id()], "p_5->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_5->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()], "p_5->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
