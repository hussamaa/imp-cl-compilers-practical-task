// --atomics 38 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 32,37,1 -l 4,1,1
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
{1,3,2,0}, // permutation 0
{1,3,0,2}, // permutation 1
{1,3,2,0}, // permutation 2
{1,2,0,3}, // permutation 3
{1,2,0,3}, // permutation 4
{1,3,0,2}, // permutation 5
{1,3,0,2}, // permutation 6
{2,3,1,0}, // permutation 7
{1,0,3,2}, // permutation 8
{2,0,1,3} // permutation 9
};

// Seed: 3775117663

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int16_t  f0;
   volatile int32_t  f1;
};

union U1 {
   volatile uint64_t  f0;
   uint32_t  f1;
};

struct S2 {
    volatile VECTOR(int64_t, 4) g_15;
    VECTOR(int64_t, 4) g_16;
    volatile VECTOR(int64_t, 8) g_17;
    uint8_t g_23[7][3];
    uint8_t g_32;
    uint8_t * volatile g_31[1];
    uint64_t g_34[3];
    int32_t g_110;
    VECTOR(int8_t, 4) g_127;
    int32_t g_129;
    uint16_t g_149[10][8];
    union U1 g_163;
    union U1 g_164;
    union U1 g_165[9][6];
    union U1 g_166;
    union U1 g_167;
    union U1 g_168;
    union U1 g_169;
    union U1 g_170;
    union U1 g_171;
    union U1 g_172;
    volatile union U1 g_197;
    volatile union U1 *g_196;
    int64_t g_244;
    union U1 g_269;
    int8_t g_272;
    union U1 g_274;
    union U1 g_275;
    union U1 g_276;
    union U1 g_277;
    union U1 g_278;
    int32_t g_305[2][8][7];
    uint8_t g_327;
    int8_t g_328;
    volatile uint32_t *g_332;
    int16_t g_334;
    uint8_t g_339;
    uint8_t *g_338;
    uint16_t g_340;
    int32_t g_342;
    int32_t g_351;
    VECTOR(uint8_t, 16) g_362;
    VECTOR(int8_t, 4) g_365;
    uint16_t g_371;
    union U1 g_385;
    union U1 *g_384;
    union U1 **g_383;
    uint16_t g_402;
    VECTOR(int32_t, 16) g_404;
    uint32_t g_414;
    uint32_t g_444[1][10];
    VECTOR(int16_t, 16) g_486;
    int8_t g_487;
    VECTOR(int64_t, 2) g_543;
    VECTOR(uint8_t, 8) g_546;
    VECTOR(uint8_t, 8) g_548;
    int32_t *g_554;
    int32_t g_572;
    VECTOR(uint16_t, 2) g_578;
    uint16_t *g_739;
    VECTOR(uint64_t, 2) g_746;
    volatile union U0 g_755;
    VECTOR(uint32_t, 16) g_779;
    VECTOR(uint32_t, 8) g_780;
    volatile VECTOR(uint64_t, 8) g_819;
    volatile union U1 g_855;
    VECTOR(int64_t, 8) g_885;
    VECTOR(int16_t, 4) g_916;
    int8_t *g_952;
    volatile VECTOR(int64_t, 16) g_964;
    uint16_t g_986;
    union U0 g_1008;
    int32_t ** volatile g_1015;
    volatile VECTOR(uint8_t, 4) g_1024;
    union U1 g_1041;
    volatile uint8_t * volatile * volatile g_1063;
    volatile uint8_t * volatile * volatile *g_1062;
    union U1 g_1080;
    union U1 g_1081;
    union U1 g_1082;
    union U1 g_1083[5];
    union U1 g_1084;
    union U1 g_1085[7];
    union U1 g_1086;
    union U1 g_1087;
    union U1 g_1088;
    union U1 g_1089;
    union U1 g_1090;
    union U1 g_1091;
    union U1 g_1093;
    union U1 g_1096;
    union U1 *g_1095;
    union U1 g_1108;
    VECTOR(int8_t, 4) g_1109;
    int8_t g_1118;
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
int64_t  func_1(struct S2 * p_1123);
uint64_t  func_2(uint32_t  p_3, int8_t  p_4, int8_t  p_5, int32_t  p_6, struct S2 * p_1123);
int64_t  func_18(int64_t  p_19, uint64_t  p_20, int64_t  p_21, struct S2 * p_1123);
int32_t  func_115(uint32_t  p_116, uint8_t  p_117, uint32_t  p_118, struct S2 * p_1123);
int32_t * func_130(int8_t  p_131, int8_t  p_132, struct S2 * p_1123);
int32_t  func_152(int32_t  p_153, int32_t * p_154, uint32_t  p_155, union U1 ** p_156, uint32_t  p_157, struct S2 * p_1123);
int32_t  func_175(uint64_t * p_176, int16_t  p_177, int32_t  p_178, int32_t  p_179, union U1 * p_180, struct S2 * p_1123);
uint8_t  func_187(uint32_t  p_188, union U1 ** p_189, struct S2 * p_1123);
uint16_t  func_204(int64_t  p_205, int16_t  p_206, int32_t * p_207, uint16_t  p_208, uint64_t * p_209, struct S2 * p_1123);
int32_t * func_211(uint16_t * p_212, int64_t  p_213, struct S2 * p_1123);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1123->g_comm_values p_1123->g_15 p_1123->g_16 p_1123->g_17 p_1123->g_31 p_1123->g_1015 p_1123->g_554 p_1123->g_1024 p_1123->g_964 p_1123->g_444 p_1123->g_338 p_1123->g_339 p_1123->g_342 p_1123->g_1041 p_1123->g_546 p_1123->g_110 p_1123->g_578 p_1123->g_327 p_1123->g_163.f1 p_1123->g_819 p_1123->g_739 p_1123->g_149 p_1123->g_328 p_1123->g_1062 p_1123->g_351 p_1123->g_170.f1 p_1123->g_32 p_1123->g_383 p_1123->g_196 p_1123->g_23 p_1123->g_1095 p_1123->g_1096 p_1123->g_1093
 * writes: p_1123->g_23 p_1123->g_34 p_1123->g_32 p_1123->g_554 p_1123->g_110 p_1123->g_244 p_1123->g_342 p_1123->g_163.f1 p_1123->g_149 p_1123->g_328 p_1123->g_351 p_1123->g_170.f1 p_1123->g_384 p_1123->g_1095
 */
int64_t  func_1(struct S2 * p_1123)
{ /* block id: 4 */
    uint32_t l_9 = 0x27CAD7D7L;
    uint32_t l_10 = 0xDCDF5EF8L;
    uint8_t *l_22 = &p_1123->g_23[0][1];
    int32_t l_24[1][8][7] = {{{1L,0L,1L,1L,0L,1L,1L},{1L,0L,1L,1L,0L,1L,1L},{1L,0L,1L,1L,0L,1L,1L},{1L,0L,1L,1L,0L,1L,1L},{1L,0L,1L,1L,0L,1L,1L},{1L,0L,1L,1L,0L,1L,1L},{1L,0L,1L,1L,0L,1L,1L},{1L,0L,1L,1L,0L,1L,1L}}};
    uint8_t l_25 = 0xEDL;
    int16_t l_28 = 0x63F5L;
    uint64_t *l_33 = &p_1123->g_34[1];
    int8_t *l_1057 = &p_1123->g_328;
    int32_t l_1058 = 0x1967B921L;
    int32_t l_1067 = 1L;
    union U1 *l_1092[1][6];
    union U1 *l_1107[1];
    uint8_t **l_1114 = (void*)0;
    uint8_t ***l_1113 = &l_1114;
    int32_t *l_1115 = &l_24[0][6][0];
    int32_t *l_1116[8][3][4] = {{{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067}},{{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067}},{{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067}},{{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067}},{{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067}},{{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067}},{{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067}},{{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067},{(void*)0,&l_24[0][3][6],&p_1123->g_572,&l_1067}}};
    int32_t l_1117 = 0L;
    int32_t l_1119 = (-7L);
    uint16_t l_1120 = 0xB352L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_1092[i][j] = &p_1123->g_1093;
    }
    for (i = 0; i < 1; i++)
        l_1107[i] = &p_1123->g_1108;
    l_1067 &= ((!func_2(p_1123->g_comm_values[p_1123->tid], (safe_div_func_uint16_t_u_u((((l_9 != (p_1123->g_comm_values[p_1123->tid] | l_10)) || (safe_mod_func_int8_t_s_s(((*l_1057) &= (safe_mul_func_uint8_t_u_u((p_1123->g_comm_values[p_1123->tid] || ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(3L, 0x3F1571C097BC8B42L)).yyyxxyxy, ((VECTOR(int64_t, 2))(p_1123->g_15.xx)).yxyyxxyy, ((VECTOR(int64_t, 4))(p_1123->g_16.ywyx)).zwzxywyz))), ((VECTOR(int64_t, 8))(p_1123->g_17.s17635275)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(func_18((((*l_22) = 255UL) & ((--l_25) && l_28)), ((*l_33) = (safe_div_func_uint64_t_u_u(((void*)0 != p_1123->g_31[0]), 8UL))), p_1123->g_16.w, p_1123), ((VECTOR(int64_t, 2))(0x322975019ABC1954L)), ((VECTOR(int64_t, 2))((-10L))), ((VECTOR(int64_t, 2))(0x48215626CD5CBE82L)), 0x3E85C1E65939F014L)).hi)).yyxzwyxw))))).s6), (*p_1123->g_338)))), l_24[0][0][4]))) < 1UL), l_1058)), l_24[0][7][0], l_28, p_1123)) & l_28);
    for (p_1123->g_170.f1 = 0; (p_1123->g_170.f1 == 44); p_1123->g_170.f1++)
    { /* block id: 473 */
        int32_t *l_1070 = (void*)0;
        int32_t *l_1071 = &l_24[0][4][1];
        int32_t *l_1072 = &l_24[0][4][1];
        int32_t *l_1073[7][6][5] = {{{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0}},{{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0}},{{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0}},{{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0}},{{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0}},{{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0}},{{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0},{&l_1067,&p_1123->g_572,(void*)0,&p_1123->g_572,(void*)0}}};
        uint32_t l_1074 = 5UL;
        union U1 *l_1079[7][2][3] = {{{(void*)0,&p_1123->g_1081,(void*)0},{(void*)0,&p_1123->g_1081,(void*)0}},{{(void*)0,&p_1123->g_1081,(void*)0},{(void*)0,&p_1123->g_1081,(void*)0}},{{(void*)0,&p_1123->g_1081,(void*)0},{(void*)0,&p_1123->g_1081,(void*)0}},{{(void*)0,&p_1123->g_1081,(void*)0},{(void*)0,&p_1123->g_1081,(void*)0}},{{(void*)0,&p_1123->g_1081,(void*)0},{(void*)0,&p_1123->g_1081,(void*)0}},{{(void*)0,&p_1123->g_1081,(void*)0},{(void*)0,&p_1123->g_1081,(void*)0}},{{(void*)0,&p_1123->g_1081,(void*)0},{(void*)0,&p_1123->g_1081,(void*)0}}};
        union U1 **l_1094[9][5] = {{(void*)0,&l_1079[0][1][0],&l_1092[0][1],&l_1079[0][1][0],(void*)0},{(void*)0,&l_1079[0][1][0],&l_1092[0][1],&l_1079[0][1][0],(void*)0},{(void*)0,&l_1079[0][1][0],&l_1092[0][1],&l_1079[0][1][0],(void*)0},{(void*)0,&l_1079[0][1][0],&l_1092[0][1],&l_1079[0][1][0],(void*)0},{(void*)0,&l_1079[0][1][0],&l_1092[0][1],&l_1079[0][1][0],(void*)0},{(void*)0,&l_1079[0][1][0],&l_1092[0][1],&l_1079[0][1][0],(void*)0},{(void*)0,&l_1079[0][1][0],&l_1092[0][1],&l_1079[0][1][0],(void*)0},{(void*)0,&l_1079[0][1][0],&l_1092[0][1],&l_1079[0][1][0],(void*)0},{(void*)0,&l_1079[0][1][0],&l_1092[0][1],&l_1079[0][1][0],(void*)0}};
        int64_t *l_1099 = (void*)0;
        int64_t *l_1100 = (void*)0;
        int64_t *l_1101 = (void*)0;
        int64_t *l_1102 = (void*)0;
        int64_t *l_1103[3];
        int32_t l_1104 = 1L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1103[i] = (void*)0;
        l_1074++;
        if ((**p_1123->g_1015))
            break;
        (*l_1072) = (safe_rshift_func_int16_t_s_u(p_1123->g_964.sc, (((((p_1123->g_32 && (((((*p_1123->g_383) = l_1079[3][1][2]) != (p_1123->g_1095 = l_1092[0][1])) != (safe_lshift_func_int16_t_s_s(((l_1104 = p_1123->g_149[5][3]) != (safe_add_func_uint8_t_u_u(((*l_22) ^= (l_1107[0] != p_1123->g_196)), (((((VECTOR(int8_t, 8))(p_1123->g_1109.yxzzwyxx)).s7 || (-5L)) | 0x35ACL) != 0x5C201E5AL)))), 8))) != (*l_1071))) , (void*)0) != (void*)0) & (*p_1123->g_739)) , (*p_1123->g_739))));
    }
    (*p_1123->g_554) = (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s((((*p_1123->g_1095) , l_1113) != (l_1058 , p_1123->g_1062)))), 3));
    l_1120++;
    return p_1123->g_15.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_1123->g_1062 p_1123->g_1015 p_1123->g_554 p_1123->g_351
 * writes: p_1123->g_554 p_1123->g_351
 */
uint64_t  func_2(uint32_t  p_3, int8_t  p_4, int8_t  p_5, int32_t  p_6, struct S2 * p_1123)
{ /* block id: 464 */
    int16_t l_1059 = 1L;
    int32_t *l_1060 = &p_1123->g_351;
    int32_t **l_1061 = &p_1123->g_554;
    uint8_t **l_1065[3];
    uint8_t ***l_1064 = &l_1065[1];
    uint8_t ****l_1066 = &l_1064;
    int i;
    for (i = 0; i < 3; i++)
        l_1065[i] = (void*)0;
    l_1059 = 0x1BCC937FL;
    (*l_1061) = l_1060;
    (**p_1123->g_1015) ^= (+((p_1123->g_1062 == ((*l_1066) = l_1064)) , (&l_1060 == &l_1060)));
    return (*l_1060);
}


/* ------------------------------------------ */
/* 
 * reads : p_1123->g_1015 p_1123->g_554 p_1123->g_1024 p_1123->g_964 p_1123->g_444 p_1123->g_338 p_1123->g_339 p_1123->g_342 p_1123->g_1041 p_1123->g_546 p_1123->g_110 p_1123->g_578 p_1123->g_327 p_1123->g_163.f1 p_1123->g_819 p_1123->g_739 p_1123->g_149
 * writes: p_1123->g_32 p_1123->g_554 p_1123->g_110 p_1123->g_244 p_1123->g_342 p_1123->g_163.f1 p_1123->g_149
 */
int64_t  func_18(int64_t  p_19, uint64_t  p_20, int64_t  p_21, struct S2 * p_1123)
{ /* block id: 8 */
    uint8_t l_850 = 0x5FL;
    VECTOR(uint8_t, 8) l_875 = (VECTOR(uint8_t, 8))(0x84L, (VECTOR(uint8_t, 4))(0x84L, (VECTOR(uint8_t, 2))(0x84L, 0x26L), 0x26L), 0x26L, 0x84L, 0x26L);
    int32_t l_876 = 0x50EE8C59L;
    VECTOR(int8_t, 8) l_886 = (VECTOR(int8_t, 8))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, (-7L)), (-7L)), (-7L), 0x73L, (-7L));
    int32_t l_893 = 0L;
    int32_t l_894 = 0x67ED7FE1L;
    int32_t l_897 = (-1L);
    int32_t l_900 = 0x3C927496L;
    VECTOR(int32_t, 4) l_917 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-5L)), (-5L));
    uint64_t l_925[8][9] = {{0xA69F8730527AF865L,1UL,0xF559B0BFDE897D48L,0UL,0x1B63D68DB9F28518L,0UL,0xB98E00A05EB7369CL,0xF559B0BFDE897D48L,0UL},{0xA69F8730527AF865L,1UL,0xF559B0BFDE897D48L,0UL,0x1B63D68DB9F28518L,0UL,0xB98E00A05EB7369CL,0xF559B0BFDE897D48L,0UL},{0xA69F8730527AF865L,1UL,0xF559B0BFDE897D48L,0UL,0x1B63D68DB9F28518L,0UL,0xB98E00A05EB7369CL,0xF559B0BFDE897D48L,0UL},{0xA69F8730527AF865L,1UL,0xF559B0BFDE897D48L,0UL,0x1B63D68DB9F28518L,0UL,0xB98E00A05EB7369CL,0xF559B0BFDE897D48L,0UL},{0xA69F8730527AF865L,1UL,0xF559B0BFDE897D48L,0UL,0x1B63D68DB9F28518L,0UL,0xB98E00A05EB7369CL,0xF559B0BFDE897D48L,0UL},{0xA69F8730527AF865L,1UL,0xF559B0BFDE897D48L,0UL,0x1B63D68DB9F28518L,0UL,0xB98E00A05EB7369CL,0xF559B0BFDE897D48L,0UL},{0xA69F8730527AF865L,1UL,0xF559B0BFDE897D48L,0UL,0x1B63D68DB9F28518L,0UL,0xB98E00A05EB7369CL,0xF559B0BFDE897D48L,0UL},{0xA69F8730527AF865L,1UL,0xF559B0BFDE897D48L,0UL,0x1B63D68DB9F28518L,0UL,0xB98E00A05EB7369CL,0xF559B0BFDE897D48L,0UL}};
    int16_t l_1007 = (-1L);
    VECTOR(int16_t, 16) l_1009 = (VECTOR(int16_t, 16))(0x50EFL, (VECTOR(int16_t, 4))(0x50EFL, (VECTOR(int16_t, 2))(0x50EFL, 0x18B7L), 0x18B7L), 0x18B7L, 0x50EFL, 0x18B7L, (VECTOR(int16_t, 2))(0x50EFL, 0x18B7L), (VECTOR(int16_t, 2))(0x50EFL, 0x18B7L), 0x50EFL, 0x18B7L, 0x50EFL, 0x18B7L);
    int16_t *l_1011 = &l_1007;
    int16_t **l_1010 = &l_1011;
    VECTOR(int16_t, 4) l_1016 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L);
    VECTOR(int64_t, 2) l_1021 = (VECTOR(int64_t, 2))(0x57BBD47D5E2E1893L, 0x6845EC22E856D024L);
    VECTOR(uint8_t, 2) l_1022 = (VECTOR(uint8_t, 2))(0x5CL, 0x78L);
    VECTOR(uint8_t, 16) l_1023 = (VECTOR(uint8_t, 16))(0xC9L, (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 0x04L), 0x04L), 0x04L, 0xC9L, 0x04L, (VECTOR(uint8_t, 2))(0xC9L, 0x04L), (VECTOR(uint8_t, 2))(0xC9L, 0x04L), 0xC9L, 0x04L, 0xC9L, 0x04L);
    int32_t **l_1044 = &p_1123->g_554;
    uint32_t l_1045 = 1UL;
    int i, j;
    for (p_21 = 0; (p_21 == (-7)); p_21 = safe_sub_func_uint64_t_u_u(p_21, 1))
    { /* block id: 11 */
        VECTOR(int8_t, 8) l_862 = (VECTOR(int8_t, 8))(0x0EL, (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 0x46L), 0x46L), 0x46L, 0x0EL, 0x46L);
        VECTOR(uint8_t, 4) l_874 = (VECTOR(uint8_t, 4))(0xC0L, (VECTOR(uint8_t, 2))(0xC0L, 1UL), 1UL);
        int16_t l_877 = 0x1B0DL;
        int16_t l_901 = 0x1187L;
        int32_t l_902 = 0x09F109ECL;
        VECTOR(uint16_t, 8) l_945 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0UL), 0UL), 0UL, 8UL, 0UL);
        int16_t *l_957 = (void*)0;
        int16_t **l_956 = &l_957;
        int i;
        if ((atomic_inc(&p_1123->g_atomic_input[38 * get_linear_group_id() + 23]) == 3))
        { /* block id: 13 */
            int8_t l_37 = 0x6EL;
            int32_t l_38 = (-1L);
            int16_t l_100 = 0L;
            int32_t l_101 = 0x01BF5FEDL;
            int8_t l_102 = (-1L);
            uint64_t l_103 = 18446744073709551609UL;
            if ((l_38 = l_37))
            { /* block id: 15 */
                int32_t l_39 = 3L;
                uint8_t l_71[9][3][7] = {{{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL}},{{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL}},{{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL}},{{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL}},{{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL}},{{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL}},{{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL}},{{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL}},{{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL},{0xF7L,252UL,0x24L,0UL,0xF4L,0xF7L,0UL}}};
                int32_t l_96 = 1L;
                uint32_t l_97 = 0xCD69959CL;
                int64_t l_98 = 0x704658BA9B0DE559L;
                int i, j, k;
                for (l_39 = 0; (l_39 <= 28); ++l_39)
                { /* block id: 18 */
                    uint64_t l_42 = 0x970979B5CEC8167BL;
                    uint16_t l_45 = 2UL;
                    int32_t l_69 = 0x4B2FC7DFL;
                    uint32_t l_70 = 0x11E181F3L;
                    l_42--;
                    if (l_45)
                    { /* block id: 20 */
                        int8_t l_46[3][7] = {{5L,1L,5L,5L,1L,5L,5L},{5L,1L,5L,5L,1L,5L,5L},{5L,1L,5L,5L,1L,5L,5L}};
                        int64_t l_47 = 4L;
                        int8_t l_48 = 0x48L;
                        int32_t l_49 = 0x23CA5AADL;
                        uint32_t l_50 = 0x40613544L;
                        int i, j;
                        l_48 = (l_47 = l_46[2][4]);
                        l_50 |= l_49;
                    }
                    else
                    { /* block id: 24 */
                        uint16_t l_51 = 0xD172L;
                        uint32_t l_52 = 0x5DEFA766L;
                        union U0 l_53 = {0L};/* VOLATILE GLOBAL l_53 */
                        int32_t l_55 = 0x702DD068L;
                        int32_t *l_54 = &l_55;
                        int32_t *l_56 = &l_55;
                        int64_t l_57[5][2][2] = {{{5L,(-8L)},{5L,(-8L)}},{{5L,(-8L)},{5L,(-8L)}},{{5L,(-8L)},{5L,(-8L)}},{{5L,(-8L)},{5L,(-8L)}},{{5L,(-8L)},{5L,(-8L)}}};
                        union U1 l_58 = {0x2FB88B70E9AFB84CL};/* VOLATILE GLOBAL l_58 */
                        uint32_t l_59 = 4294967292UL;
                        int32_t l_60 = 1L;
                        uint64_t l_61 = 0xE2A2D6201886A608L;
                        VECTOR(int32_t, 16) l_62 = (VECTOR(int32_t, 16))(0x0B1E1499L, (VECTOR(int32_t, 4))(0x0B1E1499L, (VECTOR(int32_t, 2))(0x0B1E1499L, 0x73608224L), 0x73608224L), 0x73608224L, 0x0B1E1499L, 0x73608224L, (VECTOR(int32_t, 2))(0x0B1E1499L, 0x73608224L), (VECTOR(int32_t, 2))(0x0B1E1499L, 0x73608224L), 0x0B1E1499L, 0x73608224L, 0x0B1E1499L, 0x73608224L);
                        int32_t l_63 = 0x511C0E03L;
                        uint16_t l_64 = 0x4FABL;
                        int32_t *l_65 = &l_63;
                        int32_t *l_66 = (void*)0;
                        uint16_t l_67 = 0x277EL;
                        uint32_t l_68 = 0x5D12CBEDL;
                        int i, j, k;
                        l_56 = (((l_52 ^= l_51) , l_53) , (l_54 = (void*)0));
                        l_63 = (((l_57[2][0][0] , l_58) , l_59) , ((l_61 = l_60) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_62.s0a)).xyyy)))).even)).lo));
                        l_66 = (l_64 , l_65);
                        l_68 &= l_67;
                    }
                    l_70 = l_69;
                }
                if (l_71[4][2][4])
                { /* block id: 35 */
                    VECTOR(int32_t, 16) l_72 = (VECTOR(int32_t, 16))(0x1522E61FL, (VECTOR(int32_t, 4))(0x1522E61FL, (VECTOR(int32_t, 2))(0x1522E61FL, 0x0B44A659L), 0x0B44A659L), 0x0B44A659L, 0x1522E61FL, 0x0B44A659L, (VECTOR(int32_t, 2))(0x1522E61FL, 0x0B44A659L), (VECTOR(int32_t, 2))(0x1522E61FL, 0x0B44A659L), 0x1522E61FL, 0x0B44A659L, 0x1522E61FL, 0x0B44A659L);
                    int i;
                    if (((VECTOR(int32_t, 16))(l_72.s9fdcba9c6cd8d342)).s7)
                    { /* block id: 36 */
                        int16_t l_73 = (-4L);
                        VECTOR(int64_t, 8) l_74 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 4L), 4L), 4L, 9L, 4L);
                        int32_t l_75[8][7] = {{0L,0x6474A040L,0x46D4517DL,1L,0x060B685EL,0L,1L},{0L,0x6474A040L,0x46D4517DL,1L,0x060B685EL,0L,1L},{0L,0x6474A040L,0x46D4517DL,1L,0x060B685EL,0L,1L},{0L,0x6474A040L,0x46D4517DL,1L,0x060B685EL,0L,1L},{0L,0x6474A040L,0x46D4517DL,1L,0x060B685EL,0L,1L},{0L,0x6474A040L,0x46D4517DL,1L,0x060B685EL,0L,1L},{0L,0x6474A040L,0x46D4517DL,1L,0x060B685EL,0L,1L},{0L,0x6474A040L,0x46D4517DL,1L,0x060B685EL,0L,1L}};
                        int64_t l_76 = (-10L);
                        uint64_t l_77[1][5] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
                        union U1 *l_80 = (void*)0;
                        int64_t l_81 = (-1L);
                        int8_t l_82 = 0x3DL;
                        int16_t l_83 = 0x66CEL;
                        uint8_t l_84 = 0x4BL;
                        int i, j;
                        l_72.sa &= ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(0L, 0x298A09F2L, 1L, (-5L))).wzzzwwwz, ((VECTOR(int32_t, 2))((-9L), 0x621C2DF4L)).yyyyyxxy))).s6;
                        ++l_77[0][1];
                        l_80 = (void*)0;
                        --l_84;
                    }
                    else
                    { /* block id: 41 */
                        int64_t l_87 = (-8L);
                        uint32_t l_88 = 6UL;
                        ++l_88;
                    }
                }
                else
                { /* block id: 44 */
                    union U1 l_93 = {0x533FF6D77719BA66L};/* VOLATILE GLOBAL l_93 */
                    union U1 *l_92 = &l_93;
                    union U1 **l_91 = &l_92;
                    union U1 **l_94 = (void*)0;
                    union U1 **l_95 = &l_92;
                    l_95 = (l_94 = l_91);
                }
                l_98 ^= (l_97 &= l_96);
            }
            else
            { /* block id: 50 */
                uint64_t l_99 = 0x845C4EFE4AB8F1B9L;
                l_99 = (-1L);
            }
            l_101 = l_100;
            ++l_103;
            unsigned int result = 0;
            result += l_37;
            result += l_38;
            result += l_100;
            result += l_101;
            result += l_102;
            result += l_103;
            atomic_add(&p_1123->g_special_values[38 * get_linear_group_id() + 23], result);
        }
        else
        { /* block id: 55 */
            (1 + 1);
        }
        for (p_1123->g_32 = (-8); (p_1123->g_32 >= 6); p_1123->g_32 = safe_add_func_uint32_t_u_u(p_1123->g_32, 2))
        { /* block id: 60 */
            int32_t *l_108 = (void*)0;
            int32_t *l_109 = &p_1123->g_110;
            VECTOR(int8_t, 8) l_861 = (VECTOR(int8_t, 8))(0x10L, (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, (-6L)), (-6L)), (-6L), 0x10L, (-6L));
            int32_t l_896 = (-1L);
            int32_t l_899 = (-2L);
            uint64_t l_903 = 0x7FB500C09AB91804L;
            uint64_t l_906 = 18446744073709551610UL;
            union U1 **l_962 = (void*)0;
            uint8_t *l_981 = &p_1123->g_23[0][1];
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1123->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[(safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_1123->group_0_offset, get_group_id(0), 10), 10))][(safe_mod_func_uint32_t_u_u(p_1123->tid, 4))]));
        }
        for (l_1007 = 0; (l_1007 != (-26)); l_1007 = safe_sub_func_uint64_t_u_u(l_1007, 9))
        { /* block id: 436 */
            (*p_1123->g_1015) = &l_897;
        }
        l_917.x &= ((*p_1123->g_554) = (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_1016.zw)).xyyxxyxy)).s1 , p_20));
    }
    if ((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1123->group_1_offset, get_group_id(1), 10), l_925[6][8])))
    { /* block id: 442 */
        int64_t *l_1025 = &p_1123->g_244;
        int64_t l_1032[7][7] = {{0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL},{0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL},{0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL},{0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL},{0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL},{0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL},{0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL,0x1DA6E3695849B15AL}};
        uint16_t l_1039 = 0x6EFEL;
        int32_t *l_1040 = &p_1123->g_342;
        int i, j;
        (*l_1040) &= ((VECTOR(int32_t, 4))(((*p_1123->g_554) = ((p_19 && (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(l_1021.yxxy)).x, p_20))) , (p_20 | (((*l_1025) = (l_925[5][3] | ((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 2))(l_1022.xx)).yyyxxxxyyxyxxyxx, ((VECTOR(uint8_t, 2))(255UL, 1UL)).yxxyyyxyyxxxxxyy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(l_1023.s7173)).xyxxzxzw, ((VECTOR(uint8_t, 2))(p_1123->g_1024.wy)).yxyxyyyx))).s0116555402710120)).s7c03)).zywwxyzzxyywwzzy))).s5)) , ((safe_div_func_uint8_t_u_u((((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(18446744073709551614UL, 0x5AEB65A2AEA0C05EL)))).xxxyyxyxyxxyyxxx)).even, (uint64_t)(safe_add_func_uint32_t_u_u((((VECTOR(uint32_t, 8))(0x59CAF588L, 1UL, 4294967295UL, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(0x49ED5C74L, 0x78B881E6L, (safe_sub_func_int32_t_s_s((l_1009.sb & (l_1032[5][2] != p_21)), ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((((*l_1011) = (safe_sub_func_int8_t_s_s(l_1021.x, 0x43L))) < 0x5395L), 5)), l_917.w)) != l_1032[5][2]))), ((VECTOR(int32_t, 8))(0x6C2F8368L)), ((VECTOR(int32_t, 4))(0L)), 0x375D03FDL)).s63, (int32_t)p_21, (int32_t)l_1039))).xxyy)), ((VECTOR(int32_t, 4))((-1L)))))).hi))))).yxyy, (uint32_t)0UL))), 4294967295UL)).s1 & p_1123->g_964.s3), p_1123->g_444[0][5]))))).s3 , p_19), (*p_1123->g_338))) , p_20))))), ((VECTOR(int32_t, 2))(6L)), 0x4D058C82L)).w;
        (*p_1123->g_554) = (((void*)0 != l_1040) > ((((FAKE_DIVERGE(p_1123->group_0_offset, get_group_id(0), 10) , (p_1123->g_1041 , &l_850)) != (void*)0) , ((safe_rshift_func_int16_t_s_u(p_1123->g_546.s0, 3)) ^ ((((((**p_1123->g_1015) && ((((((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(0x15L, 0L, 0x7AL, 0L)).wyzwzyxzwxywyywz, ((VECTOR(int8_t, 16))((l_1044 != (p_20 , (void*)0)), l_1045, 1L, (-6L), 0L, 0x4BL, 0x7DL, ((VECTOR(int8_t, 8))(0L)), 0x27L))))).s1 > 0x1BL) == p_19) != p_1123->g_578.x) | p_19)) || GROUP_DIVERGE(2, 1)) | (**l_1044)) > p_1123->g_327) >= p_21))) | 0x50L));
        return p_20;
    }
    else
    { /* block id: 449 */
        int16_t l_1049 = 1L;
        (**l_1044) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x63592F4EL, 0x7A5D938BL)), 1L, 0x1F77ED7EL)).lo)).even;
        (*l_1044) = (*l_1044);
        for (p_1123->g_163.f1 = (-1); (p_1123->g_163.f1 >= 27); p_1123->g_163.f1++)
        { /* block id: 454 */
            int32_t *l_1048[5] = {&p_1123->g_351,&p_1123->g_351,&p_1123->g_351,&p_1123->g_351,&p_1123->g_351};
            int16_t ***l_1056 = (void*)0;
            int i;
            (*l_1044) = (void*)0;
            l_1049 |= p_21;
            l_893 &= (p_1123->g_819.s1 <= (((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((++(*p_1123->g_739)), 13)), (((void*)0 != &p_1123->g_572) >= p_1123->g_546.s0))) , l_1056) != (void*)0));
            (*l_1044) = (void*)0;
        }
    }
    return p_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_1123->g_168.f1 p_1123->g_172.f1 p_1123->g_338 p_1123->g_339 p_1123->g_486 p_1123->g_404 p_1123->g_546 p_1123->g_780 p_1123->g_362 p_1123->g_351 p_1123->g_23
 * writes: p_1123->g_168.f1 p_1123->g_172.f1 p_1123->g_164.f1 p_1123->g_554 p_1123->g_334 p_1123->g_739 p_1123->g_339 p_1123->g_110 p_1123->g_572 p_1123->g_351 p_1123->g_23
 */
int32_t  func_115(uint32_t  p_116, uint8_t  p_117, uint32_t  p_118, struct S2 * p_1123)
{ /* block id: 72 */
    int32_t *l_598[8][6][1] = {{{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572}},{{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572}},{{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572}},{{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572}},{{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572}},{{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572}},{{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572}},{{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572},{&p_1123->g_572}}};
    int8_t l_761 = 0L;
    VECTOR(int32_t, 4) l_762 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 3L), 3L);
    int16_t l_767 = 1L;
    VECTOR(int8_t, 16) l_788 = (VECTOR(int8_t, 16))(0x7FL, (VECTOR(int8_t, 4))(0x7FL, (VECTOR(int8_t, 2))(0x7FL, (-1L)), (-1L)), (-1L), 0x7FL, (-1L), (VECTOR(int8_t, 2))(0x7FL, (-1L)), (VECTOR(int8_t, 2))(0x7FL, (-1L)), 0x7FL, (-1L), 0x7FL, (-1L));
    VECTOR(uint16_t, 2) l_791 = (VECTOR(uint16_t, 2))(0UL, 0x20E9L);
    uint64_t l_796[7] = {18446744073709551609UL,18446744073709551615UL,18446744073709551609UL,18446744073709551609UL,18446744073709551615UL,18446744073709551609UL,18446744073709551609UL};
    VECTOR(int32_t, 8) l_798 = (VECTOR(int32_t, 8))(0x04F8F536L, (VECTOR(int32_t, 4))(0x04F8F536L, (VECTOR(int32_t, 2))(0x04F8F536L, 0x188E41CDL), 0x188E41CDL), 0x188E41CDL, 0x04F8F536L, 0x188E41CDL);
    int8_t *l_800 = &p_1123->g_272;
    int16_t **l_803 = (void*)0;
    uint32_t *l_808 = (void*)0;
    int64_t *l_836 = (void*)0;
    int i, j, k;
    for (p_118 = (-4); (p_118 > 50); p_118 = safe_add_func_uint8_t_u_u(p_118, 4))
    { /* block id: 75 */
        uint8_t *l_126 = &p_1123->g_23[0][1];
        int32_t *l_128 = &p_1123->g_129;
        int32_t **l_595 = &p_1123->g_554;
        (1 + 1);
    }
    for (p_1123->g_168.f1 = (-21); (p_1123->g_168.f1 <= 58); p_1123->g_168.f1 = safe_add_func_uint64_t_u_u(p_1123->g_168.f1, 3))
    { /* block id: 250 */
        int32_t **l_599 = &l_598[0][1][0];
        (*l_599) = l_598[0][1][0];
        if ((atomic_inc(&p_1123->l_atomic_input[3]) == 5))
        { /* block id: 253 */
            int32_t l_601 = 0x130D4262L;
            int32_t *l_600[7] = {&l_601,&l_601,&l_601,&l_601,&l_601,&l_601,&l_601};
            int16_t l_602[1][8][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
            int16_t l_603 = 0x38DCL;
            int32_t l_604 = 0L;
            int8_t l_605 = 1L;
            int i, j, k;
            l_600[3] = (void*)0;
            l_603 = l_602[0][1][0];
            if ((l_604 , (l_605 = 0x020CADE2L)))
            { /* block id: 257 */
                int32_t l_606 = (-10L);
                VECTOR(uint32_t, 4) l_635 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x0EADD73BL), 0x0EADD73BL);
                VECTOR(uint16_t, 2) l_636 = (VECTOR(uint16_t, 2))(0xDC61L, 0x6DB3L);
                VECTOR(uint16_t, 2) l_637 = (VECTOR(uint16_t, 2))(0xC7E9L, 65535UL);
                union U0 l_638[2][1][9] = {{{{0x442EL},{3L},{-1L},{3L},{0x442EL},{0x442EL},{3L},{-1L},{3L}}},{{{0x442EL},{3L},{-1L},{3L},{0x442EL},{0x442EL},{3L},{-1L},{3L}}}};
                uint64_t l_639[1];
                VECTOR(int32_t, 16) l_640 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L), 9L, 1L, 9L, (VECTOR(int32_t, 2))(1L, 9L), (VECTOR(int32_t, 2))(1L, 9L), 1L, 9L, 1L, 9L);
                VECTOR(uint32_t, 8) l_641 = (VECTOR(uint32_t, 8))(0x512A7071L, (VECTOR(uint32_t, 4))(0x512A7071L, (VECTOR(uint32_t, 2))(0x512A7071L, 0xE555FA00L), 0xE555FA00L), 0xE555FA00L, 0x512A7071L, 0xE555FA00L);
                VECTOR(uint32_t, 2) l_642 = (VECTOR(uint32_t, 2))(8UL, 0x84CF3667L);
                VECTOR(uint32_t, 16) l_643 = (VECTOR(uint32_t, 16))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0UL), 0UL), 0UL, 2UL, 0UL, (VECTOR(uint32_t, 2))(2UL, 0UL), (VECTOR(uint32_t, 2))(2UL, 0UL), 2UL, 0UL, 2UL, 0UL);
                VECTOR(uint32_t, 4) l_644 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xFFC9CE1AL), 0xFFC9CE1AL);
                VECTOR(uint32_t, 16) l_645 = (VECTOR(uint32_t, 16))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 5UL), 5UL), 5UL, 6UL, 5UL, (VECTOR(uint32_t, 2))(6UL, 5UL), (VECTOR(uint32_t, 2))(6UL, 5UL), 6UL, 5UL, 6UL, 5UL);
                int8_t l_646[4];
                int32_t l_647 = 1L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_639[i] = 0x6B7F8CA30BC8CC28L;
                for (i = 0; i < 4; i++)
                    l_646[i] = (-5L);
                for (l_606 = 0; (l_606 >= (-28)); l_606 = safe_sub_func_int64_t_s_s(l_606, 5))
                { /* block id: 260 */
                    int8_t l_609 = 0L;
                    int8_t l_610 = 1L;
                    int32_t l_633 = 4L;
                    int32_t *l_632 = &l_633;
                    int64_t l_634 = 0x30F70A23E8B14CC6L;
                    if ((l_610 = l_609))
                    { /* block id: 262 */
                        int32_t l_612 = (-5L);
                        int32_t *l_611[4][4] = {{&l_612,&l_612,&l_612,&l_612},{&l_612,&l_612,&l_612,&l_612},{&l_612,&l_612,&l_612,&l_612},{&l_612,&l_612,&l_612,&l_612}};
                        int i, j;
                        l_600[3] = (GROUP_DIVERGE(0, 1) , l_611[0][2]);
                    }
                    else
                    { /* block id: 264 */
                        union U1 l_613 = {0x351EB80FF10E18D8L};/* VOLATILE GLOBAL l_613 */
                        int32_t l_615 = (-10L);
                        int32_t *l_614 = &l_615;
                        int32_t *l_616 = &l_615;
                        int32_t *l_617[6];
                        uint8_t l_618 = 255UL;
                        VECTOR(uint32_t, 4) l_619 = (VECTOR(uint32_t, 4))(0x9F848F6DL, (VECTOR(uint32_t, 2))(0x9F848F6DL, 0UL), 0UL);
                        int8_t l_620 = 0x52L;
                        int64_t l_621 = 0x014BCF8B20DC269DL;
                        int32_t l_622 = 0x0CD484B6L;
                        int32_t l_623 = 0L;
                        uint64_t l_624 = 0UL;
                        uint32_t l_625 = 0UL;
                        uint8_t l_626 = 255UL;
                        int32_t l_627 = 0x48F38E9BL;
                        uint64_t l_628 = 0xE07DF4D51573F5DDL;
                        VECTOR(int32_t, 2) l_629 = (VECTOR(int32_t, 2))(0L, 0x54E4A7B9L);
                        int8_t l_630[9][1][8] = {{{0x39L,0x39L,0L,0x47L,0x58L,0x47L,0L,0x39L}},{{0x39L,0x39L,0L,0x47L,0x58L,0x47L,0L,0x39L}},{{0x39L,0x39L,0L,0x47L,0x58L,0x47L,0L,0x39L}},{{0x39L,0x39L,0L,0x47L,0x58L,0x47L,0L,0x39L}},{{0x39L,0x39L,0L,0x47L,0x58L,0x47L,0L,0x39L}},{{0x39L,0x39L,0L,0x47L,0x58L,0x47L,0L,0x39L}},{{0x39L,0x39L,0L,0x47L,0x58L,0x47L,0L,0x39L}},{{0x39L,0x39L,0L,0x47L,0x58L,0x47L,0L,0x39L}},{{0x39L,0x39L,0L,0x47L,0x58L,0x47L,0L,0x39L}}};
                        uint32_t l_631[10][3][7] = {{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}},{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}},{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}},{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}},{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}},{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}},{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}},{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}},{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}},{{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L},{0xFE62B6BCL,0xFE62B6BCL,0xD72629A6L,0x7876AF9CL,0xC4F193E9L,0x7876AF9CL,0xD72629A6L}}};
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_617[i] = &l_615;
                        l_617[2] = (l_616 = (l_613 , (l_600[3] = l_614)));
                        l_623 ^= (l_622 |= ((l_620 = (l_619.w |= l_618)) , l_621));
                        (*l_616) = (l_630[1][0][3] = (((l_625 = l_624) , (l_626 , (((VECTOR(uint32_t, 4))(4294967287UL, 0xD0078A14L, 1UL, 4294967295UL)).w , ((l_627 |= 0UL) , l_628)))) , ((VECTOR(int32_t, 8))(l_629.xyyxxyyx)).s5));
                        l_631[5][2][5] = ((*l_616) = 8L);
                    }
                    l_600[5] = l_632;
                    l_634 = ((*l_632) = 0x7324A0C4L);
                }
                l_606 &= ((l_646[0] = ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_635.zx)), 4294967287UL, ((VECTOR(uint32_t, 8))((((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(l_636.xyxx)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_637.xxyx)).wyyyzyywyxywyyxz)).sfa57))).w , (l_640.se = (l_638[0][0][7] , l_639[0]))), ((VECTOR(uint32_t, 2))(0UL, 0x109A5105L)), 0x7A4A3D83L, 6UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(l_641.s1174125133163004)).even, (uint32_t)0xDFC08DF6L))).s10)), 7UL, 0x352B337EL)).y, 0xD499EB43L, 0xF824996EL)).s3, 0x1C070A90L, ((VECTOR(uint32_t, 2))(l_642.yy)), 4294967288UL, 0UL, ((VECTOR(uint32_t, 4))(l_643.s09e0)), 4294967295UL, 0UL, 4294967288UL)), ((VECTOR(uint32_t, 4))(l_644.zxxx)).yzywwyywyxyzxwyw, ((VECTOR(uint32_t, 4))(0UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_645.sa0)).xyxyyyxxxxxxxyxx)).lo)).s1, 4294967295UL, 0UL)).wzwwzywzxxxzyyxx))).s1e)).odd) , 0x570167A8L);
                l_647 = (-5L);
                for (l_644.y = 15; (l_644.y < 32); l_644.y++)
                { /* block id: 289 */
                    VECTOR(int32_t, 2) l_650 = (VECTOR(int32_t, 2))(0x1891B502L, 0x2DC4C98FL);
                    uint64_t l_651[7] = {0x83CB998D2AFC125BL,0x30BF279EF38A0271L,0x83CB998D2AFC125BL,0x83CB998D2AFC125BL,0x30BF279EF38A0271L,0x83CB998D2AFC125BL,0x83CB998D2AFC125BL};
                    int8_t l_652 = 1L;
                    VECTOR(int32_t, 4) l_653 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L);
                    VECTOR(int32_t, 16) l_654 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x0D15B3E7L), 0x0D15B3E7L), 0x0D15B3E7L, (-3L), 0x0D15B3E7L, (VECTOR(int32_t, 2))((-3L), 0x0D15B3E7L), (VECTOR(int32_t, 2))((-3L), 0x0D15B3E7L), (-3L), 0x0D15B3E7L, (-3L), 0x0D15B3E7L);
                    uint32_t l_655 = 4294967294UL;
                    VECTOR(int32_t, 16) l_656 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3B74FA57L), 0x3B74FA57L), 0x3B74FA57L, 1L, 0x3B74FA57L, (VECTOR(int32_t, 2))(1L, 0x3B74FA57L), (VECTOR(int32_t, 2))(1L, 0x3B74FA57L), 1L, 0x3B74FA57L, 1L, 0x3B74FA57L);
                    int32_t l_657[10][5] = {{6L,0x127C3239L,6L,6L,0x127C3239L},{6L,0x127C3239L,6L,6L,0x127C3239L},{6L,0x127C3239L,6L,6L,0x127C3239L},{6L,0x127C3239L,6L,6L,0x127C3239L},{6L,0x127C3239L,6L,6L,0x127C3239L},{6L,0x127C3239L,6L,6L,0x127C3239L},{6L,0x127C3239L,6L,6L,0x127C3239L},{6L,0x127C3239L,6L,6L,0x127C3239L},{6L,0x127C3239L,6L,6L,0x127C3239L},{6L,0x127C3239L,6L,6L,0x127C3239L}};
                    uint32_t l_658 = 6UL;
                    uint64_t l_659 = 0x38D1D9C0AD58550AL;
                    int32_t l_660 = 0L;
                    int8_t l_661 = 2L;
                    uint64_t l_662 = 1UL;
                    int8_t l_663 = (-7L);
                    uint32_t l_664[10][7][3] = {{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}},{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}},{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}},{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}},{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}},{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}},{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}},{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}},{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}},{{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL},{0x816B22F7L,0x627CDDEEL,2UL}}};
                    int32_t *l_717 = (void*)0;
                    int i, j, k;
                    if (((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(l_650.xxyyxyxxxxyyyyyx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_651[4], ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x2134F0F6L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_650.x = l_652), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_653.zzwxxwyyxywyzzyx)).s15cc)), ((VECTOR(int32_t, 16))(l_654.s38e01d5ea9d42feb)).s7, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x72A31280L, 4L)))), 0x14718813L, ((VECTOR(int32_t, 2))(0L, 0x4C5E538EL)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0L, l_655, 0x2A183828L, 0x47B07215L)).lo)), 0x2F0177ECL)), 4L, 3L)).even)), ((VECTOR(int32_t, 4))(0x3C1D6182L, 0x20A2EF61L, 1L, 0L)), ((VECTOR(int32_t, 2))(l_656.s07)), 0x5BCF5F17L)))).sa0a0)).xwzxwxwy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(0L, (-5L))), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x2AB8L, 1L)), (l_638[0][0][7].f0 ^= (((l_657[9][0] , l_658) , 0x656DC49EC72274F0L) , l_659)), ((VECTOR(int16_t, 8))(l_660, ((VECTOR(int16_t, 2))(1L, 0x43A6L)), 0x4501L, l_661, l_662, (-1L), 0x5680L)), 3L, ((VECTOR(int16_t, 4))(0x556AL)))), ((VECTOR(int16_t, 16))(0x4856L))))), ((VECTOR(int16_t, 16))(0x2FF9L))))).s0474, ((VECTOR(int16_t, 4))(0x57F5L))))).even))), ((VECTOR(uint16_t, 2))(0xA3DEL))))).xxyx)).xwzzwxww)), ((VECTOR(int32_t, 8))((-8L)))))).s27, ((VECTOR(int32_t, 2))((-1L)))))).xxyxyyxy, ((VECTOR(int32_t, 8))(8L)), ((VECTOR(int32_t, 8))((-10L)))))).lo, ((VECTOR(int32_t, 4))(0x2178A5B0L)), ((VECTOR(int32_t, 4))(1L))))), 0x1F593915L, l_663, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 2))(0x0676D0DEL)), ((VECTOR(int32_t, 2))(0x6288980AL)), 0x6ACC0BBAL)).sde73)).zxwwzxwxxwwywwwx))).s6eae, ((VECTOR(int32_t, 4))(7L))))), l_664[1][6][2], 0x479753F0L, 0x18392E50L)).even, ((VECTOR(int32_t, 4))((-6L)))))).y)
                    { /* block id: 292 */
                        int16_t l_665 = 0x79DCL;
                        uint32_t l_666 = 1UL;
                        int16_t l_667 = 0L;
                        int32_t l_668 = 0x12B4D1EEL;
                        uint16_t l_669 = 0x36C5L;
                        union U0 l_670[8] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
                        VECTOR(int32_t, 16) l_671 = (VECTOR(int32_t, 16))(0x7298A2E4L, (VECTOR(int32_t, 4))(0x7298A2E4L, (VECTOR(int32_t, 2))(0x7298A2E4L, 4L), 4L), 4L, 0x7298A2E4L, 4L, (VECTOR(int32_t, 2))(0x7298A2E4L, 4L), (VECTOR(int32_t, 2))(0x7298A2E4L, 4L), 0x7298A2E4L, 4L, 0x7298A2E4L, 4L);
                        VECTOR(int64_t, 2) l_672 = (VECTOR(int64_t, 2))(0L, 0x52CFE13005074B7CL);
                        int32_t *l_673[4];
                        union U1 l_675 = {0x4EA8F46A4FC1EF2FL};/* VOLATILE GLOBAL l_675 */
                        union U1 *l_674 = &l_675;
                        union U1 *l_676 = &l_675;
                        uint32_t l_677 = 0x509A8881L;
                        VECTOR(uint64_t, 2) l_678 = (VECTOR(uint64_t, 2))(1UL, 0UL);
                        VECTOR(uint64_t, 8) l_679 = (VECTOR(uint64_t, 8))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0x351D2890776E6A92L), 0x351D2890776E6A92L), 0x351D2890776E6A92L, 7UL, 0x351D2890776E6A92L);
                        VECTOR(uint64_t, 2) l_680 = (VECTOR(uint64_t, 2))(1UL, 1UL);
                        VECTOR(uint64_t, 16) l_681 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xDB110DF35B9F1B6AL), 0xDB110DF35B9F1B6AL), 0xDB110DF35B9F1B6AL, 1UL, 0xDB110DF35B9F1B6AL, (VECTOR(uint64_t, 2))(1UL, 0xDB110DF35B9F1B6AL), (VECTOR(uint64_t, 2))(1UL, 0xDB110DF35B9F1B6AL), 1UL, 0xDB110DF35B9F1B6AL, 1UL, 0xDB110DF35B9F1B6AL);
                        VECTOR(int32_t, 4) l_682 = (VECTOR(int32_t, 4))(0x575CBC16L, (VECTOR(int32_t, 2))(0x575CBC16L, 1L), 1L);
                        uint16_t l_683 = 0xE904L;
                        union U0 l_684[1] = {{0L}};
                        uint32_t l_685 = 4294967295UL;
                        uint64_t l_686 = 0xEB0AF50D6B71758FL;
                        int32_t l_687 = 1L;
                        int64_t l_688[6];
                        uint16_t l_689[1][8] = {{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL}};
                        uint16_t l_690 = 0x5C36L;
                        int8_t l_691 = (-1L);
                        int8_t l_692 = 0x05L;
                        uint16_t l_693 = 0x9E32L;
                        uint16_t l_694 = 1UL;
                        int64_t l_695 = 0L;
                        int64_t l_696 = 0x358BC7A6FE9E6DBBL;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_673[i] = (void*)0;
                        for (i = 0; i < 6; i++)
                            l_688[i] = 2L;
                        l_600[4] = (l_665 , (l_673[0] = ((l_671.s2 ^= ((l_666 , (l_667 , (l_668 , ((l_669 , l_670[5]) , (l_666 = (l_642.y = 0xD047230BL)))))) , (l_640.s1 |= (l_660 = 0x706807F2L)))) , (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_672.xyyy)), 0x3A5EB19805B77AE0L, 0x1406AA8FEB24F720L, 0x27C7B3ACF59E6D8CL, 0x0317C50F3B7C064FL)).s21)).yxyy)).w , ((l_652 |= (l_605 = (-10L))) , l_673[1])))));
                        l_676 = l_674;
                        l_692 = (l_691 &= ((VECTOR(int32_t, 8))((-5L), l_677, (((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 8))(l_678.xxyyxxxy)).s5103775572076156, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(0UL, 0x622DF283C6F5D5DDL, ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(l_679.s21)), ((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 2))(l_680.yx)).yxxxxyyxxxxxxxyx, ((VECTOR(uint64_t, 4))(l_681.sf84e)).ywzywxxzzwzzzzzx))).hi)).even, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0xFE79D112F3FFBE85L, (l_682.z , (l_683 = 0UL)), (l_651[4] &= 0x6BEDCD2C9AFF11BEL), 7UL, 0xAF805167F6B9AE52L, GROUP_DIVERGE(0, 1), 18446744073709551607UL, 0x01C4739C0ED6CC8EL)), (l_684[0] , l_685), ((VECTOR(uint64_t, 8))(l_686, 0x586BB4CE5DAAD9F2L, ((VECTOR(uint64_t, 4))(0x182875CF198643ACL)), 18446744073709551613UL, 18446744073709551614UL)).s3, 0x617E9AD7BF3AC7F9L, ((VECTOR(uint64_t, 4))(0x1E35CDAA2BBDD3F1L)), 18446744073709551609UL)).s28b1))).hi)))))).yxxxyxxx, ((VECTOR(uint64_t, 8))(18446744073709551607UL))))).lo)).zwxywxxw)), (uint64_t)l_687, (uint64_t)GROUP_DIVERGE(1, 1)))), ((VECTOR(uint64_t, 8))(0x44F29E35358FEC33L))))), l_688[0], ((VECTOR(uint64_t, 4))(0xF9A449A4E6F7F47AL)), 0x4B3B08BB13B07509L)).even)).s3510270433222747))).s1 , l_689[0][7]), l_690, ((VECTOR(int32_t, 4))(0x41BF984FL)))).s5);
                        l_696 = (l_695 = (l_694 |= l_693));
                    }
                    else
                    { /* block id: 310 */
                        uint32_t l_697 = 4294967294UL;
                        int32_t l_698 = (-1L);
                        int32_t *l_699 = &l_698;
                        int32_t l_700 = (-2L);
                        uint8_t l_701[10][8] = {{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L},{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L},{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L},{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L},{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L},{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L},{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L},{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L},{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L},{255UL,0x15L,0xC7L,0x4EL,0x15L,0x4EL,0xC7L,0x15L}};
                        uint32_t l_704 = 0UL;
                        int i, j;
                        l_698 &= l_697;
                        l_600[6] = l_699;
                        ++l_701[4][1];
                        (*l_699) = l_704;
                    }
                    for (l_657[6][3] = (-29); (l_657[6][3] <= (-27)); l_657[6][3] = safe_add_func_int64_t_s_s(l_657[6][3], 2))
                    { /* block id: 318 */
                        uint32_t l_707 = 0xD7F91DC9L;
                        int32_t l_708[9][2];
                        int32_t l_709 = 0x5E846353L;
                        int32_t l_710 = 1L;
                        int64_t l_711 = 0x5B4FE6EAE69AAC36L;
                        int16_t l_712 = (-1L);
                        int32_t l_713 = 0x327FF870L;
                        int32_t *l_714 = (void*)0;
                        int32_t l_715 = 0x5CF9CA61L;
                        int32_t l_716 = (-10L);
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_708[i][j] = 0x0D636186L;
                        }
                        l_713 = (l_712 ^= (l_711 = (l_710 = (l_709 = (l_708[8][0] = l_707)))));
                        l_714 = (void*)0;
                        l_716 = l_715;
                    }
                    l_600[3] = l_717;
                }
            }
            else
            { /* block id: 330 */
                int8_t l_718[4][7] = {{0x45L,0x6EL,0x26L,0x6EL,0x45L,0x45L,0x6EL},{0x45L,0x6EL,0x26L,0x6EL,0x45L,0x45L,0x6EL},{0x45L,0x6EL,0x26L,0x6EL,0x45L,0x45L,0x6EL},{0x45L,0x6EL,0x26L,0x6EL,0x45L,0x45L,0x6EL}};
                uint32_t l_719 = 0UL;
                int8_t l_720 = 0x09L;
                uint32_t l_721 = 4294967295UL;
                int i, j;
                l_719 = l_718[3][2];
                --l_721;
            }
            unsigned int result = 0;
            result += l_601;
            int l_602_i0, l_602_i1, l_602_i2;
            for (l_602_i0 = 0; l_602_i0 < 1; l_602_i0++) {
                for (l_602_i1 = 0; l_602_i1 < 8; l_602_i1++) {
                    for (l_602_i2 = 0; l_602_i2 < 1; l_602_i2++) {
                        result += l_602[l_602_i0][l_602_i1][l_602_i2];
                    }
                }
            }
            result += l_603;
            result += l_604;
            result += l_605;
            atomic_add(&p_1123->l_special_values[3], result);
        }
        else
        { /* block id: 334 */
            (1 + 1);
        }
    }
    for (p_1123->g_172.f1 = 0; (p_1123->g_172.f1 <= 48); p_1123->g_172.f1++)
    { /* block id: 340 */
        int32_t *l_728 = &p_1123->g_110;
        uint32_t l_735 = 7UL;
        int32_t l_757 = (-6L);
        int32_t l_758 = 0x2C105E90L;
        int32_t l_759 = 0x0C743EDFL;
        int32_t l_760 = 0L;
        int32_t l_765 = 0x368AA92EL;
        VECTOR(int32_t, 2) l_766 = (VECTOR(int32_t, 2))(0x0E340A98L, (-4L));
        uint32_t l_768 = 0x4654C26BL;
        VECTOR(int8_t, 16) l_775 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
        VECTOR(uint32_t, 4) l_778 = (VECTOR(uint32_t, 4))(0x43B11AAFL, (VECTOR(uint32_t, 2))(0x43B11AAFL, 4294967286UL), 4294967286UL);
        int32_t **l_781[9][5][5] = {{{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554}},{{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554}},{{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554}},{{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554}},{{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554}},{{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554}},{{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554}},{{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554}},{{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554},{&l_728,&l_598[0][1][0],&l_728,&l_728,&p_1123->g_554}}};
        VECTOR(int32_t, 16) l_797 = (VECTOR(int32_t, 16))(0x46CF246BL, (VECTOR(int32_t, 4))(0x46CF246BL, (VECTOR(int32_t, 2))(0x46CF246BL, 0x7B73B166L), 0x7B73B166L), 0x7B73B166L, 0x46CF246BL, 0x7B73B166L, (VECTOR(int32_t, 2))(0x46CF246BL, 0x7B73B166L), (VECTOR(int32_t, 2))(0x46CF246BL, 0x7B73B166L), 0x46CF246BL, 0x7B73B166L, 0x46CF246BL, 0x7B73B166L);
        VECTOR(int32_t, 8) l_799 = (VECTOR(int32_t, 8))(0x55DEAC4DL, (VECTOR(int32_t, 4))(0x55DEAC4DL, (VECTOR(int32_t, 2))(0x55DEAC4DL, (-2L)), (-2L)), (-2L), 0x55DEAC4DL, (-2L));
        uint32_t *l_807 = (void*)0;
        uint32_t **l_806[9];
        uint8_t **l_825 = &p_1123->g_338;
        uint8_t ***l_824 = &l_825;
        uint32_t l_832 = 0x744E9A16L;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_806[i] = &l_807;
        for (p_1123->g_164.f1 = 9; (p_1123->g_164.f1 < 43); p_1123->g_164.f1 = safe_add_func_int16_t_s_s(p_1123->g_164.f1, 1))
        { /* block id: 343 */
            int32_t l_729 = 0x0A124ACEL;
            int16_t *l_730 = &p_1123->g_334;
            uint16_t **l_736 = (void*)0;
            uint16_t *l_738[5][3][10] = {{{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]}},{{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]}},{{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]}},{{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]}},{{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]},{&p_1123->g_149[4][2],&p_1123->g_149[9][2],(void*)0,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_149[5][3],&p_1123->g_402,&p_1123->g_340,&p_1123->g_402,&p_1123->g_149[4][2]}}};
            uint16_t **l_737[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int32_t **l_756 = &p_1123->g_554;
            int32_t l_763 = 1L;
            int32_t l_764[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_764[i] = 0x51262A27L;
            p_1123->g_554 = l_728;
            atomic_max(&p_1123->g_atomic_reduction[get_linear_group_id()], (((l_729 || (((*l_730) = (-9L)) != (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((*p_1123->g_338), 0)), l_735)))) >= (-1L)) , 9L));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1123->v_collective += p_1123->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*l_756) = func_211((p_1123->g_739 = &p_1123->g_340), (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(((((0UL && (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_1123->g_746.xyxyyxxxyyyxxxyy)).s7, (safe_rshift_func_uint8_t_u_s(((*p_1123->g_338) = (*p_1123->g_338)), ((safe_sub_func_uint16_t_u_u(1UL, ((VECTOR(uint16_t, 16))(65531UL, ((~(+(((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_1123->g_578.x, (0x218CL && 1L))), (*l_728))) , p_1123->g_755) , (*p_1123->g_554)))) && p_118), ((VECTOR(uint16_t, 4))(0x2396L)), 0xD551L, 0x05A2L, 6UL, 65535UL, 0xE4B3L, 0UL, p_116, 8UL, 65530UL, 0x38DAL)).s0)) >= 0L)))))) > l_729) > p_1123->g_486.s1) > 0x59F65CFDL), GROUP_DIVERGE(1, 1))) , 4L), p_118)), p_1123);
            ++l_768;
        }
        l_598[0][1][0] = &p_1123->g_110;
        p_1123->g_351 ^= (p_1123->g_572 = ((l_800 != (void*)0) , ((safe_div_func_int64_t_s_s(((void*)0 != l_803), ((((*l_824) = (((safe_add_func_uint32_t_u_u(4294967295UL, ((*l_728) = ((l_808 = &p_1123->g_414) != l_598[0][5][0])))) , ((safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((~(safe_sub_func_uint8_t_u_u(p_116, (safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_1123->local_1_offset, get_local_id(1), 10), (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(p_1123->g_819.s5652)).x, ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((*p_1123->g_338) &= (p_117 < p_1123->g_404.s6)), p_117)), p_1123->g_546.s4)) , p_1123->g_780.s1)))))))), GROUP_DIVERGE(0, 1))) || p_117), p_116)) >= 6UL)) , &p_1123->g_338)) != &p_1123->g_338) , p_1123->g_362.s8))) || 0x41L)));
        if (((VECTOR(int32_t, 2))(0x7EB729F6L, (-1L))).odd)
        { /* block id: 362 */
            int32_t *l_829 = &l_758;
            uint64_t l_833 = 0UL;
            for (l_760 = (-21); (l_760 >= 17); l_760 = safe_add_func_uint32_t_u_u(l_760, 9))
            { /* block id: 365 */
                uint32_t l_828 = 0xD9638323L;
                return l_828;
            }
            if (p_118)
                continue;
            (*l_829) ^= (((((void*)0 != l_829) < (safe_mul_func_int8_t_s_s((p_116 <= 0x77L), (p_116 == ((VECTOR(int8_t, 16))(p_1123->g_269.f0, (((((*p_1123->g_739) = (*l_728)) | p_1123->g_543.y) > (((p_1123->g_168.f0 , (-1L)) == p_116) & p_1123->g_362.s6)) ^ p_1123->g_578.x), p_118, p_117, 0x1CL, ((VECTOR(int8_t, 2))((-7L))), 1L, ((VECTOR(int8_t, 4))(0x41L)), p_117, (-1L), 0x60L, 0x7DL)).s6)))) , p_118) ^ l_832);
            l_833--;
        }
        else
        { /* block id: 372 */
            (*l_728) = (p_118 == ((void*)0 == l_836));
        }
    }
    return p_1123->g_486.sa;
}


/* ------------------------------------------ */
/* 
 * reads : p_1123->g_23 p_1123->g_15 p_1123->g_149 p_1123->g_129 p_1123->g_16 p_1123->g_comm_values p_1123->g_196 p_1123->g_272 p_1123->g_110 p_1123->l_comm_values p_1123->g_244 p_1123->g_342 p_1123->g_327 p_1123->g_351 p_1123->g_338 p_1123->g_32 p_1123->g_339 p_1123->g_365 p_1123->g_334 p_1123->g_305 p_1123->g_404 p_1123->g_127 p_1123->g_34 p_1123->g_554 p_1123->g_328 p_1123->g_548 p_1123->g_572
 * writes: p_1123->g_23 p_1123->g_149 p_1123->g_129 p_1123->g_110 p_1123->g_168.f1 p_1123->g_196 p_1123->g_305 p_1123->g_342 p_1123->g_276.f1 p_1123->g_334 p_1123->g_371 p_1123->g_339 p_1123->g_383 p_1123->g_402 p_1123->g_404 p_1123->g_166.f1 p_1123->g_414 p_1123->g_272 p_1123->g_365 p_1123->g_572 p_1123->g_163.f1
 */
int32_t * func_130(int8_t  p_131, int8_t  p_132, struct S2 * p_1123)
{ /* block id: 77 */
    union U1 *l_162[7][3] = {{&p_1123->g_167,&p_1123->g_165[6][0],&p_1123->g_171},{&p_1123->g_167,&p_1123->g_165[6][0],&p_1123->g_171},{&p_1123->g_167,&p_1123->g_165[6][0],&p_1123->g_171},{&p_1123->g_167,&p_1123->g_165[6][0],&p_1123->g_171},{&p_1123->g_167,&p_1123->g_165[6][0],&p_1123->g_171},{&p_1123->g_167,&p_1123->g_165[6][0],&p_1123->g_171},{&p_1123->g_167,&p_1123->g_165[6][0],&p_1123->g_171}};
    union U1 **l_161 = &l_162[5][2];
    int32_t l_173[8][10][2] = {{{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL}},{{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL}},{{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL}},{{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL}},{{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL}},{{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL}},{{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL}},{{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL},{1L,0x653FF11AL}}};
    int8_t l_570[7][6] = {{0x24L,0x3CL,(-9L),0x3CL,0x24L,0x24L},{0x24L,0x3CL,(-9L),0x3CL,0x24L,0x24L},{0x24L,0x3CL,(-9L),0x3CL,0x24L,0x24L},{0x24L,0x3CL,(-9L),0x3CL,0x24L,0x24L},{0x24L,0x3CL,(-9L),0x3CL,0x24L,0x24L},{0x24L,0x3CL,(-9L),0x3CL,0x24L,0x24L},{0x24L,0x3CL,(-9L),0x3CL,0x24L,0x24L}};
    VECTOR(uint16_t, 2) l_579 = (VECTOR(uint16_t, 2))(7UL, 65535UL);
    VECTOR(int8_t, 2) l_587 = (VECTOR(int8_t, 2))(2L, 0L);
    int i, j, k;
    for (p_132 = (-13); (p_132 <= (-11)); p_132 = safe_add_func_int64_t_s_s(p_132, 9))
    { /* block id: 80 */
        uint8_t *l_137 = &p_1123->g_23[2][1];
        int32_t l_142[1][9];
        VECTOR(int16_t, 16) l_147 = (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x070CL), 0x070CL), 0x070CL, 7L, 0x070CL, (VECTOR(int16_t, 2))(7L, 0x070CL), (VECTOR(int16_t, 2))(7L, 0x070CL), 7L, 0x070CL, 7L, 0x070CL);
        uint16_t *l_148 = &p_1123->g_149[5][3];
        int32_t *l_158 = &p_1123->g_129;
        int32_t *l_571 = &p_1123->g_572;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 9; j++)
                l_142[i][j] = (-1L);
        }
        (*l_571) ^= (((safe_mul_func_uint8_t_u_u(((*l_137)--), (((safe_rshift_func_int16_t_s_u(p_1123->g_15.y, 0)) | (((((l_142[0][1] , 1UL) ^ (!(safe_rshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_147.s7636)).x, 0x1362L)) , (-1L)), p_132)))) != ((*l_148)--)) || (func_152(p_1123->g_129, l_158, (safe_rshift_func_uint16_t_u_u(0x2A85L, 11)), l_161, l_173[2][1][1], p_1123) != p_1123->g_548.s1)) >= 0x09F4EBA3D9B48B55L)) != l_570[5][4]))) == p_132) ^ 0x4BEF9295L);
        for (p_1123->g_163.f1 = 0; (p_1123->g_163.f1 != 51); p_1123->g_163.f1 = safe_add_func_uint32_t_u_u(p_1123->g_163.f1, 2))
        { /* block id: 235 */
            VECTOR(uint16_t, 4) l_577 = (VECTOR(uint16_t, 4))(0xC8EEL, (VECTOR(uint16_t, 2))(0xC8EEL, 5UL), 5UL);
            int32_t *l_580 = &l_142[0][1];
            int32_t *l_581 = &l_173[2][1][1];
            int32_t *l_582 = &l_142[0][1];
            int32_t *l_583 = &p_1123->g_572;
            int32_t *l_584 = &p_1123->g_342;
            int32_t *l_585[7] = {&p_1123->g_342,&p_1123->g_342,&p_1123->g_342,&p_1123->g_342,&p_1123->g_342,&p_1123->g_342,&p_1123->g_342};
            int8_t l_586 = 0x1CL;
            uint64_t l_588 = 18446744073709551606UL;
            uint16_t l_591 = 65535UL;
            int32_t **l_594 = &l_585[0];
            int i;
            (*l_571) &= ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_577.xwzx)), ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(p_1123->g_578.xyyxxyxy)).even, ((VECTOR(uint16_t, 16))(l_579.yyyyxyyxxxxyyyyx)).sefed))))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0xB4CDL, 0x302AL)).xyxxxyyxyxyyyxxx)).lo))).s5, p_132)) && FAKE_DIVERGE(p_1123->local_0_offset, get_local_id(0), 10));
            l_588++;
            ++l_591;
            (*l_594) = func_211(l_148, ((*l_571) = p_1123->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1123->tid, 4))]), p_1123);
        }
    }
    return &p_1123->g_572;
}


/* ------------------------------------------ */
/* 
 * reads : p_1123->g_16 p_1123->g_comm_values p_1123->g_129 p_1123->g_196 p_1123->g_272 p_1123->g_110 p_1123->l_comm_values p_1123->g_244 p_1123->g_342 p_1123->g_276.f1 p_1123->g_362 p_1123->g_365 p_1123->g_338 p_1123->g_32 p_1123->g_339 p_1123->g_149 p_1123->g_327 p_1123->g_351 p_1123->g_404 p_1123->g_34 p_1123->g_414 p_1123->g_127 p_1123->g_334 p_1123->g_305 p_1123->g_166.f1 p_1123->g_554 p_1123->g_548 p_1123->g_328 p_1123->g_572
 * writes: p_1123->g_129 p_1123->g_110 p_1123->g_168.f1 p_1123->g_196 p_1123->g_305 p_1123->g_342 p_1123->g_276.f1 p_1123->g_334 p_1123->g_371 p_1123->g_339 p_1123->g_383 p_1123->g_402 p_1123->g_404 p_1123->g_166.f1 p_1123->g_414 p_1123->g_272 p_1123->g_365 p_1123->g_149 p_1123->g_572
 */
int32_t  func_152(int32_t  p_153, int32_t * p_154, uint32_t  p_155, union U1 ** p_156, uint32_t  p_157, struct S2 * p_1123)
{ /* block id: 83 */
    int32_t l_174[9] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    union U1 *l_191 = (void*)0;
    union U1 **l_190[6][1];
    uint16_t *l_399[6][8][5] = {{{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340}},{{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340}},{{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340}},{{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340}},{{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340}},{{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340},{&p_1123->g_149[9][1],&p_1123->g_149[5][3],&p_1123->g_149[5][3],&p_1123->g_340,&p_1123->g_340}}};
    int32_t l_400[6][9] = {{0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL},{0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL},{0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL},{0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL},{0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL},{0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL,0x428A198AL,0L,0x428A198AL}};
    int8_t *l_401 = (void*)0;
    uint64_t *l_403 = &p_1123->g_34[0];
    int16_t **l_559 = (void*)0;
    int16_t *l_561[10] = {(void*)0,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,(void*)0,(void*)0,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,(void*)0};
    int16_t **l_560 = &l_561[5];
    int16_t *l_563 = (void*)0;
    int16_t **l_562 = &l_563;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_190[i][j] = &l_191;
    }
    (*p_1123->g_554) = ((0x793BCEF1L < l_174[3]) , func_175(((0x6BABB07CFFEA45A3L > (safe_mod_func_int8_t_s_s((p_1123->g_402 = (FAKE_DIVERGE(p_1123->local_1_offset, get_local_id(1), 10) & (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((((((func_187(p_1123->g_16.z, l_190[0][0], p_1123) == (l_400[4][6] |= (((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(0x93L, 3)) & (+((VECTOR(int8_t, 16))((p_157 , (safe_add_func_uint64_t_u_u(((l_399[1][0][0] == l_399[1][6][0]) <= l_174[3]), p_1123->g_comm_values[p_1123->tid]))), l_174[8], (-3L), ((VECTOR(int8_t, 2))((-9L))), p_1123->g_16.z, ((VECTOR(int8_t, 8))(0L)), 1L, 0L)).s7)), p_1123->g_327)), p_153)) , p_157) , p_157))) != p_155) == p_155) != 0x1EB69956L) & 0x916E1C24L) > 0UL), p_1123->g_149[5][3])), GROUP_DIVERGE(2, 1))))), p_1123->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1123->tid, 4))]))) , l_403), p_1123->g_149[6][1], p_1123->g_365.w, p_153, (*p_156), p_1123));
    (*p_1123->g_554) &= (safe_add_func_int8_t_s_s((p_157 != ((safe_mul_func_uint8_t_u_u((*p_1123->g_338), FAKE_DIVERGE(p_1123->global_1_offset, get_global_id(1), 10))) | ((((*l_560) = l_399[3][6][2]) == ((*l_562) = &p_1123->g_334)) >= ((p_157 , (((((VECTOR(int8_t, 16))((-7L), 1L, (p_1123->g_548.s0 < (((p_155 >= ((((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(p_155, 0x6C68L)), 4)), p_1123->g_362.s0)) > 1L) && p_157) == p_153)) != p_155) || (-1L))), 0L, 0x26L, p_157, ((VECTOR(int8_t, 2))(0x73L)), ((VECTOR(int8_t, 8))(0x40L)))).sa > GROUP_DIVERGE(1, 1)) == p_1123->g_328) && l_174[3])) , l_400[4][6])))), p_153));
    return l_174[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1123->g_404 p_1123->g_34 p_1123->g_414 p_1123->g_339 p_1123->g_127 p_1123->g_338 p_1123->g_32 p_1123->g_334 p_1123->g_110 p_1123->g_305 p_1123->g_327 p_1123->g_166.f1 p_1123->g_351 p_1123->g_365
 * writes: p_1123->g_110 p_1123->g_404 p_1123->g_166.f1 p_1123->g_414 p_1123->g_402 p_1123->g_272 p_1123->g_365 p_1123->g_149 p_1123->g_342
 */
int32_t  func_175(uint64_t * p_176, int16_t  p_177, int32_t  p_178, int32_t  p_179, union U1 * p_180, struct S2 * p_1123)
{ /* block id: 147 */
    int32_t l_409 = (-9L);
    int32_t l_423 = 0x277FD89CL;
    int32_t *l_442 = (void*)0;
    uint32_t l_467 = 0x6D9FD05EL;
    int32_t l_510 = 0x46AC75C5L;
    int32_t l_513 = (-3L);
    int32_t l_515 = 0x62A438C0L;
    uint16_t l_517 = 9UL;
    int32_t l_523 = 0L;
    int32_t l_524 = 0x2B97CDD2L;
    int32_t l_525 = 0x0730B7E6L;
    int8_t l_526 = 1L;
    int32_t l_527[1][5] = {{0x7396FA38L,0x7396FA38L,0x7396FA38L,0x7396FA38L,0x7396FA38L}};
    int64_t *l_552 = (void*)0;
    int i, j;
    if (((VECTOR(int32_t, 4))(p_1123->g_404.s21e1)).x)
    { /* block id: 148 */
        VECTOR(int8_t, 4) l_415 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L));
        int32_t *l_419 = &p_1123->g_110;
        int32_t **l_418 = &l_419;
        int32_t *l_420[8][10] = {{&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_351,&p_1123->g_110},{&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_351,&p_1123->g_110},{&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_351,&p_1123->g_110},{&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_351,&p_1123->g_110},{&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_351,&p_1123->g_110},{&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_351,&p_1123->g_110},{&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_351,&p_1123->g_110},{&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_342,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_351,&p_1123->g_110}};
        int i, j;
        p_1123->g_110 = (safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))((l_409 | (safe_mod_func_int64_t_s_s((p_1123->g_34[0] || ((safe_mod_func_int32_t_s_s(((~0xD76C0A58755E7F5AL) || (p_1123->g_414 || 0x350FL)), ((((VECTOR(int8_t, 4))(l_415.zzyz)).y != 0x68L) && ((VECTOR(uint8_t, 4))(1UL, ((safe_mod_func_int16_t_s_s(((((((*l_418) = &p_179) != (void*)0) == p_1123->g_339) > 0x33FC1DA5L) != p_1123->g_127.z), p_177)) , 0xC4L), 0x2DL, 0x38L)).w))) , 0x1044L)), 0xD0FB312B20DAB1F3L))), 1UL, 0UL, 4294967288UL, 4294967286UL, 0xDFCE9A92L, 4294967294UL, 0x08909CEBL)), 0x90577FB7L, 0x55C45187L, 4294967295UL, ((VECTOR(uint32_t, 4))(4294967287UL)), 0UL)).s6 < 0x60D8071BL), (*p_1123->g_338))) >= p_1123->g_334), p_177));
        (**l_418) &= 0x67FAD097L;
        p_1123->g_404.s9 |= p_1123->g_305[1][5][3];
        (**l_418) = p_1123->g_327;
    }
    else
    { /* block id: 154 */
        uint16_t l_424 = 1UL;
        uint16_t *l_483[4] = {&p_1123->g_149[7][6],&p_1123->g_149[7][6],&p_1123->g_149[7][6],&p_1123->g_149[7][6]};
        uint16_t **l_482 = &l_483[0];
        int32_t l_506 = 1L;
        int32_t l_507 = (-1L);
        int32_t l_509 = (-8L);
        int32_t l_512 = 0x7E64E487L;
        int32_t l_514 = 0x683BCC39L;
        VECTOR(uint16_t, 8) l_535 = (VECTOR(uint16_t, 8))(0x2368L, (VECTOR(uint16_t, 4))(0x2368L, (VECTOR(uint16_t, 2))(0x2368L, 65535UL), 65535UL), 65535UL, 0x2368L, 65535UL);
        int i;
        l_424 &= (safe_add_func_int32_t_s_s(p_179, (l_423 = 0x20B801BAL)));
        for (p_1123->g_166.f1 = (-29); (p_1123->g_166.f1 != 21); p_1123->g_166.f1 = safe_add_func_uint16_t_u_u(p_1123->g_166.f1, 5))
        { /* block id: 159 */
            VECTOR(int32_t, 2) l_456 = (VECTOR(int32_t, 2))((-9L), 0x6E30C656L);
            VECTOR(int64_t, 4) l_462 = (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0x5A87557A66DFB4BFL), 0x5A87557A66DFB4BFL);
            int32_t l_466 = 0x6A3F10B3L;
            uint32_t l_468 = 0x04380744L;
            VECTOR(int32_t, 4) l_470 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L);
            int32_t *l_489 = &p_1123->g_342;
            VECTOR(int16_t, 2) l_502 = (VECTOR(int16_t, 2))(1L, 0x691AL);
            int64_t l_516[8] = {0x23F6CF749F89C0B8L,0x23F6CF749F89C0B8L,0x23F6CF749F89C0B8L,0x23F6CF749F89C0B8L,0x23F6CF749F89C0B8L,0x23F6CF749F89C0B8L,0x23F6CF749F89C0B8L,0x23F6CF749F89C0B8L};
            int64_t *l_542 = (void*)0;
            int32_t l_551[2][2][4] = {{{0x0DB368BFL,0x0DB368BFL,0x0DB368BFL,0x0DB368BFL},{0x0DB368BFL,0x0DB368BFL,0x0DB368BFL,0x0DB368BFL}},{{0x0DB368BFL,0x0DB368BFL,0x0DB368BFL,0x0DB368BFL},{0x0DB368BFL,0x0DB368BFL,0x0DB368BFL,0x0DB368BFL}}};
            int i, j, k;
            for (p_1123->g_414 = 0; (p_1123->g_414 <= 26); ++p_1123->g_414)
            { /* block id: 162 */
                int32_t *l_433 = (void*)0;
                for (p_178 = (-16); (p_178 >= (-24)); p_178 = safe_sub_func_uint16_t_u_u(p_178, 5))
                { /* block id: 165 */
                    if (l_424)
                        break;
                    if (p_177)
                        break;
                }
                for (p_1123->g_402 = 0; (p_1123->g_402 > 3); p_1123->g_402 = safe_add_func_uint64_t_u_u(p_1123->g_402, 2))
                { /* block id: 171 */
                    uint32_t *l_443 = &p_1123->g_444[0][5];
                    int16_t *l_445 = (void*)0;
                    int16_t *l_446 = (void*)0;
                    int16_t *l_447 = &p_1123->g_334;
                    VECTOR(uint16_t, 2) l_452 = (VECTOR(uint16_t, 2))(0UL, 2UL);
                    int8_t *l_461 = &p_1123->g_272;
                    uint16_t *l_465[7][7][5] = {{{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]}},{{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]}},{{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]}},{{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]}},{{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]}},{{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]}},{{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]},{(void*)0,&l_424,&p_1123->g_149[4][4],&p_1123->g_340,&p_1123->g_149[5][3]}}};
                    int32_t **l_469 = &l_433;
                    int i, j, k;
                    l_433 = func_211(&l_424, p_179, p_1123);
                    p_1123->g_110 |= (p_1123->g_351 || (((((VECTOR(uint64_t, 8))(18446744073709551611UL, (p_1123->g_404.sa != (((void*)0 == &p_180) & (safe_sub_func_int16_t_s_s(((*l_447) = (p_177 = (+((p_179 & (((void*)0 != &p_1123->g_34[1]) < (((((*l_443) &= (safe_rshift_func_uint8_t_u_u((((void*)0 != l_442) | p_1123->g_402), (*p_1123->g_338)))) == p_178) | 9L) || p_177))) != p_1123->g_305[1][1][6])))), p_1123->g_149[4][1])))), ((VECTOR(uint64_t, 2))(0x234AC285A3C821BCL)), 0xA40DDA1B7B4A9CCAL, ((VECTOR(uint64_t, 2))(0UL)), 0xA3C418B19E564814L)).s3 , 0x2B914E0A851D5CD1L) , l_409) > 1UL));
                    (*l_469) = ((safe_mod_func_int8_t_s_s(((&p_1123->g_129 != (((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(l_452.xxyxyyyxxyyyyyxx)).hi))).s4 , l_443)) < (((p_1123->g_149[5][3] = (((safe_unary_minus_func_uint8_t_u((((((((safe_mod_func_uint32_t_u_u((((~((VECTOR(int32_t, 16))(l_456.xxxxxxyyyyxyxxxy)).sa) , (safe_lshift_func_uint8_t_u_s((((p_1123->g_365.y ^= ((safe_div_func_uint64_t_u_u(p_1123->g_404.s5, l_409)) , ((*l_461) = (+p_179)))) | 1UL) | ((l_424 >= (+(l_466 = (((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_462.zxywwyyy)).s4410662506543233)).sd656))).x > (safe_add_func_uint16_t_u_u(0xE80FL, (!((((VECTOR(uint8_t, 8))((((*l_447) = (&p_1123->g_384 == (void*)0)) || l_456.y), (*p_1123->g_338), FAKE_DIVERGE(p_1123->local_2_offset, get_local_id(2), 10), ((VECTOR(uint8_t, 4))(251UL)), 0x10L)).s6 ^ (-2L)) , p_1123->g_327)))))))) == p_1123->g_127.y)), l_467))) , p_1123->g_351), l_468)) ^ 0x9B5DFC6C013B9357L) != (-3L)) , FAKE_DIVERGE(p_1123->group_1_offset, get_group_id(1), 10)) && (*p_176)) <= p_1123->g_351) == p_179))) || l_452.y) , p_1123->g_339)) != 0x74AAL) > 0x62L)), l_452.y)) , (void*)0);
                    if (((VECTOR(int32_t, 8))(l_470.xyxxxzyy)).s5)
                    { /* block id: 183 */
                        int16_t l_471 = 0L;
                        if (l_471)
                            break;
                        return l_424;
                    }
                    else
                    { /* block id: 186 */
                        uint16_t l_476 = 65528UL;
                        uint16_t **l_480 = &l_465[1][5][2];
                        uint16_t ***l_479 = &l_480;
                        uint16_t **l_481 = &l_465[1][6][1];
                        int64_t *l_488 = (void*)0;
                        (*l_469) = ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_467, 0x7FBFL, (((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_u(p_177, 8)) < 0L) , (l_476 < (p_1123->g_16.w = ((((p_1123->g_487 = (((safe_lshift_func_int8_t_s_s((((l_481 = ((*l_479) = &l_465[1][4][0])) != l_482) != 0L), (((VECTOR(int16_t, 8))(p_1123->g_486.s3d141852)).s6 & (!(p_179 && l_423))))) , 0x3A738F7327E58C0AL) && p_1123->g_365.w)) , 0x0A2CF343A750CE1FL) || (*p_176)) || p_177)))), p_177)) , p_178) | p_177), ((VECTOR(uint16_t, 4))(9UL)), 0UL)).lo)).w > 0x156BL) , &p_1123->g_351);
                    }
                }
            }
            (*l_489) = p_179;
            if ((atomic_inc(&p_1123->l_atomic_input[37]) == 8))
            { /* block id: 197 */
                int32_t *l_490 = (void*)0;
                int16_t l_491 = 8L;
                uint32_t l_492[5] = {4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL};
                union U1 l_494[10][7][3] = {{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}},{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}},{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}},{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}},{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}},{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}},{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}},{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}},{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}},{{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}},{{8UL},{8UL},{1UL}}}};
                union U1 *l_493 = &l_494[9][3][0];
                union U1 l_496 = {0x458EEDA52DB669FFL};/* VOLATILE GLOBAL l_496 */
                union U1 l_497 = {0xB6EF42609AA7195AL};/* VOLATILE GLOBAL l_497 */
                union U1 l_498[7][6] = {{{0xFB5BD1C8FAA22A23L},{0x092A583508E43EE5L},{0x5A64EAB486E3620EL},{0xBD122721DACD8556L},{0x5A64EAB486E3620EL},{0x092A583508E43EE5L}},{{0xFB5BD1C8FAA22A23L},{0x092A583508E43EE5L},{0x5A64EAB486E3620EL},{0xBD122721DACD8556L},{0x5A64EAB486E3620EL},{0x092A583508E43EE5L}},{{0xFB5BD1C8FAA22A23L},{0x092A583508E43EE5L},{0x5A64EAB486E3620EL},{0xBD122721DACD8556L},{0x5A64EAB486E3620EL},{0x092A583508E43EE5L}},{{0xFB5BD1C8FAA22A23L},{0x092A583508E43EE5L},{0x5A64EAB486E3620EL},{0xBD122721DACD8556L},{0x5A64EAB486E3620EL},{0x092A583508E43EE5L}},{{0xFB5BD1C8FAA22A23L},{0x092A583508E43EE5L},{0x5A64EAB486E3620EL},{0xBD122721DACD8556L},{0x5A64EAB486E3620EL},{0x092A583508E43EE5L}},{{0xFB5BD1C8FAA22A23L},{0x092A583508E43EE5L},{0x5A64EAB486E3620EL},{0xBD122721DACD8556L},{0x5A64EAB486E3620EL},{0x092A583508E43EE5L}},{{0xFB5BD1C8FAA22A23L},{0x092A583508E43EE5L},{0x5A64EAB486E3620EL},{0xBD122721DACD8556L},{0x5A64EAB486E3620EL},{0x092A583508E43EE5L}}};
                union U1 *l_495[10] = {&l_497,&l_498[3][0],&l_497,&l_497,&l_498[3][0],&l_497,&l_497,&l_498[3][0],&l_497,&l_497};
                uint64_t l_499 = 0xE7F8AC4A8C43F929L;
                int i, j, k;
                l_490 = (void*)0;
                l_495[1] = (l_491 , (l_492[0] , l_493));
                ++l_499;
                unsigned int result = 0;
                result += l_491;
                int l_492_i0;
                for (l_492_i0 = 0; l_492_i0 < 5; l_492_i0++) {
                    result += l_492[l_492_i0];
                }
                int l_494_i0, l_494_i1, l_494_i2;
                for (l_494_i0 = 0; l_494_i0 < 10; l_494_i0++) {
                    for (l_494_i1 = 0; l_494_i1 < 7; l_494_i1++) {
                        for (l_494_i2 = 0; l_494_i2 < 3; l_494_i2++) {
                            result += l_494[l_494_i0][l_494_i1][l_494_i2].f0;
                            result += l_494[l_494_i0][l_494_i1][l_494_i2].f1;
                        }
                    }
                }
                result += l_496.f0;
                result += l_496.f1;
                result += l_497.f0;
                result += l_497.f1;
                int l_498_i0, l_498_i1;
                for (l_498_i0 = 0; l_498_i0 < 7; l_498_i0++) {
                    for (l_498_i1 = 0; l_498_i1 < 6; l_498_i1++) {
                        result += l_498[l_498_i0][l_498_i1].f0;
                        result += l_498[l_498_i0][l_498_i1].f1;
                    }
                }
                result += l_499;
                atomic_add(&p_1123->l_special_values[37], result);
            }
            else
            { /* block id: 201 */
                (1 + 1);
            }
        }
    }
    return l_513;
}


/* ------------------------------------------ */
/* 
 * reads : p_1123->g_comm_values p_1123->g_129 p_1123->g_196 p_1123->g_272 p_1123->g_110 p_1123->l_comm_values p_1123->g_244 p_1123->g_16 p_1123->g_342 p_1123->g_276.f1 p_1123->g_362 p_1123->g_365 p_1123->g_338 p_1123->g_32 p_1123->g_339 p_1123->g_149 p_1123->g_327 p_1123->g_351
 * writes: p_1123->g_129 p_1123->g_110 p_1123->g_168.f1 p_1123->g_196 p_1123->g_305 p_1123->g_342 p_1123->g_276.f1 p_1123->g_334 p_1123->g_371 p_1123->g_339 p_1123->g_383
 */
uint8_t  func_187(uint32_t  p_188, union U1 ** p_189, struct S2 * p_1123)
{ /* block id: 84 */
    uint32_t l_216 = 4294967294UL;
    union U1 *l_273[9][6] = {{&p_1123->g_275,&p_1123->g_275,(void*)0,&p_1123->g_274,(void*)0,&p_1123->g_274},{&p_1123->g_275,&p_1123->g_275,(void*)0,&p_1123->g_274,(void*)0,&p_1123->g_274},{&p_1123->g_275,&p_1123->g_275,(void*)0,&p_1123->g_274,(void*)0,&p_1123->g_274},{&p_1123->g_275,&p_1123->g_275,(void*)0,&p_1123->g_274,(void*)0,&p_1123->g_274},{&p_1123->g_275,&p_1123->g_275,(void*)0,&p_1123->g_274,(void*)0,&p_1123->g_274},{&p_1123->g_275,&p_1123->g_275,(void*)0,&p_1123->g_274,(void*)0,&p_1123->g_274},{&p_1123->g_275,&p_1123->g_275,(void*)0,&p_1123->g_274,(void*)0,&p_1123->g_274},{&p_1123->g_275,&p_1123->g_275,(void*)0,&p_1123->g_274,(void*)0,&p_1123->g_274},{&p_1123->g_275,&p_1123->g_275,(void*)0,&p_1123->g_274,(void*)0,&p_1123->g_274}};
    uint32_t l_279[9];
    VECTOR(uint32_t, 4) l_318 = (VECTOR(uint32_t, 4))(0x74DA8DAFL, (VECTOR(uint32_t, 2))(0x74DA8DAFL, 0x044B6E03L), 0x044B6E03L);
    uint8_t *l_329 = &p_1123->g_32;
    int32_t l_350 = 0x3DFE6C16L;
    int32_t l_352[7][9][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
    VECTOR(int32_t, 2) l_364 = (VECTOR(int32_t, 2))(0L, (-1L));
    uint16_t *l_373 = (void*)0;
    uint16_t **l_374 = (void*)0;
    uint16_t **l_375 = &l_373;
    uint16_t *l_377[10] = {(void*)0,&p_1123->g_371,(void*)0,(void*)0,&p_1123->g_371,(void*)0,(void*)0,&p_1123->g_371,(void*)0,(void*)0};
    uint16_t **l_376 = &l_377[4];
    union U1 ***l_382[1][3];
    int32_t *l_390 = &p_1123->g_110;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_279[i] = 0x43171BACL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_382[i][j] = (void*)0;
    }
    if ((safe_mod_func_int16_t_s_s(p_1123->g_comm_values[p_1123->tid], GROUP_DIVERGE(1, 1))))
    { /* block id: 85 */
        int32_t l_224 = 6L;
        uint64_t *l_225 = &p_1123->g_34[1];
        uint16_t l_319 = 0x95F3L;
        int16_t *l_333[5][8][5] = {{{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334}},{{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334}},{{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334}},{{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334}},{{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334},{&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334,&p_1123->g_334}}};
        int32_t l_353 = (-5L);
        uint32_t l_354[6][5] = {{0x99591346L,0x99591346L,0x34898C60L,0x1FFFA7BAL,0xE728C654L},{0x99591346L,0x99591346L,0x34898C60L,0x1FFFA7BAL,0xE728C654L},{0x99591346L,0x99591346L,0x34898C60L,0x1FFFA7BAL,0xE728C654L},{0x99591346L,0x99591346L,0x34898C60L,0x1FFFA7BAL,0xE728C654L},{0x99591346L,0x99591346L,0x34898C60L,0x1FFFA7BAL,0xE728C654L},{0x99591346L,0x99591346L,0x34898C60L,0x1FFFA7BAL,0xE728C654L}};
        int i, j, k;
        for (p_1123->g_129 = (-10); (p_1123->g_129 < 21); p_1123->g_129 = safe_add_func_int8_t_s_s(p_1123->g_129, 5))
        { /* block id: 88 */
            uint32_t l_210 = 0x97D38C8DL;
            int32_t *l_219 = (void*)0;
            int32_t *l_220 = &p_1123->g_110;
            VECTOR(int64_t, 4) l_321 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L);
            uint8_t *l_326 = &p_1123->g_327;
            uint8_t **l_335 = (void*)0;
            uint8_t *l_337 = &p_1123->g_32;
            uint8_t **l_336[5][10][5] = {{{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337}},{{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337}},{{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337}},{{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337}},{{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337},{(void*)0,&l_337,&l_326,&l_326,&l_337}}};
            int32_t *l_341 = &p_1123->g_342;
            int i, j, k;
            l_279[5] = ((*l_220) = ((VECTOR(int32_t, 8))(0x73106F39L, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))((p_1123->g_196 == ((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (safe_mul_func_uint16_t_u_u(func_204(l_210, l_210, func_211(&p_1123->g_149[0][5], (((*l_220) = ((safe_add_func_uint16_t_u_u((l_216 < (-1L)), p_1123->g_127.w)) || (safe_mod_func_uint32_t_u_u((0x8EE746F835AF2584L ^ (&p_1123->g_149[5][1] == (void*)0)), p_1123->g_149[5][3])))) && 0x727456FEL), p_1123), l_224, l_225, p_1123), l_216)))), p_1123->g_34[1])) , l_273[8][4])), l_224, 0x18A5BDFAL, (-1L))).wzwwyzwwywwxyxwx, ((VECTOR(int32_t, 16))(6L)), ((VECTOR(int32_t, 16))(0x0658CB6DL))))).s31d1)), (int32_t)l_224))), 0x195A4DF9L, (-1L), (-1L))).s3);
            for (p_1123->g_168.f1 = (-21); (p_1123->g_168.f1 != 9); p_1123->g_168.f1++)
            { /* block id: 111 */
                volatile union U1 **l_282 = &p_1123->g_196;
                uint32_t *l_289 = &p_1123->g_170.f1;
                uint32_t *l_290 = &p_1123->g_275.f1;
                uint32_t *l_291 = &p_1123->g_275.f1;
                uint32_t *l_292 = &p_1123->g_167.f1;
                uint32_t *l_293[2][10] = {{&l_279[5],&l_279[5],&l_216,&l_279[5],&l_279[5],&l_279[5],&l_279[5],&l_216,&l_279[5],&l_279[5]},{&l_279[5],&l_279[5],&l_216,&l_279[5],&l_279[5],&l_279[5],&l_279[5],&l_216,&l_279[5],&l_279[5]}};
                int16_t *l_304 = (void*)0;
                VECTOR(int8_t, 16) l_314 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 3L), 3L), 3L, 1L, 3L, (VECTOR(int8_t, 2))(1L, 3L), (VECTOR(int8_t, 2))(1L, 3L), 1L, 3L, 1L, 3L);
                int8_t *l_315 = (void*)0;
                int8_t *l_316 = (void*)0;
                int8_t *l_317 = (void*)0;
                int32_t *l_320 = &l_224;
                int i, j;
                (*l_282) = p_1123->g_196;
                (*l_320) = (((safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((p_188--) , (safe_add_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((p_1123->g_305[0][0][6] = (-1L)), p_1123->g_272)) >= GROUP_DIVERGE(0, 1)), 3)) || (0x7B8752DFL == ((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((p_188 , p_188), ((safe_rshift_func_uint8_t_u_s((((*l_220) ^= p_188) , (((VECTOR(int8_t, 4))(p_1123->g_149[5][5], (p_1123->g_127.w = ((VECTOR(int8_t, 8))(l_314.s960768d2)).s2), 0L, 0x14L)).z < (6L ^ l_314.s6))), 4)) ^ p_1123->g_272))), p_1123->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1123->tid, 4))])), 6)) | (-2L)))) <= 0UL) > 0x47L), p_1123->g_244))), l_224)), p_1123->g_16.y)) && l_318.x), l_319)) , l_279[5]) == 0x301BE678L);
            }
            (*l_341) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-5L), 1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-2L), 0L)))).hi, ((VECTOR(int32_t, 2))(0x2B009086L, 0L)), (((((VECTOR(int64_t, 16))(l_321.xzzywxwwxwzzywyz)).sa & ((+(safe_sub_func_uint16_t_u_u(((((safe_mod_func_int64_t_s_s(((((void*)0 != &p_1123->g_129) && (1UL & (p_1123->g_328 |= ((*l_326) = p_1123->g_272)))) >= (l_329 != (p_1123->g_338 = ((safe_add_func_int32_t_s_s(((p_1123->g_332 == &p_188) | ((void*)0 != l_333[4][5][2])), 0x04877228L)) , &p_1123->g_32)))), p_1123->g_334)) & (*l_220)) && l_318.w) != (*l_220)), l_224))) <= (*l_220))) && p_1123->g_340) , 0x26FB4814L), 0x0EB8E210L, 6L)).s2;
        }
        for (p_1123->g_276.f1 = 0; (p_1123->g_276.f1 == 8); p_1123->g_276.f1 = safe_add_func_uint8_t_u_u(p_1123->g_276.f1, 8))
        { /* block id: 126 */
            int32_t *l_345 = &p_1123->g_110;
            int32_t *l_346 = &p_1123->g_342;
            int32_t *l_347 = &l_224;
            int32_t *l_348 = &p_1123->g_342;
            int32_t *l_349[2][7] = {{&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110},{&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110,&p_1123->g_110}};
            VECTOR(uint16_t, 16) l_361 = (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), 0UL), 0UL, 65534UL, 0UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), (VECTOR(uint16_t, 2))(65534UL, 0UL), 65534UL, 0UL, 65534UL, 0UL);
            uint16_t l_370 = 0UL;
            uint8_t *l_372 = (void*)0;
            int i, j;
            (*l_345) = p_188;
            ++l_354[4][2];
            (*l_346) = p_188;
            (*l_348) = ((p_1123->g_339 = (0xAFL & (2L && (1L > ((p_1123->g_371 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x255AL, 0x68F0L)).hi, (p_1123->g_334 = (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(l_361.sc7)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_1123->g_362.s26988215)).odd)).wyxwxzwwwzzzwzzz)).s3b41)).even, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(0x5AL, (l_353 ^= ((safe_unary_minus_func_int8_t_s(((GROUP_DIVERGE(2, 1) == p_188) && (l_364.y > ((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(p_1123->g_365.yxzwyzzz)).odd))).x)))) & (((+(safe_mul_func_uint16_t_u_u(0x1E62L, (safe_rshift_func_uint8_t_u_s((*p_1123->g_338), 3))))) , &p_1123->g_327) != (void*)0))), l_318.y, 251UL, FAKE_DIVERGE(p_1123->group_0_offset, get_group_id(0), 10), 1UL, 0UL, 255UL)), ((VECTOR(uint8_t, 8))(8UL))))), l_224, 0x3AL, 0x91L, l_370, ((VECTOR(uint8_t, 2))(0x63L)), 250UL, 1UL)).s67))), 6UL, 0xB566L)).odd))), 65535UL, 0UL)).yxzzxwzy, ((VECTOR(uint16_t, 8))(65532UL))))).s5777637055240023)))).se && l_353)))), (*l_346))) | GROUP_DIVERGE(0, 1))) <= 0x3D7EL))))) >= l_350);
        }
    }
    else
    { /* block id: 136 */
        return l_279[5];
    }
    l_390 = func_211(((*l_376) = ((*l_375) = l_373)), (((safe_mod_func_uint8_t_u_u((((p_188 , p_188) && (GROUP_DIVERGE(1, 1) || ((p_1123->g_383 = (p_189 = (p_1123->g_149[5][3] , p_189))) == &p_1123->g_384))) >= ((-7L) ^ (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(0x55EDL, p_1123->g_327)), p_1123->g_351)))), (*p_1123->g_338))) & 1UL) >= p_1123->g_339), p_1123);
    return (*p_1123->g_338);
}


/* ------------------------------------------ */
/* 
 * reads : p_1123->g_34 p_1123->g_comm_values p_1123->g_110 p_1123->g_16
 * writes: p_1123->g_244 p_1123->g_110 p_1123->g_127 p_1123->g_272
 */
uint16_t  func_204(int64_t  p_205, int16_t  p_206, int32_t * p_207, uint16_t  p_208, uint64_t * p_209, struct S2 * p_1123)
{ /* block id: 93 */
    union U1 *l_229 = (void*)0;
    union U1 **l_228 = &l_229;
    VECTOR(int32_t, 16) l_230 = (VECTOR(int32_t, 16))(0x647DD8A5L, (VECTOR(int32_t, 4))(0x647DD8A5L, (VECTOR(int32_t, 2))(0x647DD8A5L, 0x3ADB8ECAL), 0x3ADB8ECAL), 0x3ADB8ECAL, 0x647DD8A5L, 0x3ADB8ECAL, (VECTOR(int32_t, 2))(0x647DD8A5L, 0x3ADB8ECAL), (VECTOR(int32_t, 2))(0x647DD8A5L, 0x3ADB8ECAL), 0x647DD8A5L, 0x3ADB8ECAL, 0x647DD8A5L, 0x3ADB8ECAL);
    VECTOR(int32_t, 4) l_231 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
    uint8_t *l_232 = &p_1123->g_32;
    int32_t l_241 = 0x0F23623DL;
    int64_t *l_242 = (void*)0;
    int64_t *l_243 = &p_1123->g_244;
    int32_t *l_245 = &p_1123->g_110;
    int i;
    (*l_245) = (((l_228 != &p_1123->g_196) < ((void*)0 == p_209)) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_230.sda2df380)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_231.wzzzxxww)).odd)), (l_232 == (((*l_243) = (safe_div_func_int64_t_s_s(p_1123->g_34[1], (p_205 || (0L | (safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_208, p_206)), 1)), l_241))))))) , (void*)0)), 1L, 0L, 0x0791E5CBL)).s4);
    (*l_245) = (safe_add_func_uint16_t_u_u((((&l_229 != (p_1123->g_comm_values[p_1123->tid] , &p_1123->g_196)) > ((*l_245) > ((VECTOR(int16_t, 2))(1L, 1L)).even)) || 8UL), ((((9L || (safe_mod_func_int8_t_s_s((((void*)0 == l_242) > (&p_1123->g_129 == p_207)), p_1123->g_16.z))) && 0x6DL) ^ p_206) , 65529UL)));
    for (p_205 = (-27); (p_205 == 3); p_205 = safe_add_func_int64_t_s_s(p_205, 9))
    { /* block id: 99 */
        int32_t *l_262 = &p_1123->g_129;
        int32_t l_267 = 0x69669FE5L;
        union U1 *l_268 = &p_1123->g_269;
        int8_t *l_270 = (void*)0;
        int8_t *l_271 = &p_1123->g_272;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1123->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[(safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((*l_245), (safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((&p_1123->g_196 == &p_1123->g_196), (safe_rshift_func_int8_t_s_s(((*l_271) = (safe_rshift_func_int8_t_s_s(((p_1123->g_127.y = (((l_262 != ((safe_mod_func_uint8_t_u_u(0x12L, (safe_add_func_uint64_t_u_u(1UL, ((l_267 , l_268) == (p_1123->g_comm_values[p_1123->tid] , l_268)))))) , p_207)) , (*p_209)) && p_1123->g_16.z)) | p_1123->g_16.w), 6))), (*l_245))))), (*p_209))))), 10))][(safe_mod_func_uint32_t_u_u(p_1123->tid, 4))]));
    }
    return p_208;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_211(uint16_t * p_212, int64_t  p_213, struct S2 * p_1123)
{ /* block id: 90 */
    uint8_t *l_221 = &p_1123->g_32;
    uint32_t l_222 = 0x2E41012EL;
    int32_t *l_223 = (void*)0;
    l_222 = (l_221 == &p_1123->g_32);
    return l_223;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_comm_values[i] = 1;
    struct S2 c_1124;
    struct S2* p_1123 = &c_1124;
    struct S2 c_1125 = {
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-6L)), (-6L)), // p_1123->g_15
        (VECTOR(int64_t, 4))(0x773196E86FF18EE8L, (VECTOR(int64_t, 2))(0x773196E86FF18EE8L, 0x4415051ACAE7BF19L), 0x4415051ACAE7BF19L), // p_1123->g_16
        (VECTOR(int64_t, 8))(0x5857289C089CED66L, (VECTOR(int64_t, 4))(0x5857289C089CED66L, (VECTOR(int64_t, 2))(0x5857289C089CED66L, 0x5C64F6B903CFCB8FL), 0x5C64F6B903CFCB8FL), 0x5C64F6B903CFCB8FL, 0x5857289C089CED66L, 0x5C64F6B903CFCB8FL), // p_1123->g_17
        {{0xD9L,0x69L,0x72L},{0xD9L,0x69L,0x72L},{0xD9L,0x69L,0x72L},{0xD9L,0x69L,0x72L},{0xD9L,0x69L,0x72L},{0xD9L,0x69L,0x72L},{0xD9L,0x69L,0x72L}}, // p_1123->g_23
        0x50L, // p_1123->g_32
        {&p_1123->g_32}, // p_1123->g_31
        {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}, // p_1123->g_34
        (-8L), // p_1123->g_110
        (VECTOR(int8_t, 4))(0x09L, (VECTOR(int8_t, 2))(0x09L, 0x5EL), 0x5EL), // p_1123->g_127
        (-1L), // p_1123->g_129
        {{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL},{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL},{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL},{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL},{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL},{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL},{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL},{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL},{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL},{0x387AL,0x387AL,0xE303L,6UL,65532UL,6UL,0xE303L,0x387AL}}, // p_1123->g_149
        {0x79FDBB3153F037E6L}, // p_1123->g_163
        {0UL}, // p_1123->g_164
        {{{4UL},{4UL},{0xCB0568AF3DB6E5CAL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{0xCB0568AF3DB6E5CAL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{0xCB0568AF3DB6E5CAL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{0xCB0568AF3DB6E5CAL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{0xCB0568AF3DB6E5CAL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{0xCB0568AF3DB6E5CAL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{0xCB0568AF3DB6E5CAL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{0xCB0568AF3DB6E5CAL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{0xCB0568AF3DB6E5CAL},{4UL},{4UL},{4UL}}}, // p_1123->g_165
        {0x19CEA36B5B5DF624L}, // p_1123->g_166
        {0UL}, // p_1123->g_167
        {1UL}, // p_1123->g_168
        {18446744073709551607UL}, // p_1123->g_169
        {0UL}, // p_1123->g_170
        {0xB806CA934EAC919AL}, // p_1123->g_171
        {0x33249D86C3250C9FL}, // p_1123->g_172
        {1UL}, // p_1123->g_197
        &p_1123->g_197, // p_1123->g_196
        0x56D9DE8EE48BEC9AL, // p_1123->g_244
        {0UL}, // p_1123->g_269
        (-1L), // p_1123->g_272
        {0xE6B133B268F7168BL}, // p_1123->g_274
        {18446744073709551609UL}, // p_1123->g_275
        {7UL}, // p_1123->g_276
        {4UL}, // p_1123->g_277
        {0xB5015410983F195CL}, // p_1123->g_278
        {{{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)}},{{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)},{(-6L),1L,2L,0x4321AE1DL,2L,1L,(-6L)}}}, // p_1123->g_305
        255UL, // p_1123->g_327
        (-7L), // p_1123->g_328
        (void*)0, // p_1123->g_332
        0L, // p_1123->g_334
        0x41L, // p_1123->g_339
        &p_1123->g_339, // p_1123->g_338
        0UL, // p_1123->g_340
        (-1L), // p_1123->g_342
        0x11497F7CL, // p_1123->g_351
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL), // p_1123->g_362
        (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x26L), 0x26L), // p_1123->g_365
        1UL, // p_1123->g_371
        {0UL}, // p_1123->g_385
        &p_1123->g_385, // p_1123->g_384
        &p_1123->g_384, // p_1123->g_383
        0UL, // p_1123->g_402
        (VECTOR(int32_t, 16))(0x36D1486BL, (VECTOR(int32_t, 4))(0x36D1486BL, (VECTOR(int32_t, 2))(0x36D1486BL, 0L), 0L), 0L, 0x36D1486BL, 0L, (VECTOR(int32_t, 2))(0x36D1486BL, 0L), (VECTOR(int32_t, 2))(0x36D1486BL, 0L), 0x36D1486BL, 0L, 0x36D1486BL, 0L), // p_1123->g_404
        1UL, // p_1123->g_414
        {{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL}}, // p_1123->g_444
        (VECTOR(int16_t, 16))(0x0721L, (VECTOR(int16_t, 4))(0x0721L, (VECTOR(int16_t, 2))(0x0721L, (-1L)), (-1L)), (-1L), 0x0721L, (-1L), (VECTOR(int16_t, 2))(0x0721L, (-1L)), (VECTOR(int16_t, 2))(0x0721L, (-1L)), 0x0721L, (-1L), 0x0721L, (-1L)), // p_1123->g_486
        0x19L, // p_1123->g_487
        (VECTOR(int64_t, 2))(0x04ED5EE4F31DF217L, 0L), // p_1123->g_543
        (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x81L), 0x81L), 0x81L, 3UL, 0x81L), // p_1123->g_546
        (VECTOR(uint8_t, 8))(0x66L, (VECTOR(uint8_t, 4))(0x66L, (VECTOR(uint8_t, 2))(0x66L, 6UL), 6UL), 6UL, 0x66L, 6UL), // p_1123->g_548
        &p_1123->g_110, // p_1123->g_554
        5L, // p_1123->g_572
        (VECTOR(uint16_t, 2))(65534UL, 0xF9F7L), // p_1123->g_578
        &p_1123->g_149[5][3], // p_1123->g_739
        (VECTOR(uint64_t, 2))(0x4FFA538F85E357E7L, 18446744073709551615UL), // p_1123->g_746
        {-1L}, // p_1123->g_755
        (VECTOR(uint32_t, 16))(0x65327B65L, (VECTOR(uint32_t, 4))(0x65327B65L, (VECTOR(uint32_t, 2))(0x65327B65L, 0UL), 0UL), 0UL, 0x65327B65L, 0UL, (VECTOR(uint32_t, 2))(0x65327B65L, 0UL), (VECTOR(uint32_t, 2))(0x65327B65L, 0UL), 0x65327B65L, 0UL, 0x65327B65L, 0UL), // p_1123->g_779
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967293UL), 4294967293UL), 4294967293UL, 1UL, 4294967293UL), // p_1123->g_780
        (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x9CD5AB87D2908831L), 0x9CD5AB87D2908831L), 0x9CD5AB87D2908831L, 18446744073709551608UL, 0x9CD5AB87D2908831L), // p_1123->g_819
        {0x63E6C0D467D39FB5L}, // p_1123->g_855
        (VECTOR(int64_t, 8))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 6L), 6L), 6L, (-10L), 6L), // p_1123->g_885
        (VECTOR(int16_t, 4))(0x195BL, (VECTOR(int16_t, 2))(0x195BL, 6L), 6L), // p_1123->g_916
        (void*)0, // p_1123->g_952
        (VECTOR(int64_t, 16))(0x5940EC7B8C313DB7L, (VECTOR(int64_t, 4))(0x5940EC7B8C313DB7L, (VECTOR(int64_t, 2))(0x5940EC7B8C313DB7L, (-1L)), (-1L)), (-1L), 0x5940EC7B8C313DB7L, (-1L), (VECTOR(int64_t, 2))(0x5940EC7B8C313DB7L, (-1L)), (VECTOR(int64_t, 2))(0x5940EC7B8C313DB7L, (-1L)), 0x5940EC7B8C313DB7L, (-1L), 0x5940EC7B8C313DB7L, (-1L)), // p_1123->g_964
        65535UL, // p_1123->g_986
        {1L}, // p_1123->g_1008
        &p_1123->g_554, // p_1123->g_1015
        (VECTOR(uint8_t, 4))(0x83L, (VECTOR(uint8_t, 2))(0x83L, 0x4BL), 0x4BL), // p_1123->g_1024
        {9UL}, // p_1123->g_1041
        (void*)0, // p_1123->g_1063
        &p_1123->g_1063, // p_1123->g_1062
        {0UL}, // p_1123->g_1080
        {0x3B1DACC037B56FF9L}, // p_1123->g_1081
        {0xC0240005EF1E3A0AL}, // p_1123->g_1082
        {{0xF2C791FA42D923B4L},{0xF2C791FA42D923B4L},{0xF2C791FA42D923B4L},{0xF2C791FA42D923B4L},{0xF2C791FA42D923B4L}}, // p_1123->g_1083
        {18446744073709551615UL}, // p_1123->g_1084
        {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}, // p_1123->g_1085
        {0xB4C3E6E583EC1DC6L}, // p_1123->g_1086
        {0xC3F89360702560A1L}, // p_1123->g_1087
        {2UL}, // p_1123->g_1088
        {0x54501A1489241E27L}, // p_1123->g_1089
        {18446744073709551615UL}, // p_1123->g_1090
        {18446744073709551614UL}, // p_1123->g_1091
        {0xDF545137F56E34DDL}, // p_1123->g_1093
        {18446744073709551608UL}, // p_1123->g_1096
        &p_1123->g_1096, // p_1123->g_1095
        {0x034677912CC77E96L}, // p_1123->g_1108
        (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, 0x20L), 0x20L), // p_1123->g_1109
        3L, // p_1123->g_1118
        0, // p_1123->v_collective
        sequence_input[get_global_id(0)], // p_1123->global_0_offset
        sequence_input[get_global_id(1)], // p_1123->global_1_offset
        sequence_input[get_global_id(2)], // p_1123->global_2_offset
        sequence_input[get_local_id(0)], // p_1123->local_0_offset
        sequence_input[get_local_id(1)], // p_1123->local_1_offset
        sequence_input[get_local_id(2)], // p_1123->local_2_offset
        sequence_input[get_group_id(0)], // p_1123->group_0_offset
        sequence_input[get_group_id(1)], // p_1123->group_1_offset
        sequence_input[get_group_id(2)], // p_1123->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[0][get_linear_local_id()])), // p_1123->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1124 = c_1125;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1123);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1123->g_15.x, "p_1123->g_15.x", print_hash_value);
    transparent_crc(p_1123->g_15.y, "p_1123->g_15.y", print_hash_value);
    transparent_crc(p_1123->g_15.z, "p_1123->g_15.z", print_hash_value);
    transparent_crc(p_1123->g_15.w, "p_1123->g_15.w", print_hash_value);
    transparent_crc(p_1123->g_16.x, "p_1123->g_16.x", print_hash_value);
    transparent_crc(p_1123->g_16.y, "p_1123->g_16.y", print_hash_value);
    transparent_crc(p_1123->g_16.z, "p_1123->g_16.z", print_hash_value);
    transparent_crc(p_1123->g_16.w, "p_1123->g_16.w", print_hash_value);
    transparent_crc(p_1123->g_17.s0, "p_1123->g_17.s0", print_hash_value);
    transparent_crc(p_1123->g_17.s1, "p_1123->g_17.s1", print_hash_value);
    transparent_crc(p_1123->g_17.s2, "p_1123->g_17.s2", print_hash_value);
    transparent_crc(p_1123->g_17.s3, "p_1123->g_17.s3", print_hash_value);
    transparent_crc(p_1123->g_17.s4, "p_1123->g_17.s4", print_hash_value);
    transparent_crc(p_1123->g_17.s5, "p_1123->g_17.s5", print_hash_value);
    transparent_crc(p_1123->g_17.s6, "p_1123->g_17.s6", print_hash_value);
    transparent_crc(p_1123->g_17.s7, "p_1123->g_17.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1123->g_23[i][j], "p_1123->g_23[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1123->g_32, "p_1123->g_32", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1123->g_34[i], "p_1123->g_34[i]", print_hash_value);

    }
    transparent_crc(p_1123->g_110, "p_1123->g_110", print_hash_value);
    transparent_crc(p_1123->g_127.x, "p_1123->g_127.x", print_hash_value);
    transparent_crc(p_1123->g_127.y, "p_1123->g_127.y", print_hash_value);
    transparent_crc(p_1123->g_127.z, "p_1123->g_127.z", print_hash_value);
    transparent_crc(p_1123->g_127.w, "p_1123->g_127.w", print_hash_value);
    transparent_crc(p_1123->g_129, "p_1123->g_129", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1123->g_149[i][j], "p_1123->g_149[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1123->g_163.f0, "p_1123->g_163.f0", print_hash_value);
    transparent_crc(p_1123->g_164.f0, "p_1123->g_164.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1123->g_165[i][j].f0, "p_1123->g_165[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1123->g_166.f0, "p_1123->g_166.f0", print_hash_value);
    transparent_crc(p_1123->g_167.f0, "p_1123->g_167.f0", print_hash_value);
    transparent_crc(p_1123->g_168.f0, "p_1123->g_168.f0", print_hash_value);
    transparent_crc(p_1123->g_169.f0, "p_1123->g_169.f0", print_hash_value);
    transparent_crc(p_1123->g_170.f0, "p_1123->g_170.f0", print_hash_value);
    transparent_crc(p_1123->g_171.f0, "p_1123->g_171.f0", print_hash_value);
    transparent_crc(p_1123->g_172.f0, "p_1123->g_172.f0", print_hash_value);
    transparent_crc(p_1123->g_197.f0, "p_1123->g_197.f0", print_hash_value);
    transparent_crc(p_1123->g_244, "p_1123->g_244", print_hash_value);
    transparent_crc(p_1123->g_269.f0, "p_1123->g_269.f0", print_hash_value);
    transparent_crc(p_1123->g_272, "p_1123->g_272", print_hash_value);
    transparent_crc(p_1123->g_274.f0, "p_1123->g_274.f0", print_hash_value);
    transparent_crc(p_1123->g_275.f0, "p_1123->g_275.f0", print_hash_value);
    transparent_crc(p_1123->g_276.f0, "p_1123->g_276.f0", print_hash_value);
    transparent_crc(p_1123->g_277.f0, "p_1123->g_277.f0", print_hash_value);
    transparent_crc(p_1123->g_278.f0, "p_1123->g_278.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1123->g_305[i][j][k], "p_1123->g_305[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1123->g_327, "p_1123->g_327", print_hash_value);
    transparent_crc(p_1123->g_328, "p_1123->g_328", print_hash_value);
    transparent_crc(p_1123->g_334, "p_1123->g_334", print_hash_value);
    transparent_crc(p_1123->g_339, "p_1123->g_339", print_hash_value);
    transparent_crc(p_1123->g_340, "p_1123->g_340", print_hash_value);
    transparent_crc(p_1123->g_342, "p_1123->g_342", print_hash_value);
    transparent_crc(p_1123->g_351, "p_1123->g_351", print_hash_value);
    transparent_crc(p_1123->g_362.s0, "p_1123->g_362.s0", print_hash_value);
    transparent_crc(p_1123->g_362.s1, "p_1123->g_362.s1", print_hash_value);
    transparent_crc(p_1123->g_362.s2, "p_1123->g_362.s2", print_hash_value);
    transparent_crc(p_1123->g_362.s3, "p_1123->g_362.s3", print_hash_value);
    transparent_crc(p_1123->g_362.s4, "p_1123->g_362.s4", print_hash_value);
    transparent_crc(p_1123->g_362.s5, "p_1123->g_362.s5", print_hash_value);
    transparent_crc(p_1123->g_362.s6, "p_1123->g_362.s6", print_hash_value);
    transparent_crc(p_1123->g_362.s7, "p_1123->g_362.s7", print_hash_value);
    transparent_crc(p_1123->g_362.s8, "p_1123->g_362.s8", print_hash_value);
    transparent_crc(p_1123->g_362.s9, "p_1123->g_362.s9", print_hash_value);
    transparent_crc(p_1123->g_362.sa, "p_1123->g_362.sa", print_hash_value);
    transparent_crc(p_1123->g_362.sb, "p_1123->g_362.sb", print_hash_value);
    transparent_crc(p_1123->g_362.sc, "p_1123->g_362.sc", print_hash_value);
    transparent_crc(p_1123->g_362.sd, "p_1123->g_362.sd", print_hash_value);
    transparent_crc(p_1123->g_362.se, "p_1123->g_362.se", print_hash_value);
    transparent_crc(p_1123->g_362.sf, "p_1123->g_362.sf", print_hash_value);
    transparent_crc(p_1123->g_365.x, "p_1123->g_365.x", print_hash_value);
    transparent_crc(p_1123->g_365.y, "p_1123->g_365.y", print_hash_value);
    transparent_crc(p_1123->g_365.z, "p_1123->g_365.z", print_hash_value);
    transparent_crc(p_1123->g_365.w, "p_1123->g_365.w", print_hash_value);
    transparent_crc(p_1123->g_371, "p_1123->g_371", print_hash_value);
    transparent_crc(p_1123->g_385.f0, "p_1123->g_385.f0", print_hash_value);
    transparent_crc(p_1123->g_402, "p_1123->g_402", print_hash_value);
    transparent_crc(p_1123->g_404.s0, "p_1123->g_404.s0", print_hash_value);
    transparent_crc(p_1123->g_404.s1, "p_1123->g_404.s1", print_hash_value);
    transparent_crc(p_1123->g_404.s2, "p_1123->g_404.s2", print_hash_value);
    transparent_crc(p_1123->g_404.s3, "p_1123->g_404.s3", print_hash_value);
    transparent_crc(p_1123->g_404.s4, "p_1123->g_404.s4", print_hash_value);
    transparent_crc(p_1123->g_404.s5, "p_1123->g_404.s5", print_hash_value);
    transparent_crc(p_1123->g_404.s6, "p_1123->g_404.s6", print_hash_value);
    transparent_crc(p_1123->g_404.s7, "p_1123->g_404.s7", print_hash_value);
    transparent_crc(p_1123->g_404.s8, "p_1123->g_404.s8", print_hash_value);
    transparent_crc(p_1123->g_404.s9, "p_1123->g_404.s9", print_hash_value);
    transparent_crc(p_1123->g_404.sa, "p_1123->g_404.sa", print_hash_value);
    transparent_crc(p_1123->g_404.sb, "p_1123->g_404.sb", print_hash_value);
    transparent_crc(p_1123->g_404.sc, "p_1123->g_404.sc", print_hash_value);
    transparent_crc(p_1123->g_404.sd, "p_1123->g_404.sd", print_hash_value);
    transparent_crc(p_1123->g_404.se, "p_1123->g_404.se", print_hash_value);
    transparent_crc(p_1123->g_404.sf, "p_1123->g_404.sf", print_hash_value);
    transparent_crc(p_1123->g_414, "p_1123->g_414", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1123->g_444[i][j], "p_1123->g_444[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1123->g_486.s0, "p_1123->g_486.s0", print_hash_value);
    transparent_crc(p_1123->g_486.s1, "p_1123->g_486.s1", print_hash_value);
    transparent_crc(p_1123->g_486.s2, "p_1123->g_486.s2", print_hash_value);
    transparent_crc(p_1123->g_486.s3, "p_1123->g_486.s3", print_hash_value);
    transparent_crc(p_1123->g_486.s4, "p_1123->g_486.s4", print_hash_value);
    transparent_crc(p_1123->g_486.s5, "p_1123->g_486.s5", print_hash_value);
    transparent_crc(p_1123->g_486.s6, "p_1123->g_486.s6", print_hash_value);
    transparent_crc(p_1123->g_486.s7, "p_1123->g_486.s7", print_hash_value);
    transparent_crc(p_1123->g_486.s8, "p_1123->g_486.s8", print_hash_value);
    transparent_crc(p_1123->g_486.s9, "p_1123->g_486.s9", print_hash_value);
    transparent_crc(p_1123->g_486.sa, "p_1123->g_486.sa", print_hash_value);
    transparent_crc(p_1123->g_486.sb, "p_1123->g_486.sb", print_hash_value);
    transparent_crc(p_1123->g_486.sc, "p_1123->g_486.sc", print_hash_value);
    transparent_crc(p_1123->g_486.sd, "p_1123->g_486.sd", print_hash_value);
    transparent_crc(p_1123->g_486.se, "p_1123->g_486.se", print_hash_value);
    transparent_crc(p_1123->g_486.sf, "p_1123->g_486.sf", print_hash_value);
    transparent_crc(p_1123->g_487, "p_1123->g_487", print_hash_value);
    transparent_crc(p_1123->g_543.x, "p_1123->g_543.x", print_hash_value);
    transparent_crc(p_1123->g_543.y, "p_1123->g_543.y", print_hash_value);
    transparent_crc(p_1123->g_546.s0, "p_1123->g_546.s0", print_hash_value);
    transparent_crc(p_1123->g_546.s1, "p_1123->g_546.s1", print_hash_value);
    transparent_crc(p_1123->g_546.s2, "p_1123->g_546.s2", print_hash_value);
    transparent_crc(p_1123->g_546.s3, "p_1123->g_546.s3", print_hash_value);
    transparent_crc(p_1123->g_546.s4, "p_1123->g_546.s4", print_hash_value);
    transparent_crc(p_1123->g_546.s5, "p_1123->g_546.s5", print_hash_value);
    transparent_crc(p_1123->g_546.s6, "p_1123->g_546.s6", print_hash_value);
    transparent_crc(p_1123->g_546.s7, "p_1123->g_546.s7", print_hash_value);
    transparent_crc(p_1123->g_548.s0, "p_1123->g_548.s0", print_hash_value);
    transparent_crc(p_1123->g_548.s1, "p_1123->g_548.s1", print_hash_value);
    transparent_crc(p_1123->g_548.s2, "p_1123->g_548.s2", print_hash_value);
    transparent_crc(p_1123->g_548.s3, "p_1123->g_548.s3", print_hash_value);
    transparent_crc(p_1123->g_548.s4, "p_1123->g_548.s4", print_hash_value);
    transparent_crc(p_1123->g_548.s5, "p_1123->g_548.s5", print_hash_value);
    transparent_crc(p_1123->g_548.s6, "p_1123->g_548.s6", print_hash_value);
    transparent_crc(p_1123->g_548.s7, "p_1123->g_548.s7", print_hash_value);
    transparent_crc(p_1123->g_572, "p_1123->g_572", print_hash_value);
    transparent_crc(p_1123->g_578.x, "p_1123->g_578.x", print_hash_value);
    transparent_crc(p_1123->g_578.y, "p_1123->g_578.y", print_hash_value);
    transparent_crc(p_1123->g_746.x, "p_1123->g_746.x", print_hash_value);
    transparent_crc(p_1123->g_746.y, "p_1123->g_746.y", print_hash_value);
    transparent_crc(p_1123->g_755.f0, "p_1123->g_755.f0", print_hash_value);
    transparent_crc(p_1123->g_779.s0, "p_1123->g_779.s0", print_hash_value);
    transparent_crc(p_1123->g_779.s1, "p_1123->g_779.s1", print_hash_value);
    transparent_crc(p_1123->g_779.s2, "p_1123->g_779.s2", print_hash_value);
    transparent_crc(p_1123->g_779.s3, "p_1123->g_779.s3", print_hash_value);
    transparent_crc(p_1123->g_779.s4, "p_1123->g_779.s4", print_hash_value);
    transparent_crc(p_1123->g_779.s5, "p_1123->g_779.s5", print_hash_value);
    transparent_crc(p_1123->g_779.s6, "p_1123->g_779.s6", print_hash_value);
    transparent_crc(p_1123->g_779.s7, "p_1123->g_779.s7", print_hash_value);
    transparent_crc(p_1123->g_779.s8, "p_1123->g_779.s8", print_hash_value);
    transparent_crc(p_1123->g_779.s9, "p_1123->g_779.s9", print_hash_value);
    transparent_crc(p_1123->g_779.sa, "p_1123->g_779.sa", print_hash_value);
    transparent_crc(p_1123->g_779.sb, "p_1123->g_779.sb", print_hash_value);
    transparent_crc(p_1123->g_779.sc, "p_1123->g_779.sc", print_hash_value);
    transparent_crc(p_1123->g_779.sd, "p_1123->g_779.sd", print_hash_value);
    transparent_crc(p_1123->g_779.se, "p_1123->g_779.se", print_hash_value);
    transparent_crc(p_1123->g_779.sf, "p_1123->g_779.sf", print_hash_value);
    transparent_crc(p_1123->g_780.s0, "p_1123->g_780.s0", print_hash_value);
    transparent_crc(p_1123->g_780.s1, "p_1123->g_780.s1", print_hash_value);
    transparent_crc(p_1123->g_780.s2, "p_1123->g_780.s2", print_hash_value);
    transparent_crc(p_1123->g_780.s3, "p_1123->g_780.s3", print_hash_value);
    transparent_crc(p_1123->g_780.s4, "p_1123->g_780.s4", print_hash_value);
    transparent_crc(p_1123->g_780.s5, "p_1123->g_780.s5", print_hash_value);
    transparent_crc(p_1123->g_780.s6, "p_1123->g_780.s6", print_hash_value);
    transparent_crc(p_1123->g_780.s7, "p_1123->g_780.s7", print_hash_value);
    transparent_crc(p_1123->g_819.s0, "p_1123->g_819.s0", print_hash_value);
    transparent_crc(p_1123->g_819.s1, "p_1123->g_819.s1", print_hash_value);
    transparent_crc(p_1123->g_819.s2, "p_1123->g_819.s2", print_hash_value);
    transparent_crc(p_1123->g_819.s3, "p_1123->g_819.s3", print_hash_value);
    transparent_crc(p_1123->g_819.s4, "p_1123->g_819.s4", print_hash_value);
    transparent_crc(p_1123->g_819.s5, "p_1123->g_819.s5", print_hash_value);
    transparent_crc(p_1123->g_819.s6, "p_1123->g_819.s6", print_hash_value);
    transparent_crc(p_1123->g_819.s7, "p_1123->g_819.s7", print_hash_value);
    transparent_crc(p_1123->g_855.f0, "p_1123->g_855.f0", print_hash_value);
    transparent_crc(p_1123->g_885.s0, "p_1123->g_885.s0", print_hash_value);
    transparent_crc(p_1123->g_885.s1, "p_1123->g_885.s1", print_hash_value);
    transparent_crc(p_1123->g_885.s2, "p_1123->g_885.s2", print_hash_value);
    transparent_crc(p_1123->g_885.s3, "p_1123->g_885.s3", print_hash_value);
    transparent_crc(p_1123->g_885.s4, "p_1123->g_885.s4", print_hash_value);
    transparent_crc(p_1123->g_885.s5, "p_1123->g_885.s5", print_hash_value);
    transparent_crc(p_1123->g_885.s6, "p_1123->g_885.s6", print_hash_value);
    transparent_crc(p_1123->g_885.s7, "p_1123->g_885.s7", print_hash_value);
    transparent_crc(p_1123->g_916.x, "p_1123->g_916.x", print_hash_value);
    transparent_crc(p_1123->g_916.y, "p_1123->g_916.y", print_hash_value);
    transparent_crc(p_1123->g_916.z, "p_1123->g_916.z", print_hash_value);
    transparent_crc(p_1123->g_916.w, "p_1123->g_916.w", print_hash_value);
    transparent_crc(p_1123->g_964.s0, "p_1123->g_964.s0", print_hash_value);
    transparent_crc(p_1123->g_964.s1, "p_1123->g_964.s1", print_hash_value);
    transparent_crc(p_1123->g_964.s2, "p_1123->g_964.s2", print_hash_value);
    transparent_crc(p_1123->g_964.s3, "p_1123->g_964.s3", print_hash_value);
    transparent_crc(p_1123->g_964.s4, "p_1123->g_964.s4", print_hash_value);
    transparent_crc(p_1123->g_964.s5, "p_1123->g_964.s5", print_hash_value);
    transparent_crc(p_1123->g_964.s6, "p_1123->g_964.s6", print_hash_value);
    transparent_crc(p_1123->g_964.s7, "p_1123->g_964.s7", print_hash_value);
    transparent_crc(p_1123->g_964.s8, "p_1123->g_964.s8", print_hash_value);
    transparent_crc(p_1123->g_964.s9, "p_1123->g_964.s9", print_hash_value);
    transparent_crc(p_1123->g_964.sa, "p_1123->g_964.sa", print_hash_value);
    transparent_crc(p_1123->g_964.sb, "p_1123->g_964.sb", print_hash_value);
    transparent_crc(p_1123->g_964.sc, "p_1123->g_964.sc", print_hash_value);
    transparent_crc(p_1123->g_964.sd, "p_1123->g_964.sd", print_hash_value);
    transparent_crc(p_1123->g_964.se, "p_1123->g_964.se", print_hash_value);
    transparent_crc(p_1123->g_964.sf, "p_1123->g_964.sf", print_hash_value);
    transparent_crc(p_1123->g_986, "p_1123->g_986", print_hash_value);
    transparent_crc(p_1123->g_1008.f0, "p_1123->g_1008.f0", print_hash_value);
    transparent_crc(p_1123->g_1024.x, "p_1123->g_1024.x", print_hash_value);
    transparent_crc(p_1123->g_1024.y, "p_1123->g_1024.y", print_hash_value);
    transparent_crc(p_1123->g_1024.z, "p_1123->g_1024.z", print_hash_value);
    transparent_crc(p_1123->g_1024.w, "p_1123->g_1024.w", print_hash_value);
    transparent_crc(p_1123->g_1041.f0, "p_1123->g_1041.f0", print_hash_value);
    transparent_crc(p_1123->g_1080.f0, "p_1123->g_1080.f0", print_hash_value);
    transparent_crc(p_1123->g_1081.f0, "p_1123->g_1081.f0", print_hash_value);
    transparent_crc(p_1123->g_1082.f0, "p_1123->g_1082.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1123->g_1083[i].f0, "p_1123->g_1083[i].f0", print_hash_value);

    }
    transparent_crc(p_1123->g_1084.f0, "p_1123->g_1084.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1123->g_1085[i].f0, "p_1123->g_1085[i].f0", print_hash_value);

    }
    transparent_crc(p_1123->g_1086.f0, "p_1123->g_1086.f0", print_hash_value);
    transparent_crc(p_1123->g_1087.f0, "p_1123->g_1087.f0", print_hash_value);
    transparent_crc(p_1123->g_1088.f0, "p_1123->g_1088.f0", print_hash_value);
    transparent_crc(p_1123->g_1089.f0, "p_1123->g_1089.f0", print_hash_value);
    transparent_crc(p_1123->g_1090.f0, "p_1123->g_1090.f0", print_hash_value);
    transparent_crc(p_1123->g_1091.f0, "p_1123->g_1091.f0", print_hash_value);
    transparent_crc(p_1123->g_1093.f0, "p_1123->g_1093.f0", print_hash_value);
    transparent_crc(p_1123->g_1096.f0, "p_1123->g_1096.f0", print_hash_value);
    transparent_crc(p_1123->g_1108.f0, "p_1123->g_1108.f0", print_hash_value);
    transparent_crc(p_1123->g_1109.x, "p_1123->g_1109.x", print_hash_value);
    transparent_crc(p_1123->g_1109.y, "p_1123->g_1109.y", print_hash_value);
    transparent_crc(p_1123->g_1109.z, "p_1123->g_1109.z", print_hash_value);
    transparent_crc(p_1123->g_1109.w, "p_1123->g_1109.w", print_hash_value);
    transparent_crc(p_1123->g_1118, "p_1123->g_1118", print_hash_value);
    transparent_crc(p_1123->v_collective, "p_1123->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 38; i++)
            transparent_crc(p_1123->g_special_values[i + 38 * get_linear_group_id()], "p_1123->g_special_values[i + 38 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 38; i++)
            transparent_crc(p_1123->l_special_values[i], "p_1123->l_special_values[i]", print_hash_value);
    transparent_crc(p_1123->l_comm_values[get_linear_local_id()], "p_1123->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1123->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()], "p_1123->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
