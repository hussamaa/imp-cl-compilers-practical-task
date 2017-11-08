// -g 91,9,7 -l 91,1,1
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


// Seed: 2711292544

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int64_t  f0;
};

union U1 {
   int32_t  f0;
};

struct S2 {
    volatile int32_t g_3;
    int32_t g_4;
    union U0 g_13;
    union U1 g_17;
    union U1 *g_19;
    union U1 ** volatile g_18;
    uint64_t g_23;
    uint8_t g_64;
    int32_t g_72;
    volatile uint64_t g_81;
    int32_t *g_86;
    int32_t * volatile g_125;
    union U1 ** volatile g_134;
    uint16_t g_153;
    int8_t g_159;
    int32_t g_160;
    int8_t g_196;
    int16_t g_198;
    int64_t g_200;
    uint64_t *g_204;
    uint64_t **g_203;
    int32_t g_231[6][3];
    uint32_t g_233;
    uint32_t g_295;
    int16_t g_303[9];
    int32_t g_304;
    volatile uint32_t g_306[3];
    int32_t ** volatile g_312;
    int32_t ** volatile g_349[4][1];
    uint32_t g_383[6];
    int32_t ** volatile g_411;
    int32_t * volatile g_459;
    int32_t ** volatile g_489[5][5][4];
    uint8_t g_525;
    int32_t ** volatile g_560;
    volatile int16_t g_561;
    int8_t *g_579[9][1][10];
    int16_t g_602;
    int64_t g_606;
    int32_t ** volatile g_620;
    uint8_t *g_665;
    uint8_t **g_664;
    uint8_t *** volatile g_663;
    uint64_t *** volatile g_759[8];
    uint64_t *** volatile g_760;
    int32_t g_765;
    int8_t g_875[6];
    uint16_t * volatile g_898[3];
    uint16_t * volatile *g_897;
    int32_t * volatile g_905[5];
    int32_t * volatile g_906;
    union U1 **g_912;
    uint16_t g_938;
    int32_t ** volatile g_939[2][1][8];
    int32_t *g_941[10][1];
    uint32_t g_965[7];
    uint32_t g_986;
    uint32_t g_989;
    uint32_t g_1013[5];
    int32_t * volatile g_1014;
    uint64_t g_1047;
    uint64_t g_1181;
    int32_t * volatile g_1182;
    int32_t ** volatile g_1184[3][4][9];
    int32_t ** volatile g_1185;
    int32_t ** volatile g_1187;
    uint64_t *g_1231;
    uint64_t **g_1230;
    uint64_t **g_1233;
    int8_t **g_1235;
    uint16_t *g_1261[5];
    uint16_t **g_1260;
    uint16_t ***g_1259;
    int64_t *g_1265;
    int64_t ** volatile g_1264[5];
    union U0 g_1272;
    union U0 g_1273[6];
    union U0 g_1275;
    volatile uint32_t g_1406;
    volatile uint32_t * volatile g_1405[9];
    volatile uint32_t * volatile *g_1404;
    volatile union U0 g_1416;
    volatile union U0 *g_1415;
    volatile union U0 ** volatile g_1414;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S2 * p_1427);
int32_t  func_5(uint64_t  p_6, union U0  p_7, union U0  p_8, struct S2 * p_1427);
union U0  func_14(int64_t  p_15, struct S2 * p_1427);
int32_t * func_35(uint64_t * p_36, union U1 ** p_37, union U1  p_38, struct S2 * p_1427);
uint64_t * func_39(union U1  p_40, int32_t * p_41, union U1 ** p_42, int32_t * p_43, union U1 ** p_44, struct S2 * p_1427);
int32_t * func_46(uint64_t * p_47, struct S2 * p_1427);
uint64_t * func_48(int32_t  p_49, int32_t * p_50, int16_t  p_51, uint32_t  p_52, union U1 * p_53, struct S2 * p_1427);
union U1 ** func_55(union U1 * p_56, union U1 * p_57, int16_t  p_58, struct S2 * p_1427);
union U1 * func_59(uint8_t  p_60, union U1 ** p_61, struct S2 * p_1427);
union U1 ** func_66(uint32_t  p_67, uint32_t  p_68, uint16_t  p_69, struct S2 * p_1427);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1427->g_4 p_1427->g_3 p_1427->g_13 p_1427->g_18 p_1427->g_13.f0 p_1427->g_1014 p_1427->g_160 p_1427->g_1272.f0 p_1427->g_86 p_1427->g_134 p_1427->g_19 p_1427->g_17 p_1427->g_897 p_1427->g_898 p_1427->g_1260 p_1427->g_1261 p_1427->g_204 p_1427->g_23 p_1427->g_1404 p_1427->g_1259 p_1427->g_411 p_1427->g_72 p_1427->g_1414 p_1427->g_1405 p_1427->g_1406 p_1427->g_1013 p_1427->g_198 p_1427->g_664 p_1427->g_665 p_1427->g_64 p_1427->g_304
 * writes: p_1427->g_4 p_1427->g_19 p_1427->g_23 p_1427->g_72 p_1427->g_153 p_1427->g_875 p_1427->g_160 p_1427->g_1181 p_1427->g_13.f0 p_1427->g_233 p_1427->g_198 p_1427->g_304
 */
int8_t  func_1(struct S2 * p_1427)
{ /* block id: 4 */
    uint16_t l_2[1];
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = 0x3E90L;
    for (p_1427->g_4 = 0; (p_1427->g_4 >= 0); p_1427->g_4 -= 1)
    { /* block id: 7 */
        uint64_t *l_21 = (void*)0;
        uint64_t *l_22[6] = {&p_1427->g_23,&p_1427->g_23,&p_1427->g_23,&p_1427->g_23,&p_1427->g_23,&p_1427->g_23};
        union U0 l_24 = {-1L};
        int32_t *l_1425 = (void*)0;
        int32_t *l_1426 = &p_1427->g_304;
        int i;
        (*l_1426) &= func_5((p_1427->g_23 = (safe_sub_func_uint32_t_u_u((((((safe_add_func_int16_t_s_s((((l_2[p_1427->g_4] && p_1427->g_3) ^ (0xC6L >= (p_1427->g_13 , 0x60L))) , (func_14(l_2[p_1427->g_4], p_1427) , 0x2E97L)), l_2[p_1427->g_4])) | p_1427->g_4) , p_1427->g_4) , l_2[p_1427->g_4]) , p_1427->g_13.f0), 0UL))), p_1427->g_13, l_24, p_1427);
    }
    return l_2[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1427->g_1014 p_1427->g_160 p_1427->g_1272.f0 p_1427->g_86 p_1427->g_134 p_1427->g_19 p_1427->g_17 p_1427->g_897 p_1427->g_898 p_1427->g_1260 p_1427->g_1261 p_1427->g_204 p_1427->g_23 p_1427->g_1404 p_1427->g_1259 p_1427->g_411 p_1427->g_72 p_1427->g_1414 p_1427->g_1405 p_1427->g_1406 p_1427->g_1013 p_1427->g_198 p_1427->g_664 p_1427->g_665 p_1427->g_64
 * writes: p_1427->g_72 p_1427->g_153 p_1427->g_875 p_1427->g_160 p_1427->g_23 p_1427->g_1181 p_1427->g_13.f0 p_1427->g_233 p_1427->g_198
 */
int32_t  func_5(uint64_t  p_6, union U0  p_7, union U0  p_8, struct S2 * p_1427)
{ /* block id: 12 */
    union U1 *l_914[7] = {&p_1427->g_17,&p_1427->g_17,&p_1427->g_17,&p_1427->g_17,&p_1427->g_17,&p_1427->g_17,&p_1427->g_17};
    int32_t *l_944[4];
    int8_t l_1222 = 0x3CL;
    uint64_t l_1223 = 6UL;
    int8_t **l_1234 = &p_1427->g_579[1][0][9];
    union U1 **l_1243 = &p_1427->g_19;
    int64_t **l_1266 = (void*)0;
    uint32_t l_1328 = 7UL;
    int64_t **l_1366 = (void*)0;
    int8_t *l_1377 = &p_1427->g_875[0];
    int i;
    for (i = 0; i < 4; i++)
        l_944[i] = (void*)0;
    for (p_6 = (-11); (p_6 == 1); p_6++)
    { /* block id: 15 */
        uint8_t l_913 = 1UL;
        int32_t l_1189 = (-3L);
        int32_t l_1197 = (-1L);
        int32_t l_1200 = 0x7CBD520BL;
        int32_t l_1208 = 0x7037AD05L;
        int32_t l_1211 = 0x00C87B3BL;
        int32_t l_1213 = 0x456A64BCL;
        int32_t l_1214[3];
        int8_t l_1217 = 0x71L;
        uint32_t l_1218 = 4UL;
        uint16_t ***l_1263 = &p_1427->g_1260;
        uint32_t l_1295 = 0UL;
        uint64_t *l_1357 = &p_1427->g_1181;
        int i;
        for (i = 0; i < 3; i++)
            l_1214[i] = 0x3F383E0BL;
        (1 + 1);
    }
    (*p_1427->g_86) = (safe_mul_func_int8_t_s_s(((*p_1427->g_1014) && p_1427->g_1272.f0), p_6));
    if ((safe_lshift_func_uint16_t_u_s(0xF0C4L, (safe_rshift_func_uint8_t_u_u((((**p_1427->g_134) , (safe_add_func_uint16_t_u_u(((**p_1427->g_897) = p_8.f0), (0x53E81F15244CEC9AL > p_8.f0)))) , (safe_mod_func_int8_t_s_s(((*l_1377) = 1L), ((((safe_mod_func_uint64_t_u_u(1UL, ((((p_8.f0 < p_8.f0) > 0x6C3B8FC9L) ^ 0x147312C506B70A5AL) && p_6))) == p_7.f0) , 0x01994519L) , p_7.f0)))), 3)))))
    { /* block id: 725 */
        for (p_1427->g_160 = (-2); (p_1427->g_160 < 22); ++p_1427->g_160)
        { /* block id: 728 */
            (*p_1427->g_86) = 0x3CD9DE5CL;
        }
    }
    else
    { /* block id: 731 */
        uint32_t l_1384[9][8] = {{0x55A0071DL,0x55A0071DL,4UL,4294967295UL,0xB8277886L,4294967295UL,4UL,0x55A0071DL},{0x55A0071DL,0x55A0071DL,4UL,4294967295UL,0xB8277886L,4294967295UL,4UL,0x55A0071DL},{0x55A0071DL,0x55A0071DL,4UL,4294967295UL,0xB8277886L,4294967295UL,4UL,0x55A0071DL},{0x55A0071DL,0x55A0071DL,4UL,4294967295UL,0xB8277886L,4294967295UL,4UL,0x55A0071DL},{0x55A0071DL,0x55A0071DL,4UL,4294967295UL,0xB8277886L,4294967295UL,4UL,0x55A0071DL},{0x55A0071DL,0x55A0071DL,4UL,4294967295UL,0xB8277886L,4294967295UL,4UL,0x55A0071DL},{0x55A0071DL,0x55A0071DL,4UL,4294967295UL,0xB8277886L,4294967295UL,4UL,0x55A0071DL},{0x55A0071DL,0x55A0071DL,4UL,4294967295UL,0xB8277886L,4294967295UL,4UL,0x55A0071DL},{0x55A0071DL,0x55A0071DL,4UL,4294967295UL,0xB8277886L,4294967295UL,4UL,0x55A0071DL}};
        uint64_t *l_1387 = &p_1427->g_1181;
        int32_t l_1388 = 4L;
        int32_t l_1389 = 0x0D7571FEL;
        uint64_t *l_1390 = (void*)0;
        uint64_t *l_1391 = &l_1223;
        int64_t *l_1407 = &p_1427->g_13.f0;
        uint64_t l_1408[4];
        int8_t l_1411[2];
        uint32_t *l_1417 = &p_1427->g_233;
        int16_t *l_1424 = &p_1427->g_198;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1408[i] = 0xBB7DA4BA59FCAC4CL;
        for (i = 0; i < 2; i++)
            l_1411[i] = 2L;
        l_1388 = (((*p_1427->g_86) = ((*p_1427->g_1260) == ((p_6 < (((safe_sub_func_uint64_t_u_u(((*l_1387) = ((*p_1427->g_204) &= (l_1384[1][0]++))), (--(*l_1391)))) > ((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(65531UL, ((18446744073709551615UL | ((*l_1407) = ((p_8.f0 = (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(p_8.f0, (((void*)0 == p_1427->g_1404) , p_8.f0))) || ((&l_1388 != l_944[2]) , p_7.f0)), 12))) == l_1389))) != l_1408[1]))), 0x0CA8L)), p_7.f0)) == 0x342AL)) ^ 0L)) , (**p_1427->g_1259)))) , (**p_1427->g_411));
        (*p_1427->g_86) ^= ((p_8.f0 , (l_1411[0] > ((safe_mul_func_int8_t_s_s(((p_1427->g_1414 != &p_1427->g_1415) && (((*l_1417) = (**p_1427->g_1404)) , (safe_add_func_int16_t_s_s(((*l_1424) |= (p_7.f0 || (safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((1UL || p_1427->g_1013[2]) <= p_6), 0x067D488906C39AE0L)), 4294967295UL)))), p_8.f0)))), 0x58L)) > (**p_1427->g_664)))) || l_1408[2]);
    }
    return p_7.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1427->g_18
 * writes: p_1427->g_19
 */
union U0  func_14(int64_t  p_15, struct S2 * p_1427)
{ /* block id: 8 */
    union U1 *l_16 = &p_1427->g_17;
    union U0 l_20 = {0L};
    (*p_1427->g_18) = l_16;
    return l_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_1427->g_203 p_1427->g_204 p_1427->g_23 p_1427->g_1181 p_1427->g_17.f0 p_1427->g_1182 p_1427->g_198 p_1427->g_160 p_1427->g_1185 p_1427->g_941
 * writes: p_1427->g_1181 p_1427->g_72 p_1427->g_198 p_1427->g_160 p_1427->g_941
 */
int32_t * func_35(uint64_t * p_36, union U1 ** p_37, union U1  p_38, struct S2 * p_1427)
{ /* block id: 599 */
    int8_t **l_1171 = (void*)0;
    int8_t **l_1172[5];
    uint64_t *l_1178 = &p_1427->g_1047;
    uint64_t **l_1177 = &l_1178;
    int32_t l_1179 = (-2L);
    uint64_t *l_1180 = &p_1427->g_1181;
    int i;
    for (i = 0; i < 5; i++)
        l_1172[i] = (void*)0;
    (*p_1427->g_1182) = ((safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((l_1171 = &p_1427->g_579[1][0][9]) == l_1172[2]) <= (p_38.f0 == (**p_1427->g_203))), ((*l_1180) |= ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(((((*p_1427->g_204) , &p_1427->g_1047) != ((*l_1177) = &p_1427->g_1047)) && l_1179), l_1179)), 4)) >= l_1179)))), p_38.f0)) | p_1427->g_17.f0);
    for (p_1427->g_198 = 7; (p_1427->g_198 >= 0); p_1427->g_198 -= 1)
    { /* block id: 606 */
        int32_t *l_1183 = &p_1427->g_72;
        for (p_1427->g_160 = 6; (p_1427->g_160 >= 1); p_1427->g_160 -= 1)
        { /* block id: 609 */
            (*p_1427->g_1185) = l_1183;
        }
    }
    return (*p_1427->g_1185);
}


/* ------------------------------------------ */
/* 
 * reads : p_1427->g_200 p_1427->g_525 p_1427->g_198 p_1427->g_303 p_1427->g_160 p_1427->g_23 p_1427->g_231 p_1427->g_295 p_1427->g_3 p_1427->g_986 p_1427->g_1047 p_1427->g_203 p_1427->g_204 p_1427->g_72 p_1427->g_606 p_1427->g_459 p_1427->g_411 p_1427->g_760
 * writes: p_1427->g_200 p_1427->g_525 p_1427->g_765 p_1427->g_898 p_1427->g_198 p_1427->g_160 p_1427->g_23 p_1427->g_986 p_1427->g_1047 p_1427->g_72 p_1427->g_938 p_1427->g_941 p_1427->g_86
 */
uint64_t * func_39(union U1  p_40, int32_t * p_41, union U1 ** p_42, int32_t * p_43, union U1 ** p_44, struct S2 * p_1427)
{ /* block id: 456 */
    uint32_t l_952 = 0x874CC216L;
    int32_t *l_969 = (void*)0;
    int32_t l_987[9];
    union U1 **l_1010[1];
    uint64_t *l_1017 = &p_1427->g_23;
    int32_t *l_1051 = (void*)0;
    int16_t *l_1062 = &p_1427->g_303[4];
    int32_t *l_1089 = &p_1427->g_160;
    uint64_t *****l_1096 = (void*)0;
    int32_t l_1120[7][6][6] = {{{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L}},{{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L}},{{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L}},{{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L}},{{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L}},{{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L}},{{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L},{0x35412C64L,(-1L),(-1L),0x00789688L,4L,0x4EB5D303L}}};
    int16_t l_1121[2];
    int32_t *l_1158 = &p_1427->g_72;
    int32_t *l_1159 = &l_987[1];
    int32_t *l_1160[4];
    int64_t l_1161 = 0x486F71918663D918L;
    uint32_t l_1162 = 0UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_987[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_1010[i] = &p_1427->g_19;
    for (i = 0; i < 2; i++)
        l_1121[i] = (-1L);
    for (i = 0; i < 4; i++)
        l_1160[i] = (void*)0;
    for (p_1427->g_200 = 0; (p_1427->g_200 != (-13)); p_1427->g_200 = safe_sub_func_int64_t_s_s(p_1427->g_200, 4))
    { /* block id: 459 */
        uint64_t **l_957 = &p_1427->g_204;
        int32_t l_958 = 0x0FE7C19EL;
        uint8_t l_973 = 253UL;
        int8_t **l_976 = &p_1427->g_579[4][0][2];
        uint32_t l_1052[7][5] = {{0x27283C4BL,0x27283C4BL,4294967292UL,4294967295UL,0xF6FC6B25L},{0x27283C4BL,0x27283C4BL,4294967292UL,4294967295UL,0xF6FC6B25L},{0x27283C4BL,0x27283C4BL,4294967292UL,4294967295UL,0xF6FC6B25L},{0x27283C4BL,0x27283C4BL,4294967292UL,4294967295UL,0xF6FC6B25L},{0x27283C4BL,0x27283C4BL,4294967292UL,4294967295UL,0xF6FC6B25L},{0x27283C4BL,0x27283C4BL,4294967292UL,4294967295UL,0xF6FC6B25L},{0x27283C4BL,0x27283C4BL,4294967292UL,4294967295UL,0xF6FC6B25L}};
        uint64_t ***l_1059 = &p_1427->g_203;
        uint64_t ****l_1058[9][7] = {{(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059}};
        uint32_t l_1072 = 4294967295UL;
        int i, j;
        for (p_1427->g_525 = 0; (p_1427->g_525 == 21); p_1427->g_525 = safe_add_func_uint64_t_u_u(p_1427->g_525, 2))
        { /* block id: 462 */
            int32_t *l_950 = &p_1427->g_72;
            int32_t *l_951[2];
            int16_t *l_961 = &p_1427->g_602;
            uint32_t *l_964 = &p_1427->g_965[6];
            int64_t **l_970 = (void*)0;
            union U1 **l_1011 = (void*)0;
            uint64_t l_1012 = 18446744073709551612UL;
            int8_t ***l_1055 = &l_976;
            uint32_t l_1087[3][10][2] = {{{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL}},{{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL}},{{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL},{0x0F624F65L,4294967294UL}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_951[i] = &p_1427->g_160;
            l_952--;
        }
        if (p_40.f0)
            continue;
        if (l_973)
            continue;
    }
    for (p_1427->g_765 = 0; p_1427->g_765 < 3; p_1427->g_765 += 1)
    {
        p_1427->g_898[p_1427->g_765] = &p_1427->g_153;
    }
    for (p_40.f0 = 6; (p_40.f0 >= 3); p_40.f0 -= 1)
    { /* block id: 555 */
        int16_t **l_1149 = (void*)0;
        int32_t l_1154[8];
        int32_t l_1155 = 1L;
        int i;
        for (i = 0; i < 8; i++)
            l_1154[i] = 0x53278DF8L;
        for (p_1427->g_198 = 8; (p_1427->g_198 >= 0); p_1427->g_198 -= 1)
        { /* block id: 558 */
            int i;
            if (((p_1427->g_303[p_1427->g_198] == (&p_1427->g_18 != (p_1427->g_303[p_1427->g_198] , &p_1427->g_912))) == 1UL))
            { /* block id: 559 */
                uint8_t l_1124 = 0x41L;
                (*l_1089) ^= l_1124;
            }
            else
            { /* block id: 561 */
                int64_t l_1137[2];
                uint64_t *l_1139 = &p_1427->g_23;
                int i;
                for (i = 0; i < 2; i++)
                    l_1137[i] = 0x7D4180B8D2A095B0L;
                for (p_1427->g_23 = 0; (p_1427->g_23 <= 8); p_1427->g_23 += 1)
                { /* block id: 564 */
                    union U0 l_1131 = {0L};
                    int32_t **l_1138 = &l_969;
                    (*l_1089) |= (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((l_1131 , (safe_sub_func_uint16_t_u_u(l_1131.f0, ((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int8_t_s(p_40.f0)) || 0xB438331BL), p_40.f0)) , p_40.f0)))), 7)), l_1137[1])) == (((void*)0 == &p_1427->g_303[4]) != l_1137[1])) > p_40.f0);
                    (*l_1138) = p_41;
                }
                return l_1139;
            }
            (*l_1089) |= (safe_mod_func_int64_t_s_s(p_1427->g_231[1][0], p_1427->g_295));
            l_1155 &= (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((p_40.f0 && ((0x7D4BL < p_1427->g_303[p_1427->g_198]) != ((safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_s(0x5F32L, p_40.f0)))) & ((((*l_1017) = 0x71AF8D3BC0A160C5L) & ((l_1149 != l_1149) , ((((((safe_lshift_func_int16_t_s_u(0x7475L, l_1154[1])) || 0L) != 18446744073709551615UL) | p_1427->g_3) <= 0UL) && p_40.f0))) || p_1427->g_303[p_1427->g_198])))) , p_40.f0), p_40.f0)), 0));
        }
        for (p_1427->g_986 = 0; (p_1427->g_986 <= 8); p_1427->g_986 += 1)
        { /* block id: 576 */
            uint64_t *l_1157 = &p_1427->g_23;
            for (l_1155 = 0; (l_1155 <= 8); l_1155 += 1)
            { /* block id: 579 */
                uint32_t l_1156 = 0xA4571F5AL;
                for (p_1427->g_1047 = 0; (p_1427->g_1047 <= 5); p_1427->g_1047 += 1)
                { /* block id: 582 */
                    if (l_1156)
                        break;
                    return (*p_1427->g_203);
                }
            }
            for (p_1427->g_72 = 5; (p_1427->g_72 >= 0); p_1427->g_72 -= 1)
            { /* block id: 589 */
                (*p_1427->g_411) = func_46(l_1157, p_1427);
                return (**p_1427->g_760);
            }
            return (**p_1427->g_760);
        }
        return (*p_1427->g_203);
    }
    ++l_1162;
    return (**p_1427->g_760);
}


/* ------------------------------------------ */
/* 
 * reads : p_1427->g_606 p_1427->g_23 p_1427->g_459 p_1427->g_160
 * writes: p_1427->g_938 p_1427->g_160 p_1427->g_941
 */
int32_t * func_46(uint64_t * p_47, struct S2 * p_1427)
{ /* block id: 449 */
    uint8_t l_925 = 5UL;
    uint64_t ***l_931 = &p_1427->g_203;
    uint64_t ****l_930 = &l_931;
    int32_t *l_932[3];
    uint32_t l_933 = 4294967289UL;
    int8_t l_934 = 1L;
    int32_t l_935 = (-3L);
    int8_t l_936 = 0x30L;
    int8_t *l_937[10][9] = {{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196},{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196},{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196},{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196},{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196},{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196},{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196},{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196},{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196},{&l_934,&l_934,(void*)0,&p_1427->g_196,&p_1427->g_875[1],&l_934,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196}};
    int32_t **l_940[10] = {&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86};
    int32_t *l_942[10][7][3] = {{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}},{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}},{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}},{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}},{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}},{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}},{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}},{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}},{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}},{{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0},{&p_1427->g_304,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_932[i] = &p_1427->g_160;
    (*p_1427->g_459) &= (safe_add_func_int8_t_s_s((p_1427->g_606 , (((void*)0 != &p_1427->g_233) >= (safe_mul_func_uint16_t_u_u(0xA106L, 0x8631L)))), (p_1427->g_938 = (((safe_add_func_int8_t_s_s(((l_933 = ((safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((l_925 ^ (p_1427->g_23 ^ (safe_mod_func_int8_t_s_s(l_925, (safe_sub_func_uint16_t_u_u((((*l_930) = &p_1427->g_203) != (void*)0), 6UL)))))), (*p_47))), l_925)) ^ l_925)) || l_934), l_935)) & (-9L)) > l_936))));
    p_1427->g_941[7][0] = l_932[2];
    return l_942[5][5][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1427->g_203 p_1427->g_204
 * writes:
 */
uint64_t * func_48(int32_t  p_49, int32_t * p_50, int16_t  p_51, uint32_t  p_52, union U1 * p_53, struct S2 * p_1427)
{ /* block id: 447 */
    return (*p_1427->g_203);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U1 ** func_55(union U1 * p_56, union U1 * p_57, int16_t  p_58, struct S2 * p_1427)
{ /* block id: 444 */
    union U1 **l_909 = &p_1427->g_19;
    return l_909;
}


/* ------------------------------------------ */
/* 
 * reads : p_1427->g_64 p_1427->g_125 p_1427->g_72 p_1427->g_18 p_1427->g_19 p_1427->g_134 p_1427->g_23 p_1427->g_86 p_1427->g_196 p_1427->g_160 p_1427->g_3 p_1427->g_17.f0 p_1427->g_203 p_1427->g_204 p_1427->g_13.f0 p_1427->g_231 p_1427->g_233 p_1427->g_459 p_1427->g_306 p_1427->g_159 p_1427->g_383 p_1427->g_525 p_1427->g_153 p_1427->g_295 p_1427->g_81 p_1427->g_4 p_1427->g_560 p_1427->g_561 p_1427->g_198 p_1427->g_606 p_1427->g_620 p_1427->g_304 p_1427->g_602 p_1427->g_303 p_1427->g_663 p_1427->g_760 p_1427->g_765 p_1427->g_664 p_1427->g_665 p_1427->g_200 p_1427->g_17 p_1427->g_897
 * writes: p_1427->g_23 p_1427->g_64 p_1427->g_72 p_1427->g_19 p_1427->g_86 p_1427->g_153 p_1427->g_159 p_1427->g_160 p_1427->g_196 p_1427->g_198 p_1427->g_200 p_1427->g_233 p_1427->g_383 p_1427->g_295 p_1427->g_304 p_1427->g_525 p_1427->g_303 p_1427->g_579 p_1427->g_602 p_1427->g_606 p_1427->g_664 p_1427->g_203 p_1427->g_765 p_1427->g_875
 */
union U1 * func_59(uint8_t  p_60, union U1 ** p_61, struct S2 * p_1427)
{ /* block id: 39 */
    uint8_t l_117[3][5][3] = {{{0x14L,1UL,0x14L},{0x14L,1UL,0x14L},{0x14L,1UL,0x14L},{0x14L,1UL,0x14L},{0x14L,1UL,0x14L}},{{0x14L,1UL,0x14L},{0x14L,1UL,0x14L},{0x14L,1UL,0x14L},{0x14L,1UL,0x14L},{0x14L,1UL,0x14L}},{{0x14L,1UL,0x14L},{0x14L,1UL,0x14L},{0x14L,1UL,0x14L},{0x14L,1UL,0x14L},{0x14L,1UL,0x14L}}};
    int32_t l_128[1];
    uint64_t **l_146 = (void*)0;
    int32_t l_218 = 0x209B46BFL;
    union U1 l_219 = {-1L};
    uint32_t l_385 = 0x8291F714L;
    uint64_t l_405 = 0x62EB08A46075F681L;
    int64_t l_412 = 1L;
    uint32_t *l_415[2][4];
    int32_t l_529 = 0x0AC02156L;
    union U1 **l_539[2][4] = {{&p_1427->g_19,&p_1427->g_19,&p_1427->g_19,&p_1427->g_19},{&p_1427->g_19,&p_1427->g_19,&p_1427->g_19,&p_1427->g_19}};
    int16_t l_551 = 0x0568L;
    int32_t l_552 = (-1L);
    int8_t *l_577 = (void*)0;
    uint16_t l_607 = 2UL;
    int32_t **l_646 = &p_1427->g_86;
    uint16_t l_755[4] = {0x72B6L,0x72B6L,0x72B6L,0x72B6L};
    uint8_t l_809 = 0x42L;
    int8_t *l_891 = &p_1427->g_196;
    int16_t *l_892 = (void*)0;
    uint16_t *l_894 = &l_607;
    uint16_t **l_893 = &l_894;
    uint16_t ***l_895 = (void*)0;
    uint16_t ***l_896 = &l_893;
    int32_t *l_907 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_128[i] = 0L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_415[i][j] = (void*)0;
    }
lbl_622:
    for (p_1427->g_23 = 0; (p_1427->g_23 <= 2); p_1427->g_23 += 1)
    { /* block id: 42 */
        uint64_t *l_119 = (void*)0;
        uint64_t *l_122[2][2];
        int32_t l_129 = 0x34CB066DL;
        int32_t l_130 = 7L;
        uint32_t l_131 = 2UL;
        int32_t **l_143 = (void*)0;
        union U1 l_209 = {1L};
        union U1 *l_266[6][2][4];
        uint16_t l_298 = 1UL;
        union U0 l_317 = {1L};
        int32_t l_380[5][3] = {{0x2DF225DDL,(-6L),0x2DF225DDL},{0x2DF225DDL,(-6L),0x2DF225DDL},{0x2DF225DDL,(-6L),0x2DF225DDL},{0x2DF225DDL,(-6L),0x2DF225DDL},{0x2DF225DDL,(-6L),0x2DF225DDL}};
        int32_t l_398 = 1L;
        int32_t l_402[4][6][4] = {{{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L}},{{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L}},{{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L}},{{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L},{0x7ED1B261L,(-1L),0x7EEA5F8BL,0x7ED1B261L}}};
        uint32_t l_445 = 2UL;
        uint64_t l_446[7][1] = {{0x8332D3BA066C90CBL},{0x8332D3BA066C90CBL},{0x8332D3BA066C90CBL},{0x8332D3BA066C90CBL},{0x8332D3BA066C90CBL},{0x8332D3BA066C90CBL},{0x8332D3BA066C90CBL}};
        int32_t l_531 = 0x12E75841L;
        uint8_t l_556[3][7][7] = {{{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL}},{{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL}},{{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL},{255UL,0UL,0xA5L,0xCEL,249UL,0xC4L,0x7DL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_122[i][j] = (void*)0;
        }
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 4; k++)
                    l_266[i][j][k] = &l_219;
            }
        }
        for (p_1427->g_64 = 0; (p_1427->g_64 <= 2); p_1427->g_64 += 1)
        { /* block id: 45 */
            uint64_t **l_120 = (void*)0;
            uint64_t **l_121 = &l_119;
            int32_t l_127 = 0x62B5FF26L;
            union U1 l_141 = {-2L};
            int32_t **l_142 = &p_1427->g_86;
            (*p_1427->g_125) ^= (safe_unary_minus_func_uint64_t_u((((((((*l_121) = l_119) == l_122[0][0]) , l_117[0][3][1]) || (safe_mod_func_int8_t_s_s((-6L), p_1427->g_64))) , p_60) | ((l_117[2][4][1] , 0x879CFBC8L) , p_60))));
            for (p_60 = 0; (p_60 <= 2); p_60 += 1)
            { /* block id: 50 */
                int32_t *l_126[9] = {&p_1427->g_4,&p_1427->g_72,&p_1427->g_4,&p_1427->g_4,&p_1427->g_72,&p_1427->g_4,&p_1427->g_4,&p_1427->g_72,&p_1427->g_4};
                int i;
                (*p_1427->g_125) = 0x3CDC6F3DL;
                (*p_1427->g_125) = (*p_1427->g_125);
                l_131++;
                for (l_127 = 0; (l_127 <= 2); l_127 += 1)
                { /* block id: 56 */
                    int32_t *l_147 = &l_129;
                    (*p_1427->g_134) = (*p_1427->g_18);
                    (*l_142) = ((safe_rshift_func_uint16_t_u_s(0x8C91L, 7)) , ((safe_sub_func_uint32_t_u_u((func_14(((safe_rshift_func_int16_t_s_s(p_60, 8)) && (((l_141 , l_142) == (p_60 , l_143)) != ((((safe_lshift_func_uint8_t_u_s((((l_146 != l_121) | (func_14(((&p_1427->g_23 == l_122[0][1]) ^ 0x354AL), p_1427) , 1L)) ^ p_1427->g_64), 2)) >= p_60) ^ p_60) , p_60))), p_1427) , 0x617F50B2L), l_128[0])) , l_147));
                    (*l_147) |= ((void*)0 == &p_1427->g_19);
                    if (p_60)
                        continue;
                }
            }
            (*p_1427->g_125) = (*p_1427->g_125);
            for (l_141.f0 = 2; (l_141.f0 >= 0); l_141.f0 -= 1)
            { /* block id: 66 */
                uint16_t *l_152 = &p_1427->g_153;
                int8_t *l_158 = &p_1427->g_159;
                int32_t l_161 = 0x1248EFB7L;
                union U1 *l_212 = &l_209;
                int8_t l_230 = (-3L);
                uint32_t *l_232 = &p_1427->g_233;
                int32_t *l_234 = &l_129;
                int i, j, k;
                l_161 &= (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_152) = p_1427->g_72), p_60)), (p_1427->g_160 = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_117[p_1427->g_23][(p_1427->g_23 + 1)][p_1427->g_23] = p_1427->g_23), ((*l_158) = (0x79L != p_60)))), 246UL)))));
                for (p_1427->g_159 = 0; (p_1427->g_159 <= 1); p_1427->g_159 += 1)
                { /* block id: 74 */
                    uint64_t l_169 = 7UL;
                    int32_t l_185 = (-9L);
                    for (l_127 = 1; (l_127 >= 0); l_127 -= 1)
                    { /* block id: 77 */
                        int32_t *l_162 = &l_128[0];
                        int32_t *l_163 = &l_129;
                        int32_t *l_164 = &l_128[0];
                        int32_t *l_165 = &p_1427->g_160;
                        int32_t *l_166 = &l_129;
                        int32_t *l_167 = &l_128[0];
                        int32_t *l_168[7] = {&l_161,&l_161,&l_161,&l_161,&l_161,&l_161,&l_161};
                        int8_t *l_195 = &p_1427->g_196;
                        int16_t *l_197 = &p_1427->g_198;
                        int64_t *l_199 = &p_1427->g_200;
                        int i;
                        l_169--;
                        (*l_142) = &l_128[0];
                        (*l_167) = ((~(((*l_199) = ((p_60 & (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(p_60, p_60)) ^ ((*l_166) ^= (safe_mul_func_int16_t_s_s((((*l_197) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((l_185 = p_60))), (safe_sub_func_int32_t_s_s(((~(((0UL >= ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_169, 7)), ((void*)0 != &p_1427->g_159))) | (((((((safe_add_func_int8_t_s_s(((*l_195) ^= (safe_unary_minus_func_int64_t_s(((*p_1427->g_86) != 0UL)))), 252UL)) != p_60) , p_1427->g_160) ^ 0xB5L) <= p_60) & p_60) , 246UL))) != p_1427->g_64) <= p_1427->g_3)) , p_60), l_117[2][1][1])))), 7))) , p_1427->g_17.f0), (**l_142))))), (*p_1427->g_86))), 249UL))) || l_185)) , p_60)) || l_117[2][4][0]);
                    }
                }
                l_218 &= ((safe_sub_func_uint16_t_u_u((p_1427->g_203 != &p_1427->g_204), (safe_lshift_func_uint8_t_u_u((p_60--), 0)))) && (~(p_60 == ((l_209 , ((!((safe_mod_func_int32_t_s_s(((void*)0 != l_212), (safe_add_func_int8_t_s_s(p_1427->g_17.f0, (safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u((p_60 && l_161))), l_117[p_1427->g_23][(p_1427->g_23 + 1)][p_1427->g_23])))))) , p_60)) && l_128[0])) >= l_161))));
                (*l_234) &= (((l_219 , (0xE0B29614L | ((*l_232) ^= (safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((l_127 |= p_60), p_1427->g_23)), (safe_sub_func_uint64_t_u_u((*p_1427->g_204), (p_60 || (1L > (0x645614CEL | (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((p_60 >= p_1427->g_13.f0) , l_230), 0x2C92L)), p_1427->g_231[1][0])))))))))))) ^ p_1427->g_64) , p_60);
            }
        }
        for (l_219.f0 = 0; (l_219.f0 <= 2); l_219.f0 += 1)
        { /* block id: 97 */
            int32_t *l_239 = &l_128[0];
            uint32_t *l_250 = &p_1427->g_233;
            union U1 *l_293[4][8];
            int32_t l_305 = 0x35BDB629L;
            int64_t *l_319[1][10][2] = {{{&l_317.f0,&l_317.f0},{&l_317.f0,&l_317.f0},{&l_317.f0,&l_317.f0},{&l_317.f0,&l_317.f0},{&l_317.f0,&l_317.f0},{&l_317.f0,&l_317.f0},{&l_317.f0,&l_317.f0},{&l_317.f0,&l_317.f0},{&l_317.f0,&l_317.f0},{&l_317.f0,&l_317.f0}}};
            uint16_t *l_334[1];
            int32_t l_390 = (-1L);
            int32_t l_391 = 0x4AED458DL;
            int32_t l_394 = 0x1B2E194DL;
            int32_t l_399 = 0x361E3E17L;
            int32_t l_400 = (-1L);
            int32_t **l_413[6];
            uint32_t **l_414 = (void*)0;
            uint8_t *l_426 = &l_117[1][1][1];
            int16_t *l_429 = (void*)0;
            int16_t *l_430[2][1][10] = {{{&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198}},{{&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198,&p_1427->g_198}}};
            uint32_t **l_447 = &l_250;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 8; j++)
                    l_293[i][j] = &l_219;
            }
            for (i = 0; i < 1; i++)
                l_334[i] = &p_1427->g_153;
            for (i = 0; i < 6; i++)
                l_413[i] = &p_1427->g_86;
            (1 + 1);
        }
        l_128[0] = (-5L);
        for (l_130 = 2; (l_130 >= 0); l_130 -= 1)
        { /* block id: 212 */
            uint32_t l_467 = 4294967293UL;
            int32_t l_468 = 0x53EAD75AL;
            int8_t *l_479 = &p_1427->g_196;
            uint16_t *l_488 = &p_1427->g_153;
            int32_t l_509 = 1L;
            int32_t l_510 = 0x7F2E56B5L;
            int32_t l_520 = 0x2B78BEB1L;
            int32_t l_521 = 1L;
            int32_t l_522 = 0x101674D9L;
            int32_t l_523 = 0x075EEA74L;
            int32_t l_524[3][8][7] = {{{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L}},{{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L}},{{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L},{0x6DB067AFL,5L,(-1L),0x1F78BA82L,0x489EDA95L,0x47ADE208L,0L}}};
            int32_t *l_528[1];
            uint32_t l_534 = 4294967295UL;
            union U0 l_550 = {0x56BAD00960AD2882L};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_528[i] = &l_524[1][5][0];
            for (l_385 = 0; (l_385 <= 2); l_385 += 1)
            { /* block id: 215 */
                int32_t l_460 = 6L;
                (*p_1427->g_459) = p_60;
                if (l_460)
                    continue;
                for (l_218 = 0; (l_218 <= 2); l_218 += 1)
                { /* block id: 220 */
                    int32_t l_463[8] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                    int32_t *l_464 = &l_402[3][1][3];
                    int i;
                    if (p_1427->g_306[l_385])
                        break;
                    (*l_464) ^= ((safe_rshift_func_uint16_t_u_s(p_1427->g_306[l_130], 14)) , (l_463[1] = p_1427->g_306[l_130]));
                }
                if (p_60)
                    continue;
            }
            l_467 ^= (safe_lshift_func_int8_t_s_s(0x58L, 2));
            l_468 = p_60;
            if ((safe_sub_func_int32_t_s_s(0x03C98C8EL, ((p_1427->g_159 <= ((p_1427->g_383[3] ^= (safe_sub_func_uint64_t_u_u(((l_468 = (safe_mod_func_uint32_t_u_u(0xEB71DC75L, (safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(((*l_479) &= p_60), (safe_mul_func_uint16_t_u_u((~0UL), (p_1427->g_306[1] && 0x0A46L))))), 8))))) , l_128[0]), (safe_rshift_func_uint16_t_u_s(((*l_488) = ((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((0xC12D0700D7F10113L || p_60), 0)), 1UL)) & (-1L))), p_60))))) != p_60)) < 0x481AL))))
            { /* block id: 233 */
                if ((*p_1427->g_125))
                    break;
            }
            else
            { /* block id: 235 */
                int64_t l_501 = 0x2EE3B0AB75D082F1L;
                int32_t l_503 = 0L;
                int32_t l_505 = (-1L);
                int32_t l_506 = 0x7CE9BD07L;
                int32_t l_507 = 1L;
                int32_t l_508 = 1L;
                uint16_t l_511[6] = {0xC01EL,65535UL,0xC01EL,0xC01EL,65535UL,0xC01EL};
                int32_t l_554 = (-1L);
                int32_t l_555 = 0x288E190DL;
                int i;
                for (l_218 = 2; (l_218 >= 0); l_218 -= 1)
                { /* block id: 238 */
                    int32_t *l_491 = (void*)0;
                    int32_t *l_492 = &l_402[3][1][3];
                    int32_t *l_493 = (void*)0;
                    int32_t *l_494 = &l_402[1][5][2];
                    int32_t *l_495 = &l_402[3][1][3];
                    int32_t *l_496 = (void*)0;
                    int32_t *l_497 = &l_402[3][1][3];
                    int32_t *l_498 = (void*)0;
                    int32_t *l_499 = (void*)0;
                    int32_t *l_500 = &p_1427->g_304;
                    int32_t *l_502 = (void*)0;
                    int32_t *l_504[1][5][6] = {{{&l_402[3][1][3],&l_402[3][1][3],&l_130,&l_128[0],&l_128[0],&l_398},{&l_402[3][1][3],&l_402[3][1][3],&l_130,&l_128[0],&l_128[0],&l_398},{&l_402[3][1][3],&l_402[3][1][3],&l_130,&l_128[0],&l_128[0],&l_398},{&l_402[3][1][3],&l_402[3][1][3],&l_130,&l_128[0],&l_128[0],&l_398},{&l_402[3][1][3],&l_402[3][1][3],&l_130,&l_128[0],&l_128[0],&l_398}}};
                    int i, j, k;
                    for (p_1427->g_196 = 0; (p_1427->g_196 <= 2); p_1427->g_196 += 1)
                    { /* block id: 241 */
                        int32_t **l_490 = &p_1427->g_86;
                        (*l_490) = &l_218;
                    }
                    --l_511[5];
                }
                for (p_1427->g_295 = 0; (p_1427->g_295 <= 2); p_1427->g_295 += 1)
                { /* block id: 248 */
                    uint32_t l_515[3];
                    int32_t l_518 = 0x49C6825EL;
                    int32_t l_519[10][1][6] = {{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}},{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}},{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}},{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}},{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}},{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}},{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}},{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}},{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}},{{0x697D52D2L,0L,3L,(-1L),0x7BA37954L,(-1L)}}};
                    int16_t l_553 = 0x334DL;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_515[i] = 0x0B986970L;
                    for (p_1427->g_304 = 0; (p_1427->g_304 <= 2); p_1427->g_304 += 1)
                    { /* block id: 251 */
                        int32_t *l_514[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_514[i] = &l_402[3][2][0];
                        l_515[2]--;
                        ++p_1427->g_525;
                        l_520 = 0x2E1FBEB0L;
                        if (p_60)
                            continue;
                    }
                    if (l_515[0])
                    { /* block id: 257 */
                        l_528[0] = &l_508;
                        l_505 = (((p_1427->g_72 , (*p_1427->g_134)) != &p_1427->g_17) < (5UL & 0x48C1FAC4F539AEC7L));
                        l_529 ^= p_60;
                    }
                    else
                    { /* block id: 261 */
                        int32_t l_530 = 0x6435FC13L;
                        int32_t l_532 = 0x5068F9C5L;
                        int32_t l_533[5];
                        union U1 ***l_540 = &l_539[1][0];
                        int16_t *l_549 = &p_1427->g_303[4];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_533[i] = 0x5F7998D7L;
                        --l_534;
                        l_519[2][0][2] &= (((((*l_488)--) == (((*l_479) = (p_1427->g_525 && 0x0CL)) > (((((*l_540) = l_539[1][0]) == &p_1427->g_19) ^ ((l_529 = (**p_1427->g_203)) ^ (p_60 > p_1427->g_233))) , (safe_rshift_func_int16_t_s_s(p_1427->g_295, p_60))))) , 0xCD8A307CL) < l_518);
                        l_508 |= ((((p_60 , p_1427->g_81) , (((246UL != ((&p_1427->g_459 == (void*)0) | (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_uint64_t_u_u((((*l_549) = (0xAF96L | ((*l_488) = (p_1427->g_525 < l_519[1][0][5])))) != p_1427->g_4), 0x71C6FFE90495E163L)) , l_405), l_519[3][0][5])), p_1427->g_160)))) ^ l_529) , l_550)) , l_551) < 255UL);
                    }
                    ++l_556[1][1][1];
                    if (p_60)
                        break;
                }
            }
            for (l_129 = 2; (l_129 >= 0); l_129 -= 1)
            { /* block id: 278 */
                int32_t *l_559 = &l_402[1][1][1];
                (*p_1427->g_560) = l_559;
            }
        }
    }
    for (p_1427->g_196 = 0; (p_1427->g_196 <= 2); p_1427->g_196 += 1)
    { /* block id: 285 */
        return (*p_1427->g_134);
    }
    if (p_1427->g_561)
    { /* block id: 288 */
        int16_t l_581 = 0x111CL;
        uint32_t l_592 = 4294967286UL;
        uint64_t **l_616[1];
        int32_t *l_617 = &p_1427->g_304;
        int32_t l_653 = 0x30B3DCF8L;
        union U1 ***l_747 = (void*)0;
        int32_t *l_761[6] = {&l_653,&l_218,&l_653,&l_653,&l_218,&l_653};
        int i;
        for (i = 0; i < 1; i++)
            l_616[i] = &p_1427->g_204;
        if ((p_60 >= 1L))
        { /* block id: 289 */
            int32_t *l_572 = &p_1427->g_72;
            int8_t **l_578 = (void*)0;
            int64_t *l_580 = &l_412;
            int32_t l_593 = 1L;
            union U1 *l_601 = &l_219;
            uint16_t *l_608 = &p_1427->g_153;
            uint16_t *l_610 = (void*)0;
            uint8_t *l_662 = (void*)0;
            uint8_t **l_661[8][7][4] = {{{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0}},{{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0}},{{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0}},{{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0}},{{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0}},{{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0}},{{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0}},{{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0},{&l_662,&l_662,&l_662,(void*)0}}};
            uint32_t l_707 = 1UL;
            int i, j, k;
            if (((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((*l_572) = p_60), (safe_div_func_uint32_t_u_u(((l_385 || ((~(p_1427->g_64 > p_60)) || p_1427->g_231[1][0])) || ((*p_1427->g_204) > ((*l_580) = (+((p_60 ^ ((safe_add_func_uint32_t_u_u(0xB0978FC6L, (((p_1427->g_579[1][0][9] = l_577) == (void*)0) ^ p_1427->g_198))) & p_60)) <= p_1427->g_196))))), 0x1C9F50EDL)))), p_60)) && 0x3FEA3F2CECCD96A9L), l_581)) < 0x63ECL), l_581)), p_1427->g_81)) & p_1427->g_295))
            { /* block id: 293 */
                int32_t *l_590 = (void*)0;
                int32_t *l_591[1][10][1];
                uint8_t *l_594 = &p_1427->g_64;
                uint8_t *l_603 = &p_1427->g_525;
                int64_t *l_604 = (void*)0;
                int64_t *l_605 = &p_1427->g_606;
                uint16_t **l_609 = &l_608;
                int32_t **l_619 = (void*)0;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_591[i][j][k] = &l_128[0];
                    }
                }
                p_1427->g_160 &= ((!p_1427->g_17.f0) & (p_1427->g_383[5] = (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((*l_572), ((l_593 = (l_592 &= 3L)) , (((*l_605) ^= (((*l_603) = ((*l_594) &= (((l_594 != (void*)0) , ((p_1427->g_602 = (p_1427->g_81 || (safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((((safe_mod_func_uint8_t_u_u(0x61L, p_60)) != (l_601 == (*p_1427->g_18))) , l_412) , l_581), p_60)), p_60)))) , 0xF913048DL)) <= l_529))) || 0xA4L)) , l_529)))), 0x1CL)) , 65528UL), l_607)) | p_60), p_1427->g_4))));
                (*l_572) &= (l_581 != (p_1427->g_233 = (((p_1427->g_303[4] = p_1427->g_231[1][0]) , p_60) | (((*l_609) = l_608) != l_610))));
                for (p_60 = 0; (p_60 <= 14); p_60++)
                { /* block id: 308 */
                    uint32_t l_613 = 0xEAFDC7DAL;
                    for (p_1427->g_23 = 0; (p_1427->g_23 <= 8); p_1427->g_23 += 1)
                    { /* block id: 311 */
                        l_613++;
                    }
                    for (p_1427->g_153 = 0; (p_1427->g_153 <= 1); p_1427->g_153 += 1)
                    { /* block id: 316 */
                        int32_t **l_618 = &l_572;
                        (*l_618) = ((&p_1427->g_204 == l_616[0]) , l_617);
                    }
                }
                (*p_1427->g_620) = l_617;
            }
            else
            { /* block id: 321 */
                uint32_t l_621 = 8UL;
                int32_t l_656 = (-1L);
                int32_t *l_679 = &p_1427->g_72;
                uint32_t l_703 = 0UL;
                int32_t *l_704 = &l_656;
                int32_t *l_705 = &l_128[0];
                int32_t *l_706[4][7][5] = {{{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653}},{{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653}},{{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653}},{{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653},{&l_128[0],&l_529,&p_1427->g_304,&l_529,&l_653}}};
                int i, j, k;
                for (p_1427->g_295 = 0; (p_1427->g_295 <= 1); p_1427->g_295 += 1)
                { /* block id: 324 */
                    int32_t l_647 = 3L;
                    if (l_621)
                        break;
                    for (p_1427->g_159 = 0; (p_1427->g_159 <= 1); p_1427->g_159 += 1)
                    { /* block id: 328 */
                        uint64_t l_631[2];
                        int32_t *l_648 = &l_128[0];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_631[i] = 1UL;
                        if (l_218)
                            goto lbl_622;
                        (*l_648) = ((safe_lshift_func_int8_t_s_u(((*l_617) = (safe_lshift_func_int8_t_s_s(p_60, (+(safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((p_60 == (*l_617)) < (!1L)), (l_218 && l_631[0]))), (safe_sub_func_int8_t_s_s(p_60, (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_1427->g_602, 6)), ((safe_mul_func_int16_t_s_s((~(~((safe_div_func_uint16_t_u_u((((*l_572) = (((safe_add_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_u(p_60, 10)) , &l_572) == l_646), p_60)) >= 0x40L) <= 0x534B697FL)) <= l_647), p_1427->g_160)) != p_60))), (-1L))) >= p_60))))))))))), 2)) , p_60);
                    }
                }
                for (p_1427->g_23 = (-7); (p_1427->g_23 > 28); p_1427->g_23 = safe_add_func_int16_t_s_s(p_1427->g_23, 3))
                { /* block id: 337 */
                    uint32_t l_658 = 1UL;
                    (*l_617) = (safe_sub_func_uint64_t_u_u(l_653, p_1427->g_303[8]));
                    for (p_1427->g_233 = 0; (p_1427->g_233 <= 46); p_1427->g_233 = safe_add_func_int32_t_s_s(p_1427->g_233, 6))
                    { /* block id: 341 */
                        int32_t *l_657[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        ++l_658;
                        (*p_1427->g_663) = l_661[4][1][1];
                    }
                }
                for (l_218 = 2; (l_218 >= 0); l_218 -= 1)
                { /* block id: 348 */
                    int16_t l_676 = 9L;
                    int32_t *l_677 = (void*)0;
                    int32_t *l_678 = &l_128[0];
                    (*l_678) ^= ((p_60 >= (p_1427->g_306[1] > (~((safe_sub_func_uint16_t_u_u((p_60 & (+(((*l_608) &= (((*l_572) == ((((((safe_rshift_func_uint8_t_u_u((p_1427->g_606 , (safe_sub_func_uint32_t_u_u(((*l_617) = (safe_rshift_func_int16_t_s_s(p_60, 2))), (~(&p_1427->g_4 == (void*)0))))), 0)) >= (((safe_add_func_int16_t_s_s((4L != p_60), 0x344BL)) ^ l_676) < 0x61D6L)) >= (-1L)) == l_621) , p_60) && p_60)) & (*p_1427->g_204))) != 65535UL))), 65527UL)) < p_1427->g_303[8])))) & l_676);
                    for (p_1427->g_606 = 2; (p_1427->g_606 >= 0); p_1427->g_606 -= 1)
                    { /* block id: 354 */
                        int8_t *l_684 = (void*)0;
                        int8_t *l_685 = (void*)0;
                        int8_t *l_686 = (void*)0;
                        int8_t *l_687[3];
                        int32_t l_702 = 0x4C96A959L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_687[i] = (void*)0;
                        l_572 = l_679;
                        (*l_617) = (safe_add_func_int8_t_s_s(((*l_572) != (((safe_mul_func_int8_t_s_s(9L, (l_593 = 0x49L))) != (((safe_mod_func_uint32_t_u_u((((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(p_60, p_1427->g_3)), (((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((p_60 && (safe_add_func_uint32_t_u_u((p_60 , p_1427->g_383[3]), (0xAEC3927DL ^ (*l_617))))) & l_702), 0x1D0BE556L)), p_60)) < (*l_617)) >= 0L))), 0x77DE0AA220582EE5L)) && (*l_678)) , p_1427->g_160), p_60)) < l_703) < (-5L))) == 8L)), l_702));
                    }
                }
                ++l_707;
            }
        }
        else
        { /* block id: 362 */
            uint32_t l_714[8][10] = {{4294967287UL,0x30751477L,0x30751477L,4294967287UL,6UL,0xDDD13931L,0xDDD13931L,6UL,4294967287UL,0x30751477L},{4294967287UL,0x30751477L,0x30751477L,4294967287UL,6UL,0xDDD13931L,0xDDD13931L,6UL,4294967287UL,0x30751477L},{4294967287UL,0x30751477L,0x30751477L,4294967287UL,6UL,0xDDD13931L,0xDDD13931L,6UL,4294967287UL,0x30751477L},{4294967287UL,0x30751477L,0x30751477L,4294967287UL,6UL,0xDDD13931L,0xDDD13931L,6UL,4294967287UL,0x30751477L},{4294967287UL,0x30751477L,0x30751477L,4294967287UL,6UL,0xDDD13931L,0xDDD13931L,6UL,4294967287UL,0x30751477L},{4294967287UL,0x30751477L,0x30751477L,4294967287UL,6UL,0xDDD13931L,0xDDD13931L,6UL,4294967287UL,0x30751477L},{4294967287UL,0x30751477L,0x30751477L,4294967287UL,6UL,0xDDD13931L,0xDDD13931L,6UL,4294967287UL,0x30751477L},{4294967287UL,0x30751477L,0x30751477L,4294967287UL,6UL,0xDDD13931L,0xDDD13931L,6UL,4294967287UL,0x30751477L}};
            int64_t *l_740 = &l_412;
            int64_t *l_754 = (void*)0;
            uint64_t l_756 = 0xEE12519A56A521B6L;
            int8_t *l_757 = &p_1427->g_196;
            int32_t *l_758 = &l_128[0];
            int i, j;
            (*l_617) = ((0xC7L & (((void*)0 != &l_653) | ((safe_div_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((l_714[0][6] != p_1427->g_306[1]), (p_1427->g_72 , p_1427->g_153))) & (safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u(p_60)), (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((*l_617), p_1427->g_231[1][0])), (-7L))))) | (**p_1427->g_203)), 1UL)) , l_714[0][6]) != 0xCFD5449E65FF4494L) >= 1UL), 65526UL)), 11))) < p_1427->g_295), (*l_617))) != 0x5FL))) == p_60);
            (*l_758) ^= ((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((*l_757) = (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((safe_mod_func_uint8_t_u_u((p_60 , ((((*l_740) = p_1427->g_303[7]) == (l_755[0] = (255UL != (p_60 <= ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((l_747 == (void*)0), 9)), 7)) , (safe_sub_func_uint32_t_u_u(4294967295UL, (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((*l_617) , ((*l_617) && 0x6F36CB20L)) | (*l_617)), 13)), p_1427->g_64))))))))) != l_756)), p_60)) & l_385) , p_60) >= p_60), p_60)), 4))), (*l_617))), 2)), 0xF1L)) != 0x17E90E6CL);
            (*l_646) = &l_653;
        }
        for (l_552 = 2; (l_552 >= 0); l_552 -= 1)
        { /* block id: 372 */
            int16_t l_766 = 0x630AL;
            (*p_1427->g_760) = l_616[0];
            for (p_1427->g_23 = 0; (p_1427->g_23 <= 2); p_1427->g_23 += 1)
            { /* block id: 376 */
                int32_t *l_762[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_762[i] = (void*)0;
                l_762[0] = l_761[2];
                for (p_1427->g_602 = 2; (p_1427->g_602 >= 0); p_1427->g_602 -= 1)
                { /* block id: 380 */
                    for (l_653 = 0; (l_653 <= 2); l_653 += 1)
                    { /* block id: 383 */
                        int32_t l_763 = 1L;
                        int32_t *l_764[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_764[i] = &p_1427->g_765;
                        l_763 = 0x0612FEEEL;
                        (*l_617) |= (((p_1427->g_765 |= p_1427->g_231[l_552][p_1427->g_23]) , l_766) , p_1427->g_231[l_552][p_1427->g_23]);
                    }
                }
            }
        }
        for (l_592 = 0; (l_592 == 20); l_592 = safe_add_func_int64_t_s_s(l_592, 9))
        { /* block id: 393 */
            int32_t l_771 = (-6L);
            int32_t *l_772[9] = {&l_653,&l_653,&l_653,&l_653,&l_653,&l_653,&l_653,&l_653,&l_653};
            int i;
            for (p_1427->g_233 = (-15); (p_1427->g_233 >= 44); p_1427->g_233++)
            { /* block id: 396 */
                return (*p_1427->g_134);
            }
            if (l_771)
                break;
            (*l_646) = l_772[7];
        }
    }
    else
    { /* block id: 402 */
        uint32_t l_781 = 0x9B19D470L;
        uint16_t *l_788[2];
        int8_t **l_790 = &l_577;
        int8_t ***l_789 = &l_790;
        int32_t *l_791 = &l_218;
        uint64_t *l_808 = &l_405;
        int32_t *l_810 = &p_1427->g_160;
        int32_t l_824 = 0x3AFFBA4EL;
        int32_t l_827 = 0x456E0AE9L;
        int32_t l_830 = 0L;
        int32_t l_833 = 1L;
        int32_t l_836 = 0x714E1C3AL;
        int32_t l_837 = 0x2B689DD3L;
        int32_t l_838 = 0x133EAD6FL;
        int32_t l_839 = 0x0DF5382BL;
        int32_t l_840 = 0x18D5163FL;
        int32_t l_842 = (-1L);
        int64_t l_843 = (-1L);
        int32_t l_844 = 0x448A87F3L;
        int32_t l_845 = (-1L);
        int32_t l_846 = 0x29D1841FL;
        int32_t l_847 = 0L;
        int32_t l_848[3][4][2] = {{{0x7AC63E6AL,0x274414D0L},{0x7AC63E6AL,0x274414D0L},{0x7AC63E6AL,0x274414D0L},{0x7AC63E6AL,0x274414D0L}},{{0x7AC63E6AL,0x274414D0L},{0x7AC63E6AL,0x274414D0L},{0x7AC63E6AL,0x274414D0L},{0x7AC63E6AL,0x274414D0L}},{{0x7AC63E6AL,0x274414D0L},{0x7AC63E6AL,0x274414D0L},{0x7AC63E6AL,0x274414D0L},{0x7AC63E6AL,0x274414D0L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_788[i] = &l_755[0];
        (*l_791) |= (safe_mod_func_int64_t_s_s((p_1427->g_525 && (((*l_789) = ((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int64_t_s_s((func_14(p_1427->g_306[1], p_1427) , (safe_sub_func_uint64_t_u_u((l_781 , (safe_sub_func_uint32_t_u_u(p_60, ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(((**p_1427->g_664) = (p_1427->g_303[1] >= 0x2D59A596L)), ((p_60 < (((p_60 , &l_607) == l_788[0]) != (*p_1427->g_204))) < l_781))) != 0x2FA3FE3BL), 0)) >= (***p_1427->g_760))))), p_1427->g_13.f0))), (**p_1427->g_203))) > p_1427->g_23) <= p_60) < p_1427->g_153), p_60)) , &l_577)) == &l_577)), 0x2C2A3BFABFC9F5C6L));
        (*l_810) = ((p_1427->g_295 = ((((+(safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((((*p_1427->g_665) || p_60) == (((*l_791) ^= (safe_lshift_func_int16_t_s_u(p_1427->g_17.f0, 4))) | (safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s((&p_1427->g_579[8][0][4] != &p_1427->g_579[1][0][9]), (p_60 < (((**p_1427->g_203) = ((*l_808) ^= (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_1427->g_23, 4)), 65535UL)))) & ((void*)0 == &l_755[0]))))) , 0xD4F5005CL) , (-1L)) , p_60), 0x4B05L)), (-1L))))), 0xD9L)) ^ 0x4FL) > p_1427->g_3), l_809))) | p_60) , 0x43DAF714856145ABL) >= p_1427->g_231[1][0])) & 0x81603056L);
        for (p_1427->g_160 = 18; (p_1427->g_160 == 15); p_1427->g_160--)
        { /* block id: 413 */
            int32_t l_815[2];
            int32_t l_871 = 0x467E177BL;
            union U1 l_882 = {0x241A1FBDL};
            int32_t l_884 = 0x65AC9B14L;
            int i;
            for (i = 0; i < 2; i++)
                l_815[i] = 7L;
            for (p_1427->g_765 = (-6); (p_1427->g_765 <= (-9)); p_1427->g_765 = safe_sub_func_int64_t_s_s(p_1427->g_765, 4))
            { /* block id: 416 */
                int32_t l_822[8] = {0x2190C865L,0x12C2A58EL,0x2190C865L,0x2190C865L,0x12C2A58EL,0x2190C865L,0x2190C865L,0x12C2A58EL};
                int32_t l_825 = 0x6B7EAB73L;
                int32_t l_826 = 1L;
                int32_t l_828 = 8L;
                int32_t l_829 = (-7L);
                int32_t l_831 = 0x6F1BC0BEL;
                int32_t l_832 = 0x49791428L;
                int64_t l_834 = 0x2EB98837B24E157EL;
                int32_t l_835[8] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                uint32_t l_849 = 1UL;
                union U0 l_862 = {0x73399F2C20E37C4AL};
                uint8_t l_874 = 0x0AL;
                int32_t *l_883[5][5] = {{(void*)0,&l_529,&l_529,(void*)0,(void*)0},{(void*)0,&l_529,&l_529,(void*)0,(void*)0},{(void*)0,&l_529,&l_529,(void*)0,(void*)0},{(void*)0,&l_529,&l_529,(void*)0,(void*)0},{(void*)0,&l_529,&l_529,(void*)0,(void*)0}};
                int i, j;
                for (p_1427->g_72 = 2; (p_1427->g_72 >= 0); p_1427->g_72 -= 1)
                { /* block id: 419 */
                    int32_t *l_816 = (void*)0;
                    int32_t l_817 = 0x7F69514CL;
                    int32_t *l_818 = &l_529;
                    int32_t *l_819 = &l_218;
                    int32_t *l_820 = &l_815[1];
                    int32_t *l_821 = &l_815[1];
                    int32_t *l_823[5][10] = {{&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0]},{&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0]},{&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0]},{&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0]},{&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0],&l_218,&l_128[0],&l_128[0]}};
                    int32_t l_841 = (-1L);
                    int i, j;
                    (*l_791) = p_60;
                    l_849++;
                    (*l_820) = ((safe_add_func_int64_t_s_s(p_1427->g_72, (safe_rshift_func_int8_t_s_u(((p_60 || (safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((((((p_1427->g_875[0] = (((safe_sub_func_uint16_t_u_u(p_1427->g_306[2], ((~(l_862 , 0x26EAL)) < (safe_sub_func_uint32_t_u_u((0xAAL > ((p_1427->g_153 = (p_60 == ((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((l_871 & (safe_div_func_uint16_t_u_u(p_60, 5UL))) & (*l_810)), p_1427->g_200)), p_1427->g_231[5][2])), 0x21L)) & l_874))) <= l_825)), p_60))))) || l_862.f0) | (*l_791))) | p_1427->g_13.f0) <= (*l_820)) == (**p_1427->g_664)) , (*l_819)) , 0x1049L), (-1L))), l_815[1]))) , l_829), p_60)))) == (**p_1427->g_203));
                    (*l_646) = &l_827;
                }
                l_884 ^= (safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((-9L) ^ ((((l_833 = ((*l_791) = (p_1427->g_304 |= (safe_rshift_func_int8_t_s_u(((l_882 = (*p_1427->g_19)) , (&p_1427->g_303[4] == (void*)0)), (((*l_791) , (*p_1427->g_663)) == &p_1427->g_665)))))) > ((0UL || 7UL) > l_815[1])) || p_60) , p_60)), 1UL)), 0xBB15L));
            }
            return (*p_1427->g_134);
        }
    }
    l_128[0] = ((((safe_div_func_uint32_t_u_u((p_1427->g_295 = (p_1427->g_233 &= ((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((l_218 = (!(((*l_891) = p_60) != l_128[0]))) > 0x4192L) < (((*l_896) = l_893) != p_1427->g_897)), (++p_1427->g_383[3]))), p_60)) < ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((*p_1427->g_204), p_60)) || ((l_405 | p_60) <= 0x67D0L)), p_60)) > p_60)))), (*p_1427->g_125))) != p_60) == (*p_1427->g_204)) ^ p_60);
    return (*p_1427->g_18);
}


/* ------------------------------------------ */
/* 
 * reads : p_1427->g_64 p_1427->g_81 p_1427->g_3 p_1427->g_72 p_1427->g_13.f0 p_1427->g_17.f0 p_1427->g_23 p_1427->g_86 p_1427->g_4
 * writes: p_1427->g_64 p_1427->g_81 p_1427->g_86 p_1427->g_72
 */
union U1 ** func_66(uint32_t  p_67, uint32_t  p_68, uint16_t  p_69, struct S2 * p_1427)
{ /* block id: 27 */
    int64_t l_70[5];
    int32_t l_78 = (-5L);
    int32_t l_79 = 0L;
    int32_t l_80[7];
    int32_t *l_85[1];
    int32_t **l_84[9];
    uint8_t *l_101[8] = {&p_1427->g_64,&p_1427->g_64,&p_1427->g_64,&p_1427->g_64,&p_1427->g_64,&p_1427->g_64,&p_1427->g_64,&p_1427->g_64};
    uint64_t l_115 = 0UL;
    union U1 **l_116 = (void*)0;
    int i;
    for (i = 0; i < 5; i++)
        l_70[i] = 0x55762CC684CA67B1L;
    for (i = 0; i < 7; i++)
        l_80[i] = 0x2237FF9BL;
    for (i = 0; i < 1; i++)
        l_85[i] = (void*)0;
    for (i = 0; i < 9; i++)
        l_84[i] = &l_85[0];
    for (p_1427->g_64 = 1; (p_1427->g_64 <= 4); p_1427->g_64 += 1)
    { /* block id: 30 */
        int32_t *l_71 = &p_1427->g_72;
        int32_t l_73 = (-8L);
        int32_t *l_74 = &l_73;
        int32_t *l_75 = (void*)0;
        int32_t *l_76 = &p_1427->g_72;
        int32_t *l_77[1];
        int i;
        for (i = 0; i < 1; i++)
            l_77[i] = &p_1427->g_72;
        ++p_1427->g_81;
    }
    p_1427->g_86 = &l_80[5];
    (*p_1427->g_86) |= ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(0x7DL, 6)), (safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((p_69 ^ (safe_mul_func_int16_t_s_s((l_101[1] != l_101[1]), (0x34E1L | 0x462CL)))), (safe_mul_func_int16_t_s_s(0x5949L, 65526UL)))), (((safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(18446744073709551609UL, p_69)), p_1427->g_3)) <= 0L) , p_1427->g_72))), p_1427->g_13.f0)) >= 0x3BL), p_1427->g_17.f0)))) | p_1427->g_23);
    p_1427->g_72 = (safe_mul_func_int16_t_s_s((!(((((safe_unary_minus_func_int64_t_s((0x10L == ((safe_div_func_uint16_t_u_u((0x2F445564L > (p_67 | p_1427->g_17.f0)), 1L)) & (p_1427->g_64 = (0x35112828L > ((*p_1427->g_86) ^= p_67))))))) >= l_115) || p_1427->g_4) | p_1427->g_81) & 0x25587BB5L)), (-7L)));
    return l_116;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1428;
    struct S2* p_1427 = &c_1428;
    struct S2 c_1429 = {
        0x0FAAAEB9L, // p_1427->g_3
        1L, // p_1427->g_4
        {-1L}, // p_1427->g_13
        {0x1E071A05L}, // p_1427->g_17
        &p_1427->g_17, // p_1427->g_19
        &p_1427->g_19, // p_1427->g_18
        0x3F30B91EE4CFF15CL, // p_1427->g_23
        1UL, // p_1427->g_64
        0x5AF8D98CL, // p_1427->g_72
        0xEC8E4446CA37EAD9L, // p_1427->g_81
        &p_1427->g_72, // p_1427->g_86
        &p_1427->g_72, // p_1427->g_125
        &p_1427->g_19, // p_1427->g_134
        0UL, // p_1427->g_153
        0x00L, // p_1427->g_159
        1L, // p_1427->g_160
        (-4L), // p_1427->g_196
        0x3299L, // p_1427->g_198
        0x0BB31F0EA39184E9L, // p_1427->g_200
        &p_1427->g_23, // p_1427->g_204
        &p_1427->g_204, // p_1427->g_203
        {{1L,0x768EAD14L,1L},{1L,0x768EAD14L,1L},{1L,0x768EAD14L,1L},{1L,0x768EAD14L,1L},{1L,0x768EAD14L,1L},{1L,0x768EAD14L,1L}}, // p_1427->g_231
        0xC2FFDF52L, // p_1427->g_233
        0xDD0621BFL, // p_1427->g_295
        {0x3E04L,0x3E04L,0x3E04L,0x3E04L,0x3E04L,0x3E04L,0x3E04L,0x3E04L,0x3E04L}, // p_1427->g_303
        0x543C7B79L, // p_1427->g_304
        {0x2CC0702CL,0x2CC0702CL,0x2CC0702CL}, // p_1427->g_306
        &p_1427->g_86, // p_1427->g_312
        {{&p_1427->g_86},{&p_1427->g_86},{&p_1427->g_86},{&p_1427->g_86}}, // p_1427->g_349
        {7UL,7UL,7UL,7UL,7UL,7UL}, // p_1427->g_383
        &p_1427->g_86, // p_1427->g_411
        &p_1427->g_160, // p_1427->g_459
        {{{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86}},{{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86}},{{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86}},{{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86}},{{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86},{&p_1427->g_86,(void*)0,&p_1427->g_86,&p_1427->g_86}}}, // p_1427->g_489
        3UL, // p_1427->g_525
        &p_1427->g_86, // p_1427->g_560
        0x572AL, // p_1427->g_561
        {{{&p_1427->g_159,&p_1427->g_159,&p_1427->g_196,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196,&p_1427->g_159,(void*)0,&p_1427->g_159,&p_1427->g_196}},{{&p_1427->g_159,&p_1427->g_159,&p_1427->g_196,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196,&p_1427->g_159,(void*)0,&p_1427->g_159,&p_1427->g_196}},{{&p_1427->g_159,&p_1427->g_159,&p_1427->g_196,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196,&p_1427->g_159,(void*)0,&p_1427->g_159,&p_1427->g_196}},{{&p_1427->g_159,&p_1427->g_159,&p_1427->g_196,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196,&p_1427->g_159,(void*)0,&p_1427->g_159,&p_1427->g_196}},{{&p_1427->g_159,&p_1427->g_159,&p_1427->g_196,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196,&p_1427->g_159,(void*)0,&p_1427->g_159,&p_1427->g_196}},{{&p_1427->g_159,&p_1427->g_159,&p_1427->g_196,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196,&p_1427->g_159,(void*)0,&p_1427->g_159,&p_1427->g_196}},{{&p_1427->g_159,&p_1427->g_159,&p_1427->g_196,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196,&p_1427->g_159,(void*)0,&p_1427->g_159,&p_1427->g_196}},{{&p_1427->g_159,&p_1427->g_159,&p_1427->g_196,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196,&p_1427->g_159,(void*)0,&p_1427->g_159,&p_1427->g_196}},{{&p_1427->g_159,&p_1427->g_159,&p_1427->g_196,&p_1427->g_196,&p_1427->g_159,&p_1427->g_196,&p_1427->g_159,(void*)0,&p_1427->g_159,&p_1427->g_196}}}, // p_1427->g_579
        0L, // p_1427->g_602
        0x587393F12748CBF1L, // p_1427->g_606
        &p_1427->g_86, // p_1427->g_620
        &p_1427->g_64, // p_1427->g_665
        &p_1427->g_665, // p_1427->g_664
        &p_1427->g_664, // p_1427->g_663
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1427->g_759
        &p_1427->g_203, // p_1427->g_760
        1L, // p_1427->g_765
        {0x6DL,1L,0x6DL,0x6DL,1L,0x6DL}, // p_1427->g_875
        {&p_1427->g_153,&p_1427->g_153,&p_1427->g_153}, // p_1427->g_898
        &p_1427->g_898[1], // p_1427->g_897
        {&p_1427->g_72,&p_1427->g_72,&p_1427->g_72,&p_1427->g_72,&p_1427->g_72}, // p_1427->g_905
        (void*)0, // p_1427->g_906
        (void*)0, // p_1427->g_912
        0x9351L, // p_1427->g_938
        {{{&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86}},{{&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86,&p_1427->g_86}}}, // p_1427->g_939
        {{&p_1427->g_72},{&p_1427->g_72},{&p_1427->g_72},{&p_1427->g_72},{&p_1427->g_72},{&p_1427->g_72},{&p_1427->g_72},{&p_1427->g_72},{&p_1427->g_72},{&p_1427->g_72}}, // p_1427->g_941
        {0x3D78069EL,0x3D78069EL,0x3D78069EL,0x3D78069EL,0x3D78069EL,0x3D78069EL,0x3D78069EL}, // p_1427->g_965
        4294967289UL, // p_1427->g_986
        0UL, // p_1427->g_989
        {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL}, // p_1427->g_1013
        &p_1427->g_160, // p_1427->g_1014
        2UL, // p_1427->g_1047
        0x4F7B5BB4C7CCBFB4L, // p_1427->g_1181
        &p_1427->g_72, // p_1427->g_1182
        {{{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]},{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]},{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]},{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]}},{{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]},{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]},{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]},{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]}},{{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]},{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]},{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]},{&p_1427->g_941[9][0],&p_1427->g_941[7][0],&p_1427->g_941[7][0],&p_1427->g_941[0][0],&p_1427->g_941[9][0],(void*)0,&p_1427->g_941[7][0],(void*)0,&p_1427->g_941[0][0]}}}, // p_1427->g_1184
        &p_1427->g_941[2][0], // p_1427->g_1185
        &p_1427->g_941[1][0], // p_1427->g_1187
        &p_1427->g_1047, // p_1427->g_1231
        &p_1427->g_1231, // p_1427->g_1230
        &p_1427->g_1231, // p_1427->g_1233
        &p_1427->g_579[1][0][9], // p_1427->g_1235
        {&p_1427->g_938,&p_1427->g_938,&p_1427->g_938,&p_1427->g_938,&p_1427->g_938}, // p_1427->g_1261
        &p_1427->g_1261[3], // p_1427->g_1260
        &p_1427->g_1260, // p_1427->g_1259
        (void*)0, // p_1427->g_1265
        {&p_1427->g_1265,&p_1427->g_1265,&p_1427->g_1265,&p_1427->g_1265,&p_1427->g_1265}, // p_1427->g_1264
        {0x61990FE411F49A51L}, // p_1427->g_1272
        {{0x5133B2CF69E2D1C4L},{0x5133B2CF69E2D1C4L},{0x5133B2CF69E2D1C4L},{0x5133B2CF69E2D1C4L},{0x5133B2CF69E2D1C4L},{0x5133B2CF69E2D1C4L}}, // p_1427->g_1273
        {-10L}, // p_1427->g_1275
        1UL, // p_1427->g_1406
        {&p_1427->g_1406,&p_1427->g_1406,&p_1427->g_1406,&p_1427->g_1406,&p_1427->g_1406,&p_1427->g_1406,&p_1427->g_1406,&p_1427->g_1406,&p_1427->g_1406}, // p_1427->g_1405
        &p_1427->g_1405[6], // p_1427->g_1404
        {0x77BB8121B6FC698FL}, // p_1427->g_1416
        &p_1427->g_1416, // p_1427->g_1415
        &p_1427->g_1415, // p_1427->g_1414
    };
    c_1428 = c_1429;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1427);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1427->g_3, "p_1427->g_3", print_hash_value);
    transparent_crc(p_1427->g_4, "p_1427->g_4", print_hash_value);
    transparent_crc(p_1427->g_13.f0, "p_1427->g_13.f0", print_hash_value);
    transparent_crc(p_1427->g_17.f0, "p_1427->g_17.f0", print_hash_value);
    transparent_crc(p_1427->g_23, "p_1427->g_23", print_hash_value);
    transparent_crc(p_1427->g_64, "p_1427->g_64", print_hash_value);
    transparent_crc(p_1427->g_72, "p_1427->g_72", print_hash_value);
    transparent_crc(p_1427->g_81, "p_1427->g_81", print_hash_value);
    transparent_crc(p_1427->g_153, "p_1427->g_153", print_hash_value);
    transparent_crc(p_1427->g_159, "p_1427->g_159", print_hash_value);
    transparent_crc(p_1427->g_160, "p_1427->g_160", print_hash_value);
    transparent_crc(p_1427->g_196, "p_1427->g_196", print_hash_value);
    transparent_crc(p_1427->g_198, "p_1427->g_198", print_hash_value);
    transparent_crc(p_1427->g_200, "p_1427->g_200", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1427->g_231[i][j], "p_1427->g_231[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1427->g_233, "p_1427->g_233", print_hash_value);
    transparent_crc(p_1427->g_295, "p_1427->g_295", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1427->g_303[i], "p_1427->g_303[i]", print_hash_value);

    }
    transparent_crc(p_1427->g_304, "p_1427->g_304", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1427->g_306[i], "p_1427->g_306[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1427->g_383[i], "p_1427->g_383[i]", print_hash_value);

    }
    transparent_crc(p_1427->g_525, "p_1427->g_525", print_hash_value);
    transparent_crc(p_1427->g_561, "p_1427->g_561", print_hash_value);
    transparent_crc(p_1427->g_602, "p_1427->g_602", print_hash_value);
    transparent_crc(p_1427->g_606, "p_1427->g_606", print_hash_value);
    transparent_crc(p_1427->g_765, "p_1427->g_765", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1427->g_875[i], "p_1427->g_875[i]", print_hash_value);

    }
    transparent_crc(p_1427->g_938, "p_1427->g_938", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1427->g_965[i], "p_1427->g_965[i]", print_hash_value);

    }
    transparent_crc(p_1427->g_986, "p_1427->g_986", print_hash_value);
    transparent_crc(p_1427->g_989, "p_1427->g_989", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1427->g_1013[i], "p_1427->g_1013[i]", print_hash_value);

    }
    transparent_crc(p_1427->g_1047, "p_1427->g_1047", print_hash_value);
    transparent_crc(p_1427->g_1181, "p_1427->g_1181", print_hash_value);
    transparent_crc(p_1427->g_1272.f0, "p_1427->g_1272.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1427->g_1273[i].f0, "p_1427->g_1273[i].f0", print_hash_value);

    }
    transparent_crc(p_1427->g_1275.f0, "p_1427->g_1275.f0", print_hash_value);
    transparent_crc(p_1427->g_1406, "p_1427->g_1406", print_hash_value);
    transparent_crc(p_1427->g_1416.f0, "p_1427->g_1416.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
