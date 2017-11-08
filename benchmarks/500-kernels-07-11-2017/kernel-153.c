// -g 24,46,7 -l 12,1,1
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


// Seed: 4189910650

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
};

struct S1 {
   uint16_t  f0;
   uint32_t  f1;
   volatile int64_t  f2;
   int64_t  f3;
   int16_t  f4;
};

struct S2 {
   struct S0  f0;
   int8_t  f1;
};

union U3 {
   int8_t  f0;
};

union U4 {
   int8_t * f0;
   volatile uint32_t  f1;
};

struct S6 {
    int8_t g_11;
    volatile union U4 g_12[9];
    int8_t *g_38;
    int8_t **g_37;
    uint8_t g_52[8][9];
    uint8_t g_54[8];
    uint16_t g_65;
    int32_t g_70[4][2][2];
    struct S0 g_76;
    int8_t g_80;
    int32_t g_84;
    int32_t g_87;
    uint64_t g_92;
    uint32_t g_100;
    uint32_t g_102;
    struct S1 g_120;
    struct S1 * volatile g_121;
    struct S1 * volatile g_122;
    volatile uint64_t g_130;
    int32_t * volatile g_136;
    uint32_t *g_142[8][4];
    union U3 g_145;
    union U3 * volatile g_144;
    int32_t *g_163;
    int32_t ** volatile g_162;
    uint32_t g_190;
    uint8_t g_221;
    int8_t *g_224;
    union U4 g_228;
    volatile uint64_t *g_254;
    volatile uint64_t **g_253;
    struct S2 g_260;
    struct S2 * volatile g_261[3][4][1];
    struct S2 * volatile g_262;
};


/* --- FORWARD DECLARATIONS --- */
struct S0  func_1(struct S6 * p_275);
struct S2  func_2(int8_t  p_3, struct S6 * p_275);
union U4  func_4(int8_t * p_5, int32_t  p_6, uint16_t  p_7, int8_t * p_8, int64_t  p_9, struct S6 * p_275);
int16_t  func_13(uint32_t  p_14, int8_t * p_15, int8_t  p_16, int8_t * p_17, struct S6 * p_275);
uint8_t  func_21(int32_t  p_22, int8_t * p_23, int8_t * p_24, struct S6 * p_275);
int32_t  func_25(uint32_t  p_26, int8_t * p_27, int8_t * p_28, int8_t * p_29, struct S6 * p_275);
int8_t * func_32(int8_t ** p_33, int8_t ** p_34, uint32_t  p_35, int8_t * p_36, struct S6 * p_275);
int8_t ** func_39(int8_t ** p_40, uint8_t  p_41, struct S6 * p_275);
int8_t ** func_42(int8_t * p_43, int8_t ** p_44, uint8_t  p_45, uint32_t  p_46, int8_t * p_47, struct S6 * p_275);
int8_t * func_48(uint32_t  p_49, struct S6 * p_275);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_275->g_12 p_275->g_11 p_275->g_37 p_275->g_54 p_275->g_65 p_275->g_70 p_275->g_38 p_275->g_76 p_275->g_84 p_275->g_87 p_275->g_92 p_275->g_100 p_275->g_120 p_275->g_122 p_275->g_130 p_275->g_80 p_275->g_136 p_275->g_144 p_275->g_52 p_275->g_162 p_275->g_163 p_275->g_221 p_275->g_145.f0 p_275->g_224 p_275->g_228 p_275->g_102 p_275->g_253 p_275->g_260 p_275->g_262
 * writes: p_275->g_11 p_275->g_52 p_275->g_54 p_275->g_70 p_275->g_65 p_275->g_80 p_275->g_84 p_275->g_87 p_275->g_38 p_275->g_92 p_275->g_100 p_275->g_102 p_275->g_76.f2 p_275->g_120 p_275->g_130 p_275->g_142 p_275->g_163 p_275->g_136 p_275->g_76.f1 p_275->g_190 p_275->g_221 p_275->g_145.f0 p_275->g_260
 */
struct S0  func_1(struct S6 * p_275)
{ /* block id: 4 */
    int8_t *l_10 = &p_275->g_11;
    uint32_t l_18 = 0xD5D08818L;
    int32_t l_268 = 0x5164D0CAL;
    int32_t l_269 = (-2L);
    int32_t l_270[3][6][6] = {{{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)}},{{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)}},{{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)},{(-1L),(-1L),(-8L),(-9L),0x297E4177L,(-8L)}}};
    uint64_t l_272 = 0UL;
    int i, j, k;
    (*p_275->g_262) = func_2(((*l_10) = ((func_4(l_10, (p_275->g_12[8] , ((func_13(p_275->g_11, &p_275->g_11, l_18, l_10, p_275) ^ l_18) , l_18)), p_275->g_145.f0, p_275->g_224, p_275->g_145.f0, p_275) , (*p_275->g_37)) == l_10)), p_275);
    for (p_275->g_76.f2 = (-12); (p_275->g_76.f2 < (-10)); ++p_275->g_76.f2)
    { /* block id: 125 */
        int32_t *l_265 = &p_275->g_70[0][0][0];
        int32_t *l_266 = &p_275->g_260.f0.f2;
        int32_t *l_267[3][8] = {{&p_275->g_84,&p_275->g_70[3][1][0],(void*)0,&p_275->g_70[3][1][0],&p_275->g_84,&p_275->g_84,&p_275->g_70[3][1][0],(void*)0},{&p_275->g_84,&p_275->g_70[3][1][0],(void*)0,&p_275->g_70[3][1][0],&p_275->g_84,&p_275->g_84,&p_275->g_70[3][1][0],(void*)0},{&p_275->g_84,&p_275->g_70[3][1][0],(void*)0,&p_275->g_70[3][1][0],&p_275->g_84,&p_275->g_84,&p_275->g_70[3][1][0],(void*)0}};
        int32_t l_271[4][6][10] = {{{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL}},{{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL}},{{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL}},{{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL},{0L,0x6B1BFE8AL,0x626FFDDDL,0L,(-1L),0x626FFDDDL,0x626FFDDDL,(-1L),0L,0x626FFDDDL}}};
        int i, j, k;
        --l_272;
    }
    return p_275->g_76;
}


/* ------------------------------------------ */
/* 
 * reads : p_275->g_70 p_275->g_102 p_275->g_65 p_275->g_145.f0 p_275->g_54 p_275->g_120.f0 p_275->g_253 p_275->g_136 p_275->g_87 p_275->g_260
 * writes: p_275->g_120.f0 p_275->g_65 p_275->g_87 p_275->g_145.f0
 */
struct S2  func_2(int8_t  p_3, struct S6 * p_275)
{ /* block id: 110 */
    int32_t *l_229 = &p_275->g_70[0][0][0];
    int32_t *l_230 = &p_275->g_76.f2;
    int32_t *l_231 = &p_275->g_87;
    int32_t *l_232 = &p_275->g_76.f2;
    int32_t *l_233 = (void*)0;
    int32_t *l_234 = &p_275->g_70[0][0][0];
    int32_t *l_235[4];
    int32_t l_236 = (-5L);
    uint64_t l_237 = 1UL;
    uint64_t **l_240 = (void*)0;
    uint64_t ***l_241 = &l_240;
    union U3 *l_242 = &p_275->g_145;
    uint16_t *l_251 = &p_275->g_120.f0;
    uint16_t *l_252 = &p_275->g_65;
    int i;
    for (i = 0; i < 4; i++)
        l_235[i] = (void*)0;
    l_237--;
    (*l_231) &= ((((*l_241) = l_240) == ((p_3 , (p_275->g_70[0][0][1] < (p_275->g_102 <= (8L != ((*l_252) = ((*l_251) ^= ((l_242 == l_242) , (safe_sub_func_uint8_t_u_u((0x5327L < (safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(p_275->g_65, p_275->g_145.f0)), p_3)), p_275->g_54[1]))), p_3))))))))) , p_275->g_253)) , (*p_275->g_136));
    for (p_275->g_145.f0 = (-29); (p_275->g_145.f0 >= (-10)); p_275->g_145.f0 = safe_add_func_int32_t_s_s(p_275->g_145.f0, 8))
    { /* block id: 118 */
        uint32_t l_257[7][10][3] = {{{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL}},{{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL}},{{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL}},{{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL}},{{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL}},{{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL}},{{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL},{0xDDFE6DE9L,0x0C228B3FL,4294967295UL}}};
        int i, j, k;
        l_257[5][0][2]++;
    }
    return p_275->g_260;
}


/* ------------------------------------------ */
/* 
 * reads : p_275->g_87 p_275->g_162 p_275->g_136 p_275->g_228
 * writes: p_275->g_87 p_275->g_163 p_275->g_70
 */
union U4  func_4(int8_t * p_5, int32_t  p_6, uint16_t  p_7, int8_t * p_8, int64_t  p_9, struct S6 * p_275)
{ /* block id: 100 */
    for (p_275->g_87 = 0; (p_275->g_87 != 12); p_275->g_87++)
    { /* block id: 103 */
        int32_t *l_227 = &p_275->g_70[0][0][0];
        (*p_275->g_162) = (void*)0;
        (*p_275->g_136) = p_6;
        (*l_227) = 3L;
    }
    return p_275->g_228;
}


/* ------------------------------------------ */
/* 
 * reads : p_275->g_11 p_275->g_37 p_275->g_54 p_275->g_65 p_275->g_70 p_275->g_38 p_275->g_76 p_275->g_84 p_275->g_87 p_275->g_92 p_275->g_100 p_275->g_120 p_275->g_122 p_275->g_130 p_275->g_80 p_275->g_136 p_275->g_144 p_275->g_52 p_275->g_162 p_275->g_163 p_275->g_221
 * writes: p_275->g_11 p_275->g_52 p_275->g_54 p_275->g_70 p_275->g_65 p_275->g_80 p_275->g_84 p_275->g_87 p_275->g_38 p_275->g_92 p_275->g_100 p_275->g_102 p_275->g_76.f2 p_275->g_120 p_275->g_130 p_275->g_142 p_275->g_163 p_275->g_136 p_275->g_76.f1 p_275->g_190 p_275->g_221
 */
int16_t  func_13(uint32_t  p_14, int8_t * p_15, int8_t  p_16, int8_t * p_17, struct S6 * p_275)
{ /* block id: 5 */
    int8_t **l_106 = &p_275->g_38;
    int8_t *l_164 = &p_275->g_145.f0;
    int32_t l_192 = 0x4734EFB1L;
    int32_t l_202 = 8L;
    int32_t l_208 = 0x0200FA25L;
    int32_t l_211[3][9] = {{1L,(-5L),1L,1L,(-5L),1L,1L,(-5L),1L},{1L,(-5L),1L,1L,(-5L),1L,1L,(-5L),1L},{1L,(-5L),1L,1L,(-5L),1L,1L,(-5L),1L}};
    uint32_t l_214 = 0x46C8C352L;
    int i, j;
    for (p_14 = 0; (p_14 <= 8); p_14 += 1)
    { /* block id: 8 */
        int8_t *l_133 = &p_275->g_11;
        int32_t l_167 = 3L;
        uint64_t *l_176 = (void*)0;
        int32_t l_201 = 0x61D21668L;
        int16_t l_209[8][2];
        int32_t l_210 = (-1L);
        int32_t l_212 = 0x5FDC5A0FL;
        int32_t l_213 = 0x0736EE14L;
        int32_t *l_217 = &l_210;
        int32_t *l_218 = (void*)0;
        int32_t *l_219 = (void*)0;
        int32_t *l_220[7][3][4] = {{{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87}},{{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87}},{{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87}},{{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87}},{{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87}},{{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87}},{{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87},{&l_212,&l_167,&l_201,&p_275->g_87}}};
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 2; j++)
                l_209[i][j] = (-6L);
        }
        for (p_275->g_11 = 1; (p_275->g_11 <= 8); p_275->g_11 += 1)
        { /* block id: 11 */
            int8_t *l_31 = &p_275->g_11;
            int8_t **l_30 = &l_31;
            uint8_t *l_50 = (void*)0;
            uint8_t *l_51 = &p_275->g_52[5][6];
            uint8_t *l_53 = &p_275->g_54[1];
            l_167 = (!(safe_sub_func_uint8_t_u_u(func_21(func_25(p_275->g_11, ((*l_30) = (void*)0), func_32(p_275->g_37, func_39((l_106 = func_42(((*p_275->g_37) = func_48(((p_275->g_11 || ((*l_53) ^= ((*l_51) = 0xC8L))) == p_275->g_11), p_275)), p_275->g_37, p_275->g_76.f1, p_275->g_76.f2, &p_275->g_11, p_275)), p_275->g_11, p_275), p_16, l_133, p_275), &p_275->g_11, p_275), &p_275->g_11, l_164, p_275), l_167)));
        }
        for (p_275->g_76.f1 = 3; (p_275->g_76.f1 <= 8); p_275->g_76.f1 += 1)
        { /* block id: 78 */
            int32_t *l_168 = &p_275->g_70[0][0][0];
            uint64_t *l_173 = (void*)0;
            uint64_t *l_196[10][8][3] = {{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}},{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}},{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}},{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}},{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}},{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}},{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}},{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}},{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}},{{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92},{&p_275->g_92,(void*)0,&p_275->g_92}}};
            uint64_t **l_195[1];
            int32_t l_200 = 0x2D4FD8FAL;
            int32_t l_203 = 0x3D05821FL;
            uint64_t l_204 = 18446744073709551615UL;
            int32_t *l_207[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_195[i] = &l_196[9][3][2];
            for (i = 0; i < 1; i++)
                l_207[i] = &l_203;
            (*l_168) |= 0x5059520BL;
            for (p_275->g_87 = 6; (p_275->g_87 >= 0); p_275->g_87 -= 1)
            { /* block id: 82 */
                uint32_t l_191 = 8UL;
                uint64_t *l_194 = &p_275->g_92;
                uint64_t **l_193 = &l_194;
                int32_t *l_198 = &p_275->g_70[0][0][0];
                int32_t *l_199[9] = {&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192};
                int i;
                for (p_275->g_120.f4 = 1; (p_275->g_120.f4 >= 0); p_275->g_120.f4 -= 1)
                { /* block id: 85 */
                    uint64_t **l_174 = (void*)0;
                    uint64_t **l_175 = &l_173;
                    uint64_t **l_177 = &l_176;
                    uint32_t *l_189 = &p_275->g_190;
                    int32_t *l_197 = &l_167;
                    int i, j, k;
                    (*l_197) ^= (safe_mod_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(p_275->g_70[(p_275->g_120.f4 + 1)][p_275->g_120.f4][p_275->g_120.f4], p_275->g_120.f1)) ^ ((p_16 | (((*l_175) = l_173) != ((*l_168) , ((*l_177) = l_176)))) != ((safe_add_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_16 , (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_s((((*l_189) = p_275->g_54[5]) != 0x382BD884L), l_191))))), p_16)), l_192)), p_275->g_70[(p_275->g_120.f4 + 1)][p_275->g_120.f4][p_275->g_120.f4])) , 1L) , l_193) != l_195[0]), p_275->g_70[(p_275->g_120.f4 + 1)][p_275->g_120.f4][p_275->g_120.f4])) || l_192))), p_275->g_70[0][0][0]));
                }
                (*p_275->g_162) = (*p_275->g_162);
                ++l_204;
            }
            ++l_214;
            if (l_211[0][6])
                continue;
        }
        --p_275->g_221;
    }
    return p_275->g_120.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_275->g_162 p_275->g_163
 * writes: p_275->g_163 p_275->g_136
 */
uint8_t  func_21(int32_t  p_22, int8_t * p_23, int8_t * p_24, struct S6 * p_275)
{ /* block id: 70 */
    int32_t **l_165[3][10] = {{&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163},{&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163},{&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163,&p_275->g_163}};
    uint32_t l_166 = 1UL;
    int i, j;
    p_275->g_136 = ((*p_275->g_162) = (*p_275->g_162));
    return l_166;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_25(uint32_t  p_26, int8_t * p_27, int8_t * p_28, int8_t * p_29, struct S6 * p_275)
{ /* block id: 68 */
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_275->g_92 p_275->g_80 p_275->g_136 p_275->g_70 p_275->g_76 p_275->g_84 p_275->g_144 p_275->g_52 p_275->g_65 p_275->g_162 p_275->g_38
 * writes: p_275->g_92 p_275->g_70 p_275->g_142 p_275->g_84 p_275->g_76.f2 p_275->g_163
 */
int8_t * func_32(int8_t ** p_33, int8_t ** p_34, uint32_t  p_35, int8_t * p_36, struct S6 * p_275)
{ /* block id: 54 */
    union U3 l_139[5][2] = {{{0x75L},{7L}},{{0x75L},{7L}},{{0x75L},{7L}},{{0x75L},{7L}},{{0x75L},{7L}}};
    union U3 * volatile l_147 = &p_275->g_145;/* VOLATILE GLOBAL l_147 */
    uint32_t l_150 = 0xF4D21A52L;
    int32_t *l_161 = &p_275->g_70[0][1][1];
    int i, j;
    for (p_275->g_92 = 26; (p_275->g_92 > 22); p_275->g_92 = safe_sub_func_uint32_t_u_u(p_275->g_92, 8))
    { /* block id: 57 */
        uint32_t *l_140 = &p_275->g_100;
        uint32_t **l_141 = (void*)0;
        int32_t *l_143 = &p_275->g_84;
        union U3 * volatile *l_146[3][7][2] = {{{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0}},{{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0}},{{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0},{&p_275->g_144,(void*)0}}};
        uint16_t *l_159 = &p_275->g_120.f0;
        int32_t *l_160[3][8] = {{&p_275->g_76.f2,&p_275->g_87,&p_275->g_76.f2,&p_275->g_87,&p_275->g_76.f2,&p_275->g_76.f2,&p_275->g_87,&p_275->g_76.f2},{&p_275->g_76.f2,&p_275->g_87,&p_275->g_76.f2,&p_275->g_87,&p_275->g_76.f2,&p_275->g_76.f2,&p_275->g_87,&p_275->g_76.f2},{&p_275->g_76.f2,&p_275->g_87,&p_275->g_76.f2,&p_275->g_87,&p_275->g_76.f2,&p_275->g_76.f2,&p_275->g_87,&p_275->g_76.f2}};
        int i, j, k;
        (*p_275->g_136) |= p_275->g_80;
        (*l_143) |= (((safe_div_func_int32_t_s_s((l_139[3][1] , 0x2D383E86L), (*p_275->g_136))) , (p_275->g_76 , (p_275->g_142[5][1] = l_140))) != &p_275->g_100);
        l_147 = p_275->g_144;
        p_275->g_76.f2 ^= ((*l_143) = ((safe_mul_func_int8_t_s_s(l_150, (safe_sub_func_int32_t_s_s(((*p_275->g_136) = p_35), (&p_275->g_92 != &p_275->g_92))))) != (safe_sub_func_uint8_t_u_u(((0xA49DC3AFL >= 0L) , (+p_275->g_52[6][3])), ((safe_add_func_uint32_t_u_u((l_159 != &p_275->g_65), (-1L))) > p_275->g_65)))));
    }
    (*p_275->g_162) = l_161;
    return (*p_34);
}


/* ------------------------------------------ */
/* 
 * reads : p_275->g_76.f2 p_275->g_37 p_275->g_38 p_275->g_100 p_275->g_70 p_275->g_120 p_275->g_122 p_275->g_130
 * writes: p_275->g_76.f2 p_275->g_70 p_275->g_120 p_275->g_130
 */
int8_t ** func_39(int8_t ** p_40, uint8_t  p_41, struct S6 * p_275)
{ /* block id: 42 */
    int8_t *l_115 = (void*)0;
    int32_t l_116 = 0x1CF2C337L;
    int32_t *l_123 = &p_275->g_87;
    int32_t *l_124 = &p_275->g_87;
    int32_t *l_125 = &p_275->g_70[0][0][0];
    int32_t *l_126 = (void*)0;
    int32_t *l_127 = &p_275->g_70[0][0][0];
    int32_t *l_128 = (void*)0;
    int32_t *l_129[8][10][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int i, j, k;
    for (p_275->g_76.f2 = 0; (p_275->g_76.f2 > 12); p_275->g_76.f2 = safe_add_func_uint32_t_u_u(p_275->g_76.f2, 4))
    { /* block id: 45 */
        int8_t *l_113[3][9] = {{&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11},{&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11},{&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11}};
        uint16_t *l_114[8][10] = {{(void*)0,(void*)0,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65},{(void*)0,(void*)0,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65},{(void*)0,(void*)0,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65},{(void*)0,(void*)0,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65},{(void*)0,(void*)0,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65},{(void*)0,(void*)0,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65},{(void*)0,(void*)0,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65},{(void*)0,(void*)0,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65,&p_275->g_65}};
        int32_t l_117 = 0x35C8199CL;
        int32_t l_118 = (-2L);
        int32_t *l_119 = &p_275->g_70[2][1][0];
        int i, j;
        (*l_119) = ((safe_div_func_uint64_t_u_u(((!((safe_add_func_int32_t_s_s((((void*)0 == l_113[1][3]) | (l_114[1][5] == (void*)0)), ((((l_115 = (*p_275->g_37)) != ((((l_116 == (l_117 = 0x37L)) == (p_275->g_100 , 0x4A9EC0CD882E3DE9L)) , l_116) , (void*)0)) > l_116) || l_117))) != l_116)) <= 0x1BL), l_118)) , l_116);
        (*l_119) &= p_41;
    }
    (*p_275->g_122) = p_275->g_120;
    ++p_275->g_130;
    return &p_275->g_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_275->g_87 p_275->g_76.f0 p_275->g_92 p_275->g_38 p_275->g_11 p_275->g_84
 * writes: p_275->g_87 p_275->g_92 p_275->g_100 p_275->g_102 p_275->g_80 p_275->g_84
 */
int8_t ** func_42(int8_t * p_43, int8_t ** p_44, uint8_t  p_45, uint32_t  p_46, int8_t * p_47, struct S6 * p_275)
{ /* block id: 32 */
    int32_t *l_88[3];
    uint64_t *l_91 = &p_275->g_92;
    uint32_t *l_99 = &p_275->g_100;
    uint32_t *l_101 = &p_275->g_102;
    int8_t *l_103 = (void*)0;
    int8_t *l_104 = &p_275->g_80;
    int i;
    for (i = 0; i < 3; i++)
        l_88[i] = &p_275->g_87;
lbl_105:
    p_275->g_87 ^= 7L;
    p_275->g_84 |= (safe_sub_func_int16_t_s_s(((((*l_104) = ((p_275->g_76.f0 | (p_45 , (p_46 & (((*l_91)++) && (safe_mod_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((*p_275->g_38) , (-1L)), 0x34L)) | 18446744073709551614UL), p_46)))))) != (((*l_101) = ((*l_99) = p_45)) , p_46))) >= (*p_43)) && (*p_47)), 65531UL));
    if (p_275->g_92)
        goto lbl_105;
    return &p_275->g_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_275->g_11 p_275->g_54 p_275->g_65 p_275->g_70 p_275->g_37 p_275->g_38 p_275->g_76 p_275->g_84 p_275->g_87
 * writes: p_275->g_70 p_275->g_65 p_275->g_80 p_275->g_84 p_275->g_87
 */
int8_t * func_48(uint32_t  p_49, struct S6 * p_275)
{ /* block id: 15 */
    int64_t l_61 = 4L;
    uint8_t *l_66[6] = {&p_275->g_52[2][2],(void*)0,&p_275->g_52[2][2],&p_275->g_52[2][2],(void*)0,&p_275->g_52[2][2]};
    int32_t l_67 = 9L;
    uint32_t l_68 = 0xDA102F31L;
    int32_t *l_69 = &p_275->g_70[0][0][0];
    int32_t **l_75 = &l_69;
    int32_t *l_77 = (void*)0;
    int32_t **l_78 = &l_77;
    int8_t *l_79 = &p_275->g_80;
    int8_t *l_81[4][10] = {{&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11},{&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11},{&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11},{&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11,&p_275->g_11}};
    uint16_t *l_82 = &p_275->g_65;
    int32_t *l_83 = &p_275->g_84;
    int32_t *l_85 = (void*)0;
    int32_t *l_86 = &p_275->g_87;
    int i, j;
    (*l_69) &= (safe_div_func_int16_t_s_s((p_275->g_11 , (safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((l_67 = (l_61 >= ((p_275->g_54[2] > l_61) < ((((safe_sub_func_int32_t_s_s(((((((safe_unary_minus_func_int8_t_s((p_49 == (p_275->g_65 >= p_275->g_11)))) , 0x18E5L) < (p_49 , p_49)) | l_61) && p_49) | 0UL), p_49)) , p_275->g_11) | p_275->g_54[1]) < l_61)))), l_68)), p_49))), p_49));
    for (p_275->g_65 = 1; (p_275->g_65 <= 8); p_275->g_65 += 1)
    { /* block id: 20 */
        return (*p_275->g_37);
    }
    (*l_86) ^= ((*l_83) |= (safe_mul_func_uint16_t_u_u(p_49, ((*l_82) = ((l_67 = (safe_add_func_int8_t_s_s(p_49, (0x6AEFL || ((((0x21L || ((*l_79) = (((void*)0 != &p_275->g_54[6]) < (((*l_75) = &l_67) != ((*l_78) = (p_275->g_76 , l_77)))))) , (**l_75)) || 0L) > p_49))))) && (*l_69))))));
    return (*p_275->g_37);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S6 c_276;
    struct S6* p_275 = &c_276;
    struct S6 c_277 = {
        0x12L, // p_275->g_11
        {{0},{0},{0},{0},{0},{0},{0},{0},{0}}, // p_275->g_12
        &p_275->g_11, // p_275->g_38
        &p_275->g_38, // p_275->g_37
        {{1UL,0UL,0xA5L,246UL,0xA2L,0xA2L,246UL,0xA5L,0UL},{1UL,0UL,0xA5L,246UL,0xA2L,0xA2L,246UL,0xA5L,0UL},{1UL,0UL,0xA5L,246UL,0xA2L,0xA2L,246UL,0xA5L,0UL},{1UL,0UL,0xA5L,246UL,0xA2L,0xA2L,246UL,0xA5L,0UL},{1UL,0UL,0xA5L,246UL,0xA2L,0xA2L,246UL,0xA5L,0UL},{1UL,0UL,0xA5L,246UL,0xA2L,0xA2L,246UL,0xA5L,0UL},{1UL,0UL,0xA5L,246UL,0xA2L,0xA2L,246UL,0xA5L,0UL},{1UL,0UL,0xA5L,246UL,0xA2L,0xA2L,246UL,0xA5L,0UL}}, // p_275->g_52
        {0x3CL,0x7DL,0x3CL,0x3CL,0x7DL,0x3CL,0x3CL,0x7DL}, // p_275->g_54
        65527UL, // p_275->g_65
        {{{0x27CF8314L,0x27CF8314L},{0x27CF8314L,0x27CF8314L}},{{0x27CF8314L,0x27CF8314L},{0x27CF8314L,0x27CF8314L}},{{0x27CF8314L,0x27CF8314L},{0x27CF8314L,0x27CF8314L}},{{0x27CF8314L,0x27CF8314L},{0x27CF8314L,0x27CF8314L}}}, // p_275->g_70
        {0x3FA0E898L,0UL,0L}, // p_275->g_76
        1L, // p_275->g_80
        1L, // p_275->g_84
        0x15A5982EL, // p_275->g_87
        4UL, // p_275->g_92
        0x140BD20AL, // p_275->g_100
        3UL, // p_275->g_102
        {0x7D70L,0UL,-2L,0x3FF4847CB24E923EL,1L}, // p_275->g_120
        (void*)0, // p_275->g_121
        &p_275->g_120, // p_275->g_122
        0x53B13CA6591A8809L, // p_275->g_130
        &p_275->g_70[0][0][0], // p_275->g_136
        {{&p_275->g_102,(void*)0,(void*)0,(void*)0},{&p_275->g_102,(void*)0,(void*)0,(void*)0},{&p_275->g_102,(void*)0,(void*)0,(void*)0},{&p_275->g_102,(void*)0,(void*)0,(void*)0},{&p_275->g_102,(void*)0,(void*)0,(void*)0},{&p_275->g_102,(void*)0,(void*)0,(void*)0},{&p_275->g_102,(void*)0,(void*)0,(void*)0},{&p_275->g_102,(void*)0,(void*)0,(void*)0}}, // p_275->g_142
        {1L}, // p_275->g_145
        &p_275->g_145, // p_275->g_144
        (void*)0, // p_275->g_163
        &p_275->g_163, // p_275->g_162
        3UL, // p_275->g_190
        5UL, // p_275->g_221
        &p_275->g_145.f0, // p_275->g_224
        {0}, // p_275->g_228
        &p_275->g_130, // p_275->g_254
        &p_275->g_254, // p_275->g_253
        {{7UL,1UL,0x45382C0DL},1L}, // p_275->g_260
        {{{&p_275->g_260},{&p_275->g_260},{&p_275->g_260},{&p_275->g_260}},{{&p_275->g_260},{&p_275->g_260},{&p_275->g_260},{&p_275->g_260}},{{&p_275->g_260},{&p_275->g_260},{&p_275->g_260},{&p_275->g_260}}}, // p_275->g_261
        &p_275->g_260, // p_275->g_262
    };
    c_276 = c_277;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_275);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_275->g_11, "p_275->g_11", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_275->g_52[i][j], "p_275->g_52[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_275->g_54[i], "p_275->g_54[i]", print_hash_value);

    }
    transparent_crc(p_275->g_65, "p_275->g_65", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_275->g_70[i][j][k], "p_275->g_70[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_275->g_76.f0, "p_275->g_76.f0", print_hash_value);
    transparent_crc(p_275->g_76.f1, "p_275->g_76.f1", print_hash_value);
    transparent_crc(p_275->g_76.f2, "p_275->g_76.f2", print_hash_value);
    transparent_crc(p_275->g_80, "p_275->g_80", print_hash_value);
    transparent_crc(p_275->g_84, "p_275->g_84", print_hash_value);
    transparent_crc(p_275->g_87, "p_275->g_87", print_hash_value);
    transparent_crc(p_275->g_92, "p_275->g_92", print_hash_value);
    transparent_crc(p_275->g_100, "p_275->g_100", print_hash_value);
    transparent_crc(p_275->g_102, "p_275->g_102", print_hash_value);
    transparent_crc(p_275->g_120.f0, "p_275->g_120.f0", print_hash_value);
    transparent_crc(p_275->g_120.f1, "p_275->g_120.f1", print_hash_value);
    transparent_crc(p_275->g_120.f2, "p_275->g_120.f2", print_hash_value);
    transparent_crc(p_275->g_120.f3, "p_275->g_120.f3", print_hash_value);
    transparent_crc(p_275->g_120.f4, "p_275->g_120.f4", print_hash_value);
    transparent_crc(p_275->g_130, "p_275->g_130", print_hash_value);
    transparent_crc(p_275->g_145.f0, "p_275->g_145.f0", print_hash_value);
    transparent_crc(p_275->g_190, "p_275->g_190", print_hash_value);
    transparent_crc(p_275->g_221, "p_275->g_221", print_hash_value);
    transparent_crc(p_275->g_260.f0.f0, "p_275->g_260.f0.f0", print_hash_value);
    transparent_crc(p_275->g_260.f0.f1, "p_275->g_260.f0.f1", print_hash_value);
    transparent_crc(p_275->g_260.f0.f2, "p_275->g_260.f0.f2", print_hash_value);
    transparent_crc(p_275->g_260.f1, "p_275->g_260.f1", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
