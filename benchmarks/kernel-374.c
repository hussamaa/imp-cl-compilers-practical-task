// --atomics 64 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 43,25,4 -l 43,1,1
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

__constant uint32_t permutations[10][43] = {
{5,18,34,7,1,4,2,35,26,6,24,37,3,41,27,14,32,33,40,13,25,11,23,36,31,9,10,28,17,15,29,8,20,42,16,39,19,0,22,30,21,12,38}, // permutation 0
{10,35,24,17,26,1,18,30,15,36,3,38,0,11,20,4,41,25,27,40,42,21,19,33,34,32,12,22,37,29,7,28,2,16,23,8,31,14,13,9,6,39,5}, // permutation 1
{8,3,26,5,7,30,2,14,12,13,39,29,1,37,20,10,32,0,35,24,21,18,33,41,23,27,31,38,4,42,16,28,11,22,15,9,40,25,17,36,19,6,34}, // permutation 2
{41,10,20,4,9,3,28,14,11,19,23,40,29,35,30,13,7,8,26,12,6,42,27,18,25,5,31,37,38,17,15,34,16,0,2,1,24,32,39,36,33,21,22}, // permutation 3
{2,0,8,31,9,18,27,20,28,30,42,41,15,14,22,1,21,39,37,40,13,32,7,11,26,24,10,19,35,3,23,33,6,25,38,4,36,5,34,17,12,16,29}, // permutation 4
{20,5,26,2,33,19,7,22,40,6,23,36,15,10,12,39,35,3,29,9,1,0,34,27,38,8,24,28,42,31,18,30,11,25,14,13,41,37,17,16,21,4,32}, // permutation 5
{11,35,4,21,40,25,18,28,14,39,33,42,29,27,16,26,34,5,30,3,19,23,6,41,13,10,0,32,7,38,9,31,17,24,22,8,1,37,15,2,12,36,20}, // permutation 6
{26,12,42,36,31,25,34,21,4,29,5,8,27,2,16,6,7,18,39,37,28,38,15,13,14,41,9,22,40,1,17,3,24,19,23,33,11,10,35,20,32,30,0}, // permutation 7
{25,21,12,26,41,37,32,22,27,4,31,40,19,6,8,17,1,36,39,10,2,15,16,9,38,35,33,3,5,28,13,11,29,0,18,7,14,24,34,23,20,42,30}, // permutation 8
{0,36,39,28,34,24,8,15,21,25,35,31,7,4,14,1,5,23,3,17,16,27,6,42,32,19,9,13,30,41,38,11,22,18,2,29,33,40,10,12,26,37,20} // permutation 9
};

// Seed: 532056296

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t  f0;
   int64_t  f1;
};

struct S1 {
    int32_t g_5;
    volatile VECTOR(int32_t, 2) g_6;
    volatile VECTOR(int16_t, 16) g_19;
    uint64_t g_21[8];
    uint32_t g_32;
    uint8_t g_42;
    int64_t g_44;
    uint64_t g_47;
    uint64_t *g_67;
    uint64_t * volatile *g_66;
    int32_t g_71;
    VECTOR(uint32_t, 8) g_77;
    union U0 g_86[4];
    uint8_t *g_97;
    uint8_t *g_99;
    int8_t g_101[6][7][6];
    int16_t g_102;
    VECTOR(uint32_t, 16) g_110;
    VECTOR(int32_t, 2) g_134;
    VECTOR(uint32_t, 16) g_139;
    VECTOR(uint8_t, 16) g_148;
    VECTOR(uint16_t, 16) g_151;
    VECTOR(uint32_t, 16) g_158;
    VECTOR(uint32_t, 2) g_161;
    VECTOR(int16_t, 4) g_170;
    uint16_t g_173;
    int32_t *g_189[6][2][4];
    int32_t **g_188[4];
    VECTOR(uint16_t, 4) g_212;
    VECTOR(int32_t, 16) g_303;
    int32_t g_313;
    VECTOR(int32_t, 16) g_317;
    union U0 g_400;
    uint64_t g_421;
    VECTOR(int64_t, 16) g_428;
    VECTOR(uint32_t, 16) g_447;
    int64_t *g_449;
    int64_t *g_450;
    uint8_t **g_457;
    VECTOR(int8_t, 8) g_583;
    VECTOR(uint16_t, 2) g_604;
    int8_t g_687;
    VECTOR(int16_t, 4) g_710;
    VECTOR(int16_t, 8) g_720;
    VECTOR(uint64_t, 4) g_726;
    VECTOR(uint64_t, 8) g_729;
    VECTOR(uint64_t, 16) g_791;
    VECTOR(int8_t, 2) g_792;
    int64_t g_805;
    uint32_t g_836[5];
    int32_t g_923;
    uint64_t *g_943;
    uint64_t **g_942;
    uint32_t g_944;
    union U0 *g_991;
    VECTOR(int32_t, 8) g_1010;
    VECTOR(int32_t, 8) g_1011;
    int32_t *g_1036;
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
int32_t  func_1(struct S1 * p_1094);
int32_t * func_2(uint32_t  p_3, struct S1 * p_1094);
int32_t  func_7(int32_t * p_8, int64_t  p_9, int32_t * p_10, struct S1 * p_1094);
int32_t * func_11(int8_t  p_12, uint16_t  p_13, uint64_t  p_14, int32_t * p_15, struct S1 * p_1094);
int32_t * func_22(int32_t * p_23, uint64_t  p_24, uint32_t  p_25, uint64_t  p_26, int32_t  p_27, struct S1 * p_1094);
int32_t * func_28(uint32_t  p_29, uint64_t * p_30, struct S1 * p_1094);
uint64_t * func_35(int64_t  p_36, uint64_t * p_37, uint32_t  p_38, int64_t  p_39, struct S1 * p_1094);
int32_t  func_55(uint8_t  p_56, int32_t ** p_57, uint64_t ** p_58, int64_t  p_59, int64_t  p_60, struct S1 * p_1094);
uint8_t  func_61(int32_t  p_62, uint8_t * p_63, int64_t * p_64, uint32_t  p_65, struct S1 * p_1094);
uint8_t * func_72(uint32_t * p_73, int64_t * p_74, int64_t * p_75, struct S1 * p_1094);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1094->g_6 p_1094->g_5 p_1094->g_19 p_1094->g_21 p_1094->g_32 p_1094->g_42 p_1094->l_comm_values p_1094->g_comm_values p_1094->g_66 p_1094->g_71 p_1094->g_77 p_1094->g_148 p_1094->g_151 p_1094->g_158 p_1094->g_161 p_1094->g_170 p_1094->g_110 p_1094->g_102 p_1094->g_139 p_1094->g_44 p_1094->g_173 p_1094->g_67 p_1094->g_47 p_1094->g_86 p_1094->g_212 p_1094->g_317 p_1094->g_303 p_1094->g_447 p_1094->g_583 p_1094->g_421 p_1094->g_687 p_1094->g_604 p_1094->g_836 p_1094->g_923 p_1094->g_449 p_1094->g_101 p_1094->g_791 p_1094->g_942 p_1094->g_313 p_1094->g_400 p_1094->g_1010 p_1094->g_1011 p_1094->g_710 p_1094->g_720 p_1094->g_1036 p_1094->g_944
 * writes: p_1094->g_21 p_1094->g_32 p_1094->g_42 p_1094->g_44 p_1094->g_71 p_1094->g_101 p_1094->g_102 p_1094->g_173 p_1094->g_47 p_1094->l_comm_values p_1094->g_148 p_1094->g_86.f1 p_1094->g_86 p_1094->g_400 p_1094->g_421 p_1094->g_457 p_1094->g_447 p_1094->g_161 p_1094->g_720 p_1094->g_791 p_1094->g_944 p_1094->g_313 p_1094->g_991
 */
int32_t  func_1(struct S1 * p_1094)
{ /* block id: 4 */
    int32_t *l_4 = &p_1094->g_5;
    int8_t l_16 = 0x35L;
    VECTOR(int16_t, 16) l_18 = (VECTOR(int16_t, 16))(0x6CD8L, (VECTOR(int16_t, 4))(0x6CD8L, (VECTOR(int16_t, 2))(0x6CD8L, 0x1896L), 0x1896L), 0x1896L, 0x6CD8L, 0x1896L, (VECTOR(int16_t, 2))(0x6CD8L, 0x1896L), (VECTOR(int16_t, 2))(0x6CD8L, 0x1896L), 0x6CD8L, 0x1896L, 0x6CD8L, 0x1896L);
    uint64_t *l_20 = &p_1094->g_21[0];
    uint32_t *l_31 = &p_1094->g_32;
    uint8_t *l_40 = (void*)0;
    uint8_t *l_41[6] = {&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42};
    int64_t *l_43 = &p_1094->g_44;
    uint64_t *l_46 = &p_1094->g_47;
    uint64_t **l_45 = &l_46;
    int32_t *l_1080 = &p_1094->g_5;
    int32_t **l_1093 = &l_1080;
    int i;
    (*l_1093) = func_2((((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(3L, 0x594B4B13L)).xxyy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(1L, ((void*)0 == l_4), ((VECTOR(int32_t, 2))(p_1094->g_6.xx)), func_7(func_11((*l_4), (l_16 == (*l_4)), ((*l_20) &= (safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_18.s3e)).xyxyyyyyxyyyyyxx)).odd)).lo)), ((VECTOR(int16_t, 2))(p_1094->g_19.s84)).xyyy))).x))), func_22(func_28(((*l_31)--), func_35(((p_1094->g_42 ^= 250UL) , ((*l_43) = 0x6A77D77FC7DF39F3L)), ((*l_45) = l_43), p_1094->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1094->tid, 43))], p_1094->g_comm_values[p_1094->tid], p_1094), p_1094), (*l_4), (*l_4), (*l_4), (*l_4), p_1094), p_1094), (*l_4), l_1080, p_1094), ((VECTOR(int32_t, 4))((-1L))), 0x1E8149A5L, (-4L), (-1L), ((VECTOR(int32_t, 4))((-1L))))), (int32_t)p_1094->g_1011.s5))).hi)).even, ((VECTOR(int32_t, 4))(0L))))).zwxwxzyy, ((VECTOR(int32_t, 8))(0x46D59609L))))).s5674101200130701)).hi)).s12, ((VECTOR(int32_t, 2))(0x097A9593L))))), (-1L), ((VECTOR(int32_t, 4))(0x743A3477L)), (-6L))).lo, ((VECTOR(int32_t, 4))((-1L)))))).z , p_1094->g_6.y), p_1094);
    return p_1094->g_944;
}


/* ------------------------------------------ */
/* 
 * reads : p_1094->g_1036 p_1094->g_313
 * writes: p_1094->g_313
 */
int32_t * func_2(uint32_t  p_3, struct S1 * p_1094)
{ /* block id: 514 */
    int32_t *l_1092[4] = {&p_1094->g_313,&p_1094->g_313,&p_1094->g_313,&p_1094->g_313};
    int i;
    (*p_1094->g_1036) |= (-1L);
    return l_1092[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1094->g_71 p_1094->g_313 p_1094->g_6 p_1094->g_1036
 * writes: p_1094->g_71 p_1094->g_313
 */
int32_t  func_7(int32_t * p_8, int64_t  p_9, int32_t * p_10, struct S1 * p_1094)
{ /* block id: 499 */
    int64_t l_1091 = 0x641AC60B5ECB6DB5L;
    for (p_1094->g_71 = (-13); (p_1094->g_71 <= (-3)); p_1094->g_71 = safe_add_func_uint16_t_u_u(p_1094->g_71, 5))
    { /* block id: 502 */
        if ((atomic_inc(&p_1094->g_atomic_input[64 * get_linear_group_id() + 44]) == 8))
        { /* block id: 504 */
            uint64_t *l_1084 = (void*)0;
            uint64_t **l_1083 = &l_1084;
            int32_t l_1085 = 0x50301D7FL;
            int16_t l_1086 = (-8L);
            l_1083 = l_1083;
            l_1086 = l_1085;
            unsigned int result = 0;
            result += l_1085;
            result += l_1086;
            atomic_add(&p_1094->g_special_values[64 * get_linear_group_id() + 44], result);
        }
        else
        { /* block id: 507 */
            (1 + 1);
        }
        if ((*p_8))
            break;
    }
    (*p_1094->g_1036) = (0x5195D01BL > (safe_sub_func_int8_t_s_s(p_1094->g_6.y, (safe_sub_func_int64_t_s_s(l_1091, (1L >= l_1091))))));
    return l_1091;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_11(int8_t  p_12, uint16_t  p_13, uint64_t  p_14, int32_t * p_15, struct S1 * p_1094)
{ /* block id: 474 */
    int32_t *l_1037 = &p_1094->g_313;
    int32_t *l_1038[5];
    int32_t l_1039 = 0x3A743946L;
    int32_t l_1040 = 6L;
    int64_t l_1041 = 0x3CE6C10F71657D37L;
    int64_t l_1042 = 0L;
    uint32_t l_1043 = 0xDE187A23L;
    int i;
    for (i = 0; i < 5; i++)
        l_1038[i] = (void*)0;
    ++l_1043;
    if ((atomic_inc(&p_1094->g_atomic_input[64 * get_linear_group_id() + 53]) == 4))
    { /* block id: 477 */
        int32_t l_1046 = 0x586F4265L;
        int64_t l_1074 = 1L;
        uint8_t l_1075 = 0x0BL;
        int32_t *l_1078[6][2][4] = {{{&l_1046,&l_1046,&l_1046,&l_1046},{&l_1046,&l_1046,&l_1046,&l_1046}},{{&l_1046,&l_1046,&l_1046,&l_1046},{&l_1046,&l_1046,&l_1046,&l_1046}},{{&l_1046,&l_1046,&l_1046,&l_1046},{&l_1046,&l_1046,&l_1046,&l_1046}},{{&l_1046,&l_1046,&l_1046,&l_1046},{&l_1046,&l_1046,&l_1046,&l_1046}},{{&l_1046,&l_1046,&l_1046,&l_1046},{&l_1046,&l_1046,&l_1046,&l_1046}},{{&l_1046,&l_1046,&l_1046,&l_1046},{&l_1046,&l_1046,&l_1046,&l_1046}}};
        int32_t *l_1079[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1079[i] = (void*)0;
        for (l_1046 = 12; (l_1046 < 19); ++l_1046)
        { /* block id: 480 */
            VECTOR(int32_t, 2) l_1049 = (VECTOR(int32_t, 2))(0x21B43424L, 0x7AB1B7ECL);
            uint16_t l_1050[10][10] = {{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL},{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL},{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL},{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL},{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL},{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL},{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL},{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL},{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL},{65535UL,0xAFF8L,0UL,65526UL,0UL,0xAFF8L,65535UL,1UL,65535UL,65535UL}};
            VECTOR(int32_t, 2) l_1051 = (VECTOR(int32_t, 2))((-1L), 0L);
            VECTOR(int32_t, 4) l_1052 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 6L), 6L);
            int32_t l_1053 = (-1L);
            int64_t l_1054 = 0x316E3D690225D4DFL;
            VECTOR(int32_t, 2) l_1055 = (VECTOR(int32_t, 2))((-1L), 5L);
            VECTOR(int32_t, 8) l_1056 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0L), 0L), 0L, 6L, 0L);
            int32_t l_1057[6][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
            VECTOR(uint8_t, 16) l_1058 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 251UL), 251UL), 251UL, 1UL, 251UL, (VECTOR(uint8_t, 2))(1UL, 251UL), (VECTOR(uint8_t, 2))(1UL, 251UL), 1UL, 251UL, 1UL, 251UL);
            int64_t l_1059 = 0x717622134F1210F3L;
            VECTOR(int64_t, 4) l_1060 = (VECTOR(int64_t, 4))(0x7532D3C7302B7E9DL, (VECTOR(int64_t, 2))(0x7532D3C7302B7E9DL, 8L), 8L);
            int64_t l_1061 = 8L;
            int8_t l_1062 = 0x07L;
            VECTOR(int64_t, 2) l_1063 = (VECTOR(int64_t, 2))(1L, 0x2FC43D0488E7CABAL);
            int32_t l_1064 = 0x5578AF73L;
            int32_t *l_1065[1];
            int32_t *l_1066 = (void*)0;
            int32_t *l_1067 = &l_1057[1][1];
            int16_t l_1068 = 0x049EL;
            int64_t l_1069 = 0x23D69DE4014F4B61L;
            VECTOR(uint64_t, 16) l_1070 = (VECTOR(uint64_t, 16))(0x7E3FA6569298D2FFL, (VECTOR(uint64_t, 4))(0x7E3FA6569298D2FFL, (VECTOR(uint64_t, 2))(0x7E3FA6569298D2FFL, 0UL), 0UL), 0UL, 0x7E3FA6569298D2FFL, 0UL, (VECTOR(uint64_t, 2))(0x7E3FA6569298D2FFL, 0UL), (VECTOR(uint64_t, 2))(0x7E3FA6569298D2FFL, 0UL), 0x7E3FA6569298D2FFL, 0UL, 0x7E3FA6569298D2FFL, 0UL);
            int16_t l_1073 = (-1L);
            int i, j;
            for (i = 0; i < 1; i++)
                l_1065[i] = (void*)0;
            l_1058.sf |= (l_1052.w = (l_1057[1][1] &= ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x42A99830L)).hi, ((VECTOR(int32_t, 2))(l_1049.xy)), (-1L))), (l_1050[9][6] = 0x5701F935L), 0x5E500929L, (-4L), 0x3250E8A8L)).s65, ((VECTOR(int32_t, 2))(l_1051.yx))))), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1052.zy)), ((l_1053 , (l_1051.x = l_1054)) , ((VECTOR(int32_t, 8))(l_1055.yyxxyxxy)).s0), 0x0565A3A0L, 0L, ((VECTOR(int32_t, 2))(l_1056.s53)), 0x57A3AA9AL)).odd))).odd, ((VECTOR(int32_t, 2))(1L, 3L))))).lo));
            l_1067 = (l_1066 = ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x1DF99FEC84F36983L, l_1059, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_1060.zw)), 1L, 0x2AAAC2B0BCF4B74EL)), 0x3D649EA9FB1C8A4FL, 0x69AC276CC21F7167L)).s3512020036144250)).s2 , (((l_1061 , GROUP_DIVERGE(1, 1)) , l_1062) , ((l_1064 &= ((VECTOR(int64_t, 8))(l_1063.xyyyyxyy)).s2) , (-2L)))) , (l_1065[0] = (void*)0)));
            l_1070.s5++;
            l_1073 &= 9L;
        }
        ++l_1075;
        l_1079[1] = l_1078[2][0][1];
        unsigned int result = 0;
        result += l_1046;
        result += l_1074;
        result += l_1075;
        atomic_add(&p_1094->g_special_values[64 * get_linear_group_id() + 53], result);
    }
    else
    { /* block id: 495 */
        (1 + 1);
    }
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1094->g_101 p_1094->g_151 p_1094->g_102 p_1094->g_1036
 * writes: p_1094->g_313
 */
int32_t * func_22(int32_t * p_23, uint64_t  p_24, uint32_t  p_25, uint64_t  p_26, int32_t  p_27, struct S1 * p_1094)
{ /* block id: 470 */
    uint16_t l_1019 = 65535UL;
    union U0 l_1022 = {0x54L};
    uint32_t *l_1033[1][1][1];
    int32_t l_1034 = 0x068559A7L;
    int32_t *l_1035 = &p_1094->g_313;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1033[i][j][k] = (void*)0;
        }
    }
    (*l_1035) = (l_1019 ^ (l_1019 , (((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x1BL, 0x77L)).yyyx)).yzxyzwwy, (int8_t)(safe_mul_func_uint16_t_u_u(((l_1022 , 0x630A5DD4L) >= (l_1034 = (safe_rshift_func_int16_t_s_s((((((safe_add_func_int64_t_s_s((&p_1094->g_805 != (void*)0), (safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((l_1019 , p_1094->g_101[5][2][4]), ((0x2997L || p_1094->g_151.sa) == p_27))) , p_27) , l_1019), (-1L))), p_27)))) || 2L) <= 4L) >= p_25) , (-1L)), 6)))), p_1094->g_102))))).s0 , p_26)));
    return p_1094->g_1036;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_28(uint32_t  p_29, uint64_t * p_30, struct S1 * p_1094)
{ /* block id: 468 */
    int32_t *l_1018 = &p_1094->g_5;
    return l_1018;
}


/* ------------------------------------------ */
/* 
 * reads : p_1094->g_comm_values p_1094->g_66 p_1094->g_71 p_1094->g_77 p_1094->l_comm_values p_1094->g_42 p_1094->g_5 p_1094->g_148 p_1094->g_151 p_1094->g_158 p_1094->g_161 p_1094->g_170 p_1094->g_110 p_1094->g_102 p_1094->g_139 p_1094->g_44 p_1094->g_173 p_1094->g_67 p_1094->g_47 p_1094->g_86 p_1094->g_212 p_1094->g_317 p_1094->g_303 p_1094->g_447 p_1094->g_583 p_1094->g_421 p_1094->g_687 p_1094->g_604 p_1094->g_836 p_1094->g_923 p_1094->g_449 p_1094->g_101 p_1094->g_791 p_1094->g_942 p_1094->g_313 p_1094->g_400 p_1094->g_1010 p_1094->g_1011 p_1094->g_710 p_1094->g_720
 * writes: p_1094->g_71 p_1094->g_101 p_1094->g_102 p_1094->g_44 p_1094->g_173 p_1094->g_42 p_1094->g_47 p_1094->l_comm_values p_1094->g_148 p_1094->g_86.f1 p_1094->g_86 p_1094->g_400 p_1094->g_421 p_1094->g_457 p_1094->g_447 p_1094->g_161 p_1094->g_720 p_1094->g_791 p_1094->g_944 p_1094->g_313 p_1094->g_991
 */
uint64_t * func_35(int64_t  p_36, uint64_t * p_37, uint32_t  p_38, int64_t  p_39, struct S1 * p_1094)
{ /* block id: 10 */
    VECTOR(int32_t, 8) l_52 = (VECTOR(int32_t, 8))(0x395CC9E5L, (VECTOR(int32_t, 4))(0x395CC9E5L, (VECTOR(int32_t, 2))(0x395CC9E5L, 0x43D8D589L), 0x43D8D589L), 0x43D8D589L, 0x395CC9E5L, 0x43D8D589L);
    uint32_t *l_76 = (void*)0;
    int64_t *l_78 = &p_1094->g_44;
    int32_t l_934[3][10][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
    uint64_t *l_938 = &p_1094->g_421;
    uint64_t **l_937 = &l_938;
    union U0 *l_989 = &p_1094->g_400;
    int i, j, k;
    for (p_36 = 11; (p_36 < (-30)); --p_36)
    { /* block id: 13 */
        int32_t *l_51[9] = {&p_1094->g_5,&p_1094->g_5,&p_1094->g_5,&p_1094->g_5,&p_1094->g_5,&p_1094->g_5,&p_1094->g_5,&p_1094->g_5,&p_1094->g_5};
        int32_t **l_50 = &l_51[5];
        int16_t l_985 = 0x592FL;
        int16_t l_1014[5][5] = {{0L,0x58ABL,0x58ABL,0L,0L},{0L,0x58ABL,0x58ABL,0L,0L},{0L,0x58ABL,0x58ABL,0L,0L},{0L,0x58ABL,0x58ABL,0L,0L},{0L,0x58ABL,0x58ABL,0L,0L}};
        int i, j;
        (*l_50) = (void*)0;
        if (((VECTOR(int32_t, 16))(l_52.s4543216251027412)).se)
        { /* block id: 15 */
            int32_t *l_962[8][8] = {{(void*)0,&p_1094->g_5,&l_934[0][4][0],(void*)0,&p_1094->g_313,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1094->g_5,&l_934[0][4][0],(void*)0,&p_1094->g_313,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1094->g_5,&l_934[0][4][0],(void*)0,&p_1094->g_313,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1094->g_5,&l_934[0][4][0],(void*)0,&p_1094->g_313,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1094->g_5,&l_934[0][4][0],(void*)0,&p_1094->g_313,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1094->g_5,&l_934[0][4][0],(void*)0,&p_1094->g_313,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1094->g_5,&l_934[0][4][0],(void*)0,&p_1094->g_313,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1094->g_5,&l_934[0][4][0],(void*)0,&p_1094->g_313,(void*)0,(void*)0,(void*)0}};
            uint16_t l_996 = 0x6567L;
            VECTOR(int64_t, 4) l_1008 = (VECTOR(int64_t, 4))(0x39652CC47485EAADL, (VECTOR(int64_t, 2))(0x39652CC47485EAADL, 1L), 1L);
            int i, j;
            for (p_38 = (-19); (p_38 != 11); p_38++)
            { /* block id: 18 */
                uint64_t *l_754[10][4][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                uint64_t **l_753 = &l_754[9][0][1];
                int i, j, k;
                if (p_1094->g_comm_values[p_1094->tid])
                { /* block id: 19 */
                    int32_t *l_70[1][2];
                    uint64_t ***l_939 = &l_937;
                    uint64_t **l_941 = &l_938;
                    uint64_t ***l_940 = &l_941;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_70[i][j] = &p_1094->g_71;
                    }
                    l_934[0][4][0] ^= func_55(func_61((((void*)0 == p_1094->g_66) & (safe_lshift_func_int16_t_s_s(l_52.s0, 10))), ((p_1094->g_71 = (-1L)) , func_72(l_76, l_78, &p_36, p_1094)), &p_1094->g_44, p_38, p_1094), &l_51[5], l_753, p_36, p_38, p_1094);
                    p_1094->g_944 = (safe_mul_func_int8_t_s_s(p_39, (((*l_940) = ((*l_939) = l_937)) == p_1094->g_942)));
                    if ((atomic_inc(&p_1094->l_atomic_input[63]) == 5))
                    { /* block id: 397 */
                        uint32_t l_945 = 4294967295UL;
                        int32_t l_948 = (-1L);
                        int32_t l_949 = (-1L);
                        int64_t l_950 = 0L;
                        uint8_t l_951 = 2UL;
                        l_945--;
                        ++l_951;
                        unsigned int result = 0;
                        result += l_945;
                        result += l_948;
                        result += l_949;
                        result += l_950;
                        result += l_951;
                        atomic_add(&p_1094->l_special_values[63], result);
                    }
                    else
                    { /* block id: 400 */
                        (1 + 1);
                    }
                    if (p_38)
                        break;
                }
                else
                { /* block id: 404 */
                    if ((atomic_inc(&p_1094->g_atomic_input[64 * get_linear_group_id() + 0]) == 7))
                    { /* block id: 406 */
                        int8_t l_954 = 0L;
                        uint32_t l_955 = 1UL;
                        int32_t l_958 = 1L;
                        uint16_t l_959 = 65529UL;
                        l_954 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-3L), (-7L))), 0x3BB30CE7L, (-9L))).z;
                        l_955++;
                        --l_959;
                        unsigned int result = 0;
                        result += l_954;
                        result += l_955;
                        result += l_958;
                        result += l_959;
                        atomic_add(&p_1094->g_special_values[64 * get_linear_group_id() + 0], result);
                    }
                    else
                    { /* block id: 410 */
                        (1 + 1);
                    }
                    l_962[3][4] = ((*l_50) = &l_934[0][4][0]);
                    for (p_1094->g_173 = 26; (p_1094->g_173 != 54); ++p_1094->g_173)
                    { /* block id: 417 */
                        (*l_50) = (*l_50);
                        return &p_1094->g_47;
                    }
                    if ((atomic_inc(&p_1094->l_atomic_input[27]) == 4))
                    { /* block id: 422 */
                        int64_t l_965 = 0x114EFBF0366D78F4L;
                        uint16_t l_966 = 0x29EBL;
                        uint16_t *l_970 = &l_966;
                        uint16_t **l_969 = &l_970;
                        uint32_t l_971[7][1];
                        uint16_t l_972[7] = {0x380BL,0x380BL,0x380BL,0x380BL,0x380BL,0x380BL,0x380BL};
                        uint32_t l_973 = 0xAB31996BL;
                        uint32_t l_974 = 0xE2ED06B6L;
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_971[i][j] = 1UL;
                        }
                        --l_966;
                        l_969 = (void*)0;
                        l_972[4] = l_971[2][0];
                        l_974 |= l_973;
                        unsigned int result = 0;
                        result += l_965;
                        result += l_966;
                        int l_971_i0, l_971_i1;
                        for (l_971_i0 = 0; l_971_i0 < 7; l_971_i0++) {
                            for (l_971_i1 = 0; l_971_i1 < 1; l_971_i1++) {
                                result += l_971[l_971_i0][l_971_i1];
                            }
                        }
                        int l_972_i0;
                        for (l_972_i0 = 0; l_972_i0 < 7; l_972_i0++) {
                            result += l_972[l_972_i0];
                        }
                        result += l_973;
                        result += l_974;
                        atomic_add(&p_1094->l_special_values[27], result);
                    }
                    else
                    { /* block id: 427 */
                        (1 + 1);
                    }
                }
            }
            for (p_1094->g_313 = 0; (p_1094->g_313 >= 6); ++p_1094->g_313)
            { /* block id: 434 */
                uint16_t l_977 = 0x0C85L;
                l_977 |= 0x7A444FA7L;
                for (p_39 = (-6); (p_39 >= (-25)); p_39 = safe_sub_func_uint64_t_u_u(p_39, 9))
                { /* block id: 438 */
                    int32_t *l_982 = (void*)0;
                    for (l_977 = 29; (l_977 > 20); --l_977)
                    { /* block id: 441 */
                        return &p_1094->g_47;
                    }
                    (*l_50) = l_982;
                }
            }
            for (p_38 = (-10); (p_38 > 12); p_38 = safe_add_func_int8_t_s_s(p_38, 4))
            { /* block id: 449 */
                int32_t l_986 = 0L;
                int32_t l_1013 = 0x217163BFL;
                l_986 |= ((l_985 ^ ((void*)0 != &p_1094->g_173)) == p_38);
                for (p_1094->g_173 = 0; (p_1094->g_173 <= 29); p_1094->g_173++)
                { /* block id: 453 */
                    union U0 **l_990[1][10][3] = {{{&l_989,&l_989,&l_989},{&l_989,&l_989,&l_989},{&l_989,&l_989,&l_989},{&l_989,&l_989,&l_989},{&l_989,&l_989,&l_989},{&l_989,&l_989,&l_989},{&l_989,&l_989,&l_989},{&l_989,&l_989,&l_989},{&l_989,&l_989,&l_989},{&l_989,&l_989,&l_989}}};
                    uint16_t *l_1001[7][4] = {{&p_1094->g_173,&l_996,(void*)0,&l_996},{&p_1094->g_173,&l_996,(void*)0,&l_996},{&p_1094->g_173,&l_996,(void*)0,&l_996},{&p_1094->g_173,&l_996,(void*)0,&l_996},{&p_1094->g_173,&l_996,(void*)0,&l_996},{&p_1094->g_173,&l_996,(void*)0,&l_996},{&p_1094->g_173,&l_996,(void*)0,&l_996}};
                    uint16_t **l_1002 = (void*)0;
                    uint16_t *l_1004 = &l_996;
                    uint16_t **l_1003 = &l_1004;
                    int32_t l_1009 = 0x6A1C533CL;
                    int8_t *l_1012 = &p_1094->g_101[0][5][4];
                    int i, j, k;
                    p_1094->g_991 = l_989;
                    l_1013 ^= (safe_mod_func_uint32_t_u_u(((((((((safe_mul_func_uint8_t_u_u(1UL, ((((*l_1012) = (l_996 <= ((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_1001[4][2] != ((*l_1003) = &l_996)), 2)), ((*l_989) , (-2L)))) <= (((safe_mod_func_uint64_t_u_u((*p_1094->g_67), (safe_unary_minus_func_uint64_t_u((((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(l_1008.wwwy)).xxwzxwxwyzyxywwz, ((VECTOR(int64_t, 4))(0x3206639C3C346E84L, (l_1009 | (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1094->g_1010.s0644)), 0x2E0BE666L, ((VECTOR(int32_t, 2))(p_1094->g_1011.s14)), (-1L))))).s4 , (l_1009 ^ p_38))), (-3L), (-1L))).yyxyzzwzzxwxyyxw, ((VECTOR(int64_t, 16))(0L))))).s8781)).zzywyzzwywywyyxx)).s7 <= p_36) , p_1094->g_604.y) | l_52.s5))))) , (*p_37)) ^ (*p_1094->g_67))))) >= p_1094->g_71) && p_1094->g_303.s4))) & p_1094->g_313) , (void*)0) != (void*)0) <= p_39) < p_39) && l_1009) ^ p_1094->g_710.w), p_1094->g_720.s0));
                }
                l_1014[1][3] = (1UL >= 2L);
            }
            if (l_52.s2)
                break;
        }
        else
        { /* block id: 462 */
            uint32_t l_1017 = 7UL;
            l_1017 = (safe_div_func_int32_t_s_s(0x7E3FE332L, 0xC416AAD1L));
        }
        return p_37;
    }
    return l_78;
}


/* ------------------------------------------ */
/* 
 * reads : p_1094->g_161 p_1094->g_791 p_1094->g_792 p_1094->g_720 p_1094->g_110 p_1094->g_313 p_1094->g_67 p_1094->g_47 p_1094->g_212 p_1094->g_604 p_1094->g_134 p_1094->g_836 p_1094->g_148 p_1094->g_303 p_1094->g_173 p_1094->g_583 p_1094->g_66 p_1094->g_170 p_1094->g_923 p_1094->g_449 p_1094->g_101
 * writes: p_1094->g_44 p_1094->g_805 p_1094->g_101 p_1094->g_47 p_1094->g_173 p_1094->g_720 p_1094->g_102 p_1094->g_791
 */
int32_t  func_55(uint8_t  p_56, int32_t ** p_57, uint64_t ** p_58, int64_t  p_59, int64_t  p_60, struct S1 * p_1094)
{ /* block id: 311 */
    int32_t l_773 = 0x13988097L;
    int32_t l_774 = (-3L);
    int32_t l_776 = 1L;
    int32_t l_778[9];
    VECTOR(int8_t, 2) l_793 = (VECTOR(int8_t, 2))(0x2AL, 0L);
    int32_t l_812 = 0x6BA3EC2DL;
    int16_t l_913 = 0x3970L;
    union U0 l_916 = {-2L};
    int32_t *l_929[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    uint64_t l_930 = 1UL;
    uint64_t l_933 = 0x1A6735B759E1376AL;
    int i, j;
    for (i = 0; i < 9; i++)
        l_778[i] = 0x4E87B1E1L;
    for (p_56 = 0; (p_56 != 8); p_56++)
    { /* block id: 314 */
        int64_t l_759 = 0x2369715042F27A63L;
        uint16_t l_760 = 1UL;
        int32_t l_769 = 0L;
        int32_t l_775 = (-1L);
        int32_t l_780 = 0x5C92DD13L;
        int32_t l_781 = (-6L);
        int32_t l_782 = 0x50227004L;
        int32_t l_783[3];
        VECTOR(int32_t, 16) l_813 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
        VECTOR(uint32_t, 8) l_817 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x3160415FL), 0x3160415FL), 0x3160415FL, 4294967295UL, 0x3160415FL);
        uint32_t l_841 = 0UL;
        uint64_t l_869 = 4UL;
        int16_t *l_924 = &l_913;
        uint64_t *l_925 = (void*)0;
        uint64_t *l_926 = (void*)0;
        uint64_t *l_927[6] = {&l_869,&l_869,&l_869,&l_869,&l_869,&l_869};
        int32_t *l_928[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_783[i] = 0x7E986C96L;
        for (p_59 = 0; (p_59 < 16); p_59 = safe_add_func_int64_t_s_s(p_59, 1))
        { /* block id: 317 */
            uint32_t l_761 = 0xB732F67EL;
            int32_t l_768 = 0x76FF068FL;
            int32_t l_770 = 0x078DFFE0L;
            int32_t l_771 = 0x2CF62981L;
            int32_t l_772 = 0x7C9C2C23L;
            int32_t l_777 = 5L;
            int32_t l_779[10][2][9] = {{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}},{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}},{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}},{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}},{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}},{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}},{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}},{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}},{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}},{{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L},{0x45F431FEL,0L,0x49AFB566L,4L,0x45A6DEE5L,4L,(-10L),0L,0L}}};
            uint32_t l_784 = 0UL;
            VECTOR(int16_t, 16) l_828 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
            uint8_t **l_877 = &p_1094->g_99;
            int i, j, k;
            if (l_759)
                break;
            if (l_760)
                break;
            if (l_761)
                break;
            if ((safe_rshift_func_uint16_t_u_u(0x00D8L, 15)))
            { /* block id: 321 */
                int32_t *l_764 = &p_1094->g_313;
                int32_t *l_765 = &p_1094->g_313;
                int32_t *l_766 = (void*)0;
                int32_t *l_767[3];
                uint16_t *l_796 = &l_760;
                uint32_t *l_797 = (void*)0;
                uint32_t *l_798 = (void*)0;
                uint32_t *l_799 = (void*)0;
                uint32_t *l_800 = (void*)0;
                uint32_t *l_801[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int64_t *l_802 = &p_1094->g_44;
                int64_t *l_803 = (void*)0;
                int64_t *l_804[1];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_767[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_804[i] = &p_1094->g_805;
                l_784++;
                l_778[7] = (safe_mul_func_uint8_t_u_u((((p_1094->g_161.y <= (l_812 = ((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(p_1094->g_791.sce34b990)).s3, ((VECTOR(uint64_t, 16))(((((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(p_1094->g_792.xxyy)).wzyyyzwzzxxyzzzw, ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_793.yyxxyyyx)).s2762551506514263)))).s8e)).xyyy)), (-4L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-1L), 1L)), 0x26L, 1L)), 0x1DL, ((safe_lshift_func_int8_t_s_u(((9UL | (0x42DCA21FD4F4F22AL & (8UL < (((l_776 = (p_1094->g_805 = ((*l_802) = ((l_779[8][0][1] = (((*l_796) = p_1094->g_720.s7) ^ l_773)) && p_1094->g_110.sc)))) , ((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((0x8025L >= ((*l_765) & 0UL)), 3)), l_777)) < (*p_1094->g_67)) <= l_779[8][1][2]) & l_774)) , l_778[5])))) , p_1094->g_212.z), GROUP_DIVERGE(0, 1))) , 0L), p_1094->g_604.x, (-1L), (-1L), 0L)).s376c, ((VECTOR(int8_t, 4))(0L))))).wyxywyyyxyzzzyxy, ((VECTOR(int8_t, 16))(0x21L))))), ((VECTOR(int8_t, 16))(0L))))).sb < p_1094->g_720.s6) <= l_782), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(0xFFBE7FA34DD801EDL)), 0xC9C28F60DC6FC084L, 0x933378E84143A618L, 0UL, 0xFF608FDCE3EE0A2AL, l_773, ((VECTOR(uint64_t, 2))(0x614C68F0051FCBC5L)), 1UL, 0x8962B3A00B934CC4L, 0x011D929B23422205L)).sa)) ^ l_780))) != (-6L)) , l_783[0]), l_775));
            }
            else
            { /* block id: 330 */
                int8_t *l_816 = &p_1094->g_101[5][3][0];
                int32_t l_833 = 0x376CE877L;
                uint8_t **l_872 = &p_1094->g_99;
                int32_t *l_883 = &l_779[1][1][8];
                if (((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_813.sdbe2dcb5)).s6013453042240000, ((VECTOR(int32_t, 16))(0x03D9EB87L, (-1L), 0x69A83AF0L, (~((safe_lshift_func_int8_t_s_s(((*l_816) = p_60), 4)) <= ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_817.s6354)).yzzxwzxw)).s2)), l_783[0], 0x7A367585L, 4L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x1F7121BAL, 8L)), 0x4C1988D1L, 1L, 0L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(3L, 0x05107837L, 0x5F689499L, ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((0x3A14L && (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(p_59, (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_828.s55e5)).x, 0x15FEL)))), (safe_sub_func_int64_t_s_s((((0xD66EAC1B6297DA53L >= 0UL) <= ((safe_mod_func_int8_t_s_s(p_59, 9UL)) ^ 0xFD4CL)) <= l_828.s1), (*p_1094->g_67)))))) <= (-4L)), p_1094->g_134.x)), p_1094->g_161.y)) != l_833), ((VECTOR(int32_t, 2))((-1L))), 0L, 0x4DBB33D0L)).s4535356341770465)).sa409)).yzzxxyxw)).s5, 0x4B65A626L, 0L)), 0x2D54F705L)), ((VECTOR(int32_t, 16))((-1L)))))), ((VECTOR(int32_t, 16))((-6L)))))).s0)
                { /* block id: 332 */
                    uint16_t *l_842 = &p_1094->g_173;
                    int16_t *l_845 = (void*)0;
                    int16_t *l_846 = &p_1094->g_102;
                    int32_t *l_853 = &l_771;
                    (*l_853) = ((p_60 && p_1094->g_212.x) < (safe_rshift_func_uint16_t_u_u(((p_1094->g_836[3] && ((!(((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x52E000FD914F1130L, 0x5983449F2C616393L)), (-6L), 0L)).wwwxyxwyzywxxxyy)).se, (++(*p_1094->g_67)))) & ((*l_842) = l_841)) , (l_780 == (safe_div_func_int64_t_s_s((((*l_846) = (p_1094->g_720.s6 = (l_777 = 0x5B59L))) || (safe_lshift_func_uint8_t_u_s(p_60, 2))), (l_783[0] &= (safe_sub_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((p_59 & (0x10C1B405L >= l_772)) != p_1094->g_148.s0), 0x21BF70CA3B5D5CAAL)) | l_768), (-1L))))))))) , p_59)) ^ p_1094->g_303.s4), 7)));
                }
                else
                { /* block id: 340 */
                    uint16_t l_863 = 0x0660L;
                    int32_t *l_866 = &l_778[7];
                    int8_t *l_882 = &p_1094->g_687;
                    for (p_1094->g_173 = 0; (p_1094->g_173 < 44); p_1094->g_173++)
                    { /* block id: 343 */
                        int32_t l_856[6][8];
                        int32_t *l_857 = &l_781;
                        int32_t *l_858 = &l_776;
                        int32_t *l_859 = (void*)0;
                        int32_t *l_860 = &l_780;
                        int32_t *l_861 = &l_771;
                        int32_t *l_862[8][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_856[i][j] = 1L;
                        }
                        l_863++;
                    }
                    (*l_866) = 0x0F5B591EL;
                    for (l_863 = 0; (l_863 <= 10); ++l_863)
                    { /* block id: 349 */
                        if (l_869)
                            break;
                        if (l_793.y)
                            break;
                        (*p_57) = (*p_57);
                    }
                    (*l_866) |= (safe_lshift_func_int16_t_s_u((l_872 == &p_1094->g_99), (safe_mod_func_int64_t_s_s((+((((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))((safe_lshift_func_uint8_t_u_u((l_877 != &p_1094->g_97), ((((safe_mod_func_int16_t_s_s(1L, (p_60 , (safe_sub_func_int64_t_s_s(p_59, (l_816 == l_882)))))) ^ l_833) == l_773) | p_1094->g_792.y))), ((VECTOR(uint32_t, 2))(4294967289UL)), 0xF3F8824CL)))))).yxxxxwzwwzwwyyzw, (uint32_t)1UL))).s2 , l_872) != (void*)0)), l_833))));
                }
                (*l_883) = l_833;
                for (l_775 = 0; (l_775 <= (-11)); l_775--)
                { /* block id: 359 */
                    uint8_t l_893 = 252UL;
                    for (l_770 = (-8); (l_770 >= 17); l_770 = safe_add_func_int64_t_s_s(l_770, 9))
                    { /* block id: 362 */
                        uint64_t l_888 = 0x9054425E87E17D97L;
                        (*l_883) ^= (-7L);
                        if (l_888)
                            break;
                    }
                    for (l_769 = (-26); (l_769 >= (-22)); l_769 = safe_add_func_uint16_t_u_u(l_769, 4))
                    { /* block id: 368 */
                        int32_t *l_891 = (void*)0;
                        int32_t *l_892[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_892[i] = (void*)0;
                        (*l_883) = p_60;
                        l_893++;
                        (*l_883) &= p_59;
                    }
                    (*p_57) = (*p_57);
                    if ((atomic_inc(&p_1094->g_atomic_input[64 * get_linear_group_id() + 58]) == 7))
                    { /* block id: 375 */
                        uint8_t l_896 = 0x85L;
                        int32_t l_897 = 0x75F37EA4L;
                        uint64_t l_898 = 0x644FDB2557077FF7L;
                        l_897 = l_896;
                        --l_898;
                        unsigned int result = 0;
                        result += l_896;
                        result += l_897;
                        result += l_898;
                        atomic_add(&p_1094->g_special_values[64 * get_linear_group_id() + 58], result);
                    }
                    else
                    { /* block id: 378 */
                        (1 + 1);
                    }
                }
            }
        }
        l_774 |= (safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((((p_1094->g_791.sf |= ((+(safe_rshift_func_int8_t_s_s((0UL > p_1094->g_583.s5), ((**p_1094->g_66) < (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((~(safe_sub_func_int64_t_s_s(p_56, ((((l_913 ^= l_760) || (safe_sub_func_int32_t_s_s(((*p_1094->g_67) && (p_1094->g_170.z , (l_916 , (safe_mod_func_uint64_t_u_u((((((safe_rshift_func_int16_t_s_s(((*l_924) = ((safe_div_func_int32_t_s_s(p_1094->g_923, 0x6B68654EL)) > l_869)), 9)) , (void*)0) != p_1094->g_449) >= (-7L)) <= l_817.s2), l_781))))), p_1094->g_836[3]))) , 1L) | (**p_1094->g_66))))), p_1094->g_101[4][5][5])), l_793.x)))))) | l_760)) >= l_773) | p_1094->g_212.z), l_793.y)) > (-1L)), l_781));
        if (l_776)
            continue;
    }
    l_930++;
    return l_933;
}


/* ------------------------------------------ */
/* 
 * reads : p_1094->g_5 p_1094->g_110 p_1094->g_139 p_1094->g_42 p_1094->g_comm_values p_1094->g_77 p_1094->g_102 p_1094->g_44 p_1094->g_148 p_1094->g_151 p_1094->g_158 p_1094->g_161 p_1094->g_170 p_1094->g_71 p_1094->g_173 p_1094->g_188 p_1094->g_66 p_1094->g_67 p_1094->g_47 p_1094->g_212 p_1094->l_comm_values p_1094->g_303 p_1094->g_317 p_1094->g_86 p_1094->g_583 p_1094->g_189 p_1094->g_604 p_1094->g_447 p_1094->g_421 p_1094->g_687
 * writes: p_1094->g_134 p_1094->g_86.f0 p_1094->g_102 p_1094->g_44 p_1094->g_173 p_1094->g_42 p_1094->g_47 p_1094->g_67 p_1094->l_comm_values p_1094->g_148 p_1094->g_71 p_1094->g_101 p_1094->g_86.f1 p_1094->g_86 p_1094->g_400 p_1094->g_421 p_1094->g_457 p_1094->g_447 p_1094->g_161
 */
uint8_t  func_61(int32_t  p_62, uint8_t * p_63, int64_t * p_64, uint32_t  p_65, struct S1 * p_1094)
{ /* block id: 30 */
    int32_t *l_103 = &p_1094->g_5;
    int32_t **l_104 = &l_103;
    VECTOR(int32_t, 4) l_109 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-1L)), (-1L));
    int32_t *l_131 = (void*)0;
    int32_t *l_132 = (void*)0;
    int32_t *l_133 = (void*)0;
    int32_t *l_135 = (void*)0;
    int32_t *l_136 = (void*)0;
    int32_t *l_137 = (void*)0;
    int32_t *l_138[6];
    VECTOR(uint32_t, 4) l_157 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL);
    VECTOR(uint32_t, 2) l_160 = (VECTOR(uint32_t, 2))(1UL, 0x4953C472L);
    VECTOR(uint32_t, 4) l_169 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 5UL), 5UL);
    VECTOR(uint64_t, 4) l_202 = (VECTOR(uint64_t, 4))(0xB75832F2F50FCE14L, (VECTOR(uint64_t, 2))(0xB75832F2F50FCE14L, 0x3FF0B44413F615BDL), 0x3FF0B44413F615BDL);
    VECTOR(int32_t, 2) l_233 = (VECTOR(int32_t, 2))((-1L), 0x1B3A266CL);
    uint64_t *l_324 = (void*)0;
    VECTOR(uint8_t, 4) l_339 = (VECTOR(uint8_t, 4))(0x91L, (VECTOR(uint8_t, 2))(0x91L, 6UL), 6UL);
    VECTOR(int8_t, 16) l_362 = (VECTOR(int8_t, 16))(0x6FL, (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, (-7L)), (-7L)), (-7L), 0x6FL, (-7L), (VECTOR(int8_t, 2))(0x6FL, (-7L)), (VECTOR(int8_t, 2))(0x6FL, (-7L)), 0x6FL, (-7L), 0x6FL, (-7L));
    uint16_t l_383 = 0UL;
    uint16_t l_394 = 0x4AE7L;
    VECTOR(int8_t, 2) l_481 = (VECTOR(int8_t, 2))(0x05L, 0x5EL);
    VECTOR(int16_t, 4) l_598 = (VECTOR(int16_t, 4))(0x035DL, (VECTOR(int16_t, 2))(0x035DL, 0x7F9DL), 0x7F9DL);
    uint64_t l_665[3];
    uint16_t l_676 = 0xF705L;
    VECTOR(uint8_t, 8) l_715 = (VECTOR(uint8_t, 8))(0x96L, (VECTOR(uint8_t, 4))(0x96L, (VECTOR(uint8_t, 2))(0x96L, 7UL), 7UL), 7UL, 0x96L, 7UL);
    int i;
    for (i = 0; i < 6; i++)
        l_138[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_665[i] = 0xB5B8C946A6A84F28L;
    (*l_104) = l_103;
    if (((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(p_65, (**l_104))), 7)) <= ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_109.zywxzwyz)).s03)), ((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_1094->g_110.s232c3778)))).s2260431740307115, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(0x24BAL, ((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u((((-4L) >= (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((&p_1094->g_5 != ((safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_1094->local_1_offset, get_local_id(1), 10), (safe_add_func_int64_t_s_s((((*l_103) , ((VECTOR(int8_t, 16))((p_1094->g_86[1].f0 = (safe_lshift_func_int8_t_s_u((((safe_div_func_int32_t_s_s((p_1094->g_134.y = p_65), ((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0xF113D487L, 0UL, 0x5121EC5DL, 0x6FAEDDA4L, 4294967295UL, 4294967289UL, 0UL, 0x581468E8L)).s06)).xyyxxyyxxxyyyyxx, ((VECTOR(uint32_t, 2))(p_1094->g_139.s55)).xxyxyxxyyyyyyxyx))).s6)) <= p_65) != p_1094->g_139.sc), (*p_63)))), ((VECTOR(int8_t, 8))(0x57L)), 0x7EL, ((VECTOR(int8_t, 4))(0x5EL)), 0x3CL, 9L)).s0) & p_1094->g_comm_values[p_1094->tid]), p_65)))) , &p_1094->g_5)), p_1094->g_77.s6)), p_65))) , FAKE_DIVERGE(p_1094->global_0_offset, get_global_id(0), 10)), p_65)) == p_65), p_62)) & p_62))) <= (*l_103)), p_1094->g_110.s2)), 4294967295UL, ((VECTOR(uint32_t, 8))(0UL)), p_1094->g_5, ((VECTOR(uint32_t, 2))(0x0C11142FL)), 0x14FAD7DEL, 4294967295UL, 0xEF97960EL)).sbf, ((VECTOR(uint32_t, 2))(3UL)), ((VECTOR(uint32_t, 2))(0UL))))).yyxyxyyy)).s7241700463146762))).s11))).hi))
    { /* block id: 34 */
        int32_t l_171 = 0x6C129863L;
        VECTOR(int32_t, 4) l_180 = (VECTOR(int32_t, 4))(0x722465FAL, (VECTOR(int32_t, 2))(0x722465FAL, 0x02BA4091L), 0x02BA4091L);
        VECTOR(int64_t, 2) l_182 = (VECTOR(int64_t, 2))(0x090952E1ABEA055EL, (-2L));
        int32_t l_229 = 0x57AEABBFL;
        int32_t l_231 = (-1L);
        int32_t l_234 = 1L;
        int32_t l_235 = 0x7FB8DD52L;
        int32_t l_236 = (-1L);
        int32_t l_237 = 0x337EDD21L;
        int32_t l_238 = (-4L);
        int32_t l_239 = 0x25FF65FFL;
        int32_t l_240 = (-4L);
        int32_t l_241[10] = {(-1L),(-7L),1L,(-7L),(-1L),(-1L),(-7L),1L,(-7L),(-1L)};
        uint64_t l_242 = 0xA4F2D4D634411993L;
        int8_t l_287 = 0x75L;
        VECTOR(int16_t, 8) l_310 = (VECTOR(int16_t, 8))(0x1BD1L, (VECTOR(int16_t, 4))(0x1BD1L, (VECTOR(int16_t, 2))(0x1BD1L, 1L), 1L), 1L, 0x1BD1L, 1L);
        int32_t **l_311 = (void*)0;
        int32_t **l_312 = &l_136;
        uint32_t l_314 = 0UL;
        int i;
        for (p_1094->g_102 = (-22); (p_1094->g_102 > 16); p_1094->g_102 = safe_add_func_int32_t_s_s(p_1094->g_102, 4))
        { /* block id: 37 */
            VECTOR(uint32_t, 2) l_159 = (VECTOR(uint32_t, 2))(0xFA667865L, 3UL);
            VECTOR(uint64_t, 2) l_203 = (VECTOR(uint64_t, 2))(0xFA596293FC5627ABL, 18446744073709551611UL);
            VECTOR(uint16_t, 8) l_209 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0x1DE0L), 0x1DE0L), 0x1DE0L, 2UL, 0x1DE0L);
            int32_t l_223 = 0x3295AFFEL;
            int32_t l_224 = 6L;
            int32_t l_225 = 0x27FA219FL;
            int32_t l_226 = (-1L);
            int32_t l_227 = 1L;
            int32_t l_228 = 0x0790CDCEL;
            int32_t l_230 = 7L;
            int32_t l_232[3];
            VECTOR(uint32_t, 16) l_247 = (VECTOR(uint32_t, 16))(0xF0036B76L, (VECTOR(uint32_t, 4))(0xF0036B76L, (VECTOR(uint32_t, 2))(0xF0036B76L, 0x92A878CFL), 0x92A878CFL), 0x92A878CFL, 0xF0036B76L, 0x92A878CFL, (VECTOR(uint32_t, 2))(0xF0036B76L, 0x92A878CFL), (VECTOR(uint32_t, 2))(0xF0036B76L, 0x92A878CFL), 0xF0036B76L, 0x92A878CFL, 0xF0036B76L, 0x92A878CFL);
            uint32_t *l_248 = (void*)0;
            uint32_t *l_249 = (void*)0;
            uint32_t *l_250[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint64_t **l_255 = &p_1094->g_67;
            uint64_t *l_257 = (void*)0;
            uint64_t **l_256 = &l_257;
            uint64_t **l_258 = (void*)0;
            uint64_t *l_260 = &l_242;
            uint64_t **l_259 = &l_260;
            int64_t *l_261 = (void*)0;
            int64_t *l_262[4] = {&p_1094->g_86[1].f1,&p_1094->g_86[1].f1,&p_1094->g_86[1].f1,&p_1094->g_86[1].f1};
            int i, j;
            for (i = 0; i < 3; i++)
                l_232[i] = 1L;
            for (p_1094->g_44 = (-8); (p_1094->g_44 != (-13)); p_1094->g_44 = safe_sub_func_uint64_t_u_u(p_1094->g_44, 7))
            { /* block id: 40 */
                VECTOR(uint16_t, 4) l_156 = (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x3BC6L), 0x3BC6L);
                VECTOR(uint32_t, 4) l_162 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL);
                uint16_t *l_172[5] = {&p_1094->g_173,&p_1094->g_173,&p_1094->g_173,&p_1094->g_173,&p_1094->g_173};
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1094->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 43)), permutations[(safe_mod_func_uint32_t_u_u((0x7BD3L > (p_1094->g_173 ^= ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0x13L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_1094->g_148.s6f9d)).odd)), (uint8_t)(safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_1094->g_151.s3b)).yxyyyyxyxxxyxxxx)).se989)).z, (((((p_65 ^ ((safe_div_func_uint16_t_u_u((0x1CL >= p_65), ((safe_add_func_uint64_t_u_u(((((VECTOR(uint16_t, 16))(l_156.wyxywzyzxwyyxzxw)).s0 & ((((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_157.ywyx)).wyyywzzz)).s23, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 2))(p_1094->g_158.se9)).yyyy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_159.xx)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 4))(l_160.yxxx)).zwwyzzwy, ((VECTOR(uint32_t, 16))(0xA50500D5L, 1UL, 0UL, 2UL, ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0x4C14C3A4L, GROUP_DIVERGE(2, 1), 9UL, 0UL, ((VECTOR(uint32_t, 4))(p_1094->g_161.xxyy)))), 3UL, 5UL, 0x05602853L, 0x2CD53262L, ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(l_162.zzyxzzyw)).s52))), 0x0A8503D3L, 7UL)).sa2)).xyyyxyxy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 2))(4294967292UL, 0xE445E5F9L)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0xC7BFA83AL, 5UL, 4294967292UL, (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((((~((p_1094->g_151.s9 ^ ((+((p_1094->g_comm_values[p_1094->tid] < (safe_mod_func_uint32_t_u_u((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_169.wwyw)))).x == ((~((VECTOR(int16_t, 8))(p_1094->g_170.xwxxxywz)).s2) <= p_1094->g_110.s5)), (p_1094->g_170.z || 0x781CC2B1L)))) < (*p_63))) >= 4294967293UL)) <= 0x3704C175E38545A4L)) >= 0x9A68D69DEFF53B87L) && p_1094->g_102), p_62)), p_65)), ((VECTOR(uint32_t, 2))(4294967295UL)), 0x7C46033EL, 1UL)))).s70))).yxyy)), p_1094->g_5, 0x69405CEAL, 0xBFD8F9DCL, 0x5DAB0FEAL))))))), p_62, ((VECTOR(uint32_t, 2))(0x6EB09B28L)), 4294967293UL)).lo))).s10)).yyxy)), p_65, p_1094->g_139.s9, 4294967295UL, 0x0EE4DF8AL, ((VECTOR(uint32_t, 8))(4294967295UL)))))).s2e)), 0x287BB0CCL, 0x315525C4L)), 0UL, 0x10AE1D0AL)).hi))), 0x24F6DA58L, ((VECTOR(uint32_t, 2))(4294967290UL)), 1UL, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(2UL)), ((VECTOR(uint32_t, 2))(0x2275AA4AL)), 0xD40F6A6AL, 0xF502B33BL)).s09))).yxyyyyyxyxyyyxyx)).sa3)).xxyyxyyxyxyyyyyy, ((VECTOR(uint32_t, 16))(4294967292UL))))).s28, ((VECTOR(uint32_t, 2))(0x33289A58L))))).even != l_171) || l_162.x)) >= p_1094->g_71), p_65)) , p_1094->g_102))) & 0UL)) >= 7UL) > p_1094->g_44) & (*p_63)) || (-1L)))), (uint8_t)(*p_63)))), 0x33L, 0UL)))).odd)), ((VECTOR(uint8_t, 8))(0x2CL)), ((VECTOR(uint8_t, 2))(0xF7L)), 255UL, 0x2CL, 8UL)))).sb, 5)) > p_1094->g_110.sc), p_65)) >= 251UL))), 10))][(safe_mod_func_uint32_t_u_u(p_1094->tid, 43))]));
            }
            for (p_1094->g_42 = (-1); (p_1094->g_42 < 24); p_1094->g_42 = safe_add_func_uint32_t_u_u(p_1094->g_42, 7))
            { /* block id: 48 */
                int16_t l_178 = 0x1520L;
                VECTOR(uint32_t, 4) l_181 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0xDF2A61FCL), 0xDF2A61FCL);
                uint8_t *l_183[1][1][6];
                int32_t *l_186[9] = {&p_1094->g_5,(void*)0,&p_1094->g_5,&p_1094->g_5,(void*)0,&p_1094->g_5,&p_1094->g_5,(void*)0,&p_1094->g_5};
                int32_t ***l_187 = &l_104;
                uint8_t **l_192 = &p_1094->g_97;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 6; k++)
                            l_183[i][j][k] = (void*)0;
                    }
                }
                if ((safe_mod_func_int16_t_s_s(l_178, (safe_unary_minus_func_uint32_t_u((((VECTOR(int64_t, 16))(0x0800E7347551151FL, ((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_180.yzxzyyxzwzzxzxxx)).s5487)), ((VECTOR(uint32_t, 4))(l_181.xwzz))))).wxyzxwwx)).s0372632333065164)).scc4e)).yyzzyzyy, ((VECTOR(int64_t, 8))(l_182.xyyxyxyx))))), (l_183[0][0][2] != ((0xCF0D4CE2010D2CADL >= (&p_1094->g_5 != ((safe_add_func_uint32_t_u_u(1UL, GROUP_DIVERGE(0, 1))) , l_186[0]))) , l_183[0][0][2])), ((((*l_187) = &l_186[0]) == p_1094->g_188[2]) < 0x57A5L), l_159.x, ((VECTOR(int64_t, 2))((-1L))), (-3L), 0x1BEE515C3C2E1771L)).s4 != (**p_1094->g_66)))))))
                { /* block id: 50 */
                    int64_t l_193[10][3][8] = {{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}},{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}},{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}},{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}},{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}},{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}},{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}},{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}},{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}},{{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)},{(-1L),(-4L),2L,7L,7L,2L,(-4L),(-1L)}}};
                    int i, j, k;
                    for (p_1094->g_173 = 15; (p_1094->g_173 <= 26); ++p_1094->g_173)
                    { /* block id: 53 */
                        if (p_65)
                            break;
                        l_192 = &p_63;
                        l_171 ^= l_193[7][2][3];
                    }
                    (*l_104) = (**l_187);
                }
                else
                { /* block id: 59 */
                    VECTOR(uint64_t, 16) l_201 = (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 1UL), 1UL), 1UL, 5UL, 1UL, (VECTOR(uint64_t, 2))(5UL, 1UL), (VECTOR(uint64_t, 2))(5UL, 1UL), 5UL, 1UL, 5UL, 1UL);
                    VECTOR(int32_t, 2) l_221 = (VECTOR(int32_t, 2))((-10L), 2L);
                    int64_t *l_222 = &p_1094->g_44;
                    int i;
                    for (p_65 = 0; (p_65 >= 24); p_65 = safe_add_func_uint64_t_u_u(p_65, 9))
                    { /* block id: 62 */
                        uint64_t **l_200[2];
                        int32_t l_208 = (-1L);
                        int i;
                        for (i = 0; i < 2; i++)
                            l_200[i] = &p_1094->g_67;
                        l_171 = ((safe_div_func_int32_t_s_s((((((*p_1094->g_67) = (safe_add_func_int8_t_s_s((l_200[0] == l_200[0]), (~p_1094->g_44)))) && 0x6DCC5248648EDA7BL) ^ 4UL) != ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(7UL, 0xBE4E2F047D9953DBL)), ((VECTOR(uint64_t, 4))(8UL, 0x558D5EF94F0498DFL, 0x64537C15CB5FD59EL, 0xEB4185503AD83EAFL)).even, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_201.s19545c7d)).s5031445777271221)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(l_202.wxwxyzzywzwxxwyx)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 4))(l_203.xxyx)).wwwxzyyz, (uint64_t)((~(safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(l_208, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_209.s6071)).xzyzzwyyxzwxzzxw)).sc)) , (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_1094->g_212.xxywyzzx)).s44)), 65529UL, 0x0096L)).x, (safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_62, 6)), 0xECL)) < (safe_add_func_int32_t_s_s((l_221.x = ((VECTOR(int32_t, 4))(l_221.xxxx)).y), ((((void*)0 == l_222) == l_208) >= p_1094->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1094->tid, 43))])))), GROUP_DIVERGE(1, 1)))))) <= p_1094->g_148.sf), (*p_63)))) > GROUP_DIVERGE(2, 1))))))).s11)).yyyxxyxxxyyxxyyy))).sfd6e, (uint64_t)p_62, (uint64_t)l_208))).xzzwwxxyzwxzxzyy)).s8002, ((VECTOR(uint64_t, 4))(0x726D7F1537B6BF43L)), ((VECTOR(uint64_t, 4))(1UL))))).zzwyyzxx)).s2450063114434700))))).scc57)).xwwywzzzxwwxzxzy)).s16))).yyxyxyxx, ((VECTOR(uint64_t, 8))(0x8FEA37F8D69C6D1AL))))).s11))).even), p_1094->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1094->tid, 43))])) <= 9UL);
                    }
                }
                return (*p_63);
            }
            l_242--;
            if ((safe_lshift_func_uint8_t_u_s((l_247.s9 >= (p_62 & (l_227 = (p_1094->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1094->tid, 43))] |= (((VECTOR(uint64_t, 8))(((p_1094->g_71 == (&p_62 != (void*)0)) | (l_234 |= ((VECTOR(uint32_t, 2))(0xCFFEB184L, 5UL)).odd)), (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))((((safe_lshift_func_int8_t_s_u(0x5BL, (*p_63))) != (safe_div_func_int8_t_s_s(((((*l_259) = ((*l_256) = ((*l_255) = &p_1094->g_47))) == (void*)0) >= p_62), 2UL))) && (*p_63)), 1UL, 255UL, ((VECTOR(uint8_t, 8))(0xF2L)), 0xE8L, ((VECTOR(uint8_t, 4))(0x0FL)))))).s7e, (uint8_t)(*p_63)))).yxyxxxxyyyxxyxxx)).s3 < l_228), l_182.y, 9UL, 0x1D153DDF38A954B9L, ((VECTOR(uint64_t, 2))(7UL)), 18446744073709551615UL)).s3 ^ l_203.y))))), p_65)))
            { /* block id: 77 */
                uint32_t l_263 = 0x58915A19L;
                int32_t *l_279 = &p_1094->g_5;
                if (l_263)
                    break;
                if ((atomic_inc(&p_1094->g_atomic_input[64 * get_linear_group_id() + 23]) == 4))
                { /* block id: 80 */
                    int8_t l_264 = 0x54L;
                    int16_t l_265 = (-1L);
                    uint32_t l_266 = 9UL;
                    l_265 |= l_264;
                    if ((l_266 , 1L))
                    { /* block id: 82 */
                        int32_t *l_267 = (void*)0;
                        int32_t *l_268[7];
                        VECTOR(int32_t, 2) l_269 = (VECTOR(int32_t, 2))(0x3BB0BCBCL, (-1L));
                        uint16_t l_270 = 8UL;
                        uint32_t l_271[6][10] = {{0UL,0xF27F65B8L,0x63CB65DEL,4294967287UL,0xF27F65B8L,4294967287UL,0x63CB65DEL,0xF27F65B8L,0UL,0UL},{0UL,0xF27F65B8L,0x63CB65DEL,4294967287UL,0xF27F65B8L,4294967287UL,0x63CB65DEL,0xF27F65B8L,0UL,0UL},{0UL,0xF27F65B8L,0x63CB65DEL,4294967287UL,0xF27F65B8L,4294967287UL,0x63CB65DEL,0xF27F65B8L,0UL,0UL},{0UL,0xF27F65B8L,0x63CB65DEL,4294967287UL,0xF27F65B8L,4294967287UL,0x63CB65DEL,0xF27F65B8L,0UL,0UL},{0UL,0xF27F65B8L,0x63CB65DEL,4294967287UL,0xF27F65B8L,4294967287UL,0x63CB65DEL,0xF27F65B8L,0UL,0UL},{0UL,0xF27F65B8L,0x63CB65DEL,4294967287UL,0xF27F65B8L,4294967287UL,0x63CB65DEL,0xF27F65B8L,0UL,0UL}};
                        VECTOR(int8_t, 2) l_272 = (VECTOR(int8_t, 2))((-1L), 0x45L);
                        VECTOR(int8_t, 2) l_273 = (VECTOR(int8_t, 2))(4L, 0L);
                        int16_t l_274[10][6] = {{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L},{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L},{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L},{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L},{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L},{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L},{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L},{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L},{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L},{0x5534L,0L,0x6330L,0x5534L,(-6L),0x6330L}};
                        uint32_t l_275 = 7UL;
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_268[i] = (void*)0;
                        l_268[6] = l_267;
                        l_270 |= ((VECTOR(int32_t, 4))(l_269.xxyy)).w;
                        l_272.y = l_271[2][9];
                        l_275 ^= (((VECTOR(int8_t, 2))(l_273.xy)).odd , l_274[9][3]);
                    }
                    else
                    { /* block id: 87 */
                        uint16_t l_276 = 65526UL;
                        l_276++;
                    }
                    unsigned int result = 0;
                    result += l_264;
                    result += l_265;
                    result += l_266;
                    atomic_add(&p_1094->g_special_values[64 * get_linear_group_id() + 23], result);
                }
                else
                { /* block id: 90 */
                    (1 + 1);
                }
                l_279 = l_279;
            }
            else
            { /* block id: 94 */
                int16_t l_282 = 0x5EABL;
                for (l_229 = (-7); (l_229 != (-24)); l_229--)
                { /* block id: 97 */
                    return (*p_63);
                }
                l_282 |= 0x1BEFE6A0L;
            }
        }
        for (l_231 = (-3); (l_231 > 29); ++l_231)
        { /* block id: 105 */
            int16_t l_285 = 0x4D2FL;
            int32_t l_286 = 1L;
            int32_t l_288 = 6L;
            int32_t l_289 = (-4L);
            int32_t l_290 = 0x32DD5C3CL;
            int32_t l_291 = (-1L);
            int32_t l_292 = 0x4A2085ECL;
            int32_t l_293 = 1L;
            int32_t l_294 = 0x65B10184L;
            int32_t l_295 = 0x417ADEB0L;
            int32_t l_296 = (-3L);
            int32_t l_297[6] = {0x27C934FEL,0x59037039L,0x27C934FEL,0x27C934FEL,0x59037039L,0x27C934FEL};
            uint16_t l_298 = 0x28CAL;
            int8_t l_301 = 0L;
            int32_t *l_302 = &p_1094->g_71;
            int i;
            ++l_298;
            l_301 = ((void*)0 == &p_1094->g_71);
            l_297[2] = ((l_180.x & (l_302 != (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1094->g_303.s7a77)), 0x4CA7BEFDL, 1L, 8L, 0x713DB18AL)).s01)).odd , &p_62))) & (**p_1094->g_66));
        }
        l_241[9] = ((+(safe_rshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(p_62, l_180.y)) == (l_238 > (l_234 = p_62))), ((0UL | ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_310.s64160066)).s61)), 4L, 0x510BL)).y) && 0x632D2EFFL)))) & (((*l_104) = &l_239) == ((*l_312) = &l_171)));
        l_314--;
    }
    else
    { /* block id: 115 */
        uint16_t l_322 = 65529UL;
        int32_t l_323 = (-2L);
        int32_t l_331 = 1L;
        int32_t l_333[6] = {0x2BE39338L,(-6L),0x2BE39338L,0x2BE39338L,(-6L),0x2BE39338L};
        uint32_t l_334[3][6] = {{0xA5A06651L,0xA5A06651L,0xA5A06651L,0xA5A06651L,0xA5A06651L,0xA5A06651L},{0xA5A06651L,0xA5A06651L,0xA5A06651L,0xA5A06651L,0xA5A06651L,0xA5A06651L},{0xA5A06651L,0xA5A06651L,0xA5A06651L,0xA5A06651L,0xA5A06651L,0xA5A06651L}};
        uint64_t *l_344 = &p_1094->g_47;
        uint32_t *l_345 = (void*)0;
        int32_t *l_419 = &l_331;
        VECTOR(int64_t, 8) l_430 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x01DAEDE6AF320F0AL), 0x01DAEDE6AF320F0AL), 0x01DAEDE6AF320F0AL, 1L, 0x01DAEDE6AF320F0AL);
        VECTOR(int16_t, 8) l_597 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 8L), 8L), 8L, 3L, 8L);
        int32_t l_645 = 0x2EDF42D6L;
        uint32_t l_691[6][7][2] = {{{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L}},{{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L}},{{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L}},{{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L}},{{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L}},{{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L},{0x68480434L,0x68480434L}}};
        VECTOR(int16_t, 8) l_709 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 1L), 1L), 1L, 5L, 1L);
        union U0 *l_721[10];
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_721[i] = &p_1094->g_86[2];
        if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1094->g_317.s6d)).yyxyxyxyxxyxxyyx)).s2)
        { /* block id: 116 */
            uint8_t *l_325 = (void*)0;
            uint8_t *l_326 = (void*)0;
            uint8_t *l_327 = (void*)0;
            uint8_t *l_328[1][7][9] = {{{(void*)0,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42},{(void*)0,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42},{(void*)0,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42},{(void*)0,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42},{(void*)0,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42},{(void*)0,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42},{(void*)0,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42,(void*)0,&p_1094->g_42,&p_1094->g_42,&p_1094->g_42}}};
            int32_t l_329 = 0x0A7747AFL;
            int32_t l_330 = 0x47FA53BCL;
            int32_t l_332[4];
            int32_t *l_346 = (void*)0;
            int32_t *l_347 = (void*)0;
            int32_t *l_348 = &p_1094->g_71;
            int16_t *l_349 = (void*)0;
            int16_t *l_350 = (void*)0;
            int16_t *l_351 = (void*)0;
            int16_t *l_352 = &p_1094->g_102;
            VECTOR(int8_t, 16) l_363 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x54L), 0x54L), 0x54L, 0L, 0x54L, (VECTOR(int8_t, 2))(0L, 0x54L), (VECTOR(int8_t, 2))(0L, 0x54L), 0L, 0x54L, 0L, 0x54L);
            int64_t l_395 = 0x46ADA5B92E3AF42BL;
            union U0 l_401 = {0x5DL};
            int8_t l_424 = 0L;
            VECTOR(int64_t, 2) l_429 = (VECTOR(int64_t, 2))(0x1ED2DD8162950D39L, 1L);
            int64_t *l_433 = &l_395;
            uint16_t l_452 = 0x1219L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_332[i] = 5L;
            l_329 = (((p_62 == p_62) ^ (p_1094->g_148.sc |= (p_65 != ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((safe_mul_func_int16_t_s_s((((((+((safe_mul_func_int16_t_s_s(((l_322 = p_65) != p_65), l_323)) || 1L)) ^ p_1094->g_212.z) && p_62) | 1UL) <= (*p_63)), 0x182AL)) ^ l_323), 1UL, 0UL, 0UL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(9UL)), 18446744073709551608UL)).s6716703466157531)).sf , p_64) == l_324)))) == l_329);
            l_334[1][1]--;
            if (((((safe_rshift_func_int8_t_s_u(l_339.w, 4)) | (safe_sub_func_int8_t_s_s(((*l_104) != ((0x38L > FAKE_DIVERGE(p_1094->local_0_offset, get_local_id(0), 10)) , &l_332[1])), (safe_rshift_func_uint8_t_u_s(0x43L, (((*l_352) = ((p_62 , l_344) == (((*l_348) = (((*p_63) = (l_345 != (void*)0)) && GROUP_DIVERGE(2, 1))) , (void*)0))) < l_332[2])))))) ^ 0xBDF6BB401890F276L) , l_329))
            { /* block id: 124 */
                l_332[1] |= (l_333[0] = p_65);
            }
            else
            { /* block id: 127 */
                for (l_329 = 0; (l_329 < 20); l_329 = safe_add_func_int8_t_s_s(l_329, 3))
                { /* block id: 130 */
                    (*l_104) = &l_333[3];
                }
            }
            for (p_1094->g_173 = 28; (p_1094->g_173 >= 28); p_1094->g_173 = safe_add_func_uint32_t_u_u(p_1094->g_173, 2))
            { /* block id: 136 */
                int32_t *l_357 = (void*)0;
                int8_t *l_364 = &p_1094->g_101[0][5][4];
                int64_t *l_365 = &p_1094->g_86[1].f1;
                int64_t *l_379 = &p_1094->g_44;
                int64_t **l_378 = &l_379;
                int64_t *l_380 = &p_1094->g_44;
                int64_t **l_381 = (void*)0;
                int64_t **l_382 = &l_380;
                int16_t *l_384 = (void*)0;
                int16_t *l_385 = (void*)0;
                int16_t *l_386 = (void*)0;
                int16_t *l_387 = (void*)0;
                int16_t *l_388 = (void*)0;
                int16_t *l_389 = (void*)0;
                int16_t *l_390 = (void*)0;
                int16_t *l_391 = (void*)0;
                int16_t *l_392 = (void*)0;
                int16_t *l_393[10][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t l_576 = (-9L);
                int32_t l_577 = (-9L);
                int i, j, k;
                l_357 = &l_333[0];
                if ((safe_add_func_uint32_t_u_u(p_62, (((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_362.sfb36fae6d1eb2e24)).sca42)).yzwyyyxzxxyzyywx, ((VECTOR(int8_t, 16))(l_363.se699c39a55573263))))).odd)).s4, ((*l_364) = p_65))) != (0x441D8366L == l_322)) ^ ((p_1094->g_5 & (((*l_365) = p_65) <= (((safe_mul_func_uint16_t_u_u(((l_331 = 0x19A8C33AL) | (safe_rshift_func_uint8_t_u_s((+(safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(2L, 0x4010609C211777CCL)).xyxxyyyxyxyxxyyx))).s1, ((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((((VECTOR(uint32_t, 2))(5UL, 0xDDE1C239L)).even && (((l_329 = ((*l_352) = ((((*l_378) = p_64) == ((*l_382) = l_380)) , l_383))) <= p_65) ^ (*l_357))) < l_363.sc), p_65)), (*p_63))), l_394)) , p_62)))), p_1094->g_42))), (*l_357))) , l_395) , 0x3EFF802DCEDD759CL))) , 0xD861L)))))
                { /* block id: 145 */
                    l_357 = (void*)0;
                    if (p_65)
                        continue;
                }
                else
                { /* block id: 148 */
                    union U0 *l_398 = &p_1094->g_86[1];
                    union U0 *l_399 = &p_1094->g_400;
                    int32_t l_408 = (-1L);
                    uint64_t *l_420 = &p_1094->g_421;
                    VECTOR(int64_t, 8) l_427 = (VECTOR(int64_t, 8))(0x717EB1316676127FL, (VECTOR(int64_t, 4))(0x717EB1316676127FL, (VECTOR(int64_t, 2))(0x717EB1316676127FL, 0L), 0L), 0L, 0x717EB1316676127FL, 0L);
                    int64_t **l_431 = (void*)0;
                    int64_t **l_432[10] = {&l_365,&l_365,(void*)0,&l_365,&l_365,&l_365,&l_365,(void*)0,&l_365,&l_365};
                    uint16_t *l_434 = &l_383;
                    VECTOR(uint32_t, 8) l_448 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xB12F56E8L), 0xB12F56E8L), 0xB12F56E8L, 1UL, 0xB12F56E8L);
                    int64_t *l_451 = (void*)0;
                    int32_t l_454[10] = {1L,5L,1L,1L,5L,1L,1L,5L,1L,1L};
                    VECTOR(int8_t, 2) l_469 = (VECTOR(int8_t, 2))(0x2FL, 9L);
                    uint64_t l_473 = 0xA7FE17AEE287AAA1L;
                    int i;
                    l_330 = ((*l_419) = (safe_rshift_func_int8_t_s_u(((*l_364) = ((l_401 = ((*l_399) = ((*l_398) = p_1094->g_86[3]))) , (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(2UL, p_1094->g_139.s0, 6UL, 0UL)).x, (safe_mod_func_uint64_t_u_u((((*p_1094->g_67) = 1UL) > (safe_mod_func_int16_t_s_s(((p_1094->g_212.y > (p_64 != ((l_408 <= ((safe_lshift_func_int8_t_s_s((GROUP_DIVERGE(1, 1) | l_408), (((*l_420) = (((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(((void*)0 == l_419), FAKE_DIVERGE(p_1094->global_2_offset, get_global_id(2), 10))), p_62)), p_1094->g_110.s2)) != 0x19F1CB1B95DD95DDL), (*p_63))) == l_408) ^ (*p_63))) , p_62))) , p_65)) , (void*)0))) || l_329), p_65))), 0x4EA37ED070690EF1L)))))), (*p_63))));
                    if ((+((safe_mul_func_int16_t_s_s((l_424 ^ (((*l_357) ^ l_408) | 18446744073709551610UL)), ((*l_434) &= (safe_sub_func_uint16_t_u_u(((((VECTOR(int64_t, 8))(9L, (-6L), ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))(0x110F1B8E5669A189L, 0x783081576C48EC63L)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_427.s5515)).zwzywzzwzxwyzxyy)).s3f))), 0x48739C90AC057098L, ((*l_365) = ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))((-10L), ((VECTOR(int64_t, 2))(p_1094->g_428.sdf)), 0x126A54A9079387DAL)).odd, ((VECTOR(int64_t, 2))(l_429.yx))))).yxyyxxxx)).hi, ((VECTOR(int64_t, 16))(p_62, ((VECTOR(int64_t, 4))(l_430.s7633)), 1L, 0x5081DB76AE8B2CF0L, p_65, ((l_433 = l_380) == (void*)0), 0x0A34D20ECBBD2CC5L, ((VECTOR(int64_t, 2))(0x011DB24D3CD8CF10L)), ((VECTOR(int64_t, 2))(0x3CECD2546AE9C315L)), 0x659029FE28174EE4L, 0x23689681F8693797L)).sa36c))), ((VECTOR(int64_t, 4))(0x1C58CA349E4057D9L)), ((VECTOR(int64_t, 4))(1L))))).w), 0x0E8E82AA7C79F229L, 1L)).s2 && (*p_1094->g_67)) <= (*l_357)), 0UL))))) > p_1094->g_161.x)))
                    { /* block id: 160 */
                        uint16_t *l_453 = &l_322;
                        uint16_t *l_455[2];
                        int32_t l_456 = 4L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_455[i] = (void*)0;
                        (*l_104) = l_357;
                        (*l_104) = l_357;
                        (*l_103) = (safe_mod_func_int64_t_s_s(((((-1L) > (safe_lshift_func_int8_t_s_s(0x18L, 2))) < 7UL) || (l_456 = (safe_mul_func_int8_t_s_s((l_329 = ((l_332[3] = (safe_mul_func_int8_t_s_s(4L, ((VECTOR(int8_t, 8))((safe_rshift_func_uint16_t_u_u(((*l_453) = ((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(p_1094->g_447.s5748c16e)).odd))).xyxyxyxywxwxyxxx, ((VECTOR(uint32_t, 16))(l_448.s3225347551437573))))))).s5, (((~(l_330 >= p_65)) & (l_452 = ((*l_434) ^= (p_65 >= ((p_1094->g_450 = (p_1094->g_449 = l_344)) == (l_451 = p_64)))))) < 0x001DL))) != p_1094->g_110.sf)), p_62)), l_454[5], p_65, 0x32L, ((VECTOR(int8_t, 4))((-1L))))).s2))) || l_427.s3)), p_62)))), (*p_1094->g_67)));
                    }
                    else
                    { /* block id: 173 */
                        uint8_t **l_459 = &l_328[0][2][4];
                        uint8_t ***l_458 = &l_459;
                        int32_t l_464 = 1L;
                        VECTOR(uint16_t, 4) l_472 = (VECTOR(uint16_t, 4))(0x962CL, (VECTOR(uint16_t, 2))(0x962CL, 0UL), 0UL);
                        uint64_t **l_476 = &l_420;
                        int32_t l_488[1][10][5] = {{{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L},{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L},{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L},{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L},{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L},{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L},{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L},{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L},{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L},{1L,0x596BB040L,0x00B0525BL,0x6481875AL,0x596BB040L}}};
                        int i, j, k;
                        (*l_458) = (p_1094->g_457 = (void*)0);
                        (*l_357) = (safe_lshift_func_uint8_t_u_s(0xFCL, (safe_sub_func_int16_t_s_s(((p_1094->g_317.sb || (-4L)) , l_464), (safe_mul_func_uint8_t_u_u(((0L != (((*l_344) ^= p_62) && ((((2L < ((*l_364) = 0x4CL)) < (((((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_469.yyyxyxyxyxxyyxxy)).sa, 1)) == (safe_sub_func_uint8_t_u_u((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_472.yy)).yxyxyxyxyxyyyyyy)).s4 == ((p_65 ^ 0xA05BL) && 4UL)), 0x51L))) , (*l_419)) ^ p_1094->g_110.sc) <= p_62)) & l_448.s5) != 0x5DL))) >= l_473), 0x76L))))));
                        l_488[0][4][2] |= (safe_mod_func_int16_t_s_s(l_464, (((*l_357) = (((((*l_476) = p_64) == (void*)0) | (safe_lshift_func_int8_t_s_s((((*l_434) &= (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(4L, ((VECTOR(int8_t, 2))(l_481.yy)), (p_1094->g_148.s1 && (safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(((l_408 = l_427.s3) & ((l_344 != (void*)0) == p_1094->g_158.s5)), 9)) || ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))((p_1094->g_161.x ^ p_65), p_1094->g_71, 0x67B7L, 0UL)).hi)))).odd) & (*l_419)), p_1094->g_447.s0)), 0L))), 4L, ((VECTOR(int8_t, 2))(0x30L)), 0L)).s2762401001611322)).even, ((VECTOR(uint8_t, 8))(0x68L))))).s6, 0x0276L))) == 0UL), p_65))) >= 2UL)) | 1UL)));
                    }
                }
                if ((atomic_inc(&p_1094->l_atomic_input[62]) == 9))
                { /* block id: 187 */
                    int64_t l_489 = 0x3EC9F7D8D29AA6CBL;
                    uint16_t l_490 = 65531UL;
                    uint16_t l_493 = 65534UL;
                    VECTOR(int32_t, 8) l_531 = (VECTOR(int32_t, 8))(0x258105D8L, (VECTOR(int32_t, 4))(0x258105D8L, (VECTOR(int32_t, 2))(0x258105D8L, 0x77FE9B00L), 0x77FE9B00L), 0x77FE9B00L, 0x258105D8L, 0x77FE9B00L);
                    VECTOR(int32_t, 4) l_532 = (VECTOR(int32_t, 4))(0x24871C79L, (VECTOR(int32_t, 2))(0x24871C79L, 0L), 0L);
                    VECTOR(int32_t, 8) l_533 = (VECTOR(int32_t, 8))(0x022C5B31L, (VECTOR(int32_t, 4))(0x022C5B31L, (VECTOR(int32_t, 2))(0x022C5B31L, (-1L)), (-1L)), (-1L), 0x022C5B31L, (-1L));
                    VECTOR(int16_t, 8) l_534 = (VECTOR(int16_t, 8))(0x2148L, (VECTOR(int16_t, 4))(0x2148L, (VECTOR(int16_t, 2))(0x2148L, 3L), 3L), 3L, 0x2148L, 3L);
                    int64_t l_535 = 0x3C75E54312C020A7L;
                    uint32_t l_536 = 5UL;
                    VECTOR(int64_t, 2) l_537 = (VECTOR(int64_t, 2))(0x150645EE44639676L, 0x1463473689123336L);
                    int16_t l_538[8][6][5] = {{{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L}},{{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L}},{{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L}},{{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L}},{{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L}},{{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L}},{{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L}},{{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L},{0x379EL,0x284CL,0x526AL,0x7ABCL,0x5A88L}}};
                    int8_t l_539[6][10][4] = {{{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL}},{{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL}},{{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL}},{{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL}},{{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL}},{{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL},{0L,0x30L,0x57L,0x3FL}}};
                    int8_t l_540[7][10] = {{(-1L),0x75L,1L,0x08L,1L,0x75L,(-1L),0x48L,2L,2L},{(-1L),0x75L,1L,0x08L,1L,0x75L,(-1L),0x48L,2L,2L},{(-1L),0x75L,1L,0x08L,1L,0x75L,(-1L),0x48L,2L,2L},{(-1L),0x75L,1L,0x08L,1L,0x75L,(-1L),0x48L,2L,2L},{(-1L),0x75L,1L,0x08L,1L,0x75L,(-1L),0x48L,2L,2L},{(-1L),0x75L,1L,0x08L,1L,0x75L,(-1L),0x48L,2L,2L},{(-1L),0x75L,1L,0x08L,1L,0x75L,(-1L),0x48L,2L,2L}};
                    uint32_t l_541 = 0x8A9D9E8EL;
                    VECTOR(uint8_t, 4) l_542 = (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0x65L), 0x65L);
                    VECTOR(int16_t, 4) l_543 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 1L), 1L);
                    VECTOR(uint16_t, 2) l_544 = (VECTOR(uint16_t, 2))(0x2931L, 65528UL);
                    uint32_t l_545 = 0UL;
                    uint64_t l_546 = 7UL;
                    int16_t l_547 = 0x3C12L;
                    int16_t l_548 = 3L;
                    uint8_t l_549 = 246UL;
                    uint16_t l_550 = 2UL;
                    int32_t l_551 = (-2L);
                    int32_t *l_572[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_573 = (void*)0;
                    int i, j, k;
                    ++l_490;
                    if (l_493)
                    { /* block id: 189 */
                        uint16_t l_494 = 65529UL;
                        uint8_t l_495 = 247UL;
                        int32_t l_497[10][9][2] = {{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}},{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}},{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}},{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}},{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}},{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}},{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}},{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}},{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}},{{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)},{1L,(-4L)}}};
                        int32_t *l_496 = &l_497[0][6][1];
                        uint32_t l_498 = 8UL;
                        int i, j, k;
                        l_495 &= l_494;
                        l_496 = (void*)0;
                        l_498 = (-10L);
                    }
                    else
                    { /* block id: 193 */
                        VECTOR(int32_t, 8) l_499 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x17A11BA6L), 0x17A11BA6L), 0x17A11BA6L, 9L, 0x17A11BA6L);
                        VECTOR(int32_t, 16) l_500 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L, (VECTOR(int32_t, 2))((-2L), 1L), (VECTOR(int32_t, 2))((-2L), 1L), (-2L), 1L, (-2L), 1L);
                        VECTOR(int32_t, 16) l_501 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0L), 0L), 0L, (-10L), 0L, (VECTOR(int32_t, 2))((-10L), 0L), (VECTOR(int32_t, 2))((-10L), 0L), (-10L), 0L, (-10L), 0L);
                        VECTOR(int32_t, 2) l_502 = (VECTOR(int32_t, 2))(0x022D71B3L, 1L);
                        int32_t l_503 = 0x74ED07EFL;
                        uint8_t l_504 = 0xD7L;
                        VECTOR(int32_t, 8) l_505 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x1C622964L), 0x1C622964L), 0x1C622964L, 4L, 0x1C622964L);
                        VECTOR(int32_t, 4) l_506 = (VECTOR(int32_t, 4))(0x6F44A66CL, (VECTOR(int32_t, 2))(0x6F44A66CL, 1L), 1L);
                        VECTOR(int16_t, 8) l_507 = (VECTOR(int16_t, 8))(0x1D8FL, (VECTOR(int16_t, 4))(0x1D8FL, (VECTOR(int16_t, 2))(0x1D8FL, 2L), 2L), 2L, 0x1D8FL, 2L);
                        VECTOR(uint16_t, 8) l_508 = (VECTOR(uint16_t, 8))(0x05B5L, (VECTOR(uint16_t, 4))(0x05B5L, (VECTOR(uint16_t, 2))(0x05B5L, 6UL), 6UL), 6UL, 0x05B5L, 6UL);
                        int64_t l_509 = (-1L);
                        VECTOR(int32_t, 8) l_510 = (VECTOR(int32_t, 8))(0x7750471FL, (VECTOR(int32_t, 4))(0x7750471FL, (VECTOR(int32_t, 2))(0x7750471FL, 0x3C7F57D6L), 0x3C7F57D6L), 0x3C7F57D6L, 0x7750471FL, 0x3C7F57D6L);
                        int32_t l_511 = (-6L);
                        VECTOR(int32_t, 4) l_512 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                        uint64_t l_513 = 0x7D751CA857D445FDL;
                        uint64_t l_514[8][1][4] = {{{1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL}}};
                        int64_t l_515 = 0x5CAF45D74FC0A67FL;
                        int16_t l_516 = 0x6723L;
                        uint8_t l_517 = 0xFBL;
                        uint32_t l_518[10] = {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL};
                        uint64_t l_519 = 3UL;
                        uint16_t l_520 = 65529UL;
                        uint64_t l_521[5] = {18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL};
                        uint64_t l_522 = 0x8D9FD7A8BE28A522L;
                        uint16_t l_523[8][4][8] = {{{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL}},{{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL}},{{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL}},{{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL}},{{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL}},{{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL}},{{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL}},{{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL},{0UL,0UL,0x37A0L,0x848AL,1UL,0x848AL,0x37A0L,0UL}}};
                        int32_t l_524 = 0x52021BF6L;
                        int32_t *l_525 = (void*)0;
                        VECTOR(int64_t, 8) l_526 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        uint8_t l_527 = 0UL;
                        int16_t l_528 = 8L;
                        int16_t l_529 = (-8L);
                        uint32_t l_530 = 0UL;
                        int i, j, k;
                        l_524 = ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(0x21780AEAL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-1L), (-2L), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(l_499.s41)).yxxxyxxx, ((VECTOR(int32_t, 4))(l_500.s3669)).zyxxwzzx))).s1, ((VECTOR(int32_t, 2))(l_501.s2e)), 6L, 0L, 0L)))), 0x66972555L, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_502.yyxx)), l_503, 1L, 0x00AF99B0L, 0x1E764611L)).s64, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_504, (-1L), 0x3B3EB47BL, ((VECTOR(int32_t, 4))(l_505.s6446)), (-10L))).s56)), ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))((l_522 = (l_521[3] &= ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(l_506.yxxw)).odd))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(l_507.s43450570)).hi, ((VECTOR(int16_t, 2))(7L, (-8L))).yyyy))).yxyyyzyzwxywywzw, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_508.s33)).xxxxyxxyyyxxxyyx)).s8223)).yzzxzwzz)).s0215444477717667))).s779e)).xzxwywwwyyzywyyx, (int32_t)l_509))).sed63)), (-1L), 0x265E6842L)).s1465076347427263, ((VECTOR(int32_t, 16))(0L, 0x1D47070BL, (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_510.s2101)))), l_511, (-1L), 0x34C01A84L, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x2C5C25D9L, (-5L))).yxyy, ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(l_512.wzyw)).ywzxwyyyyzywxyzw, (int32_t)(l_499.s7 = l_513), (int32_t)(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))((l_514[5][0][0] , l_515), l_516, 4L, (-3L))), ((VECTOR(int64_t, 4))(1L)), ((VECTOR(int64_t, 4))((-1L)))))), 0x50CA67768931031BL, ((VECTOR(int64_t, 4))(0x71703D3739D2D553L)), l_517, 0x0250BB03E4087F35L, 6L, l_518[4], l_519, (-2L), 1L)).s93)).xxyy)).yxzxywwywwzzywyx, ((VECTOR(int64_t, 16))(9L))))).s93)), ((VECTOR(int64_t, 2))(0L))))).lo , l_520)))).sb116, ((VECTOR(int32_t, 4))(0x26AFC0D3L))))), 0x1CC4F3BAL, 1L))))).s9)), 0x09C47EFBL, 0x62A772E0L, ((VECTOR(int32_t, 4))(0x2976FC3DL)), ((VECTOR(int32_t, 2))(0x17749102L)), ((VECTOR(int32_t, 2))((-1L))), 0x4494E97CL, ((VECTOR(int32_t, 4))((-1L))))), ((VECTOR(int32_t, 16))(0x116D26ACL))))).s55))).odd, ((VECTOR(int32_t, 4))(0x2468F6A1L)), 0x0307DFDAL)).lo, ((VECTOR(int32_t, 8))((-10L)))))).s50)), ((VECTOR(int32_t, 4))(1L)), 0x68B176E7L)), 0x3E7A6BC3L, ((VECTOR(int32_t, 4))(1L)), 0x2DA38D7DL, (-3L), 7L)).s02ce, (int32_t)l_523[7][3][0]))).y;
                        l_525 = (void*)0;
                        l_527 ^= l_526.s6;
                        l_530 ^= (l_529 |= l_528);
                    }
                    if ((l_531.s0 = ((VECTOR(int32_t, 8))(0x4707B488L, 0L, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))((-1L), 6L)).yyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))((-10L), 0x6E145B2DL)), 0x203F1FFFL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x252E0181L, ((VECTOR(int32_t, 8))(l_531.s70066267)), ((VECTOR(int32_t, 2))((-1L), 0x51716123L)), ((VECTOR(int32_t, 4))(l_532.ywyw)), 3L)).sb512))))).lo)).xxyx))).y, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_533.s3502317760153612)))))).hi, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_534.s13040532)))).odd, (int16_t)l_535, (int16_t)((l_536 , ((VECTOR(int64_t, 16))(l_537.xyyyxxyxxyxyyxyy)).s7) , (((l_541 = ((l_539[0][4][3] |= (l_538[2][4][3] , FAKE_DIVERGE(p_1094->local_2_offset, get_local_id(2), 10))) , l_540[3][7])) , l_542.w) , ((VECTOR(int16_t, 16))(l_543.zzxwwxwxxwyzxxxx)).s6))))).hi, ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(l_544.xyxy)).zzzxyzww, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_545, (l_547 |= (l_546 , 0UL)), l_548, 0UL, l_549, l_550, l_551, ((VECTOR(uint16_t, 8))(0UL)), 65535UL)).even)), ((VECTOR(uint16_t, 8))(1UL))))).s74))).yyyxxxxx, ((VECTOR(int32_t, 8))(0x5E193A45L))))).lo, ((VECTOR(int32_t, 4))(8L))))), (-10L))).s2))
                    { /* block id: 207 */
                        uint64_t l_554 = 1UL;
                        uint64_t *l_553 = &l_554;
                        uint64_t **l_552 = &l_553;
                        uint64_t **l_555 = &l_553;
                        int64_t l_556[4];
                        uint32_t l_557 = 0x26E3CE83L;
                        int32_t l_561[6];
                        int32_t *l_560 = &l_561[0];
                        int32_t *l_562 = &l_561[0];
                        int32_t *l_563 = &l_561[0];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_556[i] = 0x21B7A12071E3B58CL;
                        for (i = 0; i < 6; i++)
                            l_561[i] = (-9L);
                        l_555 = l_552;
                        --l_557;
                        l_563 = (l_560 = (l_562 = l_560));
                    }
                    else
                    { /* block id: 213 */
                        int32_t l_565 = 7L;
                        int32_t *l_564[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint16_t l_566 = 1UL;
                        uint64_t l_569 = 18446744073709551613UL;
                        int i;
                        l_564[7] = (void*)0;
                        --l_566;
                        l_569--;
                    }
                    l_573 = l_572[0];
                    unsigned int result = 0;
                    result += l_489;
                    result += l_490;
                    result += l_493;
                    result += l_531.s7;
                    result += l_531.s6;
                    result += l_531.s5;
                    result += l_531.s4;
                    result += l_531.s3;
                    result += l_531.s2;
                    result += l_531.s1;
                    result += l_531.s0;
                    result += l_532.w;
                    result += l_532.z;
                    result += l_532.y;
                    result += l_532.x;
                    result += l_533.s7;
                    result += l_533.s6;
                    result += l_533.s5;
                    result += l_533.s4;
                    result += l_533.s3;
                    result += l_533.s2;
                    result += l_533.s1;
                    result += l_533.s0;
                    result += l_534.s7;
                    result += l_534.s6;
                    result += l_534.s5;
                    result += l_534.s4;
                    result += l_534.s3;
                    result += l_534.s2;
                    result += l_534.s1;
                    result += l_534.s0;
                    result += l_535;
                    result += l_536;
                    result += l_537.y;
                    result += l_537.x;
                    int l_538_i0, l_538_i1, l_538_i2;
                    for (l_538_i0 = 0; l_538_i0 < 8; l_538_i0++) {
                        for (l_538_i1 = 0; l_538_i1 < 6; l_538_i1++) {
                            for (l_538_i2 = 0; l_538_i2 < 5; l_538_i2++) {
                                result += l_538[l_538_i0][l_538_i1][l_538_i2];
                            }
                        }
                    }
                    int l_539_i0, l_539_i1, l_539_i2;
                    for (l_539_i0 = 0; l_539_i0 < 6; l_539_i0++) {
                        for (l_539_i1 = 0; l_539_i1 < 10; l_539_i1++) {
                            for (l_539_i2 = 0; l_539_i2 < 4; l_539_i2++) {
                                result += l_539[l_539_i0][l_539_i1][l_539_i2];
                            }
                        }
                    }
                    int l_540_i0, l_540_i1;
                    for (l_540_i0 = 0; l_540_i0 < 7; l_540_i0++) {
                        for (l_540_i1 = 0; l_540_i1 < 10; l_540_i1++) {
                            result += l_540[l_540_i0][l_540_i1];
                        }
                    }
                    result += l_541;
                    result += l_542.w;
                    result += l_542.z;
                    result += l_542.y;
                    result += l_542.x;
                    result += l_543.w;
                    result += l_543.z;
                    result += l_543.y;
                    result += l_543.x;
                    result += l_544.y;
                    result += l_544.x;
                    result += l_545;
                    result += l_546;
                    result += l_547;
                    result += l_548;
                    result += l_549;
                    result += l_550;
                    result += l_551;
                    atomic_add(&p_1094->l_special_values[62], result);
                }
                else
                { /* block id: 219 */
                    (1 + 1);
                }
                for (p_1094->g_42 = 0; (p_1094->g_42 >= 33); p_1094->g_42 = safe_add_func_int8_t_s_s(p_1094->g_42, 4))
                { /* block id: 224 */
                    uint16_t l_578 = 1UL;
                    l_578++;
                }
            }
        }
        else
        { /* block id: 228 */
            int16_t l_589 = 0x540CL;
            VECTOR(int16_t, 2) l_594 = (VECTOR(int16_t, 2))(1L, 6L);
            VECTOR(int16_t, 4) l_596 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3D38L), 0x3D38L);
            uint32_t *l_637 = (void*)0;
            uint32_t *l_638[7];
            int32_t l_653 = (-7L);
            uint64_t **l_662 = &p_1094->g_67;
            int64_t *l_668 = &p_1094->g_44;
            int64_t **l_667[2];
            VECTOR(uint64_t, 2) l_669 = (VECTOR(uint64_t, 2))(0UL, 0UL);
            int32_t l_671 = 4L;
            int32_t l_672 = 0x3FD793DFL;
            int32_t **l_685[1];
            uint64_t l_688 = 0x8ED4BF8F0F2483D9L;
            uint16_t l_694[9][6] = {{0xF72DL,7UL,65535UL,0xE685L,7UL,0xE685L},{0xF72DL,7UL,65535UL,0xE685L,7UL,0xE685L},{0xF72DL,7UL,65535UL,0xE685L,7UL,0xE685L},{0xF72DL,7UL,65535UL,0xE685L,7UL,0xE685L},{0xF72DL,7UL,65535UL,0xE685L,7UL,0xE685L},{0xF72DL,7UL,65535UL,0xE685L,7UL,0xE685L},{0xF72DL,7UL,65535UL,0xE685L,7UL,0xE685L},{0xF72DL,7UL,65535UL,0xE685L,7UL,0xE685L},{0xF72DL,7UL,65535UL,0xE685L,7UL,0xE685L}};
            int32_t l_712 = 0x099FA774L;
            VECTOR(int32_t, 16) l_727 = (VECTOR(int32_t, 16))(0x2DAC774EL, (VECTOR(int32_t, 4))(0x2DAC774EL, (VECTOR(int32_t, 2))(0x2DAC774EL, 1L), 1L), 1L, 0x2DAC774EL, 1L, (VECTOR(int32_t, 2))(0x2DAC774EL, 1L), (VECTOR(int32_t, 2))(0x2DAC774EL, 1L), 0x2DAC774EL, 1L, 0x2DAC774EL, 1L);
            int i, j;
            for (i = 0; i < 7; i++)
                l_638[i] = (void*)0;
            for (i = 0; i < 2; i++)
                l_667[i] = &l_668;
            for (i = 0; i < 1; i++)
                l_685[i] = &p_1094->g_189[5][0][1];
            (*l_419) = (safe_add_func_int32_t_s_s((*l_419), (((VECTOR(int8_t, 8))(p_1094->g_583.s44202124)).s7 ^ (*p_63))));
            for (p_1094->g_42 = 0; (p_1094->g_42 > 25); p_1094->g_42 = safe_add_func_uint8_t_u_u(p_1094->g_42, 1))
            { /* block id: 232 */
                uint8_t *l_588 = (void*)0;
                int16_t *l_595 = &p_1094->g_102;
                VECTOR(int16_t, 4) l_599 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x72E1L), 0x72E1L);
                int8_t *l_607 = &p_1094->g_101[0][5][4];
                int i;
                (*l_419) = (safe_lshift_func_int8_t_s_s((((l_589 = 0x66L) || (safe_mod_func_uint32_t_u_u(p_62, (safe_div_func_uint16_t_u_u(0x9598L, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x3323L, 0x2B20L)))))), ((VECTOR(int16_t, 16))(2L, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(l_594.yyyyyyyxyyxyxxxx)).s7cc7, (int16_t)((*l_595) = (l_419 == p_1094->g_189[5][0][1]))))).yzywzyyxxwwyyzwy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_596.yxxw)).odd)).xyyyxyyyyxxyyyyx))).odd))), ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_597.s0670)))).hi, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(0x2AE8L, 0x29D6L)), ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(l_598.xwwxywxywxxzwyzw)).s8a, ((VECTOR(int16_t, 16))(l_599.zwzxzwwwwxyyxwwx)).s4d, ((VECTOR(int16_t, 16))(0x7A59L, ((safe_sub_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_1094->g_604.xxyyyyxxyxyxyxxy)).s1, ((safe_div_func_int64_t_s_s((p_1094->g_77.s7 == ((*l_607) = (-2L))), (safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((**l_104), ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))((0x95L <= 1UL), ((VECTOR(int16_t, 4))(0x16C4L)), 0x091EL, l_589, p_65, 0L, p_62, ((VECTOR(int16_t, 4))(1L)), 0x1F2CL, (-10L))).sf29b, ((VECTOR(int16_t, 4))(0x0CECL))))).w)), 7)))) , p_62))) , &p_1094->g_67) == &l_344), 0xEEB2L)) | 0x455BL), 8L, (-1L), l_599.y, 0x0534L, p_1094->g_604.y, 0x16C0L, ((VECTOR(int16_t, 8))(6L)))).s3f))), ((VECTOR(int16_t, 2))((-8L))))))))).yyyyyxxy, ((VECTOR(int16_t, 8))(1L))))).s16, ((VECTOR(int16_t, 2))(0L))))).yyxxxxxyyxyyxxxx, ((VECTOR(int16_t, 16))(7L)), ((VECTOR(int16_t, 16))(0x65C7L))))).se0)).xxxyxxxx)).s15, ((VECTOR(int16_t, 2))((-10L)))))), ((VECTOR(int16_t, 4))(0x33F0L)), 0x7052L)).s2, ((VECTOR(int16_t, 2))(1L)), p_65, (-5L), 0x2B08L)).s1504311555231612, ((VECTOR(int16_t, 16))((-4L)))))).s7))))) , p_1094->g_303.s2), 3));
                if ((atomic_inc(&p_1094->g_atomic_input[64 * get_linear_group_id() + 19]) == 2))
                { /* block id: 238 */
                    int32_t l_612 = 0x0721F9ACL;
                    uint8_t l_631 = 0xD2L;
                    uint32_t l_632 = 4294967295UL;
                    int32_t l_634 = (-10L);
                    int32_t *l_633 = &l_634;
                    int32_t *l_635 = &l_634;
                    uint32_t l_636 = 4294967295UL;
                    if (l_612)
                    { /* block id: 239 */
                        int64_t l_613 = 0x490E0D288432705EL;
                        int16_t l_614 = 0x4C6CL;
                        l_614 |= l_613;
                    }
                    else
                    { /* block id: 241 */
                        int32_t l_616 = 0x175D01CEL;
                        int32_t *l_615[4][7];
                        int32_t *l_617[6][3][8] = {{{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616}},{{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616}},{{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616}},{{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616}},{{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616}},{{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616},{&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616}}};
                        VECTOR(int64_t, 8) l_618 = (VECTOR(int64_t, 8))(0x5F09DE650A60669EL, (VECTOR(int64_t, 4))(0x5F09DE650A60669EL, (VECTOR(int64_t, 2))(0x5F09DE650A60669EL, (-2L)), (-2L)), (-2L), 0x5F09DE650A60669EL, (-2L));
                        int32_t l_619 = (-3L);
                        int32_t l_620 = 0L;
                        VECTOR(int32_t, 4) l_621 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-4L)), (-4L));
                        uint16_t l_622[8][7][4] = {{{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL}},{{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL}},{{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL}},{{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL}},{{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL}},{{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL}},{{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL}},{{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL},{65529UL,4UL,6UL,1UL}}};
                        uint8_t l_623 = 0xF0L;
                        VECTOR(int32_t, 2) l_624 = (VECTOR(int32_t, 2))(3L, 1L);
                        VECTOR(int32_t, 4) l_625 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2F224300L), 0x2F224300L);
                        uint16_t l_626 = 0UL;
                        VECTOR(int32_t, 16) l_627 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int32_t, 2))(0L, (-6L)), (VECTOR(int32_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
                        VECTOR(int64_t, 4) l_628 = (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x2DB83D849FAC2251L), 0x2DB83D849FAC2251L);
                        int32_t *l_629 = &l_616;
                        int32_t *l_630[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_615[i][j] = &l_616;
                        }
                        l_617[3][1][3] = l_615[0][5];
                        l_620 = (l_619 = l_618.s2);
                        l_628.z = ((VECTOR(int32_t, 16))(0x2DD5BD1EL, 0x6E212623L, ((VECTOR(int32_t, 4))(l_621.xyxz)), 0x2527ED7BL, 0x10154347L, 0x7E3C03EFL, l_622[1][1][0], 0x0B725AD8L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(l_623, ((VECTOR(int32_t, 4))((-3L), ((VECTOR(int32_t, 2))((-9L), 8L)), 0x7229EE5BL)).w, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_624.yyyy)).wxwxyxxy)), 0x29F1069CL, ((VECTOR(int32_t, 2))(l_625.xx)), (l_626 , ((VECTOR(int32_t, 4))(0x520D6881L, 4L, 0x1DCD4EFAL, 1L)).z), (-1L), 6L)).s9ed5, (int32_t)5L))).zyzzwwxzxyywxxww)).s86)).xxxy, ((VECTOR(int32_t, 2))(l_627.sed)).yxxy))), (-1L))).se;
                        l_630[0] = l_629;
                    }
                    l_632 &= l_631;
                    l_633 = (l_635 = l_633);
                    l_636 = 0x31A52758L;
                    unsigned int result = 0;
                    result += l_612;
                    result += l_631;
                    result += l_632;
                    result += l_634;
                    result += l_636;
                    atomic_add(&p_1094->g_special_values[64 * get_linear_group_id() + 19], result);
                }
                else
                { /* block id: 252 */
                    (1 + 1);
                }
            }
            if ((((((FAKE_DIVERGE(p_1094->global_1_offset, get_global_id(1), 10) && (--p_1094->g_447.s7)) < ((safe_rshift_func_uint8_t_u_u((*p_63), ((0UL <= p_62) < (safe_div_func_int8_t_s_s(p_1094->g_583.s3, (*p_63)))))) , (((VECTOR(uint64_t, 2))(0x773A335AED52A008L, 0x8A1BBAA0154EF181L)).even != 0x3B548DBE4CAAD422L))) == p_1094->g_421) && p_62) > (l_645 != p_65)))
            { /* block id: 257 */
                int32_t l_666 = 0x51BB8D90L;
                for (l_394 = 28; (l_394 == 55); l_394 = safe_add_func_int64_t_s_s(l_394, 1))
                { /* block id: 260 */
                    int64_t l_652[8] = {0x5E53F189AC62C6BFL,0x13F9EAEFCFACE722L,0x5E53F189AC62C6BFL,0x5E53F189AC62C6BFL,0x13F9EAEFCFACE722L,0x5E53F189AC62C6BFL,0x5E53F189AC62C6BFL,0x13F9EAEFCFACE722L};
                    int32_t l_654 = 8L;
                    uint16_t l_655 = 0xFCC9L;
                    int i;
                    for (p_1094->g_71 = 27; (p_1094->g_71 != 15); p_1094->g_71--)
                    { /* block id: 263 */
                        l_652[0] |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((safe_mod_func_int8_t_s_s((-7L), l_596.x)), 0x69058EBCL, 0x5208DAE4L, 0x46EAA8EBL)).even)).even;
                    }
                    (*l_419) |= p_62;
                    ++l_655;
                    (*l_419) = ((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((p_62 && (0x374DL != (l_662 == &p_1094->g_67))), ((safe_mul_func_uint64_t_u_u(l_665[0], (p_1094->g_77.s5 <= (((p_65 & (-1L)) && l_666) != 1UL)))) ^ p_62))), l_653)) ^ p_1094->g_447.sd);
                }
            }
            else
            { /* block id: 270 */
                int8_t l_670 = 1L;
                int32_t l_673[1][1][2];
                VECTOR(int8_t, 8) l_683 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L));
                int32_t ***l_684[8][8] = {{&l_104,&p_1094->g_188[1],(void*)0,&p_1094->g_188[0],&p_1094->g_188[1],&l_104,&p_1094->g_188[0],&p_1094->g_188[2]},{&l_104,&p_1094->g_188[1],(void*)0,&p_1094->g_188[0],&p_1094->g_188[1],&l_104,&p_1094->g_188[0],&p_1094->g_188[2]},{&l_104,&p_1094->g_188[1],(void*)0,&p_1094->g_188[0],&p_1094->g_188[1],&l_104,&p_1094->g_188[0],&p_1094->g_188[2]},{&l_104,&p_1094->g_188[1],(void*)0,&p_1094->g_188[0],&p_1094->g_188[1],&l_104,&p_1094->g_188[0],&p_1094->g_188[2]},{&l_104,&p_1094->g_188[1],(void*)0,&p_1094->g_188[0],&p_1094->g_188[1],&l_104,&p_1094->g_188[0],&p_1094->g_188[2]},{&l_104,&p_1094->g_188[1],(void*)0,&p_1094->g_188[0],&p_1094->g_188[1],&l_104,&p_1094->g_188[0],&p_1094->g_188[2]},{&l_104,&p_1094->g_188[1],(void*)0,&p_1094->g_188[0],&p_1094->g_188[1],&l_104,&p_1094->g_188[0],&p_1094->g_188[2]},{&l_104,&p_1094->g_188[1],(void*)0,&p_1094->g_188[0],&p_1094->g_188[1],&l_104,&p_1094->g_188[0],&p_1094->g_188[2]}};
                int32_t **l_686 = &l_103;
                VECTOR(int16_t, 8) l_711 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5795L), 0x5795L), 0x5795L, 1L, 0x5795L);
                VECTOR(int16_t, 2) l_713 = (VECTOR(int16_t, 2))((-5L), 0L);
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_673[i][j][k] = 0x799D3756L;
                    }
                }
                l_333[4] ^= (l_653 == (p_1094->g_161.x = (((void*)0 == l_667[1]) && (((((VECTOR(uint64_t, 8))(l_669.xyxyyxxx)).s5 < (((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))((++p_1094->g_447.s2), l_676, ((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 4))((-1L), ((((*p_63) = ((l_596.z , (safe_div_func_int64_t_s_s(p_65, (++(*l_344))))) ^ (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(18446744073709551607UL, 3UL, 0xAD656FFF627912E2L, 0xD25FF3F4DCAD57EFL)).z, l_673[0][0][1])))) <= (((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_683.s6044614403625057)).s1ef8)).y , (((l_685[0] = &l_138[1]) == l_686) > (-1L))) | 0UL) == p_62)) == p_65), 7L, 0x39C246F9L))))), 0UL, 4294967292UL)).lo, ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(0xDCC2D5E4L))))).x , (**l_104))) <= (*l_419)) != p_62))));
                l_323 &= ((((((*l_419) &= p_1094->g_687) , (--l_688)) , l_691[1][4][1]) < (safe_mod_func_uint16_t_u_u(((((VECTOR(uint64_t, 16))(l_694[4][1], 1UL, 0xCE96CF96705644D9L, (safe_lshift_func_int8_t_s_u((0x6A7DL != ((p_65 && ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), p_65)) > (&l_323 != (*l_104))), p_1094->g_170.w)), 1)) >= 0L)) > 0xDEEFA21AL)), (*p_63))), 0xE33EAAE4A1122089L, ((VECTOR(uint64_t, 2))(18446744073709551611UL)), p_62, GROUP_DIVERGE(1, 1), 0xDF0109BBC872FEF3L, p_62, p_1094->g_317.s3, 0x60C732218322B58DL, 0x59ECB24C4DC72634L, 7UL, 18446744073709551614UL)).s1 , (void*)0) == &l_324), p_1094->g_173))) != 0x97B0EEEBL);
                for (l_653 = (-22); (l_653 != 8); l_653 = safe_add_func_uint32_t_u_u(l_653, 2))
                { /* block id: 282 */
                    uint16_t l_714[10][10] = {{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L},{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L},{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L},{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L},{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L},{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L},{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L},{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L},{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L},{65532UL,65532UL,65528UL,5UL,0x74CFL,0xCA52L,4UL,1UL,4UL,0xCA52L}};
                    int32_t l_728 = 0x5809B521L;
                    int i, j;
                    (*l_419) |= (safe_mod_func_int16_t_s_s(0x2E6FL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(l_709.s2431)).hi, (int16_t)((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_1094->g_710.wyxwyxyy)))).s1736361013235626, ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(l_711.s4006406222017102)).odd, (int16_t)l_712))).s4751062475760435))).hi, ((VECTOR(int16_t, 16))(l_713.xyxyyxyyyxxxyyyy)).even))).even)).z, (int16_t)((((l_714[7][3] & FAKE_DIVERGE(p_1094->group_0_offset, get_group_id(0), 10)) , p_1094->g_148.s7) , ((VECTOR(uint8_t, 16))(l_715.s5653521273414444)).s1) || (safe_mod_func_int8_t_s_s(((p_65 ^ (((void*)0 != p_1094->g_449) < (((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(p_1094->g_720.s5216)).x, 4)) , &p_1094->g_86[1]) == l_721[1]))) & FAKE_DIVERGE(p_1094->global_0_offset, get_global_id(0), 10)), (*p_63))))))).yyyy)).w));
                    l_728 &= (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (*l_419))), ((((VECTOR(uint64_t, 8))(p_1094->g_726.zxwzwywx)).s4 , (p_65 || ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 16))(l_727.sa7f6b327df058712)).odd, ((VECTOR(uint32_t, 2))(0xB944A541L, 4294967295UL)).yyyxxyyx))).s0)) && (l_714[9][7] != (-1L)))));
                    (*l_104) = (((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 8))(p_1094->g_729.s76252755)), (uint64_t)(4294967295UL > ((*l_419) = 0x30E25865L))))).s5 , (void*)0);
                }
            }
            if (((*l_419) = ((void*)0 != &l_344)))
            { /* block id: 290 */
                int8_t l_730[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_730[i] = (-1L);
                (*l_419) = l_730[1];
            }
            else
            { /* block id: 292 */
                int32_t *l_735 = &p_1094->g_5;
                int16_t *l_745 = &l_589;
                VECTOR(uint64_t, 16) l_748 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
                int i, j;
                (*l_104) = &l_323;
                for (p_62 = 0; (p_62 == 5); p_62 = safe_add_func_uint32_t_u_u(p_62, 9))
                { /* block id: 296 */
                    uint64_t l_733 = 0x04B9CEB81F42CE54L;
                    VECTOR(uint64_t, 8) l_734 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 8UL), 8UL), 8UL, 0UL, 8UL);
                    int32_t l_736 = (-1L);
                    int i;
                    (*l_419) &= l_733;
                    (*l_104) = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_734.s7511075560233436)))).s26c4)).z , l_735);
                    (*l_104) = (*l_104);
                    l_736 &= 6L;
                }
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1094->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 43)), permutations[(safe_mod_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((((247UL & (((*l_745) = ((!(safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(0x7E42L, (*l_735))), 3))) > ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x5E59F492L)).yxxy)).x)) != (-4L))) & ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))((((((safe_rshift_func_int16_t_s_u((((VECTOR(uint64_t, 8))(l_748.s30d65fc5)).s1 <= (((((+0x605E0D49C3980BCAL) || (0x32L ^ 0L)) , (safe_div_func_int16_t_s_s(p_1094->g_604.y, 0x2EA0L))) < p_65) , p_65)), (**l_104))) == p_62) , 0x6749BE6DL) & p_65) > p_62), 1L, (*l_735), p_62, 0L, 0x6E889279L, (-5L), 1L, 2L, 0L, 0x33F77986L, ((VECTOR(int32_t, 2))(1L)), (-6L), 0L, 0L)).se794, ((VECTOR(int32_t, 4))(0x2B465CF8L))))).yyzwwwzxwyyzxzyz)).s8) | (*l_735)) & (**p_1094->g_66)) ^ 9L), p_65)), p_1094->g_151.s9)) <= (*p_1094->g_67)) == (-4L)), 10))][(safe_mod_func_uint32_t_u_u(p_1094->tid, 43))]));
            }
        }
        (*l_419) |= (safe_mod_func_int64_t_s_s(p_65, p_62));
    }
    return (*p_63);
}


/* ------------------------------------------ */
/* 
 * reads : p_1094->g_86 p_1094->g_67 p_1094->g_47 p_1094->l_comm_values p_1094->g_5 p_1094->g_42 p_1094->g_44 p_1094->g_71 p_1094->g_77 p_1094->g_comm_values
 * writes: p_1094->g_47 p_1094->g_97 p_1094->g_99 p_1094->g_86.f0 p_1094->g_101 p_1094->g_102
 */
uint8_t * func_72(uint32_t * p_73, int64_t * p_74, int64_t * p_75, struct S1 * p_1094)
{ /* block id: 21 */
    int8_t l_83 = 2L;
    int32_t *l_93[7];
    uint8_t *l_95 = &p_1094->g_42;
    uint8_t **l_94 = &l_95;
    uint8_t *l_96 = (void*)0;
    uint8_t **l_98[2][4] = {{&l_96,&l_96,&l_96,&l_96},{&l_96,&l_96,&l_96,&l_96}};
    int8_t *l_100[1];
    int i, j;
    for (i = 0; i < 7; i++)
        l_93[i] = &p_1094->g_5;
    for (i = 0; i < 1; i++)
        l_100[i] = &p_1094->g_86[1].f0;
    p_1094->g_101[0][5][4] = (((safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_1094->global_2_offset, get_global_id(2), 10), ((safe_mul_func_int16_t_s_s(((l_83 >= (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))((0L || l_83), (p_1094->g_86[1] , (p_1094->g_86[1].f0 = (((((*p_1094->g_67)--) | (safe_add_func_uint64_t_u_u(p_1094->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1094->tid, 43))], ((safe_add_func_int64_t_s_s(((l_93[4] != ((((*l_94) = &p_1094->g_42) == (p_1094->g_99 = (p_1094->g_97 = l_96))) , (void*)0)) || p_1094->g_5), p_1094->g_42)) != p_1094->g_44)))) >= 1UL) & (-7L)))), ((VECTOR(int8_t, 4))((-1L))), (-4L), 0L)), ((VECTOR(int8_t, 8))(0x67L))))).s10, ((VECTOR(int8_t, 2))(4L))))).odd, 4L))) & p_1094->g_71), p_1094->g_77.s3)) ^ p_1094->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1094->tid, 43))]))) , 65535UL) & p_1094->g_42);
    p_1094->g_102 = p_1094->g_comm_values[p_1094->tid];
    return &p_1094->g_42;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[64];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 64; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[64];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 64; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[43];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 43; i++)
            l_comm_values[i] = 1;
    struct S1 c_1095;
    struct S1* p_1094 = &c_1095;
    struct S1 c_1096 = {
        0x07858F9CL, // p_1094->g_5
        (VECTOR(int32_t, 2))(0x3BE56890L, 0x440874B2L), // p_1094->g_6
        (VECTOR(int16_t, 16))(0x1B4AL, (VECTOR(int16_t, 4))(0x1B4AL, (VECTOR(int16_t, 2))(0x1B4AL, 0x3DD4L), 0x3DD4L), 0x3DD4L, 0x1B4AL, 0x3DD4L, (VECTOR(int16_t, 2))(0x1B4AL, 0x3DD4L), (VECTOR(int16_t, 2))(0x1B4AL, 0x3DD4L), 0x1B4AL, 0x3DD4L, 0x1B4AL, 0x3DD4L), // p_1094->g_19
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_1094->g_21
        0x216709E1L, // p_1094->g_32
        0UL, // p_1094->g_42
        0x104ACD6BA8DAD4F6L, // p_1094->g_44
        7UL, // p_1094->g_47
        &p_1094->g_47, // p_1094->g_67
        &p_1094->g_67, // p_1094->g_66
        3L, // p_1094->g_71
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x78BEA8E4L), 0x78BEA8E4L), 0x78BEA8E4L, 1UL, 0x78BEA8E4L), // p_1094->g_77
        {{0x26L},{0x26L},{0x26L},{0x26L}}, // p_1094->g_86
        &p_1094->g_42, // p_1094->g_97
        &p_1094->g_42, // p_1094->g_99
        {{{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L}},{{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L}},{{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L}},{{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L}},{{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L}},{{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L},{0x3DL,0x4FL,0x3FL,0x3DL,0x50L,0x65L}}}, // p_1094->g_101
        0x5B88L, // p_1094->g_102
        (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0xC8A6F198L), 0xC8A6F198L), 0xC8A6F198L, 4UL, 0xC8A6F198L, (VECTOR(uint32_t, 2))(4UL, 0xC8A6F198L), (VECTOR(uint32_t, 2))(4UL, 0xC8A6F198L), 4UL, 0xC8A6F198L, 4UL, 0xC8A6F198L), // p_1094->g_110
        (VECTOR(int32_t, 2))(0L, 0x735A7B36L), // p_1094->g_134
        (VECTOR(uint32_t, 16))(0x3FF9C57FL, (VECTOR(uint32_t, 4))(0x3FF9C57FL, (VECTOR(uint32_t, 2))(0x3FF9C57FL, 5UL), 5UL), 5UL, 0x3FF9C57FL, 5UL, (VECTOR(uint32_t, 2))(0x3FF9C57FL, 5UL), (VECTOR(uint32_t, 2))(0x3FF9C57FL, 5UL), 0x3FF9C57FL, 5UL, 0x3FF9C57FL, 5UL), // p_1094->g_139
        (VECTOR(uint8_t, 16))(0xCCL, (VECTOR(uint8_t, 4))(0xCCL, (VECTOR(uint8_t, 2))(0xCCL, 0x08L), 0x08L), 0x08L, 0xCCL, 0x08L, (VECTOR(uint8_t, 2))(0xCCL, 0x08L), (VECTOR(uint8_t, 2))(0xCCL, 0x08L), 0xCCL, 0x08L, 0xCCL, 0x08L), // p_1094->g_148
        (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0UL), 0UL), 0UL, 8UL, 0UL, (VECTOR(uint16_t, 2))(8UL, 0UL), (VECTOR(uint16_t, 2))(8UL, 0UL), 8UL, 0UL, 8UL, 0UL), // p_1094->g_151
        (VECTOR(uint32_t, 16))(0x309C9891L, (VECTOR(uint32_t, 4))(0x309C9891L, (VECTOR(uint32_t, 2))(0x309C9891L, 8UL), 8UL), 8UL, 0x309C9891L, 8UL, (VECTOR(uint32_t, 2))(0x309C9891L, 8UL), (VECTOR(uint32_t, 2))(0x309C9891L, 8UL), 0x309C9891L, 8UL, 0x309C9891L, 8UL), // p_1094->g_158
        (VECTOR(uint32_t, 2))(0x90914414L, 0x8B9DDC81L), // p_1094->g_161
        (VECTOR(int16_t, 4))(0x4822L, (VECTOR(int16_t, 2))(0x4822L, (-1L)), (-1L)), // p_1094->g_170
        0x9F8BL, // p_1094->g_173
        {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_1094->g_189
        {&p_1094->g_189[5][0][1],&p_1094->g_189[5][0][1],&p_1094->g_189[5][0][1],&p_1094->g_189[5][0][1]}, // p_1094->g_188
        (VECTOR(uint16_t, 4))(0xBCB5L, (VECTOR(uint16_t, 2))(0xBCB5L, 0xA381L), 0xA381L), // p_1094->g_212
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L), // p_1094->g_303
        0x5D87A80FL, // p_1094->g_313
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0D89532CL), 0x0D89532CL), 0x0D89532CL, 0L, 0x0D89532CL, (VECTOR(int32_t, 2))(0L, 0x0D89532CL), (VECTOR(int32_t, 2))(0L, 0x0D89532CL), 0L, 0x0D89532CL, 0L, 0x0D89532CL), // p_1094->g_317
        {0x5FL}, // p_1094->g_400
        3UL, // p_1094->g_421
        (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x7BEB0E5B5705721EL), 0x7BEB0E5B5705721EL), 0x7BEB0E5B5705721EL, 2L, 0x7BEB0E5B5705721EL, (VECTOR(int64_t, 2))(2L, 0x7BEB0E5B5705721EL), (VECTOR(int64_t, 2))(2L, 0x7BEB0E5B5705721EL), 2L, 0x7BEB0E5B5705721EL, 2L, 0x7BEB0E5B5705721EL), // p_1094->g_428
        (VECTOR(uint32_t, 16))(0xF5684D10L, (VECTOR(uint32_t, 4))(0xF5684D10L, (VECTOR(uint32_t, 2))(0xF5684D10L, 0x098E5F3DL), 0x098E5F3DL), 0x098E5F3DL, 0xF5684D10L, 0x098E5F3DL, (VECTOR(uint32_t, 2))(0xF5684D10L, 0x098E5F3DL), (VECTOR(uint32_t, 2))(0xF5684D10L, 0x098E5F3DL), 0xF5684D10L, 0x098E5F3DL, 0xF5684D10L, 0x098E5F3DL), // p_1094->g_447
        &p_1094->g_86[1].f1, // p_1094->g_449
        (void*)0, // p_1094->g_450
        &p_1094->g_99, // p_1094->g_457
        (VECTOR(int8_t, 8))(0x2BL, (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0x7FL), 0x7FL), 0x7FL, 0x2BL, 0x7FL), // p_1094->g_583
        (VECTOR(uint16_t, 2))(0xE464L, 0x5EF8L), // p_1094->g_604
        (-1L), // p_1094->g_687
        (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x6627L), 0x6627L), // p_1094->g_710
        (VECTOR(int16_t, 8))(0x7143L, (VECTOR(int16_t, 4))(0x7143L, (VECTOR(int16_t, 2))(0x7143L, (-5L)), (-5L)), (-5L), 0x7143L, (-5L)), // p_1094->g_720
        (VECTOR(uint64_t, 4))(0x5B4419E55C64918FL, (VECTOR(uint64_t, 2))(0x5B4419E55C64918FL, 1UL), 1UL), // p_1094->g_726
        (VECTOR(uint64_t, 8))(0x07059BC30CF1F3FBL, (VECTOR(uint64_t, 4))(0x07059BC30CF1F3FBL, (VECTOR(uint64_t, 2))(0x07059BC30CF1F3FBL, 0x34F7A8829E9EF99BL), 0x34F7A8829E9EF99BL), 0x34F7A8829E9EF99BL, 0x07059BC30CF1F3FBL, 0x34F7A8829E9EF99BL), // p_1094->g_729
        (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xF4E1A09474FD7EADL), 0xF4E1A09474FD7EADL), 0xF4E1A09474FD7EADL, 18446744073709551609UL, 0xF4E1A09474FD7EADL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xF4E1A09474FD7EADL), (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xF4E1A09474FD7EADL), 18446744073709551609UL, 0xF4E1A09474FD7EADL, 18446744073709551609UL, 0xF4E1A09474FD7EADL), // p_1094->g_791
        (VECTOR(int8_t, 2))(5L, 0x04L), // p_1094->g_792
        0x380E44CCD1372192L, // p_1094->g_805
        {4UL,4UL,4UL,4UL,4UL}, // p_1094->g_836
        3L, // p_1094->g_923
        &p_1094->g_421, // p_1094->g_943
        &p_1094->g_943, // p_1094->g_942
        3UL, // p_1094->g_944
        &p_1094->g_86[1], // p_1094->g_991
        (VECTOR(int32_t, 8))(0x49A366F9L, (VECTOR(int32_t, 4))(0x49A366F9L, (VECTOR(int32_t, 2))(0x49A366F9L, 0x1BAB2298L), 0x1BAB2298L), 0x1BAB2298L, 0x49A366F9L, 0x1BAB2298L), // p_1094->g_1010
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2AB73542L), 0x2AB73542L), 0x2AB73542L, (-1L), 0x2AB73542L), // p_1094->g_1011
        &p_1094->g_313, // p_1094->g_1036
        0, // p_1094->v_collective
        sequence_input[get_global_id(0)], // p_1094->global_0_offset
        sequence_input[get_global_id(1)], // p_1094->global_1_offset
        sequence_input[get_global_id(2)], // p_1094->global_2_offset
        sequence_input[get_local_id(0)], // p_1094->local_0_offset
        sequence_input[get_local_id(1)], // p_1094->local_1_offset
        sequence_input[get_local_id(2)], // p_1094->local_2_offset
        sequence_input[get_group_id(0)], // p_1094->group_0_offset
        sequence_input[get_group_id(1)], // p_1094->group_1_offset
        sequence_input[get_group_id(2)], // p_1094->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 43)), permutations[0][get_linear_local_id()])), // p_1094->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1095 = c_1096;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1094);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1094->g_5, "p_1094->g_5", print_hash_value);
    transparent_crc(p_1094->g_6.x, "p_1094->g_6.x", print_hash_value);
    transparent_crc(p_1094->g_6.y, "p_1094->g_6.y", print_hash_value);
    transparent_crc(p_1094->g_19.s0, "p_1094->g_19.s0", print_hash_value);
    transparent_crc(p_1094->g_19.s1, "p_1094->g_19.s1", print_hash_value);
    transparent_crc(p_1094->g_19.s2, "p_1094->g_19.s2", print_hash_value);
    transparent_crc(p_1094->g_19.s3, "p_1094->g_19.s3", print_hash_value);
    transparent_crc(p_1094->g_19.s4, "p_1094->g_19.s4", print_hash_value);
    transparent_crc(p_1094->g_19.s5, "p_1094->g_19.s5", print_hash_value);
    transparent_crc(p_1094->g_19.s6, "p_1094->g_19.s6", print_hash_value);
    transparent_crc(p_1094->g_19.s7, "p_1094->g_19.s7", print_hash_value);
    transparent_crc(p_1094->g_19.s8, "p_1094->g_19.s8", print_hash_value);
    transparent_crc(p_1094->g_19.s9, "p_1094->g_19.s9", print_hash_value);
    transparent_crc(p_1094->g_19.sa, "p_1094->g_19.sa", print_hash_value);
    transparent_crc(p_1094->g_19.sb, "p_1094->g_19.sb", print_hash_value);
    transparent_crc(p_1094->g_19.sc, "p_1094->g_19.sc", print_hash_value);
    transparent_crc(p_1094->g_19.sd, "p_1094->g_19.sd", print_hash_value);
    transparent_crc(p_1094->g_19.se, "p_1094->g_19.se", print_hash_value);
    transparent_crc(p_1094->g_19.sf, "p_1094->g_19.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1094->g_21[i], "p_1094->g_21[i]", print_hash_value);

    }
    transparent_crc(p_1094->g_32, "p_1094->g_32", print_hash_value);
    transparent_crc(p_1094->g_42, "p_1094->g_42", print_hash_value);
    transparent_crc(p_1094->g_44, "p_1094->g_44", print_hash_value);
    transparent_crc(p_1094->g_47, "p_1094->g_47", print_hash_value);
    transparent_crc(p_1094->g_71, "p_1094->g_71", print_hash_value);
    transparent_crc(p_1094->g_77.s0, "p_1094->g_77.s0", print_hash_value);
    transparent_crc(p_1094->g_77.s1, "p_1094->g_77.s1", print_hash_value);
    transparent_crc(p_1094->g_77.s2, "p_1094->g_77.s2", print_hash_value);
    transparent_crc(p_1094->g_77.s3, "p_1094->g_77.s3", print_hash_value);
    transparent_crc(p_1094->g_77.s4, "p_1094->g_77.s4", print_hash_value);
    transparent_crc(p_1094->g_77.s5, "p_1094->g_77.s5", print_hash_value);
    transparent_crc(p_1094->g_77.s6, "p_1094->g_77.s6", print_hash_value);
    transparent_crc(p_1094->g_77.s7, "p_1094->g_77.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1094->g_101[i][j][k], "p_1094->g_101[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1094->g_102, "p_1094->g_102", print_hash_value);
    transparent_crc(p_1094->g_110.s0, "p_1094->g_110.s0", print_hash_value);
    transparent_crc(p_1094->g_110.s1, "p_1094->g_110.s1", print_hash_value);
    transparent_crc(p_1094->g_110.s2, "p_1094->g_110.s2", print_hash_value);
    transparent_crc(p_1094->g_110.s3, "p_1094->g_110.s3", print_hash_value);
    transparent_crc(p_1094->g_110.s4, "p_1094->g_110.s4", print_hash_value);
    transparent_crc(p_1094->g_110.s5, "p_1094->g_110.s5", print_hash_value);
    transparent_crc(p_1094->g_110.s6, "p_1094->g_110.s6", print_hash_value);
    transparent_crc(p_1094->g_110.s7, "p_1094->g_110.s7", print_hash_value);
    transparent_crc(p_1094->g_110.s8, "p_1094->g_110.s8", print_hash_value);
    transparent_crc(p_1094->g_110.s9, "p_1094->g_110.s9", print_hash_value);
    transparent_crc(p_1094->g_110.sa, "p_1094->g_110.sa", print_hash_value);
    transparent_crc(p_1094->g_110.sb, "p_1094->g_110.sb", print_hash_value);
    transparent_crc(p_1094->g_110.sc, "p_1094->g_110.sc", print_hash_value);
    transparent_crc(p_1094->g_110.sd, "p_1094->g_110.sd", print_hash_value);
    transparent_crc(p_1094->g_110.se, "p_1094->g_110.se", print_hash_value);
    transparent_crc(p_1094->g_110.sf, "p_1094->g_110.sf", print_hash_value);
    transparent_crc(p_1094->g_134.x, "p_1094->g_134.x", print_hash_value);
    transparent_crc(p_1094->g_134.y, "p_1094->g_134.y", print_hash_value);
    transparent_crc(p_1094->g_139.s0, "p_1094->g_139.s0", print_hash_value);
    transparent_crc(p_1094->g_139.s1, "p_1094->g_139.s1", print_hash_value);
    transparent_crc(p_1094->g_139.s2, "p_1094->g_139.s2", print_hash_value);
    transparent_crc(p_1094->g_139.s3, "p_1094->g_139.s3", print_hash_value);
    transparent_crc(p_1094->g_139.s4, "p_1094->g_139.s4", print_hash_value);
    transparent_crc(p_1094->g_139.s5, "p_1094->g_139.s5", print_hash_value);
    transparent_crc(p_1094->g_139.s6, "p_1094->g_139.s6", print_hash_value);
    transparent_crc(p_1094->g_139.s7, "p_1094->g_139.s7", print_hash_value);
    transparent_crc(p_1094->g_139.s8, "p_1094->g_139.s8", print_hash_value);
    transparent_crc(p_1094->g_139.s9, "p_1094->g_139.s9", print_hash_value);
    transparent_crc(p_1094->g_139.sa, "p_1094->g_139.sa", print_hash_value);
    transparent_crc(p_1094->g_139.sb, "p_1094->g_139.sb", print_hash_value);
    transparent_crc(p_1094->g_139.sc, "p_1094->g_139.sc", print_hash_value);
    transparent_crc(p_1094->g_139.sd, "p_1094->g_139.sd", print_hash_value);
    transparent_crc(p_1094->g_139.se, "p_1094->g_139.se", print_hash_value);
    transparent_crc(p_1094->g_139.sf, "p_1094->g_139.sf", print_hash_value);
    transparent_crc(p_1094->g_148.s0, "p_1094->g_148.s0", print_hash_value);
    transparent_crc(p_1094->g_148.s1, "p_1094->g_148.s1", print_hash_value);
    transparent_crc(p_1094->g_148.s2, "p_1094->g_148.s2", print_hash_value);
    transparent_crc(p_1094->g_148.s3, "p_1094->g_148.s3", print_hash_value);
    transparent_crc(p_1094->g_148.s4, "p_1094->g_148.s4", print_hash_value);
    transparent_crc(p_1094->g_148.s5, "p_1094->g_148.s5", print_hash_value);
    transparent_crc(p_1094->g_148.s6, "p_1094->g_148.s6", print_hash_value);
    transparent_crc(p_1094->g_148.s7, "p_1094->g_148.s7", print_hash_value);
    transparent_crc(p_1094->g_148.s8, "p_1094->g_148.s8", print_hash_value);
    transparent_crc(p_1094->g_148.s9, "p_1094->g_148.s9", print_hash_value);
    transparent_crc(p_1094->g_148.sa, "p_1094->g_148.sa", print_hash_value);
    transparent_crc(p_1094->g_148.sb, "p_1094->g_148.sb", print_hash_value);
    transparent_crc(p_1094->g_148.sc, "p_1094->g_148.sc", print_hash_value);
    transparent_crc(p_1094->g_148.sd, "p_1094->g_148.sd", print_hash_value);
    transparent_crc(p_1094->g_148.se, "p_1094->g_148.se", print_hash_value);
    transparent_crc(p_1094->g_148.sf, "p_1094->g_148.sf", print_hash_value);
    transparent_crc(p_1094->g_151.s0, "p_1094->g_151.s0", print_hash_value);
    transparent_crc(p_1094->g_151.s1, "p_1094->g_151.s1", print_hash_value);
    transparent_crc(p_1094->g_151.s2, "p_1094->g_151.s2", print_hash_value);
    transparent_crc(p_1094->g_151.s3, "p_1094->g_151.s3", print_hash_value);
    transparent_crc(p_1094->g_151.s4, "p_1094->g_151.s4", print_hash_value);
    transparent_crc(p_1094->g_151.s5, "p_1094->g_151.s5", print_hash_value);
    transparent_crc(p_1094->g_151.s6, "p_1094->g_151.s6", print_hash_value);
    transparent_crc(p_1094->g_151.s7, "p_1094->g_151.s7", print_hash_value);
    transparent_crc(p_1094->g_151.s8, "p_1094->g_151.s8", print_hash_value);
    transparent_crc(p_1094->g_151.s9, "p_1094->g_151.s9", print_hash_value);
    transparent_crc(p_1094->g_151.sa, "p_1094->g_151.sa", print_hash_value);
    transparent_crc(p_1094->g_151.sb, "p_1094->g_151.sb", print_hash_value);
    transparent_crc(p_1094->g_151.sc, "p_1094->g_151.sc", print_hash_value);
    transparent_crc(p_1094->g_151.sd, "p_1094->g_151.sd", print_hash_value);
    transparent_crc(p_1094->g_151.se, "p_1094->g_151.se", print_hash_value);
    transparent_crc(p_1094->g_151.sf, "p_1094->g_151.sf", print_hash_value);
    transparent_crc(p_1094->g_158.s0, "p_1094->g_158.s0", print_hash_value);
    transparent_crc(p_1094->g_158.s1, "p_1094->g_158.s1", print_hash_value);
    transparent_crc(p_1094->g_158.s2, "p_1094->g_158.s2", print_hash_value);
    transparent_crc(p_1094->g_158.s3, "p_1094->g_158.s3", print_hash_value);
    transparent_crc(p_1094->g_158.s4, "p_1094->g_158.s4", print_hash_value);
    transparent_crc(p_1094->g_158.s5, "p_1094->g_158.s5", print_hash_value);
    transparent_crc(p_1094->g_158.s6, "p_1094->g_158.s6", print_hash_value);
    transparent_crc(p_1094->g_158.s7, "p_1094->g_158.s7", print_hash_value);
    transparent_crc(p_1094->g_158.s8, "p_1094->g_158.s8", print_hash_value);
    transparent_crc(p_1094->g_158.s9, "p_1094->g_158.s9", print_hash_value);
    transparent_crc(p_1094->g_158.sa, "p_1094->g_158.sa", print_hash_value);
    transparent_crc(p_1094->g_158.sb, "p_1094->g_158.sb", print_hash_value);
    transparent_crc(p_1094->g_158.sc, "p_1094->g_158.sc", print_hash_value);
    transparent_crc(p_1094->g_158.sd, "p_1094->g_158.sd", print_hash_value);
    transparent_crc(p_1094->g_158.se, "p_1094->g_158.se", print_hash_value);
    transparent_crc(p_1094->g_158.sf, "p_1094->g_158.sf", print_hash_value);
    transparent_crc(p_1094->g_161.x, "p_1094->g_161.x", print_hash_value);
    transparent_crc(p_1094->g_161.y, "p_1094->g_161.y", print_hash_value);
    transparent_crc(p_1094->g_170.x, "p_1094->g_170.x", print_hash_value);
    transparent_crc(p_1094->g_170.y, "p_1094->g_170.y", print_hash_value);
    transparent_crc(p_1094->g_170.z, "p_1094->g_170.z", print_hash_value);
    transparent_crc(p_1094->g_170.w, "p_1094->g_170.w", print_hash_value);
    transparent_crc(p_1094->g_173, "p_1094->g_173", print_hash_value);
    transparent_crc(p_1094->g_212.x, "p_1094->g_212.x", print_hash_value);
    transparent_crc(p_1094->g_212.y, "p_1094->g_212.y", print_hash_value);
    transparent_crc(p_1094->g_212.z, "p_1094->g_212.z", print_hash_value);
    transparent_crc(p_1094->g_212.w, "p_1094->g_212.w", print_hash_value);
    transparent_crc(p_1094->g_303.s0, "p_1094->g_303.s0", print_hash_value);
    transparent_crc(p_1094->g_303.s1, "p_1094->g_303.s1", print_hash_value);
    transparent_crc(p_1094->g_303.s2, "p_1094->g_303.s2", print_hash_value);
    transparent_crc(p_1094->g_303.s3, "p_1094->g_303.s3", print_hash_value);
    transparent_crc(p_1094->g_303.s4, "p_1094->g_303.s4", print_hash_value);
    transparent_crc(p_1094->g_303.s5, "p_1094->g_303.s5", print_hash_value);
    transparent_crc(p_1094->g_303.s6, "p_1094->g_303.s6", print_hash_value);
    transparent_crc(p_1094->g_303.s7, "p_1094->g_303.s7", print_hash_value);
    transparent_crc(p_1094->g_303.s8, "p_1094->g_303.s8", print_hash_value);
    transparent_crc(p_1094->g_303.s9, "p_1094->g_303.s9", print_hash_value);
    transparent_crc(p_1094->g_303.sa, "p_1094->g_303.sa", print_hash_value);
    transparent_crc(p_1094->g_303.sb, "p_1094->g_303.sb", print_hash_value);
    transparent_crc(p_1094->g_303.sc, "p_1094->g_303.sc", print_hash_value);
    transparent_crc(p_1094->g_303.sd, "p_1094->g_303.sd", print_hash_value);
    transparent_crc(p_1094->g_303.se, "p_1094->g_303.se", print_hash_value);
    transparent_crc(p_1094->g_303.sf, "p_1094->g_303.sf", print_hash_value);
    transparent_crc(p_1094->g_313, "p_1094->g_313", print_hash_value);
    transparent_crc(p_1094->g_317.s0, "p_1094->g_317.s0", print_hash_value);
    transparent_crc(p_1094->g_317.s1, "p_1094->g_317.s1", print_hash_value);
    transparent_crc(p_1094->g_317.s2, "p_1094->g_317.s2", print_hash_value);
    transparent_crc(p_1094->g_317.s3, "p_1094->g_317.s3", print_hash_value);
    transparent_crc(p_1094->g_317.s4, "p_1094->g_317.s4", print_hash_value);
    transparent_crc(p_1094->g_317.s5, "p_1094->g_317.s5", print_hash_value);
    transparent_crc(p_1094->g_317.s6, "p_1094->g_317.s6", print_hash_value);
    transparent_crc(p_1094->g_317.s7, "p_1094->g_317.s7", print_hash_value);
    transparent_crc(p_1094->g_317.s8, "p_1094->g_317.s8", print_hash_value);
    transparent_crc(p_1094->g_317.s9, "p_1094->g_317.s9", print_hash_value);
    transparent_crc(p_1094->g_317.sa, "p_1094->g_317.sa", print_hash_value);
    transparent_crc(p_1094->g_317.sb, "p_1094->g_317.sb", print_hash_value);
    transparent_crc(p_1094->g_317.sc, "p_1094->g_317.sc", print_hash_value);
    transparent_crc(p_1094->g_317.sd, "p_1094->g_317.sd", print_hash_value);
    transparent_crc(p_1094->g_317.se, "p_1094->g_317.se", print_hash_value);
    transparent_crc(p_1094->g_317.sf, "p_1094->g_317.sf", print_hash_value);
    transparent_crc(p_1094->g_421, "p_1094->g_421", print_hash_value);
    transparent_crc(p_1094->g_428.s0, "p_1094->g_428.s0", print_hash_value);
    transparent_crc(p_1094->g_428.s1, "p_1094->g_428.s1", print_hash_value);
    transparent_crc(p_1094->g_428.s2, "p_1094->g_428.s2", print_hash_value);
    transparent_crc(p_1094->g_428.s3, "p_1094->g_428.s3", print_hash_value);
    transparent_crc(p_1094->g_428.s4, "p_1094->g_428.s4", print_hash_value);
    transparent_crc(p_1094->g_428.s5, "p_1094->g_428.s5", print_hash_value);
    transparent_crc(p_1094->g_428.s6, "p_1094->g_428.s6", print_hash_value);
    transparent_crc(p_1094->g_428.s7, "p_1094->g_428.s7", print_hash_value);
    transparent_crc(p_1094->g_428.s8, "p_1094->g_428.s8", print_hash_value);
    transparent_crc(p_1094->g_428.s9, "p_1094->g_428.s9", print_hash_value);
    transparent_crc(p_1094->g_428.sa, "p_1094->g_428.sa", print_hash_value);
    transparent_crc(p_1094->g_428.sb, "p_1094->g_428.sb", print_hash_value);
    transparent_crc(p_1094->g_428.sc, "p_1094->g_428.sc", print_hash_value);
    transparent_crc(p_1094->g_428.sd, "p_1094->g_428.sd", print_hash_value);
    transparent_crc(p_1094->g_428.se, "p_1094->g_428.se", print_hash_value);
    transparent_crc(p_1094->g_428.sf, "p_1094->g_428.sf", print_hash_value);
    transparent_crc(p_1094->g_447.s0, "p_1094->g_447.s0", print_hash_value);
    transparent_crc(p_1094->g_447.s1, "p_1094->g_447.s1", print_hash_value);
    transparent_crc(p_1094->g_447.s2, "p_1094->g_447.s2", print_hash_value);
    transparent_crc(p_1094->g_447.s3, "p_1094->g_447.s3", print_hash_value);
    transparent_crc(p_1094->g_447.s4, "p_1094->g_447.s4", print_hash_value);
    transparent_crc(p_1094->g_447.s5, "p_1094->g_447.s5", print_hash_value);
    transparent_crc(p_1094->g_447.s6, "p_1094->g_447.s6", print_hash_value);
    transparent_crc(p_1094->g_447.s7, "p_1094->g_447.s7", print_hash_value);
    transparent_crc(p_1094->g_447.s8, "p_1094->g_447.s8", print_hash_value);
    transparent_crc(p_1094->g_447.s9, "p_1094->g_447.s9", print_hash_value);
    transparent_crc(p_1094->g_447.sa, "p_1094->g_447.sa", print_hash_value);
    transparent_crc(p_1094->g_447.sb, "p_1094->g_447.sb", print_hash_value);
    transparent_crc(p_1094->g_447.sc, "p_1094->g_447.sc", print_hash_value);
    transparent_crc(p_1094->g_447.sd, "p_1094->g_447.sd", print_hash_value);
    transparent_crc(p_1094->g_447.se, "p_1094->g_447.se", print_hash_value);
    transparent_crc(p_1094->g_447.sf, "p_1094->g_447.sf", print_hash_value);
    transparent_crc(p_1094->g_583.s0, "p_1094->g_583.s0", print_hash_value);
    transparent_crc(p_1094->g_583.s1, "p_1094->g_583.s1", print_hash_value);
    transparent_crc(p_1094->g_583.s2, "p_1094->g_583.s2", print_hash_value);
    transparent_crc(p_1094->g_583.s3, "p_1094->g_583.s3", print_hash_value);
    transparent_crc(p_1094->g_583.s4, "p_1094->g_583.s4", print_hash_value);
    transparent_crc(p_1094->g_583.s5, "p_1094->g_583.s5", print_hash_value);
    transparent_crc(p_1094->g_583.s6, "p_1094->g_583.s6", print_hash_value);
    transparent_crc(p_1094->g_583.s7, "p_1094->g_583.s7", print_hash_value);
    transparent_crc(p_1094->g_604.x, "p_1094->g_604.x", print_hash_value);
    transparent_crc(p_1094->g_604.y, "p_1094->g_604.y", print_hash_value);
    transparent_crc(p_1094->g_687, "p_1094->g_687", print_hash_value);
    transparent_crc(p_1094->g_710.x, "p_1094->g_710.x", print_hash_value);
    transparent_crc(p_1094->g_710.y, "p_1094->g_710.y", print_hash_value);
    transparent_crc(p_1094->g_710.z, "p_1094->g_710.z", print_hash_value);
    transparent_crc(p_1094->g_710.w, "p_1094->g_710.w", print_hash_value);
    transparent_crc(p_1094->g_720.s0, "p_1094->g_720.s0", print_hash_value);
    transparent_crc(p_1094->g_720.s1, "p_1094->g_720.s1", print_hash_value);
    transparent_crc(p_1094->g_720.s2, "p_1094->g_720.s2", print_hash_value);
    transparent_crc(p_1094->g_720.s3, "p_1094->g_720.s3", print_hash_value);
    transparent_crc(p_1094->g_720.s4, "p_1094->g_720.s4", print_hash_value);
    transparent_crc(p_1094->g_720.s5, "p_1094->g_720.s5", print_hash_value);
    transparent_crc(p_1094->g_720.s6, "p_1094->g_720.s6", print_hash_value);
    transparent_crc(p_1094->g_720.s7, "p_1094->g_720.s7", print_hash_value);
    transparent_crc(p_1094->g_726.x, "p_1094->g_726.x", print_hash_value);
    transparent_crc(p_1094->g_726.y, "p_1094->g_726.y", print_hash_value);
    transparent_crc(p_1094->g_726.z, "p_1094->g_726.z", print_hash_value);
    transparent_crc(p_1094->g_726.w, "p_1094->g_726.w", print_hash_value);
    transparent_crc(p_1094->g_729.s0, "p_1094->g_729.s0", print_hash_value);
    transparent_crc(p_1094->g_729.s1, "p_1094->g_729.s1", print_hash_value);
    transparent_crc(p_1094->g_729.s2, "p_1094->g_729.s2", print_hash_value);
    transparent_crc(p_1094->g_729.s3, "p_1094->g_729.s3", print_hash_value);
    transparent_crc(p_1094->g_729.s4, "p_1094->g_729.s4", print_hash_value);
    transparent_crc(p_1094->g_729.s5, "p_1094->g_729.s5", print_hash_value);
    transparent_crc(p_1094->g_729.s6, "p_1094->g_729.s6", print_hash_value);
    transparent_crc(p_1094->g_729.s7, "p_1094->g_729.s7", print_hash_value);
    transparent_crc(p_1094->g_791.s0, "p_1094->g_791.s0", print_hash_value);
    transparent_crc(p_1094->g_791.s1, "p_1094->g_791.s1", print_hash_value);
    transparent_crc(p_1094->g_791.s2, "p_1094->g_791.s2", print_hash_value);
    transparent_crc(p_1094->g_791.s3, "p_1094->g_791.s3", print_hash_value);
    transparent_crc(p_1094->g_791.s4, "p_1094->g_791.s4", print_hash_value);
    transparent_crc(p_1094->g_791.s5, "p_1094->g_791.s5", print_hash_value);
    transparent_crc(p_1094->g_791.s6, "p_1094->g_791.s6", print_hash_value);
    transparent_crc(p_1094->g_791.s7, "p_1094->g_791.s7", print_hash_value);
    transparent_crc(p_1094->g_791.s8, "p_1094->g_791.s8", print_hash_value);
    transparent_crc(p_1094->g_791.s9, "p_1094->g_791.s9", print_hash_value);
    transparent_crc(p_1094->g_791.sa, "p_1094->g_791.sa", print_hash_value);
    transparent_crc(p_1094->g_791.sb, "p_1094->g_791.sb", print_hash_value);
    transparent_crc(p_1094->g_791.sc, "p_1094->g_791.sc", print_hash_value);
    transparent_crc(p_1094->g_791.sd, "p_1094->g_791.sd", print_hash_value);
    transparent_crc(p_1094->g_791.se, "p_1094->g_791.se", print_hash_value);
    transparent_crc(p_1094->g_791.sf, "p_1094->g_791.sf", print_hash_value);
    transparent_crc(p_1094->g_792.x, "p_1094->g_792.x", print_hash_value);
    transparent_crc(p_1094->g_792.y, "p_1094->g_792.y", print_hash_value);
    transparent_crc(p_1094->g_805, "p_1094->g_805", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1094->g_836[i], "p_1094->g_836[i]", print_hash_value);

    }
    transparent_crc(p_1094->g_923, "p_1094->g_923", print_hash_value);
    transparent_crc(p_1094->g_944, "p_1094->g_944", print_hash_value);
    transparent_crc(p_1094->g_1010.s0, "p_1094->g_1010.s0", print_hash_value);
    transparent_crc(p_1094->g_1010.s1, "p_1094->g_1010.s1", print_hash_value);
    transparent_crc(p_1094->g_1010.s2, "p_1094->g_1010.s2", print_hash_value);
    transparent_crc(p_1094->g_1010.s3, "p_1094->g_1010.s3", print_hash_value);
    transparent_crc(p_1094->g_1010.s4, "p_1094->g_1010.s4", print_hash_value);
    transparent_crc(p_1094->g_1010.s5, "p_1094->g_1010.s5", print_hash_value);
    transparent_crc(p_1094->g_1010.s6, "p_1094->g_1010.s6", print_hash_value);
    transparent_crc(p_1094->g_1010.s7, "p_1094->g_1010.s7", print_hash_value);
    transparent_crc(p_1094->g_1011.s0, "p_1094->g_1011.s0", print_hash_value);
    transparent_crc(p_1094->g_1011.s1, "p_1094->g_1011.s1", print_hash_value);
    transparent_crc(p_1094->g_1011.s2, "p_1094->g_1011.s2", print_hash_value);
    transparent_crc(p_1094->g_1011.s3, "p_1094->g_1011.s3", print_hash_value);
    transparent_crc(p_1094->g_1011.s4, "p_1094->g_1011.s4", print_hash_value);
    transparent_crc(p_1094->g_1011.s5, "p_1094->g_1011.s5", print_hash_value);
    transparent_crc(p_1094->g_1011.s6, "p_1094->g_1011.s6", print_hash_value);
    transparent_crc(p_1094->g_1011.s7, "p_1094->g_1011.s7", print_hash_value);
    transparent_crc(p_1094->v_collective, "p_1094->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 64; i++)
            transparent_crc(p_1094->g_special_values[i + 64 * get_linear_group_id()], "p_1094->g_special_values[i + 64 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 64; i++)
            transparent_crc(p_1094->l_special_values[i], "p_1094->l_special_values[i]", print_hash_value);
    transparent_crc(p_1094->l_comm_values[get_linear_local_id()], "p_1094->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1094->g_comm_values[get_linear_group_id() * 43 + get_linear_local_id()], "p_1094->g_comm_values[get_linear_group_id() * 43 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
