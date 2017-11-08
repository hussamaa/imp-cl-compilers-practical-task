// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 59,37,3 -l 59,1,1
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

__constant uint32_t permutations[10][59] = {
{25,37,51,23,53,2,28,47,57,26,31,15,14,24,46,20,21,56,12,29,58,55,13,1,7,40,27,17,45,54,49,41,8,19,4,5,35,11,33,3,9,30,38,32,36,43,34,44,18,48,0,50,39,22,52,16,42,6,10}, // permutation 0
{21,53,16,1,17,43,0,9,44,41,8,40,27,3,6,23,15,28,47,25,13,52,12,39,48,5,19,29,31,33,35,11,4,42,46,45,34,10,37,36,2,54,32,56,24,58,55,50,38,20,18,57,26,22,14,30,49,7,51}, // permutation 1
{5,33,34,15,1,10,49,17,54,44,22,55,46,21,2,30,42,29,27,56,37,7,8,43,4,18,0,6,25,50,26,9,52,3,57,47,35,32,53,19,40,51,14,31,20,28,11,13,16,38,41,23,58,48,36,39,24,45,12}, // permutation 2
{4,58,29,42,44,52,40,33,20,0,35,14,21,7,53,32,26,15,55,47,13,51,48,27,50,37,30,36,9,8,46,17,38,3,2,6,25,49,31,23,12,39,43,41,16,18,1,19,11,57,34,45,54,22,24,5,56,10,28}, // permutation 3
{11,48,46,53,57,6,56,47,12,5,1,14,44,17,55,28,42,29,50,13,23,52,22,33,0,40,9,7,8,31,18,38,4,21,10,35,26,39,3,34,37,58,41,45,20,24,36,15,51,49,19,54,32,16,2,25,27,30,43}, // permutation 4
{40,0,7,31,18,35,50,33,52,48,36,17,29,42,3,37,27,58,10,8,28,13,24,2,47,4,53,23,11,34,43,6,26,46,15,51,25,9,16,54,32,19,38,22,57,21,41,1,12,45,30,39,5,56,49,55,20,14,44}, // permutation 5
{19,52,35,43,49,38,32,28,12,57,27,6,51,15,16,41,42,56,45,24,23,1,48,17,8,55,26,31,14,21,0,30,10,44,47,53,39,9,18,36,13,5,4,7,2,46,11,20,54,37,25,22,40,33,58,29,50,3,34}, // permutation 6
{33,54,48,2,45,56,52,16,22,44,9,11,24,50,40,17,51,14,58,57,7,15,4,49,46,30,47,28,34,18,10,55,26,35,23,1,19,20,41,27,29,36,39,38,5,21,6,31,13,12,42,37,43,53,8,3,32,0,25}, // permutation 7
{10,42,37,41,6,21,46,8,40,4,28,13,2,9,58,24,52,3,39,49,48,44,19,32,54,18,57,22,23,26,17,35,14,30,11,25,38,36,33,1,5,53,12,43,56,15,20,27,31,51,29,45,7,47,55,50,0,16,34}, // permutation 8
{6,29,37,28,5,52,14,44,38,47,3,36,4,35,26,30,53,39,42,0,17,1,45,16,34,22,32,51,48,8,49,54,43,50,7,9,24,18,46,31,55,2,15,58,11,33,27,10,13,19,57,40,25,56,41,20,21,23,12} // permutation 9
};

// Seed: 581219872

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_25[5][2];
    uint32_t g_61;
    uint8_t g_62;
    volatile VECTOR(uint16_t, 2) g_78;
    uint8_t g_120;
    volatile VECTOR(int32_t, 8) g_125;
    volatile VECTOR(uint32_t, 8) g_127;
    int16_t g_137;
    volatile int32_t *g_140[5];
    int32_t g_142;
    int32_t *g_141;
    int32_t ** volatile g_153;
    int16_t *g_155;
    volatile VECTOR(uint16_t, 4) g_157;
    volatile VECTOR(uint8_t, 2) g_176;
    volatile VECTOR(uint8_t, 16) g_177;
    VECTOR(uint8_t, 2) g_179;
    VECTOR(uint8_t, 8) g_186;
    int64_t *g_189;
    int32_t g_191[9][8][1];
    VECTOR(int8_t, 16) g_195;
    int32_t g_198;
    VECTOR(uint8_t, 4) g_209;
    uint32_t g_215;
    VECTOR(int16_t, 16) g_223;
    int32_t ** volatile g_237;
    uint16_t g_244;
    int32_t ** volatile g_252;
    VECTOR(int8_t, 2) g_287;
    volatile VECTOR(int8_t, 4) g_288;
    uint8_t g_297;
    uint32_t *g_298;
    int32_t ** volatile g_320;
    VECTOR(int32_t, 8) g_389;
    uint32_t *g_400;
    uint32_t **g_399;
    VECTOR(uint32_t, 16) g_409;
    int32_t ** volatile g_418;
    int32_t ** volatile g_419;
    int32_t *g_426;
    volatile VECTOR(int16_t, 16) g_429;
    int8_t g_479;
    volatile uint16_t *g_490;
    volatile uint16_t * volatile *g_489;
    uint64_t g_493;
    VECTOR(int64_t, 4) g_508;
    volatile VECTOR(int64_t, 2) g_509;
    volatile int16_t * volatile g_527;
    volatile int16_t * volatile *g_526;
    volatile int16_t * volatile **g_525;
    VECTOR(int8_t, 4) g_549;
    uint16_t *g_591;
    uint16_t **g_590[1];
    VECTOR(uint16_t, 8) g_600;
    uint16_t g_602[6];
    volatile VECTOR(int32_t, 4) g_614;
    VECTOR(int64_t, 8) g_623;
    VECTOR(uint64_t, 16) g_631;
    VECTOR(uint64_t, 4) g_632;
    volatile VECTOR(int16_t, 8) g_643;
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
uint32_t  func_1(struct S0 * p_648);
int32_t * func_2(int32_t * p_3, int32_t * p_4, int32_t * p_5, struct S0 * p_648);
int32_t * func_6(int32_t * p_7, int16_t  p_8, uint64_t  p_9, struct S0 * p_648);
int32_t * func_10(int32_t * p_11, int16_t  p_12, int32_t * p_13, struct S0 * p_648);
int16_t  func_15(int32_t  p_16, struct S0 * p_648);
int32_t * func_19(int32_t * p_20, int32_t * p_21, int64_t  p_22, int32_t * p_23, struct S0 * p_648);
int8_t  func_27(uint64_t  p_28, uint32_t  p_29, uint64_t  p_30, struct S0 * p_648);
uint16_t  func_33(uint32_t  p_34, uint64_t  p_35, struct S0 * p_648);
uint32_t  func_36(uint8_t  p_37, uint16_t  p_38, int32_t * p_39, int32_t * p_40, int32_t * p_41, struct S0 * p_648);
int32_t * func_43(uint64_t  p_44, uint64_t  p_45, int32_t  p_46, struct S0 * p_648);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_648->l_comm_values p_648->g_195 p_648->g_120 p_648->g_127 p_648->g_137 p_648->g_25 p_648->g_comm_values p_648->g_125 p_648->g_62 p_648->g_153 p_648->g_141 p_648->g_237 p_648->g_142 p_648->g_198 p_648->g_252 p_648->g_177 p_648->g_186 p_648->g_209 p_648->g_244 p_648->g_61 p_648->g_418 p_648->g_419 p_648->g_189 p_648->g_429 p_648->g_400 p_648->g_389 p_648->g_298 p_648->g_409 p_648->g_479 p_648->g_489 p_648->g_493 p_648->g_525 p_648->g_176 p_648->g_549 p_648->g_600 p_648->g_602 p_648->g_614 p_648->g_623 p_648->g_591 p_648->g_631 p_648->g_632 p_648->g_643 p_648->g_215 p_648->g_287
 * writes: p_648->g_61 p_648->g_62 p_648->g_120 p_648->g_137 p_648->g_25 p_648->g_198 p_648->g_141 p_648->g_142 p_648->g_186 p_648->g_297 p_648->g_244 p_648->g_399 p_648->g_426 p_648->g_189 p_648->g_400 p_648->g_493 p_648->g_479 p_648->g_389 p_648->g_590 p_648->g_602 p_648->g_600 p_648->g_223 p_648->g_215
 */
uint32_t  func_1(struct S0 * p_648)
{ /* block id: 4 */
    int32_t *l_14 = (void*)0;
    int32_t **l_598[9][10] = {{&l_14,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&l_14,&l_14},{&l_14,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&l_14,&l_14},{&l_14,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&l_14,&l_14},{&l_14,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&l_14,&l_14},{&l_14,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&l_14,&l_14},{&l_14,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&l_14,&l_14},{&l_14,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&l_14,&l_14},{&l_14,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&l_14,&l_14},{&l_14,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&p_648->g_141,&p_648->g_141,&l_14,&l_14,&l_14}};
    VECTOR(uint16_t, 4) l_599 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65527UL), 65527UL);
    uint16_t *l_601[9];
    int i, j;
    for (i = 0; i < 9; i++)
        l_601[i] = &p_648->g_602[3];
    (*p_648->g_419) = func_2(func_6(((*p_648->g_153) = func_10(l_14, func_15(p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 59))], p_648), p_648->g_298, p_648)), ((((VECTOR(uint16_t, 8))(65530UL, 65530UL, 1UL, ((VECTOR(uint16_t, 2))(l_599.zz)), 0x3D1FL, 5UL, 0xA253L)).s6 | p_648->g_549.z) != (p_648->g_600.s0 = (((((VECTOR(uint16_t, 8))(p_648->g_600.s34463557)).s4 >= (p_648->g_602[2] ^= (&p_648->g_215 == &p_648->g_215))) >= p_648->g_209.x) || p_648->g_549.x))), p_648->g_209.x, p_648), p_648->g_298, p_648->g_298, p_648);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_648->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 59)), permutations[(safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), 10))][(safe_mod_func_uint32_t_u_u(p_648->tid, 59))]));
    return p_648->g_287.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_215 p_648->g_25 p_648->g_252 p_648->g_141
 * writes: p_648->g_215 p_648->g_25
 */
int32_t * func_2(int32_t * p_3, int32_t * p_4, int32_t * p_5, struct S0 * p_648)
{ /* block id: 283 */
    int32_t *l_645 = (void*)0;
    int32_t *l_646 = &p_648->g_25[3][1];
    int64_t *l_647[2][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    l_646 = l_645;
    (*p_4) |= ((void*)0 == l_647[1][7]);
    return (*p_648->g_252);
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_186 p_648->g_614 p_648->g_623 p_648->g_591 p_648->g_631 p_648->g_632 p_648->g_25 p_648->g_643
 * writes: p_648->g_223 p_648->g_244 p_648->g_25
 */
int32_t * func_6(int32_t * p_7, int16_t  p_8, uint64_t  p_9, struct S0 * p_648)
{ /* block id: 277 */
    int8_t l_605 = 0L;
    int16_t *l_606[1][3][10];
    VECTOR(int32_t, 4) l_613 = (VECTOR(int32_t, 4))(0x0D83BC5DL, (VECTOR(int32_t, 2))(0x0D83BC5DL, 1L), 1L);
    VECTOR(int64_t, 4) l_624 = (VECTOR(int64_t, 4))(0x623BF3F9876829B0L, (VECTOR(int64_t, 2))(0x623BF3F9876829B0L, 1L), 1L);
    int16_t l_635 = 0x345BL;
    uint32_t l_636 = 0x17FDECB1L;
    int32_t *l_637 = &p_648->g_25[1][1];
    uint32_t ***l_640 = &p_648->g_399;
    uint16_t **l_644 = &p_648->g_591;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
                l_606[i][j][k] = (void*)0;
        }
    }
    (*l_637) ^= ((((safe_lshift_func_int16_t_s_s(((p_648->g_223.s5 = (GROUP_DIVERGE(0, 1) | l_605)) & (l_606[0][1][3] != l_606[0][0][8])), 2)) == (safe_add_func_uint8_t_u_u((p_648->g_186.s1 > (safe_div_func_uint64_t_u_u(l_605, (safe_sub_func_uint16_t_u_u(p_9, (((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_613.zywy)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_648->g_614.yxyy)).even)).yxyyyxyyxyyyxyxy)).s35))).hi | (safe_div_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((GROUP_DIVERGE(1, 1) == (((((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(p_648->g_623.s3311)), ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 4))(l_624.wzwx)).yxzzxywzwwyxzwwy, ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))((~(((((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))((((*p_648->g_591) = (safe_rshift_func_int8_t_s_s(p_8, 6))) && (-5L)), 0UL, ((VECTOR(uint64_t, 2))(1UL, 0x62CEA698A423597BL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_648->g_631.s225b)).hi)).xxxyyyyx, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(p_648->g_632.wwwzxzwx)).hi, (uint64_t)(((safe_mul_func_uint16_t_u_u(p_8, 65527UL)) || l_624.z) , 0x99C5803AB7722E63L)))), 1UL, 18446744073709551615UL, 9UL, 0x9AA5D3305DCED26BL)), ((VECTOR(uint64_t, 8))(0xB7F2D0050A538E90L))))), 18446744073709551611UL, ((VECTOR(uint64_t, 2))(18446744073709551608UL)), 1UL, p_9, GROUP_DIVERGE(0, 1), 0xC39B9665B01CEB84L, 4UL)).s47)), 0xA7A36278F250081FL, ((VECTOR(uint64_t, 4))(2UL)), ((VECTOR(uint64_t, 4))(0x368F7E09CE8AF9EEL)), 4UL)))).s64)).xxxxxxyy)).s4, p_9)) <= l_613.z) >= p_8) <= 0L) | 0x72B69B5DL)), 1L, p_9, l_624.y, (-1L), ((VECTOR(int32_t, 2))(0x5DA27159L)), 9L)).s46, ((VECTOR(uint32_t, 2))(0x84773549L))))).yxxxxyxxyyxyxxxx))).even, ((VECTOR(int64_t, 8))(4L)), ((VECTOR(int64_t, 8))(0x4F683C370449F81CL))))).odd))).yzyyxxxwzyyywwxw))))))).s1 ^ p_9), 0x5017L)) & (-2L)), p_9)) | 0L) , l_624.x) >= p_9) , l_605)) , GROUP_DIVERGE(2, 1)), p_9)) <= 4294967295UL), 0xD835515CL)))))))), l_635))) || l_636) >= l_635);
    (*l_637) = (safe_lshift_func_uint16_t_u_s((((void*)0 == l_606[0][1][9]) <= ((void*)0 != l_640)), (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_648->g_643.s0270)).wwzxyyzw)).s7, ((*l_637) & (l_644 == (void*)0))))));
    return l_637;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_62 p_648->g_125 p_648->l_comm_values p_648->g_418 p_648->g_141 p_648->g_25 p_648->g_142 p_648->g_244 p_648->g_198 p_648->g_409 p_648->g_479 p_648->g_489 p_648->g_493 p_648->g_120 p_648->g_237 p_648->g_153 p_648->g_400 p_648->g_525 p_648->g_176 p_648->g_252 p_648->g_389 p_648->g_137 p_648->g_61
 * writes: p_648->g_62 p_648->g_120 p_648->g_198 p_648->g_244 p_648->g_493 p_648->g_137 p_648->g_25 p_648->g_142 p_648->g_479 p_648->g_389 p_648->g_590 p_648->g_61
 */
int32_t * func_10(int32_t * p_11, int16_t  p_12, int32_t * p_13, struct S0 * p_648)
{ /* block id: 202 */
    VECTOR(int32_t, 8) l_444 = (VECTOR(int32_t, 8))(0x1314E348L, (VECTOR(int32_t, 4))(0x1314E348L, (VECTOR(int32_t, 2))(0x1314E348L, 0x29596CE9L), 0x29596CE9L), 0x29596CE9L, 0x1314E348L, 0x29596CE9L);
    int32_t l_445 = 0x39453BF1L;
    VECTOR(int8_t, 2) l_459 = (VECTOR(int8_t, 2))(0x12L, 0x37L);
    uint32_t **l_540[3];
    uint32_t *l_544 = (void*)0;
    uint32_t **l_543 = &l_544;
    uint16_t l_574 = 0x9441L;
    int32_t *l_597[1][2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_540[i] = &p_648->g_400;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_597[i][j] = (void*)0;
    }
    for (p_648->g_62 = (-30); (p_648->g_62 != 43); ++p_648->g_62)
    { /* block id: 205 */
        int32_t *l_438 = &p_648->g_25[3][1];
        int32_t *l_439 = &p_648->g_142;
        int32_t *l_440 = &p_648->g_25[1][1];
        int32_t *l_441 = (void*)0;
        int32_t *l_442 = &p_648->g_198;
        int32_t *l_443[9] = {&p_648->g_142,&p_648->g_142,&p_648->g_142,&p_648->g_142,&p_648->g_142,&p_648->g_142,&p_648->g_142,&p_648->g_142,&p_648->g_142};
        uint16_t l_446 = 0x77BFL;
        uint32_t **l_460 = (void*)0;
        uint16_t *l_589 = &l_574;
        uint16_t **l_588[3];
        uint16_t ***l_587 = &l_588[2];
        int i;
        for (i = 0; i < 3; i++)
            l_588[i] = &l_589;
        l_446++;
        for (p_648->g_120 = 19; (p_648->g_120 >= 14); p_648->g_120--)
        { /* block id: 209 */
            int8_t l_467 = 0x63L;
            int32_t l_470 = (-1L);
            int32_t l_552 = 0x664565F4L;
            int32_t l_558 = 0x5EA2AB2EL;
            int32_t l_559 = 1L;
            int32_t l_560 = 0x39E7C4BCL;
            int32_t l_566 = 0x2DFA972AL;
            int32_t l_569[7][10][2] = {{{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L}},{{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L}},{{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L}},{{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L}},{{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L}},{{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L}},{{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L},{8L,0x73CDF083L}}};
            int32_t **l_586 = &l_440;
            int i, j, k;
            for (p_648->g_198 = 0; (p_648->g_198 != (-5)); --p_648->g_198)
            { /* block id: 212 */
                int32_t l_482[10][3][6] = {{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}},{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}},{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}},{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}},{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}},{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}},{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}},{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}},{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}},{{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)},{0x01D00961L,0x205F558AL,0x1C67A710L,0x28CE9FACL,(-8L),(-1L)}}};
                int32_t l_511 = 0x1C2377ACL;
                int32_t l_562 = 3L;
                int32_t l_563 = (-3L);
                int32_t l_567[8][7][4] = {{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}}};
                VECTOR(int32_t, 8) l_573 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x30F10376L), 0x30F10376L), 0x30F10376L, (-8L), 0x30F10376L);
                int i, j, k;
                if ((p_648->g_125.s3 , (p_12 | p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 59))])))
                { /* block id: 213 */
                    uint32_t l_461 = 0x584166A8L;
                    int32_t l_478[5];
                    VECTOR(int64_t, 2) l_491 = (VECTOR(int64_t, 2))(0L, 0x0EDC37A5547CAE0CL);
                    int i;
                    for (i = 0; i < 5; i++)
                        l_478[i] = 0x3E34CE68L;
                    if ((~(**p_648->g_418)))
                    { /* block id: 214 */
                        uint32_t l_466 = 1UL;
                        int16_t *l_468 = (void*)0;
                        int16_t *l_469[2];
                        int8_t *l_471 = (void*)0;
                        int8_t *l_472 = (void*)0;
                        int8_t *l_473 = (void*)0;
                        int8_t *l_474 = (void*)0;
                        int8_t *l_475 = (void*)0;
                        int8_t *l_476 = (void*)0;
                        int8_t *l_477 = (void*)0;
                        int64_t *l_480 = (void*)0;
                        int64_t *l_481 = (void*)0;
                        uint16_t *l_483 = &p_648->g_244;
                        int32_t **l_484 = &l_439;
                        uint64_t *l_492[1];
                        int32_t l_510 = 9L;
                        int32_t l_512 = (-9L);
                        int i;
                        for (i = 0; i < 2; i++)
                            l_469[i] = &p_648->g_137;
                        for (i = 0; i < 1; i++)
                            l_492[i] = &p_648->g_493;
                        (*l_484) = (((((*l_483) &= ((l_470 = ((VECTOR(int64_t, 8))((((safe_lshift_func_uint8_t_u_u((~((safe_add_func_int32_t_s_s(0x6A331635L, (safe_rshift_func_uint8_t_u_s(((l_478[0] = ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(l_459.xyxy)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((void*)0 == l_460), ((*p_648->g_141) , (((p_12 = (&p_648->g_137 != ((((((0x435FL || (GROUP_DIVERGE(0, 1) > ((*l_439) = (l_461 , ((((l_467 &= (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(p_648->g_comm_values[p_648->tid], l_466)), (*p_13)))) && (*p_13)) , l_461) ^ 0L))))) & 9L) || GROUP_DIVERGE(1, 1)) , p_648->g_176.x) ^ 0L) , &p_648->g_137))) && (*l_442)) >= l_470)), ((VECTOR(int8_t, 2))(0x40L)), (-1L), ((VECTOR(int8_t, 4))(0x64L)), ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 2))(0x7BL)), (-8L))))).s6484))).lo)).yxxyxxxyxxyyyyyx)).s86f4, ((VECTOR(int8_t, 4))(0x1FL)), ((VECTOR(int8_t, 4))(0x0BL))))).x) <= p_648->g_479), 7)))) | 4294967294UL)), l_461)) || 0x7419A7F4L) <= 0x1F3B27E62C02F929L), ((VECTOR(int64_t, 2))(3L)), (-1L), ((VECTOR(int64_t, 2))(0x7C021B58F33982F3L)), 0x15AAF9614F80F262L, 0x4CDD33B24E84A9DFL)).s5) ^ l_482[3][0][1])) | 65527UL) & (*l_442)) , (void*)0);
                        l_512 ^= ((safe_rshift_func_int16_t_s_u((l_511 ^= (p_12 = (p_648->g_409.sf | ((~(safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_648->group_1_offset, get_group_id(1), 10), (((p_12 == p_648->g_479) , (p_648->g_489 == (void*)0)) == ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_491.xxxxyyyx)).hi)).z)))) , (p_648->g_137 = ((p_648->g_493++) ^ (safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((p_12 , (safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((p_648->g_120 & (((*l_483) = p_12) ^ (safe_mul_func_uint16_t_u_u(((((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 8))(p_648->g_508.wwwwyyyy)), ((VECTOR(int64_t, 4))(p_648->g_509.yyxy)).zyxzzyyz))).s6 , 0x044DC42B038F67D7L) , 0x4169L), 0xE2EEL)))), l_482[1][2][5])), l_510))), GROUP_DIVERGE(0, 1))), p_648->g_25[3][1])) , p_12), 5)))))))), 1)) , (**p_648->g_237));
                        return (*p_648->g_153);
                    }
                    else
                    { /* block id: 229 */
                        uint64_t l_513 = 0x867883879A0458D6L;
                        l_513++;
                    }
                }
                else
                { /* block id: 232 */
                    uint32_t l_516 = 2UL;
                    uint32_t **l_541[10][3] = {{&p_648->g_400,&p_648->g_400,&p_648->g_400},{&p_648->g_400,&p_648->g_400,&p_648->g_400},{&p_648->g_400,&p_648->g_400,&p_648->g_400},{&p_648->g_400,&p_648->g_400,&p_648->g_400},{&p_648->g_400,&p_648->g_400,&p_648->g_400},{&p_648->g_400,&p_648->g_400,&p_648->g_400},{&p_648->g_400,&p_648->g_400,&p_648->g_400},{&p_648->g_400,&p_648->g_400,&p_648->g_400},{&p_648->g_400,&p_648->g_400,&p_648->g_400},{&p_648->g_400,&p_648->g_400,&p_648->g_400}};
                    uint32_t ***l_542[3][6][3] = {{{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399}},{{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399}},{{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399},{&p_648->g_399,&p_648->g_399,&p_648->g_399}}};
                    int16_t *l_553[10] = {&p_648->g_137,(void*)0,&p_648->g_137,&p_648->g_137,(void*)0,&p_648->g_137,&p_648->g_137,(void*)0,&p_648->g_137,&p_648->g_137};
                    int8_t *l_554[2];
                    int32_t l_555 = 9L;
                    int32_t l_556 = (-9L);
                    int32_t l_557 = (-1L);
                    int32_t l_561 = 0L;
                    int32_t l_564 = 0L;
                    int32_t l_565 = 0L;
                    int32_t l_568 = 0x44E37CABL;
                    int32_t l_570 = (-3L);
                    int32_t l_571 = 0x467BC11BL;
                    int32_t l_572 = 0x40A174A5L;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_554[i] = &p_648->g_479;
                    --l_516;
                    l_555 &= (safe_mul_func_int16_t_s_s(((--(*p_648->g_400)) & ((safe_mul_func_uint8_t_u_u(((void*)0 != p_648->g_525), (p_648->g_479 |= ((safe_div_func_int8_t_s_s((((*l_439) = GROUP_DIVERGE(1, 1)) || (((VECTOR(uint16_t, 4))(((p_12 = ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((l_540[2] == (l_543 = l_541[4][0])), (safe_mod_func_uint64_t_u_u(l_459.y, p_12)))) , (l_470 = 0UL)) ^ ((l_552 |= ((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(p_648->g_549.wxyxzxzxzzzwxwyw)).see, ((VECTOR(int8_t, 4))((p_648->g_195.sa , ((safe_mul_func_int16_t_s_s((p_648->g_195.s0 & l_467), l_516)) ^ 0x6BE6345488147B73L)), 0x0AL, (-5L), (-8L))).hi, ((VECTOR(int8_t, 2))(0x1EL))))).odd, p_12)) && p_12)) || l_516)), l_445)) , p_648->g_409.sc), p_12)) < (-1L)), 0L)), GROUP_DIVERGE(1, 1))) , 0x5FB8L)) & p_648->g_287.x), 2UL, 0xBA4BL, 0xAF7DL)).z != 0x78B1L)), l_444.s4)) != 1L)))) ^ p_648->g_176.y)), 5L));
                    l_574++;
                }
                for (l_562 = 8; (l_562 >= (-1)); l_562 = safe_sub_func_uint32_t_u_u(l_562, 1))
                { /* block id: 246 */
                    p_648->g_389.s1 &= (**p_648->g_252);
                    if (l_444.s2)
                        continue;
                    if ((atomic_inc(&p_648->g_atomic_input[92 * get_linear_group_id() + 22]) == 2))
                    { /* block id: 250 */
                        uint64_t l_579 = 0xDCEDC0E328235152L;
                        int64_t l_582[1];
                        uint64_t l_583 = 1UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_582[i] = 0x69C041B7FAB41C93L;
                        --l_579;
                        l_583--;
                        unsigned int result = 0;
                        result += l_579;
                        int l_582_i0;
                        for (l_582_i0 = 0; l_582_i0 < 1; l_582_i0++) {
                            result += l_582[l_582_i0];
                        }
                        result += l_583;
                        atomic_add(&p_648->g_special_values[92 * get_linear_group_id() + 22], result);
                    }
                    else
                    { /* block id: 253 */
                        (1 + 1);
                    }
                }
                return l_438;
            }
            (*l_586) = p_11;
        }
        p_648->g_590[0] = ((*l_587) = (void*)0);
        for (p_648->g_137 = 0; (p_648->g_137 == (-12)); p_648->g_137 = safe_sub_func_int16_t_s_s(p_648->g_137, 2))
        { /* block id: 265 */
            for (p_648->g_61 = 0; (p_648->g_61 < 38); ++p_648->g_61)
            { /* block id: 268 */
                int32_t **l_596[7][9] = {{(void*)0,(void*)0,&l_441,&l_443[6],&l_440,&l_443[6],&l_441,(void*)0,(void*)0},{(void*)0,(void*)0,&l_441,&l_443[6],&l_440,&l_443[6],&l_441,(void*)0,(void*)0},{(void*)0,(void*)0,&l_441,&l_443[6],&l_440,&l_443[6],&l_441,(void*)0,(void*)0},{(void*)0,(void*)0,&l_441,&l_443[6],&l_440,&l_443[6],&l_441,(void*)0,(void*)0},{(void*)0,(void*)0,&l_441,&l_443[6],&l_440,&l_443[6],&l_441,(void*)0,(void*)0},{(void*)0,(void*)0,&l_441,&l_443[6],&l_440,&l_443[6],&l_441,(void*)0,(void*)0},{(void*)0,(void*)0,&l_441,&l_443[6],&l_440,&l_443[6],&l_441,(void*)0,(void*)0}};
                int i, j;
                l_597[0][1] = (void*)0;
            }
        }
    }
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_195 p_648->l_comm_values p_648->g_120 p_648->g_127 p_648->g_137 p_648->g_25 p_648->g_comm_values p_648->g_125 p_648->g_62 p_648->g_153 p_648->g_141 p_648->g_237 p_648->g_142 p_648->g_198 p_648->g_252 p_648->g_177 p_648->g_186 p_648->g_209 p_648->g_244 p_648->g_61 p_648->g_418 p_648->g_419 p_648->g_189 p_648->g_429 p_648->g_400 p_648->g_389
 * writes: p_648->g_61 p_648->g_62 p_648->g_120 p_648->g_137 p_648->g_25 p_648->g_198 p_648->g_141 p_648->g_142 p_648->g_186 p_648->g_297 p_648->g_244 p_648->g_399 p_648->g_426 p_648->g_189 p_648->g_400
 */
int16_t  func_15(int32_t  p_16, struct S0 * p_648)
{ /* block id: 5 */
    int32_t *l_24[8] = {&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1]};
    int16_t **l_422 = &p_648->g_155;
    int8_t l_425 = (-1L);
    int64_t *l_427 = (void*)0;
    int64_t **l_428 = &p_648->g_189;
    uint32_t **l_430 = &p_648->g_400;
    uint32_t l_431 = 0x02ADEFDBL;
    int i;
    for (p_16 = 0; (p_16 == 0); p_16 = safe_add_func_uint8_t_u_u(p_16, 6))
    { /* block id: 8 */
        int64_t l_26 = 0x174CA7790412894FL;
        VECTOR(int32_t, 16) l_149 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7E45614CL), 0x7E45614CL), 0x7E45614CL, 1L, 0x7E45614CL, (VECTOR(int32_t, 2))(1L, 0x7E45614CL), (VECTOR(int32_t, 2))(1L, 0x7E45614CL), 1L, 0x7E45614CL, 1L, 0x7E45614CL);
        int8_t *l_194 = (void*)0;
        int8_t *l_196[9][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t *l_197 = &p_648->g_198;
        int i, j;
        (*p_648->g_419) = func_19(l_24[6], (((l_149.s0 = ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((0x2C9AL && l_26) >= func_27((safe_mod_func_uint64_t_u_u((func_33(p_648->g_25[3][1], p_16, p_648) , l_26), (p_16 , (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_149.se61bcc1d)), ((VECTOR(int32_t, 8))(0x728DE542L, 0x6F4C97ADL, ((p_16 ^ p_648->g_comm_values[p_648->tid]) && 0UL), ((VECTOR(int32_t, 2))(0x271733CDL)), 6L, 0L, 0x6AD14177L)))).s8, p_648->g_comm_values[p_648->tid]))))), p_648->g_comm_values[p_648->tid], p_16, p_648)), p_16, 1L, 0x48L)).even, ((VECTOR(int8_t, 2))(0L))))).xxyy, ((VECTOR(int8_t, 4))(3L))))).z) & p_16) , (void*)0), p_648->g_195.s8, l_197, p_648);
        (*l_197) = (((safe_div_func_int64_t_s_s(p_16, 0x47009E8E3EDC7096L)) , (&p_648->g_155 != l_422)) < ((p_648->g_426 = func_43(p_648->g_137, (safe_add_func_uint16_t_u_u(l_425, ((*l_197) && 1L))), (*l_197), p_648)) == &p_648->g_191[0][5][0]));
    }
    (**p_648->g_153) = (((l_427 != ((*l_428) = p_648->g_189)) == ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))((-5L), ((VECTOR(int16_t, 8))(p_648->g_429.s0730cccb)).s5, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((-4L), 0x5074L, p_16, ((l_24[3] == ((*l_430) = func_43((l_24[6] == ((*l_430) = l_24[6])), p_16, p_16, p_648))) , p_648->g_25[3][0]), 7L, 0x75EEL, 0L, 9L)))), 1L, ((VECTOR(int16_t, 4))(0x67EBL)), 0x422DL)), ((VECTOR(int16_t, 16))(0x1634L))))).s4) && 0x5CL);
    ++l_431;
    p_16 = (safe_sub_func_uint32_t_u_u(((**l_430) |= FAKE_DIVERGE(p_648->group_0_offset, get_group_id(0), 10)), FAKE_DIVERGE(p_648->global_2_offset, get_global_id(2), 10)));
    return p_648->g_389.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_209 p_648->g_215 p_648->g_223 p_648->g_157 p_648->g_186 p_648->g_62 p_648->g_153 p_648->g_141 p_648->g_25 p_648->g_142 p_648->l_comm_values p_648->g_120 p_648->g_127 p_648->g_137 p_648->g_comm_values p_648->g_125 p_648->g_237 p_648->g_198 p_648->g_252 p_648->g_177 p_648->g_195 p_648->g_287 p_648->g_288 p_648->g_61 p_648->g_297 p_648->g_244 p_648->g_389 p_648->g_409 p_648->g_418
 * writes: p_648->g_215 p_648->g_120 p_648->g_61 p_648->g_62 p_648->g_137 p_648->g_25 p_648->g_198 p_648->g_141 p_648->g_142 p_648->g_244 p_648->g_186 p_648->g_298 p_648->g_297 p_648->g_399
 */
int32_t * func_19(int32_t * p_20, int32_t * p_21, int64_t  p_22, int32_t * p_23, struct S0 * p_648)
{ /* block id: 74 */
    VECTOR(uint64_t, 8) l_199 = (VECTOR(uint64_t, 8))(0x94F5809B3B63D6E5L, (VECTOR(uint64_t, 4))(0x94F5809B3B63D6E5L, (VECTOR(uint64_t, 2))(0x94F5809B3B63D6E5L, 0UL), 0UL), 0UL, 0x94F5809B3B63D6E5L, 0UL);
    uint8_t *l_200 = (void*)0;
    VECTOR(uint8_t, 8) l_210 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 8UL), 8UL), 8UL, 255UL, 8UL);
    VECTOR(int8_t, 2) l_213 = (VECTOR(int8_t, 2))(0x08L, 0x5FL);
    uint32_t *l_214 = &p_648->g_215;
    uint8_t *l_220[8][5] = {{&p_648->g_120,(void*)0,(void*)0,&p_648->g_120,(void*)0},{&p_648->g_120,(void*)0,(void*)0,&p_648->g_120,(void*)0},{&p_648->g_120,(void*)0,(void*)0,&p_648->g_120,(void*)0},{&p_648->g_120,(void*)0,(void*)0,&p_648->g_120,(void*)0},{&p_648->g_120,(void*)0,(void*)0,&p_648->g_120,(void*)0},{&p_648->g_120,(void*)0,(void*)0,&p_648->g_120,(void*)0},{&p_648->g_120,(void*)0,(void*)0,&p_648->g_120,(void*)0},{&p_648->g_120,(void*)0,(void*)0,&p_648->g_120,(void*)0}};
    VECTOR(int16_t, 2) l_224 = (VECTOR(int16_t, 2))(8L, 0x1D4CL);
    VECTOR(int16_t, 8) l_225 = (VECTOR(int16_t, 8))(0x1A50L, (VECTOR(int16_t, 4))(0x1A50L, (VECTOR(int16_t, 2))(0x1A50L, 1L), 1L), 1L, 0x1A50L, 1L);
    VECTOR(int16_t, 2) l_228 = (VECTOR(int16_t, 2))(9L, 0x50D3L);
    int32_t *l_231 = &p_648->g_25[3][1];
    int32_t *l_232[2][10][1] = {{{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198}},{{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198},{&p_648->g_198}}};
    uint16_t *l_243 = &p_648->g_244;
    uint16_t *l_246 = (void*)0;
    VECTOR(int16_t, 4) l_251 = (VECTOR(int16_t, 4))(0x2BFCL, (VECTOR(int16_t, 2))(0x2BFCL, 1L), 1L);
    int16_t **l_294[1];
    int32_t l_378[5];
    VECTOR(uint16_t, 8) l_394 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xABB5L), 0xABB5L), 0xABB5L, 1UL, 0xABB5L);
    VECTOR(int32_t, 8) l_395 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x0E4EE154L), 0x0E4EE154L), 0x0E4EE154L, (-9L), 0x0E4EE154L);
    uint32_t *l_397[10] = {(void*)0,&p_648->g_61,(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0};
    uint32_t **l_396 = &l_397[4];
    uint32_t **l_410 = &p_648->g_400;
    uint32_t l_417 = 9UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_294[i] = &p_648->g_155;
    for (i = 0; i < 5; i++)
        l_378[i] = 0L;
    (*p_23) = (((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_199.s5365)))).zzxwwwwzyxwywwyx))))).sf , ((l_200 != (((l_231 = func_43((safe_mod_func_uint32_t_u_u((p_648->g_61 = ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))((safe_add_func_int16_t_s_s((((safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(p_648->g_209.zywy)).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(l_210.s64)), ((VECTOR(uint8_t, 16))(0x56L, 0xFDL, (~(safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_213.yy)).xxyx)), 0x24L, 0x2EL, 0x44L, 0x24L)).even)).x, 0))), 0xD8L, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((((--(*l_214)) , ((safe_lshift_func_int8_t_s_s(l_213.x, 0)) , ((p_648->g_120 = p_22) , 7UL))) , ((((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(p_648->g_223.sd6846d41)).hi, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_224.xxxyxxyyyyyyyyxy)).lo)).lo))), ((VECTOR(int16_t, 2))(0x6B19L, 0x0E81L)), 0x2FDDL, (-2L))).s3440013077136620, ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 2))(l_225.s26)).yyyxyxyxxyyxyyxy, (int16_t)(safe_mul_func_int8_t_s_s(0x23L, (GROUP_DIVERGE(0, 1) > l_199.s0))), (int16_t)((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(l_228.xyxyxyxyyxxyyyyy)).s6e, ((VECTOR(int16_t, 4))((((p_648->g_157.z & (((+0x51026119L) || 0x363B6ED5L) > p_22)) >= p_22) , l_224.x), p_22, 0x5EC7L, 7L)).hi))), (-1L), 8L)), 0x6A2EL, ((VECTOR(int16_t, 2))((-3L))), 0L)).s0))), ((VECTOR(int16_t, 16))(7L))))).s0b3f, ((VECTOR(int16_t, 4))(0x578BL))))).odd)), 0x4600L, 0x8DCCL)).x, 3)) <= p_648->g_186.s1) || p_648->g_62) || (**p_648->g_153))) , p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 59))]), 255UL, 254UL, 0xF1L)).wyzxxwwx)), 0x4FL, 0x1CL, 0xC8L, 0xA0L)).sdd))))), 248UL, 0x8EL)).ywzzzwww)).s34))), 0x74L, 255UL)).xzywxyzx, (uint8_t)0xF7L))).s70)).lo, p_22)), p_22)) ^ 0x2DA117F8L) && l_213.x), FAKE_DIVERGE(p_648->global_0_offset, get_global_id(0), 10))), ((VECTOR(uint32_t, 4))(5UL)), l_213.x, 0UL, 0UL)).s7026606000615010)).sc , l_214) == l_214)), 0x72917E55L)), l_213.y, l_210.s4, p_648)) == l_232[0][6][0]) , (void*)0)) , 0x468FEC65L)) || GROUP_DIVERGE(0, 1)) , (*l_231));
    if ((safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), 7)))
    { /* block id: 80 */
        uint32_t **l_253[6][10] = {{&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214,&l_214}};
        int32_t l_254 = 0x341F9282L;
        VECTOR(int16_t, 4) l_282 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
        VECTOR(int8_t, 2) l_289 = (VECTOR(int8_t, 2))(0L, 0x63L);
        int32_t *l_319 = &p_648->g_142;
        int i, j;
        for (p_22 = (-22); (p_22 >= (-11)); p_22 = safe_add_func_int32_t_s_s(p_22, 2))
        { /* block id: 83 */
            int32_t l_240 = 0x6304C94EL;
            VECTOR(int16_t, 16) l_250 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x4F41L), 0x4F41L), 0x4F41L, (-1L), 0x4F41L, (VECTOR(int16_t, 2))((-1L), 0x4F41L), (VECTOR(int16_t, 2))((-1L), 0x4F41L), (-1L), 0x4F41L, (-1L), 0x4F41L);
            int i;
            (*p_648->g_237) = (*p_648->g_153);
            for (p_648->g_198 = 0; (p_648->g_198 <= 29); p_648->g_198++)
            { /* block id: 87 */
                uint16_t **l_245 = &l_243;
                uint16_t **l_247 = &l_246;
                (*p_648->g_141) = (**p_648->g_153);
                l_240 = 0x47FEAD80L;
                if (l_240)
                    break;
                (*p_648->g_252) = func_43((((((safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), 11)) > 0xB53AL) , ((*l_245) = l_243)) == ((*l_247) = l_246)) <= 2L), (p_648->g_198 , (safe_mul_func_uint16_t_u_u(0x51EBL, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x2DA2L, 0x7FCEL, (-6L), 0L)).odd)).yyxx, ((VECTOR(int16_t, 8))(l_250.s078f4729)).hi))).lo)).yxxx))).lo))), ((VECTOR(int16_t, 2))(3L, (-1L))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_251.zx)), 0x617AL, 0x3D41L)).hi))).yyxxxyxyyyyyyxyy)).sb460))).w))), (*p_648->g_141), p_648);
            }
            l_253[5][4] = l_253[1][6];
            l_254 = (p_648->g_177.sa != p_22);
        }
        if (((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(((((void*)0 == &p_648->g_61) | (safe_unary_minus_func_int16_t_s((~(p_22 <= (((void*)0 != &p_648->g_120) != (p_648->g_186.s3 &= (safe_rshift_func_int16_t_s_s(((((VECTOR(int64_t, 8))(0L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((safe_mul_func_int8_t_s_s((-9L), (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((((((*l_243) = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(65535UL, (safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), ((*l_231) ^ (safe_lshift_func_int8_t_s_s(p_648->g_177.s8, p_22))))), 11)) , (-1L)), p_22)), l_254)), 0xD7DDL, 0UL)))).y) & p_22) || p_22) < 0x1C7CL) != 0UL), l_254)), 1L)))), 2L, (-1L), 1L)).even)), 0x3ACD351BAF4A80B5L, 0x65804FEDB6420292L)), l_282.z, 1L, 0x0E6D0F4A7F7F5ED7L)).s4 != 0x3F694970F5AB0988L) && p_22), p_648->g_195.s7))))))))) & p_22), p_22)) | p_648->g_209.w), p_648->g_195.s0)), p_22)) || p_648->g_62))
        { /* block id: 100 */
            uint32_t l_286 = 4294967289UL;
            int16_t **l_293 = &p_648->g_155;
            int16_t ***l_292 = &l_293;
            VECTOR(uint32_t, 16) l_312 = (VECTOR(uint32_t, 16))(0xBC97AA9BL, (VECTOR(uint32_t, 4))(0xBC97AA9BL, (VECTOR(uint32_t, 2))(0xBC97AA9BL, 4294967295UL), 4294967295UL), 4294967295UL, 0xBC97AA9BL, 4294967295UL, (VECTOR(uint32_t, 2))(0xBC97AA9BL, 4294967295UL), (VECTOR(uint32_t, 2))(0xBC97AA9BL, 4294967295UL), 0xBC97AA9BL, 4294967295UL, 0xBC97AA9BL, 4294967295UL);
            uint32_t **l_325[1][6][8] = {{{&p_648->g_298,&p_648->g_298,&p_648->g_298,&l_214,&p_648->g_298,&l_214,&p_648->g_298,&p_648->g_298},{&p_648->g_298,&p_648->g_298,&p_648->g_298,&l_214,&p_648->g_298,&l_214,&p_648->g_298,&p_648->g_298},{&p_648->g_298,&p_648->g_298,&p_648->g_298,&l_214,&p_648->g_298,&l_214,&p_648->g_298,&p_648->g_298},{&p_648->g_298,&p_648->g_298,&p_648->g_298,&l_214,&p_648->g_298,&l_214,&p_648->g_298,&p_648->g_298},{&p_648->g_298,&p_648->g_298,&p_648->g_298,&l_214,&p_648->g_298,&l_214,&p_648->g_298,&p_648->g_298},{&p_648->g_298,&p_648->g_298,&p_648->g_298,&l_214,&p_648->g_298,&l_214,&p_648->g_298,&p_648->g_298}}};
            int32_t l_334 = (-1L);
            int i, j, k;
            (*p_648->g_141) = (safe_unary_minus_func_uint8_t_u((((((safe_mod_func_uint64_t_u_u(((((((VECTOR(int8_t, 16))(l_286, 0x0EL, 1L, 0x4AL, 0x43L, 0x61L, 1L, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(p_648->g_287.yxyxyyyx)).s76, ((VECTOR(int8_t, 4))(p_648->g_288.wzwx)).even))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_289.yxyyxyyxyxyyxxyy)).sda28)))).xyyyywxyxxyxyyxw, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))((safe_add_func_uint8_t_u_u((((*l_292) = (void*)0) != l_294[0]), ((p_648->g_298 = func_43(p_648->g_25[3][1], (((safe_add_func_int16_t_s_s((p_648->g_61 , p_648->g_297), 0L)) ^ ((*p_648->g_141) < 0x6C817FD8L)) & l_286), (*l_231), p_648)) == p_20))), p_22, 1L, 1L)), ((VECTOR(int8_t, 4))(0x01L))))).zzwwyzxwwxzyxxzx))).lo, (int8_t)0x49L, (int8_t)l_286))))).s35))), ((VECTOR(int8_t, 4))(0x40L)), ((VECTOR(int8_t, 2))(0L)), 2L)).s8 , 8L) && 0x60L) | l_286) > l_286), 1L)) ^ p_22) == p_22) , p_22) , 0x80L)));
            for (p_648->g_198 = 0; (p_648->g_198 > 2); p_648->g_198 = safe_add_func_uint32_t_u_u(p_648->g_198, 6))
            { /* block id: 106 */
                uint64_t l_307 = 0UL;
                int32_t *l_317 = &p_648->g_25[0][1];
                for (p_648->g_297 = (-1); (p_648->g_297 == 53); p_648->g_297 = safe_add_func_uint16_t_u_u(p_648->g_297, 7))
                { /* block id: 109 */
                    uint32_t *l_315[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                    int64_t l_316 = 0x07E79E7529FD8B6EL;
                    int32_t **l_318 = (void*)0;
                    int i, j;
                    for (p_648->g_137 = (-21); (p_648->g_137 <= 17); ++p_648->g_137)
                    { /* block id: 112 */
                        int8_t l_305 = 0x4AL;
                        int32_t l_306 = (-1L);
                        --l_307;
                    }
                    p_23 = func_43(((((safe_add_func_int32_t_s_s((-3L), ((VECTOR(uint32_t, 8))(l_312.s00644368)).s6)) && (safe_mul_func_uint8_t_u_u((((l_254 = (((-10L) <= ((VECTOR(int32_t, 2))(0x714F0DF4L, 5L)).even) & p_22)) > l_316) > p_22), l_316))) & ((*l_243) = (l_317 == (l_319 = (void*)0)))) > (*p_23)), l_312.sd, (*p_648->g_141), p_648);
                    if ((atomic_inc(&p_648->l_atomic_input[78]) == 4))
                    { /* block id: 120 */
                        uint32_t l_321 = 4294967288UL;
                        int16_t l_322 = 0x275EL;
                        uint64_t l_323 = 0xE5527A9BD7BBCC50L;
                        int32_t l_324 = 0x04426ED8L;
                        l_324 &= ((((l_321 = FAKE_DIVERGE(p_648->local_0_offset, get_local_id(0), 10)) , 4294967291UL) , l_322) , l_323);
                        unsigned int result = 0;
                        result += l_321;
                        result += l_322;
                        result += l_323;
                        result += l_324;
                        atomic_add(&p_648->l_special_values[78], result);
                    }
                    else
                    { /* block id: 123 */
                        (1 + 1);
                    }
                }
                l_334 |= (((((l_325[0][3][7] == &p_648->g_298) , ((safe_mod_func_uint16_t_u_u((++(*l_243)), (p_22 & p_22))) , &p_648->g_191[1][0][0])) == l_231) & (safe_add_func_int16_t_s_s(p_22, (safe_add_func_uint64_t_u_u(18446744073709551615UL, (*l_317)))))) , (*p_23));
            }
            if ((atomic_inc(&p_648->l_atomic_input[34]) == 8))
            { /* block id: 131 */
                int32_t l_335[10] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
                uint64_t l_369 = 0UL;
                int32_t *l_372 = &l_335[1];
                int32_t *l_373 = &l_335[1];
                int32_t *l_374 = &l_335[6];
                uint32_t l_375 = 0xC481AC09L;
                int i;
                for (l_335[1] = (-20); (l_335[1] == 3); l_335[1]++)
                { /* block id: 134 */
                    uint32_t l_338[5][6] = {{0x36698263L,0x36698263L,0x41E486DEL,0x7E602FBBL,4294967295UL,0x7E602FBBL},{0x36698263L,0x36698263L,0x41E486DEL,0x7E602FBBL,4294967295UL,0x7E602FBBL},{0x36698263L,0x36698263L,0x41E486DEL,0x7E602FBBL,4294967295UL,0x7E602FBBL},{0x36698263L,0x36698263L,0x41E486DEL,0x7E602FBBL,4294967295UL,0x7E602FBBL},{0x36698263L,0x36698263L,0x41E486DEL,0x7E602FBBL,4294967295UL,0x7E602FBBL}};
                    int8_t l_339 = 9L;
                    uint32_t l_348 = 0x436C59E7L;
                    int16_t l_349 = 0x730CL;
                    uint64_t l_350 = 18446744073709551612UL;
                    int i, j;
                    l_339 |= l_338[4][1];
                    for (l_339 = 0; (l_339 != 19); ++l_339)
                    { /* block id: 138 */
                        int32_t *l_342 = (void*)0;
                        int16_t l_343 = 1L;
                        uint32_t l_344 = 4UL;
                        int8_t l_347 = 0x48L;
                        l_342 = (void*)0;
                        ++l_344;
                        l_347 |= 0x7243D8EAL;
                    }
                    if (((l_348 , 0x536337888637AB95L) , (l_350 |= (l_349 = (-1L)))))
                    { /* block id: 145 */
                        int32_t l_351 = 0x2E92F049L;
                        uint32_t *l_353[6];
                        uint32_t **l_352 = &l_353[2];
                        uint32_t **l_354 = &l_353[1];
                        uint32_t **l_355 = &l_353[0];
                        uint32_t **l_356[6][7] = {{&l_353[2],(void*)0,&l_353[0],&l_353[2],&l_353[3],&l_353[2],&l_353[2]},{&l_353[2],(void*)0,&l_353[0],&l_353[2],&l_353[3],&l_353[2],&l_353[2]},{&l_353[2],(void*)0,&l_353[0],&l_353[2],&l_353[3],&l_353[2],&l_353[2]},{&l_353[2],(void*)0,&l_353[0],&l_353[2],&l_353[3],&l_353[2],&l_353[2]},{&l_353[2],(void*)0,&l_353[0],&l_353[2],&l_353[3],&l_353[2],&l_353[2]},{&l_353[2],(void*)0,&l_353[0],&l_353[2],&l_353[3],&l_353[2],&l_353[2]}};
                        uint32_t **l_357 = &l_353[2];
                        int32_t l_358 = 1L;
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_353[i] = (void*)0;
                        l_357 = (l_356[1][6] = (l_351 , (l_355 = (l_354 = l_352))));
                        l_351 = l_358;
                    }
                    else
                    { /* block id: 151 */
                        int8_t l_359[3];
                        int8_t l_360 = 0x60L;
                        int32_t l_361[1];
                        uint32_t l_362 = 0x30F2C12DL;
                        int32_t *l_365 = (void*)0;
                        int32_t *l_366 = &l_361[0];
                        int32_t *l_367 = &l_361[0];
                        int32_t *l_368 = &l_361[0];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_359[i] = 0x4BL;
                        for (i = 0; i < 1; i++)
                            l_361[i] = (-4L);
                        l_360 = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xACBCEC4523805A0BL, 0UL)))), 0x971CE6CB97871567L, 0x58E60A4678CE95AAL)).w , l_359[2]);
                        l_362--;
                        l_366 = l_365;
                        l_368 = (l_367 = (void*)0);
                    }
                }
                ++l_369;
                l_374 = (l_373 = l_372);
                l_375 = 0x24C9520CL;
                unsigned int result = 0;
                int l_335_i0;
                for (l_335_i0 = 0; l_335_i0 < 10; l_335_i0++) {
                    result += l_335[l_335_i0];
                }
                result += l_369;
                result += l_375;
                atomic_add(&p_648->l_special_values[34], result);
            }
            else
            { /* block id: 163 */
                (1 + 1);
            }
            for (p_648->g_61 = (-29); (p_648->g_61 == 11); ++p_648->g_61)
            { /* block id: 168 */
                if (l_378[3])
                    break;
            }
        }
        else
        { /* block id: 171 */
            uint16_t l_381[8][8][4] = {{{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL}},{{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL}},{{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL}},{{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL}},{{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL}},{{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL}},{{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL}},{{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL},{0x69ACL,0UL,65528UL,65535UL}}};
            int i, j, k;
            if ((atomic_inc(&p_648->l_atomic_input[42]) == 3))
            { /* block id: 173 */
                int32_t l_379 = 0x53E825C8L;
                uint16_t l_380 = 0UL;
                l_380 ^= l_379;
                unsigned int result = 0;
                result += l_379;
                result += l_380;
                atomic_add(&p_648->l_special_values[42], result);
            }
            else
            { /* block id: 175 */
                (1 + 1);
            }
            --l_381[0][4][1];
        }
        l_254 &= (*p_23);
    }
    else
    { /* block id: 181 */
        uint32_t ***l_398 = &l_396;
        (*l_231) = ((safe_unary_minus_func_uint16_t_u(p_22)) != (safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(p_648->g_389.s23420177)).s75, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-8L), 0x14192363L)).xxyy)).odd))).even , FAKE_DIVERGE(p_648->local_0_offset, get_local_id(0), 10)), (safe_lshift_func_uint16_t_u_s(p_22, (p_22 != (p_648->g_244 = p_648->g_120)))))) == (+(safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(65535UL, ((VECTOR(uint16_t, 2))(l_394.s52)), 1UL)).w, 4)))), 3)));
        (*l_231) = ((((*l_398) = (((VECTOR(int32_t, 8))(l_395.s12477741)).s4 , l_396)) != (p_648->g_399 = (void*)0)) <= p_648->g_61);
    }
    (*p_648->g_418) = func_43((safe_add_func_int64_t_s_s((GROUP_DIVERGE(1, 1) , (safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((safe_mul_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(p_648->g_409.seb)).even, (l_410 != (void*)0))) > p_22), (safe_div_func_uint8_t_u_u((*l_231), 1UL)))), (((p_22 , (void*)0) == &l_396) != (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(0x76L, (*l_231))), 1L)))))), p_22)), (*l_231), l_417, p_648);
    return (*p_648->g_252);
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_141 p_648->g_142 p_648->g_137 p_648->g_153 p_648->g_25
 * writes: p_648->g_142 p_648->g_137 p_648->g_141 p_648->g_155
 */
int8_t  func_27(uint64_t  p_28, uint32_t  p_29, uint64_t  p_30, struct S0 * p_648)
{ /* block id: 58 */
    uint16_t l_150 = 65526UL;
    int32_t l_160 = 0x09BE62DBL;
    int16_t **l_178[3][4][6] = {{{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155},{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155},{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155},{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155}},{{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155},{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155},{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155},{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155}},{{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155},{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155},{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155},{(void*)0,&p_648->g_155,&p_648->g_155,(void*)0,&p_648->g_155,&p_648->g_155}}};
    uint32_t l_192 = 4294967289UL;
    int i, j, k;
    (*p_648->g_141) = l_150;
    (*p_648->g_141) &= (-1L);
    for (p_648->g_137 = 0; (p_648->g_137 >= (-26)); p_648->g_137 = safe_sub_func_int8_t_s_s(p_648->g_137, 1))
    { /* block id: 63 */
        int16_t **l_154 = (void*)0;
        VECTOR(int32_t, 2) l_156 = (VECTOR(int32_t, 2))(0x580673BCL, 0L);
        VECTOR(uint32_t, 4) l_171 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL);
        int32_t *l_187 = &p_648->g_142;
        VECTOR(uint64_t, 2) l_188 = (VECTOR(uint64_t, 2))(2UL, 0x7A1910C96EE17F40L);
        int32_t *l_190 = &p_648->g_191[1][0][0];
        uint8_t *l_193[4][4][7] = {{{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_648->g_120,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        (*p_648->g_153) = &p_648->g_25[3][1];
        (*l_187) = ((((p_648->g_155 = &p_648->g_137) != (l_156.x , &p_648->g_137)) <= ((VECTOR(uint16_t, 4))(p_648->g_157.yzzy)).x) && ((~(safe_lshift_func_uint16_t_u_u((((l_160 = 0x104350C7L) > ((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))((safe_mod_func_int32_t_s_s(((safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 8))(l_171.xyxzxwwz)).s6200034653447677))).s8, (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))(p_648->g_176.xyyxyxyx)).s50, ((VECTOR(uint8_t, 4))(p_648->g_177.sb478)).odd))), 0UL, 0x32L, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(((void*)0 != l_178[1][1][3]), 0xF5L, (p_648->g_120 = ((VECTOR(uint8_t, 16))(0x46L, ((VECTOR(uint8_t, 2))(p_648->g_179.xy)), (((safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_648->g_186.s10)).yxxxyyyyxyxyxyxx)).s8, (((*l_190) = (l_187 != ((*p_648->g_153) = ((((VECTOR(uint64_t, 16))(l_188.yyyxxxxxyyyxyyxx)).sa | ((p_648->g_189 == (void*)0) | 0xCD8EA7C6L)) , (*p_648->g_153))))) , l_150))) >= 0x5D029318L) , 0x019D5596L) | l_150), l_192)), p_28)) , p_28) ^ 0xD17905CFL), ((VECTOR(uint8_t, 2))(0x59L)), ((VECTOR(uint8_t, 4))(0xA6L)), 6UL, 0x48L, 0UL, 7UL, 6UL, 0x48L)).s8), ((VECTOR(uint8_t, 8))(0xC4L)), 8UL, ((VECTOR(uint8_t, 2))(4UL)), 0xA5L, 0UL)).s3b))).yxxx)).lo, ((VECTOR(uint8_t, 2))(1UL))))), ((VECTOR(uint8_t, 8))(0xEFL)), 7UL, 255UL)).s20a0)), ((VECTOR(uint8_t, 4))(250UL)))).odd, ((VECTOR(uint8_t, 4))(255UL))))).lo)).yyyx)).z, 6)), (*l_187))))), 0xEEFDL)) | 0xE2L), (*l_187))), ((VECTOR(int16_t, 2))(1L)), 0x4A17L)).hi))).lo < p_30) || p_648->g_25[3][1]), p_29)), p_30)) , l_192)) & p_30), FAKE_DIVERGE(p_648->global_0_offset, get_global_id(0), 10)))) != 8UL));
    }
    return p_648->g_142;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_25 p_648->g_62 p_648->l_comm_values p_648->g_120 p_648->g_125 p_648->g_127 p_648->g_61 p_648->g_comm_values p_648->g_137 p_648->g_140 p_648->g_141 p_648->g_142
 * writes: p_648->g_61 p_648->g_62 p_648->g_120 p_648->g_137 p_648->g_25 p_648->g_142
 */
uint16_t  func_33(uint32_t  p_34, uint64_t  p_35, struct S0 * p_648)
{ /* block id: 9 */
    int32_t l_42 = 0x7C6DD3EDL;
    VECTOR(int64_t, 16) l_47 = (VECTOR(int64_t, 16))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 0x1606DC0689276496L), 0x1606DC0689276496L), 0x1606DC0689276496L, (-7L), 0x1606DC0689276496L, (VECTOR(int64_t, 2))((-7L), 0x1606DC0689276496L), (VECTOR(int64_t, 2))((-7L), 0x1606DC0689276496L), (-7L), 0x1606DC0689276496L, (-7L), 0x1606DC0689276496L);
    int32_t *l_49 = &p_648->g_25[1][1];
    int32_t **l_48 = &l_49;
    uint32_t *l_60 = &p_648->g_61;
    int32_t *l_143 = &p_648->g_142;
    int i;
    (*p_648->g_141) ^= ((func_36(l_42, (((*l_48) = func_43(p_34, ((((((((VECTOR(int64_t, 16))(l_47.s90b2811ffbe62699)).sf || (((((*l_48) = &p_648->g_25[3][1]) == &p_648->g_25[3][1]) , ((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((**l_48), (safe_sub_func_uint32_t_u_u(((*l_60) = (+p_648->g_25[3][1])), (*l_49))))), ((p_648->g_62 = 0L) <= (p_34 , 0x22L)))) > 0L), (-4L))) < p_648->g_25[3][1])) != 1UL)) , (-9L)) && (-6L)) , (*l_49)) ^ p_35) || p_648->g_62), l_47.s7, p_648)) == p_648->g_140[1]), p_648->g_141, &p_648->g_142, l_143, p_648) , (*l_48)) != &p_648->g_142);
    (*l_143) &= (safe_mul_func_int16_t_s_s((p_34 != p_648->g_62), p_34));
    return (*l_49);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_36(uint8_t  p_37, uint16_t  p_38, int32_t * p_39, int32_t * p_40, int32_t * p_41, struct S0 * p_648)
{ /* block id: 53 */
    int32_t l_144 = 0x46AD9C61L;
    return l_144;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_62 p_648->l_comm_values p_648->g_120 p_648->g_125 p_648->g_127 p_648->g_61 p_648->g_comm_values p_648->g_137 p_648->g_25
 * writes: p_648->g_62 p_648->g_120 p_648->g_61 p_648->g_137 p_648->g_25
 */
int32_t * func_43(uint64_t  p_44, uint64_t  p_45, int32_t  p_46, struct S0 * p_648)
{ /* block id: 13 */
    int32_t *l_63[6][5][6] = {{{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]}},{{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]}},{{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]}},{{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]}},{{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]}},{{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]},{&p_648->g_25[1][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[3][1],&p_648->g_25[0][0],&p_648->g_25[3][1]}}};
    uint16_t l_64 = 0xF6C6L;
    VECTOR(int32_t, 8) l_71 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-8L)), (-8L)), (-8L), 3L, (-8L));
    int32_t l_134 = 0x13F27325L;
    int i, j, k;
    l_64--;
    atomic_min(&p_648->l_atomic_reduction[0], (safe_mul_func_int16_t_s_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_71.s2541)))).z && (&l_63[0][4][2] != (void*)0)), p_648->g_62)));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_648->v_collective += p_648->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    for (p_45 = (-22); (p_45 >= 60); p_45++)
    { /* block id: 18 */
        int8_t l_77 = 1L;
        int64_t *l_83 = (void*)0;
        int64_t *l_84 = (void*)0;
        int32_t l_85[3][4][3] = {{{0x5FF26AE3L,0x574D2646L,0x4A122FC4L},{0x5FF26AE3L,0x574D2646L,0x4A122FC4L},{0x5FF26AE3L,0x574D2646L,0x4A122FC4L},{0x5FF26AE3L,0x574D2646L,0x4A122FC4L}},{{0x5FF26AE3L,0x574D2646L,0x4A122FC4L},{0x5FF26AE3L,0x574D2646L,0x4A122FC4L},{0x5FF26AE3L,0x574D2646L,0x4A122FC4L},{0x5FF26AE3L,0x574D2646L,0x4A122FC4L}},{{0x5FF26AE3L,0x574D2646L,0x4A122FC4L},{0x5FF26AE3L,0x574D2646L,0x4A122FC4L},{0x5FF26AE3L,0x574D2646L,0x4A122FC4L},{0x5FF26AE3L,0x574D2646L,0x4A122FC4L}}};
        uint16_t *l_100 = &l_64;
        int64_t *l_101 = (void*)0;
        int64_t *l_102[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_103[9][7] = {{0x1317E4F0L,7L,0x55CE2574L,(-1L),0x6D3EBDD5L,(-4L),0L},{0x1317E4F0L,7L,0x55CE2574L,(-1L),0x6D3EBDD5L,(-4L),0L},{0x1317E4F0L,7L,0x55CE2574L,(-1L),0x6D3EBDD5L,(-4L),0L},{0x1317E4F0L,7L,0x55CE2574L,(-1L),0x6D3EBDD5L,(-4L),0L},{0x1317E4F0L,7L,0x55CE2574L,(-1L),0x6D3EBDD5L,(-4L),0L},{0x1317E4F0L,7L,0x55CE2574L,(-1L),0x6D3EBDD5L,(-4L),0L},{0x1317E4F0L,7L,0x55CE2574L,(-1L),0x6D3EBDD5L,(-4L),0L},{0x1317E4F0L,7L,0x55CE2574L,(-1L),0x6D3EBDD5L,(-4L),0L},{0x1317E4F0L,7L,0x55CE2574L,(-1L),0x6D3EBDD5L,(-4L),0L}};
        VECTOR(int32_t, 2) l_123 = (VECTOR(int32_t, 2))((-9L), 0x5EB62234L);
        int i, j, k;
        p_46 = (safe_add_func_int32_t_s_s(((l_103[8][5] = (((safe_unary_minus_func_uint32_t_u((&p_648->g_25[1][0] == &p_648->g_25[3][1]))) , (l_77 , &p_46)) != (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 2))(p_648->g_78.yx)), (uint16_t)(safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_100) = ((l_85[2][0][0] &= 0x16E0766B1C03A75FL) >= (safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((0x3631664A1005E543L >= (((safe_div_func_uint32_t_u_u(((((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(p_45, 9)), 0xA1FAE61DEDA81942L)) < p_45) , 0x5271L) | 0x4AA9L), p_648->g_25[3][1])) , (void*)0) != (void*)0)), p_648->g_25[3][1])), l_77)), p_45)))), 12)), 4)), (uint16_t)p_648->g_78.x))).xyyx)).wwyzxyww)).s4 , &l_85[0][0][2]))) ^ p_44), FAKE_DIVERGE(p_648->local_1_offset, get_local_id(1), 10)));
        for (p_648->g_62 = 0; (p_648->g_62 == 3); p_648->g_62++)
        { /* block id: 25 */
            int32_t **l_115[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            uint8_t *l_118 = (void*)0;
            uint8_t *l_119 = &p_648->g_120;
            VECTOR(int32_t, 2) l_124 = (VECTOR(int32_t, 2))(0L, 0x6BBD39C2L);
            VECTOR(uint32_t, 16) l_126 = (VECTOR(uint32_t, 16))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0UL), 0UL), 0UL, 6UL, 0UL, (VECTOR(uint32_t, 2))(6UL, 0UL), (VECTOR(uint32_t, 2))(6UL, 0UL), 6UL, 0UL, 6UL, 0UL);
            uint32_t *l_135[8][7] = {{(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0,(void*)0,&p_648->g_61},{(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0,(void*)0,&p_648->g_61},{(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0,(void*)0,&p_648->g_61},{(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0,(void*)0,&p_648->g_61},{(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0,(void*)0,&p_648->g_61},{(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0,(void*)0,&p_648->g_61},{(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0,(void*)0,&p_648->g_61},{(void*)0,(void*)0,&p_648->g_61,(void*)0,(void*)0,(void*)0,&p_648->g_61}};
            int16_t *l_136 = &p_648->g_137;
            int i, j;
            if ((atomic_inc(&p_648->g_atomic_input[92 * get_linear_group_id() + 33]) == 0))
            { /* block id: 27 */
                int32_t l_106[1][1];
                int64_t l_110 = 0x3C26F71A791DEB0AL;
                uint64_t l_111 = 0x54E765359DE98D40L;
                uint32_t l_112 = 0UL;
                int16_t l_113 = 0x08B0L;
                VECTOR(int32_t, 2) l_114 = (VECTOR(int32_t, 2))(0x6BE310A9L, 0x4FD9A5CCL);
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_106[i][j] = 0x07D1E39FL;
                }
                for (l_106[0][0] = 0; (l_106[0][0] <= (-11)); l_106[0][0] = safe_sub_func_uint64_t_u_u(l_106[0][0], 1))
                { /* block id: 30 */
                    VECTOR(int16_t, 2) l_109 = (VECTOR(int16_t, 2))((-10L), 0x3CC4L);
                    int i;
                    l_109.x = 0x55567A96L;
                }
                l_114.x |= (l_113 = (l_110 , (l_112 = l_111)));
                unsigned int result = 0;
                int l_106_i0, l_106_i1;
                for (l_106_i0 = 0; l_106_i0 < 1; l_106_i0++) {
                    for (l_106_i1 = 0; l_106_i1 < 1; l_106_i1++) {
                        result += l_106[l_106_i0][l_106_i1];
                    }
                }
                result += l_110;
                result += l_111;
                result += l_112;
                result += l_113;
                result += l_114.y;
                result += l_114.x;
                atomic_add(&p_648->g_special_values[92 * get_linear_group_id() + 33], result);
            }
            else
            { /* block id: 36 */
                (1 + 1);
            }
            l_63[1][0][2] = &p_46;
            p_648->g_25[3][1] |= (((safe_rshift_func_uint8_t_u_u((&p_46 == (void*)0), p_44)) | p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 59))]) > (((*l_136) |= ((((*l_119)++) & (p_46 != (p_648->g_61 = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(l_123.xyxx)).xyxxzyzy, ((VECTOR(int32_t, 16))(l_124.xxyxxxyyyxxyxyxx)).lo, ((VECTOR(int32_t, 8))(p_648->g_125.s41153151))))).even))).even, ((VECTOR(uint32_t, 8))(l_126.s27d408d0)).s07, ((VECTOR(uint32_t, 8))(p_648->g_127.s14154550)).s05))))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(1UL, 0UL)).yxyx)).odd, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(2UL, 1UL)).xxyyyxxx)).s22))).yyxx)), (safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s((p_648->g_61 < p_648->g_125.s2), l_77)) > p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 59))]) > p_648->g_comm_values[p_648->tid]), 0UL)) || 0x104DL), l_134)), p_648->g_127.s5, 1UL, ((VECTOR(uint32_t, 4))(0xB2AD0072L)), 0x6A80461CL, 0UL, 1UL)).s1))) , p_648->g_127.s6)) != 0xBB1FL));
        }
        for (p_648->g_61 = (-2); (p_648->g_61 < 15); p_648->g_61 = safe_add_func_int16_t_s_s(p_648->g_61, 1))
        { /* block id: 47 */
            p_46 &= (p_648->g_comm_values[p_648->tid] && p_648->g_125.s4);
        }
    }
    return &p_648->g_25[1][0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_comm_values[i] = 1;
    struct S0 c_649;
    struct S0* p_648 = &c_649;
    struct S0 c_650 = {
        {{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}}, // p_648->g_25
        1UL, // p_648->g_61
        0xC1L, // p_648->g_62
        (VECTOR(uint16_t, 2))(8UL, 1UL), // p_648->g_78
        0x35L, // p_648->g_120
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x14961C1CL), 0x14961C1CL), 0x14961C1CL, (-1L), 0x14961C1CL), // p_648->g_125
        (VECTOR(uint32_t, 8))(0xA3BFF2BCL, (VECTOR(uint32_t, 4))(0xA3BFF2BCL, (VECTOR(uint32_t, 2))(0xA3BFF2BCL, 1UL), 1UL), 1UL, 0xA3BFF2BCL, 1UL), // p_648->g_127
        0x5562L, // p_648->g_137
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_648->g_140
        0x6BF440EAL, // p_648->g_142
        &p_648->g_142, // p_648->g_141
        &p_648->g_141, // p_648->g_153
        (void*)0, // p_648->g_155
        (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x2163L), 0x2163L), // p_648->g_157
        (VECTOR(uint8_t, 2))(1UL, 0xC7L), // p_648->g_176
        (VECTOR(uint8_t, 16))(0x40L, (VECTOR(uint8_t, 4))(0x40L, (VECTOR(uint8_t, 2))(0x40L, 3UL), 3UL), 3UL, 0x40L, 3UL, (VECTOR(uint8_t, 2))(0x40L, 3UL), (VECTOR(uint8_t, 2))(0x40L, 3UL), 0x40L, 3UL, 0x40L, 3UL), // p_648->g_177
        (VECTOR(uint8_t, 2))(255UL, 247UL), // p_648->g_179
        (VECTOR(uint8_t, 8))(0xD7L, (VECTOR(uint8_t, 4))(0xD7L, (VECTOR(uint8_t, 2))(0xD7L, 255UL), 255UL), 255UL, 0xD7L, 255UL), // p_648->g_186
        (void*)0, // p_648->g_189
        {{{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL}},{{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL}},{{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL}},{{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL}},{{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL}},{{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL}},{{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL}},{{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL}},{{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL},{0x2DD0621BL}}}, // p_648->g_191
        (VECTOR(int8_t, 16))(0x69L, (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, (-1L)), (-1L)), (-1L), 0x69L, (-1L), (VECTOR(int8_t, 2))(0x69L, (-1L)), (VECTOR(int8_t, 2))(0x69L, (-1L)), 0x69L, (-1L), 0x69L, (-1L)), // p_648->g_195
        0x1CF694FAL, // p_648->g_198
        (VECTOR(uint8_t, 4))(0x79L, (VECTOR(uint8_t, 2))(0x79L, 0xE6L), 0xE6L), // p_648->g_209
        4294967295UL, // p_648->g_215
        (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 2L), 2L), 2L, (-10L), 2L, (VECTOR(int16_t, 2))((-10L), 2L), (VECTOR(int16_t, 2))((-10L), 2L), (-10L), 2L, (-10L), 2L), // p_648->g_223
        &p_648->g_141, // p_648->g_237
        65535UL, // p_648->g_244
        &p_648->g_141, // p_648->g_252
        (VECTOR(int8_t, 2))(0x52L, (-3L)), // p_648->g_287
        (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x0BL), 0x0BL), // p_648->g_288
        0x21L, // p_648->g_297
        &p_648->g_215, // p_648->g_298
        (void*)0, // p_648->g_320
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_648->g_389
        &p_648->g_61, // p_648->g_400
        &p_648->g_400, // p_648->g_399
        (VECTOR(uint32_t, 16))(0x6DD2CE0DL, (VECTOR(uint32_t, 4))(0x6DD2CE0DL, (VECTOR(uint32_t, 2))(0x6DD2CE0DL, 0x0BB5CFA8L), 0x0BB5CFA8L), 0x0BB5CFA8L, 0x6DD2CE0DL, 0x0BB5CFA8L, (VECTOR(uint32_t, 2))(0x6DD2CE0DL, 0x0BB5CFA8L), (VECTOR(uint32_t, 2))(0x6DD2CE0DL, 0x0BB5CFA8L), 0x6DD2CE0DL, 0x0BB5CFA8L, 0x6DD2CE0DL, 0x0BB5CFA8L), // p_648->g_409
        &p_648->g_141, // p_648->g_418
        &p_648->g_141, // p_648->g_419
        (void*)0, // p_648->g_426
        (VECTOR(int16_t, 16))(0x2B78L, (VECTOR(int16_t, 4))(0x2B78L, (VECTOR(int16_t, 2))(0x2B78L, 0x316DL), 0x316DL), 0x316DL, 0x2B78L, 0x316DL, (VECTOR(int16_t, 2))(0x2B78L, 0x316DL), (VECTOR(int16_t, 2))(0x2B78L, 0x316DL), 0x2B78L, 0x316DL, 0x2B78L, 0x316DL), // p_648->g_429
        (-9L), // p_648->g_479
        (void*)0, // p_648->g_490
        &p_648->g_490, // p_648->g_489
        0x2696175EAF6B0E7DL, // p_648->g_493
        (VECTOR(int64_t, 4))(0x1987C9B9BBFCA88EL, (VECTOR(int64_t, 2))(0x1987C9B9BBFCA88EL, 0L), 0L), // p_648->g_508
        (VECTOR(int64_t, 2))(0x607D01DCAB14CE97L, 0x6C6800D077C87F6EL), // p_648->g_509
        (void*)0, // p_648->g_527
        &p_648->g_527, // p_648->g_526
        &p_648->g_526, // p_648->g_525
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x43L), 0x43L), // p_648->g_549
        &p_648->g_244, // p_648->g_591
        {&p_648->g_591}, // p_648->g_590
        (VECTOR(uint16_t, 8))(0x9D0BL, (VECTOR(uint16_t, 4))(0x9D0BL, (VECTOR(uint16_t, 2))(0x9D0BL, 65532UL), 65532UL), 65532UL, 0x9D0BL, 65532UL), // p_648->g_600
        {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}, // p_648->g_602
        (VECTOR(int32_t, 4))(0x028AA168L, (VECTOR(int32_t, 2))(0x028AA168L, 0x6195D105L), 0x6195D105L), // p_648->g_614
        (VECTOR(int64_t, 8))(0x7F754E2FF5E8C164L, (VECTOR(int64_t, 4))(0x7F754E2FF5E8C164L, (VECTOR(int64_t, 2))(0x7F754E2FF5E8C164L, (-4L)), (-4L)), (-4L), 0x7F754E2FF5E8C164L, (-4L)), // p_648->g_623
        (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551609UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551615UL), 18446744073709551609UL, 18446744073709551615UL, 18446744073709551609UL, 18446744073709551615UL), // p_648->g_631
        (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0x28626B8C9FB05880L), 0x28626B8C9FB05880L), // p_648->g_632
        (VECTOR(int16_t, 8))(0x7523L, (VECTOR(int16_t, 4))(0x7523L, (VECTOR(int16_t, 2))(0x7523L, (-1L)), (-1L)), (-1L), 0x7523L, (-1L)), // p_648->g_643
        0, // p_648->v_collective
        sequence_input[get_global_id(0)], // p_648->global_0_offset
        sequence_input[get_global_id(1)], // p_648->global_1_offset
        sequence_input[get_global_id(2)], // p_648->global_2_offset
        sequence_input[get_local_id(0)], // p_648->local_0_offset
        sequence_input[get_local_id(1)], // p_648->local_1_offset
        sequence_input[get_local_id(2)], // p_648->local_2_offset
        sequence_input[get_group_id(0)], // p_648->group_0_offset
        sequence_input[get_group_id(1)], // p_648->group_1_offset
        sequence_input[get_group_id(2)], // p_648->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 59)), permutations[0][get_linear_local_id()])), // p_648->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_649 = c_650;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_648);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_648->g_25[i][j], "p_648->g_25[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_648->g_61, "p_648->g_61", print_hash_value);
    transparent_crc(p_648->g_62, "p_648->g_62", print_hash_value);
    transparent_crc(p_648->g_78.x, "p_648->g_78.x", print_hash_value);
    transparent_crc(p_648->g_78.y, "p_648->g_78.y", print_hash_value);
    transparent_crc(p_648->g_120, "p_648->g_120", print_hash_value);
    transparent_crc(p_648->g_125.s0, "p_648->g_125.s0", print_hash_value);
    transparent_crc(p_648->g_125.s1, "p_648->g_125.s1", print_hash_value);
    transparent_crc(p_648->g_125.s2, "p_648->g_125.s2", print_hash_value);
    transparent_crc(p_648->g_125.s3, "p_648->g_125.s3", print_hash_value);
    transparent_crc(p_648->g_125.s4, "p_648->g_125.s4", print_hash_value);
    transparent_crc(p_648->g_125.s5, "p_648->g_125.s5", print_hash_value);
    transparent_crc(p_648->g_125.s6, "p_648->g_125.s6", print_hash_value);
    transparent_crc(p_648->g_125.s7, "p_648->g_125.s7", print_hash_value);
    transparent_crc(p_648->g_127.s0, "p_648->g_127.s0", print_hash_value);
    transparent_crc(p_648->g_127.s1, "p_648->g_127.s1", print_hash_value);
    transparent_crc(p_648->g_127.s2, "p_648->g_127.s2", print_hash_value);
    transparent_crc(p_648->g_127.s3, "p_648->g_127.s3", print_hash_value);
    transparent_crc(p_648->g_127.s4, "p_648->g_127.s4", print_hash_value);
    transparent_crc(p_648->g_127.s5, "p_648->g_127.s5", print_hash_value);
    transparent_crc(p_648->g_127.s6, "p_648->g_127.s6", print_hash_value);
    transparent_crc(p_648->g_127.s7, "p_648->g_127.s7", print_hash_value);
    transparent_crc(p_648->g_137, "p_648->g_137", print_hash_value);
    transparent_crc(p_648->g_142, "p_648->g_142", print_hash_value);
    transparent_crc(p_648->g_157.x, "p_648->g_157.x", print_hash_value);
    transparent_crc(p_648->g_157.y, "p_648->g_157.y", print_hash_value);
    transparent_crc(p_648->g_157.z, "p_648->g_157.z", print_hash_value);
    transparent_crc(p_648->g_157.w, "p_648->g_157.w", print_hash_value);
    transparent_crc(p_648->g_176.x, "p_648->g_176.x", print_hash_value);
    transparent_crc(p_648->g_176.y, "p_648->g_176.y", print_hash_value);
    transparent_crc(p_648->g_177.s0, "p_648->g_177.s0", print_hash_value);
    transparent_crc(p_648->g_177.s1, "p_648->g_177.s1", print_hash_value);
    transparent_crc(p_648->g_177.s2, "p_648->g_177.s2", print_hash_value);
    transparent_crc(p_648->g_177.s3, "p_648->g_177.s3", print_hash_value);
    transparent_crc(p_648->g_177.s4, "p_648->g_177.s4", print_hash_value);
    transparent_crc(p_648->g_177.s5, "p_648->g_177.s5", print_hash_value);
    transparent_crc(p_648->g_177.s6, "p_648->g_177.s6", print_hash_value);
    transparent_crc(p_648->g_177.s7, "p_648->g_177.s7", print_hash_value);
    transparent_crc(p_648->g_177.s8, "p_648->g_177.s8", print_hash_value);
    transparent_crc(p_648->g_177.s9, "p_648->g_177.s9", print_hash_value);
    transparent_crc(p_648->g_177.sa, "p_648->g_177.sa", print_hash_value);
    transparent_crc(p_648->g_177.sb, "p_648->g_177.sb", print_hash_value);
    transparent_crc(p_648->g_177.sc, "p_648->g_177.sc", print_hash_value);
    transparent_crc(p_648->g_177.sd, "p_648->g_177.sd", print_hash_value);
    transparent_crc(p_648->g_177.se, "p_648->g_177.se", print_hash_value);
    transparent_crc(p_648->g_177.sf, "p_648->g_177.sf", print_hash_value);
    transparent_crc(p_648->g_179.x, "p_648->g_179.x", print_hash_value);
    transparent_crc(p_648->g_179.y, "p_648->g_179.y", print_hash_value);
    transparent_crc(p_648->g_186.s0, "p_648->g_186.s0", print_hash_value);
    transparent_crc(p_648->g_186.s1, "p_648->g_186.s1", print_hash_value);
    transparent_crc(p_648->g_186.s2, "p_648->g_186.s2", print_hash_value);
    transparent_crc(p_648->g_186.s3, "p_648->g_186.s3", print_hash_value);
    transparent_crc(p_648->g_186.s4, "p_648->g_186.s4", print_hash_value);
    transparent_crc(p_648->g_186.s5, "p_648->g_186.s5", print_hash_value);
    transparent_crc(p_648->g_186.s6, "p_648->g_186.s6", print_hash_value);
    transparent_crc(p_648->g_186.s7, "p_648->g_186.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_648->g_191[i][j][k], "p_648->g_191[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_648->g_195.s0, "p_648->g_195.s0", print_hash_value);
    transparent_crc(p_648->g_195.s1, "p_648->g_195.s1", print_hash_value);
    transparent_crc(p_648->g_195.s2, "p_648->g_195.s2", print_hash_value);
    transparent_crc(p_648->g_195.s3, "p_648->g_195.s3", print_hash_value);
    transparent_crc(p_648->g_195.s4, "p_648->g_195.s4", print_hash_value);
    transparent_crc(p_648->g_195.s5, "p_648->g_195.s5", print_hash_value);
    transparent_crc(p_648->g_195.s6, "p_648->g_195.s6", print_hash_value);
    transparent_crc(p_648->g_195.s7, "p_648->g_195.s7", print_hash_value);
    transparent_crc(p_648->g_195.s8, "p_648->g_195.s8", print_hash_value);
    transparent_crc(p_648->g_195.s9, "p_648->g_195.s9", print_hash_value);
    transparent_crc(p_648->g_195.sa, "p_648->g_195.sa", print_hash_value);
    transparent_crc(p_648->g_195.sb, "p_648->g_195.sb", print_hash_value);
    transparent_crc(p_648->g_195.sc, "p_648->g_195.sc", print_hash_value);
    transparent_crc(p_648->g_195.sd, "p_648->g_195.sd", print_hash_value);
    transparent_crc(p_648->g_195.se, "p_648->g_195.se", print_hash_value);
    transparent_crc(p_648->g_195.sf, "p_648->g_195.sf", print_hash_value);
    transparent_crc(p_648->g_198, "p_648->g_198", print_hash_value);
    transparent_crc(p_648->g_209.x, "p_648->g_209.x", print_hash_value);
    transparent_crc(p_648->g_209.y, "p_648->g_209.y", print_hash_value);
    transparent_crc(p_648->g_209.z, "p_648->g_209.z", print_hash_value);
    transparent_crc(p_648->g_209.w, "p_648->g_209.w", print_hash_value);
    transparent_crc(p_648->g_215, "p_648->g_215", print_hash_value);
    transparent_crc(p_648->g_223.s0, "p_648->g_223.s0", print_hash_value);
    transparent_crc(p_648->g_223.s1, "p_648->g_223.s1", print_hash_value);
    transparent_crc(p_648->g_223.s2, "p_648->g_223.s2", print_hash_value);
    transparent_crc(p_648->g_223.s3, "p_648->g_223.s3", print_hash_value);
    transparent_crc(p_648->g_223.s4, "p_648->g_223.s4", print_hash_value);
    transparent_crc(p_648->g_223.s5, "p_648->g_223.s5", print_hash_value);
    transparent_crc(p_648->g_223.s6, "p_648->g_223.s6", print_hash_value);
    transparent_crc(p_648->g_223.s7, "p_648->g_223.s7", print_hash_value);
    transparent_crc(p_648->g_223.s8, "p_648->g_223.s8", print_hash_value);
    transparent_crc(p_648->g_223.s9, "p_648->g_223.s9", print_hash_value);
    transparent_crc(p_648->g_223.sa, "p_648->g_223.sa", print_hash_value);
    transparent_crc(p_648->g_223.sb, "p_648->g_223.sb", print_hash_value);
    transparent_crc(p_648->g_223.sc, "p_648->g_223.sc", print_hash_value);
    transparent_crc(p_648->g_223.sd, "p_648->g_223.sd", print_hash_value);
    transparent_crc(p_648->g_223.se, "p_648->g_223.se", print_hash_value);
    transparent_crc(p_648->g_223.sf, "p_648->g_223.sf", print_hash_value);
    transparent_crc(p_648->g_244, "p_648->g_244", print_hash_value);
    transparent_crc(p_648->g_287.x, "p_648->g_287.x", print_hash_value);
    transparent_crc(p_648->g_287.y, "p_648->g_287.y", print_hash_value);
    transparent_crc(p_648->g_288.x, "p_648->g_288.x", print_hash_value);
    transparent_crc(p_648->g_288.y, "p_648->g_288.y", print_hash_value);
    transparent_crc(p_648->g_288.z, "p_648->g_288.z", print_hash_value);
    transparent_crc(p_648->g_288.w, "p_648->g_288.w", print_hash_value);
    transparent_crc(p_648->g_297, "p_648->g_297", print_hash_value);
    transparent_crc(p_648->g_389.s0, "p_648->g_389.s0", print_hash_value);
    transparent_crc(p_648->g_389.s1, "p_648->g_389.s1", print_hash_value);
    transparent_crc(p_648->g_389.s2, "p_648->g_389.s2", print_hash_value);
    transparent_crc(p_648->g_389.s3, "p_648->g_389.s3", print_hash_value);
    transparent_crc(p_648->g_389.s4, "p_648->g_389.s4", print_hash_value);
    transparent_crc(p_648->g_389.s5, "p_648->g_389.s5", print_hash_value);
    transparent_crc(p_648->g_389.s6, "p_648->g_389.s6", print_hash_value);
    transparent_crc(p_648->g_389.s7, "p_648->g_389.s7", print_hash_value);
    transparent_crc(p_648->g_409.s0, "p_648->g_409.s0", print_hash_value);
    transparent_crc(p_648->g_409.s1, "p_648->g_409.s1", print_hash_value);
    transparent_crc(p_648->g_409.s2, "p_648->g_409.s2", print_hash_value);
    transparent_crc(p_648->g_409.s3, "p_648->g_409.s3", print_hash_value);
    transparent_crc(p_648->g_409.s4, "p_648->g_409.s4", print_hash_value);
    transparent_crc(p_648->g_409.s5, "p_648->g_409.s5", print_hash_value);
    transparent_crc(p_648->g_409.s6, "p_648->g_409.s6", print_hash_value);
    transparent_crc(p_648->g_409.s7, "p_648->g_409.s7", print_hash_value);
    transparent_crc(p_648->g_409.s8, "p_648->g_409.s8", print_hash_value);
    transparent_crc(p_648->g_409.s9, "p_648->g_409.s9", print_hash_value);
    transparent_crc(p_648->g_409.sa, "p_648->g_409.sa", print_hash_value);
    transparent_crc(p_648->g_409.sb, "p_648->g_409.sb", print_hash_value);
    transparent_crc(p_648->g_409.sc, "p_648->g_409.sc", print_hash_value);
    transparent_crc(p_648->g_409.sd, "p_648->g_409.sd", print_hash_value);
    transparent_crc(p_648->g_409.se, "p_648->g_409.se", print_hash_value);
    transparent_crc(p_648->g_409.sf, "p_648->g_409.sf", print_hash_value);
    transparent_crc(p_648->g_429.s0, "p_648->g_429.s0", print_hash_value);
    transparent_crc(p_648->g_429.s1, "p_648->g_429.s1", print_hash_value);
    transparent_crc(p_648->g_429.s2, "p_648->g_429.s2", print_hash_value);
    transparent_crc(p_648->g_429.s3, "p_648->g_429.s3", print_hash_value);
    transparent_crc(p_648->g_429.s4, "p_648->g_429.s4", print_hash_value);
    transparent_crc(p_648->g_429.s5, "p_648->g_429.s5", print_hash_value);
    transparent_crc(p_648->g_429.s6, "p_648->g_429.s6", print_hash_value);
    transparent_crc(p_648->g_429.s7, "p_648->g_429.s7", print_hash_value);
    transparent_crc(p_648->g_429.s8, "p_648->g_429.s8", print_hash_value);
    transparent_crc(p_648->g_429.s9, "p_648->g_429.s9", print_hash_value);
    transparent_crc(p_648->g_429.sa, "p_648->g_429.sa", print_hash_value);
    transparent_crc(p_648->g_429.sb, "p_648->g_429.sb", print_hash_value);
    transparent_crc(p_648->g_429.sc, "p_648->g_429.sc", print_hash_value);
    transparent_crc(p_648->g_429.sd, "p_648->g_429.sd", print_hash_value);
    transparent_crc(p_648->g_429.se, "p_648->g_429.se", print_hash_value);
    transparent_crc(p_648->g_429.sf, "p_648->g_429.sf", print_hash_value);
    transparent_crc(p_648->g_479, "p_648->g_479", print_hash_value);
    transparent_crc(p_648->g_493, "p_648->g_493", print_hash_value);
    transparent_crc(p_648->g_508.x, "p_648->g_508.x", print_hash_value);
    transparent_crc(p_648->g_508.y, "p_648->g_508.y", print_hash_value);
    transparent_crc(p_648->g_508.z, "p_648->g_508.z", print_hash_value);
    transparent_crc(p_648->g_508.w, "p_648->g_508.w", print_hash_value);
    transparent_crc(p_648->g_509.x, "p_648->g_509.x", print_hash_value);
    transparent_crc(p_648->g_509.y, "p_648->g_509.y", print_hash_value);
    transparent_crc(p_648->g_549.x, "p_648->g_549.x", print_hash_value);
    transparent_crc(p_648->g_549.y, "p_648->g_549.y", print_hash_value);
    transparent_crc(p_648->g_549.z, "p_648->g_549.z", print_hash_value);
    transparent_crc(p_648->g_549.w, "p_648->g_549.w", print_hash_value);
    transparent_crc(p_648->g_600.s0, "p_648->g_600.s0", print_hash_value);
    transparent_crc(p_648->g_600.s1, "p_648->g_600.s1", print_hash_value);
    transparent_crc(p_648->g_600.s2, "p_648->g_600.s2", print_hash_value);
    transparent_crc(p_648->g_600.s3, "p_648->g_600.s3", print_hash_value);
    transparent_crc(p_648->g_600.s4, "p_648->g_600.s4", print_hash_value);
    transparent_crc(p_648->g_600.s5, "p_648->g_600.s5", print_hash_value);
    transparent_crc(p_648->g_600.s6, "p_648->g_600.s6", print_hash_value);
    transparent_crc(p_648->g_600.s7, "p_648->g_600.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_648->g_602[i], "p_648->g_602[i]", print_hash_value);

    }
    transparent_crc(p_648->g_614.x, "p_648->g_614.x", print_hash_value);
    transparent_crc(p_648->g_614.y, "p_648->g_614.y", print_hash_value);
    transparent_crc(p_648->g_614.z, "p_648->g_614.z", print_hash_value);
    transparent_crc(p_648->g_614.w, "p_648->g_614.w", print_hash_value);
    transparent_crc(p_648->g_623.s0, "p_648->g_623.s0", print_hash_value);
    transparent_crc(p_648->g_623.s1, "p_648->g_623.s1", print_hash_value);
    transparent_crc(p_648->g_623.s2, "p_648->g_623.s2", print_hash_value);
    transparent_crc(p_648->g_623.s3, "p_648->g_623.s3", print_hash_value);
    transparent_crc(p_648->g_623.s4, "p_648->g_623.s4", print_hash_value);
    transparent_crc(p_648->g_623.s5, "p_648->g_623.s5", print_hash_value);
    transparent_crc(p_648->g_623.s6, "p_648->g_623.s6", print_hash_value);
    transparent_crc(p_648->g_623.s7, "p_648->g_623.s7", print_hash_value);
    transparent_crc(p_648->g_631.s0, "p_648->g_631.s0", print_hash_value);
    transparent_crc(p_648->g_631.s1, "p_648->g_631.s1", print_hash_value);
    transparent_crc(p_648->g_631.s2, "p_648->g_631.s2", print_hash_value);
    transparent_crc(p_648->g_631.s3, "p_648->g_631.s3", print_hash_value);
    transparent_crc(p_648->g_631.s4, "p_648->g_631.s4", print_hash_value);
    transparent_crc(p_648->g_631.s5, "p_648->g_631.s5", print_hash_value);
    transparent_crc(p_648->g_631.s6, "p_648->g_631.s6", print_hash_value);
    transparent_crc(p_648->g_631.s7, "p_648->g_631.s7", print_hash_value);
    transparent_crc(p_648->g_631.s8, "p_648->g_631.s8", print_hash_value);
    transparent_crc(p_648->g_631.s9, "p_648->g_631.s9", print_hash_value);
    transparent_crc(p_648->g_631.sa, "p_648->g_631.sa", print_hash_value);
    transparent_crc(p_648->g_631.sb, "p_648->g_631.sb", print_hash_value);
    transparent_crc(p_648->g_631.sc, "p_648->g_631.sc", print_hash_value);
    transparent_crc(p_648->g_631.sd, "p_648->g_631.sd", print_hash_value);
    transparent_crc(p_648->g_631.se, "p_648->g_631.se", print_hash_value);
    transparent_crc(p_648->g_631.sf, "p_648->g_631.sf", print_hash_value);
    transparent_crc(p_648->g_632.x, "p_648->g_632.x", print_hash_value);
    transparent_crc(p_648->g_632.y, "p_648->g_632.y", print_hash_value);
    transparent_crc(p_648->g_632.z, "p_648->g_632.z", print_hash_value);
    transparent_crc(p_648->g_632.w, "p_648->g_632.w", print_hash_value);
    transparent_crc(p_648->g_643.s0, "p_648->g_643.s0", print_hash_value);
    transparent_crc(p_648->g_643.s1, "p_648->g_643.s1", print_hash_value);
    transparent_crc(p_648->g_643.s2, "p_648->g_643.s2", print_hash_value);
    transparent_crc(p_648->g_643.s3, "p_648->g_643.s3", print_hash_value);
    transparent_crc(p_648->g_643.s4, "p_648->g_643.s4", print_hash_value);
    transparent_crc(p_648->g_643.s5, "p_648->g_643.s5", print_hash_value);
    transparent_crc(p_648->g_643.s6, "p_648->g_643.s6", print_hash_value);
    transparent_crc(p_648->g_643.s7, "p_648->g_643.s7", print_hash_value);
    transparent_crc(p_648->v_collective, "p_648->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 92; i++)
            transparent_crc(p_648->g_special_values[i + 92 * get_linear_group_id()], "p_648->g_special_values[i + 92 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 92; i++)
            transparent_crc(p_648->l_special_values[i], "p_648->l_special_values[i]", print_hash_value);
    transparent_crc(p_648->l_comm_values[get_linear_local_id()], "p_648->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_648->g_comm_values[get_linear_group_id() * 59 + get_linear_local_id()], "p_648->g_comm_values[get_linear_group_id() * 59 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
