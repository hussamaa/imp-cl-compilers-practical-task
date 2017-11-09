// --atomics 39 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 88,74,1 -l 2,37,1
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

__constant uint32_t permutations[10][74] = {
{37,42,29,30,66,7,65,3,32,0,21,53,45,51,72,17,69,18,1,70,73,20,22,31,44,68,14,55,15,28,59,26,38,4,24,71,61,8,67,39,47,60,57,10,27,16,46,5,48,6,9,64,33,11,49,2,63,54,52,50,41,12,13,40,36,19,58,35,34,56,62,43,25,23}, // permutation 0
{14,24,61,55,53,58,23,8,15,2,50,66,31,17,26,56,27,32,20,67,39,37,36,10,68,21,18,72,71,42,22,73,12,44,13,29,51,19,63,70,25,45,57,11,41,69,35,5,34,59,64,62,48,54,40,1,28,43,60,0,16,4,6,52,65,49,30,38,47,3,33,9,7,46}, // permutation 1
{57,2,27,4,42,66,54,39,44,16,7,48,70,65,13,52,61,29,60,62,11,55,33,47,17,25,46,0,63,30,56,67,59,49,3,41,69,22,26,20,12,73,40,21,15,19,50,9,34,38,64,23,68,35,6,14,1,8,5,71,36,32,58,43,51,72,24,45,37,18,53,10,31,28}, // permutation 2
{67,44,22,25,65,28,34,54,58,12,51,10,61,60,32,26,20,36,8,66,0,38,43,52,23,56,47,9,69,21,48,71,13,7,62,3,6,57,31,70,16,4,46,1,73,37,45,14,24,72,5,59,35,19,64,18,53,2,55,33,41,15,29,42,68,27,50,63,39,49,17,30,11,40}, // permutation 3
{27,64,14,1,10,42,15,9,5,73,20,51,49,25,68,70,45,72,65,63,54,67,69,4,50,60,62,3,22,2,18,33,38,19,26,58,56,52,48,16,32,31,11,30,13,29,35,59,55,53,23,61,24,37,40,8,17,44,0,12,7,46,28,41,34,36,21,39,71,43,6,66,47,57}, // permutation 4
{66,38,33,43,41,17,68,0,26,56,14,29,3,34,40,36,49,63,47,24,65,61,23,72,9,8,13,45,73,20,2,57,35,60,50,42,22,30,32,28,6,7,55,31,4,18,44,59,67,58,69,39,37,48,53,62,21,46,51,27,25,12,70,52,5,11,1,54,10,71,16,15,64,19}, // permutation 5
{59,0,26,30,51,62,69,61,14,25,21,71,43,65,48,44,45,33,9,67,73,64,46,39,35,23,13,28,10,68,57,8,18,16,72,70,36,7,12,24,2,31,52,54,41,40,15,38,5,11,34,47,66,6,19,4,56,17,63,27,32,22,49,29,37,58,3,1,42,53,20,55,50,60}, // permutation 6
{59,11,38,65,14,12,28,3,29,69,54,47,25,57,46,0,33,71,41,16,21,18,8,44,31,60,4,37,48,52,58,53,35,13,1,43,10,36,49,67,42,73,66,39,63,17,15,40,61,72,27,5,9,50,2,19,7,68,26,23,30,22,20,56,34,64,70,6,45,24,32,55,51,62}, // permutation 7
{18,2,7,49,51,47,58,40,38,50,46,26,56,44,4,36,24,19,16,71,62,52,10,73,66,14,42,48,5,28,37,25,63,3,70,72,54,61,53,31,11,68,60,57,65,43,13,55,12,59,15,8,69,39,22,0,21,1,27,32,29,41,45,30,64,17,23,33,9,34,6,35,20,67}, // permutation 8
{72,56,45,67,1,7,61,8,53,57,20,59,22,60,71,12,37,24,34,63,27,23,16,69,73,58,28,48,36,46,62,31,47,66,70,15,26,43,6,54,14,19,33,9,41,10,0,40,68,4,18,5,42,44,2,35,29,38,64,32,17,3,51,55,30,49,65,52,13,39,25,50,11,21} // permutation 9
};

// Seed: 3441781674

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int64_t g_5;
    volatile uint32_t g_6;
    int32_t g_149;
    int32_t *g_148;
    volatile int64_t g_155;
    volatile int16_t g_156;
    volatile uint32_t g_157;
    uint8_t g_169;
    uint64_t g_184;
    int32_t g_188;
    int64_t g_192;
    uint16_t g_193[10][4][6];
    uint8_t g_198;
    int32_t g_199;
    VECTOR(int16_t, 4) g_506;
    volatile VECTOR(uint64_t, 2) g_520;
    int8_t g_531;
    int64_t g_533;
    volatile VECTOR(uint8_t, 8) g_537;
    int16_t *g_540;
    uint32_t g_545;
    VECTOR(uint64_t, 4) g_556;
    VECTOR(uint8_t, 16) g_569;
    volatile VECTOR(uint16_t, 8) g_571;
    volatile VECTOR(uint16_t, 4) g_573;
    volatile VECTOR(uint16_t, 2) g_576;
    uint64_t g_580;
    int32_t ** volatile g_594;
    int32_t ** volatile g_597;
    volatile uint16_t g_605;
    int32_t g_616;
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
int8_t  func_1(struct S0 * p_617);
int32_t * func_15(uint16_t  p_16, struct S0 * p_617);
int8_t  func_19(int32_t * p_20, struct S0 * p_617);
int32_t * func_21(int64_t  p_22, int32_t * p_23, struct S0 * p_617);
uint32_t  func_161(int32_t * p_162, int32_t  p_163, struct S0 * p_617);
int64_t  func_172(uint8_t * p_173, uint16_t  p_174, int32_t * p_175, uint8_t * p_176, struct S0 * p_617);
uint8_t * func_177(int8_t  p_178, int32_t  p_179, uint8_t * p_180, uint8_t * p_181, uint32_t  p_182, struct S0 * p_617);
int16_t  func_474(int64_t * p_475, uint8_t * p_476, int32_t  p_477, int32_t * p_478, struct S0 * p_617);
int64_t * func_479(int32_t ** p_480, int32_t ** p_481, int16_t  p_482, int32_t * p_483, int64_t * p_484, struct S0 * p_617);
int32_t ** func_485(uint32_t  p_486, struct S0 * p_617);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_617->g_6 p_617->l_comm_values p_617->g_5 p_617->g_148 p_617->g_157 p_617->g_149 p_617->g_comm_values p_617->g_193 p_617->g_199 p_617->g_198 p_617->g_188 p_617->g_192 p_617->g_506 p_617->g_520 p_617->g_184 p_617->g_537 p_617->g_540 p_617->g_155 p_617->g_545 p_617->g_556 p_617->g_569 p_617->g_571 p_617->g_573 p_617->g_576 p_617->g_580 p_617->g_533 p_617->g_594 p_617->g_597 p_617->g_605
 * writes: p_617->g_6 p_617->g_157 p_617->g_169 p_617->l_comm_values p_617->g_184 p_617->g_193 p_617->g_149 p_617->g_192 p_617->g_506 p_617->g_531 p_617->g_533 p_617->g_540 p_617->g_545 p_617->g_148 p_617->g_580 p_617->g_569 p_617->g_comm_values p_617->g_605 p_617->g_616
 */
int8_t  func_1(struct S0 * p_617)
{ /* block id: 4 */
    int32_t *l_2[1];
    uint16_t l_3 = 1UL;
    int32_t l_4 = 0x2DF1ADB2L;
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = (void*)0;
    l_3 ^= 0x3CDF98A5L;
    p_617->g_6++;
    p_617->g_616 = (p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 74))] , (safe_sub_func_int32_t_s_s((0x1A82E77EL | (&l_4 != (((((VECTOR(int16_t, 2))((-5L), 0L)).hi | (&l_4 != &l_4)) , ((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(1L, p_617->g_5, 0L, 0x778B15B45BEAC3EFL)).xyzwzyzy, ((VECTOR(int64_t, 2))(0x13ED423CB8E00457L, 0L)).yxxyyxyy))).s4) , func_15((safe_lshift_func_int8_t_s_u(func_19(func_21(((void*)0 == &l_4), &l_4, p_617), p_617), GROUP_DIVERGE(2, 1))), p_617)))), p_617->g_198)));
    return p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 74))];
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_157 p_617->g_149 p_617->l_comm_values p_617->g_comm_values p_617->g_193 p_617->g_199 p_617->g_148 p_617->g_6 p_617->g_198 p_617->g_188 p_617->g_192 p_617->g_506 p_617->g_520 p_617->g_184 p_617->g_537 p_617->g_540 p_617->g_155 p_617->g_545 p_617->g_556 p_617->g_569 p_617->g_571 p_617->g_573 p_617->g_576 p_617->g_580 p_617->g_533 p_617->g_594 p_617->g_597 p_617->g_605
 * writes: p_617->g_157 p_617->g_169 p_617->l_comm_values p_617->g_184 p_617->g_193 p_617->g_149 p_617->g_192 p_617->g_506 p_617->g_531 p_617->g_533 p_617->g_540 p_617->g_545 p_617->g_148 p_617->g_580 p_617->g_569 p_617->g_comm_values p_617->g_605
 */
int32_t * func_15(uint16_t  p_16, struct S0 * p_617)
{ /* block id: 121 */
    int32_t *l_160[10] = {&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149};
    VECTOR(int32_t, 16) l_469 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    uint8_t *l_562 = (void*)0;
    int64_t l_563 = 8L;
    uint8_t l_593 = 0UL;
    int8_t l_600 = 0x73L;
    int8_t l_602 = 0L;
    int64_t *l_613 = &p_617->g_192;
    int64_t **l_612 = &l_613;
    int32_t **l_614 = &l_160[6];
    int32_t *l_615[7][6][6] = {{{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199}},{{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199}},{{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199}},{{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199}},{{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199}},{{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199}},{{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199},{(void*)0,(void*)0,&p_617->g_199,&p_617->g_149,(void*)0,&p_617->g_199}}};
    int i, j, k;
    if (((((VECTOR(uint8_t, 4))(p_16, 0x41L, 255UL, 0UL)).z != (((VECTOR(uint8_t, 2))(0xADL, 0UL)).lo < GROUP_DIVERGE(2, 1))) , ((l_160[6] == (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(func_161(l_160[3], p_16, p_617), 6UL, 0x3CE5758EL, 0x0296A351L)).y, ((VECTOR(uint32_t, 16))(((void*)0 == l_160[6]), ((void*)0 != &l_160[4]), 1UL, ((VECTOR(uint32_t, 2))(0x8828CA61L)), 0x47701B57L, ((VECTOR(uint32_t, 8))(0x4E6488ABL)), 4294967293UL, 0x7A63DD0CL)).sf, p_617->g_198, p_617->g_comm_values[p_617->tid], p_617->g_198, 0xA68401D7L, ((VECTOR(uint32_t, 4))(4294967295UL)), 4294967295UL, p_617->g_193[3][0][1], ((VECTOR(uint32_t, 4))(0xC56B9A22L)))).s4 , l_160[6])) & p_617->g_188)))
    { /* block id: 306 */
        uint32_t l_487 = 4294967290UL;
        VECTOR(int8_t, 16) l_501 = (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L), (VECTOR(int8_t, 2))(3L, (-1L)), (VECTOR(int8_t, 2))(3L, (-1L)), 3L, (-1L), 3L, (-1L));
        int16_t *l_507 = (void*)0;
        int16_t *l_508[1][8][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_509 = (-2L);
        int64_t *l_510 = (void*)0;
        int64_t **l_561 = &l_510;
        int i, j, k;
        p_617->g_580 |= ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_469.sba9e)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(func_474(((*l_561) = func_479((p_617->g_6 , func_485(l_487, p_617)), &p_617->g_148, ((safe_add_func_int64_t_s_s(((p_16 < (((p_617->g_193[0][2][4] || ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_501.s7a)), 0x3DL, 0x72L)).y) > (safe_mul_func_int16_t_s_s(l_501.sb, (p_617->g_506.x = (~(l_509 = (safe_lshift_func_uint16_t_u_s((((((VECTOR(int16_t, 8))(p_617->g_506.yxyxxxwx)).s0 != p_617->g_506.y) > GROUP_DIVERGE(2, 1)) > 65532UL), 0)))))))) < 0xF0F091D2D1B01014L)) != FAKE_DIVERGE(p_617->global_0_offset, get_global_id(0), 10)), FAKE_DIVERGE(p_617->global_2_offset, get_global_id(2), 10))) , 2L), &p_617->g_199, l_510, p_617)), l_562, l_563, &p_617->g_199, p_617), 12)) ^ p_16), l_487)), (-5L), 0L, p_16, p_16, ((VECTOR(int32_t, 8))(0x4B9359C3L)), 0x25BC7E0CL, 0x463B0D9BL, (-6L))).s707d, (int32_t)6L, (int32_t)(-1L)))).wwyywzyxyyzzwwxz, ((VECTOR(int32_t, 16))(0x44976E0DL)), ((VECTOR(int32_t, 16))(0x4BA1820FL))))).s47, ((VECTOR(int32_t, 2))(0x1BA2B3B5L)), ((VECTOR(int32_t, 2))(0x2A5BAB5DL))))).yxxyyxyyxyyxxyxy, ((VECTOR(int32_t, 16))(2L))))), ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))((-2L)))))).hi)).s3463363556501104)).s9a))).odd;
        (*p_617->g_594) = func_21((safe_sub_func_uint64_t_u_u(((p_617->g_573.z <= ((safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), p_16)) >= (p_617->g_556.z || ((p_617->g_533 , ((!(~p_16)) | ((safe_rshift_func_int8_t_s_u(((p_617->g_506.y , (p_617->g_comm_values[p_617->tid] = (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_16, (p_617->g_569.s5 = p_16))), (safe_rshift_func_int16_t_s_u(p_16, p_16)))))) | l_593), 5)) == 0x100D3A8EL))) && p_16)))) >= p_16), 8UL)), &p_617->g_199, p_617);
        (*p_617->g_148) ^= p_16;
    }
    else
    { /* block id: 346 */
        int32_t l_599 = 9L;
        int32_t l_601 = 0x41E5DE15L;
        int32_t l_604[4][6] = {{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)}};
        int i, j;
        for (l_563 = 0; (l_563 >= 3); l_563 = safe_add_func_int64_t_s_s(l_563, 5))
        { /* block id: 349 */
            int32_t l_598 = 1L;
            int32_t l_603 = 0x12F197DEL;
            (*p_617->g_597) = l_160[8];
            --p_617->g_605;
        }
        (*p_617->g_597) = (*p_617->g_597);
    }
    p_617->g_149 = (safe_sub_func_uint16_t_u_u((FAKE_DIVERGE(p_617->global_1_offset, get_global_id(1), 10) , (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(0x64E4L, 1L)).xxyxxxyxxyyyyxxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_16, p_16, 1L, 0x25A8L)).ywzyxwxx)).s25)).xxyxyxxyxyyyxxxx))).s5, 12))), 65535UL));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_617->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 74)), permutations[(safe_mod_func_uint32_t_u_u((p_16 < (l_612 != (void*)0)), 10))][(safe_mod_func_uint32_t_u_u(p_617->tid, 74))]));
    (*l_614) = l_160[6];
    return l_615[3][2][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_157 p_617->g_149
 * writes: p_617->g_157
 */
int8_t  func_19(int32_t * p_20, struct S0 * p_617)
{ /* block id: 118 */
    int8_t l_150 = 0x44L;
    int32_t *l_151 = &p_617->g_149;
    int32_t l_152 = (-7L);
    int32_t l_153 = (-6L);
    int32_t *l_154[6][4][1] = {{{&l_153},{&l_153},{&l_153},{&l_153}},{{&l_153},{&l_153},{&l_153},{&l_153}},{{&l_153},{&l_153},{&l_153},{&l_153}},{{&l_153},{&l_153},{&l_153},{&l_153}},{{&l_153},{&l_153},{&l_153},{&l_153}},{{&l_153},{&l_153},{&l_153},{&l_153}}};
    int i, j, k;
    --p_617->g_157;
    return (*l_151);
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_148
 * writes:
 */
int32_t * func_21(int64_t  p_22, int32_t * p_23, struct S0 * p_617)
{ /* block id: 7 */
    if ((atomic_inc(&p_617->g_atomic_input[39 * get_linear_group_id() + 30]) == 8))
    { /* block id: 9 */
        VECTOR(int32_t, 16) l_24 = (VECTOR(int32_t, 16))(0x16E1580EL, (VECTOR(int32_t, 4))(0x16E1580EL, (VECTOR(int32_t, 2))(0x16E1580EL, 1L), 1L), 1L, 0x16E1580EL, 1L, (VECTOR(int32_t, 2))(0x16E1580EL, 1L), (VECTOR(int32_t, 2))(0x16E1580EL, 1L), 0x16E1580EL, 1L, 0x16E1580EL, 1L);
        VECTOR(int16_t, 2) l_25 = (VECTOR(int16_t, 2))(0x139FL, 0x02D1L);
        VECTOR(int16_t, 8) l_26 = (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x34FFL), 0x34FFL), 0x34FFL, (-7L), 0x34FFL);
        VECTOR(int16_t, 4) l_27 = (VECTOR(int16_t, 4))(0x021FL, (VECTOR(int16_t, 2))(0x021FL, 1L), 1L);
        int16_t l_28 = 0x6DA7L;
        VECTOR(int16_t, 8) l_29 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x0AB8L), 0x0AB8L), 0x0AB8L, (-10L), 0x0AB8L);
        uint32_t l_30 = 0x9B037144L;
        uint64_t l_31 = 0xED293E35F2012CB5L;
        VECTOR(int16_t, 16) l_32 = (VECTOR(int16_t, 16))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x1DBDL), 0x1DBDL), 0x1DBDL, (-5L), 0x1DBDL, (VECTOR(int16_t, 2))((-5L), 0x1DBDL), (VECTOR(int16_t, 2))((-5L), 0x1DBDL), (-5L), 0x1DBDL, (-5L), 0x1DBDL);
        uint16_t l_33 = 65531UL;
        VECTOR(int8_t, 4) l_34 = (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, (-1L)), (-1L));
        uint32_t l_35[6][8][5] = {{{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL}},{{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL}},{{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL}},{{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL}},{{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL}},{{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL},{4294967295UL,0UL,0x221F4251L,0UL,4294967295UL}}};
        uint64_t l_36[1];
        uint64_t l_37 = 4UL;
        uint8_t l_38 = 0UL;
        uint8_t l_39 = 247UL;
        int32_t l_40 = 0L;
        uint32_t l_41 = 0x33C22C9CL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_36[i] = 18446744073709551615UL;
        l_41 = ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_24.s9aa2)), 0L, ((VECTOR(int32_t, 2))(0x402AD923L, 0L)), 0x12652969L)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(l_25.xxyy)).zxwxywxz, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(l_26.s51021226)), ((VECTOR(int16_t, 8))(l_27.wxzxwzyz)), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(l_28, ((VECTOR(int16_t, 4))(l_29.s2264)).w, ((VECTOR(int16_t, 16))(0x3300L, 0x1D3BL, 4L, (-4L), ((VECTOR(int16_t, 2))(8L, 0x71B3L)), l_30, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(1L, 0x74DCL)).xxxyyxxyxyyyxxxx)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(9L, (-5L))).yxxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-7L), (-10L))), (-1L), 1L)).odd)).xxxy))), l_31, ((VECTOR(int16_t, 2))(l_32.s7c)), (-1L))).s6573770202733406))).sb686, (int16_t)(-9L), (int16_t)(l_39 = ((l_33 , (l_37 = (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_34.xzww)).hi)).hi , (l_35[0][0][4] , (l_36[0] , 0x62677E161529ABC0L))))) , l_38))))), ((VECTOR(int16_t, 4))(1L)), (-4L))).s4, ((VECTOR(int16_t, 2))(1L)), 0x6947L, (-1L), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 2))(3L)), (-1L))).s52, ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 2))(1L))))).xxxxyyyy)))))).s4372060101443046)).sc9)), ((VECTOR(int16_t, 2))((-1L)))))).xyyyxyyx, ((VECTOR(int16_t, 8))(0x5F9DL))))).s15)).xxyyyxxx, ((VECTOR(uint16_t, 8))(0xF148L))))).s2132233634477045, ((VECTOR(int32_t, 16))(0L))))).sf9, ((VECTOR(int32_t, 2))((-3L)))))).yyyyxxxx))).s3764725621306155, (int32_t)l_40))).s1;
        for (l_34.w = 17; (l_34.w != 15); l_34.w--)
        { /* block id: 15 */
            int32_t l_123 = 0x4133A8E6L;
            int32_t *l_146 = &l_123;
            int32_t *l_147 = (void*)0;
            if ((l_24.s0 = 8L))
            { /* block id: 17 */
                int32_t l_44 = (-6L);
                for (l_44 = 10; (l_44 < (-21)); l_44--)
                { /* block id: 20 */
                    int32_t l_47 = 0x40BD7895L;
                    for (l_47 = 12; (l_47 >= 9); l_47 = safe_sub_func_int16_t_s_s(l_47, 9))
                    { /* block id: 23 */
                        VECTOR(uint8_t, 8) l_50 = (VECTOR(uint8_t, 8))(0xD1L, (VECTOR(uint8_t, 4))(0xD1L, (VECTOR(uint8_t, 2))(0xD1L, 246UL), 246UL), 246UL, 0xD1L, 246UL);
                        int32_t l_53 = 0x7BA6500CL;
                        VECTOR(int16_t, 4) l_54 = (VECTOR(int16_t, 4))(0x53BBL, (VECTOR(int16_t, 2))(0x53BBL, 0x1537L), 0x1537L);
                        VECTOR(int32_t, 16) l_55 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), 6L, 1L, 6L, (VECTOR(int32_t, 2))(1L, 6L), (VECTOR(int32_t, 2))(1L, 6L), 1L, 6L, 1L, 6L);
                        int32_t l_56 = 0x76C45391L;
                        VECTOR(int32_t, 8) l_57 = (VECTOR(int32_t, 8))(0x4A390401L, (VECTOR(int32_t, 4))(0x4A390401L, (VECTOR(int32_t, 2))(0x4A390401L, (-3L)), (-3L)), (-3L), 0x4A390401L, (-3L));
                        uint32_t l_58 = 0xCF8DE9EFL;
                        int32_t l_59 = 0L;
                        VECTOR(uint32_t, 4) l_60 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967289UL), 4294967289UL);
                        VECTOR(uint32_t, 4) l_61 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xDEC5ABB5L), 0xDEC5ABB5L);
                        VECTOR(uint32_t, 16) l_62 = (VECTOR(uint32_t, 16))(0x92B028A4L, (VECTOR(uint32_t, 4))(0x92B028A4L, (VECTOR(uint32_t, 2))(0x92B028A4L, 0x3C15F2FBL), 0x3C15F2FBL), 0x3C15F2FBL, 0x92B028A4L, 0x3C15F2FBL, (VECTOR(uint32_t, 2))(0x92B028A4L, 0x3C15F2FBL), (VECTOR(uint32_t, 2))(0x92B028A4L, 0x3C15F2FBL), 0x92B028A4L, 0x3C15F2FBL, 0x92B028A4L, 0x3C15F2FBL);
                        int16_t l_63[3][7][6] = {{{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L}},{{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L}},{{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L},{8L,(-4L),(-3L),0x6EB6L,0x2B71L,0x0D47L}}};
                        int32_t l_64 = (-4L);
                        VECTOR(uint32_t, 2) l_65 = (VECTOR(uint32_t, 2))(4294967295UL, 0UL);
                        VECTOR(uint32_t, 2) l_66 = (VECTOR(uint32_t, 2))(2UL, 0UL);
                        int16_t l_67 = 1L;
                        int32_t l_68 = 0x02C85B7FL;
                        int8_t l_69 = (-1L);
                        uint32_t l_70 = 4294967289UL;
                        uint8_t l_71[2][10] = {{0xC2L,0xC2L,0x6FL,0x30L,255UL,0x30L,0x6FL,0xC2L,0xC2L,0x6FL},{0xC2L,0xC2L,0x6FL,0x30L,255UL,0x30L,0x6FL,0xC2L,0xC2L,0x6FL}};
                        int32_t l_72 = 0x17375CE8L;
                        int64_t l_73[5];
                        int8_t l_74 = (-8L);
                        uint32_t l_75 = 0x93A13EA4L;
                        uint32_t l_76 = 0x4AF86A2FL;
                        VECTOR(int32_t, 8) l_77 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_73[i] = (-6L);
                        l_50.s2++;
                        l_74 &= (l_73[0] = ((((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))((-5L), 0x62F62330L, (l_24.s7 ^= l_53), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x2A20L, ((VECTOR(int16_t, 16))(l_54.xwzxxzwzzxxwzxzx)).s2, (-8L), 0x5A35L, (-1L), (-1L), (-1L), (-6L))).s07)).xyyx, ((VECTOR(uint16_t, 2))(9UL, 8UL)).yxxy))).hi, ((VECTOR(int32_t, 2))(1L, 0x02006303L))))), ((l_24.sa = ((VECTOR(int32_t, 2))(l_55.s2d)).hi) , l_56), 0x183F5D6BL, 6L)).s56, ((VECTOR(int32_t, 16))(l_57.s0134374211774261)).sfc))).even , (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x588D3DE1L)), (-1L), 1L)).z , l_58)) , (((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(0x0DA5B006L, l_59, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_60.xx)), ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(l_61.wxwwxzxx)).even, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_62.s4d153b42eba38594)))).s5736))), (l_64 = l_63[0][2][3]), ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(0x9757D9B7L, 4294967287UL)).xxyyyxxxxyyyxxyy, ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(l_65.yyxyxyyx)).s02, ((VECTOR(uint32_t, 2))(5UL, 4294967295UL))))).xxxxxyxxyyxyyyyx, ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(1UL, ((VECTOR(uint32_t, 4))(l_66.xxyy)), 4294967295UL, 0x45A8FD6DL, 0x4B234A56L)).s1350654203537626)).s6a)).xxyyxxxy)), ((VECTOR(uint32_t, 16))(0x8E9B1403L, (l_67 = 0x61AB63E3L), l_68, ((VECTOR(uint32_t, 4))(4294967286UL)), ((VECTOR(uint32_t, 4))(0UL)), l_69, ((VECTOR(uint32_t, 4))(4UL)))).hi))), (uint32_t)l_70, (uint32_t)3UL))).s7111750445242673))).saf)), ((VECTOR(uint32_t, 2))(0x5C912EA9L))))).hi, ((VECTOR(uint32_t, 4))(4294967290UL)), 0x5C328A76L, 0xB8E86F5FL, 0xD2697764L, 0x12404B1AL)).s41)), 1UL, l_71[0][7], 0x65A2DF7CL, 0xC8DB39B4L)).s26, ((VECTOR(uint32_t, 2))(4294967287UL))))).lo , l_72)));
                        l_24.se = ((l_75 , l_76) , ((VECTOR(int32_t, 4))(l_77.s3036)).x);
                    }
                }
            }
            else
            { /* block id: 34 */
                int32_t *l_78 = (void*)0;
                int32_t l_80 = 0x7FDB434EL;
                int32_t *l_79 = &l_80;
                int32_t l_98 = 5L;
                int8_t l_99 = 0x17L;
                uint64_t l_100 = 0xF2ECF321D07C0FF9L;
                int32_t l_101 = 0x31B60A8CL;
                l_79 = l_78;
                for (l_80 = 0; (l_80 != 16); ++l_80)
                { /* block id: 38 */
                    int32_t l_83 = (-1L);
                    uint32_t l_87 = 0xDB5C1620L;
                    for (l_83 = 0; (l_83 == (-8)); l_83 = safe_sub_func_uint32_t_u_u(l_83, 9))
                    { /* block id: 41 */
                        uint32_t l_86[9] = {0x07783C7BL,0xA2250544L,0x07783C7BL,0x07783C7BL,0xA2250544L,0x07783C7BL,0x07783C7BL,0xA2250544L,0x07783C7BL};
                        int i;
                        l_24.s5 = l_86[7];
                    }
                    if ((l_24.s3 = l_87))
                    { /* block id: 45 */
                        l_24.s7 ^= 5L;
                        l_79 = (void*)0;
                    }
                    else
                    { /* block id: 48 */
                        uint64_t l_88[10] = {3UL,0UL,18446744073709551615UL,0UL,3UL,3UL,0UL,18446744073709551615UL,0UL,3UL};
                        int16_t l_91[5] = {0x7A3AL,0x7A3AL,0x7A3AL,0x7A3AL,0x7A3AL};
                        int16_t l_92 = 0x3BFEL;
                        int32_t l_93 = (-1L);
                        int16_t l_94[10][4] = {{0x2D5AL,(-5L),(-5L),0x2D5AL},{0x2D5AL,(-5L),(-5L),0x2D5AL},{0x2D5AL,(-5L),(-5L),0x2D5AL},{0x2D5AL,(-5L),(-5L),0x2D5AL},{0x2D5AL,(-5L),(-5L),0x2D5AL},{0x2D5AL,(-5L),(-5L),0x2D5AL},{0x2D5AL,(-5L),(-5L),0x2D5AL},{0x2D5AL,(-5L),(-5L),0x2D5AL},{0x2D5AL,(-5L),(-5L),0x2D5AL},{0x2D5AL,(-5L),(-5L),0x2D5AL}};
                        int64_t l_95[5][9] = {{1L,1L,(-3L),0L,0x5E4B32DF3E0A3195L,0L,(-3L),1L,1L},{1L,1L,(-3L),0L,0x5E4B32DF3E0A3195L,0L,(-3L),1L,1L},{1L,1L,(-3L),0L,0x5E4B32DF3E0A3195L,0L,(-3L),1L,1L},{1L,1L,(-3L),0L,0x5E4B32DF3E0A3195L,0L,(-3L),1L,1L},{1L,1L,(-3L),0L,0x5E4B32DF3E0A3195L,0L,(-3L),1L,1L}};
                        VECTOR(int64_t, 16) l_96 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3CF7B5A891E9D717L), 0x3CF7B5A891E9D717L), 0x3CF7B5A891E9D717L, 0L, 0x3CF7B5A891E9D717L, (VECTOR(int64_t, 2))(0L, 0x3CF7B5A891E9D717L), (VECTOR(int64_t, 2))(0L, 0x3CF7B5A891E9D717L), 0L, 0x3CF7B5A891E9D717L, 0L, 0x3CF7B5A891E9D717L);
                        int32_t *l_97 = (void*)0;
                        int i, j;
                        l_88[1]++;
                        l_92 = l_91[4];
                        l_83 = (((l_94[0][3] = l_93) , l_95[2][3]) , (((VECTOR(int64_t, 8))(l_96.s03f9351e)).s3 , 0x36307190L));
                        l_79 = l_97;
                    }
                }
                if ((l_98 , (l_101 &= (l_100 = (l_24.s6 |= l_99)))))
                { /* block id: 59 */
                    VECTOR(uint16_t, 4) l_102 = (VECTOR(uint16_t, 4))(0x482CL, (VECTOR(uint16_t, 2))(0x482CL, 0xB026L), 0xB026L);
                    uint8_t l_103 = 0UL;
                    uint64_t l_104 = 18446744073709551615UL;
                    int32_t l_105 = 0x33B4ECD8L;
                    int i;
                    l_24.s6 = ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_102.yywz)).zxyxzywzzyzyywwz)).sad15)).x , (l_80 ^= ((VECTOR(int32_t, 2))(0x22F5C3AAL, 1L)).hi)) , (l_105 &= (l_103 , l_104)));
                    l_105 |= (-5L);
                }
                else
                { /* block id: 64 */
                    uint32_t l_106 = 0x40058932L;
                    uint64_t l_107 = 18446744073709551615UL;
                    l_107 &= l_106;
                }
                for (l_99 = 0; (l_99 >= (-7)); l_99 = safe_sub_func_uint64_t_u_u(l_99, 8))
                { /* block id: 69 */
                    uint8_t l_110[10][7][3] = {{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}},{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}},{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}},{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}},{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}},{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}},{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}},{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}},{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}},{{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL},{6UL,255UL,6UL}}};
                    int32_t l_122 = 0x382851A4L;
                    int32_t *l_121 = &l_122;
                    int i, j, k;
                    if (l_110[0][4][2])
                    { /* block id: 70 */
                        uint64_t l_111 = 18446744073709551611UL;
                        uint32_t l_112 = 1UL;
                        l_80 = 2L;
                        l_112 &= (l_24.se = l_111);
                    }
                    else
                    { /* block id: 74 */
                        uint32_t l_113 = 0UL;
                        VECTOR(int32_t, 8) l_116 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x20557642L), 0x20557642L), 0x20557642L, 7L, 0x20557642L);
                        int32_t l_117 = 0x48CD2030L;
                        int32_t l_118 = 0x7FA05C2FL;
                        uint64_t l_119 = 0xA264C335884F1EB2L;
                        VECTOR(int64_t, 8) l_120 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x2A7540F12F2D7027L), 0x2A7540F12F2D7027L), 0x2A7540F12F2D7027L, 0L, 0x2A7540F12F2D7027L);
                        int i;
                        ++l_113;
                        l_120.s4 = (l_119 = (l_118 ^= (l_80 = (l_117 |= (l_98 = (l_24.sd = ((VECTOR(int32_t, 16))(l_116.s6743156113547346)).s7))))));
                    }
                    l_121 = (void*)0;
                }
            }
            for (l_123 = 0; (l_123 >= (-30)); l_123 = safe_sub_func_uint8_t_u_u(l_123, 5))
            { /* block id: 89 */
                int32_t l_126 = (-3L);
                uint8_t l_143 = 6UL;
                for (l_126 = 0; (l_126 != 20); ++l_126)
                { /* block id: 92 */
                    int32_t l_130 = (-1L);
                    int32_t *l_129 = &l_130;
                    int32_t *l_131[8] = {&l_130,&l_130,&l_130,&l_130,&l_130,&l_130,&l_130,&l_130};
                    int i;
                    l_24.se = 0x7FEED684L;
                    l_131[2] = l_129;
                }
                for (l_126 = 22; (l_126 == (-7)); l_126--)
                { /* block id: 98 */
                    int32_t l_134 = (-10L);
                    for (l_134 = 13; (l_134 == 4); l_134 = safe_sub_func_uint8_t_u_u(l_134, 5))
                    { /* block id: 101 */
                        VECTOR(int16_t, 4) l_137 = (VECTOR(int16_t, 4))(0x1A1AL, (VECTOR(int16_t, 2))(0x1A1AL, (-1L)), (-1L));
                        uint16_t l_138 = 0xF32CL;
                        uint32_t l_139 = 0xCABE6A2BL;
                        int32_t l_142 = 0L;
                        int i;
                        l_24.s7 = (l_138 = l_137.z);
                        ++l_139;
                        l_24.s5 |= l_142;
                        l_24.s8 = 0L;
                    }
                }
                --l_143;
            }
            l_147 = (l_146 = (void*)0);
        }
        unsigned int result = 0;
        result += l_24.sf;
        result += l_24.se;
        result += l_24.sd;
        result += l_24.sc;
        result += l_24.sb;
        result += l_24.sa;
        result += l_24.s9;
        result += l_24.s8;
        result += l_24.s7;
        result += l_24.s6;
        result += l_24.s5;
        result += l_24.s4;
        result += l_24.s3;
        result += l_24.s2;
        result += l_24.s1;
        result += l_24.s0;
        result += l_25.y;
        result += l_25.x;
        result += l_26.s7;
        result += l_26.s6;
        result += l_26.s5;
        result += l_26.s4;
        result += l_26.s3;
        result += l_26.s2;
        result += l_26.s1;
        result += l_26.s0;
        result += l_27.w;
        result += l_27.z;
        result += l_27.y;
        result += l_27.x;
        result += l_28;
        result += l_29.s7;
        result += l_29.s6;
        result += l_29.s5;
        result += l_29.s4;
        result += l_29.s3;
        result += l_29.s2;
        result += l_29.s1;
        result += l_29.s0;
        result += l_30;
        result += l_31;
        result += l_32.sf;
        result += l_32.se;
        result += l_32.sd;
        result += l_32.sc;
        result += l_32.sb;
        result += l_32.sa;
        result += l_32.s9;
        result += l_32.s8;
        result += l_32.s7;
        result += l_32.s6;
        result += l_32.s5;
        result += l_32.s4;
        result += l_32.s3;
        result += l_32.s2;
        result += l_32.s1;
        result += l_32.s0;
        result += l_33;
        result += l_34.w;
        result += l_34.z;
        result += l_34.y;
        result += l_34.x;
        int l_35_i0, l_35_i1, l_35_i2;
        for (l_35_i0 = 0; l_35_i0 < 6; l_35_i0++) {
            for (l_35_i1 = 0; l_35_i1 < 8; l_35_i1++) {
                for (l_35_i2 = 0; l_35_i2 < 5; l_35_i2++) {
                    result += l_35[l_35_i0][l_35_i1][l_35_i2];
                }
            }
        }
        int l_36_i0;
        for (l_36_i0 = 0; l_36_i0 < 1; l_36_i0++) {
            result += l_36[l_36_i0];
        }
        result += l_37;
        result += l_38;
        result += l_39;
        result += l_40;
        result += l_41;
        atomic_add(&p_617->g_special_values[39 * get_linear_group_id() + 30], result);
    }
    else
    { /* block id: 114 */
        (1 + 1);
    }
    return p_617->g_148;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_157 p_617->g_149 p_617->l_comm_values p_617->g_comm_values p_617->g_193 p_617->g_199 p_617->g_148 p_617->g_6
 * writes: p_617->g_157 p_617->g_169 p_617->l_comm_values p_617->g_184 p_617->g_193 p_617->g_149
 */
uint32_t  func_161(int32_t * p_162, int32_t  p_163, struct S0 * p_617)
{ /* block id: 122 */
    int8_t l_166 = (-6L);
    int32_t *l_167[8] = {&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149,&p_617->g_149};
    uint8_t *l_168[2][7][4] = {{{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169}},{{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169},{&p_617->g_169,&p_617->g_169,&p_617->g_169,&p_617->g_169}}};
    VECTOR(uint64_t, 2) l_170 = (VECTOR(uint64_t, 2))(0x26ACF659339AB5B6L, 18446744073709551612UL);
    int64_t *l_171 = (void*)0;
    uint32_t l_183 = 0xB77E2E7FL;
    int i, j, k;
    (*p_617->g_148) = ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((l_166 , func_19(l_167[5], p_617)) || (p_617->g_169 = 0x85L)), ((VECTOR(uint64_t, 4))(l_170.xxyx)), 0UL, 0x4CDA43A824C425AEL, 0x15D6436AE91A3732L)).s4, (p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 74))] = p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 74))]))) == (func_172(func_177((p_617->g_184 = l_183), ((p_617->g_comm_values[p_617->tid] , p_617->g_149) , (safe_mod_func_uint32_t_u_u(((p_163 ^ 0L) < 0L), p_163))), l_168[1][0][1], l_168[1][0][1], p_617->g_149, p_617), p_617->g_199, l_167[5], l_168[1][0][1], p_617) >= 0x83B30FCB872D3762L));
    return p_617->g_6;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_172(uint8_t * p_173, uint16_t  p_174, int32_t * p_175, uint8_t * p_176, struct S0 * p_617)
{ /* block id: 130 */
    int64_t *l_200 = &p_617->g_192;
    int64_t **l_201 = (void*)0;
    int64_t *l_202 = (void*)0;
    int32_t *l_203 = (void*)0;
    int32_t l_204 = 4L;
    int32_t *l_205 = &l_204;
    int32_t *l_206[4][7] = {{&p_617->g_199,(void*)0,&p_617->g_199,&p_617->g_199,(void*)0,&p_617->g_199,&p_617->g_199},{&p_617->g_199,(void*)0,&p_617->g_199,&p_617->g_199,(void*)0,&p_617->g_199,&p_617->g_199},{&p_617->g_199,(void*)0,&p_617->g_199,&p_617->g_199,(void*)0,&p_617->g_199,&p_617->g_199},{&p_617->g_199,(void*)0,&p_617->g_199,&p_617->g_199,(void*)0,&p_617->g_199,&p_617->g_199}};
    uint32_t l_207[10];
    int i, j;
    for (i = 0; i < 10; i++)
        l_207[i] = 5UL;
    l_204 |= ((l_200 = l_200) != l_202);
    l_207[9]++;
    if ((atomic_inc(&p_617->g_atomic_input[39 * get_linear_group_id() + 26]) == 4))
    { /* block id: 135 */
        int32_t l_211 = 0L;
        int32_t *l_210 = &l_211;
        int32_t l_212[8][1] = {{0x2A4A4237L},{0x2A4A4237L},{0x2A4A4237L},{0x2A4A4237L},{0x2A4A4237L},{0x2A4A4237L},{0x2A4A4237L},{0x2A4A4237L}};
        VECTOR(int32_t, 8) l_213 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
        VECTOR(uint32_t, 8) l_214 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xB50480B2L), 0xB50480B2L), 0xB50480B2L, 0UL, 0xB50480B2L);
        uint8_t l_215 = 0x81L;
        uint8_t l_218[7] = {0xCDL,0x37L,0xCDL,0xCDL,0x37L,0xCDL,0xCDL};
        uint16_t l_219 = 65530UL;
        int32_t l_220 = 1L;
        VECTOR(int32_t, 16) l_221 = (VECTOR(int32_t, 16))(0x433D4B22L, (VECTOR(int32_t, 4))(0x433D4B22L, (VECTOR(int32_t, 2))(0x433D4B22L, 0x6C4D2F78L), 0x6C4D2F78L), 0x6C4D2F78L, 0x433D4B22L, 0x6C4D2F78L, (VECTOR(int32_t, 2))(0x433D4B22L, 0x6C4D2F78L), (VECTOR(int32_t, 2))(0x433D4B22L, 0x6C4D2F78L), 0x433D4B22L, 0x6C4D2F78L, 0x433D4B22L, 0x6C4D2F78L);
        int32_t l_222 = 0x18EC72ADL;
        uint32_t l_223 = 1UL;
        int32_t l_224[1];
        VECTOR(int32_t, 8) l_225 = (VECTOR(int32_t, 8))(0x4AA03B7EL, (VECTOR(int32_t, 4))(0x4AA03B7EL, (VECTOR(int32_t, 2))(0x4AA03B7EL, 0x78506E6FL), 0x78506E6FL), 0x78506E6FL, 0x4AA03B7EL, 0x78506E6FL);
        int i, j;
        for (i = 0; i < 1; i++)
            l_224[i] = 5L;
        l_210 = ((GROUP_DIVERGE(0, 1) , 0x13DDFA3CC0CA2B1CL) , (void*)0);
        if (((VECTOR(int32_t, 16))(l_212[0][0], ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_213.s0266)).odd)).hi, (-5L), 0x6298BA18L, (GROUP_DIVERGE(0, 1) , (-1L)), 8L, (l_214.s5 , (l_220 = ((l_215--) , (l_219 = l_218[4])))), ((VECTOR(int32_t, 4))(l_221.s7417)), (l_223 = (l_222 , 0x38C9FC60L)), l_224[0], ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x5F50E9BAL)).yyxxxyyxyyyyxyyy)))).odd)).s32, ((VECTOR(int32_t, 2))(l_225.s45))))), 0x1E427751L)).sd)
        { /* block id: 141 */
            VECTOR(int32_t, 16) l_226 = (VECTOR(int32_t, 16))(0x1AD13062L, (VECTOR(int32_t, 4))(0x1AD13062L, (VECTOR(int32_t, 2))(0x1AD13062L, 7L), 7L), 7L, 0x1AD13062L, 7L, (VECTOR(int32_t, 2))(0x1AD13062L, 7L), (VECTOR(int32_t, 2))(0x1AD13062L, 7L), 0x1AD13062L, 7L, 0x1AD13062L, 7L);
            VECTOR(int32_t, 4) l_227 = (VECTOR(int32_t, 4))(0x11985D10L, (VECTOR(int32_t, 2))(0x11985D10L, 1L), 1L);
            uint8_t l_228 = 255UL;
            uint16_t l_229 = 0xA8EEL;
            uint16_t l_230 = 65535UL;
            int32_t l_231 = 0x36B7EC64L;
            int8_t l_232 = (-1L);
            VECTOR(int16_t, 2) l_233 = (VECTOR(int16_t, 2))(0x4859L, 0L);
            int16_t l_234 = 0x732EL;
            VECTOR(int64_t, 8) l_235 = (VECTOR(int64_t, 8))(0x61A93BC0D96709BDL, (VECTOR(int64_t, 4))(0x61A93BC0D96709BDL, (VECTOR(int64_t, 2))(0x61A93BC0D96709BDL, (-1L)), (-1L)), (-1L), 0x61A93BC0D96709BDL, (-1L));
            VECTOR(uint16_t, 2) l_236 = (VECTOR(uint16_t, 2))(0x7889L, 0xDA77L);
            uint32_t l_237 = 1UL;
            uint16_t l_238 = 0UL;
            int8_t l_239 = 0x08L;
            uint32_t l_240 = 4UL;
            uint8_t l_241 = 251UL;
            uint8_t l_242 = 0x48L;
            int i;
            if ((l_242 = (l_213.s5 = (l_226.s5 = ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(l_226.sa9f9e3e2)).odd, ((VECTOR(int32_t, 4))(l_227.yzzw)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 8))((l_232 ^= (l_231 = ((l_229 = l_228) , (l_230 ^= 0x0086L)))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_233.xyxx)).odd)).xyyy)), 0x2458L, 0x26CAL, 1L)).s4251413721311110, (int16_t)(l_234 = (-9L))))).even, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 16))(l_235.s1, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 8))(l_236.xxxyyyyy)), (uint16_t)0x95D9L, (uint16_t)l_237))).lo, (uint16_t)l_238, (uint16_t)(l_239 , l_240)))), 1UL, l_241, 0UL, 5UL, 0xA39AL, ((VECTOR(uint16_t, 2))(0x9759L)), ((VECTOR(uint16_t, 4))(0UL))))))).sd0, ((VECTOR(uint16_t, 2))(65531UL)), ((VECTOR(uint16_t, 2))(7UL))))).xxyxyxyx))).lo))).zzywzzzz)), ((VECTOR(int32_t, 8))(0x7BEE1DDFL))))).hi))), ((VECTOR(int32_t, 4))(4L)), ((VECTOR(int32_t, 4))(0x40830E31L))))).w))))
            { /* block id: 150 */
                int32_t l_243 = 0x2BC83944L;
                for (l_243 = 0; (l_243 == 16); ++l_243)
                { /* block id: 153 */
                    int32_t *l_246 = (void*)0;
                    int32_t l_248 = (-1L);
                    int32_t *l_247 = &l_248;
                    l_247 = (l_210 = l_246);
                }
            }
            else
            { /* block id: 157 */
                int32_t l_249 = 0x1AF2571DL;
                VECTOR(int32_t, 2) l_276 = (VECTOR(int32_t, 2))(3L, 0L);
                VECTOR(int32_t, 8) l_277 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 8L), 8L), 8L, 0L, 8L);
                VECTOR(int32_t, 8) l_278 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x18AF615FL), 0x18AF615FL), 0x18AF615FL, 0L, 0x18AF615FL);
                VECTOR(int32_t, 4) l_279 = (VECTOR(int32_t, 4))(0x43FE2EC4L, (VECTOR(int32_t, 2))(0x43FE2EC4L, (-1L)), (-1L));
                VECTOR(int32_t, 4) l_280 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x5B600C3AL), 0x5B600C3AL);
                int32_t l_281 = 0x3B73B3FDL;
                VECTOR(int32_t, 2) l_282 = (VECTOR(int32_t, 2))(0x6CDA6D40L, 0L);
                int i;
                for (l_249 = 0; (l_249 <= 5); l_249++)
                { /* block id: 160 */
                    uint16_t l_252 = 1UL;
                    uint64_t l_253[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_253[i] = 7UL;
                    l_252 |= 0x7B3E66BCL;
                    l_253[0]--;
                    for (l_253[0] = (-29); (l_253[0] <= 27); l_253[0] = safe_add_func_int16_t_s_s(l_253[0], 7))
                    { /* block id: 165 */
                        VECTOR(int32_t, 16) l_258 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x172B7384L), 0x172B7384L), 0x172B7384L, (-5L), 0x172B7384L, (VECTOR(int32_t, 2))((-5L), 0x172B7384L), (VECTOR(int32_t, 2))((-5L), 0x172B7384L), (-5L), 0x172B7384L, (-5L), 0x172B7384L);
                        VECTOR(uint32_t, 8) l_259 = (VECTOR(uint32_t, 8))(0x1CA1425DL, (VECTOR(uint32_t, 4))(0x1CA1425DL, (VECTOR(uint32_t, 2))(0x1CA1425DL, 4294967295UL), 4294967295UL), 4294967295UL, 0x1CA1425DL, 4294967295UL);
                        VECTOR(uint32_t, 4) l_260 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 8UL), 8UL);
                        VECTOR(uint32_t, 8) l_261 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xC8DB16D8L), 0xC8DB16D8L), 0xC8DB16D8L, 0UL, 0xC8DB16D8L);
                        int8_t l_262 = 1L;
                        int i;
                        l_221.s2 = (l_213.s1 = ((VECTOR(int32_t, 2))(l_258.scc)).lo);
                        l_225.s5 |= (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_259.s6245234713207774)).s8, ((VECTOR(uint32_t, 2))(l_260.yw)), 8UL)).odd, ((VECTOR(uint32_t, 4))(l_261.s6761)).odd, ((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 2))(0x6C9FF6B8L, 0xB2BEAC05L)).yyxxxxxyyyyxyyxx))).se9))))).odd , (l_258.s7 = l_262));
                        l_258.s1 = 0L;
                    }
                }
                for (l_249 = 0; (l_249 != (-15)); l_249--)
                { /* block id: 175 */
                    uint32_t l_265 = 0UL;
                    uint32_t l_273 = 0x9D387A41L;
                    VECTOR(uint64_t, 16) l_274 = (VECTOR(uint64_t, 16))(0xE6CA84D639C44411L, (VECTOR(uint64_t, 4))(0xE6CA84D639C44411L, (VECTOR(uint64_t, 2))(0xE6CA84D639C44411L, 0xC9C2DA4460E21C45L), 0xC9C2DA4460E21C45L), 0xC9C2DA4460E21C45L, 0xE6CA84D639C44411L, 0xC9C2DA4460E21C45L, (VECTOR(uint64_t, 2))(0xE6CA84D639C44411L, 0xC9C2DA4460E21C45L), (VECTOR(uint64_t, 2))(0xE6CA84D639C44411L, 0xC9C2DA4460E21C45L), 0xE6CA84D639C44411L, 0xC9C2DA4460E21C45L, 0xE6CA84D639C44411L, 0xC9C2DA4460E21C45L);
                    uint32_t l_275 = 8UL;
                    int i;
                    l_265 = 0x0F268BEAL;
                    for (l_265 = 0; (l_265 <= 10); ++l_265)
                    { /* block id: 179 */
                        uint32_t l_268 = 0x8B150A7EL;
                        int64_t l_271[4][3] = {{2L,2L,2L},{2L,2L,2L},{2L,2L,2L},{2L,2L,2L}};
                        VECTOR(uint16_t, 2) l_272 = (VECTOR(uint16_t, 2))(0x8303L, 0x77F9L);
                        int i, j;
                        ++l_268;
                        l_213.s7 = (l_272.x = (l_271[3][2] = 1L));
                    }
                    l_222 ^= l_273;
                    l_227.y = (l_275 = l_274.s8);
                }
                if (((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_276.xxyxxxxyxyxxyxyy)).odd)).s05, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_277.s0472)))).xxzxwyxzxxywyxxy, ((VECTOR(int32_t, 2))(l_278.s05)).xxyxxyxyyyyxyyyx))).s1539, ((VECTOR(int32_t, 4))(l_279.wzyx))))).zwzzwxzw)).s20))), (-5L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_280.wwzxxxyw)).even)).z, l_281, 0x2C7D45E9L, 0x6BB0D7DCL, 0L, ((VECTOR(int32_t, 2))(0x622FDE35L, 0x6F44DA48L)), (-7L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x6A479D4BL)).xxxx)))).odd)).s0524417543252705)), ((VECTOR(int32_t, 4))(l_282.yxyx)).wwxzyzyyxxxwzxyx))).sc)
                { /* block id: 189 */
                    VECTOR(uint32_t, 16) l_283 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x8CE036F1L), 0x8CE036F1L), 0x8CE036F1L, 4294967295UL, 0x8CE036F1L, (VECTOR(uint32_t, 2))(4294967295UL, 0x8CE036F1L), (VECTOR(uint32_t, 2))(4294967295UL, 0x8CE036F1L), 4294967295UL, 0x8CE036F1L, 4294967295UL, 0x8CE036F1L);
                    int8_t l_284 = 1L;
                    uint16_t l_285 = 5UL;
                    VECTOR(int64_t, 2) l_286 = (VECTOR(int64_t, 2))(0x686540B469189EC2L, 0x054B1952EC49B3EFL);
                    uint64_t l_287 = 1UL;
                    int64_t l_288 = (-9L);
                    int16_t l_289 = (-1L);
                    int i;
                    l_285 &= (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(l_283.s3b)), ((VECTOR(uint32_t, 2))(0xBC534D28L, 1UL))))).yyyxxxyxxxyyyxxx)).s8 , l_284);
                    l_249 = (((VECTOR(int64_t, 8))(l_286.xxyxxyyx)).s3 , (l_289 = (l_287 , l_288)));
                }
                else
                { /* block id: 193 */
                    int32_t l_291 = 0x453D9A7AL;
                    int32_t *l_290 = &l_291;
                    l_210 = l_290;
                }
            }
            for (l_242 = (-4); (l_242 >= 38); l_242++)
            { /* block id: 199 */
                int32_t l_294 = 0x59DEA679L;
                int8_t l_295 = (-1L);
                int32_t l_296 = 0x3C795F71L;
                VECTOR(int32_t, 2) l_297 = (VECTOR(int32_t, 2))(0x3DD36EDDL, (-10L));
                uint32_t l_298[7][6] = {{0UL,8UL,0xB8DE1B7BL,0x14B340CAL,4294967295UL,0x14B340CAL},{0UL,8UL,0xB8DE1B7BL,0x14B340CAL,4294967295UL,0x14B340CAL},{0UL,8UL,0xB8DE1B7BL,0x14B340CAL,4294967295UL,0x14B340CAL},{0UL,8UL,0xB8DE1B7BL,0x14B340CAL,4294967295UL,0x14B340CAL},{0UL,8UL,0xB8DE1B7BL,0x14B340CAL,4294967295UL,0x14B340CAL},{0UL,8UL,0xB8DE1B7BL,0x14B340CAL,4294967295UL,0x14B340CAL},{0UL,8UL,0xB8DE1B7BL,0x14B340CAL,4294967295UL,0x14B340CAL}};
                int i, j;
                l_295 ^= (l_294 = l_294);
                --l_298[1][0];
            }
        }
        else
        { /* block id: 204 */
            VECTOR(int32_t, 8) l_301 = (VECTOR(int32_t, 8))(0x2CD79FE6L, (VECTOR(int32_t, 4))(0x2CD79FE6L, (VECTOR(int32_t, 2))(0x2CD79FE6L, 0x6D9D5873L), 0x6D9D5873L), 0x6D9D5873L, 0x2CD79FE6L, 0x6D9D5873L);
            VECTOR(int16_t, 2) l_302 = (VECTOR(int16_t, 2))(0x644BL, 0x077EL);
            int8_t l_303[10] = {7L,7L,7L,7L,7L,7L,7L,7L,7L,7L};
            VECTOR(uint16_t, 2) l_304 = (VECTOR(uint16_t, 2))(65535UL, 1UL);
            int16_t l_305 = 0L;
            int32_t l_306 = (-6L);
            VECTOR(uint32_t, 2) l_307 = (VECTOR(uint32_t, 2))(1UL, 4294967295UL);
            VECTOR(int16_t, 2) l_308 = (VECTOR(int16_t, 2))(0x3F7EL, (-6L));
            VECTOR(int16_t, 16) l_309 = (VECTOR(int16_t, 16))(0x7050L, (VECTOR(int16_t, 4))(0x7050L, (VECTOR(int16_t, 2))(0x7050L, 0x635CL), 0x635CL), 0x635CL, 0x7050L, 0x635CL, (VECTOR(int16_t, 2))(0x7050L, 0x635CL), (VECTOR(int16_t, 2))(0x7050L, 0x635CL), 0x7050L, 0x635CL, 0x7050L, 0x635CL);
            VECTOR(int16_t, 2) l_310 = (VECTOR(int16_t, 2))((-8L), 7L);
            int32_t l_311 = (-6L);
            VECTOR(int16_t, 4) l_312 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 1L), 1L);
            VECTOR(int16_t, 8) l_313 = (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L));
            VECTOR(int16_t, 16) l_314 = (VECTOR(int16_t, 16))(0x2B7AL, (VECTOR(int16_t, 4))(0x2B7AL, (VECTOR(int16_t, 2))(0x2B7AL, 0x458FL), 0x458FL), 0x458FL, 0x2B7AL, 0x458FL, (VECTOR(int16_t, 2))(0x2B7AL, 0x458FL), (VECTOR(int16_t, 2))(0x2B7AL, 0x458FL), 0x2B7AL, 0x458FL, 0x2B7AL, 0x458FL);
            VECTOR(int16_t, 16) l_315 = (VECTOR(int16_t, 16))(0x74D2L, (VECTOR(int16_t, 4))(0x74D2L, (VECTOR(int16_t, 2))(0x74D2L, (-1L)), (-1L)), (-1L), 0x74D2L, (-1L), (VECTOR(int16_t, 2))(0x74D2L, (-1L)), (VECTOR(int16_t, 2))(0x74D2L, (-1L)), 0x74D2L, (-1L), 0x74D2L, (-1L));
            VECTOR(int16_t, 2) l_316 = (VECTOR(int16_t, 2))(0x73D6L, (-1L));
            VECTOR(int16_t, 2) l_317 = (VECTOR(int16_t, 2))(0x16B3L, 0x2B5CL);
            int8_t l_318 = 0x40L;
            int32_t l_319 = 9L;
            uint32_t l_320 = 1UL;
            int16_t l_321[2][7][9] = {{{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)}},{{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)},{0x4665L,(-1L),0x106BL,0x106BL,(-1L),0x4665L,0x3F3AL,0x4AC8L,(-1L)}}};
            uint8_t l_322 = 4UL;
            int64_t l_323 = 0x00B2E258DED38523L;
            int32_t l_324 = 1L;
            uint32_t l_466 = 4294967295UL;
            int i, j, k;
            if (((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_301.s2755665047524220)).sbc)).yyyyxxxyyxyyyxyx, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_302.xx)), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(0L, 0L, 1L, (-10L))).hi, ((VECTOR(int16_t, 2))(0x0175L, 1L))))), (l_311 = ((l_303[5] &= (-1L)) , (l_302.x &= ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(0x690FL, (-7L), (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(l_304.xxyxxxyx)).s2214743660424025, ((VECTOR(uint16_t, 2))(0xD42BL, 0UL)).xyyyxyyxxxxyxyyy))).s2eea)).xyxxzzzxyxyxyxxx)).sc , 0x34C5L), l_305, (-3L), l_306, (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_307.yy)).yxxx)).w , 0x450BL), ((VECTOR(int16_t, 8))(l_308.yxyyyxyy)), (-1L))).sd08a, ((VECTOR(int16_t, 4))(l_309.sbc03))))).zxyzxwzy)).odd)).zwwzxzww, ((VECTOR(int16_t, 4))(l_310.yxyx)).zyxzxwzz))).s4))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_312.xzzx)).lo)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(3L, 0x4ADDL)).yyxx)).hi, ((VECTOR(int16_t, 4))(l_313.s0255)).odd))).xyyxyxxy)).s10))).yyyyyxxxyxyyxxyy, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_314.sd588739b65ae4b5d)).s24)).xxyyyyyyxyyxyyxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_315.sff)))).xxyyxxyxxxyxxxxx, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(l_316.yy)).yxxy, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(l_317.xyyx)).even, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((l_310.x = l_318), 0x6865L, 0x34E1L, 0x4D54L)))).odd))).xyyy))).xyywywyxzxwyzzzw)))))).s7bf9)))).even)))), 0x5399L)), (l_321[0][1][0] = (l_320 |= l_319)), l_322, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x6B27L, 0x796CL)), 0x35FDL, 0x4DBBL)), 0x3C05L, 0x244FL)).s57, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(2UL, FAKE_DIVERGE(p_617->group_0_offset, get_group_id(0), 10), 1UL, l_323, ((VECTOR(uint16_t, 2))(0xAC44L)), 0x5EEBL, ((VECTOR(uint16_t, 8))(0UL)), 0UL)).s6, 0x1440L, ((VECTOR(uint16_t, 2))(0x69F6L)), l_324, 0xABEBL, 0xA40FL, 3UL)).s53, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 2))(0x9024L)))))))).yyyyxxxyyxyxxyyx, ((VECTOR(int32_t, 16))(0x4CBA513DL))))).s9)
            { /* block id: 211 */
                int64_t l_325 = 0x6DC7A78D93BE3A05L;
                int32_t l_326[7] = {0x199685EEL,0x199685EEL,0x199685EEL,0x199685EEL,0x199685EEL,0x199685EEL,0x199685EEL};
                int i;
                if ((l_326[5] = l_325))
                { /* block id: 213 */
                    int32_t l_327[5][10][5] = {{{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L}},{{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L}},{{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L}},{{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L}},{{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L},{(-10L),7L,(-1L),(-1L),2L}}};
                    uint64_t l_328 = 0xD1AC72E4ECC75241L;
                    int32_t l_330[1];
                    int32_t *l_329[9][10] = {{(void*)0,(void*)0,&l_330[0],&l_330[0],&l_330[0],&l_330[0],&l_330[0],(void*)0,(void*)0,&l_330[0]},{(void*)0,(void*)0,&l_330[0],&l_330[0],&l_330[0],&l_330[0],&l_330[0],(void*)0,(void*)0,&l_330[0]},{(void*)0,(void*)0,&l_330[0],&l_330[0],&l_330[0],&l_330[0],&l_330[0],(void*)0,(void*)0,&l_330[0]},{(void*)0,(void*)0,&l_330[0],&l_330[0],&l_330[0],&l_330[0],&l_330[0],(void*)0,(void*)0,&l_330[0]},{(void*)0,(void*)0,&l_330[0],&l_330[0],&l_330[0],&l_330[0],&l_330[0],(void*)0,(void*)0,&l_330[0]},{(void*)0,(void*)0,&l_330[0],&l_330[0],&l_330[0],&l_330[0],&l_330[0],(void*)0,(void*)0,&l_330[0]},{(void*)0,(void*)0,&l_330[0],&l_330[0],&l_330[0],&l_330[0],&l_330[0],(void*)0,(void*)0,&l_330[0]},{(void*)0,(void*)0,&l_330[0],&l_330[0],&l_330[0],&l_330[0],&l_330[0],(void*)0,(void*)0,&l_330[0]},{(void*)0,(void*)0,&l_330[0],&l_330[0],&l_330[0],&l_330[0],&l_330[0],(void*)0,(void*)0,&l_330[0]}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_330[i] = 0x765CC06EL;
                    l_210 = (l_327[2][8][2] , (l_328 , l_329[0][4]));
                    for (l_327[2][8][2] = 0; (l_327[2][8][2] < 9); l_327[2][8][2]++)
                    { /* block id: 217 */
                        int16_t l_333 = 0x3598L;
                        int32_t l_334 = 0x355F8126L;
                        uint8_t l_335 = 250UL;
                        uint16_t l_338 = 65535UL;
                        uint8_t l_339 = 0x68L;
                        int16_t l_340 = 0L;
                        int32_t l_341 = (-7L);
                        int16_t l_342 = 0x341CL;
                        uint64_t l_343 = 0xF063AF954FF1F939L;
                        uint16_t l_346 = 65528UL;
                        uint16_t l_347 = 1UL;
                        ++l_335;
                        l_340 = (l_339 = l_338);
                        l_343++;
                        l_347 = l_346;
                    }
                }
                else
                { /* block id: 224 */
                    uint8_t l_348 = 0xEEL;
                    if ((l_348 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x0D95F887L)))).lo))
                    { /* block id: 225 */
                        int32_t *l_349 = (void*)0;
                        uint32_t l_350[2];
                        int32_t l_354 = (-7L);
                        int32_t *l_353 = &l_354;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_350[i] = 0xD6FB67A1L;
                        l_349 = (l_210 = (GROUP_DIVERGE(1, 1) , (void*)0));
                        --l_350[0];
                        l_353 = (void*)0;
                    }
                    else
                    { /* block id: 230 */
                        int64_t l_355 = 0x55DF4CA21FFAA673L;
                        int32_t l_356 = 0L;
                        int8_t l_357[5];
                        int64_t l_358 = 3L;
                        VECTOR(int64_t, 8) l_359 = (VECTOR(int64_t, 8))(0x5F022C297BD82C94L, (VECTOR(int64_t, 4))(0x5F022C297BD82C94L, (VECTOR(int64_t, 2))(0x5F022C297BD82C94L, (-2L)), (-2L)), (-2L), 0x5F022C297BD82C94L, (-2L));
                        uint32_t l_360 = 0xF3599655L;
                        uint32_t l_363 = 4294967295UL;
                        int32_t l_367[10] = {(-5L),0L,(-5L),(-5L),0L,(-5L),(-5L),0L,(-5L),(-5L)};
                        int32_t *l_366[1];
                        VECTOR(int32_t, 2) l_368 = (VECTOR(int32_t, 2))(0x54B563EBL, 0x5314AB40L);
                        VECTOR(int32_t, 4) l_369 = (VECTOR(int32_t, 4))(0x489EFCA3L, (VECTOR(int32_t, 2))(0x489EFCA3L, 0x64D8F0F1L), 0x64D8F0F1L);
                        int32_t l_370 = 0x6681EEB6L;
                        VECTOR(int32_t, 16) l_371 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x06D7DB91L), 0x06D7DB91L), 0x06D7DB91L, 1L, 0x06D7DB91L, (VECTOR(int32_t, 2))(1L, 0x06D7DB91L), (VECTOR(int32_t, 2))(1L, 0x06D7DB91L), 1L, 0x06D7DB91L, 1L, 0x06D7DB91L);
                        VECTOR(int32_t, 8) l_372 = (VECTOR(int32_t, 8))(0x4514AF70L, (VECTOR(int32_t, 4))(0x4514AF70L, (VECTOR(int32_t, 2))(0x4514AF70L, 0x3419B1ADL), 0x3419B1ADL), 0x3419B1ADL, 0x4514AF70L, 0x3419B1ADL);
                        VECTOR(int8_t, 16) l_373 = (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x1EL), 0x1EL), 0x1EL, (-2L), 0x1EL, (VECTOR(int8_t, 2))((-2L), 0x1EL), (VECTOR(int8_t, 2))((-2L), 0x1EL), (-2L), 0x1EL, (-2L), 0x1EL);
                        VECTOR(int32_t, 16) l_374 = (VECTOR(int32_t, 16))(0x55AB1950L, (VECTOR(int32_t, 4))(0x55AB1950L, (VECTOR(int32_t, 2))(0x55AB1950L, (-6L)), (-6L)), (-6L), 0x55AB1950L, (-6L), (VECTOR(int32_t, 2))(0x55AB1950L, (-6L)), (VECTOR(int32_t, 2))(0x55AB1950L, (-6L)), 0x55AB1950L, (-6L), 0x55AB1950L, (-6L));
                        uint8_t l_375 = 0x35L;
                        int16_t l_376 = (-1L);
                        uint32_t l_377 = 0x880F5C00L;
                        VECTOR(int32_t, 16) l_378 = (VECTOR(int32_t, 16))(0x312C8181L, (VECTOR(int32_t, 4))(0x312C8181L, (VECTOR(int32_t, 2))(0x312C8181L, 0x7BB51946L), 0x7BB51946L), 0x7BB51946L, 0x312C8181L, 0x7BB51946L, (VECTOR(int32_t, 2))(0x312C8181L, 0x7BB51946L), (VECTOR(int32_t, 2))(0x312C8181L, 0x7BB51946L), 0x312C8181L, 0x7BB51946L, 0x312C8181L, 0x7BB51946L);
                        VECTOR(int32_t, 16) l_379 = (VECTOR(int32_t, 16))(0x60123917L, (VECTOR(int32_t, 4))(0x60123917L, (VECTOR(int32_t, 2))(0x60123917L, 0x1538FD0DL), 0x1538FD0DL), 0x1538FD0DL, 0x60123917L, 0x1538FD0DL, (VECTOR(int32_t, 2))(0x60123917L, 0x1538FD0DL), (VECTOR(int32_t, 2))(0x60123917L, 0x1538FD0DL), 0x60123917L, 0x1538FD0DL, 0x60123917L, 0x1538FD0DL);
                        VECTOR(int32_t, 4) l_380 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-3L)), (-3L));
                        VECTOR(int32_t, 2) l_381 = (VECTOR(int32_t, 2))(0x5474C690L, (-7L));
                        VECTOR(int32_t, 4) l_382 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5706192AL), 0x5706192AL);
                        VECTOR(int32_t, 2) l_383 = (VECTOR(int32_t, 2))(0x057F93DCL, 0x0A892950L);
                        VECTOR(int32_t, 16) l_384 = (VECTOR(int32_t, 16))(0x115E499DL, (VECTOR(int32_t, 4))(0x115E499DL, (VECTOR(int32_t, 2))(0x115E499DL, (-1L)), (-1L)), (-1L), 0x115E499DL, (-1L), (VECTOR(int32_t, 2))(0x115E499DL, (-1L)), (VECTOR(int32_t, 2))(0x115E499DL, (-1L)), 0x115E499DL, (-1L), 0x115E499DL, (-1L));
                        VECTOR(int32_t, 8) l_385 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                        VECTOR(int32_t, 16) l_386 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                        VECTOR(int32_t, 16) l_387 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1F8CB363L), 0x1F8CB363L), 0x1F8CB363L, (-1L), 0x1F8CB363L, (VECTOR(int32_t, 2))((-1L), 0x1F8CB363L), (VECTOR(int32_t, 2))((-1L), 0x1F8CB363L), (-1L), 0x1F8CB363L, (-1L), 0x1F8CB363L);
                        VECTOR(int32_t, 2) l_388 = (VECTOR(int32_t, 2))(7L, 0L);
                        VECTOR(int32_t, 2) l_389 = (VECTOR(int32_t, 2))(0x08F21F61L, (-1L));
                        int32_t l_390 = 0x31AC3184L;
                        int16_t l_391 = (-9L);
                        int16_t l_392 = 0x036EL;
                        uint32_t l_393[8] = {0x3DE23EB3L,0x3DE23EB3L,0x3DE23EB3L,0x3DE23EB3L,0x3DE23EB3L,0x3DE23EB3L,0x3DE23EB3L,0x3DE23EB3L};
                        int16_t l_394[6] = {0x37BCL,0x37BCL,0x37BCL,0x37BCL,0x37BCL,0x37BCL};
                        int32_t l_395 = 0L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_357[i] = (-8L);
                        for (i = 0; i < 1; i++)
                            l_366[i] = &l_367[0];
                        l_360++;
                        ++l_363;
                        l_210 = l_366[0];
                        l_395 &= (l_221.s7 = ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_368.xx)).xyxxxyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_369.wyyzzwyyxwzzzyyy)).s6b99)), l_370, ((VECTOR(int32_t, 4))(l_371.s5152)), (-3L), (-9L), 1L, 0x7DB2F1F8L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x554A63EFL, (-6L), 1L, 0x7B610229L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-3L), 0x316E80C6L, 0x66B72EF4L, 7L)), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_372.s11446256)).s27)).yyyx, (int32_t)((*l_210) = l_373.sa)))))), 0x0C518F7CL, ((VECTOR(int32_t, 2))(l_374.s01)), (-1L))).sa9)), 8L)).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, (-1L))), l_375, ((l_215 = l_376) , l_377), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_378.sff8d)).hi, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(l_379.s7eb7)).zyyzzwyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_380.yyxyxyzyywzzyxwy)).odd))))))).s0671272347047341))).hi)).s37)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_381.yxxx)))))).hi))), (-7L), 3L)).wwxwwywyxyzxyywz, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(l_382.ww)), ((VECTOR(int32_t, 2))(0x3DE09453L, (-1L)))))).xyxyyxyxyyxxxxxy))).s08))), ((VECTOR(int32_t, 16))(l_383.yyxxxyxyxxxyxyxx)).sf0, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(0x36D06428L, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))((-1L), 0L, ((VECTOR(int32_t, 8))(l_384.sc073f5e9)), ((*l_210) = ((VECTOR(int32_t, 2))(l_385.s26)).lo), ((VECTOR(int32_t, 2))(0x43D39470L, 0x324D5EF6L)), ((VECTOR(int32_t, 2))(l_386.s2c)), 0L)).lo, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_387.s4a)), 1L, 0L)))).x))).lo, ((VECTOR(int32_t, 2))(1L, 0x406AB9A6L)).yxyy))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x3311D27AL, 0x114D1D96L)), (-1L), 1L)).zwyywyww, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1290319CL, 0L)), (-10L), 0L)).xywwzxwz)), ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(l_388.yxxy)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_389.xyyx)).wwwyxwxwyzzxyxzx)).s715c, ((VECTOR(int32_t, 4))((((l_325 &= l_390) , l_391) , 9L), (-5L), 0x701BA293L, 0x491F1DAAL)), ((VECTOR(int32_t, 4))(0x3590FEDEL))))), ((VECTOR(int32_t, 2))(0x7D68BB18L)), 1L, ((VECTOR(int32_t, 4))((-6L))))).even))))), ((VECTOR(int32_t, 8))(0x24BAB2CAL))))).s2213660236052524, ((VECTOR(int32_t, 16))(0x0E9CAF66L)), ((VECTOR(int32_t, 16))(0x458EC2B1L))))), ((VECTOR(int32_t, 16))(1L))))).s724f)), (-1L), l_392, 0x63EC22B5L, l_393[7], l_394[2], 9L, 0x316B6180L)).hi, ((VECTOR(int32_t, 8))(0x40195754L))))), ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(9L))))).s43))), 0x0D2B8B2AL, 1L)))))).odd)).xyyyxxwx))).s4);
                    }
                }
            }
            else
            { /* block id: 242 */
                uint64_t l_396 = 0x2F9EC9FB2CE2B233L;
                int16_t l_449 = (-3L);
                int32_t l_451 = 0x4823CABEL;
                int32_t *l_450 = &l_451;
                uint32_t l_452 = 0xA77ABA84L;
                int32_t l_453 = 4L;
                if (l_396)
                { /* block id: 243 */
                    int32_t l_397 = 0x73A28ACEL;
                    int32_t l_398[1][7][7] = {{{1L,0L,0x08BA9B5EL,0L,1L,1L,0L},{1L,0L,0x08BA9B5EL,0L,1L,1L,0L},{1L,0L,0x08BA9B5EL,0L,1L,1L,0L},{1L,0L,0x08BA9B5EL,0L,1L,1L,0L},{1L,0L,0x08BA9B5EL,0L,1L,1L,0L},{1L,0L,0x08BA9B5EL,0L,1L,1L,0L},{1L,0L,0x08BA9B5EL,0L,1L,1L,0L}}};
                    int32_t l_399 = 0x65ED9D69L;
                    int32_t l_400 = (-1L);
                    int i, j, k;
                    l_213.s2 = (l_398[0][0][2] ^= l_397);
                    l_225.s4 = l_399;
                    if (l_400)
                    { /* block id: 247 */
                        uint8_t l_401 = 7UL;
                        uint32_t l_404[4][6][6] = {{{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL}},{{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL}},{{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL}},{{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL},{0UL,0UL,4294967290UL,0UL,0x3F709478L,4294967290UL}}};
                        uint32_t l_407 = 0xD03C19C4L;
                        uint8_t l_408 = 0UL;
                        int i, j, k;
                        l_401++;
                        ++l_404[3][0][1];
                        l_225.s1 = l_407;
                        l_408++;
                    }
                    else
                    { /* block id: 252 */
                        int64_t l_413 = 0x492D2998B6F7EEE9L;
                        int64_t *l_412 = &l_413;
                        int64_t **l_411 = &l_412;
                        VECTOR(int64_t, 2) l_414 = (VECTOR(int64_t, 2))((-1L), 0L);
                        VECTOR(int64_t, 4) l_415 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x00B7DB7142BA443AL), 0x00B7DB7142BA443AL);
                        int8_t l_416 = 1L;
                        int32_t l_418 = 0x70A19D5AL;
                        int32_t *l_417 = &l_418;
                        int32_t *l_419[1][3];
                        int32_t *l_420[9][1][6] = {{{&l_418,&l_418,&l_418,&l_418,&l_418,&l_418}},{{&l_418,&l_418,&l_418,&l_418,&l_418,&l_418}},{{&l_418,&l_418,&l_418,&l_418,&l_418,&l_418}},{{&l_418,&l_418,&l_418,&l_418,&l_418,&l_418}},{{&l_418,&l_418,&l_418,&l_418,&l_418,&l_418}},{{&l_418,&l_418,&l_418,&l_418,&l_418,&l_418}},{{&l_418,&l_418,&l_418,&l_418,&l_418,&l_418}},{{&l_418,&l_418,&l_418,&l_418,&l_418,&l_418}},{{&l_418,&l_418,&l_418,&l_418,&l_418,&l_418}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_419[i][j] = &l_418;
                        }
                        l_411 = (void*)0;
                        l_210 = (((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(l_414.xx)), ((VECTOR(int64_t, 16))(l_415.yxyyzwyzxyyxxwzz)).sf9))).lo , (void*)0);
                        l_213.s4 &= l_416;
                        l_420[1][0][3] = (l_419[0][2] = (l_210 = l_417));
                    }
                    for (l_398[0][0][2] = 0; (l_398[0][0][2] < (-18)); l_398[0][0][2] = safe_sub_func_int16_t_s_s(l_398[0][0][2], 3))
                    { /* block id: 262 */
                        int32_t l_425 = 0x46C8994DL;
                        int32_t *l_424 = &l_425;
                        int32_t **l_423 = &l_424;
                        int32_t **l_426 = &l_424;
                        l_426 = l_423;
                    }
                }
                else
                { /* block id: 265 */
                    int8_t l_427 = 1L;
                    uint64_t l_428 = 18446744073709551615UL;
                    int32_t l_431 = (-1L);
                    VECTOR(uint32_t, 8) l_444 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF1ECDCD1L), 0xF1ECDCD1L), 0xF1ECDCD1L, 4294967295UL, 0xF1ECDCD1L);
                    uint32_t l_445 = 3UL;
                    int32_t l_446 = (-10L);
                    int32_t l_447 = 0x41112C31L;
                    int16_t l_448 = 1L;
                    int i;
                    l_225.s3 |= l_427;
                    l_428++;
                    if (l_431)
                    { /* block id: 268 */
                        int8_t l_432 = 0x01L;
                        uint8_t l_433 = 0x3FL;
                        int32_t l_435 = (-1L);
                        int32_t *l_434 = &l_435;
                        int32_t **l_436 = (void*)0;
                        uint8_t l_437 = 0xD8L;
                        int32_t *l_440 = &l_435;
                        int32_t *l_441 = (void*)0;
                        l_210 = (l_432 , (l_433 , l_434));
                        l_436 = (void*)0;
                        ++l_437;
                        l_441 = (l_210 = l_440);
                    }
                    else
                    { /* block id: 274 */
                        int64_t l_442[1][9];
                        uint32_t l_443[10][1][1] = {{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_442[i][j] = (-8L);
                        }
                        l_443[6][0][0] ^= l_442[0][0];
                    }
                    l_225.s3 = ((((l_445 = ((VECTOR(uint32_t, 8))(l_444.s32036016)).s3) , 0x0175571CL) , (l_447 = l_446)) , l_448);
                }
                l_210 = (l_449 , l_450);
                (*l_210) = l_452;
                if ((l_225.s7 = (l_453 , ((*l_210) &= 0x25B179AAL))))
                { /* block id: 285 */
                    int32_t l_454[7][8] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    int i, j;
                    for (l_454[0][1] = 28; (l_454[0][1] != 15); l_454[0][1]--)
                    { /* block id: 288 */
                        VECTOR(int32_t, 4) l_457 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x79DCB7F0L), 0x79DCB7F0L);
                        uint8_t l_458 = 1UL;
                        uint16_t l_459 = 0x64C0L;
                        int32_t *l_461 = (void*)0;
                        int32_t **l_460[3];
                        int32_t **l_462 = &l_461;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_460[i] = &l_461;
                        (*l_450) = ((VECTOR(int32_t, 2))(l_457.wy)).lo;
                        l_459 = l_458;
                        l_462 = l_460[0];
                        (*l_450) = 0x7D4B1F75L;
                    }
                }
                else
                { /* block id: 294 */
                    uint8_t l_463[1][5][1] = {{{0x7EL},{0x7EL},{0x7EL},{0x7EL},{0x7EL}}};
                    int i, j, k;
                    l_463[0][4][0]++;
                }
            }
            ++l_466;
        }
        unsigned int result = 0;
        result += l_211;
        int l_212_i0, l_212_i1;
        for (l_212_i0 = 0; l_212_i0 < 8; l_212_i0++) {
            for (l_212_i1 = 0; l_212_i1 < 1; l_212_i1++) {
                result += l_212[l_212_i0][l_212_i1];
            }
        }
        result += l_213.s7;
        result += l_213.s6;
        result += l_213.s5;
        result += l_213.s4;
        result += l_213.s3;
        result += l_213.s2;
        result += l_213.s1;
        result += l_213.s0;
        result += l_214.s7;
        result += l_214.s6;
        result += l_214.s5;
        result += l_214.s4;
        result += l_214.s3;
        result += l_214.s2;
        result += l_214.s1;
        result += l_214.s0;
        result += l_215;
        int l_218_i0;
        for (l_218_i0 = 0; l_218_i0 < 7; l_218_i0++) {
            result += l_218[l_218_i0];
        }
        result += l_219;
        result += l_220;
        result += l_221.sf;
        result += l_221.se;
        result += l_221.sd;
        result += l_221.sc;
        result += l_221.sb;
        result += l_221.sa;
        result += l_221.s9;
        result += l_221.s8;
        result += l_221.s7;
        result += l_221.s6;
        result += l_221.s5;
        result += l_221.s4;
        result += l_221.s3;
        result += l_221.s2;
        result += l_221.s1;
        result += l_221.s0;
        result += l_222;
        result += l_223;
        int l_224_i0;
        for (l_224_i0 = 0; l_224_i0 < 1; l_224_i0++) {
            result += l_224[l_224_i0];
        }
        result += l_225.s7;
        result += l_225.s6;
        result += l_225.s5;
        result += l_225.s4;
        result += l_225.s3;
        result += l_225.s2;
        result += l_225.s1;
        result += l_225.s0;
        atomic_add(&p_617->g_special_values[39 * get_linear_group_id() + 26], result);
    }
    else
    { /* block id: 300 */
        (1 + 1);
    }
    return p_174;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_193
 * writes: p_617->g_193
 */
uint8_t * func_177(int8_t  p_178, int32_t  p_179, uint8_t * p_180, uint8_t * p_181, uint32_t  p_182, struct S0 * p_617)
{ /* block id: 126 */
    int32_t *l_187 = &p_617->g_188;
    int32_t *l_189 = &p_617->g_188;
    int32_t *l_190 = &p_617->g_188;
    int32_t *l_191[1];
    uint32_t l_196 = 0xACA4B364L;
    uint8_t *l_197 = &p_617->g_198;
    int i;
    for (i = 0; i < 1; i++)
        l_191[i] = &p_617->g_188;
    p_617->g_193[2][0][1]--;
    l_196 = 0x4E4462C3L;
    return l_197;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_569 p_617->g_571 p_617->g_573 p_617->g_576 p_617->g_192 p_617->g_537 p_617->g_556 p_617->g_148 p_617->g_149
 * writes: p_617->g_149 p_617->g_148
 */
int16_t  func_474(int64_t * p_475, uint8_t * p_476, int32_t  p_477, int32_t * p_478, struct S0 * p_617)
{ /* block id: 337 */
    int16_t l_566[10] = {0x012EL,0x012EL,0x012EL,0x012EL,0x012EL,0x012EL,0x012EL,0x012EL,0x012EL,0x012EL};
    VECTOR(uint8_t, 4) l_570 = (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 253UL), 253UL);
    VECTOR(uint32_t, 8) l_572 = (VECTOR(uint32_t, 8))(0x826910AFL, (VECTOR(uint32_t, 4))(0x826910AFL, (VECTOR(uint32_t, 2))(0x826910AFL, 4294967295UL), 4294967295UL), 4294967295UL, 0x826910AFL, 4294967295UL);
    VECTOR(uint16_t, 8) l_574 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL);
    VECTOR(uint16_t, 16) l_575 = (VECTOR(uint16_t, 16))(0x9E69L, (VECTOR(uint16_t, 4))(0x9E69L, (VECTOR(uint16_t, 2))(0x9E69L, 0x1497L), 0x1497L), 0x1497L, 0x9E69L, 0x1497L, (VECTOR(uint16_t, 2))(0x9E69L, 0x1497L), (VECTOR(uint16_t, 2))(0x9E69L, 0x1497L), 0x9E69L, 0x1497L, 0x9E69L, 0x1497L);
    int32_t **l_579 = &p_617->g_148;
    int i;
    (*p_617->g_148) &= (((+p_477) || (safe_sub_func_uint16_t_u_u(p_477, (l_566[7] == (safe_mod_func_int64_t_s_s((-4L), (((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(p_617->g_569.s95d733916af594bd)).scb64, ((VECTOR(uint8_t, 4))(l_570.zwwx))))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_617->g_571.s00)).xyxyxxyyxyyxxxyx)).s13ba))).w && (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_572.s46)), ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_477, 4294967290UL, (0x7E52B2F2L | 0L), 4UL, ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_617->g_573.wz)), 65532UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 4))(l_574.s5126)), ((VECTOR(uint16_t, 16))(l_575.s04fe0ffbbd873f22)).sb913, ((VECTOR(uint16_t, 2))(p_617->g_576.yy)).yyxy))).hi, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(7UL, 0UL)).xxyxxyyyxyyyxyxx)).sec8d)), (uint16_t)(safe_add_func_int32_t_s_s((p_617->g_192 & l_570.x), p_477))))).hi))))), 65532UL, 0UL)).x, 0UL, l_566[3], 0x9755L, 65528UL)).s7, 1UL, ((VECTOR(uint16_t, 4))(1UL)), 0x6A8FL, 7UL)).hi, ((VECTOR(uint16_t, 4))(1UL))))).zzxyzywwyxwxyxxz, (uint32_t)0xDB23E6CFL))).s3267, ((VECTOR(uint32_t, 4))(4294967293UL)), ((VECTOR(uint32_t, 4))(0x22373B0CL))))))).s75)), ((VECTOR(uint32_t, 2))(0xD9F001B8L))))), ((VECTOR(uint32_t, 2))(0UL)), p_617->g_537.s3, ((VECTOR(uint32_t, 2))(0x8043075FL)), ((VECTOR(uint32_t, 4))(2UL)), p_617->g_537.s2, 0x5B0AABF7L, 0x3F35C374L)).s0a3e)).y || p_477)))))))) <= p_617->g_556.w);
    (*l_579) = func_21(p_617->g_569.sd, &p_617->g_149, p_617);
    return (**l_579);
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_148 p_617->g_149 p_617->g_520 p_617->g_188 p_617->g_506 p_617->g_184 p_617->g_192 p_617->g_537 p_617->g_540 p_617->g_155 p_617->g_545 p_617->g_198 p_617->g_556 p_617->g_199 p_617->g_comm_values
 * writes: p_617->g_506 p_617->g_169 p_617->l_comm_values p_617->g_531 p_617->g_533 p_617->g_149 p_617->g_540 p_617->g_545
 */
int64_t * func_479(int32_t ** p_480, int32_t ** p_481, int16_t  p_482, int32_t * p_483, int64_t * p_484, struct S0 * p_617)
{ /* block id: 314 */
    uint8_t *l_527 = &p_617->g_198;
    VECTOR(int16_t, 16) l_528 = (VECTOR(int16_t, 16))(0x457AL, (VECTOR(int16_t, 4))(0x457AL, (VECTOR(int16_t, 2))(0x457AL, (-1L)), (-1L)), (-1L), 0x457AL, (-1L), (VECTOR(int16_t, 2))(0x457AL, (-1L)), (VECTOR(int16_t, 2))(0x457AL, (-1L)), 0x457AL, (-1L), 0x457AL, (-1L));
    int16_t **l_541 = (void*)0;
    int16_t **l_542[6][10] = {{(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0,(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0},{(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0,(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0},{(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0,(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0},{(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0,(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0},{(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0,(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0},{(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0,(void*)0,&p_617->g_540,&p_617->g_540,&p_617->g_540,(void*)0}};
    uint32_t *l_543 = (void*)0;
    uint32_t *l_544 = &p_617->g_545;
    int32_t l_548 = 0x1D2DF288L;
    int64_t *l_551 = &p_617->g_192;
    int8_t *l_559 = &p_617->g_531;
    int32_t l_560 = 0x2F7BFCF7L;
    int i, j;
    for (p_482 = (-19); (p_482 != 19); p_482 = safe_add_func_int16_t_s_s(p_482, 6))
    { /* block id: 317 */
        VECTOR(uint16_t, 4) l_515 = (VECTOR(uint16_t, 4))(0xC3FAL, (VECTOR(uint16_t, 2))(0xC3FAL, 0x8843L), 0x8843L);
        uint8_t *l_526 = &p_617->g_169;
        uint8_t **l_525[9] = {&l_526,&l_526,&l_526,&l_526,&l_526,&l_526,&l_526,&l_526,&l_526};
        int16_t *l_529 = (void*)0;
        int8_t *l_530 = &p_617->g_531;
        int32_t l_532 = 0x77AF0C4FL;
        int64_t *l_534 = (void*)0;
        int i;
        (*p_617->g_148) = (safe_mod_func_uint8_t_u_u((((((VECTOR(uint16_t, 16))((&p_617->g_156 == (void*)0), ((VECTOR(uint16_t, 8))(l_515.ywzxwwwx)), 1UL, ((VECTOR(uint16_t, 2))(0x30E8L, 0x4EC7L)), ((*p_617->g_148) >= ((p_617->g_533 = ((safe_sub_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(p_617->g_520.yyxyxyyx)).s5, ((((((((*l_530) = (((safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(p_617->g_188, (+l_515.w))), 7)) & (p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 74))] = ((p_617->g_169 = (((l_527 = (p_482 , &p_617->g_198)) == (void*)0) & (p_617->g_506.w ^= ((VECTOR(int16_t, 8))(l_528.s252e4c18)).s1))) != (((&p_483 != &p_483) & p_482) != 0x49L)))) < p_617->g_184)) , p_617->g_506.x) && p_482) ^ l_515.w) , 1L) > (*p_617->g_148)) >= l_515.y))) != p_617->g_149) != 65529UL), p_617->g_192)) || l_532)) < FAKE_DIVERGE(p_617->global_2_offset, get_global_id(2), 10))), 0xE572L, 0x2A4CL, 65527UL)).sc && 8UL) | (**p_481)) , GROUP_DIVERGE(2, 1)), l_515.x));
        return l_534;
    }
    (**p_481) = (safe_lshift_func_int16_t_s_u((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_617->g_537.s60)).yyxxyxyy)), 255UL, ((VECTOR(uint8_t, 4))(((safe_add_func_int8_t_s_s(((((((p_617->g_540 = p_617->g_540) != (void*)0) && ((void*)0 == &p_617->g_156)) ^ ((&l_527 == (void*)0) , (((0x73C9611D21008009L >= (((*l_544) |= p_617->g_155) != (safe_mul_func_int16_t_s_s((p_617->g_506.w = p_617->g_188), p_617->g_198)))) ^ (-1L)) , 0x1735034541A91DAAL))) >= 0x081DL) ^ l_528.s6), 0x09L)) != 1L), l_548, 0x09L, 5UL)), l_528.s1, 250UL, 0x96L)).s9 != 0x6BL), 6));
    (**p_481) ^= (((!(safe_sub_func_uint32_t_u_u(((l_551 == &p_617->g_155) ^ ((++(*l_544)) && (p_482 > (((l_528.s4 , ((+(1L ^ (l_542[1][8] == l_541))) ^ (safe_sub_func_uint16_t_u_u((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_617->g_556.yyyw)).lo)).hi >= ((((l_560 = ((p_482 || ((*l_559) = ((safe_div_func_uint8_t_u_u(255UL, 0x38L)) , p_617->g_520.x))) & l_528.sa)) <= l_528.sf) || p_617->g_199) > p_617->g_comm_values[p_617->tid])), 0x4AC3L)))) , p_482) < FAKE_DIVERGE(p_617->group_1_offset, get_group_id(1), 10))))), p_617->g_506.y))) , 0x055AA177L) <= (-7L));
    return &p_617->g_192;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_6 p_617->g_comm_values p_617->g_192 p_617->g_199 p_617->g_148 p_617->g_149
 * writes: p_617->g_192 p_617->g_149
 */
int32_t ** func_485(uint32_t  p_486, struct S0 * p_617)
{ /* block id: 307 */
    VECTOR(uint32_t, 16) l_496 = (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0xDDE6BAB4L), 0xDDE6BAB4L), 0xDDE6BAB4L, 4294967286UL, 0xDDE6BAB4L, (VECTOR(uint32_t, 2))(4294967286UL, 0xDDE6BAB4L), (VECTOR(uint32_t, 2))(4294967286UL, 0xDDE6BAB4L), 4294967286UL, 0xDDE6BAB4L, 4294967286UL, 0xDDE6BAB4L);
    int64_t *l_497 = (void*)0;
    int64_t *l_498 = &p_617->g_192;
    int i;
    (*p_617->g_148) = (((((safe_mul_func_int16_t_s_s(0x4E88L, (((VECTOR(uint64_t, 16))((safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_617->g_6, (0x152E0C0317D57220L ^ (((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(l_496.s6328560b797340f1)).s28a6, (uint32_t)((0x709C0F3B6D627832L < ((*l_498) &= p_617->g_comm_values[p_617->tid])) , l_496.s9)))).y ^ 0xA92FDB98L)))), FAKE_DIVERGE(p_617->group_1_offset, get_group_id(1), 10))) , (void*)0) != &p_617->g_169), 0x201EL)), 0x92CA6F5FACCEA86EL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(0xC1783B507E35B17BL)), 0x711F68FDAE5388A6L, ((VECTOR(uint64_t, 4))(0x2A95A3A692AF43CFL)), 0xDD2C652681015ABFL, p_486, 0xC21927A803434B94L, p_617->g_199, 0xF1CC1C9E6D88020FL, 0UL)).sa == 0L))) <= 65534UL) , p_486) & FAKE_DIVERGE(p_617->global_2_offset, get_global_id(2), 10)) , 0x2CBAF9A9L);
    (*p_617->g_148) ^= 0x27A68298L;
    return &p_617->g_148;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[74];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 74; i++)
            l_comm_values[i] = 1;
    struct S0 c_618;
    struct S0* p_617 = &c_618;
    struct S0 c_619 = {
        0x7A7525D2D91509CFL, // p_617->g_5
        0UL, // p_617->g_6
        0x29F83BD3L, // p_617->g_149
        &p_617->g_149, // p_617->g_148
        (-8L), // p_617->g_155
        1L, // p_617->g_156
        0UL, // p_617->g_157
        0x45L, // p_617->g_169
        0x4529B3CD36BC43A7L, // p_617->g_184
        0x38219578L, // p_617->g_188
        0x758A89B082438154L, // p_617->g_192
        {{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}},{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}},{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}},{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}},{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}},{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}},{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}},{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}},{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}},{{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L},{1UL,1UL,0UL,0xE71EL,0x4EB6L,0xAC83L}}}, // p_617->g_193
        1UL, // p_617->g_198
        0L, // p_617->g_199
        (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x0C9EL), 0x0C9EL), // p_617->g_506
        (VECTOR(uint64_t, 2))(0xE8E443D4164BF3E2L, 0x7C5EFBEAD01E0DE2L), // p_617->g_520
        1L, // p_617->g_531
        0x5A2BB6377883D85BL, // p_617->g_533
        (VECTOR(uint8_t, 8))(0x21L, (VECTOR(uint8_t, 4))(0x21L, (VECTOR(uint8_t, 2))(0x21L, 0xA6L), 0xA6L), 0xA6L, 0x21L, 0xA6L), // p_617->g_537
        (void*)0, // p_617->g_540
        0x082E0D46L, // p_617->g_545
        (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551615UL), 18446744073709551615UL), // p_617->g_556
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL, (VECTOR(uint8_t, 2))(0UL, 255UL), (VECTOR(uint8_t, 2))(0UL, 255UL), 0UL, 255UL, 0UL, 255UL), // p_617->g_569
        (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x62FBL), 0x62FBL), 0x62FBL, 5UL, 0x62FBL), // p_617->g_571
        (VECTOR(uint16_t, 4))(0xF497L, (VECTOR(uint16_t, 2))(0xF497L, 0x3320L), 0x3320L), // p_617->g_573
        (VECTOR(uint16_t, 2))(65535UL, 0x9A09L), // p_617->g_576
        0xFC759012BACC6B30L, // p_617->g_580
        &p_617->g_148, // p_617->g_594
        &p_617->g_148, // p_617->g_597
        0xECF9L, // p_617->g_605
        3L, // p_617->g_616
        0, // p_617->v_collective
        sequence_input[get_global_id(0)], // p_617->global_0_offset
        sequence_input[get_global_id(1)], // p_617->global_1_offset
        sequence_input[get_global_id(2)], // p_617->global_2_offset
        sequence_input[get_local_id(0)], // p_617->local_0_offset
        sequence_input[get_local_id(1)], // p_617->local_1_offset
        sequence_input[get_local_id(2)], // p_617->local_2_offset
        sequence_input[get_group_id(0)], // p_617->group_0_offset
        sequence_input[get_group_id(1)], // p_617->group_1_offset
        sequence_input[get_group_id(2)], // p_617->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 74)), permutations[0][get_linear_local_id()])), // p_617->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_618 = c_619;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_617);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_617->g_5, "p_617->g_5", print_hash_value);
    transparent_crc(p_617->g_6, "p_617->g_6", print_hash_value);
    transparent_crc(p_617->g_149, "p_617->g_149", print_hash_value);
    transparent_crc(p_617->g_155, "p_617->g_155", print_hash_value);
    transparent_crc(p_617->g_156, "p_617->g_156", print_hash_value);
    transparent_crc(p_617->g_157, "p_617->g_157", print_hash_value);
    transparent_crc(p_617->g_169, "p_617->g_169", print_hash_value);
    transparent_crc(p_617->g_184, "p_617->g_184", print_hash_value);
    transparent_crc(p_617->g_188, "p_617->g_188", print_hash_value);
    transparent_crc(p_617->g_192, "p_617->g_192", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_617->g_193[i][j][k], "p_617->g_193[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_617->g_198, "p_617->g_198", print_hash_value);
    transparent_crc(p_617->g_199, "p_617->g_199", print_hash_value);
    transparent_crc(p_617->g_506.x, "p_617->g_506.x", print_hash_value);
    transparent_crc(p_617->g_506.y, "p_617->g_506.y", print_hash_value);
    transparent_crc(p_617->g_506.z, "p_617->g_506.z", print_hash_value);
    transparent_crc(p_617->g_506.w, "p_617->g_506.w", print_hash_value);
    transparent_crc(p_617->g_520.x, "p_617->g_520.x", print_hash_value);
    transparent_crc(p_617->g_520.y, "p_617->g_520.y", print_hash_value);
    transparent_crc(p_617->g_531, "p_617->g_531", print_hash_value);
    transparent_crc(p_617->g_533, "p_617->g_533", print_hash_value);
    transparent_crc(p_617->g_537.s0, "p_617->g_537.s0", print_hash_value);
    transparent_crc(p_617->g_537.s1, "p_617->g_537.s1", print_hash_value);
    transparent_crc(p_617->g_537.s2, "p_617->g_537.s2", print_hash_value);
    transparent_crc(p_617->g_537.s3, "p_617->g_537.s3", print_hash_value);
    transparent_crc(p_617->g_537.s4, "p_617->g_537.s4", print_hash_value);
    transparent_crc(p_617->g_537.s5, "p_617->g_537.s5", print_hash_value);
    transparent_crc(p_617->g_537.s6, "p_617->g_537.s6", print_hash_value);
    transparent_crc(p_617->g_537.s7, "p_617->g_537.s7", print_hash_value);
    transparent_crc(p_617->g_545, "p_617->g_545", print_hash_value);
    transparent_crc(p_617->g_556.x, "p_617->g_556.x", print_hash_value);
    transparent_crc(p_617->g_556.y, "p_617->g_556.y", print_hash_value);
    transparent_crc(p_617->g_556.z, "p_617->g_556.z", print_hash_value);
    transparent_crc(p_617->g_556.w, "p_617->g_556.w", print_hash_value);
    transparent_crc(p_617->g_569.s0, "p_617->g_569.s0", print_hash_value);
    transparent_crc(p_617->g_569.s1, "p_617->g_569.s1", print_hash_value);
    transparent_crc(p_617->g_569.s2, "p_617->g_569.s2", print_hash_value);
    transparent_crc(p_617->g_569.s3, "p_617->g_569.s3", print_hash_value);
    transparent_crc(p_617->g_569.s4, "p_617->g_569.s4", print_hash_value);
    transparent_crc(p_617->g_569.s5, "p_617->g_569.s5", print_hash_value);
    transparent_crc(p_617->g_569.s6, "p_617->g_569.s6", print_hash_value);
    transparent_crc(p_617->g_569.s7, "p_617->g_569.s7", print_hash_value);
    transparent_crc(p_617->g_569.s8, "p_617->g_569.s8", print_hash_value);
    transparent_crc(p_617->g_569.s9, "p_617->g_569.s9", print_hash_value);
    transparent_crc(p_617->g_569.sa, "p_617->g_569.sa", print_hash_value);
    transparent_crc(p_617->g_569.sb, "p_617->g_569.sb", print_hash_value);
    transparent_crc(p_617->g_569.sc, "p_617->g_569.sc", print_hash_value);
    transparent_crc(p_617->g_569.sd, "p_617->g_569.sd", print_hash_value);
    transparent_crc(p_617->g_569.se, "p_617->g_569.se", print_hash_value);
    transparent_crc(p_617->g_569.sf, "p_617->g_569.sf", print_hash_value);
    transparent_crc(p_617->g_571.s0, "p_617->g_571.s0", print_hash_value);
    transparent_crc(p_617->g_571.s1, "p_617->g_571.s1", print_hash_value);
    transparent_crc(p_617->g_571.s2, "p_617->g_571.s2", print_hash_value);
    transparent_crc(p_617->g_571.s3, "p_617->g_571.s3", print_hash_value);
    transparent_crc(p_617->g_571.s4, "p_617->g_571.s4", print_hash_value);
    transparent_crc(p_617->g_571.s5, "p_617->g_571.s5", print_hash_value);
    transparent_crc(p_617->g_571.s6, "p_617->g_571.s6", print_hash_value);
    transparent_crc(p_617->g_571.s7, "p_617->g_571.s7", print_hash_value);
    transparent_crc(p_617->g_573.x, "p_617->g_573.x", print_hash_value);
    transparent_crc(p_617->g_573.y, "p_617->g_573.y", print_hash_value);
    transparent_crc(p_617->g_573.z, "p_617->g_573.z", print_hash_value);
    transparent_crc(p_617->g_573.w, "p_617->g_573.w", print_hash_value);
    transparent_crc(p_617->g_576.x, "p_617->g_576.x", print_hash_value);
    transparent_crc(p_617->g_576.y, "p_617->g_576.y", print_hash_value);
    transparent_crc(p_617->g_580, "p_617->g_580", print_hash_value);
    transparent_crc(p_617->g_605, "p_617->g_605", print_hash_value);
    transparent_crc(p_617->g_616, "p_617->g_616", print_hash_value);
    transparent_crc(p_617->v_collective, "p_617->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 39; i++)
            transparent_crc(p_617->g_special_values[i + 39 * get_linear_group_id()], "p_617->g_special_values[i + 39 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_617->l_comm_values[get_linear_local_id()], "p_617->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_617->g_comm_values[get_linear_group_id() * 74 + get_linear_local_id()], "p_617->g_comm_values[get_linear_group_id() * 74 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
