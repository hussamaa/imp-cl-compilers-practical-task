// -g 54,92,2 -l 1,46,2
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


// Seed: 1013639814

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
};

union U1 {
   uint16_t  f0;
};

union U2 {
   int8_t * volatile  f0;
};

union U3 {
   volatile uint8_t  f0;
};

struct S4 {
    uint16_t g_2;
    int8_t g_14[6][3][6];
    int8_t *g_13[4][4];
    union U2 g_17;
    union U2 *g_16;
    union U0 g_29[1][9][1];
    union U1 g_66[10][5];
    union U1 *g_65;
    int64_t g_68;
    int32_t g_80[5];
    int32_t * volatile g_79;
    int32_t g_106;
    int16_t g_108;
    int16_t g_110;
    uint8_t g_112;
    union U2 ** volatile g_115[3];
    uint64_t g_138[3];
    union U3 g_195;
    union U3 *g_197[2][1];
    union U3 ** volatile g_196;
    uint8_t g_216;
    int16_t g_217;
    int32_t g_224;
    uint32_t g_234;
    int8_t **g_272[3];
    int8_t *** volatile g_271;
    uint8_t *g_275[2];
    volatile int32_t g_285;
    volatile int32_t *g_284;
    uint32_t g_290;
    volatile int64_t g_292[2];
    volatile int16_t g_337;
    volatile int16_t *g_336;
    volatile int16_t * volatile * volatile g_335[8];
    volatile int16_t * volatile * volatile * volatile g_338;
    union U3 g_366;
    int32_t g_369;
    uint64_t g_376;
    union U0 g_378;
    union U2 g_397;
    volatile union U2 g_412;
    union U2 g_429[4][2][7];
    int32_t *g_438;
    int32_t ** volatile g_437;
    int32_t ** volatile g_447;
    uint8_t **g_449;
    uint8_t *** volatile g_448[5][3][5];
    union U0 * volatile *g_476;
    uint64_t g_482;
    int32_t ** volatile g_483;
    int64_t g_495;
    uint64_t * volatile g_504;
    uint64_t * volatile * volatile g_503;
    union U0 *g_517;
    union U3 g_523;
    volatile union U3 g_562;
    uint64_t g_597;
    union U1 g_634;
    union U2 g_699;
    volatile union U3 g_718;
    union U3 g_744;
    volatile int8_t g_794;
    int32_t ** volatile g_801;
    int32_t g_802;
    int32_t ** volatile g_815;
    union U3 g_831[8];
    int8_t ***g_834[2][3][6];
    int8_t ****g_833;
    int8_t g_926;
    uint32_t *g_944;
    uint32_t **g_943;
    uint64_t *g_992;
    uint64_t **g_991[4];
    uint64_t *** volatile g_990;
    union U0 ** volatile g_993[8][7][3];
    int32_t ** volatile g_1042;
    int16_t g_1084;
    int16_t g_1089;
    int16_t *g_1088;
    int16_t **g_1087[4][10][6];
    uint32_t g_1093;
    union U2 ** volatile g_1119[7][3][9];
    int32_t * volatile g_1121;
    uint8_t g_1194;
    union U3 g_1244;
    int32_t * volatile g_1273;
    union U2 g_1342;
    volatile int32_t g_1354;
    union U2 ** volatile g_1396;
    int32_t ** volatile g_1397;
    volatile int64_t g_1404;
    int32_t * volatile g_1409;
    int32_t g_1432;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S4 * p_1436);
union U2 * func_3(int8_t * p_4, int16_t  p_5, union U2 * p_6, uint32_t  p_7, struct S4 * p_1436);
int8_t * func_8(int8_t * p_9, uint64_t  p_10, int8_t * p_11, union U2 * p_12, struct S4 * p_1436);
union U0 * func_18(int8_t * p_19, struct S4 * p_1436);
uint8_t  func_30(uint64_t  p_31, union U0 * p_32, int64_t  p_33, union U0 * p_34, struct S4 * p_1436);
int64_t  func_35(union U2 * p_36, struct S4 * p_1436);
union U2 * func_37(int8_t * p_38, int8_t * p_39, int8_t * p_40, union U0 * p_41, struct S4 * p_1436);
int8_t * func_42(uint64_t  p_43, uint16_t  p_44, struct S4 * p_1436);
int32_t  func_48(int16_t  p_49, uint32_t  p_50, union U0  p_51, int64_t  p_52, struct S4 * p_1436);
union U0 * func_53(int32_t  p_54, union U2 * p_55, int8_t * p_56, struct S4 * p_1436);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_1(struct S4 * p_1436)
{ /* block id: 4 */
    uint8_t l_1081 = 255UL;
    int16_t **l_1091 = &p_1436->g_1088;
    union U0 l_1140[9] = {{0x3F46A6A8L},{0x74ECEC92L},{0x3F46A6A8L},{0x3F46A6A8L},{0x74ECEC92L},{0x3F46A6A8L},{0x3F46A6A8L},{0x74ECEC92L},{0x3F46A6A8L}};
    int64_t l_1147 = 0x3BDED71DFD7DC215L;
    int32_t l_1148 = (-5L);
    uint64_t *l_1176 = &p_1436->g_597;
    uint64_t **l_1175 = &l_1176;
    uint64_t ***l_1174 = &l_1175;
    uint32_t l_1198 = 4294967295UL;
    int32_t l_1203 = 1L;
    int32_t l_1205[3][2][3] = {{{0x6D83B70BL,0x1E1E1D17L,0x6D83B70BL},{0x6D83B70BL,0x1E1E1D17L,0x6D83B70BL}},{{0x6D83B70BL,0x1E1E1D17L,0x6D83B70BL},{0x6D83B70BL,0x1E1E1D17L,0x6D83B70BL}},{{0x6D83B70BL,0x1E1E1D17L,0x6D83B70BL},{0x6D83B70BL,0x1E1E1D17L,0x6D83B70BL}}};
    int32_t *l_1229 = &l_1148;
    uint32_t l_1245[7][8] = {{4294967286UL,0xBFA7A88EL,0xCAD2D1CFL,1UL,0x1FFA8EBEL,1UL,0xCAD2D1CFL,0xBFA7A88EL},{4294967286UL,0xBFA7A88EL,0xCAD2D1CFL,1UL,0x1FFA8EBEL,1UL,0xCAD2D1CFL,0xBFA7A88EL},{4294967286UL,0xBFA7A88EL,0xCAD2D1CFL,1UL,0x1FFA8EBEL,1UL,0xCAD2D1CFL,0xBFA7A88EL},{4294967286UL,0xBFA7A88EL,0xCAD2D1CFL,1UL,0x1FFA8EBEL,1UL,0xCAD2D1CFL,0xBFA7A88EL},{4294967286UL,0xBFA7A88EL,0xCAD2D1CFL,1UL,0x1FFA8EBEL,1UL,0xCAD2D1CFL,0xBFA7A88EL},{4294967286UL,0xBFA7A88EL,0xCAD2D1CFL,1UL,0x1FFA8EBEL,1UL,0xCAD2D1CFL,0xBFA7A88EL},{4294967286UL,0xBFA7A88EL,0xCAD2D1CFL,1UL,0x1FFA8EBEL,1UL,0xCAD2D1CFL,0xBFA7A88EL}};
    int32_t *l_1272 = (void*)0;
    uint64_t l_1281 = 0x2AD5FE960D2F1116L;
    uint16_t *l_1290 = (void*)0;
    uint16_t *l_1291 = &p_1436->g_66[2][3].f0;
    int64_t l_1292[10][10][2] = {{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}},{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}},{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}},{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}},{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}},{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}},{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}},{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}},{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}},{{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L},{0L,0x574D0DD3017FBB42L}}};
    int64_t l_1293 = (-1L);
    int16_t l_1294[1];
    int32_t l_1326 = 0x52CE10A7L;
    uint8_t l_1391 = 252UL;
    uint8_t l_1405 = 9UL;
    int64_t l_1431 = 1L;
    uint32_t l_1434 = 0xF661F2E2L;
    int64_t l_1435 = 0x03697D4470B3FB7FL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1294[i] = 0x3E46L;
    return l_1435;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_79 p_1436->g_80 p_1436->g_926 p_1436->g_483
 * writes: p_1436->g_80 p_1436->g_216 p_1436->g_106 p_1436->g_438
 */
union U2 * func_3(int8_t * p_4, int16_t  p_5, union U2 * p_6, uint32_t  p_7, struct S4 * p_1436)
{ /* block id: 526 */
    uint32_t l_1102 = 0xBACA55CFL;
    uint64_t *l_1112 = &p_1436->g_597;
    uint64_t **l_1111[8] = {&l_1112,(void*)0,&l_1112,&l_1112,(void*)0,&l_1112,&l_1112,(void*)0};
    uint16_t l_1113 = 1UL;
    int8_t ***l_1114 = &p_1436->g_272[2];
    int32_t *l_1115[1];
    uint8_t *l_1116 = &p_1436->g_216;
    int32_t l_1117 = 0x0306DA16L;
    union U2 *l_1118 = &p_1436->g_699;
    int i;
    for (i = 0; i < 1; i++)
        l_1115[i] = (void*)0;
    l_1117 = (safe_add_func_int64_t_s_s(p_5, (safe_div_func_int32_t_s_s(p_7, ((safe_add_func_uint16_t_u_u(((((p_7 || (safe_rshift_func_uint8_t_u_s(249UL, 2))) == l_1102) , (p_1436->g_106 = (((*l_1116) = (p_7 ^ ((safe_div_func_int64_t_s_s((((*p_1436->g_79) ^= (safe_sub_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_1111[7] != (void*)0), 1)), (l_1113 , p_7))) , l_1114) == (void*)0), l_1102))) , p_5), p_7)) <= p_1436->g_926))) | 0UL))) < p_5), p_7)) && 0xABBD17FBF3E5AB7EL)))));
    (*p_1436->g_483) = (void*)0;
    (*p_1436->g_79) = (6L < p_5);
    return l_1118;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_2 p_1436->g_504 p_1436->g_482 p_1436->g_438 p_1436->g_80 p_1436->g_336 p_1436->g_337 p_1436->g_495 p_1436->g_224 p_1436->g_110 p_1436->g_562 p_1436->g_14 p_1436->g_66.f0 p_1436->g_106 p_1436->g_284 p_1436->g_597 p_1436->g_378.f0 p_1436->g_138 p_1436->g_376 p_1436->g_447 p_1436->g_234 p_1436->g_290 p_1436->g_634 p_1436->g_68 p_1436->g_503 p_1436->g_217 p_1436->g_216 p_1436->g_634.f0 p_1436->g_29.f0 p_1436->g_112 p_1436->g_29 p_1436->g_79 p_1436->g_196 p_1436->g_108 p_1436->g_699 p_1436->g_718 p_1436->g_369 p_1436->g_744 p_1436->g_366.f0 p_1436->g_195.f0 p_1436->g_437 p_1436->g_833 p_1436->g_834 p_1436->g_831.f0 p_1436->g_65 p_1436->g_66 p_1436->g_926 p_1436->g_815 p_1436->g_17 p_1436->g_801 p_1436->g_943 p_1436->g_944 p_1436->g_523.f0 p_1436->g_990 p_1436->g_1042 p_1436->g_378.f1
 * writes: p_1436->g_2 p_1436->g_80 p_1436->g_495 p_1436->g_224 p_1436->g_110 p_1436->g_376 p_1436->g_597 p_1436->g_216 p_1436->g_14 p_1436->g_234 p_1436->g_108 p_1436->g_68 p_1436->g_634.f0 p_1436->g_66.f0 p_1436->g_106 p_1436->g_112 p_1436->g_138 p_1436->g_13 p_1436->g_197 p_1436->g_290 p_1436->g_378.f0 p_1436->g_926 p_1436->g_482 p_1436->g_378.f1 p_1436->g_943 p_1436->g_991 p_1436->g_517 p_1436->g_217 p_1436->g_438
 */
int8_t * func_8(int8_t * p_9, uint64_t  p_10, int8_t * p_11, union U2 * p_12, struct S4 * p_1436)
{ /* block id: 6 */
    int8_t *l_20 = &p_1436->g_14[3][2][5];
    union U0 **l_994 = &p_1436->g_517;
    int32_t l_997 = 0x5119054DL;
    uint16_t *l_1005 = &p_1436->g_66[2][3].f0;
    int32_t l_1033 = 9L;
    int32_t l_1034 = 1L;
    (*l_994) = func_18(l_20, p_1436);
    if ((safe_sub_func_uint32_t_u_u(l_997, ((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(p_10, (safe_unary_minus_func_uint32_t_u(((*p_1436->g_944) &= (safe_div_func_uint16_t_u_u(p_10, ((*l_1005) = p_1436->g_14[2][0][4])))))))), 1)) | p_1436->g_80[2]))))
    { /* block id: 494 */
        int32_t *l_1010 = &l_997;
        uint16_t *l_1013 = &p_1436->g_2;
        uint8_t *l_1026 = &p_1436->g_216;
        int16_t *l_1035 = &p_1436->g_217;
        int32_t *l_1036 = &p_1436->g_106;
        int32_t l_1037 = 0L;
        int32_t *l_1038 = &l_1033;
        int32_t l_1039[6] = {0x2932FB6FL,0x2932FB6FL,0x2932FB6FL,0x2932FB6FL,0x2932FB6FL,0x2932FB6FL};
        int i;
        l_1039[3] = ((*l_1038) = (safe_div_func_int64_t_s_s(((safe_sub_func_int32_t_s_s(((*l_1010) ^= (!((*p_1436->g_438) = (-9L)))), ((*p_1436->g_944) | ((*l_1036) ^= (((safe_lshift_func_int16_t_s_u(((void*)0 == l_1013), (safe_mul_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((void*)0 == &p_1436->g_504), p_10)) < (safe_rshift_func_int16_t_s_u(((*l_1035) = (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((p_1436->g_495 = (0x0267L && (safe_rshift_func_uint8_t_u_s((++(*l_1026)), 2)))) , (((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((l_1034 &= ((*l_1005) = (l_1033 > 0x52L))), l_1033)), 0xBDFB3BFD3F3E3F76L)) <= 0x7F91L) | p_10)), 6UL)), 7))), p_10))), p_10)))) , l_1033) >= 0x71DBBE3CL))))) & l_1033), l_1037)));
    }
    else
    { /* block id: 505 */
        int16_t l_1040 = 0x231AL;
        int32_t *l_1041 = &l_1034;
        int32_t **l_1043 = &p_1436->g_438;
        (*p_1436->g_438) = l_1040;
        (*p_1436->g_1042) = l_1041;
        (*l_1043) = l_1041;
    }
    for (p_1436->g_378.f1 = 17; (p_1436->g_378.f1 <= 18); p_1436->g_378.f1++)
    { /* block id: 512 */
        uint32_t **l_1049 = (void*)0;
        union U1 l_1057 = {0xDC37L};
        (*p_1436->g_438) = (safe_unary_minus_func_uint8_t_u(((void*)0 != &p_1436->g_438)));
        for (l_997 = 0; (l_997 <= 0); l_997 += 1)
        { /* block id: 516 */
            uint32_t **l_1050[5][9][4] = {{{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0}},{{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0}},{{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0}},{{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0}},{{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0},{&p_1436->g_944,&p_1436->g_944,&p_1436->g_944,(void*)0}}};
            uint32_t l_1074 = 0x8928D838L;
            uint64_t l_1075 = 18446744073709551606UL;
            uint32_t l_1076 = 0xA2A2ECA7L;
            uint8_t *l_1077 = &p_1436->g_216;
            int32_t *l_1078 = &p_1436->g_80[3];
            int i, j, k;
            l_1078 = (((safe_lshift_func_uint16_t_u_u((l_1049 == (p_10 , l_1050[1][1][3])), 5)) || (p_10 || (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((*l_1077) = ((((safe_div_func_int16_t_s_s(((l_1057 , ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u(8UL, (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_1436->g_831[7].f0, 4)), ((((safe_add_func_uint16_t_u_u(0xF5BAL, (safe_sub_func_int16_t_s_s(1L, p_10)))) > p_1436->g_234) != l_1074) || l_1033))))) && l_1074), l_1075)), l_1074)), (*p_11))) , l_1076)) && 0x78L), p_1436->g_14[4][0][3])) , 255UL) != l_1076) , p_10)) < l_1057.f0), 1L)), p_10)))) , (void*)0);
            if (l_1033)
                break;
        }
    }
    return l_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_504 p_1436->g_482 p_1436->g_438 p_1436->g_2 p_1436->g_80 p_1436->g_336 p_1436->g_337 p_1436->g_495 p_1436->g_224 p_1436->g_110 p_1436->g_562 p_1436->g_14 p_1436->g_66.f0 p_1436->g_106 p_1436->g_284 p_1436->g_597 p_1436->g_378.f0 p_1436->g_138 p_1436->g_376 p_1436->g_447 p_1436->g_234 p_1436->g_290 p_1436->g_634 p_1436->g_68 p_1436->g_503 p_1436->g_217 p_1436->g_216 p_1436->g_634.f0 p_1436->g_29.f0 p_1436->g_112 p_1436->g_29 p_1436->g_79 p_1436->g_196 p_1436->g_108 p_1436->g_699 p_1436->g_718 p_1436->g_369 p_1436->g_744 p_1436->g_366.f0 p_1436->g_195.f0 p_1436->g_437 p_1436->g_833 p_1436->g_834 p_1436->g_831.f0 p_1436->g_65 p_1436->g_66 p_1436->g_926 p_1436->g_815 p_1436->g_17 p_1436->g_801 p_1436->g_943 p_1436->g_944 p_1436->g_523.f0 p_1436->g_990
 * writes: p_1436->g_2 p_1436->g_80 p_1436->g_495 p_1436->g_224 p_1436->g_110 p_1436->g_376 p_1436->g_597 p_1436->g_216 p_1436->g_14 p_1436->g_234 p_1436->g_108 p_1436->g_68 p_1436->g_634.f0 p_1436->g_66.f0 p_1436->g_106 p_1436->g_112 p_1436->g_138 p_1436->g_13 p_1436->g_197 p_1436->g_290 p_1436->g_378.f0 p_1436->g_926 p_1436->g_482 p_1436->g_378.f1 p_1436->g_943 p_1436->g_991
 */
union U0 * func_18(int8_t * p_19, struct S4 * p_1436)
{ /* block id: 7 */
    uint8_t l_47 = 254UL;
    union U0 *l_377 = &p_1436->g_378;
    uint16_t l_451[3][6] = {{0x61B1L,0x61B1L,0xDD27L,1UL,0xA673L,1UL},{0x61B1L,0x61B1L,0xDD27L,1UL,0xA673L,1UL},{0x61B1L,0x61B1L,0xDD27L,1UL,0xA673L,1UL}};
    int32_t l_479 = (-1L);
    int8_t **l_492 = &p_1436->g_13[2][0];
    union U1 l_518 = {65530UL};
    int16_t *l_526 = &p_1436->g_110;
    uint8_t ***l_538 = &p_1436->g_449;
    int32_t l_555 = 0x4ABCD4F4L;
    int32_t l_601 = 0L;
    int32_t *l_606[4][7];
    union U2 *l_645 = &p_1436->g_17;
    int16_t l_655 = 0L;
    uint32_t l_728 = 0x79D9F49FL;
    int64_t l_729 = 0x47D6CC8C3BA64EF3L;
    uint8_t l_847 = 0UL;
    uint16_t *l_871[5][5][7] = {{{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0}},{{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0}},{{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0}},{{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0}},{{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0},{&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0,&p_1436->g_66[2][3].f0,&p_1436->g_634.f0,&p_1436->g_634.f0}}};
    int64_t l_917[4];
    uint32_t *l_942[2];
    uint32_t **l_941 = &l_942[0];
    int32_t l_955 = 0x292422EBL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
            l_606[i][j] = &p_1436->g_106;
    }
    for (i = 0; i < 4; i++)
        l_917[i] = 0x752CF9182081DEF6L;
    for (i = 0; i < 2; i++)
        l_942[i] = &l_728;
lbl_529:
    for (p_1436->g_2 = 0; (p_1436->g_2 > 47); p_1436->g_2 = safe_add_func_uint32_t_u_u(p_1436->g_2, 6))
    { /* block id: 10 */
        uint64_t l_23 = 0x9B467BB1A88AF16DL;
        union U0 *l_28 = &p_1436->g_29[0][2][0];
        int8_t **l_199 = (void*)0;
        int8_t **l_200 = &p_1436->g_13[2][0];
        uint64_t *l_375 = &p_1436->g_376;
        uint8_t *l_484 = &p_1436->g_112;
        int32_t l_513[7][6][6] = {{{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L}},{{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L}},{{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L}},{{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L}},{{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L}},{{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L}},{{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L},{(-10L),0x7AB9A82DL,0x294FD269L,0x7AB9A82DL,(-10L),0x241A37B5L}}};
        int16_t *l_524[2];
        uint32_t l_525 = 0x0051136EL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_524[i] = &p_1436->g_217;
        (1 + 1);
    }
    (*p_1436->g_438) = (((*p_1436->g_504) || 0x70581EEC492AEF62L) , (safe_add_func_int64_t_s_s((l_518.f0 == l_451[1][0]), l_451[2][1])));
    if (p_1436->g_2)
        goto lbl_529;
    if (((safe_div_func_int64_t_s_s((-6L), (-1L))) ^ (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((0x9CE41EEEL < l_47), (((void*)0 != &p_1436->g_2) , (((((safe_sub_func_int16_t_s_s(l_518.f0, (l_538 == &p_1436->g_449))) <= p_1436->g_80[3]) & l_518.f0) != 65535UL) & (*p_1436->g_336))))), (*p_1436->g_438)))))
    { /* block id: 251 */
        uint16_t l_556 = 0xCA1EL;
        uint64_t *l_574 = (void*)0;
        int32_t l_599 = 0x3A33F5C9L;
        int64_t l_600 = 0x36C7CDB53B7BDC35L;
        int64_t l_641[4][5] = {{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}};
        union U2 *l_648 = &p_1436->g_429[0][1][2];
        union U1 l_664 = {0x30F4L};
        int32_t **l_675 = &l_606[2][1];
        int32_t *l_676 = &l_555;
        int i, j;
        for (l_47 = 0; (l_47 <= 1); l_47 += 1)
        { /* block id: 254 */
            int32_t *l_539 = &p_1436->g_80[3];
            int32_t *l_540 = &l_479;
            int32_t *l_541 = &l_479;
            int32_t l_542 = 0x5BA68786L;
            int32_t *l_543 = &l_479;
            int32_t *l_544 = (void*)0;
            int32_t *l_545 = &p_1436->g_106;
            int32_t *l_546 = (void*)0;
            int32_t *l_547 = &l_542;
            int32_t *l_548 = &p_1436->g_80[1];
            int32_t *l_549 = &l_542;
            int32_t *l_550 = &l_542;
            int32_t *l_551 = &p_1436->g_106;
            int32_t *l_552 = &p_1436->g_80[3];
            int32_t *l_553 = &p_1436->g_224;
            int32_t *l_554[10][2][5] = {{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}},{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}},{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}},{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}},{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}},{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}},{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}},{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}},{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}},{{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]},{&l_479,&p_1436->g_224,(void*)0,(void*)0,&p_1436->g_80[2]}}};
            int16_t **l_575[7] = {&l_526,&l_526,&l_526,&l_526,&l_526,&l_526,&l_526};
            uint32_t *l_596 = (void*)0;
            uint32_t **l_595 = &l_596;
            uint16_t *l_598 = (void*)0;
            int i, j, k;
            l_539 = &l_479;
            l_556++;
            for (p_1436->g_495 = 0; (p_1436->g_495 <= 1); p_1436->g_495 += 1)
            { /* block id: 259 */
                int32_t **l_561 = &l_544;
                for (p_1436->g_224 = 0; (p_1436->g_224 <= 1); p_1436->g_224 += 1)
                { /* block id: 262 */
                    for (p_1436->g_110 = 1; (p_1436->g_110 >= 0); p_1436->g_110 -= 1)
                    { /* block id: 265 */
                        l_555 = (safe_mul_func_int8_t_s_s((-7L), l_555));
                    }
                }
                (*l_561) = (void*)0;
                for (p_1436->g_224 = 0; (p_1436->g_224 <= 1); p_1436->g_224 += 1)
                { /* block id: 272 */
                    int32_t l_571[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_571[i] = (-1L);
                    (*p_1436->g_438) |= (((p_1436->g_562 , (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((+(safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((l_571[0] , (l_518.f0 && ((safe_mod_func_int32_t_s_s(((((*p_1436->g_336) < (l_556 >= (*p_19))) > (*l_553)) , ((void*)0 == l_574)), p_1436->g_66[2][3].f0)) >= l_571[0]))), l_556)), 0x6D6AD76DAA082343L))), p_1436->g_2)), (*p_19)))) == l_518.f0) && (*l_551));
                }
                return &p_1436->g_378;
            }
            (*l_547) = ((((l_601 ^= ((((l_575[4] != (((((safe_mod_func_uint16_t_u_u((l_599 &= (safe_mul_func_uint8_t_u_u(l_451[0][5], (((((l_479 = (safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*l_547), (safe_sub_func_uint16_t_u_u((!(safe_div_func_int8_t_s_s((safe_div_func_int64_t_s_s((l_556 , (safe_sub_func_uint64_t_u_u(((l_555 = (safe_unary_minus_func_uint32_t_u(((!(((*l_595) = &p_1436->g_234) != &p_1436->g_234)) && ((*p_1436->g_504) & ((p_1436->g_284 == (void*)0) <= p_1436->g_597)))))) <= 0UL), l_556))), (-4L))), 0x24L))), (*l_543))))), (-8L)))) & 1UL) || 0x61C8L) != p_1436->g_378.f0) & p_1436->g_80[0])))), l_47)) && 0x9FL) >= 0L) , p_1436->g_138[0]) , (void*)0)) >= 0L) != l_600) > (*p_19))) || 18446744073709551615UL) , l_599) & 4UL);
        }
        for (p_1436->g_376 = 23; (p_1436->g_376 <= 15); p_1436->g_376--)
        { /* block id: 286 */
            int16_t l_630 = 0x0238L;
            uint8_t ***l_631 = &p_1436->g_449;
            uint8_t ***l_638 = (void*)0;
            uint64_t l_639 = 0xB8A02D65247EC317L;
            int32_t l_644[10][2] = {{(-10L),0x2A8BE175L},{(-10L),0x2A8BE175L},{(-10L),0x2A8BE175L},{(-10L),0x2A8BE175L},{(-10L),0x2A8BE175L},{(-10L),0x2A8BE175L},{(-10L),0x2A8BE175L},{(-10L),0x2A8BE175L},{(-10L),0x2A8BE175L},{(-10L),0x2A8BE175L}};
            union U2 *l_647 = &p_1436->g_429[2][0][5];
            union U0 *l_661[7] = {&p_1436->g_378,&p_1436->g_378,&p_1436->g_378,&p_1436->g_378,&p_1436->g_378,&p_1436->g_378,&p_1436->g_378};
            union U1 *l_666 = &p_1436->g_66[1][3];
            int i, j;
            for (p_1436->g_597 = 18; (p_1436->g_597 != 21); p_1436->g_597 = safe_add_func_uint8_t_u_u(p_1436->g_597, 1))
            { /* block id: 289 */
                int32_t l_617 = (-1L);
                uint32_t l_637 = 4294967295UL;
                l_606[2][1] = (*p_1436->g_447);
                for (p_1436->g_216 = 0; (p_1436->g_216 == 6); p_1436->g_216++)
                { /* block id: 293 */
                    uint32_t l_629 = 0x5DBCEBEFL;
                    uint32_t l_640[3][1];
                    uint16_t *l_642 = (void*)0;
                    uint16_t *l_643[6] = {(void*)0,&l_556,(void*)0,(void*)0,&l_556,(void*)0};
                    union U2 **l_646[1][9] = {{&l_645,&p_1436->g_16,&l_645,&l_645,&p_1436->g_16,&l_645,&l_645,&p_1436->g_16,&l_645}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_640[i][j] = 4294967290UL;
                    }
                    (*p_1436->g_438) = ((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((l_617 = (l_644[0][0] &= ((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((l_617 , (p_1436->g_234 && ((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((((*p_19) = (safe_unary_minus_func_uint64_t_u(((safe_lshift_func_uint16_t_u_u(l_629, (p_1436->g_2 <= ((*l_526) = (((l_630 , p_1436->g_290) , (((((((l_631 == (((safe_div_func_int16_t_s_s(((p_1436->g_634 , (safe_mul_func_uint8_t_u_u(l_637, 0x30L))) >= 9UL), l_630)) || p_1436->g_68) , l_638)) , l_639) < l_629) ^ l_639) , 0UL) <= l_640[1][0]) | l_640[2][0])) || l_637))))) | l_637)))) != l_639), 2UL)), l_639)) ^ (**p_1436->g_503)), l_630)) != 6UL))) | 9UL), l_641[2][4])), l_641[2][2])) <= 4294967289UL))), l_640[2][0])) == p_1436->g_2), l_637)) || l_640[1][0]);
                    (*p_1436->g_438) = (((l_647 = l_645) != l_648) & (+(p_1436->g_217 , 2UL)));
                }
            }
            for (p_1436->g_216 = 0; (p_1436->g_216 > 31); p_1436->g_216 = safe_add_func_uint64_t_u_u(p_1436->g_216, 7))
            { /* block id: 305 */
                uint32_t l_656 = 7UL;
                union U1 **l_665[5];
                uint64_t *l_667 = (void*)0;
                uint64_t *l_668 = &p_1436->g_597;
                uint16_t *l_673[10] = {&l_451[2][3],&l_451[2][3],&l_451[2][3],&l_451[2][3],&l_451[2][3],&l_451[2][3],&l_451[2][3],&l_451[2][3],&l_451[2][3],&l_451[2][3]};
                int8_t *l_674 = &p_1436->g_14[0][2][2];
                int i;
                for (i = 0; i < 5; i++)
                    l_665[i] = (void*)0;
                for (p_1436->g_234 = 0; (p_1436->g_234 > 13); p_1436->g_234++)
                { /* block id: 308 */
                    for (p_1436->g_108 = (-26); (p_1436->g_108 >= 21); p_1436->g_108 = safe_add_func_uint16_t_u_u(p_1436->g_108, 9))
                    { /* block id: 311 */
                        ++l_656;
                    }
                    for (l_601 = (-19); (l_601 < 16); l_601++)
                    { /* block id: 316 */
                        return l_661[3];
                    }
                    for (l_655 = 0; (l_655 <= 3); l_655 += 1)
                    { /* block id: 321 */
                        (*p_1436->g_438) &= 0x751ABB69L;
                    }
                }
                for (p_1436->g_68 = 27; (p_1436->g_68 <= 14); p_1436->g_68 = safe_sub_func_int8_t_s_s(p_1436->g_68, 4))
                { /* block id: 327 */
                    if (l_656)
                        break;
                }
                (*p_1436->g_438) = (((((*l_492) = func_42(l_644[7][1], (p_1436->g_634.f0 |= ((((l_664 , (((&l_518 != (l_666 = (p_1436->g_337 , &l_664))) >= (((--(*l_668)) | (safe_mod_func_uint64_t_u_u(p_1436->g_80[3], p_1436->g_68))) , l_630)) < (*p_1436->g_438))) , 0x2DA93F31L) >= p_1436->g_378.f0) , p_1436->g_68)), p_1436)) != l_674) > 4294967290UL) || (*p_19));
            }
        }
        l_676 = ((*l_675) = (*p_1436->g_447));
    }
    else
    { /* block id: 339 */
        uint64_t *l_686 = &p_1436->g_597;
        uint64_t **l_685 = &l_686;
        int32_t l_695 = 0L;
        int8_t ***l_702 = &p_1436->g_272[0];
        int32_t l_715 = 0x5786ECD9L;
        int64_t l_746 = 0x595D47EEB2DCBE6FL;
        union U1 *l_754[3];
        int32_t *l_800 = &l_479;
        uint16_t *l_872 = &p_1436->g_2;
        union U0 *l_930[3];
        int i;
        for (i = 0; i < 3; i++)
            l_754[i] = &p_1436->g_66[2][3];
        for (i = 0; i < 3; i++)
            l_930[i] = &p_1436->g_29[0][2][0];
        if ((&l_377 != &p_1436->g_517))
        { /* block id: 340 */
            uint64_t ***l_687 = &l_685;
            uint8_t *l_690 = &p_1436->g_216;
            int32_t l_698[2];
            int8_t ***l_700 = &p_1436->g_272[2];
            int8_t ****l_701 = &l_700;
            int8_t ****l_703 = (void*)0;
            int8_t ****l_704 = &l_702;
            int i;
            for (i = 0; i < 2; i++)
                l_698[i] = 0L;
            l_695 = ((*p_1436->g_438) ^= (safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((((*l_687) = l_685) != &p_1436->g_504), (safe_lshift_func_uint8_t_u_u(((*l_690) = ((*p_1436->g_503) == l_686)), (safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((&l_451[1][3] == &p_1436->g_2), l_695)), 5)))))) <= ((safe_add_func_int64_t_s_s((l_698[0] | (p_1436->g_217 <= l_698[0])), 0x768DC594B6C206ABL)) >= l_698[0])), 1)), 248UL)) <= 0x508D410CL), p_1436->g_108)));
            (*p_1436->g_438) |= (((p_1436->g_699 , ((*l_701) = l_700)) == ((*l_704) = l_702)) , (~l_695));
            return &p_1436->g_378;
        }
        else
        { /* block id: 349 */
            uint8_t l_727 = 0UL;
            uint32_t *l_730 = &p_1436->g_290;
            int32_t l_731 = 1L;
            int8_t *l_745 = &p_1436->g_14[2][0][4];
            int32_t l_747 = 0x6F73A70EL;
            union U1 *l_755 = &l_518;
            union U3 **l_798[6][7] = {{&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0]},{&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0]},{&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0]},{&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0]},{&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0]},{&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0],(void*)0,&p_1436->g_197[0][0],&p_1436->g_197[0][0]}};
            int8_t l_967 = 0x43L;
            int32_t l_979 = 5L;
            int64_t l_987 = 0L;
            int i, j;
lbl_914:
            p_1436->g_106 |= (((safe_lshift_func_int8_t_s_s((((l_731 = (((safe_sub_func_int8_t_s_s((((((*l_730) = (0x41F068CBL & ((safe_mul_func_uint8_t_u_u((((l_695 <= (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((l_715 &= 0xD0A1L), 6)) < (l_695 , (safe_lshift_func_uint8_t_u_u((p_1436->g_718 , 251UL), (((p_1436->g_224 | ((((safe_mod_func_int32_t_s_s((*p_1436->g_438), ((safe_mod_func_int32_t_s_s(((p_1436->g_66[2][3].f0 ^= (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((((l_727 < p_1436->g_482) ^ l_727) == l_728) != l_727), 7)) | p_1436->g_80[3]), l_695))) , (*p_1436->g_438)), l_729)) | 0x852B32C131B075E6L))) || p_1436->g_14[2][0][4]) < l_727) > l_727)) > (-1L)) != 0x6F641C991EE1F927L))))), 0x6AE9L))) & l_727) && (*p_19)), l_695)) > l_727))) <= l_727) ^ 0UL) < l_695), 0xBFL)) ^ l_727) != 3UL)) ^ 1UL) || l_715), 5)) == l_695) != p_1436->g_369);
            if ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((p_1436->g_376 , l_731) == (safe_div_func_int8_t_s_s((((l_731 ^ ((void*)0 != &l_606[1][5])) >= (safe_sub_func_uint32_t_u_u((l_747 = (safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((((p_19 = p_19) != (p_1436->g_744 , l_745)) || p_1436->g_366.f0) != 18446744073709551615UL), p_1436->g_29[0][2][0].f0)), l_746))), l_727))) == 0x17ECCBD3L), l_731))), l_731)), 6UL)))
            { /* block id: 357 */
                uint16_t l_799 = 65526UL;
                int32_t *l_814[10] = {&p_1436->g_106,&p_1436->g_224,&p_1436->g_106,&p_1436->g_106,&p_1436->g_224,&p_1436->g_106,&p_1436->g_106,&p_1436->g_224,&p_1436->g_106,&p_1436->g_106};
                uint32_t l_836 = 7UL;
                int i;
                for (p_1436->g_108 = 7; (p_1436->g_108 < 17); p_1436->g_108 = safe_add_func_int16_t_s_s(p_1436->g_108, 5))
                { /* block id: 360 */
                    uint64_t l_751 = 7UL;
                    union U1 **l_756 = &l_754[2];
                    union U1 *l_758 = &p_1436->g_66[4][3];
                    union U1 **l_757 = &l_758;
                    uint16_t *l_759 = (void*)0;
                    uint16_t *l_760[9] = {&l_451[0][3],&p_1436->g_2,&l_451[0][3],&l_451[0][3],&p_1436->g_2,&l_451[0][3],&l_451[0][3],&p_1436->g_2,&l_451[0][3]};
                    union U0 *l_763[8][4][8] = {{{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0},{(void*)0,(void*)0,&p_1436->g_378,&p_1436->g_29[0][2][0],&p_1436->g_29[0][8][0],&p_1436->g_29[0][2][0],&p_1436->g_378,(void*)0}}};
                    uint32_t l_811[9] = {1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL,1UL};
                    uint64_t l_837 = 18446744073709551610UL;
                    int i, j, k;
                    (*p_1436->g_79) = (safe_unary_minus_func_int16_t_s(l_751));
                }
                return &p_1436->g_29[0][2][0];
            }
            else
            { /* block id: 397 */
                uint8_t l_840[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_840[i] = 1UL;
                l_840[2]++;
                for (l_729 = (-23); (l_729 >= 3); l_729++)
                { /* block id: 401 */
                    int64_t *l_845 = &p_1436->g_495;
                    (*p_1436->g_438) = (((*l_845) = p_1436->g_195.f0) <= p_1436->g_80[1]);
                }
            }
            for (l_747 = 0; (l_747 <= 2); l_747 += 1)
            { /* block id: 408 */
                int32_t l_846[2][3][7] = {{{(-4L),2L,0x26506E57L,2L,(-4L),(-4L),2L},{(-4L),2L,0x26506E57L,2L,(-4L),(-4L),2L},{(-4L),2L,0x26506E57L,2L,(-4L),(-4L),2L}},{{(-4L),2L,0x26506E57L,2L,(-4L),(-4L),2L},{(-4L),2L,0x26506E57L,2L,(-4L),(-4L),2L},{(-4L),2L,0x26506E57L,2L,(-4L),(-4L),2L}}};
                uint16_t **l_885 = &l_872;
                uint64_t ***l_888[8][2][1];
                int i, j, k;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_888[i][j][k] = (void*)0;
                    }
                }
                for (p_1436->g_376 = 0; (p_1436->g_376 <= 1); p_1436->g_376 += 1)
                { /* block id: 411 */
                    int32_t **l_850 = &l_606[3][1];
                    uint16_t l_907 = 0xE4ECL;
                    l_847--;
                    (*l_850) = (*p_1436->g_437);
                    for (p_1436->g_112 = 0; (p_1436->g_112 <= 2); p_1436->g_112 += 1)
                    { /* block id: 416 */
                        uint16_t *l_868 = &p_1436->g_634.f0;
                        uint16_t **l_867 = &l_868;
                        uint16_t *l_870 = &p_1436->g_66[2][3].f0;
                        uint16_t **l_869[4];
                        int64_t *l_889 = &l_729;
                        uint8_t *l_890 = &p_1436->g_216;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_869[i] = &l_870;
                        (**l_850) = (safe_div_func_uint8_t_u_u((((safe_div_func_int64_t_s_s(p_1436->g_14[(l_747 + 3)][p_1436->g_112][(p_1436->g_112 + 3)], ((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_1436->g_14[(p_1436->g_376 + 3)][p_1436->g_376][(p_1436->g_112 + 1)], 5L)), (safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(((l_747 && (safe_lshift_func_uint16_t_u_u(((l_846[1][2][5] >= (safe_rshift_func_int8_t_s_u((((l_871[4][2][6] = ((*l_867) = (l_731 , (void*)0))) != l_872) || (-1L)), 4))) == (*p_1436->g_504)), p_1436->g_80[3]))) ^ (*p_19)), p_1436->g_14[(p_1436->g_376 + 3)][p_1436->g_376][(p_1436->g_112 + 1)])), 4)))) | (**l_850)))) && l_747) || p_1436->g_112), (**l_850)));
                        (**l_850) = (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((((*l_890) &= ((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((**l_850) >= ((((*l_889) ^= (+(((void*)0 == (*p_1436->g_833)) > (safe_lshift_func_int16_t_s_s((((void*)0 == l_885) | ((+0x260C6E4DL) > (p_1436->g_14[(p_1436->g_376 + 3)][p_1436->g_376][(p_1436->g_112 + 1)] != (l_888[1][0][0] == &p_1436->g_503)))), 5))))) & l_731) , l_846[1][0][6])), l_846[1][2][3])) != l_731), 0)) ^ 0x0A7AE09DAAE5B935L) <= 0x6DL), (*p_1436->g_336))) ^ (*l_800))) && 0x9BL), p_1436->g_14[(p_1436->g_376 + 3)][p_1436->g_376][(p_1436->g_112 + 1)])) & 0x4A39L), p_1436->g_14[(p_1436->g_376 + 3)][p_1436->g_376][(p_1436->g_112 + 1)]));
                    }
                    l_846[1][2][3] = (((*l_730) = 0x3A45586DL) < ((safe_sub_func_uint16_t_u_u((**l_850), (safe_lshift_func_uint16_t_u_u((4294967295UL >= 0x5C6A9788L), (((safe_div_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_907, 6)), ((safe_rshift_func_uint8_t_u_s(((((p_1436->g_634.f0 |= ((*l_872) ^= (*l_800))) && (*l_800)) , ((safe_rshift_func_uint8_t_u_s((((*l_526) = 0x1651L) != (p_1436->g_108 = (safe_rshift_func_int16_t_s_u((l_731 < l_747), l_747)))), (*p_19))) && (*l_800))) || p_1436->g_224), l_727)) ^ l_846[1][2][3]))), p_1436->g_831[7].f0)), p_1436->g_106)), 0x1279L)) , (*l_800)) == l_846[0][0][1]), (*p_19))) | (*p_1436->g_438)) ^ (*p_1436->g_438)))))) ^ p_1436->g_376));
                }
                for (l_601 = 0; (l_601 <= 1); l_601 += 1)
                { /* block id: 433 */
                    uint16_t l_927[5];
                    int16_t l_928[5][9][5] = {{{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L}},{{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L}},{{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L}},{{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L}},{{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L},{0x6215L,8L,(-7L),5L,0L}}};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_927[i] = 0xC753L;
                    for (p_1436->g_378.f0 = 0; (p_1436->g_378.f0 <= 2); p_1436->g_378.f0 += 1)
                    { /* block id: 436 */
                        int i, j, k;
                        if (p_1436->g_369)
                            goto lbl_914;
                        (*l_800) = p_1436->g_14[l_601][(l_601 + 1)][l_747];
                    }
                    for (p_1436->g_110 = 1; (p_1436->g_110 >= 0); p_1436->g_110 -= 1)
                    { /* block id: 442 */
                        int8_t *l_924 = (void*)0;
                        int8_t *l_925 = &p_1436->g_926;
                        int32_t l_929 = 0x29B0A3C9L;
                        int i, j, k;
                        l_929 |= ((*p_1436->g_438) = (safe_mul_func_uint16_t_u_u(p_1436->g_14[(p_1436->g_110 + 3)][l_747][(l_747 + 3)], ((l_917[1] = ((*l_800) &= 0x6DL)) < ((0x919115AD28253E04L < ((safe_sub_func_uint32_t_u_u(4294967294UL, ((((safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s(l_846[0][2][6], p_1436->g_14[(p_1436->g_110 + 3)][l_747][(l_747 + 3)])), ((((((*l_925) &= ((*p_1436->g_65) , (*p_19))) ^ (1UL ^ (*p_1436->g_504))) && (**p_1436->g_437)) < 0x2D25F0ECL) ^ (*p_1436->g_438)))) | l_927[1]) , l_727) != p_1436->g_14[(p_1436->g_110 + 3)][l_747][(l_747 + 3)]))) | l_727)) ^ l_928[4][3][4])))));
                        if ((*l_800))
                            continue;
                    }
                }
                for (p_1436->g_482 = 0; (p_1436->g_482 <= 1); p_1436->g_482 += 1)
                { /* block id: 453 */
                    return l_930[0];
                }
            }
            for (p_1436->g_597 = 11; (p_1436->g_597 > 5); p_1436->g_597 = safe_sub_func_uint8_t_u_u(p_1436->g_597, 5))
            { /* block id: 459 */
                uint8_t l_960 = 254UL;
                int32_t *l_980 = &p_1436->g_80[3];
                (*l_800) |= (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((~(l_702 != (*p_1436->g_833))) , (**p_1436->g_503)), p_1436->g_217)), 0x5C8FD4C02D9C8435L));
                for (p_1436->g_378.f1 = 0; (p_1436->g_378.f1 == 18); p_1436->g_378.f1 = safe_add_func_int32_t_s_s(p_1436->g_378.f1, 5))
                { /* block id: 463 */
                    union U0 l_948 = {0x3C36A143L};
                    uint64_t *l_989 = &p_1436->g_376;
                    uint64_t **l_988 = &l_989;
                    for (l_747 = 9; (l_747 >= (-25)); l_747--)
                    { /* block id: 466 */
                        uint32_t **l_946 = &l_942[0];
                        uint32_t ***l_945 = &l_946;
                        (*p_1436->g_438) = ((p_1436->g_943 = l_941) != ((*l_945) = &p_1436->g_944));
                    }
                    for (l_847 = 0; (l_847 <= 2); l_847 += 1)
                    { /* block id: 473 */
                        int64_t *l_968[9] = {&p_1436->g_495,&p_1436->g_495,&p_1436->g_495,&p_1436->g_495,&p_1436->g_495,&p_1436->g_495,&p_1436->g_495,&p_1436->g_495,&p_1436->g_495};
                        int i;
                        (**p_1436->g_815) = (-2L);
                        (*l_800) = (safe_unary_minus_func_int64_t_s(((l_948 , (safe_sub_func_int16_t_s_s(p_1436->g_138[l_847], (safe_rshift_func_int16_t_s_s(((((*l_526) = (((safe_lshift_func_uint8_t_u_s(1UL, l_955)) < (safe_mod_func_int32_t_s_s(((*l_645) , ((+(**p_1436->g_801)) != (safe_rshift_func_int8_t_s_u((((*l_730) = (*l_800)) && (((*p_1436->g_65) , (void*)0) == l_730)), p_1436->g_138[l_847])))), l_960))) >= p_1436->g_29[0][2][0].f0)) , (**p_1436->g_943)) , 0x4481L), 5))))) != 1L)));
                        (*p_1436->g_438) = (safe_rshift_func_uint8_t_u_s(((((((safe_add_func_uint32_t_u_u((l_967 <= (p_1436->g_523.f0 > ((p_1436->g_68 ^= p_1436->g_112) >= ((safe_mul_func_int16_t_s_s(l_960, ((((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((((safe_rshift_func_int8_t_s_u((((void*)0 == l_702) && (safe_sub_func_int16_t_s_s(p_1436->g_110, (((l_948.f0 , (-1L)) != 0xE338600699412C8EL) > 9L)))), 3)) , (void*)0) != &p_1436->g_376) , &p_1436->g_29[0][6][0]) != &p_1436->g_378), (**p_1436->g_943))), p_1436->g_138[l_847])) != (*p_19)) == 18446744073709551610UL) || (**p_1436->g_943)))) | l_727)))), 0x5D49D89EL)) < (*l_800)) >= l_948.f0) != (*l_800)) < l_967) >= 0x60A9L), l_948.f0));
                    }
                    (*p_1436->g_990) = (((0x66L >= (((&l_685 != (((*p_19) = l_979) , &p_1436->g_503)) != ((l_747 = ((*l_872) = (~((0x533F0008L & (l_980 == (*p_1436->g_447))) | (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((l_948.f0 ^ (safe_lshift_func_uint8_t_u_u((l_967 > p_1436->g_106), l_987))), p_1436->g_217)) | (*l_800)), 10)))))) != (*l_980))) || (*l_800))) > l_948.f0) , l_988);
                }
            }
        }
        return l_377;
    }
    return &p_1436->g_29[0][2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_397 p_1436->g_378 p_1436->g_412 p_1436->g_80 p_1436->g_106 p_1436->g_138 p_1436->g_224 p_1436->g_66.f0 p_1436->g_336 p_1436->g_337 p_1436->g_429 p_1436->g_290 p_1436->g_110 p_1436->g_437 p_1436->g_438 p_1436->g_447
 * writes: p_1436->g_80 p_1436->g_108 p_1436->g_112 p_1436->g_110 p_1436->g_106 p_1436->g_438 p_1436->g_449
 */
uint8_t  func_30(uint64_t  p_31, union U0 * p_32, int64_t  p_33, union U0 * p_34, struct S4 * p_1436)
{ /* block id: 169 */
    int32_t *l_379 = &p_1436->g_106;
    int32_t l_380 = 0x06878616L;
    int32_t *l_381 = &p_1436->g_106;
    int32_t l_382 = (-1L);
    int32_t *l_383 = (void*)0;
    int32_t *l_384 = &l_380;
    int32_t l_385 = 3L;
    int32_t *l_386 = (void*)0;
    int32_t *l_387 = &p_1436->g_106;
    int32_t *l_388 = &p_1436->g_80[3];
    int32_t *l_389[6][8][5] = {{{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0}},{{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0}},{{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0}},{{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0}},{{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0}},{{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0},{(void*)0,&l_380,&p_1436->g_80[1],&p_1436->g_80[2],(void*)0}}};
    int64_t l_390 = 0x2118681D0E41AA05L;
    int64_t l_391[9];
    int64_t l_392 = 0x146DCAC918D35356L;
    int8_t l_393 = 0x58L;
    uint32_t l_394 = 0x34B9FD41L;
    int32_t l_413 = 0x1DABD2DEL;
    int16_t l_430 = 1L;
    uint64_t **l_444 = (void*)0;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_391[i] = 0L;
    l_394++;
    (*l_388) = ((p_1436->g_397 , (0x6B89E988L >= ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_33, ((safe_div_func_int64_t_s_s((((((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(((0x42FB8A2227AB925CL < (~(((safe_mod_func_int32_t_s_s(((*p_32) , (p_33 != (p_1436->g_412 , (~(-1L))))), (0x3B8BA360L && (*l_388)))) != p_33) | p_31))) ^ (*l_379)), p_1436->g_138[1])) <= (*l_387)), p_31)) == p_31) != (*l_379)) < l_413) || 0x4DL), p_1436->g_224)) , p_33))), (*l_379))) < p_1436->g_66[2][3].f0))) ^ p_31);
    if ((0x43L <= p_31))
    { /* block id: 172 */
        return p_31;
    }
    else
    { /* block id: 174 */
        int32_t *l_436[6][1][7] = {{{&l_385,&l_382,&l_382,&l_385,(void*)0,(void*)0,(void*)0}},{{&l_385,&l_382,&l_382,&l_385,(void*)0,(void*)0,(void*)0}},{{&l_385,&l_382,&l_382,&l_385,(void*)0,(void*)0,(void*)0}},{{&l_385,&l_382,&l_382,&l_385,(void*)0,(void*)0,(void*)0}},{{&l_385,&l_382,&l_382,&l_385,(void*)0,(void*)0,(void*)0}},{{&l_385,&l_382,&l_382,&l_385,(void*)0,(void*)0,(void*)0}}};
        uint64_t *l_442 = &p_1436->g_138[0];
        uint64_t **l_441 = &l_442;
        int i, j, k;
        (*l_384) = (safe_mul_func_int16_t_s_s((*p_1436->g_336), (1L == 0x2AD08DF0L)));
        for (l_394 = 0; (l_394 >= 54); l_394 = safe_add_func_uint8_t_u_u(l_394, 1))
        { /* block id: 178 */
            uint32_t l_420 = 0UL;
            union U0 l_433[9] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
            int16_t *l_434 = &p_1436->g_108;
            uint8_t *l_435 = &p_1436->g_112;
            int i;
            p_1436->g_106 &= (safe_mod_func_uint16_t_u_u(l_420, ((safe_sub_func_int16_t_s_s((p_1436->g_110 &= ((safe_sub_func_uint16_t_u_u((l_420 >= ((((*l_435) = ((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(l_420, (p_1436->g_429[0][1][2] , (l_430 && (((safe_lshift_func_int8_t_s_s((((*l_434) = ((l_433[8] , p_31) > l_433[8].f0)) != p_1436->g_80[3]), p_33)) > l_433[8].f0) <= l_433[8].f0))))) >= l_420), p_1436->g_290)) <= l_420)) && l_420) && 0xD4C40589L)), l_420)) >= 5L)), 0x660DL)) , 0xCB5FL)));
            (*p_1436->g_437) = (l_436[5][0][2] = &p_1436->g_106);
            for (l_420 = 0; (l_420 == 6); l_420 = safe_add_func_uint64_t_u_u(l_420, 3))
            { /* block id: 187 */
                uint64_t ***l_443 = &l_441;
                l_444 = ((*l_443) = l_441);
            }
        }
        for (p_1436->g_106 = 25; (p_1436->g_106 != (-7)); p_1436->g_106 = safe_sub_func_int16_t_s_s(p_1436->g_106, 7))
        { /* block id: 194 */
            uint8_t ***l_450 = &p_1436->g_449;
            (*p_1436->g_447) = (*p_1436->g_437);
            (*l_450) = &p_1436->g_275[0];
        }
    }
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_285
 * writes:
 */
int64_t  func_35(union U2 * p_36, struct S4 * p_1436)
{ /* block id: 165 */
    int32_t *l_371 = &p_1436->g_80[0];
    uint8_t l_372 = 0xFCL;
    --l_372;
    return p_1436->g_285;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_110 p_1436->g_14 p_1436->g_79 p_1436->g_80 p_1436->g_138 p_1436->g_216 p_1436->g_224 p_1436->g_217 p_1436->g_195.f0 p_1436->g_66.f0 p_1436->g_112 p_1436->g_2 p_1436->g_271 p_1436->g_106 p_1436->g_284 p_1436->g_68 p_1436->g_290 p_1436->g_285 p_1436->g_292 p_1436->g_335 p_1436->g_338 p_1436->g_366 p_1436->g_369
 * writes: p_1436->g_110 p_1436->g_106 p_1436->g_108 p_1436->g_138 p_1436->g_216 p_1436->g_217 p_1436->g_29.f0 p_1436->g_112 p_1436->g_224 p_1436->g_234 p_1436->g_68 p_1436->g_66.f0 p_1436->g_272 p_1436->g_275 p_1436->g_14 p_1436->g_290 p_1436->g_80 p_1436->g_292 p_1436->g_335
 */
union U2 * func_37(int8_t * p_38, int8_t * p_39, int8_t * p_40, union U0 * p_41, struct S4 * p_1436)
{ /* block id: 74 */
    int16_t l_208 = 1L;
    int32_t l_243[7] = {0x2CC00202L,(-5L),0x2CC00202L,0x2CC00202L,(-5L),0x2CC00202L,0x2CC00202L};
    union U1 l_263 = {7UL};
    union U0 *l_359 = (void*)0;
    union U0 **l_358 = &l_359;
    int64_t *l_360 = &p_1436->g_68;
    int8_t ***l_363 = (void*)0;
    union U2 *l_370[7][4][3] = {{{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0}},{{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0}},{{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0}},{{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0}},{{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0}},{{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0}},{{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0},{&p_1436->g_17,&p_1436->g_17,(void*)0}}};
    int i, j, k;
    for (p_1436->g_110 = 0; (p_1436->g_110 <= 4); p_1436->g_110 += 1)
    { /* block id: 77 */
        uint32_t l_215[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        union U1 l_247 = {0x8760L};
        int32_t *l_257[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_256 = &l_257[8];
        uint32_t l_350 = 4UL;
        union U2 *l_353 = &p_1436->g_17;
        int i;
        for (p_1436->g_106 = 4; (p_1436->g_106 >= 0); p_1436->g_106 -= 1)
        { /* block id: 80 */
            uint32_t l_203[3];
            int32_t l_220 = 0x7BD2AB77L;
            uint32_t *l_233 = &p_1436->g_234;
            union U3 *l_241 = &p_1436->g_195;
            int64_t *l_242 = &p_1436->g_68;
            uint16_t *l_244 = &p_1436->g_66[2][3].f0;
            int32_t *l_245 = &p_1436->g_224;
            uint8_t *l_252 = (void*)0;
            uint8_t *l_253 = &p_1436->g_216;
            int32_t **l_258 = &l_257[2];
            int8_t **l_269 = &p_1436->g_13[2][0];
            int i;
            for (i = 0; i < 3; i++)
                l_203[i] = 8UL;
            for (p_1436->g_108 = 0; (p_1436->g_108 <= 4); p_1436->g_108 += 1)
            { /* block id: 83 */
                uint64_t *l_211 = &p_1436->g_138[2];
                int16_t *l_214[4][10] = {{&p_1436->g_110,(void*)0,(void*)0,&p_1436->g_110,&p_1436->g_110,(void*)0,(void*)0,&p_1436->g_110,&p_1436->g_110,(void*)0},{&p_1436->g_110,(void*)0,(void*)0,&p_1436->g_110,&p_1436->g_110,(void*)0,(void*)0,&p_1436->g_110,&p_1436->g_110,(void*)0},{&p_1436->g_110,(void*)0,(void*)0,&p_1436->g_110,&p_1436->g_110,(void*)0,(void*)0,&p_1436->g_110,&p_1436->g_110,(void*)0},{&p_1436->g_110,(void*)0,(void*)0,&p_1436->g_110,&p_1436->g_110,(void*)0,(void*)0,&p_1436->g_110,&p_1436->g_110,(void*)0}};
                int32_t *l_218[9] = {&p_1436->g_29[0][2][0].f0,&p_1436->g_29[0][2][0].f0,&p_1436->g_29[0][2][0].f0,&p_1436->g_29[0][2][0].f0,&p_1436->g_29[0][2][0].f0,&p_1436->g_29[0][2][0].f0,&p_1436->g_29[0][2][0].f0,&p_1436->g_29[0][2][0].f0,&p_1436->g_29[0][2][0].f0};
                int32_t l_219 = 1L;
                uint8_t *l_221 = &p_1436->g_112;
                int32_t l_222[10][2][7] = {{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}},{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}},{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}},{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}},{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}},{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}},{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}},{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}},{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}},{{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L},{0x1216C94CL,0L,0L,0x1216C94CL,0x7639D241L,0x1B12F1D4L,0x5B160ED1L}}};
                int32_t *l_223 = &p_1436->g_224;
                int i, j, k;
                (*l_223) |= (safe_mul_func_int8_t_s_s((*p_39), (l_222[7][0][4] &= (l_203[1] != ((*l_221) = ((safe_sub_func_int16_t_s_s((+((*p_1436->g_79) != ((p_1436->g_29[0][2][0].f0 = (l_219 = ((safe_add_func_uint64_t_u_u(l_203[1], l_208)) | (safe_mul_func_int16_t_s_s((p_1436->g_217 = ((((*l_211) = l_208) | 18446744073709551610UL) , (p_1436->g_216 &= ((safe_add_func_int16_t_s_s((l_215[2] |= p_1436->g_138[0]), 0x23E1L)) , (-4L))))), 0x7C67L))))) , l_215[0]))), l_220)) <= p_1436->g_80[3]))))));
            }
            (*l_245) &= ((safe_mul_func_int8_t_s_s((((*l_244) ^= (((l_243[1] = ((safe_div_func_uint32_t_u_u((18446744073709551615UL || (((((safe_sub_func_int64_t_s_s((5UL != (((l_215[0] , ((safe_mod_func_uint8_t_u_u(((l_220 >= ((*l_233) = 9UL)) || (p_1436->g_80[3] || ((*l_242) = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(0x44L, (safe_mul_func_int8_t_s_s(((void*)0 != l_241), p_1436->g_217)))), l_208))))), l_215[2])) , &p_1436->g_112)) != &p_1436->g_216) , 0xD2L)), p_1436->g_80[4])) & p_1436->g_216) < 18446744073709551615UL) & p_1436->g_195.f0) || p_1436->g_195.f0)), 0x01F27245L)) & l_208)) , p_1436->g_138[1]) >= p_1436->g_138[1])) != l_215[0]), 255UL)) <= p_1436->g_112);
            for (p_1436->g_234 = 0; (p_1436->g_234 <= 0); p_1436->g_234 += 1)
            { /* block id: 101 */
                union U2 *l_246 = &p_1436->g_17;
                return l_246;
            }
            if ((l_247 , (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((((--(*l_253)) || ((*l_253) = ((l_258 = l_256) != (void*)0))) != (((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(4L, ((l_263 , ((((*l_245) & (((safe_add_func_uint16_t_u_u(65535UL, 0UL)) | ((safe_div_func_uint8_t_u_u((((l_233 = &p_1436->g_234) != &p_1436->g_234) != 0xCFL), (*p_40))) > (*p_38))) != l_243[1])) , p_1436->g_14[2][0][4]) < 0UL)) <= p_1436->g_80[1]))), p_1436->g_80[0])) , l_243[4]) <= p_1436->g_2)) && 1UL), p_1436->g_66[2][3].f0)), l_243[3]))))
            { /* block id: 108 */
                int64_t l_268[5][7] = {{(-7L),5L,0L,0x7364518C668514E5L,5L,0x7364518C668514E5L,0L},{(-7L),5L,0L,0x7364518C668514E5L,5L,0x7364518C668514E5L,0L},{(-7L),5L,0L,0x7364518C668514E5L,5L,0x7364518C668514E5L,0L},{(-7L),5L,0L,0x7364518C668514E5L,5L,0x7364518C668514E5L,0L},{(-7L),5L,0L,0x7364518C668514E5L,5L,0x7364518C668514E5L,0L}};
                uint16_t *l_291 = &p_1436->g_2;
                int32_t l_301 = 0x55CB79CFL;
                int i, j;
                if (l_268[0][3])
                    break;
                for (p_1436->g_224 = 0; (p_1436->g_224 <= 6); p_1436->g_224 += 1)
                { /* block id: 112 */
                    int8_t ***l_270 = (void*)0;
                    int32_t l_316 = 5L;
                    union U0 l_329 = {-10L};
                    int i;
                    (*p_1436->g_271) = (l_269 = &p_1436->g_13[0][1]);
                    l_220 = l_215[p_1436->g_106];
                    for (p_1436->g_68 = 0; (p_1436->g_68 >= 0); p_1436->g_68 -= 1)
                    { /* block id: 118 */
                        uint8_t **l_273 = (void*)0;
                        uint8_t **l_274 = &l_252;
                        uint32_t l_276[6];
                        int32_t l_277 = 0L;
                        uint32_t l_288[6];
                        uint32_t *l_289 = &p_1436->g_290;
                        uint64_t *l_324 = &p_1436->g_138[0];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_276[i] = 0x462669E4L;
                        for (i = 0; i < 6; i++)
                            l_288[i] = 0xAEB1FCBEL;
                        l_277 ^= (l_276[2] = (p_40 != (p_1436->g_275[0] = ((*l_274) = (void*)0))));
                        p_1436->g_292[0] = ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((((*p_40) = ((p_1436->g_79 != p_1436->g_284) >= 0x44L)) || l_276[2]), (p_1436->g_80[1] = ((((((p_1436->g_68 & 0x89D1E22AL) & (safe_lshift_func_int8_t_s_u(((p_1436->g_224 & ((*l_233) = l_208)) & ((*l_289) &= ((0xAE62F836L | p_1436->g_217) >= l_288[1]))), 1))) , l_215[p_1436->g_106]) , l_291) != &p_1436->g_2) , p_1436->g_224)))), 2)) < l_268[4][3]), l_288[1])) , 0x3ED84E94L);
                        l_316 &= ((safe_sub_func_int64_t_s_s(((l_301 = (l_243[1] &= ((*l_244) |= ((-1L) & ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(p_1436->g_285, p_1436->g_68)), 2)) , (safe_rshift_func_int16_t_s_s(6L, 0))))))) || ((-5L) != (safe_add_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(((*l_253) = l_301), (safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((l_301 < ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_1436->g_110 >= ((safe_mod_func_int8_t_s_s(((!l_243[6]) >= 0xA6B7L), 0x53L)) ^ l_243[2])), p_1436->g_292[0])), l_276[2])) >= p_1436->g_110)), l_277)), l_276[3])))) & (*p_39)) & p_1436->g_14[2][0][4]), l_243[5])))), l_268[3][6])) && 18446744073709551608UL);
                        (*p_1436->g_79) = (safe_add_func_int8_t_s_s(0x0EL, (p_1436->g_106 | ((safe_unary_minus_func_uint16_t_u(p_1436->g_80[3])) < (((((safe_rshift_func_uint16_t_u_s(((0x420A5E3A977B04AAL >= p_1436->g_68) || 0x1AL), (((0x034BL >= (safe_mul_func_uint16_t_u_u((+(((((*l_324)++) > ((safe_sub_func_uint32_t_u_u(((l_329 , ((*p_38) ^= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((&p_1436->g_68 == (void*)0), 9)), l_276[2])))) > (*l_245)), 0x05F7048AL)) == l_301)) ^ (-1L)) >= l_243[1])), p_1436->g_292[0]))) <= 65535UL) | p_1436->g_217))) & p_1436->g_290) != 2L) & l_208) , 0x4BA3209BL)))));
                    }
                }
                l_243[1] = l_268[0][3];
            }
            else
            { /* block id: 139 */
                (*l_258) = &l_243[1];
                if (l_208)
                    break;
                for (p_1436->g_217 = 0; (p_1436->g_217 <= 2); p_1436->g_217 += 1)
                { /* block id: 144 */
                    union U2 *l_334 = &p_1436->g_17;
                    return l_334;
                }
                for (l_208 = 4; (l_208 >= 0); l_208 -= 1)
                { /* block id: 149 */
                    (*p_1436->g_338) = p_1436->g_335[3];
                }
            }
        }
        for (l_263.f0 = (-26); (l_263.f0 == 55); l_263.f0++)
        { /* block id: 156 */
            int64_t l_341[5] = {0x6432309C3397EC06L,0x6432309C3397EC06L,0x6432309C3397EC06L,0x6432309C3397EC06L,0x6432309C3397EC06L};
            int16_t l_342 = 0x610AL;
            int32_t l_343 = 0L;
            int32_t l_344 = 1L;
            int32_t l_345 = 0x15542F66L;
            int32_t l_346 = 0x63658493L;
            int16_t l_347[2];
            int32_t l_348 = 0x015230D3L;
            int32_t l_349[1][3];
            int i, j;
            for (i = 0; i < 2; i++)
                l_347[i] = 0x1E92L;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_349[i][j] = 0x0AED6686L;
            }
            ++l_350;
            return l_353;
        }
    }
    p_1436->g_224 |= ((safe_mod_func_int8_t_s_s((((*l_360) = ((safe_lshift_func_int8_t_s_u((*p_40), 2)) & (((*l_358) = &p_1436->g_29[0][2][0]) == p_41))) > (l_243[0] & (safe_sub_func_uint8_t_u_u(((void*)0 != l_363), (safe_div_func_uint16_t_u_u((p_1436->g_366 , l_243[6]), (safe_add_func_int8_t_s_s((0x439523C6D49A363CL > p_1436->g_369), (-1L))))))))), 255UL)) > l_243[0]);
    return l_370[2][1][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_80 p_1436->g_66.f0 p_1436->g_29.f0 p_1436->g_2 p_1436->g_14 p_1436->g_112 p_1436->g_29 p_1436->g_138 p_1436->g_106 p_1436->g_79 p_1436->g_68 p_1436->g_196
 * writes: p_1436->g_80 p_1436->g_66.f0 p_1436->g_106 p_1436->g_108 p_1436->g_110 p_1436->g_112 p_1436->g_138 p_1436->g_13 p_1436->g_68 p_1436->g_197
 */
int8_t * func_42(uint64_t  p_43, uint16_t  p_44, struct S4 * p_1436)
{ /* block id: 19 */
    uint16_t l_87 = 65535UL;
    int32_t *l_90 = &p_1436->g_80[1];
    uint16_t *l_100[5][5][7] = {{{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87}},{{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87}},{{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87}},{{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87}},{{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87},{&p_1436->g_2,&p_1436->g_2,&p_1436->g_66[2][3].f0,&p_1436->g_2,&p_1436->g_2,(void*)0,&l_87}}};
    int32_t l_101[4];
    int16_t *l_107 = &p_1436->g_108;
    int16_t *l_109[5];
    uint8_t *l_111 = &p_1436->g_112;
    uint32_t l_119 = 1UL;
    union U3 *l_194 = &p_1436->g_195;
    int32_t *l_198[5][1][4] = {{{(void*)0,&l_101[0],&l_101[0],(void*)0}},{{(void*)0,&l_101[0],&l_101[0],(void*)0}},{{(void*)0,&l_101[0],&l_101[0],(void*)0}},{{(void*)0,&l_101[0],&l_101[0],(void*)0}},{{(void*)0,&l_101[0],&l_101[0],(void*)0}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_101[i] = 0x47269306L;
    for (i = 0; i < 5; i++)
        l_109[i] = &p_1436->g_110;
    if ((safe_add_func_uint8_t_u_u(0x4EL, ((*l_111) |= ((p_1436->g_110 = (safe_div_func_int32_t_s_s((((*l_90) = (((safe_sub_func_int64_t_s_s(p_1436->g_80[0], l_87)) <= p_43) , (p_44 <= (l_87 != p_44)))) || p_43), (safe_unary_minus_func_int8_t_s(((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((((((*l_107) = ((p_1436->g_106 = (safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((--p_1436->g_66[2][3].f0) < ((safe_lshift_func_uint16_t_u_u((l_101[0] , p_44), p_1436->g_29[0][2][0].f0)) , 0L)), p_43)) || 250UL), 1UL))) && p_43)) && p_1436->g_2) <= p_1436->g_14[5][2][1]) , p_43), p_43)) > l_101[1]), p_44)) || p_44)))))) <= p_1436->g_14[2][0][4])))))
    { /* block id: 26 */
        union U2 *l_117 = (void*)0;
        int32_t *l_118 = &p_1436->g_106;
        int32_t l_120[8][7][4] = {{{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L}},{{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L}},{{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L}},{{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L}},{{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L}},{{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L}},{{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L}},{{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L},{0x6208AC86L,0x587D7775L,2L,1L}}};
        int32_t **l_121 = &l_118;
        int i, j, k;
        (*l_90) |= 0x3582EBD2L;
        for (p_1436->g_112 = 0; (p_1436->g_112 >= 47); p_1436->g_112++)
        { /* block id: 30 */
            union U2 **l_116[5][4][2] = {{{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16}},{{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16}},{{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16}},{{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16}},{{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16},{&p_1436->g_16,&p_1436->g_16}}};
            int i, j, k;
            l_117 = &p_1436->g_17;
        }
        (*l_121) = (p_1436->g_29[0][2][0] , (((((*l_118) = ((*l_90) = 9L)) > l_119) ^ l_120[6][3][0]) , &p_1436->g_80[3]));
    }
    else
    { /* block id: 36 */
        uint32_t l_134[2][8] = {{0UL,0UL,0x2E6A1E35L,1UL,0x7407BC3BL,1UL,0x2E6A1E35L,0UL},{0UL,0UL,0x2E6A1E35L,1UL,0x7407BC3BL,1UL,0x2E6A1E35L,0UL}};
        uint64_t *l_137 = &p_1436->g_138[0];
        int8_t **l_139 = &p_1436->g_13[1][2];
        union U2 **l_146 = &p_1436->g_16;
        int32_t l_162 = 7L;
        int32_t l_166 = 5L;
        int32_t l_167[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_167[i] = 0x66A33768L;
        l_101[0] &= (p_1436->g_29[0][0][0] , (((safe_mul_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((*l_107) = ((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(1L, (safe_mul_func_uint16_t_u_u(l_134[0][3], (p_44 &= (safe_sub_func_uint64_t_u_u((~((*l_137) &= 0xF5F0232DB0CE1991L)), (((*l_139) = (void*)0) == ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((l_146 != (void*)0), (safe_mod_func_int64_t_s_s((*l_90), 0x41626AC7A9A96AD4L)))), p_43)) , p_43), 11)) , &p_1436->g_14[0][2][3]))))))))) > l_134[0][0]), 0x52L)), p_1436->g_106)) , l_134[0][3])), p_1436->g_66[2][3].f0)) > 1L) & p_1436->g_29[0][2][0].f0), l_134[0][5])) ^ 0xFCBFL) || 255UL));
        (*l_90) = (safe_rshift_func_uint8_t_u_u((*l_90), ((*l_111)--)));
        (*p_1436->g_79) |= p_43;
        for (p_1436->g_106 = 0; (p_1436->g_106 < 3); p_1436->g_106 = safe_add_func_uint32_t_u_u(p_1436->g_106, 5))
        { /* block id: 47 */
            int32_t l_159 = 0x42ACB64CL;
            int32_t l_168[3];
            int i;
            for (i = 0; i < 3; i++)
                l_168[i] = 0x60D4552DL;
            for (p_1436->g_68 = 0; (p_1436->g_68 != (-5)); p_1436->g_68--)
            { /* block id: 50 */
                uint32_t l_169 = 0xF3011294L;
                for (l_87 = 0; (l_87 <= 2); l_87 += 1)
                { /* block id: 53 */
                    int32_t l_157 = 0x6E7D2BA4L;
                    int32_t *l_158 = &p_1436->g_80[l_87];
                    int32_t *l_160 = (void*)0;
                    int32_t *l_161 = &p_1436->g_80[l_87];
                    int32_t *l_163 = (void*)0;
                    int32_t *l_164 = &p_1436->g_80[l_87];
                    int32_t *l_165[10][10] = {{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]},{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]},{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]},{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]},{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]},{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]},{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]},{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]},{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]},{&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87],&l_162,&p_1436->g_80[l_87],&p_1436->g_80[l_87]}};
                    int32_t **l_188 = &l_165[8][4];
                    uint32_t l_189 = 0x808F3841L;
                    int i, j;
                    ++l_169;
                    (*l_188) = (((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((p_43 ^ ((safe_mod_func_int32_t_s_s(((*l_161) = (-1L)), p_44)) < p_43)), 8)) , (safe_sub_func_int64_t_s_s(p_1436->g_138[0], ((*l_90) = ((safe_mod_func_uint8_t_u_u((1UL >= (((safe_lshift_func_int16_t_s_s((((((0xB06DL ^ ((+(safe_div_func_uint16_t_u_u(p_43, (p_44 , 0xD849L)))) > l_169)) , p_43) >= p_44) > p_1436->g_138[0]) != p_1436->g_14[1][2][5]), 0)) | p_43) > (*l_90))), (*l_90))) | (*l_90)))))), p_1436->g_106)) | p_44) , (void*)0);
                    ++l_189;
                    if ((*p_1436->g_79))
                        break;
                }
                if ((*p_1436->g_79))
                    break;
                if ((*p_1436->g_79))
                    break;
            }
        }
    }
    for (p_1436->g_106 = 0; (p_1436->g_106 > 28); ++p_1436->g_106)
    { /* block id: 68 */
        (*p_1436->g_196) = l_194;
    }
    p_1436->g_106 ^= (*l_90);
    return &p_1436->g_14[4][2][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_2 p_1436->g_65 p_1436->g_14 p_1436->g_68 p_1436->g_29 p_1436->g_79 p_1436->g_80
 * writes: p_1436->g_80
 */
int32_t  func_48(int16_t  p_49, uint32_t  p_50, union U0  p_51, int64_t  p_52, struct S4 * p_1436)
{ /* block id: 11 */
    union U1 l_61 = {9UL};
    union U1 *l_62 = &l_61;
    int64_t *l_67[7];
    int32_t l_69 = 0x5CE5052DL;
    int8_t *l_70 = (void*)0;
    union U0 *l_72 = &p_1436->g_29[0][4][0];
    union U0 **l_71 = &l_72;
    int i;
    for (i = 0; i < 7; i++)
        l_67[i] = &p_1436->g_68;
    (*l_71) = func_53(((((safe_lshift_func_int16_t_s_u((((safe_mul_func_int8_t_s_s((((*l_62) = l_61) , ((p_51.f0 , ((*l_62) , (l_69 ^= ((0x88A3L && (5UL != (p_1436->g_2 >= (((p_1436->g_65 == &l_61) , (*l_62)) , l_61.f0)))) & 0UL)))) <= l_61.f0)), 0xA4L)) , (void*)0) == &p_1436->g_14[4][2][3]), 1)) | p_52) , l_61.f0) < p_1436->g_14[2][1][4]), &p_1436->g_17, l_70, p_1436);
    (*p_1436->g_79) = (p_1436->g_68 | (((&p_1436->g_66[5][3] != (void*)0) ^ (safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s((-1L), ((*l_72) , 0x77L))), 0x6135737360B9F0A6L))) , (p_51 , ((safe_lshift_func_int8_t_s_s(l_61.f0, p_49)) == p_1436->g_2))));
    return (*p_1436->g_79);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U0 * func_53(int32_t  p_54, union U2 * p_55, int8_t * p_56, struct S4 * p_1436)
{ /* block id: 14 */
    return &p_1436->g_29[0][6][0];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S4 c_1437;
    struct S4* p_1436 = &c_1437;
    struct S4 c_1438 = {
        1UL, // p_1436->g_2
        {{{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL}},{{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL}},{{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL}},{{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL}},{{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL}},{{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL},{0x3EL,(-4L),1L,1L,(-4L),0x3EL}}}, // p_1436->g_14
        {{&p_1436->g_14[2][0][4],&p_1436->g_14[2][0][4],&p_1436->g_14[4][0][2],&p_1436->g_14[2][0][4]},{&p_1436->g_14[2][0][4],&p_1436->g_14[2][0][4],&p_1436->g_14[4][0][2],&p_1436->g_14[2][0][4]},{&p_1436->g_14[2][0][4],&p_1436->g_14[2][0][4],&p_1436->g_14[4][0][2],&p_1436->g_14[2][0][4]},{&p_1436->g_14[2][0][4],&p_1436->g_14[2][0][4],&p_1436->g_14[4][0][2],&p_1436->g_14[2][0][4]}}, // p_1436->g_13
        {0}, // p_1436->g_17
        &p_1436->g_17, // p_1436->g_16
        {{{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}}}}, // p_1436->g_29
        {{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}},{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}},{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}},{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}},{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}},{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}},{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}},{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}},{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}},{{0x6068L},{0x6068L},{6UL},{9UL},{65535UL}}}, // p_1436->g_66
        &p_1436->g_66[2][3], // p_1436->g_65
        9L, // p_1436->g_68
        {0x5A884418L,0x5A884418L,0x5A884418L,0x5A884418L,0x5A884418L}, // p_1436->g_80
        &p_1436->g_80[3], // p_1436->g_79
        (-1L), // p_1436->g_106
        7L, // p_1436->g_108
        0x1404L, // p_1436->g_110
        0UL, // p_1436->g_112
        {&p_1436->g_16,&p_1436->g_16,&p_1436->g_16}, // p_1436->g_115
        {0x1267A7CB42118B51L,0x1267A7CB42118B51L,0x1267A7CB42118B51L}, // p_1436->g_138
        {255UL}, // p_1436->g_195
        {{&p_1436->g_195},{&p_1436->g_195}}, // p_1436->g_197
        &p_1436->g_197[0][0], // p_1436->g_196
        0x10L, // p_1436->g_216
        (-1L), // p_1436->g_217
        (-6L), // p_1436->g_224
        3UL, // p_1436->g_234
        {&p_1436->g_13[2][3],&p_1436->g_13[2][3],&p_1436->g_13[2][3]}, // p_1436->g_272
        &p_1436->g_272[2], // p_1436->g_271
        {&p_1436->g_112,&p_1436->g_112}, // p_1436->g_275
        0x4AD25D55L, // p_1436->g_285
        &p_1436->g_285, // p_1436->g_284
        0x87DCAFD5L, // p_1436->g_290
        {0x74C96F0BE2BD0B35L,0x74C96F0BE2BD0B35L}, // p_1436->g_292
        0x27A4L, // p_1436->g_337
        &p_1436->g_337, // p_1436->g_336
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1436->g_335
        &p_1436->g_335[3], // p_1436->g_338
        {1UL}, // p_1436->g_366
        0L, // p_1436->g_369
        8UL, // p_1436->g_376
        {0L}, // p_1436->g_378
        {0}, // p_1436->g_397
        {0}, // p_1436->g_412
        {{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}}}, // p_1436->g_429
        &p_1436->g_80[3], // p_1436->g_438
        &p_1436->g_438, // p_1436->g_437
        &p_1436->g_438, // p_1436->g_447
        (void*)0, // p_1436->g_449
        {{{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0}},{{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0}},{{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0}},{{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0}},{{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0},{&p_1436->g_449,(void*)0,&p_1436->g_449,&p_1436->g_449,(void*)0}}}, // p_1436->g_448
        (void*)0, // p_1436->g_476
        0x84A8FF0D8EE92921L, // p_1436->g_482
        &p_1436->g_438, // p_1436->g_483
        0x399A1CBDC85A2FAAL, // p_1436->g_495
        &p_1436->g_482, // p_1436->g_504
        &p_1436->g_504, // p_1436->g_503
        &p_1436->g_378, // p_1436->g_517
        {0x7AL}, // p_1436->g_523
        {0x6DL}, // p_1436->g_562
        18446744073709551615UL, // p_1436->g_597
        {0x2BFFL}, // p_1436->g_634
        {0}, // p_1436->g_699
        {0xB8L}, // p_1436->g_718
        {0UL}, // p_1436->g_744
        0x5CL, // p_1436->g_794
        &p_1436->g_438, // p_1436->g_801
        (-1L), // p_1436->g_802
        &p_1436->g_438, // p_1436->g_815
        {{0xC7L},{0xC7L},{0xC7L},{0xC7L},{0xC7L},{0xC7L},{0xC7L},{0xC7L}}, // p_1436->g_831
        {{{&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2]},{&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2]},{&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2]}},{{&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2]},{&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2]},{&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2],&p_1436->g_272[2]}}}, // p_1436->g_834
        &p_1436->g_834[0][2][5], // p_1436->g_833
        0x46L, // p_1436->g_926
        &p_1436->g_234, // p_1436->g_944
        &p_1436->g_944, // p_1436->g_943
        &p_1436->g_376, // p_1436->g_992
        {&p_1436->g_992,&p_1436->g_992,&p_1436->g_992,&p_1436->g_992}, // p_1436->g_991
        &p_1436->g_991[2], // p_1436->g_990
        {{{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0}},{{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0}},{{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0}},{{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0}},{{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0}},{{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0}},{{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0}},{{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0},{(void*)0,&p_1436->g_517,(void*)0}}}, // p_1436->g_993
        &p_1436->g_438, // p_1436->g_1042
        0L, // p_1436->g_1084
        0x3C81L, // p_1436->g_1089
        &p_1436->g_1089, // p_1436->g_1088
        {{{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088}},{{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088}},{{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088}},{{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088},{(void*)0,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088,&p_1436->g_1088}}}, // p_1436->g_1087
        1UL, // p_1436->g_1093
        {{{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0}},{{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0}},{{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0}},{{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0}},{{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0}},{{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0}},{{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0},{&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,&p_1436->g_16,(void*)0}}}, // p_1436->g_1119
        &p_1436->g_80[3], // p_1436->g_1121
        0xC5L, // p_1436->g_1194
        {0x28L}, // p_1436->g_1244
        &p_1436->g_80[3], // p_1436->g_1273
        {0}, // p_1436->g_1342
        0x26D60BDCL, // p_1436->g_1354
        &p_1436->g_16, // p_1436->g_1396
        &p_1436->g_438, // p_1436->g_1397
        0x59DC968A80C519F3L, // p_1436->g_1404
        &p_1436->g_224, // p_1436->g_1409
        0x6428F6E8L, // p_1436->g_1432
    };
    c_1437 = c_1438;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1436);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1436->g_2, "p_1436->g_2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1436->g_14[i][j][k], "p_1436->g_14[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1436->g_29[i][j][k].f0, "p_1436->g_29[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1436->g_66[i][j].f0, "p_1436->g_66[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1436->g_68, "p_1436->g_68", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1436->g_80[i], "p_1436->g_80[i]", print_hash_value);

    }
    transparent_crc(p_1436->g_106, "p_1436->g_106", print_hash_value);
    transparent_crc(p_1436->g_108, "p_1436->g_108", print_hash_value);
    transparent_crc(p_1436->g_110, "p_1436->g_110", print_hash_value);
    transparent_crc(p_1436->g_112, "p_1436->g_112", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1436->g_138[i], "p_1436->g_138[i]", print_hash_value);

    }
    transparent_crc(p_1436->g_195.f0, "p_1436->g_195.f0", print_hash_value);
    transparent_crc(p_1436->g_216, "p_1436->g_216", print_hash_value);
    transparent_crc(p_1436->g_217, "p_1436->g_217", print_hash_value);
    transparent_crc(p_1436->g_224, "p_1436->g_224", print_hash_value);
    transparent_crc(p_1436->g_234, "p_1436->g_234", print_hash_value);
    transparent_crc(p_1436->g_285, "p_1436->g_285", print_hash_value);
    transparent_crc(p_1436->g_290, "p_1436->g_290", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1436->g_292[i], "p_1436->g_292[i]", print_hash_value);

    }
    transparent_crc(p_1436->g_337, "p_1436->g_337", print_hash_value);
    transparent_crc(p_1436->g_366.f0, "p_1436->g_366.f0", print_hash_value);
    transparent_crc(p_1436->g_369, "p_1436->g_369", print_hash_value);
    transparent_crc(p_1436->g_376, "p_1436->g_376", print_hash_value);
    transparent_crc(p_1436->g_378.f0, "p_1436->g_378.f0", print_hash_value);
    transparent_crc(p_1436->g_482, "p_1436->g_482", print_hash_value);
    transparent_crc(p_1436->g_495, "p_1436->g_495", print_hash_value);
    transparent_crc(p_1436->g_523.f0, "p_1436->g_523.f0", print_hash_value);
    transparent_crc(p_1436->g_562.f0, "p_1436->g_562.f0", print_hash_value);
    transparent_crc(p_1436->g_597, "p_1436->g_597", print_hash_value);
    transparent_crc(p_1436->g_634.f0, "p_1436->g_634.f0", print_hash_value);
    transparent_crc(p_1436->g_718.f0, "p_1436->g_718.f0", print_hash_value);
    transparent_crc(p_1436->g_744.f0, "p_1436->g_744.f0", print_hash_value);
    transparent_crc(p_1436->g_794, "p_1436->g_794", print_hash_value);
    transparent_crc(p_1436->g_802, "p_1436->g_802", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1436->g_831[i].f0, "p_1436->g_831[i].f0", print_hash_value);

    }
    transparent_crc(p_1436->g_926, "p_1436->g_926", print_hash_value);
    transparent_crc(p_1436->g_1084, "p_1436->g_1084", print_hash_value);
    transparent_crc(p_1436->g_1089, "p_1436->g_1089", print_hash_value);
    transparent_crc(p_1436->g_1093, "p_1436->g_1093", print_hash_value);
    transparent_crc(p_1436->g_1194, "p_1436->g_1194", print_hash_value);
    transparent_crc(p_1436->g_1244.f0, "p_1436->g_1244.f0", print_hash_value);
    transparent_crc(p_1436->g_1354, "p_1436->g_1354", print_hash_value);
    transparent_crc(p_1436->g_1404, "p_1436->g_1404", print_hash_value);
    transparent_crc(p_1436->g_1432, "p_1436->g_1432", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
