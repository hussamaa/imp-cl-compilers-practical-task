// --atomics 51 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 62,88,1 -l 1,44,1
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

__constant uint32_t permutations[10][44] = {
{1,40,6,5,19,37,28,42,3,31,34,13,41,9,12,11,35,23,43,38,17,22,7,39,25,0,29,36,27,18,26,10,14,21,8,15,4,30,16,33,24,32,20,2}, // permutation 0
{30,13,25,28,19,17,42,6,32,40,29,43,21,10,41,38,16,35,39,2,8,11,14,3,12,15,24,37,22,4,34,36,31,0,18,26,9,33,23,7,1,27,20,5}, // permutation 1
{35,32,19,2,14,8,37,24,16,17,36,40,4,42,10,6,25,43,38,41,33,15,12,39,13,7,34,29,31,26,0,20,18,27,28,1,23,21,11,3,5,30,9,22}, // permutation 2
{30,38,31,12,20,8,40,23,29,39,5,22,25,19,26,6,7,1,4,3,9,37,13,24,41,42,10,35,11,18,21,28,32,43,0,16,17,33,2,14,34,15,27,36}, // permutation 3
{12,29,8,5,6,25,20,23,28,22,37,18,24,15,31,41,21,11,26,27,40,9,2,13,33,42,36,38,1,16,4,7,17,0,35,14,34,32,43,39,30,3,19,10}, // permutation 4
{15,19,8,1,32,7,22,9,10,21,23,35,24,17,13,6,43,2,41,36,14,30,18,27,31,12,26,42,38,25,20,37,28,39,40,33,11,29,3,34,16,5,4,0}, // permutation 5
{22,16,30,23,38,9,13,11,32,34,1,41,3,14,33,39,12,6,36,24,4,15,0,8,19,27,26,18,2,29,35,7,20,31,10,40,42,25,17,43,21,28,37,5}, // permutation 6
{40,38,42,0,23,11,4,22,14,37,27,18,35,6,32,33,43,8,26,29,25,39,30,36,10,12,28,21,41,15,9,34,19,24,1,20,5,13,2,31,16,7,3,17}, // permutation 7
{18,22,1,21,39,24,5,13,16,8,6,25,32,10,29,17,37,40,27,38,3,12,20,14,2,41,34,26,31,0,35,19,28,11,33,7,15,9,42,30,4,43,23,36}, // permutation 8
{25,23,5,17,16,26,1,33,0,14,4,8,36,18,21,15,27,43,42,10,30,20,34,11,35,41,3,22,19,38,40,12,29,32,13,24,9,28,39,7,6,31,37,2} // permutation 9
};

// Seed: 3707531822

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   volatile uint32_t  f1;
   volatile int32_t  f2;
   uint16_t  f3;
};

union U1 {
   volatile uint64_t  f0;
   volatile int32_t  f1;
   uint64_t  f2;
   int8_t * volatile  f3;
};

union U2 {
   volatile int32_t  f0;
   int16_t  f1;
   volatile uint64_t  f2;
   int32_t  f3;
   int8_t * f4;
};

struct S3 {
    int32_t g_2;
    volatile int32_t g_5;
    int32_t g_6[3];
    volatile int32_t g_9;
    volatile int32_t g_10;
    volatile int32_t g_11;
    int32_t g_12;
    volatile VECTOR(int16_t, 8) g_17;
    VECTOR(int8_t, 8) g_36;
    int8_t *g_35[2][3];
    VECTOR(int16_t, 16) g_74;
    int8_t **g_80;
    int8_t *** volatile g_79;
    int32_t g_82;
    int32_t g_84;
    volatile uint32_t g_85;
    volatile struct S0 g_93;
    int32_t * volatile * volatile g_94;
    VECTOR(uint64_t, 8) g_99;
    VECTOR(uint32_t, 2) g_101;
    int32_t * volatile g_104;
    union U1 g_118[2];
    union U1 * volatile g_117;
    union U1 * volatile * volatile g_119;
    VECTOR(int32_t, 4) g_128;
    volatile int16_t *g_131[5];
    volatile VECTOR(uint16_t, 4) g_134;
    uint32_t g_136;
    struct S0 g_147;
    VECTOR(int16_t, 16) g_172;
    volatile VECTOR(int8_t, 8) g_177;
    VECTOR(uint8_t, 4) g_178;
    int64_t g_179;
    int32_t *g_193;
    int32_t **g_192;
    volatile uint64_t * volatile g_204;
    volatile union U2 g_206;
    volatile VECTOR(uint8_t, 16) g_218;
    VECTOR(uint32_t, 2) g_223;
    volatile struct S0 g_242;
    volatile struct S0 * volatile g_243;
    VECTOR(uint8_t, 4) g_269;
    VECTOR(uint16_t, 2) g_292;
    VECTOR(uint16_t, 16) g_294;
    VECTOR(int32_t, 8) g_296;
    volatile struct S0 g_302;
    volatile struct S0 * volatile g_303;
    struct S0 g_324;
    volatile int16_t g_361;
    volatile uint32_t g_362;
    volatile struct S0 g_367;
    VECTOR(int16_t, 2) g_386;
    volatile struct S0 * volatile g_409;
    volatile VECTOR(uint32_t, 4) g_417;
    struct S0 g_433;
    struct S0 g_461;
    uint32_t g_472;
    union U1 *g_486;
    volatile VECTOR(int32_t, 16) g_491;
    uint8_t * volatile * volatile g_520;
    uint8_t * volatile * volatile * volatile g_521;
    VECTOR(int8_t, 4) g_543;
    VECTOR(uint8_t, 16) g_565;
    volatile VECTOR(int16_t, 2) g_579;
    VECTOR(uint32_t, 2) g_584;
    VECTOR(uint32_t, 2) g_585;
    VECTOR(uint32_t, 16) g_589;
    union U2 g_595;
    struct S0 *g_600;
    struct S0 **g_599;
    struct S0 *** volatile g_598;
    int32_t * volatile g_602;
    int32_t * volatile g_603;
    volatile struct S0 * volatile g_604[4];
    uint32_t g_609;
    struct S0 g_610;
    struct S0 g_611;
    struct S0 g_625;
    struct S0 * volatile g_626[6];
    struct S0 * volatile g_627[1][10][8];
    struct S0 * volatile g_628;
    struct S0 g_674;
    volatile struct S0 g_675[3][5];
    volatile struct S0 g_676;
    VECTOR(int32_t, 4) g_720;
    struct S0 g_742;
    struct S0 g_743;
    uint32_t *g_763;
    uint32_t **g_762[2][8][9];
    uint32_t *** volatile g_764;
    VECTOR(int32_t, 4) g_798;
    struct S0 g_812;
    struct S0 g_813;
    struct S0 g_816[7][10][2];
    struct S0 g_834;
    VECTOR(int8_t, 2) g_847;
    volatile VECTOR(uint32_t, 16) g_852;
    volatile uint64_t g_856[3];
    volatile uint64_t *g_855;
    VECTOR(int16_t, 8) g_860;
    VECTOR(int64_t, 8) g_861;
    volatile struct S0 g_878;
    volatile uint64_t **g_891;
    VECTOR(int32_t, 8) g_893;
    volatile VECTOR(int32_t, 8) g_894;
    volatile VECTOR(int8_t, 8) g_917;
    volatile VECTOR(int16_t, 8) g_940;
    VECTOR(int16_t, 2) g_941;
    volatile VECTOR(uint32_t, 8) g_945;
    int32_t * volatile g_981;
    int32_t * volatile g_982;
    volatile VECTOR(uint8_t, 2) g_987;
    int32_t * volatile g_997[3];
    int32_t * volatile g_998;
    VECTOR(int16_t, 2) g_1003;
    volatile struct S0 g_1037;
    volatile struct S0 g_1038;
    struct S0 g_1070;
    int64_t g_1073[3];
    int16_t *g_1076;
    VECTOR(uint32_t, 8) g_1097;
    VECTOR(int64_t, 8) g_1124;
    VECTOR(int64_t, 8) g_1125;
    VECTOR(int64_t, 16) g_1128;
    VECTOR(int64_t, 4) g_1130;
    VECTOR(int16_t, 8) g_1133;
    int32_t g_1168;
    uint8_t *g_1172;
    uint8_t * volatile *g_1171;
    volatile union U2 g_1181;
    VECTOR(int8_t, 4) g_1189;
    int32_t * volatile g_1195;
    int32_t * volatile g_1198;
    int32_t * volatile g_1200;
    int32_t * volatile g_1202;
    VECTOR(uint32_t, 16) g_1223;
    int64_t *g_1227;
    int64_t **g_1226;
    int64_t *** volatile g_1228;
    int64_t *** volatile g_1229;
    int64_t *** volatile g_1230;
    uint64_t g_1256;
    VECTOR(int64_t, 16) g_1298;
    struct S0 * volatile g_1307;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S3 * p_1340);
int16_t  func_18(int8_t * p_19, int16_t  p_20, int64_t  p_21, uint32_t  p_22, int32_t  p_23, struct S3 * p_1340);
int8_t * func_24(int8_t * p_25, struct S3 * p_1340);
int32_t  func_31(uint16_t  p_32, int8_t * p_33, struct S3 * p_1340);
uint8_t  func_39(int8_t * p_40, int32_t  p_41, int8_t * p_42, int8_t * p_43, struct S3 * p_1340);
struct S0  func_45(int8_t * p_46, struct S3 * p_1340);
int8_t * func_47(uint32_t  p_48, uint32_t  p_49, struct S3 * p_1340);
int8_t  func_51(int8_t * p_52, uint64_t  p_53, int8_t * p_54, int8_t * p_55, int32_t  p_56, struct S3 * p_1340);
int8_t  func_66(int8_t * p_67, struct S3 * p_1340);
int64_t  func_70(int8_t * p_71, int16_t  p_72, struct S3 * p_1340);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1340->g_2 p_1340->g_131 p_1340->g_1226 p_1340->g_1230 p_1340->g_941 p_1340->g_1073 p_1340->g_204 p_1340->g_118.f0 p_1340->g_1097 p_1340->g_1128 p_1340->g_893 p_1340->g_1133 p_1340->g_192 p_1340->g_193 p_1340->g_80 p_1340->g_35 p_1340->g_625 p_1340->g_628 p_1340->g_603 p_1340->g_178 p_1340->g_99 p_1340->g_82 p_1340->g_589 p_1340->g_386 p_1340->g_461.f0 p_1340->g_674 p_1340->g_104 p_1340->g_675 p_1340->g_324.f1 p_1340->g_742 p_1340->g_743 p_1340->g_762 p_1340->g_764 p_1340->g_521 p_1340->g_520 p_1340->g_433.f1 p_1340->g_812 p_1340->g_585 p_1340->g_816 p_1340->g_294 p_1340->g_763 p_1340->g_609 p_1340->g_409 p_1340->g_242 p_1340->g_1307 p_1340->g_491 p_1340->g_860
 * writes: p_1340->g_2 p_1340->g_6 p_1340->g_12 p_1340->g_136 p_1340->g_1226 p_1340->g_1256 p_1340->g_1073 p_1340->g_893 p_1340->g_486 p_1340->g_193 p_1340->g_324.f0 p_1340->g_433 p_1340->g_82 p_1340->g_99 p_1340->g_147.f3 p_1340->g_625.f3 p_1340->g_610.f0 p_1340->g_676 p_1340->g_461.f3 p_1340->g_324.f3 p_1340->g_762 p_1340->g_179 p_1340->g_813 p_1340->g_294 p_1340->g_609 p_1340->g_816
 */
uint64_t  func_1(struct S3 * p_1340)
{ /* block id: 4 */
    uint32_t l_1145 = 0x8AF35C4FL;
    int32_t l_1219 = 0x466E7C8FL;
    int32_t l_1252[9] = {0x21FB2FD7L,0x21FB2FD7L,0x21FB2FD7L,0x21FB2FD7L,0x21FB2FD7L,0x21FB2FD7L,0x21FB2FD7L,0x21FB2FD7L,0x21FB2FD7L};
    int32_t l_1276 = 3L;
    int32_t l_1280 = 0x3C9360C7L;
    int32_t l_1281 = (-1L);
    int32_t l_1282 = 0x32D23C0CL;
    int32_t l_1283[4] = {(-3L),(-3L),(-3L),(-3L)};
    VECTOR(uint16_t, 4) l_1297 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x5086L), 0x5086L);
    uint64_t *l_1321[4][3] = {{(void*)0,&p_1340->g_1256,&p_1340->g_1256},{(void*)0,&p_1340->g_1256,&p_1340->g_1256},{(void*)0,&p_1340->g_1256,&p_1340->g_1256},{(void*)0,&p_1340->g_1256,&p_1340->g_1256}};
    uint64_t **l_1320 = &l_1321[3][2];
    uint64_t **l_1326 = (void*)0;
    int i, j;
    for (p_1340->g_2 = 0; (p_1340->g_2 != (-2)); --p_1340->g_2)
    { /* block id: 7 */
        int16_t l_1147 = 8L;
        int32_t l_1254 = 0L;
        uint64_t l_1270[8][6][3] = {{{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL}},{{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL}},{{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL}},{{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL}},{{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL}},{{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL}},{{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL}},{{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL},{0x73B9030D7464C45DL,0x73B9030D7464C45DL,1UL}}};
        uint16_t *l_1273 = &p_1340->g_324.f3;
        uint16_t **l_1272 = &l_1273;
        int8_t l_1275 = 0x20L;
        int32_t l_1279 = (-1L);
        uint8_t l_1286 = 1UL;
        int32_t l_1309 = (-6L);
        int32_t l_1311 = (-10L);
        int32_t l_1313 = 1L;
        int32_t l_1314 = 0x20E52849L;
        uint32_t l_1315 = 1UL;
        int32_t *l_1339 = &l_1281;
        int i, j, k;
        for (p_1340->g_6[0] = 0; (p_1340->g_6[0] == (-1)); p_1340->g_6[0] = safe_sub_func_int64_t_s_s(p_1340->g_6[0], 2))
        { /* block id: 10 */
            VECTOR(int8_t, 2) l_1119 = (VECTOR(int8_t, 2))((-7L), (-6L));
            VECTOR(int64_t, 8) l_1129 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x51A7342AE1103271L), 0x51A7342AE1103271L), 0x51A7342AE1103271L, (-1L), 0x51A7342AE1103271L);
            VECTOR(int64_t, 2) l_1235 = (VECTOR(int64_t, 2))(0x1F0718F2D4DAF52DL, 0L);
            VECTOR(int64_t, 16) l_1246 = (VECTOR(int64_t, 16))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0L), 0L), 0L, 5L, 0L, (VECTOR(int64_t, 2))(5L, 0L), (VECTOR(int64_t, 2))(5L, 0L), 5L, 0L, 5L, 0L);
            uint32_t l_1267 = 0x29D8EEA0L;
            VECTOR(int32_t, 2) l_1284 = (VECTOR(int32_t, 2))(0x4106B789L, 0x4037FC2FL);
            int64_t l_1289 = (-1L);
            VECTOR(int64_t, 4) l_1303 = (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x7383D12C556842E5L), 0x7383D12C556842E5L);
            int64_t ***l_1325 = &p_1340->g_1226;
            int i;
            for (p_1340->g_12 = 0; (p_1340->g_12 != 9); p_1340->g_12 = safe_add_func_uint16_t_u_u(p_1340->g_12, 8))
            { /* block id: 13 */
                int8_t *l_26 = (void*)0;
                int64_t *l_1127 = &p_1340->g_1073[0];
                uint8_t *l_1142 = (void*)0;
                uint8_t *l_1143[10][4][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                uint32_t l_1144 = 0xF526AE24L;
                int32_t *l_1146[3];
                uint16_t *l_1225 = (void*)0;
                VECTOR(int64_t, 8) l_1236 = (VECTOR(int64_t, 8))(0x690289194DDA6757L, (VECTOR(int64_t, 4))(0x690289194DDA6757L, (VECTOR(int64_t, 2))(0x690289194DDA6757L, 0x0B1E53D0A67876B5L), 0x0B1E53D0A67876B5L), 0x0B1E53D0A67876B5L, 0x690289194DDA6757L, 0x0B1E53D0A67876B5L);
                int32_t l_1253[7][4] = {{0x3A6540E7L,4L,0x3A6540E7L,0x3A6540E7L},{0x3A6540E7L,4L,0x3A6540E7L,0x3A6540E7L},{0x3A6540E7L,4L,0x3A6540E7L,0x3A6540E7L},{0x3A6540E7L,4L,0x3A6540E7L,0x3A6540E7L},{0x3A6540E7L,4L,0x3A6540E7L,0x3A6540E7L},{0x3A6540E7L,4L,0x3A6540E7L,0x3A6540E7L},{0x3A6540E7L,4L,0x3A6540E7L,0x3A6540E7L}};
                uint32_t l_1290 = 0UL;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1146[i] = (void*)0;
                if ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0x48F4L, ((VECTOR(int16_t, 4))(p_1340->g_17.s0426)), func_18(func_24(l_26, p_1340), l_1119.x, (p_1340->g_625.f0 ^ p_1340->g_36.s1), (safe_rshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((0xF36204F83CEDA578L || ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 16))(p_1340->g_1124.s0731013750403627)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-6L), 0x15C312469A40C11FL)), ((VECTOR(int64_t, 4))(p_1340->g_1125.s5542)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(0x2D63D76D7E9F400FL, ((*l_1127) = (safe_unary_minus_func_uint16_t_u(p_1340->g_893.s4))), ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(p_1340->g_1128.s35ddf242)).odd, ((VECTOR(int64_t, 2))(l_1129.s36)).xyxy))), ((VECTOR(int64_t, 8))(p_1340->g_1130.zzzyyzxz)), 0x692691933F0915C4L, 8L)).lo)), (-6L), 0x6864ECBA9B781801L))))).even)))).s50, ((VECTOR(int64_t, 2))(0x1C30D2201799A7ADL, 0x0EA23A4C24C8B346L))))).hi), (p_1340->g_128.w |= (l_1145 = ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1340->g_1133.s0374)))).x, (safe_add_func_uint16_t_u_u(((((VECTOR(int32_t, 2))((-1L), (-3L))).odd <= (((l_1144 = ((FAKE_DIVERGE(p_1340->local_1_offset, get_local_id(1), 10) , ((!(safe_mul_func_int16_t_s_s(((FAKE_DIVERGE(p_1340->global_0_offset, get_global_id(0), 10) < (-7L)) != (safe_rshift_func_uint8_t_u_u((p_1340->g_269.w = (safe_div_func_int64_t_s_s(0L, p_1340->g_comm_values[p_1340->tid]))), 6))), 65535UL))) <= p_1340->g_813.f0)) <= p_1340->g_36.s6)) && p_1340->g_611.f3) , 0x39FF3978L)) && 3L), 0x3BA2L)))) & p_1340->g_743.f0))))) == 0L), 1)), l_1147, p_1340), ((VECTOR(int16_t, 4))(9L)), 0x4BCAL, 1L, 0x17ABL, l_1119.x, 0x4B9BL, 0x0B9CL)).s90)).even, l_1219)))
                { /* block id: 479 */
                    uint32_t *l_1222 = &l_1144;
                    uint32_t *l_1224 = &p_1340->g_136;
                    (*p_1340->g_1230) = ((p_1340->g_131[1] != (((((*l_1224) = ((VECTOR(uint32_t, 8))(((*l_1222) = ((*p_1340->g_763)++)), 0x85720D01L, 4294967295UL, 0xD50047B1L, ((VECTOR(uint32_t, 4))(p_1340->g_1223.s3843)))).s1) == 4294967295UL) <= 0x27A80265L) , l_1225)) , p_1340->g_1226);
                }
                else
                { /* block id: 484 */
                    int64_t ***l_1238 = &p_1340->g_1226;
                    int64_t ****l_1237 = &l_1238;
                    VECTOR(int64_t, 16) l_1245 = (VECTOR(int64_t, 16))(0x29FDE964E84C3424L, (VECTOR(int64_t, 4))(0x29FDE964E84C3424L, (VECTOR(int64_t, 2))(0x29FDE964E84C3424L, 0x648C12C441C0046CL), 0x648C12C441C0046CL), 0x648C12C441C0046CL, 0x29FDE964E84C3424L, 0x648C12C441C0046CL, (VECTOR(int64_t, 2))(0x29FDE964E84C3424L, 0x648C12C441C0046CL), (VECTOR(int64_t, 2))(0x29FDE964E84C3424L, 0x648C12C441C0046CL), 0x29FDE964E84C3424L, 0x648C12C441C0046CL, 0x29FDE964E84C3424L, 0x648C12C441C0046CL);
                    uint64_t *l_1255 = &p_1340->g_1256;
                    uint16_t **l_1271 = &l_1225;
                    uint16_t ***l_1274 = &l_1272;
                    int32_t l_1277 = 0x6ECB8FBCL;
                    int32_t l_1285 = 0L;
                    int i;
                    l_1254 = (safe_mul_func_uint16_t_u_u(p_1340->g_941.x, (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(0x354D9B841F466418L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x5CA7508BF34C91D8L, ((VECTOR(int64_t, 2))(l_1235.xx)), (-9L))).even)), ((VECTOR(int64_t, 2))(0x11CB019AE3B67FFEL, 1L)), ((VECTOR(int64_t, 2))(l_1236.s47)), (-10L))), ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(0x28C3B57E9D0ED24DL, (((*l_1237) = &p_1340->g_1226) == ((((((p_1340->g_9 ^ (l_1147 , (((safe_mod_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(0xC19FD15566241BCFL, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(l_1245.s9130)).odd, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(l_1246.s823435a0)).s47, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(4L, (-9L))).xxxxyxxyxxxxxyyx)).sf8)))))).xxyx)).y)) && (safe_sub_func_uint8_t_u_u(((((+(safe_unary_minus_func_int16_t_s(0L))) || p_1340->g_1130.z) <= (((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(p_1340->g_834.f3, ((VECTOR(uint16_t, 2))(0x4174L, 0x1D90L)), 0xE671L)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((0xFC482D19L && 8L), ((VECTOR(uint16_t, 2))(65533UL)), ((VECTOR(uint16_t, 4))(0x54D7L)), 0x3313L, l_1246.s2, ((VECTOR(uint16_t, 4))(1UL)), l_1119.x, 1UL, 0x7DC2L)).odd)), 65530UL, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 2))(65535UL)), 65535UL, 1UL, 0UL)).s21))).yxxxxyyy, ((VECTOR(uint16_t, 8))(0x814AL))))).s6, 1)) && l_1147) > GROUP_DIVERGE(1, 1))) != 7UL), l_1145))) == l_1147), l_1147)) != (-4L)), p_1340->g_742.f0)) || (*p_1340->g_193)) & (**p_1340->g_192)))) ^ l_1252[4]) || l_1253[6][0]) > (*p_1340->g_193)) <= l_1235.x) , &p_1340->g_1226)), 0x4955CA876A43AA69L, 0x252C0630BA7B7809L)), ((VECTOR(int64_t, 4))(0x1BB338FF45AB7854L))))).zwzzyzyw, ((VECTOR(int64_t, 8))(1L))))).s4, FAKE_DIVERGE(p_1340->group_0_offset, get_group_id(0), 10)))));
                    if ((l_1219 = (l_1235.y || (((*l_1255) = FAKE_DIVERGE(p_1340->group_1_offset, get_group_id(1), 10)) , (p_1340->g_893.s5 ^= (l_1245.sa | ((((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(l_1147, (safe_lshift_func_int8_t_s_u(l_1129.s5, l_1267)))) , ((((l_1245.sd <= (safe_rshift_func_uint8_t_u_s((l_1270[6][0][1] <= ((*l_1127) &= (+(l_1271 != ((*l_1274) = l_1272))))), 7))) ^ (*p_1340->g_204)) , 1L) && l_1235.y)), p_1340->g_1097.s2)) != l_1252[4]), 254UL)), 2)) ^ GROUP_DIVERGE(1, 1)) >= l_1275) & p_1340->g_1128.sf)))))))
                    { /* block id: 492 */
                        int8_t l_1278 = 1L;
                        --l_1286;
                        l_1254 |= l_1219;
                        ++l_1290;
                    }
                    else
                    { /* block id: 496 */
                        uint32_t l_1304 = 4294967292UL;
                        l_1280 ^= (safe_add_func_uint64_t_u_u(((8L < (((p_1340->g_486 = &p_1340->g_118[0]) == (void*)0) && ((~(~(p_1340->g_1133.s6 | 3L))) | (!((VECTOR(uint16_t, 4))(l_1297.zyzz)).x)))) != l_1284.y), ((*l_1127) = ((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(p_1340->g_1298.s02)), 0L, (-5L), (-1L), ((p_1340->g_625.f3 = l_1276) & (safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s(((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_1303.zxxwxxyxxyxyxzxw)))).s5 && 0x59E4475FA75DED51L) & ((p_1340->g_367.f1 , 4294967289UL) | (**p_1340->g_192))), l_1245.s9)) != p_1340->g_584.x) , FAKE_DIVERGE(p_1340->group_2_offset, get_group_id(2), 10)), l_1304))), ((VECTOR(int64_t, 8))(1L)), 0x3D51E4B76AEA1DE8L, 0x7BC85F4DB11F47A8L)), ((VECTOR(int64_t, 16))(0x6370318DA8E345F3L)), ((VECTOR(int64_t, 16))((-2L)))))).s5)));
                        (*p_1340->g_192) = (*p_1340->g_192);
                    }
                }
                for (l_1279 = 6; (l_1279 >= 22); l_1279 = safe_add_func_uint64_t_u_u(l_1279, 1))
                { /* block id: 506 */
                    int32_t l_1308 = 0L;
                    VECTOR(int32_t, 8) l_1310 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x21F7E184L), 0x21F7E184L), 0x21F7E184L, 0L, 0x21F7E184L);
                    int32_t l_1312 = 0x6E23C13FL;
                    int i;
                    (*p_1340->g_1307) = func_45((*p_1340->g_80), p_1340);
                    l_1315++;
                }
                (*p_1340->g_192) = (*p_1340->g_192);
            }
            for (p_1340->g_625.f3 = 0; (p_1340->g_625.f3 < 9); p_1340->g_625.f3 = safe_add_func_uint64_t_u_u(p_1340->g_625.f3, 1))
            { /* block id: 514 */
                uint64_t ***l_1322 = &l_1320;
                uint64_t **l_1324 = (void*)0;
                uint64_t ***l_1323 = &l_1324;
                (*l_1323) = ((*l_1322) = l_1320);
            }
            (*l_1325) = (*p_1340->g_1230);
        }
        l_1282 = (((VECTOR(uint32_t, 2))(2UL, 1UL)).even != (((void*)0 == l_1326) >= (safe_mul_func_int8_t_s_s((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((safe_div_func_int8_t_s_s(0L, (safe_add_func_uint8_t_u_u(l_1283[0], 0L)))) >= (((safe_rshift_func_int16_t_s_u(((l_1219 = l_1252[5]) , (safe_mod_func_int16_t_s_s((+(safe_lshift_func_uint8_t_u_u(((p_1340->g_491.sc , (((*l_1339) = (3UL | l_1147)) < l_1270[5][1][0])) && l_1276), l_1314))), (-10L)))), p_1340->g_860.s5)) | 0x087AC19F57A9177AL) || 0x5FL)), FAKE_DIVERGE(p_1340->local_0_offset, get_local_id(0), 10), 0UL, 0UL, ((VECTOR(uint64_t, 4))(0x9A78D48741C9D306L)))).even)).wzzxxxyy, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).s6423374523655064, ((VECTOR(uint64_t, 16))(0x35DE555756486487L))))).sb1)), 0xEB6209EFA7B43C95L, 1UL)).w <= 2L), FAKE_DIVERGE(p_1340->group_2_offset, get_group_id(2), 10)))));
        if (l_1283[0])
            continue;
    }
    return l_1252[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_433.f3 p_1340->g_742.f0 p_1340->g_461.f3 p_1340->g_834.f1 p_1340->g_119 p_1340->g_117 p_1340->g_118 p_1340->g_742.f1 p_1340->g_763 p_1340->g_609 p_1340->g_1168 p_1340->g_192 p_1340->g_193 p_1340->g_82 p_1340->g_6 p_1340->g_847 p_1340->g_1171 p_1340->g_798 p_1340->g_982 p_1340->g_1181 p_1340->g_878.f1 p_1340->g_1189 p_1340->g_1125 p_1340->g_134
 * writes: p_1340->g_433.f3 p_1340->g_742.f0 p_1340->g_461.f3 p_1340->g_798 p_1340->g_82
 */
int16_t  func_18(int8_t * p_19, int16_t  p_20, int64_t  p_21, uint32_t  p_22, int32_t  p_23, struct S3 * p_1340)
{ /* block id: 447 */
    uint32_t *l_1162 = (void*)0;
    int32_t l_1175 = 0x02BD6570L;
    int16_t *l_1178 = (void*)0;
    VECTOR(uint64_t, 16) l_1184 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x581841739AE16780L), 0x581841739AE16780L), 0x581841739AE16780L, 0UL, 0x581841739AE16780L, (VECTOR(uint64_t, 2))(0UL, 0x581841739AE16780L), (VECTOR(uint64_t, 2))(0UL, 0x581841739AE16780L), 0UL, 0x581841739AE16780L, 0UL, 0x581841739AE16780L);
    int32_t *l_1192 = (void*)0;
    int32_t *l_1193 = &p_1340->g_82;
    int16_t l_1194 = 1L;
    int32_t *l_1196 = (void*)0;
    int32_t *l_1197 = (void*)0;
    int32_t *l_1199 = (void*)0;
    int32_t *l_1201 = (void*)0;
    int32_t *l_1203[3][4] = {{&p_1340->g_12,&p_1340->g_2,&p_1340->g_12,&p_1340->g_12},{&p_1340->g_12,&p_1340->g_2,&p_1340->g_12,&p_1340->g_12},{&p_1340->g_12,&p_1340->g_2,&p_1340->g_12,&p_1340->g_12}};
    uint16_t l_1204 = 0x5FF1L;
    uint16_t *l_1210 = &p_1340->g_610.f3;
    uint16_t **l_1209 = &l_1210;
    uint16_t l_1211 = 0x5DEAL;
    int16_t *l_1216[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_1217[5][5] = {{0xD62AC960L,9UL,0x249A19B1L,0x54EBAAB1L,0x249A19B1L},{0xD62AC960L,9UL,0x249A19B1L,0x54EBAAB1L,0x249A19B1L},{0xD62AC960L,9UL,0x249A19B1L,0x54EBAAB1L,0x249A19B1L},{0xD62AC960L,9UL,0x249A19B1L,0x54EBAAB1L,0x249A19B1L},{0xD62AC960L,9UL,0x249A19B1L,0x54EBAAB1L,0x249A19B1L}};
    uint16_t l_1218 = 0x926BL;
    int i, j;
    for (p_1340->g_433.f3 = 0; (p_1340->g_433.f3 != 11); ++p_1340->g_433.f3)
    { /* block id: 450 */
        int64_t l_1176 = (-1L);
        int32_t *l_1177 = &l_1175;
        for (p_1340->g_742.f0 = (-23); (p_1340->g_742.f0 != 55); ++p_1340->g_742.f0)
        { /* block id: 453 */
            int8_t l_1163 = 0x21L;
            uint8_t *l_1170[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t **l_1169[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1169[i] = &l_1170[7];
            for (p_1340->g_461.f3 = 0; (p_1340->g_461.f3 >= 30); p_1340->g_461.f3 = safe_add_func_uint8_t_u_u(p_1340->g_461.f3, 7))
            { /* block id: 456 */
                VECTOR(uint16_t, 2) l_1156 = (VECTOR(uint16_t, 2))(5UL, 65535UL);
                int32_t *l_1173 = (void*)0;
                int32_t *l_1174[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                p_1340->g_798.w |= (l_1175 = ((((((p_1340->g_834.f1 , ((**p_1340->g_119) , (!(((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_1156.yyyxyyxx)).s3, (p_21 | (((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(((((l_1162 != (void*)0) | l_1163) != (safe_mul_func_uint16_t_u_u(p_1340->g_742.f1, (safe_div_func_uint32_t_u_u((0L | ((*p_1340->g_763) >= 1UL)), 4294967290UL))))) <= p_1340->g_1168))), 14)) > 0UL), l_1156.x)) >= p_20) , FAKE_DIVERGE(p_1340->group_2_offset, get_group_id(2), 10))))) > l_1156.x) != 0UL)))) && (**p_1340->g_192)) >= p_1340->g_847.y) , l_1169[7]) != p_1340->g_1171) <= p_22));
            }
        }
        if (l_1176)
            break;
        (*l_1177) = 1L;
        if ((FAKE_DIVERGE(p_1340->global_2_offset, get_global_id(2), 10) != ((*l_1177) , (&p_20 != l_1178))))
        { /* block id: 463 */
            return p_21;
        }
        else
        { /* block id: 465 */
            if ((*p_1340->g_982))
                break;
        }
    }
    l_1204 = (safe_mul_func_int8_t_s_s((l_1175 , (((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))((l_1175 = l_1175), (((p_1340->g_1181 , ((safe_add_func_int64_t_s_s(p_1340->g_878.f1, (((VECTOR(uint64_t, 4))(l_1184.s9c48)).y & ((VECTOR(int64_t, 2))(8L, 8L)).hi))) || (l_1184.s2 ^ (((-7L) && (safe_mul_func_int16_t_s_s(9L, (((VECTOR(int8_t, 4))(p_1340->g_1189.zzzw)).x , (((l_1175 = l_1184.sd) == (((*l_1193) &= (safe_lshift_func_uint16_t_u_s(0x6BF6L, 9))) | (-5L))) || p_20))))) >= p_21)))) > p_1340->g_1125.s4) || 0x90512BF34FB9DA8BL), 0x14L, ((VECTOR(int8_t, 8))(0x25L)), l_1194, 1L, 0x2DL, 0x23L, 7L)).hi, ((VECTOR(int8_t, 8))(0x61L))))).s42, ((VECTOR(int8_t, 2))((-4L)))))).lo , (*l_1193))), 0x55L));
    l_1218 = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((((*l_1209) = (((p_20 , (void*)0) != (void*)0) , &l_1204)) != (p_1340->g_134.y , &l_1204)), ((*l_1193) = (l_1217[2][4] ^= (p_20 || (((l_1211 ^ ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((8L ^ 0UL) <= 0x45L) , 0x79F4L), 12)), FAKE_DIVERGE(p_1340->global_1_offset, get_global_id(1), 10))) <= p_23)) , 0x6C274A0BL) <= p_22)))))), 4));
    (*l_1193) = (-1L);
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_35 p_1340->g_192 p_1340->g_893 p_1340->g_894 p_1340->g_6 p_1340->g_82 p_1340->g_812.f0
 * writes: p_1340->g_193 p_1340->g_834.f3 p_1340->g_82 p_1340->g_812.f0
 */
int8_t * func_24(int8_t * p_25, struct S3 * p_1340)
{ /* block id: 14 */
    int64_t l_29 = (-1L);
    int64_t l_30 = 0x35EA28C7FFFAA232L;
    uint32_t l_935 = 4294967295UL;
    int32_t l_1000 = 0x08B4406BL;
    int32_t *l_1005 = &p_1340->g_84;
    uint32_t **l_1054 = &p_1340->g_763;
    int32_t l_1057 = 9L;
    uint32_t l_1079 = 0x01E75BD5L;
    uint64_t *l_1081 = (void*)0;
    uint64_t **l_1080 = &l_1081;
    VECTOR(uint32_t, 16) l_1099 = (VECTOR(uint32_t, 16))(0x16AED244L, (VECTOR(uint32_t, 4))(0x16AED244L, (VECTOR(uint32_t, 2))(0x16AED244L, 0UL), 0UL), 0UL, 0x16AED244L, 0UL, (VECTOR(uint32_t, 2))(0x16AED244L, 0UL), (VECTOR(uint32_t, 2))(0x16AED244L, 0UL), 0x16AED244L, 0UL, 0x16AED244L, 0UL);
    int8_t *l_1118 = (void*)0;
    int i;
    if ((safe_sub_func_uint32_t_u_u(l_29, l_30)))
    { /* block id: 15 */
        uint64_t l_34 = 18446744073709551614UL;
        int32_t *l_898 = &p_1340->g_82;
        (*l_898) |= func_31(l_34, p_1340->g_35[0][1], p_1340);
    }
    else
    { /* block id: 363 */
        uint8_t ***l_905 = (void*)0;
        int32_t l_912 = 2L;
        VECTOR(int8_t, 4) l_916 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1DL), 0x1DL);
        int32_t l_923 = (-7L);
        VECTOR(int32_t, 4) l_1001 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L);
        int32_t **l_1051[2];
        uint32_t **l_1053[8][8][1] = {{{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763}},{{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763}},{{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763}},{{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763}},{{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763}},{{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763}},{{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763}},{{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763},{&p_1340->g_763}}};
        uint8_t l_1059 = 1UL;
        uint64_t **l_1082 = &l_1081;
        VECTOR(uint32_t, 8) l_1098 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x3728822EL), 0x3728822EL), 0x3728822EL, 0UL, 0x3728822EL);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1051[i] = &p_1340->g_193;
        for (p_1340->g_812.f0 = (-14); (p_1340->g_812.f0 > 12); p_1340->g_812.f0++)
        { /* block id: 366 */
            uint32_t l_913 = 4294967290UL;
            VECTOR(int32_t, 16) l_944 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x44076C06L), 0x44076C06L), 0x44076C06L, 0L, 0x44076C06L, (VECTOR(int32_t, 2))(0L, 0x44076C06L), (VECTOR(int32_t, 2))(0L, 0x44076C06L), 0L, 0x44076C06L, 0L, 0x44076C06L);
            uint32_t l_952 = 4294967290UL;
            VECTOR(int16_t, 2) l_978 = (VECTOR(int16_t, 2))(0x1485L, (-1L));
            VECTOR(int16_t, 2) l_1002 = (VECTOR(int16_t, 2))(0x31CEL, 0x45D3L);
            int32_t l_1035 = 0x163A2907L;
            int32_t l_1058 = 0L;
            VECTOR(int32_t, 16) l_1104 = (VECTOR(int32_t, 16))(0x2CB504B3L, (VECTOR(int32_t, 4))(0x2CB504B3L, (VECTOR(int32_t, 2))(0x2CB504B3L, 0x7F396FC8L), 0x7F396FC8L), 0x7F396FC8L, 0x2CB504B3L, 0x7F396FC8L, (VECTOR(int32_t, 2))(0x2CB504B3L, 0x7F396FC8L), (VECTOR(int32_t, 2))(0x2CB504B3L, 0x7F396FC8L), 0x2CB504B3L, 0x7F396FC8L, 0x2CB504B3L, 0x7F396FC8L);
            struct S0 **l_1107[9][3][8] = {{{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600}},{{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600}},{{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600}},{{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600}},{{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600}},{{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600}},{{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600}},{{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600}},{{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600},{(void*)0,&p_1340->g_600,&p_1340->g_600,(void*)0,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600,&p_1340->g_600}}};
            uint8_t l_1112 = 0xACL;
            int i, j, k;
            (1 + 1);
        }
    }
    atomic_or(&p_1340->l_atomic_reduction[0], (-1L) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1340->v_collective += p_1340->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if ((atomic_inc(&p_1340->g_atomic_input[51 * get_linear_group_id() + 31]) == 4))
    { /* block id: 436 */
        VECTOR(uint16_t, 4) l_1115 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xAEAFL), 0xAEAFL);
        int i;
        l_1115.z--;
        unsigned int result = 0;
        result += l_1115.w;
        result += l_1115.z;
        result += l_1115.y;
        result += l_1115.x;
        atomic_add(&p_1340->g_special_values[51 * get_linear_group_id() + 31], result);
    }
    else
    { /* block id: 438 */
        (1 + 1);
    }
    return l_1118;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_192 p_1340->g_893 p_1340->g_894 p_1340->g_6
 * writes: p_1340->g_193 p_1340->g_834.f3
 */
int32_t  func_31(uint16_t  p_32, int8_t * p_33, struct S3 * p_1340)
{ /* block id: 16 */
    VECTOR(int64_t, 8) l_845 = (VECTOR(int64_t, 8))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x29F8692AB6DE5B41L), 0x29F8692AB6DE5B41L), 0x29F8692AB6DE5B41L, (-10L), 0x29F8692AB6DE5B41L);
    VECTOR(int8_t, 4) l_846 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L);
    VECTOR(int8_t, 2) l_848 = (VECTOR(int8_t, 2))((-1L), 0x7DL);
    uint64_t *l_857[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int16_t, 8) l_862 = (VECTOR(int16_t, 8))(0x445BL, (VECTOR(int16_t, 4))(0x445BL, (VECTOR(int16_t, 2))(0x445BL, 1L), 1L), 1L, 0x445BL, 1L);
    int64_t l_877[6][3][4] = {{{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L}},{{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L}},{{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L}},{{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L}},{{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L}},{{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L},{0x208D4E719D02FC49L,(-1L),0x51DD83A5543107BBL,1L}}};
    int32_t *l_892 = &p_1340->g_6[0];
    int32_t l_897 = 0x044CBD80L;
    int i, j, k;
    for (p_32 = 0; (p_32 <= 33); p_32 = safe_add_func_int64_t_s_s(p_32, 3))
    { /* block id: 19 */
        int8_t *l_44 = (void*)0;
        int32_t l_842 = 0x7B322C29L;
        int32_t *l_849 = &p_1340->g_82;
        uint64_t l_873[5][1][8] = {{{0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L,0x9474FB1285AD9DD1L,0UL,0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L}},{{0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L,0x9474FB1285AD9DD1L,0UL,0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L}},{{0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L,0x9474FB1285AD9DD1L,0UL,0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L}},{{0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L,0x9474FB1285AD9DD1L,0UL,0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L}},{{0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L,0x9474FB1285AD9DD1L,0UL,0UL,0x9474FB1285AD9DD1L,0xD3DCE01BD1E57521L}}};
        int64_t *l_874 = (void*)0;
        int64_t *l_875 = (void*)0;
        int64_t *l_876[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_876[i] = &p_1340->g_179;
        (1 + 1);
    }
    (*p_1340->g_192) = l_892;
    l_897 ^= ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))((-4L), 0x2B13A44BL)).yyxyxxxxxyxyyxyx, ((VECTOR(int32_t, 2))(p_1340->g_893.s77)).yyxyyxyxyxyxyyyx, ((VECTOR(int32_t, 2))(p_1340->g_894.s50)).yyxxyyyyyyxxyyxx))), ((VECTOR(int32_t, 8))(0x57B966F6L, (-1L), 1L, (safe_lshift_func_uint16_t_u_u((p_1340->g_834.f3 = (((*l_892) <= (l_892 == &p_1340->g_84)) | (*l_892))), 4)), p_32, 0x1552A136L, 0x4254B74EL, 0L)).s2464501774513622))).sa;
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_6 p_1340->g_35 p_1340->g_74 p_1340->g_79 p_1340->g_85 p_1340->g_93 p_1340->g_94 p_1340->g_99 p_1340->g_101 p_1340->g_82 p_1340->g_2 p_1340->g_104 p_1340->g_84 p_1340->g_117 p_1340->g_119 p_1340->g_128 p_1340->g_131 p_1340->g_134 p_1340->g_136 p_1340->g_147 p_1340->g_172 p_1340->g_177 p_1340->g_178 p_1340->g_179 p_1340->g_192 p_1340->g_193 p_1340->g_17 p_1340->g_204 p_1340->g_206 p_1340->g_218 p_1340->g_223 p_1340->g_242 p_1340->g_243 p_1340->g_324.f0 p_1340->g_367 p_1340->g_386 p_1340->g_302.f3 p_1340->g_302.f2 p_1340->g_303 p_1340->g_409 p_1340->g_417 p_1340->g_433 p_1340->g_461 p_1340->g_118.f0 p_1340->g_491 p_1340->g_520 p_1340->g_521 p_1340->g_80 p_1340->g_543 p_1340->g_565 p_1340->g_579 p_1340->g_584 p_1340->g_585 p_1340->g_589 p_1340->g_118 p_1340->g_598 p_1340->g_603 p_1340->g_294 p_1340->g_609 p_1340->g_610 p_1340->g_625 p_1340->g_628 p_1340->g_674 p_1340->g_675 p_1340->g_324.f1 p_1340->g_742 p_1340->g_743 p_1340->g_762 p_1340->g_764 p_1340->g_812 p_1340->g_813.f3 p_1340->g_816 p_1340->g_763
 * writes: p_1340->g_74 p_1340->g_80 p_1340->g_85 p_1340->g_82 p_1340->g_84 p_1340->g_117 p_1340->g_136 p_1340->g_99 p_1340->g_193 p_1340->g_93 p_1340->g_324.f0 p_1340->g_242 p_1340->g_172 p_1340->g_386 p_1340->g_461 p_1340->g_472 p_1340->g_486 p_1340->g_520 p_1340->g_35 p_1340->g_585 p_1340->g_599 p_1340->g_367 p_1340->g_609 p_1340->g_611 p_1340->g_128 p_1340->g_433 p_1340->g_147.f3 p_1340->g_625.f3 p_1340->g_610.f0 p_1340->g_676 p_1340->g_324.f3 p_1340->g_762 p_1340->g_179 p_1340->g_813 p_1340->g_294 p_1340->g_834
 */
uint8_t  func_39(int8_t * p_40, int32_t  p_41, int8_t * p_42, int8_t * p_43, struct S3 * p_1340)
{ /* block id: 20 */
    int16_t l_50 = 0x7DEFL;
    int8_t *l_57 = (void*)0;
    int32_t l_110 = 0x2BD6516CL;
    int8_t *l_606 = (void*)0;
    int8_t *l_607 = (void*)0;
    uint32_t *l_608 = &p_1340->g_609;
    int32_t *l_835 = (void*)0;
    int32_t *l_836 = (void*)0;
    int32_t *l_837[1][8][9] = {{{&p_1340->g_6[1],&p_1340->g_82,&p_1340->g_6[0],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[0],&p_1340->g_82,&p_1340->g_6[1]},{&p_1340->g_6[1],&p_1340->g_82,&p_1340->g_6[0],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[0],&p_1340->g_82,&p_1340->g_6[1]},{&p_1340->g_6[1],&p_1340->g_82,&p_1340->g_6[0],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[0],&p_1340->g_82,&p_1340->g_6[1]},{&p_1340->g_6[1],&p_1340->g_82,&p_1340->g_6[0],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[0],&p_1340->g_82,&p_1340->g_6[1]},{&p_1340->g_6[1],&p_1340->g_82,&p_1340->g_6[0],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[0],&p_1340->g_82,&p_1340->g_6[1]},{&p_1340->g_6[1],&p_1340->g_82,&p_1340->g_6[0],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[0],&p_1340->g_82,&p_1340->g_6[1]},{&p_1340->g_6[1],&p_1340->g_82,&p_1340->g_6[0],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[0],&p_1340->g_82,&p_1340->g_6[1]},{&p_1340->g_6[1],&p_1340->g_82,&p_1340->g_6[0],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[1],&p_1340->g_6[0],&p_1340->g_82,&p_1340->g_6[1]}}};
    uint32_t l_838 = 1UL;
    int16_t l_841 = 0x381CL;
    int i, j, k;
    p_1340->g_834 = func_45(func_47(p_1340->g_6[0], (((*l_608) &= ((l_50 != (l_110 = func_51(l_57, (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((4L == (safe_rshift_func_int8_t_s_u(func_66(l_57, p_1340), p_41))), p_1340->g_6[2])) & (safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(p_1340->g_99.s5, 0x186BL)) <= l_110), 0x0BL))), (-3L))) & 0x40817FF2L), l_50)), l_57, l_57, l_110, p_1340))) ^ p_1340->g_294.s4)) <= p_41), p_1340), p_1340);
    l_838--;
    (*p_1340->g_192) = &l_110;
    return l_841;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_324.f0 p_1340->g_625 p_1340->g_628 p_1340->g_603 p_1340->g_178 p_1340->g_99 p_1340->g_82 p_1340->g_589 p_1340->g_386 p_1340->g_461.f0 p_1340->g_674 p_1340->g_104 p_1340->g_675 p_1340->g_192 p_1340->g_204 p_1340->g_118.f0 p_1340->g_324.f1 p_1340->g_742 p_1340->g_743 p_1340->g_762 p_1340->g_764 p_1340->g_585 p_1340->g_521 p_1340->g_520 p_1340->g_433.f1 p_1340->g_812 p_1340->g_813.f3 p_1340->g_816 p_1340->g_294 p_1340->g_763 p_1340->g_609 p_1340->g_409 p_1340->g_242
 * writes: p_1340->g_324.f0 p_1340->g_433 p_1340->g_82 p_1340->g_99 p_1340->g_147.f3 p_1340->g_625.f3 p_1340->g_610.f0 p_1340->g_676 p_1340->g_461.f3 p_1340->g_324.f3 p_1340->g_193 p_1340->g_762 p_1340->g_179 p_1340->g_486 p_1340->g_813 p_1340->g_294 p_1340->g_609
 */
struct S0  func_45(int8_t * p_46, struct S3 * p_1340)
{ /* block id: 223 */
    uint32_t l_620 = 4294967295UL;
    int32_t l_690 = (-8L);
    int32_t l_695 = 0x67D80D37L;
    int32_t l_696 = (-3L);
    int32_t l_697 = (-7L);
    int32_t l_698 = (-2L);
    int32_t l_699 = (-7L);
    int32_t l_700 = 0x35D0CBDCL;
    int32_t l_701 = (-1L);
    int32_t l_708 = 0x29CEC17FL;
    int32_t l_709 = 9L;
    int8_t l_710 = (-6L);
    int32_t l_712 = 0x692F7ED2L;
    VECTOR(int32_t, 16) l_721 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x26BD1FD2L), 0x26BD1FD2L), 0x26BD1FD2L, 8L, 0x26BD1FD2L, (VECTOR(int32_t, 2))(8L, 0x26BD1FD2L), (VECTOR(int32_t, 2))(8L, 0x26BD1FD2L), 8L, 0x26BD1FD2L, 8L, 0x26BD1FD2L);
    VECTOR(int32_t, 2) l_828 = (VECTOR(int32_t, 2))(0x220CCB51L, 0L);
    int32_t *l_833 = &l_701;
    int i;
    --l_620;
    for (p_1340->g_324.f0 = 0; (p_1340->g_324.f0 == 11); p_1340->g_324.f0++)
    { /* block id: 227 */
        uint8_t ***l_649 = (void*)0;
        int32_t l_662 = 0L;
        uint32_t l_689 = 0UL;
        int32_t l_705 = 0x65A12292L;
        int32_t l_707[2][1];
        VECTOR(int32_t, 4) l_794 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-7L)), (-7L));
        int16_t l_830[5] = {1L,1L,1L,1L,1L};
        uint32_t l_832 = 0x07AE5872L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_707[i][j] = 0x77C5AD45L;
        }
        (*p_1340->g_628) = p_1340->g_625;
        if ((atomic_inc(&p_1340->g_atomic_input[51 * get_linear_group_id() + 47]) == 4))
        { /* block id: 230 */
            VECTOR(int32_t, 8) l_629 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-6L)), (-6L)), (-6L), (-5L), (-6L));
            int8_t l_630 = (-1L);
            int8_t l_631 = 3L;
            struct S0 l_639 = {0UL,0x36261A83L,0x4BF83D86L,0x6D3EL};/* VOLATILE GLOBAL l_639 */
            struct S0 l_640 = {0xA3CE98FFL,0UL,1L,0x9336L};/* VOLATILE GLOBAL l_640 */
            int i;
            l_631 |= (l_630 |= ((VECTOR(int32_t, 4))(l_629.s2661)).z);
            for (l_631 = 19; (l_631 > 25); l_631 = safe_add_func_uint64_t_u_u(l_631, 6))
            { /* block id: 235 */
                int32_t l_634 = (-1L);
                for (l_634 = 25; (l_634 <= (-25)); l_634 = safe_sub_func_uint8_t_u_u(l_634, 1))
                { /* block id: 238 */
                    struct S0 l_637[7] = {{0x1F833757L,0x9ACB2DA2L,0x314CC53DL,65531UL},{0x1F833757L,0x9ACB2DA2L,0x314CC53DL,65531UL},{0x1F833757L,0x9ACB2DA2L,0x314CC53DL,65531UL},{0x1F833757L,0x9ACB2DA2L,0x314CC53DL,65531UL},{0x1F833757L,0x9ACB2DA2L,0x314CC53DL,65531UL},{0x1F833757L,0x9ACB2DA2L,0x314CC53DL,65531UL},{0x1F833757L,0x9ACB2DA2L,0x314CC53DL,65531UL}};
                    struct S0 l_638 = {1UL,4294967288UL,0x5462F367L,65533UL};/* VOLATILE GLOBAL l_638 */
                    int i;
                    l_638 = l_637[4];
                }
                l_629.s6 |= ((VECTOR(int32_t, 2))(5L, 0x64892705L)).lo;
            }
            l_640 = l_639;
            unsigned int result = 0;
            result += l_629.s7;
            result += l_629.s6;
            result += l_629.s5;
            result += l_629.s4;
            result += l_629.s3;
            result += l_629.s2;
            result += l_629.s1;
            result += l_629.s0;
            result += l_630;
            result += l_631;
            result += l_639.f0;
            result += l_639.f1;
            result += l_639.f2;
            result += l_639.f3;
            result += l_640.f0;
            result += l_640.f1;
            result += l_640.f2;
            result += l_640.f3;
            atomic_add(&p_1340->g_special_values[51 * get_linear_group_id() + 47], result);
        }
        else
        { /* block id: 244 */
            (1 + 1);
        }
        for (p_1340->g_433.f0 = (-22); (p_1340->g_433.f0 >= 51); p_1340->g_433.f0 = safe_add_func_int16_t_s_s(p_1340->g_433.f0, 3))
        { /* block id: 249 */
            uint8_t l_643 = 0UL;
            VECTOR(int16_t, 2) l_646 = (VECTOR(int16_t, 2))(0x3349L, 0x4D24L);
            int32_t *l_647 = (void*)0;
            int32_t *l_648[5] = {&p_1340->g_82,&p_1340->g_82,&p_1340->g_82,&p_1340->g_82,&p_1340->g_82};
            uint8_t ****l_650 = (void*)0;
            uint8_t ****l_651 = &l_649;
            uint64_t *l_663 = (void*)0;
            uint64_t *l_664 = &p_1340->g_118[0].f2;
            uint64_t *l_665 = &p_1340->g_118[0].f2;
            uint64_t *l_666 = &p_1340->g_118[0].f2;
            uint64_t *l_667[2];
            uint16_t *l_670 = &p_1340->g_147.f3;
            uint16_t *l_671 = &p_1340->g_625.f3;
            uint32_t ***l_782 = &p_1340->g_762[0][4][2];
            VECTOR(int32_t, 2) l_797 = (VECTOR(int32_t, 2))((-9L), 9L);
            VECTOR(uint16_t, 2) l_827 = (VECTOR(uint16_t, 2))(6UL, 0x6847L);
            uint32_t l_829 = 0UL;
            uint32_t *l_831[6] = {(void*)0,&p_1340->g_136,(void*)0,(void*)0,&p_1340->g_136,(void*)0};
            int i;
            for (i = 0; i < 2; i++)
                l_667[i] = &p_1340->g_118[0].f2;
            (*p_1340->g_603) = (l_643 | (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(l_646.xyyyyxyyyxxyxxxx)).s4, l_643)));
            if ((p_1340->g_178.w | ((~(((*l_671) = ((((*l_651) = l_649) == (void*)0) < (((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_670) = (((safe_div_func_uint8_t_u_u(((p_1340->g_99.s7 &= l_662) > (safe_sub_func_int32_t_s_s((*p_1340->g_603), (l_620 & (l_662 < (GROUP_DIVERGE(0, 1) ^ l_620)))))), (-1L))) > p_1340->g_589.sc) & 0xAFFF0994B7F7EA7BL)), p_1340->g_386.y)), 0x86L)) == (-10L)) , FAKE_DIVERGE(p_1340->local_2_offset, get_local_id(2), 10)) >= l_620), p_1340->g_461.f0)), FAKE_DIVERGE(p_1340->global_2_offset, get_global_id(2), 10))) > l_620) & p_1340->g_386.y))) == 0x76D6L)) | l_662)))
            { /* block id: 255 */
                for (p_1340->g_610.f0 = 22; (p_1340->g_610.f0 == 47); p_1340->g_610.f0++)
                { /* block id: 258 */
                    return p_1340->g_674;
                }
                if ((*p_1340->g_104))
                    continue;
                if (l_662)
                    break;
                p_1340->g_676 = p_1340->g_675[1][2];
            }
            else
            { /* block id: 264 */
                uint32_t l_677 = 0x11559F24L;
                int32_t l_692 = 0x3B21B82AL;
                int32_t l_694 = 0x71D17369L;
                int32_t l_702 = 0L;
                int32_t l_703 = 0x1362A482L;
                int32_t l_704 = 1L;
                VECTOR(int8_t, 8) l_706 = (VECTOR(int8_t, 8))(0x4BL, (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 0x69L), 0x69L), 0x69L, 0x4BL, 0x69L);
                int32_t l_711[10][2] = {{0x17420101L,8L},{0x17420101L,8L},{0x17420101L,8L},{0x17420101L,8L},{0x17420101L,8L},{0x17420101L,8L},{0x17420101L,8L},{0x17420101L,8L},{0x17420101L,8L},{0x17420101L,8L}};
                uint32_t l_713 = 0x45062150L;
                int8_t **l_723 = (void*)0;
                uint8_t *l_738 = &l_643;
                int i, j;
                if (l_677)
                    break;
                for (p_1340->g_461.f3 = (-8); (p_1340->g_461.f3 != 58); ++p_1340->g_461.f3)
                { /* block id: 268 */
                    int16_t l_691 = 1L;
                    int32_t l_693[7] = {0L,0L,0L,0L,0L,0L,0L};
                    uint32_t l_722[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_722[i] = 9UL;
                    for (p_1340->g_324.f3 = 11; (p_1340->g_324.f3 < 56); p_1340->g_324.f3 = safe_add_func_uint32_t_u_u(p_1340->g_324.f3, 9))
                    { /* block id: 271 */
                        int32_t *l_686 = (void*)0;
                        (*p_1340->g_104) = (safe_lshift_func_uint8_t_u_u((+(l_662 | (l_686 == &p_1340->g_84))), (l_690 ^= (safe_sub_func_int64_t_s_s(l_689, ((void*)0 == &p_1340->g_362))))));
                        if (l_677)
                            break;
                        (*p_1340->g_192) = l_686;
                    }
                    l_713++;
                    (*p_1340->g_603) = (safe_lshift_func_int8_t_s_u(l_708, ((-5L) || (safe_div_func_int32_t_s_s((*p_1340->g_104), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(p_1340->g_720.zxzzzxww)).s1013417301215414, ((VECTOR(int32_t, 2))(0L, (-3L))).xyyyxyxxxyxyxxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_721.sba4a3f2a)).s4, l_722[3], 0x75467643L, 0x65B59009L, (l_721.s7 = ((void*)0 != l_723)), 5L, 0L, 1L)).s66)).yxyyyyxxyyxxxyxy))).sa)))));
                }
                for (l_662 = (-12); (l_662 <= (-14)); l_662 = safe_sub_func_uint32_t_u_u(l_662, 5))
                { /* block id: 283 */
                    uint16_t l_726 = 0xDA40L;
                    uint8_t **l_741[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_741[i] = &l_738;
                    ++l_726;
                    p_1340->g_82 ^= (safe_rshift_func_uint16_t_u_s(((*l_670) = ((0x36FD9F42384C1596L ^ (*p_1340->g_204)) , (safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u(((void*)0 != l_738))) & (&p_1340->g_595 == (void*)0)), 2)), ((l_711[6][1] >= l_726) || ((safe_lshift_func_int16_t_s_s((((((l_741[0] != &l_738) | p_1340->g_324.f1) , (-1L)) || FAKE_DIVERGE(p_1340->local_0_offset, get_local_id(0), 10)) | l_696), l_699)) >= l_692)))) , l_726), 6)))), 15));
                    return p_1340->g_742;
                }
                return p_1340->g_743;
            }
            for (l_690 = 0; (l_690 >= 17); l_690 = safe_add_func_uint32_t_u_u(l_690, 1))
            { /* block id: 293 */
                uint32_t l_769 = 0x18BB4DC5L;
                uint8_t *l_776 = (void*)0;
                if ((*p_1340->g_603))
                { /* block id: 294 */
                    if ((atomic_inc(&p_1340->g_atomic_input[51 * get_linear_group_id() + 5]) == 2))
                    { /* block id: 296 */
                        VECTOR(uint32_t, 16) l_746 = (VECTOR(uint32_t, 16))(0x4529250AL, (VECTOR(uint32_t, 4))(0x4529250AL, (VECTOR(uint32_t, 2))(0x4529250AL, 1UL), 1UL), 1UL, 0x4529250AL, 1UL, (VECTOR(uint32_t, 2))(0x4529250AL, 1UL), (VECTOR(uint32_t, 2))(0x4529250AL, 1UL), 0x4529250AL, 1UL, 0x4529250AL, 1UL);
                        VECTOR(uint32_t, 4) l_747 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x186C011BL), 0x186C011BL);
                        uint8_t l_748 = 0x87L;
                        int32_t l_749 = (-1L);
                        VECTOR(uint32_t, 2) l_750 = (VECTOR(uint32_t, 2))(0xCCDB3C1CL, 4294967290UL);
                        VECTOR(int32_t, 16) l_751 = (VECTOR(int32_t, 16))(0x3CB19913L, (VECTOR(int32_t, 4))(0x3CB19913L, (VECTOR(int32_t, 2))(0x3CB19913L, 5L), 5L), 5L, 0x3CB19913L, 5L, (VECTOR(int32_t, 2))(0x3CB19913L, 5L), (VECTOR(int32_t, 2))(0x3CB19913L, 5L), 0x3CB19913L, 5L, 0x3CB19913L, 5L);
                        VECTOR(int32_t, 2) l_752 = (VECTOR(int32_t, 2))(0L, 0x0178E8FDL);
                        VECTOR(int32_t, 2) l_753 = (VECTOR(int32_t, 2))((-6L), 0L);
                        uint32_t l_754 = 0xB78695A1L;
                        uint16_t l_755 = 0xFE7EL;
                        int64_t l_756 = 0x500415BA6E1DCAA4L;
                        uint32_t *l_758 = &l_754;
                        uint32_t **l_757 = &l_758;
                        uint32_t **l_759 = (void*)0;
                        uint32_t l_760 = 4294967287UL;
                        int32_t l_761 = 0x6BA722C4L;
                        int i;
                        l_754 ^= (((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(0xCB5CE583L, ((VECTOR(uint32_t, 2))(l_746.sea)), 4294967295UL, 0x7256ADAAL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_747.wy)))).lo, 8UL, (l_749 ^= l_748), ((VECTOR(uint32_t, 8))(l_750.xxyxyyyx)))).s2c))).hi , ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 8))(0x3B53EE08L, ((VECTOR(int32_t, 2))(l_751.s7e)), ((VECTOR(int32_t, 2))(l_752.xy)), ((VECTOR(int32_t, 2))(l_753.yx)), (-1L))).s6, 0L, 1L)).w);
                        l_756 = l_755;
                        l_759 = (l_757 = (void*)0);
                        l_761 = l_760;
                        unsigned int result = 0;
                        result += l_746.sf;
                        result += l_746.se;
                        result += l_746.sd;
                        result += l_746.sc;
                        result += l_746.sb;
                        result += l_746.sa;
                        result += l_746.s9;
                        result += l_746.s8;
                        result += l_746.s7;
                        result += l_746.s6;
                        result += l_746.s5;
                        result += l_746.s4;
                        result += l_746.s3;
                        result += l_746.s2;
                        result += l_746.s1;
                        result += l_746.s0;
                        result += l_747.w;
                        result += l_747.z;
                        result += l_747.y;
                        result += l_747.x;
                        result += l_748;
                        result += l_749;
                        result += l_750.y;
                        result += l_750.x;
                        result += l_751.sf;
                        result += l_751.se;
                        result += l_751.sd;
                        result += l_751.sc;
                        result += l_751.sb;
                        result += l_751.sa;
                        result += l_751.s9;
                        result += l_751.s8;
                        result += l_751.s7;
                        result += l_751.s6;
                        result += l_751.s5;
                        result += l_751.s4;
                        result += l_751.s3;
                        result += l_751.s2;
                        result += l_751.s1;
                        result += l_751.s0;
                        result += l_752.y;
                        result += l_752.x;
                        result += l_753.y;
                        result += l_753.x;
                        result += l_754;
                        result += l_755;
                        result += l_756;
                        result += l_760;
                        result += l_761;
                        atomic_add(&p_1340->g_special_values[51 * get_linear_group_id() + 5], result);
                    }
                    else
                    { /* block id: 303 */
                        (1 + 1);
                    }
                    (*p_1340->g_764) = p_1340->g_762[0][4][2];
                }
                else
                { /* block id: 307 */
                    uint32_t *l_777 = &p_1340->g_472;
                    int32_t l_778[4] = {0L,0L,0L,0L};
                    VECTOR(uint16_t, 2) l_796 = (VECTOR(uint16_t, 2))(0UL, 0x61DFL);
                    int i;
                    atomic_max(&p_1340->l_atomic_reduction[0], (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_769 < 0x5AL), (safe_mul_func_uint8_t_u_u(((void*)0 != &p_1340->g_520), ((0L ^ GROUP_DIVERGE(2, 1)) <= FAKE_DIVERGE(p_1340->global_1_offset, get_global_id(1), 10)))))), (((((((safe_mod_func_uint16_t_u_u(p_1340->g_585.y, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_689, 1UL, 65532UL, (safe_mod_func_int64_t_s_s((p_46 == l_776), l_769)), ((VECTOR(uint16_t, 4))(0x2290L)))).s5052625564055532)).s4)) , l_777) != (void*)0) >= l_778[0]) , 0x0B6DL) , (void*)0) != l_777))));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1340->v_collective += p_1340->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if ((0x6F02L < ((*p_1340->g_521) == (void*)0)))
                    { /* block id: 309 */
                        uint64_t l_779 = 0xD004715FF2A8FF89L;
                        int64_t *l_789 = &p_1340->g_179;
                        VECTOR(int16_t, 2) l_795 = (VECTOR(int16_t, 2))((-7L), 0L);
                        int16_t *l_805 = (void*)0;
                        int16_t *l_806 = (void*)0;
                        int16_t *l_807[1];
                        int32_t l_808 = 0x2A8877A2L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_807[i] = &p_1340->g_595.f1;
                        ++l_779;
                        l_808 |= ((l_782 != (void*)0) , ((((*p_1340->g_603) = ((safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s(((*l_789) = p_1340->g_461.f0), (safe_sub_func_uint16_t_u_u(0x973AL, (l_778[0] = (((((safe_mul_func_int16_t_s_s(((l_620 | ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_794.wz)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(l_795.xxyxxxxxyyxyxxyy)), ((VECTOR(int16_t, 2))((-8L), 0x04D6L)).yxxxyyyyyyyyxyxx))), ((VECTOR(uint16_t, 16))(l_796.yxxxxxyyyyyyyxyy))))).s1a3c)).even)))).yyyxxxxx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x7A3093D3L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_797.yy)))), 0x1C6371DCL)).hi)).yyxxxxxy))).odd, ((VECTOR(int32_t, 8))(p_1340->g_798.yxzxyxzz)).lo))).odd)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x7E22F83DL, 0x6F6BF545L, 0L, (-1L))).lo)), 0x066389C3L, 0x27B90A97L)))).s2) > l_778[0]), l_695)) >= (0x454BL || (((VECTOR(int16_t, 16))((p_1340->g_74.sf = ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(1UL, l_695)) <= 0x55L), l_795.x)) < l_700), l_769)) , l_769)), (-1L), (-1L), l_705, ((VECTOR(int16_t, 4))(0x7B8AL)), (-1L), ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 2))((-1L))), 0x6F06L)).s0 || 0x7766L))) && l_662) & l_795.x) < 0x57L)))))) , (-8L)) & l_795.x), l_796.y)) == p_1340->g_433.f1), l_707[0][0])) , 0x55E09B2FL)) & l_707[1][0]) > l_710));
                        if (l_795.y)
                            break;
                    }
                    else
                    { /* block id: 317 */
                        union U1 *l_809 = (void*)0;
                        union U1 **l_810 = &l_809;
                        union U1 **l_811 = &p_1340->g_486;
                        (*l_811) = ((*l_810) = l_809);
                        p_1340->g_813 = p_1340->g_812;
                    }
                    if (l_700)
                        continue;
                    for (p_1340->g_813.f3 = 0; (p_1340->g_813.f3 < 26); p_1340->g_813.f3 = safe_add_func_uint32_t_u_u(p_1340->g_813.f3, 1))
                    { /* block id: 325 */
                        l_707[1][0] = 1L;
                    }
                }
                return p_1340->g_816[1][5][0];
            }
            l_707[0][0] ^= (safe_rshift_func_int8_t_s_u(((4294967292UL & 0x7264A898L) && (safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint16_t_u_u((p_1340->g_294.s6--), 65535UL)) <= (252UL != (((safe_rshift_func_uint16_t_u_u(((-1L) || ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 2))(l_827.xy)).yxyxxxyy, ((VECTOR(uint16_t, 4))(0x5FFEL, 0x085BL, 0x6A65L, 5UL)).yxywzzwy))).s2), ((l_662 ^= (l_832 = ((*p_1340->g_763) = ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_828.xxxy)).odd)).yxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_705 & (+(-1L))), (((l_709 <= (((((18446744073709551615UL && l_699) >= l_697) != l_689) && l_721.sb) ^ l_721.s0)) != l_829) == GROUP_DIVERGE(0, 1)), 0x3B58E13AL, (-1L))).zyxxwwxx)).odd))).hi)).hi && (*p_1340->g_763)) > l_830[3])))) != (-1L)))) ^ 18446744073709551612UL) >= FAKE_DIVERGE(p_1340->group_1_offset, get_group_id(1), 10)))) < (*p_1340->g_204)), 3))), 6));
        }
    }
    l_833 = &l_700;
    return (*p_1340->g_409);
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_610 p_1340->g_104 p_1340->g_128
 * writes: p_1340->g_611 p_1340->g_82 p_1340->g_128
 */
int8_t * func_47(uint32_t  p_48, uint32_t  p_49, struct S3 * p_1340)
{ /* block id: 218 */
    union U2 *l_614 = &p_1340->g_595;
    int32_t l_617 = 0x04D73C8CL;
    int32_t *l_618[10][3][8] = {{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}},{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}},{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}},{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}},{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}},{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}},{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}},{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}},{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}},{{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617},{(void*)0,(void*)0,&p_1340->g_12,&l_617,&l_617,(void*)0,(void*)0,&l_617}}};
    int8_t *l_619 = (void*)0;
    int i, j, k;
    p_1340->g_611 = p_1340->g_610;
    p_1340->g_128.z |= ((*p_1340->g_104) = (safe_mul_func_uint16_t_u_u(((p_49 && (l_614 == &p_1340->g_595)) , (safe_mul_func_int8_t_s_s(l_617, ((VECTOR(uint8_t, 2))(0x90L, 255UL)).lo))), p_48)));
    return l_619;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_84 p_1340->g_117 p_1340->g_119 p_1340->g_6 p_1340->g_128 p_1340->g_131 p_1340->g_134 p_1340->g_136 p_1340->g_147 p_1340->g_99 p_1340->g_172 p_1340->g_177 p_1340->g_178 p_1340->g_179 p_1340->g_192 p_1340->g_101 p_1340->g_193 p_1340->g_82 p_1340->g_17 p_1340->g_204 p_1340->g_206 p_1340->g_218 p_1340->g_223 p_1340->g_93.f1 p_1340->g_242 p_1340->g_243 p_1340->g_324.f0 p_1340->g_367 p_1340->g_386 p_1340->g_302.f3 p_1340->g_302.f2 p_1340->g_303 p_1340->g_93 p_1340->g_409 p_1340->g_417 p_1340->g_433 p_1340->g_461 p_1340->g_118.f0 p_1340->g_491 p_1340->g_520 p_1340->g_521 p_1340->g_79 p_1340->g_80 p_1340->g_35 p_1340->g_543 p_1340->g_74 p_1340->g_565 p_1340->g_579 p_1340->g_584 p_1340->g_585 p_1340->g_589 p_1340->g_118 p_1340->g_598 p_1340->g_603
 * writes: p_1340->g_84 p_1340->g_117 p_1340->g_82 p_1340->g_136 p_1340->g_99 p_1340->g_193 p_1340->g_80 p_1340->g_74 p_1340->g_93 p_1340->g_324.f0 p_1340->g_242 p_1340->g_172 p_1340->g_386 p_1340->g_461 p_1340->g_472 p_1340->g_486 p_1340->g_520 p_1340->g_35 p_1340->g_585 p_1340->g_599 p_1340->g_367
 */
int8_t  func_51(int8_t * p_52, uint64_t  p_53, int8_t * p_54, int8_t * p_55, int32_t  p_56, struct S3 * p_1340)
{ /* block id: 32 */
    uint8_t l_126 = 0x16L;
    VECTOR(int32_t, 2) l_127 = (VECTOR(int32_t, 2))(4L, 0x36C92F55L);
    VECTOR(int32_t, 4) l_129 = (VECTOR(int32_t, 4))(0x62EDB36AL, (VECTOR(int32_t, 2))(0x62EDB36AL, 0x2264B8EAL), 0x2264B8EAL);
    int16_t *l_130[5];
    int32_t *l_133 = &p_1340->g_6[1];
    int32_t **l_132 = &l_133;
    int8_t ***l_181 = &p_1340->g_80;
    VECTOR(int8_t, 4) l_191 = (VECTOR(int8_t, 4))(0x6DL, (VECTOR(int8_t, 2))(0x6DL, (-4L)), (-4L));
    VECTOR(uint64_t, 16) l_215 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL);
    int32_t l_257 = 8L;
    uint32_t l_258 = 0UL;
    VECTOR(uint64_t, 4) l_328 = (VECTOR(uint64_t, 4))(0x734E14868E69F4E3L, (VECTOR(uint64_t, 2))(0x734E14868E69F4E3L, 0x10024959076EA888L), 0x10024959076EA888L);
    int16_t l_330 = 0x2E6CL;
    VECTOR(int32_t, 8) l_335 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    VECTOR(int8_t, 8) l_368 = (VECTOR(int8_t, 8))(0x69L, (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, 0x12L), 0x12L), 0x12L, 0x69L, 0x12L);
    VECTOR(int16_t, 4) l_387 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x7D89L), 0x7D89L);
    int8_t l_395 = (-1L);
    uint8_t l_400 = 254UL;
    VECTOR(uint32_t, 4) l_412 = (VECTOR(uint32_t, 4))(0x4F481F72L, (VECTOR(uint32_t, 2))(0x4F481F72L, 4294967292UL), 4294967292UL);
    union U1 *l_485 = &p_1340->g_118[0];
    VECTOR(int64_t, 4) l_488 = (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x43A25F87F1B01BD7L), 0x43A25F87F1B01BD7L);
    int8_t l_512 = 0x00L;
    VECTOR(int16_t, 16) l_566 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 1L), 1L), 1L, 5L, 1L, (VECTOR(int16_t, 2))(5L, 1L), (VECTOR(int16_t, 2))(5L, 1L), 5L, 1L, 5L, 1L);
    VECTOR(uint32_t, 16) l_582 = (VECTOR(uint32_t, 16))(0x6F33B2B3L, (VECTOR(uint32_t, 4))(0x6F33B2B3L, (VECTOR(uint32_t, 2))(0x6F33B2B3L, 0x24F3F2E3L), 0x24F3F2E3L), 0x24F3F2E3L, 0x6F33B2B3L, 0x24F3F2E3L, (VECTOR(uint32_t, 2))(0x6F33B2B3L, 0x24F3F2E3L), (VECTOR(uint32_t, 2))(0x6F33B2B3L, 0x24F3F2E3L), 0x6F33B2B3L, 0x24F3F2E3L, 0x6F33B2B3L, 0x24F3F2E3L);
    struct S0 *l_597 = (void*)0;
    struct S0 **l_596 = &l_597;
    volatile struct S0 *l_605 = &p_1340->g_367;
    int i;
    for (i = 0; i < 5; i++)
        l_130[i] = (void*)0;
    for (p_1340->g_84 = 0; (p_1340->g_84 != 28); p_1340->g_84 = safe_add_func_uint8_t_u_u(p_1340->g_84, 4))
    { /* block id: 35 */
        int32_t *l_115 = &p_1340->g_6[0];
        int32_t *l_122 = (void*)0;
        int32_t *l_123 = &p_1340->g_82;
        int32_t *l_124 = (void*)0;
        int32_t *l_125[9] = {&p_1340->g_2,(void*)0,&p_1340->g_2,&p_1340->g_2,(void*)0,&p_1340->g_2,&p_1340->g_2,(void*)0,&p_1340->g_2};
        int i;
        for (p_53 = 0; (p_53 == 25); p_53 = safe_add_func_int8_t_s_s(p_53, 4))
        { /* block id: 38 */
            int32_t **l_116 = &l_115;
            (*l_116) = l_115;
        }
        (*p_1340->g_119) = p_1340->g_117;
        l_126 ^= ((*l_123) = (safe_rshift_func_uint8_t_u_s(p_56, (*l_115))));
    }
    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_127.yxyx)).odd, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x3E9465D9L, 0x50130CBDL)).yxyy, ((VECTOR(int32_t, 2))(p_1340->g_128.yw)).yyyx))).hi))), ((VECTOR(int32_t, 8))(l_129.zwzzxxyw)), ((0xC2L && l_127.y) || (l_130[2] != p_1340->g_131[1])), (-1L), 0x10488480L, (((&p_1340->g_104 != l_132) && (((VECTOR(uint16_t, 2))(p_1340->g_134.zz)).hi | 0xF7C8L)) ^ ((**l_132) > 0L)), 0x0A5FE3C0L, 0L)).s2)
    { /* block id: 45 */
        uint32_t *l_135[10][9] = {{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136},{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136},{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136},{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136},{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136},{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136},{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136},{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136},{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136},{&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,(void*)0,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136,&p_1340->g_136}};
        uint64_t *l_150 = (void*)0;
        uint64_t *l_151 = (void*)0;
        uint64_t *l_152 = (void*)0;
        uint64_t *l_153 = &p_1340->g_118[0].f2;
        int32_t l_154[4][2][4] = {{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}}};
        uint64_t *l_155 = (void*)0;
        uint64_t *l_156 = (void*)0;
        uint64_t *l_157 = (void*)0;
        uint64_t *l_158 = &p_1340->g_118[0].f2;
        uint64_t *l_159 = (void*)0;
        uint64_t *l_160 = &p_1340->g_118[0].f2;
        uint64_t *l_161 = &p_1340->g_118[0].f2;
        uint64_t *l_162 = &p_1340->g_118[0].f2;
        uint64_t *l_163 = (void*)0;
        uint64_t *l_164 = (void*)0;
        uint64_t *l_165 = &p_1340->g_118[0].f2;
        uint64_t *l_166 = &p_1340->g_118[0].f2;
        uint64_t *l_167 = (void*)0;
        VECTOR(int16_t, 2) l_173 = (VECTOR(int16_t, 2))(1L, 1L);
        VECTOR(int16_t, 16) l_174 = (VECTOR(int16_t, 16))(0x3C95L, (VECTOR(int16_t, 4))(0x3C95L, (VECTOR(int16_t, 2))(0x3C95L, 0x62AEL), 0x62AEL), 0x62AEL, 0x3C95L, 0x62AEL, (VECTOR(int16_t, 2))(0x3C95L, 0x62AEL), (VECTOR(int16_t, 2))(0x3C95L, 0x62AEL), 0x3C95L, 0x62AEL, 0x3C95L, 0x62AEL);
        VECTOR(int16_t, 2) l_175 = (VECTOR(int16_t, 2))(0x0FE1L, (-5L));
        VECTOR(int16_t, 16) l_176 = (VECTOR(int16_t, 16))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L), (VECTOR(int16_t, 2))(3L, (-1L)), (VECTOR(int16_t, 2))(3L, (-1L)), 3L, (-1L), 3L, (-1L));
        uint8_t *l_180 = &l_126;
        int32_t l_205[8][4][6] = {{{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL}},{{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL}},{{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL}},{{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL}},{{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL}},{{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL}},{{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL}},{{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL},{2L,0x2960B59DL,(-9L),(-1L),(-1L),0x3B420BBDL}}};
        VECTOR(uint32_t, 2) l_224 = (VECTOR(uint32_t, 2))(0x74E2548DL, 6UL);
        int32_t *l_244 = (void*)0;
        int32_t *l_245 = &p_1340->g_82;
        int32_t *l_246 = (void*)0;
        int32_t *l_247 = &p_1340->g_82;
        int32_t *l_248 = (void*)0;
        int32_t *l_249 = &p_1340->g_82;
        int32_t *l_250 = &p_1340->g_82;
        int32_t *l_251 = &l_154[2][1][3];
        int32_t *l_252 = &l_154[2][1][3];
        int32_t *l_253 = &l_154[0][1][1];
        int32_t *l_254 = (void*)0;
        int32_t *l_255 = (void*)0;
        int32_t *l_256[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        VECTOR(uint16_t, 4) l_290 = (VECTOR(uint16_t, 4))(0x4E44L, (VECTOR(uint16_t, 2))(0x4E44L, 0xB46BL), 0xB46BL);
        VECTOR(uint16_t, 2) l_293 = (VECTOR(uint16_t, 2))(2UL, 0x0F3FL);
        VECTOR(uint16_t, 2) l_295 = (VECTOR(uint16_t, 2))(0xFDA1L, 65533UL);
        VECTOR(int32_t, 8) l_331 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3BA088D7L), 0x3BA088D7L), 0x3BA088D7L, 0L, 0x3BA088D7L);
        int32_t l_357 = 0L;
        int i, j, k;
        if (((--p_1340->g_136) != (safe_mod_func_int16_t_s_s(p_56, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(0x0901L, 0x768EL, ((VECTOR(int16_t, 4))(0x4C8FL, ((VECTOR(int16_t, 2))(0L, 0L)), (-1L))), 0x0FBBL, (-8L))).lo, ((VECTOR(int16_t, 8))((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((((&p_1340->g_117 != &p_1340->g_117) , (safe_lshift_func_int8_t_s_s((((((p_1340->g_147 , ((safe_div_func_int32_t_s_s(((++p_1340->g_99.s3) & (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(0x2DE2L, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(p_1340->g_172.s79a2)).lo, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(l_173.yxxyyxyxyyxxyyyx)).s4f, ((VECTOR(int16_t, 16))(l_174.s52791890f00b84bf)).s07, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_175.yy)).yxxy)).zywxxzyyyyyzxyyy)).s6a)).yxyxyxxy, ((VECTOR(int16_t, 4))(l_176.sf0f6)).xzwyyxyy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x6995L, (-7L))), 0x379BL, (-1L))).wywwxyxz))).s4505213322213250, ((VECTOR(int16_t, 2))(1L, 0x3E7CL)).xxxxxyyxyyyyyyxx, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(p_1340->g_177.s2626036565261026)).even, ((VECTOR(uint8_t, 4))(p_1340->g_178.yyxw)).wzyzzyyw))).s7754350053502426))).sb5))), 0x1392L, 0x5D1AL)).xxyxwywz, ((VECTOR(int16_t, 4))((-1L), (-2L), 0x552CL, 0x3108L)).zwzxwyxx))).lo)).even))), 1L)).x, (FAKE_DIVERGE(p_1340->local_2_offset, get_local_id(2), 10) || p_1340->g_179)))), (((*l_180) &= 249UL) ^ (l_176.s2 <= (l_173.y != (-5L)))))) < (*l_133))) , l_181) != (void*)0) , (*l_133)) || 0x1D6FL), (**l_132)))) && (*l_133)) & (*l_133)), 0x4A5FL)), p_53)), ((VECTOR(int16_t, 4))(0x2309L)), (-7L), (-3L), 0x72EFL)).lo, ((VECTOR(int16_t, 4))(9L))))).wzwwzzxz, ((VECTOR(int16_t, 8))(0x073BL))))).s1))))
        { /* block id: 49 */
            uint8_t l_186 = 0x98L;
            int32_t *l_200 = &p_1340->g_82;
            (**p_1340->g_192) = ((safe_mul_func_uint8_t_u_u((+(safe_add_func_int32_t_s_s(l_186, 4294967292UL))), 0x43L)) != (((void*)0 != l_135[8][0]) > (((safe_mul_func_int16_t_s_s(((l_176.s9 >= (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_191.zywx)).y, (&p_1340->g_104 != (l_132 = p_1340->g_192))))) >= (safe_div_func_int32_t_s_s((((((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((p_52 != p_52), l_173.y)), p_1340->g_101.y)) >= p_1340->g_172.s2) , l_186) >= 250UL) != 0x39L), (*p_1340->g_193)))), p_53)) , p_56) ^ (*l_133))));
            (*l_132) = l_200;
            (*p_1340->g_193) |= ((*l_133) <= (safe_unary_minus_func_int64_t_s((safe_rshift_func_uint8_t_u_u(p_1340->g_17.s7, l_176.s0)))));
            l_205[4][0][4] &= (((l_153 == (p_56 , p_1340->g_204)) | ((*l_200) = (&p_55 == ((*l_181) = &p_52)))) > ((void*)0 == &l_126));
        }
        else
        { /* block id: 57 */
            uint32_t l_235 = 0xAD05D546L;
            int8_t ***l_240 = &p_1340->g_80;
            int16_t l_241 = 7L;
            if ((p_1340->g_206 , ((safe_sub_func_uint16_t_u_u((1L == ((0x2904L <= (safe_mod_func_int16_t_s_s((-1L), ((((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_215.sac1d6843842c4b80)).lo)).s1, ((VECTOR(int64_t, 8))((((((((FAKE_DIVERGE(p_1340->global_2_offset, get_global_id(2), 10) || (safe_rshift_func_int8_t_s_u((((VECTOR(uint8_t, 8))(p_1340->g_218.sba4a9376)).s6 <= (l_181 == (((*l_133) && (p_1340->g_74.s6 = (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((VECTOR(uint32_t, 4))(p_1340->g_178.y, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 2))(p_1340->g_223.xy)).xxxyyyyx, ((VECTOR(uint32_t, 4))(l_224.yyyy)).wwywxxwx))).s23)), 0UL)).x , (safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((**p_1340->g_192) = (safe_sub_func_int64_t_s_s(l_235, ((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((((p_56 , l_240) == l_240) ^ 65533UL) != p_56), 6L)), p_1340->g_178.z)) == (*l_133)) , p_53) == p_1340->g_178.w)))), l_235)) , l_224.y), (*l_133))) > p_53), l_176.sd)), l_235))), 5)), l_241)))) , (void*)0))), p_1340->g_99.s6))) || l_173.x) , l_235) | l_224.x) & p_53) < l_173.x) , 0L), ((VECTOR(int64_t, 2))(0x0EFB94D29A290CDDL)), 0x7AD0A5A646F18374L, p_1340->g_93.f1, ((VECTOR(int64_t, 2))(0x2E4E6314A1B8DFF5L)), 0x4A689631A3471C5DL)).s0)) > p_53) >= l_235) , p_56)))) >= l_174.s2)), p_53)) || p_53)))
            { /* block id: 60 */
                return l_224.x;
            }
            else
            { /* block id: 62 */
                (*p_1340->g_243) = p_1340->g_242;
                return (*l_133);
            }
        }
        (*p_1340->g_193) = p_53;
        l_258++;
        for (p_1340->g_84 = 28; (p_1340->g_84 > 23); p_1340->g_84 = safe_sub_func_uint32_t_u_u(p_1340->g_84, 8))
        { /* block id: 71 */
            int32_t l_280 = 0x0B3E2254L;
            int32_t l_283 = (-1L);
            uint32_t *l_315 = &p_1340->g_136;
            VECTOR(uint64_t, 8) l_329 = (VECTOR(uint64_t, 8))(0xC019E99554C0BE30L, (VECTOR(uint64_t, 4))(0xC019E99554C0BE30L, (VECTOR(uint64_t, 2))(0xC019E99554C0BE30L, 9UL), 9UL), 9UL, 0xC019E99554C0BE30L, 9UL);
            int32_t l_358 = 0x533F1D31L;
            int32_t l_359 = 0x5221C398L;
            int32_t l_360 = 0x26B2C296L;
            int i;
            (1 + 1);
        }
    }
    else
    { /* block id: 115 */
        VECTOR(uint8_t, 2) l_376 = (VECTOR(uint8_t, 2))(0UL, 255UL);
        uint8_t *l_416 = &l_126;
        int8_t **l_423 = &p_1340->g_35[0][1];
        uint64_t *l_436 = (void*)0;
        int32_t l_437 = 0x7BBB0216L;
        int32_t l_457 = 0x06415F41L;
        union U1 **l_487 = &l_485;
        VECTOR(int16_t, 4) l_513 = (VECTOR(int16_t, 4))(0x7EC0L, (VECTOR(int16_t, 2))(0x7EC0L, 0x7E5FL), 0x7E5FL);
        VECTOR(uint32_t, 2) l_583 = (VECTOR(uint32_t, 2))(0xF3E96AFEL, 0x7C0A7CD8L);
        int32_t *l_601 = (void*)0;
        int i;
        for (p_1340->g_324.f0 = (-20); (p_1340->g_324.f0 > 31); p_1340->g_324.f0++)
        { /* block id: 118 */
            uint32_t *l_371 = &l_258;
            int32_t l_385 = 3L;
            VECTOR(int16_t, 16) l_390 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x6675L), 0x6675L), 0x6675L, 4L, 0x6675L, (VECTOR(int16_t, 2))(4L, 0x6675L), (VECTOR(int16_t, 2))(4L, 0x6675L), 4L, 0x6675L, 4L, 0x6675L);
            int32_t l_456 = 0x1F73A1B7L;
            uint32_t *l_471 = &p_1340->g_472;
            uint16_t *l_483 = &p_1340->g_461.f3;
            int i;
            if ((p_1340->g_367 , (((VECTOR(int8_t, 16))(l_368.s4703015156707531)).s8 != (safe_add_func_uint32_t_u_u(((*l_371)++), ((safe_rshift_func_uint8_t_u_s((((VECTOR(uint8_t, 8))(l_376.yyyyxxxy)).s6 != (safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((+(safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_385, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1340->g_386.xx)).lo, 0x54B5L, l_376.y, 0x3FCEL, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(p_53, 0x73F0L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(2L, 0L)), (-1L), 1L)))), 0x698BL, (-9L))).hi, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_387.wwyzwxwzwwxwzwzx)).s81f0)).wyzxxywx, (int16_t)(p_1340->g_74.sf = (safe_rshift_func_int8_t_s_u((p_1340->g_302.f3 && p_56), 0))), (int16_t)p_56))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x2631L, 0x101FL, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x41B3L, 0L)), 0x19ABL, 0x2AA5L)).wxyyzwyz)), (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_390.s6ab292bceaa87948)).even)).s4 | p_53), ((safe_add_func_uint16_t_u_u(((((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(0x4FL, 1L)), (int8_t)((safe_sub_func_uint32_t_u_u((p_53 ^ 0x26B2575CL), l_390.sb)) <= 0x54F23389F063BEE1L)))).lo < l_385) , p_53), p_1340->g_302.f2)) ^ l_376.y), p_53, ((VECTOR(int16_t, 2))(0L)), 0L)).s84cd)).zwyxywxx))))).s7750034552171257)), ((VECTOR(int16_t, 16))(8L))))).s9a, ((VECTOR(int16_t, 2))(0x21AFL))))).xyyx))), 8L, p_56, ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 4))(0x0E2BL)))).lo)), ((VECTOR(int16_t, 8))(0x794BL))))))).s1)), (**l_132)))), FAKE_DIVERGE(p_1340->local_2_offset, get_local_id(2), 10))), 0x2C31AF7CL))), l_395)) ^ p_56))))))
            { /* block id: 121 */
                if (l_385)
                    break;
                (*l_132) = (*p_1340->g_192);
            }
            else
            { /* block id: 124 */
                int32_t *l_396 = &p_1340->g_82;
                int32_t *l_397 = &p_1340->g_82;
                int32_t *l_398 = &l_385;
                int32_t *l_399[4][3] = {{&p_1340->g_6[0],(void*)0,&p_1340->g_6[0]},{&p_1340->g_6[0],(void*)0,&p_1340->g_6[0]},{&p_1340->g_6[0],(void*)0,&p_1340->g_6[0]},{&p_1340->g_6[0],(void*)0,&p_1340->g_6[0]}};
                uint16_t *l_418[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                struct S0 *l_462 = &p_1340->g_461;
                int i, j;
                --l_400;
                for (p_1340->g_136 = 0; (p_1340->g_136 >= 10); p_1340->g_136 = safe_add_func_uint32_t_u_u(p_1340->g_136, 8))
                { /* block id: 128 */
                    if (p_53)
                        break;
                }
                for (l_330 = 0; (l_330 > 18); l_330++)
                { /* block id: 133 */
                    VECTOR(int8_t, 2) l_432 = (VECTOR(int8_t, 2))((-1L), 0x32L);
                    int32_t l_445 = 0x0091F634L;
                    int32_t l_446 = 6L;
                    int32_t l_447 = (-1L);
                    int32_t l_448 = 8L;
                    int32_t l_449 = 0L;
                    int32_t l_450[2];
                    uint32_t l_451 = 1UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_450[i] = (-1L);
                    for (p_1340->g_82 = 0; (p_1340->g_82 <= 26); p_1340->g_82++)
                    { /* block id: 136 */
                        VECTOR(uint32_t, 2) l_413 = (VECTOR(uint32_t, 2))(4294967287UL, 0UL);
                        int32_t l_426 = (-3L);
                        int32_t l_427 = (-1L);
                        int16_t *l_444 = (void*)0;
                        int i;
                        (*p_1340->g_409) = (*p_1340->g_303);
                        l_427 = (l_335.s3 = (safe_lshift_func_uint16_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_412.zz)), ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(l_413.yxxx)).odd, (uint32_t)(safe_add_func_int64_t_s_s(p_56, FAKE_DIVERGE(p_1340->local_2_offset, get_local_id(2), 10)))))).yyyy)), ((p_52 == l_416) <= 0x5F4DL), ((VECTOR(uint32_t, 2))(p_1340->g_417.wy)), 0UL)).s6311631162560225, ((VECTOR(uint32_t, 4))(7UL, GROUP_DIVERGE(0, 1), 0x8E926338L, 0x36D6917BL)).wyywwxzyyxwyxwww))).saa))), 0UL, 1UL, 8UL, 0x8B7EFC13L)), 0xD11A5F53L, 0x4E2116BCL, ((l_418[1] != ((safe_mod_func_int16_t_s_s(((*l_397) & (l_426 = (safe_add_func_uint16_t_u_u((l_385 &= (((*l_181) = l_423) != (void*)0)), (p_1340->g_172.sa = (safe_lshift_func_int16_t_s_u(p_56, 0))))))), p_53)) , (void*)0)) , 0x4A43845FL), ((VECTOR(uint32_t, 4))(5UL)), 0xF75FBCCBL)).odd)).s1500620731222375)).se || FAKE_DIVERGE(p_1340->group_2_offset, get_group_id(2), 10)), p_53)));
                        (*l_398) = (safe_add_func_int64_t_s_s(0x7B20F8CDE5882F7BL, (!(safe_lshift_func_int16_t_s_u((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_432.yx)), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(((p_1340->g_433 , l_423) == &p_52), ((safe_mod_func_int16_t_s_s((l_437 &= ((void*)0 != l_436)), 1UL)) < ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0x13C84A35AAE1BB08L, ((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(18446744073709551606UL, 18446744073709551615UL)).xyyxxyyyyxxxxxxx)).s61))), 1UL, 0xDEC948F19094DCF8L, ((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((((((((safe_div_func_uint64_t_u_u((((p_1340->g_386.y = (&p_1340->g_361 == l_444)) , 0x1093L) && 65526UL), 0x538C349F5B2A3FBAL)) | (*l_398)) != l_432.y) & p_1340->g_223.x) <= l_432.y) , p_1340->g_433.f2) ^ 0x7DD7L) , p_53), p_56)) < 0x09L), 0x9B39L)) , 0x012FCC3745483441L), 0x61871A107FCE07C8L, 18446744073709551615UL)))))).s7), (-1L), ((VECTOR(int8_t, 8))(0x10L)), 2L, l_432.y, l_427, 4L, 1L)).sa2, ((VECTOR(int8_t, 2))(0x42L))))), ((VECTOR(int8_t, 4))(4L)))).s4 < 0x54L), 8)))));
                    }
                    (*l_132) = (*l_132);
                    ++l_451;
                    for (l_385 = 4; (l_385 > (-2)); l_385 = safe_sub_func_int32_t_s_s(l_385, 5))
                    { /* block id: 152 */
                        uint32_t l_458[1][5][7] = {{{0x2BED4D6BL,0x2BED4D6BL,0xF6A51FB7L,1UL,1UL,1UL,0xF6A51FB7L},{0x2BED4D6BL,0x2BED4D6BL,0xF6A51FB7L,1UL,1UL,1UL,0xF6A51FB7L},{0x2BED4D6BL,0x2BED4D6BL,0xF6A51FB7L,1UL,1UL,1UL,0xF6A51FB7L},{0x2BED4D6BL,0x2BED4D6BL,0xF6A51FB7L,1UL,1UL,1UL,0xF6A51FB7L},{0x2BED4D6BL,0x2BED4D6BL,0xF6A51FB7L,1UL,1UL,1UL,0xF6A51FB7L}}};
                        int i, j, k;
                        --l_458[0][3][1];
                    }
                }
                (*l_462) = p_1340->g_461;
            }
            if ((safe_div_func_uint32_t_u_u((l_376.y & 1L), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0xD33F3EA7L, p_1340->g_461.f0, 4294967291UL, (safe_rshift_func_int16_t_s_u(((FAKE_DIVERGE(p_1340->global_1_offset, get_global_id(1), 10) >= (8L < (safe_mul_func_uint16_t_u_u(((*l_483) = ((safe_div_func_int16_t_s_s((((*l_471) = 4294967295UL) , (safe_sub_func_int32_t_s_s(((**l_132) != (safe_add_func_uint16_t_u_u((l_456 ^= (+(((safe_mod_func_int16_t_s_s(p_53, (safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(l_385, p_56)) , l_437), l_390.s2)))) | 4294967295UL) , p_56))), p_56))), p_56))), (*l_133))) | (**l_132))), 0x3891L)))) | p_56), p_1340->g_461.f0)), l_385, 4294967288UL, 4294967295UL, 7UL)))).s1)))
            { /* block id: 161 */
                return (**l_132);
            }
            else
            { /* block id: 163 */
                int64_t l_484 = 0x217CD302F186E46DL;
                return l_484;
            }
        }
        (*l_487) = ((*p_1340->g_204) , (p_1340->g_486 = l_485));
        if (((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_488.ywyy)).even)), ((0x03BFL >= 0x222AL) != (FAKE_DIVERGE(p_1340->global_2_offset, get_global_id(2), 10) || ((safe_mul_func_uint8_t_u_u((*l_133), ((*l_133) <= (((((VECTOR(int32_t, 4))(p_1340->g_491.s5e7e)).w != ((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((*l_416) = ((safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 3)) != (safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((((*l_133) != ((safe_div_func_int8_t_s_s(((**l_132) , (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((-3L) >= l_512), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_513.yzzwxxzw)).s34)).hi)), 0)), ((safe_div_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((l_437 = ((p_1340->g_101.x != l_513.x) < l_457)), 0x0D3BL)) == p_1340->g_223.y), 0x1A1090DCL)) ^ GROUP_DIVERGE(1, 1))))), 250UL)) ^ l_513.w)) | 0x7944L), l_513.x)), l_513.y)))), l_457)) & 0x1D5DC6C6L) != l_376.x), p_1340->g_128.y)), (-2L))) || 0xD12417D94E81F991L)) ^ 1L) & p_56)))) >= l_457))), (-1L), 0x22E481E56AA47EA0L, (-5L), 2L, 0x139B29851EC7923CL)).s0 ^ 0x3D0C7E44163DD0E6L) <= l_513.x))
        { /* block id: 171 */
            uint32_t l_522 = 0x6657AB74L;
            int32_t *l_527 = (void*)0;
            VECTOR(int16_t, 4) l_544 = (VECTOR(int16_t, 4))(0x6787L, (VECTOR(int16_t, 2))(0x6787L, 0x3292L), 0x3292L);
            uint32_t l_550 = 0xB0C1AF16L;
            union U1 *l_556 = (void*)0;
            int32_t l_559[4] = {0x795A87BCL,0x795A87BCL,0x795A87BCL,0x795A87BCL};
            VECTOR(int16_t, 2) l_580 = (VECTOR(int16_t, 2))(0x4DBFL, 1L);
            VECTOR(uint32_t, 4) l_586 = (VECTOR(uint32_t, 4))(0xC9ACF7EAL, (VECTOR(uint32_t, 2))(0xC9ACF7EAL, 6UL), 6UL);
            VECTOR(uint8_t, 2) l_591 = (VECTOR(uint8_t, 2))(2UL, 0UL);
            union U2 *l_594 = &p_1340->g_595;
            union U2 **l_593 = &l_594;
            int i;
            for (p_1340->g_84 = (-1); (p_1340->g_84 > (-27)); p_1340->g_84 = safe_sub_func_int64_t_s_s(p_1340->g_84, 1))
            { /* block id: 174 */
                (*p_1340->g_521) = p_1340->g_520;
            }
            if (p_53)
            { /* block id: 177 */
                return l_522;
            }
            else
            { /* block id: 179 */
                int8_t *l_539 = &l_512;
                int8_t **l_538 = &l_539;
                int32_t l_540 = 1L;
                VECTOR(int16_t, 2) l_545 = (VECTOR(int16_t, 2))(2L, 0x15C8L);
                int32_t l_551 = (-1L);
                int i;
                l_551 |= (((((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((l_527 == ((((l_457 &= ((((*l_416) = (safe_mul_func_uint16_t_u_u((((l_522 > (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(1UL, (safe_add_func_int16_t_s_s(((p_1340->g_386.x = ((**l_132) , l_522)) >= (((*l_538) = ((**l_181) = (**p_1340->g_79))) == p_55)), l_540)))), (((safe_mul_func_uint8_t_u_u((((VECTOR(int8_t, 16))(p_1340->g_543.xwzywywwxwxxyxzx)).s0 < (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(l_544.wzzxwzww)).s00, ((VECTOR(int16_t, 2))(l_545.yx))))), 6L, 0x1552L, (-1L), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-6L), 0x06B6L)))).yyxxxxxx)).s5217177602453717)).sfc, (int16_t)((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((0x0CC71BD2L != (**p_1340->g_192)), l_522)), 0)) > 0x09L)))), 0x18F1L)).s31)).xxyyxyxy)).s3 & p_1340->g_128.y)), l_540)) , p_1340->g_6[2]) > p_53)))) != 0x2D58L) , l_513.w), 0x6876L))) || l_522) && l_550)) != 0x2E3C99F7L) >= l_550) , &p_1340->g_84)), p_53)), 7)) | GROUP_DIVERGE(1, 1)) , p_53) & p_1340->g_74.s4) && l_376.x);
            }
            if ((safe_sub_func_int32_t_s_s(l_513.w, (*l_133))))
            { /* block id: 187 */
                return p_53;
            }
            else
            { /* block id: 189 */
                VECTOR(uint32_t, 16) l_590 = (VECTOR(uint32_t, 16))(0x848893C0L, (VECTOR(uint32_t, 4))(0x848893C0L, (VECTOR(uint32_t, 2))(0x848893C0L, 0x3DBC6F60L), 0x3DBC6F60L), 0x3DBC6F60L, 0x848893C0L, 0x3DBC6F60L, (VECTOR(uint32_t, 2))(0x848893C0L, 0x3DBC6F60L), (VECTOR(uint32_t, 2))(0x848893C0L, 0x3DBC6F60L), 0x848893C0L, 0x3DBC6F60L, 0x848893C0L, 0x3DBC6F60L);
                int i;
                for (l_258 = 28; (l_258 < 18); --l_258)
                { /* block id: 192 */
                    int32_t *l_557 = &p_1340->g_82;
                    int32_t *l_558[10] = {&l_457,&l_457,&l_457,&l_457,&l_457,&l_457,&l_457,&l_457,&l_457,&l_457};
                    uint32_t l_560 = 5UL;
                    int i;
                    (*l_487) = l_556;
                    if ((**p_1340->g_192))
                        break;
                    (*p_1340->g_192) = (*p_1340->g_192);
                    ++l_560;
                }
                if (p_53)
                { /* block id: 198 */
                    uint64_t l_574 = 18446744073709551609UL;
                    VECTOR(int16_t, 2) l_578 = (VECTOR(int16_t, 2))(0x1DDEL, 0x34D5L);
                    VECTOR(int16_t, 2) l_581 = (VECTOR(int16_t, 2))((-9L), 0L);
                    VECTOR(uint32_t, 8) l_587 = (VECTOR(uint32_t, 8))(0x276F1219L, (VECTOR(uint32_t, 4))(0x276F1219L, (VECTOR(uint32_t, 2))(0x276F1219L, 0x7DC3925CL), 0x7DC3925CL), 0x7DC3925CL, 0x276F1219L, 0x7DC3925CL);
                    VECTOR(uint32_t, 16) l_588 = (VECTOR(uint32_t, 16))(0x30542426L, (VECTOR(uint32_t, 4))(0x30542426L, (VECTOR(uint32_t, 2))(0x30542426L, 0x7C9BBE4FL), 0x7C9BBE4FL), 0x7C9BBE4FL, 0x30542426L, 0x7C9BBE4FL, (VECTOR(uint32_t, 2))(0x30542426L, 0x7C9BBE4FL), (VECTOR(uint32_t, 2))(0x30542426L, 0x7C9BBE4FL), 0x30542426L, 0x7C9BBE4FL, 0x30542426L, 0x7C9BBE4FL);
                    VECTOR(uint8_t, 4) l_592 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x7CL), 0x7CL);
                    int i;
                    (**p_1340->g_192) = (((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))(4UL, (((((((VECTOR(uint8_t, 4))(p_1340->g_565.s813e)).x == ((((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(l_566.s4db24bbc)).s64, ((VECTOR(int16_t, 2))(1L, 0x38BAL))))).lo ^ GROUP_DIVERGE(1, 1)) && 252UL)) >= p_56) | (safe_unary_minus_func_uint32_t_u(((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_53, (safe_sub_func_int16_t_s_s(p_53, ((l_574 | (safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s(0x73E1L, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(l_578.xyxxxxxxxxyxyyxx)).s18, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_1340->g_579.xxyx)).odd)), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_580.xxyxxyyx)))).lo, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_581.yyyxxxxy)))).hi))).odd))).even))))) ^ ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(4294967295UL, 0UL, 0x2EBE6962L, 0UL)).zzzxywyyyywxwyyy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 16))(l_582.sc1711734e78d2bf9)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_583.yyxyyxxyxxyxyxyy)).s7af4)).wxzwwwzyxxxzwzyx, ((VECTOR(uint32_t, 2))(p_1340->g_584.yx)).yxxyxxyyyxyxxxyy))))), ((VECTOR(uint32_t, 8))(p_1340->g_585.xxyyyyxy)).s5750037376264615))).sae)).xxyyyyxxxxxxxyxx))).s84, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(l_586.yy)).yyyx, ((VECTOR(uint32_t, 16))(l_587.s4763632444245305)).s7cea, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 8))((**l_132), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_588.sd7d1c5b8)).s3540044700340667)))).s244b)), (p_1340->g_585.x = p_53), 0x3608441CL, 0UL)), ((VECTOR(uint32_t, 8))(p_1340->g_589.s8e868879))))), 0x2C7B0E07L, ((VECTOR(uint32_t, 2))(l_590.sd3)), (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_591.yxyyxxxx)).hi)).odd)).yxxxyyyx)), ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 4))(l_592.xzwz))))).wwyyzzzz, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((((((-8L) < l_590.s3) , l_133) != (void*)0) || FAKE_DIVERGE(p_1340->local_0_offset, get_local_id(0), 10)) | 255UL), 0x3AL, l_581.x, 5L, ((VECTOR(int8_t, 2))(0x40L)), l_559[3], ((VECTOR(int8_t, 4))(0x59L)), ((VECTOR(int8_t, 4))((-10L))), 0x79L)).s91ab)).wxzzwxww, ((VECTOR(int8_t, 8))(0L))))).s2575630027173520, ((VECTOR(int8_t, 16))((-1L))), ((VECTOR(int8_t, 16))(0x2AL))))).s6b)).yyyxxyxyyyxxxyyy))).lo))))).s34)).hi == l_588.s6), 0x9F2DA1CEL, 0UL, 0x10C6AB40L, 0xC5D6AEEAL)).s10)).yyxy))).yxzwyxwyzwxxyxyy)).sd3))).xxyx, ((VECTOR(uint32_t, 4))(0xCDB172D5L))))).x))))), 0x77A845B2L)) & l_581.y)))) ^ 0x2B42CA172E9FC397L) , p_56), p_1340->g_101.x, 0xA2936133L, ((VECTOR(uint32_t, 8))(0UL)), 0x22307735L, ((VECTOR(uint32_t, 2))(4294967286UL)), 0UL)).s9d08, ((VECTOR(uint32_t, 4))(4294967295UL))))).z, (*p_1340->g_193))) || 0x95EFL) != 6L);
                    return l_578.y;
                }
                else
                { /* block id: 202 */
                    (*p_1340->g_192) = ((*l_132) = &l_559[2]);
                }
            }
            (*l_593) = (void*)0;
        }
        else
        { /* block id: 208 */
            (**p_1340->g_192) = ((**l_487) , 0x439CDCCFL);
            (*p_1340->g_598) = l_596;
        }
        (*p_1340->g_603) ^= p_56;
    }
    (*l_605) = (*p_1340->g_243);
    return l_191.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_35 p_1340->g_74 p_1340->g_79 p_1340->g_85 p_1340->g_93 p_1340->g_94 p_1340->g_99 p_1340->g_101 p_1340->g_82 p_1340->g_2 p_1340->g_6 p_1340->g_104
 * writes: p_1340->g_74 p_1340->g_80 p_1340->g_85 p_1340->g_82
 */
int8_t  func_66(int8_t * p_67, struct S3 * p_1340)
{ /* block id: 21 */
    int8_t *l_69 = (void*)0;
    int8_t **l_68 = &l_69;
    int16_t *l_73 = (void*)0;
    int16_t *l_75 = (void*)0;
    int16_t *l_76 = (void*)0;
    int16_t *l_77[4];
    int32_t l_105 = 1L;
    int i;
    for (i = 0; i < 4; i++)
        l_77[i] = (void*)0;
    (*p_1340->g_104) = ((p_1340->g_35[1][2] != ((*l_68) = p_1340->g_35[0][1])) ^ func_70(p_67, (p_1340->g_74.s4 ^= 8L), p_1340));
    return l_105;
}


/* ------------------------------------------ */
/* 
 * reads : p_1340->g_79 p_1340->g_85 p_1340->g_93 p_1340->g_94 p_1340->g_99 p_1340->g_101 p_1340->g_82 p_1340->g_2 p_1340->g_6
 * writes: p_1340->g_80 p_1340->g_85 p_1340->g_82
 */
int64_t  func_70(int8_t * p_71, int16_t  p_72, struct S3 * p_1340)
{ /* block id: 24 */
    int8_t **l_78[6][6] = {{&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1]},{&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1]},{&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1]},{&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1]},{&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1]},{&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1],&p_1340->g_35[0][1]}};
    int32_t *l_81 = &p_1340->g_82;
    int32_t *l_83[8][2] = {{&p_1340->g_6[2],&p_1340->g_2},{&p_1340->g_6[2],&p_1340->g_2},{&p_1340->g_6[2],&p_1340->g_2},{&p_1340->g_6[2],&p_1340->g_2},{&p_1340->g_6[2],&p_1340->g_2},{&p_1340->g_6[2],&p_1340->g_2},{&p_1340->g_6[2],&p_1340->g_2},{&p_1340->g_6[2],&p_1340->g_2}};
    int32_t **l_88 = &l_83[1][1];
    VECTOR(uint32_t, 16) l_100 = (VECTOR(uint32_t, 16))(0xA23B15C0L, (VECTOR(uint32_t, 4))(0xA23B15C0L, (VECTOR(uint32_t, 2))(0xA23B15C0L, 8UL), 8UL), 8UL, 0xA23B15C0L, 8UL, (VECTOR(uint32_t, 2))(0xA23B15C0L, 8UL), (VECTOR(uint32_t, 2))(0xA23B15C0L, 8UL), 0xA23B15C0L, 8UL, 0xA23B15C0L, 8UL);
    VECTOR(uint64_t, 8) l_102 = (VECTOR(uint64_t, 8))(0x73B7D9658AA494CAL, (VECTOR(uint64_t, 4))(0x73B7D9658AA494CAL, (VECTOR(uint64_t, 2))(0x73B7D9658AA494CAL, 1UL), 1UL), 1UL, 0x73B7D9658AA494CAL, 1UL);
    VECTOR(uint64_t, 16) l_103 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xC255F5DB90C34EF3L), 0xC255F5DB90C34EF3L), 0xC255F5DB90C34EF3L, 1UL, 0xC255F5DB90C34EF3L, (VECTOR(uint64_t, 2))(1UL, 0xC255F5DB90C34EF3L), (VECTOR(uint64_t, 2))(1UL, 0xC255F5DB90C34EF3L), 1UL, 0xC255F5DB90C34EF3L, 1UL, 0xC255F5DB90C34EF3L);
    int i, j;
    (*p_1340->g_79) = l_78[3][3];
    p_1340->g_85++;
    (*l_88) = l_83[1][1];
    (*l_81) |= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((-1L), ((p_1340->g_93 , p_1340->g_94) == &l_83[1][1]))), (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(0UL, 2)), ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(uint64_t, 16))(p_1340->g_99.s1143413241041045)).even, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_100.s4e)))).yyxyxyxy, ((VECTOR(uint32_t, 8))(p_1340->g_101.yyxyyyxx))))), ((VECTOR(uint64_t, 8))(l_102.s42422545)))))))))).s07)).xyyxyyxyxyxyxxxx, (uint64_t)((VECTOR(uint64_t, 8))(l_103.sef0b8c27)).s2)))))).s4))));
    return (**l_88);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[44];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 44; i++)
            l_comm_values[i] = 1;
    struct S3 c_1341;
    struct S3* p_1340 = &c_1341;
    struct S3 c_1342 = {
        0x363E8E1BL, // p_1340->g_2
        (-1L), // p_1340->g_5
        {0L,0L,0L}, // p_1340->g_6
        0x0F90A3CFL, // p_1340->g_9
        0x149F4FFCL, // p_1340->g_10
        0L, // p_1340->g_11
        (-5L), // p_1340->g_12
        (VECTOR(int16_t, 8))(0x07A3L, (VECTOR(int16_t, 4))(0x07A3L, (VECTOR(int16_t, 2))(0x07A3L, 0x6F4AL), 0x6F4AL), 0x6F4AL, 0x07A3L, 0x6F4AL), // p_1340->g_17
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x7EL), 0x7EL), 0x7EL, (-1L), 0x7EL), // p_1340->g_36
        {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}, // p_1340->g_35
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x0509L), 0x0509L), 0x0509L, 1L, 0x0509L, (VECTOR(int16_t, 2))(1L, 0x0509L), (VECTOR(int16_t, 2))(1L, 0x0509L), 1L, 0x0509L, 1L, 0x0509L), // p_1340->g_74
        &p_1340->g_35[0][1], // p_1340->g_80
        &p_1340->g_80, // p_1340->g_79
        (-6L), // p_1340->g_82
        0L, // p_1340->g_84
        4294967295UL, // p_1340->g_85
        {1UL,0x0CFA8270L,0L,65532UL}, // p_1340->g_93
        (void*)0, // p_1340->g_94
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x2A06A03D0BAECBACL), 0x2A06A03D0BAECBACL), 0x2A06A03D0BAECBACL, 0UL, 0x2A06A03D0BAECBACL), // p_1340->g_99
        (VECTOR(uint32_t, 2))(0UL, 0UL), // p_1340->g_101
        &p_1340->g_82, // p_1340->g_104
        {{0x289450AD34F8EFC5L},{0x289450AD34F8EFC5L}}, // p_1340->g_118
        &p_1340->g_118[0], // p_1340->g_117
        &p_1340->g_117, // p_1340->g_119
        (VECTOR(int32_t, 4))(0x28A08A75L, (VECTOR(int32_t, 2))(0x28A08A75L, 0x1A8FC39FL), 0x1A8FC39FL), // p_1340->g_128
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1340->g_131
        (VECTOR(uint16_t, 4))(0xAFD1L, (VECTOR(uint16_t, 2))(0xAFD1L, 2UL), 2UL), // p_1340->g_134
        0x1BBB9F26L, // p_1340->g_136
        {4294967289UL,0xDCFDAD02L,0x08DCF833L,0x27F0L}, // p_1340->g_147
        (VECTOR(int16_t, 16))(0x4CEBL, (VECTOR(int16_t, 4))(0x4CEBL, (VECTOR(int16_t, 2))(0x4CEBL, 0x5C91L), 0x5C91L), 0x5C91L, 0x4CEBL, 0x5C91L, (VECTOR(int16_t, 2))(0x4CEBL, 0x5C91L), (VECTOR(int16_t, 2))(0x4CEBL, 0x5C91L), 0x4CEBL, 0x5C91L, 0x4CEBL, 0x5C91L), // p_1340->g_172
        (VECTOR(int8_t, 8))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0x05L), 0x05L), 0x05L, 0x5EL, 0x05L), // p_1340->g_177
        (VECTOR(uint8_t, 4))(0x2EL, (VECTOR(uint8_t, 2))(0x2EL, 0x06L), 0x06L), // p_1340->g_178
        6L, // p_1340->g_179
        &p_1340->g_82, // p_1340->g_193
        &p_1340->g_193, // p_1340->g_192
        &p_1340->g_118[0].f0, // p_1340->g_204
        {-1L}, // p_1340->g_206
        (VECTOR(uint8_t, 16))(0x46L, (VECTOR(uint8_t, 4))(0x46L, (VECTOR(uint8_t, 2))(0x46L, 253UL), 253UL), 253UL, 0x46L, 253UL, (VECTOR(uint8_t, 2))(0x46L, 253UL), (VECTOR(uint8_t, 2))(0x46L, 253UL), 0x46L, 253UL, 0x46L, 253UL), // p_1340->g_218
        (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), // p_1340->g_223
        {0UL,0x83642408L,0x1FDEBC78L,65535UL}, // p_1340->g_242
        &p_1340->g_93, // p_1340->g_243
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xCAL), 0xCAL), // p_1340->g_269
        (VECTOR(uint16_t, 2))(0x6D25L, 0x1A13L), // p_1340->g_292
        (VECTOR(uint16_t, 16))(0xA2D4L, (VECTOR(uint16_t, 4))(0xA2D4L, (VECTOR(uint16_t, 2))(0xA2D4L, 1UL), 1UL), 1UL, 0xA2D4L, 1UL, (VECTOR(uint16_t, 2))(0xA2D4L, 1UL), (VECTOR(uint16_t, 2))(0xA2D4L, 1UL), 0xA2D4L, 1UL, 0xA2D4L, 1UL), // p_1340->g_294
        (VECTOR(int32_t, 8))(0x1BDC8B6CL, (VECTOR(int32_t, 4))(0x1BDC8B6CL, (VECTOR(int32_t, 2))(0x1BDC8B6CL, 0x4E26FE36L), 0x4E26FE36L), 0x4E26FE36L, 0x1BDC8B6CL, 0x4E26FE36L), // p_1340->g_296
        {0x7A923E03L,0x855A24DFL,0x6B94FB13L,65526UL}, // p_1340->g_302
        &p_1340->g_93, // p_1340->g_303
        {0x1908866DL,1UL,2L,1UL}, // p_1340->g_324
        0x35FBL, // p_1340->g_361
        4294967287UL, // p_1340->g_362
        {0UL,4294967286UL,0x0A042FF5L,0x5001L}, // p_1340->g_367
        (VECTOR(int16_t, 2))(0x2F68L, 0x1554L), // p_1340->g_386
        &p_1340->g_242, // p_1340->g_409
        (VECTOR(uint32_t, 4))(0x1CDA2966L, (VECTOR(uint32_t, 2))(0x1CDA2966L, 7UL), 7UL), // p_1340->g_417
        {3UL,4294967287UL,0x00AFC953L,0x9341L}, // p_1340->g_433
        {5UL,1UL,0x22F44924L,65535UL}, // p_1340->g_461
        0x078317F8L, // p_1340->g_472
        &p_1340->g_118[1], // p_1340->g_486
        (VECTOR(int32_t, 16))(0x08139B56L, (VECTOR(int32_t, 4))(0x08139B56L, (VECTOR(int32_t, 2))(0x08139B56L, 0x720B9D7AL), 0x720B9D7AL), 0x720B9D7AL, 0x08139B56L, 0x720B9D7AL, (VECTOR(int32_t, 2))(0x08139B56L, 0x720B9D7AL), (VECTOR(int32_t, 2))(0x08139B56L, 0x720B9D7AL), 0x08139B56L, 0x720B9D7AL, 0x08139B56L, 0x720B9D7AL), // p_1340->g_491
        (void*)0, // p_1340->g_520
        &p_1340->g_520, // p_1340->g_521
        (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, 3L), 3L), // p_1340->g_543
        (VECTOR(uint8_t, 16))(0x95L, (VECTOR(uint8_t, 4))(0x95L, (VECTOR(uint8_t, 2))(0x95L, 0x3DL), 0x3DL), 0x3DL, 0x95L, 0x3DL, (VECTOR(uint8_t, 2))(0x95L, 0x3DL), (VECTOR(uint8_t, 2))(0x95L, 0x3DL), 0x95L, 0x3DL, 0x95L, 0x3DL), // p_1340->g_565
        (VECTOR(int16_t, 2))((-1L), 2L), // p_1340->g_579
        (VECTOR(uint32_t, 2))(0x084D8D6FL, 4294967295UL), // p_1340->g_584
        (VECTOR(uint32_t, 2))(0xF150916EL, 0x1FC2FFD1L), // p_1340->g_585
        (VECTOR(uint32_t, 16))(0x78FBAC61L, (VECTOR(uint32_t, 4))(0x78FBAC61L, (VECTOR(uint32_t, 2))(0x78FBAC61L, 0UL), 0UL), 0UL, 0x78FBAC61L, 0UL, (VECTOR(uint32_t, 2))(0x78FBAC61L, 0UL), (VECTOR(uint32_t, 2))(0x78FBAC61L, 0UL), 0x78FBAC61L, 0UL, 0x78FBAC61L, 0UL), // p_1340->g_589
        {1L}, // p_1340->g_595
        (void*)0, // p_1340->g_600
        &p_1340->g_600, // p_1340->g_599
        &p_1340->g_599, // p_1340->g_598
        (void*)0, // p_1340->g_602
        &p_1340->g_82, // p_1340->g_603
        {&p_1340->g_242,&p_1340->g_242,&p_1340->g_242,&p_1340->g_242}, // p_1340->g_604
        7UL, // p_1340->g_609
        {5UL,0x1353ECBAL,0x66BAC947L,0xC1F7L}, // p_1340->g_610
        {1UL,1UL,0x00F9B0D1L,65535UL}, // p_1340->g_611
        {1UL,4294967295UL,0x14543AF2L,65532UL}, // p_1340->g_625
        {&p_1340->g_433,&p_1340->g_433,&p_1340->g_433,&p_1340->g_433,&p_1340->g_433,&p_1340->g_433}, // p_1340->g_626
        {{{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1340->g_610,&p_1340->g_625,&p_1340->g_610,(void*)0,(void*)0}}}, // p_1340->g_627
        &p_1340->g_433, // p_1340->g_628
        {0x9994ABA7L,4294967286UL,-5L,0x48A2L}, // p_1340->g_674
        {{{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL}},{{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL}},{{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL},{0x5A62ED38L,0x4780A7BEL,1L,6UL}}}, // p_1340->g_675
        {0x7F3C556AL,0UL,0x1247BA2AL,65535UL}, // p_1340->g_676
        (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-7L)), (-7L)), // p_1340->g_720
        {0xF0D8AA0BL,1UL,0x175E6806L,0x4DD5L}, // p_1340->g_742
        {0x2DE5FB1EL,1UL,-4L,0xECC7L}, // p_1340->g_743
        &p_1340->g_609, // p_1340->g_763
        {{{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763}},{{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763},{&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763,&p_1340->g_763,(void*)0,&p_1340->g_763,&p_1340->g_763}}}, // p_1340->g_762
        &p_1340->g_762[0][6][5], // p_1340->g_764
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x14428319L), 0x14428319L), // p_1340->g_798
        {0x8C822129L,0xB0E1E491L,0x1A672612L,0x2F2DL}, // p_1340->g_812
        {4294967287UL,4294967295UL,0x29AEFB2CL,0xF99FL}, // p_1340->g_813
        {{{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}}},{{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}}},{{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}}},{{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}}},{{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}}},{{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}}},{{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}},{{0xC6ABEB25L,0x8E6D9020L,1L,0x40F0L},{0xE98A6CC8L,0x4597908DL,0x281C1227L,0UL}}}}, // p_1340->g_816
        {0x29BFD810L,1UL,8L,0UL}, // p_1340->g_834
        (VECTOR(int8_t, 2))(1L, 0x42L), // p_1340->g_847
        (VECTOR(uint32_t, 16))(0x6BEF1027L, (VECTOR(uint32_t, 4))(0x6BEF1027L, (VECTOR(uint32_t, 2))(0x6BEF1027L, 0x6CE5F123L), 0x6CE5F123L), 0x6CE5F123L, 0x6BEF1027L, 0x6CE5F123L, (VECTOR(uint32_t, 2))(0x6BEF1027L, 0x6CE5F123L), (VECTOR(uint32_t, 2))(0x6BEF1027L, 0x6CE5F123L), 0x6BEF1027L, 0x6CE5F123L, 0x6BEF1027L, 0x6CE5F123L), // p_1340->g_852
        {0x64758015B1CA71CAL,0x64758015B1CA71CAL,0x64758015B1CA71CAL}, // p_1340->g_856
        &p_1340->g_856[2], // p_1340->g_855
        (VECTOR(int16_t, 8))(0x7129L, (VECTOR(int16_t, 4))(0x7129L, (VECTOR(int16_t, 2))(0x7129L, 0x1A2EL), 0x1A2EL), 0x1A2EL, 0x7129L, 0x1A2EL), // p_1340->g_860
        (VECTOR(int64_t, 8))(0x1C39BE5C6ABF343EL, (VECTOR(int64_t, 4))(0x1C39BE5C6ABF343EL, (VECTOR(int64_t, 2))(0x1C39BE5C6ABF343EL, 7L), 7L), 7L, 0x1C39BE5C6ABF343EL, 7L), // p_1340->g_861
        {4294967295UL,4294967293UL,0x5BF61CE5L,0UL}, // p_1340->g_878
        (void*)0, // p_1340->g_891
        (VECTOR(int32_t, 8))(0x5638E0DBL, (VECTOR(int32_t, 4))(0x5638E0DBL, (VECTOR(int32_t, 2))(0x5638E0DBL, 0x6DCBA9EDL), 0x6DCBA9EDL), 0x6DCBA9EDL, 0x5638E0DBL, 0x6DCBA9EDL), // p_1340->g_893
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x41BDA4CAL), 0x41BDA4CAL), 0x41BDA4CAL, (-1L), 0x41BDA4CAL), // p_1340->g_894
        (VECTOR(int8_t, 8))(0x58L, (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x30L), 0x30L), 0x30L, 0x58L, 0x30L), // p_1340->g_917
        (VECTOR(int16_t, 8))(0x55B0L, (VECTOR(int16_t, 4))(0x55B0L, (VECTOR(int16_t, 2))(0x55B0L, 0x4FDCL), 0x4FDCL), 0x4FDCL, 0x55B0L, 0x4FDCL), // p_1340->g_940
        (VECTOR(int16_t, 2))(0L, 0x683CL), // p_1340->g_941
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL), // p_1340->g_945
        (void*)0, // p_1340->g_981
        &p_1340->g_82, // p_1340->g_982
        (VECTOR(uint8_t, 2))(0UL, 255UL), // p_1340->g_987
        {(void*)0,(void*)0,(void*)0}, // p_1340->g_997
        (void*)0, // p_1340->g_998
        (VECTOR(int16_t, 2))(0x7A41L, 0x3F13L), // p_1340->g_1003
        {4294967290UL,1UL,0x7C2C2297L,0x193AL}, // p_1340->g_1037
        {4294967295UL,4294967289UL,0x48E5F8CBL,0x43A8L}, // p_1340->g_1038
        {0x337E222AL,0x3B9C88CDL,-1L,0xCC94L}, // p_1340->g_1070
        {5L,5L,5L}, // p_1340->g_1073
        (void*)0, // p_1340->g_1076
        (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0xE4759A15L), 0xE4759A15L), 0xE4759A15L, 3UL, 0xE4759A15L), // p_1340->g_1097
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1340->g_1124
        (VECTOR(int64_t, 8))(0x66B76AD09415D250L, (VECTOR(int64_t, 4))(0x66B76AD09415D250L, (VECTOR(int64_t, 2))(0x66B76AD09415D250L, 0x64A88DCBB57EA0C9L), 0x64A88DCBB57EA0C9L), 0x64A88DCBB57EA0C9L, 0x66B76AD09415D250L, 0x64A88DCBB57EA0C9L), // p_1340->g_1125
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x0D696D8F262BDEF3L), 0x0D696D8F262BDEF3L), 0x0D696D8F262BDEF3L, (-1L), 0x0D696D8F262BDEF3L, (VECTOR(int64_t, 2))((-1L), 0x0D696D8F262BDEF3L), (VECTOR(int64_t, 2))((-1L), 0x0D696D8F262BDEF3L), (-1L), 0x0D696D8F262BDEF3L, (-1L), 0x0D696D8F262BDEF3L), // p_1340->g_1128
        (VECTOR(int64_t, 4))(0x3FE79503CB9FDCC6L, (VECTOR(int64_t, 2))(0x3FE79503CB9FDCC6L, 1L), 1L), // p_1340->g_1130
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1340->g_1133
        0x5324C33EL, // p_1340->g_1168
        (void*)0, // p_1340->g_1172
        &p_1340->g_1172, // p_1340->g_1171
        {7L}, // p_1340->g_1181
        (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-1L)), (-1L)), // p_1340->g_1189
        (void*)0, // p_1340->g_1195
        (void*)0, // p_1340->g_1198
        (void*)0, // p_1340->g_1200
        (void*)0, // p_1340->g_1202
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xC0D6ADA4L), 0xC0D6ADA4L), 0xC0D6ADA4L, 1UL, 0xC0D6ADA4L, (VECTOR(uint32_t, 2))(1UL, 0xC0D6ADA4L), (VECTOR(uint32_t, 2))(1UL, 0xC0D6ADA4L), 1UL, 0xC0D6ADA4L, 1UL, 0xC0D6ADA4L), // p_1340->g_1223
        (void*)0, // p_1340->g_1227
        &p_1340->g_1227, // p_1340->g_1226
        (void*)0, // p_1340->g_1228
        (void*)0, // p_1340->g_1229
        &p_1340->g_1226, // p_1340->g_1230
        18446744073709551613UL, // p_1340->g_1256
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L), (VECTOR(int64_t, 2))(0L, (-5L)), (VECTOR(int64_t, 2))(0L, (-5L)), 0L, (-5L), 0L, (-5L)), // p_1340->g_1298
        &p_1340->g_816[1][5][0], // p_1340->g_1307
        0, // p_1340->v_collective
        sequence_input[get_global_id(0)], // p_1340->global_0_offset
        sequence_input[get_global_id(1)], // p_1340->global_1_offset
        sequence_input[get_global_id(2)], // p_1340->global_2_offset
        sequence_input[get_local_id(0)], // p_1340->local_0_offset
        sequence_input[get_local_id(1)], // p_1340->local_1_offset
        sequence_input[get_local_id(2)], // p_1340->local_2_offset
        sequence_input[get_group_id(0)], // p_1340->group_0_offset
        sequence_input[get_group_id(1)], // p_1340->group_1_offset
        sequence_input[get_group_id(2)], // p_1340->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 44)), permutations[0][get_linear_local_id()])), // p_1340->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1341 = c_1342;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1340);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1340->g_2, "p_1340->g_2", print_hash_value);
    transparent_crc(p_1340->g_5, "p_1340->g_5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1340->g_6[i], "p_1340->g_6[i]", print_hash_value);

    }
    transparent_crc(p_1340->g_9, "p_1340->g_9", print_hash_value);
    transparent_crc(p_1340->g_10, "p_1340->g_10", print_hash_value);
    transparent_crc(p_1340->g_11, "p_1340->g_11", print_hash_value);
    transparent_crc(p_1340->g_12, "p_1340->g_12", print_hash_value);
    transparent_crc(p_1340->g_17.s0, "p_1340->g_17.s0", print_hash_value);
    transparent_crc(p_1340->g_17.s1, "p_1340->g_17.s1", print_hash_value);
    transparent_crc(p_1340->g_17.s2, "p_1340->g_17.s2", print_hash_value);
    transparent_crc(p_1340->g_17.s3, "p_1340->g_17.s3", print_hash_value);
    transparent_crc(p_1340->g_17.s4, "p_1340->g_17.s4", print_hash_value);
    transparent_crc(p_1340->g_17.s5, "p_1340->g_17.s5", print_hash_value);
    transparent_crc(p_1340->g_17.s6, "p_1340->g_17.s6", print_hash_value);
    transparent_crc(p_1340->g_17.s7, "p_1340->g_17.s7", print_hash_value);
    transparent_crc(p_1340->g_36.s0, "p_1340->g_36.s0", print_hash_value);
    transparent_crc(p_1340->g_36.s1, "p_1340->g_36.s1", print_hash_value);
    transparent_crc(p_1340->g_36.s2, "p_1340->g_36.s2", print_hash_value);
    transparent_crc(p_1340->g_36.s3, "p_1340->g_36.s3", print_hash_value);
    transparent_crc(p_1340->g_36.s4, "p_1340->g_36.s4", print_hash_value);
    transparent_crc(p_1340->g_36.s5, "p_1340->g_36.s5", print_hash_value);
    transparent_crc(p_1340->g_36.s6, "p_1340->g_36.s6", print_hash_value);
    transparent_crc(p_1340->g_36.s7, "p_1340->g_36.s7", print_hash_value);
    transparent_crc(p_1340->g_74.s0, "p_1340->g_74.s0", print_hash_value);
    transparent_crc(p_1340->g_74.s1, "p_1340->g_74.s1", print_hash_value);
    transparent_crc(p_1340->g_74.s2, "p_1340->g_74.s2", print_hash_value);
    transparent_crc(p_1340->g_74.s3, "p_1340->g_74.s3", print_hash_value);
    transparent_crc(p_1340->g_74.s4, "p_1340->g_74.s4", print_hash_value);
    transparent_crc(p_1340->g_74.s5, "p_1340->g_74.s5", print_hash_value);
    transparent_crc(p_1340->g_74.s6, "p_1340->g_74.s6", print_hash_value);
    transparent_crc(p_1340->g_74.s7, "p_1340->g_74.s7", print_hash_value);
    transparent_crc(p_1340->g_74.s8, "p_1340->g_74.s8", print_hash_value);
    transparent_crc(p_1340->g_74.s9, "p_1340->g_74.s9", print_hash_value);
    transparent_crc(p_1340->g_74.sa, "p_1340->g_74.sa", print_hash_value);
    transparent_crc(p_1340->g_74.sb, "p_1340->g_74.sb", print_hash_value);
    transparent_crc(p_1340->g_74.sc, "p_1340->g_74.sc", print_hash_value);
    transparent_crc(p_1340->g_74.sd, "p_1340->g_74.sd", print_hash_value);
    transparent_crc(p_1340->g_74.se, "p_1340->g_74.se", print_hash_value);
    transparent_crc(p_1340->g_74.sf, "p_1340->g_74.sf", print_hash_value);
    transparent_crc(p_1340->g_82, "p_1340->g_82", print_hash_value);
    transparent_crc(p_1340->g_84, "p_1340->g_84", print_hash_value);
    transparent_crc(p_1340->g_85, "p_1340->g_85", print_hash_value);
    transparent_crc(p_1340->g_93.f0, "p_1340->g_93.f0", print_hash_value);
    transparent_crc(p_1340->g_93.f1, "p_1340->g_93.f1", print_hash_value);
    transparent_crc(p_1340->g_93.f2, "p_1340->g_93.f2", print_hash_value);
    transparent_crc(p_1340->g_93.f3, "p_1340->g_93.f3", print_hash_value);
    transparent_crc(p_1340->g_99.s0, "p_1340->g_99.s0", print_hash_value);
    transparent_crc(p_1340->g_99.s1, "p_1340->g_99.s1", print_hash_value);
    transparent_crc(p_1340->g_99.s2, "p_1340->g_99.s2", print_hash_value);
    transparent_crc(p_1340->g_99.s3, "p_1340->g_99.s3", print_hash_value);
    transparent_crc(p_1340->g_99.s4, "p_1340->g_99.s4", print_hash_value);
    transparent_crc(p_1340->g_99.s5, "p_1340->g_99.s5", print_hash_value);
    transparent_crc(p_1340->g_99.s6, "p_1340->g_99.s6", print_hash_value);
    transparent_crc(p_1340->g_99.s7, "p_1340->g_99.s7", print_hash_value);
    transparent_crc(p_1340->g_101.x, "p_1340->g_101.x", print_hash_value);
    transparent_crc(p_1340->g_101.y, "p_1340->g_101.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1340->g_118[i].f0, "p_1340->g_118[i].f0", print_hash_value);

    }
    transparent_crc(p_1340->g_128.x, "p_1340->g_128.x", print_hash_value);
    transparent_crc(p_1340->g_128.y, "p_1340->g_128.y", print_hash_value);
    transparent_crc(p_1340->g_128.z, "p_1340->g_128.z", print_hash_value);
    transparent_crc(p_1340->g_128.w, "p_1340->g_128.w", print_hash_value);
    transparent_crc(p_1340->g_134.x, "p_1340->g_134.x", print_hash_value);
    transparent_crc(p_1340->g_134.y, "p_1340->g_134.y", print_hash_value);
    transparent_crc(p_1340->g_134.z, "p_1340->g_134.z", print_hash_value);
    transparent_crc(p_1340->g_134.w, "p_1340->g_134.w", print_hash_value);
    transparent_crc(p_1340->g_136, "p_1340->g_136", print_hash_value);
    transparent_crc(p_1340->g_147.f0, "p_1340->g_147.f0", print_hash_value);
    transparent_crc(p_1340->g_147.f1, "p_1340->g_147.f1", print_hash_value);
    transparent_crc(p_1340->g_147.f2, "p_1340->g_147.f2", print_hash_value);
    transparent_crc(p_1340->g_147.f3, "p_1340->g_147.f3", print_hash_value);
    transparent_crc(p_1340->g_172.s0, "p_1340->g_172.s0", print_hash_value);
    transparent_crc(p_1340->g_172.s1, "p_1340->g_172.s1", print_hash_value);
    transparent_crc(p_1340->g_172.s2, "p_1340->g_172.s2", print_hash_value);
    transparent_crc(p_1340->g_172.s3, "p_1340->g_172.s3", print_hash_value);
    transparent_crc(p_1340->g_172.s4, "p_1340->g_172.s4", print_hash_value);
    transparent_crc(p_1340->g_172.s5, "p_1340->g_172.s5", print_hash_value);
    transparent_crc(p_1340->g_172.s6, "p_1340->g_172.s6", print_hash_value);
    transparent_crc(p_1340->g_172.s7, "p_1340->g_172.s7", print_hash_value);
    transparent_crc(p_1340->g_172.s8, "p_1340->g_172.s8", print_hash_value);
    transparent_crc(p_1340->g_172.s9, "p_1340->g_172.s9", print_hash_value);
    transparent_crc(p_1340->g_172.sa, "p_1340->g_172.sa", print_hash_value);
    transparent_crc(p_1340->g_172.sb, "p_1340->g_172.sb", print_hash_value);
    transparent_crc(p_1340->g_172.sc, "p_1340->g_172.sc", print_hash_value);
    transparent_crc(p_1340->g_172.sd, "p_1340->g_172.sd", print_hash_value);
    transparent_crc(p_1340->g_172.se, "p_1340->g_172.se", print_hash_value);
    transparent_crc(p_1340->g_172.sf, "p_1340->g_172.sf", print_hash_value);
    transparent_crc(p_1340->g_177.s0, "p_1340->g_177.s0", print_hash_value);
    transparent_crc(p_1340->g_177.s1, "p_1340->g_177.s1", print_hash_value);
    transparent_crc(p_1340->g_177.s2, "p_1340->g_177.s2", print_hash_value);
    transparent_crc(p_1340->g_177.s3, "p_1340->g_177.s3", print_hash_value);
    transparent_crc(p_1340->g_177.s4, "p_1340->g_177.s4", print_hash_value);
    transparent_crc(p_1340->g_177.s5, "p_1340->g_177.s5", print_hash_value);
    transparent_crc(p_1340->g_177.s6, "p_1340->g_177.s6", print_hash_value);
    transparent_crc(p_1340->g_177.s7, "p_1340->g_177.s7", print_hash_value);
    transparent_crc(p_1340->g_178.x, "p_1340->g_178.x", print_hash_value);
    transparent_crc(p_1340->g_178.y, "p_1340->g_178.y", print_hash_value);
    transparent_crc(p_1340->g_178.z, "p_1340->g_178.z", print_hash_value);
    transparent_crc(p_1340->g_178.w, "p_1340->g_178.w", print_hash_value);
    transparent_crc(p_1340->g_179, "p_1340->g_179", print_hash_value);
    transparent_crc(p_1340->g_206.f0, "p_1340->g_206.f0", print_hash_value);
    transparent_crc(p_1340->g_218.s0, "p_1340->g_218.s0", print_hash_value);
    transparent_crc(p_1340->g_218.s1, "p_1340->g_218.s1", print_hash_value);
    transparent_crc(p_1340->g_218.s2, "p_1340->g_218.s2", print_hash_value);
    transparent_crc(p_1340->g_218.s3, "p_1340->g_218.s3", print_hash_value);
    transparent_crc(p_1340->g_218.s4, "p_1340->g_218.s4", print_hash_value);
    transparent_crc(p_1340->g_218.s5, "p_1340->g_218.s5", print_hash_value);
    transparent_crc(p_1340->g_218.s6, "p_1340->g_218.s6", print_hash_value);
    transparent_crc(p_1340->g_218.s7, "p_1340->g_218.s7", print_hash_value);
    transparent_crc(p_1340->g_218.s8, "p_1340->g_218.s8", print_hash_value);
    transparent_crc(p_1340->g_218.s9, "p_1340->g_218.s9", print_hash_value);
    transparent_crc(p_1340->g_218.sa, "p_1340->g_218.sa", print_hash_value);
    transparent_crc(p_1340->g_218.sb, "p_1340->g_218.sb", print_hash_value);
    transparent_crc(p_1340->g_218.sc, "p_1340->g_218.sc", print_hash_value);
    transparent_crc(p_1340->g_218.sd, "p_1340->g_218.sd", print_hash_value);
    transparent_crc(p_1340->g_218.se, "p_1340->g_218.se", print_hash_value);
    transparent_crc(p_1340->g_218.sf, "p_1340->g_218.sf", print_hash_value);
    transparent_crc(p_1340->g_223.x, "p_1340->g_223.x", print_hash_value);
    transparent_crc(p_1340->g_223.y, "p_1340->g_223.y", print_hash_value);
    transparent_crc(p_1340->g_242.f0, "p_1340->g_242.f0", print_hash_value);
    transparent_crc(p_1340->g_242.f1, "p_1340->g_242.f1", print_hash_value);
    transparent_crc(p_1340->g_242.f2, "p_1340->g_242.f2", print_hash_value);
    transparent_crc(p_1340->g_242.f3, "p_1340->g_242.f3", print_hash_value);
    transparent_crc(p_1340->g_269.x, "p_1340->g_269.x", print_hash_value);
    transparent_crc(p_1340->g_269.y, "p_1340->g_269.y", print_hash_value);
    transparent_crc(p_1340->g_269.z, "p_1340->g_269.z", print_hash_value);
    transparent_crc(p_1340->g_269.w, "p_1340->g_269.w", print_hash_value);
    transparent_crc(p_1340->g_292.x, "p_1340->g_292.x", print_hash_value);
    transparent_crc(p_1340->g_292.y, "p_1340->g_292.y", print_hash_value);
    transparent_crc(p_1340->g_294.s0, "p_1340->g_294.s0", print_hash_value);
    transparent_crc(p_1340->g_294.s1, "p_1340->g_294.s1", print_hash_value);
    transparent_crc(p_1340->g_294.s2, "p_1340->g_294.s2", print_hash_value);
    transparent_crc(p_1340->g_294.s3, "p_1340->g_294.s3", print_hash_value);
    transparent_crc(p_1340->g_294.s4, "p_1340->g_294.s4", print_hash_value);
    transparent_crc(p_1340->g_294.s5, "p_1340->g_294.s5", print_hash_value);
    transparent_crc(p_1340->g_294.s6, "p_1340->g_294.s6", print_hash_value);
    transparent_crc(p_1340->g_294.s7, "p_1340->g_294.s7", print_hash_value);
    transparent_crc(p_1340->g_294.s8, "p_1340->g_294.s8", print_hash_value);
    transparent_crc(p_1340->g_294.s9, "p_1340->g_294.s9", print_hash_value);
    transparent_crc(p_1340->g_294.sa, "p_1340->g_294.sa", print_hash_value);
    transparent_crc(p_1340->g_294.sb, "p_1340->g_294.sb", print_hash_value);
    transparent_crc(p_1340->g_294.sc, "p_1340->g_294.sc", print_hash_value);
    transparent_crc(p_1340->g_294.sd, "p_1340->g_294.sd", print_hash_value);
    transparent_crc(p_1340->g_294.se, "p_1340->g_294.se", print_hash_value);
    transparent_crc(p_1340->g_294.sf, "p_1340->g_294.sf", print_hash_value);
    transparent_crc(p_1340->g_296.s0, "p_1340->g_296.s0", print_hash_value);
    transparent_crc(p_1340->g_296.s1, "p_1340->g_296.s1", print_hash_value);
    transparent_crc(p_1340->g_296.s2, "p_1340->g_296.s2", print_hash_value);
    transparent_crc(p_1340->g_296.s3, "p_1340->g_296.s3", print_hash_value);
    transparent_crc(p_1340->g_296.s4, "p_1340->g_296.s4", print_hash_value);
    transparent_crc(p_1340->g_296.s5, "p_1340->g_296.s5", print_hash_value);
    transparent_crc(p_1340->g_296.s6, "p_1340->g_296.s6", print_hash_value);
    transparent_crc(p_1340->g_296.s7, "p_1340->g_296.s7", print_hash_value);
    transparent_crc(p_1340->g_302.f0, "p_1340->g_302.f0", print_hash_value);
    transparent_crc(p_1340->g_302.f1, "p_1340->g_302.f1", print_hash_value);
    transparent_crc(p_1340->g_302.f2, "p_1340->g_302.f2", print_hash_value);
    transparent_crc(p_1340->g_302.f3, "p_1340->g_302.f3", print_hash_value);
    transparent_crc(p_1340->g_324.f0, "p_1340->g_324.f0", print_hash_value);
    transparent_crc(p_1340->g_324.f1, "p_1340->g_324.f1", print_hash_value);
    transparent_crc(p_1340->g_324.f2, "p_1340->g_324.f2", print_hash_value);
    transparent_crc(p_1340->g_324.f3, "p_1340->g_324.f3", print_hash_value);
    transparent_crc(p_1340->g_361, "p_1340->g_361", print_hash_value);
    transparent_crc(p_1340->g_362, "p_1340->g_362", print_hash_value);
    transparent_crc(p_1340->g_367.f0, "p_1340->g_367.f0", print_hash_value);
    transparent_crc(p_1340->g_367.f1, "p_1340->g_367.f1", print_hash_value);
    transparent_crc(p_1340->g_367.f2, "p_1340->g_367.f2", print_hash_value);
    transparent_crc(p_1340->g_367.f3, "p_1340->g_367.f3", print_hash_value);
    transparent_crc(p_1340->g_386.x, "p_1340->g_386.x", print_hash_value);
    transparent_crc(p_1340->g_386.y, "p_1340->g_386.y", print_hash_value);
    transparent_crc(p_1340->g_417.x, "p_1340->g_417.x", print_hash_value);
    transparent_crc(p_1340->g_417.y, "p_1340->g_417.y", print_hash_value);
    transparent_crc(p_1340->g_417.z, "p_1340->g_417.z", print_hash_value);
    transparent_crc(p_1340->g_417.w, "p_1340->g_417.w", print_hash_value);
    transparent_crc(p_1340->g_433.f0, "p_1340->g_433.f0", print_hash_value);
    transparent_crc(p_1340->g_433.f1, "p_1340->g_433.f1", print_hash_value);
    transparent_crc(p_1340->g_433.f2, "p_1340->g_433.f2", print_hash_value);
    transparent_crc(p_1340->g_433.f3, "p_1340->g_433.f3", print_hash_value);
    transparent_crc(p_1340->g_461.f0, "p_1340->g_461.f0", print_hash_value);
    transparent_crc(p_1340->g_461.f1, "p_1340->g_461.f1", print_hash_value);
    transparent_crc(p_1340->g_461.f2, "p_1340->g_461.f2", print_hash_value);
    transparent_crc(p_1340->g_461.f3, "p_1340->g_461.f3", print_hash_value);
    transparent_crc(p_1340->g_472, "p_1340->g_472", print_hash_value);
    transparent_crc(p_1340->g_491.s0, "p_1340->g_491.s0", print_hash_value);
    transparent_crc(p_1340->g_491.s1, "p_1340->g_491.s1", print_hash_value);
    transparent_crc(p_1340->g_491.s2, "p_1340->g_491.s2", print_hash_value);
    transparent_crc(p_1340->g_491.s3, "p_1340->g_491.s3", print_hash_value);
    transparent_crc(p_1340->g_491.s4, "p_1340->g_491.s4", print_hash_value);
    transparent_crc(p_1340->g_491.s5, "p_1340->g_491.s5", print_hash_value);
    transparent_crc(p_1340->g_491.s6, "p_1340->g_491.s6", print_hash_value);
    transparent_crc(p_1340->g_491.s7, "p_1340->g_491.s7", print_hash_value);
    transparent_crc(p_1340->g_491.s8, "p_1340->g_491.s8", print_hash_value);
    transparent_crc(p_1340->g_491.s9, "p_1340->g_491.s9", print_hash_value);
    transparent_crc(p_1340->g_491.sa, "p_1340->g_491.sa", print_hash_value);
    transparent_crc(p_1340->g_491.sb, "p_1340->g_491.sb", print_hash_value);
    transparent_crc(p_1340->g_491.sc, "p_1340->g_491.sc", print_hash_value);
    transparent_crc(p_1340->g_491.sd, "p_1340->g_491.sd", print_hash_value);
    transparent_crc(p_1340->g_491.se, "p_1340->g_491.se", print_hash_value);
    transparent_crc(p_1340->g_491.sf, "p_1340->g_491.sf", print_hash_value);
    transparent_crc(p_1340->g_543.x, "p_1340->g_543.x", print_hash_value);
    transparent_crc(p_1340->g_543.y, "p_1340->g_543.y", print_hash_value);
    transparent_crc(p_1340->g_543.z, "p_1340->g_543.z", print_hash_value);
    transparent_crc(p_1340->g_543.w, "p_1340->g_543.w", print_hash_value);
    transparent_crc(p_1340->g_565.s0, "p_1340->g_565.s0", print_hash_value);
    transparent_crc(p_1340->g_565.s1, "p_1340->g_565.s1", print_hash_value);
    transparent_crc(p_1340->g_565.s2, "p_1340->g_565.s2", print_hash_value);
    transparent_crc(p_1340->g_565.s3, "p_1340->g_565.s3", print_hash_value);
    transparent_crc(p_1340->g_565.s4, "p_1340->g_565.s4", print_hash_value);
    transparent_crc(p_1340->g_565.s5, "p_1340->g_565.s5", print_hash_value);
    transparent_crc(p_1340->g_565.s6, "p_1340->g_565.s6", print_hash_value);
    transparent_crc(p_1340->g_565.s7, "p_1340->g_565.s7", print_hash_value);
    transparent_crc(p_1340->g_565.s8, "p_1340->g_565.s8", print_hash_value);
    transparent_crc(p_1340->g_565.s9, "p_1340->g_565.s9", print_hash_value);
    transparent_crc(p_1340->g_565.sa, "p_1340->g_565.sa", print_hash_value);
    transparent_crc(p_1340->g_565.sb, "p_1340->g_565.sb", print_hash_value);
    transparent_crc(p_1340->g_565.sc, "p_1340->g_565.sc", print_hash_value);
    transparent_crc(p_1340->g_565.sd, "p_1340->g_565.sd", print_hash_value);
    transparent_crc(p_1340->g_565.se, "p_1340->g_565.se", print_hash_value);
    transparent_crc(p_1340->g_565.sf, "p_1340->g_565.sf", print_hash_value);
    transparent_crc(p_1340->g_579.x, "p_1340->g_579.x", print_hash_value);
    transparent_crc(p_1340->g_579.y, "p_1340->g_579.y", print_hash_value);
    transparent_crc(p_1340->g_584.x, "p_1340->g_584.x", print_hash_value);
    transparent_crc(p_1340->g_584.y, "p_1340->g_584.y", print_hash_value);
    transparent_crc(p_1340->g_585.x, "p_1340->g_585.x", print_hash_value);
    transparent_crc(p_1340->g_585.y, "p_1340->g_585.y", print_hash_value);
    transparent_crc(p_1340->g_589.s0, "p_1340->g_589.s0", print_hash_value);
    transparent_crc(p_1340->g_589.s1, "p_1340->g_589.s1", print_hash_value);
    transparent_crc(p_1340->g_589.s2, "p_1340->g_589.s2", print_hash_value);
    transparent_crc(p_1340->g_589.s3, "p_1340->g_589.s3", print_hash_value);
    transparent_crc(p_1340->g_589.s4, "p_1340->g_589.s4", print_hash_value);
    transparent_crc(p_1340->g_589.s5, "p_1340->g_589.s5", print_hash_value);
    transparent_crc(p_1340->g_589.s6, "p_1340->g_589.s6", print_hash_value);
    transparent_crc(p_1340->g_589.s7, "p_1340->g_589.s7", print_hash_value);
    transparent_crc(p_1340->g_589.s8, "p_1340->g_589.s8", print_hash_value);
    transparent_crc(p_1340->g_589.s9, "p_1340->g_589.s9", print_hash_value);
    transparent_crc(p_1340->g_589.sa, "p_1340->g_589.sa", print_hash_value);
    transparent_crc(p_1340->g_589.sb, "p_1340->g_589.sb", print_hash_value);
    transparent_crc(p_1340->g_589.sc, "p_1340->g_589.sc", print_hash_value);
    transparent_crc(p_1340->g_589.sd, "p_1340->g_589.sd", print_hash_value);
    transparent_crc(p_1340->g_589.se, "p_1340->g_589.se", print_hash_value);
    transparent_crc(p_1340->g_589.sf, "p_1340->g_589.sf", print_hash_value);
    transparent_crc(p_1340->g_595.f0, "p_1340->g_595.f0", print_hash_value);
    transparent_crc(p_1340->g_609, "p_1340->g_609", print_hash_value);
    transparent_crc(p_1340->g_610.f0, "p_1340->g_610.f0", print_hash_value);
    transparent_crc(p_1340->g_610.f1, "p_1340->g_610.f1", print_hash_value);
    transparent_crc(p_1340->g_610.f2, "p_1340->g_610.f2", print_hash_value);
    transparent_crc(p_1340->g_610.f3, "p_1340->g_610.f3", print_hash_value);
    transparent_crc(p_1340->g_611.f0, "p_1340->g_611.f0", print_hash_value);
    transparent_crc(p_1340->g_611.f1, "p_1340->g_611.f1", print_hash_value);
    transparent_crc(p_1340->g_611.f2, "p_1340->g_611.f2", print_hash_value);
    transparent_crc(p_1340->g_611.f3, "p_1340->g_611.f3", print_hash_value);
    transparent_crc(p_1340->g_625.f0, "p_1340->g_625.f0", print_hash_value);
    transparent_crc(p_1340->g_625.f1, "p_1340->g_625.f1", print_hash_value);
    transparent_crc(p_1340->g_625.f2, "p_1340->g_625.f2", print_hash_value);
    transparent_crc(p_1340->g_625.f3, "p_1340->g_625.f3", print_hash_value);
    transparent_crc(p_1340->g_674.f0, "p_1340->g_674.f0", print_hash_value);
    transparent_crc(p_1340->g_674.f1, "p_1340->g_674.f1", print_hash_value);
    transparent_crc(p_1340->g_674.f2, "p_1340->g_674.f2", print_hash_value);
    transparent_crc(p_1340->g_674.f3, "p_1340->g_674.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1340->g_675[i][j].f0, "p_1340->g_675[i][j].f0", print_hash_value);
            transparent_crc(p_1340->g_675[i][j].f1, "p_1340->g_675[i][j].f1", print_hash_value);
            transparent_crc(p_1340->g_675[i][j].f2, "p_1340->g_675[i][j].f2", print_hash_value);
            transparent_crc(p_1340->g_675[i][j].f3, "p_1340->g_675[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(p_1340->g_676.f0, "p_1340->g_676.f0", print_hash_value);
    transparent_crc(p_1340->g_676.f1, "p_1340->g_676.f1", print_hash_value);
    transparent_crc(p_1340->g_676.f2, "p_1340->g_676.f2", print_hash_value);
    transparent_crc(p_1340->g_676.f3, "p_1340->g_676.f3", print_hash_value);
    transparent_crc(p_1340->g_720.x, "p_1340->g_720.x", print_hash_value);
    transparent_crc(p_1340->g_720.y, "p_1340->g_720.y", print_hash_value);
    transparent_crc(p_1340->g_720.z, "p_1340->g_720.z", print_hash_value);
    transparent_crc(p_1340->g_720.w, "p_1340->g_720.w", print_hash_value);
    transparent_crc(p_1340->g_742.f0, "p_1340->g_742.f0", print_hash_value);
    transparent_crc(p_1340->g_742.f1, "p_1340->g_742.f1", print_hash_value);
    transparent_crc(p_1340->g_742.f2, "p_1340->g_742.f2", print_hash_value);
    transparent_crc(p_1340->g_742.f3, "p_1340->g_742.f3", print_hash_value);
    transparent_crc(p_1340->g_743.f0, "p_1340->g_743.f0", print_hash_value);
    transparent_crc(p_1340->g_743.f1, "p_1340->g_743.f1", print_hash_value);
    transparent_crc(p_1340->g_743.f2, "p_1340->g_743.f2", print_hash_value);
    transparent_crc(p_1340->g_743.f3, "p_1340->g_743.f3", print_hash_value);
    transparent_crc(p_1340->g_798.x, "p_1340->g_798.x", print_hash_value);
    transparent_crc(p_1340->g_798.y, "p_1340->g_798.y", print_hash_value);
    transparent_crc(p_1340->g_798.z, "p_1340->g_798.z", print_hash_value);
    transparent_crc(p_1340->g_798.w, "p_1340->g_798.w", print_hash_value);
    transparent_crc(p_1340->g_812.f0, "p_1340->g_812.f0", print_hash_value);
    transparent_crc(p_1340->g_812.f1, "p_1340->g_812.f1", print_hash_value);
    transparent_crc(p_1340->g_812.f2, "p_1340->g_812.f2", print_hash_value);
    transparent_crc(p_1340->g_812.f3, "p_1340->g_812.f3", print_hash_value);
    transparent_crc(p_1340->g_813.f0, "p_1340->g_813.f0", print_hash_value);
    transparent_crc(p_1340->g_813.f1, "p_1340->g_813.f1", print_hash_value);
    transparent_crc(p_1340->g_813.f2, "p_1340->g_813.f2", print_hash_value);
    transparent_crc(p_1340->g_813.f3, "p_1340->g_813.f3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1340->g_816[i][j][k].f0, "p_1340->g_816[i][j][k].f0", print_hash_value);
                transparent_crc(p_1340->g_816[i][j][k].f1, "p_1340->g_816[i][j][k].f1", print_hash_value);
                transparent_crc(p_1340->g_816[i][j][k].f2, "p_1340->g_816[i][j][k].f2", print_hash_value);
                transparent_crc(p_1340->g_816[i][j][k].f3, "p_1340->g_816[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(p_1340->g_834.f0, "p_1340->g_834.f0", print_hash_value);
    transparent_crc(p_1340->g_834.f1, "p_1340->g_834.f1", print_hash_value);
    transparent_crc(p_1340->g_834.f2, "p_1340->g_834.f2", print_hash_value);
    transparent_crc(p_1340->g_834.f3, "p_1340->g_834.f3", print_hash_value);
    transparent_crc(p_1340->g_847.x, "p_1340->g_847.x", print_hash_value);
    transparent_crc(p_1340->g_847.y, "p_1340->g_847.y", print_hash_value);
    transparent_crc(p_1340->g_852.s0, "p_1340->g_852.s0", print_hash_value);
    transparent_crc(p_1340->g_852.s1, "p_1340->g_852.s1", print_hash_value);
    transparent_crc(p_1340->g_852.s2, "p_1340->g_852.s2", print_hash_value);
    transparent_crc(p_1340->g_852.s3, "p_1340->g_852.s3", print_hash_value);
    transparent_crc(p_1340->g_852.s4, "p_1340->g_852.s4", print_hash_value);
    transparent_crc(p_1340->g_852.s5, "p_1340->g_852.s5", print_hash_value);
    transparent_crc(p_1340->g_852.s6, "p_1340->g_852.s6", print_hash_value);
    transparent_crc(p_1340->g_852.s7, "p_1340->g_852.s7", print_hash_value);
    transparent_crc(p_1340->g_852.s8, "p_1340->g_852.s8", print_hash_value);
    transparent_crc(p_1340->g_852.s9, "p_1340->g_852.s9", print_hash_value);
    transparent_crc(p_1340->g_852.sa, "p_1340->g_852.sa", print_hash_value);
    transparent_crc(p_1340->g_852.sb, "p_1340->g_852.sb", print_hash_value);
    transparent_crc(p_1340->g_852.sc, "p_1340->g_852.sc", print_hash_value);
    transparent_crc(p_1340->g_852.sd, "p_1340->g_852.sd", print_hash_value);
    transparent_crc(p_1340->g_852.se, "p_1340->g_852.se", print_hash_value);
    transparent_crc(p_1340->g_852.sf, "p_1340->g_852.sf", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1340->g_856[i], "p_1340->g_856[i]", print_hash_value);

    }
    transparent_crc(p_1340->g_860.s0, "p_1340->g_860.s0", print_hash_value);
    transparent_crc(p_1340->g_860.s1, "p_1340->g_860.s1", print_hash_value);
    transparent_crc(p_1340->g_860.s2, "p_1340->g_860.s2", print_hash_value);
    transparent_crc(p_1340->g_860.s3, "p_1340->g_860.s3", print_hash_value);
    transparent_crc(p_1340->g_860.s4, "p_1340->g_860.s4", print_hash_value);
    transparent_crc(p_1340->g_860.s5, "p_1340->g_860.s5", print_hash_value);
    transparent_crc(p_1340->g_860.s6, "p_1340->g_860.s6", print_hash_value);
    transparent_crc(p_1340->g_860.s7, "p_1340->g_860.s7", print_hash_value);
    transparent_crc(p_1340->g_861.s0, "p_1340->g_861.s0", print_hash_value);
    transparent_crc(p_1340->g_861.s1, "p_1340->g_861.s1", print_hash_value);
    transparent_crc(p_1340->g_861.s2, "p_1340->g_861.s2", print_hash_value);
    transparent_crc(p_1340->g_861.s3, "p_1340->g_861.s3", print_hash_value);
    transparent_crc(p_1340->g_861.s4, "p_1340->g_861.s4", print_hash_value);
    transparent_crc(p_1340->g_861.s5, "p_1340->g_861.s5", print_hash_value);
    transparent_crc(p_1340->g_861.s6, "p_1340->g_861.s6", print_hash_value);
    transparent_crc(p_1340->g_861.s7, "p_1340->g_861.s7", print_hash_value);
    transparent_crc(p_1340->g_878.f0, "p_1340->g_878.f0", print_hash_value);
    transparent_crc(p_1340->g_878.f1, "p_1340->g_878.f1", print_hash_value);
    transparent_crc(p_1340->g_878.f2, "p_1340->g_878.f2", print_hash_value);
    transparent_crc(p_1340->g_878.f3, "p_1340->g_878.f3", print_hash_value);
    transparent_crc(p_1340->g_893.s0, "p_1340->g_893.s0", print_hash_value);
    transparent_crc(p_1340->g_893.s1, "p_1340->g_893.s1", print_hash_value);
    transparent_crc(p_1340->g_893.s2, "p_1340->g_893.s2", print_hash_value);
    transparent_crc(p_1340->g_893.s3, "p_1340->g_893.s3", print_hash_value);
    transparent_crc(p_1340->g_893.s4, "p_1340->g_893.s4", print_hash_value);
    transparent_crc(p_1340->g_893.s5, "p_1340->g_893.s5", print_hash_value);
    transparent_crc(p_1340->g_893.s6, "p_1340->g_893.s6", print_hash_value);
    transparent_crc(p_1340->g_893.s7, "p_1340->g_893.s7", print_hash_value);
    transparent_crc(p_1340->g_894.s0, "p_1340->g_894.s0", print_hash_value);
    transparent_crc(p_1340->g_894.s1, "p_1340->g_894.s1", print_hash_value);
    transparent_crc(p_1340->g_894.s2, "p_1340->g_894.s2", print_hash_value);
    transparent_crc(p_1340->g_894.s3, "p_1340->g_894.s3", print_hash_value);
    transparent_crc(p_1340->g_894.s4, "p_1340->g_894.s4", print_hash_value);
    transparent_crc(p_1340->g_894.s5, "p_1340->g_894.s5", print_hash_value);
    transparent_crc(p_1340->g_894.s6, "p_1340->g_894.s6", print_hash_value);
    transparent_crc(p_1340->g_894.s7, "p_1340->g_894.s7", print_hash_value);
    transparent_crc(p_1340->g_917.s0, "p_1340->g_917.s0", print_hash_value);
    transparent_crc(p_1340->g_917.s1, "p_1340->g_917.s1", print_hash_value);
    transparent_crc(p_1340->g_917.s2, "p_1340->g_917.s2", print_hash_value);
    transparent_crc(p_1340->g_917.s3, "p_1340->g_917.s3", print_hash_value);
    transparent_crc(p_1340->g_917.s4, "p_1340->g_917.s4", print_hash_value);
    transparent_crc(p_1340->g_917.s5, "p_1340->g_917.s5", print_hash_value);
    transparent_crc(p_1340->g_917.s6, "p_1340->g_917.s6", print_hash_value);
    transparent_crc(p_1340->g_917.s7, "p_1340->g_917.s7", print_hash_value);
    transparent_crc(p_1340->g_940.s0, "p_1340->g_940.s0", print_hash_value);
    transparent_crc(p_1340->g_940.s1, "p_1340->g_940.s1", print_hash_value);
    transparent_crc(p_1340->g_940.s2, "p_1340->g_940.s2", print_hash_value);
    transparent_crc(p_1340->g_940.s3, "p_1340->g_940.s3", print_hash_value);
    transparent_crc(p_1340->g_940.s4, "p_1340->g_940.s4", print_hash_value);
    transparent_crc(p_1340->g_940.s5, "p_1340->g_940.s5", print_hash_value);
    transparent_crc(p_1340->g_940.s6, "p_1340->g_940.s6", print_hash_value);
    transparent_crc(p_1340->g_940.s7, "p_1340->g_940.s7", print_hash_value);
    transparent_crc(p_1340->g_941.x, "p_1340->g_941.x", print_hash_value);
    transparent_crc(p_1340->g_941.y, "p_1340->g_941.y", print_hash_value);
    transparent_crc(p_1340->g_945.s0, "p_1340->g_945.s0", print_hash_value);
    transparent_crc(p_1340->g_945.s1, "p_1340->g_945.s1", print_hash_value);
    transparent_crc(p_1340->g_945.s2, "p_1340->g_945.s2", print_hash_value);
    transparent_crc(p_1340->g_945.s3, "p_1340->g_945.s3", print_hash_value);
    transparent_crc(p_1340->g_945.s4, "p_1340->g_945.s4", print_hash_value);
    transparent_crc(p_1340->g_945.s5, "p_1340->g_945.s5", print_hash_value);
    transparent_crc(p_1340->g_945.s6, "p_1340->g_945.s6", print_hash_value);
    transparent_crc(p_1340->g_945.s7, "p_1340->g_945.s7", print_hash_value);
    transparent_crc(p_1340->g_987.x, "p_1340->g_987.x", print_hash_value);
    transparent_crc(p_1340->g_987.y, "p_1340->g_987.y", print_hash_value);
    transparent_crc(p_1340->g_1003.x, "p_1340->g_1003.x", print_hash_value);
    transparent_crc(p_1340->g_1003.y, "p_1340->g_1003.y", print_hash_value);
    transparent_crc(p_1340->g_1037.f0, "p_1340->g_1037.f0", print_hash_value);
    transparent_crc(p_1340->g_1037.f1, "p_1340->g_1037.f1", print_hash_value);
    transparent_crc(p_1340->g_1037.f2, "p_1340->g_1037.f2", print_hash_value);
    transparent_crc(p_1340->g_1037.f3, "p_1340->g_1037.f3", print_hash_value);
    transparent_crc(p_1340->g_1038.f0, "p_1340->g_1038.f0", print_hash_value);
    transparent_crc(p_1340->g_1038.f1, "p_1340->g_1038.f1", print_hash_value);
    transparent_crc(p_1340->g_1038.f2, "p_1340->g_1038.f2", print_hash_value);
    transparent_crc(p_1340->g_1038.f3, "p_1340->g_1038.f3", print_hash_value);
    transparent_crc(p_1340->g_1070.f0, "p_1340->g_1070.f0", print_hash_value);
    transparent_crc(p_1340->g_1070.f1, "p_1340->g_1070.f1", print_hash_value);
    transparent_crc(p_1340->g_1070.f2, "p_1340->g_1070.f2", print_hash_value);
    transparent_crc(p_1340->g_1070.f3, "p_1340->g_1070.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1340->g_1073[i], "p_1340->g_1073[i]", print_hash_value);

    }
    transparent_crc(p_1340->g_1097.s0, "p_1340->g_1097.s0", print_hash_value);
    transparent_crc(p_1340->g_1097.s1, "p_1340->g_1097.s1", print_hash_value);
    transparent_crc(p_1340->g_1097.s2, "p_1340->g_1097.s2", print_hash_value);
    transparent_crc(p_1340->g_1097.s3, "p_1340->g_1097.s3", print_hash_value);
    transparent_crc(p_1340->g_1097.s4, "p_1340->g_1097.s4", print_hash_value);
    transparent_crc(p_1340->g_1097.s5, "p_1340->g_1097.s5", print_hash_value);
    transparent_crc(p_1340->g_1097.s6, "p_1340->g_1097.s6", print_hash_value);
    transparent_crc(p_1340->g_1097.s7, "p_1340->g_1097.s7", print_hash_value);
    transparent_crc(p_1340->g_1124.s0, "p_1340->g_1124.s0", print_hash_value);
    transparent_crc(p_1340->g_1124.s1, "p_1340->g_1124.s1", print_hash_value);
    transparent_crc(p_1340->g_1124.s2, "p_1340->g_1124.s2", print_hash_value);
    transparent_crc(p_1340->g_1124.s3, "p_1340->g_1124.s3", print_hash_value);
    transparent_crc(p_1340->g_1124.s4, "p_1340->g_1124.s4", print_hash_value);
    transparent_crc(p_1340->g_1124.s5, "p_1340->g_1124.s5", print_hash_value);
    transparent_crc(p_1340->g_1124.s6, "p_1340->g_1124.s6", print_hash_value);
    transparent_crc(p_1340->g_1124.s7, "p_1340->g_1124.s7", print_hash_value);
    transparent_crc(p_1340->g_1125.s0, "p_1340->g_1125.s0", print_hash_value);
    transparent_crc(p_1340->g_1125.s1, "p_1340->g_1125.s1", print_hash_value);
    transparent_crc(p_1340->g_1125.s2, "p_1340->g_1125.s2", print_hash_value);
    transparent_crc(p_1340->g_1125.s3, "p_1340->g_1125.s3", print_hash_value);
    transparent_crc(p_1340->g_1125.s4, "p_1340->g_1125.s4", print_hash_value);
    transparent_crc(p_1340->g_1125.s5, "p_1340->g_1125.s5", print_hash_value);
    transparent_crc(p_1340->g_1125.s6, "p_1340->g_1125.s6", print_hash_value);
    transparent_crc(p_1340->g_1125.s7, "p_1340->g_1125.s7", print_hash_value);
    transparent_crc(p_1340->g_1128.s0, "p_1340->g_1128.s0", print_hash_value);
    transparent_crc(p_1340->g_1128.s1, "p_1340->g_1128.s1", print_hash_value);
    transparent_crc(p_1340->g_1128.s2, "p_1340->g_1128.s2", print_hash_value);
    transparent_crc(p_1340->g_1128.s3, "p_1340->g_1128.s3", print_hash_value);
    transparent_crc(p_1340->g_1128.s4, "p_1340->g_1128.s4", print_hash_value);
    transparent_crc(p_1340->g_1128.s5, "p_1340->g_1128.s5", print_hash_value);
    transparent_crc(p_1340->g_1128.s6, "p_1340->g_1128.s6", print_hash_value);
    transparent_crc(p_1340->g_1128.s7, "p_1340->g_1128.s7", print_hash_value);
    transparent_crc(p_1340->g_1128.s8, "p_1340->g_1128.s8", print_hash_value);
    transparent_crc(p_1340->g_1128.s9, "p_1340->g_1128.s9", print_hash_value);
    transparent_crc(p_1340->g_1128.sa, "p_1340->g_1128.sa", print_hash_value);
    transparent_crc(p_1340->g_1128.sb, "p_1340->g_1128.sb", print_hash_value);
    transparent_crc(p_1340->g_1128.sc, "p_1340->g_1128.sc", print_hash_value);
    transparent_crc(p_1340->g_1128.sd, "p_1340->g_1128.sd", print_hash_value);
    transparent_crc(p_1340->g_1128.se, "p_1340->g_1128.se", print_hash_value);
    transparent_crc(p_1340->g_1128.sf, "p_1340->g_1128.sf", print_hash_value);
    transparent_crc(p_1340->g_1130.x, "p_1340->g_1130.x", print_hash_value);
    transparent_crc(p_1340->g_1130.y, "p_1340->g_1130.y", print_hash_value);
    transparent_crc(p_1340->g_1130.z, "p_1340->g_1130.z", print_hash_value);
    transparent_crc(p_1340->g_1130.w, "p_1340->g_1130.w", print_hash_value);
    transparent_crc(p_1340->g_1133.s0, "p_1340->g_1133.s0", print_hash_value);
    transparent_crc(p_1340->g_1133.s1, "p_1340->g_1133.s1", print_hash_value);
    transparent_crc(p_1340->g_1133.s2, "p_1340->g_1133.s2", print_hash_value);
    transparent_crc(p_1340->g_1133.s3, "p_1340->g_1133.s3", print_hash_value);
    transparent_crc(p_1340->g_1133.s4, "p_1340->g_1133.s4", print_hash_value);
    transparent_crc(p_1340->g_1133.s5, "p_1340->g_1133.s5", print_hash_value);
    transparent_crc(p_1340->g_1133.s6, "p_1340->g_1133.s6", print_hash_value);
    transparent_crc(p_1340->g_1133.s7, "p_1340->g_1133.s7", print_hash_value);
    transparent_crc(p_1340->g_1168, "p_1340->g_1168", print_hash_value);
    transparent_crc(p_1340->g_1181.f0, "p_1340->g_1181.f0", print_hash_value);
    transparent_crc(p_1340->g_1189.x, "p_1340->g_1189.x", print_hash_value);
    transparent_crc(p_1340->g_1189.y, "p_1340->g_1189.y", print_hash_value);
    transparent_crc(p_1340->g_1189.z, "p_1340->g_1189.z", print_hash_value);
    transparent_crc(p_1340->g_1189.w, "p_1340->g_1189.w", print_hash_value);
    transparent_crc(p_1340->g_1223.s0, "p_1340->g_1223.s0", print_hash_value);
    transparent_crc(p_1340->g_1223.s1, "p_1340->g_1223.s1", print_hash_value);
    transparent_crc(p_1340->g_1223.s2, "p_1340->g_1223.s2", print_hash_value);
    transparent_crc(p_1340->g_1223.s3, "p_1340->g_1223.s3", print_hash_value);
    transparent_crc(p_1340->g_1223.s4, "p_1340->g_1223.s4", print_hash_value);
    transparent_crc(p_1340->g_1223.s5, "p_1340->g_1223.s5", print_hash_value);
    transparent_crc(p_1340->g_1223.s6, "p_1340->g_1223.s6", print_hash_value);
    transparent_crc(p_1340->g_1223.s7, "p_1340->g_1223.s7", print_hash_value);
    transparent_crc(p_1340->g_1223.s8, "p_1340->g_1223.s8", print_hash_value);
    transparent_crc(p_1340->g_1223.s9, "p_1340->g_1223.s9", print_hash_value);
    transparent_crc(p_1340->g_1223.sa, "p_1340->g_1223.sa", print_hash_value);
    transparent_crc(p_1340->g_1223.sb, "p_1340->g_1223.sb", print_hash_value);
    transparent_crc(p_1340->g_1223.sc, "p_1340->g_1223.sc", print_hash_value);
    transparent_crc(p_1340->g_1223.sd, "p_1340->g_1223.sd", print_hash_value);
    transparent_crc(p_1340->g_1223.se, "p_1340->g_1223.se", print_hash_value);
    transparent_crc(p_1340->g_1223.sf, "p_1340->g_1223.sf", print_hash_value);
    transparent_crc(p_1340->g_1256, "p_1340->g_1256", print_hash_value);
    transparent_crc(p_1340->g_1298.s0, "p_1340->g_1298.s0", print_hash_value);
    transparent_crc(p_1340->g_1298.s1, "p_1340->g_1298.s1", print_hash_value);
    transparent_crc(p_1340->g_1298.s2, "p_1340->g_1298.s2", print_hash_value);
    transparent_crc(p_1340->g_1298.s3, "p_1340->g_1298.s3", print_hash_value);
    transparent_crc(p_1340->g_1298.s4, "p_1340->g_1298.s4", print_hash_value);
    transparent_crc(p_1340->g_1298.s5, "p_1340->g_1298.s5", print_hash_value);
    transparent_crc(p_1340->g_1298.s6, "p_1340->g_1298.s6", print_hash_value);
    transparent_crc(p_1340->g_1298.s7, "p_1340->g_1298.s7", print_hash_value);
    transparent_crc(p_1340->g_1298.s8, "p_1340->g_1298.s8", print_hash_value);
    transparent_crc(p_1340->g_1298.s9, "p_1340->g_1298.s9", print_hash_value);
    transparent_crc(p_1340->g_1298.sa, "p_1340->g_1298.sa", print_hash_value);
    transparent_crc(p_1340->g_1298.sb, "p_1340->g_1298.sb", print_hash_value);
    transparent_crc(p_1340->g_1298.sc, "p_1340->g_1298.sc", print_hash_value);
    transparent_crc(p_1340->g_1298.sd, "p_1340->g_1298.sd", print_hash_value);
    transparent_crc(p_1340->g_1298.se, "p_1340->g_1298.se", print_hash_value);
    transparent_crc(p_1340->g_1298.sf, "p_1340->g_1298.sf", print_hash_value);
    transparent_crc(p_1340->v_collective, "p_1340->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 51; i++)
            transparent_crc(p_1340->g_special_values[i + 51 * get_linear_group_id()], "p_1340->g_special_values[i + 51 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_1340->l_comm_values[get_linear_local_id()], "p_1340->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1340->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()], "p_1340->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
