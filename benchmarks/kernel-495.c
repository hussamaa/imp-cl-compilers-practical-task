// --atomics 20 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 100,33,1 -l 20,3,1
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

__constant uint32_t permutations[10][60] = {
{48,7,56,52,26,28,42,57,39,30,13,46,29,23,25,22,41,59,8,43,50,5,24,53,36,47,54,19,11,18,20,9,10,16,49,58,51,55,15,17,4,33,14,34,6,35,37,31,38,2,40,44,3,45,21,32,1,12,27,0}, // permutation 0
{7,14,45,23,5,8,26,44,4,35,46,52,42,49,28,27,29,17,16,2,13,50,59,1,40,43,53,47,39,15,37,0,18,20,11,54,33,24,3,30,57,25,55,58,32,22,10,36,9,34,19,51,38,6,41,48,21,56,12,31}, // permutation 1
{56,54,22,33,37,5,40,15,57,36,47,20,25,45,39,19,24,2,27,35,14,23,58,17,34,26,18,41,50,32,44,12,4,30,10,55,31,8,11,16,59,46,43,51,0,48,1,6,21,29,49,38,13,52,42,3,9,28,53,7}, // permutation 2
{53,28,41,46,37,11,57,56,10,52,36,38,30,8,6,21,18,0,19,50,12,49,55,1,43,31,32,26,2,47,17,40,33,51,59,16,54,20,48,42,14,58,3,23,22,44,24,4,9,34,35,25,5,27,39,45,15,13,29,7}, // permutation 3
{4,18,58,38,37,43,36,42,3,31,54,2,48,35,56,16,11,9,47,57,7,8,24,59,12,29,1,50,52,21,28,39,33,27,51,0,49,44,30,41,22,17,13,15,45,6,40,55,25,34,46,19,10,5,32,23,20,53,26,14}, // permutation 4
{38,7,25,30,10,17,33,9,40,0,46,11,50,53,39,5,52,2,32,12,35,1,59,58,18,6,23,22,48,36,34,44,47,43,26,14,19,51,37,21,29,20,15,41,28,31,55,57,8,49,24,27,3,45,42,16,56,54,4,13}, // permutation 5
{45,48,24,1,44,23,32,42,39,27,36,5,56,8,57,22,17,16,43,0,46,19,53,59,20,38,25,34,49,12,37,30,28,13,6,7,33,10,11,31,58,29,55,14,15,9,21,4,2,54,18,52,47,41,35,3,26,40,50,51}, // permutation 6
{24,19,59,41,58,36,3,44,18,6,55,13,50,0,29,16,15,26,20,22,23,5,38,53,12,43,56,27,9,57,28,42,47,46,51,48,35,4,2,32,8,10,25,54,31,40,37,11,30,21,49,7,39,14,17,34,52,45,33,1}, // permutation 7
{34,7,6,30,26,36,17,33,51,11,56,59,12,29,1,35,15,37,4,41,28,19,55,10,3,50,21,39,53,18,31,40,58,49,47,38,14,54,46,43,48,45,24,52,32,27,20,57,44,2,23,13,9,16,0,22,25,5,8,42}, // permutation 8
{23,10,42,34,35,44,9,47,8,26,16,2,51,30,12,58,49,52,15,48,14,4,31,6,32,55,37,39,46,43,24,41,33,22,45,53,27,54,57,19,13,29,5,59,7,21,38,20,28,11,17,50,56,40,1,18,36,25,3,0} // permutation 9
};

// Seed: 2694755439

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(uint8_t, 4) g_21;
    VECTOR(uint32_t, 16) g_32;
    uint32_t g_83;
    volatile uint32_t ** volatile g_103;
    volatile uint32_t ** volatile * volatile g_104;
    int32_t g_106;
    int32_t * volatile g_105[10][3][1];
    volatile VECTOR(uint64_t, 16) g_117;
    int16_t g_121[7];
    VECTOR(uint8_t, 4) g_125;
    VECTOR(int8_t, 8) g_131;
    uint32_t *g_144;
    uint32_t **g_143[10][7];
    uint32_t *** volatile g_142;
    volatile int32_t g_146;
    uint8_t g_154;
    uint64_t g_155;
    VECTOR(int64_t, 4) g_167;
    volatile VECTOR(uint64_t, 16) g_193;
    VECTOR(uint64_t, 8) g_194;
    VECTOR(uint64_t, 2) g_195;
    uint16_t g_211;
    volatile int64_t g_214;
    volatile VECTOR(int64_t, 8) g_276;
    volatile VECTOR(int64_t, 8) g_277;
    uint8_t g_296;
    int8_t *g_329[6];
    volatile VECTOR(uint16_t, 2) g_335;
    volatile VECTOR(int64_t, 2) g_346;
    volatile VECTOR(int32_t, 8) g_360;
    int8_t g_376;
    uint64_t g_380;
    volatile uint32_t g_392[9][7];
    volatile uint32_t *g_391;
    volatile uint32_t **g_390;
    volatile uint32_t ***g_389;
    volatile VECTOR(int8_t, 8) g_399;
    VECTOR(uint64_t, 2) g_401;
    VECTOR(uint16_t, 8) g_428;
    int32_t g_445;
    int32_t g_450;
    int32_t g_463;
    VECTOR(int32_t, 4) g_474;
    int32_t *g_493;
    int32_t ** volatile g_492;
    int32_t *g_502;
    int32_t ** volatile g_501;
    VECTOR(uint16_t, 8) g_516;
    volatile VECTOR(int8_t, 16) g_529;
    VECTOR(int8_t, 16) g_530;
    int64_t g_534[1];
    volatile int16_t g_551;
    volatile VECTOR(uint64_t, 16) g_585;
    int8_t g_616;
    int8_t g_619;
    VECTOR(uint32_t, 4) g_685;
    volatile VECTOR(int8_t, 8) g_695;
    int32_t ** volatile g_703;
    int32_t ** volatile g_704;
    volatile uint8_t g_711;
    volatile VECTOR(int16_t, 8) g_751;
    int64_t *g_762;
    int64_t **g_761[2][8];
    VECTOR(int32_t, 8) g_766;
    int64_t *g_774;
    volatile VECTOR(int32_t, 8) g_776;
    int32_t ** volatile g_801;
    int32_t ** volatile g_802;
    int8_t g_804[10];
    volatile VECTOR(int64_t, 8) g_809;
    VECTOR(int64_t, 8) g_811;
    volatile VECTOR(int64_t, 4) g_812;
    volatile VECTOR(uint8_t, 8) g_826;
    volatile VECTOR(uint8_t, 2) g_827;
    VECTOR(uint8_t, 8) g_828;
    int32_t ** volatile g_834;
    int32_t ** volatile g_835;
    VECTOR(uint8_t, 16) g_911;
    volatile VECTOR(uint8_t, 2) g_912;
    VECTOR(uint16_t, 2) g_947;
    volatile uint64_t * volatile * volatile g_955;
    volatile uint32_t * volatile * volatile g_972[5];
    VECTOR(int8_t, 16) g_1037;
    VECTOR(int8_t, 4) g_1038;
    VECTOR(int8_t, 8) g_1039;
    volatile VECTOR(int8_t, 8) g_1041;
    VECTOR(int8_t, 2) g_1045;
    volatile VECTOR(int8_t, 4) g_1046;
    volatile VECTOR(int32_t, 8) g_1057;
    VECTOR(uint8_t, 8) g_1058;
    int32_t ** volatile g_1062;
    VECTOR(uint16_t, 8) g_1067;
    VECTOR(int8_t, 8) g_1078;
    uint8_t g_1084;
    uint32_t g_1085;
    int32_t ** volatile g_1093[1][2];
    int32_t ** volatile g_1094[4];
    uint32_t g_1139;
    VECTOR(int32_t, 8) g_1146;
    VECTOR(int16_t, 8) g_1147;
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
uint64_t  func_1(struct S0 * p_1167);
uint16_t  func_7(int64_t  p_8, int32_t  p_9, uint8_t  p_10, struct S0 * p_1167);
uint32_t  func_11(int32_t  p_12, uint8_t  p_13, uint32_t  p_14, uint64_t  p_15, uint64_t  p_16, struct S0 * p_1167);
uint8_t  func_24(uint32_t  p_25, int32_t  p_26, int64_t  p_27, uint32_t  p_28, int16_t  p_29, struct S0 * p_1167);
uint32_t  func_33(int32_t  p_34, int16_t  p_35, int64_t  p_36, struct S0 * p_1167);
int32_t  func_38(uint32_t  p_39, struct S0 * p_1167);
uint32_t  func_42(uint32_t  p_43, int8_t  p_44, int32_t  p_45, struct S0 * p_1167);
int64_t  func_51(uint32_t  p_52, struct S0 * p_1167);
uint16_t  func_57(uint16_t  p_58, int32_t  p_59, int64_t  p_60, struct S0 * p_1167);
uint32_t  func_76(int8_t  p_77, uint64_t  p_78, int64_t  p_79, uint64_t  p_80, struct S0 * p_1167);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1167->l_comm_values p_1167->g_21 p_1167->g_32 p_1167->g_comm_values p_1167->g_83 p_1167->g_103 p_1167->g_104 p_1167->g_117 p_1167->g_121 p_1167->g_125 p_1167->g_131 p_1167->g_106 p_1167->g_142 p_1167->g_154 p_1167->g_155 p_1167->g_167 p_1167->g_144 p_1167->g_193 p_1167->g_194 p_1167->g_195 p_1167->g_276 p_1167->g_277 p_1167->g_211 p_1167->g_296 p_1167->g_143 p_1167->g_214 p_1167->g_329 p_1167->g_335 p_1167->g_346 p_1167->g_360 p_1167->g_389 p_1167->g_399 p_1167->g_401 p_1167->g_428 p_1167->g_450 p_1167->g_463 p_1167->g_474 p_1167->g_376 p_1167->g_380 p_1167->g_619 p_1167->g_502 p_1167->g_766 p_1167->g_501 p_1167->g_774 p_1167->g_776 p_1167->g_802 p_1167->g_804 p_1167->g_809 p_1167->g_811 p_1167->g_812 p_1167->g_826 p_1167->g_827 p_1167->g_828 p_1167->g_834 p_1167->g_835 p_1167->g_534 p_1167->g_516 p_1167->g_911 p_1167->g_912 p_1167->g_947 p_1167->g_955 p_1167->g_530 p_1167->g_972 p_1167->g_685 p_1167->g_616 p_1167->g_1057 p_1167->g_1058 p_1167->g_1062 p_1167->g_1067 p_1167->g_1078 p_1167->g_1085 p_1167->g_1139 p_1167->g_1146 p_1167->g_1147 p_1167->g_493
 * writes: p_1167->g_83 p_1167->g_103 p_1167->g_121 p_1167->g_143 p_1167->g_155 p_1167->g_211 p_1167->g_125 p_1167->g_296 p_1167->g_131 p_1167->g_194 p_1167->g_167 p_1167->g_376 p_1167->g_380 p_1167->g_106 p_1167->g_154 p_1167->g_428 p_1167->g_445 p_1167->g_450 p_1167->g_463 p_1167->g_761 p_1167->g_774 p_1167->g_502 p_1167->g_32 p_1167->g_811 p_1167->l_comm_values p_1167->g_493 p_1167->g_1084 p_1167->g_534 p_1167->g_1139
 */
uint64_t  func_1(struct S0 * p_1167)
{ /* block id: 4 */
    uint32_t l_4 = 0xF2B29949L;
    VECTOR(uint8_t, 8) l_22 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x55L), 0x55L), 0x55L, 1UL, 0x55L);
    VECTOR(uint8_t, 2) l_23 = (VECTOR(uint8_t, 2))(1UL, 254UL);
    int8_t l_37 = 4L;
    int32_t *l_462 = &p_1167->g_463;
    int32_t l_464 = 0x274225CFL;
    int16_t *l_757[9] = {&p_1167->g_121[3],&p_1167->g_121[3],&p_1167->g_121[3],&p_1167->g_121[3],&p_1167->g_121[3],&p_1167->g_121[3],&p_1167->g_121[3],&p_1167->g_121[3],&p_1167->g_121[3]};
    uint16_t l_758 = 65535UL;
    uint32_t *l_842 = (void*)0;
    uint32_t *l_843 = (void*)0;
    uint32_t *l_844 = (void*)0;
    uint32_t *l_845 = (void*)0;
    VECTOR(int32_t, 4) l_856 = (VECTOR(int32_t, 4))(0x4A3EC422L, (VECTOR(int32_t, 2))(0x4A3EC422L, 1L), 1L);
    int64_t *l_857 = (void*)0;
    int32_t l_885 = 0x0CCE7408L;
    int64_t l_887 = 0x753DB7F5A4997823L;
    uint64_t l_896 = 0UL;
    int32_t l_903[1];
    int8_t l_920 = 1L;
    int64_t l_934 = 0x48AFBA18A73CDDC4L;
    int64_t ***l_950 = &p_1167->g_761[0][7];
    uint64_t **l_956 = (void*)0;
    uint8_t l_958 = 8UL;
    uint32_t l_980[2];
    uint32_t l_993 = 4UL;
    uint32_t l_996 = 4294967291UL;
    int64_t *l_1003 = &p_1167->g_534[0];
    VECTOR(int8_t, 4) l_1047 = (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 7L), 7L);
    int16_t l_1075 = (-1L);
    int32_t l_1083 = 7L;
    VECTOR(int32_t, 2) l_1086 = (VECTOR(int32_t, 2))(0x6C88C2A7L, 0x07298F67L);
    int64_t l_1111 = 1L;
    int32_t l_1114[8] = {0x6DC4E9BAL,0x6DC4E9BAL,0x6DC4E9BAL,0x6DC4E9BAL,0x6DC4E9BAL,0x6DC4E9BAL,0x6DC4E9BAL,0x6DC4E9BAL};
    int32_t *l_1163[6][7] = {{(void*)0,&p_1167->g_463,(void*)0,(void*)0,&p_1167->g_463,(void*)0,(void*)0},{(void*)0,&p_1167->g_463,(void*)0,(void*)0,&p_1167->g_463,(void*)0,(void*)0},{(void*)0,&p_1167->g_463,(void*)0,(void*)0,&p_1167->g_463,(void*)0,(void*)0},{(void*)0,&p_1167->g_463,(void*)0,(void*)0,&p_1167->g_463,(void*)0,(void*)0},{(void*)0,&p_1167->g_463,(void*)0,(void*)0,&p_1167->g_463,(void*)0,(void*)0},{(void*)0,&p_1167->g_463,(void*)0,(void*)0,&p_1167->g_463,(void*)0,(void*)0}};
    uint64_t l_1164 = 0x5526882BBC09EE76L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_903[i] = 0x0CE88542L;
    for (i = 0; i < 2; i++)
        l_980[i] = 0xD78451B5L;
    if ((safe_mod_func_int8_t_s_s(((p_1167->g_32.sd = (l_4 < (safe_div_func_int32_t_s_s(((*l_462) = (p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))] | func_7(p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))], p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))], ((func_11((l_4 & (safe_div_func_uint16_t_u_u(((p_1167->g_121[3] = ((*l_462) = (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(p_1167->g_21.wxzz)).zxyzzwwx, ((VECTOR(uint8_t, 4))(0xDCL, ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(l_22.s26)).yxyx))).even, ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 2))(1UL, 1UL)).yyxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_23.yxxx)), 0x8DL, func_24(l_4, p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))], (safe_sub_func_int32_t_s_s((l_464 = ((*l_462) &= ((((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 4))(p_1167->g_32.s0be6)).zxzxxzxy, ((VECTOR(uint32_t, 4))(0x9DCB7BE7L, func_33(p_1167->g_32.s2, l_37, p_1167->g_comm_values[p_1167->tid], p_1167), 6UL, 0xB6BFB0A3L)).wwzyzyyw))).s0 , GROUP_DIVERGE(0, 1)) != p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))]))), l_22.s3)), p_1167->g_32.sc, p_1167->g_32.sf, p_1167), 250UL, 255UL)).s55)).xxyx, ((VECTOR(uint8_t, 4))(1UL))))).xzywxxyxwywyywyx)).sbbc4))).lo))), 0xD9L)).wwxyzzzz))).s3, l_4)))) , 1UL), p_1167->g_195.y))), p_1167->g_619, p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))], p_1167->g_195.x, l_758, p_1167) , p_1167->g_804[5]) , (*l_462)), p_1167))), l_23.x)))) , 1L), l_23.x)))
    { /* block id: 323 */
        uint32_t l_860 = 0xE8F4657FL;
        int32_t *l_879 = &p_1167->g_463;
        int64_t *l_880 = (void*)0;
        int64_t *l_881 = (void*)0;
        int64_t *l_882 = (void*)0;
        int64_t *l_883 = (void*)0;
        uint32_t l_884 = 0xABE5F747L;
        int64_t *l_886[3][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t *l_888 = &l_464;
        int i, j;
        (*l_888) ^= (safe_div_func_int64_t_s_s((p_1167->g_516.s5 <= (((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((safe_add_func_int32_t_s_s((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 0x650CL)), 0x00C6L, 0x0A0CL)).x , 0x6588A833L), (*l_462))) , ((((safe_rshift_func_uint8_t_u_u((((VECTOR(int32_t, 4))(l_856.xwzw)).w ^ ((VECTOR(int32_t, 16))(8L, ((void*)0 != l_857), 0L, (p_1167->g_380 && (safe_add_func_uint32_t_u_u(((*p_1167->g_144) = l_860), (((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1167->global_2_offset, get_global_id(2), 10), (((VECTOR(int16_t, 2))(0L, 0x380DL)).hi || (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(FAKE_DIVERGE(p_1167->local_2_offset, get_local_id(2), 10), (p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))] |= (p_1167->g_167.w ^= (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((*l_462), ((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 2))(0x05F0L, 0x1E3BL))))).odd)) & (p_1167->g_811.s3 = ((safe_mul_func_int16_t_s_s(((FAKE_DIVERGE(p_1167->group_2_offset, get_group_id(2), 10) , &l_464) != l_879), 0x9A4AL)) , (*l_879)))) ^ 0x2E7C9B09326A5411L), l_884)) && l_885), (*l_462))), 8)))))), (*l_879))), 0x0A52L))))) && p_1167->g_131.s6) || p_1167->g_812.x)))), 0x4617EA08L, (-1L), ((VECTOR(int32_t, 2))(0x72611AF6L)), ((VECTOR(int32_t, 2))(1L)), 4L, l_887, (-6L), ((VECTOR(int32_t, 2))(0x3752F261L)), (-2L))).s5), GROUP_DIVERGE(2, 1))) , (*l_462)) , (-1L)) ^ (*l_879))), 0x04C4FDBD0A0BE2D8L)), (*l_462))) , &p_1167->g_804[5]) == (void*)0)), 8UL));
        return p_1167->g_193.sc;
    }
    else
    { /* block id: 330 */
        int32_t *l_889 = &p_1167->g_106;
        int32_t *l_890 = (void*)0;
        int32_t *l_891 = (void*)0;
        int32_t *l_892 = &l_464;
        int32_t *l_893 = (void*)0;
        int32_t *l_894 = (void*)0;
        int32_t *l_895[4];
        uint32_t l_922 = 0xEBF9A3FBL;
        int32_t l_930 = 0x267D72CFL;
        int32_t l_933 = 0L;
        VECTOR(uint16_t, 4) l_945 = (VECTOR(uint16_t, 4))(0x090CL, (VECTOR(uint16_t, 2))(0x090CL, 65535UL), 65535UL);
        VECTOR(uint16_t, 2) l_946 = (VECTOR(uint16_t, 2))(0x630AL, 65535UL);
        VECTOR(uint16_t, 16) l_948 = (VECTOR(uint16_t, 16))(0xE156L, (VECTOR(uint16_t, 4))(0xE156L, (VECTOR(uint16_t, 2))(0xE156L, 1UL), 1UL), 1UL, 0xE156L, 1UL, (VECTOR(uint16_t, 2))(0xE156L, 1UL), (VECTOR(uint16_t, 2))(0xE156L, 1UL), 0xE156L, 1UL, 0xE156L, 1UL);
        VECTOR(uint16_t, 8) l_949 = (VECTOR(uint16_t, 8))(0xC048L, (VECTOR(uint16_t, 4))(0xC048L, (VECTOR(uint16_t, 2))(0xC048L, 0UL), 0UL), 0UL, 0xC048L, 0UL);
        int64_t ***l_952[1];
        int64_t ****l_951 = &l_952[0];
        uint32_t *l_957[4];
        uint16_t *l_959[1][1][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint32_t l_960 = 1UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_895[i] = &p_1167->g_463;
        for (i = 0; i < 1; i++)
            l_952[i] = &p_1167->g_761[0][3];
        for (i = 0; i < 4; i++)
            l_957[i] = (void*)0;
        ++l_896;
        for (p_1167->g_155 = 0; (p_1167->g_155 >= 14); p_1167->g_155++)
        { /* block id: 334 */
            VECTOR(int16_t, 2) l_906 = (VECTOR(int16_t, 2))(9L, 6L);
            int32_t l_926[5];
            int8_t l_927 = 1L;
            int64_t l_928 = 1L;
            uint32_t l_935 = 4294967295UL;
            int i;
            for (i = 0; i < 5; i++)
                l_926[i] = 7L;
            (*l_889) = (*l_462);
            if ((*l_462))
                break;
            for (p_1167->g_463 = 0; (p_1167->g_463 >= (-19)); p_1167->g_463--)
            { /* block id: 339 */
                uint8_t *l_915 = (void*)0;
                uint8_t *l_916 = (void*)0;
                uint8_t *l_917 = &p_1167->g_296;
                int32_t l_921 = (-10L);
                uint64_t l_923 = 18446744073709551615UL;
                int32_t l_929 = 0x0FBFEFE2L;
                int32_t l_931 = 0x6444B8CBL;
                int32_t l_932[2][10][4] = {{{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L}},{{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L},{0x047279E6L,0x50AA8EC0L,0x0A831AF8L,0x047279E6L}}};
                int i, j, k;
                if (l_903[0])
                    break;
                l_923 = (safe_sub_func_int32_t_s_s(l_906.y, (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(((*l_462) , (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(p_1167->g_911.s8f3002aa)), ((VECTOR(uint8_t, 8))(p_1167->g_912.yxyyxyyy)), ((VECTOR(uint8_t, 2))(0UL, 0xC8L)).yyyyyyyy))).s0372077550565010)).sb , ((safe_div_func_uint8_t_u_u(((*l_917) &= 0xCBL), (((safe_rshift_func_int16_t_s_u((l_920 = (*l_462)), 2)) ^ l_921) , ((~0xB13BE0F7L) && ((void*)0 != &p_1167->g_142))))) && (((l_922 , p_1167->g_428.s6) , l_921) == p_1167->g_346.x)))), GROUP_DIVERGE(1, 1))) > p_1167->g_211), (*l_462)))));
                (*l_889) = (safe_add_func_int8_t_s_s(l_906.y, p_1167->g_826.s1));
                ++l_935;
            }
        }
        (*l_892) = (safe_mod_func_uint8_t_u_u((((((*l_462) = (((*l_462) > (GROUP_DIVERGE(0, 1) >= (0x0D10L != ((((safe_unary_minus_func_uint16_t_u(1UL)) == (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(l_945.wwywzyxz)).s34, ((VECTOR(uint16_t, 2))(l_946.yy))))).xyxxyxxx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))((&p_1167->g_774 != (void*)0), ((VECTOR(uint16_t, 2))(p_1167->g_947.xx)), 0xD845L)))).wwwwwwxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_948.sc0)).yyyyyxyyyyyxyyxx)).hi, ((VECTOR(uint16_t, 4))(l_949.s3065)).ywyzwwzx))).s5715041456652230)).odd))).s1, (l_950 != ((*l_951) = &p_1167->g_761[0][6]))))) > (p_1167->g_428.s3 ^= (safe_div_func_int8_t_s_s(((*l_462) & (l_958 &= (((p_1167->g_955 == l_956) ^ (*l_462)) , (*p_1167->g_144)))), (*l_889))))) && (*l_462))))) != (*l_462))) && 1L) < 0x32A2BAA5L) > p_1167->g_811.s5), l_960));
    }
    if ((*l_462))
    { /* block id: 354 */
        uint64_t l_974 = 0x9BF8E0A188E254D2L;
        int32_t *l_981 = &p_1167->g_463;
        int32_t *l_982 = &l_464;
        int32_t *l_983 = &l_464;
        int32_t *l_984 = &p_1167->g_106;
        int32_t *l_985 = &l_464;
        int32_t *l_986 = &p_1167->g_450;
        int32_t *l_987 = &p_1167->g_450;
        int32_t *l_988 = &l_885;
        int32_t *l_989 = (void*)0;
        int32_t *l_990 = (void*)0;
        int32_t *l_991[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_992 = 0x661D1A84L;
        int i;
        for (p_1167->g_83 = 3; (p_1167->g_83 < 26); p_1167->g_83 = safe_add_func_int8_t_s_s(p_1167->g_83, 7))
        { /* block id: 357 */
            uint64_t l_969 = 0xB8C6117A7C07D613L;
            uint32_t **l_973 = (void*)0;
            uint32_t *l_975 = (void*)0;
            uint32_t *l_976 = &l_4;
            int32_t *l_977 = &l_464;
            (*l_977) &= (((*l_976) ^= (safe_mul_func_uint8_t_u_u(250UL, (safe_mod_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(l_969, ((VECTOR(int8_t, 2))(0x69L, (-2L))).odd)) && ((safe_add_func_uint32_t_u_u((&p_1167->g_762 == (void*)0), (GROUP_DIVERGE(2, 1) >= (0L && p_1167->g_530.s4)))) >= ((l_969 >= ((((*l_462) , p_1167->g_972[0]) == l_973) | 0x25D8809C0CEB858FL)) , l_974))) , 255UL), p_1167->g_685.w))))) <= l_969);
            (*l_977) = 0x17E85E49L;
        }
        (*l_462) = ((*l_462) && GROUP_DIVERGE(1, 1));
        (*l_462) = (safe_add_func_int32_t_s_s(l_980[0], (&p_1167->g_214 != (void*)0)));
        l_993++;
    }
    else
    { /* block id: 365 */
        int64_t **l_1004 = &l_1003;
        uint16_t *l_1005 = (void*)0;
        int8_t l_1006 = 1L;
        int32_t *l_1011 = (void*)0;
        uint8_t *l_1034 = &l_958;
        VECTOR(int8_t, 2) l_1043 = (VECTOR(int8_t, 2))(0x5AL, 0x32L);
        VECTOR(int8_t, 2) l_1044 = (VECTOR(int8_t, 2))(0L, 0L);
        int32_t l_1056 = 0x490B3B7BL;
        uint8_t l_1081 = 0xDFL;
        VECTOR(int64_t, 8) l_1082 = (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x233670C9F2BACB98L), 0x233670C9F2BACB98L), 0x233670C9F2BACB98L, (-9L), 0x233670C9F2BACB98L);
        uint8_t l_1087 = 255UL;
        int32_t *l_1092 = &p_1167->g_463;
        VECTOR(uint8_t, 4) l_1095 = (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 4UL), 4UL);
        int32_t l_1112[2];
        int32_t l_1159[1];
        uint8_t l_1160 = 6UL;
        int i;
        for (i = 0; i < 2; i++)
            l_1112[i] = 0x08D78B7FL;
        for (i = 0; i < 1; i++)
            l_1159[i] = 0x561299FBL;
        if ((l_996 || ((((((*l_462) | p_1167->g_947.x) ^ ((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((safe_mod_func_int32_t_s_s(((safe_div_func_int64_t_s_s(((l_857 == ((*l_1004) = l_1003)) == (+((l_1005 == &l_758) , (l_1006 < ((0x98L != p_1167->g_947.x) , p_1167->g_616))))), (*l_462))) || 65534UL), l_1006)) && l_1006), 7UL, 255UL, 9UL, ((VECTOR(uint8_t, 8))(0x56L)), ((VECTOR(uint8_t, 2))(1UL)), 251UL, 1UL)).s1411)).y, 0)) , 0x035FFF4BL)) || 0xE7862BC84C1627A3L) == (*l_462)) && 1L)))
        { /* block id: 367 */
            int32_t *l_1009 = (void*)0;
            uint8_t *l_1024 = &p_1167->g_154;
            VECTOR(uint16_t, 2) l_1025 = (VECTOR(uint16_t, 2))(3UL, 0UL);
            VECTOR(int8_t, 4) l_1040 = (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x01L), 0x01L);
            int32_t **l_1059 = (void*)0;
            int32_t **l_1060 = &l_1009;
            int32_t **l_1061 = &p_1167->g_502;
            int32_t *l_1088 = &l_464;
            int i;
            for (l_464 = (-17); (l_464 == 21); ++l_464)
            { /* block id: 370 */
                int32_t **l_1010[5] = {&p_1167->g_493,&p_1167->g_493,&p_1167->g_493,&p_1167->g_493,&p_1167->g_493};
                uint16_t *l_1026 = (void*)0;
                uint16_t *l_1027[9][10][2] = {{{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758}},{{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758}},{{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758}},{{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758}},{{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758}},{{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758}},{{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758}},{{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758}},{{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758},{&l_758,&l_758}}};
                int8_t l_1028 = 4L;
                uint8_t **l_1029 = &l_1024;
                uint8_t *l_1031 = &l_958;
                uint8_t **l_1030 = &l_1031;
                uint8_t *l_1033 = &p_1167->g_296;
                uint8_t **l_1032[1][7][5];
                int8_t *l_1042 = &p_1167->g_804[4];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_1032[i][j][k] = &l_1033;
                    }
                }
                l_1011 = ((*p_1167->g_834) = l_1009);
                for (l_993 = 0; (l_993 == 33); l_993 = safe_add_func_int64_t_s_s(l_993, 8))
                { /* block id: 375 */
                    uint32_t l_1019 = 2UL;
                    if ((atomic_inc(&p_1167->l_atomic_input[15]) == 0))
                    { /* block id: 377 */
                        VECTOR(uint8_t, 4) l_1014 = (VECTOR(uint8_t, 4))(0x52L, (VECTOR(uint8_t, 2))(0x52L, 250UL), 250UL);
                        int32_t *l_1015 = (void*)0;
                        VECTOR(int32_t, 16) l_1016 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7A0C06BDL), 0x7A0C06BDL), 0x7A0C06BDL, 1L, 0x7A0C06BDL, (VECTOR(int32_t, 2))(1L, 0x7A0C06BDL), (VECTOR(int32_t, 2))(1L, 0x7A0C06BDL), 1L, 0x7A0C06BDL, 1L, 0x7A0C06BDL);
                        VECTOR(int32_t, 16) l_1017 = (VECTOR(int32_t, 16))(0x1C4D7BBCL, (VECTOR(int32_t, 4))(0x1C4D7BBCL, (VECTOR(int32_t, 2))(0x1C4D7BBCL, (-1L)), (-1L)), (-1L), 0x1C4D7BBCL, (-1L), (VECTOR(int32_t, 2))(0x1C4D7BBCL, (-1L)), (VECTOR(int32_t, 2))(0x1C4D7BBCL, (-1L)), 0x1C4D7BBCL, (-1L), 0x1C4D7BBCL, (-1L));
                        uint32_t l_1018 = 7UL;
                        int i;
                        l_1015 = (l_1014.x , (void*)0);
                        l_1018 = ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(l_1016.s9aa5)).xxxyxwxyzwxxyyzy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x6EE552E1L, 6L, 1L, 0x5E4C1D98L)).lo)), (-1L), (-2L))).xzzxxzwxzwzwwyww, ((VECTOR(int32_t, 4))(l_1017.scf37)).ywzyywzyyyxzyzzz))).s0;
                        unsigned int result = 0;
                        result += l_1014.w;
                        result += l_1014.z;
                        result += l_1014.y;
                        result += l_1014.x;
                        result += l_1016.sf;
                        result += l_1016.se;
                        result += l_1016.sd;
                        result += l_1016.sc;
                        result += l_1016.sb;
                        result += l_1016.sa;
                        result += l_1016.s9;
                        result += l_1016.s8;
                        result += l_1016.s7;
                        result += l_1016.s6;
                        result += l_1016.s5;
                        result += l_1016.s4;
                        result += l_1016.s3;
                        result += l_1016.s2;
                        result += l_1016.s1;
                        result += l_1016.s0;
                        result += l_1017.sf;
                        result += l_1017.se;
                        result += l_1017.sd;
                        result += l_1017.sc;
                        result += l_1017.sb;
                        result += l_1017.sa;
                        result += l_1017.s9;
                        result += l_1017.s8;
                        result += l_1017.s7;
                        result += l_1017.s6;
                        result += l_1017.s5;
                        result += l_1017.s4;
                        result += l_1017.s3;
                        result += l_1017.s2;
                        result += l_1017.s1;
                        result += l_1017.s0;
                        result += l_1018;
                        atomic_add(&p_1167->l_special_values[15], result);
                    }
                    else
                    { /* block id: 380 */
                        (1 + 1);
                    }
                    l_1009 = &l_464;
                    return l_1019;
                }
                l_1056 &= (safe_lshift_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((FAKE_DIVERGE(p_1167->global_2_offset, get_global_id(2), 10) , (p_1167->g_530.s4 >= (+(l_1024 == l_1024)))) , 0x3821L), (l_1028 = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_1025.yxyy)))).z))) , ((((*l_1029) = (void*)0) != (l_1034 = ((*l_1030) = &p_1167->g_154))) <= (0x0A5DL | ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(0x79L, 1L)).xyyx, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(p_1167->g_1037.saa14)).xxwyxxwz, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x2AL, 0x54L, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(0x39L, 7L)).xyxy, ((VECTOR(int8_t, 8))(0x3FL, 0x36L, 0x71L, 0x5CL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_1167->g_1038.wxyy)))))).lo))), 1L, 0x3EL)).s27)).yyxyyyyx))).odd))).xwyxzzyw, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1167->g_1039.s71)), ((VECTOR(int8_t, 4))(l_1040.wxwz)), 8L, 0x1EL)), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(p_1167->g_1041.s1574)).even, ((VECTOR(int8_t, 2))(0x29L, 1L)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((*l_1042) = (*l_462)), ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_1043.yyxx)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_1044.xy)).xyxx))))))))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, (-4L))).yyxy)), ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(p_1167->g_1045.xyyy)).xzxzxxyzwwxyxyyz, ((VECTOR(int8_t, 2))(p_1167->g_1046.yx)).xyyyxyxyyxyxyxxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(l_1047.xzywwxyz)).s2622144075022711, ((VECTOR(int8_t, 16))(0x43L, ((*l_1042) = (((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(l_1043.x, 7)), FAKE_DIVERGE(p_1167->global_0_offset, get_global_id(0), 10))), GROUP_DIVERGE(1, 1))), (*l_462))) & 0x0DL) , 2L)), l_1025.y, ((VECTOR(int8_t, 2))(7L)), l_1006, ((VECTOR(int8_t, 8))(0x6AL)), 1L, 0x50L))))).even, ((VECTOR(int8_t, 8))(0x0FL))))).s1654660344454315))).s7f8a)).zwyyzxww)).s3460532777123710))).sbf, (int8_t)0x5EL))), (-10L))))).scc))).yxxyyxyy))).even, ((VECTOR(int8_t, 4))(8L))))).zwxwwwwy))))).s3, p_1167->g_828.s7)) | 65533UL)))) == 1UL), 3));
                (*l_462) = ((p_1167->g_766.s3 > ((*p_1167->g_144) & ((VECTOR(int32_t, 4))(p_1167->g_1057.s7454)).w)) || ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(p_1167->g_1058.s61)).yxyx, (uint8_t)FAKE_DIVERGE(p_1167->group_0_offset, get_group_id(0), 10)))).y);
            }
            (*p_1167->g_1062) = ((*l_1061) = ((*l_1060) = l_1009));
            (*l_1088) |= ((safe_rshift_func_uint16_t_u_u(((FAKE_DIVERGE(p_1167->global_2_offset, get_global_id(2), 10) | (l_1087 &= (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(3UL, ((VECTOR(uint16_t, 2))(p_1167->g_1067.s46)), 0UL)).z, (9UL | ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0UL, 0x2A1756F8147B315CL)), 0UL, 0x369190E0103218DCL, 0UL, (p_1167->g_277.s1 != (safe_add_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((-1L))), ((p_1167->g_1084 = (l_1075 , (safe_div_func_int8_t_s_s((((VECTOR(int8_t, 8))(p_1167->g_1078.s21515616)).s7 && (safe_lshift_func_uint8_t_u_u(((((*l_462) <= l_1081) <= (p_1167->g_811.s6 || ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x635018F51133CB80L, 0L, 0x18885D495973FC79L, 8L)), p_1167->g_32.se, ((VECTOR(int64_t, 2))(l_1082.s15)), (-8L))).s4)) <= l_1083), 3))), (*l_462))))) , (*l_462)))) > 8UL) , p_1167->g_125.z), p_1167->g_530.sf))), 0UL, 18446744073709551609UL)).s6, p_1167->g_1085)), FAKE_DIVERGE(p_1167->global_2_offset, get_global_id(2), 10), (*l_462), 18446744073709551615UL, p_1167->g_912.y, ((VECTOR(uint64_t, 2))(1UL)), 8UL, 0x6EE267329576C6C3L, ((VECTOR(uint64_t, 2))(0xEDA164B7B3FF932AL)), l_1086.x, 0x53CE06777D0F112DL, 18446744073709551614UL, 18446744073709551614UL, 3UL)).sc819)).zyzzxyxw, ((VECTOR(uint64_t, 8))(0x213FC6E05E5FFECEL))))).s2))))) < (*l_462)), p_1167->g_828.s1)) | p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))]);
            for (l_1006 = 0; (l_1006 == (-10)); l_1006 = safe_sub_func_int8_t_s_s(l_1006, 6))
            { /* block id: 403 */
                uint64_t l_1091 = 0xABC4058B6E03CBE0L;
                (*l_1088) = (p_1167->g_450 >= l_1091);
            }
        }
        else
        { /* block id: 406 */
            uint16_t *l_1096 = &p_1167->g_211;
            (*p_1167->g_834) = l_1092;
            (*l_462) = (((VECTOR(uint8_t, 16))(l_1095.zxwxwyyyzwwyzzzw)).s7 , (0L ^ ((*l_1096) = ((VECTOR(uint16_t, 4))(0xA12AL, 65527UL, 0x646BL, 65527UL)).x)));
        }
        for (p_1167->g_83 = 0; (p_1167->g_83 == 12); ++p_1167->g_83)
        { /* block id: 413 */
            int64_t ****l_1099 = &l_950;
            int32_t *l_1102 = &p_1167->g_463;
            int32_t *l_1103 = (void*)0;
            int32_t *l_1104 = &l_464;
            int32_t *l_1105 = (void*)0;
            int32_t *l_1106 = &l_885;
            int32_t *l_1107 = &p_1167->g_450;
            int32_t *l_1108 = &l_885;
            int32_t *l_1109 = (void*)0;
            int32_t *l_1110[3][7][4] = {{{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464}},{{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464}},{{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464},{&l_1083,&p_1167->g_106,&l_464,&l_464}}};
            int8_t l_1113 = 0x27L;
            uint32_t l_1115 = 0x83C585A6L;
            int i, j, k;
            (*l_1092) = (((*l_1099) = &l_1004) == (void*)0);
            for (l_920 = (-2); (l_920 <= (-19)); l_920 = safe_sub_func_uint32_t_u_u(l_920, 8))
            { /* block id: 418 */
                return (*l_1092);
            }
            l_1115++;
            for (l_758 = 0; (l_758 != 32); l_758 = safe_add_func_int16_t_s_s(l_758, 6))
            { /* block id: 424 */
                int32_t *l_1124 = &l_1114[6];
                int32_t l_1127 = 0x13DA80B5L;
                uint32_t *l_1138 = &p_1167->g_1139;
                VECTOR(uint16_t, 2) l_1150 = (VECTOR(uint16_t, 2))(65530UL, 0x3568L);
                int i;
                for (l_1083 = 0; (l_1083 != (-1)); l_1083 = safe_sub_func_int8_t_s_s(l_1083, 3))
                { /* block id: 427 */
                    int32_t l_1129 = (-1L);
                    int32_t l_1130 = 0x15457788L;
                    int32_t l_1132 = 1L;
                    uint8_t l_1133 = 0xE4L;
                    for (p_1167->g_463 = (-27); (p_1167->g_463 == (-15)); p_1167->g_463 = safe_add_func_int8_t_s_s(p_1167->g_463, 2))
                    { /* block id: 430 */
                        int32_t **l_1125 = &p_1167->g_502;
                        int32_t l_1126 = (-10L);
                        int32_t l_1128 = 0x00060B05L;
                        int32_t l_1131 = 0x02625E01L;
                        (*l_1125) = l_1124;
                        (*l_1125) = (*p_1167->g_834);
                        ++l_1133;
                    }
                }
                (*l_1107) ^= (l_1124 != (((*l_1138) ^= ((((****l_1099) = (*l_1092)) , (safe_sub_func_uint8_t_u_u(1UL, 0x0BL))) > 0xF487B17A38D0F072L)) , ((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(p_1167->g_1146.s1137)).xxzxyxyzzxxwzwyw, ((VECTOR(int32_t, 8))((!(*l_1124)), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(0x45C9L, ((VECTOR(int16_t, 4))(0x6987L, ((VECTOR(int16_t, 2))(p_1167->g_1147.s73)), (-1L))), 0x02F1L, 1L, (-9L))).s3062560157175352, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x3899L, (safe_lshift_func_uint8_t_u_s(((*l_1124) ^= (&p_1167->g_551 != (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_1150.xy)).yxxxxxxyyyxxyyxy)).lo)).s0 , &l_1075))), ((((safe_mod_func_int64_t_s_s((((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((*p_1167->g_144), 0x1F7B3272L)), p_1167->g_826.s6)) <= FAKE_DIVERGE(p_1167->global_2_offset, get_global_id(2), 10)), (*l_462))) | (*l_1092)) || (*l_1092)), (*l_1108))) | (*l_1102)) , 0xEA610368L) != 0x96352765L))), ((VECTOR(int16_t, 2))(0x3C55L)), 0x6561L, 0x7FBAL, 0L, 0x4AABL)).hi)), (int16_t)p_1167->g_1139))).xwwyzwxzzwxwyxyy, ((VECTOR(int16_t, 16))(3L))))).sc38c)), ((VECTOR(uint16_t, 4))(0UL))))), 1L, 0x6E875A31L, 0x2CB4E676L)).s6254503630127352))).s67)).odd, 0L)) & l_1159[0]) , (*l_1104)), (*l_1104))), (*l_462))) , l_1011)));
                ++l_1160;
                if ((*l_1108))
                    break;
            }
        }
    }
    l_1164--;
    (*p_1167->g_835) = (*p_1167->g_1062);
    return (*l_462);
}


/* ------------------------------------------ */
/* 
 * reads : p_1167->g_296 p_1167->g_809 p_1167->g_811 p_1167->g_812 p_1167->g_826 p_1167->g_827 p_1167->g_828 p_1167->g_167 p_1167->g_360 p_1167->g_502 p_1167->g_802 p_1167->g_834 p_1167->g_835 p_1167->g_211 p_1167->g_534
 * writes: p_1167->g_296 p_1167->g_463 p_1167->g_502 p_1167->g_211
 */
uint16_t  func_7(int64_t  p_8, int32_t  p_9, uint8_t  p_10, struct S0 * p_1167)
{ /* block id: 299 */
    VECTOR(int64_t, 16) l_810 = (VECTOR(int64_t, 16))(0x64691BB6C4B4F0CBL, (VECTOR(int64_t, 4))(0x64691BB6C4B4F0CBL, (VECTOR(int64_t, 2))(0x64691BB6C4B4F0CBL, 0x225232CD264A5F77L), 0x225232CD264A5F77L), 0x225232CD264A5F77L, 0x64691BB6C4B4F0CBL, 0x225232CD264A5F77L, (VECTOR(int64_t, 2))(0x64691BB6C4B4F0CBL, 0x225232CD264A5F77L), (VECTOR(int64_t, 2))(0x64691BB6C4B4F0CBL, 0x225232CD264A5F77L), 0x64691BB6C4B4F0CBL, 0x225232CD264A5F77L, 0x64691BB6C4B4F0CBL, 0x225232CD264A5F77L);
    VECTOR(int64_t, 16) l_813 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int64_t, 2))(0L, 1L), (VECTOR(int64_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    VECTOR(int64_t, 2) l_814 = (VECTOR(int64_t, 2))(0L, 8L);
    uint32_t ****l_817 = (void*)0;
    VECTOR(uint8_t, 2) l_829 = (VECTOR(uint8_t, 2))(0UL, 0x32L);
    int32_t *l_830 = (void*)0;
    int32_t l_832 = 0x22AB8B7FL;
    uint64_t l_833 = 0xA69DE8FCDD96A809L;
    int i;
    for (p_1167->g_296 = 0; (p_1167->g_296 != 40); ++p_1167->g_296)
    { /* block id: 302 */
        uint32_t *****l_818 = &l_817;
        VECTOR(uint8_t, 4) l_825 = (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 1UL), 1UL);
        uint32_t *l_831[6][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        int i, j;
        (*p_1167->g_502) = (((((-1L) < (((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))((-8L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_1167->g_809.s1303)), ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_810.se382)).odd)).yyyxxxxx, ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(p_1167->g_811.s5471173362267351)).lo)))).s27)), ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_1167->g_812.ywxxxwyyyxwwwywz)))).lo)).lo, ((VECTOR(int64_t, 16))(l_813.s9b8dabc4bb3568df)).s2180))).lo, ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(l_814.xxxyxxxy)), ((VECTOR(int64_t, 4))(((((l_832 = (safe_sub_func_uint32_t_u_u((((*l_818) = l_817) != &p_1167->g_104), (((safe_rshift_func_int8_t_s_u((0UL < (safe_mul_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(0xDDL, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(l_825.ww)), ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(p_1167->g_826.s7711544632130516)).s86ad, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(0UL, 255UL)).xyyyyxyxxyxyyxyx, ((VECTOR(uint8_t, 16))(p_1167->g_827.xxyyyxyxyxxxyxxy))))))).s5d9c))).wzwzxwyyzywxxwzy, ((VECTOR(uint8_t, 2))(p_1167->g_828.s05)).xyxyyxxxyyyxyyyx, ((VECTOR(uint8_t, 16))(l_829.yxyyxxyxyyxyyxxy))))))).sc174, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0xA9L, ((VECTOR(uint8_t, 2))(1UL, 1UL)), 0x9EL)).w, ((VECTOR(uint8_t, 2))(0x3DL, 1UL)), 2UL)).zwzzzwwyywxwwwxy))).s16)).yxyxyxyxxyyxxyxx)).s9878, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(248UL, 0x64L)).yxyyyxyyxyyxyyyy)).sf851))))).lo))).hi)) ^ (((p_8 || (l_830 != (void*)0)) & 7UL) && 0xF3DEL)) , p_1167->g_828.s3), p_1167->g_167.w))), 4)) ^ 0xAB3CL) & 4294967295UL)))) , p_10) , l_833) ^ 0x114AB4557DCD9BF7L), ((VECTOR(int64_t, 2))(6L)), (-6L))).ywwwzzxw))).s57))).yxxyyyyy))).hi, ((VECTOR(int64_t, 4))(0x1D9D4B8B294BD9D0L))))))).s6722201247163164)).s0a)).xyxy)), 0x6DA79DB3FE5F6BF4L, p_1167->g_811.s5, 0x2AF694EE32CC1399L, ((VECTOR(int64_t, 2))(0x5BC4CD99776EE235L)), ((VECTOR(int64_t, 2))(0L)), p_9, 0x386A7097DD84289AL, 0x4997888A096F2A59L, 0x57BE231CE7230FBCL)).s0908, ((VECTOR(int64_t, 4))((-1L))), ((VECTOR(int64_t, 4))(0x69811E1AB662DD60L))))).w >= p_9)) , p_1167->g_360.s1) | GROUP_DIVERGE(0, 1)) | 255UL);
        (*p_1167->g_834) = (*p_1167->g_802);
        (*p_1167->g_835) = (*p_1167->g_834);
    }
    for (p_1167->g_296 = 5; (p_1167->g_296 > 18); p_1167->g_296 = safe_add_func_uint8_t_u_u(p_1167->g_296, 5))
    { /* block id: 311 */
        int32_t **l_838 = &p_1167->g_502;
        (*l_838) = &l_832;
        for (p_1167->g_211 = 0; (p_1167->g_211 <= 54); ++p_1167->g_211)
        { /* block id: 315 */
            uint64_t l_841 = 0UL;
            return l_841;
        }
        return p_9;
    }
    return p_1167->g_534[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1167->g_502 p_1167->g_766 p_1167->g_501 p_1167->g_463 p_1167->g_774 p_1167->g_776 p_1167->g_802
 * writes: p_1167->g_463 p_1167->g_761 p_1167->g_774 p_1167->g_106 p_1167->g_502
 */
uint32_t  func_11(int32_t  p_12, uint8_t  p_13, uint32_t  p_14, uint64_t  p_15, uint64_t  p_16, struct S0 * p_1167)
{ /* block id: 277 */
    int64_t **l_759 = (void*)0;
    int64_t ***l_760[1][5][8] = {{{&l_759,(void*)0,&l_759,&l_759,&l_759,(void*)0,&l_759,&l_759},{&l_759,(void*)0,&l_759,&l_759,&l_759,(void*)0,&l_759,&l_759},{&l_759,(void*)0,&l_759,&l_759,&l_759,(void*)0,&l_759,&l_759},{&l_759,(void*)0,&l_759,&l_759,&l_759,(void*)0,&l_759,&l_759},{&l_759,(void*)0,&l_759,&l_759,&l_759,(void*)0,&l_759,&l_759}}};
    int32_t l_765 = 2L;
    uint32_t *l_769[2][3] = {{(void*)0,&p_1167->g_83,(void*)0},{(void*)0,&p_1167->g_83,(void*)0}};
    VECTOR(int32_t, 4) l_770 = (VECTOR(int32_t, 4))(0x4B43F6F5L, (VECTOR(int32_t, 2))(0x4B43F6F5L, 0x6B227AF9L), 0x6B227AF9L);
    VECTOR(int32_t, 16) l_771 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
    int i, j, k;
    (*p_1167->g_502) = 0x2D8B816EL;
    p_1167->g_761[0][6] = l_759;
    if ((safe_mod_func_uint8_t_u_u(p_14, l_765)))
    { /* block id: 280 */
        int64_t **l_775 = &p_1167->g_774;
        int32_t *l_777 = (void*)0;
        int32_t *l_778 = &p_1167->g_106;
        (*l_778) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(0x42CBE109L, 0x0AB62FBBL)).yxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_1167->g_766.s3064217277015123)).hi)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x06997924L, 0x4C937013L)).yyyx)).ywyzyyyx))))).hi))).hi, (int32_t)(**p_1167->g_501)))))).yyyyyxyxyxxyxyyy, (int32_t)((*p_1167->g_502) = (p_12 , (safe_add_func_uint32_t_u_u(((void*)0 != l_769[0][1]), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_770.zz)), 0L, 1L)))).w))))))).s9, 0x5F31DE53L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_771.scab1e21c8f27e140)).hi)), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))((!(+(safe_sub_func_uint64_t_u_u(18446744073709551613UL, (((*l_775) = p_1167->g_774) != &p_1167->g_214))))), (*p_1167->g_502), 0x2D51B03AL, 0x51097FF6L)), ((VECTOR(int32_t, 4))(p_1167->g_776.s1545))))), 0L, 0L)).sa;
        if ((atomic_inc(&p_1167->g_atomic_input[20 * get_linear_group_id() + 10]) == 3))
        { /* block id: 285 */
            int32_t l_780 = 8L;
            int32_t *l_779 = &l_780;
            int32_t *l_781 = &l_780;
            int32_t l_782 = (-1L);
            uint16_t l_783 = 0x4511L;
            VECTOR(int32_t, 8) l_784 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-4L)), (-4L)), (-4L), 2L, (-4L));
            uint8_t l_785 = 0xC5L;
            VECTOR(int16_t, 4) l_786 = (VECTOR(int16_t, 4))(0x1E55L, (VECTOR(int16_t, 2))(0x1E55L, (-1L)), (-1L));
            VECTOR(int32_t, 8) l_787 = (VECTOR(int32_t, 8))(0x16ACD15BL, (VECTOR(int32_t, 4))(0x16ACD15BL, (VECTOR(int32_t, 2))(0x16ACD15BL, 1L), 1L), 1L, 0x16ACD15BL, 1L);
            VECTOR(int32_t, 2) l_788 = (VECTOR(int32_t, 2))(0x1FD89123L, 0x1DCEC130L);
            uint32_t l_789 = 4294967295UL;
            VECTOR(int32_t, 8) l_790 = (VECTOR(int32_t, 8))(0x76A1A32EL, (VECTOR(int32_t, 4))(0x76A1A32EL, (VECTOR(int32_t, 2))(0x76A1A32EL, 1L), 1L), 1L, 0x76A1A32EL, 1L);
            int64_t l_791 = 0x1EF31A93440D6258L;
            uint64_t l_792 = 0xB043240ABCC96105L;
            VECTOR(int16_t, 16) l_793 = (VECTOR(int16_t, 16))(0x7B36L, (VECTOR(int16_t, 4))(0x7B36L, (VECTOR(int16_t, 2))(0x7B36L, (-1L)), (-1L)), (-1L), 0x7B36L, (-1L), (VECTOR(int16_t, 2))(0x7B36L, (-1L)), (VECTOR(int16_t, 2))(0x7B36L, (-1L)), 0x7B36L, (-1L), 0x7B36L, (-1L));
            uint32_t l_794 = 0xE46E4C46L;
            uint32_t l_795 = 0xC266197FL;
            int8_t l_796 = 0x7DL;
            uint32_t l_797[3];
            int8_t l_798 = 0L;
            int8_t l_799 = 0x2CL;
            int8_t l_800 = 0x18L;
            int i;
            for (i = 0; i < 3; i++)
                l_797[i] = 0xB0779484L;
            l_781 = l_779;
            l_783 = l_782;
            l_800 ^= (l_799 = ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_784.s77534452)).s76, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))((-3L), l_785, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_786.zz)))), ((VECTOR(int16_t, 8))(0L, (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_787.s71)).hi, 0x0EEAC03DL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_788.xyxxxxyy)).odd)), ((VECTOR(int32_t, 4))(0x6360D496L, (l_789 = 0x29502310L), 0x6EF7AED2L, 0x37D40BF2L)), (-2L), ((VECTOR(int32_t, 2))(l_790.s40)).lo, l_791, 1L, (-1L), (-3L))).sa, 0L, 0x41BF73F8L, 0x5CC0A803L)).zxyzxyxyyyzwxzxz)).sd , l_792), 0x5666L, ((VECTOR(int16_t, 4))(l_793.sbd46)), (-1L))).s3, l_794, (-5L), (-1L), 0x0072L, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_795, l_796, 0x0186L, 0L)).odd)).yxyxxyxx, (int16_t)(l_797[1] , l_798)))).s75)).yxyx)).hi)), ((VECTOR(int16_t, 2))(1L))))).yxyyxyxyxyxyyyxx, ((VECTOR(int16_t, 16))(5L))))).s73, ((VECTOR(int16_t, 2))(0x7593L))))), 0x5519L, 0x51F4L, (-5L), 0x1291L, 4L)), ((VECTOR(uint16_t, 16))(0x9B9AL))))).s6f6f)).hi))).yyyyyxyyyxxxyyyy, ((VECTOR(int32_t, 16))(0x6648DA1DL)), ((VECTOR(int32_t, 16))((-1L)))))).s4);
            unsigned int result = 0;
            result += l_780;
            result += l_782;
            result += l_783;
            result += l_784.s7;
            result += l_784.s6;
            result += l_784.s5;
            result += l_784.s4;
            result += l_784.s3;
            result += l_784.s2;
            result += l_784.s1;
            result += l_784.s0;
            result += l_785;
            result += l_786.w;
            result += l_786.z;
            result += l_786.y;
            result += l_786.x;
            result += l_787.s7;
            result += l_787.s6;
            result += l_787.s5;
            result += l_787.s4;
            result += l_787.s3;
            result += l_787.s2;
            result += l_787.s1;
            result += l_787.s0;
            result += l_788.y;
            result += l_788.x;
            result += l_789;
            result += l_790.s7;
            result += l_790.s6;
            result += l_790.s5;
            result += l_790.s4;
            result += l_790.s3;
            result += l_790.s2;
            result += l_790.s1;
            result += l_790.s0;
            result += l_791;
            result += l_792;
            result += l_793.sf;
            result += l_793.se;
            result += l_793.sd;
            result += l_793.sc;
            result += l_793.sb;
            result += l_793.sa;
            result += l_793.s9;
            result += l_793.s8;
            result += l_793.s7;
            result += l_793.s6;
            result += l_793.s5;
            result += l_793.s4;
            result += l_793.s3;
            result += l_793.s2;
            result += l_793.s1;
            result += l_793.s0;
            result += l_794;
            result += l_795;
            result += l_796;
            int l_797_i0;
            for (l_797_i0 = 0; l_797_i0 < 3; l_797_i0++) {
                result += l_797[l_797_i0];
            }
            result += l_798;
            result += l_799;
            result += l_800;
            atomic_add(&p_1167->g_special_values[20 * get_linear_group_id() + 10], result);
        }
        else
        { /* block id: 291 */
            (1 + 1);
        }
        (*p_1167->g_802) = (*p_1167->g_501);
    }
    else
    { /* block id: 295 */
        uint64_t l_803 = 18446744073709551608UL;
        return l_803;
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_1167->g_474 p_1167->g_463 p_1167->g_376 p_1167->g_380
 * writes: p_1167->g_463 p_1167->g_376
 */
uint8_t  func_24(uint32_t  p_25, int32_t  p_26, int64_t  p_27, uint32_t  p_28, int16_t  p_29, struct S0 * p_1167)
{ /* block id: 136 */
    int32_t *l_465 = &p_1167->g_106;
    int32_t *l_466 = &p_1167->g_463;
    int32_t *l_467 = &p_1167->g_106;
    int32_t *l_468[2];
    int8_t l_469 = 5L;
    int32_t l_470 = 2L;
    uint32_t l_471[3][6][1] = {{{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL}},{{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL}},{{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL},{0xA9F2C88CL}}};
    int64_t *l_500 = (void*)0;
    uint32_t ***l_506 = (void*)0;
    uint8_t *l_565 = &p_1167->g_154;
    uint32_t *l_580[3];
    uint16_t l_601 = 0x7E17L;
    int16_t *l_632 = &p_1167->g_121[1];
    uint8_t l_655[7];
    uint64_t l_686[9][4] = {{1UL,18446744073709551611UL,1UL,1UL},{1UL,18446744073709551611UL,1UL,1UL},{1UL,18446744073709551611UL,1UL,1UL},{1UL,18446744073709551611UL,1UL,1UL},{1UL,18446744073709551611UL,1UL,1UL},{1UL,18446744073709551611UL,1UL,1UL},{1UL,18446744073709551611UL,1UL,1UL},{1UL,18446744073709551611UL,1UL,1UL},{1UL,18446744073709551611UL,1UL,1UL}};
    VECTOR(int8_t, 16) l_692 = (VECTOR(int8_t, 16))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x3BL), 0x3BL), 0x3BL, 0x70L, 0x3BL, (VECTOR(int8_t, 2))(0x70L, 0x3BL), (VECTOR(int8_t, 2))(0x70L, 0x3BL), 0x70L, 0x3BL, 0x70L, 0x3BL);
    VECTOR(int8_t, 2) l_693 = (VECTOR(int8_t, 2))(0x5AL, 0x37L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_468[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_580[i] = &p_1167->g_83;
    for (i = 0; i < 7; i++)
        l_655[i] = 0x3AL;
    --l_471[2][5][0];
    (*l_466) &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1167->g_474.ww)).yyxxxyxxxyxyxxxy)).s8;
    for (p_1167->g_376 = 6; (p_1167->g_376 >= 8); ++p_1167->g_376)
    { /* block id: 141 */
        uint32_t l_477 = 2UL;
        int32_t l_481 = (-1L);
        int16_t l_483 = 0x0534L;
        int32_t l_485 = (-1L);
        uint8_t l_511 = 0x9AL;
        int32_t **l_548 = &l_468[1];
        int64_t *l_578 = &p_1167->g_534[0];
        int64_t **l_579 = &l_578;
        VECTOR(int32_t, 8) l_582 = (VECTOR(int32_t, 8))(0x4AB965D9L, (VECTOR(int32_t, 4))(0x4AB965D9L, (VECTOR(int32_t, 2))(0x4AB965D9L, (-1L)), (-1L)), (-1L), 0x4AB965D9L, (-1L));
        VECTOR(int8_t, 16) l_600 = (VECTOR(int8_t, 16))(0x0AL, (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, 9L), 9L), 9L, 0x0AL, 9L, (VECTOR(int8_t, 2))(0x0AL, 9L), (VECTOR(int8_t, 2))(0x0AL, 9L), 0x0AL, 9L, 0x0AL, 9L);
        uint64_t *l_606 = (void*)0;
        VECTOR(int32_t, 8) l_631 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        int8_t *l_634 = (void*)0;
        int8_t l_644 = 0L;
        int64_t l_654 = 0x69E0903E0F9E5AB4L;
        int64_t *l_701 = &p_1167->g_534[0];
        uint32_t ***l_745 = (void*)0;
        int i;
        --l_477;
    }
    return p_1167->g_380;
}


/* ------------------------------------------ */
/* 
 * reads : p_1167->g_21 p_1167->l_comm_values p_1167->g_32 p_1167->g_83 p_1167->g_103 p_1167->g_104 p_1167->g_117 p_1167->g_121 p_1167->g_125 p_1167->g_131 p_1167->g_106 p_1167->g_142 p_1167->g_154 p_1167->g_155 p_1167->g_167 p_1167->g_144 p_1167->g_193 p_1167->g_194 p_1167->g_195 p_1167->g_276 p_1167->g_277 p_1167->g_211 p_1167->g_296 p_1167->g_143 p_1167->g_214 p_1167->g_329 p_1167->g_335 p_1167->g_346 p_1167->g_360 p_1167->g_389 p_1167->g_399 p_1167->g_401 p_1167->g_428 p_1167->g_450
 * writes: p_1167->g_83 p_1167->g_103 p_1167->g_121 p_1167->g_143 p_1167->g_155 p_1167->g_211 p_1167->g_125 p_1167->g_296 p_1167->g_131 p_1167->g_194 p_1167->g_167 p_1167->g_376 p_1167->g_380 p_1167->g_106 p_1167->g_154 p_1167->g_428 p_1167->g_445 p_1167->g_450
 */
uint32_t  func_33(int32_t  p_34, int16_t  p_35, int64_t  p_36, struct S0 * p_1167)
{ /* block id: 5 */
    uint64_t l_48 = 18446744073709551615UL;
    int64_t *l_358 = (void*)0;
    int64_t *l_359[4][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_451 = &p_1167->g_106;
    int32_t *l_452 = &p_1167->g_106;
    int32_t *l_453 = &p_1167->g_106;
    int32_t *l_454 = &p_1167->g_450;
    int32_t *l_455 = &p_1167->g_450;
    int32_t *l_456[6];
    int32_t l_457 = 1L;
    int16_t l_458 = (-1L);
    uint8_t l_459 = 0x1EL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_456[i] = &p_1167->g_450;
    atomic_max(&p_1167->g_atomic_reduction[get_linear_group_id()], (func_38(((safe_add_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), func_42((safe_mul_func_int8_t_s_s((l_48 >= (p_1167->g_167.y = (safe_sub_func_uint8_t_u_u(((func_51(p_1167->g_21.x, p_1167) , l_48) != (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(func_57(p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))], p_1167->g_21.z, func_51(func_51(p_1167->g_32.s1, p_1167), p_1167), p_1167), p_1167->g_21.w)), p_1167->g_21.w))), 249UL)))), 1UL)), p_35, p_35, p_1167))) >= p_36), p_1167) , l_48));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1167->v_collective += p_1167->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    --l_459;
    return (*l_451);
}


/* ------------------------------------------ */
/* 
 * reads : p_1167->g_346 p_1167->g_389 p_1167->g_399 p_1167->g_401 p_1167->g_296 p_1167->g_154 p_1167->g_428 p_1167->g_276 p_1167->g_155 p_1167->g_121 p_1167->g_106 p_1167->g_194 p_1167->g_450
 * writes: p_1167->g_380 p_1167->g_296 p_1167->g_154 p_1167->g_428 p_1167->g_445 p_1167->g_450
 */
int32_t  func_38(uint32_t  p_39, struct S0 * p_1167)
{ /* block id: 120 */
    VECTOR(uint8_t, 2) l_387 = (VECTOR(uint8_t, 2))(255UL, 0x71L);
    uint32_t ***l_388 = &p_1167->g_143[8][4];
    VECTOR(int8_t, 8) l_397 = (VECTOR(int8_t, 8))(0x01L, (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, 0L), 0L), 0L, 0x01L, 0L);
    VECTOR(int8_t, 4) l_398 = (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x47L), 0x47L);
    VECTOR(int8_t, 4) l_400 = (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0x67L), 0x67L);
    uint64_t *l_402 = &p_1167->g_380;
    uint8_t *l_403 = &p_1167->g_296;
    uint16_t l_404[6] = {9UL,0x124FL,9UL,9UL,0x124FL,9UL};
    uint8_t *l_405 = &p_1167->g_154;
    uint8_t *l_406 = (void*)0;
    uint8_t *l_407 = (void*)0;
    int32_t l_408 = 0x6A7F5BDAL;
    int32_t *l_410 = &p_1167->g_106;
    int32_t **l_409 = &l_410;
    VECTOR(int8_t, 2) l_421 = (VECTOR(int8_t, 2))(1L, (-7L));
    VECTOR(int8_t, 8) l_422 = (VECTOR(int8_t, 8))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x60L), 0x60L), 0x60L, 0x6AL, 0x60L);
    VECTOR(int16_t, 4) l_425 = (VECTOR(int16_t, 4))(0x23FFL, (VECTOR(int16_t, 2))(0x23FFL, (-9L)), (-9L));
    int16_t *l_429 = &p_1167->g_121[3];
    VECTOR(int8_t, 16) l_430 = (VECTOR(int8_t, 16))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x54L), 0x54L), 0x54L, 0x7DL, 0x54L, (VECTOR(int8_t, 2))(0x7DL, 0x54L), (VECTOR(int8_t, 2))(0x7DL, 0x54L), 0x7DL, 0x54L, 0x7DL, 0x54L);
    uint8_t l_443 = 0x61L;
    int32_t *l_444 = &p_1167->g_445;
    uint16_t l_446 = 65528UL;
    int32_t l_447 = 4L;
    int32_t *l_448 = (void*)0;
    int32_t *l_449 = &p_1167->g_450;
    int i;
    (*l_409) = ((safe_lshift_func_uint8_t_u_u(((void*)0 != &p_1167->g_105[9][0][0]), (l_408 |= ((p_1167->g_346.x , (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (((VECTOR(uint8_t, 16))(l_387.yxxyxyyyxxxxxxyy)).s7 >= ((l_388 == p_1167->g_389) , ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(7L, (-7L))).xxxy, ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(((safe_mul_func_uint8_t_u_u(0x1EL, ((*l_405) ^= ((safe_mul_func_uint8_t_u_u((+((((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_397.s4045574561125325)).s57)).xyyyyxyxxyxxxxxy, ((VECTOR(int8_t, 8))(l_398.ywyzzxxy)).s5126506772025462))).sc > l_397.s0) , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(255UL, 0UL)).yyxxyxyyxyyxyyxx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0L, ((VECTOR(int8_t, 2))(p_1167->g_399.s13)), (-7L))), (!0x34L), ((VECTOR(int8_t, 4))(l_400.xzxz)), ((VECTOR(int8_t, 2))((-1L), 0x40L)), 4L, ((((*l_403) ^= ((((*l_402) = ((((VECTOR(uint64_t, 4))(p_1167->g_401.yyxy)).x , l_400.x) , p_1167->g_346.y)) && l_400.x) && 3UL)) <= l_404[2]) >= 0xF1C7AF99A29BC787L), 0x69L, (-7L), 0L)).s9fed))), 251UL, 0x67L, 0x76L, 0x93L)).s31, (uint8_t)0UL))).xyyyxxyx, ((VECTOR(uint8_t, 8))(1UL))))).s41)).yxyyyxyxyxyyyxyy))).odd)).s3)), 0UL)) < l_397.s4)))) , p_39), 0x00L, 0x22L, p_39, ((VECTOR(int8_t, 8))(0x44L)), 9L, 0x59L, 0L, 0L)).sd8f9, ((VECTOR(int8_t, 4))(0x04L))))), ((VECTOR(int8_t, 8))(0x0BL)), 0x30L, (-1L), (-2L))), ((VECTOR(int8_t, 16))(1L))))).sdac3, ((VECTOR(int8_t, 4))(0x78L))))).ywwzxzxw)).s26)).xyyy)).ywzxywxy, ((VECTOR(int8_t, 8))((-9L)))))).even)), 0x52L, ((VECTOR(int8_t, 2))(0L)), (-10L))).s5))))) >= p_39)))) , &l_408);
    (*l_449) |= (safe_mul_func_int16_t_s_s((((VECTOR(int32_t, 16))(((*l_410) = (((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_1167->global_1_offset, get_global_id(1), 10), ((0x2FC7L & ((((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(l_421.xy)).yxyyxyyxxyxxxxyy, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(l_422.s0140511655622405)).sea, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 4))((9L < ((((safe_mod_func_int64_t_s_s((((*l_444) = (((VECTOR(int16_t, 8))(l_425.zxzxzwzy)).s0 ^ (safe_sub_func_uint8_t_u_u(((((((void*)0 != l_402) & (((p_1167->g_428.s7 = ((VECTOR(uint16_t, 2))(p_1167->g_428.s01)).even) || ((void*)0 != l_429)) == ((VECTOR(int8_t, 8))(l_430.s930cd545)).s0)) , (safe_lshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((p_39 > ((((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 16))(8L, ((VECTOR(int64_t, 16))(0x0F221EA9CF86756DL, ((VECTOR(int64_t, 2))(0x493839C8A46B6158L, 0x7C7D4A7C8C4BF80EL)).lo, ((p_1167->g_276.s5 == (safe_rshift_func_int16_t_s_u(0x26D4L, 0))) , p_1167->g_346.y), ((VECTOR(int64_t, 2))(0x2F0759FAA1012297L)), 0x50ECF3C3E672F547L, 0x589CD05D5BD2C9E3L, 0L, 0x43E7DD1D5825A020L, ((VECTOR(int64_t, 2))(1L)), p_39, p_1167->g_155, ((VECTOR(int64_t, 2))(0x2A7F31075EBBC221L)), 0L)).s7, l_443, ((VECTOR(int64_t, 2))(0x0DC063CD9B7F3BC2L)), ((VECTOR(int64_t, 2))(0x7B4FC70B68E2DD50L)), p_39, 0L, 0x02096E233B75E06CL, p_1167->g_401.x, ((VECTOR(int64_t, 2))(0x7742094444A64181L)), 0x1F981BF154AF4FC4L, 0x49E12E63FC7476B6L, 0x2D82D26793EF58B4L)).lo, ((VECTOR(int64_t, 8))(5L))))), 1UL, ((VECTOR(uint64_t, 2))(0x8F1DE64543E6BE5AL)), 0x36013E840F34B9CBL, 0x9A3C59669BC36F4DL, ((VECTOR(uint64_t, 2))(18446744073709551613UL)), 0x3C1E7CEDBE4D6949L)).hi)).even)).even)))).xxyy, ((VECTOR(uint64_t, 4))(0xB5ED4C5B050016AEL))))), ((VECTOR(uint64_t, 4))(0xF8DE4300806881A4L))))).y != 0x277B8F7BCF4CF6B7L) == (**l_409))), FAKE_DIVERGE(p_1167->global_2_offset, get_global_id(2), 10))), (-1L))), p_1167->g_296)) != 0x12L), p_39))) == 0x7C3DL) & p_1167->g_121[3]), GROUP_DIVERGE(0, 1))))) , l_446), p_1167->g_106)) & p_39) <= 0x1FL) < l_447)), ((VECTOR(int8_t, 2))(0L)), 0x49L)), ((VECTOR(int8_t, 8))(0L)), (*l_410), 0L, 0x33L)).sc8bd, ((VECTOR(int8_t, 4))((-6L))), ((VECTOR(int8_t, 4))(0x7EL))))).yxzxwyxy, ((VECTOR(int8_t, 8))(0x01L))))).s32))).xxyyyxxyxxyxyxxy))).hi)).s16, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(1L))))).xyyxyyxxxyxyyxyx)).s62, ((VECTOR(int8_t, 2))(6L))))).xxxy)).even, ((VECTOR(int8_t, 2))((-7L)))))).hi, p_39)) , (**l_409)) != (*l_410)) > (**l_409))) != 0x1837F55FL))), FAKE_DIVERGE(p_1167->local_1_offset, get_local_id(1), 10))) & p_1167->g_194.s5) != p_39)), 0x67D5D557L, p_1167->g_399.s6, ((VECTOR(int32_t, 2))((-1L))), 0x7F4D46DBL, ((VECTOR(int32_t, 8))(0x3D95A018L)), 0x66E21AA1L, 1L)).s9 , p_39), 0L));
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_1167->g_32 p_1167->g_360 p_1167->g_131 p_1167->g_106
 * writes: p_1167->g_211 p_1167->g_376 p_1167->g_380 p_1167->g_106
 */
uint32_t  func_42(uint32_t  p_43, int8_t  p_44, int32_t  p_45, struct S0 * p_1167)
{ /* block id: 114 */
    VECTOR(int32_t, 2) l_361 = (VECTOR(int32_t, 2))((-3L), 0x44BF9AE4L);
    VECTOR(int32_t, 16) l_362 = (VECTOR(int32_t, 16))(0x43CB3CFCL, (VECTOR(int32_t, 4))(0x43CB3CFCL, (VECTOR(int32_t, 2))(0x43CB3CFCL, 0x0D02E0EDL), 0x0D02E0EDL), 0x0D02E0EDL, 0x43CB3CFCL, 0x0D02E0EDL, (VECTOR(int32_t, 2))(0x43CB3CFCL, 0x0D02E0EDL), (VECTOR(int32_t, 2))(0x43CB3CFCL, 0x0D02E0EDL), 0x43CB3CFCL, 0x0D02E0EDL, 0x43CB3CFCL, 0x0D02E0EDL);
    int16_t l_371[3][10][2] = {{{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL}},{{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL}},{{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL},{0x5415L,0x33DDL}}};
    VECTOR(uint16_t, 8) l_374 = (VECTOR(uint16_t, 8))(0x67C8L, (VECTOR(uint16_t, 4))(0x67C8L, (VECTOR(uint16_t, 2))(0x67C8L, 0x94FBL), 0x94FBL), 0x94FBL, 0x67C8L, 0x94FBL);
    uint16_t *l_375[8][3][6] = {{{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0}},{{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0}},{{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0}},{{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0}},{{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0}},{{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0}},{{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0}},{{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0},{&p_1167->g_211,(void*)0,&p_1167->g_211,&p_1167->g_211,&p_1167->g_211,(void*)0}}};
    VECTOR(int32_t, 16) l_377 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x439047FEL), 0x439047FEL), 0x439047FEL, (-7L), 0x439047FEL, (VECTOR(int32_t, 2))((-7L), 0x439047FEL), (VECTOR(int32_t, 2))((-7L), 0x439047FEL), (-7L), 0x439047FEL, (-7L), 0x439047FEL);
    int32_t *l_379 = &p_1167->g_106;
    int32_t **l_378[9] = {&l_379,&l_379,&l_379,&l_379,&l_379,&l_379,&l_379,&l_379,&l_379};
    uint32_t **l_381 = &p_1167->g_144;
    int32_t l_382 = 0x1FBD90A1L;
    int i, j, k;
    (*l_379) = (((p_1167->g_32.s7 == (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xEDF8F5ADL, 0xCCC3086EL)).yyyxyxxyyyxxxyxx)).odd)).s4 == (p_43 && ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(p_1167->g_360.s0331)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_361.yxyyxyxxxxyxxyyy)), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-5L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_362.s63)))), 9L, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))((-7L), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x173A68B1L, (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(p_43, ((((safe_mul_func_uint8_t_u_u((((VECTOR(uint64_t, 4))(l_371[0][4][1], ((VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL)), 18446744073709551613UL)).x && 0x50A84256A8B4741AL), (safe_mul_func_int16_t_s_s((((p_1167->g_376 = (p_1167->g_211 = (~((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 2))(0UL, 0x4E8CL)).xyxxxyxxxyxxxxxx, ((VECTOR(uint16_t, 16))(l_374.s5741342437126542))))).s4))) ^ 4UL) >= ((VECTOR(int32_t, 4))(l_377.sd123)).y), (p_1167->g_380 = (l_378[3] != &l_379)))))) , l_381) == (void*)0) <= p_44))) | p_44), p_1167->g_131.s7)) , p_44), (*l_379))), p_43, p_45, ((VECTOR(int32_t, 4))(0x658260C0L)))).s5126474754710067)).s43, ((VECTOR(int32_t, 2))(0x6A2E7BC6L))))), 0x2C7CA74CL)), ((VECTOR(int32_t, 4))(1L))))), p_43, ((VECTOR(int32_t, 4))(1L)), p_45, 0x1BFF1746L, 0L)).odd)).s5077406700733615, ((VECTOR(int32_t, 16))(0x1BA59BFBL)), ((VECTOR(int32_t, 16))(0L)))))))).s84)), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x32C5F92DL))))).yyxy, ((VECTOR(int32_t, 4))(1L))))).zwyxxwyxxzwwzwxw)).sf8))).lo))) || 0x44L) | (*l_379));
    return l_382;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_51(uint32_t  p_52, struct S0 * p_1167)
{ /* block id: 6 */
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1167->g_21 p_1167->g_32 p_1167->l_comm_values p_1167->g_83 p_1167->g_103 p_1167->g_104 p_1167->g_117 p_1167->g_121 p_1167->g_125 p_1167->g_131 p_1167->g_106 p_1167->g_142 p_1167->g_154 p_1167->g_155 p_1167->g_167 p_1167->g_144 p_1167->g_193 p_1167->g_194 p_1167->g_195 p_1167->g_276 p_1167->g_277 p_1167->g_211 p_1167->g_296 p_1167->g_143 p_1167->g_214 p_1167->g_329 p_1167->g_335 p_1167->g_346
 * writes: p_1167->g_83 p_1167->g_103 p_1167->g_121 p_1167->g_143 p_1167->g_155 p_1167->g_211 p_1167->g_125 p_1167->g_296 p_1167->g_131 p_1167->g_194
 */
uint16_t  func_57(uint16_t  p_58, int32_t  p_59, int64_t  p_60, struct S0 * p_1167)
{ /* block id: 8 */
    uint64_t l_66 = 0x8E9BDCCB4F7BC72EL;
    VECTOR(uint64_t, 2) l_75 = (VECTOR(uint64_t, 2))(0x8A558E0D3184BAFCL, 5UL);
    VECTOR(int64_t, 8) l_96 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L));
    uint32_t *l_99[3];
    int32_t l_108 = 0x07340CD4L;
    uint32_t **l_114[3][1][6] = {{{&l_99[0],&l_99[0],&l_99[0],&l_99[0],&l_99[0],&l_99[0]}},{{&l_99[0],&l_99[0],&l_99[0],&l_99[0],&l_99[0],&l_99[0]}},{{&l_99[0],&l_99[0],&l_99[0],&l_99[0],&l_99[0],&l_99[0]}}};
    uint32_t ***l_113 = &l_114[0][0][2];
    VECTOR(int8_t, 8) l_126 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 8L), 8L), 8L, (-1L), 8L);
    VECTOR(uint8_t, 16) l_127 = (VECTOR(uint8_t, 16))(0xD7L, (VECTOR(uint8_t, 4))(0xD7L, (VECTOR(uint8_t, 2))(0xD7L, 0x6EL), 0x6EL), 0x6EL, 0xD7L, 0x6EL, (VECTOR(uint8_t, 2))(0xD7L, 0x6EL), (VECTOR(uint8_t, 2))(0xD7L, 0x6EL), 0xD7L, 0x6EL, 0xD7L, 0x6EL);
    VECTOR(int8_t, 2) l_130 = (VECTOR(int8_t, 2))(0x2BL, 8L);
    int8_t l_138 = 0x7FL;
    int64_t l_139 = 0x1BC6241912E77BBAL;
    int32_t l_140 = 1L;
    int32_t l_147 = (-1L);
    int32_t l_148 = 0x73C4D6EFL;
    int32_t l_149 = 0x76A3D26EL;
    int32_t l_150 = 0x762E4942L;
    uint32_t *l_156 = &p_1167->g_83;
    uint32_t *l_157 = &p_1167->g_83;
    uint32_t *l_158 = &p_1167->g_83;
    VECTOR(int64_t, 4) l_168 = (VECTOR(int64_t, 4))(0x02DB53253064252AL, (VECTOR(int64_t, 2))(0x02DB53253064252AL, 0x308C67EB79DC5B5BL), 0x308C67EB79DC5B5BL);
    int64_t *l_173[8];
    int32_t l_174 = 0x015E18F1L;
    VECTOR(uint16_t, 4) l_175 = (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 65526UL), 65526UL);
    int8_t l_184 = 0L;
    int32_t l_215 = 0x3126F15CL;
    VECTOR(int32_t, 4) l_216 = (VECTOR(int32_t, 4))(0x57033876L, (VECTOR(int32_t, 2))(0x57033876L, 0x1E2D7B22L), 0x1E2D7B22L);
    int32_t l_219 = 0x1B239C38L;
    int16_t l_220 = (-2L);
    uint32_t l_244 = 0UL;
    uint16_t l_259 = 0x83B7L;
    int16_t l_262 = (-5L);
    int8_t l_266[1][10][3];
    uint8_t l_271 = 0UL;
    int32_t l_290 = 0x2F6E7D60L;
    VECTOR(uint32_t, 16) l_310 = (VECTOR(uint32_t, 16))(0x77D68E0DL, (VECTOR(uint32_t, 4))(0x77D68E0DL, (VECTOR(uint32_t, 2))(0x77D68E0DL, 0xBCF70513L), 0xBCF70513L), 0xBCF70513L, 0x77D68E0DL, 0xBCF70513L, (VECTOR(uint32_t, 2))(0x77D68E0DL, 0xBCF70513L), (VECTOR(uint32_t, 2))(0x77D68E0DL, 0xBCF70513L), 0x77D68E0DL, 0xBCF70513L, 0x77D68E0DL, 0xBCF70513L);
    uint32_t l_316 = 0x69969D21L;
    int32_t *l_356 = &l_215;
    int32_t *l_357 = &l_174;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_99[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_173[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
                l_266[i][j][k] = (-7L);
        }
    }
    if ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_1167->g_21.z, (func_51((func_51((func_51((func_51(p_58, p_1167) < ((safe_unary_minus_func_uint64_t_u(FAKE_DIVERGE(p_1167->global_2_offset, get_global_id(2), 10))) != l_66)), p_1167) < (safe_mul_func_uint8_t_u_u(0x39L, (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((func_51(((safe_lshift_func_int8_t_s_u(p_60, 2)) , (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_75.yy)).xxxyxxyyyyxyyyxx)).s247a)).w == (p_60 , 0x066EAA9BED5D2985L))), p_1167) , 0x6F9EED16L), p_1167->g_21.w)), p_58))))), p_1167) , GROUP_DIVERGE(1, 1)), p_1167) < l_75.y))), l_75.y)))
    { /* block id: 9 */
        int16_t l_81 = 2L;
        uint32_t *l_82 = &p_1167->g_83;
        int32_t l_100 = 0x5ED4E1BEL;
        int32_t *l_107[7][10][3] = {{{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106}},{{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106}},{{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106}},{{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106}},{{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106}},{{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106}},{{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106},{&l_100,&l_100,&p_1167->g_106}}};
        int i, j, k;
        l_108 = (func_76((l_81 ^= p_1167->g_32.s0), (((*l_82) = 4294967290UL) <= p_1167->g_32.sd), ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint64_t_u_u(((l_82 != (void*)0) >= ((((((((safe_mul_func_int16_t_s_s(p_60, (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_96.s66)).odd, (((safe_sub_func_int64_t_s_s(0x3BC77BB9FEC4F7CDL, (0x21EB82DDL <= p_1167->g_32.sa))) || FAKE_DIVERGE(p_1167->group_1_offset, get_group_id(1), 10)) < 0x34391DAA6E977603L))))) >= p_1167->g_21.y) , l_99[1]) == l_82) || p_60) > l_100) | 0UL) , 0x2F6502FCEF8C34F7L)), p_1167->g_32.sc)) & p_1167->g_32.s7) < p_58) | p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))]), 65532UL)), 6)), 0x428CL)) , p_1167->g_32.s0), p_60, p_1167) || p_59);
    }
    else
    { /* block id: 20 */
        uint16_t l_111 = 0xFA09L;
        uint32_t ***l_112 = (void*)0;
        int16_t *l_120 = &p_1167->g_121[3];
        int32_t *l_122 = &l_108;
        (*l_122) ^= ((safe_div_func_int8_t_s_s(l_111, ((p_58 , p_1167->g_21.y) , (((*l_120) = ((((l_113 = l_112) != (void*)0) ^ (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(p_1167->g_117.s98e3433b)).odd)).x, (((safe_sub_func_int8_t_s_s((p_1167->g_21.w , ((p_1167->g_83 , GROUP_DIVERGE(0, 1)) <= ((l_75.y , &l_99[0]) != &l_99[0]))), p_1167->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1167->tid, 60))])) <= p_1167->g_83) ^ 0x44DDA6C637B4EEC5L)))) > p_58)) , p_1167->g_121[5])))) || l_111);
    }
    if ((p_1167->g_117.s7 && (safe_div_func_uint64_t_u_u(((((VECTOR(uint8_t, 2))(p_1167->g_125.zx)).hi && (((VECTOR(int8_t, 4))(l_126.s4363)).w >= ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_127.s48)), 0x98L, 1UL)).ywzxwwwz)).s2416016333351002)).s86ec, ((VECTOR(uint8_t, 16))(((((((p_60 > ((safe_sub_func_uint16_t_u_u(((l_108 = ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x6BL, ((VECTOR(int8_t, 2))(l_130.xy)), p_59, ((VECTOR(int8_t, 4))(p_1167->g_131.s2041)), ((VECTOR(int8_t, 8))(((p_1167->g_106 || (safe_mul_func_uint16_t_u_u(((p_60 , (p_1167->g_131.s1 <= (safe_sub_func_uint64_t_u_u(l_130.x, ((((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 4))(0x1EL, 1L, 0x2EL, (-5L))).hi))).hi, 0x0EL)) | 65534UL) ^ l_138) > p_60))))) != p_58), p_59))) == 0UL), 0x1CL, ((VECTOR(int8_t, 2))(0x5AL)), l_139, 0x04L, 0x42L, 8L)))))))).s9) || 1UL), 65526UL)) || 0x19B5L)) == p_1167->g_121[3]) & 0x217FL) && 0x75827F4EF6039F82L) <= 0x34L) >= 5UL), ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 8))(0x09L)), 0x4CL, 0xFFL, 8UL)).scc5e))).z)) , p_58), l_140))))
    { /* block id: 26 */
        uint32_t **l_141[9] = {&l_99[2],&l_99[2],&l_99[2],&l_99[2],&l_99[2],&l_99[2],&l_99[2],&l_99[2],&l_99[2]};
        int i;
        (*p_1167->g_142) = l_141[2];
    }
    else
    { /* block id: 28 */
        int32_t *l_145[8][3];
        uint8_t l_151 = 0xEDL;
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 3; j++)
                l_145[i][j] = &p_1167->g_106;
        }
        l_151--;
        p_1167->g_155 = p_1167->g_154;
    }
    if ((((l_157 = l_156) == l_158) >= (safe_mod_func_uint16_t_u_u((l_140 | (safe_lshift_func_int16_t_s_u(((++p_1167->g_155) & (l_149 = ((((VECTOR(int64_t, 8))(0L, (-1L), 0x0CF8CBA6C989A696L, (safe_add_func_int16_t_s_s(((((((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 8))(p_1167->g_167.wzzwzwyx)), ((VECTOR(int64_t, 4))(0x703DA3A2BD303A7FL, ((VECTOR(int64_t, 2))(l_168.zz)), 0L)).xxwwxyxw))).s7 == (l_174 = (l_147 >= (safe_add_func_int32_t_s_s((((l_149 , p_58) < (safe_add_func_uint16_t_u_u((1UL < 9UL), (p_58 | 0x3D40979BL)))) , l_130.y), l_168.z))))) < (*p_1167->g_144)) > l_149) && 1UL), l_127.s2)), p_1167->g_117.s8, ((VECTOR(int64_t, 2))(5L)), 0x21EB8B61DA00390CL)).s6 & p_58) | l_150))), 6))), 65535UL))))
    { /* block id: 36 */
        VECTOR(int16_t, 2) l_181 = (VECTOR(int16_t, 2))(0x3298L, (-10L));
        int16_t *l_185[4] = {&p_1167->g_121[2],&p_1167->g_121[2],&p_1167->g_121[2],&p_1167->g_121[2]};
        int32_t l_186 = (-1L);
        VECTOR(uint64_t, 8) l_196 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x9BB3AE07F9E03FE5L), 0x9BB3AE07F9E03FE5L), 0x9BB3AE07F9E03FE5L, 0UL, 0x9BB3AE07F9E03FE5L);
        uint16_t *l_209 = (void*)0;
        uint16_t *l_210 = &p_1167->g_211;
        int32_t *l_212[6][3] = {{&l_150,&l_150,&l_150},{&l_150,&l_150,&l_150},{&l_150,&l_150,&l_150},{&l_150,&l_150,&l_150},{&l_150,&l_150,&l_150},{&l_150,&l_150,&l_150}};
        int32_t l_213 = 0x683DC228L;
        int32_t l_217 = 0x795880F0L;
        int16_t l_218 = 0x610CL;
        uint32_t l_221 = 4294967295UL;
        VECTOR(uint32_t, 4) l_247 = (VECTOR(uint32_t, 4))(0xBABC24A0L, (VECTOR(uint32_t, 2))(0xBABC24A0L, 0UL), 0UL);
        VECTOR(int16_t, 8) l_302 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
        int8_t *l_330 = (void*)0;
        int8_t *l_331 = (void*)0;
        int16_t l_352 = 0x4A87L;
        int8_t l_353 = 0L;
        int i, j;
        l_149 ^= (((VECTOR(uint16_t, 4))(l_175.wzww)).x <= ((*l_210) = (safe_div_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((((safe_mod_func_uint16_t_u_u((((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(l_181.yxyx)).even))).odd != p_1167->g_131.s0), l_181.x)) , (((l_181.x | (((safe_mod_func_int16_t_s_s((l_186 = l_184), (p_59 , (+l_75.x)))) == l_126.s5) > (safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((l_181.y < ((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 8))(p_1167->g_193.s62b91aff)).s2153510605255763))).lo, ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0xC923159176513EDBL, 1UL)).xyyyxyxxyyyxyyxy)).lo, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_1167->g_194.s5342)).hi)))).xyyyyxyx, ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 4))(p_1167->g_195.yyxx)).even, ((VECTOR(uint64_t, 2))(l_196.s24))))).xyxyxxxx)))))).s5), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))((-9L), 0L)), (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((((l_148 = (((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(p_58, l_196.s5)) , 1UL) && l_184), 1)) == p_1167->g_21.x) | p_1167->g_106)) >= 0x68E3L) != l_181.x) | p_1167->g_121[3]) | l_181.y), p_58)), 5)) < 0xB853L))), 1)), ((VECTOR(int64_t, 4))(0x0A363AFEA6F2518CL)), 0x5B6507D8DE423DF5L)).s02)).odd)) >= p_59), p_60)), p_58)))) | p_1167->g_131.s1) , GROUP_DIVERGE(2, 1))) || p_58))), (*p_1167->g_144)))));
        ++l_221;
        for (l_148 = 0; (l_148 == (-9)); l_148 = safe_sub_func_int16_t_s_s(l_148, 3))
        { /* block id: 44 */
            VECTOR(int16_t, 4) l_228 = (VECTOR(int16_t, 4))(0x7E95L, (VECTOR(int16_t, 2))(0x7E95L, 0x1193L), 0x1193L);
            VECTOR(int16_t, 4) l_239 = (VECTOR(int16_t, 4))(0x4E7FL, (VECTOR(int16_t, 2))(0x4E7FL, 0x7E06L), 0x7E06L);
            uint8_t *l_248 = (void*)0;
            uint8_t *l_249 = (void*)0;
            uint8_t *l_250[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t **l_251 = (void*)0;
            int32_t **l_252 = &l_212[3][2];
            int32_t l_258[5][9][3] = {{{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)}},{{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)}},{{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)}},{{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)}},{{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)},{0L,0x6A08B1E5L,(-1L)}}};
            int8_t l_268 = 0x3DL;
            VECTOR(uint64_t, 8) l_289 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x1930F35E84A42099L), 0x1930F35E84A42099L), 0x1930F35E84A42099L, 18446744073709551615UL, 0x1930F35E84A42099L);
            int32_t *l_291 = (void*)0;
            int32_t *l_295 = (void*)0;
            VECTOR(int16_t, 8) l_303 = (VECTOR(int16_t, 8))(0x0555L, (VECTOR(int16_t, 4))(0x0555L, (VECTOR(int16_t, 2))(0x0555L, 0x04E1L), 0x04E1L), 0x04E1L, 0x0555L, 0x04E1L);
            VECTOR(int32_t, 16) l_318 = (VECTOR(int32_t, 16))(0x5575401DL, (VECTOR(int32_t, 4))(0x5575401DL, (VECTOR(int32_t, 2))(0x5575401DL, (-1L)), (-1L)), (-1L), 0x5575401DL, (-1L), (VECTOR(int32_t, 2))(0x5575401DL, (-1L)), (VECTOR(int32_t, 2))(0x5575401DL, (-1L)), 0x5575401DL, (-1L), 0x5575401DL, (-1L));
            VECTOR(int16_t, 8) l_321 = (VECTOR(int16_t, 8))(0x00BAL, (VECTOR(int16_t, 4))(0x00BAL, (VECTOR(int16_t, 2))(0x00BAL, 0x67ABL), 0x67ABL), 0x67ABL, 0x00BAL, 0x67ABL);
            VECTOR(uint16_t, 2) l_334 = (VECTOR(uint16_t, 2))(0xB8A2L, 0x64A3L);
            VECTOR(uint16_t, 16) l_336 = (VECTOR(uint16_t, 16))(0x3A5DL, (VECTOR(uint16_t, 4))(0x3A5DL, (VECTOR(uint16_t, 2))(0x3A5DL, 0x3C64L), 0x3C64L), 0x3C64L, 0x3A5DL, 0x3C64L, (VECTOR(uint16_t, 2))(0x3A5DL, 0x3C64L), (VECTOR(uint16_t, 2))(0x3A5DL, 0x3C64L), 0x3A5DL, 0x3C64L, 0x3A5DL, 0x3C64L);
            VECTOR(uint64_t, 2) l_347 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551614UL);
            int i, j, k;
            (*l_252) = ((safe_lshift_func_uint8_t_u_u((p_1167->g_125.w = ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(3L, ((VECTOR(int16_t, 4))(l_228.zzxx)), (safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), (safe_add_func_uint8_t_u_u((((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 2))(0L, 0x0516C40D32A69606L)).yxyxxyyx, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))((safe_div_func_int16_t_s_s((0UL <= (l_75.x >= ((safe_mod_func_uint64_t_u_u(0x25572CC66FCCE986L, p_1167->g_21.x)) <= ((0x3BAA1FF9B607816AL == (safe_div_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_239.xy)).xyxxxxyx)).s1 , (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((l_244 , 65528UL) >= ((safe_unary_minus_func_uint8_t_u(((safe_unary_minus_func_int8_t_s((p_58 , (((VECTOR(uint32_t, 2))(l_247.xz)).hi | p_60)))) , p_58))) ^ l_228.z)), p_1167->g_155)), p_59))) & p_1167->g_131.s6)))) | p_58)))), 0x4A31L)), l_228.z, p_1167->g_21.w, (-2L), 1L, p_1167->g_194.s1, 0x070F6600L, 0x63BD0E4EL, l_216.w, 0L, 0x6C0544E7L, 0x19625F17L, 1L, ((VECTOR(int32_t, 2))(9L)), (-1L))).sb1b0, ((VECTOR(int32_t, 4))(0x2C207859L))))), ((VECTOR(uint32_t, 4))(0x15F8ECFFL))))).xyzywwwy))).s5 != p_1167->g_21.z), p_1167->g_195.x)))), 0x20F3L, (-7L))), p_1167->g_211, 0L, ((VECTOR(int16_t, 4))(0x6938L)), 1L, 0x3ED7L)))))).s6 == 0x66B8L) && p_1167->g_32.s6)), 3)) , (void*)0);
            for (l_213 = 0; (l_213 < 13); l_213++)
            { /* block id: 49 */
                int16_t l_265 = 0x3EA8L;
                int32_t l_267 = 0L;
                int32_t l_269 = (-7L);
                int32_t l_270 = 1L;
                for (l_147 = 0; (l_147 <= 17); ++l_147)
                { /* block id: 52 */
                    int16_t l_257 = 0x0662L;
                    int32_t l_263 = 0L;
                    int32_t l_264[9][9][3] = {{{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L}},{{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L}},{{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L}},{{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L}},{{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L}},{{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L}},{{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L}},{{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L}},{{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L},{0x2A2B44F4L,(-1L),0x78321277L}}};
                    int i, j, k;
                    l_259--;
                    l_262 = l_257;
                    ++l_271;
                    l_270 = p_59;
                }
            }
            for (l_66 = (-15); (l_66 < 27); ++l_66)
            { /* block id: 61 */
                uint64_t l_282 = 1UL;
                uint32_t *l_287 = &l_244;
                uint32_t *l_288 = (void*)0;
                int32_t l_301 = (-2L);
                VECTOR(uint64_t, 4) l_304 = (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0xC5BD55E0D1832723L), 0xC5BD55E0D1832723L);
                VECTOR(uint64_t, 2) l_323 = (VECTOR(uint64_t, 2))(0UL, 0xDE705CEEBB0FB55AL);
                int8_t *l_324[7] = {&l_138,&l_184,&l_138,&l_138,&l_184,&l_138,&l_138};
                VECTOR(uint16_t, 8) l_337 = (VECTOR(uint16_t, 8))(0xC707L, (VECTOR(uint16_t, 4))(0xC707L, (VECTOR(uint16_t, 2))(0xC707L, 1UL), 1UL), 1UL, 0xC707L, 1UL);
                int i;
                if (((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(0L, ((l_149 = (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 2))((-3L), 0x4830BDBF4C341568L)).xyxyxyyx, (int64_t)((VECTOR(int64_t, 8))((-1L), ((VECTOR(int64_t, 4))(0x70035692F8B0B803L, ((VECTOR(int64_t, 2))(p_1167->g_276.s73)), 0L)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x3FFE33EB197322C9L, 6L)))), 4L)).s2))), ((VECTOR(int64_t, 8))(p_1167->g_277.s14347574))))).s4270121046503707)))).sb , p_60)) < (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(p_1167->g_32.sb, 7)), (p_1167->g_211 |= ((((l_282 > ((safe_rshift_func_uint8_t_u_s(p_60, 5)) <= (safe_unary_minus_func_int8_t_s((safe_unary_minus_func_int16_t_s((((VECTOR(uint32_t, 2))(1UL, 0UL)).odd , 0x59B2L))))))) & (((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 4))((((((l_287 == (p_60 , l_288)) | ((VECTOR(uint64_t, 16))(l_289.s6170456325066212)).s3) == p_1167->g_32.s4) != p_1167->g_131.s0) | l_290), 4294967295UL, 4294967289UL, 0xE07524C9L)), ((VECTOR(uint32_t, 4))(0x2EAFB852L))))).xwzxzxyyzzzzyxzx)).s9616, ((VECTOR(uint64_t, 4))(0xC297416A418F1D3EL))))).x != p_1167->g_167.w)) == p_1167->g_167.z) ^ 0x47D3FA87L))))), (-1L), ((VECTOR(int32_t, 4))(0x231F455AL)), 0L)), ((VECTOR(int32_t, 8))(1L))))), ((VECTOR(int32_t, 2))(0x4E571CB5L)), p_58, 0x3B36C08AL, p_60, (-1L), (-1L))).odd, ((VECTOR(int32_t, 8))(0L))))).s34, ((VECTOR(int32_t, 2))(0x49BC28F8L))))).even)
                { /* block id: 64 */
                    uint64_t *l_309 = &l_282;
                    int8_t *l_313 = &l_266[0][4][0];
                    int32_t l_314 = (-1L);
                    int8_t *l_315[5][4][5] = {{{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138}},{{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138}},{{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138}},{{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138}},{{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138},{&l_138,&l_184,(void*)0,&l_184,&l_138}}};
                    int i, j, k;
                    (*l_252) = l_291;
                    for (l_271 = (-10); (l_271 <= 37); l_271++)
                    { /* block id: 68 */
                        int32_t *l_294[10] = {&l_174,&l_174,&l_174,&l_174,&l_174,&l_174,&l_174,&l_174,&l_174,&l_174};
                        int i;
                        l_295 = l_294[7];
                        p_1167->g_296++;
                    }
                    for (l_213 = 0; (l_213 <= (-16)); l_213 = safe_sub_func_int16_t_s_s(l_213, 7))
                    { /* block id: 74 */
                        l_301 = ((VECTOR(int32_t, 2))(0x32E21279L, 0x661927F9L)).even;
                    }
                    if ((((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(1L, 0x7799L, 0L, 7L)), ((VECTOR(int16_t, 4))(l_302.s3042)))).s11)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_303.s41)), 0x21D7L, 0x7B1EL)).lo))).xyxy)).even)).xxyxxyxy, (int16_t)(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(8L, (-4L), ((void*)0 != (*p_1167->g_142)), 0x13L, (p_1167->g_131.s3 = ((((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 4))(l_304.xzyw)).lo))).xxyy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0xD1DA20224874AF0EL, (safe_mod_func_int8_t_s_s(1L, ((safe_add_func_uint32_t_u_u((0x43F9D9CBL | p_58), ((l_168.w >= ((*l_309) = l_262)) , ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_310.s66)), 4294967288UL, 0xFC69B6B5L)).ywyyzwxxwyzxxxwx)).sc))) && (safe_rshift_func_int8_t_s_s(((*l_313) &= (p_1167->g_83 > p_1167->g_296)), l_314))))), 0x3ED66B085FBFEE25L, 1UL, 1UL, p_1167->g_214, 5UL, 18446744073709551615UL)).s03)), ((VECTOR(uint64_t, 2))(0x5D66C7B957A9F020L)), ((VECTOR(uint64_t, 4))(0x91A634B7427BA272L)))).s55)))).xyxxxxxx)).odd))).z , (-7L)) > 1L)), (-1L), ((VECTOR(int8_t, 2))(0x33L)), 0x5FL, 0x3CL, ((VECTOR(int8_t, 4))(0x41L)), 0x55L, 1L)).sd3, ((VECTOR(uint8_t, 2))(0x76L))))).hi && 5UL)))).s0 , p_58))
                    { /* block id: 80 */
                        return l_316;
                    }
                    else
                    { /* block id: 82 */
                        return p_60;
                    }
                }
                else
                { /* block id: 85 */
                    uint64_t *l_322 = &l_282;
                    int32_t l_332 = (-7L);
                    atomic_xor(&p_1167->l_atomic_reduction[0], (safe_unary_minus_func_uint64_t_u(0xDC26513F886E5F10L)));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1167->v_collective += p_1167->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    atomic_and(&p_1167->l_atomic_reduction[0], ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_318.s4d)).xxxy)), (((l_301 > (safe_sub_func_uint64_t_u_u(((*l_322) = (0x5A2BL & ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_321.s61074427)))).s4)), ((VECTOR(uint64_t, 4))(l_323.yxyx)).y))) || ((void*)0 != l_324[3])) , (p_58 & p_1167->g_32.s4)), (((p_58 ^ p_59) , (GROUP_DIVERGE(2, 1) & (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xB4D4733CL, 0x0DEFB6F4L)), 0x1E5F94BFL, 4294967295UL)).w , ((((void*)0 == &p_1167->g_105[0][2][0]) == p_1167->g_276.s1) | 7L)))) , p_60), 9L, 0x36BFABCFL)).s3 + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1167->v_collective += p_1167->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    for (p_1167->g_296 = 0; (p_1167->g_296 <= 13); ++p_1167->g_296)
                    { /* block id: 91 */
                        uint64_t *l_333[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_348 = 0x3EFC7A70L;
                        int32_t l_349 = 0x2FB12787L;
                        int i;
                        l_258[3][4][1] = ((p_1167->g_195.x , (p_1167->g_154 && ((VECTOR(uint16_t, 16))(0xC826L, 0xB8A4L, 0UL, 0xAC4CL, GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 4))((safe_div_func_uint64_t_u_u(((*l_322) ^= ((l_330 = p_1167->g_329[1]) == l_331)), (p_1167->g_194.s7 &= (l_271 < l_332)))), p_60, 0xA1C9L, 65529UL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(0x5FB6L, 0x6534L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_334.yx)).yxyy)), 0UL, 0xAB0DL)).hi, ((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 16))(p_1167->g_335.yxxyyxyyxyyxyyyy)), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(0xBC1AL, 0UL)).xyxy, ((VECTOR(uint16_t, 16))(l_336.s2ab4852a4874c2ca)).se26f))).xzwzzyxxyyxywyyx, ((VECTOR(uint16_t, 8))(l_337.s47361434)).s4346215731616131))).s1951))))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((l_348 = ((((VECTOR(int64_t, 8))(p_1167->g_346.xyxyxxxx)).s2 >= (((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x565D280721222621L, 1UL)), 0xB812238D70B3F904L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(l_347.yyxxyxxx)).s17, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(p_58, 0UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551606UL, l_262, p_1167->g_296, 0xC97508575AFB0A8EL, ((VECTOR(uint64_t, 4))(0xA18054C996F71A8FL)), 0x7C13F4030C1E57B8L, ((VECTOR(uint64_t, 2))(0x9CBE50757E246B9FL)), 0x4270838D9775CD92L)))).sab))), 0x036E318724CF460EL, 0x7AB155B960A3F17FL)), 0x76A194E2601E79EFL)).s17, ((VECTOR(uint64_t, 2))(0xDBA6D0B290EFD18FL))))).hi < p_1167->g_32.sa)) || 1UL)) | 1L), 18446744073709551615UL)), l_349)), 14)) != l_349), p_1167->g_131.s6)), 9UL, 0x6850L, 0x262AL, 1UL, ((VECTOR(uint16_t, 8))(0x391CL)), ((VECTOR(uint16_t, 2))(5UL)), 0xB1C6L)).odd)).s6367563367024152, (uint16_t)l_349))).s8d)))), 0x5283L)).s4)) <= 0x57303DADL);
                        return p_58;
                    }
                }
            }
        }
        l_353 = (l_352 &= (safe_add_func_int32_t_s_s(((void*)0 == &p_1167->g_121[3]), p_58)));
    }
    else
    { /* block id: 104 */
        int32_t *l_355[9] = {&l_219,&l_219,&l_219,&l_219,&l_219,&l_219,&l_219,&l_219,&l_219};
        int32_t **l_354 = &l_355[6];
        int i;
        (*l_354) = (void*)0;
        l_215 |= p_58;
        (*l_354) = (*l_354);
        (*l_354) = (*l_354);
    }
    (*l_357) &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((*l_356) = l_75.x), 0L, (-8L), 2L)).ywwwzwzw)).odd)).y;
    return p_1167->g_296;
}


/* ------------------------------------------ */
/* 
 * reads : p_1167->g_83 p_1167->g_103 p_1167->g_104
 * writes: p_1167->g_83 p_1167->g_103
 */
uint32_t  func_76(int8_t  p_77, uint64_t  p_78, int64_t  p_79, uint64_t  p_80, struct S0 * p_1167)
{ /* block id: 12 */
    for (p_1167->g_83 = (-20); (p_1167->g_83 < 17); ++p_1167->g_83)
    { /* block id: 15 */
        (*p_1167->g_104) = p_1167->g_103;
    }
    return p_80;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_comm_values[i] = 1;
    struct S0 c_1168;
    struct S0* p_1167 = &c_1168;
    struct S0 c_1169 = {
        (VECTOR(uint8_t, 4))(0x47L, (VECTOR(uint8_t, 2))(0x47L, 0xEDL), 0xEDL), // p_1167->g_21
        (VECTOR(uint32_t, 16))(0xC3421AD7L, (VECTOR(uint32_t, 4))(0xC3421AD7L, (VECTOR(uint32_t, 2))(0xC3421AD7L, 0x966896E6L), 0x966896E6L), 0x966896E6L, 0xC3421AD7L, 0x966896E6L, (VECTOR(uint32_t, 2))(0xC3421AD7L, 0x966896E6L), (VECTOR(uint32_t, 2))(0xC3421AD7L, 0x966896E6L), 0xC3421AD7L, 0x966896E6L, 0xC3421AD7L, 0x966896E6L), // p_1167->g_32
        4294967293UL, // p_1167->g_83
        (void*)0, // p_1167->g_103
        &p_1167->g_103, // p_1167->g_104
        0x1728EF6BL, // p_1167->g_106
        {{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}},{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}},{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}},{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}},{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}},{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}},{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}},{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}},{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}},{{&p_1167->g_106},{&p_1167->g_106},{&p_1167->g_106}}}, // p_1167->g_105
        (VECTOR(uint64_t, 16))(0x5848C36732C95206L, (VECTOR(uint64_t, 4))(0x5848C36732C95206L, (VECTOR(uint64_t, 2))(0x5848C36732C95206L, 2UL), 2UL), 2UL, 0x5848C36732C95206L, 2UL, (VECTOR(uint64_t, 2))(0x5848C36732C95206L, 2UL), (VECTOR(uint64_t, 2))(0x5848C36732C95206L, 2UL), 0x5848C36732C95206L, 2UL, 0x5848C36732C95206L, 2UL), // p_1167->g_117
        {0x7DCFL,0x4FC3L,0x7DCFL,0x7DCFL,0x4FC3L,0x7DCFL,0x7DCFL}, // p_1167->g_121
        (VECTOR(uint8_t, 4))(0x6FL, (VECTOR(uint8_t, 2))(0x6FL, 1UL), 1UL), // p_1167->g_125
        (VECTOR(int8_t, 8))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 1L), 1L), 1L, 0x30L, 1L), // p_1167->g_131
        &p_1167->g_83, // p_1167->g_144
        {{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144},{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144},{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144},{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144},{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144},{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144},{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144},{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144},{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144},{&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144,&p_1167->g_144}}, // p_1167->g_143
        &p_1167->g_143[8][4], // p_1167->g_142
        (-8L), // p_1167->g_146
        0x96L, // p_1167->g_154
        0xF7B98E7B1A39021DL, // p_1167->g_155
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), // p_1167->g_167
        (VECTOR(uint64_t, 16))(0x142CD7CD444B73ACL, (VECTOR(uint64_t, 4))(0x142CD7CD444B73ACL, (VECTOR(uint64_t, 2))(0x142CD7CD444B73ACL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0x142CD7CD444B73ACL, 18446744073709551614UL, (VECTOR(uint64_t, 2))(0x142CD7CD444B73ACL, 18446744073709551614UL), (VECTOR(uint64_t, 2))(0x142CD7CD444B73ACL, 18446744073709551614UL), 0x142CD7CD444B73ACL, 18446744073709551614UL, 0x142CD7CD444B73ACL, 18446744073709551614UL), // p_1167->g_193
        (VECTOR(uint64_t, 8))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0x0A4EC380C8DFE3D1L), 0x0A4EC380C8DFE3D1L), 0x0A4EC380C8DFE3D1L, 3UL, 0x0A4EC380C8DFE3D1L), // p_1167->g_194
        (VECTOR(uint64_t, 2))(0xB9ECC4F20DA124CAL, 18446744073709551606UL), // p_1167->g_195
        0xD991L, // p_1167->g_211
        (-1L), // p_1167->g_214
        (VECTOR(int64_t, 8))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x06DE3C41C6A03658L), 0x06DE3C41C6A03658L), 0x06DE3C41C6A03658L, 3L, 0x06DE3C41C6A03658L), // p_1167->g_276
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x0F4D7835CF2078EFL), 0x0F4D7835CF2078EFL), 0x0F4D7835CF2078EFL, 1L, 0x0F4D7835CF2078EFL), // p_1167->g_277
        0x54L, // p_1167->g_296
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1167->g_329
        (VECTOR(uint16_t, 2))(0x8686L, 6UL), // p_1167->g_335
        (VECTOR(int64_t, 2))((-2L), 0x68DD2AEACD5B145AL), // p_1167->g_346
        (VECTOR(int32_t, 8))(0x3237FD3CL, (VECTOR(int32_t, 4))(0x3237FD3CL, (VECTOR(int32_t, 2))(0x3237FD3CL, (-1L)), (-1L)), (-1L), 0x3237FD3CL, (-1L)), // p_1167->g_360
        0x55L, // p_1167->g_376
        0x15D6CF7151C4C134L, // p_1167->g_380
        {{1UL,1UL,7UL,0x042B8340L,4294967288UL,0x042B8340L,7UL},{1UL,1UL,7UL,0x042B8340L,4294967288UL,0x042B8340L,7UL},{1UL,1UL,7UL,0x042B8340L,4294967288UL,0x042B8340L,7UL},{1UL,1UL,7UL,0x042B8340L,4294967288UL,0x042B8340L,7UL},{1UL,1UL,7UL,0x042B8340L,4294967288UL,0x042B8340L,7UL},{1UL,1UL,7UL,0x042B8340L,4294967288UL,0x042B8340L,7UL},{1UL,1UL,7UL,0x042B8340L,4294967288UL,0x042B8340L,7UL},{1UL,1UL,7UL,0x042B8340L,4294967288UL,0x042B8340L,7UL},{1UL,1UL,7UL,0x042B8340L,4294967288UL,0x042B8340L,7UL}}, // p_1167->g_392
        &p_1167->g_392[3][1], // p_1167->g_391
        &p_1167->g_391, // p_1167->g_390
        &p_1167->g_390, // p_1167->g_389
        (VECTOR(int8_t, 8))(0x78L, (VECTOR(int8_t, 4))(0x78L, (VECTOR(int8_t, 2))(0x78L, 0x51L), 0x51L), 0x51L, 0x78L, 0x51L), // p_1167->g_399
        (VECTOR(uint64_t, 2))(0x54C4107E4B38FE4EL, 7UL), // p_1167->g_401
        (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0x9CE0L), 0x9CE0L), 0x9CE0L, 65533UL, 0x9CE0L), // p_1167->g_428
        0x32D63910L, // p_1167->g_445
        0x014DA159L, // p_1167->g_450
        0x24238CF5L, // p_1167->g_463
        (VECTOR(int32_t, 4))(0x1CABC275L, (VECTOR(int32_t, 2))(0x1CABC275L, 0L), 0L), // p_1167->g_474
        (void*)0, // p_1167->g_493
        &p_1167->g_493, // p_1167->g_492
        &p_1167->g_463, // p_1167->g_502
        &p_1167->g_502, // p_1167->g_501
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x660EL), 0x660EL), 0x660EL, 65535UL, 0x660EL), // p_1167->g_516
        (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x06L), 0x06L), 0x06L, 6L, 0x06L, (VECTOR(int8_t, 2))(6L, 0x06L), (VECTOR(int8_t, 2))(6L, 0x06L), 6L, 0x06L, 6L, 0x06L), // p_1167->g_529
        (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), (-5L)), (-5L)), (-5L), (-9L), (-5L), (VECTOR(int8_t, 2))((-9L), (-5L)), (VECTOR(int8_t, 2))((-9L), (-5L)), (-9L), (-5L), (-9L), (-5L)), // p_1167->g_530
        {0x5921ACCEDC4AE3A1L}, // p_1167->g_534
        0x7096L, // p_1167->g_551
        (VECTOR(uint64_t, 16))(0x2C16F3F4CD0870F0L, (VECTOR(uint64_t, 4))(0x2C16F3F4CD0870F0L, (VECTOR(uint64_t, 2))(0x2C16F3F4CD0870F0L, 1UL), 1UL), 1UL, 0x2C16F3F4CD0870F0L, 1UL, (VECTOR(uint64_t, 2))(0x2C16F3F4CD0870F0L, 1UL), (VECTOR(uint64_t, 2))(0x2C16F3F4CD0870F0L, 1UL), 0x2C16F3F4CD0870F0L, 1UL, 0x2C16F3F4CD0870F0L, 1UL), // p_1167->g_585
        (-4L), // p_1167->g_616
        2L, // p_1167->g_619
        (VECTOR(uint32_t, 4))(0x7961A676L, (VECTOR(uint32_t, 2))(0x7961A676L, 0xC57A648AL), 0xC57A648AL), // p_1167->g_685
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x48L), 0x48L), 0x48L, 1L, 0x48L), // p_1167->g_695
        (void*)0, // p_1167->g_703
        &p_1167->g_493, // p_1167->g_704
        0x78L, // p_1167->g_711
        (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x3ED2L), 0x3ED2L), 0x3ED2L, 7L, 0x3ED2L), // p_1167->g_751
        &p_1167->g_534[0], // p_1167->g_762
        {{&p_1167->g_762,(void*)0,&p_1167->g_762,&p_1167->g_762,(void*)0,&p_1167->g_762,&p_1167->g_762,(void*)0},{&p_1167->g_762,(void*)0,&p_1167->g_762,&p_1167->g_762,(void*)0,&p_1167->g_762,&p_1167->g_762,(void*)0}}, // p_1167->g_761
        (VECTOR(int32_t, 8))(0x19E07B39L, (VECTOR(int32_t, 4))(0x19E07B39L, (VECTOR(int32_t, 2))(0x19E07B39L, 3L), 3L), 3L, 0x19E07B39L, 3L), // p_1167->g_766
        (void*)0, // p_1167->g_774
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_1167->g_776
        (void*)0, // p_1167->g_801
        &p_1167->g_502, // p_1167->g_802
        {0x47L,(-5L),1L,(-5L),0x47L,0x47L,(-5L),1L,(-5L),0x47L}, // p_1167->g_804
        (VECTOR(int64_t, 8))(0x39818374804AB058L, (VECTOR(int64_t, 4))(0x39818374804AB058L, (VECTOR(int64_t, 2))(0x39818374804AB058L, 8L), 8L), 8L, 0x39818374804AB058L, 8L), // p_1167->g_809
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L)), // p_1167->g_811
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x327AE2BE8D102D73L), 0x327AE2BE8D102D73L), // p_1167->g_812
        (VECTOR(uint8_t, 8))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 1UL), 1UL), 1UL, 252UL, 1UL), // p_1167->g_826
        (VECTOR(uint8_t, 2))(6UL, 0xA3L), // p_1167->g_827
        (VECTOR(uint8_t, 8))(0xB8L, (VECTOR(uint8_t, 4))(0xB8L, (VECTOR(uint8_t, 2))(0xB8L, 1UL), 1UL), 1UL, 0xB8L, 1UL), // p_1167->g_828
        &p_1167->g_502, // p_1167->g_834
        &p_1167->g_502, // p_1167->g_835
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL), // p_1167->g_911
        (VECTOR(uint8_t, 2))(1UL, 0x83L), // p_1167->g_912
        (VECTOR(uint16_t, 2))(65531UL, 65533UL), // p_1167->g_947
        (void*)0, // p_1167->g_955
        {&p_1167->g_391,&p_1167->g_391,&p_1167->g_391,&p_1167->g_391,&p_1167->g_391}, // p_1167->g_972
        (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x1BL), 0x1BL), 0x1BL, 3L, 0x1BL, (VECTOR(int8_t, 2))(3L, 0x1BL), (VECTOR(int8_t, 2))(3L, 0x1BL), 3L, 0x1BL, 3L, 0x1BL), // p_1167->g_1037
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x22L), 0x22L), // p_1167->g_1038
        (VECTOR(int8_t, 8))(0x0DL, (VECTOR(int8_t, 4))(0x0DL, (VECTOR(int8_t, 2))(0x0DL, 0x65L), 0x65L), 0x65L, 0x0DL, 0x65L), // p_1167->g_1039
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x48L), 0x48L), 0x48L, (-1L), 0x48L), // p_1167->g_1041
        (VECTOR(int8_t, 2))(0x59L, 0x17L), // p_1167->g_1045
        (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x07L), 0x07L), // p_1167->g_1046
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x620D2742L), 0x620D2742L), 0x620D2742L, (-1L), 0x620D2742L), // p_1167->g_1057
        (VECTOR(uint8_t, 8))(0xFFL, (VECTOR(uint8_t, 4))(0xFFL, (VECTOR(uint8_t, 2))(0xFFL, 0xACL), 0xACL), 0xACL, 0xFFL, 0xACL), // p_1167->g_1058
        &p_1167->g_493, // p_1167->g_1062
        (VECTOR(uint16_t, 8))(0xE4D3L, (VECTOR(uint16_t, 4))(0xE4D3L, (VECTOR(uint16_t, 2))(0xE4D3L, 0x8E94L), 0x8E94L), 0x8E94L, 0xE4D3L, 0x8E94L), // p_1167->g_1067
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7EL), 0x7EL), 0x7EL, 0L, 0x7EL), // p_1167->g_1078
        0x50L, // p_1167->g_1084
        0x5887CA9BL, // p_1167->g_1085
        {{&p_1167->g_502,&p_1167->g_502}}, // p_1167->g_1093
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1167->g_1094
        0x283A1278L, // p_1167->g_1139
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x37FA6F22L), 0x37FA6F22L), 0x37FA6F22L, 0L, 0x37FA6F22L), // p_1167->g_1146
        (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 8L), 8L), 8L, 3L, 8L), // p_1167->g_1147
        0, // p_1167->v_collective
        sequence_input[get_global_id(0)], // p_1167->global_0_offset
        sequence_input[get_global_id(1)], // p_1167->global_1_offset
        sequence_input[get_global_id(2)], // p_1167->global_2_offset
        sequence_input[get_local_id(0)], // p_1167->local_0_offset
        sequence_input[get_local_id(1)], // p_1167->local_1_offset
        sequence_input[get_local_id(2)], // p_1167->local_2_offset
        sequence_input[get_group_id(0)], // p_1167->group_0_offset
        sequence_input[get_group_id(1)], // p_1167->group_1_offset
        sequence_input[get_group_id(2)], // p_1167->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 60)), permutations[0][get_linear_local_id()])), // p_1167->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1168 = c_1169;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1167);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1167->g_21.x, "p_1167->g_21.x", print_hash_value);
    transparent_crc(p_1167->g_21.y, "p_1167->g_21.y", print_hash_value);
    transparent_crc(p_1167->g_21.z, "p_1167->g_21.z", print_hash_value);
    transparent_crc(p_1167->g_21.w, "p_1167->g_21.w", print_hash_value);
    transparent_crc(p_1167->g_32.s0, "p_1167->g_32.s0", print_hash_value);
    transparent_crc(p_1167->g_32.s1, "p_1167->g_32.s1", print_hash_value);
    transparent_crc(p_1167->g_32.s2, "p_1167->g_32.s2", print_hash_value);
    transparent_crc(p_1167->g_32.s3, "p_1167->g_32.s3", print_hash_value);
    transparent_crc(p_1167->g_32.s4, "p_1167->g_32.s4", print_hash_value);
    transparent_crc(p_1167->g_32.s5, "p_1167->g_32.s5", print_hash_value);
    transparent_crc(p_1167->g_32.s6, "p_1167->g_32.s6", print_hash_value);
    transparent_crc(p_1167->g_32.s7, "p_1167->g_32.s7", print_hash_value);
    transparent_crc(p_1167->g_32.s8, "p_1167->g_32.s8", print_hash_value);
    transparent_crc(p_1167->g_32.s9, "p_1167->g_32.s9", print_hash_value);
    transparent_crc(p_1167->g_32.sa, "p_1167->g_32.sa", print_hash_value);
    transparent_crc(p_1167->g_32.sb, "p_1167->g_32.sb", print_hash_value);
    transparent_crc(p_1167->g_32.sc, "p_1167->g_32.sc", print_hash_value);
    transparent_crc(p_1167->g_32.sd, "p_1167->g_32.sd", print_hash_value);
    transparent_crc(p_1167->g_32.se, "p_1167->g_32.se", print_hash_value);
    transparent_crc(p_1167->g_32.sf, "p_1167->g_32.sf", print_hash_value);
    transparent_crc(p_1167->g_83, "p_1167->g_83", print_hash_value);
    transparent_crc(p_1167->g_106, "p_1167->g_106", print_hash_value);
    transparent_crc(p_1167->g_117.s0, "p_1167->g_117.s0", print_hash_value);
    transparent_crc(p_1167->g_117.s1, "p_1167->g_117.s1", print_hash_value);
    transparent_crc(p_1167->g_117.s2, "p_1167->g_117.s2", print_hash_value);
    transparent_crc(p_1167->g_117.s3, "p_1167->g_117.s3", print_hash_value);
    transparent_crc(p_1167->g_117.s4, "p_1167->g_117.s4", print_hash_value);
    transparent_crc(p_1167->g_117.s5, "p_1167->g_117.s5", print_hash_value);
    transparent_crc(p_1167->g_117.s6, "p_1167->g_117.s6", print_hash_value);
    transparent_crc(p_1167->g_117.s7, "p_1167->g_117.s7", print_hash_value);
    transparent_crc(p_1167->g_117.s8, "p_1167->g_117.s8", print_hash_value);
    transparent_crc(p_1167->g_117.s9, "p_1167->g_117.s9", print_hash_value);
    transparent_crc(p_1167->g_117.sa, "p_1167->g_117.sa", print_hash_value);
    transparent_crc(p_1167->g_117.sb, "p_1167->g_117.sb", print_hash_value);
    transparent_crc(p_1167->g_117.sc, "p_1167->g_117.sc", print_hash_value);
    transparent_crc(p_1167->g_117.sd, "p_1167->g_117.sd", print_hash_value);
    transparent_crc(p_1167->g_117.se, "p_1167->g_117.se", print_hash_value);
    transparent_crc(p_1167->g_117.sf, "p_1167->g_117.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1167->g_121[i], "p_1167->g_121[i]", print_hash_value);

    }
    transparent_crc(p_1167->g_125.x, "p_1167->g_125.x", print_hash_value);
    transparent_crc(p_1167->g_125.y, "p_1167->g_125.y", print_hash_value);
    transparent_crc(p_1167->g_125.z, "p_1167->g_125.z", print_hash_value);
    transparent_crc(p_1167->g_125.w, "p_1167->g_125.w", print_hash_value);
    transparent_crc(p_1167->g_131.s0, "p_1167->g_131.s0", print_hash_value);
    transparent_crc(p_1167->g_131.s1, "p_1167->g_131.s1", print_hash_value);
    transparent_crc(p_1167->g_131.s2, "p_1167->g_131.s2", print_hash_value);
    transparent_crc(p_1167->g_131.s3, "p_1167->g_131.s3", print_hash_value);
    transparent_crc(p_1167->g_131.s4, "p_1167->g_131.s4", print_hash_value);
    transparent_crc(p_1167->g_131.s5, "p_1167->g_131.s5", print_hash_value);
    transparent_crc(p_1167->g_131.s6, "p_1167->g_131.s6", print_hash_value);
    transparent_crc(p_1167->g_131.s7, "p_1167->g_131.s7", print_hash_value);
    transparent_crc(p_1167->g_146, "p_1167->g_146", print_hash_value);
    transparent_crc(p_1167->g_154, "p_1167->g_154", print_hash_value);
    transparent_crc(p_1167->g_155, "p_1167->g_155", print_hash_value);
    transparent_crc(p_1167->g_167.x, "p_1167->g_167.x", print_hash_value);
    transparent_crc(p_1167->g_167.y, "p_1167->g_167.y", print_hash_value);
    transparent_crc(p_1167->g_167.z, "p_1167->g_167.z", print_hash_value);
    transparent_crc(p_1167->g_167.w, "p_1167->g_167.w", print_hash_value);
    transparent_crc(p_1167->g_193.s0, "p_1167->g_193.s0", print_hash_value);
    transparent_crc(p_1167->g_193.s1, "p_1167->g_193.s1", print_hash_value);
    transparent_crc(p_1167->g_193.s2, "p_1167->g_193.s2", print_hash_value);
    transparent_crc(p_1167->g_193.s3, "p_1167->g_193.s3", print_hash_value);
    transparent_crc(p_1167->g_193.s4, "p_1167->g_193.s4", print_hash_value);
    transparent_crc(p_1167->g_193.s5, "p_1167->g_193.s5", print_hash_value);
    transparent_crc(p_1167->g_193.s6, "p_1167->g_193.s6", print_hash_value);
    transparent_crc(p_1167->g_193.s7, "p_1167->g_193.s7", print_hash_value);
    transparent_crc(p_1167->g_193.s8, "p_1167->g_193.s8", print_hash_value);
    transparent_crc(p_1167->g_193.s9, "p_1167->g_193.s9", print_hash_value);
    transparent_crc(p_1167->g_193.sa, "p_1167->g_193.sa", print_hash_value);
    transparent_crc(p_1167->g_193.sb, "p_1167->g_193.sb", print_hash_value);
    transparent_crc(p_1167->g_193.sc, "p_1167->g_193.sc", print_hash_value);
    transparent_crc(p_1167->g_193.sd, "p_1167->g_193.sd", print_hash_value);
    transparent_crc(p_1167->g_193.se, "p_1167->g_193.se", print_hash_value);
    transparent_crc(p_1167->g_193.sf, "p_1167->g_193.sf", print_hash_value);
    transparent_crc(p_1167->g_194.s0, "p_1167->g_194.s0", print_hash_value);
    transparent_crc(p_1167->g_194.s1, "p_1167->g_194.s1", print_hash_value);
    transparent_crc(p_1167->g_194.s2, "p_1167->g_194.s2", print_hash_value);
    transparent_crc(p_1167->g_194.s3, "p_1167->g_194.s3", print_hash_value);
    transparent_crc(p_1167->g_194.s4, "p_1167->g_194.s4", print_hash_value);
    transparent_crc(p_1167->g_194.s5, "p_1167->g_194.s5", print_hash_value);
    transparent_crc(p_1167->g_194.s6, "p_1167->g_194.s6", print_hash_value);
    transparent_crc(p_1167->g_194.s7, "p_1167->g_194.s7", print_hash_value);
    transparent_crc(p_1167->g_195.x, "p_1167->g_195.x", print_hash_value);
    transparent_crc(p_1167->g_195.y, "p_1167->g_195.y", print_hash_value);
    transparent_crc(p_1167->g_211, "p_1167->g_211", print_hash_value);
    transparent_crc(p_1167->g_214, "p_1167->g_214", print_hash_value);
    transparent_crc(p_1167->g_276.s0, "p_1167->g_276.s0", print_hash_value);
    transparent_crc(p_1167->g_276.s1, "p_1167->g_276.s1", print_hash_value);
    transparent_crc(p_1167->g_276.s2, "p_1167->g_276.s2", print_hash_value);
    transparent_crc(p_1167->g_276.s3, "p_1167->g_276.s3", print_hash_value);
    transparent_crc(p_1167->g_276.s4, "p_1167->g_276.s4", print_hash_value);
    transparent_crc(p_1167->g_276.s5, "p_1167->g_276.s5", print_hash_value);
    transparent_crc(p_1167->g_276.s6, "p_1167->g_276.s6", print_hash_value);
    transparent_crc(p_1167->g_276.s7, "p_1167->g_276.s7", print_hash_value);
    transparent_crc(p_1167->g_277.s0, "p_1167->g_277.s0", print_hash_value);
    transparent_crc(p_1167->g_277.s1, "p_1167->g_277.s1", print_hash_value);
    transparent_crc(p_1167->g_277.s2, "p_1167->g_277.s2", print_hash_value);
    transparent_crc(p_1167->g_277.s3, "p_1167->g_277.s3", print_hash_value);
    transparent_crc(p_1167->g_277.s4, "p_1167->g_277.s4", print_hash_value);
    transparent_crc(p_1167->g_277.s5, "p_1167->g_277.s5", print_hash_value);
    transparent_crc(p_1167->g_277.s6, "p_1167->g_277.s6", print_hash_value);
    transparent_crc(p_1167->g_277.s7, "p_1167->g_277.s7", print_hash_value);
    transparent_crc(p_1167->g_296, "p_1167->g_296", print_hash_value);
    transparent_crc(p_1167->g_335.x, "p_1167->g_335.x", print_hash_value);
    transparent_crc(p_1167->g_335.y, "p_1167->g_335.y", print_hash_value);
    transparent_crc(p_1167->g_346.x, "p_1167->g_346.x", print_hash_value);
    transparent_crc(p_1167->g_346.y, "p_1167->g_346.y", print_hash_value);
    transparent_crc(p_1167->g_360.s0, "p_1167->g_360.s0", print_hash_value);
    transparent_crc(p_1167->g_360.s1, "p_1167->g_360.s1", print_hash_value);
    transparent_crc(p_1167->g_360.s2, "p_1167->g_360.s2", print_hash_value);
    transparent_crc(p_1167->g_360.s3, "p_1167->g_360.s3", print_hash_value);
    transparent_crc(p_1167->g_360.s4, "p_1167->g_360.s4", print_hash_value);
    transparent_crc(p_1167->g_360.s5, "p_1167->g_360.s5", print_hash_value);
    transparent_crc(p_1167->g_360.s6, "p_1167->g_360.s6", print_hash_value);
    transparent_crc(p_1167->g_360.s7, "p_1167->g_360.s7", print_hash_value);
    transparent_crc(p_1167->g_376, "p_1167->g_376", print_hash_value);
    transparent_crc(p_1167->g_380, "p_1167->g_380", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1167->g_392[i][j], "p_1167->g_392[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1167->g_399.s0, "p_1167->g_399.s0", print_hash_value);
    transparent_crc(p_1167->g_399.s1, "p_1167->g_399.s1", print_hash_value);
    transparent_crc(p_1167->g_399.s2, "p_1167->g_399.s2", print_hash_value);
    transparent_crc(p_1167->g_399.s3, "p_1167->g_399.s3", print_hash_value);
    transparent_crc(p_1167->g_399.s4, "p_1167->g_399.s4", print_hash_value);
    transparent_crc(p_1167->g_399.s5, "p_1167->g_399.s5", print_hash_value);
    transparent_crc(p_1167->g_399.s6, "p_1167->g_399.s6", print_hash_value);
    transparent_crc(p_1167->g_399.s7, "p_1167->g_399.s7", print_hash_value);
    transparent_crc(p_1167->g_401.x, "p_1167->g_401.x", print_hash_value);
    transparent_crc(p_1167->g_401.y, "p_1167->g_401.y", print_hash_value);
    transparent_crc(p_1167->g_428.s0, "p_1167->g_428.s0", print_hash_value);
    transparent_crc(p_1167->g_428.s1, "p_1167->g_428.s1", print_hash_value);
    transparent_crc(p_1167->g_428.s2, "p_1167->g_428.s2", print_hash_value);
    transparent_crc(p_1167->g_428.s3, "p_1167->g_428.s3", print_hash_value);
    transparent_crc(p_1167->g_428.s4, "p_1167->g_428.s4", print_hash_value);
    transparent_crc(p_1167->g_428.s5, "p_1167->g_428.s5", print_hash_value);
    transparent_crc(p_1167->g_428.s6, "p_1167->g_428.s6", print_hash_value);
    transparent_crc(p_1167->g_428.s7, "p_1167->g_428.s7", print_hash_value);
    transparent_crc(p_1167->g_445, "p_1167->g_445", print_hash_value);
    transparent_crc(p_1167->g_450, "p_1167->g_450", print_hash_value);
    transparent_crc(p_1167->g_463, "p_1167->g_463", print_hash_value);
    transparent_crc(p_1167->g_474.x, "p_1167->g_474.x", print_hash_value);
    transparent_crc(p_1167->g_474.y, "p_1167->g_474.y", print_hash_value);
    transparent_crc(p_1167->g_474.z, "p_1167->g_474.z", print_hash_value);
    transparent_crc(p_1167->g_474.w, "p_1167->g_474.w", print_hash_value);
    transparent_crc(p_1167->g_516.s0, "p_1167->g_516.s0", print_hash_value);
    transparent_crc(p_1167->g_516.s1, "p_1167->g_516.s1", print_hash_value);
    transparent_crc(p_1167->g_516.s2, "p_1167->g_516.s2", print_hash_value);
    transparent_crc(p_1167->g_516.s3, "p_1167->g_516.s3", print_hash_value);
    transparent_crc(p_1167->g_516.s4, "p_1167->g_516.s4", print_hash_value);
    transparent_crc(p_1167->g_516.s5, "p_1167->g_516.s5", print_hash_value);
    transparent_crc(p_1167->g_516.s6, "p_1167->g_516.s6", print_hash_value);
    transparent_crc(p_1167->g_516.s7, "p_1167->g_516.s7", print_hash_value);
    transparent_crc(p_1167->g_529.s0, "p_1167->g_529.s0", print_hash_value);
    transparent_crc(p_1167->g_529.s1, "p_1167->g_529.s1", print_hash_value);
    transparent_crc(p_1167->g_529.s2, "p_1167->g_529.s2", print_hash_value);
    transparent_crc(p_1167->g_529.s3, "p_1167->g_529.s3", print_hash_value);
    transparent_crc(p_1167->g_529.s4, "p_1167->g_529.s4", print_hash_value);
    transparent_crc(p_1167->g_529.s5, "p_1167->g_529.s5", print_hash_value);
    transparent_crc(p_1167->g_529.s6, "p_1167->g_529.s6", print_hash_value);
    transparent_crc(p_1167->g_529.s7, "p_1167->g_529.s7", print_hash_value);
    transparent_crc(p_1167->g_529.s8, "p_1167->g_529.s8", print_hash_value);
    transparent_crc(p_1167->g_529.s9, "p_1167->g_529.s9", print_hash_value);
    transparent_crc(p_1167->g_529.sa, "p_1167->g_529.sa", print_hash_value);
    transparent_crc(p_1167->g_529.sb, "p_1167->g_529.sb", print_hash_value);
    transparent_crc(p_1167->g_529.sc, "p_1167->g_529.sc", print_hash_value);
    transparent_crc(p_1167->g_529.sd, "p_1167->g_529.sd", print_hash_value);
    transparent_crc(p_1167->g_529.se, "p_1167->g_529.se", print_hash_value);
    transparent_crc(p_1167->g_529.sf, "p_1167->g_529.sf", print_hash_value);
    transparent_crc(p_1167->g_530.s0, "p_1167->g_530.s0", print_hash_value);
    transparent_crc(p_1167->g_530.s1, "p_1167->g_530.s1", print_hash_value);
    transparent_crc(p_1167->g_530.s2, "p_1167->g_530.s2", print_hash_value);
    transparent_crc(p_1167->g_530.s3, "p_1167->g_530.s3", print_hash_value);
    transparent_crc(p_1167->g_530.s4, "p_1167->g_530.s4", print_hash_value);
    transparent_crc(p_1167->g_530.s5, "p_1167->g_530.s5", print_hash_value);
    transparent_crc(p_1167->g_530.s6, "p_1167->g_530.s6", print_hash_value);
    transparent_crc(p_1167->g_530.s7, "p_1167->g_530.s7", print_hash_value);
    transparent_crc(p_1167->g_530.s8, "p_1167->g_530.s8", print_hash_value);
    transparent_crc(p_1167->g_530.s9, "p_1167->g_530.s9", print_hash_value);
    transparent_crc(p_1167->g_530.sa, "p_1167->g_530.sa", print_hash_value);
    transparent_crc(p_1167->g_530.sb, "p_1167->g_530.sb", print_hash_value);
    transparent_crc(p_1167->g_530.sc, "p_1167->g_530.sc", print_hash_value);
    transparent_crc(p_1167->g_530.sd, "p_1167->g_530.sd", print_hash_value);
    transparent_crc(p_1167->g_530.se, "p_1167->g_530.se", print_hash_value);
    transparent_crc(p_1167->g_530.sf, "p_1167->g_530.sf", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1167->g_534[i], "p_1167->g_534[i]", print_hash_value);

    }
    transparent_crc(p_1167->g_551, "p_1167->g_551", print_hash_value);
    transparent_crc(p_1167->g_585.s0, "p_1167->g_585.s0", print_hash_value);
    transparent_crc(p_1167->g_585.s1, "p_1167->g_585.s1", print_hash_value);
    transparent_crc(p_1167->g_585.s2, "p_1167->g_585.s2", print_hash_value);
    transparent_crc(p_1167->g_585.s3, "p_1167->g_585.s3", print_hash_value);
    transparent_crc(p_1167->g_585.s4, "p_1167->g_585.s4", print_hash_value);
    transparent_crc(p_1167->g_585.s5, "p_1167->g_585.s5", print_hash_value);
    transparent_crc(p_1167->g_585.s6, "p_1167->g_585.s6", print_hash_value);
    transparent_crc(p_1167->g_585.s7, "p_1167->g_585.s7", print_hash_value);
    transparent_crc(p_1167->g_585.s8, "p_1167->g_585.s8", print_hash_value);
    transparent_crc(p_1167->g_585.s9, "p_1167->g_585.s9", print_hash_value);
    transparent_crc(p_1167->g_585.sa, "p_1167->g_585.sa", print_hash_value);
    transparent_crc(p_1167->g_585.sb, "p_1167->g_585.sb", print_hash_value);
    transparent_crc(p_1167->g_585.sc, "p_1167->g_585.sc", print_hash_value);
    transparent_crc(p_1167->g_585.sd, "p_1167->g_585.sd", print_hash_value);
    transparent_crc(p_1167->g_585.se, "p_1167->g_585.se", print_hash_value);
    transparent_crc(p_1167->g_585.sf, "p_1167->g_585.sf", print_hash_value);
    transparent_crc(p_1167->g_616, "p_1167->g_616", print_hash_value);
    transparent_crc(p_1167->g_619, "p_1167->g_619", print_hash_value);
    transparent_crc(p_1167->g_685.x, "p_1167->g_685.x", print_hash_value);
    transparent_crc(p_1167->g_685.y, "p_1167->g_685.y", print_hash_value);
    transparent_crc(p_1167->g_685.z, "p_1167->g_685.z", print_hash_value);
    transparent_crc(p_1167->g_685.w, "p_1167->g_685.w", print_hash_value);
    transparent_crc(p_1167->g_695.s0, "p_1167->g_695.s0", print_hash_value);
    transparent_crc(p_1167->g_695.s1, "p_1167->g_695.s1", print_hash_value);
    transparent_crc(p_1167->g_695.s2, "p_1167->g_695.s2", print_hash_value);
    transparent_crc(p_1167->g_695.s3, "p_1167->g_695.s3", print_hash_value);
    transparent_crc(p_1167->g_695.s4, "p_1167->g_695.s4", print_hash_value);
    transparent_crc(p_1167->g_695.s5, "p_1167->g_695.s5", print_hash_value);
    transparent_crc(p_1167->g_695.s6, "p_1167->g_695.s6", print_hash_value);
    transparent_crc(p_1167->g_695.s7, "p_1167->g_695.s7", print_hash_value);
    transparent_crc(p_1167->g_711, "p_1167->g_711", print_hash_value);
    transparent_crc(p_1167->g_751.s0, "p_1167->g_751.s0", print_hash_value);
    transparent_crc(p_1167->g_751.s1, "p_1167->g_751.s1", print_hash_value);
    transparent_crc(p_1167->g_751.s2, "p_1167->g_751.s2", print_hash_value);
    transparent_crc(p_1167->g_751.s3, "p_1167->g_751.s3", print_hash_value);
    transparent_crc(p_1167->g_751.s4, "p_1167->g_751.s4", print_hash_value);
    transparent_crc(p_1167->g_751.s5, "p_1167->g_751.s5", print_hash_value);
    transparent_crc(p_1167->g_751.s6, "p_1167->g_751.s6", print_hash_value);
    transparent_crc(p_1167->g_751.s7, "p_1167->g_751.s7", print_hash_value);
    transparent_crc(p_1167->g_766.s0, "p_1167->g_766.s0", print_hash_value);
    transparent_crc(p_1167->g_766.s1, "p_1167->g_766.s1", print_hash_value);
    transparent_crc(p_1167->g_766.s2, "p_1167->g_766.s2", print_hash_value);
    transparent_crc(p_1167->g_766.s3, "p_1167->g_766.s3", print_hash_value);
    transparent_crc(p_1167->g_766.s4, "p_1167->g_766.s4", print_hash_value);
    transparent_crc(p_1167->g_766.s5, "p_1167->g_766.s5", print_hash_value);
    transparent_crc(p_1167->g_766.s6, "p_1167->g_766.s6", print_hash_value);
    transparent_crc(p_1167->g_766.s7, "p_1167->g_766.s7", print_hash_value);
    transparent_crc(p_1167->g_776.s0, "p_1167->g_776.s0", print_hash_value);
    transparent_crc(p_1167->g_776.s1, "p_1167->g_776.s1", print_hash_value);
    transparent_crc(p_1167->g_776.s2, "p_1167->g_776.s2", print_hash_value);
    transparent_crc(p_1167->g_776.s3, "p_1167->g_776.s3", print_hash_value);
    transparent_crc(p_1167->g_776.s4, "p_1167->g_776.s4", print_hash_value);
    transparent_crc(p_1167->g_776.s5, "p_1167->g_776.s5", print_hash_value);
    transparent_crc(p_1167->g_776.s6, "p_1167->g_776.s6", print_hash_value);
    transparent_crc(p_1167->g_776.s7, "p_1167->g_776.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1167->g_804[i], "p_1167->g_804[i]", print_hash_value);

    }
    transparent_crc(p_1167->g_809.s0, "p_1167->g_809.s0", print_hash_value);
    transparent_crc(p_1167->g_809.s1, "p_1167->g_809.s1", print_hash_value);
    transparent_crc(p_1167->g_809.s2, "p_1167->g_809.s2", print_hash_value);
    transparent_crc(p_1167->g_809.s3, "p_1167->g_809.s3", print_hash_value);
    transparent_crc(p_1167->g_809.s4, "p_1167->g_809.s4", print_hash_value);
    transparent_crc(p_1167->g_809.s5, "p_1167->g_809.s5", print_hash_value);
    transparent_crc(p_1167->g_809.s6, "p_1167->g_809.s6", print_hash_value);
    transparent_crc(p_1167->g_809.s7, "p_1167->g_809.s7", print_hash_value);
    transparent_crc(p_1167->g_811.s0, "p_1167->g_811.s0", print_hash_value);
    transparent_crc(p_1167->g_811.s1, "p_1167->g_811.s1", print_hash_value);
    transparent_crc(p_1167->g_811.s2, "p_1167->g_811.s2", print_hash_value);
    transparent_crc(p_1167->g_811.s3, "p_1167->g_811.s3", print_hash_value);
    transparent_crc(p_1167->g_811.s4, "p_1167->g_811.s4", print_hash_value);
    transparent_crc(p_1167->g_811.s5, "p_1167->g_811.s5", print_hash_value);
    transparent_crc(p_1167->g_811.s6, "p_1167->g_811.s6", print_hash_value);
    transparent_crc(p_1167->g_811.s7, "p_1167->g_811.s7", print_hash_value);
    transparent_crc(p_1167->g_812.x, "p_1167->g_812.x", print_hash_value);
    transparent_crc(p_1167->g_812.y, "p_1167->g_812.y", print_hash_value);
    transparent_crc(p_1167->g_812.z, "p_1167->g_812.z", print_hash_value);
    transparent_crc(p_1167->g_812.w, "p_1167->g_812.w", print_hash_value);
    transparent_crc(p_1167->g_826.s0, "p_1167->g_826.s0", print_hash_value);
    transparent_crc(p_1167->g_826.s1, "p_1167->g_826.s1", print_hash_value);
    transparent_crc(p_1167->g_826.s2, "p_1167->g_826.s2", print_hash_value);
    transparent_crc(p_1167->g_826.s3, "p_1167->g_826.s3", print_hash_value);
    transparent_crc(p_1167->g_826.s4, "p_1167->g_826.s4", print_hash_value);
    transparent_crc(p_1167->g_826.s5, "p_1167->g_826.s5", print_hash_value);
    transparent_crc(p_1167->g_826.s6, "p_1167->g_826.s6", print_hash_value);
    transparent_crc(p_1167->g_826.s7, "p_1167->g_826.s7", print_hash_value);
    transparent_crc(p_1167->g_827.x, "p_1167->g_827.x", print_hash_value);
    transparent_crc(p_1167->g_827.y, "p_1167->g_827.y", print_hash_value);
    transparent_crc(p_1167->g_828.s0, "p_1167->g_828.s0", print_hash_value);
    transparent_crc(p_1167->g_828.s1, "p_1167->g_828.s1", print_hash_value);
    transparent_crc(p_1167->g_828.s2, "p_1167->g_828.s2", print_hash_value);
    transparent_crc(p_1167->g_828.s3, "p_1167->g_828.s3", print_hash_value);
    transparent_crc(p_1167->g_828.s4, "p_1167->g_828.s4", print_hash_value);
    transparent_crc(p_1167->g_828.s5, "p_1167->g_828.s5", print_hash_value);
    transparent_crc(p_1167->g_828.s6, "p_1167->g_828.s6", print_hash_value);
    transparent_crc(p_1167->g_828.s7, "p_1167->g_828.s7", print_hash_value);
    transparent_crc(p_1167->g_911.s0, "p_1167->g_911.s0", print_hash_value);
    transparent_crc(p_1167->g_911.s1, "p_1167->g_911.s1", print_hash_value);
    transparent_crc(p_1167->g_911.s2, "p_1167->g_911.s2", print_hash_value);
    transparent_crc(p_1167->g_911.s3, "p_1167->g_911.s3", print_hash_value);
    transparent_crc(p_1167->g_911.s4, "p_1167->g_911.s4", print_hash_value);
    transparent_crc(p_1167->g_911.s5, "p_1167->g_911.s5", print_hash_value);
    transparent_crc(p_1167->g_911.s6, "p_1167->g_911.s6", print_hash_value);
    transparent_crc(p_1167->g_911.s7, "p_1167->g_911.s7", print_hash_value);
    transparent_crc(p_1167->g_911.s8, "p_1167->g_911.s8", print_hash_value);
    transparent_crc(p_1167->g_911.s9, "p_1167->g_911.s9", print_hash_value);
    transparent_crc(p_1167->g_911.sa, "p_1167->g_911.sa", print_hash_value);
    transparent_crc(p_1167->g_911.sb, "p_1167->g_911.sb", print_hash_value);
    transparent_crc(p_1167->g_911.sc, "p_1167->g_911.sc", print_hash_value);
    transparent_crc(p_1167->g_911.sd, "p_1167->g_911.sd", print_hash_value);
    transparent_crc(p_1167->g_911.se, "p_1167->g_911.se", print_hash_value);
    transparent_crc(p_1167->g_911.sf, "p_1167->g_911.sf", print_hash_value);
    transparent_crc(p_1167->g_912.x, "p_1167->g_912.x", print_hash_value);
    transparent_crc(p_1167->g_912.y, "p_1167->g_912.y", print_hash_value);
    transparent_crc(p_1167->g_947.x, "p_1167->g_947.x", print_hash_value);
    transparent_crc(p_1167->g_947.y, "p_1167->g_947.y", print_hash_value);
    transparent_crc(p_1167->g_1037.s0, "p_1167->g_1037.s0", print_hash_value);
    transparent_crc(p_1167->g_1037.s1, "p_1167->g_1037.s1", print_hash_value);
    transparent_crc(p_1167->g_1037.s2, "p_1167->g_1037.s2", print_hash_value);
    transparent_crc(p_1167->g_1037.s3, "p_1167->g_1037.s3", print_hash_value);
    transparent_crc(p_1167->g_1037.s4, "p_1167->g_1037.s4", print_hash_value);
    transparent_crc(p_1167->g_1037.s5, "p_1167->g_1037.s5", print_hash_value);
    transparent_crc(p_1167->g_1037.s6, "p_1167->g_1037.s6", print_hash_value);
    transparent_crc(p_1167->g_1037.s7, "p_1167->g_1037.s7", print_hash_value);
    transparent_crc(p_1167->g_1037.s8, "p_1167->g_1037.s8", print_hash_value);
    transparent_crc(p_1167->g_1037.s9, "p_1167->g_1037.s9", print_hash_value);
    transparent_crc(p_1167->g_1037.sa, "p_1167->g_1037.sa", print_hash_value);
    transparent_crc(p_1167->g_1037.sb, "p_1167->g_1037.sb", print_hash_value);
    transparent_crc(p_1167->g_1037.sc, "p_1167->g_1037.sc", print_hash_value);
    transparent_crc(p_1167->g_1037.sd, "p_1167->g_1037.sd", print_hash_value);
    transparent_crc(p_1167->g_1037.se, "p_1167->g_1037.se", print_hash_value);
    transparent_crc(p_1167->g_1037.sf, "p_1167->g_1037.sf", print_hash_value);
    transparent_crc(p_1167->g_1038.x, "p_1167->g_1038.x", print_hash_value);
    transparent_crc(p_1167->g_1038.y, "p_1167->g_1038.y", print_hash_value);
    transparent_crc(p_1167->g_1038.z, "p_1167->g_1038.z", print_hash_value);
    transparent_crc(p_1167->g_1038.w, "p_1167->g_1038.w", print_hash_value);
    transparent_crc(p_1167->g_1039.s0, "p_1167->g_1039.s0", print_hash_value);
    transparent_crc(p_1167->g_1039.s1, "p_1167->g_1039.s1", print_hash_value);
    transparent_crc(p_1167->g_1039.s2, "p_1167->g_1039.s2", print_hash_value);
    transparent_crc(p_1167->g_1039.s3, "p_1167->g_1039.s3", print_hash_value);
    transparent_crc(p_1167->g_1039.s4, "p_1167->g_1039.s4", print_hash_value);
    transparent_crc(p_1167->g_1039.s5, "p_1167->g_1039.s5", print_hash_value);
    transparent_crc(p_1167->g_1039.s6, "p_1167->g_1039.s6", print_hash_value);
    transparent_crc(p_1167->g_1039.s7, "p_1167->g_1039.s7", print_hash_value);
    transparent_crc(p_1167->g_1041.s0, "p_1167->g_1041.s0", print_hash_value);
    transparent_crc(p_1167->g_1041.s1, "p_1167->g_1041.s1", print_hash_value);
    transparent_crc(p_1167->g_1041.s2, "p_1167->g_1041.s2", print_hash_value);
    transparent_crc(p_1167->g_1041.s3, "p_1167->g_1041.s3", print_hash_value);
    transparent_crc(p_1167->g_1041.s4, "p_1167->g_1041.s4", print_hash_value);
    transparent_crc(p_1167->g_1041.s5, "p_1167->g_1041.s5", print_hash_value);
    transparent_crc(p_1167->g_1041.s6, "p_1167->g_1041.s6", print_hash_value);
    transparent_crc(p_1167->g_1041.s7, "p_1167->g_1041.s7", print_hash_value);
    transparent_crc(p_1167->g_1045.x, "p_1167->g_1045.x", print_hash_value);
    transparent_crc(p_1167->g_1045.y, "p_1167->g_1045.y", print_hash_value);
    transparent_crc(p_1167->g_1046.x, "p_1167->g_1046.x", print_hash_value);
    transparent_crc(p_1167->g_1046.y, "p_1167->g_1046.y", print_hash_value);
    transparent_crc(p_1167->g_1046.z, "p_1167->g_1046.z", print_hash_value);
    transparent_crc(p_1167->g_1046.w, "p_1167->g_1046.w", print_hash_value);
    transparent_crc(p_1167->g_1057.s0, "p_1167->g_1057.s0", print_hash_value);
    transparent_crc(p_1167->g_1057.s1, "p_1167->g_1057.s1", print_hash_value);
    transparent_crc(p_1167->g_1057.s2, "p_1167->g_1057.s2", print_hash_value);
    transparent_crc(p_1167->g_1057.s3, "p_1167->g_1057.s3", print_hash_value);
    transparent_crc(p_1167->g_1057.s4, "p_1167->g_1057.s4", print_hash_value);
    transparent_crc(p_1167->g_1057.s5, "p_1167->g_1057.s5", print_hash_value);
    transparent_crc(p_1167->g_1057.s6, "p_1167->g_1057.s6", print_hash_value);
    transparent_crc(p_1167->g_1057.s7, "p_1167->g_1057.s7", print_hash_value);
    transparent_crc(p_1167->g_1058.s0, "p_1167->g_1058.s0", print_hash_value);
    transparent_crc(p_1167->g_1058.s1, "p_1167->g_1058.s1", print_hash_value);
    transparent_crc(p_1167->g_1058.s2, "p_1167->g_1058.s2", print_hash_value);
    transparent_crc(p_1167->g_1058.s3, "p_1167->g_1058.s3", print_hash_value);
    transparent_crc(p_1167->g_1058.s4, "p_1167->g_1058.s4", print_hash_value);
    transparent_crc(p_1167->g_1058.s5, "p_1167->g_1058.s5", print_hash_value);
    transparent_crc(p_1167->g_1058.s6, "p_1167->g_1058.s6", print_hash_value);
    transparent_crc(p_1167->g_1058.s7, "p_1167->g_1058.s7", print_hash_value);
    transparent_crc(p_1167->g_1067.s0, "p_1167->g_1067.s0", print_hash_value);
    transparent_crc(p_1167->g_1067.s1, "p_1167->g_1067.s1", print_hash_value);
    transparent_crc(p_1167->g_1067.s2, "p_1167->g_1067.s2", print_hash_value);
    transparent_crc(p_1167->g_1067.s3, "p_1167->g_1067.s3", print_hash_value);
    transparent_crc(p_1167->g_1067.s4, "p_1167->g_1067.s4", print_hash_value);
    transparent_crc(p_1167->g_1067.s5, "p_1167->g_1067.s5", print_hash_value);
    transparent_crc(p_1167->g_1067.s6, "p_1167->g_1067.s6", print_hash_value);
    transparent_crc(p_1167->g_1067.s7, "p_1167->g_1067.s7", print_hash_value);
    transparent_crc(p_1167->g_1078.s0, "p_1167->g_1078.s0", print_hash_value);
    transparent_crc(p_1167->g_1078.s1, "p_1167->g_1078.s1", print_hash_value);
    transparent_crc(p_1167->g_1078.s2, "p_1167->g_1078.s2", print_hash_value);
    transparent_crc(p_1167->g_1078.s3, "p_1167->g_1078.s3", print_hash_value);
    transparent_crc(p_1167->g_1078.s4, "p_1167->g_1078.s4", print_hash_value);
    transparent_crc(p_1167->g_1078.s5, "p_1167->g_1078.s5", print_hash_value);
    transparent_crc(p_1167->g_1078.s6, "p_1167->g_1078.s6", print_hash_value);
    transparent_crc(p_1167->g_1078.s7, "p_1167->g_1078.s7", print_hash_value);
    transparent_crc(p_1167->g_1084, "p_1167->g_1084", print_hash_value);
    transparent_crc(p_1167->g_1085, "p_1167->g_1085", print_hash_value);
    transparent_crc(p_1167->g_1139, "p_1167->g_1139", print_hash_value);
    transparent_crc(p_1167->g_1146.s0, "p_1167->g_1146.s0", print_hash_value);
    transparent_crc(p_1167->g_1146.s1, "p_1167->g_1146.s1", print_hash_value);
    transparent_crc(p_1167->g_1146.s2, "p_1167->g_1146.s2", print_hash_value);
    transparent_crc(p_1167->g_1146.s3, "p_1167->g_1146.s3", print_hash_value);
    transparent_crc(p_1167->g_1146.s4, "p_1167->g_1146.s4", print_hash_value);
    transparent_crc(p_1167->g_1146.s5, "p_1167->g_1146.s5", print_hash_value);
    transparent_crc(p_1167->g_1146.s6, "p_1167->g_1146.s6", print_hash_value);
    transparent_crc(p_1167->g_1146.s7, "p_1167->g_1146.s7", print_hash_value);
    transparent_crc(p_1167->g_1147.s0, "p_1167->g_1147.s0", print_hash_value);
    transparent_crc(p_1167->g_1147.s1, "p_1167->g_1147.s1", print_hash_value);
    transparent_crc(p_1167->g_1147.s2, "p_1167->g_1147.s2", print_hash_value);
    transparent_crc(p_1167->g_1147.s3, "p_1167->g_1147.s3", print_hash_value);
    transparent_crc(p_1167->g_1147.s4, "p_1167->g_1147.s4", print_hash_value);
    transparent_crc(p_1167->g_1147.s5, "p_1167->g_1147.s5", print_hash_value);
    transparent_crc(p_1167->g_1147.s6, "p_1167->g_1147.s6", print_hash_value);
    transparent_crc(p_1167->g_1147.s7, "p_1167->g_1147.s7", print_hash_value);
    transparent_crc(p_1167->v_collective, "p_1167->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 20; i++)
            transparent_crc(p_1167->g_special_values[i + 20 * get_linear_group_id()], "p_1167->g_special_values[i + 20 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 20; i++)
            transparent_crc(p_1167->l_special_values[i], "p_1167->l_special_values[i]", print_hash_value);
    transparent_crc(p_1167->l_comm_values[get_linear_local_id()], "p_1167->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1167->g_comm_values[get_linear_group_id() * 60 + get_linear_local_id()], "p_1167->g_comm_values[get_linear_group_id() * 60 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
