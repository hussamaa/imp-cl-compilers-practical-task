// --atomics 98 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 12,98,8 -l 2,14,4
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

__constant uint32_t permutations[10][112] = {
{47,88,93,46,57,40,72,105,39,8,60,101,49,12,85,103,51,66,13,23,80,34,79,14,78,5,96,30,90,56,59,7,70,24,86,76,26,36,97,68,74,107,89,29,11,73,21,9,63,32,43,22,0,87,100,35,99,16,52,77,91,54,71,64,37,4,67,48,53,65,2,98,104,38,10,108,42,19,20,106,1,111,18,50,95,62,33,15,58,55,3,109,92,83,61,110,82,17,28,6,31,84,25,94,102,69,44,45,41,75,27,81}, // permutation 0
{97,89,83,70,12,6,30,82,69,28,63,4,33,48,29,68,62,2,100,88,16,111,39,57,103,20,52,64,66,54,24,7,67,65,85,59,106,26,45,9,74,71,40,78,35,99,51,96,11,42,76,110,14,105,93,86,22,60,46,47,91,58,1,17,98,81,102,18,72,109,41,108,92,95,61,87,10,77,34,44,104,43,5,50,94,13,84,101,75,15,25,23,32,80,38,49,107,8,53,19,27,31,37,36,56,73,21,0,55,90,3,79}, // permutation 1
{22,55,66,25,26,58,11,33,21,68,111,54,31,53,1,108,3,4,74,40,27,101,75,36,65,80,50,97,48,84,52,59,88,16,9,17,103,18,43,70,6,32,69,105,78,60,2,23,5,83,67,63,106,30,57,98,89,87,72,104,20,45,95,62,110,91,102,0,92,35,73,7,93,19,38,109,56,94,10,96,39,24,8,99,49,79,15,90,28,64,81,107,47,61,100,44,42,71,85,37,34,41,51,29,76,82,46,86,13,14,12,77}, // permutation 2
{90,109,72,17,68,43,92,28,44,101,21,60,85,77,52,58,91,56,98,102,111,79,11,65,99,18,100,61,105,54,78,38,40,34,73,27,51,94,12,55,106,83,30,87,82,57,48,15,14,81,84,20,67,63,53,80,13,24,9,5,10,23,93,29,16,46,4,8,66,35,33,64,7,50,76,45,88,2,69,0,42,75,49,39,104,70,36,1,47,103,62,22,107,59,95,31,96,32,97,74,86,37,26,110,3,89,71,108,19,25,41,6}, // permutation 3
{76,50,79,84,41,108,52,66,99,0,109,17,93,32,89,16,111,40,77,9,81,43,69,25,60,68,13,36,20,37,70,63,58,75,23,56,82,6,86,78,64,102,12,22,71,95,47,2,74,31,42,26,80,87,53,107,51,61,4,59,8,67,46,100,92,85,65,30,5,110,14,72,57,24,98,29,55,83,27,38,44,1,3,39,48,101,35,73,103,91,49,97,106,94,88,62,11,15,21,104,90,45,33,96,7,18,105,28,10,34,19,54}, // permutation 4
{47,18,13,12,5,48,69,97,101,39,57,84,105,63,15,8,49,92,20,14,95,106,25,76,89,32,68,65,43,45,3,80,77,98,16,27,24,41,67,111,54,79,86,55,51,103,2,99,11,71,104,9,100,91,73,19,26,29,102,81,30,6,36,35,66,17,34,38,56,7,4,72,31,70,60,85,93,46,50,75,52,87,110,10,64,21,37,1,88,78,53,61,108,22,62,28,83,94,109,42,0,44,107,82,96,33,58,23,74,59,40,90}, // permutation 5
{65,110,89,63,40,79,4,82,108,24,80,10,27,104,17,53,39,70,55,8,19,74,31,26,28,45,15,83,22,3,23,97,57,56,1,7,34,33,105,85,12,106,13,14,86,52,42,25,16,101,58,81,21,9,2,35,75,59,30,62,54,41,99,94,20,76,67,46,18,88,109,91,29,48,50,84,37,102,66,36,11,43,73,90,51,72,100,78,98,69,68,6,5,87,38,0,71,44,95,111,32,77,92,64,47,96,93,49,61,107,60,103}, // permutation 6
{87,54,69,100,37,60,41,23,82,48,14,45,72,52,91,56,111,61,53,92,89,57,40,109,20,80,96,68,16,106,10,107,70,42,51,97,85,95,88,59,27,19,102,84,76,35,67,25,63,71,81,62,21,86,9,33,26,103,47,0,7,74,8,65,39,98,49,28,46,15,2,58,99,110,94,17,13,18,30,93,73,11,101,36,77,12,90,75,31,24,5,3,4,29,104,38,79,44,66,105,64,108,6,55,34,50,83,78,43,22,32,1}, // permutation 7
{30,71,51,110,93,79,60,97,18,86,109,85,65,58,5,4,7,84,15,3,105,29,10,62,2,61,33,57,101,95,55,108,89,96,31,45,78,59,14,22,11,99,88,24,21,54,100,32,73,41,20,34,83,63,75,28,17,36,46,6,8,76,48,98,92,66,53,81,67,19,69,107,103,70,40,94,43,39,106,50,90,16,104,25,44,82,56,87,37,64,91,38,0,49,23,77,1,74,68,12,42,111,80,26,9,47,102,35,52,27,13,72}, // permutation 8
{86,64,79,39,34,105,48,69,84,50,38,56,6,36,99,111,108,17,8,15,37,98,19,93,52,104,59,72,4,33,65,75,14,89,67,49,109,101,87,70,46,90,71,18,16,27,97,80,45,40,81,55,110,3,42,25,2,106,44,28,1,82,9,74,78,61,76,68,57,29,10,95,7,94,31,22,11,77,23,107,35,26,66,51,21,0,96,24,73,12,53,43,100,83,85,60,92,13,47,91,54,58,41,63,30,5,102,20,32,62,88,103} // permutation 9
};

// Seed: 2657998114

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   int32_t  f1;
};

union U2 {
   volatile int64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   volatile int8_t * f3;
};

struct S3 {
    volatile uint64_t g_10;
    int8_t *g_11;
    int8_t *g_13;
    int8_t g_17;
    VECTOR(int32_t, 4) g_21;
    int8_t **g_56;
    int32_t *g_58;
    uint16_t g_63;
    int64_t g_71;
    VECTOR(int16_t, 16) g_79;
    VECTOR(int8_t, 4) g_81;
    VECTOR(int8_t, 2) g_83;
    VECTOR(int16_t, 16) g_89;
    union U0 g_94;
    volatile uint16_t *g_107;
    volatile uint16_t ** volatile g_106;
    int32_t g_114;
    int32_t g_116;
    int32_t **g_129;
    int32_t *** volatile g_128[3];
    int8_t g_133;
    uint32_t g_157[9];
    uint8_t g_158;
    volatile VECTOR(int32_t, 2) g_167;
    int32_t * volatile g_280;
    int32_t g_289;
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
uint64_t  func_1(struct S3 * p_293);
int8_t * func_6(int64_t  p_7, uint32_t  p_8, struct S3 * p_293);
uint16_t  func_14(int8_t ** p_15, struct S3 * p_293);
int16_t  func_22(int8_t ** p_23, uint32_t  p_24, uint64_t  p_25, struct S3 * p_293);
int8_t ** func_26(int8_t ** p_27, struct S3 * p_293);
uint64_t  func_31(int8_t  p_32, struct S3 * p_293);
int8_t  func_39(int8_t ** p_40, struct S3 * p_293);
int8_t ** func_41(int64_t  p_42, union U0  p_43, struct S3 * p_293);
int64_t  func_44(int8_t ** p_45, uint32_t  p_46, struct S3 * p_293);
int32_t * func_47(int32_t * p_48, struct S3 * p_293);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_293->g_11 p_293->g_13 p_293->g_17 p_293->g_21 p_293->g_10 p_293->g_58 p_293->g_63 p_293->g_71 p_293->g_comm_values p_293->g_79 p_293->g_81 p_293->g_83 p_293->l_comm_values p_293->g_89 p_293->g_94 p_293->g_106 p_293->g_94.f0 p_293->g_114 p_293->g_116 p_293->g_133 p_293->g_158 p_293->g_56 p_293->g_167 p_293->g_94.f1 p_293->g_129 p_293->g_289
 * writes: p_293->g_10 p_293->g_11 p_293->g_56 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_17 p_293->g_58 p_293->g_114 p_293->g_116 p_293->g_133 p_293->g_comm_values p_293->l_comm_values p_293->g_157 p_293->g_13 p_293->g_94.f1 p_293->g_94.f0 p_293->g_89 p_293->g_289
 */
uint64_t  func_1(struct S3 * p_293)
{ /* block id: 4 */
    int16_t l_9 = 0x19E9L;
    int8_t **l_12 = &p_293->g_11;
    int16_t l_292 = 0L;
    l_292 = (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((((((*l_12) = func_6(l_9, l_9, p_293)) != p_293->g_13) || func_14(l_12, p_293)) && (((l_9 , ((safe_rshift_func_int8_t_s_u(l_9, 4)) <= l_9)) <= FAKE_DIVERGE(p_293->local_2_offset, get_local_id(2), 10)) , l_9)) | p_293->g_83.x), p_293->g_83.x)), GROUP_DIVERGE(0, 1)));
    return l_292;
}


/* ------------------------------------------ */
/* 
 * reads : p_293->g_11
 * writes: p_293->g_10
 */
int8_t * func_6(int64_t  p_7, uint32_t  p_8, struct S3 * p_293)
{ /* block id: 5 */
    p_293->g_10 = 9L;
    return p_293->g_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_293->g_17 p_293->g_21 p_293->g_10 p_293->g_58 p_293->g_63 p_293->g_71 p_293->g_comm_values p_293->g_79 p_293->g_81 p_293->g_83 p_293->l_comm_values p_293->g_89 p_293->g_94 p_293->g_106 p_293->g_94.f0 p_293->g_114 p_293->g_116 p_293->g_133 p_293->g_158 p_293->g_11 p_293->g_56 p_293->g_167 p_293->g_94.f1 p_293->g_129 p_293->g_289
 * writes: p_293->g_56 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_17 p_293->g_58 p_293->g_114 p_293->g_116 p_293->g_133 p_293->g_comm_values p_293->l_comm_values p_293->g_157 p_293->g_10 p_293->g_13 p_293->g_94.f1 p_293->g_94.f0 p_293->g_89 p_293->g_289
 */
uint16_t  func_14(int8_t ** p_15, struct S3 * p_293)
{ /* block id: 9 */
    int8_t *l_16 = &p_293->g_17;
    int32_t l_20[9] = {0x11914CC5L,0x11914CC5L,0x11914CC5L,0x11914CC5L,0x11914CC5L,0x11914CC5L,0x11914CC5L,0x11914CC5L,0x11914CC5L};
    VECTOR(int32_t, 2) l_30 = (VECTOR(int32_t, 2))((-1L), (-8L));
    int64_t l_33 = 1L;
    int64_t *l_161 = &l_33;
    int64_t *l_162 = (void*)0;
    VECTOR(uint64_t, 4) l_170 = (VECTOR(uint64_t, 4))(0x568A418543001A50L, (VECTOR(uint64_t, 2))(0x568A418543001A50L, 0x6F6EEB393109E43AL), 0x6F6EEB393109E43AL);
    int8_t l_173 = 0x21L;
    int16_t *l_283 = (void*)0;
    int16_t *l_284 = (void*)0;
    int16_t *l_285 = (void*)0;
    uint64_t *l_286 = (void*)0;
    uint64_t *l_287 = (void*)0;
    int32_t *l_288 = &p_293->g_289;
    int i;
    (*l_288) ^= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))((-10L), (l_16 == ((safe_rshift_func_int8_t_s_s((((VECTOR(int64_t, 4))(1L, l_20[5], 0x43CCC099843334ADL, 1L)).y || p_293->g_17), 1)) , ((l_20[5] = ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x6F874ACCL, 0x76F0C3DAL, 0x0E8F7CF8L, ((VECTOR(int32_t, 8))(p_293->g_21.xxyxzxxz)), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((p_293->g_89.s6 = func_22(func_26(((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_30.yyxyxyyy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((func_31(l_33, p_293) || (l_20[5] = ((*l_161) |= (safe_lshift_func_uint8_t_u_u((+p_293->g_89.sb), 6))))), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))((safe_lshift_func_uint8_t_u_u((l_30.x = (((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 16))(p_293->g_167.xyyyyxyxxyyxyxxx)).odd, ((VECTOR(int32_t, 8))((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(l_170.ww)).even, ((VECTOR(uint64_t, 16))(((safe_add_func_int32_t_s_s((-1L), l_173)) <= 0x268BL), l_30.x, FAKE_DIVERGE(p_293->global_1_offset, get_global_id(1), 10), 18446744073709551615UL, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), p_293->g_114, ((VECTOR(uint64_t, 8))(18446744073709551614UL)), 18446744073709551615UL)).s5)), p_293->l_comm_values[(safe_mod_func_uint32_t_u_u(p_293->tid, 112))], 8L, 0x302573FFL, 1L, (-3L), 0x79658A0CL, (-1L)))))).lo, ((VECTOR(uint32_t, 4))(4294967290UL))))).w | 0L)), l_20[3])), 0x3EC65207L, 0x33AEA3B3L, 1L)).even, ((VECTOR(int32_t, 2))(1L))))), 0x1E57F89FL)).lo)).yxxyxyxx))).s6421421632332316)).even)).s62, ((VECTOR(int32_t, 2))(0L))))).xyxx)).x, l_170.w)) , &l_16), p_293), p_293->g_158, l_170.z, p_293)) & p_293->g_79.sa), 0L, 0x784C33A2L, 0x42ECCDB6L)).zyxzxyww)).s21, ((VECTOR(int32_t, 2))(5L))))), l_30.y, 5L, (-10L))).hi)).s0 , 0x230AL) & (-3L))) , (void*)0))), 9L, 0x342909EFL, ((VECTOR(int32_t, 4))(0x754A64B2L)))).even, (int32_t)l_170.z))).z;
    return (*l_288);
}


/* ------------------------------------------ */
/* 
 * reads : p_293->g_129 p_293->g_58 p_293->g_114 p_293->g_10 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_comm_values p_293->g_167 p_293->g_116
 * writes: p_293->g_58 p_293->g_114 p_293->g_56 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_94.f0
 */
int16_t  func_22(int8_t ** p_23, uint32_t  p_24, uint64_t  p_25, struct S3 * p_293)
{ /* block id: 128 */
    int64_t l_258[9] = {0L,0x3972CC8F6F3A4409L,0L,0L,0x3972CC8F6F3A4409L,0L,0L,0x3972CC8F6F3A4409L,0L};
    uint16_t l_259 = 8UL;
    uint16_t *l_269 = &p_293->g_63;
    uint16_t **l_268[1];
    VECTOR(int16_t, 2) l_270 = (VECTOR(int16_t, 2))(1L, 1L);
    int32_t **l_277 = &p_293->g_58;
    int32_t l_278 = 3L;
    int32_t l_279[1];
    int32_t *l_281 = &p_293->g_94.f0;
    uint64_t l_282 = 0xD21890671228F4CEL;
    int i;
    for (i = 0; i < 1; i++)
        l_268[i] = &l_269;
    for (i = 0; i < 1; i++)
        l_279[i] = (-1L);
    (*p_293->g_129) = (*p_293->g_129);
    for (p_293->g_114 = 0; (p_293->g_114 >= 14); p_293->g_114 = safe_add_func_uint8_t_u_u(p_293->g_114, 4))
    { /* block id: 132 */
        (*p_293->g_129) = func_47(func_47(func_47((*p_293->g_129), p_293), p_293), p_293);
    }
    (*l_281) = ((l_279[0] = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 8))((p_293->g_63 &= l_258[1]), l_258[1], l_259, 1UL, 1UL, 0UL, 0x77C9L, 0x8100L)).s1564262663127122, ((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(1UL, 0x0359L)), 0xAE64L, (safe_mod_func_uint16_t_u_u((FAKE_DIVERGE(p_293->global_2_offset, get_global_id(2), 10) , (((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((((l_268[0] != &l_269) , ((((VECTOR(int16_t, 16))(l_270.xyxxxyxxyxxyyxyx)).s8 < (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(p_24, 0)) ^ ((void*)0 != l_277)), l_278)), (-4L)))) , p_24)) & p_293->g_167.y) > p_24), l_278)) == 1L), p_25)), p_24)) < p_293->g_comm_values[p_293->tid]) & GROUP_DIVERGE(1, 1))), p_293->g_116)), ((VECTOR(uint16_t, 4))(0x0FC0L)))).s0063556260532745, ((VECTOR(uint16_t, 16))(1UL))))).sa7, ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 2))(65527UL))))), ((VECTOR(uint16_t, 4))(65530UL)), 0UL)).s6734352430507704))).s86, ((VECTOR(uint16_t, 2))(0xF2EFL))))), 0xA47CL, 6UL)).y) < 65530UL);
    return l_282;
}


/* ------------------------------------------ */
/* 
 * reads : p_293->g_94.f1 p_293->g_10 p_293->g_58 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_comm_values p_293->g_129
 * writes: p_293->g_94.f1 p_293->g_56 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_58
 */
int8_t ** func_26(int8_t ** p_27, struct S3 * p_293)
{ /* block id: 55 */
    int32_t *l_176 = (void*)0;
    int8_t **l_255 = &p_293->g_13;
    for (p_293->g_94.f1 = 0; (p_293->g_94.f1 <= (-15)); p_293->g_94.f1 = safe_sub_func_int64_t_s_s(p_293->g_94.f1, 8))
    { /* block id: 58 */
        int64_t l_177 = 0L;
        (*p_293->g_129) = func_47(l_176, p_293);
        if (l_177)
            continue;
    }
    if ((atomic_inc(&p_293->g_atomic_input[98 * get_linear_group_id() + 32]) == 2))
    { /* block id: 63 */
        VECTOR(int32_t, 4) l_179 = (VECTOR(int32_t, 4))(0x6D457A83L, (VECTOR(int32_t, 2))(0x6D457A83L, 0x25EB1464L), 0x25EB1464L);
        int32_t *l_178[10][5][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        union U2 l_180[4] = {{-1L},{-1L},{-1L},{-1L}};
        int32_t l_181 = 0x6CB2F27AL;
        int i, j, k;
        l_178[9][1][0] = (void*)0;
        if ((l_180[0] , l_181))
        { /* block id: 65 */
            VECTOR(int8_t, 8) l_184 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
            int8_t *l_183 = (void*)0;
            int8_t **l_182 = &l_183;
            int8_t **l_185 = &l_183;
            uint64_t l_186 = 18446744073709551615UL;
            uint32_t l_187 = 4294967289UL;
            int16_t l_188[2][2] = {{(-9L),(-9L)},{(-9L),(-9L)}};
            int64_t l_189 = (-8L);
            int32_t l_190 = 0x3DE48756L;
            uint32_t l_191 = 0x5ED8C95FL;
            int i, j;
            l_185 = (l_182 = (void*)0);
            l_187 = l_186;
            --l_191;
            l_190 &= (-4L);
        }
        else
        { /* block id: 71 */
            uint16_t l_194 = 0xC99DL;
            int32_t l_195 = 1L;
            if (((l_194 = 0x30B6E22CL) , l_195))
            { /* block id: 73 */
                int16_t l_196 = 1L;
                l_196 ^= ((VECTOR(int32_t, 2))(0L, 1L)).odd;
            }
            else
            { /* block id: 75 */
                VECTOR(int32_t, 4) l_197 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7C88F511L), 0x7C88F511L);
                uint16_t l_198 = 1UL;
                int i;
                l_198 = (l_197.x = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_197.xy)), 0x112C0037L, 1L)).zwyxxyzwzxxywzwy)).s8);
            }
            for (l_195 = (-30); (l_195 <= (-1)); l_195++)
            { /* block id: 81 */
                VECTOR(int32_t, 2) l_201 = (VECTOR(int32_t, 2))(1L, 0x7C940DABL);
                uint64_t l_202 = 18446744073709551607UL;
                uint64_t l_203 = 0x47A815BEFCB44326L;
                union U2 l_204 = {0x7C0601BAD9EB1176L};/* VOLATILE GLOBAL l_204 */
                uint32_t l_205[9][8][3] = {{{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL}},{{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL}},{{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL}},{{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL}},{{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL}},{{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL}},{{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL}},{{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL}},{{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL},{0xA2E6060EL,4294967295UL,4294967295UL}}};
                VECTOR(uint16_t, 2) l_206 = (VECTOR(uint16_t, 2))(0UL, 65535UL);
                int32_t l_207 = 0x32470110L;
                uint8_t l_208 = 0x8FL;
                int8_t l_209 = 0x67L;
                VECTOR(uint16_t, 2) l_210 = (VECTOR(uint16_t, 2))(0xB343L, 0x3C63L);
                VECTOR(uint16_t, 8) l_211 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x6110L), 0x6110L), 0x6110L, 1UL, 0x6110L);
                VECTOR(uint16_t, 4) l_212 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x0861L), 0x0861L);
                VECTOR(uint16_t, 8) l_213 = (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xDAD6L), 0xDAD6L), 0xDAD6L, 65531UL, 0xDAD6L);
                int32_t *l_214 = (void*)0;
                int32_t *l_215 = (void*)0;
                uint32_t l_216[6];
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_216[i] = 4294967295UL;
                l_202 &= ((VECTOR(int32_t, 8))(l_201.yyyyxxyx)).s7;
                l_215 = (((l_203 &= 0x09FE7AD20B73E2F3L) , l_204) , (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0x40E0L, l_205[1][3][0], ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_206.xy)))), (l_209 = (l_194 ^= (l_207 , l_208))), ((VECTOR(uint16_t, 2))(l_210.yx)), ((VECTOR(uint16_t, 4))(0xBAA3L, 65528UL, 0x05BCL, 0xA83EL)), 0xCA97L, 1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_211.s42603776)).s02)).yyyxxyyy))), (uint16_t)(l_194 = 0UL), (uint16_t)((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(0x66CFL, 1UL)).yyxyxxxxyxyxyyxx, ((VECTOR(uint16_t, 8))(l_212.yzwywwyy)).s3776415267511113))).s2a12, ((VECTOR(uint16_t, 4))(l_213.s1574))))).z))).s67)), 0x565BL)).s5afa)).z , l_214));
                if ((l_201.x = l_216[0]))
                { /* block id: 89 */
                    int32_t l_217 = (-1L);
                    uint32_t l_218 = 4294967292UL;
                    VECTOR(int32_t, 8) l_219 = (VECTOR(int32_t, 8))(0x3089C775L, (VECTOR(int32_t, 4))(0x3089C775L, (VECTOR(int32_t, 2))(0x3089C775L, 0x197AD65FL), 0x197AD65FL), 0x197AD65FL, 0x3089C775L, 0x197AD65FL);
                    VECTOR(int32_t, 2) l_220 = (VECTOR(int32_t, 2))(1L, 0x22CCC344L);
                    int8_t l_221[5] = {0x4DL,0x4DL,0x4DL,0x4DL,0x4DL};
                    int i;
                    l_218 = l_217;
                    if (((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_219.s70415234)).s5, 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_220.yxyy)))), 0x346A795FL, 0x15782ED9L)).lo, (int32_t)l_221[3]))).w)
                    { /* block id: 91 */
                        int16_t l_222 = (-2L);
                        int32_t l_223[6] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                        uint16_t l_224[4] = {0x680DL,0x680DL,0x680DL,0x680DL};
                        VECTOR(int32_t, 4) l_225 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-1L)), (-1L));
                        int8_t l_226 = 0x2FL;
                        uint16_t l_227 = 0x1C6BL;
                        int16_t l_228 = 0x2227L;
                        int i;
                        l_224[3] = (l_223[1] = l_222);
                        l_226 = ((VECTOR(int32_t, 4))(l_225.zywz)).z;
                        l_225.x ^= l_227;
                        l_223[1] |= (l_225.y ^= l_228);
                    }
                    else
                    { /* block id: 98 */
                        uint64_t l_229 = 7UL;
                        int32_t l_232[1][5];
                        int32_t l_233 = (-9L);
                        int32_t *l_234[9];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_232[i][j] = 0L;
                        }
                        for (i = 0; i < 9; i++)
                            l_234[i] = (void*)0;
                        l_229--;
                        l_233 = l_232[0][1];
                        l_215 = l_234[6];
                        l_178[6][1][2] = (void*)0;
                    }
                }
                else
                { /* block id: 104 */
                    uint8_t l_235[6] = {0xB5L,0xB5L,0xB5L,0xB5L,0xB5L,0xB5L};
                    int16_t l_238[5] = {0x2746L,0x2746L,0x2746L,0x2746L,0x2746L};
                    uint16_t l_239 = 65531UL;
                    uint16_t l_240 = 0x6525L;
                    int i;
                    l_235[0]--;
                    l_240 |= (l_238[4] , l_239);
                }
            }
            l_195 = 0x616F5779L;
        }
        for (l_180[0].f2 = (-6); (l_180[0].f2 == 56); l_180[0].f2++)
        { /* block id: 113 */
            VECTOR(int32_t, 2) l_243 = (VECTOR(int32_t, 2))(0x752853B9L, 0x5A247D1CL);
            int8_t l_244 = 0L;
            int32_t *l_245 = (void*)0;
            uint32_t l_246 = 0UL;
            int i;
            l_244 = ((VECTOR(int32_t, 8))(l_243.xyxyxxxx)).s5;
            l_178[9][1][0] = l_245;
            l_243.x ^= l_246;
            for (l_243.y = 0; (l_243.y >= (-16)); l_243.y = safe_sub_func_uint16_t_u_u(l_243.y, 5))
            { /* block id: 119 */
                int32_t l_249 = (-10L);
                uint32_t l_250[2][5] = {{0x2CAED801L,0x2CAED801L,0x2CAED801L,0x2CAED801L,0x2CAED801L},{0x2CAED801L,0x2CAED801L,0x2CAED801L,0x2CAED801L,0x2CAED801L}};
                int32_t l_254[1];
                int32_t *l_253 = &l_254[0];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_254[i] = 0x0FBD0E14L;
                --l_250[1][1];
                l_178[9][1][0] = l_253;
            }
        }
        unsigned int result = 0;
        result += l_179.w;
        result += l_179.z;
        result += l_179.y;
        result += l_179.x;
        int l_180_i0;
        for (l_180_i0 = 0; l_180_i0 < 4; l_180_i0++) {
            result += l_180[l_180_i0].f0;
            result += l_180[l_180_i0].f1;
            result += l_180[l_180_i0].f2;
            result += l_180[l_180_i0].f3;
        }
        result += l_181;
        atomic_add(&p_293->g_special_values[98 * get_linear_group_id() + 32], result);
    }
    else
    { /* block id: 124 */
        (1 + 1);
    }
    return l_255;
}


/* ------------------------------------------ */
/* 
 * reads : p_293->g_21 p_293->g_10 p_293->g_58 p_293->g_63 p_293->g_71 p_293->g_comm_values p_293->g_17 p_293->g_79 p_293->g_81 p_293->g_83 p_293->l_comm_values p_293->g_89 p_293->g_94 p_293->g_106 p_293->g_94.f0 p_293->g_114 p_293->g_116 p_293->g_133 p_293->g_158 p_293->g_11 p_293->g_56
 * writes: p_293->g_56 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_17 p_293->g_58 p_293->g_114 p_293->g_116 p_293->g_133 p_293->g_comm_values p_293->l_comm_values p_293->g_157 p_293->g_10 p_293->g_13
 */
uint64_t  func_31(int8_t  p_32, struct S3 * p_293)
{ /* block id: 10 */
    int32_t l_34 = (-1L);
    VECTOR(uint32_t, 8) l_35 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 5UL), 5UL), 5UL, 4294967295UL, 5UL);
    int32_t l_36 = (-1L);
    int8_t *l_132 = &p_293->g_133;
    int32_t l_134[3][2] = {{5L,0L},{5L,0L},{5L,0L}};
    int64_t *l_135 = (void*)0;
    int64_t *l_136 = (void*)0;
    int64_t *l_137[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int16_t *l_142 = (void*)0;
    VECTOR(int16_t, 16) l_151 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L), (VECTOR(int16_t, 2))((-1L), (-10L)), (VECTOR(int16_t, 2))((-1L), (-10L)), (-1L), (-10L), (-1L), (-10L));
    uint32_t *l_154 = (void*)0;
    uint32_t *l_155 = (void*)0;
    uint32_t *l_156 = &p_293->g_157[2];
    int i, j;
    l_34 = p_32;
    l_134[0][0] = ((l_36 = ((p_32 > ((VECTOR(uint32_t, 16))(l_35.s0203256476570703)).s5) || 6UL)) & (safe_sub_func_int8_t_s_s(((*l_132) &= func_39(func_41(func_44(&p_293->g_13, (p_293->g_21.z , p_32), p_293), p_293->g_94, p_293), p_293)), p_293->g_comm_values[p_293->tid])));
    l_134[2][0] |= 0x03789DB1L;
    l_134[1][1] = (((*p_293->g_56) = func_6((p_293->g_comm_values[p_293->tid] = 0L), ((safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((l_134[0][0] &= p_293->g_83.y), 10)) , (l_35.s6 <= ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s((p_293->g_81.w | (p_293->l_comm_values[(safe_mod_func_uint32_t_u_u(p_293->tid, 112))] = 0x6851F4452DAF4E41L)), ((safe_add_func_uint16_t_u_u(l_134[0][0], (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 8))(l_151.scd3e02f5)), 0x770FL, (safe_sub_func_int16_t_s_s(((l_36 ^= l_134[0][0]) || ((-1L) < ((((*l_156) = 0x0717A801L) & 0x151B0854L) | p_293->g_158))), l_35.s0)), l_151.s7, 0x072BL, p_32, 0L, 0x72E5L)).odd)).s47)).yyyy, ((VECTOR(int16_t, 4))(0x1611L))))).x, 0x6964L, p_293->g_94.f0, (-1L), ((VECTOR(int16_t, 2))(0x100FL)), 0x30C0L)), ((VECTOR(int16_t, 4))(9L)), ((VECTOR(int16_t, 4))(0x5BE2L)))).sf && p_293->g_116))) == 0UL))) >= p_293->g_81.y) < p_32), p_32)), 3)) && GROUP_DIVERGE(0, 1)))), p_293->g_81.z)) & p_293->g_94.f0), p_293)) == (void*)0);
    return l_35.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_293->g_81
 * writes: p_293->g_58
 */
int8_t  func_39(int8_t ** p_40, struct S3 * p_293)
{ /* block id: 36 */
    int32_t **l_117 = &p_293->g_58;
    int32_t *l_118 = (void*)0;
    int32_t l_119 = 0x07EF5B1CL;
    int32_t *l_120 = (void*)0;
    int32_t l_121 = 0x796EE1C1L;
    int32_t *l_122 = &l_121;
    int32_t *l_123 = (void*)0;
    int32_t *l_124[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_125 = 0xED92L;
    int32_t ***l_130[6][3] = {{(void*)0,&l_117,(void*)0},{(void*)0,&l_117,(void*)0},{(void*)0,&l_117,(void*)0},{(void*)0,&l_117,(void*)0},{(void*)0,&l_117,(void*)0},{(void*)0,&l_117,(void*)0}};
    int32_t **l_131 = &l_123;
    int i, j;
    (*l_117) = (void*)0;
    ++l_125;
    l_131 = &p_293->g_58;
    return p_293->g_81.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_293->g_21 p_293->g_106 p_293->g_58 p_293->g_94.f0 p_293->g_79 p_293->g_114 p_293->g_116
 * writes: p_293->g_58 p_293->g_114 p_293->g_116
 */
int8_t ** func_41(int64_t  p_42, union U0  p_43, struct S3 * p_293)
{ /* block id: 30 */
    int32_t *l_95 = &p_293->g_94.f0;
    int32_t **l_96 = &p_293->g_58;
    uint16_t *l_97[6][7] = {{(void*)0,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,(void*)0},{(void*)0,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,(void*)0},{(void*)0,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,(void*)0},{(void*)0,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,(void*)0},{(void*)0,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,(void*)0},{(void*)0,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,&p_293->g_63,(void*)0}};
    uint16_t **l_98 = &l_97[5][5];
    uint16_t *l_99 = &p_293->g_63;
    int32_t l_112 = 5L;
    int32_t *l_113 = &p_293->g_114;
    int32_t *l_115 = &p_293->g_116;
    int i, j;
    (*l_96) = l_95;
    (*l_115) &= (((((*l_113) ^= (((((*l_98) = l_97[5][5]) != l_99) & (FAKE_DIVERGE(p_293->local_2_offset, get_local_id(2), 10) || FAKE_DIVERGE(p_293->group_0_offset, get_group_id(0), 10))) <= (0UL <= (safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((p_42 || p_293->g_21.x) , &l_99) == p_293->g_106) < ((!p_42) , (safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((**l_96), l_112)), p_293->g_79.sd)))), GROUP_DIVERGE(0, 1))), p_293->g_21.z)) && p_43.f0), 0x50DBL))))) == p_43.f0) , (*l_96)) == (*l_96));
    return &p_293->g_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_293->g_10 p_293->g_58 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_comm_values p_293->g_17 p_293->g_79 p_293->g_81 p_293->g_83 p_293->l_comm_values p_293->g_89
 * writes: p_293->g_56 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_17 p_293->g_58
 */
int64_t  func_44(int8_t ** p_45, uint32_t  p_46, struct S3 * p_293)
{ /* block id: 13 */
    int32_t *l_49 = (void*)0;
    int32_t **l_91 = &p_293->g_58;
    (*l_91) = func_47(l_49, p_293);
    for (p_293->g_63 = 21; (p_293->g_63 < 42); p_293->g_63 = safe_add_func_int64_t_s_s(p_293->g_63, 3))
    { /* block id: 26 */
        return p_293->g_81.z;
    }
    return p_293->g_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_293->g_10 p_293->g_58 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_comm_values p_293->g_17 p_293->g_79 p_293->g_81 p_293->g_83 p_293->l_comm_values p_293->g_89
 * writes: p_293->g_56 p_293->g_63 p_293->g_71 p_293->g_21 p_293->g_17
 */
int32_t * func_47(int32_t * p_48, struct S3 * p_293)
{ /* block id: 14 */
    int8_t **l_55[1][5][5] = {{{&p_293->g_13,&p_293->g_11,&p_293->g_11,&p_293->g_11,&p_293->g_13},{&p_293->g_13,&p_293->g_11,&p_293->g_11,&p_293->g_11,&p_293->g_13},{&p_293->g_13,&p_293->g_11,&p_293->g_11,&p_293->g_11,&p_293->g_13},{&p_293->g_13,&p_293->g_11,&p_293->g_11,&p_293->g_11,&p_293->g_13},{&p_293->g_13,&p_293->g_11,&p_293->g_11,&p_293->g_11,&p_293->g_13}}};
    int8_t ***l_54[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t **l_57[3][9][7] = {{{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13}},{{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13}},{{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13},{(void*)0,&p_293->g_13,&p_293->g_13,&p_293->g_11,&p_293->g_13,&p_293->g_11,&p_293->g_13}}};
    uint16_t *l_61 = (void*)0;
    uint16_t *l_62 = &p_293->g_63;
    int32_t l_66 = 0x36A5F680L;
    uint32_t l_69 = 0xC8A85F87L;
    int64_t *l_70 = &p_293->g_71;
    int32_t *l_74[6];
    VECTOR(int32_t, 16) l_75 = (VECTOR(int32_t, 16))(0x6EC8B7CFL, (VECTOR(int32_t, 4))(0x6EC8B7CFL, (VECTOR(int32_t, 2))(0x6EC8B7CFL, 1L), 1L), 1L, 0x6EC8B7CFL, 1L, (VECTOR(int32_t, 2))(0x6EC8B7CFL, 1L), (VECTOR(int32_t, 2))(0x6EC8B7CFL, 1L), 0x6EC8B7CFL, 1L, 0x6EC8B7CFL, 1L);
    int32_t l_76 = 0x4ECF8258L;
    int32_t l_77 = (-5L);
    VECTOR(int16_t, 8) l_78 = (VECTOR(int16_t, 8))(0x0BC9L, (VECTOR(int16_t, 4))(0x0BC9L, (VECTOR(int16_t, 2))(0x0BC9L, 0x7CC2L), 0x7CC2L), 0x7CC2L, 0x0BC9L, 0x7CC2L);
    VECTOR(int16_t, 2) l_80 = (VECTOR(int16_t, 2))(0L, (-10L));
    VECTOR(int8_t, 16) l_82 = (VECTOR(int8_t, 16))(0x3DL, (VECTOR(int8_t, 4))(0x3DL, (VECTOR(int8_t, 2))(0x3DL, 0x59L), 0x59L), 0x59L, 0x3DL, 0x59L, (VECTOR(int8_t, 2))(0x3DL, 0x59L), (VECTOR(int8_t, 2))(0x3DL, 0x59L), 0x3DL, 0x59L, 0x3DL, 0x59L);
    VECTOR(int8_t, 2) l_84 = (VECTOR(int8_t, 2))(2L, 0x05L);
    VECTOR(int16_t, 8) l_87 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 8L), 8L), 8L, 1L, 8L);
    VECTOR(int16_t, 2) l_88 = (VECTOR(int16_t, 2))(1L, 0x64A4L);
    uint64_t l_90 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_74[i] = (void*)0;
    p_293->g_21.x &= (((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((p_293->g_56 = &p_293->g_13) == l_57[2][6][1]) <= p_293->g_10), ((VECTOR(int16_t, 4))((-1L), ((VECTOR(int16_t, 2))(0x6582L, 0x56B0L)), 0L)).x)), (p_293->g_58 == p_293->g_58))) <= ((safe_mul_func_uint16_t_u_u((--(*l_62)), (((*l_70) = ((GROUP_DIVERGE(2, 1) & l_66) , (safe_add_func_int32_t_s_s(l_69, 3L)))) , ((((safe_rshift_func_int8_t_s_u((l_66 = 0L), 0)) == p_293->g_71) , 0x224A103CL) == (-1L))))) <= 0x45L)) ^ 0x451EA71BL);
    l_90 = (l_75.s5 , (p_293->g_comm_values[p_293->tid] > ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(((p_293->g_17 ^= l_76) <= l_77), ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_78.s20)))).xyxx)), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_293->g_79.sbe1d701d6bccd07c)).sa36f)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(l_80.yyyy)), ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(p_293->g_81.zzwz)).odd, ((VECTOR(int8_t, 2))(0x13L, 1L))))).xxyyyyyx))).s0540726272661472)).s8f08, ((VECTOR(int8_t, 8))(l_82.saf2d809a)).odd))).odd, ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 2))(1L, (-1L))), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(p_293->g_83.xyxxxyxy)).s26, ((VECTOR(int8_t, 8))(l_84.xxyxyyyy)).s47))))))))).xxyx))), (safe_mod_func_int8_t_s_s((-3L), p_293->l_comm_values[(safe_mod_func_uint32_t_u_u(p_293->tid, 112))])), 0L, 0L, (-8L))).lo))), ((VECTOR(int16_t, 2))(l_87.s16)).yyyy))), 0x60F9L, 0x5DD0L, (-1L))).s5504374406520401, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_88.yxyyyxyx)).s06)).xxyxxyyxyyyyxxyx, ((VECTOR(int16_t, 2))(p_293->g_89.s3b)).yyyyxxyxxyyxxxyy))).se));
    return p_293->g_58;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[112];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 112; i++)
            l_comm_values[i] = 1;
    struct S3 c_294;
    struct S3* p_293 = &c_294;
    struct S3 c_295 = {
        0x05B8B78ACC4B7C70L, // p_293->g_10
        (void*)0, // p_293->g_11
        (void*)0, // p_293->g_13
        0x16L, // p_293->g_17
        (VECTOR(int32_t, 4))(0x06C0F1A0L, (VECTOR(int32_t, 2))(0x06C0F1A0L, 0x7CBB4028L), 0x7CBB4028L), // p_293->g_21
        (void*)0, // p_293->g_56
        (void*)0, // p_293->g_58
        65529UL, // p_293->g_63
        7L, // p_293->g_71
        (VECTOR(int16_t, 16))(0x6E60L, (VECTOR(int16_t, 4))(0x6E60L, (VECTOR(int16_t, 2))(0x6E60L, 0L), 0L), 0L, 0x6E60L, 0L, (VECTOR(int16_t, 2))(0x6E60L, 0L), (VECTOR(int16_t, 2))(0x6E60L, 0L), 0x6E60L, 0L, 0x6E60L, 0L), // p_293->g_79
        (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, 0x70L), 0x70L), // p_293->g_81
        (VECTOR(int8_t, 2))(0x68L, 0x38L), // p_293->g_83
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2608L), 0x2608L), 0x2608L, (-1L), 0x2608L, (VECTOR(int16_t, 2))((-1L), 0x2608L), (VECTOR(int16_t, 2))((-1L), 0x2608L), (-1L), 0x2608L, (-1L), 0x2608L), // p_293->g_89
        {1L}, // p_293->g_94
        (void*)0, // p_293->g_107
        &p_293->g_107, // p_293->g_106
        0x472CAAA7L, // p_293->g_114
        (-5L), // p_293->g_116
        &p_293->g_58, // p_293->g_129
        {&p_293->g_129,&p_293->g_129,&p_293->g_129}, // p_293->g_128
        4L, // p_293->g_133
        {0UL,7UL,0UL,0UL,7UL,0UL,0UL,7UL,0UL}, // p_293->g_157
        0xFAL, // p_293->g_158
        (VECTOR(int32_t, 2))(0x766EA20AL, 6L), // p_293->g_167
        (void*)0, // p_293->g_280
        0x0F2240E8L, // p_293->g_289
        0, // p_293->v_collective
        sequence_input[get_global_id(0)], // p_293->global_0_offset
        sequence_input[get_global_id(1)], // p_293->global_1_offset
        sequence_input[get_global_id(2)], // p_293->global_2_offset
        sequence_input[get_local_id(0)], // p_293->local_0_offset
        sequence_input[get_local_id(1)], // p_293->local_1_offset
        sequence_input[get_local_id(2)], // p_293->local_2_offset
        sequence_input[get_group_id(0)], // p_293->group_0_offset
        sequence_input[get_group_id(1)], // p_293->group_1_offset
        sequence_input[get_group_id(2)], // p_293->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 112)), permutations[0][get_linear_local_id()])), // p_293->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_294 = c_295;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_293);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_293->g_10, "p_293->g_10", print_hash_value);
    transparent_crc(p_293->g_17, "p_293->g_17", print_hash_value);
    transparent_crc(p_293->g_21.x, "p_293->g_21.x", print_hash_value);
    transparent_crc(p_293->g_21.y, "p_293->g_21.y", print_hash_value);
    transparent_crc(p_293->g_21.z, "p_293->g_21.z", print_hash_value);
    transparent_crc(p_293->g_21.w, "p_293->g_21.w", print_hash_value);
    transparent_crc(p_293->g_63, "p_293->g_63", print_hash_value);
    transparent_crc(p_293->g_71, "p_293->g_71", print_hash_value);
    transparent_crc(p_293->g_79.s0, "p_293->g_79.s0", print_hash_value);
    transparent_crc(p_293->g_79.s1, "p_293->g_79.s1", print_hash_value);
    transparent_crc(p_293->g_79.s2, "p_293->g_79.s2", print_hash_value);
    transparent_crc(p_293->g_79.s3, "p_293->g_79.s3", print_hash_value);
    transparent_crc(p_293->g_79.s4, "p_293->g_79.s4", print_hash_value);
    transparent_crc(p_293->g_79.s5, "p_293->g_79.s5", print_hash_value);
    transparent_crc(p_293->g_79.s6, "p_293->g_79.s6", print_hash_value);
    transparent_crc(p_293->g_79.s7, "p_293->g_79.s7", print_hash_value);
    transparent_crc(p_293->g_79.s8, "p_293->g_79.s8", print_hash_value);
    transparent_crc(p_293->g_79.s9, "p_293->g_79.s9", print_hash_value);
    transparent_crc(p_293->g_79.sa, "p_293->g_79.sa", print_hash_value);
    transparent_crc(p_293->g_79.sb, "p_293->g_79.sb", print_hash_value);
    transparent_crc(p_293->g_79.sc, "p_293->g_79.sc", print_hash_value);
    transparent_crc(p_293->g_79.sd, "p_293->g_79.sd", print_hash_value);
    transparent_crc(p_293->g_79.se, "p_293->g_79.se", print_hash_value);
    transparent_crc(p_293->g_79.sf, "p_293->g_79.sf", print_hash_value);
    transparent_crc(p_293->g_81.x, "p_293->g_81.x", print_hash_value);
    transparent_crc(p_293->g_81.y, "p_293->g_81.y", print_hash_value);
    transparent_crc(p_293->g_81.z, "p_293->g_81.z", print_hash_value);
    transparent_crc(p_293->g_81.w, "p_293->g_81.w", print_hash_value);
    transparent_crc(p_293->g_83.x, "p_293->g_83.x", print_hash_value);
    transparent_crc(p_293->g_83.y, "p_293->g_83.y", print_hash_value);
    transparent_crc(p_293->g_89.s0, "p_293->g_89.s0", print_hash_value);
    transparent_crc(p_293->g_89.s1, "p_293->g_89.s1", print_hash_value);
    transparent_crc(p_293->g_89.s2, "p_293->g_89.s2", print_hash_value);
    transparent_crc(p_293->g_89.s3, "p_293->g_89.s3", print_hash_value);
    transparent_crc(p_293->g_89.s4, "p_293->g_89.s4", print_hash_value);
    transparent_crc(p_293->g_89.s5, "p_293->g_89.s5", print_hash_value);
    transparent_crc(p_293->g_89.s6, "p_293->g_89.s6", print_hash_value);
    transparent_crc(p_293->g_89.s7, "p_293->g_89.s7", print_hash_value);
    transparent_crc(p_293->g_89.s8, "p_293->g_89.s8", print_hash_value);
    transparent_crc(p_293->g_89.s9, "p_293->g_89.s9", print_hash_value);
    transparent_crc(p_293->g_89.sa, "p_293->g_89.sa", print_hash_value);
    transparent_crc(p_293->g_89.sb, "p_293->g_89.sb", print_hash_value);
    transparent_crc(p_293->g_89.sc, "p_293->g_89.sc", print_hash_value);
    transparent_crc(p_293->g_89.sd, "p_293->g_89.sd", print_hash_value);
    transparent_crc(p_293->g_89.se, "p_293->g_89.se", print_hash_value);
    transparent_crc(p_293->g_89.sf, "p_293->g_89.sf", print_hash_value);
    transparent_crc(p_293->g_94.f0, "p_293->g_94.f0", print_hash_value);
    transparent_crc(p_293->g_114, "p_293->g_114", print_hash_value);
    transparent_crc(p_293->g_116, "p_293->g_116", print_hash_value);
    transparent_crc(p_293->g_133, "p_293->g_133", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_293->g_157[i], "p_293->g_157[i]", print_hash_value);

    }
    transparent_crc(p_293->g_158, "p_293->g_158", print_hash_value);
    transparent_crc(p_293->g_167.x, "p_293->g_167.x", print_hash_value);
    transparent_crc(p_293->g_167.y, "p_293->g_167.y", print_hash_value);
    transparent_crc(p_293->g_289, "p_293->g_289", print_hash_value);
    transparent_crc(p_293->v_collective, "p_293->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 98; i++)
            transparent_crc(p_293->g_special_values[i + 98 * get_linear_group_id()], "p_293->g_special_values[i + 98 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_293->l_comm_values[get_linear_local_id()], "p_293->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_293->g_comm_values[get_linear_group_id() * 112 + get_linear_local_id()], "p_293->g_comm_values[get_linear_group_id() * 112 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
