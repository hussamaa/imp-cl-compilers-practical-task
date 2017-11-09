// --atomics 7 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 74,55,1 -l 2,1,1
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

// Seed: 3161687755

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
};

struct S1 {
   int32_t  f0;
   volatile int8_t  f1;
};

struct S2 {
    uint8_t g_25;
    uint8_t g_29;
    int32_t g_63;
    VECTOR(int64_t, 8) g_71;
    volatile VECTOR(int16_t, 16) g_73;
    uint16_t g_92[10];
    uint64_t g_94;
    uint16_t **g_96[3];
    uint16_t *** volatile g_95;
    uint32_t g_124;
    int32_t g_129;
    int32_t *g_128[10];
    volatile struct S1 g_137;
    VECTOR(int16_t, 2) g_158;
    volatile VECTOR(uint8_t, 4) g_160;
    volatile VECTOR(int16_t, 8) g_161;
    uint16_t g_169;
    int64_t *g_183;
    uint8_t g_194;
    uint8_t *g_204;
    uint8_t **g_203;
    uint8_t **g_205[3];
    int8_t g_208;
    int16_t g_210;
    int8_t *g_229[5][1][5];
    int8_t *g_230[3][3];
    volatile VECTOR(int32_t, 8) g_235;
    VECTOR(int32_t, 4) g_236;
    volatile VECTOR(uint8_t, 8) g_248;
    struct S1 g_264;
    uint64_t g_274;
    volatile VECTOR(int16_t, 2) g_300;
    uint64_t g_303;
    volatile int32_t g_320;
    VECTOR(int8_t, 4) g_335;
    struct S1 g_375[8];
    VECTOR(int8_t, 4) g_384;
    VECTOR(int16_t, 2) g_385;
    volatile struct S1 g_399;
    volatile struct S1 * volatile g_400;
    uint8_t ***g_412[3][9][9];
    VECTOR(uint16_t, 8) g_456;
    VECTOR(uint8_t, 4) g_475;
    VECTOR(uint16_t, 16) g_532;
    VECTOR(int32_t, 16) g_541;
    VECTOR(int16_t, 4) g_683;
    int16_t *g_686;
    struct S0 g_709;
    struct S0 * volatile g_708;
    int32_t ** volatile g_711;
    struct S1 g_719;
    struct S1 * volatile g_720;
    VECTOR(int32_t, 2) g_771;
    volatile VECTOR(uint8_t, 2) g_789;
    VECTOR(uint8_t, 4) g_790;
    VECTOR(uint32_t, 4) g_794;
    int32_t ** volatile g_819;
    uint64_t *g_823[1][1];
    uint32_t g_851;
    volatile VECTOR(uint8_t, 16) g_867;
    volatile uint16_t g_885[6];
    uint32_t g_909;
    int32_t * volatile g_937;
    volatile uint32_t g_973[2];
    VECTOR(uint16_t, 16) g_982;
    int32_t ** volatile g_991;
    uint16_t g_1024;
    int16_t g_1028;
    volatile uint32_t g_1029[8][5];
    VECTOR(uint8_t, 2) g_1042;
    volatile struct S1 g_1074;
    VECTOR(uint16_t, 4) g_1076;
    VECTOR(uint8_t, 4) g_1099;
    int32_t ** volatile g_1102;
    VECTOR(uint64_t, 16) g_1106;
    VECTOR(uint64_t, 8) g_1107;
    volatile VECTOR(int16_t, 2) g_1118;
    volatile VECTOR(int64_t, 4) g_1126;
    volatile VECTOR(int64_t, 16) g_1130;
    VECTOR(int64_t, 16) g_1132;
    int32_t ** volatile g_1147;
    int32_t ** volatile g_1153;
    int32_t ** volatile g_1175;
    int32_t ** volatile g_1194;
    volatile int64_t g_1225;
    volatile uint16_t g_1227;
    int16_t g_1230[4];
    struct S1 *g_1233;
    struct S1 ** volatile g_1232[2][3][9];
    struct S1 ** volatile g_1234;
    struct S1 ** volatile g_1235;
    volatile VECTOR(uint16_t, 4) g_1248;
    VECTOR(int32_t, 2) g_1257;
    VECTOR(uint32_t, 4) g_1258;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S2 * p_1265);
int32_t  func_2(int8_t  p_3, struct S0  p_4, uint32_t  p_5, uint32_t  p_6, int64_t  p_7, struct S2 * p_1265);
uint16_t  func_12(uint32_t  p_13, struct S2 * p_1265);
uint32_t  func_17(uint8_t  p_18, uint64_t  p_19, struct S2 * p_1265);
uint16_t  func_21(uint32_t  p_22, int16_t  p_23, struct S2 * p_1265);
int32_t * func_40(uint8_t * p_41, struct S2 * p_1265);
uint8_t * func_42(uint64_t  p_43, uint8_t  p_44, int32_t * p_45, struct S2 * p_1265);
uint16_t  func_51(uint8_t * p_52, uint8_t * p_53, int32_t * p_54, uint32_t  p_55, struct S2 * p_1265);
uint8_t * func_56(uint8_t * p_57, struct S2 * p_1265);
uint8_t * func_58(uint8_t * p_59, struct S2 * p_1265);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1265->g_comm_values p_1265->g_25 p_1265->g_29 p_1265->g_400 p_1265->g_399 p_1265->g_94 p_1265->g_194 p_1265->g_129 p_1265->g_303 p_1265->g_683 p_1265->g_235 p_1265->g_456 p_1265->g_708 p_1265->g_711 p_1265->g_92 p_1265->g_532 p_1265->g_264.f0 p_1265->g_475 p_1265->g_909 p_1265->g_158 p_1265->g_937 p_1265->g_63 p_1265->g_210 p_1265->g_973 p_1265->g_236 p_1265->g_982 p_1265->g_819 p_1265->g_128 p_1265->g_991 p_1265->g_183 p_1265->g_709.f2 p_1265->g_541 p_1265->g_709.f0 p_1265->g_1024 p_1265->g_335 p_1265->g_1029 p_1265->g_274 p_1265->g_1042 p_1265->g_169 p_1265->g_300 p_1265->g_203 p_1265->g_204 p_1265->g_1074 p_1265->g_1076 p_1265->g_124 p_1265->g_320 p_1265->g_71 p_1265->g_375 p_1265->g_160 p_1265->g_384 p_1265->g_1102 p_1265->g_1126 p_1265->g_1147 p_1265->g_1153 p_1265->g_1175 p_1265->g_790 p_1265->g_95 p_1265->g_1194 p_1265->g_385 p_1265->g_1227 p_1265->g_1230 p_1265->g_1248 p_1265->g_1257 p_1265->g_1258 p_1265->g_1132
 * writes: p_1265->g_25 p_1265->g_29 p_1265->g_399 p_1265->g_94 p_1265->g_194 p_1265->g_129 p_1265->g_303 p_1265->g_686 p_1265->g_709 p_1265->g_128 p_1265->g_909 p_1265->g_264.f0 p_1265->g_229 p_1265->g_63 p_1265->g_274 p_1265->g_210 p_1265->g_973 p_1265->g_1029 p_1265->g_169 p_1265->g_137 p_1265->g_208 p_1265->g_71 p_1265->g_124 p_1265->g_158 p_1265->g_412 p_1265->g_92 p_1265->g_1024 p_1265->l_comm_values p_1265->g_96 p_1265->g_1227 p_1265->g_1233 p_1265->g_1230
 */
int64_t  func_1(struct S2 * p_1265)
{ /* block id: 4 */
    int32_t l_16[8][5][6] = {{{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL}},{{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL}},{{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL}},{{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL}},{{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL}},{{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL}},{{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL}},{{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL},{0x1FACD4A7L,4L,0x6F51AE9AL,0L,0L,0x6F51AE9AL}}};
    uint8_t l_20 = 0x67L;
    uint8_t *l_24 = &p_1265->g_25;
    uint8_t *l_28 = &p_1265->g_29;
    int32_t l_30 = 0L;
    struct S0 l_715 = {-9L,-1L,0x7AFAFE13L};
    int32_t l_1087 = (-3L);
    int32_t l_1088[6][2][7] = {{{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L},{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L}},{{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L},{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L}},{{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L},{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L}},{{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L},{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L}},{{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L},{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L}},{{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L},{0x58B320D4L,0x5CA3D536L,0L,(-6L),0x376BD4C6L,0x2E215814L,0x2E215814L}}};
    int32_t l_1122 = 0x54903E90L;
    uint16_t **l_1123 = (void*)0;
    uint8_t ****l_1137 = &p_1265->g_412[0][7][1];
    uint32_t l_1141[5] = {4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL};
    uint8_t l_1143[3][3][2];
    VECTOR(int8_t, 8) l_1144 = (VECTOR(int8_t, 8))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 3L), 3L), 3L, 0x50L, 3L);
    struct S0 l_1171 = {0x61055CCDL,0x7E8D52D8L,0x860D3B88L};
    uint64_t l_1197 = 0x8AD88629B50DD2A2L;
    VECTOR(int16_t, 16) l_1249 = (VECTOR(int16_t, 16))(0x68BAL, (VECTOR(int16_t, 4))(0x68BAL, (VECTOR(int16_t, 2))(0x68BAL, (-10L)), (-10L)), (-10L), 0x68BAL, (-10L), (VECTOR(int16_t, 2))(0x68BAL, (-10L)), (VECTOR(int16_t, 2))(0x68BAL, (-10L)), 0x68BAL, (-10L), 0x68BAL, (-10L));
    int16_t *l_1250 = (void*)0;
    int16_t *l_1251 = (void*)0;
    int16_t *l_1252 = (void*)0;
    int16_t *l_1253 = &p_1265->g_1230[3];
    int8_t *l_1254 = &p_1265->g_208;
    VECTOR(int32_t, 2) l_1256 = (VECTOR(int32_t, 2))(1L, (-1L));
    uint32_t *l_1261 = &l_715.f2;
    uint32_t *l_1262 = (void*)0;
    uint32_t *l_1263 = &p_1265->g_124;
    uint8_t l_1264 = 0xB8L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_1143[i][j][k] = 0xE1L;
        }
    }
    if (func_2((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(func_12((safe_div_func_uint32_t_u_u(l_16[5][3][4], func_17(l_20, (p_1265->g_comm_values[p_1265->tid] < func_21((((*l_24)++) == (l_30 ^= ((*l_28) = GROUP_DIVERGE(1, 1)))), p_1265->g_comm_values[p_1265->tid], p_1265)), p_1265))), p_1265), 2)) >= l_16[5][3][4]), (safe_mod_func_uint32_t_u_u((!p_1265->g_92[7]), p_1265->g_532.s6)))) | p_1265->g_92[5]) , l_30), l_715, p_1265->g_264.f0, p_1265->g_475.x, l_16[5][3][4], p_1265))
    { /* block id: 441 */
        int64_t l_1079 = (-1L);
        l_30 = ((((VECTOR(uint16_t, 4))(p_1265->g_1076.zyyw)).x != (0x46L || (l_1079 , 0L))) >= (+(safe_rshift_func_int8_t_s_s((-1L), 5))));
    }
    else
    { /* block id: 443 */
        int32_t *l_1082 = (void*)0;
        int32_t l_1083 = (-5L);
        int32_t *l_1084 = (void*)0;
        int32_t l_1085 = 0x112CF40DL;
        int32_t *l_1086[3];
        uint32_t l_1089 = 4294967295UL;
        uint8_t *l_1101 = &l_20;
        int32_t l_1119 = 0x2EAC2DF8L;
        uint64_t l_1121 = 0x1AA873178CAE141AL;
        VECTOR(int64_t, 8) l_1131 = (VECTOR(int64_t, 8))(0x09D662745514A8BFL, (VECTOR(int64_t, 4))(0x09D662745514A8BFL, (VECTOR(int64_t, 2))(0x09D662745514A8BFL, 0x3860107D997BD226L), 0x3860107D997BD226L), 0x3860107D997BD226L, 0x09D662745514A8BFL, 0x3860107D997BD226L);
        uint8_t ****l_1138 = (void*)0;
        struct S0 l_1148 = {1L,3L,0UL};
        VECTOR(uint8_t, 16) l_1185 = (VECTOR(uint8_t, 16))(0x40L, (VECTOR(uint8_t, 4))(0x40L, (VECTOR(uint8_t, 2))(0x40L, 0UL), 0UL), 0UL, 0x40L, 0UL, (VECTOR(uint8_t, 2))(0x40L, 0UL), (VECTOR(uint8_t, 2))(0x40L, 0UL), 0x40L, 0UL, 0x40L, 0UL);
        int32_t l_1220[10] = {0x16221C04L,1L,0L,1L,0x16221C04L,0x16221C04L,1L,0L,1L,0x16221C04L};
        uint16_t l_1231 = 0x4E47L;
        int i;
        for (i = 0; i < 3; i++)
            l_1086[i] = (void*)0;
        l_1089++;
        for (l_715.f1 = (-6); (l_715.f1 <= (-11)); l_715.f1 = safe_sub_func_uint32_t_u_u(l_715.f1, 4))
        { /* block id: 447 */
            uint32_t l_1096 = 0x2295D912L;
            int8_t *l_1100 = &p_1265->g_208;
            (*p_1265->g_1102) = func_40((((*l_1100) = ((p_1265->g_973[1] ^ (((4294967295UL & (safe_mul_func_int16_t_s_s(0x44EBL, l_1088[4][0][1]))) != (l_1096 && l_1096)) < (safe_sub_func_int8_t_s_s((&p_1265->g_851 == &p_1265->g_851), ((((VECTOR(uint8_t, 16))(p_1265->g_1099.yyxxyyyywzwwxxxy)).s8 , p_1265->g_541.s8) <= l_1096))))) , l_30)) , l_1101), p_1265);
            if ((*p_1265->g_937))
                break;
        }
        for (l_1083 = (-20); (l_1083 < (-22)); l_1083--)
        { /* block id: 454 */
            int32_t l_1105 = 1L;
            uint16_t *l_1120 = &p_1265->g_1024;
            VECTOR(int64_t, 2) l_1127 = (VECTOR(int64_t, 2))(0x379F131CB2247181L, 0x5AA31E09E0779F3EL);
            VECTOR(int64_t, 8) l_1128 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x0AA6BE32DF931EBDL), 0x0AA6BE32DF931EBDL), 0x0AA6BE32DF931EBDL, (-1L), 0x0AA6BE32DF931EBDL);
            VECTOR(uint32_t, 8) l_1129 = (VECTOR(uint32_t, 8))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0xA8DF31BBL), 0xA8DF31BBL), 0xA8DF31BBL, 9UL, 0xA8DF31BBL);
            uint8_t *****l_1139 = (void*)0;
            uint16_t ***l_1140 = &p_1265->g_96[2];
            int64_t *l_1142 = (void*)0;
            VECTOR(uint8_t, 2) l_1183 = (VECTOR(uint8_t, 2))(247UL, 0xA6L);
            VECTOR(uint8_t, 2) l_1184 = (VECTOR(uint8_t, 2))(0UL, 0xA6L);
            int32_t l_1226 = 4L;
            int i;
            l_30 = (l_1088[2][0][6] |= l_1105);
            l_1144.s0 &= (((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0xBD1CAC8B06B2E61AL, 0xACEE3715912085EEL)).xyyx)).lo, ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))(p_1265->g_1106.se0e2)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1265->g_1107.s20362700)).s5760331077044376)).se8be))))).odd))).hi > ((safe_mul_func_int8_t_s_s((((**p_1265->g_203)++) , ((((((((p_1265->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1265->tid, 2))] = (safe_mod_func_int8_t_s_s(((((*l_1120) &= (!(safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(p_1265->g_1118.yx)).yxyy))).odd))).hi, 14)), l_1119)))) || ((l_1121 != (l_1122 , FAKE_DIVERGE(p_1265->global_0_offset, get_global_id(0), 10))) & (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(0x477EL, 0x0BF8L)).yyyy, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(0x30B2L, 65530UL)).xxyx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))((l_1123 == ((*l_1140) = ((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 4))(((((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))(p_1265->g_1126.yzzx)), ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(9L, 0x4A698E13F92C070CL)), l_1105, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 16))(l_1127.yxyyyxxyxxxxyyxx)).lo, ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(l_1128.s0502456721223057)).sd8, ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x282D6AB5L)))).yxxyyyxy)).odd)).xzwwwwyy, ((VECTOR(uint32_t, 2))(l_1129.s44)).yyyyxyxx))), ((VECTOR(int64_t, 4))(p_1265->g_1130.sab6b)).xxwzzzwy, ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_1131.s4177)), ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))(p_1265->g_1132.s9e)), (int64_t)p_1265->g_1099.y))), 0L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((l_1137 != (l_1138 = l_1138)) ^ 0x48L) == l_1129.s6), 4)), l_1129.s0)), ((VECTOR(int64_t, 2))((-3L))), 0x6B87E3895EAF7838L, l_1129.s1, 0x762BF6AAB82DC249L, 0x57DBCD54CC48F6FBL, ((VECTOR(int64_t, 4))(4L)), ((VECTOR(int64_t, 2))(0x76DE053D41D74ED3L)), 3L, 0x731D82A85C01F0D7L, 0x0B7ED115F0339533L)).sab)).xyxy)).xwywxzzywzzyxzxy)).s3de9, ((VECTOR(int64_t, 4))(0x5E06EE6469632EF9L))))).zxyyzywx, (int64_t)l_1129.s2))).odd, ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 4))(0x38AF1CBD0E4CE51AL))))), ((VECTOR(int64_t, 2))(8L)), 1L, 4L)), 0x59907F9370B351D4L))))).sff92, ((VECTOR(int64_t, 4))(0x2AB519E360D8DF13L))))).zywzyzzw))).s23, ((VECTOR(int64_t, 2))(0L))))).xxyxxxxy))))).odd)), ((VECTOR(int64_t, 4))(0L)), p_1265->g_137.f1, 0x5BBBC16F272F266CL, 4L, 0x352077849B488002L, 0x424B4FCA32035E7BL)), ((VECTOR(int64_t, 16))(0x35D6E4656DAC6613L))))).sa61e, ((VECTOR(int64_t, 4))(6L))))).wxzwywyzwyxxyzzx, ((VECTOR(int64_t, 16))(0x1DC217604D5441B2L))))).s49d3, ((VECTOR(int64_t, 4))(9L))))).z , l_1088[1][1][1]) ^ 1UL), 253UL, 0xAEL, 0x83L))))).w, 2)) , (*p_1265->g_95)))), ((VECTOR(uint16_t, 2))(0xE47CL)), ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 2))(0xC64AL)), l_30, ((VECTOR(uint16_t, 4))(0x0210L)), 0xF7ECL, 0x0162L)).s59)).xyyy)))))).even, ((VECTOR(int32_t, 2))((-8L)))))))).lo <= l_1122))) <= FAKE_DIVERGE(p_1265->global_2_offset, get_global_id(2), 10)), l_1141[1]))) , l_1129.s6) >= l_1143[1][2][0]) & l_30) , l_1127.y) , p_1265->g_1126.w) < 1L) >= l_30)), 2L)) > p_1265->g_92[3]));
            for (l_715.f1 = 12; (l_715.f1 > 7); l_715.f1--)
            { /* block id: 465 */
                struct S0 *l_1149 = &p_1265->g_709;
                int32_t l_1156[8][6][5] = {{{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)}},{{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)}},{{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)}},{{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)}},{{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)}},{{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)}},{{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)}},{{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)},{(-7L),5L,(-5L),5L,(-7L)}}};
                uint8_t **l_1162[9][5] = {{&p_1265->g_204,&l_28,&l_28,(void*)0,&l_1101},{&p_1265->g_204,&l_28,&l_28,(void*)0,&l_1101},{&p_1265->g_204,&l_28,&l_28,(void*)0,&l_1101},{&p_1265->g_204,&l_28,&l_28,(void*)0,&l_1101},{&p_1265->g_204,&l_28,&l_28,(void*)0,&l_1101},{&p_1265->g_204,&l_28,&l_28,(void*)0,&l_1101},{&p_1265->g_204,&l_28,&l_28,(void*)0,&l_1101},{&p_1265->g_204,&l_28,&l_28,(void*)0,&l_1101},{&p_1265->g_204,&l_28,&l_28,(void*)0,&l_1101}};
                int8_t l_1164[9] = {0x48L,0x48L,0x48L,0x48L,0x48L,0x48L,0x48L,0x48L,0x48L};
                uint8_t l_1172 = 0UL;
                uint16_t **l_1187 = &l_1120;
                int i, j, k;
                (*p_1265->g_1147) = &l_1105;
                (*l_1149) = l_1148;
                for (l_1087 = 0; (l_1087 > 23); l_1087 = safe_add_func_int8_t_s_s(l_1087, 1))
                { /* block id: 470 */
                    int32_t *l_1152 = &l_1085;
                    uint8_t ***l_1163 = &l_1162[7][4];
                    struct S0 l_1170[7] = {{0x2CC5CC8BL,0x361C1EF8L,1UL},{0x2CC5CC8BL,0x361C1EF8L,1UL},{0x2CC5CC8BL,0x361C1EF8L,1UL},{0x2CC5CC8BL,0x361C1EF8L,1UL},{0x2CC5CC8BL,0x361C1EF8L,1UL},{0x2CC5CC8BL,0x361C1EF8L,1UL},{0x2CC5CC8BL,0x361C1EF8L,1UL}};
                    uint16_t **l_1188 = &l_1120;
                    int i;
                    (*p_1265->g_1153) = l_1152;
                    if (l_1141[1])
                        continue;
                    if ((safe_mul_func_int8_t_s_s(((0xD2L <= 1L) , (l_1156[0][1][0] <= (l_1156[0][1][0] >= ((~p_1265->g_92[9]) , (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((*l_1163) = l_1162[7][4]) == (void*)0))), 4)), l_1164[8])))))), (((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 8))(((safe_div_func_uint32_t_u_u((GROUP_DIVERGE(2, 1) & (7L || l_1122)), (*l_1152))) != 1UL), 0L, 0x59L, 1L, ((VECTOR(int8_t, 2))(0x30L)), 0x34L, 0x35L)).s5, 1L)) , (*l_1152)) & 0xEDL))))
                    { /* block id: 474 */
                        int32_t *l_1169 = &l_1088[2][0][6];
                        l_1152 = l_1169;
                        (*l_1149) = (l_1171 = l_1170[0]);
                    }
                    else
                    { /* block id: 478 */
                        uint8_t l_1176 = 0x09L;
                        uint32_t *l_1186 = &l_1171.f2;
                        int16_t *l_1189 = (void*)0;
                        int16_t *l_1190 = &p_1265->g_210;
                        VECTOR(uint8_t, 4) l_1193 = (VECTOR(uint8_t, 4))(0xE3L, (VECTOR(uint8_t, 2))(0xE3L, 254UL), 254UL);
                        int i;
                        l_1172++;
                        (*p_1265->g_1175) = l_1152;
                        --l_1176;
                        (*l_1152) ^= ((((*l_1186) |= (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 4))(l_1183.yyyy)).zwywwwzz, ((VECTOR(uint8_t, 2))(l_1184.xx)).xyyyxyxx))).s21, ((VECTOR(uint8_t, 16))(l_1185.sa28f83367e8b3dcc)).s47))).even, 0)), l_1176)) > p_1265->g_790.y) , 0UL)) <= ((((*p_1265->g_95) = l_1187) != l_1188) || ((*l_1190) = 0x0B4BL))) < ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(4UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_1193.zzwwzwzy)).s25)), 1UL)).x, l_1164[8])) || l_1164[8]));
                    }
                    (*p_1265->g_1194) = &l_1156[0][0][2];
                }
                for (l_1085 = (-25); (l_1085 >= 28); l_1085 = safe_add_func_uint8_t_u_u(l_1085, 6))
                { /* block id: 491 */
                    uint32_t l_1198 = 0xAC34949CL;
                    struct S0 *l_1203 = &p_1265->g_709;
                    VECTOR(int32_t, 8) l_1219 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
                    int i;
                    if (l_1197)
                    { /* block id: 492 */
                        struct S0 l_1210[7] = {{-2L,-3L,3UL},{0L,0x58E664CEL,4294967286UL},{-2L,-3L,3UL},{-2L,-3L,3UL},{0L,0x58E664CEL,4294967286UL},{-2L,-3L,3UL},{-2L,-3L,3UL}};
                        uint32_t l_1217 = 1UL;
                        int32_t l_1218 = 0x24A8B68BL;
                        int i;
                        l_1198++;
                        l_1218 ^= ((((safe_mod_func_int64_t_s_s((&l_1148 == l_1203), p_1265->g_385.y)) & (((VECTOR(int32_t, 2))((-8L), 0x5B194686L)).lo && (((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*l_28) = (safe_div_func_uint8_t_u_u((((l_1210[4] , ((safe_rshift_func_uint8_t_u_s(((*l_1101) = 0x22L), (0x49L && ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x12L, 0UL)).xyxyxyxxxyxxxxxx)).sd))) , &p_1265->g_208)) != &p_1265->g_208) < (safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(l_1198, 0x61L)) , (*p_1265->g_204)), FAKE_DIVERGE(p_1265->local_0_offset, get_local_id(0), 10)))), 0x17L))), l_1217)), l_1164[8])) && l_1198) < p_1265->g_71.s4))) > l_1164[8]) != l_1127.x);
                    }
                    else
                    { /* block id: 497 */
                        int8_t l_1221 = (-9L);
                        int32_t l_1222 = 0x390AAA2EL;
                        int32_t l_1223 = 0x5CADBCC3L;
                        int32_t l_1224 = 0L;
                        struct S1 **l_1236 = (void*)0;
                        struct S1 **l_1237 = &p_1265->g_1233;
                        ++p_1265->g_1227;
                        l_1231 &= p_1265->g_1230[2];
                        (*l_1237) = &p_1265->g_375[3];
                    }
                    for (p_1265->g_264.f0 = (-30); (p_1265->g_264.f0 >= (-1)); p_1265->g_264.f0 = safe_add_func_uint32_t_u_u(p_1265->g_264.f0, 2))
                    { /* block id: 504 */
                        l_1087 ^= l_1164[2];
                    }
                }
            }
        }
    }
    l_1087 = ((((*l_1254) = (((+l_1143[2][2][1]) > (safe_mul_func_uint16_t_u_u((l_1144.s6 && (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0UL, l_1141[0])), ((*l_1253) |= ((VECTOR(int16_t, 8))((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1265->g_1248.zxxz)).xzyzyyzy)).s2, 6)), ((VECTOR(int16_t, 4))(l_1249.sa2be)), 0x156AL, (-9L), (-1L))).s1)))), GROUP_DIVERGE(2, 1)))) == ((void*)0 == l_24))) == (l_1256.x = (((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_1256.xyxxyxxy)).hi, ((VECTOR(int32_t, 2))(4L, (-1L))).yxxx, ((VECTOR(int32_t, 4))(p_1265->g_1257.xyyy)))))))).xywzzxxzyzwwzwwy)).s0bd0)).yxwzywyz, ((VECTOR(uint32_t, 16))(p_1265->g_1258.yyywxxwzzxyzyyzw)).even))).s77, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(((*l_1263) = ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(0x4CL, l_1256.x, (-1L), 5L)).w, 6UL)) , ((*l_1261) |= (l_1171.f2 , p_1265->g_1042.y)))), p_1265->g_1132.s6, 1UL, 0UL)).zwxwyxwx))))).s33, ((VECTOR(uint32_t, 2))(0x57C3570BL))))).odd)) == l_1171.f1) == l_1088[0][0][3]))) , l_715.f0);
    return l_1264;
}


/* ------------------------------------------ */
/* 
 * reads : p_1265->g_25 p_1265->g_909 p_1265->g_129 p_1265->g_158 p_1265->g_937 p_1265->g_63 p_1265->g_210 p_1265->g_973 p_1265->g_236 p_1265->g_92 p_1265->g_982 p_1265->g_819 p_1265->g_128 p_1265->g_991 p_1265->g_183 p_1265->g_709.f2 p_1265->g_29 p_1265->g_541 p_1265->g_264.f0 p_1265->g_709.f0 p_1265->g_1024 p_1265->g_335 p_1265->g_1029 p_1265->g_274 p_1265->g_1042 p_1265->g_683 p_1265->g_169 p_1265->g_94 p_1265->g_300 p_1265->g_203 p_1265->g_204 p_1265->g_1074
 * writes: p_1265->g_25 p_1265->g_909 p_1265->g_264.f0 p_1265->g_229 p_1265->g_63 p_1265->g_274 p_1265->g_129 p_1265->g_210 p_1265->g_973 p_1265->g_128 p_1265->g_709.f2 p_1265->g_709.f0 p_1265->g_1029 p_1265->g_169 p_1265->g_137
 */
int32_t  func_2(int8_t  p_3, struct S0  p_4, uint32_t  p_5, uint32_t  p_6, int64_t  p_7, struct S2 * p_1265)
{ /* block id: 279 */
    int32_t *l_723 = &p_1265->g_129;
    int16_t l_746 = 1L;
    uint64_t l_756 = 0x061367A66F2900E4L;
    int16_t l_757[10][5][5] = {{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}},{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}},{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}},{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}},{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}},{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}},{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}},{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}},{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}},{{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L},{(-8L),6L,(-7L),0x37EBL,0x5B81L}}};
    uint16_t l_762 = 0x5435L;
    VECTOR(uint8_t, 2) l_791 = (VECTOR(uint8_t, 2))(0x93L, 0x34L);
    int64_t l_879 = 0L;
    uint8_t *l_903 = (void*)0;
    int32_t l_910 = 0x6151A435L;
    int32_t l_911 = (-7L);
    struct S0 l_915[4][7] = {{{0x2881D94EL,0x1DFAF541L,0UL},{0x2AA6DCFCL,0x112B4AD5L,0xBD21CBEFL},{1L,1L,4294967293UL},{-10L,0x4DEFF58CL,0x7EE91A8CL},{0x2AA6DCFCL,0x112B4AD5L,0xBD21CBEFL},{-10L,0x4DEFF58CL,0x7EE91A8CL},{1L,1L,4294967293UL}},{{0x2881D94EL,0x1DFAF541L,0UL},{0x2AA6DCFCL,0x112B4AD5L,0xBD21CBEFL},{1L,1L,4294967293UL},{-10L,0x4DEFF58CL,0x7EE91A8CL},{0x2AA6DCFCL,0x112B4AD5L,0xBD21CBEFL},{-10L,0x4DEFF58CL,0x7EE91A8CL},{1L,1L,4294967293UL}},{{0x2881D94EL,0x1DFAF541L,0UL},{0x2AA6DCFCL,0x112B4AD5L,0xBD21CBEFL},{1L,1L,4294967293UL},{-10L,0x4DEFF58CL,0x7EE91A8CL},{0x2AA6DCFCL,0x112B4AD5L,0xBD21CBEFL},{-10L,0x4DEFF58CL,0x7EE91A8CL},{1L,1L,4294967293UL}},{{0x2881D94EL,0x1DFAF541L,0UL},{0x2AA6DCFCL,0x112B4AD5L,0xBD21CBEFL},{1L,1L,4294967293UL},{-10L,0x4DEFF58CL,0x7EE91A8CL},{0x2AA6DCFCL,0x112B4AD5L,0xBD21CBEFL},{-10L,0x4DEFF58CL,0x7EE91A8CL},{1L,1L,4294967293UL}}};
    uint32_t **l_945 = (void*)0;
    int32_t l_964[8][2][3] = {{{0x51B679C2L,0x0259A96CL,0x51B679C2L},{0x51B679C2L,0x0259A96CL,0x51B679C2L}},{{0x51B679C2L,0x0259A96CL,0x51B679C2L},{0x51B679C2L,0x0259A96CL,0x51B679C2L}},{{0x51B679C2L,0x0259A96CL,0x51B679C2L},{0x51B679C2L,0x0259A96CL,0x51B679C2L}},{{0x51B679C2L,0x0259A96CL,0x51B679C2L},{0x51B679C2L,0x0259A96CL,0x51B679C2L}},{{0x51B679C2L,0x0259A96CL,0x51B679C2L},{0x51B679C2L,0x0259A96CL,0x51B679C2L}},{{0x51B679C2L,0x0259A96CL,0x51B679C2L},{0x51B679C2L,0x0259A96CL,0x51B679C2L}},{{0x51B679C2L,0x0259A96CL,0x51B679C2L},{0x51B679C2L,0x0259A96CL,0x51B679C2L}},{{0x51B679C2L,0x0259A96CL,0x51B679C2L},{0x51B679C2L,0x0259A96CL,0x51B679C2L}}};
    uint32_t l_1071[6] = {4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL};
    int8_t l_1073 = (-6L);
    int i, j, k;
    for (p_1265->g_25 = 13; (p_1265->g_25 != 27); p_1265->g_25 = safe_add_func_uint32_t_u_u(p_1265->g_25, 6))
    { /* block id: 282 */
        uint32_t l_718 = 0xAEF79EA7L;
        int32_t *l_721[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S1 *l_730 = &p_1265->g_375[4];
        struct S1 **l_729 = &l_730;
        uint8_t l_768[5] = {0x6BL,0x6BL,0x6BL,0x6BL,0x6BL};
        uint64_t *l_784 = &p_1265->g_94;
        VECTOR(uint8_t, 16) l_868 = (VECTOR(uint8_t, 16))(0xDDL, (VECTOR(uint8_t, 4))(0xDDL, (VECTOR(uint8_t, 2))(0xDDL, 0xB8L), 0xB8L), 0xB8L, 0xDDL, 0xB8L, (VECTOR(uint8_t, 2))(0xDDL, 0xB8L), (VECTOR(uint8_t, 2))(0xDDL, 0xB8L), 0xDDL, 0xB8L, 0xDDL, 0xB8L);
        int i;
        (1 + 1);
    }
    for (p_1265->g_909 = 0; (p_1265->g_909 > 59); p_1265->g_909 = safe_add_func_int32_t_s_s(p_1265->g_909, 9))
    { /* block id: 374 */
        int8_t l_935[7];
        uint8_t ****l_940 = &p_1265->g_412[2][1][7];
        int32_t l_962 = 0x5B9E9D86L;
        int32_t l_965[9][4];
        uint64_t l_988 = 0xC35D293AABC9EF0FL;
        VECTOR(int16_t, 16) l_1066 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5EFAL), 0x5EFAL), 0x5EFAL, 1L, 0x5EFAL, (VECTOR(int16_t, 2))(1L, 0x5EFAL), (VECTOR(int16_t, 2))(1L, 0x5EFAL), 1L, 0x5EFAL, 1L, 0x5EFAL);
        volatile struct S1 *l_1075 = &p_1265->g_137;
        int i, j;
        for (i = 0; i < 7; i++)
            l_935[i] = 7L;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 4; j++)
                l_965[i][j] = 0x146CE07BL;
        }
        for (p_1265->g_264.f0 = (-9); (p_1265->g_264.f0 == 6); p_1265->g_264.f0++)
        { /* block id: 377 */
            int8_t **l_929 = &p_1265->g_229[4][0][1];
            int8_t *l_930 = &p_1265->g_208;
            int32_t l_936[9] = {0x6C2115BAL,0x6C2115BAL,0x6C2115BAL,0x6C2115BAL,0x6C2115BAL,0x6C2115BAL,0x6C2115BAL,0x6C2115BAL,0x6C2115BAL};
            uint64_t *l_941 = &p_1265->g_274;
            struct S0 *l_944 = &l_915[0][5];
            uint32_t *l_948 = &p_1265->g_709.f2;
            uint32_t **l_947[1];
            uint32_t ***l_946 = &l_947[0];
            int64_t *l_951 = (void*)0;
            VECTOR(int32_t, 2) l_992 = (VECTOR(int32_t, 2))(0L, 0x5E0917DCL);
            uint16_t *l_994[8][6][5] = {{{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0},{(void*)0,(void*)0,(void*)0,&p_1265->g_92[8],(void*)0}}};
            uint16_t **l_993 = &l_994[7][2][0];
            uint64_t l_1022[8][1] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
            VECTOR(int8_t, 16) l_1041 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-8L)), (-8L)), (-8L), 0L, (-8L), (VECTOR(int8_t, 2))(0L, (-8L)), (VECTOR(int8_t, 2))(0L, (-8L)), 0L, (-8L), 0L, (-8L));
            VECTOR(uint64_t, 16) l_1058 = (VECTOR(uint64_t, 16))(0x1D8FD017B78E4525L, (VECTOR(uint64_t, 4))(0x1D8FD017B78E4525L, (VECTOR(uint64_t, 2))(0x1D8FD017B78E4525L, 3UL), 3UL), 3UL, 0x1D8FD017B78E4525L, 3UL, (VECTOR(uint64_t, 2))(0x1D8FD017B78E4525L, 3UL), (VECTOR(uint64_t, 2))(0x1D8FD017B78E4525L, 3UL), 0x1D8FD017B78E4525L, 3UL, 0x1D8FD017B78E4525L, 3UL);
            VECTOR(int16_t, 4) l_1065 = (VECTOR(int16_t, 4))(0x2B94L, (VECTOR(int16_t, 2))(0x2B94L, 0x47A2L), 0x47A2L);
            uint8_t l_1072 = 0UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_947[i] = &l_948;
            (*p_1265->g_937) &= (((((((safe_lshift_func_int8_t_s_s((((*l_723) || ((safe_rshift_func_uint8_t_u_u(p_6, 7)) > (((((*l_929) = &p_3) != (l_930 = &p_3)) , ((~(safe_add_func_int8_t_s_s((!(safe_div_func_int32_t_s_s((*l_723), l_935[5]))), 253UL))) != p_6)) & l_936[8]))) & (*l_723)), p_5)) ^ p_1265->g_158.x) , l_935[5]) == l_936[8]) ^ (*l_723)) ^ p_4.f1) <= (*l_723));
            if (((safe_add_func_uint64_t_u_u(((*l_941) = (l_940 == (FAKE_DIVERGE(p_1265->local_2_offset, get_local_id(2), 10) , &p_1265->g_412[1][0][2]))), (((*l_723) = (safe_mod_func_uint8_t_u_u((p_5 , (p_4.f2 >= ((((l_944 != &p_4) , l_945) == ((*l_946) = l_945)) && (safe_add_func_int32_t_s_s((l_935[5] >= l_935[1]), p_7))))), l_936[8]))) && 0UL))) , 7L))
            { /* block id: 384 */
                int16_t l_966 = (-1L);
                int32_t l_967 = 0x4C291DCDL;
                int32_t l_968 = 0x69B81B41L;
                int32_t l_969 = 0x59795DD2L;
                int64_t l_970[5][5] = {{0L,0x59E6696669E755E3L,0x1EE7F5BE43B2C70AL,0x59E6696669E755E3L,0L},{0L,0x59E6696669E755E3L,0x1EE7F5BE43B2C70AL,0x59E6696669E755E3L,0L},{0L,0x59E6696669E755E3L,0x1EE7F5BE43B2C70AL,0x59E6696669E755E3L,0L},{0L,0x59E6696669E755E3L,0x1EE7F5BE43B2C70AL,0x59E6696669E755E3L,0L},{0L,0x59E6696669E755E3L,0x1EE7F5BE43B2C70AL,0x59E6696669E755E3L,0L}};
                int32_t l_972 = 0L;
                uint64_t **l_985[7][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                uint16_t **l_1023 = &l_994[1][4][4];
                int i, j, k;
                for (l_910 = 0; (l_910 >= (-30)); l_910 = safe_sub_func_uint32_t_u_u(l_910, 2))
                { /* block id: 387 */
                    uint32_t l_956[2];
                    int32_t l_959 = (-6L);
                    VECTOR(int32_t, 4) l_963 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                    int8_t l_971 = (-1L);
                    int64_t l_987 = (-7L);
                    struct S0 l_1025 = {0x49E89CD5L,0x15F9687FL,4294967293UL};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_956[i] = 8UL;
                    for (p_1265->g_210 = 0; (p_1265->g_210 < (-30)); p_1265->g_210 = safe_sub_func_uint64_t_u_u(p_1265->g_210, 8))
                    { /* block id: 390 */
                        int32_t *l_960 = &l_936[2];
                        int32_t *l_961[8] = {&l_936[1],&l_936[1],&l_936[1],&l_936[1],&l_936[1],&l_936[1],&l_936[1],&l_936[1]};
                        int i;
                        if (p_4.f2)
                            break;
                        l_956[1]--;
                        if (p_4.f0)
                            continue;
                        ++p_1265->g_973[1];
                    }
                    if ((safe_div_func_uint32_t_u_u(p_1265->g_236.y, (((((p_4.f1 || (l_903 == (void*)0)) && p_7) <= p_1265->g_92[9]) && (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_1265->g_982.s31823993)).s0, (safe_mul_func_int16_t_s_s((!l_963.z), 1L))))) ^ ((((*l_723) = (-2L)) , l_985[4][5][0]) != &l_941)))))
                    { /* block id: 397 */
                        int32_t *l_986[2][7] = {{&p_1265->g_129,&l_969,&p_1265->g_129,&p_1265->g_129,&l_969,&p_1265->g_129,&p_1265->g_129},{&p_1265->g_129,&l_969,&p_1265->g_129,&p_1265->g_129,&l_969,&p_1265->g_129,&p_1265->g_129}};
                        int32_t l_1019 = 0x5E9A94B4L;
                        int i, j;
                        --l_988;
                        (*p_1265->g_991) = (*p_1265->g_819);
                        (*p_1265->g_937) |= ((VECTOR(int32_t, 8))(l_992.xyxxyyyx)).s4;
                        (*l_723) = ((((l_993 != (((p_1265->g_709.f0 |= (safe_div_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s(((safe_mod_func_int32_t_s_s(((void*)0 == &l_971), GROUP_DIVERGE(2, 1))) >= (safe_rshift_func_uint16_t_u_u(((~(GROUP_DIVERGE(2, 1) <= (((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(l_970[4][4], l_936[8])), ((void*)0 == p_1265->g_183))), (((*l_948)++) || ((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(l_1019, ((safe_mod_func_int64_t_s_s(0x63A6E8B26935D521L, p_4.f0)) || l_959))), p_7)), p_1265->g_29)) | l_969)))) >= 1UL) ^ p_1265->g_541.sb))) > l_1022[4][0]), FAKE_DIVERGE(p_1265->local_0_offset, get_local_id(0), 10)))), p_4.f0)), p_1265->g_264.f0)) & p_5), 0x4F16E61BL))) , l_965[4][1]) , l_1023)) ^ p_1265->g_1024) , p_1265->g_335.w) , l_935[0]);
                    }
                    else
                    { /* block id: 404 */
                        struct S0 *l_1026[1][4];
                        int32_t *l_1027[5] = {&l_972,&l_972,&l_972,&l_972,&l_972};
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_1026[i][j] = &p_1265->g_709;
                        }
                        p_4 = (l_1025 = ((*l_944) = l_1025));
                        if (p_4.f2)
                            break;
                        --p_1265->g_1029[4][3];
                        (*l_723) = l_970[4][4];
                    }
                    return p_6;
                }
                if ((*l_723))
                    continue;
                if (((((safe_mod_func_int32_t_s_s(p_4.f0, ((0x12L < ((*l_723) &= (+0x8AL))) || ((*l_941)++)))) > (safe_unary_minus_func_uint32_t_u(FAKE_DIVERGE(p_1265->global_2_offset, get_global_id(2), 10)))) , (((l_935[6] || (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(0x4CL, (65535UL && (((safe_sub_func_int16_t_s_s(((((-5L) && ((((*l_723) == ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(l_1041.s5d63b267)).s56, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_1265->g_1042.xyxxxyxx)))).s73))), 1L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((-7L), 0L, 0x0812L, 0x0955L)), 0x3B32L, (l_965[5][3] < p_3), 0x1571L, 1L)), (*l_723), ((VECTOR(int16_t, 4))(2L)))).s75)).yyxyyxxxxyxyxxyx, ((VECTOR(uint16_t, 16))(0x02BAL))))).lo, ((VECTOR(uint32_t, 8))(0x7B64450FL))))).s0) <= GROUP_DIVERGE(1, 1)) || l_962)) == 4294967286UL) | p_6), 0x7B94L)) <= l_967) <= p_1265->g_683.w)), ((VECTOR(int8_t, 8))(0x35L)), (-5L), (*l_723), ((VECTOR(int8_t, 4))(1L)))).s5980, ((VECTOR(int8_t, 4))(0x6AL)), ((VECTOR(int8_t, 4))((-10L)))))).odd)).odd, 6))) <= p_4.f1) >= p_4.f1)) , l_965[3][1]))
                { /* block id: 417 */
                    struct S0 **l_1043 = &l_944;
                    (*l_1043) = &p_1265->g_709;
                }
                else
                { /* block id: 419 */
                    if (p_3)
                        break;
                    (*l_723) = p_6;
                    for (p_1265->g_169 = 29; (p_1265->g_169 <= 38); p_1265->g_169 = safe_add_func_int32_t_s_s(p_1265->g_169, 1))
                    { /* block id: 424 */
                        return (*p_1265->g_937);
                    }
                }
            }
            else
            { /* block id: 428 */
                return p_7;
            }
            l_965[2][0] = (safe_div_func_int16_t_s_s((p_1265->g_94 , ((~((((safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((p_7 = (safe_rshift_func_int8_t_s_s(((((safe_mod_func_int16_t_s_s(((*l_723) = (safe_div_func_uint32_t_u_u(p_1265->g_300.x, ((--l_1058.s5) || (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((void*)0 != l_723), 12)), (((((((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(l_1065.xzww)).yxyzyywwzyxzyzyw, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_5, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1066.s5117)).wzzxzzxyyxwwwzxz)).odd)), ((VECTOR(int16_t, 4))(((safe_sub_func_int64_t_s_s(0x47C286CF80476CFBL, ((((*l_941) ^= 0x3ED6356B24257715L) == (safe_div_func_int16_t_s_s(((((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((&p_1265->g_129 != &l_936[7]) < 0L), ((VECTOR(int32_t, 2))(0x6CE02E9CL)), 0x6AF48518L)).lo)).xyyyyxxyyxyxxxxx)).even, ((VECTOR(int32_t, 8))(0x78E914DFL))))).s0 , 0L) <= l_1065.z), 0x5AD7L))) != p_4.f0))) , p_4.f0), l_992.y, 0x6DF5L, (-10L))), 0x0A80L, 0L, 0x3CFFL)))).hi)).lo)), ((VECTOR(int16_t, 4))(0L))))))).zywxwzzywxzyyzwz))).s6 == p_4.f1) & p_5) , l_965[4][1]) , l_935[5]) , (**p_1265->g_203)))))))), p_6)) , l_1071[5]) | GROUP_DIVERGE(2, 1)) , p_7), l_1041.s7))) ^ 0x76CF65438CAE6200L), 0x54L)) && p_3), l_935[4])) | p_5) , l_1072) != l_1073)) , l_965[4][1])), FAKE_DIVERGE(p_1265->global_2_offset, get_global_id(2), 10)));
        }
        if (p_7)
            break;
        (*l_1075) = p_1265->g_1074;
    }
    return p_4.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1265->g_711
 * writes: p_1265->g_128
 */
uint16_t  func_12(uint32_t  p_13, struct S2 * p_1265)
{ /* block id: 276 */
    uint16_t l_712[5];
    int i;
    for (i = 0; i < 5; i++)
        l_712[i] = 65535UL;
    (*p_1265->g_711) = &p_1265->g_129;
    return l_712[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1265->g_129 p_1265->g_303 p_1265->g_683 p_1265->g_235 p_1265->g_456 p_1265->g_708
 * writes: p_1265->g_129 p_1265->g_303 p_1265->g_686 p_1265->g_709
 */
uint32_t  func_17(uint8_t  p_18, uint64_t  p_19, struct S2 * p_1265)
{ /* block id: 208 */
    int32_t *l_615 = &p_1265->g_129;
    int32_t l_696 = 1L;
    int32_t l_697[8][1][5] = {{{(-1L),(-2L),0x2D8074EAL,(-2L),(-1L)}},{{(-1L),(-2L),0x2D8074EAL,(-2L),(-1L)}},{{(-1L),(-2L),0x2D8074EAL,(-2L),(-1L)}},{{(-1L),(-2L),0x2D8074EAL,(-2L),(-1L)}},{{(-1L),(-2L),0x2D8074EAL,(-2L),(-1L)}},{{(-1L),(-2L),0x2D8074EAL,(-2L),(-1L)}},{{(-1L),(-2L),0x2D8074EAL,(-2L),(-1L)}},{{(-1L),(-2L),0x2D8074EAL,(-2L),(-1L)}}};
    int64_t l_703 = 0x05D8895244394382L;
    struct S0 l_707 = {0x586BFED3L,8L,0x1ABE72F7L};
    struct S1 *l_710 = (void*)0;
    int i, j, k;
    if (((*l_615) &= ((VECTOR(int32_t, 4))(0L, (-7L), 1L, 0L)).w))
    { /* block id: 210 */
        int16_t *l_684 = (void*)0;
        int32_t l_698 = 0x07A24E36L;
        int32_t l_699 = (-1L);
        int32_t l_700 = 1L;
        int32_t l_701 = 1L;
        int32_t l_702[7][7][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
        int i, j, k;
        for (p_1265->g_303 = 0; (p_1265->g_303 != 22); p_1265->g_303++)
        { /* block id: 213 */
            int16_t **l_685[3][8] = {{&l_684,(void*)0,(void*)0,&l_684,&l_684,(void*)0,(void*)0,&l_684},{&l_684,(void*)0,(void*)0,&l_684,&l_684,(void*)0,(void*)0,&l_684},{&l_684,(void*)0,(void*)0,&l_684,&l_684,(void*)0,(void*)0,&l_684}};
            int32_t *l_687 = &p_1265->g_129;
            int32_t *l_688 = &p_1265->g_63;
            int32_t *l_689 = &p_1265->g_129;
            int32_t *l_690 = &p_1265->g_129;
            int32_t *l_691 = (void*)0;
            int32_t *l_692 = (void*)0;
            int32_t *l_693 = &p_1265->g_129;
            int32_t l_694 = 0x6B93C364L;
            int32_t *l_695[7];
            uint64_t l_704 = 18446744073709551615UL;
            int i, j;
            for (i = 0; i < 7; i++)
                l_695[i] = (void*)0;
            if ((atomic_inc(&p_1265->l_atomic_input[1]) == 3))
            { /* block id: 215 */
                int32_t l_618 = 0x17E2A546L;
                for (l_618 = 29; (l_618 != (-5)); l_618 = safe_sub_func_uint32_t_u_u(l_618, 1))
                { /* block id: 218 */
                    int32_t l_621[6] = {0x73DEC8E8L,(-1L),0x73DEC8E8L,0x73DEC8E8L,(-1L),0x73DEC8E8L};
                    int32_t l_647 = (-10L);
                    int8_t l_648 = (-9L);
                    uint64_t l_649 = 1UL;
                    int i;
                    for (l_621[0] = 24; (l_621[0] >= (-24)); l_621[0] = safe_sub_func_uint16_t_u_u(l_621[0], 1))
                    { /* block id: 221 */
                        int16_t l_624 = 0x4843L;
                        uint16_t l_625 = 0x83DDL;
                        uint8_t l_626 = 0UL;
                        struct S1 l_627 = {0x6F809A68L,0L};/* VOLATILE GLOBAL l_627 */
                        struct S1 l_628 = {0x76ACAA5EL,0x32L};/* VOLATILE GLOBAL l_628 */
                        l_626 = (l_625 = l_624);
                        l_628 = l_627;
                    }
                    for (l_621[1] = 17; (l_621[1] == 27); l_621[1] = safe_add_func_int32_t_s_s(l_621[1], 8))
                    { /* block id: 228 */
                        int32_t l_632 = 0x04ECBDC9L;
                        int32_t *l_631 = &l_632;
                        int16_t l_633 = 0x7089L;
                        int8_t l_634 = 0x3CL;
                        struct S1 l_635 = {0x7351C8F1L,0x2CL};/* VOLATILE GLOBAL l_635 */
                        int32_t l_636[2];
                        VECTOR(int64_t, 16) l_637 = (VECTOR(int64_t, 16))(0x4AEAA86C1F2EBD2AL, (VECTOR(int64_t, 4))(0x4AEAA86C1F2EBD2AL, (VECTOR(int64_t, 2))(0x4AEAA86C1F2EBD2AL, 0x7437BD877D2118ADL), 0x7437BD877D2118ADL), 0x7437BD877D2118ADL, 0x4AEAA86C1F2EBD2AL, 0x7437BD877D2118ADL, (VECTOR(int64_t, 2))(0x4AEAA86C1F2EBD2AL, 0x7437BD877D2118ADL), (VECTOR(int64_t, 2))(0x4AEAA86C1F2EBD2AL, 0x7437BD877D2118ADL), 0x4AEAA86C1F2EBD2AL, 0x7437BD877D2118ADL, 0x4AEAA86C1F2EBD2AL, 0x7437BD877D2118ADL);
                        uint32_t l_638 = 0UL;
                        int32_t l_639 = 0x6DEC0DE6L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_636[i] = (-1L);
                        l_631 = (void*)0;
                        l_637.sf = ((l_633 , l_634) , (l_635 , l_636[0]));
                        l_639 &= l_638;
                    }
                    for (l_621[0] = 0; (l_621[0] == (-5)); --l_621[0])
                    { /* block id: 235 */
                        struct S0 l_642 = {0x55533EA8L,0x73A82922L,0xAADA604BL};
                        int32_t l_644 = 1L;
                        int32_t *l_643 = &l_644;
                        int32_t *l_645 = &l_644;
                        int32_t *l_646 = &l_644;
                        l_646 = (l_642 , (l_645 = l_643));
                    }
                    l_649++;
                }
                for (l_618 = 25; (l_618 > (-1)); l_618--)
                { /* block id: 243 */
                    uint32_t l_654 = 0x45047AF9L;
                    l_654++;
                    for (l_654 = (-22); (l_654 > 60); l_654 = safe_add_func_int8_t_s_s(l_654, 9))
                    { /* block id: 247 */
                        int32_t l_660 = 0x1AD6D1BAL;
                        int32_t *l_659 = &l_660;
                        int32_t *l_661 = &l_660;
                        int32_t *l_662 = &l_660;
                        VECTOR(int32_t, 4) l_663 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
                        uint8_t l_664 = 0x86L;
                        int8_t l_665 = 0x34L;
                        int64_t l_666 = 1L;
                        int32_t l_667 = 0x6FC1F79DL;
                        int64_t l_668 = (-6L);
                        int32_t l_669 = 1L;
                        int i;
                        l_662 = (l_661 = l_659);
                        l_664 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_663.yz)).yxxyxxxx)).s1;
                        l_667 ^= (l_665 , l_666);
                        l_669 ^= (l_668 , ((VECTOR(int32_t, 2))(9L, (-8L))).even);
                    }
                    for (l_654 = 0; (l_654 < 12); l_654 = safe_add_func_int32_t_s_s(l_654, 1))
                    { /* block id: 256 */
                        int32_t l_673 = 0x64027143L;
                        int32_t *l_672 = &l_673;
                        VECTOR(int32_t, 4) l_674 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 4L), 4L);
                        int8_t l_675 = 0L;
                        int32_t *l_676[9][10] = {{&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,&l_673},{&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,&l_673},{&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,&l_673},{&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,&l_673},{&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,&l_673},{&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,&l_673},{&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,&l_673},{&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,&l_673},{&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,&l_673}};
                        int32_t *l_677 = &l_673;
                        uint8_t l_678 = 0x42L;
                        uint8_t l_679[4][3][4] = {{{0x1FL,0UL,0x64L,0UL},{0x1FL,0UL,0x64L,0UL},{0x1FL,0UL,0x64L,0UL}},{{0x1FL,0UL,0x64L,0UL},{0x1FL,0UL,0x64L,0UL},{0x1FL,0UL,0x64L,0UL}},{{0x1FL,0UL,0x64L,0UL},{0x1FL,0UL,0x64L,0UL},{0x1FL,0UL,0x64L,0UL}},{{0x1FL,0UL,0x64L,0UL},{0x1FL,0UL,0x64L,0UL},{0x1FL,0UL,0x64L,0UL}}};
                        int64_t l_680 = (-3L);
                        VECTOR(int32_t, 8) l_681 = (VECTOR(int32_t, 8))(0x46300839L, (VECTOR(int32_t, 4))(0x46300839L, (VECTOR(int32_t, 2))(0x46300839L, 0x692897A8L), 0x692897A8L), 0x692897A8L, 0x46300839L, 0x692897A8L);
                        uint32_t l_682 = 4294967295UL;
                        int i, j, k;
                        l_672 = (void*)0;
                        l_675 = ((VECTOR(int32_t, 4))(l_674.wxzw)).y;
                        l_677 = l_676[4][0];
                        l_682 &= ((l_679[2][0][0] &= l_678) , (l_680 , ((VECTOR(int32_t, 8))(l_681.s44272071)).s1));
                    }
                }
                unsigned int result = 0;
                result += l_618;
                atomic_add(&p_1265->l_special_values[1], result);
            }
            else
            { /* block id: 264 */
                (1 + 1);
            }
            (*l_615) = (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1265->g_683.zzwzwwyx)).s55)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x766AL, (-10L))).yxyxyyxxyyxxyxyx)), (int16_t)0L))).hi)).s2, 0x50ABL, p_1265->g_235.s1, 0x3431L, 0x37C9L, 0x3CD2L)).s5 > ((p_1265->g_456.s6 , &p_1265->g_210) != (p_1265->g_686 = l_684)));
            l_704--;
            (*p_1265->g_708) = (GROUP_DIVERGE(1, 1) , l_707);
        }
    }
    else
    { /* block id: 272 */
        l_710 = l_710;
    }
    return (*l_615);
}


/* ------------------------------------------ */
/* 
 * reads : p_1265->g_29 p_1265->g_25 p_1265->g_400 p_1265->g_399 p_1265->g_94 p_1265->g_194
 * writes: p_1265->g_29 p_1265->g_25 p_1265->g_399 p_1265->g_94 p_1265->g_194
 */
uint16_t  func_21(uint32_t  p_22, int16_t  p_23, struct S2 * p_1265)
{ /* block id: 8 */
    uint8_t *l_60 = &p_1265->g_25;
    int32_t l_212 = (-1L);
    int32_t l_560 = 0x5BEB65FAL;
    int32_t l_561 = (-4L);
    int32_t *l_607 = &l_560;
    int32_t *l_608 = &p_1265->g_129;
    int32_t *l_609[8];
    int32_t l_610 = 0x360823E8L;
    int8_t l_611 = 8L;
    uint32_t l_612 = 1UL;
    int i;
    for (i = 0; i < 8; i++)
        l_609[i] = &l_561;
    for (p_23 = 0; (p_23 > (-27)); p_23--)
    { /* block id: 11 */
        int32_t l_219 = 0x00700E3CL;
        int32_t l_559 = 0x573BBFCEL;
        int32_t l_562 = 0L;
        int32_t l_563 = 1L;
        struct S1 *l_581 = &p_1265->g_264;
        for (p_22 = 0; (p_22 < 58); p_22 = safe_add_func_uint64_t_u_u(p_22, 1))
        { /* block id: 14 */
            int64_t l_39 = (-1L);
            VECTOR(uint16_t, 4) l_211 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x0F4AL), 0x0F4AL);
            int i;
            for (p_1265->g_29 = (-9); (p_1265->g_29 < 4); p_1265->g_29 = safe_add_func_int16_t_s_s(p_1265->g_29, 1))
            { /* block id: 17 */
                uint8_t *l_127 = (void*)0;
                int32_t l_213 = 0x32A49846L;
                int16_t l_525 = 0x6FD8L;
                VECTOR(uint32_t, 2) l_539 = (VECTOR(uint32_t, 2))(3UL, 4294967295UL);
                VECTOR(uint32_t, 4) l_540 = (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0x87EF7063L), 0x87EF7063L);
                volatile struct S1 *l_564 = (void*)0;
                volatile struct S1 *l_565 = &p_1265->g_399;
                int i;
                for (p_1265->g_25 = 0; (p_1265->g_25 == 44); p_1265->g_25 = safe_add_func_uint32_t_u_u(p_1265->g_25, 6))
                { /* block id: 20 */
                    uint8_t l_46 = 0x83L;
                    int32_t **l_130 = &p_1265->g_128[7];
                    uint16_t *l_214 = &p_1265->g_92[9];
                    uint16_t *l_215 = (void*)0;
                    uint16_t *l_216 = (void*)0;
                    uint16_t *l_217 = (void*)0;
                    uint16_t *l_218 = &p_1265->g_169;
                    int64_t *l_558[6][1][10] = {{{&l_39,&l_39,&l_39,(void*)0,(void*)0,&l_39,(void*)0,&l_39,(void*)0,&l_39}},{{&l_39,&l_39,&l_39,(void*)0,(void*)0,&l_39,(void*)0,&l_39,(void*)0,&l_39}},{{&l_39,&l_39,&l_39,(void*)0,(void*)0,&l_39,(void*)0,&l_39,(void*)0,&l_39}},{{&l_39,&l_39,&l_39,(void*)0,(void*)0,&l_39,(void*)0,&l_39,(void*)0,&l_39}},{{&l_39,&l_39,&l_39,(void*)0,(void*)0,&l_39,(void*)0,&l_39,(void*)0,&l_39}},{{&l_39,&l_39,&l_39,(void*)0,(void*)0,&l_39,(void*)0,&l_39,(void*)0,&l_39}}};
                    int i, j, k;
                    if (l_39)
                        break;
                }
                (*l_565) = (*p_1265->g_400);
            }
            if ((atomic_inc(&p_1265->l_atomic_input[2]) == 6))
            { /* block id: 165 */
                uint8_t l_566 = 1UL;
                struct S0 l_567 = {0x78C62BA2L,0x30947600L,0UL};
                struct S0 l_568 = {-9L,0L,0x884FC46CL};
                uint8_t l_569 = 255UL;
                int16_t l_570 = 4L;
                int64_t l_571 = 0x1A549502EBDA300BL;
                int16_t l_572 = 8L;
                VECTOR(int16_t, 4) l_573 = (VECTOR(int16_t, 4))(0x6529L, (VECTOR(int16_t, 2))(0x6529L, 0x1C41L), 0x1C41L);
                int32_t l_574 = 0x49268F64L;
                int32_t l_575[9][1][9] = {{{5L,0L,0L,5L,(-1L),0x760C0612L,0x760C0612L,(-1L),5L}},{{5L,0L,0L,5L,(-1L),0x760C0612L,0x760C0612L,(-1L),5L}},{{5L,0L,0L,5L,(-1L),0x760C0612L,0x760C0612L,(-1L),5L}},{{5L,0L,0L,5L,(-1L),0x760C0612L,0x760C0612L,(-1L),5L}},{{5L,0L,0L,5L,(-1L),0x760C0612L,0x760C0612L,(-1L),5L}},{{5L,0L,0L,5L,(-1L),0x760C0612L,0x760C0612L,(-1L),5L}},{{5L,0L,0L,5L,(-1L),0x760C0612L,0x760C0612L,(-1L),5L}},{{5L,0L,0L,5L,(-1L),0x760C0612L,0x760C0612L,(-1L),5L}},{{5L,0L,0L,5L,(-1L),0x760C0612L,0x760C0612L,(-1L),5L}}};
                uint16_t l_576 = 0xDC68L;
                int i, j, k;
                l_568 = (l_566 , l_567);
                l_571 &= (l_569 , (((VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL)).odd , l_570));
                l_573.w ^= (l_572 = (-6L));
                l_576--;
                unsigned int result = 0;
                result += l_566;
                result += l_567.f0;
                result += l_567.f1;
                result += l_567.f2;
                result += l_568.f0;
                result += l_568.f1;
                result += l_568.f2;
                result += l_569;
                result += l_570;
                result += l_571;
                result += l_572;
                result += l_573.w;
                result += l_573.z;
                result += l_573.y;
                result += l_573.x;
                result += l_574;
                int l_575_i0, l_575_i1, l_575_i2;
                for (l_575_i0 = 0; l_575_i0 < 9; l_575_i0++) {
                    for (l_575_i1 = 0; l_575_i1 < 1; l_575_i1++) {
                        for (l_575_i2 = 0; l_575_i2 < 9; l_575_i2++) {
                            result += l_575[l_575_i0][l_575_i1][l_575_i2];
                        }
                    }
                }
                result += l_576;
                atomic_add(&p_1265->l_special_values[2], result);
            }
            else
            { /* block id: 171 */
                (1 + 1);
            }
        }
        for (p_1265->g_94 = 0; (p_1265->g_94 < 31); p_1265->g_94 = safe_add_func_uint16_t_u_u(p_1265->g_94, 7))
        { /* block id: 177 */
            struct S1 **l_582 = (void*)0;
            struct S1 **l_583 = (void*)0;
            struct S1 **l_584 = &l_581;
            (*l_584) = l_581;
            for (p_1265->g_194 = (-1); (p_1265->g_194 <= 22); p_1265->g_194 = safe_add_func_uint16_t_u_u(p_1265->g_194, 1))
            { /* block id: 181 */
                int32_t l_587 = 8L;
                int32_t *l_588 = (void*)0;
                int32_t l_589 = (-3L);
                l_589 = l_587;
                if (p_22)
                    break;
                if ((atomic_inc(&p_1265->l_atomic_input[3]) == 9))
                { /* block id: 185 */
                    VECTOR(int32_t, 16) l_591 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                    int32_t *l_590[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t *l_592 = (void*)0;
                    int32_t l_606 = 7L;
                    int i, j;
                    l_592 = l_590[1][3];
                    for (l_591.s4 = (-22); (l_591.s4 <= 12); ++l_591.s4)
                    { /* block id: 189 */
                        struct S0 l_596[2] = {{1L,-1L,4294967292UL},{1L,-1L,4294967292UL}};
                        struct S0 *l_595[5];
                        struct S0 *l_597 = &l_596[0];
                        struct S0 l_598 = {-2L,0x3B8A66C6L,1UL};
                        struct S0 l_599 = {-1L,3L,4294967295UL};
                        int8_t l_600 = 0x05L;
                        int8_t l_601 = 0L;
                        struct S0 l_602 = {0x05F1BBF2L,0x4E6F4FA5L,4294967290UL};
                        struct S0 l_603 = {0L,-8L,7UL};
                        struct S0 l_604 = {2L,0x2CC4FB5AL,0x69532B9AL};
                        struct S0 l_605 = {0x7FB849F7L,0x45BE56D9L,1UL};
                        int i;
                        for (i = 0; i < 5; i++)
                            l_595[i] = &l_596[0];
                        l_597 = l_595[3];
                        l_590[1][3] = (void*)0;
                        l_600 ^= ((l_599 = l_598) , 0x197F085BL);
                        l_605 = (l_604 = (l_603 = (l_601 , l_602)));
                    }
                    l_606 = 2L;
                    unsigned int result = 0;
                    result += l_591.sf;
                    result += l_591.se;
                    result += l_591.sd;
                    result += l_591.sc;
                    result += l_591.sb;
                    result += l_591.sa;
                    result += l_591.s9;
                    result += l_591.s8;
                    result += l_591.s7;
                    result += l_591.s6;
                    result += l_591.s5;
                    result += l_591.s4;
                    result += l_591.s3;
                    result += l_591.s2;
                    result += l_591.s1;
                    result += l_591.s0;
                    result += l_606;
                    atomic_add(&p_1265->l_special_values[3], result);
                }
                else
                { /* block id: 199 */
                    (1 + 1);
                }
            }
            if (p_23)
                break;
        }
    }
    --l_612;
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1265->g_274 p_1265->g_129 p_1265->g_63 p_1265->g_124 p_1265->g_94 p_1265->g_comm_values p_1265->g_29 p_1265->g_25 p_1265->g_204 p_1265->g_320 p_1265->g_236 p_1265->g_71 p_1265->g_194 p_1265->g_158 p_1265->g_375 p_1265->g_235 p_1265->g_399 p_1265->g_400 p_1265->g_210 p_1265->g_160 p_1265->g_384 p_1265->g_335
 * writes: p_1265->g_274 p_1265->g_129 p_1265->g_63 p_1265->g_71 p_1265->g_124 p_1265->g_94 p_1265->g_303 p_1265->g_158 p_1265->g_399 p_1265->g_412 p_1265->g_92 p_1265->g_128
 */
int32_t * func_40(uint8_t * p_41, struct S2 * p_1265)
{ /* block id: 75 */
    int32_t *l_269 = &p_1265->g_63;
    int32_t l_270 = 0L;
    int32_t *l_271[2][5][2] = {{{&p_1265->g_63,&p_1265->g_63},{&p_1265->g_63,&p_1265->g_63},{&p_1265->g_63,&p_1265->g_63},{&p_1265->g_63,&p_1265->g_63},{&p_1265->g_63,&p_1265->g_63}},{{&p_1265->g_63,&p_1265->g_63},{&p_1265->g_63,&p_1265->g_63},{&p_1265->g_63,&p_1265->g_63},{&p_1265->g_63,&p_1265->g_63},{&p_1265->g_63,&p_1265->g_63}}};
    int8_t l_272 = 3L;
    int64_t l_273 = (-10L);
    VECTOR(int64_t, 2) l_282 = (VECTOR(int64_t, 2))((-3L), 1L);
    VECTOR(int8_t, 8) l_288 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
    uint16_t l_334 = 65534UL;
    uint16_t l_402[7] = {1UL,0UL,1UL,1UL,0UL,1UL,1UL};
    uint8_t l_433 = 0x41L;
    uint8_t **l_434[3];
    int32_t l_435 = 0L;
    int64_t l_437 = 0x05BB36DB6ED60FA4L;
    uint16_t *l_453[2][8];
    VECTOR(int32_t, 4) l_464 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L));
    VECTOR(int32_t, 4) l_465 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 2L), 2L);
    VECTOR(int16_t, 16) l_494 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int16_t, 2))(1L, 1L), (VECTOR(int16_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_434[i] = &p_1265->g_204;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
            l_453[i][j] = &p_1265->g_92[9];
    }
    ++p_1265->g_274;
    for (p_1265->g_274 = 0; (p_1265->g_274 <= 20); p_1265->g_274 = safe_add_func_int64_t_s_s(p_1265->g_274, 5))
    { /* block id: 79 */
        int16_t l_279 = 0x7567L;
        uint32_t l_283 = 4294967295UL;
        int32_t **l_284 = (void*)0;
        int32_t **l_285[2][4][2] = {{{&p_1265->g_128[8],&l_271[1][2][0]},{&p_1265->g_128[8],&l_271[1][2][0]},{&p_1265->g_128[8],&l_271[1][2][0]},{&p_1265->g_128[8],&l_271[1][2][0]}},{{&p_1265->g_128[8],&l_271[1][2][0]},{&p_1265->g_128[8],&l_271[1][2][0]},{&p_1265->g_128[8],&l_271[1][2][0]},{&p_1265->g_128[8],&l_271[1][2][0]}}};
        int64_t *l_286 = (void*)0;
        int64_t *l_287[8][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        uint32_t *l_295 = &p_1265->g_124;
        uint64_t *l_301 = &p_1265->g_94;
        uint64_t *l_302 = &p_1265->g_303;
        int16_t *l_304 = (void*)0;
        int16_t *l_305[3];
        uint16_t l_306 = 0x6064L;
        uint16_t *l_339 = &p_1265->g_92[9];
        uint16_t **l_338 = &l_339;
        VECTOR(uint16_t, 16) l_388 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL);
        uint64_t l_442 = 0xD03DED50B1A535FDL;
        uint8_t l_472 = 255UL;
        uint32_t *l_511[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_305[i] = &p_1265->g_210;
        (*l_269) = (l_279 |= (*l_269));
        (*l_269) |= 4L;
        if ((safe_sub_func_int64_t_s_s((p_1265->g_71.s7 = ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 4))(l_282.xxyy)).yyzwxxzzzywzywww, (int64_t)l_283, (int64_t)(((l_271[0][4][1] = &p_1265->g_129) == (l_269 = &p_1265->g_129)) | GROUP_DIVERGE(2, 1))))).s0e)).odd), ((((VECTOR(int8_t, 4))(l_288.s3371)).z , l_288.s0) && ((((l_270 , (((l_306 = (safe_mul_func_int16_t_s_s((p_1265->g_158.y = ((((*l_302) = (safe_div_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u(((*l_295) ^= l_288.s4), l_270)) , (safe_add_func_uint64_t_u_u(((*l_301) &= (safe_rshift_func_uint8_t_u_s((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_1265->g_300.yx)), (l_270 == l_282.y), p_1265->g_25, 4L, ((VECTOR(int16_t, 2))((-6L))), 0x086AL)).s0 | 0xAEAFL) , 0x5CCDBCE9L) > l_282.y), l_282.x))), p_1265->g_comm_values[p_1265->tid]))), 0x209730643253158EL))) > 0x88B243DF29B417A8L) == l_282.y)), p_1265->g_29))) && 3UL) != p_1265->g_25)) >= l_272) || (*p_1265->g_204)) ^ l_282.x)))))
        { /* block id: 91 */
            int8_t l_319 = 0x3DL;
            int32_t l_323 = 0x0F62CFADL;
            uint16_t *l_337 = (void*)0;
            uint16_t **l_336 = &l_337;
            int32_t l_340 = (-1L);
            VECTOR(uint64_t, 8) l_341 = (VECTOR(uint64_t, 8))(0xDABC382449341EFFL, (VECTOR(uint64_t, 4))(0xDABC382449341EFFL, (VECTOR(uint64_t, 2))(0xDABC382449341EFFL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xDABC382449341EFFL, 18446744073709551615UL);
            VECTOR(int8_t, 2) l_354 = (VECTOR(int8_t, 2))(0x19L, (-4L));
            uint32_t l_361 = 1UL;
            uint32_t **l_406 = &l_295;
            uint32_t ***l_405 = &l_406;
            int i;
            if (((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((p_1265->g_158.x &= (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((l_319 ^ p_1265->g_320), (safe_rshift_func_int16_t_s_s(((l_323 = l_319) != (FAKE_DIVERGE(p_1265->global_2_offset, get_global_id(2), 10) != (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((-1L), 0L, (((*l_269) || (safe_add_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (18446744073709551615UL && ((GROUP_DIVERGE(0, 1) != (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((l_334 = l_319), ((((-4L) && ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_1265->g_335.yyzw)))).hi)).yyyx)).zyyzwwxw)).s6) , (p_1265->g_63 , l_336)) != l_338))), 3)), 7))) != (*l_269)))))) == 0x1AL), 0x21A5L, 0x371CL, ((VECTOR(int16_t, 2))(2L)), (-1L))))), ((VECTOR(int16_t, 4))(0x4133L)), p_1265->g_92[9], 0x62E1L, (-7L), 0x0996L)).sf8)).yyxx, ((VECTOR(int16_t, 4))(0x5FB0L))))).z, p_1265->g_236.z)))), p_1265->g_63)))) <= l_319), (-1L))), p_1265->g_236.y)) & p_1265->g_71.s0), (*p_41)))), 5)), (*l_269))) , l_340))
            { /* block id: 95 */
                VECTOR(int8_t, 16) l_355 = (VECTOR(int8_t, 16))(0x4AL, (VECTOR(int8_t, 4))(0x4AL, (VECTOR(int8_t, 2))(0x4AL, 0x12L), 0x12L), 0x12L, 0x4AL, 0x12L, (VECTOR(int8_t, 2))(0x4AL, 0x12L), (VECTOR(int8_t, 2))(0x4AL, 0x12L), 0x4AL, 0x12L, 0x4AL, 0x12L);
                uint8_t *l_360[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_362 = (-9L);
                int32_t l_363 = 0x74500565L;
                int32_t *l_364 = (void*)0;
                int i, j;
                l_363 = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_341.s20)), (GROUP_DIVERGE(2, 1) != ((VECTOR(int16_t, 2))(4L, 0x6A72L)).hi), FAKE_DIVERGE(p_1265->local_0_offset, get_local_id(0), 10), p_1265->g_248.s4, (l_341.s4 , ((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_s(0x17ECL, 1)) < 0x46774A5BL) , (--(*l_302))), (((((l_362 = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((*p_41), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(2L, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_354.xxyy)).lo)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x12L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_355.s5cf09f2c)).lo)), 0x56L, ((((safe_mul_func_uint8_t_u_u(((*l_269) |= (safe_add_func_uint32_t_u_u(((0x9189B891033A84BFL == 0x6CCBD7E238574A42L) == p_1265->g_73.s3), l_355.sb))), l_361)) , l_355.s5) , 0x659B30D6L) | 0x0ECDC715L), ((VECTOR(int8_t, 4))((-2L))), ((VECTOR(int8_t, 4))(0x59L)), 0x1BL)).s2b)), ((VECTOR(int8_t, 2))(1L))))), 7L)).wxxxxxww)).s7)), 0x56L))) > l_341.s6) != l_341.s2) , l_323) != l_355.s5))), l_355.s9)) && l_355.sf)), 0x308959F2424E4AFBL, ((VECTOR(uint64_t, 8))(0UL)), 0x61C3EAAE346E91FFL)).s2 , 9L);
                if (l_340)
                    break;
                return l_364;
            }
            else
            { /* block id: 102 */
                uint16_t *l_377 = &p_1265->g_92[1];
                VECTOR(int16_t, 4) l_386 = (VECTOR(int16_t, 4))(0x23AFL, (VECTOR(int16_t, 2))(0x23AFL, (-1L)), (-1L));
                VECTOR(int16_t, 16) l_387 = (VECTOR(int16_t, 16))(0x65B4L, (VECTOR(int16_t, 4))(0x65B4L, (VECTOR(int16_t, 2))(0x65B4L, 0x733CL), 0x733CL), 0x733CL, 0x65B4L, 0x733CL, (VECTOR(int16_t, 2))(0x65B4L, 0x733CL), (VECTOR(int16_t, 2))(0x65B4L, 0x733CL), 0x65B4L, 0x733CL, 0x65B4L, 0x733CL);
                uint32_t l_393[4][6] = {{0x2B8ABEB6L,4294967295UL,0x2B8ABEB6L,0x2B8ABEB6L,4294967295UL,0x2B8ABEB6L},{0x2B8ABEB6L,4294967295UL,0x2B8ABEB6L,0x2B8ABEB6L,4294967295UL,0x2B8ABEB6L},{0x2B8ABEB6L,4294967295UL,0x2B8ABEB6L,0x2B8ABEB6L,4294967295UL,0x2B8ABEB6L},{0x2B8ABEB6L,4294967295UL,0x2B8ABEB6L,0x2B8ABEB6L,4294967295UL,0x2B8ABEB6L}};
                int32_t *l_401 = (void*)0;
                int i, j;
                for (l_272 = (-11); (l_272 <= 20); l_272 = safe_add_func_int32_t_s_s(l_272, 9))
                { /* block id: 105 */
                    uint16_t *l_376[4][1];
                    int32_t l_394 = (-1L);
                    int32_t l_395 = 1L;
                    int32_t l_396 = 0x46B2A3A0L;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_376[i][j] = &p_1265->g_169;
                    }
                    l_396 &= ((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((p_1265->g_375[3] , (((*l_338) = l_376[1][0]) != l_377)), (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0UL, (safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_1265->global_0_offset, get_global_id(0), 10), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_1265->g_384.zywz)).wyxyzzxxwwxyzyxz)).lo)).s7)))), (l_394 = ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(p_1265->g_385.xxyy)).wwxwyxxz, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(l_386.zwxzxyyz)).s56, (int16_t)p_1265->g_264.f0))))).xxyy)).xyzwwywwyzyxzyzx)).even)), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_387.sb5)).xyyyyxyxyyyyxyxy)).sdc84)).even, ((VECTOR(int16_t, 4))(0x339BL, ((VECTOR(int16_t, 2))(0x09A6L, 0x02E5L)), 0x0A0CL)).even))).xyxxyxxy))).hi))).zwwzwyww, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_388.sa1)), 0UL, 0x1F4FL)).odd, (uint16_t)((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(1UL, ((*p_41) != (*p_1265->g_204)), (((safe_lshift_func_int16_t_s_s(((*l_269) = (safe_rshift_func_uint16_t_u_u(l_393[2][1], l_386.z))), 1)) < l_361) && (*p_1265->g_204)), 0x3AFCL, FAKE_DIVERGE(p_1265->group_2_offset, get_group_id(2), 10), 0x6182L, 65527UL, 65535UL, 1UL, l_394, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 4))(0x23EEL)))), ((VECTOR(uint16_t, 16))(2UL))))).s9))), l_354.x, l_394, 0x16D8L, l_354.y, 0x0A41L, 0x8528L))))))).s56)).hi))))), GROUP_DIVERGE(2, 1))), (-1L))), l_395)) | l_395);
                }
                for (l_323 = 2; (l_323 < 16); l_323++)
                { /* block id: 113 */
                    if (l_387.s2)
                        break;
                    (*p_1265->g_400) = (p_1265->g_235.s0 , p_1265->g_399);
                }
                (*l_269) = l_387.sf;
                l_271[1][0][0] = l_401;
            }
            --l_402[1];
            (*l_405) = (void*)0;
            (*l_269) = ((void*)0 != &l_338);
        }
        else
        { /* block id: 123 */
            uint8_t ***l_409 = &p_1265->g_203;
            uint8_t ***l_411 = (void*)0;
            uint8_t ****l_410[10] = {(void*)0,&l_411,(void*)0,(void*)0,&l_411,(void*)0,(void*)0,&l_411,(void*)0,(void*)0};
            uint16_t l_421 = 0xC696L;
            VECTOR(int32_t, 4) l_426 = (VECTOR(int32_t, 4))(0x1DF73981L, (VECTOR(int32_t, 2))(0x1DF73981L, 0x12CBEEE1L), 0x12CBEEE1L);
            VECTOR(int8_t, 4) l_441 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x03L), 0x03L);
            uint16_t l_483 = 0x439BL;
            int32_t l_485 = 1L;
            VECTOR(int16_t, 2) l_493 = (VECTOR(int16_t, 2))((-1L), 1L);
            uint32_t *l_499 = &p_1265->g_124;
            uint16_t l_513 = 1UL;
            int i;
            if ((*l_269))
                break;
            (*l_269) &= ((safe_mul_func_uint8_t_u_u(255UL, (l_409 != (p_1265->g_412[2][1][7] = &p_1265->g_205[2])))) , (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(0x18509530L, (((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((l_421 <= ((l_426.y ^= (((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_1265->g_29, p_1265->g_71.s2)), (p_1265->g_210 == ((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-1L), 0x294E4D157B67E969L)).yxyyxxyxyyyxyxxx)).sa571)).zzxwwywy))).s43, ((VECTOR(int64_t, 8))(l_421, (-1L), 8L, p_1265->g_161.s1, ((VECTOR(int64_t, 4))(0x48415AE036C3DEDBL)))).s03))))).yyxxxyxx, ((VECTOR(int64_t, 8))((-1L)))))).s5541267572065605, (int64_t)(-1L)))).s9))) == l_421) , 0x09L)) <= 0x3AL)) , (*p_41)), l_421)), (-1L))) , l_421) == 0L))), l_421)));
            if ((0xD293E3E8L && ((*p_41) < (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_426.x || (((*l_269) = (p_1265->g_320 , FAKE_DIVERGE(p_1265->local_0_offset, get_local_id(0), 10))) , (0UL & ((p_1265->g_160.y , (l_433 >= (((void*)0 == l_434[1]) && p_1265->g_384.w))) || p_1265->g_335.z)))), l_435)), l_426.z)))))
            { /* block id: 129 */
                int32_t l_436 = 1L;
                int32_t l_438 = 0x4EDB5233L;
                int32_t l_439[8][8] = {{0x4D924608L,7L,(-5L),0L,(-5L),7L,0x4D924608L,0x5A05AAD7L},{0x4D924608L,7L,(-5L),0L,(-5L),7L,0x4D924608L,0x5A05AAD7L},{0x4D924608L,7L,(-5L),0L,(-5L),7L,0x4D924608L,0x5A05AAD7L},{0x4D924608L,7L,(-5L),0L,(-5L),7L,0x4D924608L,0x5A05AAD7L},{0x4D924608L,7L,(-5L),0L,(-5L),7L,0x4D924608L,0x5A05AAD7L},{0x4D924608L,7L,(-5L),0L,(-5L),7L,0x4D924608L,0x5A05AAD7L},{0x4D924608L,7L,(-5L),0L,(-5L),7L,0x4D924608L,0x5A05AAD7L},{0x4D924608L,7L,(-5L),0L,(-5L),7L,0x4D924608L,0x5A05AAD7L}};
                int8_t l_440[3];
                uint64_t l_445 = 3UL;
                uint16_t *l_452[10] = {&l_334,&l_421,&l_306,&l_421,&l_334,&l_334,&l_421,&l_306,&l_421,&l_334};
                uint8_t **l_461 = &p_1265->g_204;
                int8_t *l_480[8][8] = {{&l_440[1],&l_440[1],&l_440[1],&l_440[1],(void*)0,(void*)0,(void*)0,(void*)0},{&l_440[1],&l_440[1],&l_440[1],&l_440[1],(void*)0,(void*)0,(void*)0,(void*)0},{&l_440[1],&l_440[1],&l_440[1],&l_440[1],(void*)0,(void*)0,(void*)0,(void*)0},{&l_440[1],&l_440[1],&l_440[1],&l_440[1],(void*)0,(void*)0,(void*)0,(void*)0},{&l_440[1],&l_440[1],&l_440[1],&l_440[1],(void*)0,(void*)0,(void*)0,(void*)0},{&l_440[1],&l_440[1],&l_440[1],&l_440[1],(void*)0,(void*)0,(void*)0,(void*)0},{&l_440[1],&l_440[1],&l_440[1],&l_440[1],(void*)0,(void*)0,(void*)0,(void*)0},{&l_440[1],&l_440[1],&l_440[1],&l_440[1],(void*)0,(void*)0,(void*)0,(void*)0}};
                uint32_t l_481 = 4294967294UL;
                int32_t l_482 = 0x6E670106L;
                int8_t l_484 = 0x60L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_440[i] = 8L;
                l_442++;
                l_445--;
                l_438 = (l_485 ^= ((((((((safe_mul_func_uint8_t_u_u(((l_439[7][1] = (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))((((l_452[1] == l_453[0][2]) == (safe_mul_func_int8_t_s_s(((((VECTOR(uint16_t, 4))(p_1265->g_456.s7260)).z <= (safe_lshift_func_uint8_t_u_u((l_421 > (l_461 != &p_41)), ((+(safe_mod_func_int32_t_s_s(((*l_269) ^= ((VECTOR(int32_t, 4))(l_464.wxwz)).w), ((VECTOR(int32_t, 2))(l_465.yw)).odd))) , 0xE0L)))) , ((safe_mul_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((l_481 = (safe_add_func_int64_t_s_s(l_472, (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1265->g_475.zxxwwwzwzwxwzyyx)).lo)).odd)))).yxyxwxwwzwwzxxzx)).even, ((VECTOR(uint8_t, 16))(255UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))((((((*p_41)++) < (0x27A2L == (&p_1265->g_124 == l_271[1][0][0]))) > l_439[7][1]) <= 0x73CC2B29L), (*p_41), 0x9AL, 1UL, 0x94L, 0x9CL, 255UL, 0x17L)).s2, 255UL, ((VECTOR(uint8_t, 4))(0xB7L)), 0UL, (*p_41), 0xE1L, ((VECTOR(uint8_t, 4))(248UL)), 0UL, 0x4FL, 0x4AL)).lo)).s24, (uint8_t)(*p_41)))))), l_439[7][1], l_441.w, 250UL, 0x91L, 0x52L, (*p_41), ((VECTOR(uint8_t, 4))(0xA5L)), 1UL, 0x9BL, 6UL)).lo, ((VECTOR(uint8_t, 8))(247UL))))).s01, (uint8_t)(*p_41), (uint8_t)(*p_41)))).odd, 0))))), l_482)) || p_1265->g_385.y) != (*l_269)), (*l_269))) != l_441.z)), l_439[7][1]))) | l_483), 0x7CA8L, ((VECTOR(uint16_t, 4))(4UL)), 65533UL, 0UL)).s72)).yyxyxxxx)).s3, l_439[3][0]))) || l_426.x), 1L)) && p_1265->g_236.y) < l_438) == l_484) , l_484) > l_484) , l_436) , l_421));
            }
            else
            { /* block id: 138 */
                int32_t l_492 = 4L;
                uint32_t **l_500 = &l_295;
                int32_t l_512 = 7L;
                int32_t l_514 = 1L;
                l_514 |= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 2))(254UL, 9UL)).xxxyyxyy))).s7, (((safe_mod_func_int16_t_s_s(((*l_269) = ((safe_add_func_uint16_t_u_u(((**l_338) = l_492), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_493.xyxy)), 0x29DDL, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))(0x3A44L, ((VECTOR(int16_t, 2))(l_494.sa9)), 0x3E66L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-1L), 0x72EFL)))), 1L, 1L)).s02, (int16_t)((safe_mul_func_uint16_t_u_u(((l_492 > ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(246UL, (safe_mul_func_uint16_t_u_u(((((*p_1265->g_400) , l_499) == ((*l_500) = l_269)) != (safe_add_func_uint8_t_u_u(0x2BL, l_426.y))), (p_1265->g_210 = (p_1265->g_158.x = (safe_add_func_int8_t_s_s((((((((((safe_lshift_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) <= (((l_512 = ((*l_269) == ((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((l_511[3] == l_271[1][2][0]), (*p_41))) == (*l_269)), l_492)) > p_1265->g_208))) | l_492) && l_493.x)), 7)) , l_492) ^ l_493.y) ^ l_426.x) & l_492) , &p_1265->g_94) == (void*)0) == l_513) && p_1265->g_264.f0), 249UL)))))), ((VECTOR(uint8_t, 2))(2UL)), l_426.y, FAKE_DIVERGE(p_1265->global_2_offset, get_global_id(2), 10), 1UL, 9UL)).lo)).yxwxzxxwyyxwzyyw, ((VECTOR(uint8_t, 16))(0UL))))).se) , l_493.x), l_426.w)) & l_492), (int16_t)0x1395L))), 0x767FL)).s4)) != 0x18AD407BE39AD444L)), 0x6B6FL)) >= 0x0863L) <= l_513)));
                l_514 |= l_512;
                if (l_441.y)
                    continue;
                l_514 &= l_493.x;
            }
            p_1265->g_128[3] = &l_485;
        }
    }
    return &p_1265->g_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_1265->g_124 p_1265->g_63 p_1265->g_235 p_1265->g_236 p_1265->g_137 p_1265->g_248 p_1265->g_204 p_1265->g_25 p_1265->g_169 p_1265->g_71 p_1265->g_129
 * writes: p_1265->g_63 p_1265->g_229 p_1265->g_230 p_1265->g_92 p_1265->g_129 p_1265->g_71
 */
uint8_t * func_42(uint64_t  p_43, uint8_t  p_44, int32_t * p_45, struct S2 * p_1265)
{ /* block id: 64 */
    uint64_t l_222 = 0xF5A33AD6039CAC54L;
    int8_t *l_225 = &p_1265->g_208;
    uint8_t *l_226 = &p_1265->g_194;
    int8_t *l_228 = &p_1265->g_208;
    int8_t **l_227[10][7][1] = {{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}},{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}},{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}},{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}},{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}},{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}},{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}},{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}},{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}},{{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225},{&l_225}}};
    VECTOR(int8_t, 4) l_231 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L);
    uint16_t *l_232 = &p_1265->g_92[0];
    VECTOR(uint64_t, 4) l_233 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xB4027C63D06EA870L), 0xB4027C63D06EA870L);
    VECTOR(int32_t, 4) l_234 = (VECTOR(int32_t, 4))(0x2AF69D36L, (VECTOR(int32_t, 2))(0x2AF69D36L, 0x16652E78L), 0x16652E78L);
    VECTOR(int32_t, 4) l_237 = (VECTOR(int32_t, 4))(0x75332D84L, (VECTOR(int32_t, 2))(0x75332D84L, 1L), 1L);
    int64_t *l_253 = (void*)0;
    int64_t *l_254 = (void*)0;
    int64_t *l_255 = (void*)0;
    int64_t *l_256 = (void*)0;
    int64_t *l_257 = (void*)0;
    int64_t *l_258 = (void*)0;
    int64_t *l_259[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_260[3];
    int32_t l_261 = 0x5602BD42L;
    int32_t *l_262 = &p_1265->g_63;
    struct S1 *l_263 = &p_1265->g_264;
    struct S1 **l_265 = (void*)0;
    struct S1 **l_266 = (void*)0;
    struct S1 *l_268 = &p_1265->g_264;
    struct S1 **l_267 = &l_268;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_260[i] = (void*)0;
    (*p_45) = ((safe_rshift_func_uint16_t_u_u(l_222, ((*l_232) = (safe_sub_func_int8_t_s_s(((((!1L) >= FAKE_DIVERGE(p_1265->global_1_offset, get_global_id(1), 10)) || (p_1265->g_124 > ((-9L) < (l_225 == (p_1265->g_230[1][2] = (p_1265->g_229[0][0][3] = func_58(l_226, p_1265))))))) , ((VECTOR(int8_t, 8))(l_231.yxwyzwzw)).s7), 0x34L))))) ^ (((VECTOR(uint64_t, 16))(l_233.xyywxzzxxxxzxzyw)).sf & p_43));
    (*l_262) |= ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_234.xy)).xxyxxyyx)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1265->g_235.s2120)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(p_1265->g_236.yxwzwyywyywxxxxy)).s4f97, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_237.yxyzzxxyyzwwwywx)))).odd, ((VECTOR(int32_t, 8))((l_237.x >= (l_237.y == (l_261 &= (((p_1265->g_137 , (safe_sub_func_int64_t_s_s((((+(safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(l_231.x, (safe_sub_func_int8_t_s_s((+(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_1265->g_248.s22273130)))).s5 > (*p_1265->g_204))), (safe_div_func_uint8_t_u_u((p_1265->g_169 <= (((VECTOR(int64_t, 2))((-5L), 1L)).odd <= (p_1265->g_71.s0 |= (((VECTOR(uint8_t, 8))(251UL, ((l_234.y , (!(0x69A46A21A4FC54CEL & p_43))) ^ 0x20E8L), 0xE8L, p_44, 247UL, p_44, 0xE5L, 0x81L)).s1 == 5UL)))), p_43)))))) <= 7UL), 0x05ABL)) , (*p_45)), l_231.y))) | FAKE_DIVERGE(p_1265->global_1_offset, get_global_id(1), 10)) <= p_1265->g_25), l_237.y))) && p_44) == 0x4CE6B556L)))), 3L, l_222, ((VECTOR(int32_t, 4))((-1L))), 0x041AD61AL))))).s66, ((VECTOR(int32_t, 2))(0x2900FE89L))))).yyxy))).y, 8L, (*p_45), (-10L), l_231.z, l_231.w, 0x53C0D08EL, 1L)).s2074205662136544)).s7483)).xwxxwwyx, (int32_t)0x523D8DF1L))).hi)), (-1L), 0x2EDEE250L, (-8L), 0x63B76497L)))).s21, ((VECTOR(int32_t, 2))(0x622E38BDL))))), 0x61F9C3E5L, (-1L))).s7173757736511701)))).hi)).s6301751142211522, ((VECTOR(int32_t, 16))(0x0C052A23L))))).sb5a4)).wxwxyyyzzwzzwzwz, ((VECTOR(int32_t, 16))(0L))))).sd763))))), ((VECTOR(int32_t, 4))(0x559D433BL))))).even, ((VECTOR(int32_t, 2))(1L))))))), (-7L), 0x4706FE9DL)).xxxywxyzxzwzzywy)), ((VECTOR(int32_t, 16))((-1L)))))).sb3)).yxyx))).z;
    (*l_267) = (l_263 = l_263);
    return l_226;
}


/* ------------------------------------------ */
/* 
 * reads : p_1265->g_124 p_1265->g_137 p_1265->g_158 p_1265->g_160 p_1265->g_161 p_1265->g_63 p_1265->g_92 p_1265->g_29 p_1265->g_71 p_1265->g_169 p_1265->g_183 p_1265->g_194 p_1265->g_73 p_1265->g_204 p_1265->g_25 p_1265->g_210
 * writes: p_1265->g_124 p_1265->g_158 p_1265->g_169 p_1265->g_63 p_1265->g_194 p_1265->g_203 p_1265->g_205 p_1265->g_208
 */
uint16_t  func_51(uint8_t * p_52, uint8_t * p_53, int32_t * p_54, uint32_t  p_55, struct S2 * p_1265)
{ /* block id: 41 */
    int32_t l_167 = 0x10C65574L;
    int32_t l_182 = 0x23231BC1L;
    int64_t *l_184 = (void*)0;
    uint8_t *l_193 = &p_1265->g_194;
    uint8_t **l_202 = (void*)0;
    uint8_t ***l_201[2];
    uint16_t *l_206[9][4][6] = {{{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0}},{{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0}},{{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0}},{{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0}},{{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0}},{{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0}},{{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0}},{{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0}},{{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0},{&p_1265->g_92[9],(void*)0,(void*)0,&p_1265->g_169,(void*)0,(void*)0}}};
    int8_t *l_207 = &p_1265->g_208;
    int32_t l_209 = 0L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_201[i] = &l_202;
    p_54 = &p_1265->g_63;
    for (p_1265->g_124 = 0; (p_1265->g_124 < 58); p_1265->g_124 = safe_add_func_uint16_t_u_u(p_1265->g_124, 2))
    { /* block id: 45 */
        int16_t l_142 = 8L;
        uint32_t *l_148[6][10][4] = {{{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124}},{{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124}},{{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124}},{{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124}},{{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124}},{{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124},{&p_1265->g_124,&p_1265->g_124,(void*)0,&p_1265->g_124}}};
        uint32_t **l_147 = &l_148[0][6][2];
        int32_t l_153 = (-1L);
        VECTOR(int8_t, 8) l_159 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
        int16_t *l_164 = (void*)0;
        int16_t *l_165 = (void*)0;
        int16_t *l_166[1][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint16_t *l_168 = &p_1265->g_169;
        int64_t *l_170 = (void*)0;
        int64_t *l_171[10];
        int32_t l_172 = 0x21A75236L;
        int8_t *l_173 = (void*)0;
        int8_t *l_174 = (void*)0;
        int8_t *l_175 = (void*)0;
        int8_t *l_176 = (void*)0;
        int8_t *l_177 = (void*)0;
        int8_t *l_178 = (void*)0;
        int8_t *l_179 = (void*)0;
        int8_t *l_180 = (void*)0;
        int8_t *l_181[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        uint64_t l_185 = 0UL;
        uint16_t ***l_186 = (void*)0;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_171[i] = (void*)0;
        (*p_54) = ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((p_1265->g_137 , (((safe_mul_func_int16_t_s_s(((!((((l_182 = (safe_sub_func_uint64_t_u_u(l_142, (l_172 = ((safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((&p_55 == ((*l_147) = &p_55)), (((*l_168) ^= (safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((l_153 ^= ((void*)0 != &p_1265->g_96[0])), ((0L > (safe_sub_func_int16_t_s_s(((p_55 > (safe_rshift_func_int16_t_s_u((~((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(p_1265->g_158.yyxyyyyxyyyyyxxy)).s634f, ((VECTOR(int16_t, 2))(1L, 0L)).yxyy))).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(l_159.s1315325517223073)).sce, ((VECTOR(uint8_t, 4))(p_1265->g_160.wyxw)).hi))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_1265->g_161.s5012135410156314)).lo)), 0x60D7L, 1L, (p_1265->g_158.x = ((safe_sub_func_uint32_t_u_u((0x489FL == p_1265->g_137.f1), (*p_54))) ^ p_1265->g_92[9])), 0x6FB9L, 0x142CL, (-2L))).s1d))).xxyyxxxxyxxyxyxx)).s2 || 0x6FDCL) <= l_167)), 9))) > (*p_52)), p_1265->g_71.s3))) , p_55))), 0x4A2BL))) <= p_55))), 7)) || (-8L)))))) , 0x6A91L) , p_1265->g_183) == l_184)) == l_185), p_55)) , (void*)0) == l_186)), l_167)) >= p_55), l_185)) ^ 0UL);
    }
    l_182 = 0x5957DF1AL;
    l_209 |= ((((*l_207) = (((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 8))(0x5AA797CCE5200239L, ((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_u(((*l_193) ^= (p_1265->g_124 , FAKE_DIVERGE(p_1265->global_1_offset, get_global_id(1), 10))), (((void*)0 != p_52) ^ p_1265->g_71.s7))) == (p_1265->g_73.sf & (l_182 = (safe_mod_func_uint64_t_u_u(p_1265->g_29, (safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(1UL, 0x585E572430E13A42L, 1UL, (((((p_1265->g_203 = &l_193) != (p_1265->g_205[2] = &p_1265->g_204)) ^ ((p_55 >= (*p_54)) != l_182)) < l_167) <= (*p_1265->g_204)), p_1265->g_63, ((VECTOR(uint64_t, 2))(18446744073709551610UL)), 0x7B57F08318B369BEL)).s1, p_55)), GROUP_DIVERGE(0, 1)))))))) , 0x3E5BL), p_55)), 3UL)) && p_55) || l_167) , 0x719E7241B832FB84L), 0x0AC97224E852BBA7L, 0x2E92EE6B793D8E8BL, p_55, ((VECTOR(int64_t, 2))(9L)), 0x6EFD5B540CACAE96L)).s47, ((VECTOR(int64_t, 2))(0x6FE8A0E8BD633C8CL))))).hi == l_167)) ^ l_167) && l_167);
    return p_1265->g_210;
}


/* ------------------------------------------ */
/* 
 * reads : p_1265->g_71 p_1265->g_73 p_1265->l_comm_values p_1265->g_25 p_1265->g_comm_values p_1265->g_94 p_1265->g_95 p_1265->g_96 p_1265->g_29
 * writes: p_1265->g_94 p_1265->g_96 p_1265->g_124 p_1265->l_comm_values
 */
uint8_t * func_56(uint8_t * p_57, struct S2 * p_1265)
{ /* block id: 25 */
    VECTOR(int16_t, 2) l_72 = (VECTOR(int16_t, 2))(0x2F71L, 1L);
    VECTOR(int64_t, 4) l_78 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L));
    struct S0 l_87[3][8] = {{{0x192811E2L,0x5A49BCD9L,2UL},{0x46242303L,-1L,0xE953CD9AL},{0x192811E2L,0x5A49BCD9L,2UL},{0x192811E2L,0x5A49BCD9L,2UL},{0x46242303L,-1L,0xE953CD9AL},{0x192811E2L,0x5A49BCD9L,2UL},{0x192811E2L,0x5A49BCD9L,2UL},{0x46242303L,-1L,0xE953CD9AL}},{{0x192811E2L,0x5A49BCD9L,2UL},{0x46242303L,-1L,0xE953CD9AL},{0x192811E2L,0x5A49BCD9L,2UL},{0x192811E2L,0x5A49BCD9L,2UL},{0x46242303L,-1L,0xE953CD9AL},{0x192811E2L,0x5A49BCD9L,2UL},{0x192811E2L,0x5A49BCD9L,2UL},{0x46242303L,-1L,0xE953CD9AL}},{{0x192811E2L,0x5A49BCD9L,2UL},{0x46242303L,-1L,0xE953CD9AL},{0x192811E2L,0x5A49BCD9L,2UL},{0x192811E2L,0x5A49BCD9L,2UL},{0x46242303L,-1L,0xE953CD9AL},{0x192811E2L,0x5A49BCD9L,2UL},{0x192811E2L,0x5A49BCD9L,2UL},{0x46242303L,-1L,0xE953CD9AL}}};
    uint8_t *l_88 = &p_1265->g_29;
    uint8_t **l_89 = &l_88;
    uint8_t *l_90 = (void*)0;
    uint16_t *l_91[3];
    int32_t l_93 = 2L;
    VECTOR(uint64_t, 8) l_99 = (VECTOR(uint64_t, 8))(0x4216E3A478E545B7L, (VECTOR(uint64_t, 4))(0x4216E3A478E545B7L, (VECTOR(uint64_t, 2))(0x4216E3A478E545B7L, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 0x4216E3A478E545B7L, 18446744073709551610UL);
    uint16_t ***l_118 = &p_1265->g_96[0];
    uint16_t **l_120 = &l_91[2];
    uint16_t ***l_119 = &l_120;
    uint32_t *l_123 = &p_1265->g_124;
    uint16_t **l_125 = (void*)0;
    int64_t *l_126[3][8][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_91[i] = &p_1265->g_92[9];
    p_1265->g_94 ^= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((((VECTOR(int64_t, 8))(p_1265->g_71.s46661253)).s5 , ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(l_72.xxxxxxxx)), ((VECTOR(int16_t, 16))(p_1265->g_73.sf04bf7a6c6106a47)).even))).s1) || (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x1725L, 0L)).xxyy)).w != p_1265->g_73.s3)) & (((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_78.xy)), 6L, 0x0B4C8B43F6205A16L)).y ^ ((safe_lshift_func_uint16_t_u_s((l_93 = (((((((-10L) <= (safe_div_func_uint8_t_u_u(l_72.y, (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_87[1][1] , ((((*l_89) = l_88) == l_90) , &p_1265->g_63)) != (void*)0), (((p_1265->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1265->tid, 2))] > 0x513BL) , p_1265->g_25) == 0x56A2L))), 1UL))))) > l_72.y) || 2L) && l_78.y) ^ FAKE_DIVERGE(p_1265->group_2_offset, get_group_id(2), 10)) ^ (-8L))), 0)) && l_78.z)), p_1265->g_71.s7)) || 0xA3L), l_72.x)) | l_87[1][1].f2) >= p_1265->g_comm_values[p_1265->tid])), p_1265->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1265->tid, 2))])), l_78.x));
    (*p_1265->g_95) = &l_91[2];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1265->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(l_99.s2613)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((l_93 = (safe_sub_func_uint64_t_u_u((~GROUP_DIVERGE(1, 1)), ((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 8))((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(18446744073709551615UL, (p_1265->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1265->tid, 2))] = (safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_78.y, ((0L <= (0x3F9E4261L & ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_1265->global_2_offset, get_global_id(2), 10), l_87[1][1].f0)), l_87[1][1].f2)) != GROUP_DIVERGE(0, 1)))) & (((*l_119) = ((*l_118) = (l_99.s4 , (*p_1265->g_95)))) == (l_125 = ((safe_div_func_uint32_t_u_u(((*l_123) = (0x0404L < l_99.s7)), 0x06941ECEL)) , (void*)0)))))), l_99.s3)), (-10L))) & l_87[1][1].f0), p_1265->g_29))))), l_72.y)), 0xFEDF3864CD2CDE1BL, FAKE_DIVERGE(p_1265->local_2_offset, get_local_id(2), 10), 0x331B938573CADF08L, ((VECTOR(uint64_t, 4))(0xC455D1EC57159ED0L)))).s1403371322714736, ((VECTOR(uint64_t, 16))(0x1FD85A3CD4DB03F7L))))).s2))) ^ p_1265->g_94), 0x00D4B8CAB167B81AL, 0x01084FA4B9057EADL, 0x53D48F0382BA7033L))))))).w, 0x6F56138988931610L)) & l_87[1][1].f1), 10))][(safe_mod_func_uint32_t_u_u(p_1265->tid, 2))]));
    return &p_1265->g_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_1265->g_63
 * writes: p_1265->g_63
 */
uint8_t * func_58(uint8_t * p_59, struct S2 * p_1265)
{ /* block id: 22 */
    VECTOR(int32_t, 8) l_61 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x65D6F9C2L), 0x65D6F9C2L), 0x65D6F9C2L, 7L, 0x65D6F9C2L);
    int32_t *l_62[3][9] = {{(void*)0,&p_1265->g_63,&p_1265->g_63,(void*)0,(void*)0,&p_1265->g_63,&p_1265->g_63,(void*)0,(void*)0},{(void*)0,&p_1265->g_63,&p_1265->g_63,(void*)0,(void*)0,&p_1265->g_63,&p_1265->g_63,(void*)0,(void*)0},{(void*)0,&p_1265->g_63,&p_1265->g_63,(void*)0,(void*)0,&p_1265->g_63,&p_1265->g_63,(void*)0,(void*)0}};
    uint8_t *l_64[1][7] = {{&p_1265->g_29,&p_1265->g_29,&p_1265->g_29,&p_1265->g_29,&p_1265->g_29,&p_1265->g_29,&p_1265->g_29}};
    int i, j;
    p_1265->g_63 ^= ((VECTOR(int32_t, 8))(l_61.s32136172)).s0;
    return l_64[0][0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S2 c_1266;
    struct S2* p_1265 = &c_1266;
    struct S2 c_1267 = {
        1UL, // p_1265->g_25
        0UL, // p_1265->g_29
        0x63176A90L, // p_1265->g_63
        (VECTOR(int64_t, 8))(0x26F69A7C888BC06FL, (VECTOR(int64_t, 4))(0x26F69A7C888BC06FL, (VECTOR(int64_t, 2))(0x26F69A7C888BC06FL, 6L), 6L), 6L, 0x26F69A7C888BC06FL, 6L), // p_1265->g_71
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_1265->g_73
        {65534UL,65534UL,65534UL,65534UL,65534UL,65534UL,65534UL,65534UL,65534UL,65534UL}, // p_1265->g_92
        1UL, // p_1265->g_94
        {(void*)0,(void*)0,(void*)0}, // p_1265->g_96
        &p_1265->g_96[0], // p_1265->g_95
        0xAC4518D7L, // p_1265->g_124
        0L, // p_1265->g_129
        {&p_1265->g_129,&p_1265->g_129,&p_1265->g_129,&p_1265->g_129,&p_1265->g_129,&p_1265->g_129,&p_1265->g_129,&p_1265->g_129,&p_1265->g_129,&p_1265->g_129}, // p_1265->g_128
        {0x246D3381L,1L}, // p_1265->g_137
        (VECTOR(int16_t, 2))(4L, 3L), // p_1265->g_158
        (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 0x8AL), 0x8AL), // p_1265->g_160
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4271L), 0x4271L), 0x4271L, 1L, 0x4271L), // p_1265->g_161
        65535UL, // p_1265->g_169
        (void*)0, // p_1265->g_183
        0xDEL, // p_1265->g_194
        &p_1265->g_25, // p_1265->g_204
        &p_1265->g_204, // p_1265->g_203
        {&p_1265->g_204,&p_1265->g_204,&p_1265->g_204}, // p_1265->g_205
        0x4CL, // p_1265->g_208
        (-6L), // p_1265->g_210
        {{{&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208}},{{&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208}},{{&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208}},{{&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208}},{{&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208,&p_1265->g_208}}}, // p_1265->g_229
        {{&p_1265->g_208,(void*)0,&p_1265->g_208},{&p_1265->g_208,(void*)0,&p_1265->g_208},{&p_1265->g_208,(void*)0,&p_1265->g_208}}, // p_1265->g_230
        (VECTOR(int32_t, 8))(0x6B9E29ADL, (VECTOR(int32_t, 4))(0x6B9E29ADL, (VECTOR(int32_t, 2))(0x6B9E29ADL, (-6L)), (-6L)), (-6L), 0x6B9E29ADL, (-6L)), // p_1265->g_235
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 7L), 7L), // p_1265->g_236
        (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x1BL), 0x1BL), 0x1BL, 9UL, 0x1BL), // p_1265->g_248
        {0x65941986L,0x1BL}, // p_1265->g_264
        18446744073709551615UL, // p_1265->g_274
        (VECTOR(int16_t, 2))(0x533DL, 0x2705L), // p_1265->g_300
        0x3CBA09F52B307CCAL, // p_1265->g_303
        1L, // p_1265->g_320
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), // p_1265->g_335
        {{0x6B9A52E4L,1L},{0x6B9A52E4L,1L},{0x6B9A52E4L,1L},{0x6B9A52E4L,1L},{0x6B9A52E4L,1L},{0x6B9A52E4L,1L},{0x6B9A52E4L,1L},{0x6B9A52E4L,1L}}, // p_1265->g_375
        (VECTOR(int8_t, 4))(0x74L, (VECTOR(int8_t, 2))(0x74L, (-1L)), (-1L)), // p_1265->g_384
        (VECTOR(int16_t, 2))(6L, 0x0F27L), // p_1265->g_385
        {-1L,-6L}, // p_1265->g_399
        &p_1265->g_399, // p_1265->g_400
        {{{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203}},{{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203}},{{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203},{&p_1265->g_203,&p_1265->g_205[1],(void*)0,&p_1265->g_205[2],&p_1265->g_205[2],(void*)0,&p_1265->g_205[1],&p_1265->g_203,&p_1265->g_203}}}, // p_1265->g_412
        (VECTOR(uint16_t, 8))(0x42B3L, (VECTOR(uint16_t, 4))(0x42B3L, (VECTOR(uint16_t, 2))(0x42B3L, 0x7969L), 0x7969L), 0x7969L, 0x42B3L, 0x7969L), // p_1265->g_456
        (VECTOR(uint8_t, 4))(0xD2L, (VECTOR(uint8_t, 2))(0xD2L, 0x9CL), 0x9CL), // p_1265->g_475
        (VECTOR(uint16_t, 16))(0xBE32L, (VECTOR(uint16_t, 4))(0xBE32L, (VECTOR(uint16_t, 2))(0xBE32L, 65530UL), 65530UL), 65530UL, 0xBE32L, 65530UL, (VECTOR(uint16_t, 2))(0xBE32L, 65530UL), (VECTOR(uint16_t, 2))(0xBE32L, 65530UL), 0xBE32L, 65530UL, 0xBE32L, 65530UL), // p_1265->g_532
        (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x676286A5L), 0x676286A5L), 0x676286A5L, (-8L), 0x676286A5L, (VECTOR(int32_t, 2))((-8L), 0x676286A5L), (VECTOR(int32_t, 2))((-8L), 0x676286A5L), (-8L), 0x676286A5L, (-8L), 0x676286A5L), // p_1265->g_541
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x198CL), 0x198CL), // p_1265->g_683
        (void*)0, // p_1265->g_686
        {0x443B3331L,4L,0x1128EEB3L}, // p_1265->g_709
        &p_1265->g_709, // p_1265->g_708
        &p_1265->g_128[4], // p_1265->g_711
        {0x196FE81BL,0x14L}, // p_1265->g_719
        &p_1265->g_375[3], // p_1265->g_720
        (VECTOR(int32_t, 2))(1L, 1L), // p_1265->g_771
        (VECTOR(uint8_t, 2))(0x60L, 0x0FL), // p_1265->g_789
        (VECTOR(uint8_t, 4))(0x93L, (VECTOR(uint8_t, 2))(0x93L, 1UL), 1UL), // p_1265->g_790
        (VECTOR(uint32_t, 4))(0x33404FE7L, (VECTOR(uint32_t, 2))(0x33404FE7L, 4294967295UL), 4294967295UL), // p_1265->g_794
        &p_1265->g_128[0], // p_1265->g_819
        {{&p_1265->g_274}}, // p_1265->g_823
        1UL, // p_1265->g_851
        (VECTOR(uint8_t, 16))(0x81L, (VECTOR(uint8_t, 4))(0x81L, (VECTOR(uint8_t, 2))(0x81L, 0xFDL), 0xFDL), 0xFDL, 0x81L, 0xFDL, (VECTOR(uint8_t, 2))(0x81L, 0xFDL), (VECTOR(uint8_t, 2))(0x81L, 0xFDL), 0x81L, 0xFDL, 0x81L, 0xFDL), // p_1265->g_867
        {0x2839L,65533UL,0x2839L,0x2839L,65533UL,0x2839L}, // p_1265->g_885
        1UL, // p_1265->g_909
        &p_1265->g_63, // p_1265->g_937
        {0UL,0UL}, // p_1265->g_973
        (VECTOR(uint16_t, 16))(0x5CC7L, (VECTOR(uint16_t, 4))(0x5CC7L, (VECTOR(uint16_t, 2))(0x5CC7L, 0xFC02L), 0xFC02L), 0xFC02L, 0x5CC7L, 0xFC02L, (VECTOR(uint16_t, 2))(0x5CC7L, 0xFC02L), (VECTOR(uint16_t, 2))(0x5CC7L, 0xFC02L), 0x5CC7L, 0xFC02L, 0x5CC7L, 0xFC02L), // p_1265->g_982
        &p_1265->g_128[6], // p_1265->g_991
        65529UL, // p_1265->g_1024
        0x02E6L, // p_1265->g_1028
        {{4294967295UL,0x4BD32F49L,4294967295UL,4294967295UL,0x4BD32F49L},{4294967295UL,0x4BD32F49L,4294967295UL,4294967295UL,0x4BD32F49L},{4294967295UL,0x4BD32F49L,4294967295UL,4294967295UL,0x4BD32F49L},{4294967295UL,0x4BD32F49L,4294967295UL,4294967295UL,0x4BD32F49L},{4294967295UL,0x4BD32F49L,4294967295UL,4294967295UL,0x4BD32F49L},{4294967295UL,0x4BD32F49L,4294967295UL,4294967295UL,0x4BD32F49L},{4294967295UL,0x4BD32F49L,4294967295UL,4294967295UL,0x4BD32F49L},{4294967295UL,0x4BD32F49L,4294967295UL,4294967295UL,0x4BD32F49L}}, // p_1265->g_1029
        (VECTOR(uint8_t, 2))(251UL, 0xC3L), // p_1265->g_1042
        {0x4AB15DC7L,0x2CL}, // p_1265->g_1074
        (VECTOR(uint16_t, 4))(0x0F96L, (VECTOR(uint16_t, 2))(0x0F96L, 0UL), 0UL), // p_1265->g_1076
        (VECTOR(uint8_t, 4))(0xA9L, (VECTOR(uint8_t, 2))(0xA9L, 255UL), 255UL), // p_1265->g_1099
        &p_1265->g_128[6], // p_1265->g_1102
        (VECTOR(uint64_t, 16))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 3UL), 3UL), 3UL, 2UL, 3UL, (VECTOR(uint64_t, 2))(2UL, 3UL), (VECTOR(uint64_t, 2))(2UL, 3UL), 2UL, 3UL, 2UL, 3UL), // p_1265->g_1106
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 4UL), 4UL), 4UL, 18446744073709551615UL, 4UL), // p_1265->g_1107
        (VECTOR(int16_t, 2))(0x57E4L, 0x067FL), // p_1265->g_1118
        (VECTOR(int64_t, 4))(0x5D65DF2FEC921675L, (VECTOR(int64_t, 2))(0x5D65DF2FEC921675L, 0L), 0L), // p_1265->g_1126
        (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x6CB2A52BCD8D1969L), 0x6CB2A52BCD8D1969L), 0x6CB2A52BCD8D1969L, 3L, 0x6CB2A52BCD8D1969L, (VECTOR(int64_t, 2))(3L, 0x6CB2A52BCD8D1969L), (VECTOR(int64_t, 2))(3L, 0x6CB2A52BCD8D1969L), 3L, 0x6CB2A52BCD8D1969L, 3L, 0x6CB2A52BCD8D1969L), // p_1265->g_1130
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L), (VECTOR(int64_t, 2))(1L, (-8L)), (VECTOR(int64_t, 2))(1L, (-8L)), 1L, (-8L), 1L, (-8L)), // p_1265->g_1132
        &p_1265->g_128[7], // p_1265->g_1147
        &p_1265->g_128[2], // p_1265->g_1153
        &p_1265->g_128[2], // p_1265->g_1175
        &p_1265->g_128[9], // p_1265->g_1194
        0x6E46CB8651954A2AL, // p_1265->g_1225
        0UL, // p_1265->g_1227
        {0x64DBL,0x64DBL,0x64DBL,0x64DBL}, // p_1265->g_1230
        &p_1265->g_264, // p_1265->g_1233
        {{{&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233},{&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233},{&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233}},{{&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233},{&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233},{&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233,&p_1265->g_1233}}}, // p_1265->g_1232
        (void*)0, // p_1265->g_1234
        (void*)0, // p_1265->g_1235
        (VECTOR(uint16_t, 4))(0x74C2L, (VECTOR(uint16_t, 2))(0x74C2L, 0x0019L), 0x0019L), // p_1265->g_1248
        (VECTOR(int32_t, 2))(0x615C75B7L, 3L), // p_1265->g_1257
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x86921BF2L), 0x86921BF2L), // p_1265->g_1258
        0, // p_1265->v_collective
        sequence_input[get_global_id(0)], // p_1265->global_0_offset
        sequence_input[get_global_id(1)], // p_1265->global_1_offset
        sequence_input[get_global_id(2)], // p_1265->global_2_offset
        sequence_input[get_local_id(0)], // p_1265->local_0_offset
        sequence_input[get_local_id(1)], // p_1265->local_1_offset
        sequence_input[get_local_id(2)], // p_1265->local_2_offset
        sequence_input[get_group_id(0)], // p_1265->group_0_offset
        sequence_input[get_group_id(1)], // p_1265->group_1_offset
        sequence_input[get_group_id(2)], // p_1265->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_1265->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1266 = c_1267;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1265);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1265->g_25, "p_1265->g_25", print_hash_value);
    transparent_crc(p_1265->g_29, "p_1265->g_29", print_hash_value);
    transparent_crc(p_1265->g_63, "p_1265->g_63", print_hash_value);
    transparent_crc(p_1265->g_71.s0, "p_1265->g_71.s0", print_hash_value);
    transparent_crc(p_1265->g_71.s1, "p_1265->g_71.s1", print_hash_value);
    transparent_crc(p_1265->g_71.s2, "p_1265->g_71.s2", print_hash_value);
    transparent_crc(p_1265->g_71.s3, "p_1265->g_71.s3", print_hash_value);
    transparent_crc(p_1265->g_71.s4, "p_1265->g_71.s4", print_hash_value);
    transparent_crc(p_1265->g_71.s5, "p_1265->g_71.s5", print_hash_value);
    transparent_crc(p_1265->g_71.s6, "p_1265->g_71.s6", print_hash_value);
    transparent_crc(p_1265->g_71.s7, "p_1265->g_71.s7", print_hash_value);
    transparent_crc(p_1265->g_73.s0, "p_1265->g_73.s0", print_hash_value);
    transparent_crc(p_1265->g_73.s1, "p_1265->g_73.s1", print_hash_value);
    transparent_crc(p_1265->g_73.s2, "p_1265->g_73.s2", print_hash_value);
    transparent_crc(p_1265->g_73.s3, "p_1265->g_73.s3", print_hash_value);
    transparent_crc(p_1265->g_73.s4, "p_1265->g_73.s4", print_hash_value);
    transparent_crc(p_1265->g_73.s5, "p_1265->g_73.s5", print_hash_value);
    transparent_crc(p_1265->g_73.s6, "p_1265->g_73.s6", print_hash_value);
    transparent_crc(p_1265->g_73.s7, "p_1265->g_73.s7", print_hash_value);
    transparent_crc(p_1265->g_73.s8, "p_1265->g_73.s8", print_hash_value);
    transparent_crc(p_1265->g_73.s9, "p_1265->g_73.s9", print_hash_value);
    transparent_crc(p_1265->g_73.sa, "p_1265->g_73.sa", print_hash_value);
    transparent_crc(p_1265->g_73.sb, "p_1265->g_73.sb", print_hash_value);
    transparent_crc(p_1265->g_73.sc, "p_1265->g_73.sc", print_hash_value);
    transparent_crc(p_1265->g_73.sd, "p_1265->g_73.sd", print_hash_value);
    transparent_crc(p_1265->g_73.se, "p_1265->g_73.se", print_hash_value);
    transparent_crc(p_1265->g_73.sf, "p_1265->g_73.sf", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1265->g_92[i], "p_1265->g_92[i]", print_hash_value);

    }
    transparent_crc(p_1265->g_94, "p_1265->g_94", print_hash_value);
    transparent_crc(p_1265->g_124, "p_1265->g_124", print_hash_value);
    transparent_crc(p_1265->g_129, "p_1265->g_129", print_hash_value);
    transparent_crc(p_1265->g_137.f0, "p_1265->g_137.f0", print_hash_value);
    transparent_crc(p_1265->g_137.f1, "p_1265->g_137.f1", print_hash_value);
    transparent_crc(p_1265->g_158.x, "p_1265->g_158.x", print_hash_value);
    transparent_crc(p_1265->g_158.y, "p_1265->g_158.y", print_hash_value);
    transparent_crc(p_1265->g_160.x, "p_1265->g_160.x", print_hash_value);
    transparent_crc(p_1265->g_160.y, "p_1265->g_160.y", print_hash_value);
    transparent_crc(p_1265->g_160.z, "p_1265->g_160.z", print_hash_value);
    transparent_crc(p_1265->g_160.w, "p_1265->g_160.w", print_hash_value);
    transparent_crc(p_1265->g_161.s0, "p_1265->g_161.s0", print_hash_value);
    transparent_crc(p_1265->g_161.s1, "p_1265->g_161.s1", print_hash_value);
    transparent_crc(p_1265->g_161.s2, "p_1265->g_161.s2", print_hash_value);
    transparent_crc(p_1265->g_161.s3, "p_1265->g_161.s3", print_hash_value);
    transparent_crc(p_1265->g_161.s4, "p_1265->g_161.s4", print_hash_value);
    transparent_crc(p_1265->g_161.s5, "p_1265->g_161.s5", print_hash_value);
    transparent_crc(p_1265->g_161.s6, "p_1265->g_161.s6", print_hash_value);
    transparent_crc(p_1265->g_161.s7, "p_1265->g_161.s7", print_hash_value);
    transparent_crc(p_1265->g_169, "p_1265->g_169", print_hash_value);
    transparent_crc(p_1265->g_194, "p_1265->g_194", print_hash_value);
    transparent_crc(p_1265->g_208, "p_1265->g_208", print_hash_value);
    transparent_crc(p_1265->g_210, "p_1265->g_210", print_hash_value);
    transparent_crc(p_1265->g_235.s0, "p_1265->g_235.s0", print_hash_value);
    transparent_crc(p_1265->g_235.s1, "p_1265->g_235.s1", print_hash_value);
    transparent_crc(p_1265->g_235.s2, "p_1265->g_235.s2", print_hash_value);
    transparent_crc(p_1265->g_235.s3, "p_1265->g_235.s3", print_hash_value);
    transparent_crc(p_1265->g_235.s4, "p_1265->g_235.s4", print_hash_value);
    transparent_crc(p_1265->g_235.s5, "p_1265->g_235.s5", print_hash_value);
    transparent_crc(p_1265->g_235.s6, "p_1265->g_235.s6", print_hash_value);
    transparent_crc(p_1265->g_235.s7, "p_1265->g_235.s7", print_hash_value);
    transparent_crc(p_1265->g_236.x, "p_1265->g_236.x", print_hash_value);
    transparent_crc(p_1265->g_236.y, "p_1265->g_236.y", print_hash_value);
    transparent_crc(p_1265->g_236.z, "p_1265->g_236.z", print_hash_value);
    transparent_crc(p_1265->g_236.w, "p_1265->g_236.w", print_hash_value);
    transparent_crc(p_1265->g_248.s0, "p_1265->g_248.s0", print_hash_value);
    transparent_crc(p_1265->g_248.s1, "p_1265->g_248.s1", print_hash_value);
    transparent_crc(p_1265->g_248.s2, "p_1265->g_248.s2", print_hash_value);
    transparent_crc(p_1265->g_248.s3, "p_1265->g_248.s3", print_hash_value);
    transparent_crc(p_1265->g_248.s4, "p_1265->g_248.s4", print_hash_value);
    transparent_crc(p_1265->g_248.s5, "p_1265->g_248.s5", print_hash_value);
    transparent_crc(p_1265->g_248.s6, "p_1265->g_248.s6", print_hash_value);
    transparent_crc(p_1265->g_248.s7, "p_1265->g_248.s7", print_hash_value);
    transparent_crc(p_1265->g_264.f0, "p_1265->g_264.f0", print_hash_value);
    transparent_crc(p_1265->g_264.f1, "p_1265->g_264.f1", print_hash_value);
    transparent_crc(p_1265->g_274, "p_1265->g_274", print_hash_value);
    transparent_crc(p_1265->g_300.x, "p_1265->g_300.x", print_hash_value);
    transparent_crc(p_1265->g_300.y, "p_1265->g_300.y", print_hash_value);
    transparent_crc(p_1265->g_303, "p_1265->g_303", print_hash_value);
    transparent_crc(p_1265->g_320, "p_1265->g_320", print_hash_value);
    transparent_crc(p_1265->g_335.x, "p_1265->g_335.x", print_hash_value);
    transparent_crc(p_1265->g_335.y, "p_1265->g_335.y", print_hash_value);
    transparent_crc(p_1265->g_335.z, "p_1265->g_335.z", print_hash_value);
    transparent_crc(p_1265->g_335.w, "p_1265->g_335.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1265->g_375[i].f0, "p_1265->g_375[i].f0", print_hash_value);
        transparent_crc(p_1265->g_375[i].f1, "p_1265->g_375[i].f1", print_hash_value);

    }
    transparent_crc(p_1265->g_384.x, "p_1265->g_384.x", print_hash_value);
    transparent_crc(p_1265->g_384.y, "p_1265->g_384.y", print_hash_value);
    transparent_crc(p_1265->g_384.z, "p_1265->g_384.z", print_hash_value);
    transparent_crc(p_1265->g_384.w, "p_1265->g_384.w", print_hash_value);
    transparent_crc(p_1265->g_385.x, "p_1265->g_385.x", print_hash_value);
    transparent_crc(p_1265->g_385.y, "p_1265->g_385.y", print_hash_value);
    transparent_crc(p_1265->g_399.f0, "p_1265->g_399.f0", print_hash_value);
    transparent_crc(p_1265->g_399.f1, "p_1265->g_399.f1", print_hash_value);
    transparent_crc(p_1265->g_456.s0, "p_1265->g_456.s0", print_hash_value);
    transparent_crc(p_1265->g_456.s1, "p_1265->g_456.s1", print_hash_value);
    transparent_crc(p_1265->g_456.s2, "p_1265->g_456.s2", print_hash_value);
    transparent_crc(p_1265->g_456.s3, "p_1265->g_456.s3", print_hash_value);
    transparent_crc(p_1265->g_456.s4, "p_1265->g_456.s4", print_hash_value);
    transparent_crc(p_1265->g_456.s5, "p_1265->g_456.s5", print_hash_value);
    transparent_crc(p_1265->g_456.s6, "p_1265->g_456.s6", print_hash_value);
    transparent_crc(p_1265->g_456.s7, "p_1265->g_456.s7", print_hash_value);
    transparent_crc(p_1265->g_475.x, "p_1265->g_475.x", print_hash_value);
    transparent_crc(p_1265->g_475.y, "p_1265->g_475.y", print_hash_value);
    transparent_crc(p_1265->g_475.z, "p_1265->g_475.z", print_hash_value);
    transparent_crc(p_1265->g_475.w, "p_1265->g_475.w", print_hash_value);
    transparent_crc(p_1265->g_532.s0, "p_1265->g_532.s0", print_hash_value);
    transparent_crc(p_1265->g_532.s1, "p_1265->g_532.s1", print_hash_value);
    transparent_crc(p_1265->g_532.s2, "p_1265->g_532.s2", print_hash_value);
    transparent_crc(p_1265->g_532.s3, "p_1265->g_532.s3", print_hash_value);
    transparent_crc(p_1265->g_532.s4, "p_1265->g_532.s4", print_hash_value);
    transparent_crc(p_1265->g_532.s5, "p_1265->g_532.s5", print_hash_value);
    transparent_crc(p_1265->g_532.s6, "p_1265->g_532.s6", print_hash_value);
    transparent_crc(p_1265->g_532.s7, "p_1265->g_532.s7", print_hash_value);
    transparent_crc(p_1265->g_532.s8, "p_1265->g_532.s8", print_hash_value);
    transparent_crc(p_1265->g_532.s9, "p_1265->g_532.s9", print_hash_value);
    transparent_crc(p_1265->g_532.sa, "p_1265->g_532.sa", print_hash_value);
    transparent_crc(p_1265->g_532.sb, "p_1265->g_532.sb", print_hash_value);
    transparent_crc(p_1265->g_532.sc, "p_1265->g_532.sc", print_hash_value);
    transparent_crc(p_1265->g_532.sd, "p_1265->g_532.sd", print_hash_value);
    transparent_crc(p_1265->g_532.se, "p_1265->g_532.se", print_hash_value);
    transparent_crc(p_1265->g_532.sf, "p_1265->g_532.sf", print_hash_value);
    transparent_crc(p_1265->g_541.s0, "p_1265->g_541.s0", print_hash_value);
    transparent_crc(p_1265->g_541.s1, "p_1265->g_541.s1", print_hash_value);
    transparent_crc(p_1265->g_541.s2, "p_1265->g_541.s2", print_hash_value);
    transparent_crc(p_1265->g_541.s3, "p_1265->g_541.s3", print_hash_value);
    transparent_crc(p_1265->g_541.s4, "p_1265->g_541.s4", print_hash_value);
    transparent_crc(p_1265->g_541.s5, "p_1265->g_541.s5", print_hash_value);
    transparent_crc(p_1265->g_541.s6, "p_1265->g_541.s6", print_hash_value);
    transparent_crc(p_1265->g_541.s7, "p_1265->g_541.s7", print_hash_value);
    transparent_crc(p_1265->g_541.s8, "p_1265->g_541.s8", print_hash_value);
    transparent_crc(p_1265->g_541.s9, "p_1265->g_541.s9", print_hash_value);
    transparent_crc(p_1265->g_541.sa, "p_1265->g_541.sa", print_hash_value);
    transparent_crc(p_1265->g_541.sb, "p_1265->g_541.sb", print_hash_value);
    transparent_crc(p_1265->g_541.sc, "p_1265->g_541.sc", print_hash_value);
    transparent_crc(p_1265->g_541.sd, "p_1265->g_541.sd", print_hash_value);
    transparent_crc(p_1265->g_541.se, "p_1265->g_541.se", print_hash_value);
    transparent_crc(p_1265->g_541.sf, "p_1265->g_541.sf", print_hash_value);
    transparent_crc(p_1265->g_683.x, "p_1265->g_683.x", print_hash_value);
    transparent_crc(p_1265->g_683.y, "p_1265->g_683.y", print_hash_value);
    transparent_crc(p_1265->g_683.z, "p_1265->g_683.z", print_hash_value);
    transparent_crc(p_1265->g_683.w, "p_1265->g_683.w", print_hash_value);
    transparent_crc(p_1265->g_709.f0, "p_1265->g_709.f0", print_hash_value);
    transparent_crc(p_1265->g_709.f1, "p_1265->g_709.f1", print_hash_value);
    transparent_crc(p_1265->g_709.f2, "p_1265->g_709.f2", print_hash_value);
    transparent_crc(p_1265->g_719.f0, "p_1265->g_719.f0", print_hash_value);
    transparent_crc(p_1265->g_719.f1, "p_1265->g_719.f1", print_hash_value);
    transparent_crc(p_1265->g_771.x, "p_1265->g_771.x", print_hash_value);
    transparent_crc(p_1265->g_771.y, "p_1265->g_771.y", print_hash_value);
    transparent_crc(p_1265->g_789.x, "p_1265->g_789.x", print_hash_value);
    transparent_crc(p_1265->g_789.y, "p_1265->g_789.y", print_hash_value);
    transparent_crc(p_1265->g_790.x, "p_1265->g_790.x", print_hash_value);
    transparent_crc(p_1265->g_790.y, "p_1265->g_790.y", print_hash_value);
    transparent_crc(p_1265->g_790.z, "p_1265->g_790.z", print_hash_value);
    transparent_crc(p_1265->g_790.w, "p_1265->g_790.w", print_hash_value);
    transparent_crc(p_1265->g_794.x, "p_1265->g_794.x", print_hash_value);
    transparent_crc(p_1265->g_794.y, "p_1265->g_794.y", print_hash_value);
    transparent_crc(p_1265->g_794.z, "p_1265->g_794.z", print_hash_value);
    transparent_crc(p_1265->g_794.w, "p_1265->g_794.w", print_hash_value);
    transparent_crc(p_1265->g_851, "p_1265->g_851", print_hash_value);
    transparent_crc(p_1265->g_867.s0, "p_1265->g_867.s0", print_hash_value);
    transparent_crc(p_1265->g_867.s1, "p_1265->g_867.s1", print_hash_value);
    transparent_crc(p_1265->g_867.s2, "p_1265->g_867.s2", print_hash_value);
    transparent_crc(p_1265->g_867.s3, "p_1265->g_867.s3", print_hash_value);
    transparent_crc(p_1265->g_867.s4, "p_1265->g_867.s4", print_hash_value);
    transparent_crc(p_1265->g_867.s5, "p_1265->g_867.s5", print_hash_value);
    transparent_crc(p_1265->g_867.s6, "p_1265->g_867.s6", print_hash_value);
    transparent_crc(p_1265->g_867.s7, "p_1265->g_867.s7", print_hash_value);
    transparent_crc(p_1265->g_867.s8, "p_1265->g_867.s8", print_hash_value);
    transparent_crc(p_1265->g_867.s9, "p_1265->g_867.s9", print_hash_value);
    transparent_crc(p_1265->g_867.sa, "p_1265->g_867.sa", print_hash_value);
    transparent_crc(p_1265->g_867.sb, "p_1265->g_867.sb", print_hash_value);
    transparent_crc(p_1265->g_867.sc, "p_1265->g_867.sc", print_hash_value);
    transparent_crc(p_1265->g_867.sd, "p_1265->g_867.sd", print_hash_value);
    transparent_crc(p_1265->g_867.se, "p_1265->g_867.se", print_hash_value);
    transparent_crc(p_1265->g_867.sf, "p_1265->g_867.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1265->g_885[i], "p_1265->g_885[i]", print_hash_value);

    }
    transparent_crc(p_1265->g_909, "p_1265->g_909", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1265->g_973[i], "p_1265->g_973[i]", print_hash_value);

    }
    transparent_crc(p_1265->g_982.s0, "p_1265->g_982.s0", print_hash_value);
    transparent_crc(p_1265->g_982.s1, "p_1265->g_982.s1", print_hash_value);
    transparent_crc(p_1265->g_982.s2, "p_1265->g_982.s2", print_hash_value);
    transparent_crc(p_1265->g_982.s3, "p_1265->g_982.s3", print_hash_value);
    transparent_crc(p_1265->g_982.s4, "p_1265->g_982.s4", print_hash_value);
    transparent_crc(p_1265->g_982.s5, "p_1265->g_982.s5", print_hash_value);
    transparent_crc(p_1265->g_982.s6, "p_1265->g_982.s6", print_hash_value);
    transparent_crc(p_1265->g_982.s7, "p_1265->g_982.s7", print_hash_value);
    transparent_crc(p_1265->g_982.s8, "p_1265->g_982.s8", print_hash_value);
    transparent_crc(p_1265->g_982.s9, "p_1265->g_982.s9", print_hash_value);
    transparent_crc(p_1265->g_982.sa, "p_1265->g_982.sa", print_hash_value);
    transparent_crc(p_1265->g_982.sb, "p_1265->g_982.sb", print_hash_value);
    transparent_crc(p_1265->g_982.sc, "p_1265->g_982.sc", print_hash_value);
    transparent_crc(p_1265->g_982.sd, "p_1265->g_982.sd", print_hash_value);
    transparent_crc(p_1265->g_982.se, "p_1265->g_982.se", print_hash_value);
    transparent_crc(p_1265->g_982.sf, "p_1265->g_982.sf", print_hash_value);
    transparent_crc(p_1265->g_1024, "p_1265->g_1024", print_hash_value);
    transparent_crc(p_1265->g_1028, "p_1265->g_1028", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1265->g_1029[i][j], "p_1265->g_1029[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1265->g_1042.x, "p_1265->g_1042.x", print_hash_value);
    transparent_crc(p_1265->g_1042.y, "p_1265->g_1042.y", print_hash_value);
    transparent_crc(p_1265->g_1074.f0, "p_1265->g_1074.f0", print_hash_value);
    transparent_crc(p_1265->g_1074.f1, "p_1265->g_1074.f1", print_hash_value);
    transparent_crc(p_1265->g_1076.x, "p_1265->g_1076.x", print_hash_value);
    transparent_crc(p_1265->g_1076.y, "p_1265->g_1076.y", print_hash_value);
    transparent_crc(p_1265->g_1076.z, "p_1265->g_1076.z", print_hash_value);
    transparent_crc(p_1265->g_1076.w, "p_1265->g_1076.w", print_hash_value);
    transparent_crc(p_1265->g_1099.x, "p_1265->g_1099.x", print_hash_value);
    transparent_crc(p_1265->g_1099.y, "p_1265->g_1099.y", print_hash_value);
    transparent_crc(p_1265->g_1099.z, "p_1265->g_1099.z", print_hash_value);
    transparent_crc(p_1265->g_1099.w, "p_1265->g_1099.w", print_hash_value);
    transparent_crc(p_1265->g_1106.s0, "p_1265->g_1106.s0", print_hash_value);
    transparent_crc(p_1265->g_1106.s1, "p_1265->g_1106.s1", print_hash_value);
    transparent_crc(p_1265->g_1106.s2, "p_1265->g_1106.s2", print_hash_value);
    transparent_crc(p_1265->g_1106.s3, "p_1265->g_1106.s3", print_hash_value);
    transparent_crc(p_1265->g_1106.s4, "p_1265->g_1106.s4", print_hash_value);
    transparent_crc(p_1265->g_1106.s5, "p_1265->g_1106.s5", print_hash_value);
    transparent_crc(p_1265->g_1106.s6, "p_1265->g_1106.s6", print_hash_value);
    transparent_crc(p_1265->g_1106.s7, "p_1265->g_1106.s7", print_hash_value);
    transparent_crc(p_1265->g_1106.s8, "p_1265->g_1106.s8", print_hash_value);
    transparent_crc(p_1265->g_1106.s9, "p_1265->g_1106.s9", print_hash_value);
    transparent_crc(p_1265->g_1106.sa, "p_1265->g_1106.sa", print_hash_value);
    transparent_crc(p_1265->g_1106.sb, "p_1265->g_1106.sb", print_hash_value);
    transparent_crc(p_1265->g_1106.sc, "p_1265->g_1106.sc", print_hash_value);
    transparent_crc(p_1265->g_1106.sd, "p_1265->g_1106.sd", print_hash_value);
    transparent_crc(p_1265->g_1106.se, "p_1265->g_1106.se", print_hash_value);
    transparent_crc(p_1265->g_1106.sf, "p_1265->g_1106.sf", print_hash_value);
    transparent_crc(p_1265->g_1107.s0, "p_1265->g_1107.s0", print_hash_value);
    transparent_crc(p_1265->g_1107.s1, "p_1265->g_1107.s1", print_hash_value);
    transparent_crc(p_1265->g_1107.s2, "p_1265->g_1107.s2", print_hash_value);
    transparent_crc(p_1265->g_1107.s3, "p_1265->g_1107.s3", print_hash_value);
    transparent_crc(p_1265->g_1107.s4, "p_1265->g_1107.s4", print_hash_value);
    transparent_crc(p_1265->g_1107.s5, "p_1265->g_1107.s5", print_hash_value);
    transparent_crc(p_1265->g_1107.s6, "p_1265->g_1107.s6", print_hash_value);
    transparent_crc(p_1265->g_1107.s7, "p_1265->g_1107.s7", print_hash_value);
    transparent_crc(p_1265->g_1118.x, "p_1265->g_1118.x", print_hash_value);
    transparent_crc(p_1265->g_1118.y, "p_1265->g_1118.y", print_hash_value);
    transparent_crc(p_1265->g_1126.x, "p_1265->g_1126.x", print_hash_value);
    transparent_crc(p_1265->g_1126.y, "p_1265->g_1126.y", print_hash_value);
    transparent_crc(p_1265->g_1126.z, "p_1265->g_1126.z", print_hash_value);
    transparent_crc(p_1265->g_1126.w, "p_1265->g_1126.w", print_hash_value);
    transparent_crc(p_1265->g_1130.s0, "p_1265->g_1130.s0", print_hash_value);
    transparent_crc(p_1265->g_1130.s1, "p_1265->g_1130.s1", print_hash_value);
    transparent_crc(p_1265->g_1130.s2, "p_1265->g_1130.s2", print_hash_value);
    transparent_crc(p_1265->g_1130.s3, "p_1265->g_1130.s3", print_hash_value);
    transparent_crc(p_1265->g_1130.s4, "p_1265->g_1130.s4", print_hash_value);
    transparent_crc(p_1265->g_1130.s5, "p_1265->g_1130.s5", print_hash_value);
    transparent_crc(p_1265->g_1130.s6, "p_1265->g_1130.s6", print_hash_value);
    transparent_crc(p_1265->g_1130.s7, "p_1265->g_1130.s7", print_hash_value);
    transparent_crc(p_1265->g_1130.s8, "p_1265->g_1130.s8", print_hash_value);
    transparent_crc(p_1265->g_1130.s9, "p_1265->g_1130.s9", print_hash_value);
    transparent_crc(p_1265->g_1130.sa, "p_1265->g_1130.sa", print_hash_value);
    transparent_crc(p_1265->g_1130.sb, "p_1265->g_1130.sb", print_hash_value);
    transparent_crc(p_1265->g_1130.sc, "p_1265->g_1130.sc", print_hash_value);
    transparent_crc(p_1265->g_1130.sd, "p_1265->g_1130.sd", print_hash_value);
    transparent_crc(p_1265->g_1130.se, "p_1265->g_1130.se", print_hash_value);
    transparent_crc(p_1265->g_1130.sf, "p_1265->g_1130.sf", print_hash_value);
    transparent_crc(p_1265->g_1132.s0, "p_1265->g_1132.s0", print_hash_value);
    transparent_crc(p_1265->g_1132.s1, "p_1265->g_1132.s1", print_hash_value);
    transparent_crc(p_1265->g_1132.s2, "p_1265->g_1132.s2", print_hash_value);
    transparent_crc(p_1265->g_1132.s3, "p_1265->g_1132.s3", print_hash_value);
    transparent_crc(p_1265->g_1132.s4, "p_1265->g_1132.s4", print_hash_value);
    transparent_crc(p_1265->g_1132.s5, "p_1265->g_1132.s5", print_hash_value);
    transparent_crc(p_1265->g_1132.s6, "p_1265->g_1132.s6", print_hash_value);
    transparent_crc(p_1265->g_1132.s7, "p_1265->g_1132.s7", print_hash_value);
    transparent_crc(p_1265->g_1132.s8, "p_1265->g_1132.s8", print_hash_value);
    transparent_crc(p_1265->g_1132.s9, "p_1265->g_1132.s9", print_hash_value);
    transparent_crc(p_1265->g_1132.sa, "p_1265->g_1132.sa", print_hash_value);
    transparent_crc(p_1265->g_1132.sb, "p_1265->g_1132.sb", print_hash_value);
    transparent_crc(p_1265->g_1132.sc, "p_1265->g_1132.sc", print_hash_value);
    transparent_crc(p_1265->g_1132.sd, "p_1265->g_1132.sd", print_hash_value);
    transparent_crc(p_1265->g_1132.se, "p_1265->g_1132.se", print_hash_value);
    transparent_crc(p_1265->g_1132.sf, "p_1265->g_1132.sf", print_hash_value);
    transparent_crc(p_1265->g_1225, "p_1265->g_1225", print_hash_value);
    transparent_crc(p_1265->g_1227, "p_1265->g_1227", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1265->g_1230[i], "p_1265->g_1230[i]", print_hash_value);

    }
    transparent_crc(p_1265->g_1248.x, "p_1265->g_1248.x", print_hash_value);
    transparent_crc(p_1265->g_1248.y, "p_1265->g_1248.y", print_hash_value);
    transparent_crc(p_1265->g_1248.z, "p_1265->g_1248.z", print_hash_value);
    transparent_crc(p_1265->g_1248.w, "p_1265->g_1248.w", print_hash_value);
    transparent_crc(p_1265->g_1257.x, "p_1265->g_1257.x", print_hash_value);
    transparent_crc(p_1265->g_1257.y, "p_1265->g_1257.y", print_hash_value);
    transparent_crc(p_1265->g_1258.x, "p_1265->g_1258.x", print_hash_value);
    transparent_crc(p_1265->g_1258.y, "p_1265->g_1258.y", print_hash_value);
    transparent_crc(p_1265->g_1258.z, "p_1265->g_1258.z", print_hash_value);
    transparent_crc(p_1265->g_1258.w, "p_1265->g_1258.w", print_hash_value);
    transparent_crc(p_1265->v_collective, "p_1265->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 7; i++)
            transparent_crc(p_1265->l_special_values[i], "p_1265->l_special_values[i]", print_hash_value);
    transparent_crc(p_1265->l_comm_values[get_linear_local_id()], "p_1265->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1265->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_1265->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
