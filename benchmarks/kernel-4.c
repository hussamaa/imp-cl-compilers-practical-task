// --atomics 50 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,27,1 -l 17,3,1
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

__constant uint32_t permutations[10][51] = {
{26,42,19,24,47,44,4,9,11,22,25,48,5,31,2,40,12,36,10,50,32,18,30,29,15,33,27,1,49,17,20,8,13,6,14,16,39,0,28,7,45,43,23,34,21,35,3,37,46,41,38}, // permutation 0
{43,11,50,20,32,16,25,30,3,49,28,17,13,2,7,22,29,23,5,37,36,10,42,47,21,4,9,33,19,48,35,24,39,40,31,26,46,12,34,18,45,6,41,15,44,38,14,27,8,1,0}, // permutation 1
{13,50,7,40,44,6,18,30,14,48,36,11,46,33,47,0,24,35,34,10,49,31,25,1,3,32,39,23,42,22,9,26,41,37,29,15,28,20,12,21,19,27,17,38,16,5,8,4,43,45,2}, // permutation 2
{46,5,20,7,37,3,47,19,18,22,25,28,34,42,49,36,50,2,27,39,24,29,44,0,35,30,11,13,33,15,48,26,10,21,43,14,41,6,40,32,9,1,12,16,17,38,8,45,4,23,31}, // permutation 3
{10,13,3,37,43,45,46,29,18,38,1,42,20,36,8,12,26,4,48,9,31,6,22,23,15,47,33,25,7,49,5,21,16,28,11,50,40,2,19,14,32,17,39,44,0,24,27,30,34,35,41}, // permutation 4
{13,19,32,5,25,10,48,39,44,27,49,0,28,9,2,35,1,47,29,41,23,20,4,21,8,15,33,3,22,46,40,36,17,43,18,31,24,45,34,12,11,42,14,37,7,26,38,30,6,16,50}, // permutation 5
{33,32,34,49,23,1,41,20,48,2,14,8,40,22,5,24,21,3,30,31,10,13,25,39,29,17,47,45,50,15,46,12,9,18,16,35,44,43,4,28,19,38,36,7,26,37,27,42,6,0,11}, // permutation 6
{34,9,38,0,48,32,36,5,14,30,41,6,35,26,8,1,22,10,50,27,46,49,43,13,39,2,19,29,12,7,16,23,47,28,15,45,42,40,24,37,3,20,11,21,25,31,17,44,4,18,33}, // permutation 7
{15,26,47,48,25,31,14,13,44,36,23,6,4,28,12,20,2,17,39,37,35,29,22,38,33,5,9,10,16,45,32,19,24,21,1,49,40,11,43,50,18,34,30,42,7,3,41,8,27,46,0}, // permutation 8
{20,42,0,12,14,4,39,10,11,19,15,44,48,17,41,6,33,3,38,29,25,16,9,18,31,47,40,50,2,30,13,8,1,49,28,43,23,35,36,7,34,21,5,45,24,26,27,22,32,46,37} // permutation 9
};

// Seed: 367037364

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
};

struct S1 {
    int32_t g_2;
    VECTOR(int8_t, 16) g_10;
    volatile VECTOR(int8_t, 16) g_11;
    VECTOR(uint32_t, 8) g_47;
    VECTOR(int32_t, 8) g_65;
    int32_t g_69;
    int32_t * volatile g_71;
    int32_t * volatile g_72;
    int32_t * volatile g_73[6];
    int32_t * volatile g_74;
    int32_t * volatile g_75;
    int32_t *g_80;
    int32_t ** volatile g_129;
    int16_t g_146;
    VECTOR(uint64_t, 16) g_147;
    VECTOR(uint64_t, 16) g_148;
    int64_t g_156;
    uint64_t *g_171;
    int32_t g_200;
    VECTOR(uint8_t, 2) g_212;
    volatile VECTOR(uint8_t, 16) g_213;
    volatile VECTOR(uint8_t, 8) g_214;
    int32_t g_225[8];
    int32_t * volatile g_235;
    int32_t * volatile g_236[2];
    VECTOR(int32_t, 4) g_238;
    int64_t g_251;
    volatile union U0 g_263;
    int32_t * volatile g_289;
    int32_t *g_293;
    uint32_t g_301[3][9][2];
    volatile VECTOR(uint32_t, 8) g_308;
    uint64_t *g_311;
    VECTOR(int16_t, 8) g_314;
    VECTOR(uint8_t, 2) g_339;
    volatile VECTOR(int64_t, 4) g_349;
    uint8_t *g_371;
    uint32_t g_392;
    int32_t g_414;
    volatile VECTOR(uint8_t, 4) g_417;
    VECTOR(uint64_t, 8) g_438;
    volatile VECTOR(int8_t, 8) g_736;
    int32_t g_752;
    volatile union U0 g_790;
    volatile uint64_t g_812;
    uint16_t g_821;
    volatile VECTOR(int32_t, 16) g_852;
    int32_t ** volatile g_866;
    volatile VECTOR(int32_t, 4) g_867;
    volatile VECTOR(int32_t, 2) g_868;
    int64_t *g_883;
    int64_t * volatile * volatile g_882;
    VECTOR(int16_t, 8) g_888;
    volatile VECTOR(uint32_t, 8) g_894;
    VECTOR(uint8_t, 16) g_896;
    VECTOR(uint8_t, 16) g_909;
    uint64_t ***g_910;
    volatile VECTOR(int8_t, 8) g_937;
    VECTOR(int16_t, 4) g_948;
    int32_t * volatile * volatile g_956;
    int32_t * volatile * volatile *g_955;
    VECTOR(uint32_t, 16) g_963;
    volatile uint8_t g_982[9][3][6];
    VECTOR(int8_t, 4) g_990;
    VECTOR(uint16_t, 16) g_994;
    VECTOR(int64_t, 4) g_1004;
    volatile VECTOR(int64_t, 8) g_1005;
    VECTOR(int64_t, 4) g_1006;
    VECTOR(int16_t, 16) g_1017;
    VECTOR(int16_t, 4) g_1038;
    volatile VECTOR(uint8_t, 8) g_1063;
    VECTOR(int64_t, 8) g_1064;
    volatile VECTOR(int64_t, 4) g_1065;
    VECTOR(int64_t, 8) g_1066;
    VECTOR(int8_t, 16) g_1070;
    uint32_t *g_1072;
    uint32_t **g_1071;
    VECTOR(uint32_t, 8) g_1084;
    VECTOR(uint8_t, 16) g_1141;
    volatile VECTOR(uint32_t, 8) g_1144;
    VECTOR(uint32_t, 8) g_1145;
    volatile VECTOR(uint32_t, 4) g_1147;
    volatile VECTOR(int32_t, 16) g_1170;
    VECTOR(uint32_t, 4) g_1178;
    union U0 g_1185;
    uint8_t **g_1211;
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
int32_t  func_1(struct S1 * p_1212);
int32_t * func_5(uint32_t  p_6, int8_t  p_7, struct S1 * p_1212);
int32_t  func_15(int16_t  p_16, uint32_t  p_17, int32_t * p_18, uint16_t  p_19, struct S1 * p_1212);
int32_t * func_22(int32_t * p_23, int32_t  p_24, uint64_t  p_25, int32_t * p_26, int32_t * p_27, struct S1 * p_1212);
int32_t * func_28(uint64_t  p_29, int32_t  p_30, int32_t * p_31, uint64_t  p_32, int64_t  p_33, struct S1 * p_1212);
int32_t * func_42(int32_t * p_43, int32_t * p_44, int32_t * p_45, int64_t  p_46, struct S1 * p_1212);
int32_t * func_48(int8_t  p_49, int32_t * p_50, int32_t * p_51, int32_t * p_52, struct S1 * p_1212);
int32_t * func_53(int64_t  p_54, int64_t  p_55, struct S1 * p_1212);
uint64_t  func_60(int32_t * p_61, int64_t  p_62, struct S1 * p_1212);
int32_t * func_78(int32_t * p_79, struct S1 * p_1212);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1212->g_2 p_1212->g_1038 p_1212->g_866 p_1212->g_80 p_1212->g_955 p_1212->g_956 p_1212->g_200 p_1212->g_1005 p_1212->g_888 p_1212->g_69 p_1212->g_1071 p_1212->g_1070 p_1212->g_371 p_1212->g_752 p_1212->g_1066 p_1212->g_10 p_1212->g_994 p_1212->g_438 p_1212->g_349 p_1212->g_251 p_1212->g_1178 p_1212->g_1185 p_1212->g_1017 p_1212->g_882 p_1212->g_883 p_1212->g_75 p_1212->g_314 p_1212->g_129
 * writes: p_1212->g_2 p_1212->g_200 p_1212->g_80 p_1212->g_69 p_1212->g_1071 p_1212->g_212 p_1212->g_156 p_1212->g_146 p_1212->g_883 p_1212->g_1070 p_1212->g_251 p_1212->g_994 p_1212->g_1064 p_1212->g_1211
 */
int32_t  func_1(struct S1 * p_1212)
{ /* block id: 4 */
    int8_t l_20[4] = {0x08L,0x08L,0x08L,0x08L};
    VECTOR(uint8_t, 4) l_21 = (VECTOR(uint8_t, 4))(0x06L, (VECTOR(uint8_t, 2))(0x06L, 255UL), 255UL);
    uint32_t l_927[6][10] = {{1UL,0x3541B27CL,0x95647069L,1UL,0xA9F0EB30L,1UL,0x95647069L,0x3541B27CL,1UL,4294967287UL},{1UL,0x3541B27CL,0x95647069L,1UL,0xA9F0EB30L,1UL,0x95647069L,0x3541B27CL,1UL,4294967287UL},{1UL,0x3541B27CL,0x95647069L,1UL,0xA9F0EB30L,1UL,0x95647069L,0x3541B27CL,1UL,4294967287UL},{1UL,0x3541B27CL,0x95647069L,1UL,0xA9F0EB30L,1UL,0x95647069L,0x3541B27CL,1UL,4294967287UL},{1UL,0x3541B27CL,0x95647069L,1UL,0xA9F0EB30L,1UL,0x95647069L,0x3541B27CL,1UL,4294967287UL},{1UL,0x3541B27CL,0x95647069L,1UL,0xA9F0EB30L,1UL,0x95647069L,0x3541B27CL,1UL,4294967287UL}};
    int32_t l_1032 = 0x777BBAAAL;
    uint8_t l_1102 = 0x85L;
    int64_t *l_1116[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1129[9] = {0x732C0AE3L,0L,0x732C0AE3L,0x732C0AE3L,0L,0x732C0AE3L,0x732C0AE3L,0L,0x732C0AE3L};
    uint32_t l_1130[10][1];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_1130[i][j] = 7UL;
    }
    for (p_1212->g_2 = 0; (p_1212->g_2 <= 6); p_1212->g_2 = safe_add_func_uint32_t_u_u(p_1212->g_2, 8))
    { /* block id: 7 */
        uint32_t l_14[3][8] = {{0x97E7C14AL,0x653B1DABL,0x97E7C14AL,0x97E7C14AL,0x653B1DABL,0x97E7C14AL,0x97E7C14AL,0x653B1DABL},{0x97E7C14AL,0x653B1DABL,0x97E7C14AL,0x97E7C14AL,0x653B1DABL,0x97E7C14AL,0x97E7C14AL,0x653B1DABL},{0x97E7C14AL,0x653B1DABL,0x97E7C14AL,0x97E7C14AL,0x653B1DABL,0x97E7C14AL,0x97E7C14AL,0x653B1DABL}};
        int32_t *l_34 = &p_1212->g_2;
        int8_t *l_1033 = (void*)0;
        int8_t *l_1034 = (void*)0;
        int8_t *l_1035 = &l_20[2];
        int i, j;
        (**p_1212->g_955) = func_5((safe_rshift_func_uint16_t_u_s(65529UL, 0)), ((*l_1035) = ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_1212->g_10.s415d7249)).s22)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0x72L, ((VECTOR(int8_t, 4))(p_1212->g_11.se23a)), ((&p_1212->g_2 == &p_1212->g_2) , (p_1212->g_990.w = (l_1032 = ((safe_mul_func_int16_t_s_s((((VECTOR(int16_t, 2))(0x57F1L, 0x2530L)).lo < ((void*)0 != &p_1212->g_2)), l_14[1][5])) == func_15(l_20[2], l_21.x, func_22(func_28(p_1212->g_2, p_1212->g_comm_values[p_1212->tid], l_34, p_1212->g_10.s3, (*l_34), p_1212), p_1212->g_2, p_1212->g_148.s2, (*p_1212->g_866), &p_1212->g_69, p_1212), l_927[1][0], p_1212))))), 0L, 0x1AL)))).s24))).yxxx)).w), p_1212);
    }
    for (p_1212->g_200 = 0; (p_1212->g_200 < 2); p_1212->g_200 = safe_add_func_int8_t_s_s(p_1212->g_200, 5))
    { /* block id: 467 */
        int32_t *l_1043 = &p_1212->g_69;
        uint8_t *l_1044 = (void*)0;
        uint8_t *l_1045[2][8][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_1048 = &l_1032;
        VECTOR(int16_t, 4) l_1057 = (VECTOR(int16_t, 4))(0x53A8L, (VECTOR(int16_t, 2))(0x53A8L, 0x2114L), 0x2114L);
        VECTOR(int16_t, 4) l_1058 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 1L), 1L);
        VECTOR(int64_t, 8) l_1067 = (VECTOR(int64_t, 8))(0x7894CDF46F181087L, (VECTOR(int64_t, 4))(0x7894CDF46F181087L, (VECTOR(int64_t, 2))(0x7894CDF46F181087L, (-8L)), (-8L)), (-8L), 0x7894CDF46F181087L, (-8L));
        uint32_t ***l_1073 = &p_1212->g_1071;
        VECTOR(uint16_t, 8) l_1074 = (VECTOR(uint16_t, 8))(0x324DL, (VECTOR(uint16_t, 4))(0x324DL, (VECTOR(uint16_t, 2))(0x324DL, 0x0625L), 0x0625L), 0x0625L, 0x324DL, 0x0625L);
        int8_t *l_1081 = &l_20[3];
        uint64_t ****l_1085 = &p_1212->g_910;
        int8_t *l_1086 = &l_20[2];
        int32_t l_1115 = 0x17003EE7L;
        int32_t l_1122 = 0x09FD38F6L;
        int32_t l_1127 = 8L;
        int32_t l_1128 = 1L;
        VECTOR(uint32_t, 16) l_1143 = (VECTOR(uint32_t, 16))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0xE1C30BBCL), 0xE1C30BBCL), 0xE1C30BBCL, 2UL, 0xE1C30BBCL, (VECTOR(uint32_t, 2))(2UL, 0xE1C30BBCL), (VECTOR(uint32_t, 2))(2UL, 0xE1C30BBCL), 2UL, 0xE1C30BBCL, 2UL, 0xE1C30BBCL);
        uint16_t l_1199 = 0xCC32L;
        int32_t l_1205 = 0x6624F678L;
        int i, j, k;
        (*l_1043) = (-1L);
        (*l_1048) ^= ((p_1212->g_1005.s1 && ((*l_1043) = FAKE_DIVERGE(p_1212->global_1_offset, get_global_id(1), 10))) & (safe_rshift_func_int8_t_s_u(p_1212->g_888.s6, 2)));
        if (((*l_1043) || ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((*l_1048) == (p_1212->g_212.y = ((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_1057.zywzxzzyzxzwwzzw)).s247b)).hi)).xxxy, ((VECTOR(int16_t, 4))(l_1058.ywwz))))).wxzxxwyx)).s5, (safe_lshift_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((~((VECTOR(uint8_t, 8))(0xBEL, 0x55L, ((VECTOR(uint8_t, 2))(p_1212->g_1063.s06)), ((VECTOR(uint8_t, 8))((18446744073709551615UL & (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_1212->g_1064.s1320301721630117)).sb396)).y & ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_1212->g_1065.wzzy)).xzyzywxw)).s63)).yyxy, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 8))(p_1212->g_1066.s75020707)).hi, ((VECTOR(int64_t, 4))(l_1067.s2020)))))))).x)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0UL, 255UL)))).yxxy)), 4UL, 0x2AL, 0x32L)).s4, 0x67L, 0UL, 247UL)).s3), ((*l_1086) |= (safe_div_func_uint32_t_u_u((((*l_1043) |= (((VECTOR(int8_t, 2))(0x27L, 0x52L)).even ^ ((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 2))(p_1212->g_1070.sf3)).xxyy))).w)) , (((*l_1073) = p_1212->g_1071) == (void*)0)), ((((VECTOR(uint16_t, 8))(l_1074.s56275101)).s1 , (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((p_1212->g_1070.sb && ((((((l_1081 = p_1212->g_371) == p_1212->g_371) != ((safe_rshift_func_uint16_t_u_s((((VECTOR(uint32_t, 8))(p_1212->g_1084.s37246337)).s3 || p_1212->g_752), 14)) > p_1212->g_1066.s1)) , &p_1212->g_910) == l_1085) != 0L)) != (-2L)), (*l_1048))), p_1212->g_752)), l_927[5][2]))) & 0x1C995991L)))))) , p_1212->g_10.sc) ^ 0UL) , 0x42L), l_1032)))) < 0x49A18EDF995A53F9L))) | (*l_1048)), 0x4C35L)), p_1212->g_994.s3)), GROUP_DIVERGE(2, 1))) < (-3L))))
        { /* block id: 476 */
            int32_t l_1087 = (-1L);
            (*l_1048) = l_1087;
        }
        else
        { /* block id: 478 */
            VECTOR(uint32_t, 16) l_1110 = (VECTOR(uint32_t, 16))(0x3D2A49B2L, (VECTOR(uint32_t, 4))(0x3D2A49B2L, (VECTOR(uint32_t, 2))(0x3D2A49B2L, 0x22B6C2F9L), 0x22B6C2F9L), 0x22B6C2F9L, 0x3D2A49B2L, 0x22B6C2F9L, (VECTOR(uint32_t, 2))(0x3D2A49B2L, 0x22B6C2F9L), (VECTOR(uint32_t, 2))(0x3D2A49B2L, 0x22B6C2F9L), 0x3D2A49B2L, 0x22B6C2F9L, 0x3D2A49B2L, 0x22B6C2F9L);
            uint8_t l_1114 = 0x0EL;
            int32_t l_1126[1];
            VECTOR(uint32_t, 8) l_1146 = (VECTOR(uint32_t, 8))(0x7A107C2DL, (VECTOR(uint32_t, 4))(0x7A107C2DL, (VECTOR(uint32_t, 2))(0x7A107C2DL, 0x9A4B982AL), 0x9A4B982AL), 0x9A4B982AL, 0x7A107C2DL, 0x9A4B982AL);
            uint16_t *l_1148 = (void*)0;
            uint16_t *l_1149 = (void*)0;
            uint16_t *l_1150 = (void*)0;
            uint16_t *l_1151 = (void*)0;
            uint16_t *l_1152 = (void*)0;
            uint16_t *l_1153 = (void*)0;
            uint16_t *l_1154[4][7] = {{&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821},{&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821},{&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821},{&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821,&p_1212->g_821}};
            int64_t l_1173 = 0x3116BE1A8BAE537CL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1126[i] = 0x595E8526L;
            for (p_1212->g_156 = 0; (p_1212->g_156 <= (-9)); --p_1212->g_156)
            { /* block id: 481 */
                int64_t l_1113[1];
                int32_t l_1118 = 9L;
                int i;
                for (i = 0; i < 1; i++)
                    l_1113[i] = 0x71F388121F976005L;
                for (p_1212->g_146 = 0; (p_1212->g_146 >= (-25)); p_1212->g_146 = safe_sub_func_uint8_t_u_u(p_1212->g_146, 9))
                { /* block id: 484 */
                    int64_t **l_1103[5][5] = {{&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883},{&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883},{&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883},{&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883},{&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883,&p_1212->g_883}};
                    uint16_t l_1111[2][4];
                    uint16_t *l_1112 = &l_1111[0][3];
                    int32_t l_1117 = 0x3341E519L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1111[i][j] = 0xBE43L;
                    }
                    (*l_1043) = (safe_mul_func_int16_t_s_s((l_20[2] || ((void*)0 != l_1043)), (safe_mul_func_int8_t_s_s((p_1212->g_1070.sf = (safe_mul_func_int16_t_s_s(((0x78FB5D0FL | l_20[2]) <= (((VECTOR(int8_t, 2))(0x7CL, 0x70L)).hi <= (((1UL > (safe_sub_func_uint8_t_u_u(l_1102, ((p_1212->g_883 = (void*)0) == ((((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(7UL, ((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((((*l_1112) = (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((l_1032 = l_1110.s7) != l_1111[0][3]), ((VECTOR(uint16_t, 2))(1UL)), 4UL)).w, p_1212->g_1066.s5))) != 2L) && l_1113[0]), 0L)), l_1114)) < l_1115), l_1111[0][3], ((VECTOR(uint8_t, 4))(0UL)), 0UL)), ((VECTOR(uint8_t, 8))(0x66L)), ((VECTOR(uint8_t, 8))(0x35L))))).s3 >= p_1212->g_438.s7) , l_1116[7]))))) < l_20[3]) > l_1117))), p_1212->g_438.s6))), 2UL))));
                    l_1118 &= l_1032;
                    if (l_1032)
                        break;
                }
                for (p_1212->g_251 = 0; (p_1212->g_251 <= (-4)); --p_1212->g_251)
                { /* block id: 495 */
                    int32_t *l_1121 = &l_1032;
                    int32_t *l_1123 = &l_1032;
                    int32_t *l_1124 = &l_1032;
                    int32_t *l_1125[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1125[i] = (void*)0;
                    --l_1130[3][0];
                    (*l_1121) = l_1113[0];
                    return p_1212->g_349.w;
                }
                if (l_1113[0])
                    break;
                return l_927[1][0];
            }
            if ((safe_mul_func_uint8_t_u_u(255UL, (!(l_1129[7] != (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(((p_1212->g_994.sc = (l_1126[0] ^= (safe_sub_func_int32_t_s_s(((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_1212->g_1141.sd1)))).hi < (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(l_1143.s6605d4d2)).s7307330707366012, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(4294967287UL, 0xE1681061L)).yxyyyyyxyxxyxyxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1212->g_1144.s7062)).even)).xyyxxxxxyxyyxyyx, ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(p_1212->g_1145.s24642762)).hi, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(l_1146.s76)).yyxx, (uint32_t)p_1212->g_909.sf))).zzwzxzyzwxxzwzzy)).sf86e)).wywxzywyzxxyyzzz)).even)).hi))).xzxzyzxwwzzwzyzw))).s4f)).xxyx, ((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x2704B5CDL, 4294967295UL)).yyyyxyxy)), ((VECTOR(uint32_t, 2))(4294967293UL, 3UL)).xxxyxxyx, ((VECTOR(uint32_t, 8))(p_1212->g_1147.zwyzzwzw))))).odd))).xyxxzwyyxxzxzwxw))).s0c)).yxxx)).yxxzwzwxwxwxzyyz)))).s5))) > (l_21.x != l_1110.sb)), l_20[3])))) , p_1212->g_888.s2), ((((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(((((p_1212->g_10.se , 0x68L) , 0x74DDAE2ABEC67FE8L) , 0xEF0F2E74C89836CEL) > l_1129[7]), p_1212->g_251)) & (-7L)), 7)) , l_927[1][0]) && 0x5AF54B5C94021744L) >= (*l_1043)))), p_1212->g_1038.w)))))))
            { /* block id: 505 */
                int32_t l_1161 = 1L;
                VECTOR(int16_t, 4) l_1167 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x0492L), 0x0492L);
                int64_t *l_1181 = &p_1212->g_156;
                uint16_t l_1196 = 0x4BF0L;
                int32_t *l_1198 = &l_1129[7];
                int i;
                for (l_1032 = 0; (l_1032 <= 21); ++l_1032)
                { /* block id: 508 */
                    uint8_t l_1164[2][2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1164[i][j] = 255UL;
                    }
                    if (l_1161)
                    { /* block id: 509 */
                        VECTOR(int32_t, 8) l_1171 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x03AEED77L), 0x03AEED77L), 0x03AEED77L, 1L, 0x03AEED77L);
                        uint64_t *l_1172[7][7][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        (*l_1043) = ((safe_rshift_func_uint16_t_u_s((((((l_1164[1][0] != ((l_1129[1] = (safe_add_func_uint16_t_u_u(l_927[1][0], (FAKE_DIVERGE(p_1212->group_1_offset, get_group_id(1), 10) , (~((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))((-9L), 0x7E51L)).yyxxyyyyxyyyxyyx, ((VECTOR(int16_t, 4))(l_1167.wyyy)).wxxxxzxyzyzyzyyz))).s4))))) <= (p_1212->g_1064.s7 = ((l_1173 |= (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(p_1212->g_1170.s37baa986469cbf9b)).s0, ((VECTOR(int32_t, 16))(l_1171.s2706272656215377)).sf))) != (safe_div_func_int64_t_s_s((((l_21.y && l_1167.z) < ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_1212->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1212->tid, 51))], l_1110.sb, 0xFDL, 0x37L)).even)).lo) , (safe_add_func_uint8_t_u_u(((~(((VECTOR(uint16_t, 4))(l_1164[1][0], 0x069CL, 0x8698L, 1UL)).y <= (((~((VECTOR(uint32_t, 8))(p_1212->g_1178.xxzyxyxx)).s1) , (safe_mod_func_uint64_t_u_u(((l_1171.s4 >= (!(l_1164[1][0] == l_1171.s0))) ^ l_1164[1][0]), (*l_1043)))) || (*l_1043)))) ^ 0x260AL), p_1212->g_1178.w))), 0x7891379603637901L)))))) && l_1173) , &p_1212->g_156) == l_1181) & l_1146.s3), l_1167.w)) , l_1114);
                    }
                    else
                    { /* block id: 514 */
                        uint32_t l_1182 = 0x5AF96DD0L;
                        int32_t *l_1197 = &l_1032;
                        int32_t *l_1200 = &l_1128;
                        l_1122 = ((*l_1043) = (l_1114 < (l_1182 && (*l_1048))));
                        if (l_1146.s0)
                            break;
                        (*l_1200) ^= (((safe_lshift_func_uint8_t_u_s((p_1212->g_1185 , (p_1212->g_1017.se || (safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((l_1167.w , (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u((l_1129[3] = (((safe_lshift_func_uint16_t_u_u((((l_1196 , func_42(l_1197, l_1198, &l_1126[0], ((l_1181 == (*p_1212->g_882)) || l_1164[1][0]), p_1212)) == (void*)0) != p_1212->g_314.s7), (*l_1043))) > (*l_1197)) , (*l_1043))), 5)) , p_1212->g_1017.s8), 10))), 3UL)), l_20[3])))), 2)) != l_1126[0]) & l_1199);
                    }
                    (*l_1198) &= (*l_1048);
                }
            }
            else
            { /* block id: 523 */
                int32_t *l_1201 = &l_1128;
                int32_t *l_1202 = (void*)0;
                int32_t *l_1203 = &l_1129[6];
                int32_t *l_1204[3];
                uint32_t l_1206 = 0x7F988542L;
                uint8_t **l_1210 = &p_1212->g_371;
                uint8_t ***l_1209[7];
                int i;
                for (i = 0; i < 3; i++)
                    l_1204[i] = &l_1129[7];
                for (i = 0; i < 7; i++)
                    l_1209[i] = &l_1210;
                l_1206++;
                p_1212->g_1211 = &p_1212->g_371;
                if ((*l_1043))
                    continue;
                (**p_1212->g_955) = func_78((*p_1212->g_866), p_1212);
            }
        }
    }
    return p_1212->g_1070.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1212->g_1038 p_1212->g_866 p_1212->g_80
 * writes: p_1212->g_200
 */
int32_t * func_5(uint32_t  p_6, int8_t  p_7, struct S1 * p_1212)
{ /* block id: 459 */
    uint32_t l_1039 = 5UL;
    int32_t *l_1040 = &p_1212->g_200;
    (*l_1040) = (safe_rshift_func_int16_t_s_s((l_1039 = ((VECTOR(int16_t, 4))(p_1212->g_1038.xzyw)).x), 9));
    return (*p_1212->g_866);
}


/* ------------------------------------------ */
/* 
 * reads : p_1212->g_146 p_1212->g_69 p_1212->g_752 p_1212->g_129 p_1212->g_937 p_1212->g_948 p_1212->g_2 p_1212->g_955 p_1212->g_339 p_1212->g_238 p_1212->g_301 p_1212->g_963 p_1212->g_438 p_1212->g_852 p_1212->g_314 p_1212->g_982 p_1212->g_990 p_1212->g_994 p_1212->g_156 p_1212->g_1004 p_1212->g_1005 p_1212->g_1006 p_1212->g_212 p_1212->g_1017 p_1212->l_comm_values p_1212->g_65 p_1212->g_47 p_1212->g_894 p_1212->g_821 p_1212->g_225
 * writes: p_1212->g_146 p_1212->g_752 p_1212->g_80 p_1212->g_438 p_1212->g_314 p_1212->g_69 p_1212->g_301 p_1212->g_990 p_1212->g_238
 */
int32_t  func_15(int16_t  p_16, uint32_t  p_17, int32_t * p_18, uint16_t  p_19, struct S1 * p_1212)
{ /* block id: 423 */
    int32_t *l_930 = (void*)0;
    int32_t *l_931[4];
    uint16_t l_932 = 0xC75FL;
    int32_t **l_954 = &l_930;
    int32_t ***l_953 = &l_954;
    int8_t l_959[3];
    VECTOR(uint32_t, 16) l_991 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0UL), 0UL), 0UL, 8UL, 0UL, (VECTOR(uint32_t, 2))(8UL, 0UL), (VECTOR(uint32_t, 2))(8UL, 0UL), 8UL, 0UL, 8UL, 0UL);
    VECTOR(int8_t, 8) l_1012 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x16L), 0x16L), 0x16L, (-3L), 0x16L);
    uint32_t l_1015 = 0x2325499CL;
    int i;
    for (i = 0; i < 4; i++)
        l_931[i] = &p_1212->g_200;
    for (i = 0; i < 3; i++)
        l_959[i] = 0x0AL;
    for (p_1212->g_146 = 0; (p_1212->g_146 < 15); p_1212->g_146++)
    { /* block id: 426 */
        return (*p_18);
    }
    --l_932;
    for (p_1212->g_752 = 0; (p_1212->g_752 >= 8); p_1212->g_752 = safe_add_func_int32_t_s_s(p_1212->g_752, 3))
    { /* block id: 432 */
        int32_t **l_943 = (void*)0;
        int32_t ***l_942 = &l_943;
        int32_t l_962 = 0L;
        VECTOR(int64_t, 4) l_1007 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-10L)), (-10L));
        uint32_t *l_1016 = &p_1212->g_301[0][4][1];
        VECTOR(int16_t, 8) l_1026 = (VECTOR(int16_t, 8))(0x7A73L, (VECTOR(int16_t, 4))(0x7A73L, (VECTOR(int16_t, 2))(0x7A73L, 0x2B85L), 0x2B85L), 0x2B85L, 0x7A73L, 0x2B85L);
        int32_t l_1029[1][2][9] = {{{8L,(-1L),(-1L),8L,8L,(-1L),(-1L),8L,8L},{8L,(-1L),(-1L),8L,8L,(-1L),(-1L),8L,8L}}};
        int8_t *l_1030[4] = {&l_959[0],&l_959[0],&l_959[0],&l_959[0]};
        uint64_t l_1031 = 18446744073709551613UL;
        int i, j, k;
        (*p_1212->g_129) = (void*)0;
        if (((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1212->g_937.s6034100411233700)))).sd9, ((VECTOR(int8_t, 2))(0x0DL, 1L))))).yxxx)).y < 0L) >= (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((&p_1212->g_80 == ((*l_942) = &p_1212->g_293)) >= p_17) , ((&p_1212->g_80 == (((safe_div_func_int16_t_s_s((((safe_div_func_int32_t_s_s(((~((0x73263643L && (p_17 <= (((VECTOR(int16_t, 2))(p_1212->g_948.xw)).even != (p_19 = (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((((((p_1212->g_2 , l_953) != p_1212->g_955) , (-3L)) < 0x6FB7L) && (*p_18)), GROUP_DIVERGE(0, 1))), p_1212->g_339.x)))))) & 7UL)) || FAKE_DIVERGE(p_1212->local_2_offset, get_local_id(2), 10)), p_16)) > (*p_18)) < p_1212->g_238.w), p_1212->g_146)) && p_1212->g_301[0][4][1]) , (void*)0)) > p_17)), (*p_18))), 5L))))
        { /* block id: 436 */
            int64_t *l_960 = (void*)0;
            int64_t *l_961[8][3] = {{&p_1212->g_251,&p_1212->g_251,&p_1212->g_251},{&p_1212->g_251,&p_1212->g_251,&p_1212->g_251},{&p_1212->g_251,&p_1212->g_251,&p_1212->g_251},{&p_1212->g_251,&p_1212->g_251,&p_1212->g_251},{&p_1212->g_251,&p_1212->g_251,&p_1212->g_251},{&p_1212->g_251,&p_1212->g_251,&p_1212->g_251},{&p_1212->g_251,&p_1212->g_251,&p_1212->g_251},{&p_1212->g_251,&p_1212->g_251,&p_1212->g_251}};
            uint64_t **l_964 = &p_1212->g_171;
            int32_t l_965 = (-5L);
            VECTOR(uint16_t, 16) l_968 = (VECTOR(uint16_t, 16))(0xE5C2L, (VECTOR(uint16_t, 4))(0xE5C2L, (VECTOR(uint16_t, 2))(0xE5C2L, 0xE85DL), 0xE85DL), 0xE85DL, 0xE5C2L, 0xE85DL, (VECTOR(uint16_t, 2))(0xE5C2L, 0xE85DL), (VECTOR(uint16_t, 2))(0xE5C2L, 0xE85DL), 0xE5C2L, 0xE85DL, 0xE5C2L, 0xE85DL);
            uint64_t *l_969 = (void*)0;
            uint64_t *l_970 = (void*)0;
            uint64_t *l_971 = (void*)0;
            int16_t *l_972 = &p_1212->g_146;
            int16_t *l_973 = (void*)0;
            int16_t *l_974 = (void*)0;
            int16_t *l_975 = (void*)0;
            int16_t *l_976 = (void*)0;
            int16_t *l_977[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_977[i] = (void*)0;
            (*p_18) = ((-3L) >= ((p_16 > (p_1212->g_314.s4 = ((safe_mod_func_int8_t_s_s((p_19 , (((l_962 = l_959[2]) , ((VECTOR(uint32_t, 4))(p_1212->g_963.s242c)).w) , ((l_964 == &p_1212->g_171) < (((l_965 , p_19) > ((GROUP_DIVERGE(0, 1) < (((VECTOR(uint16_t, 2))(l_968.sc5)).hi | ((((*l_972) = ((((p_1212->g_438.s3 &= 0x1FD6C71C7FA93E7AL) >= l_965) > GROUP_DIVERGE(0, 1)) || l_968.sb)) ^ 5L) != p_1212->g_852.se))) && l_968.s9)) >= 0xC2L)))), p_1212->g_2)) == p_1212->g_314.s0))) == (*p_18)));
        }
        else
        { /* block id: 442 */
            uint16_t l_978 = 0x537DL;
            int32_t l_979 = 0x688D573EL;
            uint64_t *l_989 = (void*)0;
            if (l_978)
                break;
            l_979 &= 0L;
            atomic_sub(&p_1212->l_atomic_reduction[0], ((((p_1212->g_982[5][0][0] == (!(safe_div_func_uint64_t_u_u(p_19, (3UL || (safe_div_func_uint16_t_u_u(((*p_18) || (safe_add_func_uint8_t_u_u(((void*)0 == l_989), ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1212->g_990.zx)).yyyy))))).w))), l_991.s7))))))) == ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1212->g_994.s0fec)).wyxyzwxzwwzyxwxy)).sa, 2UL)) != (*p_18))) | (*p_18)) > p_1212->g_156));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1212->v_collective += p_1212->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        l_962 |= (p_1212->g_238.y &= ((safe_unary_minus_func_int8_t_s(((*p_18) > (l_1031 = (safe_mod_func_uint32_t_u_u(((((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((((VECTOR(int8_t, 16))((safe_div_func_uint32_t_u_u((p_16 >= ((((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(p_1212->g_1004.zzwx)), ((VECTOR(int64_t, 2))(p_1212->g_1005.s16)).yyyx))).even, ((VECTOR(int64_t, 4))(p_1212->g_1006.zzxy)).odd, ((VECTOR(int64_t, 2))(l_1007.xw))))).xxxyyyyy)).s3217215266067535, ((VECTOR(int64_t, 2))(3L, 0x4B3B1B7D483662B8L)).xxyxyxyyxxyxyxxx))).s4 == p_16) <= (p_1212->g_990.z = ((safe_add_func_int64_t_s_s(((((safe_sub_func_uint32_t_u_u((((((VECTOR(int8_t, 4))(l_1012.s5174)).x >= ((((*l_1016) = (p_19 || (l_1015 = (p_1212->g_212.x <= p_16)))) , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_1212->g_1017.s405a67e59d357f10)))).sc) | (((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((~((~0xEFL) | (1L || ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(l_1026.s57)).yyxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x60EAL, 0x5238L)), (-1L), 6L)), (safe_mul_func_uint16_t_u_u(l_1026.s2, p_19)), ((VECTOR(int16_t, 2))(0x2B4BL)), 1L)).hi))).y))), 0x1F9D8A3CL)), p_19)), 2)), 11)) < p_1212->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1212->tid, 51))]) > 0x3208432FL))) >= l_1029[0][0][2]) , 8UL), p_1212->g_65.s5)) <= 0L) >= 65531UL) , p_1212->g_339.y), p_16)) < 0x7FD1L)))), p_1212->g_47.s7)), p_1212->g_894.s7, 6L, 0x53L, ((VECTOR(int8_t, 2))(0x4AL)), ((VECTOR(int8_t, 8))(0x04L)), 0x21L, 0L)).s0 >= p_1212->g_994.s0), 5)) , p_19), p_1212->g_821)) , p_1212->g_821) && p_16) ^ p_1212->g_225[1]), (*p_18))))))) ^ 0x2890DACBL));
    }
    (*p_18) = (p_19 && p_16);
    return (*p_18);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_22(int32_t * p_23, int32_t  p_24, uint64_t  p_25, int32_t * p_26, int32_t * p_27, struct S1 * p_1212)
{ /* block id: 420 */
    int32_t *l_915 = &p_1212->g_200;
    int32_t *l_916 = &p_1212->g_200;
    int32_t *l_917 = &p_1212->g_752;
    int32_t l_918 = (-3L);
    int32_t *l_919 = &p_1212->g_200;
    int32_t *l_920 = &l_918;
    int32_t *l_921 = &p_1212->g_752;
    int32_t *l_922[10];
    int8_t l_923 = 0x7AL;
    uint64_t l_924 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 10; i++)
        l_922[i] = &p_1212->g_69;
    l_924--;
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1212->g_146
 * writes: p_1212->g_146
 */
int32_t * func_28(uint64_t  p_29, int32_t  p_30, int32_t * p_31, uint64_t  p_32, int64_t  p_33, struct S1 * p_1212)
{ /* block id: 8 */
    int32_t *l_39 = &p_1212->g_2;
    VECTOR(uint16_t, 16) l_143 = (VECTOR(uint16_t, 16))(0x1952L, (VECTOR(uint16_t, 4))(0x1952L, (VECTOR(uint16_t, 2))(0x1952L, 0x3B08L), 0x3B08L), 0x3B08L, 0x1952L, 0x3B08L, (VECTOR(uint16_t, 2))(0x1952L, 0x3B08L), (VECTOR(uint16_t, 2))(0x1952L, 0x3B08L), 0x1952L, 0x3B08L, 0x1952L, 0x3B08L);
    VECTOR(int32_t, 4) l_744 = (VECTOR(int32_t, 4))(0x0A6C95DBL, (VECTOR(int32_t, 2))(0x0A6C95DBL, 0x6C2851EEL), 0x6C2851EEL);
    int32_t l_745 = (-5L);
    int64_t l_746 = 0x52134137FA1C7D16L;
    uint64_t l_747 = 18446744073709551611UL;
    VECTOR(int64_t, 8) l_768 = (VECTOR(int64_t, 8))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 1L), 1L), 1L, 2L, 1L);
    VECTOR(uint32_t, 16) l_787 = (VECTOR(uint32_t, 16))(0x6A20B2A8L, (VECTOR(uint32_t, 4))(0x6A20B2A8L, (VECTOR(uint32_t, 2))(0x6A20B2A8L, 4UL), 4UL), 4UL, 0x6A20B2A8L, 4UL, (VECTOR(uint32_t, 2))(0x6A20B2A8L, 4UL), (VECTOR(uint32_t, 2))(0x6A20B2A8L, 4UL), 0x6A20B2A8L, 4UL, 0x6A20B2A8L, 4UL);
    VECTOR(uint8_t, 8) l_803 = (VECTOR(uint8_t, 8))(0x72L, (VECTOR(uint8_t, 4))(0x72L, (VECTOR(uint8_t, 2))(0x72L, 0x9FL), 0x9FL), 0x9FL, 0x72L, 0x9FL);
    uint16_t l_813 = 0x4515L;
    int8_t l_842 = 0x5EL;
    uint8_t l_884 = 0x64L;
    VECTOR(uint32_t, 2) l_893 = (VECTOR(uint32_t, 2))(0xF14013BBL, 0UL);
    int8_t l_897 = 0x48L;
    VECTOR(int32_t, 8) l_902 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x44B5916FL), 0x44B5916FL), 0x44B5916FL, 0L, 0x44B5916FL);
    int32_t *l_914[5][1][8] = {{{&p_1212->g_752,&p_1212->g_200,&p_1212->g_200,&p_1212->g_200,&p_1212->g_752,&p_1212->g_752,&p_1212->g_200,&p_1212->g_200}},{{&p_1212->g_752,&p_1212->g_200,&p_1212->g_200,&p_1212->g_200,&p_1212->g_752,&p_1212->g_752,&p_1212->g_200,&p_1212->g_200}},{{&p_1212->g_752,&p_1212->g_200,&p_1212->g_200,&p_1212->g_200,&p_1212->g_752,&p_1212->g_752,&p_1212->g_200,&p_1212->g_200}},{{&p_1212->g_752,&p_1212->g_200,&p_1212->g_200,&p_1212->g_200,&p_1212->g_752,&p_1212->g_752,&p_1212->g_200,&p_1212->g_200}},{{&p_1212->g_752,&p_1212->g_200,&p_1212->g_200,&p_1212->g_200,&p_1212->g_752,&p_1212->g_752,&p_1212->g_200,&p_1212->g_200}}};
    int i, j, k;
    for (p_29 = (-18); (p_29 == 42); p_29 = safe_add_func_int16_t_s_s(p_29, 3))
    { /* block id: 11 */
        uint32_t l_144 = 0xD0BDB4F0L;
        int16_t *l_145 = &p_1212->g_146;
        uint64_t *l_149 = (void*)0;
        uint64_t *l_150 = (void*)0;
        uint64_t *l_151 = (void*)0;
        uint64_t *l_152 = (void*)0;
        uint64_t *l_153 = (void*)0;
        int64_t *l_154 = (void*)0;
        int64_t *l_155 = &p_1212->g_156;
        int32_t **l_711[5];
        int32_t *l_712 = &p_1212->g_69;
        int16_t l_733 = 0x66AFL;
        int16_t l_743 = 0x7D0AL;
        int64_t l_817 = (-5L);
        int i;
        for (i = 0; i < 5; i++)
            l_711[i] = &p_1212->g_293;
        (1 + 1);
    }
    for (p_1212->g_146 = 0; (p_1212->g_146 == (-17)); --p_1212->g_146)
    { /* block id: 392 */
        VECTOR(uint32_t, 4) l_834 = (VECTOR(uint32_t, 4))(0x1811B1F8L, (VECTOR(uint32_t, 2))(0x1811B1F8L, 0x729FB320L), 0x729FB320L);
        uint8_t *l_835 = (void*)0;
        uint8_t *l_836[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_837[3];
        int16_t *l_838[3];
        int32_t l_839 = 0L;
        int32_t l_849 = 1L;
        VECTOR(uint8_t, 16) l_858 = (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0xF5L), 0xF5L), 0xF5L, 251UL, 0xF5L, (VECTOR(uint8_t, 2))(251UL, 0xF5L), (VECTOR(uint8_t, 2))(251UL, 0xF5L), 251UL, 0xF5L, 251UL, 0xF5L);
        uint64_t l_872 = 18446744073709551612UL;
        uint8_t l_885 = 0xACL;
        VECTOR(int32_t, 2) l_898 = (VECTOR(int32_t, 2))(0x4A8FF920L, 6L);
        VECTOR(int32_t, 8) l_904 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
        uint64_t **l_913 = &p_1212->g_171;
        uint64_t ***l_912[8][2][3] = {{{&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913}},{{&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913}},{{&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913}},{{&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913}},{{&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913}},{{&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913}},{{&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913}},{{&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_837[i] = 1L;
        for (i = 0; i < 3; i++)
            l_838[i] = (void*)0;
        (1 + 1);
    }
    return l_914[2][0][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_1212->g_2 p_1212->g_75 p_1212->g_69
 * writes:
 */
int32_t * func_42(int32_t * p_43, int32_t * p_44, int32_t * p_45, int64_t  p_46, struct S1 * p_1212)
{ /* block id: 324 */
    int8_t *l_699 = (void*)0;
    uint16_t l_700 = 0xEB3EL;
    int8_t *l_701 = (void*)0;
    int8_t *l_702 = (void*)0;
    int32_t l_703 = 0x132B3E92L;
    int32_t l_710[4] = {0L,0L,0L,0L};
    int i;
    l_710[3] |= (p_46 < (safe_rshift_func_int16_t_s_u((p_46 && ((VECTOR(uint8_t, 4))((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((void*)0 == l_699), (l_703 = ((*p_43) != l_700)))), 3)), 1UL, 250UL, 249UL)).z), ((((*p_1212->g_75) & (safe_lshift_func_uint16_t_u_u(((*p_43) & (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) <= (p_46 & l_700)), l_700)) , 0L), p_46))), GROUP_DIVERGE(0, 1)))) , (*p_43)) > l_700))));
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1212->g_301 p_1212->g_308 p_1212->g_69 p_1212->g_251 p_1212->g_225 p_1212->g_238 p_1212->g_314 p_1212->g_146 p_1212->g_129 p_1212->g_2 p_1212->g_339 p_1212->g_65 p_1212->g_371 p_1212->g_comm_values p_1212->g_148 p_1212->g_10 p_1212->g_213 p_1212->g_414 p_1212->g_417 p_1212->g_311 p_1212->g_392 p_1212->g_438 p_1212->g_263
 * writes: p_1212->g_301 p_1212->g_251 p_1212->g_311 p_1212->g_47 p_1212->g_80 p_1212->g_339 p_1212->g_69 p_1212->g_10 p_1212->g_392 p_1212->g_414
 */
int32_t * func_48(int8_t  p_49, int32_t * p_50, int32_t * p_51, int32_t * p_52, struct S1 * p_1212)
{ /* block id: 136 */
    int32_t *l_294 = (void*)0;
    int32_t *l_295 = &p_1212->g_69;
    int32_t *l_296[7] = {&p_1212->g_2,&p_1212->g_200,&p_1212->g_2,&p_1212->g_2,&p_1212->g_200,&p_1212->g_2,&p_1212->g_2};
    int32_t l_297 = (-9L);
    int16_t l_298 = (-1L);
    int8_t l_299 = (-7L);
    int32_t l_300 = 1L;
    VECTOR(uint32_t, 2) l_306 = (VECTOR(uint32_t, 2))(0xD41BE167L, 0x6A4613B5L);
    VECTOR(uint32_t, 2) l_307 = (VECTOR(uint32_t, 2))(4294967291UL, 4294967295UL);
    int64_t *l_309 = &p_1212->g_251;
    uint64_t **l_310[2];
    uint32_t *l_312 = (void*)0;
    uint32_t *l_313[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int8_t, 2) l_315 = (VECTOR(int8_t, 2))((-1L), 0x16L);
    VECTOR(int8_t, 16) l_316 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
    uint16_t l_319 = 0x88E4L;
    int32_t l_359 = (-1L);
    VECTOR(uint64_t, 2) l_365 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x79FCC35F0D1B4B37L);
    uint32_t l_394 = 0x7F58D0D9L;
    VECTOR(uint16_t, 16) l_450 = (VECTOR(uint16_t, 16))(0xD10DL, (VECTOR(uint16_t, 4))(0xD10DL, (VECTOR(uint16_t, 2))(0xD10DL, 1UL), 1UL), 1UL, 0xD10DL, 1UL, (VECTOR(uint16_t, 2))(0xD10DL, 1UL), (VECTOR(uint16_t, 2))(0xD10DL, 1UL), 0xD10DL, 1UL, 0xD10DL, 1UL);
    uint64_t l_451 = 0x3F9136E0595AAC9BL;
    int i;
    for (i = 0; i < 2; i++)
        l_310[i] = &p_1212->g_171;
    p_1212->g_301[0][4][1]++;
    if (((safe_mul_func_uint8_t_u_u((((((((*l_309) |= (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(l_306.xyxyxyyy)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_307.yyyyyyyxyxxyxyyx)))).hi, ((VECTOR(uint32_t, 2))(p_1212->g_308.s25)).yyyyyxyx))).s16)).odd && (*l_295))) , (p_1212->g_225[1] , l_309)) == (p_1212->g_311 = l_309)) != ((p_1212->g_47.s2 = ((void*)0 == l_310[1])) > p_1212->g_238.z)) , p_49) ^ ((l_319 ^= ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(p_1212->g_314.s12452623)).odd, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(7L, 0x65L)), ((VECTOR(int8_t, 2))(l_315.xy))))), (-1L), 0x07L, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(l_316.se231)).hi, ((VECTOR(int8_t, 16))((safe_mul_func_uint8_t_u_u(p_1212->g_146, 251UL)), ((VECTOR(int8_t, 4))((-6L))), 0x49L, p_49, 0x2DL, 0x4CL, 0x0DL, ((VECTOR(int8_t, 4))(1L)), 7L, 0x0EL)).s1d, ((VECTOR(int8_t, 2))(0x07L))))).odd, (-1L), 0L, (-1L)))))), ((VECTOR(int8_t, 8))((-9L)))))).even, ((VECTOR(uint8_t, 4))(251UL)))))))))).yyywwywwywzzwxyw))).lo)).odd, ((VECTOR(uint16_t, 4))(0x1E2DL))))), 0x048DL, 65532UL, 0UL)))).s1) >= p_1212->g_225[1])), p_49)) != p_1212->g_301[0][4][1]))
    { /* block id: 142 */
        int32_t **l_320[10][1];
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
                l_320[i][j] = &l_296[5];
        }
        (*p_1212->g_129) = (p_50 = p_50);
    }
    else
    { /* block id: 145 */
        uint32_t l_321 = 1UL;
        int32_t l_328 = (-1L);
        int32_t l_329 = 0L;
        int32_t l_330[2];
        uint32_t l_332 = 0x47E50A9CL;
        int64_t *l_351[2];
        uint64_t **l_358 = &p_1212->g_311;
        uint8_t *l_372 = (void*)0;
        int8_t *l_390[1];
        uint32_t *l_391 = &p_1212->g_392;
        int64_t **l_393 = &l_351[1];
        uint8_t *l_395 = (void*)0;
        uint64_t l_446 = 0xE38690E2F1F0448AL;
        VECTOR(int8_t, 4) l_447 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L);
        int i;
        for (i = 0; i < 2; i++)
            l_330[i] = (-1L);
        for (i = 0; i < 2; i++)
            l_351[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_390[i] = (void*)0;
        --l_321;
        for (l_297 = 5; (l_297 >= 10); l_297 = safe_add_func_int32_t_s_s(l_297, 3))
        { /* block id: 149 */
            int16_t l_326 = (-1L);
            int32_t l_327 = 0x1E84C185L;
            int32_t l_331 = 1L;
            uint8_t *l_344 = (void*)0;
            uint8_t *l_345 = (void*)0;
            uint8_t *l_346 = (void*)0;
            int8_t *l_352 = (void*)0;
            int8_t *l_353 = (void*)0;
            int8_t *l_354 = (void*)0;
            int8_t *l_355 = (void*)0;
            int8_t *l_356[9][9] = {{(void*)0,&l_299,(void*)0,&l_299,&l_299,&l_299,(void*)0,&l_299,(void*)0},{(void*)0,&l_299,(void*)0,&l_299,&l_299,&l_299,(void*)0,&l_299,(void*)0},{(void*)0,&l_299,(void*)0,&l_299,&l_299,&l_299,(void*)0,&l_299,(void*)0},{(void*)0,&l_299,(void*)0,&l_299,&l_299,&l_299,(void*)0,&l_299,(void*)0},{(void*)0,&l_299,(void*)0,&l_299,&l_299,&l_299,(void*)0,&l_299,(void*)0},{(void*)0,&l_299,(void*)0,&l_299,&l_299,&l_299,(void*)0,&l_299,(void*)0},{(void*)0,&l_299,(void*)0,&l_299,&l_299,&l_299,(void*)0,&l_299,(void*)0},{(void*)0,&l_299,(void*)0,&l_299,&l_299,&l_299,(void*)0,&l_299,(void*)0},{(void*)0,&l_299,(void*)0,&l_299,&l_299,&l_299,(void*)0,&l_299,(void*)0}};
            uint64_t ***l_357 = &l_310[0];
            uint8_t l_364 = 247UL;
            int16_t *l_370 = &l_326;
            int i, j;
            l_332--;
            (*l_295) &= (p_1212->g_314.s7 >= ((*p_52) <= ((((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_1212->g_339.yxyxxxxx)).s1, p_49)) || (safe_lshift_func_uint16_t_u_s(p_49, (safe_mul_func_uint8_t_u_u((p_1212->g_339.x--), (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_1212->g_349.wzzxzzzx)).s3532612075615520)))).sb | (((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(((safe_unary_minus_func_int16_t_s(((~(((l_330[0] ^= (l_351[1] == (void*)0)) , l_309) != &p_1212->g_251)) & (((*l_357) = &p_1212->g_311) == l_358)))) >= p_49), ((VECTOR(int16_t, 2))(0x2C8DL)), p_49, (-5L), 3L, ((VECTOR(int16_t, 4))(1L)), p_49, (-1L), 0x46F0L, ((VECTOR(int16_t, 2))(0x3C2AL)), (-4L))), ((VECTOR(int16_t, 16))(0x6CE8L))))).s8 >= GROUP_DIVERGE(1, 1)))))))), 4)) < 0L) & 0UL) < l_359)));
            l_329 = ((safe_sub_func_uint32_t_u_u(p_1212->g_339.y, (safe_mod_func_uint8_t_u_u((p_49 , p_1212->g_314.s0), p_49)))) & (l_328 ^ (l_364 | (p_49 == (p_1212->g_65.s3 >= ((*l_370) = ((((VECTOR(uint64_t, 2))(l_365.xy)).lo , (p_1212->g_251 = (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0UL, p_1212->g_238.z)), 0x30L)))) & p_49)))))));
        }
        if (((l_372 = p_1212->g_371) == (l_395 = (((p_1212->g_comm_values[p_1212->tid] >= ((*l_295) = (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((&p_1212->g_251 == ((*l_393) = ((safe_div_func_int32_t_s_s((*p_52), (p_1212->g_238.w , (~(((GROUP_DIVERGE(1, 1) != (safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(0x5A86136CL, ((((((((((safe_lshift_func_uint16_t_u_s((((GROUP_DIVERGE(1, 1) == (*p_52)) , ((safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x0AL, 0x62L)).yyyyxyyxxxxyxyxx)).sb)) , (((*l_391) = (safe_mod_func_uint64_t_u_u((0x09CD1DF2L <= (safe_mul_func_int8_t_s_s((p_1212->g_10.s2 &= p_1212->g_148.s7), l_321))), p_49))) , 0x6482F5D2L))) , l_329), p_49)) == p_49) && p_49) , (void*)0) != p_51) , p_49) >= 0xAEL) != l_330[0]) > 0xDDFC2707C905D4C1L) < 5L))), p_49))) <= p_1212->g_213.sa) >= 0x0CL))))) , &p_1212->g_251))) , 0x40B4E46CL) <= 0x39CA75A1L) == p_1212->g_comm_values[p_1212->tid]), 13)), p_49)))) || l_394) , l_390[0]))))
        { /* block id: 165 */
            uint8_t l_435 = 0xCFL;
            for (l_359 = 0; (l_359 != 14); l_359 = safe_add_func_uint64_t_u_u(l_359, 3))
            { /* block id: 168 */
                int8_t *l_410 = (void*)0;
                int32_t *l_413[10];
                int32_t l_420[7][6][4] = {{{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L}},{{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L}},{{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L}},{{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L}},{{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L}},{{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L}},{{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L},{0x0370713FL,(-4L),(-1L),0L}}};
                uint16_t *l_445 = &l_319;
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_413[i] = &p_1212->g_414;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1212->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 51)), permutations[(safe_mod_func_uint32_t_u_u((((!(safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((p_1212->g_414 |= ((safe_rshift_func_uint16_t_u_s((GROUP_DIVERGE(1, 1) >= ((void*)0 == &l_351[0])), (safe_mod_func_uint32_t_u_u(((p_1212->g_371 == (l_410 = l_390[0])) != 0x88L), (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 0x2BL)))))) >= (+0x4302L))) , (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1212->group_1_offset, get_group_id(1), 10), ((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_1212->g_417.xx)).yxyxyyyxxyyxyxyy)).s4cee))).x))) , ((*p_1212->g_311) | ((safe_mul_func_uint16_t_u_u((&p_1212->g_251 == (void*)0), p_49)) < l_420[4][2][1]))), p_49)), l_420[4][2][1])), p_1212->g_392)), p_1212->g_301[0][4][1]))) | p_49) > l_420[3][4][1]), 10))][(safe_mod_func_uint32_t_u_u(p_1212->tid, 51))]));
                if ((atomic_inc(&p_1212->g_atomic_input[50 * get_linear_group_id() + 27]) == 3))
                { /* block id: 175 */
                    int32_t l_421 = 0x52F216ABL;
                    int16_t l_422 = 0L;
                    int32_t l_423 = 0x7CAB2DAFL;
                    int32_t l_424 = 0x5FE4CB58L;
                    int16_t l_425[6][2][7] = {{{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L},{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L}},{{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L},{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L}},{{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L},{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L}},{{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L},{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L}},{{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L},{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L}},{{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L},{9L,0x5D32L,(-1L),0x5D32L,9L,9L,0x5D32L}}};
                    int32_t l_426 = 1L;
                    int32_t l_427 = (-7L);
                    uint8_t l_428[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_428[i] = 255UL;
                    l_428[1]++;
                    unsigned int result = 0;
                    result += l_421;
                    result += l_422;
                    result += l_423;
                    result += l_424;
                    int l_425_i0, l_425_i1, l_425_i2;
                    for (l_425_i0 = 0; l_425_i0 < 6; l_425_i0++) {
                        for (l_425_i1 = 0; l_425_i1 < 2; l_425_i1++) {
                            for (l_425_i2 = 0; l_425_i2 < 7; l_425_i2++) {
                                result += l_425[l_425_i0][l_425_i1][l_425_i2];
                            }
                        }
                    }
                    result += l_426;
                    result += l_427;
                    int l_428_i0;
                    for (l_428_i0 = 0; l_428_i0 < 3; l_428_i0++) {
                        result += l_428[l_428_i0];
                    }
                    atomic_add(&p_1212->g_special_values[50 * get_linear_group_id() + 27], result);
                }
                else
                { /* block id: 177 */
                    (1 + 1);
                }
                (*l_295) = ((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(9UL, (safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((p_49 <= l_435), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((*l_445) ^= (safe_add_func_uint64_t_u_u((((VECTOR(uint64_t, 8))(((0x2558B11A5C24F940L | ((VECTOR(uint64_t, 8))(p_1212->g_438.s27126510)).s7) & ((safe_add_func_int16_t_s_s((p_1212->g_263 , (safe_mul_func_uint8_t_u_u(l_435, ((safe_lshift_func_uint16_t_u_u(p_49, 0)) , p_1212->g_314.s7)))), 0L)) & (p_49 <= l_435))), ((VECTOR(uint64_t, 2))(0UL)), 0xDCA055C1D941AF06L, ((VECTOR(uint64_t, 2))(0xE52B521CD879DCA4L)), 18446744073709551608UL, 0xC9791EA16CB6891EL)).s5 == p_49), FAKE_DIVERGE(p_1212->global_1_offset, get_global_id(1), 10)))), 0xE610L, 5UL, 0xD62BL)).lo, ((VECTOR(uint16_t, 2))(0x4BFBL))))).xxxy, (uint16_t)p_1212->g_392))).lo))), 0xDE4AL, 1UL, 0xC250L, 0x2C4CL, ((VECTOR(uint16_t, 2))(0x93D2L)), ((VECTOR(uint16_t, 4))(0xD791L)), FAKE_DIVERGE(p_1212->group_0_offset, get_group_id(0), 10), ((VECTOR(uint16_t, 2))(0x11E2L)), 0UL)).s776f)).x)), p_49)), FAKE_DIVERGE(p_1212->local_2_offset, get_local_id(2), 10), ((VECTOR(uint64_t, 4))(0x0E3A60E65FA4F42AL)), 0xEDD01B86F2E29E07L)), p_49, (*p_1212->g_311), 0x681D735536F551B2L, 0xE8EA5440B150522DL, (*p_1212->g_311), ((VECTOR(uint64_t, 2))(0x07C6EDD253C3C391L)), 0xB27DDE4A3F8B84F6L)).s6 , l_295) == &p_1212->g_392) & 253UL) , l_329);
            }
        }
        else
        { /* block id: 183 */
            (*l_295) = (l_446 & ((VECTOR(int8_t, 2))(l_447.wx)).hi);
            l_330[1] = 0x6882C62CL;
        }
        (*l_295) |= 0x1CD1CF68L;
    }
    l_451 &= (((*p_1212->g_311) = (safe_div_func_uint16_t_u_u(0UL, (((void*)0 == &l_298) , ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_450.s0e73a5d8b22d23c2)).s2d)).xxxyxxxxxxyyyxxy)).s6)))) , (*l_295));
    if ((atomic_inc(&p_1212->l_atomic_input[23]) == 7))
    { /* block id: 192 */
        VECTOR(uint64_t, 4) l_452 = (VECTOR(uint64_t, 4))(0xC1E4A8EBB5BF9953L, (VECTOR(uint64_t, 2))(0xC1E4A8EBB5BF9953L, 0x04970F7062198D4FL), 0x04970F7062198D4FL);
        uint32_t l_453[2][1][5] = {{{0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL}}};
        int32_t l_454 = 0x6393ADAFL;
        int32_t l_455 = 0x3DF5D265L;
        VECTOR(int16_t, 4) l_456 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x70A7L), 0x70A7L);
        int32_t l_688 = 0x7DB56B7FL;
        int32_t *l_687 = &l_688;
        int32_t *l_689 = &l_688;
        uint16_t l_690 = 1UL;
        uint16_t l_691 = 7UL;
        int8_t l_692 = 0x70L;
        int i, j, k;
        if ((l_456.w = ((l_452.w , (l_454 = (l_453[1][0][2] |= 0x3F141958L))) , (l_455 |= 0L))))
        { /* block id: 197 */
            int32_t l_457 = 0x175DC9FEL;
            VECTOR(int32_t, 2) l_462 = (VECTOR(int32_t, 2))(0x5C3161FDL, 0x227D616FL);
            int i;
            for (l_457 = 0; (l_457 <= (-23)); l_457--)
            { /* block id: 200 */
                int16_t l_460 = (-8L);
                VECTOR(uint32_t, 2) l_461 = (VECTOR(uint32_t, 2))(4294967295UL, 4294967289UL);
                int i;
                l_461.y = l_460;
            }
            if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_462.xx)))).even)
            { /* block id: 203 */
                uint32_t l_463 = 4294967295UL;
                uint64_t l_466 = 0UL;
                uint32_t l_469 = 4294967292UL;
                l_463++;
                --l_466;
                ++l_469;
            }
            else
            { /* block id: 207 */
                VECTOR(uint32_t, 4) l_472 = (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0xBB4996F1L), 0xBB4996F1L);
                VECTOR(uint32_t, 4) l_473 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967286UL), 4294967286UL);
                int32_t l_475 = 0x24BDFA95L;
                int32_t *l_474 = &l_475;
                int32_t *l_476 = &l_475;
                int32_t *l_477 = &l_475;
                int i;
                l_477 = (l_476 = (((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_472.xzzwzzww)).s40)).xxyy, ((VECTOR(uint32_t, 16))(l_473.zzxywxwwzxxwxwxw)).seb43))).x , l_474));
                for (l_473.x = 0; (l_473.x != 10); l_473.x = safe_add_func_uint8_t_u_u(l_473.x, 3))
                { /* block id: 212 */
                    uint64_t l_480 = 18446744073709551615UL;
                    if ((l_462.x = ((*l_477) = l_480)))
                    { /* block id: 215 */
                        VECTOR(int32_t, 16) l_481 = (VECTOR(int32_t, 16))(0x2C41942FL, (VECTOR(int32_t, 4))(0x2C41942FL, (VECTOR(int32_t, 2))(0x2C41942FL, 1L), 1L), 1L, 0x2C41942FL, 1L, (VECTOR(int32_t, 2))(0x2C41942FL, 1L), (VECTOR(int32_t, 2))(0x2C41942FL, 1L), 0x2C41942FL, 1L, 0x2C41942FL, 1L);
                        uint16_t l_482 = 65535UL;
                        int8_t l_483 = 0L;
                        int i;
                        l_482 |= l_481.sb;
                        (*l_476) |= (-1L);
                        (*l_477) = l_483;
                    }
                    else
                    { /* block id: 219 */
                        union U0 l_484 = {0xFAF82C61L};/* VOLATILE GLOBAL l_484 */
                        VECTOR(int32_t, 4) l_485 = (VECTOR(int32_t, 4))(0x028163E0L, (VECTOR(int32_t, 2))(0x028163E0L, 0x1B26F005L), 0x1B26F005L);
                        int32_t l_486[7];
                        VECTOR(int32_t, 16) l_487 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 9L), 9L), 9L, 7L, 9L, (VECTOR(int32_t, 2))(7L, 9L), (VECTOR(int32_t, 2))(7L, 9L), 7L, 9L, 7L, 9L);
                        VECTOR(int32_t, 2) l_488 = (VECTOR(int32_t, 2))(3L, 0x4CA1DE5EL);
                        VECTOR(int32_t, 4) l_489 = (VECTOR(int32_t, 4))(0x78EC2E4CL, (VECTOR(int32_t, 2))(0x78EC2E4CL, (-2L)), (-2L));
                        VECTOR(int32_t, 2) l_490 = (VECTOR(int32_t, 2))(0x2AEED52EL, 0x537402DEL);
                        int16_t l_491 = 4L;
                        int32_t l_492 = 0x79D60494L;
                        uint32_t l_493 = 0xB7332011L;
                        uint32_t l_494 = 1UL;
                        VECTOR(int16_t, 2) l_495 = (VECTOR(int16_t, 2))(0x06DAL, 0x059CL);
                        VECTOR(int32_t, 4) l_496 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x21F17BB3L), 0x21F17BB3L);
                        VECTOR(int32_t, 4) l_497 = (VECTOR(int32_t, 4))(0x5AFC43BAL, (VECTOR(int32_t, 2))(0x5AFC43BAL, (-1L)), (-1L));
                        VECTOR(int32_t, 16) l_498 = (VECTOR(int32_t, 16))(0x22A77554L, (VECTOR(int32_t, 4))(0x22A77554L, (VECTOR(int32_t, 2))(0x22A77554L, 0L), 0L), 0L, 0x22A77554L, 0L, (VECTOR(int32_t, 2))(0x22A77554L, 0L), (VECTOR(int32_t, 2))(0x22A77554L, 0L), 0x22A77554L, 0L, 0x22A77554L, 0L);
                        VECTOR(int32_t, 16) l_499 = (VECTOR(int32_t, 16))(0x72F0E144L, (VECTOR(int32_t, 4))(0x72F0E144L, (VECTOR(int32_t, 2))(0x72F0E144L, 0x1A370D33L), 0x1A370D33L), 0x1A370D33L, 0x72F0E144L, 0x1A370D33L, (VECTOR(int32_t, 2))(0x72F0E144L, 0x1A370D33L), (VECTOR(int32_t, 2))(0x72F0E144L, 0x1A370D33L), 0x72F0E144L, 0x1A370D33L, 0x72F0E144L, 0x1A370D33L);
                        int8_t l_500 = 0x01L;
                        uint64_t l_501 = 1UL;
                        uint32_t l_502 = 0x7E5F1643L;
                        int8_t l_503 = (-1L);
                        uint64_t l_504 = 18446744073709551615UL;
                        int8_t l_505 = (-10L);
                        uint32_t l_506 = 0x25E18858L;
                        uint16_t l_507 = 0xA56CL;
                        uint64_t l_510[5];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_486[i] = (-3L);
                        for (i = 0; i < 5; i++)
                            l_510[i] = 9UL;
                        l_462.x = (l_484 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_485.zyzyzzzywyzwzyzw)), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(0x1DB3D7B3L, 2L)).yyxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x068ACCB8L)).xyyx)).even)).xxxx))).xwyxzwwzxyywwxyz, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((*l_477) = l_486[6]), 6L, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(l_487.s0f9dc9414e551544)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_488.yyxyyyyyxxxxyyxx)).sc79d)).xwxwzwwyxwyywyzz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_489.xw)))).yxyxxyxyxxxyxyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_490.yyxy)).yyxzywzxzzyzwwzy))))), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-3L), 0x10566D61L)).xxyyyxyx)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(0x4C2A207EL, (-1L), 0x1E40AE28L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(0x6AB64412L, (-3L)))))), 0x62092C83L, 0x1F0410DAL, (-1L))).s66, (int32_t)l_491))), 0x1D14D566L, l_492, (-7L), 1L, 0x154E45C7L, 0x7E517E33L, 0x3DACBE4AL, 1L, 1L, ((VECTOR(int32_t, 4))(1L, 2L, (-8L), 1L)), (-1L))).even)), (-4L), ((*l_476) = l_493), (-3L), l_494, ((l_452.x = ((VECTOR(uint64_t, 2))(0UL, 2UL)).lo) , 1L), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0L, 1L)).yxxxyyxyyxyxxxxx, ((VECTOR(int32_t, 2))(0x03F19F3DL, 1L)).yxyyyxxyxyxyxyyy))).s01c4, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_495.yxyxxxyxxxxyyyxy)).s68, ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 2))(0xDAD8L, 0xFA0FL)).xyyyxyxx))).s45))).yxyxxyxx)).s51, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x401084E3L, 1L)), 0x7D51D3D4L, (-1L))).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_496.wwwwwzzx)).s2, 0x69B3E6EBL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x79B321A7L, 0x3D94AD67L)).yxxx, ((VECTOR(int32_t, 16))(l_497.zwwzzwzyxxwzxxyy)).sc3ed, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-7L), 0x16D0B85EL, 0x19B48E57L, ((VECTOR(int32_t, 4))(l_498.s5ca0)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_499.s606c)))).yxxxxzyz)), 0x13E1CC0FL)).lo)).hi))), ((*l_476) = (l_488.y ^= (l_500 , l_501))), l_502, (-1L), 0x779DE166L)).s7, l_503, (-3L), ((VECTOR(int32_t, 2))(5L)), l_504, 1L, 0L)), ((VECTOR(int32_t, 4))(0x23F1592AL)), 0L, (-6L))).s2e, ((VECTOR(int32_t, 2))(8L)), ((VECTOR(int32_t, 2))(0x6CE39943L)))))))))).yyxy))), l_505, ((VECTOR(int32_t, 2))(0x3375F236L)), 0x51C1E431L)).hi, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0L))))).hi, ((VECTOR(int32_t, 2))(0x5DFF8403L))))), (-4L))).sd796))).ywxwzxzzzxwxwxww))).sef, ((VECTOR(int32_t, 2))(0x0F36B97AL))))), ((VECTOR(int32_t, 2))(0x52D4DDC6L)), ((VECTOR(int32_t, 2))(0x12640F0DL)), ((VECTOR(int32_t, 4))((-5L))), ((VECTOR(int32_t, 2))(0x06E7B0C3L)), 0x0518E5E0L, 0x19C43B3BL)).lo))), ((VECTOR(int32_t, 8))((-3L)))))))).sb15c, (int32_t)l_506))).hi)).yxyxyyyy)).s2);
                        --l_507;
                        --l_510[3];
                    }
                }
            }
            for (l_457 = 25; (l_457 != (-17)); l_457--)
            { /* block id: 233 */
                int16_t l_515[9][10] = {{(-1L),(-4L),0x201AL,(-1L),(-4L),(-1L),0x201AL,(-4L),(-1L),(-1L)},{(-1L),(-4L),0x201AL,(-1L),(-4L),(-1L),0x201AL,(-4L),(-1L),(-1L)},{(-1L),(-4L),0x201AL,(-1L),(-4L),(-1L),0x201AL,(-4L),(-1L),(-1L)},{(-1L),(-4L),0x201AL,(-1L),(-4L),(-1L),0x201AL,(-4L),(-1L),(-1L)},{(-1L),(-4L),0x201AL,(-1L),(-4L),(-1L),0x201AL,(-4L),(-1L),(-1L)},{(-1L),(-4L),0x201AL,(-1L),(-4L),(-1L),0x201AL,(-4L),(-1L),(-1L)},{(-1L),(-4L),0x201AL,(-1L),(-4L),(-1L),0x201AL,(-4L),(-1L),(-1L)},{(-1L),(-4L),0x201AL,(-1L),(-4L),(-1L),0x201AL,(-4L),(-1L),(-1L)},{(-1L),(-4L),0x201AL,(-1L),(-4L),(-1L),0x201AL,(-4L),(-1L),(-1L)}};
                uint32_t l_516 = 0xF845E03EL;
                int i, j;
                l_516--;
                for (l_515[7][7] = (-27); (l_515[7][7] != (-2)); l_515[7][7]++)
                { /* block id: 237 */
                    uint64_t l_521 = 9UL;
                    VECTOR(uint16_t, 16) l_524 = (VECTOR(uint16_t, 16))(0xA1D1L, (VECTOR(uint16_t, 4))(0xA1D1L, (VECTOR(uint16_t, 2))(0xA1D1L, 1UL), 1UL), 1UL, 0xA1D1L, 1UL, (VECTOR(uint16_t, 2))(0xA1D1L, 1UL), (VECTOR(uint16_t, 2))(0xA1D1L, 1UL), 0xA1D1L, 1UL, 0xA1D1L, 1UL);
                    VECTOR(uint16_t, 4) l_525 = (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x24CAL), 0x24CAL);
                    VECTOR(uint16_t, 4) l_526 = (VECTOR(uint16_t, 4))(0xC301L, (VECTOR(uint16_t, 2))(0xC301L, 0x3C95L), 0x3C95L);
                    VECTOR(uint16_t, 16) l_527 = (VECTOR(uint16_t, 16))(0x1F8DL, (VECTOR(uint16_t, 4))(0x1F8DL, (VECTOR(uint16_t, 2))(0x1F8DL, 8UL), 8UL), 8UL, 0x1F8DL, 8UL, (VECTOR(uint16_t, 2))(0x1F8DL, 8UL), (VECTOR(uint16_t, 2))(0x1F8DL, 8UL), 0x1F8DL, 8UL, 0x1F8DL, 8UL);
                    VECTOR(uint16_t, 16) l_528 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65532UL), 65532UL), 65532UL, 0UL, 65532UL, (VECTOR(uint16_t, 2))(0UL, 65532UL), (VECTOR(uint16_t, 2))(0UL, 65532UL), 0UL, 65532UL, 0UL, 65532UL);
                    VECTOR(uint16_t, 8) l_529 = (VECTOR(uint16_t, 8))(0x69F4L, (VECTOR(uint16_t, 4))(0x69F4L, (VECTOR(uint16_t, 2))(0x69F4L, 0x6696L), 0x6696L), 0x6696L, 0x69F4L, 0x6696L);
                    uint32_t l_530 = 5UL;
                    VECTOR(uint16_t, 8) l_533 = (VECTOR(uint16_t, 8))(0x06E7L, (VECTOR(uint16_t, 4))(0x06E7L, (VECTOR(uint16_t, 2))(0x06E7L, 0xC186L), 0xC186L), 0xC186L, 0x06E7L, 0xC186L);
                    VECTOR(uint8_t, 8) l_534 = (VECTOR(uint8_t, 8))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 250UL), 250UL), 250UL, 8UL, 250UL);
                    uint8_t l_535 = 0x9CL;
                    VECTOR(uint16_t, 8) l_538 = (VECTOR(uint16_t, 8))(0x01E9L, (VECTOR(uint16_t, 4))(0x01E9L, (VECTOR(uint16_t, 2))(0x01E9L, 0x6774L), 0x6774L), 0x6774L, 0x01E9L, 0x6774L);
                    VECTOR(uint16_t, 2) l_539 = (VECTOR(uint16_t, 2))(0xFBC0L, 1UL);
                    VECTOR(uint16_t, 2) l_540 = (VECTOR(uint16_t, 2))(0UL, 8UL);
                    VECTOR(uint16_t, 2) l_541 = (VECTOR(uint16_t, 2))(0x91D2L, 0UL);
                    VECTOR(int16_t, 8) l_542 = (VECTOR(int16_t, 8))(0x227FL, (VECTOR(int16_t, 4))(0x227FL, (VECTOR(int16_t, 2))(0x227FL, (-4L)), (-4L)), (-4L), 0x227FL, (-4L));
                    int8_t l_543 = 0x4DL;
                    int16_t l_544[1][7][7] = {{{0x48F1L,0x19C3L,0x48F1L,0x48F1L,0x19C3L,0x48F1L,0x48F1L},{0x48F1L,0x19C3L,0x48F1L,0x48F1L,0x19C3L,0x48F1L,0x48F1L},{0x48F1L,0x19C3L,0x48F1L,0x48F1L,0x19C3L,0x48F1L,0x48F1L},{0x48F1L,0x19C3L,0x48F1L,0x48F1L,0x19C3L,0x48F1L,0x48F1L},{0x48F1L,0x19C3L,0x48F1L,0x48F1L,0x19C3L,0x48F1L,0x48F1L},{0x48F1L,0x19C3L,0x48F1L,0x48F1L,0x19C3L,0x48F1L,0x48F1L},{0x48F1L,0x19C3L,0x48F1L,0x48F1L,0x19C3L,0x48F1L,0x48F1L}}};
                    VECTOR(uint16_t, 4) l_545 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xF16BL), 0xF16BL);
                    int32_t l_546 = 0x5AED6785L;
                    uint16_t l_547 = 0x43D1L;
                    VECTOR(uint16_t, 16) l_550 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 5UL), 5UL), 5UL, 0UL, 5UL, (VECTOR(uint16_t, 2))(0UL, 5UL), (VECTOR(uint16_t, 2))(0UL, 5UL), 0UL, 5UL, 0UL, 5UL);
                    VECTOR(uint16_t, 2) l_551 = (VECTOR(uint16_t, 2))(0UL, 0x714BL);
                    VECTOR(uint16_t, 4) l_552 = (VECTOR(uint16_t, 4))(0xEDE8L, (VECTOR(uint16_t, 2))(0xEDE8L, 0x4FD8L), 0x4FD8L);
                    uint32_t l_553[7] = {0xD20AE27EL,4294967288UL,0xD20AE27EL,0xD20AE27EL,4294967288UL,0xD20AE27EL,0xD20AE27EL};
                    union U0 l_554 = {9UL};/* VOLATILE GLOBAL l_554 */
                    int32_t l_555 = 0x7D261E3FL;
                    uint8_t l_556 = 255UL;
                    int16_t l_557 = 0L;
                    int32_t l_558 = (-1L);
                    int i, j, k;
                    l_521++;
                    l_462.x &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(1L, 0x223EL)).yyyyyxxxyyyyxyyx, ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_524.s9701)), 1UL, 0x76A8L, 0xF8F1L, 0xB2A0L)).s3303361575074624, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(l_525.yx)).yxyxyxxxyyyxyyyy, ((VECTOR(uint16_t, 8))(l_526.yzyyywxw)).s0373653462376166))).hi)).s6435133526274442, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 4))(l_527.s180b)), ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(l_528.s2e51b1e854b1bcd1)).s55a5, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 16))(l_529.s0540000741550522)).hi, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0x3C5FL, ((VECTOR(uint16_t, 4))(65535UL, (l_530--), 0xA5B4L, 0xC8AEL)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 4))(l_533.s3004)), (uint16_t)((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_534.s56)), 1UL, 1UL)).yzzywyzzzxwzzyxx, ((VECTOR(uint8_t, 2))(6UL, 0UL)).xxyxyyxyxyyxxxxx))).sf, (uint16_t)(l_535--)))), ((VECTOR(uint16_t, 2))(l_538.s50)), 0xEB96L, 1UL)), 0x2E46L, 0xF792L, 65527UL)).sf1)), ((VECTOR(uint16_t, 2))(l_539.yx)).odd, 65535UL, ((VECTOR(uint16_t, 2))(l_540.yx)), 65535UL, 65533UL)).s0004176174404757, ((VECTOR(uint16_t, 4))(l_541.yyyy)).wzyzwxwxyzzwwzxx))).lo))).s3650624044170244, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 8))(l_542.s77102246)).even))), l_543, 65535UL, 0x9930L)).s1530166560132727))))))).hi)).lo)))))), l_544[0][1][5], 0x2677L, 0xA142L)))).s5071214525522232)).odd, ((VECTOR(uint16_t, 16))(l_545.xwzwwxxyyyzyxyyx)).lo))).s5223350164030567, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(65528UL, 0x0177L, (l_546 = 0x98DEL), (l_547++), 0x2D7FL, ((VECTOR(uint16_t, 4))(l_550.sdef9)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_551.yx)).xyyyxxyyxxyxyyxx)).s55)).xxxxyxyxyyxyxxxy, ((VECTOR(uint16_t, 16))((l_553[1] = ((VECTOR(uint16_t, 8))(l_552.xxxzyxxx)).s7), (l_554 , (l_555 , ((VECTOR(uint16_t, 2))(0x72B2L, 65535UL)).even)), 65528UL, (l_556 , l_557), 9UL, 0xB4B1L, ((VECTOR(uint16_t, 8))(0x5E57L)), 0x4795L, 1UL))))).sc918)), l_558, 65527UL, 0xFB7FL))))))))))))).odd)).s2;
                }
                for (l_516 = 2; (l_516 <= 60); l_516 = safe_add_func_int8_t_s_s(l_516, 3))
                { /* block id: 248 */
                    int32_t l_561 = (-8L);
                    for (l_561 = 0; (l_561 > 12); l_561 = safe_add_func_int8_t_s_s(l_561, 7))
                    { /* block id: 251 */
                        int16_t l_564 = 0x7300L;
                        uint16_t l_565 = 8UL;
                        int32_t *l_566 = (void*)0;
                        int32_t l_568[3];
                        int32_t *l_567 = &l_568[1];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_568[i] = 3L;
                        l_462.x = 0L;
                        l_564 |= (l_462.y = 0x5B9F4E6CL);
                        l_462.x = l_565;
                        l_567 = l_566;
                    }
                }
            }
            for (l_462.y = 29; (l_462.y > (-24)); l_462.y--)
            { /* block id: 262 */
                int8_t l_571 = 1L;
                int32_t l_644 = (-5L);
                if (l_571)
                { /* block id: 263 */
                    int32_t l_573 = 1L;
                    int32_t *l_572 = &l_573;
                    int32_t *l_574[7][7][5] = {{{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573}},{{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573}},{{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573}},{{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573}},{{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573}},{{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573}},{{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573,&l_573}}};
                    int32_t *l_575[6][9] = {{&l_573,&l_573,(void*)0,&l_573,&l_573,(void*)0,(void*)0,&l_573,&l_573},{&l_573,&l_573,(void*)0,&l_573,&l_573,(void*)0,(void*)0,&l_573,&l_573},{&l_573,&l_573,(void*)0,&l_573,&l_573,(void*)0,(void*)0,&l_573,&l_573},{&l_573,&l_573,(void*)0,&l_573,&l_573,(void*)0,(void*)0,&l_573,&l_573},{&l_573,&l_573,(void*)0,&l_573,&l_573,(void*)0,(void*)0,&l_573,&l_573},{&l_573,&l_573,(void*)0,&l_573,&l_573,(void*)0,(void*)0,&l_573,&l_573}};
                    int8_t l_576 = (-1L);
                    uint64_t l_577 = 0xE8375E350BE171CDL;
                    int i, j, k;
                    l_575[2][4] = (l_574[5][0][3] = l_572);
                    l_457 &= l_576;
                    l_457 = l_577;
                }
                else
                { /* block id: 268 */
                    int32_t l_578[3][2][9] = {{{1L,(-5L),0x58947009L,(-1L),0x58947009L,(-5L),1L,0L,0L},{1L,(-5L),0x58947009L,(-1L),0x58947009L,(-5L),1L,0L,0L}},{{1L,(-5L),0x58947009L,(-1L),0x58947009L,(-5L),1L,0L,0L},{1L,(-5L),0x58947009L,(-1L),0x58947009L,(-5L),1L,0L,0L}},{{1L,(-5L),0x58947009L,(-1L),0x58947009L,(-5L),1L,0L,0L},{1L,(-5L),0x58947009L,(-1L),0x58947009L,(-5L),1L,0L,0L}}};
                    int32_t l_579 = 0x4A4A676DL;
                    int64_t l_580 = 0x5AC76223E1DB8DD2L;
                    uint8_t l_581 = 0xD9L;
                    VECTOR(int32_t, 16) l_584 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L), (VECTOR(int32_t, 2))(0L, (-10L)), (VECTOR(int32_t, 2))(0L, (-10L)), 0L, (-10L), 0L, (-10L));
                    uint64_t l_585 = 0UL;
                    int64_t l_586[9] = {0x619A4E98779B4951L,0x619A4E98779B4951L,0x619A4E98779B4951L,0x619A4E98779B4951L,0x619A4E98779B4951L,0x619A4E98779B4951L,0x619A4E98779B4951L,0x619A4E98779B4951L,0x619A4E98779B4951L};
                    VECTOR(int16_t, 16) l_587 = (VECTOR(int16_t, 16))(0x3C84L, (VECTOR(int16_t, 4))(0x3C84L, (VECTOR(int16_t, 2))(0x3C84L, 0x13CEL), 0x13CEL), 0x13CEL, 0x3C84L, 0x13CEL, (VECTOR(int16_t, 2))(0x3C84L, 0x13CEL), (VECTOR(int16_t, 2))(0x3C84L, 0x13CEL), 0x3C84L, 0x13CEL, 0x3C84L, 0x13CEL);
                    int16_t l_588 = 0x6DA7L;
                    int64_t l_589 = 6L;
                    VECTOR(int16_t, 2) l_590 = (VECTOR(int16_t, 2))(0x4E23L, (-1L));
                    uint16_t l_591 = 0xBBC7L;
                    int64_t l_592 = 0x701C68682778D7E8L;
                    uint16_t l_593 = 0x11E1L;
                    VECTOR(int16_t, 8) l_594 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3B1BL), 0x3B1BL), 0x3B1BL, 1L, 0x3B1BL);
                    uint64_t l_595 = 18446744073709551615UL;
                    int16_t l_596 = 0L;
                    uint32_t l_597 = 4294967295UL;
                    union U0 l_598 = {0xC2D1C104L};/* VOLATILE GLOBAL l_598 */
                    uint16_t l_599 = 0x2A90L;
                    uint32_t l_600 = 0x7992603BL;
                    uint8_t l_601 = 1UL;
                    int64_t l_602 = 0x4A47F422B4FCBDA8L;
                    int64_t l_603 = 0x1891AD7D2B312B0FL;
                    int i, j, k;
                    --l_581;
                    l_457 |= ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(l_584.s6f)), ((VECTOR(int32_t, 16))(l_585, 0x4C39B132L, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_586[7], 0x2998L, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(l_587.s96aa4f08)), (int16_t)((l_589 |= l_588) , ((VECTOR(int16_t, 16))(0x51ACL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x7280L, 1L)), ((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_590.xx)).lo, 4L, 0x6A6BL, (((l_591 , (((l_593 = l_592) , 0xBAA08AEA7CA5A3E3L) , ((l_456.x = ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(l_594.s24)).xxyx))).even, (int16_t)l_595, (int16_t)0L))).lo) , (l_597 = l_596)))) , l_598) , 0x75EEL), 0x0AF9L, ((VECTOR(int16_t, 2))(2L)), (-4L))).s33)), 1L)), 6L, 0x006FL)), ((VECTOR(int16_t, 8))(0x40F5L))))).s07, ((VECTOR(int16_t, 2))(1L))))), l_599, ((VECTOR(int16_t, 2))(0x2C8AL)), 0L, 0x08C1L, 0x2740L)).s74, ((VECTOR(int16_t, 2))(0x739FL))))).yyyx, ((VECTOR(int16_t, 4))((-1L)))))))), 0x0B3BL, 0x58C8L, l_600, l_601, ((VECTOR(int16_t, 4))(0x5532L)), ((VECTOR(int16_t, 2))(0x50F7L)), 4L)).s0), (int16_t)l_602))).s0023555651011141)).s2d91)).even, ((VECTOR(int16_t, 2))(1L))))), 0L, (-2L), (-8L), 0x6345L)).hi)), ((VECTOR(uint16_t, 4))(0x1E6AL))))), ((VECTOR(int32_t, 2))(0x2EF5BA22L)), ((VECTOR(int32_t, 2))(2L)), 0L, l_603, ((VECTOR(int32_t, 2))((-1L))), 0x0FBED054L, 0L)).sb6))).hi;
                    for (l_603 = 7; (l_603 <= (-22)); l_603--)
                    { /* block id: 277 */
                        int64_t l_608[8] = {0x009BC4A41C8E8732L,0x22D5DFD4CD5D74E4L,0x009BC4A41C8E8732L,0x009BC4A41C8E8732L,0x22D5DFD4CD5D74E4L,0x009BC4A41C8E8732L,0x009BC4A41C8E8732L,0x22D5DFD4CD5D74E4L};
                        int64_t *l_607[1][6] = {{&l_608[6],(void*)0,&l_608[6],&l_608[6],(void*)0,&l_608[6]}};
                        int64_t **l_606 = &l_607[0][3];
                        int64_t **l_609 = &l_607[0][3];
                        uint32_t l_610 = 4294967291UL;
                        int i, j;
                        l_609 = (l_606 = (void*)0);
                        l_457 = l_610;
                    }
                }
                for (l_571 = 5; (l_571 > (-10)); l_571 = safe_sub_func_uint16_t_u_u(l_571, 1))
                { /* block id: 285 */
                    uint32_t l_613 = 0xB60D4FBAL;
                    if (l_613)
                    { /* block id: 286 */
                        int32_t l_614[3];
                        VECTOR(int32_t, 16) l_615 = (VECTOR(int32_t, 16))(0x7179122EL, (VECTOR(int32_t, 4))(0x7179122EL, (VECTOR(int32_t, 2))(0x7179122EL, 1L), 1L), 1L, 0x7179122EL, 1L, (VECTOR(int32_t, 2))(0x7179122EL, 1L), (VECTOR(int32_t, 2))(0x7179122EL, 1L), 0x7179122EL, 1L, 0x7179122EL, 1L);
                        int i;
                        for (i = 0; i < 3; i++)
                            l_614[i] = 0x5362DF50L;
                        l_457 ^= l_614[2];
                        l_615.s3 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_615.s93242c430aba8337)))).s7;
                    }
                    else
                    { /* block id: 289 */
                        uint8_t l_616[5] = {0x2BL,0x2BL,0x2BL,0x2BL,0x2BL};
                        VECTOR(int16_t, 4) l_617 = (VECTOR(int16_t, 4))(0x3378L, (VECTOR(int16_t, 2))(0x3378L, 0x78D9L), 0x78D9L);
                        uint8_t l_618 = 0x10L;
                        VECTOR(int32_t, 4) l_621 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 6L), 6L);
                        uint64_t l_622 = 0x8CC455BB83A0DA33L;
                        uint32_t l_623 = 0x4597E49DL;
                        VECTOR(int32_t, 16) l_624 = (VECTOR(int32_t, 16))(0x5C6F17E9L, (VECTOR(int32_t, 4))(0x5C6F17E9L, (VECTOR(int32_t, 2))(0x5C6F17E9L, 0x324DFDE9L), 0x324DFDE9L), 0x324DFDE9L, 0x5C6F17E9L, 0x324DFDE9L, (VECTOR(int32_t, 2))(0x5C6F17E9L, 0x324DFDE9L), (VECTOR(int32_t, 2))(0x5C6F17E9L, 0x324DFDE9L), 0x5C6F17E9L, 0x324DFDE9L, 0x5C6F17E9L, 0x324DFDE9L);
                        VECTOR(int32_t, 4) l_625 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
                        int64_t l_626 = (-1L);
                        VECTOR(uint64_t, 2) l_627 = (VECTOR(uint64_t, 2))(2UL, 0x91F7428C85A6B9DAL);
                        VECTOR(int32_t, 2) l_628 = (VECTOR(int32_t, 2))(1L, 0x775D2FF6L);
                        VECTOR(int32_t, 16) l_629 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L), (VECTOR(int32_t, 2))((-1L), (-6L)), (VECTOR(int32_t, 2))((-1L), (-6L)), (-1L), (-6L), (-1L), (-6L));
                        VECTOR(int32_t, 8) l_630 = (VECTOR(int32_t, 8))(0x53D38075L, (VECTOR(int32_t, 4))(0x53D38075L, (VECTOR(int32_t, 2))(0x53D38075L, 0L), 0L), 0L, 0x53D38075L, 0L);
                        int16_t l_631 = 0x4306L;
                        VECTOR(int32_t, 4) l_632 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7ACA28ACL), 0x7ACA28ACL);
                        VECTOR(int32_t, 2) l_633 = (VECTOR(int32_t, 2))(0x4F4BD077L, 0x1B73A939L);
                        VECTOR(int32_t, 4) l_634 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x1C2BBDEFL), 0x1C2BBDEFL);
                        VECTOR(int32_t, 16) l_635 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x55335A50L), 0x55335A50L), 0x55335A50L, (-1L), 0x55335A50L, (VECTOR(int32_t, 2))((-1L), 0x55335A50L), (VECTOR(int32_t, 2))((-1L), 0x55335A50L), (-1L), 0x55335A50L, (-1L), 0x55335A50L);
                        VECTOR(int32_t, 16) l_636 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x05D55CF9L), 0x05D55CF9L), 0x05D55CF9L, 1L, 0x05D55CF9L, (VECTOR(int32_t, 2))(1L, 0x05D55CF9L), (VECTOR(int32_t, 2))(1L, 0x05D55CF9L), 1L, 0x05D55CF9L, 1L, 0x05D55CF9L);
                        int32_t l_637 = 0x00231170L;
                        int32_t l_638 = 0x39CF0FECL;
                        uint16_t l_639 = 8UL;
                        int32_t l_640 = 0x2DF8A49EL;
                        int8_t l_641 = 0L;
                        int32_t l_642[8][7] = {{0L,1L,0x13D5A7DFL,0L,0x62A6D230L,0x13D5A7DFL,0x13D5A7DFL},{0L,1L,0x13D5A7DFL,0L,0x62A6D230L,0x13D5A7DFL,0x13D5A7DFL},{0L,1L,0x13D5A7DFL,0L,0x62A6D230L,0x13D5A7DFL,0x13D5A7DFL},{0L,1L,0x13D5A7DFL,0L,0x62A6D230L,0x13D5A7DFL,0x13D5A7DFL},{0L,1L,0x13D5A7DFL,0L,0x62A6D230L,0x13D5A7DFL,0x13D5A7DFL},{0L,1L,0x13D5A7DFL,0L,0x62A6D230L,0x13D5A7DFL,0x13D5A7DFL},{0L,1L,0x13D5A7DFL,0L,0x62A6D230L,0x13D5A7DFL,0x13D5A7DFL},{0L,1L,0x13D5A7DFL,0L,0x62A6D230L,0x13D5A7DFL,0x13D5A7DFL}};
                        uint32_t l_643[10][9][2] = {{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}},{{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL},{1UL,2UL}}};
                        int i, j, k;
                        l_617.x = l_616[1];
                        --l_618;
                        l_457 = ((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 2))(0x53EDF567L, 0L)), 0x0EB3A320L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x5BCFA833L, ((VECTOR(int32_t, 2))(l_621.yy)), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_622, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))((-1L), 0x290ACB52L)).yyyxyxyx, (int32_t)l_623))), ((VECTOR(int32_t, 2))(l_624.sb9)), ((VECTOR(int32_t, 16))((-2L), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_625.wzyyzyxzzzyyywzw)).sce, (int32_t)(-1L)))), (-8L), l_626, 0x64111A4CL, ((l_455 &= 0x73602F95L) , (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_627.yxxxyyyxxxyxyyyx)).s0aa0))))), ((VECTOR(uint64_t, 4))(18446744073709551615UL, 0xD6C625F87C6A151AL, 18446744073709551615UL, 9UL))))).yxzyxxzx)).s3 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(7L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_628.xyxxyyyyyxyxxyxx)).s7da8)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_629.s65)), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_630.s52)), ((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x2AB10B01L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x0AB602C9L, 0x033F406EL)).xxxxxyyxxyyxxyyx)).s20)), 0x06DC2684L)))).even)).lo, l_631, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_632.xyzzyxwyzzzzxxwx)).odd, ((VECTOR(int32_t, 16))(l_633.xxxxxyyyyxyyxxxx)).odd))).lo)))), 0L)).s36))), ((VECTOR(int32_t, 2))(0x0DC46982L, 0x512E6312L))))), 0x07CF3AA6L, ((VECTOR(int32_t, 2))(l_634.zw)), ((VECTOR(int32_t, 4))(0x21126C8CL, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_635.s0b04e767)), ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(l_636.s6ed6ecc84d88b648)).lo))))).s8, 0x75747099L, 1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x6B979511L, ((VECTOR(int32_t, 2))((-6L))), (-1L))).even)), 6L, l_637, l_638, 0x3FF203C1L, 5L)).sa6, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x7962E310L))))), 2L, 0x4A021369L)).s15)), ((VECTOR(int32_t, 2))(0x2D343A17L))))))), 0x68E05BA5L, ((VECTOR(int32_t, 2))(0x7687978CL)), (-1L), 4L)).s4117773642344224)))).s9)), 0x492D1C6FL, ((VECTOR(int32_t, 4))(0x11C89B16L)), l_639, 0L, (-2L), 5L)).s1, l_640, l_641, 0x77F5D383L, 0x3EC7022AL)), ((VECTOR(int32_t, 16))((-5L))), ((VECTOR(int32_t, 16))(3L))))).sf536, ((VECTOR(int32_t, 4))(0x435FACE8L))))).ywywyxyy, ((VECTOR(int32_t, 8))(0L))))), (-9L), (-1L), ((VECTOR(int32_t, 2))(0L)), 2L)).odd)).s10)), ((VECTOR(int32_t, 2))(0x029D114AL)), (-7L), l_642[2][5], l_643[6][1][0], (-1L), 1L, ((VECTOR(int32_t, 2))((-9L))), 1L)).s5;
                    }
                }
                if (l_644)
                { /* block id: 296 */
                    uint32_t l_645[9] = {0x15C9BBB1L,0x15C9BBB1L,0x15C9BBB1L,0x15C9BBB1L,0x15C9BBB1L,0x15C9BBB1L,0x15C9BBB1L,0x15C9BBB1L,0x15C9BBB1L};
                    uint8_t l_646[5];
                    int64_t l_647[1];
                    VECTOR(int16_t, 2) l_648 = (VECTOR(int16_t, 2))(0L, (-1L));
                    int32_t l_649 = (-1L);
                    VECTOR(int16_t, 4) l_650 = (VECTOR(int16_t, 4))(0x5503L, (VECTOR(int16_t, 2))(0x5503L, 4L), 4L);
                    VECTOR(int16_t, 16) l_651 = (VECTOR(int16_t, 16))(0x7AF4L, (VECTOR(int16_t, 4))(0x7AF4L, (VECTOR(int16_t, 2))(0x7AF4L, (-1L)), (-1L)), (-1L), 0x7AF4L, (-1L), (VECTOR(int16_t, 2))(0x7AF4L, (-1L)), (VECTOR(int16_t, 2))(0x7AF4L, (-1L)), 0x7AF4L, (-1L), 0x7AF4L, (-1L));
                    VECTOR(int16_t, 4) l_652 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L);
                    VECTOR(int16_t, 16) l_653 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int16_t, 2))((-1L), 0L), (VECTOR(int16_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    VECTOR(uint16_t, 8) l_654 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xC1D2L), 0xC1D2L), 0xC1D2L, 1UL, 0xC1D2L);
                    VECTOR(uint16_t, 8) l_655 = (VECTOR(uint16_t, 8))(0x236CL, (VECTOR(uint16_t, 4))(0x236CL, (VECTOR(uint16_t, 2))(0x236CL, 0x24E4L), 0x24E4L), 0x24E4L, 0x236CL, 0x24E4L);
                    VECTOR(uint16_t, 4) l_656 = (VECTOR(uint16_t, 4))(0xA663L, (VECTOR(uint16_t, 2))(0xA663L, 65531UL), 65531UL);
                    VECTOR(uint16_t, 8) l_657 = (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 65528UL), 65528UL), 65528UL, 65529UL, 65528UL);
                    VECTOR(uint16_t, 8) l_658 = (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x827FL), 0x827FL), 0x827FL, 65531UL, 0x827FL);
                    VECTOR(uint16_t, 8) l_659 = (VECTOR(uint16_t, 8))(0xA2ADL, (VECTOR(uint16_t, 4))(0xA2ADL, (VECTOR(uint16_t, 2))(0xA2ADL, 0x4931L), 0x4931L), 0x4931L, 0xA2ADL, 0x4931L);
                    VECTOR(uint16_t, 4) l_660 = (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 1UL), 1UL);
                    int16_t l_661 = 0x618CL;
                    uint32_t l_662 = 4294967295UL;
                    VECTOR(uint8_t, 8) l_663 = (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x6AL), 0x6AL), 0x6AL, 7UL, 0x6AL);
                    VECTOR(uint16_t, 8) l_664 = (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0x422AL), 0x422AL), 0x422AL, 65529UL, 0x422AL);
                    VECTOR(uint16_t, 16) l_665 = (VECTOR(uint16_t, 16))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65526UL), 65526UL), 65526UL, 7UL, 65526UL, (VECTOR(uint16_t, 2))(7UL, 65526UL), (VECTOR(uint16_t, 2))(7UL, 65526UL), 7UL, 65526UL, 7UL, 65526UL);
                    VECTOR(uint16_t, 4) l_666 = (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65535UL), 65535UL);
                    VECTOR(uint16_t, 2) l_667 = (VECTOR(uint16_t, 2))(0x3EF8L, 2UL);
                    VECTOR(uint16_t, 8) l_668 = (VECTOR(uint16_t, 8))(0x4D6AL, (VECTOR(uint16_t, 4))(0x4D6AL, (VECTOR(uint16_t, 2))(0x4D6AL, 0x043EL), 0x043EL), 0x043EL, 0x4D6AL, 0x043EL);
                    VECTOR(uint16_t, 16) l_669 = (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x356CL), 0x356CL), 0x356CL, 65526UL, 0x356CL, (VECTOR(uint16_t, 2))(65526UL, 0x356CL), (VECTOR(uint16_t, 2))(65526UL, 0x356CL), 65526UL, 0x356CL, 65526UL, 0x356CL);
                    VECTOR(int32_t, 8) l_670 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x30935EADL), 0x30935EADL), 0x30935EADL, (-1L), 0x30935EADL);
                    VECTOR(uint16_t, 4) l_671 = (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 65532UL), 65532UL);
                    int32_t l_672 = 0x642B3951L;
                    VECTOR(uint16_t, 8) l_673 = (VECTOR(uint16_t, 8))(0xED5CL, (VECTOR(uint16_t, 4))(0xED5CL, (VECTOR(uint16_t, 2))(0xED5CL, 0x5D9DL), 0x5D9DL), 0x5D9DL, 0xED5CL, 0x5D9DL);
                    uint16_t l_674 = 1UL;
                    int8_t l_675 = 0x77L;
                    int8_t l_676 = 0x48L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_646[i] = 2UL;
                    for (i = 0; i < 1; i++)
                        l_647[i] = (-9L);
                    l_644 = ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((l_646[3] = l_645[2]) , l_647[0]), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(0x6EE7L, 0x2E93L, (-3L), ((VECTOR(int16_t, 2))((-2L), 0x6101L)), 0L, 0x7CECL, ((VECTOR(int16_t, 16))(l_648.yyyyyxxyyyyxxxyy)).se, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((-10L), l_649, ((VECTOR(int16_t, 2))(l_650.yz)).hi, ((VECTOR(int16_t, 2))(l_651.s7f)), 0x7AAEL, 4L, 0x65EAL)))).s77, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(l_652.yxwx)), ((VECTOR(int16_t, 2))(l_653.s29)).yyxy))).hi))).xyyxxyxx, (int16_t)((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(4L, 0x3694L)).yxyy)).hi)).yyxyxyyx)).s7))))).lo, ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(l_654.s1732006613477102)).even, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(l_655.s6260)).zzzwzzzy, ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(l_656.yx)), ((VECTOR(uint16_t, 16))(65530UL, 0UL, 0x8B6FL, 65535UL, 1UL, 0xCE1DL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(65534UL, 0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_657.s3502)))), ((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 4))(l_658.s0162)).ywxzxzwz, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_659.s53)), ((VECTOR(uint16_t, 8))(l_660.zwxyyyyy)), (l_662 = (l_661 = 0xD652L)), 0UL, ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(255UL, 255UL, 255UL, 0xB1L)).yyzywxwy, ((VECTOR(uint8_t, 2))(l_663.s35)).yxyxxxyy))).s26, ((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(0x4472L, 0UL)).yxxyyyxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_664.s64123301)).even)).xyzxwzxy))).s20))), 0x51A1L, 65535UL)).xwwzyxyx)).s1, 0x8A4CL, 0xA62FL, 0x2859L)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 8))(l_665.sd3027f49)).odd, ((VECTOR(uint16_t, 8))(l_666.zxzwwzwx)).lo, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(l_667.yx)).xyxx, ((VECTOR(uint16_t, 16))(l_668.s6261122477001564)).s0384)))))))).lo)).yxyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(0xC586L, 65534UL)).xyxyyyyxxyxyxyyx, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(l_669.sf7c155f2c2da52f4)).lo, (uint16_t)l_670.s0))).s5322355636502673, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0x7EE3L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_671.xzzx)).hi)), GROUP_DIVERGE(2, 1), l_672, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_673.s37)).yxyyyxxx)).lo)).z, l_674, ((VECTOR(uint16_t, 4))(65529UL)), 1UL, 1UL)).s44, ((VECTOR(uint16_t, 2))(9UL))))), 0x12DCL)).s72)).yyxyxxxxyxxxyxyy))).s9bd6))))))).s3e)).xyxxyxyx, ((VECTOR(uint16_t, 8))(0UL))))).s22)))), ((VECTOR(uint16_t, 2))(0xE0F8L))))).xyyyxxxx))).s2740556414053225, ((VECTOR(uint16_t, 16))(65530UL))))).se0b7, ((VECTOR(uint16_t, 4))(0x0BA6L))))), l_675, 65529UL, 0xA429L)), 0x5AC0L, 0x4E5BL)).sa80d)).y, l_676, ((VECTOR(uint16_t, 8))(0x4CADL)))).sc2))).xyyyxxyy, ((VECTOR(uint16_t, 8))(1UL)))))))).odd)).yywzzzwy)))))), ((VECTOR(int32_t, 2))(0x1A8B65AAL)), ((VECTOR(int32_t, 2))(0x154F930FL)), ((VECTOR(int32_t, 2))(0x02D7DA4CL)), 0x2AA8A1EDL)).even, ((VECTOR(int32_t, 8))(0x017A098EL))))).lo)).even, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))((-1L)))))).odd;
                    l_670.s0 = ((l_644 = (-1L)) , 0x06CC52ADL);
                }
                else
                { /* block id: 303 */
                    uint16_t l_677 = 0x6B1BL;
                    int16_t l_680 = 1L;
                    ++l_677;
                    l_457 ^= (l_644 = l_680);
                    for (l_680 = 0; (l_680 != 1); l_680 = safe_add_func_uint8_t_u_u(l_680, 7))
                    { /* block id: 309 */
                        int32_t l_684 = 3L;
                        int32_t *l_683 = &l_684;
                        l_683 = (void*)0;
                    }
                }
            }
        }
        else
        { /* block id: 314 */
            int32_t l_686 = (-3L);
            int32_t *l_685[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_685[i][j] = &l_686;
            }
            l_685[0][2] = (void*)0;
        }
        l_689 = l_687;
        l_692 = ((*l_689) |= (l_690 , l_691));
        unsigned int result = 0;
        result += l_452.w;
        result += l_452.z;
        result += l_452.y;
        result += l_452.x;
        int l_453_i0, l_453_i1, l_453_i2;
        for (l_453_i0 = 0; l_453_i0 < 2; l_453_i0++) {
            for (l_453_i1 = 0; l_453_i1 < 1; l_453_i1++) {
                for (l_453_i2 = 0; l_453_i2 < 5; l_453_i2++) {
                    result += l_453[l_453_i0][l_453_i1][l_453_i2];
                }
            }
        }
        result += l_454;
        result += l_455;
        result += l_456.w;
        result += l_456.z;
        result += l_456.y;
        result += l_456.x;
        result += l_688;
        result += l_690;
        result += l_691;
        result += l_692;
        atomic_add(&p_1212->l_special_values[23], result);
    }
    else
    { /* block id: 320 */
        (1 + 1);
    }
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1212->g_156 p_1212->g_171 p_1212->g_129 p_1212->g_80 p_1212->g_146 p_1212->g_69 p_1212->g_11 p_1212->g_47 p_1212->g_10 p_1212->g_comm_values p_1212->g_2 p_1212->g_212 p_1212->g_213 p_1212->g_214 p_1212->l_comm_values p_1212->g_225 p_1212->g_238 p_1212->g_148 p_1212->g_263
 * writes: p_1212->g_156 p_1212->g_80 p_1212->g_146 p_1212->g_69 p_1212->g_200 p_1212->g_212 p_1212->g_251 p_1212->g_225 p_1212->g_10
 */
int32_t * func_53(int64_t  p_54, int64_t  p_55, struct S1 * p_1212)
{ /* block id: 78 */
    uint32_t l_161 = 0xB24B621EL;
    int64_t l_176[6];
    int32_t *l_208 = (void*)0;
    uint64_t *l_217 = (void*)0;
    int16_t l_237 = 0x142AL;
    int32_t *l_292[6];
    int i;
    for (i = 0; i < 6; i++)
        l_176[i] = 0x3DF4B4D06AD958E1L;
    for (i = 0; i < 6; i++)
        l_292[i] = (void*)0;
    for (p_1212->g_156 = 0; (p_1212->g_156 == 24); ++p_1212->g_156)
    { /* block id: 81 */
        ++l_161;
    }
    for (p_55 = 0; (p_55 > 0); p_55 = safe_add_func_int16_t_s_s(p_55, 1))
    { /* block id: 86 */
        int16_t l_168 = 6L;
        uint16_t l_169 = 0x3947L;
        uint64_t *l_170 = (void*)0;
        int8_t *l_172 = (void*)0;
        int8_t *l_173 = (void*)0;
        int8_t *l_174 = (void*)0;
        int8_t *l_175[8][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int32_t **l_177 = &p_1212->g_80;
        int32_t l_226 = 1L;
        VECTOR(int16_t, 2) l_233 = (VECTOR(int16_t, 2))((-3L), 0x7D39L);
        int32_t l_259 = 0x7F3A3253L;
        VECTOR(int16_t, 4) l_270 = (VECTOR(int16_t, 4))(0x3F3DL, (VECTOR(int16_t, 2))(0x3F3DL, (-9L)), (-9L));
        int i, j;
        (*l_177) = ((l_176[1] = (65526UL && ((~(safe_mul_func_int8_t_s_s(l_168, l_169))) , (l_170 != p_1212->g_171)))) , (void*)0);
        for (l_161 = 0; (l_161 == 55); ++l_161)
        { /* block id: 91 */
            VECTOR(uint16_t, 2) l_199 = (VECTOR(uint16_t, 2))(0x9993L, 65531UL);
            VECTOR(int8_t, 4) l_207 = (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x6BL), 0x6BL);
            int32_t l_258 = 1L;
            int i;
            (*l_177) = (*p_1212->g_129);
            for (p_1212->g_146 = 9; (p_1212->g_146 >= 18); ++p_1212->g_146)
            { /* block id: 95 */
                VECTOR(uint64_t, 8) l_184 = (VECTOR(uint64_t, 8))(0xF9C2C93F04C9F34FL, (VECTOR(uint64_t, 4))(0xF9C2C93F04C9F34FL, (VECTOR(uint64_t, 2))(0xF9C2C93F04C9F34FL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xF9C2C93F04C9F34FL, 18446744073709551615UL);
                VECTOR(int8_t, 8) l_206 = (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x7EL), 0x7EL), 0x7EL, (-2L), 0x7EL);
                VECTOR(uint16_t, 8) l_228 = (VECTOR(uint16_t, 8))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 65529UL), 65529UL), 65529UL, 3UL, 65529UL);
                VECTOR(int8_t, 2) l_231 = (VECTOR(int8_t, 2))(0x0CL, 1L);
                VECTOR(uint8_t, 2) l_232 = (VECTOR(uint8_t, 2))(0UL, 0x26L);
                int32_t l_291 = 4L;
                int i;
                for (p_1212->g_69 = (-13); (p_1212->g_69 == 7); p_1212->g_69 = safe_add_func_uint8_t_u_u(p_1212->g_69, 5))
                { /* block id: 98 */
                    VECTOR(uint16_t, 16) l_201 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 4UL), 4UL), 4UL, 65535UL, 4UL, (VECTOR(uint16_t, 2))(65535UL, 4UL), (VECTOR(uint16_t, 2))(65535UL, 4UL), 65535UL, 4UL, 65535UL, 4UL);
                    uint32_t l_209 = 0x6B02DDAEL;
                    VECTOR(int16_t, 16) l_234 = (VECTOR(int16_t, 16))(0x6CD1L, (VECTOR(int16_t, 4))(0x6CD1L, (VECTOR(int16_t, 2))(0x6CD1L, 0x0166L), 0x0166L), 0x0166L, 0x6CD1L, 0x0166L, (VECTOR(int16_t, 2))(0x6CD1L, 0x0166L), (VECTOR(int16_t, 2))(0x6CD1L, 0x0166L), 0x6CD1L, 0x0166L, 0x6CD1L, 0x0166L);
                    VECTOR(int32_t, 2) l_283 = (VECTOR(int32_t, 2))(0x124034DBL, 1L);
                    int16_t *l_288[10][3] = {{&p_1212->g_146,(void*)0,&p_1212->g_146},{&p_1212->g_146,(void*)0,&p_1212->g_146},{&p_1212->g_146,(void*)0,&p_1212->g_146},{&p_1212->g_146,(void*)0,&p_1212->g_146},{&p_1212->g_146,(void*)0,&p_1212->g_146},{&p_1212->g_146,(void*)0,&p_1212->g_146},{&p_1212->g_146,(void*)0,&p_1212->g_146},{&p_1212->g_146,(void*)0,&p_1212->g_146},{&p_1212->g_146,(void*)0,&p_1212->g_146},{&p_1212->g_146,(void*)0,&p_1212->g_146}};
                    int i, j;
                    if (p_54)
                        break;
                    if (((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_184.s4563425553120453)).even)).s2 >= (safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(l_184.s4, (((p_55 || ((safe_div_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(l_199.yx)).yxxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x0531L, 0xA031L)), 0x522CL, 65534UL)).yyywyzyx)).even, ((VECTOR(uint16_t, 4))(0UL, ((((p_1212->g_200 = l_184.s6) ^ ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_201.s4e)), 0xA629L, 3UL)).z) <= 0xAED9L) > (l_199.y != ((!p_1212->g_11.s3) , p_54))), 65527UL, 0x3832L))))).z, (safe_rshift_func_uint8_t_u_u(p_1212->g_47.s0, (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(l_206.s20)).xyxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x26L, 0x65L)).xxxx)), ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-9L), 0x2DL)).yyxyxxyxxyyxyyxy)).s8539, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x06L, 0x10L, 0x03L, 0x08L, 0x6EL, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_207.yxwwyzzxyyzwzwxy)).s79)), (int8_t)(0L && 18446744073709551608UL)))), l_184.s3, (-1L), 1L, 1L, ((VECTOR(int8_t, 4))((-9L))), 0x3FL)))).scec1))))).ywywxzyyxxzyxzyy, ((VECTOR(int8_t, 16))(0L))))).lo, ((VECTOR(int8_t, 8))(0L))))).hi))).zwxxyxwywwwxyzzw, ((VECTOR(int8_t, 16))(0x6DL)), ((VECTOR(int8_t, 16))((-9L)))))).s0, l_207.y)))))) , p_1212->g_10.sa), l_201.s1)) >= l_161)) & l_206.s6) | p_54))) , p_1212->g_comm_values[p_1212->tid]), 0x45L)) || p_54) >= p_54), 13)), 1UL)), p_1212->g_comm_values[p_1212->tid]))) >= p_1212->g_2))
                    { /* block id: 101 */
                        VECTOR(uint32_t, 8) l_222 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL);
                        int32_t l_227 = 6L;
                        int i;
                        (*l_177) = l_208;
                        if (l_209)
                            break;
                        l_226 = ((((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(p_1212->g_212.xyyxxxyx)).s67, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1212->g_213.s112f4c2597332f4e)).seeba)).even))), ((VECTOR(uint8_t, 8))(p_1212->g_214.s75661011)).s26))).even, p_55)) , (safe_div_func_int8_t_s_s((l_217 != (void*)0), p_55))) , 0x7ABDE920L) , (safe_add_func_int8_t_s_s((-1L), (((VECTOR(uint32_t, 4))(4294967287UL, (safe_mod_func_int8_t_s_s(((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_222.s33717173)).s5120465031605075)).s1 == ((VECTOR(uint32_t, 8))(0UL, 0xEC7D9E8CL, (0x4D96B292L > (p_1212->g_156 >= ((safe_rshift_func_int8_t_s_s(((((18446744073709551614UL & FAKE_DIVERGE(p_1212->global_1_offset, get_global_id(1), 10)) <= p_54) | 0x0CEB8E079F33D5E5L) && l_207.y), p_55)) , 0L))), 0UL, ((VECTOR(uint32_t, 4))(0x01FEC4C8L)))).s4) != p_1212->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1212->tid, 51))]), 0xB6L)), 0x5DD0E7B0L, 1UL)).z > p_1212->g_225[1]))));
                        ++l_228.s4;
                    }
                    else
                    { /* block id: 106 */
                        l_237 = (((p_1212->g_225[4] , ((VECTOR(int8_t, 8))(l_231.yxxxxyxy)).s0) | ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_232.yxxxyyxxyxyyxxyy)).s6a20)).y) >= ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_233.yxxyyxyxyxxyyxyx)))).sd3, ((VECTOR(int16_t, 8))(l_234.s19b43a37)).s35))).odd);
                    }
                    if (p_55)
                    { /* block id: 109 */
                        int32_t *l_239 = &l_226;
                        uint8_t *l_244 = (void*)0;
                        uint8_t *l_245 = (void*)0;
                        uint8_t *l_246 = (void*)0;
                        uint8_t *l_247[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int16_t *l_250 = &l_237;
                        int32_t *l_254 = &p_1212->g_225[1];
                        int32_t *l_255 = (void*)0;
                        int32_t *l_256 = (void*)0;
                        int32_t *l_257 = &p_1212->g_200;
                        int i, j;
                        l_259 = ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(p_1212->g_238.yz)).xxyyyyxyyxxyxyxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(7L, 0x7B932FE9L)), ((*l_239) = p_54), (p_54 <= ((l_258 |= ((*l_257) = ((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((((((+((*l_239) = (4L <= (p_1212->g_212.x = (l_239 != (*p_1212->g_129)))))) ^ (((GROUP_DIVERGE(2, 1) , (((*l_254) = (safe_lshift_func_uint16_t_u_u((p_1212->g_251 = ((void*)0 != l_250)), (l_161 != (safe_rshift_func_int16_t_s_u((255UL > p_55), p_1212->g_148.s9)))))) , p_55)) | 65535UL) , p_1212->g_238.z)) & p_1212->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1212->tid, 51))]) , 0x1A3040ACL) , p_55) > p_54) == p_1212->g_146) <= 4L), (-5L))), 1)) , 7L))) >= p_54)), (-1L), ((VECTOR(int32_t, 2))(0x382E4A64L)), 1L)).s1137465653005462))).s5c)).xyyy)).wwxxyxzxxyzzywww, (int32_t)p_55, (int32_t)8L))), ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x314A3952L))))).sfb, ((VECTOR(int32_t, 2))(0x135BB748L)), ((VECTOR(int32_t, 2))((-9L)))))).xyxyyxyx, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))((-9L)))))).s25, ((VECTOR(int32_t, 2))((-10L)))))).hi;
                    }
                    else
                    { /* block id: 118 */
                        int32_t *l_260 = &p_1212->g_69;
                        return l_260;
                    }
                    for (l_169 = (-18); (l_169 <= 26); l_169++)
                    { /* block id: 123 */
                        VECTOR(uint32_t, 4) l_272 = (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 1UL), 1UL);
                        int64_t *l_273 = &l_176[1];
                        uint8_t *l_278 = (void*)0;
                        uint8_t *l_279 = (void*)0;
                        uint8_t *l_280 = (void*)0;
                        uint8_t *l_281 = (void*)0;
                        uint8_t *l_282[9][2][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int32_t *l_290 = &p_1212->g_200;
                        int i, j, k;
                        (*l_290) = ((p_1212->g_263 , ((safe_sub_func_int8_t_s_s((p_1212->g_10.s0 |= (safe_mod_func_uint16_t_u_u(p_55, GROUP_DIVERGE(0, 1)))), p_1212->g_225[1])) ^ (((VECTOR(int16_t, 8))(l_270.zywyxwwz)).s1 != (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(5UL, ((VECTOR(uint32_t, 16))(l_272.xxxwywzxxwwxzxzy)).s7, (((((*l_273) = 0x4F704929BF38967EL) >= 0x22EA79D7E67C20CEL) != ((((0xEEC5L <= p_1212->g_148.sb) , (((~(safe_rshift_func_uint16_t_u_u((!((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(65528UL, 0x0859L)).yxyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))((safe_sub_func_int32_t_s_s(((p_1212->g_212.x++) ^ (safe_add_func_int8_t_s_s(p_55, (~(&p_54 != &p_1212->g_156))))), p_1212->g_213.sa)), ((VECTOR(uint16_t, 4))(0UL)), p_1212->g_213.s0, 6UL, 8UL)).even, ((VECTOR(uint16_t, 4))(1UL))))), 0x0C42L, 65535UL, 1UL, 65535UL)).s11)).xyxx))).xxwywxwz, ((VECTOR(uint16_t, 8))(1UL))))).s35, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 2))(0x1DE7L))))), ((VECTOR(uint16_t, 2))(0x98AAL))))).yyxy)), ((VECTOR(uint16_t, 4))(0x9BBFL)), ((VECTOR(uint16_t, 4))(0UL))))).hi)).yxyyyxyyyxxxxxxx, ((VECTOR(uint16_t, 16))(0x7345L))))))).s2), 6))) , 0x0D65CE0A9068FD7EL) , &l_237)) == l_288[4][2]) >= p_55)) == p_1212->g_47.s1), 0x6D1EDAE9L, ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 4))(4UL)), 9UL, ((VECTOR(uint32_t, 2))(0UL)), 0x0D2EE368L)).odd, ((VECTOR(uint32_t, 8))(0x18AFD80EL))))).s5765361770515727))).sc))))) <= 0x0D3AL);
                    }
                }
                l_291 &= p_54;
            }
        }
        (*l_177) = (*l_177);
    }
    return l_292[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1212->g_65 p_1212->g_69 p_1212->g_75 p_1212->g_2 p_1212->g_129 p_1212->g_80
 * writes: p_1212->g_65 p_1212->g_69 p_1212->g_80
 */
uint64_t  func_60(int32_t * p_61, int64_t  p_62, struct S1 * p_1212)
{ /* block id: 12 */
    int32_t *l_82 = (void*)0;
    int32_t **l_81 = &l_82;
    int32_t *l_141[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_142 = 0L;
    int i;
    for (p_62 = 0; (p_62 != (-20)); p_62--)
    { /* block id: 15 */
        int32_t *l_76 = (void*)0;
        int32_t *l_77 = &p_1212->g_69;
        for (p_1212->g_65.s0 = (-29); (p_1212->g_65.s0 <= (-7)); p_1212->g_65.s0 = safe_add_func_int64_t_s_s(p_1212->g_65.s0, 1))
        { /* block id: 18 */
            int32_t *l_68 = &p_1212->g_69;
            (*l_68) |= ((void*)0 != &p_1212->g_2);
            return p_62;
        }
        (*p_1212->g_75) = (safe_unary_minus_func_uint8_t_u((p_62 & p_62)));
        (*l_77) = (*p_61);
        (*l_77) = (*p_61);
    }
    (*l_81) = func_78(((*l_81) = (p_1212->g_80 = &p_1212->g_69)), p_1212);
    (*p_1212->g_75) = (l_142 = (*p_61));
    return p_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_1212->g_129 p_1212->g_69 p_1212->g_80
 * writes: p_1212->g_80 p_1212->g_69
 */
int32_t * func_78(int32_t * p_79, struct S1 * p_1212)
{ /* block id: 28 */
    int32_t *l_128[8][3] = {{(void*)0,(void*)0,&p_1212->g_69},{(void*)0,(void*)0,&p_1212->g_69},{(void*)0,(void*)0,&p_1212->g_69},{(void*)0,(void*)0,&p_1212->g_69},{(void*)0,(void*)0,&p_1212->g_69},{(void*)0,(void*)0,&p_1212->g_69},{(void*)0,(void*)0,&p_1212->g_69},{(void*)0,(void*)0,&p_1212->g_69}};
    int8_t l_137 = 1L;
    int i, j;
    if ((atomic_inc(&p_1212->l_atomic_input[0]) == 0))
    { /* block id: 30 */
        int8_t l_83 = (-3L);
        uint32_t l_84 = 0x56345D18L;
        uint64_t l_87 = 0xEB855BD1B8438CF8L;
        uint16_t l_88 = 3UL;
        int16_t l_89 = 1L;
        int8_t l_90[3];
        uint64_t l_91 = 0x3635D5AA0404C693L;
        int8_t l_92 = 0x56L;
        int8_t l_93 = 0L;
        uint8_t l_94 = 0x5FL;
        uint64_t l_95 = 1UL;
        int i;
        for (i = 0; i < 3; i++)
            l_90[i] = (-5L);
        l_92 = (((GROUP_DIVERGE(1, 1) , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x2C1E9780L, l_83, 0UL, 0x86565EA9L)).yzxxxzzw)).s3) , (l_90[0] &= ((l_84++) , (l_89 &= (l_87 , l_88))))) , l_91);
        l_95 = (l_94 &= l_93);
        for (l_93 = (-5); (l_93 == (-16)); --l_93)
        { /* block id: 39 */
            int32_t l_98 = 0x66EE5324L;
            uint32_t l_112[9][2][6] = {{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x94A5162CL,4294967287UL}}};
            uint64_t l_115 = 0xCCF6B01AB19369D4L;
            int32_t l_116 = 0L;
            int i, j, k;
            for (l_98 = 0; (l_98 >= 17); l_98++)
            { /* block id: 42 */
                int32_t l_101 = (-1L);
                int32_t l_103 = 0x6ACC2001L;
                int32_t *l_102 = &l_103;
                uint64_t l_104 = 0x5739219EC1828E34L;
                int64_t l_105 = 0x06F73136105796D0L;
                VECTOR(int32_t, 8) l_106 = (VECTOR(int32_t, 8))(0x2577EDFDL, (VECTOR(int32_t, 4))(0x2577EDFDL, (VECTOR(int32_t, 2))(0x2577EDFDL, (-1L)), (-1L)), (-1L), 0x2577EDFDL, (-1L));
                uint8_t l_107 = 1UL;
                int64_t l_108 = (-1L);
                uint32_t l_109 = 0xBC9AF00AL;
                int i;
                l_102 = (l_101 , (void*)0);
                l_105 = l_104;
                l_107 &= ((VECTOR(int32_t, 2))(l_106.s54)).lo;
                l_109--;
            }
            l_116 ^= (l_112[6][0][2] , (l_115 = ((l_112[6][0][2]--) , 2L)));
        }
        for (l_95 = 22; (l_95 == 9); l_95 = safe_sub_func_uint16_t_u_u(l_95, 6))
        { /* block id: 54 */
            int8_t l_119[9][3] = {{0x5FL,0x5FL,0x3CL},{0x5FL,0x5FL,0x3CL},{0x5FL,0x5FL,0x3CL},{0x5FL,0x5FL,0x3CL},{0x5FL,0x5FL,0x3CL},{0x5FL,0x5FL,0x3CL},{0x5FL,0x5FL,0x3CL},{0x5FL,0x5FL,0x3CL},{0x5FL,0x5FL,0x3CL}};
            uint8_t l_120 = 0xB2L;
            int8_t l_123 = (-5L);
            int32_t l_124[6][4][2] = {{{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L}},{{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L}},{{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L}},{{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L}},{{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L}},{{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L},{1L,0x1657FB82L}}};
            uint16_t l_125 = 0xAD55L;
            int i, j, k;
            l_119[0][0] = 0L;
            --l_120;
            ++l_125;
        }
        unsigned int result = 0;
        result += l_83;
        result += l_84;
        result += l_87;
        result += l_88;
        result += l_89;
        int l_90_i0;
        for (l_90_i0 = 0; l_90_i0 < 3; l_90_i0++) {
            result += l_90[l_90_i0];
        }
        result += l_91;
        result += l_92;
        result += l_93;
        result += l_94;
        result += l_95;
        atomic_add(&p_1212->l_special_values[0], result);
    }
    else
    { /* block id: 59 */
        (1 + 1);
    }
    (*p_1212->g_129) = l_128[6][2];
    for (p_1212->g_69 = 4; (p_1212->g_69 != (-26)); p_1212->g_69--)
    { /* block id: 65 */
        uint8_t l_132 = 0x52L;
        int32_t l_133 = 0x46B92DD0L;
        int32_t l_134 = 0x329079C9L;
        int32_t l_135 = 0x4D78B1D6L;
        VECTOR(int32_t, 2) l_136 = (VECTOR(int32_t, 2))((-1L), (-10L));
        uint16_t l_138 = 0xA057L;
        int i;
        if (l_132)
            break;
        ++l_138;
        return (*p_1212->g_129);
    }
    return l_128[0][0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[50];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 50; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[50];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 50; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[51];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 51; i++)
            l_comm_values[i] = 1;
    struct S1 c_1213;
    struct S1* p_1212 = &c_1213;
    struct S1 c_1214 = {
        0x28E97EEDL, // p_1212->g_2
        (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 1L), 1L), 1L, 8L, 1L, (VECTOR(int8_t, 2))(8L, 1L), (VECTOR(int8_t, 2))(8L, 1L), 8L, 1L, 8L, 1L), // p_1212->g_10
        (VECTOR(int8_t, 16))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int8_t, 2))(2L, 0L), (VECTOR(int8_t, 2))(2L, 0L), 2L, 0L, 2L, 0L), // p_1212->g_11
        (VECTOR(uint32_t, 8))(0xA10F40BFL, (VECTOR(uint32_t, 4))(0xA10F40BFL, (VECTOR(uint32_t, 2))(0xA10F40BFL, 0xD270C173L), 0xD270C173L), 0xD270C173L, 0xA10F40BFL, 0xD270C173L), // p_1212->g_47
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1212->g_65
        0x5D8284A8L, // p_1212->g_69
        (void*)0, // p_1212->g_71
        (void*)0, // p_1212->g_72
        {(void*)0,&p_1212->g_2,(void*)0,(void*)0,&p_1212->g_2,(void*)0}, // p_1212->g_73
        (void*)0, // p_1212->g_74
        &p_1212->g_69, // p_1212->g_75
        &p_1212->g_69, // p_1212->g_80
        &p_1212->g_80, // p_1212->g_129
        0x57D7L, // p_1212->g_146
        (VECTOR(uint64_t, 16))(0x58AF5EEAC9F24D48L, (VECTOR(uint64_t, 4))(0x58AF5EEAC9F24D48L, (VECTOR(uint64_t, 2))(0x58AF5EEAC9F24D48L, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0x58AF5EEAC9F24D48L, 18446744073709551611UL, (VECTOR(uint64_t, 2))(0x58AF5EEAC9F24D48L, 18446744073709551611UL), (VECTOR(uint64_t, 2))(0x58AF5EEAC9F24D48L, 18446744073709551611UL), 0x58AF5EEAC9F24D48L, 18446744073709551611UL, 0x58AF5EEAC9F24D48L, 18446744073709551611UL), // p_1212->g_147
        (VECTOR(uint64_t, 16))(0xB7C7C066171E037CL, (VECTOR(uint64_t, 4))(0xB7C7C066171E037CL, (VECTOR(uint64_t, 2))(0xB7C7C066171E037CL, 0UL), 0UL), 0UL, 0xB7C7C066171E037CL, 0UL, (VECTOR(uint64_t, 2))(0xB7C7C066171E037CL, 0UL), (VECTOR(uint64_t, 2))(0xB7C7C066171E037CL, 0UL), 0xB7C7C066171E037CL, 0UL, 0xB7C7C066171E037CL, 0UL), // p_1212->g_148
        1L, // p_1212->g_156
        (void*)0, // p_1212->g_171
        0x71CC1EF9L, // p_1212->g_200
        (VECTOR(uint8_t, 2))(0UL, 255UL), // p_1212->g_212
        (VECTOR(uint8_t, 16))(0xD0L, (VECTOR(uint8_t, 4))(0xD0L, (VECTOR(uint8_t, 2))(0xD0L, 0x0FL), 0x0FL), 0x0FL, 0xD0L, 0x0FL, (VECTOR(uint8_t, 2))(0xD0L, 0x0FL), (VECTOR(uint8_t, 2))(0xD0L, 0x0FL), 0xD0L, 0x0FL, 0xD0L, 0x0FL), // p_1212->g_213
        (VECTOR(uint8_t, 8))(0x2AL, (VECTOR(uint8_t, 4))(0x2AL, (VECTOR(uint8_t, 2))(0x2AL, 0x68L), 0x68L), 0x68L, 0x2AL, 0x68L), // p_1212->g_214
        {1L,0L,1L,1L,0L,1L,1L,0L}, // p_1212->g_225
        (void*)0, // p_1212->g_235
        {&p_1212->g_200,&p_1212->g_200}, // p_1212->g_236
        (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0L), 0L), // p_1212->g_238
        0L, // p_1212->g_251
        {4294967286UL}, // p_1212->g_263
        (void*)0, // p_1212->g_289
        (void*)0, // p_1212->g_293
        {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}}, // p_1212->g_301
        (VECTOR(uint32_t, 8))(0x0522F35FL, (VECTOR(uint32_t, 4))(0x0522F35FL, (VECTOR(uint32_t, 2))(0x0522F35FL, 0xEA2F73B9L), 0xEA2F73B9L), 0xEA2F73B9L, 0x0522F35FL, 0xEA2F73B9L), // p_1212->g_308
        (void*)0, // p_1212->g_311
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x26BBL), 0x26BBL), 0x26BBL, 1L, 0x26BBL), // p_1212->g_314
        (VECTOR(uint8_t, 2))(0xFBL, 0xF2L), // p_1212->g_339
        (VECTOR(int64_t, 4))(0x3C1B4375346E925AL, (VECTOR(int64_t, 2))(0x3C1B4375346E925AL, (-8L)), (-8L)), // p_1212->g_349
        (void*)0, // p_1212->g_371
        0x9D8ADD9CL, // p_1212->g_392
        0L, // p_1212->g_414
        (VECTOR(uint8_t, 4))(0x24L, (VECTOR(uint8_t, 2))(0x24L, 9UL), 9UL), // p_1212->g_417
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xC21B0B1D8BA16A38L), 0xC21B0B1D8BA16A38L), 0xC21B0B1D8BA16A38L, 0UL, 0xC21B0B1D8BA16A38L), // p_1212->g_438
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_1212->g_736
        0x309AF1A6L, // p_1212->g_752
        {0x9FCA871EL}, // p_1212->g_790
        0x2A43993E2DFB0993L, // p_1212->g_812
        0xB1DBL, // p_1212->g_821
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_1212->g_852
        &p_1212->g_80, // p_1212->g_866
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-2L)), (-2L)), // p_1212->g_867
        (VECTOR(int32_t, 2))(3L, 0x28544880L), // p_1212->g_868
        (void*)0, // p_1212->g_883
        &p_1212->g_883, // p_1212->g_882
        (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x18F9L), 0x18F9L), 0x18F9L, 3L, 0x18F9L), // p_1212->g_888
        (VECTOR(uint32_t, 8))(0x3D20026DL, (VECTOR(uint32_t, 4))(0x3D20026DL, (VECTOR(uint32_t, 2))(0x3D20026DL, 0xD5C647D3L), 0xD5C647D3L), 0xD5C647D3L, 0x3D20026DL, 0xD5C647D3L), // p_1212->g_894
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL), // p_1212->g_896
        (VECTOR(uint8_t, 16))(0x47L, (VECTOR(uint8_t, 4))(0x47L, (VECTOR(uint8_t, 2))(0x47L, 0xBFL), 0xBFL), 0xBFL, 0x47L, 0xBFL, (VECTOR(uint8_t, 2))(0x47L, 0xBFL), (VECTOR(uint8_t, 2))(0x47L, 0xBFL), 0x47L, 0xBFL, 0x47L, 0xBFL), // p_1212->g_909
        (void*)0, // p_1212->g_910
        (VECTOR(int8_t, 8))(0x76L, (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 0L), 0L), 0L, 0x76L, 0L), // p_1212->g_937
        (VECTOR(int16_t, 4))(0x4F24L, (VECTOR(int16_t, 2))(0x4F24L, 0x759CL), 0x759CL), // p_1212->g_948
        &p_1212->g_80, // p_1212->g_956
        &p_1212->g_956, // p_1212->g_955
        (VECTOR(uint32_t, 16))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x628D0ECCL), 0x628D0ECCL), 0x628D0ECCL, 4294967292UL, 0x628D0ECCL, (VECTOR(uint32_t, 2))(4294967292UL, 0x628D0ECCL), (VECTOR(uint32_t, 2))(4294967292UL, 0x628D0ECCL), 4294967292UL, 0x628D0ECCL, 4294967292UL, 0x628D0ECCL), // p_1212->g_963
        {{{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL}},{{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL}},{{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL}},{{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL}},{{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL}},{{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL}},{{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL}},{{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL}},{{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL},{0x26L,0UL,1UL,255UL,255UL,1UL}}}, // p_1212->g_982
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-4L)), (-4L)), // p_1212->g_990
        (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x0980L), 0x0980L), 0x0980L, 65527UL, 0x0980L, (VECTOR(uint16_t, 2))(65527UL, 0x0980L), (VECTOR(uint16_t, 2))(65527UL, 0x0980L), 65527UL, 0x0980L, 65527UL, 0x0980L), // p_1212->g_994
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x267E69364C21709CL), 0x267E69364C21709CL), // p_1212->g_1004
        (VECTOR(int64_t, 8))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, (-2L)), (-2L)), (-2L), 7L, (-2L)), // p_1212->g_1005
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), // p_1212->g_1006
        (VECTOR(int16_t, 16))(0x4407L, (VECTOR(int16_t, 4))(0x4407L, (VECTOR(int16_t, 2))(0x4407L, (-1L)), (-1L)), (-1L), 0x4407L, (-1L), (VECTOR(int16_t, 2))(0x4407L, (-1L)), (VECTOR(int16_t, 2))(0x4407L, (-1L)), 0x4407L, (-1L), 0x4407L, (-1L)), // p_1212->g_1017
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6A3AL), 0x6A3AL), // p_1212->g_1038
        (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x7DL), 0x7DL), 0x7DL, 3UL, 0x7DL), // p_1212->g_1063
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L)), // p_1212->g_1064
        (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 3L), 3L), // p_1212->g_1065
        (VECTOR(int64_t, 8))(0x1A92CCE213DE5123L, (VECTOR(int64_t, 4))(0x1A92CCE213DE5123L, (VECTOR(int64_t, 2))(0x1A92CCE213DE5123L, 0x1C2C24487AB19A40L), 0x1C2C24487AB19A40L), 0x1C2C24487AB19A40L, 0x1A92CCE213DE5123L, 0x1C2C24487AB19A40L), // p_1212->g_1066
        (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x7DL), 0x7DL), 0x7DL, (-5L), 0x7DL, (VECTOR(int8_t, 2))((-5L), 0x7DL), (VECTOR(int8_t, 2))((-5L), 0x7DL), (-5L), 0x7DL, (-5L), 0x7DL), // p_1212->g_1070
        (void*)0, // p_1212->g_1072
        &p_1212->g_1072, // p_1212->g_1071
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x250E982BL), 0x250E982BL), 0x250E982BL, 4294967295UL, 0x250E982BL), // p_1212->g_1084
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint8_t, 2))(1UL, 0UL), (VECTOR(uint8_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_1212->g_1141
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967286UL), 4294967286UL), 4294967286UL, 0UL, 4294967286UL), // p_1212->g_1144
        (VECTOR(uint32_t, 8))(0x890744CEL, (VECTOR(uint32_t, 4))(0x890744CEL, (VECTOR(uint32_t, 2))(0x890744CEL, 0x290E5065L), 0x290E5065L), 0x290E5065L, 0x890744CEL, 0x290E5065L), // p_1212->g_1145
        (VECTOR(uint32_t, 4))(0x8690F196L, (VECTOR(uint32_t, 2))(0x8690F196L, 0x34E3D4B5L), 0x34E3D4B5L), // p_1212->g_1147
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-4L)), (-4L)), (-4L), (-1L), (-4L), (VECTOR(int32_t, 2))((-1L), (-4L)), (VECTOR(int32_t, 2))((-1L), (-4L)), (-1L), (-4L), (-1L), (-4L)), // p_1212->g_1170
        (VECTOR(uint32_t, 4))(0x3149A8FFL, (VECTOR(uint32_t, 2))(0x3149A8FFL, 0xCCA6CD04L), 0xCCA6CD04L), // p_1212->g_1178
        {0x516732BCL}, // p_1212->g_1185
        (void*)0, // p_1212->g_1211
        0, // p_1212->v_collective
        sequence_input[get_global_id(0)], // p_1212->global_0_offset
        sequence_input[get_global_id(1)], // p_1212->global_1_offset
        sequence_input[get_global_id(2)], // p_1212->global_2_offset
        sequence_input[get_local_id(0)], // p_1212->local_0_offset
        sequence_input[get_local_id(1)], // p_1212->local_1_offset
        sequence_input[get_local_id(2)], // p_1212->local_2_offset
        sequence_input[get_group_id(0)], // p_1212->group_0_offset
        sequence_input[get_group_id(1)], // p_1212->group_1_offset
        sequence_input[get_group_id(2)], // p_1212->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 51)), permutations[0][get_linear_local_id()])), // p_1212->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1213 = c_1214;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1212);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1212->g_2, "p_1212->g_2", print_hash_value);
    transparent_crc(p_1212->g_10.s0, "p_1212->g_10.s0", print_hash_value);
    transparent_crc(p_1212->g_10.s1, "p_1212->g_10.s1", print_hash_value);
    transparent_crc(p_1212->g_10.s2, "p_1212->g_10.s2", print_hash_value);
    transparent_crc(p_1212->g_10.s3, "p_1212->g_10.s3", print_hash_value);
    transparent_crc(p_1212->g_10.s4, "p_1212->g_10.s4", print_hash_value);
    transparent_crc(p_1212->g_10.s5, "p_1212->g_10.s5", print_hash_value);
    transparent_crc(p_1212->g_10.s6, "p_1212->g_10.s6", print_hash_value);
    transparent_crc(p_1212->g_10.s7, "p_1212->g_10.s7", print_hash_value);
    transparent_crc(p_1212->g_10.s8, "p_1212->g_10.s8", print_hash_value);
    transparent_crc(p_1212->g_10.s9, "p_1212->g_10.s9", print_hash_value);
    transparent_crc(p_1212->g_10.sa, "p_1212->g_10.sa", print_hash_value);
    transparent_crc(p_1212->g_10.sb, "p_1212->g_10.sb", print_hash_value);
    transparent_crc(p_1212->g_10.sc, "p_1212->g_10.sc", print_hash_value);
    transparent_crc(p_1212->g_10.sd, "p_1212->g_10.sd", print_hash_value);
    transparent_crc(p_1212->g_10.se, "p_1212->g_10.se", print_hash_value);
    transparent_crc(p_1212->g_10.sf, "p_1212->g_10.sf", print_hash_value);
    transparent_crc(p_1212->g_11.s0, "p_1212->g_11.s0", print_hash_value);
    transparent_crc(p_1212->g_11.s1, "p_1212->g_11.s1", print_hash_value);
    transparent_crc(p_1212->g_11.s2, "p_1212->g_11.s2", print_hash_value);
    transparent_crc(p_1212->g_11.s3, "p_1212->g_11.s3", print_hash_value);
    transparent_crc(p_1212->g_11.s4, "p_1212->g_11.s4", print_hash_value);
    transparent_crc(p_1212->g_11.s5, "p_1212->g_11.s5", print_hash_value);
    transparent_crc(p_1212->g_11.s6, "p_1212->g_11.s6", print_hash_value);
    transparent_crc(p_1212->g_11.s7, "p_1212->g_11.s7", print_hash_value);
    transparent_crc(p_1212->g_11.s8, "p_1212->g_11.s8", print_hash_value);
    transparent_crc(p_1212->g_11.s9, "p_1212->g_11.s9", print_hash_value);
    transparent_crc(p_1212->g_11.sa, "p_1212->g_11.sa", print_hash_value);
    transparent_crc(p_1212->g_11.sb, "p_1212->g_11.sb", print_hash_value);
    transparent_crc(p_1212->g_11.sc, "p_1212->g_11.sc", print_hash_value);
    transparent_crc(p_1212->g_11.sd, "p_1212->g_11.sd", print_hash_value);
    transparent_crc(p_1212->g_11.se, "p_1212->g_11.se", print_hash_value);
    transparent_crc(p_1212->g_11.sf, "p_1212->g_11.sf", print_hash_value);
    transparent_crc(p_1212->g_47.s0, "p_1212->g_47.s0", print_hash_value);
    transparent_crc(p_1212->g_47.s1, "p_1212->g_47.s1", print_hash_value);
    transparent_crc(p_1212->g_47.s2, "p_1212->g_47.s2", print_hash_value);
    transparent_crc(p_1212->g_47.s3, "p_1212->g_47.s3", print_hash_value);
    transparent_crc(p_1212->g_47.s4, "p_1212->g_47.s4", print_hash_value);
    transparent_crc(p_1212->g_47.s5, "p_1212->g_47.s5", print_hash_value);
    transparent_crc(p_1212->g_47.s6, "p_1212->g_47.s6", print_hash_value);
    transparent_crc(p_1212->g_47.s7, "p_1212->g_47.s7", print_hash_value);
    transparent_crc(p_1212->g_65.s0, "p_1212->g_65.s0", print_hash_value);
    transparent_crc(p_1212->g_65.s1, "p_1212->g_65.s1", print_hash_value);
    transparent_crc(p_1212->g_65.s2, "p_1212->g_65.s2", print_hash_value);
    transparent_crc(p_1212->g_65.s3, "p_1212->g_65.s3", print_hash_value);
    transparent_crc(p_1212->g_65.s4, "p_1212->g_65.s4", print_hash_value);
    transparent_crc(p_1212->g_65.s5, "p_1212->g_65.s5", print_hash_value);
    transparent_crc(p_1212->g_65.s6, "p_1212->g_65.s6", print_hash_value);
    transparent_crc(p_1212->g_65.s7, "p_1212->g_65.s7", print_hash_value);
    transparent_crc(p_1212->g_69, "p_1212->g_69", print_hash_value);
    transparent_crc(p_1212->g_146, "p_1212->g_146", print_hash_value);
    transparent_crc(p_1212->g_147.s0, "p_1212->g_147.s0", print_hash_value);
    transparent_crc(p_1212->g_147.s1, "p_1212->g_147.s1", print_hash_value);
    transparent_crc(p_1212->g_147.s2, "p_1212->g_147.s2", print_hash_value);
    transparent_crc(p_1212->g_147.s3, "p_1212->g_147.s3", print_hash_value);
    transparent_crc(p_1212->g_147.s4, "p_1212->g_147.s4", print_hash_value);
    transparent_crc(p_1212->g_147.s5, "p_1212->g_147.s5", print_hash_value);
    transparent_crc(p_1212->g_147.s6, "p_1212->g_147.s6", print_hash_value);
    transparent_crc(p_1212->g_147.s7, "p_1212->g_147.s7", print_hash_value);
    transparent_crc(p_1212->g_147.s8, "p_1212->g_147.s8", print_hash_value);
    transparent_crc(p_1212->g_147.s9, "p_1212->g_147.s9", print_hash_value);
    transparent_crc(p_1212->g_147.sa, "p_1212->g_147.sa", print_hash_value);
    transparent_crc(p_1212->g_147.sb, "p_1212->g_147.sb", print_hash_value);
    transparent_crc(p_1212->g_147.sc, "p_1212->g_147.sc", print_hash_value);
    transparent_crc(p_1212->g_147.sd, "p_1212->g_147.sd", print_hash_value);
    transparent_crc(p_1212->g_147.se, "p_1212->g_147.se", print_hash_value);
    transparent_crc(p_1212->g_147.sf, "p_1212->g_147.sf", print_hash_value);
    transparent_crc(p_1212->g_148.s0, "p_1212->g_148.s0", print_hash_value);
    transparent_crc(p_1212->g_148.s1, "p_1212->g_148.s1", print_hash_value);
    transparent_crc(p_1212->g_148.s2, "p_1212->g_148.s2", print_hash_value);
    transparent_crc(p_1212->g_148.s3, "p_1212->g_148.s3", print_hash_value);
    transparent_crc(p_1212->g_148.s4, "p_1212->g_148.s4", print_hash_value);
    transparent_crc(p_1212->g_148.s5, "p_1212->g_148.s5", print_hash_value);
    transparent_crc(p_1212->g_148.s6, "p_1212->g_148.s6", print_hash_value);
    transparent_crc(p_1212->g_148.s7, "p_1212->g_148.s7", print_hash_value);
    transparent_crc(p_1212->g_148.s8, "p_1212->g_148.s8", print_hash_value);
    transparent_crc(p_1212->g_148.s9, "p_1212->g_148.s9", print_hash_value);
    transparent_crc(p_1212->g_148.sa, "p_1212->g_148.sa", print_hash_value);
    transparent_crc(p_1212->g_148.sb, "p_1212->g_148.sb", print_hash_value);
    transparent_crc(p_1212->g_148.sc, "p_1212->g_148.sc", print_hash_value);
    transparent_crc(p_1212->g_148.sd, "p_1212->g_148.sd", print_hash_value);
    transparent_crc(p_1212->g_148.se, "p_1212->g_148.se", print_hash_value);
    transparent_crc(p_1212->g_148.sf, "p_1212->g_148.sf", print_hash_value);
    transparent_crc(p_1212->g_156, "p_1212->g_156", print_hash_value);
    transparent_crc(p_1212->g_200, "p_1212->g_200", print_hash_value);
    transparent_crc(p_1212->g_212.x, "p_1212->g_212.x", print_hash_value);
    transparent_crc(p_1212->g_212.y, "p_1212->g_212.y", print_hash_value);
    transparent_crc(p_1212->g_213.s0, "p_1212->g_213.s0", print_hash_value);
    transparent_crc(p_1212->g_213.s1, "p_1212->g_213.s1", print_hash_value);
    transparent_crc(p_1212->g_213.s2, "p_1212->g_213.s2", print_hash_value);
    transparent_crc(p_1212->g_213.s3, "p_1212->g_213.s3", print_hash_value);
    transparent_crc(p_1212->g_213.s4, "p_1212->g_213.s4", print_hash_value);
    transparent_crc(p_1212->g_213.s5, "p_1212->g_213.s5", print_hash_value);
    transparent_crc(p_1212->g_213.s6, "p_1212->g_213.s6", print_hash_value);
    transparent_crc(p_1212->g_213.s7, "p_1212->g_213.s7", print_hash_value);
    transparent_crc(p_1212->g_213.s8, "p_1212->g_213.s8", print_hash_value);
    transparent_crc(p_1212->g_213.s9, "p_1212->g_213.s9", print_hash_value);
    transparent_crc(p_1212->g_213.sa, "p_1212->g_213.sa", print_hash_value);
    transparent_crc(p_1212->g_213.sb, "p_1212->g_213.sb", print_hash_value);
    transparent_crc(p_1212->g_213.sc, "p_1212->g_213.sc", print_hash_value);
    transparent_crc(p_1212->g_213.sd, "p_1212->g_213.sd", print_hash_value);
    transparent_crc(p_1212->g_213.se, "p_1212->g_213.se", print_hash_value);
    transparent_crc(p_1212->g_213.sf, "p_1212->g_213.sf", print_hash_value);
    transparent_crc(p_1212->g_214.s0, "p_1212->g_214.s0", print_hash_value);
    transparent_crc(p_1212->g_214.s1, "p_1212->g_214.s1", print_hash_value);
    transparent_crc(p_1212->g_214.s2, "p_1212->g_214.s2", print_hash_value);
    transparent_crc(p_1212->g_214.s3, "p_1212->g_214.s3", print_hash_value);
    transparent_crc(p_1212->g_214.s4, "p_1212->g_214.s4", print_hash_value);
    transparent_crc(p_1212->g_214.s5, "p_1212->g_214.s5", print_hash_value);
    transparent_crc(p_1212->g_214.s6, "p_1212->g_214.s6", print_hash_value);
    transparent_crc(p_1212->g_214.s7, "p_1212->g_214.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1212->g_225[i], "p_1212->g_225[i]", print_hash_value);

    }
    transparent_crc(p_1212->g_238.x, "p_1212->g_238.x", print_hash_value);
    transparent_crc(p_1212->g_238.y, "p_1212->g_238.y", print_hash_value);
    transparent_crc(p_1212->g_238.z, "p_1212->g_238.z", print_hash_value);
    transparent_crc(p_1212->g_238.w, "p_1212->g_238.w", print_hash_value);
    transparent_crc(p_1212->g_251, "p_1212->g_251", print_hash_value);
    transparent_crc(p_1212->g_263.f0, "p_1212->g_263.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1212->g_301[i][j][k], "p_1212->g_301[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1212->g_308.s0, "p_1212->g_308.s0", print_hash_value);
    transparent_crc(p_1212->g_308.s1, "p_1212->g_308.s1", print_hash_value);
    transparent_crc(p_1212->g_308.s2, "p_1212->g_308.s2", print_hash_value);
    transparent_crc(p_1212->g_308.s3, "p_1212->g_308.s3", print_hash_value);
    transparent_crc(p_1212->g_308.s4, "p_1212->g_308.s4", print_hash_value);
    transparent_crc(p_1212->g_308.s5, "p_1212->g_308.s5", print_hash_value);
    transparent_crc(p_1212->g_308.s6, "p_1212->g_308.s6", print_hash_value);
    transparent_crc(p_1212->g_308.s7, "p_1212->g_308.s7", print_hash_value);
    transparent_crc(p_1212->g_314.s0, "p_1212->g_314.s0", print_hash_value);
    transparent_crc(p_1212->g_314.s1, "p_1212->g_314.s1", print_hash_value);
    transparent_crc(p_1212->g_314.s2, "p_1212->g_314.s2", print_hash_value);
    transparent_crc(p_1212->g_314.s3, "p_1212->g_314.s3", print_hash_value);
    transparent_crc(p_1212->g_314.s4, "p_1212->g_314.s4", print_hash_value);
    transparent_crc(p_1212->g_314.s5, "p_1212->g_314.s5", print_hash_value);
    transparent_crc(p_1212->g_314.s6, "p_1212->g_314.s6", print_hash_value);
    transparent_crc(p_1212->g_314.s7, "p_1212->g_314.s7", print_hash_value);
    transparent_crc(p_1212->g_339.x, "p_1212->g_339.x", print_hash_value);
    transparent_crc(p_1212->g_339.y, "p_1212->g_339.y", print_hash_value);
    transparent_crc(p_1212->g_349.x, "p_1212->g_349.x", print_hash_value);
    transparent_crc(p_1212->g_349.y, "p_1212->g_349.y", print_hash_value);
    transparent_crc(p_1212->g_349.z, "p_1212->g_349.z", print_hash_value);
    transparent_crc(p_1212->g_349.w, "p_1212->g_349.w", print_hash_value);
    transparent_crc(p_1212->g_392, "p_1212->g_392", print_hash_value);
    transparent_crc(p_1212->g_414, "p_1212->g_414", print_hash_value);
    transparent_crc(p_1212->g_417.x, "p_1212->g_417.x", print_hash_value);
    transparent_crc(p_1212->g_417.y, "p_1212->g_417.y", print_hash_value);
    transparent_crc(p_1212->g_417.z, "p_1212->g_417.z", print_hash_value);
    transparent_crc(p_1212->g_417.w, "p_1212->g_417.w", print_hash_value);
    transparent_crc(p_1212->g_438.s0, "p_1212->g_438.s0", print_hash_value);
    transparent_crc(p_1212->g_438.s1, "p_1212->g_438.s1", print_hash_value);
    transparent_crc(p_1212->g_438.s2, "p_1212->g_438.s2", print_hash_value);
    transparent_crc(p_1212->g_438.s3, "p_1212->g_438.s3", print_hash_value);
    transparent_crc(p_1212->g_438.s4, "p_1212->g_438.s4", print_hash_value);
    transparent_crc(p_1212->g_438.s5, "p_1212->g_438.s5", print_hash_value);
    transparent_crc(p_1212->g_438.s6, "p_1212->g_438.s6", print_hash_value);
    transparent_crc(p_1212->g_438.s7, "p_1212->g_438.s7", print_hash_value);
    transparent_crc(p_1212->g_736.s0, "p_1212->g_736.s0", print_hash_value);
    transparent_crc(p_1212->g_736.s1, "p_1212->g_736.s1", print_hash_value);
    transparent_crc(p_1212->g_736.s2, "p_1212->g_736.s2", print_hash_value);
    transparent_crc(p_1212->g_736.s3, "p_1212->g_736.s3", print_hash_value);
    transparent_crc(p_1212->g_736.s4, "p_1212->g_736.s4", print_hash_value);
    transparent_crc(p_1212->g_736.s5, "p_1212->g_736.s5", print_hash_value);
    transparent_crc(p_1212->g_736.s6, "p_1212->g_736.s6", print_hash_value);
    transparent_crc(p_1212->g_736.s7, "p_1212->g_736.s7", print_hash_value);
    transparent_crc(p_1212->g_752, "p_1212->g_752", print_hash_value);
    transparent_crc(p_1212->g_790.f0, "p_1212->g_790.f0", print_hash_value);
    transparent_crc(p_1212->g_812, "p_1212->g_812", print_hash_value);
    transparent_crc(p_1212->g_821, "p_1212->g_821", print_hash_value);
    transparent_crc(p_1212->g_852.s0, "p_1212->g_852.s0", print_hash_value);
    transparent_crc(p_1212->g_852.s1, "p_1212->g_852.s1", print_hash_value);
    transparent_crc(p_1212->g_852.s2, "p_1212->g_852.s2", print_hash_value);
    transparent_crc(p_1212->g_852.s3, "p_1212->g_852.s3", print_hash_value);
    transparent_crc(p_1212->g_852.s4, "p_1212->g_852.s4", print_hash_value);
    transparent_crc(p_1212->g_852.s5, "p_1212->g_852.s5", print_hash_value);
    transparent_crc(p_1212->g_852.s6, "p_1212->g_852.s6", print_hash_value);
    transparent_crc(p_1212->g_852.s7, "p_1212->g_852.s7", print_hash_value);
    transparent_crc(p_1212->g_852.s8, "p_1212->g_852.s8", print_hash_value);
    transparent_crc(p_1212->g_852.s9, "p_1212->g_852.s9", print_hash_value);
    transparent_crc(p_1212->g_852.sa, "p_1212->g_852.sa", print_hash_value);
    transparent_crc(p_1212->g_852.sb, "p_1212->g_852.sb", print_hash_value);
    transparent_crc(p_1212->g_852.sc, "p_1212->g_852.sc", print_hash_value);
    transparent_crc(p_1212->g_852.sd, "p_1212->g_852.sd", print_hash_value);
    transparent_crc(p_1212->g_852.se, "p_1212->g_852.se", print_hash_value);
    transparent_crc(p_1212->g_852.sf, "p_1212->g_852.sf", print_hash_value);
    transparent_crc(p_1212->g_867.x, "p_1212->g_867.x", print_hash_value);
    transparent_crc(p_1212->g_867.y, "p_1212->g_867.y", print_hash_value);
    transparent_crc(p_1212->g_867.z, "p_1212->g_867.z", print_hash_value);
    transparent_crc(p_1212->g_867.w, "p_1212->g_867.w", print_hash_value);
    transparent_crc(p_1212->g_868.x, "p_1212->g_868.x", print_hash_value);
    transparent_crc(p_1212->g_868.y, "p_1212->g_868.y", print_hash_value);
    transparent_crc(p_1212->g_888.s0, "p_1212->g_888.s0", print_hash_value);
    transparent_crc(p_1212->g_888.s1, "p_1212->g_888.s1", print_hash_value);
    transparent_crc(p_1212->g_888.s2, "p_1212->g_888.s2", print_hash_value);
    transparent_crc(p_1212->g_888.s3, "p_1212->g_888.s3", print_hash_value);
    transparent_crc(p_1212->g_888.s4, "p_1212->g_888.s4", print_hash_value);
    transparent_crc(p_1212->g_888.s5, "p_1212->g_888.s5", print_hash_value);
    transparent_crc(p_1212->g_888.s6, "p_1212->g_888.s6", print_hash_value);
    transparent_crc(p_1212->g_888.s7, "p_1212->g_888.s7", print_hash_value);
    transparent_crc(p_1212->g_894.s0, "p_1212->g_894.s0", print_hash_value);
    transparent_crc(p_1212->g_894.s1, "p_1212->g_894.s1", print_hash_value);
    transparent_crc(p_1212->g_894.s2, "p_1212->g_894.s2", print_hash_value);
    transparent_crc(p_1212->g_894.s3, "p_1212->g_894.s3", print_hash_value);
    transparent_crc(p_1212->g_894.s4, "p_1212->g_894.s4", print_hash_value);
    transparent_crc(p_1212->g_894.s5, "p_1212->g_894.s5", print_hash_value);
    transparent_crc(p_1212->g_894.s6, "p_1212->g_894.s6", print_hash_value);
    transparent_crc(p_1212->g_894.s7, "p_1212->g_894.s7", print_hash_value);
    transparent_crc(p_1212->g_896.s0, "p_1212->g_896.s0", print_hash_value);
    transparent_crc(p_1212->g_896.s1, "p_1212->g_896.s1", print_hash_value);
    transparent_crc(p_1212->g_896.s2, "p_1212->g_896.s2", print_hash_value);
    transparent_crc(p_1212->g_896.s3, "p_1212->g_896.s3", print_hash_value);
    transparent_crc(p_1212->g_896.s4, "p_1212->g_896.s4", print_hash_value);
    transparent_crc(p_1212->g_896.s5, "p_1212->g_896.s5", print_hash_value);
    transparent_crc(p_1212->g_896.s6, "p_1212->g_896.s6", print_hash_value);
    transparent_crc(p_1212->g_896.s7, "p_1212->g_896.s7", print_hash_value);
    transparent_crc(p_1212->g_896.s8, "p_1212->g_896.s8", print_hash_value);
    transparent_crc(p_1212->g_896.s9, "p_1212->g_896.s9", print_hash_value);
    transparent_crc(p_1212->g_896.sa, "p_1212->g_896.sa", print_hash_value);
    transparent_crc(p_1212->g_896.sb, "p_1212->g_896.sb", print_hash_value);
    transparent_crc(p_1212->g_896.sc, "p_1212->g_896.sc", print_hash_value);
    transparent_crc(p_1212->g_896.sd, "p_1212->g_896.sd", print_hash_value);
    transparent_crc(p_1212->g_896.se, "p_1212->g_896.se", print_hash_value);
    transparent_crc(p_1212->g_896.sf, "p_1212->g_896.sf", print_hash_value);
    transparent_crc(p_1212->g_909.s0, "p_1212->g_909.s0", print_hash_value);
    transparent_crc(p_1212->g_909.s1, "p_1212->g_909.s1", print_hash_value);
    transparent_crc(p_1212->g_909.s2, "p_1212->g_909.s2", print_hash_value);
    transparent_crc(p_1212->g_909.s3, "p_1212->g_909.s3", print_hash_value);
    transparent_crc(p_1212->g_909.s4, "p_1212->g_909.s4", print_hash_value);
    transparent_crc(p_1212->g_909.s5, "p_1212->g_909.s5", print_hash_value);
    transparent_crc(p_1212->g_909.s6, "p_1212->g_909.s6", print_hash_value);
    transparent_crc(p_1212->g_909.s7, "p_1212->g_909.s7", print_hash_value);
    transparent_crc(p_1212->g_909.s8, "p_1212->g_909.s8", print_hash_value);
    transparent_crc(p_1212->g_909.s9, "p_1212->g_909.s9", print_hash_value);
    transparent_crc(p_1212->g_909.sa, "p_1212->g_909.sa", print_hash_value);
    transparent_crc(p_1212->g_909.sb, "p_1212->g_909.sb", print_hash_value);
    transparent_crc(p_1212->g_909.sc, "p_1212->g_909.sc", print_hash_value);
    transparent_crc(p_1212->g_909.sd, "p_1212->g_909.sd", print_hash_value);
    transparent_crc(p_1212->g_909.se, "p_1212->g_909.se", print_hash_value);
    transparent_crc(p_1212->g_909.sf, "p_1212->g_909.sf", print_hash_value);
    transparent_crc(p_1212->g_937.s0, "p_1212->g_937.s0", print_hash_value);
    transparent_crc(p_1212->g_937.s1, "p_1212->g_937.s1", print_hash_value);
    transparent_crc(p_1212->g_937.s2, "p_1212->g_937.s2", print_hash_value);
    transparent_crc(p_1212->g_937.s3, "p_1212->g_937.s3", print_hash_value);
    transparent_crc(p_1212->g_937.s4, "p_1212->g_937.s4", print_hash_value);
    transparent_crc(p_1212->g_937.s5, "p_1212->g_937.s5", print_hash_value);
    transparent_crc(p_1212->g_937.s6, "p_1212->g_937.s6", print_hash_value);
    transparent_crc(p_1212->g_937.s7, "p_1212->g_937.s7", print_hash_value);
    transparent_crc(p_1212->g_948.x, "p_1212->g_948.x", print_hash_value);
    transparent_crc(p_1212->g_948.y, "p_1212->g_948.y", print_hash_value);
    transparent_crc(p_1212->g_948.z, "p_1212->g_948.z", print_hash_value);
    transparent_crc(p_1212->g_948.w, "p_1212->g_948.w", print_hash_value);
    transparent_crc(p_1212->g_963.s0, "p_1212->g_963.s0", print_hash_value);
    transparent_crc(p_1212->g_963.s1, "p_1212->g_963.s1", print_hash_value);
    transparent_crc(p_1212->g_963.s2, "p_1212->g_963.s2", print_hash_value);
    transparent_crc(p_1212->g_963.s3, "p_1212->g_963.s3", print_hash_value);
    transparent_crc(p_1212->g_963.s4, "p_1212->g_963.s4", print_hash_value);
    transparent_crc(p_1212->g_963.s5, "p_1212->g_963.s5", print_hash_value);
    transparent_crc(p_1212->g_963.s6, "p_1212->g_963.s6", print_hash_value);
    transparent_crc(p_1212->g_963.s7, "p_1212->g_963.s7", print_hash_value);
    transparent_crc(p_1212->g_963.s8, "p_1212->g_963.s8", print_hash_value);
    transparent_crc(p_1212->g_963.s9, "p_1212->g_963.s9", print_hash_value);
    transparent_crc(p_1212->g_963.sa, "p_1212->g_963.sa", print_hash_value);
    transparent_crc(p_1212->g_963.sb, "p_1212->g_963.sb", print_hash_value);
    transparent_crc(p_1212->g_963.sc, "p_1212->g_963.sc", print_hash_value);
    transparent_crc(p_1212->g_963.sd, "p_1212->g_963.sd", print_hash_value);
    transparent_crc(p_1212->g_963.se, "p_1212->g_963.se", print_hash_value);
    transparent_crc(p_1212->g_963.sf, "p_1212->g_963.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1212->g_982[i][j][k], "p_1212->g_982[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1212->g_990.x, "p_1212->g_990.x", print_hash_value);
    transparent_crc(p_1212->g_990.y, "p_1212->g_990.y", print_hash_value);
    transparent_crc(p_1212->g_990.z, "p_1212->g_990.z", print_hash_value);
    transparent_crc(p_1212->g_990.w, "p_1212->g_990.w", print_hash_value);
    transparent_crc(p_1212->g_994.s0, "p_1212->g_994.s0", print_hash_value);
    transparent_crc(p_1212->g_994.s1, "p_1212->g_994.s1", print_hash_value);
    transparent_crc(p_1212->g_994.s2, "p_1212->g_994.s2", print_hash_value);
    transparent_crc(p_1212->g_994.s3, "p_1212->g_994.s3", print_hash_value);
    transparent_crc(p_1212->g_994.s4, "p_1212->g_994.s4", print_hash_value);
    transparent_crc(p_1212->g_994.s5, "p_1212->g_994.s5", print_hash_value);
    transparent_crc(p_1212->g_994.s6, "p_1212->g_994.s6", print_hash_value);
    transparent_crc(p_1212->g_994.s7, "p_1212->g_994.s7", print_hash_value);
    transparent_crc(p_1212->g_994.s8, "p_1212->g_994.s8", print_hash_value);
    transparent_crc(p_1212->g_994.s9, "p_1212->g_994.s9", print_hash_value);
    transparent_crc(p_1212->g_994.sa, "p_1212->g_994.sa", print_hash_value);
    transparent_crc(p_1212->g_994.sb, "p_1212->g_994.sb", print_hash_value);
    transparent_crc(p_1212->g_994.sc, "p_1212->g_994.sc", print_hash_value);
    transparent_crc(p_1212->g_994.sd, "p_1212->g_994.sd", print_hash_value);
    transparent_crc(p_1212->g_994.se, "p_1212->g_994.se", print_hash_value);
    transparent_crc(p_1212->g_994.sf, "p_1212->g_994.sf", print_hash_value);
    transparent_crc(p_1212->g_1004.x, "p_1212->g_1004.x", print_hash_value);
    transparent_crc(p_1212->g_1004.y, "p_1212->g_1004.y", print_hash_value);
    transparent_crc(p_1212->g_1004.z, "p_1212->g_1004.z", print_hash_value);
    transparent_crc(p_1212->g_1004.w, "p_1212->g_1004.w", print_hash_value);
    transparent_crc(p_1212->g_1005.s0, "p_1212->g_1005.s0", print_hash_value);
    transparent_crc(p_1212->g_1005.s1, "p_1212->g_1005.s1", print_hash_value);
    transparent_crc(p_1212->g_1005.s2, "p_1212->g_1005.s2", print_hash_value);
    transparent_crc(p_1212->g_1005.s3, "p_1212->g_1005.s3", print_hash_value);
    transparent_crc(p_1212->g_1005.s4, "p_1212->g_1005.s4", print_hash_value);
    transparent_crc(p_1212->g_1005.s5, "p_1212->g_1005.s5", print_hash_value);
    transparent_crc(p_1212->g_1005.s6, "p_1212->g_1005.s6", print_hash_value);
    transparent_crc(p_1212->g_1005.s7, "p_1212->g_1005.s7", print_hash_value);
    transparent_crc(p_1212->g_1006.x, "p_1212->g_1006.x", print_hash_value);
    transparent_crc(p_1212->g_1006.y, "p_1212->g_1006.y", print_hash_value);
    transparent_crc(p_1212->g_1006.z, "p_1212->g_1006.z", print_hash_value);
    transparent_crc(p_1212->g_1006.w, "p_1212->g_1006.w", print_hash_value);
    transparent_crc(p_1212->g_1017.s0, "p_1212->g_1017.s0", print_hash_value);
    transparent_crc(p_1212->g_1017.s1, "p_1212->g_1017.s1", print_hash_value);
    transparent_crc(p_1212->g_1017.s2, "p_1212->g_1017.s2", print_hash_value);
    transparent_crc(p_1212->g_1017.s3, "p_1212->g_1017.s3", print_hash_value);
    transparent_crc(p_1212->g_1017.s4, "p_1212->g_1017.s4", print_hash_value);
    transparent_crc(p_1212->g_1017.s5, "p_1212->g_1017.s5", print_hash_value);
    transparent_crc(p_1212->g_1017.s6, "p_1212->g_1017.s6", print_hash_value);
    transparent_crc(p_1212->g_1017.s7, "p_1212->g_1017.s7", print_hash_value);
    transparent_crc(p_1212->g_1017.s8, "p_1212->g_1017.s8", print_hash_value);
    transparent_crc(p_1212->g_1017.s9, "p_1212->g_1017.s9", print_hash_value);
    transparent_crc(p_1212->g_1017.sa, "p_1212->g_1017.sa", print_hash_value);
    transparent_crc(p_1212->g_1017.sb, "p_1212->g_1017.sb", print_hash_value);
    transparent_crc(p_1212->g_1017.sc, "p_1212->g_1017.sc", print_hash_value);
    transparent_crc(p_1212->g_1017.sd, "p_1212->g_1017.sd", print_hash_value);
    transparent_crc(p_1212->g_1017.se, "p_1212->g_1017.se", print_hash_value);
    transparent_crc(p_1212->g_1017.sf, "p_1212->g_1017.sf", print_hash_value);
    transparent_crc(p_1212->g_1038.x, "p_1212->g_1038.x", print_hash_value);
    transparent_crc(p_1212->g_1038.y, "p_1212->g_1038.y", print_hash_value);
    transparent_crc(p_1212->g_1038.z, "p_1212->g_1038.z", print_hash_value);
    transparent_crc(p_1212->g_1038.w, "p_1212->g_1038.w", print_hash_value);
    transparent_crc(p_1212->g_1063.s0, "p_1212->g_1063.s0", print_hash_value);
    transparent_crc(p_1212->g_1063.s1, "p_1212->g_1063.s1", print_hash_value);
    transparent_crc(p_1212->g_1063.s2, "p_1212->g_1063.s2", print_hash_value);
    transparent_crc(p_1212->g_1063.s3, "p_1212->g_1063.s3", print_hash_value);
    transparent_crc(p_1212->g_1063.s4, "p_1212->g_1063.s4", print_hash_value);
    transparent_crc(p_1212->g_1063.s5, "p_1212->g_1063.s5", print_hash_value);
    transparent_crc(p_1212->g_1063.s6, "p_1212->g_1063.s6", print_hash_value);
    transparent_crc(p_1212->g_1063.s7, "p_1212->g_1063.s7", print_hash_value);
    transparent_crc(p_1212->g_1064.s0, "p_1212->g_1064.s0", print_hash_value);
    transparent_crc(p_1212->g_1064.s1, "p_1212->g_1064.s1", print_hash_value);
    transparent_crc(p_1212->g_1064.s2, "p_1212->g_1064.s2", print_hash_value);
    transparent_crc(p_1212->g_1064.s3, "p_1212->g_1064.s3", print_hash_value);
    transparent_crc(p_1212->g_1064.s4, "p_1212->g_1064.s4", print_hash_value);
    transparent_crc(p_1212->g_1064.s5, "p_1212->g_1064.s5", print_hash_value);
    transparent_crc(p_1212->g_1064.s6, "p_1212->g_1064.s6", print_hash_value);
    transparent_crc(p_1212->g_1064.s7, "p_1212->g_1064.s7", print_hash_value);
    transparent_crc(p_1212->g_1065.x, "p_1212->g_1065.x", print_hash_value);
    transparent_crc(p_1212->g_1065.y, "p_1212->g_1065.y", print_hash_value);
    transparent_crc(p_1212->g_1065.z, "p_1212->g_1065.z", print_hash_value);
    transparent_crc(p_1212->g_1065.w, "p_1212->g_1065.w", print_hash_value);
    transparent_crc(p_1212->g_1066.s0, "p_1212->g_1066.s0", print_hash_value);
    transparent_crc(p_1212->g_1066.s1, "p_1212->g_1066.s1", print_hash_value);
    transparent_crc(p_1212->g_1066.s2, "p_1212->g_1066.s2", print_hash_value);
    transparent_crc(p_1212->g_1066.s3, "p_1212->g_1066.s3", print_hash_value);
    transparent_crc(p_1212->g_1066.s4, "p_1212->g_1066.s4", print_hash_value);
    transparent_crc(p_1212->g_1066.s5, "p_1212->g_1066.s5", print_hash_value);
    transparent_crc(p_1212->g_1066.s6, "p_1212->g_1066.s6", print_hash_value);
    transparent_crc(p_1212->g_1066.s7, "p_1212->g_1066.s7", print_hash_value);
    transparent_crc(p_1212->g_1070.s0, "p_1212->g_1070.s0", print_hash_value);
    transparent_crc(p_1212->g_1070.s1, "p_1212->g_1070.s1", print_hash_value);
    transparent_crc(p_1212->g_1070.s2, "p_1212->g_1070.s2", print_hash_value);
    transparent_crc(p_1212->g_1070.s3, "p_1212->g_1070.s3", print_hash_value);
    transparent_crc(p_1212->g_1070.s4, "p_1212->g_1070.s4", print_hash_value);
    transparent_crc(p_1212->g_1070.s5, "p_1212->g_1070.s5", print_hash_value);
    transparent_crc(p_1212->g_1070.s6, "p_1212->g_1070.s6", print_hash_value);
    transparent_crc(p_1212->g_1070.s7, "p_1212->g_1070.s7", print_hash_value);
    transparent_crc(p_1212->g_1070.s8, "p_1212->g_1070.s8", print_hash_value);
    transparent_crc(p_1212->g_1070.s9, "p_1212->g_1070.s9", print_hash_value);
    transparent_crc(p_1212->g_1070.sa, "p_1212->g_1070.sa", print_hash_value);
    transparent_crc(p_1212->g_1070.sb, "p_1212->g_1070.sb", print_hash_value);
    transparent_crc(p_1212->g_1070.sc, "p_1212->g_1070.sc", print_hash_value);
    transparent_crc(p_1212->g_1070.sd, "p_1212->g_1070.sd", print_hash_value);
    transparent_crc(p_1212->g_1070.se, "p_1212->g_1070.se", print_hash_value);
    transparent_crc(p_1212->g_1070.sf, "p_1212->g_1070.sf", print_hash_value);
    transparent_crc(p_1212->g_1084.s0, "p_1212->g_1084.s0", print_hash_value);
    transparent_crc(p_1212->g_1084.s1, "p_1212->g_1084.s1", print_hash_value);
    transparent_crc(p_1212->g_1084.s2, "p_1212->g_1084.s2", print_hash_value);
    transparent_crc(p_1212->g_1084.s3, "p_1212->g_1084.s3", print_hash_value);
    transparent_crc(p_1212->g_1084.s4, "p_1212->g_1084.s4", print_hash_value);
    transparent_crc(p_1212->g_1084.s5, "p_1212->g_1084.s5", print_hash_value);
    transparent_crc(p_1212->g_1084.s6, "p_1212->g_1084.s6", print_hash_value);
    transparent_crc(p_1212->g_1084.s7, "p_1212->g_1084.s7", print_hash_value);
    transparent_crc(p_1212->g_1141.s0, "p_1212->g_1141.s0", print_hash_value);
    transparent_crc(p_1212->g_1141.s1, "p_1212->g_1141.s1", print_hash_value);
    transparent_crc(p_1212->g_1141.s2, "p_1212->g_1141.s2", print_hash_value);
    transparent_crc(p_1212->g_1141.s3, "p_1212->g_1141.s3", print_hash_value);
    transparent_crc(p_1212->g_1141.s4, "p_1212->g_1141.s4", print_hash_value);
    transparent_crc(p_1212->g_1141.s5, "p_1212->g_1141.s5", print_hash_value);
    transparent_crc(p_1212->g_1141.s6, "p_1212->g_1141.s6", print_hash_value);
    transparent_crc(p_1212->g_1141.s7, "p_1212->g_1141.s7", print_hash_value);
    transparent_crc(p_1212->g_1141.s8, "p_1212->g_1141.s8", print_hash_value);
    transparent_crc(p_1212->g_1141.s9, "p_1212->g_1141.s9", print_hash_value);
    transparent_crc(p_1212->g_1141.sa, "p_1212->g_1141.sa", print_hash_value);
    transparent_crc(p_1212->g_1141.sb, "p_1212->g_1141.sb", print_hash_value);
    transparent_crc(p_1212->g_1141.sc, "p_1212->g_1141.sc", print_hash_value);
    transparent_crc(p_1212->g_1141.sd, "p_1212->g_1141.sd", print_hash_value);
    transparent_crc(p_1212->g_1141.se, "p_1212->g_1141.se", print_hash_value);
    transparent_crc(p_1212->g_1141.sf, "p_1212->g_1141.sf", print_hash_value);
    transparent_crc(p_1212->g_1144.s0, "p_1212->g_1144.s0", print_hash_value);
    transparent_crc(p_1212->g_1144.s1, "p_1212->g_1144.s1", print_hash_value);
    transparent_crc(p_1212->g_1144.s2, "p_1212->g_1144.s2", print_hash_value);
    transparent_crc(p_1212->g_1144.s3, "p_1212->g_1144.s3", print_hash_value);
    transparent_crc(p_1212->g_1144.s4, "p_1212->g_1144.s4", print_hash_value);
    transparent_crc(p_1212->g_1144.s5, "p_1212->g_1144.s5", print_hash_value);
    transparent_crc(p_1212->g_1144.s6, "p_1212->g_1144.s6", print_hash_value);
    transparent_crc(p_1212->g_1144.s7, "p_1212->g_1144.s7", print_hash_value);
    transparent_crc(p_1212->g_1145.s0, "p_1212->g_1145.s0", print_hash_value);
    transparent_crc(p_1212->g_1145.s1, "p_1212->g_1145.s1", print_hash_value);
    transparent_crc(p_1212->g_1145.s2, "p_1212->g_1145.s2", print_hash_value);
    transparent_crc(p_1212->g_1145.s3, "p_1212->g_1145.s3", print_hash_value);
    transparent_crc(p_1212->g_1145.s4, "p_1212->g_1145.s4", print_hash_value);
    transparent_crc(p_1212->g_1145.s5, "p_1212->g_1145.s5", print_hash_value);
    transparent_crc(p_1212->g_1145.s6, "p_1212->g_1145.s6", print_hash_value);
    transparent_crc(p_1212->g_1145.s7, "p_1212->g_1145.s7", print_hash_value);
    transparent_crc(p_1212->g_1147.x, "p_1212->g_1147.x", print_hash_value);
    transparent_crc(p_1212->g_1147.y, "p_1212->g_1147.y", print_hash_value);
    transparent_crc(p_1212->g_1147.z, "p_1212->g_1147.z", print_hash_value);
    transparent_crc(p_1212->g_1147.w, "p_1212->g_1147.w", print_hash_value);
    transparent_crc(p_1212->g_1170.s0, "p_1212->g_1170.s0", print_hash_value);
    transparent_crc(p_1212->g_1170.s1, "p_1212->g_1170.s1", print_hash_value);
    transparent_crc(p_1212->g_1170.s2, "p_1212->g_1170.s2", print_hash_value);
    transparent_crc(p_1212->g_1170.s3, "p_1212->g_1170.s3", print_hash_value);
    transparent_crc(p_1212->g_1170.s4, "p_1212->g_1170.s4", print_hash_value);
    transparent_crc(p_1212->g_1170.s5, "p_1212->g_1170.s5", print_hash_value);
    transparent_crc(p_1212->g_1170.s6, "p_1212->g_1170.s6", print_hash_value);
    transparent_crc(p_1212->g_1170.s7, "p_1212->g_1170.s7", print_hash_value);
    transparent_crc(p_1212->g_1170.s8, "p_1212->g_1170.s8", print_hash_value);
    transparent_crc(p_1212->g_1170.s9, "p_1212->g_1170.s9", print_hash_value);
    transparent_crc(p_1212->g_1170.sa, "p_1212->g_1170.sa", print_hash_value);
    transparent_crc(p_1212->g_1170.sb, "p_1212->g_1170.sb", print_hash_value);
    transparent_crc(p_1212->g_1170.sc, "p_1212->g_1170.sc", print_hash_value);
    transparent_crc(p_1212->g_1170.sd, "p_1212->g_1170.sd", print_hash_value);
    transparent_crc(p_1212->g_1170.se, "p_1212->g_1170.se", print_hash_value);
    transparent_crc(p_1212->g_1170.sf, "p_1212->g_1170.sf", print_hash_value);
    transparent_crc(p_1212->g_1178.x, "p_1212->g_1178.x", print_hash_value);
    transparent_crc(p_1212->g_1178.y, "p_1212->g_1178.y", print_hash_value);
    transparent_crc(p_1212->g_1178.z, "p_1212->g_1178.z", print_hash_value);
    transparent_crc(p_1212->g_1178.w, "p_1212->g_1178.w", print_hash_value);
    transparent_crc(p_1212->g_1185.f0, "p_1212->g_1185.f0", print_hash_value);
    transparent_crc(p_1212->v_collective, "p_1212->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 50; i++)
            transparent_crc(p_1212->g_special_values[i + 50 * get_linear_group_id()], "p_1212->g_special_values[i + 50 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 50; i++)
            transparent_crc(p_1212->l_special_values[i], "p_1212->l_special_values[i]", print_hash_value);
    transparent_crc(p_1212->l_comm_values[get_linear_local_id()], "p_1212->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1212->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()], "p_1212->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
