// -g 53,58,2 -l 1,29,2
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


// Seed: 344741169

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   volatile uint8_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   volatile uint64_t  f4;
   uint16_t  f5;
   volatile int64_t  f6;
};

struct S1 {
   struct S0  f0;
};

union U2 {
   volatile int32_t  f0;
   uint8_t  f1;
   int8_t  f2;
   volatile uint16_t  f3;
};

union U3 {
   uint32_t  f0;
};

struct S4 {
    union U3 g_4;
    int32_t g_6;
    int16_t g_9;
    uint32_t g_10;
    int32_t g_53;
    int64_t g_71[8];
    struct S1 g_78;
    uint16_t g_90[5];
    uint32_t g_110;
    int64_t g_123;
    int32_t *g_131;
    int32_t ** volatile g_130;
    struct S1 g_163;
    uint32_t g_168[9];
    uint32_t g_180;
    uint64_t *** volatile g_185;
    uint64_t *g_187;
    uint64_t **g_186;
    uint16_t *g_201;
    int32_t g_205[9];
    int32_t * volatile g_204;
    uint32_t g_212;
    volatile struct S0 g_213[8];
    int16_t g_234;
    int64_t g_253;
    uint8_t g_278;
    uint8_t * volatile g_277;
    int16_t g_290;
    volatile int64_t g_297;
    uint8_t g_300;
    uint64_t ***g_305;
    uint64_t ****g_316;
    volatile struct S0 g_339;
    struct S1 g_349;
    struct S1 * volatile g_350;
    uint32_t g_401;
    volatile struct S1 g_402;
    volatile struct S1 g_403;
    volatile struct S1 g_426;
    int64_t *g_430;
    int32_t *** volatile g_431;
    volatile int32_t g_445;
    int64_t *g_461;
    int8_t g_479[4][5][10];
    int8_t g_495;
    uint32_t *g_519;
    uint32_t **g_518;
    uint16_t g_530;
    struct S1 g_537;
    struct S1 g_553;
    struct S1 * volatile g_555[9];
    int32_t g_576;
    volatile struct S1 g_577;
    volatile int32_t *g_578;
    volatile struct S1 g_584[7];
    volatile struct S1 * volatile g_586;
    union U2 g_594;
    int64_t g_609;
    int32_t ** volatile g_616;
    int32_t g_648;
    volatile struct S0 g_674;
    int32_t g_682;
    int32_t g_685;
    struct S1 g_736;
    int16_t *** volatile g_779;
    volatile union U2 g_820;
    volatile int32_t **g_837;
    int32_t ** volatile g_838;
    volatile union U3 * volatile g_920;
    volatile union U3 * volatile *g_919;
    struct S0 *g_927;
    struct S0 ** volatile g_926;
    union U2 g_981;
    struct S1 *g_989;
    struct S1 *g_995[4][9];
    struct S1 **g_994;
    volatile struct S0 g_1024;
    volatile struct S0 g_1030;
    struct S0 g_1031;
    volatile uint8_t g_1040;
    volatile uint8_t *g_1039;
    volatile uint8_t **g_1038;
    int32_t ** volatile g_1042;
    volatile struct S0 g_1052;
    uint32_t g_1111;
    int32_t ** volatile g_1117;
    int32_t ** volatile g_1122;
    struct S1 g_1170;
    volatile union U2 g_1185;
    int16_t *g_1208;
    int16_t **g_1207;
    int16_t ***g_1206;
    struct S0 g_1213;
    volatile struct S0 g_1216;
    int32_t ** volatile g_1221;
    volatile uint8_t g_1257[6][5];
    volatile int16_t g_1263[9];
    uint32_t *** volatile g_1267;
    int32_t ** volatile g_1269;
    uint32_t g_1330;
    int16_t g_1331;
    struct S0 g_1334;
    volatile struct S1 g_1343;
    int32_t ** volatile g_1344;
    volatile union U2 g_1352;
    int32_t ** volatile g_1365;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S4 * p_1368);
int32_t * func_2(union U3  p_3, struct S4 * p_1368);
uint32_t  func_13(int32_t  p_14, int64_t  p_15, int16_t  p_16, uint32_t  p_17, struct S4 * p_1368);
uint8_t  func_20(int64_t  p_21, struct S4 * p_1368);
int64_t  func_22(uint8_t  p_23, int32_t * p_24, int32_t * p_25, struct S4 * p_1368);
int32_t * func_26(int32_t  p_27, uint16_t  p_28, int32_t * p_29, struct S4 * p_1368);
uint16_t  func_30(int32_t * p_31, int32_t * p_32, struct S4 * p_1368);
int32_t * func_33(int16_t  p_34, uint16_t  p_35, int32_t * p_36, uint32_t  p_37, struct S4 * p_1368);
int16_t  func_40(int64_t  p_41, int32_t * p_42, struct S4 * p_1368);
int64_t  func_43(int32_t  p_44, int32_t * p_45, int64_t  p_46, int32_t * p_47, struct S4 * p_1368);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_1(struct S4 * p_1368)
{ /* block id: 4 */
    int32_t l_1275 = 0x21A7E0A8L;
    int32_t l_1277[5] = {7L,7L,7L,7L,7L};
    int16_t l_1278 = (-9L);
    int64_t l_1279[1][6][5];
    uint32_t l_1280 = 0UL;
    uint16_t l_1296 = 65535UL;
    int32_t *l_1333 = (void*)0;
    uint64_t *l_1345 = &p_1368->g_78.f0.f0;
    int32_t **l_1366 = (void*)0;
    int32_t **l_1367 = &p_1368->g_131;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
                l_1279[i][j][k] = 0x525D9789505528AAL;
        }
    }
    return l_1277[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1368->g_10 p_1368->g_9 p_1368->g_6 p_1368->g_71 p_1368->g_78 p_1368->g_90 p_1368->g_53 p_1368->g_110 p_1368->g_4.f0 p_1368->g_130 p_1368->g_163 p_1368->g_168 p_1368->g_180 p_1368->g_123 p_1368->g_187 p_1368->g_204 p_1368->g_205 p_1368->g_201 p_1368->g_426.f0.f6 p_1368->g_584 p_1368->g_586 p_1368->g_594 p_1368->g_426.f0.f5 p_1368->g_553.f0.f5 p_1368->g_300 p_1368->g_430 p_1368->g_609 p_1368->g_212 p_1368->g_616 p_1368->g_402.f0.f5 p_1368->g_594.f2 p_1368->g_553.f0.f0 p_1368->g_277 p_1368->g_278 p_1368->g_349.f0.f5 p_1368->g_213 p_1368->g_578 p_1368->g_445 p_1368->g_131 p_1368->g_648 p_1368->g_537.f0.f5 p_1368->g_290 p_1368->g_553.f0.f6 p_1368->g_479 p_1368->g_926 p_1368->g_927 p_1368->g_349.f0 p_1368->g_981 p_1368->g_576 p_1368->g_989 p_1368->g_553.f0.f2 p_1368->g_837 p_1368->g_577.f0.f0 p_1368->g_537.f0.f3 p_1368->g_682 p_1368->g_1024 p_1368->g_1030 p_1368->g_1031 p_1368->g_1038 p_1368->g_1042 p_1368->g_994 p_1368->g_1052 p_1368->g_495 p_1368->g_685 p_1368->g_349 p_1368->g_1039 p_1368->g_1040 p_1368->g_1117 p_1368->g_995 p_1368->g_1122 p_1368->g_4 p_1368->g_339.f3 p_1368->g_537.f0.f0 p_1368->g_1170 p_1368->g_1185 p_1368->g_1206 p_1368->g_1208 p_1368->g_1216 p_1368->g_1221 p_1368->g_537 p_1368->g_553 p_1368->g_736 p_1368->g_1257 p_1368->g_1213.f2 p_1368->g_1267
 * writes: p_1368->g_10 p_1368->g_71 p_1368->g_78.f0.f2 p_1368->g_90 p_1368->g_110 p_1368->g_78.f0.f0 p_1368->g_131 p_1368->g_78.f0.f5 p_1368->g_168 p_1368->g_130 p_1368->g_53 p_1368->g_180 p_1368->g_186 p_1368->g_201 p_1368->g_163.f0.f0 p_1368->g_205 p_1368->g_578 p_1368->g_402 p_1368->g_300 p_1368->g_609 p_1368->g_212 p_1368->g_163.f0.f5 p_1368->g_594.f2 p_1368->g_553.f0.f0 p_1368->g_349.f0.f5 p_1368->g_213 p_1368->g_445 p_1368->g_278 p_1368->g_495 p_1368->g_123 p_1368->g_994 p_1368->g_553.f0.f2 p_1368->g_349.f0 p_1368->g_290 p_1368->g_1031.f5 p_1368->g_995 p_1368->g_989 p_1368->g_316 p_1368->g_1111 p_1368->g_234 p_1368->g_537 p_1368->g_349 p_1368->g_553 p_1368->g_736 p_1368->g_1206 p_1368->g_682 p_1368->g_981.f2 p_1368->g_927 p_1368->g_1031.f2 p_1368->g_1257 p_1368->g_1213.f2 p_1368->g_6 p_1368->g_518
 */
int32_t * func_2(union U3  p_3, struct S4 * p_1368)
{ /* block id: 5 */
    int32_t *l_5 = &p_1368->g_6;
    int32_t l_7 = (-2L);
    int32_t *l_8[2];
    int32_t **l_610 = (void*)0;
    int32_t **l_611[8] = {(void*)0,&l_5,(void*)0,(void*)0,&l_5,(void*)0,(void*)0,&l_5};
    int32_t *l_612 = &p_1368->g_205[4];
    uint32_t *l_1260[5][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_1261[2];
    int16_t l_1262 = 1L;
    uint32_t l_1264 = 0x3BAE58FFL;
    int32_t *l_1268 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_8[i] = &p_1368->g_6;
    for (i = 0; i < 2; i++)
        l_1261[i] = 0x27B37746L;
    p_1368->g_10--;
    (*l_5) = (((void*)0 == &l_7) >= (p_1368->g_1213.f2 |= (func_13(p_1368->g_9, ((void*)0 == &l_7), p_1368->g_6, (~(safe_mul_func_uint8_t_u_u(func_20(func_22(p_1368->g_6, (l_612 = func_26((func_30(func_33(((safe_mul_func_uint8_t_u_u(p_1368->g_9, (func_40(func_43(p_3.f0, &p_1368->g_6, p_1368->g_9, &l_7, p_1368), &p_1368->g_6, p_1368) ^ 2L))) , 0x3491L), p_1368->g_123, l_8[0], p_1368->g_6, p_1368), l_8[1], p_1368) | p_3.f0), p_3.f0, l_5, p_1368)), &p_1368->g_6, p_1368), p_1368), p_1368->g_6))), p_1368) > p_3.f0)));
    l_1264++;
    (*p_1368->g_1267) = &l_1260[1][5];
    return l_1268;
}


/* ------------------------------------------ */
/* 
 * reads : p_1368->g_53 p_1368->g_1221 p_1368->g_212 p_1368->g_1208 p_1368->g_290 p_1368->g_578 p_1368->g_989 p_1368->g_537 p_1368->g_349 p_1368->g_553 p_1368->g_736 p_1368->g_204 p_1368->g_1031.f2 p_1368->g_1257
 * writes: p_1368->g_53 p_1368->g_131 p_1368->g_212 p_1368->g_682 p_1368->g_445 p_1368->g_205 p_1368->g_349.f0.f2 p_1368->g_981.f2 p_1368->g_927 p_1368->g_1031.f2 p_1368->g_1257
 */
uint32_t  func_13(int32_t  p_14, int64_t  p_15, int16_t  p_16, uint32_t  p_17, struct S4 * p_1368)
{ /* block id: 531 */
    uint32_t l_1225 = 4294967292UL;
    int32_t *l_1232[10][8] = {{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0},{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0},{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0},{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0},{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0},{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0},{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0},{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0},{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0},{&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0,&p_1368->g_205[7],&p_1368->g_205[7],(void*)0}};
    int32_t *l_1243 = &p_1368->g_682;
    int i, j;
    for (p_1368->g_53 = 21; (p_1368->g_53 <= (-7)); p_1368->g_53 = safe_sub_func_uint8_t_u_u(p_1368->g_53, 1))
    { /* block id: 534 */
        int32_t *l_1220 = (void*)0;
        int32_t *l_1222 = &p_1368->g_682;
        int32_t *l_1223 = &p_1368->g_685;
        int32_t *l_1224[8][6];
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 6; j++)
                l_1224[i][j] = (void*)0;
        }
        (*p_1368->g_1221) = l_1220;
        if (p_16)
            break;
        ++l_1225;
        for (p_1368->g_212 = (-16); (p_1368->g_212 > 30); p_1368->g_212++)
        { /* block id: 540 */
            (*p_1368->g_578) = ((*l_1222) = (safe_rshift_func_int16_t_s_u((*p_1368->g_1208), 14)));
        }
    }
    if (((*p_1368->g_204) = ((*p_1368->g_989) , (0UL && (p_16 != p_15)))))
    { /* block id: 546 */
        (*p_1368->g_578) = p_15;
        for (p_1368->g_349.f0.f2 = 0; (p_1368->g_349.f0.f2 != 58); p_1368->g_349.f0.f2 = safe_add_func_uint64_t_u_u(p_1368->g_349.f0.f2, 9))
        { /* block id: 550 */
            int64_t l_1237 = 1L;
            for (p_1368->g_981.f2 = 0; (p_1368->g_981.f2 == 19); p_1368->g_981.f2 = safe_add_func_uint64_t_u_u(p_1368->g_981.f2, 7))
            { /* block id: 553 */
                uint64_t l_1238 = 0x5DA658DAD5A3AEBFL;
                struct S0 *l_1241 = &p_1368->g_553.f0;
                struct S0 **l_1242 = &p_1368->g_927;
                l_1238++;
                (*l_1242) = l_1241;
            }
            l_1232[6][4] = l_1243;
        }
    }
    else
    { /* block id: 559 */
        int8_t l_1246[8][7] = {{0x28L,(-6L),(-10L),1L,(-6L),1L,(-10L)},{0x28L,(-6L),(-10L),1L,(-6L),1L,(-10L)},{0x28L,(-6L),(-10L),1L,(-6L),1L,(-10L)},{0x28L,(-6L),(-10L),1L,(-6L),1L,(-10L)},{0x28L,(-6L),(-10L),1L,(-6L),1L,(-10L)},{0x28L,(-6L),(-10L),1L,(-6L),1L,(-10L)},{0x28L,(-6L),(-10L),1L,(-6L),1L,(-10L)},{0x28L,(-6L),(-10L),1L,(-6L),1L,(-10L)}};
        int32_t l_1247 = 0x6108886FL;
        int32_t l_1253 = (-6L);
        int32_t l_1254 = (-9L);
        int32_t l_1256 = 0L;
        int i, j;
        for (p_1368->g_1031.f2 = 0; (p_1368->g_1031.f2 > 9); p_1368->g_1031.f2 = safe_add_func_int8_t_s_s(p_1368->g_1031.f2, 8))
        { /* block id: 562 */
            int8_t l_1248 = (-10L);
            int32_t l_1249 = 0x01BCB928L;
            int32_t l_1250 = 0x46193CB8L;
            int32_t l_1251 = 0x06654D58L;
            int32_t l_1252[3];
            int32_t l_1255 = 8L;
            int i;
            for (i = 0; i < 3; i++)
                l_1252[i] = 0L;
            p_1368->g_1257[0][3]++;
            return p_16;
        }
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_1368->g_212 p_1368->g_616 p_1368->g_205 p_1368->g_402.f0.f5 p_1368->g_201 p_1368->g_594.f2 p_1368->g_180 p_1368->g_553.f0.f0 p_1368->g_277 p_1368->g_278 p_1368->g_349.f0.f5 p_1368->g_213 p_1368->g_578 p_1368->g_445 p_1368->g_131 p_1368->g_648 p_1368->g_537.f0.f5 p_1368->g_290 p_1368->g_553.f0.f6 p_1368->g_479 p_1368->g_926 p_1368->g_927 p_1368->g_349.f0 p_1368->g_981 p_1368->g_430 p_1368->g_71 p_1368->g_187 p_1368->g_163.f0.f0 p_1368->g_576 p_1368->g_163.f0.f5 p_1368->g_78.f0.f5 p_1368->g_989 p_1368->g_553.f0.f2 p_1368->g_204 p_1368->g_837 p_1368->g_577.f0.f0 p_1368->g_537.f0.f3 p_1368->g_682 p_1368->g_1024 p_1368->g_1030 p_1368->g_1031 p_1368->g_1038 p_1368->g_426.f0.f6 p_1368->g_123 p_1368->g_584 p_1368->g_586 p_1368->g_594 p_1368->g_426.f0.f5 p_1368->g_553.f0.f5 p_1368->g_300 p_1368->g_10 p_1368->g_6 p_1368->g_609 p_1368->g_1042 p_1368->g_994 p_1368->g_1052 p_1368->g_9 p_1368->g_495 p_1368->g_685 p_1368->g_349 p_1368->g_1039 p_1368->g_1040 p_1368->g_1117 p_1368->g_995 p_1368->g_1122 p_1368->g_4 p_1368->g_339.f3 p_1368->g_537.f0.f0 p_1368->g_78.f0.f0 p_1368->g_1170 p_1368->g_1185 p_1368->g_1206 p_1368->g_1208 p_1368->g_1216
 * writes: p_1368->g_212 p_1368->g_131 p_1368->g_163.f0.f5 p_1368->g_78.f0.f5 p_1368->g_205 p_1368->g_594.f2 p_1368->g_180 p_1368->g_553.f0.f0 p_1368->g_349.f0.f5 p_1368->g_213 p_1368->g_445 p_1368->g_278 p_1368->g_495 p_1368->g_163.f0.f0 p_1368->g_123 p_1368->g_71 p_1368->g_994 p_1368->g_553.f0.f2 p_1368->g_349.f0 p_1368->g_290 p_1368->g_402 p_1368->g_300 p_1368->g_609 p_1368->g_1031.f5 p_1368->g_995 p_1368->g_989 p_1368->g_316 p_1368->g_1111 p_1368->g_234 p_1368->g_201 p_1368->g_537 p_1368->g_349 p_1368->g_553 p_1368->g_736 p_1368->g_1206
 */
uint8_t  func_20(int64_t  p_21, struct S4 * p_1368)
{ /* block id: 242 */
    int32_t *l_615 = &p_1368->g_205[3];
    int16_t *l_627 = &p_1368->g_9;
    int32_t *l_628 = &p_1368->g_576;
    int64_t l_659[10] = {0x7940655966995747L,0x48D54206D30B69B1L,0x7940655966995747L,0x7940655966995747L,0x48D54206D30B69B1L,0x7940655966995747L,0x7940655966995747L,0x48D54206D30B69B1L,0x7940655966995747L,0x7940655966995747L};
    uint32_t ***l_660 = &p_1368->g_518;
    int32_t l_697 = (-1L);
    int32_t l_704 = 0x27C9D76FL;
    int32_t l_710 = 4L;
    int32_t l_712 = (-1L);
    int32_t l_714 = (-2L);
    int32_t l_715 = 0L;
    int32_t l_716 = 0x575679BEL;
    int32_t l_718 = 1L;
    uint64_t l_767 = 0x8D4E244E5658657BL;
    int64_t **l_784[7];
    int8_t l_835 = 9L;
    int32_t l_854[3];
    uint8_t *l_880 = &p_1368->g_300;
    uint8_t l_974 = 3UL;
    uint32_t l_1088 = 4294967295UL;
    int64_t l_1090 = 0x69EC6F156726909DL;
    union U3 *l_1114 = &p_1368->g_4;
    union U3 **l_1113 = &l_1114;
    int32_t l_1139 = 0x3CD3530FL;
    uint64_t l_1145 = 0xF7796AD87D3870F5L;
    int32_t **l_1172 = &p_1368->g_131;
    uint64_t *****l_1183 = (void*)0;
    uint64_t ****l_1184 = &p_1368->g_305;
    int32_t l_1192 = (-5L);
    int16_t **l_1204 = (void*)0;
    int16_t ***l_1203 = &l_1204;
    int16_t ****l_1205 = &l_1203;
    struct S1 ***l_1209 = &p_1368->g_994;
    int32_t l_1210 = (-1L);
    uint16_t *l_1211 = &p_1368->g_163.f0.f5;
    struct S0 *l_1212 = &p_1368->g_1213;
    uint32_t *l_1214 = &p_1368->g_537.f0.f3;
    uint16_t *l_1215 = &p_1368->g_537.f0.f5;
    int32_t *l_1217 = &l_697;
    int i;
    for (i = 0; i < 7; i++)
        l_784[i] = &p_1368->g_461;
    for (i = 0; i < 3; i++)
        l_854[i] = 5L;
    for (p_1368->g_212 = 0; (p_1368->g_212 != 43); p_1368->g_212 = safe_add_func_uint64_t_u_u(p_1368->g_212, 8))
    { /* block id: 245 */
        uint8_t l_629 = 255UL;
        int32_t l_630 = 0x72B3EDC1L;
        (*p_1368->g_616) = l_615;
        (*l_615) = ((((l_630 = ((safe_mul_func_uint16_t_u_u((!(*l_615)), (p_21 ^ ((*p_1368->g_201) = (((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((((p_21 , ((((l_627 == (void*)0) > (*l_615)) && ((l_628 = l_615) == (void*)0)) || p_21)) != p_1368->g_402.f0.f5) >= p_21) >= (*l_615)), l_629)) && p_21), 2)) >= p_21) != 0UL))))) > 1UL)) != p_21) >= 0x1AL) ^ (*l_615));
        for (p_1368->g_594.f2 = 0; (p_1368->g_594.f2 > 6); p_1368->g_594.f2 = safe_add_func_int8_t_s_s(p_1368->g_594.f2, 3))
        { /* block id: 253 */
            int16_t *l_635 = &p_1368->g_290;
            int32_t l_645 = 0x7C248D12L;
            for (p_1368->g_180 = (-1); (p_1368->g_180 > 28); p_1368->g_180++)
            { /* block id: 256 */
                for (p_1368->g_553.f0.f0 = 1; (p_1368->g_553.f0.f0 <= 8); p_1368->g_553.f0.f0 += 1)
                { /* block id: 259 */
                    return (*p_1368->g_277);
                }
                for (p_1368->g_349.f0.f5 = 1; (p_1368->g_349.f0.f5 <= 7); p_1368->g_349.f0.f5 += 1)
                { /* block id: 264 */
                    int i;
                    p_1368->g_213[p_1368->g_349.f0.f5] = p_1368->g_213[p_1368->g_349.f0.f5];
                }
                (*p_1368->g_578) |= ((*l_615) = (-4L));
            }
            (*p_1368->g_578) &= (((void*)0 == l_635) == (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((void*)0 == l_615), ((~((((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_u(0x10L, 7)))) <= ((safe_mod_func_uint16_t_u_u(l_645, p_21)) >= (p_21 & ((*p_1368->g_201) = (safe_div_func_int32_t_s_s((*p_1368->g_131), p_21)))))) != 0x7151FACFL) <= p_1368->g_648)) >= 0x5AF5EEDDL))), 3)));
        }
        if ((*l_615))
            break;
    }
lbl_1171:
    if ((safe_mul_func_uint8_t_u_u((p_1368->g_278 |= (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(p_21, ((((safe_sub_func_uint32_t_u_u((~((((((((p_1368->g_537.f0.f5 > (-1L)) || (p_21 < p_21)) && (*l_615)) > ((l_659[6] , l_660) != ((p_21 || 0UL) , l_660))) , p_1368->g_290) , p_21) > 0x0DL) , p_21)), (*l_615))) , 65535UL) & (*l_615)) , p_1368->g_553.f0.f6))), (*l_615)))), p_21)))
    { /* block id: 276 */
        uint16_t l_679[7] = {3UL,65531UL,3UL,3UL,65531UL,3UL,3UL};
        int32_t l_705 = (-1L);
        int32_t l_706 = 0x259628C3L;
        int32_t l_708 = 0x20B9AF87L;
        int32_t l_717 = 0x20A0D2BBL;
        uint8_t l_783 = 0x5CL;
        uint64_t ****l_833 = (void*)0;
        int32_t **l_836 = &l_628;
        int32_t l_891 = 0x04C47014L;
        int32_t l_932 = 0L;
        int32_t l_935[1];
        int32_t l_1085 = 0x53394063L;
        uint64_t l_1089 = 0x2E3332CFCE1C0F36L;
        union U3 *l_1104 = &p_1368->g_4;
        union U3 **l_1103 = &l_1104;
        uint16_t **l_1148[7];
        int16_t *l_1166 = &p_1368->g_234;
        int i;
        for (i = 0; i < 1; i++)
            l_935[i] = 0L;
        for (i = 0; i < 7; i++)
            l_1148[i] = &p_1368->g_201;
lbl_1125:
        for (p_1368->g_495 = 0; (p_1368->g_495 == 0); p_1368->g_495++)
        { /* block id: 279 */
            uint16_t l_667 = 0x7AAAL;
            uint8_t *l_668[5];
            uint64_t ****l_673 = &p_1368->g_305;
            int32_t l_683 = (-2L);
            int32_t l_709 = (-1L);
            int32_t l_711 = 1L;
            int32_t l_713[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int64_t **l_789 = &p_1368->g_461;
            uint16_t *l_888 = &p_1368->g_736.f0.f5;
            union U3 *l_917 = (void*)0;
            union U3 **l_916 = &l_917;
            struct S0 *l_925[5];
            int i;
            for (i = 0; i < 5; i++)
                l_668[i] = &p_1368->g_300;
            for (i = 0; i < 5; i++)
                l_925[i] = (void*)0;
            (1 + 1);
        }
        for (p_1368->g_163.f0.f0 = 0; (p_1368->g_163.f0.f0 == 56); p_1368->g_163.f0.f0 = safe_add_func_int32_t_s_s(p_1368->g_163.f0.f0, 7))
        { /* block id: 412 */
            struct S0 **l_960 = &p_1368->g_927;
            int32_t l_978 = (-1L);
            int32_t l_982[8] = {0x77957C79L,0x77957C79L,0x77957C79L,0x77957C79L,0x77957C79L,0x77957C79L,0x77957C79L,0x77957C79L};
            struct S1 *l_1043 = &p_1368->g_349;
            int32_t *l_1080 = &l_704;
            int64_t l_1086 = 0x25E86998E085695FL;
            uint64_t *l_1087 = &p_1368->g_553.f0.f0;
            int32_t *l_1091 = &l_714;
            int32_t l_1141 = 5L;
            int i;
            for (l_715 = 0; (l_715 <= 3); l_715 += 1)
            { /* block id: 415 */
                int64_t l_971 = (-7L);
                int32_t **l_1021 = (void*)0;
                int32_t *l_1041 = &l_982[1];
                int32_t *l_1061 = &l_714;
                for (p_1368->g_123 = 3; (p_1368->g_123 >= 0); p_1368->g_123 -= 1)
                { /* block id: 418 */
                    int8_t *l_975 = &p_1368->g_594.f2;
                    int8_t *l_976 = &p_1368->g_594.f2;
                    int8_t *l_977[10] = {&l_835,&p_1368->g_479[1][1][3],(void*)0,&p_1368->g_479[1][1][3],&l_835,&l_835,&p_1368->g_479[1][1][3],(void*)0,&p_1368->g_479[1][1][3],&l_835};
                    uint32_t l_983 = 0UL;
                    int32_t l_984 = 1L;
                    uint32_t l_1020 = 6UL;
                    int i, j, k;
                    if (((safe_mod_func_uint64_t_u_u((l_984 = (((((safe_unary_minus_func_int32_t_s((l_960 == (void*)0))) < ((p_1368->g_479[l_715][(l_715 + 1)][(l_715 + 3)] >= ((((safe_rshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((**p_1368->g_926) , ((*p_1368->g_430) = (safe_mod_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_u(((*p_1368->g_201) = (safe_mul_func_uint8_t_u_u(l_971, (l_978 &= (safe_add_func_int16_t_s_s(l_974, (0x0DFEL == p_1368->g_479[l_715][(l_715 + 1)][(l_715 + 3)]))))))), 10)) > ((*l_615) = (((((safe_mul_func_uint8_t_u_u((p_1368->g_981 , (*p_1368->g_277)), 1L)) && l_982[1]) != 0x83C559A3L) , p_21) < p_1368->g_479[l_715][(l_715 + 1)][(l_715 + 3)]))) < l_971) | l_717) == l_983), p_21)))) >= l_971), l_971)), 1)) , p_21) && l_971) , (*p_1368->g_430))) > (*p_1368->g_187))) || 0UL) <= p_1368->g_576) || (*l_615))), p_21)) , (-1L)))
                    { /* block id: 424 */
                        struct S1 **l_993 = &p_1368->g_989;
                        struct S1 ***l_992[6] = {&l_993,&l_993,&l_993,&l_993,&l_993,&l_993};
                        int i;
                        (*p_1368->g_578) = ((*l_615) = (safe_mod_func_uint16_t_u_u(1UL, ((*p_1368->g_201) &= l_935[0]))));
                        (*p_1368->g_578) |= ((((0x6BL != 0x71L) ^ (((*p_1368->g_201) |= p_21) != (((*l_615) &= ((void*)0 != p_1368->g_989)) > (p_1368->g_553.f0.f2 ^= (l_717 = (!(safe_div_func_int16_t_s_s(((l_971 , ((p_1368->g_994 = &p_1368->g_989) == &p_1368->g_995[3][6])) && (4294967289UL <= p_21)), l_984)))))))) == 0L) >= p_21);
                        if ((*p_1368->g_204))
                            break;
                    }
                    else
                    { /* block id: 435 */
                        int32_t l_1019[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                        int32_t l_1022 = 0x66D5F900L;
                        struct S0 ***l_1023 = &l_960;
                        int16_t *l_1027 = (void*)0;
                        int16_t *l_1028 = (void*)0;
                        int16_t *l_1029 = &p_1368->g_290;
                        int i;
                        (*l_615) = ((((*l_1023) = (((p_21 ^ (safe_lshift_func_int16_t_s_s(((!(safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((p_1368->g_837 != (((((&p_1368->g_71[1] != &l_971) ^ ((safe_add_func_uint16_t_u_u(1UL, (safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((((+(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((p_1368->g_577.f0.f0 <= p_1368->g_537.f0.f3), 0)), 0xED0065B5L)), ((((l_1019[7] = ((*l_836) != (void*)0)) , l_983) && (*l_615)) > l_1020))) , (*l_615)) < 0L)) | l_1020) || p_1368->g_682), l_978)), l_983)), p_21)), 0)))) == 0L)) , (*p_1368->g_430)) >= (*p_1368->g_430)) , l_1021)) & 0x59038D62B6A04830L))), l_1022))) ^ p_1368->g_180), 12))) != (*p_1368->g_201)) , (void*)0)) != (void*)0) < l_932);
                        (*p_1368->g_927) = p_1368->g_1024;
                        (*p_1368->g_1042) = func_26(((p_21 = ((l_984 = ((safe_lshift_func_int16_t_s_s(((*l_1029) = (-9L)), (p_1368->g_1030 , (p_1368->g_1031 , l_971)))) & 0L)) < ((*p_1368->g_430) = (~(6L != ((safe_rshift_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s((8L < ((safe_lshift_func_int16_t_s_s((((void*)0 == p_1368->g_1038) && 0x66DFL), 0)) >= p_1368->g_537.f0.f3)), p_21)) || 0x6288C5E6L) , 0x569611BBL) , p_21), 6)) , p_21)))))) && (*p_1368->g_430)), l_971, l_1041, p_1368);
                    }
                    if (p_21)
                        continue;
                    for (p_1368->g_1031.f5 = 0; (p_1368->g_1031.f5 <= 2); p_1368->g_1031.f5 += 1)
                    { /* block id: 449 */
                        (*p_1368->g_994) = l_1043;
                    }
                    for (p_1368->g_349.f0.f3 = 0; (p_1368->g_349.f0.f3 <= 2); p_1368->g_349.f0.f3 += 1)
                    { /* block id: 454 */
                        return l_978;
                    }
                    if (p_1368->g_553.f0.f2)
                        goto lbl_1171;
                }
                (*p_1368->g_578) = ((*l_1061) = (safe_lshift_func_uint8_t_u_u((((((*l_615) = ((0xF75CL == (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((1L < (safe_lshift_func_int8_t_s_s(((p_1368->g_316 = &p_1368->g_305) != (p_1368->g_1052 , &p_1368->g_185)), (p_1368->g_9 < ((*l_1041) = (safe_add_func_int64_t_s_s(0x64134217CFB8280EL, (safe_mul_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((*l_1041), (safe_sub_func_int32_t_s_s(p_1368->g_495, 0x23A36D52L)))) > (*l_1041)), 0x42L))))))))) <= l_717) | p_21), 0)), 0UL))) > p_1368->g_685)) || p_21) && p_21) < p_21), 6)));
            }
            (*l_1091) ^= (safe_div_func_int8_t_s_s((((*l_1043) , ((((l_1089 &= ((l_935[0] |= (p_1368->g_123 ^= (safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(0xF95F22C5B57E286CL, 18446744073709551615UL)), ((*l_1087) = (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s((p_1368->g_290 = (*l_615)), ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((l_1080 != (void*)0) || (safe_sub_func_int64_t_s_s(((*l_1080) = (!((*p_1368->g_430) ^= (safe_mul_func_int16_t_s_s((~8L), p_21))))), (((p_21 < (-1L)) , p_21) | 0x288EDD0BL)))) , (*p_1368->g_1039)), 0x6AL)), 2)) | 0L))), l_1085)), l_1086))))), 0xE1L)))) < l_1088)) & 0x532B7AB5L) , p_21) | p_1368->g_685)) , l_1090), (*l_615)));
            for (p_1368->g_300 = (-1); (p_1368->g_300 == 59); p_1368->g_300++)
            { /* block id: 474 */
                int16_t *l_1112 = &p_1368->g_290;
                int32_t l_1115 = 0x1022EFD0L;
                int16_t *l_1116 = &p_1368->g_234;
                (*p_1368->g_1117) = func_33(((*l_1116) = (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(p_21, (safe_add_func_uint8_t_u_u((*p_1368->g_277), (*l_1091))))), 10)) ^ ((((safe_unary_minus_func_uint16_t_u(((((0xAD8E8A24L >= (p_21 , (((l_1103 != ((safe_mod_func_uint16_t_u_u(65534UL, ((*l_1112) = (0x1EC7L && (safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((p_1368->g_1111 = 4UL) , 6UL), l_783)) < (*l_1091)), 0xA9L)))))) , l_1113)) , p_21) == 8UL))) <= p_21) ^ l_1085) ^ 0x3833844DL))) < 0x1DF5L) <= (-8L)) < 1UL)), l_1115))), (*p_1368->g_201), &p_1368->g_205[2], p_21, p_1368);
                if ((*p_1368->g_131))
                    continue;
                (*p_1368->g_994) = (*p_1368->g_994);
                for (l_1115 = 0; (l_1115 < 2); ++l_1115)
                { /* block id: 483 */
                    int32_t *l_1120 = &l_717;
                    int32_t **l_1121 = &l_1080;
                    int32_t *l_1142 = &p_1368->g_205[0];
                    int32_t *l_1143 = &p_1368->g_205[7];
                    int32_t *l_1144[5][4] = {{&l_718,&l_1139,&l_718,&l_718},{&l_718,&l_1139,&l_718,&l_718},{&l_718,&l_1139,&l_718,&l_718},{&l_718,&l_1139,&l_718,&l_718},{&l_718,&l_1139,&l_718,&l_718}};
                    int i, j;
                    (*p_1368->g_1122) = ((*l_1121) = l_1120);
                    for (p_1368->g_349.f0.f2 = 2; (p_1368->g_349.f0.f2 > 12); p_1368->g_349.f0.f2 = safe_add_func_int16_t_s_s(p_1368->g_349.f0.f2, 2))
                    { /* block id: 488 */
                        struct S0 **l_1136 = &p_1368->g_927;
                        int8_t *l_1140 = &p_1368->g_594.f2;
                        if (p_1368->g_349.f0.f5)
                            goto lbl_1125;
                        (*l_1121) = func_33(p_21, ((*p_1368->g_201)++), &l_978, (safe_add_func_uint8_t_u_u(((((!p_21) | ((~((*l_1140) = (safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s(p_21, (safe_mod_func_uint8_t_u_u(((void*)0 != l_1136), (safe_mul_func_uint8_t_u_u(((p_1368->g_981 , (p_1368->g_981 , (0L < (*l_615)))) < l_1139), p_21)))))), (**l_1121))))) | 0x01L)) && p_21) , l_1141), 0UL)), p_1368);
                        if (p_21)
                            break;
                        if ((*l_615))
                            break;
                    }
                    l_1145--;
                }
            }
        }
        if (((&l_679[3] == (p_1368->g_201 = l_627)) & ((((((safe_div_func_int64_t_s_s((*p_1368->g_430), (((safe_div_func_uint32_t_u_u((~(((**l_1113) , ((p_1368->g_78.f0.f5 = (*l_615)) == (safe_mod_func_uint16_t_u_u(((((*l_880) |= ((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((+(safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(((safe_mul_func_uint8_t_u_u((0L == (~0x4E8C525FL)), (p_21 || (((((*l_1166) = ((p_1368->g_339.f3 != p_21) < (-1L))) == 1L) , p_21) == (*l_615))))) , p_21))) && p_21), 0L))) ^ 18446744073709551615UL), p_21)), p_1368->g_537.f0.f0)), 0x1976L)) & l_708)) || 0x52L) > p_21), 0x33D5L)))) , 9UL)), 0x21F63BCAL)) < p_21) && (-2L)))) | p_1368->g_349.f0.f5) > l_717) >= p_1368->g_78.f0.f0) < 0xB65AL) | (*p_1368->g_430))))
        { /* block id: 504 */
            for (p_1368->g_300 = 26; (p_1368->g_300 <= 52); p_1368->g_300++)
            { /* block id: 507 */
                int32_t l_1169 = (-1L);
                (*p_1368->g_578) ^= l_1169;
                if (l_783)
                    break;
            }
        }
        else
        { /* block id: 511 */
            l_615 = &l_715;
        }
    }
    else
    { /* block id: 514 */
        (**p_1368->g_994) = p_1368->g_1170;
    }
    (*l_1172) = &l_718;
    (*l_1217) ^= ((((*p_1368->g_1208) = (safe_div_func_int16_t_s_s((**l_1172), ((*l_1215) = (((*l_1214) = (((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((*p_1368->g_187) = ((safe_mod_func_uint8_t_u_u(((l_1184 = &p_1368->g_305) != (p_1368->g_1185 , &p_1368->g_305)), ((((safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((((((safe_sub_func_int16_t_s_s((p_1368->g_234 = l_1192), ((((*l_1211) |= (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((*l_615) = (**l_1172)), (safe_div_func_uint8_t_u_u(((((*l_1205) = l_1203) == (p_1368->g_1206 = p_1368->g_1206)) , ((&p_1368->g_994 != l_1209) < p_21)), 6UL)))), (**l_1172))), (**l_1172))), l_1210))) , (void*)0) == l_1212))) ^ p_21) || 0x21F9ECE5L) == 4L) | p_21), 0xF6FD5308L)) , (*p_1368->g_1208)), p_21)) & (**l_1172)) & (**l_1172)) & 0x7211E31A334154F7L))) <= (*p_1368->g_1208))) == 1UL), (**l_1172))), 0x48A8L)) , p_21), p_21)) > p_21) == (*p_1368->g_430))) , (*p_1368->g_201)))))) , p_1368->g_1216) , 0L);
    return (*p_1368->g_277);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_22(uint8_t  p_23, int32_t * p_24, int32_t * p_25, struct S4 * p_1368)
{ /* block id: 240 */
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_1368->g_201 p_1368->g_163.f0.f5 p_1368->g_78.f0.f5 p_1368->g_187 p_1368->g_163.f0.f0 p_1368->g_426.f0.f6 p_1368->g_123 p_1368->g_584 p_1368->g_586 p_1368->g_594 p_1368->g_426.f0.f5 p_1368->g_553.f0.f5 p_1368->g_300 p_1368->g_10 p_1368->g_6 p_1368->g_205 p_1368->g_430 p_1368->g_71 p_1368->g_204 p_1368->g_609
 * writes: p_1368->g_402 p_1368->g_300 p_1368->g_71 p_1368->g_205 p_1368->g_609
 */
int32_t * func_26(int32_t  p_27, uint16_t  p_28, int32_t * p_29, struct S4 * p_1368)
{ /* block id: 230 */
    int8_t l_581 = 0x3DL;
    int32_t *l_582[8][10] = {{&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7],&p_1368->g_205[6],&p_1368->g_205[0],&p_1368->g_205[6],&p_1368->g_205[7],&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7]},{&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7],&p_1368->g_205[6],&p_1368->g_205[0],&p_1368->g_205[6],&p_1368->g_205[7],&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7]},{&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7],&p_1368->g_205[6],&p_1368->g_205[0],&p_1368->g_205[6],&p_1368->g_205[7],&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7]},{&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7],&p_1368->g_205[6],&p_1368->g_205[0],&p_1368->g_205[6],&p_1368->g_205[7],&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7]},{&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7],&p_1368->g_205[6],&p_1368->g_205[0],&p_1368->g_205[6],&p_1368->g_205[7],&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7]},{&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7],&p_1368->g_205[6],&p_1368->g_205[0],&p_1368->g_205[6],&p_1368->g_205[7],&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7]},{&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7],&p_1368->g_205[6],&p_1368->g_205[0],&p_1368->g_205[6],&p_1368->g_205[7],&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7]},{&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7],&p_1368->g_205[6],&p_1368->g_205[0],&p_1368->g_205[6],&p_1368->g_205[7],&p_1368->g_205[0],&p_1368->g_205[0],&p_1368->g_205[7]}};
    int32_t **l_583 = &l_582[6][1];
    volatile struct S1 *l_585 = (void*)0;
    uint16_t l_587 = 0x59EBL;
    union U3 l_605[4] = {{0x96A06DBDL},{0x96A06DBDL},{0x96A06DBDL},{0x96A06DBDL}};
    uint8_t *l_606 = &p_1368->g_594.f1;
    uint8_t *l_607 = (void*)0;
    uint8_t *l_608[10][6][4] = {{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}},{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}},{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}},{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}},{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}},{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}},{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}},{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}},{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}},{{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278},{(void*)0,(void*)0,&p_1368->g_278,&p_1368->g_278}}};
    int i, j, k;
    (*l_583) = func_33(((-1L) > ((void*)0 == &p_1368->g_519)), (*p_1368->g_201), func_33((safe_add_func_uint64_t_u_u(p_27, ((*p_1368->g_187) >= 9L))), l_581, (p_1368->g_426.f0.f6 , l_582[6][1]), p_28, p_1368), p_1368->g_123, p_1368);
    (*p_1368->g_586) = p_1368->g_584[4];
    l_587--;
    p_1368->g_609 |= ((*p_1368->g_204) = ((((*p_1368->g_430) |= (safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((p_1368->g_594 , (safe_mod_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(p_1368->g_426.f0.f5, p_27)) & p_1368->g_553.f0.f5), 255UL)) ^ (-6L)) | (p_1368->g_300 &= (safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((l_605[1] , 4294967295UL) < 6UL), (*p_1368->g_201))), p_27)))), p_1368->g_10))), p_28)), (**l_583)))) > 18446744073709551615UL) >= p_27));
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_1368->g_163.f0.f1 p_1368->g_6 p_1368->g_90 p_1368->g_187 p_1368->g_163.f0.f0 p_1368->g_71 p_1368->g_10 p_1368->g_204 p_1368->g_110 p_1368->g_205
 * writes: p_1368->g_201 p_1368->g_163.f0.f0 p_1368->g_205 p_1368->g_110 p_1368->g_578
 */
uint16_t  func_30(int32_t * p_31, int32_t * p_32, struct S4 * p_1368)
{ /* block id: 74 */
    uint32_t l_195[4] = {4294967286UL,4294967286UL,4294967286UL,4294967286UL};
    uint16_t *l_200 = &p_1368->g_78.f0.f5;
    uint64_t ***l_202 = &p_1368->g_186;
    int32_t l_203[1];
    uint8_t l_235 = 255UL;
    uint64_t ****l_314 = &p_1368->g_305;
    int32_t *l_422 = &p_1368->g_205[7];
    uint8_t l_449 = 0xAEL;
    int64_t *l_458 = (void*)0;
    uint32_t **l_521 = &p_1368->g_519;
    int i;
    for (i = 0; i < 1; i++)
        l_203[i] = 4L;
    (*p_1368->g_204) = ((safe_mul_func_int8_t_s_s((((void*)0 != &p_1368->g_130) < p_1368->g_163.f0.f1), (safe_rshift_func_uint16_t_u_u(((0x2D15554DL || ((((l_203[0] = (((*p_32) , ((((safe_mod_func_uint8_t_u_u((((*p_1368->g_187) |= ((((l_195[2] > (((safe_lshift_func_int8_t_s_s(0L, ((safe_add_func_int64_t_s_s(0x0DE0F63417869A76L, ((((((p_1368->g_201 = l_200) != &p_1368->g_90[2]) & 0xC72A8FA4D6DC9EE6L) > p_1368->g_90[4]) > l_195[2]) & l_195[2]))) >= 1UL))) , 0xC78EL) == 0x224EL)) == 249UL) & l_195[2]) == l_195[2])) , l_195[2]), l_195[2])) <= p_1368->g_71[1]) , 0x250795231DAC2A05L) , l_202)) == (void*)0)) ^ 0x7211L) <= p_1368->g_10) , l_203[0])) != 0x4646L), 8)))) != l_195[2]);
    for (p_1368->g_110 = 0; (p_1368->g_110 <= 28); p_1368->g_110 = safe_add_func_uint16_t_u_u(p_1368->g_110, 8))
    { /* block id: 81 */
        int32_t *l_208 = &p_1368->g_53;
        int32_t *l_209 = &p_1368->g_53;
        uint64_t l_232 = 18446744073709551615UL;
        int32_t l_261 = 0x1407355BL;
        int64_t *l_264 = &p_1368->g_71[4];
        int64_t l_299 = 5L;
        int32_t l_335 = 1L;
        int32_t l_336 = 0x0FC8BB43L;
        uint64_t ***l_367 = (void*)0;
        uint32_t *l_424 = &p_1368->g_78.f0.f2;
        int32_t l_436[7];
        uint32_t l_551 = 4294967295UL;
        int i;
        for (i = 0; i < 7; i++)
            l_436[i] = 0L;
        (1 + 1);
    }
    p_1368->g_578 = &p_1368->g_445;
    return (*l_422);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_33(int16_t  p_34, uint16_t  p_35, int32_t * p_36, uint32_t  p_37, struct S4 * p_1368)
{ /* block id: 72 */
    int32_t *l_188 = &p_1368->g_6;
    return l_188;
}


/* ------------------------------------------ */
/* 
 * reads : p_1368->g_90
 * writes:
 */
int16_t  func_40(int64_t  p_41, int32_t * p_42, struct S4 * p_1368)
{ /* block id: 69 */
    p_42 = p_42;
    return p_1368->g_90[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1368->g_10 p_1368->g_71 p_1368->g_78 p_1368->g_6 p_1368->g_90 p_1368->g_53 p_1368->g_110 p_1368->g_4.f0 p_1368->g_130 p_1368->g_163 p_1368->g_168 p_1368->g_180
 * writes: p_1368->g_71 p_1368->g_78.f0.f2 p_1368->g_90 p_1368->g_110 p_1368->g_78.f0.f0 p_1368->g_10 p_1368->g_131 p_1368->g_78.f0.f5 p_1368->g_168 p_1368->g_130 p_1368->g_53 p_1368->g_180 p_1368->g_186
 */
int64_t  func_43(int32_t  p_44, int32_t * p_45, int64_t  p_46, int32_t * p_47, struct S4 * p_1368)
{ /* block id: 7 */
    int32_t *l_52[5][9] = {{&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53},{&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53},{&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53},{&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53},{&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53,&p_1368->g_53}};
    int32_t l_54 = 0x0E88FEFDL;
    int32_t l_62 = 7L;
    int64_t *l_69 = (void*)0;
    int64_t *l_70 = &p_1368->g_71[1];
    uint32_t *l_79 = (void*)0;
    uint32_t *l_80 = (void*)0;
    uint32_t *l_81 = &p_1368->g_78.f0.f2;
    union U3 l_116[2][10][6] = {{{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}}},{{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}},{{0x0935DC34L},{0xE3D8B0AAL},{0x826EC486L},{4UL},{4294967292UL},{0x99068585L}}}};
    int32_t l_134 = 1L;
    int32_t *l_176 = &l_134;
    uint64_t *l_184 = (void*)0;
    uint64_t **l_183 = &l_184;
    int i, j, k;
    if ((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((l_54 = 0x584E2BBAL) , 0UL), ((((*l_81) = (((((((safe_div_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((l_62 && (safe_add_func_uint32_t_u_u(((((~((safe_lshift_func_uint8_t_u_s((7UL || ((*l_70) ^= (253UL == (safe_lshift_func_int16_t_s_s(p_1368->g_10, 15))))), 5)) | (safe_add_func_int8_t_s_s((~(safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((0x25C1L || (p_1368->g_78 , (p_1368->g_78.f0.f4 != l_62))), p_46)), p_44))), 0x25L)))) >= p_44) <= l_62) || l_62), p_44))), p_1368->g_78.f0.f3)), p_1368->g_6)))), p_46)) , &p_1368->g_53) == p_47) && (-1L)) < p_1368->g_78.f0.f3) > 0x241BC4ECDC4137E2L) != p_44)) , 0x7E7B3B6DF6458A24L) , p_1368->g_78.f0.f1))) < p_44), p_46)))
    { /* block id: 11 */
        int32_t *l_82 = &l_62;
        int32_t *l_83 = &l_62;
        int32_t *l_84 = &l_62;
        int32_t l_85[1];
        int32_t *l_86 = &l_85[0];
        int32_t *l_87 = &l_62;
        int32_t *l_88 = &l_62;
        int32_t *l_89 = &l_62;
        uint64_t *l_111 = &p_1368->g_78.f0.f0;
        int i;
        for (i = 0; i < 1; i++)
            l_85[i] = 7L;
        ++p_1368->g_90[2];
lbl_127:
        p_1368->g_110 ^= (safe_lshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_44, p_1368->g_53)), (p_46 | (((safe_div_func_uint8_t_u_u(252UL, (safe_rshift_func_uint16_t_u_s(l_54, (p_1368->g_71[1] == l_62))))) , (p_1368->g_6 > (safe_unary_minus_func_int8_t_s(((((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((2UL || 0x50E3EE8C007EE719L), 0x4CB0868EL)), l_62)), p_46)), 4294967295UL)) >= p_46) , 3L) > p_1368->g_53))))) > p_1368->g_78.f0.f6))));
        if (p_44)
            goto lbl_117;
lbl_117:
        (*l_87) &= (~(p_46 , (((*l_111) = p_1368->g_90[2]) > (0x476AAD2A6E1962FFL | (safe_mul_func_int8_t_s_s((p_44 > (safe_div_func_int64_t_s_s((((l_116[0][6][1] , ((p_44 && 0xAF77F40AL) == 0xEAE6C69FL)) , (void*)0) != p_47), p_1368->g_78.f0.f4))), p_44))))));
        for (p_1368->g_78.f0.f0 = 0; (p_1368->g_78.f0.f0 < 33); p_1368->g_78.f0.f0++)
        { /* block id: 19 */
            uint32_t l_124 = 0x13701F4EL;
            int32_t *l_132 = (void*)0;
            int32_t *l_133 = &l_85[0];
            int32_t *l_135 = &l_134;
            int32_t *l_136 = &l_54;
            int32_t *l_137 = (void*)0;
            int32_t *l_138 = &l_54;
            int32_t *l_139 = &l_134;
            int32_t *l_140 = (void*)0;
            int32_t *l_141 = &l_85[0];
            int32_t *l_142 = &l_54;
            int32_t *l_143 = (void*)0;
            int32_t *l_144[6][5][3] = {{{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62}},{{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62}},{{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62}},{{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62}},{{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62}},{{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62},{&p_1368->g_6,(void*)0,&l_62}}};
            uint64_t l_145[2][7][2] = {{{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL}},{{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL},{0x425E4176206665C6L,0xD30398AC174BAE2BL}}};
            int i, j, k;
            if ((safe_mul_func_uint8_t_u_u(p_46, p_44)))
            { /* block id: 20 */
                int64_t l_122 = 0x19BD31A79BCA1288L;
                --l_124;
                for (p_1368->g_10 = 0; (p_1368->g_10 <= 0); p_1368->g_10 += 1)
                { /* block id: 24 */
                    int i;
                    (*l_82) ^= (l_85[p_1368->g_10] != p_1368->g_110);
                    if (p_1368->g_4.f0)
                        break;
                    if (l_62)
                        goto lbl_127;
                }
            }
            else
            { /* block id: 29 */
                int32_t *l_128 = &l_85[0];
                int32_t **l_129 = (void*)0;
                (*p_1368->g_130) = l_128;
            }
            --l_145[1][2][1];
            (*l_86) &= (*p_45);
            for (p_1368->g_10 = (-30); (p_1368->g_10 <= 19); p_1368->g_10 = safe_add_func_uint64_t_u_u(p_1368->g_10, 3))
            { /* block id: 36 */
                return p_46;
            }
        }
    }
    else
    { /* block id: 40 */
        uint16_t *l_164 = &p_1368->g_78.f0.f5;
        uint16_t *l_165 = &p_1368->g_90[2];
        int32_t l_166 = (-6L);
        int32_t *l_167[10] = {&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134};
        int32_t **l_175 = &l_167[6];
        int i;
        (*p_47) &= 0x63EF0F46L;
        if (p_1368->g_78.f0.f5)
            goto lbl_169;
lbl_169:
        p_1368->g_168[6] &= (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_116[0][6][1].f0, (safe_unary_minus_func_uint16_t_u(((*l_165) = (!((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((p_1368->g_163 , l_62), ((*l_164) = p_1368->g_53))), ((void*)0 == p_47))) == p_1368->g_163.f0.f3))))))), 7)), (p_44 , (+((*p_47) == l_166))))), 65534UL));
        for (l_54 = 4; (l_54 >= 0); l_54 -= 1)
        { /* block id: 48 */
            uint32_t l_170[8][10][3] = {{{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL}},{{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL}},{{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL}},{{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL}},{{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL}},{{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL}},{{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL}},{{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL},{1UL,4294967295UL,5UL}}};
            int32_t **l_174 = &l_167[6];
            int32_t ***l_173[7][2] = {{&l_174,&l_174},{&l_174,&l_174},{&l_174,&l_174},{&l_174,&l_174},{&l_174,&l_174},{&l_174,&l_174},{&l_174,&l_174}};
            int i, j, k;
            ++l_170[5][1][2];
            p_1368->g_130 = (l_175 = &p_47);
            for (p_46 = 0; (p_46 <= 7); p_46 += 1)
            { /* block id: 54 */
                (*l_175) = (*p_1368->g_130);
            }
            for (p_1368->g_53 = 4; (p_1368->g_53 >= 0); p_1368->g_53 -= 1)
            { /* block id: 59 */
                uint64_t l_177 = 0x9871A79F738797E1L;
                (*l_175) = l_176;
                l_177++;
            }
        }
        --p_1368->g_180;
    }
    p_1368->g_186 = l_183;
    for (l_54 = 0; l_54 < 5; l_54 += 1)
    {
        for (p_1368->g_180 = 0; p_1368->g_180 < 9; p_1368->g_180 += 1)
        {
            l_52[l_54][p_1368->g_180] = &p_1368->g_53;
        }
    }
    return p_46;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S4 c_1369;
    struct S4* p_1368 = &c_1369;
    struct S4 c_1370 = {
        {4294967287UL}, // p_1368->g_4
        0x173948B0L, // p_1368->g_6
        0x2DFBL, // p_1368->g_9
        0UL, // p_1368->g_10
        (-10L), // p_1368->g_53
        {0x6C2CFCCFF5F9F7E4L,0x6C2CFCCFF5F9F7E4L,0x6C2CFCCFF5F9F7E4L,0x6C2CFCCFF5F9F7E4L,0x6C2CFCCFF5F9F7E4L,0x6C2CFCCFF5F9F7E4L,0x6C2CFCCFF5F9F7E4L,0x6C2CFCCFF5F9F7E4L}, // p_1368->g_71
        {{0x77F595C9828A5DA0L,247UL,0x2BA9A64BL,4294967295UL,9UL,0x917DL,1L}}, // p_1368->g_78
        {0x88A7L,0x88A7L,0x88A7L,0x88A7L,0x88A7L}, // p_1368->g_90
        8UL, // p_1368->g_110
        0x6E9D000C4EEBD0F6L, // p_1368->g_123
        (void*)0, // p_1368->g_131
        &p_1368->g_131, // p_1368->g_130
        {{0x6E398B15E2B98CD9L,0UL,0x0CA041FCL,0x2756FD92L,3UL,0x7C76L,-1L}}, // p_1368->g_163
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_1368->g_168
        0x1FF5390BL, // p_1368->g_180
        (void*)0, // p_1368->g_185
        &p_1368->g_163.f0.f0, // p_1368->g_187
        &p_1368->g_187, // p_1368->g_186
        &p_1368->g_163.f0.f5, // p_1368->g_201
        {0x2B52744AL,0x2B52744AL,0x2B52744AL,0x2B52744AL,0x2B52744AL,0x2B52744AL,0x2B52744AL,0x2B52744AL,0x2B52744AL}, // p_1368->g_205
        &p_1368->g_205[7], // p_1368->g_204
        4294967295UL, // p_1368->g_212
        {{0xF7F432ADD22AC3E5L,0xA1L,0xF1B8ECEDL,3UL,0xFE161852D1124354L,0x0B19L,0x6640AC8E96B0C78BL},{0xF7F432ADD22AC3E5L,0xA1L,0xF1B8ECEDL,3UL,0xFE161852D1124354L,0x0B19L,0x6640AC8E96B0C78BL},{0xF7F432ADD22AC3E5L,0xA1L,0xF1B8ECEDL,3UL,0xFE161852D1124354L,0x0B19L,0x6640AC8E96B0C78BL},{0xF7F432ADD22AC3E5L,0xA1L,0xF1B8ECEDL,3UL,0xFE161852D1124354L,0x0B19L,0x6640AC8E96B0C78BL},{0xF7F432ADD22AC3E5L,0xA1L,0xF1B8ECEDL,3UL,0xFE161852D1124354L,0x0B19L,0x6640AC8E96B0C78BL},{0xF7F432ADD22AC3E5L,0xA1L,0xF1B8ECEDL,3UL,0xFE161852D1124354L,0x0B19L,0x6640AC8E96B0C78BL},{0xF7F432ADD22AC3E5L,0xA1L,0xF1B8ECEDL,3UL,0xFE161852D1124354L,0x0B19L,0x6640AC8E96B0C78BL},{0xF7F432ADD22AC3E5L,0xA1L,0xF1B8ECEDL,3UL,0xFE161852D1124354L,0x0B19L,0x6640AC8E96B0C78BL}}, // p_1368->g_213
        0x29F1L, // p_1368->g_234
        0x16CC3C2CC20BC8F2L, // p_1368->g_253
        0xECL, // p_1368->g_278
        &p_1368->g_278, // p_1368->g_277
        (-1L), // p_1368->g_290
        0x5595EE420F97E79EL, // p_1368->g_297
        0x76L, // p_1368->g_300
        &p_1368->g_186, // p_1368->g_305
        &p_1368->g_305, // p_1368->g_316
        {6UL,0x0CL,0UL,4294967287UL,0UL,1UL,0x22FEB2C7159C8B26L}, // p_1368->g_339
        {{18446744073709551611UL,248UL,0x6DAE3B97L,4UL,0xDF3ECA1C97F0D410L,65535UL,0x50BF253868164DC9L}}, // p_1368->g_349
        &p_1368->g_78, // p_1368->g_350
        4294967286UL, // p_1368->g_401
        {{18446744073709551615UL,4UL,2UL,0xA52B89B7L,0UL,0x630BL,0x0F8B623F7150EB73L}}, // p_1368->g_402
        {{0xC692D28F029C4243L,0xF1L,0xB9387726L,0x77180080L,18446744073709551615UL,65533UL,0x1BEEBC7FF4179C11L}}, // p_1368->g_403
        {{0x47F52FE27BACAAA3L,0xC4L,0xCEBD9461L,4294967287UL,0x4F330B358B7AB02CL,0UL,3L}}, // p_1368->g_426
        &p_1368->g_71[1], // p_1368->g_430
        (void*)0, // p_1368->g_431
        0x3F1DF1F3L, // p_1368->g_445
        (void*)0, // p_1368->g_461
        {{{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L}},{{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L}},{{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L}},{{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L},{(-1L),0x40L,(-1L),0x59L,0L,0x78L,0x08L,0x3CL,0x46L,0x24L}}}, // p_1368->g_479
        3L, // p_1368->g_495
        (void*)0, // p_1368->g_519
        &p_1368->g_519, // p_1368->g_518
        0UL, // p_1368->g_530
        {{0x8AB3D4352A719A52L,0x21L,0x9EC0BFF3L,0x74E8019CL,18446744073709551615UL,65535UL,3L}}, // p_1368->g_537
        {{0xA921F75FAF81F382L,0xCCL,0x2C5E4C08L,4294967286UL,0x39F9608B3102A7BBL,1UL,-1L}}, // p_1368->g_553
        {&p_1368->g_78,&p_1368->g_553,&p_1368->g_78,&p_1368->g_78,&p_1368->g_553,&p_1368->g_78,&p_1368->g_78,&p_1368->g_553,&p_1368->g_78}, // p_1368->g_555
        0x60CAFC3CL, // p_1368->g_576
        {{9UL,0xAAL,0x950FC94FL,0x065B28BBL,1UL,0xB42CL,0x717C0EBA2A5DFBB7L}}, // p_1368->g_577
        (void*)0, // p_1368->g_578
        {{{0xF2EC29206E97C3A8L,1UL,0xF3F86831L,0x21EC5FE1L,0x8BF647C26178274FL,65526UL,0x2C1D7F3D96201584L}},{{0xF2EC29206E97C3A8L,1UL,0xF3F86831L,0x21EC5FE1L,0x8BF647C26178274FL,65526UL,0x2C1D7F3D96201584L}},{{0xF2EC29206E97C3A8L,1UL,0xF3F86831L,0x21EC5FE1L,0x8BF647C26178274FL,65526UL,0x2C1D7F3D96201584L}},{{0xF2EC29206E97C3A8L,1UL,0xF3F86831L,0x21EC5FE1L,0x8BF647C26178274FL,65526UL,0x2C1D7F3D96201584L}},{{0xF2EC29206E97C3A8L,1UL,0xF3F86831L,0x21EC5FE1L,0x8BF647C26178274FL,65526UL,0x2C1D7F3D96201584L}},{{0xF2EC29206E97C3A8L,1UL,0xF3F86831L,0x21EC5FE1L,0x8BF647C26178274FL,65526UL,0x2C1D7F3D96201584L}},{{0xF2EC29206E97C3A8L,1UL,0xF3F86831L,0x21EC5FE1L,0x8BF647C26178274FL,65526UL,0x2C1D7F3D96201584L}}}, // p_1368->g_584
        &p_1368->g_402, // p_1368->g_586
        {1L}, // p_1368->g_594
        0L, // p_1368->g_609
        &p_1368->g_131, // p_1368->g_616
        0x2952333FL, // p_1368->g_648
        {18446744073709551613UL,0UL,4294967295UL,0UL,1UL,1UL,0L}, // p_1368->g_674
        (-1L), // p_1368->g_682
        0L, // p_1368->g_685
        {{0x62C3F4C5A4F9EE7AL,5UL,0x04FB60BDL,0x8A0AA28EL,0xB02CDF5EA6C8563CL,1UL,0x437A5A63DEA48665L}}, // p_1368->g_736
        (void*)0, // p_1368->g_779
        {1L}, // p_1368->g_820
        (void*)0, // p_1368->g_837
        (void*)0, // p_1368->g_838
        (void*)0, // p_1368->g_920
        &p_1368->g_920, // p_1368->g_919
        &p_1368->g_349.f0, // p_1368->g_927
        &p_1368->g_927, // p_1368->g_926
        {0x2969AC25L}, // p_1368->g_981
        &p_1368->g_553, // p_1368->g_989
        {{&p_1368->g_553,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_553},{&p_1368->g_553,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_553},{&p_1368->g_553,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_553},{&p_1368->g_553,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_537,&p_1368->g_553}}, // p_1368->g_995
        &p_1368->g_995[3][6], // p_1368->g_994
        {0x03D0F7865AF98A19L,253UL,0UL,4UL,0x87ABBE748F3C8D1AL,65533UL,0x0D2C3B4C658C5E6BL}, // p_1368->g_1024
        {0xE49DDBF7B54535C8L,0x64L,4294967294UL,0xFF7E2F97L,0xD9365871E1FBC6B1L,1UL,0x59521D8EDB0BA3DAL}, // p_1368->g_1030
        {0x9C5AA554DB980690L,0x13L,0xE1C980E0L,1UL,0x622DEA761CDAD18CL,65535UL,-8L}, // p_1368->g_1031
        2UL, // p_1368->g_1040
        &p_1368->g_1040, // p_1368->g_1039
        &p_1368->g_1039, // p_1368->g_1038
        &p_1368->g_131, // p_1368->g_1042
        {18446744073709551608UL,0x7BL,0xF416B7E9L,8UL,18446744073709551611UL,65528UL,3L}, // p_1368->g_1052
        1UL, // p_1368->g_1111
        &p_1368->g_131, // p_1368->g_1117
        &p_1368->g_131, // p_1368->g_1122
        {{3UL,1UL,0x532FD8AAL,0x1F6075D1L,6UL,0UL,-1L}}, // p_1368->g_1170
        {-1L}, // p_1368->g_1185
        &p_1368->g_290, // p_1368->g_1208
        &p_1368->g_1208, // p_1368->g_1207
        &p_1368->g_1207, // p_1368->g_1206
        {7UL,1UL,2UL,4294967288UL,0x2DBDCEDCF4C02E17L,1UL,0x058CE6FD99888EB0L}, // p_1368->g_1213
        {18446744073709551608UL,0x57L,0x476D3F0BL,4294967295UL,1UL,0xC268L,-5L}, // p_1368->g_1216
        &p_1368->g_131, // p_1368->g_1221
        {{9UL,9UL,9UL,9UL,9UL},{9UL,9UL,9UL,9UL,9UL},{9UL,9UL,9UL,9UL,9UL},{9UL,9UL,9UL,9UL,9UL},{9UL,9UL,9UL,9UL,9UL},{9UL,9UL,9UL,9UL,9UL}}, // p_1368->g_1257
        {0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_1368->g_1263
        &p_1368->g_518, // p_1368->g_1267
        &p_1368->g_131, // p_1368->g_1269
        4294967295UL, // p_1368->g_1330
        0x543EL, // p_1368->g_1331
        {0x415E59DFBE14FC53L,1UL,0UL,1UL,18446744073709551614UL,1UL,0x71B3042B5F6B84D6L}, // p_1368->g_1334
        {{0xE82360BFC983D58BL,0x7EL,0x6F299D56L,0UL,0xFCFD043B122CC832L,0x52E4L,0x20B7A9990E914B1AL}}, // p_1368->g_1343
        &p_1368->g_131, // p_1368->g_1344
        {-7L}, // p_1368->g_1352
        &p_1368->g_131, // p_1368->g_1365
    };
    c_1369 = c_1370;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1368);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1368->g_4.f0, "p_1368->g_4.f0", print_hash_value);
    transparent_crc(p_1368->g_6, "p_1368->g_6", print_hash_value);
    transparent_crc(p_1368->g_9, "p_1368->g_9", print_hash_value);
    transparent_crc(p_1368->g_10, "p_1368->g_10", print_hash_value);
    transparent_crc(p_1368->g_53, "p_1368->g_53", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1368->g_71[i], "p_1368->g_71[i]", print_hash_value);

    }
    transparent_crc(p_1368->g_78.f0.f0, "p_1368->g_78.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_78.f0.f1, "p_1368->g_78.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_78.f0.f2, "p_1368->g_78.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_78.f0.f3, "p_1368->g_78.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_78.f0.f4, "p_1368->g_78.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_78.f0.f5, "p_1368->g_78.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_78.f0.f6, "p_1368->g_78.f0.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1368->g_90[i], "p_1368->g_90[i]", print_hash_value);

    }
    transparent_crc(p_1368->g_110, "p_1368->g_110", print_hash_value);
    transparent_crc(p_1368->g_123, "p_1368->g_123", print_hash_value);
    transparent_crc(p_1368->g_163.f0.f0, "p_1368->g_163.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_163.f0.f1, "p_1368->g_163.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_163.f0.f2, "p_1368->g_163.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_163.f0.f3, "p_1368->g_163.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_163.f0.f4, "p_1368->g_163.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_163.f0.f5, "p_1368->g_163.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_163.f0.f6, "p_1368->g_163.f0.f6", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1368->g_168[i], "p_1368->g_168[i]", print_hash_value);

    }
    transparent_crc(p_1368->g_180, "p_1368->g_180", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1368->g_205[i], "p_1368->g_205[i]", print_hash_value);

    }
    transparent_crc(p_1368->g_212, "p_1368->g_212", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1368->g_213[i].f0, "p_1368->g_213[i].f0", print_hash_value);
        transparent_crc(p_1368->g_213[i].f1, "p_1368->g_213[i].f1", print_hash_value);
        transparent_crc(p_1368->g_213[i].f2, "p_1368->g_213[i].f2", print_hash_value);
        transparent_crc(p_1368->g_213[i].f3, "p_1368->g_213[i].f3", print_hash_value);
        transparent_crc(p_1368->g_213[i].f4, "p_1368->g_213[i].f4", print_hash_value);
        transparent_crc(p_1368->g_213[i].f5, "p_1368->g_213[i].f5", print_hash_value);
        transparent_crc(p_1368->g_213[i].f6, "p_1368->g_213[i].f6", print_hash_value);

    }
    transparent_crc(p_1368->g_234, "p_1368->g_234", print_hash_value);
    transparent_crc(p_1368->g_253, "p_1368->g_253", print_hash_value);
    transparent_crc(p_1368->g_278, "p_1368->g_278", print_hash_value);
    transparent_crc(p_1368->g_290, "p_1368->g_290", print_hash_value);
    transparent_crc(p_1368->g_297, "p_1368->g_297", print_hash_value);
    transparent_crc(p_1368->g_300, "p_1368->g_300", print_hash_value);
    transparent_crc(p_1368->g_339.f0, "p_1368->g_339.f0", print_hash_value);
    transparent_crc(p_1368->g_339.f1, "p_1368->g_339.f1", print_hash_value);
    transparent_crc(p_1368->g_339.f2, "p_1368->g_339.f2", print_hash_value);
    transparent_crc(p_1368->g_339.f3, "p_1368->g_339.f3", print_hash_value);
    transparent_crc(p_1368->g_339.f4, "p_1368->g_339.f4", print_hash_value);
    transparent_crc(p_1368->g_339.f5, "p_1368->g_339.f5", print_hash_value);
    transparent_crc(p_1368->g_339.f6, "p_1368->g_339.f6", print_hash_value);
    transparent_crc(p_1368->g_349.f0.f0, "p_1368->g_349.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_349.f0.f1, "p_1368->g_349.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_349.f0.f2, "p_1368->g_349.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_349.f0.f3, "p_1368->g_349.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_349.f0.f4, "p_1368->g_349.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_349.f0.f5, "p_1368->g_349.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_349.f0.f6, "p_1368->g_349.f0.f6", print_hash_value);
    transparent_crc(p_1368->g_401, "p_1368->g_401", print_hash_value);
    transparent_crc(p_1368->g_402.f0.f0, "p_1368->g_402.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_402.f0.f1, "p_1368->g_402.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_402.f0.f2, "p_1368->g_402.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_402.f0.f3, "p_1368->g_402.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_402.f0.f4, "p_1368->g_402.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_402.f0.f5, "p_1368->g_402.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_402.f0.f6, "p_1368->g_402.f0.f6", print_hash_value);
    transparent_crc(p_1368->g_403.f0.f0, "p_1368->g_403.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_403.f0.f1, "p_1368->g_403.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_403.f0.f2, "p_1368->g_403.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_403.f0.f3, "p_1368->g_403.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_403.f0.f4, "p_1368->g_403.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_403.f0.f5, "p_1368->g_403.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_403.f0.f6, "p_1368->g_403.f0.f6", print_hash_value);
    transparent_crc(p_1368->g_426.f0.f0, "p_1368->g_426.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_426.f0.f1, "p_1368->g_426.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_426.f0.f2, "p_1368->g_426.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_426.f0.f3, "p_1368->g_426.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_426.f0.f4, "p_1368->g_426.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_426.f0.f5, "p_1368->g_426.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_426.f0.f6, "p_1368->g_426.f0.f6", print_hash_value);
    transparent_crc(p_1368->g_445, "p_1368->g_445", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1368->g_479[i][j][k], "p_1368->g_479[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1368->g_495, "p_1368->g_495", print_hash_value);
    transparent_crc(p_1368->g_530, "p_1368->g_530", print_hash_value);
    transparent_crc(p_1368->g_537.f0.f0, "p_1368->g_537.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_537.f0.f1, "p_1368->g_537.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_537.f0.f2, "p_1368->g_537.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_537.f0.f3, "p_1368->g_537.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_537.f0.f4, "p_1368->g_537.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_537.f0.f5, "p_1368->g_537.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_537.f0.f6, "p_1368->g_537.f0.f6", print_hash_value);
    transparent_crc(p_1368->g_553.f0.f0, "p_1368->g_553.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_553.f0.f1, "p_1368->g_553.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_553.f0.f2, "p_1368->g_553.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_553.f0.f3, "p_1368->g_553.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_553.f0.f4, "p_1368->g_553.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_553.f0.f5, "p_1368->g_553.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_553.f0.f6, "p_1368->g_553.f0.f6", print_hash_value);
    transparent_crc(p_1368->g_576, "p_1368->g_576", print_hash_value);
    transparent_crc(p_1368->g_577.f0.f0, "p_1368->g_577.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_577.f0.f1, "p_1368->g_577.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_577.f0.f2, "p_1368->g_577.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_577.f0.f3, "p_1368->g_577.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_577.f0.f4, "p_1368->g_577.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_577.f0.f5, "p_1368->g_577.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_577.f0.f6, "p_1368->g_577.f0.f6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1368->g_584[i].f0.f0, "p_1368->g_584[i].f0.f0", print_hash_value);
        transparent_crc(p_1368->g_584[i].f0.f1, "p_1368->g_584[i].f0.f1", print_hash_value);
        transparent_crc(p_1368->g_584[i].f0.f2, "p_1368->g_584[i].f0.f2", print_hash_value);
        transparent_crc(p_1368->g_584[i].f0.f3, "p_1368->g_584[i].f0.f3", print_hash_value);
        transparent_crc(p_1368->g_584[i].f0.f4, "p_1368->g_584[i].f0.f4", print_hash_value);
        transparent_crc(p_1368->g_584[i].f0.f5, "p_1368->g_584[i].f0.f5", print_hash_value);
        transparent_crc(p_1368->g_584[i].f0.f6, "p_1368->g_584[i].f0.f6", print_hash_value);

    }
    transparent_crc(p_1368->g_594.f0, "p_1368->g_594.f0", print_hash_value);
    transparent_crc(p_1368->g_609, "p_1368->g_609", print_hash_value);
    transparent_crc(p_1368->g_648, "p_1368->g_648", print_hash_value);
    transparent_crc(p_1368->g_674.f0, "p_1368->g_674.f0", print_hash_value);
    transparent_crc(p_1368->g_674.f1, "p_1368->g_674.f1", print_hash_value);
    transparent_crc(p_1368->g_674.f2, "p_1368->g_674.f2", print_hash_value);
    transparent_crc(p_1368->g_674.f3, "p_1368->g_674.f3", print_hash_value);
    transparent_crc(p_1368->g_674.f4, "p_1368->g_674.f4", print_hash_value);
    transparent_crc(p_1368->g_674.f5, "p_1368->g_674.f5", print_hash_value);
    transparent_crc(p_1368->g_674.f6, "p_1368->g_674.f6", print_hash_value);
    transparent_crc(p_1368->g_682, "p_1368->g_682", print_hash_value);
    transparent_crc(p_1368->g_685, "p_1368->g_685", print_hash_value);
    transparent_crc(p_1368->g_736.f0.f0, "p_1368->g_736.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_736.f0.f1, "p_1368->g_736.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_736.f0.f2, "p_1368->g_736.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_736.f0.f3, "p_1368->g_736.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_736.f0.f4, "p_1368->g_736.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_736.f0.f5, "p_1368->g_736.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_736.f0.f6, "p_1368->g_736.f0.f6", print_hash_value);
    transparent_crc(p_1368->g_820.f0, "p_1368->g_820.f0", print_hash_value);
    transparent_crc(p_1368->g_981.f0, "p_1368->g_981.f0", print_hash_value);
    transparent_crc(p_1368->g_1024.f0, "p_1368->g_1024.f0", print_hash_value);
    transparent_crc(p_1368->g_1024.f1, "p_1368->g_1024.f1", print_hash_value);
    transparent_crc(p_1368->g_1024.f2, "p_1368->g_1024.f2", print_hash_value);
    transparent_crc(p_1368->g_1024.f3, "p_1368->g_1024.f3", print_hash_value);
    transparent_crc(p_1368->g_1024.f4, "p_1368->g_1024.f4", print_hash_value);
    transparent_crc(p_1368->g_1024.f5, "p_1368->g_1024.f5", print_hash_value);
    transparent_crc(p_1368->g_1024.f6, "p_1368->g_1024.f6", print_hash_value);
    transparent_crc(p_1368->g_1030.f0, "p_1368->g_1030.f0", print_hash_value);
    transparent_crc(p_1368->g_1030.f1, "p_1368->g_1030.f1", print_hash_value);
    transparent_crc(p_1368->g_1030.f2, "p_1368->g_1030.f2", print_hash_value);
    transparent_crc(p_1368->g_1030.f3, "p_1368->g_1030.f3", print_hash_value);
    transparent_crc(p_1368->g_1030.f4, "p_1368->g_1030.f4", print_hash_value);
    transparent_crc(p_1368->g_1030.f5, "p_1368->g_1030.f5", print_hash_value);
    transparent_crc(p_1368->g_1030.f6, "p_1368->g_1030.f6", print_hash_value);
    transparent_crc(p_1368->g_1031.f0, "p_1368->g_1031.f0", print_hash_value);
    transparent_crc(p_1368->g_1031.f1, "p_1368->g_1031.f1", print_hash_value);
    transparent_crc(p_1368->g_1031.f2, "p_1368->g_1031.f2", print_hash_value);
    transparent_crc(p_1368->g_1031.f3, "p_1368->g_1031.f3", print_hash_value);
    transparent_crc(p_1368->g_1031.f4, "p_1368->g_1031.f4", print_hash_value);
    transparent_crc(p_1368->g_1031.f5, "p_1368->g_1031.f5", print_hash_value);
    transparent_crc(p_1368->g_1031.f6, "p_1368->g_1031.f6", print_hash_value);
    transparent_crc(p_1368->g_1040, "p_1368->g_1040", print_hash_value);
    transparent_crc(p_1368->g_1052.f0, "p_1368->g_1052.f0", print_hash_value);
    transparent_crc(p_1368->g_1052.f1, "p_1368->g_1052.f1", print_hash_value);
    transparent_crc(p_1368->g_1052.f2, "p_1368->g_1052.f2", print_hash_value);
    transparent_crc(p_1368->g_1052.f3, "p_1368->g_1052.f3", print_hash_value);
    transparent_crc(p_1368->g_1052.f4, "p_1368->g_1052.f4", print_hash_value);
    transparent_crc(p_1368->g_1052.f5, "p_1368->g_1052.f5", print_hash_value);
    transparent_crc(p_1368->g_1052.f6, "p_1368->g_1052.f6", print_hash_value);
    transparent_crc(p_1368->g_1111, "p_1368->g_1111", print_hash_value);
    transparent_crc(p_1368->g_1170.f0.f0, "p_1368->g_1170.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_1170.f0.f1, "p_1368->g_1170.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_1170.f0.f2, "p_1368->g_1170.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_1170.f0.f3, "p_1368->g_1170.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_1170.f0.f4, "p_1368->g_1170.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_1170.f0.f5, "p_1368->g_1170.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_1170.f0.f6, "p_1368->g_1170.f0.f6", print_hash_value);
    transparent_crc(p_1368->g_1185.f0, "p_1368->g_1185.f0", print_hash_value);
    transparent_crc(p_1368->g_1213.f0, "p_1368->g_1213.f0", print_hash_value);
    transparent_crc(p_1368->g_1213.f1, "p_1368->g_1213.f1", print_hash_value);
    transparent_crc(p_1368->g_1213.f2, "p_1368->g_1213.f2", print_hash_value);
    transparent_crc(p_1368->g_1213.f3, "p_1368->g_1213.f3", print_hash_value);
    transparent_crc(p_1368->g_1213.f4, "p_1368->g_1213.f4", print_hash_value);
    transparent_crc(p_1368->g_1213.f5, "p_1368->g_1213.f5", print_hash_value);
    transparent_crc(p_1368->g_1213.f6, "p_1368->g_1213.f6", print_hash_value);
    transparent_crc(p_1368->g_1216.f0, "p_1368->g_1216.f0", print_hash_value);
    transparent_crc(p_1368->g_1216.f1, "p_1368->g_1216.f1", print_hash_value);
    transparent_crc(p_1368->g_1216.f2, "p_1368->g_1216.f2", print_hash_value);
    transparent_crc(p_1368->g_1216.f3, "p_1368->g_1216.f3", print_hash_value);
    transparent_crc(p_1368->g_1216.f4, "p_1368->g_1216.f4", print_hash_value);
    transparent_crc(p_1368->g_1216.f5, "p_1368->g_1216.f5", print_hash_value);
    transparent_crc(p_1368->g_1216.f6, "p_1368->g_1216.f6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1368->g_1257[i][j], "p_1368->g_1257[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1368->g_1263[i], "p_1368->g_1263[i]", print_hash_value);

    }
    transparent_crc(p_1368->g_1330, "p_1368->g_1330", print_hash_value);
    transparent_crc(p_1368->g_1331, "p_1368->g_1331", print_hash_value);
    transparent_crc(p_1368->g_1334.f0, "p_1368->g_1334.f0", print_hash_value);
    transparent_crc(p_1368->g_1334.f1, "p_1368->g_1334.f1", print_hash_value);
    transparent_crc(p_1368->g_1334.f2, "p_1368->g_1334.f2", print_hash_value);
    transparent_crc(p_1368->g_1334.f3, "p_1368->g_1334.f3", print_hash_value);
    transparent_crc(p_1368->g_1334.f4, "p_1368->g_1334.f4", print_hash_value);
    transparent_crc(p_1368->g_1334.f5, "p_1368->g_1334.f5", print_hash_value);
    transparent_crc(p_1368->g_1334.f6, "p_1368->g_1334.f6", print_hash_value);
    transparent_crc(p_1368->g_1343.f0.f0, "p_1368->g_1343.f0.f0", print_hash_value);
    transparent_crc(p_1368->g_1343.f0.f1, "p_1368->g_1343.f0.f1", print_hash_value);
    transparent_crc(p_1368->g_1343.f0.f2, "p_1368->g_1343.f0.f2", print_hash_value);
    transparent_crc(p_1368->g_1343.f0.f3, "p_1368->g_1343.f0.f3", print_hash_value);
    transparent_crc(p_1368->g_1343.f0.f4, "p_1368->g_1343.f0.f4", print_hash_value);
    transparent_crc(p_1368->g_1343.f0.f5, "p_1368->g_1343.f0.f5", print_hash_value);
    transparent_crc(p_1368->g_1343.f0.f6, "p_1368->g_1343.f0.f6", print_hash_value);
    transparent_crc(p_1368->g_1352.f0, "p_1368->g_1352.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
