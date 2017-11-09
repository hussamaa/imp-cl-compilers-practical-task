// --atomics 76 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 28,62,5 -l 1,31,5
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

__constant uint32_t permutations[10][155] = {
{20,133,146,125,41,33,1,44,98,22,9,93,52,136,71,88,58,39,121,109,63,150,77,149,79,28,2,114,86,48,151,137,59,142,144,82,131,108,42,43,53,4,24,129,111,97,139,60,26,90,25,101,38,134,40,84,115,135,29,67,21,145,64,127,75,80,113,105,37,11,3,65,23,96,19,85,12,126,30,70,62,56,0,68,78,45,74,50,95,152,100,27,104,141,107,128,110,15,99,6,7,16,153,143,46,154,103,92,18,17,87,123,32,73,120,61,140,130,124,118,69,147,81,34,89,49,36,112,35,102,54,106,57,51,148,72,14,47,83,5,31,8,116,55,117,91,119,66,76,10,132,94,13,122,138}, // permutation 0
{154,8,117,12,99,64,13,143,150,27,62,111,72,122,59,145,61,4,40,82,30,37,119,75,91,138,63,120,81,70,105,47,31,56,151,104,11,149,90,107,44,118,144,46,130,38,23,43,67,42,92,132,14,78,110,5,0,146,89,98,87,17,35,102,22,20,41,26,60,65,52,141,48,115,84,148,55,136,127,88,76,142,103,109,33,74,121,83,134,139,79,93,129,114,135,18,116,101,54,77,112,68,53,57,36,140,131,19,10,21,73,147,152,51,29,133,16,45,95,50,49,124,3,69,153,94,66,2,123,7,137,80,108,96,1,39,128,15,106,85,9,113,34,32,6,25,125,97,24,28,58,71,126,100,86}, // permutation 1
{113,9,143,139,81,48,41,71,110,69,90,27,11,129,22,4,87,63,119,93,97,6,88,107,51,19,12,148,154,77,112,45,49,83,104,52,109,116,80,57,3,14,147,101,125,73,85,92,146,33,137,133,62,23,127,36,5,136,68,145,120,70,108,39,31,114,144,75,15,149,132,82,79,58,115,99,128,76,111,131,59,64,38,67,61,138,134,152,21,60,89,94,122,35,26,65,55,47,46,86,24,20,123,100,43,103,34,130,8,124,105,7,102,151,126,17,28,25,118,50,84,91,141,16,140,18,150,121,98,32,106,53,2,142,56,37,95,54,153,42,30,72,74,40,135,78,66,44,96,13,29,117,10,1,0}, // permutation 2
{18,10,2,105,136,33,11,138,93,45,60,35,52,72,75,42,58,81,113,67,103,48,99,77,108,150,28,111,91,106,122,116,66,39,79,41,110,115,96,126,117,13,38,64,24,125,89,16,47,44,51,12,56,29,85,145,127,25,70,90,19,83,151,114,144,34,88,78,71,15,61,57,26,148,133,40,69,154,63,128,22,37,82,68,46,53,49,54,132,30,95,146,27,98,119,14,74,59,131,31,21,149,4,118,80,87,76,130,97,147,62,104,43,65,32,134,8,142,121,7,143,94,20,86,152,109,129,5,6,107,123,141,124,9,112,36,73,101,139,1,3,50,55,17,92,137,153,23,84,0,135,120,100,102,140}, // permutation 3
{60,90,32,67,42,52,135,83,51,50,53,36,110,146,45,2,80,134,34,16,105,88,99,103,100,82,15,20,43,22,123,131,116,77,95,87,38,143,72,108,47,94,31,153,4,35,17,54,109,19,132,140,33,56,84,74,59,150,118,9,147,85,57,78,48,126,66,30,148,21,121,89,114,37,130,152,18,86,125,120,65,136,26,107,139,133,117,46,112,98,55,137,27,129,122,124,0,25,149,62,91,93,64,68,151,154,142,58,28,40,23,63,39,111,104,24,14,115,70,138,127,6,96,1,61,128,10,144,92,102,79,69,44,12,97,141,81,8,73,13,101,119,5,3,113,29,49,7,76,41,75,145,106,71,11}, // permutation 4
{75,29,150,108,22,20,119,136,115,9,117,55,148,154,79,93,74,127,112,16,76,138,72,44,14,45,46,92,67,121,110,102,64,106,4,149,49,83,141,73,33,35,126,131,43,90,3,101,41,27,88,143,15,122,42,113,37,70,6,95,19,116,69,24,89,50,114,57,87,86,104,68,105,12,137,118,32,140,77,51,146,85,100,82,80,78,34,152,144,130,91,31,63,30,109,65,153,58,142,1,36,59,66,123,11,96,103,132,56,10,25,5,81,18,26,17,2,135,129,28,60,94,8,124,107,7,21,147,84,133,99,98,111,40,145,0,38,54,71,48,151,134,23,53,13,62,125,97,61,47,39,128,139,120,52}, // permutation 5
{102,142,50,57,98,122,133,12,26,113,41,5,38,136,115,22,77,48,13,96,33,131,123,29,80,27,128,149,143,68,17,19,90,111,4,42,35,70,95,91,153,16,119,23,140,135,30,118,84,101,64,112,107,2,60,114,9,145,3,81,82,14,78,32,55,47,20,126,52,124,87,130,31,18,11,97,99,76,154,92,83,69,134,63,37,88,110,62,72,53,104,65,129,51,59,89,106,61,15,86,7,141,116,10,21,8,40,150,1,67,74,152,73,56,147,121,85,49,28,151,71,94,117,137,146,66,148,139,46,144,36,75,105,103,44,24,79,0,54,34,127,132,138,108,45,93,6,109,100,120,125,58,43,39,25}, // permutation 6
{152,139,56,75,107,86,73,67,129,103,7,90,28,93,154,21,18,88,38,48,33,30,63,41,0,145,137,140,118,101,84,94,1,141,128,114,80,27,97,83,45,58,104,23,108,70,74,50,37,46,49,81,40,26,52,136,124,144,148,43,31,44,102,127,54,111,116,92,142,47,119,19,151,121,98,87,66,105,11,76,85,2,123,64,89,95,59,29,110,3,100,62,112,55,51,78,57,125,99,122,10,131,60,20,69,126,17,25,82,5,115,4,42,117,109,113,72,130,32,96,132,65,35,133,120,15,36,138,150,135,9,147,68,106,8,153,77,39,143,24,14,53,22,16,149,12,34,146,91,134,61,6,13,71,79}, // permutation 7
{18,59,12,10,40,150,7,20,144,70,88,41,85,104,52,13,80,45,141,71,98,134,123,149,94,90,5,100,9,4,127,27,101,154,42,56,93,87,86,82,152,24,19,46,114,50,112,124,84,139,63,113,78,2,6,72,54,48,125,126,38,30,75,17,145,128,136,133,121,11,81,77,57,34,58,115,153,32,142,43,23,146,31,47,109,106,44,8,51,140,67,89,107,130,131,103,143,39,14,0,95,69,147,117,37,73,62,25,122,120,118,74,66,148,64,68,79,22,108,151,49,105,29,138,65,28,60,35,15,99,96,26,135,129,76,91,61,83,55,53,116,132,1,119,92,21,3,102,137,33,110,16,97,111,36}, // permutation 8
{117,46,115,91,38,28,88,85,118,110,68,129,37,30,3,66,65,71,106,13,151,42,134,143,9,52,32,145,101,146,87,17,78,25,83,150,12,70,58,128,77,94,121,108,10,104,81,33,47,59,139,98,0,62,8,119,86,18,34,79,5,1,127,133,16,72,54,45,96,93,7,64,50,29,116,149,49,40,136,144,4,35,60,36,15,22,135,19,67,90,80,153,125,130,123,6,100,74,126,107,152,56,82,97,2,105,109,27,24,89,132,76,20,114,103,122,138,43,113,11,131,53,51,48,148,14,140,124,102,26,75,99,112,95,39,73,111,63,120,84,23,69,147,142,57,31,41,154,92,61,55,141,137,21,44} // permutation 9
};

// Seed: 3863263434

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(int16_t, 4) g_8;
    int32_t g_21;
    uint8_t g_45;
    VECTOR(uint16_t, 16) g_61;
    VECTOR(int64_t, 4) g_66;
    uint8_t g_73;
    VECTOR(int32_t, 4) g_91;
    uint64_t g_95;
    uint64_t *g_96;
    int32_t *g_97;
    uint32_t g_100;
    int32_t **g_117;
    VECTOR(uint64_t, 4) g_151;
    VECTOR(uint64_t, 8) g_152;
    VECTOR(int64_t, 2) g_164;
    int16_t g_167;
    uint32_t g_172;
    int16_t g_217[9];
    int16_t g_274[4][5][3];
    int8_t g_280[2];
    VECTOR(int32_t, 4) g_283;
    uint32_t g_326;
    volatile int8_t **g_344;
    volatile int8_t ***g_343[5][4][10];
    int32_t g_350;
    volatile VECTOR(uint8_t, 2) g_384;
    VECTOR(int32_t, 4) g_393;
    VECTOR(int32_t, 16) g_394;
    VECTOR(int32_t, 16) g_398;
    int32_t g_412[7][2][5];
    int32_t g_427;
    volatile int64_t g_433;
    VECTOR(int16_t, 8) g_440;
    VECTOR(uint16_t, 8) g_444;
    VECTOR(uint8_t, 4) g_450;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_488);
int32_t * func_2(uint32_t  p_3, struct S0 * p_488);
int32_t  func_9(uint64_t  p_10, int32_t * p_11, uint32_t  p_12, struct S0 * p_488);
uint32_t  func_22(int16_t  p_23, struct S0 * p_488);
int8_t  func_24(int64_t  p_25, uint16_t  p_26, uint64_t  p_27, struct S0 * p_488);
int64_t  func_35(uint64_t  p_36, int32_t * p_37, struct S0 * p_488);
uint64_t  func_38(int32_t * p_39, struct S0 * p_488);
int32_t ** func_48(uint64_t  p_49, uint8_t  p_50, int32_t * p_51, int64_t  p_52, struct S0 * p_488);
int32_t * func_53(int32_t  p_54, struct S0 * p_488);
int64_t  func_56(int32_t  p_57, uint8_t  p_58, int16_t  p_59, int32_t * p_60, struct S0 * p_488);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_488->l_comm_values p_488->g_8 p_488->g_45 p_488->g_comm_values p_488->g_21 p_488->g_61 p_488->g_66 p_488->g_73 p_488->g_91 p_488->g_97 p_488->g_100 p_488->g_117 p_488->g_151 p_488->g_152 p_488->g_172 p_488->g_167 p_488->g_95 p_488->g_274 p_488->g_164 p_488->g_283 p_488->g_217 p_488->g_343 p_488->g_326 p_488->g_350 p_488->g_384 p_488->g_393 p_488->g_394 p_488->g_398 p_488->g_427 p_488->g_433 p_488->g_440 p_488->g_444 p_488->g_450 p_488->g_412 p_488->g_280
 * writes: p_488->g_45 p_488->g_21 p_488->g_73 p_488->g_95 p_488->g_96 p_488->l_comm_values p_488->g_100 p_488->g_117 p_488->g_97 p_488->g_61 p_488->g_164 p_488->g_172 p_488->g_152 p_488->g_66 p_488->g_167 p_488->g_274 p_488->g_91 p_488->g_280 p_488->g_283 p_488->g_151 p_488->g_326 p_488->g_350 p_488->g_412 p_488->g_427 p_488->g_217 p_488->g_440
 */
int32_t  func_1(struct S0 * p_488)
{ /* block id: 4 */
    int8_t l_4 = (-1L);
    int32_t **l_432 = &p_488->g_97;
    int16_t l_438 = 0x57ACL;
    VECTOR(int16_t, 2) l_439 = (VECTOR(int16_t, 2))((-2L), 0x585BL);
    VECTOR(int16_t, 16) l_441 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 3L), 3L), 3L, (-9L), 3L, (VECTOR(int16_t, 2))((-9L), 3L), (VECTOR(int16_t, 2))((-9L), 3L), (-9L), 3L, (-9L), 3L);
    VECTOR(uint8_t, 2) l_449 = (VECTOR(uint8_t, 2))(0x93L, 255UL);
    uint16_t *l_452[2];
    int32_t *l_475 = (void*)0;
    int32_t *l_476 = &p_488->g_350;
    int8_t l_477 = 0x49L;
    int32_t l_478 = (-1L);
    int64_t l_479 = 1L;
    int16_t *l_480 = (void*)0;
    int16_t *l_481 = &p_488->g_217[3];
    int32_t l_482 = 0L;
    uint64_t *l_483 = (void*)0;
    uint64_t *l_484 = (void*)0;
    uint64_t *l_485 = (void*)0;
    uint64_t *l_486[5][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t l_487 = (-4L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_452[i] = (void*)0;
    (*l_432) = func_2((p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))] >= l_4), p_488);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_488->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 155)), permutations[(safe_mod_func_uint32_t_u_u(((p_488->g_440.s6 = ((p_488->g_152.s3 = (p_488->g_433 >= (((safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((l_438 != (p_488->g_91.z & (p_488->g_151.x , (((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(0x67F2L, 0x2CE5L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x0CFDL, 0x78D5L)))), ((VECTOR(int16_t, 2))(0x44F7L, 0x3971L)), ((VECTOR(int16_t, 4))(l_439.xyxx)), 1L, ((VECTOR(int16_t, 2))(p_488->g_440.s77)), 0x7541L, 0x10D4L, 0x4B50L)), ((VECTOR(int16_t, 16))(l_441.s97eb79559c813a19))))).sd <= ((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_488->g_444.s05211061)).s3, (((((*l_481) = (p_488->g_274[3][1][2] = (safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(l_449.yyxx)).lo, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_488->g_450.yw)).yyyy)).xyxzxwwz)).s77, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((safe_unary_minus_func_int8_t_s((+(!p_488->g_66.y)))) , ((p_488->g_61.s2 = FAKE_DIVERGE(p_488->global_1_offset, get_global_id(1), 10)) > (safe_mod_func_uint16_t_u_u(((p_488->g_393.y , (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xEFL, 255UL)).xxyyyyyx)), (uint8_t)(safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((0x34L >= ((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((*l_476) = ((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int64_t_s_s((0UL ^ p_488->g_412[5][1][3]), p_488->g_450.x)) & p_488->g_100), 0x65E55C29L)), 0x4F73L)) <= GROUP_DIVERGE(1, 1))), 0x151FD4A6L)), p_488->g_394.s1)) <= (-1L))), p_488->g_393.w)) && 4294967288UL), 9L)) , 0UL) && l_477) | p_488->g_164.y), p_488->g_440.s6)) , p_488->g_326), p_488->g_440.s5)), (uint8_t)0x33L))).s6, l_478))) <= GROUP_DIVERGE(0, 1)), p_488->g_217[8])))), 0x0AL, 249UL, 0x3AL)).xzxwwwxxxxywzxwx)).scc))))).even, l_479)), 0x7537L)))) | p_488->g_91.y) ^ 0x7EL) > 0x0EFC4EF459C974ADL))) ^ p_488->g_394.se) ^ p_488->g_444.s7) , p_488->g_100))))) , (*l_476)) > p_488->g_283.x), l_482)), p_488->g_100)) | p_488->g_412[3][1][4]) | p_488->g_280[0]))) == 0xAEEAC4C70C971874L)) | GROUP_DIVERGE(0, 1)), 10))][(safe_mod_func_uint32_t_u_u(p_488->tid, 155))]));
    (*l_476) ^= l_487;
    return (*l_476);
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_8 p_488->g_45 p_488->g_comm_values p_488->g_21 p_488->g_61 p_488->l_comm_values p_488->g_66 p_488->g_73 p_488->g_91 p_488->g_97 p_488->g_100 p_488->g_117 p_488->g_151 p_488->g_152 p_488->g_172 p_488->g_167 p_488->g_95 p_488->g_274 p_488->g_164 p_488->g_283 p_488->g_217 p_488->g_343 p_488->g_326 p_488->g_350 p_488->g_384 p_488->g_393 p_488->g_394 p_488->g_398 p_488->g_427
 * writes: p_488->g_45 p_488->g_21 p_488->g_73 p_488->g_95 p_488->g_96 p_488->l_comm_values p_488->g_100 p_488->g_117 p_488->g_97 p_488->g_61 p_488->g_164 p_488->g_172 p_488->g_152 p_488->g_66 p_488->g_167 p_488->g_274 p_488->g_91 p_488->g_280 p_488->g_283 p_488->g_151 p_488->g_326 p_488->g_350 p_488->g_412 p_488->g_427
 */
int32_t * func_2(uint32_t  p_3, struct S0 * p_488)
{ /* block id: 5 */
    VECTOR(int16_t, 16) l_7 = (VECTOR(int16_t, 16))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x0A23L), 0x0A23L), 0x0A23L, (-7L), 0x0A23L, (VECTOR(int16_t, 2))((-7L), 0x0A23L), (VECTOR(int16_t, 2))((-7L), 0x0A23L), (-7L), 0x0A23L, (-7L), 0x0A23L);
    int32_t *l_20 = &p_488->g_21;
    int32_t *l_381 = &p_488->g_350;
    uint64_t *l_410[6] = {&p_488->g_95,&p_488->g_95,&p_488->g_95,&p_488->g_95,&p_488->g_95,&p_488->g_95};
    int64_t l_413 = (-5L);
    int i;
    for (p_3 = 0; (p_3 != 7); p_3++)
    { /* block id: 8 */
        uint8_t l_13 = 0x4FL;
        VECTOR(uint8_t, 16) l_14 = (VECTOR(uint8_t, 16))(0x1EL, (VECTOR(uint8_t, 4))(0x1EL, (VECTOR(uint8_t, 2))(0x1EL, 1UL), 1UL), 1UL, 0x1EL, 1UL, (VECTOR(uint8_t, 2))(0x1EL, 1UL), (VECTOR(uint8_t, 2))(0x1EL, 1UL), 0x1EL, 1UL, 0x1EL, 1UL);
        int32_t *l_349 = &p_488->g_350;
        VECTOR(int32_t, 16) l_395 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x303E503EL), 0x303E503EL), 0x303E503EL, 1L, 0x303E503EL, (VECTOR(int32_t, 2))(1L, 0x303E503EL), (VECTOR(int32_t, 2))(1L, 0x303E503EL), 1L, 0x303E503EL, 1L, 0x303E503EL);
        VECTOR(int32_t, 4) l_397 = (VECTOR(int32_t, 4))(0x74BC9DBFL, (VECTOR(int32_t, 2))(0x74BC9DBFL, 0x31F9D61DL), 0x31F9D61DL);
        VECTOR(int32_t, 4) l_399 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x48A5B444L), 0x48A5B444L);
        int8_t *l_401 = &p_488->g_280[0];
        uint64_t *l_420 = (void*)0;
        uint32_t l_424 = 0x7F94A540L;
        int i;
        if (((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_7.s371247ad)).lo)).even, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_488->g_8.zywzxyzy)).s24)).xyxyyxyyxyyyyxyx)))).odd)).s13))).xyyx, ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 2))(1UL, 0x008FL)).yxyxxxyy))).hi))).z)
        { /* block id: 9 */
            VECTOR(uint8_t, 8) l_15 = (VECTOR(uint8_t, 8))(0x88L, (VECTOR(uint8_t, 4))(0x88L, (VECTOR(uint8_t, 2))(0x88L, 0x73L), 0x73L), 0x73L, 0x88L, 0x73L);
            int8_t *l_400[3];
            int32_t *l_411[7] = {&p_488->g_412[5][1][3],&p_488->g_412[5][1][3],&p_488->g_412[5][1][3],&p_488->g_412[5][1][3],&p_488->g_412[5][1][3],&p_488->g_412[5][1][3],&p_488->g_412[5][1][3]};
            int i;
            for (i = 0; i < 3; i++)
                l_400[i] = &p_488->g_280[0];
            if (func_9((l_13 || ((p_488->g_8.z <= (((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(l_14.s658a)), ((VECTOR(uint8_t, 8))(l_15.s31477516)).lo))).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x55L, 1UL)).xyxxxyyyyxxxxyyx)).s9d))).odd , ((*l_20) = ((safe_add_func_int8_t_s_s(0x5CL, (safe_add_func_uint32_t_u_u((((void*)0 == l_20) , func_22((func_24((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u((((func_35(func_38(l_20, p_488), p_488->g_97, p_488) && l_15.s4) | 0UL) , GROUP_DIVERGE(2, 1)))) < l_15.s6), p_3)), l_15.s4)), l_13, p_488->g_151.w, p_488) , 0x7156L), p_488)), 0x4C722F92L)))) > l_15.s7)))) , (-1L))), l_349, p_3, p_488))
            { /* block id: 129 */
                return l_381;
            }
            else
            { /* block id: 131 */
                VECTOR(int32_t, 2) l_396 = (VECTOR(int32_t, 2))((-3L), 0x469F49F4L);
                VECTOR(uint32_t, 16) l_406 = (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x76795B1DL), 0x76795B1DL), 0x76795B1DL, 4294967288UL, 0x76795B1DL, (VECTOR(uint32_t, 2))(4294967288UL, 0x76795B1DL), (VECTOR(uint32_t, 2))(4294967288UL, 0x76795B1DL), 4294967288UL, 0x76795B1DL, 4294967288UL, 0x76795B1DL);
                int32_t l_414 = 9L;
                int i;
                l_414 ^= (0x9D2BDA8BL != (safe_mod_func_int8_t_s_s((!(((VECTOR(uint8_t, 4))(p_488->g_384.yxxy)).w != (safe_add_func_uint16_t_u_u((l_15.s2 , ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 4))(0x3721L, (safe_mul_func_uint8_t_u_u(((0xDFA6L >= (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_488->g_393.xyzwyzzz)).s41)).xxxxxyxx)).s51, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(p_488->g_394.s40)).yxyxyyxx, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_395.s098acb85)).s12)).xyxyxyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_396.yxxx)), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_397.yyyzxwxzzwwwzxxx)).s87)).xxyyyyxxxxyyxxxy, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(0x245E2F8CL, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(p_488->g_398.s5ffef23a)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_399.zzzwwxzwzyxyyxww)).sbd))))), ((VECTOR(int32_t, 8))(((l_400[1] != l_401) ^ ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((VECTOR(uint32_t, 8))(l_406.sae3be9d4)).s2 ^ (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))((((~(safe_unary_minus_func_int16_t_s((l_410[2] == &p_488->g_95)))) > ((void*)0 == l_411[5])) , 4L), p_488->g_393.z, 3L, 0x7A80L)).hi, ((VECTOR(uint16_t, 2))(65530UL))))).yyxxxxyyxyyxyxxy)).s7, l_413))), 0x6846C19BD374F127L)), p_488->g_95)) >= (*l_20))), ((VECTOR(int32_t, 2))((-5L))), 2L, ((VECTOR(int32_t, 4))(0x44E677DCL)))), ((VECTOR(int32_t, 2))(0L)), p_3, 0x1541A214L, 0L, 0x3C132A85L)).s83c1)).yxyxyyzz, ((VECTOR(int32_t, 8))(1L))))), ((VECTOR(int32_t, 2))(1L)), (-8L), 0L, 0x59572D00L, ((VECTOR(int32_t, 2))(0L)), 0x75D5FBFCL)).s2678, ((VECTOR(int32_t, 4))(0x5A455A9BL))))).wxywxyzw)).s45, ((VECTOR(int32_t, 2))((-1L)))))), 0L, ((VECTOR(int32_t, 2))((-7L))), 0x3CD7CE3DL, 0x62938C9EL)).odd, ((VECTOR(int32_t, 4))(2L))))).xxwxxyywzywzzxzz, ((VECTOR(int32_t, 16))(0x1280DB3CL))))).sbe5f))))).s62, ((VECTOR(int32_t, 2))(0x4C14CCFDL))))), 0x7639893BL, 0x045A5694L)))).xzyzzyyz))).even, (int32_t)p_3))).xwxxwxyz, ((VECTOR(int32_t, 8))(0x5C39BA61L))))).s45))).hi, p_3)), l_15.s2))) && p_3), p_488->g_66.z)), 0x3A4DL, 0x9FD1L)).yzyxxyyxxwwxzwxw, ((VECTOR(uint16_t, 16))(0x573AL)), ((VECTOR(uint16_t, 16))(0x7F0FL))))).s0), p_488->g_172)))), 1UL)));
                return (*p_488->g_117);
            }
        }
        else
        { /* block id: 135 */
            int32_t *l_415 = &p_488->g_350;
            int32_t *l_425 = &p_488->g_412[5][1][3];
            int32_t *l_426 = &p_488->g_427;
            (*p_488->g_117) = l_381;
            (*p_488->g_117) = func_53((p_488->g_326 , (((*p_488->g_117) = l_415) == ((9UL || ((VECTOR(int8_t, 2))(0x7AL, 0x38L)).hi) , func_53(((*l_426) &= ((*l_425) = (safe_lshift_func_uint16_t_u_s((~(p_488->g_61.s0 = (p_488->g_172 , (0x38B775E8L | ((((*l_401) = (((l_420 == l_420) == (*l_349)) || ((*l_381) |= (((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s(((&p_488->g_95 != l_420) ^ l_424))), 7)) <= 0x7AL) != 0UL)))) , (*l_20)) < (*l_20)))))), p_488->g_66.x)))), p_488)))), p_488);
            return (*p_488->g_117);
        }
    }
    (*l_20) = (safe_rshift_func_uint8_t_u_s(0x74L, 3));
    if ((atomic_inc(&p_488->l_atomic_input[34]) == 3))
    { /* block id: 149 */
        uint32_t l_430 = 3UL;
        int32_t l_431 = 0x1927C911L;
        l_431 = l_430;
        unsigned int result = 0;
        result += l_430;
        result += l_431;
        atomic_add(&p_488->l_special_values[34], result);
    }
    else
    { /* block id: 151 */
        (1 + 1);
    }
    (*l_381) = p_3;
    return l_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_45 p_488->g_350 p_488->g_152 p_488->g_66 p_488->g_8 p_488->g_21 p_488->g_117 p_488->g_97
 * writes: p_488->g_45 p_488->g_350 p_488->g_96 p_488->g_151 p_488->g_172 p_488->g_21 p_488->g_97
 */
int32_t  func_9(uint64_t  p_10, int32_t * p_11, uint32_t  p_12, struct S0 * p_488)
{ /* block id: 112 */
    int16_t l_353 = (-9L);
    int32_t *l_354 = (void*)0;
    int32_t *l_355 = (void*)0;
    int32_t *l_356[4][6] = {{&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21},{&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21},{&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21},{&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21,&p_488->g_21}};
    uint16_t l_357 = 65529UL;
    int8_t *l_367[10][8] = {{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]},{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]},{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]},{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]},{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]},{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]},{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]},{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]},{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]},{&p_488->g_280[0],&p_488->g_280[1],(void*)0,(void*)0,&p_488->g_280[0],&p_488->g_280[0],(void*)0,&p_488->g_280[0]}};
    int8_t **l_366 = &l_367[6][1];
    uint64_t *l_368 = &p_488->g_95;
    uint64_t **l_369 = &p_488->g_96;
    VECTOR(int32_t, 8) l_370 = (VECTOR(int32_t, 8))(0x7417F483L, (VECTOR(int32_t, 4))(0x7417F483L, (VECTOR(int32_t, 2))(0x7417F483L, 1L), 1L), 1L, 0x7417F483L, 1L);
    uint64_t *l_374 = (void*)0;
    uint64_t *l_375 = (void*)0;
    uint64_t *l_376 = (void*)0;
    uint64_t *l_377 = (void*)0;
    uint64_t *l_378[4][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
    uint8_t l_379 = 0x8EL;
    uint32_t *l_380 = &p_488->g_172;
    int i, j, k;
    for (p_488->g_45 = (-6); (p_488->g_45 != 55); ++p_488->g_45)
    { /* block id: 115 */
        return l_353;
    }
    --l_357;
    for (p_488->g_350 = 0; (p_488->g_350 <= 14); p_488->g_350++)
    { /* block id: 121 */
        uint16_t l_362[10] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
        int i;
        l_362[5] |= (*p_11);
    }
    (*p_488->g_117) = func_53((((*l_380) = ((safe_unary_minus_func_int16_t_s((safe_sub_func_uint64_t_u_u((!(~((+0L) >= (p_488->g_151.z = ((VECTOR(uint64_t, 8))((l_366 == (void*)0), 0x1C74AF81ADA67DD0L, (l_368 != ((*l_369) = &p_488->g_95)), 0x200AD6F1835DE46BL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(0x45A77C823CABEE2DL, 0UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))((0x15E49E2BL >= l_370.s3), (safe_sub_func_uint8_t_u_u(p_488->g_152.s4, (safe_unary_minus_func_uint32_t_u(p_488->g_66.w)))), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 8))(0x1DEC7F297E9D1803L)), p_488->g_8.w, ((VECTOR(uint64_t, 2))(0x7FC92C2BD86C564CL)), 0xD1BB1C3D6AC98703L)))).even)), 0UL, 0xA91AB7716BC840CFL, ((VECTOR(uint64_t, 2))(0UL)), 18446744073709551612UL, 0xFFD4B1F751F4F873L)).s0f27)))))).s6)))), l_379)))) > p_12)) , p_10), p_488);
    return (**p_488->g_117);
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_326 p_488->l_comm_values p_488->g_21 p_488->g_274
 * writes: p_488->g_326 p_488->g_21
 */
uint32_t  func_22(int16_t  p_23, struct S0 * p_488)
{ /* block id: 104 */
    for (p_488->g_326 = 18; (p_488->g_326 > 5); --p_488->g_326)
    { /* block id: 107 */
        int32_t *l_348 = &p_488->g_21;
        (*l_348) ^= (p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))] && p_23);
    }
    return p_488->g_274[2][2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_66 p_488->g_61 p_488->g_274 p_488->g_164 p_488->g_95 p_488->g_283 p_488->g_172 p_488->l_comm_values p_488->g_100 p_488->g_comm_values p_488->g_151 p_488->g_152 p_488->g_217 p_488->g_167 p_488->g_45 p_488->g_21 p_488->g_117 p_488->g_97 p_488->g_73 p_488->g_343 p_488->g_91
 * writes: p_488->g_61 p_488->g_167 p_488->g_117 p_488->g_73 p_488->g_274 p_488->g_91 p_488->g_280 p_488->g_283 p_488->g_100 p_488->g_151 p_488->g_21 p_488->g_326 p_488->g_97
 */
int8_t  func_24(int64_t  p_25, uint16_t  p_26, uint64_t  p_27, struct S0 * p_488)
{ /* block id: 67 */
    int32_t **l_253[4][1][1];
    VECTOR(uint32_t, 16) l_254 = (VECTOR(uint32_t, 16))(0x3A05BC7DL, (VECTOR(uint32_t, 4))(0x3A05BC7DL, (VECTOR(uint32_t, 2))(0x3A05BC7DL, 4294967295UL), 4294967295UL), 4294967295UL, 0x3A05BC7DL, 4294967295UL, (VECTOR(uint32_t, 2))(0x3A05BC7DL, 4294967295UL), (VECTOR(uint32_t, 2))(0x3A05BC7DL, 4294967295UL), 0x3A05BC7DL, 4294967295UL, 0x3A05BC7DL, 4294967295UL);
    VECTOR(uint32_t, 4) l_259 = (VECTOR(uint32_t, 4))(0x4E71838AL, (VECTOR(uint32_t, 2))(0x4E71838AL, 0x1D6976FEL), 0x1D6976FEL);
    VECTOR(uint16_t, 16) l_264 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x8A52L), 0x8A52L), 0x8A52L, 1UL, 0x8A52L, (VECTOR(uint16_t, 2))(1UL, 0x8A52L), (VECTOR(uint16_t, 2))(1UL, 0x8A52L), 1UL, 0x8A52L, 1UL, 0x8A52L);
    uint32_t *l_266 = (void*)0;
    uint64_t *l_267[9] = {&p_488->g_95,&p_488->g_95,&p_488->g_95,&p_488->g_95,&p_488->g_95,&p_488->g_95,&p_488->g_95,&p_488->g_95,&p_488->g_95};
    uint16_t *l_268 = (void*)0;
    uint16_t *l_269[2][6];
    int16_t *l_270 = &p_488->g_167;
    int32_t *l_271 = (void*)0;
    int32_t ***l_272 = &p_488->g_117;
    uint8_t *l_273 = &p_488->g_73;
    int8_t *l_279 = &p_488->g_280[0];
    int64_t l_288 = 1L;
    uint32_t l_291[10] = {0x5FAAF142L,0x3DAA163FL,0x5FAAF142L,0x5FAAF142L,0x3DAA163FL,0x5FAAF142L,0x5FAAF142L,0x3DAA163FL,0x5FAAF142L,0x5FAAF142L};
    int16_t l_292 = 0x4324L;
    uint8_t l_316 = 0x41L;
    int32_t l_321 = 0x05ABCEF0L;
    VECTOR(uint8_t, 16) l_334 = (VECTOR(uint8_t, 16))(0xC9L, (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 0xE2L), 0xE2L), 0xE2L, 0xC9L, 0xE2L, (VECTOR(uint8_t, 2))(0xC9L, 0xE2L), (VECTOR(uint8_t, 2))(0xC9L, 0xE2L), 0xC9L, 0xE2L, 0xC9L, 0xE2L);
    VECTOR(uint8_t, 2) l_341 = (VECTOR(uint8_t, 2))(0UL, 0xF4L);
    VECTOR(uint8_t, 16) l_342 = (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x2CL), 0x2CL), 0x2CL, 247UL, 0x2CL, (VECTOR(uint8_t, 2))(247UL, 0x2CL), (VECTOR(uint8_t, 2))(247UL, 0x2CL), 247UL, 0x2CL, 247UL, 0x2CL);
    int8_t ***l_345 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_253[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_269[i][j] = (void*)0;
    }
    p_488->g_91.y = (!(safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((~(safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))((l_253[1][0][0] == (void*)0), (p_488->g_274[2][2][2] &= (((*l_273) = ((((*l_272) = func_48((((VECTOR(uint32_t, 2))(l_254.s68)).odd , FAKE_DIVERGE(p_488->group_2_offset, get_group_id(2), 10)), (safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_259.yw)))).hi, (safe_sub_func_int16_t_s_s((p_26 , ((*l_270) = ((safe_rshift_func_uint8_t_u_u((((VECTOR(uint16_t, 4))(0xBD98L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_264.s5df5)).hi)), 9UL)).y && p_25), (safe_unary_minus_func_int64_t_s(p_25)))) < (p_488->g_61.sa &= (p_26 = (7L ^ (&p_488->g_95 != (((0x17CDL & (((&l_253[1][0][0] != &p_488->g_117) , l_266) != (void*)0)) < p_488->g_66.z) , l_267[7])))))))), p_25)))), p_25)), l_271, p_488->g_66.z, p_488)) == &p_488->g_97) | (-3L))) == p_25)), 0xFF1FL, 65529UL)).w, 15))), 5)), 0xEE6359CCL)));
    p_488->g_283.x = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_27, ((((void*)0 != l_269[1][5]) | (((*l_279) = p_488->g_164.y) > (((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(5L, (-1L))))), 0x4F52D2ACL, 0x20ABFA0EL)).w, p_26)) ^ p_488->g_95) & (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_488->g_283.zwzywwyzxwzxzzwz)))).s0 && ((safe_mod_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((((l_288 , (safe_sub_func_int32_t_s_s(l_291[5], (p_26 , p_27)))) && p_488->g_172) != 0x1620L) ^ l_292), p_26)) , 0x228FL) < (-4L)), p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))])) ^ 1L))))) != 0x1EL))), FAKE_DIVERGE(p_488->group_2_offset, get_group_id(2), 10)));
    for (p_25 = 23; (p_25 <= (-27)); p_25 = safe_sub_func_int32_t_s_s(p_25, 6))
    { /* block id: 79 */
        int8_t l_305 = 0x21L;
        int64_t l_322[5] = {0x57443D3947051324L,0x57443D3947051324L,0x57443D3947051324L,0x57443D3947051324L,0x57443D3947051324L};
        int32_t **l_325 = (void*)0;
        int i;
        for (p_488->g_100 = 0; (p_488->g_100 >= 35); p_488->g_100 = safe_add_func_int8_t_s_s(p_488->g_100, 3))
        { /* block id: 82 */
            VECTOR(uint64_t, 2) l_306 = (VECTOR(uint64_t, 2))(0x0C18F836C7C19688L, 0x5C0070678D7CD09BL);
            uint64_t *l_307 = (void*)0;
            VECTOR(uint16_t, 4) l_313 = (VECTOR(uint16_t, 4))(0x2107L, (VECTOR(uint16_t, 2))(0x2107L, 0UL), 0UL);
            int32_t *l_323[4][4] = {{&l_321,(void*)0,(void*)0,&l_321},{&l_321,(void*)0,(void*)0,&l_321},{&l_321,(void*)0,(void*)0,&l_321},{&l_321,(void*)0,(void*)0,&l_321}};
            int64_t l_324 = 1L;
            int32_t l_327 = 0x5A3BFDC7L;
            int i, j;
            if (p_25)
                break;
            l_327 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u(((p_488->g_comm_values[p_488->tid] != ((p_488->g_326 = (safe_mul_func_int8_t_s_s(((*l_279) = (((*l_272) = func_48(l_305, (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_306.yyxxxyxy)).hi)).odd)).odd == (++p_488->g_151.w)), func_53((l_324 &= (safe_unary_minus_func_int32_t_s(((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_313.wyzw)))).z, p_488->g_152.s4)) && ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 16))(0xA9L, (safe_div_func_int32_t_s_s((p_488->g_217[3] , (l_316 > ((p_488->g_274[2][2][2] >= p_25) && ((safe_mul_func_int8_t_s_s(0x14L, (((*l_273) = (safe_lshift_func_uint16_t_u_s(0xF93DL, 4))) || p_27))) >= l_321)))), 0x692EE7E7L)), l_313.y, p_488->g_167, ((VECTOR(uint8_t, 2))(254UL)), ((VECTOR(uint8_t, 8))(0x5EL)), 255UL, 6UL)).sb0, (uint8_t)p_26, (uint8_t)l_322[2]))).odd)))), p_488), p_26, p_488)) != l_325)), p_488->g_172))) < p_26)) , p_27), p_26)) > p_488->g_274[2][2][2]) >= p_27), p_488->g_152.s5)), p_488->g_283.w));
        }
        (*p_488->g_117) = (*p_488->g_117);
        for (p_488->g_73 = 0; (p_488->g_73 > 43); p_488->g_73 = safe_add_func_int8_t_s_s(p_488->g_73, 3))
        { /* block id: 95 */
            int8_t **l_331 = &l_279;
            int8_t ***l_330 = &l_331;
            (*l_330) = &l_279;
            return p_26;
        }
    }
    p_488->g_21 = (((((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))((0x491FL >= p_488->g_274[3][4][0]), (((((safe_mul_func_uint8_t_u_u((((p_488->g_61.s5 = p_26) , &p_26) == &p_26), ((*l_273) = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_334.s3eb3a971)).s6712501477124474)).s4))) != (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((p_488->g_217[3] >= GROUP_DIVERGE(2, 1)) < ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 16))(l_341.xxxyyyyyyxxxyxxy)).sab59))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_342.se2b2)).lo)), 0xFEL, 255UL)).s2), ((VECTOR(int64_t, 2))(0x54973A28ACE09499L, 0x58E44A958DC6AC73L)).lo)), (p_488->g_343[3][2][1] == l_345))), p_488->g_151.y))) , (void*)0) != p_488->g_97) | 5L), 1L, p_27, ((VECTOR(int32_t, 2))(8L)), 0x1D8C6967L, 4L)).s6172746053422754, ((VECTOR(int32_t, 16))(0x19B1546DL))))).s8 > p_488->g_91.z) , 0x80312BF4D7470D35L) , p_25);
    return p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))];
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_117 p_488->g_151 p_488->g_152 p_488->l_comm_values p_488->g_45 p_488->g_73 p_488->g_172 p_488->g_167 p_488->g_95 p_488->g_66 p_488->g_91 p_488->g_100 p_488->g_97 p_488->g_21 p_488->g_61
 * writes: p_488->g_97 p_488->g_61 p_488->g_164 p_488->g_45 p_488->g_21 p_488->g_172 p_488->g_152 p_488->g_66 p_488->g_167
 */
int64_t  func_35(uint64_t  p_36, int32_t * p_37, struct S0 * p_488)
{ /* block id: 29 */
    int8_t l_120 = 0x08L;
    int32_t l_122[6][4][7] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}};
    uint16_t l_129 = 0x66B3L;
    VECTOR(uint64_t, 4) l_153 = (VECTOR(uint64_t, 4))(0xBCE8A264C335884FL, (VECTOR(uint64_t, 2))(0xBCE8A264C335884FL, 18446744073709551615UL), 18446744073709551615UL);
    uint8_t *l_156[9][7][3] = {{{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45}},{{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45}},{{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45}},{{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45}},{{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45}},{{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45}},{{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45}},{{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45}},{{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45},{&p_488->g_45,(void*)0,&p_488->g_45}}};
    int32_t l_169 = 0x23A22F7DL;
    int32_t l_170 = (-5L);
    VECTOR(int64_t, 16) l_179 = (VECTOR(int64_t, 16))(0x7A8A07003B070FD1L, (VECTOR(int64_t, 4))(0x7A8A07003B070FD1L, (VECTOR(int64_t, 2))(0x7A8A07003B070FD1L, 0L), 0L), 0L, 0x7A8A07003B070FD1L, 0L, (VECTOR(int64_t, 2))(0x7A8A07003B070FD1L, 0L), (VECTOR(int64_t, 2))(0x7A8A07003B070FD1L, 0L), 0x7A8A07003B070FD1L, 0L, 0x7A8A07003B070FD1L, 0L);
    uint32_t l_211 = 0x0DFEE722L;
    int32_t **l_212 = &p_488->g_97;
    VECTOR(int32_t, 2) l_233 = (VECTOR(int32_t, 2))(0x566C3802L, 0x73D22CD7L);
    VECTOR(int32_t, 16) l_234 = (VECTOR(int32_t, 16))(0x5F9D4AEBL, (VECTOR(int32_t, 4))(0x5F9D4AEBL, (VECTOR(int32_t, 2))(0x5F9D4AEBL, 0x1DD4FA4BL), 0x1DD4FA4BL), 0x1DD4FA4BL, 0x5F9D4AEBL, 0x1DD4FA4BL, (VECTOR(int32_t, 2))(0x5F9D4AEBL, 0x1DD4FA4BL), (VECTOR(int32_t, 2))(0x5F9D4AEBL, 0x1DD4FA4BL), 0x5F9D4AEBL, 0x1DD4FA4BL, 0x5F9D4AEBL, 0x1DD4FA4BL);
    VECTOR(uint64_t, 2) l_238 = (VECTOR(uint64_t, 2))(0x4592D42B9B8E23BFL, 18446744073709551608UL);
    VECTOR(int16_t, 4) l_241 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 2L), 2L);
    VECTOR(uint32_t, 2) l_246 = (VECTOR(uint32_t, 2))(0x96C30B5FL, 4294967291UL);
    int i, j, k;
    if ((safe_lshift_func_int8_t_s_u(l_120, 7)))
    { /* block id: 30 */
        int32_t *l_121 = &p_488->g_21;
        int32_t *l_123 = (void*)0;
        int32_t *l_124 = (void*)0;
        int32_t *l_125 = (void*)0;
        int32_t *l_126 = (void*)0;
        int32_t *l_127[4];
        int8_t l_128 = 1L;
        uint16_t *l_141 = &l_129;
        int8_t *l_144 = &l_128;
        int8_t *l_163[8] = {&l_120,&l_120,&l_120,&l_120,&l_120,&l_120,&l_120,&l_120};
        int16_t *l_165 = (void*)0;
        int16_t *l_166[5][4][6] = {{{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167}},{{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167}},{{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167}},{{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167}},{{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167},{(void*)0,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167,&p_488->g_167}}};
        int8_t l_168 = 0x4EL;
        int8_t l_171 = 0x3AL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_127[i] = &l_122[1][1][0];
        l_129--;
        (*p_488->g_117) = (void*)0;
        (*l_121) = ((safe_add_func_int64_t_s_s(((((l_122[4][2][1] = l_122[1][1][0]) | ((p_488->g_61.sa = 0xD6CEL) == (safe_mod_func_int16_t_s_s((l_170 |= (1L | ((((GROUP_DIVERGE(2, 1) >= (((safe_mul_func_int16_t_s_s((((p_36 || (+((*l_144) = (safe_unary_minus_func_uint16_t_u(((*l_141)++)))))) < (safe_add_func_int16_t_s_s((l_168 = (((VECTOR(int64_t, 2))(0x1A0F3CD2035C0580L, 0x289EFA3817551DDDL)).odd < (safe_lshift_func_uint8_t_u_u((p_488->g_45 = (safe_mod_func_int16_t_s_s(((p_488->g_164.x = (((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_488->g_151.xwzwzyzx)).s20)).yyyx, ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 16))(p_488->g_152.s5203024445254027)).se7, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_153.yywwzxyy)), 0UL, 0x40F12F2D70274592L, ((((void*)0 == l_156[6][2][1]) < ((65535UL < (safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((((((VECTOR(uint8_t, 2))(0x15L, 6UL)).odd ^ (safe_mod_func_uint32_t_u_u(((void*)0 != &l_120), l_153.w))) >= p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))]) > p_36), 0x544BL, ((VECTOR(int16_t, 8))(4L)), ((VECTOR(int16_t, 4))(0x3A4DL)), 0x3B09L, (-1L))).s45d4)).hi)).odd, l_153.w)) && 1L), l_153.y))) <= p_488->g_45)) , p_36), ((VECTOR(uint64_t, 4))(0xB71802269A3159ADL)), 0xC433B515C9F24154L)))).sfc, ((VECTOR(uint64_t, 2))(18446744073709551607UL))))).yxxx, ((VECTOR(uint64_t, 4))(0x788541AD1FF961ABL))))).lo, ((VECTOR(uint64_t, 2))(0xAC27B40A8872ADFBL))))).lo > l_153.w)) ^ p_36), 0xDBBEL))), 6)))), l_169))) < 1L), p_488->g_73)) , FAKE_DIVERGE(p_488->local_1_offset, get_local_id(1), 10)) , p_36)) ^ p_36) != l_120) >= l_169))), l_153.y)))) , p_37) == (void*)0), 0x469B733BB65FF730L)) , l_153.x);
        --p_488->g_172;
    }
    else
    { /* block id: 43 */
        VECTOR(int32_t, 2) l_191 = (VECTOR(int32_t, 2))(0x58232C72L, (-1L));
        uint64_t *l_200 = (void*)0;
        uint64_t *l_201[7];
        int32_t *l_208 = &l_122[1][1][0];
        int64_t *l_209 = (void*)0;
        int64_t *l_210[5][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t ***l_213 = &l_212;
        int32_t *l_214 = &l_169;
        int32_t *l_215 = &l_170;
        int32_t *l_216[7][2][2] = {{{&l_122[0][2][6],&l_122[0][2][6]},{&l_122[0][2][6],&l_122[0][2][6]}},{{&l_122[0][2][6],&l_122[0][2][6]},{&l_122[0][2][6],&l_122[0][2][6]}},{{&l_122[0][2][6],&l_122[0][2][6]},{&l_122[0][2][6],&l_122[0][2][6]}},{{&l_122[0][2][6],&l_122[0][2][6]},{&l_122[0][2][6],&l_122[0][2][6]}},{{&l_122[0][2][6],&l_122[0][2][6]},{&l_122[0][2][6],&l_122[0][2][6]}},{{&l_122[0][2][6],&l_122[0][2][6]},{&l_122[0][2][6],&l_122[0][2][6]}},{{&l_122[0][2][6],&l_122[0][2][6]},{&l_122[0][2][6],&l_122[0][2][6]}}};
        int64_t l_218 = 1L;
        uint32_t l_219 = 0x9F222758L;
        int64_t l_245 = 7L;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_201[i] = (void*)0;
        l_211 = (((p_488->g_66.y = ((safe_rshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_179.s4e)).odd, p_36)))) ^ (safe_sub_func_int8_t_s_s(p_488->g_73, (((*l_208) = (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint64_t_u((safe_add_func_int32_t_s_s((!(safe_rshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(l_191.xyyxxyxx)).s1, 4294967295UL)) , ((safe_add_func_uint64_t_u_u(p_488->g_167, (((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_488->global_1_offset, get_global_id(1), 10), ((!((safe_lshift_func_uint8_t_u_u((l_170 = l_120), 5)) == (0x698DB74EL > ((p_488->g_152.s2--) || (4294967295UL != 0x957E8583L))))) > ((VECTOR(uint32_t, 8))((~((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(5UL, 4294967286UL)))).lo, (safe_add_func_uint8_t_u_u((((p_37 == l_208) | p_36) == p_36), p_488->g_95)))) || p_36)), ((VECTOR(uint32_t, 4))(0xD841EF77L)), ((VECTOR(uint32_t, 2))(1UL)), 0xAD2DFD22L)).s0))), l_179.s8)) < p_488->g_73) < 0x210EE6A9968E2C01L))) | p_488->g_66.y)), 5))), 1L)))), 6))) && p_488->g_91.x))))) != 0x782BC33D4B22B36CL) , 2L);
        (*l_213) = l_212;
        l_219--;
        for (l_218 = 0; (l_218 < (-18)); --l_218)
        { /* block id: 53 */
            uint32_t l_226 = 4294967289UL;
            VECTOR(int32_t, 8) l_229 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L));
            VECTOR(int32_t, 16) l_230 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2CCB8323L), 0x2CCB8323L), 0x2CCB8323L, 1L, 0x2CCB8323L, (VECTOR(int32_t, 2))(1L, 0x2CCB8323L), (VECTOR(int32_t, 2))(1L, 0x2CCB8323L), 1L, 0x2CCB8323L, 1L, 0x2CCB8323L);
            VECTOR(int32_t, 4) l_231 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L);
            VECTOR(int32_t, 4) l_232 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0C3642D2L), 0x0C3642D2L);
            VECTOR(int8_t, 8) l_244 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x3BL), 0x3BL), 0x3BL, 7L, 0x3BL);
            int i;
            for (p_488->g_167 = (-16); (p_488->g_167 > 28); p_488->g_167 = safe_add_func_int8_t_s_s(p_488->g_167, 5))
            { /* block id: 56 */
                uint32_t l_235 = 0x6062001FL;
                l_226--;
                (*l_214) = ((!(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_229.s3044)).xzwyyzzzxywzwxyw)), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_230.s7871e8f414b340ca)).sc362, ((VECTOR(int32_t, 16))(l_231.zywwwywzzxwwzzyz)).s02e6, ((VECTOR(int32_t, 2))(l_232.zz)).yxyy))).zzyywzxywzxwxyyz, ((VECTOR(int32_t, 4))(l_233.yyxx)).zxzyyyyxwwzwyyzz))).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_234.s5f97af9e)), l_235, 2L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 2))(1UL, 0x5B0F2781781BE873L)).yxyyyyxyxyyxyyyy, ((VECTOR(uint64_t, 16))(18446744073709551615UL, 18446744073709551612UL, 0xF1C786D4D23ED539L, (p_36 = ((void*)0 == &p_36)), ((VECTOR(uint64_t, 4))(l_238.xxxy)), 0x512EEAC1006E64D8L, 0x1C44CF0E34C557E2L, (((*l_208) = (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_241.zwwzzxyx)).s67)).even, 2))) , p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))]), (l_231.w ^= (((p_488->g_100 < (safe_sub_func_int8_t_s_s((((VECTOR(int8_t, 8))(l_244.s60237112)).s6 && (((*l_215) = ((VECTOR(int32_t, 8))(l_230.s5, 1L, 0x1501CF55L, 0x1CC538B9L, 0x3D646E06L, ((~((*l_212) == (*p_488->g_117))) , (p_488->g_21 , p_36)), 1L, 1L)).s3) || p_488->g_151.z)), (-7L)))) == l_245) && (-8L))), ((VECTOR(uint64_t, 2))(1UL)), 18446744073709551615UL, 0x4D0107DBF3D6430BL)), ((VECTOR(uint64_t, 16))(0xF102D8F09C6116B3L))))).s0, p_488->g_91.z)) && p_488->g_61.se) & l_229.s7), (*l_214), ((VECTOR(int32_t, 2))(0x194CD54BL)), 0x33CD1F53L, (-1L), 1L, 0x7BF93C25L)).s31)))).yyyxxxyy, ((VECTOR(int32_t, 8))((-1L)))))), 1L, 0x12700A74L, ((VECTOR(int32_t, 4))(0L)), 0x2AFCCFCCL, 0x1D169417L)).s0d, ((VECTOR(int32_t, 2))(8L))))), p_36, 0x3E8852DDL, 0L, 0x33E7BC1AL)).s00)).yxxyxyxy, ((VECTOR(int32_t, 8))(0x54AB2380L))))).s6012011231006756, ((VECTOR(int32_t, 16))(0x06B63F3AL))))).s5 , p_36)) & p_488->g_152.s4);
            }
        }
    }
    return l_246.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_45 p_488->g_comm_values p_488->g_21 p_488->g_61 p_488->l_comm_values p_488->g_66 p_488->g_73 p_488->g_91 p_488->g_97 p_488->g_100
 * writes: p_488->g_45 p_488->g_21 p_488->g_73 p_488->g_95 p_488->g_96 p_488->l_comm_values p_488->g_100 p_488->g_117
 */
uint64_t  func_38(int32_t * p_39, struct S0 * p_488)
{ /* block id: 10 */
    int32_t *l_40 = (void*)0;
    int32_t l_41 = 0x4C996E15L;
    int32_t *l_42 = &p_488->g_21;
    int32_t l_43[9] = {0x7A0B2B04L,0x7A0B2B04L,0x7A0B2B04L,0x7A0B2B04L,0x7A0B2B04L,0x7A0B2B04L,0x7A0B2B04L,0x7A0B2B04L,0x7A0B2B04L};
    int32_t *l_44[5] = {&l_41,&l_41,&l_41,&l_41,&l_41};
    int8_t l_69 = 9L;
    uint64_t l_70[6][9][1] = {{{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL}},{{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL}},{{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL}},{{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL}},{{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL}},{{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL},{0xF4251D17401D8B2DL}}};
    uint32_t l_71[1];
    uint8_t *l_72 = &p_488->g_73;
    int32_t *l_74 = &l_43[1];
    int32_t ***l_116 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_71[i] = 0xE161529AL;
    p_488->g_45++;
    p_488->g_117 = func_48((p_488->g_comm_values[p_488->tid] , FAKE_DIVERGE(p_488->local_1_offset, get_local_id(1), 10)), p_488->g_45, func_53(p_488->g_comm_values[p_488->tid], p_488), func_56(p_488->g_comm_values[p_488->tid], ((*l_72) &= ((((VECTOR(uint16_t, 2))(p_488->g_61.s4d)).lo & (safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_488->local_0_offset, get_local_id(0), 10), (p_488->g_comm_values[p_488->tid] , p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))])))) , (((VECTOR(int64_t, 2))(p_488->g_66.yx)).odd != (((VECTOR(uint64_t, 2))(0x863074C89AED293EL, 4UL)).lo <= (((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))((((safe_rshift_func_int8_t_s_u((((l_69 <= GROUP_DIVERGE(2, 1)) || p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))]) , p_488->g_66.x), l_70[0][0][0])) || l_71[0]) , GROUP_DIVERGE(1, 1)), 0x49608984L, p_488->g_66.w, 1UL, ((VECTOR(uint32_t, 8))(0x20237AEEL)), 4294967295UL, p_488->g_61.s5, 4294967295UL, 0x86010944L)).sb0)).hi, p_488->g_45, 0UL, 0x0B5F9D9DL)).xzywyzxxzwyxxzyw)).s2a33, ((VECTOR(uint32_t, 4))(0x34C778C5L))))).even, ((VECTOR(uint32_t, 2))(0xBF95235BL))))).odd , 0L))))), p_488->g_61.s7, l_74, p_488), p_488);
    return p_488->g_61.s4;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_48(uint64_t  p_49, uint8_t  p_50, int32_t * p_51, int64_t  p_52, struct S0 * p_488)
{ /* block id: 23 */
    int16_t l_101 = (-1L);
    int32_t *l_102 = &p_488->g_21;
    int32_t *l_103 = &p_488->g_21;
    int32_t *l_104 = &p_488->g_21;
    int32_t *l_105 = &p_488->g_21;
    int32_t *l_106 = &p_488->g_21;
    int32_t *l_107 = (void*)0;
    int32_t l_108 = (-1L);
    int32_t l_109[8] = {0x25B0B60EL,0x6B2DE199L,0x25B0B60EL,0x25B0B60EL,0x6B2DE199L,0x25B0B60EL,0x25B0B60EL,0x6B2DE199L};
    int32_t *l_110[2];
    int32_t l_111 = 0x612151E3L;
    uint32_t l_112 = 0x7C01AD3EL;
    int32_t **l_115 = &l_110[0];
    int i;
    for (i = 0; i < 2; i++)
        l_110[i] = &l_109[1];
    ++l_112;
    (*l_115) = &p_488->g_21;
    return &p_488->g_97;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_45 p_488->g_21
 * writes: p_488->g_21
 */
int32_t * func_53(int32_t  p_54, struct S0 * p_488)
{ /* block id: 12 */
    int32_t *l_55 = &p_488->g_21;
    (*l_55) |= (!p_488->g_45);
    return &p_488->g_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_61 p_488->g_45 p_488->g_comm_values p_488->g_91 p_488->g_97 p_488->g_66 p_488->g_100 p_488->l_comm_values
 * writes: p_488->g_95 p_488->g_96 p_488->l_comm_values p_488->g_100
 */
int64_t  func_56(int32_t  p_57, uint8_t  p_58, int16_t  p_59, int32_t * p_60, struct S0 * p_488)
{ /* block id: 16 */
    VECTOR(uint64_t, 8) l_79 = (VECTOR(uint64_t, 8))(0x54706CD8FDA5E0CFL, (VECTOR(uint64_t, 4))(0x54706CD8FDA5E0CFL, (VECTOR(uint64_t, 2))(0x54706CD8FDA5E0CFL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0x54706CD8FDA5E0CFL, 18446744073709551606UL);
    VECTOR(uint32_t, 4) l_80 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x2EB5F757L), 0x2EB5F757L);
    VECTOR(uint8_t, 2) l_85 = (VECTOR(uint8_t, 2))(0UL, 1UL);
    VECTOR(int32_t, 4) l_92 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x14A66755L), 0x14A66755L);
    VECTOR(uint64_t, 2) l_93 = (VECTOR(uint64_t, 2))(0x470A06C62CF0DA5BL, 18446744073709551612UL);
    uint64_t *l_94[3];
    int32_t *l_98[7][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint32_t *l_99 = &p_488->g_100;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_94[i] = &p_488->g_95;
    (*p_60) = (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(18446744073709551608UL, ((VECTOR(uint64_t, 2))(l_79.s14)), ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 16))(l_80.xwwzyzzyxzwxyzww)).sd6, ((VECTOR(uint32_t, 16))(FAKE_DIVERGE(p_488->global_0_offset, get_global_id(0), 10), 0xBB161CA2L, 0xD359D2D1L, 1UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(0x0C88640EL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))((((safe_sub_func_int8_t_s_s((((*l_99) &= (safe_sub_func_uint64_t_u_u(0x0C2479274D830BE9L, ((((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(l_85.xx)).yxyxyxyyxyyxyxyx))).sd2c8, (uint8_t)(safe_sub_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((2UL == (safe_rshift_func_uint8_t_u_u(p_488->g_61.s1, ((p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))] = (((p_488->g_45 ^ p_488->g_comm_values[p_488->tid]) , ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x11C2983FL, 5L)).xxxxyxyxxyyxxyyx)).s40, ((VECTOR(int32_t, 4))(p_488->g_91.xzzy)).odd))).xyyxxxyy, ((VECTOR(int32_t, 16))(l_92.yxxywyzyxxxzzxyx)).even))).s5) , (((p_488->g_95 = ((VECTOR(uint64_t, 16))(l_93.xxyxxyxyyyyyyxyy)).sa) , (p_57 >= ((p_488->g_96 = l_94[2]) != ((p_488->g_97 == l_98[1][0][3]) , &p_488->g_95)))) && p_57))) >= p_488->g_45)))) && 1UL))), p_488->g_66.y))))).wxxzxzxwxwwyzyxx))).s2 && 0xF8L) <= 0x4C7F9B13E4380B9CL)))) >= 1L), p_488->g_91.z)) & GROUP_DIVERGE(0, 1)) >= 0x0E9BL), p_58, 4294967295UL, 0xB54F4E0BL)))), ((VECTOR(uint32_t, 2))(0UL)), 4294967295UL)).s06, (uint32_t)p_59))), 0x85B7FF5AL, 6UL)).zyyyzzyw)).s0537604654712071)).se4)), ((VECTOR(uint32_t, 4))(4294967295UL)), 7UL, p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 155))], ((VECTOR(uint32_t, 4))(5UL)))).scf))), ((VECTOR(uint64_t, 2))(0x97919FD84452C2E7L))))).yxyxyxyy, (uint64_t)p_488->g_100, (uint64_t)p_59))), p_488->g_45, p_488->g_91.y, 0x2404B1A4155BC6D3L, 0x3EA340A379BBF3D3L, 0x47F09C2FEE76F715L)).s4, 0xA2B2265A2DF7CCACL)), 1L));
    return p_488->g_100;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[76];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 76; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[76];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 76; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[155];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 155; i++)
            l_comm_values[i] = 1;
    struct S0 c_489;
    struct S0* p_488 = &c_489;
    struct S0 c_490 = {
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 2L), 2L), // p_488->g_8
        1L, // p_488->g_21
        255UL, // p_488->g_45
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x3714L), 0x3714L), 0x3714L, 0UL, 0x3714L, (VECTOR(uint16_t, 2))(0UL, 0x3714L), (VECTOR(uint16_t, 2))(0UL, 0x3714L), 0UL, 0x3714L, 0UL, 0x3714L), // p_488->g_61
        (VECTOR(int64_t, 4))(0x7AFC4999369E1D62L, (VECTOR(int64_t, 2))(0x7AFC4999369E1D62L, 0x11012106DF3F1863L), 0x11012106DF3F1863L), // p_488->g_66
        255UL, // p_488->g_73
        (VECTOR(int32_t, 4))(0x0934BFCAL, (VECTOR(int32_t, 2))(0x0934BFCAL, (-7L)), (-7L)), // p_488->g_91
        18446744073709551612UL, // p_488->g_95
        &p_488->g_95, // p_488->g_96
        (void*)0, // p_488->g_97
        0x85FCF45AL, // p_488->g_100
        &p_488->g_97, // p_488->g_117
        (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x8D22D332A9F6D975L), 0x8D22D332A9F6D975L), // p_488->g_151
        (VECTOR(uint64_t, 8))(0x699354FBC6739B99L, (VECTOR(uint64_t, 4))(0x699354FBC6739B99L, (VECTOR(uint64_t, 2))(0x699354FBC6739B99L, 0xD8BB3311CE538C8CL), 0xD8BB3311CE538C8CL), 0xD8BB3311CE538C8CL, 0x699354FBC6739B99L, 0xD8BB3311CE538C8CL), // p_488->g_152
        (VECTOR(int64_t, 2))(0x51878783DA1C2317L, 7L), // p_488->g_164
        9L, // p_488->g_167
        6UL, // p_488->g_172
        {0x7242L,0x7242L,0x7242L,0x7242L,0x7242L,0x7242L,0x7242L,0x7242L,0x7242L}, // p_488->g_217
        {{{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L}},{{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L}},{{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L}},{{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L},{(-3L),(-3L),4L}}}, // p_488->g_274
        {6L,6L}, // p_488->g_280
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x25D5A576L), 0x25D5A576L), // p_488->g_283
        7UL, // p_488->g_326
        (void*)0, // p_488->g_344
        {{{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344}},{{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344}},{{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344}},{{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344}},{{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344},{&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344,&p_488->g_344}}}, // p_488->g_343
        0x62DB0545L, // p_488->g_350
        (VECTOR(uint8_t, 2))(8UL, 0x8AL), // p_488->g_384
        (VECTOR(int32_t, 4))(0x11764A40L, (VECTOR(int32_t, 2))(0x11764A40L, 0x4C589FBCL), 0x4C589FBCL), // p_488->g_393
        (VECTOR(int32_t, 16))(0x3A1302DDL, (VECTOR(int32_t, 4))(0x3A1302DDL, (VECTOR(int32_t, 2))(0x3A1302DDL, 0x0A2FFE74L), 0x0A2FFE74L), 0x0A2FFE74L, 0x3A1302DDL, 0x0A2FFE74L, (VECTOR(int32_t, 2))(0x3A1302DDL, 0x0A2FFE74L), (VECTOR(int32_t, 2))(0x3A1302DDL, 0x0A2FFE74L), 0x3A1302DDL, 0x0A2FFE74L, 0x3A1302DDL, 0x0A2FFE74L), // p_488->g_394
        (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x553C27A6L), 0x553C27A6L), 0x553C27A6L, 5L, 0x553C27A6L, (VECTOR(int32_t, 2))(5L, 0x553C27A6L), (VECTOR(int32_t, 2))(5L, 0x553C27A6L), 5L, 0x553C27A6L, 5L, 0x553C27A6L), // p_488->g_398
        {{{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L},{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L}},{{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L},{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L}},{{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L},{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L}},{{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L},{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L}},{{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L},{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L}},{{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L},{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L}},{{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L},{(-5L),0x08A6F8D2L,0x768FDAE5L,0x743CFE57L,0x08A6F8D2L}}}, // p_488->g_412
        (-10L), // p_488->g_427
        0x7C3A4338F54AFDAAL, // p_488->g_433
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_488->g_440
        (VECTOR(uint16_t, 8))(0x1E5AL, (VECTOR(uint16_t, 4))(0x1E5AL, (VECTOR(uint16_t, 2))(0x1E5AL, 0x8B9EL), 0x8B9EL), 0x8B9EL, 0x1E5AL, 0x8B9EL), // p_488->g_444
        (VECTOR(uint8_t, 4))(0x40L, (VECTOR(uint8_t, 2))(0x40L, 1UL), 1UL), // p_488->g_450
        0, // p_488->v_collective
        sequence_input[get_global_id(0)], // p_488->global_0_offset
        sequence_input[get_global_id(1)], // p_488->global_1_offset
        sequence_input[get_global_id(2)], // p_488->global_2_offset
        sequence_input[get_local_id(0)], // p_488->local_0_offset
        sequence_input[get_local_id(1)], // p_488->local_1_offset
        sequence_input[get_local_id(2)], // p_488->local_2_offset
        sequence_input[get_group_id(0)], // p_488->group_0_offset
        sequence_input[get_group_id(1)], // p_488->group_1_offset
        sequence_input[get_group_id(2)], // p_488->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 155)), permutations[0][get_linear_local_id()])), // p_488->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_489 = c_490;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_488);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_488->g_8.x, "p_488->g_8.x", print_hash_value);
    transparent_crc(p_488->g_8.y, "p_488->g_8.y", print_hash_value);
    transparent_crc(p_488->g_8.z, "p_488->g_8.z", print_hash_value);
    transparent_crc(p_488->g_8.w, "p_488->g_8.w", print_hash_value);
    transparent_crc(p_488->g_21, "p_488->g_21", print_hash_value);
    transparent_crc(p_488->g_45, "p_488->g_45", print_hash_value);
    transparent_crc(p_488->g_61.s0, "p_488->g_61.s0", print_hash_value);
    transparent_crc(p_488->g_61.s1, "p_488->g_61.s1", print_hash_value);
    transparent_crc(p_488->g_61.s2, "p_488->g_61.s2", print_hash_value);
    transparent_crc(p_488->g_61.s3, "p_488->g_61.s3", print_hash_value);
    transparent_crc(p_488->g_61.s4, "p_488->g_61.s4", print_hash_value);
    transparent_crc(p_488->g_61.s5, "p_488->g_61.s5", print_hash_value);
    transparent_crc(p_488->g_61.s6, "p_488->g_61.s6", print_hash_value);
    transparent_crc(p_488->g_61.s7, "p_488->g_61.s7", print_hash_value);
    transparent_crc(p_488->g_61.s8, "p_488->g_61.s8", print_hash_value);
    transparent_crc(p_488->g_61.s9, "p_488->g_61.s9", print_hash_value);
    transparent_crc(p_488->g_61.sa, "p_488->g_61.sa", print_hash_value);
    transparent_crc(p_488->g_61.sb, "p_488->g_61.sb", print_hash_value);
    transparent_crc(p_488->g_61.sc, "p_488->g_61.sc", print_hash_value);
    transparent_crc(p_488->g_61.sd, "p_488->g_61.sd", print_hash_value);
    transparent_crc(p_488->g_61.se, "p_488->g_61.se", print_hash_value);
    transparent_crc(p_488->g_61.sf, "p_488->g_61.sf", print_hash_value);
    transparent_crc(p_488->g_66.x, "p_488->g_66.x", print_hash_value);
    transparent_crc(p_488->g_66.y, "p_488->g_66.y", print_hash_value);
    transparent_crc(p_488->g_66.z, "p_488->g_66.z", print_hash_value);
    transparent_crc(p_488->g_66.w, "p_488->g_66.w", print_hash_value);
    transparent_crc(p_488->g_73, "p_488->g_73", print_hash_value);
    transparent_crc(p_488->g_91.x, "p_488->g_91.x", print_hash_value);
    transparent_crc(p_488->g_91.y, "p_488->g_91.y", print_hash_value);
    transparent_crc(p_488->g_91.z, "p_488->g_91.z", print_hash_value);
    transparent_crc(p_488->g_91.w, "p_488->g_91.w", print_hash_value);
    transparent_crc(p_488->g_95, "p_488->g_95", print_hash_value);
    transparent_crc(p_488->g_100, "p_488->g_100", print_hash_value);
    transparent_crc(p_488->g_151.x, "p_488->g_151.x", print_hash_value);
    transparent_crc(p_488->g_151.y, "p_488->g_151.y", print_hash_value);
    transparent_crc(p_488->g_151.z, "p_488->g_151.z", print_hash_value);
    transparent_crc(p_488->g_151.w, "p_488->g_151.w", print_hash_value);
    transparent_crc(p_488->g_152.s0, "p_488->g_152.s0", print_hash_value);
    transparent_crc(p_488->g_152.s1, "p_488->g_152.s1", print_hash_value);
    transparent_crc(p_488->g_152.s2, "p_488->g_152.s2", print_hash_value);
    transparent_crc(p_488->g_152.s3, "p_488->g_152.s3", print_hash_value);
    transparent_crc(p_488->g_152.s4, "p_488->g_152.s4", print_hash_value);
    transparent_crc(p_488->g_152.s5, "p_488->g_152.s5", print_hash_value);
    transparent_crc(p_488->g_152.s6, "p_488->g_152.s6", print_hash_value);
    transparent_crc(p_488->g_152.s7, "p_488->g_152.s7", print_hash_value);
    transparent_crc(p_488->g_164.x, "p_488->g_164.x", print_hash_value);
    transparent_crc(p_488->g_164.y, "p_488->g_164.y", print_hash_value);
    transparent_crc(p_488->g_167, "p_488->g_167", print_hash_value);
    transparent_crc(p_488->g_172, "p_488->g_172", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_488->g_217[i], "p_488->g_217[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_488->g_274[i][j][k], "p_488->g_274[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_488->g_280[i], "p_488->g_280[i]", print_hash_value);

    }
    transparent_crc(p_488->g_283.x, "p_488->g_283.x", print_hash_value);
    transparent_crc(p_488->g_283.y, "p_488->g_283.y", print_hash_value);
    transparent_crc(p_488->g_283.z, "p_488->g_283.z", print_hash_value);
    transparent_crc(p_488->g_283.w, "p_488->g_283.w", print_hash_value);
    transparent_crc(p_488->g_326, "p_488->g_326", print_hash_value);
    transparent_crc(p_488->g_350, "p_488->g_350", print_hash_value);
    transparent_crc(p_488->g_384.x, "p_488->g_384.x", print_hash_value);
    transparent_crc(p_488->g_384.y, "p_488->g_384.y", print_hash_value);
    transparent_crc(p_488->g_393.x, "p_488->g_393.x", print_hash_value);
    transparent_crc(p_488->g_393.y, "p_488->g_393.y", print_hash_value);
    transparent_crc(p_488->g_393.z, "p_488->g_393.z", print_hash_value);
    transparent_crc(p_488->g_393.w, "p_488->g_393.w", print_hash_value);
    transparent_crc(p_488->g_394.s0, "p_488->g_394.s0", print_hash_value);
    transparent_crc(p_488->g_394.s1, "p_488->g_394.s1", print_hash_value);
    transparent_crc(p_488->g_394.s2, "p_488->g_394.s2", print_hash_value);
    transparent_crc(p_488->g_394.s3, "p_488->g_394.s3", print_hash_value);
    transparent_crc(p_488->g_394.s4, "p_488->g_394.s4", print_hash_value);
    transparent_crc(p_488->g_394.s5, "p_488->g_394.s5", print_hash_value);
    transparent_crc(p_488->g_394.s6, "p_488->g_394.s6", print_hash_value);
    transparent_crc(p_488->g_394.s7, "p_488->g_394.s7", print_hash_value);
    transparent_crc(p_488->g_394.s8, "p_488->g_394.s8", print_hash_value);
    transparent_crc(p_488->g_394.s9, "p_488->g_394.s9", print_hash_value);
    transparent_crc(p_488->g_394.sa, "p_488->g_394.sa", print_hash_value);
    transparent_crc(p_488->g_394.sb, "p_488->g_394.sb", print_hash_value);
    transparent_crc(p_488->g_394.sc, "p_488->g_394.sc", print_hash_value);
    transparent_crc(p_488->g_394.sd, "p_488->g_394.sd", print_hash_value);
    transparent_crc(p_488->g_394.se, "p_488->g_394.se", print_hash_value);
    transparent_crc(p_488->g_394.sf, "p_488->g_394.sf", print_hash_value);
    transparent_crc(p_488->g_398.s0, "p_488->g_398.s0", print_hash_value);
    transparent_crc(p_488->g_398.s1, "p_488->g_398.s1", print_hash_value);
    transparent_crc(p_488->g_398.s2, "p_488->g_398.s2", print_hash_value);
    transparent_crc(p_488->g_398.s3, "p_488->g_398.s3", print_hash_value);
    transparent_crc(p_488->g_398.s4, "p_488->g_398.s4", print_hash_value);
    transparent_crc(p_488->g_398.s5, "p_488->g_398.s5", print_hash_value);
    transparent_crc(p_488->g_398.s6, "p_488->g_398.s6", print_hash_value);
    transparent_crc(p_488->g_398.s7, "p_488->g_398.s7", print_hash_value);
    transparent_crc(p_488->g_398.s8, "p_488->g_398.s8", print_hash_value);
    transparent_crc(p_488->g_398.s9, "p_488->g_398.s9", print_hash_value);
    transparent_crc(p_488->g_398.sa, "p_488->g_398.sa", print_hash_value);
    transparent_crc(p_488->g_398.sb, "p_488->g_398.sb", print_hash_value);
    transparent_crc(p_488->g_398.sc, "p_488->g_398.sc", print_hash_value);
    transparent_crc(p_488->g_398.sd, "p_488->g_398.sd", print_hash_value);
    transparent_crc(p_488->g_398.se, "p_488->g_398.se", print_hash_value);
    transparent_crc(p_488->g_398.sf, "p_488->g_398.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_488->g_412[i][j][k], "p_488->g_412[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_488->g_427, "p_488->g_427", print_hash_value);
    transparent_crc(p_488->g_433, "p_488->g_433", print_hash_value);
    transparent_crc(p_488->g_440.s0, "p_488->g_440.s0", print_hash_value);
    transparent_crc(p_488->g_440.s1, "p_488->g_440.s1", print_hash_value);
    transparent_crc(p_488->g_440.s2, "p_488->g_440.s2", print_hash_value);
    transparent_crc(p_488->g_440.s3, "p_488->g_440.s3", print_hash_value);
    transparent_crc(p_488->g_440.s4, "p_488->g_440.s4", print_hash_value);
    transparent_crc(p_488->g_440.s5, "p_488->g_440.s5", print_hash_value);
    transparent_crc(p_488->g_440.s6, "p_488->g_440.s6", print_hash_value);
    transparent_crc(p_488->g_440.s7, "p_488->g_440.s7", print_hash_value);
    transparent_crc(p_488->g_444.s0, "p_488->g_444.s0", print_hash_value);
    transparent_crc(p_488->g_444.s1, "p_488->g_444.s1", print_hash_value);
    transparent_crc(p_488->g_444.s2, "p_488->g_444.s2", print_hash_value);
    transparent_crc(p_488->g_444.s3, "p_488->g_444.s3", print_hash_value);
    transparent_crc(p_488->g_444.s4, "p_488->g_444.s4", print_hash_value);
    transparent_crc(p_488->g_444.s5, "p_488->g_444.s5", print_hash_value);
    transparent_crc(p_488->g_444.s6, "p_488->g_444.s6", print_hash_value);
    transparent_crc(p_488->g_444.s7, "p_488->g_444.s7", print_hash_value);
    transparent_crc(p_488->g_450.x, "p_488->g_450.x", print_hash_value);
    transparent_crc(p_488->g_450.y, "p_488->g_450.y", print_hash_value);
    transparent_crc(p_488->g_450.z, "p_488->g_450.z", print_hash_value);
    transparent_crc(p_488->g_450.w, "p_488->g_450.w", print_hash_value);
    transparent_crc(p_488->v_collective, "p_488->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 76; i++)
            transparent_crc(p_488->l_special_values[i], "p_488->l_special_values[i]", print_hash_value);
    transparent_crc(p_488->l_comm_values[get_linear_local_id()], "p_488->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_488->g_comm_values[get_linear_group_id() * 155 + get_linear_local_id()], "p_488->g_comm_values[get_linear_group_id() * 155 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
