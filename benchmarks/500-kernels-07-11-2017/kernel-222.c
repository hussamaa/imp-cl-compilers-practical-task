// -g 62,56,2 -l 1,8,2
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


// Seed: 1931072854

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int64_t  f1;
   int64_t  f2;
};

struct S1 {
   volatile int32_t  f0;
   uint8_t  f1;
   volatile uint16_t  f2;
   uint16_t  f3;
   volatile uint64_t  f4;
};

struct S2 {
   uint32_t  f0;
   int32_t  f1;
};

struct S3 {
   int64_t  f0;
   struct S2  f1;
   uint64_t  f2;
   int32_t  f3;
};

struct S4 {
   int16_t  f0;
   volatile int8_t  f1;
   int32_t  f2;
};

union U5 {
   struct S2  f0;
   struct S0  f1;
   int64_t  f2;
   int32_t  f3;
};

union U6 {
   int8_t  f0;
};

struct S7 {
    int32_t g_2;
    int32_t g_6;
    struct S3 g_31;
    int8_t g_43;
    struct S0 g_45;
    int8_t *g_94;
    int8_t **g_93[3][5];
    int32_t g_106;
    uint16_t g_110;
    int8_t g_118;
    int16_t g_121[9];
    int32_t * volatile g_123;
    uint32_t g_133;
    uint64_t g_142;
    int16_t *g_149;
    int32_t g_153;
    struct S4 g_154;
    volatile struct S0 g_163[8][8];
    volatile int8_t g_181;
    union U5 g_198;
    volatile struct S4 g_202;
    volatile struct S4 * volatile g_203;
    struct S2 * volatile g_229;
    volatile struct S1 g_242;
    volatile struct S4 g_246;
    volatile struct S4 g_247;
    struct S2 * volatile * volatile g_248;
    struct S3 g_252;
    uint32_t g_262;
    uint8_t g_268;
    int32_t * volatile g_273[8][10];
    int32_t * volatile g_274;
    int32_t *g_280[6][6][2];
    int32_t ** volatile g_279;
    int32_t *g_283[1];
    volatile struct S4 g_293;
    uint32_t g_315;
    uint32_t g_317;
    volatile struct S1 g_324[9];
    struct S4 g_368;
    int32_t g_373;
    int8_t g_385;
    volatile uint64_t g_387;
    struct S1 g_410;
    uint16_t g_412;
    int8_t **g_413;
    uint16_t g_478;
    uint32_t g_493;
    uint32_t g_495;
    int8_t g_527[2][6][10];
    uint64_t g_541;
    int64_t g_551;
    int32_t ** volatile g_560;
    int32_t * volatile g_565;
    uint16_t g_570[8][9];
    union U6 g_582;
    struct S3 * volatile g_586;
    int8_t *** volatile g_640[8][9];
    int8_t *** volatile g_642;
    int32_t g_704;
    union U6 g_707;
    union U6 *g_706;
    struct S4 ** volatile g_712;
    struct S4 *g_713;
    struct S0 * volatile g_753;
    union U5 *g_784;
    uint8_t g_852;
    int32_t ** volatile g_855;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S7 * p_856);
struct S1  func_11(uint8_t  p_12, union U5  p_13, uint32_t  p_14, struct S7 * p_856);
uint32_t  func_25(struct S3  p_26, int32_t  p_27, int8_t  p_28, int8_t  p_29, int32_t  p_30, struct S7 * p_856);
struct S1  func_32(int8_t  p_33, struct S3  p_34, struct S0  p_35, uint32_t  p_36, struct S7 * p_856);
int8_t ** func_47(int64_t  p_48, int32_t  p_49, uint32_t  p_50, union U5  p_51, struct S7 * p_856);
uint32_t  func_54(int8_t  p_55, int64_t  p_56, int8_t * p_57, union U6  p_58, struct S7 * p_856);
uint32_t  func_59(int64_t  p_60, uint32_t  p_61, int8_t ** p_62, struct S7 * p_856);
struct S1  func_72(union U5  p_73, uint32_t  p_74, int32_t * p_75, int8_t ** p_76, int32_t * p_77, struct S7 * p_856);
uint64_t  func_79(union U5  p_80, int8_t  p_81, uint32_t  p_82, int64_t  p_83, int32_t  p_84, struct S7 * p_856);
int32_t * func_86(int8_t ** p_87, int8_t * p_88, int8_t ** p_89, uint64_t  p_90, struct S7 * p_856);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_856->g_2 p_856->g_6
 * writes: p_856->g_2 p_856->g_6
 */
int32_t  func_1(struct S7 * p_856)
{ /* block id: 4 */
    struct S0 l_5[8][8][4] = {{{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}}},{{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}}},{{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}}},{{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}}},{{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}}},{{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}}},{{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}}},{{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}},{{0x2F5BD103L,0L,-8L},{-4L,0L,-1L},{0x6403EC6BL,0L,-1L},{6L,0x124FAE1B8E030C70L,0x0B0A975422B1FF20L}}}};
    int32_t l_22 = 0x468EAF90L;
    uint8_t l_41 = 8UL;
    struct S3 l_44 = {0x03AE85CDDA558632L,{0UL,0x24600C22L},9UL,0x6AD7C107L};
    uint32_t l_46 = 3UL;
    uint8_t l_751[5][4][2] = {{{1UL,9UL},{1UL,9UL},{1UL,9UL},{1UL,9UL}},{{1UL,9UL},{1UL,9UL},{1UL,9UL},{1UL,9UL}},{{1UL,9UL},{1UL,9UL},{1UL,9UL},{1UL,9UL}},{{1UL,9UL},{1UL,9UL},{1UL,9UL},{1UL,9UL}},{{1UL,9UL},{1UL,9UL},{1UL,9UL},{1UL,9UL}}};
    int64_t *l_821 = &l_44.f0;
    int32_t l_834 = 0L;
    int32_t l_835 = 0x06F00A29L;
    int32_t l_840 = (-1L);
    int32_t l_843 = 1L;
    int32_t l_844[7][9][4] = {{{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L}},{{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L}},{{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L}},{{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L}},{{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L}},{{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L}},{{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L},{0x4BFB6505L,(-1L),0x16D30EBEL,1L}}};
    int i, j, k;
lbl_10:
    for (p_856->g_2 = 0; (p_856->g_2 < 29); p_856->g_2 = safe_add_func_int16_t_s_s(p_856->g_2, 3))
    { /* block id: 7 */
        int64_t l_7 = 0x10D9D044D412DD9BL;
        for (p_856->g_6 = 0; (p_856->g_6 <= 3); p_856->g_6 += 1)
        { /* block id: 10 */
            return l_7;
        }
    }
    for (p_856->g_2 = (-19); (p_856->g_2 >= (-26)); p_856->g_2 = safe_sub_func_uint16_t_u_u(p_856->g_2, 3))
    { /* block id: 16 */
        union U5 l_15 = {{4UL,1L}};
        int8_t *l_42[9][4] = {{&p_856->g_43,&p_856->g_43,&p_856->g_43,&p_856->g_43},{&p_856->g_43,&p_856->g_43,&p_856->g_43,&p_856->g_43},{&p_856->g_43,&p_856->g_43,&p_856->g_43,&p_856->g_43},{&p_856->g_43,&p_856->g_43,&p_856->g_43,&p_856->g_43},{&p_856->g_43,&p_856->g_43,&p_856->g_43,&p_856->g_43},{&p_856->g_43,&p_856->g_43,&p_856->g_43,&p_856->g_43},{&p_856->g_43,&p_856->g_43,&p_856->g_43,&p_856->g_43},{&p_856->g_43,&p_856->g_43,&p_856->g_43,&p_856->g_43},{&p_856->g_43,&p_856->g_43,&p_856->g_43,&p_856->g_43}};
        uint16_t l_750 = 0x2717L;
        int32_t l_796 = 0L;
        struct S0 l_820[7][1] = {{{0x3431FB03L,0x641C7800BE42E347L,-1L}},{{0x3431FB03L,0x641C7800BE42E347L,-1L}},{{0x3431FB03L,0x641C7800BE42E347L,-1L}},{{0x3431FB03L,0x641C7800BE42E347L,-1L}},{{0x3431FB03L,0x641C7800BE42E347L,-1L}},{{0x3431FB03L,0x641C7800BE42E347L,-1L}},{{0x3431FB03L,0x641C7800BE42E347L,-1L}}};
        int32_t l_836 = 1L;
        int32_t l_837 = 0x6DD9E285L;
        int32_t l_838 = 0x478CBC46L;
        int16_t l_839 = (-1L);
        int32_t l_841 = 0x71DEA130L;
        int32_t l_842 = 2L;
        int32_t l_845 = (-9L);
        int32_t l_846 = 0x1A54580FL;
        int32_t l_847 = 1L;
        int8_t l_848[4] = {0x07L,0x07L,0x07L,0x07L};
        int64_t l_849[5][3][6] = {{{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L}},{{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L}},{{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L}},{{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L}},{{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L},{(-1L),(-1L),0x0585D066E9B06066L,5L,(-1L),5L}}};
        int8_t l_851 = 0x3EL;
        int i, j, k;
        if (p_856->g_2)
            goto lbl_10;
    }
    return p_856->g_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_753 p_856->g_2 p_856->g_149 p_856->g_121 p_856->g_154.f2 p_856->g_6 p_856->g_368.f2 p_856->g_198.f1.f0 p_856->g_324
 * writes: p_856->g_198.f1 p_856->g_784 p_856->g_570
 */
struct S1  func_11(uint8_t  p_12, union U5  p_13, uint32_t  p_14, struct S7 * p_856)
{ /* block id: 395 */
    struct S0 l_752 = {0L,-5L,1L};
    int32_t *l_754 = &p_856->g_368.f2;
    int32_t l_755 = (-1L);
    int32_t *l_756 = &p_856->g_6;
    int32_t *l_757 = &p_856->g_368.f2;
    int32_t *l_758 = (void*)0;
    int32_t *l_759 = &p_856->g_368.f2;
    int32_t *l_760 = &p_856->g_368.f2;
    int32_t l_761[8];
    int32_t *l_762 = &p_856->g_6;
    int32_t *l_763 = &p_856->g_154.f2;
    int32_t *l_764[2];
    int32_t l_765[7];
    int16_t l_766 = 0x1BB3L;
    int32_t l_767 = 0x421E2DFAL;
    int32_t l_768 = 1L;
    int64_t l_769[6] = {0x20CE4B93D0362A7DL,0x4EB0EF5F11EC1F25L,0x20CE4B93D0362A7DL,0x20CE4B93D0362A7DL,0x4EB0EF5F11EC1F25L,0x20CE4B93D0362A7DL};
    uint64_t l_770 = 1UL;
    union U6 l_781 = {1L};
    union U5 *l_783 = &p_856->g_198;
    union U5 **l_782[7] = {&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783};
    int64_t *l_785 = &l_769[5];
    uint16_t *l_786 = &p_856->g_570[0][0];
    uint32_t l_789 = 0x48362E25L;
    int8_t l_790 = 0x07L;
    int i;
    for (i = 0; i < 8; i++)
        l_761[i] = 2L;
    for (i = 0; i < 2; i++)
        l_764[i] = &p_856->g_368.f2;
    for (i = 0; i < 7; i++)
        l_765[i] = 1L;
    (*p_856->g_753) = l_752;
    --l_770;
    l_790 ^= (safe_rshift_func_int8_t_s_u((p_856->g_2 & (safe_add_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((*p_856->g_149), (((p_13.f0 , ((*l_785) |= (&p_856->g_198 == (p_856->g_784 = (l_781 , &p_856->g_198))))) & ((*l_763) | (!((*l_786) = (*l_756))))) < (~((safe_add_func_uint8_t_u_u(255UL, (*l_754))) <= (*l_760)))))), p_12)) & p_12) != l_789), (*p_856->g_149)))), p_856->g_198.f1.f0));
    return p_856->g_324[4];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_25(struct S3  p_26, int32_t  p_27, int8_t  p_28, int8_t  p_29, int32_t  p_30, struct S7 * p_856)
{ /* block id: 393 */
    return p_26.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_324
 * writes:
 */
struct S1  func_32(int8_t  p_33, struct S3  p_34, struct S0  p_35, uint32_t  p_36, struct S7 * p_856)
{ /* block id: 19 */
    uint8_t l_63 = 254UL;
    int32_t *l_64 = &p_856->g_6;
    uint8_t l_65 = 0x19L;
    union U5 l_78 = {{1UL,1L}};
    int32_t l_85 = 0x3B68FCA7L;
    int32_t l_409 = 3L;
    int16_t *l_411 = &p_856->g_368.f0;
    union U6 l_554 = {0x46L};
    int8_t ***l_641 = (void*)0;
    union U5 l_655[5] = {{{0UL,-4L}},{{0UL,-4L}},{{0UL,-4L}},{{0UL,-4L}},{{0UL,-4L}}};
    struct S3 *l_663 = &p_856->g_252;
    struct S3 **l_662 = &l_663;
    uint32_t *l_698 = &p_856->g_317;
    int32_t **l_702 = &p_856->g_283[0];
    int32_t ***l_701[8][1][7] = {{{&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702,&l_702,&l_702}}};
    union U6 *l_703 = &p_856->g_582;
    union U6 *l_705 = &l_554;
    uint16_t *l_708[9][2][1] = {{{&p_856->g_110},{&p_856->g_110}},{{&p_856->g_110},{&p_856->g_110}},{{&p_856->g_110},{&p_856->g_110}},{{&p_856->g_110},{&p_856->g_110}},{{&p_856->g_110},{&p_856->g_110}},{{&p_856->g_110},{&p_856->g_110}},{{&p_856->g_110},{&p_856->g_110}},{{&p_856->g_110},{&p_856->g_110}},{{&p_856->g_110},{&p_856->g_110}}};
    uint8_t l_709 = 0x3AL;
    int32_t l_710[1][10] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}};
    struct S4 *l_711 = &p_856->g_154;
    int i, j, k;
    return p_856->g_324[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_570 p_856->g_106 p_856->g_582 p_856->g_246.f0 p_856->g_541 p_856->g_413 p_856->g_94 p_856->g_43 p_856->g_565 p_856->g_368.f2 p_856->g_586 p_856->g_149 p_856->g_153 p_856->g_551 p_856->g_315 p_856->g_246.f2 p_856->g_121 p_856->g_45.f2 p_856->g_324 p_856->g_45.f0 p_856->g_368.f0 p_856->g_248 p_856->g_229 p_856->g_268
 * writes: p_856->g_570 p_856->g_153 p_856->g_252 p_856->g_121 p_856->g_280 p_856->g_478 p_856->g_106 p_856->g_315 p_856->g_43 p_856->g_527
 */
int8_t ** func_47(int64_t  p_48, int32_t  p_49, uint32_t  p_50, union U5  p_51, struct S7 * p_856)
{ /* block id: 317 */
    int32_t *l_566 = &p_856->g_106;
    int32_t *l_567 = &p_856->g_153;
    int32_t *l_568[5];
    int32_t l_569 = 0x5155D309L;
    int16_t l_581 = 0x15CAL;
    struct S4 *l_593[1];
    struct S4 **l_592 = &l_593[0];
    uint16_t *l_603 = &p_856->g_478;
    int16_t **l_618 = &p_856->g_149;
    struct S0 l_623 = {0x3D124D71L,0x2B890A6B65A172E7L,-5L};
    int8_t *l_636 = &p_856->g_527[1][3][8];
    int64_t l_637 = 0L;
    struct S2 *l_638 = &p_856->g_198.f0;
    uint16_t l_639[9][10][2] = {{{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L}},{{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L}},{{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L}},{{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L}},{{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L}},{{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L}},{{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L}},{{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L}},{{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L},{65535UL,0x35F1L}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_568[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_593[i] = &p_856->g_154;
    --p_856->g_570[0][0];
    if ((((safe_lshift_func_int16_t_s_s(p_51.f0.f0, 1)) == ((safe_div_func_uint16_t_u_u(0x6523L, (*l_566))) <= ((safe_sub_func_int32_t_s_s(1L, ((*l_567) = ((l_581 = (safe_mod_func_uint32_t_u_u(4UL, p_50))) ^ (p_856->g_582 , 0x3D970F7E07F07CB8L))))) & ((safe_mul_func_uint8_t_u_u(p_856->g_246.f0, p_856->g_541)) && (**p_856->g_413))))) , (*p_856->g_565)))
    { /* block id: 321 */
        struct S3 l_585[7][10] = {{{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL}},{{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL}},{{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL}},{{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL}},{{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL}},{{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL}},{{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{1L,{4UL,0x4A468261L},1UL,0x4AB558BBL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL},{-1L,{0xA51D8B02L,0x330475F6L},18446744073709551615UL,0x37DA330AL}}};
        int i, j;
        (*p_856->g_586) = l_585[0][8];
    }
    else
    { /* block id: 323 */
        struct S0 l_591 = {0x3C5DE47AL,-1L,0x0E2E2CC651270297L};
        struct S4 **l_594 = &l_593[0];
        int32_t **l_597 = (void*)0;
        int32_t **l_598 = &p_856->g_280[1][1][1];
        (*l_567) |= (((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(65527UL, ((*p_856->g_149) = ((l_591 , l_592) == l_594)))) > p_48), ((safe_rshift_func_uint8_t_u_u(0x22L, 0)) && 0xF7L))) || l_591.f0) <= 0xD4L);
        (*l_598) = (void*)0;
        (*l_598) = l_567;
        (*l_598) = l_567;
    }
    (*l_566) = (safe_add_func_uint16_t_u_u(((*l_603) = ((safe_mod_func_int8_t_s_s(p_50, (-10L))) == (0x65L == p_856->g_551))), 0x1EF1L));
    l_639[0][6][0] ^= (safe_add_func_uint8_t_u_u(((((safe_mod_func_uint32_t_u_u((+(p_856->g_315++)), 0x2F277C0BL)) , (safe_div_func_int8_t_s_s((l_637 = (safe_mod_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u(((*l_567) , (l_618 == (void*)0)), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((*l_636) = ((*p_856->g_94) = ((l_623 , (safe_lshift_func_uint16_t_u_u(0xADFBL, (((safe_sub_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((**p_856->g_413), 0x36L)), (safe_lshift_func_int16_t_s_s((((*l_618) != (void*)0) < (*l_566)), 5)))), p_856->g_246.f2)) , 2UL) != p_856->g_368.f2) & 0x26L), p_856->g_106)) < p_51.f0.f1) != p_50)))) < p_856->g_541))), (*l_567))), (*l_566))))) , (*p_856->g_149)) || 0xEDB5L) != (*p_856->g_149)), p_856->g_45.f2)) , p_856->g_324[4]) , p_856->g_45.f0), p_856->g_368.f0))), p_51.f0.f0))) , (*p_856->g_248)) != l_638), p_856->g_268));
    return &p_856->g_94;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_252.f1.f1 p_856->g_560 p_856->g_6 p_856->g_565 p_856->g_368.f2 p_856->g_242.f4
 * writes: p_856->g_252.f1.f1 p_856->g_317 p_856->g_283 p_856->g_368.f2
 */
uint32_t  func_54(int8_t  p_55, int64_t  p_56, int8_t * p_57, union U6  p_58, struct S7 * p_856)
{ /* block id: 304 */
    int32_t *l_561 = &p_856->g_6;
    for (p_856->g_252.f1.f1 = 0; (p_856->g_252.f1.f1 > (-3)); --p_856->g_252.f1.f1)
    { /* block id: 307 */
        for (p_856->g_317 = 0; (p_856->g_317 <= 18); p_856->g_317 = safe_add_func_int64_t_s_s(p_856->g_317, 7))
        { /* block id: 310 */
            int32_t *l_559 = (void*)0;
            int32_t **l_562 = &l_561;
            (*p_856->g_560) = l_559;
            (*l_562) = l_561;
        }
        (*p_856->g_565) |= (safe_lshift_func_uint16_t_u_u((*l_561), 4));
    }
    return p_856->g_242.f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_247.f0 p_856->g_31 p_856->g_94 p_856->g_43 p_856->g_385 p_856->g_149 p_856->g_121 p_856->g_106 p_856->g_413 p_856->g_317 p_856->g_252.f3 p_856->g_315 p_856->g_410.f3 p_856->g_293.f0 p_856->g_142 p_856->g_133 p_856->g_202.f1 p_856->g_154.f2 p_856->g_154 p_856->g_110 p_856->g_493 p_856->g_198.f0.f1 p_856->g_252.f1.f0 p_856->g_373 p_856->g_541 p_856->g_279 p_856->g_6
 * writes: p_856->g_268 p_856->g_198.f1.f2 p_856->g_317 p_856->g_106 p_856->g_6 p_856->g_373 p_856->g_118 p_856->g_385 p_856->g_410.f3 p_856->g_121 p_856->g_315 p_856->g_133 p_856->g_478 p_856->g_154.f2 p_856->g_154 p_856->g_493 p_856->g_541 p_856->g_280 p_856->g_283
 */
uint32_t  func_59(int64_t  p_60, uint32_t  p_61, int8_t ** p_62, struct S7 * p_856)
{ /* block id: 220 */
    uint8_t *l_414 = &p_856->g_268;
    int32_t **l_428 = (void*)0;
    int32_t l_429 = 0x5DAC56B6L;
    int64_t *l_430 = &p_856->g_198.f1.f2;
    int32_t l_431 = 0x081C301DL;
    uint32_t *l_432 = &p_856->g_317;
    int32_t *l_433 = &p_856->g_106;
    uint32_t *l_482 = &p_856->g_133;
    int32_t l_523[9] = {0x22D18287L,(-8L),0x22D18287L,0x22D18287L,(-8L),0x22D18287L,0x22D18287L,(-8L),0x22D18287L};
    int8_t **l_544 = &p_856->g_94;
    int32_t **l_552[10];
    uint64_t l_553 = 0UL;
    int i;
    for (i = 0; i < 10; i++)
        l_552[i] = &p_856->g_280[1][1][1];
lbl_486:
    (*l_433) = (((p_856->g_247.f0 == ((((*l_432) &= (((*l_414) = (p_856->g_31 , p_60)) , (((safe_rshift_func_uint16_t_u_u(p_60, (safe_lshift_func_int8_t_s_s((**p_62), ((safe_unary_minus_func_uint64_t_u(((safe_lshift_func_int8_t_s_s(0x50L, 6)) || p_60))) >= (((*l_430) = (safe_sub_func_int32_t_s_s((l_429 = (((safe_mul_func_int8_t_s_s((((0x21369076L < (((safe_mod_func_int8_t_s_s((((((l_428 == l_428) != p_856->g_385) , p_61) , (*p_856->g_149)) ^ (*p_856->g_149)), p_61)) & p_60) , p_856->g_106)) | p_60) <= (**p_856->g_413)), l_429)) | 6UL) == 0x95F3L)), p_61))) == l_431)))))) != p_61) < p_60))) > p_856->g_252.f3) | p_60)) > p_856->g_315) , p_61);
    for (p_856->g_6 = 0; (p_856->g_6 < 21); p_856->g_6++)
    { /* block id: 228 */
        uint8_t *l_453 = &p_856->g_268;
        int32_t l_459 = 0x7DA3ABCBL;
        int32_t l_479[4];
        struct S2 *l_507 = &p_856->g_252.f1;
        int i;
        for (i = 0; i < 4; i++)
            l_479[i] = 0x2D52F539L;
        for (l_429 = (-6); (l_429 < 7); l_429++)
        { /* block id: 231 */
            uint32_t l_461 = 0xDA88DD95L;
            uint32_t *l_481 = &p_856->g_317;
            struct S4 *l_488 = (void*)0;
            struct S0 *l_491 = &p_856->g_198.f1;
            int32_t l_522 = 7L;
            int32_t l_529 = 0x7D4B5C1FL;
            int32_t l_530 = 1L;
            int32_t l_531 = 0x01F8522AL;
            uint8_t l_533 = 0UL;
            int32_t l_539[4] = {0x12D6AADBL,0x12D6AADBL,0x12D6AADBL,0x12D6AADBL};
            int i;
            if ((*l_433))
                break;
            for (p_856->g_373 = 7; (p_856->g_373 >= 1); p_856->g_373 -= 1)
            { /* block id: 235 */
                int16_t l_452 = 1L;
                int32_t l_460 = 0x71E486BDL;
                int32_t l_524 = 0L;
                int32_t l_525 = 0x082429B2L;
                int32_t l_526 = 0x2D96056DL;
                int32_t l_528 = 9L;
                int32_t l_532 = 2L;
                int32_t l_540[6] = {0x3118B42FL,0L,0x3118B42FL,0x3118B42FL,0L,0x3118B42FL};
                int i, j;
                for (p_856->g_118 = 0; (p_856->g_118 <= 7); p_856->g_118 += 1)
                { /* block id: 238 */
                    int16_t l_451 = (-1L);
                    uint8_t *l_454 = &p_856->g_410.f1;
                    for (p_856->g_385 = 6; (p_856->g_385 >= 2); p_856->g_385 -= 1)
                    { /* block id: 241 */
                        uint16_t *l_442[10][7] = {{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110},{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110},{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110},{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110},{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110},{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110},{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110},{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110},{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110},{&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110,&p_856->g_412,&p_856->g_110,&p_856->g_110}};
                        int i, j;
                        l_460 |= ((safe_mul_func_uint8_t_u_u(((*l_414) = (safe_sub_func_uint16_t_u_u((p_856->g_410.f3--), (safe_lshift_func_uint8_t_u_u(0UL, 4))))), (safe_rshift_func_uint16_t_u_u(0x935EL, p_856->g_121[6])))) && (!(((l_452 = ((*p_856->g_149) = (safe_div_func_int64_t_s_s(l_451, 0x767F94F33619A722L)))) != (l_453 == l_454)) ^ (safe_mul_func_uint16_t_u_u(p_856->g_293.f0, (safe_rshift_func_uint16_t_u_u(l_459, p_60)))))));
                        if (p_60)
                            continue;
                    }
                    if (l_461)
                        continue;
                    if ((~(safe_lshift_func_int8_t_s_u((*l_433), 1))))
                    { /* block id: 250 */
                        uint32_t l_472 = 5UL;
                        uint32_t *l_477 = &p_856->g_133;
                        int32_t l_480 = 0x1BE59D80L;
                        int32_t *l_483 = (void*)0;
                        int32_t *l_484 = &p_856->g_154.f2;
                        uint32_t l_485[7][8][3] = {{{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL}},{{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL}},{{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL}},{{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL}},{{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL}},{{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL}},{{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL},{4294967291UL,4294967295UL,4294967295UL}}};
                        int i, j, k;
                        l_480 = (((((safe_rshift_func_int8_t_s_u((7UL ^ (l_479[0] = (((p_60 == (p_856->g_478 = ((*l_477) &= (safe_rshift_func_uint16_t_u_s(0x628CL, ((((safe_sub_func_int8_t_s_s(1L, 0x6DL)) , (safe_lshift_func_uint8_t_u_s(((l_472 > (safe_div_func_uint64_t_u_u(0x9C87E8395BEB7BBDL, (safe_mod_func_int64_t_s_s(((l_459 ^= ((*l_432) ^= (p_856->g_315 ^= ((-2L) == ((0x3EFBL <= (*p_856->g_149)) <= p_856->g_142))))) != p_60), l_451))))) || p_61), 4))) <= 0xCB01L) , (*p_856->g_149))))))) < p_61) & l_479[2]))), p_856->g_202.f1)) <= p_856->g_121[6]) || p_61) != 1UL) >= 0x2F56L);
                        (*l_433) &= (&p_856->g_133 == (l_482 = l_481));
                        (*l_484) &= ((*l_433) = 0x781C230AL);
                        if (l_485[0][3][2])
                            break;
                    }
                    else
                    { /* block id: 263 */
                        if (p_856->g_142)
                            goto lbl_486;
                    }
                }
                if (l_460)
                { /* block id: 267 */
                    struct S4 *l_487 = &p_856->g_154;
                    uint32_t *l_492 = &p_856->g_493;
                    uint32_t *l_494[3][8][9] = {{{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0}},{{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0}},{{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0},{&p_856->g_495,&p_856->g_495,(void*)0,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,&p_856->g_495,(void*)0}}};
                    int32_t l_496 = 0x17104A4EL;
                    int32_t l_513[4][10][3] = {{{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L}},{{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L}},{{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L}},{{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L},{0L,0x2BC16F3DL,0x08D80FA9L}}};
                    int32_t l_521[10][1];
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_521[i][j] = (-1L);
                    }
                    if (((l_488 = l_487) == &p_856->g_154))
                    { /* block id: 269 */
                        (*l_433) = p_60;
                    }
                    else
                    { /* block id: 271 */
                        struct S0 *l_490 = &p_856->g_45;
                        struct S0 **l_489 = &l_490;
                        l_491 = ((*l_489) = &p_856->g_45);
                        (*l_488) = (*l_488);
                        return p_60;
                    }
                    if ((l_459 &= ((l_479[1] < ((((p_856->g_410.f3 <= ((l_496 = ((*l_492) |= p_856->g_110)) , ((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(5UL, 1)) , p_856->g_198.f0.f1), (p_856->g_252.f1.f0 == (+(safe_mod_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((**p_62) , (p_60 || ((*l_432) = p_856->g_252.f3))), 0x65L)), (-9L))))))) , p_60))) | (*p_856->g_149)) , p_61) >= p_856->g_410.f3)) <= 0xB63EE121L)))
                    { /* block id: 281 */
                        struct S2 *l_506[9][3][8] = {{{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1}},{{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1}},{{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1}},{{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1}},{{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1}},{{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1}},{{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1}},{{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1}},{{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1},{&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1,&p_856->g_198.f0,&p_856->g_198.f0,&p_856->g_252.f1}}};
                        struct S2 **l_505[10] = {&l_506[3][1][5],&l_506[3][0][4],&l_506[3][0][4],&l_506[3][0][4],&l_506[3][1][5],&l_506[3][1][5],&l_506[3][0][4],&l_506[3][0][4],&l_506[3][0][4],&l_506[3][1][5]};
                        int32_t *l_508 = (void*)0;
                        int32_t *l_509 = &p_856->g_154.f2;
                        int32_t *l_510 = (void*)0;
                        int32_t *l_511 = &l_479[2];
                        int32_t *l_512 = &l_460;
                        int32_t *l_514 = &l_513[1][6][2];
                        int32_t *l_515 = &l_459;
                        int32_t *l_516 = &l_496;
                        int32_t *l_517 = (void*)0;
                        int32_t *l_518 = &l_479[0];
                        int32_t *l_519 = &l_431;
                        int32_t *l_520[10][2][9] = {{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}},{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}},{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}},{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}},{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}},{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}},{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}},{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}},{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}},{{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0},{&p_856->g_153,&p_856->g_368.f2,&p_856->g_368.f2,&p_856->g_153,&l_459,&p_856->g_6,&l_479[1],(void*)0,(void*)0}}};
                        int i, j, k;
                        if (p_61)
                            break;
                        l_507 = (void*)0;
                        l_533++;
                        (*l_518) = (-3L);
                    }
                    else
                    { /* block id: 286 */
                        uint8_t l_536 = 5UL;
                        int32_t *l_537 = &l_530;
                        int32_t *l_538[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_538[i] = (void*)0;
                        if (l_536)
                            break;
                        p_856->g_541--;
                        if (l_536)
                            goto lbl_486;
                        (*l_433) ^= 0x3346B4CFL;
                    }
                    if (p_60)
                        continue;
                }
                else
                { /* block id: 293 */
                    if ((*l_433))
                        break;
                    return p_856->g_133;
                }
                return l_529;
            }
        }
    }
    p_856->g_283[0] = ((*p_856->g_279) = &l_431);
    return l_553;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_410
 * writes:
 */
struct S1  func_72(union U5  p_73, uint32_t  p_74, int32_t * p_75, int8_t ** p_76, int32_t * p_77, struct S7 * p_856)
{ /* block id: 216 */
    return p_856->g_410;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_93 p_856->g_43 p_856->g_110 p_856->g_123 p_856->g_106 p_856->g_94 p_856->g_133 p_856->g_153 p_856->g_154 p_856->g_163 p_856->g_181 p_856->g_198 p_856->g_202 p_856->g_203 p_856->g_293.f1 p_856->g_2 p_856->g_387 p_856->g_279 p_856->g_280 p_856->g_31.f2
 * writes: p_856->g_43 p_856->g_110 p_856->g_106 p_856->g_133 p_856->g_142 p_856->g_149 p_856->g_153 p_856->g_154 p_856->g_118 p_856->g_93 p_856->g_198.f0.f0 p_856->g_202 p_856->g_387 p_856->g_283
 */
uint64_t  func_79(union U5  p_80, int8_t  p_81, uint32_t  p_82, int64_t  p_83, int32_t  p_84, struct S7 * p_856)
{ /* block id: 22 */
    int8_t *l_92 = &p_856->g_43;
    int8_t **l_91 = &l_92;
    int32_t l_95 = 0L;
    int32_t **l_390 = &p_856->g_283[0];
    int32_t *l_393 = &l_95;
    int32_t *l_394 = &p_856->g_368.f2;
    int32_t *l_395 = &p_856->g_368.f2;
    int32_t *l_396 = &p_856->g_106;
    int32_t *l_397 = (void*)0;
    int32_t *l_398 = (void*)0;
    int32_t *l_399 = &l_95;
    int32_t l_400 = 0x6B7DCF58L;
    int32_t *l_401 = &p_856->g_106;
    int32_t *l_402 = &l_400;
    int32_t *l_403[8] = {&p_856->g_368.f2,&l_95,&p_856->g_368.f2,&p_856->g_368.f2,&l_95,&p_856->g_368.f2,&p_856->g_368.f2,&l_95};
    int64_t l_404 = (-1L);
    int64_t l_405 = 0x295140E1DABC5948L;
    uint8_t l_406 = 0x14L;
    int i;
    (*l_390) = func_86(l_91, &p_856->g_43, p_856->g_93[1][4], l_95, p_856);
    for (p_80.f3 = (-3); (p_80.f3 > (-16)); p_80.f3 = safe_sub_func_uint64_t_u_u(p_80.f3, 1))
    { /* block id: 210 */
        return p_84;
    }
    --l_406;
    return p_856->g_31.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_43 p_856->g_110 p_856->g_123 p_856->g_106 p_856->g_94 p_856->g_133 p_856->g_153 p_856->g_154 p_856->g_163 p_856->g_181 p_856->g_198 p_856->g_202 p_856->g_203 p_856->g_293.f1 p_856->g_2 p_856->g_387 p_856->g_279 p_856->g_280
 * writes: p_856->g_43 p_856->g_110 p_856->g_106 p_856->g_133 p_856->g_142 p_856->g_149 p_856->g_153 p_856->g_154 p_856->g_118 p_856->g_93 p_856->g_198.f0.f0 p_856->g_202 p_856->g_387
 */
int32_t * func_86(int8_t ** p_87, int8_t * p_88, int8_t ** p_89, uint64_t  p_90, struct S7 * p_856)
{ /* block id: 23 */
    uint32_t l_100 = 0x230E5491L;
    int8_t *l_117[8][1] = {{&p_856->g_118},{&p_856->g_118},{&p_856->g_118},{&p_856->g_118},{&p_856->g_118},{&p_856->g_118},{&p_856->g_118},{&p_856->g_118}};
    int32_t l_122[10][3] = {{(-8L),(-8L),1L},{(-8L),(-8L),1L},{(-8L),(-8L),1L},{(-8L),(-8L),1L},{(-8L),(-8L),1L},{(-8L),(-8L),1L},{(-8L),(-8L),1L},{(-8L),(-8L),1L},{(-8L),(-8L),1L},{(-8L),(-8L),1L}};
    int16_t *l_127 = (void*)0;
    uint64_t *l_186 = &p_856->g_142;
    struct S3 l_251 = {1L,{0xA78E21C2L,6L},0xC3EB784779427902L,-1L};
    int16_t l_271[6] = {0x002CL,0L,0x002CL,0x002CL,0L,0x002CL};
    int i, j;
    for (p_856->g_43 = (-11); (p_856->g_43 != (-21)); --p_856->g_43)
    { /* block id: 26 */
        int16_t *l_124 = &p_856->g_121[6];
        int32_t l_200 = (-10L);
        struct S3 *l_239 = &p_856->g_31;
        union U6 l_272 = {1L};
        int32_t l_336 = 1L;
        int32_t l_341 = 1L;
        int32_t l_342[6][4] = {{0L,0x73A41250L,6L,0x73A41250L},{0L,0x73A41250L,6L,0x73A41250L},{0L,0x73A41250L,6L,0x73A41250L},{0L,0x73A41250L,6L,0x73A41250L},{0L,0x73A41250L,6L,0x73A41250L},{0L,0x73A41250L,6L,0x73A41250L}};
        uint16_t l_346 = 0x7B85L;
        uint32_t *l_356 = (void*)0;
        int32_t *l_380[5];
        int i, j;
        for (i = 0; i < 5; i++)
            l_380[i] = &l_122[6][1];
        if (p_90)
        { /* block id: 27 */
            int32_t *l_126 = &l_122[6][1];
            uint32_t l_174 = 4UL;
            uint32_t *l_182 = (void*)0;
            uint32_t *l_183 = &l_174;
            uint64_t **l_187 = &l_186;
            int8_t ***l_199 = &p_856->g_93[1][4];
            uint32_t *l_201 = &p_856->g_198.f0.f0;
            if ((safe_div_func_int16_t_s_s((((void*)0 == &p_856->g_94) && (-3L)), l_100)))
            { /* block id: 28 */
                for (p_90 = 0; (p_90 != 20); p_90++)
                { /* block id: 31 */
                    int32_t *l_104 = &p_856->g_2;
                    int32_t **l_103 = &l_104;
                    int32_t *l_105 = &p_856->g_106;
                    int32_t *l_107 = &p_856->g_106;
                    int32_t *l_108 = &p_856->g_106;
                    int32_t *l_109[3][5] = {{(void*)0,(void*)0,&p_856->g_2,&p_856->g_106,(void*)0},{(void*)0,(void*)0,&p_856->g_2,&p_856->g_106,(void*)0},{(void*)0,(void*)0,&p_856->g_2,&p_856->g_106,(void*)0}};
                    int i, j;
                    (*l_103) = &p_856->g_2;
                    --p_856->g_110;
                }
                if (p_856->g_110)
                    continue;
            }
            else
            { /* block id: 36 */
                int32_t *l_115 = &p_856->g_2;
                int8_t *l_116 = &p_856->g_43;
                int16_t *l_119 = (void*)0;
                int16_t *l_120[8] = {&p_856->g_121[6],(void*)0,&p_856->g_121[6],&p_856->g_121[6],(void*)0,&p_856->g_121[6],&p_856->g_121[6],(void*)0};
                int32_t *l_125 = &l_122[6][1];
                int i;
                (*p_856->g_123) ^= (safe_sub_func_int16_t_s_s(((void*)0 != l_115), (l_122[6][1] = (((*p_87) = (void*)0) == (l_117[4][0] = l_116)))));
                (*l_125) = ((void*)0 != l_124);
            }
            (*l_126) |= 0x1AC87C86L;
            if (((*l_126) ^= ((-1L) <= (l_127 != ((safe_lshift_func_int8_t_s_s((*p_856->g_94), 4)) , l_127)))))
            { /* block id: 45 */
                int16_t l_134 = 0L;
                for (p_90 = (-4); (p_90 > 15); p_90 = safe_add_func_uint8_t_u_u(p_90, 4))
                { /* block id: 48 */
                    uint32_t *l_132[9];
                    int32_t l_137 = 0x1C77487FL;
                    int16_t *l_147 = &p_856->g_121[1];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_132[i] = &p_856->g_133;
                    (*l_126) &= ((--p_856->g_133) ^ p_90);
                    for (p_856->g_133 = 2; (p_856->g_133 <= 8); p_856->g_133 += 1)
                    { /* block id: 53 */
                        uint64_t *l_140 = (void*)0;
                        uint64_t *l_141 = &p_856->g_142;
                        int16_t **l_148[2][4] = {{&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127}};
                        uint16_t l_150 = 0UL;
                        int32_t *l_151 = (void*)0;
                        int32_t *l_152 = &p_856->g_153;
                        int i, j;
                        (*l_152) |= ((((((((l_137 , 0x3F87E3A3C11C24DCL) == ((*l_141) = (l_122[2][0] , (safe_mul_func_uint8_t_u_u((7UL != (*p_88)), (*p_856->g_94)))))) != (safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((((0UL || ((p_856->g_149 = l_147) != l_147)) ^ p_90) && p_90), p_856->g_43)), 0))) , 0x52320A0211C2E64FL) || p_856->g_106) >= 0L) != p_90) , l_150);
                    }
                    p_856->g_154 = p_856->g_154;
                }
                return &p_856->g_2;
            }
            else
            { /* block id: 61 */
                struct S3 *l_156[9] = {&p_856->g_31,&p_856->g_31,&p_856->g_31,&p_856->g_31,&p_856->g_31,&p_856->g_31,&p_856->g_31,&p_856->g_31,&p_856->g_31};
                struct S3 **l_155 = &l_156[4];
                int i;
                (*l_155) = &p_856->g_31;
                for (p_856->g_118 = 1; (p_856->g_118 == (-14)); p_856->g_118--)
                { /* block id: 65 */
                    int32_t l_166[3][2] = {{1L,1L},{1L,1L},{1L,1L}};
                    int i, j;
                    for (p_856->g_110 = 0; (p_856->g_110 == 2); p_856->g_110 = safe_add_func_int8_t_s_s(p_856->g_110, 1))
                    { /* block id: 68 */
                        struct S4 *l_162 = &p_856->g_154;
                        struct S4 **l_161 = &l_162;
                        (*l_161) = &p_856->g_154;
                    }
                    (*l_126) ^= (p_856->g_163[4][7] , 0x3968A6B7L);
                    if (p_90)
                        continue;
                    for (p_856->g_154.f2 = 0; (p_856->g_154.f2 == (-10)); p_856->g_154.f2--)
                    { /* block id: 75 */
                        int32_t *l_167 = (void*)0;
                        int32_t *l_168 = (void*)0;
                        int32_t *l_169 = &p_856->g_153;
                        int32_t *l_170 = (void*)0;
                        int32_t *l_171 = &l_122[1][0];
                        int32_t *l_172 = &p_856->g_106;
                        int32_t *l_173[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_173[i] = &p_856->g_106;
                        if (l_166[1][1])
                            break;
                        (*l_126) = p_90;
                        --l_174;
                        l_173[1] = &p_856->g_106;
                    }
                }
            }
            l_200 = (safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((p_856->g_181 > (++(*l_183))), (&p_856->g_142 == ((*l_187) = l_186)))), (safe_mod_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u(0xB5L, (safe_add_func_int8_t_s_s(l_100, (((*l_201) = (p_90 || (safe_mul_func_uint8_t_u_u((((((*p_856->g_94) >= ((p_856->g_198 , ((((*l_199) = &p_88) != (void*)0) ^ l_122[3][1])) != (*l_126))) , l_200) > (-1L)) < 0x31F57541L), p_856->g_133)))) , 0xCAL))))) && (-1L)) > l_122[4][2]), l_100))));
        }
        else
        { /* block id: 88 */
            int16_t *l_218 = &p_856->g_154.f0;
            int32_t l_220 = 0x41FAA2AFL;
            uint32_t l_223 = 0xF1477426L;
            int32_t l_338 = 0x46391254L;
            int32_t l_343[2];
            int i;
            for (i = 0; i < 2; i++)
                l_343[i] = 0x65521EE6L;
            (*p_856->g_203) = p_856->g_202;
            for (l_100 = 15; (l_100 > 22); l_100++)
            { /* block id: 92 */
                struct S4 *l_208[10] = {&p_856->g_154,&p_856->g_154,&p_856->g_154,&p_856->g_154,&p_856->g_154,&p_856->g_154,&p_856->g_154,&p_856->g_154,&p_856->g_154,&p_856->g_154};
                struct S4 **l_207 = &l_208[1];
                struct S4 ***l_206 = &l_207;
                int16_t *l_215 = &p_856->g_121[3];
                int16_t **l_216 = &l_215;
                int16_t **l_217[3];
                uint16_t *l_219[10][7] = {{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_856->g_110,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint32_t *l_226 = &p_856->g_198.f0.f0;
                int32_t l_227 = 0x44210E2DL;
                int64_t l_228 = 0L;
                struct S3 **l_244 = &l_239;
                int32_t **l_290 = &p_856->g_283[0];
                int32_t l_337 = 7L;
                int32_t l_340 = 8L;
                int32_t l_344[8][9] = {{0L,0x23EF99F8L,0x69F6AD7BL,0L,0x3A3C33D0L,0x7DCD9137L,(-1L),0x69F6AD7BL,0L},{0L,0x23EF99F8L,0x69F6AD7BL,0L,0x3A3C33D0L,0x7DCD9137L,(-1L),0x69F6AD7BL,0L},{0L,0x23EF99F8L,0x69F6AD7BL,0L,0x3A3C33D0L,0x7DCD9137L,(-1L),0x69F6AD7BL,0L},{0L,0x23EF99F8L,0x69F6AD7BL,0L,0x3A3C33D0L,0x7DCD9137L,(-1L),0x69F6AD7BL,0L},{0L,0x23EF99F8L,0x69F6AD7BL,0L,0x3A3C33D0L,0x7DCD9137L,(-1L),0x69F6AD7BL,0L},{0L,0x23EF99F8L,0x69F6AD7BL,0L,0x3A3C33D0L,0x7DCD9137L,(-1L),0x69F6AD7BL,0L},{0L,0x23EF99F8L,0x69F6AD7BL,0L,0x3A3C33D0L,0x7DCD9137L,(-1L),0x69F6AD7BL,0L},{0L,0x23EF99F8L,0x69F6AD7BL,0L,0x3A3C33D0L,0x7DCD9137L,(-1L),0x69F6AD7BL,0L}};
                int16_t l_345[8][3][9] = {{{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_217[i] = &l_127;
                (1 + 1);
            }
            l_341 |= (l_220 < (safe_rshift_func_uint8_t_u_u(((~p_856->g_293.f1) , l_122[4][1]), p_856->g_2)));
            for (p_856->g_110 = (-20); (p_856->g_110 > 31); p_856->g_110++)
            { /* block id: 199 */
                int32_t l_381[4][10] = {{4L,0x059075F0L,0x059075F0L,4L,4L,0x059075F0L,0x059075F0L,4L,4L,0x059075F0L},{4L,0x059075F0L,0x059075F0L,4L,4L,0x059075F0L,0x059075F0L,4L,4L,0x059075F0L},{4L,0x059075F0L,0x059075F0L,4L,4L,0x059075F0L,0x059075F0L,4L,4L,0x059075F0L},{4L,0x059075F0L,0x059075F0L,4L,4L,0x059075F0L,0x059075F0L,4L,4L,0x059075F0L}};
                int32_t l_382 = 9L;
                int32_t l_383 = 0L;
                int32_t l_384[8][1] = {{0x4A22E521L},{0x4A22E521L},{0x4A22E521L},{0x4A22E521L},{0x4A22E521L},{0x4A22E521L},{0x4A22E521L},{0x4A22E521L}};
                int32_t l_386 = 0x61A1A9F2L;
                int i, j;
                l_380[3] = (void*)0;
                if (p_90)
                    continue;
                p_856->g_387--;
            }
        }
    }
    return (*p_856->g_279);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S7 c_857;
    struct S7* p_856 = &c_857;
    struct S7 c_858 = {
        (-1L), // p_856->g_2
        0x54B497D7L, // p_856->g_6
        {0L,{6UL,0x44FA8936L},8UL,0x3B70AC92L}, // p_856->g_31
        (-10L), // p_856->g_43
        {2L,0x6CA7198ECC7ADD91L,-1L}, // p_856->g_45
        &p_856->g_43, // p_856->g_94
        {{&p_856->g_94,&p_856->g_94,&p_856->g_94,&p_856->g_94,&p_856->g_94},{&p_856->g_94,&p_856->g_94,&p_856->g_94,&p_856->g_94,&p_856->g_94},{&p_856->g_94,&p_856->g_94,&p_856->g_94,&p_856->g_94,&p_856->g_94}}, // p_856->g_93
        0x10432EA9L, // p_856->g_106
        4UL, // p_856->g_110
        1L, // p_856->g_118
        {7L,7L,7L,7L,7L,7L,7L,7L,7L}, // p_856->g_121
        &p_856->g_106, // p_856->g_123
        0x9E9404B1L, // p_856->g_133
        18446744073709551615UL, // p_856->g_142
        &p_856->g_121[6], // p_856->g_149
        0x4A57585BL, // p_856->g_153
        {0x1E36L,0L,0L}, // p_856->g_154
        {{{1L,0x1C83B8C2FFF6BB7EL,-3L},{4L,-10L,0x5E5AFDE053CD6AE3L},{0x00E99DC0L,0L,6L},{-2L,0L,7L},{0x00E99DC0L,0L,6L},{4L,-10L,0x5E5AFDE053CD6AE3L},{1L,0x1C83B8C2FFF6BB7EL,-3L},{-6L,1L,0x3B5CCB47C0F13302L}},{{1L,0x1C83B8C2FFF6BB7EL,-3L},{4L,-10L,0x5E5AFDE053CD6AE3L},{0x00E99DC0L,0L,6L},{-2L,0L,7L},{0x00E99DC0L,0L,6L},{4L,-10L,0x5E5AFDE053CD6AE3L},{1L,0x1C83B8C2FFF6BB7EL,-3L},{-6L,1L,0x3B5CCB47C0F13302L}},{{1L,0x1C83B8C2FFF6BB7EL,-3L},{4L,-10L,0x5E5AFDE053CD6AE3L},{0x00E99DC0L,0L,6L},{-2L,0L,7L},{0x00E99DC0L,0L,6L},{4L,-10L,0x5E5AFDE053CD6AE3L},{1L,0x1C83B8C2FFF6BB7EL,-3L},{-6L,1L,0x3B5CCB47C0F13302L}},{{1L,0x1C83B8C2FFF6BB7EL,-3L},{4L,-10L,0x5E5AFDE053CD6AE3L},{0x00E99DC0L,0L,6L},{-2L,0L,7L},{0x00E99DC0L,0L,6L},{4L,-10L,0x5E5AFDE053CD6AE3L},{1L,0x1C83B8C2FFF6BB7EL,-3L},{-6L,1L,0x3B5CCB47C0F13302L}},{{1L,0x1C83B8C2FFF6BB7EL,-3L},{4L,-10L,0x5E5AFDE053CD6AE3L},{0x00E99DC0L,0L,6L},{-2L,0L,7L},{0x00E99DC0L,0L,6L},{4L,-10L,0x5E5AFDE053CD6AE3L},{1L,0x1C83B8C2FFF6BB7EL,-3L},{-6L,1L,0x3B5CCB47C0F13302L}},{{1L,0x1C83B8C2FFF6BB7EL,-3L},{4L,-10L,0x5E5AFDE053CD6AE3L},{0x00E99DC0L,0L,6L},{-2L,0L,7L},{0x00E99DC0L,0L,6L},{4L,-10L,0x5E5AFDE053CD6AE3L},{1L,0x1C83B8C2FFF6BB7EL,-3L},{-6L,1L,0x3B5CCB47C0F13302L}},{{1L,0x1C83B8C2FFF6BB7EL,-3L},{4L,-10L,0x5E5AFDE053CD6AE3L},{0x00E99DC0L,0L,6L},{-2L,0L,7L},{0x00E99DC0L,0L,6L},{4L,-10L,0x5E5AFDE053CD6AE3L},{1L,0x1C83B8C2FFF6BB7EL,-3L},{-6L,1L,0x3B5CCB47C0F13302L}},{{1L,0x1C83B8C2FFF6BB7EL,-3L},{4L,-10L,0x5E5AFDE053CD6AE3L},{0x00E99DC0L,0L,6L},{-2L,0L,7L},{0x00E99DC0L,0L,6L},{4L,-10L,0x5E5AFDE053CD6AE3L},{1L,0x1C83B8C2FFF6BB7EL,-3L},{-6L,1L,0x3B5CCB47C0F13302L}}}, // p_856->g_163
        0x0DL, // p_856->g_181
        {{5UL,0L}}, // p_856->g_198
        {0L,0x63L,1L}, // p_856->g_202
        &p_856->g_202, // p_856->g_203
        &p_856->g_198.f0, // p_856->g_229
        {0x14513EA7L,0UL,0x65DEL,0xAD35L,0UL}, // p_856->g_242
        {0x595FL,6L,0x028811F8L}, // p_856->g_246
        {5L,0x31L,0x12B466F6L}, // p_856->g_247
        &p_856->g_229, // p_856->g_248
        {0x5021357D85741A34L,{1UL,0L},0xDCC4CEC06E7D003EL,0L}, // p_856->g_252
        0xA6877B99L, // p_856->g_262
        0xFCL, // p_856->g_268
        {{&p_856->g_106,&p_856->g_153,&p_856->g_153,&p_856->g_106,&p_856->g_153,&p_856->g_154.f2,&p_856->g_154.f2,&p_856->g_153,&p_856->g_106,&p_856->g_153},{&p_856->g_106,&p_856->g_153,&p_856->g_153,&p_856->g_106,&p_856->g_153,&p_856->g_154.f2,&p_856->g_154.f2,&p_856->g_153,&p_856->g_106,&p_856->g_153},{&p_856->g_106,&p_856->g_153,&p_856->g_153,&p_856->g_106,&p_856->g_153,&p_856->g_154.f2,&p_856->g_154.f2,&p_856->g_153,&p_856->g_106,&p_856->g_153},{&p_856->g_106,&p_856->g_153,&p_856->g_153,&p_856->g_106,&p_856->g_153,&p_856->g_154.f2,&p_856->g_154.f2,&p_856->g_153,&p_856->g_106,&p_856->g_153},{&p_856->g_106,&p_856->g_153,&p_856->g_153,&p_856->g_106,&p_856->g_153,&p_856->g_154.f2,&p_856->g_154.f2,&p_856->g_153,&p_856->g_106,&p_856->g_153},{&p_856->g_106,&p_856->g_153,&p_856->g_153,&p_856->g_106,&p_856->g_153,&p_856->g_154.f2,&p_856->g_154.f2,&p_856->g_153,&p_856->g_106,&p_856->g_153},{&p_856->g_106,&p_856->g_153,&p_856->g_153,&p_856->g_106,&p_856->g_153,&p_856->g_154.f2,&p_856->g_154.f2,&p_856->g_153,&p_856->g_106,&p_856->g_153},{&p_856->g_106,&p_856->g_153,&p_856->g_153,&p_856->g_106,&p_856->g_153,&p_856->g_154.f2,&p_856->g_154.f2,&p_856->g_153,&p_856->g_106,&p_856->g_153}}, // p_856->g_273
        (void*)0, // p_856->g_274
        {{{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153}},{{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153}},{{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153}},{{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153}},{{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153}},{{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153},{&p_856->g_2,&p_856->g_153}}}, // p_856->g_280
        &p_856->g_280[1][1][1], // p_856->g_279
        {&p_856->g_106}, // p_856->g_283
        {-3L,-1L,0x0631ADB9L}, // p_856->g_293
        0x48B14181L, // p_856->g_315
        0x15A8701BL, // p_856->g_317
        {{0x11ACD932L,0xDDL,65528UL,0x410AL,0xA9DB045D2DD99804L},{0x11ACD932L,0xDDL,65528UL,0x410AL,0xA9DB045D2DD99804L},{0x11ACD932L,0xDDL,65528UL,0x410AL,0xA9DB045D2DD99804L},{0x11ACD932L,0xDDL,65528UL,0x410AL,0xA9DB045D2DD99804L},{0x11ACD932L,0xDDL,65528UL,0x410AL,0xA9DB045D2DD99804L},{0x11ACD932L,0xDDL,65528UL,0x410AL,0xA9DB045D2DD99804L},{0x11ACD932L,0xDDL,65528UL,0x410AL,0xA9DB045D2DD99804L},{0x11ACD932L,0xDDL,65528UL,0x410AL,0xA9DB045D2DD99804L},{0x11ACD932L,0xDDL,65528UL,0x410AL,0xA9DB045D2DD99804L}}, // p_856->g_324
        {-1L,0x4BL,3L}, // p_856->g_368
        7L, // p_856->g_373
        0x0DL, // p_856->g_385
        0x0D4388BAF30803D5L, // p_856->g_387
        {-4L,254UL,0x6843L,0UL,0xDD99FE79EE4BA1DDL}, // p_856->g_410
        0x2723L, // p_856->g_412
        &p_856->g_94, // p_856->g_413
        0x377EL, // p_856->g_478
        0x7E940EC1L, // p_856->g_493
        0xAB43D407L, // p_856->g_495
        {{{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L}},{{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L},{0x09L,(-2L),3L,9L,0x0BL,0x09L,9L,(-5L),9L,0x09L}}}, // p_856->g_527
        1UL, // p_856->g_541
        (-1L), // p_856->g_551
        &p_856->g_283[0], // p_856->g_560
        &p_856->g_368.f2, // p_856->g_565
        {{1UL,65527UL,65527UL,1UL,0x65B1L,1UL,0UL,0x1E12L,0x6516L},{1UL,65527UL,65527UL,1UL,0x65B1L,1UL,0UL,0x1E12L,0x6516L},{1UL,65527UL,65527UL,1UL,0x65B1L,1UL,0UL,0x1E12L,0x6516L},{1UL,65527UL,65527UL,1UL,0x65B1L,1UL,0UL,0x1E12L,0x6516L},{1UL,65527UL,65527UL,1UL,0x65B1L,1UL,0UL,0x1E12L,0x6516L},{1UL,65527UL,65527UL,1UL,0x65B1L,1UL,0UL,0x1E12L,0x6516L},{1UL,65527UL,65527UL,1UL,0x65B1L,1UL,0UL,0x1E12L,0x6516L},{1UL,65527UL,65527UL,1UL,0x65B1L,1UL,0UL,0x1E12L,0x6516L}}, // p_856->g_570
        {0x3EL}, // p_856->g_582
        &p_856->g_252, // p_856->g_586
        {{&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413},{&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413},{&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413},{&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413},{&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413},{&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413},{&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413},{&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413,&p_856->g_413,&p_856->g_93[0][2],&p_856->g_413}}, // p_856->g_640
        &p_856->g_93[1][4], // p_856->g_642
        0x247D3D71L, // p_856->g_704
        {3L}, // p_856->g_707
        &p_856->g_707, // p_856->g_706
        (void*)0, // p_856->g_712
        &p_856->g_368, // p_856->g_713
        &p_856->g_198.f1, // p_856->g_753
        &p_856->g_198, // p_856->g_784
        8UL, // p_856->g_852
        &p_856->g_280[3][4][1], // p_856->g_855
    };
    c_857 = c_858;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_856);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_856->g_2, "p_856->g_2", print_hash_value);
    transparent_crc(p_856->g_6, "p_856->g_6", print_hash_value);
    transparent_crc(p_856->g_31.f0, "p_856->g_31.f0", print_hash_value);
    transparent_crc(p_856->g_31.f1.f0, "p_856->g_31.f1.f0", print_hash_value);
    transparent_crc(p_856->g_31.f1.f1, "p_856->g_31.f1.f1", print_hash_value);
    transparent_crc(p_856->g_31.f2, "p_856->g_31.f2", print_hash_value);
    transparent_crc(p_856->g_31.f3, "p_856->g_31.f3", print_hash_value);
    transparent_crc(p_856->g_43, "p_856->g_43", print_hash_value);
    transparent_crc(p_856->g_45.f0, "p_856->g_45.f0", print_hash_value);
    transparent_crc(p_856->g_45.f1, "p_856->g_45.f1", print_hash_value);
    transparent_crc(p_856->g_45.f2, "p_856->g_45.f2", print_hash_value);
    transparent_crc(p_856->g_106, "p_856->g_106", print_hash_value);
    transparent_crc(p_856->g_110, "p_856->g_110", print_hash_value);
    transparent_crc(p_856->g_118, "p_856->g_118", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_856->g_121[i], "p_856->g_121[i]", print_hash_value);

    }
    transparent_crc(p_856->g_133, "p_856->g_133", print_hash_value);
    transparent_crc(p_856->g_142, "p_856->g_142", print_hash_value);
    transparent_crc(p_856->g_153, "p_856->g_153", print_hash_value);
    transparent_crc(p_856->g_154.f0, "p_856->g_154.f0", print_hash_value);
    transparent_crc(p_856->g_154.f1, "p_856->g_154.f1", print_hash_value);
    transparent_crc(p_856->g_154.f2, "p_856->g_154.f2", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_856->g_163[i][j].f0, "p_856->g_163[i][j].f0", print_hash_value);
            transparent_crc(p_856->g_163[i][j].f1, "p_856->g_163[i][j].f1", print_hash_value);
            transparent_crc(p_856->g_163[i][j].f2, "p_856->g_163[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_856->g_181, "p_856->g_181", print_hash_value);
    transparent_crc(p_856->g_198.f0.f0, "p_856->g_198.f0.f0", print_hash_value);
    transparent_crc(p_856->g_198.f0.f1, "p_856->g_198.f0.f1", print_hash_value);
    transparent_crc(p_856->g_202.f0, "p_856->g_202.f0", print_hash_value);
    transparent_crc(p_856->g_202.f1, "p_856->g_202.f1", print_hash_value);
    transparent_crc(p_856->g_202.f2, "p_856->g_202.f2", print_hash_value);
    transparent_crc(p_856->g_242.f0, "p_856->g_242.f0", print_hash_value);
    transparent_crc(p_856->g_242.f1, "p_856->g_242.f1", print_hash_value);
    transparent_crc(p_856->g_242.f2, "p_856->g_242.f2", print_hash_value);
    transparent_crc(p_856->g_242.f3, "p_856->g_242.f3", print_hash_value);
    transparent_crc(p_856->g_242.f4, "p_856->g_242.f4", print_hash_value);
    transparent_crc(p_856->g_246.f0, "p_856->g_246.f0", print_hash_value);
    transparent_crc(p_856->g_246.f1, "p_856->g_246.f1", print_hash_value);
    transparent_crc(p_856->g_246.f2, "p_856->g_246.f2", print_hash_value);
    transparent_crc(p_856->g_247.f0, "p_856->g_247.f0", print_hash_value);
    transparent_crc(p_856->g_247.f1, "p_856->g_247.f1", print_hash_value);
    transparent_crc(p_856->g_247.f2, "p_856->g_247.f2", print_hash_value);
    transparent_crc(p_856->g_252.f0, "p_856->g_252.f0", print_hash_value);
    transparent_crc(p_856->g_252.f1.f0, "p_856->g_252.f1.f0", print_hash_value);
    transparent_crc(p_856->g_252.f1.f1, "p_856->g_252.f1.f1", print_hash_value);
    transparent_crc(p_856->g_252.f2, "p_856->g_252.f2", print_hash_value);
    transparent_crc(p_856->g_252.f3, "p_856->g_252.f3", print_hash_value);
    transparent_crc(p_856->g_262, "p_856->g_262", print_hash_value);
    transparent_crc(p_856->g_268, "p_856->g_268", print_hash_value);
    transparent_crc(p_856->g_293.f0, "p_856->g_293.f0", print_hash_value);
    transparent_crc(p_856->g_293.f1, "p_856->g_293.f1", print_hash_value);
    transparent_crc(p_856->g_293.f2, "p_856->g_293.f2", print_hash_value);
    transparent_crc(p_856->g_315, "p_856->g_315", print_hash_value);
    transparent_crc(p_856->g_317, "p_856->g_317", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_856->g_324[i].f0, "p_856->g_324[i].f0", print_hash_value);
        transparent_crc(p_856->g_324[i].f1, "p_856->g_324[i].f1", print_hash_value);
        transparent_crc(p_856->g_324[i].f2, "p_856->g_324[i].f2", print_hash_value);
        transparent_crc(p_856->g_324[i].f3, "p_856->g_324[i].f3", print_hash_value);
        transparent_crc(p_856->g_324[i].f4, "p_856->g_324[i].f4", print_hash_value);

    }
    transparent_crc(p_856->g_368.f0, "p_856->g_368.f0", print_hash_value);
    transparent_crc(p_856->g_368.f1, "p_856->g_368.f1", print_hash_value);
    transparent_crc(p_856->g_368.f2, "p_856->g_368.f2", print_hash_value);
    transparent_crc(p_856->g_373, "p_856->g_373", print_hash_value);
    transparent_crc(p_856->g_385, "p_856->g_385", print_hash_value);
    transparent_crc(p_856->g_387, "p_856->g_387", print_hash_value);
    transparent_crc(p_856->g_410.f0, "p_856->g_410.f0", print_hash_value);
    transparent_crc(p_856->g_410.f1, "p_856->g_410.f1", print_hash_value);
    transparent_crc(p_856->g_410.f2, "p_856->g_410.f2", print_hash_value);
    transparent_crc(p_856->g_410.f3, "p_856->g_410.f3", print_hash_value);
    transparent_crc(p_856->g_410.f4, "p_856->g_410.f4", print_hash_value);
    transparent_crc(p_856->g_412, "p_856->g_412", print_hash_value);
    transparent_crc(p_856->g_478, "p_856->g_478", print_hash_value);
    transparent_crc(p_856->g_493, "p_856->g_493", print_hash_value);
    transparent_crc(p_856->g_495, "p_856->g_495", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_856->g_527[i][j][k], "p_856->g_527[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_856->g_541, "p_856->g_541", print_hash_value);
    transparent_crc(p_856->g_551, "p_856->g_551", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_856->g_570[i][j], "p_856->g_570[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_856->g_582.f0, "p_856->g_582.f0", print_hash_value);
    transparent_crc(p_856->g_704, "p_856->g_704", print_hash_value);
    transparent_crc(p_856->g_707.f0, "p_856->g_707.f0", print_hash_value);
    transparent_crc(p_856->g_852, "p_856->g_852", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
