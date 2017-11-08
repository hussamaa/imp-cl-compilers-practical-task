// -g 41,19,5 -l 41,1,1
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


// Seed: 1540100356

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int16_t g_2[4];
    volatile int32_t g_3;
    int32_t g_19[10][5][5];
    int32_t g_23;
    int8_t g_58;
    int32_t g_64[2];
    int64_t g_67;
    int32_t g_68;
    uint32_t g_70;
    uint32_t g_95;
    uint8_t g_99[5][2];
    uint32_t g_115[3][8];
    uint32_t g_118;
    uint16_t g_121;
    uint64_t g_136;
    int16_t * volatile g_148;
    int16_t * volatile *g_147[8];
    int16_t * volatile ** volatile g_149;
    volatile uint64_t g_177[9][7];
    uint32_t g_183;
    int32_t * volatile g_187;
    int16_t g_202;
    uint16_t *g_241;
    uint16_t ** volatile g_240;
    uint8_t g_248;
    volatile uint16_t g_274[2];
    volatile int8_t g_292[6];
    volatile uint32_t g_293;
    uint64_t g_318;
    uint16_t g_350[4][6];
    volatile int8_t g_379[8][8];
    uint32_t g_381;
    volatile int8_t g_403;
    volatile int8_t *g_402;
    volatile int32_t g_416;
    uint16_t g_420;
    uint8_t g_423;
    volatile uint64_t g_439;
    volatile int16_t g_442;
    int64_t g_444;
    int8_t g_446;
    int8_t g_447[5][10][5];
    int16_t g_448[10][8][3];
    uint64_t g_449[2];
    int32_t * volatile *g_484;
    volatile uint32_t g_498;
    volatile int16_t g_549[7];
    int32_t g_550[2];
    int32_t * volatile ** volatile g_584;
    uint8_t g_618;
    uint32_t g_664;
    int32_t g_701;
    int32_t *g_703;
    int32_t ** volatile g_702;
    int64_t *g_733;
    int32_t ** volatile g_763;
    volatile uint32_t g_787[4];
    int32_t *g_808;
    int32_t **g_807;
    uint8_t *g_822;
    uint16_t **g_873;
    uint16_t ***g_872[8];
    volatile int8_t **g_929;
    volatile int8_t *** volatile g_928;
    uint8_t g_992;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S0 * p_995);
uint16_t  func_4(uint32_t  p_5, int8_t  p_6, uint16_t  p_7, struct S0 * p_995);
int8_t  func_13(uint16_t  p_14, uint32_t  p_15, int16_t  p_16, uint64_t  p_17, struct S0 * p_995);
uint8_t  func_30(int8_t  p_31, int16_t  p_32, uint16_t  p_33, struct S0 * p_995);
uint8_t  func_40(uint32_t  p_41, int64_t  p_42, int64_t  p_43, int16_t * p_44, int32_t * p_45, struct S0 * p_995);
uint8_t  func_49(uint64_t  p_50, int16_t * p_51, int16_t * p_52, int16_t * p_53, struct S0 * p_995);
int16_t * func_55(int32_t  p_56, struct S0 * p_995);
uint8_t  func_77(uint8_t  p_78, int32_t * p_79, int64_t  p_80, int8_t  p_81, int8_t * p_82, struct S0 * p_995);
int32_t * func_83(int8_t * p_84, int32_t  p_85, uint64_t  p_86, uint32_t  p_87, uint64_t  p_88, struct S0 * p_995);
int8_t * func_89(int64_t  p_90, int32_t  p_91, uint16_t  p_92, struct S0 * p_995);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_995->g_2 p_995->g_3 p_995->g_23 p_995->g_19 p_995->g_402 p_995->g_403 p_995->g_293 p_995->g_787 p_995->g_928 p_995->g_68 p_995->g_187 p_995->g_118 p_995->g_121 p_995->g_702 p_995->g_703 p_995->g_550 p_995->g_292 p_995->g_115 p_995->g_992 p_995->g_822 p_995->g_618
 * writes: p_995->g_3 p_995->g_2 p_995->g_19 p_995->g_23 p_995->g_929 p_995->g_68 p_995->g_118 p_995->g_121 p_995->g_550 p_995->g_992
 */
uint16_t  func_1(struct S0 * p_995)
{ /* block id: 4 */
    int32_t l_10 = 0x7AC12265L;
    int32_t *l_18 = &p_995->g_19[1][2][3];
    int16_t *l_22 = (void*)0;
    uint16_t l_927 = 0x31F0L;
    uint8_t l_973 = 255UL;
    uint16_t l_990[8][2] = {{65533UL,65533UL},{65533UL,65533UL},{65533UL,65533UL},{65533UL,65533UL},{65533UL,65533UL},{65533UL,65533UL},{65533UL,65533UL},{65533UL,65533UL}};
    int8_t *l_991[8];
    int32_t *l_993 = &p_995->g_23;
    int32_t l_994[5];
    int i, j;
    for (i = 0; i < 8; i++)
        l_991[i] = &p_995->g_58;
    for (i = 0; i < 5; i++)
        l_994[i] = 0x010D1DFFL;
    for (p_995->g_3 = 0; p_995->g_3 < 4; p_995->g_3 += 1)
    {
        p_995->g_2[p_995->g_3] = (-1L);
    }
    (*p_995->g_703) &= (func_4((((safe_div_func_uint32_t_u_u(((6L != l_10) < (safe_add_func_int16_t_s_s((l_10 && func_13(p_995->g_2[1], p_995->g_3, (p_995->g_23 |= (((*l_18) = (0x6729694DL > 0x77919ADBL)) == (safe_mul_func_uint8_t_u_u(p_995->g_2[1], p_995->g_2[1])))), p_995->g_2[2], p_995)), 0L))), 4294967295UL)) , p_995->g_293) || p_995->g_787[1]), l_927, l_10, p_995) < l_10);
    (*p_995->g_703) ^= l_973;
    (*l_993) ^= ((safe_rshift_func_uint16_t_u_u((p_995->g_292[4] , ((safe_div_func_int8_t_s_s((~(safe_sub_func_int32_t_s_s((*p_995->g_703), 0xFEAAFAC1L))), ((p_995->g_992 &= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((*l_18), ((!(((safe_lshift_func_uint8_t_u_u((*l_18), 1)) != ((safe_div_func_uint32_t_u_u(p_995->g_115[1][3], (-1L))) , (((safe_div_func_uint64_t_u_u(l_990[4][1], 0xB2BB0FDEBD6C8AFFL)) , 0x1FB557B6L) < p_995->g_787[0]))) < (-1L))) , 0x615932C1L))), 1))) && 0x46L))) | (*p_995->g_822))), 7)) || 0xF4ECL);
    return l_994[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_995->g_928 p_995->g_68 p_995->g_187 p_995->g_118 p_995->g_121 p_995->g_702 p_995->g_703
 * writes: p_995->g_929 p_995->g_68 p_995->g_118 p_995->g_121
 */
uint16_t  func_4(uint32_t  p_5, int8_t  p_6, uint16_t  p_7, struct S0 * p_995)
{ /* block id: 427 */
    int32_t l_930 = 6L;
    int16_t *l_936 = &p_995->g_2[0];
    int32_t l_946 = 1L;
    int32_t **l_967[3];
    int i;
    for (i = 0; i < 3; i++)
        l_967[i] = &p_995->g_808;
    (*p_995->g_928) = &p_995->g_402;
    l_930 ^= 0x23111273L;
    for (p_995->g_68 = 3; (p_995->g_68 >= 0); p_995->g_68 -= 1)
    { /* block id: 432 */
        uint32_t l_944 = 4294967295UL;
        int16_t l_947[10][1] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
        int32_t l_948 = 0x48BF5050L;
        uint16_t l_952 = 65534UL;
        int i, j;
        if ((*p_995->g_187))
            break;
        for (p_995->g_118 = 0; (p_995->g_118 <= 3); p_995->g_118 += 1)
        { /* block id: 436 */
            int16_t **l_937 = (void*)0;
            int16_t *l_939 = &p_995->g_448[3][2][0];
            int16_t **l_938 = &l_939;
            uint32_t *l_945 = (void*)0;
            int32_t l_949 = 0x0909318AL;
            int32_t **l_950 = &p_995->g_703;
            int i, j;
            (1 + 1);
        }
    }
    for (p_995->g_121 = 0; (p_995->g_121 <= 35); p_995->g_121++)
    { /* block id: 464 */
        int32_t *l_972 = &p_995->g_23;
        l_972 = (*p_995->g_702);
    }
    return l_930;
}


/* ------------------------------------------ */
/* 
 * reads : p_995->g_19 p_995->g_402 p_995->g_403
 * writes: p_995->g_19
 */
int8_t  func_13(uint16_t  p_14, uint32_t  p_15, int16_t  p_16, uint64_t  p_17, struct S0 * p_995)
{ /* block id: 8 */
    int32_t l_48 = 4L;
    int16_t l_700 = (-10L);
    int32_t l_715 = 9L;
    uint32_t *l_718 = &p_995->g_95;
    uint32_t *l_721 = &p_995->g_95;
    uint8_t l_762[5][7][7] = {{{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL}},{{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL}},{{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL}},{{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL}},{{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL},{0x81L,0UL,0UL,0x81L,0x81L,0UL,0UL}}};
    int8_t *l_811 = &p_995->g_447[3][5][0];
    int64_t l_819 = 0L;
    int8_t l_915 = (-10L);
    uint16_t *l_916 = &p_995->g_121;
    int32_t l_917 = (-1L);
    int32_t l_919 = 0L;
    int32_t l_921 = 0x0FDE6447L;
    int32_t l_922[9] = {0L,0x512FEC98L,0L,0L,0x512FEC98L,0L,0L,0x512FEC98L,0L};
    int i, j, k;
    for (p_14 = 0; (p_14 == 21); p_14++)
    { /* block id: 11 */
        uint64_t l_26[3];
        int32_t *l_27[5];
        int16_t *l_54 = &p_995->g_2[2];
        int8_t *l_57 = &p_995->g_58;
        int32_t *l_63 = &p_995->g_64[0];
        uint16_t **l_743 = &p_995->g_241;
        int32_t **l_783 = &l_27[1];
        int32_t ***l_782 = &l_783;
        int32_t l_786 = (-9L);
        int32_t l_789 = 0x626E72ECL;
        int32_t l_838 = 0x348ADC13L;
        uint16_t l_851 = 0x6158L;
        int16_t **l_862[7][6][1] = {{{&l_54},{&l_54},{&l_54},{&l_54},{&l_54},{&l_54}},{{&l_54},{&l_54},{&l_54},{&l_54},{&l_54},{&l_54}},{{&l_54},{&l_54},{&l_54},{&l_54},{&l_54},{&l_54}},{{&l_54},{&l_54},{&l_54},{&l_54},{&l_54},{&l_54}},{{&l_54},{&l_54},{&l_54},{&l_54},{&l_54},{&l_54}},{{&l_54},{&l_54},{&l_54},{&l_54},{&l_54},{&l_54}},{{&l_54},{&l_54},{&l_54},{&l_54},{&l_54},{&l_54}}};
        int16_t ***l_861[9] = {&l_862[2][3][0],&l_862[2][3][0],&l_862[2][3][0],&l_862[2][3][0],&l_862[2][3][0],&l_862[2][3][0],&l_862[2][3][0],&l_862[2][3][0],&l_862[2][3][0]};
        uint8_t l_867 = 251UL;
        int32_t l_883 = (-10L);
        int32_t l_914[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_26[i] = 0UL;
        for (i = 0; i < 5; i++)
            l_27[i] = &p_995->g_23;
        p_995->g_19[1][2][3] |= l_26[0];
    }
    return (*p_995->g_402);
}


/* ------------------------------------------ */
/* 
 * reads : p_995->g_115
 * writes:
 */
uint8_t  func_30(int8_t  p_31, int16_t  p_32, uint16_t  p_33, struct S0 * p_995)
{ /* block id: 322 */
    int32_t *l_704 = &p_995->g_68;
    int32_t *l_705 = &p_995->g_19[3][3][0];
    int32_t *l_706 = &p_995->g_550[0];
    int32_t *l_707 = &p_995->g_19[1][2][3];
    int32_t *l_708 = &p_995->g_23;
    int32_t *l_709 = (void*)0;
    int32_t l_710 = (-10L);
    int32_t *l_711[10][2] = {{(void*)0,&p_995->g_550[1]},{(void*)0,&p_995->g_550[1]},{(void*)0,&p_995->g_550[1]},{(void*)0,&p_995->g_550[1]},{(void*)0,&p_995->g_550[1]},{(void*)0,&p_995->g_550[1]},{(void*)0,&p_995->g_550[1]},{(void*)0,&p_995->g_550[1]},{(void*)0,&p_995->g_550[1]},{(void*)0,&p_995->g_550[1]}};
    uint8_t l_712 = 255UL;
    int i, j;
    l_712--;
    return p_995->g_115[0][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_995->g_702 p_995->g_379
 * writes: p_995->g_703
 */
uint8_t  func_40(uint32_t  p_41, int64_t  p_42, int64_t  p_43, int16_t * p_44, int32_t * p_45, struct S0 * p_995)
{ /* block id: 319 */
    (*p_995->g_702) = p_45;
    return p_995->g_379[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_995->g_423 p_995->g_2 p_995->g_187 p_995->g_68 p_995->g_99 p_995->g_121 p_995->g_136 p_995->g_442 p_995->g_95 p_995->g_248 p_995->g_664 p_995->g_241 p_995->g_202 p_995->g_19 p_995->g_67 p_995->g_448 p_995->g_64 p_995->g_449 p_995->g_416 p_995->g_23 p_995->g_115 p_995->g_3 p_995->g_58 p_995->g_118 p_995->g_147 p_995->g_149 p_995->g_148 p_995->g_177 p_995->g_183 p_995->g_381 p_995->g_618
 * writes: p_995->g_423 p_995->g_68 p_995->g_136 p_995->g_95 p_995->g_447 p_995->g_64 p_995->g_67 p_995->g_23 p_995->g_121 p_995->g_58 p_995->g_147 p_995->g_2 p_995->g_177 p_995->g_183 p_995->g_99
 */
uint8_t  func_49(uint64_t  p_50, int16_t * p_51, int16_t * p_52, int16_t * p_53, struct S0 * p_995)
{ /* block id: 288 */
    int64_t l_633 = 0x110F6E1DBFD68D6EL;
    uint64_t l_679 = 0x78A6306044CDD330L;
    uint32_t l_685 = 4294967295UL;
    for (p_995->g_423 = 0; (p_995->g_423 <= 3); p_995->g_423 += 1)
    { /* block id: 291 */
        int32_t l_636[8];
        int32_t *l_637 = (void*)0;
        int32_t *l_638 = &p_995->g_68;
        int64_t l_678 = 0x1DE511B7F0B2F821L;
        int i;
        for (i = 0; i < 8; i++)
            l_636[i] = 0x56BE35E7L;
        (*l_638) = (safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((0x1C27L <= (((safe_div_func_uint32_t_u_u(p_995->g_2[p_995->g_423], (*p_995->g_187))) == (safe_mul_func_int16_t_s_s((((safe_div_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s((-10L), l_633)) | ((p_995->g_2[p_995->g_423] < l_633) && (safe_sub_func_int64_t_s_s(p_995->g_99[0][1], p_995->g_2[p_995->g_423])))), l_633)) , 0x08L) < l_633), (*p_52)))) >= p_50)), 9UL)) ^ l_636[3]), p_50));
        for (p_995->g_136 = 0; (p_995->g_136 <= 3); p_995->g_136 += 1)
        { /* block id: 295 */
            uint32_t *l_645 = (void*)0;
            uint32_t *l_646 = &p_995->g_95;
            int8_t *l_663 = &p_995->g_447[1][8][2];
            int32_t l_665 = 0x1011149AL;
            int32_t l_696 = 0x5C87CF69L;
            (*l_638) = ((safe_lshift_func_uint8_t_u_u((0xCD6FL > (8L <= (safe_lshift_func_uint8_t_u_u(p_995->g_442, 3)))), (safe_lshift_func_int8_t_s_u(((((*l_646)--) >= ((safe_rshift_func_uint8_t_u_s(((((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(p_995->g_248, (safe_rshift_func_uint8_t_u_s(((p_50 && 4294967290UL) > l_633), (safe_rshift_func_int8_t_s_u((((((*l_663) = (l_645 != l_638)) , (*p_51)) | p_995->g_664) & (*p_995->g_241)), 6)))))), p_50)) , (*p_53)), 10)), 0x05L)) < p_995->g_248) == l_665) ^ 0xFAC087C24AACE16EL), p_995->g_19[1][2][3])) | p_50)) , p_50), p_50)))) <= (-9L));
            if (l_665)
                continue;
            for (p_995->g_67 = 0; (p_995->g_67 <= 2); p_995->g_67 += 1)
            { /* block id: 302 */
                int32_t **l_680[4][6][8] = {{{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637}},{{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637}},{{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637}},{{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637},{&l_638,&l_637,&l_637,&l_637,&l_638,&l_638,&l_637,&l_637}}};
                int i, j, k;
                l_665 = (safe_mul_func_uint16_t_u_u((p_995->g_448[(p_995->g_136 + 1)][(p_995->g_136 + 1)][p_995->g_67] != (safe_sub_func_int64_t_s_s((~p_50), (((0x280FC81DL < p_50) && (safe_rshift_func_int8_t_s_u(((l_638 = func_83(func_89((*l_638), (((p_995->g_449[0] || ((p_50 <= ((((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((((l_633 || (safe_add_func_int32_t_s_s(l_665, 0x1F19AA6FL))) , p_995->g_416) , 65535UL), 11)), (*p_995->g_241))) & p_995->g_448[(p_995->g_136 + 1)][(p_995->g_136 + 1)][p_995->g_67]) || (*l_638)) >= 9UL)) , 0x2A35B657DEF8277FL)) && 0x28AFL) <= p_995->g_99[2][0]), p_50, p_995), p_995->g_448[(p_995->g_136 + 1)][(p_995->g_136 + 1)][p_995->g_67], l_665, l_678, l_679, p_995)) == (void*)0), p_995->g_136))) , l_665)))), p_50));
                (*p_995->g_187) = l_633;
                l_696 ^= (((safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((-10L), l_685)) & ((*l_663) = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((l_638 != l_645) < p_995->g_381), (safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(l_665, (((p_995->g_618 >= p_50) <= (p_995->g_99[0][1] &= 1UL)) == (*p_995->g_148)))), 0x29B4L)))), p_50)), (*p_51))))), p_50)) , 0x43L) , 5L);
            }
        }
    }
    for (p_995->g_68 = 0; (p_995->g_68 <= (-1)); --p_995->g_68)
    { /* block id: 314 */
        int64_t l_699 = 0x1FD4453C1CD8C921L;
        return l_699;
    }
    return l_685;
}


/* ------------------------------------------ */
/* 
 * reads : p_995->g_70 p_995->g_95 p_995->g_23 p_995->g_58 p_995->g_67 p_995->g_3 p_995->g_68 p_995->g_115 p_995->g_64 p_995->g_118 p_995->g_99 p_995->g_136 p_995->g_19 p_995->g_147 p_995->g_149 p_995->g_148 p_995->g_2 p_995->g_121 p_995->g_177 p_995->g_183 p_995->g_448 p_995->g_187 p_995->g_402 p_995->g_403 p_995->g_241 p_995->g_420 p_995->g_584 p_995->g_416
 * writes: p_995->g_70 p_995->g_95 p_995->g_99 p_995->g_115 p_995->g_118 p_995->g_23 p_995->g_121 p_995->g_68 p_995->g_58 p_995->g_147 p_995->g_2 p_995->g_177 p_995->g_183 p_995->g_67 p_995->g_448 p_995->g_420 p_995->g_484 p_995->g_618
 */
int16_t * func_55(int32_t  p_56, struct S0 * p_995)
{ /* block id: 15 */
    int32_t *l_65 = &p_995->g_23;
    int32_t *l_66[5];
    int64_t l_69[10][4] = {{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L},{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L},{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L},{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L},{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L},{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L},{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L},{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L},{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L},{0x7A0786CB52F506A5L,0x0698381653144D99L,0x0698381653144D99L,0x7A0786CB52F506A5L}};
    uint8_t *l_98[1];
    uint32_t l_113 = 4294967291UL;
    uint32_t *l_114 = &p_995->g_115[0][3];
    uint32_t *l_116 = (void*)0;
    uint32_t *l_117[8] = {&p_995->g_118,&p_995->g_118,&p_995->g_118,&p_995->g_118,&p_995->g_118,&p_995->g_118,&p_995->g_118,&p_995->g_118};
    uint64_t l_119[2];
    uint16_t *l_120 = &p_995->g_121;
    uint8_t l_551[7][7][2] = {{{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL}},{{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL}},{{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL}},{{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL}},{{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL}},{{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL}},{{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL},{255UL,248UL}}};
    int8_t l_564 = 0x23L;
    uint32_t l_581[10][4] = {{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL},{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL},{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL},{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL},{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL},{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL},{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL},{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL},{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL},{0x0A122AE4L,0x0A122AE4L,8UL,4294967295UL}};
    uint8_t l_614 = 0x1DL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_66[i] = &p_995->g_23;
    for (i = 0; i < 1; i++)
        l_98[i] = &p_995->g_99[0][1];
    for (i = 0; i < 2; i++)
        l_119[i] = 18446744073709551615UL;
    --p_995->g_70;
    if ((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(func_77(p_56, func_83(func_89((safe_mul_func_uint8_t_u_u((p_995->g_99[0][0] = (p_995->g_95++)), (safe_sub_func_int32_t_s_s(8L, (safe_mod_func_int16_t_s_s(5L, (safe_div_func_uint16_t_u_u((!(safe_add_func_uint16_t_u_u(((*l_120) = ((p_56 , ((((p_995->g_23 || (safe_rshift_func_uint16_t_u_u(((*l_65) = (((((p_995->g_118 = ((*l_114) = ((((safe_unary_minus_func_uint64_t_u(((l_98[0] == (((((((((safe_add_func_uint32_t_u_u(((((p_995->g_58 ^ 0xE4L) , (l_66[2] != (void*)0)) < p_995->g_58) , p_995->g_70), p_56)) < p_995->g_23) | p_995->g_67) == 1L) ^ p_995->g_3) >= (*l_65)) > 0x1F87L) , (*l_65)) , (void*)0)) == p_995->g_68))) < l_113) , 0x65AFL) > p_995->g_23))) , l_119[1]) , p_995->g_115[2][5]) , (*l_65)) && p_56)), 8))) & 0x00A9L) >= p_995->g_64[0]) , p_56)) & p_56)), p_995->g_64[1]))), p_56)))))))), p_56, p_995->g_70, p_995), p_995->g_19[1][2][3], p_995->g_67, p_995->g_70, p_56, p_995), p_56, p_995->g_64[1], l_98[0], p_995), p_56)), 8)))
    { /* block id: 249 */
        uint16_t l_535 = 0UL;
        ++l_535;
    }
    else
    { /* block id: 251 */
        uint32_t *l_541[6][4] = {{(void*)0,(void*)0,&l_113,(void*)0},{(void*)0,(void*)0,&l_113,(void*)0},{(void*)0,(void*)0,&l_113,(void*)0},{(void*)0,(void*)0,&l_113,(void*)0},{(void*)0,(void*)0,&l_113,(void*)0},{(void*)0,(void*)0,&l_113,(void*)0}};
        uint32_t **l_540 = &l_541[3][3];
        int32_t *l_544[5];
        int16_t *l_545 = (void*)0;
        int16_t *l_546 = (void*)0;
        int16_t *l_547 = &p_995->g_448[2][5][2];
        int64_t *l_548 = &l_69[5][3];
        int32_t l_617[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int i, j;
        for (i = 0; i < 5; i++)
            l_544[i] = (void*)0;
        (*p_995->g_187) = (safe_add_func_uint32_t_u_u(((1UL ^ (p_995->g_67 = p_56)) < (&p_995->g_95 != ((*l_540) = &p_995->g_95))), (((*l_548) &= ((((safe_sub_func_uint16_t_u_u(p_56, (*l_65))) , l_544[3]) != (void*)0) != ((((*l_547) |= (*p_995->g_148)) >= 0xB8A1L) , 0x4C06L))) & p_56)));
        l_551[3][6][0]--;
        if ((p_56 = ((*p_995->g_187) = ((safe_rshift_func_uint8_t_u_s((&p_995->g_241 != ((((-4L) != (safe_sub_func_int16_t_s_s(0L, ((((p_995->g_67 <= (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(p_995->g_19[1][2][3], (l_564 = (p_56 | ((*l_65) = (((safe_mul_func_uint8_t_u_u((*l_65), (*p_995->g_402))) < (p_995->g_2[2] & 0xD40CE98A5E33AD69L)) & 0x2D335A42762CF80EL)))))), (*p_995->g_241)))) <= 0x5C89L) <= p_995->g_64[0]) > p_56)))) & (-8L)) , (void*)0)), p_56)) > p_56))))
        { /* block id: 262 */
            int32_t l_577 = 0x09BF8CCCL;
            int32_t l_578 = (-8L);
            int32_t l_579 = 0x0438359BL;
            int32_t l_580 = 8L;
            for (p_995->g_420 = 0; (p_995->g_420 == 10); ++p_995->g_420)
            { /* block id: 265 */
                uint32_t l_573 = 0xA3B798B4L;
                int32_t l_576 = 0x7CD09963L;
                l_576 = (safe_mul_func_uint16_t_u_u(((~0xFBL) > p_995->g_448[6][7][1]), (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((-1L) && 1UL), 2)), ((0x97053CCEL != (((*p_995->g_241) >= (((*l_65) = p_56) | (l_573 || (safe_mul_func_uint16_t_u_u((p_56 < 0x32D3C5C4L), p_56))))) > l_573)) != p_56)))));
            }
            ++l_581[8][2];
            (*p_995->g_584) = &p_995->g_187;
        }
        else
        { /* block id: 271 */
            int32_t l_595 = 0x67BA0C65L;
            uint64_t *l_619[9] = {&l_119[1],&l_119[1],&l_119[1],&l_119[1],&l_119[1],&l_119[1],&l_119[1],&l_119[1],&l_119[1]};
            int32_t l_620 = (-1L);
            int i;
            for (p_56 = (-30); (p_56 <= 20); p_56 = safe_add_func_uint8_t_u_u(p_56, 6))
            { /* block id: 274 */
                int8_t *l_596 = &p_995->g_58;
                int32_t l_597 = 0x315905D6L;
                l_597 = (safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*p_995->g_241) |= (p_56 != (((*l_547) |= (((&p_995->g_381 == (void*)0) & (safe_mul_func_int16_t_s_s(1L, ((1L && (((-2L) | (safe_mod_func_int8_t_s_s((p_56 , ((*l_596) = l_595)), 254UL))) <= 18446744073709551606UL)) , p_56)))) >= 0UL)) < l_595))), 0x3871L)), p_56));
            }
            (*l_65) ^= ((l_620 ^= ((safe_mul_func_int16_t_s_s((p_995->g_618 = (5UL > (safe_sub_func_int16_t_s_s(l_595, (((*l_547) = 0x5AF2L) | (safe_div_func_int32_t_s_s((((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0x4DL, (((*l_548) = (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(l_614, 2)) ^ (safe_rshift_func_uint8_t_u_u(p_56, 7))) && (0x372415948F17AE14L <= (p_995->g_416 != ((0x805C8A6FL == l_617[5]) , p_995->g_136)))), p_995->g_19[1][2][3])), p_56))) & p_56))), 0x04L)) < l_595) && (-4L)), l_595))))))), l_595)) , p_56)) > p_995->g_2[3]);
        }
    }
    return l_120;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_77(uint8_t  p_78, int32_t * p_79, int64_t  p_80, int8_t  p_81, int8_t * p_82, struct S0 * p_995)
{ /* block id: 75 */
    int32_t l_186 = 0x2B746491L;
    uint32_t l_236 = 0xF7684E16L;
    int32_t l_239 = 7L;
    int32_t l_273 = 1L;
    int8_t *l_315 = (void*)0;
    int32_t *l_340[4][2][8] = {{{&p_995->g_19[1][3][1],&l_273,&l_239,&p_995->g_19[1][2][3],&l_273,&p_995->g_19[1][2][3],&l_239,&l_273},{&p_995->g_19[1][3][1],&l_273,&l_239,&p_995->g_19[1][2][3],&l_273,&p_995->g_19[1][2][3],&l_239,&l_273}},{{&p_995->g_19[1][3][1],&l_273,&l_239,&p_995->g_19[1][2][3],&l_273,&p_995->g_19[1][2][3],&l_239,&l_273},{&p_995->g_19[1][3][1],&l_273,&l_239,&p_995->g_19[1][2][3],&l_273,&p_995->g_19[1][2][3],&l_239,&l_273}},{{&p_995->g_19[1][3][1],&l_273,&l_239,&p_995->g_19[1][2][3],&l_273,&p_995->g_19[1][2][3],&l_239,&l_273},{&p_995->g_19[1][3][1],&l_273,&l_239,&p_995->g_19[1][2][3],&l_273,&p_995->g_19[1][2][3],&l_239,&l_273}},{{&p_995->g_19[1][3][1],&l_273,&l_239,&p_995->g_19[1][2][3],&l_273,&p_995->g_19[1][2][3],&l_239,&l_273},{&p_995->g_19[1][3][1],&l_273,&l_239,&p_995->g_19[1][2][3],&l_273,&p_995->g_19[1][2][3],&l_239,&l_273}}};
    int32_t **l_339 = &l_340[0][1][2];
    int32_t ***l_338 = &l_339;
    uint32_t l_351 = 1UL;
    uint64_t l_399 = 1UL;
    int64_t *l_519[3];
    uint16_t **l_530 = &p_995->g_241;
    int16_t ***l_533 = (void*)0;
    int8_t l_534 = 0x11L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_519[i] = &p_995->g_444;
    return p_81;
}


/* ------------------------------------------ */
/* 
 * reads : p_995->g_147 p_995->g_149 p_995->g_115 p_995->g_136 p_995->g_148 p_995->g_2 p_995->g_118 p_995->g_95 p_995->g_121 p_995->g_19 p_995->g_99 p_995->g_58 p_995->g_64 p_995->g_68 p_995->g_177 p_995->g_183
 * writes: p_995->g_147 p_995->g_68 p_995->g_23 p_995->g_95 p_995->g_2 p_995->g_177 p_995->g_121 p_995->g_183
 */
int32_t * func_83(int8_t * p_84, int32_t  p_85, uint64_t  p_86, uint32_t  p_87, uint64_t  p_88, struct S0 * p_995)
{ /* block id: 50 */
    int32_t **l_152 = (void*)0;
    int32_t *l_155[2];
    int16_t *l_160 = &p_995->g_2[2];
    uint8_t *l_161 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_155[i] = &p_995->g_23;
lbl_180:
    (*p_995->g_149) = p_995->g_147[6];
    for (p_995->g_68 = 1; (p_995->g_68 != (-1)); p_995->g_68 = safe_sub_func_int32_t_s_s(p_995->g_68, 3))
    { /* block id: 54 */
        int32_t ***l_153 = &l_152;
        int32_t **l_154[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_154[i][j] = (void*)0;
        }
        (*l_153) = l_152;
        l_155[0] = (void*)0;
        p_995->g_23 = (safe_mod_func_uint16_t_u_u(p_995->g_115[0][3], (safe_mod_func_int64_t_s_s(((l_160 == l_160) | (&p_995->g_99[0][1] != l_161)), (-10L)))));
    }
    if (p_995->g_136)
    { /* block id: 59 */
        int32_t **l_162 = &l_155[0];
        int32_t ***l_163 = &l_162;
        uint32_t *l_170 = &p_995->g_95;
        int16_t **l_171 = &l_160;
        int32_t l_172 = 0x153381E5L;
        int32_t l_173 = 0L;
        int32_t l_174 = 0x763DAB8FL;
        int32_t l_175 = (-8L);
        int32_t l_176 = 0L;
        (*l_163) = l_162;
        p_995->g_68 |= ((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(0x18F7L, ((*l_160) = ((safe_mul_func_uint8_t_u_u((((*p_995->g_148) , (((*l_170) &= p_995->g_118) ^ 0x2214550CL)) > ((((l_171 != &l_160) | (p_995->g_121 || ((((5UL < p_995->g_19[1][2][3]) , 3L) || p_995->g_99[2][0]) || (*p_84)))) , 0UL) >= p_995->g_2[1])), 1L)) || p_995->g_19[6][2][0])))) ^ (-2L)), p_995->g_64[0])) <= p_85);
        p_995->g_177[1][3]++;
        if (p_995->g_68)
            goto lbl_180;
    }
    else
    { /* block id: 66 */
        for (p_995->g_121 = 0; (p_995->g_121 == 11); p_995->g_121 = safe_add_func_int32_t_s_s(p_995->g_121, 3))
        { /* block id: 69 */
            return &p_995->g_64[0];
        }
    }
    --p_995->g_183;
    return &p_995->g_64[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_995->g_23 p_995->g_115 p_995->g_3 p_995->g_58 p_995->g_68 p_995->g_118 p_995->g_99 p_995->g_136 p_995->g_19
 * writes: p_995->g_68 p_995->g_23 p_995->g_121 p_995->g_58
 */
int8_t * func_89(int64_t  p_90, int32_t  p_91, uint16_t  p_92, struct S0 * p_995)
{ /* block id: 23 */
    int32_t *l_126 = &p_995->g_68;
    int32_t l_134[7];
    int32_t l_138 = 0x353C7893L;
    int i;
    for (i = 0; i < 7; i++)
        l_134[i] = 0x0EF74957L;
    p_995->g_68 = p_995->g_23;
    for (p_995->g_23 = (-25); (p_995->g_23 > 10); p_995->g_23 = safe_add_func_int16_t_s_s(p_995->g_23, 3))
    { /* block id: 27 */
        int32_t *l_125 = &p_995->g_19[1][2][3];
        int32_t **l_124[6] = {(void*)0,&l_125,(void*)0,(void*)0,&l_125,(void*)0};
        uint16_t *l_133 = &p_995->g_121;
        uint8_t *l_135 = &p_995->g_99[1][1];
        uint8_t l_137 = 0x34L;
        int32_t l_145[5] = {0x77F81C38L,0x77F81C38L,0x77F81C38L,0x77F81C38L,0x77F81C38L};
        int i;
        l_138 &= (l_137 = (((((l_126 = (void*)0) == &p_995->g_3) ^ ((((((safe_mul_func_uint16_t_u_u(p_995->g_115[0][3], (p_995->g_3 , (((safe_sub_func_uint8_t_u_u((p_91 || 0x1CL), ((safe_div_func_uint8_t_u_u((((((*l_133) = 65531UL) ^ l_134[2]) == ((p_995->g_58 , l_135) == l_135)) ^ p_995->g_68), p_995->g_118)) != p_995->g_99[4][0]))) && p_995->g_136) , 0x5B90L)))) & p_90) >= 0L) && p_995->g_19[1][2][3]) || l_134[3]) < l_134[3])) , 9L) == p_90));
        for (p_995->g_58 = (-13); (p_995->g_58 > (-27)); --p_995->g_58)
        { /* block id: 34 */
            int32_t *l_144 = (void*)0;
            for (p_92 = 23; (p_92 <= 19); p_92--)
            { /* block id: 37 */
                int32_t *l_143 = (void*)0;
                l_144 = l_143;
                l_143 = &p_995->g_19[7][4][4];
                l_145[2] = p_91;
            }
        }
        for (l_138 = 0; (l_138 <= 4); l_138 += 1)
        { /* block id: 45 */
            int16_t l_146 = 0x33F7L;
            l_146 = (-1L);
        }
    }
    return &p_995->g_58;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_996;
    struct S0* p_995 = &c_996;
    struct S0 c_997 = {
        {0x6DB5L,0x6DB5L,0x6DB5L,0x6DB5L}, // p_995->g_2
        0x7665683CL, // p_995->g_3
        {{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}}}, // p_995->g_19
        (-9L), // p_995->g_23
        0L, // p_995->g_58
        {0x2F1036C1L,0x2F1036C1L}, // p_995->g_64
        0x597B6EB5C50EC319L, // p_995->g_67
        0x772DA61EL, // p_995->g_68
        3UL, // p_995->g_70
        0UL, // p_995->g_95
        {{6UL,0x68L},{6UL,0x68L},{6UL,0x68L},{6UL,0x68L},{6UL,0x68L}}, // p_995->g_99
        {{4294967293UL,4294967288UL,4294967288UL,4294967293UL,4294967293UL,4294967288UL,4294967288UL,4294967293UL},{4294967293UL,4294967288UL,4294967288UL,4294967293UL,4294967293UL,4294967288UL,4294967288UL,4294967293UL},{4294967293UL,4294967288UL,4294967288UL,4294967293UL,4294967293UL,4294967288UL,4294967288UL,4294967293UL}}, // p_995->g_115
        0xB5AF4792L, // p_995->g_118
        65535UL, // p_995->g_121
        0xDCD8B9F6B8F8F025L, // p_995->g_136
        &p_995->g_2[3], // p_995->g_148
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_995->g_147
        &p_995->g_147[7], // p_995->g_149
        {{1UL,0xE036E825438B6353L,1UL,3UL,0xE036E825438B6353L,3UL,1UL},{1UL,0xE036E825438B6353L,1UL,3UL,0xE036E825438B6353L,3UL,1UL},{1UL,0xE036E825438B6353L,1UL,3UL,0xE036E825438B6353L,3UL,1UL},{1UL,0xE036E825438B6353L,1UL,3UL,0xE036E825438B6353L,3UL,1UL},{1UL,0xE036E825438B6353L,1UL,3UL,0xE036E825438B6353L,3UL,1UL},{1UL,0xE036E825438B6353L,1UL,3UL,0xE036E825438B6353L,3UL,1UL},{1UL,0xE036E825438B6353L,1UL,3UL,0xE036E825438B6353L,3UL,1UL},{1UL,0xE036E825438B6353L,1UL,3UL,0xE036E825438B6353L,3UL,1UL},{1UL,0xE036E825438B6353L,1UL,3UL,0xE036E825438B6353L,3UL,1UL}}, // p_995->g_177
        0UL, // p_995->g_183
        &p_995->g_68, // p_995->g_187
        0x4305L, // p_995->g_202
        &p_995->g_121, // p_995->g_241
        &p_995->g_241, // p_995->g_240
        253UL, // p_995->g_248
        {0xCE8EL,0xCE8EL}, // p_995->g_274
        {0x25L,0x64L,0x25L,0x25L,0x64L,0x25L}, // p_995->g_292
        0UL, // p_995->g_293
        1UL, // p_995->g_318
        {{0xEB3BL,9UL,0xEB3BL,0xEB3BL,9UL,0xEB3BL},{0xEB3BL,9UL,0xEB3BL,0xEB3BL,9UL,0xEB3BL},{0xEB3BL,9UL,0xEB3BL,0xEB3BL,9UL,0xEB3BL},{0xEB3BL,9UL,0xEB3BL,0xEB3BL,9UL,0xEB3BL}}, // p_995->g_350
        {{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL}}, // p_995->g_379
        0xF9CE596CL, // p_995->g_381
        3L, // p_995->g_403
        &p_995->g_403, // p_995->g_402
        9L, // p_995->g_416
        0xD40EL, // p_995->g_420
        0x0FL, // p_995->g_423
        0x52FCE2443A2CD0A9L, // p_995->g_439
        (-3L), // p_995->g_442
        0x16AFCF4280EBF064L, // p_995->g_444
        0x4AL, // p_995->g_446
        {{{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)}},{{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)}},{{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)}},{{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)}},{{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)},{(-9L),1L,0L,0L,(-5L)}}}, // p_995->g_447
        {{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}},{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}},{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}},{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}},{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}},{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}},{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}},{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}},{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}},{{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L},{0x27A9L,1L,0L}}}, // p_995->g_448
        {0x4B0473F61D338BE9L,0x4B0473F61D338BE9L}, // p_995->g_449
        (void*)0, // p_995->g_484
        0x2E0B57D5L, // p_995->g_498
        {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}, // p_995->g_549
        {1L,1L}, // p_995->g_550
        &p_995->g_484, // p_995->g_584
        1UL, // p_995->g_618
        4294967295UL, // p_995->g_664
        0x266CB8E8L, // p_995->g_701
        &p_995->g_550[1], // p_995->g_703
        &p_995->g_703, // p_995->g_702
        &p_995->g_67, // p_995->g_733
        &p_995->g_703, // p_995->g_763
        {4294967287UL,4294967287UL,4294967287UL,4294967287UL}, // p_995->g_787
        &p_995->g_64[1], // p_995->g_808
        &p_995->g_808, // p_995->g_807
        &p_995->g_618, // p_995->g_822
        &p_995->g_241, // p_995->g_873
        {&p_995->g_873,&p_995->g_873,&p_995->g_873,&p_995->g_873,&p_995->g_873,&p_995->g_873,&p_995->g_873,&p_995->g_873}, // p_995->g_872
        (void*)0, // p_995->g_929
        &p_995->g_929, // p_995->g_928
        0x8BL, // p_995->g_992
    };
    c_996 = c_997;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_995);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_995->g_2[i], "p_995->g_2[i]", print_hash_value);

    }
    transparent_crc(p_995->g_3, "p_995->g_3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_995->g_19[i][j][k], "p_995->g_19[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_995->g_23, "p_995->g_23", print_hash_value);
    transparent_crc(p_995->g_58, "p_995->g_58", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_995->g_64[i], "p_995->g_64[i]", print_hash_value);

    }
    transparent_crc(p_995->g_67, "p_995->g_67", print_hash_value);
    transparent_crc(p_995->g_68, "p_995->g_68", print_hash_value);
    transparent_crc(p_995->g_70, "p_995->g_70", print_hash_value);
    transparent_crc(p_995->g_95, "p_995->g_95", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_995->g_99[i][j], "p_995->g_99[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_995->g_115[i][j], "p_995->g_115[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_995->g_118, "p_995->g_118", print_hash_value);
    transparent_crc(p_995->g_121, "p_995->g_121", print_hash_value);
    transparent_crc(p_995->g_136, "p_995->g_136", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_995->g_177[i][j], "p_995->g_177[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_995->g_183, "p_995->g_183", print_hash_value);
    transparent_crc(p_995->g_202, "p_995->g_202", print_hash_value);
    transparent_crc(p_995->g_248, "p_995->g_248", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_995->g_274[i], "p_995->g_274[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_995->g_292[i], "p_995->g_292[i]", print_hash_value);

    }
    transparent_crc(p_995->g_293, "p_995->g_293", print_hash_value);
    transparent_crc(p_995->g_318, "p_995->g_318", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_995->g_350[i][j], "p_995->g_350[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_995->g_379[i][j], "p_995->g_379[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_995->g_381, "p_995->g_381", print_hash_value);
    transparent_crc(p_995->g_403, "p_995->g_403", print_hash_value);
    transparent_crc(p_995->g_416, "p_995->g_416", print_hash_value);
    transparent_crc(p_995->g_420, "p_995->g_420", print_hash_value);
    transparent_crc(p_995->g_423, "p_995->g_423", print_hash_value);
    transparent_crc(p_995->g_439, "p_995->g_439", print_hash_value);
    transparent_crc(p_995->g_442, "p_995->g_442", print_hash_value);
    transparent_crc(p_995->g_444, "p_995->g_444", print_hash_value);
    transparent_crc(p_995->g_446, "p_995->g_446", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_995->g_447[i][j][k], "p_995->g_447[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_995->g_448[i][j][k], "p_995->g_448[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_995->g_449[i], "p_995->g_449[i]", print_hash_value);

    }
    transparent_crc(p_995->g_498, "p_995->g_498", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_995->g_549[i], "p_995->g_549[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_995->g_550[i], "p_995->g_550[i]", print_hash_value);

    }
    transparent_crc(p_995->g_618, "p_995->g_618", print_hash_value);
    transparent_crc(p_995->g_664, "p_995->g_664", print_hash_value);
    transparent_crc(p_995->g_701, "p_995->g_701", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_995->g_787[i], "p_995->g_787[i]", print_hash_value);

    }
    transparent_crc(p_995->g_992, "p_995->g_992", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
