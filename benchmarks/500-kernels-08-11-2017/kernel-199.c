// --atomics 11 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 11,64,4 -l 1,64,2
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

__constant uint32_t permutations[10][128] = {
{62,121,89,35,81,101,108,10,77,109,49,1,91,123,6,96,110,113,2,106,15,50,124,19,64,53,45,125,83,41,48,99,104,114,70,18,73,86,100,46,107,90,16,92,67,117,31,115,12,85,23,74,76,36,59,55,54,61,52,72,118,69,84,97,111,94,38,32,51,80,9,75,112,60,102,0,21,39,30,14,26,63,7,22,66,4,65,68,13,58,82,40,29,44,28,43,87,119,33,127,122,79,5,27,17,103,20,98,8,47,88,71,120,126,34,105,25,11,37,93,3,24,78,57,116,56,42,95}, // permutation 0
{2,8,118,20,28,5,48,70,0,101,89,104,93,44,98,68,125,80,29,113,77,112,43,17,60,47,116,72,46,22,103,92,58,107,110,83,127,7,31,53,25,18,63,38,117,52,23,45,19,81,54,90,69,65,49,111,94,74,78,1,102,106,73,57,33,82,59,3,85,62,13,55,71,122,84,24,12,95,75,56,21,32,16,9,61,39,11,126,108,91,99,97,67,100,30,35,34,120,36,10,4,79,121,114,66,27,105,50,109,40,15,41,26,87,115,123,42,14,76,88,51,86,6,96,37,124,64,119}, // permutation 1
{54,44,16,39,100,45,95,121,66,86,1,119,57,94,106,6,105,90,70,15,34,126,24,55,103,5,71,28,81,67,38,49,58,78,101,7,108,14,80,36,125,115,43,122,72,29,83,114,117,104,50,99,76,42,19,93,56,88,10,69,12,82,74,113,47,75,107,64,35,20,65,102,68,18,21,25,60,8,97,32,51,26,116,11,73,31,2,111,112,96,41,62,123,124,37,17,30,61,27,110,109,98,40,53,77,46,89,0,127,9,48,118,33,4,120,79,91,3,23,59,85,13,84,63,22,52,87,92}, // permutation 2
{86,50,115,82,61,49,1,40,64,107,81,12,63,100,13,19,23,18,80,98,41,36,62,88,124,70,53,11,87,92,42,68,99,7,15,118,54,14,52,56,34,79,29,94,76,104,89,10,38,8,25,119,126,65,60,71,39,4,114,17,96,67,106,105,85,113,75,90,51,44,103,73,57,77,111,127,0,33,27,78,117,35,102,2,101,123,24,91,108,9,122,83,47,46,21,84,45,6,48,74,59,16,95,31,72,5,28,26,43,116,55,112,69,121,110,37,58,66,109,32,22,93,30,120,3,20,125,97}, // permutation 3
{104,102,51,54,28,10,119,44,66,113,110,63,52,46,100,106,77,33,21,107,59,30,108,8,57,114,0,71,99,95,3,22,65,75,126,15,20,58,121,116,127,25,64,103,2,16,83,4,48,13,105,111,61,60,68,92,31,89,62,45,98,73,5,117,81,34,39,41,50,79,122,93,11,49,124,17,29,115,42,91,74,1,6,24,72,90,70,37,101,9,32,86,85,38,35,53,67,12,118,43,56,84,97,19,125,123,87,27,120,40,112,36,26,109,14,76,94,82,47,69,78,88,18,55,7,96,80,23}, // permutation 4
{20,97,85,93,62,38,4,19,2,27,112,79,33,108,11,120,95,73,16,53,18,65,12,126,56,29,47,118,6,7,43,31,71,67,58,125,55,77,48,21,69,99,111,50,28,75,89,36,86,102,15,88,122,3,34,78,113,124,74,81,106,54,41,100,94,37,66,84,52,59,68,92,87,42,39,76,104,119,9,127,72,32,14,96,8,121,116,25,82,109,90,26,110,10,35,101,49,30,46,98,114,117,13,107,5,60,123,51,61,64,24,70,40,91,57,1,63,17,44,0,23,80,115,105,83,103,22,45}, // permutation 5
{7,73,88,93,118,77,85,24,48,71,111,14,67,72,100,9,82,61,75,65,63,30,57,74,55,13,113,23,62,5,64,112,11,56,45,43,83,59,28,20,115,4,22,81,96,125,89,19,114,37,60,39,94,124,18,90,97,15,35,38,120,86,78,101,105,126,26,127,50,69,0,117,110,42,40,98,47,53,95,116,84,54,21,66,29,106,16,52,70,80,10,49,3,103,32,44,51,68,2,1,76,99,12,36,92,91,109,108,25,79,104,34,17,31,33,87,6,58,123,46,122,8,102,121,27,119,41,107}, // permutation 6
{18,62,102,28,85,15,54,32,21,83,124,9,70,14,24,81,1,101,49,117,118,104,33,6,74,55,122,2,94,111,34,84,119,68,105,123,4,113,42,37,45,116,87,3,61,59,110,41,0,11,29,76,7,77,57,64,80,90,89,100,98,47,73,35,121,17,127,56,72,99,126,26,39,52,5,109,8,107,63,46,40,22,65,25,44,43,51,48,10,20,75,50,30,38,58,36,69,108,12,96,97,112,27,114,67,92,66,106,93,95,23,78,82,13,31,120,71,19,79,60,103,53,91,125,86,16,88,115}, // permutation 7
{115,32,80,55,40,39,93,85,23,111,116,36,5,75,14,0,24,63,10,127,56,103,18,66,52,26,19,31,58,21,64,27,79,69,9,13,97,48,94,53,33,59,126,77,47,34,108,89,112,6,57,74,114,7,42,90,96,41,35,118,86,106,78,62,125,92,51,16,100,49,65,99,98,4,76,124,119,54,28,8,25,104,3,1,87,72,15,82,38,123,46,95,83,30,117,91,68,17,44,81,113,105,109,84,70,50,11,101,107,71,73,61,45,29,121,12,60,67,120,22,102,110,20,43,88,2,37,122}, // permutation 8
{44,47,59,72,121,67,43,108,70,28,96,34,40,74,29,51,103,91,55,58,54,111,104,30,92,75,46,21,118,95,124,10,27,8,88,109,89,7,45,57,87,78,12,22,26,25,82,33,116,97,32,16,31,106,38,5,114,4,17,6,18,127,62,23,79,65,120,77,9,93,14,83,101,85,20,122,81,49,69,105,41,13,24,73,119,68,86,1,94,3,15,113,107,84,0,2,71,100,63,53,11,80,56,102,123,42,110,50,117,112,39,98,61,90,19,64,125,36,37,48,76,66,126,99,115,35,60,52} // permutation 9
};

// Seed: 160205493

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U1 {
   int32_t  f0;
   volatile int16_t  f1;
   int8_t * volatile  f2;
   volatile uint16_t  f3;
   uint32_t  f4;
};

struct S3 {
    volatile int32_t g_18;
    int32_t g_19;
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
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S3 * p_43);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_43->g_19
 * writes: p_43->g_19
 */
int32_t  func_1(struct S3 * p_43)
{ /* block id: 4 */
    uint8_t l_42[5];
    int i;
    for (i = 0; i < 5; i++)
        l_42[i] = 0x72L;
    if ((atomic_inc(&p_43->g_atomic_input[11 * get_linear_group_id() + 3]) == 9))
    { /* block id: 6 */
        int32_t l_2[5] = {0L,0L,0L,0L,0L};
        int i;
        for (l_2[4] = 0; (l_2[4] <= 18); ++l_2[4])
        { /* block id: 9 */
            int16_t l_5 = 0x22AEL;
            int32_t l_6 = (-5L);
            int32_t l_7[4][7] = {{0x200D0E75L,0x2B82C447L,(-10L),(-7L),(-10L),0x2B82C447L,0x200D0E75L},{0x200D0E75L,0x2B82C447L,(-10L),(-7L),(-10L),0x2B82C447L,0x200D0E75L},{0x200D0E75L,0x2B82C447L,(-10L),(-7L),(-10L),0x2B82C447L,0x200D0E75L},{0x200D0E75L,0x2B82C447L,(-10L),(-7L),(-10L),0x2B82C447L,0x200D0E75L}};
            int32_t l_8 = (-7L);
            int32_t l_9 = 5L;
            uint16_t l_10 = 0x9A56L;
            int8_t l_13 = (-4L);
            union U1 l_14 = {-1L};/* VOLATILE GLOBAL l_14 */
            union U1 l_15 = {0x1DE9829CL};/* VOLATILE GLOBAL l_15 */
            int32_t *l_16 = &l_14.f0;
            int32_t *l_17 = &l_8;
            int i, j;
            l_5 ^= 0x3A92BD42L;
            --l_10;
            l_13 = ((VECTOR(int32_t, 2))(0x3B7A1405L, (-6L))).hi;
            l_17 = ((l_14 , l_15) , l_16);
        }
        unsigned int result = 0;
        int l_2_i0;
        for (l_2_i0 = 0; l_2_i0 < 5; l_2_i0++) {
            result += l_2[l_2_i0];
        }
        atomic_add(&p_43->g_special_values[11 * get_linear_group_id() + 3], result);
    }
    else
    { /* block id: 15 */
        (1 + 1);
    }
    for (p_43->g_19 = 28; (p_43->g_19 < 3); --p_43->g_19)
    { /* block id: 20 */
        if ((atomic_inc(&p_43->l_atomic_input[10]) == 9))
        { /* block id: 22 */
            int32_t l_22 = 1L;
            for (l_22 = 7; (l_22 <= (-29)); l_22--)
            { /* block id: 25 */
                uint16_t l_25 = 1UL;
                l_25 = 0x00366E52L;
                for (l_25 = 0; (l_25 == 41); l_25 = safe_add_func_uint32_t_u_u(l_25, 8))
                { /* block id: 29 */
                    int32_t l_28 = 0x4705BE73L;
                    l_28 = 0L;
                    if (((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(0x5C4B6369L, (-1L))).yxyxyyxy, ((VECTOR(int32_t, 2))(0x73922CBDL, 0x2ED0F12AL)).yyxxxxxx))).s1)
                    { /* block id: 31 */
                        int32_t l_30 = 0x3925B974L;
                        int32_t *l_29 = &l_30;
                        int32_t *l_31[7][3][10] = {{{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30}}};
                        int32_t *l_32[4][9][4] = {{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}}};
                        int32_t l_33 = 0x700F3BC9L;
                        uint8_t l_34 = 0x7EL;
                        int32_t l_35[1][10] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}};
                        int i, j, k;
                        l_32[3][1][3] = (l_31[4][0][4] = l_29);
                        l_34 |= l_33;
                        l_35[0][9] = (-4L);
                    }
                    else
                    { /* block id: 36 */
                        int64_t l_36 = (-1L);
                        int32_t l_37 = (-4L);
                        int64_t l_38 = (-6L);
                        uint32_t l_39 = 4294967295UL;
                        uint64_t l_40 = 18446744073709551610UL;
                        uint16_t l_41 = 1UL;
                        l_37 = l_36;
                        l_39 = l_38;
                        l_41 = l_40;
                    }
                }
            }
            unsigned int result = 0;
            result += l_22;
            atomic_add(&p_43->l_special_values[10], result);
        }
        else
        { /* block id: 43 */
            (1 + 1);
        }
    }
    return l_42[1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[128];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 128; i++)
            l_comm_values[i] = 1;
    struct S3 c_44;
    struct S3* p_43 = &c_44;
    struct S3 c_45 = {
        0x761AC7EBL, // p_43->g_18
        (-4L), // p_43->g_19
        0, // p_43->v_collective
        sequence_input[get_global_id(0)], // p_43->global_0_offset
        sequence_input[get_global_id(1)], // p_43->global_1_offset
        sequence_input[get_global_id(2)], // p_43->global_2_offset
        sequence_input[get_local_id(0)], // p_43->local_0_offset
        sequence_input[get_local_id(1)], // p_43->local_1_offset
        sequence_input[get_local_id(2)], // p_43->local_2_offset
        sequence_input[get_group_id(0)], // p_43->group_0_offset
        sequence_input[get_group_id(1)], // p_43->group_1_offset
        sequence_input[get_group_id(2)], // p_43->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 128)), permutations[0][get_linear_local_id()])), // p_43->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_44 = c_45;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_43);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_43->g_18, "p_43->g_18", print_hash_value);
    transparent_crc(p_43->g_19, "p_43->g_19", print_hash_value);
    transparent_crc(p_43->v_collective, "p_43->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 11; i++)
            transparent_crc(p_43->g_special_values[i + 11 * get_linear_group_id()], "p_43->g_special_values[i + 11 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 11; i++)
            transparent_crc(p_43->l_special_values[i], "p_43->l_special_values[i]", print_hash_value);
    transparent_crc(p_43->l_comm_values[get_linear_local_id()], "p_43->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_43->g_comm_values[get_linear_group_id() * 128 + get_linear_local_id()], "p_43->g_comm_values[get_linear_group_id() * 128 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
