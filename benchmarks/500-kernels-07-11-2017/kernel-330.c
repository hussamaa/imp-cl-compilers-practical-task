// -g 77,82,1 -l 1,41,1
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


// Seed: 3126878993

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   volatile int32_t  f1;
   volatile int8_t * f2;
   volatile uint16_t  f3;
   uint32_t  f4;
};

struct S1 {
    int32_t g_2;
    int32_t g_7;
    uint8_t g_30[4];
    uint8_t g_44[6][1];
    uint8_t *g_43[5][8][2];
    union U0 g_45;
    int32_t g_58;
    int32_t g_63;
    volatile uint32_t g_64;
    int32_t *g_68;
    int32_t ** volatile g_67;
    uint64_t g_97;
    union U0 g_99;
    uint64_t g_101;
    uint64_t *g_100;
    uint32_t g_118;
    uint32_t g_120;
    int32_t ** volatile g_122;
    int32_t g_135;
    volatile int32_t g_144;
    volatile uint16_t g_145;
    volatile uint16_t g_157;
    union U0 ** volatile g_163;
    union U0 *g_165;
    union U0 ** volatile g_164[8];
    volatile union U0 g_184;
    int32_t g_194;
    volatile uint64_t g_196;
    union U0 g_199;
    int64_t g_206;
    int16_t g_223;
    union U0 g_225;
    int8_t g_238;
    uint16_t g_258;
    int32_t g_268;
    int64_t g_270;
    int32_t g_272;
    volatile int8_t g_273;
    int8_t g_274;
    volatile uint16_t g_276;
    int32_t ** volatile g_279;
    int64_t g_297;
    int8_t *g_301;
    int8_t **g_300;
    uint64_t g_345[3];
    union U0 g_358;
    uint8_t g_393;
    volatile uint16_t g_401;
    int32_t ** volatile g_425;
    uint64_t *g_459;
    union U0 ** volatile g_469[4][1];
    union U0 g_480;
    volatile int32_t g_503;
    int32_t g_504;
    volatile uint32_t g_512;
    int32_t ** volatile g_515[10];
    int32_t ** volatile g_586;
    union U0 g_641;
    int32_t ** volatile g_681;
    volatile int16_t g_714;
    volatile int16_t *g_713[1];
    volatile int16_t * volatile * volatile g_712;
    int32_t ** volatile g_717;
    volatile union U0 g_752;
    uint32_t g_769[10][5];
    int32_t ** volatile g_770;
    uint8_t * volatile *g_829[5];
    uint8_t * volatile ** volatile g_828;
    int64_t g_831;
    int16_t g_856;
    union U0 **g_880[3];
    int32_t ** volatile g_887;
    int32_t ** volatile g_888;
    uint64_t g_901;
    uint64_t ***g_912;
    uint8_t **g_975;
    int8_t g_988[4][7];
    union U0 g_989;
    union U0 g_1005;
    int16_t g_1050;
    uint16_t g_1103[4];
    uint64_t g_1139;
    volatile uint32_t g_1270;
    union U0 g_1290;
    volatile union U0 * volatile g_1342;
    volatile union U0 * volatile * volatile g_1341;
    volatile union U0 * volatile * volatile * volatile g_1340;
    volatile uint64_t g_1362;
    volatile uint64_t *g_1361[3];
    volatile uint64_t **g_1360;
    int16_t g_1363[5];
    volatile int16_t g_1403;
    int64_t g_1416;
    int32_t * volatile g_1454;
    int32_t * volatile *g_1468;
    int32_t * volatile * volatile *g_1467;
    int32_t * volatile * volatile * volatile *g_1466;
    int16_t g_1519;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S1 * p_1543);
union U0  func_10(int32_t * p_11, uint64_t  p_12, struct S1 * p_1543);
int32_t * func_13(uint8_t  p_14, int8_t  p_15, int32_t * p_16, struct S1 * p_1543);
uint32_t  func_21(uint8_t  p_22, int16_t  p_23, int8_t  p_24, struct S1 * p_1543);
int8_t  func_33(uint64_t  p_34, struct S1 * p_1543);
uint16_t  func_38(uint16_t  p_39, int32_t  p_40, int32_t * p_41, uint32_t  p_42, struct S1 * p_1543);
int16_t  func_46(uint32_t  p_47, uint8_t * p_48, int8_t  p_49, int8_t  p_50, int32_t  p_51, struct S1 * p_1543);
int8_t * func_71(uint64_t  p_72, uint16_t  p_73, int32_t * p_74, int32_t ** p_75, struct S1 * p_1543);
int16_t  func_81(uint8_t  p_82, int64_t  p_83, int64_t * p_84, int32_t  p_85, uint32_t  p_86, struct S1 * p_1543);
uint8_t  func_89(uint32_t  p_90, struct S1 * p_1543);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1543->g_2 p_1543->g_7 p_1543->g_1416 p_1543->g_770 p_1543->g_184.f0
 * writes: p_1543->g_2 p_1543->g_7 p_1543->g_1416 p_1543->g_68
 */
int8_t  func_1(struct S1 * p_1543)
{ /* block id: 4 */
    int32_t l_35 = 2L;
    uint64_t l_985 = 0xC58AB4374B283F0BL;
    int32_t *l_991 = &p_1543->g_2;
    int32_t l_1291 = 4L;
    int8_t ***l_1294 = &p_1543->g_300;
    int16_t l_1333[7][1] = {{7L},{7L},{7L},{7L},{7L},{7L},{7L}};
    uint64_t **l_1335 = &p_1543->g_100;
    int32_t *l_1358 = &p_1543->g_1290.f0;
    int32_t **l_1357 = &l_1358;
    uint8_t l_1359[3];
    uint16_t l_1386[6] = {0x2265L,0x2265L,0x2265L,0x2265L,0x2265L,0x2265L};
    uint16_t l_1414 = 0xEA8DL;
    uint32_t l_1418 = 0x4239BC54L;
    union U0 **l_1492 = &p_1543->g_165;
    int32_t *l_1524[10] = {&p_1543->g_268,&p_1543->g_268,&p_1543->g_268,&p_1543->g_268,&p_1543->g_268,&p_1543->g_268,&p_1543->g_268,&p_1543->g_268,&p_1543->g_268,&p_1543->g_268};
    int32_t l_1525 = (-1L);
    uint16_t l_1526 = 65530UL;
    int64_t l_1535 = 0x362F13A70667D923L;
    uint64_t l_1540[8] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL};
    int32_t **l_1542 = &l_991;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1359[i] = 0x3BL;
    for (p_1543->g_2 = 0; (p_1543->g_2 == (-20)); p_1543->g_2 = safe_sub_func_uint64_t_u_u(p_1543->g_2, 1))
    { /* block id: 7 */
        uint32_t l_5[7] = {1UL,0x41B66BAFL,1UL,1UL,0x41B66BAFL,1UL,1UL};
        int32_t *l_6 = &p_1543->g_7;
        int64_t l_983 = 0x06D144AB1DD8D964L;
        uint16_t l_990[8] = {0xE7D7L,0xE7D7L,0xE7D7L,0xE7D7L,0xE7D7L,0xE7D7L,0xE7D7L,0xE7D7L};
        uint32_t l_1334 = 0UL;
        uint8_t *l_1351[6] = {&p_1543->g_44[4][0],&p_1543->g_30[2],&p_1543->g_44[4][0],&p_1543->g_44[4][0],&p_1543->g_30[2],&p_1543->g_44[4][0]};
        int32_t l_1374 = 8L;
        uint32_t l_1452 = 4294967293UL;
        int32_t l_1453 = 0x4ED59AB1L;
        uint32_t *l_1477 = &l_1334;
        int8_t l_1483 = 1L;
        union U0 **l_1509 = &p_1543->g_165;
        int i;
        (*l_6) |= l_5[5];
    }
    l_1526++;
    for (p_1543->g_1416 = (-11); (p_1543->g_1416 <= (-17)); p_1543->g_1416 = safe_sub_func_uint64_t_u_u(p_1543->g_1416, 2))
    { /* block id: 752 */
        int16_t *l_1538 = (void*)0;
        int16_t *l_1539 = &p_1543->g_223;
        int32_t *l_1541[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1541[i][j] = &p_1543->g_7;
        }
        l_1541[0][0] = l_1541[0][0];
    }
    (*p_1543->g_770) = ((*l_1542) = &l_1291);
    return p_1543->g_184.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1543->g_1290
 * writes: p_1543->g_68
 */
union U0  func_10(int32_t * p_11, uint64_t  p_12, struct S1 * p_1543)
{ /* block id: 633 */
    int32_t **l_1289 = &p_1543->g_68;
    (*l_1289) = p_11;
    return p_1543->g_1290;
}


/* ------------------------------------------ */
/* 
 * reads : p_1543->g_268 p_1543->g_1005 p_1543->g_712 p_1543->g_713 p_1543->g_714 p_1543->g_30 p_1543->g_100 p_1543->g_1139 p_1543->g_97 p_1543->g_101 p_1543->g_2 p_1543->g_272 p_1543->g_194 p_1543->g_1050 p_1543->g_206 p_1543->g_401 p_1543->g_1103 p_1543->g_769 p_1543->g_888 p_1543->g_68 p_1543->g_44 p_1543->g_856 p_1543->g_345 p_1543->g_258 p_1543->g_58 p_1543->g_1270 p_1543->g_297 p_1543->g_63
 * writes: p_1543->g_297 p_1543->g_63 p_1543->g_258 p_1543->g_120 p_1543->g_268 p_1543->g_358.f0 p_1543->g_97 p_1543->g_135 p_1543->g_194 p_1543->g_206 p_1543->g_58 p_1543->g_831 p_1543->g_856 p_1543->g_272 p_1543->g_68 p_1543->g_1139 p_1543->g_274 p_1543->g_1103 p_1543->g_100 p_1543->g_101 p_1543->g_1050 p_1543->g_1270
 */
int32_t * func_13(uint8_t  p_14, int8_t  p_15, int32_t * p_16, struct S1 * p_1543)
{ /* block id: 528 */
    int8_t l_992 = 0x44L;
    uint64_t l_993 = 0x2842942CA11A762FL;
    uint16_t l_1024 = 65535UL;
    int32_t l_1054 = 0x1D836614L;
    int8_t ***l_1082[6][2][10] = {{{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300},{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300}},{{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300},{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300}},{{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300},{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300}},{{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300},{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300}},{{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300},{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300}},{{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300},{&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300,&p_1543->g_300}}};
    int32_t l_1114 = (-1L);
    int32_t l_1121 = 0x2E2D8FFCL;
    int32_t l_1124 = 0x6E1F2EA3L;
    int32_t l_1129 = 0x000F5223L;
    int32_t l_1134 = 0x31F43069L;
    int32_t l_1135 = (-7L);
    int32_t l_1137 = 0x331A5E86L;
    uint32_t *l_1153[8][1] = {{&p_1543->g_120},{&p_1543->g_120},{&p_1543->g_120},{&p_1543->g_120},{&p_1543->g_120},{&p_1543->g_120},{&p_1543->g_120},{&p_1543->g_120}};
    uint32_t **l_1152 = &l_1153[2][0];
    int32_t l_1241 = 0L;
    uint16_t l_1248 = 0xBDFFL;
    int32_t l_1268[3];
    int32_t l_1269[1][9] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
    int32_t l_1283 = 0x4B9FAEE2L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1268[i] = 0x31003542L;
lbl_1051:
    l_993 |= l_992;
    for (p_1543->g_297 = (-15); (p_1543->g_297 >= (-14)); ++p_1543->g_297)
    { /* block id: 532 */
        int64_t l_1026 = 0x2A1DA8620BC49854L;
        uint8_t **l_1030[8] = {&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1]};
        int32_t l_1053 = 0x0812824FL;
        int32_t l_1064 = 1L;
        uint32_t l_1065 = 0x523C1C89L;
        int32_t l_1118 = 7L;
        int32_t l_1125[5] = {0x1AEBF407L,0x1AEBF407L,0x1AEBF407L,0x1AEBF407L,0x1AEBF407L};
        int32_t l_1128[6][1] = {{0x3E624365L},{0x3E624365L},{0x3E624365L},{0x3E624365L},{0x3E624365L},{0x3E624365L}};
        int16_t l_1132 = 4L;
        uint64_t *l_1215 = &p_1543->g_345[2];
        uint16_t *l_1217 = &p_1543->g_258;
        int32_t l_1225[8][6][5] = {{{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L}},{{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L}},{{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L}},{{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L}},{{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L}},{{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L}},{{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L}},{{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L},{0x4580B214L,(-3L),0x38E7E609L,1L,1L}}};
        uint8_t ****l_1251 = (void*)0;
        int32_t l_1274 = (-1L);
        int32_t l_1284 = 0x231E763CL;
        uint8_t l_1285 = 1UL;
        int i, j, k;
        for (p_1543->g_63 = 0; (p_1543->g_63 <= (-29)); p_1543->g_63--)
        { /* block id: 535 */
            uint8_t *l_1020[8] = {(void*)0,&p_1543->g_30[3],(void*)0,(void*)0,&p_1543->g_30[3],(void*)0,(void*)0,&p_1543->g_30[3]};
            int32_t l_1023 = 1L;
            int32_t **l_1081 = &p_1543->g_68;
            int16_t l_1122 = 0x7FC9L;
            int32_t l_1123 = 0x75C3D502L;
            int32_t l_1126 = 0x26764269L;
            int32_t l_1136[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
            int8_t *l_1154 = &p_1543->g_274;
            union U0 *l_1212[7][1][8] = {{{(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0,(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0}},{{(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0,(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0}},{{(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0,(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0}},{{(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0,(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0}},{{(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0,(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0}},{{(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0,(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0}},{{(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0,(void*)0,&p_1543->g_989,&p_1543->g_989,(void*)0}}};
            uint32_t l_1224 = 0x03DA64DEL;
            uint8_t ***l_1253[1][10];
            uint8_t ****l_1252[2][10] = {{&l_1253[0][5],&l_1253[0][6],(void*)0,&l_1253[0][6],&l_1253[0][5],&l_1253[0][5],&l_1253[0][6],(void*)0,&l_1253[0][6],&l_1253[0][5]},{&l_1253[0][5],&l_1253[0][6],(void*)0,&l_1253[0][6],&l_1253[0][5],&l_1253[0][5],&l_1253[0][6],(void*)0,&l_1253[0][6],&l_1253[0][5]}};
            uint8_t *****l_1254 = &l_1252[0][9];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1253[i][j] = &l_1030[2];
            }
            for (p_1543->g_258 = (-15); (p_1543->g_258 <= 5); p_1543->g_258 = safe_add_func_int16_t_s_s(p_1543->g_258, 6))
            { /* block id: 538 */
                uint32_t l_1025 = 0x84785B89L;
                for (p_1543->g_120 = (-1); (p_1543->g_120 >= 49); p_1543->g_120 = safe_add_func_uint8_t_u_u(p_1543->g_120, 3))
                { /* block id: 541 */
                    int32_t *l_1002 = &p_1543->g_268;
                    int32_t *l_1027 = (void*)0;
                    int32_t *l_1028 = (void*)0;
                    int32_t *l_1029 = &p_1543->g_358.f0;
                    (*l_1002) ^= (-8L);
                    (*l_1002) = ((p_14 = (safe_add_func_uint16_t_u_u((((p_1543->g_1005 , (((~((0x33A6E1EA8B25337AL && 0x6DF510FE3E9A1631L) != (safe_div_func_int32_t_s_s((((*l_1029) = (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0x4D4ED8D4L, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((p_15 == ((safe_mod_func_int16_t_s_s((**p_1543->g_712), ((safe_sub_func_int64_t_s_s((((l_1020[3] == ((safe_add_func_int8_t_s_s(p_15, p_15)) , &p_14)) || p_15) && l_1023), l_1024)) || l_992))) != p_1543->g_30[3])), 5)), l_1025)))) != p_15), l_1026))) , 0x45B720AFL), l_1025)))) | 0x5984CCFC9228BA92L) >= (*p_1543->g_100))) , l_1030[2]) != l_1030[2]), l_1025))) > (*l_1002));
                    if ((*p_16))
                        break;
                }
            }
            for (p_1543->g_97 = 0; (p_1543->g_97 != 28); p_1543->g_97 = safe_add_func_int16_t_s_s(p_1543->g_97, 8))
            { /* block id: 551 */
                int16_t l_1047 = 2L;
                int32_t l_1048 = 0x65F3A5C2L;
                int32_t l_1117 = 1L;
                int32_t l_1127[8][5] = {{(-1L),0L,0L,(-1L),(-3L)},{(-1L),0L,0L,(-1L),(-3L)},{(-1L),0L,0L,(-1L),(-3L)},{(-1L),0L,0L,(-1L),(-3L)},{(-1L),0L,0L,(-1L),(-3L)},{(-1L),0L,0L,(-1L),(-3L)},{(-1L),0L,0L,(-1L),(-3L)},{(-1L),0L,0L,(-1L),(-3L)}};
                uint64_t *l_1177[5] = {&p_1543->g_97,&p_1543->g_97,&p_1543->g_97,&p_1543->g_97,&p_1543->g_97};
                union U0 *l_1211 = &p_1543->g_1005;
                int i, j;
                if ((*p_16))
                    break;
                for (p_1543->g_135 = 4; (p_1543->g_135 >= 0); p_1543->g_135 -= 1)
                { /* block id: 555 */
                    int32_t *l_1049 = &p_1543->g_194;
                    int8_t ***l_1104[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_1115 = 0x74E64608L;
                    int32_t l_1116 = 0x740A0556L;
                    int32_t l_1119 = (-2L);
                    int32_t l_1120 = 0x13589B4BL;
                    int32_t l_1130 = (-9L);
                    int32_t l_1131 = 1L;
                    int32_t l_1133 = 0x7E7A74FBL;
                    int32_t l_1138 = 0x1A92BE5DL;
                    int i;
                    if ((p_14 <= (((((((*l_1049) ^= (safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(((!l_1023) >= ((void*)0 == &p_1543->g_912)), 6)) & (safe_mul_func_uint16_t_u_u(65535UL, (0L & 0x94843F3EL)))) != (safe_sub_func_uint16_t_u_u(p_1543->g_272, ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_1047 = (0x71BD1B6AL & p_15)), p_15)), p_15)) , l_1047)))), l_1048))) ^ 0UL) || 1L) ^ 1L) || (*l_1049)) <= p_1543->g_1050)))
                    { /* block id: 558 */
                        if (l_992)
                            goto lbl_1051;
                    }
                    else
                    { /* block id: 560 */
                        int32_t *l_1052 = &p_1543->g_194;
                        int32_t *l_1055 = &p_1543->g_58;
                        int32_t *l_1056 = &l_1023;
                        int32_t *l_1057 = &p_1543->g_58;
                        int32_t *l_1058 = &p_1543->g_504;
                        int32_t *l_1059 = &p_1543->g_504;
                        int32_t *l_1060 = &p_1543->g_58;
                        int32_t *l_1061 = &l_1053;
                        int32_t l_1062[10] = {0x7FB3FB3DL,(-1L),0x7FB3FB3DL,0x7FB3FB3DL,(-1L),0x7FB3FB3DL,0x7FB3FB3DL,(-1L),0x7FB3FB3DL,0x7FB3FB3DL};
                        int32_t *l_1063[7][8] = {{&p_1543->g_135,&p_1543->g_58,(void*)0,&p_1543->g_58,&p_1543->g_135,&p_1543->g_135,&p_1543->g_58,(void*)0},{&p_1543->g_135,&p_1543->g_58,(void*)0,&p_1543->g_58,&p_1543->g_135,&p_1543->g_135,&p_1543->g_58,(void*)0},{&p_1543->g_135,&p_1543->g_58,(void*)0,&p_1543->g_58,&p_1543->g_135,&p_1543->g_135,&p_1543->g_58,(void*)0},{&p_1543->g_135,&p_1543->g_58,(void*)0,&p_1543->g_58,&p_1543->g_135,&p_1543->g_135,&p_1543->g_58,(void*)0},{&p_1543->g_135,&p_1543->g_58,(void*)0,&p_1543->g_58,&p_1543->g_135,&p_1543->g_135,&p_1543->g_58,(void*)0},{&p_1543->g_135,&p_1543->g_58,(void*)0,&p_1543->g_58,&p_1543->g_135,&p_1543->g_135,&p_1543->g_58,(void*)0},{&p_1543->g_135,&p_1543->g_58,(void*)0,&p_1543->g_58,&p_1543->g_135,&p_1543->g_135,&p_1543->g_58,(void*)0}};
                        int32_t **l_1068 = &l_1063[4][4];
                        int64_t *l_1073 = &p_1543->g_206;
                        int i, j;
                        --l_1065;
                        (*l_1068) = &l_1023;
                        (*l_1056) = (safe_rshift_func_uint16_t_u_s((((*l_1057) = ((*l_1061) = (l_1023 >= ((-8L) | ((*l_1073) |= (safe_mod_func_int16_t_s_s((**p_1543->g_712), 0x05D8L))))))) | 0L), l_1065));
                    }
                    for (p_1543->g_831 = 4; (p_1543->g_831 >= 1); p_1543->g_831 -= 1)
                    { /* block id: 570 */
                        uint16_t *l_1097 = (void*)0;
                        uint16_t *l_1098 = (void*)0;
                        uint16_t *l_1099 = (void*)0;
                        uint16_t *l_1100[5];
                        int16_t *l_1105 = &p_1543->g_856;
                        int32_t *l_1106 = &l_1053;
                        int32_t *l_1107 = &l_1064;
                        int32_t *l_1108 = &l_1053;
                        int32_t *l_1109 = &p_1543->g_58;
                        int32_t *l_1110 = (void*)0;
                        int32_t *l_1111 = &p_1543->g_504;
                        int32_t *l_1112 = &l_1064;
                        int32_t *l_1113[5];
                        int64_t *l_1155 = &l_1026;
                        int64_t *l_1156[8];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1100[i] = &p_1543->g_258;
                        for (i = 0; i < 5; i++)
                            l_1113[i] = (void*)0;
                        for (i = 0; i < 8; i++)
                            l_1156[i] = &p_1543->g_206;
                        (*l_1049) = ((p_1543->g_272 = ((safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((&l_1054 != p_16))), ((*l_1105) = ((&p_16 != l_1081) != ((l_1082[4][0][0] == ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_1047 >= (l_1064 = (safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((+((((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((((p_1543->g_258 = p_1543->g_401) != (safe_mod_func_int64_t_s_s(((((6L & ((*l_1049) < 0x66E0L)) && 6UL) , p_15) != p_1543->g_1103[3]), 0xB493665C1426BA18L))) , 0x1013CA33L), p_1543->g_1103[3])), 0x36L)) & p_1543->g_769[1][0]) , (*p_16)) <= (*p_16))) ^ 0xC89644B4L), 65531UL)) | p_15), 1L)))), l_1053)), 0x65AAL)), 0)) , l_1104[0])) && 2L))))), 1L)) , 255UL), p_15)) && 1L)) , (*p_16));
                        (*l_1081) = p_16;
                        p_1543->g_1139--;
                        (*l_1107) = ((((((p_15 , (+(safe_mul_func_uint8_t_u_u(((((0x60L && (++p_14)) <= ((((safe_sub_func_int64_t_s_s((((18446744073709551606UL | 0x8D0118060180667EL) | (**p_1543->g_888)) | ((l_1135 ^= ((*l_1155) = (+(((((((((l_1114 = (safe_div_func_uint32_t_u_u(((p_15 <= (safe_add_func_int16_t_s_s(p_15, (((void*)0 == &p_1543->g_297) <= 0UL)))) ^ p_15), p_1543->g_44[0][0]))) , (void*)0) == l_1152) , 3UL) , &p_15) != l_1154) == (*l_1107)) , 1UL) > p_15)))) && 0x0813833844D7074BL)), l_1048)) , p_1543->g_856) , p_15) , p_15)) == p_1543->g_194) != p_1543->g_272), (**l_1081))))) | 0x0046FCFEL) < (*l_1049)) <= p_1543->g_345[1]) < (*p_1543->g_100)) | 0x220E307AL);
                    }
                }
                for (p_1543->g_274 = 0; (p_1543->g_274 < (-6)); --p_1543->g_274)
                { /* block id: 587 */
                    uint16_t *l_1163 = &p_1543->g_1103[3];
                    uint16_t *l_1166 = &p_1543->g_258;
                    uint64_t **l_1178 = &p_1543->g_100;
                    int32_t l_1183[1];
                    int32_t *l_1184 = &l_1129;
                    int32_t *l_1185 = (void*)0;
                    int32_t *l_1186 = (void*)0;
                    int32_t *l_1187 = &l_1126;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1183[i] = 0x798DEFFDL;
                    if ((*p_16))
                        break;
                    (*l_1187) |= ((*l_1184) |= (safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((*l_1166) &= (p_14 == ((*l_1163)++))) && p_15), 0x2A56CA517CC57FB5L)), ((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((((p_1543->g_2 , (((((l_1137 >= ((((*l_1178) = l_1177[4]) == &l_993) , (safe_mul_func_int8_t_s_s((l_1128[0][0] < (&l_1122 != (*p_1543->g_712))), 248UL)))) , p_15) & 2UL) != p_15) , l_1065)) | 0x67L) ^ 0x7C7CL), l_1183[0])), p_14)) != (-1L)) != (-1L)), l_1065)), 0x6AL)), 1UL)) && p_1543->g_1050))));
                }
                for (p_1543->g_101 = 29; (p_1543->g_101 >= 57); p_1543->g_101 = safe_add_func_int32_t_s_s(p_1543->g_101, 7))
                { /* block id: 597 */
                    int16_t *l_1203 = &l_1132;
                    int16_t *l_1204 = (void*)0;
                    int8_t l_1216 = 1L;
                    int32_t *l_1218 = (void*)0;
                    int32_t *l_1219 = &l_1117;
                    int32_t l_1238 = 0x09821C93L;
                    int32_t l_1239 = (-1L);
                    int32_t l_1240 = 5L;
                    int32_t l_1242 = 1L;
                    int32_t l_1243 = 5L;
                    uint32_t l_1244 = 8UL;
                    int32_t *l_1247[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1247[i] = &l_1135;
                    (*l_1219) &= (3UL | (&p_1543->g_276 != (((l_1127[0][1] = (safe_unary_minus_func_uint64_t_u(((((safe_div_func_uint32_t_u_u(((((((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_1064 != ((((safe_rshift_func_int16_t_s_u((p_1543->g_1050 &= ((*l_1203) = p_14)), ((safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(p_1543->g_272, (&p_1543->g_118 != ((safe_sub_func_int16_t_s_s((l_1211 == l_1212[1][0][6]), (safe_rshift_func_int8_t_s_s((p_15 ^= ((l_1048 ^= (p_14 >= 0x497DA4AE2F3DDE7AL)) >= p_14)), 3)))) , (void*)0)))), 4294967295UL)) < p_14))) & p_14) < 0x1E5FL) , p_15)), p_14)), p_14)), 0x63L)), 0x7EL)) != 0L) | 9UL) , l_1125[4]) , l_1215) != &p_1543->g_345[1]), (-8L))) == l_1065) || 1L) < p_14)))) , l_1216) , l_1217)));
                    for (p_1543->g_258 = 0; (p_1543->g_258 < 8); p_1543->g_258 = safe_add_func_uint32_t_u_u(p_1543->g_258, 5))
                    { /* block id: 606 */
                        int32_t *l_1226 = &l_1124;
                        int32_t *l_1227 = &l_1114;
                        int32_t *l_1228 = (void*)0;
                        int32_t *l_1229 = &l_1121;
                        int32_t *l_1230 = (void*)0;
                        int32_t l_1231[6][10][4] = {{{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)}},{{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)}},{{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)}},{{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)}},{{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)}},{{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)},{0x7C48A8FAL,(-7L),(-1L),(-10L)}}};
                        int32_t *l_1232 = &l_1125[3];
                        int32_t *l_1233 = &l_1054;
                        int32_t *l_1234 = &l_1127[7][4];
                        int32_t *l_1235 = &l_1136[3];
                        int32_t *l_1236 = &l_1137;
                        int32_t *l_1237[4][8] = {{&l_1053,&l_1123,&l_1053,&l_1053,&l_1123,&l_1053,&l_1053,&l_1123},{&l_1053,&l_1123,&l_1053,&l_1053,&l_1123,&l_1053,&l_1053,&l_1123},{&l_1053,&l_1123,&l_1053,&l_1053,&l_1123,&l_1053,&l_1053,&l_1123},{&l_1053,&l_1123,&l_1053,&l_1053,&l_1123,&l_1053,&l_1053,&l_1123}};
                        int i, j, k;
                        (*l_1219) |= (p_1543->g_58 || (safe_rshift_func_uint8_t_u_s(l_1123, (!(p_15 = (l_1224 = p_14))))));
                        l_1244++;
                        if (l_1047)
                            break;
                    }
                    --l_1248;
                    if ((*p_16))
                        break;
                }
            }
            if ((l_1251 == ((*l_1254) = l_1252[0][4])))
            { /* block id: 618 */
                int32_t l_1264 = 4L;
                int32_t l_1266 = 0x6580D8D5L;
                int32_t l_1267[1][10][8] = {{{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L}}};
                int i, j, k;
                for (l_1023 = 0; (l_1023 <= 1); l_1023 += 1)
                { /* block id: 621 */
                    int8_t l_1255 = 0L;
                    int32_t *l_1256 = &l_1126;
                    int32_t *l_1257 = (void*)0;
                    int32_t *l_1258 = &l_1054;
                    int32_t *l_1259 = (void*)0;
                    int32_t *l_1260 = &p_1543->g_504;
                    int32_t *l_1261 = &l_1129;
                    int32_t *l_1262 = &l_1054;
                    int32_t *l_1263[4];
                    int8_t l_1265[2][2][9] = {{{9L,9L,0x13L,1L,0x69L,1L,0x13L,9L,9L},{9L,9L,0x13L,1L,0x69L,1L,0x13L,9L,9L}},{{9L,9L,0x13L,1L,0x69L,1L,0x13L,9L,9L},{9L,9L,0x13L,1L,0x69L,1L,0x13L,9L,9L}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1263[i] = &p_1543->g_58;
                    p_1543->g_1270++;
                    (*l_1081) = &l_1128[0][0];
                }
            }
            else
            { /* block id: 625 */
                int32_t *l_1273 = (void*)0;
                int32_t *l_1275 = (void*)0;
                int32_t *l_1276 = &l_1023;
                int32_t *l_1277 = &l_1121;
                int32_t l_1278 = 0L;
                int32_t *l_1279 = (void*)0;
                int32_t *l_1280 = (void*)0;
                int32_t *l_1281 = (void*)0;
                int32_t *l_1282[10] = {&p_1543->g_135,&p_1543->g_135,&p_1543->g_135,&p_1543->g_135,&p_1543->g_135,&p_1543->g_135,&p_1543->g_135,&p_1543->g_135,&p_1543->g_135,&p_1543->g_135};
                int i;
                ++l_1285;
            }
        }
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_21(uint8_t  p_22, int16_t  p_23, int8_t  p_24, struct S1 * p_1543)
{ /* block id: 525 */
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_33(uint64_t  p_34, struct S1 * p_1543)
{ /* block id: 523 */
    uint32_t l_984 = 0UL;
    return l_984;
}


/* ------------------------------------------ */
/* 
 * reads : p_1543->g_769 p_1543->g_99.f0 p_1543->g_273 p_1543->g_58 p_1543->g_712 p_1543->g_713 p_1543->g_714 p_1543->g_393 p_1543->g_44 p_1543->g_7 p_1543->g_856 p_1543->g_45.f0 p_1543->g_135 p_1543->g_828 p_1543->g_829 p_1543->g_43 p_1543->g_887 p_1543->g_888 p_1543->g_901 p_1543->g_120 p_1543->g_274 p_1543->g_912 p_1543->g_68 p_1543->g_100 p_1543->g_101 p_1543->g_2 p_1543->g_122 p_1543->g_831 p_1543->g_297 p_1543->g_194 p_1543->g_145 p_1543->g_238 p_1543->g_63 p_1543->g_503 p_1543->g_268
 * writes: p_1543->g_769 p_1543->g_393 p_1543->g_880 p_1543->g_68 p_1543->g_274 p_1543->g_912 p_1543->g_270 p_1543->g_135 p_1543->g_194 p_1543->g_975 p_1543->g_63 p_1543->g_268
 */
uint16_t  func_38(uint16_t  p_39, int32_t  p_40, int32_t * p_41, uint32_t  p_42, struct S1 * p_1543)
{ /* block id: 433 */
    int16_t l_835[5];
    uint32_t *l_836 = &p_1543->g_769[3][1];
    int16_t *l_839 = &l_835[4];
    int8_t l_851 = 0x3DL;
    uint16_t *l_852[6][7][3] = {{{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0}},{{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0}},{{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0}},{{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0}},{{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0}},{{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0},{&p_1543->g_258,&p_1543->g_258,(void*)0}}};
    int32_t l_853 = 0x6C42F8EEL;
    uint8_t *l_854 = &p_1543->g_393;
    int32_t l_855 = 1L;
    int32_t l_857 = 0x311B7E37L;
    int8_t l_858 = 1L;
    int8_t l_859 = 0L;
    union U0 **l_878 = (void*)0;
    union U0 ***l_879[3][6] = {{&l_878,&l_878,&l_878,&l_878,&l_878,&l_878},{&l_878,&l_878,&l_878,&l_878,&l_878,&l_878},{&l_878,&l_878,&l_878,&l_878,&l_878,&l_878}};
    union U0 **l_881 = (void*)0;
    uint32_t l_882 = 0x9E042A0AL;
    int32_t *l_883 = &l_853;
    int32_t l_884[4][10] = {{0x6BF629F8L,0x0B52A1D5L,0x0B2395D7L,0x7C2101C0L,0x0B52A1D5L,0x7C2101C0L,0x0B2395D7L,0x0B52A1D5L,0x6BF629F8L,0x6BF629F8L},{0x6BF629F8L,0x0B52A1D5L,0x0B2395D7L,0x7C2101C0L,0x0B52A1D5L,0x7C2101C0L,0x0B2395D7L,0x0B52A1D5L,0x6BF629F8L,0x6BF629F8L},{0x6BF629F8L,0x0B52A1D5L,0x0B2395D7L,0x7C2101C0L,0x0B52A1D5L,0x7C2101C0L,0x0B2395D7L,0x0B52A1D5L,0x6BF629F8L,0x6BF629F8L},{0x6BF629F8L,0x0B52A1D5L,0x0B2395D7L,0x7C2101C0L,0x0B52A1D5L,0x7C2101C0L,0x0B2395D7L,0x0B52A1D5L,0x6BF629F8L,0x6BF629F8L}};
    uint16_t l_900[8] = {0xF974L,0xF974L,0xF974L,0xF974L,0xF974L,0xF974L,0xF974L,0xF974L};
    int32_t l_928 = 0x365F75F3L;
    int32_t **l_967 = (void*)0;
    int32_t ***l_966 = &l_967;
    int32_t *l_982 = (void*)0;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_835[i] = (-4L);
lbl_978:
    l_859 &= ((l_857 ^= (p_40 ^ ((((((safe_add_func_int64_t_s_s((((l_855 = (((*l_836) &= l_835[4]) , (safe_lshift_func_int8_t_s_s((&l_835[4] != l_839), ((l_835[2] || (safe_mod_func_int64_t_s_s((safe_div_func_int32_t_s_s(l_835[4], (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((safe_div_func_int32_t_s_s((p_39 == (((((*l_854) ^= (0UL == ((~(((((((((((l_853 ^= (((~(((safe_sub_func_int8_t_s_s((((p_39 , p_40) , p_1543->g_99.f0) == p_42), l_835[4])) , l_835[4]) ^ l_835[1])) ^ l_851) <= l_835[4])) > p_1543->g_273) || l_851) <= p_40) && 0x1C93D6FFL) | p_1543->g_769[1][0]) == p_1543->g_58) & p_39) , 0x2C81842F5758408CL) & p_40) , 0x51A8L)) && (**p_1543->g_712)))) & l_835[4]) != p_42) | p_1543->g_44[5][0])), l_835[2])))), p_39)))), l_835[4]))) != 65535UL))))) != (*p_41)) < l_835[3]), 5L)) > p_1543->g_856) , 0x123A4ADF5234C8B9L) >= 0xC908C4CB47132DA8L) >= p_1543->g_45.f0) != p_1543->g_135))) & l_858);
    if ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_s((((*l_836) = (((**p_1543->g_828) == l_854) && 4294967294UL)) >= ((*l_883) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_s(((p_1543->g_880[1] = l_878) == (void*)0), p_42)) , ((void*)0 != l_881)) , p_42), l_855)), l_882)), l_835[4])), 1)))), l_884[1][4])) , (*p_41)) > p_42), 18446744073709551615UL)) && 0x5464552DB92817C1L), 4)), p_42)))
    { /* block id: 443 */
        int32_t **l_891 = &l_883;
        uint32_t **l_896 = (void*)0;
        uint64_t **l_945 = &p_1543->g_459;
        int8_t l_956 = 0x24L;
        int64_t *l_965[6][2][6] = {{{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0},{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0}},{{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0},{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0}},{{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0},{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0}},{{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0},{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0}},{{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0},{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0}},{{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0},{&p_1543->g_831,(void*)0,&p_1543->g_831,&p_1543->g_831,&p_1543->g_831,(void*)0}}};
        uint8_t **l_976[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_976[i] = (void*)0;
        for (l_853 = 6; (l_853 >= 0); l_853 -= 1)
        { /* block id: 446 */
            return p_42;
        }
        for (l_859 = 0; (l_859 == 13); l_859 = safe_add_func_uint64_t_u_u(l_859, 4))
        { /* block id: 451 */
            int64_t *l_897 = (void*)0;
            int64_t *l_898 = (void*)0;
            int64_t *l_899[8] = {&p_1543->g_206,&p_1543->g_270,&p_1543->g_206,&p_1543->g_206,&p_1543->g_270,&p_1543->g_206,&p_1543->g_206,&p_1543->g_270};
            int32_t l_932 = 1L;
            int32_t *l_940 = &l_853;
            uint64_t **l_955 = (void*)0;
            int i;
            (*p_1543->g_887) = &l_855;
            (*p_1543->g_888) = p_41;
            if ((safe_sub_func_uint16_t_u_u((((l_900[4] = (((p_40 , l_891) != &p_41) & (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((l_896 != l_896), 2)), (-8L))))) , &p_1543->g_68) == &p_41), 0x2FC3L)))
            { /* block id: 455 */
                uint64_t ****l_913 = &p_1543->g_912;
                int32_t l_914[7][1] = {{0x42DD5231L},{0x42DD5231L},{0x42DD5231L},{0x42DD5231L},{0x42DD5231L},{0x42DD5231L},{0x42DD5231L}};
                int64_t *l_926 = &p_1543->g_831;
                int32_t l_927 = 0x22DB309BL;
                int8_t *l_929 = &l_858;
                int32_t *l_936 = &p_1543->g_99.f0;
                int32_t **l_935 = &l_936;
                int i, j;
                if (p_1543->g_901)
                    break;
                if ((safe_add_func_uint8_t_u_u((!(safe_div_func_int16_t_s_s((*l_883), (safe_rshift_func_int8_t_s_u(p_1543->g_120, 4))))), (((((0x767E477F58735BB9L < (safe_rshift_func_int8_t_s_s((p_1543->g_274 |= 0x7EL), 6))) == (-8L)) || (l_884[0][7] ^= (safe_add_func_uint8_t_u_u((((*l_929) |= (((*l_913) = p_1543->g_912) != (((l_914[2][0] != (safe_div_func_uint16_t_u_u(((++p_39) > (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint16_t_u_u((**l_891), ((*l_839) = ((safe_div_func_int32_t_s_s(((p_1543->g_270 = (l_927 = ((l_926 == l_926) == p_40))) | l_928), p_1543->g_44[3][0])) <= (**p_1543->g_712))))) != 0xD200L))), 0x1F40L))), 0x4C85L))) , (**l_891)) , (void*)0))) && p_39), 0L)))) < (*p_1543->g_68)) < (*p_1543->g_100)))))
                { /* block id: 465 */
                    (*l_883) |= (*p_41);
                    for (l_928 = 0; (l_928 <= (-12)); l_928 = safe_sub_func_int64_t_s_s(l_928, 6))
                    { /* block id: 469 */
                        return p_39;
                    }
                    (*l_883) = 0x57D8E9CEL;
                }
                else
                { /* block id: 473 */
                    return l_932;
                }
                for (l_882 = (-23); (l_882 > 21); l_882++)
                { /* block id: 478 */
                    int32_t ***l_937 = &l_935;
                    if ((*l_883))
                        break;
                    (*l_891) = p_41;
                    (*l_891) = &l_853;
                    (*l_937) = (((p_1543->g_270 = l_932) && p_1543->g_2) , l_935);
                }
            }
            else
            { /* block id: 485 */
                uint32_t l_950 = 4294967295UL;
                int32_t l_977 = 4L;
                for (p_39 = (-20); (p_39 == 40); p_39++)
                { /* block id: 488 */
                    int32_t *l_957 = (void*)0;
                    int32_t *l_958 = &l_884[3][3];
                    (*l_958) = (!(((*p_1543->g_122) != (p_42 , l_940)) != (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((*l_839) = ((p_1543->g_135 = (((*l_883) = (0x63FDB3B6L ^ (l_945 != (((((((((*p_1543->g_68) <= (safe_mod_func_uint64_t_u_u((*l_883), (safe_lshift_func_uint16_t_u_u((l_950 & ((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((*p_1543->g_68), (-2L))), p_42)) != p_42)), (**l_891)))))) != 0L) <= (*p_1543->g_100)) != p_39) && p_1543->g_901) ^ p_39) || (**l_891)) , l_955)))) || p_1543->g_831)) == l_956)), p_1543->g_297)), l_932))));
                    for (p_1543->g_194 = (-18); (p_1543->g_194 > (-24)); p_1543->g_194 = safe_sub_func_int32_t_s_s(p_1543->g_194, 3))
                    { /* block id: 495 */
                        int32_t ***l_969[4] = {&l_967,&l_967,&l_967,&l_967};
                        int32_t ****l_968 = &l_969[1];
                        uint8_t ***l_972 = (void*)0;
                        uint8_t **l_974 = (void*)0;
                        uint8_t ***l_973 = &l_974;
                        int i;
                        l_977 ^= ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((*l_883), ((*l_839) = (&p_1543->g_831 == l_965[5][0][4])))) > (((l_966 != ((*l_968) = (void*)0)) & (safe_sub_func_int16_t_s_s(((p_1543->g_975 = ((+(((*l_958) |= ((*l_940) >= (-1L))) | p_1543->g_145)) , ((*l_973) = &p_1543->g_43[0][5][1]))) != l_976[1]), (*l_940)))) ^ p_1543->g_7)), (*l_883))) > (*l_940));
                        return p_1543->g_238;
                    }
                }
            }
        }
        for (p_1543->g_63 = 0; (p_1543->g_63 <= 0); p_1543->g_63 += 1)
        { /* block id: 509 */
            if (l_928)
                goto lbl_978;
            for (l_858 = 0; (l_858 >= 0); l_858 -= 1)
            { /* block id: 513 */
                (**l_891) ^= (*p_41);
            }
        }
    }
    else
    { /* block id: 517 */
        int16_t l_981 = (-5L);
        p_1543->g_268 |= (p_1543->g_503 , (safe_sub_func_int16_t_s_s(l_981, (*l_883))));
    }
    (*l_883) &= (*p_41);
    l_982 = p_41;
    return p_1543->g_44[3][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1543->g_64 p_1543->g_67 p_1543->g_43 p_1543->g_99 p_1543->g_44 p_1543->g_100 p_1543->g_68 p_1543->g_122 p_1543->g_58 p_1543->g_145 p_1543->g_101 p_1543->g_120 p_1543->g_157 p_1543->g_135 p_1543->g_184 p_1543->g_97 p_1543->g_196 p_1543->g_199 p_1543->g_7 p_1543->g_199.f0 p_1543->g_712 p_1543->g_713 p_1543->g_714 p_1543->g_345 p_1543->g_681 p_1543->g_300 p_1543->g_752.f0 p_1543->g_301 p_1543->g_268 p_1543->g_223 p_1543->g_828 p_1543->g_504
 * writes: p_1543->g_64 p_1543->g_68 p_1543->g_97 p_1543->g_100 p_1543->g_118 p_1543->g_120 p_1543->g_63 p_1543->g_101 p_1543->g_58 p_1543->g_145 p_1543->g_157 p_1543->g_165 p_1543->g_196 p_1543->g_345 p_1543->g_301 p_1543->g_44 p_1543->g_274 p_1543->g_223 p_1543->g_831
 */
int16_t  func_46(uint32_t  p_47, uint8_t * p_48, int8_t  p_49, int8_t  p_50, int32_t  p_51, struct S1 * p_1543)
{ /* block id: 13 */
    int32_t l_95 = 0x1B70F82EL;
    int32_t *l_772[3][5][2] = {{{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2}},{{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2}},{{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2},{&p_1543->g_2,&p_1543->g_2}}};
    uint64_t l_810[9] = {0xA4D11C71EEFDE44CL,0xA4D11C71EEFDE44CL,0xA4D11C71EEFDE44CL,0xA4D11C71EEFDE44CL,0xA4D11C71EEFDE44CL,0xA4D11C71EEFDE44CL,0xA4D11C71EEFDE44CL,0xA4D11C71EEFDE44CL,0xA4D11C71EEFDE44CL};
    int16_t *l_813 = &p_1543->g_223;
    int64_t l_832[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_832[i] = (-1L);
    for (p_51 = 0; (p_51 < 0); p_51++)
    { /* block id: 16 */
        int64_t l_56 = (-3L);
        int32_t l_62 = 0x11930E88L;
        uint64_t l_204 = 0x54A5956B61A9CCBCL;
        int64_t *l_205 = &p_1543->g_206;
        int32_t **l_773[5][10] = {{&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1]},{&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1]},{&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1]},{&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1]},{&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1],&l_772[2][2][0],&l_772[2][2][0],&l_772[1][0][1]}};
        int16_t **l_814 = &l_813;
        int16_t *l_817 = &p_1543->g_223;
        uint32_t l_818 = 4294967290UL;
        uint8_t **l_824 = &p_1543->g_43[1][5][1];
        uint8_t ***l_823[6] = {&l_824,&l_824,&l_824,&l_824,&l_824,&l_824};
        uint8_t ****l_825 = &l_823[5];
        uint8_t ***l_827 = &l_824;
        uint8_t ****l_826 = &l_827;
        int64_t *l_830 = &p_1543->g_831;
        int i, j;
        if (l_56)
        { /* block id: 17 */
            int32_t *l_57 = &p_1543->g_58;
            int32_t l_59[8];
            int32_t *l_60 = (void*)0;
            int32_t *l_61[3];
            int i;
            for (i = 0; i < 8; i++)
                l_59[i] = 0x6744FA75L;
            for (i = 0; i < 3; i++)
                l_61[i] = &l_59[4];
            ++p_1543->g_64;
        }
        else
        { /* block id: 19 */
            int64_t *l_80 = &l_56;
            uint64_t *l_96 = &p_1543->g_97;
            uint64_t **l_102 = (void*)0;
            uint64_t **l_103[10][1] = {{&p_1543->g_100},{&p_1543->g_100},{&p_1543->g_100},{&p_1543->g_100},{&p_1543->g_100},{&p_1543->g_100},{&p_1543->g_100},{&p_1543->g_100},{&p_1543->g_100},{&p_1543->g_100}};
            int32_t **l_114 = &p_1543->g_68;
            int32_t l_115 = 0x79805026L;
            int8_t l_116 = 1L;
            uint32_t *l_117 = &p_1543->g_118;
            uint32_t *l_119 = &p_1543->g_120;
            uint64_t *l_771 = &p_1543->g_345[2];
            uint64_t l_796[7][7][5] = {{{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L}},{{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L}},{{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L}},{{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L}},{{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L}},{{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L}},{{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L},{18446744073709551610UL,0x76BC648A7C9D76F6L,0x05DF0D46D24C7749L,0x05DF0D46D24C7749L,0x76BC648A7C9D76F6L}}};
            uint32_t l_808 = 0x53F10B72L;
            uint32_t l_809 = 0UL;
            int i, j, k;
            (*p_1543->g_67) = &l_62;
            if (p_50)
                continue;
            l_115 = ((safe_rshift_func_uint16_t_u_u((p_1543->g_43[0][5][1] == ((*p_1543->g_300) = func_71(((*l_771) &= (safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(((*l_80) = 0x7B3FA8726ABE926FL), ((func_81((safe_rshift_func_uint8_t_u_u(func_89(((*l_119) = ((*l_117) = (safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((((*l_96) = l_95) ^ (safe_unary_minus_func_int64_t_s(((p_1543->g_99 , ((((((p_1543->g_44[1][0] , (void*)0) == (p_1543->g_100 = p_1543->g_100)) <= ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((*l_114) = (*p_1543->g_67)) != (void*)0), 5)), l_115)) >= p_49), l_116)), p_50)), 3UL)) == p_50)) , 0x5BL) > 0x6DL) , (**l_114))) || (-2L))))), p_49)), 0UL)))), p_1543), l_95)), l_204, l_205, p_1543->g_7, p_1543->g_199.f0, p_1543) , (-2L)) , 1L))), 14))), l_95, l_772[2][2][0], l_773[3][4], p_1543))), 7)) > p_47);
            for (p_47 = 1; (p_47 <= 4); p_47 += 1)
            { /* block id: 416 */
                uint32_t l_807 = 0UL;
                l_809 &= ((((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((p_1543->g_120 & (safe_add_func_uint16_t_u_u((p_49 <= (255UL < (0x38L > ((*p_1543->g_301) = (safe_mod_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_s((p_50 | (safe_sub_func_uint8_t_u_u(l_796[4][1][0], (((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((p_49 == (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((*p_48) = (**l_114)), ((((**l_114) <= 0x0315C49FL) | (*p_1543->g_100)) != l_807))), p_51)), 15))), p_51)), l_807)) >= 1L) && p_1543->g_752.f0)))), 1)) & (*p_1543->g_100)) , (**l_114)), 0x5F8CC78F95E72151L)))))), 0x19C6L))) & (**l_114)), l_808)), l_807)), p_49)))) == 4294967295UL) ^ 255UL) & (**l_114));
            }
        }
        ++l_810[4];
        l_818 &= ((p_1543->g_44[1][0] , ((*p_1543->g_712) != ((*l_814) = l_813))) | ((*l_817) |= ((safe_mod_func_uint64_t_u_u(p_47, p_1543->g_268)) & 0x0220AF05A77375D8L)));
        l_832[1] = (p_47 < (((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((*p_1543->g_300) = &p_50) == (((((*l_830) = (((*l_826) = ((*l_825) = l_823[5])) != p_1543->g_828)) , &p_1543->g_459) != (void*)0) , (void*)0)), (&l_817 != (void*)0))), p_1543->g_504)) , 65527UL) > p_51));
    }
    return p_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_1543->g_681 p_1543->g_68
 * writes:
 */
int8_t * func_71(uint64_t  p_72, uint16_t  p_73, int32_t * p_74, int32_t ** p_75, struct S1 * p_1543)
{ /* block id: 408 */
    int32_t *l_774 = (void*)0;
    int32_t *l_775 = &p_1543->g_194;
    int32_t *l_776[4] = {&p_1543->g_504,&p_1543->g_504,&p_1543->g_504,&p_1543->g_504};
    uint16_t l_777 = 0x1DEBL;
    int8_t *l_780 = &p_1543->g_274;
    int i;
    l_774 = (*p_1543->g_681);
    l_777++;
    return l_780;
}


/* ------------------------------------------ */
/* 
 * reads : p_1543->g_712 p_1543->g_713 p_1543->g_714
 * writes:
 */
int16_t  func_81(uint8_t  p_82, int64_t  p_83, int64_t * p_84, int32_t  p_85, uint32_t  p_86, struct S1 * p_1543)
{ /* block id: 80 */
    int32_t l_217 = (-10L);
    int16_t *l_222 = &p_1543->g_223;
    int32_t l_224[3][10] = {{0x6A30DE6AL,0x6A30DE6AL,1L,0L,3L,(-3L),0x465C19EBL,0x5E22890EL,0x465C19EBL,(-3L)},{0x6A30DE6AL,0x6A30DE6AL,1L,0L,3L,(-3L),0x465C19EBL,0x5E22890EL,0x465C19EBL,(-3L)},{0x6A30DE6AL,0x6A30DE6AL,1L,0L,3L,(-3L),0x465C19EBL,0x5E22890EL,0x465C19EBL,(-3L)}};
    int32_t *l_226[8];
    uint8_t **l_233 = &p_1543->g_43[0][5][1];
    int8_t *l_237 = &p_1543->g_238;
    int8_t **l_236 = &l_237;
    int32_t *l_250 = &l_224[1][0];
    union U0 *l_295 = &p_1543->g_225;
    uint64_t **l_354[6] = {&p_1543->g_100,&p_1543->g_100,&p_1543->g_100,&p_1543->g_100,&p_1543->g_100,&p_1543->g_100};
    uint16_t l_360 = 0x7405L;
    int16_t *l_431 = &p_1543->g_223;
    int16_t **l_430 = &l_431;
    int8_t *l_443 = (void*)0;
    int8_t **l_442 = &l_443;
    int8_t *l_444 = (void*)0;
    uint32_t l_447 = 0UL;
    uint64_t l_448 = 0xF5947B932794AB9AL;
    uint8_t l_602 = 252UL;
    int32_t *l_604[4][1];
    uint16_t l_625 = 0x4981L;
    int64_t l_655 = (-3L);
    int64_t l_734 = 0x0F8A5423E521EDE2L;
    uint64_t l_767[7];
    int i, j;
    for (i = 0; i < 8; i++)
        l_226[i] = (void*)0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_604[i][j] = &p_1543->g_225.f0;
    }
    for (i = 0; i < 7; i++)
        l_767[i] = 0xBC0B0EEEA70084CBL;
    return (**p_1543->g_712);
}


/* ------------------------------------------ */
/* 
 * reads : p_1543->g_68 p_1543->g_58 p_1543->g_122 p_1543->g_118 p_1543->g_63 p_1543->g_120 p_1543->g_101 p_1543->g_145 p_1543->g_100 p_1543->g_157 p_1543->g_135 p_1543->g_184 p_1543->g_97 p_1543->g_196 p_1543->g_43 p_1543->g_199
 * writes: p_1543->g_58 p_1543->g_68 p_1543->g_118 p_1543->g_63 p_1543->g_120 p_1543->g_101 p_1543->g_145 p_1543->g_157 p_1543->g_165 p_1543->g_196
 */
uint8_t  func_89(uint32_t  p_90, struct S1 * p_1543)
{ /* block id: 28 */
    int32_t *l_121 = &p_1543->g_58;
    int32_t l_154 = 9L;
    int32_t l_156 = 0x02D308AEL;
    uint8_t *l_179 = &p_1543->g_44[2][0];
lbl_152:
    (*p_1543->g_68) |= 0x6E36B020L;
lbl_203:
    (*p_1543->g_122) = l_121;
    for (p_1543->g_118 = 0; (p_1543->g_118 < 3); p_1543->g_118 = safe_add_func_int64_t_s_s(p_1543->g_118, 4))
    { /* block id: 33 */
        int64_t l_142[4][4][4] = {{{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)}},{{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)}},{{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)}},{{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)},{(-10L),(-10L),(-1L),(-2L)}}};
        int32_t l_151 = 1L;
        int8_t l_155[4][3] = {{2L,2L,2L},{2L,2L,2L},{2L,2L,2L},{2L,2L,2L}};
        union U0 *l_162 = (void*)0;
        int16_t l_190[7][1][5] = {{{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)}}};
        int32_t l_193 = (-3L);
        int32_t l_195[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i, j, k;
        for (p_1543->g_63 = 0; (p_1543->g_63 != (-21)); --p_1543->g_63)
        { /* block id: 36 */
            int8_t l_133 = 0x46L;
            int32_t l_138 = 3L;
            int32_t l_143 = 0x20370FD5L;
            uint8_t *l_183[6] = {&p_1543->g_44[3][0],&p_1543->g_44[3][0],&p_1543->g_44[3][0],&p_1543->g_44[3][0],&p_1543->g_44[3][0],&p_1543->g_44[3][0]};
            int i;
            if ((*p_1543->g_68))
                break;
            for (p_1543->g_120 = 0; (p_1543->g_120 < 33); ++p_1543->g_120)
            { /* block id: 40 */
                int32_t *l_153[1][1][9] = {{{&p_1543->g_58,&p_1543->g_58,&p_1543->g_58,&p_1543->g_58,&p_1543->g_58,&p_1543->g_58,&p_1543->g_58,&p_1543->g_58,&p_1543->g_58}}};
                uint8_t *l_185 = (void*)0;
                int16_t l_189 = 0x68E2L;
                int i, j, k;
                for (p_1543->g_101 = 0; (p_1543->g_101 != 23); ++p_1543->g_101)
                { /* block id: 43 */
                    int32_t *l_150[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_150[i][j] = &l_143;
                    }
                    for (p_1543->g_58 = (-12); (p_1543->g_58 != (-2)); p_1543->g_58 = safe_add_func_int16_t_s_s(p_1543->g_58, 9))
                    { /* block id: 46 */
                        int32_t *l_134 = &p_1543->g_135;
                        int32_t l_136 = 0x23393FF8L;
                        int32_t *l_137 = &l_136;
                        int32_t *l_139 = (void*)0;
                        int32_t *l_140 = &p_1543->g_135;
                        int32_t *l_141[8] = {&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138};
                        int i;
                        p_1543->g_145--;
                        return l_142[3][2][1];
                    }
                    l_151 = (((*p_1543->g_68) = (safe_mod_func_int64_t_s_s(0x27A66DA98BAAD8DBL, (*p_1543->g_100)))) < l_142[3][2][1]);
                    if (p_1543->g_120)
                        goto lbl_152;
                    (*l_121) = 0x20D768DBL;
                }
                --p_1543->g_157;
                for (l_154 = 15; (l_154 != 12); l_154--)
                { /* block id: 58 */
                    union U0 **l_166 = &p_1543->g_165;
                    uint8_t **l_180 = (void*)0;
                    uint8_t **l_181 = (void*)0;
                    uint8_t **l_182[2];
                    uint8_t ***l_186 = &l_181;
                    int32_t l_191 = 1L;
                    int8_t *l_202 = &l_155[0][1];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_182[i] = &l_179;
                    (*l_166) = l_162;
                    if (((((safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(0x113701F4L, (p_1543->g_135 , (l_151 &= ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((((18446744073709551614UL && (safe_add_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((((l_183[4] = l_179) == (p_1543->g_184 , l_185)) & 5UL), (&l_185 == ((*l_186) = l_181)))) == (*p_1543->g_100)) ^ 8L), p_90))) <= (-1L)) & 4294967290UL), p_90)) , (*l_121)), 0)) < p_1543->g_97))))), 0xA9E6D6167FD5A9A7L)) >= p_1543->g_97) != p_90) < p_90))
                    { /* block id: 63 */
                        if (p_90)
                            goto lbl_152;
                        (**p_1543->g_122) &= (safe_add_func_uint64_t_u_u(l_189, 1L));
                    }
                    else
                    { /* block id: 66 */
                        int32_t l_192[8][3] = {{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L},{1L,1L,0L}};
                        int8_t *l_201 = &l_133;
                        int8_t **l_200[10][9][2] = {{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}},{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}},{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}},{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}},{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}},{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}},{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}},{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}},{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}},{{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201},{&l_201,&l_201}}};
                        int i, j, k;
                        (*p_1543->g_68) = 5L;
                        ++p_1543->g_196;
                        (*p_1543->g_68) = (p_1543->g_43[0][0][0] != (p_1543->g_199 , (l_202 = l_185)));
                        return p_90;
                    }
                    if (p_1543->g_120)
                        goto lbl_152;
                }
            }
        }
        if (l_154)
            goto lbl_203;
    }
    return p_90;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1544;
    struct S1* p_1543 = &c_1544;
    struct S1 c_1545 = {
        1L, // p_1543->g_2
        8L, // p_1543->g_7
        {253UL,253UL,253UL,253UL}, // p_1543->g_30
        {{0xCAL},{0xCAL},{0xCAL},{0xCAL},{0xCAL},{0xCAL}}, // p_1543->g_44
        {{{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]}},{{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]}},{{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]}},{{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]}},{{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]},{&p_1543->g_44[3][0],&p_1543->g_44[3][0]}}}, // p_1543->g_43
        {0x6D700D1AL}, // p_1543->g_45
        0x76E8D2CAL, // p_1543->g_58
        (-1L), // p_1543->g_63
        0x3BEBDA3FL, // p_1543->g_64
        (void*)0, // p_1543->g_68
        &p_1543->g_68, // p_1543->g_67
        0x19DDA5C12BBF3AF7L, // p_1543->g_97
        {0x1A64B00FL}, // p_1543->g_99
        0x4591F806EB766298L, // p_1543->g_101
        &p_1543->g_101, // p_1543->g_100
        0x1BC53C27L, // p_1543->g_118
        4294967295UL, // p_1543->g_120
        &p_1543->g_68, // p_1543->g_122
        6L, // p_1543->g_135
        0x0260C403L, // p_1543->g_144
        0x8B0AL, // p_1543->g_145
        0xA3BDL, // p_1543->g_157
        (void*)0, // p_1543->g_163
        (void*)0, // p_1543->g_165
        {&p_1543->g_165,&p_1543->g_165,&p_1543->g_165,&p_1543->g_165,&p_1543->g_165,&p_1543->g_165,&p_1543->g_165,&p_1543->g_165}, // p_1543->g_164
        {0x49BC54FAL}, // p_1543->g_184
        0x7680494BL, // p_1543->g_194
        18446744073709551615UL, // p_1543->g_196
        {0x7B8070DBL}, // p_1543->g_199
        0x2DFB8A6804FA82FBL, // p_1543->g_206
        0x4D80L, // p_1543->g_223
        {0x1FF8E19EL}, // p_1543->g_225
        0x6CL, // p_1543->g_238
        0UL, // p_1543->g_258
        0x49E0DB0FL, // p_1543->g_268
        0x3A8EB31C7011D924L, // p_1543->g_270
        0x04388657L, // p_1543->g_272
        0L, // p_1543->g_273
        0x11L, // p_1543->g_274
        65535UL, // p_1543->g_276
        &p_1543->g_68, // p_1543->g_279
        6L, // p_1543->g_297
        (void*)0, // p_1543->g_301
        &p_1543->g_301, // p_1543->g_300
        {0UL,0UL,0UL}, // p_1543->g_345
        {0x5CD7E55AL}, // p_1543->g_358
        0xDBL, // p_1543->g_393
        0x2EE1L, // p_1543->g_401
        &p_1543->g_68, // p_1543->g_425
        (void*)0, // p_1543->g_459
        {{&p_1543->g_165},{&p_1543->g_165},{&p_1543->g_165},{&p_1543->g_165}}, // p_1543->g_469
        {-1L}, // p_1543->g_480
        0L, // p_1543->g_503
        (-10L), // p_1543->g_504
        0xF12CDA75L, // p_1543->g_512
        {&p_1543->g_68,&p_1543->g_68,&p_1543->g_68,&p_1543->g_68,&p_1543->g_68,&p_1543->g_68,&p_1543->g_68,&p_1543->g_68,&p_1543->g_68,&p_1543->g_68}, // p_1543->g_515
        &p_1543->g_68, // p_1543->g_586
        {0x4BE2AC29L}, // p_1543->g_641
        &p_1543->g_68, // p_1543->g_681
        0x3C29L, // p_1543->g_714
        {&p_1543->g_714}, // p_1543->g_713
        &p_1543->g_713[0], // p_1543->g_712
        (void*)0, // p_1543->g_717
        {0x6EDDC309L}, // p_1543->g_752
        {{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL},{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL},{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL},{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL},{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL},{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL},{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL},{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL},{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL},{0xF059A230L,4294967295UL,0xF059A230L,0xF059A230L,4294967295UL}}, // p_1543->g_769
        &p_1543->g_68, // p_1543->g_770
        {&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1],&p_1543->g_43[0][5][1]}, // p_1543->g_829
        &p_1543->g_829[3], // p_1543->g_828
        0L, // p_1543->g_831
        0x2FD2L, // p_1543->g_856
        {&p_1543->g_165,&p_1543->g_165,&p_1543->g_165}, // p_1543->g_880
        &p_1543->g_68, // p_1543->g_887
        &p_1543->g_68, // p_1543->g_888
        0xE41507957BF77A3CL, // p_1543->g_901
        (void*)0, // p_1543->g_912
        (void*)0, // p_1543->g_975
        {{(-2L),(-2L),0L,0x43L,0x78L,0x43L,0L},{(-2L),(-2L),0L,0x43L,0x78L,0x43L,0L},{(-2L),(-2L),0L,0x43L,0x78L,0x43L,0L},{(-2L),(-2L),0L,0x43L,0x78L,0x43L,0L}}, // p_1543->g_988
        {-6L}, // p_1543->g_989
        {-7L}, // p_1543->g_1005
        0x37FBL, // p_1543->g_1050
        {0xCADCL,0xCADCL,0xCADCL,0xCADCL}, // p_1543->g_1103
        0x2CFCE1C0F3611FDDL, // p_1543->g_1139
        4294967295UL, // p_1543->g_1270
        {0x3B0CC0DCL}, // p_1543->g_1290
        &p_1543->g_752, // p_1543->g_1342
        &p_1543->g_1342, // p_1543->g_1341
        &p_1543->g_1341, // p_1543->g_1340
        18446744073709551610UL, // p_1543->g_1362
        {&p_1543->g_1362,&p_1543->g_1362,&p_1543->g_1362}, // p_1543->g_1361
        &p_1543->g_1361[1], // p_1543->g_1360
        {(-4L),(-4L),(-4L),(-4L),(-4L)}, // p_1543->g_1363
        0x6B84L, // p_1543->g_1403
        (-1L), // p_1543->g_1416
        &p_1543->g_268, // p_1543->g_1454
        &p_1543->g_68, // p_1543->g_1468
        &p_1543->g_1468, // p_1543->g_1467
        &p_1543->g_1467, // p_1543->g_1466
        (-1L), // p_1543->g_1519
    };
    c_1544 = c_1545;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1543);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1543->g_2, "p_1543->g_2", print_hash_value);
    transparent_crc(p_1543->g_7, "p_1543->g_7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1543->g_30[i], "p_1543->g_30[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1543->g_44[i][j], "p_1543->g_44[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1543->g_45.f0, "p_1543->g_45.f0", print_hash_value);
    transparent_crc(p_1543->g_58, "p_1543->g_58", print_hash_value);
    transparent_crc(p_1543->g_63, "p_1543->g_63", print_hash_value);
    transparent_crc(p_1543->g_64, "p_1543->g_64", print_hash_value);
    transparent_crc(p_1543->g_97, "p_1543->g_97", print_hash_value);
    transparent_crc(p_1543->g_99.f0, "p_1543->g_99.f0", print_hash_value);
    transparent_crc(p_1543->g_101, "p_1543->g_101", print_hash_value);
    transparent_crc(p_1543->g_118, "p_1543->g_118", print_hash_value);
    transparent_crc(p_1543->g_120, "p_1543->g_120", print_hash_value);
    transparent_crc(p_1543->g_135, "p_1543->g_135", print_hash_value);
    transparent_crc(p_1543->g_144, "p_1543->g_144", print_hash_value);
    transparent_crc(p_1543->g_145, "p_1543->g_145", print_hash_value);
    transparent_crc(p_1543->g_157, "p_1543->g_157", print_hash_value);
    transparent_crc(p_1543->g_184.f0, "p_1543->g_184.f0", print_hash_value);
    transparent_crc(p_1543->g_194, "p_1543->g_194", print_hash_value);
    transparent_crc(p_1543->g_196, "p_1543->g_196", print_hash_value);
    transparent_crc(p_1543->g_199.f0, "p_1543->g_199.f0", print_hash_value);
    transparent_crc(p_1543->g_206, "p_1543->g_206", print_hash_value);
    transparent_crc(p_1543->g_223, "p_1543->g_223", print_hash_value);
    transparent_crc(p_1543->g_225.f0, "p_1543->g_225.f0", print_hash_value);
    transparent_crc(p_1543->g_238, "p_1543->g_238", print_hash_value);
    transparent_crc(p_1543->g_258, "p_1543->g_258", print_hash_value);
    transparent_crc(p_1543->g_268, "p_1543->g_268", print_hash_value);
    transparent_crc(p_1543->g_270, "p_1543->g_270", print_hash_value);
    transparent_crc(p_1543->g_272, "p_1543->g_272", print_hash_value);
    transparent_crc(p_1543->g_273, "p_1543->g_273", print_hash_value);
    transparent_crc(p_1543->g_274, "p_1543->g_274", print_hash_value);
    transparent_crc(p_1543->g_276, "p_1543->g_276", print_hash_value);
    transparent_crc(p_1543->g_297, "p_1543->g_297", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1543->g_345[i], "p_1543->g_345[i]", print_hash_value);

    }
    transparent_crc(p_1543->g_358.f0, "p_1543->g_358.f0", print_hash_value);
    transparent_crc(p_1543->g_393, "p_1543->g_393", print_hash_value);
    transparent_crc(p_1543->g_401, "p_1543->g_401", print_hash_value);
    transparent_crc(p_1543->g_480.f0, "p_1543->g_480.f0", print_hash_value);
    transparent_crc(p_1543->g_503, "p_1543->g_503", print_hash_value);
    transparent_crc(p_1543->g_504, "p_1543->g_504", print_hash_value);
    transparent_crc(p_1543->g_512, "p_1543->g_512", print_hash_value);
    transparent_crc(p_1543->g_641.f0, "p_1543->g_641.f0", print_hash_value);
    transparent_crc(p_1543->g_714, "p_1543->g_714", print_hash_value);
    transparent_crc(p_1543->g_752.f0, "p_1543->g_752.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1543->g_769[i][j], "p_1543->g_769[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1543->g_831, "p_1543->g_831", print_hash_value);
    transparent_crc(p_1543->g_856, "p_1543->g_856", print_hash_value);
    transparent_crc(p_1543->g_901, "p_1543->g_901", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1543->g_988[i][j], "p_1543->g_988[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1543->g_989.f0, "p_1543->g_989.f0", print_hash_value);
    transparent_crc(p_1543->g_1005.f0, "p_1543->g_1005.f0", print_hash_value);
    transparent_crc(p_1543->g_1050, "p_1543->g_1050", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1543->g_1103[i], "p_1543->g_1103[i]", print_hash_value);

    }
    transparent_crc(p_1543->g_1139, "p_1543->g_1139", print_hash_value);
    transparent_crc(p_1543->g_1270, "p_1543->g_1270", print_hash_value);
    transparent_crc(p_1543->g_1290.f0, "p_1543->g_1290.f0", print_hash_value);
    transparent_crc(p_1543->g_1362, "p_1543->g_1362", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1543->g_1363[i], "p_1543->g_1363[i]", print_hash_value);

    }
    transparent_crc(p_1543->g_1403, "p_1543->g_1403", print_hash_value);
    transparent_crc(p_1543->g_1416, "p_1543->g_1416", print_hash_value);
    transparent_crc(p_1543->g_1519, "p_1543->g_1519", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
