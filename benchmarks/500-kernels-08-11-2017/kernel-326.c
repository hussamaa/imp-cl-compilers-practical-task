// --atomics 31 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 1,2,58 -l 1,2,29
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

__constant uint32_t permutations[10][58] = {
{2,10,38,19,51,8,55,30,47,4,12,3,42,13,21,29,22,39,50,35,53,26,44,43,18,1,41,27,40,5,37,54,57,23,36,31,45,48,56,25,52,7,0,20,33,6,15,17,46,16,49,28,14,24,9,32,34,11}, // permutation 0
{14,49,47,32,4,25,51,48,38,9,55,45,8,22,2,37,33,28,29,6,42,26,18,31,57,0,54,30,23,10,15,52,1,12,53,7,3,50,41,11,35,13,39,27,24,20,46,34,56,17,43,36,40,44,16,21,5,19}, // permutation 1
{5,7,34,1,16,14,20,30,0,46,44,27,53,2,57,50,3,31,4,40,48,11,37,43,51,56,17,45,13,38,55,19,10,12,42,41,21,49,18,9,22,47,28,15,26,8,24,25,36,23,6,39,35,29,54,32,33,52}, // permutation 2
{21,17,33,15,55,37,26,45,46,32,41,42,52,5,34,35,4,16,56,7,36,48,18,19,3,0,22,51,23,20,40,2,12,24,10,49,8,13,39,30,25,28,44,38,9,31,14,29,50,43,11,54,6,1,53,47,57,27}, // permutation 3
{53,38,8,35,6,23,49,17,3,15,55,16,30,41,12,43,40,27,24,26,44,54,57,5,13,19,52,2,46,28,29,51,22,20,11,7,37,34,33,56,42,39,48,32,45,25,4,14,31,10,50,18,47,9,36,21,0,1}, // permutation 4
{17,39,23,57,19,9,36,38,21,31,15,3,45,4,8,6,16,53,43,56,32,7,18,25,51,22,28,26,48,29,1,0,33,30,11,47,34,54,14,41,35,13,37,49,12,44,50,46,52,42,10,2,27,40,5,55,24,20}, // permutation 5
{14,34,43,25,48,28,5,35,30,33,9,53,37,39,50,17,31,55,51,22,3,46,29,12,44,36,23,26,19,2,13,56,4,10,6,11,16,24,7,1,21,49,8,47,40,20,41,15,18,42,52,38,57,32,27,0,54,45}, // permutation 6
{18,46,40,43,45,34,28,41,3,33,25,17,37,13,6,44,27,2,56,38,15,48,42,47,12,10,22,30,14,4,5,9,11,57,8,20,29,52,32,36,51,53,31,49,0,26,50,54,23,24,55,1,35,16,39,7,19,21}, // permutation 7
{14,0,50,56,13,43,42,46,27,52,2,17,33,51,48,12,23,3,8,9,5,37,25,21,29,35,53,4,41,57,19,47,26,11,30,36,40,38,24,16,31,54,32,20,28,49,44,45,10,1,7,34,39,22,18,55,6,15}, // permutation 8
{16,8,28,46,41,51,55,18,38,32,35,39,56,26,47,21,20,54,11,29,10,44,43,40,19,6,31,48,13,17,33,27,49,42,9,45,14,24,34,22,23,57,12,0,25,36,1,3,37,30,5,15,4,52,50,53,7,2} // permutation 9
};

// Seed: 1767808833

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    volatile int32_t *g_48;
    int8_t g_59;
    VECTOR(int32_t, 2) g_70;
    int16_t g_84;
    int16_t *g_83;
    VECTOR(int64_t, 2) g_117;
    VECTOR(uint64_t, 16) g_121;
    uint8_t g_132;
    int32_t g_153[9][2][6];
    VECTOR(int16_t, 16) g_166;
    VECTOR(uint64_t, 16) g_181;
    uint32_t g_219;
    VECTOR(int32_t, 2) g_222;
    VECTOR(int32_t, 4) g_233;
    VECTOR(int32_t, 8) g_235;
    int16_t **g_239;
    int16_t ***g_238[10][3];
    int16_t g_243;
    int64_t g_245;
    uint8_t g_248;
    uint16_t g_249;
    VECTOR(uint16_t, 16) g_256;
    VECTOR(uint16_t, 8) g_264;
    int8_t g_296;
    int32_t *g_303[6][10][4];
    VECTOR(int8_t, 4) g_327;
    VECTOR(uint16_t, 4) g_339;
    uint64_t *g_342;
    uint64_t * volatile *g_341;
    volatile int8_t g_395;
    volatile int8_t *g_394;
    volatile int8_t * volatile *g_393;
    VECTOR(uint32_t, 16) g_424;
    VECTOR(int32_t, 2) g_439;
    VECTOR(uint32_t, 8) g_458;
    VECTOR(int64_t, 16) g_461;
    int16_t g_483;
    VECTOR(int8_t, 2) g_501;
    uint8_t g_551[7];
    int32_t g_553[9][9];
    int16_t g_616[2];
    VECTOR(uint8_t, 8) g_624;
    int32_t *g_631;
    int32_t **g_630;
    volatile VECTOR(uint8_t, 2) g_634;
    VECTOR(uint32_t, 4) g_643;
    VECTOR(uint32_t, 16) g_645;
    volatile VECTOR(int32_t, 2) g_666;
    VECTOR(uint32_t, 2) g_668;
    int64_t g_717;
    VECTOR(int32_t, 2) g_718;
    uint32_t *g_778;
    volatile VECTOR(uint8_t, 16) g_796;
    VECTOR(int64_t, 16) g_813;
    VECTOR(int64_t, 4) g_818;
    int32_t * volatile g_827;
    VECTOR(int8_t, 8) g_830;
    VECTOR(int64_t, 8) g_831;
    VECTOR(uint32_t, 2) g_842;
    VECTOR(uint32_t, 8) g_843;
    VECTOR(uint32_t, 8) g_844;
    VECTOR(uint32_t, 4) g_845;
    volatile VECTOR(uint32_t, 16) g_858;
    volatile VECTOR(int8_t, 2) g_879;
    uint8_t * volatile g_881[1];
    uint8_t * volatile *g_880[3];
    VECTOR(int8_t, 16) g_882;
    volatile uint64_t g_899;
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
int64_t  func_1(struct S0 * p_925);
int8_t  func_13(int8_t  p_14, int16_t  p_15, struct S0 * p_925);
int8_t  func_16(uint16_t  p_17, struct S0 * p_925);
uint8_t  func_40(int32_t  p_41, uint32_t  p_42, int8_t  p_43, uint8_t  p_44, int16_t * p_45, struct S0 * p_925);
int32_t ** func_49(int32_t * p_50, uint64_t  p_51, uint32_t  p_52, uint16_t  p_53, int32_t  p_54, struct S0 * p_925);
uint8_t  func_61(uint16_t  p_62, int32_t ** p_63, struct S0 * p_925);
uint8_t  func_76(uint32_t  p_77, struct S0 * p_925);
int32_t  func_78(uint32_t  p_79, int16_t * p_80, int64_t  p_81, int64_t  p_82, struct S0 * p_925);
uint32_t  func_90(int32_t * p_91, int32_t  p_92, struct S0 * p_925);
int64_t  func_95(uint64_t  p_96, struct S0 * p_925);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_925->g_4 p_925->g_296
 * writes: p_925->g_4
 */
int64_t  func_1(struct S0 * p_925)
{ /* block id: 4 */
    int8_t l_30 = (-9L);
    int32_t l_769 = 0x502868A4L;
    int32_t l_773[6][5] = {{0x6F1D5BA0L,0x011DC18AL,0x0C6465F4L,1L,0x515AABFDL},{0x6F1D5BA0L,0x011DC18AL,0x0C6465F4L,1L,0x515AABFDL},{0x6F1D5BA0L,0x011DC18AL,0x0C6465F4L,1L,0x515AABFDL},{0x6F1D5BA0L,0x011DC18AL,0x0C6465F4L,1L,0x515AABFDL},{0x6F1D5BA0L,0x011DC18AL,0x0C6465F4L,1L,0x515AABFDL},{0x6F1D5BA0L,0x011DC18AL,0x0C6465F4L,1L,0x515AABFDL}};
    VECTOR(uint32_t, 8) l_841 = (VECTOR(uint32_t, 8))(0x87727009L, (VECTOR(uint32_t, 4))(0x87727009L, (VECTOR(uint32_t, 2))(0x87727009L, 0xAC74C6C4L), 0xAC74C6C4L), 0xAC74C6C4L, 0x87727009L, 0xAC74C6C4L);
    uint8_t l_850[10] = {0x40L,255UL,0x40L,0x40L,255UL,0x40L,0x40L,255UL,0x40L,0x40L};
    uint32_t l_874[1];
    VECTOR(int32_t, 8) l_875 = (VECTOR(int32_t, 8))(0x6E073C85L, (VECTOR(int32_t, 4))(0x6E073C85L, (VECTOR(int32_t, 2))(0x6E073C85L, 0x693DC406L), 0x693DC406L), 0x693DC406L, 0x6E073C85L, 0x693DC406L);
    uint8_t *l_895[2];
    uint8_t **l_894 = &l_895[0];
    int i, j;
    for (i = 0; i < 1; i++)
        l_874[i] = 0x08659854L;
    for (i = 0; i < 2; i++)
        l_895[i] = &p_925->g_132;
    for (p_925->g_4 = 0; (p_925->g_4 <= (-19)); p_925->g_4 = safe_sub_func_uint8_t_u_u(p_925->g_4, 8))
    { /* block id: 7 */
        int16_t l_35[5][5] = {{0x7F3EL,0x7F3EL,6L,(-6L),0x437FL},{0x7F3EL,0x7F3EL,6L,(-6L),0x437FL},{0x7F3EL,0x7F3EL,6L,(-6L),0x437FL},{0x7F3EL,0x7F3EL,6L,(-6L),0x437FL},{0x7F3EL,0x7F3EL,6L,(-6L),0x437FL}};
        int16_t *l_36 = &l_35[1][3];
        int32_t l_768 = 1L;
        int32_t l_770 = 0L;
        int64_t *l_771 = (void*)0;
        int64_t *l_772 = (void*)0;
        int8_t *l_826[5][7][1] = {{{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296}},{{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296}},{{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296}},{{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296}},{{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296},{&p_925->g_296}}};
        uint64_t l_836 = 18446744073709551613UL;
        int64_t *l_848 = (void*)0;
        int64_t *l_849 = &p_925->g_245;
        int8_t *l_870 = &l_30;
        uint64_t **l_907 = &p_925->g_342;
        uint64_t ***l_906 = &l_907;
        int32_t *l_919 = (void*)0;
        int32_t *l_921[3][2][4];
        uint32_t l_922[5][9] = {{4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL},{4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL},{4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL},{4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL},{4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL,4294967288UL,0x8415423EL,4294967288UL}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 4; k++)
                    l_921[i][j][k] = &p_925->g_153[0][0][2];
            }
        }
        (1 + 1);
    }
    return p_925->g_296;
}


/* ------------------------------------------ */
/* 
 * reads : p_925->g_813 p_925->g_818 p_925->g_393 p_925->g_394 p_925->g_395 p_925->g_245 p_925->g_296 p_925->g_121 p_925->g_501 p_925->g_166 p_925->g_424 p_925->g_48
 * writes: p_925->g_631 p_925->g_219 p_925->g_245 p_925->g_296 p_925->g_59 p_925->g_501 p_925->g_3
 */
int8_t  func_13(int8_t  p_14, int16_t  p_15, struct S0 * p_925)
{ /* block id: 328 */
    int64_t l_808 = (-1L);
    VECTOR(int64_t, 16) l_814 = (VECTOR(int64_t, 16))(0x2F326434B5B5CCBAL, (VECTOR(int64_t, 4))(0x2F326434B5B5CCBAL, (VECTOR(int64_t, 2))(0x2F326434B5B5CCBAL, 0x3DE895F6D4654D00L), 0x3DE895F6D4654D00L), 0x3DE895F6D4654D00L, 0x2F326434B5B5CCBAL, 0x3DE895F6D4654D00L, (VECTOR(int64_t, 2))(0x2F326434B5B5CCBAL, 0x3DE895F6D4654D00L), (VECTOR(int64_t, 2))(0x2F326434B5B5CCBAL, 0x3DE895F6D4654D00L), 0x2F326434B5B5CCBAL, 0x3DE895F6D4654D00L, 0x2F326434B5B5CCBAL, 0x3DE895F6D4654D00L);
    VECTOR(int64_t, 8) l_817 = (VECTOR(int64_t, 8))(0x3AE250357D0B7568L, (VECTOR(int64_t, 4))(0x3AE250357D0B7568L, (VECTOR(int64_t, 2))(0x3AE250357D0B7568L, 0x5ACA5AB57DEC6A75L), 0x5ACA5AB57DEC6A75L), 0x5ACA5AB57DEC6A75L, 0x3AE250357D0B7568L, 0x5ACA5AB57DEC6A75L);
    VECTOR(int32_t, 8) l_819 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3BF2409EL), 0x3BF2409EL), 0x3BF2409EL, 1L, 0x3BF2409EL);
    uint32_t l_820 = 0x87B0017BL;
    int64_t *l_821 = &p_925->g_245;
    int8_t *l_822 = &p_925->g_296;
    int8_t *l_823 = (void*)0;
    int8_t *l_824 = &p_925->g_59;
    int16_t l_825 = 0x2A09L;
    int i;
    p_925->g_631 = (void*)0;
    (*p_925->g_48) = (safe_lshift_func_uint8_t_u_s(((((p_14 , ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(0x15L, (-4L), 1L, 0x79L)).z, (p_925->g_501.x ^= (safe_sub_func_int8_t_s_s(l_808, (((safe_div_func_int8_t_s_s(((*l_824) = (+(0x649CL == ((((((((((*l_822) &= ((((((VECTOR(int64_t, 16))(p_925->g_813.s5d4d727fead64771)).sd >= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_814.s0f0e137f)).hi)).z) >= ((&p_925->g_341 == (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 2))(0xCEEC5BE7C9BE380DL, 0xAA4F12D641532C6FL)).yyxyyxxx, (uint64_t)(safe_mod_func_int16_t_s_s(l_814.sf, (((*l_821) ^= ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(7L, 0x6A77BA77303E7039L)).xyxyxyyx)).s51)).xxyyyxyxxxxyxyxy, ((VECTOR(int64_t, 8))(l_817.s06233312)).s6741514006511163))))).s0ae1, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x4806A27548707A35L, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_925->g_818.ywxx)).wywwwxyw)).s27)).yxxyyxyx, ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 16))(l_819.s5751076361216313)), ((VECTOR(uint32_t, 4))(0x94EBA163L, ((VECTOR(uint32_t, 2))(4294967295UL, 4294967286UL)), 0x0FC6AC4EL)).wyzyzwzxzyxyxzyx))).odd, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((**p_925->g_393) <= (((0UL >= (p_925->g_219 = (((((l_817.s5 | p_15) >= l_820) <= 0x58F39F9F0F551F30L) == p_14) <= 0xF1F05C9756740541L))) , (-8L)) != p_14)), 0L, 0x171E10A5B9844D80L, (-1L))).odd)).yyxyyxxx))), ((VECTOR(int64_t, 8))(0x30E53A785768B694L))))).s06, ((VECTOR(int64_t, 2))(0x0CF0D30147B3FE11L))))), 0x3C06E0D7A5FF0005L))))))).y) | p_15)))))).s44)).odd , (void*)0)) == 0x53L)) || p_15) >= l_820)) , l_819.s1) <= 0x4741AA0321A21E6CL) , p_925->g_121.s6) && 0xF1L) < 0L) == l_819.s7) & l_817.s2) | l_819.s3)))), l_820)) , l_825) , p_14)))))) | p_925->g_166.se)) <= l_819.s3) <= p_15) , 5UL), p_925->g_424.sc));
    (*p_925->g_48) = l_825;
    return l_819.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_925->g_717 p_925->g_796 p_925->g_461
 * writes: p_925->g_717 p_925->g_778
 */
int8_t  func_16(uint16_t  p_17, struct S0 * p_925)
{ /* block id: 309 */
    uint64_t l_782 = 0x11505E21B7DD22EBL;
    int32_t l_789 = 7L;
    int32_t l_798 = 0x19159792L;
    for (p_925->g_717 = 0; (p_925->g_717 != 21); p_925->g_717 = safe_add_func_uint8_t_u_u(p_925->g_717, 1))
    { /* block id: 312 */
        uint32_t *l_776 = &p_925->g_219;
        uint32_t **l_777 = (void*)0;
        int64_t *l_783 = (void*)0;
        int32_t l_797 = 0x4B1E8D3CL;
        uint8_t l_799 = 1UL;
        if ((!(l_776 == (p_925->g_778 = (void*)0))))
        { /* block id: 314 */
            uint32_t l_779[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
            int32_t *l_788 = (void*)0;
            int32_t l_795 = 0x1212B879L;
            int i;
            if (l_779[1])
            { /* block id: 315 */
                uint64_t l_792 = 0x58C61B9242FA1315L;
                int32_t *l_793 = (void*)0;
                int32_t *l_794[5] = {&p_925->g_553[3][0],&p_925->g_553[3][0],&p_925->g_553[3][0],&p_925->g_553[3][0],&p_925->g_553[3][0]};
                int i;
                l_798 = (safe_mul_func_int16_t_s_s(l_782, ((l_783 != &p_925->g_245) , (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_789 &= (0UL | (l_788 == (void*)0))) != (((safe_mod_func_uint32_t_u_u(l_792, (l_795 ^= (-1L)))) & (((VECTOR(uint8_t, 4))(p_925->g_796.s4a9c)).z , ((l_782 > p_17) != l_797))) == 0x53543FAB9900F3EBL)), p_17)), p_925->g_461.s5)))));
                return p_17;
            }
            else
            { /* block id: 320 */
                ++l_799;
            }
        }
        else
        { /* block id: 323 */
            atomic_add(&p_925->g_atomic_reduction[get_linear_group_id()], (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4246FD20L, (-2L))).xxyy)).x ^ l_799));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_925->v_collective += p_925->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_925->g_48 p_925->g_3 p_925->g_70 p_925->l_comm_values p_925->g_83 p_925->g_84 p_925->g_4 p_925->g_comm_values p_925->g_117 p_925->g_121 p_925->g_132 p_925->g_153 p_925->g_166 p_925->g_181 p_925->g_219 p_925->g_222 p_925->g_233 p_925->g_235 p_925->g_238 p_925->g_245 p_925->g_248 p_925->g_249 p_925->g_256 p_925->g_264 p_925->g_327 p_925->g_339 p_925->g_341 p_925->g_239 p_925->g_342 p_925->g_393 p_925->g_424 p_925->g_439 p_925->g_458 p_925->g_461 p_925->g_483 p_925->g_501 p_925->g_551 p_925->g_553 p_925->g_296 p_925->g_624 p_925->g_630 p_925->g_634 p_925->g_643 p_925->g_645 p_925->g_631 p_925->g_718 p_925->g_717
 * writes: p_925->g_48 p_925->g_59 p_925->g_132 p_925->g_84 p_925->g_153 p_925->g_219 p_925->g_243 p_925->g_245 p_925->g_249 p_925->g_222 p_925->g_296 p_925->g_303 p_925->g_341 p_925->g_342 p_925->g_393 p_925->g_121 p_925->g_483 p_925->g_239 p_925->g_339 p_925->g_551 p_925->g_553 p_925->g_501 p_925->g_327 p_925->g_631 p_925->g_3 p_925->g_630 p_925->g_718
 */
uint8_t  func_40(int32_t  p_41, uint32_t  p_42, int8_t  p_43, uint8_t  p_44, int16_t * p_45, struct S0 * p_925)
{ /* block id: 9 */
    volatile int32_t *l_47 = (void*)0;
    volatile int32_t **l_46[1];
    int32_t *l_55 = &p_925->g_4;
    int8_t *l_58 = &p_925->g_59;
    uint32_t l_68 = 2UL;
    VECTOR(int32_t, 2) l_69 = (VECTOR(int32_t, 2))(0x210B913AL, 7L);
    VECTOR(uint32_t, 4) l_71 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL);
    VECTOR(uint8_t, 2) l_625 = (VECTOR(uint8_t, 2))(0x43L, 1UL);
    int32_t *l_626 = (void*)0;
    int32_t *l_627[3][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int32_t l_628[3];
    int8_t *l_629 = &p_925->g_296;
    int32_t ***l_740 = &p_925->g_630;
    int32_t *l_741 = (void*)0;
    int32_t *l_742 = (void*)0;
    int32_t *l_743 = (void*)0;
    int32_t *l_744 = (void*)0;
    int32_t *l_745 = (void*)0;
    int32_t *l_746 = (void*)0;
    int32_t *l_747[4][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_46[i] = &l_47;
    for (i = 0; i < 3; i++)
        l_628[i] = 7L;
    p_925->g_48 = &p_925->g_3;
    p_925->g_718.x |= (((*l_740) = func_49(l_55, (safe_lshift_func_int8_t_s_u(((*l_58) = 0x71L), (safe_unary_minus_func_uint8_t_u(func_61((((*l_629) = (&l_47 != ((safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s((*p_925->g_48), l_68)), ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_69.xyxx)).xyxwwwzwyzwwzxwy)).s34)).yxxxxyxxyyxxyyxy, ((VECTOR(int32_t, 8))(p_925->g_70.xxxyyyxx)).s5757053504164352))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 4))(l_71.xzyy)).even, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(0x4CE3044BL, 1L, 0x77D7E7D1L, (l_628[0] ^= (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(func_76(p_925->l_comm_values[(safe_mod_func_uint32_t_u_u(p_925->tid, 58))], p_925), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_925->g_624.s1517247427251601)).sa1)).yxyy, ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0xD2L, GROUP_DIVERGE(2, 1), 0UL, 0UL)))).even)), 0xE6L, 0x40L)).xyxxxyxyyxwxxxzx, ((VECTOR(uint8_t, 2))(l_625.xy)).xxxxyxyyyyyxxxxy, ((VECTOR(uint8_t, 16))(((*l_55) ^ (p_41 , 0UL)), 7UL, ((VECTOR(uint8_t, 2))(0xADL)), 0UL, GROUP_DIVERGE(0, 1), 0x80L, ((VECTOR(uint8_t, 2))(9UL)), 0xD5L, 0x3DL, p_41, ((VECTOR(uint8_t, 4))(0xE7L))))))).s8900))).hi)), 0x46L, 0xBEL)), 0x76L, ((VECTOR(uint8_t, 2))(0x89L)), (*l_55), p_925->g_264.s2, 1UL, 255UL, 0x9FL, ((VECTOR(uint8_t, 2))(0xEDL)), 255UL)).s1, (*l_55))), p_925->g_458.s3))), 0x4E177866L, ((VECTOR(int32_t, 2))(0x4628F1CFL)), 0x3FD00C3BL)).s3143260467732071, ((VECTOR(int32_t, 16))(1L)))))))).hi)), 0x7C6B4E0BL, ((VECTOR(uint32_t, 4))(0xC01697A4L)), 0xA42A2352L, 4294967289UL, 1UL)).s73))), 0xAF3A357CL, 4294967295UL)).yxwzwzxyzyxxyxwy))).s1)) , &l_55))) && p_925->g_339.w), p_925->g_630, p_925))))), (*l_55), (*l_55), p_44, p_925)) == (void*)0);
    p_925->g_48 = &p_925->g_3;
    if ((atomic_inc(&p_925->g_atomic_input[31 * get_linear_group_id() + 10]) == 2))
    { /* block id: 290 */
        uint64_t l_748[8] = {0x4D1E272664FCFF22L,0x5771FCD3D451CB92L,0x4D1E272664FCFF22L,0x4D1E272664FCFF22L,0x5771FCD3D451CB92L,0x4D1E272664FCFF22L,0x4D1E272664FCFF22L,0x5771FCD3D451CB92L};
        int i;
        if ((l_748[3] = 0L))
        { /* block id: 292 */
            VECTOR(int64_t, 8) l_749 = (VECTOR(int64_t, 8))(0x0C76A241CBCCE222L, (VECTOR(int64_t, 4))(0x0C76A241CBCCE222L, (VECTOR(int64_t, 2))(0x0C76A241CBCCE222L, 0x39128344871EB749L), 0x39128344871EB749L), 0x39128344871EB749L, 0x0C76A241CBCCE222L, 0x39128344871EB749L);
            int16_t l_750 = (-2L);
            int32_t l_751 = 0x64EC01A7L;
            uint32_t l_752[6][3][7] = {{{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL}},{{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL}},{{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL}},{{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL}},{{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL}},{{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL},{0x64B29743L,0xD889AF3AL,0x88772891L,0xD559BD70L,4294967295UL,4294967295UL,4294967291UL}}};
            VECTOR(int32_t, 2) l_753 = (VECTOR(int32_t, 2))(0x3B7CDED6L, (-1L));
            int32_t l_754 = (-7L);
            int64_t *l_756 = (void*)0;
            int64_t **l_755 = &l_756;
            int64_t **l_757 = &l_756;
            int i, j, k;
            l_754 |= ((l_752[5][1][0] |= (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 2))(l_749.s17)).yyxyxyxyxxyxxyyy, ((VECTOR(int64_t, 4))(l_750, 2L, 0x054FF66B6091F0CCL, 0x76CFF7D0FBD33136L)).xwxzwwzwxyzyyxzx)))))).sff6d)).y , l_751)) , ((VECTOR(int32_t, 2))(l_753.xx)).lo);
            l_757 = l_755;
        }
        else
        { /* block id: 296 */
            VECTOR(int32_t, 8) l_758 = (VECTOR(int32_t, 8))(0x0132940AL, (VECTOR(int32_t, 4))(0x0132940AL, (VECTOR(int32_t, 2))(0x0132940AL, (-4L)), (-4L)), (-4L), 0x0132940AL, (-4L));
            uint32_t l_759 = 4294967286UL;
            VECTOR(uint16_t, 8) l_760 = (VECTOR(uint16_t, 8))(0x87B6L, (VECTOR(uint16_t, 4))(0x87B6L, (VECTOR(uint16_t, 2))(0x87B6L, 0x5FCAL), 0x5FCAL), 0x5FCAL, 0x87B6L, 0x5FCAL);
            VECTOR(uint16_t, 8) l_761 = (VECTOR(uint16_t, 8))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 65529UL), 65529UL), 65529UL, 9UL, 65529UL);
            VECTOR(int32_t, 16) l_762 = (VECTOR(int32_t, 16))(0x18AFAFD2L, (VECTOR(int32_t, 4))(0x18AFAFD2L, (VECTOR(int32_t, 2))(0x18AFAFD2L, 0x246EE2C5L), 0x246EE2C5L), 0x246EE2C5L, 0x18AFAFD2L, 0x246EE2C5L, (VECTOR(int32_t, 2))(0x18AFAFD2L, 0x246EE2C5L), (VECTOR(int32_t, 2))(0x18AFAFD2L, 0x246EE2C5L), 0x18AFAFD2L, 0x246EE2C5L, 0x18AFAFD2L, 0x246EE2C5L);
            VECTOR(int32_t, 2) l_763 = (VECTOR(int32_t, 2))((-1L), (-4L));
            uint8_t l_764[1][2][9] = {{{248UL,9UL,247UL,9UL,248UL,248UL,9UL,247UL,9UL},{248UL,9UL,247UL,9UL,248UL,248UL,9UL,247UL,9UL}}};
            uint64_t l_765 = 0x5302468066FB146FL;
            uint16_t l_766 = 65532UL;
            uint64_t l_767 = 0x1DF777C9CDB622F2L;
            int i, j, k;
            l_759 |= ((VECTOR(int32_t, 8))(l_758.s51750554)).s1;
            l_764[0][0][4] &= ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(0x5249L, (-8L))).yyyyxyxxyyyyyxxy, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 4))(l_760.s5131)).hi, ((VECTOR(uint16_t, 2))(l_761.s02))))).xxxxyyyyyxyyyxxy))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_762.s2c9f81791207b650)).s8ab7)))).zzwyzyzxwyxwxwww))).even)), (int32_t)((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(4L, ((VECTOR(int32_t, 4))(l_763.xyxx)), 0x18FCD635L, 9L, 0x22BFBEDCL)).s6350610754662111)).s0))).s5;
            l_767 = (GROUP_DIVERGE(2, 1) , (l_766 |= l_765));
        }
        unsigned int result = 0;
        int l_748_i0;
        for (l_748_i0 = 0; l_748_i0 < 8; l_748_i0++) {
            result += l_748[l_748_i0];
        }
        atomic_add(&p_925->g_special_values[31 * get_linear_group_id() + 10], result);
    }
    else
    { /* block id: 302 */
        (1 + 1);
    }
    return p_925->g_717;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_49(int32_t * p_50, uint64_t  p_51, uint32_t  p_52, uint16_t  p_53, int32_t  p_54, struct S0 * p_925)
{ /* block id: 284 */
    int32_t **l_739 = (void*)0;
    return l_739;
}


/* ------------------------------------------ */
/* 
 * reads : p_925->g_634 p_925->g_643 p_925->g_645 p_925->g_630 p_925->g_631 p_925->g_424 p_925->g_48 p_925->g_553 p_925->g_264 p_925->g_83 p_925->g_84
 * writes: p_925->g_631 p_925->g_553 p_925->g_3
 */
uint8_t  func_61(uint16_t  p_62, int32_t ** p_63, struct S0 * p_925)
{ /* block id: 241 */
    int8_t l_635 = 0x2DL;
    int8_t *l_639 = &p_925->g_296;
    int8_t **l_638 = &l_639;
    VECTOR(uint32_t, 8) l_640 = (VECTOR(uint32_t, 8))(0x154CEDD7L, (VECTOR(uint32_t, 4))(0x154CEDD7L, (VECTOR(uint32_t, 2))(0x154CEDD7L, 0x95DF7F10L), 0x95DF7F10L), 0x95DF7F10L, 0x154CEDD7L, 0x95DF7F10L);
    uint32_t *l_641[3][1];
    int32_t l_642 = 0L;
    VECTOR(uint32_t, 4) l_644 = (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x06B4BE78L), 0x06B4BE78L);
    int16_t l_648 = 0x03C3L;
    int32_t l_655[1];
    VECTOR(uint32_t, 8) l_672 = (VECTOR(uint32_t, 8))(0xDB0B5B0AL, (VECTOR(uint32_t, 4))(0xDB0B5B0AL, (VECTOR(uint32_t, 2))(0xDB0B5B0AL, 0x547F1508L), 0x547F1508L), 0x547F1508L, 0xDB0B5B0AL, 0x547F1508L);
    int64_t l_675 = 0x7166F271358C73E8L;
    int32_t l_709 = 0x13796C91L;
    int32_t l_710 = (-1L);
    uint64_t l_711 = 18446744073709551615UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_641[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_655[i] = 0x38F717E7L;
    if (((VECTOR(int32_t, 16))((safe_mod_func_uint8_t_u_u(p_62, ((VECTOR(uint8_t, 4))(p_925->g_634.yyyy)).z)), (p_62 > l_635), (((safe_lshift_func_int16_t_s_s((((VECTOR(uint32_t, 16))(((((*l_638) = (void*)0) != &l_635) >= l_635), ((VECTOR(uint32_t, 4))(l_640.s2063)), (l_642 = p_62), ((VECTOR(uint32_t, 2))(0xBE6B0701L, 0xA1AF08E0L)), GROUP_DIVERGE(0, 1), ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 1UL)).yyxx)))).wwzzxwzz)).s76)).yyyxxyxx, ((VECTOR(uint32_t, 8))(p_925->g_643.zwywyzxx)), ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_644.zy)), 0xBF40EAC4L, 8UL)), ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(p_925->g_645.sc7bc6df4)).s02, (uint32_t)(((safe_div_func_int16_t_s_s(((((GROUP_DIVERGE(1, 1) , (*p_925->g_630)) != (void*)0) , 18446744073709551607UL) && l_635), p_925->g_424.sf)) & p_62) >= 0xAB8610ACB086165AL)))).yxyy))).zzyzxxzy))).even, ((VECTOR(uint32_t, 4))(1UL)), ((VECTOR(uint32_t, 4))(0x13B5645BL))))), 0x8FC0FEFEL, 0xA4512CCFL, 0xAD6FB2D0L)).sf | l_644.z), 13)) < 0x8A80C4AEDA39EB88L) && l_644.x), 0L, 0x2BA24D97L, ((VECTOR(int32_t, 4))(0x7FAB7989L)), 6L, ((VECTOR(int32_t, 2))(0x5FCDDCEBL)), 0x579D8FA2L, l_648, 5L, 0x5FA141A3L)).s7)
    { /* block id: 244 */
        (*p_63) = (*p_63);
    }
    else
    { /* block id: 246 */
        int16_t l_654[1][3];
        int32_t l_676 = (-1L);
        int32_t l_677[1][5][6] = {{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}}};
        uint32_t l_691 = 1UL;
        int32_t l_708 = 8L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_654[i][j] = 0x02D1L;
        }
        for (l_648 = 0; (l_648 == (-7)); l_648 = safe_sub_func_int64_t_s_s(l_648, 2))
        { /* block id: 249 */
            int64_t l_651 = 0x72527958B6FEC085L;
            int32_t l_653[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
            uint8_t l_656 = 0x10L;
            int8_t ***l_671 = (void*)0;
            uint8_t l_678 = 0x30L;
            int32_t *l_690 = &l_653[3];
            uint32_t l_692 = 0x12DE3AD2L;
            int i;
            if (l_651)
            { /* block id: 250 */
                int32_t *l_652[4];
                int32_t *l_660[5];
                int i;
                for (i = 0; i < 4; i++)
                    l_652[i] = &p_925->g_553[2][5];
                for (i = 0; i < 5; i++)
                    l_660[i] = &l_653[4];
                l_656--;
                if ((atomic_inc(&p_925->l_atomic_input[9]) == 7))
                { /* block id: 253 */
                    int16_t l_659 = 0x0D30L;
                    l_659 = (-1L);
                    unsigned int result = 0;
                    result += l_659;
                    atomic_add(&p_925->l_special_values[9], result);
                }
                else
                { /* block id: 255 */
                    (1 + 1);
                }
                (*p_925->g_630) = &l_655[0];
                (*p_925->g_630) = l_660[3];
            }
            else
            { /* block id: 260 */
                uint64_t l_663 = 0xFEFD4659D6522395L;
                VECTOR(uint32_t, 4) l_667 = (VECTOR(uint32_t, 4))(0x656C810AL, (VECTOR(uint32_t, 2))(0x656C810AL, 0x073526D4L), 0x073526D4L);
                int8_t ***l_670 = &l_638;
                int8_t ****l_669 = &l_670;
                int32_t *l_673 = &p_925->g_553[3][0];
                int32_t *l_674[3][6][9] = {{{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4}},{{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4}},{{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4},{&p_925->g_4,&l_655[0],&l_653[4],&l_655[0],(void*)0,&l_655[0],&l_653[4],&l_655[0],&p_925->g_4}}};
                int i, j, k;
                (*l_673) &= ((2UL < (((--l_663) <= ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(p_925->g_666.xx)).yyxyyyyy, ((VECTOR(uint32_t, 16))(0xBE36DE6EL, ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 2))(l_667.yz)).yxyyxxxy, ((VECTOR(uint32_t, 8))(p_925->g_668.xyxxyyyy))))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 0x0ECC58BFL)), 4294967292UL, 4294967295UL)), 0xF1937B12L, 0x5AA8A828L, 0UL)).hi))))).lo, (int64_t)(((*l_669) = &l_638) != l_671)))).x) && ((VECTOR(uint32_t, 4))(l_672.s6563)).z)) < ((p_62 , l_641[0][0]) != p_925->g_48));
                ++l_678;
            }
            (*p_925->g_48) = (65526UL < (((safe_mul_func_uint16_t_u_u(0xEAE8L, (safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), 5)))) >= (safe_unary_minus_func_int32_t_s(l_676))) == (((((((safe_sub_func_uint8_t_u_u(l_640.s1, (((~((((!p_925->g_645.sb) , (((*l_690) |= l_656) < l_655[0])) , (+l_691)) , (((18446744073709551607UL == p_62) && l_692) | p_925->g_264.s7))) , &p_62) == (void*)0))) >= p_62) == (*p_925->g_83)) >= 0x15L) | 0x73AFL) != l_654[0][0]) <= 0L)));
        }
    }
    return l_675;
}


/* ------------------------------------------ */
/* 
 * reads : p_925->g_83 p_925->g_84 p_925->g_4 p_925->g_comm_values p_925->g_117 p_925->g_121 p_925->g_132 p_925->g_70 p_925->l_comm_values p_925->g_153 p_925->g_166 p_925->g_181 p_925->g_219 p_925->g_222 p_925->g_233 p_925->g_235 p_925->g_238 p_925->g_245 p_925->g_248 p_925->g_249 p_925->g_256 p_925->g_264 p_925->g_327 p_925->g_339 p_925->g_341 p_925->g_239 p_925->g_342 p_925->g_393 p_925->g_424 p_925->g_439 p_925->g_458 p_925->g_461 p_925->g_483 p_925->g_501 p_925->g_551 p_925->g_553 p_925->g_296
 * writes: p_925->g_132 p_925->g_84 p_925->g_153 p_925->g_219 p_925->g_243 p_925->g_245 p_925->g_249 p_925->g_222 p_925->g_296 p_925->g_303 p_925->g_341 p_925->g_342 p_925->g_393 p_925->g_121 p_925->g_483 p_925->g_239 p_925->g_339 p_925->g_551 p_925->g_553 p_925->g_501 p_925->g_327
 */
uint8_t  func_76(uint32_t  p_77, struct S0 * p_925)
{ /* block id: 12 */
    int32_t *l_93 = &p_925->g_4;
    int32_t **l_94 = &l_93;
    VECTOR(uint32_t, 16) l_495 = (VECTOR(uint32_t, 16))(0x6A6FC85AL, (VECTOR(uint32_t, 4))(0x6A6FC85AL, (VECTOR(uint32_t, 2))(0x6A6FC85AL, 0xA5145B1EL), 0xA5145B1EL), 0xA5145B1EL, 0x6A6FC85AL, 0xA5145B1EL, (VECTOR(uint32_t, 2))(0x6A6FC85AL, 0xA5145B1EL), (VECTOR(uint32_t, 2))(0x6A6FC85AL, 0xA5145B1EL), 0x6A6FC85AL, 0xA5145B1EL, 0x6A6FC85AL, 0xA5145B1EL);
    int32_t *l_552 = &p_925->g_553[3][0];
    uint64_t *l_554[10][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_599 = (-1L);
    int32_t l_605 = 0x7B2EBA80L;
    int32_t l_606 = 0L;
    int32_t l_607 = 0x2666856FL;
    int32_t l_608 = 1L;
    int32_t l_609 = 0x534AEBC7L;
    int32_t l_610 = 0x3411CAE5L;
    int32_t l_611 = 3L;
    int32_t l_612 = 0x535D5C0FL;
    int32_t l_613 = (-1L);
    VECTOR(int32_t, 2) l_614 = (VECTOR(int32_t, 2))((-10L), 0x661A1FEBL);
    uint64_t l_617 = 18446744073709551613UL;
    int32_t l_623[6][9][4] = {{{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L}},{{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L}},{{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L}},{{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L}},{{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L}},{{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L},{0x52951DF7L,1L,0x26A12D67L,3L}}};
    int i, j, k;
    (*l_552) |= func_78(p_77, p_925->g_83, (safe_unary_minus_func_uint32_t_u(((safe_add_func_int8_t_s_s(p_77, (safe_rshift_func_int16_t_s_u(((func_90(((*l_94) = l_93), p_77, p_925) , 0x31L) | (safe_lshift_func_uint8_t_u_u((0x2E3BL ^ ((((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(p_925->g_458.s0, FAKE_DIVERGE(p_925->group_2_offset, get_group_id(2), 10))), p_77)) | 18446744073709551612UL) || l_495.sb) && p_925->g_458.s7)), 1))), p_925->g_235.s4)))) , (*l_93)))), p_925->g_461.s4, p_925);
    (*l_94) = (((*l_552) = p_77) , (*l_94));
    (*l_94) = (*l_94);
    for (p_925->g_296 = 11; (p_925->g_296 != 14); p_925->g_296++)
    { /* block id: 202 */
        uint16_t l_566 = 0UL;
        int32_t l_600[9] = {8L,8L,8L,8L,8L,8L,8L,8L,8L};
        int32_t *l_601 = (void*)0;
        int32_t *l_602 = &p_925->g_153[8][1][2];
        int32_t *l_603 = &l_600[7];
        int32_t *l_604[3][4] = {{&p_925->g_553[4][4],&p_925->g_553[3][0],&p_925->g_553[4][4],&p_925->g_553[4][4]},{&p_925->g_553[4][4],&p_925->g_553[3][0],&p_925->g_553[4][4],&p_925->g_553[4][4]},{&p_925->g_553[4][4],&p_925->g_553[3][0],&p_925->g_553[4][4],&p_925->g_553[4][4]}};
        int16_t l_615 = 1L;
        int8_t *l_620 = (void*)0;
        int8_t *l_621[3][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        VECTOR(int16_t, 4) l_622 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 2L), 2L);
        int i, j;
        for (p_925->g_249 = (-6); (p_925->g_249 >= 54); p_925->g_249 = safe_add_func_int32_t_s_s(p_925->g_249, 9))
        { /* block id: 205 */
            int32_t *l_563 = &p_925->g_553[3][0];
            int32_t *l_564 = (void*)0;
            int32_t *l_565 = &p_925->g_153[3][0][0];
            (*l_552) = (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_925->g_235.s4, p_77)), GROUP_DIVERGE(1, 1)));
            l_566--;
            if ((atomic_inc(&p_925->g_atomic_input[31 * get_linear_group_id() + 26]) == 7))
            { /* block id: 209 */
                VECTOR(int32_t, 4) l_569 = (VECTOR(int32_t, 4))(0x4D18AD6AL, (VECTOR(int32_t, 2))(0x4D18AD6AL, 0x504678F4L), 0x504678F4L);
                uint32_t l_570 = 0xFADB3EBCL;
                VECTOR(uint16_t, 4) l_571 = (VECTOR(uint16_t, 4))(0x348FL, (VECTOR(uint16_t, 2))(0x348FL, 0x6336L), 0x6336L);
                uint16_t l_572 = 65526UL;
                VECTOR(int32_t, 4) l_573 = (VECTOR(int32_t, 4))(0x33CF3CC1L, (VECTOR(int32_t, 2))(0x33CF3CC1L, 0x5E5B5D76L), 0x5E5B5D76L);
                int8_t l_574 = (-3L);
                uint32_t l_575[9][6][4] = {{{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L}},{{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L}},{{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L}},{{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L}},{{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L}},{{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L}},{{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L}},{{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L}},{{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L},{0xA30D3FD2L,7UL,0UL,0xA30D3FD2L}}};
                int8_t l_576[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                uint8_t l_577[6];
                int16_t l_578 = 0x5B3BL;
                VECTOR(int32_t, 8) l_579 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x4419E307L), 0x4419E307L), 0x4419E307L, 9L, 0x4419E307L);
                VECTOR(int32_t, 4) l_580 = (VECTOR(int32_t, 4))(0x5700A146L, (VECTOR(int32_t, 2))(0x5700A146L, 0x0C722FCAL), 0x0C722FCAL);
                VECTOR(int32_t, 4) l_581 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x081FD6D2L), 0x081FD6D2L);
                VECTOR(int32_t, 2) l_582 = (VECTOR(int32_t, 2))(0x06B3AFB5L, (-1L));
                VECTOR(int32_t, 8) l_583 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x104AA29DL), 0x104AA29DL), 0x104AA29DL, 0L, 0x104AA29DL);
                VECTOR(int32_t, 8) l_584 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x1CF21EE8L), 0x1CF21EE8L), 0x1CF21EE8L, 8L, 0x1CF21EE8L);
                int16_t l_585 = (-2L);
                int32_t *l_590[9][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t *l_591[3];
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_577[i] = 0x60L;
                for (i = 0; i < 3; i++)
                    l_591[i] = (void*)0;
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(0L, 1L)).yxxx, ((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))(l_569.zyxzxxyw)), l_570, 1L, 0x7514E4D6L, l_571.y, l_572, 0x0C2EDF81L, (-8L))).s5aa9, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_573.wwyxyxyz)), (((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(7UL, 0x4BL)).xyxyyyxx))).s4 , (l_574 , (l_576[8] = (l_573.z = l_575[8][2][0])))), l_577[1], 0x46F0A65FL, ((VECTOR(int32_t, 2))(0L, 0x1234E2E5L)), l_578, 0x2458FF2FL, (-1L))).sf6fd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_579.s7502)).xyzzzzxxxzzzyxww)).s5e25, ((VECTOR(int32_t, 4))(l_580.wwwx)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_581.zzxxzzzyxzzwwxwz)).s1907, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_582.yx)).yxyyyyyx)).odd, ((VECTOR(int32_t, 2))(l_583.s12)).xyyy))), ((VECTOR(int32_t, 8))(l_584.s42743416)).lo))), ((VECTOR(int32_t, 16))(4L, 0x2D267422L, 0L, ((VECTOR(int32_t, 2))(0x78ED3A03L, 0x2033CA43L)), (l_585 , 0x294F3B07L), (-7L), ((VECTOR(int32_t, 8))(0x1FECC935L)), (-1L))).s2d23, ((VECTOR(int32_t, 4))(0x29FF5DD6L))))).odd)), 0x54D4E18EL, 1L)), ((VECTOR(int32_t, 4))(0x05337F44L)), ((VECTOR(int32_t, 4))((-5L)))))), ((VECTOR(int32_t, 4))(0x7D45F815L)), ((VECTOR(int32_t, 4))(0x2E4B2D5BL)))))))).hi)).yyxx)))))).ywyyxzwz)).s2)
                { /* block id: 212 */
                    int32_t *l_586[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    l_586[0][2] = (void*)0;
                }
                else
                { /* block id: 214 */
                    int64_t l_587[8] = {0x49D8843AA464F664L,0x49D8843AA464F664L,0x49D8843AA464F664L,0x49D8843AA464F664L,0x49D8843AA464F664L,0x49D8843AA464F664L,0x49D8843AA464F664L,0x49D8843AA464F664L};
                    VECTOR(int32_t, 2) l_588 = (VECTOR(int32_t, 2))(0x4651B043L, (-1L));
                    VECTOR(int32_t, 16) l_589 = (VECTOR(int32_t, 16))(0x53FBD631L, (VECTOR(int32_t, 4))(0x53FBD631L, (VECTOR(int32_t, 2))(0x53FBD631L, (-1L)), (-1L)), (-1L), 0x53FBD631L, (-1L), (VECTOR(int32_t, 2))(0x53FBD631L, (-1L)), (VECTOR(int32_t, 2))(0x53FBD631L, (-1L)), 0x53FBD631L, (-1L), 0x53FBD631L, (-1L));
                    int i;
                    l_573.z = (l_587[5] , ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(l_588.yy)).yxyyxxyy, ((VECTOR(int32_t, 4))(l_589.s2c42)).zywzyzxw))).s0);
                }
                l_591[1] = (l_590[5][0] = l_590[5][0]);
                for (l_579.s4 = 0; (l_579.s4 < (-10)); --l_579.s4)
                { /* block id: 221 */
                    int16_t l_594 = 0x2046L;
                    int64_t l_595 = 0x03AD0DA29BCA38C8L;
                    l_595 = l_594;
                }
                for (l_585 = (-3); (l_585 == (-21)); --l_585)
                { /* block id: 226 */
                    int16_t l_598 = 0x43FCL;
                    l_598 |= ((VECTOR(int32_t, 2))(0L, 0x7AD0CAFDL)).lo;
                }
                unsigned int result = 0;
                result += l_569.w;
                result += l_569.z;
                result += l_569.y;
                result += l_569.x;
                result += l_570;
                result += l_571.w;
                result += l_571.z;
                result += l_571.y;
                result += l_571.x;
                result += l_572;
                result += l_573.w;
                result += l_573.z;
                result += l_573.y;
                result += l_573.x;
                result += l_574;
                int l_575_i0, l_575_i1, l_575_i2;
                for (l_575_i0 = 0; l_575_i0 < 9; l_575_i0++) {
                    for (l_575_i1 = 0; l_575_i1 < 6; l_575_i1++) {
                        for (l_575_i2 = 0; l_575_i2 < 4; l_575_i2++) {
                            result += l_575[l_575_i0][l_575_i1][l_575_i2];
                        }
                    }
                }
                int l_576_i0;
                for (l_576_i0 = 0; l_576_i0 < 10; l_576_i0++) {
                    result += l_576[l_576_i0];
                }
                int l_577_i0;
                for (l_577_i0 = 0; l_577_i0 < 6; l_577_i0++) {
                    result += l_577[l_577_i0];
                }
                result += l_578;
                result += l_579.s7;
                result += l_579.s6;
                result += l_579.s5;
                result += l_579.s4;
                result += l_579.s3;
                result += l_579.s2;
                result += l_579.s1;
                result += l_579.s0;
                result += l_580.w;
                result += l_580.z;
                result += l_580.y;
                result += l_580.x;
                result += l_581.w;
                result += l_581.z;
                result += l_581.y;
                result += l_581.x;
                result += l_582.y;
                result += l_582.x;
                result += l_583.s7;
                result += l_583.s6;
                result += l_583.s5;
                result += l_583.s4;
                result += l_583.s3;
                result += l_583.s2;
                result += l_583.s1;
                result += l_583.s0;
                result += l_584.s7;
                result += l_584.s6;
                result += l_584.s5;
                result += l_584.s4;
                result += l_584.s3;
                result += l_584.s2;
                result += l_584.s1;
                result += l_584.s0;
                result += l_585;
                atomic_add(&p_925->g_special_values[31 * get_linear_group_id() + 26], result);
            }
            else
            { /* block id: 229 */
                (1 + 1);
            }
        }
        l_617--;
        (*l_602) |= (+(((0x0BL != (p_925->g_327.w = (p_925->g_501.x = 0L))) <= (((VECTOR(int16_t, 4))(l_622.wyzz)).z & ((p_925->g_553[3][0] , 0x7CB414EE07361EB7L) == ((VECTOR(int64_t, 4))(((void*)0 != &p_925->g_219), p_925->g_264.s2, 0x56AE0EF5EF0C82AFL, 0L)).z))) <= p_925->g_461.sc));
    }
    return l_623[2][2][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_925->g_84 p_925->g_comm_values p_925->g_501 p_925->g_132 p_925->g_4 p_925->g_153 p_925->g_235 p_925->g_339 p_925->g_551
 * writes: p_925->g_239 p_925->g_153 p_925->g_339 p_925->g_303 p_925->g_551
 */
int32_t  func_78(uint32_t  p_79, int16_t * p_80, int64_t  p_81, int64_t  p_82, struct S0 * p_925)
{ /* block id: 172 */
    int16_t ***l_496 = &p_925->g_239;
    int32_t l_497 = 0x629214E6L;
    uint32_t *l_509[3][3][6] = {{{(void*)0,&p_925->g_219,&p_925->g_219,(void*)0,&p_925->g_219,&p_925->g_219},{(void*)0,&p_925->g_219,&p_925->g_219,(void*)0,&p_925->g_219,&p_925->g_219},{(void*)0,&p_925->g_219,&p_925->g_219,(void*)0,&p_925->g_219,&p_925->g_219}},{{(void*)0,&p_925->g_219,&p_925->g_219,(void*)0,&p_925->g_219,&p_925->g_219},{(void*)0,&p_925->g_219,&p_925->g_219,(void*)0,&p_925->g_219,&p_925->g_219},{(void*)0,&p_925->g_219,&p_925->g_219,(void*)0,&p_925->g_219,&p_925->g_219}},{{(void*)0,&p_925->g_219,&p_925->g_219,(void*)0,&p_925->g_219,&p_925->g_219},{(void*)0,&p_925->g_219,&p_925->g_219,(void*)0,&p_925->g_219,&p_925->g_219},{(void*)0,&p_925->g_219,&p_925->g_219,(void*)0,&p_925->g_219,&p_925->g_219}}};
    uint16_t **l_511 = (void*)0;
    int32_t l_534[1];
    int8_t *l_537 = (void*)0;
    int8_t *l_538 = (void*)0;
    int8_t *l_539[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_540[9];
    int32_t l_541 = (-6L);
    int32_t l_544 = (-1L);
    int32_t *l_545 = (void*)0;
    int32_t *l_546 = (void*)0;
    int32_t *l_547 = (void*)0;
    int32_t *l_548 = (void*)0;
    int32_t *l_549 = &p_925->g_153[8][1][2];
    int32_t *l_550[1][7][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_534[i] = 0x60D4A582L;
    for (i = 0; i < 9; i++)
        l_540[i] = (-7L);
    (*l_496) = &p_80;
    if (l_497)
    { /* block id: 174 */
        VECTOR(int8_t, 16) l_500 = (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L), (VECTOR(int8_t, 2))(6L, (-1L)), (VECTOR(int8_t, 2))(6L, (-1L)), 6L, (-1L), 6L, (-1L));
        VECTOR(int8_t, 2) l_502 = (VECTOR(int8_t, 2))((-1L), 0x5EL);
        int8_t *l_503[5][9][5] = {{{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296}},{{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296}},{{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296}},{{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296}},{{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296},{(void*)0,(void*)0,&p_925->g_296,&p_925->g_296,&p_925->g_296}}};
        VECTOR(int64_t, 16) l_504 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int64_t, 2))(0L, (-6L)), (VECTOR(int64_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
        int32_t *l_510 = &l_497;
        int i, j, k;
        (*l_510) = (((*p_80) , (((VECTOR(int8_t, 8))(p_925->g_comm_values[p_925->tid], 0x3EL, (safe_lshift_func_uint16_t_u_u(l_497, (+(p_82 , l_497)))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(l_500.sef9ac62ed7162490)).sb274))).hi, ((VECTOR(int8_t, 4))(p_925->g_501.yxyx)).lo))))).yxyy)), ((VECTOR(int8_t, 4))(l_502.xxyy))))).even)), 5L, 1L, 0x14L)).s5 != (l_504.s8 ^= p_925->g_132))) != ((((VECTOR(int8_t, 2))(0x08L, 1L)).odd & (247UL != (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((l_509[2][0][1] = &p_79) != (void*)0) , p_925->g_4), 1)), p_79)))) | p_82));
    }
    else
    { /* block id: 178 */
        uint16_t **l_512 = (void*)0;
        int32_t *l_513 = &p_925->g_153[7][0][3];
        int32_t *l_514 = (void*)0;
        int32_t *l_518 = &p_925->g_153[8][1][2];
        int32_t **l_527 = &p_925->g_303[1][7][0];
        if (((l_511 == l_512) ^ ((void*)0 == &l_496)))
        { /* block id: 179 */
            return p_81;
        }
        else
        { /* block id: 181 */
            int32_t **l_515 = &l_514;
            int32_t *l_525 = (void*)0;
            int32_t *l_526 = &l_497;
            (*l_513) &= ((GROUP_DIVERGE(1, 1) , l_513) == ((*l_515) = l_514));
            (*l_526) |= ((FAKE_DIVERGE(p_925->group_2_offset, get_group_id(2), 10) > (safe_mul_func_uint16_t_u_u((0x0E3FL < (p_79 < (((*l_515) = l_518) != l_513))), (safe_add_func_int16_t_s_s((p_925->g_235.s1 & (safe_rshift_func_int8_t_s_u((-2L), p_82))), (--p_925->g_339.y)))))) || ((GROUP_DIVERGE(2, 1) & 0x5548L) == (p_82 && (**l_515))));
        }
        (*l_527) = &p_925->g_153[8][1][2];
    }
    p_925->g_551[1] &= (((p_79 && 0UL) || ((safe_mod_func_int64_t_s_s(l_497, (safe_mod_func_int64_t_s_s(l_497, (((VECTOR(int32_t, 2))(0x3A47751EL, (-3L))).even , (p_79 && ((((safe_mul_func_uint16_t_u_u((l_534[0] = p_81), ((safe_sub_func_int32_t_s_s((l_541 = ((l_540[2] = p_79) < l_497)), ((*l_549) = (safe_div_func_int64_t_s_s((l_544 <= p_81), l_544))))) || 0xE5L))) || FAKE_DIVERGE(p_925->local_2_offset, get_local_id(2), 10)) , 0x3FL) < p_925->g_501.x))))))) > 0x4AL)) == p_925->g_501.x);
    return p_79;
}


/* ------------------------------------------ */
/* 
 * reads : p_925->g_83 p_925->g_84 p_925->g_4 p_925->g_comm_values p_925->g_117 p_925->g_121 p_925->g_132 p_925->g_70 p_925->l_comm_values p_925->g_153 p_925->g_166 p_925->g_181 p_925->g_219 p_925->g_222 p_925->g_233 p_925->g_235 p_925->g_238 p_925->g_245 p_925->g_248 p_925->g_249 p_925->g_256 p_925->g_264 p_925->g_327 p_925->g_339 p_925->g_341 p_925->g_239 p_925->g_342 p_925->g_393 p_925->g_424 p_925->g_439 p_925->g_458 p_925->g_461 p_925->g_483
 * writes: p_925->g_132 p_925->g_84 p_925->g_153 p_925->g_219 p_925->g_243 p_925->g_245 p_925->g_249 p_925->g_222 p_925->g_296 p_925->g_303 p_925->g_341 p_925->g_342 p_925->g_393 p_925->g_121 p_925->g_483
 */
uint32_t  func_90(int32_t * p_91, int32_t  p_92, struct S0 * p_925)
{ /* block id: 14 */
    int32_t *l_97 = &p_925->g_4;
    VECTOR(int16_t, 4) l_100 = (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x708EL), 0x708EL);
    int16_t *l_104 = (void*)0;
    int16_t **l_103 = &l_104;
    int16_t *l_105 = (void*)0;
    int16_t *l_106 = (void*)0;
    int16_t *l_107 = (void*)0;
    VECTOR(int32_t, 2) l_108 = (VECTOR(int32_t, 2))((-7L), 0x02AC2FF0L);
    int32_t *l_488 = &p_925->g_153[3][0][5];
    int i;
    (*l_488) = (func_95(((l_97 == &p_925->g_4) , (safe_div_func_uint64_t_u_u(((*p_925->g_83) ^ ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(l_100.zwwz)).zzyxzzxwxyzzwxyz, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(0x6639L, p_92, ((*l_97) ^ (safe_mul_func_int16_t_s_s((l_108.y = (((((&p_91 != &l_97) | (&p_925->g_48 == (((((*l_103) = &p_925->g_84) == l_105) , p_925->g_comm_values[p_925->tid]) , &p_91))) == (*l_97)) != (*l_97)) || (*p_925->g_83))), (*l_97)))), (-1L), ((VECTOR(int16_t, 2))((-6L))), 0L, 0x2F57L)).s00, ((VECTOR(int16_t, 2))((-1L)))))).xyxxxxyx)).s6564577337705564))).s71)).even), 0x9496F13771C77DD3L))), p_925) , (*l_97));
    l_108.y |= (*l_488);
    return (*l_97);
}


/* ------------------------------------------ */
/* 
 * reads : p_925->g_117 p_925->g_121 p_925->g_4 p_925->g_83 p_925->g_84 p_925->g_132 p_925->g_comm_values p_925->g_70 p_925->l_comm_values p_925->g_153 p_925->g_166 p_925->g_181 p_925->g_219 p_925->g_222 p_925->g_233 p_925->g_235 p_925->g_238 p_925->g_245 p_925->g_248 p_925->g_249 p_925->g_256 p_925->g_264 p_925->g_327 p_925->g_339 p_925->g_341 p_925->g_239 p_925->g_342 p_925->g_393 p_925->g_424 p_925->g_439 p_925->g_458 p_925->g_461 p_925->g_483
 * writes: p_925->g_132 p_925->g_84 p_925->g_153 p_925->g_219 p_925->g_243 p_925->g_245 p_925->g_249 p_925->g_222 p_925->g_296 p_925->g_303 p_925->g_341 p_925->g_342 p_925->g_393 p_925->g_121 p_925->g_483
 */
int64_t  func_95(uint64_t  p_96, struct S0 * p_925)
{ /* block id: 17 */
    int32_t l_118 = 0x28E06435L;
    VECTOR(uint64_t, 16) l_119 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x819B780A7C56116CL), 0x819B780A7C56116CL), 0x819B780A7C56116CL, 1UL, 0x819B780A7C56116CL, (VECTOR(uint64_t, 2))(1UL, 0x819B780A7C56116CL), (VECTOR(uint64_t, 2))(1UL, 0x819B780A7C56116CL), 1UL, 0x819B780A7C56116CL, 1UL, 0x819B780A7C56116CL);
    VECTOR(uint64_t, 2) l_120 = (VECTOR(uint64_t, 2))(0x60488F66F91BAA84L, 0x80E064424CFB0C79L);
    int16_t *l_125[8][8] = {{&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84},{&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84},{&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84},{&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84},{&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84},{&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84},{&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84},{&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84,&p_925->g_84}};
    int16_t **l_124 = &l_125[6][2];
    uint8_t *l_135 = &p_925->g_132;
    uint8_t l_149 = 254UL;
    int64_t l_174 = 0x5FB097C18678765DL;
    int32_t *l_195[3][6] = {{&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2]},{&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2]},{&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2],&p_925->g_153[8][1][2]}};
    uint8_t l_198 = 1UL;
    VECTOR(int32_t, 8) l_221 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x538732B2L), 0x538732B2L), 0x538732B2L, (-5L), 0x538732B2L);
    VECTOR(int32_t, 8) l_232 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6C4D18DCL), 0x6C4D18DCL), 0x6C4D18DCL, 0L, 0x6C4D18DCL);
    int16_t ***l_241 = &l_124;
    int16_t ***l_242 = &p_925->g_239;
    VECTOR(int32_t, 8) l_298 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5ABC7B56L), 0x5ABC7B56L), 0x5ABC7B56L, 1L, 0x5ABC7B56L);
    int16_t *l_376[8][5] = {{(void*)0,&p_925->g_84,&p_925->g_84,&p_925->g_84,(void*)0},{(void*)0,&p_925->g_84,&p_925->g_84,&p_925->g_84,(void*)0},{(void*)0,&p_925->g_84,&p_925->g_84,&p_925->g_84,(void*)0},{(void*)0,&p_925->g_84,&p_925->g_84,&p_925->g_84,(void*)0},{(void*)0,&p_925->g_84,&p_925->g_84,&p_925->g_84,(void*)0},{(void*)0,&p_925->g_84,&p_925->g_84,&p_925->g_84,(void*)0},{(void*)0,&p_925->g_84,&p_925->g_84,&p_925->g_84,(void*)0},{(void*)0,&p_925->g_84,&p_925->g_84,&p_925->g_84,(void*)0}};
    int32_t *l_442 = &p_925->g_153[8][1][2];
    int32_t *l_453 = (void*)0;
    VECTOR(uint32_t, 2) l_457 = (VECTOR(uint32_t, 2))(0x59A53CD3L, 0x6A83392FL);
    int32_t *l_485[8][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t **l_486 = &l_195[0][0];
    int16_t l_487[4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_487[i] = (-1L);
    if (((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_96, ((!(safe_mul_func_int8_t_s_s(0L, (safe_sub_func_int8_t_s_s(p_96, p_96))))) ^ ((+(((~((VECTOR(int64_t, 2))(p_925->g_117.yx)).odd) && l_118) == l_118)) < ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_119.s195823b3)).lo)).lo))), ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 4))(l_120.xxxy)).lo, ((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),uint64_t,((VECTOR(uint64_t, 2))(p_925->g_121.sf3)).xxxyyyyxyyxyyyyx, (uint64_t)(p_925->g_121.s2 <= ((((l_124 = &p_925->g_83) != (void*)0) , p_96) != p_925->g_4)), (uint64_t)18446744073709551615UL))).sfc28)).wwxwyyww))).s23))), ((VECTOR(uint64_t, 2))(0xD4A057597B358AE8L)), l_118, 0x31603581D61F6B50L, 8UL, l_119.s0, 0UL, ((VECTOR(uint64_t, 2))(0x2219E070DDB654FAL)), GROUP_DIVERGE(0, 1), 0UL, 0UL)).lo, ((VECTOR(uint64_t, 8))(0x53E2D80D5DAD174FL)), ((VECTOR(uint64_t, 8))(1UL))))).s14, ((VECTOR(uint64_t, 2))(18446744073709551608UL))))).xxxxxxyxyyyxxyxx)).s3)))), l_119.s9)) , 0x6C084537L))
    { /* block id: 19 */
        VECTOR(int8_t, 8) l_130 = (VECTOR(int8_t, 8))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, (-1L)), (-1L)), (-1L), 0x73L, (-1L));
        uint8_t *l_131 = &p_925->g_132;
        int32_t l_136 = 0L;
        int i;
        l_136 = ((p_925->g_4 && (*p_925->g_83)) || ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(1L, 0x71L)).xyxxxyxxyxxxxxxy, ((VECTOR(int8_t, 2))((-1L), 0x30L)).yxxyxyyyyxyxxyyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x78L, 0x40L)), 0x2AL, (-5L))), 0x23L, 0L, (-9L), 0x24L)).s3104705105402131))).s7d21, ((VECTOR(int8_t, 8))(l_130.s74027616)).odd))).z, (((*l_131)++) == GROUP_DIVERGE(0, 1)))) , ((l_130.s0 , l_135) == l_131)));
    }
    else
    { /* block id: 22 */
        int16_t **l_139[4];
        int16_t ***l_142 = &l_124;
        int32_t l_150 = 0x2466AC14L;
        int32_t *l_151 = (void*)0;
        int32_t *l_152[2];
        int64_t l_173 = 0x47F79A1B8C437238L;
        uint64_t l_180[3];
        uint16_t l_220 = 0UL;
        VECTOR(int32_t, 4) l_234 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x50EA6270L), 0x50EA6270L);
        VECTOR(int32_t, 4) l_244 = (VECTOR(int32_t, 4))(0x3BDD3434L, (VECTOR(int32_t, 2))(0x3BDD3434L, 0x264914E0L), 0x264914E0L);
        VECTOR(uint64_t, 16) l_285 = (VECTOR(uint64_t, 16))(0xF6DD2539353A0DE2L, (VECTOR(uint64_t, 4))(0xF6DD2539353A0DE2L, (VECTOR(uint64_t, 2))(0xF6DD2539353A0DE2L, 0x72D38E3FF0556659L), 0x72D38E3FF0556659L), 0x72D38E3FF0556659L, 0xF6DD2539353A0DE2L, 0x72D38E3FF0556659L, (VECTOR(uint64_t, 2))(0xF6DD2539353A0DE2L, 0x72D38E3FF0556659L), (VECTOR(uint64_t, 2))(0xF6DD2539353A0DE2L, 0x72D38E3FF0556659L), 0xF6DD2539353A0DE2L, 0x72D38E3FF0556659L, 0xF6DD2539353A0DE2L, 0x72D38E3FF0556659L);
        uint8_t *l_292 = (void*)0;
        VECTOR(int16_t, 2) l_325 = (VECTOR(int16_t, 2))((-9L), 1L);
        VECTOR(uint16_t, 4) l_373 = (VECTOR(uint16_t, 4))(0xC588L, (VECTOR(uint16_t, 2))(0xC588L, 5UL), 5UL);
        int8_t *l_471[8][7][4] = {{{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0}},{{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0}},{{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0}},{{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0}},{{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0}},{{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0}},{{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0}},{{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0},{&p_925->g_296,(void*)0,(void*)0,(void*)0}}};
        int8_t **l_470 = &l_471[7][6][1];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_139[i] = &p_925->g_83;
        for (i = 0; i < 2; i++)
            l_152[i] = &p_925->g_153[8][1][2];
        for (i = 0; i < 3; i++)
            l_180[i] = 18446744073709551609UL;
        p_925->g_153[8][1][2] |= ((p_925->g_121.s5 < ((safe_div_func_uint64_t_u_u(((l_139[3] == (p_96 , ((safe_mul_func_uint16_t_u_u(0UL, (((p_925->g_comm_values[p_925->tid] & 0x6DL) , (~(p_96 , ((*p_925->g_83) = ((((((*l_142) = (void*)0) != (((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(p_925->g_84, p_925->g_70.y)) | GROUP_DIVERGE(0, 1)), p_96)), p_96)) , l_149) , p_96) || p_925->g_121.s3) , (void*)0)) >= (*p_925->g_83)) == l_150) , (*p_925->g_83)))))) || GROUP_DIVERGE(0, 1)))) , &l_125[7][3]))) >= p_925->g_121.sd), 1L)) && p_925->g_84)) < p_925->l_comm_values[(safe_mod_func_uint32_t_u_u(p_925->tid, 58))]);
        p_925->g_153[8][1][2] = l_118;
        if ((p_96 < ((safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((0L == (safe_mul_func_int8_t_s_s(0x27L, (&p_925->g_153[0][1][2] != &l_150)))) , ((-10L) != (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((l_174 ^= (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(p_925->g_166.s428c9742)).s2756751210137476, ((VECTOR(int16_t, 2))(0x432FL, 0x3320L)).yxyxxyyyxyxxyxyx, ((VECTOR(int16_t, 2))(0x1318L, 0x67E3L)).yyyyyxxxxyxxxxyx))).s7401)).xyxxwwyzwxwxzyzy, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_119.s7, 0x3ADFL, (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(((!(safe_div_func_uint64_t_u_u(((18446744073709551615UL && p_96) < l_173), p_96))) != p_925->g_153[0][0][1]), 2)) , p_925->g_117.y) ^ 18446744073709551615UL), p_96)), p_96, 0x20E7L, 0x0839L, 5L, (*p_925->g_83), 1L, (*p_925->g_83), ((VECTOR(int16_t, 2))((-5L))), ((VECTOR(int16_t, 4))(0x0CCBL)))).saa57)), p_96, (-4L), 0x3F17L, 0L)), ((VECTOR(int16_t, 8))(0x29D5L))))).even)).yzzxzxyyyzxxxywx, ((VECTOR(int16_t, 16))(0L)), ((VECTOR(int16_t, 16))((-6L)))))).odd, ((VECTOR(int16_t, 8))(1L))))).s66, (int16_t)9L))).xxxyyyxyxxxyxyyy))).hi)).s40)).lo, p_925->g_121.sb))), ((VECTOR(int16_t, 4))((-6L))), ((VECTOR(int16_t, 8))(0x7066L)), (-1L), 0x6A97L, 2L)))).s0, l_149)))), 0xC2L)), (*p_925->g_83))) <= 1UL), 12)) >= p_925->g_121.s8)))
        { /* block id: 28 */
            VECTOR(int16_t, 8) l_179 = (VECTOR(int16_t, 8))(0x3969L, (VECTOR(int16_t, 4))(0x3969L, (VECTOR(int16_t, 2))(0x3969L, 0x62A2L), 0x62A2L), 0x62A2L, 0x3969L, 0x62A2L);
            VECTOR(uint64_t, 2) l_182 = (VECTOR(uint64_t, 2))(18446744073709551607UL, 0x1631D6AA01866F3FL);
            VECTOR(uint16_t, 2) l_191 = (VECTOR(uint16_t, 2))(0x6613L, 0x6CF3L);
            int8_t *l_192 = (void*)0;
            int32_t **l_196 = &l_152[1];
            int32_t l_197 = 1L;
            uint8_t **l_217 = &l_135;
            uint32_t *l_218 = &p_925->g_219;
            int i;
            l_197 |= (((safe_lshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((l_180[0] &= ((p_925->g_132 == l_119.s4) != ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_179.s47)))).lo)) >= p_96), ((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(p_925->g_181.sacfe0e7167807596)).s0b)), ((VECTOR(uint64_t, 2))(l_182.xy))))).even)), (safe_add_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(18446744073709551615UL, ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_191.xyyxyxyy)).s0, ((void*)0 != l_192))) ^ (safe_sub_func_int32_t_s_s((((p_925->g_166.sc && ((l_195[0][0] == ((*l_196) = (void*)0)) , p_96)) < 4294967295UL) > p_96), 0x24D08B0DL))))), p_925->g_153[8][1][2])), p_96)))) <= 0x6D13L) | p_96);
            ++l_198;
            p_925->g_153[8][1][0] = (p_96 , (safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(0x612FE7324F2782A3L, 0x1396CDAD95808B98L)).xxyyyxxxyxxyxxxx, ((VECTOR(int64_t, 8))(5L, ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 8))(1L, 0x274EEE24FA2072C5L, (-1L), (-7L), 0x54A470AD435052A2L, 0x28C6FE17D3D015D5L, 0x706660D7ADAAC6F0L, (-7L))).s1670015023515435, ((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((safe_rshift_func_uint8_t_u_s(((void*)0 != l_196), (~((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), p_925->g_117.x)), p_925->g_153[2][1][1])) >= (0x552EE5E1L != ((*l_218) |= (safe_add_func_int32_t_s_s(p_925->g_166.s0, (p_96 || (safe_lshift_func_int16_t_s_s(((((*l_217) = &l_149) == &p_925->g_132) <= 0x50D59A36L), (*p_925->g_83)))))))))))), p_925->l_comm_values[(safe_mod_func_uint32_t_u_u(p_925->tid, 58))], ((VECTOR(int32_t, 4))(0x38838B9CL)), (-2L), 0x5AB9027DL)).s0563352775054732)), ((VECTOR(int32_t, 16))((-5L)))))), ((VECTOR(uint32_t, 16))(8UL))))).lo, ((VECTOR(int64_t, 8))(0x39BC0F596ABB34E1L))))).s1377477337460406))).see, ((VECTOR(int64_t, 2))(0x7EA52ED1EEAA21F5L))))), 0x604E7EADB0F8BC7FL, ((VECTOR(int64_t, 2))((-8L))), 1L, (-1L))).s5021271306465375, ((VECTOR(int64_t, 16))(0L))))).lo)).s61)), ((VECTOR(int64_t, 2))(8L))))))), 0x1ACBDC5839176EC8L, 0x061E384F033530B6L)).z, p_925->g_84, 0x1C08D247692239EEL, (-1L), 0x2C6BCAB004A20C8DL, 0x3A7469F826C77B0BL, 0x4005C3149682236DL, (-1L))).s6147277666650364)).sf , 4L) , (void*)0) == (*l_196)), 0x701EL)), p_925->g_117.y)) & p_925->g_153[4][1][5]) < l_220) == 3L), p_96)));
        }
        else
        { /* block id: 36 */
            VECTOR(int32_t, 2) l_223 = (VECTOR(int32_t, 2))((-1L), 0x72A8BBF5L);
            int32_t l_224 = 0x0889A77EL;
            int i;
            l_224 &= ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_221.s1777)).odd)), ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_925->g_222.yy)).yxxyxyyy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_223.yxxxyxxy)).lo)).xzwwyxwx))).s11))).even;
        }
        if (p_96)
        { /* block id: 39 */
            uint8_t l_225 = 0x32L;
            VECTOR(int32_t, 4) l_230 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x473E7C29L), 0x473E7C29L);
            VECTOR(int32_t, 2) l_231 = (VECTOR(int32_t, 2))((-1L), 0x7BC4987AL);
            int16_t ****l_240[5][6] = {{&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0]},{&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0]},{&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0]},{&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0]},{&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0],&p_925->g_238[6][0]}};
            VECTOR(uint16_t, 4) l_255 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65534UL), 65534UL);
            int i, j;
            ++l_225;
            p_925->g_249 ^= (safe_lshift_func_int16_t_s_u((9L < (((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(l_230.yxwz)), ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_231.yxyxxyyxxxxxyxyx)).s63)).xyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_232.s15)), 0x27611F6DL, 0x7DCE9B7EL))))).xwzxzyxywwwwxwyw, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(p_925->g_233.wy)).yxxx, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(l_234.yzwyzwxx)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_925->g_235.s7530)).zzxyyzzxxxzxxwxz)).s59c4))), ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(3L, p_96, 0x1378A79BL, (safe_rshift_func_uint8_t_u_u(((l_241 = p_925->g_238[6][0]) != (l_242 = &l_139[3])), ((p_925->g_243 = p_925->g_153[7][0][5]) , GROUP_DIVERGE(0, 1)))), p_96, ((VECTOR(int32_t, 2))(0x1FE1EFF7L, 5L)), (-6L))).s6267410665150557, ((VECTOR(int32_t, 16))(l_244.xzyzxxwxzxxzxwxx))))).s7aaf))).ywwzwyxzwxzxwwxw))).se187))).x < (((((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(6L, 7L)).yyyyyyyx)).s1 && (p_925->g_245 &= (p_925->g_222.y >= l_231.x))) ^ (FAKE_DIVERGE(p_925->local_0_offset, get_local_id(0), 10) != (safe_rshift_func_int16_t_s_s(p_96, 0)))) , &p_925->g_132) == &l_149) | p_925->g_248))), p_96));
            l_230.w = p_96;
            for (l_150 = 0; (l_150 == (-7)); l_150 = safe_sub_func_uint32_t_u_u(l_150, 7))
            { /* block id: 49 */
                uint64_t l_254 = 18446744073709551606UL;
                int16_t *l_259 = &p_925->g_84;
                uint16_t *l_269 = (void*)0;
                uint16_t *l_270 = &l_220;
                uint32_t l_271 = 4UL;
                p_925->g_222.x ^= (((safe_mod_func_int16_t_s_s((p_925->g_248 && l_254), p_925->g_233.w)) < (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(0x7BD1L, 1UL, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(l_255.wx)).yyxx, ((VECTOR(uint16_t, 8))(p_925->g_256.s975c51ac)).hi))), 65535UL, 65535UL, (safe_div_func_int32_t_s_s((+((l_125[6][2] = l_259) == l_259)), (safe_rshift_func_int8_t_s_u(0x66L, 1)))), 65535UL, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(0L, ((***l_242) = (*p_925->g_83)), 0x181DL, 0x5BF2L)).xwxwzywzzyxwzzzy, (int16_t)((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_925->g_264.s3560767650515656)).sd, ((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((((*l_270) = ((safe_lshift_func_int16_t_s_s(p_96, (p_96 , p_96))) , l_230.x)) > 0x75B7L), ((VECTOR(int8_t, 2))((-3L))), (-10L))).yyxxxzwxzwxxzzzx)).s5, p_925->g_166.s3)) || p_96))) != p_96)))).odd)).s10))), 0x5AA0L, ((VECTOR(uint16_t, 2))(0x22CCL)), ((VECTOR(uint16_t, 2))(0xD43AL)), 0UL)).lo)).even, (uint16_t)p_925->l_comm_values[(safe_mod_func_uint32_t_u_u(p_925->tid, 58))], (uint16_t)p_925->g_181.sa))), 0x9EA2L, p_96, 0x2DD3L, 65535UL)).s8dc9, ((VECTOR(uint16_t, 4))(0x5E46L)), ((VECTOR(uint16_t, 4))(1UL))))).wzywwxyy)).s2 <= l_254)) < l_271);
                if (p_925->g_248)
                    continue;
            }
        }
        else
        { /* block id: 56 */
            VECTOR(uint32_t, 16) l_274 = (VECTOR(uint32_t, 16))(0x4ED68F6AL, (VECTOR(uint32_t, 4))(0x4ED68F6AL, (VECTOR(uint32_t, 2))(0x4ED68F6AL, 0xE6AF7480L), 0xE6AF7480L), 0xE6AF7480L, 0x4ED68F6AL, 0xE6AF7480L, (VECTOR(uint32_t, 2))(0x4ED68F6AL, 0xE6AF7480L), (VECTOR(uint32_t, 2))(0x4ED68F6AL, 0xE6AF7480L), 0x4ED68F6AL, 0xE6AF7480L, 0x4ED68F6AL, 0xE6AF7480L);
            int16_t ****l_276[1];
            int16_t *****l_275 = &l_276[0];
            uint8_t *l_294[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_297 = 0L;
            VECTOR(int8_t, 4) l_326 = (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, 0x03L), 0x03L);
            VECTOR(int8_t, 8) l_329 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L);
            VECTOR(uint8_t, 4) l_475 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x36L), 0x36L);
            int32_t l_484 = 6L;
            int i;
            for (i = 0; i < 1; i++)
                l_276[i] = &l_241;
            if ((safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_925->global_0_offset, get_global_id(0), 10), (&l_241 != (((VECTOR(uint32_t, 2))(l_274.s21)).hi , ((*l_275) = (void*)0))))))
            { /* block id: 58 */
                uint32_t l_290 = 0xBE4FD566L;
                VECTOR(uint16_t, 4) l_291 = (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 65526UL), 65526UL);
                uint8_t **l_293[8] = {&l_135,&l_135,&l_135,&l_135,&l_135,&l_135,&l_135,&l_135};
                int8_t *l_295[4] = {&p_925->g_296,&p_925->g_296,&p_925->g_296,&p_925->g_296};
                uint16_t *l_299 = (void*)0;
                uint16_t *l_300 = &l_220;
                int32_t l_340 = 0x38690C51L;
                int16_t ****l_367[4] = {&l_242,&l_242,&l_242,&l_242};
                VECTOR(int64_t, 16) l_372 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int64_t, 2))(0L, 0L), (VECTOR(int64_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                int64_t *l_377 = &l_174;
                VECTOR(int32_t, 4) l_378 = (VECTOR(int32_t, 4))(0x20800CC6L, (VECTOR(int32_t, 2))(0x20800CC6L, 0x794EA87FL), 0x794EA87FL);
                VECTOR(uint16_t, 8) l_379 = (VECTOR(uint16_t, 8))(0xB639L, (VECTOR(uint16_t, 4))(0xB639L, (VECTOR(uint16_t, 2))(0xB639L, 0x8839L), 0x8839L), 0x8839L, 0xB639L, 0x8839L);
                VECTOR(uint32_t, 8) l_425 = (VECTOR(uint32_t, 8))(0x72BFDE44L, (VECTOR(uint32_t, 4))(0x72BFDE44L, (VECTOR(uint32_t, 2))(0x72BFDE44L, 9UL), 9UL), 9UL, 0x72BFDE44L, 9UL);
                VECTOR(uint32_t, 2) l_426 = (VECTOR(uint32_t, 2))(1UL, 4294967287UL);
                int i;
                if ((safe_div_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((((*l_300) = (((safe_rshift_func_int16_t_s_u(p_96, (safe_div_func_int16_t_s_s((l_297 = ((((VECTOR(uint64_t, 4))(l_285.s094d)).w & (~(l_274.s7 != p_925->g_121.se))) >= (p_96 ^ (((safe_add_func_int16_t_s_s(((*p_925->g_83) |= (p_96 || (safe_rshift_func_int8_t_s_u(l_290, 4)))), ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(l_291.xyzx)).hi, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((&l_149 == (l_294[1] = l_292)) & (p_925->g_296 = (GROUP_DIVERGE(1, 1) > p_96))), ((VECTOR(uint16_t, 4))(0x1EA3L)), 0x0286L, 65535UL, 65535UL)).s42))))).hi)) != 0L) , p_96)))), l_298.s6)))) , l_291.x) , p_96)) || l_290), l_274.s3)) , (-4L)) , p_925->g_84), 0x51L)))
                { /* block id: 64 */
                    int32_t **l_301 = (void*)0;
                    int32_t **l_302[9];
                    VECTOR(int8_t, 4) l_328 = (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, 0x4AL), 0x4AL);
                    uint64_t *l_332 = (void*)0;
                    uint64_t *l_333 = (void*)0;
                    uint64_t *l_334 = &l_180[0];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_302[i] = &l_151;
                    p_925->g_303[1][7][0] = l_195[0][0];
                    if ((atomic_inc(&p_925->g_atomic_input[31 * get_linear_group_id() + 11]) == 0))
                    { /* block id: 67 */
                        int32_t l_304 = 0x5A44F4CEL;
                        int8_t l_305 = 0x40L;
                        int32_t l_306 = 0x4033CB16L;
                        int32_t *l_307 = &l_306;
                        int32_t *l_308 = &l_304;
                        int32_t *l_309 = (void*)0;
                        l_304 = 0x719A99B7L;
                        l_305 = (-4L);
                        l_306 ^= (-10L);
                        l_309 = (l_308 = (((VECTOR(uint64_t, 2))(0xB8B7D61BF8105391L, 7UL)).even , l_307));
                        unsigned int result = 0;
                        result += l_304;
                        result += l_305;
                        result += l_306;
                        atomic_add(&p_925->g_special_values[31 * get_linear_group_id() + 11], result);
                    }
                    else
                    { /* block id: 73 */
                        (1 + 1);
                    }
                    if ((atomic_inc(&p_925->l_atomic_input[20]) == 6))
                    { /* block id: 77 */
                        uint8_t l_310 = 0x07L;
                        int32_t l_311[6][4] = {{(-3L),0L,0x7DB94CB1L,0L},{(-3L),0L,0x7DB94CB1L,0L},{(-3L),0L,0x7DB94CB1L,0L},{(-3L),0L,0x7DB94CB1L,0L},{(-3L),0L,0x7DB94CB1L,0L},{(-3L),0L,0x7DB94CB1L,0L}};
                        int32_t *l_313 = (void*)0;
                        int32_t **l_312 = &l_313;
                        int32_t **l_314 = &l_313;
                        uint32_t l_315 = 4294967287UL;
                        uint64_t l_316 = 1UL;
                        uint32_t l_317 = 0UL;
                        uint8_t l_318 = 0UL;
                        int32_t l_320 = (-9L);
                        int32_t *l_319 = &l_320;
                        int32_t *l_321 = &l_320;
                        int i, j;
                        l_311[1][3] &= (l_310 = 0x04843909L);
                        l_314 = l_312;
                        l_317 ^= (l_316 = l_315);
                        l_321 = (l_318 , l_319);
                        unsigned int result = 0;
                        result += l_310;
                        int l_311_i0, l_311_i1;
                        for (l_311_i0 = 0; l_311_i0 < 6; l_311_i0++) {
                            for (l_311_i1 = 0; l_311_i1 < 4; l_311_i1++) {
                                result += l_311[l_311_i0][l_311_i1];
                            }
                        }
                        result += l_315;
                        result += l_316;
                        result += l_317;
                        result += l_318;
                        result += l_320;
                        atomic_add(&p_925->l_special_values[20], result);
                    }
                    else
                    { /* block id: 84 */
                        (1 + 1);
                    }
                    l_340 |= ((safe_unary_minus_func_int8_t_s((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_325.xyxyxyyyyyyxxxyy)).even)).s13, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(0x43L, ((VECTOR(int8_t, 2))(l_326.yy)), ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(p_925->g_327.wzyzzwwy)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x41L, 7L)), 0x05L, 1L)).xwwzywxz)).even))))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(l_328.zwwyzwxx)), ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 16))(l_329.s7234073651327702)), (int8_t)(((*l_334) = (((void*)0 != &l_135) < ((safe_lshift_func_uint8_t_u_u(p_925->g_121.sa, 5)) >= p_96))) == (l_291.x == p_96)), (int8_t)(safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((*p_925->g_83) = l_290) > 0xF701L), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_925->g_339.zyzywxxxzyzxxxxx)).s36)).xxyyxxyx)).s3)), p_96))))).even))).hi)))))), p_96, ((VECTOR(int8_t, 2))(0x31L)), (-10L), 8L)).even)).s62)))).xyxyyyyx)).s41)).xyxyyyxx, ((VECTOR(uint8_t, 8))(255UL))))).s4674053776515007, ((VECTOR(int16_t, 16))(0L)), ((VECTOR(int16_t, 16))(0x1C23L))))).s52))), 7UL)).wyyxxywy, ((VECTOR(uint16_t, 8))(0UL))))).s6, p_96)))) , p_96);
                }
                else
                { /* block id: 90 */
                    uint64_t * volatile **l_343[10][1][4];
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_343[i][j][k] = &p_925->g_341;
                        }
                    }
                    p_925->g_341 = p_925->g_341;
                }
                p_925->g_303[1][7][0] = &l_340;
                if ((atomic_inc(&p_925->g_atomic_input[31 * get_linear_group_id() + 19]) == 9))
                { /* block id: 95 */
                    int32_t l_344 = 0x3B143DABL;
                    int32_t l_349 = 7L;
                    int16_t l_350 = (-8L);
                    uint32_t l_351 = 0x4509A3DEL;
                    for (l_344 = (-10); (l_344 != (-25)); l_344 = safe_sub_func_int64_t_s_s(l_344, 6))
                    { /* block id: 98 */
                        int64_t l_347 = (-1L);
                        int32_t l_348 = 8L;
                        l_348 |= l_347;
                    }
                    l_351--;
                    for (l_351 = 0; (l_351 != 22); l_351++)
                    { /* block id: 104 */
                        uint32_t l_356 = 0xDE392BD6L;
                        int8_t l_357 = 0x19L;
                        uint64_t l_358 = 18446744073709551607UL;
                        l_349 = l_356;
                        ++l_358;
                    }
                    unsigned int result = 0;
                    result += l_344;
                    result += l_349;
                    result += l_350;
                    result += l_351;
                    atomic_add(&p_925->g_special_values[31 * get_linear_group_id() + 19], result);
                }
                else
                { /* block id: 108 */
                    (1 + 1);
                }
                if ((safe_lshift_func_uint8_t_u_u((((*l_377) = (((l_340 |= p_925->g_339.z) == p_925->g_248) && ((safe_sub_func_uint32_t_u_u((((&l_340 != &l_340) & (safe_lshift_func_int16_t_s_s((((*l_275) = l_367[2]) == ((((*l_300)--) , ((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(l_372.s33c96149)).s3, ((VECTOR(uint64_t, 8))(0xDFD5CE5605D7226BL, 0xE7426A8E26A4AF0CL, 0xF6648867E31A615DL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551615UL)).yxxy)), 0x9CAF9F28D3CC1AAFL)).s0)) || (~((l_291.x && ((VECTOR(uint16_t, 4))(l_373.xyyz)).y) && ((0xEAL == p_925->g_264.s3) , (safe_rshift_func_int16_t_s_s(((((void*)0 == l_376[0][1]) && p_925->g_166.sc) != p_96), p_96))))))) , l_367[2])), (**p_925->g_239)))) < p_96), l_290)) > p_925->g_181.se))) , 1UL), 2)))
                { /* block id: 115 */
                    uint64_t l_386[7][2] = {{0xF2DCF23DB8272E40L,1UL},{0xF2DCF23DB8272E40L,1UL},{0xF2DCF23DB8272E40L,1UL},{0xF2DCF23DB8272E40L,1UL},{0xF2DCF23DB8272E40L,1UL},{0xF2DCF23DB8272E40L,1UL},{0xF2DCF23DB8272E40L,1UL}};
                    uint64_t **l_387 = &p_925->g_342;
                    uint64_t *l_389 = &l_180[0];
                    uint64_t **l_388 = &l_389;
                    uint16_t *l_390 = (void*)0;
                    uint16_t **l_391[4];
                    int32_t l_392 = 0x5A3013FBL;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_391[i] = &l_390;
                    l_297 &= ((GROUP_DIVERGE(0, 1) == ((&p_925->g_153[8][1][2] == &l_340) < 1L)) > (((VECTOR(int32_t, 16))(3L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x1DFF291AL)).yxxy)).xyyzywwz)).s27)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-7L), 0x6E8CAE06L)))).even, 5L, 0x340CB0F1L, ((VECTOR(int32_t, 2))(l_378.wz)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(0x04AAL, 1L)).yyyyxyyx, ((VECTOR(uint16_t, 4))(l_379.s5246)).ywyyxwwy))))).sb , (((p_96 < (p_96 , 0x5076L)) , (safe_mod_func_uint64_t_u_u((!(((safe_mul_func_int8_t_s_s(p_96, (l_386[1][1] = ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x73L, (-1L))).yyxx)).even)).hi))) || (((*l_388) = ((*l_387) = ((!p_96) , p_925->g_342))) == (void*)0)) <= p_96)), p_96))) || 0x08B7D56EL)));
                    l_392 ^= (p_96 , ((l_299 == (l_300 = l_390)) , l_386[5][1]));
                }
                else
                { /* block id: 122 */
                    volatile int8_t * volatile **l_396 = (void*)0;
                    volatile int8_t * volatile **l_397 = &p_925->g_393;
                    uint32_t *l_402 = (void*)0;
                    uint32_t *l_403 = &p_925->g_219;
                    int32_t l_406 = 0x4F77C9F1L;
                    int32_t l_407 = 1L;
                    int16_t **l_410 = &l_125[2][7];
                    int32_t **l_413 = &l_152[0];
                    int16_t ***l_420 = &l_139[3];
                    VECTOR(uint32_t, 8) l_423 = (VECTOR(uint32_t, 8))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967290UL, 4294967295UL);
                    int i;
                    (*l_397) = p_925->g_393;
                    l_340 = ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((--(*l_403)), p_96)) | p_96), (((p_925->g_153[6][0][0] && (((!((l_407 ^= (((*l_135) &= p_96) != l_406)) ^ ((safe_sub_func_uint64_t_u_u((((l_410 == (*l_142)) , ((p_925->g_249 = (safe_sub_func_uint32_t_u_u(p_925->g_222.y, p_925->g_4))) , (void*)0)) == l_294[2]), 1L)) | 8L))) > l_372.sd) , 6L)) ^ 0UL) <= 4294967288UL))) ^ p_96);
                    (*l_413) = &p_925->g_153[4][1][1];
                    l_297 = ((((((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((&p_925->g_239 == (l_420 = &l_124)) <= ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(1UL, 0xAAE6BFBCL)).xxyyyxxyyyyxyyyx)).s4) , ((-5L) == ((safe_div_func_uint64_t_u_u(6UL, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 8))(0xF3B99123L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_423.s4372647334577224)).s8315)))).y, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 8))(p_925->g_424.s240fa2d9)).s1073013316370622, ((VECTOR(uint32_t, 16))(l_425.s6327263352453233)), ((VECTOR(uint32_t, 4))(l_426.yxxy)).xzyyywwwwwzzxyzw))).s74)))), (((safe_add_func_int8_t_s_s(((&l_198 == &p_925->g_248) && (((++(*l_403)) , GROUP_DIVERGE(2, 1)) && (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(((safe_mul_func_uint8_t_u_u(0xB3L, ((((*l_142) != (*l_420)) < 0UL) <= p_96))) < p_96), 1L, ((VECTOR(int8_t, 4))(0x7FL)), 0x70L, 0L)).s2, p_96)), l_329.s4)), p_925->g_121.s4)))), l_290)) < (*p_925->g_83)) ^ p_925->g_121.sd), 0xD871D8B3L, 4294967289UL, 1UL)).s64, ((VECTOR(uint32_t, 2))(0UL))))).even)) & (*p_925->g_83)))), FAKE_DIVERGE(p_925->group_2_offset, get_group_id(2), 10))), GROUP_DIVERGE(2, 1))), 0)) != GROUP_DIVERGE(2, 1)) | p_96) >= (-8L)) , l_329.s2) <= (-7L));
                }
            }
            else
            { /* block id: 134 */
                int8_t l_440[9][10][2] = {{{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)}},{{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)}},{{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)}},{{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)}},{{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)}},{{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)}},{{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)}},{{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)}},{{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)},{0x33L,(-2L)}}};
                int32_t **l_441[4][3] = {{&l_152[0],&p_925->g_303[4][7][0],(void*)0},{&l_152[0],&p_925->g_303[4][7][0],(void*)0},{&l_152[0],&p_925->g_303[4][7][0],(void*)0},{&l_152[0],&p_925->g_303[4][7][0],(void*)0}};
                int i, j, k;
                l_440[1][6][0] = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_925->g_439.xy)).xyxy)).wyzwwzzw)).s4;
                l_442 = (p_925->g_303[4][0][3] = &l_150);
            }
            for (p_925->g_84 = 0; (p_925->g_84 >= 17); p_925->g_84 = safe_add_func_int8_t_s_s(p_925->g_84, 3))
            { /* block id: 141 */
                int32_t **l_454 = &l_442;
                int16_t **l_472[8];
                int64_t *l_478 = &l_173;
                uint32_t *l_479 = (void*)0;
                uint32_t *l_480 = &p_925->g_219;
                uint32_t *l_481 = (void*)0;
                uint32_t *l_482[3][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_472[i] = &p_925->g_83;
                for (l_150 = (-30); (l_150 > 15); l_150 = safe_add_func_int8_t_s_s(l_150, 6))
                { /* block id: 144 */
                    VECTOR(int32_t, 2) l_452 = (VECTOR(int32_t, 2))((-1L), 7L);
                    int i;
                    l_442 = &l_297;
                    for (l_174 = 0; (l_174 > 24); ++l_174)
                    { /* block id: 148 */
                        int32_t **l_449 = (void*)0;
                        int32_t **l_450 = &l_151;
                        int32_t **l_451 = &l_195[0][0];
                        l_297 = p_96;
                        (*l_451) = ((*l_450) = &p_925->g_4);
                        (*l_442) ^= 0x654C7872L;
                        (*l_442) ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_452.xxxy)).zyzyxxzyyxzxzzzx)).s5;
                    }
                }
                (*l_454) = l_453;
                l_484 |= (safe_div_func_uint32_t_u_u(((((p_925->g_483 ^= (((VECTOR(uint32_t, 2))(l_457.xx)).even == ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0xB931A71AL, ((VECTOR(uint32_t, 2))(p_925->g_458.s21)), 1UL)))).wxwwwyywzxwxyzzw, (uint32_t)p_925->g_121.s6, (uint32_t)((*l_480) ^= (l_297 &= ((((p_96 = ((p_925->g_121.s1 &= (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(p_925->g_461.s86e07572)).s4, (((safe_div_func_uint16_t_u_u(p_925->g_4, (l_329.s5 ^ (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((void*)0 != l_470), (l_472[7] == (void*)0))), 0)) , (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_475.wz)).yxxx)).x, (safe_rshift_func_uint16_t_u_s((((*l_478) = ((void*)0 != &l_297)) | 0L), (**p_925->g_239)))))) > 7L)))) , 0x0037L) || (**p_925->g_239))))) || 0x3896A227C0C202D4L)) != p_925->g_70.x) > l_326.x) , 5UL)))))).sa)) , (void*)0) == &p_925->g_245) && p_96), l_274.se));
            }
        }
    }
    (*l_486) = l_485[3][4];
    return l_487[3];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[31];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 31; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[31];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 31; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[58];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 58; i++)
            l_comm_values[i] = 1;
    struct S0 c_926;
    struct S0* p_925 = &c_926;
    struct S0 c_927 = {
        7L, // p_925->g_2
        0x251D69F4L, // p_925->g_3
        0x2137B189L, // p_925->g_4
        &p_925->g_2, // p_925->g_48
        0L, // p_925->g_59
        (VECTOR(int32_t, 2))(0x45F26307L, 9L), // p_925->g_70
        0x32F0L, // p_925->g_84
        &p_925->g_84, // p_925->g_83
        (VECTOR(int64_t, 2))(0x3F30E8C00D659E58L, 0L), // p_925->g_117
        (VECTOR(uint64_t, 16))(0xEC12BCECFDE0D86AL, (VECTOR(uint64_t, 4))(0xEC12BCECFDE0D86AL, (VECTOR(uint64_t, 2))(0xEC12BCECFDE0D86AL, 1UL), 1UL), 1UL, 0xEC12BCECFDE0D86AL, 1UL, (VECTOR(uint64_t, 2))(0xEC12BCECFDE0D86AL, 1UL), (VECTOR(uint64_t, 2))(0xEC12BCECFDE0D86AL, 1UL), 0xEC12BCECFDE0D86AL, 1UL, 0xEC12BCECFDE0D86AL, 1UL), // p_925->g_121
        0xB2L, // p_925->g_132
        {{{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L},{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L}},{{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L},{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L}},{{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L},{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L}},{{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L},{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L}},{{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L},{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L}},{{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L},{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L}},{{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L},{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L}},{{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L},{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L}},{{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L},{0x183DA37FL,0x39AA1BD0L,0x39AA1BD0L,0x183DA37FL,0L,0x11705F15L}}}, // p_925->g_153
        (VECTOR(int16_t, 16))(0x4518L, (VECTOR(int16_t, 4))(0x4518L, (VECTOR(int16_t, 2))(0x4518L, (-6L)), (-6L)), (-6L), 0x4518L, (-6L), (VECTOR(int16_t, 2))(0x4518L, (-6L)), (VECTOR(int16_t, 2))(0x4518L, (-6L)), 0x4518L, (-6L), 0x4518L, (-6L)), // p_925->g_166
        (VECTOR(uint64_t, 16))(0x45E50017F8393538L, (VECTOR(uint64_t, 4))(0x45E50017F8393538L, (VECTOR(uint64_t, 2))(0x45E50017F8393538L, 5UL), 5UL), 5UL, 0x45E50017F8393538L, 5UL, (VECTOR(uint64_t, 2))(0x45E50017F8393538L, 5UL), (VECTOR(uint64_t, 2))(0x45E50017F8393538L, 5UL), 0x45E50017F8393538L, 5UL, 0x45E50017F8393538L, 5UL), // p_925->g_181
        5UL, // p_925->g_219
        (VECTOR(int32_t, 2))(0L, 0x160165B9L), // p_925->g_222
        (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x4240C774L), 0x4240C774L), // p_925->g_233
        (VECTOR(int32_t, 8))(0x545C5AFCL, (VECTOR(int32_t, 4))(0x545C5AFCL, (VECTOR(int32_t, 2))(0x545C5AFCL, 0x5C90968EL), 0x5C90968EL), 0x5C90968EL, 0x545C5AFCL, 0x5C90968EL), // p_925->g_235
        &p_925->g_83, // p_925->g_239
        {{&p_925->g_239,&p_925->g_239,&p_925->g_239},{&p_925->g_239,&p_925->g_239,&p_925->g_239},{&p_925->g_239,&p_925->g_239,&p_925->g_239},{&p_925->g_239,&p_925->g_239,&p_925->g_239},{&p_925->g_239,&p_925->g_239,&p_925->g_239},{&p_925->g_239,&p_925->g_239,&p_925->g_239},{&p_925->g_239,&p_925->g_239,&p_925->g_239},{&p_925->g_239,&p_925->g_239,&p_925->g_239},{&p_925->g_239,&p_925->g_239,&p_925->g_239},{&p_925->g_239,&p_925->g_239,&p_925->g_239}}, // p_925->g_238
        0L, // p_925->g_243
        0x38DD8F448834F832L, // p_925->g_245
        0x60L, // p_925->g_248
        8UL, // p_925->g_249
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x607FL), 0x607FL), 0x607FL, 65535UL, 0x607FL, (VECTOR(uint16_t, 2))(65535UL, 0x607FL), (VECTOR(uint16_t, 2))(65535UL, 0x607FL), 65535UL, 0x607FL, 65535UL, 0x607FL), // p_925->g_256
        (VECTOR(uint16_t, 8))(0x961FL, (VECTOR(uint16_t, 4))(0x961FL, (VECTOR(uint16_t, 2))(0x961FL, 0x27ABL), 0x27ABL), 0x27ABL, 0x961FL, 0x27ABL), // p_925->g_264
        3L, // p_925->g_296
        {{{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4}},{{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4}},{{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4}},{{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4}},{{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4}},{{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4},{&p_925->g_4,(void*)0,(void*)0,&p_925->g_4}}}, // p_925->g_303
        (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 4L), 4L), // p_925->g_327
        (VECTOR(uint16_t, 4))(0x484DL, (VECTOR(uint16_t, 2))(0x484DL, 0UL), 0UL), // p_925->g_339
        (void*)0, // p_925->g_342
        &p_925->g_342, // p_925->g_341
        0x7BL, // p_925->g_395
        &p_925->g_395, // p_925->g_394
        &p_925->g_394, // p_925->g_393
        (VECTOR(uint32_t, 16))(0x939FA1EDL, (VECTOR(uint32_t, 4))(0x939FA1EDL, (VECTOR(uint32_t, 2))(0x939FA1EDL, 0x6F6F6073L), 0x6F6F6073L), 0x6F6F6073L, 0x939FA1EDL, 0x6F6F6073L, (VECTOR(uint32_t, 2))(0x939FA1EDL, 0x6F6F6073L), (VECTOR(uint32_t, 2))(0x939FA1EDL, 0x6F6F6073L), 0x939FA1EDL, 0x6F6F6073L, 0x939FA1EDL, 0x6F6F6073L), // p_925->g_424
        (VECTOR(int32_t, 2))(1L, 0x77C1CED1L), // p_925->g_439
        (VECTOR(uint32_t, 8))(0xB19B1B5AL, (VECTOR(uint32_t, 4))(0xB19B1B5AL, (VECTOR(uint32_t, 2))(0xB19B1B5AL, 0x68DDA783L), 0x68DDA783L), 0x68DDA783L, 0xB19B1B5AL, 0x68DDA783L), // p_925->g_458
        (VECTOR(int64_t, 16))(0x6DF12B23C1360923L, (VECTOR(int64_t, 4))(0x6DF12B23C1360923L, (VECTOR(int64_t, 2))(0x6DF12B23C1360923L, (-1L)), (-1L)), (-1L), 0x6DF12B23C1360923L, (-1L), (VECTOR(int64_t, 2))(0x6DF12B23C1360923L, (-1L)), (VECTOR(int64_t, 2))(0x6DF12B23C1360923L, (-1L)), 0x6DF12B23C1360923L, (-1L), 0x6DF12B23C1360923L, (-1L)), // p_925->g_461
        1L, // p_925->g_483
        (VECTOR(int8_t, 2))(0x54L, (-6L)), // p_925->g_501
        {0xDEL,0x20L,0xDEL,0xDEL,0x20L,0xDEL,0xDEL}, // p_925->g_551
        {{6L,1L,0L,0x76D41BF7L,6L,1L,0x08A68A76L,0x1DC74B39L,1L},{6L,1L,0L,0x76D41BF7L,6L,1L,0x08A68A76L,0x1DC74B39L,1L},{6L,1L,0L,0x76D41BF7L,6L,1L,0x08A68A76L,0x1DC74B39L,1L},{6L,1L,0L,0x76D41BF7L,6L,1L,0x08A68A76L,0x1DC74B39L,1L},{6L,1L,0L,0x76D41BF7L,6L,1L,0x08A68A76L,0x1DC74B39L,1L},{6L,1L,0L,0x76D41BF7L,6L,1L,0x08A68A76L,0x1DC74B39L,1L},{6L,1L,0L,0x76D41BF7L,6L,1L,0x08A68A76L,0x1DC74B39L,1L},{6L,1L,0L,0x76D41BF7L,6L,1L,0x08A68A76L,0x1DC74B39L,1L},{6L,1L,0L,0x76D41BF7L,6L,1L,0x08A68A76L,0x1DC74B39L,1L}}, // p_925->g_553
        {0x4A63L,0x4A63L}, // p_925->g_616
        (VECTOR(uint8_t, 8))(0xAFL, (VECTOR(uint8_t, 4))(0xAFL, (VECTOR(uint8_t, 2))(0xAFL, 1UL), 1UL), 1UL, 0xAFL, 1UL), // p_925->g_624
        (void*)0, // p_925->g_631
        &p_925->g_631, // p_925->g_630
        (VECTOR(uint8_t, 2))(0x66L, 1UL), // p_925->g_634
        (VECTOR(uint32_t, 4))(0x5A3E0DDCL, (VECTOR(uint32_t, 2))(0x5A3E0DDCL, 4294967295UL), 4294967295UL), // p_925->g_643
        (VECTOR(uint32_t, 16))(0xE9D5FDA7L, (VECTOR(uint32_t, 4))(0xE9D5FDA7L, (VECTOR(uint32_t, 2))(0xE9D5FDA7L, 0x9645D804L), 0x9645D804L), 0x9645D804L, 0xE9D5FDA7L, 0x9645D804L, (VECTOR(uint32_t, 2))(0xE9D5FDA7L, 0x9645D804L), (VECTOR(uint32_t, 2))(0xE9D5FDA7L, 0x9645D804L), 0xE9D5FDA7L, 0x9645D804L, 0xE9D5FDA7L, 0x9645D804L), // p_925->g_645
        (VECTOR(int32_t, 2))(0x228D5785L, (-1L)), // p_925->g_666
        (VECTOR(uint32_t, 2))(0x504B4972L, 4294967286UL), // p_925->g_668
        (-1L), // p_925->g_717
        (VECTOR(int32_t, 2))(1L, 0x77DCEBC8L), // p_925->g_718
        (void*)0, // p_925->g_778
        (VECTOR(uint8_t, 16))(0xDEL, (VECTOR(uint8_t, 4))(0xDEL, (VECTOR(uint8_t, 2))(0xDEL, 0xF1L), 0xF1L), 0xF1L, 0xDEL, 0xF1L, (VECTOR(uint8_t, 2))(0xDEL, 0xF1L), (VECTOR(uint8_t, 2))(0xDEL, 0xF1L), 0xDEL, 0xF1L, 0xDEL, 0xF1L), // p_925->g_796
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int64_t, 2))(1L, 1L), (VECTOR(int64_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_925->g_813
        (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0L), 0L), // p_925->g_818
        &p_925->g_153[1][1][5], // p_925->g_827
        (VECTOR(int8_t, 8))(0x5AL, (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 0x37L), 0x37L), 0x37L, 0x5AL, 0x37L), // p_925->g_830
        (VECTOR(int64_t, 8))(0x78F91F3A2592720EL, (VECTOR(int64_t, 4))(0x78F91F3A2592720EL, (VECTOR(int64_t, 2))(0x78F91F3A2592720EL, 1L), 1L), 1L, 0x78F91F3A2592720EL, 1L), // p_925->g_831
        (VECTOR(uint32_t, 2))(0xFC865519L, 4294967288UL), // p_925->g_842
        (VECTOR(uint32_t, 8))(0x1D7EEF5EL, (VECTOR(uint32_t, 4))(0x1D7EEF5EL, (VECTOR(uint32_t, 2))(0x1D7EEF5EL, 1UL), 1UL), 1UL, 0x1D7EEF5EL, 1UL), // p_925->g_843
        (VECTOR(uint32_t, 8))(0x6A69DF3BL, (VECTOR(uint32_t, 4))(0x6A69DF3BL, (VECTOR(uint32_t, 2))(0x6A69DF3BL, 0x263E3921L), 0x263E3921L), 0x263E3921L, 0x6A69DF3BL, 0x263E3921L), // p_925->g_844
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 3UL), 3UL), // p_925->g_845
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL), // p_925->g_858
        (VECTOR(int8_t, 2))(0L, 1L), // p_925->g_879
        {&p_925->g_551[2]}, // p_925->g_881
        {&p_925->g_881[0],&p_925->g_881[0],&p_925->g_881[0]}, // p_925->g_880
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int8_t, 2))(0L, 0L), (VECTOR(int8_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_925->g_882
        18446744073709551615UL, // p_925->g_899
        0, // p_925->v_collective
        sequence_input[get_global_id(0)], // p_925->global_0_offset
        sequence_input[get_global_id(1)], // p_925->global_1_offset
        sequence_input[get_global_id(2)], // p_925->global_2_offset
        sequence_input[get_local_id(0)], // p_925->local_0_offset
        sequence_input[get_local_id(1)], // p_925->local_1_offset
        sequence_input[get_local_id(2)], // p_925->local_2_offset
        sequence_input[get_group_id(0)], // p_925->group_0_offset
        sequence_input[get_group_id(1)], // p_925->group_1_offset
        sequence_input[get_group_id(2)], // p_925->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 58)), permutations[0][get_linear_local_id()])), // p_925->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_926 = c_927;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_925);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_925->g_2, "p_925->g_2", print_hash_value);
    transparent_crc(p_925->g_3, "p_925->g_3", print_hash_value);
    transparent_crc(p_925->g_4, "p_925->g_4", print_hash_value);
    transparent_crc(p_925->g_59, "p_925->g_59", print_hash_value);
    transparent_crc(p_925->g_70.x, "p_925->g_70.x", print_hash_value);
    transparent_crc(p_925->g_70.y, "p_925->g_70.y", print_hash_value);
    transparent_crc(p_925->g_84, "p_925->g_84", print_hash_value);
    transparent_crc(p_925->g_117.x, "p_925->g_117.x", print_hash_value);
    transparent_crc(p_925->g_117.y, "p_925->g_117.y", print_hash_value);
    transparent_crc(p_925->g_121.s0, "p_925->g_121.s0", print_hash_value);
    transparent_crc(p_925->g_121.s1, "p_925->g_121.s1", print_hash_value);
    transparent_crc(p_925->g_121.s2, "p_925->g_121.s2", print_hash_value);
    transparent_crc(p_925->g_121.s3, "p_925->g_121.s3", print_hash_value);
    transparent_crc(p_925->g_121.s4, "p_925->g_121.s4", print_hash_value);
    transparent_crc(p_925->g_121.s5, "p_925->g_121.s5", print_hash_value);
    transparent_crc(p_925->g_121.s6, "p_925->g_121.s6", print_hash_value);
    transparent_crc(p_925->g_121.s7, "p_925->g_121.s7", print_hash_value);
    transparent_crc(p_925->g_121.s8, "p_925->g_121.s8", print_hash_value);
    transparent_crc(p_925->g_121.s9, "p_925->g_121.s9", print_hash_value);
    transparent_crc(p_925->g_121.sa, "p_925->g_121.sa", print_hash_value);
    transparent_crc(p_925->g_121.sb, "p_925->g_121.sb", print_hash_value);
    transparent_crc(p_925->g_121.sc, "p_925->g_121.sc", print_hash_value);
    transparent_crc(p_925->g_121.sd, "p_925->g_121.sd", print_hash_value);
    transparent_crc(p_925->g_121.se, "p_925->g_121.se", print_hash_value);
    transparent_crc(p_925->g_121.sf, "p_925->g_121.sf", print_hash_value);
    transparent_crc(p_925->g_132, "p_925->g_132", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_925->g_153[i][j][k], "p_925->g_153[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_925->g_166.s0, "p_925->g_166.s0", print_hash_value);
    transparent_crc(p_925->g_166.s1, "p_925->g_166.s1", print_hash_value);
    transparent_crc(p_925->g_166.s2, "p_925->g_166.s2", print_hash_value);
    transparent_crc(p_925->g_166.s3, "p_925->g_166.s3", print_hash_value);
    transparent_crc(p_925->g_166.s4, "p_925->g_166.s4", print_hash_value);
    transparent_crc(p_925->g_166.s5, "p_925->g_166.s5", print_hash_value);
    transparent_crc(p_925->g_166.s6, "p_925->g_166.s6", print_hash_value);
    transparent_crc(p_925->g_166.s7, "p_925->g_166.s7", print_hash_value);
    transparent_crc(p_925->g_166.s8, "p_925->g_166.s8", print_hash_value);
    transparent_crc(p_925->g_166.s9, "p_925->g_166.s9", print_hash_value);
    transparent_crc(p_925->g_166.sa, "p_925->g_166.sa", print_hash_value);
    transparent_crc(p_925->g_166.sb, "p_925->g_166.sb", print_hash_value);
    transparent_crc(p_925->g_166.sc, "p_925->g_166.sc", print_hash_value);
    transparent_crc(p_925->g_166.sd, "p_925->g_166.sd", print_hash_value);
    transparent_crc(p_925->g_166.se, "p_925->g_166.se", print_hash_value);
    transparent_crc(p_925->g_166.sf, "p_925->g_166.sf", print_hash_value);
    transparent_crc(p_925->g_181.s0, "p_925->g_181.s0", print_hash_value);
    transparent_crc(p_925->g_181.s1, "p_925->g_181.s1", print_hash_value);
    transparent_crc(p_925->g_181.s2, "p_925->g_181.s2", print_hash_value);
    transparent_crc(p_925->g_181.s3, "p_925->g_181.s3", print_hash_value);
    transparent_crc(p_925->g_181.s4, "p_925->g_181.s4", print_hash_value);
    transparent_crc(p_925->g_181.s5, "p_925->g_181.s5", print_hash_value);
    transparent_crc(p_925->g_181.s6, "p_925->g_181.s6", print_hash_value);
    transparent_crc(p_925->g_181.s7, "p_925->g_181.s7", print_hash_value);
    transparent_crc(p_925->g_181.s8, "p_925->g_181.s8", print_hash_value);
    transparent_crc(p_925->g_181.s9, "p_925->g_181.s9", print_hash_value);
    transparent_crc(p_925->g_181.sa, "p_925->g_181.sa", print_hash_value);
    transparent_crc(p_925->g_181.sb, "p_925->g_181.sb", print_hash_value);
    transparent_crc(p_925->g_181.sc, "p_925->g_181.sc", print_hash_value);
    transparent_crc(p_925->g_181.sd, "p_925->g_181.sd", print_hash_value);
    transparent_crc(p_925->g_181.se, "p_925->g_181.se", print_hash_value);
    transparent_crc(p_925->g_181.sf, "p_925->g_181.sf", print_hash_value);
    transparent_crc(p_925->g_219, "p_925->g_219", print_hash_value);
    transparent_crc(p_925->g_222.x, "p_925->g_222.x", print_hash_value);
    transparent_crc(p_925->g_222.y, "p_925->g_222.y", print_hash_value);
    transparent_crc(p_925->g_233.x, "p_925->g_233.x", print_hash_value);
    transparent_crc(p_925->g_233.y, "p_925->g_233.y", print_hash_value);
    transparent_crc(p_925->g_233.z, "p_925->g_233.z", print_hash_value);
    transparent_crc(p_925->g_233.w, "p_925->g_233.w", print_hash_value);
    transparent_crc(p_925->g_235.s0, "p_925->g_235.s0", print_hash_value);
    transparent_crc(p_925->g_235.s1, "p_925->g_235.s1", print_hash_value);
    transparent_crc(p_925->g_235.s2, "p_925->g_235.s2", print_hash_value);
    transparent_crc(p_925->g_235.s3, "p_925->g_235.s3", print_hash_value);
    transparent_crc(p_925->g_235.s4, "p_925->g_235.s4", print_hash_value);
    transparent_crc(p_925->g_235.s5, "p_925->g_235.s5", print_hash_value);
    transparent_crc(p_925->g_235.s6, "p_925->g_235.s6", print_hash_value);
    transparent_crc(p_925->g_235.s7, "p_925->g_235.s7", print_hash_value);
    transparent_crc(p_925->g_243, "p_925->g_243", print_hash_value);
    transparent_crc(p_925->g_245, "p_925->g_245", print_hash_value);
    transparent_crc(p_925->g_248, "p_925->g_248", print_hash_value);
    transparent_crc(p_925->g_249, "p_925->g_249", print_hash_value);
    transparent_crc(p_925->g_256.s0, "p_925->g_256.s0", print_hash_value);
    transparent_crc(p_925->g_256.s1, "p_925->g_256.s1", print_hash_value);
    transparent_crc(p_925->g_256.s2, "p_925->g_256.s2", print_hash_value);
    transparent_crc(p_925->g_256.s3, "p_925->g_256.s3", print_hash_value);
    transparent_crc(p_925->g_256.s4, "p_925->g_256.s4", print_hash_value);
    transparent_crc(p_925->g_256.s5, "p_925->g_256.s5", print_hash_value);
    transparent_crc(p_925->g_256.s6, "p_925->g_256.s6", print_hash_value);
    transparent_crc(p_925->g_256.s7, "p_925->g_256.s7", print_hash_value);
    transparent_crc(p_925->g_256.s8, "p_925->g_256.s8", print_hash_value);
    transparent_crc(p_925->g_256.s9, "p_925->g_256.s9", print_hash_value);
    transparent_crc(p_925->g_256.sa, "p_925->g_256.sa", print_hash_value);
    transparent_crc(p_925->g_256.sb, "p_925->g_256.sb", print_hash_value);
    transparent_crc(p_925->g_256.sc, "p_925->g_256.sc", print_hash_value);
    transparent_crc(p_925->g_256.sd, "p_925->g_256.sd", print_hash_value);
    transparent_crc(p_925->g_256.se, "p_925->g_256.se", print_hash_value);
    transparent_crc(p_925->g_256.sf, "p_925->g_256.sf", print_hash_value);
    transparent_crc(p_925->g_264.s0, "p_925->g_264.s0", print_hash_value);
    transparent_crc(p_925->g_264.s1, "p_925->g_264.s1", print_hash_value);
    transparent_crc(p_925->g_264.s2, "p_925->g_264.s2", print_hash_value);
    transparent_crc(p_925->g_264.s3, "p_925->g_264.s3", print_hash_value);
    transparent_crc(p_925->g_264.s4, "p_925->g_264.s4", print_hash_value);
    transparent_crc(p_925->g_264.s5, "p_925->g_264.s5", print_hash_value);
    transparent_crc(p_925->g_264.s6, "p_925->g_264.s6", print_hash_value);
    transparent_crc(p_925->g_264.s7, "p_925->g_264.s7", print_hash_value);
    transparent_crc(p_925->g_296, "p_925->g_296", print_hash_value);
    transparent_crc(p_925->g_327.x, "p_925->g_327.x", print_hash_value);
    transparent_crc(p_925->g_327.y, "p_925->g_327.y", print_hash_value);
    transparent_crc(p_925->g_327.z, "p_925->g_327.z", print_hash_value);
    transparent_crc(p_925->g_327.w, "p_925->g_327.w", print_hash_value);
    transparent_crc(p_925->g_339.x, "p_925->g_339.x", print_hash_value);
    transparent_crc(p_925->g_339.y, "p_925->g_339.y", print_hash_value);
    transparent_crc(p_925->g_339.z, "p_925->g_339.z", print_hash_value);
    transparent_crc(p_925->g_339.w, "p_925->g_339.w", print_hash_value);
    transparent_crc(p_925->g_395, "p_925->g_395", print_hash_value);
    transparent_crc(p_925->g_424.s0, "p_925->g_424.s0", print_hash_value);
    transparent_crc(p_925->g_424.s1, "p_925->g_424.s1", print_hash_value);
    transparent_crc(p_925->g_424.s2, "p_925->g_424.s2", print_hash_value);
    transparent_crc(p_925->g_424.s3, "p_925->g_424.s3", print_hash_value);
    transparent_crc(p_925->g_424.s4, "p_925->g_424.s4", print_hash_value);
    transparent_crc(p_925->g_424.s5, "p_925->g_424.s5", print_hash_value);
    transparent_crc(p_925->g_424.s6, "p_925->g_424.s6", print_hash_value);
    transparent_crc(p_925->g_424.s7, "p_925->g_424.s7", print_hash_value);
    transparent_crc(p_925->g_424.s8, "p_925->g_424.s8", print_hash_value);
    transparent_crc(p_925->g_424.s9, "p_925->g_424.s9", print_hash_value);
    transparent_crc(p_925->g_424.sa, "p_925->g_424.sa", print_hash_value);
    transparent_crc(p_925->g_424.sb, "p_925->g_424.sb", print_hash_value);
    transparent_crc(p_925->g_424.sc, "p_925->g_424.sc", print_hash_value);
    transparent_crc(p_925->g_424.sd, "p_925->g_424.sd", print_hash_value);
    transparent_crc(p_925->g_424.se, "p_925->g_424.se", print_hash_value);
    transparent_crc(p_925->g_424.sf, "p_925->g_424.sf", print_hash_value);
    transparent_crc(p_925->g_439.x, "p_925->g_439.x", print_hash_value);
    transparent_crc(p_925->g_439.y, "p_925->g_439.y", print_hash_value);
    transparent_crc(p_925->g_458.s0, "p_925->g_458.s0", print_hash_value);
    transparent_crc(p_925->g_458.s1, "p_925->g_458.s1", print_hash_value);
    transparent_crc(p_925->g_458.s2, "p_925->g_458.s2", print_hash_value);
    transparent_crc(p_925->g_458.s3, "p_925->g_458.s3", print_hash_value);
    transparent_crc(p_925->g_458.s4, "p_925->g_458.s4", print_hash_value);
    transparent_crc(p_925->g_458.s5, "p_925->g_458.s5", print_hash_value);
    transparent_crc(p_925->g_458.s6, "p_925->g_458.s6", print_hash_value);
    transparent_crc(p_925->g_458.s7, "p_925->g_458.s7", print_hash_value);
    transparent_crc(p_925->g_461.s0, "p_925->g_461.s0", print_hash_value);
    transparent_crc(p_925->g_461.s1, "p_925->g_461.s1", print_hash_value);
    transparent_crc(p_925->g_461.s2, "p_925->g_461.s2", print_hash_value);
    transparent_crc(p_925->g_461.s3, "p_925->g_461.s3", print_hash_value);
    transparent_crc(p_925->g_461.s4, "p_925->g_461.s4", print_hash_value);
    transparent_crc(p_925->g_461.s5, "p_925->g_461.s5", print_hash_value);
    transparent_crc(p_925->g_461.s6, "p_925->g_461.s6", print_hash_value);
    transparent_crc(p_925->g_461.s7, "p_925->g_461.s7", print_hash_value);
    transparent_crc(p_925->g_461.s8, "p_925->g_461.s8", print_hash_value);
    transparent_crc(p_925->g_461.s9, "p_925->g_461.s9", print_hash_value);
    transparent_crc(p_925->g_461.sa, "p_925->g_461.sa", print_hash_value);
    transparent_crc(p_925->g_461.sb, "p_925->g_461.sb", print_hash_value);
    transparent_crc(p_925->g_461.sc, "p_925->g_461.sc", print_hash_value);
    transparent_crc(p_925->g_461.sd, "p_925->g_461.sd", print_hash_value);
    transparent_crc(p_925->g_461.se, "p_925->g_461.se", print_hash_value);
    transparent_crc(p_925->g_461.sf, "p_925->g_461.sf", print_hash_value);
    transparent_crc(p_925->g_483, "p_925->g_483", print_hash_value);
    transparent_crc(p_925->g_501.x, "p_925->g_501.x", print_hash_value);
    transparent_crc(p_925->g_501.y, "p_925->g_501.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_925->g_551[i], "p_925->g_551[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_925->g_553[i][j], "p_925->g_553[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_925->g_616[i], "p_925->g_616[i]", print_hash_value);

    }
    transparent_crc(p_925->g_624.s0, "p_925->g_624.s0", print_hash_value);
    transparent_crc(p_925->g_624.s1, "p_925->g_624.s1", print_hash_value);
    transparent_crc(p_925->g_624.s2, "p_925->g_624.s2", print_hash_value);
    transparent_crc(p_925->g_624.s3, "p_925->g_624.s3", print_hash_value);
    transparent_crc(p_925->g_624.s4, "p_925->g_624.s4", print_hash_value);
    transparent_crc(p_925->g_624.s5, "p_925->g_624.s5", print_hash_value);
    transparent_crc(p_925->g_624.s6, "p_925->g_624.s6", print_hash_value);
    transparent_crc(p_925->g_624.s7, "p_925->g_624.s7", print_hash_value);
    transparent_crc(p_925->g_634.x, "p_925->g_634.x", print_hash_value);
    transparent_crc(p_925->g_634.y, "p_925->g_634.y", print_hash_value);
    transparent_crc(p_925->g_643.x, "p_925->g_643.x", print_hash_value);
    transparent_crc(p_925->g_643.y, "p_925->g_643.y", print_hash_value);
    transparent_crc(p_925->g_643.z, "p_925->g_643.z", print_hash_value);
    transparent_crc(p_925->g_643.w, "p_925->g_643.w", print_hash_value);
    transparent_crc(p_925->g_645.s0, "p_925->g_645.s0", print_hash_value);
    transparent_crc(p_925->g_645.s1, "p_925->g_645.s1", print_hash_value);
    transparent_crc(p_925->g_645.s2, "p_925->g_645.s2", print_hash_value);
    transparent_crc(p_925->g_645.s3, "p_925->g_645.s3", print_hash_value);
    transparent_crc(p_925->g_645.s4, "p_925->g_645.s4", print_hash_value);
    transparent_crc(p_925->g_645.s5, "p_925->g_645.s5", print_hash_value);
    transparent_crc(p_925->g_645.s6, "p_925->g_645.s6", print_hash_value);
    transparent_crc(p_925->g_645.s7, "p_925->g_645.s7", print_hash_value);
    transparent_crc(p_925->g_645.s8, "p_925->g_645.s8", print_hash_value);
    transparent_crc(p_925->g_645.s9, "p_925->g_645.s9", print_hash_value);
    transparent_crc(p_925->g_645.sa, "p_925->g_645.sa", print_hash_value);
    transparent_crc(p_925->g_645.sb, "p_925->g_645.sb", print_hash_value);
    transparent_crc(p_925->g_645.sc, "p_925->g_645.sc", print_hash_value);
    transparent_crc(p_925->g_645.sd, "p_925->g_645.sd", print_hash_value);
    transparent_crc(p_925->g_645.se, "p_925->g_645.se", print_hash_value);
    transparent_crc(p_925->g_645.sf, "p_925->g_645.sf", print_hash_value);
    transparent_crc(p_925->g_666.x, "p_925->g_666.x", print_hash_value);
    transparent_crc(p_925->g_666.y, "p_925->g_666.y", print_hash_value);
    transparent_crc(p_925->g_668.x, "p_925->g_668.x", print_hash_value);
    transparent_crc(p_925->g_668.y, "p_925->g_668.y", print_hash_value);
    transparent_crc(p_925->g_717, "p_925->g_717", print_hash_value);
    transparent_crc(p_925->g_718.x, "p_925->g_718.x", print_hash_value);
    transparent_crc(p_925->g_718.y, "p_925->g_718.y", print_hash_value);
    transparent_crc(p_925->g_796.s0, "p_925->g_796.s0", print_hash_value);
    transparent_crc(p_925->g_796.s1, "p_925->g_796.s1", print_hash_value);
    transparent_crc(p_925->g_796.s2, "p_925->g_796.s2", print_hash_value);
    transparent_crc(p_925->g_796.s3, "p_925->g_796.s3", print_hash_value);
    transparent_crc(p_925->g_796.s4, "p_925->g_796.s4", print_hash_value);
    transparent_crc(p_925->g_796.s5, "p_925->g_796.s5", print_hash_value);
    transparent_crc(p_925->g_796.s6, "p_925->g_796.s6", print_hash_value);
    transparent_crc(p_925->g_796.s7, "p_925->g_796.s7", print_hash_value);
    transparent_crc(p_925->g_796.s8, "p_925->g_796.s8", print_hash_value);
    transparent_crc(p_925->g_796.s9, "p_925->g_796.s9", print_hash_value);
    transparent_crc(p_925->g_796.sa, "p_925->g_796.sa", print_hash_value);
    transparent_crc(p_925->g_796.sb, "p_925->g_796.sb", print_hash_value);
    transparent_crc(p_925->g_796.sc, "p_925->g_796.sc", print_hash_value);
    transparent_crc(p_925->g_796.sd, "p_925->g_796.sd", print_hash_value);
    transparent_crc(p_925->g_796.se, "p_925->g_796.se", print_hash_value);
    transparent_crc(p_925->g_796.sf, "p_925->g_796.sf", print_hash_value);
    transparent_crc(p_925->g_813.s0, "p_925->g_813.s0", print_hash_value);
    transparent_crc(p_925->g_813.s1, "p_925->g_813.s1", print_hash_value);
    transparent_crc(p_925->g_813.s2, "p_925->g_813.s2", print_hash_value);
    transparent_crc(p_925->g_813.s3, "p_925->g_813.s3", print_hash_value);
    transparent_crc(p_925->g_813.s4, "p_925->g_813.s4", print_hash_value);
    transparent_crc(p_925->g_813.s5, "p_925->g_813.s5", print_hash_value);
    transparent_crc(p_925->g_813.s6, "p_925->g_813.s6", print_hash_value);
    transparent_crc(p_925->g_813.s7, "p_925->g_813.s7", print_hash_value);
    transparent_crc(p_925->g_813.s8, "p_925->g_813.s8", print_hash_value);
    transparent_crc(p_925->g_813.s9, "p_925->g_813.s9", print_hash_value);
    transparent_crc(p_925->g_813.sa, "p_925->g_813.sa", print_hash_value);
    transparent_crc(p_925->g_813.sb, "p_925->g_813.sb", print_hash_value);
    transparent_crc(p_925->g_813.sc, "p_925->g_813.sc", print_hash_value);
    transparent_crc(p_925->g_813.sd, "p_925->g_813.sd", print_hash_value);
    transparent_crc(p_925->g_813.se, "p_925->g_813.se", print_hash_value);
    transparent_crc(p_925->g_813.sf, "p_925->g_813.sf", print_hash_value);
    transparent_crc(p_925->g_818.x, "p_925->g_818.x", print_hash_value);
    transparent_crc(p_925->g_818.y, "p_925->g_818.y", print_hash_value);
    transparent_crc(p_925->g_818.z, "p_925->g_818.z", print_hash_value);
    transparent_crc(p_925->g_818.w, "p_925->g_818.w", print_hash_value);
    transparent_crc(p_925->g_830.s0, "p_925->g_830.s0", print_hash_value);
    transparent_crc(p_925->g_830.s1, "p_925->g_830.s1", print_hash_value);
    transparent_crc(p_925->g_830.s2, "p_925->g_830.s2", print_hash_value);
    transparent_crc(p_925->g_830.s3, "p_925->g_830.s3", print_hash_value);
    transparent_crc(p_925->g_830.s4, "p_925->g_830.s4", print_hash_value);
    transparent_crc(p_925->g_830.s5, "p_925->g_830.s5", print_hash_value);
    transparent_crc(p_925->g_830.s6, "p_925->g_830.s6", print_hash_value);
    transparent_crc(p_925->g_830.s7, "p_925->g_830.s7", print_hash_value);
    transparent_crc(p_925->g_831.s0, "p_925->g_831.s0", print_hash_value);
    transparent_crc(p_925->g_831.s1, "p_925->g_831.s1", print_hash_value);
    transparent_crc(p_925->g_831.s2, "p_925->g_831.s2", print_hash_value);
    transparent_crc(p_925->g_831.s3, "p_925->g_831.s3", print_hash_value);
    transparent_crc(p_925->g_831.s4, "p_925->g_831.s4", print_hash_value);
    transparent_crc(p_925->g_831.s5, "p_925->g_831.s5", print_hash_value);
    transparent_crc(p_925->g_831.s6, "p_925->g_831.s6", print_hash_value);
    transparent_crc(p_925->g_831.s7, "p_925->g_831.s7", print_hash_value);
    transparent_crc(p_925->g_842.x, "p_925->g_842.x", print_hash_value);
    transparent_crc(p_925->g_842.y, "p_925->g_842.y", print_hash_value);
    transparent_crc(p_925->g_843.s0, "p_925->g_843.s0", print_hash_value);
    transparent_crc(p_925->g_843.s1, "p_925->g_843.s1", print_hash_value);
    transparent_crc(p_925->g_843.s2, "p_925->g_843.s2", print_hash_value);
    transparent_crc(p_925->g_843.s3, "p_925->g_843.s3", print_hash_value);
    transparent_crc(p_925->g_843.s4, "p_925->g_843.s4", print_hash_value);
    transparent_crc(p_925->g_843.s5, "p_925->g_843.s5", print_hash_value);
    transparent_crc(p_925->g_843.s6, "p_925->g_843.s6", print_hash_value);
    transparent_crc(p_925->g_843.s7, "p_925->g_843.s7", print_hash_value);
    transparent_crc(p_925->g_844.s0, "p_925->g_844.s0", print_hash_value);
    transparent_crc(p_925->g_844.s1, "p_925->g_844.s1", print_hash_value);
    transparent_crc(p_925->g_844.s2, "p_925->g_844.s2", print_hash_value);
    transparent_crc(p_925->g_844.s3, "p_925->g_844.s3", print_hash_value);
    transparent_crc(p_925->g_844.s4, "p_925->g_844.s4", print_hash_value);
    transparent_crc(p_925->g_844.s5, "p_925->g_844.s5", print_hash_value);
    transparent_crc(p_925->g_844.s6, "p_925->g_844.s6", print_hash_value);
    transparent_crc(p_925->g_844.s7, "p_925->g_844.s7", print_hash_value);
    transparent_crc(p_925->g_845.x, "p_925->g_845.x", print_hash_value);
    transparent_crc(p_925->g_845.y, "p_925->g_845.y", print_hash_value);
    transparent_crc(p_925->g_845.z, "p_925->g_845.z", print_hash_value);
    transparent_crc(p_925->g_845.w, "p_925->g_845.w", print_hash_value);
    transparent_crc(p_925->g_858.s0, "p_925->g_858.s0", print_hash_value);
    transparent_crc(p_925->g_858.s1, "p_925->g_858.s1", print_hash_value);
    transparent_crc(p_925->g_858.s2, "p_925->g_858.s2", print_hash_value);
    transparent_crc(p_925->g_858.s3, "p_925->g_858.s3", print_hash_value);
    transparent_crc(p_925->g_858.s4, "p_925->g_858.s4", print_hash_value);
    transparent_crc(p_925->g_858.s5, "p_925->g_858.s5", print_hash_value);
    transparent_crc(p_925->g_858.s6, "p_925->g_858.s6", print_hash_value);
    transparent_crc(p_925->g_858.s7, "p_925->g_858.s7", print_hash_value);
    transparent_crc(p_925->g_858.s8, "p_925->g_858.s8", print_hash_value);
    transparent_crc(p_925->g_858.s9, "p_925->g_858.s9", print_hash_value);
    transparent_crc(p_925->g_858.sa, "p_925->g_858.sa", print_hash_value);
    transparent_crc(p_925->g_858.sb, "p_925->g_858.sb", print_hash_value);
    transparent_crc(p_925->g_858.sc, "p_925->g_858.sc", print_hash_value);
    transparent_crc(p_925->g_858.sd, "p_925->g_858.sd", print_hash_value);
    transparent_crc(p_925->g_858.se, "p_925->g_858.se", print_hash_value);
    transparent_crc(p_925->g_858.sf, "p_925->g_858.sf", print_hash_value);
    transparent_crc(p_925->g_879.x, "p_925->g_879.x", print_hash_value);
    transparent_crc(p_925->g_879.y, "p_925->g_879.y", print_hash_value);
    transparent_crc(p_925->g_882.s0, "p_925->g_882.s0", print_hash_value);
    transparent_crc(p_925->g_882.s1, "p_925->g_882.s1", print_hash_value);
    transparent_crc(p_925->g_882.s2, "p_925->g_882.s2", print_hash_value);
    transparent_crc(p_925->g_882.s3, "p_925->g_882.s3", print_hash_value);
    transparent_crc(p_925->g_882.s4, "p_925->g_882.s4", print_hash_value);
    transparent_crc(p_925->g_882.s5, "p_925->g_882.s5", print_hash_value);
    transparent_crc(p_925->g_882.s6, "p_925->g_882.s6", print_hash_value);
    transparent_crc(p_925->g_882.s7, "p_925->g_882.s7", print_hash_value);
    transparent_crc(p_925->g_882.s8, "p_925->g_882.s8", print_hash_value);
    transparent_crc(p_925->g_882.s9, "p_925->g_882.s9", print_hash_value);
    transparent_crc(p_925->g_882.sa, "p_925->g_882.sa", print_hash_value);
    transparent_crc(p_925->g_882.sb, "p_925->g_882.sb", print_hash_value);
    transparent_crc(p_925->g_882.sc, "p_925->g_882.sc", print_hash_value);
    transparent_crc(p_925->g_882.sd, "p_925->g_882.sd", print_hash_value);
    transparent_crc(p_925->g_882.se, "p_925->g_882.se", print_hash_value);
    transparent_crc(p_925->g_882.sf, "p_925->g_882.sf", print_hash_value);
    transparent_crc(p_925->g_899, "p_925->g_899", print_hash_value);
    transparent_crc(p_925->v_collective, "p_925->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 31; i++)
            transparent_crc(p_925->g_special_values[i + 31 * get_linear_group_id()], "p_925->g_special_values[i + 31 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 31; i++)
            transparent_crc(p_925->l_special_values[i], "p_925->l_special_values[i]", print_hash_value);
    transparent_crc(p_925->l_comm_values[get_linear_local_id()], "p_925->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_925->g_comm_values[get_linear_group_id() * 58 + get_linear_local_id()], "p_925->g_comm_values[get_linear_group_id() * 58 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
