// --atomics 30 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 28,74,4 -l 1,37,4
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

__constant uint32_t permutations[10][148] = {
{56,52,131,25,12,5,21,35,43,71,70,47,42,113,147,37,67,7,107,89,98,143,60,137,3,145,16,38,101,105,88,132,114,24,8,73,39,32,119,22,136,86,6,117,34,77,26,62,83,128,80,1,123,93,100,76,99,111,103,4,27,130,14,120,138,53,109,63,46,146,94,64,54,66,92,79,110,17,91,13,122,87,104,20,10,49,82,95,50,118,48,23,57,144,74,121,9,44,15,85,55,139,31,102,0,84,141,96,142,112,124,18,81,90,75,2,133,40,29,78,72,11,61,41,36,65,28,106,129,97,58,19,69,51,116,33,115,126,135,108,59,45,134,125,127,30,68,140}, // permutation 0
{144,41,107,92,131,24,21,14,37,25,34,141,57,115,93,4,139,3,45,2,65,88,67,5,79,70,124,51,74,49,29,32,147,48,134,111,118,23,68,138,61,15,110,116,86,13,8,108,46,104,55,126,1,99,123,109,78,100,9,103,102,105,82,136,80,98,142,16,31,26,119,125,128,117,129,146,76,81,75,127,59,50,132,90,28,6,63,84,38,72,85,19,58,83,122,47,40,96,30,36,39,113,77,69,44,130,106,54,64,145,114,20,135,53,7,71,133,56,66,12,140,95,73,137,60,62,91,52,33,120,43,143,112,101,22,10,89,11,94,35,87,121,17,97,18,0,42,27}, // permutation 1
{14,91,11,78,106,50,30,110,99,44,3,39,90,108,116,42,76,143,92,94,17,75,27,13,69,102,80,12,114,118,98,83,34,133,70,71,36,60,121,5,141,137,147,87,123,25,109,28,8,16,35,130,1,126,31,107,136,7,74,24,47,112,89,20,122,120,144,117,113,58,115,40,119,52,128,96,67,82,22,23,140,46,48,104,32,146,100,26,65,95,0,56,125,145,55,45,127,33,93,49,142,111,66,38,81,21,105,19,132,68,59,2,18,85,9,135,134,139,131,37,29,86,79,15,41,51,4,64,124,129,43,53,84,101,72,97,57,103,6,63,62,138,10,77,54,61,73,88}, // permutation 2
{147,131,142,60,37,22,113,93,65,0,102,84,137,39,127,56,85,1,121,26,68,11,49,30,38,97,64,2,51,14,42,94,74,117,78,52,88,75,48,104,44,106,41,25,18,70,128,105,126,123,57,4,21,119,67,79,98,103,50,132,86,124,135,130,125,33,59,9,43,5,13,109,15,122,145,36,134,54,12,47,72,6,24,107,29,61,31,34,62,146,100,16,3,101,96,91,45,58,7,73,20,116,8,138,115,46,110,82,10,133,19,111,76,27,120,55,23,144,80,83,71,139,140,99,32,40,28,143,81,69,17,77,136,118,129,112,90,66,114,53,92,141,87,89,95,63,108,35}, // permutation 3
{1,134,125,55,24,17,29,37,72,20,135,13,68,141,54,52,75,36,87,97,78,22,91,82,18,6,131,103,51,0,49,113,95,33,23,99,126,64,79,120,28,16,32,81,86,128,31,83,38,4,60,130,27,2,116,118,115,129,100,74,111,96,104,48,92,77,112,8,15,56,41,109,62,10,67,93,124,138,105,122,65,7,50,57,44,106,61,147,39,42,94,66,90,114,35,88,136,121,63,53,127,40,9,80,140,69,34,84,46,19,132,137,5,107,45,11,146,71,59,143,89,3,123,108,25,110,144,43,142,47,101,145,26,98,21,117,85,119,70,102,73,30,12,58,139,14,133,76}, // permutation 4
{101,13,70,76,127,105,142,86,95,125,55,65,14,22,0,18,144,15,117,20,107,102,28,141,19,140,78,35,90,123,129,84,80,138,45,137,2,106,36,37,62,23,48,122,114,99,59,111,49,124,87,31,126,58,63,119,26,100,134,32,11,147,71,89,52,9,53,21,81,42,61,97,34,17,75,109,139,54,110,145,47,8,46,43,4,96,40,44,72,30,27,24,38,94,6,79,29,116,93,112,136,1,12,16,88,77,73,39,133,67,33,120,121,64,83,69,98,5,103,57,66,50,118,131,25,130,41,128,146,91,132,85,10,60,143,92,51,56,135,115,74,113,82,104,68,7,3,108}, // permutation 5
{45,62,42,55,26,125,124,132,121,139,56,38,80,20,60,46,37,23,58,104,131,100,120,97,122,113,2,118,123,87,133,12,90,29,32,36,86,115,146,34,70,9,110,130,33,61,108,103,92,35,18,41,59,74,15,82,40,44,141,19,57,136,24,1,76,71,17,143,52,43,50,95,102,137,27,117,89,84,63,49,105,101,66,112,93,28,85,25,72,54,127,4,114,109,7,107,78,13,119,67,99,116,88,135,31,142,21,65,3,47,10,98,147,126,11,111,134,22,94,16,30,64,53,96,138,39,145,8,83,68,6,106,77,0,14,81,140,79,73,91,69,128,129,5,75,144,48,51}, // permutation 6
{39,71,122,124,131,113,7,59,28,0,79,127,56,78,132,96,128,143,52,103,3,85,62,91,25,137,27,116,44,77,133,101,2,119,5,18,98,10,61,145,29,57,80,13,92,90,76,35,141,139,20,82,17,135,33,51,74,9,144,97,55,147,83,107,100,120,21,111,118,68,70,123,16,4,66,53,105,12,89,129,6,99,65,87,146,81,38,88,30,86,102,49,26,125,94,93,73,138,8,43,130,31,117,60,95,67,11,34,63,114,42,1,126,32,121,108,140,69,40,110,41,14,23,45,72,104,109,36,37,112,15,50,75,54,46,106,19,84,48,24,64,134,136,22,58,47,142,115}, // permutation 7
{101,135,119,86,69,131,80,55,15,25,90,133,30,110,40,100,97,129,32,24,116,12,74,136,147,146,121,126,51,44,70,91,3,63,41,111,18,36,88,19,26,39,83,0,118,92,108,43,37,115,71,87,23,4,35,38,114,42,95,68,34,29,76,75,141,17,33,1,134,59,122,98,132,73,56,58,77,137,20,106,105,79,145,123,10,67,14,130,84,104,113,6,138,62,61,31,140,57,13,28,112,53,72,89,125,54,49,47,11,21,120,144,102,139,128,142,78,96,50,99,8,66,5,124,94,143,107,127,27,82,22,81,117,64,7,9,45,103,93,60,109,46,65,2,16,52,48,85}, // permutation 8
{95,3,45,60,16,10,142,136,73,82,129,8,24,84,67,131,86,4,29,5,115,100,119,92,26,96,41,132,42,17,128,76,93,130,30,94,125,20,107,126,43,113,54,33,53,50,98,39,103,47,12,19,91,6,51,9,32,114,101,68,31,147,85,11,110,72,89,70,141,34,111,25,62,133,112,120,127,105,87,139,7,81,78,44,23,118,1,61,46,145,21,122,138,117,36,108,65,134,77,121,123,97,52,75,124,2,48,14,18,57,144,106,0,35,90,40,109,22,15,27,140,63,28,104,64,56,71,38,37,66,79,143,80,99,135,137,116,102,88,13,69,74,146,49,58,83,55,59} // permutation 9
};

// Seed: 2791024362

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t * f0;
   volatile int32_t  f1;
   uint32_t  f2;
};

struct S2 {
    int32_t g_13;
    volatile VECTOR(int8_t, 2) g_27;
    union U0 g_28;
    volatile int8_t * volatile g_32;
    int16_t g_36;
    uint16_t g_38;
    int32_t *g_41;
    uint64_t g_42;
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
uint32_t  func_1(struct S2 * p_43);
int32_t * func_2(int16_t  p_3, struct S2 * p_43);
int32_t  func_5(uint32_t  p_6, struct S2 * p_43);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_43->l_comm_values p_43->g_13 p_43->g_comm_values p_43->g_27 p_43->g_28 p_43->g_32 p_43->g_36 p_43->g_38 p_43->g_42 p_43->g_41
 * writes: p_43->g_13 p_43->g_36 p_43->g_38 p_43->g_41 p_43->g_42 p_43->l_comm_values
 */
uint32_t  func_1(struct S2 * p_43)
{ /* block id: 4 */
    uint8_t l_4 = 251UL;
    int32_t *l_20 = &p_43->g_13;
    int32_t l_37[9] = {0x7A760F2FL,0x7A760F2FL,0x7A760F2FL,0x7A760F2FL,0x7A760F2FL,0x7A760F2FL,0x7A760F2FL,0x7A760F2FL,0x7A760F2FL};
    uint8_t l_39 = 0x26L;
    int32_t **l_40[1][2][6];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
                l_40[i][j][k] = (void*)0;
        }
    }
    l_20 = func_2(l_4, p_43);
    for (l_4 = (-19); (l_4 <= 43); ++l_4)
    { /* block id: 25 */
        uint8_t l_23 = 4UL;
        VECTOR(int8_t, 8) l_26 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        int32_t *l_31 = (void*)0;
        VECTOR(int32_t, 2) l_33 = (VECTOR(int32_t, 2))(0x7C5C2DA5L, 0x28AB82AEL);
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_43->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 148)), permutations[(safe_mod_func_uint32_t_u_u((l_23 <= p_43->l_comm_values[(safe_mod_func_uint32_t_u_u(p_43->tid, 148))]), 10))][(safe_mod_func_uint32_t_u_u(p_43->tid, 148))]));
        p_43->g_38 ^= ((VECTOR(int32_t, 16))(1L, ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(l_26.s07333260)).even, ((VECTOR(int8_t, 8))(p_43->g_27.yyxxxxxy)).lo))).zxwwzxxy, (int8_t)(p_43->g_28 , func_5(((safe_div_func_uint32_t_u_u(((((void*)0 == l_31) >= ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))((-1L), (p_43->g_32 == (void*)0), 0x571021F5L, 0x7F464F61L)).zxwzywxwxwywxwyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_33.xyyyyyyy)).s13)).yxxxxyyyyxyxxxxy))).se) , (safe_lshift_func_uint16_t_u_u(((p_43->g_13 == (+(p_43->g_27.y >= (*l_20)))) != ((p_43->g_36 |= (p_43->l_comm_values[(safe_mod_func_uint32_t_u_u(p_43->tid, 148))] , p_43->g_13)) <= p_43->l_comm_values[(safe_mod_func_uint32_t_u_u(p_43->tid, 148))])), (*l_20)))), (-5L))) | 0xE3L), p_43)), (int8_t)p_43->g_comm_values[p_43->tid]))).s35)).yyyyyxxy)).s76, ((VECTOR(int8_t, 2))(5L))))).even, 0UL)) < p_43->l_comm_values[(safe_mod_func_uint32_t_u_u(p_43->tid, 148))]), ((VECTOR(int32_t, 2))((-6L))), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 4))(0x1DF78A42L)), ((VECTOR(int32_t, 2))(0x60DAEE25L)), p_43->g_comm_values[p_43->tid], l_37[7], 0L, 0x4A2468F5L)).sb;
    }
    p_43->g_42 &= (&l_37[7] != (p_43->g_41 = func_2(l_39, p_43)));
    (*p_43->g_41) = ((*l_20) != (p_43->l_comm_values[(safe_mod_func_uint32_t_u_u(p_43->tid, 148))] ^= p_43->g_27.y));
    return (*l_20);
}


/* ------------------------------------------ */
/* 
 * reads : p_43->l_comm_values p_43->g_13 p_43->g_comm_values
 * writes: p_43->g_13
 */
int32_t * func_2(int16_t  p_3, struct S2 * p_43)
{ /* block id: 5 */
    VECTOR(int16_t, 2) l_9 = (VECTOR(int16_t, 2))(1L, (-1L));
    VECTOR(int8_t, 2) l_10 = (VECTOR(int8_t, 2))(1L, 0L);
    VECTOR(uint8_t, 2) l_11 = (VECTOR(uint8_t, 2))(255UL, 0x1AL);
    int32_t *l_12 = &p_43->g_13;
    int i;
    (*l_12) = func_5((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x53C1L, (-1L))).xyxxyyxx)).hi, (int16_t)(p_3 = 1L), (int16_t)3L))).yxyxwywzywzzxyxy)).s4, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(l_9.xy)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_43->l_comm_values[(safe_mod_func_uint32_t_u_u(p_43->tid, 148))], ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_10.xxyxxyyx)))).odd, ((VECTOR(uint8_t, 16))(l_11.yxxyxxxxyyxxyyyx)).s4255))), ((void*)0 == l_12), 0x59ECL, 0x4886L)).hi)).even))).hi)), p_43);
    return l_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_43->g_13 p_43->g_comm_values
 * writes: p_43->g_13
 */
int32_t  func_5(uint32_t  p_6, struct S2 * p_43)
{ /* block id: 7 */
    int32_t l_18 = 0L;
    for (p_43->g_13 = 26; (p_43->g_13 > (-29)); p_43->g_13 = safe_sub_func_int32_t_s_s(p_43->g_13, 8))
    { /* block id: 10 */
        return p_6;
    }
    for (p_6 = 15; (p_6 == 3); p_6--)
    { /* block id: 15 */
        int32_t *l_19 = &p_43->g_13;
        (*l_19) = (l_18 = p_43->g_comm_values[p_43->tid]);
    }
    return p_43->g_comm_values[p_43->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[148];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 148; i++)
            l_comm_values[i] = 1;
    struct S2 c_44;
    struct S2* p_43 = &c_44;
    struct S2 c_45 = {
        1L, // p_43->g_13
        (VECTOR(int8_t, 2))(1L, 0x21L), // p_43->g_27
        {0}, // p_43->g_28
        (void*)0, // p_43->g_32
        0L, // p_43->g_36
        0x3FB5L, // p_43->g_38
        &p_43->g_13, // p_43->g_41
        0UL, // p_43->g_42
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 148)), permutations[0][get_linear_local_id()])), // p_43->tid
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
    transparent_crc(p_43->g_13, "p_43->g_13", print_hash_value);
    transparent_crc(p_43->g_27.x, "p_43->g_27.x", print_hash_value);
    transparent_crc(p_43->g_27.y, "p_43->g_27.y", print_hash_value);
    transparent_crc(p_43->g_36, "p_43->g_36", print_hash_value);
    transparent_crc(p_43->g_38, "p_43->g_38", print_hash_value);
    transparent_crc(p_43->g_42, "p_43->g_42", print_hash_value);
    transparent_crc(p_43->v_collective, "p_43->v_collective", print_hash_value);
    transparent_crc(p_43->l_comm_values[get_linear_local_id()], "p_43->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_43->g_comm_values[get_linear_group_id() * 148 + get_linear_local_id()], "p_43->g_comm_values[get_linear_group_id() * 148 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
