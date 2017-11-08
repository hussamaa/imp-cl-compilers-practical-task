// -g 11,48,4 -l 1,48,4
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


// Seed: 531982533

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t  f0;
   int16_t  f1;
   int16_t  f2;
};

struct S1 {
    int32_t g_3;
    volatile int32_t g_4[4][7];
    uint64_t g_22;
    int32_t g_58;
    uint32_t g_66;
    int64_t g_69;
    uint16_t g_93;
    int32_t *g_106;
    uint32_t g_126[6][8][5];
    uint16_t g_134;
    int8_t g_151;
    uint8_t g_153;
    uint64_t g_157;
    int32_t g_178;
    uint8_t g_195[3][8][1];
    int64_t g_209;
    int16_t g_218;
    int64_t g_225[2];
    int64_t *g_224;
    int16_t g_227;
    int64_t g_229;
    int8_t g_262;
    uint64_t g_263;
    uint64_t *g_271;
    union U0 g_277[8];
    int16_t g_293;
    int32_t **g_319;
    uint64_t g_336;
    int32_t g_454;
    uint16_t g_479;
    uint64_t **g_579;
    uint64_t ***g_578;
    int32_t g_689;
    volatile int32_t g_703;
    int32_t *g_726;
    volatile int32_t ***g_900;
    volatile int32_t **** volatile g_899;
    uint16_t *g_915;
    uint16_t **g_914;
    uint16_t *** volatile g_913;
    volatile uint64_t g_1008;
    volatile uint64_t *g_1007;
    volatile uint64_t ** volatile g_1006;
    uint64_t g_1059;
    int32_t ** volatile g_1073;
    volatile int32_t g_1120;
    int32_t g_1149;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S1 * p_1156);
int32_t * func_11(int32_t * p_12, int64_t  p_13, int32_t * p_14, uint32_t  p_15, int32_t * p_16, struct S1 * p_1156);
uint64_t  func_24(uint32_t  p_25, int32_t  p_26, uint64_t * p_27, struct S1 * p_1156);
uint64_t * func_28(int64_t  p_29, uint32_t  p_30, struct S1 * p_1156);
int64_t  func_31(int32_t * p_32, uint64_t * p_33, union U0  p_34, union U0  p_35, struct S1 * p_1156);
int32_t * func_36(int32_t * p_37, int32_t  p_38, uint64_t * p_39, uint8_t  p_40, uint16_t  p_41, struct S1 * p_1156);
int32_t * func_42(uint16_t  p_43, struct S1 * p_1156);
int8_t  func_44(uint64_t  p_45, struct S1 * p_1156);
uint32_t  func_46(int32_t  p_47, int32_t * p_48, uint64_t * p_49, int32_t * p_50, int32_t * p_51, struct S1 * p_1156);
int8_t  func_55(int32_t * p_56, struct S1 * p_1156);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1156->g_3 p_1156->g_1006 p_1156->g_1007 p_1156->g_1008
 * writes: p_1156->g_3
 */
uint64_t  func_1(struct S1 * p_1156)
{ /* block id: 4 */
    int32_t *l_2[3];
    int32_t l_5 = 0x56B3BFA3L;
    uint32_t l_6 = 4294967295UL;
    uint64_t *l_74 = &p_1156->g_22;
    uint64_t *l_108[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_525 = 0UL;
    int8_t *l_1090 = &p_1156->g_262;
    int8_t **l_1089[6][10] = {{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090},{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090},{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090},{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090},{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090},{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090}};
    uint64_t l_1100 = 0xD816316E8DCF2541L;
    int32_t l_1151 = 6L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_2[i] = &p_1156->g_3;
    l_6--;
    for (p_1156->g_3 = 5; (p_1156->g_3 <= 18); p_1156->g_3++)
    { /* block id: 8 */
        uint32_t l_54[9][4] = {{0UL,0xE18E6F96L,0xE72F236BL,4294967295UL},{0UL,0xE18E6F96L,0xE72F236BL,4294967295UL},{0UL,0xE18E6F96L,0xE72F236BL,4294967295UL},{0UL,0xE18E6F96L,0xE72F236BL,4294967295UL},{0UL,0xE18E6F96L,0xE72F236BL,4294967295UL},{0UL,0xE18E6F96L,0xE72F236BL,4294967295UL},{0UL,0xE18E6F96L,0xE72F236BL,4294967295UL},{0UL,0xE18E6F96L,0xE72F236BL,4294967295UL},{0UL,0xE18E6F96L,0xE72F236BL,4294967295UL}};
        uint64_t *l_1078[9][2][10];
        int8_t *l_1086 = &p_1156->g_151;
        int8_t **l_1085[5][9] = {{&l_1086,&l_1086,(void*)0,&l_1086,&l_1086,&l_1086,(void*)0,&l_1086,&l_1086},{&l_1086,&l_1086,(void*)0,&l_1086,&l_1086,&l_1086,(void*)0,&l_1086,&l_1086},{&l_1086,&l_1086,(void*)0,&l_1086,&l_1086,&l_1086,(void*)0,&l_1086,&l_1086},{&l_1086,&l_1086,(void*)0,&l_1086,&l_1086,&l_1086,(void*)0,&l_1086,&l_1086},{&l_1086,&l_1086,(void*)0,&l_1086,&l_1086,&l_1086,(void*)0,&l_1086,&l_1086}};
        int8_t **l_1088 = &l_1086;
        int32_t l_1098 = 0x0A6DCBC3L;
        int32_t ***l_1109 = &p_1156->g_319;
        int32_t ****l_1108 = &l_1109;
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 10; k++)
                    l_1078[i][j][k] = &p_1156->g_263;
            }
        }
        (1 + 1);
    }
    return (**p_1156->g_1006);
}


/* ------------------------------------------ */
/* 
 * reads : p_1156->g_263 p_1156->g_209 p_1156->g_58 p_1156->g_3 p_1156->g_195 p_1156->g_218 p_1156->g_4 p_1156->g_454 p_1156->g_151 p_1156->g_66 p_1156->g_578 p_1156->g_579 p_1156->g_726 p_1156->g_178 p_1156->g_224 p_1156->g_225 p_1156->g_153 p_1156->g_479 p_1156->g_899 p_1156->g_913 p_1156->g_915 p_1156->g_227 p_1156->g_271 p_1156->g_22 p_1156->g_69 p_1156->g_229 p_1156->g_703 p_1156->g_689 p_1156->g_262 p_1156->g_93 p_1156->g_1006 p_1156->g_293 p_1156->g_1059 p_1156->g_900 p_1156->g_126
 * writes: p_1156->g_277.f2 p_1156->g_454 p_1156->g_151 p_1156->g_66 p_1156->g_153 p_1156->g_195 p_1156->g_277.f0 p_1156->g_914 p_1156->g_726 p_1156->g_178 p_1156->g_227 p_1156->g_58 p_1156->g_69 p_1156->g_22 p_1156->g_263 p_1156->g_689 p_1156->g_225 p_1156->g_126 p_1156->g_134 p_1156->g_218 p_1156->g_1059 p_1156->g_479 p_1156->g_93 p_1156->g_4
 */
int32_t * func_11(int32_t * p_12, int64_t  p_13, int32_t * p_14, uint32_t  p_15, int32_t * p_16, struct S1 * p_1156)
{ /* block id: 315 */
    int32_t l_530 = 0x5A926D55L;
    int16_t *l_537 = &p_1156->g_277[7].f2;
    int32_t **l_548[2];
    uint32_t *l_720 = &p_1156->g_126[3][0][0];
    uint32_t *l_723 = &p_1156->g_66;
    uint64_t *l_730 = (void*)0;
    uint8_t l_752 = 1UL;
    uint64_t ****l_782[10][1][2] = {{{&p_1156->g_578,&p_1156->g_578}},{{&p_1156->g_578,&p_1156->g_578}},{{&p_1156->g_578,&p_1156->g_578}},{{&p_1156->g_578,&p_1156->g_578}},{{&p_1156->g_578,&p_1156->g_578}},{{&p_1156->g_578,&p_1156->g_578}},{{&p_1156->g_578,&p_1156->g_578}},{{&p_1156->g_578,&p_1156->g_578}},{{&p_1156->g_578,&p_1156->g_578}},{{&p_1156->g_578,&p_1156->g_578}}};
    uint64_t l_846 = 0x8EE506ADBAD58878L;
    uint8_t l_894 = 1UL;
    uint16_t *l_912 = (void*)0;
    uint16_t **l_911 = &l_912;
    int8_t l_997 = (-1L);
    uint64_t l_1037 = 1UL;
    uint16_t l_1054 = 0x4B1EL;
    int16_t l_1058 = 0x7561L;
    uint8_t l_1069 = 0UL;
    uint16_t *l_1072 = &p_1156->g_93;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_548[i] = &p_1156->g_106;
    if (((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((l_530 ^ ((safe_mod_func_uint32_t_u_u((~((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((void*)0 != &p_1156->g_93), 3)), ((*l_537) = p_13))) != ((safe_mod_func_int32_t_s_s((!((&p_1156->g_106 != ((safe_sub_func_uint16_t_u_u(p_1156->g_263, ((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(l_530, (l_530 != p_1156->g_209))), 6)) > 0x155FL), l_530)) , p_1156->g_58))) , l_548[0])) || 0x22L)), (*p_12))) == p_1156->g_209))), (*p_14))) ^ p_1156->g_195[0][1][0])) != 0xE15A02607B201E8FL) ^ p_1156->g_218), p_15)), p_1156->g_4[0][0])) == p_1156->g_454))
    { /* block id: 317 */
        int32_t l_552 = (-10L);
        int64_t *l_573 = (void*)0;
        int32_t l_585 = 0x422053B2L;
        uint64_t *l_619 = &p_1156->g_157;
        uint32_t l_621[8];
        int32_t l_638 = 0x4D97F23FL;
        int32_t l_640 = 7L;
        int32_t l_641 = 0x53C1F47EL;
        int32_t l_643 = (-1L);
        int32_t l_644 = (-4L);
        int32_t l_645 = 0x137D90E3L;
        int32_t l_646 = 0x78692F02L;
        int32_t l_647 = (-1L);
        int32_t l_648 = 0x0AF2E559L;
        int32_t l_649 = 0L;
        int32_t l_650[7] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
        int32_t **l_659 = &p_1156->g_106;
        int8_t *l_674 = (void*)0;
        uint64_t ****l_784 = &p_1156->g_578;
        int32_t ****l_793[1];
        uint16_t l_854 = 65535UL;
        int i;
        for (i = 0; i < 8; i++)
            l_621[i] = 0UL;
        for (i = 0; i < 1; i++)
            l_793[i] = (void*)0;
        (*p_16) = (*p_12);
        if (p_1156->g_454)
            goto lbl_848;
lbl_848:
        for (p_1156->g_151 = (-13); (p_1156->g_151 >= 6); p_1156->g_151 = safe_add_func_uint64_t_u_u(p_1156->g_151, 8))
        { /* block id: 321 */
            int64_t l_551[8][2];
            int32_t *l_553 = &p_1156->g_58;
            int32_t l_606[10][4][4] = {{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}},{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}},{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}},{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}},{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}},{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}},{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}},{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}},{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}},{{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L},{0x7BDD3ABBL,0x7BDD3ABBL,5L,0L}}};
            int32_t l_620 = 0L;
            uint32_t l_652 = 0UL;
            int16_t *l_663 = &p_1156->g_227;
            int32_t ****l_684 = (void*)0;
            int8_t **l_716 = &l_674;
            int16_t l_729[4][1];
            uint32_t l_749 = 0xD9066CC5L;
            uint8_t *l_767[2][10] = {{&l_752,&p_1156->g_195[1][2][0],&p_1156->g_195[1][2][0],&p_1156->g_195[1][2][0],&l_752,&l_752,&p_1156->g_195[1][2][0],&p_1156->g_195[1][2][0],&p_1156->g_195[1][2][0],&l_752},{&l_752,&p_1156->g_195[1][2][0],&p_1156->g_195[1][2][0],&p_1156->g_195[1][2][0],&l_752,&l_752,&p_1156->g_195[1][2][0],&p_1156->g_195[1][2][0],&p_1156->g_195[1][2][0],&l_752}};
            int32_t l_813[6];
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 2; j++)
                    l_551[i][j] = 0x252C9B0DF282F369L;
            }
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_729[i][j] = 0x4228L;
            }
            for (i = 0; i < 6; i++)
                l_813[i] = 1L;
            (1 + 1);
        }
        for (p_1156->g_66 = 11; (p_1156->g_66 >= 43); p_1156->g_66 = safe_add_func_uint32_t_u_u(p_1156->g_66, 8))
        { /* block id: 462 */
            uint8_t *l_852 = &l_752;
            uint8_t **l_851 = &l_852;
            int32_t l_853[3][4][2] = {{{1L,0x25752482L},{1L,0x25752482L},{1L,0x25752482L},{1L,0x25752482L}},{{1L,0x25752482L},{1L,0x25752482L},{1L,0x25752482L},{1L,0x25752482L}},{{1L,0x25752482L},{1L,0x25752482L},{1L,0x25752482L},{1L,0x25752482L}}};
            int i, j, k;
            (*p_16) |= ((((void*)0 == &p_1156->g_153) >= (((*l_851) = l_674) == l_674)) > ((*p_14) & (((void*)0 != (**l_784)) == l_853[2][0][1])));
        }
        --l_854;
    }
    else
    { /* block id: 467 */
        int32_t *l_877 = &p_1156->g_178;
        uint8_t *l_886 = &p_1156->g_153;
        uint8_t *l_887 = (void*)0;
        uint8_t *l_888[1][1][5];
        int8_t *l_889 = &p_1156->g_277[7].f0;
        int32_t l_918 = 0L;
        int32_t l_928 = 0x0275BD6BL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_888[i][j][k] = (void*)0;
            }
        }
        (*p_16) |= ((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((!((safe_mul_func_int16_t_s_s((!0x3E7CL), 0x3E2EL)) || ((*p_1156->g_726) > ((safe_mul_func_int8_t_s_s(((*l_889) = ((((((safe_sub_func_int8_t_s_s((((l_877 != (p_14 = l_877)) < p_15) >= (((safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s((+(~0x132DL)), (safe_rshift_func_uint16_t_u_s(p_15, 13)))) <= (p_1156->g_195[1][2][0] &= ((*l_886) &= (safe_add_func_int64_t_s_s(((&p_1156->g_218 == &p_1156->g_218) , p_15), (*p_1156->g_224)))))), p_13)) <= p_1156->g_209) | p_15)), p_13)) ^ 246UL) , p_1156->g_479) <= 0UL) >= (*l_877)) != (*p_12))), (*l_877))) || 5L)))), p_13)), 0xD5ABBABED0607027L)) != p_1156->g_66) | (*l_877)), 1UL)), (*p_1156->g_726))), 15)), (*l_877))), 0x00ADE894L)) & (*l_877));
        (*p_16) ^= (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((l_894 == (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((*l_877), (p_1156->g_899 != (void*)0))), p_15))), (safe_add_func_uint32_t_u_u(p_15, (*p_12))))), (((safe_lshift_func_uint16_t_u_s(p_1156->g_153, p_1156->g_195[1][2][0])) != p_13) || 0x3EFEL)));
        for (p_15 = 0; (p_15 == 11); p_15 = safe_add_func_uint8_t_u_u(p_15, 6))
        { /* block id: 476 */
            int16_t l_919 = 1L;
            for (l_846 = (-28); (l_846 > 9); l_846 = safe_add_func_uint32_t_u_u(l_846, 5))
            { /* block id: 479 */
                int64_t l_923 = 0x0643105DD52C8AE8L;
                for (l_530 = 0; (l_530 >= (-15)); --l_530)
                { /* block id: 482 */
                    (*p_1156->g_913) = l_911;
                    if ((*p_1156->g_726))
                        continue;
                    p_14 = p_14;
                }
                for (p_1156->g_454 = 26; (p_1156->g_454 != (-15)); p_1156->g_454--)
                { /* block id: 489 */
                    uint16_t l_920 = 1UL;
                    if ((*p_16))
                        break;
                    l_920--;
                    p_1156->g_726 = p_16;
                    if ((((*l_877) | (*p_1156->g_915)) < 0x7612CA71L))
                    { /* block id: 493 */
                        (*l_877) = l_923;
                        if (l_919)
                            continue;
                        (*l_877) = 1L;
                    }
                    else
                    { /* block id: 497 */
                        int32_t *l_924 = (void*)0;
                        return l_924;
                    }
                }
            }
        }
        for (p_1156->g_227 = 0; (p_1156->g_227 <= (-21)); p_1156->g_227 = safe_sub_func_uint32_t_u_u(p_1156->g_227, 5))
        { /* block id: 505 */
            int32_t l_927[7][4][9] = {{{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L}},{{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L}},{{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L}},{{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L}},{{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L}},{{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L}},{{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L},{0L,0x10FB5270L,0L,0L,0x10FB5270L,0L,0L,0x10FB5270L,0L}}};
            uint32_t l_929 = 0UL;
            int i, j, k;
            ++l_929;
        }
    }
    (*p_16) = ((***p_1156->g_578) == (0x3EB54CF8AB3BFEEBL | p_15));
    if (((p_1156->g_58 = ((*p_1156->g_726) = 5L)) | (safe_lshift_func_int16_t_s_s(p_1156->g_479, p_1156->g_22))))
    { /* block id: 512 */
        int16_t l_936 = 1L;
        int8_t *l_947 = &p_1156->g_151;
        int32_t l_948 = 0L;
        int32_t *l_1028 = &p_1156->g_689;
        if (((safe_lshift_func_int16_t_s_s((-3L), (((l_936 || l_936) >= (safe_lshift_func_uint16_t_u_s(l_936, ((*l_537) = (safe_rshift_func_uint16_t_u_s((l_948 = ((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((~p_15) > ((safe_lshift_func_uint16_t_u_u((((((l_936 > ((void*)0 == &p_1156->g_293)) != 8UL) && l_936) < 0x4985E66FL) | p_1156->g_3), 2)) > p_13)), l_936)), 5)) , p_15) , (void*)0) != l_947)), p_1156->g_69)))))) , 1L))) ^ l_936))
        { /* block id: 515 */
            int32_t l_964 = 0x5CF3F5E8L;
            int64_t l_969 = (-1L);
            int64_t l_977 = 0x539501C4E322EEE5L;
            int8_t **l_995 = &l_947;
            int32_t ***l_1011 = (void*)0;
            int32_t ****l_1010 = &l_1011;
            int32_t *****l_1009 = &l_1010;
            for (p_1156->g_69 = 0; (p_1156->g_69 >= 0); p_1156->g_69 -= 1)
            { /* block id: 518 */
                int16_t *l_951[9][10][2] = {{{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218}},{{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218}},{{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218}},{{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218}},{{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218}},{{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218}},{{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218}},{{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218}},{{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218},{&p_1156->g_227,&p_1156->g_218}}};
                int32_t l_970 = 0x5E3446EBL;
                int8_t **l_996 = &l_947;
                uint16_t ***l_1002 = &l_911;
                uint32_t *l_1003 = &p_1156->g_66;
                int i, j, k;
                l_948 = (safe_lshift_func_int16_t_s_u((p_1156->g_227 |= p_13), (safe_mul_func_int8_t_s_s((!(safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((p_1156->g_229 & ((*p_1156->g_726) |= (!((((***p_1156->g_578)++) ^ (p_1156->g_703 ^ ((safe_lshift_func_int8_t_s_u(l_964, 4)) < ((!(&p_1156->g_195[1][2][0] != (void*)0)) ^ ((safe_div_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s((((((&l_720 == (void*)0) < l_936) || l_936) <= p_15) & p_1156->g_3), 6)) || p_15) && 1UL) , 0x78EE49A8L), l_969)) > 1L))))) ^ l_970)))), p_13)), 0xFBE4B47CL)), l_964))), p_1156->g_66))));
                for (p_1156->g_689 = 0; (p_1156->g_689 >= 0); p_1156->g_689 -= 1)
                { /* block id: 525 */
                    int32_t l_993[8][10] = {{1L,0x4DECE196L,0x06C7051EL,(-1L),6L,(-7L),(-7L),6L,(-1L),0x06C7051EL},{1L,0x4DECE196L,0x06C7051EL,(-1L),6L,(-7L),(-7L),6L,(-1L),0x06C7051EL},{1L,0x4DECE196L,0x06C7051EL,(-1L),6L,(-7L),(-7L),6L,(-1L),0x06C7051EL},{1L,0x4DECE196L,0x06C7051EL,(-1L),6L,(-7L),(-7L),6L,(-1L),0x06C7051EL},{1L,0x4DECE196L,0x06C7051EL,(-1L),6L,(-7L),(-7L),6L,(-1L),0x06C7051EL},{1L,0x4DECE196L,0x06C7051EL,(-1L),6L,(-7L),(-7L),6L,(-1L),0x06C7051EL},{1L,0x4DECE196L,0x06C7051EL,(-1L),6L,(-7L),(-7L),6L,(-1L),0x06C7051EL},{1L,0x4DECE196L,0x06C7051EL,(-1L),6L,(-7L),(-7L),6L,(-1L),0x06C7051EL}};
                    int8_t **l_994 = &l_947;
                    int i, j;
                    p_14 = p_12;
                    l_964 = ((safe_mod_func_int8_t_s_s((((safe_div_func_uint64_t_u_u(((l_995 = ((((**p_1156->g_579) > (safe_div_func_int16_t_s_s((l_970 &= ((l_977 ^ (&p_1156->g_195[1][2][0] != &l_752)) && (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_1156->g_479, ((safe_unary_minus_func_int64_t_s((l_948 = ((safe_add_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((p_15 | (safe_add_func_int64_t_s_s(((*p_1156->g_224) = 1L), p_1156->g_151))), (safe_rshift_func_uint8_t_u_u((l_936 >= p_1156->g_227), p_1156->g_229)))) && (*p_1156->g_224)), l_993[7][9])) , (*p_1156->g_271)) <= p_13), (**p_1156->g_579))) && 0x6A7CL)))) ^ p_1156->g_262))), l_936)))), p_1156->g_4[0][0]))) , p_15) , l_994)) != l_996), 0x1EC3A3625F9FE35BL)) <= p_1156->g_178) != 1L), p_1156->g_93)) , l_997);
                    (*p_16) = 0x032FAE64L;
                    (*p_1156->g_726) &= (safe_mod_func_int64_t_s_s((l_936 > ((p_1156->g_209 , (((*l_720) = ((safe_sub_func_uint64_t_u_u(((void*)0 != l_1002), ((void*)0 == l_1003))) & p_15)) ^ (safe_mul_func_uint8_t_u_u((&p_1156->g_899 != ((((void*)0 != p_1156->g_1006) != 0x4AL) , l_1009)), (-5L))))) <= (*p_1156->g_224))), (***p_1156->g_578)));
                    for (l_752 = 0; (l_752 <= 0); l_752 += 1)
                    { /* block id: 537 */
                        uint32_t l_1012 = 4294967295UL;
                        int i, j, k;
                        p_1156->g_726 = p_16;
                        (*p_1156->g_726) &= 0x48D533CAL;
                        --l_1012;
                        (*p_16) = (&p_1156->g_195[(p_1156->g_69 + 1)][(l_752 + 5)][p_1156->g_689] == &l_752);
                    }
                }
            }
            p_1156->g_726 = p_14;
        }
        else
        { /* block id: 546 */
            int32_t l_1015 = 9L;
            l_1028 = p_14;
            for (p_1156->g_134 = 0; p_1156->g_134 < 2; p_1156->g_134 += 1)
            {
                p_1156->g_225[p_1156->g_134] = (-1L);
            }
            return &p_1156->g_178;
        }
    }
    else
    { /* block id: 553 */
        int32_t ****l_1036 = (void*)0;
        int32_t *****l_1035[7][9] = {{&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,(void*)0},{&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,(void*)0},{&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,(void*)0},{&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,(void*)0},{&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,(void*)0},{&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,(void*)0},{&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,&l_1036,(void*)0}};
        int16_t l_1052 = (-4L);
        int32_t l_1053 = 0x423A611BL;
        int64_t l_1057 = 0x4D9C6556CDB2A1DAL;
        int32_t *l_1062[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_1062[i] = &p_1156->g_178;
        l_1053 = (((safe_lshift_func_int8_t_s_s((((p_1156->g_218 = (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((l_1035[3][6] == (void*)0), l_1037)) ^ (safe_sub_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(p_13, 1UL)) ^ (safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((!((*p_14) , (0x1EB7D4EDEB371191L <= (safe_sub_func_int8_t_s_s(p_15, ((safe_mul_func_int16_t_s_s(((l_1052 ^ 0UL) , (-1L)), p_1156->g_262)) , p_1156->g_4[2][3])))))), p_15)) == (*p_16)), p_1156->g_225[1])) | 0L) <= p_1156->g_153), p_13))) || (-1L)), p_1156->g_293))), 0x2B37L))) , 5UL) && 0x0CC6C0D39437A2D8L), 0)) != p_1156->g_689) , 0x19DF0F1CL);
        --l_1054;
        p_1156->g_1059++;
        p_16 = l_1062[0];
    }
    p_1156->g_4[0][0] = ((safe_rshift_func_uint16_t_u_s((!((*l_1072) ^= ((safe_div_func_uint32_t_u_u((((0x0DL | (((*p_16) = (&l_548[1] == ((safe_mod_func_uint16_t_u_u(((*p_1156->g_915) = ((~l_1069) ^ (*p_16))), 65532UL)) , (*p_1156->g_899)))) <= 0L)) >= p_15) >= (safe_add_func_uint16_t_u_u(((((*p_1156->g_224) = ((void*)0 != p_14)) >= 7UL) <= p_1156->g_126[4][1][2]), 65535UL))), (*p_12))) != p_1156->g_1059))), p_1156->g_1059)) >= p_1156->g_58);
    return p_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_1156->g_157 p_1156->g_22 p_1156->g_58
 * writes: p_1156->g_157 p_1156->g_58
 */
uint64_t  func_24(uint32_t  p_25, int32_t  p_26, uint64_t * p_27, struct S1 * p_1156)
{ /* block id: 306 */
    int32_t *l_524 = &p_1156->g_58;
    for (p_1156->g_157 = 25; (p_1156->g_157 < 39); ++p_1156->g_157)
    { /* block id: 309 */
        return (*p_27);
    }
    (*l_524) = 0L;
    (*l_524) &= p_25;
    return (*l_524);
}


/* ------------------------------------------ */
/* 
 * reads : p_1156->g_293 p_1156->g_263 p_1156->g_218
 * writes: p_1156->g_293 p_1156->g_263 p_1156->g_178 p_1156->g_218
 */
uint64_t * func_28(int64_t  p_29, uint32_t  p_30, struct S1 * p_1156)
{ /* block id: 247 */
    uint32_t l_389 = 0UL;
    int32_t l_472[2][5][7] = {{{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL},{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL},{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL},{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL},{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL}},{{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL},{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL},{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL},{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL},{0x421A43EEL,0x744FAA9EL,0x3B1CFBEAL,0x397BD805L,0x3B1CFBEAL,0x744FAA9EL,0x421A43EEL}}};
    int64_t l_478 = (-2L);
    uint64_t *l_521 = &p_1156->g_22;
    int i, j, k;
    for (p_1156->g_293 = (-24); (p_1156->g_293 > (-4)); ++p_1156->g_293)
    { /* block id: 250 */
        uint64_t **l_396 = &p_1156->g_271;
        int8_t *l_423 = (void*)0;
        uint64_t ***l_435 = &l_396;
        int32_t l_462 = (-1L);
        int32_t l_468 = 0x30DADCC1L;
        int32_t l_474 = 1L;
        int32_t l_475 = 0x6C711A88L;
        int32_t l_476[1][2];
        int8_t l_511[2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_476[i][j] = 0L;
        }
        for (i = 0; i < 2; i++)
            l_511[i] = 1L;
        for (p_1156->g_263 = (-11); (p_1156->g_263 == 5); p_1156->g_263++)
        { /* block id: 253 */
            int32_t *l_390 = &p_1156->g_178;
            uint64_t **l_395 = &p_1156->g_271;
            uint8_t l_404 = 255UL;
            uint64_t **l_429 = (void*)0;
            int32_t l_463 = 6L;
            int32_t l_477[9][5] = {{4L,0x7F5CEE79L,4L,0x5B2AF2DEL,(-1L)},{4L,0x7F5CEE79L,4L,0x5B2AF2DEL,(-1L)},{4L,0x7F5CEE79L,4L,0x5B2AF2DEL,(-1L)},{4L,0x7F5CEE79L,4L,0x5B2AF2DEL,(-1L)},{4L,0x7F5CEE79L,4L,0x5B2AF2DEL,(-1L)},{4L,0x7F5CEE79L,4L,0x5B2AF2DEL,(-1L)},{4L,0x7F5CEE79L,4L,0x5B2AF2DEL,(-1L)},{4L,0x7F5CEE79L,4L,0x5B2AF2DEL,(-1L)},{4L,0x7F5CEE79L,4L,0x5B2AF2DEL,(-1L)}};
            int i, j;
            if (l_389)
                break;
            (*l_390) = (~p_29);
            for (p_1156->g_218 = 0; (p_1156->g_218 < (-27)); p_1156->g_218 = safe_sub_func_int16_t_s_s(p_1156->g_218, 6))
            { /* block id: 258 */
                int8_t *l_397 = &p_1156->g_151;
                int8_t l_410[2][9] = {{5L,(-1L),(-1L),5L,5L,(-1L),(-1L),5L,5L},{5L,(-1L),(-1L),5L,5L,(-1L),(-1L),5L,5L}};
                int32_t **l_411 = &l_390;
                int64_t *l_412 = &p_1156->g_69;
                int64_t *l_413 = &p_1156->g_229;
                uint64_t **l_420 = &p_1156->g_271;
                int16_t *l_510[3][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                uint16_t *l_516 = (void*)0;
                uint16_t *l_517 = &p_1156->g_93;
                int32_t *l_520 = &l_475;
                int i, j;
                (1 + 1);
            }
            if (p_30)
                break;
        }
    }
    return l_521;
}


/* ------------------------------------------ */
/* 
 * reads : p_1156->g_178 p_1156->g_3 p_1156->g_195 p_1156->g_218 p_1156->g_69 p_1156->g_229 p_1156->g_157 p_1156->g_271 p_1156->g_22 p_1156->g_263 p_1156->g_336 p_1156->g_58 p_1156->g_225 p_1156->g_126 p_1156->g_293 p_1156->g_153 p_1156->g_151 p_1156->g_224
 * writes: p_1156->g_93 p_1156->g_58 p_1156->g_229 p_1156->g_293 p_1156->g_178 p_1156->g_319 p_1156->g_134 p_1156->g_157 p_1156->g_336 p_1156->g_195 p_1156->g_262 p_1156->g_151 p_1156->g_218 p_1156->g_225
 */
int64_t  func_31(int32_t * p_32, uint64_t * p_33, union U0  p_34, union U0  p_35, struct S1 * p_1156)
{ /* block id: 192 */
    int16_t *l_278 = &p_1156->g_218;
    int32_t l_279 = (-1L);
    int32_t **l_316[2][5][10] = {{{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106},{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106},{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106},{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106},{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106}},{{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106},{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106},{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106},{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106},{&p_1156->g_106,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,(void*)0,&p_1156->g_106,&p_1156->g_106,&p_1156->g_106}}};
    int i, j, k;
    l_279 |= (9UL <= (l_278 != (void*)0));
    for (p_34.f0 = 7; (p_34.f0 < (-8)); p_34.f0 = safe_sub_func_int16_t_s_s(p_34.f0, 4))
    { /* block id: 196 */
        uint8_t l_315 = 9UL;
        int32_t l_331 = (-3L);
        int32_t l_333 = (-7L);
        int16_t l_334 = 0x0322L;
        int32_t l_335 = 0L;
        int8_t *l_366 = (void*)0;
        for (p_1156->g_93 = (-29); (p_1156->g_93 > 30); ++p_1156->g_93)
        { /* block id: 199 */
            uint32_t l_327[7][7] = {{4294967294UL,1UL,1UL,4294967294UL,4294967286UL,0x1FC32AD5L,0x1FC32AD5L},{4294967294UL,1UL,1UL,4294967294UL,4294967286UL,0x1FC32AD5L,0x1FC32AD5L},{4294967294UL,1UL,1UL,4294967294UL,4294967286UL,0x1FC32AD5L,0x1FC32AD5L},{4294967294UL,1UL,1UL,4294967294UL,4294967286UL,0x1FC32AD5L,0x1FC32AD5L},{4294967294UL,1UL,1UL,4294967294UL,4294967286UL,0x1FC32AD5L,0x1FC32AD5L},{4294967294UL,1UL,1UL,4294967294UL,4294967286UL,0x1FC32AD5L,0x1FC32AD5L},{4294967294UL,1UL,1UL,4294967294UL,4294967286UL,0x1FC32AD5L,0x1FC32AD5L}};
            int32_t l_332[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_332[i] = 0x7D202A44L;
            for (p_1156->g_58 = 0; (p_1156->g_58 <= (-29)); --p_1156->g_58)
            { /* block id: 202 */
                uint8_t l_302[8][2] = {{1UL,4UL},{1UL,4UL},{1UL,4UL},{1UL,4UL},{1UL,4UL},{1UL,4UL},{1UL,4UL},{1UL,4UL}};
                uint8_t *l_307 = &l_302[5][0];
                int16_t *l_314 = (void*)0;
                int32_t ***l_317 = (void*)0;
                int32_t ***l_318[8] = {&l_316[0][1][6],&l_316[0][1][6],&l_316[0][1][6],&l_316[0][1][6],&l_316[0][1][6],&l_316[0][1][6],&l_316[0][1][6],&l_316[0][1][6]};
                uint16_t *l_326 = &p_1156->g_134;
                uint64_t *l_328 = &p_1156->g_157;
                int i, j;
                for (p_1156->g_229 = 0; (p_1156->g_229 == (-13)); p_1156->g_229 = safe_sub_func_uint32_t_u_u(p_1156->g_229, 8))
                { /* block id: 205 */
                    int32_t *l_288 = &l_279;
                    int32_t l_289 = 3L;
                    int32_t *l_290 = &l_289;
                    int32_t *l_291 = &l_289;
                    int32_t *l_292 = &p_1156->g_178;
                    int32_t *l_294 = &p_1156->g_178;
                    int32_t *l_295 = &p_1156->g_178;
                    int32_t *l_296 = &l_279;
                    int32_t *l_297 = &p_1156->g_178;
                    int32_t *l_298 = (void*)0;
                    int32_t *l_299 = &l_289;
                    int32_t *l_300 = &l_279;
                    int32_t *l_301[7][10][2] = {{{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0}},{{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0}},{{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0}},{{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0}},{{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0}},{{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0}},{{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0},{&p_1156->g_58,(void*)0}}};
                    int i, j, k;
                    --l_302[5][0];
                    for (p_1156->g_293 = 9; (p_1156->g_293 > (-15)); p_1156->g_293 = safe_sub_func_int32_t_s_s(p_1156->g_293, 6))
                    { /* block id: 209 */
                        if ((*p_32))
                            break;
                        (*l_292) &= (p_1156->g_195[1][2][0] > p_1156->g_218);
                    }
                }
                p_1156->g_178 |= ((((*l_307) &= p_1156->g_69) & (safe_mod_func_int64_t_s_s(((((safe_div_func_uint64_t_u_u(((0x6474987593218EA1L == ((void*)0 != l_314)) < 0x47L), l_315)) != ((p_1156->g_319 = l_316[0][1][6]) == (void*)0)) , (safe_lshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*l_326) = p_35.f0), p_1156->g_229)), 7UL)) > 0xD1AEL) ^ p_35.f0), 7))) < (-6L)), 1UL))) <= l_327[2][1]);
                l_332[0] ^= (l_331 |= (((*l_328) |= l_327[2][1]) , (safe_div_func_uint64_t_u_u((*p_1156->g_271), 18446744073709551615UL))));
                ++p_1156->g_336;
            }
        }
        for (l_331 = (-29); (l_331 == (-15)); ++l_331)
        { /* block id: 226 */
            uint8_t *l_352 = (void*)0;
            int32_t l_367 = 0x14C3BD62L;
            int32_t **l_370 = (void*)0;
            int32_t **l_371 = &p_1156->g_106;
            for (p_1156->g_58 = (-23); (p_1156->g_58 < (-22)); ++p_1156->g_58)
            { /* block id: 229 */
                uint8_t *l_347 = &p_1156->g_195[1][2][0];
                int32_t ***l_355 = &p_1156->g_319;
                int8_t *l_378 = (void*)0;
                int8_t *l_379 = &p_1156->g_151;
                int16_t *l_382 = &p_1156->g_293;
                p_1156->g_178 ^= ((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((--(*l_347)), l_333)), p_35.f0)) , ((3L != (l_352 == &l_315)) || l_333));
                l_333 = (((((safe_lshift_func_int8_t_s_s(1L, 7)) & ((void*)0 != &l_334)) || (((void*)0 == l_355) >= 0x0946L)) < (((((((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((p_34.f0 <= ((void*)0 == l_366)), l_334)), 0x48AC3A7DL)), p_35.f0)), p_1156->g_263)) > l_334) == 0x52L) & 0x1044905469B73E2DL) , p_1156->g_225[1]) > (*p_32)) != p_35.f0)) && l_315);
                if (l_367)
                    break;
                l_333 |= ((safe_mul_func_uint16_t_u_u(p_1156->g_229, ((((*p_1156->g_224) = ((((*l_355) = l_370) == (l_371 = (void*)0)) != (((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s((0x6CL ^ ((*l_379) = (p_1156->g_262 = 1L))), 7)) && 0L) , (((safe_lshift_func_int16_t_s_s(((*l_382) |= ((*l_278) = p_1156->g_126[4][3][4])), p_35.f0)) ^ (safe_mod_func_int32_t_s_s(0L, p_1156->g_153))) ^ p_1156->g_151)) <= (*p_1156->g_271)), p_35.f0)), p_35.f0)) < p_1156->g_157) > 0x3BF86088284C3662L))) , p_35.f0) , p_1156->g_126[5][2][3]))) <= p_34.f0);
            }
            return p_34.f0;
        }
    }
    return (*p_1156->g_224);
}


/* ------------------------------------------ */
/* 
 * reads : p_1156->g_134 p_1156->g_58 p_1156->g_178 p_1156->g_3 p_1156->g_218 p_1156->g_224 p_1156->g_227 p_1156->g_225 p_1156->g_229 p_1156->g_126 p_1156->g_22 p_1156->g_151 p_1156->g_93 p_1156->g_157 p_1156->g_69 p_1156->g_263 p_1156->g_106 p_1156->g_454
 * writes: p_1156->g_69 p_1156->g_209 p_1156->g_218 p_1156->g_225 p_1156->g_227 p_1156->g_58 p_1156->g_178 p_1156->g_93 p_1156->g_134 p_1156->g_106 p_1156->g_157 p_1156->g_66 p_1156->g_263 p_1156->g_271
 */
int32_t * func_36(int32_t * p_37, int32_t  p_38, uint64_t * p_39, uint8_t  p_40, uint16_t  p_41, struct S1 * p_1156)
{ /* block id: 118 */
    int64_t *l_208[9][10][2] = {{{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209}},{{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209}},{{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209}},{{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209}},{{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209}},{{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209}},{{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209}},{{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209}},{{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209},{&p_1156->g_209,&p_1156->g_209}}};
    int32_t l_210 = 0x1E092BE8L;
    int32_t **l_215 = &p_1156->g_106;
    int32_t **l_216 = &p_1156->g_106;
    int32_t ***l_217 = &l_216;
    union U0 l_221 = {0x4FL};
    int16_t *l_226[4][6][3] = {{{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227}},{{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227}},{{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227}},{{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227},{&p_1156->g_227,&p_1156->g_227,&p_1156->g_227}}};
    int16_t l_228 = 0x027DL;
    int32_t *l_230 = &p_1156->g_58;
    int32_t *l_231 = &p_1156->g_178;
    int32_t *l_241 = &p_1156->g_58;
    int64_t l_261 = 6L;
    int i, j, k;
    if (((((*l_231) = ((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((((*l_230) = (((0x7127L != ((p_1156->g_134 <= ((safe_add_func_int64_t_s_s((5UL <= (p_1156->g_209 = (l_210 = (p_1156->g_69 = (-6L))))), ((((((*p_37) , (((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((p_1156->g_227 ^= ((p_1156->g_218 |= (l_215 == ((*l_217) = l_216))) ^ ((*p_1156->g_224) = (((safe_add_func_uint8_t_u_u((l_221 , (safe_mod_func_uint32_t_u_u((((l_208[3][2][1] == p_1156->g_224) != p_1156->g_178) && p_40), (-1L)))), 0x44L)) , 0x89A2L) | 65535UL)))), p_38)), p_38)) == p_1156->g_58) , (*p_1156->g_224))) < p_40) , p_1156->g_225[0]) & p_1156->g_58) == 0L))) <= p_38)) >= l_228)) ^ (*p_37)) == p_1156->g_229)) >= 0L) , (-1L)), p_1156->g_126[2][2][3])), 0x8C44B1F6L)) < p_1156->g_22)) , p_1156->g_151) < p_38))
    { /* block id: 128 */
lbl_243:
        for (p_1156->g_93 = 0; (p_1156->g_93 <= 0); p_1156->g_93 += 1)
        { /* block id: 131 */
            uint16_t *l_232 = &p_1156->g_134;
            int i;
            (*l_230) ^= (p_1156->g_225[(p_1156->g_93 + 1)] ^ ((*l_232) = (&p_1156->g_93 != &p_41)));
            (**l_217) = &p_38;
            return &p_1156->g_178;
        }
    }
    else
    { /* block id: 137 */
        uint8_t l_234 = 0x98L;
        int32_t l_237 = (-2L);
        (*l_230) = (*p_37);
        for (p_1156->g_157 = 0; (p_1156->g_157 <= 1); p_1156->g_157 += 1)
        { /* block id: 141 */
            uint64_t l_238 = 3UL;
            int32_t l_260 = 0x31767BC6L;
            uint32_t l_274[1];
            int i;
            for (i = 0; i < 1; i++)
                l_274[i] = 0x0ADC0FECL;
            (*l_230) = 2L;
            if ((*p_37))
                break;
            for (p_1156->g_209 = 0; (p_1156->g_209 <= 2); p_1156->g_209 += 1)
            { /* block id: 146 */
                int32_t *l_233[5][8][6] = {{{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3}},{{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3}},{{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3}},{{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3}},{{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3},{&l_210,&l_210,&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_3}}};
                int i, j, k;
                l_234--;
                l_233[3][7][4] = (void*)0;
                for (p_1156->g_66 = 0; (p_1156->g_66 <= 2); p_1156->g_66 += 1)
                { /* block id: 151 */
                    int64_t l_242[3][6][6] = {{{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL}},{{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL}},{{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL},{(-10L),(-10L),5L,5L,0x6F28C04123013CD6L,0x27E37214903B10FFL}}};
                    uint8_t l_254 = 249UL;
                    int i, j, k;
                    ++l_238;
                    for (p_1156->g_134 = 0; (p_1156->g_134 <= 2); p_1156->g_134 += 1)
                    { /* block id: 155 */
                        l_241 = &p_38;
                        l_237 &= l_242[1][2][0];
                        if (l_237)
                            goto lbl_243;
                    }
                    for (l_238 = 0; (l_238 <= 1); l_238 += 1)
                    { /* block id: 162 */
                        int64_t l_250 = 0x65EE3B36A9D7FDA7L;
                        uint16_t *l_253 = &p_1156->g_134;
                        int i, j, k;
                        (*l_215) = (void*)0;
                        l_254 = (safe_div_func_int8_t_s_s(p_1156->g_69, (safe_sub_func_uint32_t_u_u((&p_40 != &p_1156->g_195[1][4][0]), (safe_rshift_func_int8_t_s_u(l_250, (((p_1156->g_218 || ((*l_253) = (((safe_div_func_int32_t_s_s(((void*)0 == &p_37), 4UL)) == (p_1156->g_225[p_1156->g_157] = 5L)) >= 0x0978E2EAL))) , (void*)0) != &p_1156->g_178)))))));
                    }
                }
            }
            for (p_40 = 0; (p_40 <= 1); p_40 += 1)
            { /* block id: 172 */
                int32_t *l_255 = &p_1156->g_58;
                int32_t *l_256 = &p_1156->g_178;
                int32_t *l_257 = (void*)0;
                int32_t *l_258 = &l_210;
                int32_t *l_259[7] = {&l_210,&l_210,&l_210,&l_210,&l_210,&l_210,&l_210};
                int i;
                ++p_1156->g_263;
                for (l_234 = 0; (l_234 <= 2); l_234 += 1)
                { /* block id: 176 */
                    uint64_t *l_269 = &p_1156->g_22;
                    int32_t l_275 = 1L;
                    for (p_1156->g_227 = 0; (p_1156->g_227 <= 2); p_1156->g_227 += 1)
                    { /* block id: 179 */
                        int32_t *l_266 = &l_237;
                        uint64_t **l_270[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_270[i] = &l_269;
                        (*l_215) = (l_266 = &p_1156->g_58);
                        (*l_230) = (!((((safe_rshift_func_int16_t_s_u((0x8A9EL == (((p_1156->g_271 = l_269) != ((*l_266) , &p_1156->g_22)) > ((-8L) < (safe_add_func_int64_t_s_s(((((((-4L) < p_1156->g_22) | ((void*)0 != l_226[(p_40 + 1)][(l_234 + 2)][(p_1156->g_157 + 1)])) > p_1156->g_227) ^ l_274[0]) , p_38), p_38))))), 12)) <= p_40) >= p_40) ^ l_275));
                        if ((**l_216))
                            continue;
                        if ((*p_1156->g_106))
                            break;
                    }
                }
            }
        }
    }
    return &p_1156->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1156->g_3 p_1156->g_22 p_1156->g_58 p_1156->g_106 p_1156->g_134 p_1156->g_66 p_1156->g_93 p_1156->g_126 p_1156->g_69 p_1156->g_153 p_1156->g_157 p_1156->g_151 p_1156->g_178 p_1156->g_195
 * writes: p_1156->g_69 p_1156->g_93 p_1156->g_58 p_1156->g_126 p_1156->g_106 p_1156->g_66 p_1156->g_134 p_1156->g_151 p_1156->g_153 p_1156->g_157 p_1156->g_178 p_1156->g_195
 */
int32_t * func_42(uint16_t  p_43, struct S1 * p_1156)
{ /* block id: 51 */
    int64_t *l_113 = &p_1156->g_69;
    int32_t *l_118 = &p_1156->g_3;
    uint16_t *l_123 = (void*)0;
    uint16_t *l_124 = &p_1156->g_93;
    uint32_t l_125 = 2UL;
    int64_t l_174 = 4L;
    if ((((safe_sub_func_uint16_t_u_u(((*l_124) = ((0xC4C41C8DL == (safe_div_func_int64_t_s_s(((*l_113) = (-1L)), ((-1L) | (safe_sub_func_uint32_t_u_u(((((p_43 < ((void*)0 == l_118)) && (p_43 , (safe_sub_func_int8_t_s_s((!(safe_rshift_func_int8_t_s_s((&p_1156->g_106 == &p_1156->g_106), 1))), 3L)))) ^ 0x51F0L) && (*l_118)), 0x3F5F1DF6L)))))) , p_43)), p_1156->g_22)) , l_125) || 0L))
    { /* block id: 54 */
        uint64_t l_159 = 1UL;
        int32_t *l_177 = &p_1156->g_178;
        for (p_1156->g_58 = 0; (p_1156->g_58 <= 4); p_1156->g_58 += 1)
        { /* block id: 57 */
            int32_t *l_127 = &p_1156->g_58;
            int32_t **l_128 = &p_1156->g_106;
            int32_t **l_129 = &l_127;
            int64_t *l_158 = &p_1156->g_69;
            uint64_t *l_176[2][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            uint64_t **l_175 = &l_176[1][0][1];
            int i, j, k;
            for (p_43 = 0; p_43 < 6; p_43 += 1)
            {
                for (p_1156->g_69 = 0; p_1156->g_69 < 8; p_1156->g_69 += 1)
                {
                    for (p_1156->g_93 = 0; p_1156->g_93 < 5; p_1156->g_93 += 1)
                    {
                        p_1156->g_126[p_43][p_1156->g_69][p_1156->g_93] = 1UL;
                    }
                }
            }
            (*l_129) = ((*l_128) = l_127);
            for (p_1156->g_93 = 0; (p_1156->g_93 <= 4); p_1156->g_93 += 1)
            { /* block id: 63 */
                int32_t l_130 = (-1L);
                int8_t *l_165[9];
                int64_t **l_170 = &l_113;
                int i;
                for (i = 0; i < 9; i++)
                    l_165[i] = &p_1156->g_151;
                for (p_43 = 0; (p_43 <= 4); p_43 += 1)
                { /* block id: 66 */
                    return (*l_128);
                }
                for (p_1156->g_66 = 0; (p_1156->g_66 <= 4); p_1156->g_66 += 1)
                { /* block id: 71 */
                    uint32_t l_137 = 1UL;
                    int8_t *l_164 = &p_1156->g_151;
                    int64_t **l_171 = &l_158;
                    l_130 |= 0x3BF86D33L;
                    for (p_1156->g_69 = 3; (p_1156->g_69 >= 0); p_1156->g_69 -= 1)
                    { /* block id: 75 */
                        int16_t l_131[2];
                        int32_t *l_132 = &l_130;
                        int32_t *l_133 = (void*)0;
                        int64_t *l_148 = &p_1156->g_69;
                        int64_t **l_149 = &l_113;
                        int8_t *l_150[2];
                        uint8_t *l_152 = &p_1156->g_153;
                        uint64_t *l_156 = &p_1156->g_157;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_131[i] = 0x56ECL;
                        for (i = 0; i < 2; i++)
                            l_150[i] = &p_1156->g_151;
                        ++p_1156->g_134;
                        l_137--;
                        l_159 = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_1156->g_126[(p_1156->g_66 + 1)][p_1156->g_93][p_1156->g_58], (safe_rshift_func_uint8_t_u_u((((p_1156->g_151 = (0L >= ((safe_sub_func_uint16_t_u_u(0x769BL, p_1156->g_126[(p_1156->g_69 + 2)][p_1156->g_93][(p_1156->g_69 + 1)])) | (((*l_149) = l_148) != (void*)0)))) == (l_130 = 0L)) >= (((*l_152)++) == (((((+((*l_156) ^= ((void*)0 == &l_132))) != p_1156->g_22) , (void*)0) == l_158) , p_1156->g_69))), 5)))), p_43));
                    }
                    l_175 = (((1UL && (safe_div_func_uint8_t_u_u((1L == (safe_mul_func_int8_t_s_s((~((l_164 != l_165[0]) < (((*l_118) & (safe_mod_func_uint32_t_u_u((l_159 ^ ((safe_sub_func_uint16_t_u_u(((l_170 != l_171) , ((safe_add_func_int8_t_s_s(((*l_164) = ((l_159 & l_159) >= p_1156->g_151)), 0xC0L)) <= p_43)), l_130)) ^ l_174)), l_130))) >= 0x3F880E97096A69D1L))), 0x36L))), p_43))) == l_130) , (void*)0);
                    l_177 = &p_1156->g_58;
                }
            }
        }
        return l_177;
    }
    else
    { /* block id: 92 */
        int64_t l_184 = (-1L);
        int32_t *l_185 = &p_1156->g_3;
        for (p_1156->g_157 = 0; (p_1156->g_157 <= 4); p_1156->g_157 += 1)
        { /* block id: 95 */
            int8_t *l_183 = &p_1156->g_151;
            int32_t **l_186 = (void*)0;
            l_184 = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((!p_43), 4)), ((void*)0 == l_183)));
            p_1156->g_106 = l_185;
            for (p_1156->g_66 = 0; (p_1156->g_66 <= 4); p_1156->g_66 += 1)
            { /* block id: 100 */
                int32_t *l_187 = &p_1156->g_178;
                int32_t l_188 = 1L;
                int32_t l_189 = 0L;
                (*l_187) &= (((p_1156->g_3 || p_1156->g_66) == 0x6452D96C67E9A630L) ^ p_43);
                for (p_1156->g_58 = 0; (p_1156->g_58 <= 4); p_1156->g_58 += 1)
                { /* block id: 104 */
                    int32_t *l_190 = &p_1156->g_178;
                    int32_t l_191 = 0x54E90A01L;
                    int32_t *l_192 = (void*)0;
                    int32_t *l_193 = &l_188;
                    int32_t *l_194[8][7][2] = {{{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178}},{{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178}},{{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178}},{{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178}},{{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178}},{{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178}},{{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178}},{{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178},{&p_1156->g_178,&p_1156->g_178}}};
                    int32_t **l_198 = &l_192;
                    int i, j, k;
                    --p_1156->g_195[1][2][0];
                    (*l_198) = l_118;
                }
                for (l_125 = 0; (l_125 <= 4); l_125 += 1)
                { /* block id: 110 */
                    int32_t **l_199 = &p_1156->g_106;
                    int i, j, k;
                    if (p_1156->g_126[p_1156->g_157][(l_125 + 1)][p_1156->g_157])
                        break;
                    (*l_199) = &p_1156->g_178;
                }
            }
        }
    }
    return l_118;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1156->g_106 p_1156->g_58
 */
int8_t  func_44(uint64_t  p_45, struct S1 * p_1156)
{ /* block id: 46 */
    uint16_t l_101[7][1][7] = {{{0x0725L,0UL,0UL,0x0725L,0x3EC4L,0x2DB2L,0x2DB2L}},{{0x0725L,0UL,0UL,0x0725L,0x3EC4L,0x2DB2L,0x2DB2L}},{{0x0725L,0UL,0UL,0x0725L,0x3EC4L,0x2DB2L,0x2DB2L}},{{0x0725L,0UL,0UL,0x0725L,0x3EC4L,0x2DB2L,0x2DB2L}},{{0x0725L,0UL,0UL,0x0725L,0x3EC4L,0x2DB2L,0x2DB2L}},{{0x0725L,0UL,0UL,0x0725L,0x3EC4L,0x2DB2L,0x2DB2L}},{{0x0725L,0UL,0UL,0x0725L,0x3EC4L,0x2DB2L,0x2DB2L}}};
    int32_t l_102[10][5][2] = {{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}},{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}},{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}},{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}},{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}},{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}},{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}},{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}},{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}},{{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL},{0x7ECA7173L,0x58F69C2BL}}};
    uint64_t *l_103[6][10];
    int32_t *l_105 = (void*)0;
    int32_t **l_104[3];
    uint16_t l_107 = 0xB9DAL;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
            l_103[i][j] = &p_1156->g_22;
    }
    for (i = 0; i < 3; i++)
        l_104[i] = &l_105;
    p_1156->g_106 = ((safe_unary_minus_func_int8_t_s((l_101[2][0][0] , ((((l_102[3][4][1] = l_101[4][0][6]) , l_102[6][2][0]) <= (l_101[6][0][6] && (((void*)0 == l_103[0][3]) || 0UL))) > ((l_101[4][0][0] == ((p_45 , l_101[1][0][4]) | 1L)) == l_101[5][0][4]))))) , (void*)0);
    p_1156->g_58 = 0x63C46DEBL;
    return l_107;
}


/* ------------------------------------------ */
/* 
 * reads : p_1156->g_22 p_1156->g_66 p_1156->g_93 p_1156->g_58 p_1156->g_3
 * writes: p_1156->g_58 p_1156->g_66 p_1156->g_93
 */
uint32_t  func_46(int32_t  p_47, int32_t * p_48, uint64_t * p_49, int32_t * p_50, int32_t * p_51, struct S1 * p_1156)
{ /* block id: 16 */
    uint16_t l_75[2];
    union U0 l_88[10][5] = {{{-10L},{1L},{0x3EL},{6L},{1L}},{{-10L},{1L},{0x3EL},{6L},{1L}},{{-10L},{1L},{0x3EL},{6L},{1L}},{{-10L},{1L},{0x3EL},{6L},{1L}},{{-10L},{1L},{0x3EL},{6L},{1L}},{{-10L},{1L},{0x3EL},{6L},{1L}},{{-10L},{1L},{0x3EL},{6L},{1L}},{{-10L},{1L},{0x3EL},{6L},{1L}},{{-10L},{1L},{0x3EL},{6L},{1L}},{{-10L},{1L},{0x3EL},{6L},{1L}}};
    int32_t l_90[3][8][10] = {{{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL}},{{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL}},{{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL},{0x2F2C889DL,0x301B519BL,0x3510C19EL,0x4192D0F5L,1L,9L,0x70EF91DDL,1L,1L,0x70EF91DDL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_75[i] = 1UL;
    for (p_47 = 1; (p_47 >= 0); p_47 -= 1)
    { /* block id: 19 */
        int64_t *l_89[4];
        int i;
        for (i = 0; i < 4; i++)
            l_89[i] = &p_1156->g_69;
        p_1156->g_58 = (+(safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((p_1156->g_22 != (safe_mod_func_int16_t_s_s(l_75[0], 9L))) , (safe_lshift_func_int16_t_s_s(p_47, 4))), (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((&p_1156->g_22 == p_49), 0)), (l_88[6][3] , ((l_90[1][7][9] |= (-1L)) , p_1156->g_22)))))) , l_75[1]), p_1156->g_22)));
        for (p_1156->g_66 = 0; (p_1156->g_66 <= 1); p_1156->g_66 += 1)
        { /* block id: 24 */
            int32_t *l_91 = &p_1156->g_58;
            int32_t *l_92[6] = {&p_1156->g_58,(void*)0,&p_1156->g_58,&p_1156->g_58,(void*)0,&p_1156->g_58};
            int i;
            ++p_1156->g_93;
            for (p_1156->g_58 = 1; (p_1156->g_58 >= 0); p_1156->g_58 -= 1)
            { /* block id: 28 */
                int i;
                for (p_1156->g_93 = 0; (p_1156->g_93 <= 3); p_1156->g_93 += 1)
                { /* block id: 31 */
                    int16_t l_98 = 9L;
                    (*p_50) = (safe_mod_func_int16_t_s_s(l_98, p_1156->g_22));
                }
                (*p_50) = (l_89[(p_1156->g_66 + 1)] != (void*)0);
                return p_47;
            }
            for (p_1156->g_58 = 0; (p_1156->g_58 <= 1); p_1156->g_58 += 1)
            { /* block id: 39 */
                (*p_50) = (*p_51);
            }
        }
    }
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1156->g_66 p_1156->g_69
 * writes: p_1156->g_66
 */
int8_t  func_55(int32_t * p_56, struct S1 * p_1156)
{ /* block id: 11 */
    int32_t *l_57 = &p_1156->g_58;
    int32_t *l_59 = &p_1156->g_58;
    int32_t *l_60 = &p_1156->g_58;
    int32_t *l_61 = (void*)0;
    int32_t l_62 = 0x43772679L;
    int32_t *l_63 = &l_62;
    int32_t *l_64 = (void*)0;
    int32_t *l_65[1];
    uint32_t l_70 = 4294967287UL;
    int i;
    for (i = 0; i < 1; i++)
        l_65[i] = &l_62;
    p_56 = p_56;
    --p_1156->g_66;
    ++l_70;
    return p_1156->g_69;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1157;
    struct S1* p_1156 = &c_1157;
    struct S1 c_1158 = {
        0x23399244L, // p_1156->g_3
        {{(-8L),1L,1L,(-8L),(-8L),1L,1L},{(-8L),1L,1L,(-8L),(-8L),1L,1L},{(-8L),1L,1L,(-8L),(-8L),1L,1L},{(-8L),1L,1L,(-8L),(-8L),1L,1L}}, // p_1156->g_4
        1UL, // p_1156->g_22
        0x241D407BL, // p_1156->g_58
        0x9D081799L, // p_1156->g_66
        0x3B787D1A38AD7B59L, // p_1156->g_69
        0xDBD1L, // p_1156->g_93
        &p_1156->g_58, // p_1156->g_106
        {{{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL}},{{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL}},{{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL}},{{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL}},{{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL}},{{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL},{1UL,0x37754C0DL,4294967289UL,0UL,0x37754C0DL}}}, // p_1156->g_126
        65532UL, // p_1156->g_134
        (-1L), // p_1156->g_151
        1UL, // p_1156->g_153
        0x831FEE47C6D75AD0L, // p_1156->g_157
        0L, // p_1156->g_178
        {{{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L}},{{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L}},{{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L}}}, // p_1156->g_195
        (-6L), // p_1156->g_209
        1L, // p_1156->g_218
        {(-1L),(-1L)}, // p_1156->g_225
        &p_1156->g_225[1], // p_1156->g_224
        0x61B8L, // p_1156->g_227
        1L, // p_1156->g_229
        5L, // p_1156->g_262
        0UL, // p_1156->g_263
        &p_1156->g_263, // p_1156->g_271
        {{0x2EL},{0x2EL},{0x2EL},{0x2EL},{0x2EL},{0x2EL},{0x2EL},{0x2EL}}, // p_1156->g_277
        3L, // p_1156->g_293
        &p_1156->g_106, // p_1156->g_319
        0x8D58616072BF6ECEL, // p_1156->g_336
        (-9L), // p_1156->g_454
        6UL, // p_1156->g_479
        &p_1156->g_271, // p_1156->g_579
        &p_1156->g_579, // p_1156->g_578
        0x6A035C70L, // p_1156->g_689
        (-9L), // p_1156->g_703
        &p_1156->g_178, // p_1156->g_726
        (void*)0, // p_1156->g_900
        &p_1156->g_900, // p_1156->g_899
        &p_1156->g_479, // p_1156->g_915
        &p_1156->g_915, // p_1156->g_914
        &p_1156->g_914, // p_1156->g_913
        18446744073709551615UL, // p_1156->g_1008
        &p_1156->g_1008, // p_1156->g_1007
        &p_1156->g_1007, // p_1156->g_1006
        0x52709758317734FFL, // p_1156->g_1059
        &p_1156->g_106, // p_1156->g_1073
        0x6CB6558BL, // p_1156->g_1120
        0x36B22820L, // p_1156->g_1149
    };
    c_1157 = c_1158;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1156);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1156->g_3, "p_1156->g_3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1156->g_4[i][j], "p_1156->g_4[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1156->g_22, "p_1156->g_22", print_hash_value);
    transparent_crc(p_1156->g_58, "p_1156->g_58", print_hash_value);
    transparent_crc(p_1156->g_66, "p_1156->g_66", print_hash_value);
    transparent_crc(p_1156->g_69, "p_1156->g_69", print_hash_value);
    transparent_crc(p_1156->g_93, "p_1156->g_93", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1156->g_126[i][j][k], "p_1156->g_126[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1156->g_134, "p_1156->g_134", print_hash_value);
    transparent_crc(p_1156->g_151, "p_1156->g_151", print_hash_value);
    transparent_crc(p_1156->g_153, "p_1156->g_153", print_hash_value);
    transparent_crc(p_1156->g_157, "p_1156->g_157", print_hash_value);
    transparent_crc(p_1156->g_178, "p_1156->g_178", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1156->g_195[i][j][k], "p_1156->g_195[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1156->g_209, "p_1156->g_209", print_hash_value);
    transparent_crc(p_1156->g_218, "p_1156->g_218", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1156->g_225[i], "p_1156->g_225[i]", print_hash_value);

    }
    transparent_crc(p_1156->g_227, "p_1156->g_227", print_hash_value);
    transparent_crc(p_1156->g_229, "p_1156->g_229", print_hash_value);
    transparent_crc(p_1156->g_262, "p_1156->g_262", print_hash_value);
    transparent_crc(p_1156->g_263, "p_1156->g_263", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1156->g_277[i].f0, "p_1156->g_277[i].f0", print_hash_value);

    }
    transparent_crc(p_1156->g_293, "p_1156->g_293", print_hash_value);
    transparent_crc(p_1156->g_336, "p_1156->g_336", print_hash_value);
    transparent_crc(p_1156->g_454, "p_1156->g_454", print_hash_value);
    transparent_crc(p_1156->g_479, "p_1156->g_479", print_hash_value);
    transparent_crc(p_1156->g_689, "p_1156->g_689", print_hash_value);
    transparent_crc(p_1156->g_703, "p_1156->g_703", print_hash_value);
    transparent_crc(p_1156->g_1008, "p_1156->g_1008", print_hash_value);
    transparent_crc(p_1156->g_1059, "p_1156->g_1059", print_hash_value);
    transparent_crc(p_1156->g_1120, "p_1156->g_1120", print_hash_value);
    transparent_crc(p_1156->g_1149, "p_1156->g_1149", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
