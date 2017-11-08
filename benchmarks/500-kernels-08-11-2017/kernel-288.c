// --atomics 28 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 80,78,1 -l 1,39,1
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

__constant uint32_t permutations[10][39] = {
{25,36,37,14,12,35,32,34,8,0,9,26,18,38,5,17,22,28,1,7,15,27,13,2,11,6,29,19,3,10,20,33,16,21,31,24,23,30,4}, // permutation 0
{1,14,18,17,21,11,16,24,3,13,5,37,4,2,32,25,7,26,0,27,23,31,15,10,19,35,28,33,22,30,38,12,29,20,9,8,6,34,36}, // permutation 1
{12,2,22,36,13,31,7,28,6,33,27,8,37,30,11,1,35,23,26,4,10,9,25,18,14,3,16,19,24,32,5,21,29,20,17,34,38,15,0}, // permutation 2
{15,28,13,6,22,24,29,34,20,0,10,17,9,7,26,21,8,35,25,23,18,37,1,27,4,2,16,14,33,19,38,31,3,30,11,36,5,32,12}, // permutation 3
{38,23,15,0,35,21,32,18,30,12,3,1,20,33,2,29,28,7,16,13,22,25,17,37,10,5,34,26,36,8,9,11,14,4,6,27,24,19,31}, // permutation 4
{13,28,20,17,1,23,22,30,34,24,12,4,33,35,6,36,31,14,2,26,38,25,21,37,8,9,16,19,3,5,11,10,32,15,18,7,0,27,29}, // permutation 5
{37,28,2,36,31,16,24,38,0,29,17,34,30,9,6,32,18,7,20,10,8,25,12,22,26,15,3,1,4,19,21,11,35,14,5,23,33,13,27}, // permutation 6
{15,14,32,28,4,6,10,12,30,7,17,33,13,21,19,11,27,23,34,0,16,35,38,3,2,1,20,37,31,8,5,36,26,22,24,29,9,25,18}, // permutation 7
{31,9,14,22,1,38,16,30,25,12,29,2,23,7,27,21,17,26,18,13,20,3,11,35,24,0,6,15,19,36,8,10,5,37,32,28,34,4,33}, // permutation 8
{34,30,20,22,9,27,25,21,19,14,33,10,5,11,17,31,6,8,26,3,1,13,7,36,29,35,28,24,32,18,37,38,23,16,12,0,15,4,2} // permutation 9
};

// Seed: 2815041050

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
   uint64_t  f1;
   uint16_t  f2;
   int64_t  f3;
   volatile int32_t  f4;
};

union U1 {
   int64_t  f0;
};

struct S2 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    int32_t g_7;
    union U1 g_13[8][8];
    VECTOR(uint8_t, 8) g_18;
    uint32_t g_26;
    VECTOR(int32_t, 2) g_36;
    volatile VECTOR(int32_t, 16) g_46;
    int8_t g_73;
    VECTOR(int32_t, 4) g_87;
    VECTOR(int32_t, 4) g_111;
    uint32_t g_114;
    uint32_t *g_113[3][1];
    VECTOR(int32_t, 16) g_115;
    VECTOR(uint16_t, 4) g_116;
    volatile int8_t *g_127;
    int8_t g_129;
    uint64_t g_131;
    int16_t **g_137[3];
    int16_t g_141[8][3];
    int16_t g_245[6];
    int32_t *g_248;
    union U0 g_269;
    uint64_t g_283;
    union U0 g_285;
    union U0 *g_284;
    int32_t g_300;
    int8_t *g_301;
    int32_t g_306[8][1][4];
    int16_t g_792;
    volatile int32_t g_887;
    volatile int32_t *g_886;
    volatile int32_t **g_885[4][9];
    VECTOR(int32_t, 4) g_926;
    VECTOR(int32_t, 16) g_927;
    VECTOR(int32_t, 4) g_928;
    int32_t g_940;
    volatile uint8_t g_953;
    volatile uint8_t *g_952;
    volatile uint8_t * volatile *g_951;
    int32_t *g_967;
    VECTOR(uint8_t, 2) g_970;
    VECTOR(uint64_t, 4) g_991;
    int16_t ** volatile *g_1010[2];
    int16_t ** volatile **g_1009;
    VECTOR(uint16_t, 16) g_1013;
    VECTOR(int32_t, 16) g_1014;
    int32_t g_1043;
    uint8_t *g_1045;
    uint8_t **g_1044;
    int64_t g_1049;
    union U0 ***g_1070;
    union U0 g_1076[8];
    union U0 g_1077;
    union U0 g_1078;
    union U0 g_1079;
    union U0 g_1080;
    VECTOR(uint16_t, 4) g_1098;
    VECTOR(uint16_t, 4) g_1100;
    VECTOR(uint8_t, 2) g_1132;
    VECTOR(uint8_t, 2) g_1134;
    union U0 g_1136;
    union U0 g_1137;
    union U0 g_1138;
    union U0 g_1139;
    union U0 g_1140;
    VECTOR(int32_t, 8) g_1155;
    volatile VECTOR(uint8_t, 4) g_1215;
    int32_t * volatile g_1231[8][4][5];
    VECTOR(int16_t, 4) g_1244;
    uint32_t g_1264;
    int32_t * volatile g_1270[4][9];
    int32_t * volatile g_1271;
    int32_t ** volatile g_1274;
    int32_t * volatile g_1275;
    int16_t *g_1288[3];
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
union U1  func_1(struct S2 * p_1317);
union U1  func_21(uint32_t  p_22, int32_t  p_23, uint8_t * p_24, struct S2 * p_1317);
uint8_t * func_33(int8_t  p_34, int16_t * p_35, struct S2 * p_1317);
int32_t * func_37(uint64_t  p_38, uint16_t  p_39, int16_t * p_40, uint64_t  p_41, struct S2 * p_1317);
uint16_t  func_53(uint16_t  p_54, union U1  p_55, int32_t * p_56, uint32_t * p_57, struct S2 * p_1317);
uint32_t * func_61(uint32_t * p_62, int32_t  p_63, struct S2 * p_1317);
uint32_t * func_64(uint64_t  p_65, struct S2 * p_1317);
uint32_t  func_91(uint32_t * p_92, int32_t  p_93, int16_t  p_94, struct S2 * p_1317);
uint32_t * func_95(int64_t  p_96, int8_t  p_97, uint32_t * p_98, uint32_t  p_99, int8_t * p_100, struct S2 * p_1317);
int8_t  func_105(int16_t  p_106, int32_t * p_107, int16_t  p_108, uint32_t * p_109, struct S2 * p_1317);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1317->g_4 p_1317->g_7 p_1317->g_13 p_1317->g_26 p_1317->g_36 p_1317->g_46 p_1317->g_18 p_1317->g_87 p_1317->g_111 p_1317->g_113 p_1317->g_115 p_1317->g_116 p_1317->g_127 p_1317->g_131 p_1317->g_137 p_1317->g_comm_values p_1317->g_13.f0 p_1317->g_114 p_1317->l_comm_values p_1317->g_248 p_1317->g_283 p_1317->g_301 p_1317->g_285.f3 p_1317->g_129 p_1317->g_73 p_1317->g_141 p_1317->g_885 p_1317->g_926 p_1317->g_927 p_1317->g_928 p_1317->g_940 p_1317->g_306 p_1317->g_951 p_1317->g_970 p_1317->g_245 p_1317->g_1078.f1 p_1317->g_1132 p_1317->g_1134 p_1317->g_1049 p_1317->g_991 p_1317->g_269.f1 p_1317->g_1013 p_1317->g_1044 p_1317->g_1045 p_1317->g_300 p_1317->g_1244 p_1317->g_1274 p_1317->g_1043 p_1317->g_1275 p_1317->g_1288
 * writes: p_1317->g_4 p_1317->g_7 p_1317->g_26 p_1317->g_73 p_1317->g_131 p_1317->g_137 p_1317->g_13.f0 p_1317->g_116 p_1317->g_245 p_1317->g_141 p_1317->g_248 p_1317->g_300 p_1317->g_285.f3 p_1317->g_36 p_1317->g_113 p_1317->g_129 p_1317->g_269.f1 p_1317->g_114 p_1317->g_18 p_1317->g_269.f2 p_1317->g_967 p_1317->g_940 p_1317->g_1078.f1 p_1317->g_1049 p_1317->g_1079.f2 p_1317->g_1137.f2 p_1317->g_1136.f3 p_1317->g_1013 p_1317->g_1264 p_1317->g_1043
 */
union U1  func_1(struct S2 * p_1317)
{ /* block id: 4 */
    uint8_t *l_16 = (void*)0;
    uint8_t *l_17 = (void*)0;
    uint8_t *l_19 = (void*)0;
    int32_t l_20 = 0x7A7CF831L;
    uint32_t *l_25[1];
    int32_t l_27 = (-1L);
    int16_t *l_30 = (void*)0;
    uint32_t l_31 = 4294967295UL;
    uint32_t *l_32 = (void*)0;
    union U1 *l_1284 = &p_1317->g_13[3][1];
    int16_t **l_1285 = &l_30;
    int16_t *l_1287 = &p_1317->g_245[1];
    int16_t **l_1286 = &l_1287;
    int64_t l_1289 = 0x6C4FBB9509F5D6CFL;
    int32_t *l_1290 = &p_1317->g_7;
    int i;
    for (i = 0; i < 1; i++)
        l_25[i] = &p_1317->g_26;
    for (p_1317->g_4 = 0; (p_1317->g_4 != (-29)); p_1317->g_4 = safe_sub_func_uint8_t_u_u(p_1317->g_4, 1))
    { /* block id: 7 */
        for (p_1317->g_7 = 0; (p_1317->g_7 <= (-3)); p_1317->g_7--)
        { /* block id: 10 */
            union U1 l_10[4][7][5] = {{{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}}},{{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}}},{{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}}},{{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}},{{0x7D593B88A615B38DL},{-1L},{0x7B332E0C280563ADL},{-1L},{1L}}}};
            int i, j, k;
            return l_10[0][0][1];
        }
        for (p_1317->g_7 = 0; (p_1317->g_7 >= 17); p_1317->g_7 = safe_add_func_int32_t_s_s(p_1317->g_7, 5))
        { /* block id: 15 */
            return p_1317->g_13[7][7];
        }
    }
    (*p_1317->g_1275) = (p_1317->g_1043 |= (FAKE_DIVERGE(p_1317->local_0_offset, get_local_id(0), 10) <= (safe_mul_func_uint8_t_u_u((l_20 = 0xADL), ((func_21((p_1317->g_26--), ((l_31 = ((void*)0 == l_25[0])) , ((l_32 == &l_31) , (-10L))), func_33((((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1317->g_36.yyyx)).lo)).yxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, (-7L))).xxxxyxyxxyxxxxyy)).s4341))).y , 0x78L), l_30, p_1317), p_1317) , l_31) <= l_27)))));
    l_1290 = (((safe_mod_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s(l_20, (safe_lshift_func_uint16_t_u_s((((l_20 != (safe_div_func_uint32_t_u_u((l_1284 != l_1284), l_31))) , (((-1L) > p_1317->g_87.z) < 0x5755L)) == ((((*l_1286) = ((*l_1285) = l_30)) != p_1317->g_1288[2]) ^ (*p_1317->g_1275))), 0)))) | p_1317->g_129) == l_1289) && l_31), (*p_1317->g_301))) < 4294967294UL) , (void*)0);
    if ((atomic_inc(&p_1317->l_atomic_input[13]) == 0))
    { /* block id: 678 */
        int32_t l_1291 = (-5L);
        uint8_t l_1309 = 0x55L;
        int32_t l_1310 = (-1L);
        int16_t l_1311 = 5L;
        uint64_t l_1312 = 0x0D6C6AB3FEC82384L;
        int16_t l_1313 = 0x617DL;
        uint64_t l_1314 = 0x20ACA68B1C7A829EL;
        for (l_1291 = (-28); (l_1291 != (-9)); ++l_1291)
        { /* block id: 681 */
            int32_t l_1294 = 0x73827C03L;
            for (l_1294 = (-14); (l_1294 > (-9)); l_1294 = safe_add_func_uint8_t_u_u(l_1294, 9))
            { /* block id: 684 */
                uint8_t l_1297 = 0xBBL;
                uint32_t l_1298 = 1UL;
                uint32_t l_1299[10][5][5] = {{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}},{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}},{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}},{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}},{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}},{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}},{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}},{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}},{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}},{{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL},{0xA9E76F9CL,0xA9E76F9CL,0xBA8A3BB5L,0xC3A08C74L,1UL}}};
                union U0 l_1303 = {0xFEEE365FL};/* VOLATILE GLOBAL l_1303 */
                union U0 *l_1302 = &l_1303;
                union U0 *l_1304 = &l_1303;
                union U0 *l_1305 = &l_1303;
                union U0 *l_1306 = &l_1303;
                int32_t l_1307 = 0L;
                int32_t *l_1308 = (void*)0;
                int i, j, k;
                l_1298 |= l_1297;
                --l_1299[0][0][3];
                l_1306 = (l_1305 = (l_1304 = l_1302));
                l_1308 = (l_1307 , l_1308);
            }
        }
        l_1312 = ((VECTOR(int32_t, 8))(0x05043A1BL, ((l_1310 = (l_1309 &= 0x2F4DL)) , l_1311), 0x123A972EL, ((VECTOR(int32_t, 2))(0x443428A4L, 0x72404D80L)), 0x15AC5599L, 1L, 0x07A0ED0EL)).s6;
        --l_1314;
        unsigned int result = 0;
        result += l_1291;
        result += l_1309;
        result += l_1310;
        result += l_1311;
        result += l_1312;
        result += l_1313;
        result += l_1314;
        atomic_add(&p_1317->l_special_values[13], result);
    }
    else
    { /* block id: 697 */
        (1 + 1);
    }
    return p_1317->g_13[7][7];
}


/* ------------------------------------------ */
/* 
 * reads : p_1317->g_301 p_1317->g_129 p_1317->g_300 p_1317->g_1244 p_1317->g_1274 p_1317->g_13
 * writes: p_1317->g_73 p_1317->g_1264 p_1317->g_7 p_1317->g_248
 */
union U1  func_21(uint32_t  p_22, int32_t  p_23, uint8_t * p_24, struct S2 * p_1317)
{ /* block id: 664 */
    uint32_t l_1237 = 8UL;
    VECTOR(int16_t, 8) l_1245 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, (-3L)), (-3L)), (-3L), 2L, (-3L));
    VECTOR(uint8_t, 8) l_1248 = (VECTOR(uint8_t, 8))(0x6CL, (VECTOR(uint8_t, 4))(0x6CL, (VECTOR(uint8_t, 2))(0x6CL, 0x51L), 0x51L), 0x51L, 0x6CL, 0x51L);
    VECTOR(int32_t, 16) l_1259 = (VECTOR(int32_t, 16))(0x60BC5038L, (VECTOR(int32_t, 4))(0x60BC5038L, (VECTOR(int32_t, 2))(0x60BC5038L, 0x23485261L), 0x23485261L), 0x23485261L, 0x60BC5038L, 0x23485261L, (VECTOR(int32_t, 2))(0x60BC5038L, 0x23485261L), (VECTOR(int32_t, 2))(0x60BC5038L, 0x23485261L), 0x60BC5038L, 0x23485261L, 0x60BC5038L, 0x23485261L);
    int8_t *l_1260 = &p_1317->g_73;
    uint32_t *l_1263[10][5] = {{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1317->g_1264,(void*)0,(void*)0}};
    union U0 ***l_1265 = (void*)0;
    union U0 **l_1266 = &p_1317->g_284;
    union U0 **l_1267 = &p_1317->g_284;
    int32_t *l_1268 = (void*)0;
    int32_t *l_1269 = &p_1317->g_7;
    int32_t *l_1272[7];
    int8_t l_1273 = 1L;
    int i, j;
    for (i = 0; i < 7; i++)
        l_1272[i] = (void*)0;
    l_1273 &= ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(l_1237, (*p_1317->g_301))), (safe_sub_func_int64_t_s_s(p_1317->g_300, (safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_1317->g_1244.wwyy)).odd)).yxxy, ((VECTOR(int16_t, 2))(0x63FDL, 0x5A6FL)).xyyy, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(0x6D27L, ((VECTOR(int16_t, 8))(l_1245.s37314201)), (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(l_1248.s76)).yxyx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 4))((((*l_1269) = ((l_1266 = (((safe_rshift_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((GROUP_DIVERGE(0, 1) , ((l_1248.s7 , (safe_add_func_uint32_t_u_u(l_1237, ((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 8))((safe_sub_func_uint16_t_u_u(l_1245.s3, (safe_lshift_func_int16_t_s_u((((*l_1260) = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1259.s6cd7de26)).s6767356176557367)).s4 , 0x51L)) || (safe_mul_func_int16_t_s_s(((p_1317->g_1264 = FAKE_DIVERGE(p_1317->global_0_offset, get_global_id(0), 10)) | 0UL), p_22))), p_22)))), l_1259.s3, 1UL, ((VECTOR(uint32_t, 4))(1UL)), 4294967293UL)).odd))).zzzyxzwwwzwxzwww, ((VECTOR(uint32_t, 16))(0x5DFFAFD1L))))).s3))) , p_23)), p_23)) >= p_23) && p_23), 2)) ^ l_1259.s3) , (void*)0)) != l_1267)) & 0xBBA5A483L), ((VECTOR(int8_t, 2))(0x21L)), 0x30L)).wyyywyxx))).lo, (uint8_t)0UL, (uint8_t)1UL))).yxwyywzywzzzxwzx)).s23)).xyyx, ((VECTOR(uint8_t, 4))(0x4FL))))).z, 5)), ((VECTOR(int16_t, 4))(0x53E7L)), 0x0299L, 0x55C2L)).sb4, ((VECTOR(int16_t, 2))(6L))))).yxxy))).xzyzywzz)).s7, 3UL)), 0x74L)))))) >= 0xFD0EC62FL);
    (*p_1317->g_1274) = &p_23;
    return p_1317->g_13[2][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1317->g_7 p_1317->g_46 p_1317->g_4 p_1317->g_18 p_1317->g_87 p_1317->g_111 p_1317->g_36 p_1317->g_113 p_1317->g_115 p_1317->g_116 p_1317->g_127 p_1317->g_131 p_1317->g_137 p_1317->g_comm_values p_1317->g_13.f0 p_1317->g_114 p_1317->l_comm_values p_1317->g_248 p_1317->g_283 p_1317->g_301 p_1317->g_285.f3 p_1317->g_13 p_1317->g_129 p_1317->g_73 p_1317->g_141 p_1317->g_885 p_1317->g_926 p_1317->g_927 p_1317->g_928 p_1317->g_940 p_1317->g_306 p_1317->g_951 p_1317->g_970 p_1317->g_245 p_1317->g_1078.f1 p_1317->g_1132 p_1317->g_1134 p_1317->g_1049 p_1317->g_991 p_1317->g_269.f1 p_1317->g_1013 p_1317->g_1044 p_1317->g_1045
 * writes: p_1317->g_73 p_1317->g_131 p_1317->g_137 p_1317->g_13.f0 p_1317->g_116 p_1317->g_245 p_1317->g_141 p_1317->g_248 p_1317->g_300 p_1317->g_285.f3 p_1317->g_36 p_1317->g_113 p_1317->g_129 p_1317->g_269.f1 p_1317->g_114 p_1317->g_4 p_1317->g_18 p_1317->g_269.f2 p_1317->g_967 p_1317->g_940 p_1317->g_1078.f1 p_1317->g_1049 p_1317->g_1079.f2 p_1317->g_1137.f2 p_1317->g_1136.f3 p_1317->g_1013
 */
uint8_t * func_33(int8_t  p_34, int16_t * p_35, struct S2 * p_1317)
{ /* block id: 22 */
    int64_t l_60 = 0x184A182F7292F902L;
    int8_t *l_72 = &p_1317->g_73;
    uint64_t l_78[8] = {0xA524B17E4CDB194AL,0x0B7D5E36264D6F6CL,0xA524B17E4CDB194AL,0xA524B17E4CDB194AL,0x0B7D5E36264D6F6CL,0xA524B17E4CDB194AL,0xA524B17E4CDB194AL,0x0B7D5E36264D6F6CL};
    int32_t l_81 = 0x52D388EEL;
    VECTOR(uint8_t, 4) l_82 = (VECTOR(uint8_t, 4))(0x3CL, (VECTOR(uint8_t, 2))(0x3CL, 0x78L), 0x78L);
    uint8_t *l_83 = (void*)0;
    uint8_t *l_84[8][10][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t l_85[9][3] = {{0x35441F78L,0x7FE76D6EL,0x35441F78L},{0x35441F78L,0x7FE76D6EL,0x35441F78L},{0x35441F78L,0x7FE76D6EL,0x35441F78L},{0x35441F78L,0x7FE76D6EL,0x35441F78L},{0x35441F78L,0x7FE76D6EL,0x35441F78L},{0x35441F78L,0x7FE76D6EL,0x35441F78L},{0x35441F78L,0x7FE76D6EL,0x35441F78L},{0x35441F78L,0x7FE76D6EL,0x35441F78L},{0x35441F78L,0x7FE76D6EL,0x35441F78L}};
    int16_t *l_791 = &p_1317->g_792;
    int32_t **l_1168 = &p_1317->g_248;
    uint32_t *l_1211 = &p_1317->g_114;
    int i, j, k;
    (*l_1168) = func_37(p_1317->g_7, ((safe_lshift_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(p_1317->g_46.s10)).hi, (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((-1L) || (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(func_53(p_34, (((safe_sub_func_uint32_t_u_u(0x21F8E690L, ((l_60 , ((((l_85[5][1] = ((p_1317->g_113[2][0] = func_61(func_64(((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((*l_72) = p_34), 254UL)), 6)) || ((((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_85[5][1] = (l_78[1] >= (((((l_81 ^= (((safe_add_func_int64_t_s_s((254UL != p_1317->g_4), p_34)) | l_60) >= p_34)) != p_34) >= l_82.x) | l_78[6]) , p_34))), p_34)), GROUP_DIVERGE(2, 1))) && p_1317->g_18.s0) == FAKE_DIVERGE(p_1317->group_2_offset, get_group_id(2), 10)) < 18446744073709551615UL)), p_1317), l_60, p_1317)) == (void*)0)) , (void*)0) != l_791) || p_34)) < 1UL))) != p_1317->g_7) , p_1317->g_13[7][7]), &p_1317->g_4, &p_1317->g_114, p_1317), l_82.y)), 0x95L)), p_1317->g_991.z))), 0x5B5DEE07L, (-1L), ((VECTOR(int32_t, 4))((-7L))), p_34, p_34, p_34, l_82.y, 7L, l_85[5][1], l_60, (-6L), 0x28B36B03L)).odd, ((VECTOR(int32_t, 8))(0x67523B6CL)), ((VECTOR(int32_t, 8))(0x023708B8L))))), (-5L), 0x20FD2A28L, p_34, ((VECTOR(int32_t, 2))((-2L))), 0x46EC4DA7L, (-5L), 0x6AEAE955L)).sa != l_78[4]))) > l_78[1]) ^ l_78[1]), l_82.y)) , l_85[5][1]), l_791, l_82.w, p_1317);
    for (p_1317->g_269.f1 = (-29); (p_1317->g_269.f1 != 56); p_1317->g_269.f1 = safe_add_func_uint8_t_u_u(p_1317->g_269.f1, 8))
    { /* block id: 613 */
        uint8_t l_1216 = 0x27L;
        VECTOR(int8_t, 8) l_1221 = (VECTOR(int8_t, 8))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 0x64L), 0x64L), 0x64L, 0x05L, 0x64L);
        uint16_t *l_1222 = (void*)0;
        uint16_t *l_1223 = &p_1317->g_1077.f2;
        uint16_t *l_1224[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_1232 = &p_1317->g_940;
        int i;
        for (p_1317->g_1137.f2 = 0; (p_1317->g_1137.f2 < 40); p_1317->g_1137.f2 = safe_add_func_uint16_t_u_u(p_1317->g_1137.f2, 4))
        { /* block id: 616 */
            int64_t *l_1210 = &p_1317->g_1136.f3;
            int32_t l_1214 = 0x521EDA45L;
            if ((atomic_inc(&p_1317->l_atomic_input[2]) == 5))
            { /* block id: 618 */
                int32_t l_1174 = 0x01E8952FL;
                int32_t *l_1173 = &l_1174;
                int64_t l_1186 = 1L;
                uint32_t l_1187 = 4294967293UL;
                int64_t l_1190 = 0x10ED3CC3108B1C0CL;
                l_1173 = (void*)0;
                for (l_1174 = 19; (l_1174 != 8); l_1174 = safe_sub_func_int32_t_s_s(l_1174, 8))
                { /* block id: 622 */
                    VECTOR(uint32_t, 16) l_1177 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0x11217A31L), 0x11217A31L), 0x11217A31L, 4UL, 0x11217A31L, (VECTOR(uint32_t, 2))(4UL, 0x11217A31L), (VECTOR(uint32_t, 2))(4UL, 0x11217A31L), 4UL, 0x11217A31L, 4UL, 0x11217A31L);
                    int64_t l_1178 = 6L;
                    int64_t l_1179 = (-1L);
                    int8_t l_1180 = 0x6BL;
                    uint32_t l_1181 = 0x21A56361L;
                    int32_t l_1184[7] = {0x1BE2989EL,(-1L),0x1BE2989EL,0x1BE2989EL,(-1L),0x1BE2989EL,0x1BE2989EL};
                    int8_t l_1185 = 0x3AL;
                    int i;
                    l_1179 ^= (l_1178 = l_1177.s7);
                    l_1181++;
                    l_1184[5] = 0x46F5FF0DL;
                    l_1185 = 0x46B5B8F1L;
                }
                --l_1187;
                if (l_1190)
                { /* block id: 630 */
                    int32_t l_1191 = 0x284D2E6AL;
                    for (l_1191 = (-28); (l_1191 < 11); l_1191 = safe_add_func_uint16_t_u_u(l_1191, 1))
                    { /* block id: 633 */
                        int64_t l_1194[2][4] = {{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)}};
                        uint64_t l_1195[4][7];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_1195[i][j] = 1UL;
                        }
                        l_1174 &= l_1194[0][2];
                        l_1174 = l_1195[2][4];
                    }
                }
                else
                { /* block id: 637 */
                    int32_t l_1196 = (-1L);
                    int64_t l_1202 = (-1L);
                    for (l_1196 = 0; (l_1196 == (-23)); l_1196 = safe_sub_func_int64_t_s_s(l_1196, 9))
                    { /* block id: 640 */
                        uint64_t l_1199[8][2][8] = {{{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL},{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL}},{{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL},{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL}},{{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL},{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL}},{{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL},{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL}},{{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL},{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL}},{{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL},{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL}},{{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL},{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL}},{{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL},{0UL,0xCC33C7E0D03538C0L,0x8EA7A18F5FAD9144L,0xD47D42F55AB57208L,0xD47D42F55AB57208L,0x8EA7A18F5FAD9144L,0xCC33C7E0D03538C0L,0UL}}};
                        VECTOR(int32_t, 2) l_1201 = (VECTOR(int32_t, 2))(0x24AC765AL, 0x6D7751E8L);
                        int32_t *l_1200 = (void*)0;
                        int i, j, k;
                        l_1174 &= ((VECTOR(int32_t, 8))(l_1199[0][0][3], 5L, 0x4766F475L, 0x7809541AL, 0x3E9390D2L, ((VECTOR(int32_t, 2))(0x637ACBA6L, 9L)), 0L)).s0;
                        l_1173 = l_1200;
                    }
                    l_1196 = l_1202;
                    for (l_1202 = 0; (l_1202 == 5); l_1202 = safe_add_func_int32_t_s_s(l_1202, 6))
                    { /* block id: 647 */
                        int32_t l_1206 = 0x5788B44EL;
                        int32_t *l_1205 = &l_1206;
                        uint32_t l_1207 = 0UL;
                        l_1173 = l_1205;
                        l_1207--;
                    }
                    l_1174 = (-4L);
                }
                unsigned int result = 0;
                result += l_1174;
                result += l_1186;
                result += l_1187;
                result += l_1190;
                atomic_add(&p_1317->l_special_values[2], result);
            }
            else
            { /* block id: 653 */
                (1 + 1);
            }
            (*l_1168) = func_95(((*l_1210) = p_34), p_34, l_1211, ((safe_rshift_func_int16_t_s_s(0x74E2L, l_1214)) ^ ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1317->g_1215.xywyzwww)).s3267102445150626)).s6), &p_1317->g_129, p_1317);
        }
        l_85[8][2] ^= ((((l_1216 <= 0xB8L) | ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_1221.s0616302145246533)).hi)).s3 < ((l_1221.s7 <= p_34) | l_1221.s3)) , (++p_1317->g_1013.sc)), l_1221.s3)), ((((VECTOR(uint32_t, 4))((((((void*)0 == (*p_1317->g_951)) , (!GROUP_DIVERGE(0, 1))) & (((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((0x3044L > (-1L)), FAKE_DIVERGE(p_1317->local_1_offset, get_local_id(1), 10))) , (*p_1317->g_952)), 4)) , l_1221.s6) && (*p_1317->g_952))) == l_1221.s6), 0x62F1C2FDL, 4294967289UL, 0xCDC49BDBL)).y , p_34) != p_34))) , GROUP_DIVERGE(2, 1))) > p_34) , 0x16B3A046L);
        (*l_1232) = ((void*)0 == &p_1317->g_131);
    }
    return (*p_1317->g_1044);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_37(uint64_t  p_38, uint16_t  p_39, int16_t * p_40, uint64_t  p_41, struct S2 * p_1317)
{ /* block id: 608 */
    int32_t *l_1167 = (void*)0;
    return l_1167;
}


/* ------------------------------------------ */
/* 
 * reads : p_1317->g_4 p_1317->g_115 p_1317->g_87 p_1317->g_248 p_1317->g_285.f3 p_1317->g_301 p_1317->g_129 p_1317->g_114 p_1317->g_73 p_1317->g_116 p_1317->g_111 p_1317->g_141 p_1317->g_7 p_1317->l_comm_values p_1317->g_885 p_1317->g_926 p_1317->g_927 p_1317->g_928 p_1317->g_18 p_1317->g_940 p_1317->g_306 p_1317->g_131 p_1317->g_951 p_1317->g_970 p_1317->g_245 p_1317->g_1078.f1 p_1317->g_1132 p_1317->g_1134 p_1317->g_36 p_1317->g_1049
 * writes: p_1317->g_285.f3 p_1317->g_300 p_1317->g_131 p_1317->g_129 p_1317->g_269.f1 p_1317->g_114 p_1317->g_4 p_1317->g_248 p_1317->g_116 p_1317->g_18 p_1317->g_245 p_1317->g_269.f2 p_1317->g_967 p_1317->g_940 p_1317->g_73 p_1317->g_1078.f1 p_1317->g_1049 p_1317->g_1079.f2
 */
uint16_t  func_53(uint16_t  p_54, union U1  p_55, int32_t * p_56, uint32_t * p_57, struct S2 * p_1317)
{ /* block id: 456 */
    uint32_t l_793 = 0UL;
    int32_t l_840 = 1L;
    VECTOR(int32_t, 16) l_843 = (VECTOR(int32_t, 16))(0x2A15DA68L, (VECTOR(int32_t, 4))(0x2A15DA68L, (VECTOR(int32_t, 2))(0x2A15DA68L, 1L), 1L), 1L, 0x2A15DA68L, 1L, (VECTOR(int32_t, 2))(0x2A15DA68L, 1L), (VECTOR(int32_t, 2))(0x2A15DA68L, 1L), 0x2A15DA68L, 1L, 0x2A15DA68L, 1L);
    VECTOR(uint8_t, 2) l_871 = (VECTOR(uint8_t, 2))(0xCCL, 0x6CL);
    int16_t *l_881 = &p_1317->g_245[0];
    uint64_t l_890[7][10] = {{0x922AD86C0D614BCEL,0x82B80DAF05F0AFADL,0x82B80DAF05F0AFADL,0x922AD86C0D614BCEL,18446744073709551613UL,0x24D81F8F320E37EBL,0xCE99DA6F2FE30281L,18446744073709551614UL,18446744073709551615UL,0xE2581EF983E9CD34L},{0x922AD86C0D614BCEL,0x82B80DAF05F0AFADL,0x82B80DAF05F0AFADL,0x922AD86C0D614BCEL,18446744073709551613UL,0x24D81F8F320E37EBL,0xCE99DA6F2FE30281L,18446744073709551614UL,18446744073709551615UL,0xE2581EF983E9CD34L},{0x922AD86C0D614BCEL,0x82B80DAF05F0AFADL,0x82B80DAF05F0AFADL,0x922AD86C0D614BCEL,18446744073709551613UL,0x24D81F8F320E37EBL,0xCE99DA6F2FE30281L,18446744073709551614UL,18446744073709551615UL,0xE2581EF983E9CD34L},{0x922AD86C0D614BCEL,0x82B80DAF05F0AFADL,0x82B80DAF05F0AFADL,0x922AD86C0D614BCEL,18446744073709551613UL,0x24D81F8F320E37EBL,0xCE99DA6F2FE30281L,18446744073709551614UL,18446744073709551615UL,0xE2581EF983E9CD34L},{0x922AD86C0D614BCEL,0x82B80DAF05F0AFADL,0x82B80DAF05F0AFADL,0x922AD86C0D614BCEL,18446744073709551613UL,0x24D81F8F320E37EBL,0xCE99DA6F2FE30281L,18446744073709551614UL,18446744073709551615UL,0xE2581EF983E9CD34L},{0x922AD86C0D614BCEL,0x82B80DAF05F0AFADL,0x82B80DAF05F0AFADL,0x922AD86C0D614BCEL,18446744073709551613UL,0x24D81F8F320E37EBL,0xCE99DA6F2FE30281L,18446744073709551614UL,18446744073709551615UL,0xE2581EF983E9CD34L},{0x922AD86C0D614BCEL,0x82B80DAF05F0AFADL,0x82B80DAF05F0AFADL,0x922AD86C0D614BCEL,18446744073709551613UL,0x24D81F8F320E37EBL,0xCE99DA6F2FE30281L,18446744073709551614UL,18446744073709551615UL,0xE2581EF983E9CD34L}};
    int32_t l_895[9] = {(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)};
    int8_t l_896 = 0x0DL;
    int32_t l_897 = 0x0AF25733L;
    int64_t *l_921 = (void*)0;
    VECTOR(int32_t, 8) l_922 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
    uint32_t l_941 = 0UL;
    int16_t ***l_964 = &p_1317->g_137[2];
    uint32_t *l_974 = &p_1317->g_114;
    uint32_t **l_997 = &p_1317->g_113[0][0];
    uint32_t ***l_996 = &l_997;
    VECTOR(uint8_t, 4) l_1133 = (VECTOR(uint8_t, 4))(0x5DL, (VECTOR(uint8_t, 2))(0x5DL, 0x83L), 0x83L);
    union U0 *l_1135[2][3][2] = {{{(void*)0,&p_1317->g_1138},{(void*)0,&p_1317->g_1138},{(void*)0,&p_1317->g_1138}},{{(void*)0,&p_1317->g_1138},{(void*)0,&p_1317->g_1138},{(void*)0,&p_1317->g_1138}}};
    VECTOR(uint16_t, 16) l_1159 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65532UL), 65532UL, 65535UL, 65532UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65535UL, 65532UL, 65535UL, 65532UL);
    uint32_t l_1166 = 0x1789220EL;
    int i, j, k;
    if (l_793)
    { /* block id: 457 */
        int32_t *l_814[9] = {&p_1317->g_300,&p_1317->g_300,&p_1317->g_300,&p_1317->g_300,&p_1317->g_300,&p_1317->g_300,&p_1317->g_300,&p_1317->g_300,&p_1317->g_300};
        int32_t l_815 = 0x0BC4A072L;
        int32_t l_847 = 0x0E84B206L;
        int32_t l_848 = 1L;
        int32_t l_852[4] = {1L,1L,1L,1L};
        VECTOR(int8_t, 16) l_870 = (VECTOR(int8_t, 16))(0x6CL, (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0x18L), 0x18L), 0x18L, 0x6CL, 0x18L, (VECTOR(int8_t, 2))(0x6CL, 0x18L), (VECTOR(int8_t, 2))(0x6CL, 0x18L), 0x6CL, 0x18L, 0x6CL, 0x18L);
        int32_t l_884 = 1L;
        int16_t l_889 = (-2L);
        int32_t *l_893[7][6][6] = {{{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7}},{{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7}},{{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7}},{{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7}},{{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7}},{{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7}},{{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7},{&l_840,&l_848,&l_852[0],&l_840,(void*)0,&p_1317->g_7}}};
        int16_t l_894 = 0x6855L;
        uint32_t l_898[3][5][3] = {{{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L}},{{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L}},{{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L},{0x202AB409L,4294967295UL,0x202AB409L}}};
        VECTOR(int16_t, 4) l_929 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x55E7L), 0x55E7L);
        uint8_t *l_930 = (void*)0;
        uint8_t *l_931 = (void*)0;
        uint8_t *l_932 = (void*)0;
        uint8_t *l_933 = (void*)0;
        uint8_t *l_934 = (void*)0;
        uint8_t *l_935 = (void*)0;
        uint8_t *l_936 = (void*)0;
        uint8_t *l_937[7][9][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int8_t l_942[7];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_942[i] = 0x60L;
        if (((safe_div_func_int16_t_s_s((248UL != 0x2DL), (0xEDBAL && (l_793 <= (safe_rshift_func_uint16_t_u_s((255UL < (safe_div_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((*p_56) & (safe_sub_func_uint8_t_u_u(255UL, ((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((l_815 = (safe_add_func_int16_t_s_s(p_55.f0, p_54))) , 0x04L), p_1317->g_115.sb)), 1L)) || l_815)))), 0)), 250UL)) | l_793), p_1317->g_87.z))), 2)))))) != (*p_1317->g_248)))
        { /* block id: 459 */
            int16_t l_834 = 0x4D88L;
            int32_t l_844 = 1L;
            int32_t l_850 = 0L;
            int32_t l_853 = 0x1DDD9FD1L;
            int32_t l_854 = 0x3C7E0AC9L;
            int32_t l_855[7][5][4] = {{{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L}},{{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L}},{{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L}},{{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L}},{{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L}},{{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L}},{{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L},{1L,(-5L),0x7863DE71L,0x7863DE71L}}};
            uint32_t l_856 = 0x4B6268D4L;
            int i, j, k;
            for (p_1317->g_285.f3 = (-30); (p_1317->g_285.f3 != 12); p_1317->g_285.f3 = safe_add_func_uint16_t_u_u(p_1317->g_285.f3, 6))
            { /* block id: 462 */
                union U0 **l_829 = (void*)0;
                uint32_t *l_835 = (void*)0;
                int32_t l_839 = 6L;
                VECTOR(int32_t, 8) l_849 = (VECTOR(int32_t, 8))(0x332F6751L, (VECTOR(int32_t, 4))(0x332F6751L, (VECTOR(int32_t, 2))(0x332F6751L, 0x27578702L), 0x27578702L), 0x27578702L, 0x332F6751L, 0x27578702L);
                int32_t **l_861 = &p_1317->g_248;
                int i;
                p_56 = p_57;
                for (p_1317->g_300 = (-10); (p_1317->g_300 <= (-7)); p_1317->g_300++)
                { /* block id: 466 */
                    union U0 **l_827 = &p_1317->g_284;
                    int32_t l_845 = 0x25E3FB2CL;
                    int32_t l_846 = (-3L);
                    int32_t l_851[10] = {0x18CDA069L,0x18CDA069L,0x18CDA069L,0x18CDA069L,0x18CDA069L,0x18CDA069L,0x18CDA069L,0x18CDA069L,0x18CDA069L,0x18CDA069L};
                    uint32_t **l_860 = (void*)0;
                    uint32_t ***l_859 = &l_860;
                    int i;
                    for (p_1317->g_131 = 18; (p_1317->g_131 >= 44); p_1317->g_131 = safe_add_func_uint32_t_u_u(p_1317->g_131, 7))
                    { /* block id: 469 */
                        union U0 ***l_828 = &l_827;
                        uint64_t *l_830 = &p_1317->g_269.f1;
                        (*p_1317->g_248) |= (1L ^ (((*l_830) = (safe_unary_minus_func_uint8_t_u((((*p_1317->g_301) ^= (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((*l_828) = l_827) != l_829), 0x2E80L)), p_54))) > 255UL)))) <= (safe_unary_minus_func_int32_t_s((l_834 >= (l_835 != (void*)0))))));
                    }
                    for (p_1317->g_131 = 0; (p_1317->g_131 > 8); p_1317->g_131 = safe_add_func_int16_t_s_s(p_1317->g_131, 4))
                    { /* block id: 477 */
                        int64_t l_838 = 0x2C967A713D0BCFFFL;
                        int32_t *l_841 = &l_839;
                        int32_t *l_842[10] = {(void*)0,&p_1317->g_7,(void*)0,(void*)0,&p_1317->g_7,(void*)0,(void*)0,&p_1317->g_7,(void*)0,(void*)0};
                        int i;
                        --l_856;
                        return l_840;
                    }
                    (*l_859) = &p_57;
                }
                (*l_861) = p_56;
            }
            return p_1317->g_73;
        }
        else
        { /* block id: 486 */
            uint16_t *l_872[6][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int16_t **l_882 = &l_881;
            int32_t l_883 = 0L;
            int32_t *l_888[2][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int i, j, k;
            l_843.sb = (l_847 ^= (p_54 , ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(l_870.s23)).xyxyyyyyyxxyxyxx, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(246UL, ((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 4))(l_871.yyyx))))), ((++p_1317->g_116.w) < 0x4322L), p_1317->g_111.y, 0UL, ((~((((~((7L || ((((safe_mod_func_uint8_t_u_u(0x34L, p_1317->g_129)) == l_852[0]) != (safe_sub_func_uint64_t_u_u((((*l_882) = (((safe_div_func_int32_t_s_s((((*p_1317->g_248) = (-1L)) | l_793), 0x4B32AF18L)) | p_1317->g_141[6][1]) , l_881)) == l_872[5][2]), p_54))) >= l_883)) ^ p_55.f0)) , 1L) == p_1317->g_7) == 0UL)) > l_884), 0x90L, p_55.f0, l_840, ((VECTOR(uint8_t, 4))(0UL)))).sc5, ((VECTOR(uint8_t, 2))(0x6CL))))).yyxyyxyxxxyxyyxy))).sab, ((VECTOR(int16_t, 2))(0x41A2L))))).yyyyyxyxxyxxyyxx, ((VECTOR(int16_t, 16))((-1L)))))).s35ac, ((VECTOR(int16_t, 4))(0x4D41L))))).y, 9)), p_55.f0)) | l_883), p_54)), p_1317->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1317->tid, 39))])) , (*p_1317->g_248))));
            (*p_1317->g_248) |= ((void*)0 == p_1317->g_885[3][4]);
            --l_890[6][9];
        }
        l_898[2][4][2]++;
        (*p_56) = ((safe_mul_func_int16_t_s_s((p_54 >= ((*l_881) = (safe_div_func_int32_t_s_s((+((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((void*)0 != l_921), (0xD775L | ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x680643E3L)))), 1L, 0x436A9FC4L)).xyxwwzxy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_922.s3172)), (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((+p_55.f0))), p_54)), 0x5FFF01C8L, 0x1823FA29L, 0x0BA46FDBL)).s13)), 8L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(p_1317->g_926.ww)).xyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))((*p_1317->g_248), 1L, (*p_1317->g_248), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(p_1317->g_927.s3e5110eb1c1bae47)).s2c, ((VECTOR(int32_t, 2))(0x191AAA5EL, 0x0B88DC4FL))))), ((VECTOR(int32_t, 2))(p_1317->g_928.zx)), 0x35BF0512L)).s26, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), (-1L))), 0x0DBB04F6L, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(l_929.xyxy)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(0x67L, 0xB0L, 253UL, (p_1317->g_18.s3++), (p_1317->g_940 , 0x14L), 0x39L, ((VECTOR(uint8_t, 8))(0x8DL)), 0xD2L, 255UL)).s53, ((VECTOR(uint8_t, 2))(255UL))))).yxyxxxyy)).odd))).z, (*p_1317->g_248), 0x1A7CB7C2L, (-1L), 0x7BE9DF15L)).s75, ((VECTOR(int32_t, 2))(0x7D4373FCL))))), 1L)))).zzwwzwwxxxzywzyy, ((VECTOR(int32_t, 16))(0x069701D2L)), ((VECTOR(int32_t, 16))(3L))))))).s7f98))), 8L)).sb <= 2UL) && 1L)))), FAKE_DIVERGE(p_1317->group_1_offset, get_group_id(1), 10))), 0x1FE9416BF646FFC6L)) || (*p_1317->g_248)), 1L)), 15)) , l_793) | 0x49L), l_922.s5)) >= 0x566CDE24D31CEDFCL), p_54)) <= (*p_1317->g_301)) , p_1317->g_306[1][0][2]) >= 4294967295UL), p_1317->g_131)) || 0x1DL)), l_896)))), l_941)) <= l_942[4]);
        (*p_1317->g_248) = (*p_1317->g_248);
    }
    else
    { /* block id: 500 */
        uint8_t *l_949 = (void*)0;
        uint8_t **l_948 = &l_949;
        int32_t l_963 = 2L;
        int32_t *l_966 = &p_1317->g_300;
        int32_t **l_965[4][9] = {{&l_966,(void*)0,(void*)0,&l_966,&l_966,(void*)0,(void*)0,&l_966,&l_966},{&l_966,(void*)0,(void*)0,&l_966,&l_966,(void*)0,(void*)0,&l_966,&l_966},{&l_966,(void*)0,(void*)0,&l_966,&l_966,(void*)0,(void*)0,&l_966,&l_966},{&l_966,(void*)0,(void*)0,&l_966,&l_966,(void*)0,(void*)0,&l_966,&l_966}};
        VECTOR(uint32_t, 8) l_968 = (VECTOR(uint32_t, 8))(0x234A8582L, (VECTOR(uint32_t, 4))(0x234A8582L, (VECTOR(uint32_t, 2))(0x234A8582L, 4294967295UL), 4294967295UL), 4294967295UL, 0x234A8582L, 4294967295UL);
        VECTOR(uint8_t, 16) l_969 = (VECTOR(uint8_t, 16))(0x51L, (VECTOR(uint8_t, 4))(0x51L, (VECTOR(uint8_t, 2))(0x51L, 0UL), 0UL), 0UL, 0x51L, 0UL, (VECTOR(uint8_t, 2))(0x51L, 0UL), (VECTOR(uint8_t, 2))(0x51L, 0UL), 0x51L, 0UL, 0x51L, 0UL);
        union U1 l_973 = {0x754609F683A8A2BFL};
        int32_t *l_975 = &l_963;
        uint16_t *l_980[1][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        VECTOR(uint64_t, 2) l_1006 = (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL);
        uint64_t *l_1016 = &p_1317->g_283;
        uint64_t *l_1018 = &p_1317->g_283;
        VECTOR(uint16_t, 2) l_1063 = (VECTOR(uint16_t, 2))(0xE8F3L, 0x1752L);
        int32_t l_1105 = 0L;
        int32_t l_1106 = 0x1DC00421L;
        int32_t l_1108 = 0x1B21171FL;
        int32_t l_1109 = 1L;
        int i, j, k;
        for (p_1317->g_129 = 17; (p_1317->g_129 == 7); p_1317->g_129 = safe_sub_func_int16_t_s_s(p_1317->g_129, 1))
        { /* block id: 503 */
            uint64_t l_947 = 0UL;
            uint8_t ***l_950 = &l_948;
            VECTOR(uint16_t, 2) l_956 = (VECTOR(uint16_t, 2))(8UL, 65534UL);
            uint16_t *l_957[1][6];
            uint32_t ***l_960 = (void*)0;
            uint32_t **l_962 = &p_1317->g_113[2][0];
            uint32_t ***l_961 = &l_962;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_957[i][j] = &p_1317->g_269.f2;
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1317->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 39)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(0x9BD43547L, (((safe_add_func_uint16_t_u_u((0x4CL == l_947), (+GROUP_DIVERGE(2, 1)))) , ((*l_950) = l_948)) == p_1317->g_951), ((((p_1317->g_116.x ^= (p_1317->g_269.f2 = ((VECTOR(uint16_t, 2))(l_956.yx)).hi)) & 0UL) , ((safe_lshift_func_uint16_t_u_u((((((&p_57 == ((*l_961) = &p_1317->g_113[0][0])) < p_1317->g_7) < (l_963 != (*p_1317->g_248))) | p_1317->g_18.s0) < (*p_1317->g_248)), 8)) > 0xE336B588659E1BE2L)) && p_54), 0x491A0F92L, p_1317->g_115.s1, ((VECTOR(uint32_t, 2))(4294967294UL)), 0xF795EFD0L)).s6, 10))][(safe_mod_func_uint32_t_u_u(p_1317->tid, 39))]));
        }
        (*l_975) ^= (p_1317->g_940 &= (l_964 != ((((((*l_881) |= (((*p_1317->g_301) = (((p_1317->g_967 = p_56) == p_56) >= ((*p_1317->g_248) != ((VECTOR(uint32_t, 2))(l_968.s21)).even))) >= (((VECTOR(uint8_t, 16))(l_969.s76b9da93deced8ae)).sa , ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1317->g_970.xy)).xxxy)).hi)).xxxx)))).x))) | 0xD1AFL) <= (0x44FFL && (safe_rshift_func_int16_t_s_s(((l_973 , (((p_56 == (p_54 , l_974)) , p_1317->g_87.z) <= l_968.s2)) > l_922.s0), 13)))) ^ p_55.f0) , &p_1317->g_137[2])));
        for (p_1317->g_73 = 11; (p_1317->g_73 <= (-30)); --p_1317->g_73)
        { /* block id: 519 */
            int16_t l_1029 = (-7L);
            VECTOR(int32_t, 4) l_1038 = (VECTOR(int32_t, 4))(0x49A3B7D0L, (VECTOR(int32_t, 2))(0x49A3B7D0L, 0L), 0L);
            union U0 **l_1073[3][1];
            union U0 ***l_1072 = &l_1073[1][0];
            uint64_t *l_1089 = (void*)0;
            int32_t *l_1102 = (void*)0;
            int32_t *l_1103[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t l_1104 = 0x7D58L;
            int32_t l_1107 = 0x2A333505L;
            uint64_t l_1110 = 1UL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1073[i][j] = (void*)0;
            }
            for (l_897 = 0; (l_897 >= 15); ++l_897)
            { /* block id: 522 */
                uint16_t *l_981 = &p_1317->g_269.f2;
                int32_t l_1030 = 0x255AB72FL;
                VECTOR(int32_t, 2) l_1039 = (VECTOR(int32_t, 2))(0x2D4DB77FL, (-1L));
                int16_t ***l_1042 = &p_1317->g_137[0];
                VECTOR(uint16_t, 4) l_1062 = (VECTOR(uint16_t, 4))(0x82ECL, (VECTOR(uint16_t, 2))(0x82ECL, 65535UL), 65535UL);
                uint8_t ***l_1074 = &l_948;
                uint32_t *l_1087 = &l_941;
                uint64_t *l_1088 = (void*)0;
                VECTOR(uint16_t, 8) l_1099 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x0DB0L), 0x0DB0L), 0x0DB0L, 1UL, 0x0DB0L);
                VECTOR(uint16_t, 4) l_1101 = (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 65535UL), 65535UL);
                int i;
                (1 + 1);
            }
            --l_1110;
            for (p_1317->g_940 = 0; (p_1317->g_940 >= (-22)); p_1317->g_940 = safe_sub_func_uint32_t_u_u(p_1317->g_940, 6))
            { /* block id: 574 */
                int32_t l_1122 = 0L;
                for (p_1317->g_1078.f1 = 0; (p_1317->g_1078.f1 > 40); p_1317->g_1078.f1 = safe_add_func_int32_t_s_s(p_1317->g_1078.f1, 9))
                { /* block id: 577 */
                    uint64_t l_1119 = 0x2FCF555220755179L;
                    int8_t *l_1126 = &l_896;
                    (1 + 1);
                }
            }
        }
    }
    atomic_max(&p_1317->g_atomic_reduction[get_linear_group_id()], (((*p_1317->g_301) , ((safe_mul_func_uint16_t_u_u((l_896 > ((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_1317->group_1_offset, get_group_id(1), 10), ((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(p_1317->g_1132.yx)).xxyyyxxx, (uint8_t)l_922.s1))).s74)).yxxyyyyy, ((VECTOR(uint8_t, 4))(0xF2L, 0x09L, 0xC1L, 246UL)).yzyxwwwy))).s7401771670200414)).sf, 255UL, 255UL, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 16))(l_1133.xzwxyxxyyzwxzzyw)).seb16, ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1317->g_1134.yxyxxyyxyxxxxyyx)).sc486)).xyyywwwyzwxxwzzy, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))((((l_1135[0][1][1] != (void*)0) < (l_941 == (0x0FL <= FAKE_DIVERGE(p_1317->group_1_offset, get_group_id(1), 10)))) | (p_55.f0 >= p_55.f0)), 255UL, p_55.f0, ((VECTOR(uint8_t, 4))(7UL)), 0x13L)), (uint8_t)p_54))).s4013052412517157))).sbabb))), 0xABL, 249UL, 255UL, 0x60L, 252UL, ((VECTOR(uint8_t, 2))(0xF0L)), 0xEBL, 255UL)).s3 != (*p_1317->g_301)) , p_1317->g_36.x))) >= l_897)), 0x33A6L)) , l_897)) , (-1L)) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1317->v_collective += p_1317->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    for (p_1317->g_1049 = (-18); (p_1317->g_1049 <= 24); ++p_1317->g_1049)
    { /* block id: 594 */
        VECTOR(uint16_t, 16) l_1160 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0xE974L), 0xE974L), 0xE974L, 6UL, 0xE974L, (VECTOR(uint16_t, 2))(6UL, 0xE974L), (VECTOR(uint16_t, 2))(6UL, 0xE974L), 6UL, 0xE974L, 6UL, 0xE974L);
        int32_t l_1165 = 0x468233BFL;
        int i;
        (*p_1317->g_248) ^= (safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(255UL, p_55.f0)), 2UL));
        for (p_1317->g_1079.f2 = 0; (p_1317->g_1079.f2 >= 6); p_1317->g_1079.f2++)
        { /* block id: 598 */
            uint32_t l_1156 = 0xA7FDABEAL;
            uint16_t *l_1163 = &p_1317->g_285.f2;
            int32_t *l_1164 = &p_1317->g_1043;
            l_1165 ^= ((safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s(((((*p_1317->g_248) = (0xA1BDL ^ ((*p_56) <= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))((-2L), (*p_1317->g_248), ((VECTOR(int32_t, 2))(0x1CBB18C0L, 0x244D7BAFL)), ((VECTOR(int32_t, 2))(p_1317->g_1155.s32)), ((VECTOR(int32_t, 8))(l_1156, (-1L), (safe_sub_func_int16_t_s_s(l_1156, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_1159.s82c301245156eb9e)).s7ea7)).zwxzzxyywyxzxwxz, ((VECTOR(uint16_t, 4))(0xD74AL, ((VECTOR(uint16_t, 2))(0UL, 9UL)), 65535UL)).zzyxzwzxxzwywzwx, ((VECTOR(uint16_t, 4))(l_1160.sa69b)).yxyzzyxwyzwwzywy))).sba1e)).z)), ((VECTOR(int32_t, 4))(((*l_1164) = (safe_lshift_func_int8_t_s_u(((FAKE_DIVERGE(p_1317->local_1_offset, get_local_id(1), 10) & (((*l_1163) = ((*p_1317->g_301) && 4L)) != (-1L))) | 6UL), FAKE_DIVERGE(p_1317->local_0_offset, get_local_id(0), 10)))), 0x4C0E5F9AL, 0x19ACC377L, 0x2BE466D4L)), (-1L))), 0x30A4AAEFL, 0x1D649C7AL)).s36, (int32_t)(*p_56), (int32_t)l_1159.s1))), ((VECTOR(int32_t, 4))(0x6F3FD7CDL)), 1L, 0x59AFEF8BL)).s5))) && (*p_56)) , l_1160.s9), p_1317->g_1132.x)), GROUP_DIVERGE(1, 1))), l_1160.s2)) & p_55.f0);
            if (l_1166)
                continue;
            if ((*p_1317->g_248))
                break;
        }
    }
    return l_793;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1317->g_248
 */
uint32_t * func_61(uint32_t * p_62, int32_t  p_63, struct S2 * p_1317)
{ /* block id: 451 */
    int32_t **l_790 = &p_1317->g_248;
    (*l_790) = &p_1317->g_4;
    return &p_1317->g_114;
}


/* ------------------------------------------ */
/* 
 * reads : p_1317->g_87 p_1317->g_111 p_1317->g_36 p_1317->g_113 p_1317->g_115 p_1317->g_116 p_1317->g_4 p_1317->g_127 p_1317->g_18 p_1317->g_131 p_1317->g_137 p_1317->g_comm_values p_1317->g_13.f0 p_1317->g_7 p_1317->g_114 p_1317->l_comm_values p_1317->g_248 p_1317->g_283 p_1317->g_301 p_1317->g_285.f3
 * writes: p_1317->g_73 p_1317->g_131 p_1317->g_137 p_1317->g_13.f0 p_1317->g_116 p_1317->g_245 p_1317->g_141 p_1317->g_248 p_1317->g_300 p_1317->g_285.f3 p_1317->g_36
 */
uint32_t * func_64(uint64_t  p_65, struct S2 * p_1317)
{ /* block id: 26 */
    VECTOR(int32_t, 4) l_86 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1F8B71BDL), 0x1F8B71BDL);
    int8_t *l_90 = &p_1317->g_73;
    VECTOR(int32_t, 16) l_110 = (VECTOR(int32_t, 16))(0x651FD47AL, (VECTOR(int32_t, 4))(0x651FD47AL, (VECTOR(int32_t, 2))(0x651FD47AL, 4L), 4L), 4L, 0x651FD47AL, 4L, (VECTOR(int32_t, 2))(0x651FD47AL, 4L), (VECTOR(int32_t, 2))(0x651FD47AL, 4L), 0x651FD47AL, 4L, 0x651FD47AL, 4L);
    int16_t l_112 = (-1L);
    int32_t *l_299 = &p_1317->g_300;
    int32_t *l_783[5] = {&p_1317->g_4,&p_1317->g_4,&p_1317->g_4,&p_1317->g_4,&p_1317->g_4};
    int32_t l_784 = 8L;
    int32_t l_785[3][4][6] = {{{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L},{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L},{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L},{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L}},{{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L},{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L},{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L},{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L}},{{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L},{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L},{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L},{0x64BC7BC7L,0x52F7C598L,(-8L),0x52F7C598L,0x64BC7BC7L,0x64BC7BC7L}}};
    int16_t l_786 = 0L;
    uint32_t l_787 = 0x0C82FC14L;
    int i, j, k;
    p_1317->g_36.y = ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))((-5L), 1L)).xxxy, ((VECTOR(int32_t, 16))(0x372E676BL, ((VECTOR(int32_t, 16))(l_86.yzwzxzwzwxwyyxxx)).sf, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1317->g_87.yy)), 1L, 0L)), 0x56C434C7L, 0x0C84E1C3L, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x4EA68C7AL, 0L)).xyyxyxxy)).hi))), 0x53A1BEE3L, (((((*l_90) = 0x0CL) || (((void*)0 == l_90) < ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551610UL, 2UL)).xyxx)).w)) & ((func_91((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(1L, 4L, 0x345E967DL, 9L)).xzxyxzzw)).s3 , func_95((+(l_86.w , 0L)), (((*l_299) = (p_65 , ((+((safe_div_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_1317->local_0_offset, get_local_id(0), 10), (((((func_105((0x5BCCD91B382BD884L ^ (((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(l_110.s028ddfeca67439de)).odd, ((VECTOR(int32_t, 4))(p_1317->g_111.yxzy)).wxxxxyzx))).s30)), (-2L), 0x540276F7L, l_86.z, 0x34602AECL, (-1L), 1L))))).s1 & ((((((!l_112) || p_65) || p_65) == p_1317->g_36.x) != p_65) == p_65))), &p_1317->g_4, l_110.s7, p_1317->g_113[2][0], p_1317) == 1UL) , 0L) , p_1317->g_283) <= p_65) && (-1L)))) && l_110.s2), p_65)) || GROUP_DIVERGE(0, 1))) , (-3L)))) , p_65), &p_1317->g_114, p_65, p_1317->g_301, p_1317)), p_65, l_110.s5, p_1317) , 5L) > p_65)) != l_86.z), (*p_1317->g_248), 0x56001B73L, 0x47226995L, 1L)).sec)), ((VECTOR(int32_t, 2))(0x31BC077FL))))), (-9L), 5L, 0x562591E7L, 0x039529DBL, 0x3A1C14AFL, 0x0D5C2A48L, ((VECTOR(int32_t, 4))(0L)), 0x3F65A1F4L, 0x5BEF0314L)).sf51f))).z;
    --l_787;
    return l_299;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_91(uint32_t * p_92, int32_t  p_93, int16_t  p_94, struct S2 * p_1317)
{ /* block id: 126 */
    int32_t l_782 = 0x3546B5C5L;
    if ((atomic_inc(&p_1317->g_atomic_input[28 * get_linear_group_id() + 17]) == 3))
    { /* block id: 128 */
        VECTOR(uint16_t, 8) l_310 = (VECTOR(uint16_t, 8))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x07D3L), 0x07D3L), 0x07D3L, 65530UL, 0x07D3L);
        VECTOR(int8_t, 2) l_311 = (VECTOR(int8_t, 2))(0x10L, 0x3EL);
        uint32_t l_312 = 0UL;
        VECTOR(uint16_t, 2) l_313 = (VECTOR(uint16_t, 2))(1UL, 1UL);
        VECTOR(uint16_t, 8) l_314 = (VECTOR(uint16_t, 8))(0x7705L, (VECTOR(uint16_t, 4))(0x7705L, (VECTOR(uint16_t, 2))(0x7705L, 8UL), 8UL), 8UL, 0x7705L, 8UL);
        VECTOR(uint16_t, 4) l_315 = (VECTOR(uint16_t, 4))(0x7F93L, (VECTOR(uint16_t, 2))(0x7F93L, 0xE89AL), 0xE89AL);
        VECTOR(uint16_t, 4) l_316 = (VECTOR(uint16_t, 4))(0x984FL, (VECTOR(uint16_t, 2))(0x984FL, 0xCD45L), 0xCD45L);
        uint32_t l_317[8];
        int32_t l_318 = (-5L);
        int16_t l_319 = (-5L);
        int8_t l_468 = 0x36L;
        int8_t l_469 = (-9L);
        uint32_t l_666 = 0x124C06AFL;
        VECTOR(uint64_t, 2) l_667 = (VECTOR(uint64_t, 2))(9UL, 18446744073709551615UL);
        VECTOR(uint64_t, 4) l_668 = (VECTOR(uint64_t, 4))(0xDAFC17DECE89F4D2L, (VECTOR(uint64_t, 2))(0xDAFC17DECE89F4D2L, 0x9FA64256A23C4745L), 0x9FA64256A23C4745L);
        VECTOR(uint64_t, 2) l_669 = (VECTOR(uint64_t, 2))(0x863A581CC1FD3D40L, 0x0696210D769C012EL);
        uint32_t l_670 = 0UL;
        uint32_t l_673 = 0x93E5DCF4L;
        VECTOR(uint8_t, 2) l_674 = (VECTOR(uint8_t, 2))(0xF5L, 247UL);
        VECTOR(uint8_t, 4) l_675 = (VECTOR(uint8_t, 4))(0xF0L, (VECTOR(uint8_t, 2))(0xF0L, 0UL), 0UL);
        VECTOR(uint8_t, 2) l_676 = (VECTOR(uint8_t, 2))(247UL, 255UL);
        uint32_t l_677 = 0x4CCF3668L;
        VECTOR(int32_t, 8) l_678 = (VECTOR(int32_t, 8))(0x544B7EF2L, (VECTOR(int32_t, 4))(0x544B7EF2L, (VECTOR(int32_t, 2))(0x544B7EF2L, 0x241FA6A3L), 0x241FA6A3L), 0x241FA6A3L, 0x544B7EF2L, 0x241FA6A3L);
        VECTOR(int32_t, 2) l_679 = (VECTOR(int32_t, 2))(0x75B4BFFAL, 0x01608507L);
        VECTOR(int16_t, 4) l_680 = (VECTOR(int16_t, 4))(0x6041L, (VECTOR(int16_t, 2))(0x6041L, 0x5454L), 0x5454L);
        union U1 l_681 = {0x39AB6901451F327FL};
        int8_t l_682 = 1L;
        uint32_t l_683 = 0x230285AAL;
        int64_t l_684 = (-3L);
        VECTOR(uint8_t, 16) l_685 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
        VECTOR(int32_t, 16) l_686 = (VECTOR(int32_t, 16))(0x00117A2FL, (VECTOR(int32_t, 4))(0x00117A2FL, (VECTOR(int32_t, 2))(0x00117A2FL, (-8L)), (-8L)), (-8L), 0x00117A2FL, (-8L), (VECTOR(int32_t, 2))(0x00117A2FL, (-8L)), (VECTOR(int32_t, 2))(0x00117A2FL, (-8L)), 0x00117A2FL, (-8L), 0x00117A2FL, (-8L));
        int8_t l_687 = 0x44L;
        uint32_t l_688 = 0x6D090873L;
        int32_t l_689 = 0x78AC8768L;
        uint32_t l_690 = 0x364CA19EL;
        int8_t l_691 = (-3L);
        uint32_t l_692 = 4294967286UL;
        uint64_t l_693 = 0x6382483E7B001756L;
        int32_t *l_694[7] = {&l_318,&l_318,&l_318,&l_318,&l_318,&l_318,&l_318};
        int32_t *l_695 = &l_318;
        int16_t l_696 = 1L;
        uint64_t l_697 = 0xB9B76EF10597283BL;
        int8_t l_700 = 1L;
        union U1 l_701 = {-3L};
        union U1 l_702 = {0x227318F779E235E4L};
        uint32_t l_703[5][4][2] = {{{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L}},{{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L}},{{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L}},{{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L}},{{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L},{0xF788AF6FL,0x4A3286B5L}}};
        int32_t l_704 = (-1L);
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_317[i] = 4294967292UL;
        if ((((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_310.s2554263672154634)))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65529UL, 0xB788L)).yyxyyyxx)).s00)), GROUP_DIVERGE(1, 1), 8UL, (((VECTOR(int8_t, 8))(l_311.xxyyxxyy)).s0 , l_312), 1UL, 65535UL, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(0x5684L, 1UL)).xxxxyxxyxxyyxyyx, ((VECTOR(uint16_t, 16))(0xE5D2L, ((VECTOR(uint16_t, 2))(65535UL, 65535UL)), ((VECTOR(uint16_t, 8))(65527UL, 0UL, 65533UL, 65535UL, ((VECTOR(uint16_t, 2))(l_313.yy)), 0x942BL, 65533UL)), FAKE_DIVERGE(p_1317->group_0_offset, get_group_id(0), 10), 0x5D84L, ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 2))(1UL, 65530UL)).xxyxxyxyyxyxyyyy))).sa4))), 0x09F6L))))).sf33d, ((VECTOR(uint16_t, 4))(l_314.s5636))))), 65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_315.wyywwzyywxwyxywz)))).s3f)), 0x5AE7L, 0xA7B0L)), ((VECTOR(uint16_t, 2))(l_316.zy)).yyxxyxyyxxxyyxyx))).sb , ((l_317[4] , l_318) , l_319)))
        { /* block id: 129 */
            union U1 l_320 = {-1L};
            int32_t *l_321 = (void*)0;
            int32_t l_323[5][8][6] = {{{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L}},{{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L}},{{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L}},{{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L}},{{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L},{(-1L),1L,0L,(-2L),0x2C3C3448L,0L}}};
            int32_t *l_322 = &l_323[2][7][0];
            uint32_t l_339[7][10][3] = {{{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL}},{{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL}},{{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL}},{{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL}},{{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL}},{{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL}},{{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL},{0x25FBEC3DL,0xC5A2E17AL,0UL}}};
            int i, j, k;
            l_322 = ((l_320 = l_320) , l_321);
            for (l_323[2][7][0] = 0; (l_323[2][7][0] < (-5)); l_323[2][7][0] = safe_sub_func_uint64_t_u_u(l_323[2][7][0], 9))
            { /* block id: 134 */
                int8_t l_326 = (-3L);
                VECTOR(int32_t, 4) l_327 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                int32_t l_328 = 5L;
                int32_t l_329 = 3L;
                int i;
                l_328 = ((l_311.y = l_326) , ((VECTOR(int32_t, 2))(l_327.xw)).odd);
                l_327.y = l_329;
            }
            for (l_323[2][7][0] = 9; (l_323[2][7][0] >= (-19)); --l_323[2][7][0])
            { /* block id: 141 */
                int32_t l_333 = 3L;
                int32_t *l_332 = &l_333;
                l_322 = l_332;
                for (l_333 = 4; (l_333 != (-4)); l_333 = safe_sub_func_int16_t_s_s(l_333, 7))
                { /* block id: 145 */
                    int32_t l_336[9][4][6] = {{{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L}},{{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L}},{{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L}},{{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L}},{{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L}},{{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L}},{{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L}},{{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L}},{{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L},{0x3B376107L,1L,0L,1L,0x1876565AL,6L}}};
                    int i, j, k;
                    for (l_336[0][3][3] = (-2); (l_336[0][3][3] > 13); l_336[0][3][3] = safe_add_func_int16_t_s_s(l_336[0][3][3], 7))
                    { /* block id: 148 */
                        l_318 = 0x36FDD789L;
                    }
                }
            }
            l_318 = l_339[1][8][0];
        }
        else
        { /* block id: 154 */
            int32_t l_341 = (-1L);
            int32_t *l_340 = &l_341;
            uint32_t l_342[1];
            int32_t *l_466 = &l_341;
            int32_t *l_467 = &l_341;
            int i;
            for (i = 0; i < 1; i++)
                l_342[i] = 4294967295UL;
            l_340 = (void*)0;
            ++l_342[0];
            for (l_341 = (-3); (l_341 >= (-30)); l_341 = safe_sub_func_uint32_t_u_u(l_341, 5))
            { /* block id: 159 */
                int16_t l_347 = 0x45B4L;
                int16_t l_386 = 0x0AD1L;
                uint16_t l_387 = 0x938BL;
                int32_t l_389 = 0x181E5381L;
                int32_t *l_388 = &l_389;
                uint32_t l_390 = 1UL;
                l_318 = l_347;
                for (l_347 = 18; (l_347 > (-10)); --l_347)
                { /* block id: 163 */
                    VECTOR(int32_t, 4) l_350 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-7L)), (-7L));
                    VECTOR(int32_t, 4) l_351 = (VECTOR(int32_t, 4))(0x03E7F666L, (VECTOR(int32_t, 2))(0x03E7F666L, 0x0AE7E543L), 0x0AE7E543L);
                    int32_t l_362 = 1L;
                    uint32_t l_363 = 4294967294UL;
                    int i;
                    if (((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(l_350.xwyz)).wzxxzywzywwzxxyz, ((VECTOR(int32_t, 4))(l_351.zwwy)).yzxzzzxxzzyxxwzx))).sc)
                    { /* block id: 164 */
                        int16_t l_352 = 0x3F53L;
                        uint32_t l_353 = 1UL;
                        uint32_t l_356 = 0xADCBBDC8L;
                        --l_353;
                        l_356 &= 0x75EC11C4L;
                    }
                    else
                    { /* block id: 167 */
                        uint32_t l_357 = 0xB297B13DL;
                        uint8_t l_360 = 3UL;
                        uint32_t l_361[8][7] = {{0x36C4797FL,0x785E3D29L,0x501ECD0FL,0x785E3D29L,0x36C4797FL,0x36C4797FL,0x785E3D29L},{0x36C4797FL,0x785E3D29L,0x501ECD0FL,0x785E3D29L,0x36C4797FL,0x36C4797FL,0x785E3D29L},{0x36C4797FL,0x785E3D29L,0x501ECD0FL,0x785E3D29L,0x36C4797FL,0x36C4797FL,0x785E3D29L},{0x36C4797FL,0x785E3D29L,0x501ECD0FL,0x785E3D29L,0x36C4797FL,0x36C4797FL,0x785E3D29L},{0x36C4797FL,0x785E3D29L,0x501ECD0FL,0x785E3D29L,0x36C4797FL,0x36C4797FL,0x785E3D29L},{0x36C4797FL,0x785E3D29L,0x501ECD0FL,0x785E3D29L,0x36C4797FL,0x36C4797FL,0x785E3D29L},{0x36C4797FL,0x785E3D29L,0x501ECD0FL,0x785E3D29L,0x36C4797FL,0x36C4797FL,0x785E3D29L},{0x36C4797FL,0x785E3D29L,0x501ECD0FL,0x785E3D29L,0x36C4797FL,0x36C4797FL,0x785E3D29L}};
                        int i, j;
                        l_357--;
                        l_350.x = 8L;
                        l_361[2][4] |= l_360;
                    }
                    l_363--;
                    if (((VECTOR(int32_t, 2))(0x0A9F0DDAL, (-1L))).even)
                    { /* block id: 173 */
                        int32_t l_367 = 0x1E3CBB9DL;
                        int32_t *l_366 = &l_367;
                        VECTOR(int32_t, 16) l_368 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x29F1A553L), 0x29F1A553L), 0x29F1A553L, 8L, 0x29F1A553L, (VECTOR(int32_t, 2))(8L, 0x29F1A553L), (VECTOR(int32_t, 2))(8L, 0x29F1A553L), 8L, 0x29F1A553L, 8L, 0x29F1A553L);
                        VECTOR(int32_t, 16) l_369 = (VECTOR(int32_t, 16))(0x7EF13FA2L, (VECTOR(int32_t, 4))(0x7EF13FA2L, (VECTOR(int32_t, 2))(0x7EF13FA2L, 0x1A4B506AL), 0x1A4B506AL), 0x1A4B506AL, 0x7EF13FA2L, 0x1A4B506AL, (VECTOR(int32_t, 2))(0x7EF13FA2L, 0x1A4B506AL), (VECTOR(int32_t, 2))(0x7EF13FA2L, 0x1A4B506AL), 0x7EF13FA2L, 0x1A4B506AL, 0x7EF13FA2L, 0x1A4B506AL);
                        VECTOR(int32_t, 2) l_370 = (VECTOR(int32_t, 2))(0x7998BFFEL, (-10L));
                        VECTOR(int32_t, 8) l_371 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                        VECTOR(int32_t, 8) l_372 = (VECTOR(int32_t, 8))(0x588AF3C1L, (VECTOR(int32_t, 4))(0x588AF3C1L, (VECTOR(int32_t, 2))(0x588AF3C1L, 0x79645459L), 0x79645459L), 0x79645459L, 0x588AF3C1L, 0x79645459L);
                        VECTOR(int32_t, 4) l_373 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5FD8FBAFL), 0x5FD8FBAFL);
                        uint16_t l_374 = 0x6CE3L;
                        VECTOR(int32_t, 4) l_375 = (VECTOR(int32_t, 4))(0x191DBFDBL, (VECTOR(int32_t, 2))(0x191DBFDBL, (-4L)), (-4L));
                        uint32_t l_376 = 0x12244177L;
                        int16_t l_377 = (-8L);
                        int64_t l_378 = 3L;
                        int i;
                        l_340 = l_366;
                        l_340 = (void*)0;
                        l_351.y = (l_362 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((((*l_366) = 0x019478C2L) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_368.s51)).xxyyxyyy, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0L, 0L)).yxyy, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_369.s3a8b11744228ce52)))).lo, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_370.yyxx)).odd, ((VECTOR(int32_t, 2))(0L, 0L))))).xyxyyyxx, ((VECTOR(int32_t, 4))(l_371.s2256)).xxywyzzw))).hi, ((VECTOR(int32_t, 16))(l_372.s3203601634034751)).sc489))).wyywyxwx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_373.yw)).yxxx)).z, l_374, (-9L), 0x3D7CD2FFL)).hi))).xxyxxyxx, ((VECTOR(int32_t, 8))(l_375.zwwzwzxx))))), 0x56C16A3DL, ((VECTOR(int32_t, 4))(0x5A4CF2B0L, l_376, 0x77C0B4E0L, 0L)), 0x27F24CEAL, (-1L))).even, ((VECTOR(int32_t, 2))(0L, (-10L))).yyyyyyyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_377, ((VECTOR(int32_t, 2))(0x1DC5A715L, 0x778BDB11L)), 0x48F741A4L)).odd)), 0x5EC48159L, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, (-8L))).yyxxyyxy)).s77, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4714396FL, 0x2C2775C3L)), (-1L), 1L)).hi))).odd, 0L, 0L, 0x6D2A0CB5L, 0x2A84B358L)).s77)), 6L, 0x1BFB4BDEL)).zyzzyxzz))).s12)).yyxxxxxx))))).s4074337223477751)).s3), l_378, ((VECTOR(int32_t, 2))(0x450B3B87L, 1L)), 0x3FEA9CEBL, 0x280BB46DL, (-4L), 4L)).s16)).lo);
                    }
                    else
                    { /* block id: 179 */
                        int8_t l_379 = 0x00L;
                        VECTOR(int8_t, 16) l_380 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0L), 0L), 0L, 7L, 0L, (VECTOR(int8_t, 2))(7L, 0L), (VECTOR(int8_t, 2))(7L, 0L), 7L, 0L, 7L, 0L);
                        uint16_t l_381 = 65526UL;
                        int32_t l_382 = (-1L);
                        int8_t l_383 = 0x18L;
                        int16_t l_384 = 0x599FL;
                        int64_t l_385 = (-5L);
                        int i;
                        l_350.y ^= (l_351.z = l_379);
                        l_385 &= ((l_319 = (((l_311.y |= ((VECTOR(int8_t, 16))(l_380.sc6ec00230ef702f2)).se) , 0x0BAADAA9779181DBL) , l_381)) , (l_382 , ((l_342[0] = l_383) , l_384)));
                    }
                }
                l_340 = (l_386 , ((l_387 = ((VECTOR(int64_t, 2))(0L, 0x2A5704FA6685AF39L)).odd) , l_388));
                if (l_390)
                { /* block id: 190 */
                    uint32_t l_391 = 0xE95191E8L;
                    int8_t l_392 = 1L;
                    int32_t l_395 = (-3L);
                    int32_t l_396 = 1L;
                    VECTOR(int32_t, 2) l_427 = (VECTOR(int32_t, 2))(0x4BF7AA0FL, 0x3CD9572BL);
                    int i;
                    if (((l_311.x = (l_391 , (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(1UL, 0x126A8930L)))).hi , 0L))) , l_392))
                    { /* block id: 192 */
                        int32_t l_394 = 0L;
                        int32_t *l_393 = &l_394;
                        l_340 = l_393;
                    }
                    else
                    { /* block id: 194 */
                        l_340 = (void*)0;
                    }
                    (*l_388) |= l_395;
                    if (l_396)
                    { /* block id: 198 */
                        uint8_t l_397 = 255UL;
                        uint8_t l_400 = 0x82L;
                        VECTOR(int32_t, 2) l_401 = (VECTOR(int32_t, 2))(0L, 8L);
                        VECTOR(uint16_t, 2) l_402 = (VECTOR(uint16_t, 2))(0x5B35L, 0xF0B3L);
                        VECTOR(int16_t, 8) l_403 = (VECTOR(int16_t, 8))(0x7AB5L, (VECTOR(int16_t, 4))(0x7AB5L, (VECTOR(int16_t, 2))(0x7AB5L, (-8L)), (-8L)), (-8L), 0x7AB5L, (-8L));
                        uint64_t l_404 = 18446744073709551611UL;
                        int32_t l_405 = 0x008A87DFL;
                        uint8_t l_406[5];
                        VECTOR(uint16_t, 8) l_407 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 7UL), 7UL), 7UL, 1UL, 7UL);
                        VECTOR(int16_t, 4) l_408 = (VECTOR(int16_t, 4))(0x440BL, (VECTOR(int16_t, 2))(0x440BL, 0x349BL), 0x349BL);
                        VECTOR(int16_t, 16) l_409 = (VECTOR(int16_t, 16))(0x2AA5L, (VECTOR(int16_t, 4))(0x2AA5L, (VECTOR(int16_t, 2))(0x2AA5L, 0L), 0L), 0L, 0x2AA5L, 0L, (VECTOR(int16_t, 2))(0x2AA5L, 0L), (VECTOR(int16_t, 2))(0x2AA5L, 0L), 0x2AA5L, 0L, 0x2AA5L, 0L);
                        VECTOR(int16_t, 16) l_410 = (VECTOR(int16_t, 16))(0x1776L, (VECTOR(int16_t, 4))(0x1776L, (VECTOR(int16_t, 2))(0x1776L, 0x027FL), 0x027FL), 0x027FL, 0x1776L, 0x027FL, (VECTOR(int16_t, 2))(0x1776L, 0x027FL), (VECTOR(int16_t, 2))(0x1776L, 0x027FL), 0x1776L, 0x027FL, 0x1776L, 0x027FL);
                        VECTOR(int16_t, 16) l_411 = (VECTOR(int16_t, 16))(0x06A1L, (VECTOR(int16_t, 4))(0x06A1L, (VECTOR(int16_t, 2))(0x06A1L, 0x4169L), 0x4169L), 0x4169L, 0x06A1L, 0x4169L, (VECTOR(int16_t, 2))(0x06A1L, 0x4169L), (VECTOR(int16_t, 2))(0x06A1L, 0x4169L), 0x06A1L, 0x4169L, 0x06A1L, 0x4169L);
                        VECTOR(int16_t, 2) l_412 = (VECTOR(int16_t, 2))((-6L), 0x4447L);
                        VECTOR(int16_t, 2) l_413 = (VECTOR(int16_t, 2))((-1L), 0x749AL);
                        VECTOR(int16_t, 8) l_414 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L));
                        VECTOR(int16_t, 16) l_415 = (VECTOR(int16_t, 16))(0x6F78L, (VECTOR(int16_t, 4))(0x6F78L, (VECTOR(int16_t, 2))(0x6F78L, 0x195AL), 0x195AL), 0x195AL, 0x6F78L, 0x195AL, (VECTOR(int16_t, 2))(0x6F78L, 0x195AL), (VECTOR(int16_t, 2))(0x6F78L, 0x195AL), 0x6F78L, 0x195AL, 0x6F78L, 0x195AL);
                        int32_t l_416[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
                        VECTOR(int16_t, 2) l_417 = (VECTOR(int16_t, 2))(0x66E7L, (-1L));
                        VECTOR(int16_t, 4) l_418 = (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x070EL), 0x070EL);
                        int32_t l_419 = 0x75E105C0L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_406[i] = 253UL;
                        --l_397;
                        l_419 = (l_400 , ((*l_388) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(0x40B2556EL, (-6L))).xyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_401.xx)), 0x3EB6834CL, 0x7752F814L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(0x0BA9L, (-1L), 0x71D3L, 8L)).wwzyyxzyywyzzyzw, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(0xFC56L, 65529UL, 0x5C50L, 0xD0A8L)).yzyxyzxz, ((VECTOR(uint16_t, 8))(0x2446L, 8UL, ((VECTOR(uint16_t, 4))(l_402.yxyx)).w, 1UL, ((((l_317[6] = 0UL) , ((l_319 = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_403.s7720)).even)).odd) , (l_396 |= l_404))) , FAKE_DIVERGE(p_1317->global_2_offset, get_global_id(2), 10)) , l_405), l_406[1], 0x0CE4L, 0x35BFL))))).s4712713557341277))).sa4, ((VECTOR(uint16_t, 16))(l_407.s2102726021011551)).s40))).yyyxxxxyyyxyxxyx)).s4431, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_408.zzxyxwxy)).s50)).yxyy)).odd, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_409.sf27f)).wyyywzyx)).s0762545775557374, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(l_410.s0345)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_411.s8d880740)).s5176172646651200)).s53b4))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_412.yyxy)).zwyxywwzyxxyzyzy)).scc61))).zzyyzxywzywyywyy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_413.yyxyyyxxyxyxxxxx)).s093d)).ywzzyzxxxxzzzzzz))).s138c, ((VECTOR(int16_t, 16))(l_414.s2153245571751565)).s0cd5))).xxwwxzwx)).s76, ((VECTOR(int16_t, 4))(l_415.s5938)).odd))), ((VECTOR(int16_t, 4))(l_416[1], ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(l_417.yxyxyxyx)).s60, ((VECTOR(int16_t, 16))(l_418.zzwyywyxywxwxxwx)).s5c)))))), 2L)), (-1L), 5L)).s0175510715301075))).even)).s21))).yxyx))).zxwxwwwxzyxwwzyw))).s00)).xyyy))).zxwwwxww)).s7560402306044464)).lo)).s2));
                    }
                    else
                    { /* block id: 205 */
                        int16_t l_420 = 0x714BL;
                        int32_t l_422[7][7] = {{0x501C3234L,0x501C3234L,(-1L),0x056A916DL,0x030C2F71L,1L,1L},{0x501C3234L,0x501C3234L,(-1L),0x056A916DL,0x030C2F71L,1L,1L},{0x501C3234L,0x501C3234L,(-1L),0x056A916DL,0x030C2F71L,1L,1L},{0x501C3234L,0x501C3234L,(-1L),0x056A916DL,0x030C2F71L,1L,1L},{0x501C3234L,0x501C3234L,(-1L),0x056A916DL,0x030C2F71L,1L,1L},{0x501C3234L,0x501C3234L,(-1L),0x056A916DL,0x030C2F71L,1L,1L},{0x501C3234L,0x501C3234L,(-1L),0x056A916DL,0x030C2F71L,1L,1L}};
                        int32_t *l_421 = &l_422[3][3];
                        int32_t l_423 = 0x72C7930DL;
                        VECTOR(uint32_t, 16) l_424 = (VECTOR(uint32_t, 16))(0x799656BDL, (VECTOR(uint32_t, 4))(0x799656BDL, (VECTOR(uint32_t, 2))(0x799656BDL, 2UL), 2UL), 2UL, 0x799656BDL, 2UL, (VECTOR(uint32_t, 2))(0x799656BDL, 2UL), (VECTOR(uint32_t, 2))(0x799656BDL, 2UL), 0x799656BDL, 2UL, 0x799656BDL, 2UL);
                        int i, j;
                        l_420 = (-1L);
                        l_388 = (l_340 = l_421);
                        l_424.s0++;
                    }
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_427.xy)).xyxx)))).wzywxxwxzzzzwyyx)).s1)
                    { /* block id: 211 */
                        uint32_t l_428 = 3UL;
                        uint8_t l_429[1];
                        uint8_t l_430 = 247UL;
                        int16_t l_433 = 0x3D3CL;
                        uint16_t l_434 = 0x4F63L;
                        uint32_t l_437 = 1UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_429[i] = 0x99L;
                        l_429[0] |= l_428;
                        l_430--;
                        l_434++;
                        l_389 |= l_437;
                    }
                    else
                    { /* block id: 216 */
                        uint64_t l_438 = 0xC161392C0F20892AL;
                        int64_t l_439 = 9L;
                        uint16_t l_440[3][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_440[i][j] = 0xEC3EL;
                        }
                        l_318 ^= (l_427.x = l_438);
                        l_440[0][0] ^= l_439;
                    }
                }
                else
                { /* block id: 221 */
                    uint32_t l_441 = 0x8A32D755L;
                    int16_t l_444 = (-4L);
                    uint64_t l_445 = 0x983047517F05DFF2L;
                    uint64_t l_463 = 0x0EBC55500E8978B6L;
                    l_441++;
                    l_445++;
                    for (l_445 = 21; (l_445 >= 42); l_445++)
                    { /* block id: 226 */
                        int32_t **l_450[1][2];
                        uint8_t l_451[10][1][9] = {{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}},{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}},{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}},{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}},{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}},{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}},{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}},{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}},{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}},{{0x59L,0x84L,247UL,247UL,0x84L,0x59L,0UL,0xF1L,247UL}}};
                        VECTOR(int32_t, 2) l_452 = (VECTOR(int32_t, 2))(0x2B9E8D76L, 0x24387986L);
                        VECTOR(int32_t, 2) l_453 = (VECTOR(int32_t, 2))((-1L), 4L);
                        VECTOR(int32_t, 4) l_454 = (VECTOR(int32_t, 4))(0x2FF417EDL, (VECTOR(int32_t, 2))(0x2FF417EDL, (-10L)), (-10L));
                        int32_t l_455 = 0x79787B41L;
                        int16_t l_456 = 0x0881L;
                        int32_t l_457 = 0x2522365AL;
                        int16_t l_458 = (-1L);
                        int32_t l_459[4][3][5] = {{{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L},{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L},{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L}},{{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L},{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L},{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L}},{{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L},{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L},{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L}},{{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L},{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L},{0x45C5069FL,0x50F025DFL,0x6B916610L,0x5DB96E67L,0x5A57A006L}}};
                        uint16_t l_460 = 0xBAC1L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_450[i][j] = (void*)0;
                        }
                        l_450[0][1] = (void*)0;
                        l_451[7][0][2] = 1L;
                        l_454.z = (l_453.y = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(l_452.yxyyyxyxyyyxxxxx)).hi, ((VECTOR(int32_t, 2))(l_453.yy)).yyyyyyxy))), ((VECTOR(int32_t, 2))(l_454.ww)), (-10L), 0L, ((VECTOR(int32_t, 2))(1L, 0x0BDE55F1L)), 1L))))).s5);
                        l_460++;
                    }
                    l_463--;
                }
            }
            l_467 = l_466;
        }
        if ((l_469 = l_468))
        { /* block id: 239 */
            uint8_t l_472 = 0UL;
            uint8_t *l_471 = &l_472;
            uint8_t **l_470[5][10] = {{&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471},{&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471},{&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471},{&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471},{&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471}};
            uint8_t **l_473[7][1];
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_473[i][j] = &l_471;
            }
            l_473[6][0] = l_470[2][8];
            for (l_472 = 11; (l_472 > 14); l_472 = safe_add_func_uint32_t_u_u(l_472, 5))
            { /* block id: 243 */
                uint16_t l_476 = 0x4E0DL;
                int32_t l_507[2];
                int32_t *l_506 = &l_507[1];
                int32_t *l_508 = &l_507[1];
                int8_t l_509 = (-1L);
                uint64_t l_510 = 0x5C517889309E7A69L;
                uint64_t l_511[9] = {0x8CB8FD7554682B95L,3UL,0x8CB8FD7554682B95L,0x8CB8FD7554682B95L,3UL,0x8CB8FD7554682B95L,0x8CB8FD7554682B95L,3UL,0x8CB8FD7554682B95L};
                int32_t *l_512 = (void*)0;
                int32_t *l_513 = &l_507[0];
                int32_t *l_514 = &l_507[1];
                int32_t *l_515 = &l_507[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_507[i] = 0x224D6D7FL;
                if (l_476)
                { /* block id: 244 */
                    int16_t l_477 = 0x695DL;
                    int32_t l_479 = 0x503F3B1FL;
                    int32_t *l_478[8][4] = {{&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479}};
                    int32_t *l_480[5];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_480[i] = &l_479;
                    l_477 |= 0L;
                    l_480[4] = (l_478[3][1] = (void*)0);
                    l_318 = (-1L);
                }
                else
                { /* block id: 249 */
                    uint32_t l_481 = 0x68E49939L;
                    int32_t l_505[3][7][7] = {{{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L}},{{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L}},{{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L},{0L,(-1L),0x1F90FC6AL,1L,0x1F90FC6AL,(-1L),0L}}};
                    int32_t *l_504 = &l_505[0][4][4];
                    int i, j, k;
                    if ((l_318 = (FAKE_DIVERGE(p_1317->local_1_offset, get_local_id(1), 10) , l_481)))
                    { /* block id: 251 */
                        VECTOR(int32_t, 16) l_482 = (VECTOR(int32_t, 16))(0x757A2227L, (VECTOR(int32_t, 4))(0x757A2227L, (VECTOR(int32_t, 2))(0x757A2227L, 0x7C2A7F37L), 0x7C2A7F37L), 0x7C2A7F37L, 0x757A2227L, 0x7C2A7F37L, (VECTOR(int32_t, 2))(0x757A2227L, 0x7C2A7F37L), (VECTOR(int32_t, 2))(0x757A2227L, 0x7C2A7F37L), 0x757A2227L, 0x7C2A7F37L, 0x757A2227L, 0x7C2A7F37L);
                        int16_t l_483 = 0L;
                        int32_t l_484 = 0x13E43C44L;
                        VECTOR(int32_t, 16) l_485 = (VECTOR(int32_t, 16))(0x2806FD95L, (VECTOR(int32_t, 4))(0x2806FD95L, (VECTOR(int32_t, 2))(0x2806FD95L, 0x15EAD101L), 0x15EAD101L), 0x15EAD101L, 0x2806FD95L, 0x15EAD101L, (VECTOR(int32_t, 2))(0x2806FD95L, 0x15EAD101L), (VECTOR(int32_t, 2))(0x2806FD95L, 0x15EAD101L), 0x2806FD95L, 0x15EAD101L, 0x2806FD95L, 0x15EAD101L);
                        int32_t l_486 = 0x65DB6C56L;
                        uint64_t l_487 = 0x0C3E298ADBFD8D1DL;
                        int8_t l_488 = 1L;
                        VECTOR(int32_t, 16) l_489 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1EA73088L), 0x1EA73088L), 0x1EA73088L, 0L, 0x1EA73088L, (VECTOR(int32_t, 2))(0L, 0x1EA73088L), (VECTOR(int32_t, 2))(0L, 0x1EA73088L), 0L, 0x1EA73088L, 0L, 0x1EA73088L);
                        uint16_t l_490 = 0UL;
                        uint32_t l_491 = 0x78E7F567L;
                        uint8_t l_492 = 5UL;
                        uint16_t l_493 = 0x1542L;
                        uint32_t l_494 = 4294967295UL;
                        int i;
                        l_485.sd = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_482.s47)).yyyxxxyyyyxyxyxy)).s1351)), l_483, (l_318 = l_484), 1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x29C35DBBL, 0x0AFDBF24L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_485.s62)), 0x1DB1C5DFL, 0x08CA67CBL)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(1L, 1L)), (int32_t)(l_486 , ((l_310.s4 = FAKE_DIVERGE(p_1317->global_0_offset, get_global_id(0), 10)) , l_487)), (int32_t)l_488))), (l_318 = 0x10C59D2DL), ((VECTOR(int32_t, 2))(l_489.s94)).odd, 0L, ((VECTOR(int32_t, 4))(((((l_490 , l_491) , l_492) , l_493) , l_494), 0x05A8B696L, 0x079AC77CL, (-3L))), (-1L))).even)), 9L)).s2;
                    }
                    else
                    { /* block id: 256 */
                        int32_t *l_495 = (void*)0;
                        int32_t l_497 = 0x145D926BL;
                        int32_t *l_496 = &l_497;
                        l_496 = l_495;
                    }
                    for (l_481 = (-21); (l_481 <= 32); l_481 = safe_add_func_int8_t_s_s(l_481, 7))
                    { /* block id: 261 */
                        uint16_t l_500 = 65527UL;
                        uint16_t l_501 = 0x8131L;
                        l_500 |= 0L;
                        l_501--;
                    }
                    l_504 = (void*)0;
                }
                l_508 = l_506;
                l_318 &= ((l_509 , l_510) , l_511[5]);
                l_515 = (l_514 = (l_513 = l_512));
            }
        }
        else
        { /* block id: 273 */
            int64_t l_516 = 1L;
            VECTOR(int32_t, 4) l_517 = (VECTOR(int32_t, 4))(0x47B3431BL, (VECTOR(int32_t, 2))(0x47B3431BL, 1L), 1L);
            VECTOR(int32_t, 8) l_518 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 1L), 1L), 1L, (-8L), 1L);
            VECTOR(int32_t, 8) l_519 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x095AAFB4L), 0x095AAFB4L), 0x095AAFB4L, 5L, 0x095AAFB4L);
            VECTOR(int32_t, 4) l_520 = (VECTOR(int32_t, 4))(0x10A87CF5L, (VECTOR(int32_t, 2))(0x10A87CF5L, 0x2A3B3DDAL), 0x2A3B3DDAL);
            int32_t l_521 = 0L;
            VECTOR(int32_t, 2) l_576 = (VECTOR(int32_t, 2))(0x708A91B3L, 0x75282DC6L);
            VECTOR(uint32_t, 2) l_577 = (VECTOR(uint32_t, 2))(0x15BA1845L, 4294967287UL);
            VECTOR(uint32_t, 4) l_578 = (VECTOR(uint32_t, 4))(0x27ACBECBL, (VECTOR(uint32_t, 2))(0x27ACBECBL, 0UL), 0UL);
            VECTOR(uint32_t, 16) l_579 = (VECTOR(uint32_t, 16))(0xB70CEABDL, (VECTOR(uint32_t, 4))(0xB70CEABDL, (VECTOR(uint32_t, 2))(0xB70CEABDL, 0xF09924CDL), 0xF09924CDL), 0xF09924CDL, 0xB70CEABDL, 0xF09924CDL, (VECTOR(uint32_t, 2))(0xB70CEABDL, 0xF09924CDL), (VECTOR(uint32_t, 2))(0xB70CEABDL, 0xF09924CDL), 0xB70CEABDL, 0xF09924CDL, 0xB70CEABDL, 0xF09924CDL);
            VECTOR(uint16_t, 2) l_580 = (VECTOR(uint16_t, 2))(65532UL, 0x0041L);
            VECTOR(uint16_t, 16) l_581 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL);
            uint16_t l_582 = 9UL;
            VECTOR(int32_t, 2) l_583 = (VECTOR(int32_t, 2))(8L, 1L);
            VECTOR(int32_t, 16) l_584 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x5911F374L), 0x5911F374L), 0x5911F374L, (-8L), 0x5911F374L, (VECTOR(int32_t, 2))((-8L), 0x5911F374L), (VECTOR(int32_t, 2))((-8L), 0x5911F374L), (-8L), 0x5911F374L, (-8L), 0x5911F374L);
            uint16_t l_585 = 0xFA00L;
            int16_t l_586 = (-4L);
            int16_t l_587[7][4][9] = {{{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL}},{{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL}},{{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL}},{{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL}},{{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL}},{{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL}},{{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL},{0x7752L,0x407AL,0x2A59L,0x70B7L,2L,0x3201L,(-1L),(-1L),0x7CBFL}}};
            int8_t l_588[7][5] = {{8L,0x76L,8L,8L,0x76L},{8L,0x76L,8L,8L,0x76L},{8L,0x76L,8L,8L,0x76L},{8L,0x76L,8L,8L,0x76L},{8L,0x76L,8L,8L,0x76L},{8L,0x76L,8L,8L,0x76L},{8L,0x76L,8L,8L,0x76L}};
            int16_t l_589 = 0x246DL;
            int i, j, k;
            l_521 ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(6L, l_516, 0x59FED71FL, ((VECTOR(int32_t, 2))((-2L), (-1L))), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_517.xyzywxwz)).hi)))).xzyxzwwxyywxxxxw)).s8f, ((VECTOR(int32_t, 4))(l_518.s3667)).lo, ((VECTOR(int32_t, 4))(l_519.s6544)).hi))), (-6L))))).lo)), ((VECTOR(int32_t, 8))(l_520.zywzwyyw)).lo))).hi)).yyxy)).odd)).hi;
            for (l_520.x = 23; (l_520.x < 11); l_520.x = safe_sub_func_uint32_t_u_u(l_520.x, 1))
            { /* block id: 277 */
                uint32_t l_524 = 4294967295UL;
                VECTOR(int32_t, 4) l_527 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L));
                int32_t *l_575 = (void*)0;
                int i;
                ++l_524;
                if ((l_517.x &= ((VECTOR(int32_t, 2))(l_527.xw)).even))
                { /* block id: 280 */
                    VECTOR(int8_t, 4) l_528 = (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 1L), 1L);
                    uint32_t l_529 = 0x1C0361D4L;
                    uint8_t l_530 = 0xF0L;
                    uint8_t l_531 = 7UL;
                    uint32_t l_532 = 0x58E42988L;
                    VECTOR(int32_t, 8) l_533 = (VECTOR(int32_t, 8))(0x6E370B90L, (VECTOR(int32_t, 4))(0x6E370B90L, (VECTOR(int32_t, 2))(0x6E370B90L, 0L), 0L), 0L, 0x6E370B90L, 0L);
                    uint64_t l_534 = 0x468CD7E972DD7835L;
                    VECTOR(int32_t, 4) l_535 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7E92F90EL), 0x7E92F90EL);
                    VECTOR(int32_t, 2) l_536 = (VECTOR(int32_t, 2))(1L, (-1L));
                    VECTOR(int32_t, 2) l_537 = (VECTOR(int32_t, 2))(0x539DEBB5L, 6L);
                    VECTOR(int32_t, 16) l_538 = (VECTOR(int32_t, 16))(0x021924A6L, (VECTOR(int32_t, 4))(0x021924A6L, (VECTOR(int32_t, 2))(0x021924A6L, 0x67EA81E9L), 0x67EA81E9L), 0x67EA81E9L, 0x021924A6L, 0x67EA81E9L, (VECTOR(int32_t, 2))(0x021924A6L, 0x67EA81E9L), (VECTOR(int32_t, 2))(0x021924A6L, 0x67EA81E9L), 0x021924A6L, 0x67EA81E9L, 0x021924A6L, 0x67EA81E9L);
                    int i;
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x1AC45BADL, 0L)).xxxyxxyy)).s2420007124021236, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_528.w, (-1L), 0L, 1L, ((VECTOR(int32_t, 4))(0x47664CEDL, ((VECTOR(int32_t, 2))((-7L), 8L)), 6L)), l_529, (l_527.z &= (l_519.s7 = (l_318 = l_530))), (l_531 , l_532), ((VECTOR(int32_t, 8))(l_533.s36506167)).s5, (l_527.z = l_534), ((VECTOR(int32_t, 2))(9L, 0x2393B0EDL)), 0x5DD6C48FL))))))).sc, ((VECTOR(int32_t, 8))(l_535.xxwxyzzw)), ((VECTOR(int32_t, 2))(l_536.xy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(3L, (-1L), (-5L), 0x61E4890CL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(8L, 0x739112BDL)), 0x21A06EBDL, 0x482BCBD9L)))).s44)))).hi, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_537.yxyxyxxx)).hi)).xzyzwyyw)).hi)), ((VECTOR(int32_t, 8))(l_538.s0575a60f)).lo))))).s5)
                    { /* block id: 285 */
                        int32_t l_540 = 0x137D202CL;
                        int32_t *l_539 = &l_540;
                        int32_t *l_541[2][10] = {{&l_540,&l_540,&l_540,&l_540,&l_540,&l_540,&l_540,&l_540,&l_540,&l_540},{&l_540,&l_540,&l_540,&l_540,&l_540,&l_540,&l_540,&l_540,&l_540,&l_540}};
                        int32_t *l_542[4][4];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_542[i][j] = &l_540;
                        }
                        l_542[3][0] = (l_541[1][1] = l_539);
                    }
                    else
                    { /* block id: 288 */
                        int32_t l_543 = (-9L);
                        int32_t l_544 = 1L;
                        VECTOR(int8_t, 16) l_545 = (VECTOR(int8_t, 16))(0x58L, (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 8L), 8L), 8L, 0x58L, 8L, (VECTOR(int8_t, 2))(0x58L, 8L), (VECTOR(int8_t, 2))(0x58L, 8L), 0x58L, 8L, 0x58L, 8L);
                        int8_t l_546 = 0x04L;
                        int i;
                        l_535.y = l_543;
                        l_535.w |= ((((VECTOR(uint64_t, 4))(l_544, 0xFF5E8D816F3B4A81L, 0UL, 0x22C6C6C3EBFE8FEAL)).z , l_545.sc) , l_546);
                    }
                }
                else
                { /* block id: 292 */
                    VECTOR(int32_t, 16) l_547 = (VECTOR(int32_t, 16))(0x5209FA9CL, (VECTOR(int32_t, 4))(0x5209FA9CL, (VECTOR(int32_t, 2))(0x5209FA9CL, 0L), 0L), 0L, 0x5209FA9CL, 0L, (VECTOR(int32_t, 2))(0x5209FA9CL, 0L), (VECTOR(int32_t, 2))(0x5209FA9CL, 0L), 0x5209FA9CL, 0L, 0x5209FA9CL, 0L);
                    uint8_t l_572 = 0x0AL;
                    int i;
                    if (((VECTOR(int32_t, 16))(l_547.sdaa90f2eb495bc2e)).sc)
                    { /* block id: 293 */
                        int32_t l_548 = (-2L);
                        int8_t l_549 = 1L;
                        uint16_t l_550[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_550[i] = 0x7D4DL;
                        l_547.s8 = 0x7289B731L;
                        l_550[0]++;
                    }
                    else
                    { /* block id: 296 */
                        uint16_t l_553 = 0x0412L;
                        VECTOR(int64_t, 2) l_556 = (VECTOR(int64_t, 2))(0x23655037AA7AA14BL, 0x1D8521A85158B6AAL);
                        int32_t l_557 = 0x61065B9EL;
                        union U1 l_558 = {0x205D3FC273DBCBB5L};
                        uint16_t l_559 = 0UL;
                        int16_t l_560 = 6L;
                        int64_t l_561 = 0x7F0853A978322549L;
                        uint32_t l_562 = 0xF8D48A8AL;
                        VECTOR(uint8_t, 4) l_563 = (VECTOR(uint8_t, 4))(0xC1L, (VECTOR(uint8_t, 2))(0xC1L, 255UL), 255UL);
                        VECTOR(uint8_t, 8) l_564 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
                        VECTOR(uint8_t, 8) l_565 = (VECTOR(uint8_t, 8))(0x1CL, (VECTOR(uint8_t, 4))(0x1CL, (VECTOR(uint8_t, 2))(0x1CL, 252UL), 252UL), 252UL, 0x1CL, 252UL);
                        VECTOR(uint8_t, 2) l_566 = (VECTOR(uint8_t, 2))(0xCEL, 0x6DL);
                        int32_t l_568 = 4L;
                        int32_t *l_567 = &l_568;
                        int32_t *l_569 = (void*)0;
                        int32_t *l_570[1][8];
                        int32_t *l_571 = &l_568;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_570[i][j] = (void*)0;
                        }
                        l_553++;
                        l_571 = (l_570[0][3] = ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_556.xyxyxxxx)).s25)).odd , l_557) , (l_569 = ((l_558 , ((VECTOR(int64_t, 2))(9L, 2L)).odd) , ((l_561 |= (l_560 ^= l_559)) , ((l_562 , (((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(l_563.yyxzywyw)).even, ((VECTOR(uint8_t, 8))(l_564.s25661264)).odd))).yxzzyxxy)).odd, ((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_565.s72)).xyxyxxyyxyxyyxxx)).lo))).even, ((VECTOR(uint8_t, 8))(l_566.yyxxxyyx)).even))).z , 0UL)) , l_567))))));
                    }
                    l_572--;
                    l_518.s7 &= 9L;
                }
                l_527.x = 0x2E4D4DD3L;
                l_575 = (void*)0;
            }
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_576.xx)), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0L, (((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(l_577.yx)).xxxy, ((VECTOR(uint32_t, 8))(l_578.yyzwwzxx)).hi, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(GROUP_DIVERGE(2, 1), 8UL, 0xB397F761L, ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967295UL, 4294967286UL)).yyxxxyyy)).hi, ((VECTOR(uint32_t, 2))(0xCFBACA19L, 1UL)).xyyx, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_579.sed9d))))))))), 0x83DB49EEL)).odd, ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(l_580.yyyx)), ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xB1F1L, 0xC6CBL)).yxyy)).ywzwwzzy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_581.s407f)).yxwxwzxw))))).hi))))))))).yxzwwzzxxyzzywzw, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xD9A17E89L, 0x5301AEF2L)))).yyyyxxyxxxyyyyxy))))).sb , ((GROUP_DIVERGE(0, 1) , (l_582 = 0x8AL)) , ((VECTOR(int32_t, 16))(l_583.xyxxxxyyxxyyxyyy)).sb)), ((VECTOR(int32_t, 2))(l_584.s01)), 0x2BDCA713L, ((l_585 , ((l_587[2][0][2] = l_586) , l_588[3][4])) , (l_318 ^= l_589)), (-4L), 0x530E4643L)).lo)), ((VECTOR(int32_t, 2))(0x5A503674L, 0x386F2CBEL)).xyxx))), 0x5808C3D7L, (-1L))).s1)
            { /* block id: 313 */
                int32_t l_590 = 0x57862973L;
                l_518.s1 ^= l_590;
            }
            else
            { /* block id: 315 */
                uint32_t l_591[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                union U1 l_609 = {1L};
                union U1 *l_608 = &l_609;
                union U1 *l_610 = (void*)0;
                int i;
                if (l_591[7])
                { /* block id: 316 */
                    int16_t l_592[8][4] = {{0x43EFL,1L,(-9L),0L},{0x43EFL,1L,(-9L),0L},{0x43EFL,1L,(-9L),0L},{0x43EFL,1L,(-9L),0L},{0x43EFL,1L,(-9L),0L},{0x43EFL,1L,(-9L),0L},{0x43EFL,1L,(-9L),0L},{0x43EFL,1L,(-9L),0L}};
                    uint16_t l_593 = 65528UL;
                    VECTOR(int32_t, 8) l_596 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                    int i, j;
                    ++l_593;
                    l_519.s6 = ((VECTOR(int32_t, 4))(l_596.s7115)).y;
                }
                else
                { /* block id: 319 */
                    int32_t l_598 = (-5L);
                    int32_t *l_597 = &l_598;
                    VECTOR(int32_t, 2) l_599 = (VECTOR(int32_t, 2))((-8L), (-8L));
                    int8_t l_600[5];
                    int32_t l_601 = 0x281CA082L;
                    int32_t l_602 = 6L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_600[i] = 0x4DL;
                    l_597 = (void*)0;
                    l_518.s3 ^= ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(l_599.yx)).yxxy, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_600[4], 0x463CED60L, 0x4B68DA83L, 0x23A10D80L)).lo, (int32_t)l_601))).xxyy))).w;
                    l_520.w ^= (l_583.x &= (l_318 = l_602));
                    for (l_600[3] = 0; (l_600[3] > 13); ++l_600[3])
                    { /* block id: 327 */
                        int32_t l_606 = 0x166F8804L;
                        int32_t *l_605 = &l_606;
                        int32_t *l_607 = &l_606;
                        l_607 = l_605;
                        l_518.s1 = 0x65629344L;
                    }
                }
                l_610 = l_608;
                for (l_609.f0 = (-29); (l_609.f0 <= (-8)); l_609.f0 = safe_add_func_int8_t_s_s(l_609.f0, 8))
                { /* block id: 335 */
                    int32_t l_613 = 1L;
                    uint32_t l_642 = 0x94C23928L;
                    for (l_613 = (-22); (l_613 == 7); l_613 = safe_add_func_int16_t_s_s(l_613, 9))
                    { /* block id: 338 */
                        l_519.s7 = (l_520.w = 0x18647DE1L);
                    }
                    for (l_613 = 0; (l_613 == (-9)); l_613 = safe_sub_func_uint32_t_u_u(l_613, 8))
                    { /* block id: 344 */
                        VECTOR(int64_t, 2) l_618 = (VECTOR(int64_t, 2))(0x6DA1F5A3AF739EB0L, 0x2C051C5279A3E465L);
                        int16_t l_619 = 0L;
                        int32_t l_620[8][6] = {{0x0D012CF6L,0x79055148L,0x3D31B911L,6L,0x59561950L,0x0D012CF6L},{0x0D012CF6L,0x79055148L,0x3D31B911L,6L,0x59561950L,0x0D012CF6L},{0x0D012CF6L,0x79055148L,0x3D31B911L,6L,0x59561950L,0x0D012CF6L},{0x0D012CF6L,0x79055148L,0x3D31B911L,6L,0x59561950L,0x0D012CF6L},{0x0D012CF6L,0x79055148L,0x3D31B911L,6L,0x59561950L,0x0D012CF6L},{0x0D012CF6L,0x79055148L,0x3D31B911L,6L,0x59561950L,0x0D012CF6L},{0x0D012CF6L,0x79055148L,0x3D31B911L,6L,0x59561950L,0x0D012CF6L},{0x0D012CF6L,0x79055148L,0x3D31B911L,6L,0x59561950L,0x0D012CF6L}};
                        VECTOR(int32_t, 4) l_621 = (VECTOR(int32_t, 4))(0x58E78C21L, (VECTOR(int32_t, 2))(0x58E78C21L, 0x7EDAB82AL), 0x7EDAB82AL);
                        VECTOR(int32_t, 4) l_622 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 2L), 2L);
                        VECTOR(int32_t, 4) l_623 = (VECTOR(int32_t, 4))(0x69E29643L, (VECTOR(int32_t, 2))(0x69E29643L, 0x456D61F0L), 0x456D61F0L);
                        VECTOR(int32_t, 4) l_624 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x33BC5B03L), 0x33BC5B03L);
                        VECTOR(int32_t, 4) l_625 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
                        VECTOR(uint16_t, 16) l_626 = (VECTOR(uint16_t, 16))(0xC7FEL, (VECTOR(uint16_t, 4))(0xC7FEL, (VECTOR(uint16_t, 2))(0xC7FEL, 65535UL), 65535UL), 65535UL, 0xC7FEL, 65535UL, (VECTOR(uint16_t, 2))(0xC7FEL, 65535UL), (VECTOR(uint16_t, 2))(0xC7FEL, 65535UL), 0xC7FEL, 65535UL, 0xC7FEL, 65535UL);
                        VECTOR(int32_t, 8) l_627 = (VECTOR(int32_t, 8))(0x3137EDF9L, (VECTOR(int32_t, 4))(0x3137EDF9L, (VECTOR(int32_t, 2))(0x3137EDF9L, 0x49F0A87CL), 0x49F0A87CL), 0x49F0A87CL, 0x3137EDF9L, 0x49F0A87CL);
                        VECTOR(int32_t, 2) l_628 = (VECTOR(int32_t, 2))((-1L), 0x4F0C4F5BL);
                        int32_t l_629 = 0L;
                        VECTOR(int32_t, 16) l_630 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x6E5AFECAL), 0x6E5AFECAL), 0x6E5AFECAL, 7L, 0x6E5AFECAL, (VECTOR(int32_t, 2))(7L, 0x6E5AFECAL), (VECTOR(int32_t, 2))(7L, 0x6E5AFECAL), 7L, 0x6E5AFECAL, 7L, 0x6E5AFECAL);
                        uint16_t l_631 = 65535UL;
                        uint16_t l_632 = 1UL;
                        int64_t l_633 = 0x0AD1BD3BA56C1B2EL;
                        int32_t l_634 = 0L;
                        uint8_t l_635 = 0x62L;
                        uint32_t l_636 = 1UL;
                        uint64_t l_637 = 0x9352E8883026C518L;
                        int8_t l_638 = 0x26L;
                        int32_t *l_639 = &l_620[5][3];
                        int32_t *l_640 = (void*)0;
                        int32_t l_641 = 7L;
                        int i, j;
                        l_520.x &= ((l_619 = ((l_521 = ((VECTOR(int32_t, 2))(0x1C2F5D55L, 1L)).odd) , ((VECTOR(int64_t, 16))(l_618.xyxxyxxxxxxyyyyy)).s1)) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-4L), 1L, l_620[1][1], 0x16310131L, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(l_621.yw)).yyxyyyxxyxxxxxxy, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_622.zw)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_623.zz)), (-1L), 6L)).yyzwyxyzwyzzwxyy, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_624.wxzx)))).odd, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_625.zxxzwzxz)), ((VECTOR(int32_t, 4))(0x4162DE70L, (l_626.s3 = 0x0B134145L), 0x4EC768B4L, 0x184032A2L)).yywxxwzy))).s41))).xxxxxyyxxxxxxyxx))))).s3e))).xyxxxxxxyxyyxxxy))).s0f9b, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_627.s4510631165671511)).s349e)).zwxxwxyw, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_628.yyyx)).even)), (l_629 , (l_623.z = ((l_634 = ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_630.sa13c5176)), 1L, 0x767B0312L, l_631, 0x72155548L, 0x08D77E77L, ((l_311.y = l_632) , (l_318 &= (l_633 , 0x18989A3FL))), 0x560B3D71L, (-2L))).sa0dd, ((VECTOR(int32_t, 4))(0x34E9520CL))))).y) , l_635))), l_636, 0x53A4FF7FL, l_637, ((VECTOR(int32_t, 4))(0x3533170DL)), l_638, 0x10D0B8C0L, 0x1622D668L, 1L, 0x29E0EEFDL)), ((VECTOR(int32_t, 16))(5L))))).lo))))).even))))).s1005476500167757)).s09, ((VECTOR(int32_t, 2))(2L))))))), (-4L), 0x0E6D7551L, ((VECTOR(int32_t, 4))(0x40578FF8L)))).s2);
                        l_640 = l_639;
                        l_584.s3 = (-1L);
                        l_584.s9 ^= l_641;
                    }
                    l_518.s3 ^= l_642;
                }
            }
            for (l_577.x = 7; (l_577.x > 22); l_577.x = safe_add_func_int16_t_s_s(l_577.x, 6))
            { /* block id: 362 */
                uint8_t l_645[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_645[i] = 255UL;
                if (l_645[0])
                { /* block id: 363 */
                    int32_t l_646 = 0L;
                    uint32_t l_647[5][4] = {{5UL,0x8A4E4C1CL,5UL,5UL},{5UL,0x8A4E4C1CL,5UL,5UL},{5UL,0x8A4E4C1CL,5UL,5UL},{5UL,0x8A4E4C1CL,5UL,5UL},{5UL,0x8A4E4C1CL,5UL,5UL}};
                    uint8_t l_650 = 0x1AL;
                    int i, j;
                    l_647[3][0]--;
                    l_650--;
                    for (l_647[1][0] = 0; (l_647[1][0] > 7); l_647[1][0] = safe_add_func_uint32_t_u_u(l_647[1][0], 4))
                    { /* block id: 368 */
                        int16_t l_655 = 0L;
                        uint32_t l_656 = 0xB6C4ACD2L;
                        int8_t l_657 = 0x68L;
                        int32_t l_658 = 0x13857B75L;
                        int64_t l_659 = (-5L);
                        uint64_t l_660 = 0x8CB155186AAD0C22L;
                        l_656 = l_655;
                        l_576.x |= l_657;
                        ++l_660;
                    }
                }
                else
                { /* block id: 373 */
                    int32_t l_664 = 9L;
                    int32_t *l_663[2];
                    int32_t *l_665 = &l_664;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_663[i] = &l_664;
                    l_665 = l_663[0];
                }
            }
        }
        l_695 = (l_694[6] = (((l_666 = GROUP_DIVERGE(1, 1)) , ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_667.yxyx)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_668.zzyz)))))), 0xD088AC0F73177397L, ((VECTOR(uint64_t, 2))(l_669.xy)), 0UL, 18446744073709551615UL, (l_673 |= (l_670--)), 0xD9F4190BEE1DC8D6L, 18446744073709551615UL)).s9) , ((((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_674.xyxx)).yyywyxxxzzxxxwwy)), ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_675.xx)))).yyyxyxxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_676.yxxx)).odd)), ((((l_677 = FAKE_DIVERGE(p_1317->group_0_offset, get_group_id(0), 10)) , 0x30E1A8B5L) , ((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(0x3B6BBE18B9751EBDL, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_678.s01522114)).s62, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(0x2FB0FC63L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x555F93C7L, (-3L))).yyyyyxxxyxyxyxxy)).s4, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_679.xxxy)).yywywxyy, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(l_680.ywyw)).even, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 2))(8UL, 65535UL)), (uint16_t)(l_681 , l_682), (uint16_t)(l_683 , 65533UL))))))).yyyy, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-2L), 0x352837E2L, (-1L), 0x0B2E2422L)))), ((VECTOR(int32_t, 4))(l_684, ((VECTOR(int32_t, 2))(0x2F4B5617L, 0L)), 2L)), 1L, (((VECTOR(uint8_t, 2))(l_685.s0c)).lo , 0x0BD1A899L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_686.s8f)).xxyx)), 0x454CCA4DL, 0x78CC76E7L)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(6L, ((VECTOR(int32_t, 2))(0L)), 0x4499ACE2L, 1L, ((VECTOR(int32_t, 2))(0x31842B6BL)), 0x6535B485L)).s5441221162646400)).lo))).even))).xyzxxwxx)).s1771757353425155)).hi)), (int32_t)1L))), ((VECTOR(int32_t, 8))((-9L)))))))).s54)), (-9L), (-1L))).yxyzyxyw)).lo, ((VECTOR(int32_t, 4))(7L))))), 0L, l_687, l_688, ((VECTOR(int32_t, 4))(7L)), l_689, 1L, (-10L))).hi))).s47))).yyyx)).odd, (int32_t)l_690))).yxxy, ((VECTOR(uint32_t, 4))(0x49511101L))))).y, 1L, 0x27BC9965192FA412L)), l_691, 0x658AE89E4C204907L, ((VECTOR(int64_t, 8))(0L)), 0x30DDE0E265F0E641L, 8L)), ((VECTOR(int64_t, 16))((-7L)))))).s6) , l_692), ((VECTOR(uint8_t, 2))(0x8BL)), ((VECTOR(uint8_t, 2))(252UL)), 252UL)), ((VECTOR(uint8_t, 8))(254UL)), ((VECTOR(uint8_t, 8))(247UL))))).s2, 248UL, 0x68L, 255UL)).yxyxyxzw, ((VECTOR(uint8_t, 8))(0x6FL))))), ((VECTOR(uint8_t, 8))(255UL))))).s1451115650327707)), ((VECTOR(uint8_t, 16))(1UL)), ((VECTOR(uint8_t, 16))(0xCAL))))).hi, ((VECTOR(uint8_t, 8))(0x4EL))))).hi, ((VECTOR(uint8_t, 4))(0UL))))), (uint8_t)0x9EL))).wxwwzwzzyzywxwww))).s9 , l_693) , (void*)0)));
        if ((((++l_697) , (l_700 , (l_702 = l_701))) , (l_704 |= l_703[4][1][0])))
        { /* block id: 387 */
            int16_t l_705 = 0x5A09L;
            int8_t l_706 = 0x1CL;
            uint8_t l_759[3][6][2] = {{{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L}},{{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L}},{{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L},{0xD5L,0xD5L}}};
            int32_t l_762 = (-1L);
            int32_t l_763 = 1L;
            int64_t l_764 = 8L;
            uint64_t l_765[5][2] = {{0x487E2C467987A8B5L,0x487E2C467987A8B5L},{0x487E2C467987A8B5L,0x487E2C467987A8B5L},{0x487E2C467987A8B5L,0x487E2C467987A8B5L},{0x487E2C467987A8B5L,0x487E2C467987A8B5L},{0x487E2C467987A8B5L,0x487E2C467987A8B5L}};
            int i, j, k;
            l_705 |= (-1L);
            if (l_706)
            { /* block id: 389 */
                VECTOR(int32_t, 8) l_707 = (VECTOR(int32_t, 8))(0x24E38DA9L, (VECTOR(int32_t, 4))(0x24E38DA9L, (VECTOR(int32_t, 2))(0x24E38DA9L, 7L), 7L), 7L, 0x24E38DA9L, 7L);
                uint32_t l_708 = 4294967295UL;
                VECTOR(int32_t, 8) l_709 = (VECTOR(int32_t, 8))(0x1C2895C3L, (VECTOR(int32_t, 4))(0x1C2895C3L, (VECTOR(int32_t, 2))(0x1C2895C3L, 5L), 5L), 5L, 0x1C2895C3L, 5L);
                VECTOR(int32_t, 16) l_710 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x1D461F28L), 0x1D461F28L), 0x1D461F28L, 9L, 0x1D461F28L, (VECTOR(int32_t, 2))(9L, 0x1D461F28L), (VECTOR(int32_t, 2))(9L, 0x1D461F28L), 9L, 0x1D461F28L, 9L, 0x1D461F28L);
                uint32_t l_711 = 4294967289UL;
                int i;
                l_708 ^= ((VECTOR(int32_t, 2))(l_707.s64)).even;
                if ((l_711 = ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_709.s2143335462110604)).lo, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(l_710.s4fbdaa5b)).s0616103740611243, ((VECTOR(int32_t, 4))(0x693F894EL, 0x52B3FC70L, 0x71B15741L, 5L)).yxyzzwzwwwzxywzw))).hi))).s3))
                { /* block id: 392 */
                    VECTOR(int32_t, 8) l_712 = (VECTOR(int32_t, 8))(0x2C2E38FEL, (VECTOR(int32_t, 4))(0x2C2E38FEL, (VECTOR(int32_t, 2))(0x2C2E38FEL, 0L), 0L), 0L, 0x2C2E38FEL, 0L);
                    int i;
                    for (l_712.s1 = (-28); (l_712.s1 > 27); l_712.s1 = safe_add_func_int16_t_s_s(l_712.s1, 8))
                    { /* block id: 395 */
                        VECTOR(int32_t, 16) l_715 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L), (VECTOR(int32_t, 2))(1L, (-4L)), (VECTOR(int32_t, 2))(1L, (-4L)), 1L, (-4L), 1L, (-4L));
                        VECTOR(int32_t, 2) l_716 = (VECTOR(int32_t, 2))(0x7E5F8557L, 6L);
                        VECTOR(int32_t, 8) l_717 = (VECTOR(int32_t, 8))(0x5344EEC4L, (VECTOR(int32_t, 4))(0x5344EEC4L, (VECTOR(int32_t, 2))(0x5344EEC4L, 0x33098FDBL), 0x33098FDBL), 0x33098FDBL, 0x5344EEC4L, 0x33098FDBL);
                        VECTOR(int32_t, 4) l_718 = (VECTOR(int32_t, 4))(0x5749FE40L, (VECTOR(int32_t, 2))(0x5749FE40L, 4L), 4L);
                        VECTOR(int32_t, 16) l_719 = (VECTOR(int32_t, 16))(0x268A132CL, (VECTOR(int32_t, 4))(0x268A132CL, (VECTOR(int32_t, 2))(0x268A132CL, (-8L)), (-8L)), (-8L), 0x268A132CL, (-8L), (VECTOR(int32_t, 2))(0x268A132CL, (-8L)), (VECTOR(int32_t, 2))(0x268A132CL, (-8L)), 0x268A132CL, (-8L), 0x268A132CL, (-8L));
                        VECTOR(int32_t, 8) l_720 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x03C83806L), 0x03C83806L), 0x03C83806L, (-1L), 0x03C83806L);
                        VECTOR(int32_t, 16) l_721 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                        uint16_t l_722 = 0xA110L;
                        int16_t l_723 = 0x5201L;
                        int16_t l_724 = 0x2A4AL;
                        int32_t l_725 = 0x7B2B675EL;
                        VECTOR(int32_t, 8) l_726 = (VECTOR(int32_t, 8))(0x55DB4615L, (VECTOR(int32_t, 4))(0x55DB4615L, (VECTOR(int32_t, 2))(0x55DB4615L, 1L), 1L), 1L, 0x55DB4615L, 1L);
                        uint32_t l_727 = 0xC7B28027L;
                        uint64_t l_728 = 0x162FBD4C9119DB7AL;
                        int32_t l_729[1];
                        uint32_t l_730 = 4294967295UL;
                        int32_t *l_731 = &l_729[0];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_729[i] = 0x6AF5B892L;
                        l_694[6] = (((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_715.s1f3b713c)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_716.yy)).xyyx)).wwxzwxyw)))).sa27d, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(l_717.s0735632302165454)).sad, (int32_t)0x17C8B563L, (int32_t)0x2AD200AEL))).yxxyxyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_718.ywwyxzzx)).s7341667013275074)).odd))))).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(l_719.s002a42b0)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_720.s22)), ((VECTOR(int32_t, 8))(l_721.sbfe42e7f)).s11, ((VECTOR(int32_t, 16))(l_722, 4L, l_723, l_724, ((VECTOR(int32_t, 2))((-9L), 0x0AA0AEBFL)), 0L, ((VECTOR(int32_t, 4))(0x4EE148E0L, (l_689 = l_725), (-5L), 0L)).y, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_726.s07)), 0x409A2564L, 9L, l_727, ((VECTOR(int32_t, 2))((-1L))), 0x5407A887L)), l_728, ((VECTOR(int32_t, 4))(0x49058022L)), l_729[0], 6L, (-1L))).sb, ((VECTOR(int32_t, 8))(0x10A3D321L)), ((VECTOR(int32_t, 2))(0x7B53E2E3L)), ((VECTOR(int32_t, 2))(0x37A52C75L)), l_730, (-6L), 8L)).s4e, ((VECTOR(int32_t, 2))(6L))))), (-3L), 0x24658A01L)), ((VECTOR(int32_t, 4))(0L)))).sbe))).yyyxxxxxxxxxyyxy)))).odd))))))).even))).z , l_731);
                    }
                }
                else
                { /* block id: 399 */
                    int32_t l_732[1];
                    int32_t l_743 = 0x13074E20L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_732[i] = 0L;
                    for (l_732[0] = 0; (l_732[0] >= (-22)); l_732[0] = safe_sub_func_uint8_t_u_u(l_732[0], 6))
                    { /* block id: 402 */
                        uint8_t l_735 = 0x9DL;
                        ++l_735;
                    }
                    for (l_732[0] = (-27); (l_732[0] <= 25); ++l_732[0])
                    { /* block id: 407 */
                        uint16_t l_740 = 0x6E20L;
                        l_740--;
                    }
                    l_743 = (l_732[0] = 1L);
                }
                for (l_710.sa = 0; (l_710.sa <= 23); l_710.sa++)
                { /* block id: 415 */
                    int32_t l_746 = (-3L);
                    int32_t *l_747 = &l_746;
                    l_746 = l_746;
                    l_694[3] = l_747;
                    (*l_747) = (-10L);
                }
            }
            else
            { /* block id: 420 */
                int32_t l_748 = 0x4AEB3390L;
                for (l_748 = 1; (l_748 > 16); l_748 = safe_add_func_uint32_t_u_u(l_748, 8))
                { /* block id: 423 */
                    uint32_t l_751 = 0xED9CD876L;
                    if (l_751)
                    { /* block id: 424 */
                        int32_t l_752 = 0x1AA647A9L;
                        uint16_t l_753[10][9] = {{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL},{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL},{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL},{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL},{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL},{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL},{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL},{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL},{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL},{65535UL,0x730CL,0UL,0x730CL,65535UL,65535UL,0x730CL,0UL,0x730CL}};
                        int i, j;
                        l_752 = l_752;
                        --l_753[8][5];
                    }
                    else
                    { /* block id: 427 */
                        VECTOR(uint64_t, 16) l_756 = (VECTOR(uint64_t, 16))(0x21268248AE00EF36L, (VECTOR(uint64_t, 4))(0x21268248AE00EF36L, (VECTOR(uint64_t, 2))(0x21268248AE00EF36L, 1UL), 1UL), 1UL, 0x21268248AE00EF36L, 1UL, (VECTOR(uint64_t, 2))(0x21268248AE00EF36L, 1UL), (VECTOR(uint64_t, 2))(0x21268248AE00EF36L, 1UL), 0x21268248AE00EF36L, 1UL, 0x21268248AE00EF36L, 1UL);
                        int i;
                        l_756.s6--;
                    }
                }
            }
            ++l_759[2][3][1];
            l_765[2][0]++;
        }
        else
        { /* block id: 434 */
            union U1 l_768 = {0x59789A21574E686EL};
            int64_t l_769 = 0L;
            uint32_t l_770 = 1UL;
            uint64_t l_771 = 18446744073709551615UL;
            int32_t l_774 = (-1L);
            int32_t *l_773[5][8][6] = {{{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774}},{{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774}},{{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774}},{{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774}},{{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774},{&l_774,&l_774,&l_774,&l_774,&l_774,&l_774}}};
            int32_t **l_772 = &l_773[2][0][4];
            int32_t **l_775[6][10] = {{&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2],&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2]},{&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2],&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2]},{&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2],&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2]},{&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2],&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2]},{&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2],&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2]},{&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2],&l_773[1][4][2],&l_773[3][3][4],&l_773[4][5][2],&l_773[3][3][4],&l_773[1][4][2]}};
            int32_t **l_776 = &l_773[2][0][4];
            int32_t l_778 = (-5L);
            int32_t *l_777 = &l_778;
            int32_t *l_779 = &l_778;
            int8_t l_780[10][8] = {{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L},{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L},{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L},{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L},{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L},{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L},{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L},{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L},{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L},{0x40L,0L,0x75L,1L,0x05L,0x05L,1L,0x75L}};
            uint16_t l_781 = 65527UL;
            int i, j, k;
            l_771 = ((VECTOR(int32_t, 4))((l_770 &= (l_768 , l_769)), 0x56724957L, 0x77180A44L, 0L)).w;
            l_776 = (l_775[5][2] = l_772);
            l_779 = l_777;
            l_781 = ((l_310.s2 &= FAKE_DIVERGE(p_1317->global_2_offset, get_global_id(2), 10)) , ((*l_779) &= l_780[7][4]));
        }
        unsigned int result = 0;
        result += l_310.s7;
        result += l_310.s6;
        result += l_310.s5;
        result += l_310.s4;
        result += l_310.s3;
        result += l_310.s2;
        result += l_310.s1;
        result += l_310.s0;
        result += l_311.y;
        result += l_311.x;
        result += l_312;
        result += l_313.y;
        result += l_313.x;
        result += l_314.s7;
        result += l_314.s6;
        result += l_314.s5;
        result += l_314.s4;
        result += l_314.s3;
        result += l_314.s2;
        result += l_314.s1;
        result += l_314.s0;
        result += l_315.w;
        result += l_315.z;
        result += l_315.y;
        result += l_315.x;
        result += l_316.w;
        result += l_316.z;
        result += l_316.y;
        result += l_316.x;
        int l_317_i0;
        for (l_317_i0 = 0; l_317_i0 < 8; l_317_i0++) {
            result += l_317[l_317_i0];
        }
        result += l_318;
        result += l_319;
        result += l_468;
        result += l_469;
        result += l_666;
        result += l_667.y;
        result += l_667.x;
        result += l_668.w;
        result += l_668.z;
        result += l_668.y;
        result += l_668.x;
        result += l_669.y;
        result += l_669.x;
        result += l_670;
        result += l_673;
        result += l_674.y;
        result += l_674.x;
        result += l_675.w;
        result += l_675.z;
        result += l_675.y;
        result += l_675.x;
        result += l_676.y;
        result += l_676.x;
        result += l_677;
        result += l_678.s7;
        result += l_678.s6;
        result += l_678.s5;
        result += l_678.s4;
        result += l_678.s3;
        result += l_678.s2;
        result += l_678.s1;
        result += l_678.s0;
        result += l_679.y;
        result += l_679.x;
        result += l_680.w;
        result += l_680.z;
        result += l_680.y;
        result += l_680.x;
        result += l_681.f0;
        result += l_682;
        result += l_683;
        result += l_684;
        result += l_685.sf;
        result += l_685.se;
        result += l_685.sd;
        result += l_685.sc;
        result += l_685.sb;
        result += l_685.sa;
        result += l_685.s9;
        result += l_685.s8;
        result += l_685.s7;
        result += l_685.s6;
        result += l_685.s5;
        result += l_685.s4;
        result += l_685.s3;
        result += l_685.s2;
        result += l_685.s1;
        result += l_685.s0;
        result += l_686.sf;
        result += l_686.se;
        result += l_686.sd;
        result += l_686.sc;
        result += l_686.sb;
        result += l_686.sa;
        result += l_686.s9;
        result += l_686.s8;
        result += l_686.s7;
        result += l_686.s6;
        result += l_686.s5;
        result += l_686.s4;
        result += l_686.s3;
        result += l_686.s2;
        result += l_686.s1;
        result += l_686.s0;
        result += l_687;
        result += l_688;
        result += l_689;
        result += l_690;
        result += l_691;
        result += l_692;
        result += l_693;
        result += l_696;
        result += l_697;
        result += l_700;
        result += l_701.f0;
        result += l_702.f0;
        int l_703_i0, l_703_i1, l_703_i2;
        for (l_703_i0 = 0; l_703_i0 < 5; l_703_i0++) {
            for (l_703_i1 = 0; l_703_i1 < 4; l_703_i1++) {
                for (l_703_i2 = 0; l_703_i2 < 2; l_703_i2++) {
                    result += l_703[l_703_i0][l_703_i1][l_703_i2];
                }
            }
        }
        result += l_704;
        atomic_add(&p_1317->g_special_values[28 * get_linear_group_id() + 17], result);
    }
    else
    { /* block id: 444 */
        (1 + 1);
    }
    return l_782;
}


/* ------------------------------------------ */
/* 
 * reads : p_1317->g_285.f3
 * writes: p_1317->g_285.f3
 */
uint32_t * func_95(int64_t  p_96, int8_t  p_97, uint32_t * p_98, uint32_t  p_99, int8_t * p_100, struct S2 * p_1317)
{ /* block id: 118 */
    int32_t *l_305[1][10] = {{&p_1317->g_4,&p_1317->g_4,(void*)0,&p_1317->g_4,&p_1317->g_4,&p_1317->g_4,&p_1317->g_4,(void*)0,&p_1317->g_4,&p_1317->g_4}};
    uint16_t l_307 = 65532UL;
    int i, j;
    for (p_1317->g_285.f3 = 0; (p_1317->g_285.f3 > (-9)); --p_1317->g_285.f3)
    { /* block id: 121 */
        uint32_t *l_304[10] = {&p_1317->g_114,&p_1317->g_114,&p_1317->g_114,&p_1317->g_114,&p_1317->g_114,&p_1317->g_114,&p_1317->g_114,&p_1317->g_114,&p_1317->g_114,&p_1317->g_114};
        int i;
        return l_304[1];
    }
    ++l_307;
    return l_305[0][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_1317->g_115 p_1317->g_116 p_1317->g_4 p_1317->g_127 p_1317->g_111 p_1317->g_18 p_1317->g_131 p_1317->g_137 p_1317->g_comm_values p_1317->g_13.f0 p_1317->g_7 p_1317->g_114 p_1317->l_comm_values p_1317->g_248
 * writes: p_1317->g_131 p_1317->g_137 p_1317->g_13.f0 p_1317->g_116 p_1317->g_245 p_1317->g_141 p_1317->g_248
 */
int8_t  func_105(int16_t  p_106, int32_t * p_107, int16_t  p_108, uint32_t * p_109, struct S2 * p_1317)
{ /* block id: 28 */
    int8_t *l_128 = &p_1317->g_129;
    uint64_t *l_130[6][5][7] = {{{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131}},{{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131}},{{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131}},{{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131}},{{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131}},{{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131},{&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131,&p_1317->g_131}}};
    int64_t *l_132 = (void*)0;
    int32_t l_133[2];
    int32_t l_134 = 0L;
    int16_t *l_140[5] = {&p_1317->g_141[0][2],&p_1317->g_141[0][2],&p_1317->g_141[0][2],&p_1317->g_141[0][2],&p_1317->g_141[0][2]};
    int16_t **l_139 = &l_140[2];
    uint32_t l_233 = 0xF697AC61L;
    int32_t *l_246 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_133[i] = 0x1BA44DB3L;
    if (((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(p_1317->g_115.scb)).xxxxxyxyyxxyxxxx, ((VECTOR(int32_t, 16))(0x3D2101FBL, 0L, (-5L), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))((-1L), 0x2490L, (-1L), 0x5364L, 0x2CA1L, (-8L), (-1L), 0x21FDL)).lo, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1317->g_116.yx)))).xxxx, (uint16_t)((*p_107) | (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(247UL, ((VECTOR(uint8_t, 2))(0x6AL, 249UL)), 0x2CL, (safe_rshift_func_int16_t_s_u(((l_133[0] = (((safe_lshift_func_uint16_t_u_u((((void*)0 != p_1317->g_127) | (p_1317->g_131 = ((l_128 = (void*)0) != &p_1317->g_129))), p_106)) || FAKE_DIVERGE(p_1317->local_1_offset, get_local_id(1), 10)) != 0xE808L)) != l_134), p_1317->g_111.x)), l_133[0], 0x24L, 0x54L)).even)), ((VECTOR(uint8_t, 4))(252UL))))).w, 0UL)) | l_134), 12)) ^ 0x52CB20ACL), (-9L))))))).wyyyzxwz)).hi))).zyyzwwwzxxyyzxzy, ((VECTOR(int32_t, 16))(9L))))).hi, ((VECTOR(int32_t, 8))((-6L)))))).s7461373333657773))).s83b5, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))((-1L)))))), (*p_107), ((VECTOR(int32_t, 4))(0L)), p_1317->g_18.s5, 0x3B9CDFA9L, 0x0E7A821EL, 0x13FF6A6FL))))), (int32_t)0x67F61CDAL))).s1)
    { /* block id: 32 */
        int16_t ***l_138 = &p_1317->g_137[2];
        int64_t *l_154 = &p_1317->g_13[7][7].f0;
        int64_t *l_155[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_156[4];
        uint16_t l_157 = 65529UL;
        int32_t l_158 = (-1L);
        int i;
        for (i = 0; i < 4; i++)
            l_156[i] = 0x0DCDEB36L;
        for (p_1317->g_131 = 17; (p_1317->g_131 >= 27); p_1317->g_131 = safe_add_func_int8_t_s_s(p_1317->g_131, 2))
        { /* block id: 35 */
            return p_106;
        }
        l_139 = ((*l_138) = p_1317->g_137[2]);
        atomic_max(&p_1317->l_atomic_reduction[0], (safe_add_func_int64_t_s_s(((l_158 |= ((p_1317->g_115.sa ^ ((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(p_108, (safe_rshift_func_uint16_t_u_u((((l_133[1] = (l_133[0] , ((0x5A3E27E76A63E400L ^ 0xCEA4DF9118A8F1D4L) , ((*l_154) &= ((safe_sub_func_uint64_t_u_u(((((void*)0 == &l_139) , &p_1317->g_114) != (void*)0), p_1317->g_comm_values[p_1317->tid])) & 0x2C2766869ADC5092L))))) , l_156[0]) == (-1L)), 0)))), l_157)) <= p_1317->g_7)) & l_134)) == p_108), p_106)));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1317->v_collective += p_1317->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if ((atomic_inc(&p_1317->l_atomic_input[11]) == 5))
        { /* block id: 45 */
            int32_t l_159 = (-1L);
            VECTOR(int32_t, 8) l_177 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2D2B1841L), 0x2D2B1841L), 0x2D2B1841L, (-1L), 0x2D2B1841L);
            int i;
            for (l_159 = (-30); (l_159 > (-23)); l_159++)
            { /* block id: 48 */
                int32_t *l_162 = (void*)0;
                int32_t l_163[6] = {0L,0L,0L,0L,0L,0L};
                int16_t l_173 = 0L;
                uint32_t l_174 = 3UL;
                int i;
                l_162 = (void*)0;
                for (l_163[3] = (-16); (l_163[3] == (-5)); l_163[3]++)
                { /* block id: 52 */
                    VECTOR(uint64_t, 16) l_166 = (VECTOR(uint64_t, 16))(0xD7204A06CDDE3C59L, (VECTOR(uint64_t, 4))(0xD7204A06CDDE3C59L, (VECTOR(uint64_t, 2))(0xD7204A06CDDE3C59L, 0xA505CC423A47A8C7L), 0xA505CC423A47A8C7L), 0xA505CC423A47A8C7L, 0xD7204A06CDDE3C59L, 0xA505CC423A47A8C7L, (VECTOR(uint64_t, 2))(0xD7204A06CDDE3C59L, 0xA505CC423A47A8C7L), (VECTOR(uint64_t, 2))(0xD7204A06CDDE3C59L, 0xA505CC423A47A8C7L), 0xD7204A06CDDE3C59L, 0xA505CC423A47A8C7L, 0xD7204A06CDDE3C59L, 0xA505CC423A47A8C7L);
                    uint16_t l_167[8][1][4] = {{{0UL,0x0D0BL,0UL,0UL}},{{0UL,0x0D0BL,0UL,0UL}},{{0UL,0x0D0BL,0UL,0UL}},{{0UL,0x0D0BL,0UL,0UL}},{{0UL,0x0D0BL,0UL,0UL}},{{0UL,0x0D0BL,0UL,0UL}},{{0UL,0x0D0BL,0UL,0UL}},{{0UL,0x0D0BL,0UL,0UL}}};
                    int32_t l_168 = (-1L);
                    int16_t l_169 = 0x7C5CL;
                    uint16_t l_170 = 0x3BECL;
                    int i, j, k;
                    l_167[0][0][3] = l_166.sc;
                    l_170--;
                }
                --l_174;
            }
            if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_177.s63204176)).s35)), 0L, (-1L))).x)
            { /* block id: 58 */
                int32_t l_179 = 5L;
                int32_t *l_178 = &l_179;
                uint16_t l_180 = 0UL;
                int32_t l_181 = 0x5AA0C160L;
                uint64_t l_182[6][8] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
                int32_t l_185 = 0x1EC73FAEL;
                int16_t l_186 = 2L;
                VECTOR(int32_t, 2) l_187 = (VECTOR(int32_t, 2))((-2L), 0x720F163DL);
                VECTOR(int32_t, 8) l_188 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L));
                VECTOR(int32_t, 8) l_189 = (VECTOR(int32_t, 8))(0x79FF8554L, (VECTOR(int32_t, 4))(0x79FF8554L, (VECTOR(int32_t, 2))(0x79FF8554L, (-4L)), (-4L)), (-4L), 0x79FF8554L, (-4L));
                VECTOR(int32_t, 2) l_190 = (VECTOR(int32_t, 2))(0x21855612L, 0x4B52CCDEL);
                VECTOR(int32_t, 8) l_191 = (VECTOR(int32_t, 8))(0x125EA103L, (VECTOR(int32_t, 4))(0x125EA103L, (VECTOR(int32_t, 2))(0x125EA103L, 0x07F09886L), 0x07F09886L), 0x07F09886L, 0x125EA103L, 0x07F09886L);
                VECTOR(int32_t, 2) l_192 = (VECTOR(int32_t, 2))(0L, (-1L));
                uint64_t l_193 = 8UL;
                VECTOR(int32_t, 8) l_194 = (VECTOR(int32_t, 8))(0x00C9051DL, (VECTOR(int32_t, 4))(0x00C9051DL, (VECTOR(int32_t, 2))(0x00C9051DL, 9L), 9L), 9L, 0x00C9051DL, 9L);
                VECTOR(int32_t, 16) l_195 = (VECTOR(int32_t, 16))(0x17170A34L, (VECTOR(int32_t, 4))(0x17170A34L, (VECTOR(int32_t, 2))(0x17170A34L, 0x5C3AA3BEL), 0x5C3AA3BEL), 0x5C3AA3BEL, 0x17170A34L, 0x5C3AA3BEL, (VECTOR(int32_t, 2))(0x17170A34L, 0x5C3AA3BEL), (VECTOR(int32_t, 2))(0x17170A34L, 0x5C3AA3BEL), 0x17170A34L, 0x5C3AA3BEL, 0x17170A34L, 0x5C3AA3BEL);
                VECTOR(int32_t, 8) l_196 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x1B8D371CL), 0x1B8D371CL), 0x1B8D371CL, (-10L), 0x1B8D371CL);
                int32_t l_197 = 8L;
                int16_t l_198[1][8][8] = {{{0L,(-1L),0x4C23L,0L,0x1F5DL,0x1F5DL,0L,0x4C23L},{0L,(-1L),0x4C23L,0L,0x1F5DL,0x1F5DL,0L,0x4C23L},{0L,(-1L),0x4C23L,0L,0x1F5DL,0x1F5DL,0L,0x4C23L},{0L,(-1L),0x4C23L,0L,0x1F5DL,0x1F5DL,0L,0x4C23L},{0L,(-1L),0x4C23L,0L,0x1F5DL,0x1F5DL,0L,0x4C23L},{0L,(-1L),0x4C23L,0L,0x1F5DL,0x1F5DL,0L,0x4C23L},{0L,(-1L),0x4C23L,0L,0x1F5DL,0x1F5DL,0L,0x4C23L},{0L,(-1L),0x4C23L,0L,0x1F5DL,0x1F5DL,0L,0x4C23L}}};
                uint16_t l_199 = 65534UL;
                uint8_t l_202 = 246UL;
                uint8_t *l_201 = &l_202;
                uint8_t **l_200 = &l_201;
                uint8_t **l_203 = &l_201;
                int32_t *l_204 = &l_179;
                int32_t *l_205 = &l_179;
                int32_t *l_206 = &l_179;
                int i, j, k;
                l_178 = (void*)0;
                l_159 = l_180;
                l_203 = ((l_186 = (l_185 = (l_182[5][5]++))) , (l_200 = (((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_187.yyxyxxxxyxyyxyxy)))).s7abb)).zyyzwyywyywzwxxx)).s42, ((VECTOR(int32_t, 8))(l_188.s75547520)).s46, ((VECTOR(int32_t, 8))(l_189.s42423774)).s32))).yxxy, ((VECTOR(int32_t, 8))(l_190.xyxxxxxx)).odd))), ((VECTOR(int32_t, 16))(l_191.s7060310537155604)).s8dc6, ((VECTOR(int32_t, 8))(l_192.xxyyxxxx)).hi))).hi)), (-4L), 0x64E8FA73L, l_193, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(l_194.s66060545)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_195.s4c5a)).odd)).yxyx)).ywxzwyzwxxxywzzw)).lo)).s2222041701064722)).s5865))).wxxywxzxzyyxyzwx, ((VECTOR(int32_t, 2))(0x2026B292L, (-6L))).xxxyyyxxxyyyxxyy))).s7d86, ((VECTOR(int32_t, 4))(l_196.s5756))))).odd)), 4L, ((VECTOR(int32_t, 2))(0L, 1L)), (-1L), ((VECTOR(int32_t, 2))(0x52D16CAFL, (-1L))), 2L, 0x59E71339L)).s5f, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(4L, 1L, l_197, 3L, l_198[0][2][0], l_199, 0L, 0L)).s6766051412363764)).sec))).hi , (void*)0)));
                l_206 = (l_205 = l_204);
            }
            else
            { /* block id: 68 */
                int32_t l_208[9] = {0x4E013F2BL,0x4E013F2BL,0x4E013F2BL,0x4E013F2BL,0x4E013F2BL,0x4E013F2BL,0x4E013F2BL,0x4E013F2BL,0x4E013F2BL};
                int32_t *l_207 = &l_208[2];
                int32_t *l_209 = &l_208[1];
                int i;
                l_209 = l_207;
            }
            unsigned int result = 0;
            result += l_159;
            result += l_177.s7;
            result += l_177.s6;
            result += l_177.s5;
            result += l_177.s4;
            result += l_177.s3;
            result += l_177.s2;
            result += l_177.s1;
            result += l_177.s0;
            atomic_add(&p_1317->l_special_values[11], result);
        }
        else
        { /* block id: 71 */
            (1 + 1);
        }
    }
    else
    { /* block id: 74 */
        uint16_t *l_218 = (void*)0;
        uint16_t *l_219 = (void*)0;
        uint16_t *l_220 = (void*)0;
        uint16_t *l_221 = (void*)0;
        uint16_t *l_222 = (void*)0;
        uint16_t *l_223[8];
        int32_t l_224 = 1L;
        VECTOR(uint8_t, 2) l_229 = (VECTOR(uint8_t, 2))(0x71L, 255UL);
        int16_t ***l_230 = &p_1317->g_137[1];
        int16_t ***l_231 = &l_139;
        int64_t *l_232[4][5][6] = {{{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0}},{{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0}},{{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0}},{{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0},{&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,&p_1317->g_13[7][7].f0,(void*)0,(void*)0,(void*)0}}};
        VECTOR(uint64_t, 8) l_234 = (VECTOR(uint64_t, 8))(0x19EFFC97FB931D93L, (VECTOR(uint64_t, 4))(0x19EFFC97FB931D93L, (VECTOR(uint64_t, 2))(0x19EFFC97FB931D93L, 0UL), 0UL), 0UL, 0x19EFFC97FB931D93L, 0UL);
        int8_t *l_243 = (void*)0;
        uint16_t l_244 = 1UL;
        int32_t *l_247 = &l_224;
        VECTOR(uint64_t, 16) l_260 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x0CF999E632D1B4F1L), 0x0CF999E632D1B4F1L), 0x0CF999E632D1B4F1L, 1UL, 0x0CF999E632D1B4F1L, (VECTOR(uint64_t, 2))(1UL, 0x0CF999E632D1B4F1L), (VECTOR(uint64_t, 2))(1UL, 0x0CF999E632D1B4F1L), 1UL, 0x0CF999E632D1B4F1L, 1UL, 0x0CF999E632D1B4F1L);
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_223[i] = (void*)0;
        (*l_247) ^= (((safe_mul_func_uint8_t_u_u((((((void*)0 == l_128) & ((+(safe_sub_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((+(((***l_231) = ((safe_lshift_func_uint8_t_u_s((((p_1317->g_116.z++) || (safe_add_func_int64_t_s_s(((*p_109) , (+(((VECTOR(uint8_t, 2))(l_229.xy)).even , (l_233 = ((l_230 = &l_139) == l_231))))), ((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_234.s11)))).xyyy, ((VECTOR(uint64_t, 16))(0x9B7BAD2B1335DF6CL, 0UL, (safe_mul_func_int8_t_s_s(p_106, ((VECTOR(int8_t, 16))(0x68L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((safe_mod_func_uint32_t_u_u((((((p_1317->g_245[1] = (GROUP_DIVERGE(2, 1) && ((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_133[0], ((l_243 != ((((p_1317->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1317->tid, 39))] < p_1317->g_4) <= l_229.x) , 18446744073709551611UL) , l_128)) && l_133[0]))), l_244)) == (*p_107)))) , (void*)0) == l_246) <= GROUP_DIVERGE(1, 1)) || l_134), p_1317->g_4)) , (-1L)), l_229.y, 1L, 0x17L)).zxwwzzzx)), 5L, ((VECTOR(int8_t, 4))(0L)), 4L, 1L)).sa)), ((VECTOR(uint64_t, 4))(0xA1485916AA95A9F5L)), p_108, ((VECTOR(uint64_t, 8))(0x600C539A55307FD2L)))).s8b3f))).wwwwyxwzxwyxyzyx, ((VECTOR(uint64_t, 16))(0x454BE3385F54DCCDL)), ((VECTOR(uint64_t, 16))(0x2862EAA756BD6667L))))).sc))) ^ GROUP_DIVERGE(1, 1)), 7)) , p_106)) > p_108)), p_1317->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1317->tid, 39))])) & p_108) , 0x92E2L), l_229.y))) >= (*p_107))) | 0xBC4FCC527B50DDC2L) ^ p_108), p_1317->g_131)) ^ 9UL) || 0xE8L);
        p_1317->g_248 = p_107;
        l_247 = &l_224;
        if ((*p_1317->g_248))
        { /* block id: 83 */
            VECTOR(int16_t, 16) l_259 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int16_t, 2))(1L, 1L), (VECTOR(int16_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
            VECTOR(int16_t, 2) l_262 = (VECTOR(int16_t, 2))(0L, (-1L));
            int32_t *l_292 = (void*)0;
            int64_t l_293 = 0x0F69EAB360A37912L;
            int i;
            (*l_247) |= (*p_1317->g_248);
            for (p_1317->g_131 = 0; (p_1317->g_131 >= 22); p_1317->g_131 = safe_add_func_uint64_t_u_u(p_1317->g_131, 1))
            { /* block id: 87 */
                VECTOR(int32_t, 4) l_265 = (VECTOR(int32_t, 4))(0x683F28C3L, (VECTOR(int32_t, 2))(0x683F28C3L, 0x04BECA5AL), 0x04BECA5AL);
                int32_t l_291 = (-1L);
                uint16_t l_294[7][8] = {{0x8191L,1UL,0x260DL,1UL,0x8191L,0x8191L,1UL,0x260DL},{0x8191L,1UL,0x260DL,1UL,0x8191L,0x8191L,1UL,0x260DL},{0x8191L,1UL,0x260DL,1UL,0x8191L,0x8191L,1UL,0x260DL},{0x8191L,1UL,0x260DL,1UL,0x8191L,0x8191L,1UL,0x260DL},{0x8191L,1UL,0x260DL,1UL,0x8191L,0x8191L,1UL,0x260DL},{0x8191L,1UL,0x260DL,1UL,0x8191L,0x8191L,1UL,0x260DL},{0x8191L,1UL,0x260DL,1UL,0x8191L,0x8191L,1UL,0x260DL}};
                int32_t **l_295[9][2][6] = {{{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248},{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248}},{{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248},{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248}},{{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248},{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248}},{{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248},{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248}},{{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248},{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248}},{{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248},{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248}},{{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248},{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248}},{{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248},{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248}},{{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248},{&l_247,&p_1317->g_248,&p_1317->g_248,&l_247,&l_246,&p_1317->g_248}}};
                int i, j, k;
                (1 + 1);
            }
        }
        else
        { /* block id: 112 */
            return l_134;
        }
    }
    return p_106;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[28];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 28; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[28];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 28; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[39];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 39; i++)
            l_comm_values[i] = 1;
    struct S2 c_1318;
    struct S2* p_1317 = &c_1318;
    struct S2 c_1319 = {
        (-10L), // p_1317->g_2
        0x733C6338L, // p_1317->g_3
        0x46B6EB6BL, // p_1317->g_4
        0x6FA42B48L, // p_1317->g_7
        {{{0x5A1B6BD7A89A43D5L},{0x3D9535F447FE6D7BL},{0x298E57B790EB5CFEL},{7L},{0x298E57B790EB5CFEL},{0x3D9535F447FE6D7BL},{0x5A1B6BD7A89A43D5L},{6L}},{{0x5A1B6BD7A89A43D5L},{0x3D9535F447FE6D7BL},{0x298E57B790EB5CFEL},{7L},{0x298E57B790EB5CFEL},{0x3D9535F447FE6D7BL},{0x5A1B6BD7A89A43D5L},{6L}},{{0x5A1B6BD7A89A43D5L},{0x3D9535F447FE6D7BL},{0x298E57B790EB5CFEL},{7L},{0x298E57B790EB5CFEL},{0x3D9535F447FE6D7BL},{0x5A1B6BD7A89A43D5L},{6L}},{{0x5A1B6BD7A89A43D5L},{0x3D9535F447FE6D7BL},{0x298E57B790EB5CFEL},{7L},{0x298E57B790EB5CFEL},{0x3D9535F447FE6D7BL},{0x5A1B6BD7A89A43D5L},{6L}},{{0x5A1B6BD7A89A43D5L},{0x3D9535F447FE6D7BL},{0x298E57B790EB5CFEL},{7L},{0x298E57B790EB5CFEL},{0x3D9535F447FE6D7BL},{0x5A1B6BD7A89A43D5L},{6L}},{{0x5A1B6BD7A89A43D5L},{0x3D9535F447FE6D7BL},{0x298E57B790EB5CFEL},{7L},{0x298E57B790EB5CFEL},{0x3D9535F447FE6D7BL},{0x5A1B6BD7A89A43D5L},{6L}},{{0x5A1B6BD7A89A43D5L},{0x3D9535F447FE6D7BL},{0x298E57B790EB5CFEL},{7L},{0x298E57B790EB5CFEL},{0x3D9535F447FE6D7BL},{0x5A1B6BD7A89A43D5L},{6L}},{{0x5A1B6BD7A89A43D5L},{0x3D9535F447FE6D7BL},{0x298E57B790EB5CFEL},{7L},{0x298E57B790EB5CFEL},{0x3D9535F447FE6D7BL},{0x5A1B6BD7A89A43D5L},{6L}}}, // p_1317->g_13
        (VECTOR(uint8_t, 8))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 255UL), 255UL), 255UL, 252UL, 255UL), // p_1317->g_18
        0UL, // p_1317->g_26
        (VECTOR(int32_t, 2))((-1L), 0x31368DE6L), // p_1317->g_36
        (VECTOR(int32_t, 16))(0x4AA41409L, (VECTOR(int32_t, 4))(0x4AA41409L, (VECTOR(int32_t, 2))(0x4AA41409L, 0x7D71AF1EL), 0x7D71AF1EL), 0x7D71AF1EL, 0x4AA41409L, 0x7D71AF1EL, (VECTOR(int32_t, 2))(0x4AA41409L, 0x7D71AF1EL), (VECTOR(int32_t, 2))(0x4AA41409L, 0x7D71AF1EL), 0x4AA41409L, 0x7D71AF1EL, 0x4AA41409L, 0x7D71AF1EL), // p_1317->g_46
        7L, // p_1317->g_73
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), // p_1317->g_87
        (VECTOR(int32_t, 4))(0x34EFB131L, (VECTOR(int32_t, 2))(0x34EFB131L, 0x55033BB9L), 0x55033BB9L), // p_1317->g_111
        0xF7665E0CL, // p_1317->g_114
        {{&p_1317->g_114},{&p_1317->g_114},{&p_1317->g_114}}, // p_1317->g_113
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4EB1D2B3L), 0x4EB1D2B3L), 0x4EB1D2B3L, 1L, 0x4EB1D2B3L, (VECTOR(int32_t, 2))(1L, 0x4EB1D2B3L), (VECTOR(int32_t, 2))(1L, 0x4EB1D2B3L), 1L, 0x4EB1D2B3L, 1L, 0x4EB1D2B3L), // p_1317->g_115
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), // p_1317->g_116
        (void*)0, // p_1317->g_127
        0x53L, // p_1317->g_129
        1UL, // p_1317->g_131
        {(void*)0,(void*)0,(void*)0}, // p_1317->g_137
        {{0x33E4L,0x4B37L,0x33E4L},{0x33E4L,0x4B37L,0x33E4L},{0x33E4L,0x4B37L,0x33E4L},{0x33E4L,0x4B37L,0x33E4L},{0x33E4L,0x4B37L,0x33E4L},{0x33E4L,0x4B37L,0x33E4L},{0x33E4L,0x4B37L,0x33E4L},{0x33E4L,0x4B37L,0x33E4L}}, // p_1317->g_141
        {6L,6L,6L,6L,6L,6L}, // p_1317->g_245
        &p_1317->g_4, // p_1317->g_248
        {0x8A41FB5AL}, // p_1317->g_269
        0xBD2BF5B2D6D7ED5DL, // p_1317->g_283
        {4294967294UL}, // p_1317->g_285
        &p_1317->g_285, // p_1317->g_284
        0x1288DCEFL, // p_1317->g_300
        &p_1317->g_129, // p_1317->g_301
        {{{(-1L),0x64861EA8L,(-1L),(-1L)}},{{(-1L),0x64861EA8L,(-1L),(-1L)}},{{(-1L),0x64861EA8L,(-1L),(-1L)}},{{(-1L),0x64861EA8L,(-1L),(-1L)}},{{(-1L),0x64861EA8L,(-1L),(-1L)}},{{(-1L),0x64861EA8L,(-1L),(-1L)}},{{(-1L),0x64861EA8L,(-1L),(-1L)}},{{(-1L),0x64861EA8L,(-1L),(-1L)}}}, // p_1317->g_306
        0L, // p_1317->g_792
        8L, // p_1317->g_887
        &p_1317->g_887, // p_1317->g_886
        {{(void*)0,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,(void*)0},{(void*)0,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,(void*)0},{(void*)0,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,(void*)0},{(void*)0,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,&p_1317->g_886,(void*)0}}, // p_1317->g_885
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), // p_1317->g_926
        (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0L), 0L), 0L, 7L, 0L, (VECTOR(int32_t, 2))(7L, 0L), (VECTOR(int32_t, 2))(7L, 0L), 7L, 0L, 7L, 0L), // p_1317->g_927
        (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 5L), 5L), // p_1317->g_928
        0x765684B2L, // p_1317->g_940
        0x23L, // p_1317->g_953
        &p_1317->g_953, // p_1317->g_952
        &p_1317->g_952, // p_1317->g_951
        (void*)0, // p_1317->g_967
        (VECTOR(uint8_t, 2))(248UL, 0UL), // p_1317->g_970
        (VECTOR(uint64_t, 4))(0x7CC59A74124D632EL, (VECTOR(uint64_t, 2))(0x7CC59A74124D632EL, 18446744073709551615UL), 18446744073709551615UL), // p_1317->g_991
        {&p_1317->g_137[0],&p_1317->g_137[0]}, // p_1317->g_1010
        &p_1317->g_1010[0], // p_1317->g_1009
        (VECTOR(uint16_t, 16))(0x5F7BL, (VECTOR(uint16_t, 4))(0x5F7BL, (VECTOR(uint16_t, 2))(0x5F7BL, 0x09B5L), 0x09B5L), 0x09B5L, 0x5F7BL, 0x09B5L, (VECTOR(uint16_t, 2))(0x5F7BL, 0x09B5L), (VECTOR(uint16_t, 2))(0x5F7BL, 0x09B5L), 0x5F7BL, 0x09B5L, 0x5F7BL, 0x09B5L), // p_1317->g_1013
        (VECTOR(int32_t, 16))(0x1D305880L, (VECTOR(int32_t, 4))(0x1D305880L, (VECTOR(int32_t, 2))(0x1D305880L, 0x2E8345EFL), 0x2E8345EFL), 0x2E8345EFL, 0x1D305880L, 0x2E8345EFL, (VECTOR(int32_t, 2))(0x1D305880L, 0x2E8345EFL), (VECTOR(int32_t, 2))(0x1D305880L, 0x2E8345EFL), 0x1D305880L, 0x2E8345EFL, 0x1D305880L, 0x2E8345EFL), // p_1317->g_1014
        0x6B4F9DBEL, // p_1317->g_1043
        (void*)0, // p_1317->g_1045
        &p_1317->g_1045, // p_1317->g_1044
        6L, // p_1317->g_1049
        (void*)0, // p_1317->g_1070
        {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}, // p_1317->g_1076
        {0xEFA1F9E3L}, // p_1317->g_1077
        {0xF5E30BCFL}, // p_1317->g_1078
        {0xF05346D1L}, // p_1317->g_1079
        {4294967291UL}, // p_1317->g_1080
        (VECTOR(uint16_t, 4))(0xBEE9L, (VECTOR(uint16_t, 2))(0xBEE9L, 0xAAFFL), 0xAAFFL), // p_1317->g_1098
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x4E77L), 0x4E77L), // p_1317->g_1100
        (VECTOR(uint8_t, 2))(0x34L, 0UL), // p_1317->g_1132
        (VECTOR(uint8_t, 2))(255UL, 0xF9L), // p_1317->g_1134
        {1UL}, // p_1317->g_1136
        {1UL}, // p_1317->g_1137
        {4294967295UL}, // p_1317->g_1138
        {5UL}, // p_1317->g_1139
        {0x4D517E99L}, // p_1317->g_1140
        (VECTOR(int32_t, 8))(0x778A5D26L, (VECTOR(int32_t, 4))(0x778A5D26L, (VECTOR(int32_t, 2))(0x778A5D26L, 1L), 1L), 1L, 0x778A5D26L, 1L), // p_1317->g_1155
        (VECTOR(uint8_t, 4))(0x57L, (VECTOR(uint8_t, 2))(0x57L, 0x48L), 0x48L), // p_1317->g_1215
        {{{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940}},{{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940}},{{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940}},{{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940}},{{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940}},{{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940}},{{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940}},{{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940},{&p_1317->g_4,&p_1317->g_940,(void*)0,(void*)0,&p_1317->g_940}}}, // p_1317->g_1231
        (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 1L), 1L), // p_1317->g_1244
        4294967295UL, // p_1317->g_1264
        {{&p_1317->g_4,&p_1317->g_4,(void*)0,(void*)0,(void*)0,&p_1317->g_4,&p_1317->g_4,(void*)0,(void*)0},{&p_1317->g_4,&p_1317->g_4,(void*)0,(void*)0,(void*)0,&p_1317->g_4,&p_1317->g_4,(void*)0,(void*)0},{&p_1317->g_4,&p_1317->g_4,(void*)0,(void*)0,(void*)0,&p_1317->g_4,&p_1317->g_4,(void*)0,(void*)0},{&p_1317->g_4,&p_1317->g_4,(void*)0,(void*)0,(void*)0,&p_1317->g_4,&p_1317->g_4,(void*)0,(void*)0}}, // p_1317->g_1270
        (void*)0, // p_1317->g_1271
        &p_1317->g_248, // p_1317->g_1274
        &p_1317->g_7, // p_1317->g_1275
        {&p_1317->g_141[0][2],&p_1317->g_141[0][2],&p_1317->g_141[0][2]}, // p_1317->g_1288
        0, // p_1317->v_collective
        sequence_input[get_global_id(0)], // p_1317->global_0_offset
        sequence_input[get_global_id(1)], // p_1317->global_1_offset
        sequence_input[get_global_id(2)], // p_1317->global_2_offset
        sequence_input[get_local_id(0)], // p_1317->local_0_offset
        sequence_input[get_local_id(1)], // p_1317->local_1_offset
        sequence_input[get_local_id(2)], // p_1317->local_2_offset
        sequence_input[get_group_id(0)], // p_1317->group_0_offset
        sequence_input[get_group_id(1)], // p_1317->group_1_offset
        sequence_input[get_group_id(2)], // p_1317->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 39)), permutations[0][get_linear_local_id()])), // p_1317->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1318 = c_1319;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1317);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1317->g_2, "p_1317->g_2", print_hash_value);
    transparent_crc(p_1317->g_3, "p_1317->g_3", print_hash_value);
    transparent_crc(p_1317->g_4, "p_1317->g_4", print_hash_value);
    transparent_crc(p_1317->g_7, "p_1317->g_7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1317->g_13[i][j].f0, "p_1317->g_13[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1317->g_18.s0, "p_1317->g_18.s0", print_hash_value);
    transparent_crc(p_1317->g_18.s1, "p_1317->g_18.s1", print_hash_value);
    transparent_crc(p_1317->g_18.s2, "p_1317->g_18.s2", print_hash_value);
    transparent_crc(p_1317->g_18.s3, "p_1317->g_18.s3", print_hash_value);
    transparent_crc(p_1317->g_18.s4, "p_1317->g_18.s4", print_hash_value);
    transparent_crc(p_1317->g_18.s5, "p_1317->g_18.s5", print_hash_value);
    transparent_crc(p_1317->g_18.s6, "p_1317->g_18.s6", print_hash_value);
    transparent_crc(p_1317->g_18.s7, "p_1317->g_18.s7", print_hash_value);
    transparent_crc(p_1317->g_26, "p_1317->g_26", print_hash_value);
    transparent_crc(p_1317->g_36.x, "p_1317->g_36.x", print_hash_value);
    transparent_crc(p_1317->g_36.y, "p_1317->g_36.y", print_hash_value);
    transparent_crc(p_1317->g_46.s0, "p_1317->g_46.s0", print_hash_value);
    transparent_crc(p_1317->g_46.s1, "p_1317->g_46.s1", print_hash_value);
    transparent_crc(p_1317->g_46.s2, "p_1317->g_46.s2", print_hash_value);
    transparent_crc(p_1317->g_46.s3, "p_1317->g_46.s3", print_hash_value);
    transparent_crc(p_1317->g_46.s4, "p_1317->g_46.s4", print_hash_value);
    transparent_crc(p_1317->g_46.s5, "p_1317->g_46.s5", print_hash_value);
    transparent_crc(p_1317->g_46.s6, "p_1317->g_46.s6", print_hash_value);
    transparent_crc(p_1317->g_46.s7, "p_1317->g_46.s7", print_hash_value);
    transparent_crc(p_1317->g_46.s8, "p_1317->g_46.s8", print_hash_value);
    transparent_crc(p_1317->g_46.s9, "p_1317->g_46.s9", print_hash_value);
    transparent_crc(p_1317->g_46.sa, "p_1317->g_46.sa", print_hash_value);
    transparent_crc(p_1317->g_46.sb, "p_1317->g_46.sb", print_hash_value);
    transparent_crc(p_1317->g_46.sc, "p_1317->g_46.sc", print_hash_value);
    transparent_crc(p_1317->g_46.sd, "p_1317->g_46.sd", print_hash_value);
    transparent_crc(p_1317->g_46.se, "p_1317->g_46.se", print_hash_value);
    transparent_crc(p_1317->g_46.sf, "p_1317->g_46.sf", print_hash_value);
    transparent_crc(p_1317->g_73, "p_1317->g_73", print_hash_value);
    transparent_crc(p_1317->g_87.x, "p_1317->g_87.x", print_hash_value);
    transparent_crc(p_1317->g_87.y, "p_1317->g_87.y", print_hash_value);
    transparent_crc(p_1317->g_87.z, "p_1317->g_87.z", print_hash_value);
    transparent_crc(p_1317->g_87.w, "p_1317->g_87.w", print_hash_value);
    transparent_crc(p_1317->g_111.x, "p_1317->g_111.x", print_hash_value);
    transparent_crc(p_1317->g_111.y, "p_1317->g_111.y", print_hash_value);
    transparent_crc(p_1317->g_111.z, "p_1317->g_111.z", print_hash_value);
    transparent_crc(p_1317->g_111.w, "p_1317->g_111.w", print_hash_value);
    transparent_crc(p_1317->g_114, "p_1317->g_114", print_hash_value);
    transparent_crc(p_1317->g_115.s0, "p_1317->g_115.s0", print_hash_value);
    transparent_crc(p_1317->g_115.s1, "p_1317->g_115.s1", print_hash_value);
    transparent_crc(p_1317->g_115.s2, "p_1317->g_115.s2", print_hash_value);
    transparent_crc(p_1317->g_115.s3, "p_1317->g_115.s3", print_hash_value);
    transparent_crc(p_1317->g_115.s4, "p_1317->g_115.s4", print_hash_value);
    transparent_crc(p_1317->g_115.s5, "p_1317->g_115.s5", print_hash_value);
    transparent_crc(p_1317->g_115.s6, "p_1317->g_115.s6", print_hash_value);
    transparent_crc(p_1317->g_115.s7, "p_1317->g_115.s7", print_hash_value);
    transparent_crc(p_1317->g_115.s8, "p_1317->g_115.s8", print_hash_value);
    transparent_crc(p_1317->g_115.s9, "p_1317->g_115.s9", print_hash_value);
    transparent_crc(p_1317->g_115.sa, "p_1317->g_115.sa", print_hash_value);
    transparent_crc(p_1317->g_115.sb, "p_1317->g_115.sb", print_hash_value);
    transparent_crc(p_1317->g_115.sc, "p_1317->g_115.sc", print_hash_value);
    transparent_crc(p_1317->g_115.sd, "p_1317->g_115.sd", print_hash_value);
    transparent_crc(p_1317->g_115.se, "p_1317->g_115.se", print_hash_value);
    transparent_crc(p_1317->g_115.sf, "p_1317->g_115.sf", print_hash_value);
    transparent_crc(p_1317->g_116.x, "p_1317->g_116.x", print_hash_value);
    transparent_crc(p_1317->g_116.y, "p_1317->g_116.y", print_hash_value);
    transparent_crc(p_1317->g_116.z, "p_1317->g_116.z", print_hash_value);
    transparent_crc(p_1317->g_116.w, "p_1317->g_116.w", print_hash_value);
    transparent_crc(p_1317->g_129, "p_1317->g_129", print_hash_value);
    transparent_crc(p_1317->g_131, "p_1317->g_131", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1317->g_141[i][j], "p_1317->g_141[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1317->g_245[i], "p_1317->g_245[i]", print_hash_value);

    }
    transparent_crc(p_1317->g_283, "p_1317->g_283", print_hash_value);
    transparent_crc(p_1317->g_300, "p_1317->g_300", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1317->g_306[i][j][k], "p_1317->g_306[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1317->g_792, "p_1317->g_792", print_hash_value);
    transparent_crc(p_1317->g_887, "p_1317->g_887", print_hash_value);
    transparent_crc(p_1317->g_926.x, "p_1317->g_926.x", print_hash_value);
    transparent_crc(p_1317->g_926.y, "p_1317->g_926.y", print_hash_value);
    transparent_crc(p_1317->g_926.z, "p_1317->g_926.z", print_hash_value);
    transparent_crc(p_1317->g_926.w, "p_1317->g_926.w", print_hash_value);
    transparent_crc(p_1317->g_927.s0, "p_1317->g_927.s0", print_hash_value);
    transparent_crc(p_1317->g_927.s1, "p_1317->g_927.s1", print_hash_value);
    transparent_crc(p_1317->g_927.s2, "p_1317->g_927.s2", print_hash_value);
    transparent_crc(p_1317->g_927.s3, "p_1317->g_927.s3", print_hash_value);
    transparent_crc(p_1317->g_927.s4, "p_1317->g_927.s4", print_hash_value);
    transparent_crc(p_1317->g_927.s5, "p_1317->g_927.s5", print_hash_value);
    transparent_crc(p_1317->g_927.s6, "p_1317->g_927.s6", print_hash_value);
    transparent_crc(p_1317->g_927.s7, "p_1317->g_927.s7", print_hash_value);
    transparent_crc(p_1317->g_927.s8, "p_1317->g_927.s8", print_hash_value);
    transparent_crc(p_1317->g_927.s9, "p_1317->g_927.s9", print_hash_value);
    transparent_crc(p_1317->g_927.sa, "p_1317->g_927.sa", print_hash_value);
    transparent_crc(p_1317->g_927.sb, "p_1317->g_927.sb", print_hash_value);
    transparent_crc(p_1317->g_927.sc, "p_1317->g_927.sc", print_hash_value);
    transparent_crc(p_1317->g_927.sd, "p_1317->g_927.sd", print_hash_value);
    transparent_crc(p_1317->g_927.se, "p_1317->g_927.se", print_hash_value);
    transparent_crc(p_1317->g_927.sf, "p_1317->g_927.sf", print_hash_value);
    transparent_crc(p_1317->g_928.x, "p_1317->g_928.x", print_hash_value);
    transparent_crc(p_1317->g_928.y, "p_1317->g_928.y", print_hash_value);
    transparent_crc(p_1317->g_928.z, "p_1317->g_928.z", print_hash_value);
    transparent_crc(p_1317->g_928.w, "p_1317->g_928.w", print_hash_value);
    transparent_crc(p_1317->g_940, "p_1317->g_940", print_hash_value);
    transparent_crc(p_1317->g_953, "p_1317->g_953", print_hash_value);
    transparent_crc(p_1317->g_970.x, "p_1317->g_970.x", print_hash_value);
    transparent_crc(p_1317->g_970.y, "p_1317->g_970.y", print_hash_value);
    transparent_crc(p_1317->g_991.x, "p_1317->g_991.x", print_hash_value);
    transparent_crc(p_1317->g_991.y, "p_1317->g_991.y", print_hash_value);
    transparent_crc(p_1317->g_991.z, "p_1317->g_991.z", print_hash_value);
    transparent_crc(p_1317->g_991.w, "p_1317->g_991.w", print_hash_value);
    transparent_crc(p_1317->g_1013.s0, "p_1317->g_1013.s0", print_hash_value);
    transparent_crc(p_1317->g_1013.s1, "p_1317->g_1013.s1", print_hash_value);
    transparent_crc(p_1317->g_1013.s2, "p_1317->g_1013.s2", print_hash_value);
    transparent_crc(p_1317->g_1013.s3, "p_1317->g_1013.s3", print_hash_value);
    transparent_crc(p_1317->g_1013.s4, "p_1317->g_1013.s4", print_hash_value);
    transparent_crc(p_1317->g_1013.s5, "p_1317->g_1013.s5", print_hash_value);
    transparent_crc(p_1317->g_1013.s6, "p_1317->g_1013.s6", print_hash_value);
    transparent_crc(p_1317->g_1013.s7, "p_1317->g_1013.s7", print_hash_value);
    transparent_crc(p_1317->g_1013.s8, "p_1317->g_1013.s8", print_hash_value);
    transparent_crc(p_1317->g_1013.s9, "p_1317->g_1013.s9", print_hash_value);
    transparent_crc(p_1317->g_1013.sa, "p_1317->g_1013.sa", print_hash_value);
    transparent_crc(p_1317->g_1013.sb, "p_1317->g_1013.sb", print_hash_value);
    transparent_crc(p_1317->g_1013.sc, "p_1317->g_1013.sc", print_hash_value);
    transparent_crc(p_1317->g_1013.sd, "p_1317->g_1013.sd", print_hash_value);
    transparent_crc(p_1317->g_1013.se, "p_1317->g_1013.se", print_hash_value);
    transparent_crc(p_1317->g_1013.sf, "p_1317->g_1013.sf", print_hash_value);
    transparent_crc(p_1317->g_1014.s0, "p_1317->g_1014.s0", print_hash_value);
    transparent_crc(p_1317->g_1014.s1, "p_1317->g_1014.s1", print_hash_value);
    transparent_crc(p_1317->g_1014.s2, "p_1317->g_1014.s2", print_hash_value);
    transparent_crc(p_1317->g_1014.s3, "p_1317->g_1014.s3", print_hash_value);
    transparent_crc(p_1317->g_1014.s4, "p_1317->g_1014.s4", print_hash_value);
    transparent_crc(p_1317->g_1014.s5, "p_1317->g_1014.s5", print_hash_value);
    transparent_crc(p_1317->g_1014.s6, "p_1317->g_1014.s6", print_hash_value);
    transparent_crc(p_1317->g_1014.s7, "p_1317->g_1014.s7", print_hash_value);
    transparent_crc(p_1317->g_1014.s8, "p_1317->g_1014.s8", print_hash_value);
    transparent_crc(p_1317->g_1014.s9, "p_1317->g_1014.s9", print_hash_value);
    transparent_crc(p_1317->g_1014.sa, "p_1317->g_1014.sa", print_hash_value);
    transparent_crc(p_1317->g_1014.sb, "p_1317->g_1014.sb", print_hash_value);
    transparent_crc(p_1317->g_1014.sc, "p_1317->g_1014.sc", print_hash_value);
    transparent_crc(p_1317->g_1014.sd, "p_1317->g_1014.sd", print_hash_value);
    transparent_crc(p_1317->g_1014.se, "p_1317->g_1014.se", print_hash_value);
    transparent_crc(p_1317->g_1014.sf, "p_1317->g_1014.sf", print_hash_value);
    transparent_crc(p_1317->g_1043, "p_1317->g_1043", print_hash_value);
    transparent_crc(p_1317->g_1049, "p_1317->g_1049", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1317->g_1076[i].f0, "p_1317->g_1076[i].f0", print_hash_value);

    }
    transparent_crc(p_1317->g_1077.f0, "p_1317->g_1077.f0", print_hash_value);
    transparent_crc(p_1317->g_1078.f0, "p_1317->g_1078.f0", print_hash_value);
    transparent_crc(p_1317->g_1080.f0, "p_1317->g_1080.f0", print_hash_value);
    transparent_crc(p_1317->g_1098.x, "p_1317->g_1098.x", print_hash_value);
    transparent_crc(p_1317->g_1098.y, "p_1317->g_1098.y", print_hash_value);
    transparent_crc(p_1317->g_1098.z, "p_1317->g_1098.z", print_hash_value);
    transparent_crc(p_1317->g_1098.w, "p_1317->g_1098.w", print_hash_value);
    transparent_crc(p_1317->g_1100.x, "p_1317->g_1100.x", print_hash_value);
    transparent_crc(p_1317->g_1100.y, "p_1317->g_1100.y", print_hash_value);
    transparent_crc(p_1317->g_1100.z, "p_1317->g_1100.z", print_hash_value);
    transparent_crc(p_1317->g_1100.w, "p_1317->g_1100.w", print_hash_value);
    transparent_crc(p_1317->g_1132.x, "p_1317->g_1132.x", print_hash_value);
    transparent_crc(p_1317->g_1132.y, "p_1317->g_1132.y", print_hash_value);
    transparent_crc(p_1317->g_1134.x, "p_1317->g_1134.x", print_hash_value);
    transparent_crc(p_1317->g_1134.y, "p_1317->g_1134.y", print_hash_value);
    transparent_crc(p_1317->g_1138.f0, "p_1317->g_1138.f0", print_hash_value);
    transparent_crc(p_1317->g_1139.f0, "p_1317->g_1139.f0", print_hash_value);
    transparent_crc(p_1317->g_1140.f0, "p_1317->g_1140.f0", print_hash_value);
    transparent_crc(p_1317->g_1155.s0, "p_1317->g_1155.s0", print_hash_value);
    transparent_crc(p_1317->g_1155.s1, "p_1317->g_1155.s1", print_hash_value);
    transparent_crc(p_1317->g_1155.s2, "p_1317->g_1155.s2", print_hash_value);
    transparent_crc(p_1317->g_1155.s3, "p_1317->g_1155.s3", print_hash_value);
    transparent_crc(p_1317->g_1155.s4, "p_1317->g_1155.s4", print_hash_value);
    transparent_crc(p_1317->g_1155.s5, "p_1317->g_1155.s5", print_hash_value);
    transparent_crc(p_1317->g_1155.s6, "p_1317->g_1155.s6", print_hash_value);
    transparent_crc(p_1317->g_1155.s7, "p_1317->g_1155.s7", print_hash_value);
    transparent_crc(p_1317->g_1215.x, "p_1317->g_1215.x", print_hash_value);
    transparent_crc(p_1317->g_1215.y, "p_1317->g_1215.y", print_hash_value);
    transparent_crc(p_1317->g_1215.z, "p_1317->g_1215.z", print_hash_value);
    transparent_crc(p_1317->g_1215.w, "p_1317->g_1215.w", print_hash_value);
    transparent_crc(p_1317->g_1244.x, "p_1317->g_1244.x", print_hash_value);
    transparent_crc(p_1317->g_1244.y, "p_1317->g_1244.y", print_hash_value);
    transparent_crc(p_1317->g_1244.z, "p_1317->g_1244.z", print_hash_value);
    transparent_crc(p_1317->g_1244.w, "p_1317->g_1244.w", print_hash_value);
    transparent_crc(p_1317->g_1264, "p_1317->g_1264", print_hash_value);
    transparent_crc(p_1317->v_collective, "p_1317->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 28; i++)
            transparent_crc(p_1317->g_special_values[i + 28 * get_linear_group_id()], "p_1317->g_special_values[i + 28 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 28; i++)
            transparent_crc(p_1317->l_special_values[i], "p_1317->l_special_values[i]", print_hash_value);
    transparent_crc(p_1317->l_comm_values[get_linear_local_id()], "p_1317->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1317->g_comm_values[get_linear_group_id() * 39 + get_linear_local_id()], "p_1317->g_comm_values[get_linear_group_id() * 39 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
