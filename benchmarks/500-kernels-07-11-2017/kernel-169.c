// -g 26,28,8 -l 1,14,8
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


// Seed: 76764142

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint16_t  f1;
   volatile uint8_t  f2;
   volatile uint32_t  f3;
   uint64_t  f4;
};

struct S1 {
    volatile int32_t g_2;
    volatile uint8_t g_5;
    int8_t g_15;
    uint32_t g_22;
    int32_t **g_25;
    int32_t g_29;
    uint64_t g_84[1][6];
    int16_t g_104;
    int16_t g_106[2];
    int16_t *g_105;
    uint32_t g_114;
    int32_t g_122;
    uint8_t g_150[2][1][10];
    int32_t g_151;
    uint64_t g_169[10][7];
    uint32_t g_170;
    int64_t g_174;
    int64_t g_183[8];
    int32_t g_188;
    uint8_t g_189[7][1][7];
    int64_t g_220;
    uint64_t g_240;
    int32_t *g_249;
    uint32_t g_259[5][4][6];
    int32_t g_290;
    int8_t g_291;
    uint32_t g_292;
    int32_t g_369;
    uint16_t g_376;
    int32_t g_428;
    int32_t g_434[10][9][2];
    uint64_t g_452;
    uint32_t *g_494;
    uint32_t **g_493[9];
    int8_t g_585;
    int8_t g_587;
    uint64_t g_588[7][5][7];
    volatile uint8_t g_669;
    volatile uint8_t *g_668;
    volatile uint8_t **g_667;
    uint64_t *g_672;
    uint64_t **g_671[8];
    struct S0 g_691;
    struct S0 g_694;
    struct S0 g_700[2];
    struct S0 g_702;
    struct S0 *g_701;
    int64_t g_722;
    uint64_t *g_745[6][2];
    int8_t g_756[7];
    struct S0 g_758;
    volatile int16_t g_798;
    volatile int16_t *g_797[4];
    volatile int16_t ** volatile g_796;
    volatile int16_t ** volatile g_799;
    volatile int16_t ** volatile g_800;
    volatile int16_t ** volatile g_801;
    volatile int16_t **g_802[7];
    volatile int16_t ** volatile *g_795[2][5];
    struct S0 g_837;
    struct S0 g_838;
    struct S0 g_839;
    struct S0 g_841;
    int32_t **g_899;
    int32_t *** volatile g_898;
    volatile uint16_t * volatile *g_910;
    volatile uint16_t g_914;
    volatile uint16_t * volatile g_913;
    volatile uint16_t * volatile *g_912;
    struct S0 g_954;
    volatile int8_t g_971;
    uint32_t g_977;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S1 * p_982);
int32_t ** func_8(int32_t ** p_9, struct S1 * p_982);
int32_t ** func_10(uint64_t  p_11, int32_t ** p_12, uint8_t  p_13, int8_t  p_14, struct S1 * p_982);
struct S0  func_33(int32_t * p_34, int8_t  p_35, uint32_t  p_36, struct S1 * p_982);
uint8_t  func_44(uint16_t  p_45, int32_t ** p_46, uint32_t  p_47, struct S1 * p_982);
int64_t  func_49(int32_t * p_50, uint8_t  p_51, struct S1 * p_982);
uint8_t  func_52(uint8_t  p_53, int32_t  p_54, uint32_t  p_55, struct S1 * p_982);
uint8_t  func_69(int32_t * p_70, int32_t  p_71, int32_t * p_72, int16_t  p_73, struct S1 * p_982);
int32_t * func_75(int32_t ** p_76, int16_t  p_77, struct S1 * p_982);
int16_t  func_80(int32_t ** p_81, int32_t * p_82, struct S1 * p_982);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_982->g_5 p_982->g_2 p_982->g_15 p_982->g_22 p_982->g_25
 * writes: p_982->g_5 p_982->g_15 p_982->g_22 p_982->g_25
 */
int16_t  func_1(struct S1 * p_982)
{ /* block id: 4 */
    int32_t l_3[3][9][3] = {{{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL}},{{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL}},{{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL},{0x05F88E10L,0x20426A76L,0x389A9B8FL}}};
    int32_t *l_4[1][1];
    int32_t l_16 = 1L;
    int32_t ***l_30 = &p_982->g_25;
    int16_t l_41[9][4] = {{0L,0x671CL,0L,0L},{0L,0x671CL,0L,0L},{0L,0x671CL,0L,0L},{0L,0x671CL,0L,0L},{0L,0x671CL,0L,0L},{0L,0x671CL,0L,0L},{0L,0x671CL,0L,0L},{0L,0x671CL,0L,0L},{0L,0x671CL,0L,0L}};
    uint8_t l_958 = 255UL;
    struct S0 *l_962 = (void*)0;
    int32_t l_972 = 0x02B4DC14L;
    int32_t l_973 = 1L;
    int32_t l_974[6][3] = {{0x52DF99FDL,0x52725F15L,0x52DF99FDL},{0x52DF99FDL,0x52725F15L,0x52DF99FDL},{0x52DF99FDL,0x52725F15L,0x52DF99FDL},{0x52DF99FDL,0x52725F15L,0x52DF99FDL},{0x52DF99FDL,0x52725F15L,0x52DF99FDL},{0x52DF99FDL,0x52725F15L,0x52DF99FDL}};
    int8_t l_975 = 0L;
    int16_t l_976 = 9L;
    int64_t l_981 = 0x4945E98E366277CFL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_4[i][j] = &l_3[2][5][0];
    }
lbl_980:
    p_982->g_5++;
    (*l_30) = func_8(func_10(p_982->g_2, &l_4[0][0], p_982->g_15, l_16, p_982), p_982);
    for (l_16 = 21; (l_16 > 22); l_16++)
    { /* block id: 24 */
        int32_t *l_37 = (void*)0;
        int32_t **l_38 = &l_4[0][0];
        uint32_t l_48 = 4294967295UL;
        struct S0 *l_961 = (void*)0;
        int32_t l_966 = (-2L);
        int32_t l_969 = 0x14854B93L;
        int32_t l_970[3][8] = {{1L,5L,5L,1L,1L,5L,5L,1L},{1L,5L,5L,1L,1L,5L,5L,1L},{1L,5L,5L,1L,1L,5L,5L,1L}};
        int i, j;
        (1 + 1);
    }
    if (p_982->g_15)
        goto lbl_980;
    return l_981;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_8(int32_t ** p_9, struct S1 * p_982)
{ /* block id: 18 */
    int32_t ***l_26 = (void*)0;
    int32_t *l_28[2];
    int32_t **l_27 = &l_28[1];
    int i;
    for (i = 0; i < 2; i++)
        l_28[i] = &p_982->g_29;
    l_27 = (void*)0;
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_982->g_15 p_982->g_22 p_982->g_25
 * writes: p_982->g_15 p_982->g_22 p_982->g_249
 */
int32_t ** func_10(uint64_t  p_11, int32_t ** p_12, uint8_t  p_13, int8_t  p_14, struct S1 * p_982)
{ /* block id: 6 */
    int32_t l_17[10] = {0L,0x219AE86AL,1L,0x219AE86AL,0L,0L,0x219AE86AL,1L,0x219AE86AL,0L};
    int i;
    for (p_982->g_15 = 3; (p_982->g_15 <= 9); p_982->g_15 += 1)
    { /* block id: 9 */
        int i;
        (*p_12) = &l_17[p_982->g_15];
    }
    for (p_11 = 3; (p_11 != 10); p_11++)
    { /* block id: 14 */
        int32_t *l_20 = (void*)0;
        int32_t *l_21[10] = {&l_17[0],&l_17[0],&l_17[0],&l_17[0],&l_17[0],&l_17[0],&l_17[0],&l_17[0],&l_17[0],&l_17[0]};
        int i;
        --p_982->g_22;
    }
    return p_982->g_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_982->g_954
 * writes:
 */
struct S0  func_33(int32_t * p_34, int8_t  p_35, uint32_t  p_36, struct S1 * p_982)
{ /* block id: 486 */
    return p_982->g_954;
}


/* ------------------------------------------ */
/* 
 * reads : p_982->g_2 p_982->g_29 p_982->g_25 p_982->g_84 p_982->g_22 p_982->g_15 p_982->g_105 p_982->g_106 p_982->g_114 p_982->g_122 p_982->g_104 p_982->g_151 p_982->g_169 p_982->g_183 p_982->g_150 p_982->g_189 p_982->g_174 p_982->g_220 p_982->g_188 p_982->g_240 p_982->g_259 p_982->g_290 p_982->g_376 p_982->g_249 p_982->g_452 p_982->g_369 p_982->g_493 p_982->g_434 p_982->g_292 p_982->g_587 p_982->g_898 p_982->g_668 p_982->g_669 p_982->g_667 p_982->g_702.f0 p_982->g_910 p_982->g_912 p_982->g_691.f4 p_982->g_838.f0 p_982->g_694.f4
 * writes: p_982->g_84 p_982->g_22 p_982->g_15 p_982->g_104 p_982->g_114 p_982->g_122 p_982->g_150 p_982->g_151 p_982->g_169 p_982->g_170 p_982->g_174 p_982->g_189 p_982->g_188 p_982->g_240 p_982->g_183 p_982->g_249 p_982->g_259 p_982->g_290 p_982->g_376 p_982->g_106 p_982->g_428 p_982->g_452 p_982->g_220 p_982->g_587 p_982->g_25 p_982->g_899 p_982->g_292 p_982->g_588 p_982->g_691.f0 p_982->g_837.f4 p_982->g_838.f4 p_982->g_691.f4 p_982->g_838.f0
 */
uint8_t  func_44(uint16_t  p_45, int32_t ** p_46, uint32_t  p_47, struct S1 * p_982)
{ /* block id: 26 */
    int64_t l_62 = 3L;
    int32_t *l_74 = &p_982->g_29;
    uint64_t *l_83[4][5] = {{&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5]},{&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5]},{&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5]},{&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5]}};
    int32_t l_85[9][8][2] = {{{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)}},{{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)}},{{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)}},{{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)}},{{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)}},{{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)}},{{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)}},{{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)}},{{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)},{(-1L),(-7L)}}};
    int32_t *l_953 = &p_982->g_122;
    int i, j, k;
    (*l_953) = (func_49(&p_982->g_29, ((((func_52(((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(l_62, (~(safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s((0xB1E4F37316A37A54L >= p_982->g_2), (safe_add_func_int16_t_s_s((func_69(l_74, (*l_74), func_75(p_982->g_25, (safe_mul_func_uint8_t_u_u(((p_45 >= func_80(((p_982->g_84[0][5]--) , ((safe_lshift_func_uint8_t_u_u(p_982->g_22, 1)) , p_46)), &p_982->g_29, p_982)) , p_982->g_84[0][5]), p_982->g_292)), p_982), (*l_74), p_982) && 0x6DL), 1UL)))), p_47))))), 8)), 9L)) <= p_45), (*l_74), p_45, p_982) < (*l_74)) == (*l_74)) , (**p_982->g_667)) | 0UL), p_982) > p_982->g_694.f4);
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_982->g_668 p_982->g_669 p_982->g_702.f0 p_982->g_910 p_982->g_912 p_982->g_105 p_982->g_106 p_982->g_292 p_982->g_240 p_982->g_691.f4 p_982->g_838.f0
 * writes: p_982->g_220 p_982->g_114 p_982->g_292 p_982->g_22 p_982->g_240 p_982->g_588 p_982->g_691.f0 p_982->g_837.f4 p_982->g_838.f4 p_982->g_249 p_982->g_691.f4 p_982->g_838.f0
 */
int64_t  func_49(int32_t * p_50, uint8_t  p_51, struct S1 * p_982)
{ /* block id: 443 */
    uint64_t l_911 = 5UL;
    uint16_t *l_916 = &p_982->g_838.f1;
    uint16_t **l_915 = &l_916;
    uint32_t *l_924 = (void*)0;
    uint32_t **l_923 = &l_924;
    uint16_t l_925 = 0x949CL;
    uint32_t *l_926 = &p_982->g_292;
    uint32_t *l_927 = &p_982->g_22;
    int32_t l_928 = 0x3109DB4AL;
    uint8_t l_942[2];
    int32_t **l_944 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_942[i] = 5UL;
    if (((l_928 = ((*p_982->g_668) ^ ((safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(((((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u(p_982->g_702.f0, 0)) != (p_982->g_910 == (l_911 , p_982->g_912))), 14)) , (((void*)0 != l_915) , (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((((*l_927) = ((*l_926) |= ((((((*l_923) = func_75(func_8(&p_982->g_249, p_982), (*p_982->g_105), p_982)) == &p_982->g_292) | 0x6815L) && l_925) <= 0x4FL))) != l_925), l_925)), 5)), 5)))) , 0x01029285L) , l_925), p_51)), 0xD6D6967183BDAC73L)) != l_911))) < l_925))
    { /* block id: 448 */
        uint64_t *l_933 = (void*)0;
        int32_t l_935 = 0x76CD4721L;
        for (p_982->g_240 = 0; (p_982->g_240 == 26); ++p_982->g_240)
        { /* block id: 451 */
            uint64_t *l_934 = &p_982->g_588[4][3][5];
            l_935 = (safe_mod_func_uint8_t_u_u((((void*)0 != &p_51) >= ((*l_934) = ((void*)0 != l_933))), p_51));
            for (p_982->g_691.f0 = (-6); (p_982->g_691.f0 <= 47); p_982->g_691.f0 = safe_add_func_int64_t_s_s(p_982->g_691.f0, 9))
            { /* block id: 456 */
                for (p_982->g_837.f4 = 0; (p_982->g_837.f4 > 35); ++p_982->g_837.f4)
                { /* block id: 459 */
                    for (p_982->g_838.f4 = 0; (p_982->g_838.f4 == 57); ++p_982->g_838.f4)
                    { /* block id: 462 */
                        int32_t **l_943 = &p_982->g_249;
                        (*l_943) = func_75(&p_50, l_942[1], p_982);
                    }
                }
            }
        }
    }
    else
    { /* block id: 468 */
        int32_t ***l_945 = (void*)0;
        int32_t ***l_946 = &l_944;
        (*l_946) = l_944;
        for (p_982->g_691.f4 = 0; (p_982->g_691.f4 > 10); p_982->g_691.f4 = safe_add_func_uint64_t_u_u(p_982->g_691.f4, 1))
        { /* block id: 472 */
            int8_t l_949 = 0x7DL;
            int32_t **l_950 = &p_982->g_249;
            if (l_949)
                break;
            (*l_950) = (void*)0;
            return p_51;
        }
    }
    for (p_982->g_838.f0 = (-13); (p_982->g_838.f0 < 55); p_982->g_838.f0++)
    { /* block id: 480 */
        return l_942[1];
    }
    return l_942[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_982->g_898 p_982->g_668 p_982->g_669
 * writes: p_982->g_25 p_982->g_899
 */
uint8_t  func_52(uint8_t  p_53, int32_t  p_54, uint32_t  p_55, struct S1 * p_982)
{ /* block id: 439 */
    int32_t ***l_896[7];
    int32_t **l_897 = (void*)0;
    int i;
    for (i = 0; i < 7; i++)
        l_896[i] = &p_982->g_25;
    p_982->g_25 = (void*)0;
    (*p_982->g_898) = l_897;
    return (*p_982->g_668);
}


/* ------------------------------------------ */
/* 
 * reads : p_982->g_587 p_982->g_434
 * writes: p_982->g_587
 */
uint8_t  func_69(int32_t * p_70, int32_t  p_71, int32_t * p_72, int16_t  p_73, struct S1 * p_982)
{ /* block id: 319 */
    int8_t l_729 = 0x60L;
    uint32_t l_764 = 0xD6D82C00L;
    int32_t l_774[1][1][3];
    uint64_t l_775 = 18446744073709551608UL;
    uint16_t *l_779 = &p_982->g_691.f1;
    uint16_t **l_778 = &l_779;
    uint64_t *l_882[6] = {&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5],&p_982->g_84[0][5]};
    int32_t l_889 = 0x461FF7CEL;
    int32_t *l_895 = &p_982->g_434[2][4][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_774[i][j][k] = 0x4D08D2E1L;
        }
    }
    for (p_982->g_587 = (-3); (p_982->g_587 >= 15); p_982->g_587 = safe_add_func_uint8_t_u_u(p_982->g_587, 9))
    { /* block id: 322 */
        int16_t l_728 = (-9L);
        int32_t l_730 = 0x6DF5A4E6L;
        int32_t l_772 = 0x405DB9D7L;
        uint16_t l_827 = 0xB214L;
        struct S0 *l_840 = &p_982->g_841;
        uint16_t **l_860 = &l_779;
        int32_t *l_892 = &p_982->g_290;
        (1 + 1);
    }
    return (*l_895);
}


/* ------------------------------------------ */
/* 
 * reads : p_982->g_220 p_982->g_114
 * writes: p_982->g_220 p_982->g_114
 */
int32_t * func_75(int32_t ** p_76, int16_t  p_77, struct S1 * p_982)
{ /* block id: 217 */
    uint32_t l_536 = 1UL;
    int32_t l_539 = 0x6F88119AL;
    uint32_t l_596 = 4294967291UL;
    int32_t l_623[7] = {(-10L),(-1L),(-10L),(-10L),(-1L),(-10L),(-10L)};
    int32_t l_624 = 0x0E4B97D2L;
    uint64_t l_629 = 0xE3A9CE9D9A97CF3BL;
    int32_t l_641 = 6L;
    uint32_t **l_665 = &p_982->g_494;
    uint8_t *l_714 = &p_982->g_189[4][0][5];
    uint8_t *l_716 = &p_982->g_150[0][0][4];
    int32_t l_717 = 1L;
    int32_t l_718 = 5L;
    int32_t l_719 = 0x4E2DD879L;
    int32_t l_720 = 0x5A64845FL;
    int32_t l_721[7] = {2L,2L,2L,2L,2L,2L,2L};
    uint16_t l_723 = 0x9191L;
    int i;
    for (p_982->g_220 = 17; (p_982->g_220 != 28); p_982->g_220++)
    { /* block id: 220 */
        uint32_t l_537 = 0x37A93C69L;
        int32_t *l_538[10][7][1] = {{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}},{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}},{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}},{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}},{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}},{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}},{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}},{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}},{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}},{{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290},{&p_982->g_290}}};
        int32_t *l_571[7][2];
        int16_t *l_578 = (void*)0;
        uint64_t *l_593[4][5][7] = {{{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452}},{{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452}},{{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452}},{{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452},{&p_982->g_588[5][3][3],(void*)0,&p_982->g_452,&p_982->g_240,&p_982->g_169[4][2],&p_982->g_240,&p_982->g_452}}};
        int32_t ***l_600 = &p_982->g_25;
        int32_t ****l_599 = &l_600;
        int64_t l_605 = 0x0EA3A029B0CA7438L;
        struct S0 *l_699 = &p_982->g_700[0];
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_571[i][j] = &l_539;
        }
        l_539 &= (l_537 = l_536);
        for (p_982->g_114 = 0; (p_982->g_114 <= 3); p_982->g_114 += 1)
        { /* block id: 225 */
            uint16_t *l_554 = &p_982->g_376;
            uint32_t **l_580 = &p_982->g_494;
            int32_t l_582[7];
            uint8_t *l_594[4];
            uint32_t *l_595 = &p_982->g_22;
            int16_t **l_612 = &l_578;
            int64_t l_689 = 0x0A59BCB872A86867L;
            struct S0 *l_690 = &p_982->g_691;
            uint32_t l_706 = 0x49F21EF1L;
            int i;
            for (i = 0; i < 7; i++)
                l_582[i] = 0x787F5D29L;
            for (i = 0; i < 4; i++)
                l_594[i] = &p_982->g_189[2][0][4];
            (1 + 1);
        }
        l_723--;
    }
    return &p_982->g_290;
}


/* ------------------------------------------ */
/* 
 * reads : p_982->g_22 p_982->g_29 p_982->g_105 p_982->g_106 p_982->g_114 p_982->g_122 p_982->g_15 p_982->g_104 p_982->g_84 p_982->g_151 p_982->g_169 p_982->g_183 p_982->g_150 p_982->g_189 p_982->g_174 p_982->g_220 p_982->g_188 p_982->g_240 p_982->g_259 p_982->g_290 p_982->g_376 p_982->g_249 p_982->g_452 p_982->g_369 p_982->g_493 p_982->g_434 p_982->g_292
 * writes: p_982->g_22 p_982->g_15 p_982->g_104 p_982->g_114 p_982->g_122 p_982->g_150 p_982->g_151 p_982->g_169 p_982->g_170 p_982->g_174 p_982->g_189 p_982->g_188 p_982->g_240 p_982->g_183 p_982->g_249 p_982->g_259 p_982->g_290 p_982->g_376 p_982->g_106 p_982->g_428 p_982->g_452
 */
int16_t  func_80(int32_t ** p_81, int32_t * p_82, struct S1 * p_982)
{ /* block id: 28 */
    int32_t *l_91 = &p_982->g_29;
    int32_t **l_90 = &l_91;
    uint16_t l_119[9][4][5] = {{{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL}},{{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL}},{{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL}},{{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL}},{{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL}},{{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL}},{{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL}},{{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL}},{{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL},{0x1E54L,65527UL,65535UL,65535UL,8UL}}};
    int32_t l_233 = 0x09209464L;
    int32_t l_234 = 1L;
    int32_t l_236[9][7][4] = {{{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L}},{{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L}},{{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L}},{{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L}},{{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L}},{{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L}},{{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L}},{{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L}},{{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L},{1L,0x7954EC6FL,1L,1L}}};
    uint64_t *l_245[6] = {&p_982->g_169[4][1],&p_982->g_169[4][1],&p_982->g_169[4][1],&p_982->g_169[4][1],&p_982->g_169[4][1],&p_982->g_169[4][1]};
    uint32_t l_282 = 0xA397D05EL;
    int64_t l_283 = 0x138A96B655E26C65L;
    int8_t l_340[1];
    uint32_t *l_490 = &p_982->g_170;
    uint32_t **l_489 = &l_490;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_340[i] = 0x24L;
    p_82 = ((*l_90) = p_82);
    for (p_982->g_22 = (-10); (p_982->g_22 > 45); p_982->g_22 = safe_add_func_uint8_t_u_u(p_982->g_22, 1))
    { /* block id: 33 */
        uint32_t l_94 = 4294967293UL;
        uint8_t l_95 = 0x8BL;
        if (l_94)
            break;
        if (l_95)
            continue;
    }
lbl_352:
    for (p_982->g_15 = 0; (p_982->g_15 <= 0); p_982->g_15 += 1)
    { /* block id: 39 */
        uint32_t *l_98[8] = {&p_982->g_22,(void*)0,&p_982->g_22,&p_982->g_22,(void*)0,&p_982->g_22,&p_982->g_22,(void*)0};
        int32_t l_99 = 0x354446D1L;
        int32_t l_100 = 0x41A2B652L;
        int16_t *l_103[6][10] = {{&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104},{&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104},{&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104},{&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104},{&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104},{&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104,&p_982->g_104}};
        uint32_t *l_113 = &p_982->g_114;
        int8_t l_120 = 0x4DL;
        int32_t *l_121 = &p_982->g_122;
        uint16_t *l_125 = &l_119[1][0][2];
        int32_t ***l_165 = (void*)0;
        int32_t l_239 = (-1L);
        uint64_t *l_244 = &p_982->g_169[3][1];
        uint32_t l_331[6][5][5] = {{{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL}},{{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL}},{{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL}},{{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL}},{{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL}},{{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL},{0UL,0x4B276C7FL,2UL,0UL,9UL}}};
        int i, j, k;
        (*l_121) |= (safe_mod_func_int64_t_s_s((((*l_91) || (~((p_982->g_104 = ((p_982->g_22++) == 0x42CED756L)) == (((((void*)0 != p_982->g_105) != (*p_982->g_105)) == (safe_sub_func_int8_t_s_s(8L, (((l_100 >= (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((((*l_113)--) , (safe_rshift_func_int16_t_s_u((**l_90), 14))), 14)) <= (l_119[8][0][4] < l_120)), l_100))) != p_982->g_106[0]) | l_99)))) , 1UL)))) == l_120), 0x3C2AABE801A4E0C3L));
        if ((**l_90))
            break;
        if ((~(((*l_91) == (*l_121)) , (safe_rshift_func_int16_t_s_s((((*l_125) = p_982->g_15) , (safe_mod_func_uint64_t_u_u((((((*l_121) && (**l_90)) , (((((safe_div_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((((safe_add_func_uint64_t_u_u(((p_982->g_22++) <= ((((safe_mod_func_int16_t_s_s((0x4758L != (*l_121)), ((0xB517B2DEL && (0x3CCEL ^ 0x5C91L)) | p_982->g_106[0]))) == (*l_91)) || (*l_91)) <= 0x329EL)), p_982->g_15)) ^ p_982->g_15) < (*p_982->g_105)) | 0x91890F00L), (**l_90))) || (*l_91)), (*l_91))) , p_982->g_114) , p_982->g_104) >= 0x01L) != p_982->g_29)) < 1L) == 9L), (*l_121)))), (*p_982->g_105))))))
        { /* block id: 47 */
            uint32_t l_140 = 4294967292UL;
            uint8_t l_159 = 8UL;
            int32_t l_171 = 0L;
            for (l_120 = 1; (l_120 >= 0); l_120 -= 1)
            { /* block id: 50 */
                uint8_t *l_149[3];
                int32_t l_156 = 0x677BACE0L;
                int32_t ****l_162 = (void*)0;
                int32_t ***l_164 = &l_90;
                int32_t ****l_163 = &l_164;
                int32_t ****l_166 = &l_165;
                int32_t *l_167 = &l_99;
                uint64_t *l_168 = &p_982->g_169[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_149[i] = &p_982->g_150[0][0][4];
                (*l_121) = (p_982->g_84[p_982->g_15][(l_120 + 4)] && ((0x38F37F1DL <= ((-8L) == (p_982->g_106[l_120] , (safe_add_func_uint32_t_u_u((l_140 & (p_982->g_104 == p_982->g_106[l_120])), 0xA6B5C213L))))) || (safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((p_982->g_151 = (p_982->g_150[0][0][7] = ((safe_mod_func_int16_t_s_s((&l_91 != &p_82), (-5L))) != p_982->g_29))) > l_140), p_982->g_106[l_120])) <= (*l_91)), p_982->g_84[0][3])) , p_982->g_84[0][3]), p_982->g_106[0]))));
                l_171 &= (safe_sub_func_uint16_t_u_u((*l_91), (safe_lshift_func_uint8_t_u_u((l_156 = (+(p_982->g_150[0][0][4] = 0xBFL))), (safe_sub_func_uint64_t_u_u(0x475D44B987B1761CL, (p_982->g_170 = ((*l_168) |= ((((18446744073709551615UL > (((l_159 , ((((*l_167) ^= (safe_mul_func_int16_t_s_s((0x44L && (*l_121)), (((*l_163) = &p_81) == ((*l_166) = l_165))))) || p_982->g_104) ^ 8L)) && (*p_82)) , p_982->g_151)) ^ p_982->g_114) | (*l_91)) , 0xA39D6D4906CFE17AL)))))))));
            }
            for (l_171 = 0; (l_171 <= 0); l_171 += 1)
            { /* block id: 65 */
                (*l_90) = p_82;
            }
        }
        else
        { /* block id: 68 */
            int32_t l_172 = 0x4364D310L;
            int64_t *l_173 = &p_982->g_174;
            int32_t l_237[7] = {0x44D6ADBEL,0x44D6ADBEL,0x44D6ADBEL,0x44D6ADBEL,0x44D6ADBEL,0x44D6ADBEL,0x44D6ADBEL};
            int i;
            if ((((((*l_173) = l_172) , 0x29L) | (&p_982->g_122 != p_82)) != ((*l_125) ^= (((((((safe_add_func_uint16_t_u_u(9UL, ((&p_982->g_25 == &p_982->g_25) == (safe_mod_func_uint16_t_u_u((l_172 > (safe_add_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((*l_121) | (*p_982->g_105)), p_982->g_106[1])) >= 1UL), (*l_91)))), (*l_121)))))) , 0x45L) | 0xB4L) , p_982->g_15) && 4294967295UL) == p_982->g_183[4]) && (*l_121)))))
            { /* block id: 71 */
                int16_t l_217[6][5][8] = {{{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L}},{{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L}},{{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L}},{{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L}},{{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L}},{{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L},{0x20BCL,(-8L),(-10L),0x3871L,0x0D74L,0x0ADFL,0x3D82L,1L}}};
                int8_t l_221[10][10] = {{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,(-1L),(-8L),(-1L),0L,0x53L,0x53L,0L}};
                int i, j, k;
                for (p_982->g_22 = 0; (p_982->g_22 <= 0); p_982->g_22 += 1)
                { /* block id: 74 */
                    int8_t l_219 = 0x7FL;
                    for (l_100 = 0; (l_100 >= 0); l_100 -= 1)
                    { /* block id: 77 */
                        uint8_t *l_186[2];
                        int32_t l_187 = (-9L);
                        int32_t l_216[6] = {0L,0L,0L,0L,0L,0L};
                        int8_t *l_218 = &l_120;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_186[i] = &p_982->g_150[0][0][3];
                        l_221[0][5] = ((((safe_rshift_func_int16_t_s_s((*p_982->g_105), ((l_187 = p_982->g_150[1][0][8]) != (((--p_982->g_189[4][0][5]) || (safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((((l_216[5] = (safe_mul_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u((p_982->g_174 >= (((safe_sub_func_int8_t_s_s(((*l_218) = ((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_982->g_189[4][0][5], ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(0x25L, ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((0x059E3981L != (*p_82)), ((((safe_lshift_func_int16_t_s_u((*l_91), 10)) , 0x52BE0583L) == l_216[5]) ^ 1L))), 5)) ^ (*l_121)))), (*l_91))) > l_217[2][0][6]))), 18446744073709551611UL)) , p_982->g_29)), l_216[5])) > 0x6503A9D8L) < (*p_82))), 65535UL)) > 0x1417L) < p_982->g_150[1][0][0]) & p_982->g_22), p_982->g_174))) <= l_219) , (*p_982->g_105)) < 0x000CL), l_219)), l_217[1][0][4]))) && 0xD9L)))) && p_982->g_106[1]) <= p_982->g_220) < p_982->g_122);
                        if (l_172)
                            continue;
                    }
                }
            }
            else
            { /* block id: 86 */
                int64_t *l_227 = (void*)0;
                int32_t l_229 = 0x795DC2F3L;
                int32_t *l_230 = (void*)0;
                int32_t *l_231 = &l_229;
                int32_t *l_232[8];
                int8_t l_235[1];
                int8_t l_238 = 0x71L;
                int i;
                for (i = 0; i < 8; i++)
                    l_232[i] = &p_982->g_122;
                for (i = 0; i < 1; i++)
                    l_235[i] = 0L;
                for (p_982->g_22 = 0; (p_982->g_22 <= 0); p_982->g_22 += 1)
                { /* block id: 89 */
                    uint16_t l_226 = 1UL;
                    uint16_t l_228[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_228[i] = 0x6FCFL;
                    p_982->g_188 &= (((18446744073709551615UL ^ ((((safe_rshift_func_int8_t_s_u((((safe_mod_func_int16_t_s_s(l_226, ((-3L) & 0x6AAEL))) && l_226) ^ (p_82 != p_82)), (((l_173 != l_227) > p_982->g_189[3][0][6]) && 0UL))) < l_172) ^ p_982->g_122) < 4294967294UL)) <= (*l_121)) < l_226);
                    (*l_121) = l_228[0];
                    if (l_229)
                        continue;
                }
                ++p_982->g_240;
            }
        }
        for (p_982->g_188 = 0; (p_982->g_188 >= 0); p_982->g_188 -= 1)
        { /* block id: 99 */
            int64_t *l_243 = &p_982->g_183[3];
            uint16_t l_251 = 0xBD90L;
            int32_t l_284 = (-1L);
            int8_t l_344 = 1L;
            if (((((*l_243) = p_982->g_189[4][0][5]) && (l_244 != (l_245[3] = l_243))) && (*p_982->g_105)))
            { /* block id: 102 */
                int32_t *l_248 = &p_982->g_29;
                int32_t *l_250[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_250[i] = &l_233;
                for (p_982->g_174 = 0; (p_982->g_174 >= 0); p_982->g_174 -= 1)
                { /* block id: 105 */
                    int64_t l_246[5] = {0L,0L,0L,0L,0L};
                    int i;
                    if (l_246[4])
                    { /* block id: 106 */
                        uint8_t l_247 = 254UL;
                        return l_247;
                    }
                    else
                    { /* block id: 108 */
                        (*l_121) ^= 2L;
                        (*l_90) = (p_982->g_249 = l_248);
                    }
                    (*l_121) |= (*p_82);
                }
                --l_251;
                if ((*p_82))
                    continue;
            }
            else
            { /* block id: 117 */
                int32_t *l_254 = (void*)0;
                int32_t *l_255 = &l_236[2][5][2];
                int32_t *l_256 = &l_236[4][6][3];
                int32_t *l_257 = &l_236[4][5][2];
                int32_t *l_258[4][3] = {{&l_233,&l_236[7][3][2],&l_233},{&l_233,&l_236[7][3][2],&l_233},{&l_233,&l_236[7][3][2],&l_233},{&l_233,&l_236[7][3][2],&l_233}};
                int i, j;
                p_982->g_259[1][2][2]--;
            }
        }
    }
    for (p_982->g_240 = 0; (p_982->g_240 <= 3); p_982->g_240 += 1)
    { /* block id: 139 */
        int8_t l_349 = (-1L);
        uint32_t *l_350[6][6] = {{&p_982->g_170,&p_982->g_259[1][2][2],(void*)0,&p_982->g_259[1][2][2],&p_982->g_170,&p_982->g_170},{&p_982->g_170,&p_982->g_259[1][2][2],(void*)0,&p_982->g_259[1][2][2],&p_982->g_170,&p_982->g_170},{&p_982->g_170,&p_982->g_259[1][2][2],(void*)0,&p_982->g_259[1][2][2],&p_982->g_170,&p_982->g_170},{&p_982->g_170,&p_982->g_259[1][2][2],(void*)0,&p_982->g_259[1][2][2],&p_982->g_170,&p_982->g_170},{&p_982->g_170,&p_982->g_259[1][2][2],(void*)0,&p_982->g_259[1][2][2],&p_982->g_170,&p_982->g_170},{&p_982->g_170,&p_982->g_259[1][2][2],(void*)0,&p_982->g_259[1][2][2],&p_982->g_170,&p_982->g_170}};
        uint32_t **l_351 = &l_350[3][2];
        int32_t l_373 = 0x61939BDBL;
        int32_t l_437 = 0x1EF16127L;
        int32_t l_438 = 0x07125CA3L;
        int32_t l_439 = 0L;
        int32_t l_441[3];
        int32_t l_444 = 1L;
        int32_t l_446 = (-1L);
        int32_t l_447[3][7][8] = {{{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL}},{{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL}},{{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL},{(-9L),7L,0x2CC19016L,0x47138431L,0x03DB8F9CL,0x2F513C84L,0x2F513C84L,0x03DB8F9CL}}};
        int32_t *l_511 = &p_982->g_428;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_441[i] = 0x26E4AB80L;
        if (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_349, ((void*)0 == &p_982->g_106[1]))), (((*l_351) = l_350[3][2]) != (void*)0))) , 0x3A4FB4C6L))
        { /* block id: 141 */
            uint32_t **l_354 = (void*)0;
            int32_t l_355 = 0x0EDC463AL;
            int32_t l_375 = (-1L);
            uint64_t l_388 = 0UL;
            int32_t l_443 = (-9L);
            int32_t l_445 = (-2L);
            int32_t l_449 = 0x3341C22DL;
            int32_t l_450 = 0x091F6346L;
            int32_t l_451[10][9] = {{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)},{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)},{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)},{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)},{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)},{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)},{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)},{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)},{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)},{0x2563F27EL,(-9L),1L,(-9L),0x2563F27EL,0x2563F27EL,(-9L),1L,(-9L)}};
            int i, j;
            if (p_982->g_114)
                goto lbl_352;
            if (((*p_982->g_105) <= (+0x4922L)))
            { /* block id: 143 */
                int32_t l_371 = 0x3AC78C2EL;
                int32_t l_374 = 0x6622E1E5L;
                int32_t l_435 = 0x3B53F60FL;
                int32_t l_436 = 0x5901FD64L;
                int32_t l_440 = 1L;
                int32_t l_442 = 0L;
                int32_t l_448 = 0x0FDD7EB9L;
                int32_t l_455 = 0x73495B26L;
                int64_t *l_460 = &p_982->g_183[4];
                int64_t **l_461 = &l_460;
                int64_t *l_463 = &p_982->g_183[3];
                int64_t **l_462 = &l_463;
                int8_t *l_471 = &l_340[0];
                int32_t *l_472[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_472[i] = (void*)0;
                (*l_90) = (*l_90);
                for (p_982->g_290 = 3; (p_982->g_290 >= 0); p_982->g_290 -= 1)
                { /* block id: 147 */
                    uint32_t ***l_353 = &l_351;
                    int32_t l_370 = 0x3A10A6D1L;
                    int32_t l_372[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_372[i] = 2L;
                    l_355 = (((*l_353) = &l_350[3][2]) != l_354);
                    for (p_982->g_114 = 0; (p_982->g_114 <= 3); p_982->g_114 += 1)
                    { /* block id: 152 */
                        int32_t *l_356 = &l_233;
                        int32_t *l_357 = &p_982->g_188;
                        int32_t *l_358 = (void*)0;
                        int32_t *l_359 = &l_236[2][5][0];
                        int32_t *l_360 = &l_236[4][1][0];
                        int32_t *l_361 = &p_982->g_188;
                        int32_t *l_362 = &l_234;
                        int32_t *l_363 = &p_982->g_188;
                        int32_t *l_364 = &l_236[4][6][3];
                        int32_t *l_365 = &p_982->g_122;
                        int32_t *l_366 = &l_355;
                        int32_t *l_367 = &l_236[1][4][3];
                        int32_t *l_368[6] = {&l_236[0][1][0],&l_236[0][1][0],&l_236[0][1][0],&l_236[0][1][0],&l_236[0][1][0],&l_236[0][1][0]};
                        uint32_t *l_389 = &p_982->g_22;
                        int i, j, k;
                        p_982->g_376--;
                        (*l_361) = (((p_982->g_259[p_982->g_114][p_982->g_114][(p_982->g_114 + 1)] & (6UL && l_119[(p_982->g_290 + 5)][p_982->g_240][(p_982->g_240 + 1)])) , l_355) && (~(safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((*l_389) ^= ((p_982->g_169[5][4] < (safe_unary_minus_func_int64_t_s((l_349 , ((safe_mul_func_int16_t_s_s(((*p_982->g_105) |= ((+(0x16L && p_982->g_104)) , (safe_rshift_func_uint16_t_u_u((+(((**l_90) >= 1UL) >= (*l_367))), l_388)))), (**l_90))) <= 0x13241F1AL))))) != 0x4E364C16A2071DB9L)), l_372[2])), l_349))));
                        if (l_375)
                            break;
                    }
                    for (p_982->g_174 = 0; (p_982->g_174 <= 7); p_982->g_174 += 1)
                    { /* block id: 161 */
                        uint16_t *l_400[5][10][5] = {{{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0}},{{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0}},{{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0}},{{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0}},{{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0},{(void*)0,&l_119[8][0][4],&l_119[8][0][4],&p_982->g_376,(void*)0}}};
                        int32_t l_405 = 0x499ACC5EL;
                        uint8_t *l_406 = &p_982->g_189[4][0][5];
                        uint32_t *l_417 = &p_982->g_22;
                        int32_t l_426 = 0x6832A09DL;
                        int32_t *l_427 = &p_982->g_428;
                        int32_t *l_429 = &l_370;
                        int32_t *l_430 = &l_426;
                        int32_t *l_431 = &l_405;
                        int32_t *l_432 = (void*)0;
                        int32_t *l_433[3][4][5] = {{{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0},{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0},{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0},{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0}},{{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0},{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0},{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0},{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0}},{{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0},{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0},{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0},{(void*)0,&l_372[1],&l_372[1],(void*)0,(void*)0}}};
                        int i, j, k;
                        (*l_429) ^= ((safe_mul_func_uint8_t_u_u(l_375, (safe_mul_func_uint16_t_u_u(((-1L) | (((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s((((--p_982->g_376) <= ((p_982->g_240 >= ((l_405 &= ((**l_90) == 1L)) != 6UL)) != (((*l_406)++) <= (safe_mod_func_uint16_t_u_u((!(safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((l_374 &= ((((*l_417)++) , (((*l_427) = ((safe_lshift_func_uint16_t_u_u(((l_355 = (**l_90)) > l_371), 2)) && (((safe_add_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((l_355 = (((l_349 , p_982->g_104) > (**l_90)) != (**l_90))), 0xF8FF9C4B21BEA813L)) && p_982->g_183[3]), l_426)) | l_388) <= l_349))) , p_982->g_150[0][0][4])) || p_982->g_150[0][0][9])) && l_373), 2)), l_349)), 0x3A71L))), 65528UL))))) , l_355), l_426)) , l_355), p_982->g_114)), 0xB6L)) < 0x063B717F3EA9D1F0L) == l_349)), (*p_982->g_105))))) , (*p_982->g_249));
                        l_430 = p_82;
                        p_982->g_452--;
                        return l_455;
                    }
                    for (l_435 = 0; (l_435 <= 7); l_435 += 1)
                    { /* block id: 177 */
                        int32_t l_456[6][1] = {{0L},{0L},{0L},{0L},{0L},{0L}};
                        int i, j;
                        (*l_90) = (*l_90);
                        if ((*p_982->g_249))
                            break;
                        p_982->g_249 = ((*l_90) = ((l_456[1][0] ^= ((void*)0 == p_82)) , (void*)0));
                        return l_439;
                    }
                }
                l_450 = ((*p_982->g_249) < (safe_unary_minus_func_uint32_t_u((((safe_lshift_func_int8_t_s_s((((*l_461) = l_460) != ((*l_462) = &p_982->g_183[4])), 0)) & l_441[2]) , (safe_sub_func_uint64_t_u_u((l_439 == ((*l_471) = ((safe_unary_minus_func_int64_t_s((**l_90))) != ((safe_mod_func_uint64_t_u_u(1UL, (*l_91))) == (safe_mul_func_int8_t_s_s(p_982->g_122, p_982->g_150[0][0][7])))))), (*l_91)))))));
                if ((*p_82))
                    break;
            }
            else
            { /* block id: 191 */
                int64_t l_473 = (-1L);
                int16_t *l_486 = &p_982->g_104;
                int32_t *l_487 = &l_441[0];
                int32_t *l_488 = &l_451[2][6];
                uint32_t ***l_491 = &l_354;
                uint32_t **l_492 = &l_350[3][2];
                (*l_488) = (((*l_487) &= ((!(l_473 , (safe_add_func_uint16_t_u_u(((((*l_486) = (safe_div_func_uint8_t_u_u((((*p_982->g_105) = 0x5476L) & (&l_90 == ((safe_mod_func_uint32_t_u_u((((~(safe_mul_func_uint16_t_u_u((((~(((*l_91) | l_388) && ((p_982->g_369 , p_982->g_188) , 0UL))) || (safe_add_func_int32_t_s_s((*p_82), l_473))) == l_473), l_450))) || 0x328A42DB1F400A0FL) == 0xDE794EC2L), p_982->g_84[0][5])) , (void*)0))), 0x77L))) < l_444) < (**l_90)), 65535UL)))) | (-1L))) , (*p_982->g_249));
                l_373 = (((252UL && p_982->g_122) || ((**l_90) < (((l_492 = ((*l_491) = l_489)) == p_982->g_493[0]) | l_444))) , (*p_82));
            }
        }
        else
        { /* block id: 200 */
            uint16_t *l_501[1];
            uint16_t **l_502 = (void*)0;
            uint16_t **l_503 = (void*)0;
            uint16_t **l_504 = &l_501[0];
            int32_t l_517 = 0L;
            int32_t l_518[1][2];
            uint32_t *l_523 = (void*)0;
            uint32_t *l_524 = &p_982->g_22;
            int32_t *l_525 = &l_438;
            int64_t *l_526 = (void*)0;
            uint8_t *l_533 = &p_982->g_150[0][0][7];
            int i, j;
            for (i = 0; i < 1; i++)
                l_501[i] = &l_119[8][0][4];
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_518[i][j] = 0L;
            }
            (*l_525) = (((safe_div_func_uint32_t_u_u((((((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((&p_982->g_376 != ((*l_504) = l_501[0])), ((void*)0 == &l_351))) , (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((l_511 == &p_982->g_428) >= (safe_lshift_func_uint8_t_u_s((((safe_div_func_int64_t_s_s(((l_350[0][2] != (void*)0) > (safe_unary_minus_func_int8_t_s((((*l_524) = ((((++p_982->g_169[3][1]) && ((safe_mul_func_uint8_t_u_u((p_982->g_29 , l_439), l_518[0][1])) == p_982->g_290)) || 2UL) , (*l_91))) <= (*l_91))))), (**l_90))) , 0x16L) <= l_518[0][0]), l_441[0]))) >= (*p_982->g_105)), 15)), 0x18L)), (*p_982->g_105)))), p_982->g_15)) > 0xC1L) , p_982->g_434[2][1][1]) | l_518[0][0]) != 0x396F6787L), 4294967295UL)) <= p_982->g_150[0][0][4]) , (*p_982->g_249));
            (*l_525) = (((((((void*)0 == l_526) , (safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((**l_90), p_982->g_292)), (l_447[0][2][4] ^ ((*l_533) = (p_982->g_189[4][0][5] |= 249UL))))), (((((*l_91) < ((&p_982->g_220 == l_526) , p_982->g_114)) < (*p_982->g_249)) <= (*p_982->g_249)) && 1L)))) , 0x5330C973L) | (**l_90)) >= (*p_982->g_249)) > (**l_90));
            (*l_90) = p_82;
        }
        for (l_373 = 3; (l_373 >= 0); l_373 -= 1)
        { /* block id: 212 */
            return l_349;
        }
    }
    return (*l_91);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_983;
    struct S1* p_982 = &c_983;
    struct S1 c_984 = {
        0x16210B99L, // p_982->g_2
        1UL, // p_982->g_5
        (-1L), // p_982->g_15
        0xBBB531EAL, // p_982->g_22
        (void*)0, // p_982->g_25
        0x48C9F13AL, // p_982->g_29
        {{4UL,4UL,4UL,4UL,4UL,4UL}}, // p_982->g_84
        0x5673L, // p_982->g_104
        {4L,4L}, // p_982->g_106
        &p_982->g_106[0], // p_982->g_105
        0xB59C6DFEL, // p_982->g_114
        0L, // p_982->g_122
        {{{252UL,0xDDL,252UL,252UL,0xDDL,252UL,252UL,0xDDL,252UL,252UL}},{{252UL,0xDDL,252UL,252UL,0xDDL,252UL,252UL,0xDDL,252UL,252UL}}}, // p_982->g_150
        0x3EA91755L, // p_982->g_151
        {{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL},{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL},{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL},{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL},{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL},{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL},{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL},{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL},{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL},{0UL,0x8C93FC3FCEF47AD6L,18446744073709551606UL,1UL,1UL,1UL,18446744073709551606UL}}, // p_982->g_169
        0xC83CD3FBL, // p_982->g_170
        0x12DBE5E4B7D50DD5L, // p_982->g_174
        {0x57CCDFA98FEA865AL,0x57CCDFA98FEA865AL,0x57CCDFA98FEA865AL,0x57CCDFA98FEA865AL,0x57CCDFA98FEA865AL,0x57CCDFA98FEA865AL,0x57CCDFA98FEA865AL,0x57CCDFA98FEA865AL}, // p_982->g_183
        0x25432B50L, // p_982->g_188
        {{{254UL,7UL,254UL,254UL,7UL,254UL,254UL}},{{254UL,7UL,254UL,254UL,7UL,254UL,254UL}},{{254UL,7UL,254UL,254UL,7UL,254UL,254UL}},{{254UL,7UL,254UL,254UL,7UL,254UL,254UL}},{{254UL,7UL,254UL,254UL,7UL,254UL,254UL}},{{254UL,7UL,254UL,254UL,7UL,254UL,254UL}},{{254UL,7UL,254UL,254UL,7UL,254UL,254UL}}}, // p_982->g_189
        0x2646F1837497FD41L, // p_982->g_220
        0x78A4FEAA90E3AF4CL, // p_982->g_240
        &p_982->g_122, // p_982->g_249
        {{{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL}},{{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL}},{{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL}},{{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL}},{{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL},{0xC1A4616DL,4294967295UL,0x3ECF46E8L,0x678DB66EL,7UL,0x678DB66EL}}}, // p_982->g_259
        (-9L), // p_982->g_290
        0x6AL, // p_982->g_291
        0x2D43CEBEL, // p_982->g_292
        6L, // p_982->g_369
        65535UL, // p_982->g_376
        (-2L), // p_982->g_428
        {{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}},{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}},{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}},{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}},{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}},{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}},{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}},{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}},{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}},{{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L},{(-6L),0x058EC457L}}}, // p_982->g_434
        18446744073709551608UL, // p_982->g_452
        (void*)0, // p_982->g_494
        {&p_982->g_494,&p_982->g_494,&p_982->g_494,&p_982->g_494,&p_982->g_494,&p_982->g_494,&p_982->g_494,&p_982->g_494,&p_982->g_494}, // p_982->g_493
        0x07L, // p_982->g_585
        (-1L), // p_982->g_587
        {{{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L}},{{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L}},{{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L}},{{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L}},{{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L}},{{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L}},{{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L},{0UL,1UL,1UL,0UL,0x04986843C12EC585L,0x946D8CADDF8E9B56L,0x93C0383DBC6F60D3L}}}, // p_982->g_588
        8UL, // p_982->g_669
        &p_982->g_669, // p_982->g_668
        &p_982->g_668, // p_982->g_667
        &p_982->g_84[0][4], // p_982->g_672
        {(void*)0,&p_982->g_672,(void*)0,(void*)0,&p_982->g_672,(void*)0,(void*)0,&p_982->g_672}, // p_982->g_671
        {4294967291UL,0x9D36L,1UL,0xF872D419L,7UL}, // p_982->g_691
        {0xA6BD1FD2L,0xA4A3L,248UL,0xB1467B08L,0x999B320473C75467L}, // p_982->g_694
        {{0xEA4F913CL,0x51B6L,0xBAL,4294967295UL,0x02992A4101AC3920L},{0xEA4F913CL,0x51B6L,0xBAL,4294967295UL,0x02992A4101AC3920L}}, // p_982->g_700
        {0xA516AD72L,0xF033L,255UL,4294967290UL,2UL}, // p_982->g_702
        &p_982->g_702, // p_982->g_701
        0x09485B9FF09C6371L, // p_982->g_722
        {{&p_982->g_691.f4,&p_982->g_691.f4},{&p_982->g_691.f4,&p_982->g_691.f4},{&p_982->g_691.f4,&p_982->g_691.f4},{&p_982->g_691.f4,&p_982->g_691.f4},{&p_982->g_691.f4,&p_982->g_691.f4},{&p_982->g_691.f4,&p_982->g_691.f4}}, // p_982->g_745
        {0x53L,0x53L,0x53L,0x53L,0x53L,0x53L,0x53L}, // p_982->g_756
        {0UL,1UL,0x6DL,8UL,7UL}, // p_982->g_758
        8L, // p_982->g_798
        {&p_982->g_798,&p_982->g_798,&p_982->g_798,&p_982->g_798}, // p_982->g_797
        &p_982->g_797[2], // p_982->g_796
        &p_982->g_797[0], // p_982->g_799
        &p_982->g_797[1], // p_982->g_800
        &p_982->g_797[1], // p_982->g_801
        {&p_982->g_797[2],&p_982->g_797[2],&p_982->g_797[2],&p_982->g_797[2],&p_982->g_797[2],&p_982->g_797[2],&p_982->g_797[2]}, // p_982->g_802
        {{&p_982->g_802[3],&p_982->g_800,&p_982->g_801,&p_982->g_800,&p_982->g_802[3]},{&p_982->g_802[3],&p_982->g_800,&p_982->g_801,&p_982->g_800,&p_982->g_802[3]}}, // p_982->g_795
        {4294967295UL,65535UL,1UL,0xBE041C39L,18446744073709551611UL}, // p_982->g_837
        {1UL,0xED3FL,255UL,5UL,0x521678445BEABD3DL}, // p_982->g_838
        {0xF3E7C735L,1UL,5UL,4294967295UL,0x89E047EC243AF60EL}, // p_982->g_839
        {0x79C4F403L,65529UL,0x60L,4294967291UL,2UL}, // p_982->g_841
        (void*)0, // p_982->g_899
        &p_982->g_899, // p_982->g_898
        (void*)0, // p_982->g_910
        0xCC74L, // p_982->g_914
        &p_982->g_914, // p_982->g_913
        &p_982->g_913, // p_982->g_912
        {0UL,0x3664L,1UL,0xA22A9186L,0UL}, // p_982->g_954
        0x11L, // p_982->g_971
        5UL, // p_982->g_977
    };
    c_983 = c_984;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_982);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_982->g_2, "p_982->g_2", print_hash_value);
    transparent_crc(p_982->g_5, "p_982->g_5", print_hash_value);
    transparent_crc(p_982->g_15, "p_982->g_15", print_hash_value);
    transparent_crc(p_982->g_22, "p_982->g_22", print_hash_value);
    transparent_crc(p_982->g_29, "p_982->g_29", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_982->g_84[i][j], "p_982->g_84[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_982->g_104, "p_982->g_104", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_982->g_106[i], "p_982->g_106[i]", print_hash_value);

    }
    transparent_crc(p_982->g_114, "p_982->g_114", print_hash_value);
    transparent_crc(p_982->g_122, "p_982->g_122", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_982->g_150[i][j][k], "p_982->g_150[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_982->g_151, "p_982->g_151", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_982->g_169[i][j], "p_982->g_169[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_982->g_170, "p_982->g_170", print_hash_value);
    transparent_crc(p_982->g_174, "p_982->g_174", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_982->g_183[i], "p_982->g_183[i]", print_hash_value);

    }
    transparent_crc(p_982->g_188, "p_982->g_188", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_982->g_189[i][j][k], "p_982->g_189[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_982->g_220, "p_982->g_220", print_hash_value);
    transparent_crc(p_982->g_240, "p_982->g_240", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_982->g_259[i][j][k], "p_982->g_259[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_982->g_290, "p_982->g_290", print_hash_value);
    transparent_crc(p_982->g_291, "p_982->g_291", print_hash_value);
    transparent_crc(p_982->g_292, "p_982->g_292", print_hash_value);
    transparent_crc(p_982->g_369, "p_982->g_369", print_hash_value);
    transparent_crc(p_982->g_376, "p_982->g_376", print_hash_value);
    transparent_crc(p_982->g_428, "p_982->g_428", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_982->g_434[i][j][k], "p_982->g_434[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_982->g_452, "p_982->g_452", print_hash_value);
    transparent_crc(p_982->g_585, "p_982->g_585", print_hash_value);
    transparent_crc(p_982->g_587, "p_982->g_587", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_982->g_588[i][j][k], "p_982->g_588[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_982->g_669, "p_982->g_669", print_hash_value);
    transparent_crc(p_982->g_691.f0, "p_982->g_691.f0", print_hash_value);
    transparent_crc(p_982->g_691.f1, "p_982->g_691.f1", print_hash_value);
    transparent_crc(p_982->g_691.f2, "p_982->g_691.f2", print_hash_value);
    transparent_crc(p_982->g_691.f3, "p_982->g_691.f3", print_hash_value);
    transparent_crc(p_982->g_691.f4, "p_982->g_691.f4", print_hash_value);
    transparent_crc(p_982->g_694.f0, "p_982->g_694.f0", print_hash_value);
    transparent_crc(p_982->g_694.f1, "p_982->g_694.f1", print_hash_value);
    transparent_crc(p_982->g_694.f2, "p_982->g_694.f2", print_hash_value);
    transparent_crc(p_982->g_694.f3, "p_982->g_694.f3", print_hash_value);
    transparent_crc(p_982->g_694.f4, "p_982->g_694.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_982->g_700[i].f0, "p_982->g_700[i].f0", print_hash_value);
        transparent_crc(p_982->g_700[i].f1, "p_982->g_700[i].f1", print_hash_value);
        transparent_crc(p_982->g_700[i].f2, "p_982->g_700[i].f2", print_hash_value);
        transparent_crc(p_982->g_700[i].f3, "p_982->g_700[i].f3", print_hash_value);
        transparent_crc(p_982->g_700[i].f4, "p_982->g_700[i].f4", print_hash_value);

    }
    transparent_crc(p_982->g_702.f0, "p_982->g_702.f0", print_hash_value);
    transparent_crc(p_982->g_702.f1, "p_982->g_702.f1", print_hash_value);
    transparent_crc(p_982->g_702.f2, "p_982->g_702.f2", print_hash_value);
    transparent_crc(p_982->g_702.f3, "p_982->g_702.f3", print_hash_value);
    transparent_crc(p_982->g_702.f4, "p_982->g_702.f4", print_hash_value);
    transparent_crc(p_982->g_722, "p_982->g_722", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_982->g_756[i], "p_982->g_756[i]", print_hash_value);

    }
    transparent_crc(p_982->g_758.f0, "p_982->g_758.f0", print_hash_value);
    transparent_crc(p_982->g_758.f1, "p_982->g_758.f1", print_hash_value);
    transparent_crc(p_982->g_758.f2, "p_982->g_758.f2", print_hash_value);
    transparent_crc(p_982->g_758.f3, "p_982->g_758.f3", print_hash_value);
    transparent_crc(p_982->g_758.f4, "p_982->g_758.f4", print_hash_value);
    transparent_crc(p_982->g_798, "p_982->g_798", print_hash_value);
    transparent_crc(p_982->g_837.f0, "p_982->g_837.f0", print_hash_value);
    transparent_crc(p_982->g_837.f1, "p_982->g_837.f1", print_hash_value);
    transparent_crc(p_982->g_837.f2, "p_982->g_837.f2", print_hash_value);
    transparent_crc(p_982->g_837.f3, "p_982->g_837.f3", print_hash_value);
    transparent_crc(p_982->g_837.f4, "p_982->g_837.f4", print_hash_value);
    transparent_crc(p_982->g_838.f0, "p_982->g_838.f0", print_hash_value);
    transparent_crc(p_982->g_838.f1, "p_982->g_838.f1", print_hash_value);
    transparent_crc(p_982->g_838.f2, "p_982->g_838.f2", print_hash_value);
    transparent_crc(p_982->g_838.f3, "p_982->g_838.f3", print_hash_value);
    transparent_crc(p_982->g_838.f4, "p_982->g_838.f4", print_hash_value);
    transparent_crc(p_982->g_839.f0, "p_982->g_839.f0", print_hash_value);
    transparent_crc(p_982->g_839.f1, "p_982->g_839.f1", print_hash_value);
    transparent_crc(p_982->g_839.f2, "p_982->g_839.f2", print_hash_value);
    transparent_crc(p_982->g_839.f3, "p_982->g_839.f3", print_hash_value);
    transparent_crc(p_982->g_839.f4, "p_982->g_839.f4", print_hash_value);
    transparent_crc(p_982->g_841.f0, "p_982->g_841.f0", print_hash_value);
    transparent_crc(p_982->g_841.f1, "p_982->g_841.f1", print_hash_value);
    transparent_crc(p_982->g_841.f2, "p_982->g_841.f2", print_hash_value);
    transparent_crc(p_982->g_841.f3, "p_982->g_841.f3", print_hash_value);
    transparent_crc(p_982->g_841.f4, "p_982->g_841.f4", print_hash_value);
    transparent_crc(p_982->g_914, "p_982->g_914", print_hash_value);
    transparent_crc(p_982->g_954.f0, "p_982->g_954.f0", print_hash_value);
    transparent_crc(p_982->g_954.f1, "p_982->g_954.f1", print_hash_value);
    transparent_crc(p_982->g_954.f2, "p_982->g_954.f2", print_hash_value);
    transparent_crc(p_982->g_954.f3, "p_982->g_954.f3", print_hash_value);
    transparent_crc(p_982->g_954.f4, "p_982->g_954.f4", print_hash_value);
    transparent_crc(p_982->g_971, "p_982->g_971", print_hash_value);
    transparent_crc(p_982->g_977, "p_982->g_977", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
