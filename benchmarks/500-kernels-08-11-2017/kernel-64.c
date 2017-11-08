// --atomics 97 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 48,89,1 -l 3,1,1
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

__constant uint32_t permutations[10][3] = {
{1,2,0}, // permutation 0
{2,0,1}, // permutation 1
{1,0,2}, // permutation 2
{2,0,1}, // permutation 3
{1,0,2}, // permutation 4
{2,0,1}, // permutation 5
{1,2,0}, // permutation 6
{1,2,0}, // permutation 7
{1,2,0}, // permutation 8
{2,0,1} // permutation 9
};

// Seed: 3504201879

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int64_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   volatile uint64_t  f4;
   int8_t  f5;
   int8_t  f6;
};

union U1 {
   volatile int64_t  f0;
   struct S0  f1;
   volatile int8_t  f2;
   uint32_t  f3;
   struct S0  f4;
};

struct S2 {
    int32_t g_2[10];
    VECTOR(uint8_t, 2) g_10;
    volatile VECTOR(uint8_t, 4) g_11;
    int64_t g_24;
    int64_t g_30[10][6];
    int32_t g_31;
    int32_t *g_47;
    int32_t g_56;
    int8_t g_68;
    uint32_t g_69;
    int16_t g_72;
    int64_t g_73;
    uint8_t g_75;
    uint64_t g_83;
    uint64_t g_90;
    uint16_t g_112;
    volatile uint16_t g_150;
    volatile uint16_t *g_149;
    uint16_t g_156;
    VECTOR(uint8_t, 16) g_169;
    struct S0 g_192;
    struct S0 *g_191;
    int32_t g_202;
    uint64_t g_209;
    uint8_t g_222;
    VECTOR(uint8_t, 8) g_235;
    VECTOR(int32_t, 2) g_252;
    struct S0 g_268[10];
    volatile uint64_t * volatile g_298;
    volatile uint64_t * volatile *g_297;
    VECTOR(uint16_t, 16) g_357;
    VECTOR(uint8_t, 16) g_361;
    VECTOR(int16_t, 4) g_363;
    VECTOR(uint16_t, 4) g_364;
    uint32_t *g_409;
    uint64_t g_438;
    uint64_t *g_437;
    int64_t g_439;
    uint32_t **g_483;
    uint32_t ** volatile *g_482;
    VECTOR(uint8_t, 4) g_492;
    VECTOR(int16_t, 2) g_549;
    int64_t g_555;
    uint8_t g_556;
    int32_t g_560[4];
    VECTOR(uint16_t, 16) g_566;
    VECTOR(uint16_t, 2) g_568;
    VECTOR(uint16_t, 4) g_569;
    VECTOR(uint16_t, 16) g_570;
    VECTOR(int32_t, 8) g_578;
    VECTOR(int32_t, 8) g_580;
    VECTOR(int32_t, 16) g_581;
    VECTOR(int32_t, 4) g_582;
    VECTOR(int32_t, 2) g_830;
    int16_t *g_835;
    int16_t **g_834[7][10][1];
    VECTOR(uint8_t, 16) g_847;
    volatile int8_t * volatile *g_854;
    VECTOR(int16_t, 16) g_881;
    union U1 g_962;
    union U1 g_963[10][4];
    union U1 g_964;
    union U1 g_965;
    union U1 g_966;
    union U1 g_967[8];
    union U1 g_968;
    union U1 g_969;
    union U1 g_970[7];
    union U1 g_971[1][8][6];
    union U1 g_972;
    union U1 g_973;
    union U1 g_974;
    union U1 g_975;
    union U1 g_976;
    union U1 g_977;
    union U1 g_978;
    union U1 g_979;
    union U1 g_980;
    union U1 g_981;
    union U1 g_982;
    union U1 g_983;
    union U1 g_984;
    union U1 g_985;
    union U1 g_986;
    union U1 g_987;
    union U1 g_988;
    union U1 g_989;
    union U1 g_990;
    union U1 g_991[5][5][2];
    union U1 g_992;
    union U1 g_993;
    union U1 g_994;
    union U1 g_995;
    union U1 g_996;
    union U1 g_997;
    union U1 g_998;
    union U1 g_999[2];
    union U1 g_1000;
    union U1 g_1001;
    union U1 g_1002;
    union U1 g_1003;
    union U1 g_1004;
    union U1 g_1005;
    union U1 g_1006[2][6];
    union U1 g_1007;
    union U1 g_1008[9];
    union U1 g_1009;
    union U1 g_1010;
    union U1 g_1011;
    union U1 g_1012;
    union U1 g_1013;
    union U1 g_1014[6];
    union U1 g_1015;
    union U1 g_1016;
    union U1 g_1017;
    union U1 g_1018;
    union U1 g_1019[7][2];
    union U1 g_1020;
    union U1 g_1021;
    union U1 g_1022;
    union U1 g_1023;
    union U1 g_1024;
    union U1 g_1025;
    union U1 g_1026;
    union U1 g_1027;
    union U1 g_1028;
    union U1 g_1029;
    union U1 g_1030;
    union U1 g_1031[10][9];
    union U1 g_1032;
    union U1 g_1033;
    union U1 g_1034;
    union U1 g_1035;
    union U1 g_1036;
    union U1 g_1037;
    union U1 g_1038;
    union U1 g_1039;
    union U1 g_1040;
    union U1 g_1041;
    union U1 g_1042;
    union U1 g_1043;
    union U1 g_1044;
    union U1 g_1046;
    union U1 g_1048;
    union U1 *g_1047;
    VECTOR(uint32_t, 4) g_1055;
    int64_t g_1125;
    VECTOR(uint16_t, 4) g_1126;
    VECTOR(int16_t, 8) g_1128;
    VECTOR(int16_t, 16) g_1129;
    volatile int32_t g_1140;
    volatile int32_t *g_1139;
    volatile int32_t **g_1138;
    VECTOR(uint16_t, 2) g_1154;
    uint32_t g_1171;
    VECTOR(uint32_t, 2) g_1176;
    struct S0 g_1185;
    int32_t ** volatile g_1189;
    volatile struct S0 g_1191;
    volatile struct S0 g_1228[1];
    VECTOR(int8_t, 4) g_1235;
    VECTOR(int8_t, 2) g_1236;
    VECTOR(int8_t, 2) g_1239;
    int64_t g_1247;
    volatile VECTOR(uint8_t, 16) g_1274;
    uint32_t * volatile g_1287;
    uint32_t g_1290;
    volatile VECTOR(uint32_t, 16) g_1296;
    volatile VECTOR(int8_t, 2) g_1340;
    volatile VECTOR(int8_t, 8) g_1341;
    volatile VECTOR(int8_t, 4) g_1342;
    VECTOR(int16_t, 2) g_1374;
    VECTOR(int64_t, 2) g_1381;
    volatile int32_t g_1383[2][5][8];
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
int64_t  func_1(struct S2 * p_1390);
int8_t  func_5(uint8_t  p_6, struct S2 * p_1390);
int64_t  func_16(int16_t  p_17, struct S2 * p_1390);
int32_t * func_19(uint32_t  p_20, uint16_t  p_21, struct S2 * p_1390);
int8_t  func_38(int64_t  p_39, uint64_t  p_40, struct S2 * p_1390);
int16_t  func_41(uint32_t  p_42, uint64_t  p_43, int32_t * p_44, uint32_t  p_45, struct S2 * p_1390);
int32_t * func_50(int32_t ** p_51, struct S2 * p_1390);
int32_t  func_79(uint64_t  p_80, int32_t ** p_81, struct S2 * p_1390);
int32_t ** func_84(uint64_t * p_85, struct S2 * p_1390);
uint64_t * func_86(uint64_t * p_87, struct S2 * p_1390);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1390->g_2 p_1390->g_10 p_1390->g_11 p_1390->g_comm_values p_1390->g_24 p_1390->g_30 p_1390->g_47 p_1390->g_31 p_1390->g_69 p_1390->g_75 p_1390->g_83 p_1390->g_68 p_1390->g_56 p_1390->g_73 p_1390->g_112 p_1390->g_149 p_1390->g_72 p_1390->g_156 p_1390->g_90 p_1390->g_169 p_1390->g_191 p_1390->g_209 p_1390->g_222 p_1390->g_192.f3 p_1390->g_192.f5 p_1390->g_202 p_1390->g_252 p_1390->g_437 p_1390->g_439 p_1390->g_235 p_1390->g_482 p_1390->g_192.f6 p_1390->g_409 p_1390->g_268.f2 p_1390->g_438 p_1390->g_492 p_1390->g_847 p_1390->g_854 p_1390->g_364 p_1390->g_578 p_1390->g_580 p_1390->g_881 p_1390->g_568 p_1390->g_268.f6 p_1390->g_268.f1 p_1390->g_582 p_1390->g_549 p_1390->g_357 p_1390->g_560 p_1390->l_comm_values p_1390->g_1125 p_1390->g_1176 p_1390->g_835 p_1390->g_1126 p_1390->g_1185 p_1390->g_1033.f4.f1 p_1390->g_1191 p_1390->g_967.f0 p_1390->g_1139 p_1390->g_993.f4.f1 p_1390->g_1228 p_1390->g_192 p_1390->g_996.f0 p_1390->g_1235 p_1390->g_1236 p_1390->g_1239 p_1390->g_1247 p_1390->g_1043.f4.f1 p_1390->g_968.f1.f6 p_1390->g_1138 p_1390->g_570 p_1390->g_989.f0 p_1390->g_1140 p_1390->g_150 p_1390->g_1383
 * writes: p_1390->g_2 p_1390->g_24 p_1390->g_30 p_1390->g_31 p_1390->g_47 p_1390->g_69 p_1390->g_75 p_1390->g_56 p_1390->g_83 p_1390->g_68 p_1390->g_112 p_1390->g_156 p_1390->g_191 p_1390->g_202 p_1390->g_209 p_1390->g_222 p_1390->g_192.f5 p_1390->g_72 p_1390->g_73 p_1390->g_252 p_1390->g_192.f2 p_1390->g_439 p_1390->g_363 p_1390->g_834 p_1390->g_555 p_1390->g_438 p_1390->g_580 p_1390->g_364 p_1390->g_268.f2 p_1390->g_192.f1 p_1390->g_997.f4.f1 p_1390->g_582 p_1390->g_964.f1.f6 p_1390->g_1125 p_1390->g_998.f4.f5 p_1390->g_978.f1.f2 p_1390->g_192 p_1390->g_1033.f4.f1 p_1390->g_1040.f1.f1 p_1390->g_1140 p_1390->g_993.f4.f1 p_1390->g_1028.f4.f3 p_1390->g_1043.f4.f1 p_1390->g_968.f1.f6 p_1390->g_1016.f4.f3 p_1390->g_1139 p_1390->g_1013.f4.f5 p_1390->g_1032.f4.f6 p_1390->g_1027.f1.f3 p_1390->g_1000.f4.f3 p_1390->g_comm_values
 */
int64_t  func_1(struct S2 * p_1390)
{ /* block id: 4 */
    int32_t l_7 = 0x0CC3837AL;
    uint32_t *l_1170 = &p_1390->g_1171;
    int32_t l_1182 = 0x1C646F45L;
    uint32_t l_1183 = 4294967295UL;
    int32_t l_1184 = 0x68969A71L;
    int32_t l_1209 = 0x349F6854L;
    int32_t l_1219 = 0x419B9781L;
    int8_t *l_1225 = &p_1390->g_192.f6;
    int32_t *l_1227[9][5];
    VECTOR(int8_t, 4) l_1234 = (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, (-1L)), (-1L));
    VECTOR(int8_t, 8) l_1237 = (VECTOR(int8_t, 8))(0x65L, (VECTOR(int8_t, 4))(0x65L, (VECTOR(int8_t, 2))(0x65L, 0x46L), 0x46L), 0x46L, 0x65L, 0x46L);
    VECTOR(int8_t, 16) l_1238 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x03L), 0x03L), 0x03L, 0L, 0x03L, (VECTOR(int8_t, 2))(0L, 0x03L), (VECTOR(int8_t, 2))(0L, 0x03L), 0L, 0x03L, 0L, 0x03L);
    VECTOR(int8_t, 16) l_1240 = (VECTOR(int8_t, 16))(0x6FL, (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, (-8L)), (-8L)), (-8L), 0x6FL, (-8L), (VECTOR(int8_t, 2))(0x6FL, (-8L)), (VECTOR(int8_t, 2))(0x6FL, (-8L)), 0x6FL, (-8L), 0x6FL, (-8L));
    VECTOR(uint64_t, 2) l_1251 = (VECTOR(uint64_t, 2))(1UL, 6UL);
    uint64_t **l_1253 = &p_1390->g_437;
    uint64_t ***l_1252 = &l_1253;
    uint64_t **l_1255 = &p_1390->g_437;
    uint64_t ***l_1254 = &l_1255;
    VECTOR(int64_t, 4) l_1277 = (VECTOR(int64_t, 4))(0x7F96D2E1F702DAE3L, (VECTOR(int64_t, 2))(0x7F96D2E1F702DAE3L, 0L), 0L);
    uint32_t ***l_1303 = &p_1390->g_483;
    int16_t l_1320[1];
    VECTOR(int8_t, 4) l_1328 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-10L)), (-10L));
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
            l_1227[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_1320[i] = 0L;
    for (p_1390->g_2[0] = 15; (p_1390->g_2[0] != (-2)); --p_1390->g_2[0])
    { /* block id: 7 */
        uint32_t *l_1172 = &p_1390->g_1171;
        int8_t *l_1173 = &p_1390->g_998.f4.f5;
        int32_t l_1179[4] = {(-1L),(-1L),(-1L),(-1L)};
        uint8_t *l_1180 = (void*)0;
        uint8_t *l_1181[8][8] = {{(void*)0,(void*)0,&p_1390->g_556,(void*)0,(void*)0,(void*)0,&p_1390->g_556,(void*)0},{(void*)0,(void*)0,&p_1390->g_556,(void*)0,(void*)0,(void*)0,&p_1390->g_556,(void*)0},{(void*)0,(void*)0,&p_1390->g_556,(void*)0,(void*)0,(void*)0,&p_1390->g_556,(void*)0},{(void*)0,(void*)0,&p_1390->g_556,(void*)0,(void*)0,(void*)0,&p_1390->g_556,(void*)0},{(void*)0,(void*)0,&p_1390->g_556,(void*)0,(void*)0,(void*)0,&p_1390->g_556,(void*)0},{(void*)0,(void*)0,&p_1390->g_556,(void*)0,(void*)0,(void*)0,&p_1390->g_556,(void*)0},{(void*)0,(void*)0,&p_1390->g_556,(void*)0,(void*)0,(void*)0,&p_1390->g_556,(void*)0},{(void*)0,(void*)0,&p_1390->g_556,(void*)0,(void*)0,(void*)0,&p_1390->g_556,(void*)0}};
        int8_t *l_1204 = &p_1390->g_1015.f4.f5;
        int8_t *l_1205 = &p_1390->g_1044.f4.f5;
        int8_t *l_1206 = &p_1390->g_992.f1.f6;
        int8_t *l_1207 = &p_1390->g_1022.f1.f6;
        int8_t *l_1208[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_1208[i] = &p_1390->g_1005.f4.f5;
        (*p_1390->g_1139) = ((l_1209 ^= ((VECTOR(int8_t, 8))(((p_1390->g_1040.f1.f1 = (func_5((l_7 , ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_1390->g_10.yyxxyyyy)).s35)).xxyyyxxy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(p_1390->g_11.yyxw)).wxxzwwwy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))((safe_mod_func_uint16_t_u_u(p_1390->g_11.x, (safe_sub_func_int64_t_s_s(func_16(p_1390->g_comm_values[p_1390->tid], p_1390), (safe_lshift_func_uint8_t_u_s((1UL < (safe_sub_func_uint8_t_u_u(p_1390->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))], (((safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((l_1184 &= (safe_lshift_func_int8_t_s_s(((*l_1173) = ((l_1172 = l_1170) == (void*)0)), ((l_1182 &= (((((safe_mod_func_int32_t_s_s((((((VECTOR(uint32_t, 4))(p_1390->g_1176.yyyx)).w && (p_1390->g_978.f1.f2 = (safe_rshift_func_int8_t_s_u((((p_1390->g_149 != p_1390->g_835) , 0xCB56007CCCBD3570L) , p_1390->g_comm_values[p_1390->tid]), 2)))) <= 0x46C6L) || p_1390->g_1126.x), p_1390->g_268[5].f1)) , 0x19A2E6ABL) | l_1179[1]) , p_1390->g_549.x) , FAKE_DIVERGE(p_1390->local_1_offset, get_local_id(1), 10))) >= l_1183)))), 0x57L)) , l_1179[3]), p_1390->g_1126.w)) < 0xADL) != p_1390->g_169.s0)))), l_1179[1])))))), 252UL, GROUP_DIVERGE(1, 1), 1UL, ((VECTOR(uint8_t, 8))(248UL)), 0xF8L, 0x14L, 0xE9L, 255UL)).s42, ((VECTOR(uint8_t, 2))(253UL))))), 1UL, 0x42L)).xzwzwxzz))).s0336102073624414, ((VECTOR(uint8_t, 16))(0xF7L))))).hi, ((VECTOR(uint8_t, 8))(0xEDL))))).lo, ((VECTOR(uint8_t, 4))(0xAAL))))).hi)).xxyyyxyy))).lo)).x, 0x0CL)) && (-1L))), p_1390) , l_1184)) > 252UL), 0x4CL, 6L, l_1179[1], 8L, ((VECTOR(int8_t, 2))(0x05L)), 0x74L)).s1) && FAKE_DIVERGE(p_1390->group_2_offset, get_group_id(2), 10));
        return l_1179[1];
    }
    for (p_1390->g_993.f4.f1 = 0; (p_1390->g_993.f4.f1 < 57); p_1390->g_993.f4.f1++)
    { /* block id: 554 */
        int32_t *l_1212 = &p_1390->g_31;
        int32_t *l_1213 = &p_1390->g_56;
        int32_t *l_1214 = &p_1390->g_2[0];
        int32_t *l_1215 = &p_1390->g_31;
        int32_t *l_1216 = (void*)0;
        int32_t *l_1217 = &l_1209;
        int32_t *l_1218[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint8_t l_1220 = 0x36L;
        uint16_t *l_1226 = &p_1390->g_1028.f4.f3;
        VECTOR(int8_t, 16) l_1233 = (VECTOR(int8_t, 16))(0x29L, (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0x21L), 0x21L), 0x21L, 0x29L, 0x21L, (VECTOR(int8_t, 2))(0x29L, 0x21L), (VECTOR(int8_t, 2))(0x29L, 0x21L), 0x29L, 0x21L, 0x29L, 0x21L);
        VECTOR(int16_t, 4) l_1245 = (VECTOR(int16_t, 4))(0x22BEL, (VECTOR(int16_t, 2))(0x22BEL, 0x228DL), 0x228DL);
        int16_t *l_1246[7][7] = {{(void*)0,&p_1390->g_72,(void*)0,(void*)0,&p_1390->g_72,&p_1390->g_72,(void*)0},{(void*)0,&p_1390->g_72,(void*)0,(void*)0,&p_1390->g_72,&p_1390->g_72,(void*)0},{(void*)0,&p_1390->g_72,(void*)0,(void*)0,&p_1390->g_72,&p_1390->g_72,(void*)0},{(void*)0,&p_1390->g_72,(void*)0,(void*)0,&p_1390->g_72,&p_1390->g_72,(void*)0},{(void*)0,&p_1390->g_72,(void*)0,(void*)0,&p_1390->g_72,&p_1390->g_72,(void*)0},{(void*)0,&p_1390->g_72,(void*)0,(void*)0,&p_1390->g_72,&p_1390->g_72,(void*)0},{(void*)0,&p_1390->g_72,(void*)0,(void*)0,&p_1390->g_72,&p_1390->g_72,(void*)0}};
        int64_t l_1248 = 0x04973DB7539E9382L;
        int i, j;
        l_1220--;
        l_1227[5][0] = func_19((safe_lshift_func_int16_t_s_u(0x7BBFL, 0)), ((*l_1226) = (0xE331E044B183CF43L > (l_1225 == l_1225))), p_1390);
        (*p_1390->g_191) = ((((*p_1390->g_437) , p_1390->g_1228[0]) , (*p_1390->g_191)) , ((p_1390->g_996.f0 == ((+(*l_1212)) , ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1233.sbee2c5db)), 0L, ((VECTOR(int8_t, 2))(l_1234.zz)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(0x06L, (*l_1212), 0x5DL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_1390->g_1235.zxzzyxww)).s02)), (-2L), (-2L), (-1L))).hi)), (-4L))).lo)))).s6600546567401376, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1390->g_1236.xy)), 0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(l_1237.s07556562)).s5223154353675342, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-3L), 0x49L)))).yxxxxyxyyxyyxyyx))).sed7b, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(0x11L, (-1L))).xyxyxyxyxxxxyxxx, ((VECTOR(int8_t, 2))((-2L), 0x77L)).xyxxxxxyxxxyyxxx))).hi)))).hi))).lo)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_1238.s3499)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 2))(p_1390->g_1239.xy)), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(l_1240.sde91185f)).lo, ((VECTOR(int8_t, 8))((((safe_mod_func_int16_t_s_s(((*l_1215) = ((safe_mul_func_int16_t_s_s((p_1390->g_24 , ((VECTOR(int16_t, 2))(l_1245.zw)).odd), (((VECTOR(int32_t, 8))((p_1390->g_847.sf < (*l_1214)), 0x1EE02ED0L, 0L, (-8L), (*l_1212), (-3L), 0x6E395A07L, 0x0249F6BBL)).s3 > (*p_1390->g_409)))) & p_1390->g_439)), p_1390->g_1247)) | 3L) , (*l_1214)), ((VECTOR(int8_t, 4))(1L)), l_1248, 0x28L, 5L)).odd, ((VECTOR(int8_t, 4))(0L))))), ((VECTOR(int8_t, 4))((-6L))), ((VECTOR(int8_t, 4))(1L))))).zwxwwyyx)).odd, ((VECTOR(int8_t, 4))(0x4FL))))).even)).yyyxyyyy, ((VECTOR(int8_t, 8))((-1L)))))).s72, ((VECTOR(int8_t, 2))(0x15L))))), ((VECTOR(int8_t, 2))((-8L))), ((VECTOR(int8_t, 8))(4L)), 0x73L)).se2)), 0x65L, 0x23L)).s45)), 5L)).s51)).xxxxxxyyxyyyxxxy, ((VECTOR(int8_t, 16))(0x76L))))), ((VECTOR(int8_t, 16))((-5L)))))).s0b48, ((VECTOR(int8_t, 4))((-8L))), ((VECTOR(int8_t, 4))(0x14L))))).xyzyzxzxzyzzzyxz))).sd == p_1390->g_560[3]) , p_1390->g_202), p_1390->g_847.s3)), 1UL)) || 0x7F64L))) , (*p_1390->g_191)));
        for (p_1390->g_1043.f4.f1 = 5; (p_1390->g_1043.f4.f1 != 12); p_1390->g_1043.f4.f1 = safe_add_func_int16_t_s_s(p_1390->g_1043.f4.f1, 8))
        { /* block id: 562 */
            (*l_1212) = (*l_1213);
        }
    }
    (*l_1254) = ((*l_1252) = (((VECTOR(uint64_t, 4))(l_1251.yxxx)).x , (void*)0));
    for (p_1390->g_968.f1.f6 = (-18); (p_1390->g_968.f1.f6 == (-2)); p_1390->g_968.f1.f6 = safe_add_func_int64_t_s_s(p_1390->g_968.f1.f6, 4))
    { /* block id: 570 */
        int64_t l_1268[4] = {0x6F1A5DF11D00B5E9L,0x6F1A5DF11D00B5E9L,0x6F1A5DF11D00B5E9L,0x6F1A5DF11D00B5E9L};
        int32_t l_1270[4];
        VECTOR(int64_t, 2) l_1278 = (VECTOR(int64_t, 2))(2L, (-1L));
        struct S0 *l_1284 = &p_1390->g_1185;
        uint8_t l_1359 = 0xC0L;
        int16_t *l_1370 = (void*)0;
        volatile int32_t *l_1389[3];
        int i;
        for (i = 0; i < 4; i++)
            l_1270[i] = 0x362542DCL;
        for (i = 0; i < 3; i++)
            l_1389[i] = &p_1390->g_1140;
        for (p_1390->g_964.f1.f6 = (-23); (p_1390->g_964.f1.f6 > (-14)); p_1390->g_964.f1.f6++)
        { /* block id: 573 */
            uint8_t *l_1262 = &p_1390->g_1042.f1.f1;
            uint8_t *l_1263 = &p_1390->g_1023.f4.f1;
            uint8_t *l_1264 = &p_1390->g_984.f1.f1;
            uint8_t *l_1265 = &p_1390->g_963[2][3].f4.f1;
            uint8_t *l_1266 = &p_1390->g_1032.f1.f1;
            uint8_t *l_1267 = &p_1390->g_986.f1.f1;
            uint8_t *l_1269[4][1][9] = {{{(void*)0,&p_1390->g_989.f1.f1,&p_1390->g_989.f1.f1,(void*)0,&p_1390->g_1185.f1,&p_1390->g_556,&p_1390->g_556,&p_1390->g_1185.f1,(void*)0}},{{(void*)0,&p_1390->g_989.f1.f1,&p_1390->g_989.f1.f1,(void*)0,&p_1390->g_1185.f1,&p_1390->g_556,&p_1390->g_556,&p_1390->g_1185.f1,(void*)0}},{{(void*)0,&p_1390->g_989.f1.f1,&p_1390->g_989.f1.f1,(void*)0,&p_1390->g_1185.f1,&p_1390->g_556,&p_1390->g_556,&p_1390->g_1185.f1,(void*)0}},{{(void*)0,&p_1390->g_989.f1.f1,&p_1390->g_989.f1.f1,(void*)0,&p_1390->g_1185.f1,&p_1390->g_556,&p_1390->g_556,&p_1390->g_1185.f1,(void*)0}}};
            int32_t l_1271 = 0x52C9A8B2L;
            int8_t l_1283[4][2][10] = {{{0L,0x50L,(-5L),0x50L,0L,0L,0x50L,(-5L),0x50L,0L},{0L,0x50L,(-5L),0x50L,0L,0L,0x50L,(-5L),0x50L,0L}},{{0L,0x50L,(-5L),0x50L,0L,0L,0x50L,(-5L),0x50L,0L},{0L,0x50L,(-5L),0x50L,0L,0L,0x50L,(-5L),0x50L,0L}},{{0L,0x50L,(-5L),0x50L,0L,0L,0x50L,(-5L),0x50L,0L},{0L,0x50L,(-5L),0x50L,0L,0L,0x50L,(-5L),0x50L,0L}},{{0L,0x50L,(-5L),0x50L,0L,0L,0x50L,(-5L),0x50L,0L},{0L,0x50L,(-5L),0x50L,0L,0L,0x50L,(-5L),0x50L,0L}}};
            uint32_t l_1288 = 0x877F62B5L;
            int64_t *l_1289[5][9][5] = {{{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0}},{{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0}},{{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0}},{{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0}},{{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0},{&p_1390->g_439,&p_1390->g_1247,&p_1390->g_73,&p_1390->g_30[2][0],(void*)0}}};
            int32_t **l_1299 = &p_1390->g_47;
            VECTOR(uint16_t, 16) l_1305 = (VECTOR(uint16_t, 16))(0x62C0L, (VECTOR(uint16_t, 4))(0x62C0L, (VECTOR(uint16_t, 2))(0x62C0L, 0xB043L), 0xB043L), 0xB043L, 0x62C0L, 0xB043L, (VECTOR(uint16_t, 2))(0x62C0L, 0xB043L), (VECTOR(uint16_t, 2))(0x62C0L, 0xB043L), 0x62C0L, 0xB043L, 0x62C0L, 0xB043L);
            struct S0 **l_1325 = &l_1284;
            int16_t *l_1357[2][5][5] = {{{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72},{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72},{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72},{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72},{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72}},{{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72},{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72},{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72},{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72},{(void*)0,&l_1320[0],&p_1390->g_72,(void*)0,&p_1390->g_72}}};
            int64_t l_1386 = 0x11DDDF77B3D02C2FL;
            int i, j, k;
            if ((18446744073709551615UL == (safe_lshift_func_uint8_t_u_u((p_1390->g_1185.f1 , ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0x61L, 0x7AL, ((++p_1390->g_268[5].f1) != ((*l_1262) = l_1271)), ((VECTOR(uint8_t, 2))(p_1390->g_1274.scc)), (((((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(l_1277.wwyzyxxzzxwxwyyy)).odd, ((VECTOR(int64_t, 16))(l_1278.xyyxyxxyyyyxyyyy)).odd))).s3 || 0xE7F64E5B3A8AF3F5L) == ((!(safe_sub_func_int64_t_s_s(((p_1390->g_comm_values[p_1390->tid] = (!((safe_mod_func_uint32_t_u_u(l_1270[2], ((*p_1390->g_191) , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 4UL)), 0x2591DAD9L, 0xC7577B9CL)).w))) , ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_1283[1][0][3] ^= ((VECTOR(int32_t, 2))((-1L), 0x66AC8698L)).even), ((((void*)0 != l_1284) <= (!(safe_mod_func_int16_t_s_s((p_1390->g_1287 == (void*)0), 65534UL)))) , (*p_1390->g_1139)), 0x336D78A5L, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0L)), 0x2265EA2DL)), 0x5D170E4BL, l_1271, ((VECTOR(int32_t, 4))(1L)), 0L, 0L)).sc < l_1271) == l_1288)))) ^ p_1390->g_1290), p_1390->g_73))) == (*p_1390->g_437))) & l_1278.x), ((VECTOR(uint8_t, 8))(249UL)), 0UL, 1UL)).sed)).xyxyyxxx, ((VECTOR(uint8_t, 8))(0xB7L))))).s6), GROUP_DIVERGE(1, 1)))))
            { /* block id: 578 */
                VECTOR(uint16_t, 16) l_1295 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65529UL), 65529UL), 65529UL, 1UL, 65529UL, (VECTOR(uint16_t, 2))(1UL, 65529UL), (VECTOR(uint16_t, 2))(1UL, 65529UL), 1UL, 65529UL, 1UL, 65529UL);
                int32_t *l_1297[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t ****l_1304 = &l_1303;
                int i;
                for (p_1390->g_1016.f4.f3 = 0; (p_1390->g_1016.f4.f3 < 35); p_1390->g_1016.f4.f3 = safe_add_func_uint16_t_u_u(p_1390->g_1016.f4.f3, 1))
                { /* block id: 581 */
                    (*p_1390->g_1138) = (*p_1390->g_1138);
                    if (((((*p_1390->g_409) ^ FAKE_DIVERGE(p_1390->global_1_offset, get_global_id(1), 10)) , (l_1268[2] | (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 8))(l_1295.s0b6b72ea)), ((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 8))(((&p_1390->g_483 == &p_1390->g_483) && ((l_1225 != (void*)0) || ((((VECTOR(uint32_t, 8))(p_1390->g_1296.s978fa97a)).s5 , ((*p_1390->g_437) > (*p_1390->g_437))) , l_1295.s7))), (*p_1390->g_149), ((VECTOR(uint16_t, 2))(0xC1BCL)), 0UL, 0xA130L, 0x6C8FL, 0x581FL)).s3765104400614056, ((VECTOR(uint16_t, 16))(1UL)), ((VECTOR(uint16_t, 16))(65535UL))))).hi))).s7655622154461461)).sf, p_1390->g_75)))) >= p_1390->g_570.s1))
                    { /* block id: 583 */
                        int32_t **l_1298 = &l_1227[0][3];
                        (*l_1298) = l_1297[1];
                        if (l_1268[0])
                            break;
                    }
                    else
                    { /* block id: 586 */
                        int32_t *l_1300 = (void*)0;
                        (*l_1299) = l_1300;
                    }
                    return p_1390->g_989.f0;
                }
                (**p_1390->g_1138) = ((((safe_sub_func_int32_t_s_s(0x737702EFL, (*p_1390->g_409))) , ((*l_1304) = l_1303)) == &p_1390->g_483) != ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(l_1305.se4e5ce04)).even, (uint16_t)(*p_1390->g_149), (uint16_t)((p_1390->g_222--) == ((safe_div_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((l_1278.y , 0UL) == p_1390->g_1126.x), (((safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((8L != (*p_1390->g_149)) | p_1390->g_549.y), 0x041FL)) , 0xDAL), 3L)) <= 0x3579F4936B60A345L) ^ 0UL))), l_1268[2])) , p_1390->g_847.sf), l_1268[2])) & 0x679FL), l_1320[0])) >= l_1270[2]))))))).y , 0xC485A3BFA8E95009L) == (-1L)));
                (**p_1390->g_1138) &= 2L;
            }
            else
            { /* block id: 595 */
                int32_t **l_1326 = &l_1227[2][1];
                int32_t l_1349 = 0x4D858D84L;
                uint64_t l_1378 = 0x53BF76B6C2398785L;
                for (p_1390->g_1013.f4.f5 = (-11); (p_1390->g_1013.f4.f5 > 5); p_1390->g_1013.f4.f5 = safe_add_func_int8_t_s_s(p_1390->g_1013.f4.f5, 9))
                { /* block id: 598 */
                    (**p_1390->g_1138) |= 0x37DA1D48L;
                }
                for (p_1390->g_1032.f4.f6 = 5; (p_1390->g_1032.f4.f6 > (-15)); --p_1390->g_1032.f4.f6)
                { /* block id: 603 */
                    uint32_t l_1327 = 0UL;
                    union U1 **l_1329[5];
                    int32_t l_1360 = 0x622892BCL;
                    int32_t l_1382 = 0x792B066BL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1329[i] = &p_1390->g_1047;
                    if ((&p_1390->g_191 != l_1325))
                    { /* block id: 604 */
                        int16_t *l_1356 = &l_1320[0];
                        int32_t l_1358 = (-7L);
                        (*l_1299) = (*l_1326);
                        (*p_1390->g_1139) = (l_1327 < ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_1328.xwzzxywz)))), ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(6L, 0x56L)), 0x19L, 1L)), (int8_t)(((l_1268[2] || (((((void*)0 != l_1329[0]) || (safe_mul_func_uint16_t_u_u(((p_1390->g_comm_values[p_1390->tid] ^= (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x77L, 0xD2L)), 0xAFL, 3UL)).z <= ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(p_1390->g_1340.xxyyyyxx)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_1390->g_1341.s73255704)), (-7L), 0x49L, 0x3EL, 0x79L, 0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_1390->g_1342.xywz)).even)), (-10L))).lo))).s5, (p_1390->g_268[5].f3 , (safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(l_1349, (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_1390->g_192.f5, (safe_add_func_uint32_t_u_u((l_1356 == l_1357[0][4][1]), 0x7466FBBCL)))), l_1278.y)))), l_1358)), p_1390->g_1185.f3))))) | p_1390->g_1239.x)) < 0x4B1D7F0ABAD13D45L), l_1271)), 3L)), 65528UL))) > p_1390->g_1239.x), 0L))) == l_1278.x) & p_1390->g_581.sa)) >= p_1390->g_357.s9) , l_1359), (int8_t)p_1390->g_972.f0))).zwwzwxzz)).s76))).yyyx, ((VECTOR(int8_t, 4))(0x4FL))))).zzxzxwxx, ((VECTOR(int8_t, 8))(1L))))).s3);
                        if (l_1358)
                            continue;
                        (*l_1299) = &l_1270[2];
                    }
                    else
                    { /* block id: 610 */
                        uint64_t l_1361 = 18446744073709551615UL;
                        l_1361--;
                        if ((**p_1390->g_1138))
                            continue;
                        (*p_1390->g_1139) ^= (safe_lshift_func_int16_t_s_u(0x34E0L, 13));
                    }
                    for (p_1390->g_1027.f1.f3 = 29; (p_1390->g_1027.f1.f3 <= 41); ++p_1390->g_1027.f1.f3)
                    { /* block id: 617 */
                        int16_t **l_1371 = &l_1357[0][4][1];
                        uint16_t *l_1375 = &p_1390->g_1000.f4.f3;
                        (*p_1390->g_1139) = (l_1360 = (safe_div_func_int16_t_s_s((((*l_1225) &= (l_1370 != ((*l_1371) = l_1357[0][4][1]))) != ((((safe_sub_func_int16_t_s_s((((VECTOR(int16_t, 2))(p_1390->g_1374.yy)).even || ((*l_1375) = (*p_1390->g_149))), ((*p_1390->g_409) != (*p_1390->g_409)))) < (((safe_div_func_int8_t_s_s(l_1378, (safe_div_func_uint16_t_u_u((((p_1390->g_comm_values[p_1390->tid] |= ((VECTOR(int64_t, 8))(p_1390->g_1381.xyyyxyyx)).s1) <= ((0xCD00EEF0L >= 4294967290UL) & l_1382)) <= l_1327), p_1390->g_192.f1)))) || 0L) == l_1327)) , p_1390->g_1383[0][0][0]) || GROUP_DIVERGE(0, 1))), GROUP_DIVERGE(1, 1))));
                    }
                }
            }
            p_1390->g_252.x |= ((*p_1390->g_191) , (safe_rshift_func_int16_t_s_s((l_1270[3] = l_1386), l_1268[1])));
        }
        if ((atomic_inc(&p_1390->l_atomic_input[70]) == 6))
        { /* block id: 631 */
            VECTOR(int32_t, 8) l_1387 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
            uint8_t l_1388 = 0x16L;
            int i;
            l_1388 |= ((VECTOR(int32_t, 2))(l_1387.s03)).odd;
            unsigned int result = 0;
            result += l_1387.s7;
            result += l_1387.s6;
            result += l_1387.s5;
            result += l_1387.s4;
            result += l_1387.s3;
            result += l_1387.s2;
            result += l_1387.s1;
            result += l_1387.s0;
            result += l_1388;
            atomic_add(&p_1390->l_special_values[70], result);
        }
        else
        { /* block id: 633 */
            (1 + 1);
        }
        l_1389[0] = (*p_1390->g_1138);
    }
    return p_1390->g_1191.f6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1390->g_1185 p_1390->g_191 p_1390->g_1033.f4.f1 p_1390->g_1191 p_1390->g_967.f0
 * writes: p_1390->g_192 p_1390->g_1033.f4.f1
 */
int8_t  func_5(uint8_t  p_6, struct S2 * p_1390)
{ /* block id: 529 */
    int32_t *l_1190 = (void*)0;
    int32_t l_1194[6][2] = {{0x77FF0C78L,0x77FF0C78L},{0x77FF0C78L,0x77FF0C78L},{0x77FF0C78L,0x77FF0C78L},{0x77FF0C78L,0x77FF0C78L},{0x77FF0C78L,0x77FF0C78L},{0x77FF0C78L,0x77FF0C78L}};
    uint32_t l_1195 = 4294967290UL;
    int32_t *l_1198[8][6][1] = {{{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]}},{{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]}},{{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]}},{{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]}},{{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]}},{{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]}},{{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]}},{{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]},{&l_1194[3][0]}}};
    int16_t l_1199 = 0x7404L;
    uint8_t l_1200 = 6UL;
    int i, j, k;
    (*p_1390->g_191) = p_1390->g_1185;
    for (p_1390->g_1033.f4.f1 = (-10); (p_1390->g_1033.f4.f1 != 7); ++p_1390->g_1033.f4.f1)
    { /* block id: 533 */
        int32_t *l_1188 = (void*)0;
        int32_t *l_1192 = (void*)0;
        int32_t *l_1193[8];
        int i;
        for (i = 0; i < 8; i++)
            l_1193[i] = (void*)0;
        l_1190 = l_1188;
        (*p_1390->g_191) = p_1390->g_1191;
        l_1190 = l_1190;
        --l_1195;
    }
    ++l_1200;
    if ((atomic_inc(&p_1390->l_atomic_input[14]) == 7))
    { /* block id: 541 */
        int16_t l_1203 = 0x78EBL;
        l_1203 &= 0x58E8C458L;
        unsigned int result = 0;
        result += l_1203;
        atomic_add(&p_1390->l_special_values[14], result);
    }
    else
    { /* block id: 543 */
        (1 + 1);
    }
    return p_1390->g_967[0].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1390->g_2 p_1390->g_24 p_1390->g_30 p_1390->g_47 p_1390->g_31 p_1390->g_69 p_1390->g_75 p_1390->g_83 p_1390->g_68 p_1390->g_56 p_1390->g_73 p_1390->g_comm_values p_1390->g_112 p_1390->g_149 p_1390->g_72 p_1390->g_10 p_1390->g_156 p_1390->g_90 p_1390->g_169 p_1390->g_191 p_1390->g_209 p_1390->g_222 p_1390->g_192.f3 p_1390->g_192.f5 p_1390->g_202 p_1390->g_252 p_1390->g_437 p_1390->g_439 p_1390->g_235 p_1390->g_482 p_1390->g_192.f6 p_1390->g_409 p_1390->g_268.f2 p_1390->g_438 p_1390->g_492 p_1390->g_847 p_1390->g_854 p_1390->g_364 p_1390->g_578 p_1390->g_580 p_1390->g_881 p_1390->g_568 p_1390->g_268.f6 p_1390->g_268.f1 p_1390->g_582 p_1390->g_549 p_1390->g_357 p_1390->g_560 p_1390->l_comm_values p_1390->g_1125
 * writes: p_1390->g_24 p_1390->g_30 p_1390->g_31 p_1390->g_47 p_1390->g_69 p_1390->g_75 p_1390->g_56 p_1390->g_83 p_1390->g_68 p_1390->g_112 p_1390->g_156 p_1390->g_191 p_1390->g_202 p_1390->g_209 p_1390->g_222 p_1390->g_192.f5 p_1390->g_72 p_1390->g_73 p_1390->g_252 p_1390->g_192.f2 p_1390->g_439 p_1390->g_363 p_1390->g_834 p_1390->g_555 p_1390->g_438 p_1390->g_580 p_1390->g_364 p_1390->g_268.f2 p_1390->g_192.f1 p_1390->g_997.f4.f1 p_1390->g_582 p_1390->g_964.f1.f6 p_1390->g_1125
 */
int64_t  func_16(int16_t  p_17, struct S2 * p_1390)
{ /* block id: 8 */
    VECTOR(int32_t, 4) l_18 = (VECTOR(int32_t, 4))(0x458A922AL, (VECTOR(int32_t, 2))(0x458A922AL, 0x020B275CL), 0x020B275CL);
    int32_t *l_22 = &p_1390->g_2[9];
    VECTOR(uint16_t, 2) l_1127 = (VECTOR(uint16_t, 2))(0x764CL, 1UL);
    VECTOR(int16_t, 8) l_1130 = (VECTOR(int16_t, 8))(0x24FAL, (VECTOR(int16_t, 4))(0x24FAL, (VECTOR(int16_t, 2))(0x24FAL, 0x3986L), 0x3986L), 0x3986L, 0x24FAL, 0x3986L);
    VECTOR(uint16_t, 2) l_1153 = (VECTOR(uint16_t, 2))(65535UL, 0x7C11L);
    int32_t l_1159[8] = {2L,(-1L),2L,2L,(-1L),2L,2L,(-1L)};
    int i, j;
    atomic_max(&p_1390->l_atomic_reduction[0], ((VECTOR(int32_t, 16))(l_18.wxwxwxwywzwyzwyy)).sd);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1390->v_collective += p_1390->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    l_22 = func_19(((void*)0 != l_22), (*l_22), p_1390);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1390->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u(0x8069D1FEL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))]));
    for (p_17 = 0; (p_17 != 18); p_17 = safe_add_func_int64_t_s_s(p_17, 4))
    { /* block id: 19 */
        int32_t *l_48 = (void*)0;
        int32_t l_49[3][6] = {{0x6068BE3EL,0x6068BE3EL,0x2C43DA4AL,0x26A1E05BL,0L,0x26A1E05BL},{0x6068BE3EL,0x6068BE3EL,0x2C43DA4AL,0x26A1E05BL,0L,0x26A1E05BL},{0x6068BE3EL,0x6068BE3EL,0x2C43DA4AL,0x26A1E05BL,0L,0x26A1E05BL}};
        VECTOR(uint64_t, 4) l_1131 = (VECTOR(uint64_t, 4))(0xBE608B971FB39E8DL, (VECTOR(uint64_t, 2))(0xBE608B971FB39E8DL, 0UL), 0UL);
        uint64_t *l_1134 = &p_1390->g_90;
        uint64_t **l_1135 = &l_1134;
        int32_t **l_1137 = &l_22;
        int32_t ***l_1136 = &l_1137;
        int8_t *l_1141 = &p_1390->g_1029.f1.f5;
        int8_t *l_1142 = &p_1390->g_1024.f4.f5;
        int8_t *l_1143[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t *l_1148[8] = {&permutations[(safe_mod_func_uint32_t_u_u(0x8069D1FEL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))],&permutations[(safe_mod_func_uint32_t_u_u(0x8069D1FEL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))],&permutations[(safe_mod_func_uint32_t_u_u(0x8069D1FEL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))],&permutations[(safe_mod_func_uint32_t_u_u(0x8069D1FEL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))],&permutations[(safe_mod_func_uint32_t_u_u(0x8069D1FEL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))],&permutations[(safe_mod_func_uint32_t_u_u(0x8069D1FEL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))],&permutations[(safe_mod_func_uint32_t_u_u(0x8069D1FEL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))],&permutations[(safe_mod_func_uint32_t_u_u(0x8069D1FEL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))]};
        VECTOR(uint16_t, 8) l_1155 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0x96C2L), 0x96C2L), 0x96C2L, 8UL, 0x96C2L);
        uint16_t *l_1158 = &p_1390->g_1044.f4.f3;
        int i, j;
        for (p_1390->g_24 = 4; (p_1390->g_24 <= 10); ++p_1390->g_24)
        { /* block id: 22 */
            int32_t *l_29 = (void*)0;
            int32_t **l_46[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t *l_1124 = &p_1390->g_964.f1.f6;
            int i;
            p_1390->g_30[6][5] = p_17;
            for (p_1390->g_31 = 0; (p_1390->g_31 == 9); ++p_1390->g_31)
            { /* block id: 26 */
                if (p_17)
                    break;
            }
            p_1390->g_1125 |= (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((*l_1124) = (((*p_1390->g_437) = (func_38(((func_41(p_1390->g_30[6][0], (*l_22), (l_48 = (p_1390->g_47 = &p_1390->g_2[0])), l_49[0][4], p_1390) == GROUP_DIVERGE(1, 1)) != (0UL & p_17)), (*l_22), p_1390) | p_1390->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))])) == 0x0694800B6EE6C359L)), p_17)), 2L));
        }
        l_1159[7] ^= (((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 8))(p_1390->g_1126.wzywwxwy)).s60, ((VECTOR(uint16_t, 16))(l_1127.xxxxyyxyyyyxyxxy)).se7, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(p_1390->g_1128.s1671661255336672)).s261b, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x6E5CL, 0x06D3L)).xyyxyyxx)).hi))), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(p_1390->g_1129.s4113)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_1130.s22)).xxxyyxyyxxxxxxxx)).sf7f5, ((VECTOR(int16_t, 2))(0x11FBL, 1L)).xyxx))).even))).xxyy))))).zyyywyzxyyzwyzwz, ((VECTOR(uint16_t, 16))(0x2270L, (((((VECTOR(uint64_t, 8))(8UL, ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 4))(l_1131.wzyx)).xzxwwwyz, ((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 2))(0x11D439E222A6B2C9L, 0x2237A3266FC6CA76L)).yyxyxyyyxyyxyxxx))).hi, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((safe_lshift_func_uint8_t_u_u((((*l_1136) = func_84((*l_1135), p_1390)) == p_1390->g_1138), ((l_49[1][5] ^= ((*l_1141) = p_17)) >= (safe_add_func_int16_t_s_s((((((l_18.x |= (safe_sub_func_int64_t_s_s(p_17, (*l_22)))) >= (safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(l_1153.yxyxyxxxxyxyyxxx)).even, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 8))(p_1390->g_1154.xxyxyxyx)).s32, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_1155.s7341)))).lo))).xyxyyxyx))).s7 == p_17), ((*l_1158) = (safe_rshift_func_int16_t_s_u((*l_22), p_1390->g_235.s5))))) | 0x3C37L), p_1390->g_582.y))) ^ 0x06C7981DL) || p_1390->g_361.s4) ^ p_1390->g_492.w), 0x941AL))))) <= p_1390->g_1126.x), 0x997F1F0D8FBCB40FL, ((VECTOR(uint64_t, 4))(18446744073709551612UL)), 0x4A1C821B50486397L, ((VECTOR(uint64_t, 2))(0xE6EFC11E392D6DA8L)), (*p_1390->g_437), ((VECTOR(uint64_t, 2))(0x9D0E83F8F4266A9BL)), ((VECTOR(uint64_t, 4))(0x5FA8AD47DC5EDD2FL)))).even)), 0xF57F243B2EBDF9EDL, ((VECTOR(uint64_t, 4))(0xC85293212FB7484FL)), ((VECTOR(uint64_t, 2))(0x4ED9074B2F3DE73FL)), 0UL)))).hi))).s23, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))), ((VECTOR(uint64_t, 2))(1UL))))), (*l_22), ((VECTOR(uint64_t, 2))(0x58DF5AC254F63D38L)), 0xA02D73B956B28063L, 0xAF85DE78F2E5E467L)).s7 && p_17) <= p_17) >= p_17), ((VECTOR(uint16_t, 4))(0xEDC1L)), ((VECTOR(uint16_t, 4))(0xC716L)), 0xAFE6L, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(65534UL)), 65535UL))))))).sbb))).hi & 8UL);
        if ((*l_22))
            continue;
    }
    return p_1390->g_56;
}


/* ------------------------------------------ */
/* 
 * reads : p_1390->g_24
 * writes: p_1390->g_24
 */
int32_t * func_19(uint32_t  p_20, uint16_t  p_21, struct S2 * p_1390)
{ /* block id: 10 */
    int32_t l_23 = 1L;
    p_1390->g_24 &= l_23;
    return &p_1390->g_2[7];
}


/* ------------------------------------------ */
/* 
 * reads : p_1390->g_437 p_1390->g_438 p_1390->g_47 p_1390->g_2 p_1390->g_252
 * writes: p_1390->g_47 p_1390->g_252 p_1390->g_582
 */
int8_t  func_38(int64_t  p_39, uint64_t  p_40, struct S2 * p_1390)
{ /* block id: 489 */
    int32_t *l_1107[9][3][6] = {{{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1390->g_56,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int8_t l_1118 = 0x5AL;
    int i, j, k;
    atomic_min(&p_1390->l_atomic_reduction[0], (((*p_1390->g_437) == 0L) >= p_40) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1390->v_collective += p_1390->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if ((*p_1390->g_47))
    { /* block id: 491 */
        int32_t **l_1108[1][5];
        VECTOR(int32_t, 4) l_1114 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6EFCFB31L), 0x6EFCFB31L);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1108[i][j] = &p_1390->g_47;
        }
        p_1390->g_47 = l_1107[3][2][3];
        if (p_40)
        { /* block id: 493 */
            int32_t l_1109 = 0x03811AC0L;
            int32_t l_1110 = 0L;
            uint64_t l_1111 = 0xA2A14FA8D9823021L;
            p_1390->g_252.y &= ((void*)0 != &p_1390->g_555);
            l_1111++;
            l_1110 = ((VECTOR(int32_t, 8))(l_1114.xyxyzyxx)).s5;
        }
        else
        { /* block id: 497 */
            uint8_t l_1115 = 248UL;
            int32_t l_1116 = 0x2B6743F0L;
            VECTOR(int32_t, 2) l_1117 = (VECTOR(int32_t, 2))(0x79419A27L, (-6L));
            uint64_t l_1119 = 0x0120BB91B8F294D6L;
            int i;
            p_1390->g_582.x = (l_1115 & 0x13ED51D18FCF6D8FL);
            ++l_1119;
        }
    }
    else
    { /* block id: 501 */
        if ((atomic_inc(&p_1390->l_atomic_input[28]) == 1))
        { /* block id: 503 */
            int16_t l_1122[8];
            uint32_t l_1123 = 0xA01DDDE8L;
            int i;
            for (i = 0; i < 8; i++)
                l_1122[i] = 0x5DB6L;
            l_1123 ^= l_1122[4];
            unsigned int result = 0;
            int l_1122_i0;
            for (l_1122_i0 = 0; l_1122_i0 < 8; l_1122_i0++) {
                result += l_1122[l_1122_i0];
            }
            result += l_1123;
            atomic_add(&p_1390->l_special_values[28], result);
        }
        else
        { /* block id: 505 */
            (1 + 1);
        }
    }
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_1390->g_47 p_1390->g_2 p_1390->g_31 p_1390->g_69 p_1390->g_75 p_1390->g_83 p_1390->g_68 p_1390->g_56 p_1390->g_10 p_1390->g_112 p_1390->g_24 p_1390->g_73 p_1390->g_comm_values p_1390->g_30 p_1390->g_149 p_1390->g_72 p_1390->g_156 p_1390->g_169 p_1390->g_90 p_1390->g_191 p_1390->g_209 p_1390->g_222 p_1390->g_192.f3 p_1390->g_235 p_1390->g_192.f5 p_1390->g_252 p_1390->g_202 p_1390->g_192.f2 p_1390->g_437 p_1390->g_439 p_1390->g_482 p_1390->g_492 p_1390->g_192.f6 p_1390->g_409 p_1390->g_268.f2 p_1390->g_549 p_1390->g_555 p_1390->g_268.f6 p_1390->g_268.f5 p_1390->g_556 p_1390->g_438 p_1390->g_566 p_1390->g_568 p_1390->g_569 p_1390->g_570 p_1390->g_578 p_1390->g_580 p_1390->g_581 p_1390->g_582 p_1390->g_364 p_1390->g_830 p_1390->g_847 p_1390->g_854 p_1390->g_881 p_1390->g_268.f1 p_1390->g_192.f1 p_1390->g_1047 p_1390->g_1055 p_1390->g_361 p_1390->g_357 p_1390->g_997.f4.f1 p_1390->g_560
 * writes: p_1390->g_31 p_1390->g_69 p_1390->g_75 p_1390->g_56 p_1390->g_83 p_1390->g_68 p_1390->g_112 p_1390->g_156 p_1390->g_47 p_1390->g_191 p_1390->g_202 p_1390->g_209 p_1390->g_222 p_1390->g_192.f5 p_1390->g_72 p_1390->g_30 p_1390->g_73 p_1390->g_252 p_1390->g_192.f2 p_1390->g_439 p_1390->g_268.f6 p_1390->g_268.f5 p_1390->g_363 p_1390->g_90 p_1390->g_581 p_1390->g_834 p_1390->g_555 p_1390->g_438 p_1390->g_580 p_1390->g_364 p_1390->g_268.f2 p_1390->g_192.f1 p_1390->g_1047 p_1390->g_997.f4.f1
 */
int16_t  func_41(uint32_t  p_42, uint64_t  p_43, int32_t * p_44, uint32_t  p_45, struct S2 * p_1390)
{ /* block id: 31 */
    int32_t **l_52 = &p_1390->g_47;
    p_1390->g_31 |= (*p_1390->g_47);
    (*l_52) = func_50(l_52, p_1390);
    return p_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_1390->g_31 p_1390->g_69 p_1390->g_75 p_1390->g_2 p_1390->g_83 p_1390->g_68 p_1390->g_56 p_1390->g_10 p_1390->g_112 p_1390->g_24 p_1390->g_73 p_1390->g_comm_values p_1390->g_30 p_1390->g_149 p_1390->g_72 p_1390->g_156 p_1390->g_169 p_1390->g_90 p_1390->g_191 p_1390->g_47 p_1390->g_209 p_1390->g_222 p_1390->g_192.f3 p_1390->g_235 p_1390->g_192.f5 p_1390->g_252 p_1390->g_202 p_1390->g_192.f2 p_1390->g_437 p_1390->g_439 p_1390->g_482 p_1390->g_492 p_1390->g_192.f6 p_1390->g_409 p_1390->g_268.f2 p_1390->g_549 p_1390->g_555 p_1390->g_268.f6 p_1390->g_268.f5 p_1390->g_556 p_1390->g_438 p_1390->g_566 p_1390->g_568 p_1390->g_569 p_1390->g_570 p_1390->g_578 p_1390->g_580 p_1390->g_581 p_1390->g_582 p_1390->g_364 p_1390->g_830 p_1390->g_847 p_1390->g_854 p_1390->g_881 p_1390->g_268.f1 p_1390->g_192.f1 p_1390->g_1047 p_1390->g_1055 p_1390->g_361 p_1390->g_357 p_1390->g_997.f4.f1 p_1390->g_560
 * writes: p_1390->g_31 p_1390->g_69 p_1390->g_75 p_1390->g_56 p_1390->g_83 p_1390->g_68 p_1390->g_112 p_1390->g_156 p_1390->g_47 p_1390->g_191 p_1390->g_202 p_1390->g_209 p_1390->g_222 p_1390->g_192.f5 p_1390->g_72 p_1390->g_30 p_1390->g_73 p_1390->g_252 p_1390->g_192.f2 p_1390->g_439 p_1390->g_268.f6 p_1390->g_268.f5 p_1390->g_363 p_1390->g_90 p_1390->g_581 p_1390->g_834 p_1390->g_555 p_1390->g_438 p_1390->g_580 p_1390->g_364 p_1390->g_268.f2 p_1390->g_192.f1 p_1390->g_1047 p_1390->g_997.f4.f1
 */
int32_t * func_50(int32_t ** p_51, struct S2 * p_1390)
{ /* block id: 33 */
    int8_t l_57 = 0x0DL;
    int32_t l_66 = 0x5572BF2CL;
    int32_t l_67[2];
    int32_t *l_78 = &p_1390->g_56;
    uint64_t *l_82 = &p_1390->g_83;
    uint64_t *l_89 = &p_1390->g_90;
    uint64_t **l_88 = &l_89;
    uint64_t **l_91 = (void*)0;
    uint64_t *l_93[10][7][3] = {{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}},{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}},{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}},{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}},{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}},{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}},{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}},{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}},{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}},{{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90},{&p_1390->g_90,&p_1390->g_90,&p_1390->g_90}}};
    uint64_t **l_92 = &l_93[2][6][2];
    uint64_t *l_100 = &p_1390->g_90;
    uint64_t **l_101 = &l_100;
    uint64_t *l_103 = &p_1390->g_90;
    uint64_t **l_102 = &l_103;
    int8_t *l_104 = &p_1390->g_68;
    uint16_t *l_111 = &p_1390->g_112;
    VECTOR(int32_t, 2) l_923 = (VECTOR(int32_t, 2))(0x70B1E820L, 0x7CF916CCL);
    int16_t l_945 = (-1L);
    union U1 *l_961[10][7][3] = {{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}},{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}},{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}},{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}},{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}},{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}},{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}},{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}},{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}},{{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033},{&p_1390->g_1037,&p_1390->g_1032,&p_1390->g_1033}}};
    uint32_t l_1059[10][6] = {{0UL,0UL,4294967293UL,1UL,0UL,1UL},{0UL,0UL,4294967293UL,1UL,0UL,1UL},{0UL,0UL,4294967293UL,1UL,0UL,1UL},{0UL,0UL,4294967293UL,1UL,0UL,1UL},{0UL,0UL,4294967293UL,1UL,0UL,1UL},{0UL,0UL,4294967293UL,1UL,0UL,1UL},{0UL,0UL,4294967293UL,1UL,0UL,1UL},{0UL,0UL,4294967293UL,1UL,0UL,1UL},{0UL,0UL,4294967293UL,1UL,0UL,1UL},{0UL,0UL,4294967293UL,1UL,0UL,1UL}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_67[i] = 0x605F7783L;
    for (p_1390->g_31 = 0; (p_1390->g_31 != 9); p_1390->g_31 = safe_add_func_int32_t_s_s(p_1390->g_31, 9))
    { /* block id: 36 */
        int32_t *l_55 = &p_1390->g_56;
        int32_t *l_58 = &p_1390->g_56;
        int32_t *l_59 = &p_1390->g_56;
        int32_t *l_60 = &p_1390->g_56;
        int32_t *l_61 = &p_1390->g_56;
        int32_t *l_62 = &p_1390->g_56;
        int32_t *l_63 = &p_1390->g_56;
        int32_t *l_64 = (void*)0;
        int32_t *l_65[10][5] = {{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]},{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]},{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]},{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]},{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]},{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]},{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]},{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]},{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]},{&p_1390->g_2[0],&p_1390->g_2[7],&p_1390->g_2[0],&p_1390->g_2[0],&p_1390->g_2[7]}};
        int16_t l_74 = 1L;
        int i, j;
        --p_1390->g_69;
        --p_1390->g_75;
    }
    (*l_78) = l_57;
    if (func_79(((*l_82) ^= p_1390->g_2[1]), func_84(func_86(((((((l_82 != ((*l_92) = ((*l_88) = (void*)0))) == (safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((((*l_104) |= (((*l_101) = l_100) == ((*l_102) = l_82))) == (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x0B9CL, ((VECTOR(int16_t, 2))((-7L), (-4L))), 0x4220L)).zwyxyyxw)).s66, (int16_t)(safe_lshift_func_int16_t_s_u(1L, ((*l_111) |= ((*l_78) > (p_1390->g_10.y || (safe_div_func_int16_t_s_s(p_1390->g_2[0], (*l_78)))))))))))))).xxxy, ((VECTOR(int16_t, 4))((-7L))), ((VECTOR(int16_t, 4))((-1L)))))).z, p_1390->g_24))), 8)), FAKE_DIVERGE(p_1390->group_0_offset, get_group_id(0), 10))), (*l_78)))) < p_1390->g_73) == (*l_78)) >= (*l_78)) , (*l_88)), p_1390), p_1390), p_1390))
    { /* block id: 399 */
        VECTOR(int8_t, 4) l_851 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L));
        int32_t *l_871 = &p_1390->g_2[0];
        int16_t l_935 = 0x4815L;
        int32_t l_942 = 0L;
        int32_t l_943[6][5] = {{3L,0x37A21207L,(-1L),0x37A21207L,3L},{3L,0x37A21207L,(-1L),0x37A21207L,3L},{3L,0x37A21207L,(-1L),0x37A21207L,3L},{3L,0x37A21207L,(-1L),0x37A21207L,3L},{3L,0x37A21207L,(-1L),0x37A21207L,3L},{3L,0x37A21207L,(-1L),0x37A21207L,3L}};
        int8_t l_1067 = 0L;
        uint32_t l_1081 = 1UL;
        volatile uint16_t ***l_1102 = (void*)0;
        volatile uint16_t **l_1104 = &p_1390->g_149;
        volatile uint16_t ***l_1103 = &l_1104;
        int i, j;
        if (((VECTOR(int32_t, 2))(9L, 0x246B3D7CL)).even)
        { /* block id: 400 */
            int16_t l_855 = 6L;
            int32_t **l_864 = (void*)0;
            uint16_t l_865 = 0xFB2FL;
            int32_t l_944 = 1L;
            int32_t l_946[3];
            uint32_t **l_956 = &p_1390->g_409;
            int32_t *l_1071 = &p_1390->g_56;
            int32_t *l_1072 = &l_946[1];
            int32_t *l_1073 = (void*)0;
            int32_t *l_1074 = &p_1390->g_56;
            int32_t *l_1075 = &l_943[5][4];
            int32_t *l_1076 = &l_66;
            int32_t *l_1077[8][6][5] = {{{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]}},{{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]}},{{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]}},{{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]}},{{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]}},{{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]}},{{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]}},{{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]},{(void*)0,&p_1390->g_2[1],&l_942,(void*)0,&l_67[0]}}};
            int32_t l_1078 = 0x414ADDBDL;
            int16_t l_1079 = 0x7CACL;
            int8_t l_1080[4];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_946[i] = 5L;
            for (i = 0; i < 4; i++)
                l_1080[i] = 0L;
            if ((safe_lshift_func_uint8_t_u_u(((*l_78) ^ (((VECTOR(int8_t, 8))(l_851.yxxzywxx)).s1 >= (p_1390->g_2[0] > ((safe_mul_func_uint16_t_u_u(((&l_104 != (GROUP_DIVERGE(0, 1) , p_1390->g_854)) ^ (l_855 && 0x0E0884DCE579A6D4L)), l_855)) & (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u(((void*)0 == l_864), (*l_78))) != l_865), (*p_1390->g_437))), 6)), 18446744073709551615UL)))))), p_1390->g_847.s4)))
            { /* block id: 401 */
                uint8_t l_870[10][4] = {{0x90L,1UL,1UL,0x90L},{0x90L,1UL,1UL,0x90L},{0x90L,1UL,1UL,0x90L},{0x90L,1UL,1UL,0x90L},{0x90L,1UL,1UL,0x90L},{0x90L,1UL,1UL,0x90L},{0x90L,1UL,1UL,0x90L},{0x90L,1UL,1UL,0x90L},{0x90L,1UL,1UL,0x90L},{0x90L,1UL,1UL,0x90L}};
                int i, j;
                for (p_1390->g_555 = 0; (p_1390->g_555 >= 5); ++p_1390->g_555)
                { /* block id: 404 */
                    int64_t *l_876[1][8];
                    VECTOR(int8_t, 2) l_886 = (VECTOR(int8_t, 2))(0x04L, 0x30L);
                    int32_t l_887 = 1L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_876[i][j] = &p_1390->g_30[0][0];
                    }
                    for (p_1390->g_438 = 0; (p_1390->g_438 == 20); p_1390->g_438++)
                    { /* block id: 407 */
                        (*l_78) |= l_870[2][1];
                        (*p_51) = l_871;
                    }
                    atomic_or(&p_1390->g_atomic_reduction[get_linear_group_id()], (safe_mod_func_int64_t_s_s((((((((((*l_78) = (p_1390->g_30[6][5] = (safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_1390->global_0_offset, get_global_id(0), 10), 6)))) || 0x07AF391591260C1BL) , (l_870[2][2] < (&l_57 != &p_1390->g_68))) && (*l_78)) , (safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 2))(p_1390->g_881.s4b)).lo, ((*l_871) & (p_1390->g_568.x <= (((l_870[4][3] | (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x351BL, 0x65F4L)).hi, (p_1390->g_578.s4 <= p_1390->g_268[5].f6)))) & (*l_78)) , p_1390->g_439))))), FAKE_DIVERGE(p_1390->global_1_offset, get_global_id(1), 10)))) , p_1390->g_439) , (*p_1390->g_409)) && (*l_871)), l_870[9][0])) + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1390->v_collective += p_1390->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1390->g_580.s0 &= (safe_mod_func_uint64_t_u_u((((*l_104) = p_1390->g_364.w) , ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_886.xxxy)).wzyxzwzwyzyyyzxz)).s8 | (l_887 ^= 0x20L)) == p_1390->g_847.s3)), ((safe_add_func_int16_t_s_s(l_870[2][1], p_1390->g_578.s6)) , l_870[2][1])));
                }
                for (p_1390->g_209 = (-22); (p_1390->g_209 > 59); p_1390->g_209++)
                { /* block id: 420 */
                    if ((*l_871))
                        break;
                    if (l_870[0][1])
                        continue;
                }
                if ((atomic_inc(&p_1390->l_atomic_input[15]) == 0))
                { /* block id: 425 */
                    int8_t l_892[2][1];
                    int32_t l_909 = 0x5320A72AL;
                    int32_t *l_908[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_892[i][j] = 1L;
                    }
                    l_892[1][0] = 0x7FD158DCL;
                    for (l_892[1][0] = (-25); (l_892[1][0] >= (-9)); l_892[1][0] = safe_add_func_uint32_t_u_u(l_892[1][0], 1))
                    { /* block id: 429 */
                        int64_t l_895 = 0x3809860AF251E8E4L;
                        int8_t l_896 = 0x31L;
                        uint32_t l_897 = 0x8137A211L;
                        int64_t l_900[1][10][6] = {{{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L},{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L},{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L},{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L},{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L},{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L},{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L},{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L},{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L},{2L,0x0B67C9A0DBB6909DL,0x4F56C354F2CFD19CL,0x219BE963E753A331L,0x1FA7044A6AE78F46L,0x219BE963E753A331L}}};
                        int32_t l_901 = 7L;
                        int32_t l_903 = 5L;
                        int32_t *l_902[8][6] = {{&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0}};
                        int32_t *l_904 = &l_903;
                        uint32_t l_905 = 4294967287UL;
                        int i, j, k;
                        ++l_897;
                        l_901 &= l_900[0][1][3];
                        l_904 = l_902[4][1];
                        ++l_905;
                    }
                    l_908[2][0] = (void*)0;
                    unsigned int result = 0;
                    int l_892_i0, l_892_i1;
                    for (l_892_i0 = 0; l_892_i0 < 2; l_892_i0++) {
                        for (l_892_i1 = 0; l_892_i1 < 1; l_892_i1++) {
                            result += l_892[l_892_i0][l_892_i1];
                        }
                    }
                    result += l_909;
                    atomic_add(&p_1390->l_special_values[15], result);
                }
                else
                { /* block id: 436 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 439 */
                int32_t *l_910 = &p_1390->g_31;
                uint16_t *l_917 = (void*)0;
                uint16_t *l_918 = &l_865;
                uint16_t *l_926[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_926[i] = (void*)0;
                (*p_51) = l_910;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1390->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u(((*p_1390->g_409) |= (((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((*l_918) = ((*l_111)--)), (0x1FL != (safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(l_923.xxyyyyxy)).s5, (*p_1390->g_47))), (safe_lshift_func_uint16_t_u_u((p_1390->g_364.z = (*l_78)), 3))))))), ((((*l_871) & (*l_910)) ^ (safe_lshift_func_uint16_t_u_u(p_1390->g_268[5].f1, 2))) || p_1390->g_83))) <= (*l_871)) & (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xE09EL, 65535UL)).yxxyxyyx)).s4, 65533UL, ((safe_mod_func_uint16_t_u_u(0x8C25L, 0x6ACCL)) , l_935), 0x74B0L, ((VECTOR(uint16_t, 4))(65527UL)))))).hi, ((VECTOR(uint16_t, 4))(0UL))))).odd)).lo, 0x32D0L)), 0x37L)))), 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))]));
            }
            for (p_1390->g_83 = (-3); (p_1390->g_83 <= 47); p_1390->g_83 = safe_add_func_int32_t_s_s(p_1390->g_83, 2))
            { /* block id: 451 */
                int32_t *l_938 = &l_67[1];
                int32_t *l_939 = (void*)0;
                int32_t *l_940 = (void*)0;
                int32_t *l_941[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint64_t l_947 = 0x06A1F36DDDDAF0CEL;
                int i, j;
                (*l_78) |= 4L;
                --l_947;
                (*l_938) = (safe_div_func_int16_t_s_s(0x46C1L, (*l_871)));
                for (p_1390->g_192.f1 = (-7); (p_1390->g_192.f1 != 41); p_1390->g_192.f1 = safe_add_func_uint8_t_u_u(p_1390->g_192.f1, 1))
                { /* block id: 457 */
                    union U1 *l_1045 = &p_1390->g_1046;
                    union U1 **l_1049 = &p_1390->g_1047;
                    int32_t l_1058 = 0x5FC79BCCL;
                    int64_t *l_1060 = &p_1390->g_30[1][3];
                    uint8_t *l_1061[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    uint32_t *l_1062 = &p_1390->g_69;
                    int16_t *l_1070 = &l_935;
                    int i, j, k;
                    p_1390->g_47 = (((*l_1062) = (((((safe_sub_func_int8_t_s_s(((void*)0 == l_956), (safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((-1L) < p_1390->g_582.x), (l_1058 = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0x64L, 1UL, 252UL, 8UL, 247UL, ((l_1045 = l_961[5][2][1]) != ((*l_1049) = p_1390->g_1047)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(251UL, 0x9EL, 253UL, 255UL)).yxxzzzyxxwxwyzzy)).s07)), ((VECTOR(uint8_t, 4))((((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_1390->global_0_offset, get_global_id(0), 10), (safe_unary_minus_func_uint32_t_u(0xDFBDB602L)))), ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(2UL, 0x734F496BL)).yxyyyxxy, (uint32_t)((VECTOR(uint32_t, 8))(p_1390->g_1055.xzwzwxxx)).s6))).lo)), ((VECTOR(uint32_t, 4))(GROUP_DIVERGE(1, 1), 4294967295UL, 0x2B41DE19L, 1UL)))).s0262340071646060)).hi)).s7 , (safe_mod_func_uint8_t_u_u((((*l_1060) = (l_1058 , ((~p_1390->g_361.sc) > l_1059[7][3]))) || p_1390->g_364.w), (*l_938)))) < l_946[0]))) > 1L) , l_1058), 0x47L, 255UL, 0UL)), 255UL, FAKE_DIVERGE(p_1390->local_1_offset, get_local_id(1), 10), 0xC5L, 248UL)).saa)), 0xC2L, 0x3DL)).x))), 0xB2B0A11AL)))) ^ FAKE_DIVERGE(p_1390->group_2_offset, get_group_id(2), 10)) & (*l_871)) , &p_1390->g_31) != (void*)0)) , (void*)0);
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1390->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u((l_1058 != ((*l_1070) &= (1L <= ((-1L) > ((*p_1390->g_437) = (safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((l_1067 | ((p_1390->g_492.w == p_1390->g_156) ^ (*l_871))) && l_1058) && ((++(*l_111)) <= (p_1390->g_69 != p_1390->g_549.x))), 0x1871F517L)), p_1390->g_357.s2))))))), 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))]));
                }
            }
            l_1081++;
        }
        else
        { /* block id: 473 */
            union U1 **l_1098 = &p_1390->g_1047;
            int32_t l_1100 = 0x4BBD8C8DL;
            int32_t l_1101 = 0x096BDFDEL;
            for (p_1390->g_997.f4.f1 = (-29); (p_1390->g_997.f4.f1 > 34); p_1390->g_997.f4.f1 = safe_add_func_uint32_t_u_u(p_1390->g_997.f4.f1, 7))
            { /* block id: 476 */
                int64_t *l_1099[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1099[i] = &p_1390->g_73;
                (*p_51) = ((safe_rshift_func_int8_t_s_u(((*l_104) = (((safe_add_func_uint8_t_u_u(((*l_871) == (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u(p_1390->g_560[3], (safe_lshift_func_uint16_t_u_u(((l_1098 == (void*)0) >= (l_1100 |= 1L)), 4)))) & (*l_871)), ((((VECTOR(uint32_t, 4))(((*l_78) ^ 0x25D1A456L), ((*l_871) == GROUP_DIVERGE(0, 1)), 4294967295UL, 7UL)).x , 18446744073709551611UL) , l_1101))), 3))), 0x09L)) , p_1390->g_83) != 0x22L)), l_1101)) , &p_1390->g_31);
            }
        }
        (*l_1103) = &p_1390->g_149;
    }
    else
    { /* block id: 483 */
        return &p_1390->g_2[4];
    }
    return &p_1390->g_2[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1390->g_252 p_1390->g_847 p_1390->g_56
 * writes: p_1390->g_56
 */
int32_t  func_79(uint64_t  p_80, int32_t ** p_81, struct S2 * p_1390)
{ /* block id: 393 */
    VECTOR(uint32_t, 16) l_841 = (VECTOR(uint32_t, 16))(0xD86889EAL, (VECTOR(uint32_t, 4))(0xD86889EAL, (VECTOR(uint32_t, 2))(0xD86889EAL, 1UL), 1UL), 1UL, 0xD86889EAL, 1UL, (VECTOR(uint32_t, 2))(0xD86889EAL, 1UL), (VECTOR(uint32_t, 2))(0xD86889EAL, 1UL), 0xD86889EAL, 1UL, 0xD86889EAL, 1UL);
    int32_t *l_842 = &p_1390->g_56;
    uint16_t l_848 = 4UL;
    int i, j;
    (*l_842) = (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(p_1390->g_252.x)), (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(l_841.s6b)).lo, p_80))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1390->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(p_1390->g_847.s11)).xyyx, ((VECTOR(uint8_t, 2))(255UL, 8UL)).xyxx))).x, l_848)), 6)), 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))]));
    return (*l_842);
}


/* ------------------------------------------ */
/* 
 * reads : p_1390->g_192.f2 p_1390->g_252 p_1390->g_24 p_1390->g_comm_values p_1390->g_112 p_1390->g_30 p_1390->g_149 p_1390->g_72 p_1390->g_73 p_1390->g_2 p_1390->g_10 p_1390->g_156 p_1390->g_68 p_1390->g_90 p_1390->g_169 p_1390->g_191 p_1390->g_47 p_1390->g_209 p_1390->g_222 p_1390->g_56 p_1390->g_31 p_1390->g_192.f3 p_1390->g_192.f5 p_1390->g_202 p_1390->g_437 p_1390->g_439 p_1390->g_235 p_1390->g_75 p_1390->g_482 p_1390->g_492 p_1390->g_69 p_1390->g_192.f6 p_1390->g_409 p_1390->g_268.f2 p_1390->g_549 p_1390->g_555 p_1390->g_268.f6 p_1390->g_268.f5 p_1390->g_556 p_1390->g_438 p_1390->g_566 p_1390->g_568 p_1390->g_569 p_1390->g_570 p_1390->g_578 p_1390->g_580 p_1390->g_581 p_1390->g_582 p_1390->g_364 p_1390->g_830
 * writes: p_1390->g_47 p_1390->g_192.f2 p_1390->g_252 p_1390->g_75 p_1390->g_68 p_1390->g_112 p_1390->g_156 p_1390->g_191 p_1390->g_202 p_1390->g_209 p_1390->g_222 p_1390->g_31 p_1390->g_56 p_1390->g_192.f5 p_1390->g_72 p_1390->g_73 p_1390->g_439 p_1390->g_268.f6 p_1390->g_268.f5 p_1390->g_363 p_1390->g_90 p_1390->g_581 p_1390->g_834
 */
int32_t ** func_84(uint64_t * p_85, struct S2 * p_1390)
{ /* block id: 103 */
    int32_t **l_272 = &p_1390->g_47;
    uint64_t *l_302 = &p_1390->g_90;
    int32_t l_330 = 0x284C5BB9L;
    VECTOR(uint8_t, 8) l_362 = (VECTOR(uint8_t, 8))(0xB2L, (VECTOR(uint8_t, 4))(0xB2L, (VECTOR(uint8_t, 2))(0xB2L, 0x68L), 0x68L), 0x68L, 0xB2L, 0x68L);
    VECTOR(uint16_t, 4) l_366 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL);
    int32_t l_370 = 1L;
    VECTOR(int32_t, 16) l_383 = (VECTOR(int32_t, 16))(0x3BA1EA0FL, (VECTOR(int32_t, 4))(0x3BA1EA0FL, (VECTOR(int32_t, 2))(0x3BA1EA0FL, 0L), 0L), 0L, 0x3BA1EA0FL, 0L, (VECTOR(int32_t, 2))(0x3BA1EA0FL, 0L), (VECTOR(int32_t, 2))(0x3BA1EA0FL, 0L), 0x3BA1EA0FL, 0L, 0x3BA1EA0FL, 0L);
    VECTOR(int16_t, 8) l_434 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x56BAL), 0x56BAL), 0x56BAL, 1L, 0x56BAL);
    int8_t *l_440[8] = {&p_1390->g_268[5].f5,&p_1390->g_268[5].f5,&p_1390->g_268[5].f5,&p_1390->g_268[5].f5,&p_1390->g_268[5].f5,&p_1390->g_268[5].f5,&p_1390->g_268[5].f5,&p_1390->g_268[5].f5};
    VECTOR(uint16_t, 16) l_565 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xB4BAL), 0xB4BAL), 0xB4BAL, 65535UL, 0xB4BAL, (VECTOR(uint16_t, 2))(65535UL, 0xB4BAL), (VECTOR(uint16_t, 2))(65535UL, 0xB4BAL), 65535UL, 0xB4BAL, 65535UL, 0xB4BAL);
    uint32_t l_603 = 0xF1BAE087L;
    uint32_t l_831 = 1UL;
    int16_t *l_833 = (void*)0;
    int16_t **l_832 = &l_833;
    int i;
    if ((((VECTOR(uint16_t, 2))(0UL, 1UL)).lo , 1L))
    { /* block id: 104 */
        return l_272;
    }
    else
    { /* block id: 106 */
        int32_t *l_273 = &p_1390->g_2[0];
        int32_t l_310 = (-5L);
        VECTOR(uint16_t, 16) l_358 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65531UL), 65531UL), 65531UL, 1UL, 65531UL, (VECTOR(uint16_t, 2))(1UL, 65531UL), (VECTOR(uint16_t, 2))(1UL, 65531UL), 1UL, 65531UL, 1UL, 65531UL);
        int32_t l_379[9] = {0x59CB7FDEL,0x59CB7FDEL,0x59CB7FDEL,0x59CB7FDEL,0x59CB7FDEL,0x59CB7FDEL,0x59CB7FDEL,0x59CB7FDEL,0x59CB7FDEL};
        int8_t l_382 = 0L;
        int32_t l_393 = 0x212AA66AL;
        struct S0 *l_403[7][6][6];
        uint32_t l_410 = 4294967295UL;
        uint64_t *l_436[4];
        uint64_t **l_435 = &l_436[0];
        int8_t **l_441 = &l_440[6];
        uint16_t l_471 = 0x5A1FL;
        uint32_t l_499 = 0UL;
        uint64_t l_554 = 1UL;
        VECTOR(uint16_t, 16) l_571 = (VECTOR(uint16_t, 16))(0xA2EAL, (VECTOR(uint16_t, 4))(0xA2EAL, (VECTOR(uint16_t, 2))(0xA2EAL, 65535UL), 65535UL), 65535UL, 0xA2EAL, 65535UL, (VECTOR(uint16_t, 2))(0xA2EAL, 65535UL), (VECTOR(uint16_t, 2))(0xA2EAL, 65535UL), 0xA2EAL, 65535UL, 0xA2EAL, 65535UL);
        VECTOR(int32_t, 4) l_576 = (VECTOR(int32_t, 4))(0x026A452BL, (VECTOR(int32_t, 2))(0x026A452BL, 0x35381FEAL), 0x35381FEAL);
        VECTOR(int32_t, 2) l_583 = (VECTOR(int32_t, 2))((-1L), (-1L));
        VECTOR(int32_t, 2) l_584 = (VECTOR(int32_t, 2))((-6L), 0x45CD0409L);
        uint32_t l_606 = 1UL;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 6; k++)
                    l_403[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 4; i++)
            l_436[i] = &p_1390->g_209;
        (*l_272) = l_273;
        for (p_1390->g_192.f2 = 28; (p_1390->g_192.f2 != 44); ++p_1390->g_192.f2)
        { /* block id: 110 */
            uint8_t l_292 = 0x1AL;
            uint64_t *l_303 = &p_1390->g_90;
            int64_t l_307 = 0L;
            VECTOR(int64_t, 8) l_352 = (VECTOR(int64_t, 8))((-8L), (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x17F7A9C5BF5BF566L), 0x17F7A9C5BF5BF566L), 0x17F7A9C5BF5BF566L, (-8L), 0x17F7A9C5BF5BF566L);
            VECTOR(uint8_t, 16) l_360 = (VECTOR(uint8_t, 16))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 8UL), 8UL), 8UL, 246UL, 8UL, (VECTOR(uint8_t, 2))(246UL, 8UL), (VECTOR(uint8_t, 2))(246UL, 8UL), 246UL, 8UL, 246UL, 8UL);
            VECTOR(uint16_t, 16) l_367 = (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), 0UL), 0UL, 65528UL, 0UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), (VECTOR(uint16_t, 2))(65528UL, 0UL), 65528UL, 0UL, 65528UL, 0UL);
            int32_t l_381[2];
            uint32_t *l_407 = &p_1390->g_192.f2;
            uint32_t **l_423 = &l_407;
            uint64_t *l_433 = &p_1390->g_209;
            int i;
            for (i = 0; i < 2; i++)
                l_381[i] = 0x42C94C3DL;
            p_1390->g_252.x &= (safe_lshift_func_int16_t_s_s((-4L), 11));
        }
        if ((((p_1390->g_439 ^= ((+((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_434.s6234643402071153)))).s7) & (((*l_435) = func_86(p_85, p_1390)) == p_1390->g_437))) >= (((*l_441) = l_440[6]) == (void*)0)) < p_1390->g_235.s4))
        { /* block id: 192 */
            uint16_t l_442 = 0x3EDBL;
            int32_t l_468[6][4] = {{0x6FEA07EEL,1L,0x6FEA07EEL,0x6FEA07EEL},{0x6FEA07EEL,1L,0x6FEA07EEL,0x6FEA07EEL},{0x6FEA07EEL,1L,0x6FEA07EEL,0x6FEA07EEL},{0x6FEA07EEL,1L,0x6FEA07EEL,0x6FEA07EEL},{0x6FEA07EEL,1L,0x6FEA07EEL,0x6FEA07EEL},{0x6FEA07EEL,1L,0x6FEA07EEL,0x6FEA07EEL}};
            VECTOR(int32_t, 16) l_498 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x18DF06C3L), 0x18DF06C3L), 0x18DF06C3L, 8L, 0x18DF06C3L, (VECTOR(int32_t, 2))(8L, 0x18DF06C3L), (VECTOR(int32_t, 2))(8L, 0x18DF06C3L), 8L, 0x18DF06C3L, 8L, 0x18DF06C3L);
            uint32_t l_528 = 0x45AFF6BBL;
            VECTOR(uint16_t, 2) l_567 = (VECTOR(uint16_t, 2))(65535UL, 0x16E2L);
            uint16_t l_609 = 0x86F7L;
            int i, j;
            if (l_442)
            { /* block id: 193 */
                int64_t l_443 = 0x24B3796D65741BCCL;
                uint32_t ***l_446[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_451 = (void*)0;
                int32_t l_463[1];
                VECTOR(int32_t, 2) l_497 = (VECTOR(int32_t, 2))(0x4CEC2F5AL, 0x3F84ABFEL);
                int i;
                for (i = 0; i < 1; i++)
                    l_463[i] = (-5L);
                l_443 = (*l_273);
                if (p_1390->g_75)
                { /* block id: 195 */
                    for (l_393 = 0; (l_393 >= (-23)); l_393 = safe_sub_func_int8_t_s_s(l_393, 7))
                    { /* block id: 198 */
                        uint32_t **l_448[9][8][3] = {{{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409}},{{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409}},{{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409}},{{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409}},{{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409}},{{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409}},{{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409}},{{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409}},{{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409},{&p_1390->g_409,&p_1390->g_409,&p_1390->g_409}}};
                        uint32_t ***l_447 = &l_448[8][5][2];
                        int32_t *l_449 = &l_379[4];
                        int32_t *l_450 = &l_330;
                        int i, j, k;
                        (*l_450) = ((*l_449) = (((l_447 = l_446[7]) == (void*)0) >= 0x2AL));
                    }
                    (*l_272) = &p_1390->g_31;
                }
                else
                { /* block id: 204 */
                    uint32_t l_465 = 4294967295UL;
                    int32_t l_469 = 0x440D58F6L;
                    int32_t l_470[4];
                    int32_t *l_474[10][3][8] = {{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}},{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}},{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}},{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}},{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}},{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}},{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}},{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}},{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}},{{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]},{&l_379[0],(void*)0,&l_463[0],&p_1390->g_2[0],&l_468[1][2],&l_468[1][2],&p_1390->g_2[0],&l_463[0]}}};
                    uint32_t **l_481 = &p_1390->g_409;
                    uint32_t ***l_480 = &l_481;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_470[i] = 0L;
                    if ((!(((FAKE_DIVERGE(p_1390->local_1_offset, get_local_id(1), 10) && 0xD4L) != (&l_379[3] != ((*l_272) = l_451))) , (safe_lshift_func_int8_t_s_u(p_1390->g_235.s1, 2)))))
                    { /* block id: 206 */
                        int32_t *l_454 = &l_379[1];
                        int32_t *l_455 = (void*)0;
                        int32_t *l_456 = &l_379[7];
                        int32_t *l_457 = (void*)0;
                        int32_t l_458 = 2L;
                        int32_t *l_459 = &p_1390->g_31;
                        int32_t *l_460 = &l_379[0];
                        int32_t *l_461 = &l_379[6];
                        int32_t *l_462 = &l_379[6];
                        int32_t *l_464[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_464[i] = &l_330;
                        --l_465;
                        (*l_454) = 1L;
                        l_471++;
                    }
                    else
                    { /* block id: 210 */
                        int16_t l_475 = 0x656CL;
                        int32_t l_476 = 0L;
                        uint64_t l_477 = 0xDC59C0B0D1B0B12AL;
                        l_451 = ((*l_272) = &l_470[1]);
                        l_474[2][1][6] = &l_463[0];
                        --l_477;
                    }
                    l_330 = ((0x9EL < (l_480 != p_1390->g_482)) || p_1390->g_30[6][5]);
                    for (p_1390->g_112 = 0; (p_1390->g_112 <= 31); p_1390->g_112++)
                    { /* block id: 219 */
                        uint64_t **l_510 = &l_302;
                        uint32_t l_511 = 0xDB8CD359L;
                        l_497.x = (((((1L > ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(l_442, 5)), (safe_rshift_func_uint8_t_u_u(248UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(3UL, ((VECTOR(uint8_t, 4))(p_1390->g_492.wyxw)), ((safe_div_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(l_497.xxyyxyyx)).s6364035000360762, ((VECTOR(int32_t, 8))(l_498.sccbcb501)).s7242224106550026))).se > l_499), (((l_498.s0 == (p_1390->g_492.z <= (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1390->global_2_offset, get_global_id(2), 10), (safe_sub_func_int8_t_s_s((((safe_add_func_int16_t_s_s(p_1390->g_comm_values[p_1390->tid], (safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((((p_85 != ((*l_510) = &p_1390->g_90)) ^ 0x1AL) | 0L) | l_498.s9), FAKE_DIVERGE(p_1390->global_0_offset, get_global_id(0), 10))) <= p_1390->g_209), FAKE_DIVERGE(p_1390->global_2_offset, get_global_id(2), 10))))) & 0x7AEFL) , 9L), 9UL)))))) && l_498.s2) > p_1390->g_69))) <= l_468[3][3]), 0x0F1FF64BL)) < 8UL), ((VECTOR(uint8_t, 4))(0xC7L)), ((VECTOR(uint8_t, 4))(1UL)), 0x39L, 1UL)).s6, ((VECTOR(uint8_t, 2))(5UL)), 0xB4L)).w)))) <= l_442)) & p_1390->g_235.s1) && p_1390->g_31) != p_1390->g_192.f6) , p_1390->g_2[0]);
                        (*l_272) = &l_463[0];
                        l_511--;
                        return &p_1390->g_47;
                    }
                    if ((atomic_inc(&p_1390->g_atomic_input[97 * get_linear_group_id() + 50]) == 2))
                    { /* block id: 227 */
                        VECTOR(int16_t, 8) l_514 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x14FEL), 0x14FEL), 0x14FEL, 1L, 0x14FEL);
                        VECTOR(uint16_t, 16) l_515 = (VECTOR(uint16_t, 16))(0xC93FL, (VECTOR(uint16_t, 4))(0xC93FL, (VECTOR(uint16_t, 2))(0xC93FL, 0x2696L), 0x2696L), 0x2696L, 0xC93FL, 0x2696L, (VECTOR(uint16_t, 2))(0xC93FL, 0x2696L), (VECTOR(uint16_t, 2))(0xC93FL, 0x2696L), 0xC93FL, 0x2696L, 0xC93FL, 0x2696L);
                        VECTOR(int32_t, 16) l_516 = (VECTOR(int32_t, 16))(0x2FB88624L, (VECTOR(int32_t, 4))(0x2FB88624L, (VECTOR(int32_t, 2))(0x2FB88624L, 0x0A91AA0BL), 0x0A91AA0BL), 0x0A91AA0BL, 0x2FB88624L, 0x0A91AA0BL, (VECTOR(int32_t, 2))(0x2FB88624L, 0x0A91AA0BL), (VECTOR(int32_t, 2))(0x2FB88624L, 0x0A91AA0BL), 0x2FB88624L, 0x0A91AA0BL, 0x2FB88624L, 0x0A91AA0BL);
                        int32_t l_517 = 0x3FE6B611L;
                        uint32_t l_518 = 1UL;
                        uint64_t l_519[3][3][1];
                        int32_t *l_520 = (void*)0;
                        int32_t *l_521 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_519[i][j][k] = 18446744073709551609UL;
                            }
                        }
                        l_517 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_514.s11320037)).s21, ((VECTOR(uint16_t, 8))(l_515.s55bc4261)).s25))).xyxyyxyx, ((VECTOR(int32_t, 16))(l_516.sfd9bed3464a58d5e)).hi))).lo)).x;
                        l_519[0][1][0] &= l_518;
                        l_521 = l_520;
                        unsigned int result = 0;
                        result += l_514.s7;
                        result += l_514.s6;
                        result += l_514.s5;
                        result += l_514.s4;
                        result += l_514.s3;
                        result += l_514.s2;
                        result += l_514.s1;
                        result += l_514.s0;
                        result += l_515.sf;
                        result += l_515.se;
                        result += l_515.sd;
                        result += l_515.sc;
                        result += l_515.sb;
                        result += l_515.sa;
                        result += l_515.s9;
                        result += l_515.s8;
                        result += l_515.s7;
                        result += l_515.s6;
                        result += l_515.s5;
                        result += l_515.s4;
                        result += l_515.s3;
                        result += l_515.s2;
                        result += l_515.s1;
                        result += l_515.s0;
                        result += l_516.sf;
                        result += l_516.se;
                        result += l_516.sd;
                        result += l_516.sc;
                        result += l_516.sb;
                        result += l_516.sa;
                        result += l_516.s9;
                        result += l_516.s8;
                        result += l_516.s7;
                        result += l_516.s6;
                        result += l_516.s5;
                        result += l_516.s4;
                        result += l_516.s3;
                        result += l_516.s2;
                        result += l_516.s1;
                        result += l_516.s0;
                        result += l_517;
                        result += l_518;
                        int l_519_i0, l_519_i1, l_519_i2;
                        for (l_519_i0 = 0; l_519_i0 < 3; l_519_i0++) {
                            for (l_519_i1 = 0; l_519_i1 < 3; l_519_i1++) {
                                for (l_519_i2 = 0; l_519_i2 < 1; l_519_i2++) {
                                    result += l_519[l_519_i0][l_519_i1][l_519_i2];
                                }
                            }
                        }
                        atomic_add(&p_1390->g_special_values[97 * get_linear_group_id() + 50], result);
                    }
                    else
                    { /* block id: 231 */
                        (1 + 1);
                    }
                }
            }
            else
            { /* block id: 235 */
                int32_t l_525 = 0x6F740F60L;
                int32_t l_526 = 0x19414B95L;
                uint16_t l_531 = 0x9E6FL;
                for (p_1390->g_209 = 16; (p_1390->g_209 >= 23); p_1390->g_209 = safe_add_func_int8_t_s_s(p_1390->g_209, 7))
                { /* block id: 238 */
                    int32_t *l_524[3];
                    int64_t l_527 = 0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_524[i] = (void*)0;
                    if ((*l_273))
                        break;
                    ++l_528;
                    (*l_272) = (*l_272);
                    if (l_531)
                        continue;
                }
                (*l_272) = (*l_272);
            }
            for (p_1390->g_192.f5 = 5; (p_1390->g_192.f5 >= 0); p_1390->g_192.f5 = safe_sub_func_int8_t_s_s(p_1390->g_192.f5, 7))
            { /* block id: 248 */
                int8_t l_548 = 9L;
                VECTOR(int32_t, 16) l_577 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x687436C3L), 0x687436C3L), 0x687436C3L, 9L, 0x687436C3L, (VECTOR(int32_t, 2))(9L, 0x687436C3L), (VECTOR(int32_t, 2))(9L, 0x687436C3L), 9L, 0x687436C3L, 9L, 0x687436C3L);
                VECTOR(int32_t, 8) l_579 = (VECTOR(int32_t, 8))(0x58B463F5L, (VECTOR(int32_t, 4))(0x58B463F5L, (VECTOR(int32_t, 2))(0x58B463F5L, 0x4B823477L), 0x4B823477L), 0x4B823477L, 0x58B463F5L, 0x4B823477L);
                int32_t l_605 = 0x3F7F1AF2L;
                int i;
                if (l_528)
                    break;
                if (l_528)
                    break;
                for (p_1390->g_31 = 0; (p_1390->g_31 >= 4); p_1390->g_31 = safe_add_func_int64_t_s_s(p_1390->g_31, 3))
                { /* block id: 253 */
                    int16_t *l_540 = &p_1390->g_72;
                    uint16_t *l_543 = &l_442;
                    int32_t l_546 = 0x42DD4F81L;
                    int32_t *l_547 = &p_1390->g_202;
                    int32_t *l_557 = (void*)0;
                    int32_t *l_558 = (void*)0;
                    int32_t *l_559[1][10] = {{&p_1390->g_560[3],&p_1390->g_560[3],&p_1390->g_560[3],&p_1390->g_560[3],&p_1390->g_560[3],&p_1390->g_560[3],&p_1390->g_560[3],&p_1390->g_560[3],&p_1390->g_560[3],&p_1390->g_560[3]}};
                    int32_t l_561 = (-8L);
                    int32_t *l_562 = &l_546;
                    uint32_t **l_589 = &p_1390->g_409;
                    VECTOR(int16_t, 8) l_600 = (VECTOR(int16_t, 8))(0x0D10L, (VECTOR(int16_t, 4))(0x0D10L, (VECTOR(int16_t, 2))(0x0D10L, 1L), 1L), 1L, 0x0D10L, 1L);
                    uint8_t *l_601 = (void*)0;
                    uint8_t *l_602 = &p_1390->g_222;
                    int32_t *l_604[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    (*l_562) = (((safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s(0x3D22L, ((*l_540) = (*l_273)))), (((safe_lshift_func_uint16_t_u_s((--(*l_543)), (l_546 > ((l_561 &= ((((((*l_547) = (*l_273)) , (l_548 , (((*p_1390->g_409) , (0UL | ((p_1390->g_363.y = ((((VECTOR(int16_t, 2))(p_1390->g_549.xy)).hi ^ ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((0x51L && (((**l_441) |= ((safe_add_func_int64_t_s_s((l_498.sa , (*l_273)), l_554)) < p_1390->g_555)) , 0UL)), p_1390->g_556, 0xC443L, 0x0FC3L, ((VECTOR(uint16_t, 4))(8UL)))).s3570463360420477)).s8) ^ p_1390->g_73)) == p_1390->g_2[0]))) != 7L))) && (*p_1390->g_437)) , p_1390->g_156) ^ 0UL)) , l_548)))) != (*l_273)) > 0x19703A43L))) && l_548) > l_546);
                    l_379[6] = ((l_605 = (((*l_543) = (safe_mul_func_uint16_t_u_u(((p_1390->g_69 > ((((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(l_565.s5180)), ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 0xBF52L)), 65533UL, 7UL)).yyxwxzwzxwzzwzzy, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(0x157EL, 6UL, 1UL, 65535UL)).even, ((VECTOR(uint16_t, 4))(p_1390->g_566.s4a9f)).lo))).xxyy, (uint16_t)l_468[5][3])))))).even, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(l_567.xxyyyyxyxxyxyxxx)).s86ce, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(p_1390->g_568.yxyx)).yyzxxwzy, ((VECTOR(uint16_t, 8))(p_1390->g_569.zzwxywxw))))))).hi, ((VECTOR(uint16_t, 16))(p_1390->g_570.s310d228cdd0f56cf)).se0cd))), ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(l_571.se9e5ff064decce69)).s348f, (uint16_t)(safe_mod_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((p_1390->g_581.sb = (l_468[4][3] = (((VECTOR(uint32_t, 2))(0x57384740L, 0x9BFCBE6DL)).lo | (((FAKE_DIVERGE(p_1390->group_2_offset, get_group_id(2), 10) == ((((*l_602) = (((*l_562) &= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 2))(l_576.yx)), 2L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_577.s490e3b8627489f0f)).s7a66)))))).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1390->g_578.s60)))))).yxyy)).zzywyyzy)).even, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_579.s50043612)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(p_1390->g_580.s46)).yxxyyyxxxyyyyxyy, (int32_t)l_548))))).s92)).yyxyxxxy, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_1390->g_581.se1d25344)).s21)).yyxyxxyxyxxxyxxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1390->g_582.ywww)).even)).yxyyyyyxyyyxyyxx, ((VECTOR(int32_t, 16))(l_583.xyxxyxxyxyxyxxxy))))).s67d1, ((VECTOR(int32_t, 2))(0L, 0x1AA21408L)).yyyx))).xxywwywz))).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1707EE62L, (-1L))), 0x62D0FC03L, (-9L)))))).lo, ((VECTOR(int32_t, 8))(l_584.yyxxxxxx)).s31))))).yyxx))).w) & (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))(0xC2AF0CBCL, ((safe_add_func_uint8_t_u_u((p_1390->g_268[5].f6 , (l_589 != ((l_579.s0 , ((p_1390->g_364.z , (((**l_435) = (safe_lshift_func_int8_t_s_u((5UL < (safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((FAKE_DIVERGE(p_1390->group_1_offset, get_group_id(1), 10) && (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_600.s04121655)).s6511241761737254)).s5, (-1L), 0x6906L, 5L)).z, ((*l_540) = ((l_567.y , p_1390->g_comm_values[p_1390->tid]) && l_579.s6)))), l_577.s8))), FAKE_DIVERGE(p_1390->local_1_offset, get_local_id(1), 10))), 5))), p_1390->g_580.s2))) | (*l_273))) <= (*p_1390->g_409))) , (void*)0))), FAKE_DIVERGE(p_1390->local_2_offset, get_local_id(2), 10))) & 0x2DEBL), 4294967295UL, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(0x51007DE2L)), 0x3D6CFFB1L, l_579.s7, l_561, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 4))(0x5CBC936BL)))).sabf8, ((VECTOR(uint32_t, 4))(4294967293UL))))).wyzzzxxwyzzxwzxz, ((VECTOR(uint32_t, 16))(4294967293UL))))).sd, p_1390->g_580.s4)))) <= p_1390->g_439) , l_603)) > p_1390->g_555) ^ l_442)))), (*p_1390->g_409))) , p_1390->g_549.x) > p_1390->g_364.x), l_442))))), 0xAEB7L, ((VECTOR(uint16_t, 4))(8UL)), 0x10E1L, 1UL, 0UL)).s70))).yyxyxyyxyxxxxxyx))).s746e))), ((VECTOR(uint16_t, 4))(0x527BL))))).w ^ l_528) < l_567.x)) && p_1390->g_492.y), p_1390->g_192.f5))) < 0xF143L)) , 0x6B2C99FEL);
                    l_606--;
                    --l_609;
                }
            }
        }
        else
        { /* block id: 274 */
            int32_t *l_614 = (void*)0;
            int32_t *l_615 = (void*)0;
            l_383.s7 = (safe_rshift_func_uint8_t_u_s(0x55L, 2));
        }
        if ((atomic_inc(&p_1390->l_atomic_input[32]) == 2))
        { /* block id: 278 */
            union U1 *l_616 = (void*)0;
            union U1 l_618[8] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
            union U1 *l_617 = &l_618[5];
            int64_t l_619 = (-9L);
            int16_t l_620 = 0x4929L;
            uint8_t l_621 = 254UL;
            VECTOR(int32_t, 2) l_624 = (VECTOR(int32_t, 2))(0L, 0L);
            int i;
            l_617 = l_616;
            l_621--;
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_624.yyyyxyyy)).s14)).yyyyxxyx)).s1)
            { /* block id: 281 */
                int32_t l_625[4][7] = {{0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL},{0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL},{0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL},{0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL,0x2E6635BAL}};
                int64_t l_653 = (-7L);
                VECTOR(int32_t, 2) l_654 = (VECTOR(int32_t, 2))((-1L), (-1L));
                uint64_t l_655 = 0UL;
                int i, j;
                for (l_625[1][6] = 0; (l_625[1][6] == 25); l_625[1][6] = safe_add_func_int32_t_s_s(l_625[1][6], 7))
                { /* block id: 284 */
                    VECTOR(uint64_t, 16) l_628 = (VECTOR(uint64_t, 16))(0x2001138077C11F9DL, (VECTOR(uint64_t, 4))(0x2001138077C11F9DL, (VECTOR(uint64_t, 2))(0x2001138077C11F9DL, 0xB486FC78488E4818L), 0xB486FC78488E4818L), 0xB486FC78488E4818L, 0x2001138077C11F9DL, 0xB486FC78488E4818L, (VECTOR(uint64_t, 2))(0x2001138077C11F9DL, 0xB486FC78488E4818L), (VECTOR(uint64_t, 2))(0x2001138077C11F9DL, 0xB486FC78488E4818L), 0x2001138077C11F9DL, 0xB486FC78488E4818L, 0x2001138077C11F9DL, 0xB486FC78488E4818L);
                    uint16_t l_629 = 0UL;
                    int64_t l_632 = 0x5F7D274C05E1239BL;
                    uint64_t l_633 = 9UL;
                    VECTOR(uint32_t, 2) l_634 = (VECTOR(uint32_t, 2))(0xE029ECC4L, 0xBF223D37L);
                    VECTOR(uint32_t, 2) l_635 = (VECTOR(uint32_t, 2))(0x21C5AC1EL, 4294967291UL);
                    VECTOR(uint32_t, 4) l_636 = (VECTOR(uint32_t, 4))(0x8AD6E88CL, (VECTOR(uint32_t, 2))(0x8AD6E88CL, 4294967295UL), 4294967295UL);
                    uint8_t l_637 = 0UL;
                    VECTOR(uint32_t, 16) l_638 = (VECTOR(uint32_t, 16))(0x3E611257L, (VECTOR(uint32_t, 4))(0x3E611257L, (VECTOR(uint32_t, 2))(0x3E611257L, 0x2C352FB0L), 0x2C352FB0L), 0x2C352FB0L, 0x3E611257L, 0x2C352FB0L, (VECTOR(uint32_t, 2))(0x3E611257L, 0x2C352FB0L), (VECTOR(uint32_t, 2))(0x3E611257L, 0x2C352FB0L), 0x3E611257L, 0x2C352FB0L, 0x3E611257L, 0x2C352FB0L);
                    VECTOR(uint32_t, 2) l_639 = (VECTOR(uint32_t, 2))(0x2D45C841L, 0x6ADD8DBBL);
                    uint8_t l_640 = 0x44L;
                    int64_t l_641 = 0x1CE466980854B28FL;
                    uint8_t l_642[10][8][1] = {{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}},{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}},{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}},{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}},{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}},{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}},{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}},{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}},{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}},{{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L},{0x21L}}};
                    VECTOR(uint32_t, 8) l_643 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xA7389248L), 0xA7389248L), 0xA7389248L, 1UL, 0xA7389248L);
                    int32_t l_644 = 0x1A1F4A9DL;
                    uint64_t l_645[2][8];
                    uint32_t l_646 = 0xAEB39F1EL;
                    int32_t l_648 = 0x2C00C248L;
                    int32_t *l_647 = &l_648;
                    int32_t *l_649[3];
                    int32_t *l_650[6][5] = {{&l_648,&l_648,&l_648,&l_648,&l_648},{&l_648,&l_648,&l_648,&l_648,&l_648},{&l_648,&l_648,&l_648,&l_648,&l_648},{&l_648,&l_648,&l_648,&l_648,&l_648},{&l_648,&l_648,&l_648,&l_648,&l_648},{&l_648,&l_648,&l_648,&l_648,&l_648}};
                    int32_t *l_651 = &l_648;
                    int32_t *l_652 = &l_648;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_645[i][j] = 18446744073709551606UL;
                    }
                    for (i = 0; i < 3; i++)
                        l_649[i] = (void*)0;
                    l_629 = (l_624.y = l_628.s3);
                    for (l_629 = 0; (l_629 == 56); l_629++)
                    { /* block id: 289 */
                        l_624.x ^= 0x03606F94L;
                        l_624.y |= 1L;
                    }
                    l_647 = ((l_646 |= (l_632 , (l_633 , ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(4294967295UL, 4294967290UL)))), ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(l_634.xy)).xxxyyyyy, ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(l_635.yyxyxyyx)).s17, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(l_636.wyywyxyzxwywyzzx)).scd95, (uint32_t)(l_637 , 4UL)))), ((VECTOR(uint32_t, 4))(GROUP_DIVERGE(2, 1), 4294967286UL, 1UL, 0xA47AF7AFL)))).s32))).yyxxxxxy))), ((VECTOR(uint32_t, 2))(l_638.s22)), 4294967295UL, 4294967295UL, 0xD74E13CDL, 0x64844782L)).s88)).xyyyyxxy)).lo, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(l_639.yyyyxxxx)).s50, (uint32_t)(l_640 , (l_641 , l_642[4][1][0]))))).yyxyxxxy)).lo, ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(0xD374DCD0L, 0xD49D17FAL)), ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_643.s2040)))).wwzzwyzx)).s4224204503544576, ((VECTOR(uint32_t, 8))(l_644, 0x4F546B1CL, (l_645[1][7] = GROUP_DIVERGE(0, 1)), 0x1E07EBCDL, 4294967294UL, ((VECTOR(uint32_t, 2))(4294967292UL)), 0x9BD36417L)).s0512546416466232))).sdb))).xyxxxxxx, ((VECTOR(uint32_t, 8))(4294967294UL))))).s1213347730361343)).s3697, ((VECTOR(uint32_t, 4))(0xB1BD36C6L))))).xxwzxwxwyzxyxxzw, ((VECTOR(uint32_t, 16))(0x3F184806L))))), ((VECTOR(uint32_t, 16))(4294967289UL)), ((VECTOR(uint32_t, 16))(1UL))))).s24f5))).z))) , l_647);
                    l_652 = (l_651 = (l_650[3][4] = l_649[1]));
                }
                l_624.x = l_653;
                --l_655;
                l_624.y ^= ((VECTOR(int32_t, 2))(0L, (-1L))).even;
            }
            else
            { /* block id: 303 */
                VECTOR(int32_t, 2) l_658 = (VECTOR(int32_t, 2))(0x136FD075L, 6L);
                VECTOR(int32_t, 8) l_659 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-1L)), (-1L)), (-1L), (-9L), (-1L));
                uint32_t l_660 = 0xB1E46F9AL;
                VECTOR(int32_t, 16) l_661 = (VECTOR(int32_t, 16))(0x663F4FEAL, (VECTOR(int32_t, 4))(0x663F4FEAL, (VECTOR(int32_t, 2))(0x663F4FEAL, (-9L)), (-9L)), (-9L), 0x663F4FEAL, (-9L), (VECTOR(int32_t, 2))(0x663F4FEAL, (-9L)), (VECTOR(int32_t, 2))(0x663F4FEAL, (-9L)), 0x663F4FEAL, (-9L), 0x663F4FEAL, (-9L));
                VECTOR(int32_t, 8) l_662 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                VECTOR(int32_t, 16) l_663 = (VECTOR(int32_t, 16))(0x0C7769A3L, (VECTOR(int32_t, 4))(0x0C7769A3L, (VECTOR(int32_t, 2))(0x0C7769A3L, 0x4B36CF08L), 0x4B36CF08L), 0x4B36CF08L, 0x0C7769A3L, 0x4B36CF08L, (VECTOR(int32_t, 2))(0x0C7769A3L, 0x4B36CF08L), (VECTOR(int32_t, 2))(0x0C7769A3L, 0x4B36CF08L), 0x0C7769A3L, 0x4B36CF08L, 0x0C7769A3L, 0x4B36CF08L);
                VECTOR(int32_t, 16) l_664 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int32_t, 2))(3L, 0L), (VECTOR(int32_t, 2))(3L, 0L), 3L, 0L, 3L, 0L);
                VECTOR(int32_t, 4) l_665 = (VECTOR(int32_t, 4))(0x68E3A580L, (VECTOR(int32_t, 2))(0x68E3A580L, 1L), 1L);
                VECTOR(int32_t, 16) l_666 = (VECTOR(int32_t, 16))(0x63899AA1L, (VECTOR(int32_t, 4))(0x63899AA1L, (VECTOR(int32_t, 2))(0x63899AA1L, 0x3DB31B19L), 0x3DB31B19L), 0x3DB31B19L, 0x63899AA1L, 0x3DB31B19L, (VECTOR(int32_t, 2))(0x63899AA1L, 0x3DB31B19L), (VECTOR(int32_t, 2))(0x63899AA1L, 0x3DB31B19L), 0x63899AA1L, 0x3DB31B19L, 0x63899AA1L, 0x3DB31B19L);
                int8_t l_667 = 0x0DL;
                VECTOR(int8_t, 2) l_668 = (VECTOR(int8_t, 2))(1L, 4L);
                int32_t l_669 = 0x398BD21CL;
                int16_t l_670 = 0x160DL;
                uint8_t l_671[3];
                VECTOR(int16_t, 8) l_672 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x5A19L), 0x5A19L), 0x5A19L, 0L, 0x5A19L);
                VECTOR(uint16_t, 2) l_673 = (VECTOR(uint16_t, 2))(1UL, 3UL);
                VECTOR(uint16_t, 2) l_674 = (VECTOR(uint16_t, 2))(0UL, 1UL);
                VECTOR(uint16_t, 16) l_675 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xCE8DL), 0xCE8DL), 0xCE8DL, 65535UL, 0xCE8DL, (VECTOR(uint16_t, 2))(65535UL, 0xCE8DL), (VECTOR(uint16_t, 2))(65535UL, 0xCE8DL), 65535UL, 0xCE8DL, 65535UL, 0xCE8DL);
                VECTOR(uint16_t, 4) l_676 = (VECTOR(uint16_t, 4))(0xC566L, (VECTOR(uint16_t, 2))(0xC566L, 0xDC5FL), 0xDC5FL);
                VECTOR(int32_t, 2) l_677 = (VECTOR(int32_t, 2))(0x30B8BAFAL, (-1L));
                VECTOR(int32_t, 4) l_678 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L);
                VECTOR(int32_t, 8) l_679 = (VECTOR(int32_t, 8))(0x79F708D6L, (VECTOR(int32_t, 4))(0x79F708D6L, (VECTOR(int32_t, 2))(0x79F708D6L, 0L), 0L), 0L, 0x79F708D6L, 0L);
                int64_t l_680 = 0L;
                VECTOR(int32_t, 16) l_684 = (VECTOR(int32_t, 16))(0x03EFC77CL, (VECTOR(int32_t, 4))(0x03EFC77CL, (VECTOR(int32_t, 2))(0x03EFC77CL, 0x516EBBFCL), 0x516EBBFCL), 0x516EBBFCL, 0x03EFC77CL, 0x516EBBFCL, (VECTOR(int32_t, 2))(0x03EFC77CL, 0x516EBBFCL), (VECTOR(int32_t, 2))(0x03EFC77CL, 0x516EBBFCL), 0x03EFC77CL, 0x516EBBFCL, 0x03EFC77CL, 0x516EBBFCL);
                int32_t l_685 = 5L;
                int i;
                for (i = 0; i < 3; i++)
                    l_671[i] = 250UL;
                l_680 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_658.xxxy)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(l_659.s6604)), (int32_t)l_660))).xzyzxwzz))).s74, ((VECTOR(int32_t, 16))(l_661.s8bd9a4a8366d3461)).s7c, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x15F5D117L, 0x1D4DF5E7L)).yyyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_662.s26352644)).odd)), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_663.sb31f)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_664.s4c5a24c0)).s52)), (l_624.y = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(l_665.zw)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_666.s8d7401989ce4d650)).s0f)), 0x60C41C21L)))).even))).xyyyyxyxyxyyyxxy)).s5), ((VECTOR(int32_t, 4))((l_624.y = l_667), (-5L), 0x0663AFFDL, 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x617D80D7L, 0x3E8876B2L)))).xyxx)), ((VECTOR(int32_t, 2))(0x52ED03CAL, 0x21DCA011L)), 0x57C7D0CEL, 0L, 0x49630B18L)).seb))).xxxx))).even))), 0x42728992L, ((VECTOR(int32_t, 4))((l_624.y = (((l_618[5].f4.f5 = ((VECTOR(int8_t, 4))(l_668.yyxy)).y) , l_669) , l_670)), 0x1AC4E25DL, 9L, 0L)), l_671[2], 0x222BF49CL, 0x4273E09FL, 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(l_672.s5362665275543146)), ((VECTOR(int16_t, 2))(0x25D6L, 0x104AL)).yxyyyyyyyxxyxxyy))).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_673.xy)).lo, GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_674.xyyy)).lo)).yxxx, ((VECTOR(uint16_t, 2))(l_675.s4f)).yxxy))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(2UL, 0xD888L)))), ((VECTOR(uint16_t, 8))(l_676.wyyxzwxw)))).hi))))).s05)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_677.xxyxxyyy)))).s23)), (-10L))).even, ((VECTOR(int32_t, 4))(l_678.xwyy)).zzxyxwzz, ((VECTOR(int32_t, 16))(l_679.s2457240437075070)).odd))).s56))))).yxyyxxyy)).s0;
                for (l_659.s0 = (-10); (l_659.s0 != 2); l_659.s0 = safe_add_func_int32_t_s_s(l_659.s0, 3))
                { /* block id: 311 */
                    int32_t l_683 = 0x7921809FL;
                    l_624.x |= l_683;
                }
                l_685 = (l_624.x = l_684.s3);
            }
            unsigned int result = 0;
            int l_618_i0;
            for (l_618_i0 = 0; l_618_i0 < 8; l_618_i0++) {
                result += l_618[l_618_i0].f0;
                result += l_618[l_618_i0].f1.f0;
                result += l_618[l_618_i0].f1.f1;
                result += l_618[l_618_i0].f1.f2;
                result += l_618[l_618_i0].f1.f3;
                result += l_618[l_618_i0].f1.f4;
                result += l_618[l_618_i0].f1.f5;
                result += l_618[l_618_i0].f1.f6;
                result += l_618[l_618_i0].f2;
                result += l_618[l_618_i0].f3;
                result += l_618[l_618_i0].f4.f0;
                result += l_618[l_618_i0].f4.f1;
                result += l_618[l_618_i0].f4.f2;
                result += l_618[l_618_i0].f4.f3;
                result += l_618[l_618_i0].f4.f4;
                result += l_618[l_618_i0].f4.f5;
                result += l_618[l_618_i0].f4.f6;
            }
            result += l_619;
            result += l_620;
            result += l_621;
            result += l_624.y;
            result += l_624.x;
            atomic_add(&p_1390->l_special_values[32], result);
        }
        else
        { /* block id: 317 */
            (1 + 1);
        }
    }
    for (p_1390->g_222 = 0; (p_1390->g_222 > 28); ++p_1390->g_222)
    { /* block id: 323 */
        int64_t l_829 = 0L;
        if ((atomic_inc(&p_1390->l_atomic_input[62]) == 8))
        { /* block id: 325 */
            int32_t l_688 = (-10L);
            uint16_t l_822[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_822[i][j] = 0xE529L;
            }
            for (l_688 = (-7); (l_688 >= (-21)); l_688 = safe_sub_func_uint8_t_u_u(l_688, 1))
            { /* block id: 328 */
                int16_t l_691 = 1L;
                uint8_t l_692 = 250UL;
                int32_t l_775 = (-8L);
                int32_t *l_774[1][1];
                int32_t *l_776 = &l_775;
                int64_t l_777[6] = {0x3617CDF598B78A64L,0x1AF3ACA5808949F9L,0x3617CDF598B78A64L,0x3617CDF598B78A64L,0x1AF3ACA5808949F9L,0x3617CDF598B78A64L};
                int32_t l_778[6];
                uint64_t l_779 = 0x33E8DC1A5C567966L;
                int32_t l_782 = (-3L);
                VECTOR(int8_t, 16) l_783 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x11L), 0x11L), 0x11L, 7L, 0x11L, (VECTOR(int8_t, 2))(7L, 0x11L), (VECTOR(int8_t, 2))(7L, 0x11L), 7L, 0x11L, 7L, 0x11L);
                VECTOR(int8_t, 16) l_784 = (VECTOR(int8_t, 16))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0x00L), 0x00L), 0x00L, 0x5EL, 0x00L, (VECTOR(int8_t, 2))(0x5EL, 0x00L), (VECTOR(int8_t, 2))(0x5EL, 0x00L), 0x5EL, 0x00L, 0x5EL, 0x00L);
                VECTOR(int8_t, 16) l_785 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                int32_t l_786 = 0x1049AABAL;
                VECTOR(int8_t, 4) l_787 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 2L), 2L);
                uint64_t l_788 = 0UL;
                VECTOR(int8_t, 4) l_789 = (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, 0x1AL), 0x1AL);
                VECTOR(int8_t, 4) l_790 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x69L), 0x69L);
                VECTOR(int8_t, 4) l_791 = (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x73L), 0x73L);
                VECTOR(int8_t, 16) l_792 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L), (VECTOR(int8_t, 2))((-1L), (-8L)), (VECTOR(int8_t, 2))((-1L), (-8L)), (-1L), (-8L), (-1L), (-8L));
                uint64_t l_793 = 1UL;
                uint32_t l_794 = 0xA158C89CL;
                VECTOR(int8_t, 2) l_795 = (VECTOR(int8_t, 2))(0x38L, 6L);
                VECTOR(uint64_t, 4) l_796 = (VECTOR(uint64_t, 4))(0xA269E97A347AA6C8L, (VECTOR(uint64_t, 2))(0xA269E97A347AA6C8L, 18446744073709551615UL), 18446744073709551615UL);
                uint16_t l_797 = 7UL;
                int64_t l_798 = 1L;
                VECTOR(int8_t, 8) l_799 = (VECTOR(int8_t, 8))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, (-1L)), (-1L)), (-1L), 0x70L, (-1L));
                VECTOR(int8_t, 4) l_800 = (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 4L), 4L);
                VECTOR(int8_t, 8) l_801 = (VECTOR(int8_t, 8))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 7L), 7L), 7L, 0x66L, 7L);
                VECTOR(int8_t, 16) l_802 = (VECTOR(int8_t, 16))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, 0x46L), 0x46L), 0x46L, 0x24L, 0x46L, (VECTOR(int8_t, 2))(0x24L, 0x46L), (VECTOR(int8_t, 2))(0x24L, 0x46L), 0x24L, 0x46L, 0x24L, 0x46L);
                VECTOR(int8_t, 2) l_803 = (VECTOR(int8_t, 2))(0L, 0x6AL);
                VECTOR(int8_t, 2) l_804 = (VECTOR(int8_t, 2))(1L, 0x40L);
                VECTOR(int8_t, 4) l_805 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x05L), 0x05L);
                VECTOR(int8_t, 2) l_806 = (VECTOR(int8_t, 2))((-4L), 0x07L);
                VECTOR(int8_t, 8) l_807 = (VECTOR(int8_t, 8))(0x54L, (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, 0x5DL), 0x5DL), 0x5DL, 0x54L, 0x5DL);
                VECTOR(int8_t, 4) l_808 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 4L), 4L);
                uint32_t l_809 = 2UL;
                VECTOR(int8_t, 2) l_810 = (VECTOR(int8_t, 2))(0x45L, (-1L));
                VECTOR(int8_t, 2) l_811 = (VECTOR(int8_t, 2))(2L, (-1L));
                VECTOR(int8_t, 8) l_812 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                VECTOR(int8_t, 8) l_813 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x00L), 0x00L), 0x00L, 0L, 0x00L);
                VECTOR(int8_t, 16) l_814 = (VECTOR(int8_t, 16))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x2CL), 0x2CL), 0x2CL, 4L, 0x2CL, (VECTOR(int8_t, 2))(4L, 0x2CL), (VECTOR(int8_t, 2))(4L, 0x2CL), 4L, 0x2CL, 4L, 0x2CL);
                VECTOR(int8_t, 4) l_815 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x15L), 0x15L);
                VECTOR(int8_t, 2) l_816 = (VECTOR(int8_t, 2))(0x4EL, 0x55L);
                int64_t l_817[9][2][8] = {{{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL},{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL}},{{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL},{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL}},{{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL},{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL}},{{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL},{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL}},{{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL},{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL}},{{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL},{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL}},{{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL},{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL}},{{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL},{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL}},{{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL},{5L,6L,(-4L),(-6L),0L,(-1L),(-6L),0x071251BFAD1D199CL}}};
                uint32_t l_818 = 1UL;
                int8_t l_819 = 1L;
                uint64_t l_820 = 0x93AA34EB67B606A1L;
                uint32_t l_821 = 7UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_774[i][j] = &l_775;
                }
                for (i = 0; i < 6; i++)
                    l_778[i] = 0x71E64A80L;
                if ((l_692 ^= l_691))
                { /* block id: 330 */
                    int32_t l_693 = (-1L);
                    uint8_t l_694 = 249UL;
                    int32_t l_695 = (-10L);
                    int8_t l_708 = 0x2AL;
                    int32_t l_749 = 0L;
                    uint8_t l_750 = 0UL;
                    l_694 ^= l_693;
                    if (l_695)
                    { /* block id: 332 */
                        int32_t l_696 = (-1L);
                        uint16_t l_697 = 0x948EL;
                        uint32_t l_698 = 0x81CBF738L;
                        uint16_t l_699 = 65528UL;
                        int32_t l_700 = 0x023218E8L;
                        uint64_t l_701 = 0x8C5764E5592034CDL;
                        l_698 &= (l_697 = l_696);
                        l_696 = (((VECTOR(uint32_t, 2))(1UL, 0UL)).odd , l_699);
                        l_701--;
                        l_696 = 0x763CBF6BL;
                    }
                    else
                    { /* block id: 338 */
                        int32_t l_704 = 0x7EC2F011L;
                        uint64_t l_705 = 0x141C56444DE7EC44L;
                        int64_t l_706 = 0x4D288834C03A364FL;
                        int8_t l_707 = 3L;
                        l_707 = (l_706 = (l_705 = (l_704 = 0x714DAAD2L)));
                    }
                    if (l_708)
                    { /* block id: 344 */
                        uint32_t l_709 = 4294967290UL;
                        int8_t l_710[1];
                        int8_t l_711 = 0x3AL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_710[i] = 0x26L;
                        l_711 &= ((l_708 &= l_709) , l_710[0]);
                    }
                    else
                    { /* block id: 347 */
                        int32_t l_713[8][9] = {{0x67622E2CL,(-1L),(-1L),0x67622E2CL,0x0F29E9B0L,0x3E97DDC9L,0x3E97DDC9L,0x0F29E9B0L,0x67622E2CL},{0x67622E2CL,(-1L),(-1L),0x67622E2CL,0x0F29E9B0L,0x3E97DDC9L,0x3E97DDC9L,0x0F29E9B0L,0x67622E2CL},{0x67622E2CL,(-1L),(-1L),0x67622E2CL,0x0F29E9B0L,0x3E97DDC9L,0x3E97DDC9L,0x0F29E9B0L,0x67622E2CL},{0x67622E2CL,(-1L),(-1L),0x67622E2CL,0x0F29E9B0L,0x3E97DDC9L,0x3E97DDC9L,0x0F29E9B0L,0x67622E2CL},{0x67622E2CL,(-1L),(-1L),0x67622E2CL,0x0F29E9B0L,0x3E97DDC9L,0x3E97DDC9L,0x0F29E9B0L,0x67622E2CL},{0x67622E2CL,(-1L),(-1L),0x67622E2CL,0x0F29E9B0L,0x3E97DDC9L,0x3E97DDC9L,0x0F29E9B0L,0x67622E2CL},{0x67622E2CL,(-1L),(-1L),0x67622E2CL,0x0F29E9B0L,0x3E97DDC9L,0x3E97DDC9L,0x0F29E9B0L,0x67622E2CL},{0x67622E2CL,(-1L),(-1L),0x67622E2CL,0x0F29E9B0L,0x3E97DDC9L,0x3E97DDC9L,0x0F29E9B0L,0x67622E2CL}};
                        int32_t *l_712[6][2] = {{&l_713[7][3],&l_713[7][3]},{&l_713[7][3],&l_713[7][3]},{&l_713[7][3],&l_713[7][3]},{&l_713[7][3],&l_713[7][3]},{&l_713[7][3],&l_713[7][3]},{&l_713[7][3],&l_713[7][3]}};
                        int32_t *l_714 = &l_713[7][3];
                        int32_t l_715 = 0x166B4C1DL;
                        VECTOR(int32_t, 2) l_716 = (VECTOR(int32_t, 2))(0x12884A62L, 0x1B56ADCEL);
                        VECTOR(int32_t, 4) l_717 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L);
                        VECTOR(int32_t, 2) l_718 = (VECTOR(int32_t, 2))(0x49273D31L, 0x1E5CC941L);
                        VECTOR(int32_t, 8) l_719 = (VECTOR(int32_t, 8))(0x6695BED1L, (VECTOR(int32_t, 4))(0x6695BED1L, (VECTOR(int32_t, 2))(0x6695BED1L, (-4L)), (-4L)), (-4L), 0x6695BED1L, (-4L));
                        VECTOR(int32_t, 16) l_720 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7349A020L), 0x7349A020L), 0x7349A020L, 0L, 0x7349A020L, (VECTOR(int32_t, 2))(0L, 0x7349A020L), (VECTOR(int32_t, 2))(0L, 0x7349A020L), 0L, 0x7349A020L, 0L, 0x7349A020L);
                        VECTOR(int32_t, 2) l_721 = (VECTOR(int32_t, 2))((-1L), 4L);
                        VECTOR(int32_t, 8) l_722 = (VECTOR(int32_t, 8))(0x21084245L, (VECTOR(int32_t, 4))(0x21084245L, (VECTOR(int32_t, 2))(0x21084245L, 0x3457C873L), 0x3457C873L), 0x3457C873L, 0x21084245L, 0x3457C873L);
                        VECTOR(int32_t, 2) l_723 = (VECTOR(int32_t, 2))(0x571DCEB4L, 0x7EE6383DL);
                        VECTOR(int32_t, 4) l_724 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x6FBDC581L), 0x6FBDC581L);
                        VECTOR(int32_t, 8) l_725 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
                        VECTOR(int32_t, 16) l_726 = (VECTOR(int32_t, 16))(0x11452C56L, (VECTOR(int32_t, 4))(0x11452C56L, (VECTOR(int32_t, 2))(0x11452C56L, 1L), 1L), 1L, 0x11452C56L, 1L, (VECTOR(int32_t, 2))(0x11452C56L, 1L), (VECTOR(int32_t, 2))(0x11452C56L, 1L), 0x11452C56L, 1L, 0x11452C56L, 1L);
                        uint16_t l_727 = 65535UL;
                        uint16_t l_728 = 65528UL;
                        VECTOR(int32_t, 16) l_729 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                        int32_t l_730[10] = {0L,8L,9L,8L,0L,0L,8L,9L,8L,0L};
                        uint16_t l_731 = 0xCAF5L;
                        VECTOR(uint32_t, 2) l_732 = (VECTOR(uint32_t, 2))(0xB8D23EFFL, 0xB649AB02L);
                        VECTOR(int16_t, 4) l_733 = (VECTOR(int16_t, 4))(0x1DD8L, (VECTOR(int16_t, 2))(0x1DD8L, 0x639CL), 0x639CL);
                        VECTOR(int16_t, 2) l_734 = (VECTOR(int16_t, 2))((-3L), 1L);
                        VECTOR(int16_t, 4) l_735 = (VECTOR(int16_t, 4))(0x41E0L, (VECTOR(int16_t, 2))(0x41E0L, 0x36E2L), 0x36E2L);
                        VECTOR(int16_t, 16) l_736 = (VECTOR(int16_t, 16))(0x5985L, (VECTOR(int16_t, 4))(0x5985L, (VECTOR(int16_t, 2))(0x5985L, 0x01AFL), 0x01AFL), 0x01AFL, 0x5985L, 0x01AFL, (VECTOR(int16_t, 2))(0x5985L, 0x01AFL), (VECTOR(int16_t, 2))(0x5985L, 0x01AFL), 0x5985L, 0x01AFL, 0x5985L, 0x01AFL);
                        VECTOR(int16_t, 16) l_737 = (VECTOR(int16_t, 16))(0x218BL, (VECTOR(int16_t, 4))(0x218BL, (VECTOR(int16_t, 2))(0x218BL, 0x1324L), 0x1324L), 0x1324L, 0x218BL, 0x1324L, (VECTOR(int16_t, 2))(0x218BL, 0x1324L), (VECTOR(int16_t, 2))(0x218BL, 0x1324L), 0x218BL, 0x1324L, 0x218BL, 0x1324L);
                        VECTOR(int16_t, 4) l_738 = (VECTOR(int16_t, 4))(0x228DL, (VECTOR(int16_t, 2))(0x228DL, 0x4EF4L), 0x4EF4L);
                        VECTOR(int16_t, 8) l_739 = (VECTOR(int16_t, 8))(0x71F3L, (VECTOR(int16_t, 4))(0x71F3L, (VECTOR(int16_t, 2))(0x71F3L, (-1L)), (-1L)), (-1L), 0x71F3L, (-1L));
                        VECTOR(int16_t, 16) l_740 = (VECTOR(int16_t, 16))(0x7FE8L, (VECTOR(int16_t, 4))(0x7FE8L, (VECTOR(int16_t, 2))(0x7FE8L, 7L), 7L), 7L, 0x7FE8L, 7L, (VECTOR(int16_t, 2))(0x7FE8L, 7L), (VECTOR(int16_t, 2))(0x7FE8L, 7L), 0x7FE8L, 7L, 0x7FE8L, 7L);
                        int32_t l_741 = (-6L);
                        VECTOR(int16_t, 8) l_742 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                        VECTOR(int16_t, 2) l_743 = (VECTOR(int16_t, 2))((-1L), 1L);
                        VECTOR(int16_t, 16) l_744 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 2L), 2L), 2L, 1L, 2L, (VECTOR(int16_t, 2))(1L, 2L), (VECTOR(int16_t, 2))(1L, 2L), 1L, 2L, 1L, 2L);
                        uint16_t l_745 = 65529UL;
                        VECTOR(int8_t, 8) l_746 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L));
                        int8_t l_747[7][5][7] = {{{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L}},{{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L}},{{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L}},{{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L}},{{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L}},{{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L}},{{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L},{(-4L),0x21L,0L,0x32L,(-1L),0x67L,1L}}};
                        uint32_t l_748 = 4294967295UL;
                        int i, j, k;
                        l_714 = l_712[4][0];
                        (*l_714) |= ((VECTOR(int32_t, 16))(3L, (-1L), 0x6453C291L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x7A5C0645L, 0L, 0x270D27A9L, 2L)).hi)).xyyy)), l_715, (-4L), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(l_716.yyxx)), 1L, 0x2F58995EL, (-1L))).s61)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_717.xz)))).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_718.yy)).yxyyxyxy)).s7, 7L, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(l_719.s43)).yxyyyxxx))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_720.s5738)).odd)), 0x2D3A5693L)).s7bf6, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(l_721.xyyyyyyyxyyyxxyy)), ((VECTOR(int32_t, 4))(l_722.s3766)).wyxzwwyxzzwxxwzy))).saf)).yyyx))).wzxwwxyx, ((VECTOR(int32_t, 2))(4L, 0x2BAE7D04L)).yyyxxyyy, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x22B3B036L, (-3L))).yyxx, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_723.yyxxyyyyxyxxyyyx)), ((VECTOR(int32_t, 4))(l_724.xwzx)).yyxywwyxxwyxyxzz))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_725.s1610117441732151)).s85)).xxyxyxxxxxyxyyxx))).s3b34))).xyxxyzwz))).lo, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_726.sc0c6faf3f4e77bed)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x316A9EE4L, 0x63F359E8L)), 0x4039A3C8L, 0x43ED98FFL)).zwxzzyxw))), ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(0x62C9AFEBL, 0x5D213C21L)).xyxyxxyyyxxyxxxx, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(0L, 0x3F5DCBC8L, l_727, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(1L, l_728, 1L, (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_729.s0afa374430883fe8)).lo)).s7 , (l_730[3] , ((l_731 , l_732.x) , (-6L)))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(0x51ABL, 0x0A52L)).xxyy, ((VECTOR(int16_t, 16))(l_733.yzywyzwxxzxywwzz)).s2f19, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(l_734.xy)).xyyyyxyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_735.wy)), ((VECTOR(int16_t, 4))(l_736.s428d)), 0x3C65L, 0L))))).s60)), ((VECTOR(int16_t, 2))(l_737.s92)), ((VECTOR(int16_t, 2))(l_738.wx)), (-1L), 1L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x7A3BL, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(l_739.s55247471)).s4073731131177465, ((VECTOR(int16_t, 16))(l_740.s1c970ba2a6a25668))))).sf2, (int16_t)l_741))), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(l_742.s1763334340157042)).s7839, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(1L, (-4L))).yxyxyyyxxyxyyxxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x3031L, 0L, 0x5D83L, (-1L))))).zxwyyzyzxyzzxwwz, ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(l_743.xxxx)).xxxwwyxzxxxwywwx, ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(6L, 0x65A0L)).xxxxxyyxxyyyyyyy, ((VECTOR(int16_t, 2))((-8L), (-1L))).xxyyyyxyyxyxxyxy))))))))).s87)).yyyx))), 0x6F05L)).odd)).wwxyzzyz, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_744.s0b70af8a)), 1L, (-1L), 0x2E4CL, 1L, (l_747[3][4][0] = (l_691 |= ((l_694 = (l_745 , 250UL)) , l_746.s6))), l_748, 1L, 6L)).lo))).hi))).even)), 0x6CEEL, 0x702FL)))), ((VECTOR(uint16_t, 8))(0xE4B4L))))).s05)).odd, ((VECTOR(int32_t, 4))(9L)))).s32, ((VECTOR(int32_t, 2))(0x119C7132L)), ((VECTOR(int32_t, 2))(0x5CDAD790L))))).xyxxyxyxxxyxxyxx))).odd))).even))), ((VECTOR(int32_t, 2))(0x471D17AEL)), 0L)).s3;
                    }
                    l_750 &= l_749;
                }
                else
                { /* block id: 355 */
                    int32_t l_751 = 0x361F4B41L;
                    VECTOR(int32_t, 2) l_752 = (VECTOR(int32_t, 2))((-1L), 0x01944A7BL);
                    uint16_t l_753 = 0xA085L;
                    int i;
                    l_751 = 0x3B7137F6L;
                    l_753 ^= ((VECTOR(int32_t, 8))(l_752.yxxxyyyx)).s2;
                    for (l_753 = 0; (l_753 == 4); l_753++)
                    { /* block id: 360 */
                        int32_t l_757[9] = {0x133590F4L,0x133590F4L,0x133590F4L,0x133590F4L,0x133590F4L,0x133590F4L,0x133590F4L,0x133590F4L,0x133590F4L};
                        int32_t *l_756 = &l_757[4];
                        union U1 l_759[5][9] = {{{8L},{8L},{1L},{6L},{-1L},{0x5360CC018EA07FCEL},{-1L},{0x15F29B751EE094A6L},{-1L}},{{8L},{8L},{1L},{6L},{-1L},{0x5360CC018EA07FCEL},{-1L},{0x15F29B751EE094A6L},{-1L}},{{8L},{8L},{1L},{6L},{-1L},{0x5360CC018EA07FCEL},{-1L},{0x15F29B751EE094A6L},{-1L}},{{8L},{8L},{1L},{6L},{-1L},{0x5360CC018EA07FCEL},{-1L},{0x15F29B751EE094A6L},{-1L}},{{8L},{8L},{1L},{6L},{-1L},{0x5360CC018EA07FCEL},{-1L},{0x15F29B751EE094A6L},{-1L}}};
                        union U1 *l_758 = &l_759[3][4];
                        union U1 *l_760 = (void*)0;
                        VECTOR(int8_t, 16) l_761 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x57L), 0x57L), 0x57L, 1L, 0x57L, (VECTOR(int8_t, 2))(1L, 0x57L), (VECTOR(int8_t, 2))(1L, 0x57L), 1L, 0x57L, 1L, 0x57L);
                        int i, j;
                        l_756 = (void*)0;
                        l_760 = l_758;
                        l_752.y = l_761.s2;
                    }
                    for (l_753 = (-5); (l_753 <= 5); l_753 = safe_add_func_int64_t_s_s(l_753, 4))
                    { /* block id: 367 */
                        int64_t l_764 = 0x7AFEA62D6F468CCFL;
                        uint32_t l_765 = 0x2EF43A24L;
                        int8_t l_768 = 0x2FL;
                        int64_t l_769 = 1L;
                        int8_t l_770 = 0x1CL;
                        uint32_t l_771 = 4294967295UL;
                        l_765--;
                        l_771++;
                    }
                }
                l_776 = l_774[0][0];
                l_779++;
                l_821 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x78DD0BC8L, (-1L), l_782, 9L, ((VECTOR(int32_t, 2))(0L, (-4L))), ((VECTOR(int32_t, 2))((-10L), 0x6FC830FAL)), (((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(l_783.sc335a004ee0e0786)).s334d, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_784.s7a847073)).s5153275212113736)).s3029, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(2L, 0x51L, 1L, 0x61L, ((VECTOR(int8_t, 2))((-7L), 0x2FL)), 1L, 0x40L)).lo, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(l_785.s2f)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_786, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_787.wz)), 0x35L, l_788, 0x2EL, ((VECTOR(int8_t, 2))(0x5DL, 0x31L)), 0L)).s41)), 2L)).zzxxwxwwxzyxwyyy)).lo, ((VECTOR(int8_t, 4))(l_789.wzxw)).yyzwxwwx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_790.yzwywyxz)).odd)).wyywwzxz))), ((VECTOR(int8_t, 4))(l_791.yyzw)), (-1L), ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(l_792.s969d8474)).odd, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))((l_794 = l_793), ((VECTOR(int8_t, 8))(l_795.yyxxyyyx)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))((-6L), 0L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_796.z, (l_798 &= (l_797 = 1L)), 0x1EL, (-10L))).zyxwxwyy)).even)).even))), 0x79L, 0x6AL)).lo)), ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(l_799.s6144161053613502)).even, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_800.zw)), (-9L), ((VECTOR(int8_t, 4))(l_801.s4202)), 6L))))).s76, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_802.s65eac018)).s0416725466224721)).s67))))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((-7L), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(l_803.yxyyxyxy)).odd, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x16L, 0x22L)), ((VECTOR(int8_t, 8))(l_804.xxxyxyyx)), 0x76L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(0x3EL, 1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_805.xyzxzwxwzwwzxxyw)).s01)), 0x1CL, ((VECTOR(int8_t, 2))(l_806.xx)), (-1L))).s7147125430757272, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 8))(l_807.s67530270)), 0x5BL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_808.ywwzxzxz)).even)).even)), 1L, l_809, 0x61L, 0L)).s0c54, ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(4L, ((VECTOR(int8_t, 2))(l_810.xy)), 0x3AL)).xzxyxxzxzxwzxzwz, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(l_811.yxyx)).hi, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_812.s70)))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_813.s15)).yyyy)).even)))))).yyxxyxxxxyxxyxxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(l_814.sf42b27c1)), ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(0x2BL, 0x55L)).yxxxxxxxyyyxxyxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_815.ywwx)).yzzzxyyz)))).s5600210062765360))).sa9)).xyxxxxxxxyxxxyyx)), ((VECTOR(int8_t, 8))(l_816.yyyxxxyy)).s3646722115566671))).lo))).s2214457770453271, ((VECTOR(int8_t, 8))(0x5AL, l_817[6][0][0], 0L, l_818, l_819, ((VECTOR(int8_t, 2))(0L)), 0x75L)).s6523147070267761))).se363)).xxyzzwwzyyxxyzww))).s19c2))))).yzxzzwzz)).s5065221503462475, ((VECTOR(int8_t, 16))(0x3BL))))).s36)), 0x24L, 1L, 0x70L)).s2e97, ((VECTOR(int8_t, 4))(2L)), ((VECTOR(int8_t, 4))(0x5EL)))))))), ((VECTOR(int8_t, 4))(0x50L))))).xwxxyxyzwxwwyzwx, ((VECTOR(int8_t, 16))(0x0BL)), ((VECTOR(int8_t, 16))(0x32L))))).s92, ((VECTOR(int8_t, 2))(0x7DL))))), (-6L))))))).lo))), ((VECTOR(int8_t, 2))(0L)), 0x55L)).s6bb5, ((VECTOR(int8_t, 4))(0x22L)), ((VECTOR(int8_t, 4))(0x30L))))).xyzzxwwxyxyxxyxy, ((VECTOR(int8_t, 16))(0x14L))))).s13f1)).lo, ((VECTOR(int8_t, 2))(0x1DL))))).xxxy, ((VECTOR(int8_t, 4))(0x43L))))).wwzxwxwz, ((VECTOR(int8_t, 8))((-1L)))))).hi))).zwywxzww, ((VECTOR(int8_t, 8))((-2L)))))).hi, ((VECTOR(int8_t, 4))(0L))))).xyyyzwxyywwxwxzx)).s1e, ((VECTOR(int8_t, 2))(2L))))), 1L)).s7a, ((VECTOR(int8_t, 2))((-1L)))))), ((VECTOR(int8_t, 4))(7L)), (-1L), ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(0x3BL)), 0x4AL)).s3f1b)).zzwxxxywyzzzwyxw)).s3596)).hi, (int8_t)9L, (int8_t)7L))).xxyyyxxxyyyyxxxx, ((VECTOR(int8_t, 16))(0x1CL)), ((VECTOR(int8_t, 16))(0L))))).s64)).xyxy)), (int8_t)l_820)))))).yywwywxw, ((VECTOR(int8_t, 8))(0x57L))))).hi))), 0x3CL, ((VECTOR(int8_t, 2))((-1L))), (-9L))).even))).x , 0x06D34339L), 0x017F6398L, ((VECTOR(int32_t, 4))((-1L))), (-6L), 0x2B30B56AL)))).hi)).s2;
            }
            l_822[0][1] = 0x54A45AFBL;
            unsigned int result = 0;
            result += l_688;
            int l_822_i0, l_822_i1;
            for (l_822_i0 = 0; l_822_i0 < 1; l_822_i0++) {
                for (l_822_i1 = 0; l_822_i1 < 2; l_822_i1++) {
                    result += l_822[l_822_i0][l_822_i1];
                }
            }
            atomic_add(&p_1390->l_special_values[62], result);
        }
        else
        { /* block id: 380 */
            (1 + 1);
        }
        if ((((safe_mul_func_int16_t_s_s(p_1390->g_235.s1, (safe_mod_func_uint64_t_u_u((*p_1390->g_437), (-1L))))) <= (safe_add_func_uint32_t_u_u(l_829, l_829))) < (0x03F0CEE7L ^ (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1390->g_830.xy)))).odd & l_831))))
        { /* block id: 383 */
            if (p_1390->g_75)
                break;
            if (l_370)
                break;
        }
        else
        { /* block id: 386 */
            return &p_1390->g_47;
        }
        (*l_272) = &p_1390->g_2[6];
    }
    p_1390->g_834[2][5][0] = l_832;
    return &p_1390->g_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1390->g_75 p_1390->g_68 p_1390->g_24 p_1390->g_comm_values p_1390->g_112 p_1390->g_30 p_1390->g_149 p_1390->g_72 p_1390->g_73 p_1390->g_2 p_1390->g_10 p_1390->g_156 p_1390->g_169 p_1390->g_90 p_1390->g_191 p_1390->g_47 p_1390->g_209 p_1390->g_222 p_1390->g_56 p_1390->g_31 p_1390->g_192.f3 p_1390->g_235 p_1390->g_192.f5 p_1390->g_252 p_1390->g_202
 * writes: p_1390->g_75 p_1390->g_68 p_1390->g_112 p_1390->g_156 p_1390->g_47 p_1390->g_191 p_1390->g_202 p_1390->g_209 p_1390->g_222 p_1390->g_31 p_1390->g_56 p_1390->g_192.f5 p_1390->g_72 p_1390->g_30 p_1390->g_73 p_1390->g_252
 */
uint64_t * func_86(uint64_t * p_87, struct S2 * p_1390)
{ /* block id: 48 */
    uint16_t l_120 = 0xF141L;
    int32_t l_130 = (-8L);
    int32_t l_131[2];
    uint32_t l_145 = 4294967295UL;
    int32_t *l_153 = (void*)0;
    uint32_t l_185 = 0x302B4F16L;
    int32_t l_214 = 1L;
    VECTOR(int32_t, 16) l_228 = (VECTOR(int32_t, 16))(0x41327159L, (VECTOR(int32_t, 4))(0x41327159L, (VECTOR(int32_t, 2))(0x41327159L, 0x6D459FDAL), 0x6D459FDAL), 0x6D459FDAL, 0x41327159L, 0x6D459FDAL, (VECTOR(int32_t, 2))(0x41327159L, 0x6D459FDAL), (VECTOR(int32_t, 2))(0x41327159L, 0x6D459FDAL), 0x41327159L, 0x6D459FDAL, 0x41327159L, 0x6D459FDAL);
    VECTOR(uint8_t, 2) l_236 = (VECTOR(uint8_t, 2))(1UL, 0x27L);
    uint32_t *l_249 = (void*)0;
    uint32_t **l_248[5][10] = {{&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249},{&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249},{&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249},{&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249},{&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249,&l_249}};
    uint32_t ***l_247 = &l_248[2][2];
    struct S0 *l_267 = &p_1390->g_268[5];
    int32_t *l_269 = (void*)0;
    int32_t *l_270[5][10];
    uint64_t *l_271 = &p_1390->g_90;
    int i, j;
    for (i = 0; i < 2; i++)
        l_131[i] = 0x27877F70L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
            l_270[i][j] = (void*)0;
    }
    for (p_1390->g_75 = 21; (p_1390->g_75 != 29); p_1390->g_75 = safe_add_func_int8_t_s_s(p_1390->g_75, 9))
    { /* block id: 51 */
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1390->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u(0x2147657CL, 10))][(safe_mod_func_uint32_t_u_u(p_1390->tid, 3))]));
        for (p_1390->g_68 = 0; (p_1390->g_68 <= (-1)); p_1390->g_68 = safe_sub_func_int64_t_s_s(p_1390->g_68, 9))
        { /* block id: 57 */
            int32_t *l_117 = (void*)0;
            int32_t *l_118 = &p_1390->g_31;
            int32_t *l_119 = &p_1390->g_56;
            ++l_120;
        }
    }
    if (((safe_mod_func_uint32_t_u_u(4294967290UL, 1UL)) <= p_1390->g_24))
    { /* block id: 61 */
        uint16_t *l_129[7];
        int32_t l_134 = 0x455D9318L;
        uint16_t **l_148 = &l_129[5];
        uint16_t *l_151 = &l_120;
        int32_t l_154 = 0x4587C124L;
        int32_t l_155[3][2];
        int32_t **l_173 = (void*)0;
        int32_t *l_188 = &p_1390->g_56;
        uint32_t **l_225 = (void*)0;
        uint32_t ***l_226 = &l_225;
        int32_t *l_227 = &p_1390->g_31;
        int i, j;
        for (i = 0; i < 7; i++)
            l_129[i] = (void*)0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_155[i][j] = 0x16EA0D35L;
        }
        if (((safe_add_func_uint8_t_u_u(((((safe_div_func_uint32_t_u_u(0x4F19BD61L, (((p_1390->g_comm_values[p_1390->tid] <= (p_1390->g_112--)) ^ p_1390->g_30[6][5]) ^ (251UL != ((l_134 || (safe_add_func_uint64_t_u_u(((!(safe_mul_func_uint16_t_u_u(l_134, ((*l_151) = ((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_145 , ((safe_add_func_uint64_t_u_u(l_145, (((*l_148) = l_129[5]) != p_1390->g_149))) , l_120)), p_1390->g_72)), l_145)) & p_1390->g_73), l_145)) > 1UL))))) < 0x0CL), 0L))) < l_131[1]))))) != l_134) <= 0x8383L) != l_131[1]), p_1390->g_2[0])) == p_1390->g_10.y))
        { /* block id: 65 */
            int32_t **l_152[9][5][5] = {{{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47}},{{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47}},{{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47}},{{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47}},{{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47}},{{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47}},{{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47}},{{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47}},{{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47},{&p_1390->g_47,(void*)0,&p_1390->g_47,(void*)0,&p_1390->g_47}}};
            VECTOR(uint64_t, 16) l_161 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 18446744073709551615UL, 18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551607UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551607UL), 18446744073709551615UL, 18446744073709551607UL, 18446744073709551615UL, 18446744073709551607UL);
            int16_t *l_172[9] = {&p_1390->g_72,&p_1390->g_72,&p_1390->g_72,&p_1390->g_72,&p_1390->g_72,&p_1390->g_72,&p_1390->g_72,&p_1390->g_72,&p_1390->g_72};
            int i, j, k;
            l_153 = &l_134;
            ++p_1390->g_156;
            (*l_153) = (safe_sub_func_uint32_t_u_u((((VECTOR(uint64_t, 16))(l_161.s52f85193fb3aa2f0)).sc < (*l_153)), ((&l_129[1] == (void*)0) >= (((safe_lshift_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u((l_154 , ((((l_131[1] = ((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(p_1390->g_169.s335f)).w, ((*l_153) ^ ((~(*l_153)) <= 0x4941L)))) ^ (safe_lshift_func_uint16_t_u_s(l_155[0][1], l_134)))) && 1UL) > 0x6699BEB6L) == p_1390->g_30[6][5])), FAKE_DIVERGE(p_1390->group_1_offset, get_group_id(1), 10))))) < p_1390->g_68) >= (*l_153)), (*l_153))) & 0x768BC73AE716A212L) ^ (*l_153)))));
            p_1390->g_47 = (void*)0;
        }
        else
        { /* block id: 71 */
            uint32_t l_176 = 0x09539F48L;
            int32_t *l_200 = (void*)0;
            int32_t *l_201 = &p_1390->g_202;
            int8_t l_205 = 9L;
            VECTOR(int64_t, 8) l_206 = (VECTOR(int64_t, 8))(0x2A047A856C622BE4L, (VECTOR(int64_t, 4))(0x2A047A856C622BE4L, (VECTOR(int64_t, 2))(0x2A047A856C622BE4L, 0x0834DEDF0D3EC592L), 0x0834DEDF0D3EC592L), 0x0834DEDF0D3EC592L, 0x2A047A856C622BE4L, 0x0834DEDF0D3EC592L);
            uint64_t *l_207 = (void*)0;
            uint64_t *l_208 = &p_1390->g_209;
            uint32_t *l_210 = &l_185;
            int32_t *l_211 = &p_1390->g_31;
            int32_t *l_212 = (void*)0;
            int32_t *l_213 = &l_155[0][1];
            int32_t *l_215 = &l_134;
            int32_t *l_216 = &l_130;
            int32_t *l_217 = (void*)0;
            int32_t *l_218 = &l_214;
            int32_t *l_219 = (void*)0;
            int32_t *l_220 = &l_131[1];
            int32_t *l_221[10][9] = {{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]},{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]},{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]},{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]},{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]},{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]},{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]},{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]},{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]},{&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0],&l_155[0][1],&l_155[0][1],&l_131[0],&l_131[0]}};
            int i, j;
            l_188 = ((~((l_173 == (((safe_rshift_func_int8_t_s_s(l_176, (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((!1UL), 13)), 2)), p_1390->g_90)) & (safe_sub_func_uint64_t_u_u(1UL, p_1390->g_comm_values[p_1390->tid]))) != l_185))) == (safe_add_func_uint16_t_u_u(p_1390->g_169.s9, l_176))) , &l_153)) & 5UL)) , &l_155[0][1]);
            for (l_176 = 0; (l_176 > 31); l_176++)
            { /* block id: 75 */
                struct S0 **l_193 = &p_1390->g_191;
                (*l_193) = p_1390->g_191;
                (*l_188) |= (*p_1390->g_47);
                if ((*l_188))
                    continue;
            }
            (*l_188) = ((l_176 < ((safe_mul_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(0L, ((safe_rshift_func_uint16_t_u_u(((((*l_201) = (*l_188)) , &l_130) == &p_1390->g_31), ((safe_rshift_func_uint16_t_u_u(l_205, 13)) >= (*l_188)))) || ((*l_210) = (p_1390->g_90 <= (((VECTOR(int64_t, 8))(l_206.s54355210)).s7 ^ ((*l_208) &= ((0x19L < (*l_188)) & (*l_188))))))))) , 0x42F07F01652FCFA5L) >= 6UL), 0x3BL)) >= p_1390->g_156)) == l_205);
            ++p_1390->g_222;
        }
        (*l_226) = l_225;
        (*l_227) ^= (*l_188);
        (*l_188) = ((*l_227) |= ((VECTOR(int32_t, 2))(l_228.sfa)).lo);
    }
    else
    { /* block id: 90 */
        int32_t *l_229 = &p_1390->g_56;
        int32_t **l_230[7][6] = {{&l_229,&p_1390->g_47,&l_229,&p_1390->g_47,&l_229,&l_229},{&l_229,&p_1390->g_47,&l_229,&p_1390->g_47,&l_229,&l_229},{&l_229,&p_1390->g_47,&l_229,&p_1390->g_47,&l_229,&l_229},{&l_229,&p_1390->g_47,&l_229,&p_1390->g_47,&l_229,&l_229},{&l_229,&p_1390->g_47,&l_229,&p_1390->g_47,&l_229,&l_229},{&l_229,&p_1390->g_47,&l_229,&p_1390->g_47,&l_229,&l_229},{&l_229,&p_1390->g_47,&l_229,&p_1390->g_47,&l_229,&l_229}};
        int8_t *l_237 = &p_1390->g_192.f5;
        uint64_t *l_240[9] = {&p_1390->g_209,&p_1390->g_209,&p_1390->g_209,&p_1390->g_209,&p_1390->g_209,&p_1390->g_209,&p_1390->g_209,&p_1390->g_209,&p_1390->g_209};
        VECTOR(uint64_t, 16) l_250 = (VECTOR(uint64_t, 16))(0x09D93A61C5B9279EL, (VECTOR(uint64_t, 4))(0x09D93A61C5B9279EL, (VECTOR(uint64_t, 2))(0x09D93A61C5B9279EL, 7UL), 7UL), 7UL, 0x09D93A61C5B9279EL, 7UL, (VECTOR(uint64_t, 2))(0x09D93A61C5B9279EL, 7UL), (VECTOR(uint64_t, 2))(0x09D93A61C5B9279EL, 7UL), 0x09D93A61C5B9279EL, 7UL, 0x09D93A61C5B9279EL, 7UL);
        VECTOR(uint32_t, 16) l_251 = (VECTOR(uint32_t, 16))(0x97F3C724L, (VECTOR(uint32_t, 4))(0x97F3C724L, (VECTOR(uint32_t, 2))(0x97F3C724L, 1UL), 1UL), 1UL, 0x97F3C724L, 1UL, (VECTOR(uint32_t, 2))(0x97F3C724L, 1UL), (VECTOR(uint32_t, 2))(0x97F3C724L, 1UL), 0x97F3C724L, 1UL, 0x97F3C724L, 1UL);
        int16_t *l_253 = (void*)0;
        int16_t *l_254 = &p_1390->g_72;
        int64_t *l_259 = &p_1390->g_30[6][5];
        int64_t *l_266 = &p_1390->g_73;
        int i, j;
        l_153 = l_229;
        (*l_153) = ((*l_229) >= ((-4L) || ((p_1390->g_192.f3 > ((safe_lshift_func_int8_t_s_u(((*l_237) &= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1390->g_235.s1645673531056552)).even)).s3, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_236.xxxyxxyy)))).s6))), 2)) != (safe_mod_func_uint64_t_u_u(((l_214 = p_1390->g_2[0]) == (safe_sub_func_int16_t_s_s(4L, (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((2L < ((l_247 != (((VECTOR(uint64_t, 8))(l_250.s9bbb440e)).s1 , &l_248[2][3])) == ((VECTOR(uint32_t, 8))(l_251.s9d29409a)).s7)), ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(p_1390->g_252.yxxyxyyxxyyxyxxx)).se7, (int32_t)(*p_1390->g_47), (int32_t)(*l_153)))).yyxyyyxxyyyxyyxy, (int32_t)(*l_229)))).lo)).lo)).wxzzyzwwyxzwwwyz)).s73d3)))), (-10L), 1L, 0x0178A366L, 0x14EA6A5FL)).s4133157051350174))).s5)), p_1390->g_24))))), (*l_153))))) <= 1UL)));
        p_1390->g_252.y |= (+((((*l_254) |= 0x7DDBL) | ((-3L) >= (--p_1390->g_209))) ^ (p_1390->g_202 || (safe_add_func_int64_t_s_s(((*l_266) = ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(((*l_259) ^= (*l_229)), (safe_sub_func_int8_t_s_s(0x66L, (safe_mul_func_uint8_t_u_u(0x83L, (*l_153))))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 4))((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))((-1L), 0x31L)).xxxyyxyy, (int8_t)(((*l_153) != (*l_153)) || 0x7DDE2F61L)))).odd, ((VECTOR(int8_t, 4))((-3L)))))), ((VECTOR(int8_t, 8))((-1L))), 0x16L, ((VECTOR(int8_t, 2))(0x6CL)), 1L)).sac)).yxyxyxyyyxyxyxyy, ((VECTOR(int8_t, 16))(0x60L))))).sa391, ((VECTOR(int8_t, 4))(0x0CL))))).y, 3)), (*l_229), 0x57A234F56A3590E6L, (-6L))), (int64_t)0x5050AC26C5A004C8L, (int64_t)(-2L)))).xyxxzwzx)), (*l_229), (-9L), 1L, (*l_153), (-5L), 0x1BF6637A45A4496AL)).s5f, ((VECTOR(int64_t, 2))((-1L)))))).hi), (*l_229))))));
    }
    p_1390->g_31 = (((void*)0 == l_267) != p_1390->g_68);
    return l_271;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S2 c_1391;
    struct S2* p_1390 = &c_1391;
    struct S2 c_1392 = {
        {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}, // p_1390->g_2
        (VECTOR(uint8_t, 2))(5UL, 0xB1L), // p_1390->g_10
        (VECTOR(uint8_t, 4))(0x65L, (VECTOR(uint8_t, 2))(0x65L, 0xA3L), 0xA3L), // p_1390->g_11
        (-1L), // p_1390->g_24
        {{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L},{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L},{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L},{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L},{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L},{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L},{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L},{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L},{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L},{0L,0L,0x5A1448AFE0A4D2C6L,0x76568C0775DAE11CL,0x5A1448AFE0A4D2C6L,0L}}, // p_1390->g_30
        (-1L), // p_1390->g_31
        (void*)0, // p_1390->g_47
        0x56B74084L, // p_1390->g_56
        0x7BL, // p_1390->g_68
        0xD6E0AFCEL, // p_1390->g_69
        1L, // p_1390->g_72
        0x24EF461E62ED8E9BL, // p_1390->g_73
        0x03L, // p_1390->g_75
        0xEDA02901D39A42C7L, // p_1390->g_83
        18446744073709551606UL, // p_1390->g_90
        0xC4E9L, // p_1390->g_112
        0x7E66L, // p_1390->g_150
        &p_1390->g_150, // p_1390->g_149
        65535UL, // p_1390->g_156
        (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 1UL), 1UL), 1UL, 6UL, 1UL, (VECTOR(uint8_t, 2))(6UL, 1UL), (VECTOR(uint8_t, 2))(6UL, 1UL), 6UL, 1UL, 6UL, 1UL), // p_1390->g_169
        {0x656E3216281FC516L,0x8AL,5UL,1UL,18446744073709551615UL,-8L,0x5CL}, // p_1390->g_192
        &p_1390->g_192, // p_1390->g_191
        0L, // p_1390->g_202
        1UL, // p_1390->g_209
        1UL, // p_1390->g_222
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL), // p_1390->g_235
        (VECTOR(int32_t, 2))(0x223D82C6L, 1L), // p_1390->g_252
        {{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L},{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L},{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L},{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L},{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L},{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L},{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L},{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L},{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L},{0x3E3177D20EFBC22AL,1UL,0x1101BBE2L,65535UL,1UL,0L,0x12L}}, // p_1390->g_268
        (void*)0, // p_1390->g_298
        &p_1390->g_298, // p_1390->g_297
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x9763L), 0x9763L), 0x9763L, 1UL, 0x9763L, (VECTOR(uint16_t, 2))(1UL, 0x9763L), (VECTOR(uint16_t, 2))(1UL, 0x9763L), 1UL, 0x9763L, 1UL, 0x9763L), // p_1390->g_357
        (VECTOR(uint8_t, 16))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 246UL), 246UL), 246UL, 3UL, 246UL, (VECTOR(uint8_t, 2))(3UL, 246UL), (VECTOR(uint8_t, 2))(3UL, 246UL), 3UL, 246UL, 3UL, 246UL), // p_1390->g_361
        (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x322CL), 0x322CL), // p_1390->g_363
        (VECTOR(uint16_t, 4))(0x4FC9L, (VECTOR(uint16_t, 2))(0x4FC9L, 5UL), 5UL), // p_1390->g_364
        &p_1390->g_268[5].f2, // p_1390->g_409
        0UL, // p_1390->g_438
        &p_1390->g_438, // p_1390->g_437
        (-1L), // p_1390->g_439
        (void*)0, // p_1390->g_483
        &p_1390->g_483, // p_1390->g_482
        (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 255UL), 255UL), // p_1390->g_492
        (VECTOR(int16_t, 2))(0x47B1L, 0x70AFL), // p_1390->g_549
        1L, // p_1390->g_555
        1UL, // p_1390->g_556
        {0L,0L,0L,0L}, // p_1390->g_560
        (VECTOR(uint16_t, 16))(0x6799L, (VECTOR(uint16_t, 4))(0x6799L, (VECTOR(uint16_t, 2))(0x6799L, 0x15C1L), 0x15C1L), 0x15C1L, 0x6799L, 0x15C1L, (VECTOR(uint16_t, 2))(0x6799L, 0x15C1L), (VECTOR(uint16_t, 2))(0x6799L, 0x15C1L), 0x6799L, 0x15C1L, 0x6799L, 0x15C1L), // p_1390->g_566
        (VECTOR(uint16_t, 2))(0x2322L, 0UL), // p_1390->g_568
        (VECTOR(uint16_t, 4))(0x580AL, (VECTOR(uint16_t, 2))(0x580AL, 0x6FC5L), 0x6FC5L), // p_1390->g_569
        (VECTOR(uint16_t, 16))(0x3147L, (VECTOR(uint16_t, 4))(0x3147L, (VECTOR(uint16_t, 2))(0x3147L, 6UL), 6UL), 6UL, 0x3147L, 6UL, (VECTOR(uint16_t, 2))(0x3147L, 6UL), (VECTOR(uint16_t, 2))(0x3147L, 6UL), 0x3147L, 6UL, 0x3147L, 6UL), // p_1390->g_570
        (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x7230BEB4L), 0x7230BEB4L), 0x7230BEB4L, (-7L), 0x7230BEB4L), // p_1390->g_578
        (VECTOR(int32_t, 8))(0x1ED6086AL, (VECTOR(int32_t, 4))(0x1ED6086AL, (VECTOR(int32_t, 2))(0x1ED6086AL, (-3L)), (-3L)), (-3L), 0x1ED6086AL, (-3L)), // p_1390->g_580
        (VECTOR(int32_t, 16))(0x78A6279BL, (VECTOR(int32_t, 4))(0x78A6279BL, (VECTOR(int32_t, 2))(0x78A6279BL, 3L), 3L), 3L, 0x78A6279BL, 3L, (VECTOR(int32_t, 2))(0x78A6279BL, 3L), (VECTOR(int32_t, 2))(0x78A6279BL, 3L), 0x78A6279BL, 3L, 0x78A6279BL, 3L), // p_1390->g_581
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x24EE54C4L), 0x24EE54C4L), // p_1390->g_582
        (VECTOR(int32_t, 2))(5L, 4L), // p_1390->g_830
        (void*)0, // p_1390->g_835
        {{{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835}},{{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835}},{{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835}},{{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835}},{{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835}},{{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835}},{{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835},{&p_1390->g_835}}}, // p_1390->g_834
        (VECTOR(uint8_t, 16))(0x29L, (VECTOR(uint8_t, 4))(0x29L, (VECTOR(uint8_t, 2))(0x29L, 0x9BL), 0x9BL), 0x9BL, 0x29L, 0x9BL, (VECTOR(uint8_t, 2))(0x29L, 0x9BL), (VECTOR(uint8_t, 2))(0x29L, 0x9BL), 0x29L, 0x9BL, 0x29L, 0x9BL), // p_1390->g_847
        (void*)0, // p_1390->g_854
        (VECTOR(int16_t, 16))(0x69E9L, (VECTOR(int16_t, 4))(0x69E9L, (VECTOR(int16_t, 2))(0x69E9L, 0L), 0L), 0L, 0x69E9L, 0L, (VECTOR(int16_t, 2))(0x69E9L, 0L), (VECTOR(int16_t, 2))(0x69E9L, 0L), 0x69E9L, 0L, 0x69E9L, 0L), // p_1390->g_881
        {0x4651A4035D2C3BFBL}, // p_1390->g_962
        {{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}},{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}},{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}},{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}},{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}},{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}},{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}},{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}},{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}},{{-3L},{0x5D748DF653877E62L},{0x4B4CAE35609A7F12L},{1L}}}, // p_1390->g_963
        {-1L}, // p_1390->g_964
        {-8L}, // p_1390->g_965
        {-3L}, // p_1390->g_966
        {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}, // p_1390->g_967
        {0L}, // p_1390->g_968
        {-2L}, // p_1390->g_969
        {{0x3EDB6E83E4403FF8L},{0x3EDB6E83E4403FF8L},{0x3EDB6E83E4403FF8L},{0x3EDB6E83E4403FF8L},{0x3EDB6E83E4403FF8L},{0x3EDB6E83E4403FF8L},{0x3EDB6E83E4403FF8L}}, // p_1390->g_970
        {{{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}}}}, // p_1390->g_971
        {9L}, // p_1390->g_972
        {0x4070E1C73CD50E8DL}, // p_1390->g_973
        {0x2A649FDB64C3442DL}, // p_1390->g_974
        {0x51B3DA3CE7CC508BL}, // p_1390->g_975
        {-5L}, // p_1390->g_976
        {0x280431170C52C825L}, // p_1390->g_977
        {0x3435668AC6D9E457L}, // p_1390->g_978
        {0x66280D6117E9F8BAL}, // p_1390->g_979
        {0L}, // p_1390->g_980
        {-1L}, // p_1390->g_981
        {1L}, // p_1390->g_982
        {-6L}, // p_1390->g_983
        {0x565DED60D03E3421L}, // p_1390->g_984
        {0x694EC84889EB4338L}, // p_1390->g_985
        {0x517F9EC74E3396EFL}, // p_1390->g_986
        {0x4FBBE9984D44AB3AL}, // p_1390->g_987
        {0L}, // p_1390->g_988
        {0x5819D1E3147105C6L}, // p_1390->g_989
        {1L}, // p_1390->g_990
        {{{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}}},{{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}}},{{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}}},{{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}}},{{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}},{{0L},{0x2AB40FE2D85BA081L}}}}, // p_1390->g_991
        {1L}, // p_1390->g_992
        {0x09EC61542B15049AL}, // p_1390->g_993
        {-9L}, // p_1390->g_994
        {0L}, // p_1390->g_995
        {0x428ED933FBE8E733L}, // p_1390->g_996
        {-1L}, // p_1390->g_997
        {0x1541BF4E0A61211CL}, // p_1390->g_998
        {{1L},{1L}}, // p_1390->g_999
        {-8L}, // p_1390->g_1000
        {0x1109BEA8CE827317L}, // p_1390->g_1001
        {-10L}, // p_1390->g_1002
        {-7L}, // p_1390->g_1003
        {-3L}, // p_1390->g_1004
        {0x794D8C450FE6CA6FL}, // p_1390->g_1005
        {{{0x0E6E3574A6D950CAL},{9L},{0x0E6E3574A6D950CAL},{0x0E6E3574A6D950CAL},{9L},{0x0E6E3574A6D950CAL}},{{0x0E6E3574A6D950CAL},{9L},{0x0E6E3574A6D950CAL},{0x0E6E3574A6D950CAL},{9L},{0x0E6E3574A6D950CAL}}}, // p_1390->g_1006
        {0x173714B677EDE6B1L}, // p_1390->g_1007
        {{0x09EB8236A59C0A3AL},{0L},{0x09EB8236A59C0A3AL},{0x09EB8236A59C0A3AL},{0L},{0x09EB8236A59C0A3AL},{0x09EB8236A59C0A3AL},{0L},{0x09EB8236A59C0A3AL}}, // p_1390->g_1008
        {-10L}, // p_1390->g_1009
        {1L}, // p_1390->g_1010
        {7L}, // p_1390->g_1011
        {-7L}, // p_1390->g_1012
        {-5L}, // p_1390->g_1013
        {{0x6633C4199AEBC53EL},{0x6633C4199AEBC53EL},{0x6633C4199AEBC53EL},{0x6633C4199AEBC53EL},{0x6633C4199AEBC53EL},{0x6633C4199AEBC53EL}}, // p_1390->g_1014
        {0x28759A9209E49DC3L}, // p_1390->g_1015
        {-8L}, // p_1390->g_1016
        {9L}, // p_1390->g_1017
        {0x10FCA8634B67FEFCL}, // p_1390->g_1018
        {{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}}}, // p_1390->g_1019
        {0x3637E3B78143C424L}, // p_1390->g_1020
        {-1L}, // p_1390->g_1021
        {0x3F73E87D679033E5L}, // p_1390->g_1022
        {-10L}, // p_1390->g_1023
        {0x76EB429D0B4BD5E1L}, // p_1390->g_1024
        {-1L}, // p_1390->g_1025
        {0x30635268C7425DFCL}, // p_1390->g_1026
        {0x1875EA0EDD91F058L}, // p_1390->g_1027
        {0L}, // p_1390->g_1028
        {0L}, // p_1390->g_1029
        {-1L}, // p_1390->g_1030
        {{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}},{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}},{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}},{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}},{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}},{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}},{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}},{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}},{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}},{{-1L},{0x5F58779EC9D6D58AL},{7L},{0x379189F95E263283L},{0x54389083B4599ED6L},{0x379189F95E263283L},{7L},{0x5F58779EC9D6D58AL},{-1L}}}, // p_1390->g_1031
        {0x7730CBE1847DFF92L}, // p_1390->g_1032
        {0x39860CBF3B44B8BDL}, // p_1390->g_1033
        {5L}, // p_1390->g_1034
        {0x0B397CAF822B8A00L}, // p_1390->g_1035
        {0x365569DF9E5B313DL}, // p_1390->g_1036
        {-9L}, // p_1390->g_1037
        {0x47BFD994C9B36CD6L}, // p_1390->g_1038
        {0x44F5069CC515B663L}, // p_1390->g_1039
        {0x31864733D1A5A5EAL}, // p_1390->g_1040
        {7L}, // p_1390->g_1041
        {0L}, // p_1390->g_1042
        {0x1F8D4923501225B4L}, // p_1390->g_1043
        {0x677BFAD65EAACC11L}, // p_1390->g_1044
        {-10L}, // p_1390->g_1046
        {0L}, // p_1390->g_1048
        &p_1390->g_1048, // p_1390->g_1047
        (VECTOR(uint32_t, 4))(0x0773FF9AL, (VECTOR(uint32_t, 2))(0x0773FF9AL, 0xFA1706C3L), 0xFA1706C3L), // p_1390->g_1055
        1L, // p_1390->g_1125
        (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 65528UL), 65528UL), // p_1390->g_1126
        (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 1L), 1L), 1L, 2L, 1L), // p_1390->g_1128
        (VECTOR(int16_t, 16))(0x14AEL, (VECTOR(int16_t, 4))(0x14AEL, (VECTOR(int16_t, 2))(0x14AEL, 2L), 2L), 2L, 0x14AEL, 2L, (VECTOR(int16_t, 2))(0x14AEL, 2L), (VECTOR(int16_t, 2))(0x14AEL, 2L), 0x14AEL, 2L, 0x14AEL, 2L), // p_1390->g_1129
        0L, // p_1390->g_1140
        &p_1390->g_1140, // p_1390->g_1139
        &p_1390->g_1139, // p_1390->g_1138
        (VECTOR(uint16_t, 2))(0x0452L, 65535UL), // p_1390->g_1154
        4294967295UL, // p_1390->g_1171
        (VECTOR(uint32_t, 2))(1UL, 1UL), // p_1390->g_1176
        {0x0D16219E0ABEB707L,1UL,4294967287UL,65535UL,0UL,2L,0x51L}, // p_1390->g_1185
        (void*)0, // p_1390->g_1189
        {0x756A39B36A81B145L,0x2FL,4294967295UL,0UL,1UL,1L,0L}, // p_1390->g_1191
        {{-3L,0xA2L,0UL,0UL,1UL,0x51L,0x42L}}, // p_1390->g_1228
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x55L), 0x55L), // p_1390->g_1235
        (VECTOR(int8_t, 2))((-5L), 0x64L), // p_1390->g_1236
        (VECTOR(int8_t, 2))((-1L), (-1L)), // p_1390->g_1239
        (-1L), // p_1390->g_1247
        (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0UL), 0UL), 0UL, 250UL, 0UL, (VECTOR(uint8_t, 2))(250UL, 0UL), (VECTOR(uint8_t, 2))(250UL, 0UL), 250UL, 0UL, 250UL, 0UL), // p_1390->g_1274
        (void*)0, // p_1390->g_1287
        4294967295UL, // p_1390->g_1290
        (VECTOR(uint32_t, 16))(0xBC00E862L, (VECTOR(uint32_t, 4))(0xBC00E862L, (VECTOR(uint32_t, 2))(0xBC00E862L, 0xF7EABADAL), 0xF7EABADAL), 0xF7EABADAL, 0xBC00E862L, 0xF7EABADAL, (VECTOR(uint32_t, 2))(0xBC00E862L, 0xF7EABADAL), (VECTOR(uint32_t, 2))(0xBC00E862L, 0xF7EABADAL), 0xBC00E862L, 0xF7EABADAL, 0xBC00E862L, 0xF7EABADAL), // p_1390->g_1296
        (VECTOR(int8_t, 2))(8L, 0x3CL), // p_1390->g_1340
        (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 1L), 1L), 1L, 7L, 1L), // p_1390->g_1341
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 4L), 4L), // p_1390->g_1342
        (VECTOR(int16_t, 2))(0x162CL, 1L), // p_1390->g_1374
        (VECTOR(int64_t, 2))((-6L), 1L), // p_1390->g_1381
        {{{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL},{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL},{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL},{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL},{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL}},{{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL},{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL},{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL},{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL},{0x7E6E829AL,0x7E6E829AL,0x69255956L,(-9L),0x40625E35L,0x1C7EB32AL,0x036F6CE3L,0x16E1F6DBL}}}, // p_1390->g_1383
        0, // p_1390->v_collective
        sequence_input[get_global_id(0)], // p_1390->global_0_offset
        sequence_input[get_global_id(1)], // p_1390->global_1_offset
        sequence_input[get_global_id(2)], // p_1390->global_2_offset
        sequence_input[get_local_id(0)], // p_1390->local_0_offset
        sequence_input[get_local_id(1)], // p_1390->local_1_offset
        sequence_input[get_local_id(2)], // p_1390->local_2_offset
        sequence_input[get_group_id(0)], // p_1390->group_0_offset
        sequence_input[get_group_id(1)], // p_1390->group_1_offset
        sequence_input[get_group_id(2)], // p_1390->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_1390->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1391 = c_1392;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1390);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1390->g_2[i], "p_1390->g_2[i]", print_hash_value);

    }
    transparent_crc(p_1390->g_10.x, "p_1390->g_10.x", print_hash_value);
    transparent_crc(p_1390->g_10.y, "p_1390->g_10.y", print_hash_value);
    transparent_crc(p_1390->g_11.x, "p_1390->g_11.x", print_hash_value);
    transparent_crc(p_1390->g_11.y, "p_1390->g_11.y", print_hash_value);
    transparent_crc(p_1390->g_11.z, "p_1390->g_11.z", print_hash_value);
    transparent_crc(p_1390->g_11.w, "p_1390->g_11.w", print_hash_value);
    transparent_crc(p_1390->g_24, "p_1390->g_24", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1390->g_30[i][j], "p_1390->g_30[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1390->g_31, "p_1390->g_31", print_hash_value);
    transparent_crc(p_1390->g_56, "p_1390->g_56", print_hash_value);
    transparent_crc(p_1390->g_68, "p_1390->g_68", print_hash_value);
    transparent_crc(p_1390->g_69, "p_1390->g_69", print_hash_value);
    transparent_crc(p_1390->g_72, "p_1390->g_72", print_hash_value);
    transparent_crc(p_1390->g_73, "p_1390->g_73", print_hash_value);
    transparent_crc(p_1390->g_75, "p_1390->g_75", print_hash_value);
    transparent_crc(p_1390->g_83, "p_1390->g_83", print_hash_value);
    transparent_crc(p_1390->g_90, "p_1390->g_90", print_hash_value);
    transparent_crc(p_1390->g_112, "p_1390->g_112", print_hash_value);
    transparent_crc(p_1390->g_150, "p_1390->g_150", print_hash_value);
    transparent_crc(p_1390->g_156, "p_1390->g_156", print_hash_value);
    transparent_crc(p_1390->g_169.s0, "p_1390->g_169.s0", print_hash_value);
    transparent_crc(p_1390->g_169.s1, "p_1390->g_169.s1", print_hash_value);
    transparent_crc(p_1390->g_169.s2, "p_1390->g_169.s2", print_hash_value);
    transparent_crc(p_1390->g_169.s3, "p_1390->g_169.s3", print_hash_value);
    transparent_crc(p_1390->g_169.s4, "p_1390->g_169.s4", print_hash_value);
    transparent_crc(p_1390->g_169.s5, "p_1390->g_169.s5", print_hash_value);
    transparent_crc(p_1390->g_169.s6, "p_1390->g_169.s6", print_hash_value);
    transparent_crc(p_1390->g_169.s7, "p_1390->g_169.s7", print_hash_value);
    transparent_crc(p_1390->g_169.s8, "p_1390->g_169.s8", print_hash_value);
    transparent_crc(p_1390->g_169.s9, "p_1390->g_169.s9", print_hash_value);
    transparent_crc(p_1390->g_169.sa, "p_1390->g_169.sa", print_hash_value);
    transparent_crc(p_1390->g_169.sb, "p_1390->g_169.sb", print_hash_value);
    transparent_crc(p_1390->g_169.sc, "p_1390->g_169.sc", print_hash_value);
    transparent_crc(p_1390->g_169.sd, "p_1390->g_169.sd", print_hash_value);
    transparent_crc(p_1390->g_169.se, "p_1390->g_169.se", print_hash_value);
    transparent_crc(p_1390->g_169.sf, "p_1390->g_169.sf", print_hash_value);
    transparent_crc(p_1390->g_192.f0, "p_1390->g_192.f0", print_hash_value);
    transparent_crc(p_1390->g_192.f1, "p_1390->g_192.f1", print_hash_value);
    transparent_crc(p_1390->g_192.f2, "p_1390->g_192.f2", print_hash_value);
    transparent_crc(p_1390->g_192.f3, "p_1390->g_192.f3", print_hash_value);
    transparent_crc(p_1390->g_192.f4, "p_1390->g_192.f4", print_hash_value);
    transparent_crc(p_1390->g_192.f5, "p_1390->g_192.f5", print_hash_value);
    transparent_crc(p_1390->g_192.f6, "p_1390->g_192.f6", print_hash_value);
    transparent_crc(p_1390->g_202, "p_1390->g_202", print_hash_value);
    transparent_crc(p_1390->g_209, "p_1390->g_209", print_hash_value);
    transparent_crc(p_1390->g_222, "p_1390->g_222", print_hash_value);
    transparent_crc(p_1390->g_235.s0, "p_1390->g_235.s0", print_hash_value);
    transparent_crc(p_1390->g_235.s1, "p_1390->g_235.s1", print_hash_value);
    transparent_crc(p_1390->g_235.s2, "p_1390->g_235.s2", print_hash_value);
    transparent_crc(p_1390->g_235.s3, "p_1390->g_235.s3", print_hash_value);
    transparent_crc(p_1390->g_235.s4, "p_1390->g_235.s4", print_hash_value);
    transparent_crc(p_1390->g_235.s5, "p_1390->g_235.s5", print_hash_value);
    transparent_crc(p_1390->g_235.s6, "p_1390->g_235.s6", print_hash_value);
    transparent_crc(p_1390->g_235.s7, "p_1390->g_235.s7", print_hash_value);
    transparent_crc(p_1390->g_252.x, "p_1390->g_252.x", print_hash_value);
    transparent_crc(p_1390->g_252.y, "p_1390->g_252.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1390->g_268[i].f0, "p_1390->g_268[i].f0", print_hash_value);
        transparent_crc(p_1390->g_268[i].f1, "p_1390->g_268[i].f1", print_hash_value);
        transparent_crc(p_1390->g_268[i].f2, "p_1390->g_268[i].f2", print_hash_value);
        transparent_crc(p_1390->g_268[i].f3, "p_1390->g_268[i].f3", print_hash_value);
        transparent_crc(p_1390->g_268[i].f4, "p_1390->g_268[i].f4", print_hash_value);
        transparent_crc(p_1390->g_268[i].f5, "p_1390->g_268[i].f5", print_hash_value);
        transparent_crc(p_1390->g_268[i].f6, "p_1390->g_268[i].f6", print_hash_value);

    }
    transparent_crc(p_1390->g_357.s0, "p_1390->g_357.s0", print_hash_value);
    transparent_crc(p_1390->g_357.s1, "p_1390->g_357.s1", print_hash_value);
    transparent_crc(p_1390->g_357.s2, "p_1390->g_357.s2", print_hash_value);
    transparent_crc(p_1390->g_357.s3, "p_1390->g_357.s3", print_hash_value);
    transparent_crc(p_1390->g_357.s4, "p_1390->g_357.s4", print_hash_value);
    transparent_crc(p_1390->g_357.s5, "p_1390->g_357.s5", print_hash_value);
    transparent_crc(p_1390->g_357.s6, "p_1390->g_357.s6", print_hash_value);
    transparent_crc(p_1390->g_357.s7, "p_1390->g_357.s7", print_hash_value);
    transparent_crc(p_1390->g_357.s8, "p_1390->g_357.s8", print_hash_value);
    transparent_crc(p_1390->g_357.s9, "p_1390->g_357.s9", print_hash_value);
    transparent_crc(p_1390->g_357.sa, "p_1390->g_357.sa", print_hash_value);
    transparent_crc(p_1390->g_357.sb, "p_1390->g_357.sb", print_hash_value);
    transparent_crc(p_1390->g_357.sc, "p_1390->g_357.sc", print_hash_value);
    transparent_crc(p_1390->g_357.sd, "p_1390->g_357.sd", print_hash_value);
    transparent_crc(p_1390->g_357.se, "p_1390->g_357.se", print_hash_value);
    transparent_crc(p_1390->g_357.sf, "p_1390->g_357.sf", print_hash_value);
    transparent_crc(p_1390->g_361.s0, "p_1390->g_361.s0", print_hash_value);
    transparent_crc(p_1390->g_361.s1, "p_1390->g_361.s1", print_hash_value);
    transparent_crc(p_1390->g_361.s2, "p_1390->g_361.s2", print_hash_value);
    transparent_crc(p_1390->g_361.s3, "p_1390->g_361.s3", print_hash_value);
    transparent_crc(p_1390->g_361.s4, "p_1390->g_361.s4", print_hash_value);
    transparent_crc(p_1390->g_361.s5, "p_1390->g_361.s5", print_hash_value);
    transparent_crc(p_1390->g_361.s6, "p_1390->g_361.s6", print_hash_value);
    transparent_crc(p_1390->g_361.s7, "p_1390->g_361.s7", print_hash_value);
    transparent_crc(p_1390->g_361.s8, "p_1390->g_361.s8", print_hash_value);
    transparent_crc(p_1390->g_361.s9, "p_1390->g_361.s9", print_hash_value);
    transparent_crc(p_1390->g_361.sa, "p_1390->g_361.sa", print_hash_value);
    transparent_crc(p_1390->g_361.sb, "p_1390->g_361.sb", print_hash_value);
    transparent_crc(p_1390->g_361.sc, "p_1390->g_361.sc", print_hash_value);
    transparent_crc(p_1390->g_361.sd, "p_1390->g_361.sd", print_hash_value);
    transparent_crc(p_1390->g_361.se, "p_1390->g_361.se", print_hash_value);
    transparent_crc(p_1390->g_361.sf, "p_1390->g_361.sf", print_hash_value);
    transparent_crc(p_1390->g_363.x, "p_1390->g_363.x", print_hash_value);
    transparent_crc(p_1390->g_363.y, "p_1390->g_363.y", print_hash_value);
    transparent_crc(p_1390->g_363.z, "p_1390->g_363.z", print_hash_value);
    transparent_crc(p_1390->g_363.w, "p_1390->g_363.w", print_hash_value);
    transparent_crc(p_1390->g_364.x, "p_1390->g_364.x", print_hash_value);
    transparent_crc(p_1390->g_364.y, "p_1390->g_364.y", print_hash_value);
    transparent_crc(p_1390->g_364.z, "p_1390->g_364.z", print_hash_value);
    transparent_crc(p_1390->g_364.w, "p_1390->g_364.w", print_hash_value);
    transparent_crc(p_1390->g_438, "p_1390->g_438", print_hash_value);
    transparent_crc(p_1390->g_439, "p_1390->g_439", print_hash_value);
    transparent_crc(p_1390->g_492.x, "p_1390->g_492.x", print_hash_value);
    transparent_crc(p_1390->g_492.y, "p_1390->g_492.y", print_hash_value);
    transparent_crc(p_1390->g_492.z, "p_1390->g_492.z", print_hash_value);
    transparent_crc(p_1390->g_492.w, "p_1390->g_492.w", print_hash_value);
    transparent_crc(p_1390->g_549.x, "p_1390->g_549.x", print_hash_value);
    transparent_crc(p_1390->g_549.y, "p_1390->g_549.y", print_hash_value);
    transparent_crc(p_1390->g_555, "p_1390->g_555", print_hash_value);
    transparent_crc(p_1390->g_556, "p_1390->g_556", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1390->g_560[i], "p_1390->g_560[i]", print_hash_value);

    }
    transparent_crc(p_1390->g_566.s0, "p_1390->g_566.s0", print_hash_value);
    transparent_crc(p_1390->g_566.s1, "p_1390->g_566.s1", print_hash_value);
    transparent_crc(p_1390->g_566.s2, "p_1390->g_566.s2", print_hash_value);
    transparent_crc(p_1390->g_566.s3, "p_1390->g_566.s3", print_hash_value);
    transparent_crc(p_1390->g_566.s4, "p_1390->g_566.s4", print_hash_value);
    transparent_crc(p_1390->g_566.s5, "p_1390->g_566.s5", print_hash_value);
    transparent_crc(p_1390->g_566.s6, "p_1390->g_566.s6", print_hash_value);
    transparent_crc(p_1390->g_566.s7, "p_1390->g_566.s7", print_hash_value);
    transparent_crc(p_1390->g_566.s8, "p_1390->g_566.s8", print_hash_value);
    transparent_crc(p_1390->g_566.s9, "p_1390->g_566.s9", print_hash_value);
    transparent_crc(p_1390->g_566.sa, "p_1390->g_566.sa", print_hash_value);
    transparent_crc(p_1390->g_566.sb, "p_1390->g_566.sb", print_hash_value);
    transparent_crc(p_1390->g_566.sc, "p_1390->g_566.sc", print_hash_value);
    transparent_crc(p_1390->g_566.sd, "p_1390->g_566.sd", print_hash_value);
    transparent_crc(p_1390->g_566.se, "p_1390->g_566.se", print_hash_value);
    transparent_crc(p_1390->g_566.sf, "p_1390->g_566.sf", print_hash_value);
    transparent_crc(p_1390->g_568.x, "p_1390->g_568.x", print_hash_value);
    transparent_crc(p_1390->g_568.y, "p_1390->g_568.y", print_hash_value);
    transparent_crc(p_1390->g_569.x, "p_1390->g_569.x", print_hash_value);
    transparent_crc(p_1390->g_569.y, "p_1390->g_569.y", print_hash_value);
    transparent_crc(p_1390->g_569.z, "p_1390->g_569.z", print_hash_value);
    transparent_crc(p_1390->g_569.w, "p_1390->g_569.w", print_hash_value);
    transparent_crc(p_1390->g_570.s0, "p_1390->g_570.s0", print_hash_value);
    transparent_crc(p_1390->g_570.s1, "p_1390->g_570.s1", print_hash_value);
    transparent_crc(p_1390->g_570.s2, "p_1390->g_570.s2", print_hash_value);
    transparent_crc(p_1390->g_570.s3, "p_1390->g_570.s3", print_hash_value);
    transparent_crc(p_1390->g_570.s4, "p_1390->g_570.s4", print_hash_value);
    transparent_crc(p_1390->g_570.s5, "p_1390->g_570.s5", print_hash_value);
    transparent_crc(p_1390->g_570.s6, "p_1390->g_570.s6", print_hash_value);
    transparent_crc(p_1390->g_570.s7, "p_1390->g_570.s7", print_hash_value);
    transparent_crc(p_1390->g_570.s8, "p_1390->g_570.s8", print_hash_value);
    transparent_crc(p_1390->g_570.s9, "p_1390->g_570.s9", print_hash_value);
    transparent_crc(p_1390->g_570.sa, "p_1390->g_570.sa", print_hash_value);
    transparent_crc(p_1390->g_570.sb, "p_1390->g_570.sb", print_hash_value);
    transparent_crc(p_1390->g_570.sc, "p_1390->g_570.sc", print_hash_value);
    transparent_crc(p_1390->g_570.sd, "p_1390->g_570.sd", print_hash_value);
    transparent_crc(p_1390->g_570.se, "p_1390->g_570.se", print_hash_value);
    transparent_crc(p_1390->g_570.sf, "p_1390->g_570.sf", print_hash_value);
    transparent_crc(p_1390->g_578.s0, "p_1390->g_578.s0", print_hash_value);
    transparent_crc(p_1390->g_578.s1, "p_1390->g_578.s1", print_hash_value);
    transparent_crc(p_1390->g_578.s2, "p_1390->g_578.s2", print_hash_value);
    transparent_crc(p_1390->g_578.s3, "p_1390->g_578.s3", print_hash_value);
    transparent_crc(p_1390->g_578.s4, "p_1390->g_578.s4", print_hash_value);
    transparent_crc(p_1390->g_578.s5, "p_1390->g_578.s5", print_hash_value);
    transparent_crc(p_1390->g_578.s6, "p_1390->g_578.s6", print_hash_value);
    transparent_crc(p_1390->g_578.s7, "p_1390->g_578.s7", print_hash_value);
    transparent_crc(p_1390->g_580.s0, "p_1390->g_580.s0", print_hash_value);
    transparent_crc(p_1390->g_580.s1, "p_1390->g_580.s1", print_hash_value);
    transparent_crc(p_1390->g_580.s2, "p_1390->g_580.s2", print_hash_value);
    transparent_crc(p_1390->g_580.s3, "p_1390->g_580.s3", print_hash_value);
    transparent_crc(p_1390->g_580.s4, "p_1390->g_580.s4", print_hash_value);
    transparent_crc(p_1390->g_580.s5, "p_1390->g_580.s5", print_hash_value);
    transparent_crc(p_1390->g_580.s6, "p_1390->g_580.s6", print_hash_value);
    transparent_crc(p_1390->g_580.s7, "p_1390->g_580.s7", print_hash_value);
    transparent_crc(p_1390->g_581.s0, "p_1390->g_581.s0", print_hash_value);
    transparent_crc(p_1390->g_581.s1, "p_1390->g_581.s1", print_hash_value);
    transparent_crc(p_1390->g_581.s2, "p_1390->g_581.s2", print_hash_value);
    transparent_crc(p_1390->g_581.s3, "p_1390->g_581.s3", print_hash_value);
    transparent_crc(p_1390->g_581.s4, "p_1390->g_581.s4", print_hash_value);
    transparent_crc(p_1390->g_581.s5, "p_1390->g_581.s5", print_hash_value);
    transparent_crc(p_1390->g_581.s6, "p_1390->g_581.s6", print_hash_value);
    transparent_crc(p_1390->g_581.s7, "p_1390->g_581.s7", print_hash_value);
    transparent_crc(p_1390->g_581.s8, "p_1390->g_581.s8", print_hash_value);
    transparent_crc(p_1390->g_581.s9, "p_1390->g_581.s9", print_hash_value);
    transparent_crc(p_1390->g_581.sa, "p_1390->g_581.sa", print_hash_value);
    transparent_crc(p_1390->g_581.sb, "p_1390->g_581.sb", print_hash_value);
    transparent_crc(p_1390->g_581.sc, "p_1390->g_581.sc", print_hash_value);
    transparent_crc(p_1390->g_581.sd, "p_1390->g_581.sd", print_hash_value);
    transparent_crc(p_1390->g_581.se, "p_1390->g_581.se", print_hash_value);
    transparent_crc(p_1390->g_581.sf, "p_1390->g_581.sf", print_hash_value);
    transparent_crc(p_1390->g_582.x, "p_1390->g_582.x", print_hash_value);
    transparent_crc(p_1390->g_582.y, "p_1390->g_582.y", print_hash_value);
    transparent_crc(p_1390->g_582.z, "p_1390->g_582.z", print_hash_value);
    transparent_crc(p_1390->g_582.w, "p_1390->g_582.w", print_hash_value);
    transparent_crc(p_1390->g_830.x, "p_1390->g_830.x", print_hash_value);
    transparent_crc(p_1390->g_830.y, "p_1390->g_830.y", print_hash_value);
    transparent_crc(p_1390->g_847.s0, "p_1390->g_847.s0", print_hash_value);
    transparent_crc(p_1390->g_847.s1, "p_1390->g_847.s1", print_hash_value);
    transparent_crc(p_1390->g_847.s2, "p_1390->g_847.s2", print_hash_value);
    transparent_crc(p_1390->g_847.s3, "p_1390->g_847.s3", print_hash_value);
    transparent_crc(p_1390->g_847.s4, "p_1390->g_847.s4", print_hash_value);
    transparent_crc(p_1390->g_847.s5, "p_1390->g_847.s5", print_hash_value);
    transparent_crc(p_1390->g_847.s6, "p_1390->g_847.s6", print_hash_value);
    transparent_crc(p_1390->g_847.s7, "p_1390->g_847.s7", print_hash_value);
    transparent_crc(p_1390->g_847.s8, "p_1390->g_847.s8", print_hash_value);
    transparent_crc(p_1390->g_847.s9, "p_1390->g_847.s9", print_hash_value);
    transparent_crc(p_1390->g_847.sa, "p_1390->g_847.sa", print_hash_value);
    transparent_crc(p_1390->g_847.sb, "p_1390->g_847.sb", print_hash_value);
    transparent_crc(p_1390->g_847.sc, "p_1390->g_847.sc", print_hash_value);
    transparent_crc(p_1390->g_847.sd, "p_1390->g_847.sd", print_hash_value);
    transparent_crc(p_1390->g_847.se, "p_1390->g_847.se", print_hash_value);
    transparent_crc(p_1390->g_847.sf, "p_1390->g_847.sf", print_hash_value);
    transparent_crc(p_1390->g_881.s0, "p_1390->g_881.s0", print_hash_value);
    transparent_crc(p_1390->g_881.s1, "p_1390->g_881.s1", print_hash_value);
    transparent_crc(p_1390->g_881.s2, "p_1390->g_881.s2", print_hash_value);
    transparent_crc(p_1390->g_881.s3, "p_1390->g_881.s3", print_hash_value);
    transparent_crc(p_1390->g_881.s4, "p_1390->g_881.s4", print_hash_value);
    transparent_crc(p_1390->g_881.s5, "p_1390->g_881.s5", print_hash_value);
    transparent_crc(p_1390->g_881.s6, "p_1390->g_881.s6", print_hash_value);
    transparent_crc(p_1390->g_881.s7, "p_1390->g_881.s7", print_hash_value);
    transparent_crc(p_1390->g_881.s8, "p_1390->g_881.s8", print_hash_value);
    transparent_crc(p_1390->g_881.s9, "p_1390->g_881.s9", print_hash_value);
    transparent_crc(p_1390->g_881.sa, "p_1390->g_881.sa", print_hash_value);
    transparent_crc(p_1390->g_881.sb, "p_1390->g_881.sb", print_hash_value);
    transparent_crc(p_1390->g_881.sc, "p_1390->g_881.sc", print_hash_value);
    transparent_crc(p_1390->g_881.sd, "p_1390->g_881.sd", print_hash_value);
    transparent_crc(p_1390->g_881.se, "p_1390->g_881.se", print_hash_value);
    transparent_crc(p_1390->g_881.sf, "p_1390->g_881.sf", print_hash_value);
    transparent_crc(p_1390->g_962.f0, "p_1390->g_962.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1390->g_963[i][j].f0, "p_1390->g_963[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1390->g_964.f0, "p_1390->g_964.f0", print_hash_value);
    transparent_crc(p_1390->g_965.f0, "p_1390->g_965.f0", print_hash_value);
    transparent_crc(p_1390->g_966.f0, "p_1390->g_966.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1390->g_967[i].f0, "p_1390->g_967[i].f0", print_hash_value);

    }
    transparent_crc(p_1390->g_968.f0, "p_1390->g_968.f0", print_hash_value);
    transparent_crc(p_1390->g_969.f0, "p_1390->g_969.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1390->g_970[i].f0, "p_1390->g_970[i].f0", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1390->g_971[i][j][k].f0, "p_1390->g_971[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1390->g_972.f0, "p_1390->g_972.f0", print_hash_value);
    transparent_crc(p_1390->g_973.f0, "p_1390->g_973.f0", print_hash_value);
    transparent_crc(p_1390->g_974.f0, "p_1390->g_974.f0", print_hash_value);
    transparent_crc(p_1390->g_975.f0, "p_1390->g_975.f0", print_hash_value);
    transparent_crc(p_1390->g_976.f0, "p_1390->g_976.f0", print_hash_value);
    transparent_crc(p_1390->g_977.f0, "p_1390->g_977.f0", print_hash_value);
    transparent_crc(p_1390->g_978.f0, "p_1390->g_978.f0", print_hash_value);
    transparent_crc(p_1390->g_979.f0, "p_1390->g_979.f0", print_hash_value);
    transparent_crc(p_1390->g_980.f0, "p_1390->g_980.f0", print_hash_value);
    transparent_crc(p_1390->g_981.f0, "p_1390->g_981.f0", print_hash_value);
    transparent_crc(p_1390->g_982.f0, "p_1390->g_982.f0", print_hash_value);
    transparent_crc(p_1390->g_983.f0, "p_1390->g_983.f0", print_hash_value);
    transparent_crc(p_1390->g_984.f0, "p_1390->g_984.f0", print_hash_value);
    transparent_crc(p_1390->g_985.f0, "p_1390->g_985.f0", print_hash_value);
    transparent_crc(p_1390->g_986.f0, "p_1390->g_986.f0", print_hash_value);
    transparent_crc(p_1390->g_987.f0, "p_1390->g_987.f0", print_hash_value);
    transparent_crc(p_1390->g_988.f0, "p_1390->g_988.f0", print_hash_value);
    transparent_crc(p_1390->g_989.f0, "p_1390->g_989.f0", print_hash_value);
    transparent_crc(p_1390->g_990.f0, "p_1390->g_990.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1390->g_991[i][j][k].f0, "p_1390->g_991[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1390->g_992.f0, "p_1390->g_992.f0", print_hash_value);
    transparent_crc(p_1390->g_993.f0, "p_1390->g_993.f0", print_hash_value);
    transparent_crc(p_1390->g_994.f0, "p_1390->g_994.f0", print_hash_value);
    transparent_crc(p_1390->g_995.f0, "p_1390->g_995.f0", print_hash_value);
    transparent_crc(p_1390->g_996.f0, "p_1390->g_996.f0", print_hash_value);
    transparent_crc(p_1390->g_997.f0, "p_1390->g_997.f0", print_hash_value);
    transparent_crc(p_1390->g_998.f0, "p_1390->g_998.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1390->g_999[i].f0, "p_1390->g_999[i].f0", print_hash_value);

    }
    transparent_crc(p_1390->g_1000.f0, "p_1390->g_1000.f0", print_hash_value);
    transparent_crc(p_1390->g_1001.f0, "p_1390->g_1001.f0", print_hash_value);
    transparent_crc(p_1390->g_1002.f0, "p_1390->g_1002.f0", print_hash_value);
    transparent_crc(p_1390->g_1003.f0, "p_1390->g_1003.f0", print_hash_value);
    transparent_crc(p_1390->g_1004.f0, "p_1390->g_1004.f0", print_hash_value);
    transparent_crc(p_1390->g_1005.f0, "p_1390->g_1005.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1390->g_1006[i][j].f0, "p_1390->g_1006[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1390->g_1007.f0, "p_1390->g_1007.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1390->g_1008[i].f0, "p_1390->g_1008[i].f0", print_hash_value);

    }
    transparent_crc(p_1390->g_1009.f0, "p_1390->g_1009.f0", print_hash_value);
    transparent_crc(p_1390->g_1010.f0, "p_1390->g_1010.f0", print_hash_value);
    transparent_crc(p_1390->g_1011.f0, "p_1390->g_1011.f0", print_hash_value);
    transparent_crc(p_1390->g_1012.f0, "p_1390->g_1012.f0", print_hash_value);
    transparent_crc(p_1390->g_1013.f0, "p_1390->g_1013.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1390->g_1014[i].f0, "p_1390->g_1014[i].f0", print_hash_value);

    }
    transparent_crc(p_1390->g_1015.f0, "p_1390->g_1015.f0", print_hash_value);
    transparent_crc(p_1390->g_1016.f0, "p_1390->g_1016.f0", print_hash_value);
    transparent_crc(p_1390->g_1017.f0, "p_1390->g_1017.f0", print_hash_value);
    transparent_crc(p_1390->g_1018.f0, "p_1390->g_1018.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1390->g_1019[i][j].f0, "p_1390->g_1019[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1390->g_1020.f0, "p_1390->g_1020.f0", print_hash_value);
    transparent_crc(p_1390->g_1021.f0, "p_1390->g_1021.f0", print_hash_value);
    transparent_crc(p_1390->g_1022.f0, "p_1390->g_1022.f0", print_hash_value);
    transparent_crc(p_1390->g_1023.f0, "p_1390->g_1023.f0", print_hash_value);
    transparent_crc(p_1390->g_1024.f0, "p_1390->g_1024.f0", print_hash_value);
    transparent_crc(p_1390->g_1025.f0, "p_1390->g_1025.f0", print_hash_value);
    transparent_crc(p_1390->g_1026.f0, "p_1390->g_1026.f0", print_hash_value);
    transparent_crc(p_1390->g_1027.f0, "p_1390->g_1027.f0", print_hash_value);
    transparent_crc(p_1390->g_1028.f0, "p_1390->g_1028.f0", print_hash_value);
    transparent_crc(p_1390->g_1029.f0, "p_1390->g_1029.f0", print_hash_value);
    transparent_crc(p_1390->g_1030.f0, "p_1390->g_1030.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1390->g_1031[i][j].f0, "p_1390->g_1031[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1390->g_1032.f0, "p_1390->g_1032.f0", print_hash_value);
    transparent_crc(p_1390->g_1033.f0, "p_1390->g_1033.f0", print_hash_value);
    transparent_crc(p_1390->g_1034.f0, "p_1390->g_1034.f0", print_hash_value);
    transparent_crc(p_1390->g_1035.f0, "p_1390->g_1035.f0", print_hash_value);
    transparent_crc(p_1390->g_1036.f0, "p_1390->g_1036.f0", print_hash_value);
    transparent_crc(p_1390->g_1037.f0, "p_1390->g_1037.f0", print_hash_value);
    transparent_crc(p_1390->g_1038.f0, "p_1390->g_1038.f0", print_hash_value);
    transparent_crc(p_1390->g_1039.f0, "p_1390->g_1039.f0", print_hash_value);
    transparent_crc(p_1390->g_1040.f0, "p_1390->g_1040.f0", print_hash_value);
    transparent_crc(p_1390->g_1041.f0, "p_1390->g_1041.f0", print_hash_value);
    transparent_crc(p_1390->g_1042.f0, "p_1390->g_1042.f0", print_hash_value);
    transparent_crc(p_1390->g_1043.f0, "p_1390->g_1043.f0", print_hash_value);
    transparent_crc(p_1390->g_1044.f0, "p_1390->g_1044.f0", print_hash_value);
    transparent_crc(p_1390->g_1046.f0, "p_1390->g_1046.f0", print_hash_value);
    transparent_crc(p_1390->g_1048.f0, "p_1390->g_1048.f0", print_hash_value);
    transparent_crc(p_1390->g_1055.x, "p_1390->g_1055.x", print_hash_value);
    transparent_crc(p_1390->g_1055.y, "p_1390->g_1055.y", print_hash_value);
    transparent_crc(p_1390->g_1055.z, "p_1390->g_1055.z", print_hash_value);
    transparent_crc(p_1390->g_1055.w, "p_1390->g_1055.w", print_hash_value);
    transparent_crc(p_1390->g_1125, "p_1390->g_1125", print_hash_value);
    transparent_crc(p_1390->g_1126.x, "p_1390->g_1126.x", print_hash_value);
    transparent_crc(p_1390->g_1126.y, "p_1390->g_1126.y", print_hash_value);
    transparent_crc(p_1390->g_1126.z, "p_1390->g_1126.z", print_hash_value);
    transparent_crc(p_1390->g_1126.w, "p_1390->g_1126.w", print_hash_value);
    transparent_crc(p_1390->g_1128.s0, "p_1390->g_1128.s0", print_hash_value);
    transparent_crc(p_1390->g_1128.s1, "p_1390->g_1128.s1", print_hash_value);
    transparent_crc(p_1390->g_1128.s2, "p_1390->g_1128.s2", print_hash_value);
    transparent_crc(p_1390->g_1128.s3, "p_1390->g_1128.s3", print_hash_value);
    transparent_crc(p_1390->g_1128.s4, "p_1390->g_1128.s4", print_hash_value);
    transparent_crc(p_1390->g_1128.s5, "p_1390->g_1128.s5", print_hash_value);
    transparent_crc(p_1390->g_1128.s6, "p_1390->g_1128.s6", print_hash_value);
    transparent_crc(p_1390->g_1128.s7, "p_1390->g_1128.s7", print_hash_value);
    transparent_crc(p_1390->g_1129.s0, "p_1390->g_1129.s0", print_hash_value);
    transparent_crc(p_1390->g_1129.s1, "p_1390->g_1129.s1", print_hash_value);
    transparent_crc(p_1390->g_1129.s2, "p_1390->g_1129.s2", print_hash_value);
    transparent_crc(p_1390->g_1129.s3, "p_1390->g_1129.s3", print_hash_value);
    transparent_crc(p_1390->g_1129.s4, "p_1390->g_1129.s4", print_hash_value);
    transparent_crc(p_1390->g_1129.s5, "p_1390->g_1129.s5", print_hash_value);
    transparent_crc(p_1390->g_1129.s6, "p_1390->g_1129.s6", print_hash_value);
    transparent_crc(p_1390->g_1129.s7, "p_1390->g_1129.s7", print_hash_value);
    transparent_crc(p_1390->g_1129.s8, "p_1390->g_1129.s8", print_hash_value);
    transparent_crc(p_1390->g_1129.s9, "p_1390->g_1129.s9", print_hash_value);
    transparent_crc(p_1390->g_1129.sa, "p_1390->g_1129.sa", print_hash_value);
    transparent_crc(p_1390->g_1129.sb, "p_1390->g_1129.sb", print_hash_value);
    transparent_crc(p_1390->g_1129.sc, "p_1390->g_1129.sc", print_hash_value);
    transparent_crc(p_1390->g_1129.sd, "p_1390->g_1129.sd", print_hash_value);
    transparent_crc(p_1390->g_1129.se, "p_1390->g_1129.se", print_hash_value);
    transparent_crc(p_1390->g_1129.sf, "p_1390->g_1129.sf", print_hash_value);
    transparent_crc(p_1390->g_1140, "p_1390->g_1140", print_hash_value);
    transparent_crc(p_1390->g_1154.x, "p_1390->g_1154.x", print_hash_value);
    transparent_crc(p_1390->g_1154.y, "p_1390->g_1154.y", print_hash_value);
    transparent_crc(p_1390->g_1171, "p_1390->g_1171", print_hash_value);
    transparent_crc(p_1390->g_1176.x, "p_1390->g_1176.x", print_hash_value);
    transparent_crc(p_1390->g_1176.y, "p_1390->g_1176.y", print_hash_value);
    transparent_crc(p_1390->g_1185.f0, "p_1390->g_1185.f0", print_hash_value);
    transparent_crc(p_1390->g_1185.f1, "p_1390->g_1185.f1", print_hash_value);
    transparent_crc(p_1390->g_1185.f2, "p_1390->g_1185.f2", print_hash_value);
    transparent_crc(p_1390->g_1185.f3, "p_1390->g_1185.f3", print_hash_value);
    transparent_crc(p_1390->g_1185.f4, "p_1390->g_1185.f4", print_hash_value);
    transparent_crc(p_1390->g_1185.f5, "p_1390->g_1185.f5", print_hash_value);
    transparent_crc(p_1390->g_1185.f6, "p_1390->g_1185.f6", print_hash_value);
    transparent_crc(p_1390->g_1191.f0, "p_1390->g_1191.f0", print_hash_value);
    transparent_crc(p_1390->g_1191.f1, "p_1390->g_1191.f1", print_hash_value);
    transparent_crc(p_1390->g_1191.f2, "p_1390->g_1191.f2", print_hash_value);
    transparent_crc(p_1390->g_1191.f3, "p_1390->g_1191.f3", print_hash_value);
    transparent_crc(p_1390->g_1191.f4, "p_1390->g_1191.f4", print_hash_value);
    transparent_crc(p_1390->g_1191.f5, "p_1390->g_1191.f5", print_hash_value);
    transparent_crc(p_1390->g_1191.f6, "p_1390->g_1191.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1390->g_1228[i].f0, "p_1390->g_1228[i].f0", print_hash_value);
        transparent_crc(p_1390->g_1228[i].f1, "p_1390->g_1228[i].f1", print_hash_value);
        transparent_crc(p_1390->g_1228[i].f2, "p_1390->g_1228[i].f2", print_hash_value);
        transparent_crc(p_1390->g_1228[i].f3, "p_1390->g_1228[i].f3", print_hash_value);
        transparent_crc(p_1390->g_1228[i].f4, "p_1390->g_1228[i].f4", print_hash_value);
        transparent_crc(p_1390->g_1228[i].f5, "p_1390->g_1228[i].f5", print_hash_value);
        transparent_crc(p_1390->g_1228[i].f6, "p_1390->g_1228[i].f6", print_hash_value);

    }
    transparent_crc(p_1390->g_1235.x, "p_1390->g_1235.x", print_hash_value);
    transparent_crc(p_1390->g_1235.y, "p_1390->g_1235.y", print_hash_value);
    transparent_crc(p_1390->g_1235.z, "p_1390->g_1235.z", print_hash_value);
    transparent_crc(p_1390->g_1235.w, "p_1390->g_1235.w", print_hash_value);
    transparent_crc(p_1390->g_1236.x, "p_1390->g_1236.x", print_hash_value);
    transparent_crc(p_1390->g_1236.y, "p_1390->g_1236.y", print_hash_value);
    transparent_crc(p_1390->g_1239.x, "p_1390->g_1239.x", print_hash_value);
    transparent_crc(p_1390->g_1239.y, "p_1390->g_1239.y", print_hash_value);
    transparent_crc(p_1390->g_1247, "p_1390->g_1247", print_hash_value);
    transparent_crc(p_1390->g_1274.s0, "p_1390->g_1274.s0", print_hash_value);
    transparent_crc(p_1390->g_1274.s1, "p_1390->g_1274.s1", print_hash_value);
    transparent_crc(p_1390->g_1274.s2, "p_1390->g_1274.s2", print_hash_value);
    transparent_crc(p_1390->g_1274.s3, "p_1390->g_1274.s3", print_hash_value);
    transparent_crc(p_1390->g_1274.s4, "p_1390->g_1274.s4", print_hash_value);
    transparent_crc(p_1390->g_1274.s5, "p_1390->g_1274.s5", print_hash_value);
    transparent_crc(p_1390->g_1274.s6, "p_1390->g_1274.s6", print_hash_value);
    transparent_crc(p_1390->g_1274.s7, "p_1390->g_1274.s7", print_hash_value);
    transparent_crc(p_1390->g_1274.s8, "p_1390->g_1274.s8", print_hash_value);
    transparent_crc(p_1390->g_1274.s9, "p_1390->g_1274.s9", print_hash_value);
    transparent_crc(p_1390->g_1274.sa, "p_1390->g_1274.sa", print_hash_value);
    transparent_crc(p_1390->g_1274.sb, "p_1390->g_1274.sb", print_hash_value);
    transparent_crc(p_1390->g_1274.sc, "p_1390->g_1274.sc", print_hash_value);
    transparent_crc(p_1390->g_1274.sd, "p_1390->g_1274.sd", print_hash_value);
    transparent_crc(p_1390->g_1274.se, "p_1390->g_1274.se", print_hash_value);
    transparent_crc(p_1390->g_1274.sf, "p_1390->g_1274.sf", print_hash_value);
    transparent_crc(p_1390->g_1290, "p_1390->g_1290", print_hash_value);
    transparent_crc(p_1390->g_1296.s0, "p_1390->g_1296.s0", print_hash_value);
    transparent_crc(p_1390->g_1296.s1, "p_1390->g_1296.s1", print_hash_value);
    transparent_crc(p_1390->g_1296.s2, "p_1390->g_1296.s2", print_hash_value);
    transparent_crc(p_1390->g_1296.s3, "p_1390->g_1296.s3", print_hash_value);
    transparent_crc(p_1390->g_1296.s4, "p_1390->g_1296.s4", print_hash_value);
    transparent_crc(p_1390->g_1296.s5, "p_1390->g_1296.s5", print_hash_value);
    transparent_crc(p_1390->g_1296.s6, "p_1390->g_1296.s6", print_hash_value);
    transparent_crc(p_1390->g_1296.s7, "p_1390->g_1296.s7", print_hash_value);
    transparent_crc(p_1390->g_1296.s8, "p_1390->g_1296.s8", print_hash_value);
    transparent_crc(p_1390->g_1296.s9, "p_1390->g_1296.s9", print_hash_value);
    transparent_crc(p_1390->g_1296.sa, "p_1390->g_1296.sa", print_hash_value);
    transparent_crc(p_1390->g_1296.sb, "p_1390->g_1296.sb", print_hash_value);
    transparent_crc(p_1390->g_1296.sc, "p_1390->g_1296.sc", print_hash_value);
    transparent_crc(p_1390->g_1296.sd, "p_1390->g_1296.sd", print_hash_value);
    transparent_crc(p_1390->g_1296.se, "p_1390->g_1296.se", print_hash_value);
    transparent_crc(p_1390->g_1296.sf, "p_1390->g_1296.sf", print_hash_value);
    transparent_crc(p_1390->g_1340.x, "p_1390->g_1340.x", print_hash_value);
    transparent_crc(p_1390->g_1340.y, "p_1390->g_1340.y", print_hash_value);
    transparent_crc(p_1390->g_1341.s0, "p_1390->g_1341.s0", print_hash_value);
    transparent_crc(p_1390->g_1341.s1, "p_1390->g_1341.s1", print_hash_value);
    transparent_crc(p_1390->g_1341.s2, "p_1390->g_1341.s2", print_hash_value);
    transparent_crc(p_1390->g_1341.s3, "p_1390->g_1341.s3", print_hash_value);
    transparent_crc(p_1390->g_1341.s4, "p_1390->g_1341.s4", print_hash_value);
    transparent_crc(p_1390->g_1341.s5, "p_1390->g_1341.s5", print_hash_value);
    transparent_crc(p_1390->g_1341.s6, "p_1390->g_1341.s6", print_hash_value);
    transparent_crc(p_1390->g_1341.s7, "p_1390->g_1341.s7", print_hash_value);
    transparent_crc(p_1390->g_1342.x, "p_1390->g_1342.x", print_hash_value);
    transparent_crc(p_1390->g_1342.y, "p_1390->g_1342.y", print_hash_value);
    transparent_crc(p_1390->g_1342.z, "p_1390->g_1342.z", print_hash_value);
    transparent_crc(p_1390->g_1342.w, "p_1390->g_1342.w", print_hash_value);
    transparent_crc(p_1390->g_1374.x, "p_1390->g_1374.x", print_hash_value);
    transparent_crc(p_1390->g_1374.y, "p_1390->g_1374.y", print_hash_value);
    transparent_crc(p_1390->g_1381.x, "p_1390->g_1381.x", print_hash_value);
    transparent_crc(p_1390->g_1381.y, "p_1390->g_1381.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1390->g_1383[i][j][k], "p_1390->g_1383[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1390->v_collective, "p_1390->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 97; i++)
            transparent_crc(p_1390->g_special_values[i + 97 * get_linear_group_id()], "p_1390->g_special_values[i + 97 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 97; i++)
            transparent_crc(p_1390->l_special_values[i], "p_1390->l_special_values[i]", print_hash_value);
    transparent_crc(p_1390->l_comm_values[get_linear_local_id()], "p_1390->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1390->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_1390->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
