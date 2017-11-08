// -g 19,13,39 -l 19,1,3
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


// Seed: 2944711624

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   int32_t  f1;
};

union U1 {
   uint16_t  f0;
   uint32_t  f1;
};

struct S2 {
    int32_t g_3[2][3][6];
    int32_t g_10;
    int32_t g_20;
    int32_t *g_19;
    int32_t *g_61;
    volatile union U0 g_62[6][3];
    int32_t *g_64;
    int32_t **g_63;
    int64_t g_66[1][5];
    int8_t g_74;
    int8_t g_92[6];
    int64_t g_95[3];
    volatile uint32_t g_134;
    uint32_t g_151[1];
    uint8_t g_160;
    volatile uint64_t g_185;
    uint16_t g_193;
    int16_t g_208;
    volatile uint8_t g_253;
    volatile union U1 g_271;
    volatile union U1 *g_270;
    volatile union U1 ** volatile g_272;
    union U1 g_287;
    int8_t g_291;
    uint32_t g_345[2][7];
    volatile uint16_t g_354;
    uint16_t g_389;
    union U0 g_396[9];
    union U0 *g_395;
    union U0 ** volatile g_394;
    union U1 *g_400[6][8];
    uint32_t g_425;
    int16_t g_439;
    int8_t g_442;
    uint64_t g_465;
    uint32_t g_497;
    uint64_t *g_553;
    uint64_t **g_552;
    uint64_t *** volatile g_551;
    int32_t g_561;
    int32_t g_562[10][2];
    int32_t g_591;
    volatile uint16_t g_602;
    uint8_t g_638;
    uint8_t g_640;
    int32_t g_641;
    uint32_t *g_649;
    uint32_t **g_648;
    uint16_t *g_700;
    uint16_t *g_706[2][2];
    uint64_t g_720;
    uint64_t g_756;
    int32_t * volatile g_778;
    volatile uint32_t g_922;
    int32_t g_949;
    uint64_t g_967[5];
    volatile int8_t * volatile g_1001;
    volatile int8_t * volatile * volatile g_1000;
    int32_t * volatile g_1043;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S2 * p_1063);
int32_t * func_4(int32_t * p_5, struct S2 * p_1063);
int32_t * func_6(int32_t  p_7, int32_t * p_8, int64_t  p_9, struct S2 * p_1063);
int32_t * func_11(int16_t  p_12, union U1  p_13, uint32_t  p_14, int64_t  p_15, int32_t * p_16, struct S2 * p_1063);
uint64_t  func_21(union U0  p_22, int32_t * p_23, struct S2 * p_1063);
uint32_t  func_28(int32_t * p_29, struct S2 * p_1063);
uint16_t  func_30(uint32_t  p_31, int32_t  p_32, int32_t * p_33, int32_t * p_34, struct S2 * p_1063);
int32_t * func_35(int32_t * p_36, int32_t  p_37, struct S2 * p_1063);
int16_t  func_39(uint16_t  p_40, uint64_t  p_41, int32_t * p_42, int32_t  p_43, uint64_t  p_44, struct S2 * p_1063);
int16_t  func_54(int32_t * p_55, int32_t * p_56, int64_t  p_57, int32_t * p_58, struct S2 * p_1063);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1063->g_3 p_1063->g_551 p_1063->g_552 p_1063->g_553 p_1063->g_465
 * writes: p_1063->g_3
 */
uint64_t  func_1(struct S2 * p_1063)
{ /* block id: 4 */
    union U1 l_2[9] = {{1UL},{0UL},{1UL},{1UL},{0UL},{1UL},{1UL},{0UL},{1UL}};
    int32_t l_17 = 0L;
    union U0 l_24 = {4294967293UL};
    uint8_t l_676 = 0UL;
    uint32_t l_875 = 4294967293UL;
    int32_t l_879 = (-1L);
    int32_t l_880 = 0x7FB4906BL;
    int32_t l_882 = 0x42E5F40AL;
    int32_t l_885[1][10] = {{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)}};
    int32_t l_887 = 0x4DA7E760L;
    int32_t l_917[3][8][3] = {{{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)}},{{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)}},{{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)},{0x068B208BL,0x406B9F03L,(-6L)}}};
    int8_t *l_1003 = (void*)0;
    int8_t **l_1002 = &l_1003;
    int16_t l_1007 = 0x0F4BL;
    union U1 l_1061 = {65527UL};
    int32_t *l_1062 = &p_1063->g_949;
    int i, j, k;
    for (p_1063->g_3[0][0][0] = 8; (p_1063->g_3[0][0][0] >= 1); p_1063->g_3[0][0][0] -= 1)
    { /* block id: 7 */
        int32_t *l_18 = (void*)0;
        int32_t **l_850 = &p_1063->g_64;
        int32_t l_873 = 1L;
        int32_t l_878 = 0x38D15769L;
        int32_t l_881 = (-8L);
        int32_t l_883 = 0x7F9A5BB4L;
        int32_t l_886 = 0x6EEBDB21L;
        int32_t l_889 = 0x4F749E2DL;
        int8_t l_902 = (-2L);
        int32_t l_903 = 1L;
        union U1 l_948[2][6][4] = {{{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}}},{{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}},{{65535UL},{0x3FF0L},{0xAA76L},{0x3FF0L}}}};
        int32_t l_1009 = 4L;
        int32_t l_1010 = 0x04252076L;
        int32_t l_1011 = 0x69A83AF0L;
        int32_t l_1012 = 7L;
        int32_t l_1013 = 1L;
        int32_t l_1014 = (-1L);
        union U1 *l_1018 = &p_1063->g_287;
        uint64_t ***l_1058 = &p_1063->g_552;
        uint8_t *l_1059 = &p_1063->g_640;
        uint32_t l_1060 = 0xE24885A8L;
        int i, j, k;
        (1 + 1);
    }
    return (***p_1063->g_551);
}


/* ------------------------------------------ */
/* 
 * reads : p_1063->g_160 p_1063->g_95 p_1063->g_640 p_1063->g_552 p_1063->g_553 p_1063->g_465 p_1063->g_3 p_1063->g_591 p_1063->g_700 p_1063->g_193 p_1063->g_287.f0 p_1063->g_442 p_1063->g_720 p_1063->g_10
 * writes: p_1063->g_160 p_1063->g_345 p_1063->g_638 p_1063->g_442 p_1063->g_465 p_1063->g_591 p_1063->g_10 p_1063->g_778
 */
int32_t * func_4(int32_t * p_5, struct S2 * p_1063)
{ /* block id: 401 */
    union U1 **l_798[8] = {&p_1063->g_400[0][3],&p_1063->g_400[0][3],&p_1063->g_400[0][3],&p_1063->g_400[0][3],&p_1063->g_400[0][3],&p_1063->g_400[0][3],&p_1063->g_400[0][3],&p_1063->g_400[0][3]};
    int32_t l_830 = 6L;
    uint64_t l_834[2][6] = {{0x7058F995E13219B0L,0x946A6A84F288BEB2L,0x7058F995E13219B0L,0x7058F995E13219B0L,0x946A6A84F288BEB2L,0x7058F995E13219B0L},{0x7058F995E13219B0L,0x946A6A84F288BEB2L,0x7058F995E13219B0L,0x7058F995E13219B0L,0x946A6A84F288BEB2L,0x7058F995E13219B0L}};
    int i, j;
    for (p_1063->g_160 = 0; (p_1063->g_160 <= 1); p_1063->g_160 += 1)
    { /* block id: 404 */
        union U1 **l_799 = &p_1063->g_400[1][2];
        uint8_t *l_831 = &p_1063->g_638;
        int64_t l_832 = 0x2CAB4E1BB80E5CEAL;
        int8_t *l_833 = &p_1063->g_442;
        int32_t l_839 = 0x3C70739DL;
        int i;
        l_834[0][1] = (&p_1063->g_95[p_1063->g_160] == (((p_1063->g_95[p_1063->g_160] & (((l_798[6] != l_799) & ((*p_1063->g_553) = (safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((l_830 = (safe_mul_func_int8_t_s_s(((*l_833) |= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x22F43147L, (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((((*l_831) = (safe_mod_func_uint32_t_u_u((p_1063->g_345[1][2] = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_830, (0x04A3357EL > (-1L)))), ((p_1063->g_640 ^ (**p_1063->g_552)) < (-4L))))), l_830))) && p_1063->g_95[p_1063->g_160]) , p_1063->g_95[p_1063->g_160]) == l_832), p_1063->g_95[p_1063->g_160])), p_1063->g_3[0][0][0])) || l_832) || l_832), p_1063->g_591)), 0x5A36L)), 0x70L)), 1)))), (*p_1063->g_700))), l_832))), p_1063->g_720))), 0xEA0CE621439038E6L)), 5)))) > p_1063->g_95[p_1063->g_160])) & 0x15L) , (void*)0));
        for (p_1063->g_591 = 1; (p_1063->g_591 >= 0); p_1063->g_591 -= 1)
        { /* block id: 413 */
            uint16_t l_846 = 65535UL;
            int32_t *l_849 = &p_1063->g_562[2][0];
            if (l_830)
                break;
            for (p_1063->g_10 = 0; (p_1063->g_10 <= 0); p_1063->g_10 += 1)
            { /* block id: 417 */
                int32_t *l_835 = &p_1063->g_396[0].f1;
                int32_t *l_836 = &p_1063->g_396[0].f1;
                int32_t *l_837 = &l_830;
                int32_t *l_838 = (void*)0;
                int32_t *l_840 = &p_1063->g_396[0].f1;
                int32_t *l_841 = &p_1063->g_562[2][0];
                int32_t *l_842 = (void*)0;
                int32_t *l_843 = &p_1063->g_20;
                int32_t *l_844 = &l_839;
                int32_t *l_845[8] = {&l_839,&p_1063->g_3[1][0][2],&l_839,&l_839,&p_1063->g_3[1][0][2],&l_839,&l_839,&p_1063->g_3[1][0][2]};
                int i;
                ++l_846;
                p_1063->g_778 = l_849;
            }
        }
    }
    return &p_1063->g_3[0][0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1063->g_591 p_1063->g_552 p_1063->g_553 p_1063->g_465 p_1063->g_345 p_1063->g_151 p_1063->g_720 p_1063->g_272 p_1063->g_270 p_1063->g_271 p_1063->g_287.f0 p_1063->g_20 p_1063->g_74 p_1063->g_395 p_1063->g_396 p_1063->g_602 p_1063->g_3 p_1063->g_208 p_1063->g_562 p_1063->g_778 p_1063->g_640
 * writes: p_1063->g_591 p_1063->g_700 p_1063->g_706 p_1063->g_465 p_1063->g_151 p_1063->g_389 p_1063->g_92 p_1063->g_64 p_1063->g_61 p_1063->g_20 p_1063->g_74 p_1063->g_756 p_1063->g_208 p_1063->g_562 p_1063->g_10 p_1063->g_640
 */
int32_t * func_6(int32_t  p_7, int32_t * p_8, int64_t  p_9, struct S2 * p_1063)
{ /* block id: 333 */
    uint32_t l_703 = 4294967292UL;
    uint16_t *l_704 = (void*)0;
    int32_t ***l_711 = &p_1063->g_63;
    uint64_t l_716 = 5UL;
    union U0 **l_718[8];
    int32_t l_732 = 8L;
    int32_t l_741[8][5] = {{0x7C5103FCL,0x72E1A3ECL,0L,(-1L),5L},{0x7C5103FCL,0x72E1A3ECL,0L,(-1L),5L},{0x7C5103FCL,0x72E1A3ECL,0L,(-1L),5L},{0x7C5103FCL,0x72E1A3ECL,0L,(-1L),5L},{0x7C5103FCL,0x72E1A3ECL,0L,(-1L),5L},{0x7C5103FCL,0x72E1A3ECL,0L,(-1L),5L},{0x7C5103FCL,0x72E1A3ECL,0L,(-1L),5L},{0x7C5103FCL,0x72E1A3ECL,0L,(-1L),5L}};
    uint32_t l_774 = 1UL;
    int i, j;
    for (i = 0; i < 8; i++)
        l_718[i] = &p_1063->g_395;
    for (p_1063->g_591 = 0; (p_1063->g_591 >= 9); ++p_1063->g_591)
    { /* block id: 336 */
        uint16_t **l_705[9] = {&l_704,&l_704,&l_704,&l_704,&l_704,&l_704,&l_704,&l_704,&l_704};
        int32_t l_717 = 0x0B1B4D54L;
        uint32_t *l_719 = (void*)0;
        int32_t ***l_729 = &p_1063->g_63;
        int8_t l_731 = 0x24L;
        union U1 l_733 = {65535UL};
        uint32_t l_734[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        int32_t l_762[2][7][3] = {{{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL}},{{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL},{0x20A3E05BL,0x04D879EFL,0x20A3E05BL}}};
        uint8_t l_782 = 6UL;
        int i, j, k;
        l_717 = (safe_sub_func_int16_t_s_s(((p_1063->g_151[0] |= ((safe_add_func_int16_t_s_s(((((~((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((p_1063->g_700 = &p_1063->g_193) != (p_1063->g_706[0][1] = ((safe_lshift_func_int16_t_s_s(l_703, p_7)) , l_704))) && (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s((l_711 != (((**p_1063->g_552) = (**p_1063->g_552)) , l_711)), (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(l_716, l_717)), p_7)))) , p_7), p_7))), p_9)), 65535UL)) == l_717)) != 1UL) , l_718[5]) == &p_1063->g_395), p_1063->g_345[0][1])) || l_717)) >= p_1063->g_720), 0x46ACL));
        for (l_703 = (-5); (l_703 == 58); l_703 = safe_add_func_uint64_t_u_u(l_703, 1))
        { /* block id: 344 */
            union U1 **l_725 = &p_1063->g_400[1][6];
            union U1 ***l_726 = &l_725;
            uint64_t ***l_730[2];
            int32_t **l_735 = &p_1063->g_64;
            int32_t l_761 = 0x038F446EL;
            int32_t l_763 = (-1L);
            uint8_t l_764 = 0xD4L;
            uint8_t l_773 = 0x86L;
            int i;
            for (i = 0; i < 2; i++)
                l_730[i] = &p_1063->g_552;
            (*l_735) = func_11((safe_mul_func_int8_t_s_s((((~((((*l_726) = l_725) != (((safe_mod_func_int32_t_s_s((((**p_1063->g_272) , &p_1063->g_63) == l_729), p_9)) , (l_730[0] == (void*)0)) , &p_1063->g_400[2][3])) , ((((p_9 , (-1L)) , l_731) >= (**p_1063->g_552)) == p_1063->g_591))) | 4UL) & p_9), l_732)), l_733, l_734[2], p_1063->g_591, &p_1063->g_562[2][0], p_1063);
            p_1063->g_61 = &p_1063->g_3[0][0][0];
            for (p_1063->g_20 = (-14); (p_1063->g_20 < 7); p_1063->g_20 = safe_add_func_uint64_t_u_u(p_1063->g_20, 8))
            { /* block id: 350 */
                uint16_t l_740[3][7] = {{0x029DL,65535UL,0x029DL,0x029DL,65535UL,0x029DL,0x029DL},{0x029DL,65535UL,0x029DL,0x029DL,65535UL,0x029DL,0x029DL},{0x029DL,65535UL,0x029DL,0x029DL,65535UL,0x029DL,0x029DL}};
                int8_t *l_749 = (void*)0;
                int8_t *l_750 = &p_1063->g_74;
                uint64_t *l_755 = &p_1063->g_756;
                int8_t *l_757 = &l_731;
                int32_t l_758[5] = {0x5A3961AAL,0x5A3961AAL,0x5A3961AAL,0x5A3961AAL,0x5A3961AAL};
                int i, j;
                if ((((safe_rshift_func_int8_t_s_u((((p_7 >= p_9) , (l_741[2][0] = (!l_740[0][1]))) , (safe_rshift_func_int8_t_s_s(((*l_757) = ((p_9 != (safe_unary_minus_func_uint16_t_u(((((**p_1063->g_552) = (safe_rshift_func_int8_t_s_u(((((safe_sub_func_int8_t_s_s(((*l_750) ^= 0x2DL), (safe_add_func_uint8_t_u_u((~0xDCL), 1L)))) != ((!0xA398882BL) != (safe_sub_func_uint64_t_u_u(((+((*l_755) = ((+((*p_1063->g_395) , p_7)) , l_740[0][1]))) , p_9), 0x6EB235983D575655L)))) , 0xAD150C386F31924BL) , p_9), p_7))) <= p_1063->g_602) >= 4UL)))) & p_1063->g_3[0][1][4])), p_7))), p_7)) , 1L) > 0UL))
                { /* block id: 356 */
                    int32_t *l_759 = &p_1063->g_562[5][0];
                    int32_t *l_760[9] = {&l_758[0],&l_758[0],&l_758[0],&l_758[0],&l_758[0],&l_758[0],&l_758[0],&l_758[0],&l_758[0]};
                    int i;
                    l_764++;
                    for (p_1063->g_208 = (-4); (p_1063->g_208 > (-18)); p_1063->g_208--)
                    { /* block id: 360 */
                        (*l_759) ^= l_741[2][0];
                    }
                }
                else
                { /* block id: 363 */
                    for (p_1063->g_465 = 23; (p_1063->g_465 > 59); p_1063->g_465 = safe_add_func_int8_t_s_s(p_1063->g_465, 7))
                    { /* block id: 366 */
                        return p_8;
                    }
                    l_773 &= (safe_rshift_func_uint8_t_u_s(255UL, 7));
                    for (p_1063->g_74 = 4; (p_1063->g_74 >= 1); p_1063->g_74 -= 1)
                    { /* block id: 372 */
                        int32_t *l_777 = &l_741[4][4];
                        int i, j;
                        l_774 = 0x629B7940L;
                        (*p_1063->g_778) = (p_1063->g_10 = ((*l_777) = (safe_rshift_func_int8_t_s_s(0L, l_741[(p_1063->g_74 + 2)][p_1063->g_74]))));
                        return p_8;
                    }
                }
                if (p_7)
                    continue;
            }
            for (l_733.f0 = 0; (l_733.f0 > 25); l_733.f0 = safe_add_func_int32_t_s_s(l_733.f0, 1))
            { /* block id: 384 */
                int32_t *l_781[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_781[i] = &l_741[2][0];
                (*p_1063->g_778) |= 0x4300C08DL;
                for (p_1063->g_640 = 0; (p_1063->g_640 <= 4); p_1063->g_640 += 1)
                { /* block id: 388 */
                    l_782--;
                    return &p_1063->g_20;
                }
            }
        }
    }
    for (p_1063->g_20 = 17; (p_1063->g_20 <= 19); ++p_1063->g_20)
    { /* block id: 397 */
        int32_t *l_787 = &p_1063->g_396[0].f1;
        int32_t *l_788 = &l_741[2][0];
        int32_t *l_789 = &p_1063->g_562[2][0];
        int32_t *l_790 = (void*)0;
        int32_t *l_791 = &p_1063->g_562[2][0];
        int32_t *l_792 = (void*)0;
        int32_t *l_793 = &p_1063->g_562[2][0];
        int32_t *l_794 = &p_1063->g_562[2][0];
        uint16_t l_795[9] = {0x25BBL,0xC3D6L,0x25BBL,0x25BBL,0xC3D6L,0x25BBL,0x25BBL,0xC3D6L,0x25BBL};
        int i;
        --l_795[2];
    }
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1063->g_287.f0
 * writes: p_1063->g_389 p_1063->g_92 p_1063->g_64
 */
int32_t * func_11(int16_t  p_12, union U1  p_13, uint32_t  p_14, int64_t  p_15, int32_t * p_16, struct S2 * p_1063)
{ /* block id: 320 */
    int64_t *l_685[8][8] = {{(void*)0,&p_1063->g_95[2],(void*)0,(void*)0,(void*)0,(void*)0,&p_1063->g_95[2],(void*)0},{(void*)0,&p_1063->g_95[2],(void*)0,(void*)0,(void*)0,(void*)0,&p_1063->g_95[2],(void*)0},{(void*)0,&p_1063->g_95[2],(void*)0,(void*)0,(void*)0,(void*)0,&p_1063->g_95[2],(void*)0},{(void*)0,&p_1063->g_95[2],(void*)0,(void*)0,(void*)0,(void*)0,&p_1063->g_95[2],(void*)0},{(void*)0,&p_1063->g_95[2],(void*)0,(void*)0,(void*)0,(void*)0,&p_1063->g_95[2],(void*)0},{(void*)0,&p_1063->g_95[2],(void*)0,(void*)0,(void*)0,(void*)0,&p_1063->g_95[2],(void*)0},{(void*)0,&p_1063->g_95[2],(void*)0,(void*)0,(void*)0,(void*)0,&p_1063->g_95[2],(void*)0},{(void*)0,&p_1063->g_95[2],(void*)0,(void*)0,(void*)0,(void*)0,&p_1063->g_95[2],(void*)0}};
    int32_t l_687 = 0x564E4582L;
    int32_t *l_689 = (void*)0;
    int i, j;
    for (p_15 = 28; (p_15 < 28); p_15 = safe_add_func_uint8_t_u_u(p_15, 1))
    { /* block id: 323 */
        int32_t **l_688 = &p_1063->g_64;
        for (p_1063->g_389 = 0; (p_1063->g_389 > 4); p_1063->g_389++)
        { /* block id: 326 */
            int8_t *l_686 = &p_1063->g_92[2];
            l_687 = ((safe_add_func_int8_t_s_s(((*l_686) = (safe_lshift_func_uint16_t_u_u((p_1063->g_287.f0 , ((void*)0 == l_685[3][7])), 1))), 0x58L)) || 65533UL);
        }
        (*l_688) = &l_687;
    }
    return l_689;
}


/* ------------------------------------------ */
/* 
 * reads : p_1063->g_3 p_1063->g_62 p_1063->g_20 p_1063->g_63 p_1063->g_66 p_1063->g_64 p_1063->g_74 p_1063->g_92 p_1063->g_95 p_1063->g_134 p_1063->g_151 p_1063->g_160 p_1063->g_62.f0 p_1063->g_193 p_1063->g_253 p_1063->g_185 p_1063->g_208 p_1063->g_497 p_1063->g_395 p_1063->g_562 p_1063->g_61 p_1063->g_425 p_1063->g_389 p_1063->g_442 p_1063->g_553 p_1063->g_465 p_1063->g_345 p_1063->g_287.f0 p_1063->g_648 p_1063->g_551 p_1063->g_552 p_1063->g_591 p_1063->g_287
 * writes: p_1063->g_61 p_1063->g_66 p_1063->g_74 p_1063->g_63 p_1063->g_95 p_1063->g_20 p_1063->g_134 p_1063->g_151 p_1063->g_160 p_1063->g_92 p_1063->g_253 p_1063->g_208 p_1063->g_497 p_1063->g_396 p_1063->g_562 p_1063->g_638 p_1063->g_641 p_1063->g_640 p_1063->g_425 p_1063->g_287.f0 p_1063->g_648 p_1063->g_287 p_1063->g_465
 */
uint64_t  func_21(union U0  p_22, int32_t * p_23, struct S2 * p_1063)
{ /* block id: 10 */
    int16_t l_27[4];
    int32_t *l_38 = (void*)0;
    uint64_t l_47 = 0xA76A447D05199242L;
    int32_t **l_672 = (void*)0;
    int32_t **l_673 = &l_38;
    int i;
    for (i = 0; i < 4; i++)
        l_27[i] = 4L;
    (*l_673) = ((((safe_lshift_func_int8_t_s_s((l_27[3] != func_28(((func_30(l_27[1], p_1063->g_3[0][0][0], func_35(l_38, (p_1063->g_3[0][0][0] < (0x5A4AL ^ func_39((0x0140L < (p_1063->g_3[0][0][0] ^ (((safe_div_func_int32_t_s_s((p_22.f0 && p_22.f0), (*p_23))) , l_27[1]) || 0x484A4E7FB108F980L))), p_1063->g_3[1][2][5], l_38, l_47, p_22.f0, p_1063))), p_1063), &p_1063->g_3[0][0][3], p_1063) || p_22.f0) , (void*)0), p_1063)), p_1063->g_193)) , p_23) != l_38) , p_23);
    return (**p_1063->g_552);
}


/* ------------------------------------------ */
/* 
 * reads : p_1063->g_497 p_1063->g_395 p_1063->g_562 p_1063->g_151 p_1063->g_61 p_1063->g_20 p_1063->g_3 p_1063->g_425 p_1063->g_389 p_1063->g_442 p_1063->g_553 p_1063->g_465 p_1063->g_345 p_1063->g_287.f0 p_1063->g_648 p_1063->g_95 p_1063->g_551 p_1063->g_552 p_1063->g_92 p_1063->g_74 p_1063->g_591 p_1063->g_287
 * writes: p_1063->g_497 p_1063->g_396 p_1063->g_562 p_1063->g_160 p_1063->g_638 p_1063->g_641 p_1063->g_640 p_1063->g_425 p_1063->g_287.f0 p_1063->g_648 p_1063->g_287 p_1063->g_465
 */
uint32_t  func_28(int32_t * p_29, struct S2 * p_1063)
{ /* block id: 293 */
    union U0 l_621 = {4294967290UL};
    int32_t ***l_631 = &p_1063->g_63;
    uint32_t *l_636 = (void*)0;
    int32_t l_637 = 0x3798D1A8L;
    uint16_t *l_642 = &p_1063->g_287.f0;
    uint32_t l_645 = 0UL;
    uint32_t ***l_650 = &p_1063->g_648;
    uint32_t **l_652 = &l_636;
    uint32_t ***l_651 = &l_652;
    uint32_t **l_653 = &l_636;
    int64_t *l_664 = &p_1063->g_95[2];
    union U1 l_665 = {0xAD7CL};
    union U1 *l_666 = &p_1063->g_287;
    int32_t *l_669 = &p_1063->g_562[5][1];
    uint32_t **l_671 = &p_1063->g_649;
    uint32_t ***l_670 = &l_671;
    for (p_1063->g_497 = 0; (p_1063->g_497 >= 58); ++p_1063->g_497)
    { /* block id: 296 */
        int32_t *l_622 = &p_1063->g_562[2][0];
        uint32_t *l_635 = (void*)0;
        uint32_t **l_634[1][10] = {{&l_635,&l_635,&l_635,&l_635,&l_635,&l_635,&l_635,&l_635,&l_635,&l_635}};
        uint8_t *l_639[4][4][7] = {{{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640}},{{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640}},{{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640}},{{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640},{&p_1063->g_640,&p_1063->g_640,(void*)0,(void*)0,&p_1063->g_640,&p_1063->g_640,&p_1063->g_640}}};
        int i, j, k;
        (*l_622) ^= (((*p_1063->g_395) = l_621) , 2L);
        l_621.f1 = (safe_rshift_func_uint16_t_u_u((+((p_1063->g_425 = (((safe_sub_func_int64_t_s_s((((*l_622) | ((p_1063->g_640 = (p_1063->g_641 = (0xB116CA6AL < (safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((p_1063->g_638 = (p_1063->g_160 = (p_1063->g_151[0] != ((((void*)0 == &p_1063->g_395) == ((l_637 &= (((-9L) == ((void*)0 == l_631)) != (safe_mod_func_uint16_t_u_u(((l_636 = &p_1063->g_345[1][5]) != p_29), (*l_622))))) >= (*p_1063->g_61))) > p_1063->g_425)))), (*l_622))) >= p_1063->g_389), 0x4559L))))) > p_1063->g_442)) < (*l_622)), 0x54312C020A75CF4CL)) != p_1063->g_425) ^ (*p_1063->g_553))) , p_1063->g_345[1][2])), 15));
    }
    l_637 = (((*l_642)--) && (l_645 , ((safe_sub_func_uint16_t_u_u(((l_653 = ((*l_651) = ((*l_650) = p_1063->g_648))) != ((*l_670) = (((((**p_1063->g_552) = (l_645 > ((((+(((*l_669) = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((((p_1063->g_95[2] , (void*)0) == l_664) & ((((*l_666) = l_665) , (safe_lshift_func_int16_t_s_u((p_1063->g_287.f0 , 4L), 12))) > 0xA1D7435FB911CAA9L)) >= 0x9047L) && (***p_1063->g_551)) | 0L), 0x92L)), 6)) < l_665.f0), p_1063->g_465))) && p_1063->g_92[2])) <= p_1063->g_74) || 0x0EL) != p_1063->g_591))) || (*l_669)) , (*l_666)) , &p_1063->g_649))), p_1063->g_92[2])) & 0UL)));
    return (*l_669);
}


/* ------------------------------------------ */
/* 
 * reads : p_1063->g_3
 * writes:
 */
uint16_t  func_30(uint32_t  p_31, int32_t  p_32, int32_t * p_33, int32_t * p_34, struct S2 * p_1063)
{ /* block id: 186 */
    int32_t *l_397 = &p_1063->g_3[0][0][0];
    int64_t l_436 = 0x1F151CA1DB9EDBCDL;
    union U1 l_463 = {0x7190L};
    int32_t l_475 = (-1L);
    union U0 **l_482 = &p_1063->g_395;
    int32_t l_563 = 0x4D20ECBBL;
    int32_t l_564 = 0x7E59029FL;
    int32_t l_568 = 0x17510E44L;
    int32_t l_570 = 6L;
    int32_t l_572 = 1L;
    int32_t l_575 = 0L;
    int32_t l_577 = 0L;
    int32_t l_578 = (-1L);
    int32_t l_579 = 0x11BCAE33L;
    int32_t l_580 = 4L;
    int32_t l_581 = 0L;
    int32_t l_586 = 3L;
    int32_t l_588 = 0L;
    int32_t l_589[2][1][3] = {{{1L,1L,1L}},{{1L,1L,1L}}};
    int32_t l_596 = 0x76A48908L;
    int64_t l_601 = 0x1B2374A32B8DDDCCL;
    int64_t l_618 = 0x7B10EB7D0CA67768L;
    int i, j, k;
    l_397 = l_397;
    return (*l_397);
}


/* ------------------------------------------ */
/* 
 * reads : p_1063->g_208
 * writes: p_1063->g_208
 */
int32_t * func_35(int32_t * p_36, int32_t  p_37, struct S2 * p_1063)
{ /* block id: 121 */
    union U1 *l_286 = &p_1063->g_287;
    union U1 **l_285 = &l_286;
    int32_t l_293 = 5L;
    union U0 l_297 = {0x1795FE38L};
    int32_t l_340[6][7][5] = {{{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL}},{{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL}},{{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL}},{{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL}},{{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL}},{{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL},{0x63026632L,1L,1L,(-5L),0x32DD5C3CL}}};
    int64_t l_342[3];
    int32_t l_344[3];
    int8_t *l_379 = &p_1063->g_92[2];
    int32_t *l_392 = &l_297.f1;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_342[i] = 1L;
    for (i = 0; i < 3; i++)
        l_344[i] = 0x34FCF984L;
    for (p_1063->g_208 = 0; (p_1063->g_208 < (-15)); p_1063->g_208--)
    { /* block id: 124 */
        int32_t **l_282 = &p_1063->g_64;
        int32_t l_288[6] = {0L,0L,0L,0L,0L,0L};
        uint64_t l_290 = 0xE59D68F9C780D751L;
        int64_t *l_298 = &p_1063->g_66[0][0];
        int8_t *l_329 = (void*)0;
        union U0 *l_393 = (void*)0;
        int i;
        (1 + 1);
    }
    return &p_1063->g_3[1][1][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1063->g_62 p_1063->g_3 p_1063->g_20 p_1063->g_63 p_1063->g_66 p_1063->g_64 p_1063->g_74 p_1063->g_92 p_1063->g_95 p_1063->g_134 p_1063->g_151 p_1063->g_160 p_1063->g_62.f0 p_1063->g_193 p_1063->g_253 p_1063->g_185 p_1063->g_208
 * writes: p_1063->g_61 p_1063->g_66 p_1063->g_74 p_1063->g_63 p_1063->g_95 p_1063->g_20 p_1063->g_134 p_1063->g_151 p_1063->g_160 p_1063->g_92 p_1063->g_253 p_1063->g_208
 */
int16_t  func_39(uint16_t  p_40, uint64_t  p_41, int32_t * p_42, int32_t  p_43, uint64_t  p_44, struct S2 * p_1063)
{ /* block id: 11 */
    int32_t *l_59[2][9] = {{&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20},{&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20,&p_1063->g_20}};
    int32_t **l_60[9] = {&l_59[1][4],&l_59[1][4],&l_59[1][4],&l_59[1][4],&l_59[1][4],&l_59[1][4],&l_59[1][4],&l_59[1][4],&l_59[1][4]};
    int64_t *l_65 = &p_1063->g_66[0][0];
    int16_t *l_257 = (void*)0;
    int16_t *l_258 = (void*)0;
    int16_t *l_259 = &p_1063->g_208;
    uint16_t l_260 = 0xACD7L;
    uint32_t l_261 = 0x27DB2362L;
    int i, j;
    l_260 ^= (((safe_rshift_func_int16_t_s_s(4L, 9)) | (safe_add_func_uint64_t_u_u((6UL >= (safe_rshift_func_int16_t_s_s(((*l_259) = ((((func_54((((p_1063->g_61 = l_59[1][4]) != (void*)0) , (p_1063->g_62[1][2] , &p_43)), &p_43, (p_1063->g_3[0][1][1] , ((*l_65) &= (~((((p_43 , p_41) > p_1063->g_20) , &l_59[1][6]) != p_1063->g_63)))), (*p_1063->g_63), p_1063) <= p_1063->g_208) , p_40) && p_1063->g_95[2]) , p_1063->g_151[0])), p_1063->g_3[0][1][4]))), 0xA4AE4061B3A266CBL))) >= 0x323BC560L);
    for (p_1063->g_208 = 4; (p_1063->g_208 >= 0); p_1063->g_208 -= 1)
    { /* block id: 110 */
        uint64_t l_264 = 18446744073709551614UL;
        uint32_t l_265 = 0UL;
        l_261--;
        for (p_43 = 0; (p_43 <= 5); p_43 += 1)
        { /* block id: 114 */
            int i;
            if (p_1063->g_92[p_43])
                break;
            l_264 = (*p_1063->g_64);
            if (l_265)
                break;
        }
    }
    return p_1063->g_151[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1063->g_3 p_1063->g_74 p_1063->g_66 p_1063->g_92 p_1063->g_95 p_1063->g_20 p_1063->g_64 p_1063->g_134 p_1063->g_151 p_1063->g_160 p_1063->g_62.f0 p_1063->g_193 p_1063->g_253 p_1063->g_185
 * writes: p_1063->g_74 p_1063->g_63 p_1063->g_95 p_1063->g_20 p_1063->g_61 p_1063->g_134 p_1063->g_151 p_1063->g_160 p_1063->g_92 p_1063->g_253
 */
int16_t  func_54(int32_t * p_55, int32_t * p_56, int64_t  p_57, int32_t * p_58, struct S2 * p_1063)
{ /* block id: 14 */
    uint8_t l_75 = 0x29L;
    int8_t *l_91[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_93 = 0x4FDD0FD0L;
    int32_t *l_96 = &p_1063->g_20;
    int32_t ***l_105 = &p_1063->g_63;
    int8_t *l_110 = &p_1063->g_92[2];
    int64_t l_125 = 0x3C6A96B581468E88L;
    int32_t l_132 = (-6L);
    uint64_t l_202 = 1UL;
    int32_t *l_244 = &l_132;
    int32_t *l_245 = &l_93;
    int32_t *l_246 = &l_93;
    int32_t *l_247 = (void*)0;
    int32_t *l_248 = (void*)0;
    int32_t *l_249 = &p_1063->g_20;
    int32_t *l_250 = &p_1063->g_20;
    int32_t *l_251[1];
    int64_t l_252 = 0x497D4F73E1BCF015L;
    uint8_t *l_256 = &l_75;
    int i;
    for (i = 0; i < 1; i++)
        l_251[i] = &p_1063->g_20;
lbl_115:
    for (p_57 = 29; (p_57 != (-7)); p_57--)
    { /* block id: 17 */
        uint8_t l_72 = 250UL;
        int8_t *l_73 = &p_1063->g_74;
        int32_t ***l_90 = &p_1063->g_63;
        int32_t l_94 = 0x56112DD2L;
        (*p_56) = (safe_unary_minus_func_int8_t_s((p_1063->g_95[2] ^= ((((*l_73) &= (safe_div_func_uint64_t_u_u(l_72, p_1063->g_3[0][0][0]))) || (l_75 | (safe_add_func_uint16_t_u_u(0x9861L, 2L)))) > (((((safe_rshift_func_uint8_t_u_s((((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(3L, 6)) || p_57), ((l_93 ^= (safe_div_func_int16_t_s_s(((((*l_90) = (void*)0) != (((p_1063->g_66[0][1] , l_73) == l_91[4]) , &p_58)) == (-9L)), (-1L)))) < p_57))), 0UL)), 0x354A90BBL)) <= l_94) , p_1063->g_92[2]), 1)) < (*p_58)) , &p_1063->g_3[0][0][0]) != p_58) , l_75)))));
        for (l_72 = 0; (l_72 <= 0); l_72 += 1)
        { /* block id: 25 */
            int i, j;
            l_96 = p_58;
            return p_1063->g_66[l_72][(l_72 + 3)];
        }
    }
    for (l_93 = (-21); (l_93 <= 2); l_93++)
    { /* block id: 32 */
        int8_t *l_108 = &p_1063->g_92[2];
        int8_t **l_109 = &l_91[7];
        int32_t l_113 = 0x0D49B816L;
        uint64_t l_131 = 18446744073709551609UL;
        uint32_t l_156 = 0xA7943A2BL;
        union U0 l_161 = {0x4148A961L};
        int32_t **l_178 = &l_96;
        (*l_96) ^= (*p_56);
        if (((safe_div_func_uint64_t_u_u(((p_57 >= (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((&p_1063->g_63 != l_105), p_1063->g_66[0][0])), ((safe_rshift_func_uint16_t_u_s((((*l_109) = l_108) == l_110), ((p_1063->g_3[0][2][1] && (*p_56)) != (safe_rshift_func_uint8_t_u_s(((p_1063->g_95[2] || l_113) , (*l_96)), 1))))) || 0x2E2794C0DA393972L)))) && p_57), p_1063->g_66[0][0])) != l_113))
        { /* block id: 35 */
            return p_1063->g_66[0][0];
        }
        else
        { /* block id: 37 */
            int32_t **l_114 = (void*)0;
            int32_t l_128 = 9L;
            int8_t **l_179 = &l_91[4];
            p_1063->g_61 = &p_1063->g_20;
            if (p_1063->g_74)
                goto lbl_115;
            if (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_1063->g_3[1][1][0], (safe_lshift_func_int16_t_s_u((+(+((safe_lshift_func_uint8_t_u_s((((p_57 ^ (safe_unary_minus_func_uint32_t_u(0x121EC5D8L))) >= l_125) ^ ((l_113 ^ l_128) > ((((safe_lshift_func_uint8_t_u_u((p_57 & l_113), ((((l_113 ^ p_1063->g_92[3]) | p_57) ^ p_1063->g_92[5]) > 4294967295UL))) ^ 0xD522A42F98E8FF62L) == l_131) == p_1063->g_74))), l_132)) ^ l_131))), 10)))), 5)) , (*p_1063->g_64)))
            { /* block id: 40 */
                int32_t *l_133[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_133[i] = &l_128;
                if (l_75)
                    goto lbl_115;
                (*p_56) = (*p_55);
                --p_1063->g_134;
                (*p_55) |= (safe_sub_func_uint32_t_u_u(p_1063->g_134, 0L));
            }
            else
            { /* block id: 45 */
                int8_t l_155 = 0L;
                union U0 l_176[8] = {{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}};
                int32_t l_212 = 0L;
                int32_t **l_237 = &p_1063->g_61;
                int i;
                for (l_113 = (-27); (l_113 >= 27); l_113 = safe_add_func_int8_t_s_s(l_113, 1))
                { /* block id: 48 */
                    int16_t l_143 = (-10L);
                    uint32_t *l_150[2];
                    int32_t l_152 = 3L;
                    uint8_t *l_157 = &l_75;
                    uint8_t *l_158 = (void*)0;
                    uint8_t *l_159 = &p_1063->g_160;
                    uint32_t l_162 = 0x08BEF203L;
                    int32_t *l_163 = (void*)0;
                    int8_t **l_174[6][4] = {{&l_108,&l_91[4],&l_108,&l_108},{&l_108,&l_91[4],&l_108,&l_108},{&l_108,&l_91[4],&l_108,&l_108},{&l_108,&l_91[4],&l_108,&l_108},{&l_108,&l_91[4],&l_108,&l_108},{&l_108,&l_91[4],&l_108,&l_108}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_150[i] = &p_1063->g_151[0];
                    if ((0x2799C40DF3FCB152L | ((p_1063->g_3[1][0][1] | ((*l_108) = (l_143 , ((safe_lshift_func_int16_t_s_s((((((((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((p_57 != ((++p_1063->g_151[0]) && 0x32A01D18L)) <= ((*l_159) = ((*l_157) = (l_155 <= (p_1063->g_66[0][0] , l_156))))), (p_57 , 0x9435L))) < 0x2BB7L), 6L)) != p_57) , p_1063->g_160) , l_161) , (void*)0) != p_56) && p_1063->g_3[0][0][0]), p_1063->g_95[2])) & p_57)))) <= l_162)))
                    { /* block id: 53 */
                        p_55 = p_58;
                    }
                    else
                    { /* block id: 55 */
                        l_161.f1 = (*p_1063->g_64);
                        return p_57;
                    }
                    if ((*p_58))
                    { /* block id: 59 */
                        if ((*p_1063->g_64))
                            break;
                        l_163 = p_56;
                    }
                    else
                    { /* block id: 62 */
                        int8_t **l_175 = &l_110;
                        union U0 *l_177 = &l_176[1];
                        uint32_t **l_180 = &l_150[0];
                        (*p_56) &= (safe_sub_func_int32_t_s_s((*p_55), (safe_lshift_func_int8_t_s_u((((safe_sub_func_int8_t_s_s(p_57, p_57)) && ((((+((p_57 , (safe_add_func_uint16_t_u_u((0xDD7FD48144486E5BL || ((safe_div_func_uint64_t_u_u(18446744073709551609UL, p_57)) , (p_1063->g_66[0][0] < (p_1063->g_20 == p_57)))), 0x5342L))) , (*p_58))) , 4L) || 0UL) || p_1063->g_62[1][2].f0)) != 2L), 1))));
                        (*p_56) ^= ((l_174[3][1] != l_175) || ((p_1063->g_62[1][2].f0 < (p_57 > (((*l_180) = ((((((*l_177) = l_176[7]) , l_163) != (l_161.f0 , &p_1063->g_151[0])) , (((((*l_105) = l_178) != (void*)0) , l_179) != (void*)0)) , &p_1063->g_151[0])) != &p_1063->g_151[0]))) <= p_1063->g_66[0][0]));
                    }
                }
                for (p_1063->g_74 = (-28); (p_1063->g_74 >= 9); ++p_1063->g_74)
                { /* block id: 72 */
                    int32_t *l_183 = (void*)0;
                    int32_t *l_184[9][1];
                    int64_t *l_188[8][4][4] = {{{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]}},{{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]}},{{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]}},{{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]}},{{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]}},{{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]}},{{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]}},{{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]},{&p_1063->g_66[0][3],&p_1063->g_66[0][0],&p_1063->g_66[0][0],&p_1063->g_66[0][3]}}};
                    int8_t **l_196 = &l_91[2];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_184[i][j] = &l_128;
                    }
                    (1 + 1);
                }
            }
            (*l_96) = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(0UL, (((safe_add_func_int16_t_s_s(p_1063->g_151[0], p_1063->g_66[0][0])) | l_128) , 0xCBL))), 3));
        }
        return p_1063->g_193;
    }
    --p_1063->g_253;
    (*p_55) = ((0x4DL ^ p_57) != ((*l_256) = (~((void*)0 == p_58))));
    return p_1063->g_185;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1064;
    struct S2* p_1063 = &c_1064;
    struct S2 c_1065 = {
        {{{(-4L),0x1D94B4B1L,0x3779C63CL,0x1D94B4B1L,(-4L),(-4L)},{(-4L),0x1D94B4B1L,0x3779C63CL,0x1D94B4B1L,(-4L),(-4L)},{(-4L),0x1D94B4B1L,0x3779C63CL,0x1D94B4B1L,(-4L),(-4L)}},{{(-4L),0x1D94B4B1L,0x3779C63CL,0x1D94B4B1L,(-4L),(-4L)},{(-4L),0x1D94B4B1L,0x3779C63CL,0x1D94B4B1L,(-4L),(-4L)},{(-4L),0x1D94B4B1L,0x3779C63CL,0x1D94B4B1L,(-4L),(-4L)}}}, // p_1063->g_3
        (-1L), // p_1063->g_10
        0x3BD4856CL, // p_1063->g_20
        &p_1063->g_20, // p_1063->g_19
        &p_1063->g_20, // p_1063->g_61
        {{{0UL},{0x0CF68020L},{0x2888A0E7L}},{{0UL},{0x0CF68020L},{0x2888A0E7L}},{{0UL},{0x0CF68020L},{0x2888A0E7L}},{{0UL},{0x0CF68020L},{0x2888A0E7L}},{{0UL},{0x0CF68020L},{0x2888A0E7L}},{{0UL},{0x0CF68020L},{0x2888A0E7L}}}, // p_1063->g_62
        &p_1063->g_3[0][0][0], // p_1063->g_64
        &p_1063->g_64, // p_1063->g_63
        {{0x524BD9F5B60AA070L,0x524BD9F5B60AA070L,0x524BD9F5B60AA070L,0x524BD9F5B60AA070L,0x524BD9F5B60AA070L}}, // p_1063->g_66
        0x21L, // p_1063->g_74
        {1L,1L,1L,1L,1L,1L}, // p_1063->g_92
        {0x5736D3DFDFBAD294L,0x5736D3DFDFBAD294L,0x5736D3DFDFBAD294L}, // p_1063->g_95
        2UL, // p_1063->g_134
        {0x1938C4D5L}, // p_1063->g_151
        1UL, // p_1063->g_160
        0x336C12986392380DL, // p_1063->g_185
        1UL, // p_1063->g_193
        0x0A72L, // p_1063->g_208
        252UL, // p_1063->g_253
        {0UL}, // p_1063->g_271
        &p_1063->g_271, // p_1063->g_270
        &p_1063->g_270, // p_1063->g_272
        {1UL}, // p_1063->g_287
        6L, // p_1063->g_291
        {{0x928B9590L,3UL,0x928B9590L,0x928B9590L,3UL,0x928B9590L,0x928B9590L},{0x928B9590L,3UL,0x928B9590L,0x928B9590L,3UL,0x928B9590L,0x928B9590L}}, // p_1063->g_345
        0x9756L, // p_1063->g_354
        65534UL, // p_1063->g_389
        {{0x121E32FFL},{0x121E32FFL},{0x121E32FFL},{0x121E32FFL},{0x121E32FFL},{0x121E32FFL},{0x121E32FFL},{0x121E32FFL},{0x121E32FFL}}, // p_1063->g_396
        &p_1063->g_396[0], // p_1063->g_395
        &p_1063->g_395, // p_1063->g_394
        {{&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,(void*)0},{&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,(void*)0},{&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,(void*)0},{&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,(void*)0},{&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,(void*)0},{&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,&p_1063->g_287,(void*)0}}, // p_1063->g_400
        0x2DC397C9L, // p_1063->g_425
        0x4179L, // p_1063->g_439
        (-10L), // p_1063->g_442
        2UL, // p_1063->g_465
        0x6EA9411AL, // p_1063->g_497
        &p_1063->g_465, // p_1063->g_553
        &p_1063->g_553, // p_1063->g_552
        &p_1063->g_552, // p_1063->g_551
        0L, // p_1063->g_561
        {{0x5081DB76L,(-3L)},{0x5081DB76L,(-3L)},{0x5081DB76L,(-3L)},{0x5081DB76L,(-3L)},{0x5081DB76L,(-3L)},{0x5081DB76L,(-3L)},{0x5081DB76L,(-3L)},{0x5081DB76L,(-3L)},{0x5081DB76L,(-3L)},{0x5081DB76L,(-3L)}}, // p_1063->g_562
        8L, // p_1063->g_591
        0x8421L, // p_1063->g_602
        0xC7L, // p_1063->g_638
        0xE1L, // p_1063->g_640
        0L, // p_1063->g_641
        (void*)0, // p_1063->g_649
        &p_1063->g_649, // p_1063->g_648
        &p_1063->g_287.f0, // p_1063->g_700
        {{&p_1063->g_193,&p_1063->g_193},{&p_1063->g_193,&p_1063->g_193}}, // p_1063->g_706
        1UL, // p_1063->g_720
        0x508ED926C23A0860L, // p_1063->g_756
        &p_1063->g_562[2][0], // p_1063->g_778
        4294967291UL, // p_1063->g_922
        0x43F04CE1L, // p_1063->g_949
        {0x0AC44BC483F7D55CL,0x0AC44BC483F7D55CL,0x0AC44BC483F7D55CL,0x0AC44BC483F7D55CL,0x0AC44BC483F7D55CL}, // p_1063->g_967
        (void*)0, // p_1063->g_1001
        &p_1063->g_1001, // p_1063->g_1000
        &p_1063->g_949, // p_1063->g_1043
    };
    c_1064 = c_1065;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1063);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1063->g_3[i][j][k], "p_1063->g_3[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1063->g_10, "p_1063->g_10", print_hash_value);
    transparent_crc(p_1063->g_20, "p_1063->g_20", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1063->g_62[i][j].f0, "p_1063->g_62[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1063->g_66[i][j], "p_1063->g_66[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1063->g_74, "p_1063->g_74", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1063->g_92[i], "p_1063->g_92[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1063->g_95[i], "p_1063->g_95[i]", print_hash_value);

    }
    transparent_crc(p_1063->g_134, "p_1063->g_134", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1063->g_151[i], "p_1063->g_151[i]", print_hash_value);

    }
    transparent_crc(p_1063->g_160, "p_1063->g_160", print_hash_value);
    transparent_crc(p_1063->g_185, "p_1063->g_185", print_hash_value);
    transparent_crc(p_1063->g_193, "p_1063->g_193", print_hash_value);
    transparent_crc(p_1063->g_208, "p_1063->g_208", print_hash_value);
    transparent_crc(p_1063->g_253, "p_1063->g_253", print_hash_value);
    transparent_crc(p_1063->g_271.f0, "p_1063->g_271.f0", print_hash_value);
    transparent_crc(p_1063->g_287.f0, "p_1063->g_287.f0", print_hash_value);
    transparent_crc(p_1063->g_291, "p_1063->g_291", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1063->g_345[i][j], "p_1063->g_345[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1063->g_354, "p_1063->g_354", print_hash_value);
    transparent_crc(p_1063->g_389, "p_1063->g_389", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1063->g_396[i].f0, "p_1063->g_396[i].f0", print_hash_value);

    }
    transparent_crc(p_1063->g_425, "p_1063->g_425", print_hash_value);
    transparent_crc(p_1063->g_439, "p_1063->g_439", print_hash_value);
    transparent_crc(p_1063->g_442, "p_1063->g_442", print_hash_value);
    transparent_crc(p_1063->g_465, "p_1063->g_465", print_hash_value);
    transparent_crc(p_1063->g_497, "p_1063->g_497", print_hash_value);
    transparent_crc(p_1063->g_561, "p_1063->g_561", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1063->g_562[i][j], "p_1063->g_562[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1063->g_591, "p_1063->g_591", print_hash_value);
    transparent_crc(p_1063->g_602, "p_1063->g_602", print_hash_value);
    transparent_crc(p_1063->g_638, "p_1063->g_638", print_hash_value);
    transparent_crc(p_1063->g_640, "p_1063->g_640", print_hash_value);
    transparent_crc(p_1063->g_641, "p_1063->g_641", print_hash_value);
    transparent_crc(p_1063->g_720, "p_1063->g_720", print_hash_value);
    transparent_crc(p_1063->g_756, "p_1063->g_756", print_hash_value);
    transparent_crc(p_1063->g_922, "p_1063->g_922", print_hash_value);
    transparent_crc(p_1063->g_949, "p_1063->g_949", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1063->g_967[i], "p_1063->g_967[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
