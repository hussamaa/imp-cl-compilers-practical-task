// --atomics 9 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 22,79,5 -l 2,1,1
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
{0,1}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 4230008595

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_19[1];
    VECTOR(int32_t, 8) g_20;
    int32_t g_23;
    int32_t g_49[1][7][3];
    int32_t *g_48;
    volatile VECTOR(int32_t, 8) g_53;
    int32_t g_71;
    int32_t * volatile g_70;
    int32_t *g_77;
    int32_t **g_76;
    volatile VECTOR(uint16_t, 2) g_83;
    uint64_t g_94[10][7][1];
    uint64_t g_103;
    int32_t g_111;
    int8_t g_136;
    int8_t g_138;
    int16_t g_152[10];
    volatile VECTOR(int32_t, 4) g_155;
    int32_t ***g_170;
    int32_t ****g_169;
    volatile uint64_t g_203;
    VECTOR(uint8_t, 4) g_210;
    int32_t *g_216;
    uint16_t g_224[6][1][1];
    uint16_t *g_223;
    uint16_t *g_228;
    volatile VECTOR(uint8_t, 8) g_248;
    volatile uint8_t *g_266[10][9][2];
    volatile VECTOR(uint8_t, 16) g_316;
    volatile VECTOR(int8_t, 2) g_321;
    uint64_t g_346[8][2];
    int32_t g_348;
    int16_t g_349;
    VECTOR(uint16_t, 8) g_361;
    int64_t g_375;
    volatile VECTOR(int16_t, 2) g_422;
    VECTOR(int16_t, 2) g_423;
    VECTOR(int16_t, 2) g_424;
    VECTOR(int8_t, 16) g_432;
    volatile VECTOR(int64_t, 16) g_454;
    VECTOR(int64_t, 8) g_455;
    VECTOR(int64_t, 2) g_457;
    uint32_t g_470;
    VECTOR(int16_t, 2) g_495;
    volatile int64_t g_500;
    volatile int64_t g_501[7][5];
    volatile int64_t g_502;
    volatile int64_t * volatile g_499[7][1][5];
    volatile int64_t * volatile *g_498;
    uint32_t g_547;
    volatile VECTOR(int16_t, 16) g_550;
    VECTOR(int8_t, 16) g_560;
    VECTOR(int8_t, 16) g_562;
    VECTOR(uint32_t, 4) g_577;
    VECTOR(uint8_t, 8) g_594;
    volatile VECTOR(int32_t, 8) g_620;
    uint16_t **g_622[7];
    uint16_t *** volatile g_621;
    uint16_t **g_659;
    volatile VECTOR(int32_t, 8) g_684;
    volatile VECTOR(int32_t, 8) g_689;
    volatile int32_t *g_738[1];
    volatile int32_t * volatile *g_737;
    volatile int32_t * volatile **g_736;
    volatile int32_t * volatile ** volatile *g_735;
    volatile int32_t * volatile ** volatile **g_734;
    volatile int32_t * volatile ** volatile *** volatile g_733;
    VECTOR(int16_t, 16) g_746;
    int8_t g_750;
    int64_t *g_753;
    int64_t **g_752[7][2][6];
    volatile VECTOR(int16_t, 2) g_774;
    int32_t *****g_843;
    int32_t ******g_842;
    volatile VECTOR(uint32_t, 16) g_858;
    volatile VECTOR(uint32_t, 2) g_859;
    volatile VECTOR(uint8_t, 16) g_863;
    VECTOR(int8_t, 2) g_864;
    uint64_t *g_875[1];
    uint64_t **g_874;
    uint64_t g_925;
    int64_t *g_953[10][2];
    volatile VECTOR(uint16_t, 8) g_966;
    VECTOR(int16_t, 4) g_967;
    volatile VECTOR(uint64_t, 4) g_990;
    uint64_t g_1001;
    VECTOR(int32_t, 2) g_1006;
    volatile VECTOR(uint16_t, 2) g_1076;
    volatile VECTOR(uint16_t, 4) g_1103;
    volatile uint32_t * volatile g_1169;
    volatile uint32_t * volatile *g_1168;
    volatile VECTOR(uint32_t, 2) g_1244;
    VECTOR(uint8_t, 4) g_1277;
    volatile VECTOR(int16_t, 16) g_1519;
    uint64_t g_1520[4];
    VECTOR(int32_t, 8) g_1558;
    volatile VECTOR(uint8_t, 16) g_1578;
    VECTOR(uint8_t, 16) g_1579;
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
uint64_t  func_1(struct S0 * p_1604);
int64_t  func_2(uint32_t  p_3, int32_t  p_4, uint16_t  p_5, uint64_t  p_6, struct S0 * p_1604);
int32_t  func_7(int64_t  p_8, uint32_t  p_9, int32_t  p_10, struct S0 * p_1604);
int8_t  func_13(int64_t  p_14, int32_t  p_15, uint64_t  p_16, uint64_t  p_17, uint64_t  p_18, struct S0 * p_1604);
uint32_t  func_24(uint32_t  p_25, int8_t  p_26, int32_t * p_27, int32_t  p_28, int32_t  p_29, struct S0 * p_1604);
uint32_t  func_30(int8_t  p_31, int32_t * p_32, int64_t  p_33, int32_t * p_34, struct S0 * p_1604);
uint8_t  func_37(int32_t * p_38, int16_t  p_39, int32_t * p_40, struct S0 * p_1604);
int32_t * func_41(uint32_t  p_42, int32_t * p_43, struct S0 * p_1604);
int16_t  func_44(int32_t  p_45, int32_t * p_46, uint32_t  p_47, struct S0 * p_1604);
int32_t * func_56(int32_t * p_57, int8_t  p_58, int32_t  p_59, int64_t  p_60, struct S0 * p_1604);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1604->l_comm_values p_1604->g_19 p_1604->g_20 p_1604->g_48 p_1604->g_53 p_1604->g_76 p_1604->g_83 p_1604->g_71 p_1604->g_94 p_1604->g_49 p_1604->g_111 p_1604->g_comm_values p_1604->g_103 p_1604->g_138 p_1604->g_70 p_1604->g_136 p_1604->g_170 p_1604->g_203 p_1604->g_216 p_1604->g_77 p_1604->g_223 p_1604->g_248 p_1604->g_224 p_1604->g_266 p_1604->g_228 p_1604->g_210 p_1604->g_152 p_1604->g_316 p_1604->g_321 p_1604->g_348 p_1604->g_361 p_1604->g_349 p_1604->g_169 p_1604->g_422 p_1604->g_423 p_1604->g_424 p_1604->g_432 p_1604->g_454 p_1604->g_495 p_1604->g_498 p_1604->g_455 p_1604->g_547 p_1604->g_550 p_1604->g_560 p_1604->g_562 p_1604->g_577 p_1604->g_594 p_1604->g_621 p_1604->g_375 p_1604->g_684 p_1604->g_689 p_1604->g_501 p_1604->g_659 p_1604->g_733 p_1604->g_746 p_1604->g_620 p_1604->g_750 p_1604->g_752 p_1604->g_155 p_1604->g_734 p_1604->g_774 p_1604->g_737 p_1604->g_842 p_1604->g_470 p_1604->g_736 p_1604->g_738 p_1604->g_858 p_1604->g_859 p_1604->g_863 p_1604->g_864 p_1604->g_874 p_1604->g_735 p_1604->g_925 p_1604->g_753 p_1604->g_875 p_1604->g_966 p_1604->g_967 p_1604->g_457 p_1604->g_990 p_1604->g_1006 p_1604->g_1076 p_1604->g_1168 p_1604->g_1244 p_1604->g_1001 p_1604->g_1519 p_1604->g_1520 p_1604->g_1558 p_1604->g_346 p_1604->g_1578 p_1604->g_1579 p_1604->g_1277
 * writes: p_1604->g_23 p_1604->g_77 p_1604->g_71 p_1604->g_94 p_1604->g_111 p_1604->g_136 p_1604->g_103 p_1604->g_138 p_1604->g_210 p_1604->g_223 p_1604->g_228 p_1604->g_169 p_1604->g_comm_values p_1604->g_49 p_1604->g_346 p_1604->g_348 p_1604->g_349 p_1604->g_547 p_1604->g_152 p_1604->g_622 p_1604->g_659 p_1604->g_562 p_1604->g_224 p_1604->g_738 p_1604->g_457 p_1604->g_925 p_1604->g_375 p_1604->g_76 p_1604->g_953 p_1604->g_470 p_1604->g_1001 p_1604->g_750 p_1604->g_875 p_1604->g_216 p_1604->g_753
 */
uint64_t  func_1(struct S0 * p_1604)
{ /* block id: 4 */
    int32_t l_11 = 0x71A0734FL;
    VECTOR(uint64_t, 16) l_12 = (VECTOR(uint64_t, 16))(0xBFB3A4DF6F97812AL, (VECTOR(uint64_t, 4))(0xBFB3A4DF6F97812AL, (VECTOR(uint64_t, 2))(0xBFB3A4DF6F97812AL, 1UL), 1UL), 1UL, 0xBFB3A4DF6F97812AL, 1UL, (VECTOR(uint64_t, 2))(0xBFB3A4DF6F97812AL, 1UL), (VECTOR(uint64_t, 2))(0xBFB3A4DF6F97812AL, 1UL), 0xBFB3A4DF6F97812AL, 1UL, 0xBFB3A4DF6F97812AL, 1UL);
    VECTOR(int32_t, 4) l_21 = (VECTOR(int32_t, 4))(0x72F34E40L, (VECTOR(int32_t, 2))(0x72F34E40L, (-1L)), (-1L));
    int32_t *l_22 = &p_1604->g_23;
    uint64_t *l_1514 = &p_1604->g_103;
    VECTOR(uint8_t, 4) l_1577 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL);
    int16_t **l_1586 = (void*)0;
    int16_t ***l_1587 = &l_1586;
    int16_t *l_1589 = (void*)0;
    int16_t **l_1588 = &l_1589;
    VECTOR(int8_t, 8) l_1590 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x5CL), 0x5CL), 0x5CL, 0L, 0x5CL);
    int64_t **l_1599 = &p_1604->g_753;
    int64_t *l_1600 = &p_1604->g_375;
    int16_t *l_1601 = &p_1604->g_152[1];
    int32_t l_1602 = 0x10E1BD31L;
    uint32_t l_1603 = 4294967291UL;
    int i;
    atomic_or(&p_1604->g_atomic_reduction[get_linear_group_id()], ((!func_2((func_7(l_11, p_1604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1604->tid, 2))], (((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(4UL, 18446744073709551615UL)).yxxyxyxy)).s6471713301511666, ((VECTOR(uint64_t, 2))(l_12.s2e)).xxyxyyxxxyxyyxxx))).hi, (uint64_t)((*l_1514) = (func_13(p_1604->g_19[0], ((*l_22) = ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(p_1604->g_20.s3401772152601153)).sb0, (int32_t)((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_21.wwywzxyx)).lo)).odd)).even, (int32_t)p_1604->g_19[0]))).lo), ((l_11 , func_24((~func_30((((((0x43D9L == (safe_mul_func_uint8_t_u_u(func_37(func_41((func_44(l_12.s3, p_1604->g_48, p_1604->g_20.s4, p_1604) > l_12.sf), l_22, p_1604), l_11, l_22, p_1604), p_1604->g_20.s4))) ^ 0x7F14043C088A37A6L) > 0x1BD9L) , 4294967291UL) , p_1604->g_136), p_1604->g_48, p_1604->g_455.s1, p_1604->g_48, p_1604)), l_21.x, p_1604->g_216, l_21.w, l_21.x, p_1604)) <= l_21.x), p_1604->g_361.s2, p_1604->g_432.s1, p_1604) ^ l_12.s1))))).s2 <= GROUP_DIVERGE(1, 1)), p_1604) , l_21.z), l_21.x, p_1604->g_594.s3, p_1604->g_423.y, p_1604)) , l_11) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1604->v_collective += p_1604->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    l_1602 &= ((VECTOR(int32_t, 4))((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_1577.yywz)).hi)), GROUP_DIVERGE(0, 1), ((VECTOR(uint8_t, 4))(p_1604->g_1578.sfa08)), 0x15L)))).lo, ((VECTOR(uint8_t, 4))(p_1604->g_1579.sd32b))))).x | (l_21.z && ((*l_1601) = ((0x465056D2L >= (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(p_1604->g_1277.z, (safe_mod_func_int64_t_s_s(((((*l_1587) = l_1586) != (l_1588 = l_1588)) != p_1604->g_20.s1), l_12.s0)))), (((VECTOR(int8_t, 4))(l_1590.s6044)).y != (safe_add_func_uint16_t_u_u(0xCD87L, (safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((((((*l_1599) = l_1514) != l_1600) , (void*)0) == l_1600), 1)), 10)) & GROUP_DIVERGE(1, 1)), 0x1751C00DL)))))))) || 0x2BE1271FL)))), l_1590.s3)), l_11)), 1L, 0L, (-5L))).x;
    return l_1603;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_2(uint32_t  p_3, int32_t  p_4, uint16_t  p_5, uint64_t  p_6, struct S0 * p_1604)
{ /* block id: 695 */
    int32_t l_1572 = 0x1232699FL;
    return l_1572;
}


/* ------------------------------------------ */
/* 
 * reads : p_1604->g_1519 p_1604->g_1520 p_1604->g_746 p_1604->g_349 p_1604->g_223 p_1604->g_224 p_1604->g_216 p_1604->g_316 p_1604->g_111 p_1604->g_1558 p_1604->g_874 p_1604->g_875 p_1604->g_346 p_1604->g_94 p_1604->g_19 p_1604->g_70 p_1604->g_71
 * writes: p_1604->g_216 p_1604->g_349 p_1604->g_659 p_1604->g_224 p_1604->g_111 p_1604->g_71
 */
int32_t  func_7(int64_t  p_8, uint32_t  p_9, int32_t  p_10, struct S0 * p_1604)
{ /* block id: 669 */
    int32_t *l_1515[4][1][1];
    int32_t **l_1516[8][4][1] = {{{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77}},{{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77}},{{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77}},{{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77}},{{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77}},{{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77}},{{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77}},{{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77},{&p_1604->g_77}}};
    uint16_t ***l_1523 = (void*)0;
    uint16_t ***l_1525[1];
    uint16_t ****l_1524 = &l_1525[0];
    int32_t *l_1533 = &p_1604->g_71;
    int64_t l_1537 = 8L;
    VECTOR(uint64_t, 2) l_1545 = (VECTOR(uint64_t, 2))(0xB9108262B9AC8C18L, 0xA8ABF10AB53F2ECBL);
    int64_t l_1555[4][4] = {{1L,1L,0L,0x4467946E76A274B7L},{1L,1L,0L,0x4467946E76A274B7L},{1L,1L,0L,0x4467946E76A274B7L},{1L,1L,0L,0x4467946E76A274B7L}};
    int8_t *l_1561 = &p_1604->g_138;
    int64_t *l_1562 = &l_1555[1][2];
    uint64_t *l_1570 = &p_1604->g_1001;
    uint64_t **l_1569 = &l_1570;
    int32_t l_1571 = 0x31844C89L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1515[i][j][k] = &p_1604->g_111;
        }
    }
    for (i = 0; i < 1; i++)
        l_1525[i] = &p_1604->g_622[2];
    p_1604->g_216 = (l_1515[2][0][0] = l_1515[2][0][0]);
    if ((safe_mul_func_uint8_t_u_u((((!((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_1604->g_1519.s9d89)).hi)))).odd) ^ (p_10 >= ((65529UL >= p_1604->g_1520[2]) , (safe_mul_func_uint8_t_u_u((0UL || (l_1523 != ((*l_1524) = l_1523))), (!p_9)))))) > (((safe_unary_minus_func_uint32_t_u(p_10)) & (safe_mod_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((p_10 & (-9L)), p_9)) || 1L), p_1604->g_746.s9)) == 0xDB02520C403E3437L), p_9))) < p_8)), 0x43L)))
    { /* block id: 673 */
        int8_t l_1534 = 1L;
        int32_t l_1535[7][8][3] = {{{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L}},{{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L}},{{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L}},{{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L}},{{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L}},{{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L}},{{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L},{6L,0x27E213BEL,0x6BFFE5E7L}}};
        int32_t l_1536[10] = {0x4A18BCFAL,0x096D0C8FL,0L,0x096D0C8FL,0x4A18BCFAL,0x4A18BCFAL,0x096D0C8FL,0L,0x096D0C8FL,0x4A18BCFAL};
        uint8_t l_1538 = 2UL;
        int i, j, k;
        l_1533 = (void*)0;
        --l_1538;
    }
    else
    { /* block id: 676 */
        uint64_t l_1552 = 6UL;
        for (p_1604->g_349 = 0; (p_1604->g_349 > 8); p_1604->g_349 = safe_add_func_uint32_t_u_u(p_1604->g_349, 7))
        { /* block id: 679 */
            uint16_t **l_1548 = &p_1604->g_228;
            int32_t l_1549 = (-5L);
            (*p_1604->g_216) = ((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(l_1545.xxyyxyyx)).s7, p_10)) , (safe_lshift_func_int16_t_s_s(((p_1604->g_659 = l_1548) == ((--(*p_1604->g_223)) , (void*)0)), 0)));
            l_1552++;
            if (l_1555[2][1])
                continue;
            l_1549 = (p_1604->g_316.s5 , (safe_lshift_func_int16_t_s_u(p_9, p_9)));
        }
        (*p_1604->g_216) ^= 0x10C58630L;
    }
    (*p_1604->g_216) = 0L;
    (*p_1604->g_216) ^= (~((*p_1604->g_70) = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1604->g_1558.s60)), ((**p_1604->g_874) , (((l_1561 != l_1561) & (((*l_1562) = 0L) & (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((p_1604->g_19[0] < ((p_10 != (safe_rshift_func_int16_t_s_u((l_1562 == ((*l_1569) = l_1562)), 3))) && l_1571)), p_8)) && GROUP_DIVERGE(1, 1)), 3UL)))) <= 0x85F32354AB5BAEEEL)), ((VECTOR(int32_t, 2))(0x0EF4CB27L)), ((VECTOR(int32_t, 2))(0x45DEF40EL)), 0x4B06FDF4L)))).s2 <= (*p_1604->g_70))));
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1604->g_577 p_1604->g_774 p_1604->g_432 p_1604->g_874 p_1604->g_875 p_1604->g_94 p_1604->g_736 p_1604->g_737 p_1604->g_560 p_1604->g_734 p_1604->g_735 p_1604->g_321 p_1604->g_216 p_1604->g_71 p_1604->g_1168 p_1604->g_1244 p_1604->g_375 p_1604->g_348 p_1604->g_210 p_1604->g_361 p_1604->g_1001 p_1604->g_48 p_1604->g_457 p_1604->g_70
 * writes: p_1604->g_94 p_1604->g_738 p_1604->g_750 p_1604->g_71 p_1604->g_875 p_1604->g_346 p_1604->g_210 p_1604->g_138 p_1604->g_216 p_1604->g_49
 */
int8_t  func_13(int64_t  p_14, int32_t  p_15, uint64_t  p_16, uint64_t  p_17, uint64_t  p_18, struct S0 * p_1604)
{ /* block id: 432 */
    uint16_t *l_1089 = &p_1604->g_224[1][0][0];
    int32_t l_1094[6][7] = {{0x5124D5B1L,0x5124D5B1L,0x6393C08BL,0L,0x4FA908DFL,0L,0x6393C08BL},{0x5124D5B1L,0x5124D5B1L,0x6393C08BL,0L,0x4FA908DFL,0L,0x6393C08BL},{0x5124D5B1L,0x5124D5B1L,0x6393C08BL,0L,0x4FA908DFL,0L,0x6393C08BL},{0x5124D5B1L,0x5124D5B1L,0x6393C08BL,0L,0x4FA908DFL,0L,0x6393C08BL},{0x5124D5B1L,0x5124D5B1L,0x6393C08BL,0L,0x4FA908DFL,0L,0x6393C08BL},{0x5124D5B1L,0x5124D5B1L,0x6393C08BL,0L,0x4FA908DFL,0L,0x6393C08BL}};
    int32_t l_1112[2];
    VECTOR(uint16_t, 16) l_1128 = (VECTOR(uint16_t, 16))(0x67C8L, (VECTOR(uint16_t, 4))(0x67C8L, (VECTOR(uint16_t, 2))(0x67C8L, 0UL), 0UL), 0UL, 0x67C8L, 0UL, (VECTOR(uint16_t, 2))(0x67C8L, 0UL), (VECTOR(uint16_t, 2))(0x67C8L, 0UL), 0x67C8L, 0UL, 0x67C8L, 0UL);
    int32_t ****l_1135 = &p_1604->g_170;
    int32_t **l_1138 = &p_1604->g_216;
    int64_t l_1150 = 0x57D4AB936EA2F741L;
    int32_t l_1162 = 0x0FE08ADEL;
    uint64_t l_1164 = 0x0B22554A6CAF847BL;
    VECTOR(int16_t, 4) l_1230 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x4A0AL), 0x4A0AL);
    VECTOR(int32_t, 8) l_1231 = (VECTOR(int32_t, 8))(0x69FD1BADL, (VECTOR(int32_t, 4))(0x69FD1BADL, (VECTOR(int32_t, 2))(0x69FD1BADL, (-1L)), (-1L)), (-1L), 0x69FD1BADL, (-1L));
    uint8_t *l_1232 = (void*)0;
    VECTOR(int16_t, 4) l_1247 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-9L)), (-9L));
    int64_t l_1255 = 0x25C27493880D5653L;
    int32_t *l_1259 = (void*)0;
    int32_t ******l_1260[2][8] = {{&p_1604->g_843,(void*)0,(void*)0,&p_1604->g_843,&p_1604->g_843,(void*)0,(void*)0,&p_1604->g_843},{&p_1604->g_843,(void*)0,(void*)0,&p_1604->g_843,&p_1604->g_843,(void*)0,(void*)0,&p_1604->g_843}};
    VECTOR(uint8_t, 8) l_1269 = (VECTOR(uint8_t, 8))(0x4BL, (VECTOR(uint8_t, 4))(0x4BL, (VECTOR(uint8_t, 2))(0x4BL, 255UL), 255UL), 255UL, 0x4BL, 255UL);
    int16_t l_1285 = 0x2626L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1112[i] = 0x2B254B8CL;
    if (((p_1604->g_577.w | p_15) , (safe_lshift_func_int8_t_s_u((((p_18 , 0x44B1491DB19872CFL) , l_1089) != (void*)0), ((p_14 >= (safe_sub_func_uint64_t_u_u(((**p_1604->g_874) ^= (safe_mul_func_uint8_t_u_u((l_1094[5][3] , (safe_div_func_uint32_t_u_u((p_1604->g_774.x | p_1604->g_432.sd), p_17))), p_1604->g_432.s7))), p_14))) , GROUP_DIVERGE(0, 1))))))
    { /* block id: 434 */
        uint8_t l_1097 = 0UL;
        int32_t l_1100 = 1L;
        l_1097--;
        l_1100 = 1L;
        (**p_1604->g_736) = (void*)0;
    }
    else
    { /* block id: 438 */
        uint64_t l_1107 = 1UL;
        VECTOR(uint64_t, 8) l_1121 = (VECTOR(uint64_t, 8))(0xAF6771C9030A257CL, (VECTOR(uint64_t, 4))(0xAF6771C9030A257CL, (VECTOR(uint64_t, 2))(0xAF6771C9030A257CL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xAF6771C9030A257CL, 18446744073709551615UL);
        int32_t l_1127 = 0x77D1CB98L;
        int32_t l_1151 = 0x46109639L;
        int32_t l_1152 = 0x2543AE5FL;
        VECTOR(int32_t, 2) l_1155 = (VECTOR(int32_t, 2))(9L, 0x35B5F5B2L);
        VECTOR(uint32_t, 2) l_1243 = (VECTOR(uint32_t, 2))(4294967290UL, 1UL);
        uint8_t *l_1248 = (void*)0;
        uint8_t *l_1249 = (void*)0;
        uint8_t *l_1250 = (void*)0;
        uint8_t *l_1251 = (void*)0;
        uint8_t *l_1252 = (void*)0;
        uint8_t *l_1253 = (void*)0;
        uint8_t *l_1254[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t *l_1256 = (void*)0;
        int8_t *l_1257 = &p_1604->g_138;
        int32_t *l_1258 = &l_1094[0][3];
        int i;
        for (p_18 = 29; (p_18 > 19); p_18 = safe_sub_func_uint32_t_u_u(p_18, 5))
        { /* block id: 441 */
            int32_t **l_1106 = &p_1604->g_216;
            uint8_t *l_1110 = (void*)0;
            uint8_t *l_1111[9][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int8_t *l_1124 = &p_1604->g_750;
            int8_t *l_1125 = &p_1604->g_136;
            int32_t l_1126 = 0x7B516216L;
            int32_t l_1154[8][7][2] = {{{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L}},{{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L}},{{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L}},{{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L}},{{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L}},{{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L}},{{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L}},{{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L},{0x3015107DL,0x76C045C0L}}};
            uint64_t *l_1167 = &p_1604->g_346[5][0];
            int i, j, k;
            l_1126 &= (((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(p_1604->g_1103.xw)), (uint16_t)l_1094[3][6]))), 0x330AL)).y | (((0xDE51CDC5267B08BFL || (safe_add_func_uint8_t_u_u(((l_1106 != ((+p_1604->g_560.s2) , (***p_1604->g_734))) >= l_1107), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 8))((safe_add_func_uint8_t_u_u(((p_1604->g_594.s1--) | (**l_1106)), (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 2))(0x98B0A23BCCED2C11L, 18446744073709551611UL)).yxyyyyyy, ((VECTOR(uint64_t, 16))(l_1121.s7076331633775526)).lo))))))).s6, (safe_mul_func_int8_t_s_s(((*l_1124) = p_1604->g_103), (p_1604->g_562.sf = ((*l_1125) = (0xEC9A6CAFE577AB41L != 0x0184952CD4393A55L))))))), 11)), p_16)))), 0x11L, ((VECTOR(int8_t, 2))(0x00L)), ((VECTOR(int8_t, 2))(0x3EL)), (-1L), 3L)), ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 8))(0x4DL))))).s6))) ^ l_1112[1]) || l_1112[0]));
            if ((p_1604->g_321.y ^ ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x1B82L, 0x0019L)), 0x7878L, 0x4FA0L)).x))
            { /* block id: 447 */
                int32_t ****l_1133 = &p_1604->g_170;
                int32_t *****l_1134 = &l_1133;
                int32_t *****l_1136 = &l_1135;
                int32_t ****l_1137 = &p_1604->g_170;
                VECTOR(int32_t, 8) l_1163 = (VECTOR(int32_t, 8))(0x3AD9DC4CL, (VECTOR(int32_t, 4))(0x3AD9DC4CL, (VECTOR(int32_t, 2))(0x3AD9DC4CL, (-6L)), (-6L)), (-6L), 0x3AD9DC4CL, (-6L));
                int i;
                if (l_1127)
                    break;
                if ((6L < (((p_16 == ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 8))(l_1128.sa5f9c50d)), (uint16_t)(((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((((p_1604->g_210.y = 1UL) || (((*l_1134) = l_1133) == (l_1137 = ((*l_1136) = l_1135)))) , l_1106) == l_1138) < (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((p_1604->g_620.s1 , (0x8D86L && (**l_1138))) , 0x24L), p_17)), p_15)), 4UL))), 1L)), p_16)) == p_1604->g_423.x) && 0UL), (uint16_t)GROUP_DIVERGE(2, 1)))).s6) && (**l_1106)) <= p_17)))
                { /* block id: 453 */
                    uint64_t l_1145 = 0xF1DDBEF20E5C92FDL;
                    int32_t *l_1153[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t l_1156 = 0xA74E0F9BL;
                    int i;
                    l_1145++;
                    for (p_1604->g_750 = (-15); (p_1604->g_750 < (-19)); p_1604->g_750--)
                    { /* block id: 457 */
                        l_1150 = ((**l_1106) = (-5L));
                    }
                    --l_1156;
                }
                else
                { /* block id: 462 */
                    int32_t *l_1159 = &l_1154[7][6][1];
                    int32_t *l_1160 = &l_1112[0];
                    int32_t *l_1161[1][9][10] = {{{(void*)0,(void*)0,&l_1126,(void*)0,&l_1154[2][6][1],&l_1112[1],(void*)0,&l_1112[0],&l_1152,&l_1152},{(void*)0,(void*)0,&l_1126,(void*)0,&l_1154[2][6][1],&l_1112[1],(void*)0,&l_1112[0],&l_1152,&l_1152},{(void*)0,(void*)0,&l_1126,(void*)0,&l_1154[2][6][1],&l_1112[1],(void*)0,&l_1112[0],&l_1152,&l_1152},{(void*)0,(void*)0,&l_1126,(void*)0,&l_1154[2][6][1],&l_1112[1],(void*)0,&l_1112[0],&l_1152,&l_1152},{(void*)0,(void*)0,&l_1126,(void*)0,&l_1154[2][6][1],&l_1112[1],(void*)0,&l_1112[0],&l_1152,&l_1152},{(void*)0,(void*)0,&l_1126,(void*)0,&l_1154[2][6][1],&l_1112[1],(void*)0,&l_1112[0],&l_1152,&l_1152},{(void*)0,(void*)0,&l_1126,(void*)0,&l_1154[2][6][1],&l_1112[1],(void*)0,&l_1112[0],&l_1152,&l_1152},{(void*)0,(void*)0,&l_1126,(void*)0,&l_1154[2][6][1],&l_1112[1],(void*)0,&l_1112[0],&l_1152,&l_1152},{(void*)0,(void*)0,&l_1126,(void*)0,&l_1154[2][6][1],&l_1112[1],(void*)0,&l_1112[0],&l_1152,&l_1152}}};
                    int i, j, k;
                    ++l_1164;
                    if ((**l_1138))
                        continue;
                }
                return p_15;
            }
            else
            { /* block id: 467 */
                volatile uint32_t * volatile *l_1170 = &p_1604->g_1169;
                int8_t l_1171[8] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
                int i;
                l_1170 = (((*l_1167) = (&l_1164 != ((*p_1604->g_874) = l_1167))) , p_1604->g_1168);
                if (l_1171[0])
                    break;
            }
        }
        if ((atomic_inc(&p_1604->l_atomic_input[0]) == 1))
        { /* block id: 475 */
            VECTOR(uint32_t, 2) l_1172 = (VECTOR(uint32_t, 2))(4294967295UL, 0UL);
            VECTOR(uint32_t, 4) l_1173 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0UL), 0UL);
            VECTOR(int32_t, 8) l_1174 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x06CE5882L), 0x06CE5882L), 0x06CE5882L, 5L, 0x06CE5882L);
            VECTOR(int32_t, 16) l_1175 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x2E8A74DAL), 0x2E8A74DAL), 0x2E8A74DAL, (-5L), 0x2E8A74DAL, (VECTOR(int32_t, 2))((-5L), 0x2E8A74DAL), (VECTOR(int32_t, 2))((-5L), 0x2E8A74DAL), (-5L), 0x2E8A74DAL, (-5L), 0x2E8A74DAL);
            int8_t l_1176 = 0x32L;
            uint8_t l_1177 = 252UL;
            int32_t l_1178 = 1L;
            uint16_t l_1179 = 65526UL;
            int32_t *l_1182 = (void*)0;
            int32_t *l_1183 = (void*)0;
            int i;
            l_1177 = (((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 4))(l_1172.yyyx)).xxyzxxxxzzxzwzzz))))), ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1173.wz)).yyyy)).xxzzwyyzxwyxwwwy)))).sa139, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x4EC4B554L, 0xF033D7F3L)).xxyyxyxxyyxxyyxy)).s2ab3))).xzxwywzxyzxzxwxx))).s1 , ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_1174.s4015560665332413)).s72, ((VECTOR(int32_t, 8))(7L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1175.s9352)))), l_1176, 0x42A46544L, 0x080C815CL)).s37))).hi);
            l_1179++;
            l_1183 = l_1182;
            for (l_1173.y = (-15); (l_1173.y <= 59); l_1173.y = safe_add_func_int8_t_s_s(l_1173.y, 3))
            { /* block id: 481 */
                int8_t l_1186 = 0x4EL;
                int8_t l_1187 = 0x4FL;
                uint64_t l_1208 = 0xAD3D5172DC144BEAL;
                uint32_t l_1209[1];
                int32_t l_1210 = (-1L);
                VECTOR(uint64_t, 16) l_1211 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x2195FB6097F52FA1L), 0x2195FB6097F52FA1L), 0x2195FB6097F52FA1L, 0UL, 0x2195FB6097F52FA1L, (VECTOR(uint64_t, 2))(0UL, 0x2195FB6097F52FA1L), (VECTOR(uint64_t, 2))(0UL, 0x2195FB6097F52FA1L), 0UL, 0x2195FB6097F52FA1L, 0UL, 0x2195FB6097F52FA1L);
                int32_t l_1212 = 0x7A0C769BL;
                int32_t l_1213 = (-6L);
                VECTOR(int64_t, 2) l_1214 = (VECTOR(int64_t, 2))(0x3C6AC413245C9D39L, 0x1E40AA7725F9812DL);
                uint8_t l_1215 = 1UL;
                int8_t l_1216 = 4L;
                VECTOR(int32_t, 2) l_1217 = (VECTOR(int32_t, 2))(0x02FED0BDL, 1L);
                int32_t l_1218 = 0L;
                int8_t l_1219 = (-6L);
                int i;
                for (i = 0; i < 1; i++)
                    l_1209[i] = 0x120CD478L;
                if ((l_1187 = l_1186))
                { /* block id: 483 */
                    uint32_t l_1188 = 0xFD8F0F69L;
                    int8_t l_1189 = 0x62L;
                    uint64_t l_1190 = 18446744073709551615UL;
                    uint16_t l_1191 = 0x8EF5L;
                    int64_t l_1192 = 0x15BA16330C921FA3L;
                    l_1192 = (l_1191 = ((l_1188 , l_1189) , l_1190));
                }
                else
                { /* block id: 486 */
                    int32_t l_1193 = 0x2557CC61L;
                    int16_t l_1205 = 0x6851L;
                    int16_t l_1206 = 0x180AL;
                    int32_t l_1207 = 0x62659C58L;
                    for (l_1193 = 0; (l_1193 == 2); l_1193 = safe_add_func_uint32_t_u_u(l_1193, 3))
                    { /* block id: 489 */
                        uint8_t l_1196 = 4UL;
                        uint64_t l_1199 = 0x0F9EA86EC5EE2FA5L;
                        int32_t l_1200 = 0L;
                        int32_t l_1201 = 0x12FA28A8L;
                        uint32_t l_1202 = 4294967295UL;
                        int32_t *l_1203 = (void*)0;
                        int64_t l_1204 = 0x30F2A8CA9A533341L;
                        l_1196++;
                        l_1182 = (((l_1200 = l_1199) , (l_1201 , l_1202)) , (l_1183 = l_1203));
                        l_1175.s3 = (l_1174.s0 = l_1204);
                    }
                    l_1207 = (l_1205 , l_1206);
                }
                l_1219 |= (l_1175.sa = ((l_1172.y = (((l_1209[0] = (l_1208 , 0x12486453DCB100EDL)) , (l_1211.sb |= l_1210)) , (l_1212 , (l_1213 , (((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 2))(l_1214.xy)), (int64_t)l_1215, (int64_t)((FAKE_DIVERGE(p_1604->global_2_offset, get_global_id(2), 10) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_1174.s0 ^= (((l_1216 |= 0x63795B66DA73CC2FL) , 7L) , ((VECTOR(int32_t, 4))(l_1217.yxxy)).w)), 0x4B8602DBL, (FAKE_DIVERGE(p_1604->global_0_offset, get_global_id(0), 10) , 0x003C770CL), 0x591D5638L, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 2))((-1L))), 0L, 0x54E247C6L)).lo)).s1) , 1L)))).hi , FAKE_DIVERGE(p_1604->group_2_offset, get_group_id(2), 10)))))) , l_1218));
                for (l_1211.sf = 0; (l_1211.sf == 33); l_1211.sf++)
                { /* block id: 508 */
                    int64_t l_1222 = 1L;
                    uint32_t l_1223 = 0x354E2BF3L;
                    l_1223--;
                }
            }
            unsigned int result = 0;
            result += l_1172.y;
            result += l_1172.x;
            result += l_1173.w;
            result += l_1173.z;
            result += l_1173.y;
            result += l_1173.x;
            result += l_1174.s7;
            result += l_1174.s6;
            result += l_1174.s5;
            result += l_1174.s4;
            result += l_1174.s3;
            result += l_1174.s2;
            result += l_1174.s1;
            result += l_1174.s0;
            result += l_1175.sf;
            result += l_1175.se;
            result += l_1175.sd;
            result += l_1175.sc;
            result += l_1175.sb;
            result += l_1175.sa;
            result += l_1175.s9;
            result += l_1175.s8;
            result += l_1175.s7;
            result += l_1175.s6;
            result += l_1175.s5;
            result += l_1175.s4;
            result += l_1175.s3;
            result += l_1175.s2;
            result += l_1175.s1;
            result += l_1175.s0;
            result += l_1176;
            result += l_1177;
            result += l_1178;
            result += l_1179;
            atomic_add(&p_1604->l_special_values[0], result);
        }
        else
        { /* block id: 512 */
            (1 + 1);
        }
        (*l_1258) |= (safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s((1L <= ((VECTOR(int16_t, 2))(l_1230.zx)).lo), ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1231.s1273375303136012)).se6)).hi || 0x1ADDC090L) || (l_1232 != l_1232)))) , ((safe_lshift_func_int8_t_s_u((FAKE_DIVERGE(p_1604->local_0_offset, get_local_id(0), 10) , ((*l_1257) = (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((p_1604->g_210.z &= ((safe_add_func_uint64_t_u_u(((l_1121.s3 , (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_1243.xx)))), 0x52BCD776L, 4294967291UL)).z <= ((VECTOR(uint32_t, 2))(p_1604->g_1244.xy)).odd)) != (safe_mul_func_int8_t_s_s((p_14 , 0x3DL), (0xC548L & ((((VECTOR(int16_t, 2))(l_1247.yy)).odd & (p_1604->g_375 && p_1604->g_348)) , (**l_1138)))))), (**l_1138))) <= (**l_1138))), l_1255)), p_1604->g_361.s0)), p_15)))), 7)) ^ l_1155.x)), 8));
        (*l_1258) = p_17;
    }
    (*l_1138) = l_1259;
    if (((void*)0 == l_1260[1][1]))
    { /* block id: 521 */
        int64_t l_1263 = 0x70891534DE69FAA2L;
        int32_t l_1286 = (-1L);
        uint64_t l_1290 = 0x737564526C3B21DFL;
        for (p_14 = 0; (p_14 > (-27)); --p_14)
        { /* block id: 524 */
            int16_t l_1264 = 0x5F9DL;
            int8_t *l_1274 = &p_1604->g_750;
            uint8_t *l_1278[10][5][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint32_t l_1289 = 0x142097E5L;
            int i, j, k;
            l_1264 |= l_1263;
            (*l_1138) = &l_1286;
        }
        (*p_1604->g_70) = (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x26L, 0x34L)).hi, (((*p_1604->g_48) = (p_15 = (p_1604->g_1001 , l_1290))) , ((safe_sub_func_int8_t_s_s(p_18, ((0x46AA4D88E93477B3L > ((safe_unary_minus_func_int16_t_s(0x7196L)) > 0UL)) || p_1604->g_457.x))) , 1L))));
    }
    else
    { /* block id: 536 */
        uint16_t l_1513 = 0x9435L;
        for (p_17 = 0; (p_17 == 34); p_17 = safe_add_func_uint8_t_u_u(p_17, 8))
        { /* block id: 539 */
            if ((atomic_inc(&p_1604->l_atomic_input[8]) == 3))
            { /* block id: 541 */
                VECTOR(uint8_t, 4) l_1298 = (VECTOR(uint8_t, 4))(0x94L, (VECTOR(uint8_t, 2))(0x94L, 255UL), 255UL);
                int32_t l_1300 = 0x506B278AL;
                int32_t *l_1299 = &l_1300;
                int i;
                l_1299 = (((VECTOR(uint8_t, 2))(l_1298.yz)).lo , (void*)0);
                unsigned int result = 0;
                result += l_1298.w;
                result += l_1298.z;
                result += l_1298.y;
                result += l_1298.x;
                result += l_1300;
                atomic_add(&p_1604->l_special_values[8], result);
            }
            else
            { /* block id: 543 */
                (1 + 1);
            }
            if ((atomic_inc(&p_1604->g_atomic_input[9 * get_linear_group_id() + 6]) == 4))
            { /* block id: 547 */
                int32_t l_1301 = 0x768559CDL;
                int64_t l_1351[9][9] = {{0x7D9E455BC0D51F90L,0L,0x7C0945079A193C5AL,0x68FAA559E75A4510L,0L,0x68FAA559E75A4510L,0x7C0945079A193C5AL,0L,0x7D9E455BC0D51F90L},{0x7D9E455BC0D51F90L,0L,0x7C0945079A193C5AL,0x68FAA559E75A4510L,0L,0x68FAA559E75A4510L,0x7C0945079A193C5AL,0L,0x7D9E455BC0D51F90L},{0x7D9E455BC0D51F90L,0L,0x7C0945079A193C5AL,0x68FAA559E75A4510L,0L,0x68FAA559E75A4510L,0x7C0945079A193C5AL,0L,0x7D9E455BC0D51F90L},{0x7D9E455BC0D51F90L,0L,0x7C0945079A193C5AL,0x68FAA559E75A4510L,0L,0x68FAA559E75A4510L,0x7C0945079A193C5AL,0L,0x7D9E455BC0D51F90L},{0x7D9E455BC0D51F90L,0L,0x7C0945079A193C5AL,0x68FAA559E75A4510L,0L,0x68FAA559E75A4510L,0x7C0945079A193C5AL,0L,0x7D9E455BC0D51F90L},{0x7D9E455BC0D51F90L,0L,0x7C0945079A193C5AL,0x68FAA559E75A4510L,0L,0x68FAA559E75A4510L,0x7C0945079A193C5AL,0L,0x7D9E455BC0D51F90L},{0x7D9E455BC0D51F90L,0L,0x7C0945079A193C5AL,0x68FAA559E75A4510L,0L,0x68FAA559E75A4510L,0x7C0945079A193C5AL,0L,0x7D9E455BC0D51F90L},{0x7D9E455BC0D51F90L,0L,0x7C0945079A193C5AL,0x68FAA559E75A4510L,0L,0x68FAA559E75A4510L,0x7C0945079A193C5AL,0L,0x7D9E455BC0D51F90L},{0x7D9E455BC0D51F90L,0L,0x7C0945079A193C5AL,0x68FAA559E75A4510L,0L,0x68FAA559E75A4510L,0x7C0945079A193C5AL,0L,0x7D9E455BC0D51F90L}};
                int i, j;
                for (l_1301 = 0; (l_1301 > (-16)); l_1301 = safe_sub_func_int64_t_s_s(l_1301, 1))
                { /* block id: 550 */
                    int32_t l_1304[7] = {0x409DB212L,0x6D3ED316L,0x409DB212L,0x409DB212L,0x6D3ED316L,0x409DB212L,0x409DB212L};
                    int32_t *l_1317 = (void*)0;
                    int32_t *l_1318 = &l_1304[4];
                    uint64_t l_1319[8];
                    VECTOR(int32_t, 8) l_1320 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0L), 0L), 0L, 7L, 0L);
                    uint32_t l_1321 = 4294967295UL;
                    int64_t l_1322[3][4][9] = {{{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL},{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL},{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL},{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL}},{{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL},{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL},{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL},{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL}},{{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL},{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL},{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL},{0x299ABEB4DE4F8D5BL,0x4A6A063E37A75575L,0x3E5916BA4CCF272CL,0x3B1C0A8F8990C404L,0x4A6A063E37A75575L,0x3B1C0A8F8990C404L,0x3E5916BA4CCF272CL,0x4A6A063E37A75575L,0x299ABEB4DE4F8D5BL}}};
                    int32_t l_1323 = 0x5738ED21L;
                    uint32_t l_1324 = 8UL;
                    uint32_t l_1325[6] = {0x2AE018C6L,1UL,0x2AE018C6L,0x2AE018C6L,1UL,0x2AE018C6L};
                    VECTOR(int32_t, 16) l_1326 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x59BF4D8CL), 0x59BF4D8CL), 0x59BF4D8CL, 7L, 0x59BF4D8CL, (VECTOR(int32_t, 2))(7L, 0x59BF4D8CL), (VECTOR(int32_t, 2))(7L, 0x59BF4D8CL), 7L, 0x59BF4D8CL, 7L, 0x59BF4D8CL);
                    VECTOR(int32_t, 8) l_1327 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x48C9CE02L), 0x48C9CE02L), 0x48C9CE02L, (-7L), 0x48C9CE02L);
                    int32_t l_1328 = (-1L);
                    int8_t l_1329 = 0x58L;
                    int64_t l_1330 = 0x6B0BD41EF45DB411L;
                    uint8_t l_1331 = 1UL;
                    VECTOR(int32_t, 4) l_1332 = (VECTOR(int32_t, 4))(0x349E6265L, (VECTOR(int32_t, 2))(0x349E6265L, 0x72BF799CL), 0x72BF799CL);
                    VECTOR(int16_t, 2) l_1333 = (VECTOR(int16_t, 2))(6L, 0x79BDL);
                    VECTOR(uint16_t, 2) l_1334 = (VECTOR(uint16_t, 2))(0x3888L, 0xA900L);
                    VECTOR(uint16_t, 8) l_1335 = (VECTOR(uint16_t, 8))(0xF30FL, (VECTOR(uint16_t, 4))(0xF30FL, (VECTOR(uint16_t, 2))(0xF30FL, 0xECFAL), 0xECFAL), 0xECFAL, 0xF30FL, 0xECFAL);
                    VECTOR(uint16_t, 16) l_1336 = (VECTOR(uint16_t, 16))(0xB422L, (VECTOR(uint16_t, 4))(0xB422L, (VECTOR(uint16_t, 2))(0xB422L, 0UL), 0UL), 0UL, 0xB422L, 0UL, (VECTOR(uint16_t, 2))(0xB422L, 0UL), (VECTOR(uint16_t, 2))(0xB422L, 0UL), 0xB422L, 0UL, 0xB422L, 0UL);
                    VECTOR(uint16_t, 8) l_1337 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65531UL), 65531UL), 65531UL, 1UL, 65531UL);
                    VECTOR(uint16_t, 4) l_1338 = (VECTOR(uint16_t, 4))(0x6AE1L, (VECTOR(uint16_t, 2))(0x6AE1L, 65535UL), 65535UL);
                    int8_t l_1339 = 9L;
                    uint8_t l_1340 = 1UL;
                    uint16_t l_1341 = 65527UL;
                    uint64_t l_1342 = 0x81700FDA96CCB5A2L;
                    int64_t **l_1348 = (void*)0;
                    int64_t *l_1350 = &l_1330;
                    int64_t **l_1349 = &l_1350;
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_1319[i] = 18446744073709551608UL;
                    for (l_1304[4] = (-6); (l_1304[4] < (-3)); l_1304[4] = safe_add_func_uint64_t_u_u(l_1304[4], 4))
                    { /* block id: 553 */
                        uint32_t l_1309 = 0x62CB62C4L;
                        uint32_t *l_1308 = &l_1309;
                        uint32_t **l_1307 = &l_1308;
                        int16_t l_1310 = 0x1609L;
                        uint32_t l_1311[5];
                        int64_t l_1314 = (-8L);
                        uint16_t l_1315 = 2UL;
                        int8_t l_1316 = 0x70L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1311[i] = 0x6C95A855L;
                        l_1307 = (void*)0;
                        ++l_1311[3];
                        l_1316 |= (l_1315 = l_1314);
                    }
                    l_1318 = (l_1317 = (void*)0);
                    if (((l_1319[0] ^= 0x1542L) , ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(0x4B424FE9L, 0x4420185DL, 0x1EB65D7AL, ((VECTOR(int32_t, 2))(l_1320.s25)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(0x19A2E371L, (l_1323 = (l_1322[2][2][5] = l_1321)), (l_1325[3] = l_1324), 0x17DE79C2L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(0x48934C4AL, 0x5C03C6C7L)).yxxxyxyx, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(l_1326.s8d)).yyyyxxxy, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_1327.s0616)), ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1328, (-1L), (l_1330 |= l_1329), 0x2D05BCCCL, 0x044FB646L, 0x5CEF938FL, l_1331, ((VECTOR(int32_t, 2))(0x3F1417EDL, 0x37531CCEL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1332.zxzzzxxxxwzzxyyx)).sb9a3)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_1333.xxxxxyyyxyxxyxxx)).s2f, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_1334.xy)), 0UL, 0x55F4L)), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 16))(l_1335.s4767602023605701)).sf4f1, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1336.scfdf)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(2UL, 1UL, ((VECTOR(uint16_t, 2))(l_1337.s47)), GROUP_DIVERGE(1, 1), 0UL, 0x5953L, 0x2931L)).s54, ((VECTOR(uint16_t, 4))(l_1338.wxzy)).hi))))), (l_1339 , l_1340), 65533UL, 0xCDD0L, 65528UL, 0xCA8CL, 65535UL, 0xF916L, 0x9009L, 1UL, 1UL)).sf5))), 0xF294L, 0xD521L)))))))).hi))))), 6L)).odd)).s3007246461624603, (int32_t)l_1341, (int32_t)l_1342))).s3aa6))).zxwwwyww, ((VECTOR(int32_t, 8))(0x624125DBL)))))))).s46, ((VECTOR(int32_t, 2))((-5L)))))), (-5L), (-3L))).s71, ((VECTOR(int32_t, 2))(0x05FF57F3L))))), ((VECTOR(int32_t, 2))((-1L)))))), (-1L))).s6761060564606725, ((VECTOR(int32_t, 16))((-1L))), ((VECTOR(int32_t, 16))(0x5815CCE3L))))).s5))
                    { /* block id: 566 */
                        uint32_t l_1343[5][5] = {{0UL,0xEE620668L,0UL,0UL,0xEE620668L},{0UL,0xEE620668L,0UL,0UL,0xEE620668L},{0UL,0xEE620668L,0UL,0UL,0xEE620668L},{0UL,0xEE620668L,0UL,0UL,0xEE620668L},{0UL,0xEE620668L,0UL,0UL,0xEE620668L}};
                        int32_t l_1344 = 0L;
                        uint8_t l_1345 = 0xEAL;
                        int i, j;
                        l_1345 &= (l_1344 = l_1343[4][2]);
                    }
                    else
                    { /* block id: 569 */
                        int32_t *l_1346 = (void*)0;
                        int64_t l_1347[6][3] = {{(-1L),0x4CB3842DCD6B2390L,(-1L)},{(-1L),0x4CB3842DCD6B2390L,(-1L)},{(-1L),0x4CB3842DCD6B2390L,(-1L)},{(-1L),0x4CB3842DCD6B2390L,(-1L)},{(-1L),0x4CB3842DCD6B2390L,(-1L)},{(-1L),0x4CB3842DCD6B2390L,(-1L)}};
                        int i, j;
                        l_1318 = (l_1317 = l_1346);
                        l_1327.s4 = l_1347[4][0];
                    }
                    l_1349 = l_1348;
                }
                if (l_1351[0][7])
                { /* block id: 576 */
                    int32_t l_1352 = 1L;
                    int64_t l_1353 = 0L;
                    int16_t l_1354 = (-1L);
                    int32_t l_1355 = 0x3CA78038L;
                    uint64_t l_1356 = 0UL;
                    int32_t *l_1359 = &l_1355;
                    int32_t *l_1360 = &l_1355;
                    uint16_t l_1361 = 8UL;
                    l_1301 = (-1L);
                    --l_1356;
                    l_1360 = l_1359;
                    if (l_1361)
                    { /* block id: 580 */
                        int32_t l_1363 = 0x20ABDB35L;
                        int32_t *l_1362[2];
                        int32_t *l_1364[9][5] = {{&l_1363,&l_1363,&l_1363,(void*)0,&l_1363},{&l_1363,&l_1363,&l_1363,(void*)0,&l_1363},{&l_1363,&l_1363,&l_1363,(void*)0,&l_1363},{&l_1363,&l_1363,&l_1363,(void*)0,&l_1363},{&l_1363,&l_1363,&l_1363,(void*)0,&l_1363},{&l_1363,&l_1363,&l_1363,(void*)0,&l_1363},{&l_1363,&l_1363,&l_1363,(void*)0,&l_1363},{&l_1363,&l_1363,&l_1363,(void*)0,&l_1363},{&l_1363,&l_1363,&l_1363,(void*)0,&l_1363}};
                        int32_t *l_1365 = &l_1363;
                        int32_t *l_1366 = &l_1363;
                        VECTOR(uint32_t, 2) l_1367 = (VECTOR(uint32_t, 2))(0x56AC8F28L, 0x8D922AB4L);
                        VECTOR(uint32_t, 8) l_1368 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xC3A4F3C2L), 0xC3A4F3C2L), 0xC3A4F3C2L, 4294967295UL, 0xC3A4F3C2L);
                        uint16_t l_1369 = 65530UL;
                        VECTOR(int32_t, 2) l_1372 = (VECTOR(int32_t, 2))(0x4C14A28AL, (-1L));
                        uint8_t l_1373 = 0xE4L;
                        uint32_t l_1374[7][3][6] = {{{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL}},{{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL}},{{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL}},{{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL}},{{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL}},{{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL}},{{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL},{0xAAA7AF0AL,0UL,0x1BBF8E17L,9UL,0xED343CADL,9UL}}};
                        int64_t l_1375 = 0x3D61D871D3403C41L;
                        uint64_t l_1376[2];
                        VECTOR(int16_t, 2) l_1377 = (VECTOR(int16_t, 2))(2L, 0L);
                        VECTOR(int16_t, 16) l_1378 = (VECTOR(int16_t, 16))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 5L), 5L), 5L, 6L, 5L, (VECTOR(int16_t, 2))(6L, 5L), (VECTOR(int16_t, 2))(6L, 5L), 6L, 5L, 6L, 5L);
                        VECTOR(int16_t, 8) l_1379 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                        VECTOR(int16_t, 2) l_1380 = (VECTOR(int16_t, 2))(0x0F83L, 0x1B35L);
                        VECTOR(int16_t, 8) l_1381 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                        VECTOR(int16_t, 2) l_1382 = (VECTOR(int16_t, 2))(0x0BB6L, (-4L));
                        VECTOR(int8_t, 4) l_1383 = (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 9L), 9L);
                        VECTOR(int8_t, 4) l_1384 = (VECTOR(int8_t, 4))(0x48L, (VECTOR(int8_t, 2))(0x48L, 0x11L), 0x11L);
                        VECTOR(int8_t, 8) l_1385 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 9L), 9L), 9L, 7L, 9L);
                        VECTOR(uint8_t, 4) l_1386 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 250UL), 250UL);
                        VECTOR(int16_t, 16) l_1387 = (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0L), 0L), 0L, 9L, 0L, (VECTOR(int16_t, 2))(9L, 0L), (VECTOR(int16_t, 2))(9L, 0L), 9L, 0L, 9L, 0L);
                        uint16_t l_1388 = 0x6E2CL;
                        VECTOR(int16_t, 16) l_1389 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int16_t, 2))(1L, (-1L)), (VECTOR(int16_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                        VECTOR(int16_t, 4) l_1390 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
                        VECTOR(int16_t, 2) l_1391 = (VECTOR(int16_t, 2))(0x0D97L, 0x06A1L);
                        VECTOR(int16_t, 4) l_1392 = (VECTOR(int16_t, 4))(0x3CFDL, (VECTOR(int16_t, 2))(0x3CFDL, 0L), 0L);
                        int16_t l_1393 = 0x0545L;
                        int16_t l_1394[7][9][4] = {{{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L}},{{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L}},{{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L}},{{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L}},{{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L}},{{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L}},{{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L},{1L,0x2296L,(-1L),0x2296L}}};
                        uint64_t l_1395 = 6UL;
                        VECTOR(uint32_t, 4) l_1396 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL);
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1362[i] = &l_1363;
                        for (i = 0; i < 2; i++)
                            l_1376[i] = 0UL;
                        l_1359 = l_1362[1];
                        l_1365 = (l_1359 = (l_1360 = l_1364[0][2]));
                        l_1360 = l_1366;
                        l_1396.x &= (((VECTOR(uint32_t, 16))(4294967294UL, 0x28363E09L, ((VECTOR(uint32_t, 8))(l_1367.yyyyxyxy)), ((VECTOR(uint32_t, 4))(0x16D677E3L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_1368.s3030)))).z, 0UL, 0UL)), 4294967289UL, 0UL)).s2 , ((++l_1369) , ((*l_1360) |= ((l_1373 = ((VECTOR(int32_t, 2))(l_1372.yy)).odd) , (((VECTOR(uint64_t, 16))(l_1374[4][0][4], 0UL, FAKE_DIVERGE(p_1604->local_1_offset, get_local_id(1), 10), ((VECTOR(uint64_t, 4))(0x478765755F9B1211L, 0x2DBF6C7EBC21E45BL, 0UL, 0UL)), 0x9157DB9E181CF2DBL, ((VECTOR(uint64_t, 8))(l_1375, 1UL, 0x2645ACFB9A36DCBEL, 0x654C3B80616445DEL, ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 8))(0UL, 18446744073709551615UL, ((l_1376[0] , (l_1393 = ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(0x3470L, (-2L), 0x17E6L, (-1L))).yyywxywyxzxyxzwx, ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(l_1377.yx)).xxxx, ((VECTOR(int16_t, 4))(l_1378.sbd85))))), ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(l_1379.s7230)).lo, ((VECTOR(int16_t, 4))(l_1380.yxxx)).hi))).xxyx))))).zyyxwywwxwxyzyww)), (int16_t)0x2ACCL))), ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_1381.s23)).yxyxyxyxxxyxyyyx)), ((VECTOR(int16_t, 4))(0x0076L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1382.yxyyxyxy)).s76)), 1L)).yzwyxywyzzzxxzxw, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(l_1383.wyxzwzzw)).hi, (int8_t)((VECTOR(int8_t, 2))(0L, 0x71L)).hi))))).wwywwxxx)), (-1L), ((VECTOR(int8_t, 4))(l_1384.xywz)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_1385.s22)))), 0x58L)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_1386.wywxwxyxyyzwzzww)))).s2ca4)).even)).yyxxyxxxxxxxyyxy))).odd)), ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x3025L, 1L, 0x1E6CL, 0x3509L, 0x27C9L, 0x1854L, 0L, 0x2AADL)).s4060072570644463)).lo)).s04, ((VECTOR(int16_t, 8))(l_1387.s79f189fe)).s52))), l_1388, (l_1377.x = ((VECTOR(int16_t, 2))(l_1389.s23)).even), ((VECTOR(int16_t, 4))(l_1390.zxyy)))).s7f)), (l_1387.s8 = (l_1354 = ((VECTOR(int16_t, 4))(0L, 2L, (-1L), 0x067BL)).x)), 0x2382L, 0x40B6L, 3L, 0x05E7L, 0x6497L)).s7675660766666532))).even, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(l_1391.xxxyxyxyxyxyxxxx)), ((VECTOR(int16_t, 2))((-1L), 0x01BEL)).yyyxxxxyyyxyyxyy))).s16, ((VECTOR(int16_t, 8))((-1L), 5L, 0x6ED3L, (-10L), (-1L), ((VECTOR(int16_t, 2))(0L, 0x7664L)), 0x43E8L)).s03, ((VECTOR(int16_t, 16))(l_1392.yywwyzxxxyyzwyxx)).s31))).xxyxyyxx))).s2074007177312013)))))).s4)) , 0x4D749AFEE928373DL), l_1394[5][5][1], ((VECTOR(uint64_t, 2))(0UL)), 0xBF71121AFC80DD34L, 1UL)).s54, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0x5A4339C8D6EB873EL))))), 1UL, 18446744073709551606UL)))).sc , l_1395)))));
                    }
                    else
                    { /* block id: 594 */
                        int16_t l_1397 = 4L;
                        uint32_t l_1398 = 4294967295UL;
                        uint8_t l_1399 = 251UL;
                        uint16_t l_1400 = 0x8CA2L;
                        uint32_t l_1401 = 0x7D327374L;
                        l_1301 = ((VECTOR(int32_t, 4))(l_1397, ((l_1398 , l_1399) , ((*l_1360) = l_1400)), 0L, 0x0728152EL)).x;
                        l_1401 &= (l_1301 ^= ((*l_1360) ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x2B6203DBL, 0x1456AD08L)).yxxx)).x));
                    }
                }
                else
                { /* block id: 601 */
                    int32_t l_1402 = 1L;
                    uint64_t l_1416 = 18446744073709551607UL;
                    uint32_t l_1419[4];
                    int64_t l_1420 = (-8L);
                    uint32_t l_1421 = 0xA8622EA0L;
                    int16_t l_1424[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    uint32_t l_1425 = 0xD82958BCL;
                    VECTOR(int64_t, 16) l_1426 = (VECTOR(int64_t, 16))(0x0E1D18114D40E9A7L, (VECTOR(int64_t, 4))(0x0E1D18114D40E9A7L, (VECTOR(int64_t, 2))(0x0E1D18114D40E9A7L, 0x6BA14EC2AE971B27L), 0x6BA14EC2AE971B27L), 0x6BA14EC2AE971B27L, 0x0E1D18114D40E9A7L, 0x6BA14EC2AE971B27L, (VECTOR(int64_t, 2))(0x0E1D18114D40E9A7L, 0x6BA14EC2AE971B27L), (VECTOR(int64_t, 2))(0x0E1D18114D40E9A7L, 0x6BA14EC2AE971B27L), 0x0E1D18114D40E9A7L, 0x6BA14EC2AE971B27L, 0x0E1D18114D40E9A7L, 0x6BA14EC2AE971B27L);
                    VECTOR(int64_t, 16) l_1427 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int64_t, 2))(0L, 0L), (VECTOR(int64_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                    VECTOR(int64_t, 4) l_1428 = (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 1L), 1L);
                    VECTOR(int64_t, 2) l_1429 = (VECTOR(int64_t, 2))(0L, (-2L));
                    VECTOR(int64_t, 4) l_1430 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x519017CCAAAF63D6L), 0x519017CCAAAF63D6L);
                    VECTOR(int64_t, 2) l_1431 = (VECTOR(int64_t, 2))(0x681CD07C52AEE8B1L, 0x391333671A34F29BL);
                    VECTOR(int64_t, 16) l_1432 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x576F8ADDBF0E4DDBL), 0x576F8ADDBF0E4DDBL), 0x576F8ADDBF0E4DDBL, 0L, 0x576F8ADDBF0E4DDBL, (VECTOR(int64_t, 2))(0L, 0x576F8ADDBF0E4DDBL), (VECTOR(int64_t, 2))(0L, 0x576F8ADDBF0E4DDBL), 0L, 0x576F8ADDBF0E4DDBL, 0L, 0x576F8ADDBF0E4DDBL);
                    int32_t l_1433 = 0x4908DD14L;
                    VECTOR(int64_t, 8) l_1434 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x7018A03327E80C8EL), 0x7018A03327E80C8EL), 0x7018A03327E80C8EL, 1L, 0x7018A03327E80C8EL);
                    uint32_t l_1435 = 0x64EE4498L;
                    uint8_t l_1436 = 254UL;
                    uint32_t l_1437 = 4294967294UL;
                    int32_t l_1438 = (-1L);
                    VECTOR(int64_t, 2) l_1439 = (VECTOR(int64_t, 2))(0x53BEEE299F8FD5FEL, 0x4F9A54EB0EABAC28L);
                    VECTOR(int64_t, 4) l_1440 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L);
                    uint64_t l_1441[8];
                    uint32_t l_1442 = 0xE10CDC78L;
                    int32_t l_1443 = 0L;
                    uint64_t l_1444 = 0x86317A2609524EEDL;
                    uint32_t l_1445 = 0xB5F1B09FL;
                    int16_t l_1446 = 0L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1419[i] = 4294967287UL;
                    for (i = 0; i < 8; i++)
                        l_1441[i] = 0UL;
                    for (l_1402 = 20; (l_1402 >= (-7)); --l_1402)
                    { /* block id: 604 */
                        int32_t l_1406 = 0x56CAD68BL;
                        int32_t *l_1405 = &l_1406;
                        VECTOR(uint32_t, 2) l_1407 = (VECTOR(uint32_t, 2))(0x0A0CB2F5L, 0x3525EED7L);
                        uint32_t l_1408 = 0UL;
                        int32_t l_1409 = 0x2AA2F41FL;
                        uint64_t l_1410 = 18446744073709551610UL;
                        uint8_t l_1411 = 9UL;
                        uint32_t l_1412[8] = {0x4F961699L,0x4F961699L,0x4F961699L,0x4F961699L,0x4F961699L,0x4F961699L,0x4F961699L,0x4F961699L};
                        VECTOR(uint32_t, 2) l_1413 = (VECTOR(uint32_t, 2))(0x3A96FA39L, 0xC1DFBA51L);
                        int32_t *l_1414 = (void*)0;
                        int32_t *l_1415 = (void*)0;
                        int i;
                        l_1405 = l_1405;
                        l_1415 = (l_1407.x , ((l_1408 , l_1409) , ((((l_1410 , (l_1412[0] = l_1411)) , 6L) , ((VECTOR(uint32_t, 16))(l_1413.yxyxxxxxxxxxyyxy)).s1) , l_1414)));
                    }
                    --l_1416;
                    l_1301 = l_1419[3];
                    l_1301 = (((l_1421++) , ((VECTOR(int64_t, 8))(0L, 0x55C4E00D5AEF5AC8L, l_1424[3], l_1425, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))((-10L), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(6L, ((VECTOR(int64_t, 2))(0x27837E217D195CE4L, 4L)), 0x17F06A28D552A954L)).odd)).odd, 0x73D9DD64711F30F6L, ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_1426.s522d7a88)).s4277660704127776)).hi, ((VECTOR(int64_t, 16))(0x2D50718B118B6FD2L, 1L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 8))(l_1427.s92322cb3)), ((VECTOR(int64_t, 2))(l_1428.zw)).xyxxyyxy))).s04)), ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(l_1429.yyxy)).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_1430.wxyxwwwzyxyyzwxy)).hi)).s07)), 0x3C2B09F8BD40AC7FL, (-1L))).even))), ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x60E4ED42B6B6925FL, 0x0A47DC557E0BD234L)).xyyx)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_1431.yxyyyyyxyyxyxxxy)).se0a8)).yzzyxyyywzxzzxxx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))((-6L), ((VECTOR(int64_t, 2))(l_1432.s91)), l_1433, (l_1437 = ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_1434.s3316620052057562)).s8ea6)), (l_1436 = (FAKE_DIVERGE(p_1604->local_2_offset, get_local_id(2), 10) , (l_1351[0][7] ^= l_1435))), 0x7D2AE9B3DAB13B6DL, (-1L), 0x3CB8314E39AF99BEL)).s44)).odd), l_1438, 5L, ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 4))(l_1439.yyyx))))), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_1440.yz)))), 9L, ((VECTOR(int64_t, 4))(l_1441[4], 8L, 4L, 3L)), 0L)).s61, ((VECTOR(int64_t, 2))(1L)), ((VECTOR(int64_t, 2))((-10L)))))).yyyyyyyyxxyyxyyy, ((VECTOR(int64_t, 16))((-4L)))))))).se, 0x5D2B7D343B2C6E11L, l_1442, (-5L), (-1L)))))))).s11)).xxyx))), l_1443, (-8L), 0x122DBE463EC336D8L, ((VECTOR(int64_t, 2))(0x2A9046E4CAE94599L)), 0L)).even))), l_1444, l_1445, 0x46577DBF4571EAD9L, 0L, 0L, 3L)).s6, 0x2BFA03803E170E7EL, 0L)), (int64_t)0x20915EFE5F86B3F1L))))).s7) , l_1446);
                }
                for (l_1351[0][1] = 0; (l_1351[0][1] != 8); ++l_1351[0][1])
                { /* block id: 619 */
                    VECTOR(int32_t, 8) l_1449 = (VECTOR(int32_t, 8))(0x006A68AEL, (VECTOR(int32_t, 4))(0x006A68AEL, (VECTOR(int32_t, 2))(0x006A68AEL, 1L), 1L), 1L, 0x006A68AEL, 1L);
                    int32_t l_1487 = 0x6D422F7FL;
                    uint32_t l_1488 = 0xEC841A2BL;
                    uint32_t l_1506[6][1];
                    int32_t l_1508 = 0x04CFBCBAL;
                    int32_t *l_1507 = &l_1508;
                    int32_t *l_1509 = &l_1508;
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1506[i][j] = 3UL;
                    }
                    if (l_1449.s6)
                    { /* block id: 620 */
                        VECTOR(int32_t, 4) l_1450 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 3L), 3L);
                        VECTOR(int32_t, 16) l_1451 = (VECTOR(int32_t, 16))(0x480A7BA9L, (VECTOR(int32_t, 4))(0x480A7BA9L, (VECTOR(int32_t, 2))(0x480A7BA9L, 0x0F46AFA0L), 0x0F46AFA0L), 0x0F46AFA0L, 0x480A7BA9L, 0x0F46AFA0L, (VECTOR(int32_t, 2))(0x480A7BA9L, 0x0F46AFA0L), (VECTOR(int32_t, 2))(0x480A7BA9L, 0x0F46AFA0L), 0x480A7BA9L, 0x0F46AFA0L, 0x480A7BA9L, 0x0F46AFA0L);
                        uint64_t l_1452 = 0xECFB3B83208BE426L;
                        int32_t *l_1453 = (void*)0;
                        int32_t *l_1454[2];
                        VECTOR(int32_t, 8) l_1455 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 1L), 1L), 1L, 3L, 1L);
                        int32_t l_1456 = 0x4B164E0DL;
                        uint32_t l_1457 = 0UL;
                        VECTOR(uint16_t, 16) l_1458 = (VECTOR(uint16_t, 16))(0xD2DCL, (VECTOR(uint16_t, 4))(0xD2DCL, (VECTOR(uint16_t, 2))(0xD2DCL, 0x32D0L), 0x32D0L), 0x32D0L, 0xD2DCL, 0x32D0L, (VECTOR(uint16_t, 2))(0xD2DCL, 0x32D0L), (VECTOR(uint16_t, 2))(0xD2DCL, 0x32D0L), 0xD2DCL, 0x32D0L, 0xD2DCL, 0x32D0L);
                        uint16_t l_1459 = 0xB96DL;
                        uint16_t l_1460 = 0x6095L;
                        int16_t l_1461[3][3][6] = {{{0x748BL,0x0EFCL,(-6L),0x0EFCL,0x748BL,0x748BL},{0x748BL,0x0EFCL,(-6L),0x0EFCL,0x748BL,0x748BL},{0x748BL,0x0EFCL,(-6L),0x0EFCL,0x748BL,0x748BL}},{{0x748BL,0x0EFCL,(-6L),0x0EFCL,0x748BL,0x748BL},{0x748BL,0x0EFCL,(-6L),0x0EFCL,0x748BL,0x748BL},{0x748BL,0x0EFCL,(-6L),0x0EFCL,0x748BL,0x748BL}},{{0x748BL,0x0EFCL,(-6L),0x0EFCL,0x748BL,0x748BL},{0x748BL,0x0EFCL,(-6L),0x0EFCL,0x748BL,0x748BL},{0x748BL,0x0EFCL,(-6L),0x0EFCL,0x748BL,0x748BL}}};
                        uint32_t l_1462 = 5UL;
                        int8_t l_1463 = 0x13L;
                        VECTOR(int64_t, 8) l_1464 = (VECTOR(int64_t, 8))(0x2EA713C217181AACL, (VECTOR(int64_t, 4))(0x2EA713C217181AACL, (VECTOR(int64_t, 2))(0x2EA713C217181AACL, 1L), 1L), 1L, 0x2EA713C217181AACL, 1L);
                        int32_t l_1465 = 1L;
                        int64_t l_1466 = 0x7C7694C2A66F9267L;
                        uint32_t l_1467 = 4294967287UL;
                        uint16_t l_1468 = 7UL;
                        int32_t l_1469 = 0x56BF59CCL;
                        int64_t l_1470 = 0x7FF04483252D3D8AL;
                        uint8_t l_1471 = 0x58L;
                        uint32_t l_1472[1];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1454[i] = (void*)0;
                        for (i = 0; i < 1; i++)
                            l_1472[i] = 0x9166CA48L;
                        l_1452 &= (l_1301 = ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1450.xxzz)), 0x4F37433BL, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1451.s99)).yyyyyyyyyyxyyxxx)).sa, 0L, 4L)).s22, (int32_t)0x68DCD4F7L))).lo);
                        l_1454[0] = l_1453;
                        l_1472[0] = (l_1471 = (l_1470 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1455.s2053)).hi)), (int32_t)l_1456, (int32_t)(l_1301 &= (((VECTOR(int32_t, 4))(0x4F04FD70L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(0x5EB43103L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(0x4C16L, l_1457, 0x7407L, 0x731BL)), ((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1458.s31)), 0x1C38L, 0x2CA6L, (l_1468 = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))((l_1459 , (l_1460 , (l_1461[1][2][3] , 0x3A0346D2C4D4B0F2L))), (l_1463 = l_1462), 0x446BE045B4E76947L, (-1L))).x, ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(l_1464.s4604314417522154)).s90, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((((l_1465 &= 6L) , (GROUP_DIVERGE(2, 1) , l_1466)) , l_1467), ((VECTOR(int64_t, 2))(0L)), 0x6FBEBA3AAEBCF3EEL, (-7L), 0L, 1L, (-1L))))).s64, ((VECTOR(int64_t, 2))((-1L)))))), 0x53226AFDE9E8D0C4L, 0x1C853634FA53052AL, 4L, 6L, 0x2424E46D9479D96DL)).s6 , GROUP_DIVERGE(1, 1))), ((VECTOR(uint16_t, 2))(65528UL)), 0UL)).s2314542625761143))).s30e4))).yzxxwyzz)).s4, ((VECTOR(int32_t, 8))(9L)), 1L, 1L, ((VECTOR(int32_t, 4))(0L)))).s0d, ((VECTOR(int32_t, 2))((-1L)))))), 0x7FA34F33L)).w , l_1469))))).yyxxxyyx, ((VECTOR(int32_t, 8))(1L))))).s74)).odd));
                    }
                    else
                    { /* block id: 631 */
                        int32_t *l_1473 = (void*)0;
                        int64_t l_1474 = 0x020E5FE764464FA6L;
                        uint32_t l_1475 = 0x8085FFE9L;
                        uint32_t l_1478 = 0xFFA7ED4DL;
                        int16_t l_1479[7];
                        uint32_t l_1480 = 4294967290UL;
                        VECTOR(int32_t, 8) l_1481 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0625B3BEL), 0x0625B3BEL), 0x0625B3BEL, 0L, 0x0625B3BEL);
                        VECTOR(int16_t, 4) l_1482 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x7C40L), 0x7C40L);
                        VECTOR(uint16_t, 2) l_1483 = (VECTOR(uint16_t, 2))(9UL, 0x93AFL);
                        uint64_t l_1484 = 0x1F44485122B97236L;
                        int32_t l_1485 = 2L;
                        VECTOR(int32_t, 4) l_1486 = (VECTOR(int32_t, 4))(0x58A5E6AEL, (VECTOR(int32_t, 2))(0x58A5E6AEL, 0x2DC248A4L), 0x2DC248A4L);
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1479[i] = (-2L);
                        l_1473 = l_1473;
                        ++l_1475;
                        l_1301 ^= ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(0x2D65FD15L, (l_1480 |= (l_1478 , l_1479[5])), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1481.s76414304)))).s07)).lo, 0x7324568EL, ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_1482.wwxzzzyz)))).lo, ((VECTOR(uint16_t, 8))(l_1483.xxxxyyxy)).hi))), l_1484, 9L, 0x0B75003FL)), ((VECTOR(int32_t, 4))(0x1A57C3B6L, l_1485, 0x1DE2BE1EL, 1L)))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1486.xy)).yxxxyxyy))))).s5;
                    }
                    if ((l_1487 , (l_1301 |= l_1488)))
                    { /* block id: 638 */
                        int64_t l_1489 = 0x366E9350CF10F249L;
                        uint16_t l_1490 = 0x0858L;
                        uint64_t l_1491 = 0x68A93458E3DFA40DL;
                        int16_t l_1492 = 0x3A8EL;
                        int32_t l_1493 = 6L;
                        int32_t l_1495 = (-10L);
                        int32_t *l_1494 = &l_1495;
                        int32_t *l_1496 = &l_1495;
                        int32_t *l_1497[1];
                        int32_t *l_1498 = &l_1495;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1497[i] = &l_1495;
                        l_1498 = ((l_1490 = (l_1488 = l_1489)) , (l_1497[0] = ((l_1491 , l_1492) , (l_1493 , (l_1496 = l_1494)))));
                    }
                    else
                    { /* block id: 644 */
                        int32_t l_1500 = 6L;
                        int32_t *l_1499 = &l_1500;
                        int32_t *l_1501[9][10] = {{&l_1500,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500},{&l_1500,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500},{&l_1500,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500},{&l_1500,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500},{&l_1500,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500},{&l_1500,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500},{&l_1500,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500},{&l_1500,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500},{&l_1500,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500,&l_1500}};
                        int32_t *l_1502 = &l_1500;
                        int32_t *l_1503[8][1][4] = {{{&l_1500,&l_1500,&l_1500,&l_1500}},{{&l_1500,&l_1500,&l_1500,&l_1500}},{{&l_1500,&l_1500,&l_1500,&l_1500}},{{&l_1500,&l_1500,&l_1500,&l_1500}},{{&l_1500,&l_1500,&l_1500,&l_1500}},{{&l_1500,&l_1500,&l_1500,&l_1500}},{{&l_1500,&l_1500,&l_1500,&l_1500}},{{&l_1500,&l_1500,&l_1500,&l_1500}}};
                        int32_t *l_1504 = &l_1500;
                        int32_t *l_1505 = &l_1500;
                        int i, j, k;
                        l_1499 = (void*)0;
                        l_1503[0][0][0] = (l_1502 = l_1501[8][4]);
                        l_1505 = (l_1504 = (void*)0);
                    }
                    l_1301 = l_1506[5][0];
                    l_1509 = (l_1507 = (void*)0);
                }
                unsigned int result = 0;
                result += l_1301;
                int l_1351_i0, l_1351_i1;
                for (l_1351_i0 = 0; l_1351_i0 < 9; l_1351_i0++) {
                    for (l_1351_i1 = 0; l_1351_i1 < 9; l_1351_i1++) {
                        result += l_1351[l_1351_i0][l_1351_i1];
                    }
                }
                atomic_add(&p_1604->g_special_values[9 * get_linear_group_id() + 6], result);
            }
            else
            { /* block id: 655 */
                (1 + 1);
            }
        }
        if ((atomic_inc(&p_1604->l_atomic_input[2]) == 8))
        { /* block id: 660 */
            int32_t l_1511 = 0L;
            int32_t *l_1510 = &l_1511;
            int32_t *l_1512 = (void*)0;
            l_1512 = l_1510;
            unsigned int result = 0;
            result += l_1511;
            atomic_add(&p_1604->l_special_values[2], result);
        }
        else
        { /* block id: 662 */
            (1 + 1);
        }
        l_1513 |= p_14;
    }
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1604->g_733 p_1604->g_94 p_1604->g_746 p_1604->g_620 p_1604->l_comm_values p_1604->g_750 p_1604->g_49 p_1604->g_349 p_1604->g_216 p_1604->g_223 p_1604->g_224 p_1604->g_752 p_1604->g_155 p_1604->g_562 p_1604->g_138 p_1604->g_734 p_1604->g_560 p_1604->g_71 p_1604->g_103 p_1604->g_774 p_1604->g_737 p_1604->g_170 p_1604->g_76 p_1604->g_422 p_1604->g_495 p_1604->g_842 p_1604->g_470 p_1604->g_736 p_1604->g_738 p_1604->g_858 p_1604->g_859 p_1604->g_863 p_1604->g_864 p_1604->g_19 p_1604->g_424 p_1604->g_689 p_1604->g_361 p_1604->g_455 p_1604->g_111 p_1604->g_70 p_1604->g_547 p_1604->g_77 p_1604->g_874 p_1604->g_735 p_1604->g_925 p_1604->g_210 p_1604->g_753 p_1604->g_375 p_1604->g_20 p_1604->g_875 p_1604->g_594 p_1604->g_348 p_1604->g_966 p_1604->g_967 p_1604->g_152 p_1604->g_457 p_1604->g_48 p_1604->g_990 p_1604->g_1006 p_1604->g_321 p_1604->g_1076
 * writes: p_1604->g_94 p_1604->g_349 p_1604->g_71 p_1604->g_224 p_1604->g_138 p_1604->g_103 p_1604->g_738 p_1604->g_77 p_1604->g_210 p_1604->g_457 p_1604->g_136 p_1604->g_547 p_1604->g_111 p_1604->g_925 p_1604->g_375 p_1604->g_76 p_1604->g_348 p_1604->g_953 p_1604->g_470 p_1604->g_1001
 */
uint32_t  func_24(uint32_t  p_25, int8_t  p_26, int32_t * p_27, int32_t  p_28, int32_t  p_29, struct S0 * p_1604)
{ /* block id: 256 */
    VECTOR(uint64_t, 2) l_730 = (VECTOR(uint64_t, 2))(0x5DB114C55567673CL, 1UL);
    int8_t *l_739[1][7][6] = {{{&p_1604->g_19[0],(void*)0,&p_1604->g_19[0],&p_1604->g_19[0],(void*)0,&p_1604->g_19[0]},{&p_1604->g_19[0],(void*)0,&p_1604->g_19[0],&p_1604->g_19[0],(void*)0,&p_1604->g_19[0]},{&p_1604->g_19[0],(void*)0,&p_1604->g_19[0],&p_1604->g_19[0],(void*)0,&p_1604->g_19[0]},{&p_1604->g_19[0],(void*)0,&p_1604->g_19[0],&p_1604->g_19[0],(void*)0,&p_1604->g_19[0]},{&p_1604->g_19[0],(void*)0,&p_1604->g_19[0],&p_1604->g_19[0],(void*)0,&p_1604->g_19[0]},{&p_1604->g_19[0],(void*)0,&p_1604->g_19[0],&p_1604->g_19[0],(void*)0,&p_1604->g_19[0]},{&p_1604->g_19[0],(void*)0,&p_1604->g_19[0],&p_1604->g_19[0],(void*)0,&p_1604->g_19[0]}}};
    int32_t l_740[7][10] = {{0x7975E0A0L,0x7975E0A0L,0L,0x6D3D0508L,0x2310EFFAL,0x6D3D0508L,0L,0x7975E0A0L,0x7975E0A0L,0L},{0x7975E0A0L,0x7975E0A0L,0L,0x6D3D0508L,0x2310EFFAL,0x6D3D0508L,0L,0x7975E0A0L,0x7975E0A0L,0L},{0x7975E0A0L,0x7975E0A0L,0L,0x6D3D0508L,0x2310EFFAL,0x6D3D0508L,0L,0x7975E0A0L,0x7975E0A0L,0L},{0x7975E0A0L,0x7975E0A0L,0L,0x6D3D0508L,0x2310EFFAL,0x6D3D0508L,0L,0x7975E0A0L,0x7975E0A0L,0L},{0x7975E0A0L,0x7975E0A0L,0L,0x6D3D0508L,0x2310EFFAL,0x6D3D0508L,0L,0x7975E0A0L,0x7975E0A0L,0L},{0x7975E0A0L,0x7975E0A0L,0L,0x6D3D0508L,0x2310EFFAL,0x6D3D0508L,0L,0x7975E0A0L,0x7975E0A0L,0L},{0x7975E0A0L,0x7975E0A0L,0L,0x6D3D0508L,0x2310EFFAL,0x6D3D0508L,0L,0x7975E0A0L,0x7975E0A0L,0L}};
    uint64_t *l_741 = &p_1604->g_94[3][3][0];
    VECTOR(uint32_t, 8) l_749 = (VECTOR(uint32_t, 8))(0x22618C38L, (VECTOR(uint32_t, 4))(0x22618C38L, (VECTOR(uint32_t, 2))(0x22618C38L, 4294967295UL), 4294967295UL), 4294967295UL, 0x22618C38L, 4294967295UL);
    int16_t *l_751 = &p_1604->g_349;
    int64_t **l_754[8] = {(void*)0,&p_1604->g_753,(void*)0,(void*)0,&p_1604->g_753,(void*)0,(void*)0,&p_1604->g_753};
    uint16_t ***l_759 = &p_1604->g_622[2];
    VECTOR(int8_t, 4) l_832 = (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, 3L), 3L);
    int32_t ******l_846 = &p_1604->g_843;
    uint32_t *l_848[9] = {&p_1604->g_470,&p_1604->g_470,&p_1604->g_470,&p_1604->g_470,&p_1604->g_470,&p_1604->g_470,&p_1604->g_470,&p_1604->g_470,&p_1604->g_470};
    uint32_t l_849 = 0x96297A76L;
    VECTOR(uint32_t, 8) l_856 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x4C6313BAL), 0x4C6313BAL), 0x4C6313BAL, 4294967295UL, 0x4C6313BAL);
    uint64_t l_901 = 0x03B2DC6893F5632FL;
    int8_t l_921 = (-1L);
    int32_t l_922 = 0x29F0D75CL;
    int32_t l_923 = 0L;
    int32_t *l_934 = &l_922;
    VECTOR(int16_t, 8) l_935 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x36F3L), 0x36F3L), 0x36F3L, (-1L), 0x36F3L);
    int32_t l_938 = (-10L);
    uint16_t l_944 = 6UL;
    VECTOR(int32_t, 8) l_975 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
    uint64_t l_978 = 0x69D02D6091BB46E1L;
    VECTOR(uint32_t, 4) l_985 = (VECTOR(uint32_t, 4))(0xA3874922L, (VECTOR(uint32_t, 2))(0xA3874922L, 4294967295UL), 4294967295UL);
    uint16_t l_993 = 0xCBD9L;
    VECTOR(int8_t, 4) l_1003 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x01L), 0x01L);
    VECTOR(uint16_t, 4) l_1004 = (VECTOR(uint16_t, 4))(0xCF18L, (VECTOR(uint16_t, 2))(0xCF18L, 0UL), 0UL);
    VECTOR(int16_t, 4) l_1008 = (VECTOR(int16_t, 4))(0x3809L, (VECTOR(int16_t, 2))(0x3809L, 0L), 0L);
    VECTOR(uint64_t, 16) l_1012 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x1B2CDDD34D83692CL), 0x1B2CDDD34D83692CL), 0x1B2CDDD34D83692CL, 1UL, 0x1B2CDDD34D83692CL, (VECTOR(uint64_t, 2))(1UL, 0x1B2CDDD34D83692CL), (VECTOR(uint64_t, 2))(1UL, 0x1B2CDDD34D83692CL), 1UL, 0x1B2CDDD34D83692CL, 1UL, 0x1B2CDDD34D83692CL);
    int8_t l_1049 = 0x64L;
    VECTOR(uint16_t, 8) l_1078 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x9BC7L), 0x9BC7L), 0x9BC7L, 0UL, 0x9BC7L);
    VECTOR(int32_t, 16) l_1082 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), 6L, 1L, 6L, (VECTOR(int32_t, 2))(1L, 6L), (VECTOR(int32_t, 2))(1L, 6L), 1L, 6L, 1L, 6L);
    int i, j, k;
    (*p_1604->g_216) = (GROUP_DIVERGE(2, 1) , (safe_mul_func_int16_t_s_s(((*l_751) |= (p_25 <= ((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 2))(l_730.yx)).yxxxxxxxxyxyxxyy, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_730.y, 1UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))((l_730.y , ((*l_741) &= (safe_sub_func_int8_t_s_s((l_740[2][0] = (p_1604->g_733 != (void*)0)), (0x4A85L <= 1L))))), (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((((((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(0L, 0x4A09L, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_28, ((VECTOR(int16_t, 8))(p_1604->g_746.s56421c55)), 0x11D5L, 0L, (safe_add_func_uint32_t_u_u((l_740[2][0] ^= ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_749.s5702057446770520)).sa5)).hi), p_26)), 0x1F26L, ((VECTOR(int16_t, 2))(5L)), 0x2076L)).s81)).xyyyyxxx, ((VECTOR(int16_t, 8))(8L))))), l_749.s2, 1L, ((VECTOR(int16_t, 2))(0x2FBCL)), 0x6607L, (-10L))).s54, ((VECTOR(int16_t, 2))(0x1CE8L))))).hi , l_749.s7) < p_25) <= p_1604->g_620.s3) | p_1604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1604->tid, 2))]), 15)), l_730.x)), 1UL, 18446744073709551615UL, 0x2C15DBA196D9E0CCL, p_29, ((VECTOR(uint64_t, 4))(0UL)), p_1604->g_750, l_740[0][3], 0x82787561DEDBEDCDL, ((VECTOR(uint64_t, 2))(18446744073709551613UL)), 0UL)).sb6cf)), 0UL, 18446744073709551615UL)).s33)), ((VECTOR(uint64_t, 4))(0xF32E78BC9596F18FL)), 3UL, p_25, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), p_1604->g_49[0][6][1], GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 4))(1UL))))))).s6)), p_28)));
    if ((((GROUP_DIVERGE(1, 1) , (l_740[2][6] >= ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(1UL, 65535UL)).yyxyyxxx, (uint16_t)(*p_1604->g_223)))).s3)) , (l_730.y , (((l_754[6] = p_1604->g_752[3][0][4]) != (void*)0) ^ (p_1604->g_155.y <= ((((void*)0 != l_741) == p_25) <= l_730.x))))) , l_730.x))
    { /* block id: 263 */
        uint16_t ***l_758 = &p_1604->g_622[2];
        uint16_t ****l_757 = &l_758;
        uint16_t ****l_760 = &l_759;
        int32_t *****l_761 = &p_1604->g_169;
        int32_t l_786[10][6] = {{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L},{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L},{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L},{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L},{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L},{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L},{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L},{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L},{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L},{(-1L),0x40DE03C9L,0x2CD99390L,(-1L),(-6L),0x2CD99390L}};
        int8_t l_789 = 0x1BL;
        int i, j;
        l_740[4][6] &= ((+(safe_sub_func_uint16_t_u_u(((*p_1604->g_223) &= (((*l_757) = &p_1604->g_659) != ((*l_760) = l_759))), (+p_1604->g_562.s1)))) > (FAKE_DIVERGE(p_1604->group_2_offset, get_group_id(2), 10) , (l_761 != l_761)));
        for (p_1604->g_138 = 12; (p_1604->g_138 <= 6); p_1604->g_138 = safe_sub_func_int8_t_s_s(p_1604->g_138, 4))
        { /* block id: 270 */
            int16_t *l_768 = (void*)0;
            int32_t l_773 = 0x23D4672CL;
            int32_t l_785 = 0L;
            int32_t l_787 = (-4L);
            int32_t l_788 = (-4L);
            int32_t l_790 = 1L;
            int32_t l_791 = (-1L);
            int32_t l_792 = 0x2294E30EL;
            VECTOR(int8_t, 8) l_794 = (VECTOR(int8_t, 8))(0x2BL, (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0L), 0L), 0L, 0x2BL, 0L);
            int32_t l_795 = (-8L);
            int32_t l_796 = 0x536A0F33L;
            int i;
            (*p_1604->g_216) = (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x4F564A03L, (((void*)0 == (*p_1604->g_733)) != p_1604->g_560.s8), (((((((&p_1604->g_349 != (l_768 = ((+(p_29 , (safe_sub_func_int32_t_s_s(l_730.y, ((*p_1604->g_733) == &p_1604->g_735))))) , l_751))) != 18446744073709551615UL) >= p_26) , &p_29) == &p_1604->g_49[0][3][0]) <= p_29) & FAKE_DIVERGE(p_1604->local_1_offset, get_local_id(1), 10)), p_25, ((VECTOR(int32_t, 8))((-5L))), p_28, 0x71089249L, (-1L), (-1L))).sf3d1)).w, 4294967286UL));
            (*p_1604->g_216) ^= l_749.s4;
            for (p_1604->g_103 = 0; (p_1604->g_103 >= 60); ++p_1604->g_103)
            { /* block id: 276 */
                int32_t *l_775 = &l_740[2][0];
                int32_t *l_776 = (void*)0;
                int32_t *l_777 = &l_740[0][2];
                int32_t *l_778 = &p_1604->g_71;
                int32_t *l_779 = &p_1604->g_111;
                int32_t *l_780 = (void*)0;
                int32_t *l_781 = &p_1604->g_111;
                int32_t *l_782 = &l_740[2][9];
                int32_t *l_783 = &l_740[2][0];
                int32_t *l_784[4];
                int16_t l_793 = 0x2790L;
                uint16_t l_797 = 65535UL;
                int32_t l_802 = 1L;
                int i;
                for (i = 0; i < 4; i++)
                    l_784[i] = &p_1604->g_71;
                for (p_25 = 0; (p_25 == 53); p_25++)
                { /* block id: 279 */
                    (*p_1604->g_216) &= (l_773 < ((VECTOR(int16_t, 2))(p_1604->g_774.xx)).odd);
                }
                l_797--;
                for (l_785 = 0; (l_785 == (-22)); --l_785)
                { /* block id: 285 */
                    uint8_t l_824[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_824[i] = 0xF7L;
                    (*p_1604->g_737) = (void*)0;
                    if (p_25)
                    { /* block id: 287 */
                        (*l_782) ^= p_26;
                        (**p_1604->g_170) = p_27;
                    }
                    else
                    { /* block id: 290 */
                        uint8_t *l_809 = (void*)0;
                        uint8_t *l_810 = (void*)0;
                        uint8_t *l_811 = (void*)0;
                        uint8_t *l_812 = (void*)0;
                        uint8_t *l_813 = (void*)0;
                        int64_t *l_825 = (void*)0;
                        int64_t *l_826[2][7][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        l_786[6][1] ^= l_802;
                        l_787 |= (~(safe_add_func_uint32_t_u_u((p_26 && p_1604->g_560.s1), (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 16))((safe_sub_func_uint8_t_u_u((p_1604->g_210.z = 0xB2L), ((VECTOR(uint8_t, 2))(255UL, 0x4BL)).hi)), p_1604->g_422.y, (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(0x5F92L)), ((*p_1604->g_223) = (safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((l_740[3][1] = (((*l_757) = &p_1604->g_659) != (void*)0)), ((*l_768) = (safe_unary_minus_func_int64_t_s((p_1604->g_457.y = ((l_824[1] , p_1604->g_495.x) < p_28))))))), 0x010370EFL)), 18446744073709551615UL))))), ((VECTOR(uint64_t, 8))(0x582FB0D93F01691AL)), ((VECTOR(uint64_t, 2))(0x066EA83FC43C82ADL)), ((VECTOR(uint64_t, 2))(0xA74BDC6229AFFA08L)), 1UL)).sb, 0x6A672CDB2D9D21EEL)))));
                        if (p_28)
                            break;
                    }
                }
            }
        }
    }
    else
    { /* block id: 304 */
        int8_t l_833[6][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
        int32_t *******l_844 = (void*)0;
        int32_t *******l_845[7][10] = {{(void*)0,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842},{(void*)0,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842},{(void*)0,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842},{(void*)0,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842},{(void*)0,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842},{(void*)0,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842},{(void*)0,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842,&p_1604->g_842}};
        uint8_t l_847 = 247UL;
        volatile int32_t * volatile l_850 = (void*)0;/* VOLATILE GLOBAL l_850 */
        VECTOR(int32_t, 16) l_873 = (VECTOR(int32_t, 16))(0x4378AE93L, (VECTOR(int32_t, 4))(0x4378AE93L, (VECTOR(int32_t, 2))(0x4378AE93L, (-1L)), (-1L)), (-1L), 0x4378AE93L, (-1L), (VECTOR(int32_t, 2))(0x4378AE93L, (-1L)), (VECTOR(int32_t, 2))(0x4378AE93L, (-1L)), 0x4378AE93L, (-1L), 0x4378AE93L, (-1L));
        uint64_t **l_877 = &p_1604->g_875[0];
        uint64_t **l_878 = &p_1604->g_875[0];
        uint8_t l_879 = 0xCCL;
        int8_t l_904 = 0L;
        uint32_t *l_911 = (void*)0;
        uint32_t *l_912[2];
        uint16_t *l_919 = (void*)0;
        uint16_t *l_920[1];
        int32_t l_924 = (-1L);
        int64_t l_932 = 0x6F22571B2BCB22A7L;
        uint8_t l_933 = 0xE3L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_912[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_920[i] = (void*)0;
        if ((atomic_inc(&p_1604->g_atomic_input[9 * get_linear_group_id() + 3]) == 2))
        { /* block id: 306 */
            uint16_t l_827[9][6] = {{0x96ABL,65530UL,0x96ABL,0x96ABL,65530UL,0x96ABL},{0x96ABL,65530UL,0x96ABL,0x96ABL,65530UL,0x96ABL},{0x96ABL,65530UL,0x96ABL,0x96ABL,65530UL,0x96ABL},{0x96ABL,65530UL,0x96ABL,0x96ABL,65530UL,0x96ABL},{0x96ABL,65530UL,0x96ABL,0x96ABL,65530UL,0x96ABL},{0x96ABL,65530UL,0x96ABL,0x96ABL,65530UL,0x96ABL},{0x96ABL,65530UL,0x96ABL,0x96ABL,65530UL,0x96ABL},{0x96ABL,65530UL,0x96ABL,0x96ABL,65530UL,0x96ABL},{0x96ABL,65530UL,0x96ABL,0x96ABL,65530UL,0x96ABL}};
            int i, j;
            l_827[8][1]++;
            unsigned int result = 0;
            int l_827_i0, l_827_i1;
            for (l_827_i0 = 0; l_827_i0 < 9; l_827_i0++) {
                for (l_827_i1 = 0; l_827_i1 < 6; l_827_i1++) {
                    result += l_827[l_827_i0][l_827_i1];
                }
            }
            atomic_add(&p_1604->g_special_values[9 * get_linear_group_id() + 3], result);
        }
        else
        { /* block id: 308 */
            (1 + 1);
        }
        if ((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))((-4L), ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_832.wywzywxyzxwxwxxz)).s78)).yyxxxyyy)).s47, ((VECTOR(int8_t, 16))((((((*l_751) = (p_1604->g_495.y , ((VECTOR(int16_t, 4))(0x4213L, 6L, 0x46ACL, (-1L))).w)) != 1UL) , l_833[1][1]) || (FAKE_DIVERGE(p_1604->group_2_offset, get_group_id(2), 10) > ((!(l_740[5][7] & ((safe_rshift_func_int8_t_s_u(p_1604->g_155.z, 3)) > 0UL))) ^ (safe_div_func_int32_t_s_s(0L, ((safe_mul_func_uint8_t_u_u((((((safe_mul_func_uint8_t_u_u((p_1604->g_210.y = ((l_846 = p_1604->g_842) != &p_1604->g_734)), p_1604->g_750)) <= l_847) , l_848[5]) != (void*)0) > 0x1EB06F9E24133602L), p_1604->g_495.y)) , p_28)))))), 0x62L, 6L, 0x36L, p_1604->g_562.s3, p_1604->g_470, l_849, 0x3EL, 0x1BL, ((VECTOR(int8_t, 2))(0x65L)), 3L, ((VECTOR(int8_t, 2))(1L)), 0L, 0x37L)).s3a))), 0x6FL, 0x66L, 0x34L, p_26, ((VECTOR(int8_t, 8))(0x53L)), 0x00L)).odd, ((VECTOR(int8_t, 8))(0x71L))))).s0054617625207047)).odd)).s6, p_28)))
        { /* block id: 314 */
            int16_t l_851 = 0x1F46L;
            VECTOR(uint32_t, 8) l_857 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL);
            uint32_t **l_862 = &l_848[5];
            int32_t *l_865 = &p_1604->g_49[0][3][0];
            int32_t ****l_866 = &p_1604->g_170;
            int i;
            l_850 = (**p_1604->g_736);
            (*p_1604->g_76) = func_41((0x7DL > (0x24L >= ((((FAKE_DIVERGE(p_1604->local_2_offset, get_local_id(2), 10) , ((l_851 , ((((safe_add_func_int8_t_s_s((((*l_751) = (((p_29 , func_41(((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_856.s31)).yxyxxxxy)).s5334657740463301)).saaa9)), ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(l_857.s25411577)).lo, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 4))(p_1604->g_858.s31e4)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(p_1604->g_859.xyxxyxxy)).odd, ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 2))(1UL, 0xFE7F98BAL)).xxxyyyxy, ((VECTOR(uint32_t, 8))(1UL, (((*p_1604->g_216) = ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((p_25 == ((+(safe_div_func_int64_t_s_s((((l_862 != l_862) , ((VECTOR(uint8_t, 2))(p_1604->g_863.s52)).odd) <= (0x48L & ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1604->g_864.xxyxxyyx)))).s1)), 0xB82847A3AECC3C91L))) && p_25)), (-8L), p_28, 0x49AD60A7L, ((VECTOR(int32_t, 2))(1L)), (-5L), p_29, (-3L), l_857.s5, p_28, (-1L), ((VECTOR(int32_t, 2))(0x2C521004L)), 8L, 0L)))).sdf31, ((VECTOR(int32_t, 4))((-1L)))))).z) & p_26), p_1604->g_19[0], ((VECTOR(uint32_t, 2))(1UL)), 0UL, 9UL, 0xD2537885L))))).hi, ((VECTOR(uint32_t, 4))(0x11E36FEBL))))), p_1604->g_424.y, p_1604->g_689.s7, 4294967294UL, ((VECTOR(uint32_t, 2))(4294967290UL)), l_857.s2, 0x0E6263C6L, ((VECTOR(uint32_t, 2))(0xFFB22818L)), ((VECTOR(uint32_t, 2))(4294967295UL)), 0UL)).sfa46, ((VECTOR(uint32_t, 4))(0UL))))).hi)).yxxy, ((VECTOR(uint32_t, 4))(4294967289UL)))))))).x, 0UL)) ^ p_1604->g_361.s4), l_865, p_1604)) == (void*)0) ^ p_25)) > p_26), p_25)) <= p_1604->g_470) , 249UL) >= (-6L))) , l_866)) == l_866) <= 1L) , 0x02L))), &p_1604->g_49[0][3][0], p_1604);
            for (p_1604->g_103 = 0; (p_1604->g_103 == 42); p_1604->g_103++)
            { /* block id: 321 */
                l_740[0][6] |= (~((void*)0 != (*p_1604->g_170)));
            }
            (****l_866) ^= (safe_rshift_func_uint16_t_u_s(65535UL, 6));
        }
        else
        { /* block id: 325 */
            uint64_t ***l_876[5];
            int32_t l_891 = 0x56C7AD12L;
            int64_t l_892 = (-1L);
            int32_t l_893 = 0x460ACBFCL;
            int32_t l_896[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
            int i;
            for (i = 0; i < 5; i++)
                l_876[i] = (void*)0;
            l_879 = (safe_sub_func_int16_t_s_s(((((l_740[2][0] = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_873.s1d18)).wzzwxzxy)).s6) ^ (~(p_26 , p_29))) & ((l_877 = p_1604->g_874) != l_878)) , 4L), 0x3CF6L));
            for (l_849 = 15; (l_849 == 19); l_849 = safe_add_func_uint16_t_u_u(l_849, 7))
            { /* block id: 331 */
                int64_t l_890 = 0x7628C435EE16AE81L;
                int32_t l_894 = 0x4483C33CL;
                int32_t l_895 = (-6L);
                int32_t l_897 = 0x2B7862CEL;
                int32_t l_898 = (-1L);
                int32_t l_899 = 0x39EA4649L;
                int32_t l_900[9][5] = {{(-1L),1L,0x455C5AB7L,0x78F06742L,0x455C5AB7L},{(-1L),1L,0x455C5AB7L,0x78F06742L,0x455C5AB7L},{(-1L),1L,0x455C5AB7L,0x78F06742L,0x455C5AB7L},{(-1L),1L,0x455C5AB7L,0x78F06742L,0x455C5AB7L},{(-1L),1L,0x455C5AB7L,0x78F06742L,0x455C5AB7L},{(-1L),1L,0x455C5AB7L,0x78F06742L,0x455C5AB7L},{(-1L),1L,0x455C5AB7L,0x78F06742L,0x455C5AB7L},{(-1L),1L,0x455C5AB7L,0x78F06742L,0x455C5AB7L},{(-1L),1L,0x455C5AB7L,0x78F06742L,0x455C5AB7L}};
                int i, j;
                if ((atomic_inc(&p_1604->l_atomic_input[7]) == 0))
                { /* block id: 333 */
                    uint32_t l_882 = 4294967295UL;
                    uint32_t l_885 = 0xD359BEE5L;
                    int64_t l_888 = (-10L);
                    int32_t l_889 = (-5L);
                    ++l_882;
                    l_885--;
                    l_889 |= l_888;
                    unsigned int result = 0;
                    result += l_882;
                    result += l_885;
                    result += l_888;
                    result += l_889;
                    atomic_add(&p_1604->l_special_values[7], result);
                }
                else
                { /* block id: 337 */
                    (1 + 1);
                }
                l_901++;
            }
            (****p_1604->g_734) = (***p_1604->g_735);
        }
        l_934 = func_56((((*p_1604->g_753) |= ((p_26 , (l_904 || (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*p_1604->g_223) = ((safe_div_func_uint32_t_u_u((p_1604->g_547 |= GROUP_DIVERGE(1, 1)), p_1604->g_620.s3)) , (((*p_27) , (l_932 = (safe_rshift_func_int8_t_s_u((((VECTOR(int16_t, 2))(0x195EL, 0x688BL)).even ^ ((*l_751) ^= (((*p_1604->g_223) != (((safe_mod_func_int32_t_s_s(((*p_1604->g_216) = ((safe_rshift_func_uint16_t_u_s((p_1604->g_925--), ((p_26 = p_25) > (((p_25 || ((safe_sub_func_int16_t_s_s(p_1604->g_210.z, (safe_rshift_func_uint16_t_u_s((*p_1604->g_223), 4)))) ^ (-7L))) , p_29) == 0x1307L)))) >= (*p_1604->g_216))), 0x4F2DC0A4L)) , p_25) != 0L)) | p_25))), 7)))) != (-2L)))), 5)), 5)))) > p_1604->g_210.w)) , (void*)0), p_1604->g_20.s3, l_933, p_25, p_1604);
        if (p_25)
        { /* block id: 353 */
            (*p_1604->g_216) = (((VECTOR(int16_t, 4))(l_935.s3217)).z | GROUP_DIVERGE(2, 1));
        }
        else
        { /* block id: 355 */
            int8_t l_936 = 3L;
            int32_t l_937[5] = {0L,0L,0L,0L,0L};
            uint32_t l_939 = 0xB231DF97L;
            int i;
            --l_939;
            l_934 = func_41(((--(**l_877)) , p_1604->g_594.s0), l_911, p_1604);
            l_944--;
        }
    }
    for (p_1604->g_348 = 0; (p_1604->g_348 > 17); ++p_1604->g_348)
    { /* block id: 364 */
        int64_t *l_952 = (void*)0;
        int64_t **l_951[1][9][2] = {{{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952},{&l_952,&l_952}}};
        uint16_t **l_960 = &p_1604->g_228;
        int32_t l_963[1][10][3] = {{{0x36F63C6BL,0x573A0FABL,0x573A0FABL},{0x36F63C6BL,0x573A0FABL,0x573A0FABL},{0x36F63C6BL,0x573A0FABL,0x573A0FABL},{0x36F63C6BL,0x573A0FABL,0x573A0FABL},{0x36F63C6BL,0x573A0FABL,0x573A0FABL},{0x36F63C6BL,0x573A0FABL,0x573A0FABL},{0x36F63C6BL,0x573A0FABL,0x573A0FABL},{0x36F63C6BL,0x573A0FABL,0x573A0FABL},{0x36F63C6BL,0x573A0FABL,0x573A0FABL},{0x36F63C6BL,0x573A0FABL,0x573A0FABL}}};
        uint64_t l_974 = 0UL;
        int32_t *l_976 = &l_963[0][0][0];
        int32_t *l_977 = &l_922;
        int16_t l_986[4][6][3] = {{{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L}},{{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L}},{{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L}},{{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L},{0x1D06L,7L,0x6ED5L}}};
        int i, j, k;
        (*p_1604->g_216) |= (0x13210644L < (safe_add_func_uint64_t_u_u((((p_1604->g_953[7][0] = (void*)0) == l_741) > (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(p_28, ((~((void*)0 == l_960)) || (((((((l_963[0][0][0] <= ((((VECTOR(uint16_t, 16))(9UL, 0x056CL, 0xF93DL, (safe_mul_func_uint16_t_u_u(l_963[0][8][1], ((VECTOR(uint16_t, 8))(p_1604->g_966.s61725451)).s1)), 65535UL, 1UL, ((VECTOR(uint16_t, 8))(6UL, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(p_1604->g_967.xw)), (int16_t)((safe_mul_func_int8_t_s_s((((*l_751) = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((l_963[0][4][1] == p_1604->g_152[1]) , GROUP_DIVERGE(1, 1)), p_29)), l_963[0][3][2]))) , p_28), FAKE_DIVERGE(p_1604->global_2_offset, get_global_id(2), 10))) ^ l_963[0][0][0]))))))), 1UL, 0xF7AEL)).odd, ((VECTOR(uint16_t, 2))(0xD1C8L))))), ((VECTOR(uint16_t, 4))(1UL)), 0x5997L)), 0xBBF3L, 0xD2DCL)).sb ^ p_29) != 0x05B0L)) , GROUP_DIVERGE(0, 1)) >= 0L) > l_974) == (**p_1604->g_874)) >= GROUP_DIVERGE(1, 1)) <= p_1604->g_457.y)))), 1)), 7))), 1UL)));
        l_978++;
        (*l_977) = ((((+(((safe_mul_func_int16_t_s_s(p_26, ((*l_976) = (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(l_985.wzzywwzw)).s7, l_986[0][0][2]))))) == ((VECTOR(uint64_t, 4))(1UL, ((((*p_1604->g_48) , (safe_unary_minus_func_int8_t_s((0x019A08B40D29C540L | (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(p_1604->g_990.xz)).odd, ((safe_add_func_uint8_t_u_u(((p_29 <= p_25) ^ (p_28 < ((((void*)0 != l_976) ^ 0x26L) & 0x47L))), 0x23L)) || (*l_977)))))))) >= 18446744073709551615UL) < 2L), 1UL, 0xA54E1EE08C984A6CL)).w) | p_29)) >= l_993) && 0x1342182BD14995EDL) && 0x115F840EAC3C9817L);
    }
    for (l_901 = (-5); (l_901 <= 18); l_901 = safe_add_func_uint16_t_u_u(l_901, 1))
    { /* block id: 374 */
        VECTOR(int32_t, 4) l_1005 = (VECTOR(int32_t, 4))(0x3B8DF458L, (VECTOR(int32_t, 2))(0x3B8DF458L, 0x65085670L), 0x65085670L);
        VECTOR(uint64_t, 4) l_1013 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL);
        uint16_t l_1016 = 0x3B8DL;
        uint64_t **l_1018 = &p_1604->g_875[0];
        VECTOR(uint16_t, 16) l_1077 = (VECTOR(uint16_t, 16))(0x87AFL, (VECTOR(uint16_t, 4))(0x87AFL, (VECTOR(uint16_t, 2))(0x87AFL, 65535UL), 65535UL), 65535UL, 0x87AFL, 65535UL, (VECTOR(uint16_t, 2))(0x87AFL, 65535UL), (VECTOR(uint16_t, 2))(0x87AFL, 65535UL), 0x87AFL, 65535UL, 0x87AFL, 65535UL);
        VECTOR(uint16_t, 16) l_1079 = (VECTOR(uint16_t, 16))(0xC524L, (VECTOR(uint16_t, 4))(0xC524L, (VECTOR(uint16_t, 2))(0xC524L, 0xC04EL), 0xC04EL), 0xC04EL, 0xC524L, 0xC04EL, (VECTOR(uint16_t, 2))(0xC524L, 0xC04EL), (VECTOR(uint16_t, 2))(0xC524L, 0xC04EL), 0xC524L, 0xC04EL, 0xC524L, 0xC04EL);
        VECTOR(int32_t, 16) l_1083 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2DF9F431L), 0x2DF9F431L), 0x2DF9F431L, 0L, 0x2DF9F431L, (VECTOR(int32_t, 2))(0L, 0x2DF9F431L), (VECTOR(int32_t, 2))(0L, 0x2DF9F431L), 0L, 0x2DF9F431L, 0L, 0x2DF9F431L);
        int i;
        for (p_1604->g_925 = 0; (p_1604->g_925 <= 54); ++p_1604->g_925)
        { /* block id: 377 */
            VECTOR(int32_t, 4) l_1002 = (VECTOR(int32_t, 4))(0x44421B75L, (VECTOR(int32_t, 2))(0x44421B75L, 0x751AF845L), 0x751AF845L);
            VECTOR(int16_t, 8) l_1007 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0L), 0L), 0L, 5L, 0L);
            VECTOR(uint16_t, 4) l_1009 = (VECTOR(uint16_t, 4))(0x3C56L, (VECTOR(uint16_t, 2))(0x3C56L, 0UL), 0UL);
            VECTOR(uint64_t, 2) l_1014 = (VECTOR(uint64_t, 2))(0x89E1010F3FEC70E2L, 18446744073709551613UL);
            uint64_t **l_1017 = &l_741;
            int32_t *l_1064 = &p_1604->g_71;
            uint32_t *l_1073[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t l_1086 = 0x178BL;
            int i;
            if ((*p_1604->g_70))
                break;
            for (p_1604->g_470 = (-23); (p_1604->g_470 <= 17); p_1604->g_470 = safe_add_func_int16_t_s_s(p_1604->g_470, 5))
            { /* block id: 381 */
                uint64_t *l_1000 = &p_1604->g_1001;
                int32_t l_1015[5][7][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
                int i, j, k;
                (*p_1604->g_216) = ((((((*l_1000) = p_1604->g_594.s7) , (0L || ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_1002.yzzwwzwyyxzzwzxz)).s02, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(l_1003.wwwzzwyx)).s43, (int8_t)(p_26 , p_1604->g_746.s1)))).yxyyxxyxxxyyyxxx)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(6UL, 0xC5L)).yyyxyxxy)).s4517131233362674))).sd4, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(0x8595L, 65529UL)).xxyx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1004.yxxw)).zxxzxwyzwwxwwxxy)).sa55f))).lo)))))).xxyyxxxy)).s2, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x71516C5EL, 0x0258C997L)), ((VECTOR(int32_t, 8))(0x6A6936D1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x65553AE3L, 0x7593841CL)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(l_1005.wzxwyxxzzwzzzzyz))))), ((VECTOR(int32_t, 4))(p_1604->g_1006.yyxy)).ywzyxxzzywywyyyw, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0L, (-1L), ((VECTOR(int16_t, 2))(l_1007.s00)), ((VECTOR(int16_t, 2))(l_1008.xx)), (-1L), 9L)).s74)).yxyyyxyyxyxxxxyy, (int16_t)((*l_751) = p_25)))).s2f, ((VECTOR(uint16_t, 2))(l_1009.yy))))).yyxxyxyyyxxyxyxx))).s3b)), p_26, 0x77874A30L, 1L)).s77, ((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 8))(0x096AD956L, ((VECTOR(int32_t, 2))(0x474B2A84L, 0x20BAB77AL)), (((((p_1604->g_321.x != (((safe_lshift_func_int16_t_s_s((((VECTOR(uint64_t, 8))(18446744073709551615UL, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 6UL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 2))(0xA2047A59F39FE7E9L, 0x3133A70C4678C41CL)).xxxxxyyxyyxxyyyy, ((VECTOR(uint64_t, 16))(l_1012.s7d82f501138b6bbd))))).even)).s35)), 0x84A04354C388E018L, 0UL, 18446744073709551615UL)).s5 == (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_1013.wywx)))).ywyyzxxyzwxzzyzw, ((VECTOR(uint64_t, 16))((0x2E8A27E4C18C3EA3L != ((VECTOR(uint64_t, 4))(l_1014.xxxy)).y), ((**p_1604->g_874) ^= ((!((l_1015[4][6][0] = p_28) < 18446744073709551615UL)) <= p_29)), 0x29AE54D6ACCAA87AL, 18446744073709551606UL, p_29, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0xC51F9549FCA616B7L, l_1016, (**p_1604->g_874), 0xB0F18F8D15A6AD8AL, p_26, 3UL, 0UL, 0xBF9703BEB57FE3EAL, 1UL))))))).sb != p_25)), 8)) && 0xCA4D56C0806D5101L) == 253UL)) <= (*p_1604->g_216)) , l_1013.y) | l_1014.x) >= p_25), 7L, 0x0FAFC659L, 0L, 0x28ED8606L)), l_1013.z, ((VECTOR(int32_t, 4))(0L)), 0x399272D2L, 0x39F287F6L)).s0b))), (-1L))).even)), (-2L), 0x532BE1CDL)).yzxxwyzz)).s0 | p_25) | 0x53L))) > 0UL) & 0x3A18L) || 18446744073709551615UL);
            }
            if (((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0L, (-1L))))), (-4L), 0x19L)).y , l_1017) == l_1018))
            { /* block id: 388 */
                for (l_923 = (-15); (l_923 >= 4); ++l_923)
                { /* block id: 391 */
                    if ((atomic_inc(&p_1604->g_atomic_input[9 * get_linear_group_id() + 1]) == 5))
                    { /* block id: 393 */
                        uint32_t l_1021 = 0xC249E7EBL;
                        uint32_t l_1024 = 4294967288UL;
                        int32_t l_1025 = 0L;
                        uint8_t l_1026[8];
                        uint32_t l_1027[2];
                        int32_t l_1028[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
                        int32_t l_1029 = 0x655D5C74L;
                        int8_t l_1030 = 0x19L;
                        int32_t l_1031 = 0L;
                        uint16_t l_1032 = 1UL;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1026[i] = 3UL;
                        for (i = 0; i < 2; i++)
                            l_1027[i] = 0x8CC81F14L;
                        l_1021++;
                        l_1032 &= (l_1031 &= ((l_1024 , (l_1025 , (l_1028[3] = (l_1026[3] , l_1027[0])))) , (l_1030 = l_1029)));
                        unsigned int result = 0;
                        result += l_1021;
                        result += l_1024;
                        result += l_1025;
                        int l_1026_i0;
                        for (l_1026_i0 = 0; l_1026_i0 < 8; l_1026_i0++) {
                            result += l_1026[l_1026_i0];
                        }
                        int l_1027_i0;
                        for (l_1027_i0 = 0; l_1027_i0 < 2; l_1027_i0++) {
                            result += l_1027[l_1027_i0];
                        }
                        int l_1028_i0;
                        for (l_1028_i0 = 0; l_1028_i0 < 5; l_1028_i0++) {
                            result += l_1028[l_1028_i0];
                        }
                        result += l_1029;
                        result += l_1030;
                        result += l_1031;
                        result += l_1032;
                        atomic_add(&p_1604->g_special_values[9 * get_linear_group_id() + 1], result);
                    }
                    else
                    { /* block id: 399 */
                        (1 + 1);
                    }
                }
                (*p_1604->g_216) = 0x69C93000L;
                if ((atomic_inc(&p_1604->l_atomic_input[5]) == 2))
                { /* block id: 405 */
                    int32_t l_1033 = 0L;
                    int32_t l_1044[4] = {0x6A441327L,0x6A441327L,0x6A441327L,0x6A441327L};
                    int32_t l_1045 = 1L;
                    uint64_t l_1046[4] = {0x694E07733A326EEEL,0x694E07733A326EEEL,0x694E07733A326EEEL,0x694E07733A326EEEL};
                    int i;
                    for (l_1033 = 3; (l_1033 == (-24)); l_1033 = safe_sub_func_int8_t_s_s(l_1033, 9))
                    { /* block id: 408 */
                        int32_t l_1037 = 0x5D421C1CL;
                        int32_t *l_1036 = &l_1037;
                        int32_t *l_1038[10][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1037}};
                        int i, j;
                        l_1038[5][2] = l_1036;
                    }
                    for (l_1033 = 0; (l_1033 >= (-30)); l_1033 = safe_sub_func_int8_t_s_s(l_1033, 9))
                    { /* block id: 413 */
                        int32_t l_1042 = (-1L);
                        int32_t *l_1041 = &l_1042;
                        int32_t *l_1043 = &l_1042;
                        l_1041 = (void*)0;
                        l_1043 = (void*)0;
                    }
                    ++l_1046[0];
                    unsigned int result = 0;
                    result += l_1033;
                    int l_1044_i0;
                    for (l_1044_i0 = 0; l_1044_i0 < 4; l_1044_i0++) {
                        result += l_1044[l_1044_i0];
                    }
                    result += l_1045;
                    int l_1046_i0;
                    for (l_1046_i0 = 0; l_1046_i0 < 4; l_1046_i0++) {
                        result += l_1046[l_1046_i0];
                    }
                    atomic_add(&p_1604->l_special_values[5], result);
                }
                else
                { /* block id: 418 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 421 */
                int32_t ***l_1062 = &p_1604->g_76;
                int32_t l_1063 = 0x09711C8EL;
                (*p_1604->g_70) = (((*p_1604->g_223) = p_28) <= (0x5859A83704DEC554L && (l_1049 , (((((safe_mul_func_int8_t_s_s(p_26, ((p_25 >= ((safe_rshift_func_uint8_t_u_u(((((void*)0 == &p_1604->g_874) > ((((safe_rshift_func_int16_t_s_u((+(safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((void*)0 == l_1062) , 0L), 2)), p_1604->g_424.y))), 11)) && 0UL) <= p_28) , GROUP_DIVERGE(1, 1))) == 1UL), 4)) , (-1L))) < GROUP_DIVERGE(2, 1)))) , p_25) , p_29) && l_1063) , 0x31053BC4697ABA40L))));
                l_1064 = p_27;
            }
            (*p_1604->g_70) = (((safe_add_func_int64_t_s_s((((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((**p_1604->g_874) <= (0x79B0D92A43A8D304L && ((l_1005.x |= p_26) < (0x97BCL | ((*p_1604->g_223) &= ((VECTOR(uint16_t, 2))(1UL, 1UL)).hi))))), l_1013.z)) || p_25), p_28)), ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(0x2806L, 0xEB6BL, 6UL, 0xA698L)).even, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_1604->g_1076.xx)).even, ((VECTOR(uint16_t, 2))(l_1077.s59)), 65532UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_1078.s66)))), 0UL, 0xB824L)).s40))).xxxyxxxx, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 8))(l_1079.s0d120dbf)).s21, (uint16_t)((VECTOR(uint16_t, 2))(65531UL, 1UL)).lo, (uint16_t)((safe_rshift_func_int16_t_s_s(((3UL >= (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1082.sb9)))), ((VECTOR(int32_t, 2))(0x418F904DL, 0x2918DD44L)), (-1L), ((VECTOR(int32_t, 2))(l_1083.s38)), 0x46F072CCL)).s7 <= ((safe_mul_func_uint16_t_u_u(p_26, 0xF87BL)) && 0x2FFB5233L))) , p_1604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1604->tid, 2))]), 0)) , p_25)))).xxxxxyyx, ((VECTOR(uint16_t, 8))(65531UL))))).s0, p_1604->g_594.s7)) , 0x63L))) & l_1086) < p_28), l_1013.w)) , p_26) >= 0x61L);
        }
    }
    return p_1604->g_422.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1604->g_223 p_1604->g_224 p_1604->g_577 p_1604->g_594 p_1604->g_349 p_1604->g_152 p_1604->g_455 p_1604->g_216 p_1604->g_71 p_1604->g_621 p_1604->g_495 p_1604->g_20 p_1604->g_348 p_1604->g_562 p_1604->g_248 p_1604->g_94 p_1604->g_375 p_1604->g_321 p_1604->g_684 p_1604->g_689 p_1604->g_423 p_1604->g_501 p_1604->g_560 p_1604->g_659 p_1604->g_454
 * writes: p_1604->g_210 p_1604->g_349 p_1604->g_152 p_1604->g_94 p_1604->g_71 p_1604->g_622 p_1604->g_659 p_1604->g_562 p_1604->g_224
 */
uint32_t  func_30(int8_t  p_31, int32_t * p_32, int64_t  p_33, int32_t * p_34, struct S0 * p_1604)
{ /* block id: 216 */
    VECTOR(int16_t, 2) l_571 = (VECTOR(int16_t, 2))(0x3228L, 0x7155L);
    VECTOR(uint64_t, 8) l_572 = (VECTOR(uint64_t, 8))(0xE9EB4B8BE10360DFL, (VECTOR(uint64_t, 4))(0xE9EB4B8BE10360DFL, (VECTOR(uint64_t, 2))(0xE9EB4B8BE10360DFL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0xE9EB4B8BE10360DFL, 18446744073709551606UL);
    int16_t *l_582[8] = {&p_1604->g_152[1],&p_1604->g_152[1],&p_1604->g_152[1],&p_1604->g_152[1],&p_1604->g_152[1],&p_1604->g_152[1],&p_1604->g_152[1],&p_1604->g_152[1]};
    int16_t **l_581 = &l_582[4];
    VECTOR(uint8_t, 2) l_593 = (VECTOR(uint8_t, 2))(254UL, 0x2FL);
    uint8_t *l_595[2];
    uint64_t *l_597 = (void*)0;
    uint64_t **l_596 = &l_597;
    uint16_t *l_598 = (void*)0;
    uint16_t *l_599 = (void*)0;
    uint16_t *l_600 = (void*)0;
    uint16_t *l_601 = (void*)0;
    uint16_t *l_602 = (void*)0;
    uint16_t *l_603 = (void*)0;
    uint16_t *l_604 = (void*)0;
    uint16_t *l_605 = (void*)0;
    int32_t l_606 = 0x260E2699L;
    int32_t l_607 = 0x1B1AE721L;
    uint64_t *l_608 = &p_1604->g_94[6][0][0];
    int32_t l_626 = 0x3DD2FB97L;
    int32_t l_633 = 1L;
    int16_t l_634 = (-1L);
    int32_t l_635 = 0x14CB2B4CL;
    int32_t l_637 = 0L;
    int32_t l_638 = 0x44B87739L;
    int32_t l_639 = 1L;
    int32_t l_640 = 0x2E9C5AD5L;
    int8_t l_641 = 0L;
    int32_t l_642 = 2L;
    int32_t l_643 = 0x49CB24DFL;
    int32_t l_644[10][2] = {{0x1AB86E69L,8L},{0x1AB86E69L,8L},{0x1AB86E69L,8L},{0x1AB86E69L,8L},{0x1AB86E69L,8L},{0x1AB86E69L,8L},{0x1AB86E69L,8L},{0x1AB86E69L,8L},{0x1AB86E69L,8L},{0x1AB86E69L,8L}};
    uint32_t l_645 = 4294967295UL;
    uint16_t l_651 = 65535UL;
    VECTOR(int16_t, 8) l_661 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x78F1L), 0x78F1L), 0x78F1L, 1L, 0x78F1L);
    VECTOR(uint8_t, 16) l_676 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL);
    VECTOR(int32_t, 16) l_681 = (VECTOR(int32_t, 16))(0x6C130C37L, (VECTOR(int32_t, 4))(0x6C130C37L, (VECTOR(int32_t, 2))(0x6C130C37L, (-8L)), (-8L)), (-8L), 0x6C130C37L, (-8L), (VECTOR(int32_t, 2))(0x6C130C37L, (-8L)), (VECTOR(int32_t, 2))(0x6C130C37L, (-8L)), 0x6C130C37L, (-8L), 0x6C130C37L, (-8L));
    VECTOR(int32_t, 4) l_682 = (VECTOR(int32_t, 4))(0x225CB0BCL, (VECTOR(int32_t, 2))(0x225CB0BCL, 0x2846F179L), 0x2846F179L);
    uint64_t l_705 = 1UL;
    int32_t l_706 = 0x6624C6C6L;
    uint64_t l_719 = 0x139EEA18E730A795L;
    int32_t *l_724[8];
    uint32_t l_725 = 0xC02A160FL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_595[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_724[i] = (void*)0;
    if (((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(0L, 0x1ACCL, 1L, 0x6683L, ((VECTOR(int16_t, 2))(0x63C6L, 0x6239L)), 0x3ACBL, 0x1411L)), (int16_t)((VECTOR(int16_t, 4))(l_571.xxxy)).y))).s7650044551456373)).s0, (((VECTOR(uint64_t, 2))(l_572.s17)).odd && (((*l_608) = (((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_33, ((l_607 = ((~l_571.y) , ((*p_1604->g_223) == ((**l_581) ^= (((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x4519B23CL)).yyxy)))).yzyxzxyw)).lo, ((VECTOR(uint32_t, 4))(p_1604->g_577.ywyw))))).w & (safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x6B4FL, 1UL)), 0x22EBL, 65535UL)).wyzzzwyxwzyzwwzx)).sd7cd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))((l_606 |= (((safe_add_func_int8_t_s_s(((!(((void*)0 == l_581) > (((((safe_lshift_func_int8_t_s_u(p_33, ((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((GROUP_DIVERGE(0, 1) != (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((p_1604->g_210.w = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_593.yxxyyyyyxxyyxyxy)).s4, ((VECTOR(uint8_t, 2))(p_1604->g_594.s57)), 1UL)).zxyzxzxxxzyxwzwz)).s6), 6)), p_33))), ((void*)0 == l_596))), p_31)) != p_31))) , 0x75EB0FC721E39D70L) != (-4L)) , l_571.y) && l_593.y))) ^ 0UL), p_33)) >= 0L) || p_31)), p_31, 0x00A8L, 0xB613L))))))).z))))))) , l_593.x))), l_593.y)) , (void*)0) != &p_1604->g_348)) >= 0x6C0A0FA2F07912D5L)))) >= 0L))
    { /* block id: 222 */
        int16_t *l_623 = &p_1604->g_349;
        int32_t *l_624 = &p_1604->g_111;
        int32_t *l_625 = (void*)0;
        int32_t *l_627 = (void*)0;
        int32_t *l_628 = (void*)0;
        int32_t *l_629 = &l_606;
        int32_t *l_630 = (void*)0;
        int32_t *l_631[8][9][3] = {{{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0}},{{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0}},{{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0}},{{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0}},{{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0}},{{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0}},{{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0}},{{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0},{&l_626,&l_607,(void*)0}}};
        int8_t l_632 = 0x09L;
        int32_t l_636 = 1L;
        int i, j, k;
        for (p_1604->g_349 = 21; (p_1604->g_349 > 23); ++p_1604->g_349)
        { /* block id: 225 */
            uint64_t *l_619 = &p_1604->g_346[5][0];
            (*p_1604->g_621) = ((safe_rshift_func_int8_t_s_u(9L, ((safe_sub_func_int32_t_s_s((((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(p_1604->g_455.s1, p_33)), p_31)) > ((*p_1604->g_216) &= ((l_619 == ((*l_596) = (((VECTOR(int32_t, 8))(p_1604->g_620.s72772471)).s6 , (*l_596)))) || 0xBFC7EE09E97E403CL))) != 1UL), p_31)) > 0x22L))) , &p_1604->g_228);
            (*p_1604->g_216) |= ((*l_581) != l_623);
        }
        l_645++;
    }
    else
    { /* block id: 232 */
        int32_t *l_648 = &l_642;
        int32_t *l_649 = &l_607;
        int32_t *l_650[2][10] = {{&l_626,(void*)0,&l_626,&l_626,(void*)0,&l_626,&l_626,(void*)0,&l_626,&l_626},{&l_626,(void*)0,&l_626,&l_626,(void*)0,&l_626,&l_626,(void*)0,&l_626,&l_626}};
        uint16_t **l_656 = &l_605;
        int8_t l_673 = 1L;
        VECTOR(int64_t, 2) l_679 = (VECTOR(int64_t, 2))(0x5C602A41F3075231L, 0L);
        int32_t ****l_680 = &p_1604->g_170;
        VECTOR(int32_t, 16) l_683 = (VECTOR(int32_t, 16))(0x2D612918L, (VECTOR(int32_t, 4))(0x2D612918L, (VECTOR(int32_t, 2))(0x2D612918L, 0x3AF1B39CL), 0x3AF1B39CL), 0x3AF1B39CL, 0x2D612918L, 0x3AF1B39CL, (VECTOR(int32_t, 2))(0x2D612918L, 0x3AF1B39CL), (VECTOR(int32_t, 2))(0x2D612918L, 0x3AF1B39CL), 0x2D612918L, 0x3AF1B39CL, 0x2D612918L, 0x3AF1B39CL);
        VECTOR(uint16_t, 2) l_718 = (VECTOR(uint16_t, 2))(65534UL, 65532UL);
        VECTOR(int16_t, 4) l_720 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2FA9L), 0x2FA9L);
        int i, j;
        ++l_651;
        if ((safe_mod_func_uint8_t_u_u(p_31, 0x55L)))
        { /* block id: 234 */
            uint16_t ***l_657 = &p_1604->g_622[2];
            uint16_t ***l_658[1][4] = {{&l_656,&l_656,&l_656,&l_656}};
            VECTOR(int32_t, 8) l_660 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x48B0B6AFL), 0x48B0B6AFL), 0x48B0B6AFL, (-4L), 0x48B0B6AFL);
            int16_t *l_672 = (void*)0;
            int32_t l_690 = 0x5A381F97L;
            int i, j;
            l_606 |= (l_571.x | (((l_656 = ((*l_657) = l_656)) != (p_1604->g_659 = (void*)0)) == (((((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(l_660.s0071)), ((VECTOR(int32_t, 8))(0L, 0x34F0D3DDL, ((+p_31) , ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_661.s63014557)).lo)).yyxzwxyz, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_33, (safe_rshift_func_int8_t_s_u((-1L), ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((p_1604->g_562.sd |= (((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_672 != ((0L & p_33) , l_672)), p_1604->g_495.x)), FAKE_DIVERGE(p_1604->group_0_offset, get_group_id(0), 10))), p_33)), p_1604->g_20.s0)) ^ (-1L)) > p_1604->g_348)), ((VECTOR(int8_t, 2))(9L)), 0x75L)).yzxwyyxwyyxzyxxw)).sf >= p_1604->g_248.s0) && p_33))), 0x05BCL, ((VECTOR(int16_t, 2))((-5L))), p_1604->g_594.s1, p_33, 0x7BDEL, 0L, (*l_649), (-8L), 0x40C9L, 1L, ((VECTOR(int16_t, 2))(1L)), 0x4761L)))).s3e48)), ((VECTOR(int16_t, 4))(0x3FA7L)), ((VECTOR(int16_t, 4))(0L))))).even, ((VECTOR(int16_t, 2))((-8L)))))).yxxxyyxy))).s6307065774742340, ((VECTOR(uint16_t, 16))(0xDD05L))))).s6079, ((VECTOR(int32_t, 4))(0x35769B62L))))).hi, ((VECTOR(int32_t, 2))(0x6A26DD3AL)), ((VECTOR(int32_t, 2))(0x66A1B516L))))).even), 1L, ((VECTOR(int32_t, 4))(1L)))).lo, ((VECTOR(int32_t, 4))(0x386A0002L))))).w , 0x3DB5L) < p_1604->g_94[3][3][0]) <= p_1604->g_375)));
            l_606 = ((*l_648) = (((p_33 , p_1604->g_321.x) != (l_673 ^ (p_33 , (safe_mod_func_int8_t_s_s((p_33 | ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_676.s91de8f27)).s51)).even), (safe_sub_func_uint8_t_u_u((((VECTOR(int64_t, 4))(l_679.xxxy)).y , 255UL), (&p_1604->g_170 != l_680)))))))) < GROUP_DIVERGE(2, 1)));
            l_690 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_681.s75)))).yxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(l_682.ww)), ((VECTOR(int32_t, 2))(l_683.s45))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_1604->g_684.s3017520277711270)).lo)).s3061144323342775, ((VECTOR(int32_t, 4))((safe_div_func_uint8_t_u_u(l_593.y, (safe_rshift_func_uint16_t_u_s(((*p_1604->g_223) = p_33), 10)))), 0x7E2BA6CAL, (-8L), 0x3FD84ED6L)).wyzwyzwxxwwyxxzw))).sac7c)).hi))).yyyyyxyyyxxyyyyy)).s5549, ((VECTOR(int32_t, 16))(p_1604->g_689.s2316656772205156)).sc8dd))).yxxxwxyxzzwxyyyz)).s7c)).lo;
            (*p_1604->g_216) = (((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((0x597D6B42L & (safe_mul_func_uint16_t_u_u(p_33, ((l_690 , ((((VECTOR(int8_t, 16))(((!((safe_div_func_int64_t_s_s(p_1604->g_375, ((safe_mod_func_int16_t_s_s((l_682.y = ((0x9FL & (safe_lshift_func_int8_t_s_s(p_1604->g_423.x, 5))) | (((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0L, 1L)), (l_690 &= 0x252BL), 0L, ((VECTOR(int16_t, 4))(((((safe_add_func_int64_t_s_s(p_1604->g_501[5][4], 18446744073709551615UL)) , p_31) , (void*)0) != (void*)0), 0x14CFL, 0L, 0L)), l_660.s5, 0x3CEEL, p_33, ((VECTOR(int16_t, 4))(2L)), 0x659BL)), ((VECTOR(int16_t, 16))((-1L)))))).s72)).xxxxxyxy, ((VECTOR(int16_t, 8))(0x117DL))))).s7 || p_1604->g_94[3][2][0]))), p_33)) || p_31))) > FAKE_DIVERGE(p_1604->local_2_offset, get_local_id(2), 10))) >= 5UL), p_31, ((VECTOR(int8_t, 2))((-1L))), 0x5AL, p_33, 0x45L, ((VECTOR(int8_t, 8))(1L)), (-1L))).sb <= l_660.s7) | p_1604->g_577.y)) < l_705)))), l_640)), 7)) , (*l_648)) < l_706);
        }
        else
        { /* block id: 247 */
            uint32_t l_723[2];
            int i;
            for (i = 0; i < 2; i++)
                l_723[i] = 0UL;
            (*p_1604->g_216) |= (((*l_608) = (((void*)0 != l_595[1]) , (safe_div_func_uint16_t_u_u((((p_31 && ((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 4))((safe_mul_func_int16_t_s_s(1L, (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_33, (((safe_unary_minus_func_uint64_t_u(((l_719 = ((VECTOR(uint16_t, 2))(l_718.xy)).odd) | (*p_1604->g_223)))) >= l_720.w) < (safe_mod_func_uint16_t_u_u(l_645, p_1604->g_560.sb))))), (*l_648))))), l_723[0], 0UL, 0xF4DF13AC31B79902L)), ((VECTOR(uint64_t, 4))(18446744073709551615UL)), ((VECTOR(uint64_t, 4))(0xA03BB3D9FBC93EA7L))))).w, 0x73D34123C800AE59L)) > p_33)) , p_33) , (**p_1604->g_659)), 0x14E7L)))) && p_1604->g_454.s6);
        }
        return p_33;
    }
    ++l_725;
    return p_1604->g_152[9];
}


/* ------------------------------------------ */
/* 
 * reads : p_1604->g_560 p_1604->g_562 p_1604->g_136 p_1604->g_216
 * writes: p_1604->g_138 p_1604->g_71
 */
uint8_t  func_37(int32_t * p_38, int16_t  p_39, int32_t * p_40, struct S0 * p_1604)
{ /* block id: 211 */
    int8_t *l_552 = &p_1604->g_138;
    int32_t l_553 = 1L;
    VECTOR(uint64_t, 8) l_554 = (VECTOR(uint64_t, 8))(0x0137623ED612DC27L, (VECTOR(uint64_t, 4))(0x0137623ED612DC27L, (VECTOR(uint64_t, 2))(0x0137623ED612DC27L, 0x83FC4A3058A9B67DL), 0x83FC4A3058A9B67DL), 0x83FC4A3058A9B67DL, 0x0137623ED612DC27L, 0x83FC4A3058A9B67DL);
    uint16_t *l_557 = &p_1604->g_224[5][0][0];
    uint16_t *l_558 = &p_1604->g_224[4][0][0];
    uint16_t **l_559 = &l_558;
    VECTOR(int8_t, 16) l_561 = (VECTOR(int8_t, 16))(0x04L, (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, 0x2AL), 0x2AL), 0x2AL, 0x04L, 0x2AL, (VECTOR(int8_t, 2))(0x04L, 0x2AL), (VECTOR(int8_t, 2))(0x04L, 0x2AL), 0x04L, 0x2AL, 0x04L, 0x2AL);
    VECTOR(int8_t, 8) l_563 = (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L));
    int32_t ****l_568 = &p_1604->g_170;
    int i;
    (*p_1604->g_216) = ((((*l_552) = (&p_1604->g_547 != p_40)) > (l_553 == (0UL != ((VECTOR(uint64_t, 2))(l_554.s50)).even))) > ((safe_mul_func_uint8_t_u_u((l_557 == ((*l_559) = l_558)), (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(p_1604->g_560.s2cf2)).wywwxyxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(0x7CL, 0x77L)).xyyxxyxx, ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(l_561.s79)).xyxxyyxxyxxyxxyy, ((VECTOR(int8_t, 8))(p_1604->g_562.s821f9677)).s3715177721406332))).even, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_563.s07)).yxyyxxxyxyyxyxxx)).hi))), ((VECTOR(int8_t, 2))(0x57L, 0L)), (-3L), 0x75L, (0x73253FCC98F6AD0EL & (((safe_rshift_func_uint8_t_u_u((~((VECTOR(uint8_t, 2))(1UL, 0x11L)).lo), 3)) == (((safe_lshift_func_int16_t_s_u(p_1604->g_136, ((void*)0 != l_568))) , (void*)0) == &p_1604->g_136)) && p_39)), ((VECTOR(int8_t, 2))(0x28L)), 0x76L)), ((VECTOR(int8_t, 16))(7L)), ((VECTOR(int8_t, 16))(0x7AL))))).s188c)).yxyzyxyyyzxwyyzx)).s2001)).ywzwxxwz, ((VECTOR(int8_t, 8))(1L))))).s62)).odd < p_39))) == p_39));
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_1604->g_71 p_1604->g_103 p_1604->g_136 p_1604->g_216 p_1604->g_455 p_1604->g_349 p_1604->g_49 p_1604->g_111 p_1604->g_70 p_1604->g_547 p_1604->g_550
 * writes: p_1604->g_71 p_1604->g_103 p_1604->g_136 p_1604->g_547 p_1604->g_111
 */
int32_t * func_41(uint32_t  p_42, int32_t * p_43, struct S0 * p_1604)
{ /* block id: 188 */
    int16_t l_533 = 9L;
    VECTOR(int32_t, 2) l_543 = (VECTOR(int32_t, 2))(0x557CE61EL, 0L);
    int32_t *l_551 = &p_1604->g_111;
    int i, j;
    for (p_1604->g_71 = 0; (p_1604->g_71 <= (-11)); p_1604->g_71 = safe_sub_func_uint64_t_u_u(p_1604->g_71, 1))
    { /* block id: 191 */
        uint64_t l_519[6] = {0xF753C79360EC4DE8L,0xF753C79360EC4DE8L,0xF753C79360EC4DE8L,0xF753C79360EC4DE8L,0xF753C79360EC4DE8L,0xF753C79360EC4DE8L};
        int i;
        for (p_1604->g_103 = 23; (p_1604->g_103 > 13); --p_1604->g_103)
        { /* block id: 194 */
            l_519[3]++;
        }
    }
    for (p_1604->g_136 = 9; (p_1604->g_136 > (-2)); --p_1604->g_136)
    { /* block id: 200 */
        VECTOR(int32_t, 4) l_528 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
        uint64_t *l_536 = &p_1604->g_346[3][1];
        uint32_t *l_540 = &p_1604->g_470;
        uint32_t **l_539 = &l_540;
        int32_t ***l_546[6][5] = {{&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76},{&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76},{&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76},{&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76},{&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76},{&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76,&p_1604->g_76}};
        int i, j;
        (*p_1604->g_216) ^= (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(1UL, 6UL)).yxyyyyxxyxyxxxxy)).sd, p_42));
        p_1604->g_547 |= ((*p_1604->g_70) &= ((((((safe_add_func_int16_t_s_s((((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 16))(l_528.wzxzyxzzxwzwzwzy)).s30ad))).z , ((safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((VECTOR(uint32_t, 2))(4294967293UL, 0xD5977C20L)).lo == ((l_533 & ((safe_add_func_uint64_t_u_u(((1L & (l_536 == (p_1604->g_455.s0 , &p_1604->g_94[3][3][0]))) < ((safe_sub_func_uint64_t_u_u((((&p_1604->g_470 == ((*l_539) = p_43)) , (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 2))(l_543.yy)).odd, (safe_div_func_uint16_t_u_u(p_42, 65528UL))))) != p_42), p_42)) || p_1604->g_349)), p_42)) >= l_533)) == l_533)), 0x25BFDEDEL)) != p_1604->g_49[0][6][1]), p_1604->g_455.s2)) || 0x0A53700CL)), p_1604->g_111)) || l_533) , &p_1604->g_76) == l_546[2][0]) , 18446744073709551615UL) < l_543.x));
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1604->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u((l_543.x != l_543.x), 10))][(safe_mod_func_uint32_t_u_u(p_1604->tid, 2))]));
    (*l_551) ^= (safe_mod_func_int32_t_s_s((*p_1604->g_216), (~(l_543.y | ((VECTOR(int16_t, 16))(p_1604->g_550.sf29e5be811f6a00e)).sd))));
    return l_551;
}


/* ------------------------------------------ */
/* 
 * reads : p_1604->g_53 p_1604->g_19 p_1604->l_comm_values p_1604->g_76 p_1604->g_20 p_1604->g_83 p_1604->g_71 p_1604->g_94 p_1604->g_49 p_1604->g_111 p_1604->g_comm_values p_1604->g_103 p_1604->g_138 p_1604->g_70 p_1604->g_136 p_1604->g_170 p_1604->g_203 p_1604->g_216 p_1604->g_77 p_1604->g_223 p_1604->g_248 p_1604->g_224 p_1604->g_266 p_1604->g_228 p_1604->g_210 p_1604->g_152 p_1604->g_48 p_1604->g_316 p_1604->g_321 p_1604->g_348 p_1604->g_361 p_1604->g_349 p_1604->g_169 p_1604->g_422 p_1604->g_423 p_1604->g_424 p_1604->g_432 p_1604->g_454 p_1604->g_495 p_1604->g_498
 * writes: p_1604->g_77 p_1604->g_71 p_1604->g_94 p_1604->g_111 p_1604->g_136 p_1604->g_103 p_1604->g_138 p_1604->g_210 p_1604->g_223 p_1604->g_228 p_1604->g_169 p_1604->g_comm_values p_1604->g_49 p_1604->g_346 p_1604->g_348 p_1604->g_349
 */
int16_t  func_44(int32_t  p_45, int32_t * p_46, uint32_t  p_47, struct S0 * p_1604)
{ /* block id: 6 */
    VECTOR(uint8_t, 16) l_52 = (VECTOR(uint8_t, 16))(0x7CL, (VECTOR(uint8_t, 4))(0x7CL, (VECTOR(uint8_t, 2))(0x7CL, 9UL), 9UL), 9UL, 0x7CL, 9UL, (VECTOR(uint8_t, 2))(0x7CL, 9UL), (VECTOR(uint8_t, 2))(0x7CL, 9UL), 0x7CL, 9UL, 0x7CL, 9UL);
    int32_t *l_61 = (void*)0;
    VECTOR(uint64_t, 16) l_114 = (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 18446744073709551611UL, 18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551613UL), (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551613UL), 18446744073709551611UL, 18446744073709551613UL, 18446744073709551611UL, 18446744073709551613UL);
    int32_t ***l_123[2];
    int16_t l_154 = 0x7511L;
    uint16_t l_160 = 0xB233L;
    int8_t *l_162[7][5] = {{&p_1604->g_138,(void*)0,(void*)0,&p_1604->g_138,&p_1604->g_138},{&p_1604->g_138,(void*)0,(void*)0,&p_1604->g_138,&p_1604->g_138},{&p_1604->g_138,(void*)0,(void*)0,&p_1604->g_138,&p_1604->g_138},{&p_1604->g_138,(void*)0,(void*)0,&p_1604->g_138,&p_1604->g_138},{&p_1604->g_138,(void*)0,(void*)0,&p_1604->g_138,&p_1604->g_138},{&p_1604->g_138,(void*)0,(void*)0,&p_1604->g_138,&p_1604->g_138},{&p_1604->g_138,(void*)0,(void*)0,&p_1604->g_138,&p_1604->g_138}};
    VECTOR(int16_t, 8) l_229 = (VECTOR(int16_t, 8))(0x7BA3L, (VECTOR(int16_t, 4))(0x7BA3L, (VECTOR(int16_t, 2))(0x7BA3L, (-3L)), (-3L)), (-3L), 0x7BA3L, (-3L));
    uint16_t l_234 = 0x7110L;
    uint32_t l_257 = 0x68A8199AL;
    uint16_t l_263 = 1UL;
    VECTOR(uint16_t, 8) l_275 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0x7D31L), 0x7D31L), 0x7D31L, 7UL, 0x7D31L);
    VECTOR(uint16_t, 16) l_276 = (VECTOR(uint16_t, 16))(0x16BCL, (VECTOR(uint16_t, 4))(0x16BCL, (VECTOR(uint16_t, 2))(0x16BCL, 0xB884L), 0xB884L), 0xB884L, 0x16BCL, 0xB884L, (VECTOR(uint16_t, 2))(0x16BCL, 0xB884L), (VECTOR(uint16_t, 2))(0x16BCL, 0xB884L), 0x16BCL, 0xB884L, 0x16BCL, 0xB884L);
    uint16_t l_305 = 0xF9ADL;
    uint8_t l_360[7][4] = {{0x80L,0UL,0xDCL,7UL},{0x80L,0UL,0xDCL,7UL},{0x80L,0UL,0xDCL,7UL},{0x80L,0UL,0xDCL,7UL},{0x80L,0UL,0xDCL,7UL},{0x80L,0UL,0xDCL,7UL},{0x80L,0UL,0xDCL,7UL}};
    uint16_t **l_395 = &p_1604->g_228;
    VECTOR(int64_t, 4) l_456 = (VECTOR(int64_t, 4))(0x7A2BAD8131351A47L, (VECTOR(int64_t, 2))(0x7A2BAD8131351A47L, 5L), 5L);
    VECTOR(int64_t, 8) l_460 = (VECTOR(int64_t, 8))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x0ACD1AB0A822D42BL), 0x0ACD1AB0A822D42BL), 0x0ACD1AB0A822D42BL, 7L, 0x0ACD1AB0A822D42BL);
    VECTOR(uint32_t, 4) l_472 = (VECTOR(uint32_t, 4))(0x5B5477DFL, (VECTOR(uint32_t, 2))(0x5B5477DFL, 4294967288UL), 4294967288UL);
    int32_t ****l_490[4][6][4] = {{{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170}},{{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170}},{{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170}},{{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170},{&p_1604->g_170,&l_123[1],&l_123[1],&p_1604->g_170}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_123[i] = &p_1604->g_76;
    if ((safe_sub_func_uint16_t_u_u((((VECTOR(uint8_t, 4))(l_52.s1996)).w != (~(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1604->g_53.s1447)).zyxwyxww)).s1 , p_1604->g_19[0]))), p_1604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1604->tid, 2))])))
    { /* block id: 7 */
        VECTOR(uint16_t, 16) l_62 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x1ECDL), 0x1ECDL), 0x1ECDL, 6UL, 0x1ECDL, (VECTOR(uint16_t, 2))(6UL, 0x1ECDL), (VECTOR(uint16_t, 2))(6UL, 0x1ECDL), 6UL, 0x1ECDL, 6UL, 0x1ECDL);
        VECTOR(uint8_t, 4) l_65 = (VECTOR(uint8_t, 4))(0x03L, (VECTOR(uint8_t, 2))(0x03L, 0xE6L), 0xE6L);
        int32_t *l_66 = (void*)0;
        VECTOR(uint64_t, 4) l_113 = (VECTOR(uint64_t, 4))(0x0B7B9EACEED78FB1L, (VECTOR(uint64_t, 2))(0x0B7B9EACEED78FB1L, 0xD03F4AE4FB5D9459L), 0xD03F4AE4FB5D9459L);
        VECTOR(uint64_t, 2) l_115 = (VECTOR(uint64_t, 2))(0UL, 1UL);
        VECTOR(uint16_t, 4) l_117 = (VECTOR(uint16_t, 4))(0x4BB2L, (VECTOR(uint16_t, 2))(0x4BB2L, 0x6AE7L), 0x6AE7L);
        int32_t ***l_121 = &p_1604->g_76;
        VECTOR(uint16_t, 16) l_130 = (VECTOR(uint16_t, 16))(0x4FBDL, (VECTOR(uint16_t, 4))(0x4FBDL, (VECTOR(uint16_t, 2))(0x4FBDL, 65527UL), 65527UL), 65527UL, 0x4FBDL, 65527UL, (VECTOR(uint16_t, 2))(0x4FBDL, 65527UL), (VECTOR(uint16_t, 2))(0x4FBDL, 65527UL), 0x4FBDL, 65527UL, 0x4FBDL, 65527UL);
        int32_t ****l_171 = &p_1604->g_170;
        int32_t l_172 = 9L;
        int32_t l_181 = 0x27A5EFBFL;
        int32_t l_186 = 0x59B5D67EL;
        int32_t l_187 = 0x56AA7CB9L;
        int32_t l_188 = 2L;
        int32_t l_233[3];
        int i;
        for (i = 0; i < 3; i++)
            l_233[i] = 5L;
        for (p_45 = 0; (p_45 == 19); p_45++)
        { /* block id: 10 */
            (1 + 1);
        }
        (*p_1604->g_76) = (void*)0;
        if ((safe_mul_func_uint16_t_u_u(p_1604->g_20.s4, ((VECTOR(uint16_t, 2))(p_1604->g_83.yx)).lo)))
        { /* block id: 25 */
            uint32_t l_87 = 0x69C52260L;
            int32_t *l_92 = &p_1604->g_49[0][3][0];
            uint64_t *l_102 = &p_1604->g_103;
            VECTOR(uint16_t, 4) l_116 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65528UL), 65528UL);
            int32_t ***l_120 = &p_1604->g_76;
            int32_t ****l_122 = &l_121;
            int8_t *l_135 = &p_1604->g_136;
            int8_t *l_137 = &p_1604->g_138;
            int i;
            for (p_45 = 0; (p_45 <= (-24)); p_45--)
            { /* block id: 28 */
                int32_t *l_86 = &p_1604->g_71;
                uint64_t *l_93 = &p_1604->g_94[3][3][0];
                uint16_t l_95 = 1UL;
                uint64_t *l_104 = &p_1604->g_103;
                int32_t *l_109 = (void*)0;
                int32_t *l_110 = &p_1604->g_111;
                int32_t l_112 = 0x78AC094EL;
                (*l_86) ^= p_45;
                l_87 = ((void*)0 == &l_61);
                (*l_86) = p_47;
                l_112 = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((*l_93) ^= (l_92 == (void*)0)), ((l_95 & ((*l_110) = ((*l_86) = ((safe_add_func_uint64_t_u_u(0x9D3DA5920033C814L, p_1604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1604->tid, 2))])) > ((safe_div_func_uint64_t_u_u(((((safe_div_func_int64_t_s_s((l_102 != (l_104 = &p_1604->g_103)), (safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(p_1604->g_53.s6, ((p_45 == 0L) , p_1604->g_49[0][3][0]))), 7)))) ^ 0x0D328F3C5FBC3860L) , p_46) == (void*)0), 0x166AB142098501CAL)) , 1L))))) || 0x5FL))), p_45));
            }
            (*p_1604->g_70) = (((((VECTOR(uint64_t, 8))(18446744073709551615UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_113.wywyywyy)).s4455427572432632)).lo)))).s14)), ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 8))(0x76EBEA24D6573483L, p_1604->g_71, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_114.sed)).xxxxxxyy)).even)).zxyxxwxxzzxyxyxw, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_115.yxxyxyxyyyxyyyyx)).hi)).s3340107230651352))).odd)).s47)), 0x293C57988D826447L, 0x4469BDEC6600421FL, 0xD1987919BB5C0823L, 18446744073709551615UL)).lo, ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(l_116.zxwzyxwyzwxwwwzw)).hi, ((VECTOR(uint16_t, 4))(l_117.zzxy)).xzxyzywy))).s3371557276607325)).even, ((VECTOR(uint32_t, 2))(0UL, 6UL)).yxyyxxyx))), ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))((((safe_mul_func_uint8_t_u_u(0x01L, (l_120 != (l_123[0] = ((*l_122) = l_121))))) == ((*l_137) = (((*l_102) &= ((((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(((~p_1604->g_49[0][3][0]) == (p_45 <= (((*l_135) = (safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_1604->g_83.x, (((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(l_130.s977f7388)), ((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(65531UL, 9UL, ((VECTOR(uint16_t, 4))(65535UL, ((VECTOR(uint16_t, 2))(0x1659L, 65535UL)), 0xF9A6L)), (safe_add_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u(((((255UL | p_1604->g_111) != p_1604->g_19[0]) > 0x1D400EADA3A84B1FL) || 6UL), p_47)) & p_47) , p_47) ^ p_1604->g_94[0][1][0]), p_47)), p_1604->g_comm_values[p_1604->tid], 5UL, 0x8CA6L, ((VECTOR(uint16_t, 4))(0UL)), 0x5837L, 65535UL)).s2a)).xxyy, ((VECTOR(uint16_t, 4))(0x8152L))))).hi)))), ((VECTOR(uint16_t, 4))(1UL)), 65531UL))))).s4 & l_114.se))) == p_1604->g_111), l_117.w))) < p_1604->g_94[3][3][0]))), p_1604->g_19[0], 9L, 0L, ((VECTOR(int8_t, 4))(0L)))), ((VECTOR(int8_t, 8))(0x3FL))))).lo, ((VECTOR(int8_t, 4))((-1L)))))).yxxzxxyz)).s51)).xxyx))).z | p_1604->g_111) , 0xF823EF36B2304E23L)) && p_1604->g_19[0]))) <= p_47), 9UL, 0xC6906F4486B93622L, ((VECTOR(uint64_t, 4))(8UL)), p_1604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1604->tid, 2))], p_45, ((VECTOR(uint64_t, 4))(6UL)), 1UL, 0x3965C3E68F2E056CL, 18446744073709551615UL)).sb7, ((VECTOR(uint64_t, 2))(0x13991646DB42BE2FL))))).yxxyxxyx, ((VECTOR(uint64_t, 8))(0xF8D76BD683B573FAL))))).hi, ((VECTOR(uint64_t, 4))(0xD248F621FC311CE4L))))))).lo)))).yyyxxyyx, ((VECTOR(uint64_t, 8))(0x102DB9AC583338DEL))))).hi))), ((VECTOR(uint64_t, 4))(1UL))))).y, p_1604->g_138, 18446744073709551610UL, 1UL)).wzzxzywz, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).lo)))), ((VECTOR(uint64_t, 4))(0xDAF4E67889039BF0L)))))))).even, (uint64_t)1UL))), ((VECTOR(uint64_t, 2))(0xD29629171A507D19L)), 0xC0FF1A9AC723E32BL)).s5 , p_46) == (void*)0) >= p_47);
            return p_45;
        }
        else
        { /* block id: 45 */
            VECTOR(uint16_t, 2) l_150 = (VECTOR(uint16_t, 2))(0x1749L, 0x7B9BL);
            int32_t l_153 = 6L;
            uint64_t *l_211 = (void*)0;
            uint16_t *l_222 = (void*)0;
            int32_t l_230 = (-2L);
            int32_t l_231 = (-6L);
            int32_t l_232 = 0x165AB94FL;
            int i;
            for (p_47 = 9; (p_47 < 28); p_47++)
            { /* block id: 48 */
                return p_1604->g_71;
            }
            for (p_1604->g_136 = 0; (p_1604->g_136 == (-30)); p_1604->g_136 = safe_sub_func_uint16_t_u_u(p_1604->g_136, 1))
            { /* block id: 53 */
                uint32_t l_145 = 0xE19B3A5BL;
                int16_t *l_151[7][4] = {{&p_1604->g_152[9],&p_1604->g_152[6],&p_1604->g_152[1],&p_1604->g_152[8]},{&p_1604->g_152[9],&p_1604->g_152[6],&p_1604->g_152[1],&p_1604->g_152[8]},{&p_1604->g_152[9],&p_1604->g_152[6],&p_1604->g_152[1],&p_1604->g_152[8]},{&p_1604->g_152[9],&p_1604->g_152[6],&p_1604->g_152[1],&p_1604->g_152[8]},{&p_1604->g_152[9],&p_1604->g_152[6],&p_1604->g_152[1],&p_1604->g_152[8]},{&p_1604->g_152[9],&p_1604->g_152[6],&p_1604->g_152[1],&p_1604->g_152[8]},{&p_1604->g_152[9],&p_1604->g_152[6],&p_1604->g_152[1],&p_1604->g_152[8]}};
                uint64_t *l_161 = &p_1604->g_94[8][0][0];
                int32_t ****l_168 = &l_123[0];
                int32_t *****l_167[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                (1 + 1);
            }
            for (p_1604->g_111 = (-5); (p_1604->g_111 != 22); p_1604->g_111 = safe_add_func_uint64_t_u_u(p_1604->g_111, 4))
            { /* block id: 65 */
                int32_t l_182 = (-3L);
                int32_t l_183 = (-2L);
                int32_t l_185[3];
                uint16_t *l_226[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_185[i] = (-4L);
                for (i = 0; i < 3; i++)
                    l_226[i] = &l_160;
                if (p_45)
                { /* block id: 66 */
                    int64_t l_178 = 0x34A5FC10FBB080F5L;
                    int32_t l_184[8][5] = {{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}};
                    uint64_t *l_212 = &p_1604->g_103;
                    int i, j;
                    for (l_160 = 0; (l_160 > 26); l_160 = safe_add_func_uint16_t_u_u(l_160, 1))
                    { /* block id: 69 */
                        int8_t l_177 = 7L;
                        int32_t l_179 = 0x35FFEB3DL;
                        int32_t l_180[9][10][2] = {{{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L}},{{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L}},{{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L}},{{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L}},{{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L}},{{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L}},{{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L}},{{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L}},{{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L},{1L,0x13328CD3L}}};
                        uint32_t l_189[3];
                        int32_t ****l_192 = &l_123[0];
                        uint16_t *l_206 = (void*)0;
                        uint16_t *l_207 = (void*)0;
                        uint16_t *l_208 = (void*)0;
                        uint16_t *l_209 = (void*)0;
                        uint64_t **l_213 = &l_212;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_189[i] = 0UL;
                        --l_189[0];
                        if ((*p_1604->g_70))
                            break;
                        l_153 ^= ((&p_1604->g_170 != l_192) > (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((0x72L < (safe_add_func_int8_t_s_s(((void*)0 == (*l_171)), GROUP_DIVERGE(2, 1)))), (safe_lshift_func_int16_t_s_s(0x6CD3L, 11)))), (p_1604->g_210.z = (p_1604->g_203 && (safe_sub_func_uint64_t_u_u((~p_47), (FAKE_DIVERGE(p_1604->group_2_offset, get_group_id(2), 10) == p_45))))))) || 0x2B68L), 0xB3A5L)));
                        (*p_1604->g_70) &= (l_211 != ((*l_213) = l_212));
                    }
                }
                else
                { /* block id: 77 */
                    int32_t **l_219 = &l_66;
                    if (p_45)
                        break;
                    for (p_1604->g_138 = (-3); (p_1604->g_138 >= 2); p_1604->g_138++)
                    { /* block id: 81 */
                        return p_1604->g_94[3][3][0];
                    }
                    (***l_171) = p_1604->g_216;
                    for (l_186 = 0; (l_186 >= 25); ++l_186)
                    { /* block id: 87 */
                        uint16_t **l_225 = &p_1604->g_223;
                        uint16_t **l_227[10][9][1] = {{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}},{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}},{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}},{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}},{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}},{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}},{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}},{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}},{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}},{{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222},{&l_222}}};
                        int i, j, k;
                        (*p_1604->g_77) = ((((VECTOR(int8_t, 2))(0x47L, (-1L))).hi , (*p_1604->g_170)) != (l_219 = (*l_121)));
                        atomic_add(&p_1604->l_atomic_reduction[0], (safe_rshift_func_int16_t_s_s((l_222 == ((*l_225) = p_1604->g_223)), ((p_1604->g_228 = l_226[0]) == &l_160))) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1604->v_collective += p_1604->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        return p_1604->g_comm_values[p_1604->tid];
                    }
                }
                l_234--;
                (*p_1604->g_216) = l_232;
                if (l_230)
                    continue;
            }
            (*p_1604->g_76) = p_46;
        }
    }
    else
    { /* block id: 102 */
        VECTOR(uint8_t, 16) l_247 = (VECTOR(uint8_t, 16))(0x62L, (VECTOR(uint8_t, 4))(0x62L, (VECTOR(uint8_t, 2))(0x62L, 1UL), 1UL), 1UL, 0x62L, 1UL, (VECTOR(uint8_t, 2))(0x62L, 1UL), (VECTOR(uint8_t, 2))(0x62L, 1UL), 0x62L, 1UL, 0x62L, 1UL);
        VECTOR(uint8_t, 16) l_249 = (VECTOR(uint8_t, 16))(0x86L, (VECTOR(uint8_t, 4))(0x86L, (VECTOR(uint8_t, 2))(0x86L, 0UL), 0UL), 0UL, 0x86L, 0UL, (VECTOR(uint8_t, 2))(0x86L, 0UL), (VECTOR(uint8_t, 2))(0x86L, 0UL), 0x86L, 0UL, 0x86L, 0UL);
        int32_t ****l_250 = &l_123[0];
        int32_t *****l_251 = &p_1604->g_169;
        int8_t *l_256[4][9][3] = {{{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136}},{{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136}},{{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136}},{{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136},{&p_1604->g_138,&p_1604->g_138,&p_1604->g_136}}};
        uint8_t *l_258 = (void*)0;
        uint8_t *l_259[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int8_t l_260 = 0x0BL;
        int16_t *l_290 = &p_1604->g_152[6];
        int32_t l_292 = 1L;
        int32_t l_296 = 1L;
        int32_t l_297 = 1L;
        int32_t l_298 = 0x334576F9L;
        int32_t l_299 = 1L;
        int32_t l_302 = 0x33C52C19L;
        int32_t l_303 = 0x6D1205F2L;
        VECTOR(int32_t, 2) l_309 = (VECTOR(int32_t, 2))(0x1416C7F9L, 0x68016E8BL);
        VECTOR(uint16_t, 4) l_322 = (VECTOR(uint16_t, 4))(0xA952L, (VECTOR(uint16_t, 2))(0xA952L, 0xCDEEL), 0xCDEEL);
        uint16_t l_350 = 0xC4C8L;
        uint32_t l_351 = 0xB75EBE81L;
        int32_t l_367 = 0x436FA807L;
        VECTOR(int32_t, 4) l_372 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x7CE2D472L), 0x7CE2D472L);
        int16_t l_398 = 0x6EDBL;
        VECTOR(uint32_t, 16) l_466 = (VECTOR(uint32_t, 16))(0xD86DF6FBL, (VECTOR(uint32_t, 4))(0xD86DF6FBL, (VECTOR(uint32_t, 2))(0xD86DF6FBL, 0xD6A13080L), 0xD6A13080L), 0xD6A13080L, 0xD86DF6FBL, 0xD6A13080L, (VECTOR(uint32_t, 2))(0xD86DF6FBL, 0xD6A13080L), (VECTOR(uint32_t, 2))(0xD86DF6FBL, 0xD6A13080L), 0xD86DF6FBL, 0xD6A13080L, 0xD86DF6FBL, 0xD6A13080L);
        int i, j, k;
        if ((GROUP_DIVERGE(1, 1) , (p_1604->g_71 , (((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 16))(l_247.seebdb002964467d0)), ((VECTOR(uint8_t, 2))(0x16L, 0x12L)).yxxxyxxyxyyyyxxx))).odd)).s56, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(p_1604->g_248.s22)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(l_249.sd012a8b3)).even, (uint8_t)(p_1604->g_210.x = (p_47 | ((4294967288UL || (&p_1604->g_170 != ((*l_251) = l_250))) ^ (safe_add_func_uint16_t_u_u((p_1604->g_comm_values[p_1604->tid] && ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))((safe_mul_func_uint8_t_u_u((l_256[0][8][0] == l_256[3][6][0]), (p_1604->g_138 &= ((*p_1604->g_216) , p_1604->g_83.y)))), ((VECTOR(int16_t, 8))(0x1495L)), ((VECTOR(int16_t, 2))((-1L))), 0x7306L, 8L, (-4L), 0x37D9L, 8L)).odd, (int16_t)p_1604->g_138))), ((VECTOR(int16_t, 2))(0x607EL)), (-4L), 8L, l_257, 0x2C81L, 7L, 0x4E9EL)).s3), 0x1466L)))))))).wxyyxyyy, ((VECTOR(uint8_t, 8))(9UL)), ((VECTOR(uint8_t, 8))(0x37L))))).s04))))), 0UL, 0xE8L, 0x6BL, ((VECTOR(uint8_t, 2))(0xF4L)), 0x11L, ((VECTOR(uint8_t, 8))(0x16L)))).hi))).s72, ((VECTOR(uint8_t, 2))(9UL))))))), ((VECTOR(uint8_t, 2))(0xD1L))))).lo >= p_1604->g_19[0]), p_47)), l_260)), (*p_1604->g_223))), p_47)), 0x4CL)) , FAKE_DIVERGE(p_1604->global_0_offset, get_global_id(0), 10)) | p_47))))
        { /* block id: 106 */
            int64_t *l_283 = (void*)0;
            int64_t *l_284[6][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_285 = 0x01FC50FBL;
            int32_t l_300[8][7][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
            uint32_t l_354 = 4294967288UL;
            uint64_t l_366 = 18446744073709551614UL;
            int i, j, k;
            atomic_xor(&p_1604->l_atomic_reduction[0], (((*p_46) = (((p_47 , ((((safe_mul_func_int16_t_s_s(l_263, (safe_mul_func_int8_t_s_s(((!(((p_1604->g_266[1][3][1] == (void*)0) == (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint16_t_u_u((p_47 || (p_1604->g_comm_values[p_1604->tid] |= (((p_1604->g_19[0] , (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x1E2BL, 0x0EEEL, 0x8F6DL, 65535UL)), ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(l_275.s70)).xxxy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_276.sff)).yxyyyxxxyxxxxxyx)).s8b27))))).s1, p_45))) <= (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_1604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1604->tid, 2))], (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, (-10L))).yxxxxxyxxxyyxxyy)).s6 , p_47))), 0L)), 8))) | (*p_1604->g_228)))), GROUP_DIVERGE(2, 1))) > 0x681806EC490D768FL) >= p_47), p_1604->g_248.s3)), l_285))) & p_1604->g_210.w)) & 0x571729ABL), 1L)))) == p_45) == p_45) <= 0x26A6CC4BABF76927L)) < p_47) != l_285)) , (*p_1604->g_216)) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1604->v_collective += p_1604->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (l_160 = (-12); (l_160 != 58); l_160++)
            { /* block id: 112 */
                int16_t *l_289 = &p_1604->g_152[1];
                int16_t **l_288[3];
                int32_t l_291 = 0x1443EECFL;
                int32_t l_294 = 1L;
                int32_t l_295[4];
                uint8_t l_359 = 0x90L;
                int i;
                for (i = 0; i < 3; i++)
                    l_288[i] = &l_289;
                for (i = 0; i < 4; i++)
                    l_295[i] = 0L;
                l_291 ^= ((l_290 = &p_1604->g_152[1]) != &p_1604->g_152[1]);
                if (l_285)
                { /* block id: 115 */
                    int64_t l_293[4][6] = {{0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L},{0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L},{0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L},{0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L,0x2A7FBA8DB656A662L}};
                    int32_t l_301 = (-6L);
                    int32_t l_304 = (-3L);
                    int i, j;
                    --l_305;
                }
                else
                { /* block id: 117 */
                    int32_t *l_308[8][6] = {{&l_296,(void*)0,&l_297,&l_299,&p_1604->g_71,&p_1604->g_71},{&l_296,(void*)0,&l_297,&l_299,&p_1604->g_71,&p_1604->g_71},{&l_296,(void*)0,&l_297,&l_299,&p_1604->g_71,&p_1604->g_71},{&l_296,(void*)0,&l_297,&l_299,&p_1604->g_71,&p_1604->g_71},{&l_296,(void*)0,&l_297,&l_299,&p_1604->g_71,&p_1604->g_71},{&l_296,(void*)0,&l_297,&l_299,&p_1604->g_71,&p_1604->g_71},{&l_296,(void*)0,&l_297,&l_299,&p_1604->g_71,&p_1604->g_71},{&l_296,(void*)0,&l_297,&l_299,&p_1604->g_71,&p_1604->g_71}};
                    int32_t *l_347 = &p_1604->g_348;
                    int i, j;
                    l_308[6][1] = (**p_1604->g_170);
                    (*p_1604->g_216) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_309.xxyx)), (p_1604->g_152[1] ^ ((((VECTOR(int32_t, 16))((safe_lshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(0x41L, ((VECTOR(uint8_t, 8))((+((*p_1604->g_48) , ((VECTOR(uint8_t, 2))(0xCCL, 0x6AL)).lo)), ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 16))(p_1604->g_316.s34197403f995fcf0)), (uint8_t)(safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_1604->g_321.xyyxyyxy)).s4, 6)), (((((VECTOR(uint16_t, 2))(l_322.wz)).even <= (p_1604->g_349 = ((~(safe_unary_minus_func_int64_t_s((((safe_mul_func_int16_t_s_s(((((*l_347) |= ((p_1604->g_346[5][0] = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((p_45 > ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_295[3] = (-1L)), ((safe_lshift_func_uint8_t_u_u((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x4C7CL, 1L, 0x2691L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x78CCL, 0x3AB0L)).xyxx)), (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0x1418L, 0x93F6L, ((safe_sub_func_int8_t_s_s(p_45, p_47)) > (safe_add_func_uint32_t_u_u(l_300[1][5][0], p_47))), ((VECTOR(uint16_t, 2))(65527UL)), 65531UL, 0x7574L, l_291, 6UL, ((VECTOR(uint16_t, 4))(65527UL)), 0x5D9FL, 0UL, 0x71C0L)).s8, 0x2FD5L)), 0x68L)) , 0L), p_47)), p_47, ((VECTOR(int16_t, 2))(0x7C66L)), p_45, (-8L), 5L, 0x3DB4L, 1L)).s3, 0x4960L, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0x321BL)), p_47, p_47, ((VECTOR(int16_t, 4))(0x4D04L)), ((VECTOR(int16_t, 4))(0x6FF1L)))).s72af)), ((VECTOR(int16_t, 4))(0x0E64L)), ((VECTOR(int16_t, 4))((-5L)))))).even)).odd ^ 9UL), 7)) , (*p_1604->g_228)))), 0x602BL)) < l_285)) ^ 0x61B3L), 7)), p_47))) < p_1604->g_49[0][5][2])) , 0UL) ^ 1L), p_1604->g_138)) != p_47) <= 0L)))) > p_47))) , &l_123[0]) == &p_1604->g_170)))))).sa9)).yyxyyyxx)).s56, ((VECTOR(uint8_t, 2))(3UL))))), 0xF8L, l_350, p_47, 0xC3L, 250UL)).s2)) && 255UL), p_47)) , 0x4DL) ^ p_45), l_300[4][4][0])), ((VECTOR(int32_t, 4))(0x4B115916L)), 0x3DD77CBFL, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 4))(0x19D96F92L)), ((VECTOR(int32_t, 4))(1L)))).s3 , 0x6B48A3ACB9FE4E48L) >= 18446744073709551606UL)), p_47, 7L, 0x59B43EE0L)).s2;
                    l_351++;
                    return l_295[3];
                }
                l_354--;
                (*p_1604->g_216) = ((((safe_add_func_uint8_t_u_u((((p_47 & ((p_47 != (((p_46 != p_46) < l_359) || p_47)) , l_360[2][1])) != ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_1604->g_361.s33)).yxxxyyyx)).s22)).odd) ^ ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0x627BL, p_45)), l_366)) & (*p_1604->g_70))), 0x7FL)) ^ l_359) & p_45) && l_367);
            }
            return l_366;
        }
        else
        { /* block id: 131 */
            uint32_t *l_373 = &l_351;
            int64_t *l_374[4][3] = {{&p_1604->g_375,&p_1604->g_375,&p_1604->g_375},{&p_1604->g_375,&p_1604->g_375,&p_1604->g_375},{&p_1604->g_375,&p_1604->g_375,&p_1604->g_375},{&p_1604->g_375,&p_1604->g_375,&p_1604->g_375}};
            int32_t l_376 = 0L;
            uint16_t **l_377[7][4] = {{&p_1604->g_223,&p_1604->g_223,&p_1604->g_223,&p_1604->g_223},{&p_1604->g_223,&p_1604->g_223,&p_1604->g_223,&p_1604->g_223},{&p_1604->g_223,&p_1604->g_223,&p_1604->g_223,&p_1604->g_223},{&p_1604->g_223,&p_1604->g_223,&p_1604->g_223,&p_1604->g_223},{&p_1604->g_223,&p_1604->g_223,&p_1604->g_223,&p_1604->g_223},{&p_1604->g_223,&p_1604->g_223,&p_1604->g_223,&p_1604->g_223},{&p_1604->g_223,&p_1604->g_223,&p_1604->g_223,&p_1604->g_223}};
            VECTOR(int8_t, 4) l_380 = (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 5L), 5L);
            int32_t *****l_393 = (void*)0;
            uint32_t l_394 = 9UL;
            uint16_t l_434 = 65528UL;
            uint16_t l_435 = 0x5C85L;
            int32_t *****l_453 = &p_1604->g_169;
            VECTOR(int64_t, 4) l_458 = (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x2A9195D42DA24BDDL), 0x2A9195D42DA24BDDL);
            int32_t *l_471 = &p_1604->g_71;
            int i, j;
            l_303 = (~(safe_add_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(((+((l_376 = (65526UL == (((VECTOR(int32_t, 2))(l_372.yy)).odd > ((*l_373) ^= p_45)))) , (l_377[5][3] == (((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_380.xx)), 3L, 0x6EL)).y, ((VECTOR(uint8_t, 16))((safe_add_func_int8_t_s_s((((VECTOR(uint64_t, 4))((safe_add_func_int64_t_s_s(p_1604->g_210.z, (safe_add_func_uint8_t_u_u(0xE8L, (p_1604->g_349 >= ((p_45 >= ((*p_1604->g_216) = ((safe_sub_func_int64_t_s_s((255UL || ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((l_393 != &l_250) , FAKE_DIVERGE(p_1604->local_2_offset, get_local_id(2), 10)) > 255UL), (*p_1604->g_223))), (-1L))) , GROUP_DIVERGE(1, 1))), 0x21A49FD5ED30F5E2L)) , l_394))) , p_45)))))), 18446744073709551615UL, 18446744073709551607UL, 0xB870259445804D30L)).x | 0L), 0L)), 0x0DL, ((VECTOR(uint8_t, 8))(255UL)), ((VECTOR(uint8_t, 4))(0x2EL)), 0xD4L, 0x0EL)).sf)) , p_1604->g_321.y) , l_395)))) > p_1604->g_comm_values[p_1604->tid]), 1L)) == p_45), 4UL)));
            for (l_305 = 0; (l_305 >= 48); l_305++)
            { /* block id: 138 */
                int16_t l_401 = 0x525FL;
                int32_t *l_405[1][6] = {{&l_303,&l_376,&l_303,&l_303,&l_376,&l_303}};
                int64_t *l_425 = &p_1604->g_375;
                int64_t **l_426 = &l_374[0][1];
                int64_t **l_427 = (void*)0;
                int64_t *l_429 = &p_1604->g_375;
                int64_t **l_428 = &l_429;
                int i, j;
                if ((((*l_251) = &l_123[0]) != &p_1604->g_170))
                { /* block id: 140 */
                    uint32_t l_402[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    int i;
                    (*p_1604->g_76) = (*p_1604->g_76);
                    if (l_398)
                        break;
                    for (l_394 = 0; (l_394 > 21); l_394 = safe_add_func_int64_t_s_s(l_394, 2))
                    { /* block id: 145 */
                        ++l_402[2];
                        (***p_1604->g_169) = (***p_1604->g_169);
                        (***p_1604->g_169) = p_46;
                        (***l_250) = l_405[0][4];
                    }
                }
                else
                { /* block id: 151 */
                    int64_t l_408 = 0x7176C42D7D4C5F5DL;
                    int32_t *l_409 = &l_298;
                    (***p_1604->g_169) = (void*)0;
                    l_408 = (safe_rshift_func_uint16_t_u_u((0x32E0L < ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x3DD2L, 0x18FBL, 0x77FFL, 0x6C65L)).zyxxxyzy)).even)).w), (*p_1604->g_223)));
                    l_409 = (*p_1604->g_76);
                }
                (*p_1604->g_216) &= (safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((p_47 | GROUP_DIVERGE(2, 1)), 3)), (safe_sub_func_int16_t_s_s((((((safe_rshift_func_uint8_t_u_s(((p_1604->g_comm_values[p_1604->tid] = 0L) < (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(p_1604->g_422.xx)).xyxyyxyyxyxyxyxy, ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1604->g_423.yxxy)), ((VECTOR(int16_t, 4))(p_1604->g_424.xxyy)))).s0127341113253077)), ((VECTOR(int16_t, 2))((-1L), 1L)).xxyyxxyyxyyyyyyx)))))).hi)).s2174663640415274)).s69)), 0x4A37L, 0x0C72L)).x, 11))), 3)) == (p_1604->g_210.z = ((0x21L > (((*l_426) = l_425) == ((*l_428) = l_425))) | p_45))) != (safe_div_func_int64_t_s_s((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_1604->g_432.s1de2095c)).lo)).x == (p_45 != p_1604->g_136)), (safe_unary_minus_func_uint64_t_u(l_434))))) , GROUP_DIVERGE(0, 1)) ^ p_47), 0x321FL)))), p_1604->g_103));
                l_435--;
            }
            for (l_297 = 0; (l_297 > (-30)); l_297 = safe_sub_func_int8_t_s_s(l_297, 7))
            { /* block id: 165 */
                int16_t l_440 = 1L;
                int64_t l_441[2][5] = {{0x63D5DD70BEDFC33FL,0x63D5DD70BEDFC33FL,0x63D5DD70BEDFC33FL,0x63D5DD70BEDFC33FL,0x63D5DD70BEDFC33FL},{0x63D5DD70BEDFC33FL,0x63D5DD70BEDFC33FL,0x63D5DD70BEDFC33FL,0x63D5DD70BEDFC33FL,0x63D5DD70BEDFC33FL}};
                int32_t l_442 = 1L;
                int32_t ******l_451 = (void*)0;
                int32_t ******l_452[2][1][4] = {{{&l_251,&l_251,&l_251,&l_251}},{{&l_251,&l_251,&l_251,&l_251}}};
                VECTOR(int64_t, 16) l_459 = (VECTOR(int64_t, 16))((-6L), (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L), (VECTOR(int64_t, 2))((-6L), (-1L)), (VECTOR(int64_t, 2))((-6L), (-1L)), (-6L), (-1L), (-6L), (-1L));
                uint32_t *l_469[7];
                int64_t *l_477 = (void*)0;
                int64_t *l_478 = (void*)0;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_469[i] = &p_1604->g_470;
                l_441[0][3] = l_440;
            }
        }
        (***l_250) = p_46;
    }
    for (p_1604->g_136 = 7; (p_1604->g_136 <= 6); p_1604->g_136 = safe_sub_func_int64_t_s_s(p_1604->g_136, 2))
    { /* block id: 181 */
        int64_t l_503 = 0x6E29C78629998827L;
        int32_t l_504 = 0x443AAA79L;
        VECTOR(uint32_t, 2) l_512 = (VECTOR(uint32_t, 2))(0xB6267118L, 4UL);
        int64_t l_514 = 0x1FA760EFFD72A42AL;
        int i;
        l_504 = ((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), (p_45 > p_1604->g_210.x))) <= (safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((&l_123[1] != (l_490[2][3][1] = &l_123[0])) & (safe_add_func_int8_t_s_s((((p_1604->g_454.s5 == (safe_lshift_func_int16_t_s_s(p_45, ((VECTOR(int16_t, 8))(p_1604->g_495.xxyxxyxy)).s3))) < (safe_sub_func_int8_t_s_s(((((p_1604->g_498 == (void*)0) || ((l_503 , p_1604->g_20.s6) & GROUP_DIVERGE(0, 1))) >= (-1L)) , p_45), p_45))) > 4L), p_1604->g_20.s3))), p_1604->g_111)) | 0x39L), 7)));
        (****p_1604->g_169) |= ((((safe_unary_minus_func_int64_t_s(p_1604->g_103)) , (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_45, (safe_sub_func_int32_t_s_s((-1L), (p_1604->g_20.s1 , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(0xA87BC03EL, 0x61C95304L)).xyxx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_512.xy)).yyyxxyyyxxxxyxxx)).sd31c))))).z))))), (safe_unary_minus_func_uint32_t_u(l_514))))) && 0x5715L) && p_45);
        (***p_1604->g_169) = (***p_1604->g_169);
    }
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1604->g_70 p_1604->g_71
 * writes: p_1604->g_71 p_1604->g_76
 */
int32_t * func_56(int32_t * p_57, int8_t  p_58, int32_t  p_59, int64_t  p_60, struct S0 * p_1604)
{ /* block id: 11 */
    int32_t l_69 = 0x077743AFL;
    int32_t *l_73 = &p_1604->g_71;
    int32_t **l_72 = &l_73;
    int32_t ***l_74 = (void*)0;
    int32_t ***l_75 = &l_72;
    int32_t **l_79 = &p_1604->g_77;
    int32_t ***l_78 = &l_79;
    int32_t *l_80 = (void*)0;
    for (p_58 = 0; (p_58 < 28); p_58 = safe_add_func_int64_t_s_s(p_58, 5))
    { /* block id: 14 */
        (*p_1604->g_70) ^= l_69;
    }
    (*l_78) = (p_1604->g_76 = ((*l_75) = l_72));
    return l_80;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[9];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 9; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[9];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 9; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S0 c_1605;
    struct S0* p_1604 = &c_1605;
    struct S0 c_1606 = {
        {0x4BL}, // p_1604->g_19
        (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 9L), 9L), 9L, 4L, 9L), // p_1604->g_20
        (-9L), // p_1604->g_23
        {{{0x1CC0F90BL,0x1CC0F90BL,0x1CC0F90BL},{0x1CC0F90BL,0x1CC0F90BL,0x1CC0F90BL},{0x1CC0F90BL,0x1CC0F90BL,0x1CC0F90BL},{0x1CC0F90BL,0x1CC0F90BL,0x1CC0F90BL},{0x1CC0F90BL,0x1CC0F90BL,0x1CC0F90BL},{0x1CC0F90BL,0x1CC0F90BL,0x1CC0F90BL},{0x1CC0F90BL,0x1CC0F90BL,0x1CC0F90BL}}}, // p_1604->g_49
        &p_1604->g_49[0][3][0], // p_1604->g_48
        (VECTOR(int32_t, 8))(0x1FE01AF0L, (VECTOR(int32_t, 4))(0x1FE01AF0L, (VECTOR(int32_t, 2))(0x1FE01AF0L, 1L), 1L), 1L, 0x1FE01AF0L, 1L), // p_1604->g_53
        0x08FB828CL, // p_1604->g_71
        &p_1604->g_71, // p_1604->g_70
        (void*)0, // p_1604->g_77
        &p_1604->g_77, // p_1604->g_76
        (VECTOR(uint16_t, 2))(1UL, 0UL), // p_1604->g_83
        {{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}}}, // p_1604->g_94
        0x2C5FDD6C5526C9E8L, // p_1604->g_103
        (-3L), // p_1604->g_111
        0x63L, // p_1604->g_136
        0x4CL, // p_1604->g_138
        {9L,9L,9L,9L,9L,9L,9L,9L,9L,9L}, // p_1604->g_152
        (VECTOR(int32_t, 4))(0x39752E2FL, (VECTOR(int32_t, 2))(0x39752E2FL, (-8L)), (-8L)), // p_1604->g_155
        &p_1604->g_76, // p_1604->g_170
        &p_1604->g_170, // p_1604->g_169
        18446744073709551610UL, // p_1604->g_203
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x3DL), 0x3DL), // p_1604->g_210
        &p_1604->g_71, // p_1604->g_216
        {{{0x8A8DL}},{{0x8A8DL}},{{0x8A8DL}},{{0x8A8DL}},{{0x8A8DL}},{{0x8A8DL}}}, // p_1604->g_224
        &p_1604->g_224[1][0][0], // p_1604->g_223
        &p_1604->g_224[1][0][0], // p_1604->g_228
        (VECTOR(uint8_t, 8))(0x6BL, (VECTOR(uint8_t, 4))(0x6BL, (VECTOR(uint8_t, 2))(0x6BL, 254UL), 254UL), 254UL, 0x6BL, 254UL), // p_1604->g_248
        {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}}, // p_1604->g_266
        (VECTOR(uint8_t, 16))(0x9BL, (VECTOR(uint8_t, 4))(0x9BL, (VECTOR(uint8_t, 2))(0x9BL, 0xB1L), 0xB1L), 0xB1L, 0x9BL, 0xB1L, (VECTOR(uint8_t, 2))(0x9BL, 0xB1L), (VECTOR(uint8_t, 2))(0x9BL, 0xB1L), 0x9BL, 0xB1L, 0x9BL, 0xB1L), // p_1604->g_316
        (VECTOR(int8_t, 2))(4L, 0L), // p_1604->g_321
        {{0UL,0xF5E944323C9F6257L},{0UL,0xF5E944323C9F6257L},{0UL,0xF5E944323C9F6257L},{0UL,0xF5E944323C9F6257L},{0UL,0xF5E944323C9F6257L},{0UL,0xF5E944323C9F6257L},{0UL,0xF5E944323C9F6257L},{0UL,0xF5E944323C9F6257L}}, // p_1604->g_346
        0L, // p_1604->g_348
        (-1L), // p_1604->g_349
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xAE07L), 0xAE07L), 0xAE07L, 65535UL, 0xAE07L), // p_1604->g_361
        (-10L), // p_1604->g_375
        (VECTOR(int16_t, 2))(4L, 0x1771L), // p_1604->g_422
        (VECTOR(int16_t, 2))(0x2ECEL, 0x330BL), // p_1604->g_423
        (VECTOR(int16_t, 2))(0L, 0x0CCAL), // p_1604->g_424
        (VECTOR(int8_t, 16))(0x0DL, (VECTOR(int8_t, 4))(0x0DL, (VECTOR(int8_t, 2))(0x0DL, (-4L)), (-4L)), (-4L), 0x0DL, (-4L), (VECTOR(int8_t, 2))(0x0DL, (-4L)), (VECTOR(int8_t, 2))(0x0DL, (-4L)), 0x0DL, (-4L), 0x0DL, (-4L)), // p_1604->g_432
        (VECTOR(int64_t, 16))(0x5D6708C7E65246F8L, (VECTOR(int64_t, 4))(0x5D6708C7E65246F8L, (VECTOR(int64_t, 2))(0x5D6708C7E65246F8L, (-8L)), (-8L)), (-8L), 0x5D6708C7E65246F8L, (-8L), (VECTOR(int64_t, 2))(0x5D6708C7E65246F8L, (-8L)), (VECTOR(int64_t, 2))(0x5D6708C7E65246F8L, (-8L)), 0x5D6708C7E65246F8L, (-8L), 0x5D6708C7E65246F8L, (-8L)), // p_1604->g_454
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_1604->g_455
        (VECTOR(int64_t, 2))(4L, (-1L)), // p_1604->g_457
        0x1A8F83D2L, // p_1604->g_470
        (VECTOR(int16_t, 2))(1L, 0x39C9L), // p_1604->g_495
        0L, // p_1604->g_500
        {{0x1E4E5A1CA92FE411L,0x1E4E5A1CA92FE411L,0x7ABCCB8AF6E7E4A8L,0x5487254328173215L,(-1L)},{0x1E4E5A1CA92FE411L,0x1E4E5A1CA92FE411L,0x7ABCCB8AF6E7E4A8L,0x5487254328173215L,(-1L)},{0x1E4E5A1CA92FE411L,0x1E4E5A1CA92FE411L,0x7ABCCB8AF6E7E4A8L,0x5487254328173215L,(-1L)},{0x1E4E5A1CA92FE411L,0x1E4E5A1CA92FE411L,0x7ABCCB8AF6E7E4A8L,0x5487254328173215L,(-1L)},{0x1E4E5A1CA92FE411L,0x1E4E5A1CA92FE411L,0x7ABCCB8AF6E7E4A8L,0x5487254328173215L,(-1L)},{0x1E4E5A1CA92FE411L,0x1E4E5A1CA92FE411L,0x7ABCCB8AF6E7E4A8L,0x5487254328173215L,(-1L)},{0x1E4E5A1CA92FE411L,0x1E4E5A1CA92FE411L,0x7ABCCB8AF6E7E4A8L,0x5487254328173215L,(-1L)}}, // p_1604->g_501
        1L, // p_1604->g_502
        {{{&p_1604->g_500,&p_1604->g_500,(void*)0,(void*)0,(void*)0}},{{&p_1604->g_500,&p_1604->g_500,(void*)0,(void*)0,(void*)0}},{{&p_1604->g_500,&p_1604->g_500,(void*)0,(void*)0,(void*)0}},{{&p_1604->g_500,&p_1604->g_500,(void*)0,(void*)0,(void*)0}},{{&p_1604->g_500,&p_1604->g_500,(void*)0,(void*)0,(void*)0}},{{&p_1604->g_500,&p_1604->g_500,(void*)0,(void*)0,(void*)0}},{{&p_1604->g_500,&p_1604->g_500,(void*)0,(void*)0,(void*)0}}}, // p_1604->g_499
        &p_1604->g_499[2][0][2], // p_1604->g_498
        0xF47A4897L, // p_1604->g_547
        (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x0FB4L), 0x0FB4L), 0x0FB4L, 4L, 0x0FB4L, (VECTOR(int16_t, 2))(4L, 0x0FB4L), (VECTOR(int16_t, 2))(4L, 0x0FB4L), 4L, 0x0FB4L, 4L, 0x0FB4L), // p_1604->g_550
        (VECTOR(int8_t, 16))(0x1DL, (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, (-6L)), (-6L)), (-6L), 0x1DL, (-6L), (VECTOR(int8_t, 2))(0x1DL, (-6L)), (VECTOR(int8_t, 2))(0x1DL, (-6L)), 0x1DL, (-6L), 0x1DL, (-6L)), // p_1604->g_560
        (VECTOR(int8_t, 16))(0x26L, (VECTOR(int8_t, 4))(0x26L, (VECTOR(int8_t, 2))(0x26L, 0x14L), 0x14L), 0x14L, 0x26L, 0x14L, (VECTOR(int8_t, 2))(0x26L, 0x14L), (VECTOR(int8_t, 2))(0x26L, 0x14L), 0x26L, 0x14L, 0x26L, 0x14L), // p_1604->g_562
        (VECTOR(uint32_t, 4))(0xF172E53CL, (VECTOR(uint32_t, 2))(0xF172E53CL, 4294967287UL), 4294967287UL), // p_1604->g_577
        (VECTOR(uint8_t, 8))(0x68L, (VECTOR(uint8_t, 4))(0x68L, (VECTOR(uint8_t, 2))(0x68L, 251UL), 251UL), 251UL, 0x68L, 251UL), // p_1604->g_594
        (VECTOR(int32_t, 8))(0x2CDA737BL, (VECTOR(int32_t, 4))(0x2CDA737BL, (VECTOR(int32_t, 2))(0x2CDA737BL, 1L), 1L), 1L, 0x2CDA737BL, 1L), // p_1604->g_620
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1604->g_622
        &p_1604->g_622[2], // p_1604->g_621
        &p_1604->g_223, // p_1604->g_659
        (VECTOR(int32_t, 8))(0x655C4B18L, (VECTOR(int32_t, 4))(0x655C4B18L, (VECTOR(int32_t, 2))(0x655C4B18L, 0x179FBF13L), 0x179FBF13L), 0x179FBF13L, 0x655C4B18L, 0x179FBF13L), // p_1604->g_684
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2785F989L), 0x2785F989L), 0x2785F989L, (-1L), 0x2785F989L), // p_1604->g_689
        {(void*)0}, // p_1604->g_738
        &p_1604->g_738[0], // p_1604->g_737
        &p_1604->g_737, // p_1604->g_736
        &p_1604->g_736, // p_1604->g_735
        &p_1604->g_735, // p_1604->g_734
        &p_1604->g_734, // p_1604->g_733
        (VECTOR(int16_t, 16))(0x3D85L, (VECTOR(int16_t, 4))(0x3D85L, (VECTOR(int16_t, 2))(0x3D85L, 0x5CC0L), 0x5CC0L), 0x5CC0L, 0x3D85L, 0x5CC0L, (VECTOR(int16_t, 2))(0x3D85L, 0x5CC0L), (VECTOR(int16_t, 2))(0x3D85L, 0x5CC0L), 0x3D85L, 0x5CC0L, 0x3D85L, 0x5CC0L), // p_1604->g_746
        (-6L), // p_1604->g_750
        &p_1604->g_375, // p_1604->g_753
        {{{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753},{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753}},{{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753},{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753}},{{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753},{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753}},{{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753},{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753}},{{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753},{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753}},{{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753},{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753}},{{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753},{&p_1604->g_753,&p_1604->g_753,&p_1604->g_753,(void*)0,&p_1604->g_753,&p_1604->g_753}}}, // p_1604->g_752
        (VECTOR(int16_t, 2))(1L, 0x1982L), // p_1604->g_774
        &p_1604->g_169, // p_1604->g_843
        &p_1604->g_843, // p_1604->g_842
        (VECTOR(uint32_t, 16))(0xD19FFC3FL, (VECTOR(uint32_t, 4))(0xD19FFC3FL, (VECTOR(uint32_t, 2))(0xD19FFC3FL, 4294967295UL), 4294967295UL), 4294967295UL, 0xD19FFC3FL, 4294967295UL, (VECTOR(uint32_t, 2))(0xD19FFC3FL, 4294967295UL), (VECTOR(uint32_t, 2))(0xD19FFC3FL, 4294967295UL), 0xD19FFC3FL, 4294967295UL, 0xD19FFC3FL, 4294967295UL), // p_1604->g_858
        (VECTOR(uint32_t, 2))(0UL, 4294967295UL), // p_1604->g_859
        (VECTOR(uint8_t, 16))(0x58L, (VECTOR(uint8_t, 4))(0x58L, (VECTOR(uint8_t, 2))(0x58L, 4UL), 4UL), 4UL, 0x58L, 4UL, (VECTOR(uint8_t, 2))(0x58L, 4UL), (VECTOR(uint8_t, 2))(0x58L, 4UL), 0x58L, 4UL, 0x58L, 4UL), // p_1604->g_863
        (VECTOR(int8_t, 2))((-2L), (-6L)), // p_1604->g_864
        {&p_1604->g_94[3][3][0]}, // p_1604->g_875
        &p_1604->g_875[0], // p_1604->g_874
        0x0A9BBE32AD12F7E6L, // p_1604->g_925
        {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}, // p_1604->g_953
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x97E8L), 0x97E8L), 0x97E8L, 1UL, 0x97E8L), // p_1604->g_966
        (VECTOR(int16_t, 4))(0x01B0L, (VECTOR(int16_t, 2))(0x01B0L, 0x2C23L), 0x2C23L), // p_1604->g_967
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x48407AEB2A268DEAL), 0x48407AEB2A268DEAL), // p_1604->g_990
        0UL, // p_1604->g_1001
        (VECTOR(int32_t, 2))(0x10882070L, 0x0372F14DL), // p_1604->g_1006
        (VECTOR(uint16_t, 2))(0x9DB4L, 0xEDC3L), // p_1604->g_1076
        (VECTOR(uint16_t, 4))(0x30BBL, (VECTOR(uint16_t, 2))(0x30BBL, 0xD28CL), 0xD28CL), // p_1604->g_1103
        (void*)0, // p_1604->g_1169
        &p_1604->g_1169, // p_1604->g_1168
        (VECTOR(uint32_t, 2))(0xEB8FFF82L, 5UL), // p_1604->g_1244
        (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x7EL), 0x7EL), // p_1604->g_1277
        (VECTOR(int16_t, 16))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 1L), 1L), 1L, 6L, 1L, (VECTOR(int16_t, 2))(6L, 1L), (VECTOR(int16_t, 2))(6L, 1L), 6L, 1L, 6L, 1L), // p_1604->g_1519
        {0xF857411BB5867CB3L,0xF857411BB5867CB3L,0xF857411BB5867CB3L,0xF857411BB5867CB3L}, // p_1604->g_1520
        (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L)), // p_1604->g_1558
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x6DL), 0x6DL), 0x6DL, 255UL, 0x6DL, (VECTOR(uint8_t, 2))(255UL, 0x6DL), (VECTOR(uint8_t, 2))(255UL, 0x6DL), 255UL, 0x6DL, 255UL, 0x6DL), // p_1604->g_1578
        (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x62L), 0x62L), 0x62L, 2UL, 0x62L, (VECTOR(uint8_t, 2))(2UL, 0x62L), (VECTOR(uint8_t, 2))(2UL, 0x62L), 2UL, 0x62L, 2UL, 0x62L), // p_1604->g_1579
        0, // p_1604->v_collective
        sequence_input[get_global_id(0)], // p_1604->global_0_offset
        sequence_input[get_global_id(1)], // p_1604->global_1_offset
        sequence_input[get_global_id(2)], // p_1604->global_2_offset
        sequence_input[get_local_id(0)], // p_1604->local_0_offset
        sequence_input[get_local_id(1)], // p_1604->local_1_offset
        sequence_input[get_local_id(2)], // p_1604->local_2_offset
        sequence_input[get_group_id(0)], // p_1604->group_0_offset
        sequence_input[get_group_id(1)], // p_1604->group_1_offset
        sequence_input[get_group_id(2)], // p_1604->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_1604->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1605 = c_1606;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1604);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1604->g_19[i], "p_1604->g_19[i]", print_hash_value);

    }
    transparent_crc(p_1604->g_20.s0, "p_1604->g_20.s0", print_hash_value);
    transparent_crc(p_1604->g_20.s1, "p_1604->g_20.s1", print_hash_value);
    transparent_crc(p_1604->g_20.s2, "p_1604->g_20.s2", print_hash_value);
    transparent_crc(p_1604->g_20.s3, "p_1604->g_20.s3", print_hash_value);
    transparent_crc(p_1604->g_20.s4, "p_1604->g_20.s4", print_hash_value);
    transparent_crc(p_1604->g_20.s5, "p_1604->g_20.s5", print_hash_value);
    transparent_crc(p_1604->g_20.s6, "p_1604->g_20.s6", print_hash_value);
    transparent_crc(p_1604->g_20.s7, "p_1604->g_20.s7", print_hash_value);
    transparent_crc(p_1604->g_23, "p_1604->g_23", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1604->g_49[i][j][k], "p_1604->g_49[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1604->g_53.s0, "p_1604->g_53.s0", print_hash_value);
    transparent_crc(p_1604->g_53.s1, "p_1604->g_53.s1", print_hash_value);
    transparent_crc(p_1604->g_53.s2, "p_1604->g_53.s2", print_hash_value);
    transparent_crc(p_1604->g_53.s3, "p_1604->g_53.s3", print_hash_value);
    transparent_crc(p_1604->g_53.s4, "p_1604->g_53.s4", print_hash_value);
    transparent_crc(p_1604->g_53.s5, "p_1604->g_53.s5", print_hash_value);
    transparent_crc(p_1604->g_53.s6, "p_1604->g_53.s6", print_hash_value);
    transparent_crc(p_1604->g_53.s7, "p_1604->g_53.s7", print_hash_value);
    transparent_crc(p_1604->g_71, "p_1604->g_71", print_hash_value);
    transparent_crc(p_1604->g_83.x, "p_1604->g_83.x", print_hash_value);
    transparent_crc(p_1604->g_83.y, "p_1604->g_83.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1604->g_94[i][j][k], "p_1604->g_94[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1604->g_103, "p_1604->g_103", print_hash_value);
    transparent_crc(p_1604->g_111, "p_1604->g_111", print_hash_value);
    transparent_crc(p_1604->g_136, "p_1604->g_136", print_hash_value);
    transparent_crc(p_1604->g_138, "p_1604->g_138", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1604->g_152[i], "p_1604->g_152[i]", print_hash_value);

    }
    transparent_crc(p_1604->g_155.x, "p_1604->g_155.x", print_hash_value);
    transparent_crc(p_1604->g_155.y, "p_1604->g_155.y", print_hash_value);
    transparent_crc(p_1604->g_155.z, "p_1604->g_155.z", print_hash_value);
    transparent_crc(p_1604->g_155.w, "p_1604->g_155.w", print_hash_value);
    transparent_crc(p_1604->g_203, "p_1604->g_203", print_hash_value);
    transparent_crc(p_1604->g_210.x, "p_1604->g_210.x", print_hash_value);
    transparent_crc(p_1604->g_210.y, "p_1604->g_210.y", print_hash_value);
    transparent_crc(p_1604->g_210.z, "p_1604->g_210.z", print_hash_value);
    transparent_crc(p_1604->g_210.w, "p_1604->g_210.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1604->g_224[i][j][k], "p_1604->g_224[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1604->g_248.s0, "p_1604->g_248.s0", print_hash_value);
    transparent_crc(p_1604->g_248.s1, "p_1604->g_248.s1", print_hash_value);
    transparent_crc(p_1604->g_248.s2, "p_1604->g_248.s2", print_hash_value);
    transparent_crc(p_1604->g_248.s3, "p_1604->g_248.s3", print_hash_value);
    transparent_crc(p_1604->g_248.s4, "p_1604->g_248.s4", print_hash_value);
    transparent_crc(p_1604->g_248.s5, "p_1604->g_248.s5", print_hash_value);
    transparent_crc(p_1604->g_248.s6, "p_1604->g_248.s6", print_hash_value);
    transparent_crc(p_1604->g_248.s7, "p_1604->g_248.s7", print_hash_value);
    transparent_crc(p_1604->g_316.s0, "p_1604->g_316.s0", print_hash_value);
    transparent_crc(p_1604->g_316.s1, "p_1604->g_316.s1", print_hash_value);
    transparent_crc(p_1604->g_316.s2, "p_1604->g_316.s2", print_hash_value);
    transparent_crc(p_1604->g_316.s3, "p_1604->g_316.s3", print_hash_value);
    transparent_crc(p_1604->g_316.s4, "p_1604->g_316.s4", print_hash_value);
    transparent_crc(p_1604->g_316.s5, "p_1604->g_316.s5", print_hash_value);
    transparent_crc(p_1604->g_316.s6, "p_1604->g_316.s6", print_hash_value);
    transparent_crc(p_1604->g_316.s7, "p_1604->g_316.s7", print_hash_value);
    transparent_crc(p_1604->g_316.s8, "p_1604->g_316.s8", print_hash_value);
    transparent_crc(p_1604->g_316.s9, "p_1604->g_316.s9", print_hash_value);
    transparent_crc(p_1604->g_316.sa, "p_1604->g_316.sa", print_hash_value);
    transparent_crc(p_1604->g_316.sb, "p_1604->g_316.sb", print_hash_value);
    transparent_crc(p_1604->g_316.sc, "p_1604->g_316.sc", print_hash_value);
    transparent_crc(p_1604->g_316.sd, "p_1604->g_316.sd", print_hash_value);
    transparent_crc(p_1604->g_316.se, "p_1604->g_316.se", print_hash_value);
    transparent_crc(p_1604->g_316.sf, "p_1604->g_316.sf", print_hash_value);
    transparent_crc(p_1604->g_321.x, "p_1604->g_321.x", print_hash_value);
    transparent_crc(p_1604->g_321.y, "p_1604->g_321.y", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1604->g_346[i][j], "p_1604->g_346[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1604->g_348, "p_1604->g_348", print_hash_value);
    transparent_crc(p_1604->g_349, "p_1604->g_349", print_hash_value);
    transparent_crc(p_1604->g_361.s0, "p_1604->g_361.s0", print_hash_value);
    transparent_crc(p_1604->g_361.s1, "p_1604->g_361.s1", print_hash_value);
    transparent_crc(p_1604->g_361.s2, "p_1604->g_361.s2", print_hash_value);
    transparent_crc(p_1604->g_361.s3, "p_1604->g_361.s3", print_hash_value);
    transparent_crc(p_1604->g_361.s4, "p_1604->g_361.s4", print_hash_value);
    transparent_crc(p_1604->g_361.s5, "p_1604->g_361.s5", print_hash_value);
    transparent_crc(p_1604->g_361.s6, "p_1604->g_361.s6", print_hash_value);
    transparent_crc(p_1604->g_361.s7, "p_1604->g_361.s7", print_hash_value);
    transparent_crc(p_1604->g_375, "p_1604->g_375", print_hash_value);
    transparent_crc(p_1604->g_422.x, "p_1604->g_422.x", print_hash_value);
    transparent_crc(p_1604->g_422.y, "p_1604->g_422.y", print_hash_value);
    transparent_crc(p_1604->g_423.x, "p_1604->g_423.x", print_hash_value);
    transparent_crc(p_1604->g_423.y, "p_1604->g_423.y", print_hash_value);
    transparent_crc(p_1604->g_424.x, "p_1604->g_424.x", print_hash_value);
    transparent_crc(p_1604->g_424.y, "p_1604->g_424.y", print_hash_value);
    transparent_crc(p_1604->g_432.s0, "p_1604->g_432.s0", print_hash_value);
    transparent_crc(p_1604->g_432.s1, "p_1604->g_432.s1", print_hash_value);
    transparent_crc(p_1604->g_432.s2, "p_1604->g_432.s2", print_hash_value);
    transparent_crc(p_1604->g_432.s3, "p_1604->g_432.s3", print_hash_value);
    transparent_crc(p_1604->g_432.s4, "p_1604->g_432.s4", print_hash_value);
    transparent_crc(p_1604->g_432.s5, "p_1604->g_432.s5", print_hash_value);
    transparent_crc(p_1604->g_432.s6, "p_1604->g_432.s6", print_hash_value);
    transparent_crc(p_1604->g_432.s7, "p_1604->g_432.s7", print_hash_value);
    transparent_crc(p_1604->g_432.s8, "p_1604->g_432.s8", print_hash_value);
    transparent_crc(p_1604->g_432.s9, "p_1604->g_432.s9", print_hash_value);
    transparent_crc(p_1604->g_432.sa, "p_1604->g_432.sa", print_hash_value);
    transparent_crc(p_1604->g_432.sb, "p_1604->g_432.sb", print_hash_value);
    transparent_crc(p_1604->g_432.sc, "p_1604->g_432.sc", print_hash_value);
    transparent_crc(p_1604->g_432.sd, "p_1604->g_432.sd", print_hash_value);
    transparent_crc(p_1604->g_432.se, "p_1604->g_432.se", print_hash_value);
    transparent_crc(p_1604->g_432.sf, "p_1604->g_432.sf", print_hash_value);
    transparent_crc(p_1604->g_454.s0, "p_1604->g_454.s0", print_hash_value);
    transparent_crc(p_1604->g_454.s1, "p_1604->g_454.s1", print_hash_value);
    transparent_crc(p_1604->g_454.s2, "p_1604->g_454.s2", print_hash_value);
    transparent_crc(p_1604->g_454.s3, "p_1604->g_454.s3", print_hash_value);
    transparent_crc(p_1604->g_454.s4, "p_1604->g_454.s4", print_hash_value);
    transparent_crc(p_1604->g_454.s5, "p_1604->g_454.s5", print_hash_value);
    transparent_crc(p_1604->g_454.s6, "p_1604->g_454.s6", print_hash_value);
    transparent_crc(p_1604->g_454.s7, "p_1604->g_454.s7", print_hash_value);
    transparent_crc(p_1604->g_454.s8, "p_1604->g_454.s8", print_hash_value);
    transparent_crc(p_1604->g_454.s9, "p_1604->g_454.s9", print_hash_value);
    transparent_crc(p_1604->g_454.sa, "p_1604->g_454.sa", print_hash_value);
    transparent_crc(p_1604->g_454.sb, "p_1604->g_454.sb", print_hash_value);
    transparent_crc(p_1604->g_454.sc, "p_1604->g_454.sc", print_hash_value);
    transparent_crc(p_1604->g_454.sd, "p_1604->g_454.sd", print_hash_value);
    transparent_crc(p_1604->g_454.se, "p_1604->g_454.se", print_hash_value);
    transparent_crc(p_1604->g_454.sf, "p_1604->g_454.sf", print_hash_value);
    transparent_crc(p_1604->g_455.s0, "p_1604->g_455.s0", print_hash_value);
    transparent_crc(p_1604->g_455.s1, "p_1604->g_455.s1", print_hash_value);
    transparent_crc(p_1604->g_455.s2, "p_1604->g_455.s2", print_hash_value);
    transparent_crc(p_1604->g_455.s3, "p_1604->g_455.s3", print_hash_value);
    transparent_crc(p_1604->g_455.s4, "p_1604->g_455.s4", print_hash_value);
    transparent_crc(p_1604->g_455.s5, "p_1604->g_455.s5", print_hash_value);
    transparent_crc(p_1604->g_455.s6, "p_1604->g_455.s6", print_hash_value);
    transparent_crc(p_1604->g_455.s7, "p_1604->g_455.s7", print_hash_value);
    transparent_crc(p_1604->g_457.x, "p_1604->g_457.x", print_hash_value);
    transparent_crc(p_1604->g_457.y, "p_1604->g_457.y", print_hash_value);
    transparent_crc(p_1604->g_470, "p_1604->g_470", print_hash_value);
    transparent_crc(p_1604->g_495.x, "p_1604->g_495.x", print_hash_value);
    transparent_crc(p_1604->g_495.y, "p_1604->g_495.y", print_hash_value);
    transparent_crc(p_1604->g_500, "p_1604->g_500", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1604->g_501[i][j], "p_1604->g_501[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1604->g_502, "p_1604->g_502", print_hash_value);
    transparent_crc(p_1604->g_547, "p_1604->g_547", print_hash_value);
    transparent_crc(p_1604->g_550.s0, "p_1604->g_550.s0", print_hash_value);
    transparent_crc(p_1604->g_550.s1, "p_1604->g_550.s1", print_hash_value);
    transparent_crc(p_1604->g_550.s2, "p_1604->g_550.s2", print_hash_value);
    transparent_crc(p_1604->g_550.s3, "p_1604->g_550.s3", print_hash_value);
    transparent_crc(p_1604->g_550.s4, "p_1604->g_550.s4", print_hash_value);
    transparent_crc(p_1604->g_550.s5, "p_1604->g_550.s5", print_hash_value);
    transparent_crc(p_1604->g_550.s6, "p_1604->g_550.s6", print_hash_value);
    transparent_crc(p_1604->g_550.s7, "p_1604->g_550.s7", print_hash_value);
    transparent_crc(p_1604->g_550.s8, "p_1604->g_550.s8", print_hash_value);
    transparent_crc(p_1604->g_550.s9, "p_1604->g_550.s9", print_hash_value);
    transparent_crc(p_1604->g_550.sa, "p_1604->g_550.sa", print_hash_value);
    transparent_crc(p_1604->g_550.sb, "p_1604->g_550.sb", print_hash_value);
    transparent_crc(p_1604->g_550.sc, "p_1604->g_550.sc", print_hash_value);
    transparent_crc(p_1604->g_550.sd, "p_1604->g_550.sd", print_hash_value);
    transparent_crc(p_1604->g_550.se, "p_1604->g_550.se", print_hash_value);
    transparent_crc(p_1604->g_550.sf, "p_1604->g_550.sf", print_hash_value);
    transparent_crc(p_1604->g_560.s0, "p_1604->g_560.s0", print_hash_value);
    transparent_crc(p_1604->g_560.s1, "p_1604->g_560.s1", print_hash_value);
    transparent_crc(p_1604->g_560.s2, "p_1604->g_560.s2", print_hash_value);
    transparent_crc(p_1604->g_560.s3, "p_1604->g_560.s3", print_hash_value);
    transparent_crc(p_1604->g_560.s4, "p_1604->g_560.s4", print_hash_value);
    transparent_crc(p_1604->g_560.s5, "p_1604->g_560.s5", print_hash_value);
    transparent_crc(p_1604->g_560.s6, "p_1604->g_560.s6", print_hash_value);
    transparent_crc(p_1604->g_560.s7, "p_1604->g_560.s7", print_hash_value);
    transparent_crc(p_1604->g_560.s8, "p_1604->g_560.s8", print_hash_value);
    transparent_crc(p_1604->g_560.s9, "p_1604->g_560.s9", print_hash_value);
    transparent_crc(p_1604->g_560.sa, "p_1604->g_560.sa", print_hash_value);
    transparent_crc(p_1604->g_560.sb, "p_1604->g_560.sb", print_hash_value);
    transparent_crc(p_1604->g_560.sc, "p_1604->g_560.sc", print_hash_value);
    transparent_crc(p_1604->g_560.sd, "p_1604->g_560.sd", print_hash_value);
    transparent_crc(p_1604->g_560.se, "p_1604->g_560.se", print_hash_value);
    transparent_crc(p_1604->g_560.sf, "p_1604->g_560.sf", print_hash_value);
    transparent_crc(p_1604->g_562.s0, "p_1604->g_562.s0", print_hash_value);
    transparent_crc(p_1604->g_562.s1, "p_1604->g_562.s1", print_hash_value);
    transparent_crc(p_1604->g_562.s2, "p_1604->g_562.s2", print_hash_value);
    transparent_crc(p_1604->g_562.s3, "p_1604->g_562.s3", print_hash_value);
    transparent_crc(p_1604->g_562.s4, "p_1604->g_562.s4", print_hash_value);
    transparent_crc(p_1604->g_562.s5, "p_1604->g_562.s5", print_hash_value);
    transparent_crc(p_1604->g_562.s6, "p_1604->g_562.s6", print_hash_value);
    transparent_crc(p_1604->g_562.s7, "p_1604->g_562.s7", print_hash_value);
    transparent_crc(p_1604->g_562.s8, "p_1604->g_562.s8", print_hash_value);
    transparent_crc(p_1604->g_562.s9, "p_1604->g_562.s9", print_hash_value);
    transparent_crc(p_1604->g_562.sa, "p_1604->g_562.sa", print_hash_value);
    transparent_crc(p_1604->g_562.sb, "p_1604->g_562.sb", print_hash_value);
    transparent_crc(p_1604->g_562.sc, "p_1604->g_562.sc", print_hash_value);
    transparent_crc(p_1604->g_562.sd, "p_1604->g_562.sd", print_hash_value);
    transparent_crc(p_1604->g_562.se, "p_1604->g_562.se", print_hash_value);
    transparent_crc(p_1604->g_562.sf, "p_1604->g_562.sf", print_hash_value);
    transparent_crc(p_1604->g_577.x, "p_1604->g_577.x", print_hash_value);
    transparent_crc(p_1604->g_577.y, "p_1604->g_577.y", print_hash_value);
    transparent_crc(p_1604->g_577.z, "p_1604->g_577.z", print_hash_value);
    transparent_crc(p_1604->g_577.w, "p_1604->g_577.w", print_hash_value);
    transparent_crc(p_1604->g_594.s0, "p_1604->g_594.s0", print_hash_value);
    transparent_crc(p_1604->g_594.s1, "p_1604->g_594.s1", print_hash_value);
    transparent_crc(p_1604->g_594.s2, "p_1604->g_594.s2", print_hash_value);
    transparent_crc(p_1604->g_594.s3, "p_1604->g_594.s3", print_hash_value);
    transparent_crc(p_1604->g_594.s4, "p_1604->g_594.s4", print_hash_value);
    transparent_crc(p_1604->g_594.s5, "p_1604->g_594.s5", print_hash_value);
    transparent_crc(p_1604->g_594.s6, "p_1604->g_594.s6", print_hash_value);
    transparent_crc(p_1604->g_594.s7, "p_1604->g_594.s7", print_hash_value);
    transparent_crc(p_1604->g_620.s0, "p_1604->g_620.s0", print_hash_value);
    transparent_crc(p_1604->g_620.s1, "p_1604->g_620.s1", print_hash_value);
    transparent_crc(p_1604->g_620.s2, "p_1604->g_620.s2", print_hash_value);
    transparent_crc(p_1604->g_620.s3, "p_1604->g_620.s3", print_hash_value);
    transparent_crc(p_1604->g_620.s4, "p_1604->g_620.s4", print_hash_value);
    transparent_crc(p_1604->g_620.s5, "p_1604->g_620.s5", print_hash_value);
    transparent_crc(p_1604->g_620.s6, "p_1604->g_620.s6", print_hash_value);
    transparent_crc(p_1604->g_620.s7, "p_1604->g_620.s7", print_hash_value);
    transparent_crc(p_1604->g_684.s0, "p_1604->g_684.s0", print_hash_value);
    transparent_crc(p_1604->g_684.s1, "p_1604->g_684.s1", print_hash_value);
    transparent_crc(p_1604->g_684.s2, "p_1604->g_684.s2", print_hash_value);
    transparent_crc(p_1604->g_684.s3, "p_1604->g_684.s3", print_hash_value);
    transparent_crc(p_1604->g_684.s4, "p_1604->g_684.s4", print_hash_value);
    transparent_crc(p_1604->g_684.s5, "p_1604->g_684.s5", print_hash_value);
    transparent_crc(p_1604->g_684.s6, "p_1604->g_684.s6", print_hash_value);
    transparent_crc(p_1604->g_684.s7, "p_1604->g_684.s7", print_hash_value);
    transparent_crc(p_1604->g_689.s0, "p_1604->g_689.s0", print_hash_value);
    transparent_crc(p_1604->g_689.s1, "p_1604->g_689.s1", print_hash_value);
    transparent_crc(p_1604->g_689.s2, "p_1604->g_689.s2", print_hash_value);
    transparent_crc(p_1604->g_689.s3, "p_1604->g_689.s3", print_hash_value);
    transparent_crc(p_1604->g_689.s4, "p_1604->g_689.s4", print_hash_value);
    transparent_crc(p_1604->g_689.s5, "p_1604->g_689.s5", print_hash_value);
    transparent_crc(p_1604->g_689.s6, "p_1604->g_689.s6", print_hash_value);
    transparent_crc(p_1604->g_689.s7, "p_1604->g_689.s7", print_hash_value);
    transparent_crc(p_1604->g_746.s0, "p_1604->g_746.s0", print_hash_value);
    transparent_crc(p_1604->g_746.s1, "p_1604->g_746.s1", print_hash_value);
    transparent_crc(p_1604->g_746.s2, "p_1604->g_746.s2", print_hash_value);
    transparent_crc(p_1604->g_746.s3, "p_1604->g_746.s3", print_hash_value);
    transparent_crc(p_1604->g_746.s4, "p_1604->g_746.s4", print_hash_value);
    transparent_crc(p_1604->g_746.s5, "p_1604->g_746.s5", print_hash_value);
    transparent_crc(p_1604->g_746.s6, "p_1604->g_746.s6", print_hash_value);
    transparent_crc(p_1604->g_746.s7, "p_1604->g_746.s7", print_hash_value);
    transparent_crc(p_1604->g_746.s8, "p_1604->g_746.s8", print_hash_value);
    transparent_crc(p_1604->g_746.s9, "p_1604->g_746.s9", print_hash_value);
    transparent_crc(p_1604->g_746.sa, "p_1604->g_746.sa", print_hash_value);
    transparent_crc(p_1604->g_746.sb, "p_1604->g_746.sb", print_hash_value);
    transparent_crc(p_1604->g_746.sc, "p_1604->g_746.sc", print_hash_value);
    transparent_crc(p_1604->g_746.sd, "p_1604->g_746.sd", print_hash_value);
    transparent_crc(p_1604->g_746.se, "p_1604->g_746.se", print_hash_value);
    transparent_crc(p_1604->g_746.sf, "p_1604->g_746.sf", print_hash_value);
    transparent_crc(p_1604->g_750, "p_1604->g_750", print_hash_value);
    transparent_crc(p_1604->g_774.x, "p_1604->g_774.x", print_hash_value);
    transparent_crc(p_1604->g_774.y, "p_1604->g_774.y", print_hash_value);
    transparent_crc(p_1604->g_858.s0, "p_1604->g_858.s0", print_hash_value);
    transparent_crc(p_1604->g_858.s1, "p_1604->g_858.s1", print_hash_value);
    transparent_crc(p_1604->g_858.s2, "p_1604->g_858.s2", print_hash_value);
    transparent_crc(p_1604->g_858.s3, "p_1604->g_858.s3", print_hash_value);
    transparent_crc(p_1604->g_858.s4, "p_1604->g_858.s4", print_hash_value);
    transparent_crc(p_1604->g_858.s5, "p_1604->g_858.s5", print_hash_value);
    transparent_crc(p_1604->g_858.s6, "p_1604->g_858.s6", print_hash_value);
    transparent_crc(p_1604->g_858.s7, "p_1604->g_858.s7", print_hash_value);
    transparent_crc(p_1604->g_858.s8, "p_1604->g_858.s8", print_hash_value);
    transparent_crc(p_1604->g_858.s9, "p_1604->g_858.s9", print_hash_value);
    transparent_crc(p_1604->g_858.sa, "p_1604->g_858.sa", print_hash_value);
    transparent_crc(p_1604->g_858.sb, "p_1604->g_858.sb", print_hash_value);
    transparent_crc(p_1604->g_858.sc, "p_1604->g_858.sc", print_hash_value);
    transparent_crc(p_1604->g_858.sd, "p_1604->g_858.sd", print_hash_value);
    transparent_crc(p_1604->g_858.se, "p_1604->g_858.se", print_hash_value);
    transparent_crc(p_1604->g_858.sf, "p_1604->g_858.sf", print_hash_value);
    transparent_crc(p_1604->g_859.x, "p_1604->g_859.x", print_hash_value);
    transparent_crc(p_1604->g_859.y, "p_1604->g_859.y", print_hash_value);
    transparent_crc(p_1604->g_863.s0, "p_1604->g_863.s0", print_hash_value);
    transparent_crc(p_1604->g_863.s1, "p_1604->g_863.s1", print_hash_value);
    transparent_crc(p_1604->g_863.s2, "p_1604->g_863.s2", print_hash_value);
    transparent_crc(p_1604->g_863.s3, "p_1604->g_863.s3", print_hash_value);
    transparent_crc(p_1604->g_863.s4, "p_1604->g_863.s4", print_hash_value);
    transparent_crc(p_1604->g_863.s5, "p_1604->g_863.s5", print_hash_value);
    transparent_crc(p_1604->g_863.s6, "p_1604->g_863.s6", print_hash_value);
    transparent_crc(p_1604->g_863.s7, "p_1604->g_863.s7", print_hash_value);
    transparent_crc(p_1604->g_863.s8, "p_1604->g_863.s8", print_hash_value);
    transparent_crc(p_1604->g_863.s9, "p_1604->g_863.s9", print_hash_value);
    transparent_crc(p_1604->g_863.sa, "p_1604->g_863.sa", print_hash_value);
    transparent_crc(p_1604->g_863.sb, "p_1604->g_863.sb", print_hash_value);
    transparent_crc(p_1604->g_863.sc, "p_1604->g_863.sc", print_hash_value);
    transparent_crc(p_1604->g_863.sd, "p_1604->g_863.sd", print_hash_value);
    transparent_crc(p_1604->g_863.se, "p_1604->g_863.se", print_hash_value);
    transparent_crc(p_1604->g_863.sf, "p_1604->g_863.sf", print_hash_value);
    transparent_crc(p_1604->g_864.x, "p_1604->g_864.x", print_hash_value);
    transparent_crc(p_1604->g_864.y, "p_1604->g_864.y", print_hash_value);
    transparent_crc(p_1604->g_925, "p_1604->g_925", print_hash_value);
    transparent_crc(p_1604->g_966.s0, "p_1604->g_966.s0", print_hash_value);
    transparent_crc(p_1604->g_966.s1, "p_1604->g_966.s1", print_hash_value);
    transparent_crc(p_1604->g_966.s2, "p_1604->g_966.s2", print_hash_value);
    transparent_crc(p_1604->g_966.s3, "p_1604->g_966.s3", print_hash_value);
    transparent_crc(p_1604->g_966.s4, "p_1604->g_966.s4", print_hash_value);
    transparent_crc(p_1604->g_966.s5, "p_1604->g_966.s5", print_hash_value);
    transparent_crc(p_1604->g_966.s6, "p_1604->g_966.s6", print_hash_value);
    transparent_crc(p_1604->g_966.s7, "p_1604->g_966.s7", print_hash_value);
    transparent_crc(p_1604->g_967.x, "p_1604->g_967.x", print_hash_value);
    transparent_crc(p_1604->g_967.y, "p_1604->g_967.y", print_hash_value);
    transparent_crc(p_1604->g_967.z, "p_1604->g_967.z", print_hash_value);
    transparent_crc(p_1604->g_967.w, "p_1604->g_967.w", print_hash_value);
    transparent_crc(p_1604->g_990.x, "p_1604->g_990.x", print_hash_value);
    transparent_crc(p_1604->g_990.y, "p_1604->g_990.y", print_hash_value);
    transparent_crc(p_1604->g_990.z, "p_1604->g_990.z", print_hash_value);
    transparent_crc(p_1604->g_990.w, "p_1604->g_990.w", print_hash_value);
    transparent_crc(p_1604->g_1001, "p_1604->g_1001", print_hash_value);
    transparent_crc(p_1604->g_1006.x, "p_1604->g_1006.x", print_hash_value);
    transparent_crc(p_1604->g_1006.y, "p_1604->g_1006.y", print_hash_value);
    transparent_crc(p_1604->g_1076.x, "p_1604->g_1076.x", print_hash_value);
    transparent_crc(p_1604->g_1076.y, "p_1604->g_1076.y", print_hash_value);
    transparent_crc(p_1604->g_1103.x, "p_1604->g_1103.x", print_hash_value);
    transparent_crc(p_1604->g_1103.y, "p_1604->g_1103.y", print_hash_value);
    transparent_crc(p_1604->g_1103.z, "p_1604->g_1103.z", print_hash_value);
    transparent_crc(p_1604->g_1103.w, "p_1604->g_1103.w", print_hash_value);
    transparent_crc(p_1604->g_1244.x, "p_1604->g_1244.x", print_hash_value);
    transparent_crc(p_1604->g_1244.y, "p_1604->g_1244.y", print_hash_value);
    transparent_crc(p_1604->g_1277.x, "p_1604->g_1277.x", print_hash_value);
    transparent_crc(p_1604->g_1277.y, "p_1604->g_1277.y", print_hash_value);
    transparent_crc(p_1604->g_1277.z, "p_1604->g_1277.z", print_hash_value);
    transparent_crc(p_1604->g_1277.w, "p_1604->g_1277.w", print_hash_value);
    transparent_crc(p_1604->g_1519.s0, "p_1604->g_1519.s0", print_hash_value);
    transparent_crc(p_1604->g_1519.s1, "p_1604->g_1519.s1", print_hash_value);
    transparent_crc(p_1604->g_1519.s2, "p_1604->g_1519.s2", print_hash_value);
    transparent_crc(p_1604->g_1519.s3, "p_1604->g_1519.s3", print_hash_value);
    transparent_crc(p_1604->g_1519.s4, "p_1604->g_1519.s4", print_hash_value);
    transparent_crc(p_1604->g_1519.s5, "p_1604->g_1519.s5", print_hash_value);
    transparent_crc(p_1604->g_1519.s6, "p_1604->g_1519.s6", print_hash_value);
    transparent_crc(p_1604->g_1519.s7, "p_1604->g_1519.s7", print_hash_value);
    transparent_crc(p_1604->g_1519.s8, "p_1604->g_1519.s8", print_hash_value);
    transparent_crc(p_1604->g_1519.s9, "p_1604->g_1519.s9", print_hash_value);
    transparent_crc(p_1604->g_1519.sa, "p_1604->g_1519.sa", print_hash_value);
    transparent_crc(p_1604->g_1519.sb, "p_1604->g_1519.sb", print_hash_value);
    transparent_crc(p_1604->g_1519.sc, "p_1604->g_1519.sc", print_hash_value);
    transparent_crc(p_1604->g_1519.sd, "p_1604->g_1519.sd", print_hash_value);
    transparent_crc(p_1604->g_1519.se, "p_1604->g_1519.se", print_hash_value);
    transparent_crc(p_1604->g_1519.sf, "p_1604->g_1519.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1604->g_1520[i], "p_1604->g_1520[i]", print_hash_value);

    }
    transparent_crc(p_1604->g_1558.s0, "p_1604->g_1558.s0", print_hash_value);
    transparent_crc(p_1604->g_1558.s1, "p_1604->g_1558.s1", print_hash_value);
    transparent_crc(p_1604->g_1558.s2, "p_1604->g_1558.s2", print_hash_value);
    transparent_crc(p_1604->g_1558.s3, "p_1604->g_1558.s3", print_hash_value);
    transparent_crc(p_1604->g_1558.s4, "p_1604->g_1558.s4", print_hash_value);
    transparent_crc(p_1604->g_1558.s5, "p_1604->g_1558.s5", print_hash_value);
    transparent_crc(p_1604->g_1558.s6, "p_1604->g_1558.s6", print_hash_value);
    transparent_crc(p_1604->g_1558.s7, "p_1604->g_1558.s7", print_hash_value);
    transparent_crc(p_1604->g_1578.s0, "p_1604->g_1578.s0", print_hash_value);
    transparent_crc(p_1604->g_1578.s1, "p_1604->g_1578.s1", print_hash_value);
    transparent_crc(p_1604->g_1578.s2, "p_1604->g_1578.s2", print_hash_value);
    transparent_crc(p_1604->g_1578.s3, "p_1604->g_1578.s3", print_hash_value);
    transparent_crc(p_1604->g_1578.s4, "p_1604->g_1578.s4", print_hash_value);
    transparent_crc(p_1604->g_1578.s5, "p_1604->g_1578.s5", print_hash_value);
    transparent_crc(p_1604->g_1578.s6, "p_1604->g_1578.s6", print_hash_value);
    transparent_crc(p_1604->g_1578.s7, "p_1604->g_1578.s7", print_hash_value);
    transparent_crc(p_1604->g_1578.s8, "p_1604->g_1578.s8", print_hash_value);
    transparent_crc(p_1604->g_1578.s9, "p_1604->g_1578.s9", print_hash_value);
    transparent_crc(p_1604->g_1578.sa, "p_1604->g_1578.sa", print_hash_value);
    transparent_crc(p_1604->g_1578.sb, "p_1604->g_1578.sb", print_hash_value);
    transparent_crc(p_1604->g_1578.sc, "p_1604->g_1578.sc", print_hash_value);
    transparent_crc(p_1604->g_1578.sd, "p_1604->g_1578.sd", print_hash_value);
    transparent_crc(p_1604->g_1578.se, "p_1604->g_1578.se", print_hash_value);
    transparent_crc(p_1604->g_1578.sf, "p_1604->g_1578.sf", print_hash_value);
    transparent_crc(p_1604->g_1579.s0, "p_1604->g_1579.s0", print_hash_value);
    transparent_crc(p_1604->g_1579.s1, "p_1604->g_1579.s1", print_hash_value);
    transparent_crc(p_1604->g_1579.s2, "p_1604->g_1579.s2", print_hash_value);
    transparent_crc(p_1604->g_1579.s3, "p_1604->g_1579.s3", print_hash_value);
    transparent_crc(p_1604->g_1579.s4, "p_1604->g_1579.s4", print_hash_value);
    transparent_crc(p_1604->g_1579.s5, "p_1604->g_1579.s5", print_hash_value);
    transparent_crc(p_1604->g_1579.s6, "p_1604->g_1579.s6", print_hash_value);
    transparent_crc(p_1604->g_1579.s7, "p_1604->g_1579.s7", print_hash_value);
    transparent_crc(p_1604->g_1579.s8, "p_1604->g_1579.s8", print_hash_value);
    transparent_crc(p_1604->g_1579.s9, "p_1604->g_1579.s9", print_hash_value);
    transparent_crc(p_1604->g_1579.sa, "p_1604->g_1579.sa", print_hash_value);
    transparent_crc(p_1604->g_1579.sb, "p_1604->g_1579.sb", print_hash_value);
    transparent_crc(p_1604->g_1579.sc, "p_1604->g_1579.sc", print_hash_value);
    transparent_crc(p_1604->g_1579.sd, "p_1604->g_1579.sd", print_hash_value);
    transparent_crc(p_1604->g_1579.se, "p_1604->g_1579.se", print_hash_value);
    transparent_crc(p_1604->g_1579.sf, "p_1604->g_1579.sf", print_hash_value);
    transparent_crc(p_1604->v_collective, "p_1604->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 9; i++)
            transparent_crc(p_1604->g_special_values[i + 9 * get_linear_group_id()], "p_1604->g_special_values[i + 9 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 9; i++)
            transparent_crc(p_1604->l_special_values[i], "p_1604->l_special_values[i]", print_hash_value);
    transparent_crc(p_1604->l_comm_values[get_linear_local_id()], "p_1604->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1604->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_1604->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
