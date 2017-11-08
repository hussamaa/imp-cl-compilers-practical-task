// --atomics 53 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 18,20,1 -l 2,10,1
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

__constant uint32_t permutations[10][20] = {
{7,15,16,4,13,10,9,3,8,2,14,11,0,1,5,6,19,17,18,12}, // permutation 0
{5,12,19,15,1,14,10,3,4,6,0,8,9,11,17,13,7,2,16,18}, // permutation 1
{16,18,1,2,8,10,4,9,5,13,19,15,14,3,12,0,17,6,11,7}, // permutation 2
{14,6,2,4,10,5,7,3,17,1,16,0,15,19,12,8,11,18,9,13}, // permutation 3
{9,0,17,7,5,3,13,19,8,6,18,1,4,15,14,10,2,16,12,11}, // permutation 4
{17,7,1,6,8,0,16,4,18,12,19,10,2,13,5,3,11,15,14,9}, // permutation 5
{10,12,14,7,1,18,19,15,4,8,9,13,17,3,6,0,2,5,16,11}, // permutation 6
{3,4,16,14,9,0,10,6,18,12,13,2,17,15,1,7,8,19,11,5}, // permutation 7
{18,13,2,10,17,6,11,7,3,19,16,8,4,9,15,14,1,0,5,12}, // permutation 8
{14,0,10,12,17,5,3,2,8,4,15,6,7,18,16,11,19,1,9,13} // permutation 9
};

// Seed: 2287273518

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   volatile int32_t  f1;
   int32_t  f2;
   volatile int64_t  f3;
   volatile int64_t  f4;
   uint8_t  f5;
   int8_t  f6;
   volatile uint32_t  f7;
   int32_t  f8;
   int32_t  f9;
};

struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3[7][7][5];
    volatile int32_t g_4;
    int32_t g_5;
    int32_t g_9;
    int32_t *g_37;
    uint16_t g_61;
    struct S0 g_78[7];
    VECTOR(int32_t, 2) g_97;
    uint16_t g_120[4][4][1];
    int32_t g_121;
    uint32_t g_125;
    uint16_t g_127;
    uint16_t *g_126;
    int32_t *g_134[8];
    volatile int32_t g_143[2][3];
    volatile int32_t *g_142;
    volatile int32_t **g_141;
    int8_t g_168;
    int32_t g_171;
    VECTOR(int8_t, 8) g_187;
    int16_t g_194[4][6];
    struct S0 g_197[6][10][4];
    VECTOR(int32_t, 8) g_211;
    VECTOR(uint64_t, 2) g_240;
    VECTOR(uint8_t, 16) g_243;
    struct S0 g_245;
    struct S0 *g_244;
    struct S0 g_248;
    struct S0 g_249;
    struct S0 g_250;
    struct S0 g_251;
    struct S0 g_252;
    struct S0 g_253;
    struct S0 g_254;
    struct S0 g_255;
    struct S0 g_256;
    struct S0 g_257;
    struct S0 g_258;
    struct S0 g_259;
    struct S0 g_260;
    struct S0 g_261;
    struct S0 g_262;
    struct S0 g_263;
    struct S0 *g_247[4][8];
    int64_t *g_267;
    int64_t g_269[7];
    VECTOR(int32_t, 16) g_286;
    uint32_t g_300;
    int64_t *g_402;
    VECTOR(uint8_t, 2) g_434;
    struct S0 g_455;
    VECTOR(int32_t, 8) g_466;
    volatile struct S0 g_467[1][6];
    volatile VECTOR(int32_t, 4) g_483;
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
int32_t  func_1(struct S1 * p_485);
int32_t  func_32(int32_t * p_33, uint64_t  p_34, int32_t * p_35, struct S1 * p_485);
int32_t  func_62(int32_t ** p_63, uint16_t * p_64, int32_t * p_65, uint32_t  p_66, int32_t ** p_67, struct S1 * p_485);
int32_t * func_68(uint16_t * p_69, uint16_t * p_70, uint8_t  p_71, struct S1 * p_485);
uint16_t * func_72(uint16_t * p_73, uint32_t  p_74, uint32_t  p_75, int32_t  p_76, uint32_t  p_77, struct S1 * p_485);
uint16_t * func_80(int64_t  p_81, int32_t * p_82, uint32_t  p_83, int32_t * p_84, struct S1 * p_485);
uint32_t  func_91(int32_t  p_92, uint64_t  p_93, uint32_t  p_94, struct S1 * p_485);
uint32_t  func_105(int32_t  p_106, struct S1 * p_485);
int32_t ** func_109(uint16_t * p_110, struct S1 * p_485);
uint16_t * func_111(int64_t  p_112, uint32_t  p_113, uint16_t * p_114, uint16_t * p_115, struct S1 * p_485);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_485->g_5 p_485->g_comm_values p_485->l_comm_values p_485->g_78 p_485->g_2 p_485->g_261.f5 p_485->g_171 p_485->g_142 p_485->g_143 p_485->g_141 p_485->g_254.f7 p_485->g_263.f9 p_485->g_257.f5 p_485->g_259.f9 p_485->g_455 p_485->g_244 p_485->g_251.f9 p_485->g_245 p_485->g_126 p_485->g_120 p_485->g_127 p_485->g_9 p_485->g_256.f0 p_485->g_483
 * writes: p_485->g_5 p_485->g_37 p_485->g_61 p_485->g_171 p_485->g_249.f0 p_485->g_143 p_485->g_263.f0 p_485->g_251.f6 p_485->g_263.f9 p_485->g_251.f0 p_485->g_253.f2 p_485->g_300 p_485->g_262.f9 p_485->g_402 p_485->g_259.f9 p_485->g_245 p_485->g_127 p_485->g_257.f2 p_485->g_9
 */
int32_t  func_1(struct S1 * p_485)
{ /* block id: 4 */
    int64_t l_16 = 0x674BB9CEC02DFCE9L;
    int32_t l_17 = (-1L);
    int32_t l_18 = 0x3ECFB861L;
    int32_t l_19 = 0x3A4B1F05L;
    int32_t l_21 = 1L;
    int32_t l_22 = 0x55EA0D0AL;
    int32_t l_23 = 0x3667D157L;
    int32_t l_24 = 1L;
    int32_t l_25 = 1L;
    int32_t l_26 = 0x12BF48DFL;
    uint16_t l_27 = 0x9F09L;
    int32_t *l_482 = &p_485->g_245.f8;
    int8_t l_484 = 0L;
    for (p_485->g_5 = (-12); (p_485->g_5 != (-17)); p_485->g_5 = safe_sub_func_uint64_t_u_u(p_485->g_5, 1))
    { /* block id: 7 */
        int32_t *l_8 = &p_485->g_9;
        int32_t *l_10 = &p_485->g_9;
        int32_t *l_11 = &p_485->g_9;
        int32_t *l_12 = &p_485->g_9;
        int32_t *l_13 = &p_485->g_9;
        int32_t *l_14 = (void*)0;
        int32_t *l_15[8][4][3] = {{{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9}},{{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9}},{{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9}},{{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9}},{{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9}},{{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9}},{{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9}},{{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9},{&p_485->g_9,&p_485->g_9,&p_485->g_9}}};
        VECTOR(int32_t, 8) l_20 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0404D083L), 0x0404D083L), 0x0404D083L, (-1L), 0x0404D083L);
        int i, j, k;
        --l_27;
        for (l_21 = 0; (l_21 >= (-24)); --l_21)
        { /* block id: 11 */
            int32_t **l_36[3];
            int i;
            for (i = 0; i < 3; i++)
                l_36[i] = &l_15[2][2][2];
            (*l_10) = func_32((p_485->g_37 = (void*)0), l_27, &p_485->g_9, p_485);
        }
    }
    (*p_485->g_142) = (((*l_482) = p_485->g_256.f0) , ((VECTOR(int32_t, 2))(p_485->g_483.yw)).even);
    return l_484;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_5 p_485->g_comm_values p_485->g_3 p_485->l_comm_values p_485->g_78 p_485->g_2 p_485->g_97 p_485->g_121 p_485->g_9 p_485->g_126 p_485->g_37 p_485->g_141 p_485->g_134 p_485->g_240 p_485->g_243 p_485->g_244 p_485->g_247 p_485->g_127 p_485->g_267 p_485->g_258.f6 p_485->g_256.f8 p_485->g_245.f8 p_485->g_286 p_485->g_262.f9 p_485->g_300 p_485->g_263.f8 p_485->g_251.f9 p_485->g_262.f5 p_485->g_256.f9 p_485->g_250.f5 p_485->g_261.f9 p_485->g_249.f9 p_485->g_254.f2 p_485->g_261.f5 p_485->g_171 p_485->g_249.f0 p_485->g_142 p_485->g_143 p_485->g_263.f0 p_485->g_251.f6 p_485->g_254.f7 p_485->g_263.f9 p_485->g_251.f0 p_485->g_253.f2 p_485->g_257.f5 p_485->g_434 p_485->g_263.f6 p_485->g_262.f7 p_485->g_259.f9 p_485->g_455 p_485->g_245 p_485->g_120
 * writes: p_485->g_9 p_485->g_61 p_485->g_120 p_485->g_125 p_485->g_37 p_485->g_134 p_485->g_121 p_485->g_244 p_485->g_245.f8 p_485->g_194 p_485->g_262.f9 p_485->g_300 p_485->g_256.f9 p_485->g_251.f9 p_485->g_262.f5 p_485->g_260.f2 p_485->g_250.f5 p_485->g_261.f9 p_485->g_250.f2 p_485->g_249.f9 p_485->g_171 p_485->g_249.f0 p_485->g_143 p_485->g_263.f0 p_485->g_251.f6 p_485->g_263.f9 p_485->g_251.f0 p_485->g_253.f2 p_485->g_402 p_485->g_259.f9 p_485->g_245 p_485->g_127 p_485->g_257.f2
 */
int32_t  func_32(int32_t * p_33, uint64_t  p_34, int32_t * p_35, struct S1 * p_485)
{ /* block id: 13 */
    int8_t l_47 = 0x39L;
    VECTOR(int8_t, 2) l_50 = (VECTOR(int8_t, 2))(1L, 0x7CL);
    VECTOR(int8_t, 2) l_51 = (VECTOR(int8_t, 2))(0x67L, 0x06L);
    uint16_t *l_60 = &p_485->g_61;
    VECTOR(int8_t, 2) l_87 = (VECTOR(int8_t, 2))(0x69L, (-5L));
    uint64_t l_363[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    VECTOR(int32_t, 4) l_460 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x171D7D64L), 0x171D7D64L);
    int16_t *l_475 = &p_485->g_194[3][5];
    int i;
    if ((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u((p_485->g_5 | (safe_sub_func_uint32_t_u_u(p_34, 0x225C50F4L))))), p_485->g_comm_values[p_485->tid])) , (safe_sub_func_uint32_t_u_u((l_47 >= (((((*l_60) = (safe_mod_func_uint8_t_u_u(l_47, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_50.xyyyxxxyyyyxxyxy)).lo)), ((VECTOR(int8_t, 16))(l_51.yyxxyyxxxyxyyyxy)).lo, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((*p_35) = ((safe_add_func_int32_t_s_s(0x27A07EE3L, (safe_add_func_int64_t_s_s((-8L), 0x0F7E9ACA868CE927L)))) != p_485->g_3[2][5][0])), 1L)), p_485->g_comm_values[p_485->tid])), ((VECTOR(int8_t, 4))((-10L))), p_485->l_comm_values[(safe_mod_func_uint32_t_u_u(p_485->tid, 20))], ((VECTOR(int8_t, 2))(0x5DL)), p_34, 0x6AL, 0x19L, 0x56L, ((VECTOR(int8_t, 4))((-1L))))).s5673, ((VECTOR(int8_t, 4))(7L)), ((VECTOR(int8_t, 4))(0x40L))))).yxyzwwzw))))))).s1))) & p_485->l_comm_values[(safe_mod_func_uint32_t_u_u(p_485->tid, 20))]) > 0x09A124D1L) | 6UL)), l_47))), l_51.x)))
    { /* block id: 16 */
        int64_t l_79 = 0L;
        VECTOR(int8_t, 2) l_88 = (VECTOR(int8_t, 2))(0x4FL, 9L);
        uint16_t *l_419 = &p_485->g_127;
        int32_t *l_421 = &p_485->g_259.f9;
        int32_t **l_420 = &l_421;
        int i;
        (*p_485->g_142) = func_62(&p_485->g_37, l_60, func_68(func_72(((p_485->g_78[0] , l_79) , func_80((!0x4D6ACD93D51DFD2EL), ((((VECTOR(uint16_t, 4))(0x8E75L, 65534UL, 0xFCCFL, 4UL)).x && (((safe_sub_func_int8_t_s_s((~p_485->g_2), ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(0x4DL, 0x44L)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_87.yyxyyxxxxyyyyxxy)).even)).s3552641204412313, ((VECTOR(int8_t, 8))(l_88.yxyxxxxx)).s5470333277044035, ((VECTOR(int8_t, 16))((safe_sub_func_uint32_t_u_u(func_91(p_485->l_comm_values[(safe_mod_func_uint32_t_u_u(p_485->tid, 20))], (((safe_rshift_func_int8_t_s_u(6L, 6)) , 0x531F22FF882A91ADL) , p_34), l_87.x, p_485), 0x5B1C2099L)), ((VECTOR(int8_t, 8))(0x68L)), 0x4DL, ((VECTOR(int8_t, 4))(0x5BL)), (-1L), 0x62L))))))).sf3))), ((VECTOR(int8_t, 2))(2L)), ((VECTOR(int8_t, 2))(1L))))))), 0x68L, 0x18L, p_485->g_254.f2, ((VECTOR(int8_t, 2))(3L)), 0L)), p_34, 0x5EL, (-1L), (-1L), ((VECTOR(int8_t, 4))(1L)))).hi, ((VECTOR(int8_t, 8))(0L))))).s2)) <= p_485->g_261.f5) , p_34)) , &p_485->g_121), p_34, &p_485->g_171, p_485)), p_34, l_363[2], p_34, l_88.x, p_485), l_419, p_34, p_485), p_485->g_257.f5, l_420, p_485);
        (**l_420) |= (((*p_485->g_244) , (**p_485->g_141)) | (safe_mul_func_int8_t_s_s((((VECTOR(int32_t, 2))(0L, 0x5C9584F2L)).hi | ((VECTOR(uint32_t, 2))(4294967292UL, 0UL)).lo), (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(3L, 0L)), 1L, 0x27FEL)))).z, (*p_485->g_126))))));
        l_460.w = (*p_35);
    }
    else
    { /* block id: 207 */
        int16_t l_463 = 0x75C4L;
        VECTOR(int32_t, 8) l_464 = (VECTOR(int32_t, 8))(0x6AE0FABAL, (VECTOR(int32_t, 4))(0x6AE0FABAL, (VECTOR(int32_t, 2))(0x6AE0FABAL, (-1L)), (-1L)), (-1L), 0x6AE0FABAL, (-1L));
        VECTOR(int32_t, 8) l_465 = (VECTOR(int32_t, 8))(0x1B6E1CACL, (VECTOR(int32_t, 4))(0x1B6E1CACL, (VECTOR(int32_t, 2))(0x1B6E1CACL, (-9L)), (-9L)), (-9L), 0x1B6E1CACL, (-9L));
        int8_t *l_468 = &p_485->g_455.f6;
        uint16_t *l_470 = &p_485->g_120[1][3][0];
        int16_t *l_477[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        VECTOR(int32_t, 16) l_481 = (VECTOR(int32_t, 16))(0x12A31353L, (VECTOR(int32_t, 4))(0x12A31353L, (VECTOR(int32_t, 2))(0x12A31353L, 0x63A5397EL), 0x63A5397EL), 0x63A5397EL, 0x12A31353L, 0x63A5397EL, (VECTOR(int32_t, 2))(0x12A31353L, 0x63A5397EL), (VECTOR(int32_t, 2))(0x12A31353L, 0x63A5397EL), 0x12A31353L, 0x63A5397EL, 0x12A31353L, 0x63A5397EL);
        int i, j;
        for (p_485->g_127 = 0; (p_485->g_127 != 32); p_485->g_127++)
        { /* block id: 210 */
            uint16_t *l_469 = &p_485->g_120[2][3][0];
            uint16_t **l_471 = &p_485->g_126;
            int16_t **l_472 = (void*)0;
            int16_t *l_474 = &p_485->g_194[3][2];
            int16_t **l_473 = &l_474;
            int16_t **l_476[6];
            int32_t *l_478 = (void*)0;
            int i;
            for (i = 0; i < 6; i++)
                l_476[i] = (void*)0;
            l_460.x &= ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_463, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(l_464.s7157213232260601)).odd, (int32_t)(-6L)))).s23, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_465.s43347550)).s6643301447063733)).sb2b7)).odd))).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_485->g_466.s04310530)).lo)).odd)).xxyxyxyx)), ((l_477[0][0] = (l_475 = (p_485->g_467[0][5] , ((*l_473) = func_80(((void*)0 != l_468), p_33, (l_469 != l_470), func_68(((*l_471) = &p_485->g_120[2][3][0]), l_470, p_34, p_485), p_485))))) != l_60), (*p_35), (*p_35), ((VECTOR(int32_t, 2))(4L)), 0x57E0CB3AL)).s02, ((VECTOR(int32_t, 2))((-1L)))))).odd;
            for (p_485->g_257.f2 = (-3); (p_485->g_257.f2 >= 26); p_485->g_257.f2 = safe_add_func_int8_t_s_s(p_485->g_257.f2, 5))
            { /* block id: 218 */
                (**p_485->g_141) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_481.sf44185d5)).s06)).yyxyxyxxxxxyxyyy)).se9db)).xywxzyzyzzyyzzyx)).sc;
                (*p_485->g_142) = 0x278354BEL;
                if ((*p_35))
                    continue;
            }
        }
        return (*p_35);
    }
    return l_50.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_434 p_485->g_263.f6 p_485->g_262.f7 p_485->g_259.f9 p_485->g_455 p_485->g_244 p_485->g_251.f9
 * writes: p_485->g_259.f9 p_485->g_245 p_485->g_37
 */
int32_t  func_62(int32_t ** p_63, uint16_t * p_64, int32_t * p_65, uint32_t  p_66, int32_t ** p_67, struct S1 * p_485)
{ /* block id: 198 */
    VECTOR(int32_t, 16) l_422 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int32_t, 2))(1L, 8L), (VECTOR(int32_t, 2))(1L, 8L), 1L, 8L, 1L, 8L);
    uint64_t l_423 = 18446744073709551612UL;
    VECTOR(uint8_t, 16) l_435 = (VECTOR(uint8_t, 16))(0x14L, (VECTOR(uint8_t, 4))(0x14L, (VECTOR(uint8_t, 2))(0x14L, 0xD0L), 0xD0L), 0xD0L, 0x14L, 0xD0L, (VECTOR(uint8_t, 2))(0x14L, 0xD0L), (VECTOR(uint8_t, 2))(0x14L, 0xD0L), 0x14L, 0xD0L, 0x14L, 0xD0L);
    VECTOR(int8_t, 4) l_436 = (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x33L), 0x33L);
    uint16_t *l_443[5] = {&p_485->g_127,&p_485->g_127,&p_485->g_127,&p_485->g_127,&p_485->g_127};
    int32_t *l_444 = &p_485->g_263.f9;
    int32_t *l_445 = &p_485->g_261.f9;
    int32_t *l_446 = &p_485->g_253.f9;
    int32_t *l_447 = &p_485->g_251.f9;
    int32_t *l_448 = &p_485->g_248.f9;
    int32_t *l_449 = (void*)0;
    int32_t *l_450 = &p_485->g_249.f9;
    int32_t *l_451 = &p_485->g_251.f9;
    uint16_t l_452 = 0UL;
    int i;
    (**p_67) ^= ((((VECTOR(int32_t, 16))(l_422.s20c91ac15b30c376)).se != (7L | l_423)) == (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((safe_lshift_func_int8_t_s_s(l_423, 1)) > (((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(0x33L, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_485->g_434.yy)), 0UL, 255UL)).zwwzyxxw, ((VECTOR(uint8_t, 16))(l_435.scbdc186c0376d9ee)).hi))).s6)) >= p_485->g_263.f6) < (l_435.s8 , p_66)), ((VECTOR(int8_t, 16))(l_436.yxwwyxxyywyzywwy)).sb)), (safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint8_t_u_u(1UL, ((l_443[4] != p_64) | l_435.s2))) , 0x775585D8L) , 0x38D7L), 3)) <= l_423) , 0x4D1E7E65L) > GROUP_DIVERGE(0, 1)), p_485->g_262.f7)))) < 0L) == l_422.s6)), 0xA8D7L, ((VECTOR(uint16_t, 4))(0x7C4AL)), ((VECTOR(uint16_t, 2))(0xC1C8L)), ((VECTOR(uint16_t, 8))(0UL)))).odd)).s4, 15)));
    --l_452;
    (*p_485->g_244) = p_485->g_455;
    (*p_63) = l_445;
    return (*l_447);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_68(uint16_t * p_69, uint16_t * p_70, uint8_t  p_71, struct S1 * p_485)
{ /* block id: 196 */
    return &p_485->g_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_249.f0 p_485->g_142 p_485->g_143 p_485->g_263.f0 p_485->g_141 p_485->g_251.f6 p_485->g_254.f7 p_485->g_263.f9 p_485->g_251.f0 p_485->g_253.f2
 * writes: p_485->g_249.f0 p_485->g_143 p_485->g_263.f0 p_485->g_251.f6 p_485->g_263.f9 p_485->g_251.f0 p_485->g_253.f2 p_485->g_300 p_485->g_262.f9 p_485->g_402
 */
uint16_t * func_72(uint16_t * p_73, uint32_t  p_74, uint32_t  p_75, int32_t  p_76, uint32_t  p_77, struct S1 * p_485)
{ /* block id: 155 */
    uint8_t l_366[8] = {0x24L,0x24L,0x24L,0x24L,0x24L,0x24L,0x24L,0x24L};
    int32_t *l_367 = &p_485->g_263.f9;
    int32_t *l_382 = (void*)0;
    int32_t l_383 = 0x17539DC0L;
    int32_t *l_384 = &p_485->g_262.f9;
    int32_t *l_385 = &p_485->g_263.f9;
    int32_t *l_386 = &p_485->g_9;
    int32_t *l_387 = &p_485->g_252.f9;
    int32_t *l_388 = (void*)0;
    int32_t *l_389[9][6] = {{&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9,&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9},{&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9,&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9},{&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9,&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9},{&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9,&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9},{&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9,&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9},{&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9,&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9},{&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9,&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9},{&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9,&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9},{&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9,&p_485->g_258.f9,&p_485->g_5,&p_485->g_258.f9}};
    uint8_t l_390[2];
    int64_t *l_403 = &p_485->g_269[1];
    int32_t l_415 = 0x24A7804BL;
    uint8_t *l_417 = (void*)0;
    uint8_t **l_416 = &l_417;
    int i, j;
    for (i = 0; i < 2; i++)
        l_390[i] = 0xB1L;
    for (p_485->g_249.f0 = 18; (p_485->g_249.f0 != 15); p_485->g_249.f0--)
    { /* block id: 158 */
        int32_t **l_368[4][6] = {{&p_485->g_134[3],(void*)0,&p_485->g_134[3],&p_485->g_134[3],(void*)0,&p_485->g_134[3]},{&p_485->g_134[3],(void*)0,&p_485->g_134[3],&p_485->g_134[3],(void*)0,&p_485->g_134[3]},{&p_485->g_134[3],(void*)0,&p_485->g_134[3],&p_485->g_134[3],(void*)0,&p_485->g_134[3]},{&p_485->g_134[3],(void*)0,&p_485->g_134[3],&p_485->g_134[3],(void*)0,&p_485->g_134[3]}};
        int i, j;
        (*p_485->g_142) |= l_366[5];
        l_367 = l_367;
    }
    for (p_485->g_263.f0 = 0; (p_485->g_263.f0 > 21); p_485->g_263.f0++)
    { /* block id: 164 */
        int32_t *l_380 = (void*)0;
        (**p_485->g_141) = 0x253D6B6FL;
        for (p_485->g_251.f6 = (-29); (p_485->g_251.f6 == 26); ++p_485->g_251.f6)
        { /* block id: 168 */
            int16_t l_375 = 0x0A61L;
            int32_t *l_381 = (void*)0;
            (*l_367) ^= ((safe_add_func_uint16_t_u_u(l_375, 1UL)) >= (safe_rshift_func_int16_t_s_s(p_485->g_254.f7, 2)));
            if ((*l_367))
                break;
            for (p_485->g_251.f0 = 0; (p_485->g_251.f0 == 49); ++p_485->g_251.f0)
            { /* block id: 173 */
                l_381 = l_380;
                (*l_367) &= (*p_485->g_142);
            }
        }
        (*l_367) &= (**p_485->g_141);
    }
    ++l_390[0];
    for (p_485->g_253.f2 = (-18); (p_485->g_253.f2 < (-27)); p_485->g_253.f2 = safe_sub_func_int64_t_s_s(p_485->g_253.f2, 5))
    { /* block id: 183 */
        int16_t l_408[6] = {0x7F0CL,0x4064L,0x7F0CL,0x7F0CL,0x4064L,0x7F0CL};
        VECTOR(int8_t, 4) l_409 = (VECTOR(int8_t, 4))(0x65L, (VECTOR(int8_t, 2))(0x65L, 0x24L), 0x24L);
        VECTOR(int8_t, 8) l_410 = (VECTOR(int8_t, 8))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x4AL), 0x4AL), 0x4AL, (-8L), 0x4AL);
        uint8_t ***l_418 = &l_416;
        int i;
        for (p_485->g_300 = 6; (p_485->g_300 != 23); p_485->g_300 = safe_add_func_uint64_t_u_u(p_485->g_300, 6))
        { /* block id: 186 */
            int32_t l_399 = (-1L);
            int64_t *l_401 = &p_485->g_269[0];
            int64_t **l_400[3];
            int i;
            for (i = 0; i < 3; i++)
                l_400[i] = &l_401;
            (*l_384) = p_74;
            (*p_485->g_142) = ((((safe_lshift_func_uint16_t_u_u(l_399, 15)) | ((p_485->g_402 = (void*)0) == (l_399 , l_403))) < ((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x2F61L, (safe_rshift_func_uint16_t_u_s(((*p_73) = (!0x3C31L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), 0x05B2L)).xxyyyyyx)).s5)), (-1L), 0x1124L)))).w < (safe_div_func_uint8_t_u_u(l_408[5], ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x6CL, 0x07L, (-7L), 0x3AL)).zyywzyww)).hi, ((VECTOR(int8_t, 8))(l_409.wwwxzxwy)).lo, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_410.s01)).xxxyyyxxxyyyxyyy)).sf97a))), (int8_t)(safe_div_func_int64_t_s_s(((((void*)0 == &p_485->g_134[5]) , (safe_mul_func_int32_t_s_s((FAKE_DIVERGE(p_485->group_0_offset, get_group_id(0), 10) || (((*l_367) = (*p_485->g_142)) <= p_74)), 0UL))) | (-2L)), p_74)), (int8_t)p_485->g_249.f5))).wzyxzzxz)), 0x3BL, 0x38L, ((VECTOR(int8_t, 2))(0x66L)), p_485->g_143[0][2], ((VECTOR(int8_t, 2))((-6L))), (-1L))).s180d, ((VECTOR(int8_t, 4))((-1L))), ((VECTOR(int8_t, 4))(7L))))), ((VECTOR(int8_t, 4))(0x73L))))).z))) | l_415)) != 1UL);
        }
        (*l_418) = l_416;
    }
    return &p_485->g_120[2][3][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_171 p_485->g_9
 * writes: p_485->g_171 p_485->g_9
 */
uint16_t * func_80(int64_t  p_81, int32_t * p_82, uint32_t  p_83, int32_t * p_84, struct S1 * p_485)
{ /* block id: 152 */
    uint32_t l_361 = 0x3656EF2CL;
    uint16_t *l_362 = &p_485->g_120[2][3][0];
    (*p_84) |= l_361;
    return l_362;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_97 p_485->g_78.f6 p_485->g_121 p_485->g_5 p_485->g_9 p_485->g_126 p_485->g_37 p_485->g_141 p_485->g_134 p_485->g_78.f9 p_485->g_240 p_485->g_243 p_485->g_244 p_485->g_247 p_485->g_127 p_485->g_267 p_485->g_258.f6 p_485->g_256.f8 p_485->g_245.f8 p_485->g_286 p_485->g_262.f9 p_485->g_300 p_485->g_263.f8 p_485->g_251.f9 p_485->g_262.f5 p_485->g_256.f9 p_485->g_250.f5 p_485->g_261.f9 p_485->g_249.f9
 * writes: p_485->g_61 p_485->g_120 p_485->g_125 p_485->g_37 p_485->g_134 p_485->g_9 p_485->g_121 p_485->g_244 p_485->g_245.f8 p_485->g_194 p_485->g_262.f9 p_485->g_300 p_485->g_256.f9 p_485->g_251.f9 p_485->g_262.f5 p_485->g_260.f2 p_485->g_250.f5 p_485->g_261.f9 p_485->g_250.f2 p_485->g_249.f9
 */
uint32_t  func_91(int32_t  p_92, uint64_t  p_93, uint32_t  p_94, struct S1 * p_485)
{ /* block id: 17 */
    int32_t **l_100 = &p_485->g_37;
    uint16_t *l_118 = &p_485->g_61;
    uint16_t *l_119[5][3][1] = {{{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]}},{{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]}},{{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]}},{{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]}},{{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]},{&p_485->g_120[2][3][0]}}};
    uint32_t l_122[2];
    int32_t l_123 = 0x126A0632L;
    uint32_t *l_124 = &p_485->g_125;
    int8_t l_144 = (-5L);
    int32_t *l_306 = &p_485->g_256.f9;
    int32_t l_334 = 0x0E07202FL;
    int32_t l_335 = (-7L);
    int32_t l_336[5][7][7] = {{{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)}},{{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)}},{{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)}},{{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)}},{{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)},{(-8L),0L,(-8L),(-8L),0L,(-8L),(-8L)}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_122[i] = 4294967295UL;
    atomic_sub(&p_485->g_atomic_reduction[get_linear_group_id()], (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_485->g_97.yy)).yxyxxyxy)).s5 , (-1L)) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_485->v_collective += p_485->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_485->g_251.f9 ^= (!(safe_mod_func_int64_t_s_s(((+(((void*)0 != l_100) < (safe_sub_func_int32_t_s_s((p_485->g_97.y , ((*l_306) = (p_94 || (((safe_div_func_int32_t_s_s(((((p_94 & func_105(((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(6UL, ((((VECTOR(uint64_t, 2))(0xCF8FE10705393467L, 0xF4025DD51201156AL)).odd , func_109(func_111(p_94, ((*l_124) = (l_123 = ((safe_lshift_func_uint8_t_u_s((((p_485->g_120[2][3][0] = ((*l_118) = 0x7C8CL)) == ((((((0UL < ((VECTOR(int32_t, 2))(0x108A32CFL, 1L)).hi) != (((p_485->g_78[0].f6 && (-2L)) > p_485->g_97.x) || (-10L))) , l_100) != (void*)0) != p_93) , p_485->g_121)) >= l_122[1]), p_485->g_5)) > p_485->g_9))), p_485->g_126, &p_485->g_127, p_485), p_485)) != p_485->g_141), l_122[0], ((VECTOR(uint16_t, 8))(0x55FDL)), 0x2877L, 0xD50CL, l_144, 0x6A67L, 1UL)).s7373)).y, p_92)) <= 0x78C93FC3FCEF47ADL), p_485)) , l_118) != &p_485->g_127) != 65529UL), p_485->g_263.f8)) & 0x3C2D2AB52523C047L) != p_93)))), GROUP_DIVERGE(2, 1))))) , p_94), p_92)));
    for (p_485->g_262.f5 = 27; (p_485->g_262.f5 <= 17); p_485->g_262.f5 = safe_sub_func_int16_t_s_s(p_485->g_262.f5, 1))
    { /* block id: 121 */
        int32_t *l_311 = &p_485->g_249.f9;
        VECTOR(uint8_t, 16) l_312 = (VECTOR(uint8_t, 16))(0x56L, (VECTOR(uint8_t, 4))(0x56L, (VECTOR(uint8_t, 2))(0x56L, 0x5EL), 0x5EL), 0x5EL, 0x56L, 0x5EL, (VECTOR(uint8_t, 2))(0x56L, 0x5EL), (VECTOR(uint8_t, 2))(0x56L, 0x5EL), 0x56L, 0x5EL, 0x56L, 0x5EL);
        int8_t *l_320 = (void*)0;
        int8_t *l_321[9][4] = {{&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_255.f6},{&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_255.f6},{&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_255.f6},{&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_255.f6},{&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_255.f6},{&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_255.f6},{&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_255.f6},{&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_255.f6},{&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_78[0].f6,&p_485->g_255.f6}};
        uint8_t *l_328 = &p_485->g_197[0][9][0].f5;
        uint8_t *l_329 = &p_485->g_250.f5;
        int32_t *l_330 = &p_485->g_261.f9;
        int32_t *l_331 = &p_485->g_263.f9;
        int32_t *l_332 = &p_485->g_261.f9;
        int32_t *l_333[5] = {&p_485->g_257.f9,&p_485->g_257.f9,&p_485->g_257.f9,&p_485->g_257.f9,&p_485->g_257.f9};
        uint32_t l_337[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_337[i] = 0UL;
        for (p_485->g_260.f2 = (-16); (p_485->g_260.f2 > (-3)); p_485->g_260.f2 = safe_add_func_int16_t_s_s(p_485->g_260.f2, 3))
        { /* block id: 124 */
            (*l_306) &= 0x068658D9L;
            (*l_100) = l_311;
        }
        (*l_330) ^= (((*l_329) &= ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(l_312.sc0)), ((VECTOR(uint8_t, 8))(((*l_328) &= (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((*l_311))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(1UL, ((VECTOR(uint64_t, 2))(0xAE8D315157075594L, 18446744073709551613UL)), 0xFEF3C96A96F33B2BL)), (safe_lshift_func_int8_t_s_s(((*l_306) > ((safe_add_func_uint32_t_u_u((*l_306), 2L)) ^ 8UL)), (p_485->g_252.f6 ^= ((void*)0 != &p_485->g_142)))), ((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(p_93, (safe_lshift_func_uint8_t_u_s(((void*)0 == (*p_485->g_141)), 4)))), FAKE_DIVERGE(p_485->local_1_offset, get_local_id(1), 10))) || (*l_311)), 0xF7EA55D0D9FF14B9L, 18446744073709551615UL)).s2))), 0x92L, 1UL, ((VECTOR(uint8_t, 4))(0x5CL)), 249UL)).s63, ((VECTOR(uint8_t, 2))(0xCCL))))).xxxy, ((VECTOR(uint8_t, 4))(255UL))))).odd, ((VECTOR(uint8_t, 2))(255UL))))).xyyxxxyy, ((VECTOR(uint8_t, 8))(0UL))))).s2424114743432630)).s44)))))).odd) > p_94);
        l_337[0]--;
        for (p_92 = 3; (p_92 != (-18)); p_92 = safe_sub_func_int64_t_s_s(p_92, 5))
        { /* block id: 135 */
            int16_t l_347 = (-8L);
            int8_t l_350 = 0x17L;
            int32_t l_351 = 0x658193ACL;
            int32_t l_353 = 0x2BC60B90L;
            int32_t l_354 = 1L;
            VECTOR(int32_t, 4) l_360 = (VECTOR(int32_t, 4))(0x314CC53DL, (VECTOR(int32_t, 2))(0x314CC53DL, 1L), 1L);
            int i;
            for (p_485->g_250.f2 = 0; (p_485->g_250.f2 <= (-1)); p_485->g_250.f2--)
            { /* block id: 138 */
                int32_t l_344[5][2][5] = {{{(-9L),0x69BA07DEL,0L,1L,(-2L)},{(-9L),0x69BA07DEL,0L,1L,(-2L)}},{{(-9L),0x69BA07DEL,0L,1L,(-2L)},{(-9L),0x69BA07DEL,0L,1L,(-2L)}},{{(-9L),0x69BA07DEL,0L,1L,(-2L)},{(-9L),0x69BA07DEL,0L,1L,(-2L)}},{{(-9L),0x69BA07DEL,0L,1L,(-2L)},{(-9L),0x69BA07DEL,0L,1L,(-2L)}},{{(-9L),0x69BA07DEL,0L,1L,(-2L)},{(-9L),0x69BA07DEL,0L,1L,(-2L)}}};
                int32_t l_348 = 1L;
                int32_t l_349 = 0x37238EFBL;
                int32_t l_352[5];
                uint64_t l_355 = 0UL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_352[i] = (-5L);
                (*l_311) = (p_93 ^ (l_344[1][1][2] , ((safe_add_func_int32_t_s_s(p_93, 0x196ACA04L)) , 2L)));
                (*l_332) = (l_347 == p_94);
                --l_355;
            }
            for (l_350 = 0; (l_350 >= 5); l_350++)
            { /* block id: 145 */
                (*l_311) &= ((VECTOR(int32_t, 16))(l_360.zzyxxzzzxzyxzyzz)).s8;
                (*l_100) = &l_351;
            }
        }
    }
    return p_92;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_121 p_485->g_9 p_485->g_134 p_485->g_78.f9 p_485->g_240 p_485->g_243 p_485->g_244 p_485->g_247 p_485->g_126 p_485->g_127 p_485->g_267 p_485->g_258.f6 p_485->g_256.f8 p_485->g_245.f8 p_485->g_37 p_485->g_286 p_485->g_262.f9 p_485->g_300
 * writes: p_485->g_121 p_485->g_9 p_485->g_244 p_485->g_245.f8 p_485->g_37 p_485->g_194 p_485->g_262.f9 p_485->g_300
 */
uint32_t  func_105(int32_t  p_106, struct S1 * p_485)
{ /* block id: 38 */
    int8_t l_145 = 0x3CL;
    int32_t **l_151 = &p_485->g_37;
    uint32_t *l_163 = &p_485->g_125;
    uint32_t l_205 = 0xDCE8454DL;
    struct S0 **l_246[5][10] = {{&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244,&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244},{&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244,&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244},{&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244,&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244},{&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244,&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244},{&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244,&p_485->g_244,&p_485->g_244,(void*)0,&p_485->g_244,&p_485->g_244}};
    int64_t *l_266 = (void*)0;
    int64_t *l_268[5] = {&p_485->g_269[1],&p_485->g_269[1],&p_485->g_269[1],&p_485->g_269[1],&p_485->g_269[1]};
    int32_t l_270 = 0x4C3C140DL;
    int32_t l_271 = (-2L);
    VECTOR(uint64_t, 16) l_272 = (VECTOR(uint64_t, 16))(0xC396F678740965A6L, (VECTOR(uint64_t, 4))(0xC396F678740965A6L, (VECTOR(uint64_t, 2))(0xC396F678740965A6L, 0x2BD5820EB353DA04L), 0x2BD5820EB353DA04L), 0x2BD5820EB353DA04L, 0xC396F678740965A6L, 0x2BD5820EB353DA04L, (VECTOR(uint64_t, 2))(0xC396F678740965A6L, 0x2BD5820EB353DA04L), (VECTOR(uint64_t, 2))(0xC396F678740965A6L, 0x2BD5820EB353DA04L), 0xC396F678740965A6L, 0x2BD5820EB353DA04L, 0xC396F678740965A6L, 0x2BD5820EB353DA04L);
    uint32_t l_273 = 1UL;
    VECTOR(int32_t, 8) l_284 = (VECTOR(int32_t, 8))(0x3B2418FCL, (VECTOR(int32_t, 4))(0x3B2418FCL, (VECTOR(int32_t, 2))(0x3B2418FCL, (-1L)), (-1L)), (-1L), 0x3B2418FCL, (-1L));
    VECTOR(int32_t, 2) l_285 = (VECTOR(int32_t, 2))(1L, 0x037A93C6L);
    int32_t l_298 = (-8L);
    int32_t l_299 = 0x56497E77L;
    uint32_t l_305 = 0xDB24BBC6L;
    int i, j;
    l_145 = (-1L);
    for (p_485->g_121 = 0; (p_485->g_121 < 1); p_485->g_121 = safe_add_func_uint64_t_u_u(p_485->g_121, 3))
    { /* block id: 42 */
        int32_t **l_182 = &p_485->g_134[4];
        int32_t l_204 = 0L;
        for (p_485->g_9 = 0; (p_485->g_9 < 23); p_485->g_9 = safe_add_func_int64_t_s_s(p_485->g_9, 5))
        { /* block id: 45 */
            int32_t **l_150 = &p_485->g_134[0];
            int8_t *l_152 = &l_145;
            int64_t *l_164 = (void*)0;
            int64_t *l_165[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_166 = (-10L);
            int8_t *l_167 = &p_485->g_78[0].f6;
            uint8_t l_169 = 0x50L;
            int32_t *l_170 = &p_485->g_171;
            int32_t *l_172 = &p_485->g_78[0].f9;
            uint32_t l_173 = 0x01848D0EL;
            struct S0 *l_196[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_196[i] = &p_485->g_197[0][9][0];
            (1 + 1);
        }
        return (**l_182);
    }
    if ((safe_add_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_485->g_240.yxyxyyxyyxxyyxxy)).s8, (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_485->g_243.s8e0062a4)).s5, ((((((p_485->g_244 = p_485->g_244) != p_485->g_247[2][0]) == ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((-1L), ((safe_mul_func_uint8_t_u_u(((*p_485->g_126) ^ ((l_205 > (l_266 == p_485->g_267)) <= ((l_271 = (l_270 = 1L)) , ((VECTOR(uint64_t, 8))(l_272.s2791ae0e)).s1))), (p_106 == p_106))) || 0UL), 0x15L, 0x64L, ((VECTOR(int8_t, 4))(0x10L)))))).s36, ((VECTOR(int8_t, 2))(1L))))), 0x7BL)), 0x1DL, ((VECTOR(int8_t, 8))(0x4FL)), ((VECTOR(int8_t, 2))((-5L))), 0L)).s65dd, ((VECTOR(int8_t, 4))(0x62L)), ((VECTOR(int8_t, 4))(0x3DL))))).hi, ((VECTOR(int8_t, 2))(0x56L))))).xxxxyxyx)).s10, ((VECTOR(int8_t, 2))(0x2FL))))).yxxy)), ((VECTOR(int8_t, 4))(1L))))).even)).odd) != p_485->g_258.f6) < p_485->g_256.f8) <= 0x5AL))))) & l_273), 4UL)))
    { /* block id: 100 */
        int16_t l_280 = 0x5843L;
        VECTOR(int32_t, 8) l_283 = (VECTOR(int32_t, 8))(0x3747141DL, (VECTOR(int32_t, 4))(0x3747141DL, (VECTOR(int32_t, 2))(0x3747141DL, (-4L)), (-4L)), (-4L), 0x3747141DL, (-4L));
        int i;
        for (p_485->g_245.f8 = 0; (p_485->g_245.f8 >= 10); ++p_485->g_245.f8)
        { /* block id: 103 */
            int32_t *l_287 = &p_485->g_262.f9;
            (*l_151) = (*l_151);
            (*l_287) &= (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((FAKE_DIVERGE(p_485->group_1_offset, get_group_id(1), 10) == (l_280 < p_106)), (safe_sub_func_int16_t_s_s((((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_283.s2406)), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x22BE1665L, 0x3740E523L)).yyxyxyxxxxxxyxyx)).s54, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_284.s5636002677274120)).hi)).s1701244427610745)).sc1))), 0x2A243F6CL, 0x5F33A944L)), ((VECTOR(int32_t, 2))(l_285.yy)).xyyyyyyx))).s2 && (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_485->g_286.s38c3)).zwwwxxyz)).s3 == FAKE_DIVERGE(p_485->local_2_offset, get_local_id(2), 10))), (p_485->g_194[3][5] = (-9L)))))), 2));
        }
    }
    else
    { /* block id: 108 */
        int32_t *l_288 = &p_485->g_262.f9;
        int32_t *l_289 = &p_485->g_256.f9;
        int32_t *l_290 = &p_485->g_249.f9;
        int32_t *l_291 = &p_485->g_249.f9;
        int32_t *l_292 = (void*)0;
        int32_t *l_293 = &p_485->g_262.f9;
        int32_t *l_294 = &p_485->g_251.f9;
        int32_t *l_295 = &p_485->g_252.f9;
        int32_t *l_296 = &p_485->g_248.f9;
        int32_t *l_297[7];
        int i;
        for (i = 0; i < 7; i++)
            l_297[i] = &p_485->g_256.f9;
        p_485->g_300--;
        for (l_205 = (-16); (l_205 <= 51); l_205 = safe_add_func_uint32_t_u_u(l_205, 5))
        { /* block id: 112 */
            if (l_305)
                break;
        }
    }
    return p_106;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_109(uint16_t * p_110, struct S1 * p_485)
{ /* block id: 34 */
    int32_t *l_135[5];
    uint32_t l_136 = 0x3A39D6D4L;
    VECTOR(int32_t, 2) l_139 = (VECTOR(int32_t, 2))(0L, (-1L));
    uint8_t l_140[7];
    int i;
    for (i = 0; i < 5; i++)
        l_135[i] = &p_485->g_121;
    for (i = 0; i < 7; i++)
        l_140[i] = 248UL;
    l_136--;
    l_140[6] = (((VECTOR(int32_t, 2))(l_139.yy)).odd , (-1L));
    return &p_485->g_134[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_37
 * writes: p_485->g_37 p_485->g_134 p_485->g_9
 */
uint16_t * func_111(int64_t  p_112, uint32_t  p_113, uint16_t * p_114, uint16_t * p_115, struct S1 * p_485)
{ /* block id: 23 */
    int32_t **l_128 = &p_485->g_37;
    uint16_t *l_131 = &p_485->g_127;
    int32_t *l_133 = &p_485->g_121;
    int32_t **l_132[10] = {&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133};
    int i;
    (*l_128) = (void*)0;
    for (p_112 = (-1); (p_112 < (-7)); --p_112)
    { /* block id: 27 */
        return l_131;
    }
    p_485->g_134[3] = ((*l_128) = &p_485->g_9);
    (**l_128) = p_113;
    return l_131;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_comm_values[i] = 1;
    struct S1 c_486;
    struct S1* p_485 = &c_486;
    struct S1 c_487 = {
        0x23ED15DEL, // p_485->g_2
        {{{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)}},{{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)}},{{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)}},{{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)}},{{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)}},{{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)}},{{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)},{0L,0x585B7F37L,(-10L),(-9L),(-4L)}}}, // p_485->g_3
        0x4CE35A12L, // p_485->g_4
        9L, // p_485->g_5
        0L, // p_485->g_9
        (void*)0, // p_485->g_37
        0x4D59L, // p_485->g_61
        {{0x25F51048848039CCL,0L,-1L,0L,0x3E2DD196261E54E0L,247UL,0x58L,0x3257E1E0L,0x5ED112D8L,0x128C81A4L},{1UL,-5L,1L,0L,0x47F7C8792F5982E8L,7UL,0L,0xB0E0A5FEL,-10L,-7L},{0x25F51048848039CCL,0L,-1L,0L,0x3E2DD196261E54E0L,247UL,0x58L,0x3257E1E0L,0x5ED112D8L,0x128C81A4L},{0x25F51048848039CCL,0L,-1L,0L,0x3E2DD196261E54E0L,247UL,0x58L,0x3257E1E0L,0x5ED112D8L,0x128C81A4L},{1UL,-5L,1L,0L,0x47F7C8792F5982E8L,7UL,0L,0xB0E0A5FEL,-10L,-7L},{0x25F51048848039CCL,0L,-1L,0L,0x3E2DD196261E54E0L,247UL,0x58L,0x3257E1E0L,0x5ED112D8L,0x128C81A4L},{0x25F51048848039CCL,0L,-1L,0L,0x3E2DD196261E54E0L,247UL,0x58L,0x3257E1E0L,0x5ED112D8L,0x128C81A4L}}, // p_485->g_78
        (VECTOR(int32_t, 2))((-1L), 0x0B4B7B0DL), // p_485->g_97
        {{{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL}}}, // p_485->g_120
        (-6L), // p_485->g_121
        1UL, // p_485->g_125
        0x0FF8L, // p_485->g_127
        &p_485->g_127, // p_485->g_126
        {&p_485->g_78[0].f9,&p_485->g_78[0].f9,&p_485->g_78[0].f9,&p_485->g_78[0].f9,&p_485->g_78[0].f9,&p_485->g_78[0].f9,&p_485->g_78[0].f9,&p_485->g_78[0].f9}, // p_485->g_134
        {{0L,0L,0L},{0L,0L,0L}}, // p_485->g_143
        &p_485->g_143[0][2], // p_485->g_142
        &p_485->g_142, // p_485->g_141
        0L, // p_485->g_168
        0x5224E523L, // p_485->g_171
        (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 7L), 7L), 7L, (-2L), 7L), // p_485->g_187
        {{0x0672L,0L,(-9L),1L,(-9L),0L},{0x0672L,0L,(-9L),1L,(-9L),0L},{0x0672L,0L,(-9L),1L,(-9L),0L},{0x0672L,0L,(-9L),1L,(-9L),0L}}, // p_485->g_194
        {{{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}}},{{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}}},{{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}}},{{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}}},{{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}}},{{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}},{{0x1C764DC5228ABC2BL,0x45BA2897L,0x320D0595L,0x77D9DF517F69D9B0L,0x0D23065366F19421L,0xC5L,-1L,0xE4854136L,0x3865ADF1L,0L},{0UL,0x3D576BE4L,0x64FF47D7L,-1L,0x4DE13DCA199E2A63L,255UL,0x38L,4294967293UL,-1L,0x49BC23BCL},{5UL,5L,0x719587D9L,-2L,-6L,1UL,0L,4294967291UL,0x54D99733L,-1L},{0x505C1A4616DD8D7BL,0x52946B7AL,-1L,0x09C7496384A5B2B4L,-10L,0xC2L,0x78L,0xB66E6B32L,-8L,-6L}}}}, // p_485->g_197
        (VECTOR(int32_t, 8))(0x6AA87948L, (VECTOR(int32_t, 4))(0x6AA87948L, (VECTOR(int32_t, 2))(0x6AA87948L, 0x1BFC1F6EL), 0x1BFC1F6EL), 0x1BFC1F6EL, 0x6AA87948L, 0x1BFC1F6EL), // p_485->g_211
        (VECTOR(uint64_t, 2))(3UL, 0xE20F3122AB75ECBCL), // p_485->g_240
        (VECTOR(uint8_t, 16))(0x35L, (VECTOR(uint8_t, 4))(0x35L, (VECTOR(uint8_t, 2))(0x35L, 2UL), 2UL), 2UL, 0x35L, 2UL, (VECTOR(uint8_t, 2))(0x35L, 2UL), (VECTOR(uint8_t, 2))(0x35L, 2UL), 0x35L, 2UL, 0x35L, 2UL), // p_485->g_243
        {9UL,1L,0x0F9C0AE2L,1L,-7L,0xE4L,0x6FL,0UL,-7L,-1L}, // p_485->g_245
        &p_485->g_245, // p_485->g_244
        {18446744073709551609UL,0x59FB5B13L,0x037BBB02L,0x688951C26EA1E2F5L,0x3C84A35AAE1BB083L,0UL,-6L,8UL,2L,0L}, // p_485->g_248
        {1UL,3L,0x79C4AC58L,0x178C7138431DE431L,0x254F700D4DE8D427L,7UL,0x39L,0x6A1B42C0L,0x58D0AD66L,0x6117C123L}, // p_485->g_249
        {18446744073709551609UL,0L,-8L,0x6694D432449769F1L,0x7075A12033851276L,1UL,-1L,0x2B07A346L,0x01F14E60L,-10L}, // p_485->g_250
        {0xCE07C823A3FC51C5L,0x490011C2L,1L,0x6C3341C22D6D65BEL,-4L,2UL,8L,1UL,1L,-5L}, // p_485->g_251
        {0xB413DF79DE3C19CEL,0x49B4B8B3L,0L,3L,-8L,0xB2L,-3L,0xB6A3B96EL,0x091F6346L,0x46E5B2CBL}, // p_485->g_252
        {0UL,-2L,0x51A79EF8L,9L,0x16B19010AC992D6FL,0xE8L,1L,2UL,0L,0x383A7A22L}, // p_485->g_253
        {0x9EB457653D48BE78L,-4L,0x2357B5C8L,0x46A6E80C4C83DA69L,1L,0x88L,0x52L,4294967293UL,0x467F9B9FL,0x70726FF2L}, // p_485->g_254
        {7UL,1L,8L,0L,-1L,0x99L,0x7FL,0x128049BFL,0x72B9AD66L,5L}, // p_485->g_255
        {0x25D52D19F02E2CD2L,0x2E6E0694L,-8L,-6L,0x4C0C2B9F0B2FEA84L,0x43L,4L,0x0C000C0CL,-1L,-9L}, // p_485->g_256
        {3UL,0L,0x238270C3L,0x0F6954FDDA2D072FL,0x0BD28C972BED4D6BL,248UL,-9L,0UL,1L,0x51FB7B40L}, // p_485->g_257
        {18446744073709551611UL,-2L,0x4D772B57L,8L,0x2A21D33F3EA73BC9L,0xBBL,-7L,4294967293UL,8L,1L}, // p_485->g_258
        {18446744073709551608UL,-10L,5L,8L,0x0B5346294AA34434L,1UL,0x0AL,0UL,5L,0x00A0FCB6L}, // p_485->g_259
        {0x0994434E879CE2B2L,0x2617B992L,0L,0x492669966DB137CCL,0L,255UL,-1L,0xAFDE1265L,-10L,-7L}, // p_485->g_260
        {7UL,0x3EB96B81L,-1L,0x64DBFC4B0FC002D3L,0x27CB3A03D13639B0L,0x03L,0x19L,0UL,0x4E694C7DL,-1L}, // p_485->g_261
        {18446744073709551606UL,0x16B98F73L,0x61968127L,0x203BE59E43A25F87L,0x1B01BD7D351BF10AL,253UL,0x3FL,3UL,0x12956B03L,0x7C3A222AL}, // p_485->g_262
        {18446744073709551614UL,-1L,-1L,-1L,0x20B9D7A5E7E34BBFL,0xC2L,-10L,4294967289UL,0x5B49C522L,0x0D6E23A6L}, // p_485->g_263
        {{&p_485->g_260,&p_485->g_248,&p_485->g_248,&p_485->g_260,&p_485->g_252,&p_485->g_256,&p_485->g_256,&p_485->g_252},{&p_485->g_260,&p_485->g_248,&p_485->g_248,&p_485->g_260,&p_485->g_252,&p_485->g_256,&p_485->g_256,&p_485->g_252},{&p_485->g_260,&p_485->g_248,&p_485->g_248,&p_485->g_260,&p_485->g_252,&p_485->g_256,&p_485->g_256,&p_485->g_252},{&p_485->g_260,&p_485->g_248,&p_485->g_248,&p_485->g_260,&p_485->g_252,&p_485->g_256,&p_485->g_256,&p_485->g_252}}, // p_485->g_247
        (void*)0, // p_485->g_267
        {0x23B50BFF2D563EE7L,(-1L),0x23B50BFF2D563EE7L,0x23B50BFF2D563EE7L,(-1L),0x23B50BFF2D563EE7L,0x23B50BFF2D563EE7L}, // p_485->g_269
        (VECTOR(int32_t, 16))(0x0F9A63BBL, (VECTOR(int32_t, 4))(0x0F9A63BBL, (VECTOR(int32_t, 2))(0x0F9A63BBL, 1L), 1L), 1L, 0x0F9A63BBL, 1L, (VECTOR(int32_t, 2))(0x0F9A63BBL, 1L), (VECTOR(int32_t, 2))(0x0F9A63BBL, 1L), 0x0F9A63BBL, 1L, 0x0F9A63BBL, 1L), // p_485->g_286
        2UL, // p_485->g_300
        &p_485->g_269[0], // p_485->g_402
        (VECTOR(uint8_t, 2))(251UL, 0xD0L), // p_485->g_434
        {0xFDA9F823F7436C5AL,0x274C1D0FL,-1L,1L,0L,1UL,0x71L,4294967295UL,1L,0x742510C7L}, // p_485->g_455
        (VECTOR(int32_t, 8))(0x3C146B4BL, (VECTOR(int32_t, 4))(0x3C146B4BL, (VECTOR(int32_t, 2))(0x3C146B4BL, 6L), 6L), 6L, 0x3C146B4BL, 6L), // p_485->g_466
        {{{0UL,0x50621509L,0x02A2C48AL,0x1BCB872A8686723CL,0x7C465828B5C3E367L,7UL,0L,4294967291UL,-7L,1L},{0UL,0x50621509L,0x02A2C48AL,0x1BCB872A8686723CL,0x7C465828B5C3E367L,7UL,0L,4294967291UL,-7L,1L},{0UL,0x50621509L,0x02A2C48AL,0x1BCB872A8686723CL,0x7C465828B5C3E367L,7UL,0L,4294967291UL,-7L,1L},{0UL,0x50621509L,0x02A2C48AL,0x1BCB872A8686723CL,0x7C465828B5C3E367L,7UL,0L,4294967291UL,-7L,1L},{0UL,0x50621509L,0x02A2C48AL,0x1BCB872A8686723CL,0x7C465828B5C3E367L,7UL,0L,4294967291UL,-7L,1L},{0UL,0x50621509L,0x02A2C48AL,0x1BCB872A8686723CL,0x7C465828B5C3E367L,7UL,0L,4294967291UL,-7L,1L}}}, // p_485->g_467
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), // p_485->g_483
        0, // p_485->v_collective
        sequence_input[get_global_id(0)], // p_485->global_0_offset
        sequence_input[get_global_id(1)], // p_485->global_1_offset
        sequence_input[get_global_id(2)], // p_485->global_2_offset
        sequence_input[get_local_id(0)], // p_485->local_0_offset
        sequence_input[get_local_id(1)], // p_485->local_1_offset
        sequence_input[get_local_id(2)], // p_485->local_2_offset
        sequence_input[get_group_id(0)], // p_485->group_0_offset
        sequence_input[get_group_id(1)], // p_485->group_1_offset
        sequence_input[get_group_id(2)], // p_485->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 20)), permutations[0][get_linear_local_id()])), // p_485->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_486 = c_487;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_485);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_485->g_2, "p_485->g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_485->g_3[i][j][k], "p_485->g_3[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_485->g_4, "p_485->g_4", print_hash_value);
    transparent_crc(p_485->g_5, "p_485->g_5", print_hash_value);
    transparent_crc(p_485->g_9, "p_485->g_9", print_hash_value);
    transparent_crc(p_485->g_61, "p_485->g_61", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_485->g_78[i].f0, "p_485->g_78[i].f0", print_hash_value);
        transparent_crc(p_485->g_78[i].f1, "p_485->g_78[i].f1", print_hash_value);
        transparent_crc(p_485->g_78[i].f2, "p_485->g_78[i].f2", print_hash_value);
        transparent_crc(p_485->g_78[i].f3, "p_485->g_78[i].f3", print_hash_value);
        transparent_crc(p_485->g_78[i].f4, "p_485->g_78[i].f4", print_hash_value);
        transparent_crc(p_485->g_78[i].f5, "p_485->g_78[i].f5", print_hash_value);
        transparent_crc(p_485->g_78[i].f6, "p_485->g_78[i].f6", print_hash_value);
        transparent_crc(p_485->g_78[i].f7, "p_485->g_78[i].f7", print_hash_value);
        transparent_crc(p_485->g_78[i].f8, "p_485->g_78[i].f8", print_hash_value);
        transparent_crc(p_485->g_78[i].f9, "p_485->g_78[i].f9", print_hash_value);

    }
    transparent_crc(p_485->g_97.x, "p_485->g_97.x", print_hash_value);
    transparent_crc(p_485->g_97.y, "p_485->g_97.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_485->g_120[i][j][k], "p_485->g_120[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_485->g_121, "p_485->g_121", print_hash_value);
    transparent_crc(p_485->g_125, "p_485->g_125", print_hash_value);
    transparent_crc(p_485->g_127, "p_485->g_127", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_485->g_143[i][j], "p_485->g_143[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_485->g_168, "p_485->g_168", print_hash_value);
    transparent_crc(p_485->g_171, "p_485->g_171", print_hash_value);
    transparent_crc(p_485->g_187.s0, "p_485->g_187.s0", print_hash_value);
    transparent_crc(p_485->g_187.s1, "p_485->g_187.s1", print_hash_value);
    transparent_crc(p_485->g_187.s2, "p_485->g_187.s2", print_hash_value);
    transparent_crc(p_485->g_187.s3, "p_485->g_187.s3", print_hash_value);
    transparent_crc(p_485->g_187.s4, "p_485->g_187.s4", print_hash_value);
    transparent_crc(p_485->g_187.s5, "p_485->g_187.s5", print_hash_value);
    transparent_crc(p_485->g_187.s6, "p_485->g_187.s6", print_hash_value);
    transparent_crc(p_485->g_187.s7, "p_485->g_187.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_485->g_194[i][j], "p_485->g_194[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_485->g_197[i][j][k].f0, "p_485->g_197[i][j][k].f0", print_hash_value);
                transparent_crc(p_485->g_197[i][j][k].f1, "p_485->g_197[i][j][k].f1", print_hash_value);
                transparent_crc(p_485->g_197[i][j][k].f2, "p_485->g_197[i][j][k].f2", print_hash_value);
                transparent_crc(p_485->g_197[i][j][k].f3, "p_485->g_197[i][j][k].f3", print_hash_value);
                transparent_crc(p_485->g_197[i][j][k].f4, "p_485->g_197[i][j][k].f4", print_hash_value);
                transparent_crc(p_485->g_197[i][j][k].f5, "p_485->g_197[i][j][k].f5", print_hash_value);
                transparent_crc(p_485->g_197[i][j][k].f6, "p_485->g_197[i][j][k].f6", print_hash_value);
                transparent_crc(p_485->g_197[i][j][k].f7, "p_485->g_197[i][j][k].f7", print_hash_value);
                transparent_crc(p_485->g_197[i][j][k].f8, "p_485->g_197[i][j][k].f8", print_hash_value);
                transparent_crc(p_485->g_197[i][j][k].f9, "p_485->g_197[i][j][k].f9", print_hash_value);

            }
        }
    }
    transparent_crc(p_485->g_211.s0, "p_485->g_211.s0", print_hash_value);
    transparent_crc(p_485->g_211.s1, "p_485->g_211.s1", print_hash_value);
    transparent_crc(p_485->g_211.s2, "p_485->g_211.s2", print_hash_value);
    transparent_crc(p_485->g_211.s3, "p_485->g_211.s3", print_hash_value);
    transparent_crc(p_485->g_211.s4, "p_485->g_211.s4", print_hash_value);
    transparent_crc(p_485->g_211.s5, "p_485->g_211.s5", print_hash_value);
    transparent_crc(p_485->g_211.s6, "p_485->g_211.s6", print_hash_value);
    transparent_crc(p_485->g_211.s7, "p_485->g_211.s7", print_hash_value);
    transparent_crc(p_485->g_240.x, "p_485->g_240.x", print_hash_value);
    transparent_crc(p_485->g_240.y, "p_485->g_240.y", print_hash_value);
    transparent_crc(p_485->g_243.s0, "p_485->g_243.s0", print_hash_value);
    transparent_crc(p_485->g_243.s1, "p_485->g_243.s1", print_hash_value);
    transparent_crc(p_485->g_243.s2, "p_485->g_243.s2", print_hash_value);
    transparent_crc(p_485->g_243.s3, "p_485->g_243.s3", print_hash_value);
    transparent_crc(p_485->g_243.s4, "p_485->g_243.s4", print_hash_value);
    transparent_crc(p_485->g_243.s5, "p_485->g_243.s5", print_hash_value);
    transparent_crc(p_485->g_243.s6, "p_485->g_243.s6", print_hash_value);
    transparent_crc(p_485->g_243.s7, "p_485->g_243.s7", print_hash_value);
    transparent_crc(p_485->g_243.s8, "p_485->g_243.s8", print_hash_value);
    transparent_crc(p_485->g_243.s9, "p_485->g_243.s9", print_hash_value);
    transparent_crc(p_485->g_243.sa, "p_485->g_243.sa", print_hash_value);
    transparent_crc(p_485->g_243.sb, "p_485->g_243.sb", print_hash_value);
    transparent_crc(p_485->g_243.sc, "p_485->g_243.sc", print_hash_value);
    transparent_crc(p_485->g_243.sd, "p_485->g_243.sd", print_hash_value);
    transparent_crc(p_485->g_243.se, "p_485->g_243.se", print_hash_value);
    transparent_crc(p_485->g_243.sf, "p_485->g_243.sf", print_hash_value);
    transparent_crc(p_485->g_245.f0, "p_485->g_245.f0", print_hash_value);
    transparent_crc(p_485->g_245.f1, "p_485->g_245.f1", print_hash_value);
    transparent_crc(p_485->g_245.f2, "p_485->g_245.f2", print_hash_value);
    transparent_crc(p_485->g_245.f3, "p_485->g_245.f3", print_hash_value);
    transparent_crc(p_485->g_245.f4, "p_485->g_245.f4", print_hash_value);
    transparent_crc(p_485->g_245.f5, "p_485->g_245.f5", print_hash_value);
    transparent_crc(p_485->g_245.f6, "p_485->g_245.f6", print_hash_value);
    transparent_crc(p_485->g_245.f7, "p_485->g_245.f7", print_hash_value);
    transparent_crc(p_485->g_245.f8, "p_485->g_245.f8", print_hash_value);
    transparent_crc(p_485->g_245.f9, "p_485->g_245.f9", print_hash_value);
    transparent_crc(p_485->g_248.f0, "p_485->g_248.f0", print_hash_value);
    transparent_crc(p_485->g_248.f1, "p_485->g_248.f1", print_hash_value);
    transparent_crc(p_485->g_248.f2, "p_485->g_248.f2", print_hash_value);
    transparent_crc(p_485->g_248.f3, "p_485->g_248.f3", print_hash_value);
    transparent_crc(p_485->g_248.f4, "p_485->g_248.f4", print_hash_value);
    transparent_crc(p_485->g_248.f5, "p_485->g_248.f5", print_hash_value);
    transparent_crc(p_485->g_248.f6, "p_485->g_248.f6", print_hash_value);
    transparent_crc(p_485->g_248.f7, "p_485->g_248.f7", print_hash_value);
    transparent_crc(p_485->g_248.f8, "p_485->g_248.f8", print_hash_value);
    transparent_crc(p_485->g_248.f9, "p_485->g_248.f9", print_hash_value);
    transparent_crc(p_485->g_249.f0, "p_485->g_249.f0", print_hash_value);
    transparent_crc(p_485->g_249.f1, "p_485->g_249.f1", print_hash_value);
    transparent_crc(p_485->g_249.f2, "p_485->g_249.f2", print_hash_value);
    transparent_crc(p_485->g_249.f3, "p_485->g_249.f3", print_hash_value);
    transparent_crc(p_485->g_249.f4, "p_485->g_249.f4", print_hash_value);
    transparent_crc(p_485->g_249.f5, "p_485->g_249.f5", print_hash_value);
    transparent_crc(p_485->g_249.f6, "p_485->g_249.f6", print_hash_value);
    transparent_crc(p_485->g_249.f7, "p_485->g_249.f7", print_hash_value);
    transparent_crc(p_485->g_249.f8, "p_485->g_249.f8", print_hash_value);
    transparent_crc(p_485->g_249.f9, "p_485->g_249.f9", print_hash_value);
    transparent_crc(p_485->g_250.f0, "p_485->g_250.f0", print_hash_value);
    transparent_crc(p_485->g_250.f1, "p_485->g_250.f1", print_hash_value);
    transparent_crc(p_485->g_250.f2, "p_485->g_250.f2", print_hash_value);
    transparent_crc(p_485->g_250.f3, "p_485->g_250.f3", print_hash_value);
    transparent_crc(p_485->g_250.f4, "p_485->g_250.f4", print_hash_value);
    transparent_crc(p_485->g_250.f5, "p_485->g_250.f5", print_hash_value);
    transparent_crc(p_485->g_250.f6, "p_485->g_250.f6", print_hash_value);
    transparent_crc(p_485->g_250.f7, "p_485->g_250.f7", print_hash_value);
    transparent_crc(p_485->g_250.f8, "p_485->g_250.f8", print_hash_value);
    transparent_crc(p_485->g_250.f9, "p_485->g_250.f9", print_hash_value);
    transparent_crc(p_485->g_251.f0, "p_485->g_251.f0", print_hash_value);
    transparent_crc(p_485->g_251.f1, "p_485->g_251.f1", print_hash_value);
    transparent_crc(p_485->g_251.f2, "p_485->g_251.f2", print_hash_value);
    transparent_crc(p_485->g_251.f3, "p_485->g_251.f3", print_hash_value);
    transparent_crc(p_485->g_251.f4, "p_485->g_251.f4", print_hash_value);
    transparent_crc(p_485->g_251.f5, "p_485->g_251.f5", print_hash_value);
    transparent_crc(p_485->g_251.f6, "p_485->g_251.f6", print_hash_value);
    transparent_crc(p_485->g_251.f7, "p_485->g_251.f7", print_hash_value);
    transparent_crc(p_485->g_251.f8, "p_485->g_251.f8", print_hash_value);
    transparent_crc(p_485->g_251.f9, "p_485->g_251.f9", print_hash_value);
    transparent_crc(p_485->g_252.f0, "p_485->g_252.f0", print_hash_value);
    transparent_crc(p_485->g_252.f1, "p_485->g_252.f1", print_hash_value);
    transparent_crc(p_485->g_252.f2, "p_485->g_252.f2", print_hash_value);
    transparent_crc(p_485->g_252.f3, "p_485->g_252.f3", print_hash_value);
    transparent_crc(p_485->g_252.f4, "p_485->g_252.f4", print_hash_value);
    transparent_crc(p_485->g_252.f5, "p_485->g_252.f5", print_hash_value);
    transparent_crc(p_485->g_252.f6, "p_485->g_252.f6", print_hash_value);
    transparent_crc(p_485->g_252.f7, "p_485->g_252.f7", print_hash_value);
    transparent_crc(p_485->g_252.f8, "p_485->g_252.f8", print_hash_value);
    transparent_crc(p_485->g_252.f9, "p_485->g_252.f9", print_hash_value);
    transparent_crc(p_485->g_253.f0, "p_485->g_253.f0", print_hash_value);
    transparent_crc(p_485->g_253.f1, "p_485->g_253.f1", print_hash_value);
    transparent_crc(p_485->g_253.f2, "p_485->g_253.f2", print_hash_value);
    transparent_crc(p_485->g_253.f3, "p_485->g_253.f3", print_hash_value);
    transparent_crc(p_485->g_253.f4, "p_485->g_253.f4", print_hash_value);
    transparent_crc(p_485->g_253.f5, "p_485->g_253.f5", print_hash_value);
    transparent_crc(p_485->g_253.f6, "p_485->g_253.f6", print_hash_value);
    transparent_crc(p_485->g_253.f7, "p_485->g_253.f7", print_hash_value);
    transparent_crc(p_485->g_253.f8, "p_485->g_253.f8", print_hash_value);
    transparent_crc(p_485->g_253.f9, "p_485->g_253.f9", print_hash_value);
    transparent_crc(p_485->g_254.f0, "p_485->g_254.f0", print_hash_value);
    transparent_crc(p_485->g_254.f1, "p_485->g_254.f1", print_hash_value);
    transparent_crc(p_485->g_254.f2, "p_485->g_254.f2", print_hash_value);
    transparent_crc(p_485->g_254.f3, "p_485->g_254.f3", print_hash_value);
    transparent_crc(p_485->g_254.f4, "p_485->g_254.f4", print_hash_value);
    transparent_crc(p_485->g_254.f5, "p_485->g_254.f5", print_hash_value);
    transparent_crc(p_485->g_254.f6, "p_485->g_254.f6", print_hash_value);
    transparent_crc(p_485->g_254.f7, "p_485->g_254.f7", print_hash_value);
    transparent_crc(p_485->g_254.f8, "p_485->g_254.f8", print_hash_value);
    transparent_crc(p_485->g_254.f9, "p_485->g_254.f9", print_hash_value);
    transparent_crc(p_485->g_255.f0, "p_485->g_255.f0", print_hash_value);
    transparent_crc(p_485->g_255.f1, "p_485->g_255.f1", print_hash_value);
    transparent_crc(p_485->g_255.f2, "p_485->g_255.f2", print_hash_value);
    transparent_crc(p_485->g_255.f3, "p_485->g_255.f3", print_hash_value);
    transparent_crc(p_485->g_255.f4, "p_485->g_255.f4", print_hash_value);
    transparent_crc(p_485->g_255.f5, "p_485->g_255.f5", print_hash_value);
    transparent_crc(p_485->g_255.f6, "p_485->g_255.f6", print_hash_value);
    transparent_crc(p_485->g_255.f7, "p_485->g_255.f7", print_hash_value);
    transparent_crc(p_485->g_255.f8, "p_485->g_255.f8", print_hash_value);
    transparent_crc(p_485->g_255.f9, "p_485->g_255.f9", print_hash_value);
    transparent_crc(p_485->g_256.f0, "p_485->g_256.f0", print_hash_value);
    transparent_crc(p_485->g_256.f1, "p_485->g_256.f1", print_hash_value);
    transparent_crc(p_485->g_256.f2, "p_485->g_256.f2", print_hash_value);
    transparent_crc(p_485->g_256.f3, "p_485->g_256.f3", print_hash_value);
    transparent_crc(p_485->g_256.f4, "p_485->g_256.f4", print_hash_value);
    transparent_crc(p_485->g_256.f5, "p_485->g_256.f5", print_hash_value);
    transparent_crc(p_485->g_256.f6, "p_485->g_256.f6", print_hash_value);
    transparent_crc(p_485->g_256.f7, "p_485->g_256.f7", print_hash_value);
    transparent_crc(p_485->g_256.f8, "p_485->g_256.f8", print_hash_value);
    transparent_crc(p_485->g_256.f9, "p_485->g_256.f9", print_hash_value);
    transparent_crc(p_485->g_257.f0, "p_485->g_257.f0", print_hash_value);
    transparent_crc(p_485->g_257.f1, "p_485->g_257.f1", print_hash_value);
    transparent_crc(p_485->g_257.f2, "p_485->g_257.f2", print_hash_value);
    transparent_crc(p_485->g_257.f3, "p_485->g_257.f3", print_hash_value);
    transparent_crc(p_485->g_257.f4, "p_485->g_257.f4", print_hash_value);
    transparent_crc(p_485->g_257.f5, "p_485->g_257.f5", print_hash_value);
    transparent_crc(p_485->g_257.f6, "p_485->g_257.f6", print_hash_value);
    transparent_crc(p_485->g_257.f7, "p_485->g_257.f7", print_hash_value);
    transparent_crc(p_485->g_257.f8, "p_485->g_257.f8", print_hash_value);
    transparent_crc(p_485->g_257.f9, "p_485->g_257.f9", print_hash_value);
    transparent_crc(p_485->g_258.f0, "p_485->g_258.f0", print_hash_value);
    transparent_crc(p_485->g_258.f1, "p_485->g_258.f1", print_hash_value);
    transparent_crc(p_485->g_258.f2, "p_485->g_258.f2", print_hash_value);
    transparent_crc(p_485->g_258.f3, "p_485->g_258.f3", print_hash_value);
    transparent_crc(p_485->g_258.f4, "p_485->g_258.f4", print_hash_value);
    transparent_crc(p_485->g_258.f5, "p_485->g_258.f5", print_hash_value);
    transparent_crc(p_485->g_258.f6, "p_485->g_258.f6", print_hash_value);
    transparent_crc(p_485->g_258.f7, "p_485->g_258.f7", print_hash_value);
    transparent_crc(p_485->g_258.f8, "p_485->g_258.f8", print_hash_value);
    transparent_crc(p_485->g_258.f9, "p_485->g_258.f9", print_hash_value);
    transparent_crc(p_485->g_259.f0, "p_485->g_259.f0", print_hash_value);
    transparent_crc(p_485->g_259.f1, "p_485->g_259.f1", print_hash_value);
    transparent_crc(p_485->g_259.f2, "p_485->g_259.f2", print_hash_value);
    transparent_crc(p_485->g_259.f3, "p_485->g_259.f3", print_hash_value);
    transparent_crc(p_485->g_259.f4, "p_485->g_259.f4", print_hash_value);
    transparent_crc(p_485->g_259.f5, "p_485->g_259.f5", print_hash_value);
    transparent_crc(p_485->g_259.f6, "p_485->g_259.f6", print_hash_value);
    transparent_crc(p_485->g_259.f7, "p_485->g_259.f7", print_hash_value);
    transparent_crc(p_485->g_259.f8, "p_485->g_259.f8", print_hash_value);
    transparent_crc(p_485->g_259.f9, "p_485->g_259.f9", print_hash_value);
    transparent_crc(p_485->g_260.f0, "p_485->g_260.f0", print_hash_value);
    transparent_crc(p_485->g_260.f1, "p_485->g_260.f1", print_hash_value);
    transparent_crc(p_485->g_260.f2, "p_485->g_260.f2", print_hash_value);
    transparent_crc(p_485->g_260.f3, "p_485->g_260.f3", print_hash_value);
    transparent_crc(p_485->g_260.f4, "p_485->g_260.f4", print_hash_value);
    transparent_crc(p_485->g_260.f5, "p_485->g_260.f5", print_hash_value);
    transparent_crc(p_485->g_260.f6, "p_485->g_260.f6", print_hash_value);
    transparent_crc(p_485->g_260.f7, "p_485->g_260.f7", print_hash_value);
    transparent_crc(p_485->g_260.f8, "p_485->g_260.f8", print_hash_value);
    transparent_crc(p_485->g_260.f9, "p_485->g_260.f9", print_hash_value);
    transparent_crc(p_485->g_261.f0, "p_485->g_261.f0", print_hash_value);
    transparent_crc(p_485->g_261.f1, "p_485->g_261.f1", print_hash_value);
    transparent_crc(p_485->g_261.f2, "p_485->g_261.f2", print_hash_value);
    transparent_crc(p_485->g_261.f3, "p_485->g_261.f3", print_hash_value);
    transparent_crc(p_485->g_261.f4, "p_485->g_261.f4", print_hash_value);
    transparent_crc(p_485->g_261.f5, "p_485->g_261.f5", print_hash_value);
    transparent_crc(p_485->g_261.f6, "p_485->g_261.f6", print_hash_value);
    transparent_crc(p_485->g_261.f7, "p_485->g_261.f7", print_hash_value);
    transparent_crc(p_485->g_261.f8, "p_485->g_261.f8", print_hash_value);
    transparent_crc(p_485->g_261.f9, "p_485->g_261.f9", print_hash_value);
    transparent_crc(p_485->g_262.f0, "p_485->g_262.f0", print_hash_value);
    transparent_crc(p_485->g_262.f1, "p_485->g_262.f1", print_hash_value);
    transparent_crc(p_485->g_262.f2, "p_485->g_262.f2", print_hash_value);
    transparent_crc(p_485->g_262.f3, "p_485->g_262.f3", print_hash_value);
    transparent_crc(p_485->g_262.f4, "p_485->g_262.f4", print_hash_value);
    transparent_crc(p_485->g_262.f5, "p_485->g_262.f5", print_hash_value);
    transparent_crc(p_485->g_262.f6, "p_485->g_262.f6", print_hash_value);
    transparent_crc(p_485->g_262.f7, "p_485->g_262.f7", print_hash_value);
    transparent_crc(p_485->g_262.f8, "p_485->g_262.f8", print_hash_value);
    transparent_crc(p_485->g_262.f9, "p_485->g_262.f9", print_hash_value);
    transparent_crc(p_485->g_263.f0, "p_485->g_263.f0", print_hash_value);
    transparent_crc(p_485->g_263.f1, "p_485->g_263.f1", print_hash_value);
    transparent_crc(p_485->g_263.f2, "p_485->g_263.f2", print_hash_value);
    transparent_crc(p_485->g_263.f3, "p_485->g_263.f3", print_hash_value);
    transparent_crc(p_485->g_263.f4, "p_485->g_263.f4", print_hash_value);
    transparent_crc(p_485->g_263.f5, "p_485->g_263.f5", print_hash_value);
    transparent_crc(p_485->g_263.f6, "p_485->g_263.f6", print_hash_value);
    transparent_crc(p_485->g_263.f7, "p_485->g_263.f7", print_hash_value);
    transparent_crc(p_485->g_263.f8, "p_485->g_263.f8", print_hash_value);
    transparent_crc(p_485->g_263.f9, "p_485->g_263.f9", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_485->g_269[i], "p_485->g_269[i]", print_hash_value);

    }
    transparent_crc(p_485->g_286.s0, "p_485->g_286.s0", print_hash_value);
    transparent_crc(p_485->g_286.s1, "p_485->g_286.s1", print_hash_value);
    transparent_crc(p_485->g_286.s2, "p_485->g_286.s2", print_hash_value);
    transparent_crc(p_485->g_286.s3, "p_485->g_286.s3", print_hash_value);
    transparent_crc(p_485->g_286.s4, "p_485->g_286.s4", print_hash_value);
    transparent_crc(p_485->g_286.s5, "p_485->g_286.s5", print_hash_value);
    transparent_crc(p_485->g_286.s6, "p_485->g_286.s6", print_hash_value);
    transparent_crc(p_485->g_286.s7, "p_485->g_286.s7", print_hash_value);
    transparent_crc(p_485->g_286.s8, "p_485->g_286.s8", print_hash_value);
    transparent_crc(p_485->g_286.s9, "p_485->g_286.s9", print_hash_value);
    transparent_crc(p_485->g_286.sa, "p_485->g_286.sa", print_hash_value);
    transparent_crc(p_485->g_286.sb, "p_485->g_286.sb", print_hash_value);
    transparent_crc(p_485->g_286.sc, "p_485->g_286.sc", print_hash_value);
    transparent_crc(p_485->g_286.sd, "p_485->g_286.sd", print_hash_value);
    transparent_crc(p_485->g_286.se, "p_485->g_286.se", print_hash_value);
    transparent_crc(p_485->g_286.sf, "p_485->g_286.sf", print_hash_value);
    transparent_crc(p_485->g_300, "p_485->g_300", print_hash_value);
    transparent_crc(p_485->g_434.x, "p_485->g_434.x", print_hash_value);
    transparent_crc(p_485->g_434.y, "p_485->g_434.y", print_hash_value);
    transparent_crc(p_485->g_455.f0, "p_485->g_455.f0", print_hash_value);
    transparent_crc(p_485->g_455.f1, "p_485->g_455.f1", print_hash_value);
    transparent_crc(p_485->g_455.f2, "p_485->g_455.f2", print_hash_value);
    transparent_crc(p_485->g_455.f3, "p_485->g_455.f3", print_hash_value);
    transparent_crc(p_485->g_455.f4, "p_485->g_455.f4", print_hash_value);
    transparent_crc(p_485->g_455.f5, "p_485->g_455.f5", print_hash_value);
    transparent_crc(p_485->g_455.f6, "p_485->g_455.f6", print_hash_value);
    transparent_crc(p_485->g_455.f7, "p_485->g_455.f7", print_hash_value);
    transparent_crc(p_485->g_455.f8, "p_485->g_455.f8", print_hash_value);
    transparent_crc(p_485->g_455.f9, "p_485->g_455.f9", print_hash_value);
    transparent_crc(p_485->g_466.s0, "p_485->g_466.s0", print_hash_value);
    transparent_crc(p_485->g_466.s1, "p_485->g_466.s1", print_hash_value);
    transparent_crc(p_485->g_466.s2, "p_485->g_466.s2", print_hash_value);
    transparent_crc(p_485->g_466.s3, "p_485->g_466.s3", print_hash_value);
    transparent_crc(p_485->g_466.s4, "p_485->g_466.s4", print_hash_value);
    transparent_crc(p_485->g_466.s5, "p_485->g_466.s5", print_hash_value);
    transparent_crc(p_485->g_466.s6, "p_485->g_466.s6", print_hash_value);
    transparent_crc(p_485->g_466.s7, "p_485->g_466.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_485->g_467[i][j].f0, "p_485->g_467[i][j].f0", print_hash_value);
            transparent_crc(p_485->g_467[i][j].f1, "p_485->g_467[i][j].f1", print_hash_value);
            transparent_crc(p_485->g_467[i][j].f2, "p_485->g_467[i][j].f2", print_hash_value);
            transparent_crc(p_485->g_467[i][j].f3, "p_485->g_467[i][j].f3", print_hash_value);
            transparent_crc(p_485->g_467[i][j].f4, "p_485->g_467[i][j].f4", print_hash_value);
            transparent_crc(p_485->g_467[i][j].f5, "p_485->g_467[i][j].f5", print_hash_value);
            transparent_crc(p_485->g_467[i][j].f6, "p_485->g_467[i][j].f6", print_hash_value);
            transparent_crc(p_485->g_467[i][j].f7, "p_485->g_467[i][j].f7", print_hash_value);
            transparent_crc(p_485->g_467[i][j].f8, "p_485->g_467[i][j].f8", print_hash_value);
            transparent_crc(p_485->g_467[i][j].f9, "p_485->g_467[i][j].f9", print_hash_value);

        }
    }
    transparent_crc(p_485->g_483.x, "p_485->g_483.x", print_hash_value);
    transparent_crc(p_485->g_483.y, "p_485->g_483.y", print_hash_value);
    transparent_crc(p_485->g_483.z, "p_485->g_483.z", print_hash_value);
    transparent_crc(p_485->g_483.w, "p_485->g_483.w", print_hash_value);
    transparent_crc(p_485->v_collective, "p_485->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 53; i++)
            transparent_crc(p_485->g_special_values[i + 53 * get_linear_group_id()], "p_485->g_special_values[i + 53 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_485->l_comm_values[get_linear_local_id()], "p_485->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_485->g_comm_values[get_linear_group_id() * 20 + get_linear_local_id()], "p_485->g_comm_values[get_linear_group_id() * 20 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
