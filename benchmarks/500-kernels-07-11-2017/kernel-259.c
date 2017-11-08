// -g 63,61,1 -l 9,1,1
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


// Seed: 3249007272

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   volatile uint64_t  f3;
};

struct S1 {
   int16_t  f0;
   volatile struct S0  f1;
   int32_t  f2;
   int32_t  f3;
   int16_t  f4;
   int64_t  f5;
   volatile int8_t  f6;
   int64_t  f7;
   volatile int32_t  f8;
};

struct S2 {
   int64_t  f0;
   struct S0  f1;
   uint64_t  f2;
   uint32_t  f3;
   volatile struct S1  f4;
   int32_t  f5;
   volatile int32_t  f6;
};

union U3 {
   uint32_t  f0;
   uint32_t  f1;
   volatile int8_t * f2;
   struct S1  f3;
   volatile uint8_t  f4;
};

union U4 {
   int8_t * f0;
   volatile int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   volatile struct S2  f4;
};

union U5 {
   int8_t * f0;
   int64_t  f1;
   uint16_t  f2;
   volatile uint8_t  f3;
   uint32_t  f4;
};

union U6 {
   volatile int32_t  f0;
};

struct S7 {
    int8_t g_12;
    uint8_t g_38;
    int16_t g_42;
    uint64_t g_59;
    struct S1 g_65[7][4];
    struct S1 *g_64;
    struct S1 g_67;
    union U3 g_68;
    volatile uint16_t g_95;
    int8_t *g_100;
    uint32_t g_105;
    uint32_t g_111[2][9][4];
    volatile uint8_t g_123[6];
    struct S1 g_129;
    int32_t *g_132[2];
    volatile int64_t g_158[2];
    volatile int64_t *g_157;
    struct S1 g_160;
    volatile union U4 g_195;
    uint8_t g_198[10];
    uint16_t g_200[4][6];
    uint16_t g_208;
    union U5 g_214;
    union U6 g_215;
    volatile struct S0 g_216;
    volatile struct S0 * volatile g_217;
    struct S0 g_236;
    struct S0 g_238;
    int32_t g_240;
    struct S0 *g_245;
    struct S0 **g_244[7];
    struct S0 *** volatile g_243;
    uint32_t g_259;
    uint8_t g_296[7];
    uint32_t g_312;
    struct S2 g_313;
    volatile union U5 g_317;
    volatile union U4 g_341;
    volatile union U4 g_342;
    struct S2 g_343;
    volatile union U6 g_380[10];
    volatile struct S0 g_396;
    volatile union U6 g_418;
    struct S2 g_419;
    union U4 g_423;
    union U4 *g_425;
    union U4 ** volatile g_424;
    union U4 ** volatile g_427;
    struct S2 *g_434[8][2];
    struct S2 **g_433;
    struct S2 ***g_432[5];
    union U4 g_478;
    int16_t g_517[3][2][8];
    int32_t *g_522;
    uint16_t **g_527;
    uint16_t *g_530;
    uint16_t ** volatile g_529;
    volatile int64_t g_540[4][9];
    union U4 g_562[4];
    volatile struct S0 g_577[10];
    volatile struct S0 g_578;
    int32_t ** volatile g_580[4];
    int32_t g_582;
    struct S1 g_604;
    volatile int32_t g_608;
    uint32_t g_632;
    volatile struct S2 g_636;
    volatile union U3 g_653;
    union U6 *g_676;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S7 * p_677);
int32_t  func_5(int8_t * p_6, int64_t  p_7, int8_t * p_8, uint32_t  p_9, uint8_t  p_10, struct S7 * p_677);
uint32_t  func_13(uint32_t  p_14, int32_t  p_15, struct S7 * p_677);
int64_t  func_16(int64_t  p_17, int8_t * p_18, int64_t  p_19, struct S7 * p_677);
int16_t  func_20(int32_t  p_21, int32_t  p_22, int8_t * p_23, int8_t  p_24, int32_t  p_25, struct S7 * p_677);
struct S1  func_28(int8_t * p_29, int8_t  p_30, int8_t * p_31, struct S7 * p_677);
uint64_t  func_33(int16_t  p_34, struct S7 * p_677);
struct S1 * func_46(uint8_t * p_47, int64_t  p_48, uint8_t * p_49, int32_t  p_50, struct S7 * p_677);
int8_t  func_142(int64_t  p_143, uint32_t * p_144, struct S1 * p_145, int32_t ** p_146, int32_t  p_147, struct S7 * p_677);
int32_t * func_161(int16_t  p_162, uint8_t * p_163, int32_t  p_164, int8_t * p_165, struct S7 * p_677);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_677->g_12 p_677->g_38 p_677->g_42 p_677->g_59 p_677->g_64 p_677->g_67 p_677->g_68 p_677->g_65.f2 p_677->g_65.f5 p_677->g_68.f0 p_677->g_65.f1.f1 p_677->g_65.f7 p_677->g_65.f4 p_677->g_95 p_677->g_65.f8 p_677->g_343.f1.f3 p_677->g_419.f4.f3 p_677->g_582 p_677->g_243 p_677->g_244 p_677->g_245 p_677->g_129.f4 p_677->g_343.f3 p_677->g_129.f2 p_677->g_296 p_677->g_604.f0 p_677->g_577.f1 p_677->g_632 p_677->g_636 p_677->g_238.f1 p_677->g_653 p_677->g_604.f3 p_677->g_160.f5
 * writes: p_677->g_38 p_677->g_42 p_677->g_59 p_677->g_64 p_677->g_65.f2 p_677->g_67.f1.f2 p_677->g_68.f3.f2 p_677->g_65.f7 p_677->g_95 p_677->g_132 p_677->g_195.f4 p_677->g_238.f1 p_677->g_67.f3 p_677->g_67.f7 p_677->g_432 p_677->g_604.f3 p_677->g_160.f5 p_677->g_676
 */
uint16_t  func_1(struct S7 * p_677)
{ /* block id: 4 */
    uint64_t l_4 = 0UL;
    int8_t *l_11[7][4] = {{&p_677->g_12,&p_677->g_12,&p_677->g_12,&p_677->g_12},{&p_677->g_12,&p_677->g_12,&p_677->g_12,&p_677->g_12},{&p_677->g_12,&p_677->g_12,&p_677->g_12,&p_677->g_12},{&p_677->g_12,&p_677->g_12,&p_677->g_12,&p_677->g_12},{&p_677->g_12,&p_677->g_12,&p_677->g_12,&p_677->g_12},{&p_677->g_12,&p_677->g_12,&p_677->g_12,&p_677->g_12},{&p_677->g_12,&p_677->g_12,&p_677->g_12,&p_677->g_12}};
    int64_t l_32 = 2L;
    uint8_t *l_37 = &p_677->g_38;
    int16_t *l_41 = &p_677->g_42;
    int32_t *l_69 = &p_677->g_65[0][2].f2;
    uint32_t l_83 = 0x30B2CD53L;
    int32_t *l_84[8][5] = {{&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2},{&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2},{&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2},{&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2},{&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2},{&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2},{&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2},{&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2}};
    int64_t *l_85[1];
    uint8_t l_592 = 0x5AL;
    struct S1 *l_602 = &p_677->g_65[0][2];
    union U6 *l_675 = &p_677->g_215;
    int i, j;
    for (i = 0; i < 1; i++)
        l_85[i] = &p_677->g_65[0][2].f7;
    if ((safe_rshift_func_int16_t_s_s(((l_4 , (~func_5(l_11[5][1], (func_13(l_4, (func_16((p_677->g_65[0][2].f7 ^= ((p_677->g_68.f3.f2 = ((*l_69) = (func_20(((*l_69) &= ((p_677->g_12 == ((*l_37) = ((((1L == (safe_mul_func_int16_t_s_s(((func_28((((p_677->g_12 , l_32) == (func_33(((*l_41) |= (safe_add_func_uint8_t_u_u((--(*l_37)), ((-1L) != 65535UL)))), p_677) , p_677->g_42)) , l_37), l_32, l_11[5][1], p_677) , p_677->g_68) , (-2L)), 0x18ECL))) , l_4) && 4294967294UL) || 4294967291UL))) < 0x5004DB1C9D1C1E51L)), p_677->g_65[0][2].f5, l_37, p_677->g_68.f0, p_677->g_67.f4, p_677) | l_83))) && 0x199F76DDL)), l_11[1][0], p_677->g_65[0][2].f4, p_677) && p_677->g_67.f1.f3), p_677) , p_677->g_12), &p_677->g_12, p_677->g_67.f2, p_677->g_12, p_677))) , p_677->g_419.f4.f3), p_677->g_582)))
    { /* block id: 331 */
        uint8_t l_585 = 0UL;
        int32_t l_591 = 0L;
        int32_t l_606 = (-2L);
        struct S2 ***l_645[6][10][4] = {{{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433}},{{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433}},{{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433}},{{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433}},{{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433}},{{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433},{&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433}}};
        int16_t l_648 = 9L;
        int i, j, k;
        if ((*l_69))
        { /* block id: 332 */
            uint32_t l_588[5];
            int8_t *l_601 = (void*)0;
            struct S1 *l_603 = &p_677->g_604;
            int32_t l_605 = 3L;
            int32_t l_607 = (-1L);
            int32_t l_609 = 0x76E08B4AL;
            int32_t l_610 = 0x1E7B0C8DL;
            int32_t l_611 = (-1L);
            int8_t l_612 = (-4L);
            int32_t l_613[2][10][8] = {{{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)}},{{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)},{0x61594E10L,(-1L),(-1L),(-1L),0x61594E10L,0x61594E10L,(-1L),(-1L)}}};
            uint32_t l_614[10];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_588[i] = 4294967294UL;
            for (i = 0; i < 10; i++)
                l_614[i] = 0x486016E5L;
            l_606 &= ((0UL <= (((safe_mod_func_uint16_t_u_u(((l_585 | (safe_rshift_func_uint8_t_u_u(l_588[1], 5))) & ((l_605 = ((((((l_592++) ^ (safe_div_func_int32_t_s_s(0x574A2C87L, (safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((func_28(&p_677->g_12, l_591, l_601, p_677) , (**p_677->g_243)) != (void*)0) ^ p_677->g_129.f4), l_591)), (*l_69)))))) , l_602) == l_603) , l_585) ^ p_677->g_343.f3)) ^ 0L)), p_677->g_129.f2)) , &p_677->g_425) != (void*)0)) && p_677->g_296[3]);
            --l_614[1];
        }
        else
        { /* block id: 337 */
            int8_t *l_621 = (void*)0;
            uint64_t *l_624 = &p_677->g_59;
            int32_t l_631 = 8L;
            struct S2 ****l_633 = &p_677->g_432[1];
            if ((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((func_28(l_621, (((*l_624) = ((safe_rshift_func_int16_t_s_u((p_677->g_604.f0 , 0x6F09L), l_585)) , p_677->g_577[7].f1)) , (l_606 > ((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((--(*l_37)), 0x7FL)), (((*l_69) = (l_631 = (0L == l_585))) && l_585))) || p_677->g_65[0][2].f4))), l_621, p_677) , l_606), 1L)), 0L)) >= l_585) < p_677->g_632))
            { /* block id: 342 */
                struct S2 ****l_635 = &p_677->g_432[0];
                struct S2 *****l_634 = &l_635;
                l_591 = (&p_677->g_432[0] != ((*l_634) = (l_633 = &p_677->g_432[0])));
            }
            else
            { /* block id: 346 */
                volatile struct S2 *l_637 = &p_677->g_195.f4;
                (*l_637) = p_677->g_636;
            }
            for (p_677->g_238.f1 = (-9); (p_677->g_238.f1 != 35); p_677->g_238.f1 = safe_add_func_int32_t_s_s(p_677->g_238.f1, 8))
            { /* block id: 351 */
                for (p_677->g_67.f3 = (-6); (p_677->g_67.f3 < (-26)); p_677->g_67.f3 = safe_sub_func_uint32_t_u_u(p_677->g_67.f3, 9))
                { /* block id: 354 */
                    int8_t **l_642[3][3][3] = {{{(void*)0,&l_621,(void*)0},{(void*)0,&l_621,(void*)0},{(void*)0,&l_621,(void*)0}},{{(void*)0,&l_621,(void*)0},{(void*)0,&l_621,(void*)0},{(void*)0,&l_621,(void*)0}},{{(void*)0,&l_621,(void*)0},{(void*)0,&l_621,(void*)0},{(void*)0,&l_621,(void*)0}}};
                    int i, j, k;
                    (*l_69) = ((p_677->g_67.f7 = 0x17DFF608FDCE3EE0L) || ((void*)0 == l_642[2][2][0]));
                }
            }
            (*l_69) ^= (((safe_mul_func_int8_t_s_s(l_606, ((((*l_633) = l_645[0][9][0]) == ((4294967294UL > (safe_lshift_func_int16_t_s_s(l_648, 1))) , l_645[0][9][0])) , (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(((p_677->g_653 , 0x1F7121BAL) , ((safe_lshift_func_int16_t_s_s(l_631, 2)) | (safe_rshift_func_int16_t_s_s(l_631, p_677->g_343.f1.f3)))), l_631)) ^ (-9L)), 7))))) < 0xF87C775FC924D01FL) <= l_631);
        }
    }
    else
    { /* block id: 362 */
        int32_t l_660 = 3L;
        int32_t l_662 = 4L;
        int32_t l_663 = 1L;
        int32_t l_664 = (-3L);
        int32_t l_667 = 0L;
        uint32_t l_669[10][3][3] = {{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}},{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}},{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}},{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}},{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}},{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}},{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}},{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}},{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}},{{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL},{0xB1337759L,0x79290D1DL,4294967290UL}}};
        int i, j, k;
        for (p_677->g_604.f3 = 11; (p_677->g_604.f3 < 29); ++p_677->g_604.f3)
        { /* block id: 365 */
            int64_t l_661 = 9L;
            int32_t l_665 = 0x1B94CDBBL;
            int32_t l_666 = 0x44D47248L;
            int32_t l_668[4] = {3L,3L,3L,3L};
            int i;
            --l_669[8][0][1];
            return l_661;
        }
    }
    for (p_677->g_160.f5 = 0; (p_677->g_160.f5 > 5); p_677->g_160.f5 = safe_add_func_uint64_t_u_u(p_677->g_160.f5, 2))
    { /* block id: 372 */
        int32_t l_674 = (-1L);
        l_674 |= ((*l_69) || ((p_677->g_68 , (void*)0) != (void*)0));
        p_677->g_676 = l_675;
    }
    return (*l_69);
}


/* ------------------------------------------ */
/* 
 * reads : p_677->g_42 p_677->g_343.f1.f3
 * writes: p_677->g_42 p_677->g_132
 */
int32_t  func_5(int8_t * p_6, int64_t  p_7, int8_t * p_8, uint32_t  p_9, uint8_t  p_10, struct S7 * p_677)
{ /* block id: 47 */
    int16_t l_106 = 0x12CCL;
    int32_t l_107 = 0x7CEE369AL;
    int32_t *l_135[4] = {&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2,&p_677->g_67.f2};
    int8_t **l_516 = &p_677->g_100;
    uint64_t l_535 = 1UL;
    uint32_t l_557 = 0x74BEBE05L;
    int32_t l_576 = 1L;
    uint16_t l_579[1][10] = {{0x2F27L,0x2F27L,0x2F27L,0x2F27L,0x2F27L,0x2F27L,0x2F27L,0x2F27L,0x2F27L,0x2F27L}};
    int32_t **l_581 = &p_677->g_132[0];
    int i, j;
    for (p_677->g_42 = 3; (p_677->g_42 >= 0); p_677->g_42 -= 1)
    { /* block id: 50 */
        int8_t **l_101[6] = {&p_677->g_100,&p_677->g_100,&p_677->g_100,&p_677->g_100,&p_677->g_100,&p_677->g_100};
        uint32_t *l_104[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_108 = 0L;
        int32_t *l_114 = (void*)0;
        int32_t *l_115 = &p_677->g_65[0][2].f2;
        struct S1 *l_128 = &p_677->g_129;
        union U3 *l_481 = &p_677->g_68;
        struct S2 *l_518 = (void*)0;
        int32_t l_536 = 0x012DF830L;
        int32_t l_537 = 0x7728EA2AL;
        int32_t l_538 = (-1L);
        int32_t l_539 = (-2L);
        int32_t l_544 = 0x4F698FCBL;
        int32_t l_547 = 6L;
        int32_t l_548 = 1L;
        int32_t l_549 = 4L;
        int32_t l_550 = 0x5FFAD751L;
        int32_t l_554 = 0x72C8E323L;
        int32_t l_555[6] = {1L,0x6DEC2076L,1L,1L,0x6DEC2076L,1L};
        int i;
        (1 + 1);
    }
    (*l_581) = &l_107;
    return p_677->g_343.f1.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_677->g_95 p_677->g_65.f8
 * writes: p_677->g_95
 */
uint32_t  func_13(uint32_t  p_14, int32_t  p_15, struct S7 * p_677)
{ /* block id: 44 */
    int32_t *l_86 = &p_677->g_67.f2;
    int32_t *l_87 = &p_677->g_68.f3.f2;
    int32_t *l_88 = &p_677->g_65[0][2].f2;
    int32_t *l_89 = &p_677->g_65[0][2].f2;
    int32_t *l_90 = (void*)0;
    int32_t *l_91 = &p_677->g_68.f3.f2;
    int32_t l_92 = 0L;
    int32_t l_93[8] = {0x02E662C9L,0x02E662C9L,0x02E662C9L,0x02E662C9L,0x02E662C9L,0x02E662C9L,0x02E662C9L,0x02E662C9L};
    int32_t *l_94[8];
    int i;
    for (i = 0; i < 8; i++)
        l_94[i] = (void*)0;
    p_677->g_95--;
    return p_677->g_65[0][2].f8;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_16(int64_t  p_17, int8_t * p_18, int64_t  p_19, struct S7 * p_677)
{ /* block id: 42 */
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_677->g_65.f1.f1
 * writes: p_677->g_67.f1.f2
 */
int16_t  func_20(int32_t  p_21, int32_t  p_22, int8_t * p_23, int8_t  p_24, int32_t  p_25, struct S7 * p_677)
{ /* block id: 24 */
    int32_t *l_70 = &p_677->g_68.f3.f2;
    int32_t l_71 = 0x3C6B9C53L;
    int32_t *l_72 = (void*)0;
    int32_t *l_73 = (void*)0;
    int32_t *l_74[9];
    uint8_t l_75 = 255UL;
    uint16_t l_78 = 0xD59EL;
    int32_t **l_82 = &l_70;
    int i;
    for (i = 0; i < 9; i++)
        l_74[i] = &l_71;
    ++l_75;
    if (func_33((7UL >= l_78), p_677))
    { /* block id: 26 */
        return p_677->g_65[0][2].f1.f1;
    }
    else
    { /* block id: 28 */
        for (p_21 = (-23); (p_21 < (-17)); p_21 = safe_add_func_int16_t_s_s(p_21, 2))
        { /* block id: 31 */
            int32_t **l_81 = &l_72;
            (*l_81) = &l_71;
            if (p_22)
                continue;
            for (p_677->g_67.f1.f2 = 0; p_677->g_67.f1.f2 < 9; p_677->g_67.f1.f2 += 1)
            {
                l_74[p_677->g_67.f1.f2] = &p_677->g_65[0][2].f2;
            }
        }
    }
    (*l_82) = (void*)0;
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_677->g_12 p_677->g_59 p_677->g_42 p_677->g_64 p_677->g_67
 * writes: p_677->g_59 p_677->g_64
 */
struct S1  func_28(int8_t * p_29, int8_t  p_30, int8_t * p_31, struct S7 * p_677)
{ /* block id: 10 */
    uint8_t *l_57 = (void*)0;
    uint64_t *l_58 = &p_677->g_59;
    int16_t l_60 = 0x3DF1L;
    int32_t l_61 = 0L;
    struct S1 **l_66 = &p_677->g_64;
    (*l_66) = func_46(p_29, (safe_mod_func_int64_t_s_s(p_677->g_12, ((safe_add_func_uint8_t_u_u(p_30, ((safe_lshift_func_int8_t_s_s(((void*)0 != l_57), 0)) ^ (l_60 |= ((*l_58) &= p_677->g_12))))) || (p_677->g_42 >= func_33(p_30, p_677))))), l_57, l_61, p_677);
    return p_677->g_67;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_33(int16_t  p_34, struct S7 * p_677)
{ /* block id: 7 */
    uint32_t l_43 = 9UL;
    --l_43;
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_677->g_59 p_677->g_64
 * writes: p_677->g_59
 */
struct S1 * func_46(uint8_t * p_47, int64_t  p_48, uint8_t * p_49, int32_t  p_50, struct S7 * p_677)
{ /* block id: 13 */
    for (p_677->g_59 = (-26); (p_677->g_59 > 29); p_677->g_59++)
    { /* block id: 16 */
        return p_677->g_64;
    }
    return &p_677->g_65[3][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_677->g_67.f4 p_677->g_343.f1.f1 p_677->g_478 p_677->g_132
 * writes: p_677->g_67.f4 p_677->g_343.f1.f1 p_677->g_432
 */
int8_t  func_142(int64_t  p_143, uint32_t * p_144, struct S1 * p_145, int32_t ** p_146, int32_t  p_147, struct S7 * p_677)
{ /* block id: 67 */
    int8_t *l_169[3];
    int32_t l_457 = 0x4A5EAC9DL;
    struct S2 **l_462 = &p_677->g_434[2][0];
    uint8_t *l_463 = &p_677->g_296[3];
    int32_t l_468 = 1L;
    uint32_t *l_469[5][3] = {{&p_677->g_343.f1.f2,&p_677->g_343.f1.f2,&p_677->g_343.f1.f2},{&p_677->g_343.f1.f2,&p_677->g_343.f1.f2,&p_677->g_343.f1.f2},{&p_677->g_343.f1.f2,&p_677->g_343.f1.f2,&p_677->g_343.f1.f2},{&p_677->g_343.f1.f2,&p_677->g_343.f1.f2,&p_677->g_343.f1.f2},{&p_677->g_343.f1.f2,&p_677->g_343.f1.f2,&p_677->g_343.f1.f2}};
    int32_t l_470 = (-1L);
    uint8_t *l_471 = &p_677->g_198[0];
    int i, j;
    for (i = 0; i < 3; i++)
        l_169[i] = &p_677->g_12;
    for (p_677->g_67.f4 = 1; (p_677->g_67.f4 >= 0); p_677->g_67.f4 -= 1)
    { /* block id: 70 */
        uint8_t *l_166 = &p_677->g_38;
        int32_t l_456 = 0x007CBE18L;
        (1 + 1);
    }
    (*p_146) = (*p_146);
    for (p_677->g_343.f1.f1 = 0; (p_677->g_343.f1.f1 <= 2); p_677->g_343.f1.f1 += 1)
    { /* block id: 283 */
        struct S2 ***l_476 = &p_677->g_433;
        struct S2 ****l_477 = &p_677->g_432[2];
        l_470 = (safe_rshift_func_int16_t_s_u(0x5BB6L, (!(safe_lshift_func_uint8_t_u_u((((*l_477) = l_476) == &l_462), 1)))));
        return l_468;
    }
    (*p_146) = (p_677->g_478 , p_677->g_132[0]);
    return l_470;
}


/* ------------------------------------------ */
/* 
 * reads : p_677->g_195 p_677->g_200 p_677->g_129.f5 p_677->g_208 p_677->g_38 p_677->g_160.f7 p_677->g_65.f2 p_677->g_160.f5 p_677->g_129.f2 p_677->g_214 p_677->g_129.f3 p_677->g_65 p_677->g_215 p_677->g_216 p_677->g_217 p_677->g_123 p_677->g_240 p_677->g_67.f0 p_677->g_243 p_677->g_67.f3 p_677->g_259 p_677->g_12 p_677->g_129.f1.f2 p_677->g_59 p_677->g_132 p_677->g_67.f7 p_677->g_100 p_677->g_160.f4 p_677->g_67.f2 p_677->g_296 p_677->g_236.f1 p_677->g_42 p_677->g_64 p_677->g_67 p_677->g_198 p_677->g_313 p_677->g_317 p_677->g_158 p_677->g_238.f1 p_677->g_68.f0 p_677->g_341 p_677->g_342 p_677->g_312 p_677->g_343 p_677->g_432 p_677->g_424 p_677->g_425 p_677->g_423
 * writes: p_677->g_129.f2 p_677->g_132 p_677->g_200 p_677->g_208 p_677->g_111 p_677->g_129.f5 p_677->g_129.f3 p_677->g_67.f0 p_677->g_65 p_677->g_129.f1 p_677->g_240 p_677->g_68.f3.f2 p_677->g_244 p_677->g_129.f4 p_677->g_67.f2 p_677->g_59 p_677->g_105 p_677->g_198 p_677->g_296 p_677->g_64 p_677->g_312 p_677->g_236.f1 p_677->g_67.f3 p_677->g_160.f3 p_677->g_343 p_677->g_160.f4 p_677->g_160.f7 p_677->g_313.f0 p_677->g_160.f2
 */
int32_t * func_161(int16_t  p_162, uint8_t * p_163, int32_t  p_164, int8_t * p_165, struct S7 * p_677)
{ /* block id: 72 */
    int32_t *l_170 = &p_677->g_68.f3.f2;
    int32_t *l_171 = &p_677->g_67.f2;
    int32_t *l_172 = &p_677->g_67.f2;
    int32_t *l_173 = &p_677->g_68.f3.f2;
    int32_t *l_174 = (void*)0;
    int32_t *l_175 = (void*)0;
    int32_t l_176[8];
    int32_t *l_177 = &p_677->g_68.f3.f2;
    int32_t *l_178 = &p_677->g_129.f2;
    int32_t *l_179 = &l_176[1];
    int32_t *l_180 = (void*)0;
    int32_t *l_181 = &p_677->g_67.f2;
    int32_t *l_182 = &p_677->g_65[0][2].f2;
    int32_t *l_183 = &l_176[1];
    int32_t *l_184 = &l_176[1];
    int32_t *l_185 = &p_677->g_68.f3.f2;
    int32_t *l_186 = (void*)0;
    int32_t *l_187 = &p_677->g_65[0][2].f2;
    int32_t *l_188[6] = {(void*)0,&p_677->g_129.f2,(void*)0,(void*)0,&p_677->g_129.f2,(void*)0};
    uint32_t l_189 = 0x6B35F5E0L;
    int32_t *l_248 = &p_677->g_65[0][2].f2;
    int8_t *l_314 = &p_677->g_12;
    int32_t *l_332 = &p_677->g_65[0][2].f2;
    int32_t l_360 = 1L;
    int64_t l_362 = 2L;
    struct S2 *l_376[10] = {(void*)0,&p_677->g_313,(void*)0,(void*)0,&p_677->g_313,(void*)0,(void*)0,&p_677->g_313,(void*)0,(void*)0};
    uint64_t *l_379 = &p_677->g_59;
    struct S2 ***l_435 = (void*)0;
    struct S2 ***l_436[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_446[6] = {1L,0L,1L,1L,0L,1L};
    uint32_t l_447[9][2] = {{0xF3379917L,0x3E26ADC8L},{0xF3379917L,0x3E26ADC8L},{0xF3379917L,0x3E26ADC8L},{0xF3379917L,0x3E26ADC8L},{0xF3379917L,0x3E26ADC8L},{0xF3379917L,0x3E26ADC8L},{0xF3379917L,0x3E26ADC8L},{0xF3379917L,0x3E26ADC8L},{0xF3379917L,0x3E26ADC8L}};
    int32_t *l_453 = &p_677->g_67.f2;
    int i, j;
    for (i = 0; i < 8; i++)
        l_176[i] = 0x11CA84DBL;
    --l_189;
lbl_450:
    for (p_677->g_129.f2 = 0; (p_677->g_129.f2 <= 7); p_677->g_129.f2 += 1)
    { /* block id: 76 */
        int32_t **l_192[4][6] = {{(void*)0,&l_174,&l_172,&l_174,(void*)0,(void*)0},{(void*)0,&l_174,&l_172,&l_174,(void*)0,(void*)0},{(void*)0,&l_174,&l_172,&l_174,(void*)0,(void*)0},{(void*)0,&l_174,&l_172,&l_174,(void*)0,(void*)0}};
        uint8_t **l_196 = (void*)0;
        uint8_t *l_197 = &p_677->g_198[6];
        uint16_t *l_199 = &p_677->g_200[3][3];
        uint16_t *l_207 = &p_677->g_208;
        uint32_t *l_213[2][1][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_254 = 0x16D31CFAL;
        uint8_t l_256 = 1UL;
        int64_t l_361 = 0x0A75CF4C71829392L;
        int32_t *l_370[1];
        uint16_t l_400[10] = {0x4456L,0x21AEL,0xC7E0L,0x21AEL,0x4456L,0x4456L,0x21AEL,0xC7E0L,0x21AEL,0x4456L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_370[i] = &p_677->g_129.f2;
        p_677->g_132[0] = &l_176[p_677->g_129.f2];
        if ((l_176[p_677->g_129.f2] = ((safe_div_func_int16_t_s_s((p_677->g_195 , ((l_197 = p_163) == &p_677->g_38)), (--(*l_199)))) != (p_677->g_111[0][0][0] = (safe_mod_func_int8_t_s_s((p_677->g_129.f5 >= (p_164 & ((((safe_rshift_func_uint16_t_u_s(p_162, ((--(*l_207)) || ((p_164 == 0xC0B29BC3DCDBF535L) < (safe_sub_func_int64_t_s_s(0x1C4210C5FF1E0223L, p_162)))))) >= (*p_163)) != p_677->g_160.f7) , (*l_187)))), p_677->g_160.f5))))))
        { /* block id: 83 */
            struct S0 *l_235 = &p_677->g_236;
            int32_t *l_247 = &l_176[0];
            int32_t l_251[4][10][3] = {{{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL}},{{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL}},{{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL}},{{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL},{0x7ACA5FBAL,0x7ACA5FBAL,0x2F0DBEEDL}}};
            int32_t *l_273 = (void*)0;
            int8_t l_292 = 1L;
            uint32_t l_293 = 6UL;
            int8_t *l_307[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint64_t l_330 = 1UL;
            int i, j, k;
            for (p_677->g_129.f5 = 3; (p_677->g_129.f5 >= 0); p_677->g_129.f5 -= 1)
            { /* block id: 86 */
                int32_t l_232 = 0x17EFC4D0L;
                struct S0 **l_242[7][7][5] = {{{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0}},{{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0}},{{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0}},{{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0}},{{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0}},{{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0}},{{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0},{&l_235,&l_235,(void*)0,&l_235,(void*)0}}};
                int32_t *l_246 = &l_232;
                int32_t l_250[7][2][6] = {{{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L},{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L}},{{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L},{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L}},{{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L},{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L}},{{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L},{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L}},{{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L},{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L}},{{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L},{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L}},{{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L},{0x293E5168L,0x42BDD61AL,0x293E5168L,0x293E5168L,0x42BDD61AL,0x293E5168L}}};
                int i, j, k;
                for (p_677->g_129.f3 = 5; (p_677->g_129.f3 >= 1); p_677->g_129.f3 -= 1)
                { /* block id: 89 */
                    struct S0 *l_237 = &p_677->g_238;
                    int32_t l_241 = 0x35A0E910L;
                    for (p_677->g_67.f0 = 7; (p_677->g_67.f0 >= 0); p_677->g_67.f0 -= 1)
                    { /* block id: 92 */
                        int16_t *l_223 = &p_677->g_129.f0;
                        int16_t *l_225 = &p_677->g_160.f0;
                        int16_t **l_224 = &l_225;
                        int32_t *l_239 = &p_677->g_240;
                        int i, j;
                        p_677->g_65[p_677->g_129.f3][p_677->g_129.f5] = (p_677->g_214 , p_677->g_65[p_677->g_129.f3][p_677->g_129.f5]);
                        (*p_677->g_217) = (p_677->g_215 , p_677->g_216);
                        l_176[p_677->g_67.f0] = (safe_sub_func_int32_t_s_s((p_677->g_123[p_677->g_129.f3] , ((safe_unary_minus_func_uint8_t_u(0x50L)) < ((p_162 , l_223) != ((*l_224) = &p_162)))), ((!p_164) >= ((safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((l_232 = 0x05DCL), (((*l_239) |= ((6L <= (safe_add_func_int32_t_s_s(((p_162 , l_235) != l_237), 1L))) | 1L)) , 65528UL))) > (-1L)), 6UL)), 0x743C3873L)) < l_241))));
                        (*l_185) = (p_162 > p_164);
                    }
                    (*p_677->g_243) = l_242[1][6][4];
                    return l_248;
                }
                for (p_677->g_129.f4 = 3; (p_677->g_129.f4 >= 0); p_677->g_129.f4 -= 1)
                { /* block id: 106 */
                    int64_t l_249 = 0x228ECA0DB158A97BL;
                    int32_t l_252 = 0x1CBC5008L;
                    int32_t l_253 = (-8L);
                    int32_t l_255[8][1][9] = {{{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L}}};
                    int i, j, k;
                    --l_256;
                    (*l_246) |= (p_677->g_67.f3 , p_677->g_259);
                }
            }
            if (((*l_181) = 0x55CF87A1L))
            { /* block id: 112 */
                uint64_t *l_268[2][6][6] = {{{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59}},{{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59},{&p_677->g_59,&p_677->g_59,&p_677->g_59,&p_677->g_59,(void*)0,&p_677->g_59}}};
                int32_t *l_274 = (void*)0;
                int32_t l_277 = 8L;
                int32_t **l_278 = &l_171;
                int16_t **l_279 = (void*)0;
                int32_t l_289 = 0x34E3347DL;
                int32_t l_290 = (-1L);
                int32_t l_291[9][7][4] = {{{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L}},{{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L}},{{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L}},{{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L}},{{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L}},{{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L}},{{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L}},{{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L}},{{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L},{0x4DAC9B48L,0x32754901L,1L,6L}}};
                struct S1 **l_308 = &p_677->g_64;
                uint8_t l_309 = 0xD1L;
                uint8_t *l_318 = &p_677->g_296[6];
                int i, j, k;
                (*l_171) = ((*p_165) && ((((p_677->g_198[6] = (safe_mul_func_uint16_t_u_u((((((p_677->g_129.f1.f2 >= 1L) > (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((p_677->g_105 = (safe_sub_func_int16_t_s_s(((-1L) == (p_677->g_59--)), ((safe_sub_func_uint32_t_u_u((((l_273 = (l_247 = p_677->g_132[0])) == (l_274 = ((0x55L & p_677->g_67.f7) , p_677->g_132[0]))) > (((safe_sub_func_int16_t_s_s(0x1271L, 0x0E8AL)) && p_162) | 0x8CF3L)), l_277)) , p_162)))), 4294967295UL)), (*p_163)))) , 0L) , l_192[1][2]) == l_278), p_164))) , l_279) == (void*)0) <= (*p_677->g_100)));
                for (l_277 = 0; (l_277 <= 3); l_277 += 1)
                { /* block id: 122 */
                    int64_t l_280[8][9] = {{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L,5L,5L,5L}};
                    int i, j;
                    (*l_181) |= (((p_677->g_129.f5 < p_162) != p_677->g_160.f4) , p_162);
                    if (l_280[1][8])
                        break;
                    if (l_189)
                        goto lbl_450;
                }
                for (l_256 = 0; (l_256 <= 3); l_256 += 1)
                { /* block id: 128 */
                    int32_t *l_281 = &p_677->g_67.f2;
                    int32_t l_284 = (-1L);
                    int32_t l_286 = 0x302DF14BL;
                    int32_t l_287 = (-1L);
                    int32_t l_288[1][1];
                    struct S1 **l_306 = &p_677->g_64;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_288[i][j] = 0x51A8EE53L;
                    }
                    if ((**l_278))
                    { /* block id: 129 */
                        return l_281;
                    }
                    else
                    { /* block id: 131 */
                        int8_t l_282 = 0x6AL;
                        int32_t l_283 = 3L;
                        int32_t l_285[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_285[i] = (-1L);
                        l_293++;
                    }
                    (*l_184) = (&p_677->g_240 != ((p_677->g_296[3] ^= p_677->g_67.f0) , &p_677->g_240));
                    (*l_187) ^= (safe_lshift_func_uint16_t_u_u(p_677->g_236.f1, (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint64_t_u((((safe_sub_func_uint8_t_u_u(((l_306 == (func_28(&p_677->g_12, (*p_677->g_100), l_307[2], p_677) , l_308)) || 0x04L), ((p_677->g_312 = (l_309++)) ^ p_677->g_42))) >= 0x36EAL) & 4294967293UL))), p_677->g_198[4])), (*p_165)))));
                }
                (*l_184) ^= (p_677->g_313 , ((&p_677->g_12 != l_314) , ((*l_181) = (safe_sub_func_uint8_t_u_u(((-7L) >= (-1L)), ((*l_318) = (p_677->g_317 , (p_677->g_123[5] <= p_164))))))));
            }
            else
            { /* block id: 143 */
                int32_t *l_331[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_331[i] = &p_677->g_129.f2;
                for (p_677->g_236.f1 = 0; (p_677->g_236.f1 <= 3); p_677->g_236.f1 += 1)
                { /* block id: 146 */
                    uint8_t l_323 = 1UL;
                    for (p_677->g_67.f3 = 0; (p_677->g_67.f3 <= 1); p_677->g_67.f3 += 1)
                    { /* block id: 149 */
                        int i;
                        l_186 = (void*)0;
                        p_164 |= (p_677->g_313 , ((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(p_677->g_158[p_677->g_67.f3], p_677->g_160.f7)), (((*l_181) = l_323) , ((((safe_sub_func_uint64_t_u_u(((l_323 || ((p_677->g_65[0][2].f5 != (safe_lshift_func_int8_t_s_u((~(*p_677->g_100)), 5))) == (((safe_mod_func_int16_t_s_s((&p_162 != &p_677->g_42), 0x78D5L)) <= p_162) <= l_323))) == p_677->g_238.f1), 0x1033A2C4CC19F7E5L)) | p_677->g_313.f3) > 0x6E57B451L) == l_330)))) && 0x23L));
                        l_247 = &p_164;
                        if (p_164)
                            continue;
                    }
                    if ((*l_247))
                        continue;
                    p_677->g_132[1] = &p_164;
                    for (l_256 = 0; (l_256 <= 3); l_256 += 1)
                    { /* block id: 160 */
                        return l_331[0];
                    }
                }
                return l_332;
            }
        }
        else
        { /* block id: 166 */
            uint32_t l_338 = 0x46895164L;
            int32_t *l_345[8] = {&p_677->g_160.f2,&p_677->g_160.f2,&p_677->g_160.f2,&p_677->g_160.f2,&p_677->g_160.f2,&p_677->g_160.f2,&p_677->g_160.f2,&p_677->g_160.f2};
            int i;
            if (p_164)
                break;
            for (p_677->g_67.f2 = 3; (p_677->g_67.f2 >= 0); p_677->g_67.f2 -= 1)
            { /* block id: 170 */
                int64_t *l_337[2][7][7] = {{{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0}},{{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0},{&p_677->g_65[0][2].f7,&p_677->g_129.f7,(void*)0,&p_677->g_129.f7,&p_677->g_65[0][2].f7,&p_677->g_65[0][2].f7,&p_677->g_313.f0}}};
                uint16_t *l_339 = &p_677->g_200[2][2];
                int32_t l_340 = 0x7CC60565L;
                int16_t l_347 = 0x2B68L;
                int32_t l_349 = 0x6E31AED6L;
                int32_t l_351[5] = {0x07346E07L,0x07346E07L,0x07346E07L,0x07346E07L,0x07346E07L};
                int32_t l_355 = (-9L);
                uint32_t l_366 = 1UL;
                int i, j, k;
                for (p_677->g_160.f3 = 3; (p_677->g_160.f3 >= 0); p_677->g_160.f3 -= 1)
                { /* block id: 173 */
                    if (p_164)
                        break;
                }
                if (((safe_mul_func_int16_t_s_s((((safe_sub_func_int64_t_s_s(p_164, (l_338 = (&p_162 != (void*)0)))) , l_339) != ((l_340 , (((((p_677->g_296[4] = ((65535UL & (p_677->g_68.f0 , (p_677->g_341 , (p_677->g_342 , 0x40F3L)))) == p_677->g_67.f2)) < p_677->g_312) & 4294967292UL) | 0xFC40L) >= p_162)) , (void*)0)), 0x24F9L)) & 0x7C0D4756L))
                { /* block id: 178 */
                    int16_t l_346[1][7] = {{0x7760L,0x0827L,0x7760L,0x7760L,0x0827L,0x7760L,0x7760L}};
                    int32_t l_348 = 0x1F0D7AD8L;
                    int32_t l_350 = 0x6F850D78L;
                    int32_t l_352 = 0x72B98B58L;
                    int32_t l_353 = 0x79E0E07DL;
                    int32_t l_354 = (-4L);
                    int32_t l_356 = 0L;
                    int32_t l_357 = 0L;
                    int32_t l_358 = 0x1C799590L;
                    int32_t l_359 = 0x022C5B31L;
                    int32_t l_363 = 0x7D8F6D79L;
                    int32_t l_364 = (-1L);
                    int32_t l_365 = 0x1ED3C136L;
                    int i, j;
                    p_677->g_132[0] = (void*)0;
                    for (l_340 = 0; (l_340 <= 3); l_340 += 1)
                    { /* block id: 182 */
                        struct S2 *l_344 = &p_677->g_343;
                        p_677->g_132[0] = p_677->g_132[0];
                        (*l_179) = (p_162 ^ p_164);
                        (*l_344) = p_677->g_343;
                    }
                    for (p_677->g_160.f4 = 3; (p_677->g_160.f4 >= 0); p_677->g_160.f4 -= 1)
                    { /* block id: 189 */
                        int i, j;
                        l_345[7] = (void*)0;
                        (*l_248) ^= l_176[(p_677->g_67.f2 + 1)];
                    }
                    --l_366;
                }
                else
                { /* block id: 194 */
                    for (l_254 = 3; (l_254 >= 0); l_254 -= 1)
                    { /* block id: 197 */
                        int32_t *l_369[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_369[i] = &l_351[1];
                        return l_370[0];
                    }
                }
            }
        }
        for (p_677->g_67.f2 = 3; (p_677->g_67.f2 >= 0); p_677->g_67.f2 -= 1)
        { /* block id: 205 */
            uint64_t *l_381 = &p_677->g_59;
            int32_t *l_382 = &p_677->g_160.f2;
            int32_t l_383 = 0x0400148EL;
            int32_t l_384 = (-1L);
            int32_t l_386 = 0L;
            int32_t l_387 = 0x7531B70FL;
            int32_t l_393 = (-1L);
            union U4 *l_422[8][2];
            union U4 *l_426[5][6] = {{&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423},{&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423},{&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423},{&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423},{&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423,&p_677->g_423}};
            uint32_t *l_441 = &p_677->g_313.f1.f1;
            int64_t l_442 = 0x2C6BFD13F9EAEFCFL;
            int64_t *l_443 = &p_677->g_343.f0;
            int64_t *l_444 = (void*)0;
            int64_t *l_445 = &p_677->g_313.f0;
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 2; j++)
                    l_422[i][j] = &p_677->g_423;
            }
            for (p_677->g_160.f7 = 0; (p_677->g_160.f7 <= 3); p_677->g_160.f7 += 1)
            { /* block id: 208 */
                int64_t l_375 = 2L;
                int32_t l_399 = 0L;
                struct S2 *l_415[10][5] = {{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313},{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313},{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313},{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313},{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313},{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313},{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313},{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313},{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313},{&p_677->g_343,&p_677->g_343,&p_677->g_343,&p_677->g_313,&p_677->g_313}};
                struct S2 *l_417 = &p_677->g_343;
                struct S2 **l_420 = &l_376[1];
                int i, j;
                (1 + 1);
            }
            (*l_382) = (18446744073709551615UL >= (((*l_445) = (((*l_443) = (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((l_435 = p_677->g_432[0]) == l_436[0][6]), (safe_div_func_int32_t_s_s(((**p_677->g_424) , ((*p_163) && (*l_332))), ((safe_mod_func_int32_t_s_s((p_164 = ((l_441 == ((p_677->g_65[0][2].f3 != (0x70A95E85L < l_442)) , (void*)0)) && 18446744073709551607UL)), p_162)) ^ p_677->g_343.f3))))) < p_162), p_677->g_67.f5))) ^ 0x5136E3CD9EB86124L)) & 0UL));
            --l_447[2][0];
        }
    }
    (*l_248) |= (safe_lshift_func_uint8_t_u_u((*p_163), 1));
    (*l_172) ^= 0x7F885AEBL;
    return l_453;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S7 c_678;
    struct S7* p_677 = &c_678;
    struct S7 c_679 = {
        (-1L), // p_677->g_12
        0x1AL, // p_677->g_38
        0x2DC1L, // p_677->g_42
        18446744073709551615UL, // p_677->g_59
        {{{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3F4BL,{0x71E529FE0D49B816L,0UL,0x26F9336AL,0x2794C0DA39397282L},0L,0x56630802L,7L,0x61E780F4AA1FF75AL,0x66L,0L,5L},{0x5662L,{0x71A9F139888327BCL,0UL,0x1F15F1D3L,7UL},1L,0x5039A247L,0x1A13L,0L,-3L,0L,0x6DE1F29AL}},{{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3F4BL,{0x71E529FE0D49B816L,0UL,0x26F9336AL,0x2794C0DA39397282L},0L,0x56630802L,7L,0x61E780F4AA1FF75AL,0x66L,0L,5L},{0x5662L,{0x71A9F139888327BCL,0UL,0x1F15F1D3L,7UL},1L,0x5039A247L,0x1A13L,0L,-3L,0L,0x6DE1F29AL}},{{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3F4BL,{0x71E529FE0D49B816L,0UL,0x26F9336AL,0x2794C0DA39397282L},0L,0x56630802L,7L,0x61E780F4AA1FF75AL,0x66L,0L,5L},{0x5662L,{0x71A9F139888327BCL,0UL,0x1F15F1D3L,7UL},1L,0x5039A247L,0x1A13L,0L,-3L,0L,0x6DE1F29AL}},{{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3F4BL,{0x71E529FE0D49B816L,0UL,0x26F9336AL,0x2794C0DA39397282L},0L,0x56630802L,7L,0x61E780F4AA1FF75AL,0x66L,0L,5L},{0x5662L,{0x71A9F139888327BCL,0UL,0x1F15F1D3L,7UL},1L,0x5039A247L,0x1A13L,0L,-3L,0L,0x6DE1F29AL}},{{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3F4BL,{0x71E529FE0D49B816L,0UL,0x26F9336AL,0x2794C0DA39397282L},0L,0x56630802L,7L,0x61E780F4AA1FF75AL,0x66L,0L,5L},{0x5662L,{0x71A9F139888327BCL,0UL,0x1F15F1D3L,7UL},1L,0x5039A247L,0x1A13L,0L,-3L,0L,0x6DE1F29AL}},{{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3F4BL,{0x71E529FE0D49B816L,0UL,0x26F9336AL,0x2794C0DA39397282L},0L,0x56630802L,7L,0x61E780F4AA1FF75AL,0x66L,0L,5L},{0x5662L,{0x71A9F139888327BCL,0UL,0x1F15F1D3L,7UL},1L,0x5039A247L,0x1A13L,0L,-3L,0L,0x6DE1F29AL}},{{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3BB0L,{-1L,0x30E3E679L,0x8A6F1982L,0x2C377822E8431F48L},-3L,3L,-1L,0x3F8205C77F51BCBDL,0x3FL,0x4D8B2F8DC5A24BAAL,0x5047EB93L},{0x3F4BL,{0x71E529FE0D49B816L,0UL,0x26F9336AL,0x2794C0DA39397282L},0L,0x56630802L,7L,0x61E780F4AA1FF75AL,0x66L,0L,5L},{0x5662L,{0x71A9F139888327BCL,0UL,0x1F15F1D3L,7UL},1L,0x5039A247L,0x1A13L,0L,-3L,0L,0x6DE1F29AL}}}, // p_677->g_65
        &p_677->g_65[0][2], // p_677->g_64
        {0x0269L,{0x0F49FF72C97804E3L,8UL,4UL,18446744073709551615UL},0x31E6C26EL,0x4EF7B2E3L,-1L,0L,-4L,-1L,-1L}, // p_677->g_67
        {0x9E982BA9L}, // p_677->g_68
        0xD10AL, // p_677->g_95
        &p_677->g_12, // p_677->g_100
        0x0B7E2CB6L, // p_677->g_105
        {{{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L}},{{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L},{0x551151F3L,0UL,0x91520A11L,0xA9602BA4L}}}, // p_677->g_111
        {255UL,255UL,255UL,255UL,255UL,255UL}, // p_677->g_123
        {-6L,{0x1BE5D540DA225B38L,0x93D40E68L,4294967295UL,0UL},0L,0x2E214262L,-8L,0x4D07D77FA01DA8FAL,0x03L,0x5FAB9AC39EC935B3L,7L}, // p_677->g_129
        {&p_677->g_68.f3.f2,&p_677->g_68.f3.f2}, // p_677->g_132
        {7L,7L}, // p_677->g_158
        &p_677->g_158[0], // p_677->g_157
        {0x4E2FL,{0x47D9953DBD2A67ADL,0x558D5EF9L,0xF0498DF5L,0UL},0x37C15CB5L,0x559EA4EBL,-1L,0x503AD83EAFCF35AFL,-8L,1L,0x6CC8533BL}, // p_677->g_160
        {0}, // p_677->g_195
        {3UL,0UL,3UL,3UL,0UL,3UL,3UL,0UL,3UL,3UL}, // p_677->g_198
        {{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL}}, // p_677->g_200
        0x2181L, // p_677->g_208
        {0}, // p_677->g_214
        {2L}, // p_677->g_215
        {0x1C13020056DA063DL,0xE59D68F9L,0x780D751CL,0x1A5533B808DDD281L}, // p_677->g_216
        &p_677->g_129.f1, // p_677->g_217
        {0x646D64D6B0D7B6BBL,0x261D153DL,4294967293UL,18446744073709551607UL}, // p_677->g_236
        {1L,1UL,0xE82DC942L,2UL}, // p_677->g_238
        0x729D3353L, // p_677->g_240
        (void*)0, // p_677->g_245
        {&p_677->g_245,&p_677->g_245,&p_677->g_245,&p_677->g_245,&p_677->g_245,&p_677->g_245,&p_677->g_245}, // p_677->g_244
        &p_677->g_244[4], // p_677->g_243
        1UL, // p_677->g_259
        {247UL,0x0EL,247UL,247UL,0x0EL,247UL,247UL}, // p_677->g_296
        4294967288UL, // p_677->g_312
        {0x1560BACAB8D0ABEBL,{0x401A2F0B874C0757L,4294967286UL,4294967287UL,0x11E865BF5579553EL},0xE994EA03C6BA643EL,4294967294UL,{1L,{0x5A259A64EC02D3E0L,6UL,1UL,1UL},7L,0x44DA55C9L,5L,0x7E1C27A58C53145DL,5L,-1L,-1L},0L,1L}, // p_677->g_313
        {0}, // p_677->g_317
        {0}, // p_677->g_341
        {0}, // p_677->g_342
        {0x7B103BD23FD2B08FL,{-7L,0x49496464L,4294967287UL,0x6F90E30558465FC1L},1UL,0xCF1D6706L,{-7L,{0x178CBC67C924B33EL,6UL,0x902ACB4CL,18446744073709551615UL},1L,0x11A4CB6CL,0x213CL,0x6FCFFC4C54A92A7EL,0x7BL,-3L,0x525CDDEEL},1L,0x323FA874L}, // p_677->g_343
        {{0x3FE82CEEL},{0x3FE82CEEL},{0x3FE82CEEL},{0x3FE82CEEL},{0x3FE82CEEL},{0x3FE82CEEL},{0x3FE82CEEL},{0x3FE82CEEL},{0x3FE82CEEL},{0x3FE82CEEL}}, // p_677->g_380
        {0x4274146E464845EFL,0x2C1397C6L,7UL,0UL}, // p_677->g_396
        {1L}, // p_677->g_418
        {0x30A6FA0A3E05B804L,{0x079EF5F09DE650A6L,0x669EB62AL,0x286D62B1L,6UL},1UL,1UL,{0x7C89L,{1L,0xD5BD1ECDL,0xE2126235L,0xA4F63DE72054E093L},0x2527ED7BL,0L,1L,1L,0x50L,1L,0x03EF667FL},0x337EEC6DL,0x64C9B044L}, // p_677->g_419
        {0}, // p_677->g_423
        &p_677->g_423, // p_677->g_425
        &p_677->g_425, // p_677->g_424
        &p_677->g_425, // p_677->g_427
        {{(void*)0,&p_677->g_313},{(void*)0,&p_677->g_313},{(void*)0,&p_677->g_313},{(void*)0,&p_677->g_313},{(void*)0,&p_677->g_313},{(void*)0,&p_677->g_313},{(void*)0,&p_677->g_313},{(void*)0,&p_677->g_313}}, // p_677->g_434
        &p_677->g_434[4][1], // p_677->g_433
        {&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433,&p_677->g_433}, // p_677->g_432
        {0}, // p_677->g_478
        {{{0x2FE0L,0x2FE0L,0x697FL,0x34BBL,0x71F5L,0x34BBL,0x697FL,0x2FE0L},{0x2FE0L,0x2FE0L,0x697FL,0x34BBL,0x71F5L,0x34BBL,0x697FL,0x2FE0L}},{{0x2FE0L,0x2FE0L,0x697FL,0x34BBL,0x71F5L,0x34BBL,0x697FL,0x2FE0L},{0x2FE0L,0x2FE0L,0x697FL,0x34BBL,0x71F5L,0x34BBL,0x697FL,0x2FE0L}},{{0x2FE0L,0x2FE0L,0x697FL,0x34BBL,0x71F5L,0x34BBL,0x697FL,0x2FE0L},{0x2FE0L,0x2FE0L,0x697FL,0x34BBL,0x71F5L,0x34BBL,0x697FL,0x2FE0L}}}, // p_677->g_517
        (void*)0, // p_677->g_522
        (void*)0, // p_677->g_527
        &p_677->g_200[3][3], // p_677->g_530
        &p_677->g_530, // p_677->g_529
        {{0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL,0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL,0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL},{0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL,0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL,0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL},{0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL,0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL,0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL},{0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL,0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL,0x1B9E077E0FE1BDFFL,0x3E226A6977C9DAE0L,0x1B9E077E0FE1BDFFL}}, // p_677->g_540
        {{0},{0},{0},{0}}, // p_677->g_562
        {{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L},{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L},{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L},{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L},{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L},{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L},{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L},{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L},{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L},{0x22820589C58C0733L,0x2A5034EDL,4294967295UL,0xA5E1B3EFFAA903B8L}}, // p_677->g_577
        {0x49BB556CAA9AF7D5L,0xCB075697L,9UL,1UL}, // p_677->g_578
        {&p_677->g_132[0],&p_677->g_132[0],&p_677->g_132[0],&p_677->g_132[0]}, // p_677->g_580
        (-4L), // p_677->g_582
        {0x7458L,{0x6ED5CF17D96A5F8FL,1UL,0xDA62B40CL,1UL},0x4246C044L,0x3643F63BL,0L,0x1218E7E661AE7A4EL,0x0EL,0x6259D3FF89D67A09L,0x58F40790L}, // p_677->g_604
        0x61A8AE17L, // p_677->g_608
        0xDDA11A10L, // p_677->g_632
        {-5L,{1L,0xF2662DA1L,2UL,0x139EB7AE3066CAE5L},0x96921993ECE010F8L,4294967290UL,{0x1B5DL,{1L,4294967295UL,0x43BF8AA1L,0x89302862B560FEB5L},0L,0x1E1F4E25L,-1L,-1L,1L,-4L,0x0CED44EDL},1L,-2L}, // p_677->g_636
        {4294967295UL}, // p_677->g_653
        &p_677->g_215, // p_677->g_676
    };
    c_678 = c_679;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_677);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_677->g_12, "p_677->g_12", print_hash_value);
    transparent_crc(p_677->g_38, "p_677->g_38", print_hash_value);
    transparent_crc(p_677->g_42, "p_677->g_42", print_hash_value);
    transparent_crc(p_677->g_59, "p_677->g_59", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_677->g_65[i][j].f0, "p_677->g_65[i][j].f0", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f1.f0, "p_677->g_65[i][j].f1.f0", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f1.f1, "p_677->g_65[i][j].f1.f1", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f1.f2, "p_677->g_65[i][j].f1.f2", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f1.f3, "p_677->g_65[i][j].f1.f3", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f2, "p_677->g_65[i][j].f2", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f3, "p_677->g_65[i][j].f3", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f4, "p_677->g_65[i][j].f4", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f5, "p_677->g_65[i][j].f5", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f6, "p_677->g_65[i][j].f6", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f7, "p_677->g_65[i][j].f7", print_hash_value);
            transparent_crc(p_677->g_65[i][j].f8, "p_677->g_65[i][j].f8", print_hash_value);

        }
    }
    transparent_crc(p_677->g_67.f0, "p_677->g_67.f0", print_hash_value);
    transparent_crc(p_677->g_67.f1.f0, "p_677->g_67.f1.f0", print_hash_value);
    transparent_crc(p_677->g_67.f1.f1, "p_677->g_67.f1.f1", print_hash_value);
    transparent_crc(p_677->g_67.f1.f2, "p_677->g_67.f1.f2", print_hash_value);
    transparent_crc(p_677->g_67.f1.f3, "p_677->g_67.f1.f3", print_hash_value);
    transparent_crc(p_677->g_67.f2, "p_677->g_67.f2", print_hash_value);
    transparent_crc(p_677->g_67.f3, "p_677->g_67.f3", print_hash_value);
    transparent_crc(p_677->g_67.f4, "p_677->g_67.f4", print_hash_value);
    transparent_crc(p_677->g_67.f5, "p_677->g_67.f5", print_hash_value);
    transparent_crc(p_677->g_67.f6, "p_677->g_67.f6", print_hash_value);
    transparent_crc(p_677->g_67.f7, "p_677->g_67.f7", print_hash_value);
    transparent_crc(p_677->g_67.f8, "p_677->g_67.f8", print_hash_value);
    transparent_crc(p_677->g_68.f0, "p_677->g_68.f0", print_hash_value);
    transparent_crc(p_677->g_95, "p_677->g_95", print_hash_value);
    transparent_crc(p_677->g_105, "p_677->g_105", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_677->g_111[i][j][k], "p_677->g_111[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_677->g_123[i], "p_677->g_123[i]", print_hash_value);

    }
    transparent_crc(p_677->g_129.f0, "p_677->g_129.f0", print_hash_value);
    transparent_crc(p_677->g_129.f1.f0, "p_677->g_129.f1.f0", print_hash_value);
    transparent_crc(p_677->g_129.f1.f1, "p_677->g_129.f1.f1", print_hash_value);
    transparent_crc(p_677->g_129.f1.f2, "p_677->g_129.f1.f2", print_hash_value);
    transparent_crc(p_677->g_129.f1.f3, "p_677->g_129.f1.f3", print_hash_value);
    transparent_crc(p_677->g_129.f2, "p_677->g_129.f2", print_hash_value);
    transparent_crc(p_677->g_129.f3, "p_677->g_129.f3", print_hash_value);
    transparent_crc(p_677->g_129.f4, "p_677->g_129.f4", print_hash_value);
    transparent_crc(p_677->g_129.f5, "p_677->g_129.f5", print_hash_value);
    transparent_crc(p_677->g_129.f6, "p_677->g_129.f6", print_hash_value);
    transparent_crc(p_677->g_129.f7, "p_677->g_129.f7", print_hash_value);
    transparent_crc(p_677->g_129.f8, "p_677->g_129.f8", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_677->g_158[i], "p_677->g_158[i]", print_hash_value);

    }
    transparent_crc(p_677->g_160.f0, "p_677->g_160.f0", print_hash_value);
    transparent_crc(p_677->g_160.f1.f0, "p_677->g_160.f1.f0", print_hash_value);
    transparent_crc(p_677->g_160.f1.f1, "p_677->g_160.f1.f1", print_hash_value);
    transparent_crc(p_677->g_160.f1.f2, "p_677->g_160.f1.f2", print_hash_value);
    transparent_crc(p_677->g_160.f1.f3, "p_677->g_160.f1.f3", print_hash_value);
    transparent_crc(p_677->g_160.f2, "p_677->g_160.f2", print_hash_value);
    transparent_crc(p_677->g_160.f3, "p_677->g_160.f3", print_hash_value);
    transparent_crc(p_677->g_160.f4, "p_677->g_160.f4", print_hash_value);
    transparent_crc(p_677->g_160.f5, "p_677->g_160.f5", print_hash_value);
    transparent_crc(p_677->g_160.f6, "p_677->g_160.f6", print_hash_value);
    transparent_crc(p_677->g_160.f7, "p_677->g_160.f7", print_hash_value);
    transparent_crc(p_677->g_160.f8, "p_677->g_160.f8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_677->g_198[i], "p_677->g_198[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_677->g_200[i][j], "p_677->g_200[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_677->g_208, "p_677->g_208", print_hash_value);
    transparent_crc(p_677->g_215.f0, "p_677->g_215.f0", print_hash_value);
    transparent_crc(p_677->g_216.f0, "p_677->g_216.f0", print_hash_value);
    transparent_crc(p_677->g_216.f1, "p_677->g_216.f1", print_hash_value);
    transparent_crc(p_677->g_216.f2, "p_677->g_216.f2", print_hash_value);
    transparent_crc(p_677->g_216.f3, "p_677->g_216.f3", print_hash_value);
    transparent_crc(p_677->g_236.f0, "p_677->g_236.f0", print_hash_value);
    transparent_crc(p_677->g_236.f1, "p_677->g_236.f1", print_hash_value);
    transparent_crc(p_677->g_236.f2, "p_677->g_236.f2", print_hash_value);
    transparent_crc(p_677->g_236.f3, "p_677->g_236.f3", print_hash_value);
    transparent_crc(p_677->g_238.f0, "p_677->g_238.f0", print_hash_value);
    transparent_crc(p_677->g_238.f1, "p_677->g_238.f1", print_hash_value);
    transparent_crc(p_677->g_238.f2, "p_677->g_238.f2", print_hash_value);
    transparent_crc(p_677->g_238.f3, "p_677->g_238.f3", print_hash_value);
    transparent_crc(p_677->g_240, "p_677->g_240", print_hash_value);
    transparent_crc(p_677->g_259, "p_677->g_259", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_677->g_296[i], "p_677->g_296[i]", print_hash_value);

    }
    transparent_crc(p_677->g_312, "p_677->g_312", print_hash_value);
    transparent_crc(p_677->g_313.f0, "p_677->g_313.f0", print_hash_value);
    transparent_crc(p_677->g_313.f1.f0, "p_677->g_313.f1.f0", print_hash_value);
    transparent_crc(p_677->g_313.f1.f1, "p_677->g_313.f1.f1", print_hash_value);
    transparent_crc(p_677->g_313.f1.f2, "p_677->g_313.f1.f2", print_hash_value);
    transparent_crc(p_677->g_313.f1.f3, "p_677->g_313.f1.f3", print_hash_value);
    transparent_crc(p_677->g_313.f2, "p_677->g_313.f2", print_hash_value);
    transparent_crc(p_677->g_313.f3, "p_677->g_313.f3", print_hash_value);
    transparent_crc(p_677->g_313.f4.f0, "p_677->g_313.f4.f0", print_hash_value);
    transparent_crc(p_677->g_313.f4.f1.f0, "p_677->g_313.f4.f1.f0", print_hash_value);
    transparent_crc(p_677->g_313.f4.f1.f1, "p_677->g_313.f4.f1.f1", print_hash_value);
    transparent_crc(p_677->g_313.f4.f1.f2, "p_677->g_313.f4.f1.f2", print_hash_value);
    transparent_crc(p_677->g_313.f4.f1.f3, "p_677->g_313.f4.f1.f3", print_hash_value);
    transparent_crc(p_677->g_313.f4.f2, "p_677->g_313.f4.f2", print_hash_value);
    transparent_crc(p_677->g_313.f4.f3, "p_677->g_313.f4.f3", print_hash_value);
    transparent_crc(p_677->g_313.f4.f4, "p_677->g_313.f4.f4", print_hash_value);
    transparent_crc(p_677->g_313.f4.f5, "p_677->g_313.f4.f5", print_hash_value);
    transparent_crc(p_677->g_313.f4.f6, "p_677->g_313.f4.f6", print_hash_value);
    transparent_crc(p_677->g_313.f4.f7, "p_677->g_313.f4.f7", print_hash_value);
    transparent_crc(p_677->g_313.f4.f8, "p_677->g_313.f4.f8", print_hash_value);
    transparent_crc(p_677->g_313.f5, "p_677->g_313.f5", print_hash_value);
    transparent_crc(p_677->g_313.f6, "p_677->g_313.f6", print_hash_value);
    transparent_crc(p_677->g_343.f0, "p_677->g_343.f0", print_hash_value);
    transparent_crc(p_677->g_343.f1.f0, "p_677->g_343.f1.f0", print_hash_value);
    transparent_crc(p_677->g_343.f1.f1, "p_677->g_343.f1.f1", print_hash_value);
    transparent_crc(p_677->g_343.f1.f2, "p_677->g_343.f1.f2", print_hash_value);
    transparent_crc(p_677->g_343.f1.f3, "p_677->g_343.f1.f3", print_hash_value);
    transparent_crc(p_677->g_343.f2, "p_677->g_343.f2", print_hash_value);
    transparent_crc(p_677->g_343.f3, "p_677->g_343.f3", print_hash_value);
    transparent_crc(p_677->g_343.f4.f0, "p_677->g_343.f4.f0", print_hash_value);
    transparent_crc(p_677->g_343.f4.f1.f0, "p_677->g_343.f4.f1.f0", print_hash_value);
    transparent_crc(p_677->g_343.f4.f1.f1, "p_677->g_343.f4.f1.f1", print_hash_value);
    transparent_crc(p_677->g_343.f4.f1.f2, "p_677->g_343.f4.f1.f2", print_hash_value);
    transparent_crc(p_677->g_343.f4.f1.f3, "p_677->g_343.f4.f1.f3", print_hash_value);
    transparent_crc(p_677->g_343.f4.f2, "p_677->g_343.f4.f2", print_hash_value);
    transparent_crc(p_677->g_343.f4.f3, "p_677->g_343.f4.f3", print_hash_value);
    transparent_crc(p_677->g_343.f4.f4, "p_677->g_343.f4.f4", print_hash_value);
    transparent_crc(p_677->g_343.f4.f5, "p_677->g_343.f4.f5", print_hash_value);
    transparent_crc(p_677->g_343.f4.f6, "p_677->g_343.f4.f6", print_hash_value);
    transparent_crc(p_677->g_343.f4.f7, "p_677->g_343.f4.f7", print_hash_value);
    transparent_crc(p_677->g_343.f4.f8, "p_677->g_343.f4.f8", print_hash_value);
    transparent_crc(p_677->g_343.f5, "p_677->g_343.f5", print_hash_value);
    transparent_crc(p_677->g_343.f6, "p_677->g_343.f6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_677->g_380[i].f0, "p_677->g_380[i].f0", print_hash_value);

    }
    transparent_crc(p_677->g_396.f0, "p_677->g_396.f0", print_hash_value);
    transparent_crc(p_677->g_396.f1, "p_677->g_396.f1", print_hash_value);
    transparent_crc(p_677->g_396.f2, "p_677->g_396.f2", print_hash_value);
    transparent_crc(p_677->g_396.f3, "p_677->g_396.f3", print_hash_value);
    transparent_crc(p_677->g_418.f0, "p_677->g_418.f0", print_hash_value);
    transparent_crc(p_677->g_419.f0, "p_677->g_419.f0", print_hash_value);
    transparent_crc(p_677->g_419.f1.f0, "p_677->g_419.f1.f0", print_hash_value);
    transparent_crc(p_677->g_419.f1.f1, "p_677->g_419.f1.f1", print_hash_value);
    transparent_crc(p_677->g_419.f1.f2, "p_677->g_419.f1.f2", print_hash_value);
    transparent_crc(p_677->g_419.f1.f3, "p_677->g_419.f1.f3", print_hash_value);
    transparent_crc(p_677->g_419.f2, "p_677->g_419.f2", print_hash_value);
    transparent_crc(p_677->g_419.f3, "p_677->g_419.f3", print_hash_value);
    transparent_crc(p_677->g_419.f4.f0, "p_677->g_419.f4.f0", print_hash_value);
    transparent_crc(p_677->g_419.f4.f1.f0, "p_677->g_419.f4.f1.f0", print_hash_value);
    transparent_crc(p_677->g_419.f4.f1.f1, "p_677->g_419.f4.f1.f1", print_hash_value);
    transparent_crc(p_677->g_419.f4.f1.f2, "p_677->g_419.f4.f1.f2", print_hash_value);
    transparent_crc(p_677->g_419.f4.f1.f3, "p_677->g_419.f4.f1.f3", print_hash_value);
    transparent_crc(p_677->g_419.f4.f2, "p_677->g_419.f4.f2", print_hash_value);
    transparent_crc(p_677->g_419.f4.f3, "p_677->g_419.f4.f3", print_hash_value);
    transparent_crc(p_677->g_419.f4.f4, "p_677->g_419.f4.f4", print_hash_value);
    transparent_crc(p_677->g_419.f4.f5, "p_677->g_419.f4.f5", print_hash_value);
    transparent_crc(p_677->g_419.f4.f6, "p_677->g_419.f4.f6", print_hash_value);
    transparent_crc(p_677->g_419.f4.f7, "p_677->g_419.f4.f7", print_hash_value);
    transparent_crc(p_677->g_419.f4.f8, "p_677->g_419.f4.f8", print_hash_value);
    transparent_crc(p_677->g_419.f5, "p_677->g_419.f5", print_hash_value);
    transparent_crc(p_677->g_419.f6, "p_677->g_419.f6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_677->g_517[i][j][k], "p_677->g_517[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_677->g_540[i][j], "p_677->g_540[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_677->g_577[i].f0, "p_677->g_577[i].f0", print_hash_value);
        transparent_crc(p_677->g_577[i].f1, "p_677->g_577[i].f1", print_hash_value);
        transparent_crc(p_677->g_577[i].f2, "p_677->g_577[i].f2", print_hash_value);
        transparent_crc(p_677->g_577[i].f3, "p_677->g_577[i].f3", print_hash_value);

    }
    transparent_crc(p_677->g_578.f0, "p_677->g_578.f0", print_hash_value);
    transparent_crc(p_677->g_578.f1, "p_677->g_578.f1", print_hash_value);
    transparent_crc(p_677->g_578.f2, "p_677->g_578.f2", print_hash_value);
    transparent_crc(p_677->g_578.f3, "p_677->g_578.f3", print_hash_value);
    transparent_crc(p_677->g_582, "p_677->g_582", print_hash_value);
    transparent_crc(p_677->g_604.f0, "p_677->g_604.f0", print_hash_value);
    transparent_crc(p_677->g_604.f1.f0, "p_677->g_604.f1.f0", print_hash_value);
    transparent_crc(p_677->g_604.f1.f1, "p_677->g_604.f1.f1", print_hash_value);
    transparent_crc(p_677->g_604.f1.f2, "p_677->g_604.f1.f2", print_hash_value);
    transparent_crc(p_677->g_604.f1.f3, "p_677->g_604.f1.f3", print_hash_value);
    transparent_crc(p_677->g_604.f2, "p_677->g_604.f2", print_hash_value);
    transparent_crc(p_677->g_604.f3, "p_677->g_604.f3", print_hash_value);
    transparent_crc(p_677->g_604.f4, "p_677->g_604.f4", print_hash_value);
    transparent_crc(p_677->g_604.f5, "p_677->g_604.f5", print_hash_value);
    transparent_crc(p_677->g_604.f6, "p_677->g_604.f6", print_hash_value);
    transparent_crc(p_677->g_604.f7, "p_677->g_604.f7", print_hash_value);
    transparent_crc(p_677->g_604.f8, "p_677->g_604.f8", print_hash_value);
    transparent_crc(p_677->g_608, "p_677->g_608", print_hash_value);
    transparent_crc(p_677->g_632, "p_677->g_632", print_hash_value);
    transparent_crc(p_677->g_636.f0, "p_677->g_636.f0", print_hash_value);
    transparent_crc(p_677->g_636.f1.f0, "p_677->g_636.f1.f0", print_hash_value);
    transparent_crc(p_677->g_636.f1.f1, "p_677->g_636.f1.f1", print_hash_value);
    transparent_crc(p_677->g_636.f1.f2, "p_677->g_636.f1.f2", print_hash_value);
    transparent_crc(p_677->g_636.f1.f3, "p_677->g_636.f1.f3", print_hash_value);
    transparent_crc(p_677->g_636.f2, "p_677->g_636.f2", print_hash_value);
    transparent_crc(p_677->g_636.f3, "p_677->g_636.f3", print_hash_value);
    transparent_crc(p_677->g_636.f4.f0, "p_677->g_636.f4.f0", print_hash_value);
    transparent_crc(p_677->g_636.f4.f1.f0, "p_677->g_636.f4.f1.f0", print_hash_value);
    transparent_crc(p_677->g_636.f4.f1.f1, "p_677->g_636.f4.f1.f1", print_hash_value);
    transparent_crc(p_677->g_636.f4.f1.f2, "p_677->g_636.f4.f1.f2", print_hash_value);
    transparent_crc(p_677->g_636.f4.f1.f3, "p_677->g_636.f4.f1.f3", print_hash_value);
    transparent_crc(p_677->g_636.f4.f2, "p_677->g_636.f4.f2", print_hash_value);
    transparent_crc(p_677->g_636.f4.f3, "p_677->g_636.f4.f3", print_hash_value);
    transparent_crc(p_677->g_636.f4.f4, "p_677->g_636.f4.f4", print_hash_value);
    transparent_crc(p_677->g_636.f4.f5, "p_677->g_636.f4.f5", print_hash_value);
    transparent_crc(p_677->g_636.f4.f6, "p_677->g_636.f4.f6", print_hash_value);
    transparent_crc(p_677->g_636.f4.f7, "p_677->g_636.f4.f7", print_hash_value);
    transparent_crc(p_677->g_636.f4.f8, "p_677->g_636.f4.f8", print_hash_value);
    transparent_crc(p_677->g_636.f5, "p_677->g_636.f5", print_hash_value);
    transparent_crc(p_677->g_636.f6, "p_677->g_636.f6", print_hash_value);
    transparent_crc(p_677->g_653.f0, "p_677->g_653.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
