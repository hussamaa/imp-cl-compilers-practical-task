// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 42,67,2 -l 6,1,1
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

__constant uint32_t permutations[10][6] = {
{2,4,1,0,3,5}, // permutation 0
{1,3,2,4,0,5}, // permutation 1
{4,3,5,0,2,1}, // permutation 2
{3,0,5,4,1,2}, // permutation 3
{1,3,4,5,2,0}, // permutation 4
{5,3,2,0,1,4}, // permutation 5
{3,0,5,2,1,4}, // permutation 6
{5,2,0,3,1,4}, // permutation 7
{4,0,5,1,3,2}, // permutation 8
{2,4,5,0,3,1} // permutation 9
};

// Seed: 2695803

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint16_t  f0;
   volatile uint32_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   int32_t  f4;
   int32_t  f5;
   volatile int32_t  f6;
};

struct S1 {
   volatile int64_t  f0;
   uint32_t  f1;
};

struct S2 {
    VECTOR(uint8_t, 4) g_6;
    VECTOR(int32_t, 2) g_37;
    int32_t *g_36;
    int32_t g_47;
    int32_t g_62;
    volatile struct S1 g_82;
    VECTOR(uint64_t, 4) g_91;
    VECTOR(int8_t, 2) g_97;
    uint8_t g_107[4][9];
    VECTOR(int64_t, 4) g_112;
    int32_t g_114;
    uint64_t g_121;
    uint16_t g_132[9][10][2];
    struct S1 g_135;
    uint32_t g_143;
    volatile uint32_t g_149;
    volatile uint32_t *g_148;
    volatile struct S1 ** volatile g_168;
    volatile struct S1 *g_169[6][9];
    int32_t g_171;
    volatile struct S1 g_174;
    volatile VECTOR(int8_t, 8) g_196;
    uint64_t g_208[5][6][1];
    struct S0 g_217;
    struct S0 g_218;
    volatile VECTOR(uint16_t, 8) g_286;
    volatile VECTOR(int16_t, 4) g_287;
    volatile VECTOR(uint32_t, 2) g_295;
    int32_t **g_330;
    int32_t *** volatile g_329;
    volatile struct S1 g_331;
    volatile struct S1 g_332;
    VECTOR(int32_t, 8) g_336;
    uint32_t *g_342;
    uint32_t **g_341;
    uint32_t *** volatile g_340[4];
    volatile VECTOR(int8_t, 16) g_358;
    volatile struct S1 g_360;
    VECTOR(uint64_t, 8) g_467;
    VECTOR(int8_t, 4) g_476;
    int64_t g_485[6];
    uint8_t *g_506;
    uint8_t **g_505;
    uint8_t *** volatile g_504;
    VECTOR(int32_t, 16) g_509;
    VECTOR(int32_t, 8) g_510;
    uint32_t g_511;
    struct S0 g_515;
    VECTOR(uint16_t, 16) g_568;
    VECTOR(int16_t, 8) g_577;
    VECTOR(int16_t, 8) g_578;
    uint16_t * volatile g_586;
    uint16_t * volatile *g_585;
    int32_t *g_645[4][7][4];
    int32_t ** volatile g_644;
    volatile VECTOR(int16_t, 4) g_654;
    volatile VECTOR(int16_t, 4) g_656;
    VECTOR(int32_t, 2) g_666;
    VECTOR(int16_t, 8) g_688;
    int32_t ***g_710[9][9][3];
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
uint16_t  func_1(struct S2 * p_725);
uint32_t  func_7(uint64_t  p_8, int32_t  p_9, uint32_t  p_10, struct S2 * p_725);
int8_t  func_17(uint64_t  p_18, int32_t  p_19, struct S2 * p_725);
uint64_t  func_20(uint16_t  p_21, struct S2 * p_725);
int32_t * func_25(int32_t * p_26, uint16_t  p_27, uint8_t  p_28, int8_t  p_29, int16_t  p_30, struct S2 * p_725);
int32_t * func_31(int32_t * p_32, int32_t  p_33, int32_t * p_34, int32_t * p_35, struct S2 * p_725);
int32_t ** func_52(int32_t * p_53, int32_t  p_54, int32_t * p_55, struct S2 * p_725);
int32_t * func_56(uint64_t  p_57, uint64_t  p_58, int32_t * p_59, struct S2 * p_725);
int32_t * func_63(int32_t ** p_64, struct S2 * p_725);
uint32_t  func_66(int32_t  p_67, uint16_t  p_68, int32_t * p_69, uint64_t  p_70, struct S2 * p_725);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_725->g_6 p_725->g_36 p_725->g_37 p_725->g_47 p_725->g_82 p_725->g_91 p_725->g_97 p_725->g_107 p_725->g_112 p_725->l_comm_values p_725->g_114 p_725->g_132 p_725->g_135 p_725->g_143 p_725->g_148 p_725->g_121 p_725->g_149 p_725->g_171 p_725->g_174 p_725->g_196 p_725->g_208 p_725->g_217 p_725->g_218.f4 p_725->g_comm_values p_725->g_218.f2 p_725->g_218.f1 p_725->g_329 p_725->g_331 p_725->g_336 p_725->g_358 p_725->g_341 p_725->g_360 p_725->g_467 p_725->g_218.f5 p_725->g_476 p_725->g_286 p_725->g_218.f3 p_725->g_504 p_725->g_509 p_725->g_510 p_725->g_511 p_725->g_218 p_725->g_515.f4 p_725->g_505 p_725->g_506 p_725->g_568 p_725->g_577 p_725->g_578 p_725->g_585 p_725->g_644 p_725->g_654 p_725->g_656 p_725->g_342 p_725->g_666 p_725->g_515.f5 p_725->g_688 p_725->g_586
 * writes: p_725->g_62 p_725->g_107 p_725->g_132 p_725->g_143 p_725->g_114 p_725->g_36 p_725->g_121 p_725->g_47 p_725->g_169 p_725->g_171 p_725->g_82 p_725->g_37 p_725->g_208 p_725->g_135.f1 p_725->g_218 p_725->g_6 p_725->g_330 p_725->g_332 p_725->g_217.f5 p_725->g_341 p_725->g_217.f3 p_725->g_485 p_725->g_505 p_725->g_511 p_725->g_515 p_725->g_476 p_725->g_336 p_725->g_585 p_725->g_645 p_725->g_577 p_725->g_710 p_725->g_97 p_725->g_578
 */
uint16_t  func_1(struct S2 * p_725)
{ /* block id: 4 */
    uint64_t l_693 = 0x386CCAA6D3B9AEF4L;
    uint32_t l_694 = 0UL;
    uint16_t l_695 = 8UL;
    int32_t *l_722[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_723 = 0L;
    uint64_t l_724 = 0x9B54C292B52D5842L;
    int i;
    l_724 = ((safe_div_func_uint64_t_u_u((1L & 0xE4B7834D8A94B2ABL), (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(p_725->g_6.zz)).even, 0UL)))) , (l_723 = (p_725->g_6.y && (FAKE_DIVERGE(p_725->local_0_offset, get_local_id(0), 10) | func_7((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(func_17(func_20(p_725->g_6.z, p_725), p_725->g_568.sf, p_725), ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_725->g_688.s44)), (((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(l_693, l_693)), p_725->g_467.s0)) >= p_725->g_112.w) , p_725->g_467.s4), ((VECTOR(int16_t, 2))(0L)), 0x0B9AL, 0x1C64L, 1L)), ((VECTOR(int16_t, 8))(0x06F7L)), ((VECTOR(int16_t, 8))(0x7933L))))).s3, l_693)) , p_725->g_509.s6))), l_694)), 0)), l_695, l_694, p_725)))));
    return (**p_725->g_585);
}


/* ------------------------------------------ */
/* 
 * reads : p_725->g_217.f2 p_725->g_506 p_725->g_107 p_725->g_336
 * writes: p_725->g_645 p_725->g_107 p_725->g_710 p_725->g_97 p_725->g_578
 */
uint32_t  func_7(uint64_t  p_8, int32_t  p_9, uint32_t  p_10, struct S2 * p_725)
{ /* block id: 298 */
    int32_t **l_696 = &p_725->g_645[3][5][3];
    int32_t l_707 = (-6L);
    int32_t ***l_709[5][10] = {{&l_696,(void*)0,&p_725->g_330,&p_725->g_330,&l_696,&p_725->g_330,&p_725->g_330,(void*)0,&l_696,&p_725->g_330},{&l_696,(void*)0,&p_725->g_330,&p_725->g_330,&l_696,&p_725->g_330,&p_725->g_330,(void*)0,&l_696,&p_725->g_330},{&l_696,(void*)0,&p_725->g_330,&p_725->g_330,&l_696,&p_725->g_330,&p_725->g_330,(void*)0,&l_696,&p_725->g_330},{&l_696,(void*)0,&p_725->g_330,&p_725->g_330,&l_696,&p_725->g_330,&p_725->g_330,(void*)0,&l_696,&p_725->g_330},{&l_696,(void*)0,&p_725->g_330,&p_725->g_330,&l_696,&p_725->g_330,&p_725->g_330,(void*)0,&l_696,&p_725->g_330}};
    int32_t ****l_708[3];
    int8_t *l_711 = (void*)0;
    int8_t *l_712 = (void*)0;
    int8_t *l_713 = (void*)0;
    int8_t *l_714 = (void*)0;
    int8_t *l_715 = (void*)0;
    int8_t *l_716[7][1][3];
    uint16_t l_717 = 65535UL;
    int16_t *l_718 = (void*)0;
    uint64_t l_719 = 0xDACB340C7DC53299L;
    VECTOR(int64_t, 16) l_720 = (VECTOR(int64_t, 16))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 4L), 4L), 4L, (-4L), 4L, (VECTOR(int64_t, 2))((-4L), 4L), (VECTOR(int64_t, 2))((-4L), 4L), (-4L), 4L, (-4L), 4L);
    uint32_t l_721 = 0UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_708[i] = &l_709[2][7];
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_716[i][j][k] = (void*)0;
        }
    }
    (*l_696) = (void*)0;
    l_719 ^= ((3UL && ((((void*)0 != &p_725->g_62) , p_725->g_217.f2) > (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_725->group_2_offset, get_group_id(2), 10), (safe_mul_func_uint8_t_u_u(((*p_725->g_506)--), (0L < p_10))))), (l_707 , (p_725->g_578.s7 = ((p_725->g_97.y = ((p_725->g_710[3][8][1] = &l_696) != &p_725->g_330)) < l_717))))))) , p_10);
    l_721 |= ((p_725->g_336.s0 , (-1L)) || ((VECTOR(int64_t, 4))((-10L), ((VECTOR(int64_t, 8))(l_720.se7ef9f42)).s2, 1L, 4L)).x);
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_725->g_217.f5 p_725->g_654 p_725->g_656 p_725->g_577 p_725->g_342 p_725->g_143 p_725->g_666 p_725->g_515.f5 p_725->g_331.f0 p_725->g_358 p_725->g_506 p_725->g_107 p_725->g_218.f3 p_725->g_37 p_725->g_112 p_725->g_171 p_725->g_217.f3 p_725->g_217.f2
 * writes: p_725->g_217.f5 p_725->g_577 p_725->g_515.f5 p_725->g_218.f3
 */
int8_t  func_17(uint64_t  p_18, int32_t  p_19, struct S2 * p_725)
{ /* block id: 288 */
    uint8_t l_646 = 1UL;
    VECTOR(int32_t, 8) l_647 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x702C9DD5L), 0x702C9DD5L), 0x702C9DD5L, 6L, 0x702C9DD5L);
    int32_t *l_648 = (void*)0;
    int32_t *l_649 = &p_725->g_217.f5;
    VECTOR(int16_t, 2) l_655 = (VECTOR(int16_t, 2))(1L, (-7L));
    int16_t *l_659 = (void*)0;
    int16_t *l_660 = (void*)0;
    int16_t *l_661 = (void*)0;
    int16_t *l_662 = (void*)0;
    int16_t *l_663[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_671 = &p_725->g_515.f5;
    VECTOR(uint64_t, 2) l_678 = (VECTOR(uint64_t, 2))(0x2CCB3BBB9F8E599AL, 0x63B91D087F4412BFL);
    uint16_t l_679 = 0xCF6AL;
    uint16_t *l_682 = &p_725->g_218.f3;
    uint16_t *l_683 = (void*)0;
    uint16_t *l_684[3];
    uint16_t l_685 = 0UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_684[i] = &l_679;
    (*l_649) = ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(6L, l_646, (-4L), 1L)), ((VECTOR(int32_t, 2))(l_647.s21)), 0x144D035CL)).s4;
    l_647.s4 ^= (safe_add_func_int8_t_s_s((1L >= ((((safe_div_func_int64_t_s_s(p_18, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))((-4L), 0L, (+(*l_649)), (p_18 || ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x0F01L, 1L)), (-1L), 0x2F92L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(p_725->g_654.yx)).xyxy, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(l_655.xxxyxyxyxxyxyxyx)).s296e, ((VECTOR(int16_t, 16))(p_725->g_656.wxyzwyzxxwwwzyxz)).s0218))))))))).xzwywwzwywzwxzxz, ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(0x30C8L, 0x74DEL)).xxyyyyxxxxyxyyyx, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))((1L == 4294967295UL), (-3L), 0L, 0x3752L, (p_725->g_577.s0 |= (safe_rshift_func_uint8_t_u_s((&p_725->g_62 != l_648), 3))), (safe_sub_func_uint64_t_u_u(0x2B9A9CCE068502E6L, 0x060DE1A4EB819A5EL)), 0x6A68L, 0L)), ((VECTOR(int16_t, 8))(3L))))).s7102637167216067))), ((VECTOR(int16_t, 16))(0x17E0L))))).sa5d9)).hi, ((VECTOR(int16_t, 2))(0x16CAL))))).xxxxyxxy, ((VECTOR(int16_t, 8))((-1L))), ((VECTOR(int16_t, 8))(0L))))).even)).xwxyzxwy)).s0765572110560165)))).even)).even, ((VECTOR(int16_t, 4))((-3L)))))).zzzxxyyw)).s7), ((VECTOR(int64_t, 4))(8L)), p_18, 1L, 0x66F93B5C9DE92DFBL, (-9L), ((VECTOR(int64_t, 2))((-1L))), 0x299B11E08F9F0716L, (-1L))).sc9, ((VECTOR(int64_t, 2))(0x65527A32FDFEAA5DL)), ((VECTOR(int64_t, 2))(0x5C5E3F10B6BFA379L))))).yxxyyxxy)).lo)).y)) , (*l_649)) , (*p_725->g_342)) | p_18)), 0x63L));
    p_19 = (((*l_649) = ((VECTOR(int32_t, 2))(p_725->g_666.yx)).even) | (0x97AA8439L & (((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s(p_725->g_143, (p_19 , (((*l_671) |= p_18) != (safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((((l_685 = (((VECTOR(uint64_t, 8))(l_678.yxxxxxxx)).s4 , ((*l_682) &= ((!(l_679 < ((p_725->g_331.f0 <= (-1L)) && (safe_mul_func_uint8_t_u_u(p_19, p_725->g_358.se))))) <= (*p_725->g_506))))) < p_725->g_37.x) <= p_725->g_112.y) | p_19), (-8L))), p_19)), p_725->g_171)))))), p_19)) <= p_18) > p_725->g_217.f3)));
    return p_725->g_217.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_725->g_36 p_725->g_6 p_725->g_37 p_725->g_47 p_725->g_82 p_725->g_91 p_725->g_97 p_725->g_107 p_725->g_112 p_725->l_comm_values p_725->g_114 p_725->g_132 p_725->g_135 p_725->g_143 p_725->g_148 p_725->g_121 p_725->g_149 p_725->g_171 p_725->g_174 p_725->g_196 p_725->g_208 p_725->g_217 p_725->g_218.f4 p_725->g_comm_values p_725->g_218.f2 p_725->g_218.f1 p_725->g_329 p_725->g_331 p_725->g_336 p_725->g_358 p_725->g_341 p_725->g_360 p_725->g_467 p_725->g_218.f5 p_725->g_476 p_725->g_286 p_725->g_218.f3 p_725->g_504 p_725->g_509 p_725->g_510 p_725->g_511 p_725->g_218 p_725->g_515.f4 p_725->g_505 p_725->g_506 p_725->g_568 p_725->g_577 p_725->g_578 p_725->g_585 p_725->g_644
 * writes: p_725->g_62 p_725->g_107 p_725->g_132 p_725->g_143 p_725->g_114 p_725->g_36 p_725->g_121 p_725->g_47 p_725->g_169 p_725->g_171 p_725->g_82 p_725->g_37 p_725->g_208 p_725->g_135.f1 p_725->g_218 p_725->g_6 p_725->g_330 p_725->g_332 p_725->g_217.f5 p_725->g_341 p_725->g_217.f3 p_725->g_485 p_725->g_505 p_725->g_511 p_725->g_515 p_725->g_476 p_725->g_336 p_725->g_585 p_725->g_645
 */
uint64_t  func_20(uint16_t  p_21, struct S2 * p_725)
{ /* block id: 5 */
    uint32_t l_22 = 4294967290UL;
    int32_t *l_38 = (void*)0;
    int32_t l_628 = 0x5B024AEFL;
    int32_t **l_642 = (void*)0;
    int32_t **l_643 = &p_725->g_36;
    l_22++;
    (*p_725->g_644) = ((*l_643) = func_25(func_31(p_725->g_36, p_725->g_6.x, l_38, l_38, p_725), ((l_22 , (((safe_mul_func_uint16_t_u_u(p_21, 0x3DDDL)) , ((+(((safe_lshift_func_uint8_t_u_u(0xD2L, p_21)) < p_725->g_578.s3) == p_725->g_217.f2)) <= p_21)) < l_628)) , p_725->g_578.s3), p_21, p_21, p_725->g_510.s7, p_725));
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_725->g_82 p_725->g_47 p_725->g_91 p_725->g_114 p_725->g_37 p_725->g_132 p_725->g_135 p_725->g_143 p_725->g_36 p_725->g_148 p_725->g_149 p_725->g_171 p_725->g_174 p_725->g_218.f2
 * writes: p_725->g_132 p_725->g_107 p_725->g_143 p_725->g_114 p_725->g_36 p_725->g_47 p_725->g_169 p_725->g_171 p_725->g_121 p_725->g_82 p_725->g_37 p_725->g_218.f2
 */
int32_t * func_25(int32_t * p_26, uint16_t  p_27, uint8_t  p_28, int8_t  p_29, int16_t  p_30, struct S2 * p_725)
{ /* block id: 269 */
    int32_t **l_629 = &p_725->g_36;
    int32_t l_634[10][5][1] = {{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}},{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}},{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}},{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}},{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}},{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}},{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}},{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}},{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}},{{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL},{0x0A78F03AL}}};
    int32_t *l_641 = (void*)0;
    int32_t **l_640 = &l_641;
    int i, j, k;
    (*l_629) = func_63(l_629, p_725);
    for (p_725->g_218.f2 = 15; (p_725->g_218.f2 == 40); p_725->g_218.f2 = safe_add_func_uint16_t_u_u(p_725->g_218.f2, 4))
    { /* block id: 273 */
        int32_t *l_632 = (void*)0;
        int32_t *l_633[9][7] = {{(void*)0,(void*)0,&p_725->g_515.f5,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_725->g_515.f5,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_725->g_515.f5,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_725->g_515.f5,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_725->g_515.f5,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_725->g_515.f5,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_725->g_515.f5,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_725->g_515.f5,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_725->g_515.f5,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint32_t l_635 = 0xABE23BC0L;
        int i, j;
        l_635++;
        for (p_28 = 0; (p_28 == 56); p_28 = safe_add_func_int16_t_s_s(p_28, 9))
        { /* block id: 277 */
            return (*l_629);
        }
    }
    (*l_629) = (*l_629);
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_725->g_37 p_725->g_47 p_725->g_6 p_725->g_82 p_725->g_91 p_725->g_97 p_725->g_107 p_725->g_112 p_725->l_comm_values p_725->g_114 p_725->g_132 p_725->g_135 p_725->g_143 p_725->g_36 p_725->g_148 p_725->g_121 p_725->g_149 p_725->g_171 p_725->g_174 p_725->g_196 p_725->g_208 p_725->g_217 p_725->g_218.f4 p_725->g_comm_values p_725->g_218.f2 p_725->g_218.f1 p_725->g_329 p_725->g_331 p_725->g_336 p_725->g_358 p_725->g_341 p_725->g_360 p_725->g_467 p_725->g_218.f5 p_725->g_476 p_725->g_286 p_725->g_218.f3 p_725->g_504 p_725->g_509 p_725->g_510 p_725->g_511 p_725->g_218 p_725->g_515.f4 p_725->g_505 p_725->g_506 p_725->g_568 p_725->g_577 p_725->g_578 p_725->g_585
 * writes: p_725->g_62 p_725->g_107 p_725->g_132 p_725->g_143 p_725->g_114 p_725->g_36 p_725->g_121 p_725->g_47 p_725->g_169 p_725->g_171 p_725->g_82 p_725->g_37 p_725->g_208 p_725->g_135.f1 p_725->g_218 p_725->g_6 p_725->g_330 p_725->g_332 p_725->g_217.f5 p_725->g_341 p_725->g_217.f3 p_725->g_485 p_725->g_505 p_725->g_511 p_725->g_515 p_725->g_476 p_725->g_336 p_725->g_585
 */
int32_t * func_31(int32_t * p_32, int32_t  p_33, int32_t * p_34, int32_t * p_35, struct S2 * p_725)
{ /* block id: 7 */
    int8_t l_39 = 0x0FL;
    int32_t *l_40[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t l_41 = (-5L);
    uint32_t l_42[9][6][2] = {{{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L}},{{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L}},{{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L}},{{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L}},{{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L}},{{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L}},{{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L}},{{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L}},{{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L},{4294967295UL,0x621ADDA9L}}};
    uint32_t l_45 = 0xCCC5F555L;
    int16_t l_46 = 0L;
    int32_t l_48 = (-1L);
    uint32_t l_49 = 4294967291UL;
    int16_t l_205[8][10][3] = {{{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L}},{{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L}},{{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L}},{{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L}},{{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L}},{{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L}},{{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L}},{{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L},{(-1L),(-1L),0x7C19L}}};
    uint32_t l_206[4][1] = {{0UL},{0UL},{0UL},{0UL}};
    uint32_t *l_339[5][3] = {{&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49}};
    uint32_t **l_338 = &l_339[0][2];
    int32_t **l_471 = &l_40[0][3];
    uint64_t *l_472[2][2];
    uint8_t l_486[5][6][1] = {{{7UL},{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL},{7UL}}};
    int32_t l_495[2][2];
    uint16_t *l_563 = &p_725->g_132[1][8][0];
    uint16_t **l_562 = &l_563;
    VECTOR(uint64_t, 16) l_571 = (VECTOR(uint64_t, 16))(0x73A7D2EA259A5E3AL, (VECTOR(uint64_t, 4))(0x73A7D2EA259A5E3AL, (VECTOR(uint64_t, 2))(0x73A7D2EA259A5E3AL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x73A7D2EA259A5E3AL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x73A7D2EA259A5E3AL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x73A7D2EA259A5E3AL, 18446744073709551615UL), 0x73A7D2EA259A5E3AL, 18446744073709551615UL, 0x73A7D2EA259A5E3AL, 18446744073709551615UL);
    VECTOR(int16_t, 8) l_597 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x7435L), 0x7435L), 0x7435L, (-1L), 0x7435L);
    VECTOR(uint16_t, 4) l_615 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x8B3BL), 0x8B3BL);
    uint32_t l_619 = 4294967291UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_472[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_495[i][j] = 0x395C5BBBL;
    }
    ++l_42[4][1][0];
    l_45 ^= p_725->g_37.y;
    l_49++;
    if (p_725->g_47)
    { /* block id: 11 */
        int64_t l_60 = 0x733C9A5DC94D4D05L;
        int32_t *l_61 = &p_725->g_62;
        VECTOR(int32_t, 16) l_198 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x530943FAL), 0x530943FAL), 0x530943FAL, 0L, 0x530943FAL, (VECTOR(int32_t, 2))(0L, 0x530943FAL), (VECTOR(int32_t, 2))(0L, 0x530943FAL), 0L, 0x530943FAL, 0L, 0x530943FAL);
        int32_t ***l_328 = (void*)0;
        int i;
        (*p_725->g_329) = func_52(func_56(p_725->g_6.y, ((~((*l_61) = l_60)) , 0x13267D7153F65C74L), func_63(&p_725->g_36, p_725), p_725), (l_206[2][0] = ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_198.s6c993d68)).s74, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))((safe_mod_func_int32_t_s_s((l_60 , (0x4E7804CDDC7E7606L <= ((safe_add_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s(((p_33 && l_60) == FAKE_DIVERGE(p_725->group_0_offset, get_group_id(0), 10)), p_33)) & p_725->g_91.z) ^ l_205[4][1][2]), 0x8D588722L)) <= p_33))), p_33)), ((VECTOR(int32_t, 2))(0x7CA8566AL)), 7L)).xxwxxwxwxxwwyxzw, ((VECTOR(int32_t, 16))(0x5AA95AB5L)), ((VECTOR(int32_t, 16))((-7L)))))).s99))).lo), p_35, p_725);
        p_725->g_332 = p_725->g_331;
    }
    else
    { /* block id: 104 */
        uint16_t l_335 = 0x2022L;
        int32_t l_337 = 1L;
        uint32_t ***l_343 = &p_725->g_341;
        VECTOR(int32_t, 4) l_359 = (VECTOR(int32_t, 4))(0x3BA294D6L, (VECTOR(int32_t, 2))(0x3BA294D6L, 0x0DFACF10L), 0x0DFACF10L);
        VECTOR(int8_t, 2) l_475 = (VECTOR(int8_t, 2))(0x63L, 0x13L);
        VECTOR(uint32_t, 16) l_489 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x7D372E3FL), 0x7D372E3FL), 0x7D372E3FL, 1UL, 0x7D372E3FL, (VECTOR(uint32_t, 2))(1UL, 0x7D372E3FL), (VECTOR(uint32_t, 2))(1UL, 0x7D372E3FL), 1UL, 0x7D372E3FL, 1UL, 0x7D372E3FL);
        int8_t l_494 = (-1L);
        uint8_t *l_501[2][1][1];
        uint8_t **l_500 = &l_501[1][0][0];
        VECTOR(int32_t, 8) l_508 = (VECTOR(int32_t, 8))(0x3A1E7029L, (VECTOR(int32_t, 4))(0x3A1E7029L, (VECTOR(int32_t, 2))(0x3A1E7029L, (-1L)), (-1L)), (-1L), 0x3A1E7029L, (-1L));
        VECTOR(uint8_t, 4) l_533 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x42L), 0x42L);
        VECTOR(int16_t, 8) l_579 = (VECTOR(int16_t, 8))(0x02C3L, (VECTOR(int16_t, 4))(0x02C3L, (VECTOR(int16_t, 2))(0x02C3L, 0x6EE2L), 0x6EE2L), 0x6EE2L, 0x02C3L, 0x6EE2L);
        uint16_t l_591 = 0xE34BL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_501[i][j][k] = &l_486[4][5][0];
            }
        }
        for (p_725->g_171 = (-8); (p_725->g_171 > 4); p_725->g_171++)
        { /* block id: 107 */
            if (l_335)
                break;
            p_725->g_217.f5 &= 0x43F836D2L;
        }
        l_337 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_725->g_336.s5620175077313616)).lo)).s3;
        (*l_343) = l_338;
        if ((((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x3639L, 3L)), 0x5DB0L, 0L)).xwwwyyyx))).s0 < (l_359.w = (safe_mul_func_int16_t_s_s(0x2C04L, (p_33 , (safe_rshift_func_uint16_t_u_s((!(p_725->g_217.f3 = (safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(0xBFB5L, (safe_sub_func_int32_t_s_s((FAKE_DIVERGE(p_725->local_2_offset, get_local_id(2), 10) != ((((((((l_337 = ((p_725->g_6.y | 1L) , l_335)) == ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_725->group_2_offset, get_group_id(2), 10), 10)), ((VECTOR(int8_t, 8))(p_725->g_358.s9872b7d5)).s7)) > (**p_725->g_341))) <= p_725->l_comm_values[(safe_mod_func_uint32_t_u_u(p_725->tid, 6))]) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_359.xy)), ((p_725->g_360 , &p_34) == &p_725->g_36), 0x5F67443EL, 1L, p_33, l_359.z, 1L, ((VECTOR(int32_t, 8))(0x534B3584L)))).s8704)).x) == l_359.w) , (void*)0) != (void*)0) > p_725->g_97.x)), 1UL)), ((VECTOR(uint16_t, 2))(65535UL)), 0xCD3AL, GROUP_DIVERGE(1, 1), l_359.z, 2UL, FAKE_DIVERGE(p_725->global_1_offset, get_global_id(1), 10), 6UL, 0x03D8L, 0xA42FL, ((VECTOR(uint16_t, 2))(0x0B35L)), 8UL, 1UL)).s21, ((VECTOR(uint16_t, 2))(1UL))))).xyyy)).x, (**p_725->g_341))), 65535UL)))), 2))))))))
        { /* block id: 116 */
            int32_t l_468 = (-9L);
            uint16_t *l_469 = &p_725->g_218.f3;
            int32_t **l_470[8][3][8] = {{{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36}},{{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36}},{{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36}},{{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36}},{{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36}},{{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36}},{{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36}},{{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36},{&l_40[2][3],&l_40[2][3],(void*)0,&l_40[2][1],(void*)0,&l_40[2][3],&l_40[1][0],&p_725->g_36}}};
            int i, j, k;
            if ((atomic_inc(&p_725->g_atomic_input[92 * get_linear_group_id() + 31]) == 7))
            { /* block id: 118 */
                int64_t l_361 = 0L;
                int16_t l_390 = 1L;
                uint8_t l_391[2];
                int32_t l_411 = 0L;
                int16_t l_412 = 0L;
                struct S0 l_413 = {0xAF08L,0x5152D38CL,0x03C66F26L,65535UL,5L,0x002E3C08L,-1L};/* VOLATILE GLOBAL l_413 */
                uint16_t l_414 = 0x75E8L;
                uint64_t l_415 = 0x1163FDB79773B9E8L;
                int64_t l_416 = 0L;
                VECTOR(uint8_t, 4) l_417 = (VECTOR(uint8_t, 4))(0x39L, (VECTOR(uint8_t, 2))(0x39L, 1UL), 1UL);
                uint32_t l_418 = 0x9752BE66L;
                uint32_t l_419 = 4294967292UL;
                uint64_t l_420 = 0x4852B3C4394DF55BL;
                int i;
                for (i = 0; i < 2; i++)
                    l_391[i] = 0x5FL;
                if (l_361)
                { /* block id: 119 */
                    int32_t l_363 = 4L;
                    int32_t *l_362 = &l_363;
                    int32_t *l_364 = &l_363;
                    int32_t *l_365 = &l_363;
                    uint8_t l_377 = 255UL;
                    l_365 = (l_364 = l_362);
                    for (l_363 = 0; (l_363 >= 2); l_363 = safe_add_func_uint8_t_u_u(l_363, 9))
                    { /* block id: 124 */
                        VECTOR(int32_t, 8) l_368 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x28623251L), 0x28623251L), 0x28623251L, 0L, 0x28623251L);
                        VECTOR(int32_t, 4) l_369 = (VECTOR(int32_t, 4))(0x7055115FL, (VECTOR(int32_t, 2))(0x7055115FL, 1L), 1L);
                        VECTOR(uint32_t, 4) l_370 = (VECTOR(uint32_t, 4))(0x5682F7CCL, (VECTOR(uint32_t, 2))(0x5682F7CCL, 0xBF2EDE07L), 0xBF2EDE07L);
                        VECTOR(uint32_t, 4) l_371 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0UL), 0UL);
                        int32_t l_373 = 0x318BB5AFL;
                        int32_t *l_372 = &l_373;
                        struct S1 l_374 = {0x2C8A581586670F5DL,0x80E8A472L};/* VOLATILE GLOBAL l_374 */
                        int32_t l_375 = (-3L);
                        int32_t *l_376 = &l_373;
                        int i;
                        l_365 = (((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_368.s33)), 0x105B85C1L, 0x1E095DF6L)).wxwwzwyzyxzxywzy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_369.xxyz)).even)).yxyxyyyy)).s0667752703711741))))))).s662f, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(FAKE_DIVERGE(p_725->local_1_offset, get_local_id(1), 10), FAKE_DIVERGE(p_725->global_0_offset, get_global_id(0), 10), 0xB011954FL, 4294967288UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_370.zyyw)).xzxwxzzz)), 4294967295UL, ((VECTOR(uint32_t, 2))(l_371.yy)), 0UL)).s4b)))).xyxx))).w , l_372);
                        l_375 = (l_374 , ((VECTOR(int32_t, 2))(0x33C715F4L, (-10L))).hi);
                        l_362 = (l_364 = l_376);
                    }
                    l_377++;
                }
                else
                { /* block id: 131 */
                    int32_t l_380 = 0L;
                    uint16_t l_389 = 0x700FL;
                    l_380 |= 0x2E32F0C7L;
                    for (l_380 = 24; (l_380 == 5); l_380--)
                    { /* block id: 135 */
                        VECTOR(int32_t, 8) l_383 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x680B2227L), 0x680B2227L), 0x680B2227L, (-1L), 0x680B2227L);
                        int32_t l_384 = (-1L);
                        uint8_t l_385 = 9UL;
                        VECTOR(int32_t, 8) l_386 = (VECTOR(int32_t, 8))(0x2F430B65L, (VECTOR(int32_t, 4))(0x2F430B65L, (VECTOR(int32_t, 2))(0x2F430B65L, 7L), 7L), 7L, 0x2F430B65L, 7L);
                        uint16_t l_387 = 65533UL;
                        int16_t l_388 = 0x61D8L;
                        int i;
                        l_385 = (l_384 &= l_383.s6);
                        l_388 &= (l_387 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_386.s3437575262612177)))).s6);
                    }
                    l_389 &= 0x5AAB4F5FL;
                }
                l_390 &= 0L;
                if ((l_391[1] ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(0L, 0x0D629336L)).yyyxxyxyyxxyyxyy))).s9e)).odd))
                { /* block id: 145 */
                    int32_t l_392 = 9L;
                    for (l_392 = 29; (l_392 < 14); l_392 = safe_sub_func_uint32_t_u_u(l_392, 3))
                    { /* block id: 148 */
                        uint32_t l_395[1][3];
                        VECTOR(int32_t, 2) l_399 = (VECTOR(int32_t, 2))(0x75AABCB1L, 0x7A7E1F60L);
                        int32_t *l_398 = (void*)0;
                        uint32_t l_400 = 0x650405B5L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_395[i][j] = 7UL;
                        }
                        --l_395[0][0];
                        l_398 = l_398;
                        l_400 &= 0x30A98D6FL;
                        l_398 = (((VECTOR(int32_t, 8))(0x0E004DCFL, 6L, 1L, 0x4BD5619DL, 9L, (-1L), 0x12DBD750L, 0L)).s1 , (void*)0);
                    }
                    for (l_392 = 0; (l_392 > 13); l_392 = safe_add_func_int32_t_s_s(l_392, 1))
                    { /* block id: 156 */
                        int32_t l_404 = 0x0DDB9386L;
                        int32_t *l_403 = &l_404;
                        uint8_t l_405 = 6UL;
                        int32_t l_406 = 0L;
                        uint64_t l_407 = 0x04D67EBEC6AF0DA9L;
                        l_403 = (void*)0;
                        l_406 |= l_405;
                        l_407 |= 0x2D5DEBF6L;
                    }
                }
                else
                { /* block id: 161 */
                    VECTOR(uint32_t, 8) l_408 = (VECTOR(uint32_t, 8))(0x70B09041L, (VECTOR(uint32_t, 4))(0x70B09041L, (VECTOR(uint32_t, 2))(0x70B09041L, 0UL), 0UL), 0UL, 0x70B09041L, 0UL);
                    int i;
                    l_408.s6--;
                }
                if ((l_420 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(9L, 0x63BE035AL, (-1L), (l_412 ^= l_411), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))((-10L), 7L)).xyyx, (int32_t)(l_413 , (l_415 = l_414))))))), ((VECTOR(int32_t, 8))(1L, 0x6C5CB6B4L, (l_413.f5 = (l_418 = (l_417.x ^= l_416))), l_419, 0x33D8672CL, ((VECTOR(int32_t, 2))(0x20DCFAABL, 1L)), 0x0FE9B1E0L)))).sd))
                { /* block id: 170 */
                    struct S1 l_421 = {0x78F2A1510266BEC3L,0x69D5BEB8L};/* VOLATILE GLOBAL l_421 */
                    struct S1 l_422 = {0x11D5B15BA49C662AL,4294967290UL};/* VOLATILE GLOBAL l_422 */
                    struct S0 l_423 = {0x392BL,0UL,0xF63B9831L,4UL,7L,1L,0x21854AD8L};/* VOLATILE GLOBAL l_423 */
                    l_422 = l_421;
                    l_413 = l_423;
                }
                else
                { /* block id: 173 */
                    int32_t l_424 = 0x0D253205L;
                    VECTOR(int32_t, 16) l_435 = (VECTOR(int32_t, 16))(0x7CC8199DL, (VECTOR(int32_t, 4))(0x7CC8199DL, (VECTOR(int32_t, 2))(0x7CC8199DL, 0x6CAAD7D3L), 0x6CAAD7D3L), 0x6CAAD7D3L, 0x7CC8199DL, 0x6CAAD7D3L, (VECTOR(int32_t, 2))(0x7CC8199DL, 0x6CAAD7D3L), (VECTOR(int32_t, 2))(0x7CC8199DL, 0x6CAAD7D3L), 0x7CC8199DL, 0x6CAAD7D3L, 0x7CC8199DL, 0x6CAAD7D3L);
                    uint8_t l_436[6] = {7UL,7UL,7UL,7UL,7UL,7UL};
                    VECTOR(uint16_t, 4) l_437 = (VECTOR(uint16_t, 4))(0x079DL, (VECTOR(uint16_t, 2))(0x079DL, 1UL), 1UL);
                    uint32_t l_438 = 2UL;
                    int32_t l_439 = 0x23F4C71AL;
                    uint32_t l_440 = 0xED498255L;
                    uint8_t l_441 = 0xE1L;
                    uint64_t l_442 = 7UL;
                    uint64_t l_443 = 0xD572EE732E64DC49L;
                    VECTOR(int32_t, 8) l_444 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0AD2F4D8L), 0x0AD2F4D8L), 0x0AD2F4D8L, 0L, 0x0AD2F4D8L);
                    VECTOR(int16_t, 8) l_445 = (VECTOR(int16_t, 8))(0x7CA2L, (VECTOR(int16_t, 4))(0x7CA2L, (VECTOR(int16_t, 2))(0x7CA2L, (-1L)), (-1L)), (-1L), 0x7CA2L, (-1L));
                    VECTOR(uint16_t, 16) l_446 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x4C65L), 0x4C65L), 0x4C65L, 1UL, 0x4C65L, (VECTOR(uint16_t, 2))(1UL, 0x4C65L), (VECTOR(uint16_t, 2))(1UL, 0x4C65L), 1UL, 0x4C65L, 1UL, 0x4C65L);
                    VECTOR(uint16_t, 8) l_447 = (VECTOR(uint16_t, 8))(0xD47CL, (VECTOR(uint16_t, 4))(0xD47CL, (VECTOR(uint16_t, 2))(0xD47CL, 0x5232L), 0x5232L), 0x5232L, 0xD47CL, 0x5232L);
                    VECTOR(int16_t, 8) l_448 = (VECTOR(int16_t, 8))(0x073FL, (VECTOR(int16_t, 4))(0x073FL, (VECTOR(int16_t, 2))(0x073FL, 0x5039L), 0x5039L), 0x5039L, 0x073FL, 0x5039L);
                    VECTOR(int16_t, 4) l_449 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x2009L), 0x2009L);
                    VECTOR(int16_t, 8) l_450 = (VECTOR(int16_t, 8))(0x008BL, (VECTOR(int16_t, 4))(0x008BL, (VECTOR(int16_t, 2))(0x008BL, 1L), 1L), 1L, 0x008BL, 1L);
                    VECTOR(int16_t, 16) l_451 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x0E7DL), 0x0E7DL), 0x0E7DL, (-6L), 0x0E7DL, (VECTOR(int16_t, 2))((-6L), 0x0E7DL), (VECTOR(int16_t, 2))((-6L), 0x0E7DL), (-6L), 0x0E7DL, (-6L), 0x0E7DL);
                    int64_t l_452 = 0x38AF85D7F1C4108FL;
                    uint16_t l_453 = 65535UL;
                    uint32_t l_454 = 4294967295UL;
                    int16_t l_455 = 8L;
                    int8_t l_456[7];
                    int32_t l_457[2][7][2] = {{{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L}},{{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L},{0x575B65B8L,0x575B65B8L}}};
                    uint64_t l_458 = 0xFB47686D32D77E4AL;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_456[i] = (-5L);
                    for (l_424 = 0; (l_424 < (-24)); --l_424)
                    { /* block id: 176 */
                        int16_t l_427[7];
                        int32_t l_429[9];
                        int32_t *l_428 = &l_429[5];
                        uint32_t l_430 = 4UL;
                        VECTOR(uint64_t, 2) l_431 = (VECTOR(uint64_t, 2))(4UL, 18446744073709551609UL);
                        int32_t l_432 = 0x030E8E54L;
                        uint32_t l_433 = 0x8231CAA1L;
                        int16_t l_434 = (-9L);
                        int i;
                        for (i = 0; i < 7; i++)
                            l_427[i] = 5L;
                        for (i = 0; i < 9; i++)
                            l_429[i] = 0x1CD8D65BL;
                        l_413.f5 = l_427[6];
                        l_428 = (void*)0;
                        l_413.f5 |= (l_430 , (((VECTOR(uint64_t, 4))(l_431.xyyy)).y , l_432));
                        l_434 = (l_413.f5 = l_433);
                    }
                    l_458 &= ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x17F653E8L, 0x6B477836L)))).yxxxyxyyyyyyyxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_435.se = (l_413.f5 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_435.s9d)).xxxyxyyxxyxyxxxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x2A8C2767L, ((l_413.f3 = (l_414 = (l_436[3] , (l_437.y = ((VECTOR(uint16_t, 8))(l_437.xxyzywwx)).s4)))) , l_438), 0x1CE7146AL, ((VECTOR(int32_t, 4))(l_439, 0x523FA129L, 0x1A7CDA4BL, 0x2BC7A7C2L)), (-1L))))).hi)).xywxwzzwyzwzzwxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(0x6664E678L, 0x362D09E1L)).yxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x6DD92DAAL, 0x1513D5ECL)).xxyyxyxyxyxyyyyx)).lo)).odd, ((VECTOR(int32_t, 2))((-1L), 0x48078418L)).xyyy))).even)).xyxxxyyyyxxyxyyx))))).s2)), 7L, (-4L), 0x176218BCL)), ((VECTOR(int32_t, 4))((l_440 , l_441), (l_442 , (l_413.f5 = l_443)), (-3L), 0x2C5C3202L)))).s5327267106077342))).s5ee7, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-10L), 0x618DE510L)))).yyxx))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_444.s50760136)).hi)).x, 0x4B157906L, 0x2B3BA1DBL, 0x6F8E6EF8L)).s10, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_445.s2545)).xzywzxxy, ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_446.s19c0c65833117480)).s3d86)).yzxywwwwwywxxwxx, ((VECTOR(uint16_t, 4))(l_447.s4313)).xwywwwxzwzyyxxxx))).even))).s00))).yxyxxyxxxyyyyxxy, (int32_t)(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x2E37L, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(l_448.s77635131)).s75, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_449.xxxxxzxy)).s56)), (-6L), 0L, 0x7F8DL, 0x6B3BL, ((VECTOR(int16_t, 4))(l_450.s2663)).y, 0L, ((VECTOR(int16_t, 2))(l_451.sec)), 0x31AAL, ((l_452 , l_453) , l_454), ((VECTOR(int16_t, 4))((-1L))))).s6f))), l_455, (-1L), 0x5F84L, (-1L), 6L)).hi)).z , l_456[4]), (int32_t)l_457[0][5][1]))).s8;
                }
                unsigned int result = 0;
                result += l_361;
                result += l_390;
                int l_391_i0;
                for (l_391_i0 = 0; l_391_i0 < 2; l_391_i0++) {
                    result += l_391[l_391_i0];
                }
                result += l_411;
                result += l_412;
                result += l_413.f0;
                result += l_413.f1;
                result += l_413.f2;
                result += l_413.f3;
                result += l_413.f4;
                result += l_413.f5;
                result += l_413.f6;
                result += l_414;
                result += l_415;
                result += l_416;
                result += l_417.w;
                result += l_417.z;
                result += l_417.y;
                result += l_417.x;
                result += l_418;
                result += l_419;
                result += l_420;
                atomic_add(&p_725->g_special_values[92 * get_linear_group_id() + 31], result);
            }
            else
            { /* block id: 191 */
                (1 + 1);
            }
            l_337 |= ((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(p_725->g_208[0][3][0], ((p_725->g_82.f1 && ((void*)0 != (*l_343))) , p_725->g_331.f0))), (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((VECTOR(uint64_t, 2))(p_725->g_467.s36)).even , ((*l_469) = (((p_725->g_336.s2 != l_468) != ((((((void*)0 != &l_335) == 9UL) , l_335) , p_33) ^ 0x3A8C2F96L)) , 65535UL))), p_33)), 4294967288UL)))) & GROUP_DIVERGE(1, 1));
            p_34 = func_63(&l_40[0][4], p_725);
        }
        else
        { /* block id: 197 */
            uint64_t *l_473 = &p_725->g_208[2][3][0];
            uint64_t **l_474 = &l_473;
            int32_t l_483 = 0x5BEE580EL;
            int64_t *l_484 = &p_725->g_485[3];
            int32_t l_551 = 1L;
            int32_t l_587 = 5L;
            int32_t l_589 = 0x1E554886L;
            VECTOR(int8_t, 8) l_611 = (VECTOR(int8_t, 8))(0x29L, (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0x23L), 0x23L), 0x23L, 0x29L, 0x23L);
            VECTOR(uint16_t, 4) l_614 = (VECTOR(uint16_t, 4))(0x568DL, (VECTOR(uint16_t, 2))(0x568DL, 0UL), 0UL);
            int i;
            (*l_471) = func_63(l_471, p_725);
            p_725->g_47 = ((+l_337) && ((**p_725->g_341) = ((p_33 > ((((l_472[0][1] != ((*l_474) = l_473)) , ((((VECTOR(int8_t, 8))(p_725->g_218.f5, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_475.xyxxxxyyyxxxyyyx)).s3dc3)), 0x70L, 1L, 3L)).s6 <= ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_725->g_476.zxzw)))).z) & (p_34 == (void*)0))) ^ p_725->g_360.f0) & p_725->l_comm_values[(safe_mod_func_uint32_t_u_u(p_725->tid, 6))])) | p_33)));
            if ((((((l_337 = (-1L)) , (FAKE_DIVERGE(p_725->global_2_offset, get_global_id(2), 10) != p_33)) != (safe_mod_func_int8_t_s_s((~(safe_add_func_int32_t_s_s((((((p_33 | (safe_sub_func_uint16_t_u_u((((*l_484) = (p_33 <= (l_483 >= 0x2FL))) , ((((((VECTOR(int64_t, 8))((((0x30C0L > ((++l_486[4][5][0]) == ((((((VECTOR(uint32_t, 8))(l_489.s4d40c6cc)).s3 , (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((-9L), 5)), l_359.y))) , p_33) , (void*)0) == &l_472[0][0]))) < 0L) & 0x312ED33093492E9CL), p_33, l_483, (-5L), p_725->g_174.f0, p_725->g_112.y, 0x6690F4F09AEC8A35L, 1L)).s0 <= p_33) <= GROUP_DIVERGE(2, 1)) , 9UL) , 0x7387L)), p_725->g_217.f5))) && p_725->g_286.s3) & p_33) || 9UL) , l_494), l_483))), p_725->g_218.f3))) & l_495[0][1]) & l_359.x))
            { /* block id: 205 */
                struct S0 *l_507 = &p_725->g_218;
                int32_t l_536 = 1L;
                VECTOR(uint64_t, 4) l_558 = (VECTOR(uint64_t, 4))(0x580999ABAB70C000L, (VECTOR(uint64_t, 2))(0x580999ABAB70C000L, 0x7ECA4848A98D6CDDL), 0x7ECA4848A98D6CDDL);
                int32_t l_584 = 0x0B328E36L;
                int32_t l_588[6][10] = {{0x1C816228L,0x446BDE77L,0x446BDE77L,0x1C816228L,(-1L),0x52016594L,0x5246298FL,2L,0L,0x0E6A0038L},{0x1C816228L,0x446BDE77L,0x446BDE77L,0x1C816228L,(-1L),0x52016594L,0x5246298FL,2L,0L,0x0E6A0038L},{0x1C816228L,0x446BDE77L,0x446BDE77L,0x1C816228L,(-1L),0x52016594L,0x5246298FL,2L,0L,0x0E6A0038L},{0x1C816228L,0x446BDE77L,0x446BDE77L,0x1C816228L,(-1L),0x52016594L,0x5246298FL,2L,0L,0x0E6A0038L},{0x1C816228L,0x446BDE77L,0x446BDE77L,0x1C816228L,(-1L),0x52016594L,0x5246298FL,2L,0L,0x0E6A0038L},{0x1C816228L,0x446BDE77L,0x446BDE77L,0x1C816228L,(-1L),0x52016594L,0x5246298FL,2L,0L,0x0E6A0038L}};
                int16_t l_594 = 0x7B5CL;
                int i, j;
                for (p_725->g_121 = (-14); (p_725->g_121 <= 15); ++p_725->g_121)
                { /* block id: 208 */
                    struct S0 *l_514[5][3] = {{&p_725->g_218,(void*)0,&p_725->g_218},{&p_725->g_218,(void*)0,&p_725->g_218},{&p_725->g_218,(void*)0,&p_725->g_218},{&p_725->g_218,(void*)0,&p_725->g_218},{&p_725->g_218,(void*)0,&p_725->g_218}};
                    int i, j;
                    for (p_725->g_47 = 0; (p_725->g_47 <= 1); ++p_725->g_47)
                    { /* block id: 211 */
                        uint8_t ***l_502 = (void*)0;
                        uint8_t ***l_503 = &l_500;
                        (*p_725->g_504) = ((*l_503) = l_500);
                        l_507 = (void*)0;
                        p_725->g_37.y |= ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0L, 0x4574229EL, 0L, 0x233F1971L)).odd, ((VECTOR(int32_t, 8))(l_508.s74600745)).s26, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_725->g_509.s6999)))).hi)).yxxyxyxxxxyyyxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-3L), 0x608EE300L)).yxxyyyxx)).s4326345077301741, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_725->g_510.s0032044342172153)).sd2fa)).xyzxywwyxwyywwxx))).s23))).lo;
                        p_725->g_511++;
                    }
                    p_725->g_515 = p_725->g_218;
                    (*l_471) = (void*)0;
                    for (p_725->g_515.f4 = 0; (p_725->g_515.f4 > 5); ++p_725->g_515.f4)
                    { /* block id: 222 */
                        uint16_t *l_520 = &p_725->g_217.f3;
                        uint16_t **l_519 = &l_520;
                        uint16_t ***l_518 = &l_519;
                        uint16_t **l_522 = (void*)0;
                        uint16_t ***l_521 = &l_522;
                        (*l_521) = ((*l_518) = (void*)0);
                        return p_35;
                    }
                }
                for (p_725->g_217.f5 = 24; (p_725->g_217.f5 > (-7)); p_725->g_217.f5 = safe_sub_func_int16_t_s_s(p_725->g_217.f5, 5))
                { /* block id: 230 */
                    int16_t *l_531[3];
                    int32_t l_532 = 0x09E25A14L;
                    int32_t l_552 = 0x40EC16C5L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_531[i] = &l_46;
                    l_552 = ((safe_lshift_func_int8_t_s_u((p_725->g_476.z = ((safe_lshift_func_int8_t_s_u((p_725->g_515.f4 < (l_532 = 0x6E70L)), 5)) , p_725->l_comm_values[(safe_mod_func_uint32_t_u_u(p_725->tid, 6))])), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_533.zzxxzxzyzxyyzwxw)))).sb)) <= ((l_551 ^= ((safe_sub_func_int64_t_s_s((((VECTOR(int64_t, 4))(0x4B00FA33188A18EDL, 0x179290BB22B4ED18L, 0x19B92562771ACAF4L, 2L)).z > l_536), 0x76A65A38536D4953L)) < (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(0x6BL)), (safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((((((p_33 >= (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int64_t_s((p_33 || p_725->l_comm_values[(safe_mod_func_uint32_t_u_u(p_725->tid, 6))]))) == l_536), l_483))) | p_33) | p_33) && 0x4326L) != (**p_725->g_341)), l_508.s2)) <= (**p_725->g_505)) != FAKE_DIVERGE(p_725->local_0_offset, get_local_id(0), 10)), p_33)) >= (*p_725->g_148)), p_33)), 0xF4L)))))) < (*p_725->g_506)));
                    return p_34;
                }
                for (l_46 = 0; (l_46 >= 2); ++l_46)
                { /* block id: 239 */
                    int32_t l_569[8] = {(-3L),(-1L),(-3L),(-3L),(-1L),(-3L),(-3L),(-1L)};
                    int32_t l_574 = 0L;
                    int i;
                    for (l_536 = 0; (l_536 > (-12)); --l_536)
                    { /* block id: 242 */
                        int32_t *l_557 = &p_725->g_218.f5;
                        uint16_t *l_560[4][9][5] = {{{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335}},{{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335}},{{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335}},{{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335},{&p_725->g_217.f3,&p_725->g_132[1][8][0],&l_335,&p_725->g_132[3][2][1],&l_335}}};
                        uint16_t **l_559 = &l_560[2][6][4];
                        int32_t l_561 = 0x498DAC19L;
                        VECTOR(uint64_t, 4) l_570 = (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 5UL), 5UL);
                        int16_t *l_581 = &l_205[4][1][2];
                        int16_t *l_582 = (void*)0;
                        int16_t *l_583[10][1] = {{&l_46},{&l_46},{&l_46},{&l_46},{&l_46},{&l_46},{&l_46},{&l_46},{&l_46},{&l_46}};
                        int32_t l_590[6][3] = {{0x18F12C1CL,(-3L),(-1L)},{0x18F12C1CL,(-3L),(-1L)},{0x18F12C1CL,(-3L),(-1L)},{0x18F12C1CL,(-3L),(-1L)},{0x18F12C1CL,(-3L),(-1L)},{0x18F12C1CL,(-3L),(-1L)}};
                        int i, j, k;
                        l_557 = (void*)0;
                        l_587 |= ((((VECTOR(uint64_t, 16))(18446744073709551611UL, 0UL, ((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_558.wxzy)).even)).xxxyxxxx, ((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))((l_561 = ((void*)0 != l_559)), (l_562 == ((((safe_mod_func_uint16_t_u_u(((*l_563) = (l_569[7] &= ((VECTOR(uint16_t, 4))(p_725->g_568.s9b87)).x)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x64C2L, 9L)).xxxyyyxxxxxyxxyy)).sb)) != ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_570.yw)), 0x037AEEFE5570D5E5L, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 4UL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_571.s73)))), 0x049A86509960D519L)).s2 & (safe_sub_func_uint32_t_u_u(l_574, (((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(p_725->g_577.s4053)).hi, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(p_725->g_578.s77021424)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_579.s26212425)).s3204406024771534)).s44, (int16_t)p_725->g_97.x, (int16_t)((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((p_725->g_208[0][2][0] && (p_725->g_121 = 1UL)), 0x7E5DL, l_483, 0x5CDDL, (-10L), (l_584 = (l_483 = ((*l_581) &= ((((safe_unary_minus_func_uint64_t_u(18446744073709551609UL)) , p_725->g_218.f4) , l_574) != p_725->g_174.f1)))), p_33, ((VECTOR(int16_t, 2))(0x36DEL)), l_551, 0L, ((VECTOR(int16_t, 2))(0x6CC0L)), ((VECTOR(int16_t, 2))((-1L))), 0x165EL)).even)).s25)), 1L, 0x5D98L)), p_725->g_218.f4, p_725->l_comm_values[(safe_mod_func_uint32_t_u_u(p_725->tid, 6))], 0x313DL, ((VECTOR(int16_t, 8))(0x6AEEL)))).s84, ((VECTOR(int16_t, 2))((-1L)))))).odd))).xyyxyxyxyyyyyxxy, ((VECTOR(int16_t, 16))(0x167BL))))).sa5, ((VECTOR(int16_t, 2))((-8L)))))).xyyx, (int16_t)0x30D7L))))), p_725->g_91.y, 0x2144L, p_33, 0x5941L, p_33, (-1L), (-3L), ((VECTOR(int16_t, 2))(0x31A5L)), ((VECTOR(int16_t, 2))(0x3663L)), 2L)).s50, ((VECTOR(int16_t, 2))(0x2AA4L))))).yyyyyxxy, ((VECTOR(int16_t, 8))(1L))))).s12)).yyyyxxyx))).s22, ((VECTOR(int16_t, 2))(2L))))), (-5L), 0x49CCL)).wzzyzzzy)).s17))).hi, 4)) ^ l_551) > (**p_725->g_341))))) >= l_574)) , p_725->g_217.f1) , p_725->g_585)), ((VECTOR(uint64_t, 4))(0x2C039A8E470F7AA9L)), 0xF2FC1E55F01E7AD9L, 18446744073709551606UL)).s21)).yxxxxyxy, ((VECTOR(uint64_t, 8))(1UL)), ((VECTOR(uint64_t, 8))(0xCF70D577CC7522B0L))))).s4655632362363736, ((VECTOR(uint64_t, 16))(0xD1B49B720217E519L))))).odd))), ((VECTOR(uint64_t, 4))(0UL)), 0xDA09FDE8915D6E47L, 0xFFF85E37D9A928E3L)).s8 <= 18446744073709551615UL) ^ 0x55AD5F8A8219155AL);
                        --l_591;
                    }
                }
                l_594 ^= l_551;
            }
            else
            { /* block id: 256 */
                uint16_t l_606 = 0x0DA3L;
                int64_t l_618 = 0x5FE978F0AB4C7DBFL;
                int32_t *l_622 = &l_551;
                p_725->g_336.s7 ^= (l_483 , ((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_597.s6650664440430551)).s0, ((((0x60L || (safe_sub_func_int8_t_s_s(0x7FL, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(((((safe_mod_func_uint8_t_u_u(((**l_500) = l_606), (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u(FAKE_DIVERGE(p_725->global_1_offset, get_global_id(1), 10))), ((safe_unary_minus_func_int8_t_s((((((p_725->g_218.f3 & ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(0x22L, 1L)).yxxyyxxxyxyxyyyy, ((VECTOR(int8_t, 2))(3L, 0x25L)).yxxxyxxyxxxyxxxx, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_611.s21)), (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(l_614.ywwzzxywwzxzyzzz)), ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(l_615.xz)).xxxxyxyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(p_33, ((p_725->g_114 <= (p_33 ^ (((safe_sub_func_uint32_t_u_u(p_33, l_359.y)) <= l_606) ^ l_611.s0))) > 0UL), 9UL, 0xD223L)).zxzxyxww, ((VECTOR(uint16_t, 8))(2UL))))).hi)).zwwxywwx))), ((VECTOR(uint16_t, 8))(0x3AB5L))))).s1443346457664601))).s1, l_475.y)), l_618, (-4L), ((VECTOR(int8_t, 2))(0L)), 0x2EL)), ((VECTOR(int8_t, 8))(0x58L))))).s0721530073427271))).s4a5c)).y) , (void*)0) != (void*)0) == l_359.y) , p_725->g_217.f1))) | l_606))))) > p_725->g_47) >= 0x26L) && l_359.z), p_725->g_47)), 1))))) & (-1L)) > p_33) | l_619))) || GROUP_DIVERGE(0, 1)));
                for (p_725->g_171 = (-22); (p_725->g_171 < (-9)); p_725->g_171 = safe_add_func_uint16_t_u_u(p_725->g_171, 1))
                { /* block id: 261 */
                    int32_t *l_623 = (void*)0;
                    return l_623;
                }
            }
            p_725->g_585 = &p_725->g_586;
        }
    }
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_725->g_208 p_725->g_114 p_725->g_217 p_725->g_171 p_725->g_218.f4 p_725->g_comm_values p_725->g_6 p_725->g_218.f2 p_725->g_47 p_725->g_91 p_725->g_132 p_725->g_218.f1
 * writes: p_725->g_208 p_725->g_114 p_725->g_135.f1 p_725->g_171 p_725->g_218 p_725->g_6 p_725->g_47 p_725->g_36
 */
int32_t ** func_52(int32_t * p_53, int32_t  p_54, int32_t * p_55, struct S2 * p_725)
{ /* block id: 53 */
    int32_t *l_207[8] = {&p_725->g_47,&p_725->g_47,&p_725->g_47,&p_725->g_47,&p_725->g_47,&p_725->g_47,&p_725->g_47,&p_725->g_47};
    uint16_t l_228[2];
    int32_t **l_257 = &p_725->g_36;
    int32_t l_259 = 0x2EFCB469L;
    int32_t l_262[2];
    int32_t *l_304 = &l_259;
    int32_t **l_303 = &l_304;
    uint8_t *l_316[5][10] = {{(void*)0,&p_725->g_107[2][1],&p_725->g_107[0][5],&p_725->g_107[0][4],&p_725->g_107[0][5],(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,&p_725->g_107[3][3]},{(void*)0,&p_725->g_107[2][1],&p_725->g_107[0][5],&p_725->g_107[0][4],&p_725->g_107[0][5],(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,&p_725->g_107[3][3]},{(void*)0,&p_725->g_107[2][1],&p_725->g_107[0][5],&p_725->g_107[0][4],&p_725->g_107[0][5],(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,&p_725->g_107[3][3]},{(void*)0,&p_725->g_107[2][1],&p_725->g_107[0][5],&p_725->g_107[0][4],&p_725->g_107[0][5],(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,&p_725->g_107[3][3]},{(void*)0,&p_725->g_107[2][1],&p_725->g_107[0][5],&p_725->g_107[0][4],&p_725->g_107[0][5],(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,&p_725->g_107[3][3]}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_228[i] = 0x7A9DL;
    for (i = 0; i < 2; i++)
        l_262[i] = (-2L);
    p_725->g_208[2][3][0]++;
    for (p_725->g_114 = (-4); (p_725->g_114 >= (-25)); p_725->g_114 = safe_sub_func_uint64_t_u_u(p_725->g_114, 2))
    { /* block id: 57 */
        VECTOR(uint8_t, 16) l_226 = (VECTOR(uint8_t, 16))(0xEDL, (VECTOR(uint8_t, 4))(0xEDL, (VECTOR(uint8_t, 2))(0xEDL, 0xFFL), 0xFFL), 0xFFL, 0xEDL, 0xFFL, (VECTOR(uint8_t, 2))(0xEDL, 0xFFL), (VECTOR(uint8_t, 2))(0xEDL, 0xFFL), 0xEDL, 0xFFL, 0xEDL, 0xFFL);
        int32_t l_229 = 0x543C003FL;
        int32_t l_232 = (-1L);
        int32_t l_243 = (-1L);
        int32_t l_244 = 0x0D41E633L;
        int32_t l_246 = 0x5D6D456DL;
        int32_t l_247 = 0x3CC41D52L;
        int32_t l_248 = 0L;
        int32_t l_250 = 1L;
        int32_t l_251 = 0x6CA14CBFL;
        int32_t l_252 = (-9L);
        uint8_t *l_258 = &p_725->g_107[0][2];
        int8_t l_261 = 4L;
        int32_t l_263 = 1L;
        int32_t l_264 = 0x1838AB1AL;
        VECTOR(int32_t, 2) l_265 = (VECTOR(int32_t, 2))(6L, 1L);
        int64_t l_266[3][7][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
        int8_t l_267 = 0x0BL;
        int32_t l_268 = (-1L);
        VECTOR(int8_t, 16) l_294 = (VECTOR(int8_t, 16))(0x22L, (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, (-1L)), (-1L)), (-1L), 0x22L, (-1L), (VECTOR(int8_t, 2))(0x22L, (-1L)), (VECTOR(int8_t, 2))(0x22L, (-1L)), 0x22L, (-1L), 0x22L, (-1L));
        int32_t **l_305[4][10][6] = {{{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304}},{{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304}},{{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304}},{{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304},{&l_304,&l_304,&l_304,&l_304,(void*)0,&l_304}}};
        uint64_t *l_319 = &p_725->g_208[2][3][0];
        int16_t l_323 = 0x3C94L;
        int i, j, k;
        for (p_725->g_135.f1 = 25; (p_725->g_135.f1 > 40); p_725->g_135.f1++)
        { /* block id: 60 */
            int32_t l_227[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int32_t l_233 = 0x3227EC48L;
            int32_t l_235 = 3L;
            int32_t l_236 = 0x39A254CAL;
            int32_t l_237 = 0x314A5014L;
            int32_t l_238 = (-4L);
            int32_t l_240 = (-5L);
            int32_t l_242[2][7][8] = {{{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL}},{{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL},{0x28C489FEL,0x711BB0F3L,(-1L),0x7872246EL,0x7C48EE5FL,(-3L),0x28C489FEL,0x2BD0DBEDL}}};
            int64_t l_249 = 0x3A867D6B02618B65L;
            int8_t l_260 = 0L;
            uint8_t l_269 = 0xB7L;
            int i, j, k;
            for (p_725->g_171 = 0; (p_725->g_171 == (-27)); p_725->g_171--)
            { /* block id: 63 */
                int16_t l_223 = (-10L);
                int32_t **l_224[10] = {&p_725->g_36,&l_207[4],&p_725->g_36,&p_725->g_36,&l_207[4],&p_725->g_36,&p_725->g_36,&l_207[4],&p_725->g_36,&p_725->g_36};
                int8_t l_225 = 5L;
                uint32_t l_253 = 0x00B93FB0L;
                int i;
                p_725->g_218 = p_725->g_217;
                l_229 ^= (((VECTOR(int32_t, 2))(0x1AE07926L, 0x2E3B0F15L)).hi && ((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u(l_223, ((*p_53) & p_54))) < (((p_55 = &p_725->g_171) != (void*)0) <= p_725->g_218.f4)) ^ l_225), ((l_226.sb ^ l_227[3]) | l_228[1]))) < 9UL));
                if ((!(safe_rshift_func_int8_t_s_u(p_725->g_comm_values[p_725->tid], p_54))))
                { /* block id: 67 */
                    l_232 = (*p_53);
                }
                else
                { /* block id: 69 */
                    int32_t l_234 = 0x4B0AA02AL;
                    int32_t l_239 = 0x46F31271L;
                    int32_t l_241 = 2L;
                    int32_t l_245 = 0x51EDD185L;
                    int32_t **l_256[10][7][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int i, j, k;
                    --l_253;
                    return l_257;
                }
            }
            l_235 ^= ((*p_53) = (p_54 | (l_258 == (p_54 , l_258))));
            l_269++;
        }
        for (p_725->g_218.f4 = 0; (p_725->g_218.f4 == (-26)); --p_725->g_218.f4)
        { /* block id: 80 */
            VECTOR(uint32_t, 4) l_296 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL);
            int32_t l_327 = 0x663186CCL;
            int i;
            for (l_267 = 0; (l_267 != (-25)); l_267--)
            { /* block id: 83 */
                int32_t l_293 = 0x0A2B359CL;
                uint8_t *l_301 = (void*)0;
                uint8_t *l_302[9][8] = {{&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5]},{&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5]},{&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5]},{&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5]},{&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5]},{&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5]},{&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5]},{&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5]},{&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5],&p_725->g_107[0][5],(void*)0,(void*)0,&p_725->g_107[0][5]}};
                uint16_t *l_320 = &p_725->g_218.f3;
                int i, j;
                p_725->g_47 |= ((((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((p_725->g_6.y ^= (safe_div_func_uint32_t_u_u((((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_725->g_286.s6216527164571260)).sdd0a)).zxzzyyzx)).s5043457161236043, ((VECTOR(uint16_t, 8))(0xE502L, 0x9295L, p_725->g_107[0][5], ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_725->g_287.xyzw)), (safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((l_246 ^= ((((void*)0 != &p_54) || ((safe_unary_minus_func_uint16_t_u(65530UL)) > (l_293 | ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_294.se886)).hi)).lo))) < ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(0UL, 0x26923EC3L, 5UL, 0x3CB57BB4L)).odd, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0UL, 4294967292UL, ((((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(p_725->g_295.xxyx)).xwzzwwzw, ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_296.zzyyxwzy)))).lo, ((VECTOR(uint32_t, 8))(0x873D97C7L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_296.z, ((safe_div_func_int32_t_s_s((p_725->g_218.f5 &= (safe_mod_func_uint64_t_u_u((((((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x70A5CB390D5A0965L, 4UL)).xyxxyyxxxxxyyyyx)))))))).s3 || p_54) > p_725->g_62) | p_54), p_725->g_171))), 4294967290UL)) || p_725->g_82.f0), 0UL, ((VECTOR(uint32_t, 2))(0UL)), 4294967295UL, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 8))(4294967289UL)))).s4ca6)), 4294967295UL, 0xE90AE7DDL, 0UL)).odd))).wyzwxxxx, ((VECTOR(uint32_t, 8))(4294967289UL))))).lo, ((VECTOR(uint32_t, 4))(4294967294UL)), ((VECTOR(uint32_t, 4))(0x91A8EF8EL))))).z , p_54) == p_725->g_171), ((VECTOR(uint32_t, 2))(0x968ECBB8L)), ((VECTOR(uint32_t, 2))(5UL)), 1UL)).s4557065255271526)).s9e2f, ((VECTOR(uint32_t, 4))(1UL))))).even))), 1UL, p_725->g_217.f6, GROUP_DIVERGE(2, 1), l_252, ((VECTOR(uint32_t, 4))(0x7CE015FDL)), p_54, l_266[1][1][0], l_244, ((VECTOR(uint32_t, 2))(4294967295UL)), 8UL)).even)).s52)).xxyxyxxyxyxxyyxx)).s4 , (-1L)) != l_293))), p_54)), p_725->g_135.f1)), p_725->g_107[0][5], 9L, (-10L)))))).s51, ((VECTOR(uint16_t, 2))(3UL))))), l_293, 65535UL, 0xCA6DL)).s5544636771530702))).s2 > p_54), 1L))), 4)), 6)), 0L)) , 0xBDL), p_725->g_218.f2)) && p_54) , l_303) != l_305[0][4][2]);
                l_293 = (safe_sub_func_uint64_t_u_u(0x1B6E86E5901B5941L, 0x5BC7749F9C7B3B3AL));
                (*l_257) = func_56(((((4294967295UL ^ (safe_mul_func_uint8_t_u_u(l_296.w, (((safe_mul_func_uint8_t_u_u(((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(8L, 0x0F879473FA19F4CAL)), 0x32FB2497426B4B0FL, 0L)).w > ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(18446744073709551606UL, 0UL)).yyxxyxyxxxxyyxyy)).s1) , ((65534UL > ((*p_53) > ((VECTOR(uint32_t, 4))(FAKE_DIVERGE(p_725->global_2_offset, get_global_id(2), 10), 7UL, 4294967289UL, 4294967287UL)).y)) >= (safe_add_func_int8_t_s_s(p_54, ((l_316[2][0] != (void*)0) || GROUP_DIVERGE(2, 1)))))), ((safe_add_func_uint16_t_u_u(((*l_320) = ((((l_319 == &p_725->g_208[1][1][0]) > p_54) != l_293) , 0UL)), p_725->g_91.y)) , p_54))) < p_54) , l_296.w)))) == (*p_53)) <= p_725->g_132[1][8][0]) , GROUP_DIVERGE(1, 1)), p_725->g_218.f1, p_53, p_725);
            }
            (*p_53) = (*p_53);
            for (l_259 = 0; (l_259 > (-24)); l_259 = safe_sub_func_uint8_t_u_u(l_259, 8))
            { /* block id: 95 */
                uint64_t l_324[3][9] = {{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}};
                int i, j;
                ++l_324[2][0];
                l_327 = l_324[1][3];
            }
        }
    }
    return &p_725->g_36;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_56(uint64_t  p_57, uint64_t  p_58, int32_t * p_59, struct S2 * p_725)
{ /* block id: 49 */
    int32_t *l_197 = (void*)0;
    l_197 = p_59;
    return l_197;
}


/* ------------------------------------------ */
/* 
 * reads : p_725->g_82 p_725->g_47 p_725->g_91 p_725->g_97 p_725->g_107 p_725->g_112 p_725->l_comm_values p_725->g_114 p_725->g_37 p_725->g_132 p_725->g_135 p_725->g_143 p_725->g_36 p_725->g_148 p_725->g_121 p_725->g_6 p_725->g_149 p_725->g_171 p_725->g_174 p_725->g_196
 * writes: p_725->g_107 p_725->g_132 p_725->g_143 p_725->g_114 p_725->g_36 p_725->g_121 p_725->g_47 p_725->g_169 p_725->g_171 p_725->g_82 p_725->g_37
 */
int32_t * func_63(int32_t ** p_64, struct S2 * p_725)
{ /* block id: 13 */
    int8_t l_83[4][8][7] = {{{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)}},{{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)}},{{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)}},{{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)},{(-1L),0x38L,(-1L),(-1L),0x38L,(-1L),(-1L)}}};
    int64_t l_86 = (-8L);
    VECTOR(int64_t, 8) l_90 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L));
    VECTOR(uint64_t, 16) l_92 = (VECTOR(uint64_t, 16))(0xAF958129354101DEL, (VECTOR(uint64_t, 4))(0xAF958129354101DEL, (VECTOR(uint64_t, 2))(0xAF958129354101DEL, 5UL), 5UL), 5UL, 0xAF958129354101DEL, 5UL, (VECTOR(uint64_t, 2))(0xAF958129354101DEL, 5UL), (VECTOR(uint64_t, 2))(0xAF958129354101DEL, 5UL), 0xAF958129354101DEL, 5UL, 0xAF958129354101DEL, 5UL);
    VECTOR(uint64_t, 2) l_93 = (VECTOR(uint64_t, 2))(0x98675463EB591F11L, 9UL);
    VECTOR(uint32_t, 8) l_94 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 4294967291UL), 4294967291UL), 4294967291UL, 2UL, 4294967291UL);
    int32_t *l_176[2];
    int32_t l_188 = 0x14EF7227L;
    uint64_t l_189 = 18446744073709551607UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_176[i] = (void*)0;
    if ((p_64 != (void*)0))
    { /* block id: 14 */
        uint8_t l_81 = 0x5DL;
        uint8_t *l_106 = &p_725->g_107[0][5];
        int32_t *l_113 = &p_725->g_114;
        int32_t *l_116 = &p_725->g_114;
        int32_t **l_115 = &l_116;
        int32_t *l_118 = &p_725->g_114;
        int32_t **l_117 = &l_118;
        uint64_t l_119 = 3UL;
        uint64_t *l_120[1];
        int32_t l_122 = (-1L);
        int32_t *l_170 = &p_725->g_171;
        int i;
        for (i = 0; i < 1; i++)
            l_120[i] = &p_725->g_121;
        (*l_170) &= (safe_unary_minus_func_uint32_t_u(func_66((((safe_div_func_uint32_t_u_u((((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u(l_81, 0)) , (p_725->g_82 , l_83[1][6][4])) < (0x53B041FD75004CB6L < p_725->g_47)) <= (((safe_lshift_func_int8_t_s_u((~l_86), 6)) && 0xC5765B8FL) < (l_122 ^= (((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_90.s1532)))).even)))).odd ^ ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(p_725->g_91.wyxwzwxy)).s32, ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 16))(l_92.s0d685feb4f4c75cb)), ((VECTOR(uint64_t, 2))(0x82728A352BA2A9D1L, 0x5776C017785D0731L)).yyxxxyxyyyxyxxxy))).s71))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL)).yxyyyxyy)), FAKE_DIVERGE(p_725->group_1_offset, get_group_id(1), 10), 0x89C257DC1769429AL, ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL)).xxyy)).xywwwyzx))).odd, ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 16))(0xA4C6F4952A9FC2AAL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_93.yyyxxxyyyxxyyxyx)))).hi)), 0xE10008B8BEBC8DAAL, ((VECTOR(uint64_t, 4))(0x27EF69D77BA142A3L, 0x2B9BF124FD362E7FL, 0x321F6031B584B135L, 0x5749DF91AB292FDAL)), 0x4B629CB9F3FC713CL, 18446744073709551615UL)).lo, ((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_94.s6535375602175710)).sa1ae)).zwxwyywzwzwxzyzw)).odd, ((VECTOR(uint32_t, 8))((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(p_725->g_97.yx)).lo, (((VECTOR(uint32_t, 8))(7UL, 0x8CABC829L, 0xCCFBDE21L, 0xA4EC9946L, (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((+(safe_rshift_func_uint8_t_u_s(((*l_106)--), 7))), ((safe_rshift_func_int16_t_s_u((((VECTOR(int64_t, 8))(p_725->g_112.wzwxyyxy)).s4 != (l_113 != ((*l_117) = ((*l_115) = (void*)0)))), 13)) ^ l_81))), 6)), l_81)), 0x9C656FD3L, 0UL, 7UL)).s3 ^ 1UL))), 5UL, ((VECTOR(uint32_t, 2))(7UL)), 1UL, FAKE_DIVERGE(p_725->local_2_offset, get_local_id(2), 10), 0xA3139005L, 8UL)))))))).lo, ((VECTOR(uint64_t, 4))(0UL))))))).even)).s0) , l_81) , GROUP_DIVERGE(0, 1)) <= p_725->l_comm_values[(safe_mod_func_uint32_t_u_u(p_725->tid, 6))]), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0x6D02A7A2EF32379FL)))).zwwyzxxw)).s0 > l_119))) ^ l_94.s4), p_725->g_91.w)) , 0xEFAC64C0L) && 0UL)))), 0UL)), l_119)), p_725->g_91.y)) != l_92.sd) <= 8L), 0x4EF08B4EL)) || l_92.s7) < p_725->g_114), p_725->g_37.x, l_113, p_725->g_91.x, p_725)));
        (*l_170) |= (-3L);
        for (p_725->g_121 = (-23); (p_725->g_121 == 41); ++p_725->g_121)
        { /* block id: 34 */
            volatile struct S1 *l_175 = &p_725->g_82;
            (*l_175) = p_725->g_174;
        }
        (*p_64) = l_176[1];
    }
    else
    { /* block id: 38 */
        uint64_t l_179 = 0x65E865EF7B771A4FL;
        int32_t l_182 = 0x02D271B4L;
        int32_t l_183 = (-1L);
        int32_t l_184 = 0x27BC0B30L;
        int32_t l_185 = (-10L);
        int32_t l_186[2];
        int16_t l_187 = (-6L);
        int i;
        for (i = 0; i < 2; i++)
            l_186[i] = (-1L);
        for (l_86 = 0; (l_86 < 27); l_86 = safe_add_func_uint16_t_u_u(l_86, 2))
        { /* block id: 41 */
            l_179--;
        }
        --l_189;
        p_725->g_37.x &= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), 5)), (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_725->g_196.s36733573)).s25)).odd != 250UL)));
    }
    (*p_64) = l_176[1];
    return &p_725->g_171;
}


/* ------------------------------------------ */
/* 
 * reads : p_725->g_132 p_725->g_37 p_725->g_135 p_725->g_143 p_725->g_36 p_725->g_148 p_725->g_114 p_725->g_121 p_725->g_6 p_725->g_149 p_725->g_47
 * writes: p_725->g_132 p_725->g_107 p_725->g_143 p_725->g_114 p_725->g_36 p_725->g_121 p_725->g_47 p_725->g_169
 */
uint32_t  func_66(int32_t  p_67, uint16_t  p_68, int32_t * p_69, uint64_t  p_70, struct S2 * p_725)
{ /* block id: 19 */
    uint64_t l_129 = 0xBB43ABC618C9A287L;
    uint16_t *l_130 = (void*)0;
    uint16_t *l_131 = &p_725->g_132[1][8][0];
    uint8_t *l_138 = (void*)0;
    uint8_t *l_139 = (void*)0;
    uint8_t *l_140 = (void*)0;
    uint8_t *l_141 = &p_725->g_107[0][1];
    uint32_t *l_142[6] = {&p_725->g_143,&p_725->g_143,&p_725->g_143,&p_725->g_143,&p_725->g_143,&p_725->g_143};
    int32_t **l_150 = (void*)0;
    int32_t **l_151 = (void*)0;
    int32_t l_154 = 0x4F51DF57L;
    VECTOR(uint16_t, 8) l_159 = (VECTOR(uint16_t, 8))(0xFFD3L, (VECTOR(uint16_t, 4))(0xFFD3L, (VECTOR(uint16_t, 2))(0xFFD3L, 1UL), 1UL), 1UL, 0xFFD3L, 1UL);
    uint64_t *l_162 = &p_725->g_121;
    int32_t *l_167 = &p_725->g_47;
    int i;
    (*p_69) = ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((*l_131) ^= l_129) <= ((safe_mod_func_uint32_t_u_u(p_725->g_37.x, p_68)) <= (p_725->g_135 , GROUP_DIVERGE(0, 1)))), (safe_rshift_func_int8_t_s_s((((*l_141) = (!0xCEL)) == 0x7EL), (((p_725->g_143--) <= ((safe_div_func_int16_t_s_s((p_725->g_36 == p_725->g_148), p_68)) > l_129)) & p_67))))) && (-8L)), p_725->g_114)), p_68)) > p_70);
    (*l_167) &= ((*p_69) = ((&p_725->g_47 != (p_725->g_36 = &p_725->g_47)) | (((0x2DF67BF6E9D8676EL ^ (safe_div_func_uint64_t_u_u((l_154 < ((safe_div_func_uint8_t_u_u(((FAKE_DIVERGE(p_725->global_0_offset, get_global_id(0), 10) < (safe_rshift_func_uint16_t_u_u(1UL, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(65526UL, 0x825AL)), ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(l_159.s12414072)), ((VECTOR(uint16_t, 4))((((safe_lshift_func_uint16_t_u_s(0UL, 6)) > ((*l_162) |= p_67)) | (((safe_sub_func_int64_t_s_s(p_725->g_6.w, (safe_div_func_uint64_t_u_u(l_159.s1, 0xC15747386AE05FD4L)))) >= 0x5FACB869L) != p_67)), 65528UL, 0UL, 0x7734L)).xyxwywxw))), ((VECTOR(uint16_t, 8))(0xAD2AL))))).s63))).odd))) != (*p_725->g_148)), p_67)) | p_725->g_37.y)), p_725->g_143))) || 0x7AL) & 0x3347L)));
    p_725->g_169[5][1] = &p_725->g_82;
    return (*p_725->g_148);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S2 c_726;
    struct S2* p_725 = &c_726;
    struct S2 c_727 = {
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x59L), 0x59L), // p_725->g_6
        (VECTOR(int32_t, 2))((-1L), 1L), // p_725->g_37
        (void*)0, // p_725->g_36
        0x55DFF904L, // p_725->g_47
        (-6L), // p_725->g_62
        {1L,0x9B165989L}, // p_725->g_82
        (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 4UL), 4UL), // p_725->g_91
        (VECTOR(int8_t, 2))(0x00L, 0x18L), // p_725->g_97
        {{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL}}, // p_725->g_107
        (VECTOR(int64_t, 4))(0x2EB942D218AE0BF9L, (VECTOR(int64_t, 2))(0x2EB942D218AE0BF9L, (-1L)), (-1L)), // p_725->g_112
        1L, // p_725->g_114
        0xDC88A89D9E5B03DFL, // p_725->g_121
        {{{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL}},{{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL}},{{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL}},{{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL}},{{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL}},{{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL}},{{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL}},{{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL}},{{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL},{0x8051L,0xC6CEL}}}, // p_725->g_132
        {0x49143F0A4CBC2570L,0x750C58BAL}, // p_725->g_135
        3UL, // p_725->g_143
        0xFD839D00L, // p_725->g_149
        &p_725->g_149, // p_725->g_148
        (void*)0, // p_725->g_168
        {{&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82},{&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82},{&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82},{&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82},{&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82},{&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82,&p_725->g_82}}, // p_725->g_169
        (-1L), // p_725->g_171
        {-1L,0UL}, // p_725->g_174
        (VECTOR(int8_t, 8))(0x33L, (VECTOR(int8_t, 4))(0x33L, (VECTOR(int8_t, 2))(0x33L, (-1L)), (-1L)), (-1L), 0x33L, (-1L)), // p_725->g_196
        {{{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}},{{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}},{{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}},{{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}},{{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}}}, // p_725->g_208
        {1UL,0xEFD32755L,0x89B1115BL,0x9180L,0x5DF9CED6L,0x40F5759DL,0x1A8E55CBL}, // p_725->g_217
        {0x1F2FL,0x6A073343L,0xB09333DFL,0xFF57L,0x5DB8473DL,0L,0x34E3B226L}, // p_725->g_218
        (VECTOR(uint16_t, 8))(0xF7D6L, (VECTOR(uint16_t, 4))(0xF7D6L, (VECTOR(uint16_t, 2))(0xF7D6L, 65535UL), 65535UL), 65535UL, 0xF7D6L, 65535UL), // p_725->g_286
        (VECTOR(int16_t, 4))(0x09F4L, (VECTOR(int16_t, 2))(0x09F4L, 0x2176L), 0x2176L), // p_725->g_287
        (VECTOR(uint32_t, 2))(0xA6D22028L, 4294967295UL), // p_725->g_295
        (void*)0, // p_725->g_330
        &p_725->g_330, // p_725->g_329
        {-1L,9UL}, // p_725->g_331
        {0x38BE8CDB908DC2A6L,8UL}, // p_725->g_332
        (VECTOR(int32_t, 8))(0x5501E037L, (VECTOR(int32_t, 4))(0x5501E037L, (VECTOR(int32_t, 2))(0x5501E037L, (-1L)), (-1L)), (-1L), 0x5501E037L, (-1L)), // p_725->g_336
        &p_725->g_143, // p_725->g_342
        &p_725->g_342, // p_725->g_341
        {&p_725->g_341,&p_725->g_341,&p_725->g_341,&p_725->g_341}, // p_725->g_340
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_725->g_358
        {-9L,0UL}, // p_725->g_360
        (VECTOR(uint64_t, 8))(0xCC92AD8741B1B65CL, (VECTOR(uint64_t, 4))(0xCC92AD8741B1B65CL, (VECTOR(uint64_t, 2))(0xCC92AD8741B1B65CL, 1UL), 1UL), 1UL, 0xCC92AD8741B1B65CL, 1UL), // p_725->g_467
        (VECTOR(int8_t, 4))(0x6DL, (VECTOR(int8_t, 2))(0x6DL, 0x32L), 0x32L), // p_725->g_476
        {0x338B0E704A1149A4L,0x338B0E704A1149A4L,0x338B0E704A1149A4L,0x338B0E704A1149A4L,0x338B0E704A1149A4L,0x338B0E704A1149A4L}, // p_725->g_485
        &p_725->g_107[0][5], // p_725->g_506
        &p_725->g_506, // p_725->g_505
        &p_725->g_505, // p_725->g_504
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x56FE1012L), 0x56FE1012L), 0x56FE1012L, 0L, 0x56FE1012L, (VECTOR(int32_t, 2))(0L, 0x56FE1012L), (VECTOR(int32_t, 2))(0L, 0x56FE1012L), 0L, 0x56FE1012L, 0L, 0x56FE1012L), // p_725->g_509
        (VECTOR(int32_t, 8))(0x30075026L, (VECTOR(int32_t, 4))(0x30075026L, (VECTOR(int32_t, 2))(0x30075026L, 0x32042116L), 0x32042116L), 0x32042116L, 0x30075026L, 0x32042116L), // p_725->g_510
        0UL, // p_725->g_511
        {0x6748L,3UL,4294967295UL,0xED96L,0x06644925L,0x0323C499L,0x589DA43AL}, // p_725->g_515
        (VECTOR(uint16_t, 16))(0xEDA1L, (VECTOR(uint16_t, 4))(0xEDA1L, (VECTOR(uint16_t, 2))(0xEDA1L, 0x494CL), 0x494CL), 0x494CL, 0xEDA1L, 0x494CL, (VECTOR(uint16_t, 2))(0xEDA1L, 0x494CL), (VECTOR(uint16_t, 2))(0xEDA1L, 0x494CL), 0xEDA1L, 0x494CL, 0xEDA1L, 0x494CL), // p_725->g_568
        (VECTOR(int16_t, 8))(0x4DC9L, (VECTOR(int16_t, 4))(0x4DC9L, (VECTOR(int16_t, 2))(0x4DC9L, (-1L)), (-1L)), (-1L), 0x4DC9L, (-1L)), // p_725->g_577
        (VECTOR(int16_t, 8))(0x7900L, (VECTOR(int16_t, 4))(0x7900L, (VECTOR(int16_t, 2))(0x7900L, 0x2A01L), 0x2A01L), 0x2A01L, 0x7900L, 0x2A01L), // p_725->g_578
        &p_725->g_218.f3, // p_725->g_586
        &p_725->g_586, // p_725->g_585
        {{{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171}},{{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171}},{{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171}},{{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171},{(void*)0,(void*)0,&p_725->g_515.f5,&p_725->g_171}}}, // p_725->g_645
        &p_725->g_645[2][6][3], // p_725->g_644
        (VECTOR(int16_t, 4))(0x004CL, (VECTOR(int16_t, 2))(0x004CL, 0x6362L), 0x6362L), // p_725->g_654
        (VECTOR(int16_t, 4))(0x6F9FL, (VECTOR(int16_t, 2))(0x6F9FL, 0x70D2L), 0x70D2L), // p_725->g_656
        (VECTOR(int32_t, 2))(0x476EF35AL, 0x28B914BEL), // p_725->g_666
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4804L), 0x4804L), 0x4804L, 0L, 0x4804L), // p_725->g_688
        {{{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0}},{{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0}},{{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0}},{{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0}},{{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0}},{{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0}},{{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0}},{{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0}},{{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0},{&p_725->g_330,&p_725->g_330,(void*)0}}}, // p_725->g_710
        0, // p_725->v_collective
        sequence_input[get_global_id(0)], // p_725->global_0_offset
        sequence_input[get_global_id(1)], // p_725->global_1_offset
        sequence_input[get_global_id(2)], // p_725->global_2_offset
        sequence_input[get_local_id(0)], // p_725->local_0_offset
        sequence_input[get_local_id(1)], // p_725->local_1_offset
        sequence_input[get_local_id(2)], // p_725->local_2_offset
        sequence_input[get_group_id(0)], // p_725->group_0_offset
        sequence_input[get_group_id(1)], // p_725->group_1_offset
        sequence_input[get_group_id(2)], // p_725->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_725->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_726 = c_727;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_725);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_725->g_6.x, "p_725->g_6.x", print_hash_value);
    transparent_crc(p_725->g_6.y, "p_725->g_6.y", print_hash_value);
    transparent_crc(p_725->g_6.z, "p_725->g_6.z", print_hash_value);
    transparent_crc(p_725->g_6.w, "p_725->g_6.w", print_hash_value);
    transparent_crc(p_725->g_37.x, "p_725->g_37.x", print_hash_value);
    transparent_crc(p_725->g_37.y, "p_725->g_37.y", print_hash_value);
    transparent_crc(p_725->g_47, "p_725->g_47", print_hash_value);
    transparent_crc(p_725->g_62, "p_725->g_62", print_hash_value);
    transparent_crc(p_725->g_82.f0, "p_725->g_82.f0", print_hash_value);
    transparent_crc(p_725->g_82.f1, "p_725->g_82.f1", print_hash_value);
    transparent_crc(p_725->g_91.x, "p_725->g_91.x", print_hash_value);
    transparent_crc(p_725->g_91.y, "p_725->g_91.y", print_hash_value);
    transparent_crc(p_725->g_91.z, "p_725->g_91.z", print_hash_value);
    transparent_crc(p_725->g_91.w, "p_725->g_91.w", print_hash_value);
    transparent_crc(p_725->g_97.x, "p_725->g_97.x", print_hash_value);
    transparent_crc(p_725->g_97.y, "p_725->g_97.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_725->g_107[i][j], "p_725->g_107[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_725->g_112.x, "p_725->g_112.x", print_hash_value);
    transparent_crc(p_725->g_112.y, "p_725->g_112.y", print_hash_value);
    transparent_crc(p_725->g_112.z, "p_725->g_112.z", print_hash_value);
    transparent_crc(p_725->g_112.w, "p_725->g_112.w", print_hash_value);
    transparent_crc(p_725->g_114, "p_725->g_114", print_hash_value);
    transparent_crc(p_725->g_121, "p_725->g_121", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_725->g_132[i][j][k], "p_725->g_132[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_725->g_135.f0, "p_725->g_135.f0", print_hash_value);
    transparent_crc(p_725->g_135.f1, "p_725->g_135.f1", print_hash_value);
    transparent_crc(p_725->g_143, "p_725->g_143", print_hash_value);
    transparent_crc(p_725->g_149, "p_725->g_149", print_hash_value);
    transparent_crc(p_725->g_171, "p_725->g_171", print_hash_value);
    transparent_crc(p_725->g_174.f0, "p_725->g_174.f0", print_hash_value);
    transparent_crc(p_725->g_174.f1, "p_725->g_174.f1", print_hash_value);
    transparent_crc(p_725->g_196.s0, "p_725->g_196.s0", print_hash_value);
    transparent_crc(p_725->g_196.s1, "p_725->g_196.s1", print_hash_value);
    transparent_crc(p_725->g_196.s2, "p_725->g_196.s2", print_hash_value);
    transparent_crc(p_725->g_196.s3, "p_725->g_196.s3", print_hash_value);
    transparent_crc(p_725->g_196.s4, "p_725->g_196.s4", print_hash_value);
    transparent_crc(p_725->g_196.s5, "p_725->g_196.s5", print_hash_value);
    transparent_crc(p_725->g_196.s6, "p_725->g_196.s6", print_hash_value);
    transparent_crc(p_725->g_196.s7, "p_725->g_196.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_725->g_208[i][j][k], "p_725->g_208[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_725->g_217.f0, "p_725->g_217.f0", print_hash_value);
    transparent_crc(p_725->g_217.f1, "p_725->g_217.f1", print_hash_value);
    transparent_crc(p_725->g_217.f2, "p_725->g_217.f2", print_hash_value);
    transparent_crc(p_725->g_217.f3, "p_725->g_217.f3", print_hash_value);
    transparent_crc(p_725->g_217.f4, "p_725->g_217.f4", print_hash_value);
    transparent_crc(p_725->g_217.f5, "p_725->g_217.f5", print_hash_value);
    transparent_crc(p_725->g_217.f6, "p_725->g_217.f6", print_hash_value);
    transparent_crc(p_725->g_218.f0, "p_725->g_218.f0", print_hash_value);
    transparent_crc(p_725->g_218.f1, "p_725->g_218.f1", print_hash_value);
    transparent_crc(p_725->g_218.f2, "p_725->g_218.f2", print_hash_value);
    transparent_crc(p_725->g_218.f3, "p_725->g_218.f3", print_hash_value);
    transparent_crc(p_725->g_218.f4, "p_725->g_218.f4", print_hash_value);
    transparent_crc(p_725->g_218.f5, "p_725->g_218.f5", print_hash_value);
    transparent_crc(p_725->g_218.f6, "p_725->g_218.f6", print_hash_value);
    transparent_crc(p_725->g_286.s0, "p_725->g_286.s0", print_hash_value);
    transparent_crc(p_725->g_286.s1, "p_725->g_286.s1", print_hash_value);
    transparent_crc(p_725->g_286.s2, "p_725->g_286.s2", print_hash_value);
    transparent_crc(p_725->g_286.s3, "p_725->g_286.s3", print_hash_value);
    transparent_crc(p_725->g_286.s4, "p_725->g_286.s4", print_hash_value);
    transparent_crc(p_725->g_286.s5, "p_725->g_286.s5", print_hash_value);
    transparent_crc(p_725->g_286.s6, "p_725->g_286.s6", print_hash_value);
    transparent_crc(p_725->g_286.s7, "p_725->g_286.s7", print_hash_value);
    transparent_crc(p_725->g_287.x, "p_725->g_287.x", print_hash_value);
    transparent_crc(p_725->g_287.y, "p_725->g_287.y", print_hash_value);
    transparent_crc(p_725->g_287.z, "p_725->g_287.z", print_hash_value);
    transparent_crc(p_725->g_287.w, "p_725->g_287.w", print_hash_value);
    transparent_crc(p_725->g_295.x, "p_725->g_295.x", print_hash_value);
    transparent_crc(p_725->g_295.y, "p_725->g_295.y", print_hash_value);
    transparent_crc(p_725->g_331.f0, "p_725->g_331.f0", print_hash_value);
    transparent_crc(p_725->g_331.f1, "p_725->g_331.f1", print_hash_value);
    transparent_crc(p_725->g_332.f0, "p_725->g_332.f0", print_hash_value);
    transparent_crc(p_725->g_332.f1, "p_725->g_332.f1", print_hash_value);
    transparent_crc(p_725->g_336.s0, "p_725->g_336.s0", print_hash_value);
    transparent_crc(p_725->g_336.s1, "p_725->g_336.s1", print_hash_value);
    transparent_crc(p_725->g_336.s2, "p_725->g_336.s2", print_hash_value);
    transparent_crc(p_725->g_336.s3, "p_725->g_336.s3", print_hash_value);
    transparent_crc(p_725->g_336.s4, "p_725->g_336.s4", print_hash_value);
    transparent_crc(p_725->g_336.s5, "p_725->g_336.s5", print_hash_value);
    transparent_crc(p_725->g_336.s6, "p_725->g_336.s6", print_hash_value);
    transparent_crc(p_725->g_336.s7, "p_725->g_336.s7", print_hash_value);
    transparent_crc(p_725->g_358.s0, "p_725->g_358.s0", print_hash_value);
    transparent_crc(p_725->g_358.s1, "p_725->g_358.s1", print_hash_value);
    transparent_crc(p_725->g_358.s2, "p_725->g_358.s2", print_hash_value);
    transparent_crc(p_725->g_358.s3, "p_725->g_358.s3", print_hash_value);
    transparent_crc(p_725->g_358.s4, "p_725->g_358.s4", print_hash_value);
    transparent_crc(p_725->g_358.s5, "p_725->g_358.s5", print_hash_value);
    transparent_crc(p_725->g_358.s6, "p_725->g_358.s6", print_hash_value);
    transparent_crc(p_725->g_358.s7, "p_725->g_358.s7", print_hash_value);
    transparent_crc(p_725->g_358.s8, "p_725->g_358.s8", print_hash_value);
    transparent_crc(p_725->g_358.s9, "p_725->g_358.s9", print_hash_value);
    transparent_crc(p_725->g_358.sa, "p_725->g_358.sa", print_hash_value);
    transparent_crc(p_725->g_358.sb, "p_725->g_358.sb", print_hash_value);
    transparent_crc(p_725->g_358.sc, "p_725->g_358.sc", print_hash_value);
    transparent_crc(p_725->g_358.sd, "p_725->g_358.sd", print_hash_value);
    transparent_crc(p_725->g_358.se, "p_725->g_358.se", print_hash_value);
    transparent_crc(p_725->g_358.sf, "p_725->g_358.sf", print_hash_value);
    transparent_crc(p_725->g_360.f0, "p_725->g_360.f0", print_hash_value);
    transparent_crc(p_725->g_360.f1, "p_725->g_360.f1", print_hash_value);
    transparent_crc(p_725->g_467.s0, "p_725->g_467.s0", print_hash_value);
    transparent_crc(p_725->g_467.s1, "p_725->g_467.s1", print_hash_value);
    transparent_crc(p_725->g_467.s2, "p_725->g_467.s2", print_hash_value);
    transparent_crc(p_725->g_467.s3, "p_725->g_467.s3", print_hash_value);
    transparent_crc(p_725->g_467.s4, "p_725->g_467.s4", print_hash_value);
    transparent_crc(p_725->g_467.s5, "p_725->g_467.s5", print_hash_value);
    transparent_crc(p_725->g_467.s6, "p_725->g_467.s6", print_hash_value);
    transparent_crc(p_725->g_467.s7, "p_725->g_467.s7", print_hash_value);
    transparent_crc(p_725->g_476.x, "p_725->g_476.x", print_hash_value);
    transparent_crc(p_725->g_476.y, "p_725->g_476.y", print_hash_value);
    transparent_crc(p_725->g_476.z, "p_725->g_476.z", print_hash_value);
    transparent_crc(p_725->g_476.w, "p_725->g_476.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_725->g_485[i], "p_725->g_485[i]", print_hash_value);

    }
    transparent_crc(p_725->g_509.s0, "p_725->g_509.s0", print_hash_value);
    transparent_crc(p_725->g_509.s1, "p_725->g_509.s1", print_hash_value);
    transparent_crc(p_725->g_509.s2, "p_725->g_509.s2", print_hash_value);
    transparent_crc(p_725->g_509.s3, "p_725->g_509.s3", print_hash_value);
    transparent_crc(p_725->g_509.s4, "p_725->g_509.s4", print_hash_value);
    transparent_crc(p_725->g_509.s5, "p_725->g_509.s5", print_hash_value);
    transparent_crc(p_725->g_509.s6, "p_725->g_509.s6", print_hash_value);
    transparent_crc(p_725->g_509.s7, "p_725->g_509.s7", print_hash_value);
    transparent_crc(p_725->g_509.s8, "p_725->g_509.s8", print_hash_value);
    transparent_crc(p_725->g_509.s9, "p_725->g_509.s9", print_hash_value);
    transparent_crc(p_725->g_509.sa, "p_725->g_509.sa", print_hash_value);
    transparent_crc(p_725->g_509.sb, "p_725->g_509.sb", print_hash_value);
    transparent_crc(p_725->g_509.sc, "p_725->g_509.sc", print_hash_value);
    transparent_crc(p_725->g_509.sd, "p_725->g_509.sd", print_hash_value);
    transparent_crc(p_725->g_509.se, "p_725->g_509.se", print_hash_value);
    transparent_crc(p_725->g_509.sf, "p_725->g_509.sf", print_hash_value);
    transparent_crc(p_725->g_510.s0, "p_725->g_510.s0", print_hash_value);
    transparent_crc(p_725->g_510.s1, "p_725->g_510.s1", print_hash_value);
    transparent_crc(p_725->g_510.s2, "p_725->g_510.s2", print_hash_value);
    transparent_crc(p_725->g_510.s3, "p_725->g_510.s3", print_hash_value);
    transparent_crc(p_725->g_510.s4, "p_725->g_510.s4", print_hash_value);
    transparent_crc(p_725->g_510.s5, "p_725->g_510.s5", print_hash_value);
    transparent_crc(p_725->g_510.s6, "p_725->g_510.s6", print_hash_value);
    transparent_crc(p_725->g_510.s7, "p_725->g_510.s7", print_hash_value);
    transparent_crc(p_725->g_511, "p_725->g_511", print_hash_value);
    transparent_crc(p_725->g_515.f0, "p_725->g_515.f0", print_hash_value);
    transparent_crc(p_725->g_515.f1, "p_725->g_515.f1", print_hash_value);
    transparent_crc(p_725->g_515.f2, "p_725->g_515.f2", print_hash_value);
    transparent_crc(p_725->g_515.f3, "p_725->g_515.f3", print_hash_value);
    transparent_crc(p_725->g_515.f4, "p_725->g_515.f4", print_hash_value);
    transparent_crc(p_725->g_515.f5, "p_725->g_515.f5", print_hash_value);
    transparent_crc(p_725->g_515.f6, "p_725->g_515.f6", print_hash_value);
    transparent_crc(p_725->g_568.s0, "p_725->g_568.s0", print_hash_value);
    transparent_crc(p_725->g_568.s1, "p_725->g_568.s1", print_hash_value);
    transparent_crc(p_725->g_568.s2, "p_725->g_568.s2", print_hash_value);
    transparent_crc(p_725->g_568.s3, "p_725->g_568.s3", print_hash_value);
    transparent_crc(p_725->g_568.s4, "p_725->g_568.s4", print_hash_value);
    transparent_crc(p_725->g_568.s5, "p_725->g_568.s5", print_hash_value);
    transparent_crc(p_725->g_568.s6, "p_725->g_568.s6", print_hash_value);
    transparent_crc(p_725->g_568.s7, "p_725->g_568.s7", print_hash_value);
    transparent_crc(p_725->g_568.s8, "p_725->g_568.s8", print_hash_value);
    transparent_crc(p_725->g_568.s9, "p_725->g_568.s9", print_hash_value);
    transparent_crc(p_725->g_568.sa, "p_725->g_568.sa", print_hash_value);
    transparent_crc(p_725->g_568.sb, "p_725->g_568.sb", print_hash_value);
    transparent_crc(p_725->g_568.sc, "p_725->g_568.sc", print_hash_value);
    transparent_crc(p_725->g_568.sd, "p_725->g_568.sd", print_hash_value);
    transparent_crc(p_725->g_568.se, "p_725->g_568.se", print_hash_value);
    transparent_crc(p_725->g_568.sf, "p_725->g_568.sf", print_hash_value);
    transparent_crc(p_725->g_577.s0, "p_725->g_577.s0", print_hash_value);
    transparent_crc(p_725->g_577.s1, "p_725->g_577.s1", print_hash_value);
    transparent_crc(p_725->g_577.s2, "p_725->g_577.s2", print_hash_value);
    transparent_crc(p_725->g_577.s3, "p_725->g_577.s3", print_hash_value);
    transparent_crc(p_725->g_577.s4, "p_725->g_577.s4", print_hash_value);
    transparent_crc(p_725->g_577.s5, "p_725->g_577.s5", print_hash_value);
    transparent_crc(p_725->g_577.s6, "p_725->g_577.s6", print_hash_value);
    transparent_crc(p_725->g_577.s7, "p_725->g_577.s7", print_hash_value);
    transparent_crc(p_725->g_578.s0, "p_725->g_578.s0", print_hash_value);
    transparent_crc(p_725->g_578.s1, "p_725->g_578.s1", print_hash_value);
    transparent_crc(p_725->g_578.s2, "p_725->g_578.s2", print_hash_value);
    transparent_crc(p_725->g_578.s3, "p_725->g_578.s3", print_hash_value);
    transparent_crc(p_725->g_578.s4, "p_725->g_578.s4", print_hash_value);
    transparent_crc(p_725->g_578.s5, "p_725->g_578.s5", print_hash_value);
    transparent_crc(p_725->g_578.s6, "p_725->g_578.s6", print_hash_value);
    transparent_crc(p_725->g_578.s7, "p_725->g_578.s7", print_hash_value);
    transparent_crc(p_725->g_654.x, "p_725->g_654.x", print_hash_value);
    transparent_crc(p_725->g_654.y, "p_725->g_654.y", print_hash_value);
    transparent_crc(p_725->g_654.z, "p_725->g_654.z", print_hash_value);
    transparent_crc(p_725->g_654.w, "p_725->g_654.w", print_hash_value);
    transparent_crc(p_725->g_656.x, "p_725->g_656.x", print_hash_value);
    transparent_crc(p_725->g_656.y, "p_725->g_656.y", print_hash_value);
    transparent_crc(p_725->g_656.z, "p_725->g_656.z", print_hash_value);
    transparent_crc(p_725->g_656.w, "p_725->g_656.w", print_hash_value);
    transparent_crc(p_725->g_666.x, "p_725->g_666.x", print_hash_value);
    transparent_crc(p_725->g_666.y, "p_725->g_666.y", print_hash_value);
    transparent_crc(p_725->g_688.s0, "p_725->g_688.s0", print_hash_value);
    transparent_crc(p_725->g_688.s1, "p_725->g_688.s1", print_hash_value);
    transparent_crc(p_725->g_688.s2, "p_725->g_688.s2", print_hash_value);
    transparent_crc(p_725->g_688.s3, "p_725->g_688.s3", print_hash_value);
    transparent_crc(p_725->g_688.s4, "p_725->g_688.s4", print_hash_value);
    transparent_crc(p_725->g_688.s5, "p_725->g_688.s5", print_hash_value);
    transparent_crc(p_725->g_688.s6, "p_725->g_688.s6", print_hash_value);
    transparent_crc(p_725->g_688.s7, "p_725->g_688.s7", print_hash_value);
    transparent_crc(p_725->v_collective, "p_725->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 92; i++)
            transparent_crc(p_725->g_special_values[i + 92 * get_linear_group_id()], "p_725->g_special_values[i + 92 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_725->l_comm_values[get_linear_local_id()], "p_725->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_725->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_725->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
