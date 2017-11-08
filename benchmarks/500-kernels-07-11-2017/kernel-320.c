// -g 9,10,86 -l 9,2,1
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


// Seed: 1458178361

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   int16_t  f1;
   int32_t  f2;
};

struct S1 {
   volatile int64_t  f0;
   volatile uint32_t  f1;
   uint16_t  f2;
   uint64_t  f3;
   volatile int32_t  f4;
   volatile int32_t  f5;
   volatile int32_t  f6;
   volatile int64_t  f7;
   int8_t  f8;
   volatile int32_t  f9;
};

union U2 {
   int8_t * f0;
   volatile int8_t * volatile  f1;
};

union U3 {
   uint32_t  f0;
   int32_t  f1;
   int32_t  f2;
   volatile int32_t  f3;
   volatile int32_t  f4;
};

union U4 {
   volatile uint32_t  f0;
   uint32_t  f1;
   int8_t * volatile  f2;
};

struct S5 {
    int32_t g_29;
    int16_t g_31;
    struct S0 g_33;
    struct S0 *g_32;
    uint64_t g_54;
    int32_t g_55;
    uint8_t g_91[10][5];
    int64_t g_129;
    int32_t * volatile g_130;
    uint16_t g_138;
    volatile union U2 g_146;
    volatile struct S1 g_154;
    uint64_t g_165[6][4];
    uint64_t g_167;
    int8_t g_175;
    union U3 g_178;
    union U3 *g_180;
    union U3 ** volatile g_179[9][8][3];
    struct S1 g_186[3][1];
    struct S1 *g_187;
    int64_t g_218;
    uint32_t g_219;
    volatile struct S0 g_224;
    struct S0 g_226;
    volatile union U4 g_253;
    struct S1 g_263;
    volatile union U4 g_267;
    struct S1 g_303[6][8];
    int32_t g_338[8][9];
    union U3 g_341;
    uint64_t g_348;
    volatile union U2 g_363;
    int32_t *g_379;
    int32_t **g_378;
    struct S0 ** volatile g_390;
    uint8_t g_437;
    struct S1 g_454;
    uint8_t *g_461;
    volatile union U3 g_468;
    struct S1 g_470[2];
    union U4 g_482;
    union U4 ** volatile g_483;
    union U4 *g_484[7][4][9];
    struct S1 g_485;
    int64_t g_488;
    union U3 ** volatile g_493;
    volatile struct S1 g_570[2][9][9];
    uint8_t g_623;
    struct S0 ** volatile g_656;
    volatile union U2 g_667;
    volatile uint64_t *g_669;
    volatile uint64_t **g_668;
    union U3 g_674[6][6];
    int64_t g_714[3][1][2];
    struct S0 g_730;
    uint16_t g_739;
    volatile union U2 g_757[9];
    struct S0 g_767;
    uint16_t g_806;
    volatile struct S0 g_820[6][4];
    uint16_t g_847;
    uint64_t **g_859;
    struct S0 g_906;
    volatile union U2 g_933;
    union U3 g_934;
    int16_t * volatile * volatile g_935;
    struct S1 g_942;
    uint32_t g_947[5];
    struct S0 g_948;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S5 * p_965);
struct S0 * func_2(int32_t  p_3, int64_t  p_4, uint32_t  p_5, uint64_t  p_6, struct S5 * p_965);
int32_t  func_10(int16_t  p_11, int16_t  p_12, struct S5 * p_965);
int16_t  func_13(int64_t  p_14, struct S5 * p_965);
int64_t  func_15(struct S0 * p_16, uint32_t  p_17, int8_t * p_18, int8_t * p_19, struct S5 * p_965);
struct S0 * func_20(uint64_t  p_21, struct S5 * p_965);
uint64_t  func_22(uint64_t  p_23, int8_t  p_24, int8_t  p_25, struct S0 * p_26, struct S5 * p_965);
int16_t  func_36(struct S0 * p_37, int16_t * p_38, int32_t  p_39, uint64_t  p_40, uint8_t  p_41, struct S5 * p_965);
struct S0 * func_42(uint16_t  p_43, uint32_t  p_44, int8_t  p_45, struct S5 * p_965);
int8_t  func_48(int8_t * p_49, int64_t  p_50, struct S5 * p_965);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_965->g_29 p_965->g_32 p_965->g_31 p_965->g_33.f1 p_965->g_33.f0 p_965->g_33.f2 p_965->g_33 p_965->g_55 p_965->g_91 p_965->g_138 p_965->g_146 p_965->g_154 p_965->g_54 p_965->g_167 p_965->g_219 p_965->g_224 p_965->g_226 p_965->g_175 p_965->g_303.f5 p_965->g_303.f1 p_965->g_341 p_965->g_363 p_965->g_165 p_965->g_303.f8 p_965->g_263.f5 p_965->g_303.f3 p_965->g_378 p_965->g_338 p_965->g_186.f7 p_965->g_303.f2 p_965->g_390 p_965->g_379 p_965->g_263.f1 p_965->g_186.f3 p_965->g_263.f3 p_965->g_218 p_965->g_303.f9 p_965->g_437 p_965->g_263.f2 p_965->g_454 p_965->g_468 p_965->g_470 p_965->g_461 p_965->g_263.f8 p_965->g_186.f1 p_965->g_485 p_965->g_493 p_965->g_341.f0 p_965->g_186.f8 p_965->g_674.f0 p_965->g_623 p_965->g_739 p_965->g_806 p_965->g_820 p_965->g_267.f0 p_965->g_847 p_965->g_906 p_965->g_656 p_965->g_757 p_965->g_933 p_965->g_934 p_965->g_935 p_965->g_942 p_965->g_948 p_965->g_129
 * writes: p_965->g_31 p_965->g_54 p_965->g_55 p_965->g_33.f1 p_965->g_91 p_965->g_33.f2 p_965->g_129 p_965->g_138 p_965->g_154 p_965->g_165 p_965->g_167 p_965->g_175 p_965->g_187 p_965->g_219 p_965->g_33 p_965->g_178.f1 p_965->g_218 p_965->g_178.f2 p_965->g_338 p_965->g_348 p_965->g_186.f3 p_965->g_378 p_965->g_32 p_965->g_186.f2 p_965->g_29 p_965->g_180 p_965->g_341.f1 p_965->g_437 p_965->g_461 p_965->g_263.f8 p_965->g_484 p_965->g_303 p_965->g_485.f2 p_965->g_485.f3 p_965->g_341.f0 p_965->g_379 p_965->g_470.f8 p_965->g_739 p_965->g_806 p_965->g_847 p_965->g_263.f2 p_965->g_482.f1 p_965->g_947
 */
uint32_t  func_1(struct S5 * p_965)
{ /* block id: 4 */
    int64_t l_7 = 0x596378555145CCB9L;
    int16_t *l_30 = &p_965->g_31;
    int8_t *l_769 = &p_965->g_485.f8;
    struct S0 **l_962 = (void*)0;
    struct S0 *l_963 = &p_965->g_906;
    int32_t *l_964 = &p_965->g_55;
    l_963 = func_2((l_7 , ((((safe_sub_func_uint32_t_u_u(1UL, func_10(func_13(func_15(func_20(func_22(l_7, ((safe_lshift_func_uint8_t_u_s(l_7, 4)) & (p_965->g_29 > ((*l_30) = 0x42C7L))), p_965->g_29, p_965->g_32, p_965), p_965), l_7, l_769, l_769, p_965), p_965), p_965->g_186[2][0].f8, p_965))) ^ 0x540817DDL) , 1L) >= p_965->g_674[0][4].f0)), l_7, p_965->g_454.f8, l_7, p_965);
    l_964 = l_964;
    return p_965->g_454.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_965->g_378 p_965->g_379 p_965->g_55 p_965->g_31 p_965->g_263.f1 p_965->g_623 p_965->g_186.f8 p_965->g_739 p_965->g_806 p_965->g_820 p_965->g_267.f0 p_965->g_226.f1 p_965->g_847 p_965->g_437 p_965->g_906 p_965->g_656 p_965->g_32 p_965->g_757 p_965->g_263.f2 p_965->g_29 p_965->g_933 p_965->g_934 p_965->g_935 p_965->g_470.f8 p_965->g_942 p_965->g_948 p_965->g_91 p_965->g_129
 * writes: p_965->g_55 p_965->g_31 p_965->g_470.f8 p_965->g_739 p_965->g_806 p_965->g_847 p_965->g_437 p_965->g_341.f1 p_965->g_33 p_965->g_379 p_965->g_263.f2 p_965->g_482.f1 p_965->g_947 p_965->g_91
 */
struct S0 * func_2(int32_t  p_3, int64_t  p_4, uint32_t  p_5, uint64_t  p_6, struct S5 * p_965)
{ /* block id: 344 */
    uint64_t l_775 = 18446744073709551615UL;
    int32_t l_781 = 0x7DBC06CDL;
    int32_t l_803[3];
    int16_t l_838 = 2L;
    int64_t l_843 = 0x2A25F463164DEF7EL;
    uint8_t *l_863[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint16_t *l_893[8][3][4] = {{{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2}},{{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2}},{{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2}},{{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2}},{{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2}},{{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2}},{{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2}},{{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2},{&p_965->g_739,&p_965->g_739,&p_965->g_847,&p_965->g_454.f2}}};
    uint16_t l_899 = 0xF08DL;
    uint16_t l_905[1][10][9] = {{{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL},{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL},{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL},{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL},{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL},{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL},{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL},{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL},{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL},{0xCFEDL,1UL,1UL,0xCFEDL,65526UL,65528UL,0xD6EDL,0UL,1UL}}};
    struct S0 *l_908[1][3][9] = {{{&p_965->g_767,&p_965->g_767,&p_965->g_767,&p_965->g_33,&p_965->g_767,&p_965->g_33,&p_965->g_767,&p_965->g_767,&p_965->g_767},{&p_965->g_767,&p_965->g_767,&p_965->g_767,&p_965->g_33,&p_965->g_767,&p_965->g_33,&p_965->g_767,&p_965->g_767,&p_965->g_767},{&p_965->g_767,&p_965->g_767,&p_965->g_767,&p_965->g_33,&p_965->g_767,&p_965->g_33,&p_965->g_767,&p_965->g_767,&p_965->g_767}}};
    struct S1 **l_914 = &p_965->g_187;
    struct S1 ***l_913 = &l_914;
    int16_t l_949 = 0x1A6FL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_803[i] = 1L;
lbl_850:
    (**p_965->g_378) &= p_3;
    for (p_965->g_31 = 1; (p_965->g_31 >= 0); p_965->g_31 -= 1)
    { /* block id: 348 */
        uint32_t l_786 = 0x6E4E3E91L;
        int32_t l_804[1][7][8] = {{{0x788AEEE2L,0x6220B8BBL,0x6220B8BBL,0x788AEEE2L,0x26CC0C63L,0L,0L,0x26CC0C63L},{0x788AEEE2L,0x6220B8BBL,0x6220B8BBL,0x788AEEE2L,0x26CC0C63L,0L,0L,0x26CC0C63L},{0x788AEEE2L,0x6220B8BBL,0x6220B8BBL,0x788AEEE2L,0x26CC0C63L,0L,0L,0x26CC0C63L},{0x788AEEE2L,0x6220B8BBL,0x6220B8BBL,0x788AEEE2L,0x26CC0C63L,0L,0L,0x26CC0C63L},{0x788AEEE2L,0x6220B8BBL,0x6220B8BBL,0x788AEEE2L,0x26CC0C63L,0L,0L,0x26CC0C63L},{0x788AEEE2L,0x6220B8BBL,0x6220B8BBL,0x788AEEE2L,0x26CC0C63L,0L,0L,0x26CC0C63L},{0x788AEEE2L,0x6220B8BBL,0x6220B8BBL,0x788AEEE2L,0x26CC0C63L,0L,0L,0x26CC0C63L}}};
        int16_t l_876 = 0x0AA8L;
        int32_t *l_896 = &l_804[0][3][4];
        int i, j, k;
        l_775--;
        for (p_4 = 3; (p_4 >= 0); p_4 -= 1)
        { /* block id: 352 */
            uint32_t l_778 = 0x8F28A646L;
            int8_t *l_799 = (void*)0;
            int8_t *l_800[10][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int32_t l_801 = 0L;
            int32_t l_805 = (-8L);
            int32_t l_841 = 0x78B21B25L;
            int32_t l_842[2];
            int32_t **l_870 = &p_965->g_379;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_842[i] = 0x1B6C44F4L;
            (*p_965->g_379) |= (((l_778 >= (safe_lshift_func_int8_t_s_u((l_781 = (p_965->g_263.f1 >= ((void*)0 == (*p_965->g_378)))), 3))) >= (safe_add_func_int8_t_s_s((65526UL != (safe_sub_func_int8_t_s_s(l_786, ((p_965->g_470[1].f8 = (safe_rshift_func_int16_t_s_s(p_965->g_623, (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s((l_801 = ((safe_add_func_int16_t_s_s(3L, (safe_mul_func_int8_t_s_s(l_786, l_775)))) , p_3)), 3)) == p_5) == (-1L)), p_965->g_186[2][0].f8)), p_3))))) ^ 0x36L)))), 0x41L))) && l_786);
            for (p_965->g_739 = 0; (p_965->g_739 <= 4); p_965->g_739 += 1)
            { /* block id: 359 */
                int32_t *l_802[5] = {&p_965->g_674[0][4].f2,&p_965->g_674[0][4].f2,&p_965->g_674[0][4].f2,&p_965->g_674[0][4].f2,&p_965->g_674[0][4].f2};
                int32_t l_840 = 0x7BEBB95CL;
                uint16_t *l_894 = &p_965->g_470[1].f2;
                struct S0 *l_902 = (void*)0;
                int i;
                if ((*p_965->g_379))
                    break;
                ++p_965->g_806;
                for (l_786 = 0; (l_786 <= 1); l_786 += 1)
                { /* block id: 364 */
                    union U4 *l_831 = &p_965->g_482;
                    int8_t **l_834 = &l_800[1][3][0];
                    int32_t l_837 = 0x5C03BDD6L;
                    int32_t l_839 = 0x4D40DD7EL;
                    int32_t l_844 = (-1L);
                    int32_t l_845 = 1L;
                    int32_t l_846 = (-2L);
                    uint64_t *l_857[6] = {&p_965->g_348,&p_965->g_348,&p_965->g_348,&p_965->g_348,&p_965->g_348,&p_965->g_348};
                    uint64_t **l_856 = &l_857[3];
                    int i;
                    for (l_801 = 0; (l_801 <= 1); l_801 += 1)
                    { /* block id: 367 */
                        uint64_t l_811 = 0xB946D5610B4F4254L;
                        volatile struct S1 *l_836 = &p_965->g_154;
                        volatile struct S1 **l_835 = &l_836;
                        int i, j, k;
                        l_803[0] |= ((safe_rshift_func_int16_t_s_u(((l_811 &= (*p_965->g_379)) <= (safe_add_func_uint32_t_u_u((p_4 <= (safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((+((safe_div_func_int64_t_s_s((((p_965->g_820[4][1] , (safe_mul_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(p_4, (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((void*)0 != l_831), (safe_mul_func_uint8_t_u_u((l_834 == (l_786 , (void*)0)), 0x8FL)))), 7)), p_965->g_267.f0)))) < 0L) || 0L), 1UL))) > 0x26L) && 0x29L), p_4)) != p_5)), p_965->g_226.f1)), 3))), 0x5F7E97A2L))), l_778)) != p_5);
                        if (p_4)
                            continue;
                        (*l_835) = &p_965->g_570[l_786][p_4][(p_965->g_31 + 3)];
                        p_965->g_847--;
                    }
                    if (l_775)
                        goto lbl_850;
                }
            }
        }
    }
    for (p_965->g_437 = (-6); (p_965->g_437 == 33); ++p_965->g_437)
    { /* block id: 403 */
        int32_t *l_907 = &l_803[2];
        l_905[0][3][3] = l_838;
        (**p_965->g_378) &= p_4;
        for (p_965->g_341.f1 = 0; (p_965->g_341.f1 <= 0); p_965->g_341.f1 += 1)
        { /* block id: 408 */
            (**p_965->g_656) = p_965->g_906;
            (*p_965->g_378) = l_907;
            for (p_965->g_31 = 0; (p_965->g_31 <= 0); p_965->g_31 += 1)
            { /* block id: 413 */
                return l_908[0][1][8];
            }
        }
        if ((*l_907))
            break;
    }
    if ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((&p_965->g_187 == ((*l_913) = &p_965->g_187)) ^ (p_965->g_757[4] , ((void*)0 != &p_965->g_437))), 0)), 0)))
    { /* block id: 420 */
        for (p_965->g_263.f2 = 0; (p_965->g_263.f2 != 31); ++p_965->g_263.f2)
        { /* block id: 423 */
            int32_t *l_917[5][4] = {{&l_803[1],&l_803[2],(void*)0,&l_803[2]},{&l_803[1],&l_803[2],(void*)0,&l_803[2]},{&l_803[1],&l_803[2],(void*)0,&l_803[2]},{&l_803[1],&l_803[2],(void*)0,&l_803[2]},{&l_803[1],&l_803[2],(void*)0,&l_803[2]}};
            int i, j;
            l_917[4][0] = (void*)0;
        }
        (*p_965->g_378) = &l_803[2];
        return (*p_965->g_656);
    }
    else
    { /* block id: 428 */
        int8_t l_920 = 0x67L;
        uint64_t l_925[4][2] = {{0x15E3ECAEA6FB3DB8L,0x15E3ECAEA6FB3DB8L},{0x15E3ECAEA6FB3DB8L,0x15E3ECAEA6FB3DB8L},{0x15E3ECAEA6FB3DB8L,0x15E3ECAEA6FB3DB8L},{0x15E3ECAEA6FB3DB8L,0x15E3ECAEA6FB3DB8L}};
        int32_t ***l_928 = &p_965->g_378;
        int32_t ****l_929 = (void*)0;
        int32_t ***l_930 = &p_965->g_378;
        int64_t *l_936 = &p_965->g_714[1][0][0];
        int16_t *l_941 = &p_965->g_33.f1;
        uint16_t l_945 = 3UL;
        uint32_t *l_946 = &p_965->g_947[4];
        int32_t *l_950 = &l_781;
        int i, j;
        (*p_965->g_379) = (safe_lshift_func_int16_t_s_u(((l_920 , (safe_sub_func_int32_t_s_s(((((safe_sub_func_int16_t_s_s(l_925[0][1], p_965->g_29)) , (safe_lshift_func_uint16_t_u_s(((((l_928 = l_928) == (l_930 = (void*)0)) <= (safe_sub_func_int16_t_s_s((p_965->g_933 , (((p_965->g_470[1].f8 &= (p_965->g_934 , (((((void*)0 == p_965->g_935) || 0x40L) , l_936) == (void*)0))) || 255UL) || l_775)), 9UL))) ^ p_5), l_803[2]))) ^ p_4) , 0x71550A68L), p_965->g_623))) , p_5), l_838));
        (*l_950) &= ((safe_rshift_func_uint16_t_u_s(p_4, ((*l_941) = (safe_lshift_func_uint16_t_u_s(p_965->g_906.f1, l_803[2]))))) >= (p_965->g_942 , ((p_4 ^ ((safe_mod_func_int16_t_s_s((((((((*l_946) = (p_965->g_482.f1 = ((p_6 , (l_803[1] > (~((p_965->g_739 , &p_965->g_91[4][2]) != &p_965->g_437)))) != l_945))) , p_965->g_948) , l_949) & l_775) || p_4) == p_4), (-1L))) & 0x7C8BL)) != 0x6CL)));
        for (l_838 = 0; (l_838 <= (-14)); --l_838)
        { /* block id: 439 */
            uint8_t **l_955 = &l_863[4][4];
            uint8_t ***l_956 = &l_955;
            uint8_t **l_957[3][2] = {{&p_965->g_461,&p_965->g_461},{&p_965->g_461,&p_965->g_461},{&p_965->g_461,&p_965->g_461}};
            int32_t l_958 = 0x35FA6E2CL;
            int i, j;
            (*p_965->g_379) ^= (((p_965->g_91[2][0] |= ((*l_950) , 0x2BL)) , (~(safe_mul_func_uint8_t_u_u((((((void*)0 == l_946) <= ((((*l_956) = l_955) == l_957[2][0]) && (-6L))) > l_958) , (safe_div_func_int64_t_s_s((((safe_unary_minus_func_int8_t_s((p_965->g_942.f9 || p_965->g_129))) && (*l_950)) , 1L), (-10L)))), l_958)))) < l_905[0][3][3]);
        }
    }
    return l_908[0][2][7];
}


/* ------------------------------------------ */
/* 
 * reads : p_965->g_378
 * writes: p_965->g_379
 */
int32_t  func_10(int16_t  p_11, int16_t  p_12, struct S5 * p_965)
{ /* block id: 341 */
    int32_t *l_774 = &p_965->g_55;
    (*p_965->g_378) = l_774;
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_13(int64_t  p_14, struct S5 * p_965)
{ /* block id: 338 */
    int32_t l_773 = 0L;
    l_773 ^= p_14;
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_965->g_341.f0 p_965->g_378
 * writes: p_965->g_341.f0 p_965->g_379
 */
int64_t  func_15(struct S0 * p_16, uint32_t  p_17, int8_t * p_18, int8_t * p_19, struct S5 * p_965)
{ /* block id: 330 */
    for (p_965->g_341.f0 = 0; (p_965->g_341.f0 <= 20); p_965->g_341.f0 = safe_add_func_uint16_t_u_u(p_965->g_341.f0, 6))
    { /* block id: 333 */
        int32_t *l_772 = &p_965->g_55;
        (*p_965->g_378) = l_772;
        return p_17;
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_965->g_341 p_965->g_226.f0 p_965->g_55 p_965->g_363 p_965->g_165 p_965->g_303.f8 p_965->g_263.f5 p_965->g_303.f3 p_965->g_33.f2 p_965->g_378 p_965->g_338 p_965->g_186.f7 p_965->g_167 p_965->g_33.f0 p_965->g_54 p_965->g_138 p_965->g_303.f2 p_965->g_390 p_965->g_379 p_965->g_263.f1 p_965->g_29 p_965->g_186.f3 p_965->g_263.f3 p_965->g_218 p_965->g_226.f1 p_965->g_219 p_965->g_303.f9 p_965->g_226.f2 p_965->g_91 p_965->g_437 p_965->g_263.f2 p_965->g_454 p_965->g_154.f1 p_965->g_468 p_965->g_470 p_965->g_461 p_965->g_263.f8 p_965->g_186.f1 p_965->g_485 p_965->g_493 p_965->g_341.f0
 * writes: p_965->g_178.f2 p_965->g_338 p_965->g_348 p_965->g_55 p_965->g_186.f3 p_965->g_378 p_965->g_219 p_965->g_138 p_965->g_32 p_965->g_186.f2 p_965->g_91 p_965->g_29 p_965->g_180 p_965->g_341.f1 p_965->g_437 p_965->g_129 p_965->g_461 p_965->g_263.f8 p_965->g_484 p_965->g_303 p_965->g_485.f2 p_965->g_485.f3 p_965->g_341.f0 p_965->g_379
 */
struct S0 * func_20(uint64_t  p_21, struct S5 * p_965)
{ /* block id: 148 */
    uint32_t l_344 = 4294967295UL;
    uint16_t l_349 = 1UL;
    int32_t *l_350 = &p_965->g_341.f1;
    int32_t l_365 = (-5L);
    int64_t l_373 = 1L;
    struct S0 *l_388 = &p_965->g_33;
    union U3 *l_430 = &p_965->g_341;
    union U4 *l_481[10] = {&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482};
    uint16_t l_548 = 0x2606L;
    int32_t l_614[2];
    int8_t l_617 = 0x5AL;
    uint32_t l_657 = 2UL;
    uint64_t *l_666 = (void*)0;
    uint64_t **l_665 = &l_666;
    uint32_t l_684 = 4294967295UL;
    int32_t l_711 = 0L;
    uint32_t l_740 = 4294967295UL;
    struct S0 *l_766 = &p_965->g_767;
    int i;
    for (i = 0; i < 2; i++)
        l_614[i] = 0x4658257CL;
lbl_391:
    for (p_21 = 0; (p_21 <= 3); p_21 += 1)
    { /* block id: 151 */
        uint64_t *l_332 = &p_965->g_165[4][2];
        uint64_t **l_331[9] = {(void*)0,&l_332,(void*)0,(void*)0,&l_332,(void*)0,(void*)0,&l_332,(void*)0};
        int32_t l_333 = (-7L);
        int32_t *l_334[10][9][2] = {{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}},{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}},{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}},{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}},{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}},{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}},{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}},{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}},{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}},{{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333},{&l_333,&l_333}}};
        int32_t *l_337 = &p_965->g_338[2][8];
        uint8_t l_345 = 0x2AL;
        uint64_t *l_346 = (void*)0;
        uint64_t *l_347[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_347[i] = &p_965->g_348;
        p_965->g_55 ^= ((l_349 |= (((-1L) != ((((p_965->g_178.f2 = (safe_sub_func_uint64_t_u_u(((void*)0 != l_331[6]), l_333))) >= (safe_sub_func_uint64_t_u_u((((((*l_337) = 0x184C420AL) , &p_965->g_180) != (void*)0) && ((p_965->g_348 = ((safe_rshift_func_uint8_t_u_s(((((p_965->g_341 , (safe_div_func_uint64_t_u_u((&p_965->g_165[1][0] == &p_965->g_167), 0x428C4DE6F619C15DL))) >= l_344) & l_345) >= p_21), 0)) , p_21)) , p_21)), 1L))) ^ p_21) || p_965->g_226.f0)) < 0x56D14A0CL)) && l_349);
        l_350 = &p_965->g_55;
        for (p_965->g_55 = 0; (p_965->g_55 <= 3); p_965->g_55 += 1)
        { /* block id: 160 */
            int32_t *l_364 = &p_965->g_338[7][8];
            int i, j;
            l_365 |= (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(9L, ((((((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((((0xD9L | (((safe_mul_func_int8_t_s_s(((((p_965->g_363 , (p_965->g_165[(p_965->g_55 + 1)][p_21] , p_21)) | (&p_965->g_91[7][0] == (p_21 , &l_345))) , ((0x496B3881L | (*l_350)) != 0x4CEFL)) >= (*l_350)), (*l_350))) , p_965->g_303[4][1].f8) < p_965->g_165[(p_965->g_55 + 1)][p_21])) , p_965->g_263.f5) & 0L), p_965->g_303[4][1].f8)), 0UL)), 0x4836F794D402D4B5L)) && p_21) , l_364) != (void*)0) ^ (*l_350)) < 1UL))) & p_965->g_303[4][1].f3) >= p_21), p_965->g_33.f2));
        }
    }
    for (l_349 = (-7); (l_349 >= 36); l_349 = safe_add_func_uint64_t_u_u(l_349, 2))
    { /* block id: 166 */
        uint64_t *l_370 = &p_965->g_186[2][0].f3;
        int32_t ***l_380 = &p_965->g_378;
        uint64_t *l_384 = (void*)0;
        uint64_t **l_383 = &l_384;
        uint32_t *l_385 = &p_965->g_219;
        int32_t **l_386 = &l_350;
        uint16_t *l_387 = &p_965->g_138;
        struct S0 **l_389 = &l_388;
        (*p_965->g_390) = ((*l_389) = ((((safe_add_func_int16_t_s_s(((p_21 & ((*l_370) = 18446744073709551610UL)) < (safe_mul_func_int8_t_s_s(l_373, ((((((*l_387) &= ((safe_mul_func_uint8_t_u_u((((((safe_sub_func_int32_t_s_s(p_21, (((*l_380) = p_965->g_378) != ((((*l_385) = ((safe_rshift_func_uint8_t_u_s(p_965->g_338[2][8], 0)) >= (((p_965->g_186[2][0].f7 && (((*l_383) = &p_21) == (void*)0)) < 18446744073709551615UL) & p_965->g_167))) & 2UL) , l_386)))) || p_965->g_33.f0) && p_21) <= p_21) | p_965->g_54), (-1L))) > 0x530089A70A286CEBL)) , p_21) ^ p_965->g_303[4][1].f2) < p_965->g_165[4][1]) < 1UL)))), p_21)) == (-1L)) >= p_21) , l_388));
        if (p_965->g_341.f0)
            goto lbl_391;
    }
    if (l_344)
    { /* block id: 176 */
        int8_t l_401 = 0x6FL;
        uint16_t *l_402 = (void*)0;
        int32_t l_403[8][1][8] = {{{(-1L),(-1L),0x470A1976L,0x1E232B54L,(-1L),0x1E232B54L,0x470A1976L,(-1L)}},{{(-1L),(-1L),0x470A1976L,0x1E232B54L,(-1L),0x1E232B54L,0x470A1976L,(-1L)}},{{(-1L),(-1L),0x470A1976L,0x1E232B54L,(-1L),0x1E232B54L,0x470A1976L,(-1L)}},{{(-1L),(-1L),0x470A1976L,0x1E232B54L,(-1L),0x1E232B54L,0x470A1976L,(-1L)}},{{(-1L),(-1L),0x470A1976L,0x1E232B54L,(-1L),0x1E232B54L,0x470A1976L,(-1L)}},{{(-1L),(-1L),0x470A1976L,0x1E232B54L,(-1L),0x1E232B54L,0x470A1976L,(-1L)}},{{(-1L),(-1L),0x470A1976L,0x1E232B54L,(-1L),0x1E232B54L,0x470A1976L,(-1L)}},{{(-1L),(-1L),0x470A1976L,0x1E232B54L,(-1L),0x1E232B54L,0x470A1976L,(-1L)}}};
        int64_t *l_418[2];
        int32_t ***l_523 = &p_965->g_378;
        uint8_t *l_526 = &p_965->g_91[7][4];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_418[i] = &p_965->g_129;
        if ((**p_965->g_378))
        { /* block id: 177 */
            int32_t l_394[5][5][7] = {{{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)}},{{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)}},{{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)}},{{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)}},{{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)},{(-9L),1L,(-4L),0x4AEC5BDDL,0x630100DDL,8L,(-9L)}}};
            int32_t **l_400 = &l_350;
            uint8_t *l_404 = &p_965->g_91[4][0];
            int32_t *l_405 = &p_965->g_341.f2;
            int32_t *l_406 = (void*)0;
            int32_t *l_407 = &p_965->g_341.f2;
            int32_t *l_408 = &l_365;
            int i, j, k;
            (*l_408) &= (p_965->g_303[4][1].f3 || (p_21 <= ((((*l_404) = (((safe_mul_func_int8_t_s_s(l_394[3][4][5], ((((!((p_965->g_186[2][0].f2 = (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((p_965->g_263.f1 , ((safe_unary_minus_func_int16_t_s(((!p_965->g_226.f0) , (l_401 ^= (((p_965->g_263.f5 && (((l_400 != (((p_21 != (&p_965->g_138 == &p_965->g_138)) >= p_21) , &p_965->g_379)) < 0x13683FA0L) | p_21)) | p_965->g_29) != (**p_965->g_378)))))) , (void*)0)) != l_402), p_965->g_186[2][0].f3)), p_965->g_263.f3))) ^ p_965->g_54)) | p_965->g_338[2][8]) >= p_965->g_218) | 18446744073709551615UL))) != p_965->g_226.f1) == l_403[7][0][7])) <= p_965->g_219) && l_344)));
            for (p_965->g_29 = 25; (p_965->g_29 != 25); p_965->g_29 = safe_add_func_int64_t_s_s(p_965->g_29, 3))
            { /* block id: 184 */
                union U3 *l_415 = (void*)0;
                int32_t **l_435 = &l_407;
                for (p_965->g_219 = 0; (p_965->g_219 <= 21); p_965->g_219++)
                { /* block id: 187 */
                    union U3 **l_413 = (void*)0;
                    union U3 **l_414 = &p_965->g_180;
                    int64_t *l_419 = &p_965->g_129;
                    uint8_t *l_436 = &p_965->g_437;
                    int8_t *l_438 = (void*)0;
                    int32_t l_443 = (-9L);
                    (**l_400) = (((*l_414) = (void*)0) == l_415);
                    if (((safe_lshift_func_int16_t_s_u(p_965->g_263.f5, 4)) && (((l_418[0] != l_419) , (safe_mul_func_int8_t_s_s((l_403[7][0][6] = (safe_sub_func_uint8_t_u_u((0x26EFFDCFL == (safe_lshift_func_uint8_t_u_u(((*l_436) |= ((*l_404) &= (safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((((void*)0 != l_430) != ((((safe_div_func_uint64_t_u_u(p_965->g_303[4][1].f9, (safe_add_func_int8_t_s_s(((void*)0 != &p_965->g_138), p_965->g_226.f2)))) || p_21) , (void*)0) == l_435)), (-1L))), p_965->g_186[2][0].f3)))), p_965->g_55))), 0UL))), (-2L)))) , p_965->g_263.f2)))
                    { /* block id: 193 */
                        int8_t **l_457 = &l_438;
                        uint8_t **l_460[3][3];
                        int32_t ***l_467 = &p_965->g_378;
                        int32_t ****l_466 = &l_467;
                        int32_t ***l_469 = &l_435;
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_460[i][j] = (void*)0;
                        }
                        (*p_965->g_379) = (safe_mul_func_int16_t_s_s((((safe_div_func_uint16_t_u_u((((p_21 & l_443) != (((((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((5UL == ((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(0x42919148L, 0x01C7DDD0L)), (safe_add_func_uint64_t_u_u((p_965->g_454 , p_21), p_965->g_226.f1)))) && ((((((safe_lshift_func_uint16_t_u_u((((*l_419) = ((((*l_457) = (void*)0) == &p_965->g_175) < (*l_408))) ^ 18446744073709551607UL), p_965->g_167)) <= 0L) > l_403[5][0][3]) > p_965->g_154.f1) | p_21) , p_21))), 1UL)), l_403[7][0][7])) , 0x14555647L) && 0x04CC868BL) , l_443) < p_965->g_138)) , l_443), p_21)) > l_344) != p_21), 0x4505L));
                        (*l_400) = (*p_965->g_378);
                        l_403[6][0][2] = (((((((+((((*l_350) = p_21) == (safe_mul_func_int16_t_s_s(((p_965->g_461 = &p_965->g_91[8][4]) != l_436), (-1L)))) && ((safe_mod_func_uint8_t_u_u((((*l_404) = (((0x0A7B43A2L == (((*l_466) = &p_965->g_378) == (p_965->g_468 , l_469))) || (p_965->g_470[1] , 0xF41160D7L)) <= p_21)) | l_401), p_21)) ^ 0x009BL))) , 0x4A1590FD0B3711F9L) <= p_965->g_29) , p_21) && (*p_965->g_461)) > 4UL) , 0x520D8DD8L);
                    }
                    else
                    { /* block id: 203 */
                        int8_t *l_477 = &l_401;
                        int8_t *l_478 = &p_965->g_263.f8;
                        if (p_21)
                            break;
                        (**p_965->g_378) = ((*l_408) = (1UL && ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((p_21 <= ((*l_478) &= ((*l_477) = (safe_add_func_int64_t_s_s(p_21, 0x258A5554F3AF9638L))))) != (safe_mul_func_uint8_t_u_u(l_403[7][0][7], p_21))), 3L)), ((l_443 && p_965->g_186[2][0].f1) , 0xA5E1L))) < 0x1C4DL)));
                    }
                    p_965->g_484[1][3][6] = l_481[5];
                    (*l_435) = &l_443;
                }
            }
        }
        else
        { /* block id: 214 */
            uint32_t l_489 = 0xD4F3BF08L;
            for (l_344 = 0; (l_344 <= 0); l_344 += 1)
            { /* block id: 217 */
                struct S1 *l_486 = &p_965->g_303[0][7];
                (*l_486) = p_965->g_485;
                for (p_965->g_485.f2 = 0; (p_965->g_485.f2 <= 0); p_965->g_485.f2 += 1)
                { /* block id: 221 */
                    int32_t *l_487[3];
                    union U3 *l_492 = &p_965->g_341;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_487[i] = &p_965->g_341.f1;
                    l_489++;
                    for (p_965->g_485.f3 = 0; (p_965->g_485.f3 <= 0); p_965->g_485.f3 += 1)
                    { /* block id: 225 */
                        (*p_965->g_493) = l_492;
                    }
                }
            }
            for (p_965->g_341.f0 = 3; (p_965->g_341.f0 >= 43); p_965->g_341.f0 = safe_add_func_uint8_t_u_u(p_965->g_341.f0, 7))
            { /* block id: 232 */
                uint16_t l_505 = 0UL;
                int32_t *l_532 = &l_365;
                for (p_965->g_485.f3 = 0; (p_965->g_485.f3 >= 13); p_965->g_485.f3 = safe_add_func_uint16_t_u_u(p_965->g_485.f3, 3))
                { /* block id: 235 */
                    int32_t *l_498 = (void*)0;
                    int32_t *l_499 = &l_403[7][0][4];
                    int32_t *l_500 = (void*)0;
                    int32_t *l_501 = &p_965->g_178.f2;
                    int32_t *l_502 = &l_403[0][0][1];
                    int32_t *l_503 = &p_965->g_178.f2;
                    int32_t *l_504[8][2] = {{&l_403[1][0][4],&l_365},{&l_403[1][0][4],&l_365},{&l_403[1][0][4],&l_365},{&l_403[1][0][4],&l_365},{&l_403[1][0][4],&l_365},{&l_403[1][0][4],&l_365},{&l_403[1][0][4],&l_365},{&l_403[1][0][4],&l_365}};
                    uint8_t *l_519[7] = {&p_965->g_437,&p_965->g_437,&p_965->g_437,&p_965->g_437,&p_965->g_437,&p_965->g_437,&p_965->g_437};
                    int i, j;
                    l_505++;
                }
                (**l_523) = l_532;
            }
        }
    }
    else
    { /* block id: 255 */
        int32_t ***l_543[10][9] = {{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0},{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0},{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0},{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0},{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0},{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0},{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0},{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0},{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0},{(void*)0,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,&p_965->g_378,(void*)0,&p_965->g_378,(void*)0}};
        int32_t ****l_542 = &l_543[8][8];
        int32_t l_547 = 0x0C585A82L;
        uint32_t *l_567 = &p_965->g_219;
        int8_t l_654[1];
        int8_t *l_719 = &l_654[0];
        int8_t **l_718 = &l_719;
        struct S1 **l_768 = (void*)0;
        int i, j;
        for (i = 0; i < 1; i++)
            l_654[i] = (-5L);
        (**p_965->g_378) = ((-2L) & p_965->g_437);
        for (p_965->g_29 = (-22); (p_965->g_29 < (-30)); p_965->g_29--)
        { /* block id: 259 */
            uint32_t l_535[3][7][1] = {{{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L}},{{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L}},{{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L},{0x362C9D94L}}};
            int32_t ***l_541 = &p_965->g_378;
            int32_t ****l_540 = &l_541;
            uint64_t *l_544[2];
            uint8_t *l_566 = &p_965->g_437;
            int16_t *l_602[2];
            int16_t **l_601[6];
            int32_t l_613 = 0x6E67615BL;
            int32_t l_616 = (-10L);
            int32_t l_618 = (-1L);
            int32_t l_619 = 0L;
            int32_t l_620[3];
            int32_t l_622 = 0x19DAADD9L;
            union U4 *l_662 = &p_965->g_482;
            struct S0 **l_763 = (void*)0;
            struct S0 **l_764 = (void*)0;
            struct S0 **l_765[10][5][4] = {{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}},{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}},{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}},{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}},{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}},{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}},{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}},{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}},{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}},{{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388},{&p_965->g_32,&l_388,&p_965->g_32,&l_388}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_544[i] = &p_965->g_485.f3;
            for (i = 0; i < 2; i++)
                l_602[i] = &p_965->g_226.f1;
            for (i = 0; i < 6; i++)
                l_601[i] = &l_602[1];
            for (i = 0; i < 3; i++)
                l_620[i] = 0x22C96C88L;
            (1 + 1);
        }
    }
    (**p_965->g_378) = (*p_965->g_379);
    return l_766;
}


/* ------------------------------------------ */
/* 
 * reads : p_965->g_31 p_965->g_33.f1 p_965->g_33.f0 p_965->g_33.f2 p_965->g_32 p_965->g_33 p_965->g_29 p_965->g_55 p_965->g_91 p_965->g_138 p_965->g_146 p_965->g_154 p_965->g_54 p_965->g_167 p_965->g_219 p_965->g_224 p_965->g_226 p_965->g_175 p_965->g_303.f5 p_965->g_303.f1
 * writes: p_965->g_31 p_965->g_54 p_965->g_55 p_965->g_33.f1 p_965->g_91 p_965->g_33.f2 p_965->g_129 p_965->g_138 p_965->g_154 p_965->g_165 p_965->g_167 p_965->g_175 p_965->g_187 p_965->g_219 p_965->g_33 p_965->g_178.f1 p_965->g_218
 */
uint64_t  func_22(uint64_t  p_23, int8_t  p_24, int8_t  p_25, struct S0 * p_26, struct S5 * p_965)
{ /* block id: 6 */
    int16_t *l_51 = &p_965->g_31;
    uint64_t *l_52 = (void*)0;
    uint64_t *l_53 = &p_965->g_54;
    int32_t l_57 = 0x3E4F9F01L;
    int16_t *l_97 = (void*)0;
    int64_t *l_327 = &p_965->g_218;
    int32_t l_328 = 4L;
    l_328 |= (((*l_327) = (((((safe_sub_func_int16_t_s_s(func_36(func_42(p_23, (safe_lshift_func_int8_t_s_u(func_48(&p_24, (((*l_51) |= (0L < (p_23 > p_25))) < (((p_965->g_55 = (0x7DB40437E10320BAL || ((*l_53) = p_965->g_33.f1))) & ((safe_unary_minus_func_int16_t_s((0x32L == ((p_965->g_33.f0 <= p_25) | 0UL)))) , l_57)) != l_57)), p_965), l_57)), p_965->g_33.f2, p_965), l_97, l_57, p_965->g_33.f2, l_57, p_965), 0x0A20L)) | p_23) <= p_23) , p_23) , p_23)) & l_57);
    return l_328;
}


/* ------------------------------------------ */
/* 
 * reads : p_965->g_55 p_965->g_33.f2 p_965->g_91 p_965->g_31 p_965->g_138 p_965->g_33.f0 p_965->g_146 p_965->g_154 p_965->g_54 p_965->g_167 p_965->g_219 p_965->g_224 p_965->g_32 p_965->g_226 p_965->g_175 p_965->g_33 p_965->g_303.f5 p_965->g_303.f1 p_965->g_29
 * writes: p_965->g_33.f2 p_965->g_54 p_965->g_129 p_965->g_55 p_965->g_33.f1 p_965->g_138 p_965->g_31 p_965->g_154 p_965->g_165 p_965->g_167 p_965->g_175 p_965->g_187 p_965->g_219 p_965->g_33 p_965->g_178.f1
 */
int16_t  func_36(struct S0 * p_37, int16_t * p_38, int32_t  p_39, uint64_t  p_40, uint8_t  p_41, struct S5 * p_965)
{ /* block id: 27 */
    int32_t l_100 = 0L;
    int32_t l_103 = 0x03560E5BL;
    int16_t *l_151 = &p_965->g_33.f1;
    union U3 *l_177[3];
    struct S1 *l_188 = &p_965->g_186[2][0];
    int32_t l_214[10] = {0x50AB60F1L,0x03615999L,0x129C7174L,0x03615999L,0x50AB60F1L,0x50AB60F1L,0x03615999L,0x129C7174L,0x03615999L,0x50AB60F1L};
    uint8_t l_326[3][5][4] = {{{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL}},{{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL}},{{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL},{1UL,250UL,250UL,1UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_177[i] = &p_965->g_178;
    if ((((p_40 , &p_965->g_31) == (void*)0) == (safe_add_func_int8_t_s_s(0x39L, ((((p_41 > (-1L)) || (l_100 , p_965->g_55)) | (l_103 |= (safe_div_func_int8_t_s_s(p_40, 0x0EL)))) || l_103)))))
    { /* block id: 29 */
        return l_100;
    }
    else
    { /* block id: 31 */
        uint8_t l_114[10] = {1UL,0x0EL,1UL,0x0EL,1UL,1UL,0x0EL,1UL,0x0EL,1UL};
        int32_t l_157 = 1L;
        uint64_t l_176 = 18446744073709551615UL;
        int32_t l_205 = (-8L);
        int32_t l_212 = 9L;
        int32_t l_217 = 6L;
        int32_t **l_237 = (void*)0;
        int32_t ***l_236[9] = {&l_237,&l_237,&l_237,&l_237,&l_237,&l_237,&l_237,&l_237,&l_237};
        uint8_t l_309 = 0x7CL;
        int i;
        if ((safe_unary_minus_func_int64_t_s(0x39AC9426B2C3BF42L)))
        { /* block id: 32 */
            uint32_t l_122 = 0xD5AC3C99L;
            int32_t l_136[10];
            int8_t *l_184 = &p_965->g_175;
            int32_t *l_230 = &p_965->g_55;
            int32_t **l_229 = &l_230;
            int32_t **l_233[2][5][10] = {{{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0},{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0},{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0},{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0},{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0}},{{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0},{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0},{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0},{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0},{&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,(void*)0,(void*)0}}};
            int16_t *l_268 = &p_965->g_226.f1;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_136[i] = 0x32AAFAE5L;
            for (p_965->g_33.f2 = 23; (p_965->g_33.f2 >= 4); --p_965->g_33.f2)
            { /* block id: 35 */
                int32_t l_111 = 1L;
                uint64_t *l_115 = &p_965->g_54;
                int64_t *l_127 = (void*)0;
                int64_t *l_128[5][6] = {{&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129},{&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129},{&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129},{&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129},{&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129,&p_965->g_129}};
                int32_t *l_131 = &p_965->g_55;
                int32_t l_135 = 0x44E6814EL;
                int i, j;
                (*l_131) ^= ((((((((*l_115) = (safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s(l_111, (safe_div_func_uint32_t_u_u(p_965->g_91[8][0], l_114[0])))), p_40))) ^ ((safe_rshift_func_uint8_t_u_s(((~0x4FL) || (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(l_122, (((l_103 && (p_965->g_129 = ((0UL & (safe_rshift_func_int8_t_s_s(0x00L, p_965->g_31))) > 9L))) || l_111) > 0L))) != p_965->g_91[6][4]), l_103))), p_41)) & p_965->g_33.f2)) > 0x5BA4L) < 0x48341D41L) & 18446744073709551615UL) & p_965->g_91[3][0]) == 0xE2A0AD3FL);
                (*l_131) |= (l_122 != ((void*)0 != l_131));
                for (p_965->g_33.f1 = 0; (p_965->g_33.f1 < 20); p_965->g_33.f1 = safe_add_func_int64_t_s_s(p_965->g_33.f1, 5))
                { /* block id: 42 */
                    int32_t l_137 = 0x29EFAAE2L;
                    uint64_t *l_164 = &p_965->g_165[4][1];
                    uint64_t *l_166 = &p_965->g_167;
                    int8_t *l_174 = &p_965->g_175;
                    union U3 **l_181 = &l_177[0];
                    for (p_965->g_54 = 0; (p_965->g_54 <= 4); p_965->g_54 += 1)
                    { /* block id: 45 */
                        int32_t *l_134[8][7] = {{&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55},{&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55},{&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55},{&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55},{&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55},{&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55},{&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55},{&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55,&p_965->g_55}};
                        int i, j;
                        --p_965->g_138;
                    }
                    for (p_41 = 0; (p_41 == 15); p_41++)
                    { /* block id: 50 */
                        int16_t *l_143 = &p_965->g_31;
                        (*l_131) ^= ((((l_103 & (((*l_143) &= 0x36CFL) < p_965->g_33.f0)) || (+(((l_136[1] ^= (p_39 < (safe_lshift_func_uint16_t_u_s((p_965->g_146 , (safe_sub_func_uint16_t_u_u(((l_137 <= (l_151 == &p_965->g_31)) < (p_965->g_33.f0 > p_965->g_91[7][4])), 0xD686L))), 13)))) , (-6L)) <= 0x5FL))) & l_122) > l_137);
                    }
                    for (p_39 = (-1); (p_39 <= (-19)); p_39--)
                    { /* block id: 57 */
                        volatile struct S1 *l_155 = (void*)0;
                        volatile struct S1 *l_156 = &p_965->g_154;
                        (*l_156) = p_965->g_154;
                        l_157 = (-2L);
                    }
                    (*l_181) = ((((safe_div_func_int64_t_s_s((((safe_div_func_uint8_t_u_u(l_100, (l_114[3] && (((*l_164) = ((*l_115)++)) | ((*l_166) &= (*l_131)))))) && p_39) , (p_39 || (safe_add_func_int8_t_s_s(((*l_174) = ((safe_rshift_func_int16_t_s_u((!((safe_rshift_func_uint16_t_u_s(((void*)0 != &p_965->g_154), 11)) != ((void*)0 == p_37))), 7)) >= (-1L))), l_136[1])))), 1L)) == l_176) != 0x70L) , l_177[0]);
                }
            }
            if ((safe_div_func_int8_t_s_s(((*l_184) = l_122), (p_965->g_33.f2 | 1L))))
            { /* block id: 69 */
                struct S1 *l_185[4][8][3] = {{{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]}},{{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]}},{{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]}},{{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]},{&p_965->g_186[2][0],&p_965->g_186[2][0],&p_965->g_186[2][0]}}};
                int64_t l_199 = 0x7C74B46092D1FD33L;
                int32_t l_209 = (-4L);
                int32_t l_210 = 1L;
                int32_t l_213[6] = {1L,1L,1L,1L,1L,1L};
                int16_t l_222 = 0L;
                uint32_t l_238 = 1UL;
                int8_t *l_239 = &p_965->g_186[2][0].f8;
                union U3 **l_277 = &l_177[0];
                uint8_t l_290[9];
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_290[i] = 9UL;
                p_965->g_187 = l_185[3][2][2];
                if (p_39)
                { /* block id: 71 */
                    struct S1 **l_189 = &p_965->g_187;
                    int32_t l_206 = 0x79BD9F56L;
                    int32_t l_207 = 4L;
                    int32_t l_208 = 0x1F8D5100L;
                    int32_t l_211 = (-1L);
                    int32_t l_215 = 0x7494586FL;
                    int32_t l_216 = 2L;
                    (*l_189) = l_188;
                    for (p_40 = 0; (p_40 >= 2); p_40 = safe_add_func_uint32_t_u_u(p_40, 1))
                    { /* block id: 75 */
                        int32_t *l_192 = &l_136[9];
                        int32_t *l_193 = &l_136[1];
                        int32_t *l_194 = &l_103;
                        int32_t *l_195 = &l_100;
                        int32_t *l_196 = &l_157;
                        int32_t *l_197 = &p_965->g_55;
                        int32_t *l_198 = &l_136[1];
                        int32_t *l_200 = &l_136[1];
                        int32_t *l_201 = &l_157;
                        int32_t *l_202 = &l_136[1];
                        int32_t *l_203 = &p_965->g_55;
                        int32_t *l_204[4] = {&l_157,&l_157,&l_157,&l_157};
                        int i;
                        --p_965->g_219;
                    }
                }
                else
                { /* block id: 78 */
                    int32_t *l_223[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_223[i] = (void*)0;
                    l_217 |= l_222;
                    l_214[7] = 0L;
                    for (p_41 = 0; (p_41 <= 0); p_41 += 1)
                    { /* block id: 83 */
                        int32_t **l_225 = &l_223[2];
                        l_214[0] &= l_114[0];
                        if (p_965->g_154.f9)
                            break;
                        (*p_965->g_32) = p_965->g_224;
                        (*l_225) = &p_965->g_55;
                    }
                }
                (*p_37) = p_965->g_226;
                for (p_965->g_175 = 0; (p_965->g_175 <= 0); p_965->g_175 += 1)
                { /* block id: 93 */
                    int32_t **l_232 = (void*)0;
                    int32_t ***l_231[6][6] = {{&l_232,&l_232,&l_232,&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232,&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232,&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232,&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232,&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232,&l_232,&l_232,&l_232}};
                    uint32_t l_264 = 0UL;
                    int i, j;
                    (1 + 1);
                }
            }
            else
            { /* block id: 128 */
                int32_t l_310 = 2L;
                (**l_229) = p_965->g_154.f4;
                l_310 &= ((*p_965->g_32) , ((*l_230) ^= p_965->g_154.f5));
            }
            (*l_230) |= 9L;
        }
        else
        { /* block id: 134 */
            uint8_t *l_315 = &l_114[0];
            uint32_t l_324 = 0x3DEE7B1DL;
            int64_t l_325 = 0x45D8D414A3D857F7L;
            l_214[7] &= ((l_103 = p_965->g_303[4][1].f5) , (safe_add_func_uint64_t_u_u(((0x72B0F47EL < (0x42A3L & 0L)) <= (((safe_mul_func_uint8_t_u_u(((*l_315) = p_39), (safe_sub_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((((p_965->g_55 = ((p_965->g_303[4][1].f1 != ((l_325 = (safe_mul_func_uint16_t_u_u((((0UL ^ (l_324 >= (p_965->g_178.f1 = p_965->g_29))) ^ (-1L)) || 1L), p_965->g_33.f2))) ^ 0x456450C6L)) == 0xF3973B30L)) & p_41) < (-10L)) | p_965->g_138), 0x27L)), 13)) | p_41) != 0x64ABL), (-6L))))) != 0x70L) != 0x0C16L)), p_39)));
            return p_965->g_226.f1;
        }
    }
    return l_326[1][4][0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S0 * func_42(uint16_t  p_43, uint32_t  p_44, int8_t  p_45, struct S5 * p_965)
{ /* block id: 20 */
    struct S0 *l_96 = &p_965->g_33;
    for (p_44 = 0; (p_44 < 51); p_44++)
    { /* block id: 23 */
        return l_96;
    }
    return &p_965->g_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_965->g_31 p_965->g_33.f2 p_965->g_32 p_965->g_33 p_965->g_29 p_965->g_55 p_965->g_91
 * writes: p_965->g_31 p_965->g_33.f1 p_965->g_55 p_965->g_91
 */
int8_t  func_48(int8_t * p_49, int64_t  p_50, struct S5 * p_965)
{ /* block id: 10 */
    uint64_t l_72 = 18446744073709551611UL;
    struct S0 *l_77[6][3][10] = {{{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33}},{{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33}},{{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33}},{{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33}},{{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33}},{{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33},{&p_965->g_33,&p_965->g_33,&p_965->g_33,(void*)0,(void*)0,(void*)0,&p_965->g_33,(void*)0,&p_965->g_33,&p_965->g_33}}};
    int i, j, k;
    for (p_965->g_31 = (-24); (p_965->g_31 != 24); p_965->g_31++)
    { /* block id: 13 */
        int64_t l_69 = 0x7DCBC3393A39D8E7L;
        struct S0 *l_80 = &p_965->g_33;
        int32_t l_81[6][4][2] = {{{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL}},{{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL}},{{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL}},{{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL}},{{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL}},{{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL},{0x7EB77EBEL,0x21EB7CCDL}}};
        int16_t *l_82 = (void*)0;
        int32_t *l_83 = &p_965->g_55;
        int32_t *l_84 = (void*)0;
        int32_t *l_85 = &p_965->g_55;
        int32_t *l_86 = (void*)0;
        int32_t *l_87 = &p_965->g_55;
        int32_t *l_88 = &l_81[2][3][1];
        int32_t *l_89 = &p_965->g_55;
        int32_t *l_90[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_90[i] = &l_81[4][1][1];
        (*l_83) ^= (safe_unary_minus_func_int8_t_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_69, (safe_sub_func_int8_t_s_s(l_72, ((p_965->g_33.f2 == ((((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((+(((((l_77[4][0][3] == (void*)0) != (p_965->g_33.f1 = ((safe_sub_func_uint64_t_u_u((((l_80 != ((*p_965->g_32) , l_77[5][1][4])) < (l_81[2][3][1] |= l_69)) > l_72), p_50)) , l_72))) , (*p_49)) ^ (*p_49)) && l_72)) && 0x13B6624EL), 5UL)) == 65535UL), p_50)) != l_72) > p_965->g_29) < 0UL)) , p_50))))), l_69)) & 2L) | 0x4DB2BF7FL), 8L)), l_69))));
        --p_965->g_91[7][4];
    }
    return p_965->g_33.f2;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S5 c_966;
    struct S5* p_965 = &c_966;
    struct S5 c_967 = {
        0x2E9F9034L, // p_965->g_29
        0x6EBBL, // p_965->g_31
        {4294967295UL,-4L,0x752BF390L}, // p_965->g_33
        &p_965->g_33, // p_965->g_32
        0xEB999C826FFEA1E1L, // p_965->g_54
        (-1L), // p_965->g_55
        {{251UL,0x62L,0xB0L,0xE6L,0xD4L},{251UL,0x62L,0xB0L,0xE6L,0xD4L},{251UL,0x62L,0xB0L,0xE6L,0xD4L},{251UL,0x62L,0xB0L,0xE6L,0xD4L},{251UL,0x62L,0xB0L,0xE6L,0xD4L},{251UL,0x62L,0xB0L,0xE6L,0xD4L},{251UL,0x62L,0xB0L,0xE6L,0xD4L},{251UL,0x62L,0xB0L,0xE6L,0xD4L},{251UL,0x62L,0xB0L,0xE6L,0xD4L},{251UL,0x62L,0xB0L,0xE6L,0xD4L}}, // p_965->g_91
        (-7L), // p_965->g_129
        (void*)0, // p_965->g_130
        65527UL, // p_965->g_138
        {0}, // p_965->g_146
        {0x060409B1CEBDA19AL,5UL,0x1183L,9UL,0x69285BA6L,-4L,0x10A817FAL,6L,0x36L,0x4B1B8CC6L}, // p_965->g_154
        {{0UL,7UL,1UL,0xAF3F735C8EA54E84L},{0UL,7UL,1UL,0xAF3F735C8EA54E84L},{0UL,7UL,1UL,0xAF3F735C8EA54E84L},{0UL,7UL,1UL,0xAF3F735C8EA54E84L},{0UL,7UL,1UL,0xAF3F735C8EA54E84L},{0UL,7UL,1UL,0xAF3F735C8EA54E84L}}, // p_965->g_165
        1UL, // p_965->g_167
        3L, // p_965->g_175
        {4294967288UL}, // p_965->g_178
        &p_965->g_178, // p_965->g_180
        {{{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180}},{{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180}},{{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180}},{{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180}},{{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180}},{{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180}},{{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180}},{{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180}},{{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180},{&p_965->g_180,&p_965->g_180,&p_965->g_180}}}, // p_965->g_179
        {{{0x4E69D13327E3E6D3L,4294967292UL,1UL,8UL,0x060AC40AL,0x76FFFE61L,0x2D06E79BL,-1L,-1L,0x23432199L}},{{0x4E69D13327E3E6D3L,4294967292UL,1UL,8UL,0x060AC40AL,0x76FFFE61L,0x2D06E79BL,-1L,-1L,0x23432199L}},{{0x4E69D13327E3E6D3L,4294967292UL,1UL,8UL,0x060AC40AL,0x76FFFE61L,0x2D06E79BL,-1L,-1L,0x23432199L}}}, // p_965->g_186
        &p_965->g_186[2][0], // p_965->g_187
        0x0C4E51E7AA7DC95DL, // p_965->g_218
        0xB652B0E1L, // p_965->g_219
        {0x54C7A393L,6L,0x73F67E56L}, // p_965->g_224
        {0UL,-10L,0x44AB4C20L}, // p_965->g_226
        {1UL}, // p_965->g_253
        {0x05C524AB9F46A099L,0x6CCCA00BL,65535UL,0x8078B896CBFC902FL,0L,0x5F346357L,0L,0x7E89841C2129FDFFL,-1L,-9L}, // p_965->g_263
        {0xA4464BCBL}, // p_965->g_267
        {{{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L}},{{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L}},{{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L}},{{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L}},{{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L}},{{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{-7L,0x2388B404L,65535UL,0x2AF7623DAB1411F4L,-1L,9L,0x7AAA504CL,-6L,0x26L,0x0AE14CD8L},{1L,0x6B790A92L,0xB26BL,18446744073709551615UL,0x3304CED0L,0x28BBA517L,-7L,0x6109F48C37F4F738L,8L,0x45217867L}}}, // p_965->g_303
        {{0x1FB1D648L,(-1L),0x64B812A7L,(-1L),0x1FB1D648L,0x1FB1D648L,(-1L),0x64B812A7L,(-1L)},{0x1FB1D648L,(-1L),0x64B812A7L,(-1L),0x1FB1D648L,0x1FB1D648L,(-1L),0x64B812A7L,(-1L)},{0x1FB1D648L,(-1L),0x64B812A7L,(-1L),0x1FB1D648L,0x1FB1D648L,(-1L),0x64B812A7L,(-1L)},{0x1FB1D648L,(-1L),0x64B812A7L,(-1L),0x1FB1D648L,0x1FB1D648L,(-1L),0x64B812A7L,(-1L)},{0x1FB1D648L,(-1L),0x64B812A7L,(-1L),0x1FB1D648L,0x1FB1D648L,(-1L),0x64B812A7L,(-1L)},{0x1FB1D648L,(-1L),0x64B812A7L,(-1L),0x1FB1D648L,0x1FB1D648L,(-1L),0x64B812A7L,(-1L)},{0x1FB1D648L,(-1L),0x64B812A7L,(-1L),0x1FB1D648L,0x1FB1D648L,(-1L),0x64B812A7L,(-1L)},{0x1FB1D648L,(-1L),0x64B812A7L,(-1L),0x1FB1D648L,0x1FB1D648L,(-1L),0x64B812A7L,(-1L)}}, // p_965->g_338
        {1UL}, // p_965->g_341
        0xCBD1C80154BB3CD9L, // p_965->g_348
        {0}, // p_965->g_363
        &p_965->g_55, // p_965->g_379
        &p_965->g_379, // p_965->g_378
        &p_965->g_32, // p_965->g_390
        0UL, // p_965->g_437
        {0x5D0DB4E0C9C67A41L,1UL,0x8223L,0xE57B1C7FE4C6DBD5L,1L,8L,-5L,0x213CDD8DD2363908L,2L,1L}, // p_965->g_454
        (void*)0, // p_965->g_461
        {0UL}, // p_965->g_468
        {{-1L,0xEB4C5A0FL,0x9E9EL,0x8AA75FD63D6A0944L,0x7D57D716L,0x32499634L,-9L,0x33EB8F7BD5FE87C1L,0x2FL,0x40610ABEL},{-1L,0xEB4C5A0FL,0x9E9EL,0x8AA75FD63D6A0944L,0x7D57D716L,0x32499634L,-9L,0x33EB8F7BD5FE87C1L,0x2FL,0x40610ABEL}}, // p_965->g_470
        {0UL}, // p_965->g_482
        (void*)0, // p_965->g_483
        {{{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482}},{{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482}},{{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482}},{{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482}},{{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482}},{{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482}},{{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482},{&p_965->g_482,&p_965->g_482,(void*)0,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482,&p_965->g_482}}}, // p_965->g_484
        {0x631AAD4F0741B602L,0x1C6BD595L,0xB005L,0UL,0x4AA2BF97L,0x11C5785FL,0x0BC77891L,0x4579C4DAA04AFDCCL,0x6AL,-1L}, // p_965->g_485
        0L, // p_965->g_488
        &p_965->g_180, // p_965->g_493
        {{{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}}},{{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}},{{-5L,0x1E1DE932L,0UL,4UL,0x14948DC5L,-5L,0x53B93E3CL,0x37C6F0046092804CL,0x08L,7L},{0x38B746A1D72E0850L,0x9F4F8746L,0UL,7UL,1L,0x74ED4F66L,-1L,0x235C97F7864C54A3L,-3L,-9L},{0x11DE1272CE4ADD6EL,0x72B297F4L,65535UL,0UL,-5L,7L,1L,0x7DD9E191279F819FL,0x3FL,0x216CD974L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x2CCA0832F8C57CEBL,0x1E493E61L,0x02FFL,0x24AF10C46A3DFAFBL,0x08B2789DL,1L,0x02C257FBL,8L,0x69L,1L},{0x0D7B3D598307F58CL,2UL,65535UL,7UL,0x5AA88D43L,0x2E567105L,0x4A78D67CL,0x300034A429751DD3L,9L,0x26C46246L},{0x4288424DB87E6C29L,0x011B0594L,0x0F66L,2UL,8L,-1L,0x135D1A43L,0L,0x4AL,0x6A01C7E4L}}}}, // p_965->g_570
        0xBDL, // p_965->g_623
        &p_965->g_32, // p_965->g_656
        {0}, // p_965->g_667
        (void*)0, // p_965->g_669
        &p_965->g_669, // p_965->g_668
        {{{0x9ABDF2FAL},{4294967295UL},{4294967295UL},{0x9ABDF2FAL},{0x9ABDF2FAL},{4294967295UL}},{{0x9ABDF2FAL},{4294967295UL},{4294967295UL},{0x9ABDF2FAL},{0x9ABDF2FAL},{4294967295UL}},{{0x9ABDF2FAL},{4294967295UL},{4294967295UL},{0x9ABDF2FAL},{0x9ABDF2FAL},{4294967295UL}},{{0x9ABDF2FAL},{4294967295UL},{4294967295UL},{0x9ABDF2FAL},{0x9ABDF2FAL},{4294967295UL}},{{0x9ABDF2FAL},{4294967295UL},{4294967295UL},{0x9ABDF2FAL},{0x9ABDF2FAL},{4294967295UL}},{{0x9ABDF2FAL},{4294967295UL},{4294967295UL},{0x9ABDF2FAL},{0x9ABDF2FAL},{4294967295UL}}}, // p_965->g_674
        {{{0x3BDF81B853DEB880L,0x3395097A2A7FACE9L}},{{0x3BDF81B853DEB880L,0x3395097A2A7FACE9L}},{{0x3BDF81B853DEB880L,0x3395097A2A7FACE9L}}}, // p_965->g_714
        {8UL,2L,9L}, // p_965->g_730
        65526UL, // p_965->g_739
        {{0},{0},{0},{0},{0},{0},{0},{0},{0}}, // p_965->g_757
        {2UL,0x03C8L,-10L}, // p_965->g_767
        65531UL, // p_965->g_806
        {{{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L}},{{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L}},{{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L}},{{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L}},{{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L}},{{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L},{0xA40769EEL,-3L,0x18A79CA5L}}}, // p_965->g_820
        1UL, // p_965->g_847
        (void*)0, // p_965->g_859
        {0x9E6C5F11L,0x2C8FL,-1L}, // p_965->g_906
        {0}, // p_965->g_933
        {0xDADB86CCL}, // p_965->g_934
        (void*)0, // p_965->g_935
        {0x410843A619E1DFC0L,4294967295UL,0xD177L,7UL,0x222BC654L,-4L,-7L,7L,9L,-1L}, // p_965->g_942
        {0x3AF74FAEL,0x3AF74FAEL,0x3AF74FAEL,0x3AF74FAEL,0x3AF74FAEL}, // p_965->g_947
        {4294967295UL,0x7212L,-1L}, // p_965->g_948
    };
    c_966 = c_967;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_965);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_965->g_29, "p_965->g_29", print_hash_value);
    transparent_crc(p_965->g_31, "p_965->g_31", print_hash_value);
    transparent_crc(p_965->g_33.f0, "p_965->g_33.f0", print_hash_value);
    transparent_crc(p_965->g_33.f1, "p_965->g_33.f1", print_hash_value);
    transparent_crc(p_965->g_33.f2, "p_965->g_33.f2", print_hash_value);
    transparent_crc(p_965->g_54, "p_965->g_54", print_hash_value);
    transparent_crc(p_965->g_55, "p_965->g_55", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_965->g_91[i][j], "p_965->g_91[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_965->g_129, "p_965->g_129", print_hash_value);
    transparent_crc(p_965->g_138, "p_965->g_138", print_hash_value);
    transparent_crc(p_965->g_154.f0, "p_965->g_154.f0", print_hash_value);
    transparent_crc(p_965->g_154.f1, "p_965->g_154.f1", print_hash_value);
    transparent_crc(p_965->g_154.f2, "p_965->g_154.f2", print_hash_value);
    transparent_crc(p_965->g_154.f3, "p_965->g_154.f3", print_hash_value);
    transparent_crc(p_965->g_154.f4, "p_965->g_154.f4", print_hash_value);
    transparent_crc(p_965->g_154.f5, "p_965->g_154.f5", print_hash_value);
    transparent_crc(p_965->g_154.f6, "p_965->g_154.f6", print_hash_value);
    transparent_crc(p_965->g_154.f7, "p_965->g_154.f7", print_hash_value);
    transparent_crc(p_965->g_154.f8, "p_965->g_154.f8", print_hash_value);
    transparent_crc(p_965->g_154.f9, "p_965->g_154.f9", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_965->g_165[i][j], "p_965->g_165[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_965->g_167, "p_965->g_167", print_hash_value);
    transparent_crc(p_965->g_175, "p_965->g_175", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_965->g_186[i][j].f0, "p_965->g_186[i][j].f0", print_hash_value);
            transparent_crc(p_965->g_186[i][j].f1, "p_965->g_186[i][j].f1", print_hash_value);
            transparent_crc(p_965->g_186[i][j].f2, "p_965->g_186[i][j].f2", print_hash_value);
            transparent_crc(p_965->g_186[i][j].f3, "p_965->g_186[i][j].f3", print_hash_value);
            transparent_crc(p_965->g_186[i][j].f4, "p_965->g_186[i][j].f4", print_hash_value);
            transparent_crc(p_965->g_186[i][j].f5, "p_965->g_186[i][j].f5", print_hash_value);
            transparent_crc(p_965->g_186[i][j].f6, "p_965->g_186[i][j].f6", print_hash_value);
            transparent_crc(p_965->g_186[i][j].f7, "p_965->g_186[i][j].f7", print_hash_value);
            transparent_crc(p_965->g_186[i][j].f8, "p_965->g_186[i][j].f8", print_hash_value);
            transparent_crc(p_965->g_186[i][j].f9, "p_965->g_186[i][j].f9", print_hash_value);

        }
    }
    transparent_crc(p_965->g_218, "p_965->g_218", print_hash_value);
    transparent_crc(p_965->g_219, "p_965->g_219", print_hash_value);
    transparent_crc(p_965->g_224.f0, "p_965->g_224.f0", print_hash_value);
    transparent_crc(p_965->g_224.f1, "p_965->g_224.f1", print_hash_value);
    transparent_crc(p_965->g_224.f2, "p_965->g_224.f2", print_hash_value);
    transparent_crc(p_965->g_226.f0, "p_965->g_226.f0", print_hash_value);
    transparent_crc(p_965->g_226.f1, "p_965->g_226.f1", print_hash_value);
    transparent_crc(p_965->g_226.f2, "p_965->g_226.f2", print_hash_value);
    transparent_crc(p_965->g_253.f0, "p_965->g_253.f0", print_hash_value);
    transparent_crc(p_965->g_263.f0, "p_965->g_263.f0", print_hash_value);
    transparent_crc(p_965->g_263.f1, "p_965->g_263.f1", print_hash_value);
    transparent_crc(p_965->g_263.f2, "p_965->g_263.f2", print_hash_value);
    transparent_crc(p_965->g_263.f3, "p_965->g_263.f3", print_hash_value);
    transparent_crc(p_965->g_263.f4, "p_965->g_263.f4", print_hash_value);
    transparent_crc(p_965->g_263.f5, "p_965->g_263.f5", print_hash_value);
    transparent_crc(p_965->g_263.f6, "p_965->g_263.f6", print_hash_value);
    transparent_crc(p_965->g_263.f7, "p_965->g_263.f7", print_hash_value);
    transparent_crc(p_965->g_263.f8, "p_965->g_263.f8", print_hash_value);
    transparent_crc(p_965->g_263.f9, "p_965->g_263.f9", print_hash_value);
    transparent_crc(p_965->g_267.f0, "p_965->g_267.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_965->g_303[i][j].f0, "p_965->g_303[i][j].f0", print_hash_value);
            transparent_crc(p_965->g_303[i][j].f1, "p_965->g_303[i][j].f1", print_hash_value);
            transparent_crc(p_965->g_303[i][j].f2, "p_965->g_303[i][j].f2", print_hash_value);
            transparent_crc(p_965->g_303[i][j].f3, "p_965->g_303[i][j].f3", print_hash_value);
            transparent_crc(p_965->g_303[i][j].f4, "p_965->g_303[i][j].f4", print_hash_value);
            transparent_crc(p_965->g_303[i][j].f5, "p_965->g_303[i][j].f5", print_hash_value);
            transparent_crc(p_965->g_303[i][j].f6, "p_965->g_303[i][j].f6", print_hash_value);
            transparent_crc(p_965->g_303[i][j].f7, "p_965->g_303[i][j].f7", print_hash_value);
            transparent_crc(p_965->g_303[i][j].f8, "p_965->g_303[i][j].f8", print_hash_value);
            transparent_crc(p_965->g_303[i][j].f9, "p_965->g_303[i][j].f9", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_965->g_338[i][j], "p_965->g_338[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_965->g_348, "p_965->g_348", print_hash_value);
    transparent_crc(p_965->g_437, "p_965->g_437", print_hash_value);
    transparent_crc(p_965->g_454.f0, "p_965->g_454.f0", print_hash_value);
    transparent_crc(p_965->g_454.f1, "p_965->g_454.f1", print_hash_value);
    transparent_crc(p_965->g_454.f2, "p_965->g_454.f2", print_hash_value);
    transparent_crc(p_965->g_454.f3, "p_965->g_454.f3", print_hash_value);
    transparent_crc(p_965->g_454.f4, "p_965->g_454.f4", print_hash_value);
    transparent_crc(p_965->g_454.f5, "p_965->g_454.f5", print_hash_value);
    transparent_crc(p_965->g_454.f6, "p_965->g_454.f6", print_hash_value);
    transparent_crc(p_965->g_454.f7, "p_965->g_454.f7", print_hash_value);
    transparent_crc(p_965->g_454.f8, "p_965->g_454.f8", print_hash_value);
    transparent_crc(p_965->g_454.f9, "p_965->g_454.f9", print_hash_value);
    transparent_crc(p_965->g_468.f0, "p_965->g_468.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_965->g_470[i].f0, "p_965->g_470[i].f0", print_hash_value);
        transparent_crc(p_965->g_470[i].f1, "p_965->g_470[i].f1", print_hash_value);
        transparent_crc(p_965->g_470[i].f2, "p_965->g_470[i].f2", print_hash_value);
        transparent_crc(p_965->g_470[i].f3, "p_965->g_470[i].f3", print_hash_value);
        transparent_crc(p_965->g_470[i].f4, "p_965->g_470[i].f4", print_hash_value);
        transparent_crc(p_965->g_470[i].f5, "p_965->g_470[i].f5", print_hash_value);
        transparent_crc(p_965->g_470[i].f6, "p_965->g_470[i].f6", print_hash_value);
        transparent_crc(p_965->g_470[i].f7, "p_965->g_470[i].f7", print_hash_value);
        transparent_crc(p_965->g_470[i].f8, "p_965->g_470[i].f8", print_hash_value);
        transparent_crc(p_965->g_470[i].f9, "p_965->g_470[i].f9", print_hash_value);

    }
    transparent_crc(p_965->g_485.f0, "p_965->g_485.f0", print_hash_value);
    transparent_crc(p_965->g_485.f1, "p_965->g_485.f1", print_hash_value);
    transparent_crc(p_965->g_485.f2, "p_965->g_485.f2", print_hash_value);
    transparent_crc(p_965->g_485.f3, "p_965->g_485.f3", print_hash_value);
    transparent_crc(p_965->g_485.f4, "p_965->g_485.f4", print_hash_value);
    transparent_crc(p_965->g_485.f5, "p_965->g_485.f5", print_hash_value);
    transparent_crc(p_965->g_485.f6, "p_965->g_485.f6", print_hash_value);
    transparent_crc(p_965->g_485.f7, "p_965->g_485.f7", print_hash_value);
    transparent_crc(p_965->g_485.f8, "p_965->g_485.f8", print_hash_value);
    transparent_crc(p_965->g_485.f9, "p_965->g_485.f9", print_hash_value);
    transparent_crc(p_965->g_488, "p_965->g_488", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_965->g_570[i][j][k].f0, "p_965->g_570[i][j][k].f0", print_hash_value);
                transparent_crc(p_965->g_570[i][j][k].f1, "p_965->g_570[i][j][k].f1", print_hash_value);
                transparent_crc(p_965->g_570[i][j][k].f2, "p_965->g_570[i][j][k].f2", print_hash_value);
                transparent_crc(p_965->g_570[i][j][k].f3, "p_965->g_570[i][j][k].f3", print_hash_value);
                transparent_crc(p_965->g_570[i][j][k].f4, "p_965->g_570[i][j][k].f4", print_hash_value);
                transparent_crc(p_965->g_570[i][j][k].f5, "p_965->g_570[i][j][k].f5", print_hash_value);
                transparent_crc(p_965->g_570[i][j][k].f6, "p_965->g_570[i][j][k].f6", print_hash_value);
                transparent_crc(p_965->g_570[i][j][k].f7, "p_965->g_570[i][j][k].f7", print_hash_value);
                transparent_crc(p_965->g_570[i][j][k].f8, "p_965->g_570[i][j][k].f8", print_hash_value);
                transparent_crc(p_965->g_570[i][j][k].f9, "p_965->g_570[i][j][k].f9", print_hash_value);

            }
        }
    }
    transparent_crc(p_965->g_623, "p_965->g_623", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_965->g_674[i][j].f0, "p_965->g_674[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_965->g_714[i][j][k], "p_965->g_714[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_965->g_730.f0, "p_965->g_730.f0", print_hash_value);
    transparent_crc(p_965->g_730.f1, "p_965->g_730.f1", print_hash_value);
    transparent_crc(p_965->g_730.f2, "p_965->g_730.f2", print_hash_value);
    transparent_crc(p_965->g_739, "p_965->g_739", print_hash_value);
    transparent_crc(p_965->g_767.f0, "p_965->g_767.f0", print_hash_value);
    transparent_crc(p_965->g_767.f1, "p_965->g_767.f1", print_hash_value);
    transparent_crc(p_965->g_767.f2, "p_965->g_767.f2", print_hash_value);
    transparent_crc(p_965->g_806, "p_965->g_806", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_965->g_820[i][j].f0, "p_965->g_820[i][j].f0", print_hash_value);
            transparent_crc(p_965->g_820[i][j].f1, "p_965->g_820[i][j].f1", print_hash_value);
            transparent_crc(p_965->g_820[i][j].f2, "p_965->g_820[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_965->g_847, "p_965->g_847", print_hash_value);
    transparent_crc(p_965->g_906.f0, "p_965->g_906.f0", print_hash_value);
    transparent_crc(p_965->g_906.f1, "p_965->g_906.f1", print_hash_value);
    transparent_crc(p_965->g_906.f2, "p_965->g_906.f2", print_hash_value);
    transparent_crc(p_965->g_934.f0, "p_965->g_934.f0", print_hash_value);
    transparent_crc(p_965->g_942.f0, "p_965->g_942.f0", print_hash_value);
    transparent_crc(p_965->g_942.f1, "p_965->g_942.f1", print_hash_value);
    transparent_crc(p_965->g_942.f2, "p_965->g_942.f2", print_hash_value);
    transparent_crc(p_965->g_942.f3, "p_965->g_942.f3", print_hash_value);
    transparent_crc(p_965->g_942.f4, "p_965->g_942.f4", print_hash_value);
    transparent_crc(p_965->g_942.f5, "p_965->g_942.f5", print_hash_value);
    transparent_crc(p_965->g_942.f6, "p_965->g_942.f6", print_hash_value);
    transparent_crc(p_965->g_942.f7, "p_965->g_942.f7", print_hash_value);
    transparent_crc(p_965->g_942.f8, "p_965->g_942.f8", print_hash_value);
    transparent_crc(p_965->g_942.f9, "p_965->g_942.f9", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_965->g_947[i], "p_965->g_947[i]", print_hash_value);

    }
    transparent_crc(p_965->g_948.f0, "p_965->g_948.f0", print_hash_value);
    transparent_crc(p_965->g_948.f1, "p_965->g_948.f1", print_hash_value);
    transparent_crc(p_965->g_948.f2, "p_965->g_948.f2", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
