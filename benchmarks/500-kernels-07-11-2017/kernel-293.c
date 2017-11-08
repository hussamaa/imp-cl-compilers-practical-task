// -g 80,62,2 -l 80,1,1
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


// Seed: 3501357242

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint64_t  f0;
   uint64_t  f1;
   volatile int8_t  f2;
};

struct S1 {
    int32_t g_3;
    int32_t g_4;
    int32_t g_5;
    int8_t g_16;
    int16_t g_47;
    int16_t g_49;
    int64_t g_63[4];
    volatile int32_t g_84;
    int64_t g_85;
    int16_t g_88;
    uint8_t g_109;
    volatile uint64_t g_116[10][6];
    int8_t g_124;
    struct S0 g_140;
    uint64_t g_144;
    uint16_t g_155;
    int32_t g_163;
    volatile uint8_t g_167;
    volatile uint8_t g_174;
    struct S0 g_177;
    struct S0 g_179;
    uint64_t g_180;
    int32_t g_186[2][2][8];
    int32_t g_219;
    uint64_t g_220;
    int64_t *g_240;
    int64_t **g_239[10];
    uint32_t g_250;
    uint64_t *g_268[10][3];
    volatile uint32_t g_269[9];
    struct S0 *g_311;
    struct S0 **g_310;
    int16_t *g_327;
    int16_t ** volatile g_326[9];
    int16_t ** volatile * volatile g_328;
    int32_t ** volatile g_352;
    int16_t g_374;
    uint64_t g_377[10][8];
    volatile int64_t g_391;
    volatile int64_t * volatile g_390[5];
    int32_t g_422[3];
    struct S0 g_428;
    int32_t * volatile g_439;
    struct S0 g_461;
    int32_t *g_468;
    int32_t ** volatile g_467[1];
    int32_t ** volatile g_487;
    int32_t * volatile g_522;
    volatile struct S0 g_535;
    int32_t ** volatile g_576;
    uint32_t g_597;
    volatile int64_t * volatile *g_624;
    volatile int64_t * volatile ** volatile g_623;
    int16_t g_686[6][6];
    volatile int16_t g_690;
    uint8_t *g_700;
    uint8_t * volatile *g_699;
    int32_t g_703;
    uint32_t *g_704;
    uint32_t *g_706;
    uint8_t g_715;
    struct S0 g_724;
    int32_t ** volatile g_747;
    int8_t *g_752;
    int8_t ** volatile g_751;
    int8_t ** volatile * volatile g_753;
    uint16_t g_775;
    uint16_t *g_774;
    int32_t g_789;
    int32_t ** volatile g_869;
    struct S0 * volatile g_870[2][4];
    struct S0 g_871;
    volatile struct S0 g_872;
    struct S0 g_895;
    struct S0 g_896;
    uint32_t g_932;
    uint32_t g_934;
    struct S0 g_1015[5];
    uint16_t g_1019;
    int32_t g_1028;
    int32_t ** volatile g_1031[4];
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S1 * p_1034);
int32_t  func_10(int32_t  p_11, uint64_t  p_12, struct S1 * p_1034);
uint64_t  func_22(uint64_t  p_23, int32_t  p_24, struct S1 * p_1034);
uint64_t  func_25(int8_t * p_26, int8_t * p_27, struct S1 * p_1034);
int8_t * func_28(int16_t  p_29, uint32_t  p_30, int8_t * p_31, int16_t  p_32, struct S1 * p_1034);
int32_t  func_39(uint32_t  p_40, uint64_t  p_41, int8_t * p_42, uint32_t  p_43, struct S1 * p_1034);
int32_t * func_55(int8_t * p_56, struct S1 * p_1034);
int64_t * func_103(int32_t  p_104, int64_t * p_105, struct S1 * p_1034);
struct S0  func_131(uint64_t  p_132, int8_t  p_133, uint8_t * p_134, int8_t * p_135, int32_t * p_136, struct S1 * p_1034);
int8_t * func_148(uint16_t  p_149, struct S1 * p_1034);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1034->g_5 p_1034->g_4 p_1034->g_3 p_1034->g_47 p_1034->g_49 p_1034->g_88 p_1034->g_109 p_1034->g_522 p_1034->g_219 p_1034->g_428.f0 p_1034->g_374 p_1034->g_535 p_1034->g_310 p_1034->g_311 p_1034->g_16 p_1034->g_391 p_1034->g_422 p_1034->g_140.f1 p_1034->g_327 p_1034->g_177.f1 p_1034->g_180 p_1034->g_179.f1 p_1034->g_116 p_1034->g_124 p_1034->g_84 p_1034->g_140 p_1034->g_144 p_1034->g_155 p_1034->g_167 p_1034->g_63 p_1034->g_174 p_1034->g_177 p_1034->g_179.f0 p_1034->g_163 p_1034->g_186 p_1034->g_220 p_1034->g_179.f2 p_1034->g_239 p_1034->g_268 p_1034->g_269 p_1034->g_250 p_1034->g_326 p_1034->g_576 p_1034->g_377 p_1034->g_468 p_1034->g_597 p_1034->g_439 p_1034->g_623 p_1034->g_699 p_1034->g_390 p_1034->g_428.f1 p_1034->g_700 p_1034->g_703 p_1034->g_724 p_1034->g_715 p_1034->g_704 p_1034->g_747 p_1034->g_751 p_1034->g_753 p_1034->g_774 p_1034->g_775 p_1034->g_752 p_1034->g_461.f1 p_1034->g_895.f1 p_1034->g_1015 p_1034->g_1019 p_1034->g_428 p_1034->g_789
 * writes: p_1034->g_3 p_1034->g_4 p_1034->g_5 p_1034->g_47 p_1034->g_49 p_1034->g_88 p_1034->g_155 p_1034->g_109 p_1034->g_140 p_1034->g_85 p_1034->g_124 p_1034->g_63 p_1034->g_16 p_1034->g_116 p_1034->g_144 p_1034->g_163 p_1034->g_167 p_1034->g_174 p_1034->g_179 p_1034->g_180 p_1034->g_186 p_1034->g_219 p_1034->g_326 p_1034->g_468 p_1034->g_220 p_1034->g_597 p_1034->g_311 p_1034->g_624 p_1034->g_703 p_1034->g_704 p_1034->g_706 p_1034->g_428 p_1034->g_715 p_1034->g_751 p_1034->g_775 p_1034->g_377 p_1034->g_789
 */
uint64_t  func_1(struct S1 * p_1034)
{ /* block id: 4 */
    uint32_t l_2[2][5][2] = {{{0x52EAA29CL,1UL},{0x52EAA29CL,1UL},{0x52EAA29CL,1UL},{0x52EAA29CL,1UL},{0x52EAA29CL,1UL}},{{0x52EAA29CL,1UL},{0x52EAA29CL,1UL},{0x52EAA29CL,1UL},{0x52EAA29CL,1UL},{0x52EAA29CL,1UL}}};
    int8_t *l_14 = (void*)0;
    int8_t *l_15[5][9][1] = {{{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16}},{{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16}},{{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16}},{{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16}},{{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16},{&p_1034->g_16}}};
    int32_t l_17 = 0x3DE81D53L;
    int32_t l_18 = 0x30F888C5L;
    int32_t l_21 = 0L;
    uint32_t l_44[10][7] = {{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL},{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL},{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL},{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL},{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL},{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL},{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL},{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL},{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL},{0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL,0xEA90CFFAL}};
    int64_t l_45 = (-1L);
    int16_t *l_46 = &p_1034->g_47;
    int16_t *l_48 = &p_1034->g_49;
    int8_t *l_50 = (void*)0;
    int32_t l_951 = 0x024EFD1FL;
    int32_t *l_1020[2];
    int32_t l_1021 = 0x0E7BA85EL;
    int16_t l_1022[1][2][7] = {{{0x1754L,0x1754L,1L,0x0137L,0x4A02L,0x0137L,1L},{0x1754L,0x1754L,1L,0x0137L,0x4A02L,0x0137L,1L}}};
    uint64_t *l_1025 = &p_1034->g_180;
    uint8_t l_1029 = 0x1EL;
    int8_t **l_1030 = &p_1034->g_752;
    int32_t **l_1032[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint16_t l_1033 = 0x0999L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1020[i] = &p_1034->g_789;
    for (p_1034->g_3 = 0; p_1034->g_3 < 2; p_1034->g_3 += 1)
    {
        for (p_1034->g_4 = 0; p_1034->g_4 < 5; p_1034->g_4 += 1)
        {
            for (p_1034->g_5 = 0; p_1034->g_5 < 2; p_1034->g_5 += 1)
            {
                l_2[p_1034->g_3][p_1034->g_4][p_1034->g_5] = 0xCF257925L;
            }
        }
    }
    for (p_1034->g_5 = 2; (p_1034->g_5 == (-30)); p_1034->g_5--)
    { /* block id: 8 */
        return l_2[1][0][0];
    }
    p_1034->g_789 ^= (+((((((safe_div_func_int8_t_s_s((((((((l_18 = (func_10(p_1034->g_4, p_1034->g_3, p_1034) , (!(l_17 &= l_2[1][0][1])))) && (safe_sub_func_int16_t_s_s((((~((((l_21 , func_22((l_951 = func_25(((l_14 != &p_1034->g_16) , &p_1034->g_16), func_28(((*l_48) &= ((*l_46) |= ((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((func_10(func_39((p_1034->g_4 , 0x9C2D16CFL), l_44[3][5], &p_1034->g_16, l_18, p_1034), p_1034->g_5, p_1034) > l_17) | p_1034->g_3), 2)) <= l_18), l_44[3][5])), p_1034->g_4)) > l_45))), l_44[5][3], l_50, l_44[3][5], p_1034), p_1034)), p_1034->g_374, p_1034)) < l_44[3][5]) ^ l_44[3][5]) , l_18)) , 0L) || l_45), l_44[3][5]))) , (*p_1034->g_752)) || (***p_1034->g_753)) & l_45) <= l_44[3][5]) ^ 4294967295UL), 1UL)) | 18446744073709551615UL) == l_44[3][5]) , (*p_1034->g_311)) , (*p_1034->g_774)) >= l_2[1][0][0]));
    (*p_1034->g_576) = &l_17;
    return l_1033;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_10(int32_t  p_11, uint64_t  p_12, struct S1 * p_1034)
{ /* block id: 11 */
    uint64_t l_13 = 18446744073709551615UL;
    return l_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_1034->g_179.f1 p_1034->g_124 p_1034->g_774 p_1034->g_699 p_1034->g_700 p_1034->g_109 p_1034->g_753 p_1034->g_751 p_1034->g_752 p_1034->g_16 p_1034->g_895.f1 p_1034->g_1015 p_1034->g_327 p_1034->g_47 p_1034->g_1019 p_1034->g_219 p_1034->g_88
 * writes: p_1034->g_88 p_1034->g_179.f1 p_1034->g_124 p_1034->g_775 p_1034->g_377 p_1034->g_219
 */
uint64_t  func_22(uint64_t  p_23, int32_t  p_24, struct S1 * p_1034)
{ /* block id: 464 */
    int32_t *l_955[6];
    uint32_t l_958 = 0x1134E0DCL;
    int16_t **l_1007 = &p_1034->g_327;
    int16_t ***l_1006 = &l_1007;
    int16_t ****l_1005 = &l_1006;
    uint16_t l_1014 = 0x6805L;
    int32_t l_1016 = (-3L);
    uint64_t l_1017 = 9UL;
    uint8_t l_1018 = 253UL;
    int i;
    for (i = 0; i < 6; i++)
        l_955[i] = &p_1034->g_186[0][1][4];
lbl_994:
    for (p_1034->g_88 = 0; (p_1034->g_88 <= 13); p_1034->g_88 = safe_add_func_uint16_t_u_u(p_1034->g_88, 1))
    { /* block id: 467 */
        int32_t **l_954[2];
        int i;
        for (i = 0; i < 2; i++)
            l_954[i] = (void*)0;
        l_955[1] = (void*)0;
    }
    for (p_1034->g_179.f1 = 0; (p_1034->g_179.f1 >= 34); p_1034->g_179.f1 = safe_add_func_uint64_t_u_u(p_1034->g_179.f1, 1))
    { /* block id: 472 */
        uint16_t l_970 = 65526UL;
        int16_t **l_978 = (void*)0;
        int16_t ***l_977 = &l_978;
        uint32_t l_991 = 0x96BBC5ADL;
        uint64_t *l_992 = &p_1034->g_377[3][3];
        int32_t l_993 = 0L;
        l_958 &= (p_24 >= 0xD7DD0C12L);
        for (p_1034->g_124 = 0; (p_1034->g_124 == (-15)); p_1034->g_124 = safe_sub_func_int64_t_s_s(p_1034->g_124, 6))
        { /* block id: 476 */
            int16_t l_967[2];
            int i;
            for (i = 0; i < 2; i++)
                l_967[i] = 4L;
            p_24 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_967[0], p_23)), 11)), 5));
            if (l_967[1])
                break;
        }
        if ((l_993 ^= ((((safe_mul_func_int16_t_s_s(p_23, (((l_970++) >= 0L) <= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((l_977 != &l_978) , (((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((((*l_992) = (((~(safe_div_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s(((p_23 >= (-1L)) && ((((*p_1034->g_774) = (p_24 ^ (safe_mod_func_uint64_t_u_u(0xFE845EE775FD65E8L, (((safe_mod_func_uint32_t_u_u(p_23, p_23)) , l_991) , 0x57CF873CCFC77B20L))))) > 65533UL) >= l_991)), p_23)) , 4294967295UL), 1L))) , 6UL) > p_23)) ^ 7UL), 0x02662A52D7966753L)), 0UL)) < l_991) || 8UL)) == (**p_1034->g_699)), (***p_1034->g_753))) < l_991), p_24))))) < p_24) > p_24) && 0xA53A9B0799E4A074L)))
        { /* block id: 484 */
            if (p_1034->g_88)
                goto lbl_994;
        }
        else
        { /* block id: 486 */
            return p_23;
        }
    }
    p_1034->g_219 &= (safe_add_func_int64_t_s_s((((safe_sub_func_int64_t_s_s(p_1034->g_895.f1, (safe_mod_func_int16_t_s_s(((0L >= (l_1005 == &p_1034->g_328)) & ((safe_add_func_uint8_t_u_u((p_24 >= ((p_23 , (4294967287UL == (((+(safe_div_func_int16_t_s_s(((((&p_24 == (((((safe_lshift_func_int8_t_s_s(((p_23 | (-8L)) > p_23), 0)) > l_1014) ^ 0x51L) , p_1034->g_1015[1]) , (void*)0)) | (*p_1034->g_752)) != (-1L)) >= (-7L)), (*p_1034->g_327)))) , l_1016) > l_1017))) >= p_24)), l_1018)) == 0x6521L)), 0x7210L)))) , p_23) && (*p_1034->g_327)), p_1034->g_1019));
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_1034->g_88 p_1034->g_109 p_1034->g_522 p_1034->g_3 p_1034->g_219 p_1034->g_428.f0 p_1034->g_374 p_1034->g_535 p_1034->g_310 p_1034->g_311 p_1034->g_16 p_1034->g_391 p_1034->g_422 p_1034->g_140.f1 p_1034->g_327 p_1034->g_47 p_1034->g_177.f1 p_1034->g_180 p_1034->g_179.f1 p_1034->g_4 p_1034->g_49 p_1034->g_116 p_1034->g_124 p_1034->g_84 p_1034->g_5 p_1034->g_140 p_1034->g_144 p_1034->g_155 p_1034->g_167 p_1034->g_63 p_1034->g_174 p_1034->g_177 p_1034->g_179.f0 p_1034->g_163 p_1034->g_186 p_1034->g_220 p_1034->g_179.f2 p_1034->g_239 p_1034->g_268 p_1034->g_269 p_1034->g_250 p_1034->g_326 p_1034->g_576 p_1034->g_377 p_1034->g_468 p_1034->g_597 p_1034->g_439 p_1034->g_623 p_1034->g_699 p_1034->g_390 p_1034->g_428.f1 p_1034->g_700 p_1034->g_703 p_1034->g_724 p_1034->g_715 p_1034->g_704 p_1034->g_747 p_1034->g_751 p_1034->g_753 p_1034->g_774 p_1034->g_775 p_1034->g_752 p_1034->g_461.f1
 * writes: p_1034->g_88 p_1034->g_155 p_1034->g_109 p_1034->g_3 p_1034->g_140 p_1034->g_47 p_1034->g_85 p_1034->g_124 p_1034->g_4 p_1034->g_63 p_1034->g_16 p_1034->g_116 p_1034->g_144 p_1034->g_163 p_1034->g_167 p_1034->g_174 p_1034->g_179 p_1034->g_180 p_1034->g_186 p_1034->g_219 p_1034->g_326 p_1034->g_468 p_1034->g_220 p_1034->g_597 p_1034->g_311 p_1034->g_624 p_1034->g_703 p_1034->g_704 p_1034->g_706 p_1034->g_428 p_1034->g_715 p_1034->g_751 p_1034->g_775 p_1034->g_5
 */
uint64_t  func_25(int8_t * p_26, int8_t * p_27, struct S1 * p_1034)
{ /* block id: 250 */
    int16_t *l_520 = &p_1034->g_47;
    int32_t l_531 = 0x5A303A25L;
    int32_t l_533 = 0x2447E968L;
    int32_t l_534 = 0x69892584L;
    int64_t *l_556 = &p_1034->g_85;
    int8_t *l_557 = &p_1034->g_124;
    uint32_t l_558 = 6UL;
    int32_t l_563[7] = {0x6B63E849L,0x25E8C1B5L,0x6B63E849L,0x6B63E849L,0x25E8C1B5L,0x6B63E849L,0x6B63E849L};
    uint16_t l_564 = 0x6C16L;
    int16_t l_687 = 0x545EL;
    int8_t l_688 = 0x09L;
    int32_t l_689[9];
    int32_t *l_694[5];
    uint8_t *l_696 = &p_1034->g_109;
    uint8_t **l_695 = &l_696;
    int64_t **l_728[7][5] = {{&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240},{&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240},{&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240},{&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240},{&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240},{&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240},{&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240}};
    int16_t l_790 = 0x3C5BL;
    int8_t l_822 = 5L;
    uint16_t l_856 = 0x4E48L;
    uint32_t *l_938 = &p_1034->g_932;
    uint32_t **l_937 = &l_938;
    int64_t l_939 = 0x79D534F5E4A446F0L;
    uint32_t l_948[9][7] = {{4294967286UL,0x01267239L,0x7A94EEADL,0xA87584A8L,4294967295UL,0xBCEB2A54L,0UL},{4294967286UL,0x01267239L,0x7A94EEADL,0xA87584A8L,4294967295UL,0xBCEB2A54L,0UL},{4294967286UL,0x01267239L,0x7A94EEADL,0xA87584A8L,4294967295UL,0xBCEB2A54L,0UL},{4294967286UL,0x01267239L,0x7A94EEADL,0xA87584A8L,4294967295UL,0xBCEB2A54L,0UL},{4294967286UL,0x01267239L,0x7A94EEADL,0xA87584A8L,4294967295UL,0xBCEB2A54L,0UL},{4294967286UL,0x01267239L,0x7A94EEADL,0xA87584A8L,4294967295UL,0xBCEB2A54L,0UL},{4294967286UL,0x01267239L,0x7A94EEADL,0xA87584A8L,4294967295UL,0xBCEB2A54L,0UL},{4294967286UL,0x01267239L,0x7A94EEADL,0xA87584A8L,4294967295UL,0xBCEB2A54L,0UL},{4294967286UL,0x01267239L,0x7A94EEADL,0xA87584A8L,4294967295UL,0xBCEB2A54L,0UL}};
    uint32_t l_949[8][7] = {{0x4E2D2F9CL,0x4E2D2F9CL,0x15767335L,0UL,0x6FD409F8L,0UL,0x15767335L},{0x4E2D2F9CL,0x4E2D2F9CL,0x15767335L,0UL,0x6FD409F8L,0UL,0x15767335L},{0x4E2D2F9CL,0x4E2D2F9CL,0x15767335L,0UL,0x6FD409F8L,0UL,0x15767335L},{0x4E2D2F9CL,0x4E2D2F9CL,0x15767335L,0UL,0x6FD409F8L,0UL,0x15767335L},{0x4E2D2F9CL,0x4E2D2F9CL,0x15767335L,0UL,0x6FD409F8L,0UL,0x15767335L},{0x4E2D2F9CL,0x4E2D2F9CL,0x15767335L,0UL,0x6FD409F8L,0UL,0x15767335L},{0x4E2D2F9CL,0x4E2D2F9CL,0x15767335L,0UL,0x6FD409F8L,0UL,0x15767335L},{0x4E2D2F9CL,0x4E2D2F9CL,0x15767335L,0UL,0x6FD409F8L,0UL,0x15767335L}};
    uint64_t l_950 = 2UL;
    int i, j;
    for (i = 0; i < 9; i++)
        l_689[i] = 0x4B89AD34L;
    for (i = 0; i < 5; i++)
        l_694[i] = &p_1034->g_3;
    for (p_1034->g_88 = 0; (p_1034->g_88 != (-19)); p_1034->g_88 = safe_sub_func_uint8_t_u_u(p_1034->g_88, 7))
    { /* block id: 253 */
        uint64_t l_518 = 18446744073709551615UL;
        int16_t *l_519 = &p_1034->g_49;
        int32_t *l_532[2][3] = {{&p_1034->g_5,&p_1034->g_5,&p_1034->g_5},{&p_1034->g_5,&p_1034->g_5,&p_1034->g_5}};
        int i, j;
        for (p_1034->g_155 = 29; (p_1034->g_155 > 22); p_1034->g_155--)
        { /* block id: 256 */
            int32_t l_517[10][9][2] = {{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}},{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}},{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}},{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}},{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}},{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}},{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}},{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}},{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}},{{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L},{0x3EBC221FL,1L}}};
            uint8_t *l_521 = &p_1034->g_109;
            int i, j, k;
            (*p_1034->g_522) &= ((safe_rshift_func_uint16_t_u_s(l_517[4][1][1], l_518)) != ((*l_521) ^= ((l_520 = l_519) == (void*)0)));
        }
        l_534 ^= ((0x5DL < (~((((l_533 &= ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((l_531 > ((l_531 , l_518) , (l_518 == p_1034->g_3))), 0x13L)) == (l_518 <= ((p_1034->g_219 > 0x25L) != l_531))), p_1034->g_428.f0)) != 0L), 1)), 2)) | p_1034->g_374)) ^ 0x7DC0F4C9L) , 9UL) < l_531))) < 3UL);
        (**p_1034->g_310) = p_1034->g_535;
    }
    if ((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(1UL, ((safe_div_func_int64_t_s_s(((+(safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s((p_1034->g_88 || (*p_26)), l_534)) < (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((*l_557) = ((((p_1034->g_391 != p_1034->g_422[1]) | 0xDE862E44AEDC07E8L) , 18446744073709551609UL) | ((safe_sub_func_int64_t_s_s(((*l_556) = ((((*p_1034->g_327) &= (((p_1034->g_140.f1 <= 7UL) || l_534) < l_531)) > 0x3BC6L) | (*p_26))), p_1034->g_177.f1)) > p_1034->g_180))), p_1034->g_3)), l_558)), (*p_26)))), l_533)), 0UL))) | l_558), 0x70DDAB6FA22BDB29L)) > 0x69L))), 3)) && p_1034->g_179.f1) == l_533))
    { /* block id: 268 */
        int32_t *l_559 = (void*)0;
        int32_t *l_560 = &l_534;
        int32_t *l_561 = &l_533;
        int32_t *l_562[9] = {&p_1034->g_3,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3};
        uint32_t *l_567[5][1];
        int64_t l_619 = 1L;
        uint64_t *l_635 = &p_1034->g_144;
        uint32_t l_684 = 7UL;
        int16_t l_685 = 0x2809L;
        uint32_t l_691 = 0UL;
        int32_t *l_701 = (void*)0;
        int32_t *l_702[5];
        uint32_t **l_705 = (void*)0;
        uint32_t **l_707 = &l_567[0][0];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_567[i][j] = &p_1034->g_250;
        }
        for (i = 0; i < 5; i++)
            l_702[i] = &p_1034->g_703;
        ++l_564;
        (*l_561) = ((l_531 &= (18446744073709551615UL >= 0x49F7C0B4E08BB71AL)) & ((void*)0 != l_560));
        for (l_558 = 0; (l_558 <= 2); l_558 += 1)
        { /* block id: 274 */
            int32_t l_568 = 0x1E340C84L;
            int32_t l_569 = 0x17C70FB8L;
            int32_t l_570[9] = {7L,0x2DD79DD3L,7L,7L,0x2DD79DD3L,7L,7L,0x2DD79DD3L,7L};
            int64_t l_571 = 3L;
            uint32_t l_572 = 0x5DE02F41L;
            int32_t **l_575 = &l_562[4];
            int i;
            (*l_560) ^= l_533;
            l_572--;
            (*p_1034->g_576) = ((*l_575) = func_55(&p_1034->g_16, p_1034));
            for (p_1034->g_220 = 0; (p_1034->g_220 <= 1); p_1034->g_220 += 1)
            { /* block id: 281 */
                int64_t **l_577 = &p_1034->g_240;
                int32_t l_594 = 8L;
                int32_t l_621[1][4];
                struct S0 *l_622 = &p_1034->g_428;
                int64_t l_682[9][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_621[i][j] = 0x55766C82L;
                }
                if (((void*)0 != l_577))
                { /* block id: 282 */
                    int8_t *l_596 = &p_1034->g_124;
                    for (l_568 = 2; (l_568 >= 0); l_568 -= 1)
                    { /* block id: 285 */
                        uint8_t *l_593[8][3] = {{&p_1034->g_109,&p_1034->g_109,(void*)0},{&p_1034->g_109,&p_1034->g_109,(void*)0},{&p_1034->g_109,&p_1034->g_109,(void*)0},{&p_1034->g_109,&p_1034->g_109,(void*)0},{&p_1034->g_109,&p_1034->g_109,(void*)0},{&p_1034->g_109,&p_1034->g_109,(void*)0},{&p_1034->g_109,&p_1034->g_109,(void*)0},{&p_1034->g_109,&p_1034->g_109,(void*)0}};
                        uint8_t **l_592 = &l_593[2][1];
                        int32_t l_595 = 0x197E0752L;
                        int i, j, k;
                        l_531 ^= (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((((safe_rshift_func_uint16_t_u_u(((p_1034->g_186[p_1034->g_220][p_1034->g_220][l_558] == (safe_mod_func_int32_t_s_s(p_1034->g_186[p_1034->g_220][p_1034->g_220][(p_1034->g_220 + 4)], p_1034->g_422[p_1034->g_220]))) | ((p_1034->g_422[l_558] , p_1034->g_63[(p_1034->g_220 + 2)]) == ((p_1034->g_268[(l_558 + 3)][l_558] == ((l_595 &= (((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((*l_592) = func_148((safe_unary_minus_func_int32_t_s(p_1034->g_63[(l_558 + 1)])), p_1034)) != (void*)0), 0x565BL)), p_1034->g_377[(l_558 + 1)][p_1034->g_220])) , l_563[1]), 0x620E62C3L)) & 0UL) == l_594)) , l_556)) && p_1034->g_186[p_1034->g_220][p_1034->g_220][l_558]))), 6)) , l_596) == p_26))), 10));
                        p_1034->g_597 ^= ((*p_1034->g_468) = (p_1034->g_140.f1 & p_1034->g_63[(p_1034->g_220 + 2)]));
                    }
                }
                else
                { /* block id: 292 */
                    uint32_t l_598 = 0xEFF5492CL;
                    if ((p_1034->g_177.f1 , ((0x16119A98L & l_594) && (l_598 == l_598))))
                    { /* block id: 293 */
                        int32_t l_618 = 3L;
                        uint16_t l_620 = 0x7878L;
                        int i, j;
                        (*l_561) = (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_div_func_uint16_t_u_u(((((void*)0 == &p_1034->g_328) || (~((safe_sub_func_uint64_t_u_u(((&p_1034->g_522 == ((l_620 = (((*l_556) = (safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((l_563[2] && (safe_lshift_func_uint8_t_u_s(l_594, p_1034->g_269[4]))), ((p_1034->g_268[(l_558 + 3)][l_558] == p_1034->g_268[(l_558 + 3)][l_558]) ^ (safe_lshift_func_uint16_t_u_u(65534UL, 14))))) ^ l_618), 8UL)), l_594)), l_618))) != l_619)) , (void*)0)) , 1UL), l_621[0][2])) == (-6L)))) >= 0xF43F71D5L), l_594)))), (*p_1034->g_327)));
                        return l_621[0][0];
                    }
                    else
                    { /* block id: 298 */
                        (*p_1034->g_310) = l_622;
                        if (l_598)
                            continue;
                        if ((*p_1034->g_439))
                            continue;
                        (*p_1034->g_623) = &p_1034->g_390[0];
                    }
                    for (l_594 = 6; (l_594 >= 2); l_594 -= 1)
                    { /* block id: 306 */
                        uint8_t *l_633 = (void*)0;
                        uint8_t *l_634 = &p_1034->g_109;
                        uint64_t *l_636 = &p_1034->g_428.f1;
                        int i, j, k;
                        (*l_560) &= (safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((*l_634) &= (safe_add_func_uint16_t_u_u(p_1034->g_186[p_1034->g_220][p_1034->g_220][(l_558 + 5)], l_598))), p_1034->g_186[p_1034->g_220][p_1034->g_220][(l_558 + 5)])) && p_1034->g_186[p_1034->g_220][p_1034->g_220][(l_558 + 5)]), 0)) , l_635) != l_636), p_1034->g_377[4][5]));
                    }
                    for (p_1034->g_597 = 0; (p_1034->g_597 <= 1); p_1034->g_597 += 1)
                    { /* block id: 312 */
                        uint8_t *l_639 = &p_1034->g_109;
                        uint64_t *l_683[4][3][4] = {{{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]},{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]},{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]}},{{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]},{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]},{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]}},{{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]},{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]},{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]}},{{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]},{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]},{(void*)0,&p_1034->g_180,&p_1034->g_377[3][3],&p_1034->g_377[0][6]}}};
                        int i, j, k;
                        (*l_560) = (safe_lshift_func_uint8_t_u_u(((*l_639) = p_1034->g_186[p_1034->g_220][p_1034->g_220][(p_1034->g_220 + 6)]), (p_1034->g_374 && (l_594 < ((void*)0 == &p_1034->g_180)))));
                        (*l_561) |= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s(((p_1034->g_250 & ((safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(l_534, (~(l_684 = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((((*p_1034->g_327) <= ((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(l_594, p_1034->g_16)) != (safe_rshift_func_uint16_t_u_s(0x8A32L, 7))), (safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((-3L), 7)), l_598)) & (p_1034->g_186[p_1034->g_220][p_1034->g_220][(p_1034->g_220 + 6)] = (((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((void*)0 == &p_1034->g_85), l_558)), p_1034->g_422[0])) > l_564), l_563[2])), p_1034->g_422[1])), (*p_26))) <= p_1034->g_3) , l_621[0][0]))) & l_598), l_534)))), (*p_26))) < l_682[0][1])) , 0x7E0A2D79L), l_534)), (*p_26))))))), p_1034->g_140.f1)) > l_682[5][1])) ^ l_685), 11)) > (*l_560)) == l_598), 2)), l_598));
                    }
                }
                l_691--;
                (*l_575) = l_694[4];
                if ((*p_1034->g_439))
                    break;
            }
        }
        (**p_1034->g_310) = func_131(((*l_635) ^= ((p_1034->g_703 = (l_695 == (((safe_rshift_func_uint16_t_u_s(0xA6C4L, (*l_560))) ^ 0x24DCL) , p_1034->g_699))) , ((p_1034->g_704 = &l_684) == ((*l_707) = (p_1034->g_706 = &l_684))))), ((*l_557) = ((*l_560) , ((void*)0 != p_1034->g_390[2]))), p_26, p_26, l_701, p_1034);
    }
    else
    { /* block id: 332 */
        int16_t l_711 = 0x6F3EL;
        int32_t l_746 = 0L;
        for (l_533 = 0; (l_533 >= (-14)); l_533 = safe_sub_func_int64_t_s_s(l_533, 7))
        { /* block id: 335 */
            int8_t l_720 = 0x70L;
            int32_t l_743 = (-4L);
            for (p_1034->g_428.f1 = 0; (p_1034->g_428.f1 <= 8); p_1034->g_428.f1 += 1)
            { /* block id: 338 */
                int16_t l_710 = (-6L);
                int32_t l_719 = 0x09B25301L;
                uint32_t l_727 = 4294967293UL;
                struct S0 *l_737[7] = {&p_1034->g_724,&p_1034->g_724,&p_1034->g_724,&p_1034->g_724,&p_1034->g_724,&p_1034->g_724,&p_1034->g_724};
                int i;
                if (l_710)
                    break;
                for (l_531 = 3; (l_531 <= 8); l_531 += 1)
                { /* block id: 342 */
                    uint8_t l_712[9][4][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
                    uint8_t l_716 = 0xEBL;
                    int32_t l_721 = 0x032B0128L;
                    int i, j, k;
                    l_721 &= (l_720 = ((((**p_1034->g_699) && ((l_711 <= l_712[1][2][1]) < (p_1034->g_155 = l_712[3][1][0]))) || 8L) | ((0xCE4497C1L ^ (l_719 = (((safe_lshift_func_uint16_t_u_s((p_1034->g_715 = 0x9EE8L), 10)) ^ l_716) && (((safe_div_func_int32_t_s_s(0x216598B8L, 0x7B407FD8L)) < 1L) <= 0x2409L)))) > l_710)));
                }
                for (p_1034->g_47 = 3; (p_1034->g_47 >= 0); p_1034->g_47 -= 1)
                { /* block id: 351 */
                    l_719 = 8L;
                    for (l_687 = 0; (l_687 <= 6); l_687 += 1)
                    { /* block id: 355 */
                        int i;
                        return l_563[(p_1034->g_47 + 3)];
                    }
                }
                for (p_1034->g_703 = 8; (p_1034->g_703 >= 2); p_1034->g_703 -= 1)
                { /* block id: 361 */
                    int32_t l_729 = 1L;
                    uint8_t l_731 = 0xD8L;
                    int16_t *l_738 = &l_710;
                    uint32_t *l_745 = &l_558;
                    for (p_1034->g_140.f1 = 2; (p_1034->g_140.f1 <= 7); p_1034->g_140.f1 += 1)
                    { /* block id: 364 */
                        uint16_t l_730 = 0UL;
                        int32_t l_732 = 3L;
                        uint32_t **l_744 = &p_1034->g_704;
                        int i, j;
                        l_731 = (p_1034->g_377[p_1034->g_428.f1][p_1034->g_140.f1] & (safe_div_func_uint16_t_u_u(((1UL >= (((p_1034->g_724 , (p_1034->g_377[(p_1034->g_140.f1 + 1)][p_1034->g_140.f1] , ((safe_lshift_func_int16_t_s_s((p_1034->g_377[(p_1034->g_140.f1 + 2)][p_1034->g_140.f1] >= (p_1034->g_377[(p_1034->g_703 + 1)][p_1034->g_140.f1] & (l_727 , ((((void*)0 == l_728[2][0]) , l_729) != 1UL)))), 5)) & l_720))) || l_729) > 0x61L)) && l_730), l_727)));
                        l_732 &= l_727;
                        l_746 &= (safe_sub_func_uint32_t_u_u((((*l_744) = ((safe_mul_func_uint8_t_u_u((((void*)0 == l_737[6]) >= (((l_738 = &l_711) == ((p_1034->g_715 > ((safe_rshift_func_uint8_t_u_u(0x53L, 6)) , (l_729 , (safe_mod_func_uint32_t_u_u(((l_727 < l_743) < (l_731 && (*p_1034->g_704))), l_710))))) , &l_687)) > 4UL)), l_729)) , &p_1034->g_250)) != l_745), l_719));
                        (*p_1034->g_747) = &l_746;
                    }
                    for (p_1034->g_715 = 1; (p_1034->g_715 <= 8); p_1034->g_715 += 1)
                    { /* block id: 374 */
                        int32_t **l_748 = (void*)0;
                        int32_t **l_749 = (void*)0;
                        int32_t **l_750 = &l_694[2];
                        (*l_750) = (void*)0;
                        (*p_1034->g_753) = p_1034->g_751;
                    }
                    return l_731;
                }
            }
        }
    }
    for (l_533 = 0; (l_533 != (-11)); l_533--)
    { /* block id: 385 */
        int32_t l_756 = (-6L);
        uint16_t *l_776 = &p_1034->g_775;
        uint32_t l_788[6];
        int32_t l_797[6][9] = {{(-10L),(-3L),(-1L),0x708B3080L,(-1L),(-3L),(-10L),(-1L),1L},{(-10L),(-3L),(-1L),0x708B3080L,(-1L),(-3L),(-10L),(-1L),1L},{(-10L),(-3L),(-1L),0x708B3080L,(-1L),(-3L),(-10L),(-1L),1L},{(-10L),(-3L),(-1L),0x708B3080L,(-1L),(-3L),(-10L),(-1L),1L},{(-10L),(-3L),(-1L),0x708B3080L,(-1L),(-3L),(-10L),(-1L),1L},{(-10L),(-3L),(-1L),0x708B3080L,(-1L),(-3L),(-10L),(-1L),1L}};
        int32_t l_798 = 0x7D6906CEL;
        int32_t l_799 = 0L;
        int32_t l_800 = 7L;
        int32_t l_818 = (-1L);
        int32_t l_820[2];
        uint64_t l_824 = 2UL;
        uint8_t l_893 = 0UL;
        int64_t ***l_925[3][2][9] = {{{&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7],&l_728[1][3],&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7]},{&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7],&l_728[1][3],&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7]}},{{&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7],&l_728[1][3],&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7]},{&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7],&l_728[1][3],&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7]}},{{&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7],&l_728[1][3],&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7]},{&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7],&l_728[1][3],&l_728[1][3],&p_1034->g_239[7],(void*)0,&p_1034->g_239[7]}}};
        uint32_t *l_933[5][3] = {{&p_1034->g_932,&p_1034->g_932,&p_1034->g_932},{&p_1034->g_932,&p_1034->g_932,&p_1034->g_932},{&p_1034->g_932,&p_1034->g_932,&p_1034->g_932},{&p_1034->g_932,&p_1034->g_932,&p_1034->g_932},{&p_1034->g_932,&p_1034->g_932,&p_1034->g_932}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_788[i] = 9UL;
        for (i = 0; i < 2; i++)
            l_820[i] = 0x395CB8CBL;
        (1 + 1);
    }
    p_1034->g_5 &= (safe_rshift_func_int16_t_s_s((((*l_937) = l_694[0]) == &p_1034->g_932), (((l_939 != ((*p_1034->g_700) && (safe_rshift_func_int16_t_s_u(0x2E5EL, ((*p_1034->g_774) = (*p_1034->g_774)))))) >= 1UL) == (safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s((**p_1034->g_751), (((18446744073709551615UL < l_948[0][4]) > l_949[5][1]) & 0x0AL))) != (*p_26)), 3L)) == (*p_1034->g_700)), p_1034->g_461.f1)))));
    return l_950;
}


/* ------------------------------------------ */
/* 
 * reads : p_1034->g_5
 * writes: p_1034->g_5 p_1034->g_4
 */
int8_t * func_28(int16_t  p_29, uint32_t  p_30, int8_t * p_31, int16_t  p_32, struct S1 * p_1034)
{ /* block id: 19 */
    struct S0 *l_344 = &p_1034->g_140;
    int32_t *l_355 = &p_1034->g_4;
    int32_t l_405 = 1L;
    int16_t l_406 = 0x7C9CL;
    int32_t l_407[5] = {0x58CFDACAL,0x58CFDACAL,0x58CFDACAL,0x58CFDACAL,0x58CFDACAL};
    int32_t l_425[7][5][7] = {{{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L}},{{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L}},{{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L}},{{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L}},{{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L}},{{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L}},{{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L},{(-9L),0x7EA61720L,0x550092BAL,(-9L),0x1B10ED41L,(-5L),0x7C6F90B0L}}};
    int64_t l_484[7];
    int32_t l_493 = 1L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_484[i] = 0x5A3B71BF53A79702L;
    for (p_1034->g_5 = 0; (p_1034->g_5 < (-11)); p_1034->g_5 = safe_sub_func_int8_t_s_s(p_1034->g_5, 9))
    { /* block id: 22 */
        uint32_t l_349 = 1UL;
        int8_t *l_351 = &p_1034->g_124;
        int32_t l_411 = 6L;
        int32_t l_412 = 8L;
        int32_t l_413 = 0x3C1D8947L;
        uint16_t l_415 = 0x7798L;
        struct S0 *l_433 = &p_1034->g_179;
        uint32_t l_446 = 0UL;
        int16_t ***l_455 = (void*)0;
        struct S0 **l_508 = &l_344;
        int32_t **l_509 = (void*)0;
        int32_t **l_510 = &p_1034->g_468;
        (1 + 1);
    }
    (*l_355) = (-1L);
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_1034->g_3
 * writes:
 */
int32_t  func_39(uint32_t  p_40, uint64_t  p_41, int8_t * p_42, uint32_t  p_43, struct S1 * p_1034)
{ /* block id: 15 */
    return p_1034->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1034->g_16 p_1034->g_3 p_1034->g_4 p_1034->g_49 p_1034->g_109 p_1034->g_88 p_1034->g_116 p_1034->g_47 p_1034->g_124 p_1034->g_84 p_1034->g_5 p_1034->g_140 p_1034->g_144 p_1034->g_155 p_1034->g_167 p_1034->g_63 p_1034->g_174 p_1034->g_177 p_1034->g_180 p_1034->g_179.f0 p_1034->g_163 p_1034->g_186 p_1034->g_219 p_1034->g_220 p_1034->g_179.f2 p_1034->g_239 p_1034->g_268 p_1034->g_269 p_1034->g_179.f1 p_1034->g_250 p_1034->g_310 p_1034->g_326
 * writes: p_1034->g_4 p_1034->g_63 p_1034->g_16 p_1034->g_109 p_1034->g_88 p_1034->g_3 p_1034->g_116 p_1034->g_47 p_1034->g_124 p_1034->g_144 p_1034->g_140.f1 p_1034->g_155 p_1034->g_163 p_1034->g_167 p_1034->g_174 p_1034->g_179 p_1034->g_180 p_1034->g_186 p_1034->g_219 p_1034->g_326
 */
int32_t * func_55(int8_t * p_56, struct S1 * p_1034)
{ /* block id: 28 */
    uint8_t l_69 = 3UL;
    int32_t l_86[1];
    uint32_t *l_249 = &p_1034->g_250;
    int32_t l_279 = 0x6E211E06L;
    int i;
    for (i = 0; i < 1; i++)
        l_86[i] = (-4L);
    if ((p_1034->g_16 > p_1034->g_3))
    { /* block id: 29 */
        uint32_t l_70 = 1UL;
        int32_t l_81 = 0x03D71515L;
        int32_t l_82 = 0x13A2BBEBL;
        int32_t l_83 = 0x71DABD33L;
        int32_t l_87 = 0x7A7A01C1L;
        uint32_t l_89 = 4294967295UL;
        int64_t *l_106 = &p_1034->g_63[0];
        uint64_t l_280[2][7] = {{0xACC1720F163D5327L,0x8C6F49F01A57ABBEL,0xACC1720F163D5327L,0xACC1720F163D5327L,0x8C6F49F01A57ABBEL,0xACC1720F163D5327L,0xACC1720F163D5327L},{0xACC1720F163D5327L,0x8C6F49F01A57ABBEL,0xACC1720F163D5327L,0xACC1720F163D5327L,0x8C6F49F01A57ABBEL,0xACC1720F163D5327L,0xACC1720F163D5327L}};
        struct S0 *l_305[4];
        int8_t *l_320[9];
        int i, j;
        for (i = 0; i < 4; i++)
            l_305[i] = &p_1034->g_177;
        for (i = 0; i < 9; i++)
            l_320[i] = &p_1034->g_124;
        for (p_1034->g_4 = 0; (p_1034->g_4 < (-12)); --p_1034->g_4)
        { /* block id: 32 */
            int16_t *l_61 = &p_1034->g_47;
            int64_t *l_62 = &p_1034->g_63[2];
            int32_t l_66 = 0x100A0D1FL;
            int64_t **l_241 = &l_62;
            int32_t *l_278[4] = {&p_1034->g_3,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3};
            uint8_t *l_304 = &p_1034->g_109;
            int i;
            if (((((*l_62) = (p_1034->g_4 < (l_61 != (void*)0))) , (safe_div_func_int64_t_s_s((func_10(((l_66 != ((1L <= (safe_sub_func_uint16_t_u_u(0UL, l_69))) | ((*p_56) = (l_70 <= p_1034->g_16)))) , 0x5A123482L), l_66, p_1034) | l_66), p_1034->g_49))) == p_1034->g_3))
            { /* block id: 35 */
                int32_t *l_71 = &p_1034->g_3;
                int32_t *l_72 = &p_1034->g_3;
                int32_t *l_73 = (void*)0;
                int32_t *l_74 = &p_1034->g_3;
                int32_t *l_75 = &l_66;
                int32_t *l_76 = (void*)0;
                int32_t *l_77 = &l_66;
                int32_t *l_78 = (void*)0;
                int32_t *l_79 = &l_66;
                int32_t *l_80[7];
                uint8_t *l_102 = &l_69;
                int i;
                for (i = 0; i < 7; i++)
                    l_80[i] = &p_1034->g_3;
                l_89--;
                p_1034->g_186[0][1][4] |= (safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(((*l_61) = ((safe_mod_func_int16_t_s_s(p_1034->g_4, ((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((((((*l_102) |= (*l_79)) , func_103(l_69, l_106, p_1034)) != l_62) & (l_83 ^= 0x5E4669C2L)), ((4294967295UL ^ 0x7EEB8460L) > p_1034->g_5))) != l_86[0]), (-1L))) , (-1L)))) , 0x0C86L)), p_1034->g_63[2])), p_1034->g_5));
            }
            else
            { /* block id: 93 */
                uint8_t l_191 = 0x7CL;
                int32_t l_192 = 0L;
                int32_t l_217 = 0x2A2CC396L;
                uint16_t *l_260 = (void*)0;
                int32_t *l_261[4][5] = {{&l_217,&p_1034->g_5,&p_1034->g_186[1][0][5],&p_1034->g_5,&l_217},{&l_217,&p_1034->g_5,&p_1034->g_186[1][0][5],&p_1034->g_5,&l_217},{&l_217,&p_1034->g_5,&p_1034->g_186[1][0][5],&p_1034->g_5,&l_217},{&l_217,&p_1034->g_5,&p_1034->g_186[1][0][5],&p_1034->g_5,&l_217}};
                int i, j;
                for (l_66 = 0; (l_66 <= 0); l_66 += 1)
                { /* block id: 96 */
                    uint32_t l_187 = 4294967295UL;
                    int32_t *l_190 = &l_81;
                    struct S0 *l_197[1];
                    struct S0 **l_198 = (void*)0;
                    struct S0 **l_199 = &l_197[0];
                    uint8_t *l_202 = &l_191;
                    uint32_t *l_218[9] = {&l_89,&l_89,&l_89,&l_89,&l_89,&l_89,&l_89,&l_89,&l_89};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_197[i] = &p_1034->g_179;
                    l_187--;
                    l_191 &= ((*l_190) = p_1034->g_116[(l_66 + 6)][(l_66 + 2)]);
                    (*l_190) = (((l_192 ^= l_86[l_66]) < (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((*l_199) = l_197[0]) == &p_1034->g_177), ((safe_lshift_func_uint8_t_u_u(((*l_202) = p_1034->g_116[0][3]), ((l_66 <= (((((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((((safe_sub_func_int32_t_s_s(((p_1034->g_219 ^= (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((-6L), 0x36L)), 2)) < 0L), (safe_div_func_uint16_t_u_u(65534UL, l_217))))) >= 0x67DB0B19L), 0x2170B35BL)) && p_1034->g_220) , (*p_56)), l_66)), p_1034->g_186[0][1][4])) > 8UL) || l_89) , l_83) == p_1034->g_3)) >= 0x08AAE12BL))) | l_82))), 11))) <= p_1034->g_63[3]);
                }
                if (p_1034->g_179.f2)
                    break;
                for (p_1034->g_144 = (-16); (p_1034->g_144 <= 21); p_1034->g_144 = safe_add_func_int64_t_s_s(p_1034->g_144, 1))
                { /* block id: 109 */
                    uint32_t l_227 = 0x4AB9F6C5L;
                    uint64_t *l_236 = &p_1034->g_180;
                    int64_t **l_242 = (void*)0;
                    uint32_t *l_247 = (void*)0;
                    if (((p_1034->g_16 &= (safe_rshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((l_227 ^ (((safe_div_func_uint64_t_u_u(((p_1034->g_5 & (((safe_mod_func_int16_t_s_s(((*l_61) &= (safe_div_func_int32_t_s_s((!(safe_sub_func_uint64_t_u_u(((*l_236) |= 0x36F912460D410FCCL), l_86[0]))), (l_83 = (safe_rshift_func_int16_t_s_s(l_227, (((l_241 = p_1034->g_239[7]) != l_242) , (safe_rshift_func_int8_t_s_s((-1L), (safe_mod_func_int32_t_s_s((((&p_1034->g_186[0][1][4] == &p_1034->g_186[0][1][4]) && l_66) == 251UL), p_1034->g_177.f0))))))))))), 65531UL)) <= l_87) < l_191)) , l_66), 1L)) | 0xE527677EL) <= 0x68L)) != 0xCCL), p_1034->g_5)) != l_192), 11))) | 0x4BL))
                    { /* block id: 115 */
                        return &p_1034->g_163;
                    }
                    else
                    { /* block id: 117 */
                        int32_t *l_248 = &p_1034->g_163;
                        (*l_248) = 0x556119E4L;
                        return &p_1034->g_186[0][1][4];
                    }
                }
                p_1034->g_219 = ((l_249 == (void*)0) || (l_86[0] = (((l_62 != l_106) , (safe_mod_func_uint32_t_u_u((l_86[0] >= (safe_div_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((*p_56))), l_192))), l_66))) , (safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(l_66, 10)), l_86[0])))));
            }
            l_279 |= (((((safe_lshift_func_int8_t_s_s((((*p_56) , ((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((!((p_1034->g_268[1][2] == (p_1034->g_269[4] , (void*)0)) < (((((safe_div_func_uint64_t_u_u((l_66 >= (!p_1034->g_179.f1)), (safe_unary_minus_func_uint32_t_u(4294967295UL)))) <= (l_86[0] |= (safe_unary_minus_func_int8_t_s((*p_56))))) <= ((((safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((((0x0D0BL == l_66) , p_1034->g_219) | p_1034->g_180), l_66)), l_66)) , l_69) , 1L) < 0UL)) | l_66) || 0x41E3L))), l_69)), 0x0DE0L)) , &p_1034->g_220)) != l_106), l_69)) < p_1034->g_47) == p_1034->g_180) >= 0x25A5L) || l_86[0]);
            ++l_280[1][6];
            if ((safe_div_func_uint8_t_u_u((!(((~(safe_add_func_int64_t_s_s(l_279, p_1034->g_250))) , l_279) && (safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*p_56) = (safe_div_func_int16_t_s_s(l_70, p_1034->g_220))), (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s(((((safe_mod_func_uint32_t_u_u((~(safe_rshift_func_int16_t_s_u((&p_1034->g_174 != l_304), 15))), 0x05452BFEL)) && ((void*)0 == l_305[2])) > p_1034->g_140.f1) , p_1034->g_269[4]))) ^ 4294967295UL), p_1034->g_186[0][0][5])))), 0L)) , (*p_56)) != 0x29L), 0x486A4F33L)))), p_1034->g_186[0][1][4])))
            { /* block id: 129 */
                uint32_t l_319 = 0x865D62C6L;
                for (l_66 = (-29); (l_66 < 21); ++l_66)
                { /* block id: 132 */
                    uint16_t *l_312 = &p_1034->g_155;
                    int32_t l_321 = 0x0880EE76L;
                    int32_t *l_324 = &p_1034->g_163;
                    for (l_69 = 0; (l_69 > 58); l_69 = safe_add_func_int32_t_s_s(l_69, 2))
                    { /* block id: 135 */
                        return &p_1034->g_186[0][0][7];
                    }
                    l_279 &= (((void*)0 != p_1034->g_310) <= (--(*l_312)));
                    l_321 = (p_1034->g_179.f2 < (p_1034->g_88 < ((safe_mul_func_uint8_t_u_u(l_319, p_1034->g_124)) == ((void*)0 != l_320[0]))));
                    for (p_1034->g_3 = 23; (p_1034->g_3 <= (-22)); --p_1034->g_3)
                    { /* block id: 143 */
                        int32_t **l_325[8] = {&l_278[1],&l_278[1],&l_278[1],&l_278[1],&l_278[1],&l_278[1],&l_278[1],&l_278[1]};
                        int i;
                        l_278[3] = l_324;
                        (*l_324) = 1L;
                    }
                }
                return &p_1034->g_4;
            }
            else
            { /* block id: 149 */
                int16_t ** volatile *l_329[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_329[i] = &p_1034->g_326[1];
                p_1034->g_326[7] = p_1034->g_326[7];
                if (l_83)
                    continue;
            }
        }
        return &p_1034->g_163;
    }
    else
    { /* block id: 155 */
        int32_t *l_330[9] = {&p_1034->g_186[0][1][4],&p_1034->g_186[0][1][4],&p_1034->g_186[0][1][4],&p_1034->g_186[0][1][4],&p_1034->g_186[0][1][4],&p_1034->g_186[0][1][4],&p_1034->g_186[0][1][4],&p_1034->g_186[0][1][4],&p_1034->g_186[0][1][4]};
        int i;
        return l_330[0];
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_1034->g_109 p_1034->g_88 p_1034->g_3 p_1034->g_116 p_1034->g_47 p_1034->g_124 p_1034->g_84 p_1034->g_16 p_1034->g_5 p_1034->g_140 p_1034->g_144 p_1034->g_155 p_1034->g_4 p_1034->g_167 p_1034->g_63 p_1034->g_174 p_1034->g_177 p_1034->g_180 p_1034->g_179.f0 p_1034->g_163
 * writes: p_1034->g_109 p_1034->g_88 p_1034->g_3 p_1034->g_116 p_1034->g_47 p_1034->g_124 p_1034->g_144 p_1034->g_140.f1 p_1034->g_155 p_1034->g_163 p_1034->g_167 p_1034->g_174 p_1034->g_179 p_1034->g_180
 */
int64_t * func_103(int32_t  p_104, int64_t * p_105, struct S1 * p_1034)
{ /* block id: 38 */
    int32_t *l_107 = &p_1034->g_3;
    int32_t *l_108[5][7][1] = {{{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3}},{{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3}},{{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3}},{{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3}},{{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3},{&p_1034->g_3}}};
    int8_t *l_139 = &p_1034->g_16;
    int64_t *l_185[2][6] = {{&p_1034->g_63[2],&p_1034->g_63[2],&p_1034->g_63[2],&p_1034->g_63[2],&p_1034->g_63[2],&p_1034->g_63[2]},{&p_1034->g_63[2],&p_1034->g_63[2],&p_1034->g_63[2],&p_1034->g_63[2],&p_1034->g_63[2],&p_1034->g_63[2]}};
    int i, j, k;
    p_1034->g_109--;
    for (p_1034->g_88 = 4; (p_1034->g_88 != 22); ++p_1034->g_88)
    { /* block id: 42 */
        int32_t *l_145[9][3] = {{&p_1034->g_4,&p_1034->g_3,&p_1034->g_4},{&p_1034->g_4,&p_1034->g_3,&p_1034->g_4},{&p_1034->g_4,&p_1034->g_3,&p_1034->g_4},{&p_1034->g_4,&p_1034->g_3,&p_1034->g_4},{&p_1034->g_4,&p_1034->g_3,&p_1034->g_4},{&p_1034->g_4,&p_1034->g_3,&p_1034->g_4},{&p_1034->g_4,&p_1034->g_3,&p_1034->g_4},{&p_1034->g_4,&p_1034->g_3,&p_1034->g_4},{&p_1034->g_4,&p_1034->g_3,&p_1034->g_4}};
        int i, j;
        for (p_1034->g_3 = 0; (p_1034->g_3 <= (-28)); --p_1034->g_3)
        { /* block id: 45 */
            uint64_t l_121[9] = {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL};
            uint16_t l_141[3];
            int32_t l_142[2];
            int i;
            for (i = 0; i < 3; i++)
                l_141[i] = 0xA82DL;
            for (i = 0; i < 2; i++)
                l_142[i] = 5L;
            --p_1034->g_116[8][3];
            for (p_1034->g_47 = 0; (p_1034->g_47 < 6); p_1034->g_47++)
            { /* block id: 49 */
                l_121[2]--;
                p_1034->g_124 ^= p_1034->g_3;
            }
            if ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(func_10(p_1034->g_84, (&p_1034->g_4 != (void*)0), p_1034), p_1034->g_16)), p_104)))
            { /* block id: 53 */
                for (p_104 = 6; (p_104 >= (-17)); p_104 = safe_sub_func_uint32_t_u_u(p_104, 3))
                { /* block id: 56 */
                    return &p_1034->g_63[2];
                }
                if (p_1034->g_47)
                    break;
                if (p_1034->g_5)
                    continue;
            }
            else
            { /* block id: 61 */
                uint64_t *l_143[9] = {&p_1034->g_144,&p_1034->g_144,&p_1034->g_144,&p_1034->g_144,&p_1034->g_144,&p_1034->g_144,&p_1034->g_144,&p_1034->g_144,&p_1034->g_144};
                struct S0 *l_178[7][2][3] = {{{&p_1034->g_177,(void*)0,&p_1034->g_177},{&p_1034->g_177,(void*)0,&p_1034->g_177}},{{&p_1034->g_177,(void*)0,&p_1034->g_177},{&p_1034->g_177,(void*)0,&p_1034->g_177}},{{&p_1034->g_177,(void*)0,&p_1034->g_177},{&p_1034->g_177,(void*)0,&p_1034->g_177}},{{&p_1034->g_177,(void*)0,&p_1034->g_177},{&p_1034->g_177,(void*)0,&p_1034->g_177}},{{&p_1034->g_177,(void*)0,&p_1034->g_177},{&p_1034->g_177,(void*)0,&p_1034->g_177}},{{&p_1034->g_177,(void*)0,&p_1034->g_177},{&p_1034->g_177,(void*)0,&p_1034->g_177}},{{&p_1034->g_177,(void*)0,&p_1034->g_177},{&p_1034->g_177,(void*)0,&p_1034->g_177}}};
                int i, j, k;
                p_1034->g_179 = func_131((p_1034->g_144 |= (safe_rshift_func_int16_t_s_u((p_104 >= (l_142[1] = func_39((l_139 != (void*)0), p_104, l_139, ((func_10((p_1034->g_140 , p_104), l_141[1], p_1034) && p_1034->g_140.f1) ^ 0x24C5L), p_1034))), 6))), p_104, &p_1034->g_109, l_139, l_145[4][0], p_1034);
                if (p_104)
                    continue;
                if (p_1034->g_63[2])
                    continue;
                ++p_1034->g_180;
            }
            for (p_1034->g_180 = (-12); (p_1034->g_180 < 13); ++p_1034->g_180)
            { /* block id: 82 */
                p_1034->g_163 ^= (p_1034->g_179.f0 > p_104);
            }
        }
        l_145[7][0] = &p_104;
        l_108[1][6][0] = l_108[1][6][0];
    }
    return l_185[0][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1034->g_5 p_1034->g_3 p_1034->g_140.f1 p_1034->g_155 p_1034->g_124 p_1034->g_4 p_1034->g_167 p_1034->g_63 p_1034->g_174 p_1034->g_177
 * writes: p_1034->g_140.f1 p_1034->g_155 p_1034->g_163 p_1034->g_167 p_1034->g_174
 */
struct S0  func_131(uint64_t  p_132, int8_t  p_133, uint8_t * p_134, int8_t * p_135, int32_t * p_136, struct S1 * p_1034)
{ /* block id: 64 */
    int32_t l_146 = 0x123EB6B1L;
    uint64_t *l_147 = &p_1034->g_140.f1;
    uint16_t *l_154 = &p_1034->g_155;
    uint32_t l_160[5] = {3UL,3UL,3UL,3UL,3UL};
    int32_t *l_172 = &p_1034->g_163;
    int32_t *l_173[2][3][10] = {{{&p_1034->g_3,&p_1034->g_3,&p_1034->g_4,(void*)0,&p_1034->g_3,(void*)0,&p_1034->g_4,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3},{&p_1034->g_3,&p_1034->g_3,&p_1034->g_4,(void*)0,&p_1034->g_3,(void*)0,&p_1034->g_4,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3},{&p_1034->g_3,&p_1034->g_3,&p_1034->g_4,(void*)0,&p_1034->g_3,(void*)0,&p_1034->g_4,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3}},{{&p_1034->g_3,&p_1034->g_3,&p_1034->g_4,(void*)0,&p_1034->g_3,(void*)0,&p_1034->g_4,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3},{&p_1034->g_3,&p_1034->g_3,&p_1034->g_4,(void*)0,&p_1034->g_3,(void*)0,&p_1034->g_4,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3},{&p_1034->g_3,&p_1034->g_3,&p_1034->g_4,(void*)0,&p_1034->g_3,(void*)0,&p_1034->g_4,&p_1034->g_3,&p_1034->g_3,&p_1034->g_3}}};
    int i, j, k;
    (*l_172) = func_39(p_1034->g_5, ((*l_147) &= (l_146 > (l_146 , p_1034->g_3))), func_148(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((0x091D30EDL < ((--(*l_154)) && (safe_add_func_uint64_t_u_u(0x419A621B44B642EDL, p_132)))) | ((&p_1034->g_144 != l_147) <= 0x1DD34E5BL)) <= 0x82BFL), p_1034->g_124)), l_160[2])) != 0x6591A8809466F024L), p_1034), p_1034->g_63[2], p_1034);
    --p_1034->g_174;
    return p_1034->g_177;
}


/* ------------------------------------------ */
/* 
 * reads : p_1034->g_4 p_1034->g_167
 * writes: p_1034->g_163 p_1034->g_167
 */
int8_t * func_148(uint16_t  p_149, struct S1 * p_1034)
{ /* block id: 67 */
    uint32_t l_161[6] = {5UL,0x11D49593L,5UL,5UL,0x11D49593L,5UL};
    int32_t *l_162 = &p_1034->g_163;
    int32_t *l_164 = (void*)0;
    int32_t l_165[5];
    int32_t *l_166[10][9][2] = {{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}},{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}},{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}},{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}},{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}},{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}},{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}},{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}},{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}},{{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]},{&l_165[4],&l_165[4]}}};
    int64_t **l_170 = (void*)0;
    int8_t *l_171 = &p_1034->g_124;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_165[i] = 1L;
    (*l_162) = (p_1034->g_4 != l_161[0]);
    p_1034->g_167++;
    l_170 = (void*)0;
    return l_171;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1035;
    struct S1* p_1034 = &c_1035;
    struct S1 c_1036 = {
        1L, // p_1034->g_3
        1L, // p_1034->g_4
        0x7182ABBFL, // p_1034->g_5
        0x1BL, // p_1034->g_16
        (-1L), // p_1034->g_47
        (-8L), // p_1034->g_49
        {0x0344157F02CAA0E6L,0x0344157F02CAA0E6L,0x0344157F02CAA0E6L,0x0344157F02CAA0E6L}, // p_1034->g_63
        0x6155BF9BL, // p_1034->g_84
        1L, // p_1034->g_85
        6L, // p_1034->g_88
        0xF8L, // p_1034->g_109
        {{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL},{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL},{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL},{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL},{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL},{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL},{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL},{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL},{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL},{18446744073709551615UL,0x772618A8B4E140BDL,0xCDB194A10B7D5E36L,0UL,0xCDB194A10B7D5E36L,0x772618A8B4E140BDL}}, // p_1034->g_116
        0x78L, // p_1034->g_124
        {0x940FB084A9EC0CD8L,4UL,0x5EL}, // p_1034->g_140
        18446744073709551615UL, // p_1034->g_144
        0x9175L, // p_1034->g_155
        7L, // p_1034->g_163
        255UL, // p_1034->g_167
        0x39L, // p_1034->g_174
        {18446744073709551612UL,0x0BB33706F73C81C1L,0x56L}, // p_1034->g_177
        {0x3D2019615F9F8B71L,18446744073709551615UL,8L}, // p_1034->g_179
        0xA958F48771553A1BL, // p_1034->g_180
        {{{1L,1L,0x17E51FD4L,(-5L),(-5L),(-5L),0x17E51FD4L,1L},{1L,1L,0x17E51FD4L,(-5L),(-5L),(-5L),0x17E51FD4L,1L}},{{1L,1L,0x17E51FD4L,(-5L),(-5L),(-5L),0x17E51FD4L,1L},{1L,1L,0x17E51FD4L,(-5L),(-5L),(-5L),0x17E51FD4L,1L}}}, // p_1034->g_186
        (-8L), // p_1034->g_219
        0x520F3B2C5943381AL, // p_1034->g_220
        &p_1034->g_63[2], // p_1034->g_240
        {&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240,&p_1034->g_240}, // p_1034->g_239
        1UL, // p_1034->g_250
        {{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180},{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180},{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180},{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180},{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180},{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180},{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180},{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180},{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180},{&p_1034->g_180,&p_1034->g_180,&p_1034->g_180}}, // p_1034->g_268
        {0xDD63B8A3L,0xB86BEE1FL,0xDD63B8A3L,0xDD63B8A3L,0xB86BEE1FL,0xDD63B8A3L,0xDD63B8A3L,0xB86BEE1FL,0xDD63B8A3L}, // p_1034->g_269
        &p_1034->g_140, // p_1034->g_311
        &p_1034->g_311, // p_1034->g_310
        &p_1034->g_47, // p_1034->g_327
        {&p_1034->g_327,&p_1034->g_327,&p_1034->g_327,&p_1034->g_327,&p_1034->g_327,&p_1034->g_327,&p_1034->g_327,&p_1034->g_327,&p_1034->g_327}, // p_1034->g_326
        (void*)0, // p_1034->g_328
        (void*)0, // p_1034->g_352
        0x1FACL, // p_1034->g_374
        {{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L},{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L},{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L},{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L},{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L},{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L},{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L},{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L},{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L},{0UL,0x5370DE612A070A53L,0x7E9D785869A014F1L,0x7E9D785869A014F1L,0x5370DE612A070A53L,0UL,0x56D1DA9DB1197ECBL,0xF2C9D8CCFA6725A7L}}, // p_1034->g_377
        8L, // p_1034->g_391
        {&p_1034->g_391,&p_1034->g_391,&p_1034->g_391,&p_1034->g_391,&p_1034->g_391}, // p_1034->g_390
        {1L,1L,1L}, // p_1034->g_422
        {0UL,0x294ABE02DAD57D12L,0x47L}, // p_1034->g_428
        &p_1034->g_186[0][1][4], // p_1034->g_439
        {0UL,1UL,-1L}, // p_1034->g_461
        (void*)0, // p_1034->g_468
        {&p_1034->g_468}, // p_1034->g_467
        &p_1034->g_468, // p_1034->g_487
        &p_1034->g_3, // p_1034->g_522
        {2UL,18446744073709551615UL,-3L}, // p_1034->g_535
        &p_1034->g_468, // p_1034->g_576
        0x5EE8B60CL, // p_1034->g_597
        &p_1034->g_390[1], // p_1034->g_624
        &p_1034->g_624, // p_1034->g_623
        {{1L,0x0674L,(-1L),0x41FCL,0x0674L,0x41FCL},{1L,0x0674L,(-1L),0x41FCL,0x0674L,0x41FCL},{1L,0x0674L,(-1L),0x41FCL,0x0674L,0x41FCL},{1L,0x0674L,(-1L),0x41FCL,0x0674L,0x41FCL},{1L,0x0674L,(-1L),0x41FCL,0x0674L,0x41FCL},{1L,0x0674L,(-1L),0x41FCL,0x0674L,0x41FCL}}, // p_1034->g_686
        0x067BL, // p_1034->g_690
        &p_1034->g_109, // p_1034->g_700
        &p_1034->g_700, // p_1034->g_699
        0L, // p_1034->g_703
        &p_1034->g_597, // p_1034->g_704
        (void*)0, // p_1034->g_706
        0UL, // p_1034->g_715
        {0x4F2EE489860F96A0L,18446744073709551607UL,0L}, // p_1034->g_724
        &p_1034->g_468, // p_1034->g_747
        &p_1034->g_16, // p_1034->g_752
        &p_1034->g_752, // p_1034->g_751
        &p_1034->g_751, // p_1034->g_753
        0x0A10L, // p_1034->g_775
        &p_1034->g_775, // p_1034->g_774
        (-9L), // p_1034->g_789
        &p_1034->g_468, // p_1034->g_869
        {{&p_1034->g_724,&p_1034->g_140,&p_1034->g_724,&p_1034->g_724},{&p_1034->g_724,&p_1034->g_140,&p_1034->g_724,&p_1034->g_724}}, // p_1034->g_870
        {0x978E851EBBC4A64AL,0x286B59FCFE0CC58EL,0x4AL}, // p_1034->g_871
        {0x0BD05D61945BFDA0L,1UL,0x73L}, // p_1034->g_872
        {18446744073709551611UL,18446744073709551613UL,-8L}, // p_1034->g_895
        {1UL,0x14E4DD1A58E81212L,-1L}, // p_1034->g_896
        0x82A6BEBCL, // p_1034->g_932
        9UL, // p_1034->g_934
        {{0x51E57C61E00BA5E3L,0xB2CCB589C739F09FL,0x55L},{0x51E57C61E00BA5E3L,0xB2CCB589C739F09FL,0x55L},{0x51E57C61E00BA5E3L,0xB2CCB589C739F09FL,0x55L},{0x51E57C61E00BA5E3L,0xB2CCB589C739F09FL,0x55L},{0x51E57C61E00BA5E3L,0xB2CCB589C739F09FL,0x55L}}, // p_1034->g_1015
        0xED99L, // p_1034->g_1019
        1L, // p_1034->g_1028
        {&p_1034->g_468,&p_1034->g_468,&p_1034->g_468,&p_1034->g_468}, // p_1034->g_1031
    };
    c_1035 = c_1036;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1034);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1034->g_3, "p_1034->g_3", print_hash_value);
    transparent_crc(p_1034->g_4, "p_1034->g_4", print_hash_value);
    transparent_crc(p_1034->g_5, "p_1034->g_5", print_hash_value);
    transparent_crc(p_1034->g_16, "p_1034->g_16", print_hash_value);
    transparent_crc(p_1034->g_47, "p_1034->g_47", print_hash_value);
    transparent_crc(p_1034->g_49, "p_1034->g_49", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1034->g_63[i], "p_1034->g_63[i]", print_hash_value);

    }
    transparent_crc(p_1034->g_84, "p_1034->g_84", print_hash_value);
    transparent_crc(p_1034->g_85, "p_1034->g_85", print_hash_value);
    transparent_crc(p_1034->g_88, "p_1034->g_88", print_hash_value);
    transparent_crc(p_1034->g_109, "p_1034->g_109", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1034->g_116[i][j], "p_1034->g_116[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1034->g_124, "p_1034->g_124", print_hash_value);
    transparent_crc(p_1034->g_140.f0, "p_1034->g_140.f0", print_hash_value);
    transparent_crc(p_1034->g_140.f1, "p_1034->g_140.f1", print_hash_value);
    transparent_crc(p_1034->g_140.f2, "p_1034->g_140.f2", print_hash_value);
    transparent_crc(p_1034->g_144, "p_1034->g_144", print_hash_value);
    transparent_crc(p_1034->g_155, "p_1034->g_155", print_hash_value);
    transparent_crc(p_1034->g_163, "p_1034->g_163", print_hash_value);
    transparent_crc(p_1034->g_167, "p_1034->g_167", print_hash_value);
    transparent_crc(p_1034->g_174, "p_1034->g_174", print_hash_value);
    transparent_crc(p_1034->g_177.f0, "p_1034->g_177.f0", print_hash_value);
    transparent_crc(p_1034->g_177.f1, "p_1034->g_177.f1", print_hash_value);
    transparent_crc(p_1034->g_177.f2, "p_1034->g_177.f2", print_hash_value);
    transparent_crc(p_1034->g_179.f0, "p_1034->g_179.f0", print_hash_value);
    transparent_crc(p_1034->g_179.f1, "p_1034->g_179.f1", print_hash_value);
    transparent_crc(p_1034->g_179.f2, "p_1034->g_179.f2", print_hash_value);
    transparent_crc(p_1034->g_180, "p_1034->g_180", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1034->g_186[i][j][k], "p_1034->g_186[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1034->g_219, "p_1034->g_219", print_hash_value);
    transparent_crc(p_1034->g_220, "p_1034->g_220", print_hash_value);
    transparent_crc(p_1034->g_250, "p_1034->g_250", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1034->g_269[i], "p_1034->g_269[i]", print_hash_value);

    }
    transparent_crc(p_1034->g_374, "p_1034->g_374", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1034->g_377[i][j], "p_1034->g_377[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1034->g_391, "p_1034->g_391", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1034->g_422[i], "p_1034->g_422[i]", print_hash_value);

    }
    transparent_crc(p_1034->g_428.f0, "p_1034->g_428.f0", print_hash_value);
    transparent_crc(p_1034->g_428.f1, "p_1034->g_428.f1", print_hash_value);
    transparent_crc(p_1034->g_428.f2, "p_1034->g_428.f2", print_hash_value);
    transparent_crc(p_1034->g_461.f0, "p_1034->g_461.f0", print_hash_value);
    transparent_crc(p_1034->g_461.f1, "p_1034->g_461.f1", print_hash_value);
    transparent_crc(p_1034->g_461.f2, "p_1034->g_461.f2", print_hash_value);
    transparent_crc(p_1034->g_535.f0, "p_1034->g_535.f0", print_hash_value);
    transparent_crc(p_1034->g_535.f1, "p_1034->g_535.f1", print_hash_value);
    transparent_crc(p_1034->g_535.f2, "p_1034->g_535.f2", print_hash_value);
    transparent_crc(p_1034->g_597, "p_1034->g_597", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1034->g_686[i][j], "p_1034->g_686[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1034->g_690, "p_1034->g_690", print_hash_value);
    transparent_crc(p_1034->g_703, "p_1034->g_703", print_hash_value);
    transparent_crc(p_1034->g_715, "p_1034->g_715", print_hash_value);
    transparent_crc(p_1034->g_724.f0, "p_1034->g_724.f0", print_hash_value);
    transparent_crc(p_1034->g_724.f1, "p_1034->g_724.f1", print_hash_value);
    transparent_crc(p_1034->g_724.f2, "p_1034->g_724.f2", print_hash_value);
    transparent_crc(p_1034->g_775, "p_1034->g_775", print_hash_value);
    transparent_crc(p_1034->g_789, "p_1034->g_789", print_hash_value);
    transparent_crc(p_1034->g_871.f0, "p_1034->g_871.f0", print_hash_value);
    transparent_crc(p_1034->g_871.f1, "p_1034->g_871.f1", print_hash_value);
    transparent_crc(p_1034->g_871.f2, "p_1034->g_871.f2", print_hash_value);
    transparent_crc(p_1034->g_872.f0, "p_1034->g_872.f0", print_hash_value);
    transparent_crc(p_1034->g_872.f1, "p_1034->g_872.f1", print_hash_value);
    transparent_crc(p_1034->g_872.f2, "p_1034->g_872.f2", print_hash_value);
    transparent_crc(p_1034->g_895.f0, "p_1034->g_895.f0", print_hash_value);
    transparent_crc(p_1034->g_895.f1, "p_1034->g_895.f1", print_hash_value);
    transparent_crc(p_1034->g_895.f2, "p_1034->g_895.f2", print_hash_value);
    transparent_crc(p_1034->g_896.f0, "p_1034->g_896.f0", print_hash_value);
    transparent_crc(p_1034->g_896.f1, "p_1034->g_896.f1", print_hash_value);
    transparent_crc(p_1034->g_896.f2, "p_1034->g_896.f2", print_hash_value);
    transparent_crc(p_1034->g_932, "p_1034->g_932", print_hash_value);
    transparent_crc(p_1034->g_934, "p_1034->g_934", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1034->g_1015[i].f0, "p_1034->g_1015[i].f0", print_hash_value);
        transparent_crc(p_1034->g_1015[i].f1, "p_1034->g_1015[i].f1", print_hash_value);
        transparent_crc(p_1034->g_1015[i].f2, "p_1034->g_1015[i].f2", print_hash_value);

    }
    transparent_crc(p_1034->g_1019, "p_1034->g_1019", print_hash_value);
    transparent_crc(p_1034->g_1028, "p_1034->g_1028", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
