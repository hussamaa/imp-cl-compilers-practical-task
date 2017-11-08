// -g 74,88,1 -l 1,44,1
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


// Seed: 540637470

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   volatile uint16_t  f4;
};

struct S1 {
   struct S0  f0;
   uint32_t  f1;
   volatile uint64_t  f2;
   uint16_t  f3;
   int64_t  f4;
   volatile uint64_t  f5;
   uint16_t  f6;
   volatile int8_t  f7;
};

union U2 {
   uint64_t  f0;
   int16_t  f1;
};

struct S3 {
    int32_t g_4;
    int32_t * volatile g_3[2][8][6];
    struct S0 g_15;
    struct S1 g_26;
    struct S1 *g_25;
    int16_t g_37[7];
    uint8_t g_44;
    uint8_t g_69[2][6];
    uint8_t *g_68[1];
    int32_t * volatile g_115;
    int32_t g_129;
    uint8_t g_131;
    int32_t * volatile g_132[9];
    int32_t * volatile g_134;
    int8_t g_138;
    uint16_t *g_142[8];
    volatile struct S0 g_166[2][5];
    uint64_t g_168[2];
    uint32_t g_184;
    int32_t ** volatile g_188;
    int32_t *g_190;
    int32_t ** volatile g_189;
    int32_t * volatile g_221;
    struct S1 g_222[10][4];
    int32_t * volatile *g_227;
    uint16_t * volatile g_237[6][4][6];
    int8_t g_276;
    volatile uint64_t *g_304;
    volatile uint64_t **g_303;
    int32_t g_372;
    uint64_t g_407[5][8];
    volatile struct S0 g_415[2];
    uint8_t ***g_471;
    union U2 g_504;
    struct S1 g_507[9];
    uint32_t *g_509;
    uint32_t **g_508;
    int8_t g_518[7];
    struct S1 **g_572;
    struct S1 ***g_571;
    int32_t g_580;
    struct S1 g_677;
    volatile struct S1 g_693;
    uint32_t *g_713;
    int8_t *g_723;
    int8_t **g_722;
    int8_t *** volatile g_721[9][2][4];
    int8_t *** volatile g_724;
    volatile struct S1 g_751;
    volatile union U2 * volatile * volatile g_778;
    union U2 *g_844;
    union U2 **g_843;
    struct S1 *g_865;
    struct S1 ** volatile g_867;
    int32_t g_909;
    int16_t *g_956;
    int16_t **g_955;
    int8_t ***g_999[7];
    int32_t **g_1016;
    int32_t ***g_1015;
    volatile uint64_t g_1163;
    int16_t **g_1196[10][9];
    volatile int32_t g_1197[9][1][1];
    union U2 ***g_1209;
    int32_t g_1216;
    volatile uint16_t g_1254[1][1];
    volatile uint32_t g_1289[2];
    volatile union U2 **g_1402;
    volatile union U2 ***g_1401;
    volatile union U2 *** volatile *g_1400;
    volatile union U2 *** volatile ** volatile g_1399;
    int32_t * volatile g_1493;
    struct S1 g_1566;
    volatile struct S0 g_1578;
    int16_t ***g_1580;
    int16_t ****g_1579[7];
    struct S1 ** volatile *g_1586;
    struct S1 ** volatile **g_1585;
    struct S1 ** volatile ***g_1584;
    struct S0 g_1660;
    struct S0 * volatile g_1661;
    uint16_t ** volatile g_1673;
    uint16_t ** volatile * volatile g_1672;
    volatile uint16_t * volatile **g_1674;
    struct S1 g_1677[10];
    volatile struct S0 *g_1702;
    volatile int32_t *g_1725;
    volatile int32_t ** volatile g_1726;
    struct S0 g_1764;
    struct S0 *g_1920;
    struct S0 ** volatile g_1919;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S3 * p_1924);
struct S1 * func_6(int32_t  p_7, int32_t * p_8, int64_t  p_9, struct S3 * p_1924);
struct S1  func_19(int32_t * p_20, struct S1 * p_21, int16_t  p_22, int32_t  p_23, uint64_t  p_24, struct S3 * p_1924);
int16_t  func_29(uint64_t  p_30, int64_t  p_31, struct S3 * p_1924);
int32_t  func_38(uint8_t  p_39, int32_t * p_40, int64_t  p_41, int32_t * p_42, struct S3 * p_1924);
int32_t * func_47(uint32_t  p_48, struct S3 * p_1924);
uint32_t  func_49(uint32_t  p_50, struct S3 * p_1924);
uint32_t  func_52(uint64_t  p_53, struct S1 * p_54, int64_t  p_55, int16_t * p_56, struct S3 * p_1924);
int16_t * func_59(uint8_t * p_60, int16_t * p_61, struct S3 * p_1924);
uint8_t * func_62(int64_t  p_63, uint8_t * p_64, uint64_t  p_65, uint64_t  p_66, uint64_t  p_67, struct S3 * p_1924);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1924->g_4 p_1924->g_15 p_1924->g_25 p_1924->g_26.f2 p_1924->g_26.f3 p_1924->g_955 p_1924->g_956 p_1924->g_37 p_1924->g_372 p_1924->g_222.f1 p_1924->g_131 p_1924->g_1289 p_1924->g_571 p_1924->g_572 p_1924->g_26 p_1924->g_184 p_1924->g_723 p_1924->g_518 p_1924->g_222.f3 p_1924->g_138 p_1924->g_1566.f0.f3 p_1924->g_1015 p_1924->g_1016 p_1924->g_190 p_1924->g_227 p_1924->g_693.f7 p_1924->g_722 p_1924->g_304 p_1924->g_115
 * writes: p_1924->g_4 p_1924->g_37 p_1924->g_131 p_1924->g_1289 p_1924->g_26.f0.f1 p_1924->g_1216 p_1924->g_1566.f0.f3 p_1924->g_504.f0 p_1924->g_26.f3 p_1924->g_132 p_1924->g_407 p_1924->g_25
 */
int32_t  func_1(struct S3 * p_1924)
{ /* block id: 4 */
    uint16_t l_2[1];
    int32_t *l_5 = &p_1924->g_4;
    int32_t *l_10 = (void*)0;
    int32_t l_18[6] = {(-8L),0x56D20A2EL,(-8L),(-8L),0x56D20A2EL,(-8L)};
    int16_t *l_36 = &p_1924->g_37[5];
    int32_t l_1292 = 0x6574058CL;
    int64_t l_1293 = 0x106AF802142F8F49L;
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = 0x43EBL;
    (*l_5) = l_2[0];
    (**p_1924->g_571) = func_6(((((0xC0E3L < (&p_1924->g_4 != l_10)) , (((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(p_1924->g_4, (((p_1924->g_15 , (safe_sub_func_int32_t_s_s(((l_18[3] = 0x253FDE75L) ^ (((func_19(l_5, p_1924->g_25, (safe_lshift_func_int16_t_s_u(func_29(((((*l_36) = (safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(3L, (*l_5))), 0))) | p_1924->g_26.f2) < 0L), p_1924->g_26.f3, p_1924), 13)), p_1924->g_372, p_1924->g_222[5][0].f1, p_1924) , l_5) != (void*)0) && 0xE4FDL)), 0UL))) > 0x655FL) && p_1924->g_184))) ^ (*p_1924->g_723)), 0x0759538FL)) <= p_1924->g_222[5][0].f3) | l_1292)) , 0x6EE7L) & l_1293), &l_1292, p_1924->g_138, p_1924);
    return (*p_1924->g_115);
}


/* ------------------------------------------ */
/* 
 * reads : p_1924->g_26.f0.f1 p_1924->g_1566.f0.f3 p_1924->g_518 p_1924->g_1015 p_1924->g_1016 p_1924->g_190 p_1924->g_4 p_1924->g_227 p_1924->g_693.f7 p_1924->g_722 p_1924->g_723 p_1924->g_304 p_1924->g_26.f2
 * writes: p_1924->g_26.f0.f1 p_1924->g_1216 p_1924->g_1566.f0.f3 p_1924->g_504.f0 p_1924->g_4 p_1924->g_26.f3 p_1924->g_132 p_1924->g_407
 */
struct S1 * func_6(int32_t  p_7, int32_t * p_8, int64_t  p_9, struct S3 * p_1924)
{ /* block id: 574 */
    int16_t l_1297 = 0x1096L;
    int32_t l_1350 = 0L;
    int32_t l_1361 = 0x2B3EACF5L;
    int32_t l_1367 = 0x727DD45FL;
    int32_t l_1369 = (-1L);
    int32_t l_1370[10][3][8] = {{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}},{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}},{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}},{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}},{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}},{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}},{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}},{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}},{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}},{{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L},{0x1B765B28L,(-10L),(-1L),0x1B765B28L,1L,0x224AE5A5L,7L,0L}}};
    int64_t l_1374 = 0x0638A0D7C48DBE62L;
    struct S1 *l_1380 = (void*)0;
    int64_t l_1410[10][10] = {{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L},{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L},{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L},{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L},{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L},{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L},{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L},{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L},{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L},{6L,0x2557CEDC65B13747L,1L,0x3631CA34EE957A04L,0x6937FC4403B23546L,0x50BFBB70C94E6F02L,0x3E253A8117115770L,0x21574119595D6B1CL,0x3E253A8117115770L,0x50BFBB70C94E6F02L}};
    uint16_t l_1463 = 0xAEDAL;
    union U2 l_1470[3] = {{0UL},{0UL},{0UL}};
    uint8_t l_1480 = 0xF9L;
    int32_t l_1548 = 0L;
    int32_t **l_1597 = (void*)0;
    int32_t l_1604[10] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
    int32_t l_1605 = 9L;
    uint32_t l_1611 = 0xC170D57EL;
    uint64_t *l_1633 = &p_1924->g_407[4][3];
    uint64_t **l_1632[3];
    uint64_t ***l_1631 = &l_1632[2];
    uint64_t l_1640 = 0UL;
    int8_t l_1652 = 1L;
    int64_t l_1712 = 0x118CA73003F86127L;
    int8_t l_1723 = 0x79L;
    uint64_t l_1724 = 0x6AF6502FCEF8C34FL;
    union U2 ***l_1818 = &p_1924->g_843;
    struct S1 *l_1923 = &p_1924->g_1677[5];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1632[i] = &l_1633;
    for (p_1924->g_26.f0.f1 = 0; (p_1924->g_26.f0.f1 <= 8); p_1924->g_26.f0.f1 += 1)
    { /* block id: 577 */
        union U2 *l_1306 = &p_1924->g_504;
        int32_t l_1315[8][2][5] = {{{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)},{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)}},{{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)},{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)}},{{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)},{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)}},{{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)},{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)}},{{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)},{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)}},{{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)},{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)}},{{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)},{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)}},{{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)},{0x7C0A696FL,0L,0x2DF1665DL,0x73C0EDACL,(-1L)}}};
        int16_t l_1373[2];
        uint64_t l_1377 = 1UL;
        uint32_t l_1392[8];
        struct S1 *l_1403[2];
        int32_t *l_1417 = &l_1370[2][2][3];
        int32_t l_1544 = (-1L);
        int32_t l_1547 = 0x2594855DL;
        uint16_t l_1560[1][6];
        int64_t *l_1572 = &l_1410[8][0];
        int32_t **l_1599 = &p_1924->g_190;
        int32_t l_1607 = (-5L);
        int64_t l_1675[9][1] = {{4L},{4L},{4L},{4L},{4L},{4L},{4L},{4L},{4L}};
        uint32_t l_1894 = 0x9E9DA0C8L;
        struct S0 *l_1921 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1373[i] = (-1L);
        for (i = 0; i < 8; i++)
            l_1392[i] = 0xF24D8906L;
        for (i = 0; i < 2; i++)
            l_1403[i] = &p_1924->g_222[5][1];
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_1560[i][j] = 0x662CL;
        }
        for (p_1924->g_1216 = 3; (p_1924->g_1216 <= 8); p_1924->g_1216 += 1)
        { /* block id: 580 */
            int64_t l_1334 = (-1L);
            int32_t l_1356 = 0x3F870B33L;
            int32_t l_1358 = (-3L);
            int32_t l_1360 = 0L;
            int32_t l_1363[6] = {1L,7L,1L,1L,7L,1L};
            int64_t l_1376 = 0x7D43D1E62BDB5D0EL;
            uint16_t l_1411 = 0x6B83L;
            struct S1 *l_1494 = &p_1924->g_677;
            int16_t *l_1506 = &l_1373[0];
            uint32_t l_1555 = 7UL;
            uint16_t **l_1563[4][9][7] = {{{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]}},{{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]}},{{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]}},{{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]},{&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[2],&p_1924->g_142[0],&p_1924->g_142[7],&p_1924->g_142[5],&p_1924->g_142[2]}}};
            uint8_t l_1587 = 1UL;
            int i, j, k;
            (1 + 1);
        }
        for (p_1924->g_1566.f0.f3 = 0; (p_1924->g_1566.f0.f3 <= 6); p_1924->g_1566.f0.f3 += 1)
        { /* block id: 735 */
            uint64_t *l_1595 = &p_1924->g_504.f0;
            int32_t ****l_1596 = (void*)0;
            int32_t **l_1598 = &p_1924->g_190;
            uint64_t *l_1600 = &l_1377;
            int32_t *l_1601 = &l_1367;
            int32_t *l_1602 = (void*)0;
            int32_t *l_1603[5][9][5] = {{{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547}},{{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547}},{{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547}},{{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547}},{{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547},{&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,&l_1367,&p_1924->g_580,&l_1547}}};
            int32_t l_1606 = 0x2C4A94FEL;
            uint8_t l_1608[7][3] = {{1UL,255UL,1UL},{1UL,255UL,1UL},{1UL,255UL,1UL},{1UL,255UL,1UL},{1UL,255UL,1UL},{1UL,255UL,1UL},{1UL,255UL,1UL}};
            int i, j, k;
            (*p_1924->g_190) ^= (safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((!((((*l_1595) = (p_1924->g_518[p_1924->g_1566.f0.f3] , 0UL)) , (*l_1417)) || (l_1596 == l_1596))) > p_9) & l_1548), (((((*l_1600) = ((l_1598 = l_1597) != (l_1599 = (*p_1924->g_1015)))) > p_7) || p_7) , 0x8595L))), 8));
            ++l_1608[5][0];
            --l_1611;
            for (p_1924->g_26.f3 = 0; (p_1924->g_26.f3 <= 8); p_1924->g_26.f3 += 1)
            { /* block id: 745 */
                union U2 ***l_1615 = (void*)0;
                int32_t l_1616 = 0x550651EDL;
                for (l_1480 = 0; (l_1480 <= 0); l_1480 += 1)
                { /* block id: 748 */
                    int32_t *l_1614 = &p_1924->g_507[1].f0.f1;
                    (*p_1924->g_227) = l_1614;
                }
                if ((*p_8))
                    continue;
                (*p_1924->g_227) = p_8;
                l_1616 &= ((l_1470[2] , l_1615) != l_1615);
            }
        }
        l_1640 |= ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u((((*l_1572) &= (safe_mul_func_int16_t_s_s((p_9 >= ((p_9 > (safe_div_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(255UL, ((((-2L) | (safe_add_func_int16_t_s_s(((((p_9 == ((+(&p_1924->g_303 != l_1631)) & ((safe_div_func_uint64_t_u_u(((***l_1631) = (safe_mul_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((~0x7FL) , (6L != p_1924->g_693.f7)), p_7)) > (**p_1924->g_722)) , 0x7ED5L), 0x6344L))), 0x17AB9189C156D297L)) != 0L))) & 9L) < p_7) && 0xF6732561L), p_7))) & 0x34AE2DEEL) <= p_9))) , (*p_1924->g_304)), p_9))) >= p_7)), p_7))) < p_9), p_7)) , (-8L)) != 0x1FL), 4)), 9)) && 65535UL);
        for (l_1607 = 8; (l_1607 >= 0); l_1607 -= 1)
        { /* block id: 761 */
            int32_t l_1641 = 0x64FF7FE8L;
            int32_t l_1645 = 0x3D359CB2L;
            int32_t l_1653 = 0x4510C277L;
            uint32_t l_1659 = 0x157704A8L;
            uint32_t l_1708 = 0xFE137C2BL;
            int32_t l_1713 = (-10L);
            int32_t l_1714 = 0x6C3A74F5L;
            uint64_t **l_1720 = &l_1633;
            struct S1 *l_1772 = &p_1924->g_1566;
            uint32_t l_1790[3][7][5] = {{{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L}},{{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L}},{{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L},{4294967295UL,0x9DF71F77L,0x77578BEDL,0UL,0xF6039F82L}}};
            uint32_t ****l_1791 = (void*)0;
            struct S1 ****l_1813 = &p_1924->g_571;
            struct S1 ****l_1821 = &p_1924->g_571;
            int32_t ****l_1828 = &p_1924->g_1015;
            uint32_t l_1841[7][3][7] = {{{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL}},{{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL}},{{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL}},{{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL}},{{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL}},{{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL}},{{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL},{1UL,0UL,0UL,1UL,1UL,0UL,0UL}}};
            uint32_t l_1843[9][9] = {{0x59E13DE2L,1UL,0x9F932434L,6UL,0x9F6058DFL,0x9F6058DFL,6UL,0x9F932434L,1UL},{0x59E13DE2L,1UL,0x9F932434L,6UL,0x9F6058DFL,0x9F6058DFL,6UL,0x9F932434L,1UL},{0x59E13DE2L,1UL,0x9F932434L,6UL,0x9F6058DFL,0x9F6058DFL,6UL,0x9F932434L,1UL},{0x59E13DE2L,1UL,0x9F932434L,6UL,0x9F6058DFL,0x9F6058DFL,6UL,0x9F932434L,1UL},{0x59E13DE2L,1UL,0x9F932434L,6UL,0x9F6058DFL,0x9F6058DFL,6UL,0x9F932434L,1UL},{0x59E13DE2L,1UL,0x9F932434L,6UL,0x9F6058DFL,0x9F6058DFL,6UL,0x9F932434L,1UL},{0x59E13DE2L,1UL,0x9F932434L,6UL,0x9F6058DFL,0x9F6058DFL,6UL,0x9F932434L,1UL},{0x59E13DE2L,1UL,0x9F932434L,6UL,0x9F6058DFL,0x9F6058DFL,6UL,0x9F932434L,1UL},{0x59E13DE2L,1UL,0x9F932434L,6UL,0x9F6058DFL,0x9F6058DFL,6UL,0x9F932434L,1UL}};
            int32_t l_1850 = 0x422DBA5BL;
            int32_t l_1851 = 0x2B118BC7L;
            int32_t l_1852[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int32_t * volatile l_1915 = (void*)0;/* VOLATILE GLOBAL l_1915 */
            int16_t l_1916[9] = {0x62EDL,0x62EDL,0x62EDL,0x62EDL,0x62EDL,0x62EDL,0x62EDL,0x62EDL,0x62EDL};
            struct S0 *l_1918[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1918[i] = &p_1924->g_222[5][0].f0;
            (1 + 1);
        }
    }
    return l_1923;
}


/* ------------------------------------------ */
/* 
 * reads : p_1924->g_131 p_1924->g_1289 p_1924->g_571 p_1924->g_572 p_1924->g_25 p_1924->g_26 p_1924->g_507
 * writes: p_1924->g_131 p_1924->g_1289
 */
struct S1  func_19(int32_t * p_20, struct S1 * p_21, int16_t  p_22, int32_t  p_23, uint64_t  p_24, struct S3 * p_1924)
{ /* block id: 513 */
    union U2 ***l_1169 = &p_1924->g_843;
    int32_t l_1171 = (-2L);
    uint64_t *l_1193 = &p_1924->g_407[3][7];
    uint64_t **l_1192 = &l_1193;
    uint64_t ***l_1191 = &l_1192;
    int16_t *l_1213 = &p_1924->g_37[5];
    int64_t l_1218 = 0x7DFEF0396DB582EFL;
    int32_t *l_1221 = &p_1924->g_372;
    struct S1 ****l_1226 = &p_1924->g_571;
    int16_t ***l_1229 = (void*)0;
    int32_t l_1250 = 0x4F949FAEL;
    int32_t l_1252 = 0x27F4BE12L;
    int32_t l_1253 = 0x7829C4AFL;
    int8_t **l_1276 = &p_1924->g_723;
    int32_t *l_1277 = &l_1252;
    int32_t *l_1278 = (void*)0;
    int32_t *l_1279 = &p_1924->g_15.f1;
    int32_t *l_1280 = &l_1252;
    int32_t *l_1281 = &p_1924->g_372;
    int32_t *l_1282 = &p_1924->g_222[5][0].f0.f1;
    int32_t *l_1283 = (void*)0;
    int32_t *l_1284[4][6] = {{&p_1924->g_677.f0.f1,(void*)0,&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,(void*)0,&p_1924->g_677.f0.f1},{&p_1924->g_677.f0.f1,(void*)0,&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,(void*)0,&p_1924->g_677.f0.f1},{&p_1924->g_677.f0.f1,(void*)0,&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,(void*)0,&p_1924->g_677.f0.f1},{&p_1924->g_677.f0.f1,(void*)0,&p_1924->g_677.f0.f1,&p_1924->g_677.f0.f1,(void*)0,&p_1924->g_677.f0.f1}};
    int32_t l_1285 = (-10L);
    int32_t l_1286 = 0x59DFDE3EL;
    int8_t l_1287 = 0x33L;
    int64_t l_1288 = (-1L);
    int i, j;
    for (p_1924->g_131 = 25; (p_1924->g_131 != 39); p_1924->g_131 = safe_add_func_uint8_t_u_u(p_1924->g_131, 6))
    { /* block id: 516 */
        int32_t l_1160 = 0x51BBD7A6L;
        union U2 ***l_1168 = &p_1924->g_843;
        union U2 ****l_1170 = &l_1169;
        uint64_t *l_1172 = &p_1924->g_407[4][2];
        struct S1 ****l_1204[2][10];
        int16_t ***l_1231 = &p_1924->g_1196[9][0];
        int32_t l_1249[4][2][8] = {{{0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL},{0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL}},{{0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL},{0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL}},{{0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL},{0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL}},{{0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL},{0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL,0L,0L,0x39B7C7DFL}}};
        int8_t **l_1268 = &p_1924->g_723;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 10; j++)
                l_1204[i][j] = &p_1924->g_571;
        }
        (1 + 1);
    }
    --p_1924->g_1289[1];
    return (****l_1226);
}


/* ------------------------------------------ */
/* 
 * reads : p_1924->g_955 p_1924->g_956 p_1924->g_37
 * writes:
 */
int16_t  func_29(uint64_t  p_30, int64_t  p_31, struct S3 * p_1924)
{ /* block id: 8 */
    uint8_t *l_43 = &p_1924->g_44;
    struct S1 *l_57 = &p_1924->g_26;
    int32_t l_58[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int64_t l_74 = 0x4D505EE192EF5DD9L;
    int16_t *l_75 = &p_1924->g_37[4];
    int16_t **l_144 = &l_75;
    uint32_t *l_183 = &p_1924->g_184;
    int32_t *l_371 = &p_1924->g_372;
    uint8_t **l_382 = &p_1924->g_68[0];
    uint8_t ***l_381 = &l_382;
    int64_t *l_388 = &l_74;
    int64_t *l_389 = (void*)0;
    int64_t *l_390 = &p_1924->g_26.f4;
    int16_t l_393 = (-2L);
    uint32_t **l_402 = &l_183;
    int32_t *l_403 = &p_1924->g_26.f0.f1;
    uint64_t *l_404 = (void*)0;
    uint64_t *l_405 = &p_1924->g_168[1];
    uint64_t *l_406 = &p_1924->g_407[4][2];
    uint32_t *l_436 = &p_1924->g_222[5][0].f0.f0;
    struct S1 ***l_465 = (void*)0;
    uint16_t l_475 = 0xF544L;
    uint8_t l_612 = 0x6AL;
    int64_t l_667 = (-10L);
    int8_t l_714[9][6] = {{0x4DL,0x4DL,(-1L),0x7CL,1L,0x1AL},{0x4DL,0x4DL,(-1L),0x7CL,1L,0x1AL},{0x4DL,0x4DL,(-1L),0x7CL,1L,0x1AL},{0x4DL,0x4DL,(-1L),0x7CL,1L,0x1AL},{0x4DL,0x4DL,(-1L),0x7CL,1L,0x1AL},{0x4DL,0x4DL,(-1L),0x7CL,1L,0x1AL},{0x4DL,0x4DL,(-1L),0x7CL,1L,0x1AL},{0x4DL,0x4DL,(-1L),0x7CL,1L,0x1AL},{0x4DL,0x4DL,(-1L),0x7CL,1L,0x1AL}};
    uint32_t l_725[4];
    uint32_t ***l_802[3];
    union U2 *l_825 = &p_1924->g_504;
    union U2 **l_824 = &l_825;
    union U2 ***l_823 = &l_824;
    int8_t l_855 = 0x6FL;
    uint8_t l_912 = 4UL;
    uint32_t l_1085 = 0x091D4262L;
    uint64_t l_1090 = 0UL;
    int32_t l_1124 = 0x5F8C32C9L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_725[i] = 0x77811C3FL;
    for (i = 0; i < 3; i++)
        l_802[i] = &p_1924->g_508;
    return (**p_1924->g_955);
}


/* ------------------------------------------ */
/* 
 * reads : p_1924->g_26.f0.f2 p_1924->g_221 p_1924->g_15.f1 p_1924->g_25 p_1924->g_26 p_1924->g_134 p_1924->g_115 p_1924->g_37 p_1924->g_237 p_1924->g_168 p_1924->g_222.f0.f1 p_1924->g_4 p_1924->g_131 p_1924->g_138 p_1924->g_276 p_1924->g_44 p_1924->g_166 p_1924->g_222.f2 p_1924->g_15.f3 p_1924->g_129 p_1924->g_303 p_1924->g_69 p_1924->g_222.f1 p_1924->g_222.f6 p_1924->g_304 p_1924->g_15.f2 p_1924->g_222.f0.f0
 * writes: p_1924->g_26.f0.f2 p_1924->g_15.f1 p_1924->g_222 p_1924->g_26.f0.f1 p_1924->g_44 p_1924->g_26.f0.f3 p_1924->g_227 p_1924->g_142 p_1924->g_168 p_1924->g_69 p_1924->g_37 p_1924->g_138 p_1924->g_276 p_1924->g_166 p_1924->g_26.f4 p_1924->g_26.f3
 */
int32_t  func_38(uint8_t  p_39, int32_t * p_40, int64_t  p_41, int32_t * p_42, struct S3 * p_1924)
{ /* block id: 58 */
    struct S1 **l_218 = &p_1924->g_25;
    int32_t l_224 = 0x7A7DB7F8L;
    int32_t **l_278 = (void*)0;
    int32_t ***l_277 = &l_278;
    uint64_t *l_282 = &p_1924->g_168[0];
    int8_t *l_300 = (void*)0;
    int32_t l_333[8][7][3] = {{{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L}},{{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L}},{{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L}},{{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L}},{{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L}},{{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L}},{{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L}},{{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L},{(-10L),7L,3L}}};
    uint16_t l_339 = 0x1D0FL;
    int8_t *l_365 = &p_1924->g_276;
    int16_t l_366[1][8][10] = {{{3L,(-1L),0L,2L,(-1L),2L,0L,(-1L),3L,3L},{3L,(-1L),0L,2L,(-1L),2L,0L,(-1L),3L,3L},{3L,(-1L),0L,2L,(-1L),2L,0L,(-1L),3L,3L},{3L,(-1L),0L,2L,(-1L),2L,0L,(-1L),3L,3L},{3L,(-1L),0L,2L,(-1L),2L,0L,(-1L),3L,3L},{3L,(-1L),0L,2L,(-1L),2L,0L,(-1L),3L,3L},{3L,(-1L),0L,2L,(-1L),2L,0L,(-1L),3L,3L},{3L,(-1L),0L,2L,(-1L),2L,0L,(-1L),3L,3L}}};
    uint32_t *l_367 = &p_1924->g_222[5][0].f0.f0;
    int64_t l_368 = 0x71EE44B19C4815D5L;
    int32_t *l_369 = (void*)0;
    int32_t *l_370 = &l_224;
    int i, j, k;
    for (p_1924->g_26.f0.f2 = 0; (p_1924->g_26.f0.f2 <= 0); p_1924->g_26.f0.f2 += 1)
    { /* block id: 61 */
        struct S1 **l_220[4];
        struct S1 ***l_219 = &l_220[1];
        int32_t *l_223 = &p_1924->g_26.f0.f1;
        uint64_t *l_272 = &p_1924->g_168[0];
        uint8_t l_285 = 0xAEL;
        int32_t l_332 = 4L;
        int32_t l_334 = 0x21721B7CL;
        int i;
        for (i = 0; i < 4; i++)
            l_220[i] = &p_1924->g_25;
        (*p_1924->g_221) &= (l_218 == ((*l_219) = &p_1924->g_25));
        p_1924->g_222[5][0] = (*p_1924->g_25);
        (*l_223) = (*p_1924->g_134);
        if ((*p_1924->g_115))
            break;
        for (p_1924->g_44 = 0; (p_1924->g_44 <= 1); p_1924->g_44 += 1)
        { /* block id: 69 */
            uint8_t *l_241 = &p_1924->g_131;
            int32_t l_242[5][4][10] = {{{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L}},{{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L}},{{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L}},{{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L}},{{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L},{0x6C50ED1BL,0x3E30DEAAL,0L,0x7A03D4DDL,0x0E06BF6EL,0x40DCBCF7L,7L,0x062802A2L,0x034FB5A8L,0x4E7206C0L}}};
            uint64_t *l_273 = &p_1924->g_168[0];
            int i, j, k;
            (*l_223) |= l_224;
            for (p_1924->g_26.f0.f3 = 0; (p_1924->g_26.f0.f3 <= 0); p_1924->g_26.f0.f3 += 1)
            { /* block id: 73 */
                int32_t * volatile *l_226 = (void*)0;
                int32_t * volatile **l_225[4][3][1] = {{{&l_226},{&l_226},{&l_226}},{{&l_226},{&l_226},{&l_226}},{{&l_226},{&l_226},{&l_226}},{{&l_226},{&l_226},{&l_226}}};
                uint64_t **l_281[7][9] = {{&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273},{&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273},{&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273},{&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273},{&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273},{&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273},{&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273}};
                uint32_t *l_298 = &p_1924->g_222[5][0].f0.f3;
                int64_t *l_299[8];
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_299[i] = &p_1924->g_26.f4;
                p_1924->g_227 = &p_1924->g_3[p_1924->g_26.f0.f3][(p_1924->g_44 + 4)][(p_1924->g_26.f0.f2 + 4)];
                for (l_224 = 1; (l_224 >= 0); l_224 -= 1)
                { /* block id: 77 */
                    uint16_t **l_236 = (void*)0;
                    uint64_t *l_238 = &p_1924->g_168[0];
                    int i;
                    if ((safe_rshift_func_uint16_t_u_u(p_1924->g_37[(p_1924->g_26.f0.f3 + 4)], ((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((*l_223), ((p_1924->g_142[p_1924->g_26.f0.f2] = (void*)0) == p_1924->g_237[1][0][2]))) != (!(++(*l_238)))) < ((&p_39 != (l_241 = &p_1924->g_69[0][1])) >= (((0UL != ((l_242[4][2][0] = ((*l_223) && 1L)) && l_224)) != l_224) && p_1924->g_222[5][0].f0.f1))), 1UL)), 0UL)) <= l_224))))
                    { /* block id: 82 */
                        return (*p_42);
                    }
                    else
                    { /* block id: 84 */
                        int16_t *l_268 = (void*)0;
                        int16_t *l_269[7];
                        int8_t *l_274 = &p_1924->g_138;
                        int8_t *l_275 = &p_1924->g_276;
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_269[i] = &p_1924->g_37[(p_1924->g_26.f0.f3 + 4)];
                        (*p_1924->g_115) = (((((safe_rshift_func_uint8_t_u_u(((*l_241) = 9UL), 3)) && (((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((p_41 == (0x9BACL && (!(safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(p_41)), (safe_rshift_func_int16_t_s_u((((safe_sub_func_int32_t_s_s((0UL >= ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0x0514L, ((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((p_39 != (+(safe_lshift_func_int16_t_s_u((p_1924->g_37[6] = 0x4F23L), 8)))), (((*l_275) ^= ((*l_274) &= (safe_sub_func_int16_t_s_s((l_272 == l_273), p_1924->g_131)))) > 0x33L))), 1)) & (*l_223)))), 7UL)) != (*l_223))), 0x75B0E399L)) , 0x3F249876400BEA74L) > l_242[4][2][5]), p_41))))))) || p_39), 4)), p_39)) || 0L) > 0UL) & 1UL) || l_242[0][0][7])) , l_277) == &l_226) == 0x7D0DADBC6D1B6C72L);
                        p_1924->g_166[p_1924->g_26.f0.f2][(l_224 + 2)] = p_1924->g_166[p_1924->g_44][p_1924->g_44];
                    }
                    if ((*l_223))
                        break;
                }
                if (l_242[2][3][5])
                    break;
                l_242[0][1][1] = ((((!(safe_add_func_int16_t_s_s((((((((l_273 == (l_282 = l_272)) , ((p_39 > 0x6F41DF27F645CBE1L) , p_1924->g_44)) != (safe_add_func_uint8_t_u_u(l_285, ((p_1924->g_26.f4 |= (safe_add_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((((((*l_298) = (((safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(65529UL, (safe_add_func_int16_t_s_s(0L, ((-7L) ^ 18446744073709551611UL))))) | (*l_223)), p_39)) > p_39) , p_1924->g_222[5][0].f2)) >= p_1924->g_15.f3) >= 0x33005CFBDE1BF113L) != 7UL), 0xBDL)) , p_41), 3L)) & p_1924->g_129), p_1924->g_138))) != l_242[4][2][0])))) || l_242[4][2][0]) >= l_242[4][2][0]) , p_1924->g_166[(p_1924->g_26.f0.f3 + 1)][p_1924->g_26.f0.f3]) , (*l_223)), 0x3772L))) , l_300) != &p_1924->g_276) && 0x94B7FE14L);
            }
            for (p_1924->g_15.f1 = 0; (p_1924->g_15.f1 <= 1); p_1924->g_15.f1 += 1)
            { /* block id: 102 */
                int32_t l_308[3][5] = {{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)}};
                int i, j;
                for (p_1924->g_26.f3 = 0; (p_1924->g_26.f3 <= 0); p_1924->g_26.f3 += 1)
                { /* block id: 105 */
                    for (p_1924->g_26.f0.f3 = 0; (p_1924->g_26.f0.f3 <= 1); p_1924->g_26.f0.f3 += 1)
                    { /* block id: 108 */
                        struct S1 **l_307[4][4][7] = {{{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25}},{{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25}},{{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25}},{{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25},{&p_1924->g_25,&p_1924->g_25,(void*)0,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25,&p_1924->g_25}}};
                        int i, j, k;
                        l_308[2][0] = ((+(((*l_223) |= ((p_1924->g_303 == (p_41 , &p_1924->g_304)) | (safe_mul_func_uint16_t_u_u(((void*)0 == l_307[0][0][0]), 0x2BEEL)))) , 0x5667L)) || 0UL);
                        return (*p_42);
                    }
                }
            }
            for (p_1924->g_276 = 0; (p_1924->g_276 <= 1); p_1924->g_276 += 1)
            { /* block id: 117 */
                int16_t *l_328[5][1] = {{&p_1924->g_37[5]},{&p_1924->g_37[5]},{&p_1924->g_37[5]},{&p_1924->g_37[5]},{&p_1924->g_37[5]}};
                uint32_t l_329 = 0xD3525AA4L;
                int64_t *l_330[5][9][5] = {{{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4}},{{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4}},{{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4}},{{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4}},{{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4},{(void*)0,&p_1924->g_222[5][0].f4,&p_1924->g_26.f4,&p_1924->g_26.f4,&p_1924->g_26.f4}}};
                int32_t l_331 = 0L;
                int i, j, k;
                l_334 ^= ((safe_add_func_int64_t_s_s(((((p_1924->g_69[(p_1924->g_26.f0.f2 + 1)][(p_1924->g_276 + 1)] > p_1924->g_222[5][0].f1) & ((safe_mod_func_int8_t_s_s((((((*l_273) = (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(p_1924->g_69[(p_1924->g_26.f0.f2 + 1)][(p_1924->g_276 + 1)], (-1L))) || (l_331 = (p_41 , ((((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(p_1924->g_222[5][0].f6, 3)), (safe_unary_minus_func_int32_t_s(0x75F19201L)))) | 0x4467ECA6EFA3A97DL) != (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((l_329 = (safe_sub_func_uint64_t_u_u(0x10346A922429E26AL, (-1L)))) > 0x16E9L), 0x16E9E664L)), 0x127DL))) <= p_1924->g_69[(p_1924->g_26.f0.f2 + 1)][(p_1924->g_276 + 1)])))), (*l_223)))) < (**p_1924->g_303)) > 1UL) , l_242[4][2][0]), p_1924->g_15.f2)) == p_1924->g_69[0][3])) || p_1924->g_26.f3) , l_332), p_1924->g_26.f0.f3)) & l_333[0][3][2]);
            }
        }
    }
    (*l_370) ^= ((((((((&l_278 == (void*)0) & (safe_add_func_int8_t_s_s(p_41, (safe_sub_func_uint16_t_u_u((p_1924->g_4 <= (safe_unary_minus_func_int16_t_s((((&p_1924->g_25 == l_218) || (((*l_282) = (((safe_mod_func_int8_t_s_s(((((*l_367) |= (safe_unary_minus_func_int32_t_s((((safe_sub_func_uint64_t_u_u(((void*)0 == &p_1924->g_25), (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((p_1924->g_37[5] = (((*l_365) = p_1924->g_26.f3) < l_366[0][3][8])), p_39)), 3)))) > p_1924->g_26.f7) , (*p_1924->g_134))))) , l_368) & 0x9B04L), 0x9DL)) != p_39) | p_1924->g_168[0])) > 4L)) > 0x7DL)))), p_41))))) ^ p_41) && (*p_1924->g_304)) || 0x6BEC49E2L) != 0x7DL) , 3UL) <= 0xDF4CL);
    return (*p_42);
}


/* ------------------------------------------ */
/* 
 * reads : p_1924->g_26.f0.f2 p_1924->g_189 p_1924->g_15.f3 p_1924->g_4 p_1924->g_37 p_1924->g_138 p_1924->g_15.f1 p_1924->g_26.f5 p_1924->g_26.f0.f1 p_1924->g_115
 * writes: p_1924->g_26.f0.f2 p_1924->g_190 p_1924->g_26.f6 p_1924->g_168 p_1924->g_26.f0.f1
 */
int32_t * func_47(uint32_t  p_48, struct S3 * p_1924)
{ /* block id: 43 */
    int32_t *l_187[5] = {&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1};
    uint32_t l_192 = 0UL;
    uint8_t *l_202 = &p_1924->g_131;
    uint8_t *l_214 = &p_1924->g_69[0][1];
    int i;
    for (p_1924->g_26.f0.f2 = 8; (p_1924->g_26.f0.f2 != 21); p_1924->g_26.f0.f2 = safe_add_func_int8_t_s_s(p_1924->g_26.f0.f2, 2))
    { /* block id: 46 */
        int32_t **l_191 = &l_187[1];
        uint16_t *l_195 = &p_1924->g_26.f6;
        uint8_t *l_200 = &p_1924->g_131;
        uint8_t **l_201[2];
        uint16_t *l_211[4] = {&p_1924->g_26.f3,&p_1924->g_26.f3,&p_1924->g_26.f3,&p_1924->g_26.f3};
        int32_t l_212 = 1L;
        uint64_t *l_213 = &p_1924->g_168[0];
        int8_t *l_215 = &p_1924->g_138;
        int i;
        for (i = 0; i < 2; i++)
            l_201[i] = &p_1924->g_68[0];
        (*p_1924->g_189) = l_187[1];
        (*l_191) = (void*)0;
        p_1924->g_26.f0.f1 ^= ((l_215 = func_62((l_192 || (safe_mul_func_int16_t_s_s(((((*l_213) = (((l_195 == (void*)0) <= (safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((((((l_200 != (l_202 = l_200)) , (((safe_lshift_func_int16_t_s_u((-1L), (safe_rshift_func_uint8_t_u_u((0x3292L >= (l_195 != ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((l_212 &= ((*l_195) = 65535UL)), 0)), p_48)) , l_195))), 5)))) | p_48) == p_1924->g_15.f3)) >= p_1924->g_4) >= p_48) ^ p_48), p_48)), p_1924->g_37[5]))) , p_48)) < p_1924->g_138) < 0L), p_1924->g_15.f1))), l_214, p_48, p_1924->g_26.f5, p_1924->g_138, p_1924)) != l_200);
    }
    (*p_1924->g_115) ^= (safe_mod_func_int32_t_s_s(0L, p_48));
    return l_187[1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_49(uint32_t  p_50, struct S3 * p_1924)
{ /* block id: 10 */
    uint64_t l_51 = 8UL;
    return l_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_1924->g_131 p_1924->g_37 p_1924->g_166 p_1924->g_138 p_1924->g_15.f1 p_1924->g_26.f0.f1 p_1924->g_168 p_1924->g_69 p_1924->g_26.f6
 * writes: p_1924->g_131 p_1924->g_168 p_1924->g_26.f0.f1
 */
uint32_t  func_52(uint64_t  p_53, struct S1 * p_54, int64_t  p_55, int16_t * p_56, struct S3 * p_1924)
{ /* block id: 32 */
    int32_t *l_145 = &p_1924->g_15.f1;
    int32_t *l_146[4];
    uint32_t l_147 = 0UL;
    uint8_t *l_154 = &p_1924->g_131;
    struct S1 *l_164 = &p_1924->g_26;
    struct S1 **l_163 = &l_164;
    struct S1 *l_165 = &p_1924->g_26;
    uint64_t *l_167 = &p_1924->g_168[0];
    uint16_t *l_181[6][1];
    int32_t l_182 = 0x42956FC2L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_146[i] = (void*)0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_181[i][j] = &p_1924->g_26.f3;
    }
    l_147++;
    p_1924->g_26.f0.f1 ^= ((safe_rshift_func_uint16_t_u_u((((++(*l_154)) < (p_1924->g_37[0] >= ((*l_167) = (safe_lshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u(((((((*l_163) = ((safe_mul_func_uint16_t_u_u(p_55, 65528UL)) , (void*)0)) == l_165) , p_1924->g_166[0][0]) , (p_1924->g_138 > p_55)) && (1UL | 6L)), 0UL)) <= p_53) | p_53), (*l_145)))))) | 0x31L), 13)) , 0x6CD05A9BL);
    p_1924->g_26.f0.f1 |= ((safe_rshift_func_uint16_t_u_u(((void*)0 == l_154), (l_182 |= (safe_add_func_uint8_t_u_u(((*l_154) = p_53), (((p_53 == p_1924->g_168[0]) >= (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(0x40BB9802BA47188FL, (&p_1924->g_138 != (void*)0))), 6)), ((((l_167 != &p_1924->g_168[0]) == p_53) , p_1924->g_69[1][0]) | p_1924->g_166[0][0].f4))), p_1924->g_26.f6))) , (*l_145))))))) ^ 0UL);
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_1924->g_26.f7 p_1924->g_15.f0 p_1924->g_26.f4 p_1924->g_26.f3 p_1924->g_37 p_1924->g_115 p_1924->g_69 p_1924->g_26.f0.f1 p_1924->g_129 p_1924->g_134 p_1924->g_15.f3 p_1924->g_26.f0.f0 p_1924->g_26.f0.f3
 * writes: p_1924->g_69 p_1924->g_26.f0.f1 p_1924->g_26.f6 p_1924->g_131 p_1924->g_15.f1 p_1924->g_15.f3 p_1924->g_138 p_1924->g_142
 */
int16_t * func_59(uint8_t * p_60, int16_t * p_61, struct S3 * p_1924)
{ /* block id: 14 */
    uint16_t l_80 = 0x8472L;
    uint64_t l_112 = 0x553368A3BAB64809L;
    uint8_t *l_113 = (void*)0;
    int32_t l_114[9] = {0x3DCCCE59L,0x3DCCCE59L,0x3DCCCE59L,0x3DCCCE59L,0x3DCCCE59L,0x3DCCCE59L,0x3DCCCE59L,0x3DCCCE59L,0x3DCCCE59L};
    uint16_t *l_120 = &p_1924->g_26.f6;
    uint8_t *l_130 = &p_1924->g_131;
    int32_t *l_133 = (void*)0;
    int8_t *l_137 = &p_1924->g_138;
    uint16_t **l_141[4];
    int32_t *l_143 = &l_114[8];
    int i;
    for (i = 0; i < 4; i++)
        l_141[i] = &l_120;
    (*p_1924->g_115) = ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((p_1924->g_26.f7 ^ ((-6L) < (((*p_60) = l_80) == (safe_div_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((l_114[2] = (safe_div_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((0x54865626A28E28B5L != (l_80 <= ((p_1924->g_15.f0 < ((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint64_t_u_u(l_80, (safe_sub_func_uint8_t_u_u((l_112 ^= (safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((~(p_1924->g_26.f4 , (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(l_80, l_80)) != l_80), l_80)), (-7L))))), l_80)) != (-3L)), l_80)), 0x532E2BC135235ED9L)), l_80))), l_80)))))) ^ 0xF28F66BBL)) > p_1924->g_26.f3))), 5)) == l_80), 7)), 18446744073709551607UL)), 0x6AL))), 0xCDL)) ^ l_80), p_1924->g_26.f4))))), (*p_61))), 0)) && l_112);
    (*p_1924->g_134) = ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_112 < (~l_112)), ((*l_120) = (l_114[2] == (-6L))))), (!0UL))) != (((safe_mod_func_uint8_t_u_u((*p_60), ((*l_130) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((*p_1924->g_115) < (safe_div_func_int32_t_s_s(0x453C8A02L, p_1924->g_129))), 0x1FL)), l_114[2]))))) | 4UL) <= l_112));
    for (p_1924->g_15.f3 = 0; (p_1924->g_15.f3 <= 1); p_1924->g_15.f3 += 1)
    { /* block id: 24 */
        return p_61;
    }
    (*l_143) = ((((((~(safe_sub_func_int8_t_s_s(((*l_137) = 0x44L), (safe_add_func_uint16_t_u_u(8UL, ((void*)0 != &p_1924->g_26)))))) > 0x0256L) > ((((p_1924->g_142[2] = p_61) != (void*)0) > 4294967288UL) ^ p_1924->g_26.f0.f0)) < p_1924->g_26.f0.f3) , 0x04BDL) != l_114[6]);
    return p_61;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t * func_62(int64_t  p_63, uint8_t * p_64, uint64_t  p_65, uint64_t  p_66, uint64_t  p_67, struct S3 * p_1924)
{ /* block id: 12 */
    return p_64;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S3 c_1925;
    struct S3* p_1924 = &c_1925;
    struct S3 c_1926 = {
        1L, // p_1924->g_4
        {{{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4}},{{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4},{&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4,&p_1924->g_4}}}, // p_1924->g_3
        {0x72C02A30L,0x2A4B15D3L,0x9973063DL,0x2A04F777L,0x2ABAL}, // p_1924->g_15
        {{0UL,4L,0x8D5680A2L,0x60131B3BL,0x333DL},0x9622CFB6L,0x730E92F9E84EBF8CL,8UL,6L,0x5691F3A4B4404179L,6UL,1L}, // p_1924->g_26
        &p_1924->g_26, // p_1924->g_25
        {(-1L),0x5794L,(-1L),(-1L),0x5794L,(-1L),(-1L)}, // p_1924->g_37
        0x84L, // p_1924->g_44
        {{0x00L,1UL,0x00L,0x00L,1UL,0x00L},{0x00L,1UL,0x00L,0x00L,1UL,0x00L}}, // p_1924->g_69
        {&p_1924->g_69[0][1]}, // p_1924->g_68
        &p_1924->g_26.f0.f1, // p_1924->g_115
        2L, // p_1924->g_129
        0x9DL, // p_1924->g_131
        {&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1,&p_1924->g_15.f1}, // p_1924->g_132
        &p_1924->g_15.f1, // p_1924->g_134
        0x12L, // p_1924->g_138
        {&p_1924->g_26.f6,&p_1924->g_26.f3,&p_1924->g_26.f6,&p_1924->g_26.f6,&p_1924->g_26.f3,&p_1924->g_26.f6,&p_1924->g_26.f6,&p_1924->g_26.f3}, // p_1924->g_142
        {{{4294967295UL,0x2F77A17BL,7UL,4UL,0UL},{4294967295UL,0x2F77A17BL,7UL,4UL,0UL},{4294967295UL,0x2F77A17BL,7UL,4UL,0UL},{4294967295UL,0x2F77A17BL,7UL,4UL,0UL},{4294967295UL,0x2F77A17BL,7UL,4UL,0UL}},{{4294967295UL,0x2F77A17BL,7UL,4UL,0UL},{4294967295UL,0x2F77A17BL,7UL,4UL,0UL},{4294967295UL,0x2F77A17BL,7UL,4UL,0UL},{4294967295UL,0x2F77A17BL,7UL,4UL,0UL},{4294967295UL,0x2F77A17BL,7UL,4UL,0UL}}}, // p_1924->g_166
        {0x79D41D1488185611L,0x79D41D1488185611L}, // p_1924->g_168
        9UL, // p_1924->g_184
        (void*)0, // p_1924->g_188
        &p_1924->g_4, // p_1924->g_190
        &p_1924->g_190, // p_1924->g_189
        &p_1924->g_15.f1, // p_1924->g_221
        {{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}},{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}},{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}},{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}},{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}},{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}},{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}},{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}},{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}},{{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0x154488EEL,0x4E54AC66L,5UL,1UL,0UL},0x8E50C8BBL,18446744073709551615UL,0UL,0x33CA8335178E21E8L,0xD15DD58F199D2557L,65528UL,-1L},{{0xFCD0C989L,0x40586A29L,0xAE8CEF9BL,0x32C21BFEL,7UL},4294967295UL,18446744073709551615UL,65535UL,0x707D2D848F50E0B2L,0UL,0x4C8CL,1L}}}, // p_1924->g_222
        &p_1924->g_132[3], // p_1924->g_227
        {{{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3}},{{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3}},{{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3}},{{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3}},{{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3}},{{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3},{&p_1924->g_26.f6,&p_1924->g_222[5][0].f6,&p_1924->g_222[5][0].f3,&p_1924->g_26.f6,(void*)0,&p_1924->g_26.f3}}}, // p_1924->g_237
        0x73L, // p_1924->g_276
        &p_1924->g_26.f2, // p_1924->g_304
        &p_1924->g_304, // p_1924->g_303
        0x37F6176DL, // p_1924->g_372
        {{0UL,18446744073709551613UL,0x894DBF1B9D4CF0DBL,0x3A4A1E1C097D34EDL,18446744073709551613UL,0x3A4A1E1C097D34EDL,0x894DBF1B9D4CF0DBL,18446744073709551613UL},{0UL,18446744073709551613UL,0x894DBF1B9D4CF0DBL,0x3A4A1E1C097D34EDL,18446744073709551613UL,0x3A4A1E1C097D34EDL,0x894DBF1B9D4CF0DBL,18446744073709551613UL},{0UL,18446744073709551613UL,0x894DBF1B9D4CF0DBL,0x3A4A1E1C097D34EDL,18446744073709551613UL,0x3A4A1E1C097D34EDL,0x894DBF1B9D4CF0DBL,18446744073709551613UL},{0UL,18446744073709551613UL,0x894DBF1B9D4CF0DBL,0x3A4A1E1C097D34EDL,18446744073709551613UL,0x3A4A1E1C097D34EDL,0x894DBF1B9D4CF0DBL,18446744073709551613UL},{0UL,18446744073709551613UL,0x894DBF1B9D4CF0DBL,0x3A4A1E1C097D34EDL,18446744073709551613UL,0x3A4A1E1C097D34EDL,0x894DBF1B9D4CF0DBL,18446744073709551613UL}}, // p_1924->g_407
        {{4294967295UL,0x5F84AB66L,0UL,7UL,3UL},{4294967295UL,0x5F84AB66L,0UL,7UL,3UL}}, // p_1924->g_415
        (void*)0, // p_1924->g_471
        {0x96BD174DA7E0B963L}, // p_1924->g_504
        {{{0x7C0AEA5BL,0x7714C24DL,4294967295UL,0x04F9B0CBL,65532UL},1UL,0xADC7F885C5605CAFL,0xAD1BL,0x5E293CA48F505825L,0xE8E99F49AB629558L,0x8C92L,1L},{{0x7C0AEA5BL,0x7714C24DL,4294967295UL,0x04F9B0CBL,65532UL},1UL,0xADC7F885C5605CAFL,0xAD1BL,0x5E293CA48F505825L,0xE8E99F49AB629558L,0x8C92L,1L},{{0x7C0AEA5BL,0x7714C24DL,4294967295UL,0x04F9B0CBL,65532UL},1UL,0xADC7F885C5605CAFL,0xAD1BL,0x5E293CA48F505825L,0xE8E99F49AB629558L,0x8C92L,1L},{{0x7C0AEA5BL,0x7714C24DL,4294967295UL,0x04F9B0CBL,65532UL},1UL,0xADC7F885C5605CAFL,0xAD1BL,0x5E293CA48F505825L,0xE8E99F49AB629558L,0x8C92L,1L},{{0x7C0AEA5BL,0x7714C24DL,4294967295UL,0x04F9B0CBL,65532UL},1UL,0xADC7F885C5605CAFL,0xAD1BL,0x5E293CA48F505825L,0xE8E99F49AB629558L,0x8C92L,1L},{{0x7C0AEA5BL,0x7714C24DL,4294967295UL,0x04F9B0CBL,65532UL},1UL,0xADC7F885C5605CAFL,0xAD1BL,0x5E293CA48F505825L,0xE8E99F49AB629558L,0x8C92L,1L},{{0x7C0AEA5BL,0x7714C24DL,4294967295UL,0x04F9B0CBL,65532UL},1UL,0xADC7F885C5605CAFL,0xAD1BL,0x5E293CA48F505825L,0xE8E99F49AB629558L,0x8C92L,1L},{{0x7C0AEA5BL,0x7714C24DL,4294967295UL,0x04F9B0CBL,65532UL},1UL,0xADC7F885C5605CAFL,0xAD1BL,0x5E293CA48F505825L,0xE8E99F49AB629558L,0x8C92L,1L},{{0x7C0AEA5BL,0x7714C24DL,4294967295UL,0x04F9B0CBL,65532UL},1UL,0xADC7F885C5605CAFL,0xAD1BL,0x5E293CA48F505825L,0xE8E99F49AB629558L,0x8C92L,1L}}, // p_1924->g_507
        &p_1924->g_184, // p_1924->g_509
        &p_1924->g_509, // p_1924->g_508
        {8L,1L,8L,8L,1L,8L,8L}, // p_1924->g_518
        &p_1924->g_25, // p_1924->g_572
        &p_1924->g_572, // p_1924->g_571
        (-8L), // p_1924->g_580
        {{4294967295UL,0x40E9CA71L,0xE2428C5FL,0x4046ACD4L,65534UL},4294967295UL,1UL,0xAB21L,-10L,0x872D86C31F5A0E8EL,0x6A70L,0x74L}, // p_1924->g_677
        {{0xA3C53C96L,1L,6UL,0UL,0x2240L},0x359C9DA1L,0UL,1UL,0x29A45B51CF53C823L,18446744073709551615UL,0x00D1L,0x39L}, // p_1924->g_693
        &p_1924->g_26.f0.f0, // p_1924->g_713
        &p_1924->g_518[4], // p_1924->g_723
        &p_1924->g_723, // p_1924->g_722
        {{{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722},{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722}},{{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722},{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722}},{{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722},{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722}},{{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722},{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722}},{{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722},{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722}},{{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722},{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722}},{{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722},{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722}},{{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722},{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722}},{{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722},{&p_1924->g_722,&p_1924->g_722,&p_1924->g_722,&p_1924->g_722}}}, // p_1924->g_721
        &p_1924->g_722, // p_1924->g_724
        {{0x067B39BEL,0x2C0A6E55L,0xB9CB7144L,0x93D2D735L,65535UL},2UL,0UL,0x29AAL,0x2F67DAA3D12D2803L,0x0C249C038C6B4BC3L,0x2C61L,0x00L}, // p_1924->g_751
        (void*)0, // p_1924->g_778
        &p_1924->g_504, // p_1924->g_844
        &p_1924->g_844, // p_1924->g_843
        &p_1924->g_507[4], // p_1924->g_865
        (void*)0, // p_1924->g_867
        4L, // p_1924->g_909
        &p_1924->g_37[5], // p_1924->g_956
        &p_1924->g_956, // p_1924->g_955
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1924->g_999
        (void*)0, // p_1924->g_1016
        &p_1924->g_1016, // p_1924->g_1015
        1UL, // p_1924->g_1163
        {{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956},{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956},{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956},{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956},{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956},{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956},{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956},{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956},{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956},{&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956,&p_1924->g_956}}, // p_1924->g_1196
        {{{0x1F6BCB6BL}},{{0x1F6BCB6BL}},{{0x1F6BCB6BL}},{{0x1F6BCB6BL}},{{0x1F6BCB6BL}},{{0x1F6BCB6BL}},{{0x1F6BCB6BL}},{{0x1F6BCB6BL}},{{0x1F6BCB6BL}}}, // p_1924->g_1197
        &p_1924->g_843, // p_1924->g_1209
        0x4195096DL, // p_1924->g_1216
        {{0x6C1DL}}, // p_1924->g_1254
        {4UL,4UL}, // p_1924->g_1289
        (void*)0, // p_1924->g_1402
        &p_1924->g_1402, // p_1924->g_1401
        &p_1924->g_1401, // p_1924->g_1400
        &p_1924->g_1400, // p_1924->g_1399
        &p_1924->g_15.f1, // p_1924->g_1493
        {{9UL,0x080DA97FL,8UL,0x278DABBAL,0xA4D0L},0x570A9D5FL,0x0E867806C8FD17D1L,0x75F6L,-1L,6UL,0x031CL,-8L}, // p_1924->g_1566
        {7UL,1L,0x4CF3489DL,4294967289UL,1UL}, // p_1924->g_1578
        &p_1924->g_1196[9][4], // p_1924->g_1580
        {&p_1924->g_1580,&p_1924->g_1580,&p_1924->g_1580,&p_1924->g_1580,&p_1924->g_1580,&p_1924->g_1580,&p_1924->g_1580}, // p_1924->g_1579
        (void*)0, // p_1924->g_1586
        &p_1924->g_1586, // p_1924->g_1585
        &p_1924->g_1585, // p_1924->g_1584
        {0xD0B0B08CL,5L,0x2D0102EBL,0x33598D7FL,0UL}, // p_1924->g_1660
        &p_1924->g_677.f0, // p_1924->g_1661
        &p_1924->g_142[2], // p_1924->g_1673
        &p_1924->g_1673, // p_1924->g_1672
        (void*)0, // p_1924->g_1674
        {{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L},{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L},{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L},{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L},{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L},{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L},{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L},{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L},{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L},{{4294967291UL,0x5528E860L,0x1537419BL,4294967295UL,0x81C8L},0x70023B36L,0xB11EFA5519820043L,0x1BB7L,-1L,0xDFE24666DE80EA91L,0x0401L,0x13L}}, // p_1924->g_1677
        (void*)0, // p_1924->g_1702
        (void*)0, // p_1924->g_1725
        &p_1924->g_1725, // p_1924->g_1726
        {4294967293UL,0L,0x47904A2FL,0x6FD79060L,0x712AL}, // p_1924->g_1764
        &p_1924->g_1660, // p_1924->g_1920
        &p_1924->g_1920, // p_1924->g_1919
    };
    c_1925 = c_1926;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1924);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1924->g_4, "p_1924->g_4", print_hash_value);
    transparent_crc(p_1924->g_15.f0, "p_1924->g_15.f0", print_hash_value);
    transparent_crc(p_1924->g_15.f1, "p_1924->g_15.f1", print_hash_value);
    transparent_crc(p_1924->g_15.f2, "p_1924->g_15.f2", print_hash_value);
    transparent_crc(p_1924->g_15.f3, "p_1924->g_15.f3", print_hash_value);
    transparent_crc(p_1924->g_15.f4, "p_1924->g_15.f4", print_hash_value);
    transparent_crc(p_1924->g_26.f0.f0, "p_1924->g_26.f0.f0", print_hash_value);
    transparent_crc(p_1924->g_26.f0.f1, "p_1924->g_26.f0.f1", print_hash_value);
    transparent_crc(p_1924->g_26.f0.f2, "p_1924->g_26.f0.f2", print_hash_value);
    transparent_crc(p_1924->g_26.f0.f3, "p_1924->g_26.f0.f3", print_hash_value);
    transparent_crc(p_1924->g_26.f0.f4, "p_1924->g_26.f0.f4", print_hash_value);
    transparent_crc(p_1924->g_26.f1, "p_1924->g_26.f1", print_hash_value);
    transparent_crc(p_1924->g_26.f2, "p_1924->g_26.f2", print_hash_value);
    transparent_crc(p_1924->g_26.f3, "p_1924->g_26.f3", print_hash_value);
    transparent_crc(p_1924->g_26.f4, "p_1924->g_26.f4", print_hash_value);
    transparent_crc(p_1924->g_26.f5, "p_1924->g_26.f5", print_hash_value);
    transparent_crc(p_1924->g_26.f6, "p_1924->g_26.f6", print_hash_value);
    transparent_crc(p_1924->g_26.f7, "p_1924->g_26.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1924->g_37[i], "p_1924->g_37[i]", print_hash_value);

    }
    transparent_crc(p_1924->g_44, "p_1924->g_44", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1924->g_69[i][j], "p_1924->g_69[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1924->g_129, "p_1924->g_129", print_hash_value);
    transparent_crc(p_1924->g_131, "p_1924->g_131", print_hash_value);
    transparent_crc(p_1924->g_138, "p_1924->g_138", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1924->g_166[i][j].f0, "p_1924->g_166[i][j].f0", print_hash_value);
            transparent_crc(p_1924->g_166[i][j].f1, "p_1924->g_166[i][j].f1", print_hash_value);
            transparent_crc(p_1924->g_166[i][j].f2, "p_1924->g_166[i][j].f2", print_hash_value);
            transparent_crc(p_1924->g_166[i][j].f3, "p_1924->g_166[i][j].f3", print_hash_value);
            transparent_crc(p_1924->g_166[i][j].f4, "p_1924->g_166[i][j].f4", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1924->g_168[i], "p_1924->g_168[i]", print_hash_value);

    }
    transparent_crc(p_1924->g_184, "p_1924->g_184", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1924->g_222[i][j].f0.f0, "p_1924->g_222[i][j].f0.f0", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f0.f1, "p_1924->g_222[i][j].f0.f1", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f0.f2, "p_1924->g_222[i][j].f0.f2", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f0.f3, "p_1924->g_222[i][j].f0.f3", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f0.f4, "p_1924->g_222[i][j].f0.f4", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f1, "p_1924->g_222[i][j].f1", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f2, "p_1924->g_222[i][j].f2", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f3, "p_1924->g_222[i][j].f3", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f4, "p_1924->g_222[i][j].f4", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f5, "p_1924->g_222[i][j].f5", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f6, "p_1924->g_222[i][j].f6", print_hash_value);
            transparent_crc(p_1924->g_222[i][j].f7, "p_1924->g_222[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(p_1924->g_276, "p_1924->g_276", print_hash_value);
    transparent_crc(p_1924->g_372, "p_1924->g_372", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1924->g_407[i][j], "p_1924->g_407[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1924->g_415[i].f0, "p_1924->g_415[i].f0", print_hash_value);
        transparent_crc(p_1924->g_415[i].f1, "p_1924->g_415[i].f1", print_hash_value);
        transparent_crc(p_1924->g_415[i].f2, "p_1924->g_415[i].f2", print_hash_value);
        transparent_crc(p_1924->g_415[i].f3, "p_1924->g_415[i].f3", print_hash_value);
        transparent_crc(p_1924->g_415[i].f4, "p_1924->g_415[i].f4", print_hash_value);

    }
    transparent_crc(p_1924->g_504.f0, "p_1924->g_504.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1924->g_507[i].f0.f0, "p_1924->g_507[i].f0.f0", print_hash_value);
        transparent_crc(p_1924->g_507[i].f0.f1, "p_1924->g_507[i].f0.f1", print_hash_value);
        transparent_crc(p_1924->g_507[i].f0.f2, "p_1924->g_507[i].f0.f2", print_hash_value);
        transparent_crc(p_1924->g_507[i].f0.f3, "p_1924->g_507[i].f0.f3", print_hash_value);
        transparent_crc(p_1924->g_507[i].f0.f4, "p_1924->g_507[i].f0.f4", print_hash_value);
        transparent_crc(p_1924->g_507[i].f1, "p_1924->g_507[i].f1", print_hash_value);
        transparent_crc(p_1924->g_507[i].f2, "p_1924->g_507[i].f2", print_hash_value);
        transparent_crc(p_1924->g_507[i].f3, "p_1924->g_507[i].f3", print_hash_value);
        transparent_crc(p_1924->g_507[i].f4, "p_1924->g_507[i].f4", print_hash_value);
        transparent_crc(p_1924->g_507[i].f5, "p_1924->g_507[i].f5", print_hash_value);
        transparent_crc(p_1924->g_507[i].f6, "p_1924->g_507[i].f6", print_hash_value);
        transparent_crc(p_1924->g_507[i].f7, "p_1924->g_507[i].f7", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1924->g_518[i], "p_1924->g_518[i]", print_hash_value);

    }
    transparent_crc(p_1924->g_580, "p_1924->g_580", print_hash_value);
    transparent_crc(p_1924->g_677.f0.f0, "p_1924->g_677.f0.f0", print_hash_value);
    transparent_crc(p_1924->g_677.f0.f1, "p_1924->g_677.f0.f1", print_hash_value);
    transparent_crc(p_1924->g_677.f0.f2, "p_1924->g_677.f0.f2", print_hash_value);
    transparent_crc(p_1924->g_677.f0.f3, "p_1924->g_677.f0.f3", print_hash_value);
    transparent_crc(p_1924->g_677.f0.f4, "p_1924->g_677.f0.f4", print_hash_value);
    transparent_crc(p_1924->g_677.f1, "p_1924->g_677.f1", print_hash_value);
    transparent_crc(p_1924->g_677.f2, "p_1924->g_677.f2", print_hash_value);
    transparent_crc(p_1924->g_677.f3, "p_1924->g_677.f3", print_hash_value);
    transparent_crc(p_1924->g_677.f4, "p_1924->g_677.f4", print_hash_value);
    transparent_crc(p_1924->g_677.f5, "p_1924->g_677.f5", print_hash_value);
    transparent_crc(p_1924->g_677.f6, "p_1924->g_677.f6", print_hash_value);
    transparent_crc(p_1924->g_677.f7, "p_1924->g_677.f7", print_hash_value);
    transparent_crc(p_1924->g_693.f0.f0, "p_1924->g_693.f0.f0", print_hash_value);
    transparent_crc(p_1924->g_693.f0.f1, "p_1924->g_693.f0.f1", print_hash_value);
    transparent_crc(p_1924->g_693.f0.f2, "p_1924->g_693.f0.f2", print_hash_value);
    transparent_crc(p_1924->g_693.f0.f3, "p_1924->g_693.f0.f3", print_hash_value);
    transparent_crc(p_1924->g_693.f0.f4, "p_1924->g_693.f0.f4", print_hash_value);
    transparent_crc(p_1924->g_693.f1, "p_1924->g_693.f1", print_hash_value);
    transparent_crc(p_1924->g_693.f2, "p_1924->g_693.f2", print_hash_value);
    transparent_crc(p_1924->g_693.f3, "p_1924->g_693.f3", print_hash_value);
    transparent_crc(p_1924->g_693.f4, "p_1924->g_693.f4", print_hash_value);
    transparent_crc(p_1924->g_693.f5, "p_1924->g_693.f5", print_hash_value);
    transparent_crc(p_1924->g_693.f6, "p_1924->g_693.f6", print_hash_value);
    transparent_crc(p_1924->g_693.f7, "p_1924->g_693.f7", print_hash_value);
    transparent_crc(p_1924->g_751.f0.f0, "p_1924->g_751.f0.f0", print_hash_value);
    transparent_crc(p_1924->g_751.f0.f1, "p_1924->g_751.f0.f1", print_hash_value);
    transparent_crc(p_1924->g_751.f0.f2, "p_1924->g_751.f0.f2", print_hash_value);
    transparent_crc(p_1924->g_751.f0.f3, "p_1924->g_751.f0.f3", print_hash_value);
    transparent_crc(p_1924->g_751.f0.f4, "p_1924->g_751.f0.f4", print_hash_value);
    transparent_crc(p_1924->g_751.f1, "p_1924->g_751.f1", print_hash_value);
    transparent_crc(p_1924->g_751.f2, "p_1924->g_751.f2", print_hash_value);
    transparent_crc(p_1924->g_751.f3, "p_1924->g_751.f3", print_hash_value);
    transparent_crc(p_1924->g_751.f4, "p_1924->g_751.f4", print_hash_value);
    transparent_crc(p_1924->g_751.f5, "p_1924->g_751.f5", print_hash_value);
    transparent_crc(p_1924->g_751.f6, "p_1924->g_751.f6", print_hash_value);
    transparent_crc(p_1924->g_751.f7, "p_1924->g_751.f7", print_hash_value);
    transparent_crc(p_1924->g_909, "p_1924->g_909", print_hash_value);
    transparent_crc(p_1924->g_1163, "p_1924->g_1163", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1924->g_1197[i][j][k], "p_1924->g_1197[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1924->g_1216, "p_1924->g_1216", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1924->g_1254[i][j], "p_1924->g_1254[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1924->g_1289[i], "p_1924->g_1289[i]", print_hash_value);

    }
    transparent_crc(p_1924->g_1566.f0.f0, "p_1924->g_1566.f0.f0", print_hash_value);
    transparent_crc(p_1924->g_1566.f0.f1, "p_1924->g_1566.f0.f1", print_hash_value);
    transparent_crc(p_1924->g_1566.f0.f2, "p_1924->g_1566.f0.f2", print_hash_value);
    transparent_crc(p_1924->g_1566.f0.f3, "p_1924->g_1566.f0.f3", print_hash_value);
    transparent_crc(p_1924->g_1566.f0.f4, "p_1924->g_1566.f0.f4", print_hash_value);
    transparent_crc(p_1924->g_1566.f1, "p_1924->g_1566.f1", print_hash_value);
    transparent_crc(p_1924->g_1566.f2, "p_1924->g_1566.f2", print_hash_value);
    transparent_crc(p_1924->g_1566.f3, "p_1924->g_1566.f3", print_hash_value);
    transparent_crc(p_1924->g_1566.f4, "p_1924->g_1566.f4", print_hash_value);
    transparent_crc(p_1924->g_1566.f5, "p_1924->g_1566.f5", print_hash_value);
    transparent_crc(p_1924->g_1566.f6, "p_1924->g_1566.f6", print_hash_value);
    transparent_crc(p_1924->g_1566.f7, "p_1924->g_1566.f7", print_hash_value);
    transparent_crc(p_1924->g_1578.f0, "p_1924->g_1578.f0", print_hash_value);
    transparent_crc(p_1924->g_1578.f1, "p_1924->g_1578.f1", print_hash_value);
    transparent_crc(p_1924->g_1578.f2, "p_1924->g_1578.f2", print_hash_value);
    transparent_crc(p_1924->g_1578.f3, "p_1924->g_1578.f3", print_hash_value);
    transparent_crc(p_1924->g_1578.f4, "p_1924->g_1578.f4", print_hash_value);
    transparent_crc(p_1924->g_1660.f0, "p_1924->g_1660.f0", print_hash_value);
    transparent_crc(p_1924->g_1660.f1, "p_1924->g_1660.f1", print_hash_value);
    transparent_crc(p_1924->g_1660.f2, "p_1924->g_1660.f2", print_hash_value);
    transparent_crc(p_1924->g_1660.f3, "p_1924->g_1660.f3", print_hash_value);
    transparent_crc(p_1924->g_1660.f4, "p_1924->g_1660.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1924->g_1677[i].f0.f0, "p_1924->g_1677[i].f0.f0", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f0.f1, "p_1924->g_1677[i].f0.f1", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f0.f2, "p_1924->g_1677[i].f0.f2", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f0.f3, "p_1924->g_1677[i].f0.f3", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f0.f4, "p_1924->g_1677[i].f0.f4", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f1, "p_1924->g_1677[i].f1", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f2, "p_1924->g_1677[i].f2", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f3, "p_1924->g_1677[i].f3", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f4, "p_1924->g_1677[i].f4", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f5, "p_1924->g_1677[i].f5", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f6, "p_1924->g_1677[i].f6", print_hash_value);
        transparent_crc(p_1924->g_1677[i].f7, "p_1924->g_1677[i].f7", print_hash_value);

    }
    transparent_crc(p_1924->g_1764.f0, "p_1924->g_1764.f0", print_hash_value);
    transparent_crc(p_1924->g_1764.f1, "p_1924->g_1764.f1", print_hash_value);
    transparent_crc(p_1924->g_1764.f2, "p_1924->g_1764.f2", print_hash_value);
    transparent_crc(p_1924->g_1764.f3, "p_1924->g_1764.f3", print_hash_value);
    transparent_crc(p_1924->g_1764.f4, "p_1924->g_1764.f4", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
