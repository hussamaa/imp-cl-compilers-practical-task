// -g 56,81,1 -l 4,27,1
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


// Seed: 535322935

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    int32_t g_27;
    int32_t g_31;
    int32_t *g_30;
    int32_t g_39;
    int32_t g_45[3][4][4];
    int32_t * volatile g_63;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S0 * p_65);
uint64_t  func_9(int64_t  p_10, int32_t  p_11, struct S0 * p_65);
int8_t  func_20(int32_t  p_21, uint32_t  p_22, uint16_t  p_23, int8_t  p_24, struct S0 * p_65);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_65->g_4 p_65->g_2 p_65->g_27 p_65->g_30 p_65->g_31 p_65->g_39 p_65->g_45 p_65->g_63
 * writes: p_65->g_4 p_65->g_27 p_65->g_39 p_65->g_45
 */
uint64_t  func_1(struct S0 * p_65)
{ /* block id: 4 */
    uint16_t l_61 = 0x7B88L;
    int32_t l_64 = 1L;
    for (p_65->g_4 = (-8); (p_65->g_4 < 8); p_65->g_4++)
    { /* block id: 7 */
        int32_t l_25 = 0x6D45B0E8L;
        int32_t *l_26 = &p_65->g_27;
        int32_t *l_62 = &p_65->g_39;
        (*p_65->g_63) = ((*l_62) = (safe_sub_func_int8_t_s_s(((p_65->g_2 <= 1UL) ^ func_9(p_65->g_4, (safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((func_20(((*l_26) ^= l_25), l_25, p_65->g_4, (safe_add_func_int8_t_s_s((&l_25 != p_65->g_30), (safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((&p_65->g_31 != (void*)0) | 1UL), p_65->g_31)), (-10L))), l_25)))), p_65) , l_25), 0xA59923F436BBB4AFL)), p_65->g_45[1][0][0])), p_65->g_4)), p_65->g_4)), p_65)), l_61)));
    }
    l_64 = ((1UL != (p_65->g_4 <= l_61)) | func_9(l_61, (*p_65->g_63), p_65));
    return l_61;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_9(int64_t  p_10, int32_t  p_11, struct S0 * p_65)
{ /* block id: 13 */
    uint8_t l_60[8][6] = {{0UL,0UL,5UL,0x8DL,0x9EL,0x8DL},{0UL,0UL,5UL,0x8DL,0x9EL,0x8DL},{0UL,0UL,5UL,0x8DL,0x9EL,0x8DL},{0UL,0UL,5UL,0x8DL,0x9EL,0x8DL},{0UL,0UL,5UL,0x8DL,0x9EL,0x8DL},{0UL,0UL,5UL,0x8DL,0x9EL,0x8DL},{0UL,0UL,5UL,0x8DL,0x9EL,0x8DL},{0UL,0UL,5UL,0x8DL,0x9EL,0x8DL}};
    int i, j;
    return l_60[5][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_65->g_39 p_65->g_27
 * writes: p_65->g_39
 */
int8_t  func_20(int32_t  p_21, uint32_t  p_22, uint16_t  p_23, int8_t  p_24, struct S0 * p_65)
{ /* block id: 9 */
    int32_t *l_38 = &p_65->g_39;
    int32_t *l_40 = &p_65->g_39;
    int32_t *l_41 = (void*)0;
    int32_t *l_42 = (void*)0;
    int32_t *l_43 = (void*)0;
    int32_t *l_44 = &p_65->g_39;
    int32_t *l_46 = &p_65->g_39;
    int32_t *l_47 = &p_65->g_45[1][2][3];
    int32_t *l_48 = &p_65->g_45[0][1][0];
    int32_t *l_49 = &p_65->g_45[0][1][0];
    int32_t *l_50 = (void*)0;
    int32_t *l_51 = &p_65->g_39;
    int32_t l_52 = 0x1CC49297L;
    int32_t *l_53 = &p_65->g_39;
    int32_t *l_54[9];
    int16_t l_55 = (-2L);
    int16_t l_56 = 0x35B7L;
    uint32_t l_57[2];
    int i;
    for (i = 0; i < 9; i++)
        l_54[i] = &p_65->g_39;
    for (i = 0; i < 2; i++)
        l_57[i] = 4294967293UL;
    l_57[1]++;
    (*l_53) |= p_24;
    return p_65->g_27;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_66;
    struct S0* p_65 = &c_66;
    struct S0 c_67 = {
        0x48094A18L, // p_65->g_2
        0L, // p_65->g_3
        0L, // p_65->g_4
        1L, // p_65->g_27
        0x27EB8E13L, // p_65->g_31
        &p_65->g_31, // p_65->g_30
        (-4L), // p_65->g_39
        {{{4L,0x3F2B8319L,(-7L),0x158F8766L},{4L,0x3F2B8319L,(-7L),0x158F8766L},{4L,0x3F2B8319L,(-7L),0x158F8766L},{4L,0x3F2B8319L,(-7L),0x158F8766L}},{{4L,0x3F2B8319L,(-7L),0x158F8766L},{4L,0x3F2B8319L,(-7L),0x158F8766L},{4L,0x3F2B8319L,(-7L),0x158F8766L},{4L,0x3F2B8319L,(-7L),0x158F8766L}},{{4L,0x3F2B8319L,(-7L),0x158F8766L},{4L,0x3F2B8319L,(-7L),0x158F8766L},{4L,0x3F2B8319L,(-7L),0x158F8766L},{4L,0x3F2B8319L,(-7L),0x158F8766L}}}, // p_65->g_45
        &p_65->g_45[2][1][0], // p_65->g_63
    };
    c_66 = c_67;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_65);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_65->g_2, "p_65->g_2", print_hash_value);
    transparent_crc(p_65->g_3, "p_65->g_3", print_hash_value);
    transparent_crc(p_65->g_4, "p_65->g_4", print_hash_value);
    transparent_crc(p_65->g_27, "p_65->g_27", print_hash_value);
    transparent_crc(p_65->g_31, "p_65->g_31", print_hash_value);
    transparent_crc(p_65->g_39, "p_65->g_39", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_65->g_45[i][j][k], "p_65->g_45[i][j][k]", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
