// --atomics 83 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 55,33,1 -l 55,1,1
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

__constant uint32_t permutations[10][55] = {
{52,50,49,28,48,46,17,43,8,14,19,21,41,9,3,2,16,24,7,44,38,31,11,53,6,15,51,25,40,42,39,20,0,30,5,23,47,37,29,10,35,26,1,13,33,12,4,18,34,27,32,36,54,22,45}, // permutation 0
{45,7,17,25,13,53,4,37,26,11,16,6,54,3,19,27,43,38,35,42,33,39,48,12,30,28,8,15,40,31,18,41,36,51,0,22,44,2,9,24,29,50,32,14,10,52,46,47,21,23,20,34,49,5,1}, // permutation 1
{51,32,20,30,52,45,4,54,27,22,26,13,37,43,24,40,48,49,33,42,3,18,16,9,38,31,21,1,34,5,46,8,41,25,14,23,2,7,0,17,39,44,11,28,35,19,47,6,12,53,10,15,29,50,36}, // permutation 2
{51,12,17,37,25,41,1,10,19,23,16,0,38,27,44,29,5,31,13,46,40,18,3,45,14,48,20,22,4,9,43,35,50,15,49,39,53,32,33,28,11,2,30,54,52,36,6,42,34,47,26,8,24,7,21}, // permutation 3
{38,29,50,1,27,20,6,7,9,45,37,4,34,13,15,47,12,35,41,2,30,5,11,42,14,8,48,33,53,40,0,49,23,22,39,54,18,32,3,31,51,46,17,16,43,10,21,24,19,28,25,44,52,36,26}, // permutation 4
{10,2,51,53,46,15,35,31,40,30,17,36,32,33,42,9,21,24,7,5,11,47,50,52,39,26,41,25,19,12,34,54,28,45,0,23,4,20,44,43,8,27,1,14,18,16,13,6,38,22,37,29,49,3,48}, // permutation 5
{33,44,3,54,42,51,43,35,4,47,19,48,24,27,39,10,30,32,52,9,11,49,23,40,1,0,21,20,34,38,50,22,37,14,17,18,36,29,41,13,31,45,15,16,5,7,8,25,6,12,26,2,53,46,28}, // permutation 6
{19,43,42,34,5,37,47,6,27,15,48,38,12,1,25,4,28,40,54,23,36,31,14,39,17,2,0,30,49,41,33,16,7,51,45,11,46,29,22,3,10,53,20,24,26,8,35,44,9,52,50,13,18,21,32}, // permutation 7
{5,29,52,33,8,44,7,6,43,31,10,46,54,37,21,42,40,47,27,17,48,4,19,36,25,18,0,51,24,16,3,11,28,38,15,9,35,34,50,41,30,32,1,49,22,14,20,39,12,13,2,45,53,23,26}, // permutation 8
{2,9,29,38,33,49,25,42,45,14,26,20,3,44,30,5,37,34,53,15,1,8,24,22,21,28,32,27,13,47,12,54,43,7,48,18,4,52,36,51,6,17,31,19,10,50,16,11,41,0,46,35,23,40,39} // permutation 9
};

// Seed: 4164692184

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint8_t  f0;
   volatile uint64_t  f1;
   uint32_t  f2;
   volatile uint64_t  f3;
   int64_t  f4;
   volatile int32_t  f5;
   int32_t  f6;
   int64_t  f7;
   uint8_t  f8;
};

union U1 {
   volatile int32_t  f0;
};

struct S2 {
    volatile VECTOR(uint16_t, 8) g_47;
    uint8_t g_48;
    struct S0 g_49;
    VECTOR(uint8_t, 8) g_53;
    int32_t g_55;
    int32_t * volatile g_54[10][4][5];
    int32_t * volatile g_56;
    uint64_t g_100[5][4][9];
    union U1 g_113[4];
    VECTOR(int64_t, 8) g_119;
    VECTOR(int64_t, 2) g_120;
    VECTOR(uint32_t, 16) g_121;
    VECTOR(uint32_t, 4) g_127;
    VECTOR(int64_t, 16) g_128;
    VECTOR(int64_t, 2) g_129;
    VECTOR(int64_t, 8) g_132;
    VECTOR(int64_t, 8) g_133;
    int8_t g_143[7];
    int16_t g_145;
    int8_t g_148;
    int32_t g_151;
    uint64_t g_152;
    struct S0 *g_154;
    int32_t g_156;
    uint16_t g_161;
    int32_t * volatile g_189;
    int64_t *g_208;
    VECTOR(int16_t, 2) g_210;
    volatile struct S0 g_211;
    volatile VECTOR(int8_t, 8) g_215;
    volatile VECTOR(uint8_t, 16) g_218;
    int32_t * volatile g_226[7][10];
    int32_t * volatile g_227;
    volatile struct S0 g_271;
    volatile struct S0 * volatile g_272;
    uint32_t g_278;
    volatile VECTOR(uint16_t, 2) g_280;
    VECTOR(uint16_t, 8) g_290;
    int32_t *g_295;
    int32_t ** volatile g_294;
    int64_t **g_305;
    int32_t g_333[2][9][10];
    VECTOR(int32_t, 4) g_357;
    volatile VECTOR(int32_t, 2) g_360;
    VECTOR(int32_t, 8) g_362;
    volatile VECTOR(int32_t, 16) g_364;
    VECTOR(uint64_t, 16) g_370;
    int32_t * volatile g_377;
    union U1 *g_379;
    VECTOR(uint32_t, 8) g_392;
    volatile struct S0 g_432[1];
    volatile struct S0 g_433;
    uint8_t g_465;
    volatile VECTOR(int8_t, 8) g_476;
    union U1 g_507;
    volatile VECTOR(int32_t, 8) g_517;
    uint32_t *g_533;
    int32_t ** volatile g_544[4];
    int32_t ** volatile g_545;
    struct S0 g_560;
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
struct S0  func_1(struct S2 * p_561);
int16_t  func_10(uint32_t  p_11, uint32_t  p_12, int8_t  p_13, uint32_t  p_14, uint32_t  p_15, struct S2 * p_561);
uint8_t  func_21(int32_t  p_22, int16_t  p_23, uint32_t  p_24, uint32_t  p_25, uint16_t  p_26, struct S2 * p_561);
uint64_t  func_29(int64_t  p_30, int32_t  p_31, struct S2 * p_561);
int64_t  func_32(uint64_t  p_33, int32_t  p_34, int8_t  p_35, struct S2 * p_561);
int16_t  func_36(uint8_t  p_37, uint32_t  p_38, int64_t  p_39, uint64_t  p_40, struct S2 * p_561);
int8_t  func_43(uint64_t  p_44, struct S2 * p_561);
int32_t  func_57(int32_t  p_58, struct S2 * p_561);
struct S0  func_62(struct S0 * p_63, int32_t  p_64, struct S0 * p_65, uint32_t  p_66, struct S2 * p_561);
uint16_t  func_74(struct S0 * p_75, int64_t  p_76, struct S2 * p_561);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_561->g_comm_values p_561->g_47 p_561->g_48 p_561->g_49 permutations p_561->g_53 p_561->g_56 p_561->g_55 p_561->g_113 p_561->g_119 p_561->g_120 p_561->g_121 p_561->g_127 p_561->g_128 p_561->g_129 p_561->g_132 p_561->g_133 p_561->g_145 p_561->g_148 p_561->g_100 p_561->g_151 p_561->g_152 p_561->g_156 p_561->g_189 p_561->g_143 p_561->g_208 p_561->g_210 p_561->g_211 p_561->g_215 p_561->g_218 p_561->g_227 p_561->g_271 p_561->g_272 p_561->g_278 p_561->g_280 p_561->g_290 p_561->l_comm_values p_561->g_294 p_561->g_54 p_561->g_295 p_561->g_432.f5 p_561->g_433.f4 p_561->g_465 p_561->g_476 p_561->g_507 p_561->g_392 p_561->g_333 p_561->g_305 p_561->g_377 p_561->g_357 p_561->g_517 p_561->g_370 p_561->g_560
 * writes: p_561->g_48 p_561->g_49 p_561->g_55 p_561->g_121 p_561->g_143 p_561->g_145 p_561->g_148 p_561->g_151 p_561->g_152 p_561->g_154 p_561->g_156 p_561->g_161 p_561->g_119 p_561->g_133 p_561->g_208 p_561->g_211 p_561->l_comm_values p_561->g_295 p_561->g_305 p_561->g_533
 */
struct S0  func_1(struct S2 * p_561)
{ /* block id: 4 */
    VECTOR(uint16_t, 16) l_16 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x9B99L), 0x9B99L), 0x9B99L, 1UL, 0x9B99L, (VECTOR(uint16_t, 2))(1UL, 0x9B99L), (VECTOR(uint16_t, 2))(1UL, 0x9B99L), 1UL, 0x9B99L, 1UL, 0x9B99L);
    int16_t l_159 = 4L;
    uint16_t *l_160 = &p_561->g_161;
    VECTOR(int32_t, 4) l_162 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x417DDE3DL), 0x417DDE3DL);
    int32_t l_190[9];
    int8_t *l_516[6][5] = {{(void*)0,&p_561->g_143[0],(void*)0,(void*)0,&p_561->g_143[0]},{(void*)0,&p_561->g_143[0],(void*)0,(void*)0,&p_561->g_143[0]},{(void*)0,&p_561->g_143[0],(void*)0,(void*)0,&p_561->g_143[0]},{(void*)0,&p_561->g_143[0],(void*)0,(void*)0,&p_561->g_143[0]},{(void*)0,&p_561->g_143[0],(void*)0,(void*)0,&p_561->g_143[0]},{(void*)0,&p_561->g_143[0],(void*)0,(void*)0,&p_561->g_143[0]}};
    int64_t l_554 = 7L;
    uint32_t *l_555 = (void*)0;
    uint32_t *l_556 = (void*)0;
    uint32_t *l_557 = (void*)0;
    uint32_t *l_558 = &p_561->g_49.f2;
    int32_t l_559 = 1L;
    int i, j;
    for (i = 0; i < 9; i++)
        l_190[i] = 0x5819F3F1L;
    l_559 = (safe_sub_func_uint16_t_u_u((((*l_558) = ((p_561->g_comm_values[p_561->tid] >= (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((~func_10(l_16.s6, (((safe_lshift_func_int8_t_s_s((p_561->g_143[0] = (safe_lshift_func_int16_t_s_u((func_21(((safe_add_func_uint64_t_u_u(func_29((~func_32((l_16.sc ^ func_36((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_561->group_2_offset, get_group_id(2), 10), func_43((p_561->g_48 &= ((safe_rshift_func_uint16_t_u_s((l_16.sc ^ ((VECTOR(uint16_t, 2))(p_561->g_47.s55)).lo), l_16.s5)) , FAKE_DIVERGE(p_561->global_2_offset, get_global_id(2), 10))), p_561))), ((safe_mul_func_int16_t_s_s((((l_16.s1 >= ((*l_160) = l_159)) > 0L) ^ 1L), l_162.x)) != 0xD784363F8675844AL), l_16.s1, p_561->g_120.y, p_561)), l_190[4], p_561->g_128.s3, p_561)), p_561->g_132.s3, p_561), 0x0ABD7DF2FF8DBC54L)) && p_561->g_433.f4), l_190[4], p_561->g_127.z, p_561->g_465, l_190[4], p_561) || l_16.sc), 3))), l_162.z)) ^ l_162.x) , p_561->g_357.w), p_561->g_290.s0, p_561->g_278, l_16.se, p_561)), p_561->g_370.s4)), l_554)), 0x3F0FA971L))) && l_159)) , 65535UL), l_190[2]));
    return p_561->g_560;
}


/* ------------------------------------------ */
/* 
 * reads : p_561->g_517 p_561->g_370 p_561->g_227 p_561->g_55 p_561->g_295 p_561->g_151 p_561->g_133 p_561->g_152 p_561->g_294 p_561->g_156
 * writes: p_561->g_533 p_561->g_152 p_561->g_156
 */
int16_t  func_10(uint32_t  p_11, uint32_t  p_12, int8_t  p_13, uint32_t  p_14, uint32_t  p_15, struct S2 * p_561)
{ /* block id: 189 */
    uint32_t l_522 = 0x4A58FC44L;
    uint16_t *l_525 = (void*)0;
    uint16_t *l_526 = (void*)0;
    int32_t l_527 = (-1L);
    int32_t l_528 = (-3L);
    uint32_t *l_532 = (void*)0;
    uint32_t **l_531[5][1] = {{&l_532},{&l_532},{&l_532},{&l_532},{&l_532}};
    uint16_t **l_538 = &l_526;
    struct S0 *l_552 = &p_561->g_49;
    int i, j;
    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(0x7E0AD13AL, 0x00C889C0L)).xxyxxyyy, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_561->g_517.s5422736621335025)).lo)).hi)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_522, ((safe_rshift_func_uint16_t_u_u((l_527 |= ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(1UL, 1UL)))).hi), ((((p_561->g_370.s4 | (*p_561->g_227)) > (l_528 = 0x0C52L)) & p_14) > (safe_div_func_int16_t_s_s(((p_561->g_533 = p_561->g_295) != ((((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((0xBBBF4D98B74C5F10L != (((*l_538) = l_526) == ((((VECTOR(uint64_t, 4))(0x14AFC9CE6CEC0CD6L, ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(0UL, ((VECTOR(uint64_t, 2))(8UL)), 1UL)).lo, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(1UL))))), 18446744073709551615UL)).y > l_522) , (void*)0))) , p_14), l_522)), p_15)) , p_561->g_151) , p_561->g_151) , &p_12)), p_14))))) < 1UL))), p_561->g_133.s0)), 0x5421C8B2L, 0x000A340BL, 0x5CCFF853L)), l_522, 0x6673AB01L, 0x24F1807AL, 0x004643BFL)).s55)).yyyxxxxx)).even, ((VECTOR(int32_t, 4))(0L))))).yyzzxzwz))).s0060574314236727)).sbe)).yxyxxyyxxxyxyyyx)).sb)
    { /* block id: 194 */
        int32_t *l_547 = &l_527;
        for (p_561->g_152 = 0; (p_561->g_152 >= 35); p_561->g_152 = safe_add_func_int16_t_s_s(p_561->g_152, 8))
        { /* block id: 197 */
            for (p_13 = 4; (p_13 != 27); p_13++)
            { /* block id: 200 */
                int32_t **l_543 = (void*)0;
                int32_t **l_546 = (void*)0;
                l_547 = (*p_561->g_294);
                (*l_547) |= 3L;
            }
        }
        (*p_561->g_295) |= (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_527, 7)), p_13));
    }
    else
    { /* block id: 206 */
        struct S0 **l_553[8] = {(void*)0,&l_552,(void*)0,(void*)0,&l_552,(void*)0,(void*)0,&l_552};
        int i;
        l_552 = l_552;
    }
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_561->g_49.f2 p_561->g_113 p_561->g_145 p_561->g_148 p_561->g_49.f8 p_561->g_100 p_561->g_53 p_561->g_129 p_561->g_55 p_561->g_49 p_561->g_476 p_561->g_295 p_561->g_156 p_561->g_152 p_561->g_128 p_561->g_507 p_561->g_392 p_561->g_333 p_561->g_290 p_561->g_305 p_561->g_208 p_561->g_272 p_561->g_377 p_561->g_151 p_561->g_189
 * writes: p_561->g_49.f2 p_561->g_145 p_561->g_148 p_561->g_55 p_561->g_49 p_561->g_156 p_561->g_152 p_561->g_211
 */
uint8_t  func_21(int32_t  p_22, int16_t  p_23, uint32_t  p_24, uint32_t  p_25, uint16_t  p_26, struct S2 * p_561)
{ /* block id: 169 */
    VECTOR(uint8_t, 8) l_470 = (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 252UL), 252UL), 252UL, 247UL, 252UL);
    int32_t *l_471[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_472[3][5][4] = {{{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)}},{{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)}},{{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)},{0x40FC5A72L,0x40FC5A72L,0x1918BD50L,(-8L)}}};
    struct S0 *l_473 = &p_561->g_49;
    int32_t *l_477 = &p_561->g_55;
    int32_t *l_478 = &p_561->g_55;
    int32_t *l_479 = &p_561->g_156;
    int32_t *l_480 = &p_561->g_151;
    int32_t *l_481 = &p_561->g_151;
    int32_t *l_482 = &p_561->g_55;
    int32_t *l_483 = (void*)0;
    int32_t *l_484 = (void*)0;
    int32_t *l_485 = (void*)0;
    int32_t *l_486 = (void*)0;
    int32_t *l_487 = &p_561->g_156;
    int32_t *l_488 = &l_472[1][2][3];
    int32_t *l_489 = &p_561->g_151;
    int32_t *l_490 = &l_472[0][3][0];
    int32_t *l_491[5] = {&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55};
    VECTOR(int16_t, 8) l_492 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    uint32_t l_493 = 1UL;
    uint8_t l_503 = 0x51L;
    VECTOR(uint16_t, 2) l_505 = (VECTOR(uint16_t, 2))(0x175BL, 65530UL);
    int i, j, k;
    (*l_473) = func_62(&p_561->g_49, (l_472[1][2][3] ^= (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_470.s7522)).z, GROUP_DIVERGE(1, 1))), p_24))), l_473, l_470.s4, p_561);
    (*p_561->g_295) &= (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(p_561->g_476.s0730774160567377)).s295f, ((VECTOR(int8_t, 2))(0x31L, 0x42L)).xyxx))).w, 4));
    l_493++;
    for (p_561->g_156 = 10; (p_561->g_156 <= (-22)); p_561->g_156--)
    { /* block id: 176 */
        uint32_t l_515 = 0x37D0E40AL;
        for (p_561->g_152 = 28; (p_561->g_152 <= 19); --p_561->g_152)
        { /* block id: 179 */
            uint8_t l_500 = 0x8BL;
            int32_t l_504 = 0L;
            VECTOR(uint16_t, 8) l_506 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 1UL), 1UL), 1UL, 65534UL, 1UL);
            VECTOR(uint8_t, 8) l_512 = (VECTOR(uint8_t, 8))(0x88L, (VECTOR(uint8_t, 4))(0x88L, (VECTOR(uint8_t, 2))(0x88L, 7UL), 7UL), 7UL, 0x88L, 7UL);
            int i;
            l_500--;
            (*l_488) ^= (((l_500 != ((p_23 < l_503) <= l_504)) , p_561->g_128.sa) >= (((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(l_505.yyyx)).wzxzyyxxxzyzyzxz, ((VECTOR(uint16_t, 8))(l_506.s23744712)).s4014164440634552))).s3 , (p_561->g_507 , (0UL >= (((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 4))(l_512.s2246)), ((VECTOR(uint8_t, 8))((((safe_sub_func_uint8_t_u_u((p_561->g_392.s0 != p_561->g_333[0][4][3]), GROUP_DIVERGE(2, 1))) && p_22) , p_561->g_290.s4), ((VECTOR(uint8_t, 4))(255UL)), l_512.s3, 1UL, 0xF4L)).lo))).odd)))))).yxxyxyxxyyxxxxxy)).sdabd)).w , (void*)0) != (*p_561->g_305)) , p_23), l_515)), 3)) & 0x74F8L) , p_23)))));
        }
        (*p_561->g_272) = (*l_473);
        if ((*p_561->g_377))
            break;
        if ((*p_561->g_189))
            continue;
    }
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_561->g_49.f2 p_561->g_113 p_561->g_145 p_561->g_148 p_561->g_49.f8 p_561->g_100 p_561->g_53 p_561->g_129 p_561->g_55 p_561->g_49 p_561->g_54 p_561->g_121 p_561->g_295 p_561->g_156 p_561->g_432.f5 p_561->g_133
 * writes: p_561->g_49.f2 p_561->g_145 p_561->g_148 p_561->g_55 p_561->g_305 p_561->g_156
 */
uint64_t  func_29(int64_t  p_30, int32_t  p_31, struct S2 * p_561)
{ /* block id: 94 */
    struct S0 *l_298[7][7][2];
    struct S0 **l_299 = &l_298[3][4][1];
    int32_t l_300 = 0x6E7423A7L;
    int64_t **l_301 = &p_561->g_208;
    int64_t ***l_302 = &l_301;
    int64_t **l_303 = &p_561->g_208;
    int64_t ***l_304[8][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    VECTOR(uint64_t, 2) l_339 = (VECTOR(uint64_t, 2))(0xCCF9499636517044L, 5UL);
    int16_t *l_359 = (void*)0;
    VECTOR(int32_t, 16) l_363 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1EB4D9CCL), 0x1EB4D9CCL), 0x1EB4D9CCL, (-1L), 0x1EB4D9CCL, (VECTOR(int32_t, 2))((-1L), 0x1EB4D9CCL), (VECTOR(int32_t, 2))((-1L), 0x1EB4D9CCL), (-1L), 0x1EB4D9CCL, (-1L), 0x1EB4D9CCL);
    union U1 *l_381 = &p_561->g_113[1];
    int32_t l_438 = (-8L);
    int32_t **l_456 = &p_561->g_295;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
                l_298[i][j][k] = &p_561->g_49;
        }
    }
    if ((safe_mul_func_uint8_t_u_u(4UL, (((func_62(((*l_299) = l_298[5][6][0]), l_300, &p_561->g_49, p_31, p_561) , ((*l_302) = l_301)) == (p_561->g_305 = l_303)) <= 8L))))
    { /* block id: 98 */
        int32_t l_332 = (-2L);
        int32_t l_341 = (-1L);
        int64_t **l_354 = &p_561->g_208;
        struct S0 *l_355 = &p_561->g_49;
        VECTOR(int32_t, 4) l_356 = (VECTOR(int32_t, 4))(0x40659B9EL, (VECTOR(int32_t, 2))(0x40659B9EL, 0x60DD4A89L), 0x60DD4A89L);
        union U1 *l_378 = &p_561->g_113[3];
        union U1 *l_380 = &p_561->g_113[3];
        VECTOR(int32_t, 2) l_385 = (VECTOR(int32_t, 2))(0x60C44B3CL, 0x5E784824L);
        VECTOR(int32_t, 16) l_386 = (VECTOR(int32_t, 16))(0x64C064EBL, (VECTOR(int32_t, 4))(0x64C064EBL, (VECTOR(int32_t, 2))(0x64C064EBL, 0x534B82F9L), 0x534B82F9L), 0x534B82F9L, 0x64C064EBL, 0x534B82F9L, (VECTOR(int32_t, 2))(0x64C064EBL, 0x534B82F9L), (VECTOR(int32_t, 2))(0x64C064EBL, 0x534B82F9L), 0x64C064EBL, 0x534B82F9L, 0x64C064EBL, 0x534B82F9L);
        int32_t l_407 = 0x3BA95564L;
        int i;
        for (p_561->g_49.f2 = 0; (p_561->g_49.f2 != 57); p_561->g_49.f2++)
        { /* block id: 101 */
            struct S0 *l_318 = (void*)0;
            uint32_t *l_321 = (void*)0;
            uint32_t *l_322 = (void*)0;
            uint32_t *l_323 = (void*)0;
            uint32_t *l_324 = (void*)0;
            uint32_t *l_325[1][10][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int8_t *l_326 = (void*)0;
            int64_t *l_331 = (void*)0;
            uint8_t *l_334[10];
            int32_t l_335 = 0x2EB1C24BL;
            int64_t ***l_336 = &l_301;
            uint64_t *l_382 = &p_561->g_100[4][3][4];
            VECTOR(int64_t, 16) l_389 = (VECTOR(int64_t, 16))(0x3B66DDDD8ED80953L, (VECTOR(int64_t, 4))(0x3B66DDDD8ED80953L, (VECTOR(int64_t, 2))(0x3B66DDDD8ED80953L, 0x2603A4785DC7832AL), 0x2603A4785DC7832AL), 0x2603A4785DC7832AL, 0x3B66DDDD8ED80953L, 0x2603A4785DC7832AL, (VECTOR(int64_t, 2))(0x3B66DDDD8ED80953L, 0x2603A4785DC7832AL), (VECTOR(int64_t, 2))(0x3B66DDDD8ED80953L, 0x2603A4785DC7832AL), 0x3B66DDDD8ED80953L, 0x2603A4785DC7832AL, 0x3B66DDDD8ED80953L, 0x2603A4785DC7832AL);
            uint64_t *l_397 = &p_561->g_152;
            int32_t l_404[9] = {2L,0L,2L,2L,0L,2L,2L,0L,2L};
            uint8_t l_429 = 255UL;
            int32_t **l_455 = &p_561->g_295;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_334[i] = &p_561->g_49.f8;
            if ((atomic_inc(&p_561->l_atomic_input[29]) == 1))
            { /* block id: 103 */
                uint32_t l_308[1];
                int16_t l_309 = 0L;
                int i;
                for (i = 0; i < 1; i++)
                    l_308[i] = 1UL;
                l_309 &= l_308[0];
                unsigned int result = 0;
                int l_308_i0;
                for (l_308_i0 = 0; l_308_i0 < 1; l_308_i0++) {
                    result += l_308[l_308_i0];
                }
                result += l_309;
                atomic_add(&p_561->l_special_values[29], result);
            }
            else
            { /* block id: 105 */
                (1 + 1);
            }
        }
        (**l_456) = (((safe_lshift_func_int16_t_s_u((((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(((p_31 > (p_31 >= ((0x07L >= (((void*)0 != p_561->g_54[8][0][4]) , ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xF9L, 0x1BL)).yxxxxyyyxyxxyyyy)).s1)) != 0x4DL))) && (safe_sub_func_int64_t_s_s(0x4EBCFBE019ABBBE2L, (p_561->g_121.s0 < p_30)))), (-8L))), 5)) , 0L) == 3L) , &l_341) == (void*)0), 7)) || (**l_456)) & p_31);
    }
    else
    { /* block id: 165 */
        return p_561->g_432[0].f5;
    }
    return p_561->g_133.s4;
}


/* ------------------------------------------ */
/* 
 * reads : p_561->g_143 p_561->g_208 p_561->g_210 p_561->g_211 p_561->g_48 p_561->g_156 p_561->g_215 p_561->g_218 p_561->g_151 p_561->g_49.f7 p_561->g_49.f8 p_561->g_56 p_561->g_55 p_561->g_227 p_561->g_271 p_561->g_272 p_561->g_49.f5 p_561->g_278 p_561->g_280 p_561->g_290 p_561->g_100 p_561->g_127 p_561->g_132 p_561->l_comm_values p_561->g_294
 * writes: p_561->g_208 p_561->g_156 p_561->g_49.f8 p_561->g_151 p_561->g_49.f7 p_561->g_55 p_561->g_211 p_561->l_comm_values p_561->g_295
 */
int64_t  func_32(uint64_t  p_33, int32_t  p_34, int8_t  p_35, struct S2 * p_561)
{ /* block id: 61 */
    int8_t l_193 = 0x5DL;
    VECTOR(uint8_t, 16) l_198 = (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x2AL), 0x2AL), 0x2AL, 2UL, 0x2AL, (VECTOR(uint8_t, 2))(2UL, 0x2AL), (VECTOR(uint8_t, 2))(2UL, 0x2AL), 2UL, 0x2AL, 2UL, 0x2AL);
    int8_t *l_200 = &p_561->g_143[0];
    int8_t **l_199 = &l_200;
    int8_t *l_201 = &p_561->g_143[0];
    uint8_t l_204 = 0xC9L;
    int64_t *l_205 = (void*)0;
    int64_t **l_206 = (void*)0;
    int64_t **l_207 = &l_205;
    VECTOR(int32_t, 4) l_209 = (VECTOR(int32_t, 4))(0x496BBBC2L, (VECTOR(int32_t, 2))(0x496BBBC2L, (-1L)), (-1L));
    int32_t *l_212 = &p_561->g_156;
    VECTOR(uint8_t, 16) l_213 = (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x9DL), 0x9DL), 0x9DL, 7UL, 0x9DL, (VECTOR(uint8_t, 2))(7UL, 0x9DL), (VECTOR(uint8_t, 2))(7UL, 0x9DL), 7UL, 0x9DL, 7UL, 0x9DL);
    VECTOR(int8_t, 16) l_214 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int8_t, 2))(0L, (-6L)), (VECTOR(int8_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
    int8_t l_262 = 0L;
    int8_t l_265[2][7] = {{0x2EL,0x2EL,0x2EL,0x2EL,0x2EL,0x2EL,0x2EL},{0x2EL,0x2EL,0x2EL,0x2EL,0x2EL,0x2EL,0x2EL}};
    int i, j;
    if ((l_193 < (((((FAKE_DIVERGE(p_561->global_0_offset, get_global_id(0), 10) != (0x6D3AB3DBL ^ ((*l_212) = (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(9L, 0x6F82L)))), ((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_198.sfe84fe09bb11ae36)).hi)).s6 != (((((*l_199) = &p_35) == (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 0x2C63C90DL)).yxyx)).yxwzzwxwwyzwywzx)).s3 , l_201)) , (((VECTOR(uint64_t, 2))(0x72F92A1E79B97212L, 9UL)).lo >= ((safe_div_func_int16_t_s_s(p_561->g_143[5], l_204)) > (l_209.y = (((*l_207) = l_205) == (p_561->g_208 = p_561->g_208)))))) == ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_561->g_210.xx)).yyyyxxyx)).s1277356131125054, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((p_561->g_211 , l_193), 6L, (-6L), 0x51L)), (-2L), ((VECTOR(int8_t, 4))(0x7DL)), 0x22L, l_198.s1, 0x6CL, ((VECTOR(int8_t, 2))((-4L))), 0x46L, 1L)), ((VECTOR(uint8_t, 16))(0x71L))))).sf8)).yxyyyyxxxyyyyyyx, ((VECTOR(int16_t, 16))(0L))))).s0)) >= p_33), 6L, ((VECTOR(int16_t, 4))(2L)))).odd)), ((VECTOR(int16_t, 2))(0x1F4AL)), ((VECTOR(int16_t, 8))(0x538FL)), 7L, 0x6CDAL)), ((VECTOR(int16_t, 16))(0x180FL)), ((VECTOR(int16_t, 16))(0L))))).even, (int16_t)(-1L)))).s2, l_198.s2))))) > p_561->g_210.y) >= p_34) , (-8L)) >= p_561->g_48)))
    { /* block id: 67 */
        uint8_t *l_216 = &p_561->g_49.f8;
        int32_t **l_217 = &l_212;
        int32_t *l_219 = &p_561->g_151;
        (*l_219) &= ((*l_212) > ((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(l_213.sbf)).yxyyxyxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(0x99L, 0x34L)).yxxxxyyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((*l_216) = ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_214.s5e14e592)).s11)).xyyx, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(p_561->g_215.s40162005)).s30, (int8_t)p_35))).yxxy))).wwxxzxxw)))).s0), (l_217 == (void*)0), 0xDBL, 0xFEL)).wyzxzwwxxwxwwyzx)).odd))), ((VECTOR(uint8_t, 4))(p_561->g_218.sd277)).zxwwyyyx))).lo)).zyyywxyw))).s2);
    }
    else
    { /* block id: 70 */
        int16_t l_234 = 1L;
        int32_t l_238[8][3][4] = {{{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL}},{{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL}},{{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL}},{{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL}},{{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL}},{{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL}},{{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL}},{{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL},{5L,0x7E824BA8L,0x00DC1767L,0x330DE8FBL}}};
        VECTOR(int64_t, 4) l_240 = (VECTOR(int64_t, 4))(0x3CA4FFCF75B379C0L, (VECTOR(int64_t, 2))(0x3CA4FFCF75B379C0L, 0x54CAF07905F4BA04L), 0x54CAF07905F4BA04L);
        VECTOR(uint16_t, 2) l_275 = (VECTOR(uint16_t, 2))(0x53ECL, 1UL);
        VECTOR(uint16_t, 8) l_279 = (VECTOR(uint16_t, 8))(0x9D94L, (VECTOR(uint16_t, 4))(0x9D94L, (VECTOR(uint16_t, 2))(0x9D94L, 65529UL), 65529UL), 65529UL, 0x9D94L, 65529UL);
        VECTOR(uint16_t, 4) l_281 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65529UL), 65529UL);
        uint32_t *l_291[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_292 = 0x6850AB19L;
        int32_t **l_293 = &l_212;
        int i, j, k;
        for (p_561->g_49.f7 = 0; (p_561->g_49.f7 < (-4)); --p_561->g_49.f7)
        { /* block id: 73 */
            int32_t l_235 = (-1L);
            int32_t l_239 = 0x738F403BL;
            int32_t l_243 = 0x53A083E5L;
            int32_t l_244 = 4L;
            int32_t l_245 = (-10L);
            int32_t l_246 = (-1L);
            int32_t l_248 = (-10L);
            int32_t l_249 = (-5L);
            int32_t l_250 = (-7L);
            int8_t l_254[5][9] = {{0x09L,0x55L,0x21L,(-2L),0x21L,0x55L,0x09L,4L,0x32L},{0x09L,0x55L,0x21L,(-2L),0x21L,0x55L,0x09L,4L,0x32L},{0x09L,0x55L,0x21L,(-2L),0x21L,0x55L,0x09L,4L,0x32L},{0x09L,0x55L,0x21L,(-2L),0x21L,0x55L,0x09L,4L,0x32L},{0x09L,0x55L,0x21L,(-2L),0x21L,0x55L,0x09L,4L,0x32L}};
            int32_t l_263 = 0x36D85FC0L;
            int32_t l_264 = 9L;
            int32_t l_266 = 0x1D80E396L;
            int32_t l_267 = 0x6B540D96L;
            VECTOR(uint64_t, 8) l_268 = (VECTOR(uint64_t, 8))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0xF136F0ECDB3315A4L), 0xF136F0ECDB3315A4L), 0xF136F0ECDB3315A4L, 18446744073709551610UL, 0xF136F0ECDB3315A4L);
            int i, j;
            for (p_561->g_49.f8 = (-5); (p_561->g_49.f8 == 33); p_561->g_49.f8 = safe_add_func_int16_t_s_s(p_561->g_49.f8, 4))
            { /* block id: 76 */
                int32_t l_236 = (-10L);
                int32_t l_237 = 0x24244425L;
                int32_t l_241 = (-5L);
                VECTOR(int32_t, 16) l_242 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                int64_t l_247 = (-10L);
                uint16_t l_251 = 1UL;
                int32_t *l_255 = &l_248;
                int32_t *l_256 = &p_561->g_55;
                int32_t *l_257 = &l_236;
                int32_t *l_258 = &l_238[3][0][0];
                int32_t *l_259 = (void*)0;
                int32_t *l_260 = &l_238[3][0][0];
                int32_t *l_261[6][2][4] = {{{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236},{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236}},{{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236},{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236}},{{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236},{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236}},{{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236},{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236}},{{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236},{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236}},{{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236},{&p_561->g_151,&l_249,&l_238[3][0][0],&l_236}}};
                int i, j, k;
                for (p_561->g_156 = (-19); (p_561->g_156 <= (-5)); p_561->g_156++)
                { /* block id: 79 */
                    int32_t *l_228 = &p_561->g_151;
                    int32_t *l_229 = &p_561->g_55;
                    int32_t *l_230 = &p_561->g_151;
                    int32_t *l_231 = &p_561->g_151;
                    int32_t *l_232 = (void*)0;
                    int32_t *l_233[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_233[i] = &p_561->g_55;
                    (*p_561->g_227) = (*p_561->g_56);
                    ++l_251;
                }
                ++l_268.s3;
            }
        }
        (*p_561->g_272) = p_561->g_271;
        (*l_293) = ((p_561->l_comm_values[(safe_mod_func_uint32_t_u_u(p_561->tid, 55))] &= (+(l_292 ^= (GROUP_DIVERGE(1, 1) | (((l_238[7][2][2] = ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_275.xy)), 0x1FDAL, 0x3C6BL)), 7UL, p_33, 0x8AC9L, 0xC771L)).s03, ((VECTOR(uint16_t, 8))(((safe_mul_func_uint16_t_u_u(p_561->g_49.f5, p_561->g_278)) != (*l_212)), ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0x14DFL, ((VECTOR(uint16_t, 2))(0x2C75L, 0x53CFL)), l_234, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_279.s1653)).xyxywwwy)), ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(p_561->g_280.xyyx)), ((VECTOR(uint16_t, 4))(l_281.yywx))))))).s02)).yxyy, (uint16_t)p_34, (uint16_t)(((((safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((*l_212), ((safe_rshift_func_uint16_t_u_u(p_561->g_211.f8, 8)) > (safe_mul_func_uint8_t_u_u((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_561->g_290.s3400)).wwzwwyyxzzxzzywy)).s2 , p_561->g_100[4][3][4]), 8L))))) == FAKE_DIVERGE(p_561->group_1_offset, get_group_id(1), 10)), FAKE_DIVERGE(p_561->global_2_offset, get_global_id(2), 10))) , p_561->g_210.y) , &l_238[3][0][0]) == &p_561->g_156) <= p_33)))).w, 0x3AD0L, 1UL, ((VECTOR(uint16_t, 2))(1UL)), 2UL, 65533UL)).s34))), ((VECTOR(uint16_t, 2))(4UL)), ((VECTOR(uint16_t, 2))(0xE179L))))).xyxx)).x, l_279.s7)) <= 0x0CB603B0L)) > p_561->g_127.z) | p_561->g_132.s0))))) , (void*)0);
    }
    (*p_561->g_294) = &p_561->g_156;
    return p_561->g_143[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_561->g_120 p_561->g_151 p_561->g_152 p_561->g_49.f8 p_561->g_156 p_561->g_49.f2 p_561->g_119 p_561->g_189
 * writes: p_561->g_145 p_561->g_161 p_561->g_119 p_561->g_156 p_561->g_133 p_561->g_151
 */
int16_t  func_36(uint8_t  p_37, uint32_t  p_38, int64_t  p_39, uint64_t  p_40, struct S2 * p_561)
{ /* block id: 53 */
    int64_t l_169 = (-1L);
    int16_t *l_176 = (void*)0;
    int16_t *l_177 = &p_561->g_145;
    int32_t *l_183 = &p_561->g_156;
    int32_t **l_182 = &l_183;
    int64_t l_184 = 4L;
    uint16_t *l_185 = &p_561->g_161;
    int64_t *l_186 = (void*)0;
    int64_t *l_187 = (void*)0;
    int64_t *l_188[4][9] = {{&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184},{&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184},{&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184},{&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184,&l_184}};
    int i, j;
    (*p_561->g_189) = (254UL ^ (p_561->g_120.x | ((p_561->g_133.s6 = ((*l_183) = (p_561->g_119.s6 &= ((safe_mod_func_int8_t_s_s((p_561->g_151 , (safe_sub_func_uint64_t_u_u(0x39974A84839B6CC7L, (((safe_div_func_int32_t_s_s((((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((l_169 > (safe_sub_func_uint16_t_u_u(((*l_185) = ((safe_add_func_uint64_t_u_u((((safe_mod_func_uint8_t_u_u((((*l_177) = p_561->g_152) != p_561->g_49.f8), (safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((void*)0 != l_182), 0x07AC00EF30843EA2L)) > 0x565C9793804D9622L), p_37)))) ^ l_184) | (-1L)), 0UL)) | (*l_183))), p_561->g_49.f2))) || GROUP_DIVERGE(1, 1)), 1L, ((VECTOR(int8_t, 2))(3L)), 0L, ((VECTOR(int8_t, 2))(1L)), 0x37L)).s4506700622740657, ((VECTOR(int8_t, 16))(0L)), ((VECTOR(int8_t, 16))((-6L)))))).odd))).hi, ((VECTOR(int8_t, 4))(0x38L))))).x == 1UL), 0xD59750AAL)) & 0xFEL) | 0UL)))), (**l_182))) == (**l_182))))) < p_561->g_152)));
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_561->g_49 permutations p_561->g_53 p_561->g_56 p_561->g_47 p_561->g_55 p_561->g_113 p_561->g_119 p_561->g_120 p_561->g_121 p_561->g_127 p_561->g_128 p_561->g_129 p_561->g_132 p_561->g_133 p_561->g_145 p_561->g_148 p_561->g_100 p_561->g_151 p_561->g_152 p_561->g_156
 * writes: p_561->g_49 p_561->g_55 p_561->g_121 p_561->g_143 p_561->g_145 p_561->g_148 p_561->g_151 p_561->g_152 p_561->g_154 p_561->g_156
 */
int8_t  func_43(uint64_t  p_44, struct S2 * p_561)
{ /* block id: 6 */
    struct S0 *l_50 = &p_561->g_49;
    int32_t *l_155 = &p_561->g_156;
    int i, j;
    (*l_50) = p_561->g_49;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_561->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[(safe_mod_func_uint32_t_u_u(p_44, 10))][(safe_mod_func_uint32_t_u_u(p_561->tid, 55))]));
    (*p_561->g_56) = (safe_sub_func_int32_t_s_s((permutations[(safe_mod_func_uint32_t_u_u(p_44, 10))][(safe_mod_func_uint32_t_u_u(p_561->tid, 55))] , (((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(p_561->g_53.s55145601))))).s4 > p_44)), (p_44 , 0x9EFD9132L)));
    (*l_155) ^= func_57(p_561->g_47.s0, p_561);
    return p_44;
}


/* ------------------------------------------ */
/* 
 * reads : p_561->g_49 p_561->g_55 p_561->g_47 p_561->g_113 p_561->g_119 p_561->g_120 p_561->g_121 p_561->g_127 p_561->g_128 p_561->g_129 p_561->g_132 p_561->g_133 p_561->g_145 p_561->g_148 p_561->g_100 p_561->g_53 p_561->g_56 p_561->g_151 p_561->g_152
 * writes: p_561->g_49 p_561->g_55 p_561->g_121 p_561->g_143 p_561->g_145 p_561->g_148 p_561->g_151 p_561->g_152 p_561->g_154
 */
int32_t  func_57(int32_t  p_58, struct S2 * p_561)
{ /* block id: 12 */
    struct S0 *l_67[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 *l_77 = &p_561->g_49;
    VECTOR(int32_t, 16) l_78 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0880ABB0L), 0x0880ABB0L), 0x0880ABB0L, 1L, 0x0880ABB0L, (VECTOR(int32_t, 2))(1L, 0x0880ABB0L), (VECTOR(int32_t, 2))(1L, 0x0880ABB0L), 1L, 0x0880ABB0L, 1L, 0x0880ABB0L);
    int32_t l_101 = 0x7D3A0BC1L;
    int32_t *l_150[8][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55},{(void*)0,(void*)0,(void*)0,(void*)0,&p_561->g_55}}};
    int32_t **l_153 = (void*)0;
    int i, j, k;
    for (p_58 = (-6); (p_58 <= 29); p_58++)
    { /* block id: 15 */
        struct S0 *l_61 = &p_561->g_49;
        uint64_t *l_99[1][8][5] = {{{&p_561->g_100[3][2][8],&p_561->g_100[4][1][3],&p_561->g_100[2][0][5],&p_561->g_100[4][1][3],&p_561->g_100[3][2][8]},{&p_561->g_100[3][2][8],&p_561->g_100[4][1][3],&p_561->g_100[2][0][5],&p_561->g_100[4][1][3],&p_561->g_100[3][2][8]},{&p_561->g_100[3][2][8],&p_561->g_100[4][1][3],&p_561->g_100[2][0][5],&p_561->g_100[4][1][3],&p_561->g_100[3][2][8]},{&p_561->g_100[3][2][8],&p_561->g_100[4][1][3],&p_561->g_100[2][0][5],&p_561->g_100[4][1][3],&p_561->g_100[3][2][8]},{&p_561->g_100[3][2][8],&p_561->g_100[4][1][3],&p_561->g_100[2][0][5],&p_561->g_100[4][1][3],&p_561->g_100[3][2][8]},{&p_561->g_100[3][2][8],&p_561->g_100[4][1][3],&p_561->g_100[2][0][5],&p_561->g_100[4][1][3],&p_561->g_100[3][2][8]},{&p_561->g_100[3][2][8],&p_561->g_100[4][1][3],&p_561->g_100[2][0][5],&p_561->g_100[4][1][3],&p_561->g_100[3][2][8]},{&p_561->g_100[3][2][8],&p_561->g_100[4][1][3],&p_561->g_100[2][0][5],&p_561->g_100[4][1][3],&p_561->g_100[3][2][8]}}};
        uint64_t l_102 = 0x4A7E502840ACBBF4L;
        int i, j, k;
        (*l_61) = p_561->g_49;
        (*l_61) = func_62(l_67[1], (((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(255UL, (safe_sub_func_uint16_t_u_u(func_74(l_77, l_78.s0, p_561), 3UL)))), (++l_102))) & (p_561->g_49.f8 > p_58)) | ((p_58 , p_561->g_49.f7) , 0UL)), l_77, l_78.s1, p_561);
    }
    p_561->g_152 |= (p_561->g_151 ^= ((*p_561->g_56) = l_101));
    l_150[4][1][2] = (void*)0;
    p_561->g_154 = l_67[1];
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_561->g_49.f2 p_561->g_113 p_561->g_119 p_561->g_120 p_561->g_121 p_561->g_127 p_561->g_128 p_561->g_129 p_561->g_132 p_561->g_133 p_561->g_145 p_561->g_148 p_561->g_49.f8 p_561->g_100 p_561->g_53 p_561->g_55 p_561->g_49
 * writes: p_561->g_49.f2 p_561->g_121 p_561->g_143 p_561->g_145 p_561->g_148 p_561->g_55
 */
struct S0  func_62(struct S0 * p_63, int32_t  p_64, struct S0 * p_65, uint32_t  p_66, struct S2 * p_561)
{ /* block id: 34 */
    uint32_t *l_107 = (void*)0;
    uint32_t *l_108 = &p_561->g_49.f2;
    uint64_t *l_114 = &p_561->g_100[4][3][4];
    int32_t l_122 = 0x08B2AD57L;
    uint32_t *l_123 = (void*)0;
    uint32_t *l_124 = (void*)0;
    uint32_t *l_125 = (void*)0;
    uint32_t *l_126 = (void*)0;
    VECTOR(int64_t, 4) l_130 = (VECTOR(int64_t, 4))(0x3DA66330F89493EAL, (VECTOR(int64_t, 2))(0x3DA66330F89493EAL, 0x2A9FDAC8820D8B5BL), 0x2A9FDAC8820D8B5BL);
    VECTOR(int64_t, 16) l_131 = (VECTOR(int64_t, 16))(0x4CD6D71EDEFA84F3L, (VECTOR(int64_t, 4))(0x4CD6D71EDEFA84F3L, (VECTOR(int64_t, 2))(0x4CD6D71EDEFA84F3L, 0x0B211735A46787CDL), 0x0B211735A46787CDL), 0x0B211735A46787CDL, 0x4CD6D71EDEFA84F3L, 0x0B211735A46787CDL, (VECTOR(int64_t, 2))(0x4CD6D71EDEFA84F3L, 0x0B211735A46787CDL), (VECTOR(int64_t, 2))(0x4CD6D71EDEFA84F3L, 0x0B211735A46787CDL), 0x4CD6D71EDEFA84F3L, 0x0B211735A46787CDL, 0x4CD6D71EDEFA84F3L, 0x0B211735A46787CDL);
    int8_t *l_142 = &p_561->g_143[0];
    int16_t *l_144[1][7] = {{&p_561->g_145,&p_561->g_145,&p_561->g_145,&p_561->g_145,&p_561->g_145,&p_561->g_145,&p_561->g_145}};
    int8_t *l_146 = (void*)0;
    int8_t *l_147 = &p_561->g_148;
    int32_t *l_149 = &p_561->g_55;
    int i, j;
    (*l_149) |= (((((safe_div_func_uint32_t_u_u((++(*l_108)), (safe_mul_func_int16_t_s_s(((p_561->g_113[1] , l_114) != l_114), (((safe_add_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 4))(p_561->g_119.s2541)).xxxwxxyy, ((VECTOR(int64_t, 4))(p_561->g_120.yxxx)).yyxxxywy))).s4 != 1L), ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_561->g_121.s95)).even, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0x2B34E314L, 0xE9247554L, 4294967295UL, 0x35C14CCDL, 0xAE52F1CBL, (p_561->g_121.s2 |= l_122), 4294967295UL, 0UL)).s73)), 0x706E003AL, 4294967295UL)), GROUP_DIVERGE(0, 1), 0x8C1DB4CFL, 4294967288UL)).even, ((VECTOR(uint32_t, 8))(p_561->g_127.yxxyyywy)).odd))).y)), ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(p_561->g_128.s46)).yyyyxyxx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 4))(p_561->g_129.yxyx)).wzyxyzxz, (int64_t)((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_130.xzzyzzzyyyzyzwzz)).sec57)).lo)), ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_131.s55f75c09))))))), 0x66D3FFD8805FBE3FL, (-1L), ((VECTOR(int64_t, 4))(p_561->g_132.s5766)))).s9))))), ((VECTOR(int64_t, 2))(p_561->g_133.s25)).xxyyxxxy))).s7)) <= (safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((((*l_147) &= (((((safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u((l_131.s1 && l_131.s9), ((safe_mul_func_int16_t_s_s((p_561->g_145 ^= (((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 16))(((*l_142) = 0x62L), ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 4))(0x3EL)), ((VECTOR(int8_t, 2))(0x62L)), 5L)).sd2d3))).w | p_64)), l_122)) >= l_131.s0))))) <= GROUP_DIVERGE(2, 1)) != 251UL) && p_66) == p_66)) || p_561->g_49.f8))) | p_561->g_100[4][3][4]), GROUP_DIVERGE(1, 1)))) && p_561->g_53.s3))))) <= p_561->g_129.x) | 0x14C0L) , l_114) != l_114);
    return (*p_65);
}


/* ------------------------------------------ */
/* 
 * reads : p_561->g_49.f2 p_561->g_55 p_561->g_49.f5 p_561->g_47
 * writes: p_561->g_49.f2 p_561->g_55
 */
uint16_t  func_74(struct S0 * p_75, int64_t  p_76, struct S2 * p_561)
{ /* block id: 17 */
    int32_t *l_87 = &p_561->g_55;
    int32_t *l_88 = &p_561->g_55;
    int32_t *l_89 = (void*)0;
    int32_t *l_90 = &p_561->g_55;
    int32_t *l_91 = &p_561->g_55;
    int32_t l_92 = 0L;
    int32_t *l_93 = &p_561->g_55;
    int32_t *l_94 = (void*)0;
    int32_t *l_95[10];
    uint32_t l_96 = 0UL;
    int i;
    for (i = 0; i < 10; i++)
        l_95[i] = &l_92;
    if ((atomic_inc(&p_561->l_atomic_input[36]) == 7))
    { /* block id: 19 */
        uint32_t l_79 = 0x4BDACABDL;
        uint16_t l_82 = 65527UL;
        l_79++;
        l_82 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-8L), (-1L))))).lo;
        unsigned int result = 0;
        result += l_79;
        result += l_82;
        atomic_add(&p_561->l_special_values[36], result);
    }
    else
    { /* block id: 22 */
        (1 + 1);
    }
    for (p_561->g_49.f2 = 26; (p_561->g_49.f2 >= 22); p_561->g_49.f2 = safe_sub_func_uint8_t_u_u(p_561->g_49.f2, 2))
    { /* block id: 27 */
        VECTOR(int32_t, 16) l_85 = (VECTOR(int32_t, 16))(0x683987EDL, (VECTOR(int32_t, 4))(0x683987EDL, (VECTOR(int32_t, 2))(0x683987EDL, 0x2291505FL), 0x2291505FL), 0x2291505FL, 0x683987EDL, 0x2291505FL, (VECTOR(int32_t, 2))(0x683987EDL, 0x2291505FL), (VECTOR(int32_t, 2))(0x683987EDL, 0x2291505FL), 0x683987EDL, 0x2291505FL, 0x683987EDL, 0x2291505FL);
        int32_t *l_86 = &p_561->g_55;
        int i;
        (*l_86) ^= ((VECTOR(int32_t, 8))(l_85.sffc42e2e)).s6;
        return p_561->g_49.f5;
    }
    l_96++;
    return p_561->g_47.s4;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_comm_values[i] = 1;
    struct S2 c_562;
    struct S2* p_561 = &c_562;
    struct S2 c_563 = {
        (VECTOR(uint16_t, 8))(0x3205L, (VECTOR(uint16_t, 4))(0x3205L, (VECTOR(uint16_t, 2))(0x3205L, 0xC7E4L), 0xC7E4L), 0xC7E4L, 0x3205L, 0xC7E4L), // p_561->g_47
        0xC1L, // p_561->g_48
        {4UL,18446744073709551609UL,6UL,0x908FBDEDBEC151D1L,9L,0x5A3BB1D4L,1L,0x284B505D01CD43A1L,3UL}, // p_561->g_49
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xB7L), 0xB7L), 0xB7L, 0UL, 0xB7L), // p_561->g_53
        (-3L), // p_561->g_55
        {{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}},{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}},{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}},{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}},{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}},{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}},{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}},{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}},{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}},{{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55},{&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55,&p_561->g_55}}}, // p_561->g_54
        &p_561->g_55, // p_561->g_56
        {{{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL}},{{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL}},{{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL}},{{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL}},{{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL},{1UL,1UL,1UL,0x8F99D2484370A8D4L,0x5AAB37417BD2F3BEL,0x714DF77CBFDD6498L,0x0D8C1B616B54986CL,6UL,1UL}}}, // p_561->g_100
        {{-9L},{-9L},{-9L},{-9L}}, // p_561->g_113
        (VECTOR(int64_t, 8))(0x2B3D635D9A7C6434L, (VECTOR(int64_t, 4))(0x2B3D635D9A7C6434L, (VECTOR(int64_t, 2))(0x2B3D635D9A7C6434L, 0x66101610A321F159L), 0x66101610A321F159L), 0x66101610A321F159L, 0x2B3D635D9A7C6434L, 0x66101610A321F159L), // p_561->g_119
        (VECTOR(int64_t, 2))(0x47CF268A7AFDC658L, 0x0B956188C7F9DB91L), // p_561->g_120
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x6AFEBA28L), 0x6AFEBA28L), 0x6AFEBA28L, 0UL, 0x6AFEBA28L, (VECTOR(uint32_t, 2))(0UL, 0x6AFEBA28L), (VECTOR(uint32_t, 2))(0UL, 0x6AFEBA28L), 0UL, 0x6AFEBA28L, 0UL, 0x6AFEBA28L), // p_561->g_121
        (VECTOR(uint32_t, 4))(0x271B26D0L, (VECTOR(uint32_t, 2))(0x271B26D0L, 2UL), 2UL), // p_561->g_127
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2E390C49C4B2C92AL), 0x2E390C49C4B2C92AL), 0x2E390C49C4B2C92AL, 1L, 0x2E390C49C4B2C92AL, (VECTOR(int64_t, 2))(1L, 0x2E390C49C4B2C92AL), (VECTOR(int64_t, 2))(1L, 0x2E390C49C4B2C92AL), 1L, 0x2E390C49C4B2C92AL, 1L, 0x2E390C49C4B2C92AL), // p_561->g_128
        (VECTOR(int64_t, 2))((-1L), 0x1031554092619888L), // p_561->g_129
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x325B3C6BB1117FE5L), 0x325B3C6BB1117FE5L), 0x325B3C6BB1117FE5L, 1L, 0x325B3C6BB1117FE5L), // p_561->g_132
        (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 2L), 2L), 2L, 4L, 2L), // p_561->g_133
        {0x11L,0x11L,0x11L,0x11L,0x11L,0x11L,0x11L}, // p_561->g_143
        9L, // p_561->g_145
        0x1BL, // p_561->g_148
        (-6L), // p_561->g_151
        18446744073709551614UL, // p_561->g_152
        &p_561->g_49, // p_561->g_154
        0L, // p_561->g_156
        1UL, // p_561->g_161
        &p_561->g_151, // p_561->g_189
        (void*)0, // p_561->g_208
        (VECTOR(int16_t, 2))(0x54BDL, 0L), // p_561->g_210
        {0x9EL,7UL,0x8EF82A87L,0xAC12D3B933D1B2EEL,0x1A6343D952B09809L,4L,0x4448C1B7L,0L,1UL}, // p_561->g_211
        (VECTOR(int8_t, 8))(0x7BL, (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, 0x57L), 0x57L), 0x57L, 0x7BL, 0x57L), // p_561->g_215
        (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0xA1L), 0xA1L), 0xA1L, 253UL, 0xA1L, (VECTOR(uint8_t, 2))(253UL, 0xA1L), (VECTOR(uint8_t, 2))(253UL, 0xA1L), 253UL, 0xA1L, 253UL, 0xA1L), // p_561->g_218
        {{(void*)0,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,&p_561->g_55,(void*)0},{(void*)0,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,&p_561->g_55,(void*)0},{(void*)0,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,&p_561->g_55,(void*)0},{(void*)0,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,&p_561->g_55,(void*)0},{(void*)0,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,&p_561->g_55,(void*)0},{(void*)0,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,&p_561->g_55,(void*)0},{(void*)0,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,(void*)0,&p_561->g_55,&p_561->g_151,&p_561->g_55,(void*)0}}, // p_561->g_226
        &p_561->g_55, // p_561->g_227
        {0xBEL,0x60F63CC25B84161EL,4294967295UL,0xD92066DBDAC93B36L,0x48C08B6E860C42ACL,0x3BEA1271L,0x0A5C257BL,0x34FC96F67719E055L,0xF2L}, // p_561->g_271
        &p_561->g_211, // p_561->g_272
        4294967295UL, // p_561->g_278
        (VECTOR(uint16_t, 2))(0x571EL, 0UL), // p_561->g_280
        (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 65535UL), 65535UL), 65535UL, 65534UL, 65535UL), // p_561->g_290
        &p_561->g_151, // p_561->g_295
        &p_561->g_295, // p_561->g_294
        &p_561->g_208, // p_561->g_305
        {{{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L}},{{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L},{0x5C474DECL,(-6L),0x7BD095FFL,0x399357E3L,2L,7L,0x62448264L,0x026F0A6FL,(-8L),0x52E01F92L}}}, // p_561->g_333
        (VECTOR(int32_t, 4))(0x51AD2F56L, (VECTOR(int32_t, 2))(0x51AD2F56L, (-9L)), (-9L)), // p_561->g_357
        (VECTOR(int32_t, 2))((-1L), 0x1DE83242L), // p_561->g_360
        (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-8L)), (-8L)), (-8L), (-10L), (-8L)), // p_561->g_362
        (VECTOR(int32_t, 16))(0x5B9CD5B8L, (VECTOR(int32_t, 4))(0x5B9CD5B8L, (VECTOR(int32_t, 2))(0x5B9CD5B8L, 0x016E5A81L), 0x016E5A81L), 0x016E5A81L, 0x5B9CD5B8L, 0x016E5A81L, (VECTOR(int32_t, 2))(0x5B9CD5B8L, 0x016E5A81L), (VECTOR(int32_t, 2))(0x5B9CD5B8L, 0x016E5A81L), 0x5B9CD5B8L, 0x016E5A81L, 0x5B9CD5B8L, 0x016E5A81L), // p_561->g_364
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x1F368B1C64CF0D9CL), 0x1F368B1C64CF0D9CL), 0x1F368B1C64CF0D9CL, 1UL, 0x1F368B1C64CF0D9CL, (VECTOR(uint64_t, 2))(1UL, 0x1F368B1C64CF0D9CL), (VECTOR(uint64_t, 2))(1UL, 0x1F368B1C64CF0D9CL), 1UL, 0x1F368B1C64CF0D9CL, 1UL, 0x1F368B1C64CF0D9CL), // p_561->g_370
        &p_561->g_151, // p_561->g_377
        &p_561->g_113[3], // p_561->g_379
        (VECTOR(uint32_t, 8))(0x804DAEF8L, (VECTOR(uint32_t, 4))(0x804DAEF8L, (VECTOR(uint32_t, 2))(0x804DAEF8L, 0x3CF86C1AL), 0x3CF86C1AL), 0x3CF86C1AL, 0x804DAEF8L, 0x3CF86C1AL), // p_561->g_392
        {{0x8AL,0x51E885265154DFC6L,0x8F677D45L,0xC7A112F88271138AL,0x16FECE996C4569E5L,4L,-10L,0x7F70F32B3B63CF33L,254UL}}, // p_561->g_432
        {0xAAL,0x5EECE36A8A15CCC4L,0UL,0UL,0x7FF16868F5F7B112L,0x75D8DEB3L,-1L,0x165EB98CF7EAED6EL,0UL}, // p_561->g_433
        0xAFL, // p_561->g_465
        (VECTOR(int8_t, 8))(0x21L, (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, (-1L)), (-1L)), (-1L), 0x21L, (-1L)), // p_561->g_476
        {0x734334C1L}, // p_561->g_507
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L), // p_561->g_517
        (void*)0, // p_561->g_533
        {&p_561->g_295,&p_561->g_295,&p_561->g_295,&p_561->g_295}, // p_561->g_544
        (void*)0, // p_561->g_545
        {0xD3L,18446744073709551610UL,9UL,0x67D78156ED82E8EEL,0x63EA2CA0E5EA39E6L,-7L,0x6918F401L,-1L,3UL}, // p_561->g_560
        0, // p_561->v_collective
        sequence_input[get_global_id(0)], // p_561->global_0_offset
        sequence_input[get_global_id(1)], // p_561->global_1_offset
        sequence_input[get_global_id(2)], // p_561->global_2_offset
        sequence_input[get_local_id(0)], // p_561->local_0_offset
        sequence_input[get_local_id(1)], // p_561->local_1_offset
        sequence_input[get_local_id(2)], // p_561->local_2_offset
        sequence_input[get_group_id(0)], // p_561->group_0_offset
        sequence_input[get_group_id(1)], // p_561->group_1_offset
        sequence_input[get_group_id(2)], // p_561->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[0][get_linear_local_id()])), // p_561->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_562 = c_563;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_561);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_561->g_47.s0, "p_561->g_47.s0", print_hash_value);
    transparent_crc(p_561->g_47.s1, "p_561->g_47.s1", print_hash_value);
    transparent_crc(p_561->g_47.s2, "p_561->g_47.s2", print_hash_value);
    transparent_crc(p_561->g_47.s3, "p_561->g_47.s3", print_hash_value);
    transparent_crc(p_561->g_47.s4, "p_561->g_47.s4", print_hash_value);
    transparent_crc(p_561->g_47.s5, "p_561->g_47.s5", print_hash_value);
    transparent_crc(p_561->g_47.s6, "p_561->g_47.s6", print_hash_value);
    transparent_crc(p_561->g_47.s7, "p_561->g_47.s7", print_hash_value);
    transparent_crc(p_561->g_48, "p_561->g_48", print_hash_value);
    transparent_crc(p_561->g_49.f0, "p_561->g_49.f0", print_hash_value);
    transparent_crc(p_561->g_49.f1, "p_561->g_49.f1", print_hash_value);
    transparent_crc(p_561->g_49.f2, "p_561->g_49.f2", print_hash_value);
    transparent_crc(p_561->g_49.f3, "p_561->g_49.f3", print_hash_value);
    transparent_crc(p_561->g_49.f4, "p_561->g_49.f4", print_hash_value);
    transparent_crc(p_561->g_49.f5, "p_561->g_49.f5", print_hash_value);
    transparent_crc(p_561->g_49.f6, "p_561->g_49.f6", print_hash_value);
    transparent_crc(p_561->g_49.f7, "p_561->g_49.f7", print_hash_value);
    transparent_crc(p_561->g_49.f8, "p_561->g_49.f8", print_hash_value);
    transparent_crc(p_561->g_53.s0, "p_561->g_53.s0", print_hash_value);
    transparent_crc(p_561->g_53.s1, "p_561->g_53.s1", print_hash_value);
    transparent_crc(p_561->g_53.s2, "p_561->g_53.s2", print_hash_value);
    transparent_crc(p_561->g_53.s3, "p_561->g_53.s3", print_hash_value);
    transparent_crc(p_561->g_53.s4, "p_561->g_53.s4", print_hash_value);
    transparent_crc(p_561->g_53.s5, "p_561->g_53.s5", print_hash_value);
    transparent_crc(p_561->g_53.s6, "p_561->g_53.s6", print_hash_value);
    transparent_crc(p_561->g_53.s7, "p_561->g_53.s7", print_hash_value);
    transparent_crc(p_561->g_55, "p_561->g_55", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_561->g_100[i][j][k], "p_561->g_100[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_561->g_113[i].f0, "p_561->g_113[i].f0", print_hash_value);

    }
    transparent_crc(p_561->g_119.s0, "p_561->g_119.s0", print_hash_value);
    transparent_crc(p_561->g_119.s1, "p_561->g_119.s1", print_hash_value);
    transparent_crc(p_561->g_119.s2, "p_561->g_119.s2", print_hash_value);
    transparent_crc(p_561->g_119.s3, "p_561->g_119.s3", print_hash_value);
    transparent_crc(p_561->g_119.s4, "p_561->g_119.s4", print_hash_value);
    transparent_crc(p_561->g_119.s5, "p_561->g_119.s5", print_hash_value);
    transparent_crc(p_561->g_119.s6, "p_561->g_119.s6", print_hash_value);
    transparent_crc(p_561->g_119.s7, "p_561->g_119.s7", print_hash_value);
    transparent_crc(p_561->g_120.x, "p_561->g_120.x", print_hash_value);
    transparent_crc(p_561->g_120.y, "p_561->g_120.y", print_hash_value);
    transparent_crc(p_561->g_121.s0, "p_561->g_121.s0", print_hash_value);
    transparent_crc(p_561->g_121.s1, "p_561->g_121.s1", print_hash_value);
    transparent_crc(p_561->g_121.s2, "p_561->g_121.s2", print_hash_value);
    transparent_crc(p_561->g_121.s3, "p_561->g_121.s3", print_hash_value);
    transparent_crc(p_561->g_121.s4, "p_561->g_121.s4", print_hash_value);
    transparent_crc(p_561->g_121.s5, "p_561->g_121.s5", print_hash_value);
    transparent_crc(p_561->g_121.s6, "p_561->g_121.s6", print_hash_value);
    transparent_crc(p_561->g_121.s7, "p_561->g_121.s7", print_hash_value);
    transparent_crc(p_561->g_121.s8, "p_561->g_121.s8", print_hash_value);
    transparent_crc(p_561->g_121.s9, "p_561->g_121.s9", print_hash_value);
    transparent_crc(p_561->g_121.sa, "p_561->g_121.sa", print_hash_value);
    transparent_crc(p_561->g_121.sb, "p_561->g_121.sb", print_hash_value);
    transparent_crc(p_561->g_121.sc, "p_561->g_121.sc", print_hash_value);
    transparent_crc(p_561->g_121.sd, "p_561->g_121.sd", print_hash_value);
    transparent_crc(p_561->g_121.se, "p_561->g_121.se", print_hash_value);
    transparent_crc(p_561->g_121.sf, "p_561->g_121.sf", print_hash_value);
    transparent_crc(p_561->g_127.x, "p_561->g_127.x", print_hash_value);
    transparent_crc(p_561->g_127.y, "p_561->g_127.y", print_hash_value);
    transparent_crc(p_561->g_127.z, "p_561->g_127.z", print_hash_value);
    transparent_crc(p_561->g_127.w, "p_561->g_127.w", print_hash_value);
    transparent_crc(p_561->g_128.s0, "p_561->g_128.s0", print_hash_value);
    transparent_crc(p_561->g_128.s1, "p_561->g_128.s1", print_hash_value);
    transparent_crc(p_561->g_128.s2, "p_561->g_128.s2", print_hash_value);
    transparent_crc(p_561->g_128.s3, "p_561->g_128.s3", print_hash_value);
    transparent_crc(p_561->g_128.s4, "p_561->g_128.s4", print_hash_value);
    transparent_crc(p_561->g_128.s5, "p_561->g_128.s5", print_hash_value);
    transparent_crc(p_561->g_128.s6, "p_561->g_128.s6", print_hash_value);
    transparent_crc(p_561->g_128.s7, "p_561->g_128.s7", print_hash_value);
    transparent_crc(p_561->g_128.s8, "p_561->g_128.s8", print_hash_value);
    transparent_crc(p_561->g_128.s9, "p_561->g_128.s9", print_hash_value);
    transparent_crc(p_561->g_128.sa, "p_561->g_128.sa", print_hash_value);
    transparent_crc(p_561->g_128.sb, "p_561->g_128.sb", print_hash_value);
    transparent_crc(p_561->g_128.sc, "p_561->g_128.sc", print_hash_value);
    transparent_crc(p_561->g_128.sd, "p_561->g_128.sd", print_hash_value);
    transparent_crc(p_561->g_128.se, "p_561->g_128.se", print_hash_value);
    transparent_crc(p_561->g_128.sf, "p_561->g_128.sf", print_hash_value);
    transparent_crc(p_561->g_129.x, "p_561->g_129.x", print_hash_value);
    transparent_crc(p_561->g_129.y, "p_561->g_129.y", print_hash_value);
    transparent_crc(p_561->g_132.s0, "p_561->g_132.s0", print_hash_value);
    transparent_crc(p_561->g_132.s1, "p_561->g_132.s1", print_hash_value);
    transparent_crc(p_561->g_132.s2, "p_561->g_132.s2", print_hash_value);
    transparent_crc(p_561->g_132.s3, "p_561->g_132.s3", print_hash_value);
    transparent_crc(p_561->g_132.s4, "p_561->g_132.s4", print_hash_value);
    transparent_crc(p_561->g_132.s5, "p_561->g_132.s5", print_hash_value);
    transparent_crc(p_561->g_132.s6, "p_561->g_132.s6", print_hash_value);
    transparent_crc(p_561->g_132.s7, "p_561->g_132.s7", print_hash_value);
    transparent_crc(p_561->g_133.s0, "p_561->g_133.s0", print_hash_value);
    transparent_crc(p_561->g_133.s1, "p_561->g_133.s1", print_hash_value);
    transparent_crc(p_561->g_133.s2, "p_561->g_133.s2", print_hash_value);
    transparent_crc(p_561->g_133.s3, "p_561->g_133.s3", print_hash_value);
    transparent_crc(p_561->g_133.s4, "p_561->g_133.s4", print_hash_value);
    transparent_crc(p_561->g_133.s5, "p_561->g_133.s5", print_hash_value);
    transparent_crc(p_561->g_133.s6, "p_561->g_133.s6", print_hash_value);
    transparent_crc(p_561->g_133.s7, "p_561->g_133.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_561->g_143[i], "p_561->g_143[i]", print_hash_value);

    }
    transparent_crc(p_561->g_145, "p_561->g_145", print_hash_value);
    transparent_crc(p_561->g_148, "p_561->g_148", print_hash_value);
    transparent_crc(p_561->g_151, "p_561->g_151", print_hash_value);
    transparent_crc(p_561->g_152, "p_561->g_152", print_hash_value);
    transparent_crc(p_561->g_156, "p_561->g_156", print_hash_value);
    transparent_crc(p_561->g_161, "p_561->g_161", print_hash_value);
    transparent_crc(p_561->g_210.x, "p_561->g_210.x", print_hash_value);
    transparent_crc(p_561->g_210.y, "p_561->g_210.y", print_hash_value);
    transparent_crc(p_561->g_211.f0, "p_561->g_211.f0", print_hash_value);
    transparent_crc(p_561->g_211.f1, "p_561->g_211.f1", print_hash_value);
    transparent_crc(p_561->g_211.f2, "p_561->g_211.f2", print_hash_value);
    transparent_crc(p_561->g_211.f3, "p_561->g_211.f3", print_hash_value);
    transparent_crc(p_561->g_211.f4, "p_561->g_211.f4", print_hash_value);
    transparent_crc(p_561->g_211.f5, "p_561->g_211.f5", print_hash_value);
    transparent_crc(p_561->g_211.f6, "p_561->g_211.f6", print_hash_value);
    transparent_crc(p_561->g_211.f7, "p_561->g_211.f7", print_hash_value);
    transparent_crc(p_561->g_211.f8, "p_561->g_211.f8", print_hash_value);
    transparent_crc(p_561->g_215.s0, "p_561->g_215.s0", print_hash_value);
    transparent_crc(p_561->g_215.s1, "p_561->g_215.s1", print_hash_value);
    transparent_crc(p_561->g_215.s2, "p_561->g_215.s2", print_hash_value);
    transparent_crc(p_561->g_215.s3, "p_561->g_215.s3", print_hash_value);
    transparent_crc(p_561->g_215.s4, "p_561->g_215.s4", print_hash_value);
    transparent_crc(p_561->g_215.s5, "p_561->g_215.s5", print_hash_value);
    transparent_crc(p_561->g_215.s6, "p_561->g_215.s6", print_hash_value);
    transparent_crc(p_561->g_215.s7, "p_561->g_215.s7", print_hash_value);
    transparent_crc(p_561->g_218.s0, "p_561->g_218.s0", print_hash_value);
    transparent_crc(p_561->g_218.s1, "p_561->g_218.s1", print_hash_value);
    transparent_crc(p_561->g_218.s2, "p_561->g_218.s2", print_hash_value);
    transparent_crc(p_561->g_218.s3, "p_561->g_218.s3", print_hash_value);
    transparent_crc(p_561->g_218.s4, "p_561->g_218.s4", print_hash_value);
    transparent_crc(p_561->g_218.s5, "p_561->g_218.s5", print_hash_value);
    transparent_crc(p_561->g_218.s6, "p_561->g_218.s6", print_hash_value);
    transparent_crc(p_561->g_218.s7, "p_561->g_218.s7", print_hash_value);
    transparent_crc(p_561->g_218.s8, "p_561->g_218.s8", print_hash_value);
    transparent_crc(p_561->g_218.s9, "p_561->g_218.s9", print_hash_value);
    transparent_crc(p_561->g_218.sa, "p_561->g_218.sa", print_hash_value);
    transparent_crc(p_561->g_218.sb, "p_561->g_218.sb", print_hash_value);
    transparent_crc(p_561->g_218.sc, "p_561->g_218.sc", print_hash_value);
    transparent_crc(p_561->g_218.sd, "p_561->g_218.sd", print_hash_value);
    transparent_crc(p_561->g_218.se, "p_561->g_218.se", print_hash_value);
    transparent_crc(p_561->g_218.sf, "p_561->g_218.sf", print_hash_value);
    transparent_crc(p_561->g_271.f0, "p_561->g_271.f0", print_hash_value);
    transparent_crc(p_561->g_271.f1, "p_561->g_271.f1", print_hash_value);
    transparent_crc(p_561->g_271.f2, "p_561->g_271.f2", print_hash_value);
    transparent_crc(p_561->g_271.f3, "p_561->g_271.f3", print_hash_value);
    transparent_crc(p_561->g_271.f4, "p_561->g_271.f4", print_hash_value);
    transparent_crc(p_561->g_271.f5, "p_561->g_271.f5", print_hash_value);
    transparent_crc(p_561->g_271.f6, "p_561->g_271.f6", print_hash_value);
    transparent_crc(p_561->g_271.f7, "p_561->g_271.f7", print_hash_value);
    transparent_crc(p_561->g_271.f8, "p_561->g_271.f8", print_hash_value);
    transparent_crc(p_561->g_278, "p_561->g_278", print_hash_value);
    transparent_crc(p_561->g_280.x, "p_561->g_280.x", print_hash_value);
    transparent_crc(p_561->g_280.y, "p_561->g_280.y", print_hash_value);
    transparent_crc(p_561->g_290.s0, "p_561->g_290.s0", print_hash_value);
    transparent_crc(p_561->g_290.s1, "p_561->g_290.s1", print_hash_value);
    transparent_crc(p_561->g_290.s2, "p_561->g_290.s2", print_hash_value);
    transparent_crc(p_561->g_290.s3, "p_561->g_290.s3", print_hash_value);
    transparent_crc(p_561->g_290.s4, "p_561->g_290.s4", print_hash_value);
    transparent_crc(p_561->g_290.s5, "p_561->g_290.s5", print_hash_value);
    transparent_crc(p_561->g_290.s6, "p_561->g_290.s6", print_hash_value);
    transparent_crc(p_561->g_290.s7, "p_561->g_290.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_561->g_333[i][j][k], "p_561->g_333[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_561->g_357.x, "p_561->g_357.x", print_hash_value);
    transparent_crc(p_561->g_357.y, "p_561->g_357.y", print_hash_value);
    transparent_crc(p_561->g_357.z, "p_561->g_357.z", print_hash_value);
    transparent_crc(p_561->g_357.w, "p_561->g_357.w", print_hash_value);
    transparent_crc(p_561->g_360.x, "p_561->g_360.x", print_hash_value);
    transparent_crc(p_561->g_360.y, "p_561->g_360.y", print_hash_value);
    transparent_crc(p_561->g_362.s0, "p_561->g_362.s0", print_hash_value);
    transparent_crc(p_561->g_362.s1, "p_561->g_362.s1", print_hash_value);
    transparent_crc(p_561->g_362.s2, "p_561->g_362.s2", print_hash_value);
    transparent_crc(p_561->g_362.s3, "p_561->g_362.s3", print_hash_value);
    transparent_crc(p_561->g_362.s4, "p_561->g_362.s4", print_hash_value);
    transparent_crc(p_561->g_362.s5, "p_561->g_362.s5", print_hash_value);
    transparent_crc(p_561->g_362.s6, "p_561->g_362.s6", print_hash_value);
    transparent_crc(p_561->g_362.s7, "p_561->g_362.s7", print_hash_value);
    transparent_crc(p_561->g_364.s0, "p_561->g_364.s0", print_hash_value);
    transparent_crc(p_561->g_364.s1, "p_561->g_364.s1", print_hash_value);
    transparent_crc(p_561->g_364.s2, "p_561->g_364.s2", print_hash_value);
    transparent_crc(p_561->g_364.s3, "p_561->g_364.s3", print_hash_value);
    transparent_crc(p_561->g_364.s4, "p_561->g_364.s4", print_hash_value);
    transparent_crc(p_561->g_364.s5, "p_561->g_364.s5", print_hash_value);
    transparent_crc(p_561->g_364.s6, "p_561->g_364.s6", print_hash_value);
    transparent_crc(p_561->g_364.s7, "p_561->g_364.s7", print_hash_value);
    transparent_crc(p_561->g_364.s8, "p_561->g_364.s8", print_hash_value);
    transparent_crc(p_561->g_364.s9, "p_561->g_364.s9", print_hash_value);
    transparent_crc(p_561->g_364.sa, "p_561->g_364.sa", print_hash_value);
    transparent_crc(p_561->g_364.sb, "p_561->g_364.sb", print_hash_value);
    transparent_crc(p_561->g_364.sc, "p_561->g_364.sc", print_hash_value);
    transparent_crc(p_561->g_364.sd, "p_561->g_364.sd", print_hash_value);
    transparent_crc(p_561->g_364.se, "p_561->g_364.se", print_hash_value);
    transparent_crc(p_561->g_364.sf, "p_561->g_364.sf", print_hash_value);
    transparent_crc(p_561->g_370.s0, "p_561->g_370.s0", print_hash_value);
    transparent_crc(p_561->g_370.s1, "p_561->g_370.s1", print_hash_value);
    transparent_crc(p_561->g_370.s2, "p_561->g_370.s2", print_hash_value);
    transparent_crc(p_561->g_370.s3, "p_561->g_370.s3", print_hash_value);
    transparent_crc(p_561->g_370.s4, "p_561->g_370.s4", print_hash_value);
    transparent_crc(p_561->g_370.s5, "p_561->g_370.s5", print_hash_value);
    transparent_crc(p_561->g_370.s6, "p_561->g_370.s6", print_hash_value);
    transparent_crc(p_561->g_370.s7, "p_561->g_370.s7", print_hash_value);
    transparent_crc(p_561->g_370.s8, "p_561->g_370.s8", print_hash_value);
    transparent_crc(p_561->g_370.s9, "p_561->g_370.s9", print_hash_value);
    transparent_crc(p_561->g_370.sa, "p_561->g_370.sa", print_hash_value);
    transparent_crc(p_561->g_370.sb, "p_561->g_370.sb", print_hash_value);
    transparent_crc(p_561->g_370.sc, "p_561->g_370.sc", print_hash_value);
    transparent_crc(p_561->g_370.sd, "p_561->g_370.sd", print_hash_value);
    transparent_crc(p_561->g_370.se, "p_561->g_370.se", print_hash_value);
    transparent_crc(p_561->g_370.sf, "p_561->g_370.sf", print_hash_value);
    transparent_crc(p_561->g_392.s0, "p_561->g_392.s0", print_hash_value);
    transparent_crc(p_561->g_392.s1, "p_561->g_392.s1", print_hash_value);
    transparent_crc(p_561->g_392.s2, "p_561->g_392.s2", print_hash_value);
    transparent_crc(p_561->g_392.s3, "p_561->g_392.s3", print_hash_value);
    transparent_crc(p_561->g_392.s4, "p_561->g_392.s4", print_hash_value);
    transparent_crc(p_561->g_392.s5, "p_561->g_392.s5", print_hash_value);
    transparent_crc(p_561->g_392.s6, "p_561->g_392.s6", print_hash_value);
    transparent_crc(p_561->g_392.s7, "p_561->g_392.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_561->g_432[i].f0, "p_561->g_432[i].f0", print_hash_value);
        transparent_crc(p_561->g_432[i].f1, "p_561->g_432[i].f1", print_hash_value);
        transparent_crc(p_561->g_432[i].f2, "p_561->g_432[i].f2", print_hash_value);
        transparent_crc(p_561->g_432[i].f3, "p_561->g_432[i].f3", print_hash_value);
        transparent_crc(p_561->g_432[i].f4, "p_561->g_432[i].f4", print_hash_value);
        transparent_crc(p_561->g_432[i].f5, "p_561->g_432[i].f5", print_hash_value);
        transparent_crc(p_561->g_432[i].f6, "p_561->g_432[i].f6", print_hash_value);
        transparent_crc(p_561->g_432[i].f7, "p_561->g_432[i].f7", print_hash_value);
        transparent_crc(p_561->g_432[i].f8, "p_561->g_432[i].f8", print_hash_value);

    }
    transparent_crc(p_561->g_433.f0, "p_561->g_433.f0", print_hash_value);
    transparent_crc(p_561->g_433.f1, "p_561->g_433.f1", print_hash_value);
    transparent_crc(p_561->g_433.f2, "p_561->g_433.f2", print_hash_value);
    transparent_crc(p_561->g_433.f3, "p_561->g_433.f3", print_hash_value);
    transparent_crc(p_561->g_433.f4, "p_561->g_433.f4", print_hash_value);
    transparent_crc(p_561->g_433.f5, "p_561->g_433.f5", print_hash_value);
    transparent_crc(p_561->g_433.f6, "p_561->g_433.f6", print_hash_value);
    transparent_crc(p_561->g_433.f7, "p_561->g_433.f7", print_hash_value);
    transparent_crc(p_561->g_433.f8, "p_561->g_433.f8", print_hash_value);
    transparent_crc(p_561->g_465, "p_561->g_465", print_hash_value);
    transparent_crc(p_561->g_476.s0, "p_561->g_476.s0", print_hash_value);
    transparent_crc(p_561->g_476.s1, "p_561->g_476.s1", print_hash_value);
    transparent_crc(p_561->g_476.s2, "p_561->g_476.s2", print_hash_value);
    transparent_crc(p_561->g_476.s3, "p_561->g_476.s3", print_hash_value);
    transparent_crc(p_561->g_476.s4, "p_561->g_476.s4", print_hash_value);
    transparent_crc(p_561->g_476.s5, "p_561->g_476.s5", print_hash_value);
    transparent_crc(p_561->g_476.s6, "p_561->g_476.s6", print_hash_value);
    transparent_crc(p_561->g_476.s7, "p_561->g_476.s7", print_hash_value);
    transparent_crc(p_561->g_507.f0, "p_561->g_507.f0", print_hash_value);
    transparent_crc(p_561->g_517.s0, "p_561->g_517.s0", print_hash_value);
    transparent_crc(p_561->g_517.s1, "p_561->g_517.s1", print_hash_value);
    transparent_crc(p_561->g_517.s2, "p_561->g_517.s2", print_hash_value);
    transparent_crc(p_561->g_517.s3, "p_561->g_517.s3", print_hash_value);
    transparent_crc(p_561->g_517.s4, "p_561->g_517.s4", print_hash_value);
    transparent_crc(p_561->g_517.s5, "p_561->g_517.s5", print_hash_value);
    transparent_crc(p_561->g_517.s6, "p_561->g_517.s6", print_hash_value);
    transparent_crc(p_561->g_517.s7, "p_561->g_517.s7", print_hash_value);
    transparent_crc(p_561->g_560.f0, "p_561->g_560.f0", print_hash_value);
    transparent_crc(p_561->g_560.f1, "p_561->g_560.f1", print_hash_value);
    transparent_crc(p_561->g_560.f2, "p_561->g_560.f2", print_hash_value);
    transparent_crc(p_561->g_560.f3, "p_561->g_560.f3", print_hash_value);
    transparent_crc(p_561->g_560.f4, "p_561->g_560.f4", print_hash_value);
    transparent_crc(p_561->g_560.f5, "p_561->g_560.f5", print_hash_value);
    transparent_crc(p_561->g_560.f6, "p_561->g_560.f6", print_hash_value);
    transparent_crc(p_561->g_560.f7, "p_561->g_560.f7", print_hash_value);
    transparent_crc(p_561->g_560.f8, "p_561->g_560.f8", print_hash_value);
    transparent_crc(p_561->v_collective, "p_561->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 83; i++)
            transparent_crc(p_561->l_special_values[i], "p_561->l_special_values[i]", print_hash_value);
    transparent_crc(p_561->l_comm_values[get_linear_local_id()], "p_561->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_561->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()], "p_561->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
