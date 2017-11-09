// --atomics 96 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 82,19,3 -l 2,1,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 47953667

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   volatile uint64_t  f2;
   int32_t  f3;
   int32_t  f4;
};

struct S1 {
    VECTOR(uint64_t, 2) g_25;
    uint32_t g_36;
    VECTOR(uint64_t, 16) g_58;
    int64_t g_60[10][3][4];
    int32_t g_63;
    volatile uint64_t g_69[10][8][3];
    int32_t *g_83;
    uint32_t g_87;
    struct S0 g_90;
    int64_t g_93;
    uint32_t g_94[8];
    volatile VECTOR(uint64_t, 2) g_119;
    int8_t g_123;
    VECTOR(uint32_t, 8) g_125;
    struct S0 g_126;
    struct S0 g_127[7][6];
    volatile VECTOR(uint32_t, 16) g_223;
    int16_t g_228;
    int32_t g_233;
    volatile uint16_t g_235;
    struct S0 *g_244;
    int32_t ** volatile g_255[10];
    int32_t ** volatile g_257;
    int32_t ** volatile g_459;
    int32_t ** volatile g_460;
    VECTOR(uint8_t, 2) g_469;
    int32_t * volatile g_472;
    uint32_t g_478;
    VECTOR(uint8_t, 16) g_521;
    VECTOR(int8_t, 4) g_522;
    VECTOR(int32_t, 8) g_550;
    VECTOR(int32_t, 16) g_552;
    VECTOR(int64_t, 2) g_577;
    VECTOR(int8_t, 4) g_582;
    volatile VECTOR(int8_t, 4) g_583;
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
uint32_t  func_1(struct S1 * p_603);
int64_t  func_4(uint64_t  p_5, uint64_t  p_6, uint32_t  p_7, struct S1 * p_603);
uint8_t  func_16(uint16_t  p_17, uint64_t  p_18, struct S1 * p_603);
int32_t * func_22(uint64_t  p_23, struct S1 * p_603);
int32_t * func_26(int32_t * p_27, int32_t * p_28, struct S1 * p_603);
int32_t * func_29(uint16_t  p_30, int16_t  p_31, int32_t  p_32, uint32_t  p_33, struct S1 * p_603);
uint8_t  func_40(int32_t  p_41, int16_t  p_42, struct S1 * p_603);
struct S0  func_46(int64_t  p_47, struct S1 * p_603);
int32_t  func_48(int64_t  p_49, int32_t * p_50, int32_t * p_51, struct S1 * p_603);
int8_t  func_55(int32_t * p_56, int32_t * p_57, struct S1 * p_603);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_603->l_comm_values p_603->g_25 p_603->g_comm_values p_603->g_58 p_603->g_69 p_603->g_60 p_603->g_63 p_603->g_83 p_603->g_87 p_603->g_90 p_603->g_94 p_603->g_119 p_603->g_93 p_603->g_125 p_603->g_126 p_603->g_223 p_603->g_235 p_603->g_244 p_603->g_36 p_603->g_127.f1 p_603->g_233 p_603->g_257 p_603->g_460 p_603->g_123 p_603->g_469 p_603->g_127.f4 p_603->g_472 p_603->g_228 p_603->g_521 p_603->g_522 p_603->g_550 p_603->g_552 p_603->g_577 p_603->g_582 p_603->g_583
 * writes: p_603->g_36 p_603->g_69 p_603->g_63 p_603->g_87 p_603->g_94 p_603->g_123 p_603->g_125 p_603->g_127 p_603->g_223 p_603->g_235 p_603->g_25 p_603->g_83 p_603->g_93 p_603->g_228 p_603->g_233 p_603->g_478 p_603->g_469 p_603->g_522 p_603->g_60 p_603->g_126.f0 p_603->g_521
 */
uint32_t  func_1(struct S1 * p_603)
{ /* block id: 4 */
    int8_t l_12 = (-1L);
    uint8_t l_15 = 0x2CL;
    uint32_t l_19 = 4294967295UL;
    uint8_t *l_574[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_575 = 0x4521AC52L;
    VECTOR(int64_t, 2) l_576 = (VECTOR(int64_t, 2))(0L, 0x5A57265959771FFDL);
    int64_t *l_601 = &p_603->g_60[5][0][3];
    int32_t *l_602 = &p_603->g_233;
    int i;
    (*l_602) = ((safe_mul_func_uint16_t_u_u(((((*l_601) = func_4((safe_div_func_int16_t_s_s(0x6FBAL, (safe_sub_func_int8_t_s_s(l_12, (l_575 = (p_603->g_521.sf = ((safe_add_func_uint16_t_u_u(l_12, l_15)) , func_16(p_603->l_comm_values[(safe_mod_func_uint32_t_u_u(p_603->tid, 2))], l_19, p_603)))))))), p_603->g_58.s2, ((((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_576.yxxyyyxyyyxxyxxy)).s7a)).yyxyxxxxxxyxxxyx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_603->g_577.yyyx)).zxyzywzw)).s1540120440411507, ((VECTOR(int64_t, 2))(0x3FECFE9B6C03372FL, 0x69F229C42BBE1E30L)).yxxyyyxyxxyxxxyy))).s8 <= (0x3EAAL >= l_12)) & p_603->g_577.x), p_603)) == p_603->g_577.x) , p_603->g_60[5][2][2]), l_12)) , 0x44E4ED6CL);
    (*l_602) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x659B7318L, 0x0F0FF1D9L)).xyxxyxxy)).s6;
    return (*l_602);
}


/* ------------------------------------------ */
/* 
 * reads : p_603->g_550 p_603->g_94 p_603->g_582 p_603->g_583 p_603->l_comm_values p_603->g_577 p_603->g_126.f1 p_603->g_25 p_603->g_comm_values p_603->g_69 p_603->g_60 p_603->g_58 p_603->g_63 p_603->g_83 p_603->g_87 p_603->g_90 p_603->g_125 p_603->g_126 p_603->g_223
 * writes: p_603->g_36 p_603->g_69 p_603->g_63 p_603->g_87 p_603->g_94 p_603->g_125 p_603->g_127 p_603->g_223 p_603->g_83
 */
int64_t  func_4(uint64_t  p_5, uint64_t  p_6, uint32_t  p_7, struct S1 * p_603)
{ /* block id: 260 */
    VECTOR(int8_t, 16) l_581 = (VECTOR(int8_t, 16))(0x72L, (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, (-1L)), (-1L)), (-1L), 0x72L, (-1L), (VECTOR(int8_t, 2))(0x72L, (-1L)), (VECTOR(int8_t, 2))(0x72L, (-1L)), 0x72L, (-1L), 0x72L, (-1L));
    VECTOR(int8_t, 8) l_586 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x3CL), 0x3CL), 0x3CL, (-1L), 0x3CL);
    int32_t l_590 = 0x68DFCA9AL;
    int32_t l_593 = (-4L);
    int32_t l_596[4];
    uint8_t l_597 = 1UL;
    int32_t **l_600 = &p_603->g_83;
    int i;
    for (i = 0; i < 4; i++)
        l_596[i] = 0x7AA4C227L;
    if (p_7)
    { /* block id: 261 */
        uint8_t l_580 = 254UL;
        int32_t **l_589 = &p_603->g_83;
        (*l_589) = func_29(p_603->g_550.s7, ((p_603->g_94[4] > (safe_sub_func_int16_t_s_s(0x384DL, l_580))) != (0xC6L <= ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_581.s7b62)))), ((VECTOR(int8_t, 16))(0x04L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x29L, (-1L))).xyyy)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(p_603->g_582.xzxw)).odd, ((VECTOR(int8_t, 8))(p_603->g_583.wyxzxzzx)).s17))).yxyy)).even)), (-5L), 0x6AL)), 0L, p_603->l_comm_values[(safe_mod_func_uint32_t_u_u(p_603->tid, 2))], (safe_add_func_uint16_t_u_u(p_603->g_577.x, p_6)), ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_586.s1727)).zwzxxzyx)).hi, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 2))(0x31L, (-5L))).yxxyyyxx, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))((safe_sub_func_int32_t_s_s(l_581.s4, p_5)), 1L, ((VECTOR(int8_t, 4))(0x0CL)), p_603->g_126.f1, 0x44L, (-1L), 0x19L, l_580, 0L, ((VECTOR(int8_t, 4))((-4L))))).lo, ((VECTOR(int8_t, 8))(0x4BL)), ((VECTOR(int8_t, 8))(0x20L)))))))).odd, ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 4))((-1L)))))).xzwywywwwywwxywy)).s2027))))).sf791))).zwxywxzy)).lo)), ((VECTOR(int8_t, 4))(9L))))), ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))(0x2FL))))).w)), l_580, p_7, p_603);
    }
    else
    { /* block id: 263 */
        int32_t l_591 = (-5L);
        int32_t *l_592 = &l_591;
        int32_t l_594[4] = {0x2E42613AL,0x2E42613AL,0x2E42613AL,0x2E42613AL};
        int32_t *l_595[3][5][7] = {{{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593}},{{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593}},{{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593},{&p_603->g_233,&l_594[3],&l_594[3],&p_603->g_233,&l_590,&l_593,&l_593}}};
        int i, j, k;
        --l_597;
    }
    (*l_600) = &l_596[2];
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_603->g_25 p_603->l_comm_values p_603->g_comm_values p_603->g_58 p_603->g_69 p_603->g_60 p_603->g_63 p_603->g_83 p_603->g_87 p_603->g_90 p_603->g_94 p_603->g_119 p_603->g_93 p_603->g_125 p_603->g_126 p_603->g_223 p_603->g_235 p_603->g_244 p_603->g_36 p_603->g_127.f1 p_603->g_233 p_603->g_257 p_603->g_460 p_603->g_123 p_603->g_469 p_603->g_127.f4 p_603->g_472 p_603->g_228 p_603->g_521 p_603->g_522 p_603->g_550 p_603->g_552
 * writes: p_603->g_36 p_603->g_69 p_603->g_63 p_603->g_87 p_603->g_94 p_603->g_123 p_603->g_125 p_603->g_127 p_603->g_223 p_603->g_235 p_603->g_25 p_603->g_83 p_603->g_93 p_603->g_228 p_603->g_233 p_603->g_478 p_603->g_469 p_603->g_522 p_603->g_60 p_603->g_126.f0
 */
uint8_t  func_16(uint16_t  p_17, uint64_t  p_18, struct S1 * p_603)
{ /* block id: 5 */
    VECTOR(int8_t, 8) l_20 = (VECTOR(int8_t, 8))(0x79L, (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, 0L), 0L), 0L, 0x79L, 0L);
    VECTOR(int8_t, 4) l_21 = (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 0x79L), 0x79L);
    uint32_t l_477[10] = {0x9AC63B00L,0x9AC63B00L,0x9AC63B00L,0x9AC63B00L,0x9AC63B00L,0x9AC63B00L,0x9AC63B00L,0x9AC63B00L,0x9AC63B00L,0x9AC63B00L};
    int32_t l_483 = (-1L);
    int32_t l_484 = 1L;
    int32_t l_485 = 0L;
    int32_t l_486 = 0L;
    int32_t l_487 = 0x22FB1B90L;
    int32_t l_488 = 0x23357A42L;
    VECTOR(int32_t, 16) l_489 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4BE97719L), 0x4BE97719L), 0x4BE97719L, 0L, 0x4BE97719L, (VECTOR(int32_t, 2))(0L, 0x4BE97719L), (VECTOR(int32_t, 2))(0L, 0x4BE97719L), 0L, 0x4BE97719L, 0L, 0x4BE97719L);
    VECTOR(uint32_t, 4) l_511 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xD4DB37E3L), 0xD4DB37E3L);
    int32_t **l_514 = (void*)0;
    int32_t ***l_515 = (void*)0;
    int32_t ***l_516 = &l_514;
    int8_t *l_517 = (void*)0;
    int8_t *l_518 = (void*)0;
    int32_t *l_527[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int8_t, 2) l_534 = (VECTOR(int8_t, 2))((-1L), 0x3CL);
    VECTOR(int8_t, 16) l_535 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L, (VECTOR(int8_t, 2))((-1L), 3L), (VECTOR(int8_t, 2))((-1L), 3L), (-1L), 3L, (-1L), 3L);
    VECTOR(int8_t, 4) l_536 = (VECTOR(int8_t, 4))(0x7FL, (VECTOR(int8_t, 2))(0x7FL, 0L), 0L);
    uint8_t *l_539 = (void*)0;
    uint8_t *l_540 = (void*)0;
    uint8_t *l_541 = (void*)0;
    uint8_t *l_542 = (void*)0;
    uint8_t *l_543 = (void*)0;
    uint8_t *l_544 = (void*)0;
    uint8_t *l_545[5][2][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    VECTOR(int32_t, 16) l_551 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-9L)), (-9L)), (-9L), (-6L), (-9L), (VECTOR(int32_t, 2))((-6L), (-9L)), (VECTOR(int32_t, 2))((-6L), (-9L)), (-6L), (-9L), (-6L), (-9L));
    int8_t *l_559 = (void*)0;
    int8_t *l_560[8][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int64_t *l_561 = (void*)0;
    int64_t *l_562 = (void*)0;
    int64_t *l_563 = &p_603->g_60[8][0][2];
    int16_t *l_564 = &p_603->g_228;
    uint32_t *l_567 = &p_603->g_127[2][2].f1;
    struct S0 *l_568 = &p_603->g_127[2][2];
    int i, j, k;
    if ((((VECTOR(int8_t, 2))(l_20.s63)).even < ((VECTOR(int8_t, 4))(l_21.wzzw)).y))
    { /* block id: 6 */
        int32_t **l_458 = (void*)0;
        int16_t *l_470 = &p_603->g_228;
        int32_t l_471 = 0x73CC1213L;
        (*p_603->g_460) = func_22(((p_18 != (safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 2))(p_603->g_25.yy)).even))) <= l_20.s0), p_603);
        (*p_603->g_472) = (((((p_603->g_93 = 0x0913AB8872402627L) , GROUP_DIVERGE(1, 1)) < (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(0x2C46L, p_603->g_123)), (((p_603->g_90.f2 ^ ((safe_add_func_int64_t_s_s((1L > (((*l_470) = (((safe_rshift_func_uint16_t_u_s((p_603->g_94[4] && ((0x244DL == (((VECTOR(uint8_t, 8))(0x6BL, l_21.w, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_603->g_469.yyxxxyxx)), 0xF7L, (6L || 18446744073709551613UL), ((VECTOR(uint8_t, 4))(0x33L)), 0x68L, 250UL)).s7dd8)), 0x61L, 0xC3L)).s0 < 0x27L)) ^ p_603->g_127[2][2].f1)), 0)) != l_21.y) == l_21.y)) && p_18)), p_603->g_127[2][2].f4)) , 0x56A6ECA67695F722L)) <= 0x0542524DL) >= p_18)))) != 0x2CL) , l_471);
    }
    else
    { /* block id: 228 */
        int32_t *l_479 = &p_603->g_63;
        int32_t *l_480 = (void*)0;
        int32_t *l_481 = (void*)0;
        int32_t *l_482[4];
        uint16_t l_490[2];
        VECTOR(int16_t, 8) l_498 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L));
        int i;
        for (i = 0; i < 4; i++)
            l_482[i] = &p_603->g_63;
        for (i = 0; i < 2; i++)
            l_490[i] = 65535UL;
        p_603->g_478 = (safe_rshift_func_int8_t_s_s(((1L <= (safe_lshift_func_uint8_t_u_s(l_477[1], 6))) == 8L), (func_46(p_603->g_90.f1, p_603) , 0x0EL)));
        l_490[0]++;
        for (p_603->g_228 = 0; (p_603->g_228 <= 21); ++p_603->g_228)
        { /* block id: 233 */
            int32_t **l_495 = &p_603->g_83;
            (*l_495) = (void*)0;
        }
        l_483 = (((*l_479) = 5UL) > ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(l_498.s77043764)).s1, (safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((l_489.s4 && (safe_mul_func_uint8_t_u_u(p_17, p_603->l_comm_values[(safe_mod_func_uint32_t_u_u(p_603->tid, 2))]))), ((safe_mod_func_uint16_t_u_u(FAKE_DIVERGE(p_603->global_2_offset, get_global_id(2), 10), ((safe_lshift_func_int8_t_s_u((&l_485 != &l_486), 0)) & p_603->g_126.f4))) || ((((void*)0 == l_479) || l_20.s5) != FAKE_DIVERGE(p_603->global_0_offset, get_global_id(0), 10))))) ^ l_483), l_477[1])))) && p_18));
    }
    p_603->g_233 &= (safe_sub_func_uint64_t_u_u(((((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 16))(l_511.zxwxwxyxxywzwyxz)).s87))).lo < (safe_mul_func_uint8_t_u_u((((*l_516) = l_514) != ((!(((VECTOR(int32_t, 16))(0x346DC0A8L, (((p_603->g_123 = p_603->g_69[0][1][1]) >= ((safe_lshift_func_uint8_t_u_u(6UL, (+((VECTOR(uint8_t, 4))(p_603->g_521.s42cd)).w))) <= ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x4CL, ((VECTOR(int8_t, 2))(p_603->g_522.wy)), 1L)), 1L, 0x73L, (safe_sub_func_int64_t_s_s((0xAFL != p_18), (safe_sub_func_uint8_t_u_u((l_527[2] != ((safe_mod_func_int8_t_s_s(((((safe_add_func_uint64_t_u_u((((*l_563) = ((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(l_534.yxxy)).yyxzzzwzxwwzyyyw, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(l_535.s9f59fe8d0aa6e070)).odd, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(0x41L, 0x5BL)).yyxy, ((VECTOR(int8_t, 4))(l_536.wzzw))))), (safe_add_func_uint8_t_u_u((p_603->g_469.x--), (safe_lshift_func_uint16_t_u_s((((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))((-10L), (((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(p_603->g_550.s5755)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(1L, 7L)).xyyxyxyy))).s45)).xyyxxyyx)).s50))), (-1L), 0x6DEADEB0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_551.s78feefda7a2b8408)))).s12f8, ((VECTOR(int32_t, 8))(p_603->g_552.s51e37449)).lo))).hi)).xyyy))))).z , (safe_mod_func_int16_t_s_s((3UL < (-7L)), ((safe_sub_func_int8_t_s_s((p_603->g_522.z = (safe_div_func_uint16_t_u_u(p_603->g_94[5], p_603->g_552.sd))), p_17)) & p_603->g_552.sc)))), ((VECTOR(int8_t, 4))(0x35L)), 0L, 0x44L)).lo, ((VECTOR(int8_t, 4))(0x44L))))))).hi)).xxyyxyyxyyxxyxyx, ((VECTOR(int8_t, 16))(0x3CL)), ((VECTOR(int8_t, 16))(0x1AL))))), ((VECTOR(uint8_t, 16))(255UL))))).s4 || 0x786EL), p_603->g_550.s4)))), p_603->g_126.f3, ((VECTOR(int8_t, 4))(0L)), (-6L), ((VECTOR(int8_t, 4))(0x1FL)), 0x7CL)).lo, ((VECTOR(int8_t, 8))(0L)))))))).s2711527365255560))).s7285, (int8_t)p_18))).hi)), 0x4AL, 0x61L)).w, p_17)) == 0x4E11L)) , p_603->g_87), p_17)) ^ GROUP_DIVERGE(2, 1)) , l_564) != &p_603->g_228), 0xCBL)) , (void*)0)), 0UL)))), 0x22L, 1L, 0L, p_18, 0x3CL, (-1L), ((VECTOR(int8_t, 2))((-1L))), 0x14L)).s0f)), p_18, 0x5DL, ((VECTOR(int8_t, 4))(9L)))).lo, (int8_t)0L))))).yzywwyxz, ((VECTOR(int8_t, 8))(0x5FL))))).hi)).even, ((VECTOR(int8_t, 2))(0x08L))))).yyyxyxyy)).s25, ((VECTOR(int8_t, 2))(0x1CL))))).hi)) , p_18), (-1L), 0L, ((VECTOR(int32_t, 4))((-8L))), ((VECTOR(int32_t, 2))(0x443D0994L)), p_17, 0x63803A94L, p_17, 0x12636AB8L, (-1L), 1L)).sb , p_18)) , &p_603->g_472)), p_17))) == 0x074CA524L), p_17));
    (*p_603->g_472) = (safe_div_func_uint32_t_u_u((((*l_567) = GROUP_DIVERGE(2, 1)) , (l_568 != l_568)), 0x9C02516CL));
    for (p_603->g_126.f0 = 3; (p_603->g_126.f0 < 35); p_603->g_126.f0++)
    { /* block id: 249 */
        for (l_488 = 15; (l_488 == 1); l_488--)
        { /* block id: 252 */
            uint16_t l_573 = 2UL;
            l_573 = (-7L);
        }
        return p_18;
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_603->l_comm_values p_603->g_25 p_603->g_comm_values p_603->g_58 p_603->g_69 p_603->g_60 p_603->g_63 p_603->g_83 p_603->g_87 p_603->g_90 p_603->g_94 p_603->g_119 p_603->g_93 p_603->g_125 p_603->g_126 p_603->g_223 p_603->g_235 p_603->g_244 p_603->g_36 p_603->g_127.f1 p_603->g_233 p_603->g_257
 * writes: p_603->g_36 p_603->g_69 p_603->g_63 p_603->g_87 p_603->g_94 p_603->g_123 p_603->g_125 p_603->g_127 p_603->g_223 p_603->g_235 p_603->g_25 p_603->g_83
 */
int32_t * func_22(uint64_t  p_23, struct S1 * p_603)
{ /* block id: 7 */
    uint64_t l_34 = 5UL;
    int32_t *l_232[8] = {&p_603->g_233,&p_603->g_233,&p_603->g_233,&p_603->g_233,&p_603->g_233,&p_603->g_233,&p_603->g_233,&p_603->g_233};
    int32_t **l_259[8] = {&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83};
    int32_t *l_260 = &p_603->g_63;
    int32_t *l_457[8][3];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
            l_457[i][j] = (void*)0;
    }
    l_260 = func_26(func_29(p_603->l_comm_values[(safe_mod_func_uint32_t_u_u(p_603->tid, 2))], p_23, p_603->l_comm_values[(safe_mod_func_uint32_t_u_u(p_603->tid, 2))], l_34, p_603), l_232[0], p_603);
    (*p_603->g_83) ^= (safe_rshift_func_uint8_t_u_s(p_23, p_23));
    if ((atomic_inc(&p_603->g_atomic_input[96 * get_linear_group_id() + 95]) == 3))
    { /* block id: 126 */
        uint32_t l_263 = 0x9A400A4BL;
        VECTOR(int32_t, 4) l_453 = (VECTOR(int32_t, 4))(0x2AF24962L, (VECTOR(int32_t, 2))(0x2AF24962L, 0x28B5D1AEL), 0x28B5D1AEL);
        struct S0 l_454 = {0xFB4D7C0CL,0x2BD67E6EL,0x18DE25FE2000CDB3L,0x7D160AF2L,1L};/* VOLATILE GLOBAL l_454 */
        struct S0 l_455 = {4294967295UL,4294967289UL,0x034C25B0969CFA82L,0x2FC58843L,0x70E99B7BL};/* VOLATILE GLOBAL l_455 */
        int32_t l_456 = (-1L);
        int i;
        if (l_263)
        { /* block id: 127 */
            struct S0 l_264 = {0xEE1269B7L,6UL,18446744073709551615UL,-3L,-1L};/* VOLATILE GLOBAL l_264 */
            l_264 = l_264;
        }
        else
        { /* block id: 129 */
            int32_t l_265 = 0x16E59A8DL;
            VECTOR(int32_t, 8) l_274 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1D0BA8BCL), 0x1D0BA8BCL), 0x1D0BA8BCL, (-1L), 0x1D0BA8BCL);
            VECTOR(int32_t, 8) l_275 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x76FDEB23L), 0x76FDEB23L), 0x76FDEB23L, 1L, 0x76FDEB23L);
            VECTOR(uint64_t, 4) l_276 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xC2990F486D25DB25L), 0xC2990F486D25DB25L);
            VECTOR(int32_t, 4) l_277 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x3339BC91L), 0x3339BC91L);
            VECTOR(int32_t, 2) l_278 = (VECTOR(int32_t, 2))(1L, 0x36D265F0L);
            VECTOR(int32_t, 16) l_279 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x1564B6E4L), 0x1564B6E4L), 0x1564B6E4L, (-10L), 0x1564B6E4L, (VECTOR(int32_t, 2))((-10L), 0x1564B6E4L), (VECTOR(int32_t, 2))((-10L), 0x1564B6E4L), (-10L), 0x1564B6E4L, (-10L), 0x1564B6E4L);
            VECTOR(int32_t, 16) l_280 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5C3F3B8EL), 0x5C3F3B8EL), 0x5C3F3B8EL, 0L, 0x5C3F3B8EL, (VECTOR(int32_t, 2))(0L, 0x5C3F3B8EL), (VECTOR(int32_t, 2))(0L, 0x5C3F3B8EL), 0L, 0x5C3F3B8EL, 0L, 0x5C3F3B8EL);
            VECTOR(int32_t, 8) l_281 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x4830D6B6L), 0x4830D6B6L), 0x4830D6B6L, (-2L), 0x4830D6B6L);
            VECTOR(int32_t, 4) l_282 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 1L), 1L);
            uint64_t l_283 = 1UL;
            VECTOR(int32_t, 16) l_284 = (VECTOR(int32_t, 16))(0x704473B2L, (VECTOR(int32_t, 4))(0x704473B2L, (VECTOR(int32_t, 2))(0x704473B2L, (-9L)), (-9L)), (-9L), 0x704473B2L, (-9L), (VECTOR(int32_t, 2))(0x704473B2L, (-9L)), (VECTOR(int32_t, 2))(0x704473B2L, (-9L)), 0x704473B2L, (-9L), 0x704473B2L, (-9L));
            uint32_t l_285 = 6UL;
            uint8_t l_286 = 0x9CL;
            uint32_t l_287 = 0UL;
            int64_t l_288 = 1L;
            int8_t l_289 = 5L;
            int32_t l_290 = 0L;
            int64_t l_291 = 0x5F3D40963F55FFDFL;
            int32_t l_292 = 1L;
            int32_t l_293 = 0x758E9458L;
            int64_t l_294[5][5][4] = {{{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L}},{{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L}},{{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L}},{{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L}},{{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L},{8L,0x3417EADFE59A755CL,(-1L),8L}}};
            uint32_t l_295 = 4294967295UL;
            int8_t l_332 = 0x08L;
            VECTOR(int32_t, 4) l_333 = (VECTOR(int32_t, 4))(0x4AA3923EL, (VECTOR(int32_t, 2))(0x4AA3923EL, 0x5C3C91A6L), 0x5C3C91A6L);
            VECTOR(int32_t, 2) l_334 = (VECTOR(int32_t, 2))((-2L), 0L);
            uint32_t l_335 = 4294967286UL;
            int8_t l_336 = 1L;
            uint8_t l_337 = 0xCBL;
            VECTOR(int32_t, 2) l_338 = (VECTOR(int32_t, 2))(0x068C5628L, 6L);
            VECTOR(int32_t, 4) l_339 = (VECTOR(int32_t, 4))(0x25CFA9DFL, (VECTOR(int32_t, 2))(0x25CFA9DFL, 0x36A9C44CL), 0x36A9C44CL);
            VECTOR(int32_t, 16) l_340 = (VECTOR(int32_t, 16))(0x02344725L, (VECTOR(int32_t, 4))(0x02344725L, (VECTOR(int32_t, 2))(0x02344725L, (-2L)), (-2L)), (-2L), 0x02344725L, (-2L), (VECTOR(int32_t, 2))(0x02344725L, (-2L)), (VECTOR(int32_t, 2))(0x02344725L, (-2L)), 0x02344725L, (-2L), 0x02344725L, (-2L));
            VECTOR(int32_t, 4) l_341 = (VECTOR(int32_t, 4))(0x3B23840BL, (VECTOR(int32_t, 2))(0x3B23840BL, 0x5A231AF0L), 0x5A231AF0L);
            uint32_t l_342 = 0x693607AAL;
            int32_t l_343[9] = {0x69C89B49L,0x69C89B49L,0x69C89B49L,0x69C89B49L,0x69C89B49L,0x69C89B49L,0x69C89B49L,0x69C89B49L,0x69C89B49L};
            int32_t l_344 = 0L;
            VECTOR(int32_t, 4) l_345 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
            VECTOR(int32_t, 4) l_346 = (VECTOR(int32_t, 4))(0x1B31973DL, (VECTOR(int32_t, 2))(0x1B31973DL, (-10L)), (-10L));
            int32_t l_347 = 1L;
            VECTOR(int32_t, 8) l_348 = (VECTOR(int32_t, 8))(0x72719BE2L, (VECTOR(int32_t, 4))(0x72719BE2L, (VECTOR(int32_t, 2))(0x72719BE2L, 0x1951B9E5L), 0x1951B9E5L), 0x1951B9E5L, 0x72719BE2L, 0x1951B9E5L);
            int32_t l_349 = (-5L);
            int32_t l_350 = 0x17A42695L;
            int8_t l_351 = 0x2FL;
            uint8_t l_352 = 8UL;
            uint32_t l_353 = 4294967287UL;
            int64_t l_354 = 5L;
            uint64_t l_355 = 9UL;
            int32_t l_356 = 0x2525AA5AL;
            int i, j, k;
            for (l_265 = 28; (l_265 != 29); l_265 = safe_add_func_uint16_t_u_u(l_265, 4))
            { /* block id: 132 */
                int32_t l_269 = (-9L);
                int32_t *l_268 = &l_269;
                VECTOR(int32_t, 2) l_270 = (VECTOR(int32_t, 2))((-7L), 0x38EA459BL);
                int64_t l_271 = 0x7951CF20ECE37125L;
                int32_t l_272 = 0L;
                int32_t l_273 = (-7L);
                int i;
                l_268 = (void*)0;
                l_273 |= (l_272 = (l_271 |= ((VECTOR(int32_t, 8))(l_270.xxxxyyxy)).s3));
            }
            if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(0x66F5B800L, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(1L, 0L, 0x17F75804L, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(l_274.s14)).yxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_275.s17)), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x3913D021L, l_276.x, 0x126322E8L, 0x7C98202FL)).xwzxxxyzwzyzxxxw)).sf446)).xzzywzwyzzxwwwxw, ((VECTOR(int32_t, 8))(l_277.wxxwwyyy)).s7470277662125133, ((VECTOR(int32_t, 2))(l_278.xx)).yyxxyyxyyxyxyxxx))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_279.sd21d)).zyxxyzzw)).s25, ((VECTOR(int32_t, 16))(l_280.scd33e0ac27bffe73)).sce, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_281.s44)).xyyxxxxx)).s52)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(l_282.zx)).xxyxyyxx, ((VECTOR(int32_t, 8))(6L, ((VECTOR(int32_t, 2))(0x09C13B04L, 0x39D264E4L)), ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(0x5CEC21AFL, 0x3F120619L, (-3L), 0x577AFF95L)).xwzzzxyyyxwyzxzw, (int32_t)(l_283 , ((l_287 ^= (((VECTOR(int32_t, 4))(l_284.s268f)).x , (l_285 , l_286))) , (l_288 , l_289))), (int32_t)(GROUP_DIVERGE(1, 1) , l_290)))).sa, l_291, ((VECTOR(int32_t, 2))((-2L))), 0x4919450EL))))).s33)), 0x510F9D1DL, 0x7274A17FL)), 0x00F9DED9L, 0L)).s57))).yyxxyxxx)).s47)).xxyxyxyy)), ((VECTOR(int32_t, 8))(0x07027B51L))))), ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))(0x17E02298L))))).s02, ((VECTOR(int32_t, 2))((-1L)))))).xyyxxyyyxxyxyyyy)).se82b))), 0x45A436E0L)).lo, ((VECTOR(int32_t, 4))(0x6E46ED0BL))))), ((VECTOR(int32_t, 4))((-6L)))))), l_292, 0x19BA3C1EL, 0x28FCBE95L, l_293, 0x7EE779FAL, ((VECTOR(int32_t, 4))((-1L))), 0x32DCB8E8L, 0x0F7910A5L)), (int32_t)l_294[1][1][2], (int32_t)l_295))).s1db3)).w)
            { /* block id: 139 */
                uint32_t l_296 = 6UL;
                int32_t l_297 = 0x2538480CL;
                l_280.s6 &= (l_297 = l_296);
                for (l_296 = (-13); (l_296 >= 57); ++l_296)
                { /* block id: 144 */
                    int32_t l_300 = 0L;
                    int64_t l_320[6][1][10] = {{{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}}};
                    int32_t l_321 = 0x096AFF19L;
                    int64_t l_322 = 1L;
                    uint32_t l_323 = 0xD91A189AL;
                    int i, j, k;
                    l_290 |= l_300;
                    for (l_300 = 0; (l_300 >= (-5)); l_300 = safe_sub_func_int64_t_s_s(l_300, 5))
                    { /* block id: 148 */
                        uint32_t l_303 = 0xFD6A43AAL;
                        int32_t l_305[1];
                        int32_t *l_304[10] = {&l_305[0],&l_305[0],&l_305[0],&l_305[0],&l_305[0],&l_305[0],&l_305[0],&l_305[0],&l_305[0],&l_305[0]};
                        int32_t *l_306 = &l_305[0];
                        uint16_t l_307[2];
                        int16_t l_308[3];
                        uint64_t l_309 = 0x9193C48F4A693FB2L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_305[i] = 0x243176C6L;
                        for (i = 0; i < 2; i++)
                            l_307[i] = 0x4069L;
                        for (i = 0; i < 3; i++)
                            l_308[i] = 0x69DFL;
                        l_274.s6 |= (l_290 = l_303);
                        l_306 = l_304[5];
                        l_284.s2 = l_307[1];
                        l_309++;
                    }
                    for (l_300 = 5; (l_300 <= 8); l_300 = safe_add_func_uint32_t_u_u(l_300, 1))
                    { /* block id: 157 */
                        int32_t l_315 = 0x15D64C1AL;
                        int32_t *l_314 = &l_315;
                        int32_t *l_316 = &l_315;
                        uint32_t l_317 = 0xB1B1B573L;
                        int32_t *l_318 = &l_315;
                        int32_t *l_319 = (void*)0;
                        l_316 = (FAKE_DIVERGE(p_603->group_1_offset, get_group_id(1), 10) , l_314);
                        l_316 = (l_319 = (l_317 , l_318));
                    }
                    --l_323;
                }
            }
            else
            { /* block id: 164 */
                uint8_t l_326[2][2];
                int32_t l_330 = (-2L);
                int32_t *l_329 = &l_330;
                int32_t *l_331 = (void*)0;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_326[i][j] = 0x80L;
                }
                ++l_326[1][1];
                l_331 = l_329;
            }
            if ((l_332 , ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_333.zzywwzzz)), ((VECTOR(int32_t, 16))(l_334.xyxyyyxyxxyxxxxx)).lo, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(3L, 0L)).yyxyyyyxyxxyyyxx, ((VECTOR(int32_t, 2))(0L, 1L)).xxxxyyyxxyxyxyyy, ((VECTOR(int32_t, 8))((-4L), ((VECTOR(int32_t, 2))(5L, 0x580B91C3L)), (l_337 = (l_335 , l_336)), 4L, ((VECTOR(int32_t, 2))(l_338.xx)), 0x21BAE244L)).s0447352300131764))).lo))).hi, ((VECTOR(int32_t, 4))(l_339.xxyx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_340.se580f3a3)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_341.zzyyxxzw)).s03, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-6L), ((VECTOR(int32_t, 2))(0L, 0x5EB1884DL)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-5L), (l_342 ^= 0x008AC907L), l_343[4], l_344, ((VECTOR(int32_t, 2))(l_345.yx)), ((VECTOR(int32_t, 8))(l_346.zzwxwxzx)), 5L, 0x24D48C43L)).s6a)), ((VECTOR(int32_t, 8))(4L, l_347, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(l_348.s46265272)), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((((l_349 , l_350) , l_351) , (-1L)), 0x30F8AD1CL, (-10L), (-1L), 0x5FB3FA6AL, (-7L), 1L, 0L)).odd)))).even, ((VECTOR(int32_t, 2))(0x3716E5B7L))))).xxyxxxxy))).odd, ((VECTOR(int32_t, 4))(0x7C40D2A9L))))), 0x4ECE4411L, 0x1F25575EL)).s46))), l_352, l_353, 0x26588A70L, ((VECTOR(int32_t, 4))(0x366EB63CL)), l_354, ((VECTOR(int32_t, 2))(0x4B42E021L)), 0L)).s77)), ((VECTOR(int32_t, 8))(1L)), 0x08141940L, 0L, 0x500189E5L, l_355, 7L, (-7L))).s96))), ((VECTOR(int32_t, 2))((-1L)))))).yyxx)).lo, ((VECTOR(int32_t, 2))(0x15E7C46AL))))).xyyx, ((VECTOR(int32_t, 4))(0L))))).wxwxzxzy))).odd, ((VECTOR(int32_t, 4))(6L)), ((VECTOR(int32_t, 4))(0x6DA62F98L))))), ((VECTOR(int32_t, 4))(0x7515D1D5L))))).wyxxyyzzxyyxzyyz, ((VECTOR(int32_t, 16))((-8L)))))).lo, ((VECTOR(int32_t, 8))(0x25AD7D96L))))).s6563702274743360, ((VECTOR(int32_t, 16))(2L))))).sbfb7)), ((VECTOR(int32_t, 8))((-1L))), l_356, 0L, 0x174AA0F8L, 0x6BE0CA50L)).s729d))))).z))
            { /* block id: 170 */
                int32_t *l_357 = (void*)0;
                int32_t l_359 = 0x131C486CL;
                int32_t *l_358 = &l_359;
                int32_t *l_360 = &l_359;
                uint64_t l_361 = 18446744073709551615UL;
                l_360 = (l_358 = l_357);
                if ((l_278.x = l_361))
                { /* block id: 174 */
                    uint32_t l_362 = 4UL;
                    VECTOR(int32_t, 2) l_363 = (VECTOR(int32_t, 2))(0x5948A115L, 0x2FA5532EL);
                    VECTOR(int32_t, 4) l_364 = (VECTOR(int32_t, 4))(0x37B54836L, (VECTOR(int32_t, 2))(0x37B54836L, 0L), 0L);
                    VECTOR(int32_t, 8) l_365 = (VECTOR(int32_t, 8))(0x2D7D1146L, (VECTOR(int32_t, 4))(0x2D7D1146L, (VECTOR(int32_t, 2))(0x2D7D1146L, 1L), 1L), 1L, 0x2D7D1146L, 1L);
                    uint64_t l_366 = 0xDAB23A53F8282706L;
                    VECTOR(int32_t, 16) l_367 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L), (VECTOR(int32_t, 2))((-1L), (-8L)), (VECTOR(int32_t, 2))((-1L), (-8L)), (-1L), (-8L), (-1L), (-8L));
                    uint8_t l_368 = 0xCBL;
                    VECTOR(int32_t, 8) l_369 = (VECTOR(int32_t, 8))(0x758207DCL, (VECTOR(int32_t, 4))(0x758207DCL, (VECTOR(int32_t, 2))(0x758207DCL, 0x4D5129E8L), 0x4D5129E8L), 0x4D5129E8L, 0x758207DCL, 0x4D5129E8L);
                    VECTOR(int32_t, 2) l_370 = (VECTOR(int32_t, 2))((-1L), (-6L));
                    VECTOR(int16_t, 4) l_371 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4A2EL), 0x4A2EL);
                    VECTOR(int32_t, 16) l_372 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x750A8002L), 0x750A8002L), 0x750A8002L, (-9L), 0x750A8002L, (VECTOR(int32_t, 2))((-9L), 0x750A8002L), (VECTOR(int32_t, 2))((-9L), 0x750A8002L), (-9L), 0x750A8002L, (-9L), 0x750A8002L);
                    VECTOR(int32_t, 4) l_373 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 1L), 1L);
                    VECTOR(int32_t, 16) l_374 = (VECTOR(int32_t, 16))(0x54131D28L, (VECTOR(int32_t, 4))(0x54131D28L, (VECTOR(int32_t, 2))(0x54131D28L, 1L), 1L), 1L, 0x54131D28L, 1L, (VECTOR(int32_t, 2))(0x54131D28L, 1L), (VECTOR(int32_t, 2))(0x54131D28L, 1L), 0x54131D28L, 1L, 0x54131D28L, 1L);
                    VECTOR(int32_t, 8) l_375 = (VECTOR(int32_t, 8))(0x62E90034L, (VECTOR(int32_t, 4))(0x62E90034L, (VECTOR(int32_t, 2))(0x62E90034L, 0x4D5C0C3CL), 0x4D5C0C3CL), 0x4D5C0C3CL, 0x62E90034L, 0x4D5C0C3CL);
                    VECTOR(int32_t, 16) l_376 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x323D29D2L), 0x323D29D2L), 0x323D29D2L, 6L, 0x323D29D2L, (VECTOR(int32_t, 2))(6L, 0x323D29D2L), (VECTOR(int32_t, 2))(6L, 0x323D29D2L), 6L, 0x323D29D2L, 6L, 0x323D29D2L);
                    struct S0 l_377 = {0x73455DF9L,3UL,1UL,0L,0x127078D0L};/* VOLATILE GLOBAL l_377 */
                    VECTOR(int16_t, 8) l_378 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1641L), 0x1641L), 0x1641L, 1L, 0x1641L);
                    VECTOR(uint16_t, 8) l_379 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x3D74L), 0x3D74L), 0x3D74L, 65528UL, 0x3D74L);
                    VECTOR(int32_t, 16) l_380 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x28279ED6L), 0x28279ED6L), 0x28279ED6L, 7L, 0x28279ED6L, (VECTOR(int32_t, 2))(7L, 0x28279ED6L), (VECTOR(int32_t, 2))(7L, 0x28279ED6L), 7L, 0x28279ED6L, 7L, 0x28279ED6L);
                    uint64_t l_381 = 0xF4AEADAED3504552L;
                    int32_t l_382[6] = {0x6059C5CFL,0x6059C5CFL,0x6059C5CFL,0x6059C5CFL,0x6059C5CFL,0x6059C5CFL};
                    VECTOR(int32_t, 2) l_383 = (VECTOR(int32_t, 2))(2L, 0L);
                    VECTOR(int32_t, 8) l_384 = (VECTOR(int32_t, 8))(0x0B63348DL, (VECTOR(int32_t, 4))(0x0B63348DL, (VECTOR(int32_t, 2))(0x0B63348DL, (-4L)), (-4L)), (-4L), 0x0B63348DL, (-4L));
                    VECTOR(int32_t, 8) l_385 = (VECTOR(int32_t, 8))(0x0C863A66L, (VECTOR(int32_t, 4))(0x0C863A66L, (VECTOR(int32_t, 2))(0x0C863A66L, 0x28DC9678L), 0x28DC9678L), 0x28DC9678L, 0x0C863A66L, 0x28DC9678L);
                    uint64_t l_386 = 0xF92A17F18BAEBD4AL;
                    int8_t l_387 = 8L;
                    int32_t *l_388 = &l_382[4];
                    int i;
                    l_358 = (l_357 = ((l_337 = l_362) , (((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x64CA5F5CL, 0x7D53E613L)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(l_363.yyyy)).wwyzwzww, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_364.yyxwxzwyzwyxwxwx)).sae03, ((VECTOR(int32_t, 2))((-1L), 0x6B62D4E1L)).xyxy))).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_365.s16051771)).lo)), (int32_t)l_366))).wwyzyywxzzxzxzww, ((VECTOR(int32_t, 2))(5L, 0x472084B4L)).yxxxxxxyyxyxyyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(0x26B6F498L, 0x78A55613L, ((VECTOR(int32_t, 8))(l_367.s3ec0415a)), (l_347 ^= l_368), ((VECTOR(int32_t, 8))(l_369.s64537420)).s7, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_370.yyyx)).even)).even, (-2L), 0x4A447E0FL, (-9L))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0L, l_371.w, (-1L), 0x68F814F0L)).yyyxzzzxzxywxzzy))))).s56)), 0x1D420F1EL, (-10L))).yxzzywzzzyxzyxxx))).sea))))), 0x2E05EFEBL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_372.sf6cbbee0)).s44)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x297DB6ACL, 0x55DE039CL)).yxxxxyyx, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_373.zxxzyxyy)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_374.s655f)).hi)).xyyx))).wzwywzzx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_375.s1363003341137747)).s53)), 0x2CEAF383L, 6L)).zyzzxwzzxwzyxwww)))).odd))))).s55)), 9L))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_376.s5988f0c52643bbd1)).s3cea)).yxwzwwwx))).s72, ((VECTOR(int32_t, 8))(0x3A5C379AL, (l_375.s7 ^= (l_377 , 0x325C9C5EL)), ((VECTOR(int32_t, 2))(0L, 1L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_378.s2001054052671642)).s15a3)).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_379.s2456)).yywwwzyx)).s5156046331307761)).seb5d)).even))), 0L, 0L)))).s33))))).yyyy)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_380.s11)))).xyyyxxyxxxxxyxxy)).even)))).s05))), l_381, 0x39EA31B7L, (-5L), l_382[4], ((VECTOR(int32_t, 2))(1L, 0x6E1D0780L)), ((VECTOR(int32_t, 2))(l_383.yy)), (l_344 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 1L)).xxxxxyxxxyyxxxyy)))).s3), ((VECTOR(int32_t, 2))(l_384.s41)), 1L)).s47)).yxyx, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))((-1L), 1L)), ((VECTOR(int32_t, 16))(l_385.s7460057052336500)).s6c))).yyyx))), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))((-3L), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(0x177F4D5EL, l_386, l_387, ((VECTOR(int32_t, 4))(6L)), 0x10DAD3A8L)).s05, ((VECTOR(int32_t, 2))((-4L)))))), 1L)).wxzywwxwwzwzywwy, ((VECTOR(int32_t, 16))(0x03C4CDD8L)), ((VECTOR(int32_t, 16))(0x4272A325L))))).s09b9, ((VECTOR(int32_t, 4))(0L))))).z , l_388)));
                }
                else
                { /* block id: 181 */
                    VECTOR(int32_t, 16) l_389 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x27DD82D9L), 0x27DD82D9L), 0x27DD82D9L, 0L, 0x27DD82D9L, (VECTOR(int32_t, 2))(0L, 0x27DD82D9L), (VECTOR(int32_t, 2))(0L, 0x27DD82D9L), 0L, 0x27DD82D9L, 0L, 0x27DD82D9L);
                    uint8_t l_390 = 0x7FL;
                    uint64_t l_391[2][3][8] = {{{0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL,0xD94DD92C49BD68ABL,0xA288793AEF413060L,0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL},{0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL,0xD94DD92C49BD68ABL,0xA288793AEF413060L,0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL},{0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL,0xD94DD92C49BD68ABL,0xA288793AEF413060L,0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL}},{{0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL,0xD94DD92C49BD68ABL,0xA288793AEF413060L,0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL},{0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL,0xD94DD92C49BD68ABL,0xA288793AEF413060L,0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL},{0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL,0xD94DD92C49BD68ABL,0xA288793AEF413060L,0xA288793AEF413060L,0xD94DD92C49BD68ABL,3UL}}};
                    int64_t l_392 = 0L;
                    VECTOR(int32_t, 4) l_393 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x008043B3L), 0x008043B3L);
                    VECTOR(int32_t, 8) l_394 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
                    VECTOR(int32_t, 8) l_395 = (VECTOR(int32_t, 8))(0x2B63C599L, (VECTOR(int32_t, 4))(0x2B63C599L, (VECTOR(int32_t, 2))(0x2B63C599L, 0x2070B5AFL), 0x2070B5AFL), 0x2070B5AFL, 0x2B63C599L, 0x2070B5AFL);
                    int32_t l_396 = 0L;
                    uint32_t l_397 = 4294967288UL;
                    VECTOR(int32_t, 2) l_415 = (VECTOR(int32_t, 2))((-1L), 0x4BE34CD9L);
                    int i, j, k;
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(5L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(l_389.sa2191d5ca52ac355)).s00, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_390, ((VECTOR(int32_t, 2))(0x45BE8ED1L, 8L)), (-1L), (-6L), 0L, 0x463B1D0EL, l_391[1][0][2], (l_275.s1 = l_392), 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_393.xzxwyzyxyxzxwyww)))).sf2)), ((VECTOR(int32_t, 2))(0x64CD14C0L, 0x6BF7198AL)), 1L, (-4L))).lo)).s41)).xyxyyyxxxxyxyxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_394.s64)).xxyxyyxyxxyyxyyy))))).s65))), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_395.s4451536060206370)).s71))), (l_396 , (l_397 = 3L)), 8L, (-1L))))).s2)
                    { /* block id: 184 */
                        int8_t l_398 = (-3L);
                        int8_t l_399 = 4L;
                        uint8_t l_400 = 0x24L;
                        uint16_t l_403 = 0x84B9L;
                        VECTOR(int32_t, 2) l_404 = (VECTOR(int32_t, 2))((-3L), (-1L));
                        int i;
                        l_400--;
                        l_395.s2 &= (l_389.sf ^= (l_403 , ((VECTOR(int32_t, 2))(l_404.yy)).odd));
                    }
                    else
                    { /* block id: 188 */
                        int32_t l_405 = 0L;
                        uint8_t l_406 = 0xF0L;
                        int64_t l_409 = 0x376A23226E5F3C94L;
                        int8_t l_410 = (-8L);
                        uint8_t l_411 = 249UL;
                        uint32_t l_414[5] = {0x794D6A80L,0x794D6A80L,0x794D6A80L,0x794D6A80L,0x794D6A80L};
                        int i;
                        l_277.w = l_405;
                        l_406--;
                        l_411--;
                        l_348.s1 &= l_414[3];
                    }
                    if ((l_393.y = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_415.yyxy)))).y))
                    { /* block id: 195 */
                        struct S0 l_416 = {0UL,1UL,0x8ECD5A923D302C77L,0x527F1FF5L,0x1029A0A0L};/* VOLATILE GLOBAL l_416 */
                        struct S0 l_417 = {0xF57DE06CL,0UL,0x7CCEA16646C84012L,-2L,0x76E3F6F1L};/* VOLATILE GLOBAL l_417 */
                        int16_t l_418 = (-6L);
                        VECTOR(uint32_t, 4) l_419 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL);
                        VECTOR(uint32_t, 16) l_420 = (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 8UL), 8UL), 8UL, 4294967286UL, 8UL, (VECTOR(uint32_t, 2))(4294967286UL, 8UL), (VECTOR(uint32_t, 2))(4294967286UL, 8UL), 4294967286UL, 8UL, 4294967286UL, 8UL);
                        uint16_t l_421 = 0xEFAAL;
                        VECTOR(uint32_t, 4) l_422 = (VECTOR(uint32_t, 4))(0x3E50F217L, (VECTOR(uint32_t, 2))(0x3E50F217L, 0UL), 0UL);
                        VECTOR(uint32_t, 16) l_423 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0x44D17A50L), 0x44D17A50L), 0x44D17A50L, 4UL, 0x44D17A50L, (VECTOR(uint32_t, 2))(4UL, 0x44D17A50L), (VECTOR(uint32_t, 2))(4UL, 0x44D17A50L), 4UL, 0x44D17A50L, 4UL, 0x44D17A50L);
                        VECTOR(uint32_t, 4) l_424 = (VECTOR(uint32_t, 4))(0x814E5816L, (VECTOR(uint32_t, 2))(0x814E5816L, 0x9A4E1EBFL), 0x9A4E1EBFL);
                        int32_t l_425 = 0x11100AF2L;
                        int32_t l_426 = 0x454C5336L;
                        VECTOR(uint32_t, 2) l_427 = (VECTOR(uint32_t, 2))(0x88F425E8L, 0xD715A57CL);
                        VECTOR(uint32_t, 2) l_428 = (VECTOR(uint32_t, 2))(0UL, 0x222F11D0L);
                        VECTOR(uint32_t, 2) l_429 = (VECTOR(uint32_t, 2))(0x8E61AB86L, 0xE09C8F27L);
                        uint32_t l_430 = 4UL;
                        VECTOR(uint32_t, 8) l_431 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
                        int64_t l_432 = 0x06775FA2CA29D45FL;
                        int32_t l_433 = 9L;
                        struct S0 l_434 = {0x47D9583AL,0x335EED47L,0x448B5417590F7FC2L,0x1EF59D41L,0x51FC2A79L};/* VOLATILE GLOBAL l_434 */
                        struct S0 l_435 = {0x02942A0BL,0x3AB65B82L,0x231FA8B6C7252E61L,0x77D93590L,0x499ECDB4L};/* VOLATILE GLOBAL l_435 */
                        struct S0 l_436[5][10] = {{{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L}},{{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L}},{{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L}},{{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L}},{{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0x6ACF28F9L,0x974F596EL,0x5AA00D1105E231BEL,7L,1L},{0xF4A8F08FL,4294967295UL,18446744073709551607UL,-1L,0x46D39BA8L}}};
                        int i, j;
                        l_417 = l_416;
                        l_436[0][9] = ((((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0UL, (l_295 &= l_418), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_419.wx)), 0UL, ((VECTOR(uint32_t, 4))(4294967286UL, 0xA72EAE42L, 2UL, 0xDBA6F509L)), 0xE7A73070L)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0xC404B668L, 0xCD23C4DAL, 0xADD132E0L, 4294967291UL)).yzxzywzw)).s0062336534254623)).s1169))).wyywyzwx)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_420.sc23c)).even)), l_421, 1UL, 0x17AAF9FCL, 0xAC20FFCCL)).sbaa7)).zzwwxyywxzyzyyzw, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(l_422.xywy)).xyzxyzzy, ((VECTOR(uint32_t, 8))(l_423.s0d329c66)), ((VECTOR(uint32_t, 4))(GROUP_DIVERGE(1, 1), 0xB0245931L, 0xE1843368L, 0x2B01B81BL)).yzwyxxwz))).s54)), 0x09FBA9DDL, 0UL)).yyzxzyzyxzyzwzxy))).s9e48)).yzzwyzyyxxxxzwzw)).s23)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_424.xxwywwxw)))).s3447100646236124, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))((l_425 , l_426), 0xE5368905L, 0x78D5092CL, ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 2))(l_427.yy)).xyyx))).zxwwyxwx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_428.yxyy)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(l_429.xy)), ((VECTOR(uint32_t, 8))((l_353 = l_430), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_431.s64107565)).s44)).lo, 4294967295UL, 1UL, ((VECTOR(uint32_t, 2))(0x41DB8C25L)), 4294967293UL, 0UL)).s23))).xyxxxyyy, ((VECTOR(uint32_t, 8))(0x0CCA817DL)), ((VECTOR(uint32_t, 8))(0xE21DFAE8L))))).even)), 0xA45B94EBL, 0UL, 4294967295UL, l_432, FAKE_DIVERGE(p_603->local_1_offset, get_local_id(1), 10), l_433, 0x0193DD2EL, 0x25E448E2L)).s2, 0xD046558BL, 0x1E716BA3L, 0x5694EB36L)), ((VECTOR(uint32_t, 2))(4294967288UL)), 0xB4127450L, 0x95413936L))))), 4294967288UL, 0x788C3359L, 4294967293UL, 0x1BE864C5L, 0UL)).s3cbd)).xwwwzyywxxzzxwzw))), ((VECTOR(uint32_t, 16))(0UL)), ((VECTOR(uint32_t, 16))(4294967295UL))))).s6a))))).odd , l_434) , l_435);
                    }
                    else
                    { /* block id: 200 */
                        VECTOR(int32_t, 4) l_437 = (VECTOR(int32_t, 4))(0x0D997D27L, (VECTOR(int32_t, 2))(0x0D997D27L, 1L), 1L);
                        uint32_t l_438 = 4294967292UL;
                        int32_t *l_442[9][1];
                        int32_t **l_441[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t **l_443 = &l_442[2][0];
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_442[i][j] = (void*)0;
                        }
                        l_395.s0 ^= ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_437.xyyzxzxz)).s31)).yxxxyyyx, ((VECTOR(int32_t, 2))(1L, 0L)).yyxyxyyy))).s4;
                        l_438--;
                        l_443 = l_441[0];
                    }
                }
                for (l_361 = 0; (l_361 < 35); l_361++)
                { /* block id: 208 */
                    uint8_t l_446 = 0x10L;
                    uint8_t l_447 = 255UL;
                    uint32_t l_448[8][9][3] = {{{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L}},{{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L}},{{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L}},{{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L}},{{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L}},{{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L}},{{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L}},{{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L},{4294967294UL,1UL,0x89AB14D7L}}};
                    int32_t l_450 = 0x2A515B17L;
                    int32_t *l_449 = &l_450;
                    int i, j, k;
                    l_447 &= l_446;
                    l_346.z &= l_448[3][3][2];
                    l_357 = l_449;
                }
            }
            else
            { /* block id: 213 */
                VECTOR(int16_t, 2) l_451 = (VECTOR(int16_t, 2))(0x0C0AL, (-7L));
                int8_t l_452[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_452[i] = 0x48L;
                l_275.s4 &= (l_451.y , l_452[0]);
            }
        }
        l_453.z = ((VECTOR(int32_t, 16))(l_453.wxyxxzywyzwwwwyy)).s1;
        l_455 = l_454;
        l_456 = (-1L);
        unsigned int result = 0;
        result += l_263;
        result += l_453.w;
        result += l_453.z;
        result += l_453.y;
        result += l_453.x;
        result += l_454.f0;
        result += l_454.f1;
        result += l_454.f2;
        result += l_454.f3;
        result += l_454.f4;
        result += l_455.f0;
        result += l_455.f1;
        result += l_455.f2;
        result += l_455.f3;
        result += l_455.f4;
        result += l_456;
        atomic_add(&p_603->g_special_values[96 * get_linear_group_id() + 95], result);
    }
    else
    { /* block id: 220 */
        (1 + 1);
    }
    return l_457[2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_603->g_235 p_603->g_69 p_603->g_244 p_603->g_63 p_603->g_36 p_603->g_126.f0 p_603->g_94 p_603->g_60 p_603->g_126.f1 p_603->g_127.f1 p_603->g_233 p_603->g_90.f4 p_603->g_125 p_603->g_126.f4 p_603->g_25 p_603->l_comm_values p_603->g_comm_values p_603->g_58 p_603->g_83 p_603->g_87 p_603->g_90 p_603->g_126 p_603->g_223 p_603->g_257
 * writes: p_603->g_235 p_603->g_63 p_603->g_127.f1 p_603->g_25 p_603->g_36 p_603->g_69 p_603->g_87 p_603->g_94 p_603->g_125 p_603->g_127 p_603->g_223 p_603->g_83
 */
int32_t * func_26(int32_t * p_27, int32_t * p_28, struct S1 * p_603)
{ /* block id: 115 */
    int32_t *l_234[10][2] = {{&p_603->g_233,&p_603->g_233},{&p_603->g_233,&p_603->g_233},{&p_603->g_233,&p_603->g_233},{&p_603->g_233,&p_603->g_233},{&p_603->g_233,&p_603->g_233},{&p_603->g_233,&p_603->g_233},{&p_603->g_233,&p_603->g_233},{&p_603->g_233,&p_603->g_233},{&p_603->g_233,&p_603->g_233},{&p_603->g_233,&p_603->g_233}};
    VECTOR(int16_t, 8) l_246 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    VECTOR(int16_t, 2) l_247 = (VECTOR(int16_t, 2))(4L, (-7L));
    VECTOR(uint16_t, 4) l_248 = (VECTOR(uint16_t, 4))(0x4801L, (VECTOR(uint16_t, 2))(0x4801L, 0xB2BAL), 0xB2BAL);
    uint16_t l_251 = 65531UL;
    uint32_t *l_254 = &p_603->g_127[2][2].f1;
    int32_t **l_256 = (void*)0;
    int32_t **l_258 = &l_234[3][0];
    int i, j;
    p_603->g_235--;
    (*p_603->g_257) = func_29(p_603->g_69[0][1][1], (safe_mul_func_uint8_t_u_u(0x98L, ((safe_rshift_func_uint16_t_u_u((((p_603->g_25.y = (safe_mod_func_uint32_t_u_u(((p_603->g_244 != (void*)0) && ((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_246.s3501)), 9L, (-3L), ((VECTOR(int16_t, 8))(l_247.xyyxyxyy)), (-1L), 0L)).sa5a5, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(9UL, ((VECTOR(uint16_t, 2))(l_248.xz)), 9UL))))))))).z)) | (((*l_254) ^= (safe_mod_func_uint16_t_u_u(((((*p_27) ^= l_251) > (p_603->g_36 < ((((p_27 != (void*)0) , GROUP_DIVERGE(1, 1)) < (safe_div_func_uint16_t_u_u((p_603->g_36 == p_603->g_126.f0), p_603->g_94[7]))) > p_603->g_60[8][0][2]))) || p_603->g_126.f1), 0x2F73L))) , 0xAFL))), (*p_28)))) & 5UL) , p_603->g_90.f4), p_603->g_125.s1)) > (*p_28)))), (*p_28), p_603->g_126.f4, p_603);
    (*l_258) = l_254;
    return (*p_603->g_257);
}


/* ------------------------------------------ */
/* 
 * reads : p_603->g_25 p_603->l_comm_values p_603->g_comm_values p_603->g_58 p_603->g_69 p_603->g_60 p_603->g_63 p_603->g_83 p_603->g_87 p_603->g_90 p_603->g_94 p_603->g_119 p_603->g_93 p_603->g_125 p_603->g_126 p_603->g_223
 * writes: p_603->g_36 p_603->g_69 p_603->g_63 p_603->g_87 p_603->g_94 p_603->g_123 p_603->g_125 p_603->g_127 p_603->g_223
 */
int32_t * func_29(uint16_t  p_30, int16_t  p_31, int32_t  p_32, uint32_t  p_33, struct S1 * p_603)
{ /* block id: 8 */
    uint32_t *l_35 = &p_603->g_36;
    int32_t l_37 = 0x6D4C01E0L;
    uint8_t l_43 = 0x0DL;
    uint32_t *l_44[9][1];
    int32_t l_45 = 0x48B69768L;
    int32_t *l_129[6][8][5] = {{{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0}},{{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0}},{{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0}},{{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0}},{{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0}},{{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0},{&p_603->g_63,&p_603->g_63,&l_45,&p_603->g_63,(void*)0}}};
    struct S0 *l_130 = &p_603->g_126;
    int64_t l_226 = 0x259F250D221EA348L;
    int64_t l_227 = 0x244FC275AE569213L;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_44[i][j] = (void*)0;
    }
    if ((((0L ^ (((*l_35) = 0x9A67B9C5L) > (l_37 |= (p_603->g_25.x != 0xDAAFD55BE9843C6BL)))) != p_603->l_comm_values[(safe_mod_func_uint32_t_u_u(p_603->tid, 2))]) < ((p_32 = (safe_mod_func_uint8_t_u_u(func_40(p_603->l_comm_values[(safe_mod_func_uint32_t_u_u(p_603->tid, 2))], ((l_45 ^= l_43) <= (!p_31)), p_603), 1UL))) != p_603->g_60[8][0][2])))
    { /* block id: 48 */
        struct S0 **l_131 = &l_130;
        int32_t l_221 = 0x048DF2F1L;
        int32_t l_222 = (-1L);
        (*l_131) = l_130;
        if ((atomic_inc(&p_603->g_atomic_input[96 * get_linear_group_id() + 67]) == 3))
        { /* block id: 51 */
            int32_t l_132 = 8L;
            int8_t l_209 = 0L;
            int16_t l_210 = 0x0CC8L;
            VECTOR(uint64_t, 4) l_211 = (VECTOR(uint64_t, 4))(0xF5A4CC5472C08B89L, (VECTOR(uint64_t, 2))(0xF5A4CC5472C08B89L, 18446744073709551615UL), 18446744073709551615UL);
            VECTOR(uint64_t, 4) l_212 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL);
            VECTOR(uint64_t, 16) l_213 = (VECTOR(uint64_t, 16))(0x528BEABA46CA4792L, (VECTOR(uint64_t, 4))(0x528BEABA46CA4792L, (VECTOR(uint64_t, 2))(0x528BEABA46CA4792L, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0x528BEABA46CA4792L, 18446744073709551614UL, (VECTOR(uint64_t, 2))(0x528BEABA46CA4792L, 18446744073709551614UL), (VECTOR(uint64_t, 2))(0x528BEABA46CA4792L, 18446744073709551614UL), 0x528BEABA46CA4792L, 18446744073709551614UL, 0x528BEABA46CA4792L, 18446744073709551614UL);
            uint32_t l_214 = 0xB10A8723L;
            uint32_t l_215 = 0xAC5DE7C9L;
            uint32_t l_216 = 0x3A690F25L;
            int i;
            for (l_132 = 13; (l_132 > 26); ++l_132)
            { /* block id: 54 */
                int32_t l_135 = 0x5631EF28L;
                int32_t l_136 = (-8L);
                VECTOR(uint64_t, 8) l_137 = (VECTOR(uint64_t, 8))(0xB9BD4E5E22F4319FL, (VECTOR(uint64_t, 4))(0xB9BD4E5E22F4319FL, (VECTOR(uint64_t, 2))(0xB9BD4E5E22F4319FL, 1UL), 1UL), 1UL, 0xB9BD4E5E22F4319FL, 1UL);
                struct S0 l_138 = {0xC4095CDCL,0x5A50D88AL,0UL,2L,-8L};/* VOLATILE GLOBAL l_138 */
                struct S0 l_139 = {4294967295UL,0x820DD8AAL,0x30C0D326C4010C40L,-3L,0x55FB740BL};/* VOLATILE GLOBAL l_139 */
                int32_t l_140 = 0x586165CEL;
                int i;
                l_139 = (GROUP_DIVERGE(1, 1) , (l_135 , (l_136 , (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_137.s02)), 6UL, 18446744073709551615UL)).y , l_138))));
                if ((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x01C7BA67L, (-1L))), 0x1F2F86C5L, 0x7A4CEA83L)).z , l_140))
                { /* block id: 56 */
                    struct S0 l_141 = {0xD410CA4DL,9UL,18446744073709551615UL,0x02679FF3L,0L};/* VOLATILE GLOBAL l_141 */
                    int8_t l_142 = 0x01L;
                    int16_t l_170 = (-1L);
                    uint8_t l_171 = 0x86L;
                    l_139 = l_141;
                    if (l_142)
                    { /* block id: 58 */
                        int32_t l_143 = 1L;
                        int32_t l_144 = 3L;
                        int32_t l_145 = 0x3FBFA90FL;
                        VECTOR(int32_t, 8) l_146 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x505A1530L), 0x505A1530L), 0x505A1530L, 1L, 0x505A1530L);
                        int32_t l_147[1];
                        uint32_t l_148[5] = {0xB23408CDL,0xB23408CDL,0xB23408CDL,0xB23408CDL,0xB23408CDL};
                        int32_t l_151 = 0x623767BDL;
                        int16_t l_152 = 0x5A08L;
                        struct S0 l_153 = {0x9B935AE7L,1UL,4UL,-1L,-1L};/* VOLATILE GLOBAL l_153 */
                        VECTOR(int8_t, 2) l_154 = (VECTOR(int8_t, 2))((-1L), 0x63L);
                        VECTOR(int32_t, 8) l_155 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x47B46002L), 0x47B46002L), 0x47B46002L, (-1L), 0x47B46002L);
                        int64_t l_156 = 0L;
                        int16_t l_157 = 6L;
                        uint32_t l_158[10] = {4294967288UL,3UL,0x6CBD431BL,3UL,4294967288UL,4294967288UL,3UL,0x6CBD431BL,3UL,4294967288UL};
                        VECTOR(int8_t, 4) l_159 = (VECTOR(int8_t, 4))(0x4EL, (VECTOR(int8_t, 2))(0x4EL, 0x6CL), 0x6CL);
                        VECTOR(int8_t, 2) l_160 = (VECTOR(int8_t, 2))(0x02L, 1L);
                        int16_t l_161 = (-6L);
                        int i;
                        for (i = 0; i < 1; i++)
                            l_147[i] = 0x2CE757D4L;
                        l_161 &= ((--l_148[1]) , (((l_152 = l_151) , l_153) , (l_140 ^= (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x66L, 1L)).lo, ((VECTOR(int8_t, 2))(l_154.xy)), 0x29L)), ((VECTOR(int8_t, 2))(1L, 0x51L)).yxxy))))).even, ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(1L, (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_155.s57)))).odd , l_156), 0x7BL, 0x18L)).zwxxywzx)), (int8_t)(l_154.x = (l_158[6] |= (l_157 = (l_142 = 0L)))), (int8_t)(l_142 = ((VECTOR(int8_t, 8))(l_159.xwyxwywz)).s1)))).s00, ((VECTOR(int8_t, 2))(l_160.yx))))))).lo , 1L))));
                    }
                    else
                    { /* block id: 68 */
                        VECTOR(int32_t, 4) l_162 = (VECTOR(int32_t, 4))(0x547CBADAL, (VECTOR(int32_t, 2))(0x547CBADAL, (-3L)), (-3L));
                        int32_t l_163 = 6L;
                        int32_t l_164 = 0x1779EABFL;
                        int32_t l_165 = 0x18572215L;
                        int64_t l_166 = 0x09253C893FE441F8L;
                        uint32_t l_167 = 0UL;
                        int i;
                        l_163 |= ((VECTOR(int32_t, 4))(l_162.wxyz)).w;
                        l_140 &= 4L;
                        l_167--;
                    }
                    --l_171;
                }
                else
                { /* block id: 74 */
                    int32_t l_174 = 6L;
                    uint64_t l_175[7] = {0UL,0x8BF67FCAB5132427L,0UL,0UL,0x8BF67FCAB5132427L,0UL,0UL};
                    int32_t l_176 = 0L;
                    VECTOR(int64_t, 2) l_177 = (VECTOR(int64_t, 2))(9L, 0x57DBA2C76FC8C4F9L);
                    int32_t l_179 = 0x2292E40CL;
                    int32_t *l_178 = &l_179;
                    int32_t *l_180[9][5] = {{&l_179,&l_179,(void*)0,&l_179,(void*)0},{&l_179,&l_179,(void*)0,&l_179,(void*)0},{&l_179,&l_179,(void*)0,&l_179,(void*)0},{&l_179,&l_179,(void*)0,&l_179,(void*)0},{&l_179,&l_179,(void*)0,&l_179,(void*)0},{&l_179,&l_179,(void*)0,&l_179,(void*)0},{&l_179,&l_179,(void*)0,&l_179,(void*)0},{&l_179,&l_179,(void*)0,&l_179,(void*)0},{&l_179,&l_179,(void*)0,&l_179,(void*)0}};
                    uint32_t l_198 = 4294967295UL;
                    int32_t *l_201[9][2] = {{&l_179,&l_179},{&l_179,&l_179},{&l_179,&l_179},{&l_179,&l_179},{&l_179,&l_179},{&l_179,&l_179},{&l_179,&l_179},{&l_179,&l_179},{&l_179,&l_179}};
                    int32_t *l_202 = &l_179;
                    int32_t *l_203 = &l_179;
                    int i, j;
                    l_180[7][0] = (l_178 = (l_174 , ((l_177.x = (l_176 = l_175[0])) , (void*)0)));
                    for (l_177.y = 0; (l_177.y >= 7); l_177.y = safe_add_func_int64_t_s_s(l_177.y, 7))
                    { /* block id: 81 */
                        uint32_t l_183 = 0xB1ADA1DAL;
                        int64_t l_184 = 1L;
                        int32_t l_185 = (-1L);
                        VECTOR(uint32_t, 8) l_186 = (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0xC589E3AFL), 0xC589E3AFL), 0xC589E3AFL, 5UL, 0xC589E3AFL);
                        VECTOR(uint32_t, 16) l_187 = (VECTOR(uint32_t, 16))(0x72B920CDL, (VECTOR(uint32_t, 4))(0x72B920CDL, (VECTOR(uint32_t, 2))(0x72B920CDL, 4294967295UL), 4294967295UL), 4294967295UL, 0x72B920CDL, 4294967295UL, (VECTOR(uint32_t, 2))(0x72B920CDL, 4294967295UL), (VECTOR(uint32_t, 2))(0x72B920CDL, 4294967295UL), 0x72B920CDL, 4294967295UL, 0x72B920CDL, 4294967295UL);
                        int16_t l_188 = 1L;
                        int8_t l_189 = 0x6FL;
                        VECTOR(uint32_t, 8) l_190 = (VECTOR(uint32_t, 8))(0x96939902L, (VECTOR(uint32_t, 4))(0x96939902L, (VECTOR(uint32_t, 2))(0x96939902L, 0UL), 0UL), 0UL, 0x96939902L, 0UL);
                        VECTOR(uint64_t, 4) l_191 = (VECTOR(uint64_t, 4))(0xE6B9A1A24DA4D433L, (VECTOR(uint64_t, 2))(0xE6B9A1A24DA4D433L, 0x2247DE8D04B650EFL), 0x2247DE8D04B650EFL);
                        VECTOR(uint64_t, 16) l_192 = (VECTOR(uint64_t, 16))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x2AF3BA23B5E7A8B4L), 0x2AF3BA23B5E7A8B4L), 0x2AF3BA23B5E7A8B4L, 9UL, 0x2AF3BA23B5E7A8B4L, (VECTOR(uint64_t, 2))(9UL, 0x2AF3BA23B5E7A8B4L), (VECTOR(uint64_t, 2))(9UL, 0x2AF3BA23B5E7A8B4L), 9UL, 0x2AF3BA23B5E7A8B4L, 9UL, 0x2AF3BA23B5E7A8B4L);
                        int32_t l_193 = (-1L);
                        VECTOR(uint32_t, 2) l_194 = (VECTOR(uint32_t, 2))(0UL, 0xD25056A1L);
                        uint64_t l_195 = 0xF656E5FB2DB2D0B9L;
                        int32_t *l_196 = &l_185;
                        int32_t *l_197 = &l_185;
                        int i;
                        l_180[2][0] = ((((VECTOR(uint32_t, 4))((l_183 , ((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(0xB21CC5C8L, 4294967295UL, l_184, 4294967295UL, l_185, 0UL, 0xF70450DAL, 0x4D86FEFDL)).s70, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 8))(l_186.s24161652)), ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(l_187.s219c)).xyxywyxyyzzzyyxx, (uint32_t)(l_139.f0 &= (l_188 , l_189))))).hi))).s7746055356224123)).s99b6)).odd))), 0x7C35638FL, 0x4F99866CL)), 0x125E5609L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 16))(l_190.s4635555636626132)))))))).sbf)))), 3UL)).s1423223143770762, (uint32_t)((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))((l_175[4] = ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x05A84B2CCAACA316L, 18446744073709551615UL)), ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 16))(0x96635388A1ECCEF5L, ((VECTOR(uint64_t, 4))(l_191.ywxy)), ((VECTOR(uint64_t, 2))(18446744073709551608UL, 18446744073709551606UL)), ((VECTOR(uint64_t, 2))(0x167556C6A85F900EL, 0UL)).even, 1UL, ((VECTOR(uint64_t, 4))(l_192.s5e68)), ((VECTOR(uint64_t, 2))(0xEB111EF7B3705418L, 18446744073709551615UL)), 1UL)).sc1ee, (uint64_t)5UL))), 18446744073709551607UL, 1UL)).s7), 6UL, l_193, 0x523AFE7C8FE4D0B5L, 0xB7801C71FC3AE16EL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(0x05C364FBA54FB761L)), 0xBC04C05FA39C5999L, ((VECTOR(uint64_t, 4))(0UL)), ((VECTOR(uint64_t, 2))(0UL)), 0x75030BE566E3EBE7L)).odd)).s4 , l_194.y) , 0x57B272C4L)))), ((VECTOR(uint32_t, 16))(4294967292UL))))).sd), 0x0BE39DC0L, 0UL, 0xE73DDC58L)).x , l_195) , l_196);
                        l_178 = l_197;
                        (*l_196) = 0x57AD2139L;
                        (*l_178) ^= 1L;
                    }
                    l_203 = ((--l_198) , (l_202 = l_201[4][1]));
                }
            }
            for (l_132 = 0; (l_132 > 22); ++l_132)
            { /* block id: 96 */
                uint32_t l_206 = 0xF1FD500BL;
                l_206++;
            }
            l_216 |= ((((l_209 = 0x624FA419L) , (l_210 = l_210)) , ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_211.ywywzwwxxwwxzwxz)).s1a)))), 6UL, 0xAD07C3FB299D949EL, 7UL, 0x6596DC5A1780E172L, 0x8BBC13778C559721L, GROUP_DIVERGE(2, 1), ((VECTOR(uint64_t, 2))(0x7C976168999CC018L, 18446744073709551615UL)), 0UL, 2UL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(0x6853EE0A41E77631L, 0xA5EAA2735F94A47CL)), ((VECTOR(uint64_t, 8))(l_212.zzzwyywy)).s04, ((VECTOR(uint64_t, 2))(l_213.s8f))))), 1UL)).lo)).s4) , (l_214 , l_215));
            for (l_216 = 23; (l_216 == 22); --l_216)
            { /* block id: 104 */
                struct S0 l_219[7] = {{4294967295UL,4294967295UL,0UL,0x1C8FAC9DL,0x34754EABL},{4294967295UL,4294967295UL,0UL,0x1C8FAC9DL,0x34754EABL},{4294967295UL,4294967295UL,0UL,0x1C8FAC9DL,0x34754EABL},{4294967295UL,4294967295UL,0UL,0x1C8FAC9DL,0x34754EABL},{4294967295UL,4294967295UL,0UL,0x1C8FAC9DL,0x34754EABL},{4294967295UL,4294967295UL,0UL,0x1C8FAC9DL,0x34754EABL},{4294967295UL,4294967295UL,0UL,0x1C8FAC9DL,0x34754EABL}};
                struct S0 l_220[6] = {{3UL,0x5B56D453L,0x026A33A6AFC24F1CL,0x56BCB5EAL,0x01BEEFEFL},{3UL,0x5B56D453L,0x026A33A6AFC24F1CL,0x56BCB5EAL,0x01BEEFEFL},{3UL,0x5B56D453L,0x026A33A6AFC24F1CL,0x56BCB5EAL,0x01BEEFEFL},{3UL,0x5B56D453L,0x026A33A6AFC24F1CL,0x56BCB5EAL,0x01BEEFEFL},{3UL,0x5B56D453L,0x026A33A6AFC24F1CL,0x56BCB5EAL,0x01BEEFEFL},{3UL,0x5B56D453L,0x026A33A6AFC24F1CL,0x56BCB5EAL,0x01BEEFEFL}};
                int i;
                l_220[2] = l_219[3];
            }
            unsigned int result = 0;
            result += l_132;
            result += l_209;
            result += l_210;
            result += l_211.w;
            result += l_211.z;
            result += l_211.y;
            result += l_211.x;
            result += l_212.w;
            result += l_212.z;
            result += l_212.y;
            result += l_212.x;
            result += l_213.sf;
            result += l_213.se;
            result += l_213.sd;
            result += l_213.sc;
            result += l_213.sb;
            result += l_213.sa;
            result += l_213.s9;
            result += l_213.s8;
            result += l_213.s7;
            result += l_213.s6;
            result += l_213.s5;
            result += l_213.s4;
            result += l_213.s3;
            result += l_213.s2;
            result += l_213.s1;
            result += l_213.s0;
            result += l_214;
            result += l_215;
            result += l_216;
            atomic_add(&p_603->g_special_values[96 * get_linear_group_id() + 67], result);
        }
        else
        { /* block id: 107 */
            (1 + 1);
        }
        --p_603->g_223.s2;
    }
    else
    { /* block id: 111 */
        VECTOR(uint16_t, 16) l_229 = (VECTOR(uint16_t, 16))(0x8866L, (VECTOR(uint16_t, 4))(0x8866L, (VECTOR(uint16_t, 2))(0x8866L, 0x07E5L), 0x07E5L), 0x07E5L, 0x8866L, 0x07E5L, (VECTOR(uint16_t, 2))(0x8866L, 0x07E5L), (VECTOR(uint16_t, 2))(0x8866L, 0x07E5L), 0x8866L, 0x07E5L, 0x8866L, 0x07E5L);
        int i;
        --l_229.s7;
    }
    return &p_603->g_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_603->g_comm_values p_603->g_58 p_603->g_69 p_603->g_60 p_603->g_25 p_603->g_63 p_603->g_83 p_603->g_87 p_603->g_90 p_603->g_94 p_603->g_119 p_603->g_93 p_603->g_125 p_603->g_126
 * writes: p_603->g_69 p_603->g_63 p_603->g_87 p_603->g_94 p_603->g_123 p_603->g_125 p_603->g_127
 */
uint8_t  func_40(int32_t  p_41, int16_t  p_42, struct S1 * p_603)
{ /* block id: 12 */
    uint8_t l_128 = 0xB4L;
    p_603->g_127[2][2] = func_46(p_42, p_603);
    return l_128;
}


/* ------------------------------------------ */
/* 
 * reads : p_603->g_comm_values p_603->g_58 p_603->g_69 p_603->g_60 p_603->g_25 p_603->g_63 p_603->g_83 p_603->g_87 p_603->g_90 p_603->g_94 p_603->g_119 p_603->g_93 p_603->g_125 p_603->g_126
 * writes: p_603->g_69 p_603->g_63 p_603->g_87 p_603->g_94 p_603->g_123 p_603->g_125
 */
struct S0  func_46(int64_t  p_47, struct S1 * p_603)
{ /* block id: 13 */
    VECTOR(int32_t, 2) l_52 = (VECTOR(int32_t, 2))(9L, 0L);
    int32_t *l_59 = (void*)0;
    int32_t *l_82 = &p_603->g_63;
    VECTOR(uint8_t, 4) l_110 = (VECTOR(uint8_t, 4))(0x4FL, (VECTOR(uint8_t, 2))(0x4FL, 0xF2L), 0xF2L);
    VECTOR(uint8_t, 2) l_114 = (VECTOR(uint8_t, 2))(0x4FL, 0x4FL);
    int i;
    if ((func_48((GROUP_DIVERGE(1, 1) , ((((((VECTOR(int32_t, 4))(l_52.xyyx)).z && p_603->g_comm_values[p_603->tid]) ^ (safe_lshift_func_int8_t_s_s(6L, func_55(((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_603->g_58.safd3)).zzyxyzzwxywwxxxw)).even)))).s6 == (~l_52.x)) , l_59), l_59, p_603)))) > ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(((p_47 && ((*l_82) = (p_603->g_60[8][0][2] | (safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(p_603->g_comm_values[p_603->tid], p_603->g_58.s4)) >= p_603->g_60[8][0][2]), p_603->g_25.y))))) || p_603->g_63), 0L)) ^ 1L), 3)) && 0x1793202A9B449B5EL), 0x3A27L)) != 0x65L)) , (*l_82))), l_82, p_603->g_83, p_603) , p_603->g_87))
    { /* block id: 21 */
        return p_603->g_90;
    }
    else
    { /* block id: 23 */
        int32_t *l_91 = (void*)0;
        int32_t *l_92[8] = {(void*)0,&p_603->g_63,(void*)0,(void*)0,&p_603->g_63,(void*)0,(void*)0,&p_603->g_63};
        int32_t **l_97 = &l_92[3];
        int i;
        p_603->g_94[4]++;
        (*l_97) = &p_603->g_63;
    }
    for (p_603->g_87 = 0; (p_603->g_87 != 19); ++p_603->g_87)
    { /* block id: 29 */
        uint64_t l_104 = 18446744073709551615UL;
        VECTOR(uint8_t, 4) l_109 = (VECTOR(uint8_t, 4))(0x7CL, (VECTOR(uint8_t, 2))(0x7CL, 1UL), 1UL);
        VECTOR(uint64_t, 2) l_117 = (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x36C55944B89AB21BL);
        VECTOR(uint64_t, 8) l_118 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x28027805F1B04E51L), 0x28027805F1B04E51L), 0x28027805F1B04E51L, 18446744073709551615UL, 0x28027805F1B04E51L);
        int8_t *l_122 = &p_603->g_123;
        int32_t *l_124[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (p_47 = (-27); (p_47 == (-16)); p_47 = safe_add_func_int32_t_s_s(p_47, 8))
        { /* block id: 32 */
            for (p_603->g_63 = 0; (p_603->g_63 >= (-28)); p_603->g_63--)
            { /* block id: 35 */
                if (p_47)
                    break;
            }
            if (l_104)
                continue;
        }
        p_603->g_125.s5 &= ((safe_sub_func_int8_t_s_s((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0x50D549ECA2F01B28L, ((VECTOR(uint64_t, 4))((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(l_109.xw)).yxxyxxxyyxxyyxxy, ((VECTOR(uint8_t, 2))(0x1BL, 246UL)).yyyxxyxxxyxyxxxy))).s4fd1)).odd, ((VECTOR(uint8_t, 8))(l_110.wwxzzyxy)).s76))).yxyyyxyxxxyxyyxy)).s4 == ((safe_unary_minus_func_int8_t_s((((*l_82) > ((((VECTOR(uint8_t, 16))(l_114.yyxyxxyxxxxyxyyy)).s9 , &p_603->g_94[0]) != l_82)) | (247UL < (+((*l_122) = (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(1UL, (p_47 , ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(l_117.xyyxxyyyxxyxyyyy)).s8a, ((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(uint64_t, 2))(0x38DBA4FD995B201DL, 18446744073709551615UL)).xxyyyyyy, ((VECTOR(uint64_t, 16))(l_118.s0213144731353224)).even))).s42))).yyxx))).zwxwzwzy)).s50, ((VECTOR(uint64_t, 4))(p_603->g_119.xxyy)).hi))).even), 9UL, 18446744073709551606UL)).z, (safe_mod_func_int8_t_s_s(p_47, p_603->g_93)))))))))) >= (p_603->g_60[0][1][2] != 65527UL))), ((VECTOR(uint64_t, 2))(0xC9A3B3A300421108L)), 0xDBFEEEC83478F368L)), 0x316501709B175917L, 0UL, 0xF3ABBA9BF42089E8L)).s12)), p_603->g_90.f4, l_109.x, p_603->g_58.s8, ((VECTOR(uint64_t, 2))(0x9DA813D15A9C58C7L)), 18446744073709551615UL)).s6 > p_603->g_90.f3), FAKE_DIVERGE(p_603->local_2_offset, get_local_id(2), 10))) == p_47);
    }
    l_82 = l_59;
    return p_603->g_126;
}


/* ------------------------------------------ */
/* 
 * reads : p_603->g_87 p_603->g_63
 * writes: p_603->g_87
 */
int32_t  func_48(int64_t  p_49, int32_t * p_50, int32_t * p_51, struct S1 * p_603)
{ /* block id: 18 */
    int32_t *l_84 = &p_603->g_63;
    int32_t *l_85 = &p_603->g_63;
    int32_t *l_86[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    p_603->g_87--;
    return (*l_85);
}


/* ------------------------------------------ */
/* 
 * reads : p_603->g_69
 * writes: p_603->g_69
 */
int8_t  func_55(int32_t * p_56, int32_t * p_57, struct S1 * p_603)
{ /* block id: 14 */
    int32_t *l_61 = (void*)0;
    int32_t *l_62 = &p_603->g_63;
    int32_t *l_64 = &p_603->g_63;
    int32_t l_65 = 0x08BB409CL;
    int32_t *l_66 = &p_603->g_63;
    int32_t *l_67 = &p_603->g_63;
    int32_t *l_68[10][9] = {{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63},{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63},{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63},{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63},{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63},{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63},{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63},{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63},{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63},{&l_65,&p_603->g_63,&l_65,&p_603->g_63,&l_65,&l_65,&p_603->g_63,&l_65,&p_603->g_63}};
    int i, j;
    p_603->g_69[0][1][1]--;
    return p_603->g_69[0][1][1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S1 c_604;
    struct S1* p_603 = &c_604;
    struct S1 c_605 = {
        (VECTOR(uint64_t, 2))(0x208AF066B7A7BC6CL, 0UL), // p_603->g_25
        4294967287UL, // p_603->g_36
        (VECTOR(uint64_t, 16))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0UL), 0UL), 0UL, 2UL, 0UL, (VECTOR(uint64_t, 2))(2UL, 0UL), (VECTOR(uint64_t, 2))(2UL, 0UL), 2UL, 0UL, 2UL, 0UL), // p_603->g_58
        {{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}},{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}},{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}},{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}},{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}},{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}},{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}},{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}},{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}},{{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L},{2L,0x2B1DDA348D5C8807L,0L,2L}}}, // p_603->g_60
        0L, // p_603->g_63
        {{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}},{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}},{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}},{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}},{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}},{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}},{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}},{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}},{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}},{{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL},{0x072D4B5270F736FAL,18446744073709551612UL,0x65E783BFB6AB9C1AL}}}, // p_603->g_69
        (void*)0, // p_603->g_83
        6UL, // p_603->g_87
        {0UL,4294967286UL,0xFEB39733121430DBL,1L,-9L}, // p_603->g_90
        0x6D4F26B9B1ED4B6EL, // p_603->g_93
        {0x5E0B3DFBL,0x5E0B3DFBL,0x5E0B3DFBL,0x5E0B3DFBL,0x5E0B3DFBL,0x5E0B3DFBL,0x5E0B3DFBL,0x5E0B3DFBL}, // p_603->g_94
        (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), // p_603->g_119
        (-4L), // p_603->g_123
        (VECTOR(uint32_t, 8))(0x867D2374L, (VECTOR(uint32_t, 4))(0x867D2374L, (VECTOR(uint32_t, 2))(0x867D2374L, 4294967286UL), 4294967286UL), 4294967286UL, 0x867D2374L, 4294967286UL), // p_603->g_125
        {5UL,0xE763CFF3L,1UL,0x18DBEBFAL,0x12DF4544L}, // p_603->g_126
        {{{0xA02F1619L,0UL,0x9DCD68DE2A5173ACL,0x1B24F8DDL,0L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0xB8D696A4L,0xF0D94B26L,6UL,-9L,0x2403EEF2L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L}},{{0xA02F1619L,0UL,0x9DCD68DE2A5173ACL,0x1B24F8DDL,0L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0xB8D696A4L,0xF0D94B26L,6UL,-9L,0x2403EEF2L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L}},{{0xA02F1619L,0UL,0x9DCD68DE2A5173ACL,0x1B24F8DDL,0L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0xB8D696A4L,0xF0D94B26L,6UL,-9L,0x2403EEF2L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L}},{{0xA02F1619L,0UL,0x9DCD68DE2A5173ACL,0x1B24F8DDL,0L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0xB8D696A4L,0xF0D94B26L,6UL,-9L,0x2403EEF2L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L}},{{0xA02F1619L,0UL,0x9DCD68DE2A5173ACL,0x1B24F8DDL,0L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0xB8D696A4L,0xF0D94B26L,6UL,-9L,0x2403EEF2L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L}},{{0xA02F1619L,0UL,0x9DCD68DE2A5173ACL,0x1B24F8DDL,0L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0xB8D696A4L,0xF0D94B26L,6UL,-9L,0x2403EEF2L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L}},{{0xA02F1619L,0UL,0x9DCD68DE2A5173ACL,0x1B24F8DDL,0L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0xB8D696A4L,0xF0D94B26L,6UL,-9L,0x2403EEF2L},{1UL,0xB1B5973AL,0UL,0L,0x5B7ECD13L},{0UL,4294967295UL,0UL,0x73525FB0L,0x030B3060L}}}, // p_603->g_127
        (VECTOR(uint32_t, 16))(0x9537FE7FL, (VECTOR(uint32_t, 4))(0x9537FE7FL, (VECTOR(uint32_t, 2))(0x9537FE7FL, 0x5070CE38L), 0x5070CE38L), 0x5070CE38L, 0x9537FE7FL, 0x5070CE38L, (VECTOR(uint32_t, 2))(0x9537FE7FL, 0x5070CE38L), (VECTOR(uint32_t, 2))(0x9537FE7FL, 0x5070CE38L), 0x9537FE7FL, 0x5070CE38L, 0x9537FE7FL, 0x5070CE38L), // p_603->g_223
        0x1963L, // p_603->g_228
        0x36B452FFL, // p_603->g_233
        0xD95AL, // p_603->g_235
        (void*)0, // p_603->g_244
        {&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83,&p_603->g_83}, // p_603->g_255
        &p_603->g_83, // p_603->g_257
        (void*)0, // p_603->g_459
        &p_603->g_83, // p_603->g_460
        (VECTOR(uint8_t, 2))(0x99L, 0UL), // p_603->g_469
        &p_603->g_233, // p_603->g_472
        0x469A8F23L, // p_603->g_478
        (VECTOR(uint8_t, 16))(0x65L, (VECTOR(uint8_t, 4))(0x65L, (VECTOR(uint8_t, 2))(0x65L, 1UL), 1UL), 1UL, 0x65L, 1UL, (VECTOR(uint8_t, 2))(0x65L, 1UL), (VECTOR(uint8_t, 2))(0x65L, 1UL), 0x65L, 1UL, 0x65L, 1UL), // p_603->g_521
        (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0L), 0L), // p_603->g_522
        (VECTOR(int32_t, 8))(0x4D21BF88L, (VECTOR(int32_t, 4))(0x4D21BF88L, (VECTOR(int32_t, 2))(0x4D21BF88L, 0x658850FCL), 0x658850FCL), 0x658850FCL, 0x4D21BF88L, 0x658850FCL), // p_603->g_550
        (VECTOR(int32_t, 16))(0x282ABCE3L, (VECTOR(int32_t, 4))(0x282ABCE3L, (VECTOR(int32_t, 2))(0x282ABCE3L, 0x614D25DAL), 0x614D25DAL), 0x614D25DAL, 0x282ABCE3L, 0x614D25DAL, (VECTOR(int32_t, 2))(0x282ABCE3L, 0x614D25DAL), (VECTOR(int32_t, 2))(0x282ABCE3L, 0x614D25DAL), 0x282ABCE3L, 0x614D25DAL, 0x282ABCE3L, 0x614D25DAL), // p_603->g_552
        (VECTOR(int64_t, 2))(0x469722272B746E1AL, 0x2F04F5F5C99129A6L), // p_603->g_577
        (VECTOR(int8_t, 4))(0x2FL, (VECTOR(int8_t, 2))(0x2FL, (-5L)), (-5L)), // p_603->g_582
        (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 4L), 4L), // p_603->g_583
        0, // p_603->v_collective
        sequence_input[get_global_id(0)], // p_603->global_0_offset
        sequence_input[get_global_id(1)], // p_603->global_1_offset
        sequence_input[get_global_id(2)], // p_603->global_2_offset
        sequence_input[get_local_id(0)], // p_603->local_0_offset
        sequence_input[get_local_id(1)], // p_603->local_1_offset
        sequence_input[get_local_id(2)], // p_603->local_2_offset
        sequence_input[get_group_id(0)], // p_603->group_0_offset
        sequence_input[get_group_id(1)], // p_603->group_1_offset
        sequence_input[get_group_id(2)], // p_603->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_603->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_604 = c_605;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_603);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_603->g_25.x, "p_603->g_25.x", print_hash_value);
    transparent_crc(p_603->g_25.y, "p_603->g_25.y", print_hash_value);
    transparent_crc(p_603->g_36, "p_603->g_36", print_hash_value);
    transparent_crc(p_603->g_58.s0, "p_603->g_58.s0", print_hash_value);
    transparent_crc(p_603->g_58.s1, "p_603->g_58.s1", print_hash_value);
    transparent_crc(p_603->g_58.s2, "p_603->g_58.s2", print_hash_value);
    transparent_crc(p_603->g_58.s3, "p_603->g_58.s3", print_hash_value);
    transparent_crc(p_603->g_58.s4, "p_603->g_58.s4", print_hash_value);
    transparent_crc(p_603->g_58.s5, "p_603->g_58.s5", print_hash_value);
    transparent_crc(p_603->g_58.s6, "p_603->g_58.s6", print_hash_value);
    transparent_crc(p_603->g_58.s7, "p_603->g_58.s7", print_hash_value);
    transparent_crc(p_603->g_58.s8, "p_603->g_58.s8", print_hash_value);
    transparent_crc(p_603->g_58.s9, "p_603->g_58.s9", print_hash_value);
    transparent_crc(p_603->g_58.sa, "p_603->g_58.sa", print_hash_value);
    transparent_crc(p_603->g_58.sb, "p_603->g_58.sb", print_hash_value);
    transparent_crc(p_603->g_58.sc, "p_603->g_58.sc", print_hash_value);
    transparent_crc(p_603->g_58.sd, "p_603->g_58.sd", print_hash_value);
    transparent_crc(p_603->g_58.se, "p_603->g_58.se", print_hash_value);
    transparent_crc(p_603->g_58.sf, "p_603->g_58.sf", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_603->g_60[i][j][k], "p_603->g_60[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_603->g_63, "p_603->g_63", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_603->g_69[i][j][k], "p_603->g_69[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_603->g_87, "p_603->g_87", print_hash_value);
    transparent_crc(p_603->g_90.f0, "p_603->g_90.f0", print_hash_value);
    transparent_crc(p_603->g_90.f1, "p_603->g_90.f1", print_hash_value);
    transparent_crc(p_603->g_90.f2, "p_603->g_90.f2", print_hash_value);
    transparent_crc(p_603->g_90.f3, "p_603->g_90.f3", print_hash_value);
    transparent_crc(p_603->g_90.f4, "p_603->g_90.f4", print_hash_value);
    transparent_crc(p_603->g_93, "p_603->g_93", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_603->g_94[i], "p_603->g_94[i]", print_hash_value);

    }
    transparent_crc(p_603->g_119.x, "p_603->g_119.x", print_hash_value);
    transparent_crc(p_603->g_119.y, "p_603->g_119.y", print_hash_value);
    transparent_crc(p_603->g_123, "p_603->g_123", print_hash_value);
    transparent_crc(p_603->g_125.s0, "p_603->g_125.s0", print_hash_value);
    transparent_crc(p_603->g_125.s1, "p_603->g_125.s1", print_hash_value);
    transparent_crc(p_603->g_125.s2, "p_603->g_125.s2", print_hash_value);
    transparent_crc(p_603->g_125.s3, "p_603->g_125.s3", print_hash_value);
    transparent_crc(p_603->g_125.s4, "p_603->g_125.s4", print_hash_value);
    transparent_crc(p_603->g_125.s5, "p_603->g_125.s5", print_hash_value);
    transparent_crc(p_603->g_125.s6, "p_603->g_125.s6", print_hash_value);
    transparent_crc(p_603->g_125.s7, "p_603->g_125.s7", print_hash_value);
    transparent_crc(p_603->g_126.f0, "p_603->g_126.f0", print_hash_value);
    transparent_crc(p_603->g_126.f1, "p_603->g_126.f1", print_hash_value);
    transparent_crc(p_603->g_126.f2, "p_603->g_126.f2", print_hash_value);
    transparent_crc(p_603->g_126.f3, "p_603->g_126.f3", print_hash_value);
    transparent_crc(p_603->g_126.f4, "p_603->g_126.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_603->g_127[i][j].f0, "p_603->g_127[i][j].f0", print_hash_value);
            transparent_crc(p_603->g_127[i][j].f1, "p_603->g_127[i][j].f1", print_hash_value);
            transparent_crc(p_603->g_127[i][j].f2, "p_603->g_127[i][j].f2", print_hash_value);
            transparent_crc(p_603->g_127[i][j].f3, "p_603->g_127[i][j].f3", print_hash_value);
            transparent_crc(p_603->g_127[i][j].f4, "p_603->g_127[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_603->g_223.s0, "p_603->g_223.s0", print_hash_value);
    transparent_crc(p_603->g_223.s1, "p_603->g_223.s1", print_hash_value);
    transparent_crc(p_603->g_223.s2, "p_603->g_223.s2", print_hash_value);
    transparent_crc(p_603->g_223.s3, "p_603->g_223.s3", print_hash_value);
    transparent_crc(p_603->g_223.s4, "p_603->g_223.s4", print_hash_value);
    transparent_crc(p_603->g_223.s5, "p_603->g_223.s5", print_hash_value);
    transparent_crc(p_603->g_223.s6, "p_603->g_223.s6", print_hash_value);
    transparent_crc(p_603->g_223.s7, "p_603->g_223.s7", print_hash_value);
    transparent_crc(p_603->g_223.s8, "p_603->g_223.s8", print_hash_value);
    transparent_crc(p_603->g_223.s9, "p_603->g_223.s9", print_hash_value);
    transparent_crc(p_603->g_223.sa, "p_603->g_223.sa", print_hash_value);
    transparent_crc(p_603->g_223.sb, "p_603->g_223.sb", print_hash_value);
    transparent_crc(p_603->g_223.sc, "p_603->g_223.sc", print_hash_value);
    transparent_crc(p_603->g_223.sd, "p_603->g_223.sd", print_hash_value);
    transparent_crc(p_603->g_223.se, "p_603->g_223.se", print_hash_value);
    transparent_crc(p_603->g_223.sf, "p_603->g_223.sf", print_hash_value);
    transparent_crc(p_603->g_228, "p_603->g_228", print_hash_value);
    transparent_crc(p_603->g_233, "p_603->g_233", print_hash_value);
    transparent_crc(p_603->g_235, "p_603->g_235", print_hash_value);
    transparent_crc(p_603->g_469.x, "p_603->g_469.x", print_hash_value);
    transparent_crc(p_603->g_469.y, "p_603->g_469.y", print_hash_value);
    transparent_crc(p_603->g_478, "p_603->g_478", print_hash_value);
    transparent_crc(p_603->g_521.s0, "p_603->g_521.s0", print_hash_value);
    transparent_crc(p_603->g_521.s1, "p_603->g_521.s1", print_hash_value);
    transparent_crc(p_603->g_521.s2, "p_603->g_521.s2", print_hash_value);
    transparent_crc(p_603->g_521.s3, "p_603->g_521.s3", print_hash_value);
    transparent_crc(p_603->g_521.s4, "p_603->g_521.s4", print_hash_value);
    transparent_crc(p_603->g_521.s5, "p_603->g_521.s5", print_hash_value);
    transparent_crc(p_603->g_521.s6, "p_603->g_521.s6", print_hash_value);
    transparent_crc(p_603->g_521.s7, "p_603->g_521.s7", print_hash_value);
    transparent_crc(p_603->g_521.s8, "p_603->g_521.s8", print_hash_value);
    transparent_crc(p_603->g_521.s9, "p_603->g_521.s9", print_hash_value);
    transparent_crc(p_603->g_521.sa, "p_603->g_521.sa", print_hash_value);
    transparent_crc(p_603->g_521.sb, "p_603->g_521.sb", print_hash_value);
    transparent_crc(p_603->g_521.sc, "p_603->g_521.sc", print_hash_value);
    transparent_crc(p_603->g_521.sd, "p_603->g_521.sd", print_hash_value);
    transparent_crc(p_603->g_521.se, "p_603->g_521.se", print_hash_value);
    transparent_crc(p_603->g_521.sf, "p_603->g_521.sf", print_hash_value);
    transparent_crc(p_603->g_522.x, "p_603->g_522.x", print_hash_value);
    transparent_crc(p_603->g_522.y, "p_603->g_522.y", print_hash_value);
    transparent_crc(p_603->g_522.z, "p_603->g_522.z", print_hash_value);
    transparent_crc(p_603->g_522.w, "p_603->g_522.w", print_hash_value);
    transparent_crc(p_603->g_550.s0, "p_603->g_550.s0", print_hash_value);
    transparent_crc(p_603->g_550.s1, "p_603->g_550.s1", print_hash_value);
    transparent_crc(p_603->g_550.s2, "p_603->g_550.s2", print_hash_value);
    transparent_crc(p_603->g_550.s3, "p_603->g_550.s3", print_hash_value);
    transparent_crc(p_603->g_550.s4, "p_603->g_550.s4", print_hash_value);
    transparent_crc(p_603->g_550.s5, "p_603->g_550.s5", print_hash_value);
    transparent_crc(p_603->g_550.s6, "p_603->g_550.s6", print_hash_value);
    transparent_crc(p_603->g_550.s7, "p_603->g_550.s7", print_hash_value);
    transparent_crc(p_603->g_552.s0, "p_603->g_552.s0", print_hash_value);
    transparent_crc(p_603->g_552.s1, "p_603->g_552.s1", print_hash_value);
    transparent_crc(p_603->g_552.s2, "p_603->g_552.s2", print_hash_value);
    transparent_crc(p_603->g_552.s3, "p_603->g_552.s3", print_hash_value);
    transparent_crc(p_603->g_552.s4, "p_603->g_552.s4", print_hash_value);
    transparent_crc(p_603->g_552.s5, "p_603->g_552.s5", print_hash_value);
    transparent_crc(p_603->g_552.s6, "p_603->g_552.s6", print_hash_value);
    transparent_crc(p_603->g_552.s7, "p_603->g_552.s7", print_hash_value);
    transparent_crc(p_603->g_552.s8, "p_603->g_552.s8", print_hash_value);
    transparent_crc(p_603->g_552.s9, "p_603->g_552.s9", print_hash_value);
    transparent_crc(p_603->g_552.sa, "p_603->g_552.sa", print_hash_value);
    transparent_crc(p_603->g_552.sb, "p_603->g_552.sb", print_hash_value);
    transparent_crc(p_603->g_552.sc, "p_603->g_552.sc", print_hash_value);
    transparent_crc(p_603->g_552.sd, "p_603->g_552.sd", print_hash_value);
    transparent_crc(p_603->g_552.se, "p_603->g_552.se", print_hash_value);
    transparent_crc(p_603->g_552.sf, "p_603->g_552.sf", print_hash_value);
    transparent_crc(p_603->g_577.x, "p_603->g_577.x", print_hash_value);
    transparent_crc(p_603->g_577.y, "p_603->g_577.y", print_hash_value);
    transparent_crc(p_603->g_582.x, "p_603->g_582.x", print_hash_value);
    transparent_crc(p_603->g_582.y, "p_603->g_582.y", print_hash_value);
    transparent_crc(p_603->g_582.z, "p_603->g_582.z", print_hash_value);
    transparent_crc(p_603->g_582.w, "p_603->g_582.w", print_hash_value);
    transparent_crc(p_603->g_583.x, "p_603->g_583.x", print_hash_value);
    transparent_crc(p_603->g_583.y, "p_603->g_583.y", print_hash_value);
    transparent_crc(p_603->g_583.z, "p_603->g_583.z", print_hash_value);
    transparent_crc(p_603->g_583.w, "p_603->g_583.w", print_hash_value);
    transparent_crc(p_603->v_collective, "p_603->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 96; i++)
            transparent_crc(p_603->g_special_values[i + 96 * get_linear_group_id()], "p_603->g_special_values[i + 96 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_603->l_comm_values[get_linear_local_id()], "p_603->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_603->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_603->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
