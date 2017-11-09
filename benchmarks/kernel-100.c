// --atomics 74 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 87,89,1 -l 87,1,1
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

__constant uint32_t permutations[10][87] = {
{62,76,31,35,23,10,11,8,67,36,26,43,55,1,47,86,30,27,79,37,44,63,17,0,58,39,2,84,80,5,50,33,41,4,75,69,3,28,68,70,60,24,61,12,65,16,54,73,13,15,29,74,46,51,7,22,71,59,19,72,52,49,64,85,25,18,14,42,57,9,81,20,83,66,53,21,77,45,56,38,6,78,82,40,32,48,34}, // permutation 0
{54,7,49,33,6,84,39,62,58,68,59,18,50,65,9,25,41,38,12,74,78,16,51,3,73,55,72,24,20,4,85,17,35,5,64,28,60,22,8,61,42,44,19,27,14,46,10,23,76,82,43,77,37,31,71,11,0,79,29,66,83,67,81,1,56,13,32,34,2,26,15,86,45,75,52,63,53,21,40,36,47,57,48,80,69,70,30}, // permutation 1
{40,71,33,64,24,26,63,76,1,62,6,11,74,48,43,41,27,56,38,42,69,7,60,12,83,65,20,29,35,55,39,28,70,50,2,81,46,54,66,82,8,84,23,67,77,59,57,34,16,75,80,10,5,47,19,44,86,13,49,9,45,53,0,78,22,72,32,31,36,18,25,58,4,73,17,51,79,68,3,30,14,85,21,15,61,37,52}, // permutation 2
{83,20,24,25,15,59,9,81,29,62,43,55,48,44,35,42,39,13,54,67,57,11,77,72,73,23,80,18,27,52,49,32,8,50,47,56,6,45,86,46,17,71,74,2,31,82,34,5,19,0,79,30,84,69,37,51,7,16,66,28,53,65,14,12,76,41,58,68,40,64,10,3,4,61,26,21,36,63,78,85,33,60,75,38,1,22,70}, // permutation 3
{50,84,28,72,30,33,4,10,8,81,34,9,69,51,6,37,53,5,65,57,80,64,75,70,23,76,47,12,21,19,38,83,59,13,39,79,35,60,43,31,2,58,42,16,86,3,0,41,77,61,1,18,7,73,20,49,74,11,26,46,40,82,17,36,44,45,67,48,56,15,71,63,14,29,78,22,52,68,66,24,85,25,32,55,27,54,62}, // permutation 4
{18,43,60,35,36,1,51,73,65,77,4,54,85,62,5,33,46,50,59,78,14,81,64,83,63,86,0,30,11,49,61,2,37,41,27,44,76,67,84,48,19,26,17,9,24,68,75,69,21,6,39,32,79,52,42,16,31,56,38,29,71,8,72,20,12,15,13,80,70,28,7,34,47,10,74,53,58,66,57,82,3,40,23,55,45,22,25}, // permutation 5
{1,45,19,69,23,46,2,63,21,52,61,38,58,57,42,31,73,33,28,59,51,39,18,22,25,50,16,74,62,77,53,26,75,7,81,30,35,68,17,48,49,4,71,60,78,27,83,40,56,80,11,8,67,24,32,82,84,65,37,15,41,34,0,9,85,55,76,66,86,43,47,3,14,12,64,54,20,13,5,44,79,29,72,70,36,10,6}, // permutation 6
{19,3,14,61,0,71,11,46,79,77,45,12,78,84,86,18,76,64,48,37,60,67,62,65,47,74,81,38,59,53,10,29,33,51,25,24,26,23,15,32,2,43,44,75,49,63,73,56,6,22,27,36,68,5,17,83,8,58,39,4,42,30,35,7,9,82,57,70,54,28,40,34,13,69,21,50,55,16,20,41,31,72,85,1,80,66,52}, // permutation 7
{58,11,42,23,82,1,67,35,66,27,29,19,24,50,60,76,6,65,55,12,4,53,14,71,5,63,45,22,56,86,49,74,30,83,75,41,48,34,69,62,84,59,47,21,10,32,72,20,16,17,8,43,15,70,81,13,38,46,80,37,52,3,57,31,54,18,77,36,44,33,73,25,40,26,0,2,51,9,78,28,7,64,85,68,79,39,61}, // permutation 8
{5,77,27,80,54,49,72,3,18,83,39,40,66,79,75,43,32,0,1,55,37,84,51,63,85,29,36,23,26,57,82,76,25,12,60,6,34,61,52,38,8,42,33,53,70,56,24,28,9,11,67,73,46,30,45,71,68,2,14,62,21,74,58,22,69,64,50,31,16,10,78,47,7,20,19,81,59,35,41,4,48,65,15,86,17,13,44} // permutation 9
};

// Seed: 528068808

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
   int16_t  f1;
   uint64_t  f2;
   volatile uint8_t  f3;
   int32_t  f4;
   volatile int8_t  f5;
   uint8_t  f6;
};

struct S1 {
   uint32_t  f0;
};

union U2 {
   volatile int32_t  f0;
   volatile int32_t  f1;
};

struct S3 {
    uint8_t g_7[3][2][4];
    volatile VECTOR(uint8_t, 4) g_21;
    int32_t g_39;
    volatile int32_t g_65;
    volatile int32_t *g_64;
    int8_t g_67;
    struct S1 g_68[8];
    uint8_t g_71;
    VECTOR(uint16_t, 8) g_83;
    struct S1 *g_85;
    VECTOR(uint8_t, 2) g_93;
    VECTOR(uint8_t, 8) g_94;
    VECTOR(int64_t, 16) g_97;
    VECTOR(int64_t, 2) g_99;
    volatile uint16_t g_103[4][10];
    volatile uint16_t *g_102;
    int8_t *g_105;
    int32_t *g_107;
    int32_t g_110;
    int64_t g_114;
    int8_t g_115;
    uint32_t g_117;
    uint16_t g_151;
    int64_t g_155;
    VECTOR(int16_t, 8) g_158;
    int32_t g_160[4];
    int32_t g_164;
    int32_t *g_163[2];
    volatile int32_t g_177;
    volatile struct S0 g_213;
    VECTOR(uint64_t, 8) g_216;
    VECTOR(uint32_t, 16) g_236;
    VECTOR(uint16_t, 16) g_270;
    VECTOR(uint64_t, 8) g_277;
    VECTOR(uint8_t, 4) g_293;
    int8_t g_299[7][8][2];
    struct S0 g_312[6];
    int32_t g_325;
    int8_t g_332[1][5];
    int32_t *g_350;
    int32_t *g_351;
    struct S1 **g_436;
    struct S1 *** volatile g_435;
    int32_t * volatile *g_444;
    int32_t * volatile ** volatile g_443;
    int32_t * volatile ** volatile * volatile g_442[2];
    uint8_t *g_463[5][10];
    int32_t *g_470[6];
    volatile uint8_t g_473;
    int32_t *g_476[4];
    int32_t **g_475[5][1][10];
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
uint64_t  func_1(struct S3 * p_478);
int32_t * func_2(uint8_t  p_3, int32_t  p_4, int32_t * p_5, struct S3 * p_478);
int64_t  func_12(struct S1  p_13, uint8_t * p_14, struct S3 * p_478);
struct S1  func_15(int32_t  p_16, int32_t  p_17, uint32_t  p_18, int32_t * p_19, struct S3 * p_478);
uint8_t  func_22(uint8_t  p_23, int32_t  p_24, uint8_t  p_25, int32_t  p_26, struct S3 * p_478);
uint64_t  func_29(int32_t  p_30, uint8_t * p_31, struct S3 * p_478);
int32_t * func_32(int32_t * p_33, int32_t  p_34, uint32_t  p_35, int32_t * p_36, uint32_t  p_37, struct S3 * p_478);
uint32_t  func_43(int32_t * p_44, struct S3 * p_478);
int32_t * func_45(uint8_t * p_46, int32_t * p_47, int32_t  p_48, int32_t * p_49, int32_t * p_50, struct S3 * p_478);
uint8_t * func_51(int32_t * p_52, uint64_t  p_53, uint64_t  p_54, uint16_t  p_55, uint8_t  p_56, struct S3 * p_478);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_478->g_7 p_478->l_comm_values p_478->g_21 p_478->g_64 p_478->g_39 p_478->g_comm_values p_478->g_68 p_478->g_83 p_478->g_93 p_478->g_94 p_478->g_97 p_478->g_99 p_478->g_102 p_478->g_107 p_478->g_110 p_478->g_117 p_478->g_105 p_478->g_67 p_478->g_71 p_478->g_114 p_478->g_155 p_478->g_158 p_478->g_163 p_478->g_151 p_478->g_103 p_478->g_164 p_478->g_213 p_478->g_216 p_478->g_65 p_478->g_236 p_478->g_270 p_478->g_277 p_478->g_293 p_478->g_160 p_478->g_312 p_478->g_325 p_478->g_299 p_478->g_332 p_478->g_351 p_478->g_435 p_478->g_442 p_478->g_85 p_478->g_463 p_478->g_473
 * writes: p_478->g_7 p_478->g_67 p_478->g_68 p_478->g_39 p_478->g_85 p_478->g_105 p_478->g_64 p_478->g_110 p_478->g_117 p_478->g_107 p_478->g_83 p_478->g_115 p_478->g_155 p_478->g_160 p_478->g_151 p_478->g_97 p_478->g_71 p_478->g_299 p_478->g_65 p_478->g_350 p_478->g_164 p_478->g_163 p_478->g_436 p_478->g_470 p_478->g_475 p_478->g_312
 */
uint64_t  func_1(struct S3 * p_478)
{ /* block id: 4 */
    uint8_t *l_6 = &p_478->g_7[0][1][0];
    int32_t *l_10 = (void*)0;
    VECTOR(int32_t, 2) l_11 = (VECTOR(int32_t, 2))((-1L), 0x4DBBE568L);
    VECTOR(uint8_t, 4) l_20 = (VECTOR(uint8_t, 4))(0x13L, (VECTOR(uint8_t, 2))(0x13L, 4UL), 4UL);
    int64_t *l_154 = &p_478->g_155;
    int32_t *l_159[7][6][3] = {{{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]}},{{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]}},{{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]}},{{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]}},{{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]}},{{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]}},{{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]},{&p_478->g_160[1],&p_478->g_160[3],&p_478->g_160[1]}}};
    uint32_t l_162 = 9UL;
    int32_t **l_469[2];
    uint32_t l_474 = 0UL;
    struct S0 *l_477 = &p_478->g_312[4];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_469[i] = &p_478->g_107;
    p_478->g_470[1] = func_2((--(*l_6)), (l_11.y |= 0x3779C63CL), (p_478->l_comm_values[(safe_mod_func_uint32_t_u_u(p_478->tid, 87))] , (func_12(func_15(((((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 16))(l_20.ywxxzwwyxxyzxyxw)).hi))).hi)).xyzwzxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_478->g_21.zxwz)).zxxywxzwwwyyxxxx)).odd))).s3 ^ func_22((safe_mod_func_int64_t_s_s((l_20.z >= func_29(l_20.y, l_6, p_478)), ((*l_154) &= p_478->g_114))), (p_478->g_160[1] = (1UL < (((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(p_478->g_158.s70742507)).s7, l_20.y)) && 0x5BA27C46033E3335L) == 4294967295UL))), l_20.y, p_478->g_97.se, p_478)) & 65535UL), l_162, l_20.y, p_478->g_163[0], p_478), p_478->g_463[1][6], p_478) , &p_478->g_325)), p_478);
    p_478->g_475[3][0][2] = ((safe_div_func_int8_t_s_s((0UL & p_478->g_473), (*p_478->g_105))) , (l_474 , &l_159[0][1][2]));
    (*l_477) = p_478->g_312[1];
    return p_478->g_312[4].f2;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_2(uint8_t  p_3, int32_t  p_4, int32_t * p_5, struct S3 * p_478)
{ /* block id: 168 */
    int32_t *l_465[7] = {&p_478->g_325,(void*)0,&p_478->g_325,&p_478->g_325,(void*)0,&p_478->g_325,&p_478->g_325};
    uint64_t l_466 = 1UL;
    int i;
    ++l_466;
    return l_465[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_12(struct S1  p_13, uint8_t * p_14, struct S3 * p_478)
{ /* block id: 165 */
    int32_t *l_464 = &p_478->g_325;
    l_464 = l_464;
    return p_13.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_478->g_151 p_478->g_117 p_478->g_102 p_478->g_103 p_478->g_164 p_478->g_107 p_478->g_110 p_478->g_94 p_478->g_93 p_478->g_155 p_478->g_68.f0 p_478->g_105 p_478->g_67 p_478->g_71 p_478->g_97 p_478->g_213 p_478->g_216 p_478->g_39 p_478->g_64 p_478->g_65 p_478->l_comm_values p_478->g_236 p_478->g_83 p_478->g_270 p_478->g_277 p_478->g_293 p_478->g_160 p_478->g_158 p_478->g_312 p_478->g_325 p_478->g_299 p_478->g_68 p_478->g_332 p_478->g_351 p_478->g_99 p_478->g_163 p_478->g_435 p_478->g_442 p_478->g_85
 * writes: p_478->g_151 p_478->g_117 p_478->g_97 p_478->g_110 p_478->g_115 p_478->g_39 p_478->g_67 p_478->g_71 p_478->g_299 p_478->g_107 p_478->g_83 p_478->g_68 p_478->g_65 p_478->g_350 p_478->g_105 p_478->g_64 p_478->g_164 p_478->g_163 p_478->g_436
 */
struct S1  func_15(int32_t  p_16, int32_t  p_17, uint32_t  p_18, int32_t * p_19, struct S3 * p_478)
{ /* block id: 48 */
    VECTOR(uint32_t, 2) l_167 = (VECTOR(uint32_t, 2))(4294967291UL, 1UL);
    int32_t l_172 = 0x52EBE5BDL;
    int32_t l_173 = (-1L);
    int32_t l_174 = 0x173F10C4L;
    int32_t l_175 = (-10L);
    int32_t l_176 = 0L;
    int32_t l_178 = 0x28FA583BL;
    int32_t l_179 = 0L;
    int32_t l_180 = 0x052C9F55L;
    uint16_t l_181 = 0xE319L;
    VECTOR(int64_t, 4) l_214 = (VECTOR(int64_t, 4))(0x20A7527264FA5962L, (VECTOR(int64_t, 2))(0x20A7527264FA5962L, 0x7C5627ABC6312C1EL), 0x7C5627ABC6312C1EL);
    VECTOR(int64_t, 16) l_215 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x4EFDB948781A7FB5L), 0x4EFDB948781A7FB5L), 0x4EFDB948781A7FB5L, 0L, 0x4EFDB948781A7FB5L, (VECTOR(int64_t, 2))(0L, 0x4EFDB948781A7FB5L), (VECTOR(int64_t, 2))(0L, 0x4EFDB948781A7FB5L), 0L, 0x4EFDB948781A7FB5L, 0L, 0x4EFDB948781A7FB5L);
    int32_t **l_223 = (void*)0;
    int32_t ***l_222 = &l_223;
    VECTOR(uint64_t, 16) l_227 = (VECTOR(uint64_t, 16))(0xA408D92D2716DB55L, (VECTOR(uint64_t, 4))(0xA408D92D2716DB55L, (VECTOR(uint64_t, 2))(0xA408D92D2716DB55L, 0xA47ABD0C9975902AL), 0xA47ABD0C9975902AL), 0xA47ABD0C9975902AL, 0xA408D92D2716DB55L, 0xA47ABD0C9975902AL, (VECTOR(uint64_t, 2))(0xA408D92D2716DB55L, 0xA47ABD0C9975902AL), (VECTOR(uint64_t, 2))(0xA408D92D2716DB55L, 0xA47ABD0C9975902AL), 0xA408D92D2716DB55L, 0xA47ABD0C9975902AL, 0xA408D92D2716DB55L, 0xA47ABD0C9975902AL);
    int32_t l_234 = 7L;
    VECTOR(uint32_t, 16) l_235 = (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967291UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967291UL, 4294967295UL), 4294967291UL, 4294967295UL, 4294967291UL, 4294967295UL);
    int32_t l_244 = 0x409EA005L;
    VECTOR(int16_t, 8) l_274 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
    int32_t l_305 = 0L;
    int32_t l_307 = 0x32CDC517L;
    int32_t l_308[1][3];
    VECTOR(int8_t, 2) l_315 = (VECTOR(int8_t, 2))(0L, (-3L));
    int32_t *l_322 = &p_478->g_312[4].f4;
    int64_t l_330 = 0x3F5854CD0C41B480L;
    uint8_t *l_342[10];
    struct S1 **l_434 = &p_478->g_85;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_308[i][j] = 0x6DD9470DL;
    }
    for (i = 0; i < 10; i++)
        l_342[i] = (void*)0;
    for (p_478->g_151 = 8; (p_478->g_151 != 53); p_478->g_151 = safe_add_func_uint64_t_u_u(p_478->g_151, 7))
    { /* block id: 51 */
        int32_t l_168[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        VECTOR(int32_t, 16) l_169 = (VECTOR(int32_t, 16))(0x36C12986L, (VECTOR(int32_t, 4))(0x36C12986L, (VECTOR(int32_t, 2))(0x36C12986L, 0x2380DBE1L), 0x2380DBE1L), 0x2380DBE1L, 0x36C12986L, 0x2380DBE1L, (VECTOR(int32_t, 2))(0x36C12986L, 0x2380DBE1L), (VECTOR(int32_t, 2))(0x36C12986L, 0x2380DBE1L), 0x36C12986L, 0x2380DBE1L, 0x36C12986L, 0x2380DBE1L);
        struct S1 l_184 = {0xD15A4175L};
        VECTOR(uint16_t, 16) l_194 = (VECTOR(uint16_t, 16))(0xE6CEL, (VECTOR(uint16_t, 4))(0xE6CEL, (VECTOR(uint16_t, 2))(0xE6CEL, 0xC5BBL), 0xC5BBL), 0xC5BBL, 0xE6CEL, 0xC5BBL, (VECTOR(uint16_t, 2))(0xE6CEL, 0xC5BBL), (VECTOR(uint16_t, 2))(0xE6CEL, 0xC5BBL), 0xE6CEL, 0xC5BBL, 0xE6CEL, 0xC5BBL);
        int32_t **l_209[7][8] = {{&p_478->g_163[0],&p_478->g_107,&p_478->g_163[0],(void*)0,&p_478->g_163[0],&p_478->g_163[0],(void*)0,(void*)0},{&p_478->g_163[0],&p_478->g_107,&p_478->g_163[0],(void*)0,&p_478->g_163[0],&p_478->g_163[0],(void*)0,(void*)0},{&p_478->g_163[0],&p_478->g_107,&p_478->g_163[0],(void*)0,&p_478->g_163[0],&p_478->g_163[0],(void*)0,(void*)0},{&p_478->g_163[0],&p_478->g_107,&p_478->g_163[0],(void*)0,&p_478->g_163[0],&p_478->g_163[0],(void*)0,(void*)0},{&p_478->g_163[0],&p_478->g_107,&p_478->g_163[0],(void*)0,&p_478->g_163[0],&p_478->g_163[0],(void*)0,(void*)0},{&p_478->g_163[0],&p_478->g_107,&p_478->g_163[0],(void*)0,&p_478->g_163[0],&p_478->g_163[0],(void*)0,(void*)0},{&p_478->g_163[0],&p_478->g_107,&p_478->g_163[0],(void*)0,&p_478->g_163[0],&p_478->g_163[0],(void*)0,(void*)0}};
        int16_t l_211 = 4L;
        int i, j;
        if ((((p_478->g_117 &= ((VECTOR(uint32_t, 8))(l_167.xxxxxyyx)).s2) | l_168[5]) , (((*p_478->g_102) && l_168[5]) , ((VECTOR(int32_t, 4))(l_169.sdbcc)).z)))
        { /* block id: 53 */
            int32_t *l_170 = &p_478->g_164;
            int32_t *l_171[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_171[i][j] = &p_478->g_110;
            }
            ++l_181;
            return l_184;
        }
        else
        { /* block id: 56 */
            int64_t *l_187 = (void*)0;
            int64_t *l_188[4];
            int64_t l_191 = 1L;
            int8_t *l_195 = &p_478->g_115;
            uint32_t *l_196 = (void*)0;
            uint32_t *l_197[2][6][5] = {{{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117}},{{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117},{&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117,&p_478->g_117}}};
            int32_t l_198 = 0x3081A098L;
            int32_t ***l_210 = &l_209[4][1];
            int32_t *l_212 = &l_180;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_188[i] = &p_478->g_114;
            (*l_212) |= ((safe_add_func_uint8_t_u_u((((*p_478->g_107) ^= ((p_478->g_97.sb = 3L) , (*p_19))) , ((((FAKE_DIVERGE(p_478->local_2_offset, get_local_id(2), 10) ^ (*p_478->g_102)) , 0x5CF9L) >= ((safe_mod_func_uint64_t_u_u((l_175 >= l_191), ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_194.sa556991d4868cc2c)).sd189)).wxyxwzyzyxxyyxxy)).s76, ((VECTOR(uint16_t, 2))(65535UL, 8UL))))).lo, FAKE_DIVERGE(p_478->global_1_offset, get_global_id(1), 10))) && ((((l_195 == (((((~(((++p_478->g_117) < (((safe_mul_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u(((GROUP_DIVERGE(1, 1) , (((safe_mul_func_int8_t_s_s(1L, ((*l_195) = (((safe_sub_func_uint16_t_u_u((((*l_210) = l_209[4][1]) == (void*)0), p_478->g_94.s7)) != GROUP_DIVERGE(0, 1)) | (*p_19))))) , (*p_19)) , 0x557F31CA42827C69L)) != p_478->g_93.x), 0xA130829EF2F3691EL)) >= 0x6900L) == p_478->g_155), p_478->g_68[7].f0)) > 9UL) ^ l_211)) | GROUP_DIVERGE(2, 1))) > l_174) & GROUP_DIVERGE(1, 1)) < p_18) , &p_478->g_67)) < (*p_478->g_105)) || p_478->g_97.s7) , p_17)))) , p_478->g_97.sc)) & l_168[5])), l_181)) & (*p_19));
        }
    }
    if (((p_478->g_213 , (p_16 >= ((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(l_214.wwwxzyyzyyyyywwx)).hi, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_215.s61b192d8548bbd53)))))).lo))).s2)) == ((VECTOR(uint64_t, 16))(p_478->g_216.s2207424125331335)).s9))
    { /* block id: 65 */
        uint8_t l_224 = 0x99L;
        VECTOR(uint32_t, 2) l_237 = (VECTOR(uint32_t, 2))(0xC588E311L, 0xBCF00CC5L);
        int32_t l_295 = 0x0EE6CEDDL;
        uint16_t l_296 = 0xB824L;
        int32_t l_298 = 0x3415281CL;
        int32_t *l_302 = &l_295;
        int32_t *l_303 = &l_179;
        int32_t *l_304[2][1][4];
        int32_t l_306 = (-7L);
        uint64_t l_309 = 0x5A303509A934FB1EL;
        uint8_t *l_327 = &l_224;
        uint8_t **l_326 = &l_327;
        uint8_t *l_328 = &p_478->g_312[4].f6;
        int64_t *l_329 = (void*)0;
        uint32_t l_331 = 0UL;
        int64_t *l_333 = (void*)0;
        int64_t *l_334 = (void*)0;
        int64_t *l_335 = (void*)0;
        int64_t *l_336 = (void*)0;
        int64_t *l_337 = (void*)0;
        int64_t *l_338 = (void*)0;
        int64_t *l_339[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_304[i][j][k] = &l_172;
            }
        }
        for (p_478->g_39 = 0; (p_478->g_39 >= (-21)); p_478->g_39 = safe_sub_func_uint32_t_u_u(p_478->g_39, 2))
        { /* block id: 68 */
            int32_t **l_220 = &p_478->g_107;
            int32_t ***l_219 = &l_220;
            int32_t ****l_221 = &l_219;
            VECTOR(uint8_t, 2) l_245 = (VECTOR(uint8_t, 2))(1UL, 0x4DL);
            uint32_t *l_252[5][1][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            VECTOR(uint16_t, 4) l_271 = (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xDC42L), 0xDC42L);
            VECTOR(uint64_t, 16) l_278 = (VECTOR(uint64_t, 16))(0x301F7C64EC25BE30L, (VECTOR(uint64_t, 4))(0x301F7C64EC25BE30L, (VECTOR(uint64_t, 2))(0x301F7C64EC25BE30L, 0x85DDB280B6D513D3L), 0x85DDB280B6D513D3L), 0x85DDB280B6D513D3L, 0x301F7C64EC25BE30L, 0x85DDB280B6D513D3L, (VECTOR(uint64_t, 2))(0x301F7C64EC25BE30L, 0x85DDB280B6D513D3L), (VECTOR(uint64_t, 2))(0x301F7C64EC25BE30L, 0x85DDB280B6D513D3L), 0x301F7C64EC25BE30L, 0x85DDB280B6D513D3L, 0x301F7C64EC25BE30L, 0x85DDB280B6D513D3L);
            int8_t *l_285[1][1];
            VECTOR(uint8_t, 2) l_292 = (VECTOR(uint8_t, 2))(251UL, 0x30L);
            uint16_t *l_294 = &l_181;
            uint64_t *l_297[8][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint64_t l_300 = 0x840EA71093532996L;
            int32_t *l_301 = &l_175;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_285[i][j] = &p_478->g_115;
            }
            if ((*p_478->g_64))
                break;
            l_224 &= (((*l_221) = l_219) != l_222);
            (*p_478->g_107) = ((VECTOR(int32_t, 8))((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(l_227.s8f)).hi, (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_478->l_comm_values[(safe_mod_func_uint32_t_u_u(p_478->tid, 87))], (safe_lshift_func_uint16_t_u_u((l_234 && ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967294UL, 0UL)).yxxyyyyxxyyxxyxy)))).lo)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_235.s16452f10)).s0706650604047555)).sa75b, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xADD3FD6EL, 1UL)))).yxyxxxyxxxxyxyxx, (uint32_t)((VECTOR(uint32_t, 16))(0x6306CED1L, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_478->g_236.sf432456a)))), ((VECTOR(uint32_t, 16))(l_237.yxyyyyxxxxyyxxxx)).hi))), (safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(0UL, (safe_add_func_int8_t_s_s(l_244, 0x6CL)))) <= (((VECTOR(uint8_t, 2))(l_245.yx)).even ^ ((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))((safe_sub_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u(((void*)0 != l_252[4][0][6]), l_237.x)) && (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((-10L) || 0x0DL), (*p_478->g_105))), (*p_478->g_102)))) > (*p_19)), p_17)), 0x7C6BL, 65535UL, 0x8FB8L)), ((VECTOR(uint16_t, 4))(0xA834L))))).w, p_478->g_83.s6)) , FAKE_DIVERGE(p_478->group_1_offset, get_group_id(1), 10)))), (-1L))), 0xBBF705CBL, p_17, ((VECTOR(uint32_t, 4))(0x460943D2L)))).s5))).s4469)).zywyxzywxzzyzwyx, (uint32_t)GROUP_DIVERGE(0, 1), (uint32_t)p_478->g_94.s3))).even, (uint32_t)GROUP_DIVERGE(2, 1)))).s46)).yyyx))).lo, ((VECTOR(uint32_t, 2))(1UL))))).lo), 9)))), 0UL)))), 0x5C0F2A8AL, 0x0C22AD4DL, ((VECTOR(int32_t, 2))(0x64061B3AL)), ((VECTOR(int32_t, 2))(0x4B6D5B29L)), 0x3323BC56L)).s0;
            (*l_301) &= ((((l_300 = ((safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u(GROUP_DIVERGE(1, 1))), 0x09D6F41877CA9042L)) , (p_478->g_213.f3 & ((safe_add_func_uint64_t_u_u(((((VECTOR(uint16_t, 4))((safe_rshift_func_int8_t_s_s(((p_478->g_299[0][0][0] = (safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((0xB856L ^ ((((l_298 = ((((p_478->g_117++) == 0x18FD0311L) | ((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(p_478->g_270.s48e5995fa5ff65ff)).s97))))).xxyyyyxx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_271.wxwy)).xywxwzxxxyxxxyxx)))).sa4)).xxxyyxxy))).s1137066661431615, (uint16_t)((safe_mul_func_int16_t_s_s((+((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(l_274.s4672)), (int16_t)((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(p_478->g_277.s47)))).xyyxxyyyyyyyxxyx, ((VECTOR(uint64_t, 2))(l_278.s45)).yyxxxyxyxyxyxxyy, ((VECTOR(uint64_t, 4))((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((***l_219) = p_18), (l_295 = ((((safe_mod_func_int8_t_s_s((p_478->g_115 = ((*p_478->g_105) = (*p_478->g_105))), (p_478->g_83.s3 , ((((*l_294) |= (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((GROUP_DIVERGE(1, 1) < ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_292.xxxyxyxx)).s63)).yxxyyyxxyyxyxxyy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_478->g_293.yzyz)).zywxzzwy)).s2, 0UL, 0x2AL, 0x77L)).zxxxyyzyxxzwzxxz))).se), 255UL)), 14)), p_478->g_68[7].f0))) < p_478->g_83.s5) || l_237.x)))) , (void*)0) == (void*)0) < (*p_19))))) > p_18), p_18)), ((VECTOR(uint64_t, 2))(0x579819D07085DC86L)), 18446744073709551608UL)).ywzwxxyxwxwyzxyy))).sb, p_478->g_277.s0)) || p_18)))), 0x6C4FL, p_478->g_71, 0x64D6L, 0x57B6L)).s3), p_18)) | p_478->g_160[1])))).sc) < l_296)) | p_478->g_158.s0) | l_224) | 18446744073709551615UL)), p_478->g_236.sa)), p_478->g_164))) , 0x50L), p_17)), 0xEBDEL, 7UL, 65533UL)).x || p_478->g_68[7].f0) & p_478->g_94.s0), p_18)) && p_18)))) , (-1L)) < l_224) != p_17);
        }
        --l_309;
        (*p_478->g_64) = (p_478->g_312[4] , (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_315.yxxyxyxyyxyxyyxx)).sb, ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((GROUP_DIVERGE(2, 1) <= ((p_478->g_97.sa = ((VECTOR(int64_t, 16))(0x7E447C7C140659CFL, 0x77164121E32FFEEBL, (l_330 &= (safe_mul_func_int16_t_s_s((((*l_326) = func_51(func_32(l_322, (safe_rshift_func_int16_t_s_u((p_17 || (p_478->g_312[4].f5 & p_478->g_325)), 1)), p_17, &p_478->g_39, p_478->g_93.x, p_478), p_17, p_478->g_97.s5, p_478->g_299[0][0][0], p_18, p_478)) != l_328), p_16))), 0x6660DCC9AE79BE78L, 0x53BB9D2CB6346545L, l_331, p_478->g_332[0][4], ((VECTOR(int64_t, 8))(0x1B3BE7404803E60EL)), 0x4A24EB3629AF9D02L)).sd) && p_478->g_103[0][1])), 14)), p_478->g_332[0][4])) < 65535UL))));
        (*l_302) = (safe_rshift_func_int16_t_s_s(p_478->g_68[7].f0, 13));
    }
    else
    { /* block id: 90 */
        uint8_t *l_343 = &p_478->g_71;
        uint8_t **l_344 = (void*)0;
        uint8_t **l_345 = &l_343;
        int32_t *l_346 = &p_478->g_39;
        int32_t **l_349 = &l_322;
        int32_t l_352 = 0x1CA1DB9EL;
        p_478->g_163[1] = func_32(func_45(l_342[6], func_45(((*l_345) = l_343), (p_478->g_350 = ((*l_349) = &p_478->g_39)), (*p_19), p_478->g_351, l_346, p_478), (*p_19), p_478->g_351, p_19, p_478), (*p_478->g_107), l_352, p_478->g_163[1], l_352, p_478);
        for (l_173 = (-18); (l_173 <= (-6)); l_173++)
        { /* block id: 97 */
            if ((atomic_inc(&p_478->l_atomic_input[68]) == 7))
            { /* block id: 99 */
                VECTOR(uint16_t, 16) l_355 = (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0UL), 0UL), 0UL, 65529UL, 0UL, (VECTOR(uint16_t, 2))(65529UL, 0UL), (VECTOR(uint16_t, 2))(65529UL, 0UL), 65529UL, 0UL, 65529UL, 0UL);
                int64_t l_356 = (-1L);
                int16_t l_357 = (-8L);
                int32_t l_358 = 9L;
                VECTOR(uint32_t, 4) l_359 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL);
                VECTOR(uint32_t, 2) l_360 = (VECTOR(uint32_t, 2))(0x2769F141L, 4294967295UL);
                VECTOR(uint32_t, 16) l_361 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 8UL), 8UL), 8UL, 4294967295UL, 8UL, (VECTOR(uint32_t, 2))(4294967295UL, 8UL), (VECTOR(uint32_t, 2))(4294967295UL, 8UL), 4294967295UL, 8UL, 4294967295UL, 8UL);
                VECTOR(uint32_t, 4) l_362 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xB84DC7CBL), 0xB84DC7CBL);
                uint32_t l_363 = 1UL;
                uint64_t l_364 = 0xA252C6B5AE8FC565L;
                VECTOR(uint32_t, 2) l_365 = (VECTOR(uint32_t, 2))(0x40730A77L, 4294967289UL);
                uint64_t l_366[7][1][2] = {{{0xFEC69BE24FCBCCFBL,0x64C1F111BF9147FAL}},{{0xFEC69BE24FCBCCFBL,0x64C1F111BF9147FAL}},{{0xFEC69BE24FCBCCFBL,0x64C1F111BF9147FAL}},{{0xFEC69BE24FCBCCFBL,0x64C1F111BF9147FAL}},{{0xFEC69BE24FCBCCFBL,0x64C1F111BF9147FAL}},{{0xFEC69BE24FCBCCFBL,0x64C1F111BF9147FAL}},{{0xFEC69BE24FCBCCFBL,0x64C1F111BF9147FAL}}};
                int8_t l_367 = (-1L);
                uint64_t l_368 = 0x48732156418BE28BL;
                VECTOR(uint16_t, 16) l_369 = (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x57C3L), 0x57C3L), 0x57C3L, 65526UL, 0x57C3L, (VECTOR(uint16_t, 2))(65526UL, 0x57C3L), (VECTOR(uint16_t, 2))(65526UL, 0x57C3L), 65526UL, 0x57C3L, 65526UL, 0x57C3L);
                VECTOR(uint16_t, 2) l_370 = (VECTOR(uint16_t, 2))(0x5827L, 0xD21EL);
                VECTOR(uint16_t, 16) l_371 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x0382L), 0x0382L), 0x0382L, 65535UL, 0x0382L, (VECTOR(uint16_t, 2))(65535UL, 0x0382L), (VECTOR(uint16_t, 2))(65535UL, 0x0382L), 65535UL, 0x0382L, 65535UL, 0x0382L);
                VECTOR(int32_t, 2) l_372 = (VECTOR(int32_t, 2))(0x6253F2F4L, 5L);
                VECTOR(int32_t, 4) l_373 = (VECTOR(int32_t, 4))(0x7FC7DEDEL, (VECTOR(int32_t, 2))(0x7FC7DEDEL, 0x341DC97FL), 0x341DC97FL);
                VECTOR(int8_t, 2) l_374 = (VECTOR(int8_t, 2))(0x03L, 7L);
                VECTOR(uint8_t, 4) l_375 = (VECTOR(uint8_t, 4))(0x45L, (VECTOR(uint8_t, 2))(0x45L, 250UL), 250UL);
                VECTOR(uint8_t, 8) l_376 = (VECTOR(uint8_t, 8))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0xACL), 0xACL), 0xACL, 8UL, 0xACL);
                VECTOR(int16_t, 2) l_377 = (VECTOR(int16_t, 2))(1L, 0x681FL);
                uint8_t l_378 = 6UL;
                int32_t l_379 = 0x01D77A84L;
                uint16_t l_380 = 0x4F1DL;
                struct S0 l_381 = {0x7515L,-2L,0x16D57432EABEF236L,0x4EL,0x19C39A55L,1L,0x63L};/* VOLATILE GLOBAL l_381 */
                uint32_t l_382 = 1UL;
                struct S1 l_383[8] = {{0UL},{0xB1299A8CL},{0UL},{0UL},{0xB1299A8CL},{0UL},{0UL},{0xB1299A8CL}};
                uint32_t l_384 = 0UL;
                uint64_t l_385 = 0x10609C211777CCA3L;
                union U2 l_386 = {0x5F977407L};/* VOLATILE GLOBAL l_386 */
                int16_t l_387 = 0L;
                int16_t l_388 = 7L;
                int64_t l_389[10][7][3] = {{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}},{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}},{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}},{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}},{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}},{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}},{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}},{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}},{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}},{{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L},{1L,0L,1L}}};
                uint32_t l_390[9][1] = {{4294967292UL},{4294967292UL},{4294967292UL},{4294967292UL},{4294967292UL},{4294967292UL},{4294967292UL},{4294967292UL},{4294967292UL}};
                uint16_t l_391 = 65529UL;
                uint64_t l_392 = 18446744073709551606UL;
                uint32_t l_393 = 0UL;
                uint8_t l_394[5] = {0x4EL,0x4EL,0x4EL,0x4EL,0x4EL};
                int32_t l_395[6] = {0L,0x27E1C27AL,0L,0L,0x27E1C27AL,0L};
                int i, j, k;
                l_394[4] &= ((VECTOR(int32_t, 4))((((VECTOR(uint32_t, 16))(0x4205D212L, (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_355.s27)))))).odd , l_356), ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0xB9E81A98L, 0x90FF4006L, 0x44D2C272L, 0xB4DAB2D9L)), FAKE_DIVERGE(p_478->global_2_offset, get_global_id(2), 10), (l_358 &= l_357), 8UL, 0x13CC2DECL)).s57, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0xEF1E78B4L, FAKE_DIVERGE(p_478->group_2_offset, get_group_id(2), 10), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_359.zy)), 0UL, 4294967294UL)).zxyyxxwzxywxxyww, ((VECTOR(uint32_t, 16))(l_360.xxyxyyyyxxyyxxxy))))), ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_361.sd5ca4a8e)), ((VECTOR(uint32_t, 2))(6UL, 0xF5A14B74L)), (((VECTOR(uint32_t, 4))(l_362.yyzx)).y , 0x6C547C90L), 4294967295UL, 0x90EE5720L, 0x2AF56BBDL, 0x5D887FD4L, 0xB81DD4E5L)).odd, (uint32_t)l_363, (uint32_t)l_364))).s6406143122630763))).s73ac)), 1UL, 0xB2F0A066L)).s16)).yxyxxxyx, ((VECTOR(uint32_t, 4))(l_365.xyyy)).wyxzyywy))))).s20, ((VECTOR(uint32_t, 2))(0x7B9C661CL, 0xE1B02E67L)), ((VECTOR(uint32_t, 8))((l_366[1][0][0] , (l_368 ^= l_367)), 4294967288UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 2))(0x74BA9E94L, 0UL)), ((VECTOR(uint32_t, 2))(1UL, 4294967295UL))))), 4294967295UL, 0x62C2750CL)), 0x9C2E319DL, 0x42964910L)).s46))), 0x8D26FAC2L, 8UL)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(l_369.s6f29)).wwzxzzyw, ((VECTOR(uint16_t, 2))(0x3933L, 1UL)).xyxxyyxy))).s4044165537312100, ((VECTOR(uint16_t, 16))(l_370.yyyxxxyxyxxyxxyy))))))).s0d)))))), ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(l_371.seec7ac64)).s66, ((VECTOR(uint16_t, 8))(0x3574L, 1UL, 0xB9ABL, 65533UL, ((l_388 ^= ((((VECTOR(uint16_t, 8))(65529UL, ((((((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x69B2C0ABL)).yyyyyyxy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(l_372.yyyxyxxy)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_373.xzxyyzyz)).odd))))))), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(l_374.yx)).yyxyxyyxyxxxyyyx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(l_375.wzxy)).wwwwwwxxxywzxxwy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_376.s62)).yyyyxyxx)).s3204131266244664))))).s2b))).xyxxyyyx)).s7165110610400224))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_377.yx)).yxyy)).odd)).yyxyxxxxxyyyyxxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_378, ((VECTOR(int16_t, 2))(8L)), 0L)).zxxywzzy)), (int16_t)0x3B8AL))), ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 8))((-7L)))))).s2, ((VECTOR(int16_t, 4))(0x7C56L)), (-1L), (-1L), ((VECTOR(int16_t, 8))(0x0DB5L)), 1L))))).hi)))).s05, ((VECTOR(int16_t, 2))(0x3B80L))))), ((VECTOR(int16_t, 2))(0x43ECL)), 0x78BEL, 0x05AAL, 0L, 1L)).s3207245260171260))).sb6, ((VECTOR(uint16_t, 2))(0x2E00L))))), l_379, 0x5FFA6C3EL, l_380, ((VECTOR(int32_t, 4))(1L)), 0L, 0x36FAE6D1L, 0L)).hi))).s4 , l_381) , l_382) , l_383[3]) , l_384), ((VECTOR(uint16_t, 2))(0x4D1BL)), l_385, 0x5354L, 65535UL, 0x1C11L)).s6 , l_386) , l_387)) , l_389[3][2][2]), ((VECTOR(uint16_t, 2))(4UL)), 0x13A6L)).s01))).xyxyyxxx)), ((VECTOR(uint32_t, 8))(1UL))))).s1, 0xE144DA4EL, l_390[7][0], ((VECTOR(uint32_t, 2))(5UL)), l_391, 9UL, ((VECTOR(uint32_t, 4))(0xD0F41F11L)), 4294967287UL)).sb , l_392), l_393, 1L, 0x282C6E5AL)).z;
                if (l_395[5])
                { /* block id: 104 */
                    int32_t l_396 = 0x5209AD96L;
                    l_395[5] ^= l_396;
                }
                else
                { /* block id: 106 */
                    int32_t l_397[2][7] = {{0L,0x1FA6E6CBL,1L,0x1FA6E6CBL,0L,0L,0x1FA6E6CBL},{0L,0x1FA6E6CBL,1L,0x1FA6E6CBL,0L,0L,0x1FA6E6CBL}};
                    int32_t l_399 = 0x5610D1F6L;
                    int32_t *l_398 = &l_399;
                    uint64_t l_400 = 0x676C1A8EC0EEBC12L;
                    int32_t *l_403[9][7] = {{&l_399,(void*)0,(void*)0,(void*)0,&l_399,&l_399,(void*)0},{&l_399,(void*)0,(void*)0,(void*)0,&l_399,&l_399,(void*)0},{&l_399,(void*)0,(void*)0,(void*)0,&l_399,&l_399,(void*)0},{&l_399,(void*)0,(void*)0,(void*)0,&l_399,&l_399,(void*)0},{&l_399,(void*)0,(void*)0,(void*)0,&l_399,&l_399,(void*)0},{&l_399,(void*)0,(void*)0,(void*)0,&l_399,&l_399,(void*)0},{&l_399,(void*)0,(void*)0,(void*)0,&l_399,&l_399,(void*)0},{&l_399,(void*)0,(void*)0,(void*)0,&l_399,&l_399,(void*)0},{&l_399,(void*)0,(void*)0,(void*)0,&l_399,&l_399,(void*)0}};
                    int32_t *l_404 = &l_399;
                    int32_t *l_405[6] = {&l_399,&l_399,&l_399,&l_399,&l_399,&l_399};
                    int i, j;
                    l_379 = l_397[0][0];
                    l_398 = (void*)0;
                    if (l_400)
                    { /* block id: 109 */
                        int64_t l_401 = 4L;
                        l_395[5] &= l_401;
                        l_395[1] = 0x482BFD9EL;
                        l_398 = (void*)0;
                    }
                    else
                    { /* block id: 113 */
                        VECTOR(int32_t, 16) l_402 = (VECTOR(int32_t, 16))(0x0EE3C251L, (VECTOR(int32_t, 4))(0x0EE3C251L, (VECTOR(int32_t, 2))(0x0EE3C251L, 0x3A70878BL), 0x3A70878BL), 0x3A70878BL, 0x0EE3C251L, 0x3A70878BL, (VECTOR(int32_t, 2))(0x0EE3C251L, 0x3A70878BL), (VECTOR(int32_t, 2))(0x0EE3C251L, 0x3A70878BL), 0x0EE3C251L, 0x3A70878BL, 0x0EE3C251L, 0x3A70878BL);
                        int i;
                        l_379 &= ((VECTOR(int32_t, 16))(l_402.sc4dd5e1cd98344d1)).s5;
                    }
                    l_405[3] = (l_404 = l_403[7][4]);
                }
                for (l_359.z = 18; (l_359.z < 10); l_359.z--)
                { /* block id: 121 */
                    uint32_t l_408 = 0x4373EFF8L;
                    uint8_t l_409 = 3UL;
                    VECTOR(int64_t, 8) l_410 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                    int32_t l_411 = 1L;
                    uint32_t **l_412 = (void*)0;
                    int32_t *l_413 = (void*)0;
                    int32_t *l_414 = (void*)0;
                    int32_t *l_415 = (void*)0;
                    int i;
                    l_411 |= ((VECTOR(int32_t, 8))(0L, (l_409 = l_408), (-1L), 0x378A636DL, l_410.s2, (-1L), 0x5C187B98L, 0x4857C6D8L)).s6;
                    l_412 = (void*)0;
                    l_415 = (l_414 = l_413);
                }
                if (((VECTOR(int32_t, 4))(0x4A3BA4B1L, ((VECTOR(int32_t, 2))(0x75802DB8L, 1L)), 0x414BB0CBL)).w)
                { /* block id: 128 */
                    uint16_t l_416 = 2UL;
                    uint64_t l_417[5][8][6] = {{{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL}},{{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL}},{{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL}},{{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL}},{{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL},{0x0EF11A4B0FAD2783L,0x28929B55C349DB5FL,18446744073709551615UL,0xFBD0BE629D7A3927L,18446744073709551615UL,0x28929B55C349DB5FL}}};
                    uint64_t l_418 = 0x284B06478B8BF3E6L;
                    VECTOR(int32_t, 4) l_419 = (VECTOR(int32_t, 4))(0x0C0AC910L, (VECTOR(int32_t, 2))(0x0C0AC910L, 8L), 8L);
                    int8_t l_420 = 0x18L;
                    VECTOR(int32_t, 8) l_421 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 1L), 1L), 1L, 7L, 1L);
                    VECTOR(int32_t, 4) l_422 = (VECTOR(int32_t, 4))(0x72CF9245L, (VECTOR(int32_t, 2))(0x72CF9245L, 0x7BCC8739L), 0x7BCC8739L);
                    VECTOR(int32_t, 2) l_423 = (VECTOR(int32_t, 2))(0x79387DADL, 0x40CA1ED2L);
                    uint32_t l_424 = 0UL;
                    int32_t l_425 = (-4L);
                    uint32_t l_426 = 0xDE6AF320L;
                    VECTOR(int32_t, 2) l_427 = (VECTOR(int32_t, 2))((-10L), (-2L));
                    int32_t *l_428 = (void*)0;
                    int32_t *l_429[9][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j, k;
                    l_358 ^= ((l_374.y = l_416) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))((-8L), 6L, 2L, (((l_418 = l_417[2][2][3]) , (l_420 |= l_419.y)) , 0x03081576L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_421.s1277)).zzxxyyyy)).s23, ((VECTOR(int32_t, 8))(l_422.xyxzxxyw)).s01, ((VECTOR(int32_t, 2))(0x3BE57385L, 0x125C797DL))))).yxxxxyyyyyxyxyxy)).sbe)).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x21EDFF91L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_423.yyxy)))), (l_424 , (l_395[5] &= l_425)), l_426, 0x27633EE5L, 1L, (-2L), 0x376AE8B2L, 0L, (l_395[0] ^= 0x7E14FD5FL), 0x4E9AA004L, (-2L), 0L)))).s08)), 0x267024B4L)).s7064124070234520, ((VECTOR(int32_t, 8))(l_427.yxyyyyxx)).s5345047106643464))).sd254)).z);
                    l_428 = (void*)0;
                    l_429[1][2] = (void*)0;
                }
                else
                { /* block id: 137 */
                    int32_t l_430 = 5L;
                    l_386.f0 |= 0x72A7898CL;
                    for (l_430 = 10; (l_430 == (-18)); l_430 = safe_sub_func_uint16_t_u_u(l_430, 3))
                    { /* block id: 141 */
                        VECTOR(int32_t, 16) l_433 = (VECTOR(int32_t, 16))(0x04AA89A9L, (VECTOR(int32_t, 4))(0x04AA89A9L, (VECTOR(int32_t, 2))(0x04AA89A9L, 0x35442DDAL), 0x35442DDAL), 0x35442DDAL, 0x04AA89A9L, 0x35442DDAL, (VECTOR(int32_t, 2))(0x04AA89A9L, 0x35442DDAL), (VECTOR(int32_t, 2))(0x04AA89A9L, 0x35442DDAL), 0x04AA89A9L, 0x35442DDAL, 0x04AA89A9L, 0x35442DDAL);
                        int i;
                        l_433.s5 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(1L, 7L)).xyyyyyxx, ((VECTOR(int32_t, 2))(l_433.s5d)).xyyyyxyx))).odd)).x;
                    }
                }
                unsigned int result = 0;
                result += l_355.sf;
                result += l_355.se;
                result += l_355.sd;
                result += l_355.sc;
                result += l_355.sb;
                result += l_355.sa;
                result += l_355.s9;
                result += l_355.s8;
                result += l_355.s7;
                result += l_355.s6;
                result += l_355.s5;
                result += l_355.s4;
                result += l_355.s3;
                result += l_355.s2;
                result += l_355.s1;
                result += l_355.s0;
                result += l_356;
                result += l_357;
                result += l_358;
                result += l_359.w;
                result += l_359.z;
                result += l_359.y;
                result += l_359.x;
                result += l_360.y;
                result += l_360.x;
                result += l_361.sf;
                result += l_361.se;
                result += l_361.sd;
                result += l_361.sc;
                result += l_361.sb;
                result += l_361.sa;
                result += l_361.s9;
                result += l_361.s8;
                result += l_361.s7;
                result += l_361.s6;
                result += l_361.s5;
                result += l_361.s4;
                result += l_361.s3;
                result += l_361.s2;
                result += l_361.s1;
                result += l_361.s0;
                result += l_362.w;
                result += l_362.z;
                result += l_362.y;
                result += l_362.x;
                result += l_363;
                result += l_364;
                result += l_365.y;
                result += l_365.x;
                int l_366_i0, l_366_i1, l_366_i2;
                for (l_366_i0 = 0; l_366_i0 < 7; l_366_i0++) {
                    for (l_366_i1 = 0; l_366_i1 < 1; l_366_i1++) {
                        for (l_366_i2 = 0; l_366_i2 < 2; l_366_i2++) {
                            result += l_366[l_366_i0][l_366_i1][l_366_i2];
                        }
                    }
                }
                result += l_367;
                result += l_368;
                result += l_369.sf;
                result += l_369.se;
                result += l_369.sd;
                result += l_369.sc;
                result += l_369.sb;
                result += l_369.sa;
                result += l_369.s9;
                result += l_369.s8;
                result += l_369.s7;
                result += l_369.s6;
                result += l_369.s5;
                result += l_369.s4;
                result += l_369.s3;
                result += l_369.s2;
                result += l_369.s1;
                result += l_369.s0;
                result += l_370.y;
                result += l_370.x;
                result += l_371.sf;
                result += l_371.se;
                result += l_371.sd;
                result += l_371.sc;
                result += l_371.sb;
                result += l_371.sa;
                result += l_371.s9;
                result += l_371.s8;
                result += l_371.s7;
                result += l_371.s6;
                result += l_371.s5;
                result += l_371.s4;
                result += l_371.s3;
                result += l_371.s2;
                result += l_371.s1;
                result += l_371.s0;
                result += l_372.y;
                result += l_372.x;
                result += l_373.w;
                result += l_373.z;
                result += l_373.y;
                result += l_373.x;
                result += l_374.y;
                result += l_374.x;
                result += l_375.w;
                result += l_375.z;
                result += l_375.y;
                result += l_375.x;
                result += l_376.s7;
                result += l_376.s6;
                result += l_376.s5;
                result += l_376.s4;
                result += l_376.s3;
                result += l_376.s2;
                result += l_376.s1;
                result += l_376.s0;
                result += l_377.y;
                result += l_377.x;
                result += l_378;
                result += l_379;
                result += l_380;
                result += l_381.f0;
                result += l_381.f1;
                result += l_381.f2;
                result += l_381.f3;
                result += l_381.f4;
                result += l_381.f5;
                result += l_381.f6;
                result += l_382;
                int l_383_i0;
                for (l_383_i0 = 0; l_383_i0 < 8; l_383_i0++) {
                    result += l_383[l_383_i0].f0;
                }
                result += l_384;
                result += l_385;
                result += l_386.f0;
                result += l_386.f1;
                result += l_387;
                result += l_388;
                int l_389_i0, l_389_i1, l_389_i2;
                for (l_389_i0 = 0; l_389_i0 < 10; l_389_i0++) {
                    for (l_389_i1 = 0; l_389_i1 < 7; l_389_i1++) {
                        for (l_389_i2 = 0; l_389_i2 < 3; l_389_i2++) {
                            result += l_389[l_389_i0][l_389_i1][l_389_i2];
                        }
                    }
                }
                int l_390_i0, l_390_i1;
                for (l_390_i0 = 0; l_390_i0 < 9; l_390_i0++) {
                    for (l_390_i1 = 0; l_390_i1 < 1; l_390_i1++) {
                        result += l_390[l_390_i0][l_390_i1];
                    }
                }
                result += l_391;
                result += l_392;
                result += l_393;
                int l_394_i0;
                for (l_394_i0 = 0; l_394_i0 < 5; l_394_i0++) {
                    result += l_394[l_394_i0];
                }
                int l_395_i0;
                for (l_395_i0 = 0; l_395_i0 < 6; l_395_i0++) {
                    result += l_395[l_395_i0];
                }
                atomic_add(&p_478->l_special_values[68], result);
            }
            else
            { /* block id: 145 */
                (1 + 1);
            }
        }
        (*p_478->g_435) = l_434;
        for (l_181 = 0; (l_181 <= 37); l_181 = safe_add_func_int32_t_s_s(l_181, 7))
        { /* block id: 152 */
            int32_t ****l_441 = &l_222;
            for (l_352 = 19; (l_352 == (-21)); --l_352)
            { /* block id: 155 */
                VECTOR(uint32_t, 2) l_447 = (VECTOR(uint32_t, 2))(0x4D1EC7C1L, 4294967294UL);
                int32_t l_456 = 0x0D475676L;
                int i;
                (*p_19) = (((p_16 , l_441) == (p_18 , p_478->g_442[1])) , (safe_mul_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_447.yy)), 4294967295UL, 0x0838AF62L)).z , (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((GROUP_DIVERGE(2, 1) , l_456), ((*p_478->g_105) = 0x18L))), 15)), (((((VECTOR(uint16_t, 4))(65535UL, (safe_add_func_int32_t_s_s((*p_19), (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((*p_19), (l_352 && p_16))), GROUP_DIVERGE(2, 1))))), 0xC291L, 1UL)).y && 65534UL) <= p_478->g_160[2]) <= 2UL))), l_352))), (-5L))));
                if ((*p_19))
                    break;
            }
            p_19 = p_19;
        }
    }
    p_19 = p_19;
    return (**l_434);
}


/* ------------------------------------------ */
/* 
 * reads : p_478->g_107
 * writes: p_478->g_110
 */
uint8_t  func_22(uint8_t  p_23, int32_t  p_24, uint8_t  p_25, int32_t  p_26, struct S3 * p_478)
{ /* block id: 45 */
    int16_t l_161 = 0x6E4DL;
    (*p_478->g_107) = (0L == FAKE_DIVERGE(p_478->global_1_offset, get_global_id(1), 10));
    return l_161;
}


/* ------------------------------------------ */
/* 
 * reads : p_478->l_comm_values p_478->g_64 p_478->g_39 p_478->g_comm_values p_478->g_68 p_478->g_83 p_478->g_93 p_478->g_94 p_478->g_97 p_478->g_99 p_478->g_102 p_478->g_107 p_478->g_110 p_478->g_117 p_478->g_105 p_478->g_67 p_478->g_71
 * writes: p_478->g_67 p_478->g_68 p_478->g_39 p_478->g_85 p_478->g_105 p_478->g_64 p_478->g_110 p_478->g_117 p_478->g_107 p_478->g_83 p_478->g_115
 */
uint64_t  func_29(int32_t  p_30, uint8_t * p_31, struct S3 * p_478)
{ /* block id: 7 */
    int32_t *l_38 = &p_478->g_39;
    VECTOR(uint8_t, 16) l_42 = (VECTOR(uint8_t, 16))(0x39L, (VECTOR(uint8_t, 4))(0x39L, (VECTOR(uint8_t, 2))(0x39L, 0xC5L), 0xC5L), 0xC5L, 0x39L, 0xC5L, (VECTOR(uint8_t, 2))(0x39L, 0xC5L), (VECTOR(uint8_t, 2))(0x39L, 0xC5L), 0x39L, 0xC5L, 0x39L, 0xC5L);
    struct S1 l_59[9] = {{1UL},{0x54C62B41L},{1UL},{1UL},{0x54C62B41L},{1UL},{1UL},{0x54C62B41L},{1UL}};
    int8_t *l_66 = &p_478->g_67;
    int32_t **l_153 = &p_478->g_107;
    int i;
    (*l_153) = func_32(l_38, ((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(l_42.sa4a104acd6ba8dad)), ((VECTOR(uint8_t, 2))(3UL, 0xF2L)).xxxyyyyyyyxyxyxy, ((VECTOR(uint8_t, 16))(((p_30 >= 0L) && func_43(func_45(func_51(l_38, (((VECTOR(int8_t, 2))(0x00L, 0L)).hi , ((safe_mod_func_uint32_t_u_u((((*l_66) = (255UL | (((((l_59[6] , p_478->l_comm_values[(safe_mod_func_uint32_t_u_u(p_478->tid, 87))]) & p_30) > ((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((p_478->l_comm_values[(safe_mod_func_uint32_t_u_u(p_478->tid, 87))] < p_30) ^ 254UL), 0x48L)) < l_42.s2), FAKE_DIVERGE(p_478->global_1_offset, get_global_id(1), 10))) & p_30)) , p_478->g_64) == (void*)0))) <= p_478->g_39), l_42.s8)) > p_478->l_comm_values[(safe_mod_func_uint32_t_u_u(p_478->tid, 87))])), p_30, l_42.sa, p_478->g_comm_values[p_478->tid], p_478), &p_478->g_39, p_30, l_38, l_38, p_478), p_478)), ((VECTOR(uint8_t, 4))(248UL)), ((VECTOR(uint8_t, 2))(7UL)), p_30, 255UL, p_478->g_99.x, FAKE_DIVERGE(p_478->group_0_offset, get_group_id(0), 10), 1UL, 0xB2L, l_59[6].f0, 0x53L, 0xA8L))))).se, (-1L))) , l_42.se), p_30, l_38, p_478->g_83.s3, p_478);
    return p_478->g_94.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_478->g_110 p_478->g_117 p_478->g_83 p_478->g_105 p_478->g_67 p_478->g_71 p_478->g_99 p_478->g_93 p_478->g_39
 * writes: p_478->g_110 p_478->g_117 p_478->g_107 p_478->g_83 p_478->g_115
 */
int32_t * func_32(int32_t * p_33, int32_t  p_34, uint32_t  p_35, int32_t * p_36, uint32_t  p_37, struct S3 * p_478)
{ /* block id: 22 */
    int32_t *l_109[7][10][3] = {{{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110}},{{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110}},{{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110}},{{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110}},{{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110}},{{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110}},{{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110},{&p_478->g_110,(void*)0,&p_478->g_110}}};
    uint64_t l_120 = 1UL;
    uint8_t l_123 = 0x6CL;
    VECTOR(int64_t, 16) l_138 = (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x56F7C90A92FA6678L), 0x56F7C90A92FA6678L), 0x56F7C90A92FA6678L, 7L, 0x56F7C90A92FA6678L, (VECTOR(int64_t, 2))(7L, 0x56F7C90A92FA6678L), (VECTOR(int64_t, 2))(7L, 0x56F7C90A92FA6678L), 7L, 0x56F7C90A92FA6678L, 7L, 0x56F7C90A92FA6678L);
    int i, j, k;
    l_109[6][7][0] = (void*)0;
    for (p_37 = 0; (p_37 != 44); p_37 = safe_add_func_int64_t_s_s(p_37, 1))
    { /* block id: 26 */
        int32_t l_113 = 0x2172F119L;
        int32_t l_116 = 0x2E307125L;
        p_478->g_110 |= l_113;
        if (p_35)
            continue;
        --p_478->g_117;
    }
    if (l_120)
    { /* block id: 31 */
        int32_t **l_121 = &p_478->g_107;
        int32_t **l_122 = &l_109[4][5][0];
        (*l_122) = ((*l_121) = &p_34);
        atomic_min(&p_478->g_atomic_reduction[get_linear_group_id()], (l_123 != (~(safe_lshift_func_uint16_t_u_u(0xCA50L, 5)))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_478->v_collective += p_478->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    else
    { /* block id: 35 */
        uint16_t *l_126 = (void*)0;
        int32_t l_134[3][9] = {{0L,0L,0x2CFDDCECL,0L,0L,0L,0L,0x2CFDDCECL,0L},{0L,0L,0x2CFDDCECL,0L,0L,0L,0L,0x2CFDDCECL,0L},{0L,0L,0x2CFDDCECL,0L,0L,0L,0L,0x2CFDDCECL,0L}};
        VECTOR(int64_t, 2) l_137 = (VECTOR(int64_t, 2))((-3L), 1L);
        int8_t *l_149 = &p_478->g_115;
        uint16_t *l_150 = &p_478->g_151;
        int32_t l_152 = 0x11781CC2L;
        int i, j;
        l_152 ^= (((p_478->g_83.s1 |= FAKE_DIVERGE(p_478->global_1_offset, get_global_id(1), 10)) | (safe_unary_minus_func_int8_t_s((((safe_mul_func_uint8_t_u_u(1UL, (safe_mod_func_int8_t_s_s(0x53L, (*p_478->g_105))))) , (void*)0) != p_33)))) > (((VECTOR(int8_t, 4))((((l_134[1][5] | ((((safe_mod_func_int64_t_s_s(0x71CAE4519CD97943L, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 8))(l_137.yxyxyxyx)).hi, ((VECTOR(int64_t, 4))(l_138.s658a))))).x)) , (((safe_mul_func_uint16_t_u_u(((p_34 == ((((((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((*l_149) = 0L), l_137.x)), 0xB5L)), p_478->g_117)), 0x30L)) , p_35) ^ p_478->g_99.y) > l_134[2][3]) ^ p_35) , p_34)) || (*p_478->g_105)), p_478->g_93.y)) && l_134[1][5]) , l_150)) == l_126) <= p_35)) , &p_478->g_68[7]) != (void*)0), ((VECTOR(int8_t, 2))(1L)), 0L)).w == p_478->g_39));
    }
    return &p_478->g_110;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_43(int32_t * p_44, struct S3 * p_478)
{ /* block id: 20 */
    int32_t l_108 = 1L;
    return l_108;
}


/* ------------------------------------------ */
/* 
 * reads : p_478->g_39 p_478->g_83 p_478->g_93 p_478->g_94 p_478->g_97 p_478->g_99 p_478->g_102 p_478->g_68 p_478->g_64 p_478->g_107 p_478->g_164
 * writes: p_478->g_39 p_478->g_85 p_478->g_68 p_478->g_105 p_478->g_64 p_478->g_164
 */
int32_t * func_45(uint8_t * p_46, int32_t * p_47, int32_t  p_48, int32_t * p_49, int32_t * p_50, struct S3 * p_478)
{ /* block id: 12 */
    int8_t *l_78 = &p_478->g_67;
    int32_t *l_79 = &p_478->g_39;
    int32_t l_80 = (-1L);
    struct S1 *l_84 = &p_478->g_68[7];
    uint16_t *l_86 = (void*)0;
    uint16_t *l_87 = (void*)0;
    uint16_t *l_88 = (void*)0;
    uint16_t *l_89 = (void*)0;
    uint16_t *l_90[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_91 = (-7L);
    int32_t l_92 = 0L;
    VECTOR(uint8_t, 4) l_95 = (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 4UL), 4UL);
    VECTOR(int64_t, 16) l_96 = (VECTOR(int64_t, 16))(0x585B88FC9099BCB1L, (VECTOR(int64_t, 4))(0x585B88FC9099BCB1L, (VECTOR(int64_t, 2))(0x585B88FC9099BCB1L, 1L), 1L), 1L, 0x585B88FC9099BCB1L, 1L, (VECTOR(int64_t, 2))(0x585B88FC9099BCB1L, 1L), (VECTOR(int64_t, 2))(0x585B88FC9099BCB1L, 1L), 0x585B88FC9099BCB1L, 1L, 0x585B88FC9099BCB1L, 1L);
    VECTOR(int64_t, 8) l_98 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x485E55DFC961BCE7L), 0x485E55DFC961BCE7L), 0x485E55DFC961BCE7L, (-1L), 0x485E55DFC961BCE7L);
    VECTOR(uint64_t, 4) l_104 = (VECTOR(uint64_t, 4))(0xFC9F35A7B369A1ECL, (VECTOR(uint64_t, 2))(0xFC9F35A7B369A1ECL, 0x70EF1A53783AD51AL), 0x70EF1A53783AD51AL);
    volatile int32_t **l_106 = &p_478->g_64;
    int i, j;
    (*p_50) = (*p_50);
    (*l_106) = ((((VECTOR(int8_t, 2))(2L, 0x1CL)).odd & (safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((l_78 == (p_478->g_105 = func_51(l_79, (l_80 & (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(p_478->g_83.s35)).xxxy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))((l_92 = (l_91 ^= (l_84 != (p_478->g_85 = l_84)))), ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(p_478->g_93.xy)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(p_478->g_94.s7300)).lo, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))(0x12L, ((VECTOR(uint8_t, 4))(l_95.yzyx)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(0x0DL, (p_48 && ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 2))(l_96.s3a)).yxyxxyxxxxyyxyxx, ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 4))(p_478->g_97.sfe4d))))).wyxyyxyyyxywzxzy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_98.s16)).xyyyxyxxxyxxyxxy))))).even)), ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(p_478->g_99.xxxyyxxx)), (int64_t)(safe_lshift_func_uint8_t_u_u(5UL, (!(l_88 == p_478->g_102))))))).s76))).xyxyyxyx, ((VECTOR(int64_t, 8))(1L))))).s3), 0UL, 255UL)).odd)), 0x94L)), ((VECTOR(uint8_t, 8))(0x0DL))))).s23, ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 2))(246UL))))), 250UL, 0UL, ((VECTOR(uint8_t, 2))(0xF4L)), 0x1FL, 252UL)).s66))).xxyyxyyx)))).s11))), 0UL)).yxwzywzwwyzwzwyz)).sa8e5, ((VECTOR(uint16_t, 4))(65531UL))))).z, 8))), l_104.x, p_48, l_80, p_478))), p_478->g_94.s2)) < p_48) && p_478->g_99.y), 0L)), FAKE_DIVERGE(p_478->local_2_offset, get_local_id(2), 10)))) , p_478->g_64);
    return p_478->g_107;
}


/* ------------------------------------------ */
/* 
 * reads : p_478->g_68
 * writes: p_478->g_68
 */
uint8_t * func_51(int32_t * p_52, uint64_t  p_53, uint64_t  p_54, uint16_t  p_55, uint8_t  p_56, struct S3 * p_478)
{ /* block id: 9 */
    struct S1 *l_69 = &p_478->g_68[3];
    uint8_t *l_70[3];
    int i;
    for (i = 0; i < 3; i++)
        l_70[i] = &p_478->g_71;
    (*l_69) = p_478->g_68[7];
    return l_70[0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[74];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 74; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[74];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 74; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_comm_values[i] = 1;
    struct S3 c_479;
    struct S3* p_478 = &c_479;
    struct S3 c_480 = {
        {{{0x6EL,0xA8L,0x6EL,0x6EL},{0x6EL,0xA8L,0x6EL,0x6EL}},{{0x6EL,0xA8L,0x6EL,0x6EL},{0x6EL,0xA8L,0x6EL,0x6EL}},{{0x6EL,0xA8L,0x6EL,0x6EL},{0x6EL,0xA8L,0x6EL,0x6EL}}}, // p_478->g_7
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 8UL), 8UL), // p_478->g_21
        0x6F63EEDAL, // p_478->g_39
        9L, // p_478->g_65
        &p_478->g_65, // p_478->g_64
        0x1FL, // p_478->g_67
        {{0x15F1D345L},{0x15F1D345L},{0x15F1D345L},{0x15F1D345L},{0x15F1D345L},{0x15F1D345L},{0x15F1D345L},{0x15F1D345L}}, // p_478->g_68
        0UL, // p_478->g_71
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xA668L), 0xA668L), 0xA668L, 0UL, 0xA668L), // p_478->g_83
        &p_478->g_68[7], // p_478->g_85
        (VECTOR(uint8_t, 2))(8UL, 0x23L), // p_478->g_93
        (VECTOR(uint8_t, 8))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 1UL), 1UL), 1UL, 249UL, 1UL), // p_478->g_94
        (VECTOR(int64_t, 16))((-8L), (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L), (VECTOR(int64_t, 2))((-8L), (-1L)), (VECTOR(int64_t, 2))((-8L), (-1L)), (-8L), (-1L), (-8L), (-1L)), // p_478->g_97
        (VECTOR(int64_t, 2))(0L, 0x2E8431F48307115AL), // p_478->g_99
        {{0xD953L,0x3246L,0xBF4BL,0x3246L,0xD953L,0xD953L,0x3246L,0xBF4BL,0x3246L,0xD953L},{0xD953L,0x3246L,0xBF4BL,0x3246L,0xD953L,0xD953L,0x3246L,0xBF4BL,0x3246L,0xD953L},{0xD953L,0x3246L,0xBF4BL,0x3246L,0xD953L,0xD953L,0x3246L,0xBF4BL,0x3246L,0xD953L},{0xD953L,0x3246L,0xBF4BL,0x3246L,0xD953L,0xD953L,0x3246L,0xBF4BL,0x3246L,0xD953L}}, // p_478->g_103
        &p_478->g_103[2][5], // p_478->g_102
        &p_478->g_67, // p_478->g_105
        (void*)0, // p_478->g_107
        0x350B5FE4L, // p_478->g_110
        0x60EBF8190269B8F4L, // p_478->g_114
        0L, // p_478->g_115
        0x9D581DC2L, // p_478->g_117
        0UL, // p_478->g_151
        (-10L), // p_478->g_155
        (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0L), 0L), 0L, 7L, 0L), // p_478->g_158
        {(-1L),(-1L),(-1L),(-1L)}, // p_478->g_160
        0x4CB4D10AL, // p_478->g_164
        {&p_478->g_164,&p_478->g_164}, // p_478->g_163
        0L, // p_478->g_177
        {-9L,0x4DF7L,0xA71A296F131FA9AAL,0x7FL,0x32D4BDB7L,0x03L,1UL}, // p_478->g_213
        (VECTOR(uint64_t, 8))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0xE8798E1627D10670L), 0xE8798E1627D10670L), 0xE8798E1627D10670L, 7UL, 0xE8798E1627D10670L), // p_478->g_216
        (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 1UL), 1UL), 1UL, 5UL, 1UL, (VECTOR(uint32_t, 2))(5UL, 1UL), (VECTOR(uint32_t, 2))(5UL, 1UL), 5UL, 1UL, 5UL, 1UL), // p_478->g_236
        (VECTOR(uint16_t, 16))(0x95FAL, (VECTOR(uint16_t, 4))(0x95FAL, (VECTOR(uint16_t, 2))(0x95FAL, 65535UL), 65535UL), 65535UL, 0x95FAL, 65535UL, (VECTOR(uint16_t, 2))(0x95FAL, 65535UL), (VECTOR(uint16_t, 2))(0x95FAL, 65535UL), 0x95FAL, 65535UL, 0x95FAL, 65535UL), // p_478->g_270
        (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 18446744073709551608UL, 18446744073709551608UL), // p_478->g_277
        (VECTOR(uint8_t, 4))(0x8DL, (VECTOR(uint8_t, 2))(0x8DL, 0x28L), 0x28L), // p_478->g_293
        {{{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L}},{{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L}},{{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L}},{{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L}},{{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L}},{{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L}},{{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L},{0x24L,0x42L}}}, // p_478->g_299
        {{0x114CL,1L,1UL,0x29L,-1L,0x5EL,0UL},{0L,3L,0x449D8796C1EA7CBDL,0UL,0L,0x07L,0x0BL},{0x114CL,1L,1UL,0x29L,-1L,0x5EL,0UL},{0x114CL,1L,1UL,0x29L,-1L,0x5EL,0UL},{0L,3L,0x449D8796C1EA7CBDL,0UL,0L,0x07L,0x0BL},{0x114CL,1L,1UL,0x29L,-1L,0x5EL,0UL}}, // p_478->g_312
        0x0CD4982FL, // p_478->g_325
        {{0x05L,0x05L,0x05L,0x05L,0x05L}}, // p_478->g_332
        &p_478->g_39, // p_478->g_350
        &p_478->g_312[4].f4, // p_478->g_351
        &p_478->g_85, // p_478->g_436
        &p_478->g_436, // p_478->g_435
        (void*)0, // p_478->g_444
        &p_478->g_444, // p_478->g_443
        {&p_478->g_443,&p_478->g_443}, // p_478->g_442
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_478->g_463
        {&p_478->g_110,&p_478->g_110,&p_478->g_110,&p_478->g_110,&p_478->g_110,&p_478->g_110}, // p_478->g_470
        0x6BL, // p_478->g_473
        {&p_478->g_160[1],&p_478->g_160[1],&p_478->g_160[1],&p_478->g_160[1]}, // p_478->g_476
        {{{&p_478->g_476[0],&p_478->g_476[3],&p_478->g_476[2],&p_478->g_476[1],&p_478->g_476[2],&p_478->g_476[3],&p_478->g_476[0],&p_478->g_476[0],(void*)0,(void*)0}},{{&p_478->g_476[0],&p_478->g_476[3],&p_478->g_476[2],&p_478->g_476[1],&p_478->g_476[2],&p_478->g_476[3],&p_478->g_476[0],&p_478->g_476[0],(void*)0,(void*)0}},{{&p_478->g_476[0],&p_478->g_476[3],&p_478->g_476[2],&p_478->g_476[1],&p_478->g_476[2],&p_478->g_476[3],&p_478->g_476[0],&p_478->g_476[0],(void*)0,(void*)0}},{{&p_478->g_476[0],&p_478->g_476[3],&p_478->g_476[2],&p_478->g_476[1],&p_478->g_476[2],&p_478->g_476[3],&p_478->g_476[0],&p_478->g_476[0],(void*)0,(void*)0}},{{&p_478->g_476[0],&p_478->g_476[3],&p_478->g_476[2],&p_478->g_476[1],&p_478->g_476[2],&p_478->g_476[3],&p_478->g_476[0],&p_478->g_476[0],(void*)0,(void*)0}}}, // p_478->g_475
        0, // p_478->v_collective
        sequence_input[get_global_id(0)], // p_478->global_0_offset
        sequence_input[get_global_id(1)], // p_478->global_1_offset
        sequence_input[get_global_id(2)], // p_478->global_2_offset
        sequence_input[get_local_id(0)], // p_478->local_0_offset
        sequence_input[get_local_id(1)], // p_478->local_1_offset
        sequence_input[get_local_id(2)], // p_478->local_2_offset
        sequence_input[get_group_id(0)], // p_478->group_0_offset
        sequence_input[get_group_id(1)], // p_478->group_1_offset
        sequence_input[get_group_id(2)], // p_478->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 87)), permutations[0][get_linear_local_id()])), // p_478->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_479 = c_480;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_478);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_478->g_7[i][j][k], "p_478->g_7[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_478->g_21.x, "p_478->g_21.x", print_hash_value);
    transparent_crc(p_478->g_21.y, "p_478->g_21.y", print_hash_value);
    transparent_crc(p_478->g_21.z, "p_478->g_21.z", print_hash_value);
    transparent_crc(p_478->g_21.w, "p_478->g_21.w", print_hash_value);
    transparent_crc(p_478->g_39, "p_478->g_39", print_hash_value);
    transparent_crc(p_478->g_65, "p_478->g_65", print_hash_value);
    transparent_crc(p_478->g_67, "p_478->g_67", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_478->g_68[i].f0, "p_478->g_68[i].f0", print_hash_value);

    }
    transparent_crc(p_478->g_71, "p_478->g_71", print_hash_value);
    transparent_crc(p_478->g_83.s0, "p_478->g_83.s0", print_hash_value);
    transparent_crc(p_478->g_83.s1, "p_478->g_83.s1", print_hash_value);
    transparent_crc(p_478->g_83.s2, "p_478->g_83.s2", print_hash_value);
    transparent_crc(p_478->g_83.s3, "p_478->g_83.s3", print_hash_value);
    transparent_crc(p_478->g_83.s4, "p_478->g_83.s4", print_hash_value);
    transparent_crc(p_478->g_83.s5, "p_478->g_83.s5", print_hash_value);
    transparent_crc(p_478->g_83.s6, "p_478->g_83.s6", print_hash_value);
    transparent_crc(p_478->g_83.s7, "p_478->g_83.s7", print_hash_value);
    transparent_crc(p_478->g_93.x, "p_478->g_93.x", print_hash_value);
    transparent_crc(p_478->g_93.y, "p_478->g_93.y", print_hash_value);
    transparent_crc(p_478->g_94.s0, "p_478->g_94.s0", print_hash_value);
    transparent_crc(p_478->g_94.s1, "p_478->g_94.s1", print_hash_value);
    transparent_crc(p_478->g_94.s2, "p_478->g_94.s2", print_hash_value);
    transparent_crc(p_478->g_94.s3, "p_478->g_94.s3", print_hash_value);
    transparent_crc(p_478->g_94.s4, "p_478->g_94.s4", print_hash_value);
    transparent_crc(p_478->g_94.s5, "p_478->g_94.s5", print_hash_value);
    transparent_crc(p_478->g_94.s6, "p_478->g_94.s6", print_hash_value);
    transparent_crc(p_478->g_94.s7, "p_478->g_94.s7", print_hash_value);
    transparent_crc(p_478->g_97.s0, "p_478->g_97.s0", print_hash_value);
    transparent_crc(p_478->g_97.s1, "p_478->g_97.s1", print_hash_value);
    transparent_crc(p_478->g_97.s2, "p_478->g_97.s2", print_hash_value);
    transparent_crc(p_478->g_97.s3, "p_478->g_97.s3", print_hash_value);
    transparent_crc(p_478->g_97.s4, "p_478->g_97.s4", print_hash_value);
    transparent_crc(p_478->g_97.s5, "p_478->g_97.s5", print_hash_value);
    transparent_crc(p_478->g_97.s6, "p_478->g_97.s6", print_hash_value);
    transparent_crc(p_478->g_97.s7, "p_478->g_97.s7", print_hash_value);
    transparent_crc(p_478->g_97.s8, "p_478->g_97.s8", print_hash_value);
    transparent_crc(p_478->g_97.s9, "p_478->g_97.s9", print_hash_value);
    transparent_crc(p_478->g_97.sa, "p_478->g_97.sa", print_hash_value);
    transparent_crc(p_478->g_97.sb, "p_478->g_97.sb", print_hash_value);
    transparent_crc(p_478->g_97.sc, "p_478->g_97.sc", print_hash_value);
    transparent_crc(p_478->g_97.sd, "p_478->g_97.sd", print_hash_value);
    transparent_crc(p_478->g_97.se, "p_478->g_97.se", print_hash_value);
    transparent_crc(p_478->g_97.sf, "p_478->g_97.sf", print_hash_value);
    transparent_crc(p_478->g_99.x, "p_478->g_99.x", print_hash_value);
    transparent_crc(p_478->g_99.y, "p_478->g_99.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_478->g_103[i][j], "p_478->g_103[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_478->g_110, "p_478->g_110", print_hash_value);
    transparent_crc(p_478->g_114, "p_478->g_114", print_hash_value);
    transparent_crc(p_478->g_115, "p_478->g_115", print_hash_value);
    transparent_crc(p_478->g_117, "p_478->g_117", print_hash_value);
    transparent_crc(p_478->g_151, "p_478->g_151", print_hash_value);
    transparent_crc(p_478->g_155, "p_478->g_155", print_hash_value);
    transparent_crc(p_478->g_158.s0, "p_478->g_158.s0", print_hash_value);
    transparent_crc(p_478->g_158.s1, "p_478->g_158.s1", print_hash_value);
    transparent_crc(p_478->g_158.s2, "p_478->g_158.s2", print_hash_value);
    transparent_crc(p_478->g_158.s3, "p_478->g_158.s3", print_hash_value);
    transparent_crc(p_478->g_158.s4, "p_478->g_158.s4", print_hash_value);
    transparent_crc(p_478->g_158.s5, "p_478->g_158.s5", print_hash_value);
    transparent_crc(p_478->g_158.s6, "p_478->g_158.s6", print_hash_value);
    transparent_crc(p_478->g_158.s7, "p_478->g_158.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_478->g_160[i], "p_478->g_160[i]", print_hash_value);

    }
    transparent_crc(p_478->g_164, "p_478->g_164", print_hash_value);
    transparent_crc(p_478->g_177, "p_478->g_177", print_hash_value);
    transparent_crc(p_478->g_213.f0, "p_478->g_213.f0", print_hash_value);
    transparent_crc(p_478->g_213.f1, "p_478->g_213.f1", print_hash_value);
    transparent_crc(p_478->g_213.f2, "p_478->g_213.f2", print_hash_value);
    transparent_crc(p_478->g_213.f3, "p_478->g_213.f3", print_hash_value);
    transparent_crc(p_478->g_213.f4, "p_478->g_213.f4", print_hash_value);
    transparent_crc(p_478->g_213.f5, "p_478->g_213.f5", print_hash_value);
    transparent_crc(p_478->g_213.f6, "p_478->g_213.f6", print_hash_value);
    transparent_crc(p_478->g_216.s0, "p_478->g_216.s0", print_hash_value);
    transparent_crc(p_478->g_216.s1, "p_478->g_216.s1", print_hash_value);
    transparent_crc(p_478->g_216.s2, "p_478->g_216.s2", print_hash_value);
    transparent_crc(p_478->g_216.s3, "p_478->g_216.s3", print_hash_value);
    transparent_crc(p_478->g_216.s4, "p_478->g_216.s4", print_hash_value);
    transparent_crc(p_478->g_216.s5, "p_478->g_216.s5", print_hash_value);
    transparent_crc(p_478->g_216.s6, "p_478->g_216.s6", print_hash_value);
    transparent_crc(p_478->g_216.s7, "p_478->g_216.s7", print_hash_value);
    transparent_crc(p_478->g_236.s0, "p_478->g_236.s0", print_hash_value);
    transparent_crc(p_478->g_236.s1, "p_478->g_236.s1", print_hash_value);
    transparent_crc(p_478->g_236.s2, "p_478->g_236.s2", print_hash_value);
    transparent_crc(p_478->g_236.s3, "p_478->g_236.s3", print_hash_value);
    transparent_crc(p_478->g_236.s4, "p_478->g_236.s4", print_hash_value);
    transparent_crc(p_478->g_236.s5, "p_478->g_236.s5", print_hash_value);
    transparent_crc(p_478->g_236.s6, "p_478->g_236.s6", print_hash_value);
    transparent_crc(p_478->g_236.s7, "p_478->g_236.s7", print_hash_value);
    transparent_crc(p_478->g_236.s8, "p_478->g_236.s8", print_hash_value);
    transparent_crc(p_478->g_236.s9, "p_478->g_236.s9", print_hash_value);
    transparent_crc(p_478->g_236.sa, "p_478->g_236.sa", print_hash_value);
    transparent_crc(p_478->g_236.sb, "p_478->g_236.sb", print_hash_value);
    transparent_crc(p_478->g_236.sc, "p_478->g_236.sc", print_hash_value);
    transparent_crc(p_478->g_236.sd, "p_478->g_236.sd", print_hash_value);
    transparent_crc(p_478->g_236.se, "p_478->g_236.se", print_hash_value);
    transparent_crc(p_478->g_236.sf, "p_478->g_236.sf", print_hash_value);
    transparent_crc(p_478->g_270.s0, "p_478->g_270.s0", print_hash_value);
    transparent_crc(p_478->g_270.s1, "p_478->g_270.s1", print_hash_value);
    transparent_crc(p_478->g_270.s2, "p_478->g_270.s2", print_hash_value);
    transparent_crc(p_478->g_270.s3, "p_478->g_270.s3", print_hash_value);
    transparent_crc(p_478->g_270.s4, "p_478->g_270.s4", print_hash_value);
    transparent_crc(p_478->g_270.s5, "p_478->g_270.s5", print_hash_value);
    transparent_crc(p_478->g_270.s6, "p_478->g_270.s6", print_hash_value);
    transparent_crc(p_478->g_270.s7, "p_478->g_270.s7", print_hash_value);
    transparent_crc(p_478->g_270.s8, "p_478->g_270.s8", print_hash_value);
    transparent_crc(p_478->g_270.s9, "p_478->g_270.s9", print_hash_value);
    transparent_crc(p_478->g_270.sa, "p_478->g_270.sa", print_hash_value);
    transparent_crc(p_478->g_270.sb, "p_478->g_270.sb", print_hash_value);
    transparent_crc(p_478->g_270.sc, "p_478->g_270.sc", print_hash_value);
    transparent_crc(p_478->g_270.sd, "p_478->g_270.sd", print_hash_value);
    transparent_crc(p_478->g_270.se, "p_478->g_270.se", print_hash_value);
    transparent_crc(p_478->g_270.sf, "p_478->g_270.sf", print_hash_value);
    transparent_crc(p_478->g_277.s0, "p_478->g_277.s0", print_hash_value);
    transparent_crc(p_478->g_277.s1, "p_478->g_277.s1", print_hash_value);
    transparent_crc(p_478->g_277.s2, "p_478->g_277.s2", print_hash_value);
    transparent_crc(p_478->g_277.s3, "p_478->g_277.s3", print_hash_value);
    transparent_crc(p_478->g_277.s4, "p_478->g_277.s4", print_hash_value);
    transparent_crc(p_478->g_277.s5, "p_478->g_277.s5", print_hash_value);
    transparent_crc(p_478->g_277.s6, "p_478->g_277.s6", print_hash_value);
    transparent_crc(p_478->g_277.s7, "p_478->g_277.s7", print_hash_value);
    transparent_crc(p_478->g_293.x, "p_478->g_293.x", print_hash_value);
    transparent_crc(p_478->g_293.y, "p_478->g_293.y", print_hash_value);
    transparent_crc(p_478->g_293.z, "p_478->g_293.z", print_hash_value);
    transparent_crc(p_478->g_293.w, "p_478->g_293.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_478->g_299[i][j][k], "p_478->g_299[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_478->g_312[i].f0, "p_478->g_312[i].f0", print_hash_value);
        transparent_crc(p_478->g_312[i].f1, "p_478->g_312[i].f1", print_hash_value);
        transparent_crc(p_478->g_312[i].f2, "p_478->g_312[i].f2", print_hash_value);
        transparent_crc(p_478->g_312[i].f3, "p_478->g_312[i].f3", print_hash_value);
        transparent_crc(p_478->g_312[i].f4, "p_478->g_312[i].f4", print_hash_value);
        transparent_crc(p_478->g_312[i].f5, "p_478->g_312[i].f5", print_hash_value);
        transparent_crc(p_478->g_312[i].f6, "p_478->g_312[i].f6", print_hash_value);

    }
    transparent_crc(p_478->g_325, "p_478->g_325", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_478->g_332[i][j], "p_478->g_332[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_478->g_473, "p_478->g_473", print_hash_value);
    transparent_crc(p_478->v_collective, "p_478->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 74; i++)
            transparent_crc(p_478->l_special_values[i], "p_478->l_special_values[i]", print_hash_value);
    transparent_crc(p_478->l_comm_values[get_linear_local_id()], "p_478->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_478->g_comm_values[get_linear_group_id() * 87 + get_linear_local_id()], "p_478->g_comm_values[get_linear_group_id() * 87 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
