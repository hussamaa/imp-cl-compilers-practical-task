// --atomics 61 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 31,77,3 -l 31,1,1
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

__constant uint32_t permutations[10][31] = {
{1,12,19,2,27,25,3,16,9,8,4,6,23,11,24,22,18,13,20,0,26,28,7,17,29,14,15,10,21,30,5}, // permutation 0
{21,5,7,20,17,15,24,2,9,6,8,12,30,26,27,23,0,4,13,3,22,1,25,19,28,18,16,10,29,14,11}, // permutation 1
{3,9,23,19,16,12,24,2,14,22,15,8,25,21,0,20,6,28,10,4,1,26,11,30,29,17,5,18,27,13,7}, // permutation 2
{6,11,21,8,29,28,24,17,7,30,19,12,2,20,23,4,18,10,22,1,15,5,3,16,25,9,13,14,0,27,26}, // permutation 3
{19,15,27,11,2,21,5,24,28,17,7,22,0,10,14,23,18,16,6,3,4,9,26,12,25,1,13,29,20,30,8}, // permutation 4
{19,24,22,6,16,10,18,3,9,27,7,12,2,13,4,23,11,8,1,14,17,21,25,29,26,20,28,5,15,30,0}, // permutation 5
{25,21,29,4,17,28,0,27,13,19,14,18,10,11,22,3,16,7,24,5,12,9,1,26,20,8,15,6,2,23,30}, // permutation 6
{8,22,17,24,2,19,7,6,1,26,16,27,10,0,3,21,28,14,9,4,15,29,23,13,30,11,25,5,20,18,12}, // permutation 7
{5,6,8,14,20,4,30,23,17,0,15,29,21,19,27,18,11,2,24,12,1,22,7,25,3,16,13,26,28,10,9}, // permutation 8
{28,19,30,24,3,0,16,2,22,14,15,23,26,20,10,27,9,21,7,5,8,12,11,4,13,6,29,17,1,18,25} // permutation 9
};

// Seed: 709436840

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
   volatile int16_t  f1;
   uint32_t  f2;
   int64_t  f3;
   int8_t  f4;
};

struct S1 {
   uint64_t  f0;
   uint64_t  f1;
   volatile int32_t  f2;
   uint64_t  f3;
   volatile int32_t  f4;
   volatile uint32_t  f5;
   int64_t  f6;
};

struct S2 {
    struct S1 g_55[9];
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
struct S1  func_1(struct S2 * p_56);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_56->g_55
 * writes:
 */
struct S1  func_1(struct S2 * p_56)
{ /* block id: 4 */
    if ((atomic_inc(&p_56->g_atomic_input[61 * get_linear_group_id() + 40]) == 9))
    { /* block id: 6 */
        VECTOR(int32_t, 2) l_2 = (VECTOR(int32_t, 2))(0x79C25B05L, (-1L));
        int64_t l_3 = (-1L);
        int i;
        l_3 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_2.xy)))).hi;
        for (l_3 = (-30); (l_3 < 21); l_3++)
        { /* block id: 10 */
            int64_t l_6 = 0L;
            VECTOR(int32_t, 16) l_7 = (VECTOR(int32_t, 16))(0x14FFD814L, (VECTOR(int32_t, 4))(0x14FFD814L, (VECTOR(int32_t, 2))(0x14FFD814L, (-1L)), (-1L)), (-1L), 0x14FFD814L, (-1L), (VECTOR(int32_t, 2))(0x14FFD814L, (-1L)), (VECTOR(int32_t, 2))(0x14FFD814L, (-1L)), 0x14FFD814L, (-1L), 0x14FFD814L, (-1L));
            int8_t l_8[9];
            int i;
            for (i = 0; i < 9; i++)
                l_8[i] = 2L;
            l_2.y = l_6;
            if ((l_8[5] ^= ((VECTOR(int32_t, 2))(l_7.s74)).even))
            { /* block id: 13 */
                int32_t l_10 = 0x41311E2DL;
                int32_t *l_9 = &l_10;
                int32_t *l_11 = &l_10;
                struct S0 l_12 = {0x63L,-9L,4294967287UL,0x37C57F39CEE24B2EL,0x09L};/* VOLATILE GLOBAL l_12 */
                struct S0 l_13 = {0x90L,-1L,4294967287UL,0x5A8DB8846B51F0EFL,0x73L};/* VOLATILE GLOBAL l_13 */
                l_11 = l_9;
                l_13 = l_12;
            }
            else
            { /* block id: 16 */
                uint32_t l_14 = 0x149CFF29L;
                int64_t l_15 = 7L;
                int64_t l_16 = 0x57C8A36A77D77FC7L;
                uint32_t l_17 = 1UL;
                int16_t l_20 = 1L;
                int32_t l_22 = 0x3D73C12DL;
                int32_t *l_21[2][2];
                int32_t *l_23 = (void*)0;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_21[i][j] = &l_22;
                }
                l_23 = (l_14 , ((l_15 , ((l_17--) , l_20)) , l_21[1][0]));
                for (l_20 = 11; (l_20 < (-19)); --l_20)
                { /* block id: 21 */
                    int32_t l_26 = (-1L);
                    for (l_26 = 0; (l_26 < 12); ++l_26)
                    { /* block id: 24 */
                        uint32_t l_29 = 2UL;
                        uint8_t l_30[7] = {0xEBL,5UL,0xEBL,0xEBL,5UL,0xEBL,0xEBL};
                        uint16_t l_31[9][4][7] = {{{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL}},{{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL}},{{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL}},{{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL}},{{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL}},{{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL}},{{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL}},{{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL}},{{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL},{0x8B50L,65535UL,8UL,0xA9F1L,65532UL,0xA9F1L,8UL}}};
                        uint8_t l_32 = 255UL;
                        int i, j, k;
                        l_30[4] &= l_29;
                        l_32 &= l_31[7][0][1];
                    }
                }
                for (l_15 = 9; (l_15 != (-29)); l_15 = safe_sub_func_int8_t_s_s(l_15, 2))
                { /* block id: 31 */
                    struct S0 l_36 = {0x82L,0L,0UL,-9L,0x31L};/* VOLATILE GLOBAL l_36 */
                    struct S0 *l_35 = &l_36;
                    l_35 = (void*)0;
                }
            }
            for (l_8[6] = (-8); (l_8[6] >= (-1)); ++l_8[6])
            { /* block id: 37 */
                VECTOR(int32_t, 2) l_39 = (VECTOR(int32_t, 2))((-1L), 0L);
                int i;
                for (l_39.y = 14; (l_39.y == (-16)); l_39.y = safe_sub_func_uint16_t_u_u(l_39.y, 7))
                { /* block id: 40 */
                    int32_t l_42[6] = {0x26A66835L,0x429F8D9EL,0x26A66835L,0x26A66835L,0x429F8D9EL,0x26A66835L};
                    struct S0 *l_50 = (void*)0;
                    struct S0 *l_51 = (void*)0;
                    VECTOR(int32_t, 4) l_52 = (VECTOR(int32_t, 4))(0x4F315289L, (VECTOR(int32_t, 2))(0x4F315289L, (-1L)), (-1L));
                    int16_t l_53 = (-1L);
                    int8_t l_54 = 0L;
                    int i;
                    for (l_42[2] = 0; (l_42[2] > (-25)); --l_42[2])
                    { /* block id: 43 */
                        int8_t l_45 = 0x2FL;
                        int32_t l_47[9][1][10] = {{{0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL,0L,0x1175669BL,0L,0x5E3FE27FL,0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL}},{{0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL,0L,0x1175669BL,0L,0x5E3FE27FL,0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL}},{{0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL,0L,0x1175669BL,0L,0x5E3FE27FL,0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL}},{{0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL,0L,0x1175669BL,0L,0x5E3FE27FL,0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL}},{{0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL,0L,0x1175669BL,0L,0x5E3FE27FL,0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL}},{{0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL,0L,0x1175669BL,0L,0x5E3FE27FL,0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL}},{{0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL,0L,0x1175669BL,0L,0x5E3FE27FL,0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL}},{{0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL,0L,0x1175669BL,0L,0x5E3FE27FL,0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL}},{{0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL,0L,0x1175669BL,0L,0x5E3FE27FL,0x5A07F58EL,0x5A07F58EL,0x5E3FE27FL}}};
                        int32_t *l_46 = &l_47[0][0][4];
                        int32_t *l_48 = (void*)0;
                        int32_t *l_49[7];
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_49[i] = &l_47[7][0][8];
                        l_49[2] = (l_45 , (l_48 = l_46));
                    }
                    l_51 = l_50;
                    l_54 |= (l_7.s4 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_52.xw)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0L)))).yxyyyxyyyxyyyyxx)).s3ba0, (int32_t)l_53, (int32_t)(l_2.y &= ((VECTOR(int32_t, 2))(0L, 0x24168CBAL)).even)))), 0L, 0x79556C6CL)))).s4);
                }
            }
            l_2.y ^= (-10L);
        }
        l_2.y ^= 0x3F13354AL;
        unsigned int result = 0;
        result += l_2.y;
        result += l_2.x;
        result += l_3;
        atomic_add(&p_56->g_special_values[61 * get_linear_group_id() + 40], result);
    }
    else
    { /* block id: 56 */
        (1 + 1);
    }
    return p_56->g_55[3];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[31];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 31; i++)
            l_comm_values[i] = 1;
    struct S2 c_57;
    struct S2* p_56 = &c_57;
    struct S2 c_58 = {
        {{0x9A650DEC7D6112DDL,1UL,0x7BDFE816L,18446744073709551613UL,0x6CF30466L,0x9CBFF9F6L,1L},{0x9A650DEC7D6112DDL,1UL,0x7BDFE816L,18446744073709551613UL,0x6CF30466L,0x9CBFF9F6L,1L},{0x9A650DEC7D6112DDL,1UL,0x7BDFE816L,18446744073709551613UL,0x6CF30466L,0x9CBFF9F6L,1L},{0x9A650DEC7D6112DDL,1UL,0x7BDFE816L,18446744073709551613UL,0x6CF30466L,0x9CBFF9F6L,1L},{0x9A650DEC7D6112DDL,1UL,0x7BDFE816L,18446744073709551613UL,0x6CF30466L,0x9CBFF9F6L,1L},{0x9A650DEC7D6112DDL,1UL,0x7BDFE816L,18446744073709551613UL,0x6CF30466L,0x9CBFF9F6L,1L},{0x9A650DEC7D6112DDL,1UL,0x7BDFE816L,18446744073709551613UL,0x6CF30466L,0x9CBFF9F6L,1L},{0x9A650DEC7D6112DDL,1UL,0x7BDFE816L,18446744073709551613UL,0x6CF30466L,0x9CBFF9F6L,1L},{0x9A650DEC7D6112DDL,1UL,0x7BDFE816L,18446744073709551613UL,0x6CF30466L,0x9CBFF9F6L,1L}}, // p_56->g_55
        0, // p_56->v_collective
        sequence_input[get_global_id(0)], // p_56->global_0_offset
        sequence_input[get_global_id(1)], // p_56->global_1_offset
        sequence_input[get_global_id(2)], // p_56->global_2_offset
        sequence_input[get_local_id(0)], // p_56->local_0_offset
        sequence_input[get_local_id(1)], // p_56->local_1_offset
        sequence_input[get_local_id(2)], // p_56->local_2_offset
        sequence_input[get_group_id(0)], // p_56->group_0_offset
        sequence_input[get_group_id(1)], // p_56->group_1_offset
        sequence_input[get_group_id(2)], // p_56->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 31)), permutations[0][get_linear_local_id()])), // p_56->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_57 = c_58;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_56);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_56->g_55[i].f0, "p_56->g_55[i].f0", print_hash_value);
        transparent_crc(p_56->g_55[i].f1, "p_56->g_55[i].f1", print_hash_value);
        transparent_crc(p_56->g_55[i].f2, "p_56->g_55[i].f2", print_hash_value);
        transparent_crc(p_56->g_55[i].f3, "p_56->g_55[i].f3", print_hash_value);
        transparent_crc(p_56->g_55[i].f4, "p_56->g_55[i].f4", print_hash_value);
        transparent_crc(p_56->g_55[i].f5, "p_56->g_55[i].f5", print_hash_value);
        transparent_crc(p_56->g_55[i].f6, "p_56->g_55[i].f6", print_hash_value);

    }
    transparent_crc(p_56->v_collective, "p_56->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 61; i++)
            transparent_crc(p_56->g_special_values[i + 61 * get_linear_group_id()], "p_56->g_special_values[i + 61 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_56->l_comm_values[get_linear_local_id()], "p_56->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_56->g_comm_values[get_linear_group_id() * 31 + get_linear_local_id()], "p_56->g_comm_values[get_linear_group_id() * 31 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
