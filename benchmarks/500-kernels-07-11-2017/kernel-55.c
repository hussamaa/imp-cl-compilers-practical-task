// -g 9,90,6 -l 3,10,3
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


// Seed: 3954440009

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   int16_t  f1;
   uint32_t  f2;
   volatile int64_t  f3;
};

union U1 {
   volatile uint32_t  f0;
   int8_t  f1;
   int16_t  f2;
   int32_t  f3;
};

union U2 {
   volatile uint32_t  f0;
   volatile uint64_t  f1;
};

union U3 {
   uint16_t  f0;
   volatile uint32_t  f1;
};

union U4 {
   int8_t * f0;
   volatile uint32_t  f1;
   int32_t  f2;
};

struct S5 {
    uint16_t g_9[3];
    uint32_t g_34;
    int8_t g_37;
    int8_t g_39;
    int8_t g_57;
    uint16_t g_80;
    volatile union U4 g_91;
    union U3 g_102;
    uint32_t g_104;
    int8_t *** volatile g_107;
    int8_t *g_110;
    int8_t **g_109;
    int8_t *** volatile g_108;
    int8_t **g_112[2][6][7];
    int32_t g_127;
    volatile uint16_t g_128;
    volatile uint32_t g_133;
    uint32_t g_136[5];
    uint64_t g_149;
    int32_t g_150;
    union U1 g_153;
    volatile union U3 g_154;
    union U0 g_157;
    int64_t g_162;
    volatile int32_t g_164;
    uint32_t g_166;
    union U1 g_171[2];
    union U2 g_178;
    union U3 g_190;
    uint8_t g_210[7][5];
    int32_t *g_257[3];
    int32_t * volatile g_265;
    union U0 *g_281;
    union U0 ** volatile g_280;
    volatile union U0 g_303[1];
    volatile union U2 *g_305;
    union U0 **g_343;
    volatile union U1 g_409;
    int32_t * volatile g_433;
    volatile union U0 g_448;
    uint32_t g_471[5];
    union U0 g_476[7][2];
    int8_t ***g_489;
    int64_t g_504;
    int64_t *g_509;
    union U2 g_512[7][5][1];
    volatile int32_t *g_521;
    volatile int32_t ** volatile g_520[9][2][6];
    int32_t **g_529[3];
    uint8_t g_530;
    union U4 g_533;
    union U4 *g_535;
    union U4 ** volatile g_534;
    int16_t g_545;
    uint8_t g_596;
    int32_t ** volatile g_597;
    uint32_t *g_603;
    uint32_t **g_602;
    uint32_t *** volatile g_601;
    int32_t g_605;
    int16_t g_676;
    uint16_t **g_685;
    uint16_t *** volatile g_684[4];
    uint16_t *** volatile g_686[10][4];
    uint8_t g_751;
    union U4 g_758;
    volatile int32_t * volatile g_762[1];
    volatile union U2 g_763;
    union U4 g_764;
    volatile union U2 g_767[9][3];
    int64_t *** volatile g_777;
    int8_t g_807;
    volatile union U0 g_821;
    volatile union U1 g_824;
    volatile union U2 g_841;
    union U2 g_867;
    union U2 g_868[2];
    union U2 g_871[5][1];
    union U1 g_875[6];
    uint16_t g_905;
    volatile union U2 g_915;
    union U2 g_980;
    union U3 ** volatile g_998[1];
    volatile union U4 * volatile ** volatile g_1042;
    volatile union U4 * volatile ** volatile * volatile g_1041;
    union U4 ***g_1053[9];
    union U4 ****g_1052[2][5][9];
    union U4 ** volatile g_1065;
    int16_t *g_1074[6][9][2];
    int32_t ** volatile g_1080;
    union U2 g_1086;
    volatile int8_t g_1101;
    uint16_t **g_1118;
    union U2 g_1122;
    union U2 g_1123[10];
};


/* --- FORWARD DECLARATIONS --- */
union U2  func_1(struct S5 * p_1124);
int8_t  func_16(uint16_t * p_17, int8_t  p_18, int16_t  p_19, struct S5 * p_1124);
uint32_t  func_22(uint64_t  p_23, int8_t * p_24, int8_t * p_25, int32_t  p_26, int32_t  p_27, struct S5 * p_1124);
int64_t  func_40(uint32_t  p_41, uint32_t  p_42, struct S5 * p_1124);
uint8_t  func_52(int8_t * p_53, int32_t  p_54, int8_t * p_55, struct S5 * p_1124);
int32_t  func_63(int8_t  p_64, int8_t * p_65, uint64_t  p_66, uint32_t  p_67, struct S5 * p_1124);
int8_t * func_68(int16_t  p_69, uint16_t * p_70, int8_t * p_71, int32_t  p_72, int32_t  p_73, struct S5 * p_1124);
int16_t  func_74(uint16_t * p_75, uint16_t * p_76, int32_t  p_77, int8_t  p_78, struct S5 * p_1124);
uint16_t * func_81(int32_t  p_82, int64_t  p_83, uint16_t * p_84, int32_t  p_85, struct S5 * p_1124);
int64_t  func_87(int32_t  p_88, int8_t * p_89, uint32_t  p_90, struct S5 * p_1124);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1124->g_34 p_1124->g_37 p_1124->g_190.f0 p_1124->g_57 p_1124->g_448.f0 p_1124->g_150 p_1124->g_476.f0 p_1124->g_602 p_1124->g_603 p_1124->g_166 p_1124->g_521 p_1124->g_596 p_1124->g_504 p_1124->g_153.f2 p_1124->g_178.f0 p_1124->g_127 p_1124->g_676 p_1124->g_80 p_1124->g_509 p_1124->g_153.f0 p_1124->g_136 p_1124->g_162 p_1124->g_343 p_1124->g_281 p_1124->g_157.f1 p_1124->g_605 p_1124->g_210 p_1124->g_153.f3 p_1124->g_758 p_1124->g_762 p_1124->g_763 p_1124->g_764 p_1124->g_767 p_1124->g_149 p_1124->g_102.f0 p_1124->g_763.f0 p_1124->g_545 p_1124->g_471 p_1124->g_39 p_1124->g_433 p_1124->g_821 p_1124->g_824 p_1124->g_841 p_1124->g_512.f0 p_1124->g_157.f0 p_1124->g_171.f0 p_1124->g_915 p_1124->g_875.f0 p_1124->g_905 p_1124->g_265 p_1124->g_530 p_1124->g_9 p_1124->g_824.f0 p_1124->g_871 p_1124->g_980 p_1124->g_157.f2 p_1124->g_1086 p_1124->g_871.f0 p_1124->g_1122 p_1124->g_1123
 * writes: p_1124->g_9 p_1124->g_37 p_1124->g_39 p_1124->g_190.f0 p_1124->g_102.f0 p_1124->g_210 p_1124->g_166 p_1124->g_448.f0 p_1124->g_596 p_1124->g_504 p_1124->g_153.f2 p_1124->g_685 p_1124->g_80 p_1124->g_104 p_1124->g_149 p_1124->g_162 p_1124->g_530 p_1124->g_57 p_1124->g_281 p_1124->g_157.f1 p_1124->g_605 p_1124->g_153.f3 p_1124->g_676 p_1124->g_751 p_1124->g_762 p_1124->g_150 p_1124->g_807 p_1124->g_127 p_1124->g_905 p_1124->g_545 p_1124->g_157.f2 p_1124->g_1118
 */
union U2  func_1(struct S5 * p_1124)
{ /* block id: 4 */
    uint16_t *l_8 = &p_1124->g_9[0];
    int32_t l_35 = 0x3187B35FL;
    int8_t *l_36 = &p_1124->g_37;
    int8_t *l_38 = &p_1124->g_39;
    uint64_t l_45 = 0x09E13C9534CE5FEFL;
    int32_t l_46 = 0x6C8400B8L;
    uint16_t *l_904[4] = {&p_1124->g_905,&p_1124->g_905,&p_1124->g_905,&p_1124->g_905};
    int32_t l_906[2][1];
    int32_t l_907 = 0L;
    uint8_t *l_914 = &p_1124->g_210[3][4];
    union U1 *l_917 = &p_1124->g_171[1];
    uint64_t l_920[1][9][7] = {{{0x40E55DE7D8498619L,1UL,0UL,0x1FD471B1C7D7E2B6L,1UL,0x33F6A48F483A7BB3L,0x0A0FCDCE0FEF0016L},{0x40E55DE7D8498619L,1UL,0UL,0x1FD471B1C7D7E2B6L,1UL,0x33F6A48F483A7BB3L,0x0A0FCDCE0FEF0016L},{0x40E55DE7D8498619L,1UL,0UL,0x1FD471B1C7D7E2B6L,1UL,0x33F6A48F483A7BB3L,0x0A0FCDCE0FEF0016L},{0x40E55DE7D8498619L,1UL,0UL,0x1FD471B1C7D7E2B6L,1UL,0x33F6A48F483A7BB3L,0x0A0FCDCE0FEF0016L},{0x40E55DE7D8498619L,1UL,0UL,0x1FD471B1C7D7E2B6L,1UL,0x33F6A48F483A7BB3L,0x0A0FCDCE0FEF0016L},{0x40E55DE7D8498619L,1UL,0UL,0x1FD471B1C7D7E2B6L,1UL,0x33F6A48F483A7BB3L,0x0A0FCDCE0FEF0016L},{0x40E55DE7D8498619L,1UL,0UL,0x1FD471B1C7D7E2B6L,1UL,0x33F6A48F483A7BB3L,0x0A0FCDCE0FEF0016L},{0x40E55DE7D8498619L,1UL,0UL,0x1FD471B1C7D7E2B6L,1UL,0x33F6A48F483A7BB3L,0x0A0FCDCE0FEF0016L},{0x40E55DE7D8498619L,1UL,0UL,0x1FD471B1C7D7E2B6L,1UL,0x33F6A48F483A7BB3L,0x0A0FCDCE0FEF0016L}}};
    int64_t l_979 = 0x59EDECEFDFE903C2L;
    union U4 *l_1064 = &p_1124->g_764;
    uint32_t l_1103 = 0x14451868L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_906[i][j] = 1L;
    }
    (*p_1124->g_521) = ((l_907 ^= (((l_906[0][0] &= (+(safe_add_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u((((safe_div_func_uint16_t_u_u(((*l_8) = 0x542AL), (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(func_16(((safe_mod_func_int16_t_s_s((func_22(((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((*l_36) &= (safe_sub_func_int64_t_s_s(p_1124->g_34, l_35))), ((*l_38) = l_35))), p_1124->g_34)) == (func_40((l_35 != p_1124->g_34), (safe_mul_func_int16_t_s_s((l_45 < l_46), l_46)), p_1124) < p_1124->g_127)), l_38, l_38, p_1124->g_150, l_45, p_1124) | 0x0028A940L), 0x27AEL)) , l_8), l_45, l_35, p_1124), l_35)) & l_45), p_1124->g_34)), 10)))) || l_46) && 65534UL), 0x2958EE48D57C32BFL)) , p_1124->g_149) != l_45), p_1124->g_476[6][0].f0)))) < l_46) >= 0L)) | l_45);
    (*p_1124->g_521) = (l_45 || (safe_add_func_uint64_t_u_u(((*p_1124->g_433) || ((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((*l_914) |= (+p_1124->g_596)) == ((*p_1124->g_509) , (p_1124->g_915 , ((safe_unary_minus_func_uint16_t_u(((void*)0 != l_917))) ^ ((((((safe_mul_func_uint16_t_u_u((l_906[1][0] = 5UL), (l_35 > 0x0430C9B425321D44L))) >= l_907) == l_920[0][3][5]) | l_920[0][3][5]) , l_906[0][0]) >= 0x11AB13D0L))))), p_1124->g_605)), l_45)) | 0x7C52FB27L)), (*p_1124->g_509))));
    if (l_35)
    { /* block id: 489 */
        int16_t l_921[10] = {(-1L),0x5600L,0x78A4L,0x5600L,(-1L),(-1L),0x5600L,0x78A4L,0x5600L,(-1L)};
        uint64_t *l_924 = &l_920[0][3][5];
        int32_t l_936 = 0x5D4A50FBL;
        int32_t l_942 = (-8L);
        int32_t l_943 = 0x37C48746L;
        int32_t l_948 = 9L;
        int32_t l_949 = 0x234E799FL;
        int32_t l_950 = 0x136F8660L;
        int32_t l_951[1][8][7] = {{{7L,(-1L),7L,7L,(-1L),7L,7L},{7L,(-1L),7L,7L,(-1L),7L,7L},{7L,(-1L),7L,7L,(-1L),7L,7L},{7L,(-1L),7L,7L,(-1L),7L,7L},{7L,(-1L),7L,7L,(-1L),7L,7L},{7L,(-1L),7L,7L,(-1L),7L,7L},{7L,(-1L),7L,7L,(-1L),7L,7L},{7L,(-1L),7L,7L,(-1L),7L,7L}}};
        uint32_t l_954 = 0x75498DADL;
        int8_t l_1006 = 3L;
        int32_t *l_1059 = &l_943;
        uint32_t l_1061 = 0x4C88F1F9L;
        int i, j, k;
        if ((l_921[7] | ((0xE9E1L || (safe_sub_func_int16_t_s_s(0L, 2L))) > ((0x7976L <= 0x359CL) ^ ((--(*l_924)) <= (+((*p_1124->g_509) = l_906[1][0])))))))
        { /* block id: 492 */
            uint32_t l_931 = 4294967286UL;
            int16_t *l_940[5][1][10] = {{{&l_921[7],&l_921[7],(void*)0,(void*)0,&p_1124->g_676,(void*)0,(void*)0,&l_921[7],&l_921[7],(void*)0}},{{&l_921[7],&l_921[7],(void*)0,(void*)0,&p_1124->g_676,(void*)0,(void*)0,&l_921[7],&l_921[7],(void*)0}},{{&l_921[7],&l_921[7],(void*)0,(void*)0,&p_1124->g_676,(void*)0,(void*)0,&l_921[7],&l_921[7],(void*)0}},{{&l_921[7],&l_921[7],(void*)0,(void*)0,&p_1124->g_676,(void*)0,(void*)0,&l_921[7],&l_921[7],(void*)0}},{{&l_921[7],&l_921[7],(void*)0,(void*)0,&p_1124->g_676,(void*)0,(void*)0,&l_921[7],&l_921[7],(void*)0}}};
            int32_t *l_941 = &p_1124->g_127;
            int32_t *l_944 = &p_1124->g_150;
            int32_t *l_945 = (void*)0;
            int32_t *l_946 = &l_35;
            int32_t *l_947[8][9][2] = {{{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35}},{{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35}},{{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35}},{{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35}},{{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35}},{{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35}},{{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35}},{{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35},{(void*)0,&l_35}}};
            int32_t l_952 = (-8L);
            int32_t l_953 = 0x07DC7913L;
            int i, j, k;
            (*p_1124->g_521) = ((*l_941) = ((*p_1124->g_265) = (safe_mul_func_uint16_t_u_u(((((p_1124->g_153.f2 = ((!(((safe_add_func_uint16_t_u_u(l_931, (p_1124->g_905 |= (((safe_div_func_uint16_t_u_u(((5L ^ (-7L)) , (((((l_921[7] <= (((safe_rshift_func_int8_t_s_u(l_936, ((*l_914)--))) | (safe_unary_minus_func_int16_t_s(p_1124->g_875[1].f0))) , ((*l_8) = (p_1124->g_37 >= l_921[7])))) >= ((*p_1124->g_603) = (**p_1124->g_602))) >= p_1124->g_37) > 0x9610L) , 0xE328L)), 0x3090L)) || 0x3D8A11C9L) , l_936)))) , 18446744073709551615UL) & l_45)) ^ 65534UL)) <= l_931) || l_35) , l_921[7]), l_931))));
            ++l_954;
        }
        else
        { /* block id: 502 */
            uint32_t l_963[9][4][7] = {{{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL}},{{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL}},{{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL}},{{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL}},{{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL}},{{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL}},{{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL}},{{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL}},{{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL},{4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL,0x0F48E7EDL,4294967287UL,4294967287UL}}};
            int16_t *l_976 = &p_1124->g_875[1].f2;
            int16_t *l_977 = &p_1124->g_875[1].f2;
            int16_t *l_978 = &p_1124->g_545;
            int i, j, k;
            (*p_1124->g_521) = (safe_sub_func_uint64_t_u_u(3UL, l_951[0][0][6]));
            (*p_1124->g_521) = ((safe_mod_func_uint8_t_u_u(((l_951[0][0][6] = ((((*l_978) |= (safe_add_func_int16_t_s_s(((9UL == (((l_963[6][2][5] || ((*l_914) |= ((0x73L | (safe_add_func_uint64_t_u_u((l_921[7] & (p_1124->g_530 <= p_1124->g_127)), ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_8) ^= l_920[0][3][5]), (((safe_sub_func_uint64_t_u_u(((((((void*)0 != l_924) && 0L) , (*p_1124->g_509)) <= 0x400C05881DBFBF23L) >= l_949), l_963[6][2][5])) ^ 0UL) != 1L))), l_963[2][1][2])), l_951[0][0][6])) , p_1124->g_824.f0)))) | l_920[0][5][2]))) || l_963[5][0][1]) != 0x0EL)) != l_46), p_1124->g_149))) <= 0x12BEL) < l_963[6][2][5])) > l_979), p_1124->g_57)) , 0x47349263L);
            if ((0x140038E100B252D8L <= (65535UL != 65529UL)))
            { /* block id: 509 */
                return p_1124->g_871[3][0];
            }
            else
            { /* block id: 511 */
                return p_1124->g_980;
            }
        }
        for (p_1124->g_157.f2 = 0; (p_1124->g_157.f2 != 46); ++p_1124->g_157.f2)
        { /* block id: 517 */
            uint32_t l_987 = 4294967295UL;
            uint32_t l_996 = 1UL;
            uint16_t l_997 = 0xCF22L;
            int8_t **l_1000 = &p_1124->g_110;
            int32_t l_1003[1];
            int32_t l_1033 = 0x574C788FL;
            int i;
            for (i = 0; i < 1; i++)
                l_1003[i] = 1L;
            for (l_35 = 0; (l_35 >= 29); l_35 = safe_add_func_int16_t_s_s(l_35, 6))
            { /* block id: 520 */
                int32_t l_985[9][3] = {{0x109DA60AL,0x394E1E5CL,1L},{0x109DA60AL,0x394E1E5CL,1L},{0x109DA60AL,0x394E1E5CL,1L},{0x109DA60AL,0x394E1E5CL,1L},{0x109DA60AL,0x394E1E5CL,1L},{0x109DA60AL,0x394E1E5CL,1L},{0x109DA60AL,0x394E1E5CL,1L},{0x109DA60AL,0x394E1E5CL,1L},{0x109DA60AL,0x394E1E5CL,1L}};
                int32_t *l_986[8][3] = {{&p_1124->g_150,&l_951[0][0][6],&l_985[2][0]},{&p_1124->g_150,&l_951[0][0][6],&l_985[2][0]},{&p_1124->g_150,&l_951[0][0][6],&l_985[2][0]},{&p_1124->g_150,&l_951[0][0][6],&l_985[2][0]},{&p_1124->g_150,&l_951[0][0][6],&l_985[2][0]},{&p_1124->g_150,&l_951[0][0][6],&l_985[2][0]},{&p_1124->g_150,&l_951[0][0][6],&l_985[2][0]},{&p_1124->g_150,&l_951[0][0][6],&l_985[2][0]}};
                union U3 *l_999 = (void*)0;
                int i, j;
                l_949 |= l_985[2][0];
                l_987--;
                (*p_1124->g_521) = (((((**p_1124->g_602) == (l_979 & (((0UL != 0L) >= 0x68L) , (((*p_1124->g_509) ^= (((**p_1124->g_602) == ((0UL >= ((safe_mul_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(0UL, 0x65AE01F17BCEED06L)) && l_996), p_1124->g_149)) >= l_997)) != p_1124->g_875[1].f0)) , 0L)) >= p_1124->g_471[1])))) && l_987) , l_949) , 0x6A628E33L);
                l_999 = &p_1124->g_190;
            }
        }
    }
    else
    { /* block id: 589 */
        int16_t l_1090 = (-1L);
        int32_t l_1092 = 1L;
        int32_t l_1098[7][7][2] = {{{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)}},{{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)}},{{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)}},{{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)}},{{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)}},{{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)}},{{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)},{0x1A0EF578L,(-4L)}}};
        int8_t l_1102 = 2L;
        int i, j, k;
        for (l_979 = 28; (l_979 < (-13)); l_979 = safe_sub_func_uint8_t_u_u(l_979, 3))
        { /* block id: 592 */
            int32_t l_1099 = 8L;
            int32_t l_1100 = 0x618803FBL;
            uint32_t l_1119 = 0xAF6A862AL;
            uint8_t l_1120 = 5UL;
            int64_t l_1121[5][6] = {{0x480C2837E3C3BAF2L,0L,1L,0x2F6C8484658ED2E7L,1L,0L},{0x480C2837E3C3BAF2L,0L,1L,0x2F6C8484658ED2E7L,1L,0L},{0x480C2837E3C3BAF2L,0L,1L,0x2F6C8484658ED2E7L,1L,0L},{0x480C2837E3C3BAF2L,0L,1L,0x2F6C8484658ED2E7L,1L,0L},{0x480C2837E3C3BAF2L,0L,1L,0x2F6C8484658ED2E7L,1L,0L}};
            int i, j;
            for (p_1124->g_80 = 3; (p_1124->g_80 <= 8); p_1124->g_80 += 1)
            { /* block id: 595 */
                int64_t l_1089 = 0L;
                int32_t *l_1091 = &p_1124->g_476[6][0].f0;
                int32_t *l_1093 = &l_35;
                int32_t *l_1094 = &l_1092;
                int32_t *l_1095 = &p_1124->g_127;
                int32_t *l_1096 = &l_906[1][0];
                int32_t *l_1097[2];
                uint16_t ***l_1116 = &p_1124->g_685;
                uint16_t ***l_1117[8][4] = {{&p_1124->g_685,&p_1124->g_685,&p_1124->g_685,&p_1124->g_685},{&p_1124->g_685,&p_1124->g_685,&p_1124->g_685,&p_1124->g_685},{&p_1124->g_685,&p_1124->g_685,&p_1124->g_685,&p_1124->g_685},{&p_1124->g_685,&p_1124->g_685,&p_1124->g_685,&p_1124->g_685},{&p_1124->g_685,&p_1124->g_685,&p_1124->g_685,&p_1124->g_685},{&p_1124->g_685,&p_1124->g_685,&p_1124->g_685,&p_1124->g_685},{&p_1124->g_685,&p_1124->g_685,&p_1124->g_685,&p_1124->g_685},{&p_1124->g_685,&p_1124->g_685,&p_1124->g_685,&p_1124->g_685}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1097[i] = &l_35;
                (*p_1124->g_521) = (p_1124->g_1086 , (safe_rshift_func_int16_t_s_s((!l_1089), 1)));
                (*p_1124->g_521) = l_1090;
                --l_1103;
                (*l_1093) = ((safe_mod_func_uint8_t_u_u((((((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(l_1092, (((*l_36) ^= (p_1124->g_871[3][0].f0 != (((*p_1124->g_602) == (*p_1124->g_602)) > (*p_1124->g_509)))) | ((((((safe_div_func_uint64_t_u_u((p_1124->g_545 == ((p_1124->g_1118 = ((l_1099 | (*p_1124->g_509)) , (void*)0)) == &l_8)), 18446744073709551609UL)) , (void*)0) == (void*)0) > (**p_1124->g_602)) | l_1099) > l_1098[2][0][0])))), l_1100)) != l_1099), 1L)) != 0x7C87491ACB0B94E9L) >= (*p_1124->g_603)) || l_1119) , l_1102), 3L)) > 0x1FL);
            }
            if (l_1120)
                continue;
            if (l_979)
                break;
            (*p_1124->g_521) &= (l_1121[1][4] | l_1098[3][5][1]);
        }
        l_35 &= l_1090;
        return p_1124->g_1122;
    }
    return p_1124->g_1123[6];
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_153.f3 p_1124->g_210 p_1124->g_596 p_1124->g_190.f0 p_1124->g_821 p_1124->g_824 p_1124->g_162 p_1124->g_841 p_1124->g_602 p_1124->g_603 p_1124->g_166 p_1124->g_127 p_1124->g_512.f0 p_1124->g_157.f0 p_1124->g_150 p_1124->g_521 p_1124->g_178.f0 p_1124->g_39 p_1124->g_171.f0 p_1124->g_605
 * writes: p_1124->g_153.f3 p_1124->g_596 p_1124->g_157.f1 p_1124->g_149 p_1124->g_807 p_1124->g_751 p_1124->g_530 p_1124->g_210 p_1124->g_448.f0 p_1124->g_127 p_1124->g_39
 */
int8_t  func_16(uint16_t * p_17, int8_t  p_18, int16_t  p_19, struct S5 * p_1124)
{ /* block id: 452 */
    uint16_t l_812[8];
    int32_t l_815 = 0x35BEB722L;
    int32_t l_816 = 0x24B1FEFDL;
    int32_t *l_838 = &p_1124->g_127;
    uint16_t ***l_849 = &p_1124->g_685;
    uint16_t *l_856[10];
    int32_t l_857[5][7] = {{(-1L),1L,0x190D265AL,0L,1L,0L,0x190D265AL},{(-1L),1L,0x190D265AL,0L,1L,0L,0x190D265AL},{(-1L),1L,0x190D265AL,0L,1L,0L,0x190D265AL},{(-1L),1L,0x190D265AL,0L,1L,0L,0x190D265AL},{(-1L),1L,0x190D265AL,0L,1L,0L,0x190D265AL}};
    int32_t l_858 = 0L;
    uint8_t l_859 = 2UL;
    union U2 *l_866[8] = {&p_1124->g_867,&p_1124->g_867,&p_1124->g_867,&p_1124->g_867,&p_1124->g_867,&p_1124->g_867,&p_1124->g_867,&p_1124->g_867};
    union U2 **l_869 = &l_866[5];
    union U2 *l_870 = &p_1124->g_871[3][0];
    union U1 *l_874 = &p_1124->g_875[1];
    int8_t *l_891 = &p_1124->g_171[1].f1;
    int8_t *l_892 = &p_1124->g_39;
    union U4 **l_900 = &p_1124->g_535;
    union U4 ***l_899 = &l_900;
    uint8_t *l_901 = &p_1124->g_210[0][1];
    int16_t l_902 = 0L;
    int8_t l_903[7][7] = {{9L,0x51L,0L,0x51L,9L,9L,0x51L},{9L,0x51L,0L,0x51L,9L,9L,0x51L},{9L,0x51L,0L,0x51L,9L,9L,0x51L},{9L,0x51L,0L,0x51L,9L,9L,0x51L},{9L,0x51L,0L,0x51L,9L,9L,0x51L},{9L,0x51L,0L,0x51L,9L,9L,0x51L},{9L,0x51L,0L,0x51L,9L,9L,0x51L}};
    int i, j;
    for (i = 0; i < 8; i++)
        l_812[i] = 65535UL;
    for (i = 0; i < 10; i++)
        l_856[i] = &p_1124->g_80;
    for (p_1124->g_153.f3 = 1; (p_1124->g_153.f3 >= 0); p_1124->g_153.f3 -= 1)
    { /* block id: 455 */
        uint8_t *l_811[5][2][10] = {{{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]},{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]}},{{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]},{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]}},{{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]},{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]}},{{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]},{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]}},{{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]},{&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],&p_1124->g_210[0][1],(void*)0,&p_1124->g_596,&p_1124->g_596,&p_1124->g_530,&p_1124->g_596,&p_1124->g_210[2][1]}}};
        int32_t l_833 = 0x2DE56A7BL;
        int16_t *l_834 = &p_1124->g_157.f1;
        uint64_t *l_835[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t *l_836 = &p_1124->g_807;
        union U2 *l_842 = &p_1124->g_512[5][4][0];
        int32_t l_850 = (-10L);
        int32_t l_851 = 4L;
        int i, j, k;
        if (((l_812[5] = p_1124->g_210[5][3]) ^ (p_1124->g_751 = ((l_816 = (((((safe_sub_func_uint16_t_u_u(((8L > (++p_1124->g_596)) & (8L | p_1124->g_190.f0)), (safe_rshift_func_int8_t_s_s(((*l_836) = (+((!(p_1124->g_821 , ((safe_add_func_uint32_t_u_u((0xF4L != ((p_1124->g_824 , (safe_sub_func_uint64_t_u_u((p_1124->g_149 = (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_833, ((*l_834) = (((p_18 = l_833) || p_18) | p_1124->g_162)))), l_816)), p_19))), p_19))) || (-4L))), p_19)) , 0x2786E3D7120DF0EDL))) , p_18))), l_815)))) >= p_19) == 0x41EF37366A2129A8L) , p_19) & 253UL)) <= l_815))))
        { /* block id: 464 */
            return p_18;
        }
        else
        { /* block id: 466 */
            int32_t **l_837[3];
            int i;
            for (i = 0; i < 3; i++)
                l_837[i] = (void*)0;
            l_838 = (void*)0;
        }
        l_851 &= (p_18 ^ (((safe_mul_func_uint8_t_u_u((((((p_1124->g_530 = (p_1124->g_841 , 255UL)) , (!(((l_842 == l_842) > (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_833 = (safe_add_func_uint8_t_u_u((p_1124->g_210[0][1] = ((void*)0 != l_849)), 0x70L))), p_18)), l_850))) > (**p_1124->g_602)))) > p_18) | l_850) ^ 0x42F8EFB9A59C7FD6L), p_19)) >= 65535UL) , p_18));
        return l_851;
    }
    (*p_1124->g_521) = (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((l_859++), 5)) == (((*l_838) == p_1124->g_512[5][4][0].f0) <= (safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((*l_869) = l_866[1]) != l_870), ((safe_div_func_int16_t_s_s((l_874 == ((*l_838) , (p_1124->g_157.f0 , l_874))), ((safe_mul_func_uint8_t_u_u((*l_838), p_18)) & (*l_838)))) < p_1124->g_150))) & (*l_838)), p_18)))), 0x65655D3CL));
    (*l_838) = p_19;
    (*l_838) = (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u(((*l_838) , (6L == (safe_mul_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_901) = ((p_1124->g_178.f0 == (safe_lshift_func_int8_t_s_u(((*l_892) |= ((*l_838) | (*l_838))), (safe_mul_func_int16_t_s_s((*l_838), (((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(0xD0B0L, ((void*)0 != l_899))), 10)) > (*l_838)) != p_19) , 1UL) <= (*l_838))))))) , (*l_838))), (*l_838))), (*l_838))), l_902)) && p_1124->g_171[1].f0) == p_18), p_1124->g_605)))), l_903[4][4]))));
    return (*l_838);
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_136 p_1124->g_545 p_1124->g_471 p_1124->g_39 p_1124->g_433 p_1124->g_602 p_1124->g_603 p_1124->g_166
 * writes: p_1124->g_102.f0 p_1124->g_150
 */
uint32_t  func_22(uint64_t  p_23, int8_t * p_24, int8_t * p_25, int32_t  p_26, int32_t  p_27, struct S5 * p_1124)
{ /* block id: 444 */
    int32_t *l_783[3][7];
    uint32_t l_784[10] = {2UL,0xDDA489E3L,0x739B2588L,0xDDA489E3L,2UL,2UL,0xDDA489E3L,0x739B2588L,0xDDA489E3L,2UL};
    uint64_t l_787 = 18446744073709551608UL;
    union U4 ****l_800 = (void*)0;
    union U4 ****l_801 = (void*)0;
    union U4 ***l_803 = (void*)0;
    union U4 ****l_802 = &l_803;
    uint16_t *l_804 = &p_1124->g_102.f0;
    uint16_t *l_805[3][4][10] = {{{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80},{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80},{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80},{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80}},{{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80},{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80},{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80},{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80}},{{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80},{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80},{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80},{&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_80,&p_1124->g_190.f0,&p_1124->g_190.f0,&p_1124->g_80}}};
    int16_t l_806[9][9] = {{1L,0L,0L,0x080FL,0L,0L,1L,(-6L),0x0CEDL},{1L,0L,0L,0x080FL,0L,0L,1L,(-6L),0x0CEDL},{1L,0L,0L,0x080FL,0L,0L,1L,(-6L),0x0CEDL},{1L,0L,0L,0x080FL,0L,0L,1L,(-6L),0x0CEDL},{1L,0L,0L,0x080FL,0L,0L,1L,(-6L),0x0CEDL},{1L,0L,0L,0x080FL,0L,0L,1L,(-6L),0x0CEDL},{1L,0L,0L,0x080FL,0L,0L,1L,(-6L),0x0CEDL},{1L,0L,0L,0x080FL,0L,0L,1L,(-6L),0x0CEDL},{1L,0L,0L,0x080FL,0L,0L,1L,(-6L),0x0CEDL}};
    uint8_t l_808 = 255UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_783[i][j] = &p_1124->g_127;
    }
    l_784[7]++;
    (*p_1124->g_433) = (p_26 ^ ((l_787 && ((safe_sub_func_uint32_t_u_u((p_23 || (safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(p_27, p_1124->g_136[4])), ((safe_div_func_uint8_t_u_u(p_1124->g_545, ((p_1124->g_471[3] ^ ((safe_add_func_uint16_t_u_u(0x3425L, (+(safe_div_func_uint64_t_u_u((((l_806[6][3] = ((*l_804) = (((*l_802) = (void*)0) != &p_1124->g_534))) < 1UL) && p_27), 5UL))))) , p_23)) || p_23))) <= (*p_25))))), p_27)) > 251UL)) >= p_27));
    l_808++;
    return (**p_1124->g_602);
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_34 p_1124->g_190.f0 p_1124->g_57 p_1124->g_448.f0 p_1124->g_150 p_1124->g_476.f0 p_1124->g_602 p_1124->g_603 p_1124->g_166 p_1124->g_521 p_1124->g_596 p_1124->g_504 p_1124->g_153.f2 p_1124->g_178.f0 p_1124->g_127 p_1124->g_676 p_1124->g_80 p_1124->g_509 p_1124->g_153.f0 p_1124->g_136 p_1124->g_162 p_1124->g_343 p_1124->g_281 p_1124->g_157.f1 p_1124->g_605 p_1124->g_210 p_1124->g_153.f3 p_1124->g_758 p_1124->g_762 p_1124->g_763 p_1124->g_764 p_1124->g_767 p_1124->g_149 p_1124->g_102.f0 p_1124->g_763.f0
 * writes: p_1124->g_190.f0 p_1124->g_102.f0 p_1124->g_210 p_1124->g_166 p_1124->g_448.f0 p_1124->g_596 p_1124->g_504 p_1124->g_153.f2 p_1124->g_685 p_1124->g_80 p_1124->g_104 p_1124->g_149 p_1124->g_162 p_1124->g_530 p_1124->g_57 p_1124->g_281 p_1124->g_157.f1 p_1124->g_605 p_1124->g_153.f3 p_1124->g_676 p_1124->g_751 p_1124->g_762
 */
int64_t  func_40(uint32_t  p_41, uint32_t  p_42, struct S5 * p_1124)
{ /* block id: 8 */
    uint32_t l_47 = 8UL;
    int8_t *l_56 = &p_1124->g_57;
    l_47 &= 3L;
    for (p_42 = 25; (p_42 <= 49); p_42 = safe_add_func_int8_t_s_s(p_42, 5))
    { /* block id: 12 */
        return p_1124->g_34;
    }
    (*p_1124->g_521) = (safe_div_func_uint8_t_u_u(func_52(l_56, p_1124->g_34, l_56, p_1124), 6UL));
    return (*p_1124->g_509);
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_190.f0 p_1124->g_57 p_1124->g_448.f0 p_1124->g_150 p_1124->g_476.f0 p_1124->g_602 p_1124->g_603 p_1124->g_166 p_1124->g_34 p_1124->g_521 p_1124->g_596 p_1124->g_504 p_1124->g_153.f2 p_1124->g_178.f0 p_1124->g_127 p_1124->g_676 p_1124->g_80 p_1124->g_509 p_1124->g_153.f0 p_1124->g_136 p_1124->g_162 p_1124->g_343 p_1124->g_281 p_1124->g_157.f1 p_1124->g_605 p_1124->g_210 p_1124->g_153.f3 p_1124->g_758 p_1124->g_762 p_1124->g_763 p_1124->g_764 p_1124->g_767 p_1124->g_149 p_1124->g_102.f0 p_1124->g_763.f0
 * writes: p_1124->g_190.f0 p_1124->g_102.f0 p_1124->g_210 p_1124->g_166 p_1124->g_448.f0 p_1124->g_596 p_1124->g_504 p_1124->g_153.f2 p_1124->g_685 p_1124->g_80 p_1124->g_104 p_1124->g_149 p_1124->g_162 p_1124->g_530 p_1124->g_57 p_1124->g_281 p_1124->g_157.f1 p_1124->g_605 p_1124->g_153.f3 p_1124->g_676 p_1124->g_751 p_1124->g_762
 */
uint8_t  func_52(int8_t * p_53, int32_t  p_54, int8_t * p_55, struct S5 * p_1124)
{ /* block id: 15 */
    int64_t l_58 = 0x0BA832A49E864ADBL;
    int8_t *l_105 = &p_1124->g_57;
    uint16_t *l_287[9] = {&p_1124->g_80,&p_1124->g_80,&p_1124->g_80,&p_1124->g_80,&p_1124->g_80,&p_1124->g_80,&p_1124->g_80,&p_1124->g_80,&p_1124->g_80};
    int32_t l_606[10] = {8L,0x74B45BCEL,8L,8L,0x74B45BCEL,8L,8L,0x74B45BCEL,8L,8L};
    uint32_t l_634 = 0x4197F9C0L;
    uint64_t *l_673 = &p_1124->g_149;
    union U1 *l_690 = &p_1124->g_153;
    int i;
    if (l_58)
    { /* block id: 16 */
        int32_t l_621[3];
        uint64_t l_646 = 1UL;
        uint16_t ***l_682 = (void*)0;
        uint16_t **l_683 = &l_287[1];
        uint16_t ***l_687 = &p_1124->g_685;
        int i;
        for (i = 0; i < 3; i++)
            l_621[i] = 9L;
        for (l_58 = 0; (l_58 == 2); l_58++)
        { /* block id: 19 */
            uint8_t l_94 = 0x1BL;
            int32_t l_619 = 0L;
            int32_t l_620 = 0x35845ED9L;
            int64_t l_633 = 1L;
            int32_t *l_635 = (void*)0;
            int32_t l_641 = 0x03305F7BL;
            int32_t l_642 = 0x3BB937AFL;
            int32_t l_643 = 0x689B1A62L;
            int32_t l_644 = 0x6042219BL;
            int32_t l_645[3][4][2];
            int16_t l_657 = 1L;
            int64_t l_663[7][9][3] = {{{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L}},{{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L}},{{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L}},{{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L}},{{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L}},{{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L}},{{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L},{1L,0x6EDD5218F4AC81D7L,0x22F7246167EFB5B2L}}};
            union U2 *l_680 = &p_1124->g_178;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_645[i][j][k] = 0x173CF053L;
                }
            }
            for (p_54 = (-20); (p_54 < (-17)); p_54 = safe_add_func_uint32_t_u_u(p_54, 5))
            { /* block id: 22 */
                uint16_t *l_79 = &p_1124->g_80;
                int64_t l_86 = 0x59140931BC1F9C85L;
                uint32_t *l_103 = &p_1124->g_104;
                int8_t l_275[10][7][3] = {{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}},{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}},{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}},{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}},{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}},{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}},{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}},{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}},{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}},{{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L},{0x06L,(-7L),5L}}};
                int32_t *l_604[4][9] = {{&p_1124->g_605,&p_1124->g_605,&p_1124->g_476[6][0].f0,(void*)0,&p_1124->g_605,(void*)0,&p_1124->g_476[6][0].f0,&p_1124->g_605,&p_1124->g_605},{&p_1124->g_605,&p_1124->g_605,&p_1124->g_476[6][0].f0,(void*)0,&p_1124->g_605,(void*)0,&p_1124->g_476[6][0].f0,&p_1124->g_605,&p_1124->g_605},{&p_1124->g_605,&p_1124->g_605,&p_1124->g_476[6][0].f0,(void*)0,&p_1124->g_605,(void*)0,&p_1124->g_476[6][0].f0,&p_1124->g_605,&p_1124->g_605},{&p_1124->g_605,&p_1124->g_605,&p_1124->g_476[6][0].f0,(void*)0,&p_1124->g_605,(void*)0,&p_1124->g_476[6][0].f0,&p_1124->g_605,&p_1124->g_605}};
                int i, j, k;
                if (p_54)
                    break;
            }
            (*p_1124->g_521) = ((((safe_add_func_int8_t_s_s((((**p_1124->g_602) = ((l_621[1] = ((p_1124->g_210[0][1] = (safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((p_1124->g_102.f0 = (safe_lshift_func_uint16_t_u_s((--p_1124->g_190.f0), ((safe_mod_func_uint32_t_u_u(((*p_55) >= (l_606[1] = ((p_1124->g_448.f0 > (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(p_54, 1)) , ((safe_unary_minus_func_int64_t_s(((l_620 = l_633) < (p_54 > ((l_633 | p_1124->g_150) || (l_633 ^ l_633)))))) <= l_621[2])), (*p_55))), l_621[1]))) | p_1124->g_476[6][0].f0))), 0x656C47F5L)) == p_54)))), l_634)), l_634))) & l_58)) && (**p_1124->g_602))) , (-1L)), 0xD9L)) >= p_1124->g_34) >= p_54) < 0x4CDCL);
            for (p_1124->g_596 = (-22); (p_1124->g_596 > 3); p_1124->g_596 = safe_add_func_int64_t_s_s(p_1124->g_596, 4))
            { /* block id: 341 */
                int32_t *l_638 = (void*)0;
                int32_t *l_639 = &p_1124->g_127;
                int32_t *l_640[4];
                int64_t l_658 = (-10L);
                int i;
                for (i = 0; i < 4; i++)
                    l_640[i] = &l_606[1];
                l_606[9] = p_54;
                --l_646;
                for (p_1124->g_504 = 29; (p_1124->g_504 < 23); p_1124->g_504 = safe_sub_func_uint16_t_u_u(p_1124->g_504, 1))
                { /* block id: 346 */
                    int32_t l_654 = 1L;
                    int32_t l_655[10][5] = {{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L},{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L},{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L},{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L},{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L},{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L},{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L},{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L},{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L},{0x456F13E5L,0x574134E6L,0x574134E6L,0x456F13E5L,0x456F13E5L}};
                    int16_t l_656 = 0x77F7L;
                    uint64_t l_659 = 1UL;
                    int32_t **l_662 = (void*)0;
                    uint64_t l_677 = 0x5B0FBE2AEBF38697L;
                    union U2 **l_681 = &l_680;
                    int i, j;
                    for (p_1124->g_153.f2 = (-10); (p_1124->g_153.f2 < (-18)); p_1124->g_153.f2 = safe_sub_func_int16_t_s_s(p_1124->g_153.f2, 5))
                    { /* block id: 349 */
                        int32_t l_653[7][3] = {{0x27307255L,0x76247311L,0x27307255L},{0x27307255L,0x76247311L,0x27307255L},{0x27307255L,0x76247311L,0x27307255L},{0x27307255L,0x76247311L,0x27307255L},{0x27307255L,0x76247311L,0x27307255L},{0x27307255L,0x76247311L,0x27307255L},{0x27307255L,0x76247311L,0x27307255L}};
                        int i, j;
                        --l_659;
                        (*p_1124->g_521) = (((void*)0 == l_662) | ((l_663[5][8][2] == (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((p_1124->g_178.f0 < 0x29DFL) || ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int8_t_s(((((l_673 = &p_1124->g_149) == (void*)0) < (*p_53)) ^ (safe_div_func_uint64_t_u_u(((*l_639) ^ p_54), p_54))))) < 1UL), p_1124->g_676)) | (*p_53)), 2)) >= 65535UL)) > (**p_1124->g_602)), 4)), p_54))) , l_58));
                    }
                    --l_677;
                    (*l_681) = l_680;
                }
            }
        }
        (*l_687) = (l_683 = &l_287[6]);
    }
    else
    { /* block id: 361 */
        int32_t l_707 = (-4L);
        int32_t l_730 = 0x1973821EL;
        union U0 *l_731 = &p_1124->g_476[5][1];
        int16_t l_760 = 0x033AL;
        uint16_t *l_772[7][8][4] = {{{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0}},{{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0}},{{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0}},{{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0}},{{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0}},{{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0}},{{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0},{&p_1124->g_190.f0,(void*)0,&p_1124->g_102.f0,(void*)0}}};
        uint16_t l_773[2];
        int64_t l_774 = 0x364D4E38B29A643BL;
        uint8_t *l_775[6][1];
        int64_t **l_776[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t ***l_778 = &l_776[6];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_773[i] = 1UL;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_775[i][j] = &p_1124->g_751;
        }
        for (p_1124->g_80 = (-16); (p_1124->g_80 < 14); ++p_1124->g_80)
        { /* block id: 364 */
            union U1 *l_691[4][10][5] = {{{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]}},{{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]}},{{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]}},{{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]},{&p_1124->g_153,&p_1124->g_171[1],&p_1124->g_153,&p_1124->g_153,&p_1124->g_171[1]}}};
            int32_t l_693[3][4][6];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_693[i][j][k] = 0x7B62233CL;
                }
            }
            for (p_1124->g_190.f0 = 0; (p_1124->g_190.f0 <= 2); p_1124->g_190.f0 += 1)
            { /* block id: 367 */
                uint64_t l_698[9][1][1] = {{{18446744073709551615UL}},{{18446744073709551615UL}},{{18446744073709551615UL}},{{18446744073709551615UL}},{{18446744073709551615UL}},{{18446744073709551615UL}},{{18446744073709551615UL}},{{18446744073709551615UL}},{{18446744073709551615UL}}};
                int64_t *l_699[4][10][5];
                int32_t l_710 = 0L;
                int16_t l_728 = 6L;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_699[i][j][k] = (void*)0;
                    }
                }
                l_691[3][2][4] = l_690;
                for (p_1124->g_104 = 0; (p_1124->g_104 <= 2); p_1124->g_104 += 1)
                { /* block id: 371 */
                    int32_t l_692 = 0x15CCE1E0L;
                    int64_t *l_700[1];
                    int64_t *l_708 = (void*)0;
                    int64_t *l_709 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_700[i] = &p_1124->g_504;
                    if (l_692)
                        break;
                    l_693[0][1][3] = l_693[0][1][0];
                    (*p_1124->g_521) = ((+l_693[0][1][0]) != (safe_rshift_func_int8_t_s_s((*p_53), 6)));
                    (*p_1124->g_521) = (p_54 && (safe_rshift_func_int16_t_s_u((((l_698[4][0][0] > 0x58F3L) < (l_634 , ((((p_54 && (~(l_699[0][8][2] == l_700[0]))) | (l_710 = ((*p_1124->g_509) = (((safe_mul_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u(0x516BB0CBA2956748L, (p_1124->g_149 = (safe_sub_func_int16_t_s_s((-8L), p_54))))) >= l_634) , p_1124->g_448.f0), l_707)) || p_1124->g_57) ^ p_54)))) && 0x965D29AA21A80EB4L) != 0x94L))) , 6L), 10)));
                }
                for (p_1124->g_530 = 0; (p_1124->g_530 <= 4); p_1124->g_530 += 1)
                { /* block id: 382 */
                    if (l_693[0][1][0])
                        break;
                    for (p_1124->g_166 = 0; (p_1124->g_166 <= 3); p_1124->g_166 += 1)
                    { /* block id: 386 */
                        int32_t l_719 = 0x6CFB0D3CL;
                        int32_t *l_729 = &l_707;
                        int i;
                        (*p_1124->g_521) = ((l_710 , ((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(((p_1124->g_150 || p_1124->g_153.f0) == l_719), (((safe_mul_func_int8_t_s_s(((*p_53) &= ((~(((l_730 ^= (safe_sub_func_uint16_t_u_u((((*l_729) = ((safe_div_func_uint64_t_u_u(p_1124->g_136[4], ((*p_1124->g_509) , p_1124->g_676))) && ((safe_add_func_uint8_t_u_u(((*p_1124->g_509) || 0x38730B3C4DA53FB4L), l_728)) & l_698[0][0][0]))) != (*p_1124->g_603)), p_54))) , 0x15F867ACL) > p_54)) || l_728)), 247UL)) & l_698[4][0][0]) >= (**p_1124->g_602)))), l_58)), p_1124->g_34)), p_54)) ^ l_698[1][0][0])) | l_728);
                    }
                    (*p_1124->g_343) = l_731;
                }
                (*p_1124->g_343) = (*p_1124->g_343);
            }
            if (p_54)
                break;
        }
        for (p_1124->g_157.f1 = 0; (p_1124->g_157.f1 < (-27)); --p_1124->g_157.f1)
        { /* block id: 400 */
            uint32_t l_745[4][7] = {{4294967287UL,1UL,0xDDB4BEC3L,1UL,4294967287UL,4294967287UL,1UL},{4294967287UL,1UL,0xDDB4BEC3L,1UL,4294967287UL,4294967287UL,1UL},{4294967287UL,1UL,0xDDB4BEC3L,1UL,4294967287UL,4294967287UL,1UL},{4294967287UL,1UL,0xDDB4BEC3L,1UL,4294967287UL,4294967287UL,1UL}};
            union U4 **l_749[5];
            union U4 ***l_748 = &l_749[0];
            int16_t *l_750 = &p_1124->g_676;
            uint8_t *l_759 = &p_1124->g_530;
            int32_t *l_761 = &p_1124->g_605;
            int i, j;
            for (i = 0; i < 5; i++)
                l_749[i] = &p_1124->g_535;
            for (p_1124->g_166 = 0; (p_1124->g_166 <= 0); p_1124->g_166 += 1)
            { /* block id: 403 */
                int8_t l_736 = 0x66L;
                (*p_1124->g_521) = 0x68673BE5L;
                for (p_1124->g_605 = 0; (p_1124->g_605 <= 0); p_1124->g_605 += 1)
                { /* block id: 407 */
                    int i, j;
                    (*p_1124->g_521) |= (0x55FC6FAEL < p_1124->g_210[p_1124->g_605][p_1124->g_166]);
                    (*p_1124->g_521) ^= 0x3BF14626L;
                }
                for (p_1124->g_153.f3 = 8; (p_1124->g_153.f3 >= 2); p_1124->g_153.f3 -= 1)
                { /* block id: 413 */
                    int i;
                    (*p_1124->g_521) = (safe_div_func_uint16_t_u_u(l_606[(p_1124->g_166 + 6)], p_54));
                    if (l_736)
                        continue;
                    (*p_1124->g_521) = (p_54 <= (((*p_55) ^= (safe_add_func_int32_t_s_s((0x588A7B2EL | l_606[(p_1124->g_166 + 6)]), 1UL))) == (safe_sub_func_int64_t_s_s(((l_731 != (void*)0) ^ l_606[1]), (9L || (0x4E87147F9902011EL || p_54))))));
                }
            }
            (*l_761) &= (safe_sub_func_int16_t_s_s((((void*)0 != &p_1124->g_109) , (safe_rshift_func_uint8_t_u_s((l_707 >= (l_745[1][6] , (safe_mod_func_int8_t_s_s((((p_1124->g_751 = ((*l_750) = (l_748 != &p_1124->g_534))) | (safe_mul_func_uint16_t_u_u((l_606[1] = (safe_div_func_uint16_t_u_u((l_730 ^= ((safe_lshift_func_uint8_t_u_u(((*l_759) = ((p_1124->g_758 , ((*p_55) || (p_54 || p_54))) > 2L)), l_745[3][0])) , p_54)), p_54))), p_54))) != l_760), 246UL)))), (*p_55)))), l_760));
            p_1124->g_762[0] = p_1124->g_762[0];
            (*p_1124->g_521) = l_606[1];
        }
        (*p_1124->g_521) = (0x6CCD36CBE88E3719L > ((l_730 ^= ((l_773[1] = (p_1124->g_763 , ((((((p_1124->g_764 , (p_54 = (1UL >= (((safe_sub_func_int64_t_s_s(((p_1124->g_767[6][2] , 0UL) >= (*p_1124->g_509)), (18446744073709551615UL && ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0x697FL || 0xEEEDL), l_606[4])), l_58)) | p_54)))) | l_760) > p_1124->g_149)))) , 0UL) == (*p_1124->g_603)) , (void*)0) != l_772[3][4][0]) | l_606[1]))) == l_774)) , p_1124->g_102.f0));
        (*l_778) = l_776[8];
    }
    for (p_1124->g_157.f1 = 0; (p_1124->g_157.f1 <= 2); p_1124->g_157.f1 += 1)
    { /* block id: 437 */
        int32_t *l_779[8][8][3] = {{{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0}},{{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0}},{{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0}},{{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0}},{{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0}},{{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0}},{{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0}},{{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0},{&l_606[1],&p_1124->g_150,&p_1124->g_157.f0}}};
        uint32_t l_780 = 0x898E2351L;
        int i, j, k;
        l_780--;
        return p_1124->g_763.f0;
    }
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_171.f0 p_1124->g_162 p_1124->g_136 p_1124->g_102 p_1124->g_153 p_1124->g_409 p_1124->g_133 p_1124->g_280 p_1124->g_281 p_1124->g_343 p_1124->g_210 p_1124->g_127 p_1124->g_80 p_1124->g_166 p_1124->g_433 p_1124->g_150 p_1124->g_448 p_1124->g_190.f0 p_1124->g_471 p_1124->g_476 p_1124->g_265 p_1124->g_154.f0 p_1124->g_149 p_1124->g_153.f0 p_1124->g_305 p_1124->g_530 p_1124->g_34 p_1124->g_534 p_1124->g_57 p_1124->g_509 p_1124->g_596 p_1124->g_521 p_1124->g_601 p_1124->g_104
 * writes: p_1124->g_149 p_1124->g_162 p_1124->g_210 p_1124->g_136 p_1124->g_104 p_1124->g_166 p_1124->g_281 p_1124->g_80 p_1124->g_150 p_1124->g_471 p_1124->g_489 p_1124->g_504 p_1124->g_509 p_1124->g_521 p_1124->g_529 p_1124->g_535 p_1124->g_596 p_1124->g_164 p_1124->g_448.f0 p_1124->g_157.f0 p_1124->g_602
 */
int32_t  func_63(int8_t  p_64, int8_t * p_65, uint64_t  p_66, uint32_t  p_67, struct S5 * p_1124)
{ /* block id: 186 */
    uint32_t l_356[8] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
    uint64_t *l_365 = &p_1124->g_149;
    uint8_t l_366 = 0x70L;
    int8_t **l_367 = &p_1124->g_110;
    int16_t *l_372 = (void*)0;
    int16_t *l_373 = (void*)0;
    int16_t *l_374[1];
    int32_t l_375 = 0x31A5F3C5L;
    int32_t l_376 = (-1L);
    int64_t *l_380 = &p_1124->g_162;
    int64_t **l_379[4][7] = {{&l_380,&l_380,(void*)0,&l_380,&l_380,&l_380,(void*)0},{&l_380,&l_380,(void*)0,&l_380,&l_380,&l_380,(void*)0},{&l_380,&l_380,(void*)0,&l_380,&l_380,&l_380,(void*)0},{&l_380,&l_380,(void*)0,&l_380,&l_380,&l_380,(void*)0}};
    int64_t *l_381 = &p_1124->g_162;
    int32_t l_382 = 0x2A9396B7L;
    uint8_t *l_383 = &p_1124->g_210[0][1];
    union U0 *l_384 = (void*)0;
    uint32_t *l_385 = &p_1124->g_136[0];
    uint16_t l_393 = 0xA77EL;
    int32_t l_396 = 0x61312063L;
    int32_t l_397 = 0x506796A9L;
    int32_t l_398 = 0x4FAC8844L;
    int32_t l_400 = 0x185857A1L;
    uint32_t l_401 = 4294967294UL;
    int32_t l_405[2][8];
    int16_t l_459 = 2L;
    int64_t l_494 = 0x30CD4CBD8E966AA4L;
    int32_t l_506 = (-1L);
    union U2 *l_511 = &p_1124->g_512[5][4][0];
    union U4 *l_532 = &p_1124->g_533;
    int32_t *l_563[10] = {&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397,&l_397};
    int32_t l_564 = 0L;
    uint8_t l_568 = 7UL;
    union U0 ***l_592 = &p_1124->g_343;
    int i, j;
    for (i = 0; i < 1; i++)
        l_374[i] = &p_1124->g_171[1].f2;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
            l_405[i][j] = 0x59309CCDL;
    }
lbl_420:
    l_366 ^= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((~(((safe_add_func_uint16_t_u_u(((((l_356[2] , (0x6DL < ((p_1124->g_171[1].f0 , &p_1124->g_128) != &p_1124->g_80))) , ((safe_mod_func_int8_t_s_s(0L, (((safe_div_func_int64_t_s_s(l_356[0], (safe_sub_func_uint8_t_u_u((p_67 >= ((*l_365) = p_67)), l_356[5])))) , 65527UL) , 0x0EL))) && 0xE90CL)) ^ 0xDA27L) & 0x321888E1L), p_67)) , l_356[2]) <= 0x27L)), p_67)), p_66)) <= 0L), 7));
    if ((((*l_365) = ((void*)0 == l_367)) ^ (255UL | (safe_sub_func_uint32_t_u_u(((*l_385) &= (((((*l_383) = ((0xB5D1L < (1L <= ((~(safe_div_func_int16_t_s_s((l_376 = (l_375 = (-5L))), l_356[2]))) | (l_382 = ((*l_380) &= (safe_mod_func_uint32_t_u_u((l_356[3] || ((l_381 = l_365) != (void*)0)), p_64))))))) && l_366)) , l_384) != l_384) == 0L)), p_66)))))
    { /* block id: 197 */
        int32_t *l_386 = &p_1124->g_127;
        int32_t *l_387 = &p_1124->g_157.f0;
        int32_t *l_388 = &l_375;
        int32_t *l_389 = &l_376;
        int32_t l_390 = 0x50AA9BFAL;
        int32_t *l_391 = &l_390;
        int32_t *l_392[10] = {&l_376,&l_376,&l_376,&l_376,&l_376,&l_376,&l_376,&l_376,&l_376,&l_376};
        int64_t l_399 = 0x4AD4095460780E83L;
        int64_t l_404 = (-7L);
        uint8_t l_406 = 0UL;
        int i;
        l_393++;
        --l_401;
        --l_406;
    }
    else
    { /* block id: 201 */
        uint8_t l_412 = 0xE3L;
        int64_t l_430 = 0x4573FBBC2FC7ECB4L;
        int32_t l_449[6][9] = {{(-3L),0x1E85A905L,1L,(-10L),8L,(-10L),1L,0x1E85A905L,(-3L)},{(-3L),0x1E85A905L,1L,(-10L),8L,(-10L),1L,0x1E85A905L,(-3L)},{(-3L),0x1E85A905L,1L,(-10L),8L,(-10L),1L,0x1E85A905L,(-3L)},{(-3L),0x1E85A905L,1L,(-10L),8L,(-10L),1L,0x1E85A905L,(-3L)},{(-3L),0x1E85A905L,1L,(-10L),8L,(-10L),1L,0x1E85A905L,(-3L)},{(-3L),0x1E85A905L,1L,(-10L),8L,(-10L),1L,0x1E85A905L,(-3L)}};
        uint16_t l_452 = 0x9767L;
        int8_t l_455[1][8] = {{0x0FL,0x0FL,0x0FL,0x0FL,0x0FL,0x0FL,0x0FL,0x0FL}};
        int32_t l_457 = 1L;
        int64_t l_458 = 0x1F6078B135823C93L;
        int32_t *l_464 = &p_1124->g_150;
        uint32_t *l_469 = &p_1124->g_157.f2;
        uint32_t *l_470[7][7][5] = {{{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]}},{{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]}},{{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]}},{{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]}},{{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]}},{{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]}},{{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]},{(void*)0,&p_1124->g_471[2],(void*)0,&p_1124->g_471[2],&p_1124->g_471[2]}}};
        int8_t ***l_481 = (void*)0;
        int8_t **l_482[9] = {&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110};
        int8_t ***l_483 = &p_1124->g_112[0][5][1];
        int8_t ***l_484 = &p_1124->g_112[0][5][1];
        int8_t ***l_485 = &p_1124->g_112[1][2][5];
        int8_t ***l_486 = (void*)0;
        uint32_t l_487 = 0x76959938L;
        uint16_t *l_488 = &p_1124->g_80;
        int16_t l_558[10] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
        uint16_t l_559 = 65532UL;
        uint8_t l_565 = 255UL;
        int i, j, k;
lbl_463:
        for (p_1124->g_104 = 0; (p_1124->g_104 <= 0); p_1124->g_104 += 1)
        { /* block id: 204 */
            int16_t l_413 = (-8L);
            int32_t *l_453 = &p_1124->g_127;
            int32_t *l_454[6] = {&p_1124->g_127,&l_397,&p_1124->g_127,&p_1124->g_127,&l_397,&p_1124->g_127};
            int8_t l_456[9][6] = {{0x39L,2L,(-1L),(-10L),2L,(-10L)},{0x39L,2L,(-1L),(-10L),2L,(-10L)},{0x39L,2L,(-1L),(-10L),2L,(-10L)},{0x39L,2L,(-1L),(-10L),2L,(-10L)},{0x39L,2L,(-1L),(-10L),2L,(-10L)},{0x39L,2L,(-1L),(-10L),2L,(-10L)},{0x39L,2L,(-1L),(-10L),2L,(-10L)},{0x39L,2L,(-1L),(-10L),2L,(-10L)},{0x39L,2L,(-1L),(-10L),2L,(-10L)}};
            uint32_t l_460[7] = {0x01964DF1L,0x01964DF1L,0x01964DF1L,0x01964DF1L,0x01964DF1L,0x01964DF1L,0x01964DF1L};
            int i, j;
            for (p_1124->g_166 = 0; (p_1124->g_166 <= 0); p_1124->g_166 += 1)
            { /* block id: 207 */
                int8_t l_418 = (-10L);
                int32_t l_419[9] = {0x1526C651L,0x1526C651L,0x1526C651L,0x1526C651L,0x1526C651L,0x1526C651L,0x1526C651L,0x1526C651L,0x1526C651L};
                int16_t l_431 = (-1L);
                union U2 *l_436 = &p_1124->g_178;
                int i;
                l_419[8] = (((p_1124->g_102 , p_1124->g_153) , p_1124->g_409) , (((safe_mod_func_uint8_t_u_u(l_412, (l_413 = p_66))) < ((((p_1124->g_133 || (safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((*p_1124->g_343) = (*p_1124->g_280)) != (p_66 , (((p_1124->g_210[6][2] | p_64) , p_1124->g_127) , (void*)0))), p_67)), l_412))) , (void*)0) == (void*)0) > l_418)) | p_1124->g_127));
                for (p_1124->g_162 = 0; (p_1124->g_162 <= 3); p_1124->g_162 += 1)
                { /* block id: 213 */
                    int16_t *l_432 = &l_413;
                    int32_t l_434 = 1L;
                    union U2 *l_445 = &p_1124->g_178;
                    int i;
                    for (p_1124->g_149 = 0; (p_1124->g_149 <= 1); p_1124->g_149 += 1)
                    { /* block id: 216 */
                        uint16_t *l_423[9][2] = {{&p_1124->g_102.f0,&l_393},{&p_1124->g_102.f0,&l_393},{&p_1124->g_102.f0,&l_393},{&p_1124->g_102.f0,&l_393},{&p_1124->g_102.f0,&l_393},{&p_1124->g_102.f0,&l_393},{&p_1124->g_102.f0,&l_393},{&p_1124->g_102.f0,&l_393},{&p_1124->g_102.f0,&l_393}};
                        int32_t *l_426 = &l_419[2];
                        int32_t **l_427 = &l_426;
                        int i, j;
                        if (p_1124->g_127)
                            goto lbl_420;
                        (*l_426) &= (safe_lshift_func_uint16_t_u_u((++p_1124->g_80), 12));
                        (*l_427) = &l_400;
                        return p_66;
                    }
                    (*p_1124->g_433) |= ((l_400 > (safe_add_func_int8_t_s_s((p_1124->g_162 & l_400), 0x4FL))) , ((l_374[p_1124->g_166] = l_432) != (void*)0));
                    if (l_401)
                        goto lbl_463;
                    if (p_1124->g_166)
                        goto lbl_420;
                    for (l_400 = 1; (l_400 >= 0); l_400 -= 1)
                    { /* block id: 228 */
                        uint64_t *l_435 = &p_1124->g_149;
                        union U2 *l_438 = &p_1124->g_178;
                        union U2 **l_437 = &l_438;
                        union U2 **l_446 = (void*)0;
                        union U2 **l_447 = &l_445;
                        int32_t *l_450 = &l_382;
                        int32_t *l_451[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        if (l_434)
                            break;
                        l_452 ^= ((*l_450) |= (l_435 == (((((l_436 != ((*l_437) = &p_1124->g_178)) != ((((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0x04L, (+p_66))), ((((l_449[3][5] = ((((safe_mod_func_uint16_t_u_u(((((*l_447) = l_445) != (void*)0) == (p_1124->g_448 , 0x0291FE80L)), 65534UL)) ^ l_413) && 0L) >= l_413)) >= l_401) > l_430) | p_1124->g_190.f0))) || 0L) < p_1124->g_127) >= p_1124->g_162)) > l_430) >= p_67) , (void*)0)));
                    }
                }
                if (p_66)
                    continue;
            }
            l_460[5]++;
            return p_64;
        }
        (*l_464) |= 0x0508EE65L;
        if ((safe_mod_func_int8_t_s_s((((p_66 , (p_1124->g_136[1] <= ((p_1124->g_471[2]++) , (((safe_lshift_func_uint8_t_u_u((p_1124->g_476[6][0] , ((safe_sub_func_uint16_t_u_u(((*l_488) = (((*p_1124->g_265) , p_64) > (((l_482[6] = &p_65) == (l_367 = &p_1124->g_110)) , (l_487 < (&p_64 != (void*)0))))), (*l_464))) , 0xBDL)), 5)) , p_1124->g_154.f0) >= (*l_464))))) || 0UL) , p_64), l_382)))
        { /* block id: 248 */
            int32_t l_490 = 0x2DC838EFL;
            int32_t *l_491 = (void*)0;
            l_490 |= ((p_1124->g_489 = &p_1124->g_112[0][5][1]) != (void*)0);
            l_491 = &p_1124->g_150;
            (*l_491) = (0xE1CE67B3264E91E6L || ((&p_1124->g_112[1][1][3] != &l_367) == 0x0340DCCB8CC973C2L));
        }
        else
        { /* block id: 253 */
            int64_t *l_503 = &p_1124->g_504;
            int32_t l_505[1][7] = {{0x003BDCCEL,0x78D34982L,0x003BDCCEL,0x003BDCCEL,0x78D34982L,0x003BDCCEL,0x003BDCCEL}};
            uint8_t l_517 = 249UL;
            int32_t l_546 = 0x19021253L;
            int64_t l_549 = 0x77CE0B703D992ADBL;
            uint16_t l_550[9] = {0x6D0AL,0x6D0AL,0x6D0AL,0x6D0AL,0x6D0AL,0x6D0AL,0x6D0AL,0x6D0AL,0x6D0AL};
            int32_t *l_557[3][7] = {{&l_398,(void*)0,&l_398,&l_398,(void*)0,&l_398,&l_398},{&l_398,(void*)0,&l_398,&l_398,(void*)0,&l_398,&l_398},{&l_398,(void*)0,&l_398,&l_398,(void*)0,&l_398,&l_398}};
            int32_t **l_562[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_562[i] = &l_557[2][6];
            if (((((safe_div_func_int8_t_s_s(l_356[6], ((((0L | l_494) , (((p_66 & (((*l_383) = 0x73L) , ((p_66 , (((((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((*l_488) = p_64), 9)) < (((*l_503) = (safe_mul_func_int8_t_s_s(0x1FL, 0x79L))) , (*l_464))), 4)) , l_505[0][3]) < p_1124->g_149) && p_66) == l_505[0][3])) || 0UL))) > l_505[0][3]) && l_400)) || l_506) && 3L))) || l_382) | l_393) , (*l_464)))
            { /* block id: 257 */
                int64_t *l_510 = &l_458;
                (*l_464) = (p_64 <= ((((safe_lshift_func_int16_t_s_u(0x587DL, (p_1124->g_153.f0 >= ((l_505[0][3] , (~((p_1124->g_509 = &p_1124->g_162) != (l_510 = &l_430)))) , (p_67 >= ((((((void*)0 == &p_65) && p_64) != p_67) , l_511) == p_1124->g_305)))))) && (-1L)) && l_494) == 0x1DL));
            }
            else
            { /* block id: 261 */
                int64_t l_531 = 0x731A1EA8823E39D7L;
                for (l_396 = 7; (l_396 >= 0); l_396 -= 1)
                { /* block id: 264 */
                    int32_t *l_513 = &p_1124->g_127;
                    int32_t *l_514 = &l_505[0][4];
                    int32_t *l_515 = (void*)0;
                    int32_t *l_516[2][1];
                    volatile int32_t **l_522 = &p_1124->g_521;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_516[i][j] = &l_382;
                    }
                    ++l_517;
                    (*l_522) = &p_1124->g_164;
                }
                (*l_464) = (!((((*l_464) > ((p_67 && ((((safe_add_func_uint32_t_u_u(1UL, ((((*l_381) = (safe_mod_func_uint8_t_u_u(((l_396 ^ (safe_sub_func_int8_t_s_s(((7UL >= (~((-1L) < (((p_1124->g_529[0] = &p_1124->g_257[2]) == &p_1124->g_433) | (-3L))))) != 0x0C9DDC45FD81CBD0L), p_66))) , (*l_464)), p_1124->g_530))) > p_1124->g_34) & 0x31L))) == p_64) >= (*l_464)) || 1L)) < 1UL)) , l_531) || 65533UL));
                (*p_1124->g_534) = l_532;
                for (l_494 = 0; (l_494 >= 4); ++l_494)
                { /* block id: 274 */
                    if ((*p_1124->g_265))
                        break;
                    return p_64;
                }
            }
            for (l_398 = 4; (l_398 < (-10)); --l_398)
            { /* block id: 281 */
                int32_t l_547 = 0x0E65A545L;
                int32_t l_548[9][3][2] = {{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}}};
                int i, j, k;
                for (l_412 = 0; (l_412 > 4); ++l_412)
                { /* block id: 284 */
                    int32_t *l_542 = &l_457;
                    int32_t *l_543 = &l_405[0][0];
                    int32_t *l_544[10];
                    int32_t **l_553 = &l_542;
                    uint32_t l_554 = 4294967295UL;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_544[i] = &p_1124->g_150;
                    l_550[5]++;
                    (*l_553) = &l_400;
                    l_554++;
                    (*l_464) |= l_548[0][2][1];
                }
            }
            --l_559;
            l_563[3] = (void*)0;
        }
        l_565++;
    }
    l_568--;
    for (l_400 = 0; (l_400 <= (-24)); l_400--)
    { /* block id: 300 */
        union U4 **l_575 = &l_532;
        union U4 ***l_576 = (void*)0;
        uint16_t l_579 = 0x97B3L;
        union U2 *l_593 = (void*)0;
        uint32_t l_594 = 4294967286UL;
        int32_t l_595[4];
        int32_t **l_598 = &l_563[3];
        int i;
        for (i = 0; i < 4; i++)
            l_595[i] = (-1L);
        l_575 = ((safe_div_func_uint16_t_u_u((&p_1124->g_162 == &p_1124->g_162), p_66)) , l_575);
        for (p_1124->g_150 = (-6); (p_1124->g_150 > 7); ++p_1124->g_150)
        { /* block id: 304 */
            union U2 **l_586[2];
            union U4 ***l_591 = &l_575;
            int i;
            for (i = 0; i < 2; i++)
                l_586[i] = &l_511;
            l_579--;
            (*p_1124->g_521) = (((safe_add_func_uint16_t_u_u((l_579 > ((p_1124->g_596 ^= (~(l_595[1] &= ((safe_div_func_uint64_t_u_u(l_579, (p_1124->g_171[1].f0 && ((((l_511 = &p_1124->g_512[5][3][0]) != (((safe_mod_func_uint16_t_u_u((!((safe_lshift_func_uint8_t_u_s(0UL, 3)) < ((((void*)0 == l_591) | p_1124->g_57) | ((((&p_1124->g_343 != l_592) < 18446744073709551615UL) > l_579) <= (*p_1124->g_509))))), p_67)) > p_66) , l_593)) < l_594) && p_67)))) || 1L)))) != 0L)), 0x057AL)) < p_64) > p_66);
        }
        (*l_598) = &l_405[0][7];
        for (p_1124->g_157.f0 = 9; (p_1124->g_157.f0 > 28); ++p_1124->g_157.f0)
        { /* block id: 314 */
            (*p_1124->g_601) = &l_385;
        }
    }
    return p_67;
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_153.f2 p_1124->g_150 p_1124->g_166 p_1124->g_303 p_1124->g_305 p_1124->g_57 p_1124->g_149 p_1124->g_210 p_1124->g_265 p_1124->g_171.f0 p_1124->g_127 p_1124->g_34
 * writes: p_1124->g_257 p_1124->g_153.f2 p_1124->g_149 p_1124->g_210 p_1124->g_150 p_1124->g_343
 */
int8_t * func_68(int16_t  p_69, uint16_t * p_70, int8_t * p_71, int32_t  p_72, int32_t  p_73, struct S5 * p_1124)
{ /* block id: 149 */
    union U2 *l_289 = (void*)0;
    union U2 **l_288 = &l_289;
    int32_t l_308 = 0x55CC4E38L;
    union U0 **l_342[5];
    union U0 ***l_341[7][8][3] = {{{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]}},{{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]}},{{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]}},{{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]}},{{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]}},{{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]}},{{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]},{&l_342[0],&l_342[3],&l_342[0]}}};
    int32_t *l_344 = &p_1124->g_150;
    int8_t *l_345[10];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_342[i] = (void*)0;
    for (i = 0; i < 10; i++)
        l_345[i] = &p_1124->g_57;
    if (((void*)0 == l_288))
    { /* block id: 150 */
        int32_t *l_290 = &p_1124->g_150;
        int32_t **l_291 = &p_1124->g_257[0];
        union U2 *l_304 = (void*)0;
        (*l_291) = l_290;
        for (p_1124->g_153.f2 = 8; (p_1124->g_153.f2 == 27); ++p_1124->g_153.f2)
        { /* block id: 154 */
            uint8_t l_294 = 0x67L;
            int8_t *l_322 = &p_1124->g_57;
            uint64_t *l_338 = &p_1124->g_149;
            int8_t *l_340 = &p_1124->g_57;
            l_294++;
            if ((*l_290))
                continue;
            (*l_291) = (void*)0;
            if (((safe_sub_func_int16_t_s_s(p_72, p_1124->g_166)) | (safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((p_1124->g_303[0] , l_304) != p_1124->g_305), (((p_1124->g_149 |= ((65534UL > (safe_mul_func_int8_t_s_s(((&p_1124->g_149 != (void*)0) && ((((((*l_288) = (void*)0) != (void*)0) , l_294) , 4294967288UL) == l_308)), (*p_71)))) ^ l_308)) && p_72) == (*l_290)))), p_1124->g_210[0][1]))))
            { /* block id: 160 */
                int32_t l_311 = 0x0D4928ACL;
                (*l_290) = ((~((*p_1124->g_265) >= (((safe_lshift_func_uint16_t_u_s(l_311, p_69)) , p_69) != ((+(0x861DL < (0x00L && (((((safe_add_func_uint8_t_u_u(p_73, (safe_sub_func_uint8_t_u_u((p_1124->g_210[0][1] &= p_73), (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(65535UL, p_72)) ^ p_69), p_73)))))) , 65535UL) ^ l_308) != 1L) <= (-2L))))) && p_1124->g_57)))) < 0L);
            }
            else
            { /* block id: 163 */
                int16_t l_320 = (-1L);
                int32_t *l_321 = &l_308;
                if (((*l_321) = ((*l_290) = l_320)))
                { /* block id: 166 */
                    if (p_72)
                        break;
                    (*l_321) |= (l_322 == (void*)0);
                }
                else
                { /* block id: 169 */
                    int64_t l_337 = 0x470856A399DB8F0AL;
                    int8_t *l_339 = (void*)0;
                    if ((safe_div_func_uint32_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(p_1124->g_171[1].f0, ((((!(~(l_308 || (((safe_add_func_uint16_t_u_u(65526UL, ((p_73 , ((p_1124->g_127 > ((safe_sub_func_int32_t_s_s(0x3A51F8BBL, ((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u(l_337, (((p_1124->g_34 < (p_73 | p_72)) , 0x82FF352E7DB46CAFL) , 0UL))) && (*l_321)), 0x27ECD8F6BCCEDB56L)) < p_72))) , (*l_321))) , l_338)) != (void*)0))) , (*p_71)) , 0L)))) >= p_73) == 0x18L) && p_1124->g_149))) > p_72), (*l_290))) < l_337) | l_308) >= p_72), p_72)))
                    { /* block id: 170 */
                        return l_339;
                    }
                    else
                    { /* block id: 172 */
                        (*l_291) = &p_1124->g_150;
                    }
                    return l_340;
                }
            }
        }
        l_308 ^= 0x44FF9101L;
    }
    else
    { /* block id: 180 */
        return p_71;
    }
    (*l_344) = (p_1124->g_149 || ((p_1124->g_343 = &p_1124->g_281) != (void*)0));
    return l_345[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_153.f1 p_1124->g_280 p_1124->g_162 p_1124->g_265 p_1124->g_150
 * writes: p_1124->g_153.f1 p_1124->g_281 p_1124->g_162
 */
int16_t  func_74(uint16_t * p_75, uint16_t * p_76, int32_t  p_77, int8_t  p_78, struct S5 * p_1124)
{ /* block id: 135 */
    union U0 *l_278 = &p_1124->g_157;
    int32_t l_286 = 0x1F6053C3L;
    for (p_1124->g_153.f1 = 13; (p_1124->g_153.f1 == (-29)); p_1124->g_153.f1 = safe_sub_func_uint8_t_u_u(p_1124->g_153.f1, 9))
    { /* block id: 138 */
        union U0 **l_279 = &l_278;
        int32_t *l_284[3][4][10] = {{{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150},{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150},{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150},{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150}},{{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150},{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150},{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150},{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150}},{{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150},{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150},{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150},{&p_1124->g_127,&p_1124->g_150,&p_1124->g_150,(void*)0,&p_1124->g_127,(void*)0,&p_1124->g_150,&p_1124->g_150,&p_1124->g_127,&p_1124->g_150}}};
        int i, j, k;
        (*p_1124->g_280) = ((*l_279) = l_278);
        for (p_1124->g_162 = 9; (p_1124->g_162 != 0); p_1124->g_162 = safe_sub_func_uint16_t_u_u(p_1124->g_162, 4))
        { /* block id: 143 */
            int32_t **l_285 = &l_284[2][1][0];
            (*l_285) = l_284[2][1][0];
            if ((*p_1124->g_265))
                break;
        }
    }
    return l_286;
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_257 p_1124->g_157.f0
 * writes: p_1124->g_257 p_1124->g_157.f0
 */
uint16_t * func_81(int32_t  p_82, int64_t  p_83, uint16_t * p_84, int32_t  p_85, struct S5 * p_1124)
{ /* block id: 128 */
    int64_t *l_271 = &p_1124->g_162;
    int64_t **l_270 = &l_271;
    int32_t l_272[6][5][8] = {{{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L}},{{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L}},{{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L}},{{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L}},{{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L}},{{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L},{1L,0x51A8F1CCL,0x0301E437L,0x51A8F1CCL,1L,0x742D3900L,1L,0x7BCEBDF1L}}};
    int32_t **l_273 = &p_1124->g_257[2];
    uint16_t *l_274 = (void*)0;
    int i, j, k;
    (*l_273) = ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0UL, ((!(((*l_270) = &p_83) != &p_83)) <= l_272[5][2][3]))), l_272[5][2][3])) , &l_272[5][2][3]);
    (**l_273) &= p_83;
    (**l_273) = p_82;
    (*l_273) = (p_85 , &p_1124->g_127);
    return l_274;
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_108 p_1124->g_104 p_1124->g_109 p_1124->g_57 p_1124->g_128 p_1124->g_102.f0 p_1124->g_127 p_1124->g_133 p_1124->g_136 p_1124->g_153 p_1124->g_154 p_1124->g_157 p_1124->g_80 p_1124->g_149 p_1124->g_166 p_1124->g_171 p_1124->g_171.f0 p_1124->g_153.f1 p_1124->g_265 p_1124->g_150
 * writes: p_1124->g_109 p_1124->g_112 p_1124->g_128 p_1124->g_102.f0 p_1124->g_127 p_1124->g_133 p_1124->g_136 p_1124->g_149 p_1124->g_150 p_1124->g_157.f0 p_1124->g_162 p_1124->g_166 p_1124->g_153.f1
 */
int64_t  func_87(int32_t  p_88, int8_t * p_89, uint32_t  p_90, struct S5 * p_1124)
{ /* block id: 25 */
    int8_t ***l_106 = (void*)0;
    int8_t ***l_111[8][5] = {{&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109},{&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109},{&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109},{&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109},{&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109},{&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109},{&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109},{&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109,&p_1124->g_109}};
    int32_t l_123 = 0x44AAF27CL;
    int32_t l_165 = 0x3466FEBEL;
    int i, j;
lbl_176:
    (*p_1124->g_108) = &p_89;
    p_1124->g_112[0][5][1] = ((*p_1124->g_108) = &p_89);
    if ((safe_sub_func_int32_t_s_s((-1L), (safe_div_func_int32_t_s_s(p_1124->g_104, (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((((void*)0 != (*p_1124->g_108)) , (safe_div_func_int16_t_s_s(p_1124->g_57, (-1L)))), 0)), (65529UL | (l_123 <= ((safe_div_func_uint8_t_u_u(p_88, 0x19L)) <= 0x350BB117L))))))))))
    { /* block id: 29 */
        int32_t *l_126[1];
        int8_t *l_145 = &p_1124->g_57;
        union U2 *l_177 = &p_1124->g_178;
        int i;
        for (i = 0; i < 1; i++)
            l_126[i] = (void*)0;
        p_1124->g_128++;
        for (p_1124->g_102.f0 = 0; (p_1124->g_102.f0 <= 18); ++p_1124->g_102.f0)
        { /* block id: 33 */
            int32_t *l_158[10] = {&p_1124->g_127,&p_1124->g_127,&p_1124->g_127,&p_1124->g_127,&p_1124->g_127,&p_1124->g_127,&p_1124->g_127,&p_1124->g_127,&p_1124->g_127,&p_1124->g_127};
            int i;
            for (p_1124->g_127 = 4; (p_1124->g_127 >= 0); p_1124->g_127 -= 1)
            { /* block id: 36 */
                uint64_t *l_148 = &p_1124->g_149;
                int64_t *l_161[8][1][7] = {{{&p_1124->g_162,(void*)0,&p_1124->g_162,&p_1124->g_162,&p_1124->g_162,(void*)0,&p_1124->g_162}},{{&p_1124->g_162,(void*)0,&p_1124->g_162,&p_1124->g_162,&p_1124->g_162,(void*)0,&p_1124->g_162}},{{&p_1124->g_162,(void*)0,&p_1124->g_162,&p_1124->g_162,&p_1124->g_162,(void*)0,&p_1124->g_162}},{{&p_1124->g_162,(void*)0,&p_1124->g_162,&p_1124->g_162,&p_1124->g_162,(void*)0,&p_1124->g_162}},{{&p_1124->g_162,(void*)0,&p_1124->g_162,&p_1124->g_162,&p_1124->g_162,(void*)0,&p_1124->g_162}},{{&p_1124->g_162,(void*)0,&p_1124->g_162,&p_1124->g_162,&p_1124->g_162,(void*)0,&p_1124->g_162}},{{&p_1124->g_162,(void*)0,&p_1124->g_162,&p_1124->g_162,&p_1124->g_162,(void*)0,&p_1124->g_162}},{{&p_1124->g_162,(void*)0,&p_1124->g_162,&p_1124->g_162,&p_1124->g_162,(void*)0,&p_1124->g_162}}};
                int32_t l_163 = 0x06DE445EL;
                int i, j, k;
                ++p_1124->g_133;
                for (p_88 = 1; (p_88 >= 0); p_88 -= 1)
                { /* block id: 40 */
                    p_1124->g_136[4] = 0L;
                }
                p_1124->g_150 = (p_88 > ((*l_148) = (safe_mod_func_int32_t_s_s((0x69BD5AD9A11D30D0L > (~(safe_lshift_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u(0x83FA7B11L, 1UL)) > ((p_1124->g_136[4] , l_145) != (void*)0)) == ((((*p_1124->g_108) != ((safe_lshift_func_uint16_t_u_s(p_88, 0)) , &p_1124->g_110)) >= p_90) || 4UL)) ^ 0x4141L), 3)))), p_1124->g_57))));
                l_163 = ((p_1124->g_136[4] = 2UL) & (safe_mul_func_uint8_t_u_u(p_88, (p_1124->g_153 , ((p_1124->g_162 = (0x030FL & (p_1124->g_154 , (safe_mod_func_int32_t_s_s((p_1124->g_157.f0 = ((p_1124->g_157 , ((void*)0 != l_158[7])) & (safe_lshift_func_uint16_t_u_u(p_1124->g_80, p_1124->g_149)))), p_1124->g_149))))) || 1UL)))));
                for (l_123 = 0; (l_123 <= 1); l_123 += 1)
                { /* block id: 51 */
                    if (p_88)
                        break;
                }
            }
            ++p_1124->g_166;
            p_1124->g_157.f0 = ((l_165 = (*p_89)) , (safe_add_func_int8_t_s_s((*p_89), ((((p_1124->g_171[1] , ((p_1124->g_80 > ((p_1124->g_171[1].f0 && p_90) == ((p_1124->g_136[4] , (safe_mod_func_uint16_t_u_u(((((l_145 = p_89) == (void*)0) > 0x0B2C2AFABCB02F55L) <= 0UL), p_88))) || 0x29L))) ^ p_1124->g_127)) <= 18446744073709551615UL) & 0x6DC25B180E96879FL) | (*p_89)))));
            for (p_1124->g_149 = 0; (p_1124->g_149 > 2); p_1124->g_149 = safe_add_func_int8_t_s_s(p_1124->g_149, 3))
            { /* block id: 61 */
                union U2 **l_179 = &l_177;
                if (l_123)
                    goto lbl_176;
                (*l_179) = l_177;
            }
        }
    }
    else
    { /* block id: 66 */
        union U2 *l_191 = &p_1124->g_178;
        int32_t l_214[4][3][10] = {{{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L},{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L},{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L}},{{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L},{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L},{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L}},{{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L},{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L},{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L}},{{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L},{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L},{0x0E9FEB48L,9L,1L,0x2FA85E07L,0x3EFE2CA5L,0L,(-3L),0x741705D9L,(-1L),0x61C1F154L}}};
        uint32_t l_233 = 0xBD247DEDL;
        int i, j, k;
        for (p_1124->g_102.f0 = 17; (p_1124->g_102.f0 >= 31); p_1124->g_102.f0++)
        { /* block id: 69 */
            union U2 *l_188[2];
            int32_t l_193 = 0x2DB6E062L;
            uint16_t l_197 = 65526UL;
            int i;
            for (i = 0; i < 2; i++)
                l_188[i] = (void*)0;
            (1 + 1);
        }
        for (p_1124->g_166 = 0; (p_1124->g_166 > 25); p_1124->g_166 = safe_add_func_uint8_t_u_u(p_1124->g_166, 5))
        { /* block id: 117 */
            if (p_88)
                break;
            for (p_1124->g_153.f1 = 17; (p_1124->g_153.f1 <= (-20)); --p_1124->g_153.f1)
            { /* block id: 121 */
                int32_t *l_264 = &l_214[3][1][0];
                (*p_1124->g_265) ^= ((*l_264) |= 0x245A9FDFL);
            }
        }
    }
    return p_1124->g_133;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S5 c_1125;
    struct S5* p_1124 = &c_1125;
    struct S5 c_1126 = {
        {65535UL,65535UL,65535UL}, // p_1124->g_9
        0x585FAFE4L, // p_1124->g_34
        1L, // p_1124->g_37
        0x56L, // p_1124->g_39
        0x7EL, // p_1124->g_57
        0x8014L, // p_1124->g_80
        {0}, // p_1124->g_91
        {0x32B8L}, // p_1124->g_102
        0xE8B735D4L, // p_1124->g_104
        (void*)0, // p_1124->g_107
        (void*)0, // p_1124->g_110
        &p_1124->g_110, // p_1124->g_109
        &p_1124->g_109, // p_1124->g_108
        {{{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0}},{{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0},{(void*)0,&p_1124->g_110,&p_1124->g_110,&p_1124->g_110,(void*)0,&p_1124->g_110,(void*)0}}}, // p_1124->g_112
        0L, // p_1124->g_127
        0x4FDBL, // p_1124->g_128
        0UL, // p_1124->g_133
        {0x803F40BDL,0x803F40BDL,0x803F40BDL,0x803F40BDL,0x803F40BDL}, // p_1124->g_136
        0x3ECD636229654766L, // p_1124->g_149
        1L, // p_1124->g_150
        {4294967291UL}, // p_1124->g_153
        {8UL}, // p_1124->g_154
        {0x08392A3DL}, // p_1124->g_157
        0x13916921F8CFEE4EL, // p_1124->g_162
        0L, // p_1124->g_164
        0x0D512875L, // p_1124->g_166
        {{0x7CBC24AEL},{0x7CBC24AEL}}, // p_1124->g_171
        {4294967294UL}, // p_1124->g_178
        {1UL}, // p_1124->g_190
        {{0xF3L,0x68L,0xF3L,0xF3L,0x68L},{0xF3L,0x68L,0xF3L,0xF3L,0x68L},{0xF3L,0x68L,0xF3L,0xF3L,0x68L},{0xF3L,0x68L,0xF3L,0xF3L,0x68L},{0xF3L,0x68L,0xF3L,0xF3L,0x68L},{0xF3L,0x68L,0xF3L,0xF3L,0x68L},{0xF3L,0x68L,0xF3L,0xF3L,0x68L}}, // p_1124->g_210
        {&p_1124->g_157.f0,&p_1124->g_157.f0,&p_1124->g_157.f0}, // p_1124->g_257
        &p_1124->g_150, // p_1124->g_265
        (void*)0, // p_1124->g_281
        &p_1124->g_281, // p_1124->g_280
        {{0x29BAADCFL}}, // p_1124->g_303
        (void*)0, // p_1124->g_305
        &p_1124->g_281, // p_1124->g_343
        {4294967295UL}, // p_1124->g_409
        &p_1124->g_150, // p_1124->g_433
        {-1L}, // p_1124->g_448
        {0x3109FEC3L,0x3109FEC3L,0x3109FEC3L,0x3109FEC3L,0x3109FEC3L}, // p_1124->g_471
        {{{7L},{7L}},{{7L},{7L}},{{7L},{7L}},{{7L},{7L}},{{7L},{7L}},{{7L},{7L}},{{7L},{7L}}}, // p_1124->g_476
        &p_1124->g_109, // p_1124->g_489
        0x4DE6DCB65591AF51L, // p_1124->g_504
        &p_1124->g_162, // p_1124->g_509
        {{{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}}},{{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}}},{{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}}},{{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}}},{{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}}},{{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}}},{{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}},{{0xB8DD6F39L}}}}, // p_1124->g_512
        &p_1124->g_448.f0, // p_1124->g_521
        {{{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521},{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521}},{{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521},{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521}},{{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521},{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521}},{{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521},{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521}},{{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521},{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521}},{{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521},{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521}},{{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521},{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521}},{{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521},{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521}},{{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521},{&p_1124->g_521,&p_1124->g_521,&p_1124->g_521,(void*)0,&p_1124->g_521,&p_1124->g_521}}}, // p_1124->g_520
        {&p_1124->g_257[1],&p_1124->g_257[1],&p_1124->g_257[1]}, // p_1124->g_529
        0xDFL, // p_1124->g_530
        {0}, // p_1124->g_533
        &p_1124->g_533, // p_1124->g_535
        &p_1124->g_535, // p_1124->g_534
        0x0A03L, // p_1124->g_545
        0xEDL, // p_1124->g_596
        (void*)0, // p_1124->g_597
        &p_1124->g_166, // p_1124->g_603
        &p_1124->g_603, // p_1124->g_602
        &p_1124->g_602, // p_1124->g_601
        0x3B3546C2L, // p_1124->g_605
        0x5790L, // p_1124->g_676
        (void*)0, // p_1124->g_685
        {&p_1124->g_685,&p_1124->g_685,&p_1124->g_685,&p_1124->g_685}, // p_1124->g_684
        {{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0},{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0},{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0},{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0},{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0},{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0},{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0},{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0},{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0},{&p_1124->g_685,(void*)0,&p_1124->g_685,(void*)0}}, // p_1124->g_686
        0x88L, // p_1124->g_751
        {0}, // p_1124->g_758
        {&p_1124->g_164}, // p_1124->g_762
        {0UL}, // p_1124->g_763
        {0}, // p_1124->g_764
        {{{4294967290UL},{0xE4F19341L},{0UL}},{{4294967290UL},{0xE4F19341L},{0UL}},{{4294967290UL},{0xE4F19341L},{0UL}},{{4294967290UL},{0xE4F19341L},{0UL}},{{4294967290UL},{0xE4F19341L},{0UL}},{{4294967290UL},{0xE4F19341L},{0UL}},{{4294967290UL},{0xE4F19341L},{0UL}},{{4294967290UL},{0xE4F19341L},{0UL}},{{4294967290UL},{0xE4F19341L},{0UL}}}, // p_1124->g_767
        (void*)0, // p_1124->g_777
        0x0EL, // p_1124->g_807
        {0x368DF145L}, // p_1124->g_821
        {0x2BD39B9DL}, // p_1124->g_824
        {0x343CEB97L}, // p_1124->g_841
        {0x0998A47CL}, // p_1124->g_867
        {{4294967295UL},{4294967295UL}}, // p_1124->g_868
        {{{8UL}},{{8UL}},{{8UL}},{{8UL}},{{8UL}}}, // p_1124->g_871
        {{0xA6BC744EL},{0xA6BC744EL},{0xA6BC744EL},{0xA6BC744EL},{0xA6BC744EL},{0xA6BC744EL}}, // p_1124->g_875
        0x0B6EL, // p_1124->g_905
        {0xCDD90108L}, // p_1124->g_915
        {4294967290UL}, // p_1124->g_980
        {(void*)0}, // p_1124->g_998
        (void*)0, // p_1124->g_1042
        &p_1124->g_1042, // p_1124->g_1041
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1124->g_1053
        {{{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]},{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]},{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]},{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]},{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]}},{{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]},{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]},{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]},{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]},{&p_1124->g_1053[3],(void*)0,&p_1124->g_1053[1],&p_1124->g_1053[0],(void*)0,&p_1124->g_1053[0],&p_1124->g_1053[1],(void*)0,&p_1124->g_1053[3]}}}, // p_1124->g_1052
        (void*)0, // p_1124->g_1065
        {{{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2}},{{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2}},{{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2}},{{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2}},{{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2}},{{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2},{(void*)0,&p_1124->g_153.f2}}}, // p_1124->g_1074
        (void*)0, // p_1124->g_1080
        {0x2BFC6614L}, // p_1124->g_1086
        1L, // p_1124->g_1101
        (void*)0, // p_1124->g_1118
        {0UL}, // p_1124->g_1122
        {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}, // p_1124->g_1123
    };
    c_1125 = c_1126;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1124);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1124->g_9[i], "p_1124->g_9[i]", print_hash_value);

    }
    transparent_crc(p_1124->g_34, "p_1124->g_34", print_hash_value);
    transparent_crc(p_1124->g_37, "p_1124->g_37", print_hash_value);
    transparent_crc(p_1124->g_39, "p_1124->g_39", print_hash_value);
    transparent_crc(p_1124->g_57, "p_1124->g_57", print_hash_value);
    transparent_crc(p_1124->g_80, "p_1124->g_80", print_hash_value);
    transparent_crc(p_1124->g_102.f0, "p_1124->g_102.f0", print_hash_value);
    transparent_crc(p_1124->g_104, "p_1124->g_104", print_hash_value);
    transparent_crc(p_1124->g_127, "p_1124->g_127", print_hash_value);
    transparent_crc(p_1124->g_128, "p_1124->g_128", print_hash_value);
    transparent_crc(p_1124->g_133, "p_1124->g_133", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1124->g_136[i], "p_1124->g_136[i]", print_hash_value);

    }
    transparent_crc(p_1124->g_149, "p_1124->g_149", print_hash_value);
    transparent_crc(p_1124->g_150, "p_1124->g_150", print_hash_value);
    transparent_crc(p_1124->g_154.f0, "p_1124->g_154.f0", print_hash_value);
    transparent_crc(p_1124->g_162, "p_1124->g_162", print_hash_value);
    transparent_crc(p_1124->g_164, "p_1124->g_164", print_hash_value);
    transparent_crc(p_1124->g_166, "p_1124->g_166", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1124->g_171[i].f0, "p_1124->g_171[i].f0", print_hash_value);

    }
    transparent_crc(p_1124->g_178.f0, "p_1124->g_178.f0", print_hash_value);
    transparent_crc(p_1124->g_190.f0, "p_1124->g_190.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1124->g_210[i][j], "p_1124->g_210[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1124->g_303[i].f0, "p_1124->g_303[i].f0", print_hash_value);

    }
    transparent_crc(p_1124->g_409.f0, "p_1124->g_409.f0", print_hash_value);
    transparent_crc(p_1124->g_448.f0, "p_1124->g_448.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1124->g_471[i], "p_1124->g_471[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1124->g_476[i][j].f0, "p_1124->g_476[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1124->g_504, "p_1124->g_504", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1124->g_512[i][j][k].f0, "p_1124->g_512[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1124->g_530, "p_1124->g_530", print_hash_value);
    transparent_crc(p_1124->g_545, "p_1124->g_545", print_hash_value);
    transparent_crc(p_1124->g_596, "p_1124->g_596", print_hash_value);
    transparent_crc(p_1124->g_605, "p_1124->g_605", print_hash_value);
    transparent_crc(p_1124->g_676, "p_1124->g_676", print_hash_value);
    transparent_crc(p_1124->g_751, "p_1124->g_751", print_hash_value);
    transparent_crc(p_1124->g_763.f0, "p_1124->g_763.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1124->g_767[i][j].f0, "p_1124->g_767[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1124->g_807, "p_1124->g_807", print_hash_value);
    transparent_crc(p_1124->g_821.f0, "p_1124->g_821.f0", print_hash_value);
    transparent_crc(p_1124->g_824.f0, "p_1124->g_824.f0", print_hash_value);
    transparent_crc(p_1124->g_841.f0, "p_1124->g_841.f0", print_hash_value);
    transparent_crc(p_1124->g_867.f0, "p_1124->g_867.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1124->g_868[i].f0, "p_1124->g_868[i].f0", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1124->g_871[i][j].f0, "p_1124->g_871[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1124->g_875[i].f0, "p_1124->g_875[i].f0", print_hash_value);

    }
    transparent_crc(p_1124->g_905, "p_1124->g_905", print_hash_value);
    transparent_crc(p_1124->g_915.f0, "p_1124->g_915.f0", print_hash_value);
    transparent_crc(p_1124->g_980.f0, "p_1124->g_980.f0", print_hash_value);
    transparent_crc(p_1124->g_1086.f0, "p_1124->g_1086.f0", print_hash_value);
    transparent_crc(p_1124->g_1101, "p_1124->g_1101", print_hash_value);
    transparent_crc(p_1124->g_1122.f0, "p_1124->g_1122.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1124->g_1123[i].f0, "p_1124->g_1123[i].f0", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
