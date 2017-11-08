// --atomics 36 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 92,17,3 -l 4,1,1
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

__constant uint32_t permutations[10][4] = {
{1,0,2,3}, // permutation 0
{0,1,2,3}, // permutation 1
{1,0,2,3}, // permutation 2
{3,2,0,1}, // permutation 3
{2,0,1,3}, // permutation 4
{2,0,3,1}, // permutation 5
{2,0,1,3}, // permutation 6
{1,3,2,0}, // permutation 7
{3,0,2,1}, // permutation 8
{3,0,1,2} // permutation 9
};

// Seed: 2901780335

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(uint8_t, 16) g_36;
    int32_t g_44;
    int32_t g_48;
    uint32_t g_53;
    uint32_t g_57[6][9];
    uint32_t *g_56;
    int32_t *g_63;
    int32_t ** volatile g_62;
    uint8_t g_65;
    VECTOR(uint32_t, 8) g_75;
    int32_t g_77;
    volatile VECTOR(int16_t, 2) g_83;
    uint16_t g_93[7][3];
    int8_t g_95[9];
    VECTOR(uint8_t, 16) g_99;
    uint32_t g_121;
    VECTOR(int8_t, 2) g_155;
    int64_t g_166;
    uint64_t g_168[6];
    int16_t g_177[9][9][3];
    int32_t g_202;
    int8_t g_205;
    VECTOR(uint8_t, 8) g_219;
    VECTOR(uint8_t, 2) g_220;
    int8_t g_222;
    VECTOR(uint32_t, 16) g_229;
    VECTOR(uint32_t, 8) g_230;
    int16_t g_233;
    volatile uint32_t g_259;
    int32_t ** volatile g_269;
    uint64_t * volatile g_278;
    volatile uint32_t g_281;
    int32_t ** volatile g_289;
    int32_t ** volatile g_290;
    int32_t *g_292;
    int32_t ** volatile g_291;
    VECTOR(uint32_t, 4) g_527;
    uint64_t g_532;
    volatile VECTOR(int32_t, 2) g_578;
    VECTOR(int16_t, 8) g_580;
    VECTOR(int16_t, 8) g_581;
    VECTOR(int16_t, 2) g_582;
    VECTOR(int8_t, 16) g_583;
    volatile uint8_t g_593;
    volatile uint8_t *g_592;
    volatile uint8_t **g_591;
    volatile int64_t g_612;
    volatile int64_t g_628[2][1][4];
    volatile VECTOR(uint64_t, 2) g_640;
    VECTOR(uint8_t, 4) g_651;
    VECTOR(uint8_t, 2) g_653;
    VECTOR(int16_t, 4) g_656;
    VECTOR(uint64_t, 16) g_659;
    VECTOR(int32_t, 8) g_666;
    VECTOR(int32_t, 2) g_705;
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
int32_t  func_1(struct S0 * p_731);
int32_t * func_2(int32_t * p_3, int64_t  p_4, uint16_t  p_5, int32_t * p_6, struct S0 * p_731);
int32_t * func_7(int32_t * p_8, int32_t  p_9, uint32_t  p_10, int32_t * p_11, int32_t * p_12, struct S0 * p_731);
uint64_t  func_22(int32_t * p_23, uint32_t  p_24, uint32_t  p_25, struct S0 * p_731);
int32_t * func_26(int64_t  p_27, struct S0 * p_731);
uint16_t  func_28(int32_t * p_29, int8_t  p_30, int64_t  p_31, struct S0 * p_731);
uint32_t  func_78(uint32_t  p_79, uint64_t  p_80, uint16_t  p_81, uint8_t  p_82, struct S0 * p_731);
int32_t * func_84(int32_t * p_85, int32_t  p_86, int64_t  p_87, int32_t * p_88, int32_t  p_89, struct S0 * p_731);
uint32_t  func_104(int16_t  p_105, uint64_t  p_106, uint32_t  p_107, struct S0 * p_731);
int16_t  func_131(int64_t  p_132, uint32_t  p_133, int32_t * p_134, int8_t * p_135, struct S0 * p_731);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_731->g_comm_values p_731->l_comm_values p_731->g_36 p_731->g_44 p_731->g_48 p_731->g_53 p_731->g_56 p_731->g_62 p_731->g_65 p_731->g_57 p_731->g_75 p_731->g_83 p_731->g_63 p_731->g_95 p_731->g_99 p_731->g_77 p_731->g_121 p_731->g_155 p_731->g_93 p_731->g_177 p_731->g_202 p_731->g_230 p_731->g_259 p_731->g_229 p_731->g_278 p_731->g_281 p_731->g_291 p_731->g_166 p_731->g_527 p_731->g_233 p_731->g_578 p_731->g_580 p_731->g_581 p_731->g_582 p_731->g_583 p_731->g_222 p_731->g_591 p_731->g_205 p_731->g_292 p_731->g_640 p_731->g_532 p_731->g_651 p_731->g_653 p_731->g_656 p_731->g_659 p_731->g_219 p_731->g_592 p_731->g_593 p_731->g_705
 * writes: p_731->g_44 p_731->g_48 p_731->g_53 p_731->g_63 p_731->g_65 p_731->g_77 p_731->g_93 p_731->g_95 p_731->g_99 p_731->g_166 p_731->g_168 p_731->g_177 p_731->g_202 p_731->g_205 p_731->g_57 p_731->g_121 p_731->g_222 p_731->g_281 p_731->g_292 p_731->g_233 p_731->g_532 p_731->g_651
 */
int32_t  func_1(struct S0 * p_731)
{ /* block id: 4 */
    VECTOR(uint16_t, 8) l_19 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x3817L), 0x3817L), 0x3817L, 1UL, 0x3817L);
    VECTOR(uint16_t, 2) l_20 = (VECTOR(uint16_t, 2))(0x81F3L, 1UL);
    VECTOR(uint16_t, 8) l_21 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 65530UL), 65530UL), 65530UL, 65528UL, 65530UL);
    int32_t *l_32 = (void*)0;
    VECTOR(int8_t, 4) l_35 = (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 0x68L), 0x68L);
    VECTOR(uint16_t, 4) l_37 = (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 1UL), 1UL);
    uint32_t *l_52 = &p_731->g_53;
    int32_t **l_59 = &l_32;
    uint16_t l_284 = 0xF2F9L;
    int8_t l_519 = 0x4EL;
    VECTOR(uint8_t, 16) l_522 = (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0x1FL), 0x1FL), 0x1FL, 250UL, 0x1FL, (VECTOR(uint8_t, 2))(250UL, 0x1FL), (VECTOR(uint8_t, 2))(250UL, 0x1FL), 250UL, 0x1FL, 250UL, 0x1FL);
    VECTOR(uint32_t, 8) l_525 = (VECTOR(uint32_t, 8))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 1UL), 1UL), 1UL, 4294967287UL, 1UL);
    VECTOR(uint32_t, 16) l_526 = (VECTOR(uint32_t, 16))(0xB3E959C3L, (VECTOR(uint32_t, 4))(0xB3E959C3L, (VECTOR(uint32_t, 2))(0xB3E959C3L, 0xC2E70972L), 0xC2E70972L), 0xC2E70972L, 0xB3E959C3L, 0xC2E70972L, (VECTOR(uint32_t, 2))(0xB3E959C3L, 0xC2E70972L), (VECTOR(uint32_t, 2))(0xB3E959C3L, 0xC2E70972L), 0xB3E959C3L, 0xC2E70972L, 0xB3E959C3L, 0xC2E70972L);
    uint64_t *l_528 = &p_731->g_168[3];
    int16_t *l_529[10] = {&p_731->g_233,&p_731->g_233,&p_731->g_233,&p_731->g_233,&p_731->g_233,&p_731->g_233,&p_731->g_233,&p_731->g_233,&p_731->g_233,&p_731->g_233};
    uint64_t *l_530 = (void*)0;
    uint64_t *l_531 = &p_731->g_532;
    int32_t *l_533[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint32_t, 2) l_579 = (VECTOR(uint32_t, 2))(3UL, 0UL);
    uint8_t *l_595 = (void*)0;
    uint8_t **l_594 = &l_595;
    int32_t l_602[2][9][6] = {{{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L}},{{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L},{0x242A1F7EL,1L,(-1L),0x2F2FE599L,1L,0x4FE21D85L}}};
    int8_t l_618[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
    int32_t l_623 = 0x13D0EB46L;
    int8_t l_631 = (-1L);
    int8_t l_635[8][10] = {{0x71L,0L,(-10L),0x71L,0x62L,(-10L),(-10L),0x62L,0x71L,(-10L)},{0x71L,0L,(-10L),0x71L,0x62L,(-10L),(-10L),0x62L,0x71L,(-10L)},{0x71L,0L,(-10L),0x71L,0x62L,(-10L),(-10L),0x62L,0x71L,(-10L)},{0x71L,0L,(-10L),0x71L,0x62L,(-10L),(-10L),0x62L,0x71L,(-10L)},{0x71L,0L,(-10L),0x71L,0x62L,(-10L),(-10L),0x62L,0x71L,(-10L)},{0x71L,0L,(-10L),0x71L,0x62L,(-10L),(-10L),0x62L,0x71L,(-10L)},{0x71L,0L,(-10L),0x71L,0x62L,(-10L),(-10L),0x62L,0x71L,(-10L)},{0x71L,0L,(-10L),0x71L,0x62L,(-10L),(-10L),0x62L,0x71L,(-10L)}};
    uint32_t l_637[8] = {0xF7B24550L,3UL,0xF7B24550L,0xF7B24550L,3UL,0xF7B24550L,0xF7B24550L,3UL};
    int32_t l_643[10] = {4L,0L,0x3FA8504CL,0L,4L,4L,0L,0x3FA8504CL,0L,4L};
    VECTOR(uint8_t, 4) l_652 = (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x0DL), 0x0DL);
    uint64_t l_663 = 0xECD944030B517E5BL;
    int64_t l_719 = 0x1CA3F4C4D16E009DL;
    uint16_t l_728 = 0x4A93L;
    int i, j, k;
    (*l_59) = func_2(func_7((((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((~(0x377CL == (p_731->g_comm_values[p_731->tid] >= p_731->l_comm_values[(safe_mod_func_uint32_t_u_u(p_731->tid, 4))]))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(18446744073709551609UL, 1UL)), (2L < ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))(l_19.s5154)), ((VECTOR(uint16_t, 8))(l_20.xyyyxxyx)).hi, ((VECTOR(uint16_t, 2))(l_21.s72)).yyxx))).w), func_22(((p_731->l_comm_values[(safe_mod_func_uint32_t_u_u(p_731->tid, 4))] , (((*l_59) = func_26((func_28(l_32, (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_35.yzzzxwzzzxzxxzxy)).sd5f4)).yyxwwwzw, ((VECTOR(uint8_t, 2))(p_731->g_36.se1)).yyxxyyyx))).s3, ((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_37.xyzx)).odd)), 1UL)).w)), l_21.s2, p_731) | ((~(((*l_52)++) & ((p_731->g_comm_values[p_731->tid] , p_731->g_56) != &p_731->g_57[3][0]))) && p_731->g_53)), p_731)) != p_731->g_56)) , (*l_59)), p_731->l_comm_values[(safe_mod_func_uint32_t_u_u(p_731->tid, 4))], l_21.s1, p_731), 0x8A45FE482D0FDD6FL, ((VECTOR(uint64_t, 8))(0x8365250192E02075L)), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 1UL)).s8a6b, ((VECTOR(uint64_t, 4))(0x78BC886C32A18A35L))))), ((VECTOR(uint64_t, 2))(0x303411C7EE16122DL)), p_731->g_77, 0x4EAEF42ED493506DL, (*l_32), p_731->g_93[4][2], p_731->g_75.s6, 7UL, l_284, 0x74952DC8F80C7AB0L, 0x188DD18EB14B404CL, 18446744073709551607UL)).sffb0)).w)), p_731->g_229.s1)), 1)) ^ p_731->g_229.sa) , (void*)0), p_731->g_230.s6, p_731->g_155.y, l_52, p_731->g_56, p_731), p_731->g_155.x, p_731->g_155.y, p_731->g_56, p_731);
    p_731->g_202 &= (((**l_59) != (+(*l_32))) >= ((*l_531) = ((p_731->g_166 < ((*l_528) = (safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((0x4A70L | l_519) != (&p_731->g_95[0] != &l_519)), ((safe_rshift_func_uint8_t_u_u((0x29L >= ((VECTOR(uint8_t, 4))(l_522.s1baf)).w), ((p_731->g_233 = (safe_mul_func_int16_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0UL, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_525.s71540143)).even)).wxwzxyxzzyyzzxyz, ((VECTOR(uint32_t, 16))(l_526.s35ca7697b7cc8c15)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_731->g_527.yy)).yyyy)).odd)).even, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((l_528 != (void*)0) > 0x70L), ((VECTOR(uint32_t, 2))(1UL)), 7UL)), 4294967295UL, ((VECTOR(uint32_t, 2))(0x1E035085L)), 0x7C07B061L)).s33)).yxxyxyxx)), ((VECTOR(uint32_t, 8))(0xF57C5D9DL))))).odd)).lo, ((VECTOR(uint32_t, 2))(0xD5507AECL))))), 1UL, 0x9047FED1L, p_731->g_36.s4, p_731->g_65, 4294967295UL, 0x509993B1L)).s51)).xyyy)).hi)).xyxyxxyxxxyyxyyy)).sa792)), 0x0B967C72L, 4294967294UL, 0xD23E6A15L)).s5647715144413440))).s9532, (uint32_t)(*l_32)))), ((VECTOR(uint32_t, 2))(0xACBE5809L)), 0x9EF155CCL)).s36)).even , p_731->g_99.se), p_731->g_53))) > (**l_59)))) < 0L))) == (*l_32)), 0x40D1A64FL)))) || 6L)));
    for (p_731->g_233 = 23; (p_731->g_233 != 29); p_731->g_233 = safe_add_func_int8_t_s_s(p_731->g_233, 3))
    { /* block id: 267 */
        int64_t l_590[10][3][8] = {{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}},{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}},{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}},{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}},{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}},{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}},{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}},{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}},{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}},{{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L},{1L,0x3618C2019C7B4863L,1L,0x0CFAB8338BF41D2AL,(-7L),0x3421B77C21E2B8F1L,0x7FA8BDAF4F3B247DL,0x32F87B27F44E5A33L}}};
        int32_t l_597 = 0x47CBF056L;
        int32_t l_598 = (-4L);
        uint32_t l_599 = 4294967295UL;
        int32_t l_603 = 6L;
        int32_t l_604 = 0x134DAEAEL;
        int32_t l_605 = 0x50D37ABEL;
        int32_t l_606 = 0L;
        int32_t l_607 = 0L;
        int32_t l_608 = (-1L);
        int32_t l_609 = 3L;
        int32_t l_610 = 0x1C658586L;
        int32_t l_611 = 0L;
        int32_t l_613 = 0x313A8575L;
        int32_t l_614 = 0x0FF71E02L;
        int32_t l_615 = (-6L);
        int64_t l_616[1][4] = {{0x16D8D2A9F2C88CD4L,0x16D8D2A9F2C88CD4L,0x16D8D2A9F2C88CD4L,0x16D8D2A9F2C88CD4L}};
        int32_t l_617 = 0L;
        int32_t l_619 = 5L;
        int32_t l_620 = 0x2D389B15L;
        int32_t l_621 = 0L;
        int32_t l_622 = 0x501B1DD8L;
        int32_t l_624 = 0L;
        int32_t l_625 = 0x4876459EL;
        int64_t l_626 = 0x5AF861199BFD1AF1L;
        int8_t l_627 = 1L;
        int32_t l_629 = 0x1C08C0C2L;
        int32_t l_630 = 5L;
        int32_t l_632 = (-10L);
        int32_t l_633 = 0L;
        int32_t l_634[1][2][2] = {{{0L,0L},{0L,0L}}};
        int16_t l_636 = 0x06C4L;
        uint8_t *l_660 = (void*)0;
        uint8_t *l_661 = (void*)0;
        uint8_t *l_662[1][3];
        int32_t *l_664 = (void*)0;
        int32_t *l_665 = (void*)0;
        int32_t *l_667 = (void*)0;
        int32_t *l_668 = (void*)0;
        int32_t *l_669 = (void*)0;
        int32_t *l_670 = (void*)0;
        int32_t *l_671 = (void*)0;
        int32_t *l_672 = (void*)0;
        int32_t *l_673 = (void*)0;
        int32_t *l_674 = (void*)0;
        int32_t *l_675 = (void*)0;
        int32_t *l_676 = (void*)0;
        int32_t *l_677 = (void*)0;
        int32_t *l_678 = (void*)0;
        int32_t *l_679 = (void*)0;
        int32_t *l_680 = (void*)0;
        int32_t *l_681 = (void*)0;
        uint64_t l_725 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_662[i][j] = (void*)0;
        }
        for (p_731->g_166 = 0; (p_731->g_166 >= 11); p_731->g_166 = safe_add_func_int64_t_s_s(p_731->g_166, 9))
        { /* block id: 270 */
            VECTOR(uint32_t, 8) l_575 = (VECTOR(uint32_t, 8))(0xD6244833L, (VECTOR(uint32_t, 4))(0xD6244833L, (VECTOR(uint32_t, 2))(0xD6244833L, 0x6FB687F2L), 0x6FB687F2L), 0x6FB687F2L, 0xD6244833L, 0x6FB687F2L);
            uint16_t *l_596[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_600[8][4] = {{9L,(-3L),(-3L),9L},{9L,(-3L),(-3L),9L},{9L,(-3L),(-3L),9L},{9L,(-3L),(-3L),9L},{9L,(-3L),(-3L),9L},{9L,(-3L),(-3L),9L},{9L,(-3L),(-3L),9L},{9L,(-3L),(-3L),9L}};
            uint32_t l_601 = 0x63C17159L;
            int i, j;
            if ((atomic_inc(&p_731->g_atomic_input[36 * get_linear_group_id() + 11]) == 9))
            { /* block id: 272 */
                uint16_t l_538 = 65535UL;
                int32_t l_539[3];
                int32_t l_540 = 0L;
                VECTOR(uint32_t, 4) l_541 = (VECTOR(uint32_t, 4))(0x6C9AC66CL, (VECTOR(uint32_t, 2))(0x6C9AC66CL, 7UL), 7UL);
                uint8_t l_542 = 0xFAL;
                int32_t *l_573 = &l_539[2];
                int32_t *l_574 = &l_539[2];
                int i;
                for (i = 0; i < 3; i++)
                    l_539[i] = (-1L);
                l_542 &= (l_541.y = (l_540 &= (l_539[2] = l_538)));
                for (l_541.z = 0; (l_541.z < 8); l_541.z = safe_add_func_uint32_t_u_u(l_541.z, 5))
                { /* block id: 279 */
                    VECTOR(int32_t, 8) l_545 = (VECTOR(int32_t, 8))(0x6905E53BL, (VECTOR(int32_t, 4))(0x6905E53BL, (VECTOR(int32_t, 2))(0x6905E53BL, 0L), 0L), 0L, 0x6905E53BL, 0L);
                    int32_t l_546[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_546[i] = 0x13D8571DL;
                    l_539[2] = 0x354BEEAAL;
                    l_539[2] &= ((VECTOR(int32_t, 4))(l_545.s7412)).y;
                    if (l_546[3])
                    { /* block id: 282 */
                        int32_t *l_547 = (void*)0;
                        int32_t l_548 = 0x75EFECDFL;
                        int32_t l_549 = 0x042B8340L;
                        VECTOR(int32_t, 4) l_550 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x50439A7FL), 0x50439A7FL);
                        VECTOR(int32_t, 4) l_551 = (VECTOR(int32_t, 4))(0x473A4F8EL, (VECTOR(int32_t, 2))(0x473A4F8EL, 0x168DAC04L), 0x168DAC04L);
                        int16_t l_552 = (-6L);
                        uint16_t l_553 = 4UL;
                        int8_t l_554[5][6];
                        VECTOR(int16_t, 8) l_555 = (VECTOR(int16_t, 8))(0x7068L, (VECTOR(int16_t, 4))(0x7068L, (VECTOR(int16_t, 2))(0x7068L, 0L), 0L), 0L, 0x7068L, 0L);
                        VECTOR(int64_t, 2) l_556 = (VECTOR(int64_t, 2))(1L, (-5L));
                        VECTOR(int16_t, 4) l_557 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x55D2L), 0x55D2L);
                        VECTOR(int16_t, 16) l_558 = (VECTOR(int16_t, 16))(0x5651L, (VECTOR(int16_t, 4))(0x5651L, (VECTOR(int16_t, 2))(0x5651L, 0x7484L), 0x7484L), 0x7484L, 0x5651L, 0x7484L, (VECTOR(int16_t, 2))(0x5651L, 0x7484L), (VECTOR(int16_t, 2))(0x5651L, 0x7484L), 0x5651L, 0x7484L, 0x5651L, 0x7484L);
                        uint16_t l_559 = 65530UL;
                        VECTOR(int16_t, 4) l_560 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x62D6L), 0x62D6L);
                        VECTOR(int16_t, 2) l_561 = (VECTOR(int16_t, 2))(0L, 0x77A2L);
                        VECTOR(int16_t, 4) l_562 = (VECTOR(int16_t, 4))(0x659CL, (VECTOR(int16_t, 2))(0x659CL, (-1L)), (-1L));
                        VECTOR(int16_t, 4) l_563 = (VECTOR(int16_t, 4))(0x37A2L, (VECTOR(int16_t, 2))(0x37A2L, (-1L)), (-1L));
                        int16_t l_564 = 0x02A6L;
                        int64_t l_565 = 0L;
                        uint8_t l_566 = 0x86L;
                        uint8_t l_567 = 0xF8L;
                        VECTOR(uint64_t, 16) l_568 = (VECTOR(uint64_t, 16))(0x8288364F075ACD4CL, (VECTOR(uint64_t, 4))(0x8288364F075ACD4CL, (VECTOR(uint64_t, 2))(0x8288364F075ACD4CL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x8288364F075ACD4CL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x8288364F075ACD4CL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x8288364F075ACD4CL, 18446744073709551615UL), 0x8288364F075ACD4CL, 18446744073709551615UL, 0x8288364F075ACD4CL, 18446744073709551615UL);
                        int32_t l_569[8] = {0x46F10CB5L,0x46F10CB5L,0x46F10CB5L,0x46F10CB5L,0x46F10CB5L,0x46F10CB5L,0x46F10CB5L,0x46F10CB5L};
                        uint64_t l_570 = 0xB2E0615D26CD8927L;
                        int8_t l_571 = 1L;
                        int32_t l_572 = (-8L);
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_554[i][j] = (-1L);
                        }
                        l_547 = (void*)0;
                        l_539[2] ^= l_548;
                        l_545.s0 = ((l_539[2] = l_549) , ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x7D2763A0L, 0L)).yyyxyxyyxyyxyxxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_550.ww)).yyyyyyxxyxyyxyxy)), ((VECTOR(int32_t, 4))((-10L), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x0C1ADEF5L, 0x0057E907L, 0x506BDA3BL, (-1L))).zxyxyyzwxwwwwxzx)).s11, ((VECTOR(int32_t, 8))(0x5948F821L, 0x71ACE5A8L, 0x447BEEF9L, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_551.yywx)).yzyyzywz)).lo, (int32_t)(l_539[1] = (((l_569[4] = ((((l_553 |= l_552) , 0x36L) , (l_554[3][2] &= ((VECTOR(uint32_t, 2))(0x1C896FA2L, 0xE13F1E8FL)).hi)) , (((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_555.s76101040)).lo)).xyzzyyxywwywywxx)).s84)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))((l_552 = l_556.y), 0x2254L, 6L, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(l_557.yxwyywwxyyyywxyz)).s5a, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_558.s0b431105a2749ad3)).s1b83)).odd))), 0x167BL, (l_559 , 0x1A29L), 1L, 0x5E97L, ((VECTOR(int16_t, 2))(0x0D9FL, (-1L))), ((VECTOR(int16_t, 2))(l_560.wy)), 0L, 1L, 0x0435L)).odd, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0x149DL, ((VECTOR(int16_t, 16))(0x3098L, (-3L), (-1L), 0x7B06L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_561.yy)).xxxx)), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_562.xzwy)).even)).yyyx, ((VECTOR(int16_t, 2))(l_563.zx)).yyxy))).wxwzyyzx, (int16_t)(((l_566 = (l_565 &= l_564)) , l_567) , l_568.sd)))).s40, ((VECTOR(int16_t, 2))(0x42ADL)), ((VECTOR(int16_t, 2))(7L))))), 9L, 0x2F3DL)).even, ((VECTOR(int16_t, 2))(0L))))), 0x5A0AL, 0x0224L)).even)).y, 0x04B9L, ((VECTOR(int16_t, 8))((-1L))), 0L, 0x4FFFL)).s8, 0L, ((VECTOR(int16_t, 2))((-10L))), ((VECTOR(int16_t, 8))(1L)), ((VECTOR(int16_t, 2))(0x5068L)), (-1L))).s4b)).xyyyyxyx))))).lo, ((VECTOR(int16_t, 4))(7L))))))).even))))))).yxxyyxyyxxxyxyxx, ((VECTOR(int16_t, 16))(0L))))), ((VECTOR(int16_t, 16))((-4L))), ((VECTOR(int16_t, 16))(1L))))).s8 , 0x4825D0DDL))) , l_570) , l_571)), (int32_t)l_572))), 0x3F4752EAL)).s25))).odd, 0x140D196DL, 1L)).xxyzzzwwyxxwxwyw))).s7);
                        l_545.s6 = 0x1ACF2230L;
                    }
                    else
                    { /* block id: 295 */
                        l_545.s4 = 0x05147956L;
                    }
                }
                l_574 = l_573;
                unsigned int result = 0;
                result += l_538;
                int l_539_i0;
                for (l_539_i0 = 0; l_539_i0 < 3; l_539_i0++) {
                    result += l_539[l_539_i0];
                }
                result += l_540;
                result += l_541.w;
                result += l_541.z;
                result += l_541.y;
                result += l_541.x;
                result += l_542;
                atomic_add(&p_731->g_special_values[36 * get_linear_group_id() + 11], result);
            }
            else
            { /* block id: 300 */
                (1 + 1);
            }
            (*l_59) = (((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 2))(l_575.s03)).xxyy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))((*p_731->g_56), (safe_rshift_func_int16_t_s_s((l_600[3][2] = ((((VECTOR(int32_t, 16))(p_731->g_578.xxyxyyyxxyxyyxxy)).sb != ((65535UL || (((VECTOR(uint32_t, 16))(l_579.xyyyyxyxyxyyyxxy)).s1 , (((VECTOR(int16_t, 16))(p_731->g_580.s1317616242276331)).sd ^ ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x3AD3L, 0x493FL)), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_731->g_527.z, ((VECTOR(int16_t, 2))(0x756DL, 0x6CDDL)), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(p_731->g_581.s52)), ((VECTOR(int16_t, 16))(p_731->g_582.xxyxxyyxxxxyxxxx)).s68))), ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(p_731->g_583.sd4)), ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))((((((p_731->g_202 |= (!(~(((((p_731->g_93[6][1] & (((safe_mul_func_uint8_t_u_u(((l_597 |= ((0xE3AA7F31L < l_575.s4) , ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(2UL, (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_731->g_222, ((((l_590[4][1][6] , p_731->g_75.s7) , p_731->g_591) != l_594) == (-2L)))), (*p_731->g_56))), 3UL, 0xB03BBC6DL)).xzwwxxzy)).s5 >= 8UL) , FAKE_DIVERGE(p_731->group_0_offset, get_group_id(0), 10)))) & l_598), (-1L))) | 0x96BD4522L) && 65534UL)) , l_599) , (-9L)) > l_575.s3) <= p_731->g_233)))) , p_731->g_93[0][2]) > 0x3803L) , 0x98A70C3BAA2F4F9DL) < 0x69D1E16798B9F2B7L), 6UL, ((VECTOR(uint8_t, 8))(0xE4L)), 0xC9L, ((VECTOR(uint8_t, 4))(0x0CL)), 0x0DL)).sc2ec, ((VECTOR(uint8_t, 4))(0x38L))))).zzywzwwz))).s52))), 0x5538L)).s05)), (-1L), 0x41EEL, 1L, ((VECTOR(int16_t, 8))(0x5D20L)), ((VECTOR(int16_t, 2))((-6L))), 0x016BL)))).sa0, ((VECTOR(int16_t, 2))(0L))))), 0L, 0x35D0L, ((VECTOR(int16_t, 2))(0x1237L)), ((VECTOR(int16_t, 8))((-2L))))).s2b6b)).w))) ^ p_731->g_205)) == l_575.s2)), 10)), ((VECTOR(uint32_t, 8))(0xA1FB1987L)), 0x92901A00L, (*p_731->g_56), 0x2FA60BFCL, GROUP_DIVERGE(1, 1), 1UL, 0UL)).se7)).xyxxyyyy)), ((VECTOR(uint32_t, 8))(0xC6B6F300L))))).s7444732473130402, ((VECTOR(uint32_t, 16))(0x1E140D6EL))))).s574f))))), (uint32_t)0x9AD6B9B3L, (uint32_t)l_601))))).y != l_590[4][1][6]) ^ 0x45EDL) , (*p_731->g_291));
            return (**p_731->g_62);
        }
        --l_637[6];
        if (((((*l_528) = (l_643[3] = ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL)), ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_731->g_640.yx)), 2UL, 9UL)).yxxyywxwwzwzxxxw)).sde1d))).wwzyyyyyyxxwzxwx)).hi))).odd, (uint64_t)((*l_531)--)))).odd))).even)) | (safe_unary_minus_func_int8_t_s(((0x3B2DAF2F881AE77AL <= (**l_59)) | (safe_div_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_731->g_651.ww)), 0xB0L, 0x7BL, (p_731->g_651.w & p_731->g_229.s1), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_652.wwyz)).wyyxzxwyxwwwzxwx)).s72)), 0xF4L, 255UL)).x, 255UL, 0x86L)).s12, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_731->g_653.xyyxxxxy)).s1410177477124243)).s3, ((l_629 = ((((*l_32) && l_590[4][1][6]) < ((l_604 , ((((l_611 |= ((safe_rshift_func_uint16_t_u_u(0xF0A7L, (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_731->g_656.xy)).xxxxxyxxxyyxyyyy)).s17)).xyyyxyyx)), 0x164DL, 0x2F54L, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 1L)), 1L, 0x2A1EL)).yywxwwww)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x5786L, 4L)).yxxyyxyxxxxyyyxx)))).lo))).s45, ((VECTOR(int16_t, 2))(0x6FB3L, (-2L)))))).xxyxxyyx, ((VECTOR(int16_t, 2))(0L, 0x418DL)).xxxxxxxy))).s22)).xyyxyxyx, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((safe_mod_func_int16_t_s_s((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))((((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 2))(p_731->g_659.s84)).xxyxyxyxyyxyxyxx))).even, (uint64_t)((void*)0 != &p_731->g_202)))), ((VECTOR(uint64_t, 8))(0x6B4E9AF710830269L))))).s5 != (**l_59)), 0L, (-4L), (*p_731->g_292), (-10L), 0x02BF7976L, 0L, 0x13C59424L)), ((VECTOR(int32_t, 8))((-1L)))))).s67)).hi & (*p_731->g_56)), (**l_59))), p_731->g_230.s2, l_624, p_731->g_659.s9, ((VECTOR(int16_t, 4))(0x1262L)), ((VECTOR(int16_t, 8))(0x0EC7L)))).sbc73)).xwwzzzxw, ((VECTOR(int16_t, 8))(1L))))), ((VECTOR(int16_t, 8))(1L))))).odd, ((VECTOR(int16_t, 4))((-1L)))))), (-1L), 0x27F9L)).s3 < 2L))) , p_731->g_580.s7)) ^ (**l_59)) & p_731->g_166) , l_663)) , p_731->g_651.x)) , p_731->g_656.y)) , p_731->g_166), 0x71L, 9UL)).y, 0xCFL, 0x1DL, 250UL)).odd))))).xyyy, ((VECTOR(uint8_t, 4))(1UL))))).y, p_731->g_651.x)), l_609)) || 1UL) < p_731->g_656.z) == 65531UL), p_731->g_659.sb)))))) > p_731->g_659.s7))
        { /* block id: 315 */
            VECTOR(uint32_t, 4) l_682 = (VECTOR(uint32_t, 4))(0x9740277BL, (VECTOR(uint32_t, 2))(0x9740277BL, 0x5F6A607AL), 0x5F6A607AL);
            uint16_t *l_695 = (void*)0;
            uint16_t *l_696 = &p_731->g_93[6][1];
            int i;
            l_682.z++;
            l_610 &= (*p_731->g_292);
            l_629 ^= ((p_731->g_44 < (safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_731->g_219.s4 < (((VECTOR(uint16_t, 8))(((*l_696) = (safe_mul_func_int8_t_s_s(((*p_731->g_56) > 0x0F8EAF88L), (safe_rshift_func_int16_t_s_s((!(((*p_731->g_63) <= (*p_731->g_56)) < ((((safe_sub_func_uint8_t_u_u((p_731->g_651.w ^= (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_682.y, ((p_731->g_578.y >= (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x15L, (-8L))).xyyyxxxy)).lo)).zyxywwww)).s7 | ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(0x1CL, 3UL, 0xCEL, 0UL)).hi)).odd)) <= l_604), 1L, 0L)).wxwxwwyx)).s34)).even == (*p_731->g_63))), p_731->g_93[0][2])) <= 4UL) ^ (*l_32)) , 0x4DF36EDD68679086L))), 10))))), ((VECTOR(uint16_t, 4))(0x8498L)), 65532UL, 0x8B1AL, 0x4DEEL)).s1 > 0x3897L)), 2)), l_682.x))) | p_731->g_582.y);
        }
        else
        { /* block id: 321 */
            int8_t *l_710[2];
            int32_t l_717 = 9L;
            int32_t l_718 = 0x54A2A774L;
            VECTOR(int32_t, 4) l_720 = (VECTOR(int32_t, 4))(0x1292C1A9L, (VECTOR(int32_t, 2))(0x1292C1A9L, 6L), 6L);
            int32_t l_721 = (-6L);
            int32_t *l_724 = &p_731->g_44;
            int i;
            for (i = 0; i < 2; i++)
                l_710[i] = &l_635[1][0];
            (**l_59) = (l_721 ^= (((*p_731->g_56) >= 1UL) != (safe_mul_func_int8_t_s_s((l_718 = ((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((+(*p_731->g_592)), (safe_div_func_uint16_t_u_u(((((VECTOR(int32_t, 4))(p_731->g_705.yyxx)).x == (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((l_621 = p_731->g_659.sd), 5)), (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((0x74113E56L || (0x717DBBECL > (l_624 = ((l_717 = p_731->g_659.s0) , (-10L))))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((l_718 , l_718), l_630, (-1L), p_731->g_166, l_718, 0x6EF8L, 0x586FL, 6L)).s34)), (*l_32), (**l_59), 0x3DD6L, ((VECTOR(int16_t, 2))(0x4CBFL)), 3L)).s7)), l_719)), 0x3DL))))) , l_629), (**l_59))))), 0xE96AL)) < p_731->g_219.s0)), l_720.w))));
            for (p_731->g_166 = 3; (p_731->g_166 > 19); p_731->g_166++)
            { /* block id: 330 */
                l_724 = (void*)0;
            }
            (*l_32) = (**p_731->g_291);
        }
        ++l_725;
    }
    ++l_728;
    return (**l_59);
}


/* ------------------------------------------ */
/* 
 * reads : p_731->g_291 p_731->g_62 p_731->g_63
 * writes: p_731->g_63 p_731->g_292
 */
int32_t * func_2(int32_t * p_3, int64_t  p_4, uint16_t  p_5, int32_t * p_6, struct S0 * p_731)
{ /* block id: 126 */
    int32_t **l_285 = (void*)0;
    int32_t **l_286 = (void*)0;
    int32_t *l_287[2];
    int32_t **l_288 = &p_731->g_63;
    int i;
    for (i = 0; i < 2; i++)
        l_287[i] = &p_731->g_202;
    (*p_731->g_291) = ((*l_288) = (l_287[0] = p_6));
    if ((atomic_inc(&p_731->l_atomic_input[15]) == 1))
    { /* block id: 131 */
        int32_t l_294 = 0x4FBFC27EL;
        int32_t *l_293 = &l_294;
        int32_t *l_295[8] = {&l_294,&l_294,&l_294,&l_294,&l_294,&l_294,&l_294,&l_294};
        uint16_t l_296 = 0x7258L;
        VECTOR(int32_t, 4) l_297 = (VECTOR(int32_t, 4))(0x5A0BC34AL, (VECTOR(int32_t, 2))(0x5A0BC34AL, 0x6DC4F84FL), 0x6DC4F84FL);
        VECTOR(int32_t, 8) l_298 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), 4L, 0L, 4L);
        VECTOR(int16_t, 4) l_299 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x4305L), 0x4305L);
        VECTOR(int16_t, 8) l_300 = (VECTOR(int16_t, 8))(0x16C9L, (VECTOR(int16_t, 4))(0x16C9L, (VECTOR(int16_t, 2))(0x16C9L, 0L), 0L), 0L, 0x16C9L, 0L);
        VECTOR(int16_t, 2) l_301 = (VECTOR(int16_t, 2))(1L, 0x16C4L);
        uint16_t l_302 = 0x2407L;
        int32_t l_303 = (-1L);
        VECTOR(int16_t, 16) l_304 = (VECTOR(int16_t, 16))(0x65CDL, (VECTOR(int16_t, 4))(0x65CDL, (VECTOR(int16_t, 2))(0x65CDL, 0x109FL), 0x109FL), 0x109FL, 0x65CDL, 0x109FL, (VECTOR(int16_t, 2))(0x65CDL, 0x109FL), (VECTOR(int16_t, 2))(0x65CDL, 0x109FL), 0x65CDL, 0x109FL, 0x65CDL, 0x109FL);
        VECTOR(int16_t, 16) l_305 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x3398L), 0x3398L), 0x3398L, (-6L), 0x3398L, (VECTOR(int16_t, 2))((-6L), 0x3398L), (VECTOR(int16_t, 2))((-6L), 0x3398L), (-6L), 0x3398L, (-6L), 0x3398L);
        int32_t l_306[1][8][10] = {{{1L,4L,1L,0x3D2D6855L,4L,0x3D2D6855L,1L,4L,1L,1L},{1L,4L,1L,0x3D2D6855L,4L,0x3D2D6855L,1L,4L,1L,1L},{1L,4L,1L,0x3D2D6855L,4L,0x3D2D6855L,1L,4L,1L,1L},{1L,4L,1L,0x3D2D6855L,4L,0x3D2D6855L,1L,4L,1L,1L},{1L,4L,1L,0x3D2D6855L,4L,0x3D2D6855L,1L,4L,1L,1L},{1L,4L,1L,0x3D2D6855L,4L,0x3D2D6855L,1L,4L,1L,1L},{1L,4L,1L,0x3D2D6855L,4L,0x3D2D6855L,1L,4L,1L,1L},{1L,4L,1L,0x3D2D6855L,4L,0x3D2D6855L,1L,4L,1L,1L}}};
        VECTOR(int16_t, 2) l_307 = (VECTOR(int16_t, 2))(0x2BC2L, (-1L));
        VECTOR(int16_t, 4) l_308 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3215L), 0x3215L);
        VECTOR(int16_t, 4) l_309 = (VECTOR(int16_t, 4))(0x6820L, (VECTOR(int16_t, 2))(0x6820L, 0x5D45L), 0x5D45L);
        uint8_t l_310 = 0UL;
        int64_t l_311 = 0x3070F6600F9E3BD0L;
        VECTOR(int16_t, 2) l_312 = (VECTOR(int16_t, 2))(1L, (-1L));
        int16_t l_313 = 0x529FL;
        int32_t l_314 = (-5L);
        uint32_t l_315 = 9UL;
        int32_t l_316 = 0x7A4DF89FL;
        uint8_t l_317 = 0UL;
        uint8_t l_318[2];
        int64_t l_319 = 0x5EDE851376081FDCL;
        uint16_t l_320 = 0xCA44L;
        int32_t l_321 = 0x66918ABFL;
        int64_t l_481 = 0x497508575AFB0A8EL;
        uint64_t l_482[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int16_t l_483 = 0x60A3L;
        int32_t l_484 = 1L;
        int16_t l_485 = 0x7243L;
        uint16_t l_486 = 0xA702L;
        VECTOR(int32_t, 16) l_487 = (VECTOR(int32_t, 16))(0x7874EF03L, (VECTOR(int32_t, 4))(0x7874EF03L, (VECTOR(int32_t, 2))(0x7874EF03L, 0x4C8725E4L), 0x4C8725E4L), 0x4C8725E4L, 0x7874EF03L, 0x4C8725E4L, (VECTOR(int32_t, 2))(0x7874EF03L, 0x4C8725E4L), (VECTOR(int32_t, 2))(0x7874EF03L, 0x4C8725E4L), 0x7874EF03L, 0x4C8725E4L, 0x7874EF03L, 0x4C8725E4L);
        VECTOR(int32_t, 8) l_488 = (VECTOR(int32_t, 8))(0x4262AFF8L, (VECTOR(int32_t, 4))(0x4262AFF8L, (VECTOR(int32_t, 2))(0x4262AFF8L, 0L), 0L), 0L, 0x4262AFF8L, 0L);
        VECTOR(int32_t, 16) l_489 = (VECTOR(int32_t, 16))(0x3CB1C6FEL, (VECTOR(int32_t, 4))(0x3CB1C6FEL, (VECTOR(int32_t, 2))(0x3CB1C6FEL, (-1L)), (-1L)), (-1L), 0x3CB1C6FEL, (-1L), (VECTOR(int32_t, 2))(0x3CB1C6FEL, (-1L)), (VECTOR(int32_t, 2))(0x3CB1C6FEL, (-1L)), 0x3CB1C6FEL, (-1L), 0x3CB1C6FEL, (-1L));
        VECTOR(int32_t, 8) l_490 = (VECTOR(int32_t, 8))(0x1F006597L, (VECTOR(int32_t, 4))(0x1F006597L, (VECTOR(int32_t, 2))(0x1F006597L, 0x60529E2AL), 0x60529E2AL), 0x60529E2AL, 0x1F006597L, 0x60529E2AL);
        VECTOR(int16_t, 2) l_491 = (VECTOR(int16_t, 2))(0x094EL, 0x239DL);
        VECTOR(uint16_t, 4) l_492 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x2009L), 0x2009L);
        VECTOR(int32_t, 8) l_493 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x410189C0L), 0x410189C0L), 0x410189C0L, (-1L), 0x410189C0L);
        VECTOR(int32_t, 8) l_494 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L));
        VECTOR(int32_t, 2) l_495 = (VECTOR(int32_t, 2))(0x32BDFBE3L, 0x075E19EBL);
        VECTOR(int32_t, 8) l_496 = (VECTOR(int32_t, 8))(0x4A2EC803L, (VECTOR(int32_t, 4))(0x4A2EC803L, (VECTOR(int32_t, 2))(0x4A2EC803L, 1L), 1L), 1L, 0x4A2EC803L, 1L);
        uint8_t l_497 = 0x1FL;
        VECTOR(int32_t, 4) l_498 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x6159CBB9L), 0x6159CBB9L);
        VECTOR(int32_t, 4) l_499 = (VECTOR(int32_t, 4))(0x155605B2L, (VECTOR(int32_t, 2))(0x155605B2L, 1L), 1L);
        VECTOR(int32_t, 2) l_500 = (VECTOR(int32_t, 2))(1L, 0x67C6649BL);
        uint64_t l_501 = 0x928BB7D52065EEDBL;
        int64_t l_502 = 0x29F5C18785F2767BL;
        uint32_t l_503 = 0x564CCF9BL;
        int32_t l_504 = 0x40BFDC94L;
        VECTOR(int32_t, 8) l_505 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x37CCC308L), 0x37CCC308L), 0x37CCC308L, (-5L), 0x37CCC308L);
        int32_t l_506 = 0x37FD3CE5L;
        VECTOR(int16_t, 16) l_507 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L), (VECTOR(int16_t, 2))((-10L), (-1L)), (VECTOR(int16_t, 2))((-10L), (-1L)), (-10L), (-1L), (-10L), (-1L));
        int64_t l_508 = 0x544BF9AE47CD12D0L;
        VECTOR(uint32_t, 16) l_509 = (VECTOR(uint32_t, 16))(0xA7357F52L, (VECTOR(uint32_t, 4))(0xA7357F52L, (VECTOR(uint32_t, 2))(0xA7357F52L, 0x188DCADCL), 0x188DCADCL), 0x188DCADCL, 0xA7357F52L, 0x188DCADCL, (VECTOR(uint32_t, 2))(0xA7357F52L, 0x188DCADCL), (VECTOR(uint32_t, 2))(0xA7357F52L, 0x188DCADCL), 0xA7357F52L, 0x188DCADCL, 0xA7357F52L, 0x188DCADCL);
        uint8_t l_510[1][5] = {{255UL,255UL,255UL,255UL,255UL}};
        uint8_t l_511 = 0xEAL;
        VECTOR(uint8_t, 8) l_512 = (VECTOR(uint8_t, 8))(0x2FL, (VECTOR(uint8_t, 4))(0x2FL, (VECTOR(uint8_t, 2))(0x2FL, 0UL), 0UL), 0UL, 0x2FL, 0UL);
        int8_t l_513 = 0x04L;
        int8_t l_514 = (-6L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_318[i] = 0x1DL;
        l_295[5] = l_293;
        if ((l_321 ^= (l_296 , ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(l_297.yy)).xxxxxyxy, ((VECTOR(int32_t, 4))(l_298.s4520)).wxxywzyy))), (int32_t)(l_320 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_299.zxyy)).xyzwxzzzwwwzyyyx)).s11, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_300.s37120401)).s30)).yyxyxxyy)).odd, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(l_301.xyyxxxyx)).s06))), (-1L), l_302, l_303, (-4L), ((VECTOR(int16_t, 8))(0x4CC0L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x4C66L, ((VECTOR(int16_t, 2))(l_304.sd4)), 6L)).lo)).yyyyyyyx)).even, ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_305.s3eccf84908ce7fd2)).s7e)), (l_306[0][4][3] = 1L), ((VECTOR(int16_t, 2))(0x39CBL, 0x3D64L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(l_307.xy)), ((VECTOR(int16_t, 2))(0x3403L, 0x0552L))))))), 9L)).s4214423073072234)).sc903, ((VECTOR(int16_t, 4))(l_308.yyzx)), ((VECTOR(int16_t, 8))(l_309.yzxxyyzy)).hi))))), l_310, ((VECTOR(int16_t, 4))(l_311, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(1L, 0x30C2L, ((VECTOR(int16_t, 8))(l_312.xyxxxxyx)), l_313, ((VECTOR(int16_t, 4))(0x50D5L)), 0x6DC8L)).sc6)), ((VECTOR(int16_t, 2))(0x33A5L))))).yxxxyxyy)).s20, ((VECTOR(int16_t, 2))(7L))))), ((VECTOR(int16_t, 2))(1L))))).xxxx, (int16_t)l_314))).lo, ((VECTOR(int16_t, 2))(0L))))), ((VECTOR(int16_t, 2))(0x3804L)), ((VECTOR(int16_t, 2))((-9L)))))), 0x6D76L)), ((VECTOR(int16_t, 2))(0x2D11L)), l_315, (-1L), l_316, 0x6D6DL, 0x1DC2L)).hi)).lo)), ((VECTOR(int16_t, 4))(0x0BD7L)), ((VECTOR(int16_t, 4))(1L))))).zwwxwzxyxxzwxxxy, ((VECTOR(int16_t, 16))(0x1108L))))).se294))).hi)).yxyy, ((VECTOR(int16_t, 4))((-6L)))))), 0x0AE5L, 0x143FL, 1L)).s3, (-10L), (-1L), l_317, ((VECTOR(int16_t, 4))(0x3F6DL)), 9L, 0x50D2L)).s0fdd))).lo))), ((VECTOR(int16_t, 2))((-4L))), ((VECTOR(int16_t, 2))((-1L)))))), l_318[0], l_319, ((VECTOR(int16_t, 2))((-4L))), (-1L), 0x7168L)).s53, ((VECTOR(uint16_t, 2))(0x40D2L))))).yyyyxxxyyyxyxxyx)))).s4)))).s3)))
        { /* block id: 136 */
            VECTOR(int32_t, 2) l_322 = (VECTOR(int32_t, 2))(0x177189A7L, 0L);
            VECTOR(int32_t, 2) l_323 = (VECTOR(int32_t, 2))(0x47A3EA6DL, 0x55FD00DFL);
            VECTOR(int32_t, 16) l_324 = (VECTOR(int32_t, 16))(0x4E895B41L, (VECTOR(int32_t, 4))(0x4E895B41L, (VECTOR(int32_t, 2))(0x4E895B41L, 0x2003F100L), 0x2003F100L), 0x2003F100L, 0x4E895B41L, 0x2003F100L, (VECTOR(int32_t, 2))(0x4E895B41L, 0x2003F100L), (VECTOR(int32_t, 2))(0x4E895B41L, 0x2003F100L), 0x4E895B41L, 0x2003F100L, 0x4E895B41L, 0x2003F100L);
            uint64_t l_325 = 0UL;
            uint16_t l_326 = 0xBCF2L;
            VECTOR(int32_t, 8) l_327 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3F660C1DL), 0x3F660C1DL), 0x3F660C1DL, (-1L), 0x3F660C1DL);
            VECTOR(int32_t, 16) l_328 = (VECTOR(int32_t, 16))(0x710FEA08L, (VECTOR(int32_t, 4))(0x710FEA08L, (VECTOR(int32_t, 2))(0x710FEA08L, 0x651758D6L), 0x651758D6L), 0x651758D6L, 0x710FEA08L, 0x651758D6L, (VECTOR(int32_t, 2))(0x710FEA08L, 0x651758D6L), (VECTOR(int32_t, 2))(0x710FEA08L, 0x651758D6L), 0x710FEA08L, 0x651758D6L, 0x710FEA08L, 0x651758D6L);
            VECTOR(int32_t, 16) l_329 = (VECTOR(int32_t, 16))(0x54F513D5L, (VECTOR(int32_t, 4))(0x54F513D5L, (VECTOR(int32_t, 2))(0x54F513D5L, 0x6489B31BL), 0x6489B31BL), 0x6489B31BL, 0x54F513D5L, 0x6489B31BL, (VECTOR(int32_t, 2))(0x54F513D5L, 0x6489B31BL), (VECTOR(int32_t, 2))(0x54F513D5L, 0x6489B31BL), 0x54F513D5L, 0x6489B31BL, 0x54F513D5L, 0x6489B31BL);
            VECTOR(int32_t, 2) l_330 = (VECTOR(int32_t, 2))((-1L), 0L);
            VECTOR(int32_t, 2) l_331 = (VECTOR(int32_t, 2))(1L, 0x77FE9932L);
            VECTOR(int32_t, 16) l_332 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x3A99EEA8L), 0x3A99EEA8L), 0x3A99EEA8L, (-5L), 0x3A99EEA8L, (VECTOR(int32_t, 2))((-5L), 0x3A99EEA8L), (VECTOR(int32_t, 2))((-5L), 0x3A99EEA8L), (-5L), 0x3A99EEA8L, (-5L), 0x3A99EEA8L);
            VECTOR(int32_t, 16) l_333 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x786DD5B1L), 0x786DD5B1L), 0x786DD5B1L, (-1L), 0x786DD5B1L, (VECTOR(int32_t, 2))((-1L), 0x786DD5B1L), (VECTOR(int32_t, 2))((-1L), 0x786DD5B1L), (-1L), 0x786DD5B1L, (-1L), 0x786DD5B1L);
            uint32_t l_334 = 0xDA1DD340L;
            int32_t l_335 = 6L;
            VECTOR(int32_t, 16) l_336 = (VECTOR(int32_t, 16))(0x217665F8L, (VECTOR(int32_t, 4))(0x217665F8L, (VECTOR(int32_t, 2))(0x217665F8L, 0x7779AA65L), 0x7779AA65L), 0x7779AA65L, 0x217665F8L, 0x7779AA65L, (VECTOR(int32_t, 2))(0x217665F8L, 0x7779AA65L), (VECTOR(int32_t, 2))(0x217665F8L, 0x7779AA65L), 0x217665F8L, 0x7779AA65L, 0x217665F8L, 0x7779AA65L);
            int64_t l_364 = (-5L);
            int i;
            (*l_293) = ((VECTOR(int32_t, 4))(l_322.yxxy)).y;
            l_322.y &= ((VECTOR(int32_t, 16))(0x47EE4893L, ((VECTOR(int32_t, 2))(l_323.xx)), 0L, 8L, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_324.sacfc)), ((l_321 = l_325) , 0x7E95F43FL), l_326, 0x01275483L, 0x3F8D3BAAL)).odd, ((VECTOR(int32_t, 16))(l_327.s4662371033063057)).sc91c, ((VECTOR(int32_t, 16))(l_328.s7efedbadc3ba326f)).s1ab0))).wwxxwxxw)), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_329.sdff6)))).odd, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_330.yxyxxxyxxxyyxxxy)).hi, ((VECTOR(int32_t, 16))(l_331.xyxyxyxyyxxxxxyy)).odd))).s11))).yyyxyxyx))), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_332.s0f1222fc)).s00, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(0L, 0x6E3BB3ABL, 0x26289884L, 0x5D528873L))))), ((VECTOR(int32_t, 4))(l_333.s101d))))), l_334, l_335, 0x029FD424L, 0x6A31854DL, ((VECTOR(int32_t, 2))(0x7BD36EA0L, 0x42BE219BL)), 0x4FBFB712L, 1L, 0x6D127626L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(0x3D517347L, 1L)), (int32_t)((VECTOR(int32_t, 8))(l_336.s204f1598)).s5))), 0x38583B7DL)).s8f))), 0x1830DF20L)).sd;
            for (l_327.s0 = 0; (l_327.s0 < (-26)); l_327.s0 = safe_sub_func_int32_t_s_s(l_327.s0, 4))
            { /* block id: 142 */
                uint16_t l_339 = 0UL;
                int32_t l_340 = 0x6FA76B00L;
                l_340 = l_339;
                for (l_340 = 7; (l_340 <= 25); l_340 = safe_add_func_int64_t_s_s(l_340, 6))
                { /* block id: 146 */
                    uint64_t l_343 = 9UL;
                    uint32_t l_344 = 0x6D0482F9L;
                    int64_t l_345 = 0x7C3FA4910D2A02A4L;
                    int8_t l_346 = 1L;
                    uint64_t *l_348 = &l_343;
                    uint64_t **l_347 = &l_348;
                    uint64_t **l_349 = (void*)0;
                    uint16_t l_361[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_361[i] = 0xE67CL;
                    l_349 = ((l_343 , (l_346 ^= (l_345 = l_344))) , l_347);
                    for (l_344 = 0; (l_344 >= 56); ++l_344)
                    { /* block id: 152 */
                        uint32_t l_352 = 0x98EEEA9DL;
                        int16_t l_353[1][1];
                        uint32_t l_354 = 1UL;
                        int32_t l_356 = 0x15E66BFFL;
                        int32_t *l_355 = &l_356;
                        int32_t *l_357[7][1][9] = {{{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,(void*)0}},{{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,(void*)0}},{{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,(void*)0}},{{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,(void*)0}},{{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,(void*)0}},{{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,(void*)0}},{{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,(void*)0}}};
                        int8_t l_358 = 2L;
                        int32_t *l_359 = &l_356;
                        uint32_t l_360[9] = {5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_353[i][j] = 0x2668L;
                        }
                        l_357[2][0][1] = ((l_310 = (l_318[0] = ((l_354 = (l_353[0][0] = (FAKE_DIVERGE(p_731->global_1_offset, get_global_id(1), 10) , l_352))) , 0x8FL))) , l_355);
                    }
                    --l_361[1];
                }
            }
            l_327.s1 = l_364;
        }
        else
        { /* block id: 167 */
            int32_t l_365 = 0x6A86F987L;
            l_295[6] = (void*)0;
            for (l_365 = (-2); (l_365 > (-26)); --l_365)
            { /* block id: 171 */
                int32_t l_368 = 0x1FDC281FL;
                int32_t *l_405 = &l_368;
                for (l_368 = 0; (l_368 == 7); l_368++)
                { /* block id: 174 */
                    int32_t l_371 = 0x722AA2ABL;
                    VECTOR(int16_t, 16) l_380 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x13B6L), 0x13B6L), 0x13B6L, 5L, 0x13B6L, (VECTOR(int16_t, 2))(5L, 0x13B6L), (VECTOR(int16_t, 2))(5L, 0x13B6L), 5L, 0x13B6L, 5L, 0x13B6L);
                    int16_t l_381 = (-1L);
                    VECTOR(int16_t, 16) l_382 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L, (VECTOR(int16_t, 2))((-4L), 0L), (VECTOR(int16_t, 2))((-4L), 0L), (-4L), 0L, (-4L), 0L);
                    int32_t l_383 = 0x4050638CL;
                    uint16_t l_384 = 0x158CL;
                    uint64_t l_385 = 0x226B88F64A4A42AFL;
                    uint64_t l_386[6][1][10] = {{{0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L}},{{0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L}},{{0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L}},{{0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L}},{{0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L}},{{0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L,5UL,0x85C5D4467D2A6672L,0x85C5D4467D2A6672L}}};
                    uint16_t l_387 = 0xCDE0L;
                    VECTOR(int16_t, 4) l_388 = (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x3151L), 0x3151L);
                    VECTOR(int16_t, 2) l_389 = (VECTOR(int16_t, 2))(0x4B04L, (-1L));
                    int8_t l_390 = 0x06L;
                    uint64_t l_391 = 0x1C34F5FCC2F01A90L;
                    int32_t l_392 = 0x1E7D03FEL;
                    int64_t l_393 = (-1L);
                    uint16_t l_394[3][2];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_394[i][j] = 65535UL;
                    }
                    for (l_371 = 17; (l_371 >= (-25)); l_371--)
                    { /* block id: 177 */
                        VECTOR(int32_t, 2) l_374 = (VECTOR(int32_t, 2))(3L, 0x6CB66D98L);
                        VECTOR(int32_t, 2) l_375 = (VECTOR(int32_t, 2))((-3L), 0x1785E00BL);
                        int32_t l_376[9] = {8L,0L,8L,8L,0L,8L,8L,0L,8L};
                        uint16_t l_377 = 0x660AL;
                        int32_t l_378 = 0x3AECFAE7L;
                        int32_t l_379 = 1L;
                        int i;
                        l_374.x = (GROUP_DIVERGE(1, 1) , ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(l_374.yyxy)).xzxzwwxzxxzxxxww, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_375.yx)), (-8L), (-1L))).y, (int32_t)(l_376[5] , ((l_315 &= l_377) , ((*l_293) = (l_378 , l_379))))))).sa);
                    }
                    l_371 ^= (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(4L, ((VECTOR(int16_t, 2))(l_380.sfe)).even, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))((-8L), (-1L))).yxyxxyxx, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x2981L, 0x5223L, l_381, 0x3F17L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(0L, 0x36FBL)).xxxx, (int16_t)((VECTOR(int16_t, 2))(0x4078L, 0x5BBCL)).lo))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_382.sa4)), ((l_383 , 0xE83F2A3EEAB9E2B4L) , ((VECTOR(int16_t, 2))(1L, 1L)).lo), l_384, (l_385 ^= (l_301.x = 0x5443L)), 0x0750L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((-1L), (l_386[5][0][2] , l_387), 6L, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(l_388.zyzx)).hi, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_389.yy))))))), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0L, 0x7C17L)).xyxxyxyyyyxxyxyy)), ((VECTOR(int16_t, 8))((l_313 = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x3EB9L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))((l_380.sc |= l_390), 0x4C24L, 0x582DL, 0x7FE3L)).wzwyywwzzxyyxwxw))).s17)), 0x6CA4L)).wyxxzzxw)))).s4), l_391, ((VECTOR(int16_t, 2))(0x0B78L)), 0x513CL, ((VECTOR(int16_t, 2))(9L)), 0x2B47L)).s2543337073220423))))).s5ecb, (int16_t)l_392))), 1L, ((VECTOR(int16_t, 2))((-6L))), 0x0733L, l_393, (-1L), 0x43DBL)).s5d53)), ((VECTOR(int16_t, 4))(0L)), 0x7C9DL, 0x7DE6L)).s361d)), 0x2E1CL, 2L, 1L, (-1L))).even)).s53, ((VECTOR(int16_t, 2))(0x5ADAL))))).xxxyxxxx))))))).even, (int16_t)l_394[0][0]))).y, 1L, 1L, 0x0C92L, 0x53F7L, 0x498AL, 9L, 5L)), 0x49A7L, ((VECTOR(int16_t, 2))(0x3638L)), 0L, 0x5686L, (-1L))).hi, ((VECTOR(int16_t, 8))(2L))))))).s7 , (-1L));
                    (*l_293) = 4L;
                    for (l_387 = 12; (l_387 > 23); ++l_387)
                    { /* block id: 190 */
                        int64_t l_397 = 5L;
                        uint32_t l_398 = 0x3A872BBFL;
                        uint16_t l_403 = 0x6D42L;
                        uint16_t *l_402 = &l_403;
                        uint16_t **l_401 = &l_402;
                        uint16_t **l_404[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_404[i] = &l_402;
                        (*l_293) |= 0x65D6C404L;
                        l_398++;
                        l_404[0] = l_401;
                    }
                }
                l_405 = (void*)0;
            }
        }
        for (l_316 = 0; (l_316 >= 12); l_316 = safe_add_func_int16_t_s_s(l_316, 6))
        { /* block id: 201 */
            VECTOR(int16_t, 2) l_408 = (VECTOR(int16_t, 2))(0x408AL, (-1L));
            VECTOR(int16_t, 2) l_409 = (VECTOR(int16_t, 2))(0x4A72L, 0x71C4L);
            uint16_t l_410 = 65528UL;
            VECTOR(int16_t, 8) l_411 = (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x1C4EL), 0x1C4EL), 0x1C4EL, (-6L), 0x1C4EL);
            VECTOR(int16_t, 16) l_412 = (VECTOR(int16_t, 16))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L, (VECTOR(int16_t, 2))((-2L), 1L), (VECTOR(int16_t, 2))((-2L), 1L), (-2L), 1L, (-2L), 1L);
            VECTOR(uint16_t, 2) l_413 = (VECTOR(uint16_t, 2))(8UL, 0UL);
            VECTOR(uint16_t, 16) l_414 = (VECTOR(uint16_t, 16))(0x21E7L, (VECTOR(uint16_t, 4))(0x21E7L, (VECTOR(uint16_t, 2))(0x21E7L, 1UL), 1UL), 1UL, 0x21E7L, 1UL, (VECTOR(uint16_t, 2))(0x21E7L, 1UL), (VECTOR(uint16_t, 2))(0x21E7L, 1UL), 0x21E7L, 1UL, 0x21E7L, 1UL);
            VECTOR(int8_t, 16) l_415 = (VECTOR(int8_t, 16))(0x1FL, (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, 0x2CL), 0x2CL), 0x2CL, 0x1FL, 0x2CL, (VECTOR(int8_t, 2))(0x1FL, 0x2CL), (VECTOR(int8_t, 2))(0x1FL, 0x2CL), 0x1FL, 0x2CL, 0x1FL, 0x2CL);
            VECTOR(int8_t, 2) l_416 = (VECTOR(int8_t, 2))(0x19L, (-1L));
            uint32_t l_417 = 1UL;
            VECTOR(int8_t, 4) l_418 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L);
            VECTOR(int8_t, 4) l_419 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 9L), 9L);
            VECTOR(int8_t, 16) l_420 = (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L, (VECTOR(int8_t, 2))((-8L), 0L), (VECTOR(int8_t, 2))((-8L), 0L), (-8L), 0L, (-8L), 0L);
            VECTOR(int8_t, 8) l_421 = (VECTOR(int8_t, 8))(0x6FL, (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, 0x2EL), 0x2EL), 0x2EL, 0x6FL, 0x2EL);
            VECTOR(int8_t, 4) l_422 = (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 1L), 1L);
            VECTOR(int8_t, 16) l_423 = (VECTOR(int8_t, 16))(0x43L, (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0L), 0L), 0L, 0x43L, 0L, (VECTOR(int8_t, 2))(0x43L, 0L), (VECTOR(int8_t, 2))(0x43L, 0L), 0x43L, 0L, 0x43L, 0L);
            VECTOR(int8_t, 16) l_424 = (VECTOR(int8_t, 16))(0x3BL, (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 0x69L), 0x69L), 0x69L, 0x3BL, 0x69L, (VECTOR(int8_t, 2))(0x3BL, 0x69L), (VECTOR(int8_t, 2))(0x3BL, 0x69L), 0x3BL, 0x69L, 0x3BL, 0x69L);
            VECTOR(int8_t, 16) l_425 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x56L), 0x56L), 0x56L, (-1L), 0x56L, (VECTOR(int8_t, 2))((-1L), 0x56L), (VECTOR(int8_t, 2))((-1L), 0x56L), (-1L), 0x56L, (-1L), 0x56L);
            VECTOR(int8_t, 16) l_426 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), (-1L)), (-1L)), (-1L), (-9L), (-1L), (VECTOR(int8_t, 2))((-9L), (-1L)), (VECTOR(int8_t, 2))((-9L), (-1L)), (-9L), (-1L), (-9L), (-1L));
            int64_t l_427 = (-10L);
            VECTOR(int32_t, 8) l_428 = (VECTOR(int32_t, 8))(0x1D284EB7L, (VECTOR(int32_t, 4))(0x1D284EB7L, (VECTOR(int32_t, 2))(0x1D284EB7L, 0x2DB23941L), 0x2DB23941L), 0x2DB23941L, 0x1D284EB7L, 0x2DB23941L);
            uint8_t l_429 = 251UL;
            int8_t l_430[2];
            int64_t l_431 = 0x0EB27C5EDAC6EBD6L;
            VECTOR(int8_t, 16) l_432 = (VECTOR(int8_t, 16))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x5EL), 0x5EL), 0x5EL, 4L, 0x5EL, (VECTOR(int8_t, 2))(4L, 0x5EL), (VECTOR(int8_t, 2))(4L, 0x5EL), 4L, 0x5EL, 4L, 0x5EL);
            VECTOR(uint8_t, 16) l_433 = (VECTOR(uint8_t, 16))(0xC0L, (VECTOR(uint8_t, 4))(0xC0L, (VECTOR(uint8_t, 2))(0xC0L, 0x49L), 0x49L), 0x49L, 0xC0L, 0x49L, (VECTOR(uint8_t, 2))(0xC0L, 0x49L), (VECTOR(uint8_t, 2))(0xC0L, 0x49L), 0xC0L, 0x49L, 0xC0L, 0x49L);
            VECTOR(uint8_t, 2) l_434 = (VECTOR(uint8_t, 2))(0x57L, 0x75L);
            int8_t l_435 = 0x60L;
            VECTOR(int16_t, 8) l_436 = (VECTOR(int16_t, 8))(0x1612L, (VECTOR(int16_t, 4))(0x1612L, (VECTOR(int16_t, 2))(0x1612L, 0x36DAL), 0x36DAL), 0x36DAL, 0x1612L, 0x36DAL);
            int8_t l_437 = 1L;
            VECTOR(int32_t, 4) l_438 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 2L), 2L);
            uint16_t l_439 = 0x64DDL;
            int64_t l_440[6][7] = {{0L,0L,0x710C5271646CE190L,(-1L),0L,(-1L),0x710C5271646CE190L},{0L,0L,0x710C5271646CE190L,(-1L),0L,(-1L),0x710C5271646CE190L},{0L,0L,0x710C5271646CE190L,(-1L),0L,(-1L),0x710C5271646CE190L},{0L,0L,0x710C5271646CE190L,(-1L),0L,(-1L),0x710C5271646CE190L},{0L,0L,0x710C5271646CE190L,(-1L),0L,(-1L),0x710C5271646CE190L},{0L,0L,0x710C5271646CE190L,(-1L),0L,(-1L),0x710C5271646CE190L}};
            int32_t *l_441 = (void*)0;
            int64_t l_442 = (-8L);
            int8_t l_476 = (-4L);
            int16_t l_477 = 0x65A2L;
            uint16_t l_478 = 65535UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_430[i] = (-1L);
            l_440[2][2] |= ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_408.xxxyyxxx)), (-1L), ((VECTOR(int16_t, 4))(l_409.xyxx)), 0L, (-1L), 0x1BC2L)).s8f, (int16_t)l_410))), ((VECTOR(int16_t, 2))(l_411.s22)), ((VECTOR(int16_t, 2))(l_412.s59))))))).xyyyyxxx, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 16))(0x727EL, (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 16))(l_413.yyxxyxyyxyxyyyyx)).s69, (uint16_t)1UL, (uint16_t)(l_296 &= (l_320 = ((VECTOR(uint16_t, 2))(l_414.s51)).odd))))), 0xE61AL, 0xA332L, (((VECTOR(int8_t, 4))(l_415.s0d96)).y , ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(0UL, 0x99L)), ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 16))(l_416.xyxyxyyxyyxyyxxy)).s6a, ((VECTOR(int8_t, 16))((-1L), l_417, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_418.ywwyzwzw)).s01)).xxxy)), 0x30L, 0x59L, 5L, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(0x3EL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(l_419.yyzzxzyxyzzxzxyx)).sbdbb, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_420.s21)), 0x4CL, (-1L))))).hi)).xxyxyyxyxyyyyyyx)).odd)).lo, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_421.s30)))).xyyxxxyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(l_422.xxyw)), ((VECTOR(int8_t, 4))(l_423.scb63))))).hi)).yxxxxyyy))).lo))).odd, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_424.s4b)).yxyy)).odd))).yyyxxyxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_425.s8e0d74bc)).lo)).wxyywzzy))))).hi)), ((VECTOR(int8_t, 4))(l_426.sd7d1)), ((l_428.s0 = ((*l_293) = (l_427 , ((VECTOR(int32_t, 8))(l_428.s22651576)).s4))) , (l_429 = 0L)), 6L, (l_430[0] = (-7L)), ((VECTOR(int8_t, 2))(0L, 0x1BL)), 2L, (-8L))).sde26, (int8_t)l_431))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_432.sd813)).even)), (-9L))).s77))), ((VECTOR(uint8_t, 8))(l_433.sca3cfd55)).s23))).yxyx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_434.yy)))).xyxx)).ywzxxxww)).lo))).w), ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(0x30CBL, 0x2BDFL, l_435, ((VECTOR(uint16_t, 2))(0x475DL)), l_436.s0, l_437, l_438.x, ((VECTOR(uint16_t, 4))(0x1344L)), ((VECTOR(uint16_t, 4))(0x9F0AL)))).sfe, ((VECTOR(uint16_t, 2))(0xC053L))))), ((VECTOR(uint16_t, 2))(1UL))))), ((VECTOR(uint16_t, 8))(0x0777L)), 0xA038L)).s8 , 65530UL), l_439, 0UL, 65526UL, 0xC84EL, 0UL, 0x716CL, ((VECTOR(uint16_t, 8))(65535UL)))).even, ((VECTOR(uint16_t, 8))(65535UL)))))))).hi, ((VECTOR(int32_t, 4))(1L))))).x;
            l_295[3] = l_441;
            if (l_442)
            { /* block id: 210 */
                int64_t l_443 = (-10L);
                uint64_t l_444 = 1UL;
                VECTOR(int16_t, 4) l_445 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x1E42L), 0x1E42L);
                uint32_t l_446 = 0UL;
                uint32_t l_447 = 0x41DDFF60L;
                int i;
                l_445.y ^= (GROUP_DIVERGE(2, 1) , (l_444 = (l_443 , ((*l_293) = 0x5AF0DE5BL))));
                if ((l_447 = l_446))
                { /* block id: 215 */
                    uint8_t l_448 = 250UL;
                    int64_t l_449[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_449[i] = (-3L);
                    if ((l_449[1] = l_448))
                    { /* block id: 217 */
                        (*l_293) = 0x4BF4B31BL;
                    }
                    else
                    { /* block id: 219 */
                        (*l_293) = 0x5E130D22L;
                    }
                    for (l_449[1] = 0; (l_449[1] > 23); l_449[1] = safe_add_func_int32_t_s_s(l_449[1], 7))
                    { /* block id: 224 */
                        uint64_t l_452 = 9UL;
                        uint64_t l_453 = 0x7D81B34B7EA037D8L;
                        uint32_t l_454 = 0x4C8260ABL;
                        uint32_t l_455 = 0x4C565604L;
                        l_454 ^= (l_452 , ((l_453 , 0x67A2F8F2L) , 0x01DB1049L));
                        --l_455;
                    }
                }
                else
                { /* block id: 228 */
                    int8_t l_458 = (-4L);
                    uint8_t l_459 = 255UL;
                    uint16_t l_462 = 65533UL;
                    uint32_t l_470 = 0x9511C742L;
                    l_459++;
                    if (l_462)
                    { /* block id: 230 */
                        int8_t l_463 = 0x38L;
                        uint64_t l_464[6][3][3] = {{{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL}},{{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL}},{{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL}},{{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL}},{{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL}},{{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL}}};
                        int i, j, k;
                        --l_464[5][2][1];
                    }
                    else
                    { /* block id: 232 */
                        int32_t l_467 = 0x7827A2DCL;
                        int32_t l_468 = 0x745FC707L;
                        uint32_t l_469 = 0xB61CBC43L;
                        l_469 = (l_468 = l_467);
                    }
                    (*l_293) = l_470;
                }
                l_441 = (void*)0;
            }
            else
            { /* block id: 239 */
                int16_t l_471 = (-1L);
                uint8_t l_472 = 0UL;
                int16_t l_473 = 0x1ACFL;
                int32_t l_475 = 0x2AEACD5BL;
                int32_t *l_474 = &l_475;
                (*l_293) ^= l_471;
                l_474 = ((l_472 , l_473) , (l_295[4] = (void*)0));
            }
            ++l_478;
        }
        l_514 &= ((l_486 = (l_485 = ((l_481 &= 0x08L) , (((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(0x71A8FCF7L, 0x3F4030C1L, 0x7B87A29CL, 0x50757E24L)).lo, (int32_t)l_482[6]))).lo , ((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 4))(1UL, (l_484 = l_483), 0xA194E260L, 0x79EF1F4DL)).wzzyxwzy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0x334C03F4L, FAKE_DIVERGE(p_731->local_2_offset, get_local_id(2), 10), 0x5CAF742EL, 1UL)).wxwwzzzzxyxyxyzz)).s16)).xyxxyxxx))).s6)))) , ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(l_487.s87)), 0x66850113L, ((VECTOR(int32_t, 4))(l_488.s3114)))), ((VECTOR(int32_t, 2))(l_489.seb)).yxyxxxyy))).s23))), 0x7E9D8DE6L, 0x03462E35L)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_490.s7264)).xwywyyyyzyyzxzzy, ((VECTOR(int32_t, 2))(0x77B69073L, 0x3C13B213L)).xxyyxyxxxyxyxxxy, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_491.xyxyxxyx)).s56, ((VECTOR(uint16_t, 8))(l_492.wwywzxyy)).s54))).xyxyyxyxxxxyxxxy))).s92e9))).xwxxwzww, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_493.s45776622)).lo)).zwywwxxw))).s35, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(l_494.s07047505)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(l_495.yy)).xyyyyyxyyxyyyxyx, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_496.s43)).yxyyxyxyyxyxyyyy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_497, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0x5E62193FL, 0x3125F1CEL)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_498.zzxxzyxyyxzwyzxx)).sde, ((VECTOR(int32_t, 4))(l_499.zyxy)).hi)))))), 0x44BA5C2AL)).odd)).yyxyyyyxyyyxxxyx)).s53fb))).zwzwwyzx))).s05)).yyyxxyxyyxxxxyyy)))))).sad, ((VECTOR(int32_t, 2))(0x7A4DE3BBL, (-1L))), ((VECTOR(int32_t, 16))(l_500.yyxyxxxyxxxxyxyx)).s9c))).yyxxyxyy))).even, (int32_t)(l_512.s3 = (((l_501 = 0x1AL) , (l_502 = 4294967289UL)) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((l_503 = ((VECTOR(int32_t, 2))((-6L), 1L)).lo), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_504 , (l_509.s3 = ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_505.s66)).yyyxyxxy)).s7142070274071733))).even, (int32_t)(l_506 , l_507.sc), (int32_t)l_508))).s0)), ((VECTOR(int32_t, 2))((-1L))), 0x4B3CFCBDL)).odd)), 8L, ((VECTOR(int32_t, 2))(0x6302A31EL)), (-9L), 1L)).s3, ((VECTOR(int32_t, 2))(0x3F060A89L)), (-4L))).xwyyzzzz, ((VECTOR(int32_t, 8))(0x74C7D419L))))).s0507752723507573, (int32_t)l_510[0][1], (int32_t)l_511))).s4a)).hi))))), (-1L), ((VECTOR(int32_t, 8))(0L)), l_513, 0L, 0x30541581L)).hi)).s00)), ((VECTOR(int32_t, 2))(0x3286E3FDL))))).odd);
        unsigned int result = 0;
        result += l_294;
        result += l_296;
        result += l_297.w;
        result += l_297.z;
        result += l_297.y;
        result += l_297.x;
        result += l_298.s7;
        result += l_298.s6;
        result += l_298.s5;
        result += l_298.s4;
        result += l_298.s3;
        result += l_298.s2;
        result += l_298.s1;
        result += l_298.s0;
        result += l_299.w;
        result += l_299.z;
        result += l_299.y;
        result += l_299.x;
        result += l_300.s7;
        result += l_300.s6;
        result += l_300.s5;
        result += l_300.s4;
        result += l_300.s3;
        result += l_300.s2;
        result += l_300.s1;
        result += l_300.s0;
        result += l_301.y;
        result += l_301.x;
        result += l_302;
        result += l_303;
        result += l_304.sf;
        result += l_304.se;
        result += l_304.sd;
        result += l_304.sc;
        result += l_304.sb;
        result += l_304.sa;
        result += l_304.s9;
        result += l_304.s8;
        result += l_304.s7;
        result += l_304.s6;
        result += l_304.s5;
        result += l_304.s4;
        result += l_304.s3;
        result += l_304.s2;
        result += l_304.s1;
        result += l_304.s0;
        result += l_305.sf;
        result += l_305.se;
        result += l_305.sd;
        result += l_305.sc;
        result += l_305.sb;
        result += l_305.sa;
        result += l_305.s9;
        result += l_305.s8;
        result += l_305.s7;
        result += l_305.s6;
        result += l_305.s5;
        result += l_305.s4;
        result += l_305.s3;
        result += l_305.s2;
        result += l_305.s1;
        result += l_305.s0;
        int l_306_i0, l_306_i1, l_306_i2;
        for (l_306_i0 = 0; l_306_i0 < 1; l_306_i0++) {
            for (l_306_i1 = 0; l_306_i1 < 8; l_306_i1++) {
                for (l_306_i2 = 0; l_306_i2 < 10; l_306_i2++) {
                    result += l_306[l_306_i0][l_306_i1][l_306_i2];
                }
            }
        }
        result += l_307.y;
        result += l_307.x;
        result += l_308.w;
        result += l_308.z;
        result += l_308.y;
        result += l_308.x;
        result += l_309.w;
        result += l_309.z;
        result += l_309.y;
        result += l_309.x;
        result += l_310;
        result += l_311;
        result += l_312.y;
        result += l_312.x;
        result += l_313;
        result += l_314;
        result += l_315;
        result += l_316;
        result += l_317;
        int l_318_i0;
        for (l_318_i0 = 0; l_318_i0 < 2; l_318_i0++) {
            result += l_318[l_318_i0];
        }
        result += l_319;
        result += l_320;
        result += l_321;
        result += l_481;
        int l_482_i0;
        for (l_482_i0 = 0; l_482_i0 < 10; l_482_i0++) {
            result += l_482[l_482_i0];
        }
        result += l_483;
        result += l_484;
        result += l_485;
        result += l_486;
        result += l_487.sf;
        result += l_487.se;
        result += l_487.sd;
        result += l_487.sc;
        result += l_487.sb;
        result += l_487.sa;
        result += l_487.s9;
        result += l_487.s8;
        result += l_487.s7;
        result += l_487.s6;
        result += l_487.s5;
        result += l_487.s4;
        result += l_487.s3;
        result += l_487.s2;
        result += l_487.s1;
        result += l_487.s0;
        result += l_488.s7;
        result += l_488.s6;
        result += l_488.s5;
        result += l_488.s4;
        result += l_488.s3;
        result += l_488.s2;
        result += l_488.s1;
        result += l_488.s0;
        result += l_489.sf;
        result += l_489.se;
        result += l_489.sd;
        result += l_489.sc;
        result += l_489.sb;
        result += l_489.sa;
        result += l_489.s9;
        result += l_489.s8;
        result += l_489.s7;
        result += l_489.s6;
        result += l_489.s5;
        result += l_489.s4;
        result += l_489.s3;
        result += l_489.s2;
        result += l_489.s1;
        result += l_489.s0;
        result += l_490.s7;
        result += l_490.s6;
        result += l_490.s5;
        result += l_490.s4;
        result += l_490.s3;
        result += l_490.s2;
        result += l_490.s1;
        result += l_490.s0;
        result += l_491.y;
        result += l_491.x;
        result += l_492.w;
        result += l_492.z;
        result += l_492.y;
        result += l_492.x;
        result += l_493.s7;
        result += l_493.s6;
        result += l_493.s5;
        result += l_493.s4;
        result += l_493.s3;
        result += l_493.s2;
        result += l_493.s1;
        result += l_493.s0;
        result += l_494.s7;
        result += l_494.s6;
        result += l_494.s5;
        result += l_494.s4;
        result += l_494.s3;
        result += l_494.s2;
        result += l_494.s1;
        result += l_494.s0;
        result += l_495.y;
        result += l_495.x;
        result += l_496.s7;
        result += l_496.s6;
        result += l_496.s5;
        result += l_496.s4;
        result += l_496.s3;
        result += l_496.s2;
        result += l_496.s1;
        result += l_496.s0;
        result += l_497;
        result += l_498.w;
        result += l_498.z;
        result += l_498.y;
        result += l_498.x;
        result += l_499.w;
        result += l_499.z;
        result += l_499.y;
        result += l_499.x;
        result += l_500.y;
        result += l_500.x;
        result += l_501;
        result += l_502;
        result += l_503;
        result += l_504;
        result += l_505.s7;
        result += l_505.s6;
        result += l_505.s5;
        result += l_505.s4;
        result += l_505.s3;
        result += l_505.s2;
        result += l_505.s1;
        result += l_505.s0;
        result += l_506;
        result += l_507.sf;
        result += l_507.se;
        result += l_507.sd;
        result += l_507.sc;
        result += l_507.sb;
        result += l_507.sa;
        result += l_507.s9;
        result += l_507.s8;
        result += l_507.s7;
        result += l_507.s6;
        result += l_507.s5;
        result += l_507.s4;
        result += l_507.s3;
        result += l_507.s2;
        result += l_507.s1;
        result += l_507.s0;
        result += l_508;
        result += l_509.sf;
        result += l_509.se;
        result += l_509.sd;
        result += l_509.sc;
        result += l_509.sb;
        result += l_509.sa;
        result += l_509.s9;
        result += l_509.s8;
        result += l_509.s7;
        result += l_509.s6;
        result += l_509.s5;
        result += l_509.s4;
        result += l_509.s3;
        result += l_509.s2;
        result += l_509.s1;
        result += l_509.s0;
        int l_510_i0, l_510_i1;
        for (l_510_i0 = 0; l_510_i0 < 1; l_510_i0++) {
            for (l_510_i1 = 0; l_510_i1 < 5; l_510_i1++) {
                result += l_510[l_510_i0][l_510_i1];
            }
        }
        result += l_511;
        result += l_512.s7;
        result += l_512.s6;
        result += l_512.s5;
        result += l_512.s4;
        result += l_512.s3;
        result += l_512.s2;
        result += l_512.s1;
        result += l_512.s0;
        result += l_513;
        result += l_514;
        atomic_add(&p_731->l_special_values[15], result);
    }
    else
    { /* block id: 256 */
        (1 + 1);
    }
    return (*p_731->g_62);
}


/* ------------------------------------------ */
/* 
 * reads : p_731->g_63 p_731->g_48 p_731->g_62
 * writes: p_731->g_57 p_731->g_48
 */
int32_t * func_7(int32_t * p_8, int32_t  p_9, uint32_t  p_10, int32_t * p_11, int32_t * p_12, struct S0 * p_731)
{ /* block id: 122 */
    (*p_12) = (p_8 == p_8);
    (*p_731->g_63) ^= 0L;
    return (*p_731->g_62);
}


/* ------------------------------------------ */
/* 
 * reads : p_731->g_62 p_731->g_65 p_731->g_48 p_731->g_57 p_731->g_75 p_731->g_56 p_731->g_83 p_731->g_63 p_731->g_95 p_731->g_comm_values p_731->g_53 p_731->g_99 p_731->l_comm_values p_731->g_77 p_731->g_121 p_731->g_155 p_731->g_44 p_731->g_93 p_731->g_177 p_731->g_36 p_731->g_202 p_731->g_230 p_731->g_259 p_731->g_229 p_731->g_278 p_731->g_281
 * writes: p_731->g_63 p_731->g_65 p_731->g_77 p_731->g_93 p_731->g_95 p_731->g_44 p_731->g_48 p_731->g_99 p_731->g_166 p_731->g_168 p_731->g_177 p_731->g_202 p_731->g_205 p_731->g_57 p_731->g_121 p_731->g_222 p_731->g_281
 */
uint64_t  func_22(int32_t * p_23, uint32_t  p_24, uint32_t  p_25, struct S0 * p_731)
{ /* block id: 30 */
    int32_t *l_60[5][4][4] = {{{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44}},{{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44}},{{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44}},{{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44}},{{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44},{&p_731->g_48,&p_731->g_44,&p_731->g_48,&p_731->g_44}}};
    int32_t **l_61 = (void*)0;
    int16_t l_64 = 0x1B33L;
    VECTOR(int32_t, 2) l_68 = (VECTOR(int32_t, 2))(0x39FEC4F7L, 1L);
    int32_t *l_76 = &p_731->g_77;
    uint16_t *l_90 = (void*)0;
    uint16_t *l_91 = (void*)0;
    uint16_t *l_92 = &p_731->g_93[0][2];
    int8_t *l_94 = &p_731->g_95[3];
    int32_t l_96 = 1L;
    int32_t **l_120 = &l_60[2][1][1];
    int32_t *l_203 = (void*)0;
    uint8_t l_204 = 8UL;
    int i, j, k;
    (*p_731->g_62) = l_60[2][1][1];
    p_731->g_65--;
    p_731->g_205 = ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(l_68.xx)).xyxxyyxxyxyxxyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))((-2L), ((*p_23) = (l_68.x &= (p_731->g_48 , (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0UL, (safe_lshift_func_uint8_t_u_u(p_731->g_57[2][8], (((VECTOR(uint32_t, 8))(p_731->g_75.s02302522)).s6 == (p_731->g_202 &= (((*l_76) = p_25) , func_78((*p_731->g_56), (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x6340L, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_731->g_83.xxxxyxyyyyyxyyyx)).s7b4c)).odd)), ((func_28(((*l_120) = func_84(func_26(func_28((*p_731->g_62), (func_28(p_23, ((*l_94) &= (((*l_92) = p_731->g_65) < FAKE_DIVERGE(p_731->group_1_offset, get_group_id(1), 10))), p_24, p_731) , p_731->g_65), p_731->g_53, p_731), p_731), p_731->g_65, l_96, &l_96, p_731->g_57[4][7], p_731)), p_25, p_731->g_57[4][4], p_731) | p_731->g_77) , 0x1060L), (-8L), p_24, p_731->g_121, 0x0778L, (-1L))).s2573266403010621)).sf5, ((VECTOR(int16_t, 2))(0x6C3BL))))), 0x2416L)), ((VECTOR(int16_t, 2))(0x333BL)), (-2L), 0L, 0x1D65L, ((VECTOR(int16_t, 2))(0x4666L)), 0x384DL, ((VECTOR(int16_t, 2))(0x7509L)), (-1L), 0x7335L)).sf | p_731->g_57[4][5]), p_731->l_comm_values[(safe_mod_func_uint32_t_u_u(p_731->tid, 4))], p_731->g_99.s3, p_731)))))))), 0xF60CL))))), 0x36BEDE73L, l_204, (**p_731->g_62), ((VECTOR(int32_t, 4))(0x10D0AFCFL)), (*p_731->g_63), ((VECTOR(int32_t, 4))((-1L))), 0x378C0FFAL, 1L)).hi, ((VECTOR(int32_t, 8))(0L))))), (int32_t)(*p_23)))))).s76, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0L))))))), ((VECTOR(int32_t, 2))((-5L)))))), 0x79B9E345L, ((VECTOR(int32_t, 8))(0x552C6B39L)), 0x1521B496L, ((VECTOR(int32_t, 4))(0x257F6C42L))))))).s0;
    for (l_204 = (-22); (l_204 > 29); l_204 = safe_add_func_int64_t_s_s(l_204, 3))
    { /* block id: 76 */
        uint8_t *l_215[5][4][5] = {{{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65}},{{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65}},{{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65}},{{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65}},{{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65},{(void*)0,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65}}};
        uint8_t **l_216 = &l_215[1][0][3];
        int64_t *l_221[1][6];
        int16_t *l_234 = &p_731->g_177[2][4][1];
        int32_t l_235 = 1L;
        uint64_t *l_236 = (void*)0;
        uint64_t *l_237 = &p_731->g_168[3];
        uint32_t *l_238 = &p_731->g_121;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_221[i][j] = &p_731->g_166;
        }
        for (p_25 = 22; (p_25 >= 42); p_25 = safe_add_func_uint8_t_u_u(p_25, 9))
        { /* block id: 79 */
            (*l_120) = p_23;
        }
        (*p_23) = (((((p_25 = ((*l_238) ^= ((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((&l_204 == ((*l_216) = l_215[2][0][1])), (*p_731->g_63))) , (p_731->g_99.s1 = (safe_div_func_uint32_t_u_u(p_25, ((*p_731->g_56) = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(8UL, 0x6321C259L)).xyxyyyxyxyxyxxyx)).s6))))), ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(p_731->g_219.s3476141732637141)).s84, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(p_731->g_220.yxxyyyxyyxyxyyyy)).s524e, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(255UL, (~(p_731->g_65 = ((((*l_237) ^= (p_731->g_93[0][2] < ((((((p_731->g_222 &= (p_731->g_166 = ((-1L) < 1UL))) > (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(p_731->g_229.s88)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_731->g_230.s00056352)), 0UL, (safe_mul_func_uint16_t_u_u((p_731->g_233 = p_25), ((*l_234) = 4L))), 4294967286UL, ((VECTOR(uint32_t, 2))(4294967291UL)), p_25, 4294967295UL, 0x3F43AB87L)).s5e, ((VECTOR(uint32_t, 2))(0x4FD0D3E9L))))), ((VECTOR(uint32_t, 2))(9UL))))).odd != l_235) , 65528UL), p_25)), l_235)), 14))) | 0x02L) >= 0x6FL) ^ 0x57E2L) || 1L))) ^ p_24) ^ p_25))), 0x66L, 249UL)).xzxwyzxw)).lo))).lo))).hi)))) ^ p_731->g_230.s3))) | GROUP_DIVERGE(2, 1)) | 0x7A6D0993L) , &p_23) == &l_60[2][1][1]);
        for (p_731->g_65 = 0; (p_731->g_65 != 39); p_731->g_65++)
        { /* block id: 96 */
            uint16_t l_241 = 2UL;
            int32_t **l_256 = (void*)0;
            int32_t l_263 = 0x362E18FDL;
            uint32_t l_267 = 0xD5317560L;
            int32_t l_279 = 0x3E59C0E3L;
            int32_t l_280 = 1L;
            l_241++;
            if ((*p_23))
                continue;
            for (l_64 = 0; (l_64 > 23); ++l_64)
            { /* block id: 101 */
                int8_t l_262 = 0x15L;
                int32_t l_264 = 0x21734ABDL;
                int32_t **l_268 = (void*)0;
                int32_t **l_270 = &l_203;
                uint64_t **l_277 = &l_236;
                for (p_731->g_222 = 0; (p_731->g_222 != (-7)); --p_731->g_222)
                { /* block id: 104 */
                    int8_t l_265 = 1L;
                    int64_t l_266[7][4][8] = {{{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L}},{{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L}},{{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L}},{{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L}},{{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L}},{{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L}},{{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L},{0x6557324DE21B239CL,1L,(-1L),0x31F7D0080CFF0491L,1L,0x31F7D0080CFF0491L,(-1L),1L}}};
                    int i, j, k;
                    l_267 ^= (safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((VECTOR(int8_t, 2))((-6L), 0x1AL)).odd == (safe_rshift_func_int8_t_s_u(((((safe_add_func_uint16_t_u_u(((*p_731->g_56) >= ((VECTOR(uint32_t, 2))(4294967295UL, 1UL)).lo), ((l_264 |= ((((!((void*)0 != l_256)) ^ (*p_731->g_63)) == (((p_731->g_259 || ((((VECTOR(int32_t, 2))(0x53816BA2L, (-7L))).odd != (((((*l_92) &= l_235) >= p_24) != ((-1L) || (l_263 &= ((safe_lshift_func_int8_t_s_s((l_241 | p_25), l_262)) , 0x1F1DA6627D5DB6B6L)))) <= p_731->g_229.s1)) <= 0x40L)) != l_235) , p_24)) , l_241)) == (*p_731->g_56)))) <= l_265) , FAKE_DIVERGE(p_731->group_1_offset, get_group_id(1), 10)) > l_266[2][2][6]), p_731->g_95[1]))), 0x02A9F155L)), p_25));
                    l_263 &= (*p_731->g_63);
                }
                (*l_270) = ((*l_120) = func_26(p_25, p_731));
                p_23 = func_26((((+(((safe_sub_func_uint16_t_u_u((l_235 != l_241), 1UL)) && ((*l_237) = (+(9L < p_24)))) < ((p_731->g_65 & p_731->g_121) > (safe_mod_func_int8_t_s_s(p_731->g_65, (~((GROUP_DIVERGE(0, 1) , ((*l_277) = l_221[0][4])) == p_731->g_278))))))) != 0x0FL) | p_731->g_202), p_731);
            }
            p_731->g_281--;
        }
        if ((*p_731->g_63))
            continue;
    }
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_731->g_comm_values p_731->g_48
 * writes: p_731->g_44 p_731->g_48
 */
int32_t * func_26(int64_t  p_27, struct S0 * p_731)
{ /* block id: 25 */
    int32_t *l_58 = &p_731->g_48;
    (*l_58) |= (p_731->g_44 = (0x184BAFC8L ^ p_731->g_comm_values[p_731->tid]));
    return l_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_731->g_44 p_731->g_comm_values p_731->g_48
 * writes: p_731->g_44 p_731->g_48
 */
uint16_t  func_28(int32_t * p_29, int8_t  p_30, int64_t  p_31, struct S0 * p_731)
{ /* block id: 5 */
    uint64_t l_49 = 1UL;
    for (p_30 = 19; (p_30 <= 14); --p_30)
    { /* block id: 8 */
        for (p_31 = 0; (p_31 >= (-2)); p_31 = safe_sub_func_int64_t_s_s(p_31, 5))
        { /* block id: 11 */
            int32_t *l_43 = &p_731->g_44;
            int32_t **l_42 = &l_43;
            (*l_42) = (void*)0;
            for (p_731->g_44 = 20; (p_731->g_44 == (-24)); p_731->g_44 = safe_sub_func_uint8_t_u_u(p_731->g_44, 9))
            { /* block id: 15 */
                int32_t *l_47 = &p_731->g_48;
                (*l_42) = p_29;
                (*l_47) = p_731->g_comm_values[p_731->tid];
            }
            if (p_30)
                break;
            l_49--;
        }
    }
    return p_731->g_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_731->g_57 p_731->g_99 p_731->g_95 p_731->g_155 p_731->g_75 p_731->g_44 p_731->g_65 p_731->g_48 p_731->g_93 p_731->g_comm_values p_731->g_62 p_731->g_177 p_731->g_36 p_731->g_63 p_731->g_56
 * writes: p_731->g_99 p_731->g_95 p_731->g_166 p_731->g_168 p_731->g_48 p_731->g_44 p_731->g_63 p_731->g_177 p_731->g_65
 */
uint32_t  func_78(uint32_t  p_79, uint64_t  p_80, uint16_t  p_81, uint8_t  p_82, struct S0 * p_731)
{ /* block id: 51 */
    uint16_t l_122 = 0UL;
    int32_t l_123 = 0x0BA9382BL;
    VECTOR(uint32_t, 16) l_126 = (VECTOR(uint32_t, 16))(0x7E5A20DBL, (VECTOR(uint32_t, 4))(0x7E5A20DBL, (VECTOR(uint32_t, 2))(0x7E5A20DBL, 4294967294UL), 4294967294UL), 4294967294UL, 0x7E5A20DBL, 4294967294UL, (VECTOR(uint32_t, 2))(0x7E5A20DBL, 4294967294UL), (VECTOR(uint32_t, 2))(0x7E5A20DBL, 4294967294UL), 0x7E5A20DBL, 4294967294UL, 0x7E5A20DBL, 4294967294UL);
    uint8_t *l_129 = (void*)0;
    uint8_t *l_130 = (void*)0;
    int32_t *l_138 = &p_731->g_77;
    int32_t **l_137 = &l_138;
    int8_t *l_141 = &p_731->g_95[5];
    int32_t **l_173 = (void*)0;
    int32_t **l_174[9][3][5] = {{{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63}},{{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63}},{{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63}},{{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63}},{{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63}},{{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63}},{{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63}},{{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63}},{{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63},{&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63,&p_731->g_63}}};
    uint64_t l_175 = 0x8CF8CBA6C989A696L;
    int16_t l_176 = 0x4B7DL;
    uint32_t l_180[10];
    uint8_t *l_185 = &p_731->g_65;
    uint8_t *l_189 = (void*)0;
    uint8_t *l_190 = (void*)0;
    uint8_t *l_191 = (void*)0;
    uint8_t *l_192 = (void*)0;
    uint8_t *l_193 = (void*)0;
    uint8_t *l_194 = (void*)0;
    uint8_t *l_195 = (void*)0;
    uint8_t *l_196 = (void*)0;
    uint8_t *l_197 = (void*)0;
    uint8_t *l_198 = (void*)0;
    uint8_t *l_199 = (void*)0;
    uint8_t *l_200 = (void*)0;
    uint8_t *l_201[4][5][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_180[i] = 0x558AE8A4L;
    l_123 = l_122;
    p_731->g_177[2][4][1] = ((safe_rshift_func_uint8_t_u_s(p_731->g_57[0][1], 1)) , (((p_731->g_99.s8 |= (((VECTOR(uint32_t, 16))(l_126.sdd17ddf17533b9db)).s7 == (safe_rshift_func_int8_t_s_u(0x4FL, 4)))) <= (((func_28(((*p_731->g_62) = func_26((func_131(l_126.s3, (safe_unary_minus_func_int64_t_s(p_82)), ((*l_137) = (void*)0), ((safe_sub_func_int8_t_s_s(((*l_141) = 0x64L), 3UL)) , (void*)0), p_731) , (-1L)), p_731)), l_175, p_731->g_75.s2, p_731) > 0xDB81D234652B2269L) == l_176) != (-1L))) | p_731->g_65));
    (*p_731->g_63) |= (safe_sub_func_uint8_t_u_u(((l_180[1] , (-10L)) , ((((-10L) & ((p_79 = 1UL) && 0x2A1691F1L)) > ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(0x3DB8FB2BC63C88BFL, (-1L), ((VECTOR(int64_t, 2))(0L, 0x746A814105F5591CL)), 0x4DA7076BF4272561L, (p_731->g_177[2][4][1] & (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((((VECTOR(uint16_t, 8))(0x8C03L, (0x17A0L & (((*l_185)++) & (p_731->g_99.s0 ^= (safe_unary_minus_func_int8_t_s(p_82))))), p_80, p_731->g_36.s3, 0x261BL, ((VECTOR(uint16_t, 2))(0xC55AL)), 1UL)).s1 ^ p_731->g_155.y) , &p_731->g_93[0][2]) != (void*)0), 13)), 0x2BL))), ((VECTOR(int64_t, 2))(0x5D5234795880F042L)), 0x3448AE4827AF0C91L, ((VECTOR(int64_t, 2))(0x7D3FD81BFA71F3DFL)), 0x3E592466D64F9AB1L, ((VECTOR(int64_t, 2))(0L)), 0L, 0L)).s9e)).odd) != p_731->g_95[3])), 3L));
    return (*p_731->g_56);
}


/* ------------------------------------------ */
/* 
 * reads : p_731->g_99 p_731->g_comm_values p_731->g_48 p_731->g_95 p_731->g_83 p_731->g_56 p_731->g_57 p_731->l_comm_values
 * writes: p_731->g_44 p_731->g_48 p_731->g_63 p_731->g_65 p_731->g_93
 */
int32_t * func_84(int32_t * p_85, int32_t  p_86, int64_t  p_87, int32_t * p_88, int32_t  p_89, struct S0 * p_731)
{ /* block id: 36 */
    int8_t l_108 = 0x14L;
    uint8_t *l_113[7] = {&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65,&p_731->g_65};
    uint16_t *l_114 = (void*)0;
    uint16_t *l_115 = &p_731->g_93[2][1];
    int32_t *l_116[3];
    uint32_t l_117 = 0x2794937CL;
    int i;
    for (i = 0; i < 3; i++)
        l_116[i] = (void*)0;
    p_89 = (((*l_115) = ((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 4))(6UL, ((p_89 | (((p_87 > ((p_89 , (void*)0) == (void*)0)) == ((4294967290UL >= ((p_731->g_65 = ((((VECTOR(uint8_t, 16))(p_731->g_99.s5c511d401126fe50)).s1 , (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_87, 0x684A2D25L, 1UL, 1UL, (safe_sub_func_uint64_t_u_u((0x6E09L | (func_104(p_86, l_108, p_731->g_99.s7, p_731) , 0L)), p_731->g_83.x)), 4294967294UL, 0xEFA0937DL, 0x50D96A5EL, 4294967295UL, ((VECTOR(uint32_t, 4))(4294967295UL)), (*p_731->g_56), 4294967295UL, 0x9CB40E94L)).se8)).even, p_89))) >= 18446744073709551607UL)) <= 0x92L)) || p_87)) , p_87)) , p_731->l_comm_values[(safe_mod_func_uint32_t_u_u(p_731->tid, 4))]), 0UL, 0x3A58L)), (uint16_t)p_86, (uint16_t)65535UL))), ((VECTOR(uint16_t, 4))(65535UL)))).s4333341536344716))))).s1) , 0x4C78BB94L);
    p_731->g_44 = p_86;
    l_117++;
    return l_116[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_731->g_comm_values p_731->g_48 p_731->g_95
 * writes: p_731->g_44 p_731->g_48 p_731->g_63
 */
uint32_t  func_104(int16_t  p_105, uint64_t  p_106, uint32_t  p_107, struct S0 * p_731)
{ /* block id: 37 */
    int16_t l_111 = (-10L);
    for (p_106 = 0; (p_106 <= 29); p_106++)
    { /* block id: 40 */
        int32_t **l_112 = &p_731->g_63;
        (*l_112) = func_26(l_111, p_731);
    }
    return p_731->g_95[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_731->g_95 p_731->g_155 p_731->g_75 p_731->g_44 p_731->g_65 p_731->g_57 p_731->g_48 p_731->g_93
 * writes: p_731->g_166 p_731->g_168 p_731->g_48
 */
int16_t  func_131(int64_t  p_132, uint32_t  p_133, int32_t * p_134, int8_t * p_135, struct S0 * p_731)
{ /* block id: 56 */
    uint32_t l_142 = 0xAD84171FL;
    int32_t *l_160[9][4] = {{&p_731->g_77,&p_731->g_77,&p_731->g_77,(void*)0},{&p_731->g_77,&p_731->g_77,&p_731->g_77,(void*)0},{&p_731->g_77,&p_731->g_77,&p_731->g_77,(void*)0},{&p_731->g_77,&p_731->g_77,&p_731->g_77,(void*)0},{&p_731->g_77,&p_731->g_77,&p_731->g_77,(void*)0},{&p_731->g_77,&p_731->g_77,&p_731->g_77,(void*)0},{&p_731->g_77,&p_731->g_77,&p_731->g_77,(void*)0},{&p_731->g_77,&p_731->g_77,&p_731->g_77,(void*)0},{&p_731->g_77,&p_731->g_77,&p_731->g_77,(void*)0}};
    int64_t *l_165 = &p_731->g_166;
    uint64_t *l_167 = &p_731->g_168[3];
    uint16_t *l_169[3];
    int32_t l_170[8][10] = {{0x36346332L,0x61E4F3C4L,(-1L),0x79E170EDL,(-1L),(-1L),0x79E170EDL,(-1L),0x61E4F3C4L,0x36346332L},{0x36346332L,0x61E4F3C4L,(-1L),0x79E170EDL,(-1L),(-1L),0x79E170EDL,(-1L),0x61E4F3C4L,0x36346332L},{0x36346332L,0x61E4F3C4L,(-1L),0x79E170EDL,(-1L),(-1L),0x79E170EDL,(-1L),0x61E4F3C4L,0x36346332L},{0x36346332L,0x61E4F3C4L,(-1L),0x79E170EDL,(-1L),(-1L),0x79E170EDL,(-1L),0x61E4F3C4L,0x36346332L},{0x36346332L,0x61E4F3C4L,(-1L),0x79E170EDL,(-1L),(-1L),0x79E170EDL,(-1L),0x61E4F3C4L,0x36346332L},{0x36346332L,0x61E4F3C4L,(-1L),0x79E170EDL,(-1L),(-1L),0x79E170EDL,(-1L),0x61E4F3C4L,0x36346332L},{0x36346332L,0x61E4F3C4L,(-1L),0x79E170EDL,(-1L),(-1L),0x79E170EDL,(-1L),0x61E4F3C4L,0x36346332L},{0x36346332L,0x61E4F3C4L,(-1L),0x79E170EDL,(-1L),(-1L),0x79E170EDL,(-1L),0x61E4F3C4L,0x36346332L}};
    int64_t l_171 = (-1L);
    int32_t *l_172 = &p_731->g_48;
    int i, j;
    for (i = 0; i < 3; i++)
        l_169[i] = &p_731->g_93[0][2];
    --l_142;
    (*l_172) &= (((0L > (((3UL ^ ((safe_mul_func_int16_t_s_s(p_731->g_95[3], (safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u((((safe_div_func_int64_t_s_s(((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_731->g_155.xyxx)).hi)).hi, p_731->g_75.s6)) != (l_170[0][9] = (1L || (safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((void*)0 != l_160[1][2]), (((safe_rshift_func_uint8_t_u_u(p_132, (safe_lshift_func_int16_t_s_u((((*l_165) = ((VECTOR(int64_t, 2))(0x42A325B7F87256FFL, (-3L))).odd) ^ ((*l_167) = (!l_142))), 3)))) && l_142) || p_731->g_44))) == p_132), l_142))))), p_731->g_65)) , p_731->g_155.x) >= l_171), p_132)), 0x79624376L)))) < l_171)) > p_133) & l_142)) , p_731->g_57[4][4]) , l_142);
    return p_731->g_93[0][2];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[36];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 36; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[36];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 36; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_comm_values[i] = 1;
    struct S0 c_732;
    struct S0* p_731 = &c_732;
    struct S0 c_733 = {
        (VECTOR(uint8_t, 16))(0x41L, (VECTOR(uint8_t, 4))(0x41L, (VECTOR(uint8_t, 2))(0x41L, 1UL), 1UL), 1UL, 0x41L, 1UL, (VECTOR(uint8_t, 2))(0x41L, 1UL), (VECTOR(uint8_t, 2))(0x41L, 1UL), 0x41L, 1UL, 0x41L, 1UL), // p_731->g_36
        (-1L), // p_731->g_44
        0x7E868E01L, // p_731->g_48
        0x46409EF3L, // p_731->g_53
        {{0x25D8BAC8L,0x8B3027FEL,4294967295UL,4294967292UL,0xEE613944L,0x25D8BAC8L,4294967292UL,0x1289665FL,4294967292UL},{0x25D8BAC8L,0x8B3027FEL,4294967295UL,4294967292UL,0xEE613944L,0x25D8BAC8L,4294967292UL,0x1289665FL,4294967292UL},{0x25D8BAC8L,0x8B3027FEL,4294967295UL,4294967292UL,0xEE613944L,0x25D8BAC8L,4294967292UL,0x1289665FL,4294967292UL},{0x25D8BAC8L,0x8B3027FEL,4294967295UL,4294967292UL,0xEE613944L,0x25D8BAC8L,4294967292UL,0x1289665FL,4294967292UL},{0x25D8BAC8L,0x8B3027FEL,4294967295UL,4294967292UL,0xEE613944L,0x25D8BAC8L,4294967292UL,0x1289665FL,4294967292UL},{0x25D8BAC8L,0x8B3027FEL,4294967295UL,4294967292UL,0xEE613944L,0x25D8BAC8L,4294967292UL,0x1289665FL,4294967292UL}}, // p_731->g_57
        &p_731->g_57[4][5], // p_731->g_56
        &p_731->g_44, // p_731->g_63
        &p_731->g_63, // p_731->g_62
        0x89L, // p_731->g_65
        (VECTOR(uint32_t, 8))(0x7ACDDED4L, (VECTOR(uint32_t, 4))(0x7ACDDED4L, (VECTOR(uint32_t, 2))(0x7ACDDED4L, 0xBE66BFFEL), 0xBE66BFFEL), 0xBE66BFFEL, 0x7ACDDED4L, 0xBE66BFFEL), // p_731->g_75
        0x423B0CAFL, // p_731->g_77
        (VECTOR(int16_t, 2))((-4L), (-1L)), // p_731->g_83
        {{65533UL,65533UL,65533UL},{65533UL,65533UL,65533UL},{65533UL,65533UL,65533UL},{65533UL,65533UL,65533UL},{65533UL,65533UL,65533UL},{65533UL,65533UL,65533UL},{65533UL,65533UL,65533UL}}, // p_731->g_93
        {0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_731->g_95
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x91L), 0x91L), 0x91L, 1UL, 0x91L, (VECTOR(uint8_t, 2))(1UL, 0x91L), (VECTOR(uint8_t, 2))(1UL, 0x91L), 1UL, 0x91L, 1UL, 0x91L), // p_731->g_99
        0xFD9FC31EL, // p_731->g_121
        (VECTOR(int8_t, 2))(0x7BL, (-1L)), // p_731->g_155
        0x0CB6BDCD2DBF4B4AL, // p_731->g_166
        {0x977632338F47762CL,0x977632338F47762CL,0x977632338F47762CL,0x977632338F47762CL,0x977632338F47762CL,0x977632338F47762CL}, // p_731->g_168
        {{{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L}},{{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L}},{{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L}},{{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L}},{{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L}},{{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L}},{{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L}},{{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L}},{{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L},{0x282EL,0x282EL,3L}}}, // p_731->g_177
        0x5E890350L, // p_731->g_202
        (-1L), // p_731->g_205
        (VECTOR(uint8_t, 8))(0x02L, (VECTOR(uint8_t, 4))(0x02L, (VECTOR(uint8_t, 2))(0x02L, 0x84L), 0x84L), 0x84L, 0x02L, 0x84L), // p_731->g_219
        (VECTOR(uint8_t, 2))(0x8AL, 1UL), // p_731->g_220
        (-3L), // p_731->g_222
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x49C9A20BL), 0x49C9A20BL), 0x49C9A20BL, 1UL, 0x49C9A20BL, (VECTOR(uint32_t, 2))(1UL, 0x49C9A20BL), (VECTOR(uint32_t, 2))(1UL, 0x49C9A20BL), 1UL, 0x49C9A20BL, 1UL, 0x49C9A20BL), // p_731->g_229
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL), // p_731->g_230
        0x3549L, // p_731->g_233
        0x6E9765BEL, // p_731->g_259
        (void*)0, // p_731->g_269
        (void*)0, // p_731->g_278
        4294967295UL, // p_731->g_281
        (void*)0, // p_731->g_289
        (void*)0, // p_731->g_290
        &p_731->g_202, // p_731->g_292
        &p_731->g_292, // p_731->g_291
        (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 4294967292UL), 4294967292UL), // p_731->g_527
        8UL, // p_731->g_532
        (VECTOR(int32_t, 2))(0x5226F529L, 9L), // p_731->g_578
        (VECTOR(int16_t, 8))(0x4EDEL, (VECTOR(int16_t, 4))(0x4EDEL, (VECTOR(int16_t, 2))(0x4EDEL, (-1L)), (-1L)), (-1L), 0x4EDEL, (-1L)), // p_731->g_580
        (VECTOR(int16_t, 8))(0x246BL, (VECTOR(int16_t, 4))(0x246BL, (VECTOR(int16_t, 2))(0x246BL, 6L), 6L), 6L, 0x246BL, 6L), // p_731->g_581
        (VECTOR(int16_t, 2))(0x7C8CL, 1L), // p_731->g_582
        (VECTOR(int8_t, 16))(0x56L, (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, 0x26L), 0x26L), 0x26L, 0x56L, 0x26L, (VECTOR(int8_t, 2))(0x56L, 0x26L), (VECTOR(int8_t, 2))(0x56L, 0x26L), 0x56L, 0x26L, 0x56L, 0x26L), // p_731->g_583
        0x28L, // p_731->g_593
        &p_731->g_593, // p_731->g_592
        &p_731->g_592, // p_731->g_591
        3L, // p_731->g_612
        {{{0x04F9853E28EB8678L,0x04F9853E28EB8678L,0x04F9853E28EB8678L,0x04F9853E28EB8678L}},{{0x04F9853E28EB8678L,0x04F9853E28EB8678L,0x04F9853E28EB8678L,0x04F9853E28EB8678L}}}, // p_731->g_628
        (VECTOR(uint64_t, 2))(0x130DF2F6FD279885L, 0x86632F4B6E350420L), // p_731->g_640
        (VECTOR(uint8_t, 4))(0x94L, (VECTOR(uint8_t, 2))(0x94L, 2UL), 2UL), // p_731->g_651
        (VECTOR(uint8_t, 2))(0xCBL, 1UL), // p_731->g_653
        (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), (-6L)), (-6L)), // p_731->g_656
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x6043A9FE60D70194L), 0x6043A9FE60D70194L), 0x6043A9FE60D70194L, 0UL, 0x6043A9FE60D70194L, (VECTOR(uint64_t, 2))(0UL, 0x6043A9FE60D70194L), (VECTOR(uint64_t, 2))(0UL, 0x6043A9FE60D70194L), 0UL, 0x6043A9FE60D70194L, 0UL, 0x6043A9FE60D70194L), // p_731->g_659
        (VECTOR(int32_t, 8))(0x4EF35D77L, (VECTOR(int32_t, 4))(0x4EF35D77L, (VECTOR(int32_t, 2))(0x4EF35D77L, (-2L)), (-2L)), (-2L), 0x4EF35D77L, (-2L)), // p_731->g_666
        (VECTOR(int32_t, 2))((-10L), 0x4EF5B173L), // p_731->g_705
        0, // p_731->v_collective
        sequence_input[get_global_id(0)], // p_731->global_0_offset
        sequence_input[get_global_id(1)], // p_731->global_1_offset
        sequence_input[get_global_id(2)], // p_731->global_2_offset
        sequence_input[get_local_id(0)], // p_731->local_0_offset
        sequence_input[get_local_id(1)], // p_731->local_1_offset
        sequence_input[get_local_id(2)], // p_731->local_2_offset
        sequence_input[get_group_id(0)], // p_731->group_0_offset
        sequence_input[get_group_id(1)], // p_731->group_1_offset
        sequence_input[get_group_id(2)], // p_731->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[0][get_linear_local_id()])), // p_731->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_732 = c_733;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_731);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_731->g_36.s0, "p_731->g_36.s0", print_hash_value);
    transparent_crc(p_731->g_36.s1, "p_731->g_36.s1", print_hash_value);
    transparent_crc(p_731->g_36.s2, "p_731->g_36.s2", print_hash_value);
    transparent_crc(p_731->g_36.s3, "p_731->g_36.s3", print_hash_value);
    transparent_crc(p_731->g_36.s4, "p_731->g_36.s4", print_hash_value);
    transparent_crc(p_731->g_36.s5, "p_731->g_36.s5", print_hash_value);
    transparent_crc(p_731->g_36.s6, "p_731->g_36.s6", print_hash_value);
    transparent_crc(p_731->g_36.s7, "p_731->g_36.s7", print_hash_value);
    transparent_crc(p_731->g_36.s8, "p_731->g_36.s8", print_hash_value);
    transparent_crc(p_731->g_36.s9, "p_731->g_36.s9", print_hash_value);
    transparent_crc(p_731->g_36.sa, "p_731->g_36.sa", print_hash_value);
    transparent_crc(p_731->g_36.sb, "p_731->g_36.sb", print_hash_value);
    transparent_crc(p_731->g_36.sc, "p_731->g_36.sc", print_hash_value);
    transparent_crc(p_731->g_36.sd, "p_731->g_36.sd", print_hash_value);
    transparent_crc(p_731->g_36.se, "p_731->g_36.se", print_hash_value);
    transparent_crc(p_731->g_36.sf, "p_731->g_36.sf", print_hash_value);
    transparent_crc(p_731->g_44, "p_731->g_44", print_hash_value);
    transparent_crc(p_731->g_48, "p_731->g_48", print_hash_value);
    transparent_crc(p_731->g_53, "p_731->g_53", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_731->g_57[i][j], "p_731->g_57[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_731->g_65, "p_731->g_65", print_hash_value);
    transparent_crc(p_731->g_75.s0, "p_731->g_75.s0", print_hash_value);
    transparent_crc(p_731->g_75.s1, "p_731->g_75.s1", print_hash_value);
    transparent_crc(p_731->g_75.s2, "p_731->g_75.s2", print_hash_value);
    transparent_crc(p_731->g_75.s3, "p_731->g_75.s3", print_hash_value);
    transparent_crc(p_731->g_75.s4, "p_731->g_75.s4", print_hash_value);
    transparent_crc(p_731->g_75.s5, "p_731->g_75.s5", print_hash_value);
    transparent_crc(p_731->g_75.s6, "p_731->g_75.s6", print_hash_value);
    transparent_crc(p_731->g_75.s7, "p_731->g_75.s7", print_hash_value);
    transparent_crc(p_731->g_77, "p_731->g_77", print_hash_value);
    transparent_crc(p_731->g_83.x, "p_731->g_83.x", print_hash_value);
    transparent_crc(p_731->g_83.y, "p_731->g_83.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_731->g_93[i][j], "p_731->g_93[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_731->g_95[i], "p_731->g_95[i]", print_hash_value);

    }
    transparent_crc(p_731->g_99.s0, "p_731->g_99.s0", print_hash_value);
    transparent_crc(p_731->g_99.s1, "p_731->g_99.s1", print_hash_value);
    transparent_crc(p_731->g_99.s2, "p_731->g_99.s2", print_hash_value);
    transparent_crc(p_731->g_99.s3, "p_731->g_99.s3", print_hash_value);
    transparent_crc(p_731->g_99.s4, "p_731->g_99.s4", print_hash_value);
    transparent_crc(p_731->g_99.s5, "p_731->g_99.s5", print_hash_value);
    transparent_crc(p_731->g_99.s6, "p_731->g_99.s6", print_hash_value);
    transparent_crc(p_731->g_99.s7, "p_731->g_99.s7", print_hash_value);
    transparent_crc(p_731->g_99.s8, "p_731->g_99.s8", print_hash_value);
    transparent_crc(p_731->g_99.s9, "p_731->g_99.s9", print_hash_value);
    transparent_crc(p_731->g_99.sa, "p_731->g_99.sa", print_hash_value);
    transparent_crc(p_731->g_99.sb, "p_731->g_99.sb", print_hash_value);
    transparent_crc(p_731->g_99.sc, "p_731->g_99.sc", print_hash_value);
    transparent_crc(p_731->g_99.sd, "p_731->g_99.sd", print_hash_value);
    transparent_crc(p_731->g_99.se, "p_731->g_99.se", print_hash_value);
    transparent_crc(p_731->g_99.sf, "p_731->g_99.sf", print_hash_value);
    transparent_crc(p_731->g_121, "p_731->g_121", print_hash_value);
    transparent_crc(p_731->g_155.x, "p_731->g_155.x", print_hash_value);
    transparent_crc(p_731->g_155.y, "p_731->g_155.y", print_hash_value);
    transparent_crc(p_731->g_166, "p_731->g_166", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_731->g_168[i], "p_731->g_168[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_731->g_177[i][j][k], "p_731->g_177[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_731->g_202, "p_731->g_202", print_hash_value);
    transparent_crc(p_731->g_205, "p_731->g_205", print_hash_value);
    transparent_crc(p_731->g_219.s0, "p_731->g_219.s0", print_hash_value);
    transparent_crc(p_731->g_219.s1, "p_731->g_219.s1", print_hash_value);
    transparent_crc(p_731->g_219.s2, "p_731->g_219.s2", print_hash_value);
    transparent_crc(p_731->g_219.s3, "p_731->g_219.s3", print_hash_value);
    transparent_crc(p_731->g_219.s4, "p_731->g_219.s4", print_hash_value);
    transparent_crc(p_731->g_219.s5, "p_731->g_219.s5", print_hash_value);
    transparent_crc(p_731->g_219.s6, "p_731->g_219.s6", print_hash_value);
    transparent_crc(p_731->g_219.s7, "p_731->g_219.s7", print_hash_value);
    transparent_crc(p_731->g_220.x, "p_731->g_220.x", print_hash_value);
    transparent_crc(p_731->g_220.y, "p_731->g_220.y", print_hash_value);
    transparent_crc(p_731->g_222, "p_731->g_222", print_hash_value);
    transparent_crc(p_731->g_229.s0, "p_731->g_229.s0", print_hash_value);
    transparent_crc(p_731->g_229.s1, "p_731->g_229.s1", print_hash_value);
    transparent_crc(p_731->g_229.s2, "p_731->g_229.s2", print_hash_value);
    transparent_crc(p_731->g_229.s3, "p_731->g_229.s3", print_hash_value);
    transparent_crc(p_731->g_229.s4, "p_731->g_229.s4", print_hash_value);
    transparent_crc(p_731->g_229.s5, "p_731->g_229.s5", print_hash_value);
    transparent_crc(p_731->g_229.s6, "p_731->g_229.s6", print_hash_value);
    transparent_crc(p_731->g_229.s7, "p_731->g_229.s7", print_hash_value);
    transparent_crc(p_731->g_229.s8, "p_731->g_229.s8", print_hash_value);
    transparent_crc(p_731->g_229.s9, "p_731->g_229.s9", print_hash_value);
    transparent_crc(p_731->g_229.sa, "p_731->g_229.sa", print_hash_value);
    transparent_crc(p_731->g_229.sb, "p_731->g_229.sb", print_hash_value);
    transparent_crc(p_731->g_229.sc, "p_731->g_229.sc", print_hash_value);
    transparent_crc(p_731->g_229.sd, "p_731->g_229.sd", print_hash_value);
    transparent_crc(p_731->g_229.se, "p_731->g_229.se", print_hash_value);
    transparent_crc(p_731->g_229.sf, "p_731->g_229.sf", print_hash_value);
    transparent_crc(p_731->g_230.s0, "p_731->g_230.s0", print_hash_value);
    transparent_crc(p_731->g_230.s1, "p_731->g_230.s1", print_hash_value);
    transparent_crc(p_731->g_230.s2, "p_731->g_230.s2", print_hash_value);
    transparent_crc(p_731->g_230.s3, "p_731->g_230.s3", print_hash_value);
    transparent_crc(p_731->g_230.s4, "p_731->g_230.s4", print_hash_value);
    transparent_crc(p_731->g_230.s5, "p_731->g_230.s5", print_hash_value);
    transparent_crc(p_731->g_230.s6, "p_731->g_230.s6", print_hash_value);
    transparent_crc(p_731->g_230.s7, "p_731->g_230.s7", print_hash_value);
    transparent_crc(p_731->g_233, "p_731->g_233", print_hash_value);
    transparent_crc(p_731->g_259, "p_731->g_259", print_hash_value);
    transparent_crc(p_731->g_281, "p_731->g_281", print_hash_value);
    transparent_crc(p_731->g_527.x, "p_731->g_527.x", print_hash_value);
    transparent_crc(p_731->g_527.y, "p_731->g_527.y", print_hash_value);
    transparent_crc(p_731->g_527.z, "p_731->g_527.z", print_hash_value);
    transparent_crc(p_731->g_527.w, "p_731->g_527.w", print_hash_value);
    transparent_crc(p_731->g_532, "p_731->g_532", print_hash_value);
    transparent_crc(p_731->g_578.x, "p_731->g_578.x", print_hash_value);
    transparent_crc(p_731->g_578.y, "p_731->g_578.y", print_hash_value);
    transparent_crc(p_731->g_580.s0, "p_731->g_580.s0", print_hash_value);
    transparent_crc(p_731->g_580.s1, "p_731->g_580.s1", print_hash_value);
    transparent_crc(p_731->g_580.s2, "p_731->g_580.s2", print_hash_value);
    transparent_crc(p_731->g_580.s3, "p_731->g_580.s3", print_hash_value);
    transparent_crc(p_731->g_580.s4, "p_731->g_580.s4", print_hash_value);
    transparent_crc(p_731->g_580.s5, "p_731->g_580.s5", print_hash_value);
    transparent_crc(p_731->g_580.s6, "p_731->g_580.s6", print_hash_value);
    transparent_crc(p_731->g_580.s7, "p_731->g_580.s7", print_hash_value);
    transparent_crc(p_731->g_581.s0, "p_731->g_581.s0", print_hash_value);
    transparent_crc(p_731->g_581.s1, "p_731->g_581.s1", print_hash_value);
    transparent_crc(p_731->g_581.s2, "p_731->g_581.s2", print_hash_value);
    transparent_crc(p_731->g_581.s3, "p_731->g_581.s3", print_hash_value);
    transparent_crc(p_731->g_581.s4, "p_731->g_581.s4", print_hash_value);
    transparent_crc(p_731->g_581.s5, "p_731->g_581.s5", print_hash_value);
    transparent_crc(p_731->g_581.s6, "p_731->g_581.s6", print_hash_value);
    transparent_crc(p_731->g_581.s7, "p_731->g_581.s7", print_hash_value);
    transparent_crc(p_731->g_582.x, "p_731->g_582.x", print_hash_value);
    transparent_crc(p_731->g_582.y, "p_731->g_582.y", print_hash_value);
    transparent_crc(p_731->g_583.s0, "p_731->g_583.s0", print_hash_value);
    transparent_crc(p_731->g_583.s1, "p_731->g_583.s1", print_hash_value);
    transparent_crc(p_731->g_583.s2, "p_731->g_583.s2", print_hash_value);
    transparent_crc(p_731->g_583.s3, "p_731->g_583.s3", print_hash_value);
    transparent_crc(p_731->g_583.s4, "p_731->g_583.s4", print_hash_value);
    transparent_crc(p_731->g_583.s5, "p_731->g_583.s5", print_hash_value);
    transparent_crc(p_731->g_583.s6, "p_731->g_583.s6", print_hash_value);
    transparent_crc(p_731->g_583.s7, "p_731->g_583.s7", print_hash_value);
    transparent_crc(p_731->g_583.s8, "p_731->g_583.s8", print_hash_value);
    transparent_crc(p_731->g_583.s9, "p_731->g_583.s9", print_hash_value);
    transparent_crc(p_731->g_583.sa, "p_731->g_583.sa", print_hash_value);
    transparent_crc(p_731->g_583.sb, "p_731->g_583.sb", print_hash_value);
    transparent_crc(p_731->g_583.sc, "p_731->g_583.sc", print_hash_value);
    transparent_crc(p_731->g_583.sd, "p_731->g_583.sd", print_hash_value);
    transparent_crc(p_731->g_583.se, "p_731->g_583.se", print_hash_value);
    transparent_crc(p_731->g_583.sf, "p_731->g_583.sf", print_hash_value);
    transparent_crc(p_731->g_593, "p_731->g_593", print_hash_value);
    transparent_crc(p_731->g_612, "p_731->g_612", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_731->g_628[i][j][k], "p_731->g_628[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_731->g_640.x, "p_731->g_640.x", print_hash_value);
    transparent_crc(p_731->g_640.y, "p_731->g_640.y", print_hash_value);
    transparent_crc(p_731->g_651.x, "p_731->g_651.x", print_hash_value);
    transparent_crc(p_731->g_651.y, "p_731->g_651.y", print_hash_value);
    transparent_crc(p_731->g_651.z, "p_731->g_651.z", print_hash_value);
    transparent_crc(p_731->g_651.w, "p_731->g_651.w", print_hash_value);
    transparent_crc(p_731->g_653.x, "p_731->g_653.x", print_hash_value);
    transparent_crc(p_731->g_653.y, "p_731->g_653.y", print_hash_value);
    transparent_crc(p_731->g_656.x, "p_731->g_656.x", print_hash_value);
    transparent_crc(p_731->g_656.y, "p_731->g_656.y", print_hash_value);
    transparent_crc(p_731->g_656.z, "p_731->g_656.z", print_hash_value);
    transparent_crc(p_731->g_656.w, "p_731->g_656.w", print_hash_value);
    transparent_crc(p_731->g_659.s0, "p_731->g_659.s0", print_hash_value);
    transparent_crc(p_731->g_659.s1, "p_731->g_659.s1", print_hash_value);
    transparent_crc(p_731->g_659.s2, "p_731->g_659.s2", print_hash_value);
    transparent_crc(p_731->g_659.s3, "p_731->g_659.s3", print_hash_value);
    transparent_crc(p_731->g_659.s4, "p_731->g_659.s4", print_hash_value);
    transparent_crc(p_731->g_659.s5, "p_731->g_659.s5", print_hash_value);
    transparent_crc(p_731->g_659.s6, "p_731->g_659.s6", print_hash_value);
    transparent_crc(p_731->g_659.s7, "p_731->g_659.s7", print_hash_value);
    transparent_crc(p_731->g_659.s8, "p_731->g_659.s8", print_hash_value);
    transparent_crc(p_731->g_659.s9, "p_731->g_659.s9", print_hash_value);
    transparent_crc(p_731->g_659.sa, "p_731->g_659.sa", print_hash_value);
    transparent_crc(p_731->g_659.sb, "p_731->g_659.sb", print_hash_value);
    transparent_crc(p_731->g_659.sc, "p_731->g_659.sc", print_hash_value);
    transparent_crc(p_731->g_659.sd, "p_731->g_659.sd", print_hash_value);
    transparent_crc(p_731->g_659.se, "p_731->g_659.se", print_hash_value);
    transparent_crc(p_731->g_659.sf, "p_731->g_659.sf", print_hash_value);
    transparent_crc(p_731->g_666.s0, "p_731->g_666.s0", print_hash_value);
    transparent_crc(p_731->g_666.s1, "p_731->g_666.s1", print_hash_value);
    transparent_crc(p_731->g_666.s2, "p_731->g_666.s2", print_hash_value);
    transparent_crc(p_731->g_666.s3, "p_731->g_666.s3", print_hash_value);
    transparent_crc(p_731->g_666.s4, "p_731->g_666.s4", print_hash_value);
    transparent_crc(p_731->g_666.s5, "p_731->g_666.s5", print_hash_value);
    transparent_crc(p_731->g_666.s6, "p_731->g_666.s6", print_hash_value);
    transparent_crc(p_731->g_666.s7, "p_731->g_666.s7", print_hash_value);
    transparent_crc(p_731->g_705.x, "p_731->g_705.x", print_hash_value);
    transparent_crc(p_731->g_705.y, "p_731->g_705.y", print_hash_value);
    transparent_crc(p_731->v_collective, "p_731->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 36; i++)
            transparent_crc(p_731->g_special_values[i + 36 * get_linear_group_id()], "p_731->g_special_values[i + 36 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 36; i++)
            transparent_crc(p_731->l_special_values[i], "p_731->l_special_values[i]", print_hash_value);
    transparent_crc(p_731->l_comm_values[get_linear_local_id()], "p_731->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_731->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()], "p_731->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
