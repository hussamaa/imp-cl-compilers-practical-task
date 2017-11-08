// -g 84,97,1 -l 1,1,1
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


// Seed: 3721363439

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
};

struct S1 {
   int32_t  f0;
   int32_t  f1;
   uint8_t  f2;
   volatile struct S0  f3;
};

union U2 {
   uint64_t  f0;
};

union U3 {
   volatile uint32_t  f0;
};

struct S4 {
    int32_t g_2;
    int64_t g_54;
    uint8_t g_88;
    uint8_t g_90;
    uint8_t g_96;
    int8_t g_114;
    int16_t g_123;
    int16_t g_125[9][9];
    uint16_t g_128[1][7][5];
    uint8_t g_130;
    struct S1 g_133;
    volatile struct S0 * volatile g_135[9];
    volatile struct S0 * volatile g_136[8];
    volatile struct S1 g_140[3];
    volatile struct S1 g_141;
    struct S1 g_142;
    int32_t *g_148;
    int32_t ** volatile g_147;
    volatile union U3 g_149;
    uint32_t g_169;
    int32_t g_181;
    struct S1 g_190;
    union U3 g_204;
    union U3 *g_203;
    union U3 ** volatile g_202;
    int32_t * volatile g_205;
    int32_t **g_212;
    union U3 g_217;
    union U3 g_218;
    uint32_t g_223;
    uint8_t g_229;
    volatile union U3 g_274;
    uint64_t g_277;
    volatile struct S1 g_294;
    int8_t g_311;
    uint32_t g_317;
    int16_t g_320;
    int32_t ** volatile g_326[10];
    int32_t g_358;
    int32_t * volatile g_357;
    struct S1 *g_398;
    uint32_t **g_421;
    uint32_t *** volatile g_420;
    struct S0 g_449;
    int32_t * volatile g_455;
    int32_t * volatile g_457;
    volatile struct S1 g_458;
    volatile union U3 g_480[4][7];
    union U2 g_606;
    volatile struct S1 g_621;
    volatile struct S1 g_623[2][10];
    uint16_t g_661;
    union U3 g_692;
    int16_t g_700;
    uint64_t g_710;
    int32_t ** volatile g_715;
    uint8_t *g_751;
    int32_t * volatile g_761;
    int16_t g_779;
    union U3 g_785[10][1];
    volatile uint32_t g_798[3];
    volatile uint32_t *g_797;
    volatile uint32_t * volatile *g_796;
    volatile union U2 g_802[3];
    volatile union U2 *g_801;
    volatile union U2 **g_800[7];
    union U2 *g_804;
    union U2 **g_803;
    int64_t *g_816;
    int64_t ** volatile g_815;
    int64_t ** volatile *g_814;
    struct S1 g_843;
    uint32_t g_872;
    volatile union U3 g_903;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S4 * p_912);
int32_t  func_9(int32_t  p_10, int32_t  p_11, int32_t * p_12, uint64_t  p_13, struct S4 * p_912);
uint16_t  func_14(struct S0  p_15, int32_t * p_16, int8_t  p_17, int32_t * p_18, int32_t * p_19, struct S4 * p_912);
uint16_t  func_20(int32_t * p_21, int32_t * p_22, int32_t * p_23, int32_t * p_24, struct S4 * p_912);
union U2  func_25(uint64_t  p_26, int8_t  p_27, int8_t  p_28, int32_t * p_29, struct S4 * p_912);
int32_t * func_39(uint16_t  p_40, uint32_t  p_41, int64_t  p_42, int32_t  p_43, struct S4 * p_912);
int32_t  func_44(uint8_t  p_45, struct S4 * p_912);
struct S1  func_57(uint32_t  p_58, int32_t * p_59, int32_t  p_60, int64_t  p_61, struct S4 * p_912);
int8_t  func_75(int32_t * p_76, struct S4 * p_912);
int32_t * func_77(int64_t * p_78, struct S4 * p_912);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_912->g_2 p_912->g_147 p_912->g_148 p_912->g_133.f0 p_912->g_190.f1 p_912->g_169 p_912->g_181 p_912->g_357 p_912->g_358 p_912->g_141.f1 p_912->g_133.f1 p_912->g_203 p_912->g_204 p_912->g_128 p_912->g_90 p_912->g_142.f0 p_912->g_205 p_912->g_96 p_912->g_142.f3.f0 p_912->g_130 p_912->g_420 p_912->g_320 p_912->g_140.f3.f0 p_912->g_125 p_912->g_142.f2 p_912->g_457 p_912->g_140.f1 p_912->g_606 p_912->g_141.f2 p_912->g_54 p_912->g_621 p_912->g_317 p_912->g_140.f0 p_912->g_277 p_912->g_190.f0 p_912->g_661 p_912->g_141.f0 p_912->g_606.f0 p_912->g_142.f1 p_912->g_223 p_912->g_190.f2 p_912->g_202 p_912->g_140 p_912->g_700 p_912->g_88 p_912->g_710 p_912->g_715 p_912->g_623.f3.f0 p_912->g_229 p_912->g_123 p_912->g_751 p_912->g_149.f0 p_912->g_449.f0 p_912->g_311 p_912->g_779 p_912->g_785 p_912->g_785.f0 p_912->g_796 p_912->g_800 p_912->g_803 p_912->g_814 p_912->g_398 p_912->g_142 p_912->g_133 p_912->g_623.f0 p_912->g_872 p_912->g_623.f2 p_912->g_623.f1 p_912->g_903
 * writes: p_912->g_2 p_912->g_148 p_912->g_54 p_912->g_90 p_912->g_229 p_912->g_114 p_912->g_181 p_912->g_133.f1 p_912->g_358 p_912->g_169 p_912->g_128 p_912->g_398 p_912->g_223 p_912->g_142.f2 p_912->g_421 p_912->g_212 p_912->g_317 p_912->g_311 p_912->g_320 p_912->g_623 p_912->g_190.f0 p_912->g_125 p_912->g_130 p_912->g_140 p_912->g_700 p_912->g_135 p_912->g_88 p_912->g_710 p_912->g_606.f0 p_912->g_123 p_912->g_751 p_912->g_621.f3.f0 p_912->g_326 p_912->g_277 p_912->g_190.f2 p_912->g_661 p_912->g_96 p_912->g_872
 */
uint64_t  func_1(struct S4 * p_912)
{ /* block id: 4 */
    int32_t l_5 = 0x36544D18L;
    int32_t l_591[5] = {0x09569969L,0x09569969L,0x09569969L,0x09569969L,0x09569969L};
    struct S0 l_592 = {18446744073709551615UL};
    int32_t l_709 = (-1L);
    int64_t *l_747[10] = {&p_912->g_54,&p_912->g_54,(void*)0,&p_912->g_54,&p_912->g_54,&p_912->g_54,&p_912->g_54,(void*)0,&p_912->g_54,&p_912->g_54};
    union U2 *l_755 = &p_912->g_606;
    union U2 **l_754 = &l_755;
    int i;
    for (p_912->g_2 = (-1); (p_912->g_2 == (-19)); p_912->g_2 = safe_sub_func_int32_t_s_s(p_912->g_2, 8))
    { /* block id: 7 */
        int32_t *l_6 = &l_5;
        int32_t l_707[8];
        int64_t ***l_735 = (void*)0;
        int i;
        for (i = 0; i < 8; i++)
            l_707[i] = 1L;
        (*l_6) = l_5;
        for (l_5 = 0; (l_5 < 6); l_5 = safe_add_func_int32_t_s_s(l_5, 3))
        { /* block id: 11 */
            uint64_t l_32 = 18446744073709551608UL;
            int64_t l_593 = 0x1DFDB34D62CDD568L;
            int32_t *l_594 = &l_5;
            int32_t *l_644 = (void*)0;
            int32_t *l_645 = &p_912->g_190.f0;
            int32_t l_705 = 7L;
            int32_t l_706[7][4][9] = {{{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L}},{{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L}},{{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L}},{{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L}},{{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L}},{{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L}},{{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L},{2L,0x7198275EL,0L,0x359E3F70L,0x379B1D9AL,(-1L),1L,0L,1L}}};
            union U2 *l_713[9][4][7] = {{{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606}},{{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606}},{{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606}},{{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606}},{{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606}},{{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606}},{{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606}},{{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606}},{{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606},{&p_912->g_606,&p_912->g_606,&p_912->g_606,(void*)0,&p_912->g_606,(void*)0,&p_912->g_606}}};
            int64_t *l_738 = &l_593;
            int64_t **l_737 = &l_738;
            int64_t ***l_736 = &l_737;
            int i, j, k;
            p_912->g_700 &= func_9(((*l_645) ^= ((p_912->g_2 , (~func_14(((l_591[2] = func_20((func_25(p_912->g_2, (safe_add_func_int16_t_s_s(l_32, (safe_lshift_func_uint8_t_u_s(l_32, 3)))), (l_5 != (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(p_912->g_2, (*l_6))), 7))), func_39(((((func_44((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((&p_912->g_2 != &p_912->g_2), (*l_6))), 0)), p_912) == p_912->g_2) < 1L) == 0x22E7C650L) >= 0x46L), l_32, l_5, l_5, p_912), p_912) , (*p_912->g_147)), l_6, &p_912->g_2, &l_5, p_912)) , l_592), &l_5, l_593, l_594, l_6, p_912))) != l_5)), (*l_594), &p_912->g_2, (*l_594), p_912);
            for (p_912->g_311 = 0; p_912->g_311 < 9; p_912->g_311 += 1)
            {
                p_912->g_135[p_912->g_311] = &p_912->g_141.f3;
            }
            for (p_912->g_88 = (-24); (p_912->g_88 > 19); p_912->g_88 = safe_add_func_uint8_t_u_u(p_912->g_88, 1))
            { /* block id: 387 */
                int32_t *l_703 = &p_912->g_181;
                int32_t *l_704[9][6][4] = {{{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0}},{{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0}},{{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0}},{{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0}},{{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0}},{{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0}},{{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0}},{{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0}},{{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0},{&p_912->g_358,(void*)0,&l_591[2],(void*)0}}};
                int64_t l_708 = 0x6D8168DAC04D5F45L;
                union U2 **l_714 = &l_713[6][2][6];
                int i, j, k;
                p_912->g_710--;
                (*l_714) = l_713[6][2][6];
                (*p_912->g_715) = func_77(&p_912->g_54, p_912);
                for (p_912->g_606.f0 = 11; (p_912->g_606.f0 != 40); p_912->g_606.f0++)
                { /* block id: 393 */
                    uint16_t l_726 = 0x18C2L;
                    int32_t l_732 = (-3L);
                    for (l_708 = 0; (l_708 == 15); ++l_708)
                    { /* block id: 396 */
                        uint8_t *l_724 = (void*)0;
                        uint8_t *l_725[9] = {&p_912->g_133.f2,&p_912->g_133.f2,&p_912->g_133.f2,&p_912->g_133.f2,&p_912->g_133.f2,&p_912->g_133.f2,&p_912->g_133.f2,&p_912->g_133.f2,&p_912->g_133.f2};
                        int16_t *l_731 = &p_912->g_700;
                        int i;
                        (*l_703) |= 0x3E5A57C9L;
                        (*p_912->g_357) = ((p_912->g_623[0][3].f3.f0 ^ ((((*l_594) != (((*l_703) = ((((safe_lshift_func_int8_t_s_s((l_5 <= (-1L)), 0)) , (l_726++)) , (safe_mod_func_uint64_t_u_u((p_912->g_130 || ((*l_731) = (0x22708D9EL <= (65535UL > (p_912->g_125[1][8] > 0xE4L))))), (*l_703)))) , p_912->g_142.f0)) != 0UL)) , (*l_6)) > (*l_6))) < p_912->g_133.f0);
                        l_732 ^= l_726;
                    }
                }
            }
            l_709 |= (((safe_sub_func_uint8_t_u_u((l_735 == l_736), 1L)) <= 0UL) ^ ((safe_sub_func_uint16_t_u_u(0x039DL, (((((*p_912->g_357) = (**p_912->g_715)) | (((safe_mul_func_uint16_t_u_u(0UL, (safe_sub_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(1UL, (((**l_736) = l_747[8]) != l_747[2]))) , 1L) || (*l_6)), p_912->g_229)))) && 0x08DBF651L) , 0xEE98F2E4L)) == (*l_594)) & 7UL))) <= l_591[4]));
        }
    }
    for (p_912->g_123 = 0; (p_912->g_123 != (-27)); p_912->g_123--)
    { /* block id: 413 */
        int8_t l_750 = (-6L);
        uint32_t *l_773 = &p_912->g_223;
        int64_t l_789 = (-10L);
        if (((l_750 >= ((p_912->g_133.f0 | (((p_912->g_751 = &p_912->g_88) == &p_912->g_96) <= (safe_mod_func_int64_t_s_s(((65535UL && p_912->g_133.f1) || ((void*)0 == l_754)), ((safe_add_func_int64_t_s_s(0x46B6F300FC44FBA4L, p_912->g_133.f0)) ^ (*p_912->g_357)))))) < (*p_912->g_148))) || l_750))
        { /* block id: 415 */
            uint64_t l_763 = 5UL;
            for (p_912->g_190.f0 = 2; (p_912->g_190.f0 >= 0); p_912->g_190.f0 -= 1)
            { /* block id: 418 */
                int32_t l_760 = 0x0AF2FE59L;
                uint32_t *l_774 = (void*)0;
                for (p_912->g_223 = 2; (p_912->g_223 <= 8); p_912->g_223 += 1)
                { /* block id: 421 */
                    int32_t *l_762 = &p_912->g_181;
                    uint16_t *l_772 = &p_912->g_128[0][2][1];
                    (*l_762) |= (safe_div_func_int32_t_s_s(0x5EDF65D8L, ((*p_912->g_148) |= l_760)));
                    (*p_912->g_148) |= (((l_763 >= (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((((((*p_912->g_751) < ((p_912->g_54 = (((l_760 ^ (safe_rshift_func_uint16_t_u_s(((*l_772) |= p_912->g_125[7][1]), 4))) , l_773) != l_774)) > ((safe_sub_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((((p_912->g_149.f0 , (*p_912->g_202)) != p_912->g_203) > 0L), p_912->g_449.f0)) < p_912->g_700) <= 0x91L), 0x8143L)) , p_912->g_140[0].f0))) & p_912->g_277) < p_912->g_311) < p_912->g_779) && l_763), p_912->g_96)) < p_912->g_358), l_763)), (*l_762)))) & p_912->g_358) ^ 0xD324L);
                }
            }
            for (p_912->g_621.f3.f0 = 0; p_912->g_621.f3.f0 < 10; p_912->g_621.f3.f0 += 1)
            {
                p_912->g_326[p_912->g_621.f3.f0] = &p_912->g_148;
            }
        }
        else
        { /* block id: 430 */
            int64_t l_784 = (-1L);
            int32_t *l_788[3];
            int i;
            for (i = 0; i < 3; i++)
                l_788[i] = &p_912->g_181;
            p_912->g_181 &= (l_789 = (safe_sub_func_int32_t_s_s((((((safe_lshift_func_uint16_t_u_u(p_912->g_700, 4)) >= ((*p_912->g_148) = (l_784 >= ((*p_912->g_751) > (*p_912->g_751))))) | (p_912->g_785[4][0] , (l_750 | (safe_sub_func_uint32_t_u_u(0x53209DA1L, ((0xF99E7DB060DDD778L == 0x16C7FA2981120553L) | p_912->g_785[4][0].f0)))))) ^ (*p_912->g_751)) ^ 0UL), l_784)));
        }
        if ((**p_912->g_715))
            continue;
        for (p_912->g_277 = 0; (p_912->g_277 <= 6); ++p_912->g_277)
        { /* block id: 438 */
            return l_789;
        }
    }
    for (p_912->g_190.f2 = 16; (p_912->g_190.f2 >= 38); p_912->g_190.f2 = safe_add_func_uint32_t_u_u(p_912->g_190.f2, 9))
    { /* block id: 444 */
        int8_t l_799 = 0x3CL;
        union U2 ***l_805 = (void*)0;
        union U2 ***l_806 = &l_754;
        uint64_t *l_809 = &p_912->g_710;
        int32_t l_833[5];
        struct S1 *l_842 = &p_912->g_843;
        uint32_t l_844 = 9UL;
        int i;
        for (i = 0; i < 5; i++)
            l_833[i] = 0x6763CE25L;
        (*p_912->g_148) = (safe_div_func_uint32_t_u_u(((l_709 = ((((((void*)0 == p_912->g_796) < l_591[4]) , l_799) , p_912->g_800[4]) == ((*l_806) = p_912->g_803))) < (safe_lshift_func_int8_t_s_u(l_5, ((l_591[2] , ((*l_809) ^= 1UL)) != 3UL)))), l_799));
        (*p_912->g_148) = 8L;
        for (p_912->g_277 = 0; (p_912->g_277 > 46); p_912->g_277++)
        { /* block id: 452 */
            int32_t l_821 = 0x44512D83L;
            uint8_t *l_830 = &p_912->g_90;
            uint16_t *l_831[4][6][4] = {{{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]}},{{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]}},{{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]}},{{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]},{&p_912->g_128[0][2][1],(void*)0,&p_912->g_128[0][2][1],&p_912->g_128[0][2][1]}}};
            int32_t *l_832 = &l_591[1];
            uint64_t l_870 = 18446744073709551610UL;
            int16_t l_871 = 7L;
            int i, j, k;
            (*l_832) &= (255UL < ((p_912->g_96 = (safe_sub_func_uint16_t_u_u((p_912->g_128[0][0][1] = (((void*)0 != p_912->g_814) & (safe_rshift_func_uint8_t_u_u(((*l_830) |= (safe_div_func_int16_t_s_s((l_821 , l_821), (safe_lshift_func_uint16_t_u_u(((l_799 ^ ((p_912->g_661--) > (((((**p_912->g_202) , &p_912->g_147) == ((safe_sub_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((*p_912->g_148), p_912->g_142.f0)) , 0x1235223F8DE79ACBL), 3UL)) , &p_912->g_212)) , (*p_912->g_398)) , 0UL))) <= l_821), l_821))))), 4)))), p_912->g_320))) != 0x5EL));
            (*p_912->g_148) = l_799;
            if (((*p_912->g_148) = (((l_833[4] = l_592.f0) , p_912->g_133.f1) && (safe_add_func_int64_t_s_s((~((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((void*)0 != &p_912->g_751), (((safe_mod_func_uint32_t_u_u(p_912->g_623[0][3].f0, l_709)) ^ (l_844 &= (((p_912->g_398 == l_842) , l_709) >= l_833[3]))) == l_5))) & p_912->g_142.f2), l_833[4])) & 1L)), (*l_832))))))
            { /* block id: 462 */
                if (l_844)
                    break;
            }
            else
            { /* block id: 464 */
                int16_t l_858 = (-9L);
                int32_t l_868[2][3][9] = {{{0L,0x4283A867L,0x36B1532AL,0x187F9AFFL,0x36B1532AL,0x4283A867L,0L,9L,0x2D2C0EC8L},{0L,0x4283A867L,0x36B1532AL,0x187F9AFFL,0x36B1532AL,0x4283A867L,0L,9L,0x2D2C0EC8L},{0L,0x4283A867L,0x36B1532AL,0x187F9AFFL,0x36B1532AL,0x4283A867L,0L,9L,0x2D2C0EC8L}},{{0L,0x4283A867L,0x36B1532AL,0x187F9AFFL,0x36B1532AL,0x4283A867L,0L,9L,0x2D2C0EC8L},{0L,0x4283A867L,0x36B1532AL,0x187F9AFFL,0x36B1532AL,0x4283A867L,0L,9L,0x2D2C0EC8L},{0L,0x4283A867L,0x36B1532AL,0x187F9AFFL,0x36B1532AL,0x4283A867L,0L,9L,0x2D2C0EC8L}}};
                uint64_t l_891 = 0x0C8026C881C3F4FAL;
                int i, j, k;
                for (p_912->g_700 = 0; (p_912->g_700 > (-27)); p_912->g_700 = safe_sub_func_uint64_t_u_u(p_912->g_700, 9))
                { /* block id: 467 */
                    uint32_t *l_851[10][9];
                    int8_t *l_867[3];
                    int32_t l_869 = 0x67E38D3FL;
                    int i, j;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_851[i][j] = &p_912->g_223;
                    }
                    for (i = 0; i < 3; i++)
                        l_867[i] = &p_912->g_311;
                    p_912->g_872 &= (func_25((l_833[4] > ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((*p_912->g_148) |= (l_709 |= (+(((++p_912->g_223) && 4294967295UL) > ((*l_832) = 1UL))))), ((*p_912->g_202) == ((safe_mod_func_uint64_t_u_u(((((((safe_mul_func_int8_t_s_s(l_858, ((l_870 = ((safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(((((safe_mod_func_int8_t_s_s((l_868[0][2][2] = p_912->g_123), 0x57L)) , p_912->g_779) >= (l_869 < 0L)) | l_592.f0), 0xEE459A8EL)) && l_844), 13)) || l_858)) | l_858))) == p_912->g_125[5][8]) <= p_912->g_190.f2) & l_871) || l_799) , p_912->g_320), 1UL)) , (void*)0)))) < 0UL), 15)) > l_799)), l_833[4], l_592.f0, &l_5, p_912) , l_833[3]);
                    return p_912->g_623[0][3].f2;
                }
                if (l_868[0][2][2])
                    continue;
                if ((safe_sub_func_uint64_t_u_u(((*l_809) |= p_912->g_96), ((safe_sub_func_uint64_t_u_u((3L & (l_799 , (((safe_lshift_func_int16_t_s_s((((((((safe_sub_func_uint8_t_u_u((((l_799 , ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(l_868[0][2][2], 12)) <= ((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s(l_891, 0L)) ^ ((l_709 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((&p_912->g_125[5][8] == (func_25(((void*)0 == &p_912->g_751), p_912->g_623[0][3].f1, p_912->g_128[0][1][1], l_832, p_912) , &p_912->g_123)), p_912->g_125[5][8])), 0x46B1B536E1ADCBC3L)) || 0L), 11)), 6))) == (-8L))) >= 0x3CL), 2)) , (*l_832))), 7)), 5)) , 0L)) & 65535UL) , l_868[0][2][2]), 0UL)) >= p_912->g_700) || l_591[4]) , l_833[4]) > (*l_832)) | 0L) , l_833[1]), 1)) == 0x05L) , 18446744073709551615UL))), (-2L))) == l_858))))
                { /* block id: 480 */
                    uint64_t l_900 = 0x3420DAE0CB896361L;
                    l_900++;
                }
                else
                { /* block id: 482 */
                    uint32_t *l_910 = &p_912->g_223;
                    int16_t *l_911 = &p_912->g_125[5][8];
                    (*p_912->g_148) = ((&p_912->g_804 == (void*)0) && (p_912->g_903 , ((safe_lshift_func_int16_t_s_u(((*p_912->g_203) , ((*l_911) = ((safe_sub_func_uint16_t_u_u(p_912->g_128[0][1][3], l_891)) >= (0x26D513F9F8B093BCL != (p_912->g_54 = (safe_mod_func_int32_t_s_s((((*l_910) = (*l_832)) && ((((*p_912->g_398) , 0xC712L) ^ p_912->g_125[5][1]) != p_912->g_317)), p_912->g_142.f2))))))), 15)) <= p_912->g_277)));
                }
            }
        }
        if (l_844)
            break;
    }
    return l_709;
}


/* ------------------------------------------ */
/* 
 * reads : p_912->g_229 p_912->g_125 p_912->g_140.f0 p_912->g_661 p_912->g_141.f0 p_912->g_606.f0 p_912->g_130 p_912->g_142.f1 p_912->g_358 p_912->g_128 p_912->g_169 p_912->g_223 p_912->g_190.f2 p_912->g_2 p_912->g_202 p_912->g_203 p_912->g_148 p_912->g_181 p_912->g_140
 * writes: p_912->g_229 p_912->g_125 p_912->g_130 p_912->g_169 p_912->g_223 p_912->g_181 p_912->g_140
 */
int32_t  func_9(int32_t  p_10, int32_t  p_11, int32_t * p_12, uint64_t  p_13, struct S4 * p_912)
{ /* block id: 357 */
    uint16_t l_650 = 0UL;
    int32_t l_662[4][9][7] = {{{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L}},{{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L}},{{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L}},{{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L},{0x159CBB96L,0x32DBF3E1L,0x505CE4D5L,0x5FC90157L,0x32DBF3E1L,0x5FC90157L,0x505CE4D5L}}};
    uint32_t l_683 = 1UL;
    union U3 *l_691 = &p_912->g_692;
    int i, j, k;
    for (p_912->g_229 = 2; (p_912->g_229 <= 8); p_912->g_229 += 1)
    { /* block id: 360 */
        uint32_t l_646 = 6UL;
        int32_t l_647 = 0x262AFF8AL;
        uint16_t l_648 = 0xF024L;
        uint8_t *l_649[9] = {&p_912->g_190.f2,&p_912->g_190.f2,&p_912->g_190.f2,&p_912->g_190.f2,&p_912->g_190.f2,&p_912->g_190.f2,&p_912->g_190.f2,&p_912->g_190.f2,&p_912->g_190.f2};
        union U2 l_653 = {18446744073709551615UL};
        int16_t *l_658 = (void*)0;
        int16_t *l_659 = (void*)0;
        int16_t *l_660 = &p_912->g_125[5][8];
        int32_t l_665 = 0x1DCC39AEL;
        int32_t l_668 = (-2L);
        int32_t l_669 = (-1L);
        struct S0 *l_678 = &p_912->g_449;
        int i;
        p_12 = func_39(p_13, p_10, l_646, (((l_647 || (l_646 ^ (l_650 &= l_648))) >= (((safe_mul_func_uint8_t_u_u((((l_653 , ((((safe_rshift_func_uint16_t_u_u(((((*l_660) ^= (safe_mul_func_uint16_t_u_u(p_13, 1UL))) & p_912->g_140[0].f0) < p_912->g_661), 6)) != l_662[3][4][6]) || p_10) && l_653.f0)) , 0xD1A8L) | l_662[2][1][4]), (-1L))) >= 9UL) == p_10)) > p_912->g_661), p_912);
        l_662[3][4][6] = ((p_10 <= 0x5061425838CCFCDDL) != (safe_div_func_uint32_t_u_u((l_665 |= p_912->g_141.f0), (safe_rshift_func_uint16_t_u_s((!(p_912->g_606.f0 > (((p_912->g_130--) | p_912->g_142.f1) > l_650))), (((((0x5B7CCC3086E3F7EBL & ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((l_678 != ((((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(1UL, 255UL)), 1L)) && (-1L)) >= p_912->g_358) , &p_912->g_449)), l_683)) , 0xDEL), 0xF4L)), p_11)) | (-7L))) & (-2L)) > p_11) | p_13) <= p_912->g_128[0][2][1]))))));
        for (p_912->g_169 = 0; (p_912->g_169 <= 2); p_912->g_169 += 1)
        { /* block id: 369 */
            int32_t *l_690 = &l_665;
            int32_t *l_693 = &p_912->g_181;
            uint16_t l_696[5][4][8] = {{{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL}},{{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL}},{{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL}},{{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL}},{{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL},{0UL,65535UL,1UL,6UL,0xC461L,0xC461L,6UL,1UL}}};
            int i, j, k;
            (*l_693) |= (safe_sub_func_int32_t_s_s((((p_11 , ((((*l_690) ^= (safe_sub_func_int64_t_s_s(((++p_912->g_223) == l_648), p_912->g_190.f2))) ^ (((*p_12) , &p_912->g_140[p_912->g_169]) != (void*)0)) , (*p_912->g_202))) != l_691) , (-1L)), (*p_912->g_148)));
            for (p_11 = 0; (p_11 <= 2); p_11 += 1)
            { /* block id: 375 */
                uint32_t *l_697 = &l_683;
                int i;
                p_912->g_140[p_11] = p_912->g_140[p_912->g_169];
                (*l_690) &= (p_912->g_140[p_11].f1 <= (safe_div_func_uint64_t_u_u((2UL | l_696[4][3][2]), (((*l_697) = p_10) && (safe_add_func_int32_t_s_s(0x5CCBEF0FL, (*p_12)))))));
            }
        }
    }
    return (*p_12);
}


/* ------------------------------------------ */
/* 
 * reads : p_912->g_457 p_912->g_358 p_912->g_140.f1 p_912->g_606 p_912->g_130 p_912->g_133.f1 p_912->g_141.f2 p_912->g_54 p_912->g_141.f1 p_912->g_621 p_912->g_317 p_912->g_140.f0 p_912->g_148 p_912->g_2 p_912->g_90 p_912->g_277
 * writes: p_912->g_311 p_912->g_114 p_912->g_148 p_912->g_133.f1 p_912->g_54 p_912->g_320 p_912->g_623 p_912->g_128
 */
uint16_t  func_14(struct S0  p_15, int32_t * p_16, int8_t  p_17, int32_t * p_18, int32_t * p_19, struct S4 * p_912)
{ /* block id: 332 */
    int16_t l_597 = 0x22B8L;
    int64_t *l_600[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t **l_601 = &l_600[5];
    int8_t *l_604 = &p_912->g_311;
    int8_t *l_605 = &p_912->g_114;
    int32_t **l_607 = &p_912->g_148;
    int32_t l_614[3][2] = {{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)}};
    uint64_t *l_629 = (void*)0;
    uint64_t **l_628 = &l_629;
    uint8_t l_637[5][8] = {{0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L},{0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L},{0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L},{0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L},{0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L,0xA2L}};
    uint32_t l_640 = 0UL;
    uint16_t *l_641[2];
    uint8_t *l_642 = (void*)0;
    int32_t l_643[1];
    int i, j;
    for (i = 0; i < 2; i++)
        l_641[i] = &p_912->g_128[0][2][1];
    for (i = 0; i < 1; i++)
        l_643[i] = 0x42430F28L;
    (*l_607) = func_39(((*p_912->g_457) , (safe_mul_func_uint8_t_u_u(p_912->g_140[0].f1, l_597))), (((*l_605) = (safe_mod_func_int64_t_s_s((((*l_601) = l_600[9]) != &p_912->g_54), (safe_sub_func_int8_t_s_s(((*l_604) = 2L), (-4L)))))) , ((p_912->g_606 , p_17) , 1UL)), l_597, p_912->g_130, p_912);
    for (p_912->g_133.f1 = 1; (p_912->g_133.f1 >= 12); p_912->g_133.f1 = safe_add_func_uint16_t_u_u(p_912->g_133.f1, 3))
    { /* block id: 339 */
        int64_t l_612 = 0x2037D8E3C6B4759EL;
        int32_t *l_613[2];
        uint8_t *l_617 = &p_912->g_90;
        uint8_t **l_616 = &l_617;
        uint8_t ***l_615[3][9] = {{(void*)0,(void*)0,&l_616,(void*)0,&l_616,&l_616,&l_616,&l_616,&l_616},{(void*)0,(void*)0,&l_616,(void*)0,&l_616,&l_616,&l_616,&l_616,&l_616},{(void*)0,(void*)0,&l_616,(void*)0,&l_616,&l_616,&l_616,&l_616,&l_616}};
        uint8_t ***l_620 = &l_616;
        int i, j;
        for (i = 0; i < 2; i++)
            l_613[i] = &p_912->g_181;
        if ((l_614[2][1] = ((((safe_div_func_int16_t_s_s((p_912->g_141.f2 && (p_912->g_54 &= (~0x0EDE130D22BFB94EL))), l_612)) | ((void*)0 != &p_912->g_212)) , (p_912->g_320 = 5L)) || p_912->g_141.f1)))
        { /* block id: 343 */
            uint8_t ***l_619 = &l_616;
            uint8_t ****l_618[3][8][6] = {{{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]}},{{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]}},{{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]},{&l_615[0][6],&l_615[0][6],&l_619,&l_619,(void*)0,&l_615[0][6]}}};
            volatile struct S1 *l_622[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_622[i] = &p_912->g_294;
            l_614[2][1] ^= (l_615[0][6] == (l_620 = &l_616));
            p_912->g_623[0][3] = p_912->g_621;
        }
        else
        { /* block id: 347 */
            return p_15.f0;
        }
    }
    (*l_607) = func_39(p_912->g_358, ((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((&p_912->g_277 == ((*l_628) = l_600[9])), (l_614[1][1] = (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(p_912->g_317)), (1L >= (safe_add_func_int16_t_s_s((((p_912->g_128[0][2][1] = (((((safe_sub_func_int16_t_s_s((l_637[3][4] , (1UL != 0x2621L)), (((((safe_add_func_int16_t_s_s(((*p_19) != l_640), 0x4B04L)) & p_912->g_140[0].f0) & (-1L)) & p_17) != 1L))) <= 0xCF7C13F4L) && 65527UL) , 2L) < 18446744073709551610UL)) ^ (**l_607)) ^ 0x4CF460E0A7AB155BL), 0xF17FL)))))))) >= 0x4DL), 10)) ^ l_643[0]), p_912->g_90, p_912->g_277, p_912);
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_912->g_190.f1 p_912->g_142.f3.f0 p_912->g_130 p_912->g_142.f2 p_912->g_2 p_912->g_133.f0 p_912->g_420 p_912->g_320 p_912->g_140.f3.f0 p_912->g_125 p_912->g_181 p_912->g_128 p_912->g_317
 * writes: p_912->g_223 p_912->g_142.f2 p_912->g_421 p_912->g_212 p_912->g_317
 */
uint16_t  func_20(int32_t * p_21, int32_t * p_22, int32_t * p_23, int32_t * p_24, struct S4 * p_912)
{ /* block id: 235 */
    uint32_t l_409 = 4294967295UL;
    int32_t l_410 = 0x64C45B65L;
    uint32_t *l_411 = &p_912->g_223;
    int64_t *l_417 = (void*)0;
    int64_t **l_416[6][3] = {{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417},{&l_417,&l_417,&l_417}};
    uint32_t l_423 = 4294967293UL;
    int64_t l_445 = 0x7B039B658798CC1BL;
    int32_t l_463 = 0x13299AB0L;
    int32_t l_470 = (-1L);
    uint8_t l_471 = 0x3FL;
    int32_t l_543 = (-2L);
    int32_t l_546 = 1L;
    int32_t l_547 = 0x63A981B0L;
    int32_t l_548 = 0x7BF17432L;
    int32_t l_551 = 1L;
    int32_t l_552 = 0x2E556B8DL;
    int32_t l_553[4] = {0x40F78F87L,0x40F78F87L,0x40F78F87L,0x40F78F87L};
    union U3 **l_583 = &p_912->g_203;
    int i, j;
    if (((((0x1382L ^ ((safe_lshift_func_uint8_t_u_s(0x6DL, ((safe_sub_func_uint64_t_u_u(18446744073709551614UL, ((safe_add_func_int32_t_s_s((*p_24), (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(8UL, (l_409 && (p_912->g_190.f1 , p_912->g_142.f3.f0)))), (((*l_411) = ((l_410 |= p_912->g_130) , 0x75606A95L)) > l_409))))) , l_410))) , l_410))) > l_409)) , l_410) , l_411) != (void*)0))
    { /* block id: 238 */
        int64_t **l_414 = (void*)0;
        uint32_t *l_419 = &p_912->g_169;
        uint32_t **l_418 = &l_419;
        int32_t l_422 = 1L;
        for (p_912->g_142.f2 = 0; (p_912->g_142.f2 > 17); ++p_912->g_142.f2)
        { /* block id: 241 */
            int64_t ***l_415[3][7];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 7; j++)
                    l_415[i][j] = (void*)0;
            }
            l_416[2][0] = l_414;
        }
        (*p_912->g_420) = (((*p_21) & ((*l_411) = 4294967295UL)) , (p_912->g_133.f0 , l_418));
        l_423 ^= l_422;
    }
    else
    { /* block id: 247 */
        uint64_t l_426[1][2][4] = {{{0xCBB4C32286A3204EL,18446744073709551615UL,0xCBB4C32286A3204EL,0xCBB4C32286A3204EL},{0xCBB4C32286A3204EL,18446744073709551615UL,0xCBB4C32286A3204EL,0xCBB4C32286A3204EL}}};
        int32_t *l_446 = &l_410;
        int32_t ***l_447 = &p_912->g_212;
        struct S0 *l_448 = &p_912->g_449;
        struct S0 **l_450 = &l_448;
        int i, j, k;
        (*l_446) = (safe_mul_func_int8_t_s_s((p_912->g_320 != l_426[0][0][2]), (safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((safe_mod_func_uint64_t_u_u((0x63BDF0A969437AFCL ^ ((*p_24) & (p_912->g_140[0].f3.f0 > (+(-1L))))), p_912->g_125[5][8])) < (safe_sub_func_int8_t_s_s(((((safe_mod_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(0x2797L, (safe_mul_func_int16_t_s_s((+(safe_lshift_func_int16_t_s_s((0xE0L >= l_426[0][0][2]), 8))), l_410)))) > p_912->g_181), p_912->g_181)) > l_410) , l_426[0][1][1]) == 0x29E4AF80L), p_912->g_128[0][1][1]))) >= l_426[0][1][3]) || 0x0F80C7ABL), l_409)), l_445))));
        (*l_447) = &p_24;
        (*l_450) = (l_410 , l_448);
    }
    for (p_912->g_317 = (-20); (p_912->g_317 != 55); p_912->g_317 = safe_add_func_uint32_t_u_u(p_912->g_317, 8))
    { /* block id: 254 */
        int8_t l_464 = 9L;
        int32_t *l_465 = &l_463;
        int32_t *l_466 = &p_912->g_358;
        int32_t l_467 = (-9L);
        int32_t *l_468 = &l_463;
        int32_t *l_469[6] = {&l_463,&l_463,&l_463,&l_463,&l_463,&l_463};
        uint32_t l_477 = 0UL;
        int i;
        (1 + 1);
    }
    return p_912->g_142.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_912->g_147 p_912->g_54 p_912->g_148 p_912->g_2 p_912->g_133.f0 p_912->g_190.f1 p_912->g_169 p_912->g_181 p_912->g_357 p_912->g_358 p_912->g_141.f1 p_912->g_133.f1 p_912->g_203 p_912->g_204 p_912->g_128 p_912->g_90 p_912->g_142.f0 p_912->g_205 p_912->g_96
 * writes: p_912->g_148 p_912->g_54 p_912->g_90 p_912->g_229 p_912->g_114 p_912->g_181 p_912->g_133.f1 p_912->g_358 p_912->g_169 p_912->g_128 p_912->g_398
 */
union U2  func_25(uint64_t  p_26, int8_t  p_27, int8_t  p_28, int32_t * p_29, struct S4 * p_912)
{ /* block id: 16 */
    int32_t l_50[9] = {0x58805E53L,0L,0x58805E53L,0x58805E53L,0L,0x58805E53L,0x58805E53L,0L,0x58805E53L};
    int32_t l_55 = (-5L);
    int64_t *l_62 = (void*)0;
    union U2 l_116 = {0xFC28C89D8701E4A2L};
    struct S0 l_338[9][2] = {{{7UL},{18446744073709551615UL}},{{7UL},{18446744073709551615UL}},{{7UL},{18446744073709551615UL}},{{7UL},{18446744073709551615UL}},{{7UL},{18446744073709551615UL}},{{7UL},{18446744073709551615UL}},{{7UL},{18446744073709551615UL}},{{7UL},{18446744073709551615UL}},{{7UL},{18446744073709551615UL}}};
    struct S1 *l_397 = &p_912->g_142;
    int i, j;
    for (p_28 = 8; (p_28 >= 0); p_28 -= 1)
    { /* block id: 19 */
        uint16_t l_56 = 2UL;
        int32_t *l_281[10][9] = {{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2},{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2},{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2},{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2},{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2},{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2},{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2},{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2},{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2},{&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2,&p_912->g_2}};
        uint8_t *l_291 = &p_912->g_96;
        int16_t l_292[5][8][6] = {{{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L}},{{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L}},{{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L}},{{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L}},{{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L},{0x2B62L,0x0FA0L,(-1L),(-1L),0x6520L,0x0FE5L}}};
        uint8_t *l_309 = &p_912->g_190.f2;
        int32_t **l_325 = &l_281[7][3];
        int i, j, k;
        for (p_27 = 0; (p_27 <= 8); p_27 += 1)
        { /* block id: 22 */
            int64_t *l_53[4] = {&p_912->g_54,&p_912->g_54,&p_912->g_54,&p_912->g_54};
            int32_t *l_81 = &p_912->g_2;
            int32_t **l_80 = &l_81;
            int8_t *l_113 = &p_912->g_114;
            union U2 l_115 = {0x30550D74AE622E34L};
            uint8_t l_121 = 0xC4L;
            int16_t *l_122 = &p_912->g_123;
            int16_t *l_124 = &p_912->g_125[5][8];
            uint8_t *l_126 = (void*)0;
            uint8_t *l_127 = &l_121;
            uint8_t *l_129 = &p_912->g_130;
            uint64_t l_324 = 18446744073709551615UL;
            int i;
            (1 + 1);
        }
        (*p_912->g_147) = ((*l_325) = func_77(l_62, p_912));
    }
    for (p_912->g_54 = 0; (p_912->g_54 > 18); ++p_912->g_54)
    { /* block id: 186 */
        uint16_t l_383 = 65535UL;
        int32_t *l_386 = &p_912->g_181;
        for (p_912->g_90 = 3; (p_912->g_90 <= 59); p_912->g_90++)
        { /* block id: 189 */
            int64_t *l_331 = &p_912->g_54;
            int32_t l_348 = (-1L);
            union U2 l_355 = {1UL};
            int32_t *l_388 = (void*)0;
            uint8_t *l_394 = &p_912->g_190.f2;
            uint8_t **l_393 = &l_394;
            if ((&p_912->g_54 != l_331))
            { /* block id: 190 */
                uint8_t l_350[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_350[i] = 253UL;
                if ((*p_912->g_148))
                    break;
                for (p_912->g_229 = 29; (p_912->g_229 < 49); p_912->g_229 = safe_add_func_uint8_t_u_u(p_912->g_229, 7))
                { /* block id: 194 */
                    int8_t *l_341 = &p_912->g_114;
                    int32_t l_349 = 5L;
                    int32_t *l_351 = &p_912->g_181;
                    int32_t *l_352 = &l_348;
                    (*l_352) = ((*l_351) = (((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((((*l_341) = (l_338[6][1] , (safe_mul_func_int16_t_s_s(p_27, 1L)))) == (l_55 >= (safe_mul_func_int8_t_s_s((p_27 >= (safe_mul_func_uint16_t_u_u(p_912->g_133.f0, p_912->g_190.f1))), (safe_sub_func_int16_t_s_s(l_348, l_349)))))) ^ l_350[0]), p_26)), l_349)) > p_912->g_169) > l_348));
                    if (l_350[0])
                        break;
                }
                for (p_912->g_133.f1 = 17; (p_912->g_133.f1 > (-25)); p_912->g_133.f1 = safe_sub_func_int64_t_s_s(p_912->g_133.f1, 5))
                { /* block id: 202 */
                    return l_355;
                }
            }
            else
            { /* block id: 205 */
                int32_t *l_356 = &p_912->g_181;
                uint8_t **l_395 = &l_394;
                (*p_912->g_357) &= ((*l_356) &= (0xB8L || 1L));
                if (l_355.f0)
                    break;
                for (p_912->g_169 = (-16); (p_912->g_169 <= 11); ++p_912->g_169)
                { /* block id: 211 */
                    int16_t l_369[7][6][6] = {{{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L}},{{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L}},{{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L}},{{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L}},{{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L}},{{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L}},{{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L},{1L,0x6403L,0x3F58L,0L,(-2L),0L}}};
                    union U3 **l_372 = &p_912->g_203;
                    uint16_t *l_373 = (void*)0;
                    uint16_t *l_374 = &p_912->g_128[0][1][1];
                    int32_t **l_381[8] = {&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356};
                    union U2 l_392 = {0xC0CF2C42BA60086DL};
                    uint8_t ***l_396 = &l_393;
                    int i, j, k;
                    if (((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_26, 14)), (0xF7034F85L >= (*l_356)))) , (0x33L & (safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s((l_50[1] && l_369[4][2][2]), (((*l_356) = (safe_div_func_uint16_t_u_u(((+(!p_26)) , ((*l_374) = (l_372 != (((p_912->g_141.f1 >= 0x13D7225EB0296498L) >= p_27) , &p_912->g_203)))), (-1L)))) | p_912->g_133.f1))), p_26)))))
                    { /* block id: 214 */
                        int32_t ***l_382 = &l_381[2];
                        l_55 &= 0x194803DEL;
                        (*l_356) = (safe_sub_func_int32_t_s_s((((*p_912->g_203) , (safe_lshift_func_int8_t_s_s((*l_356), 6))) , (p_26 < ((*l_374)--))), (((*l_382) = l_381[2]) == &p_29)));
                    }
                    else
                    { /* block id: 219 */
                        int64_t l_387 = 0L;
                        l_383--;
                        l_386 = p_29;
                        l_388 = func_39((l_348 , (p_912->g_90 , 0UL)), p_26, (((p_912->g_142.f0 >= (0xA20597C2D6C3E227L ^ (0x3794A918L & l_387))) >= ((*p_912->g_148) == l_387)) < 1UL), l_55, p_912);
                        (*p_912->g_205) &= 0x08591DE5L;
                    }
                    (*p_912->g_357) &= (safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((!((p_28 || ((p_27 != (l_392 , (((*l_356) , (((*l_396) = (l_395 = l_393)) == &l_394)) >= ((void*)0 == &p_912->g_317)))) || p_28)) >= p_912->g_96)))), 3UL));
                    p_912->g_398 = l_397;
                    (*l_356) = (*p_912->g_148);
                }
            }
        }
    }
    return l_116;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_39(uint16_t  p_40, uint32_t  p_41, int64_t  p_42, int32_t  p_43, struct S4 * p_912)
{ /* block id: 14 */
    return &p_912->g_2;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_44(uint8_t  p_45, struct S4 * p_912)
{ /* block id: 12 */
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_912->g_123 p_912->g_133 p_912->g_140 p_912->g_142 p_912->g_114 p_912->g_147 p_912->g_149 p_912->g_169 p_912->g_148 p_912->g_130 p_912->g_96 p_912->g_181 p_912->g_190 p_912->g_141.f3.f0 p_912->g_202 p_912->g_205 p_912->g_128 p_912->g_88 p_912->g_125 p_912->g_2 p_912->g_229 p_912->g_141.f1 p_912->g_90 p_912->g_203 p_912->g_54 p_912->g_274 p_912->g_141
 * writes: p_912->g_123 p_912->g_133.f3 p_912->g_133.f2 p_912->g_141 p_912->g_114 p_912->g_88 p_912->g_148 p_912->g_169 p_912->g_181 p_912->g_203 p_912->g_130 p_912->g_212 p_912->g_229 p_912->g_54 p_912->g_128 p_912->g_125 p_912->g_277 p_912->g_190.f1
 */
struct S1  func_57(uint32_t  p_58, int32_t * p_59, int32_t  p_60, int64_t  p_61, struct S4 * p_912)
{ /* block id: 59 */
    int64_t l_134 = (-1L);
    int32_t l_177 = (-1L);
    int8_t l_225 = (-1L);
    uint32_t *l_275 = &p_912->g_223;
    for (p_912->g_123 = 10; (p_912->g_123 > 6); p_912->g_123 = safe_sub_func_int16_t_s_s(p_912->g_123, 8))
    { /* block id: 62 */
        volatile struct S0 *l_137 = &p_912->g_133.f3;
        for (p_61 = 8; (p_61 >= 1); p_61 -= 1)
        { /* block id: 65 */
            return p_912->g_133;
        }
        l_134 &= 0x213856DDL;
        (*l_137) = p_912->g_133.f3;
        for (p_912->g_133.f2 = (-1); (p_912->g_133.f2 != 13); p_912->g_133.f2 = safe_add_func_int16_t_s_s(p_912->g_133.f2, 6))
        { /* block id: 72 */
            p_912->g_141 = p_912->g_140[0];
            return p_912->g_142;
        }
    }
    for (p_912->g_114 = 0; (p_912->g_114 == 23); p_912->g_114++)
    { /* block id: 79 */
        uint16_t l_176[9] = {0x6ECFL,0x04F4L,0x6ECFL,0x6ECFL,0x04F4L,0x6ECFL,0x6ECFL,0x04F4L,0x6ECFL};
        int8_t l_178 = 0x0DL;
        int32_t l_200 = (-3L);
        union U3 *l_219 = (void*)0;
        int i;
        for (p_912->g_88 = 0; (p_912->g_88 >= 56); p_912->g_88++)
        { /* block id: 82 */
            uint32_t *l_168 = &p_912->g_169;
            int32_t l_179 = 9L;
            int32_t *l_180 = &p_912->g_181;
            (*p_912->g_147) = &p_60;
            (*l_180) &= ((~(p_912->g_149 , (safe_rshift_func_uint8_t_u_u(0x52L, (safe_lshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u(18446744073709551615UL, p_58)), 4)))))) > (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_61, 0x3353L)), (((safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(((l_178 = (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((++(*l_168)) , (safe_rshift_func_uint8_t_u_u(((l_177 = (+((safe_add_func_int16_t_s_s(l_176[8], p_912->g_114)) >= p_61))) & p_58), 7))), p_912->g_142.f2)), p_58))) | l_176[8]), (*p_912->g_148))) && p_912->g_130), p_912->g_96)) != p_58) || l_179))));
            if ((*p_912->g_148))
                break;
        }
        for (p_912->g_88 = 0; (p_912->g_88 <= 8); p_912->g_88 += 1)
        { /* block id: 92 */
            int32_t l_228 = 0x1D234652L;
            uint64_t l_241 = 0x72F530DC468263D4L;
            uint16_t *l_250 = &p_912->g_128[0][0][3];
            int32_t *l_259 = &p_912->g_2;
            int16_t *l_260[10][5][5] = {{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}},{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}},{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}},{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}},{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}},{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}},{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}},{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}},{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}},{{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123},{&p_912->g_123,&p_912->g_123,&p_912->g_123,(void*)0,&p_912->g_123}}};
            int i, j, k;
            for (l_134 = 2; (l_134 >= 0); l_134 -= 1)
            { /* block id: 95 */
                uint32_t l_189 = 4294967291UL;
                int8_t *l_199[7][4] = {{&l_178,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,&l_178}};
                union U3 *l_201 = (void*)0;
                int i, j;
                for (p_58 = 2; (p_58 <= 8); p_58 += 1)
                { /* block id: 98 */
                    uint64_t l_184[5][1];
                    int32_t *l_187 = (void*)0;
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_184[i][j] = 0xC9F1C0895ADC90BCL;
                    }
                    for (p_912->g_169 = 0; (p_912->g_169 <= 2); p_912->g_169 += 1)
                    { /* block id: 101 */
                        int32_t *l_182 = &l_177;
                        int32_t *l_183 = &p_912->g_181;
                        int i;
                        --l_184[4][0];
                        return p_912->g_140[p_912->g_169];
                    }
                    for (p_60 = 7; (p_60 >= 0); p_60 -= 1)
                    { /* block id: 107 */
                        int32_t **l_188[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_188[i] = &p_912->g_148;
                        p_59 = l_187;
                        if (l_189)
                            break;
                        return p_912->g_190;
                    }
                }
                for (p_61 = 0; (p_61 <= 8); p_61 += 1)
                { /* block id: 115 */
                    int i;
                    return p_912->g_140[l_134];
                }
                (*p_912->g_202) = ((safe_sub_func_uint8_t_u_u((((p_60 | p_58) >= p_58) || (~p_912->g_133.f0)), (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((l_200 = ((safe_lshift_func_uint8_t_u_s(p_912->g_133.f3.f0, 3)) && p_912->g_141.f3.f0)), (-4L))), p_58)))) , l_201);
            }
            for (p_58 = 0; (p_58 <= 8); p_58 += 1)
            { /* block id: 123 */
                uint32_t l_221 = 0xE75671FDL;
                int32_t *l_226 = &p_912->g_181;
                int32_t *l_227[9] = {&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177};
                uint16_t *l_232 = &l_176[5];
                int64_t *l_233 = &p_912->g_54;
                uint16_t *l_234 = &p_912->g_128[0][2][1];
                int i;
                for (p_912->g_130 = 0; (p_912->g_130 <= 8); p_912->g_130 += 1)
                { /* block id: 126 */
                    struct S0 l_215 = {0x3BF2598EEF55B7FEL};
                    union U3 *l_216[8] = {&p_912->g_217,&p_912->g_217,&p_912->g_217,&p_912->g_217,&p_912->g_217,&p_912->g_217,&p_912->g_217,&p_912->g_217};
                    int i;
                    (*p_912->g_205) ^= (0x2D4A8C9CD3F73289L != 0L);
                    for (p_912->g_123 = 0; (p_912->g_123 <= 0); p_912->g_123 += 1)
                    { /* block id: 130 */
                        uint8_t l_220[1][6];
                        uint32_t *l_222[1][6] = {{&p_912->g_223,&p_912->g_223,&p_912->g_223,&p_912->g_223,&p_912->g_223,&p_912->g_223}};
                        int32_t *l_224 = &p_912->g_181;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_220[i][j] = 8UL;
                        }
                        (*l_224) &= (safe_rshift_func_uint8_t_u_u(p_912->g_128[p_912->g_123][(p_912->g_123 + 5)][(p_912->g_123 + 4)], ((l_177 = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_912->g_125[p_912->g_88][p_58], ((p_912->g_212 = &p_912->g_148) != (void*)0))), (p_912->g_140[0].f1 >= (p_60 >= (((safe_div_func_uint32_t_u_u((((l_200 = ((l_215 , l_216[0]) != l_219)) | l_176[8]) == (*p_912->g_148)), l_220[0][3])) < l_221) > (-1L))))))) != p_912->g_130)));
                    }
                }
                p_912->g_229--;
                p_60 ^= (((((*l_232) = l_228) < ((*l_234) = (l_177 = (~(((+p_912->g_190.f1) != ((*l_233) = p_912->g_141.f1)) != p_912->g_123))))) != (safe_lshift_func_int8_t_s_u(l_134, (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(0x5DL, 3)), l_241))))) >= (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_200, p_912->g_96)), p_912->g_90)) < l_228), l_225)));
            }
            l_200 |= (safe_div_func_uint16_t_u_u((--(*l_250)), (safe_rshift_func_int16_t_s_u((p_912->g_123 = (p_912->g_125[p_912->g_88][p_912->g_88] = (safe_div_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((void*)0 != (*p_912->g_202)), (!((void*)0 != l_259)))) > p_61), (-5L))))), (safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((l_177 = (*l_259)) , (8UL == 9UL)), 4294967295UL)) <= 1L), p_58)), l_225)), 0x02C53A9CDA35C18DL))))));
        }
    }
    for (p_912->g_54 = (-11); (p_912->g_54 != 27); p_912->g_54 = safe_add_func_int32_t_s_s(p_912->g_54, 5))
    { /* block id: 153 */
        uint32_t *l_273 = &p_912->g_223;
        uint64_t *l_276 = &p_912->g_277;
        int32_t *l_278[7];
        uint64_t l_279 = 4UL;
        int32_t l_280 = 0x102D3572L;
        int i;
        for (i = 0; i < 7; i++)
            l_278[i] = &p_912->g_190.f0;
        p_59 = func_39((safe_lshift_func_int16_t_s_s((((((&p_912->g_223 != l_273) >= (p_912->g_274 , (l_275 == ((l_279 = (p_912->g_190.f1 ^= (p_912->g_54 <= ((*l_276) = 0x96B6CEE01EBF44B9L)))) , p_59)))) < (!(p_60 , (0x4981L < p_912->g_54)))) <= l_225) < p_60), p_912->g_54)), l_280, l_280, l_280, p_912);
        return p_912->g_140[0];
    }
    return p_912->g_141;
}


/* ------------------------------------------ */
/* 
 * reads : p_912->g_2 p_912->g_54 p_912->g_88
 * writes: p_912->g_54 p_912->g_88 p_912->g_90 p_912->g_96
 */
int8_t  func_75(int32_t * p_76, struct S4 * p_912)
{ /* block id: 28 */
    int64_t *l_82 = &p_912->g_54;
    int32_t l_83 = (-10L);
    uint16_t l_110 = 0xC6B8L;
    int32_t *l_111 = (void*)0;
    l_83 = (p_912->g_2 <= ((void*)0 != l_82));
    for (p_912->g_54 = 7; (p_912->g_54 != 16); p_912->g_54++)
    { /* block id: 32 */
        uint32_t l_86[6][6] = {{0xC4096A60L,4294967292UL,1UL,0UL,1UL,4294967292UL},{0xC4096A60L,4294967292UL,1UL,0UL,1UL,4294967292UL},{0xC4096A60L,4294967292UL,1UL,0UL,1UL,4294967292UL},{0xC4096A60L,4294967292UL,1UL,0UL,1UL,4294967292UL},{0xC4096A60L,4294967292UL,1UL,0UL,1UL,4294967292UL},{0xC4096A60L,4294967292UL,1UL,0UL,1UL,4294967292UL}};
        int32_t l_91[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_91[i] = 0L;
        for (l_83 = 0; (l_83 <= 5); l_83 += 1)
        { /* block id: 35 */
            uint8_t *l_87 = &p_912->g_88;
            uint8_t *l_89 = &p_912->g_90;
            int32_t **l_112 = &l_111;
            int i, j;
            l_91[0] = ((-2L) <= ((*l_89) = ((*l_87) &= l_86[l_83][l_83])));
            l_111 = func_39(((l_86[l_83][l_83] || ((p_912->g_96 = (safe_add_func_int32_t_s_s(p_912->g_88, (safe_lshift_func_int8_t_s_u(1L, ((*l_89) = 0x0CL)))))) >= (safe_sub_func_int8_t_s_s((((((p_912->g_54 , (+9UL)) , (safe_unary_minus_func_int16_t_s(((safe_mul_func_uint16_t_u_u(((0x07F0789CL > (safe_sub_func_uint32_t_u_u((p_912->g_88 , (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(p_912->g_54, l_110)), l_86[5][0])), 0UL))), p_912->g_54))) , 0xED11L), p_912->g_88)) == (-9L))))) > 0x3FL) && l_83) < 4L), 0x01L)))) , l_86[l_83][l_83]), l_91[0], l_86[l_83][l_83], l_86[l_83][l_83], p_912);
            (*l_112) = func_77(&p_912->g_54, p_912);
            for (p_912->g_88 = 0; (p_912->g_88 <= 0); p_912->g_88 += 1)
            { /* block id: 45 */
                int i;
                l_91[p_912->g_88] |= 0x33423B0CL;
                return l_91[p_912->g_88];
            }
        }
    }
    return l_110;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_77(int64_t * p_78, struct S4 * p_912)
{ /* block id: 25 */
    int32_t *l_79 = &p_912->g_2;
    return l_79;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S4 c_913;
    struct S4* p_912 = &c_913;
    struct S4 c_914 = {
        0x3F2B2994L, // p_912->g_2
        0L, // p_912->g_54
        1UL, // p_912->g_88
        0xDCL, // p_912->g_90
        0x55L, // p_912->g_96
        0x25L, // p_912->g_114
        0L, // p_912->g_123
        {{(-9L),1L,0x728FL,(-1L),0x7173L,0x37E6L,0x414CL,0x07BDL,0x414CL},{(-9L),1L,0x728FL,(-1L),0x7173L,0x37E6L,0x414CL,0x07BDL,0x414CL},{(-9L),1L,0x728FL,(-1L),0x7173L,0x37E6L,0x414CL,0x07BDL,0x414CL},{(-9L),1L,0x728FL,(-1L),0x7173L,0x37E6L,0x414CL,0x07BDL,0x414CL},{(-9L),1L,0x728FL,(-1L),0x7173L,0x37E6L,0x414CL,0x07BDL,0x414CL},{(-9L),1L,0x728FL,(-1L),0x7173L,0x37E6L,0x414CL,0x07BDL,0x414CL},{(-9L),1L,0x728FL,(-1L),0x7173L,0x37E6L,0x414CL,0x07BDL,0x414CL},{(-9L),1L,0x728FL,(-1L),0x7173L,0x37E6L,0x414CL,0x07BDL,0x414CL},{(-9L),1L,0x728FL,(-1L),0x7173L,0x37E6L,0x414CL,0x07BDL,0x414CL}}, // p_912->g_125
        {{{0x5860L,0xA69EL,2UL,0xA69EL,0x5860L},{0x5860L,0xA69EL,2UL,0xA69EL,0x5860L},{0x5860L,0xA69EL,2UL,0xA69EL,0x5860L},{0x5860L,0xA69EL,2UL,0xA69EL,0x5860L},{0x5860L,0xA69EL,2UL,0xA69EL,0x5860L},{0x5860L,0xA69EL,2UL,0xA69EL,0x5860L},{0x5860L,0xA69EL,2UL,0xA69EL,0x5860L}}}, // p_912->g_128
        1UL, // p_912->g_130
        {0x377E5FFFL,0x132EE097L,0x4BL,{18446744073709551607UL}}, // p_912->g_133
        {&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3}, // p_912->g_135
        {&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3,&p_912->g_133.f3}, // p_912->g_136
        {{0x38A2FE65L,0x069F8A89L,0xB4L,{1UL}},{0x38A2FE65L,0x069F8A89L,0xB4L,{1UL}},{0x38A2FE65L,0x069F8A89L,0xB4L,{1UL}}}, // p_912->g_140
        {0x755CBB87L,0x5152B013L,0x58L,{1UL}}, // p_912->g_141
        {0x61A8ADBCL,-1L,255UL,{5UL}}, // p_912->g_142
        &p_912->g_2, // p_912->g_148
        &p_912->g_148, // p_912->g_147
        {0UL}, // p_912->g_149
        0UL, // p_912->g_169
        0x79523B59L, // p_912->g_181
        {0x7D217F2CL,9L,6UL,{0x7F4EF6039F823E19L}}, // p_912->g_190
        {4294967293UL}, // p_912->g_204
        &p_912->g_204, // p_912->g_203
        &p_912->g_203, // p_912->g_202
        &p_912->g_181, // p_912->g_205
        (void*)0, // p_912->g_212
        {0x894D0847L}, // p_912->g_217
        {4294967294UL}, // p_912->g_218
        0xFCE70BD2L, // p_912->g_223
        248UL, // p_912->g_229
        {0xB85034D1L}, // p_912->g_274
        6UL, // p_912->g_277
        {0x6B3F3D90L,0x48665703L,0UL,{3UL}}, // p_912->g_294
        1L, // p_912->g_311
        4294967295UL, // p_912->g_317
        0x465AL, // p_912->g_320
        {&p_912->g_148,&p_912->g_148,&p_912->g_148,&p_912->g_148,&p_912->g_148,&p_912->g_148,&p_912->g_148,&p_912->g_148,&p_912->g_148,&p_912->g_148}, // p_912->g_326
        0L, // p_912->g_358
        &p_912->g_358, // p_912->g_357
        &p_912->g_133, // p_912->g_398
        (void*)0, // p_912->g_421
        &p_912->g_421, // p_912->g_420
        {6UL}, // p_912->g_449
        (void*)0, // p_912->g_455
        &p_912->g_358, // p_912->g_457
        {0x7C6CBDADL,-9L,252UL,{0x5CDF32F65BBFF3FBL}}, // p_912->g_458
        {{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}}, // p_912->g_480
        {0x11E429703E764E9BL}, // p_912->g_606
        {0x74D20BFBL,0L,1UL,{6UL}}, // p_912->g_621
        {{{0x0F868640L,0x458EDBC7L,1UL,{0x6DF95DE57CDF1BC1L}},{0x676534CFL,0x43C4541BL,0xA2L,{18446744073709551615UL}},{1L,-7L,0x13L,{0x6025DAB0DD7D53CFL}},{0x676534CFL,0x43C4541BL,0xA2L,{18446744073709551615UL}},{0x0F868640L,0x458EDBC7L,1UL,{0x6DF95DE57CDF1BC1L}},{0x0F868640L,0x458EDBC7L,1UL,{0x6DF95DE57CDF1BC1L}},{0x676534CFL,0x43C4541BL,0xA2L,{18446744073709551615UL}},{1L,-7L,0x13L,{0x6025DAB0DD7D53CFL}},{0x676534CFL,0x43C4541BL,0xA2L,{18446744073709551615UL}},{0x0F868640L,0x458EDBC7L,1UL,{0x6DF95DE57CDF1BC1L}}},{{0x0F868640L,0x458EDBC7L,1UL,{0x6DF95DE57CDF1BC1L}},{0x676534CFL,0x43C4541BL,0xA2L,{18446744073709551615UL}},{1L,-7L,0x13L,{0x6025DAB0DD7D53CFL}},{0x676534CFL,0x43C4541BL,0xA2L,{18446744073709551615UL}},{0x0F868640L,0x458EDBC7L,1UL,{0x6DF95DE57CDF1BC1L}},{0x0F868640L,0x458EDBC7L,1UL,{0x6DF95DE57CDF1BC1L}},{0x676534CFL,0x43C4541BL,0xA2L,{18446744073709551615UL}},{1L,-7L,0x13L,{0x6025DAB0DD7D53CFL}},{0x676534CFL,0x43C4541BL,0xA2L,{18446744073709551615UL}},{0x0F868640L,0x458EDBC7L,1UL,{0x6DF95DE57CDF1BC1L}}}}, // p_912->g_623
        0xC57FL, // p_912->g_661
        {0x0749110AL}, // p_912->g_692
        0x20A3L, // p_912->g_700
        0x4E5A3303C6207CE2L, // p_912->g_710
        &p_912->g_148, // p_912->g_715
        (void*)0, // p_912->g_751
        (void*)0, // p_912->g_761
        0x346FL, // p_912->g_779
        {{{0x759222F0L}},{{0x759222F0L}},{{0x759222F0L}},{{0x759222F0L}},{{0x759222F0L}},{{0x759222F0L}},{{0x759222F0L}},{{0x759222F0L}},{{0x759222F0L}},{{0x759222F0L}}}, // p_912->g_785
        {0xA96FC89EL,0xA96FC89EL,0xA96FC89EL}, // p_912->g_798
        &p_912->g_798[1], // p_912->g_797
        &p_912->g_797, // p_912->g_796
        {{8UL},{8UL},{8UL}}, // p_912->g_802
        &p_912->g_802[2], // p_912->g_801
        {&p_912->g_801,(void*)0,&p_912->g_801,&p_912->g_801,(void*)0,&p_912->g_801,&p_912->g_801}, // p_912->g_800
        &p_912->g_606, // p_912->g_804
        &p_912->g_804, // p_912->g_803
        (void*)0, // p_912->g_816
        &p_912->g_816, // p_912->g_815
        &p_912->g_815, // p_912->g_814
        {4L,2L,0xB7L,{18446744073709551615UL}}, // p_912->g_843
        4294967291UL, // p_912->g_872
        {8UL}, // p_912->g_903
    };
    c_913 = c_914;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_912);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_912->g_2, "p_912->g_2", print_hash_value);
    transparent_crc(p_912->g_54, "p_912->g_54", print_hash_value);
    transparent_crc(p_912->g_88, "p_912->g_88", print_hash_value);
    transparent_crc(p_912->g_90, "p_912->g_90", print_hash_value);
    transparent_crc(p_912->g_96, "p_912->g_96", print_hash_value);
    transparent_crc(p_912->g_114, "p_912->g_114", print_hash_value);
    transparent_crc(p_912->g_123, "p_912->g_123", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_912->g_125[i][j], "p_912->g_125[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_912->g_128[i][j][k], "p_912->g_128[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_912->g_130, "p_912->g_130", print_hash_value);
    transparent_crc(p_912->g_133.f0, "p_912->g_133.f0", print_hash_value);
    transparent_crc(p_912->g_133.f1, "p_912->g_133.f1", print_hash_value);
    transparent_crc(p_912->g_133.f2, "p_912->g_133.f2", print_hash_value);
    transparent_crc(p_912->g_133.f3.f0, "p_912->g_133.f3.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_912->g_140[i].f0, "p_912->g_140[i].f0", print_hash_value);
        transparent_crc(p_912->g_140[i].f1, "p_912->g_140[i].f1", print_hash_value);
        transparent_crc(p_912->g_140[i].f2, "p_912->g_140[i].f2", print_hash_value);
        transparent_crc(p_912->g_140[i].f3.f0, "p_912->g_140[i].f3.f0", print_hash_value);

    }
    transparent_crc(p_912->g_141.f0, "p_912->g_141.f0", print_hash_value);
    transparent_crc(p_912->g_141.f1, "p_912->g_141.f1", print_hash_value);
    transparent_crc(p_912->g_141.f2, "p_912->g_141.f2", print_hash_value);
    transparent_crc(p_912->g_141.f3.f0, "p_912->g_141.f3.f0", print_hash_value);
    transparent_crc(p_912->g_142.f0, "p_912->g_142.f0", print_hash_value);
    transparent_crc(p_912->g_142.f1, "p_912->g_142.f1", print_hash_value);
    transparent_crc(p_912->g_142.f2, "p_912->g_142.f2", print_hash_value);
    transparent_crc(p_912->g_142.f3.f0, "p_912->g_142.f3.f0", print_hash_value);
    transparent_crc(p_912->g_149.f0, "p_912->g_149.f0", print_hash_value);
    transparent_crc(p_912->g_169, "p_912->g_169", print_hash_value);
    transparent_crc(p_912->g_181, "p_912->g_181", print_hash_value);
    transparent_crc(p_912->g_190.f0, "p_912->g_190.f0", print_hash_value);
    transparent_crc(p_912->g_190.f1, "p_912->g_190.f1", print_hash_value);
    transparent_crc(p_912->g_190.f2, "p_912->g_190.f2", print_hash_value);
    transparent_crc(p_912->g_190.f3.f0, "p_912->g_190.f3.f0", print_hash_value);
    transparent_crc(p_912->g_204.f0, "p_912->g_204.f0", print_hash_value);
    transparent_crc(p_912->g_217.f0, "p_912->g_217.f0", print_hash_value);
    transparent_crc(p_912->g_218.f0, "p_912->g_218.f0", print_hash_value);
    transparent_crc(p_912->g_223, "p_912->g_223", print_hash_value);
    transparent_crc(p_912->g_229, "p_912->g_229", print_hash_value);
    transparent_crc(p_912->g_274.f0, "p_912->g_274.f0", print_hash_value);
    transparent_crc(p_912->g_277, "p_912->g_277", print_hash_value);
    transparent_crc(p_912->g_294.f0, "p_912->g_294.f0", print_hash_value);
    transparent_crc(p_912->g_294.f1, "p_912->g_294.f1", print_hash_value);
    transparent_crc(p_912->g_294.f2, "p_912->g_294.f2", print_hash_value);
    transparent_crc(p_912->g_294.f3.f0, "p_912->g_294.f3.f0", print_hash_value);
    transparent_crc(p_912->g_311, "p_912->g_311", print_hash_value);
    transparent_crc(p_912->g_317, "p_912->g_317", print_hash_value);
    transparent_crc(p_912->g_320, "p_912->g_320", print_hash_value);
    transparent_crc(p_912->g_358, "p_912->g_358", print_hash_value);
    transparent_crc(p_912->g_449.f0, "p_912->g_449.f0", print_hash_value);
    transparent_crc(p_912->g_458.f0, "p_912->g_458.f0", print_hash_value);
    transparent_crc(p_912->g_458.f1, "p_912->g_458.f1", print_hash_value);
    transparent_crc(p_912->g_458.f2, "p_912->g_458.f2", print_hash_value);
    transparent_crc(p_912->g_458.f3.f0, "p_912->g_458.f3.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_912->g_480[i][j].f0, "p_912->g_480[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_912->g_606.f0, "p_912->g_606.f0", print_hash_value);
    transparent_crc(p_912->g_621.f0, "p_912->g_621.f0", print_hash_value);
    transparent_crc(p_912->g_621.f1, "p_912->g_621.f1", print_hash_value);
    transparent_crc(p_912->g_621.f2, "p_912->g_621.f2", print_hash_value);
    transparent_crc(p_912->g_621.f3.f0, "p_912->g_621.f3.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_912->g_623[i][j].f0, "p_912->g_623[i][j].f0", print_hash_value);
            transparent_crc(p_912->g_623[i][j].f1, "p_912->g_623[i][j].f1", print_hash_value);
            transparent_crc(p_912->g_623[i][j].f2, "p_912->g_623[i][j].f2", print_hash_value);
            transparent_crc(p_912->g_623[i][j].f3.f0, "p_912->g_623[i][j].f3.f0", print_hash_value);

        }
    }
    transparent_crc(p_912->g_661, "p_912->g_661", print_hash_value);
    transparent_crc(p_912->g_692.f0, "p_912->g_692.f0", print_hash_value);
    transparent_crc(p_912->g_700, "p_912->g_700", print_hash_value);
    transparent_crc(p_912->g_710, "p_912->g_710", print_hash_value);
    transparent_crc(p_912->g_779, "p_912->g_779", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_912->g_785[i][j].f0, "p_912->g_785[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_912->g_798[i], "p_912->g_798[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_912->g_802[i].f0, "p_912->g_802[i].f0", print_hash_value);

    }
    transparent_crc(p_912->g_843.f0, "p_912->g_843.f0", print_hash_value);
    transparent_crc(p_912->g_843.f1, "p_912->g_843.f1", print_hash_value);
    transparent_crc(p_912->g_843.f2, "p_912->g_843.f2", print_hash_value);
    transparent_crc(p_912->g_843.f3.f0, "p_912->g_843.f3.f0", print_hash_value);
    transparent_crc(p_912->g_872, "p_912->g_872", print_hash_value);
    transparent_crc(p_912->g_903.f0, "p_912->g_903.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
