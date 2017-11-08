// --atomics 60 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 1,42,98 -l 1,6,2
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

__constant uint32_t permutations[10][12] = {
{7,9,6,2,10,11,5,8,1,0,3,4}, // permutation 0
{11,4,5,6,7,0,3,8,2,9,10,1}, // permutation 1
{8,3,2,10,7,1,6,4,5,11,9,0}, // permutation 2
{8,11,2,1,5,10,6,9,3,4,0,7}, // permutation 3
{7,2,0,3,10,11,9,6,4,5,1,8}, // permutation 4
{1,4,11,3,8,0,5,7,10,9,6,2}, // permutation 5
{2,0,5,4,9,8,11,7,6,10,1,3}, // permutation 6
{8,5,0,1,6,2,9,3,11,7,10,4}, // permutation 7
{11,0,5,8,7,9,2,4,3,1,10,6}, // permutation 8
{9,7,3,11,0,5,1,8,2,6,4,10} // permutation 9
};

// Seed: 1688829593

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int16_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int8_t * f3;
};

struct S1 {
    VECTOR(int32_t, 2) g_4;
    int8_t g_11;
    int32_t g_117;
    int32_t g_120[6];
    volatile int32_t g_122[9][7];
    volatile int32_t *g_121;
    int32_t *g_126;
    uint8_t g_164;
    int8_t g_167;
    int8_t g_168;
    int32_t *g_171;
    int32_t ** volatile g_170;
    int32_t g_173[6];
    VECTOR(int32_t, 2) g_195;
    int16_t g_197;
    int16_t *g_196;
    uint8_t g_213;
    uint8_t *g_226;
    uint8_t * volatile * volatile g_225;
    uint8_t * volatile * volatile * volatile g_227[4][6][10];
    uint8_t * volatile * volatile * volatile g_228;
    uint8_t *** volatile g_230;
    uint8_t *** volatile g_231;
    int64_t g_243;
    uint64_t g_297;
    volatile VECTOR(uint8_t, 16) g_312;
    volatile union U0 g_313;
    uint32_t g_375;
    VECTOR(uint16_t, 4) g_386;
    VECTOR(uint16_t, 16) g_387;
    volatile VECTOR(uint32_t, 16) g_389;
    int32_t g_408;
    volatile union U0 g_425;
    VECTOR(int32_t, 16) g_437;
    volatile union U0 g_442;
    uint64_t g_461;
    int32_t ** volatile g_494;
    VECTOR(uint64_t, 4) g_501;
    int64_t g_509;
    volatile VECTOR(int8_t, 2) g_531;
    volatile VECTOR(int8_t, 2) g_558;
    uint32_t g_561;
    volatile int16_t * volatile *g_570;
    volatile int16_t * volatile **g_569;
    VECTOR(uint32_t, 8) g_587;
    volatile union U0 g_604;
    union U0 g_605;
    VECTOR(uint64_t, 2) g_631;
    volatile VECTOR(uint64_t, 16) g_632;
    VECTOR(uint64_t, 4) g_634;
    volatile VECTOR(uint64_t, 2) g_635;
    int64_t **g_642;
    int64_t *** volatile g_641[6];
    int64_t *** volatile g_643;
    volatile VECTOR(int16_t, 4) g_644;
    volatile int32_t * volatile *g_657;
    VECTOR(uint8_t, 4) g_659;
    VECTOR(uint8_t, 4) g_661;
    VECTOR(int16_t, 2) g_666;
    VECTOR(int16_t, 4) g_674;
    VECTOR(int16_t, 16) g_675;
    VECTOR(int8_t, 4) g_682;
    union U0 g_697;
    volatile VECTOR(uint8_t, 16) g_714;
    VECTOR(uint64_t, 4) g_715;
    VECTOR(uint8_t, 16) g_725;
    int16_t **g_740;
    int32_t ***g_776;
    VECTOR(int64_t, 4) g_807;
    VECTOR(int16_t, 4) g_815;
    VECTOR(uint8_t, 16) g_817;
    volatile VECTOR(uint8_t, 8) g_823;
    VECTOR(uint8_t, 2) g_824;
    VECTOR(int16_t, 2) g_829;
    volatile uint16_t g_876;
    uint64_t g_948;
    VECTOR(int32_t, 8) g_953;
    int32_t *g_970;
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
uint64_t  func_1(struct S1 * p_989);
int16_t  func_8(int8_t * p_9, struct S1 * p_989);
int32_t  func_94(int64_t  p_95, uint16_t  p_96, uint32_t  p_97, struct S1 * p_989);
uint32_t  func_104(int32_t  p_105, uint32_t  p_106, struct S1 * p_989);
int32_t  func_107(uint64_t  p_108, uint16_t  p_109, int8_t * p_110, int32_t  p_111, struct S1 * p_989);
int8_t  func_131(int8_t  p_132, uint8_t  p_133, struct S1 * p_989);
int32_t  func_138(int64_t  p_139, uint8_t  p_140, int32_t ** p_141, struct S1 * p_989);
int32_t ** func_143(int16_t * p_144, uint8_t  p_145, uint64_t  p_146, struct S1 * p_989);
int16_t * func_147(int16_t * p_148, int64_t  p_149, struct S1 * p_989);
int16_t * func_150(int32_t  p_151, struct S1 * p_989);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_989->g_4 p_989->g_11 p_989->g_comm_values p_989->l_comm_values p_989->g_121 p_989->g_126 p_989->g_122 p_989->g_167 p_989->g_170 p_989->g_196 p_989->g_195 p_989->g_225 p_989->g_228 p_989->g_243 p_989->g_173 p_989->g_197 p_989->g_168 p_989->g_164 p_989->g_297 p_989->g_171 p_989->g_408 p_989->g_387 p_989->g_425 p_989->g_442.f0 p_989->g_461 p_989->g_494 p_989->g_386 p_989->g_569 p_989->g_389 p_989->g_558 p_989->g_604 p_989->g_605 p_989->g_604.f0 p_989->g_587 p_989->g_643 p_989->g_657 p_989->g_437 p_989->g_425.f0 p_989->g_661 p_989->g_697 p_989->g_120 p_989->g_631 p_989->g_117 p_989->g_659 p_989->g_807 p_989->g_815 p_989->g_817 p_989->g_682 p_989->g_634 p_989->g_675 p_989->g_725 p_989->g_715 p_989->g_823 p_989->g_824 p_989->g_829 p_989->g_509 p_989->g_501 p_989->g_666 p_989->g_674 p_989->g_876 p_989->g_948 p_989->g_953 p_989->g_531 p_989->g_213
 * writes: p_989->g_11 p_989->g_117 p_989->g_120 p_989->g_126 p_989->g_164 p_989->g_167 p_989->g_168 p_989->g_171 p_989->g_173 p_989->g_213 p_989->g_122 p_989->g_225 p_989->g_243 p_989->g_197 p_989->g_297 p_989->g_195 p_989->g_408 p_989->g_226 p_989->g_387 p_989->g_461 p_989->g_561 p_989->g_509 p_989->g_642 p_989->g_587 p_989->l_comm_values p_989->g_605.f1 p_989->g_740 p_989->g_776 p_989->g_4 p_989->g_comm_values p_989->g_666 p_989->g_876 p_989->g_948 p_989->g_970
 */
uint64_t  func_1(struct S1 * p_989)
{ /* block id: 4 */
    int64_t l_5 = 0x4DC345FE46C2E7CCL;
    int8_t *l_10 = &p_989->g_11;
    VECTOR(int16_t, 16) l_812 = (VECTOR(int16_t, 16))(0x20F2L, (VECTOR(int16_t, 4))(0x20F2L, (VECTOR(int16_t, 2))(0x20F2L, 0x62CEL), 0x62CEL), 0x62CEL, 0x20F2L, 0x62CEL, (VECTOR(int16_t, 2))(0x20F2L, 0x62CEL), (VECTOR(int16_t, 2))(0x20F2L, 0x62CEL), 0x20F2L, 0x62CEL, 0x20F2L, 0x62CEL);
    VECTOR(int16_t, 2) l_813 = (VECTOR(int16_t, 2))(0x0A9BL, 3L);
    VECTOR(int16_t, 2) l_814 = (VECTOR(int16_t, 2))(0L, 1L);
    VECTOR(int8_t, 2) l_816 = (VECTOR(int8_t, 2))(0x40L, 0x3AL);
    VECTOR(int16_t, 2) l_818 = (VECTOR(int16_t, 2))(0x65E1L, 0x6D83L);
    uint64_t *l_821[9][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t l_822 = (-5L);
    int8_t l_865 = (-1L);
    int32_t l_868 = (-9L);
    int32_t **l_869 = &p_989->g_171;
    uint8_t l_873 = 255UL;
    int32_t l_875 = 7L;
    int32_t l_906 = 0x1B70BB42L;
    int32_t l_907 = 0L;
    int32_t l_908 = 0L;
    int32_t l_909 = (-4L);
    int32_t l_911 = 0L;
    int32_t l_912 = 0x2F40E9DBL;
    int32_t l_913 = 1L;
    int32_t l_914 = 0x0980BBE3L;
    int32_t *l_969 = (void*)0;
    int32_t **l_968[7][8] = {{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969},{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969},{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969},{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969},{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969},{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969},{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969}};
    uint32_t l_973[10][1][6] = {{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}},{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}},{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}},{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}},{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}},{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}},{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}},{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}},{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}},{{0x12239332L,0x40371692L,0x12239332L,0x12239332L,0x40371692L,0x12239332L}}};
    uint16_t l_976 = 0x29B8L;
    int16_t l_977 = 0x4C7FL;
    int32_t *l_978 = &p_989->g_120[4];
    int32_t *l_979 = &l_908;
    int32_t *l_980[6];
    uint8_t l_981 = 0x5BL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_980[i] = &p_989->g_120[1];
    if ((((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_989->g_4.yxyxyyxy)).s25)).hi, ((l_5 == ((safe_rshift_func_uint16_t_u_s(0UL, func_8(l_10, p_989))) , p_989->g_659.w)) == (safe_mod_func_int16_t_s_s((((p_989->g_437.s9 || (((((VECTOR(int64_t, 4))(p_989->g_807.wzxy)).x == (l_822 = ((safe_mul_func_int8_t_s_s((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x1AF8L, ((3L & (safe_div_func_int32_t_s_s((((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(l_812.saa89)), ((VECTOR(int16_t, 2))((-4L), 0x198AL)).xyxx, ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_813.xyxx)).odd)))).yxxxxyyyxxxyyyxx, ((VECTOR(int16_t, 4))(l_814.yyxx)).zzzxzwyxxxywyyzz))).s844b))).odd, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(p_989->g_815.zxyyzywwzwyzxyzw)).hi, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(l_816.yyxy)).ywxywwxw, ((VECTOR(uint8_t, 4))(p_989->g_817.sea6f)).wwywxzyw))).s1610015567630414)).odd))).lo)).wwxzwyzw, ((VECTOR(int16_t, 2))(1L, 4L)).yyyyyxyy, ((VECTOR(int16_t, 2))(l_818.yx)).yxyyyxyx))).s63))).xyxxxyyy, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(0x6CB2L, 3L, 0x58EFL, 0L))))).wxxzwzyx))).s7 >= (safe_mod_func_int64_t_s_s(0x4556472CD847B3F0L, l_816.y))), p_989->g_682.z))) != GROUP_DIVERGE(0, 1)), 6L, (-1L), l_812.sf, 0x3E8FL, 1L, 0x5C40L, p_989->g_682.w, 0x6C9DL, l_818.x, 0x39A3L, ((VECTOR(int16_t, 4))(0x3F71L)))).odd)).s4 , (-2L)) || FAKE_DIVERGE(p_989->local_1_offset, get_local_id(1), 10)) & p_989->g_634.y), p_989->g_675.sf)) ^ p_989->g_634.y))) >= 1UL) , p_989->g_807.x)) > p_989->g_682.x) ^ l_818.x), p_989->g_725.s4))))) , p_989->g_715.w) <= 0UL))
    { /* block id: 325 */
        int32_t *l_834[3];
        VECTOR(uint32_t, 4) l_840 = (VECTOR(uint32_t, 4))(0x0AF599B3L, (VECTOR(uint32_t, 2))(0x0AF599B3L, 4294967288UL), 4294967288UL);
        int16_t *l_866 = (void*)0;
        int16_t *l_867[2];
        uint16_t *l_870 = (void*)0;
        uint16_t *l_871[1][9][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint32_t *l_872[2];
        uint8_t l_879 = 0x4FL;
        int32_t l_891 = 0L;
        int64_t l_892 = 0x6030250437A55311L;
        int16_t l_905 = 2L;
        uint64_t l_915 = 0xE5A2AFC9B1323E2DL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_834[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_867[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_872[i] = (void*)0;
        if (((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(0x4AL, 0L)).yxyxyyyy, ((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 4))(p_989->g_823.s6404)).wxzzywywwwxzxyww, ((VECTOR(uint8_t, 8))(p_989->g_824.xxxxxxxy)).s0740363702511364))).even))).s76)).hi >= (p_989->g_386.x <= (safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(p_989->g_829.yxxyyxxxyxyyxyyx)).s61, ((VECTOR(int16_t, 2))(0x4F38L, 0x0018L))))), 0L, 0x13C9L)).even)).even , (((p_989->g_387.sc = (safe_mod_func_uint8_t_u_u((((p_989->g_509 <= ((safe_mod_func_uint16_t_u_u(p_989->g_297, (((p_989->g_173[2] = l_818.x) , (safe_unary_minus_func_uint16_t_u(FAKE_DIVERGE(p_989->global_2_offset, get_global_id(2), 10)))) && (safe_div_func_uint64_t_u_u((l_868 |= (safe_rshift_func_int8_t_s_u(((((VECTOR(uint32_t, 16))(l_840.yyxzywxwzwyzxwyz)).s7 && (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_989->local_2_offset, get_local_id(2), 10), (safe_mod_func_uint32_t_u_u(((((p_989->g_666.y = (safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((((*l_10) = ((!(safe_add_func_int32_t_s_s((p_989->g_408 = (safe_mul_func_uint8_t_u_u(((((((~0x548A45F05B7C5351L) > (p_989->g_comm_values[p_989->tid] = (safe_add_func_uint32_t_u_u((((((p_989->g_4.y = ((safe_mod_func_uint64_t_u_u(l_818.y, p_989->g_682.x)) != (safe_lshift_func_int16_t_s_s(((*p_989->g_196) = l_813.y), (safe_rshift_func_uint16_t_u_s(((void*)0 == &p_989->g_297), 10)))))) & l_818.x) < 0x57465AEAL) <= l_814.x) <= 0x4EL), p_989->g_120[4])))) >= l_812.s3) & (-10L)) >= l_865) != GROUP_DIVERGE(1, 1)), p_989->g_661.x))), l_812.s4))) , l_812.sc)) , 0x4BB6L), FAKE_DIVERGE(p_989->global_2_offset, get_global_id(2), 10))) | (-1L)), p_989->g_195.y)), l_814.x)), p_989->g_631.x))) , p_989->g_164) < p_989->g_386.w) , 4294967295UL), p_989->g_501.z))))) && p_989->g_666.y), 6))), p_989->g_387.s0))))) , 1L)) , l_869) != &l_834[0]), p_989->l_comm_values[(safe_mod_func_uint32_t_u_u(p_989->tid, 12))]))) & p_989->g_674.x) , l_872[0])) == l_872[0]), 3)) , l_873) == 0L), p_989->g_725.s2)))) & 0x57L))
        { /* block id: 335 */
            int32_t l_874[8];
            int i;
            for (i = 0; i < 8; i++)
                l_874[i] = 0x6AF53874L;
            p_989->g_876--;
        }
        else
        { /* block id: 337 */
            uint16_t l_880 = 1UL;
            int32_t l_900 = 0x7876ED56L;
            int32_t l_903 = 0L;
            VECTOR(int32_t, 16) l_904 = (VECTOR(int32_t, 16))(0x219F0FCAL, (VECTOR(int32_t, 4))(0x219F0FCAL, (VECTOR(int32_t, 2))(0x219F0FCAL, 6L), 6L), 6L, 0x219F0FCAL, 6L, (VECTOR(int32_t, 2))(0x219F0FCAL, 6L), (VECTOR(int32_t, 2))(0x219F0FCAL, 6L), 0x219F0FCAL, 6L, 0x219F0FCAL, 6L);
            int16_t l_910 = 0x7F45L;
            int i;
            l_880 &= l_879;
            for (p_989->g_117 = (-9); (p_989->g_117 > 22); p_989->g_117 = safe_add_func_uint8_t_u_u(p_989->g_117, 7))
            { /* block id: 341 */
                int64_t l_899 = 0x1BC1A4CFE079A3D7L;
                uint32_t **l_902 = &l_872[0];
                uint32_t ***l_901 = &l_902;
                (*l_901) = (((safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((l_880 >= 0x6D6F29180233C3EFL), l_891)), l_892)), 6)) < (safe_div_func_uint16_t_u_u((p_989->g_387.s2 = ((l_880 < 0x120EL) < ((p_989->g_425 , (safe_div_func_int8_t_s_s((-8L), (safe_lshift_func_int8_t_s_s(l_899, l_900))))) , GROUP_DIVERGE(0, 1)))), (-1L)))), p_989->g_659.w)) == p_989->g_661.w) , (void*)0);
            }
            l_915--;
        }
        if ((atomic_inc(&p_989->l_atomic_input[18]) == 8))
        { /* block id: 348 */
            int8_t l_918 = 0x5CL;
            int32_t l_919[4] = {0x3A1BA679L,0x3A1BA679L,0x3A1BA679L,0x3A1BA679L};
            VECTOR(uint16_t, 8) l_920 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65527UL), 65527UL), 65527UL, 0UL, 65527UL);
            VECTOR(uint16_t, 8) l_921 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65528UL), 65528UL), 65528UL, 8UL, 65528UL);
            uint64_t l_924 = 18446744073709551615UL;
            uint64_t *l_923 = &l_924;
            uint64_t **l_922 = &l_923;
            int32_t *l_925 = (void*)0;
            int32_t *l_926 = (void*)0;
            int32_t l_942 = 0x6C4279DAL;
            int64_t l_943 = (-5L);
            int32_t l_944 = 2L;
            uint64_t l_945 = 0x8ADCEEDE880F02CAL;
            int i;
            l_922 = ((l_918 , l_919[2]) , (((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(l_920.s30)).yxxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_921.s0474457441013376)).s2c07))))).x , (void*)0));
            l_926 = l_925;
            for (l_924 = 0; (l_924 >= 47); l_924 = safe_add_func_uint16_t_u_u(l_924, 9))
            { /* block id: 353 */
                int32_t l_929 = 0L;
                l_929 &= (-1L);
                for (l_929 = (-10); (l_929 < 28); l_929 = safe_add_func_uint64_t_u_u(l_929, 1))
                { /* block id: 357 */
                    int32_t l_932 = 0L;
                    for (l_932 = 0; (l_932 >= 20); l_932++)
                    { /* block id: 360 */
                        int32_t l_935 = 0x2F2699E7L;
                        int8_t l_936 = 0x33L;
                        int64_t l_937 = (-4L);
                        int64_t l_938 = (-5L);
                        int64_t l_939 = 0x5DBA8F03A913278FL;
                        int32_t l_941 = 0x26F7190EL;
                        int32_t *l_940[3][6][3] = {{{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941}},{{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941}},{{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941},{&l_941,(void*)0,&l_941}}};
                        int i, j, k;
                        l_940[2][0][0] = (((l_936 |= (l_935 = 0L)) , (FAKE_DIVERGE(p_989->group_2_offset, get_group_id(2), 10) , l_937)) , ((l_919[2] = l_938) , (l_939 , (l_926 = (l_925 = (void*)0)))));
                    }
                }
            }
            --l_945;
            unsigned int result = 0;
            result += l_918;
            int l_919_i0;
            for (l_919_i0 = 0; l_919_i0 < 4; l_919_i0++) {
                result += l_919[l_919_i0];
            }
            result += l_920.s7;
            result += l_920.s6;
            result += l_920.s5;
            result += l_920.s4;
            result += l_920.s3;
            result += l_920.s2;
            result += l_920.s1;
            result += l_920.s0;
            result += l_921.s7;
            result += l_921.s6;
            result += l_921.s5;
            result += l_921.s4;
            result += l_921.s3;
            result += l_921.s2;
            result += l_921.s1;
            result += l_921.s0;
            result += l_924;
            result += l_942;
            result += l_943;
            result += l_944;
            result += l_945;
            atomic_add(&p_989->l_special_values[18], result);
        }
        else
        { /* block id: 371 */
            (1 + 1);
        }
        return p_989->g_715.w;
    }
    else
    { /* block id: 375 */
        ++p_989->g_948;
        (*p_989->g_121) ^= (((void*)0 != &p_989->g_494) || (safe_lshift_func_uint8_t_u_s((l_821[8][0] == (void*)0), 6)));
    }
    (**p_989->g_657) = (((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(0x24B9152DL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_989->g_953.s14)))), 0x2C4BAE98L, (2UL >= (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(0x12B8L, p_989->g_604.f0)) , ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(p_989->g_631.y, (((p_989->g_970 = &l_912) != &p_989->g_117) , (((0x38L <= (safe_lshift_func_int16_t_s_u(l_973[8][0][4], 13))) == (+(safe_lshift_func_int8_t_s_s(((*l_10) = p_989->g_531.x), p_989->g_824.x)))) , l_976)))), l_813.y)) | p_989->g_815.x), (*p_989->g_196))), 0xA4L)) != l_977)), 14)), l_865))), 0x384AA014L, 0x16EFE3E5L, 1L)).even, ((VECTOR(uint32_t, 4))(0x8B16B3E9L))))).x | 0x3B79BB5274249481L);
    l_981++;
    for (p_989->g_213 = 0; (p_989->g_213 <= 36); p_989->g_213++)
    { /* block id: 385 */
        uint16_t l_986 = 1UL;
        l_986++;
        return p_989->g_674.x;
    }
    return p_989->g_213;
}


/* ------------------------------------------ */
/* 
 * reads : p_989->g_11 p_989->g_comm_values p_989->l_comm_values p_989->g_121 p_989->g_126 p_989->g_122 p_989->g_4 p_989->g_167 p_989->g_170 p_989->g_196 p_989->g_195 p_989->g_225 p_989->g_228 p_989->g_243 p_989->g_173 p_989->g_197 p_989->g_168 p_989->g_164 p_989->g_297 p_989->g_171 p_989->g_408 p_989->g_387 p_989->g_425 p_989->g_442.f0 p_989->g_461 p_989->g_494 p_989->g_386 p_989->g_569 p_989->g_389 p_989->g_558 p_989->g_604 p_989->g_605 p_989->g_604.f0 p_989->g_587 p_989->g_643 p_989->g_657 p_989->g_437 p_989->g_425.f0 p_989->g_661 p_989->g_697 p_989->g_120 p_989->g_631 p_989->g_117
 * writes: p_989->g_11 p_989->g_117 p_989->g_120 p_989->g_126 p_989->g_164 p_989->g_167 p_989->g_168 p_989->g_171 p_989->g_173 p_989->g_213 p_989->g_122 p_989->g_225 p_989->g_243 p_989->g_197 p_989->g_297 p_989->g_195 p_989->g_408 p_989->g_226 p_989->g_387 p_989->g_461 p_989->g_561 p_989->g_509 p_989->g_642 p_989->g_587 p_989->l_comm_values p_989->g_605.f1 p_989->g_740 p_989->g_776
 */
int16_t  func_8(int8_t * p_9, struct S1 * p_989)
{ /* block id: 5 */
    VECTOR(uint64_t, 8) l_125 = (VECTOR(uint64_t, 8))(0x378054361898E5B0L, (VECTOR(uint64_t, 4))(0x378054361898E5B0L, (VECTOR(uint64_t, 2))(0x378054361898E5B0L, 2UL), 2UL), 2UL, 0x378054361898E5B0L, 2UL);
    int8_t l_128 = 0x02L;
    int32_t l_591[2][2];
    int32_t **l_592 = &p_989->g_126;
    int16_t l_599 = (-1L);
    uint64_t l_600 = 0xC91F71487CD6EBC2L;
    VECTOR(int8_t, 8) l_613 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x18L), 0x18L), 0x18L, (-1L), 0x18L);
    VECTOR(uint64_t, 4) l_633 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL);
    uint8_t **l_653[5][5] = {{&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226},{&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226},{&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226},{&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226},{&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226,&p_989->g_226}};
    uint8_t ***l_652[7][7] = {{&l_653[3][0],&l_653[3][0],(void*)0,&l_653[3][0],&l_653[3][0],(void*)0,(void*)0},{&l_653[3][0],&l_653[3][0],(void*)0,&l_653[3][0],&l_653[3][0],(void*)0,(void*)0},{&l_653[3][0],&l_653[3][0],(void*)0,&l_653[3][0],&l_653[3][0],(void*)0,(void*)0},{&l_653[3][0],&l_653[3][0],(void*)0,&l_653[3][0],&l_653[3][0],(void*)0,(void*)0},{&l_653[3][0],&l_653[3][0],(void*)0,&l_653[3][0],&l_653[3][0],(void*)0,(void*)0},{&l_653[3][0],&l_653[3][0],(void*)0,&l_653[3][0],&l_653[3][0],(void*)0,(void*)0},{&l_653[3][0],&l_653[3][0],(void*)0,&l_653[3][0],&l_653[3][0],(void*)0,(void*)0}};
    uint8_t l_662 = 0UL;
    int64_t *l_706[1][9] = {{&p_989->g_243,&p_989->g_243,&p_989->g_243,&p_989->g_243,&p_989->g_243,&p_989->g_243,&p_989->g_243,&p_989->g_243,&p_989->g_243}};
    uint16_t l_742[2][5][1] = {{{0x1667L},{0x1667L},{0x1667L},{0x1667L},{0x1667L}},{{0x1667L},{0x1667L},{0x1667L},{0x1667L},{0x1667L}}};
    VECTOR(int32_t, 4) l_768 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x27FCD415L), 0x27FCD415L);
    int32_t ***l_778[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t ***l_802 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_591[i][j] = 0x19A19EF0L;
    }
    for (p_989->g_11 = 0; (p_989->g_11 >= (-11)); p_989->g_11--)
    { /* block id: 8 */
        VECTOR(int32_t, 16) l_114 = (VECTOR(int32_t, 16))(0x332AA214L, (VECTOR(int32_t, 4))(0x332AA214L, (VECTOR(int32_t, 2))(0x332AA214L, (-1L)), (-1L)), (-1L), 0x332AA214L, (-1L), (VECTOR(int32_t, 2))(0x332AA214L, (-1L)), (VECTOR(int32_t, 2))(0x332AA214L, (-1L)), 0x332AA214L, (-1L), 0x332AA214L, (-1L));
        int32_t *l_115 = (void*)0;
        int32_t *l_116[3][10][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        VECTOR(int16_t, 16) l_118 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x4697L), 0x4697L), 0x4697L, 8L, 0x4697L, (VECTOR(int16_t, 2))(8L, 0x4697L), (VECTOR(int16_t, 2))(8L, 0x4697L), 8L, 0x4697L, 8L, 0x4697L);
        int16_t *l_119[4][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
        int32_t **l_127 = &p_989->g_126;
        int32_t l_586 = 0L;
        uint32_t *l_590 = (void*)0;
        int32_t ***l_593 = (void*)0;
        int32_t ***l_594 = &l_127;
        union U0 *l_625 = &p_989->g_605;
        VECTOR(int32_t, 8) l_628 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
        uint8_t **l_630[2][4];
        uint16_t l_726 = 0xCBC7L;
        VECTOR(int32_t, 16) l_767 = (VECTOR(int32_t, 16))(0x3E8DDEDEL, (VECTOR(int32_t, 4))(0x3E8DDEDEL, (VECTOR(int32_t, 2))(0x3E8DDEDEL, 3L), 3L), 3L, 0x3E8DDEDEL, 3L, (VECTOR(int32_t, 2))(0x3E8DDEDEL, 3L), (VECTOR(int32_t, 2))(0x3E8DDEDEL, 3L), 0x3E8DDEDEL, 3L, 0x3E8DDEDEL, 3L);
        VECTOR(uint32_t, 16) l_801 = (VECTOR(uint32_t, 16))(0x5CBB74ECL, (VECTOR(uint32_t, 4))(0x5CBB74ECL, (VECTOR(uint32_t, 2))(0x5CBB74ECL, 3UL), 3UL), 3UL, 0x5CBB74ECL, 3UL, (VECTOR(uint32_t, 2))(0x5CBB74ECL, 3UL), (VECTOR(uint32_t, 2))(0x5CBB74ECL, 3UL), 0x5CBB74ECL, 3UL, 0x5CBB74ECL, 3UL);
        uint8_t **l_804 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_630[i][j] = (void*)0;
        }
        if ((atomic_inc(&p_989->g_atomic_input[60 * get_linear_group_id() + 58]) == 7))
        { /* block id: 10 */
            VECTOR(int32_t, 16) l_14 = (VECTOR(int32_t, 16))(0x5493E623L, (VECTOR(int32_t, 4))(0x5493E623L, (VECTOR(int32_t, 2))(0x5493E623L, 0x709BA87AL), 0x709BA87AL), 0x709BA87AL, 0x5493E623L, 0x709BA87AL, (VECTOR(int32_t, 2))(0x5493E623L, 0x709BA87AL), (VECTOR(int32_t, 2))(0x5493E623L, 0x709BA87AL), 0x5493E623L, 0x709BA87AL, 0x5493E623L, 0x709BA87AL);
            uint64_t l_15 = 1UL;
            VECTOR(int32_t, 2) l_16 = (VECTOR(int32_t, 2))(0x61054D81L, 0L);
            VECTOR(int32_t, 2) l_17 = (VECTOR(int32_t, 2))(1L, 0x4E2095E0L);
            VECTOR(int32_t, 4) l_18 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
            uint64_t l_19[2][10] = {{0xA3F0BDE8AFF65CE1L,0x56FAE7A4860C01EFL,0xA3F0BDE8AFF65CE1L,0xA3F0BDE8AFF65CE1L,0x56FAE7A4860C01EFL,0xA3F0BDE8AFF65CE1L,0xA3F0BDE8AFF65CE1L,0x56FAE7A4860C01EFL,0xA3F0BDE8AFF65CE1L,0xA3F0BDE8AFF65CE1L},{0xA3F0BDE8AFF65CE1L,0x56FAE7A4860C01EFL,0xA3F0BDE8AFF65CE1L,0xA3F0BDE8AFF65CE1L,0x56FAE7A4860C01EFL,0xA3F0BDE8AFF65CE1L,0xA3F0BDE8AFF65CE1L,0x56FAE7A4860C01EFL,0xA3F0BDE8AFF65CE1L,0xA3F0BDE8AFF65CE1L}};
            VECTOR(int32_t, 8) l_20 = (VECTOR(int32_t, 8))(0x19C826FFL, (VECTOR(int32_t, 4))(0x19C826FFL, (VECTOR(int32_t, 2))(0x19C826FFL, 0x1E173482L), 0x1E173482L), 0x1E173482L, 0x19C826FFL, 0x1E173482L);
            uint64_t l_21 = 18446744073709551615UL;
            VECTOR(int32_t, 8) l_22 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L);
            VECTOR(int32_t, 4) l_23 = (VECTOR(int32_t, 4))(0x6CE519C8L, (VECTOR(int32_t, 2))(0x6CE519C8L, 0L), 0L);
            int32_t l_24[8] = {0x5688AFC0L,0x7DFDCBC3L,0x5688AFC0L,0x5688AFC0L,0x7DFDCBC3L,0x5688AFC0L,0x5688AFC0L,0x7DFDCBC3L};
            int16_t l_25[6] = {0x3F73L,(-1L),0x3F73L,0x3F73L,(-1L),0x3F73L};
            VECTOR(int32_t, 16) l_26 = (VECTOR(int32_t, 16))(0x3B572060L, (VECTOR(int32_t, 4))(0x3B572060L, (VECTOR(int32_t, 2))(0x3B572060L, 1L), 1L), 1L, 0x3B572060L, 1L, (VECTOR(int32_t, 2))(0x3B572060L, 1L), (VECTOR(int32_t, 2))(0x3B572060L, 1L), 0x3B572060L, 1L, 0x3B572060L, 1L);
            uint64_t l_27 = 0x916FF7DD1A1FBCDAL;
            VECTOR(int32_t, 2) l_28 = (VECTOR(int32_t, 2))(1L, 0x46CE91E4L);
            VECTOR(int16_t, 8) l_29 = (VECTOR(int16_t, 8))(0x7197L, (VECTOR(int16_t, 4))(0x7197L, (VECTOR(int16_t, 2))(0x7197L, 0x0F94L), 0x0F94L), 0x0F94L, 0x7197L, 0x0F94L);
            VECTOR(int32_t, 4) l_30 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x4C01E3B4L), 0x4C01E3B4L);
            uint8_t l_31 = 3UL;
            VECTOR(int32_t, 8) l_32 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
            VECTOR(int32_t, 8) l_33 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x4644DEA1L), 0x4644DEA1L), 0x4644DEA1L, (-3L), 0x4644DEA1L);
            VECTOR(int32_t, 4) l_34 = (VECTOR(int32_t, 4))(0x03DC5799L, (VECTOR(int32_t, 2))(0x03DC5799L, 0x65052BDFL), 0x65052BDFL);
            VECTOR(int32_t, 16) l_35 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L), (VECTOR(int32_t, 2))((-1L), (-7L)), (VECTOR(int32_t, 2))((-1L), (-7L)), (-1L), (-7L), (-1L), (-7L));
            uint32_t l_36 = 0UL;
            uint64_t l_37[2];
            int16_t l_38 = (-5L);
            uint32_t l_39 = 0xBCF61366L;
            int8_t l_40 = (-5L);
            uint32_t l_41 = 0UL;
            uint64_t l_42 = 0x96BA6EED5AC3C997L;
            uint64_t l_43 = 0UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_37[i] = 0xDBCFCC2E186B95FEL;
            l_42 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_14.s5eaf)).hi, (int32_t)l_15))).yxxx)).zzwwywxx, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(8L, 0L, (-1L), 0x20A9F4F9L)).zxzwwxwz)).s4365643521152172)).odd, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_16.xxyxxxxyyyxyxyyx)).lo)).s6447237523731073, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_17.xxxyxxxy)).s16)), 0x74F0E4F2L)).xxwwwzwwzyywzzzx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x33631AF6L, 1L)), ((VECTOR(int32_t, 4))(l_18.xyzy)), (-5L), 0x46D767C8L)).odd)))).z, 2L, 0x640C8830L, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_19[0][9], ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(3L, 0x20BA2C16L)).xxxxyyyy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_20.s62)).xyxy)), l_21, 0L, 0x3231A295L)).s5e31, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(0L, 0x40BA889BL, 0x767326DCL, 0x5F642D94L)).yxxxyxww, ((VECTOR(int32_t, 16))(l_22.s7010200146376215)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_23.xywyxxyzxwyzyxzy)))).odd)).lo)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((l_25[0] = l_24[3]), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(l_26.s393d3b28c330c202)), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_27, 0x1DFBA308L, 0x394995FBL, (-8L))).even)), 0L, 0x511E9056L)).wwwwzwwy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_28.yxyx)).zwzyzzxw))))).s4431537553120405, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_29.s6104)).xyzxwwwy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x9D53L, 0UL)), 0xAA6DL, 65526UL)).wxyzzwxy))).s2634030645622750)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_30.xw)))), 8L, 1L)).odd, ((VECTOR(int32_t, 8))((-9L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x58521EB7L, (-1L))))), 0x0D400C68L, (-10L), 2L, 0x19AD364BL, (-6L))).s53))), (-2L), 0x7CA61894L)), 0x0798E375L, (l_31 |= 0x22B7F3A4L), 8L, (-1L))), 0x29F1E568L, 0x08201085L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_32.s37033617)).hi)), 0x752EB69FL, (-1L))).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x77FA13A8L, 0x668EBBCFL)), 0x781FC114L, (-9L))).lo)))).xyyxxxxy)))))))))).s30))).xyyyxyyxxyxxxyyy, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(l_33.s2013)).lo, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(l_34.wwyxwwyywyzwzzzz))))).s2d))).xxxyxxyyyxxyyxxy))).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x54B92745L, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(l_35.s07)).xxxxyyxxxyyxxyxx, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(l_36, ((VECTOR(int32_t, 4))(0x4A48CC92L)), (-1L), 3L, (-1L))).s7774405564242071, (int32_t)l_37[0]))).sd5, ((VECTOR(int32_t, 2))((-2L)))))).xxyxyxyyxxyyyxxy)))))).s7fee, ((VECTOR(int32_t, 4))(0x0117D142L)), ((VECTOR(int32_t, 4))(8L))))), l_38, (-2L), 0x74CAC200L)).lo)), ((VECTOR(int32_t, 4))(0x0B7C8356L))))).xzywzyyzyyxwwwyw, ((VECTOR(int32_t, 16))(0x640AA8DEL))))).odd)), ((VECTOR(int32_t, 8))(6L))))).s3124142632433742))).se135, ((VECTOR(int32_t, 4))(0x2512995BL))))).xyxzzwwzwwyyxzyw)).sd, 9L, 1L))))))), ((VECTOR(int32_t, 4))(0x573DB0A1L)), 5L, l_39, l_40, 8L, ((VECTOR(int32_t, 4))((-8L))))).odd))).even, ((VECTOR(int32_t, 4))(4L))))), 0x036DABD8L, 0x6D150EB8L, l_41, 0x537F146AL, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x0E20B3FDL)), 0x714D92DBL)), ((VECTOR(int32_t, 16))(7L))))), ((VECTOR(int32_t, 16))(0x74EE93D3L))))).even)))))))).s5;
            l_43++;
            for (l_43 = 6; (l_43 < 48); l_43++)
            { /* block id: 17 */
                VECTOR(int32_t, 2) l_48 = (VECTOR(int32_t, 2))(0x4586C6A2L, 0x4A92D9FAL);
                int i;
                l_22.s7 = ((VECTOR(int32_t, 16))(l_48.xyxxyxyyxxxxxyxy)).se;
            }
            for (l_20.s3 = (-22); (l_20.s3 > (-24)); l_20.s3 = safe_sub_func_int64_t_s_s(l_20.s3, 8))
            { /* block id: 22 */
                VECTOR(int64_t, 8) l_51 = (VECTOR(int64_t, 8))(0x314AB0DC9406517AL, (VECTOR(int64_t, 4))(0x314AB0DC9406517AL, (VECTOR(int64_t, 2))(0x314AB0DC9406517AL, (-1L)), (-1L)), (-1L), 0x314AB0DC9406517AL, (-1L));
                uint32_t l_52 = 1UL;
                VECTOR(int16_t, 2) l_53 = (VECTOR(int16_t, 2))(1L, (-1L));
                VECTOR(int16_t, 2) l_54 = (VECTOR(int16_t, 2))((-6L), (-1L));
                VECTOR(int8_t, 8) l_55 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, (-2L)), (-2L)), (-2L), 4L, (-2L));
                VECTOR(int8_t, 16) l_56 = (VECTOR(int8_t, 16))(0x5BL, (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 5L), 5L), 5L, 0x5BL, 5L, (VECTOR(int8_t, 2))(0x5BL, 5L), (VECTOR(int8_t, 2))(0x5BL, 5L), 0x5BL, 5L, 0x5BL, 5L);
                uint32_t l_57 = 0xD6F842C2L;
                VECTOR(uint8_t, 8) l_58 = (VECTOR(uint8_t, 8))(0x52L, (VECTOR(uint8_t, 4))(0x52L, (VECTOR(uint8_t, 2))(0x52L, 8UL), 8UL), 8UL, 0x52L, 8UL);
                int64_t l_59 = (-3L);
                uint64_t l_60 = 0xB1D0637064110E0CL;
                VECTOR(int8_t, 16) l_61 = (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L, (VECTOR(int8_t, 2))((-2L), 0L), (VECTOR(int8_t, 2))((-2L), 0L), (-2L), 0L, (-2L), 0L);
                VECTOR(int8_t, 2) l_62 = (VECTOR(int8_t, 2))(0x6DL, 0x12L);
                VECTOR(int8_t, 2) l_63 = (VECTOR(int8_t, 2))(0x40L, (-5L));
                VECTOR(int8_t, 16) l_64 = (VECTOR(int8_t, 16))(0x51L, (VECTOR(int8_t, 4))(0x51L, (VECTOR(int8_t, 2))(0x51L, (-7L)), (-7L)), (-7L), 0x51L, (-7L), (VECTOR(int8_t, 2))(0x51L, (-7L)), (VECTOR(int8_t, 2))(0x51L, (-7L)), 0x51L, (-7L), 0x51L, (-7L));
                VECTOR(uint16_t, 8) l_65 = (VECTOR(uint16_t, 8))(0x3019L, (VECTOR(uint16_t, 4))(0x3019L, (VECTOR(uint16_t, 2))(0x3019L, 0x9002L), 0x9002L), 0x9002L, 0x3019L, 0x9002L);
                uint64_t l_66[3][8][7] = {{{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL}},{{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL}},{{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL},{18446744073709551610UL,0UL,0xD631B42A304AAC6DL,0xAB319EDEBB4D12FDL,0UL,0xAB319EDEBB4D12FDL,0xD631B42A304AAC6DL}}};
                int32_t l_67 = 0x5E1E4340L;
                uint8_t l_68 = 255UL;
                int16_t l_69 = 4L;
                uint32_t l_70 = 4294967295UL;
                int32_t l_71 = 3L;
                int32_t l_76[3];
                int32_t l_77[1][5][5] = {{{(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L)}}};
                VECTOR(int32_t, 2) l_78 = (VECTOR(int32_t, 2))(0x366A3FBEL, 0x5E5B8234L);
                int8_t l_79 = 0x4DL;
                int32_t l_80 = (-9L);
                uint64_t l_81 = 0xA0E2562001A86CCFL;
                VECTOR(int16_t, 2) l_82 = (VECTOR(int16_t, 2))(7L, 9L);
                VECTOR(uint16_t, 2) l_83 = (VECTOR(uint16_t, 2))(0UL, 0x4469L);
                uint64_t l_84 = 0UL;
                uint16_t l_85 = 0UL;
                int32_t l_86 = 0L;
                uint16_t l_87 = 0UL;
                uint8_t l_88 = 8UL;
                VECTOR(uint16_t, 16) l_89 = (VECTOR(uint16_t, 16))(0x8A04L, (VECTOR(uint16_t, 4))(0x8A04L, (VECTOR(uint16_t, 2))(0x8A04L, 0xA848L), 0xA848L), 0xA848L, 0x8A04L, 0xA848L, (VECTOR(uint16_t, 2))(0x8A04L, 0xA848L), (VECTOR(uint16_t, 2))(0x8A04L, 0xA848L), 0x8A04L, 0xA848L, 0x8A04L, 0xA848L);
                int32_t l_90 = 0x694BD967L;
                int32_t l_91[8] = {0x1EA9DAA6L,0x1EA9DAA6L,0x1EA9DAA6L,0x1EA9DAA6L,0x1EA9DAA6L,0x1EA9DAA6L,0x1EA9DAA6L,0x1EA9DAA6L};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_76[i] = (-7L);
                l_18.x = (((VECTOR(int64_t, 4))(l_51.s3664)).y , l_52);
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(3L, 0x3EA84625L)).xxyxxxxx)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(l_53.xyyy)).even, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_54.xxxy)).hi)), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(7L, 7L)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_55.s25)).yyxxyxxxyxxxyxyy)), ((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 2))(0x1EL, 0x17L)).xxyxxxxyyxxxxxxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(l_56.s66f7)).xxxzyzzz, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(2L, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(0x6BL, l_57, 0x51L, ((l_59 = l_58.s5) , l_60), ((VECTOR(int8_t, 4))(l_61.s044e)).z, ((VECTOR(int8_t, 4))(l_62.yxxy)), 0x4FL, 3L, ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(l_63.xy)).yxyx, ((VECTOR(int8_t, 2))(l_64.s98)).yyyx))).y, (((VECTOR(uint16_t, 4))(l_65.s1672)).z , 0x08L), (l_66[2][1][6] , (((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(0UL, 255UL)).yxxyyxyy, ((VECTOR(uint8_t, 2))(255UL, 0x26L)).yxyxxxxx))).s0 , ((((l_42 = ((VECTOR(uint64_t, 2))(0xB95AF383A4A27234L, 0xA7DDC295C5011C82L)).hi) , (l_67 , (-1L))) , 0x4EEE54ADL) , 0x61L))), 0x71L, 0x7AL)).s8ea3, ((VECTOR(int8_t, 4))(1L))))).ywyzwxwz)).s2322754751267540)).s1d))), 1L)), ((VECTOR(int8_t, 2))((-1L))), 0x0EL, 0x1AL)), ((VECTOR(int8_t, 8))(0x1DL))))), ((VECTOR(int8_t, 8))((-2L))))))))).s5, 0x0BL, ((VECTOR(int8_t, 4))(0x0DL)), l_68, l_69, 0x73L, ((VECTOR(int8_t, 4))(2L)), l_70, 0x01L, (-1L))))))))), ((VECTOR(int8_t, 16))(0L))))).hi, ((VECTOR(int8_t, 8))(4L)), ((VECTOR(int8_t, 8))(0x6DL))))))).s44))))).yyxy)), ((VECTOR(int8_t, 4))((-6L)))))).yyyzzxzx, ((VECTOR(int8_t, 8))((-1L)))))).s1332773264343761, ((VECTOR(uint8_t, 16))(0x55L))))).sedac, ((VECTOR(int16_t, 4))(1L))))).lo))), ((VECTOR(uint16_t, 2))(65535UL))))), 0x73DA2BACL, l_71, ((VECTOR(int32_t, 4))(0x7188D16BL)))).sf)
                { /* block id: 26 */
                    l_22.s6 = 0x4FDC908BL;
                }
                else
                { /* block id: 28 */
                    int32_t *l_72 = (void*)0;
                    int32_t l_74 = 5L;
                    int32_t *l_73 = &l_74;
                    uint32_t l_75[6][8][5] = {{{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL}},{{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL}},{{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL}},{{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL}},{{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL}},{{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL},{0x30A905D2L,0x060AC40AL,0xB853E7CFL,0x6FF82CCDL,7UL}}};
                    int i, j, k;
                    l_73 = l_72;
                    l_35.s1 = (-3L);
                    l_14.s5 ^= (l_30.w = (l_18.x = 0x53244882L));
                    l_34.y = l_75[0][2][1];
                }
                l_33.s1 ^= (FAKE_DIVERGE(p_989->local_1_offset, get_local_id(1), 10) , (((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(1UL, l_76[2], 6UL, 4294967295UL)).odd, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(l_77[0][1][0], ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x7165E9A0L, 0x629DF94DL)))), 0x49C78893L)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(0x7B3F213AL, ((VECTOR(int32_t, 4))(l_78.yxxx)), ((VECTOR(int32_t, 2))(0x50361599L, (-8L))), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_79, (l_80 , l_81), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_82.yxyxxyxyyyyyxxxx)).s53, ((VECTOR(uint16_t, 16))(l_83.xxxxyyxyxxyyxyyy)).sa5))), ((VECTOR(int32_t, 2))(0x1E8B652BL, 0x1256EB59L)), l_84, 1L, 1L, 0x5EBA3FE0L, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(((((l_86 = (l_41 ^= (l_36 = l_85))) , ((l_39 |= (l_87 , 0xAD39F9CDL)) , l_88)) , (-3L)) , (-5L)), ((VECTOR(int32_t, 2))((-1L))), 0x71A36315L, l_89.sb, 1L, (-1L), (-3L))).hi, (int32_t)0x34594A1EL, (int32_t)l_90))).yyzxzzxy))).s76, ((VECTOR(int32_t, 2))(0x2111EAA1L))))), ((VECTOR(int32_t, 4))(0x2DB24207L)))).s72c2, ((VECTOR(int32_t, 4))((-10L))), ((VECTOR(int32_t, 4))(0L))))), ((VECTOR(int32_t, 2))(0x0C9E9412L)), ((VECTOR(int32_t, 2))(0x1B65507AL)), 0x6EFEC2FFL)).sa6))).xyyxxxxxxxxyyxxx, ((VECTOR(int32_t, 16))(0x189850A8L))))).saa, ((VECTOR(int32_t, 2))(0x1750AC28L)), ((VECTOR(int32_t, 2))(0x1C9156F2L))))).xxxy, ((VECTOR(int32_t, 4))(0x56F5496FL))))).yzwxxzxz, ((VECTOR(int32_t, 8))(0x63623646L))))))).s23, ((VECTOR(int32_t, 2))(0x744F4758L))))).yxyxyyyxyyxxyyxy)))).sa7, ((VECTOR(int32_t, 2))(0x16BB9490L))))).yyxxxyyx, ((VECTOR(int32_t, 8))(0x797578CBL))))).s15)).xxyyyxxyyyyyxyyy, ((VECTOR(uint32_t, 16))(4294967295UL))))).s2c))).hi , l_91[7]));
            }
            unsigned int result = 0;
            result += l_14.sf;
            result += l_14.se;
            result += l_14.sd;
            result += l_14.sc;
            result += l_14.sb;
            result += l_14.sa;
            result += l_14.s9;
            result += l_14.s8;
            result += l_14.s7;
            result += l_14.s6;
            result += l_14.s5;
            result += l_14.s4;
            result += l_14.s3;
            result += l_14.s2;
            result += l_14.s1;
            result += l_14.s0;
            result += l_15;
            result += l_16.y;
            result += l_16.x;
            result += l_17.y;
            result += l_17.x;
            result += l_18.w;
            result += l_18.z;
            result += l_18.y;
            result += l_18.x;
            int l_19_i0, l_19_i1;
            for (l_19_i0 = 0; l_19_i0 < 2; l_19_i0++) {
                for (l_19_i1 = 0; l_19_i1 < 10; l_19_i1++) {
                    result += l_19[l_19_i0][l_19_i1];
                }
            }
            result += l_20.s7;
            result += l_20.s6;
            result += l_20.s5;
            result += l_20.s4;
            result += l_20.s3;
            result += l_20.s2;
            result += l_20.s1;
            result += l_20.s0;
            result += l_21;
            result += l_22.s7;
            result += l_22.s6;
            result += l_22.s5;
            result += l_22.s4;
            result += l_22.s3;
            result += l_22.s2;
            result += l_22.s1;
            result += l_22.s0;
            result += l_23.w;
            result += l_23.z;
            result += l_23.y;
            result += l_23.x;
            int l_24_i0;
            for (l_24_i0 = 0; l_24_i0 < 8; l_24_i0++) {
                result += l_24[l_24_i0];
            }
            int l_25_i0;
            for (l_25_i0 = 0; l_25_i0 < 6; l_25_i0++) {
                result += l_25[l_25_i0];
            }
            result += l_26.sf;
            result += l_26.se;
            result += l_26.sd;
            result += l_26.sc;
            result += l_26.sb;
            result += l_26.sa;
            result += l_26.s9;
            result += l_26.s8;
            result += l_26.s7;
            result += l_26.s6;
            result += l_26.s5;
            result += l_26.s4;
            result += l_26.s3;
            result += l_26.s2;
            result += l_26.s1;
            result += l_26.s0;
            result += l_27;
            result += l_28.y;
            result += l_28.x;
            result += l_29.s7;
            result += l_29.s6;
            result += l_29.s5;
            result += l_29.s4;
            result += l_29.s3;
            result += l_29.s2;
            result += l_29.s1;
            result += l_29.s0;
            result += l_30.w;
            result += l_30.z;
            result += l_30.y;
            result += l_30.x;
            result += l_31;
            result += l_32.s7;
            result += l_32.s6;
            result += l_32.s5;
            result += l_32.s4;
            result += l_32.s3;
            result += l_32.s2;
            result += l_32.s1;
            result += l_32.s0;
            result += l_33.s7;
            result += l_33.s6;
            result += l_33.s5;
            result += l_33.s4;
            result += l_33.s3;
            result += l_33.s2;
            result += l_33.s1;
            result += l_33.s0;
            result += l_34.w;
            result += l_34.z;
            result += l_34.y;
            result += l_34.x;
            result += l_35.sf;
            result += l_35.se;
            result += l_35.sd;
            result += l_35.sc;
            result += l_35.sb;
            result += l_35.sa;
            result += l_35.s9;
            result += l_35.s8;
            result += l_35.s7;
            result += l_35.s6;
            result += l_35.s5;
            result += l_35.s4;
            result += l_35.s3;
            result += l_35.s2;
            result += l_35.s1;
            result += l_35.s0;
            result += l_36;
            int l_37_i0;
            for (l_37_i0 = 0; l_37_i0 < 2; l_37_i0++) {
                result += l_37[l_37_i0];
            }
            result += l_38;
            result += l_39;
            result += l_40;
            result += l_41;
            result += l_42;
            result += l_43;
            atomic_add(&p_989->g_special_values[60 * get_linear_group_id() + 58], result);
        }
        else
        { /* block id: 42 */
            (1 + 1);
        }
        (*p_989->g_121) = (safe_add_func_uint32_t_u_u((func_94((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(p_989->g_comm_values[p_989->tid], 255UL)), 1)), (func_104(func_107((((safe_mul_func_uint8_t_u_u(0xCCL, ((p_989->g_117 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_114.se43b6d30)).s7014467306531752)).s4) == (p_989->l_comm_values[(safe_mod_func_uint32_t_u_u(p_989->tid, 12))] && (p_989->g_120[4] = ((VECTOR(int16_t, 8))(l_118.sccc234c2)).s4))))) | (p_989->g_121 != ((*l_127) = ((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(l_125.s3616272527547705)).s9, 0x7ACA809D498514B6L)) , p_989->g_126)))) , l_128), (safe_div_func_int8_t_s_s(func_131((+(~p_989->g_comm_values[p_989->tid])), l_125.s2, p_989), (*p_9))), &p_989->g_11, p_989->g_4.x, p_989), l_128, p_989) <= l_125.s3))), p_989->g_386.y, l_125.s1, p_989) , FAKE_DIVERGE(p_989->global_0_offset, get_global_id(0), 10)), 4294967292UL));
        if ((((VECTOR(int64_t, 8))(0x495CBEF0E86583D0L, (-5L), (safe_mul_func_int64_t_s_s(((l_591[1][0] = ((!(safe_mod_func_int8_t_s_s(p_989->g_213, ((l_586 & ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(p_989->g_587.s74425216)).lo))).even)).yyxxyxxx)).odd)).y) , (safe_mod_func_int64_t_s_s(p_989->g_501.w, 0x0CBABA52601DE88BL)))))) , p_989->g_501.w)) != 0x006A96F5L), (((((*l_594) = l_592) != &p_989->g_126) || (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(p_989->g_375, l_599)), (-1L)))) >= l_600))), ((VECTOR(int64_t, 2))((-9L))), p_989->g_387.s1, 0x33900934FC7FD870L, 0L)).s0 <= p_989->g_558.y))
        { /* block id: 249 */
            uint32_t l_601 = 1UL;
            ++l_601;
        }
        else
        { /* block id: 251 */
            int64_t l_606 = (-1L);
            int64_t *l_612 = &p_989->g_509;
            int32_t l_619[10][8] = {{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL},{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL},{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL},{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL},{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL},{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL},{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL},{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL},{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL},{0x0AEFCAF8L,0x0AEFCAF8L,0x6595BCC8L,0x2D6831F5L,1L,0x03BD1C4AL,0x0F447193L,0x1BF27F7DL}};
            int32_t l_620 = 0x1BB1E4E4L;
            VECTOR(int32_t, 2) l_627 = (VECTOR(int32_t, 2))((-1L), 8L);
            int16_t **l_638 = &p_989->g_196;
            VECTOR(uint8_t, 4) l_658 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x05L), 0x05L);
            VECTOR(uint8_t, 8) l_660 = (VECTOR(uint8_t, 8))(0x15L, (VECTOR(uint8_t, 4))(0x15L, (VECTOR(uint8_t, 2))(0x15L, 246UL), 246UL), 246UL, 0x15L, 246UL);
            VECTOR(int16_t, 2) l_668 = (VECTOR(int16_t, 2))(0L, 6L);
            VECTOR(uint8_t, 4) l_696 = (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0xF4L), 0xF4L);
            uint8_t l_708 = 248UL;
            VECTOR(int32_t, 8) l_724 = (VECTOR(int32_t, 8))(0x06119675L, (VECTOR(int32_t, 4))(0x06119675L, (VECTOR(int32_t, 2))(0x06119675L, 0x5D81BFB1L), 0x5D81BFB1L), 0x5D81BFB1L, 0x06119675L, 0x5D81BFB1L);
            uint16_t *l_737 = (void*)0;
            VECTOR(int32_t, 16) l_769 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x51F007DAL), 0x51F007DAL), 0x51F007DAL, (-9L), 0x51F007DAL, (VECTOR(int32_t, 2))((-9L), 0x51F007DAL), (VECTOR(int32_t, 2))((-9L), 0x51F007DAL), (-9L), 0x51F007DAL, (-9L), 0x51F007DAL);
            int32_t ***l_777 = &l_127;
            uint8_t ****l_785 = &l_652[5][5];
            int16_t l_786 = 1L;
            int16_t l_787 = 0L;
            VECTOR(uint64_t, 8) l_800 = (VECTOR(uint64_t, 8))(0xD5D25CAD84CB3CB8L, (VECTOR(uint64_t, 4))(0xD5D25CAD84CB3CB8L, (VECTOR(uint64_t, 2))(0xD5D25CAD84CB3CB8L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xD5D25CAD84CB3CB8L, 18446744073709551615UL);
            int64_t ****l_803 = &l_802;
            int i, j;
            if (((*p_989->g_228) != &p_989->g_226))
            { /* block id: 252 */
                int32_t l_607[6];
                int64_t *l_618[4] = {&l_606,&l_606,&l_606,&l_606};
                int i;
                for (i = 0; i < 6; i++)
                    l_607[i] = 0x4FADC8AEL;
                (*p_989->g_121) = (+(l_620 = (((((l_619[9][0] |= (((p_989->g_604 , p_989->g_605) , l_606) , ((l_607[3] == (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u(0x4D00L, (((l_612 != (void*)0) == ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_613.s37)), (-3L), 0L, ((((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s(((l_618[3] = l_618[0]) != (void*)0), l_606)), l_607[3])) >= l_607[3]) , FAKE_DIVERGE(p_989->global_0_offset, get_global_id(0), 10)) , 0x71L), l_607[4], 0x42L, 0x21L, ((VECTOR(int8_t, 4))((-1L))), 0x28L, l_607[3], 5L, 0L)).sd) < l_606))) >= p_989->g_604.f0), 15))) & 0x4C96L))) || p_989->g_587.s3) , FAKE_DIVERGE(p_989->global_1_offset, get_global_id(1), 10)) | FAKE_DIVERGE(p_989->global_1_offset, get_global_id(1), 10)) < 0x53D77F6686570677L)));
                for (p_989->g_509 = 0; (p_989->g_509 < 1); p_989->g_509++)
                { /* block id: 259 */
                    (*p_989->g_121) = (p_989->g_386.y != l_619[9][0]);
                }
            }
            else
            { /* block id: 262 */
                VECTOR(uint8_t, 2) l_629 = (VECTOR(uint8_t, 2))(6UL, 255UL);
                uint8_t *l_651 = (void*)0;
                uint32_t *l_654 = (void*)0;
                int32_t l_663[6] = {1L,0x49F98AD7L,1L,1L,0x49F98AD7L,1L};
                VECTOR(int16_t, 16) l_667 = (VECTOR(int16_t, 16))(0x45D7L, (VECTOR(int16_t, 4))(0x45D7L, (VECTOR(int16_t, 2))(0x45D7L, 0x54BAL), 0x54BAL), 0x54BAL, 0x45D7L, 0x54BAL, (VECTOR(int16_t, 2))(0x45D7L, 0x54BAL), (VECTOR(int16_t, 2))(0x45D7L, 0x54BAL), 0x45D7L, 0x54BAL, 0x45D7L, 0x54BAL);
                int16_t **l_741 = &p_989->g_196;
                uint32_t l_770 = 0UL;
                int32_t ***l_774 = (void*)0;
                int i;
                for (p_989->g_243 = (-14); (p_989->g_243 >= 1); ++p_989->g_243)
                { /* block id: 265 */
                    union U0 **l_626 = &l_625;
                    (*l_626) = l_625;
                }
                if (((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_627.yxxxyyxy)).s23, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_628.s2243)).wyxyzxyzxyzwwzzx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((p_989->g_195.y &= ((+((VECTOR(uint8_t, 2))(l_629.yx)).lo) ^ ((void*)0 == l_630[0][0]))), 0x3EB58294L, (-1L), 0x7C9BC6E4L)).wzxxzzwwyzywwxyz)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x2AEBE736L, (l_591[1][0] = ((((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 8))(l_629.x, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_989->g_631.yyxyxyyy)).s23)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(p_989->g_632.s85a2)))), ((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 2))(l_633.zw)).xxxyyyyyyxyxyxxx, ((VECTOR(uint64_t, 2))(0x942C41B54404AA18L, 0x6E48F68964661085L)).yyyxxyxxyyyxyyyx, ((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_989->g_634.wzyz)), 0x6FB805638631C887L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(p_989->g_635.yyyyyxyy)).even)).x, l_627.x, 0x6B67D98FFC5D4D8FL, (safe_add_func_uint16_t_u_u(2UL, (((l_629.x , &p_989->g_494) != &p_989->g_494) < 0x5DC14C22L))), 0xF8A36BE2888F81F2L, ((VECTOR(uint64_t, 4))(0UL)), 0xF394F9C76664E41CL, 18446744073709551611UL)).s9631, ((VECTOR(uint64_t, 4))(5UL))))).wxxxzxyxyyzzxywy))).hi, ((VECTOR(uint64_t, 8))(0x970F101DF66205A3L))))).s4 , l_638) == (void*)0)), ((VECTOR(int32_t, 8))(0x4B4699A7L)), 0x34977631L, ((VECTOR(int32_t, 2))((-4L))), 0x7543E98EL, (-1L), 0x52231288L)).s09cb)).lo, ((VECTOR(int32_t, 2))(0x33942EC1L))))).xxxxxxyxyxxyyyyy, ((VECTOR(int32_t, 16))((-10L))))))))))).s05fe, ((VECTOR(int32_t, 4))(0x46E68E12L)), ((VECTOR(int32_t, 4))(0x646FA7C7L))))).hi)), ((VECTOR(int32_t, 4))(0x38D409E0L)), 0x6DEA6476L, l_606, 0L, ((VECTOR(int32_t, 2))(0x05F62620L)), (-1L), 0x5DEE4F04L, 0x4E349EBBL, 1L, (-6L))).lo, (int32_t)0L, (int32_t)0x42F25D82L))).s12, ((VECTOR(int32_t, 2))(0x22998466L))))).hi)
                { /* block id: 270 */
                    for (l_128 = 0; (l_128 != 11); l_128++)
                    { /* block id: 273 */
                        (*p_989->g_643) = &l_612;
                    }
                }
                else
                { /* block id: 276 */
                    atomic_sub(&p_989->g_atomic_reduction[get_linear_group_id()], l_629.x + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_989->v_collective += p_989->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                }
                if ((l_663[1] = (((VECTOR(int16_t, 4))(p_989->g_644.zwxx)).x >= ((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_989->g_164 = GROUP_DIVERGE(1, 1)), (&p_989->g_213 == l_651))), (*p_989->g_196))) < ((((p_989->g_587.s7 = ((void*)0 != l_652[5][5])) , (p_989->l_comm_values[(safe_mod_func_uint32_t_u_u(p_989->tid, 12))] = 9L)) == (safe_rshift_func_int16_t_s_u((p_989->g_657 != (void*)0), 0))) , ((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_658.wy)), 0xBDL, ((VECTOR(uint8_t, 2))(0x5DL, 251UL)), ((VECTOR(uint8_t, 2))(p_989->g_659.wz)), ((VECTOR(uint8_t, 2))(8UL, 1UL)), 255UL, 0xABL, 0xB5L, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_660.s27)))).xxyx)), ((VECTOR(uint8_t, 4))(p_989->g_661.wywx)))).even, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(3UL, l_660.s6, 0UL, 0x37L)).odd, ((VECTOR(uint8_t, 2))(0xDFL)), ((VECTOR(uint8_t, 2))(255UL))))), 0x53L, 0x0CL))))).hi, ((VECTOR(uint8_t, 2))(255UL))))), 255UL, 0UL)).s9e)), 0xC0L, 0UL)))).w == 0x10L) | l_662))), p_989->g_437.sf)) , l_629.x))))
                { /* block id: 283 */
                    VECTOR(int16_t, 4) l_669 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x1230L), 0x1230L);
                    uint64_t *l_689 = &p_989->g_297;
                    VECTOR(uint16_t, 16) l_691 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 4UL), 4UL), 4UL, 65535UL, 4UL, (VECTOR(uint16_t, 2))(65535UL, 4UL), (VECTOR(uint16_t, 2))(65535UL, 4UL), 65535UL, 4UL, 65535UL, 4UL);
                    int32_t l_698 = (-1L);
                    int16_t **l_738 = &l_119[3][0][0];
                    int16_t ***l_739[1][9][3] = {{{&l_738,(void*)0,&l_738},{&l_738,(void*)0,&l_738},{&l_738,(void*)0,&l_738},{&l_738,(void*)0,&l_738},{&l_738,(void*)0,&l_738},{&l_738,(void*)0,&l_738},{&l_738,(void*)0,&l_738},{&l_738,(void*)0,&l_738},{&l_738,(void*)0,&l_738}}};
                    uint16_t *l_753 = (void*)0;
                    uint16_t *l_754 = &l_726;
                    int i, j, k;
                    if (l_619[3][6])
                        break;
                    if ((safe_mul_func_uint16_t_u_u((~(((((((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_989->g_666.xx)), 1L, 0x7C0EL)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0x38E2L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_667.sfc4ca75e368dcc14)).s6d)), 0x026BL, 1L)).yyzywzww)), 0x6D8CL, 5L, 0x611EL, (0x78L <= p_989->g_631.y), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(l_668.xyxyxyxxxxxxyxyy)).s52, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_669.wx)).lo, ((safe_div_func_uint16_t_u_u((l_606 <= (l_669.w , (safe_lshift_func_uint8_t_u_u(l_669.y, 0)))), 0x2E1BL)) , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_989->g_674.yxyxxyxzyywwxxyx)).sfca9)).x), 0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x1937L, 0x6138L)))), ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(0x45E9L, 0x7044L)).yyxxyyxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_989->g_675.sfc36)).xzxxyxyyyywwyyyz)).even, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((safe_rshift_func_uint16_t_u_s(l_669.x, ((p_989->g_437.s9 , &p_989->g_297) != &p_989->g_297))), 8L, ((VECTOR(int16_t, 2))(0x6021L)), 0x2054L, 0x47D5L, 0x632AL, 0x766EL)).s6, ((VECTOR(int16_t, 2))(0L)), (-1L), l_668.y, (-2L), 0x4659L, (*p_989->g_196), ((VECTOR(int16_t, 8))((-1L))))).s27, (int16_t)l_669.y))).yxxxxxyy))), 0L, 0x015DL, 9L)).s2b))), 0x10D8L)).sdb)).yxxy))).z > p_989->g_425.f0) && l_669.z) , l_668.y) < 1UL) > p_989->g_661.y)), p_989->g_437.s7)))
                    { /* block id: 285 */
                        uint32_t *l_699[8][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t l_700 = (-1L);
                        int32_t l_701 = 0x3379CEAEL;
                        int8_t *l_707 = &l_128;
                        int32_t *l_709 = &p_989->g_605.f1;
                        int32_t *l_710 = (void*)0;
                        int32_t *l_711[7];
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_711[i] = &p_989->g_605.f1;
                        (*p_989->g_121) = (((*l_709) = (p_989->g_117 |= ((safe_mul_func_uint16_t_u_u((((*l_707) = (((l_669.y , (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(p_989->g_682.zyzzzyzx)).s0, ((safe_mod_func_int8_t_s_s((l_663[1] == (safe_div_func_uint32_t_u_u(((((safe_div_func_uint8_t_u_u((l_689 == (void*)0), (safe_unary_minus_func_int16_t_s(((((((l_667.sd >= (((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_691.s64)).xxxyxyxxxyxxyxxx)).s2 >= ((p_989->g_604 , (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((VECTOR(uint8_t, 8))(l_696.xyxzwwzw)).s1 <= (&p_989->g_243 == (l_706[0][3] = (p_989->g_697 , (((p_989->g_587.s6--) , ((*p_989->g_196) = (safe_div_func_int32_t_s_s(l_696.y, l_667.s1)))) , l_706[0][3]))))), 5UL)), 0x1BL))) <= l_619[9][0])) != l_663[1]) >= 0x642FL)) ^ p_989->g_120[4]) , 7UL) ^ 5L) || 0x2F0E4CF243816BB8L) >= GROUP_DIVERGE(2, 1)))))) , p_989->g_386.z) == 0L) & p_989->g_387.s2), l_691.s3))), p_989->g_631.y)) >= l_701)))) < 1UL) ^ l_660.s1)) && 0x27L), l_708)) <= l_606))) , l_700);
                    }
                    else
                    { /* block id: 293 */
                        int8_t l_716 = (-1L);
                        uint16_t *l_719 = (void*)0;
                        uint16_t *l_720 = (void*)0;
                        uint16_t *l_721 = (void*)0;
                        l_663[5] = (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_989->g_714.s0b8b)))).w, (((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(p_989->g_715.zwzx)).yyxwyywwwwwzwxxx, ((VECTOR(uint64_t, 16))(0x326E0D8788AEEE2FL, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(0xA73055B9L, 0UL)), ((VECTOR(uint32_t, 4))(0x0DAE19F1L, (((((l_716 < (safe_mul_func_uint16_t_u_u((++p_989->g_386.w), l_669.w))) && l_629.x) ^ 0x5576445BE436006BL) ^ (l_698 = l_667.sc)) & ((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 2))(l_724.s11)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 1L)), 0x3C7C9445L, 0x76C7D51FL)).odd))))), (-1L), 0L)).lo))).xyyyxxxy))))).s3141555101177207, ((VECTOR(uint32_t, 8))(((l_591[0][0] = (p_989->g_437.s7 &= l_696.x)) > (((VECTOR(uint8_t, 4))(p_989->g_725.sfe50)).x <= (l_663[3] < 0x4258538A82AAFA93L))), 0x37BC5039L, 1UL, 4294967291UL, ((*p_989->g_196) & l_724.s3), ((VECTOR(uint32_t, 2))(4294967295UL)), 0x53849888L)).s7652346200415737))).sc), 4294967294UL, 0x5610B4F4L)).odd, ((VECTOR(uint32_t, 2))(0x46B6B9EBL))))), ((VECTOR(uint32_t, 2))(0x602AAE81L))))), ((VECTOR(uint64_t, 4))(1UL)), ((VECTOR(uint64_t, 2))(0xDEC3721C46736EBDL)), 0x643DC78BFB720312L, 0xF8F4E8B0C6C54B89L, 0xEE7B7A98A79CA5CBL, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0xDC19B1C2D0256BACL, 7UL))))).s5 == l_726)));
                    }
                    (*p_989->g_121) = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((p_989->g_387.sd | ((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(0UL, l_591[1][0])) , p_989->g_196) != l_737), p_989->g_297)) , p_989->g_461), 7)) , ((((p_989->g_740 = l_738) != l_741) && 0x4CF29A8DL) || l_668.y))), l_742[0][4][0])) , 0x3BL), 5));
                    (**l_594) = (((safe_div_func_uint64_t_u_u((p_989->g_comm_values[p_989->tid] , (((safe_div_func_uint32_t_u_u((((VECTOR(int16_t, 2))(0x7CCFL, 7L)).lo || (safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((0UL <= ((l_698 |= ((l_619[9][0] = ((*l_754) = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(1UL, 1UL)).xyxyyyxy)).s42)), 0x778BL, 0xB251L)).x)) == ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(65533UL, (((!(p_989->g_386.y = (safe_mul_func_uint8_t_u_u((2UL < (safe_mul_func_int8_t_s_s(0x17L, ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((l_663[2] && ((((l_724.s6 = ((safe_add_func_uint8_t_u_u(246UL, 1L)) == ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_767.s68c713d69b9f9ab0)).sbd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_768.zwxz)).odd, ((VECTOR(int32_t, 8))(l_769.s49f8b56e)).s70))), (-1L), (-7L))).lo))))).hi)) >= FAKE_DIVERGE(p_989->group_1_offset, get_group_id(1), 10)) && 0x1F75F7218104EB28L) <= 0x5DL)), 0x9C38L)), l_663[1])), l_691.s4)) && (-9L))))), FAKE_DIVERGE(p_989->global_1_offset, get_global_id(1), 10))))) <= l_667.sd) , p_989->g_631.x), 7UL, ((VECTOR(uint16_t, 4))(0x9F6AL)), 1UL)).odd))).x)) > 0x1143EBC047F9E686L)) >= l_658.x), l_627.x)), FAKE_DIVERGE(p_989->global_0_offset, get_global_id(0), 10)))), (**p_989->g_657))) >= p_989->g_195.y) , l_667.sf)), l_629.y)) , 0x50F9BC12L) , (void*)0);
                }
                else
                { /* block id: 308 */
                    uint16_t *l_771 = (void*)0;
                    uint16_t *l_772 = (void*)0;
                    uint16_t *l_773 = &l_742[0][4][0];
                    int32_t ****l_775[9] = {&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594};
                    int i;
                    (**p_989->g_657) |= (l_591[1][0] = ((p_989->g_776 = ((l_770 >= ((*l_773) = GROUP_DIVERGE(0, 1))) , l_774)) != (l_778[6] = l_777)));
                    (*p_989->g_121) ^= ((VECTOR(int32_t, 2))(0x239FAD31L, (-9L))).lo;
                }
            }
            l_619[1][3] |= ((safe_mul_func_uint8_t_u_u((((((l_786 = (p_989->g_587.s4 , ((safe_mod_func_int16_t_s_s(0x2633L, 0x3FCFL)) < (safe_lshift_func_int16_t_s_u((((*l_785) = (void*)0) == &l_630[0][0]), 3))))) & ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x5E23059DL, l_787, (!(4294967293UL >= ((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 2))(l_800.s23)).yxyxyxxx, ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(l_801.sda)).yxxx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(9UL, 0x5EE5859AL)), 0x4B59A408L, 0x74901FB1L)).wzwwzwwwywwyyywy)).sa390))).wwwyywww, ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x231BB29619BFA784L, 18446744073709551614UL))))))).yyyxxyxy))).s5, (((*l_803) = l_802) == (void*)0))) , l_769.sd), 4L)), 7)), 1L)), (*p_9))) >= 18446744073709551612UL), p_989->g_674.w)) , (**p_989->g_657)))), 0x1361BBCCL, ((VECTOR(int32_t, 4))(1L)))).s43)).odd) , l_804) != l_653[3][0]) < (*p_989->g_196)), p_989->g_168)) , (*p_989->g_121));
        }
    }
    return (*p_989->g_196);
}


/* ------------------------------------------ */
/* 
 * reads : p_989->g_121 p_989->g_122
 * writes: p_989->g_122
 */
int32_t  func_94(int64_t  p_95, uint16_t  p_96, uint32_t  p_97, struct S1 * p_989)
{ /* block id: 243 */
    uint8_t l_581[7][1] = {{8UL},{8UL},{8UL},{8UL},{8UL},{8UL},{8UL}};
    int i, j;
    (*p_989->g_121) |= l_581[4][0];
    return l_581[4][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_989->g_195 p_989->g_167 p_989->g_569 p_989->g_389
 * writes: p_989->g_167 p_989->g_213 p_989->g_195
 */
uint32_t  func_104(int32_t  p_105, uint32_t  p_106, struct S1 * p_989)
{ /* block id: 229 */
    int16_t **l_565 = &p_989->g_196;
    int16_t ***l_566 = &l_565;
    int32_t l_577 = 0x796D108AL;
    (*l_566) = l_565;
    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x72248B7DL)))).lo)
    { /* block id: 231 */
        return p_989->g_195.x;
    }
    else
    { /* block id: 233 */
        int32_t l_580 = 0x21CDC0C9L;
        for (p_989->g_167 = (-28); (p_989->g_167 == 26); p_989->g_167++)
        { /* block id: 236 */
            uint32_t l_578 = 0x3BDCE4A7L;
            int32_t *l_579[8] = {&l_577,(void*)0,&l_577,&l_577,(void*)0,&l_577,&l_577,(void*)0};
            int i;
            p_989->g_195.y |= (l_580 = ((p_989->g_569 == &p_989->g_570) >= (~(safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s(l_577, l_578)), p_989->g_389.sa)), (p_989->g_213 = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x21L, 0UL)).yxyx)).w))))));
        }
        return p_105;
    }
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_107(uint64_t  p_108, uint16_t  p_109, int8_t * p_110, int32_t  p_111, struct S1 * p_989)
{ /* block id: 226 */
    uint32_t l_562 = 4294967295UL;
    l_562++;
    return p_108;
}


/* ------------------------------------------ */
/* 
 * reads : p_989->g_121 p_989->g_122 p_989->g_4 p_989->g_167 p_989->g_170 p_989->g_196 p_989->g_195 p_989->g_225 p_989->g_228 p_989->g_243 p_989->g_173 p_989->g_197 p_989->g_168 p_989->g_164 p_989->g_297 p_989->g_171 p_989->g_408 p_989->g_387 p_989->g_425 p_989->g_442.f0 p_989->g_461 p_989->g_494 p_989->g_501 p_989->g_531 p_989->g_comm_values p_989->g_558 p_989->g_386
 * writes: p_989->g_164 p_989->g_167 p_989->g_168 p_989->g_171 p_989->g_173 p_989->g_213 p_989->g_122 p_989->g_225 p_989->g_243 p_989->g_197 p_989->g_297 p_989->g_195 p_989->g_408 p_989->g_226 p_989->g_387 p_989->g_461 p_989->g_509 p_989->g_561
 */
int8_t  func_131(int8_t  p_132, uint8_t  p_133, struct S1 * p_989)
{ /* block id: 48 */
    uint64_t l_142 = 0x15F0F53890954F3EL;
    VECTOR(int32_t, 8) l_409 = (VECTOR(int32_t, 8))(0x11E89FC9L, (VECTOR(int32_t, 4))(0x11E89FC9L, (VECTOR(int32_t, 2))(0x11E89FC9L, 0x67E7EB24L), 0x67E7EB24L), 0x67E7EB24L, 0x11E89FC9L, 0x67E7EB24L);
    VECTOR(int32_t, 4) l_457 = (VECTOR(int32_t, 4))(0x792FD3F1L, (VECTOR(int32_t, 2))(0x792FD3F1L, 1L), 1L);
    int64_t l_492 = (-2L);
    int16_t l_536[7][1][8] = {{{0x13DCL,0x7296L,(-6L),(-4L),0x7296L,(-4L),(-6L),0x7296L}},{{0x13DCL,0x7296L,(-6L),(-4L),0x7296L,(-4L),(-6L),0x7296L}},{{0x13DCL,0x7296L,(-6L),(-4L),0x7296L,(-4L),(-6L),0x7296L}},{{0x13DCL,0x7296L,(-6L),(-4L),0x7296L,(-4L),(-6L),0x7296L}},{{0x13DCL,0x7296L,(-6L),(-4L),0x7296L,(-4L),(-6L),0x7296L}},{{0x13DCL,0x7296L,(-6L),(-4L),0x7296L,(-4L),(-6L),0x7296L}},{{0x13DCL,0x7296L,(-6L),(-4L),0x7296L,(-4L),(-6L),0x7296L}}};
    int i, j, k;
    for (p_132 = 0; (p_132 <= (-24)); --p_132)
    { /* block id: 51 */
        int8_t l_152 = 0x6BL;
        uint8_t *l_417 = &p_989->g_164;
        uint8_t l_426[10][9][2] = {{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}},{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}},{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}},{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}},{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}},{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}},{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}},{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}},{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}},{{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL},{0x1CL,0x1CL}}};
        uint32_t l_434 = 0UL;
        int32_t l_479 = (-1L);
        int64_t l_491 = (-1L);
        VECTOR(int8_t, 16) l_499 = (VECTOR(int8_t, 16))(0x3BL, (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 0x6BL), 0x6BL), 0x6BL, 0x3BL, 0x6BL, (VECTOR(int8_t, 2))(0x3BL, 0x6BL), (VECTOR(int8_t, 2))(0x3BL, 0x6BL), 0x3BL, 0x6BL, 0x3BL, 0x6BL);
        int i, j, k;
        if ((*p_989->g_121))
            break;
        for (p_133 = 0; (p_133 <= 41); p_133++)
        { /* block id: 55 */
            VECTOR(int32_t, 4) l_157 = (VECTOR(int32_t, 4))(0x1411BBB0L, (VECTOR(int32_t, 2))(0x1411BBB0L, 0x17799F0FL), 0x17799F0FL);
            int16_t *l_199 = &p_989->g_197;
            VECTOR(int8_t, 4) l_454 = (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, (-8L)), (-8L));
            uint64_t *l_460 = &p_989->g_461;
            uint16_t *l_472 = (void*)0;
            uint16_t *l_473 = (void*)0;
            uint16_t *l_474 = (void*)0;
            uint16_t *l_475 = (void*)0;
            uint16_t *l_476 = (void*)0;
            uint16_t *l_477 = (void*)0;
            uint16_t *l_478[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_493 = &p_989->g_173[5];
            VECTOR(uint32_t, 4) l_520 = (VECTOR(uint32_t, 4))(0x7295088BL, (VECTOR(uint32_t, 2))(0x7295088BL, 0UL), 0UL);
            int i;
            if ((p_989->g_122[3][4] ^ ((VECTOR(uint32_t, 2))(0x0BC21580L, 0xB896CBFCL)).odd))
            { /* block id: 56 */
                int32_t **l_162 = (void*)0;
                uint8_t *l_163 = &p_989->g_164;
                int8_t *l_165 = (void*)0;
                int8_t *l_166 = &p_989->g_167;
                int16_t **l_198[5][7] = {{&p_989->g_196,&p_989->g_196,&p_989->g_196,(void*)0,&p_989->g_196,(void*)0,&p_989->g_196},{&p_989->g_196,&p_989->g_196,&p_989->g_196,(void*)0,&p_989->g_196,(void*)0,&p_989->g_196},{&p_989->g_196,&p_989->g_196,&p_989->g_196,(void*)0,&p_989->g_196,(void*)0,&p_989->g_196},{&p_989->g_196,&p_989->g_196,&p_989->g_196,(void*)0,&p_989->g_196,(void*)0,&p_989->g_196},{&p_989->g_196,&p_989->g_196,&p_989->g_196,(void*)0,&p_989->g_196,(void*)0,&p_989->g_196}};
                int32_t *l_407 = &p_989->g_408;
                int i, j;
                (*l_407) ^= ((!func_138(p_132, l_142, func_143(func_147((l_199 = func_150(((p_989->g_168 = ((*l_166) |= (((p_989->g_122[3][4] , l_152) != ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(l_157.xyyz)).z, ((-10L) & (((*l_163) = (((+(safe_rshift_func_uint16_t_u_s(((p_132 >= (safe_mul_func_uint8_t_u_u(0x94L, ((((((GROUP_DIVERGE(1, 1) ^ FAKE_DIVERGE(p_989->group_2_offset, get_group_id(2), 10)) , ((&p_989->g_121 == l_162) > p_132)) && p_989->g_4.x) > FAKE_DIVERGE(p_989->global_2_offset, get_global_id(2), 10)) != 7UL) <= 0x608F30EDL)))) , l_142), l_142))) < 0x00L) & FAKE_DIVERGE(p_989->global_2_offset, get_global_id(2), 10))) <= 0x52L)))), l_142)) || 18446744073709551607UL)) < p_133))) >= p_133), p_989)), p_989->g_195.y, p_989), l_157.x, l_152, p_989), p_989)) && (-1L));
            }
            else
            { /* block id: 171 */
                uint32_t l_432[7];
                int32_t l_433 = 0x297F7636L;
                int i;
                for (i = 0; i < 7; i++)
                    l_432[i] = 4294967295UL;
                if (((VECTOR(int32_t, 2))(l_409.s52)).odd)
                { /* block id: 172 */
                    int32_t l_410 = (-8L);
                    return l_410;
                }
                else
                { /* block id: 174 */
                    uint8_t **l_413 = (void*)0;
                    uint8_t **l_414 = &p_989->g_226;
                    uint8_t *l_416 = &p_989->g_213;
                    uint8_t **l_415[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    uint16_t *l_418 = (void*)0;
                    uint16_t *l_419 = (void*)0;
                    uint16_t *l_420[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_431 = 7L;
                    int32_t *l_435 = (void*)0;
                    int32_t *l_436 = &p_989->g_173[4];
                    int16_t **l_453 = &p_989->g_196;
                    int i;
                    (*l_436) |= ((safe_mul_func_int16_t_s_s(((l_417 = ((*l_414) = &p_133)) != (void*)0), 0xB1A6L)) != ((((p_989->g_387.sf--) >= (safe_rshift_func_uint8_t_u_s((p_989->g_425 , (l_426[6][5][0] || (l_433 = ((*l_416) = ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(p_132, 0)), l_142)) || ((l_142 || ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(p_132, 7L, l_431, l_432[1], p_132, ((VECTOR(int16_t, 2))(0x2659L)), 0x4F5AL)).odd, ((VECTOR(int16_t, 4))((-1L)))))), ((VECTOR(int16_t, 2))(0L)), 0x53FAL, 0L)).s3414154446023532, ((VECTOR(int16_t, 16))(0x2C66L))))).s34)).hi) <= (*p_989->g_121))))))), 1))) || (-1L)) == l_434));
                    (*p_989->g_121) = ((VECTOR(int32_t, 8))(p_989->g_437.s83eeb86f)).s7;
                    l_409.s5 ^= ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(0x38L, (safe_div_func_int32_t_s_s((p_989->g_442 , p_132), (p_133 || p_989->g_173[2]))), 0UL, 0UL)).y, 5)) , ((*l_436) = (1L != (safe_sub_func_uint16_t_u_u(p_133, ((((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(((p_132 , (safe_rshift_func_int16_t_s_s((l_453 == ((*l_436) , (void*)0)), 4))) , l_454.z), 0x0AL)) , p_989->g_442.f0), FAKE_DIVERGE(p_989->local_1_offset, get_local_id(1), 10))), 0x7390L)) , p_132) , 0x6E9F5182L) > l_432[4]))))));
                }
                if ((*p_989->g_121))
                    break;
                for (p_989->g_213 = 0; (p_989->g_213 > 17); ++p_989->g_213)
                { /* block id: 188 */
                    (*p_989->g_121) = p_133;
                    (*p_989->g_121) = (-8L);
                }
                (*p_989->g_121) = l_426[0][6][1];
            }
            if (((((((VECTOR(int32_t, 4))(l_457.zzyw)).z >= ((+(safe_div_func_int32_t_s_s(0L, p_132))) < (((*l_460)++) , (((p_989->g_243 ^ (safe_add_func_int8_t_s_s((FAKE_DIVERGE(p_989->local_2_offset, get_local_id(2), 10) != (safe_mul_func_int8_t_s_s(((l_409.s4 = (0UL & (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_132, ((l_479 = l_409.s3) || (((safe_div_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 4))(((0x97L && (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((p_989->g_197 == l_491), 0x1D38L)) & 2L), p_133)) >= l_409.s6), l_457.z)), 6))) || l_454.y), ((VECTOR(int8_t, 2))(1L)), 0L)).x)), p_132)) , l_454.y) && 3L)))), (*p_989->g_196))))) ^ l_434), l_426[6][5][0]))), l_454.w))) & l_492) >= p_989->g_4.x)))) || p_989->g_461) < 1L) ^ 0x503EB2C9BCC356E0L))
            { /* block id: 197 */
                int32_t l_500 = 0x0DEF5F75L;
                int64_t *l_508 = &p_989->g_509;
                uint8_t **l_510[9][3] = {{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417}};
                int32_t *l_511 = (void*)0;
                int32_t *l_512 = &p_989->g_408;
                int32_t *l_513 = (void*)0;
                int32_t *l_514 = &p_989->g_173[2];
                int32_t *l_515 = (void*)0;
                int32_t *l_516 = &p_989->g_408;
                int32_t *l_517 = &p_989->g_408;
                int32_t *l_518 = (void*)0;
                int32_t *l_519[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_519[i] = (void*)0;
                (*p_989->g_494) = l_493;
                (*p_989->g_121) = ((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((-1L), 0x61EDL)), ((+((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))((-9L), (-1L))).yxxyyxxyyyyyyyyy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_499.sac)).yyxyxxyy)).s6656102534650605))), ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(0L, 3L)).yyxx, ((VECTOR(int8_t, 4))(0x4BL, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))((-7L), 0x0EL, ((VECTOR(int8_t, 4))((l_500 == ((VECTOR(uint64_t, 4))(p_989->g_501.wyzy)).y), (-6L), 0x11L, 0L)), 0x0EL, (-1L))).s67)), (int8_t)(safe_sub_func_int8_t_s_s((p_132 && ((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_133, ((((*l_508) = ((((*p_989->g_494) == l_493) || 4294967290UL) && 0x0696L)) , (void*)0) != (void*)0))), p_133)) ^ (*l_493)) , l_510[2][1]) == &p_989->g_226)), 2L))))), 0L))))).ywwxxyxwwxyzzyxz))).odd)).lo)).y) <= p_132))) , (*p_989->g_121));
                if (p_132)
                    break;
                l_520.w--;
            }
            else
            { /* block id: 203 */
                int32_t **l_523 = (void*)0;
                int32_t **l_524 = &l_493;
                uint64_t *l_538 = &p_989->g_461;
                (*l_524) = (void*)0;
                for (p_989->g_197 = 3; (p_989->g_197 != 23); p_989->g_197 = safe_add_func_uint8_t_u_u(p_989->g_197, 1))
                { /* block id: 207 */
                    uint8_t *l_537 = &p_989->g_164;
                    int32_t l_551 = (-1L);
                    int32_t **l_552 = &l_493;
                    int32_t l_559 = 0x1D0D4C9EL;
                    uint32_t *l_560 = &p_989->g_561;
                    (*p_989->g_121) = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_133, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(9L, ((VECTOR(int8_t, 2))(p_989->g_531.xy)), ((VECTOR(int8_t, 8))(0x45L, (-1L), (-2L), 3L, (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0x5A6BL, (0x256583566EB00BBEL && (((*l_537) ^= l_536[3][0][0]) || (l_538 != l_460))))), l_479)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(1L, 1L, ((safe_sub_func_int32_t_s_s(((safe_div_func_int64_t_s_s((((l_457.z = (((+p_133) , p_989->g_501.x) == 0x6DL)) >= 0x3D2BL) , p_133), p_132)) , p_132), (-1L))) != p_132), 5L, 0L, 0x35L, ((VECTOR(int8_t, 8))((-1L))), 0x7CL, (-1L))).odd)).s54)), (-2L))).s4, ((VECTOR(int8_t, 4))(0x6FL)), 0x50L, ((VECTOR(int8_t, 2))(0x71L)), 0x4BL, l_426[4][4][1], 0x39L, 6L, 0x6DL)).s85)), ((VECTOR(int8_t, 4))(0x41L)), ((VECTOR(int8_t, 2))(0x3AL)), 1L, 0x22L, 0x1CL, ((VECTOR(int8_t, 4))(0x5EL)), (-7L))).s6)), 7));
                    if ((p_989->g_4.x != (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_132, (*p_989->g_121))), p_132)), (GROUP_DIVERGE(1, 1) > p_989->g_173[2])))))
                    { /* block id: 211 */
                        return p_989->g_122[4][1];
                    }
                    else
                    { /* block id: 213 */
                        (*p_989->g_121) |= p_132;
                    }
                    (*p_989->g_121) = (safe_lshift_func_uint16_t_u_s((l_551 | (l_552 == ((((safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(p_989->g_comm_values[p_989->tid], (((VECTOR(int32_t, 4))(0L, p_133, 0x13218245L, 6L)).x >= 4294967295UL))), ((safe_unary_minus_func_int16_t_s(((p_132 == (p_133 < (((*l_560) = ((((VECTOR(int8_t, 16))(p_989->g_558.xyyyxyxxyxyyyyxy)).sf || (((l_559 = (255UL || (-4L))) | p_132) , p_133)) || (*p_989->g_196))) , 0x2E2EL))) < FAKE_DIVERGE(p_989->global_0_offset, get_global_id(0), 10)))) & p_989->g_386.w))) || 0x2536L) , 0xF33E3F29L) , (void*)0))), 8));
                }
            }
        }
    }
    l_409.s4 = (-1L);
    (*p_989->g_494) = (*p_989->g_494);
    return l_409.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_989->g_243 p_989->g_121 p_989->g_122 p_989->g_173 p_989->g_196 p_989->g_197 p_989->g_168 p_989->g_167 p_989->g_164 p_989->g_297 p_989->g_312 p_989->g_313 p_989->g_4 p_989->g_comm_values p_989->g_195 p_989->g_11 p_989->g_386 p_989->g_387 p_989->g_389 p_989->g_171
 * writes: p_989->g_243 p_989->g_197 p_989->g_171 p_989->g_167 p_989->g_173 p_989->g_297 p_989->g_122 p_989->g_375 p_989->g_386 p_989->g_195 p_989->g_164
 */
int32_t  func_138(int64_t  p_139, uint8_t  p_140, int32_t ** p_141, struct S1 * p_989)
{ /* block id: 77 */
    int64_t l_240 = 0x6AF71681FEF717FCL;
    int64_t *l_241 = (void*)0;
    int64_t *l_242 = &p_989->g_243;
    uint16_t l_256 = 0xAF94L;
    VECTOR(int32_t, 16) l_267 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x02338D8AL), 0x02338D8AL), 0x02338D8AL, 1L, 0x02338D8AL, (VECTOR(int32_t, 2))(1L, 0x02338D8AL), (VECTOR(int32_t, 2))(1L, 0x02338D8AL), 1L, 0x02338D8AL, 1L, 0x02338D8AL);
    int8_t *l_318 = &p_989->g_11;
    VECTOR(uint32_t, 8) l_384 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967294UL), 4294967294UL), 4294967294UL, 0UL, 4294967294UL);
    uint8_t **l_402 = &p_989->g_226;
    uint8_t ***l_401 = &l_402;
    int i;
    if ((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s((-10L))), (~(((*l_242) ^= l_240) | ((p_140 , (safe_mod_func_uint8_t_u_u(0xE5L, ((p_139 , ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x31L, 0x6AL)).yxyxxxxyyyyyyyxy)).sc) , p_139)))) != 0x90E59BD8L))))), ((safe_add_func_int16_t_s_s(((*p_989->g_196) &= (((safe_lshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(l_240, (safe_lshift_func_int16_t_s_s((l_240 ^ (*p_989->g_121)), 9)))) || p_140) >= p_139), (-8L))) & FAKE_DIVERGE(p_989->group_2_offset, get_group_id(2), 10)) == l_256), p_140)) <= p_989->g_173[5]) > (-4L))), l_240)) , p_140))) >= p_989->g_168) , (*p_989->g_121)))
    { /* block id: 80 */
        int32_t *l_259 = &p_989->g_173[3];
        int16_t l_289[2];
        int32_t l_304 = 0x4F0741B6L;
        int32_t l_305 = 2L;
        int32_t l_306 = 0x1AF33EE6L;
        uint16_t l_307 = 0x2C3CL;
        uint16_t *l_319 = &l_307;
        int i;
        for (i = 0; i < 2; i++)
            l_289[i] = 1L;
        for (l_256 = (-25); (l_256 <= 54); l_256 = safe_add_func_int16_t_s_s(l_256, 5))
        { /* block id: 83 */
            if ((*p_989->g_121))
                break;
            if ((*p_989->g_121))
                continue;
            (*p_141) = l_259;
        }
        for (l_256 = 0; (l_256 == 20); l_256 = safe_add_func_uint32_t_u_u(l_256, 3))
        { /* block id: 90 */
            uint16_t l_284[9] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL};
            int64_t l_288[4][7][9] = {{{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL}},{{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL}},{{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL}},{{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL},{0x67EF8DF2C5EFF5E1L,0x687C122F0C0610ABL,0x0E83FCA4021DC2B0L,0x29901AA018A7B43AL,(-1L),5L,0L,0x28B329836500BA39L,0x687C122F0C0610ABL}}};
            int32_t *l_302 = &p_989->g_173[5];
            int32_t *l_303[8] = {&p_989->g_173[2],&p_989->g_173[2],&p_989->g_173[2],&p_989->g_173[2],&p_989->g_173[2],&p_989->g_173[2],&p_989->g_173[2],&p_989->g_173[2]};
            int i, j, k;
            for (l_240 = 0; (l_240 <= (-10)); --l_240)
            { /* block id: 93 */
                VECTOR(uint16_t, 2) l_270 = (VECTOR(uint16_t, 2))(0x18C2L, 0xB179L);
                VECTOR(uint16_t, 16) l_271 = (VECTOR(uint16_t, 16))(0x5656L, (VECTOR(uint16_t, 4))(0x5656L, (VECTOR(uint16_t, 2))(0x5656L, 8UL), 8UL), 8UL, 0x5656L, 8UL, (VECTOR(uint16_t, 2))(0x5656L, 8UL), (VECTOR(uint16_t, 2))(0x5656L, 8UL), 0x5656L, 8UL, 0x5656L, 8UL);
                uint16_t *l_272 = (void*)0;
                uint16_t *l_273 = (void*)0;
                uint16_t *l_274 = (void*)0;
                uint16_t *l_275 = (void*)0;
                uint16_t *l_276 = (void*)0;
                uint16_t *l_277 = (void*)0;
                uint16_t *l_278[1];
                int32_t l_279 = 0x32AAA48FL;
                int i;
                for (i = 0; i < 1; i++)
                    l_278[i] = (void*)0;
                for (p_989->g_167 = 21; (p_989->g_167 < 11); p_989->g_167 = safe_sub_func_uint16_t_u_u(p_989->g_167, 2))
                { /* block id: 96 */
                    uint64_t l_266 = 0xCC6A068D99A13CDDL;
                    return l_266;
                }
                (*l_259) = ((VECTOR(int32_t, 8))(l_267.s9dcf0f05)).s7;
                atomic_sub(&p_989->g_atomic_reduction[get_linear_group_id()], (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_140, 0xF396L, 0xAA81L, 8UL, 0xFFD4L, ((void*)0 == p_141), ((VECTOR(uint16_t, 4))(l_270.xxyx)), 0xD355L, p_989->g_168, 4UL, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_271.see05ac8703f7e1a8)).sb635)).odd, (uint16_t)(l_279 = FAKE_DIVERGE(p_989->group_0_offset, get_group_id(0), 10)), (uint16_t)((l_279 = (safe_sub_func_int8_t_s_s((l_284[6] && (l_240 > ((*p_989->g_196) , ((safe_lshift_func_uint8_t_u_u(((((safe_unary_minus_func_int64_t_s(0x7ADD36D4C9C44FFAL)) & l_288[2][3][1]) < 0x48685BBDA40B511EL) == 0UL), 7)) , l_271.s4)))), l_279))) && p_140)))), 1UL)).sc, p_989->g_164)) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_989->v_collective += p_989->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            l_289[1] |= p_140;
            for (l_240 = 0; (l_240 <= 12); l_240 = safe_add_func_int16_t_s_s(l_240, 6))
            { /* block id: 107 */
                uint64_t *l_296[4] = {&p_989->g_297,&p_989->g_297,&p_989->g_297,&p_989->g_297};
                int i;
                (*p_989->g_121) = (safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s((&p_989->g_197 == (void*)0), (++p_989->g_297))), p_989->g_168));
                if (l_267.s4)
                    break;
                for (p_140 = 0; (p_140 > 39); p_140 = safe_add_func_uint8_t_u_u(p_140, 6))
                { /* block id: 113 */
                    (*p_141) = l_302;
                }
            }
            l_307--;
        }
        (*l_259) = (((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((safe_lshift_func_int16_t_s_u(1L, 15)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_989->g_312.sf1)))), 0xD1L)).y, (*l_259), (p_989->g_313 , (((safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((*l_259) | p_989->g_173[0]), (0x7111L || ((*l_319) = (l_256 > (((void*)0 == l_318) ^ l_267.s2)))))) <= p_140), 0x44L)) , (void*)0) != p_989->g_196)), 255UL, 0xB0L, 0x0DL, ((VECTOR(uint8_t, 2))(0UL)), 0x34L, 0x55L, ((VECTOR(uint8_t, 2))(247UL)), 0x51L, ((VECTOR(uint8_t, 2))(255UL)), 251UL)).s1728, ((VECTOR(uint8_t, 4))(253UL))))).zxxwxyxzwyzxzzzy)))).s3d)).xxxyxyxy, (uint8_t)(*l_259)))).s4566321117731260))), (uint8_t)(*l_259), (uint8_t)0x49L))).s9 ^ 1L);
        if ((atomic_inc(&p_989->l_atomic_input[24]) == 2))
        { /* block id: 122 */
            int32_t l_320 = 0x540B067CL;
            for (l_320 = 0; (l_320 < (-23)); l_320--)
            { /* block id: 125 */
                int32_t l_324 = 0x146EF3BAL;
                int32_t *l_323[9] = {(void*)0,&l_324,(void*)0,(void*)0,&l_324,(void*)0,(void*)0,&l_324,(void*)0};
                int32_t *l_325 = &l_324;
                VECTOR(int32_t, 2) l_326 = (VECTOR(int32_t, 2))(0x48544304L, (-1L));
                VECTOR(int32_t, 4) l_327 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x27C1253FL), 0x27C1253FL);
                VECTOR(uint32_t, 8) l_328 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xA1454E4DL), 0xA1454E4DL), 0xA1454E4DL, 4294967295UL, 0xA1454E4DL);
                int64_t l_329 = 4L;
                int16_t l_330 = (-4L);
                int32_t l_331 = (-1L);
                uint8_t l_332 = 248UL;
                VECTOR(int32_t, 2) l_333 = (VECTOR(int32_t, 2))(4L, 0L);
                VECTOR(int16_t, 4) l_334 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0A16L), 0x0A16L);
                VECTOR(int16_t, 4) l_335 = (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 1L), 1L);
                VECTOR(int16_t, 2) l_336 = (VECTOR(int16_t, 2))(0x3169L, (-1L));
                VECTOR(int16_t, 2) l_337 = (VECTOR(int16_t, 2))(1L, 8L);
                VECTOR(int16_t, 8) l_338 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x170BL), 0x170BL), 0x170BL, 0L, 0x170BL);
                uint32_t l_339 = 0x5348FDDFL;
                uint32_t l_340 = 0x1ED3BE56L;
                int32_t l_341 = 0L;
                VECTOR(int16_t, 2) l_342 = (VECTOR(int16_t, 2))((-6L), 0x2990L);
                uint32_t l_343 = 0UL;
                uint16_t l_344 = 0x0919L;
                union U0 l_345 = {0L};/* VOLATILE GLOBAL l_345 */
                int16_t l_346 = 0x3949L;
                int i;
                l_325 = l_323[2];
                l_346 = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))((-1L), (-1L))).yyyyyxyy, ((VECTOR(int32_t, 8))(l_326.xxxyyyxy)), ((VECTOR(int32_t, 2))(0x7C54F13CL, 0x439F590BL)).yyyxyxyx))).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(l_327.xxyxxzzw)).s41))).xyxxyyyxyxxxyyyy))))).sb845, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(1L, 0x11C23FB7L)), (int32_t)l_328.s7, (int32_t)(l_330 = l_329)))).yxyx))).lo)).xxxy))).yyyzyzyw)).even, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))((-8L), ((VECTOR(int32_t, 2))(7L, 0x3807CDF8L)), l_331, l_332, 0x4810DFA7L, 0L, 0x080A179FL)), ((VECTOR(int32_t, 4))(l_333.xyxy)).zyyyyzwy, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(l_334.xxyxxwwyxxzywxyw)).sc1, (int16_t)0x06F4L))), ((VECTOR(int16_t, 16))(l_335.yzzxzyyzzyxxzxyy)).s5b, ((VECTOR(int16_t, 16))(l_336.yyyyxyxyyyxxyyyy)).sac))).yxxyxyxx)), ((VECTOR(int16_t, 16))(l_337.yxyxyxxyyxxyxyyy)).even, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_338.s06)).xxyy)).odd, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((l_339 = 0x6CDFL), l_340, 0x50F5L, 0x0500L)).wyxwxzwz)), ((VECTOR(int16_t, 8))(l_341, 1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_342.xx)).xyxx)).even)), (((l_344 = l_343) , l_345) , 0L), 0x6C4BL, 1L, (-1L))), ((VECTOR(int16_t, 8))(0x1C15L))))).s25))).xxyy)).wyzwywxx))).odd, ((VECTOR(uint16_t, 4))(4UL))))).xzwywzzw))).odd, ((VECTOR(int32_t, 4))(8L))))).x;
            }
            for (l_320 = 17; (l_320 <= (-1)); l_320 = safe_sub_func_uint8_t_u_u(l_320, 3))
            { /* block id: 134 */
                int32_t l_349 = 0L;
                int32_t l_358[5];
                int16_t l_359 = 0x4093L;
                uint16_t l_360 = 1UL;
                int i;
                for (i = 0; i < 5; i++)
                    l_358[i] = 0x62C4EE12L;
                for (l_349 = 0; (l_349 < (-28)); l_349 = safe_sub_func_int8_t_s_s(l_349, 1))
                { /* block id: 137 */
                    uint64_t l_352[4][1][4] = {{{0UL,18446744073709551615UL,0UL,0UL}},{{0UL,18446744073709551615UL,0UL,0UL}},{{0UL,18446744073709551615UL,0UL,0UL}},{{0UL,18446744073709551615UL,0UL,0UL}}};
                    VECTOR(int32_t, 16) l_355 = (VECTOR(int32_t, 16))(0x26E62909L, (VECTOR(int32_t, 4))(0x26E62909L, (VECTOR(int32_t, 2))(0x26E62909L, 0x39437433L), 0x39437433L), 0x39437433L, 0x26E62909L, 0x39437433L, (VECTOR(int32_t, 2))(0x26E62909L, 0x39437433L), (VECTOR(int32_t, 2))(0x26E62909L, 0x39437433L), 0x26E62909L, 0x39437433L, 0x26E62909L, 0x39437433L);
                    uint8_t l_356 = 1UL;
                    int8_t l_357 = 0x63L;
                    int i, j, k;
                    --l_352[2][0][1];
                    l_357 = (l_355.se = (l_356 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_355.s65026712)))).s4));
                }
                l_358[0] = 1L;
                l_360 |= l_359;
            }
            unsigned int result = 0;
            result += l_320;
            atomic_add(&p_989->l_special_values[24], result);
        }
        else
        { /* block id: 146 */
            (1 + 1);
        }
    }
    else
    { /* block id: 149 */
        uint32_t l_377 = 0UL;
        uint8_t l_398 = 1UL;
        for (l_240 = 0; (l_240 > (-21)); l_240--)
        { /* block id: 152 */
            int32_t *l_376[2];
            VECTOR(uint32_t, 2) l_385 = (VECTOR(uint32_t, 2))(4294967295UL, 0xF718796EL);
            VECTOR(uint32_t, 4) l_388 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xDAA88D43L), 0xDAA88D43L);
            uint16_t *l_392 = (void*)0;
            uint16_t *l_393 = (void*)0;
            uint16_t *l_394 = (void*)0;
            uint16_t *l_395 = (void*)0;
            uint16_t *l_396 = (void*)0;
            uint16_t *l_397 = (void*)0;
            uint8_t ****l_403 = &l_401;
            uint8_t *l_406 = &p_989->g_164;
            int i;
            for (i = 0; i < 2; i++)
                l_376[i] = (void*)0;
            (*p_989->g_121) = (((*p_989->g_196) |= ((VECTOR(int16_t, 2))(0x1960L, 0x73DAL)).hi) == ((VECTOR(uint16_t, 8))(((~(safe_mul_func_uint8_t_u_u(((0x44DF1C61AB799621L || (p_989->g_313 , ((VECTOR(uint64_t, 2))(0xE0C24527B3B8669BL, 0x6C857163D97BA0DDL)).odd)) < (((p_989->g_375 = ((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(p_139, (((safe_lshift_func_int8_t_s_u((p_139 || (safe_add_func_int8_t_s_s(p_989->g_297, ((0xD75BL || 0x22E0L) < (safe_mul_func_int8_t_s_s(5L, (0xAB86L > p_989->g_4.x))))))), p_140)) || p_989->g_168) | p_989->g_comm_values[p_989->tid]))), p_140)) ^ 4294967295UL)) < l_267.sc) && 0x3090F8DB9012AFFEL)), 9L))) < p_989->g_195.x), 0UL, ((VECTOR(uint16_t, 2))(0xFC98L)), p_989->g_11, ((VECTOR(uint16_t, 2))(0x7B92L)), 65530UL)).s0);
            ++l_377;
            (*p_989->g_121) = ((((safe_div_func_uint8_t_u_u(((*l_406) = ((((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(l_384.s36050373)).s34, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(l_385.yyyxyxyxyyyxxxyy)).s379b))), p_989->g_173[2], ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(p_989->g_386.wx)).yyxyyxxyxyyyxxxx, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_989->g_387.sc3)).xxxxxyxx)).s34, ((VECTOR(uint16_t, 2))(0UL, 1UL))))).yyyx))))).yxywwwyyyxwxwwyx))))), ((VECTOR(uint32_t, 2))(l_388.yz)).xyxyyxyyxxyxyxyx))).sbb)), 5UL, 4294967295UL)), ((VECTOR(uint32_t, 4))(p_989->g_389.sc462)), (safe_mul_func_uint16_t_u_u(((((*p_141) = (*p_141)) == l_376[0]) , (l_267.sc = (p_989->g_386.z = (l_398--)))), ((-1L) && ((((*l_403) = l_401) != &l_402) > (6L != l_384.s4))))), 0xE61D02FFL, 0x4AF10C46L)).sa3))), 0xAFB608B2L, 4294967295UL)).xwwyxzxzywwwzxzy)))).s6, (p_989->g_195.x = (((*p_989->g_196) ^= (safe_lshift_func_int8_t_s_u(0x4BL, 3))) >= 0xCD48L)))) & p_139) || l_240) | FAKE_DIVERGE(p_989->group_1_offset, get_group_id(1), 10))), p_139)) || p_139) , p_989->g_173[0]) ^ 247UL);
        }
        (*p_141) = (*p_141);
    }
    return l_256;
}


/* ------------------------------------------ */
/* 
 * reads : p_989->g_225 p_989->g_228 p_989->g_121 p_989->g_122
 * writes: p_989->g_225 p_989->g_122
 */
int32_t ** func_143(int16_t * p_144, uint8_t  p_145, uint64_t  p_146, struct S1 * p_989)
{ /* block id: 72 */
    uint8_t **l_229[7][4][9] = {{{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226}},{{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226}},{{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226}},{{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226}},{{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226}},{{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226}},{{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226},{(void*)0,&p_989->g_226,(void*)0,&p_989->g_226,(void*)0,(void*)0,&p_989->g_226,&p_989->g_226,&p_989->g_226}}};
    uint8_t ***l_232 = &l_229[6][2][1];
    int32_t l_233 = 5L;
    int32_t **l_234 = &p_989->g_171;
    int i, j, k;
    (*p_989->g_228) = p_989->g_225;
    (*l_232) = l_229[6][2][1];
    (*p_989->g_121) ^= l_233;
    return l_234;
}


/* ------------------------------------------ */
/* 
 * reads : p_989->g_173 p_989->g_4 p_989->g_196 p_989->g_197 p_989->g_121 p_989->g_122
 * writes: p_989->g_173 p_989->g_213 p_989->g_122
 */
int16_t * func_147(int16_t * p_148, int64_t  p_149, struct S1 * p_989)
{ /* block id: 66 */
    int32_t *l_200 = &p_989->g_173[0];
    int32_t *l_201 = (void*)0;
    int32_t *l_202 = (void*)0;
    int32_t *l_203 = &p_989->g_173[3];
    int32_t *l_204[5][1] = {{&p_989->g_173[2]},{&p_989->g_173[2]},{&p_989->g_173[2]},{&p_989->g_173[2]},{&p_989->g_173[2]}};
    int64_t l_205 = 0x74F643CFA673B594L;
    uint32_t l_206 = 1UL;
    int16_t **l_220 = &p_989->g_196;
    int i, j;
    --l_206;
    (*l_200) = p_149;
    (*p_989->g_121) ^= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x5CL, ((p_989->g_213 = 0x8A8CAE7AL) != (((VECTOR(int16_t, 8))((safe_lshift_func_int16_t_s_u((p_149 ^ (safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((-1L), 3)) & (*l_200)), p_989->g_4.y))), 3)), 0x722FL, ((l_220 != &p_148) | GROUP_DIVERGE(1, 1)), ((VECTOR(int16_t, 2))(0L, 1L)), (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((+((((VECTOR(int8_t, 16))(((*l_203) || (*p_989->g_196)), 0x4AL, ((VECTOR(int8_t, 8))((-3L))), 0L, (-10L), ((VECTOR(int8_t, 2))((-7L))), 0L, 6L)).s9 || p_149) && p_149)), (*l_200))), p_989->g_4.y)), (-5L), (-8L))).s7 ^ 0x7DCCL)))), 4));
    return (*l_220);
}


/* ------------------------------------------ */
/* 
 * reads : p_989->g_170 p_989->g_195 p_989->g_196
 * writes: p_989->g_171 p_989->g_173
 */
int16_t * func_150(int32_t  p_151, struct S1 * p_989)
{ /* block id: 60 */
    int32_t *l_169 = (void*)0;
    int32_t *l_172 = &p_989->g_173[2];
    int32_t *l_174 = &p_989->g_173[4];
    int32_t *l_175 = &p_989->g_173[2];
    int32_t l_176 = 7L;
    int32_t l_177 = 1L;
    int32_t *l_178 = &l_177;
    int32_t *l_179 = &p_989->g_173[4];
    int32_t *l_180 = &p_989->g_173[2];
    int32_t *l_181 = &p_989->g_173[2];
    int32_t l_182[8][8][4] = {{{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)}},{{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)}},{{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)}},{{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)}},{{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)}},{{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)}},{{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)}},{{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)},{0x42306FBFL,0x33AA981AL,0x3804852DL,(-5L)}}};
    int32_t *l_183 = &l_176;
    int32_t *l_184 = &l_182[3][1][1];
    int32_t *l_185 = &l_177;
    int32_t *l_186[7][10] = {{&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2],&l_176,&p_989->g_173[0],&l_176,&p_989->g_173[2],&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2]},{&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2],&l_176,&p_989->g_173[0],&l_176,&p_989->g_173[2],&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2]},{&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2],&l_176,&p_989->g_173[0],&l_176,&p_989->g_173[2],&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2]},{&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2],&l_176,&p_989->g_173[0],&l_176,&p_989->g_173[2],&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2]},{&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2],&l_176,&p_989->g_173[0],&l_176,&p_989->g_173[2],&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2]},{&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2],&l_176,&p_989->g_173[0],&l_176,&p_989->g_173[2],&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2]},{&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2],&l_176,&p_989->g_173[0],&l_176,&p_989->g_173[2],&l_182[2][4][0],&l_182[2][4][0],&p_989->g_173[2]}};
    int8_t l_187[6][9] = {{0x7FL,0L,0x7FL,0x7FL,0L,0x7FL,0x7FL,0L,0x7FL},{0x7FL,0L,0x7FL,0x7FL,0L,0x7FL,0x7FL,0L,0x7FL},{0x7FL,0L,0x7FL,0x7FL,0L,0x7FL,0x7FL,0L,0x7FL},{0x7FL,0L,0x7FL,0x7FL,0L,0x7FL,0x7FL,0L,0x7FL},{0x7FL,0L,0x7FL,0x7FL,0L,0x7FL,0x7FL,0L,0x7FL},{0x7FL,0L,0x7FL,0x7FL,0L,0x7FL,0x7FL,0L,0x7FL}};
    int8_t l_188 = 0L;
    int32_t l_189 = (-4L);
    int16_t l_190 = 1L;
    int32_t l_191 = (-6L);
    uint16_t l_192 = 65535UL;
    int i, j, k;
    (*p_989->g_170) = l_169;
    --l_192;
    (*l_175) = ((VECTOR(int32_t, 8))(p_989->g_195.xyxxxxxy)).s3;
    return p_989->g_196;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[12];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 12; i++)
            l_comm_values[i] = 1;
    struct S1 c_990;
    struct S1* p_989 = &c_990;
    struct S1 c_991 = {
        (VECTOR(int32_t, 2))(4L, 0x42285FAAL), // p_989->g_4
        0x52L, // p_989->g_11
        (-1L), // p_989->g_117
        {0x45633ADEL,0x6481C35CL,0x45633ADEL,0x45633ADEL,0x6481C35CL,0x45633ADEL}, // p_989->g_120
        {{(-3L),0x62F0389DL,5L,0x1237CA5BL,0x62F0389DL,0x1237CA5BL,5L},{(-3L),0x62F0389DL,5L,0x1237CA5BL,0x62F0389DL,0x1237CA5BL,5L},{(-3L),0x62F0389DL,5L,0x1237CA5BL,0x62F0389DL,0x1237CA5BL,5L},{(-3L),0x62F0389DL,5L,0x1237CA5BL,0x62F0389DL,0x1237CA5BL,5L},{(-3L),0x62F0389DL,5L,0x1237CA5BL,0x62F0389DL,0x1237CA5BL,5L},{(-3L),0x62F0389DL,5L,0x1237CA5BL,0x62F0389DL,0x1237CA5BL,5L},{(-3L),0x62F0389DL,5L,0x1237CA5BL,0x62F0389DL,0x1237CA5BL,5L},{(-3L),0x62F0389DL,5L,0x1237CA5BL,0x62F0389DL,0x1237CA5BL,5L},{(-3L),0x62F0389DL,5L,0x1237CA5BL,0x62F0389DL,0x1237CA5BL,5L}}, // p_989->g_122
        &p_989->g_122[3][4], // p_989->g_121
        (void*)0, // p_989->g_126
        255UL, // p_989->g_164
        0x7AL, // p_989->g_167
        1L, // p_989->g_168
        (void*)0, // p_989->g_171
        &p_989->g_171, // p_989->g_170
        {0x2DD593ABL,0x2DD593ABL,0x2DD593ABL,0x2DD593ABL,0x2DD593ABL,0x2DD593ABL}, // p_989->g_173
        (VECTOR(int32_t, 2))((-9L), (-1L)), // p_989->g_195
        (-4L), // p_989->g_197
        &p_989->g_197, // p_989->g_196
        246UL, // p_989->g_213
        (void*)0, // p_989->g_226
        &p_989->g_226, // p_989->g_225
        {{{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0}},{{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0}},{{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0}},{{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0},{(void*)0,&p_989->g_225,(void*)0,&p_989->g_225,&p_989->g_225,&p_989->g_225,&p_989->g_225,(void*)0,&p_989->g_225,(void*)0}}}, // p_989->g_227
        &p_989->g_225, // p_989->g_228
        (void*)0, // p_989->g_230
        (void*)0, // p_989->g_231
        0x061CAD5D3777B2A8L, // p_989->g_243
        3UL, // p_989->g_297
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xFFL), 0xFFL), 0xFFL, 1UL, 0xFFL, (VECTOR(uint8_t, 2))(1UL, 0xFFL), (VECTOR(uint8_t, 2))(1UL, 0xFFL), 1UL, 0xFFL, 1UL, 0xFFL), // p_989->g_312
        {0L}, // p_989->g_313
        0xDA16BF23L, // p_989->g_375
        (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 1UL), 1UL), // p_989->g_386
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xAB4EL), 0xAB4EL), 0xAB4EL, 65535UL, 0xAB4EL, (VECTOR(uint16_t, 2))(65535UL, 0xAB4EL), (VECTOR(uint16_t, 2))(65535UL, 0xAB4EL), 65535UL, 0xAB4EL, 65535UL, 0xAB4EL), // p_989->g_387
        (VECTOR(uint32_t, 16))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0UL), 0UL), 0UL, 4294967289UL, 0UL, (VECTOR(uint32_t, 2))(4294967289UL, 0UL), (VECTOR(uint32_t, 2))(4294967289UL, 0UL), 4294967289UL, 0UL, 4294967289UL, 0UL), // p_989->g_389
        0x0B88C68DL, // p_989->g_408
        {0x7819L}, // p_989->g_425
        (VECTOR(int32_t, 16))(0x2E15E9F1L, (VECTOR(int32_t, 4))(0x2E15E9F1L, (VECTOR(int32_t, 2))(0x2E15E9F1L, 0x46D02554L), 0x46D02554L), 0x46D02554L, 0x2E15E9F1L, 0x46D02554L, (VECTOR(int32_t, 2))(0x2E15E9F1L, 0x46D02554L), (VECTOR(int32_t, 2))(0x2E15E9F1L, 0x46D02554L), 0x2E15E9F1L, 0x46D02554L, 0x2E15E9F1L, 0x46D02554L), // p_989->g_437
        {0x7347L}, // p_989->g_442
        0x1A2A3A1AEA2D3ADEL, // p_989->g_461
        &p_989->g_171, // p_989->g_494
        (VECTOR(uint64_t, 4))(0x0540818F649C8760L, (VECTOR(uint64_t, 2))(0x0540818F649C8760L, 0xE42435BD90F90D0AL), 0xE42435BD90F90D0AL), // p_989->g_501
        0x5B8102D77EB1CF75L, // p_989->g_509
        (VECTOR(int8_t, 2))(0L, 0x36L), // p_989->g_531
        (VECTOR(int8_t, 2))(0x0DL, 0L), // p_989->g_558
        0UL, // p_989->g_561
        (void*)0, // p_989->g_570
        &p_989->g_570, // p_989->g_569
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x6742DC68L), 0x6742DC68L), 0x6742DC68L, 1UL, 0x6742DC68L), // p_989->g_587
        {0x61DBL}, // p_989->g_604
        {5L}, // p_989->g_605
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xC7F7F6B01FDD981CL), // p_989->g_631
        (VECTOR(uint64_t, 16))(0xDEF9DF3C9073AD2FL, (VECTOR(uint64_t, 4))(0xDEF9DF3C9073AD2FL, (VECTOR(uint64_t, 2))(0xDEF9DF3C9073AD2FL, 0x8D43801F2D1E63A1L), 0x8D43801F2D1E63A1L), 0x8D43801F2D1E63A1L, 0xDEF9DF3C9073AD2FL, 0x8D43801F2D1E63A1L, (VECTOR(uint64_t, 2))(0xDEF9DF3C9073AD2FL, 0x8D43801F2D1E63A1L), (VECTOR(uint64_t, 2))(0xDEF9DF3C9073AD2FL, 0x8D43801F2D1E63A1L), 0xDEF9DF3C9073AD2FL, 0x8D43801F2D1E63A1L, 0xDEF9DF3C9073AD2FL, 0x8D43801F2D1E63A1L), // p_989->g_632
        (VECTOR(uint64_t, 4))(0x9B591EC5F083A407L, (VECTOR(uint64_t, 2))(0x9B591EC5F083A407L, 1UL), 1UL), // p_989->g_634
        (VECTOR(uint64_t, 2))(0UL, 0UL), // p_989->g_635
        (void*)0, // p_989->g_642
        {&p_989->g_642,&p_989->g_642,&p_989->g_642,&p_989->g_642,&p_989->g_642,&p_989->g_642}, // p_989->g_641
        &p_989->g_642, // p_989->g_643
        (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x053DL), 0x053DL), // p_989->g_644
        &p_989->g_121, // p_989->g_657
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), // p_989->g_659
        (VECTOR(uint8_t, 4))(0x9FL, (VECTOR(uint8_t, 2))(0x9FL, 0x18L), 0x18L), // p_989->g_661
        (VECTOR(int16_t, 2))(0x1708L, 0x1401L), // p_989->g_666
        (VECTOR(int16_t, 4))(0x34EAL, (VECTOR(int16_t, 2))(0x34EAL, (-1L)), (-1L)), // p_989->g_674
        (VECTOR(int16_t, 16))(0x599AL, (VECTOR(int16_t, 4))(0x599AL, (VECTOR(int16_t, 2))(0x599AL, 0x1B1DL), 0x1B1DL), 0x1B1DL, 0x599AL, 0x1B1DL, (VECTOR(int16_t, 2))(0x599AL, 0x1B1DL), (VECTOR(int16_t, 2))(0x599AL, 0x1B1DL), 0x599AL, 0x1B1DL, 0x599AL, 0x1B1DL), // p_989->g_675
        (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x55L), 0x55L), // p_989->g_682
        {0x1EC9L}, // p_989->g_697
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x22L), 0x22L), 0x22L, 255UL, 0x22L, (VECTOR(uint8_t, 2))(255UL, 0x22L), (VECTOR(uint8_t, 2))(255UL, 0x22L), 255UL, 0x22L, 255UL, 0x22L), // p_989->g_714
        (VECTOR(uint64_t, 4))(0xEF126CC0C6307E41L, (VECTOR(uint64_t, 2))(0xEF126CC0C6307E41L, 1UL), 1UL), // p_989->g_715
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x4DL), 0x4DL), 0x4DL, 1UL, 0x4DL, (VECTOR(uint8_t, 2))(1UL, 0x4DL), (VECTOR(uint8_t, 2))(1UL, 0x4DL), 1UL, 0x4DL, 1UL, 0x4DL), // p_989->g_725
        &p_989->g_196, // p_989->g_740
        (void*)0, // p_989->g_776
        (VECTOR(int64_t, 4))(0x7113AC8FA1832D69L, (VECTOR(int64_t, 2))(0x7113AC8FA1832D69L, 1L), 1L), // p_989->g_807
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), // p_989->g_815
        (VECTOR(uint8_t, 16))(0x5EL, (VECTOR(uint8_t, 4))(0x5EL, (VECTOR(uint8_t, 2))(0x5EL, 0xCAL), 0xCAL), 0xCAL, 0x5EL, 0xCAL, (VECTOR(uint8_t, 2))(0x5EL, 0xCAL), (VECTOR(uint8_t, 2))(0x5EL, 0xCAL), 0x5EL, 0xCAL, 0x5EL, 0xCAL), // p_989->g_817
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 8UL), 8UL), 8UL, 255UL, 8UL), // p_989->g_823
        (VECTOR(uint8_t, 2))(0xD4L, 0UL), // p_989->g_824
        (VECTOR(int16_t, 2))(0L, 0x29C0L), // p_989->g_829
        1UL, // p_989->g_876
        0x0DB6C61690099DDFL, // p_989->g_948
        (VECTOR(int32_t, 8))(0x74CAAD3CL, (VECTOR(int32_t, 4))(0x74CAAD3CL, (VECTOR(int32_t, 2))(0x74CAAD3CL, 0x320A0FD8L), 0x320A0FD8L), 0x320A0FD8L, 0x74CAAD3CL, 0x320A0FD8L), // p_989->g_953
        (void*)0, // p_989->g_970
        0, // p_989->v_collective
        sequence_input[get_global_id(0)], // p_989->global_0_offset
        sequence_input[get_global_id(1)], // p_989->global_1_offset
        sequence_input[get_global_id(2)], // p_989->global_2_offset
        sequence_input[get_local_id(0)], // p_989->local_0_offset
        sequence_input[get_local_id(1)], // p_989->local_1_offset
        sequence_input[get_local_id(2)], // p_989->local_2_offset
        sequence_input[get_group_id(0)], // p_989->group_0_offset
        sequence_input[get_group_id(1)], // p_989->group_1_offset
        sequence_input[get_group_id(2)], // p_989->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[0][get_linear_local_id()])), // p_989->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_990 = c_991;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_989);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_989->g_4.x, "p_989->g_4.x", print_hash_value);
    transparent_crc(p_989->g_4.y, "p_989->g_4.y", print_hash_value);
    transparent_crc(p_989->g_11, "p_989->g_11", print_hash_value);
    transparent_crc(p_989->g_117, "p_989->g_117", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_989->g_120[i], "p_989->g_120[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_989->g_122[i][j], "p_989->g_122[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_989->g_164, "p_989->g_164", print_hash_value);
    transparent_crc(p_989->g_167, "p_989->g_167", print_hash_value);
    transparent_crc(p_989->g_168, "p_989->g_168", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_989->g_173[i], "p_989->g_173[i]", print_hash_value);

    }
    transparent_crc(p_989->g_195.x, "p_989->g_195.x", print_hash_value);
    transparent_crc(p_989->g_195.y, "p_989->g_195.y", print_hash_value);
    transparent_crc(p_989->g_197, "p_989->g_197", print_hash_value);
    transparent_crc(p_989->g_213, "p_989->g_213", print_hash_value);
    transparent_crc(p_989->g_243, "p_989->g_243", print_hash_value);
    transparent_crc(p_989->g_297, "p_989->g_297", print_hash_value);
    transparent_crc(p_989->g_312.s0, "p_989->g_312.s0", print_hash_value);
    transparent_crc(p_989->g_312.s1, "p_989->g_312.s1", print_hash_value);
    transparent_crc(p_989->g_312.s2, "p_989->g_312.s2", print_hash_value);
    transparent_crc(p_989->g_312.s3, "p_989->g_312.s3", print_hash_value);
    transparent_crc(p_989->g_312.s4, "p_989->g_312.s4", print_hash_value);
    transparent_crc(p_989->g_312.s5, "p_989->g_312.s5", print_hash_value);
    transparent_crc(p_989->g_312.s6, "p_989->g_312.s6", print_hash_value);
    transparent_crc(p_989->g_312.s7, "p_989->g_312.s7", print_hash_value);
    transparent_crc(p_989->g_312.s8, "p_989->g_312.s8", print_hash_value);
    transparent_crc(p_989->g_312.s9, "p_989->g_312.s9", print_hash_value);
    transparent_crc(p_989->g_312.sa, "p_989->g_312.sa", print_hash_value);
    transparent_crc(p_989->g_312.sb, "p_989->g_312.sb", print_hash_value);
    transparent_crc(p_989->g_312.sc, "p_989->g_312.sc", print_hash_value);
    transparent_crc(p_989->g_312.sd, "p_989->g_312.sd", print_hash_value);
    transparent_crc(p_989->g_312.se, "p_989->g_312.se", print_hash_value);
    transparent_crc(p_989->g_312.sf, "p_989->g_312.sf", print_hash_value);
    transparent_crc(p_989->g_313.f0, "p_989->g_313.f0", print_hash_value);
    transparent_crc(p_989->g_375, "p_989->g_375", print_hash_value);
    transparent_crc(p_989->g_386.x, "p_989->g_386.x", print_hash_value);
    transparent_crc(p_989->g_386.y, "p_989->g_386.y", print_hash_value);
    transparent_crc(p_989->g_386.z, "p_989->g_386.z", print_hash_value);
    transparent_crc(p_989->g_386.w, "p_989->g_386.w", print_hash_value);
    transparent_crc(p_989->g_387.s0, "p_989->g_387.s0", print_hash_value);
    transparent_crc(p_989->g_387.s1, "p_989->g_387.s1", print_hash_value);
    transparent_crc(p_989->g_387.s2, "p_989->g_387.s2", print_hash_value);
    transparent_crc(p_989->g_387.s3, "p_989->g_387.s3", print_hash_value);
    transparent_crc(p_989->g_387.s4, "p_989->g_387.s4", print_hash_value);
    transparent_crc(p_989->g_387.s5, "p_989->g_387.s5", print_hash_value);
    transparent_crc(p_989->g_387.s6, "p_989->g_387.s6", print_hash_value);
    transparent_crc(p_989->g_387.s7, "p_989->g_387.s7", print_hash_value);
    transparent_crc(p_989->g_387.s8, "p_989->g_387.s8", print_hash_value);
    transparent_crc(p_989->g_387.s9, "p_989->g_387.s9", print_hash_value);
    transparent_crc(p_989->g_387.sa, "p_989->g_387.sa", print_hash_value);
    transparent_crc(p_989->g_387.sb, "p_989->g_387.sb", print_hash_value);
    transparent_crc(p_989->g_387.sc, "p_989->g_387.sc", print_hash_value);
    transparent_crc(p_989->g_387.sd, "p_989->g_387.sd", print_hash_value);
    transparent_crc(p_989->g_387.se, "p_989->g_387.se", print_hash_value);
    transparent_crc(p_989->g_387.sf, "p_989->g_387.sf", print_hash_value);
    transparent_crc(p_989->g_389.s0, "p_989->g_389.s0", print_hash_value);
    transparent_crc(p_989->g_389.s1, "p_989->g_389.s1", print_hash_value);
    transparent_crc(p_989->g_389.s2, "p_989->g_389.s2", print_hash_value);
    transparent_crc(p_989->g_389.s3, "p_989->g_389.s3", print_hash_value);
    transparent_crc(p_989->g_389.s4, "p_989->g_389.s4", print_hash_value);
    transparent_crc(p_989->g_389.s5, "p_989->g_389.s5", print_hash_value);
    transparent_crc(p_989->g_389.s6, "p_989->g_389.s6", print_hash_value);
    transparent_crc(p_989->g_389.s7, "p_989->g_389.s7", print_hash_value);
    transparent_crc(p_989->g_389.s8, "p_989->g_389.s8", print_hash_value);
    transparent_crc(p_989->g_389.s9, "p_989->g_389.s9", print_hash_value);
    transparent_crc(p_989->g_389.sa, "p_989->g_389.sa", print_hash_value);
    transparent_crc(p_989->g_389.sb, "p_989->g_389.sb", print_hash_value);
    transparent_crc(p_989->g_389.sc, "p_989->g_389.sc", print_hash_value);
    transparent_crc(p_989->g_389.sd, "p_989->g_389.sd", print_hash_value);
    transparent_crc(p_989->g_389.se, "p_989->g_389.se", print_hash_value);
    transparent_crc(p_989->g_389.sf, "p_989->g_389.sf", print_hash_value);
    transparent_crc(p_989->g_408, "p_989->g_408", print_hash_value);
    transparent_crc(p_989->g_425.f0, "p_989->g_425.f0", print_hash_value);
    transparent_crc(p_989->g_437.s0, "p_989->g_437.s0", print_hash_value);
    transparent_crc(p_989->g_437.s1, "p_989->g_437.s1", print_hash_value);
    transparent_crc(p_989->g_437.s2, "p_989->g_437.s2", print_hash_value);
    transparent_crc(p_989->g_437.s3, "p_989->g_437.s3", print_hash_value);
    transparent_crc(p_989->g_437.s4, "p_989->g_437.s4", print_hash_value);
    transparent_crc(p_989->g_437.s5, "p_989->g_437.s5", print_hash_value);
    transparent_crc(p_989->g_437.s6, "p_989->g_437.s6", print_hash_value);
    transparent_crc(p_989->g_437.s7, "p_989->g_437.s7", print_hash_value);
    transparent_crc(p_989->g_437.s8, "p_989->g_437.s8", print_hash_value);
    transparent_crc(p_989->g_437.s9, "p_989->g_437.s9", print_hash_value);
    transparent_crc(p_989->g_437.sa, "p_989->g_437.sa", print_hash_value);
    transparent_crc(p_989->g_437.sb, "p_989->g_437.sb", print_hash_value);
    transparent_crc(p_989->g_437.sc, "p_989->g_437.sc", print_hash_value);
    transparent_crc(p_989->g_437.sd, "p_989->g_437.sd", print_hash_value);
    transparent_crc(p_989->g_437.se, "p_989->g_437.se", print_hash_value);
    transparent_crc(p_989->g_437.sf, "p_989->g_437.sf", print_hash_value);
    transparent_crc(p_989->g_442.f0, "p_989->g_442.f0", print_hash_value);
    transparent_crc(p_989->g_461, "p_989->g_461", print_hash_value);
    transparent_crc(p_989->g_501.x, "p_989->g_501.x", print_hash_value);
    transparent_crc(p_989->g_501.y, "p_989->g_501.y", print_hash_value);
    transparent_crc(p_989->g_501.z, "p_989->g_501.z", print_hash_value);
    transparent_crc(p_989->g_501.w, "p_989->g_501.w", print_hash_value);
    transparent_crc(p_989->g_509, "p_989->g_509", print_hash_value);
    transparent_crc(p_989->g_531.x, "p_989->g_531.x", print_hash_value);
    transparent_crc(p_989->g_531.y, "p_989->g_531.y", print_hash_value);
    transparent_crc(p_989->g_558.x, "p_989->g_558.x", print_hash_value);
    transparent_crc(p_989->g_558.y, "p_989->g_558.y", print_hash_value);
    transparent_crc(p_989->g_561, "p_989->g_561", print_hash_value);
    transparent_crc(p_989->g_587.s0, "p_989->g_587.s0", print_hash_value);
    transparent_crc(p_989->g_587.s1, "p_989->g_587.s1", print_hash_value);
    transparent_crc(p_989->g_587.s2, "p_989->g_587.s2", print_hash_value);
    transparent_crc(p_989->g_587.s3, "p_989->g_587.s3", print_hash_value);
    transparent_crc(p_989->g_587.s4, "p_989->g_587.s4", print_hash_value);
    transparent_crc(p_989->g_587.s5, "p_989->g_587.s5", print_hash_value);
    transparent_crc(p_989->g_587.s6, "p_989->g_587.s6", print_hash_value);
    transparent_crc(p_989->g_587.s7, "p_989->g_587.s7", print_hash_value);
    transparent_crc(p_989->g_604.f0, "p_989->g_604.f0", print_hash_value);
    transparent_crc(p_989->g_631.x, "p_989->g_631.x", print_hash_value);
    transparent_crc(p_989->g_631.y, "p_989->g_631.y", print_hash_value);
    transparent_crc(p_989->g_632.s0, "p_989->g_632.s0", print_hash_value);
    transparent_crc(p_989->g_632.s1, "p_989->g_632.s1", print_hash_value);
    transparent_crc(p_989->g_632.s2, "p_989->g_632.s2", print_hash_value);
    transparent_crc(p_989->g_632.s3, "p_989->g_632.s3", print_hash_value);
    transparent_crc(p_989->g_632.s4, "p_989->g_632.s4", print_hash_value);
    transparent_crc(p_989->g_632.s5, "p_989->g_632.s5", print_hash_value);
    transparent_crc(p_989->g_632.s6, "p_989->g_632.s6", print_hash_value);
    transparent_crc(p_989->g_632.s7, "p_989->g_632.s7", print_hash_value);
    transparent_crc(p_989->g_632.s8, "p_989->g_632.s8", print_hash_value);
    transparent_crc(p_989->g_632.s9, "p_989->g_632.s9", print_hash_value);
    transparent_crc(p_989->g_632.sa, "p_989->g_632.sa", print_hash_value);
    transparent_crc(p_989->g_632.sb, "p_989->g_632.sb", print_hash_value);
    transparent_crc(p_989->g_632.sc, "p_989->g_632.sc", print_hash_value);
    transparent_crc(p_989->g_632.sd, "p_989->g_632.sd", print_hash_value);
    transparent_crc(p_989->g_632.se, "p_989->g_632.se", print_hash_value);
    transparent_crc(p_989->g_632.sf, "p_989->g_632.sf", print_hash_value);
    transparent_crc(p_989->g_634.x, "p_989->g_634.x", print_hash_value);
    transparent_crc(p_989->g_634.y, "p_989->g_634.y", print_hash_value);
    transparent_crc(p_989->g_634.z, "p_989->g_634.z", print_hash_value);
    transparent_crc(p_989->g_634.w, "p_989->g_634.w", print_hash_value);
    transparent_crc(p_989->g_635.x, "p_989->g_635.x", print_hash_value);
    transparent_crc(p_989->g_635.y, "p_989->g_635.y", print_hash_value);
    transparent_crc(p_989->g_644.x, "p_989->g_644.x", print_hash_value);
    transparent_crc(p_989->g_644.y, "p_989->g_644.y", print_hash_value);
    transparent_crc(p_989->g_644.z, "p_989->g_644.z", print_hash_value);
    transparent_crc(p_989->g_644.w, "p_989->g_644.w", print_hash_value);
    transparent_crc(p_989->g_659.x, "p_989->g_659.x", print_hash_value);
    transparent_crc(p_989->g_659.y, "p_989->g_659.y", print_hash_value);
    transparent_crc(p_989->g_659.z, "p_989->g_659.z", print_hash_value);
    transparent_crc(p_989->g_659.w, "p_989->g_659.w", print_hash_value);
    transparent_crc(p_989->g_661.x, "p_989->g_661.x", print_hash_value);
    transparent_crc(p_989->g_661.y, "p_989->g_661.y", print_hash_value);
    transparent_crc(p_989->g_661.z, "p_989->g_661.z", print_hash_value);
    transparent_crc(p_989->g_661.w, "p_989->g_661.w", print_hash_value);
    transparent_crc(p_989->g_666.x, "p_989->g_666.x", print_hash_value);
    transparent_crc(p_989->g_666.y, "p_989->g_666.y", print_hash_value);
    transparent_crc(p_989->g_674.x, "p_989->g_674.x", print_hash_value);
    transparent_crc(p_989->g_674.y, "p_989->g_674.y", print_hash_value);
    transparent_crc(p_989->g_674.z, "p_989->g_674.z", print_hash_value);
    transparent_crc(p_989->g_674.w, "p_989->g_674.w", print_hash_value);
    transparent_crc(p_989->g_675.s0, "p_989->g_675.s0", print_hash_value);
    transparent_crc(p_989->g_675.s1, "p_989->g_675.s1", print_hash_value);
    transparent_crc(p_989->g_675.s2, "p_989->g_675.s2", print_hash_value);
    transparent_crc(p_989->g_675.s3, "p_989->g_675.s3", print_hash_value);
    transparent_crc(p_989->g_675.s4, "p_989->g_675.s4", print_hash_value);
    transparent_crc(p_989->g_675.s5, "p_989->g_675.s5", print_hash_value);
    transparent_crc(p_989->g_675.s6, "p_989->g_675.s6", print_hash_value);
    transparent_crc(p_989->g_675.s7, "p_989->g_675.s7", print_hash_value);
    transparent_crc(p_989->g_675.s8, "p_989->g_675.s8", print_hash_value);
    transparent_crc(p_989->g_675.s9, "p_989->g_675.s9", print_hash_value);
    transparent_crc(p_989->g_675.sa, "p_989->g_675.sa", print_hash_value);
    transparent_crc(p_989->g_675.sb, "p_989->g_675.sb", print_hash_value);
    transparent_crc(p_989->g_675.sc, "p_989->g_675.sc", print_hash_value);
    transparent_crc(p_989->g_675.sd, "p_989->g_675.sd", print_hash_value);
    transparent_crc(p_989->g_675.se, "p_989->g_675.se", print_hash_value);
    transparent_crc(p_989->g_675.sf, "p_989->g_675.sf", print_hash_value);
    transparent_crc(p_989->g_682.x, "p_989->g_682.x", print_hash_value);
    transparent_crc(p_989->g_682.y, "p_989->g_682.y", print_hash_value);
    transparent_crc(p_989->g_682.z, "p_989->g_682.z", print_hash_value);
    transparent_crc(p_989->g_682.w, "p_989->g_682.w", print_hash_value);
    transparent_crc(p_989->g_697.f0, "p_989->g_697.f0", print_hash_value);
    transparent_crc(p_989->g_714.s0, "p_989->g_714.s0", print_hash_value);
    transparent_crc(p_989->g_714.s1, "p_989->g_714.s1", print_hash_value);
    transparent_crc(p_989->g_714.s2, "p_989->g_714.s2", print_hash_value);
    transparent_crc(p_989->g_714.s3, "p_989->g_714.s3", print_hash_value);
    transparent_crc(p_989->g_714.s4, "p_989->g_714.s4", print_hash_value);
    transparent_crc(p_989->g_714.s5, "p_989->g_714.s5", print_hash_value);
    transparent_crc(p_989->g_714.s6, "p_989->g_714.s6", print_hash_value);
    transparent_crc(p_989->g_714.s7, "p_989->g_714.s7", print_hash_value);
    transparent_crc(p_989->g_714.s8, "p_989->g_714.s8", print_hash_value);
    transparent_crc(p_989->g_714.s9, "p_989->g_714.s9", print_hash_value);
    transparent_crc(p_989->g_714.sa, "p_989->g_714.sa", print_hash_value);
    transparent_crc(p_989->g_714.sb, "p_989->g_714.sb", print_hash_value);
    transparent_crc(p_989->g_714.sc, "p_989->g_714.sc", print_hash_value);
    transparent_crc(p_989->g_714.sd, "p_989->g_714.sd", print_hash_value);
    transparent_crc(p_989->g_714.se, "p_989->g_714.se", print_hash_value);
    transparent_crc(p_989->g_714.sf, "p_989->g_714.sf", print_hash_value);
    transparent_crc(p_989->g_715.x, "p_989->g_715.x", print_hash_value);
    transparent_crc(p_989->g_715.y, "p_989->g_715.y", print_hash_value);
    transparent_crc(p_989->g_715.z, "p_989->g_715.z", print_hash_value);
    transparent_crc(p_989->g_715.w, "p_989->g_715.w", print_hash_value);
    transparent_crc(p_989->g_725.s0, "p_989->g_725.s0", print_hash_value);
    transparent_crc(p_989->g_725.s1, "p_989->g_725.s1", print_hash_value);
    transparent_crc(p_989->g_725.s2, "p_989->g_725.s2", print_hash_value);
    transparent_crc(p_989->g_725.s3, "p_989->g_725.s3", print_hash_value);
    transparent_crc(p_989->g_725.s4, "p_989->g_725.s4", print_hash_value);
    transparent_crc(p_989->g_725.s5, "p_989->g_725.s5", print_hash_value);
    transparent_crc(p_989->g_725.s6, "p_989->g_725.s6", print_hash_value);
    transparent_crc(p_989->g_725.s7, "p_989->g_725.s7", print_hash_value);
    transparent_crc(p_989->g_725.s8, "p_989->g_725.s8", print_hash_value);
    transparent_crc(p_989->g_725.s9, "p_989->g_725.s9", print_hash_value);
    transparent_crc(p_989->g_725.sa, "p_989->g_725.sa", print_hash_value);
    transparent_crc(p_989->g_725.sb, "p_989->g_725.sb", print_hash_value);
    transparent_crc(p_989->g_725.sc, "p_989->g_725.sc", print_hash_value);
    transparent_crc(p_989->g_725.sd, "p_989->g_725.sd", print_hash_value);
    transparent_crc(p_989->g_725.se, "p_989->g_725.se", print_hash_value);
    transparent_crc(p_989->g_725.sf, "p_989->g_725.sf", print_hash_value);
    transparent_crc(p_989->g_807.x, "p_989->g_807.x", print_hash_value);
    transparent_crc(p_989->g_807.y, "p_989->g_807.y", print_hash_value);
    transparent_crc(p_989->g_807.z, "p_989->g_807.z", print_hash_value);
    transparent_crc(p_989->g_807.w, "p_989->g_807.w", print_hash_value);
    transparent_crc(p_989->g_815.x, "p_989->g_815.x", print_hash_value);
    transparent_crc(p_989->g_815.y, "p_989->g_815.y", print_hash_value);
    transparent_crc(p_989->g_815.z, "p_989->g_815.z", print_hash_value);
    transparent_crc(p_989->g_815.w, "p_989->g_815.w", print_hash_value);
    transparent_crc(p_989->g_817.s0, "p_989->g_817.s0", print_hash_value);
    transparent_crc(p_989->g_817.s1, "p_989->g_817.s1", print_hash_value);
    transparent_crc(p_989->g_817.s2, "p_989->g_817.s2", print_hash_value);
    transparent_crc(p_989->g_817.s3, "p_989->g_817.s3", print_hash_value);
    transparent_crc(p_989->g_817.s4, "p_989->g_817.s4", print_hash_value);
    transparent_crc(p_989->g_817.s5, "p_989->g_817.s5", print_hash_value);
    transparent_crc(p_989->g_817.s6, "p_989->g_817.s6", print_hash_value);
    transparent_crc(p_989->g_817.s7, "p_989->g_817.s7", print_hash_value);
    transparent_crc(p_989->g_817.s8, "p_989->g_817.s8", print_hash_value);
    transparent_crc(p_989->g_817.s9, "p_989->g_817.s9", print_hash_value);
    transparent_crc(p_989->g_817.sa, "p_989->g_817.sa", print_hash_value);
    transparent_crc(p_989->g_817.sb, "p_989->g_817.sb", print_hash_value);
    transparent_crc(p_989->g_817.sc, "p_989->g_817.sc", print_hash_value);
    transparent_crc(p_989->g_817.sd, "p_989->g_817.sd", print_hash_value);
    transparent_crc(p_989->g_817.se, "p_989->g_817.se", print_hash_value);
    transparent_crc(p_989->g_817.sf, "p_989->g_817.sf", print_hash_value);
    transparent_crc(p_989->g_823.s0, "p_989->g_823.s0", print_hash_value);
    transparent_crc(p_989->g_823.s1, "p_989->g_823.s1", print_hash_value);
    transparent_crc(p_989->g_823.s2, "p_989->g_823.s2", print_hash_value);
    transparent_crc(p_989->g_823.s3, "p_989->g_823.s3", print_hash_value);
    transparent_crc(p_989->g_823.s4, "p_989->g_823.s4", print_hash_value);
    transparent_crc(p_989->g_823.s5, "p_989->g_823.s5", print_hash_value);
    transparent_crc(p_989->g_823.s6, "p_989->g_823.s6", print_hash_value);
    transparent_crc(p_989->g_823.s7, "p_989->g_823.s7", print_hash_value);
    transparent_crc(p_989->g_824.x, "p_989->g_824.x", print_hash_value);
    transparent_crc(p_989->g_824.y, "p_989->g_824.y", print_hash_value);
    transparent_crc(p_989->g_829.x, "p_989->g_829.x", print_hash_value);
    transparent_crc(p_989->g_829.y, "p_989->g_829.y", print_hash_value);
    transparent_crc(p_989->g_876, "p_989->g_876", print_hash_value);
    transparent_crc(p_989->g_948, "p_989->g_948", print_hash_value);
    transparent_crc(p_989->g_953.s0, "p_989->g_953.s0", print_hash_value);
    transparent_crc(p_989->g_953.s1, "p_989->g_953.s1", print_hash_value);
    transparent_crc(p_989->g_953.s2, "p_989->g_953.s2", print_hash_value);
    transparent_crc(p_989->g_953.s3, "p_989->g_953.s3", print_hash_value);
    transparent_crc(p_989->g_953.s4, "p_989->g_953.s4", print_hash_value);
    transparent_crc(p_989->g_953.s5, "p_989->g_953.s5", print_hash_value);
    transparent_crc(p_989->g_953.s6, "p_989->g_953.s6", print_hash_value);
    transparent_crc(p_989->g_953.s7, "p_989->g_953.s7", print_hash_value);
    transparent_crc(p_989->v_collective, "p_989->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 60; i++)
            transparent_crc(p_989->g_special_values[i + 60 * get_linear_group_id()], "p_989->g_special_values[i + 60 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 60; i++)
            transparent_crc(p_989->l_special_values[i], "p_989->l_special_values[i]", print_hash_value);
    transparent_crc(p_989->l_comm_values[get_linear_local_id()], "p_989->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_989->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()], "p_989->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
