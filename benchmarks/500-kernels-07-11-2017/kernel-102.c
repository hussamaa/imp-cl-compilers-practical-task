// -g 65,38,2 -l 1,19,2
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


// Seed: 792686761

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
};

struct S1 {
   struct S0  f0;
   uint32_t  f1;
   volatile int16_t  f2;
   int64_t  f3;
   uint64_t  f4;
   uint64_t  f5;
   int32_t  f6;
   volatile struct S0  f7;
   volatile int8_t  f8;
};

struct S2 {
   int32_t  f0;
   uint32_t  f1;
   uint64_t  f2;
};

struct S3 {
   uint32_t  f0;
   uint32_t  f1;
};

union U4 {
   struct S1  f0;
   volatile uint32_t  f1;
   struct S0  f2;
   uint64_t  f3;
   struct S0  f4;
};

struct S5 {
    struct S0 g_10;
    int64_t g_12;
    int32_t *g_45;
    int32_t g_47;
    volatile uint32_t g_59[3][9][6];
    int32_t g_62[3][3];
    int16_t g_90;
    struct S1 g_128[3];
    uint16_t g_130;
    int8_t g_139;
    int32_t * volatile g_143[5][6];
    int16_t g_270;
    uint32_t g_289;
    uint8_t g_311;
    int32_t **g_350;
    uint16_t g_351;
    struct S0 *g_375;
    struct S0 **g_374;
    volatile uint32_t g_438;
    uint8_t g_441[1][2][9];
    struct S1 *g_444;
    struct S1 ** volatile g_443;
    uint16_t g_459;
    int32_t ** volatile g_480[3];
    volatile struct S3 g_499[7];
    volatile struct S3 *g_498[5][2];
    struct S3 g_501;
    struct S3 *g_500;
    uint32_t g_526;
    volatile struct S2 g_534[6][4];
    uint64_t *g_538;
    volatile union U4 g_541;
    struct S0 g_553;
    int32_t g_589;
    union U4 g_595[3][5][4];
    struct S1 g_597;
    volatile struct S1 g_645[8];
    uint32_t g_654;
    struct S2 g_689;
    int32_t * volatile g_722;
    uint32_t *g_936;
    union U4 g_967[9];
    volatile struct S1 g_972;
    volatile struct S1 g_973;
    uint8_t **g_1011;
    uint32_t g_1055[5][3][8];
    uint32_t ** volatile g_1135;
    struct S1 ** volatile g_1139;
    uint8_t g_1159;
    uint8_t *** volatile g_1164;
    volatile uint32_t g_1187[7][5][2];
    volatile struct S1 g_1192;
    volatile struct S1 g_1193;
    struct S2 * volatile g_1240[6];
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S5 * p_1242);
int16_t  func_6(struct S0  p_7, uint16_t  p_8, uint64_t  p_9, struct S5 * p_1242);
int32_t * func_16(struct S0 * p_17, struct S5 * p_1242);
struct S2  func_23(int64_t  p_24, struct S2  p_25, struct S5 * p_1242);
struct S2  func_28(int64_t  p_29, int16_t  p_30, struct S5 * p_1242);
int64_t  func_31(int16_t  p_32, struct S5 * p_1242);
uint64_t  func_35(int32_t  p_36, struct S0 * p_37, int64_t  p_38, int32_t * p_39, uint32_t  p_40, struct S5 * p_1242);
int32_t  func_41(int32_t * p_42, int64_t  p_43, int32_t * p_44, struct S5 * p_1242);
int32_t * func_67(int32_t  p_68, struct S0 * p_69, struct S5 * p_1242);
struct S0 * func_70(int32_t * p_71, int32_t  p_72, uint32_t  p_73, struct S5 * p_1242);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1242->g_10 p_1242->g_12 p_1242->g_47 p_1242->g_90 p_1242->g_270 p_1242->g_689.f1 p_1242->g_645.f1 p_1242->g_689.f0 p_1242->g_553.f0 p_1242->g_595.f0.f0.f0 p_1242->g_654 p_1242->g_936 p_1242->g_526 p_1242->g_350 p_1242->g_538 p_1242->g_1011 p_1242->g_1164 p_1242->g_722 p_1242->g_62 p_1242->g_972.f2 p_1242->g_595.f0.f5 p_1242->g_1193.f4 p_1242->g_541.f0.f1 p_1242->g_967.f0.f6
 * writes: p_1242->g_10 p_1242->g_47 p_1242->g_90 p_1242->g_595.f0.f4 p_1242->g_139 p_1242->g_1159 p_1242->g_270 p_1242->g_45 p_1242->g_1011 p_1242->g_526 p_1242->g_12 p_1242->g_967.f0.f6 p_1242->g_689
 */
uint16_t  func_1(struct S5 * p_1242)
{ /* block id: 4 */
    struct S0 *l_11 = (void*)0;
    uint8_t l_13 = 255UL;
    int64_t l_1234 = 5L;
    uint64_t **l_1236 = (void*)0;
    uint64_t ***l_1235 = &l_1236;
    int32_t l_1237 = 0x32674B0FL;
    int32_t *l_1238 = &p_1242->g_967[1].f0.f6;
    struct S2 l_1239[5][4][4] = {{{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}}},{{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}}},{{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}}},{{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}}},{{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}},{{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x2E1A0EF5L,0x8100EA80L,0x636BBC1D88ECB4ECL},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L},{0x3B871014L,0x5D7AAC3DL,0x01B749EE30046BA7L}}}};
    struct S2 *l_1241 = &p_1242->g_689;
    int i, j, k;
    (*l_1238) &= ((safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(func_6((p_1242->g_10 = p_1242->g_10), p_1242->g_12, l_13, p_1242), ((l_1237 |= (((safe_sub_func_uint16_t_u_u((p_1242->g_689.f0 == 65535UL), (l_13 >= (l_1234 & (((*l_1235) = (void*)0) != (void*)0))))) & 0x1BL) < 1L)) | l_1234))), 1)) && l_1234);
    (*l_1241) = l_1239[0][1][2];
    return (*l_1238);
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_47 p_1242->g_90 p_1242->g_270 p_1242->g_689.f1 p_1242->g_645.f1 p_1242->g_689.f0 p_1242->g_553.f0 p_1242->g_595.f0.f0.f0 p_1242->g_654 p_1242->g_936 p_1242->g_526 p_1242->g_350 p_1242->g_538 p_1242->g_10.f0 p_1242->g_1011 p_1242->g_1164 p_1242->g_722 p_1242->g_62 p_1242->g_972.f2 p_1242->g_12 p_1242->g_595.f0.f5 p_1242->g_1193.f4 p_1242->g_541.f0.f1
 * writes: p_1242->g_47 p_1242->g_90 p_1242->g_595.f0.f4 p_1242->g_139 p_1242->g_1159 p_1242->g_270 p_1242->g_45 p_1242->g_1011 p_1242->g_526 p_1242->g_12
 */
int16_t  func_6(struct S0  p_7, uint16_t  p_8, uint64_t  p_9, struct S5 * p_1242)
{ /* block id: 6 */
    int32_t *l_46 = &p_1242->g_47;
    uint32_t l_702 = 0x54A54A22L;
    uint32_t *l_937 = &l_702;
    struct S0 l_982 = {0xC6C11252DD77721DL};
    uint64_t **l_1016 = &p_1242->g_538;
    int32_t l_1046[1];
    int64_t l_1105[8] = {1L,0x2769136F86604C7AL,1L,1L,0x2769136F86604C7AL,1L,1L,0x2769136F86604C7AL};
    uint8_t l_1130 = 255UL;
    uint32_t *l_1137 = &p_1242->g_501.f0;
    uint32_t ** volatile l_1136 = &l_1137;/* VOLATILE GLOBAL l_1136 */
    struct S3 l_1140[2] = {{0UL,0x8403B537L},{0UL,0x8403B537L}};
    uint32_t l_1145 = 4294967291UL;
    uint32_t l_1157 = 4294967289UL;
    uint32_t l_1178 = 6UL;
    int64_t l_1228 = 0x2C3657864ECA4E9EL;
    uint32_t l_1229 = 9UL;
    int i;
    for (i = 0; i < 1; i++)
        l_1046[i] = 0x233B21C0L;
lbl_1143:
    for (p_7.f0 = 19; (p_7.f0 > 1); p_7.f0 = safe_sub_func_int16_t_s_s(p_7.f0, 3))
    { /* block id: 9 */
        uint64_t l_18 = 0x5943E2F7C629C4DDL;
        struct S0 *l_552 = &p_1242->g_553;
        int64_t *l_632 = &p_1242->g_595[0][3][1].f0.f3;
        uint16_t *l_932 = &p_1242->g_351;
        uint16_t *l_935 = &p_1242->g_459;
        int32_t l_955 = 0x04006AA1L;
        uint8_t l_956 = 0x2BL;
        struct S2 l_983 = {0x35BEB722L,4294967288UL,0UL};
        int16_t l_984 = 0x7492L;
        struct S3 *l_987[9];
        int i;
        for (i = 0; i < 9; i++)
            l_987[i] = &p_1242->g_501;
        (1 + 1);
    }
    if (((*l_46) = p_8))
    { /* block id: 413 */
        (*l_46) ^= (p_8 && 0UL);
    }
    else
    { /* block id: 415 */
        int16_t l_995 = 0x6F6DL;
        uint8_t *l_1009[4][8] = {{&p_1242->g_441[0][0][6],&p_1242->g_311,(void*)0,&p_1242->g_311,&p_1242->g_441[0][0][6],&p_1242->g_441[0][0][6],&p_1242->g_311,(void*)0},{&p_1242->g_441[0][0][6],&p_1242->g_311,(void*)0,&p_1242->g_311,&p_1242->g_441[0][0][6],&p_1242->g_441[0][0][6],&p_1242->g_311,(void*)0},{&p_1242->g_441[0][0][6],&p_1242->g_311,(void*)0,&p_1242->g_311,&p_1242->g_441[0][0][6],&p_1242->g_441[0][0][6],&p_1242->g_311,(void*)0},{&p_1242->g_441[0][0][6],&p_1242->g_311,(void*)0,&p_1242->g_311,&p_1242->g_441[0][0][6],&p_1242->g_441[0][0][6],&p_1242->g_311,(void*)0}};
        uint8_t **l_1008[6] = {&l_1009[2][1],(void*)0,&l_1009[2][1],&l_1009[2][1],(void*)0,&l_1009[2][1]};
        int32_t l_1018 = 0L;
        int32_t **l_1021 = (void*)0;
        int32_t l_1119 = 0x635831E4L;
        int32_t l_1122 = 0x27184E28L;
        int32_t l_1123 = 0x2602D5F8L;
        int32_t l_1126 = 2L;
        int32_t l_1127 = 9L;
        int32_t l_1129 = 0x6E459078L;
        struct S3 l_1141 = {4294967287UL,2UL};
        int64_t *l_1144[6][4][7] = {{{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]}},{{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]}},{{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]}},{{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]}},{{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]}},{{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]},{&l_1105[0],&p_1242->g_12,&l_1105[5],&p_1242->g_12,&l_1105[0],&l_1105[3],&l_1105[0]}}};
        uint64_t *l_1156 = &p_1242->g_595[0][3][1].f0.f4;
        int8_t *l_1158 = &p_1242->g_139;
        int32_t l_1160[3][6][7] = {{{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L}},{{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L}},{{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L},{0x59015909L,0x3BE7DCCFL,8L,0x61C7C3F6L,0L,3L,0x79E13A40L}}};
        int32_t *l_1161 = &l_1129;
        int16_t l_1221 = 0x34C3L;
        int16_t l_1227[6][1] = {{0x037BL},{0x037BL},{0x037BL},{0x037BL},{0x037BL},{0x037BL}};
        int i, j, k;
        for (p_1242->g_90 = 0; (p_1242->g_90 < (-16)); p_1242->g_90--)
        { /* block id: 418 */
            int32_t **l_1019 = &l_46;
            struct S3 *l_1059[7] = {&p_1242->g_501,&p_1242->g_501,&p_1242->g_501,&p_1242->g_501,&p_1242->g_501,&p_1242->g_501,&p_1242->g_501};
            int32_t l_1060 = 0x3890EE55L;
            int32_t l_1120 = 0x0819F6C0L;
            int32_t l_1125 = 4L;
            int32_t l_1128 = 0x329A31B1L;
            int i;
            (1 + 1);
        }
        if (((l_1160[2][2][3] &= ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((p_1242->g_270 = ((p_7.f0 & (((((*l_46) ^ (1L < (((!(safe_div_func_uint32_t_u_u((*l_46), (p_1242->g_270 & (((~(safe_rshift_func_int8_t_s_u(p_9, 6))) == (p_1242->g_1159 = ((~p_1242->g_689.f1) > ((*l_1158) = (safe_rshift_func_int8_t_s_s((((p_1242->g_645[2].f1 , ((((*l_1156) = p_1242->g_689.f0) , l_1157) | p_1242->g_553.f0)) , l_982) , (*l_46)), 2)))))) && (*l_46)))))) != p_7.f0) != 0xFEL))) & (*l_46)) || p_1242->g_595[0][3][1].f0.f0.f0) & p_1242->g_654)) <= 0UL)), 4UL)) , 0x1216L), p_8)) < (*p_1242->g_936))) == 0x508830BB5B4DA564L))
        { /* block id: 564 */
            int16_t l_1179 = 0L;
            int32_t l_1186 = 0x7D3B4918L;
            int32_t l_1222 = 0x08C5C8B8L;
            int32_t l_1226[10][4][6] = {{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}},{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}},{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}},{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}},{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}},{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}},{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}},{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}},{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}},{{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L},{0x3878F6A9L,0x0B6DB192L,0x5EB451EEL,0L,0x1F39134DL,9L}}};
            int i, j, k;
            (*p_1242->g_350) = l_1161;
            if ((safe_sub_func_uint64_t_u_u(p_9, (*p_1242->g_538))))
            { /* block id: 566 */
                uint64_t l_1167[9][5] = {{18446744073709551610UL,4UL,4UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,4UL,4UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,4UL,4UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,4UL,4UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,4UL,4UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,4UL,4UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,4UL,4UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,4UL,4UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,4UL,4UL,18446744073709551610UL,18446744073709551610UL}};
                int i, j;
                (*p_1242->g_1164) = p_1242->g_1011;
                for (p_1242->g_526 = (-24); (p_1242->g_526 != 51); p_1242->g_526 = safe_add_func_uint8_t_u_u(p_1242->g_526, 2))
                { /* block id: 570 */
                    l_1167[8][0] |= 1L;
                    if ((*p_1242->g_722))
                        continue;
                }
            }
            else
            { /* block id: 574 */
                return p_1242->g_972.f2;
            }
            for (l_995 = 10; (l_995 >= 20); l_995 = safe_add_func_int64_t_s_s(l_995, 7))
            { /* block id: 579 */
                uint8_t *l_1180 = (void*)0;
                int32_t l_1184 = (-1L);
                int32_t l_1223 = 0x4DA17E21L;
                int32_t l_1224 = 0x1578CEFBL;
                int32_t l_1225[7][7][5] = {{{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)}},{{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)}},{{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)}},{{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)}},{{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)}},{{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)}},{{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)},{1L,0x6031CC10L,0x17AB896CL,8L,(-1L)}}};
                int i, j, k;
                for (l_1123 = (-5); (l_1123 >= 21); l_1123++)
                { /* block id: 582 */
                    uint8_t *l_1181 = &p_1242->g_441[0][0][3];
                    uint8_t *l_1182 = (void*)0;
                    int32_t l_1185[5] = {6L,6L,6L,6L,6L};
                    int i;
                    (1 + 1);
                }
                (*p_1242->g_350) = &l_1186;
                for (l_1123 = 0; (l_1123 >= 14); l_1123 = safe_add_func_uint64_t_u_u(l_1123, 1))
                { /* block id: 602 */
                    uint32_t l_1196[9] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    uint16_t *l_1203 = (void*)0;
                    uint16_t *l_1204 = (void*)0;
                    uint16_t *l_1205[1][1][1];
                    int32_t *l_1210 = &l_1018;
                    int32_t *l_1211 = &l_1129;
                    int32_t *l_1212 = &l_1129;
                    int32_t *l_1213 = &l_1184;
                    int32_t *l_1214 = (void*)0;
                    int32_t *l_1215 = &l_1119;
                    int32_t *l_1216 = &l_1018;
                    int32_t *l_1217 = &p_1242->g_128[2].f6;
                    int32_t *l_1218 = (void*)0;
                    int32_t *l_1219 = &p_1242->g_597.f6;
                    int32_t *l_1220[7] = {&l_1122,&l_1122,&l_1122,&l_1122,&l_1122,&l_1122,&l_1122};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1205[i][j][k] = &p_1242->g_130;
                        }
                    }
                    if (l_1196[0])
                        break;
                    (*l_1210) = ((*l_1161) = ((safe_mod_func_uint16_t_u_u(((l_1186 |= (l_1184 < ((+(((l_1196[0] > (p_8 | 1UL)) <= (5UL < ((safe_mod_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((((*l_46) = l_1184) > p_8), ((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((0L ^ (p_1242->g_12 &= (*l_1161))), l_1179)), p_1242->g_595[0][3][1].f0.f5)) | p_1242->g_1193.f4))) & 0L) & l_1196[5]), p_7.f0)) & p_7.f0))) ^ 0x3A26C593L)) , 0xA41CFF00L))) && l_1179), 0x2D16L)) || l_1179));
                    l_1229--;
                    if ((*l_46))
                        continue;
                }
            }
        }
        else
        { /* block id: 613 */
            if (p_1242->g_553.f0)
                goto lbl_1143;
        }
    }
    return p_1242->g_541.f0.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_270 p_1242->g_500 p_1242->g_501 p_1242->g_526 p_1242->g_90 p_1242->g_722 p_1242->g_62 p_1242->g_139 p_1242->g_128.f6 p_1242->g_351 p_1242->g_597.f0.f0 p_1242->g_59 p_1242->g_534.f2 p_1242->g_47 p_1242->g_374 p_1242->g_375 p_1242->g_45 p_1242->g_128.f3 p_1242->g_128.f1 p_1242->g_128.f8 p_1242->g_128.f0.f0 p_1242->g_130 p_1242->g_12 p_1242->g_350 p_1242->g_289 p_1242->g_597.f6 p_1242->g_645.f7.f0 p_1242->g_459 p_1242->g_538 p_1242->g_595.f0.f1 p_1242->g_689.f0 p_1242->g_311 p_1242->g_597.f1 p_1242->g_441 p_1242->g_541.f0.f1 p_1242->g_645.f6 p_1242->g_128.f5 p_1242->g_595.f0.f4 p_1242->g_654 p_1242->g_595 p_1242->g_645.f2 p_1242->g_10.f0 p_1242->g_595.f0.f3 p_1242->g_689 p_1242->g_597.f7.f0 p_1242->g_534 p_1242->g_597.f5 p_1242->g_597.f3 p_1242->g_553.f0
 * writes: p_1242->g_270 p_1242->g_595.f0.f0.f0 p_1242->g_62 p_1242->g_597.f0.f0 p_1242->g_501.f0 p_1242->g_47 p_1242->g_45 p_1242->g_289 p_1242->g_90 p_1242->g_139 p_1242->g_311 p_1242->g_128.f0.f0 p_1242->g_375 p_1242->g_128.f6 p_1242->g_689.f0 p_1242->g_597.f6 p_1242->g_589 p_1242->g_441 p_1242->g_12 p_1242->g_654 p_1242->g_526 p_1242->g_689.f1
 */
int32_t * func_16(struct S0 * p_17, struct S5 * p_1242)
{ /* block id: 295 */
    uint64_t l_705 = 0xCF82A90C3A458D6BL;
    int32_t l_748[7][9][4] = {{{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL}},{{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL}},{{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL}},{{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL}},{{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL}},{{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL}},{{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL},{(-10L),1L,0x263ACCAEL,0x263ACCAEL}}};
    int32_t l_754 = 0x51640411L;
    int16_t l_907 = 0x09D4L;
    int32_t l_913[1][5];
    int32_t *l_929[4][8] = {{(void*)0,(void*)0,&l_913[0][0],&p_1242->g_128[2].f6,(void*)0,&p_1242->g_128[2].f6,&l_913[0][0],(void*)0},{(void*)0,(void*)0,&l_913[0][0],&p_1242->g_128[2].f6,(void*)0,&p_1242->g_128[2].f6,&l_913[0][0],(void*)0},{(void*)0,(void*)0,&l_913[0][0],&p_1242->g_128[2].f6,(void*)0,&p_1242->g_128[2].f6,&l_913[0][0],(void*)0},{(void*)0,(void*)0,&l_913[0][0],&p_1242->g_128[2].f6,(void*)0,&p_1242->g_128[2].f6,&l_913[0][0],(void*)0}};
    int64_t l_930 = 0x1379DD82E05D2B19L;
    int32_t *l_931[3];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_913[i][j] = 0x673D7B25L;
    }
    for (i = 0; i < 3; i++)
        l_931[i] = (void*)0;
    for (p_1242->g_270 = 2; (p_1242->g_270 >= 0); p_1242->g_270 -= 1)
    { /* block id: 298 */
        uint32_t l_706 = 1UL;
        int32_t l_750 = (-1L);
        int32_t l_751[10][9][2] = {{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}},{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}},{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}},{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}},{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}},{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}},{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}},{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}},{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}},{{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)},{0x2F4E0978L,(-1L)}}};
        struct S0 l_769 = {0xB2F2E59CD9E56701L};
        uint64_t *l_777 = &p_1242->g_597.f0.f0;
        uint8_t *l_811 = &p_1242->g_441[0][1][5];
        uint8_t **l_810 = &l_811;
        int32_t l_841 = 0x083013E4L;
        int32_t *l_922 = &l_913[0][0];
        int i, j, k;
        if ((safe_rshift_func_int8_t_s_s(l_705, 2)))
        { /* block id: 299 */
            int8_t l_707 = 0x61L;
            uint8_t l_720[10];
            uint64_t *l_721 = &p_1242->g_595[0][3][1].f0.f0.f0;
            int i;
            for (i = 0; i < 10; i++)
                l_720[i] = 0xE6L;
            (*p_1242->g_722) = (p_1242->g_270 ^ ((l_706 & (l_707 , (safe_mod_func_int64_t_s_s((l_705 & (((*p_1242->g_500) , l_705) || l_707)), l_705)))) || ((((safe_div_func_uint16_t_u_u((((((*l_721) = (((safe_div_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((~(safe_mul_func_int8_t_s_s(l_720[0], l_720[0]))), (-1L))), 0x3F9EE03E10ADF35CL)), 0x36L)) || p_1242->g_526) , l_720[9])) > 0x5BD23B8947B91144L) | l_706) && (-6L)), p_1242->g_90)) >= l_705) == 6L) || (-1L))));
        }
        else
        { /* block id: 302 */
            uint32_t l_733 = 0x188D7614L;
            int32_t l_745 = 0x7525BEEDL;
            int32_t l_746[3][9] = {{1L,0x4F36FA26L,7L,0x323A4385L,0x4F36FA26L,0x323A4385L,7L,0x4F36FA26L,1L},{1L,0x4F36FA26L,7L,0x323A4385L,0x4F36FA26L,0x323A4385L,7L,0x4F36FA26L,1L},{1L,0x4F36FA26L,7L,0x323A4385L,0x4F36FA26L,0x323A4385L,7L,0x4F36FA26L,1L}};
            uint64_t *l_779[10][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
            uint32_t l_795 = 4294967293UL;
            int8_t *l_820 = (void*)0;
            int16_t *l_821 = &p_1242->g_90;
            int64_t *l_822 = &p_1242->g_12;
            int32_t *l_823[3];
            int8_t *l_840 = &p_1242->g_139;
            int i, j;
            for (i = 0; i < 3; i++)
                l_823[i] = &l_751[2][8][1];
            for (p_1242->g_597.f0.f0 = 0; (p_1242->g_597.f0.f0 <= 2); p_1242->g_597.f0.f0 += 1)
            { /* block id: 305 */
                int16_t l_731 = 0x3CE1L;
                int32_t l_747 = 0x0813B1D8L;
                int32_t l_756 = 0x65C3274CL;
                int32_t l_758 = 0x3F6C31D0L;
                int32_t l_759 = 0x0F2191BFL;
                int32_t l_760 = 3L;
                uint8_t l_762 = 1UL;
                uint64_t **l_778[1][5];
                int32_t *l_786 = &p_1242->g_589;
                uint8_t *l_787 = &l_762;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_778[i][j] = &l_777;
                }
                for (p_1242->g_501.f0 = 0; (p_1242->g_501.f0 <= 2); p_1242->g_501.f0 += 1)
                { /* block id: 308 */
                    struct S3 l_727 = {4294967295UL,0xE1B8152FL};
                    int32_t l_744 = 1L;
                    int32_t l_749 = (-1L);
                    int32_t l_752 = 0x47F82914L;
                    int32_t l_753 = (-1L);
                    int32_t l_755 = 0x48944D33L;
                    int32_t l_757[4] = {6L,6L,6L,6L};
                    int64_t l_761 = 0x5503905A3B2E21FAL;
                    struct S0 l_767 = {0x6BB0CBA2956748AEL};
                    struct S0 *l_768[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_768[i][j] = (void*)0;
                    }
                    if (p_1242->g_62[p_1242->g_501.f0][p_1242->g_270])
                    { /* block id: 309 */
                        int64_t *l_730[2][6][4] = {{{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12}},{{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12},{&p_1242->g_12,&p_1242->g_12,&p_1242->g_12,&p_1242->g_12}}};
                        int32_t *l_732 = &p_1242->g_47;
                        int i, j, k;
                        (*l_732) &= (((safe_sub_func_uint8_t_u_u((((((p_1242->g_62[p_1242->g_597.f0.f0][p_1242->g_501.f0] = (safe_mod_func_uint32_t_u_u((l_727 , (safe_rshift_func_uint16_t_u_u((((0x29L ^ l_705) != (*p_1242->g_722)) < (((((l_705 < p_1242->g_139) < 0xAAC702BE36A00070L) , l_730[0][0][2]) != &p_1242->g_12) , p_1242->g_128[2].f6)), p_1242->g_351))), 0x1C52BCE5L))) && p_1242->g_59[0][1][4]) < l_731) > l_705) , p_1242->g_534[0][0].f2), l_727.f0)) == 0x1DD8L) , p_1242->g_62[p_1242->g_501.f0][p_1242->g_270]);
                        if (l_733)
                            continue;
                    }
                    else
                    { /* block id: 313 */
                        int32_t *l_734 = &p_1242->g_62[p_1242->g_501.f0][p_1242->g_270];
                        int32_t *l_735 = &p_1242->g_597.f6;
                        int32_t *l_736 = (void*)0;
                        int32_t *l_737 = &p_1242->g_62[p_1242->g_501.f0][p_1242->g_270];
                        int32_t *l_738 = &p_1242->g_62[p_1242->g_501.f0][p_1242->g_270];
                        int32_t *l_739 = &p_1242->g_62[2][2];
                        int32_t *l_740 = &p_1242->g_62[0][1];
                        int32_t *l_741 = &p_1242->g_128[2].f6;
                        int32_t *l_742 = &p_1242->g_62[p_1242->g_501.f0][p_1242->g_270];
                        int32_t *l_743[6] = {&p_1242->g_62[2][2],&p_1242->g_62[2][2],&p_1242->g_62[2][2],&p_1242->g_62[2][2],&p_1242->g_62[2][2],&p_1242->g_62[2][2]};
                        struct S2 *l_766 = &p_1242->g_689;
                        struct S2 **l_765 = &l_766;
                        int i;
                        ++l_762;
                        (*l_765) = &p_1242->g_689;
                        (*p_1242->g_350) = func_67((*p_1242->g_722), (*p_1242->g_374), p_1242);
                    }
                    l_769 = l_767;
                    for (p_1242->g_689.f0 = 2; (p_1242->g_689.f0 >= 0); p_1242->g_689.f0 -= 1)
                    { /* block id: 321 */
                        union U4 *l_770 = &p_1242->g_595[0][3][1];
                        union U4 **l_771 = &l_770;
                        int32_t *l_772 = &p_1242->g_597.f6;
                        (*l_771) = l_770;
                        if (l_745)
                            continue;
                        if (l_746[2][2])
                            break;
                        (*l_772) &= (l_733 | 0x07L);
                    }
                }
                (*p_1242->g_350) = func_67(((safe_mul_func_int8_t_s_s(0x2BL, (((*l_787) = (safe_sub_func_int32_t_s_s(l_705, (((*l_786) = (l_758 >= ((l_779[5][0] = l_777) == ((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((p_1242->g_645[2].f7.f0 , ((0xE04702D6CB0F7B09L < (((safe_rshift_func_uint8_t_u_u(((6UL > (l_751[3][4][0] = (0x730BL >= (((&l_731 != &l_731) , l_747) & l_746[1][8])))) || p_1242->g_459), 2)) > 18446744073709551615UL) < 3L)) != 0x2CL)) , p_1242->g_501.f0) && (-1L)), l_748[4][5][3])), l_754)) ^ 0x58FF05B2L) | 0UL) , p_1242->g_538)))) , p_1242->g_595[0][3][1].f0.f1)))) > p_1242->g_689.f0))) , l_745), (*p_1242->g_374), p_1242);
                if (l_747)
                    break;
                for (l_769.f0 = 0; (l_769.f0 <= 2); l_769.f0 += 1)
                { /* block id: 336 */
                    int32_t l_791 = 0x08A7B2E5L;
                    int32_t l_792 = 0x254951FCL;
                    int32_t l_793 = 0x3DA6E698L;
                    int32_t l_794[6];
                    uint8_t l_798 = 252UL;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_794[i] = (-1L);
                    for (p_1242->g_311 = 0; (p_1242->g_311 <= 0); p_1242->g_311 += 1)
                    { /* block id: 339 */
                        int32_t l_788[8][2] = {{0x1D1B5CC9L,0x02ECEA1AL},{0x1D1B5CC9L,0x02ECEA1AL},{0x1D1B5CC9L,0x02ECEA1AL},{0x1D1B5CC9L,0x02ECEA1AL},{0x1D1B5CC9L,0x02ECEA1AL},{0x1D1B5CC9L,0x02ECEA1AL},{0x1D1B5CC9L,0x02ECEA1AL},{0x1D1B5CC9L,0x02ECEA1AL}};
                        int32_t *l_789 = &l_746[1][8];
                        int32_t *l_790[2];
                        uint8_t l_801 = 0x3FL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_790[i] = &l_788[0][1];
                        l_795++;
                        l_798--;
                        --l_801;
                    }
                }
            }
            p_1242->g_47 |= (((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((p_1242->g_597.f1 , ((safe_add_func_uint8_t_u_u(((void*)0 != l_810), ((*l_811) ^= 0UL))) || l_795)), ((l_746[1][8] < ((*l_822) = (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((l_769.f0 && ((*l_821) = ((((l_745 |= ((safe_mod_func_int64_t_s_s(7L, (-5L))) < 0x01L)) > p_1242->g_541.f0.f1) ^ 0x303EL) >= p_1242->g_597.f1))), l_795)) < 6L), (-1L))), 0x5DB52EC0L)))) , l_733))) <= l_795), 4294967291UL)) || 0x257BF84DL) || p_1242->g_645[2].f6);
            l_748[4][5][3] = ((safe_mul_func_uint8_t_u_u(((((((0x42F2L & (safe_mod_func_uint64_t_u_u(l_754, p_1242->g_595[0][3][1].f0.f1))) , p_1242->g_128[2].f5) > (((*l_840) = (safe_div_func_int64_t_s_s((+(safe_mul_func_uint16_t_u_u(((l_820 != l_820) > ((*p_1242->g_722) < 0x1979BB03L)), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_751[1][2][0] , 0UL), p_1242->g_128[2].f5)), 13)), 15))))), 0x1265FB11662F2C71L))) == 0x09L)) , p_1242->g_595[0][3][1].f0.f4) && l_841) | l_748[6][2][2]), p_1242->g_597.f1)) >= (-5L));
        }
        for (l_769.f0 = 1; (l_769.f0 <= 6); l_769.f0 += 1)
        { /* block id: 356 */
            int8_t l_854 = 0x49L;
            int32_t l_911 = 0x4F5566C5L;
            int i;
            for (p_1242->g_654 = 0; (p_1242->g_654 <= 6); p_1242->g_654 += 1)
            { /* block id: 359 */
                int8_t *l_865 = (void*)0;
                int8_t *l_866 = &p_1242->g_139;
                int32_t l_873 = 0x7AEC473AL;
                int32_t *l_874 = &p_1242->g_47;
                uint32_t *l_903 = &p_1242->g_526;
                int8_t *l_906 = &l_854;
                int16_t *l_908 = &l_907;
                int32_t l_909 = 0x03B319FBL;
                uint8_t l_910 = 0x1EL;
                int32_t *l_912[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                (*p_1242->g_350) = &l_751[4][0][0];
                (*l_874) ^= (safe_lshift_func_uint16_t_u_s((((((safe_sub_func_uint16_t_u_u((func_23(((l_873 = ((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(l_854, (p_1242->g_538 == l_777))) >= ((*l_811) &= l_769.f0)) >= ((p_1242->g_595[1][4][2] , ((((p_1242->g_645[2].f2 >= (0xD4D4L || (safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((*l_866) = (safe_lshift_func_int16_t_s_s(p_1242->g_654, 3))) && ((+(((**p_1242->g_350) ^= (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((l_873 > l_748[5][0][1]), p_1242->g_10.f0)) & l_754), 6)), p_1242->g_595[0][3][1].f0.f3))) == l_748[6][4][3])) && (**p_1242->g_350))), p_1242->g_62[1][0])), l_854)), l_706)), p_1242->g_128[2].f1)))) != p_1242->g_597.f1) && 18446744073709551612UL) >= l_854)) && l_854)), l_873)), l_873)) ^ l_873)) , l_873), p_1242->g_689, p_1242) , 0x8BB5L), 0x377EL)) >= l_754) ^ p_1242->g_597.f5) || p_1242->g_128[2].f1) >= 0L), 8));
                l_913[0][0] |= ((safe_div_func_int16_t_s_s(((*p_1242->g_722) ^ (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((((p_1242->g_139 = l_748[6][6][1]) > ((((((safe_sub_func_uint32_t_u_u(0xD895E271L, ((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((((l_750 = ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((((safe_div_func_uint32_t_u_u((++(*l_903)), (((((~((*l_906) = (-1L))) ^ ((*l_811) = ((l_769.f0 >= ((0x2DL & (l_907 , (((((**p_1242->g_350) ^= (*l_874)) , (void*)0) != l_908) , l_909))) | l_910)) , 0UL))) || p_1242->g_90) > 2L) ^ p_1242->g_128[2].f5))) || 0x53L) && p_1242->g_689.f1), p_1242->g_10.f0)) , l_911), p_1242->g_595[0][3][1].f0.f4)), 0x1C45F13BL)), 1)) | 0x574297EBL)) >= p_1242->g_654) | (*l_874)) , (*l_874)), 0x1BE93344491D94BCL)), p_1242->g_597.f3)), (-9L))) , l_706))) , l_748[5][0][0]) & 1UL) , l_754) <= l_706) , l_854)) ^ l_911), p_1242->g_553.f0)), 4)) && (*l_874)), 1)), 0)) , l_751[9][2][1]) != l_911)), 0x621FL)) >= (*l_874));
                (*p_1242->g_350) = &l_873;
            }
            (*p_1242->g_350) = (void*)0;
            return (*p_1242->g_350);
        }
        for (p_1242->g_689.f1 = 0; (p_1242->g_689.f1 <= 2); p_1242->g_689.f1 += 1)
        { /* block id: 380 */
            uint32_t l_918 = 0UL;
            int i;
            (*p_1242->g_350) = func_67(((safe_sub_func_int8_t_s_s(p_1242->g_534[0][0].f0, (0x127080FED0C6CEA8L & (safe_lshift_func_int16_t_s_u(((void*)0 == &p_1242->g_12), 7))))) < l_918), (*p_1242->g_374), p_1242);
            (*p_1242->g_350) = (void*)0;
        }
        for (p_1242->g_689.f1 = 0; (p_1242->g_689.f1 >= 19); p_1242->g_689.f1 = safe_add_func_int16_t_s_s(p_1242->g_689.f1, 1))
        { /* block id: 386 */
            int32_t *l_921[3];
            uint8_t **l_923 = &l_811;
            uint8_t ***l_924 = &l_923;
            int i;
            for (i = 0; i < 3; i++)
                l_921[i] = &p_1242->g_62[2][2];
            l_922 = l_921[0];
            if (l_913[0][0])
                break;
            (*l_924) = l_923;
        }
    }
    l_930 = (safe_lshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(18446744073709551615UL, 0x3D79D726811E937EL)), 1));
    return l_931[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_597.f7.f0 p_1242->g_595.f0.f3 p_1242->g_459 p_1242->g_62 p_1242->g_534
 * writes: p_1242->g_441 p_1242->g_62
 */
struct S2  func_23(int64_t  p_24, struct S2  p_25, struct S5 * p_1242)
{ /* block id: 287 */
    uint16_t l_690[2][1][9] = {{{65532UL,0x77FFL,65532UL,65532UL,0x77FFL,65532UL,65532UL,0x77FFL,65532UL}},{{65532UL,0x77FFL,65532UL,65532UL,0x77FFL,65532UL,65532UL,0x77FFL,65532UL}}};
    uint8_t *l_693 = &p_1242->g_441[0][0][3];
    int32_t l_694[8][7] = {{0L,0L,1L,(-1L),0x09CFC9ACL,0x5BC1F4F9L,0x212760A2L},{0L,0L,1L,(-1L),0x09CFC9ACL,0x5BC1F4F9L,0x212760A2L},{0L,0L,1L,(-1L),0x09CFC9ACL,0x5BC1F4F9L,0x212760A2L},{0L,0L,1L,(-1L),0x09CFC9ACL,0x5BC1F4F9L,0x212760A2L},{0L,0L,1L,(-1L),0x09CFC9ACL,0x5BC1F4F9L,0x212760A2L},{0L,0L,1L,(-1L),0x09CFC9ACL,0x5BC1F4F9L,0x212760A2L},{0L,0L,1L,(-1L),0x09CFC9ACL,0x5BC1F4F9L,0x212760A2L},{0L,0L,1L,(-1L),0x09CFC9ACL,0x5BC1F4F9L,0x212760A2L}};
    struct S2 l_695 = {-9L,0x887439F2L,0xDFDBF73C8DA5E0B9L};
    struct S2 l_696 = {-1L,0x846DB5FFL,18446744073709551615UL};
    struct S0 *l_697[5] = {&p_1242->g_553,&p_1242->g_553,&p_1242->g_553,&p_1242->g_553,&p_1242->g_553};
    int32_t l_698[4][5] = {{(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L)}};
    int16_t l_699 = 8L;
    int32_t *l_700 = (void*)0;
    int32_t *l_701 = &p_1242->g_62[2][2];
    int i, j, k;
    (*l_701) ^= ((p_1242->g_597.f7.f0 < (l_694[4][6] = ((*l_693) = (l_690[0][0][6]--)))) | (l_695 , (1L >= ((p_24 & (((l_696 , l_697[1]) == ((((l_695.f0 < (l_698[0][4] = (p_25 , p_1242->g_595[0][3][1].f0.f3))) == l_699) ^ (-10L)) , l_697[0])) , 0x219B916267AF973CL)) ^ p_1242->g_459))));
    return p_1242->g_534[0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_645 p_1242->g_538 p_1242->g_10.f0 p_1242->g_534.f2 p_1242->g_654 p_1242->g_351 p_1242->g_597.f6 p_1242->g_595.f0.f6 p_1242->g_441 p_1242->g_350 p_1242->g_45 p_1242->g_130 p_1242->g_589 p_1242->g_47 p_1242->g_597.f3
 * writes: p_1242->g_597.f6 p_1242->g_10.f0 p_1242->g_526 p_1242->g_654 p_1242->g_538 p_1242->g_45 p_1242->g_459 p_1242->g_130 p_1242->g_597.f3
 */
struct S2  func_28(int64_t  p_29, int16_t  p_30, struct S5 * p_1242)
{ /* block id: 259 */
    struct S0 l_633 = {1UL};
    uint64_t *l_634[1];
    int32_t *l_648 = &p_1242->g_597.f6;
    struct S0 **l_651 = &p_1242->g_375;
    uint32_t *l_652 = &p_1242->g_526;
    uint32_t *l_653 = &p_1242->g_654;
    uint64_t **l_655[9][1];
    struct S3 *l_674 = &p_1242->g_501;
    int32_t l_680 = 0x4ECE05D9L;
    int32_t l_681[10][1][7] = {{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}},{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}},{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}},{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}},{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}},{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}},{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}},{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}},{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}},{{0x55D5C1C6L,(-1L),(-1L),0x55D5C1C6L,7L,0x6267A102L,0x6267A102L}}};
    int8_t l_682[7][9] = {{(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L)},{(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L)},{(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L)},{(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L)},{(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L)},{(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L)},{(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L)}};
    int32_t l_683 = 0x155172FFL;
    union U4 *l_687 = &p_1242->g_595[0][1][0];
    struct S2 l_688[2][1][4] = {{{{-9L,0x772A1A49L,0xBF3BBFEB7587DF0AL},{-9L,0x772A1A49L,0xBF3BBFEB7587DF0AL},{-9L,0x772A1A49L,0xBF3BBFEB7587DF0AL},{-9L,0x772A1A49L,0xBF3BBFEB7587DF0AL}}},{{{-9L,0x772A1A49L,0xBF3BBFEB7587DF0AL},{-9L,0x772A1A49L,0xBF3BBFEB7587DF0AL},{-9L,0x772A1A49L,0xBF3BBFEB7587DF0AL},{-9L,0x772A1A49L,0xBF3BBFEB7587DF0AL}}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_634[i] = &p_1242->g_128[2].f5;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_655[i][j] = &p_1242->g_538;
    }
    l_633 = l_633;
    if (((((((((((l_634[0] == (p_1242->g_538 = ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((l_633 , p_1242->g_645[2]) , ((*l_653) ^= ((l_634[0] == ((((safe_div_func_int32_t_s_s(((*l_648) = l_633.f0), (((*p_1242->g_538) &= 0x510B491869137BB0L) || (safe_mod_func_uint32_t_u_u(((*l_652) = ((&p_1242->g_375 == l_651) | 9UL)), p_1242->g_534[0][0].f2))))) <= p_29) ^ 0xF8L) , l_634[0])) != (-1L)))), p_29)), p_1242->g_351)) , (*l_648)), p_1242->g_595[0][3][1].f0.f6)) >= p_1242->g_351), 0x4ECF6D83L)), 15)) , (void*)0))) == p_30) , p_1242->g_597.f6) == l_633.f0) , (-1L)) & p_1242->g_441[0][1][5]) , 0xCB8B16C27E2894F6L) <= l_633.f0) && 0x398A9D9FL) || 0x3F1AL))
    { /* block id: 266 */
        struct S2 l_656 = {-10L,0x6E17A9ECL,0x487ECB0C979A593BL};
        return l_656;
    }
    else
    { /* block id: 268 */
        int32_t *l_657 = &p_1242->g_47;
        struct S0 *l_662 = &l_633;
        uint16_t *l_667 = (void*)0;
        uint16_t *l_668 = &p_1242->g_459;
        uint16_t *l_669 = &p_1242->g_130;
        (*p_1242->g_350) = l_657;
        (*p_1242->g_350) = l_653;
        (*p_1242->g_45) ^= ((safe_add_func_int32_t_s_s(1L, ((safe_mul_func_int8_t_s_s((((void*)0 != l_662) <= (+(safe_lshift_func_uint8_t_u_s(p_29, (((void*)0 == (*p_1242->g_350)) | ((*l_648) = (safe_add_func_int64_t_s_s(((((*l_668) = p_29) > ((*l_669)++)) < (((((0x5647E141L <= (safe_rshift_func_int8_t_s_s((&l_648 == &p_1242->g_45), p_29))) != p_30) , p_1242->g_589) , &p_1242->g_375) != &l_662)), p_29)))))))), (*l_657))) || (*l_648)))) ^ p_30);
        (*l_648) ^= (*l_657);
    }
    (*p_1242->g_45) ^= ((void*)0 == l_674);
    for (p_1242->g_597.f3 = 26; (p_1242->g_597.f3 >= 23); p_1242->g_597.f3--)
    { /* block id: 280 */
        int32_t *l_677 = &p_1242->g_62[2][2];
        int32_t *l_678 = &p_1242->g_47;
        int32_t *l_679[8][1][9] = {{{&p_1242->g_62[2][0],(void*)0,(void*)0,&p_1242->g_47,(void*)0,&p_1242->g_47,(void*)0,(void*)0,&p_1242->g_62[2][0]}},{{&p_1242->g_62[2][0],(void*)0,(void*)0,&p_1242->g_47,(void*)0,&p_1242->g_47,(void*)0,(void*)0,&p_1242->g_62[2][0]}},{{&p_1242->g_62[2][0],(void*)0,(void*)0,&p_1242->g_47,(void*)0,&p_1242->g_47,(void*)0,(void*)0,&p_1242->g_62[2][0]}},{{&p_1242->g_62[2][0],(void*)0,(void*)0,&p_1242->g_47,(void*)0,&p_1242->g_47,(void*)0,(void*)0,&p_1242->g_62[2][0]}},{{&p_1242->g_62[2][0],(void*)0,(void*)0,&p_1242->g_47,(void*)0,&p_1242->g_47,(void*)0,(void*)0,&p_1242->g_62[2][0]}},{{&p_1242->g_62[2][0],(void*)0,(void*)0,&p_1242->g_47,(void*)0,&p_1242->g_47,(void*)0,(void*)0,&p_1242->g_62[2][0]}},{{&p_1242->g_62[2][0],(void*)0,(void*)0,&p_1242->g_47,(void*)0,&p_1242->g_47,(void*)0,(void*)0,&p_1242->g_62[2][0]}},{{&p_1242->g_62[2][0],(void*)0,(void*)0,&p_1242->g_47,(void*)0,&p_1242->g_47,(void*)0,(void*)0,&p_1242->g_62[2][0]}}};
        uint64_t l_684[8][5] = {{0x0F3386AA04AE61ACL,0xC57F2F451F0F8366L,18446744073709551615UL,0xF36047254026C756L,18446744073709551610UL},{0x0F3386AA04AE61ACL,0xC57F2F451F0F8366L,18446744073709551615UL,0xF36047254026C756L,18446744073709551610UL},{0x0F3386AA04AE61ACL,0xC57F2F451F0F8366L,18446744073709551615UL,0xF36047254026C756L,18446744073709551610UL},{0x0F3386AA04AE61ACL,0xC57F2F451F0F8366L,18446744073709551615UL,0xF36047254026C756L,18446744073709551610UL},{0x0F3386AA04AE61ACL,0xC57F2F451F0F8366L,18446744073709551615UL,0xF36047254026C756L,18446744073709551610UL},{0x0F3386AA04AE61ACL,0xC57F2F451F0F8366L,18446744073709551615UL,0xF36047254026C756L,18446744073709551610UL},{0x0F3386AA04AE61ACL,0xC57F2F451F0F8366L,18446744073709551615UL,0xF36047254026C756L,18446744073709551610UL},{0x0F3386AA04AE61ACL,0xC57F2F451F0F8366L,18446744073709551615UL,0xF36047254026C756L,18446744073709551610UL}};
        int i, j, k;
        l_684[6][3]++;
        l_687 = &p_1242->g_595[2][2][0];
        if ((*l_648))
            continue;
    }
    return l_688[1][0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_62
 * writes: p_1242->g_62
 */
int64_t  func_31(int16_t  p_32, struct S5 * p_1242)
{ /* block id: 255 */
    int32_t *l_631 = &p_1242->g_62[2][2];
    (*l_631) = (-2L);
    return (*l_631);
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_47 p_1242->g_128.f7.f0 p_1242->g_128.f1 p_1242->g_526 p_1242->g_459 p_1242->g_443 p_1242->g_444 p_1242->g_128 p_1242->g_597.f3 p_1242->g_501.f0 p_1242->g_541.f0.f7.f0 p_1242->g_441 p_1242->g_270 p_1242->g_589 p_1242->g_541.f0.f2 p_1242->g_10.f0
 * writes: p_1242->g_47 p_1242->g_597 p_1242->g_501.f0 p_1242->g_441 p_1242->g_526
 */
uint64_t  func_35(int32_t  p_36, struct S0 * p_37, int64_t  p_38, int32_t * p_39, uint32_t  p_40, struct S5 * p_1242)
{ /* block id: 236 */
    uint16_t l_563 = 1UL;
    uint8_t l_576 = 0x6FL;
    int32_t l_577[10] = {1L,0x21D029E4L,0x5803BDCCL,0x21D029E4L,1L,1L,0x21D029E4L,0x5803BDCCL,0x21D029E4L,1L};
    int32_t l_579 = 0x112E5442L;
    int32_t l_580 = 0x72BC2556L;
    int32_t l_588 = 0x63E2359CL;
    int8_t l_590[3];
    uint32_t l_591 = 1UL;
    union U4 *l_594 = &p_1242->g_595[0][3][1];
    uint32_t *l_600 = &p_1242->g_501.f0;
    int64_t *l_607 = (void*)0;
    struct S1 *l_610 = &p_1242->g_128[2];
    uint8_t *l_627 = &p_1242->g_441[0][0][1];
    uint32_t *l_628 = (void*)0;
    uint32_t *l_629 = &p_1242->g_526;
    uint32_t l_630 = 0xDCE63773L;
    int i;
    for (i = 0; i < 3; i++)
        l_590[i] = 0L;
    for (p_1242->g_47 = (-20); (p_1242->g_47 >= (-28)); p_1242->g_47 = safe_sub_func_uint32_t_u_u(p_1242->g_47, 1))
    { /* block id: 239 */
        uint64_t l_558 = 0UL;
        int8_t *l_578[2][4];
        int32_t *l_581 = &l_577[6];
        int32_t l_582 = 0x689F838EL;
        int32_t *l_583 = &l_582;
        int32_t *l_584 = &l_580;
        int32_t *l_585 = &l_580;
        int32_t l_586[7][3] = {{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}};
        int32_t *l_587[1];
        union U4 **l_596 = &l_594;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_578[i][j] = &p_1242->g_139;
        }
        for (i = 0; i < 1; i++)
            l_587[i] = (void*)0;
        l_580 &= ((safe_sub_func_int8_t_s_s(l_558, ((safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((l_579 = ((l_577[8] = ((((l_563 |= l_558) , (p_38 == (safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((l_563 > 0xA498F4F9F646E29CL) , (((safe_mod_func_int8_t_s_s(l_576, p_40)) , 0x11L) >= l_576)), p_40)), p_1242->g_128[2].f7.f0)), 7)), p_40)) == p_1242->g_128[2].f1), 0xC098572FL)))) < 0xFB00829F175F9227L) && p_38)) , l_558)), p_1242->g_526)), 9L)) , p_1242->g_459))) | l_576);
        ++l_591;
        (*l_596) = l_594;
    }
    p_1242->g_597 = (**p_1242->g_443);
    (*p_39) = ((p_36 , ((((*l_600) = (safe_add_func_uint8_t_u_u(p_1242->g_597.f3, p_1242->g_501.f0))) , p_1242->g_541.f0.f7.f0) != (0x68B2CCC32DAE2859L > (l_577[5] &= (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_1242->g_441[0][0][6], 0xCCEFL)), (safe_add_func_int8_t_s_s(l_580, p_1242->g_270)))))))) >= p_1242->g_589);
    (*p_39) = (0x29L > (((safe_mul_func_uint16_t_u_u(((void*)0 == l_610), (safe_lshift_func_uint8_t_u_u((0x2C27984CL && 0UL), ((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((*l_629) = (safe_lshift_func_int16_t_s_s(((l_588 != ((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((void*)0 != l_610), (((((safe_mod_func_int16_t_s_s((((*l_627) = 0x29L) && p_1242->g_541.f0.f2), 0x1CECL)) >= 0x03L) > 0x53L) != p_1242->g_597.f3) & p_1242->g_597.f3))), 0x3AC5L)) && p_36)) >= p_38), p_1242->g_47))), p_1242->g_10.f0)), 2UL)), p_36)) & l_630))))) <= p_36) == 0x0ABC3865L));
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_10.f0 p_1242->g_47 p_1242->g_59 p_1242->g_62 p_1242->g_12 p_1242->g_90 p_1242->g_128 p_1242->g_130 p_1242->g_139 p_1242->g_10 p_1242->g_45 p_1242->g_270 p_1242->g_350 p_1242->g_374 p_1242->g_289 p_1242->g_311 p_1242->g_438 p_1242->g_441 p_1242->g_443 p_1242->g_459 p_1242->g_351 p_1242->g_498 p_1242->g_500 p_1242->g_375 p_1242->g_534 p_1242->g_538 p_1242->g_541 p_1242->g_501.f1
 * writes: p_1242->g_10.f0 p_1242->g_59 p_1242->g_12 p_1242->g_47 p_1242->g_90 p_1242->g_130 p_1242->g_128.f6 p_1242->g_45 p_1242->g_289 p_1242->g_62 p_1242->g_139 p_1242->g_311 p_1242->g_128.f0.f0 p_1242->g_375 p_1242->g_441 p_1242->g_444 p_1242->g_459 p_1242->g_526 p_1242->g_501.f1
 */
int32_t  func_41(int32_t * p_42, int64_t  p_43, int32_t * p_44, struct S5 * p_1242)
{ /* block id: 10 */
    int32_t l_54 = 6L;
    int32_t l_452 = 6L;
    struct S0 *l_479 = &p_1242->g_128[2].f0;
    struct S3 l_497[3][2] = {{{0xAC939F18L,0xFC7B5BDDL},{0xAC939F18L,0xFC7B5BDDL}},{{0xAC939F18L,0xFC7B5BDDL},{0xAC939F18L,0xFC7B5BDDL}},{{0xAC939F18L,0xFC7B5BDDL},{0xAC939F18L,0xFC7B5BDDL}}};
    struct S3 *l_502 = &p_1242->g_501;
    int32_t l_521 = 0x2BAC11EBL;
    int32_t *l_551 = &l_521;
    int i, j;
    for (p_1242->g_10.f0 = 0; (p_1242->g_10.f0 > 7); p_1242->g_10.f0 = safe_add_func_int32_t_s_s(p_1242->g_10.f0, 4))
    { /* block id: 13 */
        uint16_t l_439[3];
        int32_t l_442[5];
        int i;
        for (i = 0; i < 3; i++)
            l_439[i] = 0xA62CL;
        for (i = 0; i < 5; i++)
            l_442[i] = 1L;
        if ((*p_44))
        { /* block id: 14 */
            int32_t *l_50 = (void*)0;
            int32_t *l_51 = &p_1242->g_47;
            int32_t *l_52 = &p_1242->g_47;
            int32_t *l_53 = &p_1242->g_47;
            int32_t *l_55 = &p_1242->g_47;
            int32_t *l_56 = &p_1242->g_47;
            int32_t *l_57 = &p_1242->g_47;
            int32_t *l_58 = (void*)0;
            int32_t l_458 = 0x137B0518L;
            struct S2 l_472 = {0L,0x7F79F794L,4UL};
            p_1242->g_59[1][0][5]--;
            if (p_1242->g_62[2][2])
            { /* block id: 16 */
                uint32_t l_92 = 1UL;
                struct S0 l_425 = {0xDAA674DBE517A315L};
                int64_t *l_431 = &p_1242->g_12;
                int32_t *l_445 = (void*)0;
                int32_t *l_446 = (void*)0;
                int32_t *l_447 = (void*)0;
                int32_t *l_448 = &l_442[0];
                int32_t *l_449 = &p_1242->g_62[0][2];
                int32_t *l_450 = &p_1242->g_62[2][2];
                int32_t *l_451 = &p_1242->g_62[2][2];
                int32_t *l_453 = &p_1242->g_47;
                int32_t *l_454 = &l_442[4];
                int32_t *l_455 = &l_452;
                int32_t *l_456 = &l_442[1];
                int32_t *l_457[4][10] = {{&l_452,&p_1242->g_62[0][0],&l_442[0],&p_1242->g_62[1][2],&l_442[2],&l_452,&p_1242->g_62[1][2],&l_452,&p_1242->g_62[1][2],&l_452},{&l_452,&p_1242->g_62[0][0],&l_442[0],&p_1242->g_62[1][2],&l_442[2],&l_452,&p_1242->g_62[1][2],&l_452,&p_1242->g_62[1][2],&l_452},{&l_452,&p_1242->g_62[0][0],&l_442[0],&p_1242->g_62[1][2],&l_442[2],&l_452,&p_1242->g_62[1][2],&l_452,&p_1242->g_62[1][2],&l_452},{&l_452,&p_1242->g_62[0][0],&l_442[0],&p_1242->g_62[1][2],&l_442[2],&l_452,&p_1242->g_62[1][2],&l_452,&p_1242->g_62[1][2],&l_452}};
                int i, j;
                for (p_1242->g_12 = (-28); (p_1242->g_12 >= 22); p_1242->g_12 = safe_add_func_int64_t_s_s(p_1242->g_12, 7))
                { /* block id: 19 */
                    for (l_54 = 2; (l_54 >= 0); l_54 -= 1)
                    { /* block id: 22 */
                        int i, j;
                        (*l_55) = (p_1242->g_62[l_54][l_54] , 0L);
                    }
                }
                for (p_1242->g_12 = (-28); (p_1242->g_12 > (-9)); p_1242->g_12 = safe_add_func_uint8_t_u_u(p_1242->g_12, 9))
                { /* block id: 28 */
                    uint64_t l_80 = 0UL;
                    int16_t *l_89[1][3][2] = {{{&p_1242->g_90,&p_1242->g_90},{&p_1242->g_90,&p_1242->g_90},{&p_1242->g_90,&p_1242->g_90}}};
                    struct S0 *l_91[9][9] = {{(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10},{(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10},{(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10},{(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10},{(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10},{(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10},{(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10},{(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10},{(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,(void*)0,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10,&p_1242->g_10}};
                    uint16_t *l_437[8][6][5] = {{{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351}},{{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351}},{{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351}},{{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351}},{{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351}},{{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351}},{{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351}},{{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351},{&p_1242->g_351,&p_1242->g_130,&p_1242->g_130,&p_1242->g_351,&p_1242->g_351}}};
                    uint16_t **l_436 = &l_437[4][5][0];
                    uint8_t *l_440 = &p_1242->g_441[0][1][5];
                    int i, j, k;
                    (*p_1242->g_350) = func_67((*p_44), func_70(p_42, ((p_1242->g_47 && (safe_lshift_func_uint8_t_u_u(p_43, p_43))) || 0xC3L), ((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(l_80, (p_1242->g_62[0][1] && (safe_add_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s(((p_1242->g_90 = 4L) && l_54), 0x5BL)), (-1L))), 0x8E38L)) , (void*)0) == l_91[1][5]), p_1242->g_62[2][0]))))), l_92)) & 4294967291UL), p_1242), p_1242);
                    if ((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(((+(safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((l_80 , ((*l_440) &= (((l_54 | (((safe_mod_func_uint16_t_u_u(((l_425 , (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(((l_431 != l_431) <= (safe_mod_func_uint32_t_u_u(((((safe_mod_func_int16_t_s_s(p_1242->g_311, p_1242->g_311)) == (+(((*l_436) = &p_1242->g_351) == &p_1242->g_351))) && l_54) , 0x85501581L), p_1242->g_90))))) , p_1242->g_90), p_1242->g_311)), 253UL))) || p_1242->g_438), 0xD048L)) > p_43) < l_439[2])) || l_425.f0) > 0x1CA73F811DCE77FBL))), p_1242->g_128[2].f0.f0)) != l_442[0]), 6)), l_92))) <= p_43), p_1242->g_128[2].f4)) || p_43), l_54)), l_92)))
                    { /* block id: 176 */
                        (*p_1242->g_443) = &p_1242->g_128[0];
                    }
                    else
                    { /* block id: 178 */
                        if (l_425.f0)
                            break;
                    }
                    if ((*p_44))
                        break;
                    l_58 = func_67((*l_56), func_70(l_56, (*l_56), (*l_55), p_1242), p_1242);
                }
                --p_1242->g_459;
            }
            else
            { /* block id: 185 */
                uint8_t *l_471 = &p_1242->g_441[0][0][3];
                uint8_t **l_470 = &l_471;
                struct S0 **l_475 = &p_1242->g_375;
                int32_t l_478 = (-7L);
                int32_t **l_481 = &l_58;
                (*l_481) = ((*p_1242->g_350) = func_67((((safe_sub_func_int32_t_s_s(1L, (safe_rshift_func_uint16_t_u_u((!(safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((((p_43 > (1UL | (((*l_470) = &p_1242->g_311) != (void*)0))) == ((l_472 , ((safe_sub_func_uint64_t_u_u(((void*)0 == l_475), ((safe_rshift_func_uint8_t_u_s(l_478, p_1242->g_90)) || p_1242->g_62[2][1]))) && l_54)) , p_1242->g_311)) && 0x34FAL), 0x5833DC338EB4A752L)), 1UL))), 1)))) ^ (*l_55)) == p_43), l_479, p_1242));
            }
            return p_43;
        }
        else
        { /* block id: 191 */
            (*p_44) &= ((void*)0 == &l_452);
            return p_1242->g_351;
        }
    }
    for (p_43 = 0; (p_43 == (-23)); p_43--)
    { /* block id: 198 */
        int64_t l_513[7] = {0x42C8A954A38A980BL,0x361F9D01FB5084BCL,0x42C8A954A38A980BL,0x42C8A954A38A980BL,0x361F9D01FB5084BCL,0x42C8A954A38A980BL,0x42C8A954A38A980BL};
        struct S0 *l_533 = &p_1242->g_10;
        struct S2 l_542[3][4] = {{{0x0B25DE4FL,4294967295UL,18446744073709551615UL},{0x4DDED7C1L,0xAEA30C9EL,1UL},{0x0B25DE4FL,4294967295UL,18446744073709551615UL},{0x0B25DE4FL,4294967295UL,18446744073709551615UL}},{{0x0B25DE4FL,4294967295UL,18446744073709551615UL},{0x4DDED7C1L,0xAEA30C9EL,1UL},{0x0B25DE4FL,4294967295UL,18446744073709551615UL},{0x0B25DE4FL,4294967295UL,18446744073709551615UL}},{{0x0B25DE4FL,4294967295UL,18446744073709551615UL},{0x4DDED7C1L,0xAEA30C9EL,1UL},{0x0B25DE4FL,4294967295UL,18446744073709551615UL},{0x0B25DE4FL,4294967295UL,18446744073709551615UL}}};
        int i, j;
        for (p_1242->g_12 = 0; (p_1242->g_12 != 22); p_1242->g_12++)
        { /* block id: 201 */
            uint8_t *l_487 = &p_1242->g_311;
            int32_t l_490 = 1L;
            int32_t l_491 = 0x2BB05021L;
            int16_t l_492 = 0x68EEL;
            int32_t l_518[4];
            uint16_t *l_522 = (void*)0;
            uint16_t *l_523 = (void*)0;
            uint16_t *l_524 = &p_1242->g_459;
            uint32_t *l_525 = &p_1242->g_526;
            int8_t *l_527 = (void*)0;
            int16_t l_528 = 0x7617L;
            uint64_t *l_537 = &p_1242->g_128[2].f5;
            int16_t *l_539[5];
            int32_t *l_540 = &l_490;
            int i;
            for (i = 0; i < 4; i++)
                l_518[i] = 1L;
            for (i = 0; i < 5; i++)
                l_539[i] = &p_1242->g_90;
            (*p_44) = ((safe_unary_minus_func_uint8_t_u(((l_490 = (--(*l_487))) <= ((((l_491 = ((void*)0 != l_487)) || (l_492 && ((safe_mod_func_uint64_t_u_u((((safe_div_func_uint64_t_u_u(((l_497[2][1] , p_1242->g_498[3][0]) == (l_502 = p_1242->g_500)), 7UL)) ^ ((safe_sub_func_uint16_t_u_u((l_452 >= (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((p_1242->g_128[2].f2 & p_43), 5)), 0x2BL))), p_43)) > l_491)) || 0x1018L), p_1242->g_62[2][1])) && (-10L)))) , l_491) & l_54)))) >= p_43);
            (*p_1242->g_350) = func_67((l_497[2][1].f1 == (safe_rshift_func_uint8_t_u_u(p_1242->g_128[2].f4, ((((p_1242->g_139 = (((safe_lshift_func_int16_t_s_s(l_513[6], 12)) && 0x80L) != ((*l_525) = (((((*l_524) = (0x03BA10BED8832B16L < (((safe_div_func_int16_t_s_s(((p_1242->g_130 |= l_497[2][1].f1) >= (l_518[1] ^ (((((*p_44) = (safe_mod_func_uint8_t_u_u(l_521, p_1242->g_59[1][0][5]))) & l_513[1]) || l_513[6]) < 18446744073709551611UL))), 65533UL)) , (void*)0) != (void*)0))) || 0x24D6L) , 0L) && l_491)))) | 0UL) , 0x74E8L) ^ l_528)))), (*p_1242->g_374), p_1242);
            (*p_1242->g_350) = p_42;
            (*l_540) |= (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((l_491 = (((void*)0 == l_533) >= (p_1242->g_139 & (((void*)0 == &p_1242->g_499[2]) > ((((*p_44) = ((((p_1242->g_534[0][0] , (((+(safe_div_func_int16_t_s_s(0x70D7L, p_1242->g_128[2].f4))) & (0x228C27544DE27A1DL < l_513[6])) , l_537)) == p_1242->g_538) != (*p_44)) >= p_1242->g_128[2].f0.f0)) && l_497[2][1].f0) & l_513[6]))))), l_518[1])), p_43));
        }
        (*p_44) = ((((l_54 >= 0x0727L) , p_1242->g_541) , (l_542[0][0] , (0x4AC2L && (1UL != l_452)))) > (safe_lshift_func_int8_t_s_u(0L, 4)));
    }
    for (l_54 = 20; (l_54 > 6); --l_54)
    { /* block id: 222 */
        for (p_1242->g_501.f1 = (-9); (p_1242->g_501.f1 >= 14); ++p_1242->g_501.f1)
        { /* block id: 225 */
            for (p_1242->g_12 = 0; (p_1242->g_12 < (-18)); p_1242->g_12--)
            { /* block id: 228 */
                (*p_44) ^= 0x1714C988L;
            }
        }
    }
    (*l_551) = ((*p_44) = l_521);
    return p_1242->g_128[2].f6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_47 p_1242->g_45 p_1242->g_59 p_1242->g_128.f3 p_1242->g_128.f1 p_1242->g_128.f8 p_1242->g_128.f0.f0 p_1242->g_62 p_1242->g_130 p_1242->g_12 p_1242->g_90 p_1242->g_350 p_1242->g_374 p_1242->g_289 p_1242->g_128.f6
 * writes: p_1242->g_47 p_1242->g_45 p_1242->g_289 p_1242->g_62 p_1242->g_90 p_1242->g_139 p_1242->g_311 p_1242->g_128.f0.f0 p_1242->g_375 p_1242->g_128.f6
 */
int32_t * func_67(int32_t  p_68, struct S0 * p_69, struct S5 * p_1242)
{ /* block id: 90 */
    uint64_t l_280[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    int32_t l_290 = 2L;
    int32_t l_370[8][3][4] = {{{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L}},{{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L}},{{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L}},{{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L}},{{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L}},{{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L}},{{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L}},{{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L},{0x45DA27BDL,0x09782121L,(-10L),5L}}};
    int32_t l_371 = (-3L);
    int64_t l_395[8][4] = {{0x7FB04761E1F90E66L,0x7FB04761E1F90E66L,0x4055DD7B725A2E18L,0L},{0x7FB04761E1F90E66L,0x7FB04761E1F90E66L,0x4055DD7B725A2E18L,0L},{0x7FB04761E1F90E66L,0x7FB04761E1F90E66L,0x4055DD7B725A2E18L,0L},{0x7FB04761E1F90E66L,0x7FB04761E1F90E66L,0x4055DD7B725A2E18L,0L},{0x7FB04761E1F90E66L,0x7FB04761E1F90E66L,0x4055DD7B725A2E18L,0L},{0x7FB04761E1F90E66L,0x7FB04761E1F90E66L,0x4055DD7B725A2E18L,0L},{0x7FB04761E1F90E66L,0x7FB04761E1F90E66L,0x4055DD7B725A2E18L,0L},{0x7FB04761E1F90E66L,0x7FB04761E1F90E66L,0x4055DD7B725A2E18L,0L}};
    int8_t l_397[8] = {(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L};
    int i, j, k;
    for (p_1242->g_47 = 2; (p_1242->g_47 >= 0); p_1242->g_47 -= 1)
    { /* block id: 93 */
        int16_t *l_285 = &p_1242->g_270;
        int16_t *l_286 = (void*)0;
        int32_t **l_287 = &p_1242->g_45;
        uint32_t *l_288 = &p_1242->g_289;
        int32_t l_291 = (-5L);
        int32_t *l_292 = &p_1242->g_62[2][2];
        (*l_292) = (l_280[3] , ((p_68 | ((((((safe_lshift_func_int16_t_s_s(p_68, 5)) > (safe_mod_func_int16_t_s_s(p_68, (l_290 = ((1L == ((-1L) != (((l_286 = l_285) != (((*l_288) = (0x30L & ((((*l_287) = &p_1242->g_47) != (void*)0) & p_68))) , (void*)0)) == p_68))) || (**l_287)))))) <= p_68) , 0L) > l_291) | l_280[2])) >= 0x24L));
        for (p_68 = 0; (p_68 <= 2); p_68 += 1)
        { /* block id: 101 */
            int32_t l_333[6] = {0x1893A116L,0x7D797E41L,0x1893A116L,0x1893A116L,0x7D797E41L,0x1893A116L};
            int32_t **l_349[7] = {&l_292,&l_292,&l_292,&l_292,&l_292,&l_292,&l_292};
            int i, j;
            if (l_290)
                break;
            p_1242->g_62[p_1242->g_47][p_68] = p_68;
            for (p_1242->g_90 = 1; (p_1242->g_90 <= 4); p_1242->g_90 += 1)
            { /* block id: 106 */
                struct S3 l_293 = {4294967295UL,4294967286UL};
                int32_t l_331 = 0x3C8CE0E9L;
                int16_t l_369 = 0x5C9CL;
                uint16_t *l_384 = (void*)0;
                struct S2 l_396[4][9][2] = {{{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}}},{{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}}},{{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}}},{{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}},{{0x74D97E93L,1UL,18446744073709551615UL},{0x14DE712EL,0xE70DB338L,1UL}}}};
                int i, j, k;
                for (p_1242->g_139 = 0; (p_1242->g_139 <= 4); p_1242->g_139 += 1)
                { /* block id: 109 */
                    int64_t l_301 = 0x4849AF2B4C23AA35L;
                    uint32_t *l_330 = &p_1242->g_289;
                    int i, j, k;
                    for (l_290 = 0; (l_290 <= 8); l_290 += 1)
                    { /* block id: 112 */
                        struct S3 *l_294 = &l_293;
                        (*l_294) = l_293;
                        return &p_1242->g_47;
                    }
                    for (l_291 = 0; (l_291 <= 2); l_291 += 1)
                    { /* block id: 118 */
                        int32_t l_308 = 4L;
                        uint64_t *l_320 = &p_1242->g_128[2].f0.f0;
                        uint64_t *l_325 = &l_280[3];
                        uint32_t l_332[6][7][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
                        int i, j, k;
                        l_308 ^= ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(((p_1242->g_59[p_1242->g_47][p_68][(p_68 + 2)] >= (**l_287)) , ((safe_sub_func_int64_t_s_s(l_301, p_1242->g_128[2].f3)) < (safe_mul_func_int16_t_s_s((((0UL >= (safe_add_func_int64_t_s_s(p_1242->g_128[2].f1, (safe_lshift_func_uint8_t_u_s(l_301, 3))))) > (l_280[4] , (0x7F8652C3L <= p_1242->g_128[2].f8))) != p_1242->g_47), p_68)))), p_68)) <= 0x1EE3F2ED9BBE0326L), 2)) == p_68);
                        l_333[4] |= ((safe_div_func_uint8_t_u_u((p_1242->g_311 = 6UL), (((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((((((safe_sub_func_int16_t_s_s(((+(p_68 != (((+((((*l_320)--) <= ((safe_sub_func_int16_t_s_s((((*l_325)--) != ((safe_add_func_uint64_t_u_u(p_1242->g_62[p_1242->g_47][p_68], 0UL)) <= 1UL)), l_293.f1)) ^ (((l_330 == &p_1242->g_289) && p_68) > 18446744073709551609UL))) < p_68)) , l_331) , p_68))) > p_1242->g_130), 0L)) , l_290) && (*l_292)) > p_68) > p_68) && p_68), p_1242->g_128[2].f8)), l_308)), p_68)) || l_301) ^ 0x70L))) <= l_332[4][6][1]);
                    }
                }
                for (p_1242->g_311 = 0; (p_1242->g_311 <= 4); p_1242->g_311 += 1)
                { /* block id: 146 */
                    (*l_292) = (((safe_rshift_func_int16_t_s_u(((p_68 , ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u(((p_1242->g_128[2].f1 >= p_68) ^ ((void*)0 == l_384)), (1UL ^ (safe_lshift_func_int8_t_s_u(p_68, ((((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((-7L), (251UL <= l_395[0][0]))) & 0x6AF753D0L), (-10L))), (-1L))), l_280[2])) , l_396[0][4][0]) , p_68) <= p_1242->g_47)))))) != l_370[7][0][3]) ^ p_1242->g_12) && 0x56L), p_1242->g_90)), 5)) <= p_1242->g_90)) ^ 0x1ADCE2363DD214FAL), 2)) > p_68) == l_397[7]);
                    for (l_291 = 0; l_291 < 7; l_291 += 1)
                    {
                        l_349[l_291] = &p_1242->g_45;
                    }
                }
            }
            for (l_291 = 2; (l_291 >= 0); l_291 -= 1)
            { /* block id: 153 */
                uint8_t *l_404 = &p_1242->g_311;
                struct S0 *l_407 = &p_1242->g_10;
                int32_t l_408 = 0x79006878L;
                int i, j, k;
                for (p_1242->g_289 = 0; (p_1242->g_289 <= 2); p_1242->g_289 += 1)
                { /* block id: 156 */
                    for (l_290 = 2; (l_290 >= 0); l_290 -= 1)
                    { /* block id: 159 */
                        return (*p_1242->g_350);
                    }
                }
                p_1242->g_128[2].f6 |= ((*l_292) = ((0x645CL & (safe_mul_func_int8_t_s_s(6L, (safe_rshift_func_int16_t_s_u((l_408 = (safe_add_func_uint32_t_u_u((((*l_404) = p_1242->g_59[l_291][(p_68 + 1)][(p_1242->g_47 + 3)]) & p_1242->g_128[2].f0.f0), (safe_sub_func_uint64_t_u_u((((*p_1242->g_374) = l_407) == p_69), p_1242->g_128[2].f3))))), 11))))) || p_1242->g_289));
            }
        }
        return (*p_1242->g_350);
    }
    return (*p_1242->g_350);
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_47 p_1242->g_90 p_1242->g_10.f0 p_1242->g_128 p_1242->g_62 p_1242->g_59 p_1242->g_12 p_1242->g_130 p_1242->g_139 p_1242->g_10 p_1242->g_45 p_1242->g_270
 * writes: p_1242->g_90 p_1242->g_130 p_1242->g_128.f6 p_1242->g_45
 */
struct S0 * func_70(int32_t * p_71, int32_t  p_72, uint32_t  p_73, struct S5 * p_1242)
{ /* block id: 30 */
    uint32_t l_107[4] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL};
    struct S2 l_110 = {0x766E099FL,4294967295UL,1UL};
    uint64_t *l_123 = &l_110.f2;
    int64_t l_124 = 8L;
    int32_t l_125 = 0x00CF2840L;
    int32_t l_168 = 0x1D27B0B2L;
    int32_t l_170 = 0x180E9687L;
    int32_t l_171 = 0x12B95ED4L;
    int32_t l_172 = 0x5AB2CCD0L;
    int32_t l_173 = (-3L);
    uint64_t l_175 = 0xB3C188B3BDE5FC08L;
    int32_t *l_256 = &p_1242->g_128[2].f6;
    uint32_t l_263 = 8UL;
    uint8_t l_268 = 0UL;
    int32_t l_269 = 3L;
    uint8_t l_271 = 255UL;
    int8_t l_275[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
    int i;
    if (((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_107[1], 3)), ((safe_mul_func_int16_t_s_s((((+p_1242->g_47) , (l_110 , p_71)) != (void*)0), 65530UL)) , ((safe_lshift_func_int8_t_s_s((l_125 = (((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((*l_123) = ((safe_add_func_uint8_t_u_u(0xF2L, (safe_lshift_func_uint16_t_u_s(((!(safe_lshift_func_int16_t_s_s(p_73, p_72))) | l_110.f0), 0)))) ^ p_1242->g_90)) , l_124), l_110.f1)), l_110.f1)) != p_72) & 0x5BF7L)), l_110.f0)) ^ p_1242->g_10.f0)))) == 0xB55CL) >= 9UL) ^ l_110.f0), 6UL)), 6)), p_72)) || p_73), l_110.f0)) ^ l_107[2]), 0L)) != l_124))
    { /* block id: 33 */
        uint32_t l_126 = 0UL;
        int16_t *l_127 = &p_1242->g_90;
        uint16_t *l_129 = &p_1242->g_130;
        int8_t *l_137 = (void*)0;
        int8_t *l_138[3][8][9] = {{{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139}},{{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139}},{{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139},{&p_1242->g_139,(void*)0,(void*)0,&p_1242->g_139,(void*)0,&p_1242->g_139,&p_1242->g_139,(void*)0,&p_1242->g_139}}};
        int32_t l_140 = 1L;
        int32_t l_174 = (-6L);
        int i, j, k;
        if (((((((((*l_127) = (l_126 , l_126)) & (p_1242->g_128[2] , ((*l_129) = 0x204CL))) <= ((l_140 = (safe_div_func_uint64_t_u_u(((((p_1242->g_62[2][2] <= (safe_mul_func_uint16_t_u_u(p_1242->g_128[2].f4, ((~((void*)0 != &p_1242->g_62[2][2])) && (safe_mul_func_uint16_t_u_u(((l_126 == l_126) , 0xB891L), p_72)))))) >= 0x4949183CL) && l_110.f1) && p_1242->g_128[2].f0.f0), l_110.f2))) , l_124)) >= 1L) & 249UL) < l_126) <= 8L))
        { /* block id: 37 */
            int64_t l_152 = (-3L);
            int32_t l_169[3];
            int i;
            for (i = 0; i < 3; i++)
                l_169[i] = 5L;
            for (l_126 = 0; (l_126 > 28); ++l_126)
            { /* block id: 40 */
                int32_t *l_144 = &p_1242->g_128[2].f6;
                int32_t *l_145 = &l_125;
                int32_t *l_146 = &p_1242->g_62[0][1];
                int32_t *l_147 = &p_1242->g_62[2][2];
                int32_t *l_148 = &p_1242->g_128[2].f6;
                int32_t *l_149 = &l_125;
                int32_t *l_150 = &l_140;
                int32_t *l_151 = (void*)0;
                int32_t *l_153 = &l_125;
                int32_t *l_154 = &p_1242->g_128[2].f6;
                int32_t *l_155 = &p_1242->g_128[2].f6;
                int32_t *l_156 = &p_1242->g_62[2][1];
                int32_t *l_157 = &l_140;
                int32_t *l_158 = (void*)0;
                int32_t *l_159 = (void*)0;
                int32_t *l_160 = &p_1242->g_62[2][2];
                int32_t *l_161 = &l_140;
                int32_t *l_162 = (void*)0;
                int32_t *l_163 = &p_1242->g_128[2].f6;
                int32_t *l_164 = &p_1242->g_128[2].f6;
                int32_t *l_165 = (void*)0;
                int32_t *l_166 = &p_1242->g_62[2][0];
                int32_t *l_167[5] = {&l_140,&l_140,&l_140,&l_140,&l_140};
                int i;
                (*l_144) &= l_126;
                --l_175;
                return &p_1242->g_10;
            }
        }
        else
        { /* block id: 45 */
            for (l_173 = (-30); (l_173 >= 0); l_173++)
            { /* block id: 48 */
                for (l_125 = 0; (l_125 <= 2); l_125 += 1)
                { /* block id: 51 */
                    return &p_1242->g_10;
                }
            }
        }
    }
    else
    { /* block id: 56 */
        int16_t l_188 = (-4L);
        uint16_t *l_197 = (void*)0;
        uint16_t *l_198 = &p_1242->g_130;
        int64_t *l_203 = &l_124;
        int32_t l_204 = 6L;
        struct S0 l_225[3] = {{0xE45CAA373232EF97L},{0xE45CAA373232EF97L},{0xE45CAA373232EF97L}};
        int32_t l_226 = (-2L);
        int32_t *l_227 = &l_173;
        int32_t *l_228 = &l_171;
        int i;
        (*l_228) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(l_171, 1UL)), ((p_73 = (((safe_div_func_uint64_t_u_u((((((l_188 , (safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u(p_1242->g_128[2].f0.f0, (safe_rshift_func_int8_t_s_u((((*l_227) |= (((safe_lshift_func_uint16_t_u_u(((*l_198) = 2UL), (safe_sub_func_int32_t_s_s(((l_226 &= (safe_div_func_int64_t_s_s((((((l_171 < (l_204 = ((*l_203) = 0x468781EB0B8A3AA6L))) || (safe_div_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(((l_188 , (l_204 = (((((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_u(((l_225[0] , 0L) <= 0x4208AA58L), p_72)) || p_1242->g_62[1][0]) >= p_72) & p_73) >= p_1242->g_128[2].f1), l_188)) | p_1242->g_59[0][2][2]) || p_73) <= p_1242->g_62[2][2]), l_225[0].f0)), l_170)), 3UL)), l_107[1])), p_1242->g_62[2][2])), l_204)) | 0xCA5F56C5L) < 0x81L) & 0x1705D98822D358E9L) , 18446744073709551615UL))) ^ p_1242->g_128[2].f6), p_73)) || p_1242->g_59[2][7][2]), p_1242->g_62[0][0]))) && p_73) != l_225[0].f0) ^ l_168), l_188))) >= 0x224AD8BEL), p_1242->g_10.f0)))) , 0UL) < p_72)) ^ p_72), l_171)))), l_107[1]))) && (*l_227)) > p_73) >= 0x15A1ACACL) | p_72), l_172)) > 0x603EDA38L) != p_73)) | p_1242->g_12))), p_1242->g_62[2][2]));
    }
    for (l_110.f0 = 0; (l_110.f0 >= (-26)); l_110.f0--)
    { /* block id: 68 */
        int16_t *l_242[3][4][10] = {{{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90},{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90},{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90},{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90}},{{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90},{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90},{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90},{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90}},{{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90},{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90},{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90},{(void*)0,&p_1242->g_90,(void*)0,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,&p_1242->g_90,(void*)0,(void*)0,&p_1242->g_90}}};
        int32_t l_247 = 0x4821ADE7L;
        struct S0 l_254 = {0x7738A404222332E9L};
        int i, j, k;
        for (l_168 = 0; (l_168 != 9); ++l_168)
        { /* block id: 71 */
            uint32_t l_235 = 0x5AA2B071L;
            uint16_t *l_255 = &p_1242->g_130;
            l_256 = ((((safe_add_func_int32_t_s_s(l_235, ((((p_1242->g_130 || ((safe_div_func_uint64_t_u_u(0x4EF9590F92BEB9D7L, (safe_mul_func_int16_t_s_s((+((((((l_242[2][0][3] == (((safe_add_func_int8_t_s_s(p_1242->g_139, ((safe_add_func_int64_t_s_s(p_72, ((l_247 <= ((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((p_73 & ((((p_1242->g_10 , l_254) , l_254.f0) , l_255) != (void*)0)) ^ 1L) , l_235), p_1242->g_128[2].f8)), 0x3477974FA29A9D7DL)), p_73)) | p_73)) != 0x03B2L))) || p_73))) > 0x0C1D5FEB8AD3C6A0L) , (void*)0)) ^ p_73) & 0x67A19EBCAD0B6BBAL) > l_110.f2) , (void*)0) != &p_1242->g_139)), p_72)))) <= p_1242->g_128[2].f6)) >= 0x32L) == 0L) | 0x2A0A1EA4L))) | l_254.f0) ^ 0xA0L) , p_71);
        }
    }
    for (l_173 = 0; (l_173 <= (-8)); l_173 = safe_sub_func_int16_t_s_s(l_173, 7))
    { /* block id: 77 */
        int32_t **l_259 = (void*)0;
        int32_t **l_260 = &p_1242->g_45;
        (*l_260) = &p_1242->g_47;
        if ((**l_260))
            continue;
        if ((*p_1242->g_45))
            continue;
    }
    if (((((l_171 | ((-3L) && 0xA40F4421L)) > (((((safe_sub_func_int64_t_s_s((((*l_123) = ((l_263 ^ (((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(p_72, p_73)) | 0x7051L), p_1242->g_59[1][0][5])) ^ ((l_268 < p_1242->g_12) != p_72)) ^ l_269)) | p_72)) <= p_1242->g_130), p_1242->g_128[2].f4)) && p_1242->g_270) >= p_72) && l_263) || 0x29D08F03L)) || l_263) <= l_271))
    { /* block id: 83 */
        uint16_t *l_274[8][6] = {{&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130},{&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130},{&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130},{&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130},{&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130},{&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130},{&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130},{&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130,&p_1242->g_130}};
        int32_t *l_278 = &l_172;
        int i, j;
        (*l_278) = (safe_div_func_uint16_t_u_u((--p_1242->g_130), p_1242->g_128[2].f7.f0));
    }
    else
    { /* block id: 86 */
        struct S0 *l_279 = (void*)0;
        return l_279;
    }
    return &p_1242->g_10;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S5 c_1243;
    struct S5* p_1242 = &c_1243;
    struct S5 c_1244 = {
        {1UL}, // p_1242->g_10
        0x70DDD9CD4431FADAL, // p_1242->g_12
        (void*)0, // p_1242->g_45
        0L, // p_1242->g_47
        {{{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL}},{{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL}},{{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL},{4294967295UL,0x21DABEE0L,4294967295UL,0xFB643E26L,0x575E0AD5L,4294967287UL}}}, // p_1242->g_59
        {{0x39A040D4L,0x39A040D4L,0x39A040D4L},{0x39A040D4L,0x39A040D4L,0x39A040D4L},{0x39A040D4L,0x39A040D4L,0x39A040D4L}}, // p_1242->g_62
        0L, // p_1242->g_90
        {{{0x3AF3587EAAD8A362L},4294967292UL,-1L,-10L,0x666F45203A911143L,1UL,8L,{0xDF0C45E9BC94048DL},0x68L},{{0x3AF3587EAAD8A362L},4294967292UL,-1L,-10L,0x666F45203A911143L,1UL,8L,{0xDF0C45E9BC94048DL},0x68L},{{0x3AF3587EAAD8A362L},4294967292UL,-1L,-10L,0x666F45203A911143L,1UL,8L,{0xDF0C45E9BC94048DL},0x68L}}, // p_1242->g_128
        0xBDA8L, // p_1242->g_130
        0x38L, // p_1242->g_139
        {{&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0],&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0]},{&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0],&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0]},{&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0],&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0]},{&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0],&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0]},{&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0],&p_1242->g_62[2][0],(void*)0,&p_1242->g_62[2][0]}}, // p_1242->g_143
        (-1L), // p_1242->g_270
        0xF5BC0205L, // p_1242->g_289
        0x66L, // p_1242->g_311
        &p_1242->g_45, // p_1242->g_350
        0x5D52L, // p_1242->g_351
        (void*)0, // p_1242->g_375
        &p_1242->g_375, // p_1242->g_374
        4294967286UL, // p_1242->g_438
        {{{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL}}}, // p_1242->g_441
        &p_1242->g_128[1], // p_1242->g_444
        &p_1242->g_444, // p_1242->g_443
        0xFBEBL, // p_1242->g_459
        {(void*)0,(void*)0,(void*)0}, // p_1242->g_480
        {{0x8B7F6920L,0xEBDD39C1L},{0x8B7F6920L,0xEBDD39C1L},{0x8B7F6920L,0xEBDD39C1L},{0x8B7F6920L,0xEBDD39C1L},{0x8B7F6920L,0xEBDD39C1L},{0x8B7F6920L,0xEBDD39C1L},{0x8B7F6920L,0xEBDD39C1L}}, // p_1242->g_499
        {{&p_1242->g_499[2],&p_1242->g_499[2]},{&p_1242->g_499[2],&p_1242->g_499[2]},{&p_1242->g_499[2],&p_1242->g_499[2]},{&p_1242->g_499[2],&p_1242->g_499[2]},{&p_1242->g_499[2],&p_1242->g_499[2]}}, // p_1242->g_498
        {4294967295UL,4294967289UL}, // p_1242->g_501
        &p_1242->g_501, // p_1242->g_500
        0UL, // p_1242->g_526
        {{{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0x7DDCFE5EL,0x6FE55BA1L,1UL},{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0L,0xA786DEF3L,0xE348E6ABA46881F5L}},{{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0x7DDCFE5EL,0x6FE55BA1L,1UL},{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0L,0xA786DEF3L,0xE348E6ABA46881F5L}},{{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0x7DDCFE5EL,0x6FE55BA1L,1UL},{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0L,0xA786DEF3L,0xE348E6ABA46881F5L}},{{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0x7DDCFE5EL,0x6FE55BA1L,1UL},{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0L,0xA786DEF3L,0xE348E6ABA46881F5L}},{{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0x7DDCFE5EL,0x6FE55BA1L,1UL},{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0L,0xA786DEF3L,0xE348E6ABA46881F5L}},{{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0x7DDCFE5EL,0x6FE55BA1L,1UL},{0L,0xA786DEF3L,0xE348E6ABA46881F5L},{0L,0xA786DEF3L,0xE348E6ABA46881F5L}}}, // p_1242->g_534
        &p_1242->g_10.f0, // p_1242->g_538
        {{{0xFA685933A7EF65A4L},4294967291UL,-7L,-1L,18446744073709551615UL,0x754D5B6AFBD44E64L,-1L,{0xB57EDE27F8580934L},0x73L}}, // p_1242->g_541
        {18446744073709551606UL}, // p_1242->g_553
        0x6374C6DCL, // p_1242->g_589
        {{{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}}},{{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}}},{{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}},{{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}},{{{0x2C95722CF2F56F23L},0x70779182L,0x622AL,0x2A39FBE9D128CC32L,0x80C4C9A8CFA8B300L,0x0F95416793AD3077L,0x1216D352L,{0x8AA18D6F5A9EB7B6L},0L}}}}}, // p_1242->g_595
        {{0x53F4753824312764L},4294967291UL,0x7BC9L,-1L,0x0212535AE0ED9795L,9UL,1L,{18446744073709551610UL},-5L}, // p_1242->g_597
        {{{0UL},4294967295UL,0x0CB0L,0L,0xD0A80D57CE87AE68L,0x5CD5A7DE6D824911L,-1L,{18446744073709551615UL},-2L},{{0UL},4294967295UL,0x0CB0L,0L,0xD0A80D57CE87AE68L,0x5CD5A7DE6D824911L,-1L,{18446744073709551615UL},-2L},{{0UL},4294967295UL,0x0CB0L,0L,0xD0A80D57CE87AE68L,0x5CD5A7DE6D824911L,-1L,{18446744073709551615UL},-2L},{{0UL},4294967295UL,0x0CB0L,0L,0xD0A80D57CE87AE68L,0x5CD5A7DE6D824911L,-1L,{18446744073709551615UL},-2L},{{0UL},4294967295UL,0x0CB0L,0L,0xD0A80D57CE87AE68L,0x5CD5A7DE6D824911L,-1L,{18446744073709551615UL},-2L},{{0UL},4294967295UL,0x0CB0L,0L,0xD0A80D57CE87AE68L,0x5CD5A7DE6D824911L,-1L,{18446744073709551615UL},-2L},{{0UL},4294967295UL,0x0CB0L,0L,0xD0A80D57CE87AE68L,0x5CD5A7DE6D824911L,-1L,{18446744073709551615UL},-2L},{{0UL},4294967295UL,0x0CB0L,0L,0xD0A80D57CE87AE68L,0x5CD5A7DE6D824911L,-1L,{18446744073709551615UL},-2L}}, // p_1242->g_645
        4294967289UL, // p_1242->g_654
        {1L,9UL,5UL}, // p_1242->g_689
        &p_1242->g_62[2][2], // p_1242->g_722
        &p_1242->g_526, // p_1242->g_936
        {{{{1UL},1UL,0x1B41L,-6L,0x74D22AC451A32398L,0x07003480D21C15FDL,0x14AD3438L,{0x4C3946B86984BE79L},0x29L}},{{{1UL},1UL,0x1B41L,-6L,0x74D22AC451A32398L,0x07003480D21C15FDL,0x14AD3438L,{0x4C3946B86984BE79L},0x29L}},{{{1UL},1UL,0x1B41L,-6L,0x74D22AC451A32398L,0x07003480D21C15FDL,0x14AD3438L,{0x4C3946B86984BE79L},0x29L}},{{{1UL},1UL,0x1B41L,-6L,0x74D22AC451A32398L,0x07003480D21C15FDL,0x14AD3438L,{0x4C3946B86984BE79L},0x29L}},{{{1UL},1UL,0x1B41L,-6L,0x74D22AC451A32398L,0x07003480D21C15FDL,0x14AD3438L,{0x4C3946B86984BE79L},0x29L}},{{{1UL},1UL,0x1B41L,-6L,0x74D22AC451A32398L,0x07003480D21C15FDL,0x14AD3438L,{0x4C3946B86984BE79L},0x29L}},{{{1UL},1UL,0x1B41L,-6L,0x74D22AC451A32398L,0x07003480D21C15FDL,0x14AD3438L,{0x4C3946B86984BE79L},0x29L}},{{{1UL},1UL,0x1B41L,-6L,0x74D22AC451A32398L,0x07003480D21C15FDL,0x14AD3438L,{0x4C3946B86984BE79L},0x29L}},{{{1UL},1UL,0x1B41L,-6L,0x74D22AC451A32398L,0x07003480D21C15FDL,0x14AD3438L,{0x4C3946B86984BE79L},0x29L}}}, // p_1242->g_967
        {{0UL},0x1211334FL,0x2059L,9L,0x7101F184520070EBL,0x3AEB53895F2143DAL,0x37827D11L,{18446744073709551607UL},0x1EL}, // p_1242->g_972
        {{0x1B62EE9A632D8969L},4294967294UL,0x2A67L,0x70BC070C4D50FE19L,0xA84AF940F4E9391CL,2UL,-1L,{0UL},0x37L}, // p_1242->g_973
        (void*)0, // p_1242->g_1011
        {{{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL}},{{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL}},{{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL}},{{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL}},{{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL},{4294967295UL,0x7B66CE0DL,0UL,0x108336B0L,0x1E45BAE9L,4294967295UL,0x33526943L,0UL}}}, // p_1242->g_1055
        (void*)0, // p_1242->g_1135
        &p_1242->g_444, // p_1242->g_1139
        255UL, // p_1242->g_1159
        &p_1242->g_1011, // p_1242->g_1164
        {{{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL}},{{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL}},{{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL}},{{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL}},{{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL}},{{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL}},{{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL},{5UL,2UL}}}, // p_1242->g_1187
        {{0UL},0x7C88C98AL,0x49B3L,0L,1UL,0x11A2EC6564A8E788L,0x1F2DF823L,{18446744073709551611UL},0x17L}, // p_1242->g_1192
        {{18446744073709551615UL},0x917CB266L,-1L,0L,8UL,0xE5DD837951B81232L,9L,{18446744073709551615UL},9L}, // p_1242->g_1193
        {&p_1242->g_689,&p_1242->g_689,&p_1242->g_689,&p_1242->g_689,&p_1242->g_689,&p_1242->g_689}, // p_1242->g_1240
    };
    c_1243 = c_1244;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1242);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1242->g_10.f0, "p_1242->g_10.f0", print_hash_value);
    transparent_crc(p_1242->g_12, "p_1242->g_12", print_hash_value);
    transparent_crc(p_1242->g_47, "p_1242->g_47", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1242->g_59[i][j][k], "p_1242->g_59[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1242->g_62[i][j], "p_1242->g_62[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1242->g_90, "p_1242->g_90", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1242->g_128[i].f0.f0, "p_1242->g_128[i].f0.f0", print_hash_value);
        transparent_crc(p_1242->g_128[i].f1, "p_1242->g_128[i].f1", print_hash_value);
        transparent_crc(p_1242->g_128[i].f2, "p_1242->g_128[i].f2", print_hash_value);
        transparent_crc(p_1242->g_128[i].f3, "p_1242->g_128[i].f3", print_hash_value);
        transparent_crc(p_1242->g_128[i].f4, "p_1242->g_128[i].f4", print_hash_value);
        transparent_crc(p_1242->g_128[i].f5, "p_1242->g_128[i].f5", print_hash_value);
        transparent_crc(p_1242->g_128[i].f6, "p_1242->g_128[i].f6", print_hash_value);
        transparent_crc(p_1242->g_128[i].f7.f0, "p_1242->g_128[i].f7.f0", print_hash_value);
        transparent_crc(p_1242->g_128[i].f8, "p_1242->g_128[i].f8", print_hash_value);

    }
    transparent_crc(p_1242->g_130, "p_1242->g_130", print_hash_value);
    transparent_crc(p_1242->g_139, "p_1242->g_139", print_hash_value);
    transparent_crc(p_1242->g_270, "p_1242->g_270", print_hash_value);
    transparent_crc(p_1242->g_289, "p_1242->g_289", print_hash_value);
    transparent_crc(p_1242->g_311, "p_1242->g_311", print_hash_value);
    transparent_crc(p_1242->g_351, "p_1242->g_351", print_hash_value);
    transparent_crc(p_1242->g_438, "p_1242->g_438", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1242->g_441[i][j][k], "p_1242->g_441[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1242->g_459, "p_1242->g_459", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1242->g_499[i].f0, "p_1242->g_499[i].f0", print_hash_value);
        transparent_crc(p_1242->g_499[i].f1, "p_1242->g_499[i].f1", print_hash_value);

    }
    transparent_crc(p_1242->g_501.f0, "p_1242->g_501.f0", print_hash_value);
    transparent_crc(p_1242->g_501.f1, "p_1242->g_501.f1", print_hash_value);
    transparent_crc(p_1242->g_526, "p_1242->g_526", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1242->g_534[i][j].f0, "p_1242->g_534[i][j].f0", print_hash_value);
            transparent_crc(p_1242->g_534[i][j].f1, "p_1242->g_534[i][j].f1", print_hash_value);
            transparent_crc(p_1242->g_534[i][j].f2, "p_1242->g_534[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_1242->g_541.f0.f0.f0, "p_1242->g_541.f0.f0.f0", print_hash_value);
    transparent_crc(p_1242->g_541.f0.f1, "p_1242->g_541.f0.f1", print_hash_value);
    transparent_crc(p_1242->g_541.f0.f2, "p_1242->g_541.f0.f2", print_hash_value);
    transparent_crc(p_1242->g_541.f0.f3, "p_1242->g_541.f0.f3", print_hash_value);
    transparent_crc(p_1242->g_541.f0.f4, "p_1242->g_541.f0.f4", print_hash_value);
    transparent_crc(p_1242->g_541.f0.f5, "p_1242->g_541.f0.f5", print_hash_value);
    transparent_crc(p_1242->g_541.f0.f6, "p_1242->g_541.f0.f6", print_hash_value);
    transparent_crc(p_1242->g_541.f0.f7.f0, "p_1242->g_541.f0.f7.f0", print_hash_value);
    transparent_crc(p_1242->g_541.f0.f8, "p_1242->g_541.f0.f8", print_hash_value);
    transparent_crc(p_1242->g_553.f0, "p_1242->g_553.f0", print_hash_value);
    transparent_crc(p_1242->g_589, "p_1242->g_589", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1242->g_595[i][j][k].f0.f0.f0, "p_1242->g_595[i][j][k].f0.f0.f0", print_hash_value);
                transparent_crc(p_1242->g_595[i][j][k].f0.f1, "p_1242->g_595[i][j][k].f0.f1", print_hash_value);
                transparent_crc(p_1242->g_595[i][j][k].f0.f2, "p_1242->g_595[i][j][k].f0.f2", print_hash_value);
                transparent_crc(p_1242->g_595[i][j][k].f0.f3, "p_1242->g_595[i][j][k].f0.f3", print_hash_value);
                transparent_crc(p_1242->g_595[i][j][k].f0.f4, "p_1242->g_595[i][j][k].f0.f4", print_hash_value);
                transparent_crc(p_1242->g_595[i][j][k].f0.f5, "p_1242->g_595[i][j][k].f0.f5", print_hash_value);
                transparent_crc(p_1242->g_595[i][j][k].f0.f6, "p_1242->g_595[i][j][k].f0.f6", print_hash_value);
                transparent_crc(p_1242->g_595[i][j][k].f0.f7.f0, "p_1242->g_595[i][j][k].f0.f7.f0", print_hash_value);
                transparent_crc(p_1242->g_595[i][j][k].f0.f8, "p_1242->g_595[i][j][k].f0.f8", print_hash_value);

            }
        }
    }
    transparent_crc(p_1242->g_597.f0.f0, "p_1242->g_597.f0.f0", print_hash_value);
    transparent_crc(p_1242->g_597.f1, "p_1242->g_597.f1", print_hash_value);
    transparent_crc(p_1242->g_597.f2, "p_1242->g_597.f2", print_hash_value);
    transparent_crc(p_1242->g_597.f3, "p_1242->g_597.f3", print_hash_value);
    transparent_crc(p_1242->g_597.f4, "p_1242->g_597.f4", print_hash_value);
    transparent_crc(p_1242->g_597.f5, "p_1242->g_597.f5", print_hash_value);
    transparent_crc(p_1242->g_597.f6, "p_1242->g_597.f6", print_hash_value);
    transparent_crc(p_1242->g_597.f7.f0, "p_1242->g_597.f7.f0", print_hash_value);
    transparent_crc(p_1242->g_597.f8, "p_1242->g_597.f8", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1242->g_645[i].f0.f0, "p_1242->g_645[i].f0.f0", print_hash_value);
        transparent_crc(p_1242->g_645[i].f1, "p_1242->g_645[i].f1", print_hash_value);
        transparent_crc(p_1242->g_645[i].f2, "p_1242->g_645[i].f2", print_hash_value);
        transparent_crc(p_1242->g_645[i].f3, "p_1242->g_645[i].f3", print_hash_value);
        transparent_crc(p_1242->g_645[i].f4, "p_1242->g_645[i].f4", print_hash_value);
        transparent_crc(p_1242->g_645[i].f5, "p_1242->g_645[i].f5", print_hash_value);
        transparent_crc(p_1242->g_645[i].f6, "p_1242->g_645[i].f6", print_hash_value);
        transparent_crc(p_1242->g_645[i].f7.f0, "p_1242->g_645[i].f7.f0", print_hash_value);
        transparent_crc(p_1242->g_645[i].f8, "p_1242->g_645[i].f8", print_hash_value);

    }
    transparent_crc(p_1242->g_654, "p_1242->g_654", print_hash_value);
    transparent_crc(p_1242->g_689.f0, "p_1242->g_689.f0", print_hash_value);
    transparent_crc(p_1242->g_689.f1, "p_1242->g_689.f1", print_hash_value);
    transparent_crc(p_1242->g_689.f2, "p_1242->g_689.f2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1242->g_967[i].f0.f0.f0, "p_1242->g_967[i].f0.f0.f0", print_hash_value);
        transparent_crc(p_1242->g_967[i].f0.f1, "p_1242->g_967[i].f0.f1", print_hash_value);
        transparent_crc(p_1242->g_967[i].f0.f2, "p_1242->g_967[i].f0.f2", print_hash_value);
        transparent_crc(p_1242->g_967[i].f0.f3, "p_1242->g_967[i].f0.f3", print_hash_value);
        transparent_crc(p_1242->g_967[i].f0.f4, "p_1242->g_967[i].f0.f4", print_hash_value);
        transparent_crc(p_1242->g_967[i].f0.f5, "p_1242->g_967[i].f0.f5", print_hash_value);
        transparent_crc(p_1242->g_967[i].f0.f6, "p_1242->g_967[i].f0.f6", print_hash_value);
        transparent_crc(p_1242->g_967[i].f0.f7.f0, "p_1242->g_967[i].f0.f7.f0", print_hash_value);
        transparent_crc(p_1242->g_967[i].f0.f8, "p_1242->g_967[i].f0.f8", print_hash_value);

    }
    transparent_crc(p_1242->g_972.f0.f0, "p_1242->g_972.f0.f0", print_hash_value);
    transparent_crc(p_1242->g_972.f1, "p_1242->g_972.f1", print_hash_value);
    transparent_crc(p_1242->g_972.f2, "p_1242->g_972.f2", print_hash_value);
    transparent_crc(p_1242->g_972.f3, "p_1242->g_972.f3", print_hash_value);
    transparent_crc(p_1242->g_972.f4, "p_1242->g_972.f4", print_hash_value);
    transparent_crc(p_1242->g_972.f5, "p_1242->g_972.f5", print_hash_value);
    transparent_crc(p_1242->g_972.f6, "p_1242->g_972.f6", print_hash_value);
    transparent_crc(p_1242->g_972.f7.f0, "p_1242->g_972.f7.f0", print_hash_value);
    transparent_crc(p_1242->g_972.f8, "p_1242->g_972.f8", print_hash_value);
    transparent_crc(p_1242->g_973.f0.f0, "p_1242->g_973.f0.f0", print_hash_value);
    transparent_crc(p_1242->g_973.f1, "p_1242->g_973.f1", print_hash_value);
    transparent_crc(p_1242->g_973.f2, "p_1242->g_973.f2", print_hash_value);
    transparent_crc(p_1242->g_973.f3, "p_1242->g_973.f3", print_hash_value);
    transparent_crc(p_1242->g_973.f4, "p_1242->g_973.f4", print_hash_value);
    transparent_crc(p_1242->g_973.f5, "p_1242->g_973.f5", print_hash_value);
    transparent_crc(p_1242->g_973.f6, "p_1242->g_973.f6", print_hash_value);
    transparent_crc(p_1242->g_973.f7.f0, "p_1242->g_973.f7.f0", print_hash_value);
    transparent_crc(p_1242->g_973.f8, "p_1242->g_973.f8", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1242->g_1055[i][j][k], "p_1242->g_1055[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1242->g_1159, "p_1242->g_1159", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1242->g_1187[i][j][k], "p_1242->g_1187[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1242->g_1192.f0.f0, "p_1242->g_1192.f0.f0", print_hash_value);
    transparent_crc(p_1242->g_1192.f1, "p_1242->g_1192.f1", print_hash_value);
    transparent_crc(p_1242->g_1192.f2, "p_1242->g_1192.f2", print_hash_value);
    transparent_crc(p_1242->g_1192.f3, "p_1242->g_1192.f3", print_hash_value);
    transparent_crc(p_1242->g_1192.f4, "p_1242->g_1192.f4", print_hash_value);
    transparent_crc(p_1242->g_1192.f5, "p_1242->g_1192.f5", print_hash_value);
    transparent_crc(p_1242->g_1192.f6, "p_1242->g_1192.f6", print_hash_value);
    transparent_crc(p_1242->g_1192.f7.f0, "p_1242->g_1192.f7.f0", print_hash_value);
    transparent_crc(p_1242->g_1192.f8, "p_1242->g_1192.f8", print_hash_value);
    transparent_crc(p_1242->g_1193.f0.f0, "p_1242->g_1193.f0.f0", print_hash_value);
    transparent_crc(p_1242->g_1193.f1, "p_1242->g_1193.f1", print_hash_value);
    transparent_crc(p_1242->g_1193.f2, "p_1242->g_1193.f2", print_hash_value);
    transparent_crc(p_1242->g_1193.f3, "p_1242->g_1193.f3", print_hash_value);
    transparent_crc(p_1242->g_1193.f4, "p_1242->g_1193.f4", print_hash_value);
    transparent_crc(p_1242->g_1193.f5, "p_1242->g_1193.f5", print_hash_value);
    transparent_crc(p_1242->g_1193.f6, "p_1242->g_1193.f6", print_hash_value);
    transparent_crc(p_1242->g_1193.f7.f0, "p_1242->g_1193.f7.f0", print_hash_value);
    transparent_crc(p_1242->g_1193.f8, "p_1242->g_1193.f8", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
