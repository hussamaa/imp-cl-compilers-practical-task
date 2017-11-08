// -g 12,6,48 -l 2,6,12
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


// Seed: 3118372426

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int8_t  f1;
   int32_t  f2;
   int64_t  f3;
   volatile int32_t  f4;
};

struct S1 {
    int32_t g_3;
    int32_t g_80;
    uint8_t g_82[10];
    int8_t g_84[5];
    int32_t g_87;
    int8_t *g_98;
    volatile struct S0 g_101;
    uint32_t g_106[9];
    volatile uint16_t g_129;
    volatile uint16_t *g_128;
    uint32_t g_138;
    int16_t g_139;
    uint8_t *g_151;
    uint8_t *g_152[6];
    uint64_t g_162[9][3][9];
    uint8_t g_176;
    volatile struct S0 * volatile g_180;
    uint8_t g_186;
    int32_t *g_190;
    uint32_t g_193;
    struct S0 g_199;
    struct S0 * volatile g_200[7];
    volatile struct S0 g_259;
    volatile struct S0 g_260;
    int32_t g_274;
    uint64_t g_279[4][6];
    volatile struct S0 g_285[7];
    volatile struct S0 g_286;
    uint64_t g_304[3][7];
    int64_t g_306[7];
    volatile uint16_t g_307;
    struct S0 g_311;
    uint32_t g_336;
    volatile int64_t g_351;
    int32_t g_355;
    uint64_t g_357;
    volatile struct S0 g_375[6];
    int32_t **g_394;
    volatile int64_t g_397[6];
    struct S0 g_419[6];
    uint32_t *g_430[6];
    uint32_t **g_429;
    uint16_t g_448;
    uint16_t *g_447;
    struct S0 g_451[2][4][1];
    struct S0 g_452;
    int32_t ***g_468[5][4][6];
    int32_t ****g_467;
    uint16_t g_479;
    uint64_t g_491;
    struct S0 g_512;
    struct S0 g_513;
    volatile struct S0 g_516[1][2][8];
    uint32_t *g_524;
    uint32_t **g_523;
    int16_t g_556;
    int32_t * volatile g_558;
    int32_t g_572;
    uint64_t g_578;
    uint64_t g_583;
    struct S0 g_584;
    int64_t *g_588;
    struct S0 g_589;
    int32_t g_619;
    struct S0 g_633;
    struct S0 g_634;
    int32_t ***g_649;
    int8_t **g_703[2][9];
    struct S0 g_727;
    struct S0 g_728;
    struct S0 g_729;
    struct S0 g_730;
    struct S0 g_731;
    struct S0 g_732;
    struct S0 g_733;
    struct S0 g_734;
    struct S0 g_735;
    struct S0 g_736;
    struct S0 g_737;
    int32_t * volatile g_738;
    uint32_t **g_764[3];
    uint64_t *g_767;
    uint64_t **g_766;
    uint64_t *** volatile g_768;
    int32_t *g_769;
    struct S0 g_785[7][4];
    struct S0 * volatile g_786;
    volatile struct S0 g_819;
    int32_t ** volatile g_839;
    volatile uint16_t g_873;
    struct S0 g_876;
    int32_t g_896;
    struct S0 g_945;
    volatile struct S0 *g_951;
    int32_t ** volatile g_953;
    uint8_t g_977;
    volatile struct S0 g_978;
    volatile int32_t g_1046[3];
    volatile struct S0 g_1196;
    uint32_t *g_1204;
    uint32_t **g_1203[6];
    int32_t ** volatile g_1208[2];
    int32_t ** volatile g_1209;
    int32_t g_1226[1];
    int8_t ***g_1260;
    int8_t ****g_1259[1][2][10];
    volatile struct S0 g_1320;
    uint64_t g_1339[4];
    int32_t g_1367;
    int16_t *g_1394;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S1 * p_1398);
int32_t * func_4(int64_t  p_5, int32_t * p_6, int64_t  p_7, struct S1 * p_1398);
struct S0  func_8(int64_t  p_9, uint64_t  p_10, struct S1 * p_1398);
int32_t  func_15(int32_t * p_16, int32_t * p_17, int32_t * p_18, uint32_t  p_19, struct S1 * p_1398);
int32_t * func_20(uint64_t  p_21, int32_t  p_22, int64_t  p_23, int32_t * p_24, uint32_t  p_25, struct S1 * p_1398);
uint64_t  func_26(int32_t * p_27, uint32_t  p_28, int32_t * p_29, struct S1 * p_1398);
int32_t * func_30(uint64_t  p_31, uint32_t  p_32, struct S1 * p_1398);
uint16_t  func_33(int32_t * p_34, int8_t  p_35, int32_t * p_36, struct S1 * p_1398);
int32_t * func_38(int64_t  p_39, int64_t  p_40, uint64_t  p_41, uint32_t  p_42, struct S1 * p_1398);
int64_t  func_43(uint8_t  p_44, int64_t  p_45, uint32_t  p_46, int32_t * p_47, struct S1 * p_1398);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1398->g_649 p_1398->g_394 p_1398->g_768 p_1398->g_766 p_1398->g_767 p_1398->g_304 p_1398->g_896 p_1398->g_633.f2 p_1398->g_524 p_1398->g_106 p_1398->g_447 p_1398->g_448 p_1398->g_451.f2 p_1398->g_737.f0 p_1398->g_873 p_1398->g_876 p_1398->g_588 p_1398->g_199.f3 p_1398->g_98 p_1398->g_84 p_1398->g_769 p_1398->g_128 p_1398->g_129 p_1398->g_523 p_1398->g_945 p_1398->g_285.f0 p_1398->g_951 p_1398->g_619 p_1398->g_953 p_1398->g_375.f3 p_1398->g_512.f2 p_1398->g_977 p_1398->g_978 p_1398->g_1196 p_1398->g_786 p_1398->g_1203 p_1398->g_1209 p_1398->g_738 p_1398->g_274 p_1398->g_584.f1 p_1398->g_1226 p_1398->g_101.f2 p_1398->g_1259 p_1398->g_429 p_1398->g_430 p_1398->g_336 p_1398->g_734.f4 p_1398->g_452.f1 p_1398->g_279 p_1398->g_589.f0 p_1398->g_162 p_1398->g_1320 p_1398->g_1339 p_1398->g_578 p_1398->g_1367 p_1398->g_512.f4 p_1398->g_734 p_1398->g_513.f3
 * writes: p_1398->g_3 p_1398->g_873 p_1398->g_619 p_1398->g_730.f1 p_1398->g_106 p_1398->g_304 p_1398->g_448 p_1398->g_769 p_1398->g_479 p_1398->g_977 p_1398->g_451 p_1398->g_731.f0 p_1398->g_734 p_1398->g_733.f3 p_1398->g_1203 p_1398->g_584.f2 p_1398->g_190 p_1398->g_736.f3 p_1398->g_1259 p_1398->g_633.f0 p_1398->g_578 p_1398->g_1367 p_1398->g_199.f3 p_1398->g_1394 p_1398->g_556 p_1398->g_139 p_1398->g_84
 */
int16_t  func_1(struct S1 * p_1398)
{ /* block id: 4 */
    uint32_t l_2[6];
    int32_t *l_806[10][9][2] = {{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}},{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}},{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}},{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}},{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}},{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}},{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}},{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}},{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}},{{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0},{&p_1398->g_3,(void*)0}}};
    int32_t *l_844[6][8] = {{&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3},{&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3},{&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3},{&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3},{&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3},{&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3,&p_1398->g_3}};
    uint32_t l_886 = 0xF07317BFL;
    int16_t l_887 = 2L;
    struct S0 *l_893 = &p_1398->g_451[0][3][0];
    struct S0 **l_892[3];
    int64_t l_897[6][3] = {{9L,9L,9L},{9L,9L,9L},{9L,9L,9L},{9L,9L,9L},{9L,9L,9L},{9L,9L,9L}};
    uint32_t l_898 = 0x206B1347L;
    int8_t l_920[9][3][9] = {{{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L}},{{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L}},{{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L}},{{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L}},{{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L}},{{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L}},{{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L}},{{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L}},{{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L},{0x44L,0x57L,0L,0x57L,0x44L,0x44L,0x57L,0L,0x57L}}};
    int8_t l_934 = 3L;
    int32_t l_937[9][10][2] = {{{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L}},{{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L}},{{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L}},{{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L}},{{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L}},{{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L}},{{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L}},{{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L}},{{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L},{0x02FB77D4L,1L}}};
    int16_t l_967 = 0x17D0L;
    uint32_t l_979 = 5UL;
    uint32_t l_1035 = 0xF92F11C2L;
    int8_t l_1047[5] = {0x0CL,0x0CL,0x0CL,0x0CL,0x0CL};
    int16_t l_1080[2];
    uint32_t l_1083[6];
    uint64_t ***l_1113 = &p_1398->g_766;
    int32_t l_1175 = 1L;
    int8_t l_1234 = 0L;
    uint16_t l_1246 = 0xF796L;
    uint32_t l_1308 = 0x43AD1E85L;
    int8_t ***l_1327 = &p_1398->g_703[1][5];
    int32_t l_1349 = (-6L);
    uint32_t l_1355 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_2[i] = 0xFC07E17FL;
    for (i = 0; i < 3; i++)
        l_892[i] = &l_893;
    for (i = 0; i < 2; i++)
        l_1080[i] = 0x52EFL;
    for (i = 0; i < 6; i++)
        l_1083[i] = 1UL;
lbl_1295:
    for (p_1398->g_3 = 5; (p_1398->g_3 >= 0); p_1398->g_3 -= 1)
    { /* block id: 7 */
        int32_t *l_37 = &p_1398->g_3;
        int64_t *l_640 = (void*)0;
        int64_t *l_641[6] = {&p_1398->g_633.f3,(void*)0,&p_1398->g_633.f3,&p_1398->g_633.f3,(void*)0,&p_1398->g_633.f3};
        int32_t **l_842 = (void*)0;
        int32_t **l_843 = &l_806[4][3][0];
        int i;
        (1 + 1);
    }
    if ((l_898 = (safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((l_886 , (*p_1398->g_649)) == (void*)0), 15)), l_887)), (safe_rshift_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((l_892[2] == (void*)0), (safe_sub_func_uint64_t_u_u(18446744073709551615UL, (***p_1398->g_768))))) ^ (((((!p_1398->g_896) & 3UL) > 255UL) ^ p_1398->g_633.f2) <= (*p_1398->g_524))) > (*p_1398->g_524)), (*p_1398->g_447))))) && 1UL), l_897[3][1]))))
    { /* block id: 455 */
        int16_t l_907 = 1L;
        int32_t l_921 = 0x145BC3CAL;
        uint64_t l_960 = 0x8AFA61D71D262C3CL;
        int32_t l_971 = 0L;
        uint16_t l_975 = 0xD11EL;
        if ((l_921 = ((*p_1398->g_769) = (safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s((((safe_sub_func_int16_t_s_s(l_907, 0xB09AL)) <= (safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(0xD7L, (65529UL & (p_1398->g_451[0][1][0].f2 < (((void*)0 == &l_897[0][2]) , (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((func_8(p_1398->g_737.f0, (**p_1398->g_766), p_1398) , (*p_1398->g_588)), (*p_1398->g_588))), 0)), (*p_1398->g_98)))))))), (*p_1398->g_98))) & (-1L)) , 0UL), l_920[2][0][6]))) , 0L), l_921)), l_921)))))
        { /* block id: 458 */
            uint8_t l_933 = 0UL;
            for (p_1398->g_730.f1 = 25; (p_1398->g_730.f1 <= 10); p_1398->g_730.f1 = safe_sub_func_uint16_t_u_u(p_1398->g_730.f1, 3))
            { /* block id: 461 */
                int8_t l_932 = (-9L);
                int32_t l_940 = 0x21915430L;
                int32_t l_950 = 0x4EE0E1D3L;
                l_934 = ((18446744073709551615UL < 0x41F0AC1DAD8487A5L) || (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s((((*p_1398->g_524) = ((l_921 > (0x8063FEE09847472AL | l_921)) >= 2UL)) >= ((*p_1398->g_128) > (safe_div_func_uint8_t_u_u(l_932, l_933)))), l_932)) != 65532UL), 0x21L)), l_932)));
                (*p_1398->g_769) = (l_933 < (safe_mul_func_int16_t_s_s(l_937[3][7][1], ((((--(*p_1398->g_767)) , (l_921 & (l_940 = ((**p_1398->g_523) = ((**p_1398->g_523) ^ 0x49044AC8L))))) ^ (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(l_932, (l_950 &= (p_1398->g_945 , ((((safe_div_func_int8_t_s_s((l_907 | ((safe_mul_func_uint16_t_u_u(((*p_1398->g_447) = (*p_1398->g_447)), 0x4EA4L)) | 0x38936739L)), (*p_1398->g_98))) , (void*)0) == &l_934) && p_1398->g_285[1].f0))))) , (void*)0) != p_1398->g_951), 0L))) | (*p_1398->g_769)))));
            }
            (*p_1398->g_769) ^= l_933;
        }
        else
        { /* block id: 472 */
            int32_t **l_952 = &l_844[3][4];
            int32_t l_970 = 3L;
            uint16_t *l_972 = (void*)0;
            uint16_t *l_973 = &p_1398->g_479;
            uint32_t l_974 = 4294967295UL;
            int32_t l_976 = (-9L);
            (*p_1398->g_953) = ((*l_952) = (void*)0);
            p_1398->g_977 |= (!(safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(((void*)0 == &p_1398->g_703[1][6]), (l_960 > ((((((safe_mul_func_uint16_t_u_u(((*l_973) = ((*p_1398->g_447) |= ((safe_mul_func_int8_t_s_s(l_960, (safe_mod_func_int8_t_s_s((l_967 > (safe_lshift_func_uint8_t_u_u(l_921, l_970))), l_971)))) , (((p_1398->g_375[3].f3 , l_970) , (*p_1398->g_98)) == l_921)))), l_971)) , l_974) , l_975) <= (*p_1398->g_524)) , l_960) <= l_976)))) , l_974) | 0x01A256C580A37F02L), 5)) >= 0L) & l_921), p_1398->g_512.f2)));
        }
        (*l_893) = p_1398->g_978;
        l_979 = l_975;
    }
    else
    { /* block id: 481 */
        int8_t **l_995[10] = {&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98};
        int32_t l_1023 = (-1L);
        int32_t l_1024 = 0x5C00C52EL;
        int32_t l_1029 = 0L;
        int32_t l_1034[5];
        uint16_t l_1043 = 0xA85AL;
        uint8_t l_1050 = 0x25L;
        uint64_t *l_1098 = &p_1398->g_279[1][3];
        int32_t l_1101 = 0x63D2544BL;
        uint64_t l_1120 = 0UL;
        uint32_t *l_1123[7][7][5] = {{{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0}},{{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0}},{{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0}},{{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0}},{{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0}},{{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0}},{{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0},{(void*)0,&p_1398->g_732.f0,&p_1398->g_734.f0,&p_1398->g_728.f0,&p_1398->g_634.f0}}};
        uint8_t l_1125 = 0xF0L;
        uint64_t l_1126 = 1UL;
        uint64_t ***l_1150 = &p_1398->g_766;
        int32_t l_1242 = 1L;
        uint64_t l_1271 = 6UL;
        int64_t l_1291 = (-10L);
        int16_t l_1306 = 0x2F3DL;
        uint16_t l_1329 = 0x1851L;
        int32_t l_1353 = 0x1F447AD2L;
        uint32_t *l_1382 = &p_1398->g_336;
        int16_t l_1395 = 0x2CC9L;
        int32_t l_1397[7] = {0x332AB17BL,0x1F236966L,0x332AB17BL,0x332AB17BL,0x1F236966L,0x332AB17BL,0x332AB17BL};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1034[i] = 0L;
        for (p_1398->g_731.f0 = 0; (p_1398->g_731.f0 <= 2); p_1398->g_731.f0 += 1)
        { /* block id: 484 */
            int16_t l_1000[7] = {0x13DFL,0x13DFL,0x13DFL,0x13DFL,0x13DFL,0x13DFL,0x13DFL};
            uint8_t l_1002 = 0x36L;
            int32_t l_1015 = 3L;
            int32_t l_1016 = 0L;
            int32_t l_1021[5][3];
            int32_t l_1028 = 0x58A1F6EFL;
            uint64_t l_1059 = 0xEC1458CBA262D4E3L;
            int64_t l_1063 = 0x2CA59DB207D73E20L;
            struct S0 **l_1076 = (void*)0;
            int64_t l_1179 = 1L;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1021[i][j] = 0x1879C08FL;
            }
            (1 + 1);
        }
        (*p_1398->g_786) = p_1398->g_1196;
        l_806[8][4][1] = &l_937[8][2][1];
        for (p_1398->g_733.f3 = 0; (p_1398->g_733.f3 <= 8); ++p_1398->g_733.f3)
        { /* block id: 601 */
            int32_t *l_1199 = &l_1023;
            int32_t **l_1218 = &l_806[8][4][1];
            int32_t l_1237 = (-1L);
            int32_t l_1238 = 8L;
            int32_t l_1245 = 0x62F38D7BL;
            int16_t l_1292 = 1L;
            int64_t l_1372 = 0x442162E45872976EL;
            l_1199 = l_1199;
            for (l_1043 = (-15); (l_1043 == 40); ++l_1043)
            { /* block id: 605 */
                int32_t l_1202 = 0x001E2208L;
                if (l_1202)
                { /* block id: 606 */
                    p_1398->g_1203[0] = p_1398->g_1203[3];
                }
                else
                { /* block id: 608 */
                    int32_t *l_1207 = &l_1024;
                    for (p_1398->g_584.f2 = 0; (p_1398->g_584.f2 > (-24)); p_1398->g_584.f2--)
                    { /* block id: 611 */
                        (*p_1398->g_1209) = l_1207;
                    }
                }
                if ((*p_1398->g_738))
                    break;
            }
            for (l_979 = 0; (l_979 <= 20); l_979++)
            { /* block id: 619 */
                uint16_t l_1214 = 0x0359L;
                int32_t l_1225 = 0x117FDD4AL;
                int32_t l_1233 = 0x2E26D609L;
                int32_t l_1235[8] = {0x391F5B7AL,0x39F83BCCL,0x391F5B7AL,0x391F5B7AL,0x39F83BCCL,0x391F5B7AL,0x391F5B7AL,0x39F83BCCL};
                int i;
                if ((*p_1398->g_738))
                { /* block id: 620 */
                    int8_t l_1215 = 6L;
                    int32_t l_1232 = 0x4D4FA91BL;
                    int32_t l_1236 = (-1L);
                    int32_t l_1239 = 9L;
                    int32_t l_1240 = (-1L);
                    int32_t l_1241 = 0x6E76B826L;
                    int32_t l_1243 = 0x666BED7AL;
                    int32_t l_1244[6] = {9L,0x558E24E4L,9L,9L,0x558E24E4L,9L};
                    int8_t ****l_1272[9] = {&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260};
                    int i;
                    for (p_1398->g_619 = 0; (p_1398->g_619 >= (-19)); p_1398->g_619--)
                    { /* block id: 623 */
                        uint32_t l_1223 = 4294967295UL;
                        uint16_t *l_1224[5] = {&l_1214,&l_1214,&l_1214,&l_1214,&l_1214};
                        int i;
                        l_1215 &= (l_1214 <= 0x6B847A3EL);
                        (*l_1199) = (safe_mul_func_uint16_t_u_u((l_1218 != ((0x759FL > (((*p_1398->g_447) & (safe_lshift_func_int16_t_s_u(((2L > ((-1L) >= 0x68L)) | ((l_1225 ^= (!(l_1223 <= p_1398->g_584.f1))) , l_1024)), 2))) < l_1215)) , &l_1199)), 1L));
                        if (p_1398->g_1226[0])
                            break;
                        l_1225 &= (((p_1398->g_101.f2 <= ((*p_1398->g_447) = ((void*)0 == &p_1398->g_572))) >= l_1223) < (*p_1398->g_588));
                    }
                    for (p_1398->g_736.f3 = 0; (p_1398->g_736.f3 <= 9); ++p_1398->g_736.f3)
                    { /* block id: 633 */
                        uint64_t l_1231 = 0x2C7161E66C82CF65L;
                        (*l_893) = ((--(***l_1113)) , func_8(p_1398->g_978.f3, l_1231, p_1398));
                    }
                    --l_1246;
                    (*p_1398->g_769) |= ((safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(0x6521L, ((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((*p_1398->g_447), (((((((p_1398->g_1259[0][1][2] = p_1398->g_1259[0][1][2]) == ((safe_mul_func_int16_t_s_s(l_1120, (((((**p_1398->g_523)++) != ((l_1125 <= ((((safe_add_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_u(255UL, ((((safe_sub_func_int16_t_s_s((((&p_1398->g_731 != &p_1398->g_452) != ((*p_1398->g_588) == l_1241)) != l_1235[1]), 0L)) , l_1240) == 0UL) & 0x83L))) , l_1214) && (*l_1199)) >= (*p_1398->g_98)), l_1271)) | (**p_1398->g_766)) <= 0x694A531AL) == 18446744073709551615UL)) > (*p_1398->g_447))) | (*p_1398->g_588)) | l_1225))) , l_1272[2])) , (**p_1398->g_429)) , (**p_1398->g_523)) ^ 0xCCF5AF20L) , 0x37957E1FL) , 0x00B2L))), 6L)) >= (-1L)))) >= l_1239), (**p_1398->g_766))), l_1225)) | l_1215);
                }
                else
                { /* block id: 641 */
                    uint16_t l_1276 = 65535UL;
                    for (p_1398->g_633.f0 = (-28); (p_1398->g_633.f0 <= 48); p_1398->g_633.f0 = safe_add_func_uint32_t_u_u(p_1398->g_633.f0, 1))
                    { /* block id: 644 */
                        int8_t l_1275 = 0L;
                        l_1276--;
                        if (l_1276)
                            continue;
                        if (l_1276)
                            break;
                        (*l_1199) = ((*p_1398->g_769) = (*p_1398->g_738));
                    }
                    return p_1398->g_734.f4;
                }
                (*l_1199) = ((((safe_add_func_int64_t_s_s((((((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(5UL, 2)) | ((*p_1398->g_767) |= 0xB0F6A72DEAF2DC78L)) , p_1398->g_452.f1), (safe_rshift_func_uint8_t_u_s((*l_1199), 2)))) , (l_1034[1] > ((safe_sub_func_uint16_t_u_u(((*p_1398->g_128) , (safe_rshift_func_int16_t_s_s(((l_1235[1] = ((*p_1398->g_524) = ((((((l_1242 = l_1291) < ((*p_1398->g_128) | (p_1398->g_279[0][3] , 8L))) , l_1043) , (*p_1398->g_447)) , &p_1398->g_307) != (void*)0))) <= l_1292), p_1398->g_589.f0))), (*p_1398->g_447))) , l_1235[4]))) , l_1242) >= 18446744073709551615UL) && l_1225), (*p_1398->g_588))) & l_1101) != l_1233) ^ p_1398->g_162[5][0][7]);
            }
            for (l_1292 = 0; (l_1292 > (-7)); l_1292 = safe_sub_func_uint32_t_u_u(l_1292, 1))
            { /* block id: 661 */
                int16_t l_1307 = 0L;
                int32_t l_1309 = 0x1DD09B6DL;
                uint32_t l_1332[5];
                int32_t l_1348[4] = {0x680B4B8AL,0x680B4B8AL,0x680B4B8AL,0x680B4B8AL};
                int32_t l_1352[8][5] = {{(-3L),0x168F6C9EL,(-3L),(-3L),0x168F6C9EL},{(-3L),0x168F6C9EL,(-3L),(-3L),0x168F6C9EL},{(-3L),0x168F6C9EL,(-3L),(-3L),0x168F6C9EL},{(-3L),0x168F6C9EL,(-3L),(-3L),0x168F6C9EL},{(-3L),0x168F6C9EL,(-3L),(-3L),0x168F6C9EL},{(-3L),0x168F6C9EL,(-3L),(-3L),0x168F6C9EL},{(-3L),0x168F6C9EL,(-3L),(-3L),0x168F6C9EL},{(-3L),0x168F6C9EL,(-3L),(-3L),0x168F6C9EL}};
                int16_t **l_1393 = (void*)0;
                uint8_t *l_1396 = &p_1398->g_977;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1332[i] = 2UL;
                if (l_887)
                    goto lbl_1295;
                if ((!(l_1309 = ((((-1L) > (*p_1398->g_588)) , (safe_mod_func_int64_t_s_s((((*l_1199) , (safe_rshift_func_uint16_t_u_u(((*p_1398->g_447) = ((*l_1199) == (safe_div_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((func_8(p_1398->g_375[3].f3, (*p_1398->g_767), p_1398) , ((l_1120 , (((&p_1398->g_468[0][1][1] != &p_1398->g_649) >= (**p_1398->g_523)) , 0L)) < l_1306)), (*l_1199))), l_1307)) , 4294967288UL), (*p_1398->g_769))))), (*l_1199)))) && l_1308), 0x397912D323FB608AL))) ^ 0x8009L))))
                { /* block id: 665 */
                    int32_t l_1328 = 8L;
                    int32_t l_1330 = 0L;
                    int32_t l_1331 = 0L;
                    uint8_t *l_1347[6] = {&l_1050,&l_1050,&l_1050,&l_1050,&l_1050,&l_1050};
                    int32_t l_1350 = 0x7CCF9BA3L;
                    int32_t l_1351 = 0x2FE06BA6L;
                    int32_t l_1354 = 6L;
                    uint64_t *l_1364 = &p_1398->g_578;
                    uint32_t *l_1370 = (void*)0;
                    uint32_t *l_1371 = &l_886;
                    uint64_t l_1373[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1373[i] = 0x6C5D883DBC1EAF97L;
                    if ((((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((l_1034[1] || (*p_1398->g_447)) < (safe_mul_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((-1L), (safe_add_func_uint64_t_u_u((p_1398->g_1320 , (((((safe_add_func_int8_t_s_s((((*l_1199) &= ((l_1309 = ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((((!(((*p_1398->g_447) || (&p_1398->g_873 != (void*)0)) <= p_1398->g_734.f4)) , l_1327) == (void*)0), (*p_1398->g_447))), l_1328)) , (*p_1398->g_98))) & (-1L))) | l_1307), 1UL)) ^ l_1271) && 0x046FL) , (*p_1398->g_588)) < l_1101)), l_1307)))) != l_1307) && (*p_1398->g_447)), l_1328))), l_1328)), l_1307)) <= l_1307) , l_1329))
                    { /* block id: 668 */
                        l_1332[1]++;
                        (*l_1218) = &l_1331;
                        (*p_1398->g_769) |= ((safe_mod_func_uint16_t_u_u(((*p_1398->g_447)++), l_1330)) < l_1328);
                    }
                    else
                    { /* block id: 673 */
                        int8_t l_1340 = 1L;
                        if (p_1398->g_1339[1])
                            break;
                        (*p_1398->g_769) = l_1340;
                    }
                    (*p_1398->g_769) &= (safe_div_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((l_1120 > ((l_1309 , 4L) ^ (safe_mod_func_uint32_t_u_u(((l_1309 & (l_1355--)) < (safe_sub_func_int64_t_s_s(((*p_1398->g_588) = (safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((((p_1398->g_1367 ^= (++(*l_1364))) , (65535UL < (safe_lshift_func_uint8_t_u_s((((*p_1398->g_524) = (((*l_1371) = (&p_1398->g_572 != &p_1398->g_572)) , (((*p_1398->g_767) && ((-6L) < 18446744073709551613UL)) <= l_1372))) || 0x4C1ACAD9L), l_1350)))) || p_1398->g_512.f4), 65535UL)) != l_1352[6][4]), 0L))), l_1373[0]))), 8L)))), (*l_1199))) && l_1120), l_1352[6][2]));
                }
                else
                { /* block id: 684 */
                    return p_1398->g_1320.f3;
                }
                (*p_1398->g_769) = ((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((((l_1034[1] & ((((*p_1398->g_98) = (safe_sub_func_uint64_t_u_u(((((*p_1398->g_786) , (safe_mul_func_uint8_t_u_u(((void*)0 == l_1382), (((*l_1396) = (((safe_add_func_uint8_t_u_u(((~65535UL) >= ((*p_1398->g_447) = (*p_1398->g_128))), (safe_sub_func_int32_t_s_s((l_1309 > (((p_1398->g_139 = (p_1398->g_556 = (safe_lshift_func_uint8_t_u_s((((**p_1398->g_523) = (safe_mul_func_int16_t_s_s((0x7ECC338FA86724F2L != ((p_1398->g_1394 = &l_1292) == &p_1398->g_139)), 1UL))) ^ l_1050), 7)))) , l_1395) , l_1120)), 0L)))) != (*p_1398->g_767)) < l_1352[0][4])) < 3L)))) < (*p_1398->g_588)) ^ 1UL), (*p_1398->g_767)))) && l_1397[6]) != (-4L))) <= l_1332[1]) != 0xCBE3L) < 0x205189D36FFE82A5L) != l_1101), p_1398->g_1339[1])), l_1332[1])) > l_1101);
            }
        }
    }
    return p_1398->g_513.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1398->g_769 p_1398->g_619
 * writes: p_1398->g_619
 */
int32_t * func_4(int64_t  p_5, int32_t * p_6, int64_t  p_7, struct S1 * p_1398)
{ /* block id: 447 */
    int32_t *l_877[1][6][8] = {{{&p_1398->g_619,(void*)0,&p_1398->g_87,&p_1398->g_80,&p_1398->g_3,&p_1398->g_619,&p_1398->g_80,&p_1398->g_80},{&p_1398->g_619,(void*)0,&p_1398->g_87,&p_1398->g_80,&p_1398->g_3,&p_1398->g_619,&p_1398->g_80,&p_1398->g_80},{&p_1398->g_619,(void*)0,&p_1398->g_87,&p_1398->g_80,&p_1398->g_3,&p_1398->g_619,&p_1398->g_80,&p_1398->g_80},{&p_1398->g_619,(void*)0,&p_1398->g_87,&p_1398->g_80,&p_1398->g_3,&p_1398->g_619,&p_1398->g_80,&p_1398->g_80},{&p_1398->g_619,(void*)0,&p_1398->g_87,&p_1398->g_80,&p_1398->g_3,&p_1398->g_619,&p_1398->g_80,&p_1398->g_80},{&p_1398->g_619,(void*)0,&p_1398->g_87,&p_1398->g_80,&p_1398->g_3,&p_1398->g_619,&p_1398->g_80,&p_1398->g_80}}};
    int i, j, k;
    (*p_1398->g_769) &= 0x3BE913E3L;
    return l_877[0][5][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1398->g_873 p_1398->g_876
 * writes: p_1398->g_873
 */
struct S0  func_8(int64_t  p_9, uint64_t  p_10, struct S1 * p_1398)
{ /* block id: 444 */
    int32_t *l_870 = &p_1398->g_87;
    int32_t *l_871 = (void*)0;
    int32_t *l_872[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    p_1398->g_873--;
    return p_1398->g_876;
}


/* ------------------------------------------ */
/* 
 * reads : p_1398->g_727.f3 p_1398->g_588 p_1398->g_306 p_1398->g_199.f3 p_1398->g_767 p_1398->g_304 p_1398->g_128 p_1398->g_129 p_1398->g_512.f3 p_1398->g_447 p_1398->g_524 p_1398->g_769 p_1398->g_619 p_1398->g_558 p_1398->g_80
 * writes: p_1398->g_727.f3 p_1398->g_556 p_1398->g_304 p_1398->g_311.f3 p_1398->g_479 p_1398->g_106 p_1398->g_619
 */
int32_t  func_15(int32_t * p_16, int32_t * p_17, int32_t * p_18, uint32_t  p_19, struct S1 * p_1398)
{ /* block id: 430 */
    uint32_t l_850 = 4294967295UL;
    uint8_t l_857 = 0x63L;
    int32_t l_863 = 0x4C81EC61L;
    int32_t l_864 = (-8L);
    int32_t *l_865 = &p_1398->g_355;
    int32_t *l_866[4];
    uint32_t l_867 = 5UL;
    int i;
    for (i = 0; i < 4; i++)
        l_866[i] = (void*)0;
    for (p_1398->g_727.f3 = 1; (p_1398->g_727.f3 <= (-25)); p_1398->g_727.f3 = safe_sub_func_uint16_t_u_u(p_1398->g_727.f3, 1))
    { /* block id: 433 */
        int16_t *l_849 = &p_1398->g_556;
        int64_t *l_853 = &p_1398->g_311.f3;
        int32_t l_862[5];
        int i;
        for (i = 0; i < 5; i++)
            l_862[i] = 0x7D3F572FL;
        l_862[2] ^= (safe_mul_func_int16_t_s_s(((((*l_849) = (-2L)) < p_19) , l_850), (((*p_1398->g_588) | ((*l_853) = (p_19 > ((*p_1398->g_767)++)))) != ((*p_1398->g_524) = (safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s((l_850 >= l_857), (safe_rshift_func_uint16_t_u_u(((*p_1398->g_447) = ((((((~(((((l_857 , (((safe_mod_func_int16_t_s_s(p_19, (*p_1398->g_128))) ^ (-1L)) | p_19)) & l_850) >= l_850) <= (-1L)) || (-4L))) , &p_1398->g_138) != p_16) == p_1398->g_512.f3) < 0x3B05D53980131F11L) || p_19)), 3))))))))));
    }
    (*p_1398->g_769) |= l_850;
    ++l_867;
    return (*p_1398->g_558);
}


/* ------------------------------------------ */
/* 
 * reads : p_1398->g_769 p_1398->g_619 p_1398->g_738 p_1398->g_274 p_1398->g_447 p_1398->g_767 p_1398->g_304 p_1398->g_588 p_1398->g_306 p_1398->g_199.f3 p_1398->g_785 p_1398->g_786
 * writes: p_1398->g_619 p_1398->g_274 p_1398->g_479 p_1398->g_734 p_1398->g_355
 */
int32_t * func_20(uint64_t  p_21, int32_t  p_22, int64_t  p_23, int32_t * p_24, uint32_t  p_25, struct S1 * p_1398)
{ /* block id: 423 */
    uint32_t l_831[7][5][2] = {{{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL}},{{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL}},{{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL}},{{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL}},{{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL}},{{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL}},{{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL},{4294967291UL,4294967291UL}}};
    int32_t *l_832 = &p_1398->g_355;
    int32_t *l_833[1][8][9] = {{{&p_1398->g_3,(void*)0,&p_1398->g_274,&p_1398->g_274,(void*)0,&p_1398->g_3,&p_1398->g_274,&p_1398->g_619,&p_1398->g_274},{&p_1398->g_3,(void*)0,&p_1398->g_274,&p_1398->g_274,(void*)0,&p_1398->g_3,&p_1398->g_274,&p_1398->g_619,&p_1398->g_274},{&p_1398->g_3,(void*)0,&p_1398->g_274,&p_1398->g_274,(void*)0,&p_1398->g_3,&p_1398->g_274,&p_1398->g_619,&p_1398->g_274},{&p_1398->g_3,(void*)0,&p_1398->g_274,&p_1398->g_274,(void*)0,&p_1398->g_3,&p_1398->g_274,&p_1398->g_619,&p_1398->g_274},{&p_1398->g_3,(void*)0,&p_1398->g_274,&p_1398->g_274,(void*)0,&p_1398->g_3,&p_1398->g_274,&p_1398->g_619,&p_1398->g_274},{&p_1398->g_3,(void*)0,&p_1398->g_274,&p_1398->g_274,(void*)0,&p_1398->g_3,&p_1398->g_274,&p_1398->g_619,&p_1398->g_274},{&p_1398->g_3,(void*)0,&p_1398->g_274,&p_1398->g_274,(void*)0,&p_1398->g_3,&p_1398->g_274,&p_1398->g_619,&p_1398->g_274},{&p_1398->g_3,(void*)0,&p_1398->g_274,&p_1398->g_274,(void*)0,&p_1398->g_3,&p_1398->g_274,&p_1398->g_619,&p_1398->g_274}}};
    int16_t l_834[7];
    uint32_t l_835 = 0x2F1B72F0L;
    int64_t **l_838 = &p_1398->g_588;
    int32_t **l_840 = &l_833[0][7][3];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_834[i] = (-10L);
    (*p_1398->g_769) |= l_831[2][0][0];
lbl_841:
    l_835--;
    (*l_840) = func_30((l_838 == l_838), p_23, p_1398);
    if (p_23)
        goto lbl_841;
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_1398->g_769 p_1398->g_619 p_1398->g_98 p_1398->g_84 p_1398->g_588 p_1398->g_306 p_1398->g_199.f3 p_1398->g_819 p_1398->g_767 p_1398->g_304 p_1398->g_766 p_1398->g_572
 * writes: p_1398->g_619 p_1398->g_447 p_1398->g_730.f1 p_1398->g_199.f3
 */
uint64_t  func_26(int32_t * p_27, uint32_t  p_28, int32_t * p_29, struct S1 * p_1398)
{ /* block id: 411 */
    int32_t *l_807[3];
    int16_t l_812 = 0x3927L;
    uint16_t *l_817 = &p_1398->g_479;
    uint16_t **l_818 = &p_1398->g_447;
    int8_t *l_827 = &p_1398->g_730.f1;
    int i;
    for (i = 0; i < 3; i++)
        l_807[i] = &p_1398->g_3;
    (*p_1398->g_769) &= 1L;
    l_807[0] = l_807[0];
    (*p_1398->g_769) = ((*p_1398->g_98) == (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((p_28 >= (!l_812)), (safe_rshift_func_uint8_t_u_s((0xAEA9L < ((*p_1398->g_588) < (((*l_818) = l_817) == (p_1398->g_819 , l_817)))), ((*l_827) = (safe_unary_minus_func_int16_t_s(((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(p_28, (*p_1398->g_767))), 1L)), (**p_1398->g_766))) != p_28)))))))), p_1398->g_572)));
    for (p_1398->g_199.f3 = 0; (p_1398->g_199.f3 > (-2)); p_1398->g_199.f3 = safe_sub_func_uint8_t_u_u(p_1398->g_199.f3, 4))
    { /* block id: 419 */
        int32_t l_830 = (-1L);
        if (l_830)
            break;
    }
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_1398->g_769 p_1398->g_619 p_1398->g_738 p_1398->g_274 p_1398->g_447 p_1398->g_767 p_1398->g_304 p_1398->g_588 p_1398->g_306 p_1398->g_199.f3 p_1398->g_785 p_1398->g_786
 * writes: p_1398->g_619 p_1398->g_274 p_1398->g_448 p_1398->g_734 p_1398->g_355 p_1398->g_479
 */
int32_t * func_30(uint64_t  p_31, uint32_t  p_32, struct S1 * p_1398)
{ /* block id: 402 */
    uint64_t **l_778 = &p_1398->g_767;
    int32_t l_781 = 0x22C0FDA5L;
    uint64_t l_784 = 0x486E237F0C6DCA5EL;
    int32_t l_787 = 0L;
    int32_t l_788 = 1L;
    int32_t l_789 = 0x09498396L;
    int32_t *l_790 = &l_788;
    int32_t *l_791 = &l_787;
    int32_t *l_792 = &l_787;
    int32_t *l_793 = (void*)0;
    int32_t *l_794 = &p_1398->g_355;
    int32_t *l_795 = &p_1398->g_355;
    int32_t *l_796 = &p_1398->g_355;
    int32_t *l_797 = &p_1398->g_355;
    int32_t *l_798[2][8][1] = {{{&l_781},{&l_781},{&l_781},{&l_781},{&l_781},{&l_781},{&l_781},{&l_781}},{{&l_781},{&l_781},{&l_781},{&l_781},{&l_781},{&l_781},{&l_781},{&l_781}}};
    uint64_t l_799 = 0xA75901B339F97DB4L;
    uint64_t *l_804 = (void*)0;
    int32_t *l_805 = &p_1398->g_3;
    int i, j, k;
    (*p_1398->g_769) ^= 3L;
    (*p_1398->g_786) = (((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((*p_1398->g_447) = (((p_32 , ((void*)0 != l_778)) > (safe_sub_func_int32_t_s_s(0x5EAD196FL, ((l_781 || (~(safe_lshift_func_uint16_t_u_s((p_31 <= (((*p_1398->g_738) ^= (*p_1398->g_769)) < l_781)), 9)))) ^ p_31)))) && p_32)), p_32)), l_781)), l_781)) , (*p_1398->g_767)), (*p_1398->g_588))) != l_784) , p_1398->g_785[5][1]);
    l_799++;
    (*p_1398->g_769) = ((*l_797) = (safe_sub_func_uint8_t_u_u(((*p_1398->g_588) >= (*p_1398->g_588)), (l_804 == (void*)0))));
    return l_805;
}


/* ------------------------------------------ */
/* 
 * reads : p_1398->g_447 p_1398->g_448
 * writes:
 */
uint16_t  func_33(int32_t * p_34, int8_t  p_35, int32_t * p_36, struct S1 * p_1398)
{ /* block id: 400 */
    return (*p_1398->g_447);
}


/* ------------------------------------------ */
/* 
 * reads : p_1398->g_479 p_1398->g_452.f3 p_1398->g_375 p_1398->g_311.f1 p_1398->g_80 p_1398->g_467 p_1398->g_106 p_1398->g_524 p_1398->g_523 p_1398->g_193 p_1398->g_513.f1 p_1398->g_447 p_1398->g_448 p_1398->g_589.f3 p_1398->g_512.f2 p_1398->g_260.f3 p_1398->g_419.f2 p_1398->g_588 p_1398->g_199.f1 p_1398->g_735.f0 p_1398->g_738 p_1398->g_737.f3 p_1398->g_732.f0 p_1398->g_737.f2 p_1398->g_734.f4 p_1398->g_766 p_1398->g_768 p_1398->g_769
 * writes: p_1398->g_479 p_1398->g_452.f3 p_1398->g_516 p_1398->g_311.f1 p_1398->g_80 p_1398->g_468 p_1398->g_649 p_1398->g_193 p_1398->g_513.f1 p_1398->g_448 p_1398->g_703 p_1398->g_306 p_1398->g_199.f3 p_1398->g_513.f3 p_1398->g_274 p_1398->g_737.f3 p_1398->g_732.f0 p_1398->g_737.f2 p_1398->g_523 p_1398->g_764 p_1398->g_766
 */
int32_t * func_38(int64_t  p_39, int64_t  p_40, uint64_t  p_41, uint32_t  p_42, struct S1 * p_1398)
{ /* block id: 335 */
    uint16_t l_654 = 65526UL;
    int32_t l_667 = 0x145E8870L;
    int32_t l_668 = 1L;
    int16_t l_669[4];
    int32_t l_670[4][6][3] = {{{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}}};
    int8_t **l_702 = &p_1398->g_98;
    int8_t ***l_701[9] = {&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702};
    int64_t *l_719 = (void*)0;
    int64_t *l_720 = (void*)0;
    int64_t *l_721 = (void*)0;
    int64_t *l_722 = (void*)0;
    int64_t *l_723 = &p_1398->g_513.f3;
    struct S0 **l_724 = (void*)0;
    struct S0 *l_725[7] = {&p_1398->g_419[0],&p_1398->g_634,&p_1398->g_419[0],&p_1398->g_419[0],&p_1398->g_634,&p_1398->g_419[0],&p_1398->g_419[0]};
    struct S0 *l_726[9][4] = {{&p_1398->g_734,&p_1398->g_737,&p_1398->g_730,&p_1398->g_735},{&p_1398->g_734,&p_1398->g_737,&p_1398->g_730,&p_1398->g_735},{&p_1398->g_734,&p_1398->g_737,&p_1398->g_730,&p_1398->g_735},{&p_1398->g_734,&p_1398->g_737,&p_1398->g_730,&p_1398->g_735},{&p_1398->g_734,&p_1398->g_737,&p_1398->g_730,&p_1398->g_735},{&p_1398->g_734,&p_1398->g_737,&p_1398->g_730,&p_1398->g_735},{&p_1398->g_734,&p_1398->g_737,&p_1398->g_730,&p_1398->g_735},{&p_1398->g_734,&p_1398->g_737,&p_1398->g_730,&p_1398->g_735},{&p_1398->g_734,&p_1398->g_737,&p_1398->g_730,&p_1398->g_735}};
    int16_t l_765 = 0x297DL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_669[i] = 0x1C58L;
    for (p_1398->g_479 = 1; (p_1398->g_479 <= 5); p_1398->g_479 += 1)
    { /* block id: 338 */
        int8_t l_661[2][7][6] = {{{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL}},{{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL},{0x16L,0x3DL,0x3DL,0x16L,0x16L,0x3DL}}};
        int32_t l_662[6] = {0x5A0BF6ADL,0x5A0BF6ADL,0x5A0BF6ADL,0x5A0BF6ADL,0x5A0BF6ADL,0x5A0BF6ADL};
        int32_t *l_679 = &l_662[0];
        uint32_t l_689 = 4294967290UL;
        int i, j, k;
        for (p_1398->g_452.f3 = 0; (p_1398->g_452.f3 <= 5); p_1398->g_452.f3 += 1)
        { /* block id: 341 */
            volatile struct S0 *l_642 = &p_1398->g_516[0][1][4];
            int32_t l_655 = 0L;
            int32_t l_658 = 0x680D8FA4L;
            uint8_t l_664[1];
            int32_t l_671 = 0x79807676L;
            int32_t l_672 = 0x64E4D09AL;
            int32_t l_673 = (-1L);
            int32_t l_674 = 9L;
            int32_t l_675 = 0x6F3889FDL;
            int i;
            for (i = 0; i < 1; i++)
                l_664[i] = 0xB6L;
            (*l_642) = p_1398->g_375[p_1398->g_452.f3];
            for (p_1398->g_311.f1 = 0; (p_1398->g_311.f1 <= 8); p_1398->g_311.f1 += 1)
            { /* block id: 345 */
                int32_t ***l_645 = &p_1398->g_394;
                int32_t *l_663[6] = {&p_1398->g_274,&p_1398->g_274,&p_1398->g_274,&p_1398->g_274,&p_1398->g_274,&p_1398->g_274};
                uint32_t l_676 = 0x0150021FL;
                int i;
                for (p_1398->g_80 = 2; (p_1398->g_80 >= 0); p_1398->g_80 -= 1)
                { /* block id: 348 */
                    int32_t ***l_646[10] = {&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394};
                    int32_t ****l_647 = (void*)0;
                    int32_t ****l_648[5][4][2] = {{{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]}},{{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]}},{{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]}},{{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]}},{{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]},{&l_646[2],&l_646[8]}}};
                    int16_t *l_656 = (void*)0;
                    int16_t *l_657 = (void*)0;
                    int i, j, k;
                    l_662[5] |= (safe_div_func_uint8_t_u_u((l_645 != (p_1398->g_649 = ((*p_1398->g_467) = l_646[7]))), ((safe_div_func_int32_t_s_s((p_1398->g_106[p_1398->g_479] || (safe_mul_func_int8_t_s_s(((((l_654 != ((((*p_1398->g_524) | (**p_1398->g_523)) ^ p_1398->g_375[p_1398->g_452.f3].f3) & (l_658 |= l_655))) != (safe_lshift_func_uint8_t_u_u(p_41, l_661[1][6][1]))) > p_39) ^ (-2L)), p_41))), (**p_1398->g_523))) , 0x27L)));
                }
                if (p_1398->g_106[(p_1398->g_452.f3 + 2)])
                    continue;
                l_664[0]--;
                l_676--;
            }
        }
        l_668 &= ((*l_679) ^= p_41);
        for (p_1398->g_193 = 0; (p_1398->g_193 <= 8); p_1398->g_193 += 1)
        { /* block id: 363 */
            int32_t l_680 = 0x654A63D8L;
            int32_t l_681 = 0x7B907FF1L;
            int32_t *l_682 = (void*)0;
            int32_t *l_683 = &l_662[5];
            int32_t *l_684 = &l_667;
            int32_t *l_685 = &p_1398->g_355;
            int32_t *l_686 = &p_1398->g_619;
            int32_t *l_687 = (void*)0;
            int32_t *l_688[9][2] = {{&p_1398->g_80,&p_1398->g_87},{&p_1398->g_80,&p_1398->g_87},{&p_1398->g_80,&p_1398->g_87},{&p_1398->g_80,&p_1398->g_87},{&p_1398->g_80,&p_1398->g_87},{&p_1398->g_80,&p_1398->g_87},{&p_1398->g_80,&p_1398->g_87},{&p_1398->g_80,&p_1398->g_87},{&p_1398->g_80,&p_1398->g_87}};
            int i, j;
            l_689--;
            for (p_1398->g_513.f1 = 0; (p_1398->g_513.f1 <= 2); p_1398->g_513.f1 += 1)
            { /* block id: 367 */
                int32_t *l_692 = &p_1398->g_80;
                l_692 = &l_662[3];
            }
        }
    }
    (*p_1398->g_738) = (safe_rshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(((((((safe_mul_func_uint16_t_u_u((--(*p_1398->g_447)), ((p_1398->g_703[0][5] = &p_1398->g_98) != (((p_41 && (((l_725[2] = ((((*l_723) = (((((*p_1398->g_588) = (l_654 & (safe_unary_minus_func_uint32_t_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((l_670[3][2][1] = (safe_lshift_func_int8_t_s_u((1L <= p_1398->g_589.f3), 2))), ((safe_lshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(p_1398->g_512.f2, 1UL)), (l_668 = (l_668 & 0x688A2CA3L)))) < p_42), p_40)) && p_1398->g_260.f3))), 2)) ^ p_1398->g_419[0].f2), 0UL)))))) != p_1398->g_199.f1) == p_41) != 0x722CL)) ^ p_39) , &p_1398->g_589)) != l_726[6][0]) >= 0x4B6EA573L)) && l_669[0]) , (void*)0)))) <= 0x1EADL) >= p_40) == p_41) == l_669[0]) >= 0x7BB4L), l_669[0])) > p_39) , 0x596BL), p_1398->g_735.f0));
    for (p_1398->g_737.f3 = 0; (p_1398->g_737.f3 == 19); p_1398->g_737.f3 = safe_add_func_int16_t_s_s(p_1398->g_737.f3, 8))
    { /* block id: 382 */
        int32_t *l_745 = &p_1398->g_355;
        int8_t l_748 = (-1L);
        int16_t *l_749 = &l_669[0];
        uint32_t **l_762 = &p_1398->g_524;
        uint32_t ***l_763 = &p_1398->g_523;
        for (p_1398->g_732.f0 = 0; (p_1398->g_732.f0 == 9); ++p_1398->g_732.f0)
        { /* block id: 385 */
            for (p_1398->g_737.f2 = (-19); (p_1398->g_737.f2 != (-30)); p_1398->g_737.f2--)
            { /* block id: 388 */
                return l_745;
            }
        }
        l_745 = &l_667;
        (*l_745) = (((safe_div_func_int64_t_s_s(0x4EF10F203DEBA3D8L, (((((!(p_40 && p_40)) | ((*l_749) = (p_1398->g_734.f4 || l_748))) , ((safe_mod_func_uint64_t_u_u((18446744073709551607UL <= ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(p_39, 6)), (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((p_1398->g_764[1] = ((*l_763) = l_762)) == &p_1398->g_524), 9)), p_40)))) & (*l_745)), 6L)) ^ 0xEBL)), 0x630DB07DF0D3C596L)) == l_765)) == 0x1D87L) ^ p_40))) , p_41) == 9L);
        (*p_1398->g_768) = p_1398->g_766;
    }
    return p_1398->g_769;
}


/* ------------------------------------------ */
/* 
 * reads : p_1398->g_3 p_1398->g_80 p_1398->g_84 p_1398->g_87 p_1398->g_274 p_1398->g_106 p_1398->g_139 p_1398->g_524 p_1398->g_447 p_1398->g_452.f3 p_1398->g_556 p_1398->g_419.f3 p_1398->g_558 p_1398->g_451.f3 p_1398->g_584 p_1398->g_589 p_1398->g_304 p_1398->g_259.f2 p_1398->g_619 p_1398->g_351 p_1398->g_285 p_1398->g_633 p_1398->g_588 p_1398->g_306 p_1398->g_199.f3
 * writes: p_1398->g_82 p_1398->g_84 p_1398->g_87 p_1398->g_274 p_1398->g_139 p_1398->g_448 p_1398->g_556 p_1398->g_80 p_1398->g_491 p_1398->g_572 p_1398->g_583 p_1398->g_588 p_1398->g_419 p_1398->g_199.f2 p_1398->g_452.f2 p_1398->g_190 p_1398->g_357 p_1398->g_106 p_1398->g_304 p_1398->g_285 p_1398->g_634 p_1398->g_479
 */
int64_t  func_43(uint8_t  p_44, int64_t  p_45, uint32_t  p_46, int32_t * p_47, struct S1 * p_1398)
{ /* block id: 8 */
    uint16_t l_65 = 4UL;
    int32_t *l_89 = &p_1398->g_3;
    int32_t **l_88 = &l_89;
    uint16_t *l_118 = &l_65;
    uint8_t **l_179 = &p_1398->g_152[4];
    int32_t l_184 = 0x232C7286L;
    uint64_t l_198 = 7UL;
    uint8_t l_215[9] = {0xA4L,8UL,0xA4L,0xA4L,8UL,0xA4L,0xA4L,8UL,0xA4L};
    int32_t l_271 = (-1L);
    int32_t l_275 = 0x1DEA679EL;
    int32_t l_276 = 3L;
    int32_t l_278 = (-1L);
    uint16_t **l_318[7];
    int32_t l_348 = 0x2535A360L;
    int32_t l_349 = 0x0E34CA72L;
    int32_t l_354[6][4][3] = {{{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)}},{{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)}},{{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)}},{{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)}},{{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)}},{{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)},{0x7D43249AL,0x0F0F1759L,(-8L)}}};
    int32_t l_435 = (-1L);
    int8_t l_439 = (-3L);
    int64_t l_440 = (-1L);
    int32_t l_441 = 0x53721F9BL;
    uint32_t l_443 = 0xE219E54FL;
    int8_t l_478 = (-2L);
    uint32_t l_515[2][5][4] = {{{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L},{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L},{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L},{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L},{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L}},{{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L},{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L},{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L},{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L},{1UL,0x6EFA9371L,4294967295UL,0x6EFA9371L}}};
    uint32_t *l_522 = &p_1398->g_106[4];
    uint32_t **l_521 = &l_522;
    uint16_t l_557 = 3UL;
    uint16_t l_570 = 1UL;
    int32_t *****l_622 = &p_1398->g_467;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_318[i] = &l_118;
lbl_453:
    for (p_45 = 0; (p_45 >= 19); p_45++)
    { /* block id: 11 */
        uint16_t l_60 = 65533UL;
        uint16_t *l_68 = &l_60;
        int32_t *l_79 = &p_1398->g_80;
        uint8_t *l_81 = &p_1398->g_82[7];
        int8_t *l_83[10][5] = {{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]},{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]},{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]},{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]},{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]},{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]},{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]},{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]},{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]},{&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3],&p_1398->g_84[3]}};
        uint32_t l_85[6][6][7] = {{{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL}},{{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL}},{{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL}},{{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL}},{{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL}},{{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL},{0xA08677A3L,0xB9CA2468L,0x7640197FL,0x944B0CECL,4294967287UL,0UL,0UL}}};
        int32_t *l_86 = &p_1398->g_87;
        int32_t ***l_90[5][3][9] = {{{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88}},{{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88}},{{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88}},{{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88}},{{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88},{&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,(void*)0,&l_88}}};
        int i, j, k;
        (*l_86) |= ((safe_lshift_func_int8_t_s_u(((l_60 < (p_1398->g_3 > p_46)) && 18446744073709551608UL), 3)) , ((safe_rshift_func_uint16_t_u_s((0x28AB82AEL != ((safe_add_func_int16_t_s_s(l_65, (safe_mod_func_uint8_t_u_u((((++(*l_68)) > (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((p_1398->g_84[3] |= (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((*l_81) = (((p_45 , p_47) != (l_79 = p_47)) == p_45)), p_1398->g_80)) & p_1398->g_3), 0x486BL))), p_1398->g_3)), 0x5A4AAC46L))) > 0xF2F470B9C45D1882L), l_85[3][1][3])))) == p_44)), 11)) | p_46));
        l_88 = l_88;
    }
    for (p_44 = (-7); (p_44 == 4); p_44 = safe_add_func_int32_t_s_s(p_44, 9))
    { /* block id: 21 */
        int8_t *l_97 = &p_1398->g_84[4];
        int32_t l_104[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
        uint32_t *l_105 = &p_1398->g_106[7];
        uint16_t *l_109 = (void*)0;
        uint8_t *l_153 = &p_1398->g_82[6];
        int32_t l_214 = 0x3993DDFAL;
        struct S0 *l_218[5];
        int32_t ***l_340 = &l_88;
        uint8_t l_398 = 255UL;
        int64_t *l_508 = (void*)0;
        int i;
        for (i = 0; i < 5; i++)
            l_218[i] = &p_1398->g_199;
        (1 + 1);
    }
    if (p_1398->g_3)
        goto lbl_453;
    for (p_1398->g_274 = 2; (p_1398->g_274 >= 0); p_1398->g_274 -= 1)
    { /* block id: 231 */
        int16_t *l_551 = &p_1398->g_139;
        int16_t *l_555 = &p_1398->g_556;
        int32_t l_565[2][1];
        int64_t *l_585 = &p_1398->g_451[0][1][0].f3;
        int64_t **l_586 = &l_585;
        int64_t **l_587 = (void*)0;
        int8_t **l_602 = &p_1398->g_98;
        int8_t ***l_601 = &l_602;
        int32_t l_621 = 0x73177EF3L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_565[i][j] = 0L;
        }
        (*p_1398->g_558) |= (((safe_div_func_int32_t_s_s(l_215[(p_1398->g_274 + 2)], (safe_rshift_func_int16_t_s_u(((*l_555) ^= ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((((p_1398->g_106[(p_1398->g_274 + 2)] , (((p_1398->g_106[(p_1398->g_274 + 1)] > (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((+(safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((*p_1398->g_447) = ((((*l_551) |= p_1398->g_106[p_1398->g_274]) || ((((safe_unary_minus_func_int32_t_s(8L)) , &p_1398->g_468[1][2][1]) == (void*)0) , (safe_mul_func_uint16_t_u_u((*l_89), p_1398->g_106[(p_1398->g_274 + 1)])))) < (*p_1398->g_524))), 14)), p_45))), p_1398->g_452.f3)), (*l_89)))) <= p_45) <= 0x37C0AEFEL)) , &l_215[(p_1398->g_274 + 2)]) != &p_44) , (**l_88)) == 0x75L), 0x8A5FL)), l_215[(p_1398->g_274 + 2)])) != 0x4AD3068DL), 2)) != (*p_47))), p_46)))) & p_1398->g_419[0].f3) && l_557);
        for (l_348 = 8; (l_348 >= 0); l_348 -= 1)
        { /* block id: 238 */
            uint64_t l_566 = 18446744073709551615UL;
            int32_t l_579[1][10][10] = {{{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL},{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL},{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL},{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL},{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL},{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL},{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL},{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL},{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL},{0x20111ACFL,0x6E29B2F8L,(-10L),0x0CC41827L,1L,0x20111ACFL,0x0CC41827L,0x50A7DDB5L,0x0CC41827L,0x20111ACFL}}};
            int32_t l_580 = 0x040FF4A4L;
            int32_t l_581 = 0x2C148369L;
            uint32_t **l_582 = &p_1398->g_524;
            int i, j, k;
            (*l_88) = (*l_88);
            for (p_1398->g_491 = 3; (p_1398->g_491 <= 8); p_1398->g_491 += 1)
            { /* block id: 242 */
                int8_t ***l_559 = (void*)0;
                int8_t **l_561[6] = {&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98,&p_1398->g_98};
                int8_t ***l_560 = &l_561[3];
                int i;
                (*l_560) = (void*)0;
            }
            if ((*p_47))
                break;
            for (l_478 = 0; (l_478 <= 8); l_478 += 1)
            { /* block id: 248 */
                int32_t *l_562 = &l_354[(p_1398->g_274 + 3)][p_1398->g_274][p_1398->g_274];
                int32_t *l_563 = &l_354[5][3][2];
                int32_t *l_564[10] = {&p_1398->g_274,&p_1398->g_80,&l_276,&p_1398->g_80,&p_1398->g_274,&p_1398->g_274,&p_1398->g_80,&l_276,&p_1398->g_80,&p_1398->g_274};
                int32_t *l_571 = &p_1398->g_572;
                int64_t *l_576 = &p_1398->g_311.f3;
                int64_t **l_575 = &l_576;
                uint64_t *l_577[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_577[i] = &p_1398->g_578;
                ++l_566;
                (*l_563) &= l_565[1][0];
                for (l_65 = 0; (l_65 <= 8); l_65 += 1)
                { /* block id: 253 */
                    uint16_t l_569 = 1UL;
                    return l_569;
                }
                p_1398->g_583 = ((*l_563) = ((*p_1398->g_558) = ((*p_1398->g_558) | ((((l_565[1][0] , (((((*l_571) = ((l_570 == p_46) , 0x3B765247L)) , (l_566 & l_566)) , ((l_580 ^= (((l_579[0][7][1] ^= (safe_lshift_func_int8_t_s_s(((((*l_575) = &p_45) == &p_45) >= (**l_88)), 0))) , (*l_563)) , 2UL)) < 0xCC53L)) > l_581)) & p_1398->g_451[0][1][0].f3) , &l_522) == l_582))));
            }
        }
        if ((p_1398->g_584 , (l_565[1][0] >= (0x7BF172D7L >= ((((*l_586) = l_585) != (p_1398->g_588 = &p_1398->g_306[3])) & (-6L))))))
        { /* block id: 267 */
            struct S0 *l_590 = &p_1398->g_419[0];
            int32_t l_603 = (-1L);
            (*l_590) = p_1398->g_589;
            for (p_1398->g_199.f2 = 8; (p_1398->g_199.f2 >= 0); p_1398->g_199.f2 -= 1)
            { /* block id: 271 */
                int32_t *l_595 = &l_565[1][0];
                int32_t **l_596 = &p_1398->g_190;
                int8_t ****l_597 = (void*)0;
                int8_t **l_600 = (void*)0;
                int8_t ***l_599[7][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                int8_t ****l_598 = &l_599[1][0][0];
                int i, j, k;
                for (p_1398->g_583 = 3; (p_1398->g_583 <= 8); p_1398->g_583 += 1)
                { /* block id: 274 */
                    return p_45;
                }
                for (p_1398->g_452.f2 = 1; (p_1398->g_452.f2 >= 0); p_1398->g_452.f2 -= 1)
                { /* block id: 279 */
                    (*l_88) = p_47;
                }
                (*l_595) &= (1UL || (((((p_46 , (safe_mod_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(p_45, (((((void*)0 == p_47) & ((p_1398->g_589.f0 , (*l_88)) == ((*l_596) = l_595))) ^ (((*l_598) = (void*)0) != l_601)) >= (*l_89)))) | l_603), 1L))) > (**l_88)) || p_1398->g_556) && p_1398->g_584.f2) || l_603));
                for (l_271 = 8; (l_271 >= 0); l_271 -= 1)
                { /* block id: 287 */
                    (*l_596) = ((*l_88) = p_47);
                }
                for (p_1398->g_357 = 3; (p_1398->g_357 <= 8); p_1398->g_357 += 1)
                { /* block id: 293 */
                    int32_t *l_604 = &p_1398->g_274;
                    int32_t *l_620 = &p_1398->g_80;
                    int i, j, k;
                    (*l_596) = l_604;
                    l_621 = ((safe_rshift_func_int8_t_s_u((((*l_595) = ((p_1398->g_106[p_1398->g_274] = 0x943B1306L) | (1L & (l_354[(p_1398->g_274 + 2)][(p_1398->g_274 + 1)][p_1398->g_274] &= (*p_47))))) < (((safe_mod_func_int32_t_s_s(((*l_620) = (safe_rshift_func_uint8_t_u_u(((l_215[(p_1398->g_274 + 2)] < ((p_1398->g_304[2][1]--) | ((*l_89) || (*l_604)))) & (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((+0UL), (p_1398->g_259.f2 , ((safe_rshift_func_uint8_t_u_s(251UL, 6)) & 0x72B639BFL)))), 0x41L))), p_1398->g_619))), (**l_88))) && (*l_89)) != 0xB1A6F8D14E3129C2L)), 2)) > p_44);
                }
            }
            l_565[1][0] &= (p_44 , (!(p_44 > (l_622 == l_622))));
        }
        else
        { /* block id: 304 */
            uint32_t l_627 = 0xC3DBB9F8L;
            int32_t *l_632 = &l_354[5][3][2];
            int8_t l_635 = (-4L);
            if ((safe_rshift_func_uint8_t_u_s(((&l_602 != (void*)0) >= (&p_1398->g_467 == (void*)0)), ((4294967295UL | ((safe_mul_func_int8_t_s_s(p_45, (l_627 < ((!((safe_sub_func_uint8_t_u_u(0xEAL, ((safe_lshift_func_uint16_t_u_s(p_46, p_44)) & 0x11L))) & p_1398->g_351)) | p_44)))) < (**l_88))) < 0x0770L))))
            { /* block id: 305 */
                for (l_557 = 0; (l_557 <= 8); l_557 += 1)
                { /* block id: 308 */
                    p_47 = (void*)0;
                    for (p_44 = 0; (p_44 <= 8); p_44 += 1)
                    { /* block id: 312 */
                        int i;
                        (*l_88) = l_632;
                        p_1398->g_285[p_1398->g_274] = p_1398->g_285[(p_1398->g_274 + 4)];
                    }
                    (*l_632) = 0x64C5E0BAL;
                }
                p_1398->g_634 = p_1398->g_633;
                if (l_635)
                    break;
            }
            else
            { /* block id: 320 */
                uint64_t l_637 = 0x07EE58CE52AFE9BAL;
                for (p_1398->g_634.f2 = 3; (p_1398->g_634.f2 <= 8); p_1398->g_634.f2 += 1)
                { /* block id: 323 */
                    int32_t *l_636[9][3][2] = {{{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355}},{{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355}},{{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355}},{{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355}},{{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355}},{{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355}},{{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355}},{{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355}},{{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355},{&l_565[1][0],&p_1398->g_355}}};
                    int i, j, k;
                    l_636[1][0][1] = p_47;
                    l_637++;
                    return p_46;
                }
                if ((*p_47))
                    continue;
            }
            return p_44;
        }
    }
    return (*p_1398->g_588);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1399;
    struct S1* p_1398 = &c_1399;
    struct S1 c_1400 = {
        0x3B4EBB0CL, // p_1398->g_3
        0L, // p_1398->g_80
        {0x51L,0xBDL,0x51L,0x51L,0xBDL,0x51L,0x51L,0xBDL,0x51L,0x51L}, // p_1398->g_82
        {0x1DL,0x1DL,0x1DL,0x1DL,0x1DL}, // p_1398->g_84
        0x3F95235BL, // p_1398->g_87
        &p_1398->g_84[0], // p_1398->g_98
        {0x99AA20CFL,0x03L,-10L,0x09D3BBD11537C3E8L,1L}, // p_1398->g_101
        {0xA62DAC39L,0xA62DAC39L,0xA62DAC39L,0xA62DAC39L,0xA62DAC39L,0xA62DAC39L,0xA62DAC39L,0xA62DAC39L,0xA62DAC39L}, // p_1398->g_106
        0x93F4L, // p_1398->g_129
        &p_1398->g_129, // p_1398->g_128
        0x7919FD84L, // p_1398->g_138
        0x3AF2L, // p_1398->g_139
        (void*)0, // p_1398->g_151
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1398->g_152
        {{{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L}},{{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L}},{{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L}},{{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L}},{{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L}},{{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L}},{{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L}},{{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L}},{{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L},{8UL,0x0E43E29B3848CAB2L,1UL,0xF5C477D8F5040172L,0xD4B6AB49656563EEL,0x035C0580E9A89EFAL,6UL,0UL,0xA6462416D9B02917L}}}, // p_1398->g_162
        248UL, // p_1398->g_176
        (void*)0, // p_1398->g_180
        3UL, // p_1398->g_186
        (void*)0, // p_1398->g_190
        0UL, // p_1398->g_193
        {4294967295UL,0L,0L,6L,0x510957E8L}, // p_1398->g_199
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1398->g_200
        {0xC41BF3F6L,0x0AL,0L,0x42728AC29C0D19E2L,3L}, // p_1398->g_259
        {4294967294UL,0x44L,-1L,0x6A622FDE35EEEF44L,0x2489F9F9L}, // p_1398->g_260
        (-2L), // p_1398->g_274
        {{0xC3802C973D22CD79L,0xE6A86D9D587327DDL,0xC3802C973D22CD79L,0xC3802C973D22CD79L,0xE6A86D9D587327DDL,0xC3802C973D22CD79L},{0xC3802C973D22CD79L,0xE6A86D9D587327DDL,0xC3802C973D22CD79L,0xC3802C973D22CD79L,0xE6A86D9D587327DDL,0xC3802C973D22CD79L},{0xC3802C973D22CD79L,0xE6A86D9D587327DDL,0xC3802C973D22CD79L,0xC3802C973D22CD79L,0xE6A86D9D587327DDL,0xC3802C973D22CD79L},{0xC3802C973D22CD79L,0xE6A86D9D587327DDL,0xC3802C973D22CD79L,0xC3802C973D22CD79L,0xE6A86D9D587327DDL,0xC3802C973D22CD79L}}, // p_1398->g_279
        {{0xBA12C1CEL,0x4DL,-9L,0x674E7248802F0B26L,-2L},{0xBA12C1CEL,0x4DL,-9L,0x674E7248802F0B26L,-2L},{0xBA12C1CEL,0x4DL,-9L,0x674E7248802F0B26L,-2L},{0xBA12C1CEL,0x4DL,-9L,0x674E7248802F0B26L,-2L},{0xBA12C1CEL,0x4DL,-9L,0x674E7248802F0B26L,-2L},{0xBA12C1CEL,0x4DL,-9L,0x674E7248802F0B26L,-2L},{0xBA12C1CEL,0x4DL,-9L,0x674E7248802F0B26L,-2L}}, // p_1398->g_285
        {0xEEAC1006L,0x64L,1L,-2L,0x4CF0E34CL}, // p_1398->g_286
        {{18446744073709551615UL,0x5FF06FB2C722C54AL,0x5FF06FB2C722C54AL,18446744073709551615UL,18446744073709551615UL,0x5FF06FB2C722C54AL,0x5FF06FB2C722C54AL},{18446744073709551615UL,0x5FF06FB2C722C54AL,0x5FF06FB2C722C54AL,18446744073709551615UL,18446744073709551615UL,0x5FF06FB2C722C54AL,0x5FF06FB2C722C54AL},{18446744073709551615UL,0x5FF06FB2C722C54AL,0x5FF06FB2C722C54AL,18446744073709551615UL,18446744073709551615UL,0x5FF06FB2C722C54AL,0x5FF06FB2C722C54AL}}, // p_1398->g_304
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_1398->g_306
        1UL, // p_1398->g_307
        {4294967295UL,0x45L,-1L,0L,-1L}, // p_1398->g_311
        0xE04F13F1L, // p_1398->g_336
        0x25C60533C7EF740CL, // p_1398->g_351
        (-1L), // p_1398->g_355
        18446744073709551610UL, // p_1398->g_357
        {{4294967291UL,2L,1L,-1L,0x0678D7CDL},{4294967291UL,2L,1L,-1L,0x0678D7CDL},{4294967291UL,2L,1L,-1L,0x0678D7CDL},{4294967291UL,2L,1L,-1L,0x0678D7CDL},{4294967291UL,2L,1L,-1L,0x0678D7CDL},{4294967291UL,2L,1L,-1L,0x0678D7CDL}}, // p_1398->g_375
        (void*)0, // p_1398->g_394
        {0L,0L,0L,0L,0L,0L}, // p_1398->g_397
        {{0xA4806D7AL,0x4AL,0x15A7DCC6L,0x37E570BA01F7B8B9L,0x36C8AD7AL},{0xA4806D7AL,0x4AL,0x15A7DCC6L,0x37E570BA01F7B8B9L,0x36C8AD7AL},{0xA4806D7AL,0x4AL,0x15A7DCC6L,0x37E570BA01F7B8B9L,0x36C8AD7AL},{0xA4806D7AL,0x4AL,0x15A7DCC6L,0x37E570BA01F7B8B9L,0x36C8AD7AL},{0xA4806D7AL,0x4AL,0x15A7DCC6L,0x37E570BA01F7B8B9L,0x36C8AD7AL},{0xA4806D7AL,0x4AL,0x15A7DCC6L,0x37E570BA01F7B8B9L,0x36C8AD7AL}}, // p_1398->g_419
        {&p_1398->g_336,&p_1398->g_336,&p_1398->g_336,&p_1398->g_336,&p_1398->g_336,&p_1398->g_336}, // p_1398->g_430
        &p_1398->g_430[0], // p_1398->g_429
        65535UL, // p_1398->g_448
        &p_1398->g_448, // p_1398->g_447
        {{{{0x01A29276L,-1L,0x20397DAEL,0L,0x29C1443CL}},{{0x01A29276L,-1L,0x20397DAEL,0L,0x29C1443CL}},{{0x01A29276L,-1L,0x20397DAEL,0L,0x29C1443CL}},{{0x01A29276L,-1L,0x20397DAEL,0L,0x29C1443CL}}},{{{0x01A29276L,-1L,0x20397DAEL,0L,0x29C1443CL}},{{0x01A29276L,-1L,0x20397DAEL,0L,0x29C1443CL}},{{0x01A29276L,-1L,0x20397DAEL,0L,0x29C1443CL}},{{0x01A29276L,-1L,0x20397DAEL,0L,0x29C1443CL}}}}, // p_1398->g_451
        {0x7DCF541AL,0x10L,-1L,-7L,0x0BA90AE4L}, // p_1398->g_452
        {{{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394}},{{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394}},{{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394}},{{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394}},{{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394},{&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394,&p_1398->g_394}}}, // p_1398->g_468
        &p_1398->g_468[4][0][0], // p_1398->g_467
        2UL, // p_1398->g_479
        0x9BD98AFB7F0A5CE7L, // p_1398->g_491
        {6UL,0x0CL,7L,1L,0L}, // p_1398->g_512
        {4294967286UL,-8L,1L,0x28F0C790F4CAAC5EL,-7L}, // p_1398->g_513
        {{{{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L}},{{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L},{1UL,0x51L,0x087BC6BBL,0x35DE58918C9AF755L,1L}}}}, // p_1398->g_516
        &p_1398->g_106[7], // p_1398->g_524
        &p_1398->g_524, // p_1398->g_523
        (-1L), // p_1398->g_556
        &p_1398->g_80, // p_1398->g_558
        (-1L), // p_1398->g_572
        18446744073709551615UL, // p_1398->g_578
        18446744073709551613UL, // p_1398->g_583
        {5UL,-3L,0L,0x4FEEE750804B5F0FL,0x190BD89BL}, // p_1398->g_584
        &p_1398->g_199.f3, // p_1398->g_588
        {0xDBB43210L,0L,0x2B4B0834L,0x1D59CAF42D5FFE45L,0x6CA83FCEL}, // p_1398->g_589
        0L, // p_1398->g_619
        {1UL,0L,-7L,0x7D8D5A3B838D60E8L,0x20735648L}, // p_1398->g_633
        {0xFB5C3E4CL,-9L,-5L,1L,-1L}, // p_1398->g_634
        &p_1398->g_394, // p_1398->g_649
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1398->g_703
        {9UL,-9L,1L,-4L,0x2764FAECL}, // p_1398->g_727
        {4UL,0x4DL,-9L,0x7536EAFB9044F3A0L,5L}, // p_1398->g_728
        {0xE1909EA7L,0L,1L,3L,0x72030C18L}, // p_1398->g_729
        {0xD301A13CL,-1L,0x04A6A357L,0x182B5BA94AE73DB6L,9L}, // p_1398->g_730
        {0xF45D24A7L,0L,4L,-8L,0x0CAE4BB7L}, // p_1398->g_731
        {4294967295UL,1L,0x230DA7B8L,0x611C9789CC6CA064L,0x00EAE0FCL}, // p_1398->g_732
        {4294967291UL,0x4DL,0x6A5336C1L,0L,0x7EF6AFFCL}, // p_1398->g_733
        {1UL,0x04L,1L,-1L,0x2CB11DD5L}, // p_1398->g_734
        {0x8AB35B36L,0x02L,0x4A7A4679L,8L,-9L}, // p_1398->g_735
        {0x63BB18ABL,0x0CL,1L,0x5FE20303D958065EL,0x51450FE1L}, // p_1398->g_736
        {0xCF21C844L,0x66L,0L,0x4311D3215DC33A1AL,0x67492C71L}, // p_1398->g_737
        &p_1398->g_274, // p_1398->g_738
        {&p_1398->g_524,&p_1398->g_524,&p_1398->g_524}, // p_1398->g_764
        &p_1398->g_304[1][2], // p_1398->g_767
        &p_1398->g_767, // p_1398->g_766
        &p_1398->g_766, // p_1398->g_768
        &p_1398->g_619, // p_1398->g_769
        {{{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{0UL,0x2CL,0x2CB56205L,7L,0x7EA12A16L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L}},{{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{0UL,0x2CL,0x2CB56205L,7L,0x7EA12A16L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L}},{{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{0UL,0x2CL,0x2CB56205L,7L,0x7EA12A16L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L}},{{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{0UL,0x2CL,0x2CB56205L,7L,0x7EA12A16L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L}},{{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{0UL,0x2CL,0x2CB56205L,7L,0x7EA12A16L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L}},{{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{0UL,0x2CL,0x2CB56205L,7L,0x7EA12A16L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L}},{{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{0UL,0x2CL,0x2CB56205L,7L,0x7EA12A16L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L},{5UL,-10L,-10L,0x4692C65654BE70E3L,-10L}}}, // p_1398->g_785
        &p_1398->g_734, // p_1398->g_786
        {1UL,-9L,0x4E314762L,0x5A23EA4D99BC6854L,0x4253C0C7L}, // p_1398->g_819
        (void*)0, // p_1398->g_839
        0xF06CL, // p_1398->g_873
        {5UL,1L,0x3AEE9FA2L,0x5A25100537F8071CL,0L}, // p_1398->g_876
        0x13825969L, // p_1398->g_896
        {0xA07BF29FL,9L,0L,0x60F7B8427990348AL,0x43DBF8E7L}, // p_1398->g_945
        (void*)0, // p_1398->g_951
        &p_1398->g_769, // p_1398->g_953
        1UL, // p_1398->g_977
        {0xD2D80828L,-6L,0x31DD1C27L,-1L,1L}, // p_1398->g_978
        {0x2CB438A9L,0x2CB438A9L,0x2CB438A9L}, // p_1398->g_1046
        {0UL,2L,0x248C184BL,0L,0x4E727DD7L}, // p_1398->g_1196
        (void*)0, // p_1398->g_1204
        {&p_1398->g_1204,(void*)0,&p_1398->g_1204,&p_1398->g_1204,(void*)0,&p_1398->g_1204}, // p_1398->g_1203
        {&p_1398->g_190,&p_1398->g_190}, // p_1398->g_1208
        &p_1398->g_190, // p_1398->g_1209
        {0x17BB8A6FL}, // p_1398->g_1226
        &p_1398->g_703[0][5], // p_1398->g_1260
        {{{&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260},{&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260,&p_1398->g_1260}}}, // p_1398->g_1259
        {0xA5C0096AL,0L,0x7EBFA0FDL,3L,0x1CF5E889L}, // p_1398->g_1320
        {3UL,3UL,3UL,3UL}, // p_1398->g_1339
        0x5FFE6AADL, // p_1398->g_1367
        &p_1398->g_556, // p_1398->g_1394
    };
    c_1399 = c_1400;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1398);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1398->g_3, "p_1398->g_3", print_hash_value);
    transparent_crc(p_1398->g_80, "p_1398->g_80", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1398->g_82[i], "p_1398->g_82[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1398->g_84[i], "p_1398->g_84[i]", print_hash_value);

    }
    transparent_crc(p_1398->g_87, "p_1398->g_87", print_hash_value);
    transparent_crc(p_1398->g_101.f0, "p_1398->g_101.f0", print_hash_value);
    transparent_crc(p_1398->g_101.f1, "p_1398->g_101.f1", print_hash_value);
    transparent_crc(p_1398->g_101.f2, "p_1398->g_101.f2", print_hash_value);
    transparent_crc(p_1398->g_101.f3, "p_1398->g_101.f3", print_hash_value);
    transparent_crc(p_1398->g_101.f4, "p_1398->g_101.f4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1398->g_106[i], "p_1398->g_106[i]", print_hash_value);

    }
    transparent_crc(p_1398->g_129, "p_1398->g_129", print_hash_value);
    transparent_crc(p_1398->g_138, "p_1398->g_138", print_hash_value);
    transparent_crc(p_1398->g_139, "p_1398->g_139", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1398->g_162[i][j][k], "p_1398->g_162[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1398->g_176, "p_1398->g_176", print_hash_value);
    transparent_crc(p_1398->g_186, "p_1398->g_186", print_hash_value);
    transparent_crc(p_1398->g_193, "p_1398->g_193", print_hash_value);
    transparent_crc(p_1398->g_199.f0, "p_1398->g_199.f0", print_hash_value);
    transparent_crc(p_1398->g_199.f1, "p_1398->g_199.f1", print_hash_value);
    transparent_crc(p_1398->g_199.f2, "p_1398->g_199.f2", print_hash_value);
    transparent_crc(p_1398->g_199.f3, "p_1398->g_199.f3", print_hash_value);
    transparent_crc(p_1398->g_199.f4, "p_1398->g_199.f4", print_hash_value);
    transparent_crc(p_1398->g_259.f0, "p_1398->g_259.f0", print_hash_value);
    transparent_crc(p_1398->g_259.f1, "p_1398->g_259.f1", print_hash_value);
    transparent_crc(p_1398->g_259.f2, "p_1398->g_259.f2", print_hash_value);
    transparent_crc(p_1398->g_259.f3, "p_1398->g_259.f3", print_hash_value);
    transparent_crc(p_1398->g_259.f4, "p_1398->g_259.f4", print_hash_value);
    transparent_crc(p_1398->g_260.f0, "p_1398->g_260.f0", print_hash_value);
    transparent_crc(p_1398->g_260.f1, "p_1398->g_260.f1", print_hash_value);
    transparent_crc(p_1398->g_260.f2, "p_1398->g_260.f2", print_hash_value);
    transparent_crc(p_1398->g_260.f3, "p_1398->g_260.f3", print_hash_value);
    transparent_crc(p_1398->g_260.f4, "p_1398->g_260.f4", print_hash_value);
    transparent_crc(p_1398->g_274, "p_1398->g_274", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1398->g_279[i][j], "p_1398->g_279[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1398->g_285[i].f0, "p_1398->g_285[i].f0", print_hash_value);
        transparent_crc(p_1398->g_285[i].f1, "p_1398->g_285[i].f1", print_hash_value);
        transparent_crc(p_1398->g_285[i].f2, "p_1398->g_285[i].f2", print_hash_value);
        transparent_crc(p_1398->g_285[i].f3, "p_1398->g_285[i].f3", print_hash_value);
        transparent_crc(p_1398->g_285[i].f4, "p_1398->g_285[i].f4", print_hash_value);

    }
    transparent_crc(p_1398->g_286.f0, "p_1398->g_286.f0", print_hash_value);
    transparent_crc(p_1398->g_286.f1, "p_1398->g_286.f1", print_hash_value);
    transparent_crc(p_1398->g_286.f2, "p_1398->g_286.f2", print_hash_value);
    transparent_crc(p_1398->g_286.f3, "p_1398->g_286.f3", print_hash_value);
    transparent_crc(p_1398->g_286.f4, "p_1398->g_286.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1398->g_304[i][j], "p_1398->g_304[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1398->g_306[i], "p_1398->g_306[i]", print_hash_value);

    }
    transparent_crc(p_1398->g_307, "p_1398->g_307", print_hash_value);
    transparent_crc(p_1398->g_311.f0, "p_1398->g_311.f0", print_hash_value);
    transparent_crc(p_1398->g_311.f1, "p_1398->g_311.f1", print_hash_value);
    transparent_crc(p_1398->g_311.f2, "p_1398->g_311.f2", print_hash_value);
    transparent_crc(p_1398->g_311.f3, "p_1398->g_311.f3", print_hash_value);
    transparent_crc(p_1398->g_311.f4, "p_1398->g_311.f4", print_hash_value);
    transparent_crc(p_1398->g_336, "p_1398->g_336", print_hash_value);
    transparent_crc(p_1398->g_351, "p_1398->g_351", print_hash_value);
    transparent_crc(p_1398->g_355, "p_1398->g_355", print_hash_value);
    transparent_crc(p_1398->g_357, "p_1398->g_357", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1398->g_375[i].f0, "p_1398->g_375[i].f0", print_hash_value);
        transparent_crc(p_1398->g_375[i].f1, "p_1398->g_375[i].f1", print_hash_value);
        transparent_crc(p_1398->g_375[i].f2, "p_1398->g_375[i].f2", print_hash_value);
        transparent_crc(p_1398->g_375[i].f3, "p_1398->g_375[i].f3", print_hash_value);
        transparent_crc(p_1398->g_375[i].f4, "p_1398->g_375[i].f4", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1398->g_397[i], "p_1398->g_397[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1398->g_419[i].f0, "p_1398->g_419[i].f0", print_hash_value);
        transparent_crc(p_1398->g_419[i].f1, "p_1398->g_419[i].f1", print_hash_value);
        transparent_crc(p_1398->g_419[i].f2, "p_1398->g_419[i].f2", print_hash_value);
        transparent_crc(p_1398->g_419[i].f3, "p_1398->g_419[i].f3", print_hash_value);
        transparent_crc(p_1398->g_419[i].f4, "p_1398->g_419[i].f4", print_hash_value);

    }
    transparent_crc(p_1398->g_448, "p_1398->g_448", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1398->g_451[i][j][k].f0, "p_1398->g_451[i][j][k].f0", print_hash_value);
                transparent_crc(p_1398->g_451[i][j][k].f1, "p_1398->g_451[i][j][k].f1", print_hash_value);
                transparent_crc(p_1398->g_451[i][j][k].f2, "p_1398->g_451[i][j][k].f2", print_hash_value);
                transparent_crc(p_1398->g_451[i][j][k].f3, "p_1398->g_451[i][j][k].f3", print_hash_value);
                transparent_crc(p_1398->g_451[i][j][k].f4, "p_1398->g_451[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(p_1398->g_452.f0, "p_1398->g_452.f0", print_hash_value);
    transparent_crc(p_1398->g_452.f1, "p_1398->g_452.f1", print_hash_value);
    transparent_crc(p_1398->g_452.f2, "p_1398->g_452.f2", print_hash_value);
    transparent_crc(p_1398->g_452.f3, "p_1398->g_452.f3", print_hash_value);
    transparent_crc(p_1398->g_452.f4, "p_1398->g_452.f4", print_hash_value);
    transparent_crc(p_1398->g_479, "p_1398->g_479", print_hash_value);
    transparent_crc(p_1398->g_491, "p_1398->g_491", print_hash_value);
    transparent_crc(p_1398->g_512.f0, "p_1398->g_512.f0", print_hash_value);
    transparent_crc(p_1398->g_512.f1, "p_1398->g_512.f1", print_hash_value);
    transparent_crc(p_1398->g_512.f2, "p_1398->g_512.f2", print_hash_value);
    transparent_crc(p_1398->g_512.f3, "p_1398->g_512.f3", print_hash_value);
    transparent_crc(p_1398->g_512.f4, "p_1398->g_512.f4", print_hash_value);
    transparent_crc(p_1398->g_513.f0, "p_1398->g_513.f0", print_hash_value);
    transparent_crc(p_1398->g_513.f1, "p_1398->g_513.f1", print_hash_value);
    transparent_crc(p_1398->g_513.f2, "p_1398->g_513.f2", print_hash_value);
    transparent_crc(p_1398->g_513.f3, "p_1398->g_513.f3", print_hash_value);
    transparent_crc(p_1398->g_513.f4, "p_1398->g_513.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1398->g_516[i][j][k].f0, "p_1398->g_516[i][j][k].f0", print_hash_value);
                transparent_crc(p_1398->g_516[i][j][k].f1, "p_1398->g_516[i][j][k].f1", print_hash_value);
                transparent_crc(p_1398->g_516[i][j][k].f2, "p_1398->g_516[i][j][k].f2", print_hash_value);
                transparent_crc(p_1398->g_516[i][j][k].f3, "p_1398->g_516[i][j][k].f3", print_hash_value);
                transparent_crc(p_1398->g_516[i][j][k].f4, "p_1398->g_516[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(p_1398->g_556, "p_1398->g_556", print_hash_value);
    transparent_crc(p_1398->g_572, "p_1398->g_572", print_hash_value);
    transparent_crc(p_1398->g_578, "p_1398->g_578", print_hash_value);
    transparent_crc(p_1398->g_583, "p_1398->g_583", print_hash_value);
    transparent_crc(p_1398->g_584.f0, "p_1398->g_584.f0", print_hash_value);
    transparent_crc(p_1398->g_584.f1, "p_1398->g_584.f1", print_hash_value);
    transparent_crc(p_1398->g_584.f2, "p_1398->g_584.f2", print_hash_value);
    transparent_crc(p_1398->g_584.f3, "p_1398->g_584.f3", print_hash_value);
    transparent_crc(p_1398->g_584.f4, "p_1398->g_584.f4", print_hash_value);
    transparent_crc(p_1398->g_589.f0, "p_1398->g_589.f0", print_hash_value);
    transparent_crc(p_1398->g_589.f1, "p_1398->g_589.f1", print_hash_value);
    transparent_crc(p_1398->g_589.f2, "p_1398->g_589.f2", print_hash_value);
    transparent_crc(p_1398->g_589.f3, "p_1398->g_589.f3", print_hash_value);
    transparent_crc(p_1398->g_589.f4, "p_1398->g_589.f4", print_hash_value);
    transparent_crc(p_1398->g_619, "p_1398->g_619", print_hash_value);
    transparent_crc(p_1398->g_633.f0, "p_1398->g_633.f0", print_hash_value);
    transparent_crc(p_1398->g_633.f1, "p_1398->g_633.f1", print_hash_value);
    transparent_crc(p_1398->g_633.f2, "p_1398->g_633.f2", print_hash_value);
    transparent_crc(p_1398->g_633.f3, "p_1398->g_633.f3", print_hash_value);
    transparent_crc(p_1398->g_633.f4, "p_1398->g_633.f4", print_hash_value);
    transparent_crc(p_1398->g_634.f0, "p_1398->g_634.f0", print_hash_value);
    transparent_crc(p_1398->g_634.f1, "p_1398->g_634.f1", print_hash_value);
    transparent_crc(p_1398->g_634.f2, "p_1398->g_634.f2", print_hash_value);
    transparent_crc(p_1398->g_634.f3, "p_1398->g_634.f3", print_hash_value);
    transparent_crc(p_1398->g_634.f4, "p_1398->g_634.f4", print_hash_value);
    transparent_crc(p_1398->g_727.f0, "p_1398->g_727.f0", print_hash_value);
    transparent_crc(p_1398->g_727.f1, "p_1398->g_727.f1", print_hash_value);
    transparent_crc(p_1398->g_727.f2, "p_1398->g_727.f2", print_hash_value);
    transparent_crc(p_1398->g_727.f3, "p_1398->g_727.f3", print_hash_value);
    transparent_crc(p_1398->g_727.f4, "p_1398->g_727.f4", print_hash_value);
    transparent_crc(p_1398->g_728.f0, "p_1398->g_728.f0", print_hash_value);
    transparent_crc(p_1398->g_728.f1, "p_1398->g_728.f1", print_hash_value);
    transparent_crc(p_1398->g_728.f2, "p_1398->g_728.f2", print_hash_value);
    transparent_crc(p_1398->g_728.f3, "p_1398->g_728.f3", print_hash_value);
    transparent_crc(p_1398->g_728.f4, "p_1398->g_728.f4", print_hash_value);
    transparent_crc(p_1398->g_729.f0, "p_1398->g_729.f0", print_hash_value);
    transparent_crc(p_1398->g_729.f1, "p_1398->g_729.f1", print_hash_value);
    transparent_crc(p_1398->g_729.f2, "p_1398->g_729.f2", print_hash_value);
    transparent_crc(p_1398->g_729.f3, "p_1398->g_729.f3", print_hash_value);
    transparent_crc(p_1398->g_729.f4, "p_1398->g_729.f4", print_hash_value);
    transparent_crc(p_1398->g_730.f0, "p_1398->g_730.f0", print_hash_value);
    transparent_crc(p_1398->g_730.f1, "p_1398->g_730.f1", print_hash_value);
    transparent_crc(p_1398->g_730.f2, "p_1398->g_730.f2", print_hash_value);
    transparent_crc(p_1398->g_730.f3, "p_1398->g_730.f3", print_hash_value);
    transparent_crc(p_1398->g_730.f4, "p_1398->g_730.f4", print_hash_value);
    transparent_crc(p_1398->g_731.f0, "p_1398->g_731.f0", print_hash_value);
    transparent_crc(p_1398->g_731.f1, "p_1398->g_731.f1", print_hash_value);
    transparent_crc(p_1398->g_731.f2, "p_1398->g_731.f2", print_hash_value);
    transparent_crc(p_1398->g_731.f3, "p_1398->g_731.f3", print_hash_value);
    transparent_crc(p_1398->g_731.f4, "p_1398->g_731.f4", print_hash_value);
    transparent_crc(p_1398->g_732.f0, "p_1398->g_732.f0", print_hash_value);
    transparent_crc(p_1398->g_732.f1, "p_1398->g_732.f1", print_hash_value);
    transparent_crc(p_1398->g_732.f2, "p_1398->g_732.f2", print_hash_value);
    transparent_crc(p_1398->g_732.f3, "p_1398->g_732.f3", print_hash_value);
    transparent_crc(p_1398->g_732.f4, "p_1398->g_732.f4", print_hash_value);
    transparent_crc(p_1398->g_733.f0, "p_1398->g_733.f0", print_hash_value);
    transparent_crc(p_1398->g_733.f1, "p_1398->g_733.f1", print_hash_value);
    transparent_crc(p_1398->g_733.f2, "p_1398->g_733.f2", print_hash_value);
    transparent_crc(p_1398->g_733.f3, "p_1398->g_733.f3", print_hash_value);
    transparent_crc(p_1398->g_733.f4, "p_1398->g_733.f4", print_hash_value);
    transparent_crc(p_1398->g_734.f0, "p_1398->g_734.f0", print_hash_value);
    transparent_crc(p_1398->g_734.f1, "p_1398->g_734.f1", print_hash_value);
    transparent_crc(p_1398->g_734.f2, "p_1398->g_734.f2", print_hash_value);
    transparent_crc(p_1398->g_734.f3, "p_1398->g_734.f3", print_hash_value);
    transparent_crc(p_1398->g_734.f4, "p_1398->g_734.f4", print_hash_value);
    transparent_crc(p_1398->g_735.f0, "p_1398->g_735.f0", print_hash_value);
    transparent_crc(p_1398->g_735.f1, "p_1398->g_735.f1", print_hash_value);
    transparent_crc(p_1398->g_735.f2, "p_1398->g_735.f2", print_hash_value);
    transparent_crc(p_1398->g_735.f3, "p_1398->g_735.f3", print_hash_value);
    transparent_crc(p_1398->g_735.f4, "p_1398->g_735.f4", print_hash_value);
    transparent_crc(p_1398->g_736.f0, "p_1398->g_736.f0", print_hash_value);
    transparent_crc(p_1398->g_736.f1, "p_1398->g_736.f1", print_hash_value);
    transparent_crc(p_1398->g_736.f2, "p_1398->g_736.f2", print_hash_value);
    transparent_crc(p_1398->g_736.f3, "p_1398->g_736.f3", print_hash_value);
    transparent_crc(p_1398->g_736.f4, "p_1398->g_736.f4", print_hash_value);
    transparent_crc(p_1398->g_737.f0, "p_1398->g_737.f0", print_hash_value);
    transparent_crc(p_1398->g_737.f1, "p_1398->g_737.f1", print_hash_value);
    transparent_crc(p_1398->g_737.f2, "p_1398->g_737.f2", print_hash_value);
    transparent_crc(p_1398->g_737.f3, "p_1398->g_737.f3", print_hash_value);
    transparent_crc(p_1398->g_737.f4, "p_1398->g_737.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1398->g_785[i][j].f0, "p_1398->g_785[i][j].f0", print_hash_value);
            transparent_crc(p_1398->g_785[i][j].f1, "p_1398->g_785[i][j].f1", print_hash_value);
            transparent_crc(p_1398->g_785[i][j].f2, "p_1398->g_785[i][j].f2", print_hash_value);
            transparent_crc(p_1398->g_785[i][j].f3, "p_1398->g_785[i][j].f3", print_hash_value);
            transparent_crc(p_1398->g_785[i][j].f4, "p_1398->g_785[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_1398->g_819.f0, "p_1398->g_819.f0", print_hash_value);
    transparent_crc(p_1398->g_819.f1, "p_1398->g_819.f1", print_hash_value);
    transparent_crc(p_1398->g_819.f2, "p_1398->g_819.f2", print_hash_value);
    transparent_crc(p_1398->g_819.f3, "p_1398->g_819.f3", print_hash_value);
    transparent_crc(p_1398->g_819.f4, "p_1398->g_819.f4", print_hash_value);
    transparent_crc(p_1398->g_873, "p_1398->g_873", print_hash_value);
    transparent_crc(p_1398->g_876.f0, "p_1398->g_876.f0", print_hash_value);
    transparent_crc(p_1398->g_876.f1, "p_1398->g_876.f1", print_hash_value);
    transparent_crc(p_1398->g_876.f2, "p_1398->g_876.f2", print_hash_value);
    transparent_crc(p_1398->g_876.f3, "p_1398->g_876.f3", print_hash_value);
    transparent_crc(p_1398->g_876.f4, "p_1398->g_876.f4", print_hash_value);
    transparent_crc(p_1398->g_896, "p_1398->g_896", print_hash_value);
    transparent_crc(p_1398->g_945.f0, "p_1398->g_945.f0", print_hash_value);
    transparent_crc(p_1398->g_945.f1, "p_1398->g_945.f1", print_hash_value);
    transparent_crc(p_1398->g_945.f2, "p_1398->g_945.f2", print_hash_value);
    transparent_crc(p_1398->g_945.f3, "p_1398->g_945.f3", print_hash_value);
    transparent_crc(p_1398->g_945.f4, "p_1398->g_945.f4", print_hash_value);
    transparent_crc(p_1398->g_977, "p_1398->g_977", print_hash_value);
    transparent_crc(p_1398->g_978.f0, "p_1398->g_978.f0", print_hash_value);
    transparent_crc(p_1398->g_978.f1, "p_1398->g_978.f1", print_hash_value);
    transparent_crc(p_1398->g_978.f2, "p_1398->g_978.f2", print_hash_value);
    transparent_crc(p_1398->g_978.f3, "p_1398->g_978.f3", print_hash_value);
    transparent_crc(p_1398->g_978.f4, "p_1398->g_978.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1398->g_1046[i], "p_1398->g_1046[i]", print_hash_value);

    }
    transparent_crc(p_1398->g_1196.f0, "p_1398->g_1196.f0", print_hash_value);
    transparent_crc(p_1398->g_1196.f1, "p_1398->g_1196.f1", print_hash_value);
    transparent_crc(p_1398->g_1196.f2, "p_1398->g_1196.f2", print_hash_value);
    transparent_crc(p_1398->g_1196.f3, "p_1398->g_1196.f3", print_hash_value);
    transparent_crc(p_1398->g_1196.f4, "p_1398->g_1196.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1398->g_1226[i], "p_1398->g_1226[i]", print_hash_value);

    }
    transparent_crc(p_1398->g_1320.f0, "p_1398->g_1320.f0", print_hash_value);
    transparent_crc(p_1398->g_1320.f1, "p_1398->g_1320.f1", print_hash_value);
    transparent_crc(p_1398->g_1320.f2, "p_1398->g_1320.f2", print_hash_value);
    transparent_crc(p_1398->g_1320.f3, "p_1398->g_1320.f3", print_hash_value);
    transparent_crc(p_1398->g_1320.f4, "p_1398->g_1320.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1398->g_1339[i], "p_1398->g_1339[i]", print_hash_value);

    }
    transparent_crc(p_1398->g_1367, "p_1398->g_1367", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
