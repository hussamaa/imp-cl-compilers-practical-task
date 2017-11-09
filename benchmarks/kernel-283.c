// --atomics 17 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 45,3,63 -l 45,1,3
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

__constant uint32_t permutations[10][135] = {
{9,92,35,2,5,80,69,132,3,108,28,30,57,61,1,32,20,27,112,134,71,21,127,17,99,31,131,89,15,73,76,82,94,102,64,120,98,65,70,87,55,58,48,16,103,68,50,47,123,86,101,62,40,46,42,4,75,106,93,26,10,12,83,133,109,66,53,18,0,114,130,25,122,43,49,85,110,116,39,52,124,6,59,90,113,95,81,36,74,33,23,51,41,119,79,34,38,107,88,7,129,78,125,29,72,24,100,8,84,37,19,96,11,77,118,22,105,117,115,91,67,13,121,97,44,56,63,54,45,14,104,60,111,128,126}, // permutation 0
{133,12,99,70,132,33,38,118,108,71,24,53,44,23,131,29,35,43,26,86,96,32,130,62,124,90,39,16,122,87,28,128,69,113,25,45,65,51,79,11,110,49,31,8,74,91,129,80,15,41,36,19,105,72,52,104,111,107,114,93,22,34,85,75,121,125,109,54,78,88,77,20,112,84,60,123,5,3,120,59,106,17,117,73,92,57,67,37,50,116,4,115,119,94,89,61,102,0,30,97,95,63,98,64,13,47,27,81,2,46,42,127,66,55,100,40,6,18,1,83,76,9,14,134,56,58,21,7,126,103,101,10,82,48,68}, // permutation 1
{110,0,119,124,44,47,122,109,5,59,65,9,67,60,23,134,82,117,12,132,76,45,69,56,79,40,19,8,32,74,54,30,58,127,120,38,78,92,14,70,115,39,2,49,90,126,64,97,99,4,46,114,55,100,24,75,84,61,80,31,103,62,6,125,57,81,96,33,94,29,21,41,1,111,25,48,85,51,27,131,13,37,107,3,26,88,34,130,101,121,35,20,28,66,93,108,105,123,50,77,102,87,10,83,17,11,95,112,15,52,118,7,104,89,129,68,42,18,106,91,63,86,98,22,73,43,128,53,133,36,16,71,113,72,116}, // permutation 2
{14,132,38,24,62,91,116,126,44,33,124,20,5,94,74,6,98,30,70,82,72,23,95,3,21,48,133,58,96,34,86,18,54,114,103,61,118,28,39,11,99,63,71,111,55,65,134,77,85,109,100,105,131,129,106,89,19,84,102,64,37,42,80,68,16,113,52,27,50,25,120,107,10,121,53,122,12,75,128,101,1,56,125,57,83,2,97,104,127,40,112,15,87,110,46,35,115,92,123,130,69,90,41,108,26,117,93,32,88,49,45,13,73,31,119,78,67,59,4,66,0,60,47,17,9,81,29,36,79,51,43,22,76,8,7}, // permutation 3
{86,99,52,38,12,6,79,123,9,37,87,114,119,30,13,40,39,70,47,73,109,78,3,128,83,102,67,19,98,10,48,32,35,27,2,125,14,124,82,85,26,24,100,76,34,112,116,25,23,0,69,134,131,63,75,126,4,18,133,36,96,45,97,57,118,110,117,121,72,111,21,54,8,7,62,120,107,127,43,106,33,81,74,65,84,11,55,60,80,95,101,129,49,1,53,44,22,88,89,132,113,94,42,15,50,51,115,5,68,108,17,91,90,29,16,61,20,28,71,64,92,41,130,59,122,105,66,58,77,103,46,93,56,31,104}, // permutation 4
{103,114,70,132,90,52,64,111,60,19,43,118,134,85,78,14,27,28,57,126,104,120,56,123,1,80,49,101,87,74,10,119,5,58,100,94,2,11,106,122,7,92,36,21,42,50,54,33,125,75,16,48,102,113,26,13,31,66,39,32,88,133,24,38,95,81,107,73,3,29,45,59,131,77,23,130,96,15,86,129,108,46,51,6,34,82,55,12,67,69,17,0,93,30,20,84,112,117,121,99,62,91,53,89,41,4,127,97,9,63,109,115,105,37,47,76,40,68,8,98,25,18,44,71,116,83,124,72,65,128,110,35,22,61,79}, // permutation 5
{43,81,95,46,100,106,125,35,104,38,132,24,60,68,12,89,88,55,48,64,18,83,129,92,87,0,13,113,27,61,102,105,91,19,1,3,40,22,76,20,15,11,41,78,57,30,44,45,39,107,23,131,62,59,34,123,50,112,103,52,90,66,134,47,42,79,29,117,124,53,126,80,14,86,74,9,118,73,49,67,71,7,56,108,127,37,63,110,77,51,96,128,84,114,4,25,58,99,69,8,122,75,31,21,133,72,97,70,32,28,36,93,5,121,109,65,111,98,33,16,85,2,116,26,119,82,120,94,54,10,17,130,101,6,115}, // permutation 6
{83,116,40,123,104,93,92,45,68,110,107,49,53,95,96,23,127,72,122,118,126,54,86,112,11,14,3,51,76,4,31,109,1,57,25,46,133,98,132,130,43,22,73,81,29,12,13,84,111,102,35,0,8,15,105,50,124,47,97,115,41,63,36,99,16,6,100,78,131,89,30,20,106,71,59,42,121,5,79,77,119,61,18,101,82,64,117,80,34,128,120,28,26,62,65,75,74,66,108,21,27,69,129,48,113,39,32,114,55,33,94,125,103,58,10,67,85,87,24,7,2,88,70,134,91,19,44,90,52,56,37,60,17,38,9}, // permutation 7
{33,110,117,52,17,35,86,8,50,111,55,42,112,6,82,68,18,69,91,124,45,23,10,106,95,83,59,26,103,58,73,54,62,1,105,118,128,130,0,101,61,22,98,49,31,38,114,121,123,67,65,53,76,93,89,2,15,14,47,41,51,85,104,100,78,71,43,16,131,66,3,102,119,126,60,39,21,81,80,40,109,97,64,20,74,11,96,13,5,32,72,12,115,25,90,99,94,133,46,134,132,125,24,127,70,29,27,84,87,36,88,75,4,92,44,57,120,63,116,7,28,9,122,113,129,37,30,107,34,48,77,108,56,79,19}, // permutation 8
{31,28,105,43,75,21,116,82,22,60,99,66,132,50,42,63,117,133,45,96,104,89,16,5,27,65,7,2,35,38,10,44,3,123,94,73,11,103,92,87,19,86,74,129,24,102,90,71,18,69,126,114,33,56,80,85,12,93,127,37,17,30,125,78,111,15,107,41,34,55,83,47,98,119,62,100,64,79,134,115,76,67,124,58,36,46,84,53,26,61,57,72,131,32,77,108,122,20,49,81,9,4,95,25,14,106,8,23,13,54,39,91,120,121,52,68,70,29,51,130,6,118,88,59,113,101,0,1,112,48,40,128,109,97,110} // permutation 9
};

// Seed: 2189193884

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t  f0;
   int32_t  f1;
   int16_t  f2;
   volatile uint8_t  f3;
};

struct S1 {
    int32_t g_2;
    volatile VECTOR(int32_t, 16) g_7;
    VECTOR(int32_t, 8) g_12;
    VECTOR(uint8_t, 16) g_60;
    VECTOR(uint8_t, 4) g_61;
    VECTOR(uint8_t, 8) g_62;
    VECTOR(uint64_t, 4) g_76;
    VECTOR(int64_t, 2) g_77;
    int64_t *g_97;
    int32_t g_101;
    int32_t *g_100;
    VECTOR(int32_t, 16) g_149;
    uint8_t g_156;
    VECTOR(int32_t, 4) g_171;
    int16_t g_183;
    uint32_t g_222;
    int8_t g_235[7][9][4];
    int32_t g_238;
    VECTOR(int32_t, 16) g_245;
    VECTOR(uint32_t, 8) g_247;
    VECTOR(uint32_t, 4) g_252;
    VECTOR(uint32_t, 4) g_253;
    VECTOR(uint16_t, 4) g_254;
    VECTOR(int32_t, 16) g_284;
    VECTOR(int32_t, 2) g_285;
    VECTOR(int32_t, 4) g_286;
    VECTOR(int32_t, 16) g_305;
    VECTOR(int32_t, 2) g_306;
    volatile uint16_t g_312;
    volatile uint16_t *g_311;
    VECTOR(uint16_t, 4) g_324;
    int32_t g_370;
    VECTOR(uint32_t, 8) g_373;
    uint32_t g_381;
    int32_t g_382;
    VECTOR(int8_t, 8) g_397;
    VECTOR(int8_t, 16) g_398;
    VECTOR(int32_t, 8) g_436;
    VECTOR(uint64_t, 8) g_441;
    VECTOR(uint64_t, 2) g_442;
    VECTOR(uint64_t, 2) g_443;
    VECTOR(uint64_t, 8) g_444;
    uint32_t g_475;
    VECTOR(int16_t, 16) g_479;
    VECTOR(int8_t, 8) g_501;
    VECTOR(int8_t, 2) g_532;
    VECTOR(uint8_t, 4) g_534;
    volatile int32_t * volatile **g_552;
    VECTOR(uint32_t, 16) g_569;
    VECTOR(uint8_t, 8) g_583;
    VECTOR(uint16_t, 8) g_587;
    VECTOR(uint32_t, 8) g_598;
    VECTOR(uint32_t, 2) g_599;
    VECTOR(uint32_t, 8) g_601;
    VECTOR(uint32_t, 4) g_602;
    VECTOR(uint32_t, 4) g_603;
    VECTOR(uint32_t, 16) g_606;
    VECTOR(uint32_t, 2) g_649;
    VECTOR(uint32_t, 2) g_652;
    uint16_t * volatile **g_675[5];
    VECTOR(int16_t, 4) g_718;
    int16_t g_729;
    VECTOR(int8_t, 16) g_736;
    VECTOR(uint8_t, 4) g_746;
    VECTOR(uint8_t, 16) g_748;
    VECTOR(uint64_t, 8) g_789;
    int32_t *g_806;
    int64_t g_809;
    int32_t g_839;
    volatile union U0 g_851;
    uint32_t g_854;
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
uint32_t  func_1(struct S1 * p_860);
uint32_t  func_8(uint16_t  p_9, struct S1 * p_860);
uint64_t  func_25(int64_t  p_26, int16_t  p_27, int32_t * p_28, struct S1 * p_860);
int64_t  func_29(int64_t * p_30, struct S1 * p_860);
int64_t * func_31(uint8_t  p_32, struct S1 * p_860);
uint64_t  func_51(int64_t  p_52, uint64_t  p_53, int32_t * p_54, int64_t  p_55, int64_t  p_56, struct S1 * p_860);
uint64_t  func_78(int64_t * p_79, int64_t * p_80, int32_t * p_81, int32_t * p_82, struct S1 * p_860);
int64_t * func_83(int32_t * p_84, int64_t * p_85, int64_t  p_86, int64_t  p_87, uint32_t  p_88, struct S1 * p_860);
int32_t * func_89(int32_t  p_90, int32_t * p_91, struct S1 * p_860);
int64_t * func_93(int64_t * p_94, int32_t * p_95, int64_t  p_96, struct S1 * p_860);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_860->g_2 p_860->l_comm_values p_860->g_12 p_860->g_436 p_860->g_443 p_860->g_501 p_860->g_851 p_860->g_854 p_860->g_442 p_860->g_247 p_860->g_305 p_860->g_789
 * writes: p_860->g_2 p_860->g_comm_values p_860->g_436 p_860->g_443 p_860->g_7
 */
uint32_t  func_1(struct S1 * p_860)
{ /* block id: 4 */
    int32_t l_859 = 0x6B5DF70EL;
    for (p_860->g_2 = 0; (p_860->g_2 <= 8); ++p_860->g_2)
    { /* block id: 7 */
        uint64_t *l_842 = (void*)0;
        uint64_t *l_843 = (void*)0;
        uint64_t *l_844[8][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        p_860->g_7.sa = ((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(p_860->g_7.sc25bfc88)).s6, (func_8(p_860->l_comm_values[(safe_mod_func_uint32_t_u_u(p_860->tid, 135))], p_860) || GROUP_DIVERGE(0, 1)))) , (safe_rshift_func_int16_t_s_u((((p_860->g_443.y++) <= p_860->g_501.s7) | (safe_mul_func_uint8_t_u_u(255UL, (safe_mul_func_int8_t_s_s((p_860->g_851 , ((safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_860->global_2_offset, get_global_id(2), 10), p_860->g_854)) <= ((safe_sub_func_int64_t_s_s(((-1L) && p_860->g_442.x), (safe_add_func_uint32_t_u_u(p_860->g_247.s2, l_859)))) , 0L))), p_860->g_305.s1))))), 12)));
    }
    return p_860->g_789.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_860->g_12 p_860->g_60 p_860->g_61 p_860->g_62 p_860->g_76 p_860->g_77 p_860->g_97 p_860->g_2 p_860->g_comm_values p_860->g_100 p_860->g_149 p_860->g_156 p_860->g_171 p_860->g_183 p_860->g_101 p_860->g_235 p_860->g_245 p_860->g_247 p_860->g_252 p_860->g_253 p_860->g_254 p_860->l_comm_values p_860->g_284 p_860->g_285 p_860->g_286 p_860->g_222 p_860->g_501 p_860->g_306 p_860->g_324 p_860->g_552 p_860->g_381 p_860->g_305 p_860->g_382 p_860->g_583 p_860->g_238 p_860->g_789 p_860->g_806 p_860->g_736 p_860->g_603 p_860->g_397 p_860->g_602 p_860->g_398 p_860->g_436
 * writes: p_860->g_comm_values p_860->g_12 p_860->g_100 p_860->g_101 p_860->g_61 p_860->g_149 p_860->g_183 p_860->g_171 p_860->g_222 p_860->g_235 p_860->g_238 p_860->g_381 p_860->g_382 p_860->g_370 p_860->g_285 p_860->l_comm_values p_860->g_306 p_860->g_475 p_860->g_156 p_860->g_252 p_860->g_286 p_860->g_809 p_860->g_398 p_860->g_839 p_860->g_436
 */
uint32_t  func_8(uint16_t  p_9, struct S1 * p_860)
{ /* block id: 8 */
    int32_t *l_10 = (void*)0;
    int32_t *l_11 = (void*)0;
    int32_t *l_13 = (void*)0;
    int32_t *l_14[1];
    uint64_t l_15 = 0UL;
    int64_t *l_18 = (void*)0;
    int64_t *l_19 = (void*)0;
    int64_t *l_20[4][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint8_t l_834 = 0x59L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_14[i] = (void*)0;
    l_15++;
    p_860->g_436.s5 ^= ((p_860->g_comm_values[p_860->tid] = p_860->g_12.s0) , (((VECTOR(int8_t, 4))(0x79L, (safe_add_func_int8_t_s_s(((((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0UL, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x7EL, (safe_mul_func_int16_t_s_s((((func_25((p_9 , func_29(func_31(p_9, p_860), p_860)), l_834, l_11, p_860) | (!(p_860->g_839 = p_9))) , l_10) == &p_860->g_2), p_9)), (-4L), 0L)).yzzzyyzyxyxyywyz)).s1c)), 0x52L)).wxwyzwwzzxwzyxxz))).s8b, ((VECTOR(uint8_t, 2))(0xF9L)), ((VECTOR(uint8_t, 2))(251UL))))), ((VECTOR(uint8_t, 8))(1UL)), 0x51L, ((VECTOR(uint8_t, 4))(0x50L)))).sa7)).xxyxyxyyxxyxxxxx, ((VECTOR(uint8_t, 16))(0xD9L))))).sa ^ p_9) && p_9), p_9)), 3L, 0x25L)).x & p_9));
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_25(int64_t  p_26, int16_t  p_27, int32_t * p_28, struct S1 * p_860)
{ /* block id: 330 */
    if ((atomic_inc(&p_860->l_atomic_input[8]) == 4))
    { /* block id: 332 */
        VECTOR(uint32_t, 4) l_835 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x6CD5A1DDL), 0x6CD5A1DDL);
        int32_t l_837 = 1L;
        int32_t *l_836 = &l_837;
        int32_t *l_838 = (void*)0;
        int i;
        l_838 = (l_835.y , l_836);
        unsigned int result = 0;
        result += l_835.w;
        result += l_835.z;
        result += l_835.y;
        result += l_835.x;
        result += l_837;
        atomic_add(&p_860->l_special_values[8], result);
    }
    else
    { /* block id: 334 */
        (1 + 1);
    }
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_860->g_583 p_860->g_736 p_860->g_305 p_860->g_603 p_860->g_76 p_860->g_149 p_860->g_60 p_860->g_252 p_860->g_2 p_860->g_97 p_860->g_552 p_860->g_381 p_860->g_324 p_860->g_253 p_860->g_382 p_860->g_285 p_860->g_235 p_860->g_254 p_860->g_62 p_860->g_77 p_860->g_238 p_860->g_286 p_860->g_171 p_860->g_100 p_860->g_789 p_860->g_806 p_860->g_245 p_860->g_397 p_860->g_602 p_860->g_398
 * writes: p_860->g_12 p_860->g_222 p_860->g_149 p_860->g_101 p_860->g_238 p_860->g_381 p_860->g_100 p_860->g_382 p_860->g_370 p_860->g_285 p_860->l_comm_values p_860->g_306 p_860->g_171 p_860->g_183 p_860->g_475 p_860->g_156 p_860->g_252 p_860->g_286 p_860->g_809 p_860->g_398
 */
int64_t  func_29(int64_t * p_30, struct S1 * p_860)
{ /* block id: 324 */
    uint32_t l_812[6][9][4] = {{{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL}},{{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL}},{{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL}},{{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL}},{{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL}},{{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL},{0x846BB145L,1UL,0xBE46219AL,0xFC3B16EAL}}};
    VECTOR(int32_t, 2) l_815 = (VECTOR(int32_t, 2))((-9L), 0L);
    int32_t **l_824[10] = {&p_860->g_100,(void*)0,&p_860->g_100,&p_860->g_100,(void*)0,&p_860->g_100,&p_860->g_100,(void*)0,&p_860->g_100,&p_860->g_100};
    int32_t **l_826 = &p_860->g_806;
    int32_t ***l_825 = &l_826;
    uint64_t *l_832 = (void*)0;
    uint64_t **l_831 = &l_832;
    int8_t *l_833[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_833[i] = &p_860->g_235[2][4][0];
    p_860->g_285.x = (safe_rshift_func_int8_t_s_u(l_812[4][3][1], (safe_mod_func_uint8_t_u_u(l_812[1][2][1], ((((((VECTOR(int32_t, 4))(l_815.yxxx)).y & ((safe_sub_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((p_860->g_398.se = (((*l_831) = ((l_812[5][7][1] || (0x14B8FAAB57C3F811L & 0L)) , func_31((((l_812[4][3][1] , l_824[7]) != ((*l_825) = l_824[7])) , (((+(((safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s(p_860->g_583.s7, (-1L))), p_860->g_736.s1)) , &p_860->g_238) == &p_860->g_238)) != p_860->g_305.s2) , p_860->g_603.x)), p_860))) != p_860->g_97)), p_860->g_305.sd)), p_860->g_245.s7)), 2)) & FAKE_DIVERGE(p_860->group_2_offset, get_group_id(2), 10)), 0x8DDB75B18CC1661BL)) == p_860->g_77.y)) , p_860->g_397.s5) ^ 1L) , p_860->g_602.z)))));
    return p_860->g_398.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_860->g_60 p_860->g_61 p_860->g_62 p_860->g_76 p_860->g_77 p_860->g_97 p_860->g_2 p_860->g_comm_values p_860->g_100 p_860->g_149 p_860->g_156 p_860->g_171 p_860->g_183 p_860->g_101 p_860->g_235 p_860->g_245 p_860->g_247 p_860->g_252 p_860->g_253 p_860->g_254 p_860->l_comm_values p_860->g_284 p_860->g_285 p_860->g_286 p_860->g_222 p_860->g_501 p_860->g_306 p_860->g_324 p_860->g_552 p_860->g_381 p_860->g_305 p_860->g_382 p_860->g_583 p_860->g_238 p_860->g_789 p_860->g_806
 * writes: p_860->g_12 p_860->g_100 p_860->g_101 p_860->g_61 p_860->g_149 p_860->g_183 p_860->g_171 p_860->g_222 p_860->g_235 p_860->g_238 p_860->g_381 p_860->g_382 p_860->g_370 p_860->g_285 p_860->l_comm_values p_860->g_306 p_860->g_475 p_860->g_156 p_860->g_252 p_860->g_286 p_860->g_809
 */
int64_t * func_31(uint8_t  p_32, struct S1 * p_860)
{ /* block id: 11 */
    int32_t l_46 = 0x34D12EA0L;
    VECTOR(int8_t, 4) l_63 = (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 0x6DL), 0x6DL);
    uint64_t l_280 = 0UL;
    VECTOR(int32_t, 8) l_281 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    int16_t *l_290 = &p_860->g_183;
    int32_t **l_294[5];
    int32_t ***l_293[5];
    int64_t l_300 = (-4L);
    VECTOR(int32_t, 4) l_433 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 5L), 5L);
    VECTOR(uint64_t, 8) l_438 = (VECTOR(uint64_t, 8))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x8810AB4BD532876CL), 0x8810AB4BD532876CL), 0x8810AB4BD532876CL, 18446744073709551611UL, 0x8810AB4BD532876CL);
    VECTOR(int64_t, 2) l_459 = (VECTOR(int64_t, 2))((-1L), 1L);
    VECTOR(int16_t, 16) l_478 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1998L), 0x1998L), 0x1998L, 0L, 0x1998L, (VECTOR(int16_t, 2))(0L, 0x1998L), (VECTOR(int16_t, 2))(0L, 0x1998L), 0L, 0x1998L, 0L, 0x1998L);
    VECTOR(int16_t, 2) l_480 = (VECTOR(int16_t, 2))(0x360FL, (-2L));
    VECTOR(int16_t, 8) l_481 = (VECTOR(int16_t, 8))(0x10B6L, (VECTOR(int16_t, 4))(0x10B6L, (VECTOR(int16_t, 2))(0x10B6L, (-1L)), (-1L)), (-1L), 0x10B6L, (-1L));
    VECTOR(uint8_t, 16) l_512 = (VECTOR(uint8_t, 16))(0x2CL, (VECTOR(uint8_t, 4))(0x2CL, (VECTOR(uint8_t, 2))(0x2CL, 246UL), 246UL), 246UL, 0x2CL, 246UL, (VECTOR(uint8_t, 2))(0x2CL, 246UL), (VECTOR(uint8_t, 2))(0x2CL, 246UL), 0x2CL, 246UL, 0x2CL, 246UL);
    int8_t *l_515 = (void*)0;
    VECTOR(int8_t, 2) l_533 = (VECTOR(int8_t, 2))(0x1EL, 0x68L);
    VECTOR(int16_t, 4) l_568 = (VECTOR(int16_t, 4))(0x562DL, (VECTOR(int16_t, 2))(0x562DL, 0x0D49L), 0x0D49L);
    VECTOR(uint64_t, 8) l_579 = (VECTOR(uint64_t, 8))(0x0335CC0D82866581L, (VECTOR(uint64_t, 4))(0x0335CC0D82866581L, (VECTOR(uint64_t, 2))(0x0335CC0D82866581L, 0xAC90319BA53C01A2L), 0xAC90319BA53C01A2L), 0xAC90319BA53C01A2L, 0x0335CC0D82866581L, 0xAC90319BA53C01A2L);
    VECTOR(uint16_t, 16) l_586 = (VECTOR(uint16_t, 16))(0xCBBDL, (VECTOR(uint16_t, 4))(0xCBBDL, (VECTOR(uint16_t, 2))(0xCBBDL, 0xD95DL), 0xD95DL), 0xD95DL, 0xCBBDL, 0xD95DL, (VECTOR(uint16_t, 2))(0xCBBDL, 0xD95DL), (VECTOR(uint16_t, 2))(0xCBBDL, 0xD95DL), 0xCBBDL, 0xD95DL, 0xCBBDL, 0xD95DL);
    VECTOR(uint32_t, 8) l_604 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x4DF08E85L), 0x4DF08E85L), 0x4DF08E85L, 1UL, 0x4DF08E85L);
    VECTOR(uint64_t, 16) l_639 = (VECTOR(uint64_t, 16))(0xC46755B4A1FDFA45L, (VECTOR(uint64_t, 4))(0xC46755B4A1FDFA45L, (VECTOR(uint64_t, 2))(0xC46755B4A1FDFA45L, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0xC46755B4A1FDFA45L, 18446744073709551614UL, (VECTOR(uint64_t, 2))(0xC46755B4A1FDFA45L, 18446744073709551614UL), (VECTOR(uint64_t, 2))(0xC46755B4A1FDFA45L, 18446744073709551614UL), 0xC46755B4A1FDFA45L, 18446744073709551614UL, 0xC46755B4A1FDFA45L, 18446744073709551614UL);
    int32_t *l_642 = &p_860->g_370;
    VECTOR(uint32_t, 16) l_651 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x9E7B1944L), 0x9E7B1944L), 0x9E7B1944L, 4294967295UL, 0x9E7B1944L, (VECTOR(uint32_t, 2))(4294967295UL, 0x9E7B1944L), (VECTOR(uint32_t, 2))(4294967295UL, 0x9E7B1944L), 4294967295UL, 0x9E7B1944L, 4294967295UL, 0x9E7B1944L);
    VECTOR(uint32_t, 8) l_653 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x49C41F58L), 0x49C41F58L), 0x49C41F58L, 4294967295UL, 0x49C41F58L);
    VECTOR(uint8_t, 8) l_670 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
    uint16_t l_676 = 1UL;
    uint64_t l_679 = 18446744073709551614UL;
    uint64_t l_682 = 0UL;
    int32_t l_686[2][4][2] = {{{0x378A8920L,1L},{0x378A8920L,1L},{0x378A8920L,1L},{0x378A8920L,1L}},{{0x378A8920L,1L},{0x378A8920L,1L},{0x378A8920L,1L},{0x378A8920L,1L}}};
    uint8_t l_695 = 251UL;
    int32_t l_726 = 0L;
    VECTOR(int8_t, 2) l_734 = (VECTOR(int8_t, 2))(1L, (-9L));
    VECTOR(int8_t, 2) l_737 = (VECTOR(int8_t, 2))(6L, 0x65L);
    VECTOR(int8_t, 2) l_738 = (VECTOR(int8_t, 2))(0x06L, 7L);
    uint16_t *l_750 = (void*)0;
    uint16_t **l_749 = &l_750;
    VECTOR(uint64_t, 8) l_753 = (VECTOR(uint64_t, 8))(0xD2F1C37F64CAE513L, (VECTOR(uint64_t, 4))(0xD2F1C37F64CAE513L, (VECTOR(uint64_t, 2))(0xD2F1C37F64CAE513L, 0UL), 0UL), 0UL, 0xD2F1C37F64CAE513L, 0UL);
    VECTOR(int16_t, 2) l_760 = (VECTOR(int16_t, 2))(0x7D4CL, 0x2E64L);
    VECTOR(uint16_t, 2) l_794 = (VECTOR(uint16_t, 2))(65535UL, 0x7792L);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_294[i] = &p_860->g_100;
    for (i = 0; i < 5; i++)
        l_293[i] = &l_294[3];
    if ((atomic_inc(&p_860->g_atomic_input[17 * get_linear_group_id() + 13]) == 6))
    { /* block id: 13 */
        int16_t l_33 = 0x1A81L;
        int32_t *l_34 = (void*)0;
        int32_t l_36 = (-8L);
        int32_t *l_35 = &l_36;
        int32_t *l_37 = &l_36;
        int32_t *l_38 = &l_36;
        int32_t l_39 = 0x0D4A498AL;
        int8_t l_40[1][1][5];
        uint8_t l_41 = 0x68L;
        uint32_t l_42 = 1UL;
        int32_t l_43 = 0x2323A35EL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_40[i][j][k] = (-7L);
            }
        }
        l_38 = (l_33 , (l_37 = (l_35 = l_34)));
        l_43 &= (l_42 = ((l_39 , (GROUP_DIVERGE(0, 1) , l_40[0][0][0])) , l_41));
        for (l_42 = (-18); (l_42 <= 29); l_42 = safe_add_func_uint32_t_u_u(l_42, 9))
        { /* block id: 21 */
            l_36 |= (-1L);
            l_36 = (-1L);
        }
        unsigned int result = 0;
        result += l_33;
        result += l_36;
        result += l_39;
        int l_40_i0, l_40_i1, l_40_i2;
        for (l_40_i0 = 0; l_40_i0 < 1; l_40_i0++) {
            for (l_40_i1 = 0; l_40_i1 < 1; l_40_i1++) {
                for (l_40_i2 = 0; l_40_i2 < 5; l_40_i2++) {
                    result += l_40[l_40_i0][l_40_i1][l_40_i2];
                }
            }
        }
        result += l_41;
        result += l_42;
        result += l_43;
        atomic_add(&p_860->g_special_values[17 * get_linear_group_id() + 13], result);
    }
    else
    { /* block id: 25 */
        (1 + 1);
    }
    if (l_46)
    { /* block id: 28 */
        uint32_t l_47 = 4294967295UL;
        int32_t *l_48 = (void*)0;
        int32_t *l_49 = (void*)0;
        int32_t *l_50 = &l_46;
        VECTOR(uint8_t, 4) l_59 = (VECTOR(uint8_t, 4))(0xB7L, (VECTOR(uint8_t, 2))(0xB7L, 0x75L), 0x75L);
        int32_t **l_98 = &l_49;
        int32_t **l_99[10];
        int64_t l_262 = 9L;
        uint32_t l_277[4][2][8] = {{{4294967287UL,1UL,1UL,4294967287UL,0x82C4D354L,4294967291UL,4294967291UL,0x82C4D354L},{4294967287UL,1UL,1UL,4294967287UL,0x82C4D354L,4294967291UL,4294967291UL,0x82C4D354L}},{{4294967287UL,1UL,1UL,4294967287UL,0x82C4D354L,4294967291UL,4294967291UL,0x82C4D354L},{4294967287UL,1UL,1UL,4294967287UL,0x82C4D354L,4294967291UL,4294967291UL,0x82C4D354L}},{{4294967287UL,1UL,1UL,4294967287UL,0x82C4D354L,4294967291UL,4294967291UL,0x82C4D354L},{4294967287UL,1UL,1UL,4294967287UL,0x82C4D354L,4294967291UL,4294967291UL,0x82C4D354L}},{{4294967287UL,1UL,1UL,4294967287UL,0x82C4D354L,4294967291UL,4294967291UL,0x82C4D354L},{4294967287UL,1UL,1UL,4294967287UL,0x82C4D354L,4294967291UL,4294967291UL,0x82C4D354L}}};
        VECTOR(int32_t, 2) l_282 = (VECTOR(int32_t, 2))(0x5BAAB0F4L, 0x19A04B6DL);
        VECTOR(int32_t, 16) l_283 = (VECTOR(int32_t, 16))(0x2E211044L, (VECTOR(int32_t, 4))(0x2E211044L, (VECTOR(int32_t, 2))(0x2E211044L, 0x07992483L), 0x07992483L), 0x07992483L, 0x2E211044L, 0x07992483L, (VECTOR(int32_t, 2))(0x2E211044L, 0x07992483L), (VECTOR(int32_t, 2))(0x2E211044L, 0x07992483L), 0x2E211044L, 0x07992483L, 0x2E211044L, 0x07992483L);
        VECTOR(int64_t, 8) l_287 = (VECTOR(int64_t, 8))(0x56B5D0F93ABB7212L, (VECTOR(int64_t, 4))(0x56B5D0F93ABB7212L, (VECTOR(int64_t, 2))(0x56B5D0F93ABB7212L, 0L), 0L), 0L, 0x56B5D0F93ABB7212L, 0L);
        uint32_t *l_288 = &p_860->g_222;
        int16_t *l_289 = &p_860->g_183;
        VECTOR(int8_t, 2) l_291 = (VECTOR(int8_t, 2))(0x06L, 0x06L);
        VECTOR(int8_t, 16) l_292 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x52L), 0x52L), 0x52L, (-1L), 0x52L, (VECTOR(int8_t, 2))((-1L), 0x52L), (VECTOR(int8_t, 2))((-1L), 0x52L), (-1L), 0x52L, (-1L), 0x52L);
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_99[i] = &l_50;
        (*l_50) |= l_47;
        l_280 |= (((l_46 = func_51((safe_mul_func_int16_t_s_s((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_59.zwwwwzzw)).even)).ywxxzyww, ((VECTOR(uint8_t, 2))(p_860->g_60.s65)).xyxyyxyx))).s5, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0UL, ((VECTOR(uint8_t, 4))(p_860->g_61.xzyw)), ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_860->g_62.s6013)).zzzzxyyz)))).s21, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(l_63.wxzxywwwwxxwzwzz)).hi))).s27))))).xyyy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(250UL, 0xA3L, 0xA5L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(251UL, 0xF9L)), 1UL, 255UL)), (safe_mod_func_uint64_t_u_u((FAKE_DIVERGE(p_860->group_0_offset, get_group_id(0), 10) , (((safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((255UL != (p_32 , (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((VECTOR(uint64_t, 2))(p_860->g_76.wx)).lo || ((VECTOR(int64_t, 4))(p_860->g_77.yyyx)).y) || (FAKE_DIVERGE(p_860->local_2_offset, get_local_id(2), 10) , (func_78(func_83(func_89(p_860->g_77.y, l_48, p_860), func_93(p_860->g_97, (p_860->g_100 = ((*l_98) = &p_860->g_2)), ((safe_mod_func_uint8_t_u_u((((void*)0 != &p_860->g_2) & 1UL), 0x79L)) , p_860->g_60.sb), p_860), p_32, p_860->g_245.s6, l_262, p_860), &l_262, &p_860->g_2, &p_860->g_2, p_860) | 5L))), 0x5AL)), l_277[3][1][1])), p_860->g_77.x)))) ^ 0x51B6L), p_860->g_252.y)), 18446744073709551615UL)) | l_46) <= p_860->g_247.s3)), 0x5D66ABB72AB68A4BL)), 0x58L, p_32, ((VECTOR(uint8_t, 4))(1UL)), 0x2EL, 6UL)).s2354)), ((VECTOR(uint8_t, 4))(255UL))))).xxxzyxwyxzyzwzyz)).sda, ((VECTOR(uint8_t, 2))(9UL)), ((VECTOR(uint8_t, 2))(1UL))))), 0x61L)))), l_63.y, ((VECTOR(uint8_t, 4))(0xB7L)), 2UL)).s6b))))).yyxy)).y & 0xECL), p_32)), p_32, &l_46, p_32, p_860->g_76.z, p_860)) , l_63.y) <= p_860->g_252.w);
        (*l_98) = func_89(p_32, (*l_98), p_860);
        (*l_50) = (+((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(l_281.s17335231)).s3611053261671310, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_282.xx)).yyyxxxxy)), ((VECTOR(int32_t, 8))(l_283.s4a0c32b6)))).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_860->g_284.s27)).yyyx)).zwxwwyyy))).odd, ((VECTOR(int32_t, 8))(0x23C30839L, ((VECTOR(int32_t, 2))(0x4BBC88DCL, 3L)), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(p_860->g_285.yyyyyxxx)).s6747031374027560))).hi)).s16, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(p_860->g_286.zzwwwyzxwxyzxzxw)).s0d, (int32_t)0x1E98E751L))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((((((*l_288) = (p_32 | ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_287.s20)).yyxxyyxyxxyxyxyy)).s4)) >= (p_32 , (l_289 != l_290))) <= ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(1L, 0x13L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(l_291.yxyx)).wyyxyyyxxwwwwyww))).s952c)), ((VECTOR(int8_t, 8))(l_292.s0555534b)), 0x4EL, 1L)).sf) == p_32), ((VECTOR(int32_t, 2))(0x6F6E2309L, 3L)), (-3L))))), (int32_t)(((void*)0 == l_293[4]) , p_860->g_254.y)))).lo))))))))), 4L, 1L, 0x1CF414FDL)).hi))).wzwwwxwwwzyxyxww))).s5);
    }
    else
    { /* block id: 149 */
        int32_t *l_297[2][2];
        int32_t l_299 = 0x67C45ABCL;
        int32_t l_301[5];
        VECTOR(uint16_t, 16) l_315 = (VECTOR(uint16_t, 16))(0xD0EEL, (VECTOR(uint16_t, 4))(0xD0EEL, (VECTOR(uint16_t, 2))(0xD0EEL, 65535UL), 65535UL), 65535UL, 0xD0EEL, 65535UL, (VECTOR(uint16_t, 2))(0xD0EEL, 65535UL), (VECTOR(uint16_t, 2))(0xD0EEL, 65535UL), 0xD0EEL, 65535UL, 0xD0EEL, 65535UL);
        int8_t l_341 = 0x4BL;
        int64_t l_352 = 0x3D300793415F8F7BL;
        VECTOR(uint64_t, 8) l_456 = (VECTOR(uint64_t, 8))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 0x884F5949661BD51DL), 0x884F5949661BD51DL), 0x884F5949661BD51DL, 8UL, 0x884F5949661BD51DL);
        VECTOR(int16_t, 16) l_482 = (VECTOR(int16_t, 16))(0x10FCL, (VECTOR(int16_t, 4))(0x10FCL, (VECTOR(int16_t, 2))(0x10FCL, 0x5370L), 0x5370L), 0x5370L, 0x10FCL, 0x5370L, (VECTOR(int16_t, 2))(0x10FCL, 0x5370L), (VECTOR(int16_t, 2))(0x10FCL, 0x5370L), 0x10FCL, 0x5370L, 0x10FCL, 0x5370L);
        int8_t l_495 = (-1L);
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_297[i][j] = &p_860->g_238;
        }
        for (i = 0; i < 5; i++)
            l_301[i] = (-1L);
        for (p_860->g_222 = (-30); (p_860->g_222 == 25); p_860->g_222 = safe_add_func_uint64_t_u_u(p_860->g_222, 2))
        { /* block id: 152 */
            uint32_t l_302 = 0xF4F48F44L;
            int32_t l_337[10] = {0x4F892F03L,0x4F892F03L,0x4F892F03L,0x4F892F03L,0x4F892F03L,0x4F892F03L,0x4F892F03L,0x4F892F03L,0x4F892F03L,0x4F892F03L};
            VECTOR(int8_t, 2) l_380 = (VECTOR(int8_t, 2))((-8L), 0x3BL);
            int64_t *l_391 = (void*)0;
            int32_t l_420 = 0x66FBECAAL;
            VECTOR(int64_t, 16) l_437 = (VECTOR(int64_t, 16))(0x3E5BC48D2985154EL, (VECTOR(int64_t, 4))(0x3E5BC48D2985154EL, (VECTOR(int64_t, 2))(0x3E5BC48D2985154EL, 0x016C54924208B8FCL), 0x016C54924208B8FCL), 0x016C54924208B8FCL, 0x3E5BC48D2985154EL, 0x016C54924208B8FCL, (VECTOR(int64_t, 2))(0x3E5BC48D2985154EL, 0x016C54924208B8FCL), (VECTOR(int64_t, 2))(0x3E5BC48D2985154EL, 0x016C54924208B8FCL), 0x3E5BC48D2985154EL, 0x016C54924208B8FCL, 0x3E5BC48D2985154EL, 0x016C54924208B8FCL);
            int32_t l_474 = 0x0F7284FCL;
            int32_t **l_487 = &p_860->g_100;
            int8_t *l_498 = &l_341;
            int i;
            (1 + 1);
        }
    }
    p_860->g_149.s6 &= ((((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(p_860->g_501.s73)).yxxxxxyx, ((VECTOR(int8_t, 2))(0L, 0x54L)).xxyxxxxy, ((VECTOR(int8_t, 16))((safe_mul_func_uint8_t_u_u((p_32 , p_860->g_77.x), ((void*)0 != l_290))), 7L, (+((VECTOR(int8_t, 2))(0x4CL, 0x7DL)).lo), 0x01L, (safe_lshift_func_int16_t_s_s((+((((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(0x2AL, ((VECTOR(uint8_t, 8))(l_512.sca343df7)).s6)), p_32)) && 0x1D8E1AB5L) == (0UL > ((safe_lshift_func_int8_t_s_s((1L > p_32), p_32)) != 4294967290UL))) , p_860->g_306.y)), p_32)), 0x77L, 0x3FL, p_32, ((VECTOR(int8_t, 4))((-1L))), ((VECTOR(int8_t, 2))((-9L))), 0L, 0x45L)).lo))).s45)).yyyy, ((VECTOR(int8_t, 4))(0x2EL)), ((VECTOR(int8_t, 4))(0x28L))))), ((VECTOR(int8_t, 2))(0x52L)), ((VECTOR(int8_t, 2))(0x08L)), p_860->g_253.y, 0L, 0x32L, ((VECTOR(int8_t, 4))(0x28L))))))))).s7083, ((VECTOR(uint8_t, 4))(248UL))))), p_860->g_324.x, 0x09L, 0xC9L, 0x4EL)).s6 < p_32) , (void*)0) != l_515) ^ p_32);
    for (p_860->g_101 = 11; (p_860->g_101 == (-17)); p_860->g_101 = safe_sub_func_int64_t_s_s(p_860->g_101, 2))
    { /* block id: 207 */
        uint32_t *l_536 = (void*)0;
        int32_t l_543[1][5][9] = {{{1L,9L,6L,9L,1L,1L,9L,6L,9L},{1L,9L,6L,9L,1L,1L,9L,6L,9L},{1L,9L,6L,9L,1L,1L,9L,6L,9L},{1L,9L,6L,9L,1L,1L,9L,6L,9L},{1L,9L,6L,9L,1L,1L,9L,6L,9L}}};
        int16_t l_544 = 0x162EL;
        uint16_t l_557 = 0xE8F1L;
        uint32_t l_595 = 0UL;
        VECTOR(int32_t, 4) l_600 = (VECTOR(int32_t, 4))(0x5DD0561DL, (VECTOR(int32_t, 2))(0x5DD0561DL, (-8L)), (-8L));
        VECTOR(uint32_t, 16) l_605 = (VECTOR(uint32_t, 16))(0xC8F00AE4L, (VECTOR(uint32_t, 4))(0xC8F00AE4L, (VECTOR(uint32_t, 2))(0xC8F00AE4L, 4294967295UL), 4294967295UL), 4294967295UL, 0xC8F00AE4L, 4294967295UL, (VECTOR(uint32_t, 2))(0xC8F00AE4L, 4294967295UL), (VECTOR(uint32_t, 2))(0xC8F00AE4L, 4294967295UL), 0xC8F00AE4L, 4294967295UL, 0xC8F00AE4L, 4294967295UL);
        uint64_t *l_609 = (void*)0;
        int32_t l_613[4][6][7] = {{{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L}},{{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L}},{{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L}},{{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L},{0L,1L,0L,0L,1L,0L,0x5BD9A456L}}};
        uint16_t *l_618 = &l_557;
        uint16_t **l_617 = &l_618;
        uint16_t ***l_616 = &l_617;
        VECTOR(uint32_t, 16) l_621 = (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x6368B1ECL), 0x6368B1ECL), 0x6368B1ECL, 4294967286UL, 0x6368B1ECL, (VECTOR(uint32_t, 2))(4294967286UL, 0x6368B1ECL), (VECTOR(uint32_t, 2))(4294967286UL, 0x6368B1ECL), 4294967286UL, 0x6368B1ECL, 4294967286UL, 0x6368B1ECL);
        VECTOR(uint32_t, 2) l_636 = (VECTOR(uint32_t, 2))(0x79E944F4L, 4294967288UL);
        VECTOR(uint64_t, 4) l_640 = (VECTOR(uint64_t, 4))(0xA627542130248E46L, (VECTOR(uint64_t, 2))(0xA627542130248E46L, 7UL), 7UL);
        VECTOR(uint64_t, 16) l_641 = (VECTOR(uint64_t, 16))(0x8D6150A33C5D50CDL, (VECTOR(uint64_t, 4))(0x8D6150A33C5D50CDL, (VECTOR(uint64_t, 2))(0x8D6150A33C5D50CDL, 0xA65C614332D795A4L), 0xA65C614332D795A4L), 0xA65C614332D795A4L, 0x8D6150A33C5D50CDL, 0xA65C614332D795A4L, (VECTOR(uint64_t, 2))(0x8D6150A33C5D50CDL, 0xA65C614332D795A4L), (VECTOR(uint64_t, 2))(0x8D6150A33C5D50CDL, 0xA65C614332D795A4L), 0x8D6150A33C5D50CDL, 0xA65C614332D795A4L, 0x8D6150A33C5D50CDL, 0xA65C614332D795A4L);
        VECTOR(uint32_t, 8) l_650 = (VECTOR(uint32_t, 8))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 1UL), 1UL), 1UL, 9UL, 1UL);
        VECTOR(uint32_t, 4) l_654 = (VECTOR(uint32_t, 4))(0x5C9966AAL, (VECTOR(uint32_t, 2))(0x5C9966AAL, 4294967287UL), 4294967287UL);
        int32_t l_663 = 0x7495997DL;
        int64_t *l_677 = &l_300;
        uint16_t *l_678[5][10] = {{&l_676,&l_676,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_676,&l_676,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_676,&l_676,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_676,&l_676,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_676,&l_676,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint64_t *l_680[10] = {&l_679,(void*)0,(void*)0,(void*)0,&l_679,&l_679,(void*)0,(void*)0,(void*)0,&l_679};
        uint8_t *l_797 = &l_695;
        int i, j, k;
        for (p_860->g_238 = 1; (p_860->g_238 <= (-5)); --p_860->g_238)
        { /* block id: 210 */
            uint32_t *l_528 = (void*)0;
            uint32_t *l_529 = &p_860->g_381;
            VECTOR(uint8_t, 8) l_535 = (VECTOR(uint8_t, 8))(0x8DL, (VECTOR(uint8_t, 4))(0x8DL, (VECTOR(uint8_t, 2))(0x8DL, 249UL), 249UL), 249UL, 0x8DL, 249UL);
            int32_t l_545 = 7L;
            int64_t *l_548 = &l_300;
            VECTOR(uint32_t, 4) l_577 = (VECTOR(uint32_t, 4))(0x19025A24L, (VECTOR(uint32_t, 2))(0x19025A24L, 4294967295UL), 4294967295UL);
            int32_t *l_580 = &l_543[0][0][8];
            int i;
            l_543[0][2][5] = (safe_lshift_func_int8_t_s_s(((l_545 = ((safe_sub_func_int32_t_s_s((1L < (safe_mul_func_uint8_t_u_u((+(p_32 != (safe_sub_func_uint32_t_u_u(((*l_529) = 3UL), (safe_mul_func_int8_t_s_s(((((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(1L, 1L)).xyxxxyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(p_860->g_532.yxxxxyxyyyyyxyyx)).odd, ((VECTOR(int8_t, 16))(l_533.yxyxxyxxyyxxyyyy)).hi))).even, ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0x5EL, 4UL, 5UL, ((VECTOR(uint8_t, 8))(p_860->g_534.zxzxzxxx)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 4))(l_535.s2650)).xywzyyxzwzzxzwxz, (uint8_t)(((&p_860->g_222 == l_536) == 0xB67CCEE2L) || p_860->g_61.y), (uint8_t)255UL))).lo)).s5345377300650532, (uint8_t)(safe_mul_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_543[0][0][8], l_543[0][0][8])), l_544)) == l_543[0][2][3]), p_860->g_324.y)), (uint8_t)6UL))).s55)).yxyyxxxyxxyyxyyy)).sb6)), ((VECTOR(uint8_t, 2))(0x15L)), 248UL)))).s6295, ((VECTOR(uint8_t, 4))(0UL)))))))).xyxwywxy)).even)).yyzyzwwxzyzwzwzz)).even)))).s72, ((VECTOR(uint16_t, 2))(0x38EBL))))), p_32, (-10L), ((VECTOR(int32_t, 8))(0x27AED6EEL)), p_32, ((VECTOR(int32_t, 2))(0x339EAFE9L)), 6L)).s0c, ((VECTOR(int32_t, 2))(0L))))).yxxyxyxyyxxyxxxy, ((VECTOR(int32_t, 16))(0x705CAFCCL))))).s09fd)).zwwwwwzy, ((VECTOR(int32_t, 8))(3L))))).s62, (int32_t)p_32, (int32_t)0x5356E20BL))).xxyxxxxx, ((VECTOR(int32_t, 8))(1L))))).s4 && FAKE_DIVERGE(p_860->global_2_offset, get_global_id(2), 10)) & (-3L)), 0L)))))), 0UL))), p_860->g_2)) < p_32)) | p_32), 1));
            for (p_32 = (-17); (p_32 == 7); p_32 = safe_add_func_int16_t_s_s(p_32, 1))
            { /* block id: 216 */
                int64_t *l_549 = &l_300;
                return p_860->g_97;
            }
            if (((((-1L) || (safe_div_func_uint16_t_u_u(p_32, l_545))) && (65534UL ^ ((p_860->g_552 == &l_294[3]) | (safe_mul_func_int8_t_s_s((((l_543[0][0][8] |= 0x0A16A8B3L) ^ 0x21A4DFEBL) || (safe_mod_func_uint8_t_u_u((l_557 , p_860->g_381), l_545))), p_32))))) || FAKE_DIVERGE(p_860->local_2_offset, get_local_id(2), 10)))
            { /* block id: 220 */
                VECTOR(uint32_t, 2) l_575 = (VECTOR(uint32_t, 2))(4294967295UL, 9UL);
                VECTOR(uint32_t, 16) l_576 = (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967289UL), 4294967289UL), 4294967289UL, 4294967286UL, 4294967289UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967289UL), (VECTOR(uint32_t, 2))(4294967286UL, 4294967289UL), 4294967286UL, 4294967289UL, 4294967286UL, 4294967289UL);
                VECTOR(int32_t, 16) l_610 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x139AB4E3L), 0x139AB4E3L), 0x139AB4E3L, 1L, 0x139AB4E3L, (VECTOR(int32_t, 2))(1L, 0x139AB4E3L), (VECTOR(int32_t, 2))(1L, 0x139AB4E3L), 1L, 0x139AB4E3L, 1L, 0x139AB4E3L);
                uint64_t *l_611 = (void*)0;
                uint64_t *l_612 = &l_280;
                int i;
                for (l_545 = (-26); (l_545 <= (-4)); ++l_545)
                { /* block id: 223 */
                    int32_t l_561 = 0x3C9B0463L;
                    if ((safe_unary_minus_func_uint16_t_u(0x4A16L)))
                    { /* block id: 224 */
                        p_860->g_100 = (void*)0;
                        if (p_32)
                            break;
                        l_561 = 0x1F0B6799L;
                    }
                    else
                    { /* block id: 228 */
                        VECTOR(uint32_t, 4) l_578 = (VECTOR(uint32_t, 4))(0xF3376428L, (VECTOR(uint32_t, 2))(0xF3376428L, 0x12B5EE11L), 0x12B5EE11L);
                        VECTOR(uint16_t, 8) l_588 = (VECTOR(uint16_t, 8))(0xBE95L, (VECTOR(uint16_t, 4))(0xBE95L, (VECTOR(uint16_t, 2))(0xBE95L, 1UL), 1UL), 1UL, 0xBE95L, 1UL);
                        int i;
                        p_860->g_12.s2 = ((!(((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((((VECTOR(int16_t, 16))(l_568.wzxyyzzzzwxwzwwz)).s9 , (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_561, p_860->g_247.s0, 4294967286UL, ((VECTOR(uint32_t, 2))(2UL, 0xC6A85902L)), 4294967292UL, 4294967293UL, 0x4E26B286L)))).s2 ^ ((VECTOR(uint32_t, 8))(0xDD355A69L, ((VECTOR(uint32_t, 4))(p_860->g_569.s743d)), 0x16A5273DL, 4294967295UL, 4294967295UL)).s6)) ^ (safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 16))(18446744073709551615UL, ((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 4))(0x929BDE8BL, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(l_575.yyxyxxxxyxyxyyyx)).sde, ((VECTOR(uint32_t, 8))(l_576.sdcc774d1)).s44, ((VECTOR(uint32_t, 16))(l_577.yzwxwwzzzwyzwyzy)).s68))), 0xF5994D0AL)).xzzywywxzzxzzwwz, ((VECTOR(uint32_t, 2))(9UL, 4294967295UL)).xxxxxyxxyyyxyxxy))), ((VECTOR(uint32_t, 16))(l_578.yzxxwzxwwwzxyyyx))))).even))), 0xD07AA265930A24FAL, 0x0F5829ADA6394C18L, ((VECTOR(uint64_t, 2))(l_579.s05)), 0x58D024D92F79DC8FL, 18446744073709551612UL, 18446744073709551615UL)).sc)) | ((l_580 = &p_860->g_382) != (((((((VECTOR(uint8_t, 8))(p_860->g_583.s47517045)).s3 || ((((safe_sub_func_uint32_t_u_u(p_860->g_305.s2, (l_575.x >= ((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)).xxxxyxyxxxxxyxyy, ((VECTOR(uint32_t, 2))(0xD1E0BA66L, 0UL)).yxyyxxyyyyyyxxyy, ((VECTOR(uint32_t, 4))(0xCB4C0E58L, 0x79B0A377L, 4294967295UL, 0UL)).zxzyxxxwywywzxxz))).s4))) , ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_586.sf0d2)).wzxwwzyyxwzzyyww)).s92))), 0x2A27L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x8570L, 0xAEE8L)))), ((VECTOR(uint16_t, 4))(p_860->g_587.s6007)).y, 0x21EBL, 65535UL)), ((VECTOR(uint16_t, 4))(l_588.s7524)).wwxxyxzy))).s3) || 1L) >= ((safe_rshift_func_int8_t_s_s(0L, (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((-4L), l_595)) & 0x480DL), 1)))) | l_575.y))) <= 0x092BL) & 1UL) , (-1L)) , &l_543[0][0][1]))), 6)) && p_32), p_32))), 0x15C14F2DL)), 5)) , l_588.s4), p_32)) , 1UL) >= l_561)) , 0x08AB5393L);
                    }
                    for (l_280 = 0; (l_280 > 43); l_280 = safe_add_func_int8_t_s_s(l_280, 3))
                    { /* block id: 234 */
                        return p_860->g_97;
                    }
                    if (p_32)
                        continue;
                    if (p_860->g_324.x)
                        continue;
                }
                l_613[2][2][1] ^= ((((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(p_860->g_598.s5716304301375353)).sd070, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967286UL, 0xFD2B2C47L)), 0UL, 0x47F38A27L)).xxwwwzwyzxwzyxyy, ((VECTOR(uint32_t, 16))(0x6943B49AL, 1UL, ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 4))(p_860->g_599.yxxx)), ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 4))(l_600.xxxx)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x0E0668ADL, 6L)).yyxyxxxxyxxxyyyx)).s66))).yyxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(p_860->g_601.s06725276)).s65, ((VECTOR(uint32_t, 2))(0x1B16F756L, 0x3EA100FBL))))))).xyyx))), 0UL, ((VECTOR(uint32_t, 4))(p_860->g_602.wwwx)), ((VECTOR(uint32_t, 2))(p_860->g_603.zw)), 0xDFCC5255L, 4294967290UL, 0UL)), ((VECTOR(uint32_t, 4))(l_604.s0424)).wwzzzzyyywyxxyyy))).sb8, (uint32_t)((l_575.y | ((VECTOR(uint32_t, 16))(l_605.s2185e1e49c8592cf)).sa) == p_32)))).yxyx, ((VECTOR(uint32_t, 4))(p_860->g_606.sa613))))).y && p_32) == (((safe_mod_func_uint64_t_u_u(((*l_612) &= (((((((p_32 , p_32) | (p_860->g_97 != l_609)) ^ ((VECTOR(int32_t, 8))(l_610.s3bf42f7e)).s7) | l_610.s6) == p_32) != p_860->g_253.y) ^ (*l_580))), GROUP_DIVERGE(1, 1))) , p_32) == 0x0FL));
                (*l_580) = (safe_mod_func_uint32_t_u_u((~(l_616 == &l_617)), ((VECTOR(uint32_t, 4))(((*l_529)--), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_621.sfe)))), 0xE330FC84L)).z));
                (*l_580) ^= (p_860->g_552 != p_860->g_552);
            }
            else
            { /* block id: 245 */
                uint64_t l_624 = 18446744073709551609UL;
                int32_t l_625 = 0x2460DFC4L;
                int16_t *l_631 = &l_544;
                for (p_860->g_370 = 0; (p_860->g_370 < (-2)); p_860->g_370--)
                { /* block id: 248 */
                    uint32_t l_626 = 4294967293UL;
                    l_625 &= l_624;
                    p_860->g_285.x &= p_32;
                    l_626++;
                }
                for (l_625 = 0; (l_625 <= 26); l_625 = safe_add_func_uint32_t_u_u(l_625, 1))
                { /* block id: 255 */
                    (*l_580) = ((void*)0 != l_631);
                }
                (*l_580) = ((void*)0 != l_290);
            }
        }
        if (((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((((VECTOR(uint32_t, 4))(l_636.yyxy)).x , (p_860->l_comm_values[(safe_mod_func_uint32_t_u_u(p_860->tid, 135))] = (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(65535UL, 2UL)).even, 1)))) ^ 18446744073709551615UL), ((VECTOR(uint8_t, 16))(((((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_639.s23)), 0x034320D6F3364705L, 9UL)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_640.yy)).yxyyxyxy)).lo))).xzzxzxywzyzzywzx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(18446744073709551613UL, 0x168D5BBBF206F086L)), 1UL, ((VECTOR(uint64_t, 2))(l_641.sc7)), (p_860->g_76.x = (((l_642 != (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((8L != (safe_div_func_uint16_t_u_u((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(4UL, ((VECTOR(uint32_t, 4))(2UL, ((VECTOR(uint32_t, 2))(p_860->g_649.xx)), 0x558E41C5L)), 0xD42964F9L, 0x32DE20D7L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(l_650.s2701))))).wxxxzwxz)), ((VECTOR(uint32_t, 8))(l_651.s424b2860))))).s03, ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_860->g_652.yy)).xyxxxyyxyxxyxyyy)).s719e)).wywxxzwyzwxywwwx, ((VECTOR(uint32_t, 8))(l_653.s73470333)).s2577226046041472))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_654.wz)), 5UL, 0x2F1B5C4DL)).wxywzwywyyxwyzwy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(0x302FL, 3UL, (safe_add_func_int16_t_s_s(((2UL || (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((p_32 , (safe_add_func_uint64_t_u_u(l_663, (safe_div_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((l_600.w = ((**l_617) = ((safe_mul_func_int8_t_s_s(((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_670.s1633)).zwyyyzzz)).s3 >= ((safe_mul_func_uint8_t_u_u(p_860->g_398.s5, (((*l_677) ^= (safe_add_func_uint8_t_u_u(((p_32 , p_860->g_675[4]) == (void*)0), l_676))) <= p_860->g_235[5][0][1]))) > p_860->g_324.w)) , 0x47L), 255UL)) == p_32))) & p_860->g_397.s1), FAKE_DIVERGE(p_860->global_0_offset, get_global_id(0), 10))) || p_860->g_373.s7), l_543[0][3][1]))))) & l_640.w), p_32)), p_32))) <= p_32), p_32)), 0xEF48L, 65530UL, 65535UL, 0xB36FL, 65528UL)).odd)).yzyxywyywxwywzyy, ((VECTOR(uint16_t, 16))(65535UL))))).sf7, ((VECTOR(uint32_t, 2))(0xB05191DAL))))))).yyxyxxxyyxxxyxyx))).s58))).xxxy)), ((VECTOR(uint32_t, 2))(0x9478D874L)), p_860->g_245.sf, 0x22C550B6L, 0x1B755445L)))).s3f)).even > l_654.x), p_860->g_479.s7))), 3)), p_860->g_532.x)) , l_679) , &p_860->g_370)) , p_860->g_475) , p_32)), ((VECTOR(uint64_t, 8))(0xDFE76CAB7ABC71B7L)), 0xD2AC723CC6847445L, 0UL))))).s81f8)).y | p_860->g_381) , &l_595) == &p_860->g_381) > p_860->g_599.y), 8UL, p_32, FAKE_DIVERGE(p_860->global_2_offset, get_global_id(2), 10), l_557, ((VECTOR(uint8_t, 2))(0x1EL)), 0x38L, p_860->g_501.s5, ((VECTOR(uint8_t, 2))(0xC2L)), 4UL, 253UL, FAKE_DIVERGE(p_860->group_2_offset, get_group_id(2), 10), 0x9CL, 1UL)).sc)), p_32)) ^ p_860->g_235[6][0][3]))
        { /* block id: 266 */
            int32_t l_681 = 0x2D65C555L;
            uint64_t l_683 = 1UL;
            uint32_t *l_684 = (void*)0;
            uint32_t *l_685[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            p_860->g_306.x = (p_32 ^ (0x259558E84E05E219L >= (l_681 > (l_636.x && l_682))));
            p_860->g_171.w = p_32;
            l_600.y &= ((((+(((p_32 , &p_860->g_183) == (l_683 , ((((9L & ((p_860->g_381 |= p_32) <= (GROUP_DIVERGE(0, 1) & ((VECTOR(uint16_t, 2))(0xCE52L, 0UL)).even))) , (((65531UL < (((((p_860->g_254.x <= p_32) > ((*l_290) = ((void*)0 != &p_860->g_100))) ^ GROUP_DIVERGE(0, 1)) | 0x079DL) <= l_686[0][0][0])) , p_32) < l_636.x)) <= p_32) , &l_544))) && p_860->g_253.z)) > 1L) != p_32) & l_681);
        }
        else
        { /* block id: 272 */
            int16_t l_693 = 0x7655L;
            int32_t *l_719[10] = {&p_860->g_370,&p_860->g_370,&p_860->g_370,&p_860->g_370,&p_860->g_370,&p_860->g_370,&p_860->g_370,&p_860->g_370,&p_860->g_370,&p_860->g_370};
            int32_t l_723 = 0x473AE3F4L;
            int32_t l_724[6][5][2] = {{{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L}},{{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L}},{{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L}},{{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L}},{{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L}},{{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L},{0x5DDEB3BCL,1L}}};
            VECTOR(uint32_t, 4) l_743 = (VECTOR(uint32_t, 4))(0x188BD1F0L, (VECTOR(uint32_t, 2))(0x188BD1F0L, 0x69927691L), 0x69927691L);
            int32_t *l_767[1];
            uint32_t l_786[7] = {4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_767[i] = (void*)0;
            for (p_860->g_475 = (-18); (p_860->g_475 > 8); p_860->g_475 = safe_add_func_uint64_t_u_u(p_860->g_475, 7))
            { /* block id: 275 */
                int8_t *l_691 = (void*)0;
                int8_t *l_692[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_694[9] = {0x3E2DCDB2L,0x3E2DCDB2L,0x3E2DCDB2L,0x3E2DCDB2L,0x3E2DCDB2L,0x3E2DCDB2L,0x3E2DCDB2L,0x3E2DCDB2L,0x3E2DCDB2L};
                int i;
                if (l_640.x)
                    break;
                p_860->g_100 = &p_860->g_2;
                l_694[8] = ((safe_mul_func_int8_t_s_s((l_613[2][4][3] = (l_600.w , 0x4BL)), (l_693 = l_641.s6))) , p_32);
                return p_860->g_97;
            }
            l_600.y ^= (p_32 , l_695);
            for (p_860->g_156 = 11; (p_860->g_156 != 33); p_860->g_156 = safe_add_func_int16_t_s_s(p_860->g_156, 4))
            { /* block id: 286 */
                uint32_t *l_704 = (void*)0;
                uint32_t *l_705[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint16_t l_714[10][9][2] = {{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}},{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}},{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}},{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}},{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}},{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}},{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}},{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}},{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}},{{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}}};
                int32_t l_715 = (-7L);
                int32_t *l_720 = (void*)0;
                int32_t *l_721 = &p_860->g_238;
                int32_t l_722 = 0x2EC6AD46L;
                int32_t l_725 = 0L;
                int32_t l_727 = 0x50B15AFCL;
                int32_t l_728 = (-5L);
                uint32_t l_730[8] = {4294967295UL,1UL,4294967295UL,4294967295UL,1UL,4294967295UL,4294967295UL,1UL};
                int i, j, k;
                l_543[0][0][8] = (safe_rshift_func_uint8_t_u_s(p_860->g_583.s6, 5));
                l_722 = (safe_lshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(p_860->g_324.w, ((((p_860->g_62.s3 , ((p_32 >= (p_860->g_252.x = GROUP_DIVERGE(0, 1))) | (((safe_mod_func_int16_t_s_s((FAKE_DIVERGE(p_860->global_1_offset, get_global_id(1), 10) == 0x5E8FL), (l_613[2][2][1] = (safe_sub_func_uint16_t_u_u(((***l_616)++), (p_860->g_77.x != l_650.s2)))))) ^ (safe_rshift_func_uint16_t_u_u((l_715 = l_714[0][6][0]), 7))) | (((*l_721) ^= (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_860->g_718.yyyxxzxwyxzzwyzz)).se, ((FAKE_DIVERGE(p_860->local_2_offset, get_local_id(2), 10) && l_693) && (l_642 != l_719[5]))))) , p_32)))) , p_32) , p_860->g_552) != (void*)0))) != l_693), p_32));
                l_730[0]--;
                p_860->g_100 = (void*)0;
            }
            if (l_723)
            { /* block id: 297 */
                VECTOR(int8_t, 16) l_733 = (VECTOR(int8_t, 16))(0x59L, (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0L), 0L), 0L, 0x59L, 0L, (VECTOR(int8_t, 2))(0x59L, 0L), (VECTOR(int8_t, 2))(0x59L, 0L), 0x59L, 0L, 0x59L, 0L);
                VECTOR(int8_t, 2) l_735 = (VECTOR(int8_t, 2))(8L, (-1L));
                VECTOR(int32_t, 4) l_747 = (VECTOR(int32_t, 4))(0x039150B3L, (VECTOR(int32_t, 2))(0x039150B3L, 0x655FF140L), 0x655FF140L);
                uint8_t *l_751 = (void*)0;
                uint8_t *l_752 = &l_695;
                int i;
                p_860->g_286.x &= (l_724[5][3][1] &= (((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_733.se04685173d130409)).se9)).xxxyxxxyxyxyyxyx, ((VECTOR(int8_t, 4))(0x21L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x3FL, (-9L))).yyxyyxyx)).hi, ((VECTOR(int8_t, 2))(l_734.xx)).yyyx))).zxwzxxzy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x65L, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(l_735.yx)).yyyyyyyxyxyxyyxx, ((VECTOR(int8_t, 16))(p_860->g_736.s18d5cd133ffeba23)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_737.yxyxxxxyxxyyxxyx)))).s7a)).yyyy)).hi)).yyxxxyxyyxxxyxyy))))))))).s13f3, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_738.yyyyyxxxxyyyyxyy)))).odd, (int8_t)(((((p_860->g_100 = &l_723) != ((safe_sub_func_uint16_t_u_u(l_557, p_32)) , (void*)0)) && ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(0x5AE50A43L, ((VECTOR(uint32_t, 8))(l_743.xwyyxzyx)), ((VECTOR(uint32_t, 2))(0x3BAE167FL, 0xE15E2E22L)), ((safe_lshift_func_uint16_t_u_u(((p_32 , ((*l_752) &= (((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_860->g_746.xzxw)).wwxzyxxx)).s3, ((GROUP_DIVERGE(0, 1) , ((VECTOR(int32_t, 4))(l_747.xwyw)).z) <= (((VECTOR(uint8_t, 16))(p_860->g_748.s356a12e0b5840c7e)).s2 && p_860->g_284.s0)), ((VECTOR(uint8_t, 4))((p_860->g_62.s4 = (7L ^ (((void*)0 != l_749) , 0x6606L))), 9UL, 255UL, 0xFCL)), ((VECTOR(uint8_t, 8))(255UL)), 0x37L, 0x99L)).s1f31, ((VECTOR(uint8_t, 4))(0UL)), ((VECTOR(uint8_t, 4))(0xF5L)))))))).xzzzzzxyyzwyyyxx, ((VECTOR(uint8_t, 16))(0x8EL))))).sf >= p_32))) ^ l_735.x), 4)) > 0xCA18L), ((VECTOR(uint32_t, 4))(0x6A3BFEB0L)))).s1, 0x46BD1C78L)) || 0x33L)) & 0x1EF6C771L) , l_641.s3)))).lo))))))), ((VECTOR(int8_t, 2))(0x29L)), 1L)).s20)), ((VECTOR(int8_t, 4))(0x24L)), (-8L), 1L)).odd, ((VECTOR(int8_t, 4))(0x77L))))), ((VECTOR(int8_t, 2))(0x21L)), 0x58L, ((VECTOR(int8_t, 8))((-7L))), 0x02L)).hi))).s60)), 1L)).yxxwzwywxyzwyxzy))).sc || p_32));
                if (l_654.x)
                    continue;
                l_753.s5--;
            }
            else
            { /* block id: 305 */
                int8_t l_761 = 0x12L;
                VECTOR(int32_t, 4) l_762 = (VECTOR(int32_t, 4))(0x0DA09CAFL, (VECTOR(int32_t, 2))(0x0DA09CAFL, 0x652F7DE5L), 0x652F7DE5L);
                int32_t *l_777 = &p_860->g_238;
                VECTOR(int8_t, 2) l_798 = (VECTOR(int8_t, 2))(3L, 0x0DL);
                VECTOR(int8_t, 4) l_805 = (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 3L), 3L);
                uint32_t **l_807 = &l_536;
                int64_t *l_808 = &p_860->g_809;
                int i, j;
                l_767[0] = func_89((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))((-1L), 0x3A9BL)).yxyxyyyyyyyyyyyx, (int16_t)((p_860->g_718.y == ((safe_sub_func_int64_t_s_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_760.yx)))).even ^ (l_761 = p_32)), (l_762.y ^ (GROUP_DIVERGE(0, 1) == (safe_rshift_func_int8_t_s_s(p_860->g_569.s9, 5)))))) >= ((VECTOR(uint64_t, 4))(18446744073709551615UL, 0x38C302656FD4A3D4L, 18446744073709551613UL, 2UL)).w)) , (safe_rshift_func_int8_t_s_u(l_724[4][4][1], 3)))))).s0, p_32)), (p_860->g_100 = &l_724[5][3][1]), p_860);
                (*p_860->g_100) = ((safe_unary_minus_func_uint32_t_u(0x420AC61FL)) | (safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((*l_777) &= p_860->g_171.w) , (safe_sub_func_int8_t_s_s(p_32, (l_613[2][2][1] >= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((*l_290) = p_32), p_32)), (safe_lshift_func_uint16_t_u_s(p_32, ((void*)0 == &p_860->g_222))))))))), p_860->g_381)), FAKE_DIVERGE(p_860->local_0_offset, get_local_id(0), 10))), GROUP_DIVERGE(2, 1))), p_32)));
                l_786[1]++;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_860->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 135)), permutations[(safe_mod_func_uint32_t_u_u((((VECTOR(uint64_t, 2))(p_860->g_789.s12)).odd , ((p_32 && 18446744073709551615UL) , ((safe_rshift_func_int16_t_s_s(((*l_290) = (safe_rshift_func_uint8_t_u_s((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_794.xxxy)).xxyyxwww)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((((*l_808) = (((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(0x5CL, 0x54L)).xyyyyyyy, (int8_t)0L))).odd, ((VECTOR(int8_t, 2))((-9L), 0x30L)).xxyy))).w != (((FAKE_DIVERGE(p_860->group_2_offset, get_group_id(2), 10) ^ (safe_mul_func_int16_t_s_s((((*l_677) = (((l_797 != (void*)0) , ((VECTOR(int8_t, 8))(l_798.yxyyyxxx)).s1) <= (safe_div_func_uint64_t_u_u((!((safe_rshift_func_int8_t_s_u((p_32 >= (safe_sub_func_uint32_t_u_u(0x34AE47C2L, (((*l_807) = func_89((l_798.y <= ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(0x13L, ((VECTOR(int8_t, 2))(l_805.yx)), 0L)).xzxyxyxw, ((VECTOR(int8_t, 8))(1L, 0x7FL, p_32, ((VECTOR(int8_t, 4))(0x56L)), 0L))))).odd)).wzzwxxyz, ((VECTOR(int8_t, 8))((-1L)))))).lo)))).hi)).yyyx)).yxxyxzzz, ((VECTOR(int8_t, 8))(0x18L)), ((VECTOR(int8_t, 8))(0x11L))))).lo)))).wwzwxxzxwwxwywxw, (int8_t)1L))).s9), p_860->g_806, p_860)) != &p_860->g_222)))), 6)) ^ 1L)), 0x5A9BBA5CC3E295FCL)))) , (-1L)), FAKE_DIVERGE(p_860->group_1_offset, get_group_id(1), 10)))) && 0x3AL) , p_32))) , 0x74L) && p_32), ((VECTOR(uint16_t, 2))(0x59D9L)), 0x06F4L)).yxzyyzxx)).s7, ((VECTOR(uint16_t, 4))(0UL)), 0x3C91L, 1UL, 1UL)), ((VECTOR(uint16_t, 16))(1UL))))).s4d3c, (uint16_t)65530UL))).lo)).hi < FAKE_DIVERGE(p_860->group_0_offset, get_group_id(0), 10)), p_32))), p_860->g_789.s4)) < p_860->g_76.z))), 10))][(safe_mod_func_uint32_t_u_u(p_860->tid, 135))]));
            }
        }
    }
    return p_860->g_97;
}


/* ------------------------------------------ */
/* 
 * reads : p_860->g_149 p_860->g_60
 * writes: p_860->g_12
 */
uint64_t  func_51(int64_t  p_52, uint64_t  p_53, int32_t * p_54, int64_t  p_55, int64_t  p_56, struct S1 * p_860)
{ /* block id: 139 */
    int32_t *l_278 = &p_860->g_101;
    int32_t **l_279 = &l_278;
    p_54 = &p_860->g_2;
    (*l_279) = func_89(p_860->g_149.s1, (l_278 = &p_860->g_101), p_860);
    return p_860->g_60.sa;
}


/* ------------------------------------------ */
/* 
 * reads : p_860->g_247
 * writes:
 */
uint64_t  func_78(int64_t * p_79, int64_t * p_80, int32_t * p_81, int32_t * p_82, struct S1 * p_860)
{ /* block id: 137 */
    return p_860->g_247.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_860->g_97
 * writes:
 */
int64_t * func_83(int32_t * p_84, int64_t * p_85, int64_t  p_86, int64_t  p_87, uint32_t  p_88, struct S1 * p_860)
{ /* block id: 117 */
    if ((atomic_inc(&p_860->g_atomic_input[17 * get_linear_group_id() + 14]) == 2))
    { /* block id: 119 */
        int32_t l_263 = 1L;
        VECTOR(int32_t, 8) l_268 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
        int64_t l_269 = (-1L);
        int32_t *l_270 = &l_263;
        int i;
        for (l_263 = 0; (l_263 >= 29); l_263++)
        { /* block id: 122 */
            int64_t l_266 = 0x30C5E8C4E4E6E4FBL;
            uint32_t l_267 = 0x4FEF4640L;
            l_266 = (-1L);
            l_267 &= 3L;
        }
        l_269 |= ((VECTOR(int32_t, 4))(l_268.s7543)).w;
        l_270 = (void*)0;
        for (l_268.s4 = (-20); (l_268.s4 <= (-1)); ++l_268.s4)
        { /* block id: 130 */
            int8_t l_273[10][6][4] = {{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}},{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}},{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}},{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}},{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}},{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}},{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}},{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}},{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}},{{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)},{(-7L),(-1L),1L,(-7L)}}};
            uint8_t l_274 = 1UL;
            int i, j, k;
            l_274++;
        }
        unsigned int result = 0;
        result += l_263;
        result += l_268.s7;
        result += l_268.s6;
        result += l_268.s5;
        result += l_268.s4;
        result += l_268.s3;
        result += l_268.s2;
        result += l_268.s1;
        result += l_268.s0;
        result += l_269;
        atomic_add(&p_860->g_special_values[17 * get_linear_group_id() + 14], result);
    }
    else
    { /* block id: 133 */
        (1 + 1);
    }
    return p_860->g_97;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_860->g_12
 */
int32_t * func_89(int32_t  p_90, int32_t * p_91, struct S1 * p_860)
{ /* block id: 30 */
    int32_t *l_92 = (void*)0;
    p_860->g_12.s1 = ((VECTOR(int32_t, 2))(0x3358DD5DL, 0x55F64BADL)).lo;
    return l_92;
}


/* ------------------------------------------ */
/* 
 * reads : p_860->g_97 p_860->g_61 p_860->g_2 p_860->g_76 p_860->g_comm_values p_860->g_100 p_860->g_60 p_860->g_149 p_860->g_156 p_860->g_62 p_860->g_171 p_860->g_183 p_860->g_77 p_860->g_101 p_860->g_235 p_860->g_245 p_860->g_247 p_860->g_252 p_860->g_253 p_860->g_254 p_860->l_comm_values
 * writes: p_860->g_101 p_860->g_61 p_860->g_149 p_860->g_183 p_860->g_171 p_860->g_100 p_860->g_222 p_860->g_235 p_860->g_238
 */
int64_t * func_93(int64_t * p_94, int32_t * p_95, int64_t  p_96, struct S1 * p_860)
{ /* block id: 35 */
    uint16_t l_112 = 0x0255L;
    int32_t **l_113[3];
    int32_t ***l_114 = (void*)0;
    int32_t **l_116[5] = {&p_860->g_100,&p_860->g_100,&p_860->g_100,&p_860->g_100,&p_860->g_100};
    int32_t ***l_115 = &l_116[1];
    VECTOR(int32_t, 8) l_117 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 8L), 8L), 8L, (-3L), 8L);
    int16_t l_128 = (-2L);
    int16_t *l_129 = &l_128;
    VECTOR(int16_t, 4) l_167 = (VECTOR(int16_t, 4))(0x7DEEL, (VECTOR(int16_t, 2))(0x7DEEL, 0x70C6L), 0x70C6L);
    int8_t l_201 = 1L;
    VECTOR(uint32_t, 2) l_246 = (VECTOR(uint32_t, 2))(4294967289UL, 4294967295UL);
    int i;
    for (i = 0; i < 3; i++)
        l_113[i] = (void*)0;
    if (((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((void*)0 == &p_860->g_100), (l_112 <= (((p_860->g_97 == &p_96) , l_113[2]) != ((*l_115) = l_113[2]))))), 7)), (-8L))), ((((((VECTOR(int32_t, 4))(l_117.s0400)).y && ((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), (safe_sub_func_int16_t_s_s(((*l_129) = ((((((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(((((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((void*)0 != &l_113[2]), 1UL)), FAKE_DIVERGE(p_860->group_0_offset, get_group_id(0), 10))), p_860->g_61.x)) || FAKE_DIVERGE(p_860->group_0_offset, get_group_id(0), 10)) != p_860->g_2) == p_96), 246UL, ((VECTOR(uint8_t, 4))(0xADL)), 1UL, 9UL)).s73))).odd , l_128) , (*p_95)) && 9L) && p_860->g_76.x)), p_860->g_comm_values[p_860->tid])))) , (*p_860->g_100))) | p_860->g_60.s8) , p_96) , 0x3A1A89D3L))) == p_96))
    { /* block id: 38 */
        int16_t l_168 = 0x7FB9L;
        int32_t l_198 = 0x2150C06EL;
        int32_t l_199 = 0L;
        int32_t l_200 = (-4L);
        int32_t l_202 = (-10L);
        int32_t l_203 = (-1L);
        int32_t l_204 = 0L;
        uint8_t l_205 = 0xAFL;
        for (p_96 = 0; (p_96 <= 13); p_96 = safe_add_func_int8_t_s_s(p_96, 8))
        { /* block id: 41 */
            p_860->g_101 = (*p_95);
        }
        for (l_128 = 0; (l_128 < (-1)); l_128--)
        { /* block id: 46 */
            if ((atomic_inc(&p_860->l_atomic_input[9]) == 0))
            { /* block id: 48 */
                int32_t l_134 = (-7L);
                for (l_134 = (-14); (l_134 <= 0); ++l_134)
                { /* block id: 51 */
                    int32_t l_138 = (-3L);
                    int32_t *l_137[10][6] = {{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138},{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138},{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138},{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138},{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138},{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138},{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138},{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138},{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138},{&l_138,&l_138,(void*)0,&l_138,&l_138,&l_138}};
                    int32_t *l_139 = &l_138;
                    VECTOR(uint64_t, 8) l_146 = (VECTOR(uint64_t, 8))(0x8F4AAFBA0E2E69A2L, (VECTOR(uint64_t, 4))(0x8F4AAFBA0E2E69A2L, (VECTOR(uint64_t, 2))(0x8F4AAFBA0E2E69A2L, 5UL), 5UL), 5UL, 0x8F4AAFBA0E2E69A2L, 5UL);
                    VECTOR(uint64_t, 4) l_147 = (VECTOR(uint64_t, 4))(0xA845578D77B4968EL, (VECTOR(uint64_t, 2))(0xA845578D77B4968EL, 0UL), 0UL);
                    VECTOR(int32_t, 8) l_148 = (VECTOR(int32_t, 8))(0x41C9F68FL, (VECTOR(int32_t, 4))(0x41C9F68FL, (VECTOR(int32_t, 2))(0x41C9F68FL, 7L), 7L), 7L, 0x41C9F68FL, 7L);
                    int i, j;
                    l_139 = l_137[4][0];
                    for (l_138 = 0; (l_138 == 18); l_138 = safe_add_func_uint64_t_u_u(l_138, 7))
                    { /* block id: 55 */
                        int32_t l_142 = 1L;
                        int32_t *l_143 = (void*)0;
                        int32_t l_144 = (-6L);
                        int64_t l_145[6][2] = {{1L,(-1L)},{1L,(-1L)},{1L,(-1L)},{1L,(-1L)},{1L,(-1L)},{1L,(-1L)}};
                        int i, j;
                        l_142 = l_142;
                        l_143 = (void*)0;
                        l_145[2][1] = (l_144 = 0x4EC10F2CL);
                    }
                    l_139 = (((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 16))(l_146.s7103710647207755)).s28, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_147.xxwz)).wxwzxyxw)).s13))).yyxyxyxxxyxxyyyy, (uint64_t)l_148.s3))).even)).hi)).hi))))).odd , (void*)0);
                }
                unsigned int result = 0;
                result += l_134;
                atomic_add(&p_860->l_special_values[9], result);
            }
            else
            { /* block id: 63 */
                (1 + 1);
            }
            if ((*p_860->g_100))
                continue;
        }
        if (((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(p_860->g_149.s156a7b95)), (int32_t)(safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(7L, 6)), 13))))).s0346177606123357, ((VECTOR(int32_t, 8))((safe_rshift_func_uint8_t_u_u(((p_860->g_2 , (p_860->g_156 , (p_860->g_61.z = ((+(safe_sub_func_int16_t_s_s((p_860->g_76.w == 0L), (((*l_129) = (safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(18446744073709551614UL, (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_167.xy)))).hi, (l_168 && (safe_lshift_func_int16_t_s_u(0x2D92L, 0))))), (p_96 , (-1L)))))), p_96))) > 65529UL)))) <= 0x2BC8BB2A2B2FAD47L)))) & p_860->g_60.sc), GROUP_DIVERGE(0, 1))), ((VECTOR(int32_t, 2))((-1L))), 0x1A36358CL, 0x17C6A24AL, 9L, 0x00BCC4B3L, 6L)).s5400671623220605))).sc)
        { /* block id: 70 */
            int64_t l_172 = 1L;
            l_172 = (p_860->g_149.s3 &= (((p_860->g_62.s3 , (((*l_129) &= p_860->g_comm_values[p_860->tid]) < 0x6EA0L)) , FAKE_DIVERGE(p_860->global_2_offset, get_global_id(2), 10)) , ((VECTOR(int32_t, 8))(p_860->g_171.xyyyywzy)).s4));
        }
        else
        { /* block id: 74 */
            VECTOR(int8_t, 16) l_175 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x53L), 0x53L), 0x53L, 8L, 0x53L, (VECTOR(int8_t, 2))(8L, 0x53L), (VECTOR(int8_t, 2))(8L, 0x53L), 8L, 0x53L, 8L, 0x53L);
            uint16_t *l_182[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t ***l_190 = &l_116[4];
            VECTOR(uint32_t, 2) l_193 = (VECTOR(uint32_t, 2))(0UL, 6UL);
            int32_t l_194 = 0x45992523L;
            int i;
            p_860->g_171.z |= (l_194 ^= ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_175.sb9236ecdbe248804)).s6b)).lo, (p_860->g_60.se != (((safe_sub_func_int32_t_s_s((-1L), (p_96 && (l_168 , ((safe_mul_func_int8_t_s_s((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0x75L, 255UL, 0x2DL, (((*l_129) = ((p_860->g_183 ^= p_860->g_62.s7) == (safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((p_860->g_comm_values[p_860->tid] | (((void*)0 == l_190) <= (safe_mul_func_int16_t_s_s(((((((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(l_193.yx)).yxyyyyxxxyyyyxyx, ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(GROUP_DIVERGE(2, 1), (!((p_96 >= FAKE_DIVERGE(p_860->global_1_offset, get_global_id(1), 10)) & p_96)), ((VECTOR(uint32_t, 2))(0xC97DBFF9L)), ((VECTOR(uint32_t, 2))(0xA95D42B4L)), 4294967295UL, 4294967288UL))))).s2733702550634320, ((VECTOR(uint32_t, 16))(1UL))))).sd || l_168) >= p_96) || 0x9A84L) || p_860->g_156), p_96)))), 2)), 0x67979257A5AC62ACL)))) ^ p_860->g_149.s0), ((VECTOR(uint8_t, 8))(0xDBL)), ((VECTOR(uint8_t, 2))(6UL)), 0UL, 247UL)))).se0)).even != 0x1EL), l_168)) >= p_96))))) , p_96) == (*p_860->g_100))))) || p_860->g_77.x));
            for (p_860->g_101 = 0; (p_860->g_101 > 19); ++p_860->g_101)
            { /* block id: 81 */
                uint64_t l_197 = 4UL;
                if (l_197)
                    break;
            }
            p_860->g_100 = &p_860->g_101;
        }
        --l_205;
    }
    else
    { /* block id: 87 */
        VECTOR(uint8_t, 16) l_218 = (VECTOR(uint8_t, 16))(0xC0L, (VECTOR(uint8_t, 4))(0xC0L, (VECTOR(uint8_t, 2))(0xC0L, 0x9CL), 0x9CL), 0x9CL, 0xC0L, 0x9CL, (VECTOR(uint8_t, 2))(0xC0L, 0x9CL), (VECTOR(uint8_t, 2))(0xC0L, 0x9CL), 0xC0L, 0x9CL, 0xC0L, 0x9CL);
        uint32_t *l_221 = &p_860->g_222;
        uint16_t *l_223[7][9][4] = {{{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112}},{{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112}},{{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112}},{{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112}},{{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112}},{{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112}},{{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112}}};
        int32_t l_224 = 1L;
        int16_t *l_225 = &p_860->g_183;
        int32_t l_226 = 0x3A4CF426L;
        int8_t *l_227 = &l_201;
        int32_t l_228[4] = {0x553B164AL,0x553B164AL,0x553B164AL,0x553B164AL};
        int i, j, k;
        p_860->g_100 = ((safe_mod_func_uint16_t_u_u(((p_860->g_149.sa >= (p_96 > ((safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_860->group_0_offset, get_group_id(0), 10), p_96)) && (safe_sub_func_uint64_t_u_u((~(safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_218.sb0)).even, (l_228[2] = ((*l_227) = ((l_226 = (((*l_225) = (p_96 != (p_860->g_183 == ((*l_129) = (0x03B6L != (((*l_221) = GROUP_DIVERGE(1, 1)) , (((l_224 &= p_96) , p_860->g_156) , (GROUP_DIVERGE(0, 1) || 0xCEDBL)))))))) > 0x07E7L)) < 0xB0BBL)))))), l_218.sa))))) || 3L), p_860->g_171.w)) , (void*)0);
    }
    for (l_112 = 0; (l_112 > 18); l_112 = safe_add_func_uint64_t_u_u(l_112, 6))
    { /* block id: 99 */
        VECTOR(uint64_t, 4) l_231 = (VECTOR(uint64_t, 4))(0xE3F56E04B88609A6L, (VECTOR(uint64_t, 2))(0xE3F56E04B88609A6L, 0x47F83BBFEA0A6ECEL), 0x47F83BBFEA0A6ECEL);
        int i;
        if ((*p_95))
            break;
        p_860->g_171.y |= l_231.w;
    }
    for (l_201 = 0; (l_201 >= 12); ++l_201)
    { /* block id: 105 */
        int8_t *l_234 = &p_860->g_235[6][0][3];
        int32_t **l_236 = (void*)0;
        int32_t *l_237 = &p_860->g_238;
        VECTOR(int32_t, 4) l_243 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-3L)), (-3L));
        VECTOR(int32_t, 16) l_244 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7995BE46L), 0x7995BE46L), 0x7995BE46L, (-1L), 0x7995BE46L, (VECTOR(int32_t, 2))((-1L), 0x7995BE46L), (VECTOR(int32_t, 2))((-1L), 0x7995BE46L), (-1L), 0x7995BE46L, (-1L), 0x7995BE46L);
        VECTOR(uint16_t, 16) l_248 = (VECTOR(uint16_t, 16))(0x579FL, (VECTOR(uint16_t, 4))(0x579FL, (VECTOR(uint16_t, 2))(0x579FL, 65534UL), 65534UL), 65534UL, 0x579FL, 65534UL, (VECTOR(uint16_t, 2))(0x579FL, 65534UL), (VECTOR(uint16_t, 2))(0x579FL, 65534UL), 0x579FL, 65534UL, 0x579FL, 65534UL);
        VECTOR(uint16_t, 2) l_249 = (VECTOR(uint16_t, 2))(0xF999L, 1UL);
        int8_t l_257 = 0x4FL;
        int32_t l_258 = 0x33017861L;
        int i;
        p_860->g_171.x ^= (((*l_234) ^= ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0L, 1L)).yxxxyyyx)).s16)).yxxyxyyxyxyyyyxx))).s6) | ((((*l_237) = (l_236 != l_236)) , p_860->g_101) > ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(0xB6DD47E966681958L, 0xEDE8AA63995447FFL, ((safe_add_func_int32_t_s_s((l_258 = ((((-1L) ^ (p_860->g_61.w && ((((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_243.zxxz)).zwxwyywwwywzywww)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_244.scac96838)).s7671000770041735)), ((VECTOR(int32_t, 2))(p_860->g_245.sdc)).yyyyxxyxxyxxxxyx))).s1 , &p_860->g_222) == (((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 8))(l_246.yxyxxyxx)).s7667462062074155))).sd7b0, ((VECTOR(uint32_t, 8))(p_860->g_247.s60412617)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(1UL, 0UL)).xyyxyxxyxyyyyxxy, ((VECTOR(uint16_t, 4))(l_248.se056)).wzwwzyxwzyxxyzyy, ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 8))(0x6AF5L, 0xE9F3L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(l_249.xyxyyyyyxyxxxyyy)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0xD172L, p_96, (((safe_rshift_func_int16_t_s_u(((((p_860->g_60.s1 , ((+((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_860->g_252.yz)).yxyyyyxyyyyxyxyx)).lo)).s5577544031760437)).s82, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_860->g_253.yzxz)).odd))))), 0UL, 4294967293UL)).wyxxxwwx)).s0 , (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_860->g_254.wx)).xxxx)), ((VECTOR(uint16_t, 2))(0x9A2BL, 65532UL)), 0x64F3L, 0xA3BEL)).s4 >= (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(0x06FA724ABC332EF7L, 18446744073709551615UL)).even, p_96)))) , p_96) | p_860->g_252.y) & p_860->l_comm_values[(safe_mod_func_uint32_t_u_u(p_860->tid, 135))])) != 0xFCBDL)) , (void*)0) == &l_236) < l_257), p_860->g_149.s7)) || (-9L)) != p_96), 1UL, ((VECTOR(uint16_t, 4))(0x89F5L)), 0x5673L, GROUP_DIVERGE(1, 1), p_96, ((VECTOR(uint16_t, 4))(1UL)), 5UL)).sc1b2)).zyzxxwzxzzzzywww))).s49fd)), 65529UL, 0x218BL)).s3375100326657447, ((VECTOR(uint16_t, 16))(0x59F0L)), ((VECTOR(uint16_t, 16))(65527UL))))), ((VECTOR(uint16_t, 16))(1UL)))))))).sa90c, ((VECTOR(uint16_t, 4))(65526UL))))).zzxwzwzxxyyzzwxy)).sa860))).w , l_237)))) | (*p_95)) , 1L)), p_860->g_76.y)) ^ p_96), ((VECTOR(uint64_t, 2))(0xB8CA2FDA58E67CEBL)), 0x6A4EE52687A9E167L, 7UL, 0x45E32B3647BB7FCCL, ((VECTOR(uint64_t, 4))(1UL)), 0UL, l_249.x, 18446744073709551615UL, 0x4799D54374190295L)).sbb7e)).xxwwwyzwyxyyxxww)).s1));
    }
    for (l_128 = 0; (l_128 != (-29)); l_128 = safe_sub_func_uint32_t_u_u(l_128, 6))
    { /* block id: 113 */
        int64_t *l_261 = (void*)0;
        return l_261;
    }
    return p_860->g_97;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[135];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 135; i++)
            l_comm_values[i] = 1;
    struct S1 c_861;
    struct S1* p_860 = &c_861;
    struct S1 c_862 = {
        0x114768C0L, // p_860->g_2
        (VECTOR(int32_t, 16))(0x65653D42L, (VECTOR(int32_t, 4))(0x65653D42L, (VECTOR(int32_t, 2))(0x65653D42L, 0x4B1B055CL), 0x4B1B055CL), 0x4B1B055CL, 0x65653D42L, 0x4B1B055CL, (VECTOR(int32_t, 2))(0x65653D42L, 0x4B1B055CL), (VECTOR(int32_t, 2))(0x65653D42L, 0x4B1B055CL), 0x65653D42L, 0x4B1B055CL, 0x65653D42L, 0x4B1B055CL), // p_860->g_7
        (VECTOR(int32_t, 8))(0x070A3267L, (VECTOR(int32_t, 4))(0x070A3267L, (VECTOR(int32_t, 2))(0x070A3267L, 0x21654207L), 0x21654207L), 0x21654207L, 0x070A3267L, 0x21654207L), // p_860->g_12
        (VECTOR(uint8_t, 16))(0xDFL, (VECTOR(uint8_t, 4))(0xDFL, (VECTOR(uint8_t, 2))(0xDFL, 0xDBL), 0xDBL), 0xDBL, 0xDFL, 0xDBL, (VECTOR(uint8_t, 2))(0xDFL, 0xDBL), (VECTOR(uint8_t, 2))(0xDFL, 0xDBL), 0xDFL, 0xDBL, 0xDFL, 0xDBL), // p_860->g_60
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xC4L), 0xC4L), // p_860->g_61
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x73L), 0x73L), 0x73L, 1UL, 0x73L), // p_860->g_62
        (VECTOR(uint64_t, 4))(0x327FA81B22E00644L, (VECTOR(uint64_t, 2))(0x327FA81B22E00644L, 1UL), 1UL), // p_860->g_76
        (VECTOR(int64_t, 2))(0x49B7D65D205C6C27L, 0x7E95B7CA3B757A54L), // p_860->g_77
        (void*)0, // p_860->g_97
        1L, // p_860->g_101
        &p_860->g_101, // p_860->g_100
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5947468AL), 0x5947468AL), 0x5947468AL, (-1L), 0x5947468AL, (VECTOR(int32_t, 2))((-1L), 0x5947468AL), (VECTOR(int32_t, 2))((-1L), 0x5947468AL), (-1L), 0x5947468AL, (-1L), 0x5947468AL), // p_860->g_149
        0x6FL, // p_860->g_156
        (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-1L)), (-1L)), // p_860->g_171
        0x218CL, // p_860->g_183
        1UL, // p_860->g_222
        {{{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L}},{{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L}},{{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L}},{{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L}},{{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L}},{{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L}},{{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L},{6L,(-5L),0x50L,8L}}}, // p_860->g_235
        0x4B3009E1L, // p_860->g_238
        (VECTOR(int32_t, 16))(0x43094950L, (VECTOR(int32_t, 4))(0x43094950L, (VECTOR(int32_t, 2))(0x43094950L, 0x044F218FL), 0x044F218FL), 0x044F218FL, 0x43094950L, 0x044F218FL, (VECTOR(int32_t, 2))(0x43094950L, 0x044F218FL), (VECTOR(int32_t, 2))(0x43094950L, 0x044F218FL), 0x43094950L, 0x044F218FL, 0x43094950L, 0x044F218FL), // p_860->g_245
        (VECTOR(uint32_t, 8))(0xCC902690L, (VECTOR(uint32_t, 4))(0xCC902690L, (VECTOR(uint32_t, 2))(0xCC902690L, 0x5DB340D8L), 0x5DB340D8L), 0x5DB340D8L, 0xCC902690L, 0x5DB340D8L), // p_860->g_247
        (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967288UL), 4294967288UL), // p_860->g_252
        (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x3A81244AL), 0x3A81244AL), // p_860->g_253
        (VECTOR(uint16_t, 4))(0x2EBDL, (VECTOR(uint16_t, 2))(0x2EBDL, 0UL), 0UL), // p_860->g_254
        (VECTOR(int32_t, 16))(0x74205768L, (VECTOR(int32_t, 4))(0x74205768L, (VECTOR(int32_t, 2))(0x74205768L, 0x70A9B692L), 0x70A9B692L), 0x70A9B692L, 0x74205768L, 0x70A9B692L, (VECTOR(int32_t, 2))(0x74205768L, 0x70A9B692L), (VECTOR(int32_t, 2))(0x74205768L, 0x70A9B692L), 0x74205768L, 0x70A9B692L, 0x74205768L, 0x70A9B692L), // p_860->g_284
        (VECTOR(int32_t, 2))(1L, (-10L)), // p_860->g_285
        (VECTOR(int32_t, 4))(0x5F2594DDL, (VECTOR(int32_t, 2))(0x5F2594DDL, 6L), 6L), // p_860->g_286
        (VECTOR(int32_t, 16))(0x52EB8251L, (VECTOR(int32_t, 4))(0x52EB8251L, (VECTOR(int32_t, 2))(0x52EB8251L, 0x2FE9BC3CL), 0x2FE9BC3CL), 0x2FE9BC3CL, 0x52EB8251L, 0x2FE9BC3CL, (VECTOR(int32_t, 2))(0x52EB8251L, 0x2FE9BC3CL), (VECTOR(int32_t, 2))(0x52EB8251L, 0x2FE9BC3CL), 0x52EB8251L, 0x2FE9BC3CL, 0x52EB8251L, 0x2FE9BC3CL), // p_860->g_305
        (VECTOR(int32_t, 2))(3L, 7L), // p_860->g_306
        1UL, // p_860->g_312
        &p_860->g_312, // p_860->g_311
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), // p_860->g_324
        0x1BAC6574L, // p_860->g_370
        (VECTOR(uint32_t, 8))(0x2187F322L, (VECTOR(uint32_t, 4))(0x2187F322L, (VECTOR(uint32_t, 2))(0x2187F322L, 0x0A67DB7BL), 0x0A67DB7BL), 0x0A67DB7BL, 0x2187F322L, 0x0A67DB7BL), // p_860->g_373
        0x638C1E5FL, // p_860->g_381
        0L, // p_860->g_382
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_860->g_397
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x01L), 0x01L), 0x01L, 1L, 0x01L, (VECTOR(int8_t, 2))(1L, 0x01L), (VECTOR(int8_t, 2))(1L, 0x01L), 1L, 0x01L, 1L, 0x01L), // p_860->g_398
        (VECTOR(int32_t, 8))(0x16DB3027L, (VECTOR(int32_t, 4))(0x16DB3027L, (VECTOR(int32_t, 2))(0x16DB3027L, (-3L)), (-3L)), (-3L), 0x16DB3027L, (-3L)), // p_860->g_436
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL), // p_860->g_441
        (VECTOR(uint64_t, 2))(3UL, 0UL), // p_860->g_442
        (VECTOR(uint64_t, 2))(0x96501CBD10E8CB1EL, 3UL), // p_860->g_443
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x54CF17241A6FC38FL), 0x54CF17241A6FC38FL), 0x54CF17241A6FC38FL, 18446744073709551615UL, 0x54CF17241A6FC38FL), // p_860->g_444
        0x7586452EL, // p_860->g_475
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int16_t, 2))(0L, (-1L)), (VECTOR(int16_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_860->g_479
        (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 1L), 1L), 1L, 8L, 1L), // p_860->g_501
        (VECTOR(int8_t, 2))(0x5EL, 0x74L), // p_860->g_532
        (VECTOR(uint8_t, 4))(0x62L, (VECTOR(uint8_t, 2))(0x62L, 9UL), 9UL), // p_860->g_534
        (void*)0, // p_860->g_552
        (VECTOR(uint32_t, 16))(0x30405A8CL, (VECTOR(uint32_t, 4))(0x30405A8CL, (VECTOR(uint32_t, 2))(0x30405A8CL, 0xF53D56C2L), 0xF53D56C2L), 0xF53D56C2L, 0x30405A8CL, 0xF53D56C2L, (VECTOR(uint32_t, 2))(0x30405A8CL, 0xF53D56C2L), (VECTOR(uint32_t, 2))(0x30405A8CL, 0xF53D56C2L), 0x30405A8CL, 0xF53D56C2L, 0x30405A8CL, 0xF53D56C2L), // p_860->g_569
        (VECTOR(uint8_t, 8))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 255UL), 255UL), 255UL, 252UL, 255UL), // p_860->g_583
        (VECTOR(uint16_t, 8))(0xCC57L, (VECTOR(uint16_t, 4))(0xCC57L, (VECTOR(uint16_t, 2))(0xCC57L, 0x7E0AL), 0x7E0AL), 0x7E0AL, 0xCC57L, 0x7E0AL), // p_860->g_587
        (VECTOR(uint32_t, 8))(0xD4CA3E0CL, (VECTOR(uint32_t, 4))(0xD4CA3E0CL, (VECTOR(uint32_t, 2))(0xD4CA3E0CL, 0x9A167CC0L), 0x9A167CC0L), 0x9A167CC0L, 0xD4CA3E0CL, 0x9A167CC0L), // p_860->g_598
        (VECTOR(uint32_t, 2))(0xE8B3866FL, 1UL), // p_860->g_599
        (VECTOR(uint32_t, 8))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 4294967294UL), 4294967294UL), 4294967294UL, 7UL, 4294967294UL), // p_860->g_601
        (VECTOR(uint32_t, 4))(0x2AA98FFBL, (VECTOR(uint32_t, 2))(0x2AA98FFBL, 0x9C7FDD76L), 0x9C7FDD76L), // p_860->g_602
        (VECTOR(uint32_t, 4))(0xF54145B2L, (VECTOR(uint32_t, 2))(0xF54145B2L, 0UL), 0UL), // p_860->g_603
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xAB42B117L), 0xAB42B117L), 0xAB42B117L, 4294967295UL, 0xAB42B117L, (VECTOR(uint32_t, 2))(4294967295UL, 0xAB42B117L), (VECTOR(uint32_t, 2))(4294967295UL, 0xAB42B117L), 4294967295UL, 0xAB42B117L, 4294967295UL, 0xAB42B117L), // p_860->g_606
        (VECTOR(uint32_t, 2))(1UL, 0x943D4FB7L), // p_860->g_649
        (VECTOR(uint32_t, 2))(4294967295UL, 0UL), // p_860->g_652
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_860->g_675
        (VECTOR(int16_t, 4))(0x62D0L, (VECTOR(int16_t, 2))(0x62D0L, 0x099DL), 0x099DL), // p_860->g_718
        1L, // p_860->g_729
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x72L), 0x72L), 0x72L, 1L, 0x72L, (VECTOR(int8_t, 2))(1L, 0x72L), (VECTOR(int8_t, 2))(1L, 0x72L), 1L, 0x72L, 1L, 0x72L), // p_860->g_736
        (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0x7CL), 0x7CL), // p_860->g_746
        (VECTOR(uint8_t, 16))(0x15L, (VECTOR(uint8_t, 4))(0x15L, (VECTOR(uint8_t, 2))(0x15L, 7UL), 7UL), 7UL, 0x15L, 7UL, (VECTOR(uint8_t, 2))(0x15L, 7UL), (VECTOR(uint8_t, 2))(0x15L, 7UL), 0x15L, 7UL, 0x15L, 7UL), // p_860->g_748
        (VECTOR(uint64_t, 8))(0x74A563BAAE7C1018L, (VECTOR(uint64_t, 4))(0x74A563BAAE7C1018L, (VECTOR(uint64_t, 2))(0x74A563BAAE7C1018L, 0xBEE808C7A121348FL), 0xBEE808C7A121348FL), 0xBEE808C7A121348FL, 0x74A563BAAE7C1018L, 0xBEE808C7A121348FL), // p_860->g_789
        (void*)0, // p_860->g_806
        0x2913DF475E154226L, // p_860->g_809
        0x1A30F8ECL, // p_860->g_839
        {0x4CL}, // p_860->g_851
        0UL, // p_860->g_854
        0, // p_860->v_collective
        sequence_input[get_global_id(0)], // p_860->global_0_offset
        sequence_input[get_global_id(1)], // p_860->global_1_offset
        sequence_input[get_global_id(2)], // p_860->global_2_offset
        sequence_input[get_local_id(0)], // p_860->local_0_offset
        sequence_input[get_local_id(1)], // p_860->local_1_offset
        sequence_input[get_local_id(2)], // p_860->local_2_offset
        sequence_input[get_group_id(0)], // p_860->group_0_offset
        sequence_input[get_group_id(1)], // p_860->group_1_offset
        sequence_input[get_group_id(2)], // p_860->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 135)), permutations[0][get_linear_local_id()])), // p_860->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_861 = c_862;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_860);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_860->g_2, "p_860->g_2", print_hash_value);
    transparent_crc(p_860->g_7.s0, "p_860->g_7.s0", print_hash_value);
    transparent_crc(p_860->g_7.s1, "p_860->g_7.s1", print_hash_value);
    transparent_crc(p_860->g_7.s2, "p_860->g_7.s2", print_hash_value);
    transparent_crc(p_860->g_7.s3, "p_860->g_7.s3", print_hash_value);
    transparent_crc(p_860->g_7.s4, "p_860->g_7.s4", print_hash_value);
    transparent_crc(p_860->g_7.s5, "p_860->g_7.s5", print_hash_value);
    transparent_crc(p_860->g_7.s6, "p_860->g_7.s6", print_hash_value);
    transparent_crc(p_860->g_7.s7, "p_860->g_7.s7", print_hash_value);
    transparent_crc(p_860->g_7.s8, "p_860->g_7.s8", print_hash_value);
    transparent_crc(p_860->g_7.s9, "p_860->g_7.s9", print_hash_value);
    transparent_crc(p_860->g_7.sa, "p_860->g_7.sa", print_hash_value);
    transparent_crc(p_860->g_7.sb, "p_860->g_7.sb", print_hash_value);
    transparent_crc(p_860->g_7.sc, "p_860->g_7.sc", print_hash_value);
    transparent_crc(p_860->g_7.sd, "p_860->g_7.sd", print_hash_value);
    transparent_crc(p_860->g_7.se, "p_860->g_7.se", print_hash_value);
    transparent_crc(p_860->g_7.sf, "p_860->g_7.sf", print_hash_value);
    transparent_crc(p_860->g_12.s0, "p_860->g_12.s0", print_hash_value);
    transparent_crc(p_860->g_12.s1, "p_860->g_12.s1", print_hash_value);
    transparent_crc(p_860->g_12.s2, "p_860->g_12.s2", print_hash_value);
    transparent_crc(p_860->g_12.s3, "p_860->g_12.s3", print_hash_value);
    transparent_crc(p_860->g_12.s4, "p_860->g_12.s4", print_hash_value);
    transparent_crc(p_860->g_12.s5, "p_860->g_12.s5", print_hash_value);
    transparent_crc(p_860->g_12.s6, "p_860->g_12.s6", print_hash_value);
    transparent_crc(p_860->g_12.s7, "p_860->g_12.s7", print_hash_value);
    transparent_crc(p_860->g_60.s0, "p_860->g_60.s0", print_hash_value);
    transparent_crc(p_860->g_60.s1, "p_860->g_60.s1", print_hash_value);
    transparent_crc(p_860->g_60.s2, "p_860->g_60.s2", print_hash_value);
    transparent_crc(p_860->g_60.s3, "p_860->g_60.s3", print_hash_value);
    transparent_crc(p_860->g_60.s4, "p_860->g_60.s4", print_hash_value);
    transparent_crc(p_860->g_60.s5, "p_860->g_60.s5", print_hash_value);
    transparent_crc(p_860->g_60.s6, "p_860->g_60.s6", print_hash_value);
    transparent_crc(p_860->g_60.s7, "p_860->g_60.s7", print_hash_value);
    transparent_crc(p_860->g_60.s8, "p_860->g_60.s8", print_hash_value);
    transparent_crc(p_860->g_60.s9, "p_860->g_60.s9", print_hash_value);
    transparent_crc(p_860->g_60.sa, "p_860->g_60.sa", print_hash_value);
    transparent_crc(p_860->g_60.sb, "p_860->g_60.sb", print_hash_value);
    transparent_crc(p_860->g_60.sc, "p_860->g_60.sc", print_hash_value);
    transparent_crc(p_860->g_60.sd, "p_860->g_60.sd", print_hash_value);
    transparent_crc(p_860->g_60.se, "p_860->g_60.se", print_hash_value);
    transparent_crc(p_860->g_60.sf, "p_860->g_60.sf", print_hash_value);
    transparent_crc(p_860->g_61.x, "p_860->g_61.x", print_hash_value);
    transparent_crc(p_860->g_61.y, "p_860->g_61.y", print_hash_value);
    transparent_crc(p_860->g_61.z, "p_860->g_61.z", print_hash_value);
    transparent_crc(p_860->g_61.w, "p_860->g_61.w", print_hash_value);
    transparent_crc(p_860->g_62.s0, "p_860->g_62.s0", print_hash_value);
    transparent_crc(p_860->g_62.s1, "p_860->g_62.s1", print_hash_value);
    transparent_crc(p_860->g_62.s2, "p_860->g_62.s2", print_hash_value);
    transparent_crc(p_860->g_62.s3, "p_860->g_62.s3", print_hash_value);
    transparent_crc(p_860->g_62.s4, "p_860->g_62.s4", print_hash_value);
    transparent_crc(p_860->g_62.s5, "p_860->g_62.s5", print_hash_value);
    transparent_crc(p_860->g_62.s6, "p_860->g_62.s6", print_hash_value);
    transparent_crc(p_860->g_62.s7, "p_860->g_62.s7", print_hash_value);
    transparent_crc(p_860->g_76.x, "p_860->g_76.x", print_hash_value);
    transparent_crc(p_860->g_76.y, "p_860->g_76.y", print_hash_value);
    transparent_crc(p_860->g_76.z, "p_860->g_76.z", print_hash_value);
    transparent_crc(p_860->g_76.w, "p_860->g_76.w", print_hash_value);
    transparent_crc(p_860->g_77.x, "p_860->g_77.x", print_hash_value);
    transparent_crc(p_860->g_77.y, "p_860->g_77.y", print_hash_value);
    transparent_crc(p_860->g_101, "p_860->g_101", print_hash_value);
    transparent_crc(p_860->g_149.s0, "p_860->g_149.s0", print_hash_value);
    transparent_crc(p_860->g_149.s1, "p_860->g_149.s1", print_hash_value);
    transparent_crc(p_860->g_149.s2, "p_860->g_149.s2", print_hash_value);
    transparent_crc(p_860->g_149.s3, "p_860->g_149.s3", print_hash_value);
    transparent_crc(p_860->g_149.s4, "p_860->g_149.s4", print_hash_value);
    transparent_crc(p_860->g_149.s5, "p_860->g_149.s5", print_hash_value);
    transparent_crc(p_860->g_149.s6, "p_860->g_149.s6", print_hash_value);
    transparent_crc(p_860->g_149.s7, "p_860->g_149.s7", print_hash_value);
    transparent_crc(p_860->g_149.s8, "p_860->g_149.s8", print_hash_value);
    transparent_crc(p_860->g_149.s9, "p_860->g_149.s9", print_hash_value);
    transparent_crc(p_860->g_149.sa, "p_860->g_149.sa", print_hash_value);
    transparent_crc(p_860->g_149.sb, "p_860->g_149.sb", print_hash_value);
    transparent_crc(p_860->g_149.sc, "p_860->g_149.sc", print_hash_value);
    transparent_crc(p_860->g_149.sd, "p_860->g_149.sd", print_hash_value);
    transparent_crc(p_860->g_149.se, "p_860->g_149.se", print_hash_value);
    transparent_crc(p_860->g_149.sf, "p_860->g_149.sf", print_hash_value);
    transparent_crc(p_860->g_156, "p_860->g_156", print_hash_value);
    transparent_crc(p_860->g_171.x, "p_860->g_171.x", print_hash_value);
    transparent_crc(p_860->g_171.y, "p_860->g_171.y", print_hash_value);
    transparent_crc(p_860->g_171.z, "p_860->g_171.z", print_hash_value);
    transparent_crc(p_860->g_171.w, "p_860->g_171.w", print_hash_value);
    transparent_crc(p_860->g_183, "p_860->g_183", print_hash_value);
    transparent_crc(p_860->g_222, "p_860->g_222", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_860->g_235[i][j][k], "p_860->g_235[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_860->g_238, "p_860->g_238", print_hash_value);
    transparent_crc(p_860->g_245.s0, "p_860->g_245.s0", print_hash_value);
    transparent_crc(p_860->g_245.s1, "p_860->g_245.s1", print_hash_value);
    transparent_crc(p_860->g_245.s2, "p_860->g_245.s2", print_hash_value);
    transparent_crc(p_860->g_245.s3, "p_860->g_245.s3", print_hash_value);
    transparent_crc(p_860->g_245.s4, "p_860->g_245.s4", print_hash_value);
    transparent_crc(p_860->g_245.s5, "p_860->g_245.s5", print_hash_value);
    transparent_crc(p_860->g_245.s6, "p_860->g_245.s6", print_hash_value);
    transparent_crc(p_860->g_245.s7, "p_860->g_245.s7", print_hash_value);
    transparent_crc(p_860->g_245.s8, "p_860->g_245.s8", print_hash_value);
    transparent_crc(p_860->g_245.s9, "p_860->g_245.s9", print_hash_value);
    transparent_crc(p_860->g_245.sa, "p_860->g_245.sa", print_hash_value);
    transparent_crc(p_860->g_245.sb, "p_860->g_245.sb", print_hash_value);
    transparent_crc(p_860->g_245.sc, "p_860->g_245.sc", print_hash_value);
    transparent_crc(p_860->g_245.sd, "p_860->g_245.sd", print_hash_value);
    transparent_crc(p_860->g_245.se, "p_860->g_245.se", print_hash_value);
    transparent_crc(p_860->g_245.sf, "p_860->g_245.sf", print_hash_value);
    transparent_crc(p_860->g_247.s0, "p_860->g_247.s0", print_hash_value);
    transparent_crc(p_860->g_247.s1, "p_860->g_247.s1", print_hash_value);
    transparent_crc(p_860->g_247.s2, "p_860->g_247.s2", print_hash_value);
    transparent_crc(p_860->g_247.s3, "p_860->g_247.s3", print_hash_value);
    transparent_crc(p_860->g_247.s4, "p_860->g_247.s4", print_hash_value);
    transparent_crc(p_860->g_247.s5, "p_860->g_247.s5", print_hash_value);
    transparent_crc(p_860->g_247.s6, "p_860->g_247.s6", print_hash_value);
    transparent_crc(p_860->g_247.s7, "p_860->g_247.s7", print_hash_value);
    transparent_crc(p_860->g_252.x, "p_860->g_252.x", print_hash_value);
    transparent_crc(p_860->g_252.y, "p_860->g_252.y", print_hash_value);
    transparent_crc(p_860->g_252.z, "p_860->g_252.z", print_hash_value);
    transparent_crc(p_860->g_252.w, "p_860->g_252.w", print_hash_value);
    transparent_crc(p_860->g_253.x, "p_860->g_253.x", print_hash_value);
    transparent_crc(p_860->g_253.y, "p_860->g_253.y", print_hash_value);
    transparent_crc(p_860->g_253.z, "p_860->g_253.z", print_hash_value);
    transparent_crc(p_860->g_253.w, "p_860->g_253.w", print_hash_value);
    transparent_crc(p_860->g_254.x, "p_860->g_254.x", print_hash_value);
    transparent_crc(p_860->g_254.y, "p_860->g_254.y", print_hash_value);
    transparent_crc(p_860->g_254.z, "p_860->g_254.z", print_hash_value);
    transparent_crc(p_860->g_254.w, "p_860->g_254.w", print_hash_value);
    transparent_crc(p_860->g_284.s0, "p_860->g_284.s0", print_hash_value);
    transparent_crc(p_860->g_284.s1, "p_860->g_284.s1", print_hash_value);
    transparent_crc(p_860->g_284.s2, "p_860->g_284.s2", print_hash_value);
    transparent_crc(p_860->g_284.s3, "p_860->g_284.s3", print_hash_value);
    transparent_crc(p_860->g_284.s4, "p_860->g_284.s4", print_hash_value);
    transparent_crc(p_860->g_284.s5, "p_860->g_284.s5", print_hash_value);
    transparent_crc(p_860->g_284.s6, "p_860->g_284.s6", print_hash_value);
    transparent_crc(p_860->g_284.s7, "p_860->g_284.s7", print_hash_value);
    transparent_crc(p_860->g_284.s8, "p_860->g_284.s8", print_hash_value);
    transparent_crc(p_860->g_284.s9, "p_860->g_284.s9", print_hash_value);
    transparent_crc(p_860->g_284.sa, "p_860->g_284.sa", print_hash_value);
    transparent_crc(p_860->g_284.sb, "p_860->g_284.sb", print_hash_value);
    transparent_crc(p_860->g_284.sc, "p_860->g_284.sc", print_hash_value);
    transparent_crc(p_860->g_284.sd, "p_860->g_284.sd", print_hash_value);
    transparent_crc(p_860->g_284.se, "p_860->g_284.se", print_hash_value);
    transparent_crc(p_860->g_284.sf, "p_860->g_284.sf", print_hash_value);
    transparent_crc(p_860->g_285.x, "p_860->g_285.x", print_hash_value);
    transparent_crc(p_860->g_285.y, "p_860->g_285.y", print_hash_value);
    transparent_crc(p_860->g_286.x, "p_860->g_286.x", print_hash_value);
    transparent_crc(p_860->g_286.y, "p_860->g_286.y", print_hash_value);
    transparent_crc(p_860->g_286.z, "p_860->g_286.z", print_hash_value);
    transparent_crc(p_860->g_286.w, "p_860->g_286.w", print_hash_value);
    transparent_crc(p_860->g_305.s0, "p_860->g_305.s0", print_hash_value);
    transparent_crc(p_860->g_305.s1, "p_860->g_305.s1", print_hash_value);
    transparent_crc(p_860->g_305.s2, "p_860->g_305.s2", print_hash_value);
    transparent_crc(p_860->g_305.s3, "p_860->g_305.s3", print_hash_value);
    transparent_crc(p_860->g_305.s4, "p_860->g_305.s4", print_hash_value);
    transparent_crc(p_860->g_305.s5, "p_860->g_305.s5", print_hash_value);
    transparent_crc(p_860->g_305.s6, "p_860->g_305.s6", print_hash_value);
    transparent_crc(p_860->g_305.s7, "p_860->g_305.s7", print_hash_value);
    transparent_crc(p_860->g_305.s8, "p_860->g_305.s8", print_hash_value);
    transparent_crc(p_860->g_305.s9, "p_860->g_305.s9", print_hash_value);
    transparent_crc(p_860->g_305.sa, "p_860->g_305.sa", print_hash_value);
    transparent_crc(p_860->g_305.sb, "p_860->g_305.sb", print_hash_value);
    transparent_crc(p_860->g_305.sc, "p_860->g_305.sc", print_hash_value);
    transparent_crc(p_860->g_305.sd, "p_860->g_305.sd", print_hash_value);
    transparent_crc(p_860->g_305.se, "p_860->g_305.se", print_hash_value);
    transparent_crc(p_860->g_305.sf, "p_860->g_305.sf", print_hash_value);
    transparent_crc(p_860->g_306.x, "p_860->g_306.x", print_hash_value);
    transparent_crc(p_860->g_306.y, "p_860->g_306.y", print_hash_value);
    transparent_crc(p_860->g_312, "p_860->g_312", print_hash_value);
    transparent_crc(p_860->g_324.x, "p_860->g_324.x", print_hash_value);
    transparent_crc(p_860->g_324.y, "p_860->g_324.y", print_hash_value);
    transparent_crc(p_860->g_324.z, "p_860->g_324.z", print_hash_value);
    transparent_crc(p_860->g_324.w, "p_860->g_324.w", print_hash_value);
    transparent_crc(p_860->g_370, "p_860->g_370", print_hash_value);
    transparent_crc(p_860->g_373.s0, "p_860->g_373.s0", print_hash_value);
    transparent_crc(p_860->g_373.s1, "p_860->g_373.s1", print_hash_value);
    transparent_crc(p_860->g_373.s2, "p_860->g_373.s2", print_hash_value);
    transparent_crc(p_860->g_373.s3, "p_860->g_373.s3", print_hash_value);
    transparent_crc(p_860->g_373.s4, "p_860->g_373.s4", print_hash_value);
    transparent_crc(p_860->g_373.s5, "p_860->g_373.s5", print_hash_value);
    transparent_crc(p_860->g_373.s6, "p_860->g_373.s6", print_hash_value);
    transparent_crc(p_860->g_373.s7, "p_860->g_373.s7", print_hash_value);
    transparent_crc(p_860->g_381, "p_860->g_381", print_hash_value);
    transparent_crc(p_860->g_382, "p_860->g_382", print_hash_value);
    transparent_crc(p_860->g_397.s0, "p_860->g_397.s0", print_hash_value);
    transparent_crc(p_860->g_397.s1, "p_860->g_397.s1", print_hash_value);
    transparent_crc(p_860->g_397.s2, "p_860->g_397.s2", print_hash_value);
    transparent_crc(p_860->g_397.s3, "p_860->g_397.s3", print_hash_value);
    transparent_crc(p_860->g_397.s4, "p_860->g_397.s4", print_hash_value);
    transparent_crc(p_860->g_397.s5, "p_860->g_397.s5", print_hash_value);
    transparent_crc(p_860->g_397.s6, "p_860->g_397.s6", print_hash_value);
    transparent_crc(p_860->g_397.s7, "p_860->g_397.s7", print_hash_value);
    transparent_crc(p_860->g_398.s0, "p_860->g_398.s0", print_hash_value);
    transparent_crc(p_860->g_398.s1, "p_860->g_398.s1", print_hash_value);
    transparent_crc(p_860->g_398.s2, "p_860->g_398.s2", print_hash_value);
    transparent_crc(p_860->g_398.s3, "p_860->g_398.s3", print_hash_value);
    transparent_crc(p_860->g_398.s4, "p_860->g_398.s4", print_hash_value);
    transparent_crc(p_860->g_398.s5, "p_860->g_398.s5", print_hash_value);
    transparent_crc(p_860->g_398.s6, "p_860->g_398.s6", print_hash_value);
    transparent_crc(p_860->g_398.s7, "p_860->g_398.s7", print_hash_value);
    transparent_crc(p_860->g_398.s8, "p_860->g_398.s8", print_hash_value);
    transparent_crc(p_860->g_398.s9, "p_860->g_398.s9", print_hash_value);
    transparent_crc(p_860->g_398.sa, "p_860->g_398.sa", print_hash_value);
    transparent_crc(p_860->g_398.sb, "p_860->g_398.sb", print_hash_value);
    transparent_crc(p_860->g_398.sc, "p_860->g_398.sc", print_hash_value);
    transparent_crc(p_860->g_398.sd, "p_860->g_398.sd", print_hash_value);
    transparent_crc(p_860->g_398.se, "p_860->g_398.se", print_hash_value);
    transparent_crc(p_860->g_398.sf, "p_860->g_398.sf", print_hash_value);
    transparent_crc(p_860->g_436.s0, "p_860->g_436.s0", print_hash_value);
    transparent_crc(p_860->g_436.s1, "p_860->g_436.s1", print_hash_value);
    transparent_crc(p_860->g_436.s2, "p_860->g_436.s2", print_hash_value);
    transparent_crc(p_860->g_436.s3, "p_860->g_436.s3", print_hash_value);
    transparent_crc(p_860->g_436.s4, "p_860->g_436.s4", print_hash_value);
    transparent_crc(p_860->g_436.s5, "p_860->g_436.s5", print_hash_value);
    transparent_crc(p_860->g_436.s6, "p_860->g_436.s6", print_hash_value);
    transparent_crc(p_860->g_436.s7, "p_860->g_436.s7", print_hash_value);
    transparent_crc(p_860->g_441.s0, "p_860->g_441.s0", print_hash_value);
    transparent_crc(p_860->g_441.s1, "p_860->g_441.s1", print_hash_value);
    transparent_crc(p_860->g_441.s2, "p_860->g_441.s2", print_hash_value);
    transparent_crc(p_860->g_441.s3, "p_860->g_441.s3", print_hash_value);
    transparent_crc(p_860->g_441.s4, "p_860->g_441.s4", print_hash_value);
    transparent_crc(p_860->g_441.s5, "p_860->g_441.s5", print_hash_value);
    transparent_crc(p_860->g_441.s6, "p_860->g_441.s6", print_hash_value);
    transparent_crc(p_860->g_441.s7, "p_860->g_441.s7", print_hash_value);
    transparent_crc(p_860->g_442.x, "p_860->g_442.x", print_hash_value);
    transparent_crc(p_860->g_442.y, "p_860->g_442.y", print_hash_value);
    transparent_crc(p_860->g_443.x, "p_860->g_443.x", print_hash_value);
    transparent_crc(p_860->g_443.y, "p_860->g_443.y", print_hash_value);
    transparent_crc(p_860->g_444.s0, "p_860->g_444.s0", print_hash_value);
    transparent_crc(p_860->g_444.s1, "p_860->g_444.s1", print_hash_value);
    transparent_crc(p_860->g_444.s2, "p_860->g_444.s2", print_hash_value);
    transparent_crc(p_860->g_444.s3, "p_860->g_444.s3", print_hash_value);
    transparent_crc(p_860->g_444.s4, "p_860->g_444.s4", print_hash_value);
    transparent_crc(p_860->g_444.s5, "p_860->g_444.s5", print_hash_value);
    transparent_crc(p_860->g_444.s6, "p_860->g_444.s6", print_hash_value);
    transparent_crc(p_860->g_444.s7, "p_860->g_444.s7", print_hash_value);
    transparent_crc(p_860->g_475, "p_860->g_475", print_hash_value);
    transparent_crc(p_860->g_479.s0, "p_860->g_479.s0", print_hash_value);
    transparent_crc(p_860->g_479.s1, "p_860->g_479.s1", print_hash_value);
    transparent_crc(p_860->g_479.s2, "p_860->g_479.s2", print_hash_value);
    transparent_crc(p_860->g_479.s3, "p_860->g_479.s3", print_hash_value);
    transparent_crc(p_860->g_479.s4, "p_860->g_479.s4", print_hash_value);
    transparent_crc(p_860->g_479.s5, "p_860->g_479.s5", print_hash_value);
    transparent_crc(p_860->g_479.s6, "p_860->g_479.s6", print_hash_value);
    transparent_crc(p_860->g_479.s7, "p_860->g_479.s7", print_hash_value);
    transparent_crc(p_860->g_479.s8, "p_860->g_479.s8", print_hash_value);
    transparent_crc(p_860->g_479.s9, "p_860->g_479.s9", print_hash_value);
    transparent_crc(p_860->g_479.sa, "p_860->g_479.sa", print_hash_value);
    transparent_crc(p_860->g_479.sb, "p_860->g_479.sb", print_hash_value);
    transparent_crc(p_860->g_479.sc, "p_860->g_479.sc", print_hash_value);
    transparent_crc(p_860->g_479.sd, "p_860->g_479.sd", print_hash_value);
    transparent_crc(p_860->g_479.se, "p_860->g_479.se", print_hash_value);
    transparent_crc(p_860->g_479.sf, "p_860->g_479.sf", print_hash_value);
    transparent_crc(p_860->g_501.s0, "p_860->g_501.s0", print_hash_value);
    transparent_crc(p_860->g_501.s1, "p_860->g_501.s1", print_hash_value);
    transparent_crc(p_860->g_501.s2, "p_860->g_501.s2", print_hash_value);
    transparent_crc(p_860->g_501.s3, "p_860->g_501.s3", print_hash_value);
    transparent_crc(p_860->g_501.s4, "p_860->g_501.s4", print_hash_value);
    transparent_crc(p_860->g_501.s5, "p_860->g_501.s5", print_hash_value);
    transparent_crc(p_860->g_501.s6, "p_860->g_501.s6", print_hash_value);
    transparent_crc(p_860->g_501.s7, "p_860->g_501.s7", print_hash_value);
    transparent_crc(p_860->g_532.x, "p_860->g_532.x", print_hash_value);
    transparent_crc(p_860->g_532.y, "p_860->g_532.y", print_hash_value);
    transparent_crc(p_860->g_534.x, "p_860->g_534.x", print_hash_value);
    transparent_crc(p_860->g_534.y, "p_860->g_534.y", print_hash_value);
    transparent_crc(p_860->g_534.z, "p_860->g_534.z", print_hash_value);
    transparent_crc(p_860->g_534.w, "p_860->g_534.w", print_hash_value);
    transparent_crc(p_860->g_569.s0, "p_860->g_569.s0", print_hash_value);
    transparent_crc(p_860->g_569.s1, "p_860->g_569.s1", print_hash_value);
    transparent_crc(p_860->g_569.s2, "p_860->g_569.s2", print_hash_value);
    transparent_crc(p_860->g_569.s3, "p_860->g_569.s3", print_hash_value);
    transparent_crc(p_860->g_569.s4, "p_860->g_569.s4", print_hash_value);
    transparent_crc(p_860->g_569.s5, "p_860->g_569.s5", print_hash_value);
    transparent_crc(p_860->g_569.s6, "p_860->g_569.s6", print_hash_value);
    transparent_crc(p_860->g_569.s7, "p_860->g_569.s7", print_hash_value);
    transparent_crc(p_860->g_569.s8, "p_860->g_569.s8", print_hash_value);
    transparent_crc(p_860->g_569.s9, "p_860->g_569.s9", print_hash_value);
    transparent_crc(p_860->g_569.sa, "p_860->g_569.sa", print_hash_value);
    transparent_crc(p_860->g_569.sb, "p_860->g_569.sb", print_hash_value);
    transparent_crc(p_860->g_569.sc, "p_860->g_569.sc", print_hash_value);
    transparent_crc(p_860->g_569.sd, "p_860->g_569.sd", print_hash_value);
    transparent_crc(p_860->g_569.se, "p_860->g_569.se", print_hash_value);
    transparent_crc(p_860->g_569.sf, "p_860->g_569.sf", print_hash_value);
    transparent_crc(p_860->g_583.s0, "p_860->g_583.s0", print_hash_value);
    transparent_crc(p_860->g_583.s1, "p_860->g_583.s1", print_hash_value);
    transparent_crc(p_860->g_583.s2, "p_860->g_583.s2", print_hash_value);
    transparent_crc(p_860->g_583.s3, "p_860->g_583.s3", print_hash_value);
    transparent_crc(p_860->g_583.s4, "p_860->g_583.s4", print_hash_value);
    transparent_crc(p_860->g_583.s5, "p_860->g_583.s5", print_hash_value);
    transparent_crc(p_860->g_583.s6, "p_860->g_583.s6", print_hash_value);
    transparent_crc(p_860->g_583.s7, "p_860->g_583.s7", print_hash_value);
    transparent_crc(p_860->g_587.s0, "p_860->g_587.s0", print_hash_value);
    transparent_crc(p_860->g_587.s1, "p_860->g_587.s1", print_hash_value);
    transparent_crc(p_860->g_587.s2, "p_860->g_587.s2", print_hash_value);
    transparent_crc(p_860->g_587.s3, "p_860->g_587.s3", print_hash_value);
    transparent_crc(p_860->g_587.s4, "p_860->g_587.s4", print_hash_value);
    transparent_crc(p_860->g_587.s5, "p_860->g_587.s5", print_hash_value);
    transparent_crc(p_860->g_587.s6, "p_860->g_587.s6", print_hash_value);
    transparent_crc(p_860->g_587.s7, "p_860->g_587.s7", print_hash_value);
    transparent_crc(p_860->g_598.s0, "p_860->g_598.s0", print_hash_value);
    transparent_crc(p_860->g_598.s1, "p_860->g_598.s1", print_hash_value);
    transparent_crc(p_860->g_598.s2, "p_860->g_598.s2", print_hash_value);
    transparent_crc(p_860->g_598.s3, "p_860->g_598.s3", print_hash_value);
    transparent_crc(p_860->g_598.s4, "p_860->g_598.s4", print_hash_value);
    transparent_crc(p_860->g_598.s5, "p_860->g_598.s5", print_hash_value);
    transparent_crc(p_860->g_598.s6, "p_860->g_598.s6", print_hash_value);
    transparent_crc(p_860->g_598.s7, "p_860->g_598.s7", print_hash_value);
    transparent_crc(p_860->g_599.x, "p_860->g_599.x", print_hash_value);
    transparent_crc(p_860->g_599.y, "p_860->g_599.y", print_hash_value);
    transparent_crc(p_860->g_601.s0, "p_860->g_601.s0", print_hash_value);
    transparent_crc(p_860->g_601.s1, "p_860->g_601.s1", print_hash_value);
    transparent_crc(p_860->g_601.s2, "p_860->g_601.s2", print_hash_value);
    transparent_crc(p_860->g_601.s3, "p_860->g_601.s3", print_hash_value);
    transparent_crc(p_860->g_601.s4, "p_860->g_601.s4", print_hash_value);
    transparent_crc(p_860->g_601.s5, "p_860->g_601.s5", print_hash_value);
    transparent_crc(p_860->g_601.s6, "p_860->g_601.s6", print_hash_value);
    transparent_crc(p_860->g_601.s7, "p_860->g_601.s7", print_hash_value);
    transparent_crc(p_860->g_602.x, "p_860->g_602.x", print_hash_value);
    transparent_crc(p_860->g_602.y, "p_860->g_602.y", print_hash_value);
    transparent_crc(p_860->g_602.z, "p_860->g_602.z", print_hash_value);
    transparent_crc(p_860->g_602.w, "p_860->g_602.w", print_hash_value);
    transparent_crc(p_860->g_603.x, "p_860->g_603.x", print_hash_value);
    transparent_crc(p_860->g_603.y, "p_860->g_603.y", print_hash_value);
    transparent_crc(p_860->g_603.z, "p_860->g_603.z", print_hash_value);
    transparent_crc(p_860->g_603.w, "p_860->g_603.w", print_hash_value);
    transparent_crc(p_860->g_606.s0, "p_860->g_606.s0", print_hash_value);
    transparent_crc(p_860->g_606.s1, "p_860->g_606.s1", print_hash_value);
    transparent_crc(p_860->g_606.s2, "p_860->g_606.s2", print_hash_value);
    transparent_crc(p_860->g_606.s3, "p_860->g_606.s3", print_hash_value);
    transparent_crc(p_860->g_606.s4, "p_860->g_606.s4", print_hash_value);
    transparent_crc(p_860->g_606.s5, "p_860->g_606.s5", print_hash_value);
    transparent_crc(p_860->g_606.s6, "p_860->g_606.s6", print_hash_value);
    transparent_crc(p_860->g_606.s7, "p_860->g_606.s7", print_hash_value);
    transparent_crc(p_860->g_606.s8, "p_860->g_606.s8", print_hash_value);
    transparent_crc(p_860->g_606.s9, "p_860->g_606.s9", print_hash_value);
    transparent_crc(p_860->g_606.sa, "p_860->g_606.sa", print_hash_value);
    transparent_crc(p_860->g_606.sb, "p_860->g_606.sb", print_hash_value);
    transparent_crc(p_860->g_606.sc, "p_860->g_606.sc", print_hash_value);
    transparent_crc(p_860->g_606.sd, "p_860->g_606.sd", print_hash_value);
    transparent_crc(p_860->g_606.se, "p_860->g_606.se", print_hash_value);
    transparent_crc(p_860->g_606.sf, "p_860->g_606.sf", print_hash_value);
    transparent_crc(p_860->g_649.x, "p_860->g_649.x", print_hash_value);
    transparent_crc(p_860->g_649.y, "p_860->g_649.y", print_hash_value);
    transparent_crc(p_860->g_652.x, "p_860->g_652.x", print_hash_value);
    transparent_crc(p_860->g_652.y, "p_860->g_652.y", print_hash_value);
    transparent_crc(p_860->g_718.x, "p_860->g_718.x", print_hash_value);
    transparent_crc(p_860->g_718.y, "p_860->g_718.y", print_hash_value);
    transparent_crc(p_860->g_718.z, "p_860->g_718.z", print_hash_value);
    transparent_crc(p_860->g_718.w, "p_860->g_718.w", print_hash_value);
    transparent_crc(p_860->g_729, "p_860->g_729", print_hash_value);
    transparent_crc(p_860->g_736.s0, "p_860->g_736.s0", print_hash_value);
    transparent_crc(p_860->g_736.s1, "p_860->g_736.s1", print_hash_value);
    transparent_crc(p_860->g_736.s2, "p_860->g_736.s2", print_hash_value);
    transparent_crc(p_860->g_736.s3, "p_860->g_736.s3", print_hash_value);
    transparent_crc(p_860->g_736.s4, "p_860->g_736.s4", print_hash_value);
    transparent_crc(p_860->g_736.s5, "p_860->g_736.s5", print_hash_value);
    transparent_crc(p_860->g_736.s6, "p_860->g_736.s6", print_hash_value);
    transparent_crc(p_860->g_736.s7, "p_860->g_736.s7", print_hash_value);
    transparent_crc(p_860->g_736.s8, "p_860->g_736.s8", print_hash_value);
    transparent_crc(p_860->g_736.s9, "p_860->g_736.s9", print_hash_value);
    transparent_crc(p_860->g_736.sa, "p_860->g_736.sa", print_hash_value);
    transparent_crc(p_860->g_736.sb, "p_860->g_736.sb", print_hash_value);
    transparent_crc(p_860->g_736.sc, "p_860->g_736.sc", print_hash_value);
    transparent_crc(p_860->g_736.sd, "p_860->g_736.sd", print_hash_value);
    transparent_crc(p_860->g_736.se, "p_860->g_736.se", print_hash_value);
    transparent_crc(p_860->g_736.sf, "p_860->g_736.sf", print_hash_value);
    transparent_crc(p_860->g_746.x, "p_860->g_746.x", print_hash_value);
    transparent_crc(p_860->g_746.y, "p_860->g_746.y", print_hash_value);
    transparent_crc(p_860->g_746.z, "p_860->g_746.z", print_hash_value);
    transparent_crc(p_860->g_746.w, "p_860->g_746.w", print_hash_value);
    transparent_crc(p_860->g_748.s0, "p_860->g_748.s0", print_hash_value);
    transparent_crc(p_860->g_748.s1, "p_860->g_748.s1", print_hash_value);
    transparent_crc(p_860->g_748.s2, "p_860->g_748.s2", print_hash_value);
    transparent_crc(p_860->g_748.s3, "p_860->g_748.s3", print_hash_value);
    transparent_crc(p_860->g_748.s4, "p_860->g_748.s4", print_hash_value);
    transparent_crc(p_860->g_748.s5, "p_860->g_748.s5", print_hash_value);
    transparent_crc(p_860->g_748.s6, "p_860->g_748.s6", print_hash_value);
    transparent_crc(p_860->g_748.s7, "p_860->g_748.s7", print_hash_value);
    transparent_crc(p_860->g_748.s8, "p_860->g_748.s8", print_hash_value);
    transparent_crc(p_860->g_748.s9, "p_860->g_748.s9", print_hash_value);
    transparent_crc(p_860->g_748.sa, "p_860->g_748.sa", print_hash_value);
    transparent_crc(p_860->g_748.sb, "p_860->g_748.sb", print_hash_value);
    transparent_crc(p_860->g_748.sc, "p_860->g_748.sc", print_hash_value);
    transparent_crc(p_860->g_748.sd, "p_860->g_748.sd", print_hash_value);
    transparent_crc(p_860->g_748.se, "p_860->g_748.se", print_hash_value);
    transparent_crc(p_860->g_748.sf, "p_860->g_748.sf", print_hash_value);
    transparent_crc(p_860->g_789.s0, "p_860->g_789.s0", print_hash_value);
    transparent_crc(p_860->g_789.s1, "p_860->g_789.s1", print_hash_value);
    transparent_crc(p_860->g_789.s2, "p_860->g_789.s2", print_hash_value);
    transparent_crc(p_860->g_789.s3, "p_860->g_789.s3", print_hash_value);
    transparent_crc(p_860->g_789.s4, "p_860->g_789.s4", print_hash_value);
    transparent_crc(p_860->g_789.s5, "p_860->g_789.s5", print_hash_value);
    transparent_crc(p_860->g_789.s6, "p_860->g_789.s6", print_hash_value);
    transparent_crc(p_860->g_789.s7, "p_860->g_789.s7", print_hash_value);
    transparent_crc(p_860->g_809, "p_860->g_809", print_hash_value);
    transparent_crc(p_860->g_839, "p_860->g_839", print_hash_value);
    transparent_crc(p_860->g_851.f0, "p_860->g_851.f0", print_hash_value);
    transparent_crc(p_860->g_854, "p_860->g_854", print_hash_value);
    transparent_crc(p_860->v_collective, "p_860->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 17; i++)
            transparent_crc(p_860->g_special_values[i + 17 * get_linear_group_id()], "p_860->g_special_values[i + 17 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 17; i++)
            transparent_crc(p_860->l_special_values[i], "p_860->l_special_values[i]", print_hash_value);
    transparent_crc(p_860->l_comm_values[get_linear_local_id()], "p_860->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_860->g_comm_values[get_linear_group_id() * 135 + get_linear_local_id()], "p_860->g_comm_values[get_linear_group_id() * 135 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
