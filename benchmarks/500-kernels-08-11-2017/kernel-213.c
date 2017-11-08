// --atomics 59 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 33,34,2 -l 1,17,2
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

__constant uint32_t permutations[10][34] = {
{7,5,14,22,4,20,32,31,2,1,33,9,16,6,26,28,23,21,13,30,15,25,8,27,10,3,11,18,19,12,24,17,29,0}, // permutation 0
{3,27,22,17,30,24,5,19,9,6,7,1,28,14,12,26,16,11,31,15,0,2,13,18,10,25,4,8,21,32,20,29,23,33}, // permutation 1
{14,16,9,6,26,33,12,28,30,11,3,27,17,19,1,2,20,18,15,22,4,21,25,13,7,10,32,5,0,23,24,29,31,8}, // permutation 2
{23,14,6,20,32,27,33,13,12,29,22,30,2,3,18,5,28,1,0,15,26,25,11,31,17,7,21,10,8,19,24,4,16,9}, // permutation 3
{31,0,12,10,7,8,23,21,25,9,14,33,20,18,15,22,2,4,16,26,24,30,1,5,32,19,28,17,11,6,13,27,29,3}, // permutation 4
{8,19,30,26,2,14,9,25,13,20,27,23,1,31,15,0,17,32,11,33,12,3,6,18,16,4,24,5,7,10,28,21,22,29}, // permutation 5
{22,0,6,16,9,30,19,11,27,13,5,33,15,25,12,21,29,32,17,2,3,4,28,1,24,31,8,20,26,18,10,14,23,7}, // permutation 6
{10,13,30,2,25,29,17,5,12,19,28,21,8,14,33,6,11,26,24,7,22,31,1,16,15,18,3,23,4,32,20,27,9,0}, // permutation 7
{3,16,21,24,4,2,17,10,25,20,28,8,12,19,27,18,23,7,6,13,31,29,26,14,32,33,11,15,22,5,9,30,1,0}, // permutation 8
{16,22,33,27,1,0,13,28,7,23,18,3,5,29,21,14,24,26,17,2,9,32,11,31,25,8,15,12,19,20,6,30,4,10} // permutation 9
};

// Seed: 2674908185

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int64_t g_2;
    int32_t g_6;
    volatile int64_t g_13[1];
    volatile int64_t g_16;
    uint32_t g_18;
    int32_t g_61;
    int32_t *g_77[9][5][5];
    int32_t **g_76[5][10][5];
    int32_t **g_78;
    int32_t **g_79;
    VECTOR(int64_t, 16) g_81;
    uint8_t g_89;
    uint8_t g_93;
    volatile uint32_t g_96;
    int16_t g_98;
    uint8_t g_100;
    int8_t g_117;
    uint32_t g_127[4];
    volatile uint64_t g_132;
    uint32_t g_170;
    volatile int32_t g_188;
    VECTOR(uint64_t, 8) g_214;
    int16_t *g_215;
    VECTOR(uint8_t, 16) g_216;
    volatile VECTOR(uint64_t, 4) g_230;
    volatile uint64_t g_231;
    volatile uint64_t *g_229;
    VECTOR(uint8_t, 4) g_244;
    uint16_t g_258;
    uint16_t g_266;
    VECTOR(uint8_t, 16) g_318;
    volatile uint64_t ** volatile g_321;
    volatile uint64_t ** volatile *g_320;
    volatile VECTOR(int64_t, 2) g_364;
    VECTOR(uint64_t, 2) g_391;
    volatile VECTOR(uint64_t, 2) g_392;
    int32_t g_394;
    int64_t g_398;
    VECTOR(int32_t, 8) g_399;
    int16_t g_402;
    int32_t *g_404;
    volatile int32_t g_436;
    volatile uint16_t g_437;
    volatile int8_t **g_473[1];
    volatile VECTOR(uint16_t, 16) g_496;
    VECTOR(uint8_t, 8) g_507;
    volatile VECTOR(uint64_t, 16) g_512;
    VECTOR(int64_t, 16) g_518;
    int8_t g_524;
    int32_t *g_528;
    int32_t **g_527[6];
    VECTOR(int8_t, 16) g_550;
    int32_t * volatile g_567;
    int32_t * volatile g_568[6];
    uint64_t g_659;
    volatile VECTOR(uint16_t, 2) g_685;
    uint8_t g_695;
    volatile VECTOR(uint16_t, 2) g_719;
    VECTOR(int8_t, 4) g_726;
    uint32_t * volatile *g_738;
    uint64_t g_770;
    volatile VECTOR(uint16_t, 8) g_809;
    volatile VECTOR(uint16_t, 8) g_810;
    int32_t *g_824;
    int32_t **g_823;
    VECTOR(uint32_t, 2) g_826;
    volatile VECTOR(int8_t, 16) g_830;
    uint8_t g_874;
    int8_t g_893;
    VECTOR(int8_t, 2) g_931;
    volatile VECTOR(int32_t, 16) g_959;
    VECTOR(int32_t, 2) g_972;
    volatile uint8_t g_985[6][7][2];
    VECTOR(int8_t, 8) g_998;
    int32_t g_1032;
    int32_t ** volatile g_1035[6];
    int32_t ** volatile g_1037[1];
    int32_t ** volatile g_1038;
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
int32_t  func_1(struct S0 * p_1042);
int32_t ** func_21(uint8_t  p_22, int32_t * p_23, int32_t * p_24, uint16_t  p_25, int32_t * p_26, struct S0 * p_1042);
int32_t * func_27(uint32_t  p_28, int32_t ** p_29, int32_t ** p_30, int32_t  p_31, int32_t * p_32, struct S0 * p_1042);
int32_t ** func_33(int16_t  p_34, uint32_t  p_35, struct S0 * p_1042);
uint64_t  func_36(int32_t ** p_37, int32_t  p_38, int32_t  p_39, int32_t * p_40, uint32_t  p_41, struct S0 * p_1042);
int32_t ** func_42(uint32_t  p_43, int8_t  p_44, struct S0 * p_1042);
int16_t  func_45(int64_t  p_46, struct S0 * p_1042);
uint8_t  func_50(int32_t  p_51, int8_t  p_52, int32_t * p_53, int32_t * p_54, uint16_t  p_55, struct S0 * p_1042);
int32_t  func_56(int32_t  p_57, uint32_t  p_58, uint64_t  p_59, int32_t * p_60, struct S0 * p_1042);
int32_t * func_62(int32_t ** p_63, int32_t  p_64, int64_t  p_65, struct S0 * p_1042);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1042->g_2 p_1042->g_18 p_1042->g_comm_values p_1042->g_127 p_1042->g_6 p_1042->g_98 p_1042->g_170 p_1042->g_96 p_1042->g_214 p_1042->g_93 p_1042->g_266 p_1042->g_320 p_1042->l_comm_values p_1042->g_244 p_1042->g_399 p_1042->g_404 p_1042->g_391 p_1042->g_229 p_1042->g_231 p_1042->g_437 p_1042->g_318 p_1042->g_188 p_1042->g_216 p_1042->g_527 p_1042->g_100 p_1042->g_230 p_1042->g_550 p_1042->g_518 p_1042->g_61 p_1042->g_659 p_1042->g_81 p_1042->g_685 p_1042->g_392 p_1042->g_695 p_1042->g_321 p_1042->g_738 p_1042->g_726 p_1042->g_719 p_1042->g_770 p_1042->g_512 p_1042->g_496 p_1042->g_809 p_1042->g_823 p_1042->g_394 p_1042->g_874 p_1042->g_985 p_1042->g_826 p_1042->g_998 p_1042->g_810 p_1042->g_507 p_1042->g_258 p_1042->g_824 p_1042->g_1032 p_1042->g_1038
 * writes: p_1042->g_2 p_1042->g_18 p_1042->g_6 p_1042->g_266 p_1042->g_81 p_1042->g_61 p_1042->g_89 p_1042->g_93 p_1042->g_100 p_1042->g_394 p_1042->g_398 p_1042->g_77 p_1042->g_402 p_1042->g_437 p_1042->g_117 p_1042->g_98 p_1042->g_527 p_1042->g_404 p_1042->g_258 p_1042->g_695 p_1042->g_659 p_1042->g_726 p_1042->g_770 p_1042->g_127 p_1042->g_507 p_1042->g_170 p_1042->g_824 p_1042->g_524 p_1042->g_391 p_1042->g_1032 p_1042->g_1037
 */
int32_t  func_1(struct S0 * p_1042)
{ /* block id: 4 */
    uint16_t l_7 = 0UL;
    VECTOR(int32_t, 16) l_10 = (VECTOR(int32_t, 16))(0x1646B8D9L, (VECTOR(int32_t, 4))(0x1646B8D9L, (VECTOR(int32_t, 2))(0x1646B8D9L, (-1L)), (-1L)), (-1L), 0x1646B8D9L, (-1L), (VECTOR(int32_t, 2))(0x1646B8D9L, (-1L)), (VECTOR(int32_t, 2))(0x1646B8D9L, (-1L)), 0x1646B8D9L, (-1L), 0x1646B8D9L, (-1L));
    int32_t l_11 = 0x725245F5L;
    int32_t l_12 = 0x09FFF12FL;
    int32_t l_14 = (-1L);
    int32_t l_15 = 0x7D77CCCAL;
    VECTOR(int32_t, 16) l_17 = (VECTOR(int32_t, 16))(0x7276CC72L, (VECTOR(int32_t, 4))(0x7276CC72L, (VECTOR(int32_t, 2))(0x7276CC72L, 0x2BF390F3L), 0x2BF390F3L), 0x2BF390F3L, 0x7276CC72L, 0x2BF390F3L, (VECTOR(int32_t, 2))(0x7276CC72L, 0x2BF390F3L), (VECTOR(int32_t, 2))(0x7276CC72L, 0x2BF390F3L), 0x7276CC72L, 0x2BF390F3L, 0x7276CC72L, 0x2BF390F3L);
    VECTOR(uint8_t, 2) l_49 = (VECTOR(uint8_t, 2))(0x9DL, 0xC1L);
    int32_t *l_67 = (void*)0;
    int32_t **l_66 = &l_67;
    uint32_t l_195 = 5UL;
    VECTOR(int32_t, 4) l_1039 = (VECTOR(int32_t, 4))(0x108425C1L, (VECTOR(int32_t, 2))(0x108425C1L, 0x56036FC0L), 0x56036FC0L);
    int32_t *l_1040 = &l_15;
    uint32_t l_1041 = 0x89EAFDD2L;
    int i;
    p_1042->g_2 ^= 1L;
    for (p_1042->g_2 = (-5); (p_1042->g_2 >= (-14)); --p_1042->g_2)
    { /* block id: 8 */
        int32_t *l_5[9] = {&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6};
        int16_t *l_400 = (void*)0;
        int16_t *l_401[2][2];
        uint8_t *l_694 = &p_1042->g_695;
        uint8_t *l_696 = &p_1042->g_93;
        int32_t *l_825[2];
        uint8_t l_1033 = 247UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_401[i][j] = &p_1042->g_98;
        }
        for (i = 0; i < 2; i++)
            l_825[i] = (void*)0;
        l_7++;
        --p_1042->g_18;
        p_1042->g_1037[0] = func_21(p_1042->g_comm_values[p_1042->tid], func_27(p_1042->g_18, func_33((0x53L > ((((*l_696) = ((*l_694) |= (func_36(func_42(((p_1042->g_402 = func_45((safe_mul_func_int8_t_s_s(((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_49.xy)).xyyyyxxxxyxyyxxy)).s55e3, (uint8_t)func_50((+func_56(l_12, p_1042->g_16, (p_1042->g_61 = ((VECTOR(uint64_t, 4))(18446744073709551615UL, 1UL, 4UL, 2UL)).w), func_62(l_66, p_1042->g_2, (p_1042->g_6 && (0x88AFC007L ^ p_1042->g_18)), p_1042), p_1042)), l_195, l_5[4], p_1042->g_77[0][4][4], p_1042->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1042->tid, 34))], p_1042)))).zzywwzxz)).s5053341054115714)).sf == p_1042->g_comm_values[p_1042->tid]) == p_1042->g_2), 0x06L)), p_1042)) >= p_1042->g_214.s4), p_1042->g_170, p_1042), p_1042->g_244.y, p_1042->g_399.s1, p_1042->g_404, p_1042->g_391.y, p_1042) , p_1042->g_392.x))) == 0x26L) > p_1042->g_518.s9)), p_1042->g_518.s1, p_1042), p_1042->g_823, p_1042->g_170, l_825[0], p_1042), l_5[6], l_1033, l_825[0], p_1042);
    }
    (*l_1040) &= ((VECTOR(int32_t, 8))(l_1039.yxwxxyyz)).s7;
    return l_1041;
}


/* ------------------------------------------ */
/* 
 * reads : p_1042->g_823 p_1042->g_1038
 * writes: p_1042->g_824 p_1042->g_77
 */
int32_t ** func_21(uint8_t  p_22, int32_t * p_23, int32_t * p_24, uint16_t  p_25, int32_t * p_26, struct S0 * p_1042)
{ /* block id: 408 */
    int32_t *l_1034 = &p_1042->g_1032;
    int32_t **l_1036 = (void*)0;
    (*p_1042->g_1038) = ((*p_1042->g_823) = l_1034);
    p_26 = p_26;
    return &p_1042->g_77[0][4][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1042->g_826 p_1042->g_127 p_1042->g_830 p_1042->g_695 p_1042->g_98 p_1042->g_392 p_1042->g_659 p_1042->g_394 p_1042->g_874 p_1042->g_89 p_1042->g_810 p_1042->g_931 p_1042->g_398 p_1042->g_391 p_1042->g_93 p_1042->l_comm_values p_1042->g_266 p_1042->g_959 p_1042->g_399 p_1042->g_258 p_1042->g_972 p_1042->g_985 p_1042->g_512 p_1042->g_998 p_1042->g_2 p_1042->g_170 p_1042->g_61 p_1042->g_comm_values p_1042->g_507 p_1042->g_824 p_1042->g_1032
 * writes: p_1042->g_77 p_1042->g_695 p_1042->g_398 p_1042->g_100 p_1042->g_117 p_1042->g_726 p_1042->g_507 p_1042->g_170 p_1042->g_824 p_1042->g_394 p_1042->g_893 p_1042->g_89 p_1042->g_98 p_1042->g_518 p_1042->g_266 p_1042->g_258 p_1042->g_524 p_1042->g_391 p_1042->g_127 p_1042->g_1032
 */
int32_t * func_27(uint32_t  p_28, int32_t ** p_29, int32_t ** p_30, int32_t  p_31, int32_t * p_32, struct S0 * p_1042)
{ /* block id: 327 */
    VECTOR(int8_t, 8) l_829 = (VECTOR(int8_t, 8))(0x74L, (VECTOR(int8_t, 4))(0x74L, (VECTOR(int8_t, 2))(0x74L, 0x28L), 0x28L), 0x28L, 0x74L, 0x28L);
    uint64_t *l_831[5][4][3] = {{{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659}},{{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659}},{{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659}},{{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659}},{{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659}}};
    uint64_t **l_832 = &l_831[0][3][0];
    VECTOR(int8_t, 4) l_833 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x68L), 0x68L);
    int32_t *l_838 = (void*)0;
    int32_t *l_839[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_840[5] = {0x46492781L,0x46492781L,0x46492781L,0x46492781L,0x46492781L};
    uint16_t l_870 = 1UL;
    uint8_t l_873 = 1UL;
    VECTOR(uint32_t, 8) l_881 = (VECTOR(uint32_t, 8))(0xC626E6D6L, (VECTOR(uint32_t, 4))(0xC626E6D6L, (VECTOR(uint32_t, 2))(0xC626E6D6L, 4294967295UL), 4294967295UL), 4294967295UL, 0xC626E6D6L, 4294967295UL);
    VECTOR(int16_t, 2) l_886 = (VECTOR(int16_t, 2))(1L, 0x1577L);
    VECTOR(int32_t, 2) l_891 = (VECTOR(int32_t, 2))(0L, 0x7DA46998L);
    VECTOR(uint32_t, 8) l_910 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967294UL), 4294967294UL), 4294967294UL, 1UL, 4294967294UL);
    VECTOR(uint8_t, 2) l_975 = (VECTOR(uint8_t, 2))(0xBEL, 0xD6L);
    int32_t l_1000 = 0x74126E97L;
    int i, j, k;
    (*p_29) = (((VECTOR(uint32_t, 16))(p_1042->g_826.xxxyxxyxyxxxxxyy)).s7 , (void*)0);
    l_840[2] &= ((safe_rshift_func_uint16_t_u_s((p_31 ^ p_1042->g_127[0]), (((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(l_829.s3420021355170075)).even, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(p_1042->g_830.sb6)), ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(1L, 0x19L, 0x5FL, (GROUP_DIVERGE(0, 1) & (&p_1042->g_659 != ((*l_832) = l_831[2][0][1]))), 0x68L, (l_829.s7 | 0UL), 0x10L, 0x64L)).lo, ((VECTOR(int8_t, 16))(l_833.yywywzwyzxyzwyzx)).s9178))), ((VECTOR(int8_t, 8))(0x54L, (4294967295UL > (l_829.s5 , ((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s(0x6727L, 65535UL)) & l_829.s1), p_28)) , l_829.s7))), (-4L), ((VECTOR(int8_t, 4))(1L)), (-2L))).even))).hi, (int8_t)l_829.s7))).yxxyyxyyxyyxxyxx, ((VECTOR(int8_t, 16))(3L))))).s9d))).xyxxyyyx, ((VECTOR(int8_t, 8))((-1L)))))), ((VECTOR(uint8_t, 8))(255UL))))).s2 <= 0L))) == p_31);
    for (p_1042->g_695 = (-4); (p_1042->g_695 < 26); p_1042->g_695 = safe_add_func_uint32_t_u_u(p_1042->g_695, 7))
    { /* block id: 333 */
        int32_t l_847 = 0x6AD111D4L;
        VECTOR(uint8_t, 2) l_861 = (VECTOR(uint8_t, 2))(0x1AL, 0x09L);
        int i;
        for (p_1042->g_398 = 0; (p_1042->g_398 > 18); p_1042->g_398 = safe_add_func_uint32_t_u_u(p_1042->g_398, 6))
        { /* block id: 336 */
            int32_t **l_848 = &l_838;
            int8_t *l_864 = &p_1042->g_117;
            int8_t *l_865 = (void*)0;
            int8_t *l_866 = (void*)0;
            int8_t *l_867 = (void*)0;
            int8_t *l_868 = (void*)0;
            int8_t *l_869[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t *l_871[8][10] = {{(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0},{(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0},{(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0},{(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0},{(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0},{(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0},{(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0},{(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0,&p_1042->g_89,(void*)0,(void*)0}};
            uint32_t *l_872 = &p_1042->g_170;
            int i, j;
            for (p_1042->g_100 = 28; (p_1042->g_100 <= 40); ++p_1042->g_100)
            { /* block id: 339 */
                if (l_847)
                    break;
            }
            (*p_30) = func_62(func_42(((*l_872) = ((((l_848 != &p_32) || (p_1042->g_507.s1 = (safe_add_func_uint16_t_u_u(((p_31 , (safe_add_func_int16_t_s_s(p_31, (safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s(l_847, (p_1042->g_98 && 0x682D8182L))), (safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_861.yyyxyyxx)).s5, (p_1042->g_726.y = ((*l_864) = (safe_add_func_int64_t_s_s(((void*)0 == &p_1042->g_437), p_1042->g_392.y)))))), p_31))))))) , FAKE_DIVERGE(p_1042->group_2_offset, get_group_id(2), 10)), l_870)))) < p_1042->g_659) , 7UL)), p_1042->g_394, p_1042), l_873, p_28, p_1042);
            if (p_1042->g_874)
                continue;
        }
    }
    for (p_1042->g_394 = (-15); (p_1042->g_394 > (-15)); p_1042->g_394++)
    { /* block id: 352 */
        int8_t l_884 = 1L;
        int32_t *l_887 = &p_1042->g_394;
        int16_t l_892 = 1L;
        int32_t l_894 = (-3L);
        int32_t l_895[10][8] = {{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L},{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L},{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L},{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L},{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L},{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L},{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L},{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L},{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L},{0L,1L,0x67BCC255L,0x2A58AF59L,0L,0L,0x2A58AF59L,0x7C43E8F3L}};
        VECTOR(uint32_t, 8) l_906 = (VECTOR(uint32_t, 8))(0x3F962FA0L, (VECTOR(uint32_t, 4))(0x3F962FA0L, (VECTOR(uint32_t, 2))(0x3F962FA0L, 4294967295UL), 4294967295UL), 4294967295UL, 0x3F962FA0L, 4294967295UL);
        VECTOR(uint32_t, 4) l_907 = (VECTOR(uint32_t, 4))(0xF6D3D5DDL, (VECTOR(uint32_t, 2))(0xF6D3D5DDL, 4294967295UL), 4294967295UL);
        VECTOR(uint32_t, 2) l_908 = (VECTOR(uint32_t, 2))(0UL, 8UL);
        int32_t *l_990 = &p_1042->g_61;
        int32_t l_999[4] = {0x187C3DA1L,0x187C3DA1L,0x187C3DA1L,0x187C3DA1L};
        VECTOR(uint16_t, 8) l_1024 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65529UL), 65529UL), 65529UL, 0UL, 65529UL);
        int32_t *l_1029[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t l_1031 = 0x59C8CA75643E15C3L;
        int i, j;
        l_895[6][4] |= (+(l_894 &= (safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0xD6EDA28AL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_881.s6353)).wyywxwyy)).s1)), (safe_sub_func_uint32_t_u_u((l_884 >= ((-1L) && (((safe_unary_minus_func_int32_t_s(((((0x69L >= ((VECTOR(int8_t, 2))(0x49L, (-1L))).odd) , ((VECTOR(int16_t, 2))(l_886.xx)).even) < (l_839[0] != l_887)) > 4L))) | (((VECTOR(uint8_t, 8))(0x99L, 0xB5L, 0x96L, p_28, (safe_unary_minus_func_uint8_t_u(((safe_mod_func_int32_t_s_s((p_1042->g_893 = ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(l_891.xxyxxyyx)), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x3416DA9AL, (-1L), l_892, ((VECTOR(int32_t, 4))(0L)), 8L)).lo)).yxxxywyy)).s2604437267341662)).sf3, ((VECTOR(int32_t, 2))(0x51B5F15FL))))).xxxyyxyy))).s7), l_892)) , l_892))), ((VECTOR(uint8_t, 2))(0x83L)), 0UL)).s7 || l_892)) > p_31))), p_31))))));
        for (p_1042->g_89 = 0; (p_1042->g_89 <= 50); ++p_1042->g_89)
        { /* block id: 358 */
            uint32_t l_901 = 0x644F41CAL;
            VECTOR(uint16_t, 8) l_919 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x0C4CL), 0x0C4CL), 0x0C4CL, 5UL, 0x0C4CL);
            int32_t l_944 = 1L;
            int32_t l_945 = 0x0C4C8EBEL;
            VECTOR(int8_t, 2) l_964 = (VECTOR(int8_t, 2))(0x6CL, 7L);
            VECTOR(uint8_t, 16) l_1016 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 248UL), 248UL), 248UL, 1UL, 248UL, (VECTOR(uint8_t, 2))(1UL, 248UL), (VECTOR(uint8_t, 2))(1UL, 248UL), 1UL, 248UL, 1UL, 248UL);
            VECTOR(uint8_t, 16) l_1028 = (VECTOR(uint8_t, 16))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0xC4L), 0xC4L), 0xC4L, 8UL, 0xC4L, (VECTOR(uint8_t, 2))(8UL, 0xC4L), (VECTOR(uint8_t, 2))(8UL, 0xC4L), 8UL, 0xC4L, 8UL, 0xC4L);
            int i;
            for (p_1042->g_98 = 14; (p_1042->g_98 != 2); p_1042->g_98 = safe_sub_func_uint64_t_u_u(p_1042->g_98, 4))
            { /* block id: 361 */
                int32_t *l_900 = (void*)0;
                VECTOR(uint32_t, 16) l_909 = (VECTOR(uint32_t, 16))(0x1C77E5E0L, (VECTOR(uint32_t, 4))(0x1C77E5E0L, (VECTOR(uint32_t, 2))(0x1C77E5E0L, 4294967288UL), 4294967288UL), 4294967288UL, 0x1C77E5E0L, 4294967288UL, (VECTOR(uint32_t, 2))(0x1C77E5E0L, 4294967288UL), (VECTOR(uint32_t, 2))(0x1C77E5E0L, 4294967288UL), 0x1C77E5E0L, 4294967288UL, 0x1C77E5E0L, 4294967288UL);
                int64_t *l_922[1];
                int64_t *l_936 = &p_1042->g_398;
                int16_t *l_943[3];
                int32_t l_965 = 6L;
                int32_t *l_992 = &p_1042->g_61;
                int i;
                for (i = 0; i < 1; i++)
                    l_922[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_943[i] = (void*)0;
                (*p_29) = l_900;
                l_901 = l_895[6][4];
                l_945 ^= ((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(l_906.s5137763627275654)).s34, ((VECTOR(uint32_t, 4))(l_907.yxxy)).hi))).hi, p_31)), 12)) <= ((+(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0x70A9E222L, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(l_908.yxyxyxyxxxyyyyxx)).even, ((VECTOR(uint32_t, 8))(l_909.s0c996201)), ((VECTOR(uint32_t, 4))(4294967295UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_910.s65)))), 1UL)).xzwwzyzy))))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x3D0781ADL, 4294967295UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 4))(6UL, (safe_mod_func_int16_t_s_s((l_944 = ((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(l_919.s31300400)).s62, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 16))((safe_div_func_int64_t_s_s((p_1042->g_518.se = p_1042->g_810.s7), 1L)), ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((((VECTOR(int8_t, 8))(p_1042->g_931.yyxxyyyy)).s6 || (0x811F5709L | ((safe_div_func_int16_t_s_s(((((((*l_936) ^= (l_919.s3 == (safe_mul_func_int8_t_s_s(0x40L, p_31)))) , ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65535UL, 65535UL)).xyxyxxxx)).s4, (safe_mul_func_uint8_t_u_u((((18446744073709551615UL >= 0x30E10C36F1121B2CL) ^ p_1042->g_810.s2) == l_901), p_28)))), p_31)) >= l_919.s3)) ^ p_1042->g_391.y) >= p_31) != 0xF9L), 6L)) , p_31))), l_907.w)) | l_919.s1), l_919.s1)), 4)), 5)) == 6UL), 0x7EL, (-8L), 0x2EL)).yzxzzwww, ((VECTOR(int8_t, 8))((-9L))), ((VECTOR(int8_t, 8))(1L))))), ((VECTOR(int8_t, 2))(2L)), (-1L), ((VECTOR(int8_t, 4))((-1L))))).s30b3, ((VECTOR(int8_t, 4))(0x5EL))))).odd)).yyyxyxxy, ((VECTOR(uint8_t, 8))(3UL))))).s75)), 0xAD45L, 7UL, 0xBA50L, ((VECTOR(uint16_t, 2))(1UL)), 0UL)).s67))).xyxyxxyxxxyyxyxy, ((VECTOR(uint16_t, 16))(65532UL))))).odd)).s4, 7)), p_1042->g_93)), 0UL)) <= GROUP_DIVERGE(1, 1))), p_1042->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1042->tid, 34))])), 4294967287UL, 8UL)).zwzwzwwzywwzzyxw, ((VECTOR(uint32_t, 16))(4294967286UL))))), ((VECTOR(uint32_t, 16))(2UL))))).s12, ((VECTOR(uint32_t, 2))(4294967295UL))))), 4UL, 0x24913F38L)), 0x4BAFAF73L, 4294967295UL))))), ((VECTOR(uint32_t, 2))(0xA13F45E4L)), ((VECTOR(uint32_t, 2))(0xCF3382A8L)), 4294967295UL, 0x99CA6CC0L, 4294967295UL)).s09)).xyyxyxxx))).s4 , 1UL)) ^ p_31));
                if (l_908.y)
                { /* block id: 368 */
                    int32_t l_950 = (-1L);
                    uint16_t *l_951 = &l_870;
                    uint16_t *l_954[4];
                    int32_t l_984 = 0x5D43C4E9L;
                    int32_t **l_991[8][7] = {{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990},{&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990}};
                    int8_t *l_997[1][10] = {{&p_1042->g_524,(void*)0,&l_884,(void*)0,&p_1042->g_524,&p_1042->g_524,(void*)0,&l_884,(void*)0,&p_1042->g_524}};
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_954[i] = (void*)0;
                    l_944 = (safe_rshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_950, (p_28 <= p_1042->g_98), (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))((-1L), 0x256DE2F3L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(2L, 0x6BD26ABAL, 0x2D1D1BF7L, ((p_1042->g_266 &= (++(*l_951))) < (l_965 = (safe_add_func_int8_t_s_s(l_919.s2, ((safe_sub_func_uint32_t_u_u(((((VECTOR(int32_t, 2))(p_1042->g_959.s4a)).lo , (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_919.s2, 0x35F9L)), ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(l_964.yyxyxxyx)).lo, ((VECTOR(int8_t, 8))((l_901 || p_28), ((VECTOR(int8_t, 4))(0x67L)), l_964.x, (-10L), 0x01L)).odd))).y))) , 0xFBEE2A9AL), 0xAD241FF3L)) < p_28))))), 0x49CF37DDL, 0x67E519F4L, 0x119EA94EL, (-1L), ((VECTOR(int32_t, 2))(0x4D660D6CL)), ((VECTOR(int32_t, 4))(0x570AE6FDL)), 0x5914E2D7L, 0x43410F65L)).s67)), ((VECTOR(int32_t, 2))((-10L)))))), 0L, (-1L))))).lo)), 0x136609F9L, (-1L), p_31, (-9L), l_906.s6, (-4L), 9L, p_28, l_964.x, 0L, 0x7E440E10L)))).s2, l_964.y)) ^ p_1042->g_399.s5), 1));
                    l_895[6][4] ^= 0x75769D08L;
                    for (p_1042->g_258 = 11; (p_1042->g_258 <= 28); p_1042->g_258 = safe_add_func_uint64_t_u_u(p_1042->g_258, 1))
                    { /* block id: 376 */
                        uint32_t *l_980[4][4] = {{&l_901,&l_901,(void*)0,(void*)0},{&l_901,&l_901,(void*)0,(void*)0},{&l_901,&l_901,(void*)0,(void*)0},{&l_901,&l_901,(void*)0,(void*)0}};
                        int32_t l_983[5];
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_983[i] = 0x31AD9177L;
                        l_984 &= (safe_div_func_int16_t_s_s(0x2B60L, (safe_sub_func_int32_t_s_s((((VECTOR(int32_t, 8))(0x775E92CAL, ((VECTOR(int32_t, 4))(p_1042->g_972.xxxx)), ((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(l_975.yyyxxxxy)).s7, (safe_mod_func_int32_t_s_s(0x64C9719AL, p_31)))) < ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))((safe_div_func_int64_t_s_s(((~(l_950 ^= l_944)) & (safe_lshift_func_int16_t_s_s(((p_1042->g_266 = ((*l_951) = 0xC27EL)) < (p_32 != ((l_983[4] , p_28) , p_32))), 2))), p_28)), ((VECTOR(int32_t, 4))(0x1FF9F5F6L)), ((VECTOR(int32_t, 2))((-6L))), 0x74A55135L, l_909.s0, 1L, 0x248D2BFBL, 0x3275B9C8L, 0x316E254CL, ((VECTOR(int32_t, 2))(7L)), 0L)).lo, ((VECTOR(int32_t, 8))((-2L)))))).s2634744621002705))).s60, ((VECTOR(uint32_t, 2))(0UL)), ((VECTOR(uint32_t, 2))(4294967289UL))))), 4294967290UL, FAKE_DIVERGE(p_1042->global_0_offset, get_global_id(0), 10), 0x41219F0FL, 0xCBCB43DDL, 4294967294UL, 9UL)).s0), 0x4A4AFAAEL, 0x6344CE0BL)).s5 , 0x2A7C8965L), p_31))));
                        if (p_1042->g_985[4][5][0])
                            continue;
                    }
                    atomic_max(&p_1042->g_atomic_reduction[get_linear_group_id()], (((0x5769B70BB4215466L != ((p_1042->g_391.x = (l_950 = (p_28 ^ (l_999[1] &= ((safe_lshift_func_uint8_t_u_s((&p_31 != (l_992 = l_990)), 0)) && (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((0xAAL != ((((p_1042->g_524 = ((l_894 = (p_1042->g_512.s8 ^ 1L)) ^ p_1042->g_826.x)) > ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1042->g_998.s54)), 8L, 0L, ((VECTOR(int8_t, 2))(0x7EL, (-5L))), 0x1FL, 0x5AL)).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(0x7FL, ((VECTOR(int8_t, 4))(0x2CL)), 1L, ((VECTOR(int8_t, 2))((-1L))), 0x61L, 3L, 0x3DL, ((VECTOR(int8_t, 2))(0x59L)), 0x7FL, 0x44L, 0x6BL)).sa1, ((VECTOR(int8_t, 2))((-1L)))))), 0x05L, 0x4BL)), ((VECTOR(int8_t, 4))(1L))))).yyzyzzzyxzyyxwxy)).s6) | 0x0FL) >= l_895[5][3])), 1L)), 8))))))) || p_31)) | p_31) | 0xD3L) + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1042->v_collective += p_1042->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                }
                else
                { /* block id: 390 */
                    VECTOR(uint32_t, 16) l_1013 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x3BD43E60L), 0x3BD43E60L), 0x3BD43E60L, 4294967295UL, 0x3BD43E60L, (VECTOR(uint32_t, 2))(4294967295UL, 0x3BD43E60L), (VECTOR(uint32_t, 2))(4294967295UL, 0x3BD43E60L), 4294967295UL, 0x3BD43E60L, 4294967295UL, 0x3BD43E60L);
                    uint32_t *l_1014 = &p_1042->g_127[2];
                    uint32_t *l_1015 = (void*)0;
                    uint32_t *l_1017 = &l_901;
                    int32_t l_1018 = 1L;
                    uint8_t *l_1019 = (void*)0;
                    int8_t *l_1027 = &l_884;
                    int i;
                    l_965 |= ((l_895[6][4] = (p_1042->g_810.s3 == l_1000)) < (safe_sub_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((((safe_div_func_int64_t_s_s(0L, (p_1042->g_2 , (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((l_894 = ((*l_1014) |= ((VECTOR(uint32_t, 4))(l_1013.s2851)).z)) <= l_964.y), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_1016.s435888cb)).hi)).x)) ^ (l_1018 = ((*l_1017) = 1UL))), (p_1042->g_695--))) | (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_1024.s40)).hi, (safe_rshift_func_int8_t_s_u(((*l_1027) = ((VECTOR(int8_t, 8))((-1L), (-1L), p_1042->g_170, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, (-2L))), 0x55L, (-1L))), (-4L))).s1), 0))))), (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(0xDEL, ((VECTOR(uint8_t, 2))(l_1028.se0)), ((VECTOR(uint8_t, 4))(p_1042->g_61, 0x59L, 0x51L, 0xDFL)).z, ((VECTOR(uint8_t, 2))(1UL, 2UL)), 0x5AL, 3UL)), (!p_1042->g_826.x), ((VECTOR(uint8_t, 2))(248UL)), p_1042->g_comm_values[p_1042->tid], 0xE8L, ((VECTOR(uint8_t, 2))(255UL)), 0x2BL)).se > p_1042->g_507.s5)))))) <= 7L) ^ 0xB58B65DBA8F03A91L), p_1042->g_258)) ^ FAKE_DIVERGE(p_1042->global_2_offset, get_global_id(2), 10)), (-1L))));
                    return (*p_30);
                }
            }
            if (p_28)
                break;
        }
        l_1031 &= (safe_unary_minus_func_int16_t_s(0x6169L));
        p_1042->g_1032 ^= 0L;
    }
    return (*p_30);
}


/* ------------------------------------------ */
/* 
 * reads : p_1042->g_320 p_1042->g_321 p_1042->g_719 p_1042->g_89 p_1042->g_726 p_1042->g_394 p_1042->g_738 p_1042->g_659 p_1042->g_550 p_1042->g_93 p_1042->g_391 p_1042->g_770 p_1042->g_216 p_1042->g_512 p_1042->g_244 p_1042->g_496 p_1042->g_809 p_1042->g_810 p_1042->g_318
 * writes: p_1042->g_77 p_1042->g_527 p_1042->g_404 p_1042->g_394 p_1042->g_659 p_1042->g_89 p_1042->g_726 p_1042->g_93 p_1042->g_770 p_1042->g_398 p_1042->g_266 p_1042->g_127
 */
int32_t ** func_33(int16_t  p_34, uint32_t  p_35, struct S0 * p_1042)
{ /* block id: 281 */
    int8_t l_704 = 0x32L;
    int32_t l_705[8] = {0x405AD22FL,0x405AD22FL,0x405AD22FL,0x405AD22FL,0x405AD22FL,0x405AD22FL,0x405AD22FL,0x405AD22FL};
    uint32_t l_710 = 0xA6B45FDCL;
    VECTOR(uint16_t, 16) l_717 = (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 7UL), 7UL), 7UL, 9UL, 7UL, (VECTOR(uint16_t, 2))(9UL, 7UL), (VECTOR(uint16_t, 2))(9UL, 7UL), 9UL, 7UL, 9UL, 7UL);
    int32_t **l_729 = &p_1042->g_528;
    VECTOR(uint64_t, 8) l_750 = (VECTOR(uint64_t, 8))(0xD147333D2486E4E3L, (VECTOR(uint64_t, 4))(0xD147333D2486E4E3L, (VECTOR(uint64_t, 2))(0xD147333D2486E4E3L, 1UL), 1UL), 1UL, 0xD147333D2486E4E3L, 1UL);
    VECTOR(int64_t, 2) l_751 = (VECTOR(int64_t, 2))(0L, 0x4EF2595C66BEFD00L);
    int32_t **l_774 = &p_1042->g_77[0][4][4];
    uint64_t l_791 = 18446744073709551615UL;
    int32_t l_794[3];
    uint16_t *l_799 = &p_1042->g_266;
    int8_t l_804 = 0x38L;
    VECTOR(uint16_t, 8) l_811 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL);
    uint32_t *l_812 = &p_1042->g_127[2];
    uint64_t *l_819 = (void*)0;
    uint64_t *l_820 = &p_1042->g_659;
    uint32_t *l_822[1][5];
    uint32_t **l_821 = &l_822[0][1];
    int i, j;
    for (i = 0; i < 3; i++)
        l_794[i] = 0x5EAB0610L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_822[i][j] = (void*)0;
    }
    for (p_35 = 0; (p_35 > 50); p_35++)
    { /* block id: 284 */
        VECTOR(uint8_t, 8) l_701 = (VECTOR(uint8_t, 8))(0xE4L, (VECTOR(uint8_t, 4))(0xE4L, (VECTOR(uint8_t, 2))(0xE4L, 255UL), 255UL), 255UL, 0xE4L, 255UL);
        int32_t l_703 = (-3L);
        int32_t l_708 = 0x157C9A63L;
        int32_t l_709[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t **l_730 = &p_1042->g_528;
        int8_t l_733[9][3][8] = {{{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)}},{{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)}},{{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)}},{{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)}},{{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)}},{{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)}},{{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)}},{{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)}},{{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)},{8L,0x43L,(-1L),0x1CL,0x24L,0L,0L,(-3L)}}};
        VECTOR(int16_t, 16) l_735 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
        VECTOR(uint16_t, 8) l_746 = (VECTOR(uint16_t, 8))(0xCF0CL, (VECTOR(uint16_t, 4))(0xCF0CL, (VECTOR(uint16_t, 2))(0xCF0CL, 65535UL), 65535UL), 65535UL, 0xCF0CL, 65535UL);
        VECTOR(uint16_t, 2) l_747 = (VECTOR(uint16_t, 2))(0UL, 65527UL);
        uint16_t *l_773 = (void*)0;
        VECTOR(uint64_t, 8) l_779 = (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 2UL, 18446744073709551610UL);
        int64_t *l_792 = (void*)0;
        int64_t *l_793[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_793[i] = (void*)0;
        if ((safe_mul_func_uint16_t_u_u(((void*)0 == (*p_1042->g_320)), (((VECTOR(uint8_t, 8))(l_701.s47146230)).s5 >= p_34))))
        { /* block id: 285 */
            int32_t *l_702[3][7][10] = {{{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0}},{{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0}},{{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0},{(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,(void*)0,&p_1042->g_6,(void*)0,(void*)0}}};
            int i, j, k;
            l_704 = (l_703 = 0x06C2D3E0L);
        }
        else
        { /* block id: 288 */
            int32_t *l_706 = &l_703;
            int32_t *l_707[10][4] = {{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6},{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6},{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6},{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6},{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6},{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6},{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6},{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6},{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6},{&p_1042->g_6,&l_705[3],&l_705[3],&p_1042->g_6}};
            int32_t **l_713 = &p_1042->g_77[4][3][1];
            int i, j;
            l_710--;
            l_708 = l_701.s7;
            (*l_713) = l_707[7][3];
            if (l_705[6])
                continue;
        }
        if (l_710)
            continue;
        for (l_708 = 0; (l_708 != 16); l_708 = safe_add_func_int16_t_s_s(l_708, 1))
        { /* block id: 297 */
            int32_t *l_716 = (void*)0;
            VECTOR(uint16_t, 16) l_718 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
            int32_t ***l_731[6][9][4] = {{{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729}},{{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729}},{{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729}},{{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729}},{{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729}},{{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729},{&l_730,&l_730,(void*)0,&l_729}}};
            uint64_t *l_732[5][6] = {{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659},{&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659,&p_1042->g_659}};
            int32_t **l_734 = &p_1042->g_404;
            int32_t l_741 = 0x0E139678L;
            VECTOR(uint16_t, 8) l_748 = (VECTOR(uint16_t, 8))(0xE670L, (VECTOR(uint16_t, 4))(0xE670L, (VECTOR(uint16_t, 2))(0xE670L, 0xBB00L), 0xBB00L), 0xBB00L, 0xE670L, 0xBB00L);
            VECTOR(uint64_t, 8) l_749 = (VECTOR(uint64_t, 8))(0x3D44180948B379CEL, (VECTOR(uint64_t, 4))(0x3D44180948B379CEL, (VECTOR(uint64_t, 2))(0x3D44180948B379CEL, 0x66092A328377DBC0L), 0x66092A328377DBC0L), 0x66092A328377DBC0L, 0x3D44180948B379CEL, 0x66092A328377DBC0L);
            uint8_t *l_756 = (void*)0;
            uint8_t *l_757 = (void*)0;
            uint8_t *l_758 = &p_1042->g_89;
            int8_t l_759 = 0L;
            int8_t *l_760[3][4] = {{&p_1042->g_117,&p_1042->g_117,&p_1042->g_117,&p_1042->g_117},{&p_1042->g_117,&p_1042->g_117,&p_1042->g_117,&p_1042->g_117},{&p_1042->g_117,&p_1042->g_117,&p_1042->g_117,&p_1042->g_117}};
            uint64_t *l_769[9];
            uint16_t l_771 = 1UL;
            int64_t *l_772 = &p_1042->g_398;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_769[i] = &p_1042->g_770;
            l_705[3] = (((void*)0 != l_716) ^ ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 8))(l_717.sec8c9960)).s3427372235250213, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65530UL, 65535UL)), 65529UL, ((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(0x8E2BL, FAKE_DIVERGE(p_1042->local_1_offset, get_local_id(1), 10), 3UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_718.sba)).yxxx)), 4UL)).s36, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1042->g_719.xx))))))), p_34, 0xEF7EL, 0xD8CEL)).s27, (uint16_t)(safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(p_1042->g_89, (+((safe_lshift_func_int16_t_s_u((((((VECTOR(int8_t, 16))(p_1042->g_726.wxwxywwwwwwzxwyy)).s8 | (safe_mod_func_uint8_t_u_u(((((l_733[4][0][2] = (l_729 == (l_730 = (p_1042->g_527[4] = l_730)))) ^ 1UL) , l_716) != ((*l_734) = l_716)), (-6L)))) , p_35) || p_35), 9)) || p_35)))), l_735.s8))))), 0x2B9FL, 0xFDBCL)), 2UL, 0xA04DL, 0x0CAAL, 65531UL)).s0217763554146077))).s1e1d, ((VECTOR(uint16_t, 4))(0x1A1EL))))).x);
            for (p_1042->g_394 = (-24); (p_1042->g_394 < 24); p_1042->g_394 = safe_add_func_uint8_t_u_u(p_1042->g_394, 2))
            { /* block id: 305 */
                uint32_t *l_740[6] = {(void*)0,&p_1042->g_170,(void*)0,(void*)0,&p_1042->g_170,(void*)0};
                uint32_t **l_739[6] = {&l_740[0],&l_740[0],&l_740[0],&l_740[0],&l_740[0],&l_740[0]};
                int i;
                l_741 &= (p_1042->g_738 != ((p_1042->g_659 |= GROUP_DIVERGE(1, 1)) , l_739[2]));
            }
            l_705[3] &= (safe_add_func_uint32_t_u_u((l_731[4][4][3] == (void*)0), l_709[3]));
            atomic_min(&p_1042->l_atomic_reduction[0], ((safe_mod_func_int16_t_s_s(p_1042->g_550.s9, ((((((*l_772) = (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 2))(l_746.s70)).xxyxxxyyyyxyxxyy, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(l_747.xxyxyxyy)).lo, (uint16_t)0xFC59L))).ywzxxxxyxwwxywzw, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_748.s15171411)).s42)).yyxxyyyxxyyxxyyy))).s6a85)))).wyxwywxxxzxwwwzy))), ((VECTOR(uint16_t, 8))((((p_1042->g_770 |= ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(0x97FC73E23FDD057EL, 0UL)), ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551608UL, 0x8F28A6462922DD74L)).xyxx)).hi, ((VECTOR(uint64_t, 16))(l_749.s6456365074124312)).s38))))).xxyyxyyx, ((VECTOR(uint64_t, 4))(l_750.s2055)).zzxzyxyx, ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 2))(l_751.xy)).yxxy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))((safe_sub_func_uint32_t_u_u((p_35 > (safe_mul_func_uint8_t_u_u(((*l_758) = 0x54L), ((0x14L & (p_1042->g_726.x &= l_759)) & GROUP_DIVERGE(2, 1))))), ((safe_lshift_func_int8_t_s_u(p_35, (p_1042->g_719.y < (p_1042->g_93--)))) < (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(l_705[5], p_35)), l_747.y))))), 0x038B381EB58800D7L, (-1L), 0x20E1FEB8DCB4CB61L)).yzzwxwzy, ((VECTOR(int64_t, 8))((-1L)))))), 0x578F003B4A2B45C7L, p_1042->g_391.y, ((VECTOR(int64_t, 2))(0L)), l_746.s5, ((VECTOR(int64_t, 2))(0L)), (-10L))).s2ddd))).even, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0xAE3E220B8BBEEC13L))))).yyyxyyyx))).s1507567126440463, ((VECTOR(uint64_t, 16))(0x7E41179EEF28594BL))))).sd9, ((VECTOR(uint64_t, 2))(18446744073709551613UL))))).lo) , p_35) , p_1042->g_216.s4), ((VECTOR(uint16_t, 2))(65535UL)), 0xE19FL, ((VECTOR(uint16_t, 4))(0x14E1L)))).s2066342730224103))).sb2, ((VECTOR(uint16_t, 2))(0x72C5L))))).yyxxxyxy)), l_771, 9UL, l_717.sc, ((VECTOR(uint16_t, 4))(0x46BAL)), 0UL)).s6 > 1UL)) , l_773) != l_773) > p_34) , l_704))) == 9L) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1042->v_collective += p_1042->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        (*l_774) = func_62(l_774, l_708, (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 3UL)).yyxy)).x, (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_779.s2655)).odd)).even, ((p_34 >= ((((safe_mod_func_int64_t_s_s((l_794[1] = (l_705[3] = (((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s(((FAKE_DIVERGE(p_1042->local_2_offset, get_local_id(2), 10) ^ (p_1042->g_512.s0 && (safe_div_func_uint16_t_u_u((0x25L ^ (((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_35, 0UL)), 7)) > ((0x9D75L < ((p_35 , l_747.y) , p_1042->g_244.z)) | p_34)) & l_750.s6)), FAKE_DIVERGE(p_1042->group_2_offset, get_group_id(2), 10))))) < p_34))) | 1L) > l_791), 0x20F6L)) && 4294967286UL) | p_34))), 0x2C45EA8F2FF26A04L)) < l_750.s3) >= 0UL) != l_709[3])) && p_1042->g_496.sd))))), p_1042);
    }
    (*l_774) = (((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_799) = (p_35 ^ 18446744073709551608UL)), 12)), ((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_804, 5)), (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_1042->g_809.s2120523123732457)).sd4)).yyxxyyyyyxyyxxxx, ((VECTOR(uint16_t, 2))(p_1042->g_810.s52)).xxxxyxyxxyyyyyyx))).s42e4, ((VECTOR(uint16_t, 4))(l_811.s0423))))).x, p_35)), ((l_812 != ((*l_821) = func_62(l_774, (safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((((((*l_820) = (safe_add_func_int32_t_s_s(p_35, (&p_1042->g_528 != (((*l_812) = (+6UL)) , &p_1042->g_528))))) >= 18446744073709551611UL) | p_1042->g_318.s9) < p_35), p_35)) | FAKE_DIVERGE(p_1042->global_0_offset, get_global_id(0), 10)), 0x7B68L)), p_1042->g_391.y, p_1042))) , p_35))))) | 0x8E2CL))) , p_1042->g_809.s7) , (void*)0);
    return &p_1042->g_77[0][4][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1042->g_229 p_1042->g_231 p_1042->g_244 p_1042->g_2 p_1042->g_399 p_1042->g_comm_values p_1042->g_6 p_1042->g_437 p_1042->g_117 p_1042->g_89 p_1042->g_436 p_1042->g_473 p_1042->g_170 p_1042->g_258 p_1042->g_318 p_1042->g_127 p_1042->g_98 p_1042->g_496 p_1042->g_188 p_1042->g_507 p_1042->g_512 p_1042->g_518 p_1042->g_81 p_1042->g_524 p_1042->g_216 p_1042->g_527 p_1042->g_550 p_1042->g_100 p_1042->g_230 p_1042->g_61 p_1042->g_659 p_1042->g_404 p_1042->g_266 p_1042->g_685
 * writes: p_1042->g_6 p_1042->g_437 p_1042->g_117 p_1042->g_89 p_1042->g_127 p_1042->g_258 p_1042->g_93 p_1042->g_61 p_1042->g_98 p_1042->g_524 p_1042->g_527 p_1042->g_244 p_1042->g_216 p_1042->g_404 p_1042->g_100 p_1042->g_266
 */
uint64_t  func_36(int32_t ** p_37, int32_t  p_38, int32_t  p_39, int32_t * p_40, uint32_t  p_41, struct S0 * p_1042)
{ /* block id: 119 */
    VECTOR(int32_t, 16) l_405 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x6946EF3BL), 0x6946EF3BL), 0x6946EF3BL, 7L, 0x6946EF3BL, (VECTOR(int32_t, 2))(7L, 0x6946EF3BL), (VECTOR(int32_t, 2))(7L, 0x6946EF3BL), 7L, 0x6946EF3BL, 7L, 0x6946EF3BL);
    uint64_t ***l_409 = (void*)0;
    int32_t **l_420 = &p_1042->g_404;
    uint32_t *l_423[7][3] = {{&p_1042->g_170,&p_1042->g_127[2],&p_1042->g_127[2]},{&p_1042->g_170,&p_1042->g_127[2],&p_1042->g_127[2]},{&p_1042->g_170,&p_1042->g_127[2],&p_1042->g_127[2]},{&p_1042->g_170,&p_1042->g_127[2],&p_1042->g_127[2]},{&p_1042->g_170,&p_1042->g_127[2],&p_1042->g_127[2]},{&p_1042->g_170,&p_1042->g_127[2],&p_1042->g_127[2]},{&p_1042->g_170,&p_1042->g_127[2],&p_1042->g_127[2]}};
    VECTOR(int16_t, 8) l_434 = (VECTOR(int16_t, 8))(0x286CL, (VECTOR(int16_t, 4))(0x286CL, (VECTOR(int16_t, 2))(0x286CL, (-1L)), (-1L)), (-1L), 0x286CL, (-1L));
    int16_t l_435 = 0x67E4L;
    VECTOR(int32_t, 2) l_503 = (VECTOR(int32_t, 2))(0x69C96E57L, (-1L));
    VECTOR(uint64_t, 4) l_513 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL);
    VECTOR(int64_t, 8) l_515 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    int32_t l_540 = 0x70D0AAC3L;
    uint16_t *l_653 = &p_1042->g_258;
    uint64_t l_654[5][7];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
            l_654[i][j] = 0x83FA4F1ECE4EE6C2L;
    }
    if (((VECTOR(int32_t, 4))(l_405.saec6)).y)
    { /* block id: 120 */
        uint64_t ***l_408 = (void*)0;
        uint64_t *l_412[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t **l_411 = &l_412[1];
        uint64_t ***l_410 = &l_411;
        VECTOR(int8_t, 2) l_413 = (VECTOR(int8_t, 2))(2L, 0x2BL);
        uint32_t *l_422 = &p_1042->g_127[2];
        uint32_t **l_421 = &l_422;
        int32_t l_428[7][9][4] = {{{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L}},{{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L}},{{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L}},{{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L}},{{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L}},{{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L}},{{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L},{0x6D3BE560L,0x6D3BE560L,1L,0L}}};
        int32_t *l_429 = &l_428[3][5][0];
        int32_t *l_430 = &l_428[6][4][0];
        int32_t *l_431 = (void*)0;
        int32_t *l_432[10][2] = {{&l_428[5][3][1],(void*)0},{&l_428[5][3][1],(void*)0},{&l_428[5][3][1],(void*)0},{&l_428[5][3][1],(void*)0},{&l_428[5][3][1],(void*)0},{&l_428[5][3][1],(void*)0},{&l_428[5][3][1],(void*)0},{&l_428[5][3][1],(void*)0},{&l_428[5][3][1],(void*)0},{&l_428[5][3][1],(void*)0}};
        int32_t l_433 = (-1L);
        int i, j, k;
        if (((((safe_sub_func_int16_t_s_s(((l_408 != (l_410 = l_409)) == (FAKE_DIVERGE(p_1042->group_1_offset, get_group_id(1), 10) && ((VECTOR(int8_t, 4))(l_413.xyxy)).z)), (safe_mod_func_int8_t_s_s(((~((((((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((((*p_1042->g_229) || (&p_1042->g_127[1] != (void*)0)) || (((*l_421) = func_62(l_420, p_1042->g_244.y, p_41, p_1042)) == l_423[4][1])), l_405.s8)), p_1042->g_2)) && GROUP_DIVERGE(0, 1)) >= p_1042->g_399.s4) > (-1L)) , l_413.x) || l_413.y)) >= l_413.y), (-1L))))) ^ p_39) >= p_1042->g_comm_values[p_1042->tid]) | l_413.x))
        { /* block id: 123 */
            int32_t *l_426 = (void*)0;
            int32_t *l_427 = &p_1042->g_6;
            (*l_427) ^= (safe_rshift_func_uint8_t_u_s(p_38, 1));
        }
        else
        { /* block id: 125 */
            return l_413.y;
        }
        ++p_1042->g_437;
    }
    else
    { /* block id: 129 */
        int32_t l_450 = (-6L);
        VECTOR(int64_t, 4) l_516 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x6A567BC56324E4D4L), 0x6A567BC56324E4D4L);
        int32_t **l_530 = &p_1042->g_528;
        int32_t l_541 = 4L;
        int8_t *l_561[4][5][6] = {{{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524}},{{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524}},{{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524}},{{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524},{&p_1042->g_524,&p_1042->g_524,(void*)0,&p_1042->g_524,(void*)0,&p_1042->g_524}}};
        int8_t **l_560 = &l_561[2][0][5];
        uint16_t l_563 = 1UL;
        int i, j, k;
        for (p_1042->g_117 = 0; (p_1042->g_117 == 11); p_1042->g_117++)
        { /* block id: 132 */
            uint64_t l_462[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
            int32_t l_479 = 0x3FF226BDL;
            VECTOR(uint8_t, 16) l_506 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xC1L), 0xC1L), 0xC1L, 255UL, 0xC1L, (VECTOR(uint8_t, 2))(255UL, 0xC1L), (VECTOR(uint8_t, 2))(255UL, 0xC1L), 255UL, 0xC1L, 255UL, 0xC1L);
            uint32_t l_546[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            VECTOR(int8_t, 16) l_549 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x10L), 0x10L), 0x10L, (-4L), 0x10L, (VECTOR(int8_t, 2))((-4L), 0x10L), (VECTOR(int8_t, 2))((-4L), 0x10L), (-4L), 0x10L, (-4L), 0x10L);
            uint8_t *l_555 = (void*)0;
            int32_t *l_562 = &p_1042->g_6;
            int64_t *l_564 = (void*)0;
            int32_t *l_565 = (void*)0;
            int32_t *l_566 = (void*)0;
            int32_t *l_569 = (void*)0;
            int32_t *l_570 = &l_541;
            int i;
            for (p_1042->g_89 = 2; (p_1042->g_89 < 5); p_1042->g_89 = safe_add_func_uint8_t_u_u(p_1042->g_89, 7))
            { /* block id: 135 */
                uint32_t l_451 = 1UL;
                int32_t l_460 = 0x72B297F4L;
                VECTOR(int64_t, 4) l_517 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x6BA4290F062F3641L), 0x6BA4290F062F3641L);
                int32_t *l_542 = &l_460;
                int i;
                for (p_1042->g_6 = (-2); (p_1042->g_6 > 0); p_1042->g_6++)
                { /* block id: 138 */
                    int16_t l_475 = 4L;
                    uint32_t l_492 = 0x43841F12L;
                    for (p_39 = 0; (p_39 > (-22)); p_39--)
                    { /* block id: 141 */
                        int32_t *l_448 = (void*)0;
                        int32_t *l_449[10][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        ++l_451;
                    }
                    for (l_435 = 0; (l_435 >= (-24)); --l_435)
                    { /* block id: 146 */
                        int32_t *l_456 = (void*)0;
                        int32_t *l_457 = (void*)0;
                        int32_t *l_458 = (void*)0;
                        int32_t *l_459 = (void*)0;
                        int32_t *l_461 = (void*)0;
                        uint16_t *l_476 = &p_1042->g_258;
                        uint8_t *l_477 = &p_1042->g_93;
                        int32_t *l_478[1];
                        uint16_t l_486 = 65535UL;
                        int32_t *l_493 = &p_1042->g_61;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_478[i] = &l_460;
                        l_462[1]++;
                        l_405.s8 = (l_479 = ((l_450 == ((*l_477) = (l_462[1] == (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(65526UL, ((*l_476) ^= (l_462[3] && ((VECTOR(int32_t, 16))((p_1042->g_436 < p_38), 0L, ((VECTOR(int32_t, 8))((safe_add_func_uint8_t_u_u(p_41, (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((p_1042->g_473[0] != (void*)0) && (p_1042->g_127[3] = (safe_unary_minus_func_int64_t_s(l_475)))), p_38)), p_1042->g_170)))), ((VECTOR(int32_t, 4))((-1L))), 4L, 0x0D4F5A68L, 0L)), 0x6D2D3FABL, (-3L), p_38, 0x04CF7FDEL, 0x2EA1CED9L, (-1L))).s9)), ((VECTOR(uint16_t, 8))(6UL)), 9UL, ((VECTOR(uint16_t, 4))(1UL)), 0x986DL)).s1a17, (uint16_t)0x57ECL))).x, p_1042->g_318.s3))))) && p_39));
                        l_479 = (p_39 >= (safe_lshift_func_int16_t_s_u((((*l_493) = (1L && ((safe_div_func_uint64_t_u_u(((0x1090AD4AL && 0x0941FF3BL) | (safe_div_func_int16_t_s_s(l_475, 0x6A07L))), l_486)) <= ((((((safe_unary_minus_func_int64_t_s(1L)) < GROUP_DIVERGE(2, 1)) & (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_41 != p_1042->g_127[1]), l_450)), l_450))) != 0UL) ^ 4UL) & l_492)))) , p_39), 2)));
                    }
                    for (p_1042->g_98 = (-3); (p_1042->g_98 <= 29); ++p_1042->g_98)
                    { /* block id: 158 */
                        VECTOR(int64_t, 4) l_514 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2424F718177DADAEL), 0x2424F718177DADAEL);
                        int8_t *l_523 = &p_1042->g_524;
                        int32_t *l_525 = (void*)0;
                        int32_t l_526 = 0x7D990C76L;
                        int32_t ***l_529 = &p_1042->g_527[0];
                        int i;
                        l_405.s9 = (&p_1042->g_404 != &p_40);
                        l_526 = (((VECTOR(uint16_t, 8))(p_1042->g_496.s89fcc8e9)).s6 && (safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(6UL, p_1042->g_188)), ((p_1042->g_318.s1 || 0x30L) >= ((VECTOR(int32_t, 4))(l_503.xxxy)).z))) , ((safe_mul_func_uint16_t_u_u(65534UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(6UL, 0xB97AL)), ((((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(l_506.s3e5a)).wyzwyyyz, ((VECTOR(uint8_t, 8))(p_1042->g_507.s20126045))))).s6 && (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((FAKE_DIVERGE(p_1042->global_1_offset, get_global_id(1), 10) > ((l_479 = (p_41 && ((VECTOR(uint64_t, 16))(p_1042->g_512.s88b60bd91fe291e7)).sc)) > ((FAKE_DIVERGE(p_1042->local_2_offset, get_local_id(2), 10) , ((((VECTOR(uint64_t, 4))(l_513.yywx)).x != 0x129F49B9F77D47E1L) , (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0x468D519A92A79BBBL, ((VECTOR(int64_t, 2))(l_514.xz)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_515.s67)).xyxxxxxyxxxxxyxy)).odd, ((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_516.xw)).xxyxxyyy)).s70, ((VECTOR(int64_t, 8))(l_517.xyxwzwzx)).s13, ((VECTOR(int64_t, 2))(p_1042->g_518.sdd))))), ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(8L, 0x0E122248F4CDFDA2L)), (int64_t)(((*l_523) ^= ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s(p_1042->g_507.s6, ((((-1L) && p_1042->g_244.y) < l_516.w) && p_1042->g_81.s8))) == l_517.y), l_514.w)) ^ p_38)) || p_38)))), 0L, ((VECTOR(int64_t, 4))(0x508691157BA80E67L)), 1L)).s7006334024235374, ((VECTOR(int64_t, 16))((-3L)))))).odd)))).s02, ((VECTOR(int64_t, 2))(0x38EC7DD913114E66L)), ((VECTOR(int64_t, 2))((-1L))))))))).xxyxxxyxxxyxxyxx, ((VECTOR(int64_t, 16))(0x0A15BF7416129B91L)), ((VECTOR(int64_t, 16))(0x7014FCEA2D6DBA76L))))).odd, ((VECTOR(int64_t, 8))(1L))))).even)).zyzxwywz)).s7251235437010526)).se5b0)), 0x2A21176A92E5B281L)))).s7 < p_1042->g_127[2]))) < l_514.w))), p_41)), l_516.y))) , p_1042->g_518.sc), 0xE3FEL, 65535UL, FAKE_DIVERGE(p_1042->group_0_offset, get_group_id(0), 10), 0xEA77L, 0x92F7L)).s3)) || l_451)) <= l_506.s9), p_1042->g_216.s9)));
                        l_530 = ((*l_529) = p_1042->g_527[4]);
                    }
                    if (l_405.s5)
                        continue;
                }
                if ((atomic_inc(&p_1042->l_atomic_input[52]) == 2))
                { /* block id: 169 */
                    int32_t l_531 = 0x1759ECF5L;
                    for (l_531 = (-2); (l_531 > (-15)); --l_531)
                    { /* block id: 172 */
                        int64_t l_534 = 0x2CB8E8C6CE2DE4D5L;
                        VECTOR(int32_t, 8) l_535 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        int32_t l_536 = 0x51C78B5CL;
                        int32_t *l_537 = (void*)0;
                        int32_t *l_538 = (void*)0;
                        uint32_t l_539 = 0UL;
                        int i;
                        l_534 ^= ((VECTOR(int32_t, 2))(1L, (-1L))).lo;
                        l_536 |= ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(0x319D6DFAL, (-1L), 0x4A451264L, 0x4E80ADB4L)).wyyyywzw, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_535.s37034022)).s4164001612603246)).even))).s1;
                        l_538 = l_537;
                        l_539 &= 0x09025701L;
                    }
                    unsigned int result = 0;
                    result += l_531;
                    atomic_add(&p_1042->l_special_values[52], result);
                }
                else
                { /* block id: 178 */
                    (1 + 1);
                }
                (*l_542) = (((VECTOR(int8_t, 4))(0x7AL, l_516.z, 0x00L, 7L)).w > (l_541 = l_540));
            }
            (*l_570) = (safe_div_func_int64_t_s_s((((((safe_unary_minus_func_uint64_t_u((p_1042->g_318.sf >= (l_546[4] | ((safe_lshift_func_uint16_t_u_u((((((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(l_549.s0ff2)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_1042->g_550.s4e313590e82c41f5)).hi)).hi)).xzwwzyxyyyzxxywy, ((VECTOR(int8_t, 8))((-7L), (p_1042->g_496.s6 ^ (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((p_1042->g_244.x = l_462[1]), (p_1042->g_216.sf = ((l_516.z && p_1042->g_399.s0) || ((((*l_562) = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((void*)0 != l_560), (l_479 |= ((~((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(p_38, 0x5759C0FCL, l_506.sa, ((VECTOR(int32_t, 4))(0x7AFF0B5CL)), ((VECTOR(int32_t, 4))(0x18B5F2C2L)), 0x5458E7DCL, 0x4D9A14D0L, (-2L), 0x5124C877L, 8L)).even, ((VECTOR(int32_t, 8))(0x33F9C703L))))).s10)).xyyx)).lo)).hi) > GROUP_DIVERGE(2, 1))))), 0x21L))) != l_563) || 0x54E1A116L))))), GROUP_DIVERGE(1, 1)))), (-1L), 0x74L, (*l_562), 0x7CL, 0L, 0x50L)).s1775456743436174))).s21, ((VECTOR(int8_t, 2))(0x7BL))))))).xyxx))).x != p_41) , 251UL) < 0L), 10)) , GROUP_DIVERGE(0, 1)))))) ^ 0x9CL) ^ p_1042->g_127[2]) , (void*)0) != l_564), p_38));
        }
    }
    if ((atomic_inc(&p_1042->g_atomic_input[59 * get_linear_group_id() + 39]) == 0))
    { /* block id: 192 */
        int32_t l_571 = 0x7836971EL;
        int16_t l_633 = 0x7FC9L;
        uint32_t l_634 = 9UL;
        int16_t l_635 = 0x0847L;
        uint8_t l_636 = 0x22L;
        int32_t l_637 = 0x1BF27F7DL;
        int32_t l_638 = (-1L);
        for (l_571 = (-25); (l_571 == 21); ++l_571)
        { /* block id: 195 */
            int64_t l_574 = 0x567872DAB1A7842EL;
            uint8_t l_575 = 255UL;
            int32_t l_576 = 0L;
            int32_t *l_630 = &l_576;
            int32_t *l_631 = (void*)0;
            int32_t *l_632[5];
            int i;
            for (i = 0; i < 5; i++)
                l_632[i] = &l_576;
            l_574 = 6L;
            l_576 |= l_575;
            for (l_574 = (-23); (l_574 > 26); l_574 = safe_add_func_int64_t_s_s(l_574, 1))
            { /* block id: 200 */
                int64_t l_579 = 0x5CDC32B9BD916431L;
                int64_t l_580 = (-1L);
                uint8_t l_581 = 0xC4L;
                VECTOR(int16_t, 2) l_582 = (VECTOR(int16_t, 2))(0x5E5EL, 0x0922L);
                VECTOR(uint64_t, 8) l_583 = (VECTOR(uint64_t, 8))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 1UL), 1UL), 1UL, 18446744073709551614UL, 1UL);
                VECTOR(uint64_t, 2) l_584 = (VECTOR(uint64_t, 2))(1UL, 0x837829B0CE97BC95L);
                int32_t l_585 = 0x09C6D26CL;
                uint64_t l_586 = 0xC2AD2BFEEE76742DL;
                uint16_t l_587 = 0UL;
                int16_t l_588 = 1L;
                int16_t l_589 = 0x0B46L;
                int16_t l_590 = 6L;
                int64_t l_591 = (-1L);
                int64_t l_592 = (-1L);
                uint64_t l_593 = 2UL;
                int16_t l_626 = 0x2881L;
                uint32_t l_627 = 0x9ABDF2FAL;
                int i;
                if ((((l_580 = (l_579 = 0x12037021L)) , (l_581 , ((VECTOR(int16_t, 2))(l_582.yx)).even)) , (((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(18446744073709551606UL, 0x2F1F9A801BFDB247L)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_583.s73042600)).s61)).xxxyyxxxxyyyxyyy)).sb9, ((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 2))(l_584.xy)).xyxxxxyx))).s35))), 0xD651589EFEF74FF4L, (l_585 , (l_586 , 0x9CBDA69288E918A9L)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(18446744073709551614UL, (l_589 = ((l_588 = l_587) , 18446744073709551614UL)), 8UL, l_590, 0x6E0953B8ABB67354L, 0x4CCAAB1B8998A7C1L, ((VECTOR(uint64_t, 8))(0x94B6E9C83C5FBADCL)), 18446744073709551615UL, 0xCF7D634F8FD6AB64L)).s9b)))), 0x0D6F3880750F193DL, 0xB4B655BE80261C91L)))).s77, ((VECTOR(uint64_t, 2))(18446744073709551610UL))))).yxyx, ((VECTOR(uint64_t, 4))(6UL))))).zxyzwzyz)).s3 , l_591) , l_592) , l_593)))
                { /* block id: 205 */
                    int8_t l_594 = 0L;
                    uint8_t l_595 = 252UL;
                    uint32_t l_596 = 3UL;
                    int32_t l_597 = 0x17870BEEL;
                    int8_t l_598 = 1L;
                    int32_t l_599 = 0x68CFADC8L;
                    uint8_t l_600 = 0xB7L;
                    uint32_t l_601 = 1UL;
                    uint32_t l_602 = 0x07C0FD8AL;
                    int16_t l_603 = 2L;
                    uint16_t l_604 = 0x4017L;
                    uint16_t l_605 = 0x0C7DL;
                    int64_t l_606 = (-1L);
                    l_606 &= (l_605 = (l_604 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 2))(0x6BAF0A8CL, 0x0D1BA3A0L)), 0L, ((VECTOR(int32_t, 2))(8L, (-1L))), ((l_595 = (l_594 = ((VECTOR(int64_t, 2))((-7L), 3L)).odd)) , (((l_581 = (l_595 |= (l_596 , 252UL))) , (l_597 = FAKE_DIVERGE(p_1042->local_0_offset, get_local_id(0), 10))) , (l_598 = (l_576 = 0x3B0E228CL)))), (-2L), ((l_599 , l_600) , (l_601 , l_602)), l_603, ((VECTOR(int32_t, 2))(0x37E9EA31L)), ((VECTOR(int32_t, 4))((-5L))))).s5800)).x));
                    for (l_602 = 0; (l_602 >= 16); l_602++)
                    { /* block id: 218 */
                        int32_t l_610 = 0L;
                        int32_t *l_609 = &l_610;
                        int32_t *l_611 = (void*)0;
                        int32_t l_612 = (-9L);
                        int32_t *l_613 = (void*)0;
                        int32_t *l_614 = &l_610;
                        int32_t *l_615 = (void*)0;
                        uint32_t l_616 = 0xA21284DCL;
                        l_609 = (l_611 = l_609);
                        l_597 &= l_612;
                        l_615 = (l_614 = l_613);
                        l_616++;
                    }
                }
                else
                { /* block id: 226 */
                    VECTOR(uint32_t, 16) l_619 = (VECTOR(uint32_t, 16))(0x1ABEBD8EL, (VECTOR(uint32_t, 4))(0x1ABEBD8EL, (VECTOR(uint32_t, 2))(0x1ABEBD8EL, 0x352F71C0L), 0x352F71C0L), 0x352F71C0L, 0x1ABEBD8EL, 0x352F71C0L, (VECTOR(uint32_t, 2))(0x1ABEBD8EL, 0x352F71C0L), (VECTOR(uint32_t, 2))(0x1ABEBD8EL, 0x352F71C0L), 0x1ABEBD8EL, 0x352F71C0L, 0x1ABEBD8EL, 0x352F71C0L);
                    int16_t l_622 = (-8L);
                    uint8_t l_623 = 247UL;
                    int i;
                    l_619.s7--;
                    ++l_623;
                }
                ++l_627;
            }
            l_632[0] = (l_631 = (l_630 = (void*)0));
        }
        l_633 = (-10L);
        l_635 ^= l_634;
        l_638 &= (l_637 = (l_636 |= 0x44A9AFE8L));
        unsigned int result = 0;
        result += l_571;
        result += l_633;
        result += l_634;
        result += l_635;
        result += l_636;
        result += l_637;
        result += l_638;
        atomic_add(&p_1042->g_special_values[59 * get_linear_group_id() + 39], result);
    }
    else
    { /* block id: 241 */
        (1 + 1);
    }
    (*l_420) = func_62(func_42(p_1042->g_170, (((safe_lshift_func_int8_t_s_s(0L, 1)) | p_1042->g_100) == (safe_div_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(p_38, (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))).xxyx)).z , (((-1L) < (safe_add_func_uint8_t_u_u(((p_1042->g_230.z >= (safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(p_41, ((l_653 != l_653) == l_654[2][5]))) >= p_39), p_1042->g_216.se))) != p_38), p_1042->g_550.sf))) | p_1042->g_518.s4)))), 0xEEE8L)) != 0xECL) , (*p_1042->g_229)), 0x69935DC2DC2AACBBL))), p_1042), p_39, p_1042->g_61, p_1042);
    for (p_1042->g_100 = (-28); (p_1042->g_100 <= 49); p_1042->g_100++)
    { /* block id: 247 */
        uint8_t l_671 = 0x16L;
        VECTOR(uint16_t, 16) l_678 = (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xC907L), 0xC907L), 0xC907L, 65531UL, 0xC907L, (VECTOR(uint16_t, 2))(65531UL, 0xC907L), (VECTOR(uint16_t, 2))(65531UL, 0xC907L), 65531UL, 0xC907L, 65531UL, 0xC907L);
        int i;
        for (p_1042->g_258 = 1; (p_1042->g_258 == 35); p_1042->g_258++)
        { /* block id: 250 */
            uint8_t l_660 = 0xA0L;
            int32_t l_670 = 0x49BC6E43L;
            int16_t l_693[4][6][1] = {{{0x1926L},{0x1926L},{0x1926L},{0x1926L},{0x1926L},{0x1926L}},{{0x1926L},{0x1926L},{0x1926L},{0x1926L},{0x1926L},{0x1926L}},{{0x1926L},{0x1926L},{0x1926L},{0x1926L},{0x1926L},{0x1926L}},{{0x1926L},{0x1926L},{0x1926L},{0x1926L},{0x1926L},{0x1926L}}};
            int i, j, k;
            if (p_38)
            { /* block id: 251 */
                if (p_1042->g_659)
                    break;
            }
            else
            { /* block id: 253 */
                int8_t l_663 = 1L;
                VECTOR(uint16_t, 8) l_679 = (VECTOR(uint16_t, 8))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 65535UL), 65535UL), 65535UL, 65530UL, 65535UL);
                int i;
                if (l_660)
                    break;
                for (p_1042->g_98 = 13; (p_1042->g_98 > (-29)); --p_1042->g_98)
                { /* block id: 257 */
                    int32_t *l_664 = &p_1042->g_6;
                    int32_t *l_665 = &l_540;
                    int32_t l_666 = (-1L);
                    int32_t *l_667 = (void*)0;
                    int32_t *l_668 = &l_540;
                    int32_t *l_669 = &l_666;
                    (*l_420) = (*l_420);
                    if (l_513.x)
                        break;
                    ++l_671;
                }
                for (p_1042->g_61 = 0; (p_1042->g_61 != (-16)); p_1042->g_61 = safe_sub_func_int16_t_s_s(p_1042->g_61, 1))
                { /* block id: 264 */
                    VECTOR(uint16_t, 4) l_680 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0UL), 0UL);
                    int32_t l_681 = 0x1DDB42BFL;
                    uint16_t *l_682 = &p_1042->g_266;
                    int32_t **l_688 = &p_1042->g_528;
                    int i;
                    for (l_540 = 0; (l_540 > (-16)); l_540 = safe_sub_func_uint16_t_u_u(l_540, 3))
                    { /* block id: 267 */
                        return p_38;
                    }
                    atomic_xor(&p_1042->l_atomic_reduction[0], (((((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(0x3E5CL, 0x7F7FL, 0x01FDL, 0x01C9L)).hi, ((VECTOR(int16_t, 2))(7L, 0x301CL))))).hi >= ((VECTOR(uint16_t, 4))(l_678.s3ad2)).w) < (0x1E63L | p_1042->g_81.sa)) >= ((((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_679.s35)))).xxxxxxyx, ((VECTOR(uint16_t, 4))(l_680.zyxx)).ywwyzzwx))))).s03, ((VECTOR(uint16_t, 4))((++(*l_682)), l_678.sd, 0xAF69L, 65532UL)).hi, ((VECTOR(uint16_t, 16))(p_1042->g_685.xyxxyxyyxyyxyyxy)).sdd))).even != (safe_add_func_int16_t_s_s(l_679.s2, 4L))) || (((p_38 , (void*)0) == l_688) || ((VECTOR(int8_t, 4))((safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1042->local_0_offset, get_local_id(0), 10), (safe_div_func_uint32_t_u_u(((4294967286UL == p_38) && 1L), l_679.s6)))), 0L, 0x76L, 0x16L)).w))) + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1042->v_collective += p_1042->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (l_693[2][4][0])
                        continue;
                    if (l_670)
                        break;
                }
            }
        }
    }
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_42(uint32_t  p_43, int8_t  p_44, struct S0 * p_1042)
{ /* block id: 117 */
    int32_t **l_403[8][7] = {{(void*)0,(void*)0,&p_1042->g_77[0][4][4],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1042->g_77[0][4][4],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1042->g_77[0][4][4],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1042->g_77[0][4][4],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1042->g_77[0][4][4],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1042->g_77[0][4][4],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1042->g_77[0][4][4],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1042->g_77[0][4][4],(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    return l_403[1][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_1042->g_127 p_1042->g_244 p_1042->g_258 p_1042->g_6 p_1042->g_230 p_1042->g_98 p_1042->g_170 p_1042->g_61 p_1042->g_96 p_1042->g_214 p_1042->g_93 p_1042->g_89 p_1042->l_comm_values p_1042->g_318 p_1042->g_266 p_1042->g_320 p_1042->g_81 p_1042->g_229 p_1042->g_231 p_1042->g_364 p_1042->g_2 p_1042->g_18 p_1042->g_391 p_1042->g_392 p_1042->g_399
 * writes: p_1042->g_6 p_1042->g_100 p_1042->g_258 p_1042->g_266 p_1042->g_81 p_1042->g_61 p_1042->l_comm_values p_1042->g_89 p_1042->g_93 p_1042->g_394 p_1042->g_398 p_1042->g_77
 */
int16_t  func_45(int64_t  p_46, struct S0 * p_1042)
{ /* block id: 69 */
    int32_t *l_232 = &p_1042->g_6;
    VECTOR(uint8_t, 4) l_241 = (VECTOR(uint8_t, 4))(0x52L, (VECTOR(uint8_t, 2))(0x52L, 0x97L), 0x97L);
    uint8_t *l_242 = (void*)0;
    uint8_t *l_243 = &p_1042->g_100;
    VECTOR(uint8_t, 16) l_245 = (VECTOR(uint8_t, 16))(0x1CL, (VECTOR(uint8_t, 4))(0x1CL, (VECTOR(uint8_t, 2))(0x1CL, 3UL), 3UL), 3UL, 0x1CL, 3UL, (VECTOR(uint8_t, 2))(0x1CL, 3UL), (VECTOR(uint8_t, 2))(0x1CL, 3UL), 0x1CL, 3UL, 0x1CL, 3UL);
    VECTOR(uint8_t, 8) l_246 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x59L), 0x59L), 0x59L, 0UL, 0x59L);
    VECTOR(int16_t, 2) l_251 = (VECTOR(int16_t, 2))(0x3B08L, 8L);
    VECTOR(uint64_t, 4) l_252 = (VECTOR(uint64_t, 4))(0x579B1A205CD6EF15L, (VECTOR(uint64_t, 2))(0x579B1A205CD6EF15L, 0x837FE7DF496B3881L), 0x837FE7DF496B3881L);
    uint16_t *l_257 = &p_1042->g_258;
    int8_t *l_264 = &p_1042->g_117;
    int8_t **l_263 = &l_264;
    uint16_t *l_265 = &p_1042->g_266;
    int8_t l_267 = 0L;
    int16_t l_268[8] = {0L,2L,0L,0L,2L,0L,0L,2L};
    int64_t *l_269 = (void*)0;
    int64_t *l_270 = (void*)0;
    int64_t *l_271 = (void*)0;
    int64_t *l_272 = (void*)0;
    int64_t *l_273[7];
    uint64_t *l_290 = (void*)0;
    uint64_t **l_289 = &l_290;
    uint64_t **l_293[9][8][3] = {{{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290}},{{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290}},{{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290}},{{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290}},{{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290}},{{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290}},{{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290}},{{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290}},{{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290}}};
    uint8_t l_294[8] = {246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL};
    VECTOR(int8_t, 16) l_295 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int8_t, 2))((-3L), (-1L)), (VECTOR(int8_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L));
    int32_t l_371 = 8L;
    int32_t l_379 = 0x41B49FB4L;
    int32_t l_380 = 0x458BC244L;
    int32_t l_381 = (-1L);
    int32_t l_382 = (-8L);
    int32_t l_383 = 0x54F0741BL;
    int32_t l_384 = (-5L);
    int32_t l_385 = 0x20FBA3BFL;
    int32_t l_386 = 0x1708FC7EL;
    uint16_t l_387 = 1UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_273[i] = (void*)0;
    (*l_232) = 0x7ACC17FFL;
    (*l_232) = ((((safe_div_func_int64_t_s_s((((safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(((((p_46 & ((p_1042->g_127[0] > ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_241.xx)).xxyxxxxx)).s47, ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((*l_243) = FAKE_DIVERGE(p_1042->global_0_offset, get_global_id(0), 10)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(0x0DL, 1UL, 2UL, 0xB0L)).lo)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1042->g_244.yzzy)), 0xB1L, 0x01L, 0x42L, 0xCFL)).s6627425200347240)).s0cc4)).even)), 0x27L, 1UL, 0x3EL)).s4210001347163420)).hi)).hi, ((VECTOR(uint8_t, 8))(l_245.sc81dce8f)).odd))).xzxwxwxx)), (uint8_t)((VECTOR(uint8_t, 4))(l_246.s4020)).z, (uint8_t)GROUP_DIVERGE(0, 1)))).s05))), 0x9FL)).zyyxyyxzzwwwwyxw)).s2) , ((p_1042->g_81.sd = ((safe_sub_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s((~((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-4L), 4L)))), 0x456FL, ((VECTOR(int16_t, 2))(l_251.xy)), 0x6437L, 0x5F9AL, 0L)).even))).z), ((((VECTOR(uint64_t, 4))(l_252.zwyz)).y > (p_46 > (safe_lshift_func_int16_t_s_u((-8L), ((void*)0 != l_232))))) < ((*l_265) = ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(0x9B27L, 65535UL)).yxxx, ((VECTOR(uint16_t, 16))((safe_sub_func_uint16_t_u_u(((*l_257)--), (((safe_sub_func_uint64_t_u_u((&p_1042->g_117 == ((*l_263) = l_242)), ((*l_232) > p_46))) | p_1042->g_230.w) || (*l_232)))), ((VECTOR(uint16_t, 8))(0x2C19L)), ((VECTOR(uint16_t, 2))(0x27A5L)), ((VECTOR(uint16_t, 4))(0xE264L)), 0x2606L)).sbc8a))).w)))) || l_267), 0x7D2F8A94D586B5BEL)) , l_268[1])) || (*l_232)))) , (*l_232)) && FAKE_DIVERGE(p_1042->group_1_offset, get_group_id(1), 10)) & (*l_232)), 2)) , (*l_232)) || p_1042->g_98), 2)) > (*l_232)), 1L)) != (*l_232)) || p_46), p_1042->g_170)) >= GROUP_DIVERGE(2, 1)) > 0xA7F3AA61L) < (*l_232));
    for (p_1042->g_61 = (-7); (p_1042->g_61 < 23); p_1042->g_61 = safe_add_func_uint8_t_u_u(p_1042->g_61, 3))
    { /* block id: 79 */
        int32_t l_282 = (-1L);
        uint64_t ***l_285 = (void*)0;
        uint64_t *l_288 = (void*)0;
        uint64_t **l_287[2];
        uint64_t ***l_286[8][4] = {{&l_287[0],&l_287[0],&l_287[0],&l_287[1]},{&l_287[0],&l_287[0],&l_287[0],&l_287[1]},{&l_287[0],&l_287[0],&l_287[0],&l_287[1]},{&l_287[0],&l_287[0],&l_287[0],&l_287[1]},{&l_287[0],&l_287[0],&l_287[0],&l_287[1]},{&l_287[0],&l_287[0],&l_287[0],&l_287[1]},{&l_287[0],&l_287[0],&l_287[0],&l_287[1]},{&l_287[0],&l_287[0],&l_287[0],&l_287[1]}};
        VECTOR(int32_t, 8) l_304 = (VECTOR(int32_t, 8))(0x575F73B0L, (VECTOR(int32_t, 4))(0x575F73B0L, (VECTOR(int32_t, 2))(0x575F73B0L, (-1L)), (-1L)), (-1L), 0x575F73B0L, (-1L));
        VECTOR(uint8_t, 8) l_319 = (VECTOR(uint8_t, 8))(0x46L, (VECTOR(uint8_t, 4))(0x46L, (VECTOR(uint8_t, 2))(0x46L, 3UL), 3UL), 3UL, 0x46L, 3UL);
        int32_t **l_390 = &p_1042->g_77[7][3][1];
        int32_t *l_393 = &p_1042->g_394;
        int64_t *l_395 = (void*)0;
        int64_t *l_396 = (void*)0;
        int64_t *l_397 = &p_1042->g_398;
        int i, j;
        for (i = 0; i < 2; i++)
            l_287[i] = &l_288;
        if ((((((((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((l_282 | p_1042->g_96), ((safe_mod_func_int8_t_s_s(((l_289 = (void*)0) != &l_290), 0x34L)) < 1UL))) <= ((0xE41D468F987C3B36L && ((*l_232) = (((safe_add_func_uint64_t_u_u((l_294[4] = (&l_290 != (l_293[7][0][1] = (void*)0))), p_46)) , p_1042->g_214.s4) > l_282))) < p_1042->g_93)), p_46)), p_46)) | p_1042->g_93) > l_282) ^ p_46) , 0xD79AE35F00490036L) != l_282) & l_282))
        { /* block id: 84 */
            uint32_t l_326 = 4294967290UL;
            int32_t l_368 = 0L;
            int32_t *l_369 = &p_1042->g_6;
            int32_t *l_370 = &p_1042->g_6;
            int32_t *l_372 = &l_368;
            int32_t *l_373 = &p_1042->g_6;
            int32_t *l_374 = &l_371;
            int32_t l_375 = 0x36CD009BL;
            int32_t *l_376 = &l_368;
            int32_t *l_377 = &l_368;
            int32_t *l_378[10][7] = {{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371}};
            int i, j;
            l_295.sc = 4L;
            (*l_232) = ((((*l_232) > ((safe_div_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((((((VECTOR(int32_t, 4))(l_304.s6434)).z <= ((p_46 == (p_1042->g_81.s0 = (safe_add_func_uint16_t_u_u((p_46 , (safe_sub_func_int64_t_s_s(1L, (p_46 & 65535UL)))), (safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s((l_304.s2 ^ ((VECTOR(uint32_t, 8))(0x9218C46DL, 0xF690920FL, ((VECTOR(uint32_t, 2))(1UL, 0x8165DD9CL)), (safe_div_func_int8_t_s_s((GROUP_DIVERGE(0, 1) || (p_1042->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1042->tid, 34))] |= p_1042->g_89)), (safe_add_func_uint16_t_u_u(((*l_257) = ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(p_1042->g_318.s4d08f56a)).s5673537544147021, ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(255UL, 2UL)).xxxy, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 8))(l_319.s56301417)).s53, (uint8_t)1UL, (uint8_t)p_46))).xyyy))).xyxzzzzyyzwwzzwx, ((VECTOR(uint8_t, 16))(0xC9L))))).s4f)).xyxx)).xxzzwwwxwzzwxxyw, ((VECTOR(uint8_t, 16))(0x9BL))))).hi, ((VECTOR(uint8_t, 8))(4UL)), ((VECTOR(uint8_t, 8))(255UL))))).s6103375457364577, (uint8_t)p_1042->g_244.x))).s30))).lo, p_46)) && l_304.s7)), p_46)))), ((VECTOR(uint32_t, 2))(0xB5960D21L)), 1UL)).s2), p_46)))))))) & 0x09336E04FD1D9604L)) || 0x5F5BL) & 0xE0CBL) != 0x45FF5A73C26EFFDCL) != 0x7B9A00A2L), 7)) | 4L), p_1042->g_266)), 248UL)) > 0x7B2A896730682DF1L), l_319.s7)) || 0x0EE5D073737B8786L)) , p_1042->g_320) == &l_287[1]);
            for (p_1042->g_89 = (-11); (p_1042->g_89 != 49); ++p_1042->g_89)
            { /* block id: 92 */
                int64_t l_324 = 3L;
                int32_t l_325 = 0x08B39632L;
                VECTOR(uint8_t, 4) l_334 = (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0UL), 0UL);
                VECTOR(int8_t, 16) l_335 = (VECTOR(int8_t, 16))(0x1CL, (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, 0x5DL), 0x5DL), 0x5DL, 0x1CL, 0x5DL, (VECTOR(int8_t, 2))(0x1CL, 0x5DL), (VECTOR(int8_t, 2))(0x1CL, 0x5DL), 0x1CL, 0x5DL, 0x1CL, 0x5DL);
                int i;
                l_325 ^= ((*l_232) &= l_324);
                if (l_326)
                    continue;
                for (p_1042->g_93 = 0; (p_1042->g_93 <= 55); p_1042->g_93 = safe_add_func_int32_t_s_s(p_1042->g_93, 3))
                { /* block id: 98 */
                    l_304.s3 = (safe_div_func_uint8_t_u_u(((l_304.s5 <= ((0x9CFDL ^ (safe_unary_minus_func_int64_t_s((l_325 = (p_1042->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1042->tid, 34))] || ((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))((safe_mod_func_uint32_t_u_u((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_334.wwxz)), 0x02L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 8))(0x21L, (-1L), 0L, (-10L), 0x23L, ((VECTOR(int8_t, 2))(0x01L, 0L)), 1L)), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(l_335.s0921)).lo, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x0CL, p_1042->g_81.sd, 0x34L, 0L)).hi)), (int8_t)((!(*p_1042->g_229)) ^ (((0xCDD8L != (0x07L & 0x23L)) == p_1042->g_93) == p_46))))), ((VECTOR(int8_t, 2))((-8L)))))), p_1042->g_318.s6, ((VECTOR(int8_t, 2))((-9L))), 0L, 0x71L)))).s6cf3)).yzxzzzxy)).s5022514177546167, ((VECTOR(int8_t, 16))(0x34L))))))).sd9cf))).ywywywwxxwyxzyxx, ((VECTOR(uint8_t, 16))(0UL)), ((VECTOR(uint8_t, 16))(0x17L))))).s90)), 5UL)).s3 > 0x49L), p_46)), 1UL, 0xC37DL, 65534UL)).wzyyyzyzwxyzzzxy, ((VECTOR(uint16_t, 16))(0UL))))).s7))))) ^ 0x374BC877F3457F07L)) , p_1042->g_93), 0x53L));
                }
                l_325 |= (safe_lshift_func_int16_t_s_u((l_304.s6 <= (safe_mod_func_int64_t_s_s(((((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((((safe_add_func_int16_t_s_s(((((!(safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((p_1042->g_127[3] <= ((*l_243) = ((l_334.y , 6UL) & ((safe_lshift_func_uint8_t_u_u((((VECTOR(int64_t, 4))(p_1042->g_364.yyyy)).w ^ ((VECTOR(uint64_t, 16))(0xC693F10E83FCA402L, (0xE9L <= p_46), 0x73D80C34BC43B1C0L, (safe_lshift_func_int16_t_s_u((p_1042->g_318.sa || (safe_unary_minus_func_uint32_t_u(p_46))), l_326)), 1UL, 0x9836500BA39E85ACL, 18446744073709551612UL, ((VECTOR(uint64_t, 8))(0xF67FBD7C5556554FL)), 0x947CE3DAF9424950L)).sb), 1)) < 65532UL)))), p_1042->g_214.s7)), 0)), l_326)), GROUP_DIVERGE(1, 1))), p_1042->g_127[1]))) <= p_1042->g_2) == l_368) | p_46), (*l_232))) >= (*l_232)) , p_46) & p_46), GROUP_DIVERGE(2, 1))) || p_1042->g_18), p_46)) | 0x1BL) , p_1042->g_2), l_326)), 0x48L)) < p_46) == l_326) | p_1042->g_18), GROUP_DIVERGE(2, 1)))), 12));
            }
            l_387++;
        }
        else
        { /* block id: 106 */
            return p_46;
        }
        (*l_390) = func_62(l_390, ((*l_393) = (p_1042->g_93 | ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 2))(p_1042->g_391.yy)), ((VECTOR(uint64_t, 2))(p_1042->g_392.yy))))), 18446744073709551610UL, 0UL)).w)), ((*l_397) = 2L), p_1042);
        (*l_232) ^= ((VECTOR(int32_t, 2))(p_1042->g_399.s37)).hi;
        if (p_46)
            continue;
    }
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_1042->g_6 p_1042->g_13 p_1042->g_214 p_1042->g_216 p_1042->g_117 p_1042->g_81 p_1042->g_127 p_1042->g_229
 * writes: p_1042->g_215 p_1042->g_93 p_1042->g_6
 */
uint8_t  func_50(int32_t  p_51, int8_t  p_52, int32_t * p_53, int32_t * p_54, uint16_t  p_55, struct S0 * p_1042)
{ /* block id: 61 */
    int32_t *l_196 = &p_1042->g_6;
    int32_t *l_197[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    uint8_t l_198 = 255UL;
    int64_t l_201 = 0x3913420BF1236BC3L;
    int64_t l_202 = 0x4F7806D691EEC030L;
    int64_t l_203 = 0x02050B02B7D5DAE9L;
    int16_t l_204[9][10] = {{0x3A4BL,0x3A4BL,0L,0x7DBEL,0x3031L,(-4L),(-4L),3L,(-4L),(-4L)},{0x3A4BL,0x3A4BL,0L,0x7DBEL,0x3031L,(-4L),(-4L),3L,(-4L),(-4L)},{0x3A4BL,0x3A4BL,0L,0x7DBEL,0x3031L,(-4L),(-4L),3L,(-4L),(-4L)},{0x3A4BL,0x3A4BL,0L,0x7DBEL,0x3031L,(-4L),(-4L),3L,(-4L),(-4L)},{0x3A4BL,0x3A4BL,0L,0x7DBEL,0x3031L,(-4L),(-4L),3L,(-4L),(-4L)},{0x3A4BL,0x3A4BL,0L,0x7DBEL,0x3031L,(-4L),(-4L),3L,(-4L),(-4L)},{0x3A4BL,0x3A4BL,0L,0x7DBEL,0x3031L,(-4L),(-4L),3L,(-4L),(-4L)},{0x3A4BL,0x3A4BL,0L,0x7DBEL,0x3031L,(-4L),(-4L),3L,(-4L),(-4L)},{0x3A4BL,0x3A4BL,0L,0x7DBEL,0x3031L,(-4L),(-4L),3L,(-4L),(-4L)}};
    uint16_t l_205 = 0x7E89L;
    uint8_t *l_223 = &p_1042->g_93;
    uint64_t *l_224 = (void*)0;
    uint64_t *l_225 = (void*)0;
    uint64_t *l_226 = (void*)0;
    uint64_t *l_227 = (void*)0;
    int8_t l_228 = 0x06L;
    int i, j;
    l_198--;
    l_205--;
    (*p_53) = ((((((p_55 || (safe_add_func_uint8_t_u_u(((*l_196) > (GROUP_DIVERGE(1, 1) , (safe_sub_func_uint8_t_u_u(((l_228 = (p_1042->g_13[0] | ((((safe_mul_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(p_1042->g_214.s26)).even, ((-7L) < ((&l_204[3][0] != (p_1042->g_215 = &l_204[3][0])) >= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1042->g_216.s61a0)).ywxzyzyz)).s1)))) ^ (((((((*l_196) | (((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x6AL, ((*l_223) = (safe_div_func_int16_t_s_s(0x7367L, 0x0B08L))))), p_52)) , (void*)0) == (void*)0)) && p_52) >= p_52) < p_1042->g_117) , p_1042->g_81.s4) , (*p_53))) > (-4L)) ^ p_1042->g_81.s8))) == 0UL), (*l_196))))), p_52))) != p_1042->g_127[0]) > FAKE_DIVERGE(p_1042->global_1_offset, get_global_id(1), 10)) , p_55) , l_225) != p_1042->g_229);
    return (*l_196);
}


/* ------------------------------------------ */
/* 
 * reads : p_1042->g_comm_values p_1042->g_2 p_1042->g_81 p_1042->g_89 p_1042->g_96 p_1042->g_100 p_1042->g_61 p_1042->g_78 p_1042->g_13 p_1042->g_93 p_1042->g_132 p_1042->g_117 p_1042->g_16 p_1042->g_6
 * writes: p_1042->g_76 p_1042->g_78 p_1042->g_79 p_1042->g_89 p_1042->g_93 p_1042->g_98 p_1042->g_100 p_1042->g_117 p_1042->g_127 p_1042->g_6
 */
int32_t  func_56(int32_t  p_57, uint32_t  p_58, uint64_t  p_59, int32_t * p_60, struct S0 * p_1042)
{ /* block id: 14 */
    uint16_t l_73[7][6] = {{0x39D9L,0x2D46L,0x056FL,0xDC6CL,0x056FL,0x2D46L},{0x39D9L,0x2D46L,0x056FL,0xDC6CL,0x056FL,0x2D46L},{0x39D9L,0x2D46L,0x056FL,0xDC6CL,0x056FL,0x2D46L},{0x39D9L,0x2D46L,0x056FL,0xDC6CL,0x056FL,0x2D46L},{0x39D9L,0x2D46L,0x056FL,0xDC6CL,0x056FL,0x2D46L},{0x39D9L,0x2D46L,0x056FL,0xDC6CL,0x056FL,0x2D46L},{0x39D9L,0x2D46L,0x056FL,0xDC6CL,0x056FL,0x2D46L}};
    int32_t **l_75 = (void*)0;
    int32_t ***l_74[9] = {&l_75,&l_75,&l_75,&l_75,&l_75,&l_75,&l_75,&l_75,&l_75};
    VECTOR(int64_t, 4) l_80 = (VECTOR(int64_t, 4))(0x3F73BC91A03DC579L, (VECTOR(int64_t, 2))(0x3F73BC91A03DC579L, 0L), 0L);
    uint8_t *l_88 = &p_1042->g_89;
    uint8_t *l_92 = &p_1042->g_93;
    int16_t *l_97[3][6][2] = {{{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98}},{{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98}},{{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98},{&p_1042->g_98,&p_1042->g_98}}};
    uint8_t *l_99 = &p_1042->g_100;
    int32_t l_128[5];
    uint64_t l_139 = 18446744073709551615UL;
    uint64_t *l_178 = &l_139;
    uint64_t **l_177 = &l_178;
    int16_t l_185 = 0x4DC8L;
    int64_t l_187 = (-9L);
    uint16_t l_194 = 0x9F52L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_128[i] = (-4L);
    if (((((safe_div_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), ((((safe_add_func_int64_t_s_s((p_1042->g_comm_values[p_1042->tid] , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((l_73[1][4] > (((p_1042->g_79 = (p_1042->g_78 = (p_1042->g_76[1][5][3] = &p_60))) != &p_60) , p_1042->g_2)) & (&p_60 == &p_1042->g_77[3][4][2])), ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(l_80.yxyzwyww)).s35, ((VECTOR(int64_t, 2))(0x1F167E6262DCCEB0L, 0x1F0AD72A742272BDL)), ((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 8))(p_1042->g_81.sf1f8a707)).s2660774021104122))).s35))), 0x7534BEE77D733C45L, (safe_mod_func_uint8_t_u_u(((*l_99) ^= (safe_add_func_uint16_t_u_u(((p_58 != (safe_rshift_func_uint8_t_u_u((~((*l_88)++)), ((*l_92) = GROUP_DIVERGE(2, 1))))) ^ ((p_1042->g_98 = (safe_mul_func_uint16_t_u_u((p_1042->g_96 || 0xBE992D14L), p_59))) <= 0x225DL)), p_58))), GROUP_DIVERGE(1, 1))), 0x47B4319BF676F390L, (-1L), 0x37F146A40847A0C8L)), ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 4))(1L)), 0x592DB271CF4EE93DL, 0L)).sa), p_1042->g_61)) , (-1L)) , p_58) || p_58))) , (*p_1042->g_78)) != &p_1042->g_6) || p_57))
    { /* block id: 22 */
        int32_t **l_101 = &p_1042->g_77[0][4][4];
        l_101 = &p_60;
    }
    else
    { /* block id: 24 */
        uint16_t *l_108 = &l_73[1][4];
        int16_t l_113 = (-3L);
        int8_t *l_116 = &p_1042->g_117;
        uint32_t *l_126 = &p_1042->g_127[2];
        int32_t l_129 = (-1L);
        VECTOR(uint32_t, 4) l_137 = (VECTOR(uint32_t, 4))(0xDD3C1BD1L, (VECTOR(uint32_t, 2))(0xDD3C1BD1L, 8UL), 8UL);
        VECTOR(int8_t, 4) l_138 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x7AL), 0x7AL);
        int i;
        l_129 ^= ((((*l_99) = ((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((((*l_126) = (safe_add_func_int16_t_s_s((((((*l_108) = GROUP_DIVERGE(0, 1)) & p_1042->g_61) , ((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_113, (p_58 || (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x6472L, 0x7E7DL)).even, (-5L)))))), FAKE_DIVERGE(p_1042->global_1_offset, get_global_id(1), 10))) || ((*l_116) = 2L))) , ((safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_u(((*l_88) ^= 0x4DL), 3)) && (safe_add_func_uint16_t_u_u((0x6CCD6F842C222D14L < 4UL), (((*l_116) = (safe_mod_func_int32_t_s_s((0x28L | p_1042->g_13[0]), FAKE_DIVERGE(p_1042->global_0_offset, get_global_id(0), 10)))) >= p_57)))) >= p_1042->g_comm_values[p_1042->tid]), p_1042->g_93)) , p_57)), 0x1891L))) != 9UL), l_128[3])) , (void*)0) == p_60), l_113)) & l_113)) == l_113) >= l_113);
        for (l_113 = (-4); (l_113 < (-12)); l_113 = safe_sub_func_uint8_t_u_u(l_113, 4))
        { /* block id: 34 */
            l_129 ^= p_1042->g_132;
        }
        l_129 &= ((safe_rshift_func_int16_t_s_s(((((((0xFD4F96F3L < p_59) && 3UL) , 0x14D1L) , ((*l_126) = ((0xC76D5E06L == ((VECTOR(uint32_t, 2))(l_137.xx)).odd) >= ((void*)0 == l_99)))) , 0x69L) == ((*l_116) |= ((VECTOR(int8_t, 2))(l_138.yy)).hi)), 6)) || ((p_1042->g_16 , l_92) == &p_1042->g_117));
        l_129 = l_139;
    }
    for (p_1042->g_6 = 0; (p_1042->g_6 <= (-24)); --p_1042->g_6)
    { /* block id: 44 */
        int32_t l_142 = 0x65C57B0BL;
        VECTOR(int8_t, 8) l_163 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        int32_t l_174 = 1L;
        int32_t l_179 = 0x5CE2F2AAL;
        int32_t l_180 = 0x3DB25185L;
        int32_t l_181 = (-1L);
        int32_t l_182 = 0x5F9BD9F5L;
        int32_t l_183 = 1L;
        int32_t l_184 = 1L;
        int32_t l_186[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        uint32_t l_189 = 0x1215F5D2L;
        int i;
        l_142 |= 0x7DCF5926L;
        for (p_1042->g_89 = (-1); (p_1042->g_89 != 41); p_1042->g_89++)
        { /* block id: 48 */
            int64_t l_171 = (-1L);
            int16_t l_172 = 1L;
            uint64_t *l_173 = &l_139;
            uint64_t **l_176 = (void*)0;
            uint64_t ***l_175[3][2][3] = {{{&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176}},{{&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176}},{{&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176}}};
            int i, j, k;
            l_174 = ((VECTOR(int32_t, 4))(0x2523A445L, (0x7735C8EA54E84F83L >= (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((p_57 , 8UL) != (((*l_173) = ((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(249UL, ((safe_add_func_uint64_t_u_u(l_142, (l_142 != ((p_57 < p_59) >= ((VECTOR(uint8_t, 8))(0x15L, ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 16))(l_163.s2422420126112137)).s5e, (int8_t)(((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((p_1042->g_170 = (safe_mod_func_int32_t_s_s(0x79E7C7BDL, l_163.s6))) != p_58) , 0x0B73L), p_58)) | p_1042->g_132), p_57)) == l_163.s2) != FAKE_DIVERGE(p_1042->local_2_offset, get_local_id(2), 10)), (int8_t)l_171))).xyxyyyxx, ((VECTOR(int8_t, 8))(0x42L)), ((VECTOR(int8_t, 8))(0x2BL))))).s42, ((VECTOR(int8_t, 2))(0L))))).xxyyxxyy)))).hi, (uint8_t)l_172))), 0xEAL, 0xE9L, 0UL)).s2)))) | FAKE_DIVERGE(p_1042->global_0_offset, get_global_id(0), 10)))), 0x50F463211C853B70L)), 0UL)), 0x7792L)), 0xFE7BAF2FL)) != 6UL)) > p_1042->g_100)), l_163.s4)), p_1042->g_127[2])), p_57))), (-1L), 0x013D76F3L)).z;
            l_177 = &l_173;
            (*p_1042->g_78) = p_60;
        }
        l_189--;
        (*p_1042->g_78) = func_62((p_1042->g_76[0][8][4] = &p_1042->g_77[0][4][4]), p_58, (~p_59), p_1042);
    }
    l_194 = (safe_div_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), 0x530F81C4L));
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_62(int32_t ** p_63, int32_t  p_64, int64_t  p_65, struct S0 * p_1042)
{ /* block id: 12 */
    int32_t *l_68[4][4][8] = {{{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}}};
    int i, j, k;
    return l_68[1][1][6];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[34];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 34; i++)
            l_comm_values[i] = 1;
    struct S0 c_1043;
    struct S0* p_1042 = &c_1043;
    struct S0 c_1044 = {
        (-4L), // p_1042->g_2
        0x4DC9ED9BL, // p_1042->g_6
        {0x6AFB5D1CB6A7F4EAL}, // p_1042->g_13
        0x3703ACB6D64BDA99L, // p_1042->g_16
        0x276AC116L, // p_1042->g_18
        (-5L), // p_1042->g_61
        {{{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}},{{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6},{&p_1042->g_6,(void*)0,&p_1042->g_6,&p_1042->g_6,&p_1042->g_6}}}, // p_1042->g_77
        {{{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]}},{{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]}},{{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]}},{{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]}},{{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]},{&p_1042->g_77[0][4][4],&p_1042->g_77[1][1][2],&p_1042->g_77[1][1][4],&p_1042->g_77[4][0][3],&p_1042->g_77[7][1][3]}}}, // p_1042->g_76
        &p_1042->g_77[0][4][4], // p_1042->g_78
        (void*)0, // p_1042->g_79
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x2745916079B8BCB0L), 0x2745916079B8BCB0L), 0x2745916079B8BCB0L, 0L, 0x2745916079B8BCB0L, (VECTOR(int64_t, 2))(0L, 0x2745916079B8BCB0L), (VECTOR(int64_t, 2))(0L, 0x2745916079B8BCB0L), 0L, 0x2745916079B8BCB0L, 0L, 0x2745916079B8BCB0L), // p_1042->g_81
        8UL, // p_1042->g_89
        0x38L, // p_1042->g_93
        1UL, // p_1042->g_96
        4L, // p_1042->g_98
        0xF6L, // p_1042->g_100
        0x62L, // p_1042->g_117
        {1UL,1UL,1UL,1UL}, // p_1042->g_127
        0xBA9D02FAEDEB9ED2L, // p_1042->g_132
        0xCDD564CCL, // p_1042->g_170
        0x3735E30AL, // p_1042->g_188
        (VECTOR(uint64_t, 8))(0x3F8C166A06F39045L, (VECTOR(uint64_t, 4))(0x3F8C166A06F39045L, (VECTOR(uint64_t, 2))(0x3F8C166A06F39045L, 0UL), 0UL), 0UL, 0x3F8C166A06F39045L, 0UL), // p_1042->g_214
        &p_1042->g_98, // p_1042->g_215
        (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0UL), 0UL), 0UL, 9UL, 0UL, (VECTOR(uint8_t, 2))(9UL, 0UL), (VECTOR(uint8_t, 2))(9UL, 0UL), 9UL, 0UL, 9UL, 0UL), // p_1042->g_216
        (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0xA76508F860F2E0DBL), 0xA76508F860F2E0DBL), // p_1042->g_230
        0x117ED82E38CEF187L, // p_1042->g_231
        &p_1042->g_231, // p_1042->g_229
        (VECTOR(uint8_t, 4))(0xBDL, (VECTOR(uint8_t, 2))(0xBDL, 9UL), 9UL), // p_1042->g_244
        0x0AD6L, // p_1042->g_258
        0x23AFL, // p_1042->g_266
        (VECTOR(uint8_t, 16))(0x67L, (VECTOR(uint8_t, 4))(0x67L, (VECTOR(uint8_t, 2))(0x67L, 0x89L), 0x89L), 0x89L, 0x67L, 0x89L, (VECTOR(uint8_t, 2))(0x67L, 0x89L), (VECTOR(uint8_t, 2))(0x67L, 0x89L), 0x67L, 0x89L, 0x67L, 0x89L), // p_1042->g_318
        (void*)0, // p_1042->g_321
        &p_1042->g_321, // p_1042->g_320
        (VECTOR(int64_t, 2))((-6L), 6L), // p_1042->g_364
        (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x3FA40F80CBDDC556L), // p_1042->g_391
        (VECTOR(uint64_t, 2))(0UL, 1UL), // p_1042->g_392
        8L, // p_1042->g_394
        0x5B04D5039B0EC789L, // p_1042->g_398
        (VECTOR(int32_t, 8))(0x54E23AE5L, (VECTOR(int32_t, 4))(0x54E23AE5L, (VECTOR(int32_t, 2))(0x54E23AE5L, 0x0A282B2FL), 0x0A282B2FL), 0x0A282B2FL, 0x54E23AE5L, 0x0A282B2FL), // p_1042->g_399
        0x054AL, // p_1042->g_402
        (void*)0, // p_1042->g_404
        0x118A9ADBL, // p_1042->g_436
        0x5937L, // p_1042->g_437
        {(void*)0}, // p_1042->g_473
        (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x3CF1L), 0x3CF1L), 0x3CF1L, 65532UL, 0x3CF1L, (VECTOR(uint16_t, 2))(65532UL, 0x3CF1L), (VECTOR(uint16_t, 2))(65532UL, 0x3CF1L), 65532UL, 0x3CF1L, 65532UL, 0x3CF1L), // p_1042->g_496
        (VECTOR(uint8_t, 8))(0xE3L, (VECTOR(uint8_t, 4))(0xE3L, (VECTOR(uint8_t, 2))(0xE3L, 0xF6L), 0xF6L), 0xF6L, 0xE3L, 0xF6L), // p_1042->g_507
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xB211D2380F543487L), 0xB211D2380F543487L), 0xB211D2380F543487L, 0UL, 0xB211D2380F543487L, (VECTOR(uint64_t, 2))(0UL, 0xB211D2380F543487L), (VECTOR(uint64_t, 2))(0UL, 0xB211D2380F543487L), 0UL, 0xB211D2380F543487L, 0UL, 0xB211D2380F543487L), // p_1042->g_512
        (VECTOR(int64_t, 16))(0x60B6BC1983DBFCE8L, (VECTOR(int64_t, 4))(0x60B6BC1983DBFCE8L, (VECTOR(int64_t, 2))(0x60B6BC1983DBFCE8L, 0x2FC2F0BBB28463F0L), 0x2FC2F0BBB28463F0L), 0x2FC2F0BBB28463F0L, 0x60B6BC1983DBFCE8L, 0x2FC2F0BBB28463F0L, (VECTOR(int64_t, 2))(0x60B6BC1983DBFCE8L, 0x2FC2F0BBB28463F0L), (VECTOR(int64_t, 2))(0x60B6BC1983DBFCE8L, 0x2FC2F0BBB28463F0L), 0x60B6BC1983DBFCE8L, 0x2FC2F0BBB28463F0L, 0x60B6BC1983DBFCE8L, 0x2FC2F0BBB28463F0L), // p_1042->g_518
        0x1DL, // p_1042->g_524
        (void*)0, // p_1042->g_528
        {&p_1042->g_528,&p_1042->g_528,&p_1042->g_528,&p_1042->g_528,&p_1042->g_528,&p_1042->g_528}, // p_1042->g_527
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0CL), 0x0CL), 0x0CL, 0L, 0x0CL, (VECTOR(int8_t, 2))(0L, 0x0CL), (VECTOR(int8_t, 2))(0L, 0x0CL), 0L, 0x0CL, 0L, 0x0CL), // p_1042->g_550
        (void*)0, // p_1042->g_567
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1042->g_568
        0xF0F15E380C9A38ECL, // p_1042->g_659
        (VECTOR(uint16_t, 2))(0x8631L, 0x8704L), // p_1042->g_685
        0UL, // p_1042->g_695
        (VECTOR(uint16_t, 2))(65529UL, 65529UL), // p_1042->g_719
        (VECTOR(int8_t, 4))(0x46L, (VECTOR(int8_t, 2))(0x46L, 0x12L), 0x12L), // p_1042->g_726
        (void*)0, // p_1042->g_738
        1UL, // p_1042->g_770
        (VECTOR(uint16_t, 8))(0xAFDBL, (VECTOR(uint16_t, 4))(0xAFDBL, (VECTOR(uint16_t, 2))(0xAFDBL, 0x1CCFL), 0x1CCFL), 0x1CCFL, 0xAFDBL, 0x1CCFL), // p_1042->g_809
        (VECTOR(uint16_t, 8))(0x9D16L, (VECTOR(uint16_t, 4))(0x9D16L, (VECTOR(uint16_t, 2))(0x9D16L, 65535UL), 65535UL), 65535UL, 0x9D16L, 65535UL), // p_1042->g_810
        (void*)0, // p_1042->g_824
        &p_1042->g_824, // p_1042->g_823
        (VECTOR(uint32_t, 2))(0UL, 2UL), // p_1042->g_826
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_1042->g_830
        0x04L, // p_1042->g_874
        0x6BL, // p_1042->g_893
        (VECTOR(int8_t, 2))(0x0FL, 0x36L), // p_1042->g_931
        (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x17BCFCB1L), 0x17BCFCB1L), 0x17BCFCB1L, 8L, 0x17BCFCB1L, (VECTOR(int32_t, 2))(8L, 0x17BCFCB1L), (VECTOR(int32_t, 2))(8L, 0x17BCFCB1L), 8L, 0x17BCFCB1L, 8L, 0x17BCFCB1L), // p_1042->g_959
        (VECTOR(int32_t, 2))(0x2D93938DL, 0x5995CE51L), // p_1042->g_972
        {{{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL}},{{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL}},{{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL}},{{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL}},{{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL}},{{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL},{1UL,0x8FL}}}, // p_1042->g_985
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x6CL), 0x6CL), 0x6CL, 0L, 0x6CL), // p_1042->g_998
        0x1C0CAFA9L, // p_1042->g_1032
        {&p_1042->g_404,&p_1042->g_404,&p_1042->g_404,&p_1042->g_404,&p_1042->g_404,&p_1042->g_404}, // p_1042->g_1035
        {(void*)0}, // p_1042->g_1037
        &p_1042->g_77[0][4][4], // p_1042->g_1038
        0, // p_1042->v_collective
        sequence_input[get_global_id(0)], // p_1042->global_0_offset
        sequence_input[get_global_id(1)], // p_1042->global_1_offset
        sequence_input[get_global_id(2)], // p_1042->global_2_offset
        sequence_input[get_local_id(0)], // p_1042->local_0_offset
        sequence_input[get_local_id(1)], // p_1042->local_1_offset
        sequence_input[get_local_id(2)], // p_1042->local_2_offset
        sequence_input[get_group_id(0)], // p_1042->group_0_offset
        sequence_input[get_group_id(1)], // p_1042->group_1_offset
        sequence_input[get_group_id(2)], // p_1042->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 34)), permutations[0][get_linear_local_id()])), // p_1042->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1043 = c_1044;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1042);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1042->g_2, "p_1042->g_2", print_hash_value);
    transparent_crc(p_1042->g_6, "p_1042->g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1042->g_13[i], "p_1042->g_13[i]", print_hash_value);

    }
    transparent_crc(p_1042->g_16, "p_1042->g_16", print_hash_value);
    transparent_crc(p_1042->g_18, "p_1042->g_18", print_hash_value);
    transparent_crc(p_1042->g_61, "p_1042->g_61", print_hash_value);
    transparent_crc(p_1042->g_81.s0, "p_1042->g_81.s0", print_hash_value);
    transparent_crc(p_1042->g_81.s1, "p_1042->g_81.s1", print_hash_value);
    transparent_crc(p_1042->g_81.s2, "p_1042->g_81.s2", print_hash_value);
    transparent_crc(p_1042->g_81.s3, "p_1042->g_81.s3", print_hash_value);
    transparent_crc(p_1042->g_81.s4, "p_1042->g_81.s4", print_hash_value);
    transparent_crc(p_1042->g_81.s5, "p_1042->g_81.s5", print_hash_value);
    transparent_crc(p_1042->g_81.s6, "p_1042->g_81.s6", print_hash_value);
    transparent_crc(p_1042->g_81.s7, "p_1042->g_81.s7", print_hash_value);
    transparent_crc(p_1042->g_81.s8, "p_1042->g_81.s8", print_hash_value);
    transparent_crc(p_1042->g_81.s9, "p_1042->g_81.s9", print_hash_value);
    transparent_crc(p_1042->g_81.sa, "p_1042->g_81.sa", print_hash_value);
    transparent_crc(p_1042->g_81.sb, "p_1042->g_81.sb", print_hash_value);
    transparent_crc(p_1042->g_81.sc, "p_1042->g_81.sc", print_hash_value);
    transparent_crc(p_1042->g_81.sd, "p_1042->g_81.sd", print_hash_value);
    transparent_crc(p_1042->g_81.se, "p_1042->g_81.se", print_hash_value);
    transparent_crc(p_1042->g_81.sf, "p_1042->g_81.sf", print_hash_value);
    transparent_crc(p_1042->g_89, "p_1042->g_89", print_hash_value);
    transparent_crc(p_1042->g_93, "p_1042->g_93", print_hash_value);
    transparent_crc(p_1042->g_96, "p_1042->g_96", print_hash_value);
    transparent_crc(p_1042->g_98, "p_1042->g_98", print_hash_value);
    transparent_crc(p_1042->g_100, "p_1042->g_100", print_hash_value);
    transparent_crc(p_1042->g_117, "p_1042->g_117", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1042->g_127[i], "p_1042->g_127[i]", print_hash_value);

    }
    transparent_crc(p_1042->g_132, "p_1042->g_132", print_hash_value);
    transparent_crc(p_1042->g_170, "p_1042->g_170", print_hash_value);
    transparent_crc(p_1042->g_188, "p_1042->g_188", print_hash_value);
    transparent_crc(p_1042->g_214.s0, "p_1042->g_214.s0", print_hash_value);
    transparent_crc(p_1042->g_214.s1, "p_1042->g_214.s1", print_hash_value);
    transparent_crc(p_1042->g_214.s2, "p_1042->g_214.s2", print_hash_value);
    transparent_crc(p_1042->g_214.s3, "p_1042->g_214.s3", print_hash_value);
    transparent_crc(p_1042->g_214.s4, "p_1042->g_214.s4", print_hash_value);
    transparent_crc(p_1042->g_214.s5, "p_1042->g_214.s5", print_hash_value);
    transparent_crc(p_1042->g_214.s6, "p_1042->g_214.s6", print_hash_value);
    transparent_crc(p_1042->g_214.s7, "p_1042->g_214.s7", print_hash_value);
    transparent_crc(p_1042->g_216.s0, "p_1042->g_216.s0", print_hash_value);
    transparent_crc(p_1042->g_216.s1, "p_1042->g_216.s1", print_hash_value);
    transparent_crc(p_1042->g_216.s2, "p_1042->g_216.s2", print_hash_value);
    transparent_crc(p_1042->g_216.s3, "p_1042->g_216.s3", print_hash_value);
    transparent_crc(p_1042->g_216.s4, "p_1042->g_216.s4", print_hash_value);
    transparent_crc(p_1042->g_216.s5, "p_1042->g_216.s5", print_hash_value);
    transparent_crc(p_1042->g_216.s6, "p_1042->g_216.s6", print_hash_value);
    transparent_crc(p_1042->g_216.s7, "p_1042->g_216.s7", print_hash_value);
    transparent_crc(p_1042->g_216.s8, "p_1042->g_216.s8", print_hash_value);
    transparent_crc(p_1042->g_216.s9, "p_1042->g_216.s9", print_hash_value);
    transparent_crc(p_1042->g_216.sa, "p_1042->g_216.sa", print_hash_value);
    transparent_crc(p_1042->g_216.sb, "p_1042->g_216.sb", print_hash_value);
    transparent_crc(p_1042->g_216.sc, "p_1042->g_216.sc", print_hash_value);
    transparent_crc(p_1042->g_216.sd, "p_1042->g_216.sd", print_hash_value);
    transparent_crc(p_1042->g_216.se, "p_1042->g_216.se", print_hash_value);
    transparent_crc(p_1042->g_216.sf, "p_1042->g_216.sf", print_hash_value);
    transparent_crc(p_1042->g_230.x, "p_1042->g_230.x", print_hash_value);
    transparent_crc(p_1042->g_230.y, "p_1042->g_230.y", print_hash_value);
    transparent_crc(p_1042->g_230.z, "p_1042->g_230.z", print_hash_value);
    transparent_crc(p_1042->g_230.w, "p_1042->g_230.w", print_hash_value);
    transparent_crc(p_1042->g_231, "p_1042->g_231", print_hash_value);
    transparent_crc(p_1042->g_244.x, "p_1042->g_244.x", print_hash_value);
    transparent_crc(p_1042->g_244.y, "p_1042->g_244.y", print_hash_value);
    transparent_crc(p_1042->g_244.z, "p_1042->g_244.z", print_hash_value);
    transparent_crc(p_1042->g_244.w, "p_1042->g_244.w", print_hash_value);
    transparent_crc(p_1042->g_258, "p_1042->g_258", print_hash_value);
    transparent_crc(p_1042->g_266, "p_1042->g_266", print_hash_value);
    transparent_crc(p_1042->g_318.s0, "p_1042->g_318.s0", print_hash_value);
    transparent_crc(p_1042->g_318.s1, "p_1042->g_318.s1", print_hash_value);
    transparent_crc(p_1042->g_318.s2, "p_1042->g_318.s2", print_hash_value);
    transparent_crc(p_1042->g_318.s3, "p_1042->g_318.s3", print_hash_value);
    transparent_crc(p_1042->g_318.s4, "p_1042->g_318.s4", print_hash_value);
    transparent_crc(p_1042->g_318.s5, "p_1042->g_318.s5", print_hash_value);
    transparent_crc(p_1042->g_318.s6, "p_1042->g_318.s6", print_hash_value);
    transparent_crc(p_1042->g_318.s7, "p_1042->g_318.s7", print_hash_value);
    transparent_crc(p_1042->g_318.s8, "p_1042->g_318.s8", print_hash_value);
    transparent_crc(p_1042->g_318.s9, "p_1042->g_318.s9", print_hash_value);
    transparent_crc(p_1042->g_318.sa, "p_1042->g_318.sa", print_hash_value);
    transparent_crc(p_1042->g_318.sb, "p_1042->g_318.sb", print_hash_value);
    transparent_crc(p_1042->g_318.sc, "p_1042->g_318.sc", print_hash_value);
    transparent_crc(p_1042->g_318.sd, "p_1042->g_318.sd", print_hash_value);
    transparent_crc(p_1042->g_318.se, "p_1042->g_318.se", print_hash_value);
    transparent_crc(p_1042->g_318.sf, "p_1042->g_318.sf", print_hash_value);
    transparent_crc(p_1042->g_364.x, "p_1042->g_364.x", print_hash_value);
    transparent_crc(p_1042->g_364.y, "p_1042->g_364.y", print_hash_value);
    transparent_crc(p_1042->g_391.x, "p_1042->g_391.x", print_hash_value);
    transparent_crc(p_1042->g_391.y, "p_1042->g_391.y", print_hash_value);
    transparent_crc(p_1042->g_392.x, "p_1042->g_392.x", print_hash_value);
    transparent_crc(p_1042->g_392.y, "p_1042->g_392.y", print_hash_value);
    transparent_crc(p_1042->g_394, "p_1042->g_394", print_hash_value);
    transparent_crc(p_1042->g_398, "p_1042->g_398", print_hash_value);
    transparent_crc(p_1042->g_399.s0, "p_1042->g_399.s0", print_hash_value);
    transparent_crc(p_1042->g_399.s1, "p_1042->g_399.s1", print_hash_value);
    transparent_crc(p_1042->g_399.s2, "p_1042->g_399.s2", print_hash_value);
    transparent_crc(p_1042->g_399.s3, "p_1042->g_399.s3", print_hash_value);
    transparent_crc(p_1042->g_399.s4, "p_1042->g_399.s4", print_hash_value);
    transparent_crc(p_1042->g_399.s5, "p_1042->g_399.s5", print_hash_value);
    transparent_crc(p_1042->g_399.s6, "p_1042->g_399.s6", print_hash_value);
    transparent_crc(p_1042->g_399.s7, "p_1042->g_399.s7", print_hash_value);
    transparent_crc(p_1042->g_402, "p_1042->g_402", print_hash_value);
    transparent_crc(p_1042->g_436, "p_1042->g_436", print_hash_value);
    transparent_crc(p_1042->g_437, "p_1042->g_437", print_hash_value);
    transparent_crc(p_1042->g_496.s0, "p_1042->g_496.s0", print_hash_value);
    transparent_crc(p_1042->g_496.s1, "p_1042->g_496.s1", print_hash_value);
    transparent_crc(p_1042->g_496.s2, "p_1042->g_496.s2", print_hash_value);
    transparent_crc(p_1042->g_496.s3, "p_1042->g_496.s3", print_hash_value);
    transparent_crc(p_1042->g_496.s4, "p_1042->g_496.s4", print_hash_value);
    transparent_crc(p_1042->g_496.s5, "p_1042->g_496.s5", print_hash_value);
    transparent_crc(p_1042->g_496.s6, "p_1042->g_496.s6", print_hash_value);
    transparent_crc(p_1042->g_496.s7, "p_1042->g_496.s7", print_hash_value);
    transparent_crc(p_1042->g_496.s8, "p_1042->g_496.s8", print_hash_value);
    transparent_crc(p_1042->g_496.s9, "p_1042->g_496.s9", print_hash_value);
    transparent_crc(p_1042->g_496.sa, "p_1042->g_496.sa", print_hash_value);
    transparent_crc(p_1042->g_496.sb, "p_1042->g_496.sb", print_hash_value);
    transparent_crc(p_1042->g_496.sc, "p_1042->g_496.sc", print_hash_value);
    transparent_crc(p_1042->g_496.sd, "p_1042->g_496.sd", print_hash_value);
    transparent_crc(p_1042->g_496.se, "p_1042->g_496.se", print_hash_value);
    transparent_crc(p_1042->g_496.sf, "p_1042->g_496.sf", print_hash_value);
    transparent_crc(p_1042->g_507.s0, "p_1042->g_507.s0", print_hash_value);
    transparent_crc(p_1042->g_507.s1, "p_1042->g_507.s1", print_hash_value);
    transparent_crc(p_1042->g_507.s2, "p_1042->g_507.s2", print_hash_value);
    transparent_crc(p_1042->g_507.s3, "p_1042->g_507.s3", print_hash_value);
    transparent_crc(p_1042->g_507.s4, "p_1042->g_507.s4", print_hash_value);
    transparent_crc(p_1042->g_507.s5, "p_1042->g_507.s5", print_hash_value);
    transparent_crc(p_1042->g_507.s6, "p_1042->g_507.s6", print_hash_value);
    transparent_crc(p_1042->g_507.s7, "p_1042->g_507.s7", print_hash_value);
    transparent_crc(p_1042->g_512.s0, "p_1042->g_512.s0", print_hash_value);
    transparent_crc(p_1042->g_512.s1, "p_1042->g_512.s1", print_hash_value);
    transparent_crc(p_1042->g_512.s2, "p_1042->g_512.s2", print_hash_value);
    transparent_crc(p_1042->g_512.s3, "p_1042->g_512.s3", print_hash_value);
    transparent_crc(p_1042->g_512.s4, "p_1042->g_512.s4", print_hash_value);
    transparent_crc(p_1042->g_512.s5, "p_1042->g_512.s5", print_hash_value);
    transparent_crc(p_1042->g_512.s6, "p_1042->g_512.s6", print_hash_value);
    transparent_crc(p_1042->g_512.s7, "p_1042->g_512.s7", print_hash_value);
    transparent_crc(p_1042->g_512.s8, "p_1042->g_512.s8", print_hash_value);
    transparent_crc(p_1042->g_512.s9, "p_1042->g_512.s9", print_hash_value);
    transparent_crc(p_1042->g_512.sa, "p_1042->g_512.sa", print_hash_value);
    transparent_crc(p_1042->g_512.sb, "p_1042->g_512.sb", print_hash_value);
    transparent_crc(p_1042->g_512.sc, "p_1042->g_512.sc", print_hash_value);
    transparent_crc(p_1042->g_512.sd, "p_1042->g_512.sd", print_hash_value);
    transparent_crc(p_1042->g_512.se, "p_1042->g_512.se", print_hash_value);
    transparent_crc(p_1042->g_512.sf, "p_1042->g_512.sf", print_hash_value);
    transparent_crc(p_1042->g_518.s0, "p_1042->g_518.s0", print_hash_value);
    transparent_crc(p_1042->g_518.s1, "p_1042->g_518.s1", print_hash_value);
    transparent_crc(p_1042->g_518.s2, "p_1042->g_518.s2", print_hash_value);
    transparent_crc(p_1042->g_518.s3, "p_1042->g_518.s3", print_hash_value);
    transparent_crc(p_1042->g_518.s4, "p_1042->g_518.s4", print_hash_value);
    transparent_crc(p_1042->g_518.s5, "p_1042->g_518.s5", print_hash_value);
    transparent_crc(p_1042->g_518.s6, "p_1042->g_518.s6", print_hash_value);
    transparent_crc(p_1042->g_518.s7, "p_1042->g_518.s7", print_hash_value);
    transparent_crc(p_1042->g_518.s8, "p_1042->g_518.s8", print_hash_value);
    transparent_crc(p_1042->g_518.s9, "p_1042->g_518.s9", print_hash_value);
    transparent_crc(p_1042->g_518.sa, "p_1042->g_518.sa", print_hash_value);
    transparent_crc(p_1042->g_518.sb, "p_1042->g_518.sb", print_hash_value);
    transparent_crc(p_1042->g_518.sc, "p_1042->g_518.sc", print_hash_value);
    transparent_crc(p_1042->g_518.sd, "p_1042->g_518.sd", print_hash_value);
    transparent_crc(p_1042->g_518.se, "p_1042->g_518.se", print_hash_value);
    transparent_crc(p_1042->g_518.sf, "p_1042->g_518.sf", print_hash_value);
    transparent_crc(p_1042->g_524, "p_1042->g_524", print_hash_value);
    transparent_crc(p_1042->g_550.s0, "p_1042->g_550.s0", print_hash_value);
    transparent_crc(p_1042->g_550.s1, "p_1042->g_550.s1", print_hash_value);
    transparent_crc(p_1042->g_550.s2, "p_1042->g_550.s2", print_hash_value);
    transparent_crc(p_1042->g_550.s3, "p_1042->g_550.s3", print_hash_value);
    transparent_crc(p_1042->g_550.s4, "p_1042->g_550.s4", print_hash_value);
    transparent_crc(p_1042->g_550.s5, "p_1042->g_550.s5", print_hash_value);
    transparent_crc(p_1042->g_550.s6, "p_1042->g_550.s6", print_hash_value);
    transparent_crc(p_1042->g_550.s7, "p_1042->g_550.s7", print_hash_value);
    transparent_crc(p_1042->g_550.s8, "p_1042->g_550.s8", print_hash_value);
    transparent_crc(p_1042->g_550.s9, "p_1042->g_550.s9", print_hash_value);
    transparent_crc(p_1042->g_550.sa, "p_1042->g_550.sa", print_hash_value);
    transparent_crc(p_1042->g_550.sb, "p_1042->g_550.sb", print_hash_value);
    transparent_crc(p_1042->g_550.sc, "p_1042->g_550.sc", print_hash_value);
    transparent_crc(p_1042->g_550.sd, "p_1042->g_550.sd", print_hash_value);
    transparent_crc(p_1042->g_550.se, "p_1042->g_550.se", print_hash_value);
    transparent_crc(p_1042->g_550.sf, "p_1042->g_550.sf", print_hash_value);
    transparent_crc(p_1042->g_659, "p_1042->g_659", print_hash_value);
    transparent_crc(p_1042->g_685.x, "p_1042->g_685.x", print_hash_value);
    transparent_crc(p_1042->g_685.y, "p_1042->g_685.y", print_hash_value);
    transparent_crc(p_1042->g_695, "p_1042->g_695", print_hash_value);
    transparent_crc(p_1042->g_719.x, "p_1042->g_719.x", print_hash_value);
    transparent_crc(p_1042->g_719.y, "p_1042->g_719.y", print_hash_value);
    transparent_crc(p_1042->g_726.x, "p_1042->g_726.x", print_hash_value);
    transparent_crc(p_1042->g_726.y, "p_1042->g_726.y", print_hash_value);
    transparent_crc(p_1042->g_726.z, "p_1042->g_726.z", print_hash_value);
    transparent_crc(p_1042->g_726.w, "p_1042->g_726.w", print_hash_value);
    transparent_crc(p_1042->g_770, "p_1042->g_770", print_hash_value);
    transparent_crc(p_1042->g_809.s0, "p_1042->g_809.s0", print_hash_value);
    transparent_crc(p_1042->g_809.s1, "p_1042->g_809.s1", print_hash_value);
    transparent_crc(p_1042->g_809.s2, "p_1042->g_809.s2", print_hash_value);
    transparent_crc(p_1042->g_809.s3, "p_1042->g_809.s3", print_hash_value);
    transparent_crc(p_1042->g_809.s4, "p_1042->g_809.s4", print_hash_value);
    transparent_crc(p_1042->g_809.s5, "p_1042->g_809.s5", print_hash_value);
    transparent_crc(p_1042->g_809.s6, "p_1042->g_809.s6", print_hash_value);
    transparent_crc(p_1042->g_809.s7, "p_1042->g_809.s7", print_hash_value);
    transparent_crc(p_1042->g_810.s0, "p_1042->g_810.s0", print_hash_value);
    transparent_crc(p_1042->g_810.s1, "p_1042->g_810.s1", print_hash_value);
    transparent_crc(p_1042->g_810.s2, "p_1042->g_810.s2", print_hash_value);
    transparent_crc(p_1042->g_810.s3, "p_1042->g_810.s3", print_hash_value);
    transparent_crc(p_1042->g_810.s4, "p_1042->g_810.s4", print_hash_value);
    transparent_crc(p_1042->g_810.s5, "p_1042->g_810.s5", print_hash_value);
    transparent_crc(p_1042->g_810.s6, "p_1042->g_810.s6", print_hash_value);
    transparent_crc(p_1042->g_810.s7, "p_1042->g_810.s7", print_hash_value);
    transparent_crc(p_1042->g_826.x, "p_1042->g_826.x", print_hash_value);
    transparent_crc(p_1042->g_826.y, "p_1042->g_826.y", print_hash_value);
    transparent_crc(p_1042->g_830.s0, "p_1042->g_830.s0", print_hash_value);
    transparent_crc(p_1042->g_830.s1, "p_1042->g_830.s1", print_hash_value);
    transparent_crc(p_1042->g_830.s2, "p_1042->g_830.s2", print_hash_value);
    transparent_crc(p_1042->g_830.s3, "p_1042->g_830.s3", print_hash_value);
    transparent_crc(p_1042->g_830.s4, "p_1042->g_830.s4", print_hash_value);
    transparent_crc(p_1042->g_830.s5, "p_1042->g_830.s5", print_hash_value);
    transparent_crc(p_1042->g_830.s6, "p_1042->g_830.s6", print_hash_value);
    transparent_crc(p_1042->g_830.s7, "p_1042->g_830.s7", print_hash_value);
    transparent_crc(p_1042->g_830.s8, "p_1042->g_830.s8", print_hash_value);
    transparent_crc(p_1042->g_830.s9, "p_1042->g_830.s9", print_hash_value);
    transparent_crc(p_1042->g_830.sa, "p_1042->g_830.sa", print_hash_value);
    transparent_crc(p_1042->g_830.sb, "p_1042->g_830.sb", print_hash_value);
    transparent_crc(p_1042->g_830.sc, "p_1042->g_830.sc", print_hash_value);
    transparent_crc(p_1042->g_830.sd, "p_1042->g_830.sd", print_hash_value);
    transparent_crc(p_1042->g_830.se, "p_1042->g_830.se", print_hash_value);
    transparent_crc(p_1042->g_830.sf, "p_1042->g_830.sf", print_hash_value);
    transparent_crc(p_1042->g_874, "p_1042->g_874", print_hash_value);
    transparent_crc(p_1042->g_893, "p_1042->g_893", print_hash_value);
    transparent_crc(p_1042->g_931.x, "p_1042->g_931.x", print_hash_value);
    transparent_crc(p_1042->g_931.y, "p_1042->g_931.y", print_hash_value);
    transparent_crc(p_1042->g_959.s0, "p_1042->g_959.s0", print_hash_value);
    transparent_crc(p_1042->g_959.s1, "p_1042->g_959.s1", print_hash_value);
    transparent_crc(p_1042->g_959.s2, "p_1042->g_959.s2", print_hash_value);
    transparent_crc(p_1042->g_959.s3, "p_1042->g_959.s3", print_hash_value);
    transparent_crc(p_1042->g_959.s4, "p_1042->g_959.s4", print_hash_value);
    transparent_crc(p_1042->g_959.s5, "p_1042->g_959.s5", print_hash_value);
    transparent_crc(p_1042->g_959.s6, "p_1042->g_959.s6", print_hash_value);
    transparent_crc(p_1042->g_959.s7, "p_1042->g_959.s7", print_hash_value);
    transparent_crc(p_1042->g_959.s8, "p_1042->g_959.s8", print_hash_value);
    transparent_crc(p_1042->g_959.s9, "p_1042->g_959.s9", print_hash_value);
    transparent_crc(p_1042->g_959.sa, "p_1042->g_959.sa", print_hash_value);
    transparent_crc(p_1042->g_959.sb, "p_1042->g_959.sb", print_hash_value);
    transparent_crc(p_1042->g_959.sc, "p_1042->g_959.sc", print_hash_value);
    transparent_crc(p_1042->g_959.sd, "p_1042->g_959.sd", print_hash_value);
    transparent_crc(p_1042->g_959.se, "p_1042->g_959.se", print_hash_value);
    transparent_crc(p_1042->g_959.sf, "p_1042->g_959.sf", print_hash_value);
    transparent_crc(p_1042->g_972.x, "p_1042->g_972.x", print_hash_value);
    transparent_crc(p_1042->g_972.y, "p_1042->g_972.y", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1042->g_985[i][j][k], "p_1042->g_985[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1042->g_998.s0, "p_1042->g_998.s0", print_hash_value);
    transparent_crc(p_1042->g_998.s1, "p_1042->g_998.s1", print_hash_value);
    transparent_crc(p_1042->g_998.s2, "p_1042->g_998.s2", print_hash_value);
    transparent_crc(p_1042->g_998.s3, "p_1042->g_998.s3", print_hash_value);
    transparent_crc(p_1042->g_998.s4, "p_1042->g_998.s4", print_hash_value);
    transparent_crc(p_1042->g_998.s5, "p_1042->g_998.s5", print_hash_value);
    transparent_crc(p_1042->g_998.s6, "p_1042->g_998.s6", print_hash_value);
    transparent_crc(p_1042->g_998.s7, "p_1042->g_998.s7", print_hash_value);
    transparent_crc(p_1042->g_1032, "p_1042->g_1032", print_hash_value);
    transparent_crc(p_1042->v_collective, "p_1042->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 59; i++)
            transparent_crc(p_1042->g_special_values[i + 59 * get_linear_group_id()], "p_1042->g_special_values[i + 59 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 59; i++)
            transparent_crc(p_1042->l_special_values[i], "p_1042->l_special_values[i]", print_hash_value);
    transparent_crc(p_1042->l_comm_values[get_linear_local_id()], "p_1042->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1042->g_comm_values[get_linear_group_id() * 34 + get_linear_local_id()], "p_1042->g_comm_values[get_linear_group_id() * 34 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
