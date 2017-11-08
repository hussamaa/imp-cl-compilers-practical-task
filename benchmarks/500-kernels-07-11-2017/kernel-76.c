// -g 58,4,3 -l 1,1,3
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


// Seed: 2070297950

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint8_t  f0;
   int16_t  f1;
};

struct S1 {
    uint64_t g_7;
    int32_t g_11;
    int16_t g_43;
    int16_t g_51;
    uint16_t g_52[3];
    union U0 g_55;
    int32_t g_58;
    int32_t *g_84;
    int32_t **g_83;
    union U0 g_92;
    uint32_t g_94;
    uint32_t g_99;
    int8_t g_108;
    int32_t g_120;
    uint16_t g_152[7];
    uint32_t *g_172;
    int64_t g_175;
    uint64_t g_178;
    uint32_t g_208;
    uint8_t g_222[7];
    uint8_t *g_221;
    int32_t g_234;
    volatile uint32_t g_264;
    int8_t *g_295;
    volatile uint8_t g_347;
    int8_t g_372;
    int16_t g_373;
    uint32_t g_374[7];
    uint16_t *g_421;
    uint16_t **g_420;
    uint16_t g_473;
    uint32_t g_476;
    int32_t g_540;
    volatile int32_t g_542[1][10][6];
    volatile uint16_t g_543;
    uint64_t g_560;
    volatile int16_t g_608;
    uint32_t g_611;
    volatile uint16_t *g_639;
    volatile uint16_t **g_638;
    volatile uint16_t ***g_637;
    volatile uint16_t *** volatile *g_636;
    volatile union U0 g_650;
    uint8_t ** volatile *g_741;
    volatile union U0 g_758[7];
    volatile union U0 g_776;
    int32_t g_786;
    int32_t *g_788;
    int32_t ** volatile g_787[8];
    int32_t ** volatile g_789;
    int32_t ** volatile g_800;
    union U0 g_828;
    int32_t * volatile g_857;
    int32_t * volatile g_859[3];
    volatile uint32_t g_894;
    volatile uint32_t * volatile * volatile *g_911;
    union U0 g_936;
    int8_t g_961;
    int8_t g_963[3][8];
    int8_t g_1030;
    int32_t *** volatile g_1036;
    uint64_t *g_1072;
    uint32_t **g_1122;
    uint32_t ***g_1121;
    int64_t g_1156;
    uint32_t *g_1161;
    uint32_t **g_1160[5][4][8];
    uint64_t g_1219;
    uint8_t g_1272;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_1278);
int32_t * func_2(int32_t * p_3, int32_t * p_4, struct S1 * p_1278);
int32_t * func_5(uint8_t  p_6, struct S1 * p_1278);
int32_t ** func_12(int32_t  p_13, int32_t * p_14, int32_t ** p_15, int32_t * p_16, int64_t  p_17, struct S1 * p_1278);
int32_t * func_18(int32_t  p_19, int16_t  p_20, uint32_t  p_21, struct S1 * p_1278);
int32_t  func_24(int32_t * p_25, int32_t  p_26, int32_t * p_27, int64_t  p_28, struct S1 * p_1278);
union U0  func_31(uint32_t  p_32, int16_t  p_33, int64_t  p_34, uint16_t  p_35, int64_t  p_36, struct S1 * p_1278);
uint64_t  func_63(uint32_t  p_64, int32_t * p_65, int16_t  p_66, int64_t  p_67, struct S1 * p_1278);
uint8_t  func_72(int32_t ** p_73, int64_t  p_74, struct S1 * p_1278);
uint8_t  func_77(int32_t ** p_78, int8_t  p_79, int32_t * p_80, uint16_t  p_81, uint32_t  p_82, struct S1 * p_1278);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1278->g_7 p_1278->g_11 p_1278->g_789 p_1278->g_788 p_1278->g_99 p_1278->g_94 p_1278->g_222 p_1278->g_84 p_1278->g_92.f1 p_1278->g_83 p_1278->g_1072 p_1278->g_560 p_1278->g_421 p_1278->g_152 p_1278->g_961 p_1278->g_175 p_1278->g_295 p_1278->g_108 p_1278->g_58 p_1278->g_372 p_1278->g_120 p_1278->g_1219
 * writes: p_1278->g_7 p_1278->g_99 p_1278->g_94 p_1278->g_58 p_1278->g_92.f1 p_1278->g_84 p_1278->g_152 p_1278->g_175 p_1278->g_108 p_1278->g_120 p_1278->g_11
 */
int32_t  func_1(struct S1 * p_1278)
{ /* block id: 4 */
    uint16_t l_1276 = 2UL;
    (*p_1278->g_83) = func_2(func_5(p_1278->g_7, p_1278), (*p_1278->g_789), p_1278);
    for (p_1278->g_58 = 13; (p_1278->g_58 < (-23)); p_1278->g_58--)
    { /* block id: 651 */
        int32_t *l_1277 = &p_1278->g_11;
        (*l_1277) = l_1276;
    }
    return p_1278->g_1219;
}


/* ------------------------------------------ */
/* 
 * reads : p_1278->g_99 p_1278->g_94 p_1278->g_222 p_1278->g_84 p_1278->g_92.f1 p_1278->g_83 p_1278->g_1072 p_1278->g_560 p_1278->g_421 p_1278->g_152 p_1278->g_961 p_1278->g_175 p_1278->g_11 p_1278->g_295 p_1278->g_108 p_1278->g_789 p_1278->g_788 p_1278->g_58 p_1278->g_372 p_1278->g_120
 * writes: p_1278->g_99 p_1278->g_94 p_1278->g_58 p_1278->g_92.f1 p_1278->g_84 p_1278->g_152 p_1278->g_175 p_1278->g_108 p_1278->g_120
 */
int32_t * func_2(int32_t * p_3, int32_t * p_4, struct S1 * p_1278)
{ /* block id: 546 */
    int32_t l_1080[1][3][9] = {{{0x3D4A18C3L,(-1L),0x3D4A18C3L,0x3D4A18C3L,(-1L),0x3D4A18C3L,0x3D4A18C3L,(-1L),0x3D4A18C3L},{0x3D4A18C3L,(-1L),0x3D4A18C3L,0x3D4A18C3L,(-1L),0x3D4A18C3L,0x3D4A18C3L,(-1L),0x3D4A18C3L},{0x3D4A18C3L,(-1L),0x3D4A18C3L,0x3D4A18C3L,(-1L),0x3D4A18C3L,0x3D4A18C3L,(-1L),0x3D4A18C3L}}};
    uint8_t **l_1094[8] = {(void*)0,&p_1278->g_221,(void*)0,(void*)0,&p_1278->g_221,(void*)0,(void*)0,&p_1278->g_221};
    int32_t l_1102 = (-5L);
    uint16_t l_1110 = 0x7BA9L;
    uint16_t ***l_1115 = (void*)0;
    int64_t *l_1215 = (void*)0;
    int64_t *l_1217[5] = {&p_1278->g_175,&p_1278->g_175,&p_1278->g_175,&p_1278->g_175,&p_1278->g_175};
    int32_t *l_1261 = &p_1278->g_120;
    int16_t l_1270 = 0x5E14L;
    int i, j, k;
    for (p_1278->g_99 = 0; (p_1278->g_99 >= 48); p_1278->g_99 = safe_add_func_uint16_t_u_u(p_1278->g_99, 7))
    { /* block id: 549 */
        for (p_1278->g_94 = 0; (p_1278->g_94 <= 6); p_1278->g_94 += 1)
        { /* block id: 552 */
            int i;
            (*p_1278->g_84) = p_1278->g_222[p_1278->g_94];
        }
    }
    for (p_1278->g_92.f1 = (-6); (p_1278->g_92.f1 > 19); p_1278->g_92.f1 = safe_add_func_int32_t_s_s(p_1278->g_92.f1, 5))
    { /* block id: 558 */
        int64_t *l_1092 = &p_1278->g_175;
        uint8_t **l_1093 = &p_1278->g_221;
        int32_t l_1097 = 0x21D94315L;
        int32_t *l_1103 = &p_1278->g_120;
        uint16_t ****l_1120 = &l_1115;
        uint32_t ***l_1124 = &p_1278->g_1122;
        int32_t l_1166[1][10][1] = {{{0x1A79DEBFL},{0x1A79DEBFL},{0x1A79DEBFL},{0x1A79DEBFL},{0x1A79DEBFL},{0x1A79DEBFL},{0x1A79DEBFL},{0x1A79DEBFL},{0x1A79DEBFL},{0x1A79DEBFL}}};
        int8_t *l_1189 = &p_1278->g_963[0][7];
        int i, j, k;
        (*p_1278->g_83) = ((l_1080[0][0][4] & l_1080[0][0][4]) , (void*)0);
        (*p_4) = ((*l_1103) ^= (((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((l_1102 |= (safe_mul_func_int8_t_s_s((l_1080[0][0][4] = ((*p_1278->g_295) = ((safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_uint64_t_u((*p_1278->g_1072))) | (((*p_1278->g_421)--) == ((!(((*l_1092) ^= p_1278->g_961) , ((((*p_3) <= (l_1093 == l_1094[7])) , ((safe_mul_func_uint8_t_u_u((!((*p_1278->g_295) != l_1097)), ((!((safe_sub_func_int32_t_s_s(((0x22E8A54CL <= (((safe_mod_func_uint32_t_u_u(l_1097, l_1097)) >= l_1097) < l_1097)) , (**p_1278->g_789)), (*p_4))) <= p_1278->g_372)) != l_1097))) , 0x04L)) ^ l_1080[0][0][7]))) < 8UL))) >= 1UL), l_1080[0][1][0])) & p_1278->g_222[0]))), l_1097))) , (-6L)), 0L)), l_1097)) != p_1278->g_11) , l_1097));
    }
    return (*p_1278->g_789);
}


/* ------------------------------------------ */
/* 
 * reads : p_1278->g_11 p_1278->g_7
 * writes: p_1278->g_7
 */
int32_t * func_5(uint8_t  p_6, struct S1 * p_1278)
{ /* block id: 5 */
    int32_t *l_10[9] = {&p_1278->g_11,&p_1278->g_11,&p_1278->g_11,&p_1278->g_11,&p_1278->g_11,&p_1278->g_11,&p_1278->g_11,&p_1278->g_11,&p_1278->g_11};
    int8_t l_848 = 0x26L;
    uint16_t **l_1068[1];
    uint64_t *l_1071 = &p_1278->g_560;
    uint8_t l_1073 = 0x36L;
    int i;
    for (i = 0; i < 1; i++)
        l_1068[i] = (void*)0;
    for (p_6 = 2; (p_6 > 2); p_6++)
    { /* block id: 8 */
        return l_10[1];
    }
    for (p_6 = 0; (p_6 <= 8); p_6 += 1)
    { /* block id: 13 */
        int32_t l_42 = 0x33ECB407L;
        int32_t **l_847 = &l_10[6];
        union U0 *l_1056 = (void*)0;
        uint16_t l_1058[6][3] = {{0xFC7EL,1UL,0xFC7EL},{0xFC7EL,1UL,0xFC7EL},{0xFC7EL,1UL,0xFC7EL},{0xFC7EL,1UL,0xFC7EL},{0xFC7EL,1UL,0xFC7EL},{0xFC7EL,1UL,0xFC7EL}};
        uint16_t **l_1065 = (void*)0;
        int i, j;
        if (p_1278->g_11)
        { /* block id: 14 */
            if (p_6)
                break;
        }
        else
        { /* block id: 16 */
            int32_t *l_56 = &p_1278->g_11;
            int32_t *l_1039 = &p_1278->g_120;
            uint32_t l_1040 = 4294967293UL;
            uint16_t **l_1066 = (void*)0;
            uint16_t ***l_1070 = &p_1278->g_420;
            uint16_t ****l_1069[10];
            int i;
            for (i = 0; i < 10; i++)
                l_1069[i] = &l_1070;
            for (p_1278->g_7 = 0; (p_1278->g_7 <= 8); p_1278->g_7 += 1)
            { /* block id: 19 */
                int16_t l_39 = 0x2565L;
                uint32_t l_40 = 0xCD4FE930L;
                int32_t l_41 = 0x4648A574L;
                int32_t *l_57 = &p_1278->g_58;
                int32_t ***l_846 = (void*)0;
                int16_t *l_849 = (void*)0;
                int16_t *l_850 = &p_1278->g_373;
                (1 + 1);
            }
        }
    }
    l_1073--;
    return l_10[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_12(int32_t  p_13, int32_t * p_14, int32_t ** p_15, int32_t * p_16, int64_t  p_17, struct S1 * p_1278)
{ /* block id: 519 */
    int32_t **l_1035[6] = {&p_1278->g_788,&p_1278->g_788,&p_1278->g_788,&p_1278->g_788,&p_1278->g_788,&p_1278->g_788};
    int i;
    return l_1035[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1278->g_222 p_1278->g_221 p_1278->g_51 p_1278->g_295 p_1278->g_108 p_1278->g_58 p_1278->g_611 p_1278->g_894 p_1278->g_560 p_1278->g_234 p_1278->g_99 p_1278->g_911 p_1278->g_636 p_1278->g_637 p_1278->g_758 p_1278->g_55.f0 p_1278->g_372 p_1278->g_52 p_1278->g_936 p_1278->g_11 p_1278->g_83 p_1278->g_94 p_1278->g_638 p_1278->g_639 p_1278->g_543 p_1278->g_84
 * writes: p_1278->g_108 p_1278->g_540 p_1278->g_58 p_1278->g_222 p_1278->g_373 p_1278->g_828.f1 p_1278->g_560 p_1278->g_611 p_1278->g_175 p_1278->g_372 p_1278->g_84 p_1278->g_94 p_1278->g_961 p_1278->g_963 p_1278->g_1030 p_1278->g_152
 */
int32_t * func_18(int32_t  p_19, int16_t  p_20, uint32_t  p_21, struct S1 * p_1278)
{ /* block id: 438 */
    int16_t l_863 = 0x5B37L;
    int32_t l_872 = (-1L);
    uint32_t *l_873 = &p_1278->g_94;
    int32_t l_981 = (-4L);
    int32_t l_982[7];
    uint32_t l_1005 = 0x3D38AAC3L;
    int32_t *l_1008 = &p_1278->g_58;
    uint64_t *l_1019 = &p_1278->g_560;
    uint16_t l_1028 = 0x33EDL;
    uint8_t *l_1029[10][8][3] = {{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}},{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}},{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}},{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}},{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}},{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}},{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}},{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}},{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}},{{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]},{&p_1278->g_222[0],&p_1278->g_222[0],&p_1278->g_222[0]}}};
    uint16_t *l_1031 = &p_1278->g_152[3];
    int32_t l_1032 = (-6L);
    int32_t *l_1033[7][6] = {{&l_982[5],&p_1278->g_58,&p_1278->g_58,&p_1278->g_58,&l_982[5],&l_982[5]},{&l_982[5],&p_1278->g_58,&p_1278->g_58,&p_1278->g_58,&l_982[5],&l_982[5]},{&l_982[5],&p_1278->g_58,&p_1278->g_58,&p_1278->g_58,&l_982[5],&l_982[5]},{&l_982[5],&p_1278->g_58,&p_1278->g_58,&p_1278->g_58,&l_982[5],&l_982[5]},{&l_982[5],&p_1278->g_58,&p_1278->g_58,&p_1278->g_58,&l_982[5],&l_982[5]},{&l_982[5],&p_1278->g_58,&p_1278->g_58,&p_1278->g_58,&l_982[5],&l_982[5]},{&l_982[5],&p_1278->g_58,&p_1278->g_58,&p_1278->g_58,&l_982[5],&l_982[5]}};
    int32_t *l_1034 = &p_1278->g_11;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_982[i] = 0L;
    for (p_20 = 0; (p_20 != 20); p_20 = safe_add_func_int16_t_s_s(p_20, 8))
    { /* block id: 441 */
        int32_t *l_864 = &p_1278->g_58;
        int32_t l_871 = 0x40612BD2L;
        uint8_t **l_893 = (void*)0;
        uint8_t ***l_892 = &l_893;
        uint32_t l_907 = 7UL;
        int32_t l_984[3];
        int i;
        for (i = 0; i < 3; i++)
            l_984[i] = 0L;
        for (p_1278->g_108 = 0; (p_1278->g_108 > (-14)); p_1278->g_108 = safe_sub_func_uint64_t_u_u(p_1278->g_108, 7))
        { /* block id: 444 */
            int32_t l_908 = 4L;
            uint8_t l_929 = 0x01L;
            uint8_t l_951 = 247UL;
            int32_t l_983 = 1L;
            int32_t l_986 = 0x2C43FF48L;
            int32_t l_989 = 0x73B89C17L;
            int32_t l_990 = (-10L);
            int32_t l_991 = 0x67522256L;
            int32_t l_994 = 9L;
            int32_t l_995 = (-1L);
            int32_t l_996 = 0x51D2526BL;
            int32_t l_997 = (-5L);
            int32_t l_1001[6][8] = {{1L,0x17597149L,0L,0x17597149L,1L,1L,0x17597149L,0L},{1L,0x17597149L,0L,0x17597149L,1L,1L,0x17597149L,0L},{1L,0x17597149L,0L,0x17597149L,1L,1L,0x17597149L,0L},{1L,0x17597149L,0L,0x17597149L,1L,1L,0x17597149L,0L},{1L,0x17597149L,0L,0x17597149L,1L,1L,0x17597149L,0L},{1L,0x17597149L,0L,0x17597149L,1L,1L,0x17597149L,0L}};
            uint16_t l_1002 = 0UL;
            int i, j;
            for (p_1278->g_540 = 24; (p_1278->g_540 > (-22)); --p_1278->g_540)
            { /* block id: 447 */
                int32_t *l_858 = (void*)0;
                int32_t l_860 = 2L;
                l_860 = (p_1278->g_222[5] <= (p_21 < (~(*p_1278->g_221))));
                l_872 = (((safe_lshift_func_int16_t_s_u(((((l_863 , 0xFF65DCBCA0163469L) , ((*p_1278->g_221) ^= ((l_864 != (void*)0) == (((safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_19, p_19)), p_21)) < (0x6867FBCFL && (safe_add_func_uint8_t_u_u(((((*l_864) = ((p_21 <= p_1278->g_51) >= (-1L))) != p_20) <= l_871), (*p_1278->g_295))))) < p_20)))) && (*l_864)) | l_863), 10)) , (*p_1278->g_295)) ^ 1UL);
            }
            (*l_864) ^= ((void*)0 != l_873);
            for (p_1278->g_540 = 0; (p_1278->g_540 <= 2); p_1278->g_540 += 1)
            { /* block id: 456 */
                int32_t l_915[5] = {1L,1L,1L,1L,1L};
                int i;
                if ((*l_864))
                { /* block id: 457 */
                    l_872 ^= l_863;
                }
                else
                { /* block id: 459 */
                    uint16_t l_889 = 0x0172L;
                    int32_t l_906 = 2L;
                    int32_t l_914 = 0x013A704FL;
                    for (p_1278->g_373 = 0; (p_1278->g_373 >= 5); ++p_1278->g_373)
                    { /* block id: 462 */
                        int16_t *l_888 = &p_1278->g_828.f1;
                        uint64_t *l_899 = &p_1278->g_560;
                        int32_t l_909[6] = {1L,0x61761B40L,1L,1L,0x61761B40L,1L};
                        uint32_t *l_910 = &p_1278->g_611;
                        int64_t *l_912 = (void*)0;
                        int64_t *l_913 = &p_1278->g_175;
                        int32_t l_916 = 0x15EA9044L;
                        int i;
                        l_916 ^= (((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(p_1278->g_611, 10)) , ((safe_add_func_int16_t_s_s(((l_915[3] ^= (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((*l_864), 3)) > (((*l_888) = (+(l_889 ^= p_20))) | (safe_sub_func_int8_t_s_s((*p_1278->g_295), (((void*)0 != l_892) != (((*l_913) = (p_1278->g_894 >= (((((*l_910) = (safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((*l_899)--), (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((0x7DFF1A9CD96126AFL < (((l_906 |= (*p_1278->g_221)) == (*p_1278->g_221)) | p_1278->g_234)) , l_907) , (*l_864)), l_908)), l_909[4])))), p_1278->g_99))) , (void*)0) != p_1278->g_911) != p_20))) <= 0x1BDC064D35EA9117L)))))), l_914))) <= l_908), l_909[1])) , p_20)), (-5L))), p_21)) <= p_19) <= p_21);
                    }
                    if (l_914)
                        break;
                }
                l_908 = ((safe_add_func_uint8_t_u_u(((*p_1278->g_221) = (safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((*l_864) = ((((((*l_864) & ((((((void*)0 == (*p_1278->g_636)) , (-10L)) ^ p_19) >= ((*l_864) , (safe_lshift_func_int8_t_s_s((p_1278->g_758[6] , ((((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((((((void*)0 == &p_20) , p_1278->g_55.f0) & 0x77D6978646E8922EL) & 6L) <= l_908), 65530UL)), p_20)) || l_908) & 0x127261BC0C64FBA3L) & p_1278->g_372)), l_863)))) || p_21)) , 0x1AAF0FB7L) , l_929) != 0x5D531397L) & l_863)), l_872)) && (*p_1278->g_295)) > 0x6842L), p_19))), p_20)) != l_908);
            }
            for (p_1278->g_372 = 0; (p_1278->g_372 <= 2); p_1278->g_372 += 1)
            { /* block id: 480 */
                uint32_t l_953[1][7][3] = {{{9UL,6UL,9UL},{9UL,6UL,9UL},{9UL,6UL,9UL},{9UL,6UL,9UL},{9UL,6UL,9UL},{9UL,6UL,9UL},{9UL,6UL,9UL}}};
                uint32_t **l_970 = &p_1278->g_172;
                uint32_t ***l_969 = &l_970;
                int32_t l_985 = 0x793BA2F3L;
                int32_t l_987 = 0x5B6ABC2AL;
                int32_t l_988[3][6] = {{0x0B366B3FL,(-1L),(-6L),(-1L),0x0B366B3FL,0x0B366B3FL},{0x0B366B3FL,(-1L),(-6L),(-1L),0x0B366B3FL,0x0B366B3FL},{0x0B366B3FL,(-1L),(-6L),(-1L),0x0B366B3FL,0x0B366B3FL}};
                int64_t l_993 = 0x5B5B8D6706476118L;
                int i, j, k;
                for (p_1278->g_611 = 0; (p_1278->g_611 <= 2); p_1278->g_611 += 1)
                { /* block id: 483 */
                    union U0 *l_954 = &p_1278->g_936;
                    int32_t *l_955 = &l_872;
                    uint8_t *l_968 = &p_1278->g_222[0];
                    int32_t l_979 = 0x70D17EC1L;
                    int32_t l_992 = 0L;
                    int32_t l_998 = (-1L);
                    int32_t l_999 = 0x112FC23DL;
                    int32_t l_1000[8] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
                    int i;
                    for (l_871 = 0; (l_871 <= 2); l_871 += 1)
                    { /* block id: 486 */
                        uint64_t *l_952 = &p_1278->g_560;
                        int8_t *l_960 = &p_1278->g_961;
                        int8_t *l_962 = &p_1278->g_963[0][7];
                        int i;
                        l_872 = (p_1278->g_52[p_1278->g_611] & ((safe_mod_func_uint16_t_u_u(7UL, (((((safe_lshift_func_int8_t_s_u(p_21, (~(safe_rshift_func_uint16_t_u_u((p_19 && (p_1278->g_936 , (((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((*l_864), (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((((*l_952) ^= (safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((((*l_892) == (void*)0) | ((-1L) && 0x53B9F7DEL)), l_951)), (*p_1278->g_295)))) <= 0xD82F86BD534021E5L) == p_1278->g_52[p_1278->g_611]), 4)), l_863)))), p_19)) <= 0xA5F6L) & p_21) == 0x33B26170E8C612F3L) <= l_953[0][5][1]), p_20)) , l_954) != (void*)0))), l_863))))) != p_20) && 8UL) | p_1278->g_11) & l_929))) & 0xDFA7L));
                        (*p_1278->g_83) = l_955;
                        (*l_955) = (((p_1278->g_911 != ((p_19 >= (safe_sub_func_int8_t_s_s((&l_951 == (((((l_929 & ((*l_873)++)) >= (-1L)) || ((((*l_962) = ((*l_960) = ((*l_864) = (p_21 >= 65527UL)))) <= ((((safe_lshift_func_uint8_t_u_u(((*p_1278->g_221) = (safe_lshift_func_uint16_t_u_u((p_21 && 0UL), 14))), (*l_955))) ^ (**p_1278->g_638)) || p_20) <= 0x19L)) > p_1278->g_11)) != 0x8CCF4793L) , l_968)), p_19))) , l_969)) , 0x0DE8L) < 0x69A2L);
                        if ((**p_1278->g_83))
                            continue;
                    }
                    (*l_864) = (*l_955);
                    for (p_1278->g_58 = 0; (p_1278->g_58 <= 6); p_1278->g_58 += 1)
                    { /* block id: 501 */
                        int32_t *l_971 = &p_1278->g_234;
                        int32_t *l_972 = (void*)0;
                        int32_t *l_973 = (void*)0;
                        int32_t *l_974 = &p_1278->g_120;
                        int32_t *l_975 = (void*)0;
                        int32_t *l_976 = &p_1278->g_120;
                        int32_t *l_977 = &l_908;
                        int32_t *l_978 = &p_1278->g_11;
                        int32_t *l_980[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_980[i] = &l_979;
                        l_1002--;
                        --l_1005;
                    }
                }
            }
        }
        (*l_864) = p_21;
        (*p_1278->g_83) = &l_982[5];
    }
    l_1032 |= (((l_1008 = &l_872) == (((safe_sub_func_uint64_t_u_u(l_863, p_20)) < ((l_982[5] || (safe_div_func_int32_t_s_s(((!(safe_add_func_uint8_t_u_u((*p_1278->g_221), ((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((((p_1278->g_94 , (~((--(*l_1019)) <= (p_20 && (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((*l_1031) = (safe_div_func_uint64_t_u_u((l_981 <= ((p_1278->g_1030 = ((((l_872 = (0xB9L >= l_982[0])) == l_1028) , p_20) <= 18446744073709551606UL)) < l_982[5])), l_982[4]))), l_863)), p_21)))))) >= p_19) <= 8UL) > p_21), 1L)), 0x3D8F468CL)) | 0x3DADL)))) > l_982[2]), 1UL))) != (*p_1278->g_221))) , &l_982[5])) ^ l_982[2]);
    (*p_1278->g_83) = &l_872;
    return l_1034;
}


/* ------------------------------------------ */
/* 
 * reads : p_1278->g_11 p_1278->g_58 p_1278->g_120 p_1278->g_84 p_1278->g_94 p_1278->g_55.f0 p_1278->g_83 p_1278->g_7 p_1278->g_92.f1 p_1278->g_175 p_1278->g_108 p_1278->g_152 p_1278->g_52 p_1278->g_43 p_1278->g_178 p_1278->g_222 p_1278->g_264 p_1278->g_99 p_1278->g_51 p_1278->g_92.f0 p_1278->g_221 p_1278->g_55 p_1278->g_208 p_1278->g_295 p_1278->g_347 p_1278->g_374 p_1278->g_372 p_1278->g_420 p_1278->g_473 p_1278->g_476 p_1278->g_373 p_1278->g_543 p_1278->g_421 p_1278->g_540 p_1278->g_608 p_1278->g_611 p_1278->g_788 p_1278->g_828
 * writes: p_1278->g_52 p_1278->g_58 p_1278->g_43 p_1278->g_172 p_1278->g_175 p_1278->g_178 p_1278->g_92.f1 p_1278->g_11 p_1278->g_108 p_1278->g_208 p_1278->g_84 p_1278->g_264 p_1278->g_99 p_1278->g_152 p_1278->g_295 p_1278->g_222 p_1278->g_347 p_1278->g_374 p_1278->g_94 p_1278->g_373 p_1278->g_473 p_1278->g_476 p_1278->g_421 p_1278->g_543 p_1278->g_560 p_1278->g_51 p_1278->g_611 p_1278->g_420 p_1278->g_788 p_1278->g_540
 */
int32_t  func_24(int32_t * p_25, int32_t  p_26, int32_t * p_27, int64_t  p_28, struct S1 * p_1278)
{ /* block id: 27 */
    int32_t *l_61 = &p_1278->g_11;
    int32_t l_134[8][7] = {{0L,1L,0x2899DE23L,0x7C8AD55DL,(-3L),(-3L),0x7C8AD55DL},{0L,1L,0x2899DE23L,0x7C8AD55DL,(-3L),(-3L),0x7C8AD55DL},{0L,1L,0x2899DE23L,0x7C8AD55DL,(-3L),(-3L),0x7C8AD55DL},{0L,1L,0x2899DE23L,0x7C8AD55DL,(-3L),(-3L),0x7C8AD55DL},{0L,1L,0x2899DE23L,0x7C8AD55DL,(-3L),(-3L),0x7C8AD55DL},{0L,1L,0x2899DE23L,0x7C8AD55DL,(-3L),(-3L),0x7C8AD55DL},{0L,1L,0x2899DE23L,0x7C8AD55DL,(-3L),(-3L),0x7C8AD55DL},{0L,1L,0x2899DE23L,0x7C8AD55DL,(-3L),(-3L),0x7C8AD55DL}};
    int8_t *l_143 = &p_1278->g_108;
    int8_t *l_145 = &p_1278->g_108;
    int8_t **l_144[9][2] = {{&l_145,&l_145},{&l_145,&l_145},{&l_145,&l_145},{&l_145,&l_145},{&l_145,&l_145},{&l_145,&l_145},{&l_145,&l_145},{&l_145,&l_145},{&l_145,&l_145}};
    int8_t *l_146 = &p_1278->g_108;
    int32_t l_147 = 0x7A14AA7FL;
    uint16_t *l_148 = &p_1278->g_52[2];
    int8_t l_149 = 0x45L;
    uint16_t *l_150 = (void*)0;
    uint16_t *l_151[4];
    int8_t l_153 = 0L;
    uint8_t l_167[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
    uint32_t l_206[2][6] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
    int8_t l_233 = (-5L);
    uint64_t *l_370 = &p_1278->g_178;
    uint16_t l_371 = 0xD8BFL;
    uint8_t **l_527 = (void*)0;
    uint8_t l_593 = 0UL;
    uint8_t l_594 = 0x5BL;
    int8_t l_604 = (-1L);
    union U0 *l_692 = (void*)0;
    int i, j;
    for (i = 0; i < 4; i++)
        l_151[i] = &p_1278->g_152[1];
lbl_209:
    for (p_28 = 0; (p_28 == 1); p_28 = safe_add_func_int32_t_s_s(p_28, 1))
    { /* block id: 30 */
        int32_t *l_62 = &p_1278->g_11;
        uint32_t *l_93[8][10][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int32_t *l_119 = &p_1278->g_120;
        int i, j, k;
        l_61 = (void*)0;
    }
    if (((*p_27) = ((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((((~((*p_25) || (~(((l_153 = (&p_1278->g_94 == (((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((l_143 != (l_146 = l_143)), l_147)), ((*l_148) = (p_28 , (p_26 != p_1278->g_11))))) , l_149) , (void*)0))) && p_1278->g_58) , p_1278->g_120)))) ^ p_28) | (*p_1278->g_84)), p_1278->g_94)), p_1278->g_55.f0)) , p_28) , l_147) | p_26)))
    { /* block id: 71 */
        uint8_t l_173[8][10][2] = {{{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L}},{{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L}},{{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L}},{{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L}},{{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L}},{{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L}},{{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L}},{{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L},{0xDFL,0x25L}}};
        int32_t l_203 = 6L;
        int16_t l_205[7][3][10] = {{{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L}},{{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L}},{{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L}},{{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L}},{{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L}},{{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L}},{{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L},{0x0A0FL,(-3L),1L,0x4BEAL,(-1L),7L,0x0A98L,0L,5L,7L}}};
        int32_t l_232[9][5] = {{0x50A166FAL,(-10L),0x61048822L,(-7L),0x61048822L},{0x50A166FAL,(-10L),0x61048822L,(-7L),0x61048822L},{0x50A166FAL,(-10L),0x61048822L,(-7L),0x61048822L},{0x50A166FAL,(-10L),0x61048822L,(-7L),0x61048822L},{0x50A166FAL,(-10L),0x61048822L,(-7L),0x61048822L},{0x50A166FAL,(-10L),0x61048822L,(-7L),0x61048822L},{0x50A166FAL,(-10L),0x61048822L,(-7L),0x61048822L},{0x50A166FAL,(-10L),0x61048822L,(-7L),0x61048822L},{0x50A166FAL,(-10L),0x61048822L,(-7L),0x61048822L}};
        uint32_t l_250 = 3UL;
        int16_t l_279 = 4L;
        int32_t *l_284 = &l_203;
        int8_t *l_331 = &l_153;
        uint8_t **l_381 = &p_1278->g_221;
        uint8_t **l_383 = &p_1278->g_221;
        uint16_t **l_410 = (void*)0;
        int32_t l_459 = 0x4BBC5913L;
        int32_t l_465[1];
        int8_t l_577 = 0x22L;
        int64_t l_586 = 0L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_465[i] = 1L;
        for (p_1278->g_43 = 0; (p_1278->g_43 != 25); p_1278->g_43++)
        { /* block id: 74 */
            uint64_t l_162 = 0xA0EB5DC200BE11D5L;
            uint32_t *l_171 = &p_1278->g_94;
            uint32_t **l_170[7][8] = {{&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171},{&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171},{&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171},{&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171},{&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171},{&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171},{&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171,&l_171}};
            int64_t *l_174 = &p_1278->g_175;
            int8_t l_176[8][1] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
            uint64_t *l_177 = &p_1278->g_178;
            int32_t *l_253 = &l_134[7][3];
            int32_t *l_254 = &p_1278->g_11;
            int32_t *l_255 = &p_1278->g_120;
            int32_t *l_256 = &p_1278->g_11;
            uint16_t l_257[9][7] = {{0UL,0UL,1UL,1UL,0UL,1UL,1UL},{0UL,0UL,1UL,1UL,0UL,1UL,1UL},{0UL,0UL,1UL,1UL,0UL,1UL,1UL},{0UL,0UL,1UL,1UL,0UL,1UL,1UL},{0UL,0UL,1UL,1UL,0UL,1UL,1UL},{0UL,0UL,1UL,1UL,0UL,1UL,1UL},{0UL,0UL,1UL,1UL,0UL,1UL,1UL},{0UL,0UL,1UL,1UL,0UL,1UL,1UL},{0UL,0UL,1UL,1UL,0UL,1UL,1UL}};
            int i, j;
            (*p_1278->g_84) = (+0x3037A74CL);
            if (((((safe_lshift_func_uint8_t_u_u(p_26, ((((*l_177) = (((p_1278->g_11 || (safe_mul_func_uint8_t_u_u(((*p_1278->g_84) && (((((safe_mul_func_uint8_t_u_u(p_1278->g_94, (l_162 || (((((*l_174) = (safe_div_func_uint64_t_u_u((((p_1278->g_55.f0 || ((((p_26 , ((safe_rshift_func_int16_t_s_s(l_167[3], (safe_div_func_uint32_t_u_u(((p_1278->g_172 = p_27) == l_61), 0x4DCE59F5L)))) , 0x17L)) & l_173[3][9][0]) , &p_1278->g_84) == &p_27)) | p_26) || 0x774C4BF40DEF69FDL), 0xE0E80E6B5D3E5C67L))) & p_28) , (**p_1278->g_83)) & p_1278->g_11)))) > 0x3A16L) || (-1L)) > l_176[7][0]) && (*p_25))), 0xD8L))) , (-1L)) > p_26)) , (-10L)) && p_1278->g_94))) ^ 0x0E50C8BBL) | p_1278->g_7) || (-1L)))
            { /* block id: 79 */
                int8_t l_194 = 0x7CL;
                int32_t l_204[10][1] = {{0x51039E3DL},{0x51039E3DL},{0x51039E3DL},{0x51039E3DL},{0x51039E3DL},{0x51039E3DL},{0x51039E3DL},{0x51039E3DL},{0x51039E3DL},{0x51039E3DL}};
                int i, j;
                for (p_1278->g_92.f1 = (-25); (p_1278->g_92.f1 >= (-1)); ++p_1278->g_92.f1)
                { /* block id: 82 */
                    int32_t *l_181 = &l_134[5][3];
                    uint8_t *l_207[7][2] = {{&l_167[3],&l_167[3]},{&l_167[3],&l_167[3]},{&l_167[3],&l_167[3]},{&l_167[3],&l_167[3]},{&l_167[3],&l_167[3]},{&l_167[3],&l_167[3]},{&l_167[3],&l_167[3]}};
                    int i, j;
                    (*l_181) ^= (p_1278->g_11 ^= (*p_1278->g_84));
                    (*p_25) = ((p_28 , (+(p_1278->g_175 & (p_1278->g_208 = ((((((*l_146) |= 0x66L) && (l_204[4][0] = (((&p_1278->g_94 == p_25) || (safe_div_func_int64_t_s_s((l_203 |= (((safe_div_func_uint8_t_u_u((+((safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((18446744073709551615UL <= ((l_194 < (safe_add_func_uint8_t_u_u((((p_28 == (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(p_28, p_1278->g_58)), p_1278->g_152[3])), p_1278->g_52[1]))) , (**p_1278->g_83)) & 0x8CEC9082L), l_194))) & p_1278->g_94)), p_26)), p_1278->g_11)), p_28)) < p_1278->g_152[1])), 255UL)) , l_177) != (void*)0)), p_1278->g_43))) >= 0x63149756L))) ^ (*l_181)) & l_205[4][2][2]) > l_206[1][5]))))) <= p_26);
                    if (l_147)
                        goto lbl_209;
                }
                if ((*p_1278->g_84))
                    continue;
            }
            else
            { /* block id: 93 */
                int32_t *l_214 = &l_134[5][4];
                uint8_t **l_249 = &p_1278->g_221;
                for (p_1278->g_175 = 0; (p_1278->g_175 == (-5)); p_1278->g_175 = safe_sub_func_uint8_t_u_u(p_1278->g_175, 6))
                { /* block id: 96 */
                    uint8_t *l_220 = &l_167[1];
                    uint8_t **l_223 = &p_1278->g_221;
                    (1 + 1);
                }
                if (l_250)
                    break;
                for (p_1278->g_178 = 0; (p_1278->g_178 <= 49); p_1278->g_178 = safe_add_func_int8_t_s_s(p_1278->g_178, 6))
                { /* block id: 121 */
                    if ((*p_25))
                        break;
                }
            }
            if (l_205[0][1][2])
                continue;
            l_257[4][0]++;
        }
lbl_535:
        for (p_1278->g_58 = 0; (p_1278->g_58 <= 6); p_1278->g_58 += 1)
        { /* block id: 130 */
            int32_t *l_260 = &l_134[7][3];
            int32_t *l_261 = &l_134[3][3];
            int32_t *l_262 = &p_1278->g_11;
            int32_t *l_263[4];
            uint16_t *l_269 = &p_1278->g_52[1];
            int8_t *l_294[9][9] = {{(void*)0,&l_153,&l_153,(void*)0,&l_153,(void*)0,(void*)0,&l_153,(void*)0},{(void*)0,&l_153,&l_153,(void*)0,&l_153,(void*)0,(void*)0,&l_153,(void*)0},{(void*)0,&l_153,&l_153,(void*)0,&l_153,(void*)0,(void*)0,&l_153,(void*)0},{(void*)0,&l_153,&l_153,(void*)0,&l_153,(void*)0,(void*)0,&l_153,(void*)0},{(void*)0,&l_153,&l_153,(void*)0,&l_153,(void*)0,(void*)0,&l_153,(void*)0},{(void*)0,&l_153,&l_153,(void*)0,&l_153,(void*)0,(void*)0,&l_153,(void*)0},{(void*)0,&l_153,&l_153,(void*)0,&l_153,(void*)0,(void*)0,&l_153,(void*)0},{(void*)0,&l_153,&l_153,(void*)0,&l_153,(void*)0,(void*)0,&l_153,(void*)0},{(void*)0,&l_153,&l_153,(void*)0,&l_153,(void*)0,(void*)0,&l_153,(void*)0}};
            uint16_t l_359[5][1] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
            uint64_t *l_456 = &p_1278->g_7;
            int i, j;
            for (i = 0; i < 4; i++)
                l_263[i] = &p_1278->g_120;
            (*p_1278->g_83) = &l_134[7][3];
            (*l_260) |= (p_1278->g_222[p_1278->g_58] , (((*p_1278->g_83) = (p_25 = &p_26)) != l_260));
            (*p_1278->g_83) = (*p_1278->g_83);
            p_1278->g_264++;
            for (p_1278->g_99 = 0; (p_1278->g_99 <= 6); p_1278->g_99 += 1)
            { /* block id: 139 */
                uint64_t l_274 = 0UL;
                uint8_t **l_275 = &p_1278->g_221;
                int32_t l_278[7];
                uint64_t l_322 = 0x46FB89A40DE4944EL;
                int32_t l_330 = 0x191800EEL;
                uint8_t l_350[10] = {0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L};
                int16_t l_398 = 0x554BL;
                uint16_t *l_400 = &l_359[3][0];
                uint16_t ***l_432 = &l_410;
                uint8_t l_457 = 0xB3L;
                int i;
                for (i = 0; i < 7; i++)
                    l_278[i] = 0x6BDD07A9L;
                for (l_153 = 0; (l_153 <= 1); l_153 += 1)
                { /* block id: 142 */
                    uint32_t l_280[2];
                    int32_t l_281[8][8][4] = {{{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L}},{{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L}},{{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L}},{{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L}},{{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L}},{{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L}},{{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L}},{{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L},{0L,1L,0x7A3DEA62L,0x7A3DEA62L}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_280[i] = 0x41046A67L;
                    for (l_149 = 0; (l_149 <= 6); l_149 += 1)
                    { /* block id: 145 */
                        int32_t **l_291 = &l_61;
                        uint32_t l_310 = 1UL;
                        int i, j;
                        (*p_1278->g_84) = (p_1278->g_222[l_149] , p_1278->g_152[l_149]);
                        l_281[4][0][3] = (safe_mod_func_uint32_t_u_u(((((l_269 != &p_1278->g_152[1]) & (safe_mod_func_int16_t_s_s(((((((safe_lshift_func_int16_t_s_u(l_274, ((void*)0 == l_275))) , (*p_27)) < (((p_1278->g_152[p_1278->g_58] = (((safe_lshift_func_uint8_t_u_u(p_26, ((((p_1278->g_175 >= p_1278->g_99) & p_1278->g_51) | p_26) < 1L))) , 0x1C496369L) & 4294967292UL)) >= 0x2F65L) < p_1278->g_178)) > l_278[1]) && l_279) < p_1278->g_108), p_28))) == p_1278->g_92.f0) < l_280[0]), p_28));
                        (*l_261) = (safe_sub_func_int16_t_s_s((((*p_1278->g_83) = &p_26) != (l_284 = &p_26)), (p_1278->g_152[(l_153 + 5)] = (((p_26 , &l_134[7][3]) != ((*l_291) = ((p_28 <= (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((249UL <= (safe_add_func_int64_t_s_s(((*p_27) , p_26), (((*p_1278->g_221) ^ 0x09L) || p_26)))), (-9L))) , 0xC8L), l_278[0]))) , &p_26))) | p_26))));
                        (*l_262) |= (65535UL | (safe_lshift_func_uint16_t_u_s((((((((p_1278->g_120 < ((l_294[2][1] = &p_1278->g_108) == (p_1278->g_295 = &p_1278->g_108))) <= (safe_rshift_func_int8_t_s_s(8L, 0))) >= (safe_rshift_func_uint8_t_u_u(((p_28 < (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((((func_31(((((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s(7L, (safe_div_func_uint32_t_u_u(((*l_284) != ((&p_28 == &p_28) & 0x783A858DL)), (*p_27))))), p_28)) >= (**p_1278->g_83)) || 0x1CL) || 5L), p_28, p_1278->g_99, p_28, p_26, p_1278) , (void*)0) != &l_206[0][1]) >= (-1L)), l_280[0])), 0x6CA1L))) , (*p_1278->g_221)), l_310))) && p_1278->g_52[2]) ^ (-7L)) > p_1278->g_208) & p_26), 1)));
                    }
                }
                if ((!p_1278->g_222[p_1278->g_58]))
                { /* block id: 159 */
                    int64_t *l_319[5][10][2];
                    uint64_t *l_323[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_328 = 0x379538BAL;
                    uint8_t **l_329 = &p_1278->g_221;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 10; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_319[i][j][k] = &p_1278->g_175;
                        }
                    }
                    l_330 = (0UL < ((((~(*p_1278->g_221)) | (safe_add_func_uint8_t_u_u(0x69L, (((*l_145) = (safe_lshift_func_uint8_t_u_u((*p_1278->g_221), ((((((*l_262) ^= ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((((p_1278->g_175 = p_28) && (safe_div_func_uint64_t_u_u((l_278[1] = l_322), p_1278->g_178))) || 1L) , (safe_add_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s(p_1278->g_94, 1L)) ^ l_274) > 255UL) | p_26), p_28))), p_26)) || p_1278->g_178), (*l_261))) >= l_328)) | p_26) > p_1278->g_52[1]) , l_329) == (void*)0)))) > 0xC7L)))) == p_26) != p_26));
                }
                else
                { /* block id: 165 */
                    uint16_t l_332 = 0UL;
                    int16_t l_345[9][9][3] = {{{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL}},{{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL}},{{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL}},{{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL}},{{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL}},{{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL}},{{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL}},{{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL}},{{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL},{0L,0x12A1L,0x781BL}}};
                    int i, j, k;
                    if (((l_331 = &p_1278->g_108) == &p_1278->g_108))
                    { /* block id: 167 */
                        l_332 ^= (**p_1278->g_83);
                    }
                    else
                    { /* block id: 169 */
                        int32_t l_337 = 1L;
                        uint32_t **l_340 = &p_1278->g_172;
                        int32_t l_346 = 0x0E0BC994L;
                        int i;
                        (*l_260) = (+((0x0FL <= (safe_add_func_int32_t_s_s(((~((safe_add_func_int16_t_s_s(((void*)0 != &p_1278->g_178), l_337)) <= (((l_346 |= ((safe_sub_func_uint64_t_u_u((((*l_340) = &p_1278->g_94) != (void*)0), ((((*p_1278->g_295) ^ (l_345[3][3][0] = (((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s((p_1278->g_222[p_1278->g_99] = (&p_1278->g_51 == (((void*)0 == &p_1278->g_295) , &p_1278->g_51))), 6)) > p_26), p_1278->g_264)) ^ 0UL) , l_332))) == (*p_25)) & 0x5FL))) , 0x5DL)) , &p_1278->g_108) == (void*)0))) < 0x28B0L), l_134[1][0]))) || p_28));
                        ++p_1278->g_347;
                        l_350[2]--;
                    }
                    if ((0x43L > ((safe_lshift_func_uint8_t_u_u((*p_1278->g_221), 0)) && ((safe_mod_func_int32_t_s_s((*p_27), ((*l_262) |= 0x6BB534F3L))) > (((safe_mod_func_int32_t_s_s(l_359[3][0], (((safe_lshift_func_uint16_t_u_s((((*l_260) = ((safe_add_func_int32_t_s_s((*p_27), (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(((void*)0 == l_370), (((p_26 && (-1L)) , l_371) & l_322))) | 0x64AD3AE1BF6FE707L), p_1278->g_152[1])), 6)))) & 4UL)) >= 0x3A2815BEL), p_1278->g_222[p_1278->g_58])) ^ (-6L)) && l_332))) , p_1278->g_120) || p_1278->g_152[1])))))
                    { /* block id: 180 */
                        return (*p_27);
                    }
                    else
                    { /* block id: 182 */
                        (*p_1278->g_83) = &p_26;
                    }
                }
                p_1278->g_374[2]++;
                for (p_26 = 3; (p_26 >= 0); p_26 -= 1)
                { /* block id: 189 */
                    uint8_t ***l_382 = &l_381;
                    int32_t l_399 = 1L;
                    uint16_t **l_401 = &l_148;
                    uint16_t l_426 = 0x5B9BL;
                    int32_t l_460 = 0x57211DA2L;
                    int32_t l_467 = 1L;
                    int32_t l_469 = 0x3B90646AL;
                    int32_t l_470 = 2L;
                    int32_t l_471 = 0x3648D43DL;
                    int i;
                    if ((p_1278->g_152[p_1278->g_99] , (safe_sub_func_uint8_t_u_u((6UL | (!((*l_400) |= (p_1278->g_152[p_1278->g_99] = ((((*l_382) = l_381) != l_383) && (((safe_add_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*l_260) = p_1278->g_152[(p_26 + 3)]), ((safe_rshift_func_int16_t_s_u(((((((safe_mod_func_int8_t_s_s(((&p_1278->g_152[p_1278->g_99] != ((*l_401) = ((((-1L) | (p_1278->g_152[p_1278->g_99] , (safe_div_func_uint8_t_u_u((p_1278->g_222[p_1278->g_99] &= 0x4CL), l_398)))) < l_399) , l_400))) , p_26), 0xAAL)) == (*l_284)) <= p_28) >= 0x1B99L) , &l_383) != (void*)0), p_1278->g_52[2])) >= (*l_262)))), p_26)) || p_26), p_26)) ^ l_322), 0xEB746EEEL)) >= (-10L)) >= p_26)))))), l_399))))
                    { /* block id: 196 */
                        uint64_t *l_413 = &l_322;
                        uint8_t *l_414 = &l_173[0][7][1];
                        uint16_t ***l_419 = &l_401;
                        int16_t *l_422 = (void*)0;
                        int16_t *l_423 = &l_205[4][2][2];
                        uint32_t l_424[10][6] = {{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L},{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L},{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L},{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L},{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L},{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L},{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L},{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L},{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L},{0x9C49BC7EL,0x9C49BC7EL,4294967292UL,0x7ABB0178L,1UL,0x7ABB0178L}};
                        int i, j;
                        (*l_261) = (safe_mod_func_uint32_t_u_u(p_1278->g_372, ((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((((0xA3L ^ (((l_410 = &l_151[0]) != ((((((0x5CL | (safe_sub_func_uint64_t_u_u(((*l_413) &= p_1278->g_222[p_1278->g_99]), (((((*l_414) &= p_26) , (safe_sub_func_uint8_t_u_u((!((safe_mul_func_int16_t_s_s((((*l_419) = &l_400) == p_1278->g_420), ((*l_423) = p_1278->g_58))) , (*p_1278->g_221))), l_424[8][1]))) < p_1278->g_374[2]) >= p_28)))) >= p_26) <= (**p_1278->g_83)) | p_28) > 0x5AL) , (void*)0)) ^ (*p_27))) | (*p_1278->g_221)) != p_1278->g_222[0]), 0x6939946F9E5E86A3L)), (*p_27))) , (*l_261)), l_424[8][1])) , p_1278->g_372)));
                        (*l_262) &= (safe_unary_minus_func_int64_t_s((l_426 >= (*p_1278->g_221))));
                        (*l_260) = p_1278->g_152[p_1278->g_99];
                        return p_1278->g_152[(p_26 + 3)];
                    }
                    else
                    { /* block id: 206 */
                        uint16_t ****l_429 = (void*)0;
                        uint16_t ***l_431 = &l_401;
                        uint16_t ****l_430 = &l_431;
                        uint64_t *l_447 = &l_274;
                        int32_t l_452 = 0x49FCEE94L;
                        uint32_t *l_453 = &p_1278->g_94;
                        int16_t *l_458 = &p_1278->g_373;
                        uint8_t *l_461 = &l_173[3][9][0];
                        int i;
                        (*l_260) &= ((+(safe_lshift_func_int8_t_s_s((((*l_430) = &p_1278->g_420) != l_432), ((!((((*p_27) && (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_461) |= (l_460 = ((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((*l_143) = ((l_459 = ((l_263[0] == ((++(**l_381)) , &p_1278->g_264)) && (p_28 ^ ((safe_sub_func_int32_t_s_s((*l_284), (((*l_458) = (safe_add_func_uint32_t_u_u(((*l_453) = ((--(*l_447)) && (safe_rshift_func_uint8_t_u_s(l_452, 2)))), ((safe_sub_func_uint32_t_u_u(((l_456 != &p_1278->g_7) & (*l_284)), 0L)) & l_457)))) , p_28))) <= l_322)))) & (*p_1278->g_295))) , p_26), (**p_1278->g_83))), (-5L))) < p_26))), 4)), l_167[1]))) >= 0x73535C56L) != p_28)) < p_1278->g_120)))) || (*p_1278->g_221));
                        l_263[p_26] = (*p_1278->g_83);
                    }
                    for (l_426 = 2; (l_426 <= 6); l_426 += 1)
                    { /* block id: 221 */
                        union U0 *l_464 = &p_1278->g_55;
                        int32_t l_466 = 0x3D8B80EDL;
                        int32_t l_468 = 0x38B53071L;
                        int32_t l_472 = (-1L);
                        int i;
                        (*l_260) |= (safe_lshift_func_uint8_t_u_u((*l_284), 0));
                        l_464 = &p_1278->g_55;
                        p_1278->g_473--;
                        p_1278->g_476++;
                    }
                }
            }
        }
        for (l_459 = (-4); (l_459 >= (-2)); l_459++)
        { /* block id: 232 */
            uint32_t *l_488 = &l_206[1][5];
            int32_t l_495[4];
            int16_t *l_498 = &l_279;
            int32_t l_532[6][6][6] = {{{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL}},{{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL}},{{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL}},{{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL}},{{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL}},{{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL},{4L,1L,0x5293A0FCL,0x61F6BC8BL,(-9L),0x61F6BC8BL}}};
            uint16_t **l_575 = &p_1278->g_421;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_495[i] = 1L;
            if (((safe_lshift_func_uint16_t_u_s(((0x0CL && ((safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u(p_28, ((((*l_488)--) & ((((p_26 > (safe_lshift_func_int16_t_s_s(((0x9AL && (*p_1278->g_221)) & 0x2FEFL), (((((*l_284) != (((safe_div_func_uint16_t_u_u(l_495[0], ((*l_498) = (safe_add_func_uint64_t_u_u(p_26, 0x98F7468F40AB2B74L))))) >= 0x99L) >= (*l_284))) | (*p_1278->g_221)) < p_1278->g_208) , p_1278->g_372)))) < p_1278->g_347) ^ 0x5422L) , (*l_284))) & 0x1693L))))) , 1L), (*p_1278->g_295))) & (-1L))) | l_495[0]), p_28)) && p_1278->g_175))
            { /* block id: 235 */
                uint64_t l_505 = 0x98416EB66E9F1E18L;
                uint16_t *l_520 = &l_371;
                int32_t l_531 = (-1L);
                int32_t l_538 = 0x4D1C137CL;
                int32_t l_539 = 0x144B49C8L;
                int32_t l_541 = (-6L);
                for (p_1278->g_58 = 6; (p_1278->g_58 >= 0); p_1278->g_58 -= 1)
                { /* block id: 238 */
                    uint32_t **l_512 = &l_488;
                    int32_t l_517 = 1L;
                    uint64_t *l_530 = &l_505;
                    int i, j;
                    for (p_1278->g_373 = 6; (p_1278->g_373 >= 0); p_1278->g_373 -= 1)
                    { /* block id: 241 */
                        int i, j;
                        l_134[(p_1278->g_373 + 1)][p_1278->g_58] |= (*p_1278->g_84);
                    }
                    l_134[p_1278->g_58][p_1278->g_58] = (p_28 ^ (((safe_mod_func_uint64_t_u_u(0x92F16705EFF9E391L, ((**p_1278->g_83) && (((safe_div_func_uint16_t_u_u((l_505 & (safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(0x1D3AE5E2163CDFEDL, ((((*p_1278->g_221) ^ (p_25 == ((*l_512) = &p_1278->g_94))) != ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((-1L), 4)), p_26)) , 0xFBDA3A3EL)) , l_495[3]))) == (*l_284)), l_517)), (*l_284)))), 0xEBE8L)) < (*l_284)) < (*l_284))))) == (*p_1278->g_221)) && 7UL));
                    l_134[p_1278->g_58][p_1278->g_58] = 5L;
                    l_134[(p_1278->g_58 + 1)][p_1278->g_58] = (safe_rshift_func_uint16_t_u_s(0UL, ((((*p_1278->g_420) = l_520) != l_498) & ((func_31(p_26, (((l_495[0] = ((*l_331) = (safe_mul_func_uint16_t_u_u(p_26, (safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((*l_530) &= ((((&p_1278->g_221 == l_527) != ((safe_mul_func_int16_t_s_s((((*l_488) = l_495[0]) | (p_28 && 0x1AL)), p_26)) == (*l_284))) , (*l_284)) == l_517)), 0L)), 0x71L)))))) && (*p_1278->g_221)) <= l_531), p_26, l_134[p_1278->g_58][p_1278->g_58], p_26, p_1278) , 0x96546D52L) <= l_532[4][2][5]))));
                }
                for (p_1278->g_473 = (-22); (p_1278->g_473 < 44); ++p_1278->g_473)
                { /* block id: 256 */
                    int32_t l_536[9] = {0x37C4AF64L,0x37C4AF64L,0x37C4AF64L,0x37C4AF64L,0x37C4AF64L,0x37C4AF64L,0x37C4AF64L,0x37C4AF64L,0x37C4AF64L};
                    int32_t *l_537[8][7] = {{(void*)0,&l_232[3][0],&l_495[3],&p_1278->g_58,&l_532[4][2][5],&p_1278->g_58,&l_495[3]},{(void*)0,&l_232[3][0],&l_495[3],&p_1278->g_58,&l_532[4][2][5],&p_1278->g_58,&l_495[3]},{(void*)0,&l_232[3][0],&l_495[3],&p_1278->g_58,&l_532[4][2][5],&p_1278->g_58,&l_495[3]},{(void*)0,&l_232[3][0],&l_495[3],&p_1278->g_58,&l_532[4][2][5],&p_1278->g_58,&l_495[3]},{(void*)0,&l_232[3][0],&l_495[3],&p_1278->g_58,&l_532[4][2][5],&p_1278->g_58,&l_495[3]},{(void*)0,&l_232[3][0],&l_495[3],&p_1278->g_58,&l_532[4][2][5],&p_1278->g_58,&l_495[3]},{(void*)0,&l_232[3][0],&l_495[3],&p_1278->g_58,&l_532[4][2][5],&p_1278->g_58,&l_495[3]},{(void*)0,&l_232[3][0],&l_495[3],&p_1278->g_58,&l_532[4][2][5],&p_1278->g_58,&l_495[3]}};
                    uint16_t *l_550 = &p_1278->g_52[2];
                    int64_t *l_555 = &p_1278->g_175;
                    int i, j;
                    if (l_147)
                        goto lbl_535;
                    --p_1278->g_543;
                    l_532[4][2][5] |= (safe_lshift_func_uint16_t_u_u(((*l_520) = (((((l_550 != (*p_1278->g_420)) < (((*l_555) = (safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(0x0A563E88AE772741L, p_28)), 1))) != p_1278->g_372)) , &p_25) != &p_1278->g_84) != (safe_rshift_func_int8_t_s_s(((l_232[3][0] &= ((**p_1278->g_83) = 0x5D5C2146L)) != (p_1278->g_52[2] && p_1278->g_99)), 2)))), 5));
                    if ((*p_1278->g_84))
                        break;
                }
            }
            else
            { /* block id: 266 */
                uint64_t *l_559 = &p_1278->g_560;
                int32_t l_576 = 0x1079B1CEL;
                if ((((p_1278->g_52[2] < ((safe_unary_minus_func_int64_t_s(0x54606A79BC50674EL)) < ((*l_559) = ((void*)0 == &p_1278->g_178)))) > l_495[0]) > p_1278->g_540))
                { /* block id: 268 */
                    if (l_532[0][3][2])
                        break;
                }
                else
                { /* block id: 270 */
                    uint32_t l_578 = 0x2961F3D4L;
                    (**p_1278->g_83) = (((-6L) < 0x648AL) && (safe_add_func_int8_t_s_s((p_26 < (safe_rshift_func_uint8_t_u_s((~(safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((*l_498) = (func_31((safe_add_func_uint64_t_u_u(((p_1278->g_51 = ((void*)0 == &p_1278->g_421)) & ((*p_1278->g_421) = (((*l_498) = (safe_div_func_uint8_t_u_u((((p_1278->g_208 , l_575) == ((((0x58L >= ((*p_1278->g_221) = l_576)) , 0x53L) || p_26) , (void*)0)) > (-2L)), l_577))) <= p_1278->g_543))), 0x10B2374C9DE0FE63L)), p_1278->g_94, l_578, l_576, p_1278->g_374[4], p_1278) , (*l_284))), p_1278->g_120)), p_28)), 0x72BBA6B4117F34B9L))), 1))), l_578)));
                }
                l_495[0] &= (*p_1278->g_84);
                if ((*p_27))
                    break;
            }
            (*p_1278->g_84) = (((p_26 >= (safe_sub_func_int16_t_s_s(0x38DFL, (l_532[4][2][5] |= (((safe_unary_minus_func_uint32_t_u(p_26)) >= ((-1L) || (!((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s(l_586, (*p_1278->g_421))), (safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((((*l_498) &= (safe_rshift_func_int8_t_s_u(((*p_1278->g_221) | ((&p_1278->g_295 == &p_1278->g_295) , 9L)), 5))) == l_593), (*p_1278->g_84))) > (-1L)), p_26)))) || l_594)))) == (**p_1278->g_83)))))) < p_1278->g_52[2]) & 0x528F907F78662163L);
            (*p_1278->g_83) = &p_26;
        }
    }
    else
    { /* block id: 286 */
        int64_t l_597 = (-8L);
        int32_t l_600 = (-3L);
        uint32_t **l_605[2];
        int8_t l_609 = (-7L);
        uint32_t *l_610 = &p_1278->g_611;
        int32_t l_612 = 0x4CFC2314L;
        uint16_t ***l_613 = &p_1278->g_420;
        int8_t *l_784[1];
        int i;
        for (i = 0; i < 2; i++)
            l_605[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_784[i] = &l_609;
lbl_616:
        l_612 = (((safe_mod_func_int8_t_s_s((l_597 >= (safe_lshift_func_uint8_t_u_s((((l_600 , (safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(l_600)), l_604))) && ((*p_1278->g_295) = ((void*)0 == l_605[1]))) && (safe_lshift_func_int8_t_s_u((0xBC053A1C9B229A55L >= (p_1278->g_608 < ((**p_1278->g_83) = (((*l_610) &= ((l_609 && l_600) , p_28)) , (**p_1278->g_83))))), (*p_1278->g_221)))), 5))), (-5L))) <= p_1278->g_476) ^ p_1278->g_222[4]);
        if ((((*l_613) = &l_148) == &p_1278->g_421))
        { /* block id: 292 */
            (*p_1278->g_83) = (*p_1278->g_83);
            return (**p_1278->g_83);
        }
        else
        { /* block id: 295 */
            int16_t l_668 = 1L;
            int32_t l_679 = (-9L);
            int32_t l_769 = (-1L);
            int32_t *l_790 = (void*)0;
            int32_t *l_791 = &p_1278->g_58;
            int32_t *l_792[10][4][2] = {{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}},{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}},{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}},{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}},{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}},{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}},{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}},{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}},{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}},{{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]},{&l_134[2][0],&l_134[6][5]}}};
            uint8_t l_793[3][8] = {{7UL,0x29L,249UL,0x29L,7UL,7UL,0x29L,249UL},{7UL,0x29L,249UL,0x29L,7UL,7UL,0x29L,249UL},{7UL,0x29L,249UL,0x29L,7UL,7UL,0x29L,249UL}};
            int i, j, k;
            (*p_27) = 0x59DF8FDDL;
            for (p_1278->g_11 = (-9); (p_1278->g_11 < (-23)); --p_1278->g_11)
            { /* block id: 299 */
                int64_t l_666[9][6] = {{0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L},{0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L},{0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L},{0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L},{0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L},{0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L},{0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L},{0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L},{0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L,0x14D5E266298F3CB9L}};
                int32_t l_669[1];
                int64_t *l_680 = &p_1278->g_175;
                union U0 *l_681 = &p_1278->g_92;
                int16_t *l_693 = &p_1278->g_373;
                uint16_t l_743 = 0x0AD4L;
                uint8_t *l_768[8] = {&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_669[i] = 6L;
                if (p_1278->g_43)
                    goto lbl_616;
            }
            --l_793[2][0];
        }
    }
    (**p_1278->g_83) = (*p_1278->g_788);
    for (l_153 = (-19); (l_153 > (-4)); l_153 = safe_add_func_uint64_t_u_u(l_153, 1))
    { /* block id: 400 */
        uint16_t ***l_808 = &p_1278->g_420;
        uint16_t ****l_807 = &l_808;
        uint64_t *l_818 = &p_1278->g_178;
        int32_t l_823 = 0L;
        uint64_t l_842[10][10][2] = {{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}},{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}},{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}},{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}},{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}},{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}},{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}},{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}},{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}},{{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL},{4UL,0UL}}};
        int i, j, k;
        for (p_1278->g_58 = 0; (p_1278->g_58 <= (-30)); --p_1278->g_58)
        { /* block id: 403 */
            int64_t l_815 = 0x22C39CEF380E1113L;
            int32_t l_822[4][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
            int i, j;
            if ((*p_25))
            { /* block id: 404 */
                int32_t **l_801 = &p_1278->g_788;
                uint64_t *l_817[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_817[i][j] = &p_1278->g_178;
                }
                (*l_801) = ((*p_1278->g_83) = &p_26);
                for (l_233 = 0; (l_233 > (-4)); l_233 = safe_sub_func_uint8_t_u_u(l_233, 6))
                { /* block id: 409 */
                    uint32_t ***l_804 = (void*)0;
                    uint32_t **l_806[3][3][5] = {{{(void*)0,&p_1278->g_172,&p_1278->g_172,&p_1278->g_172,(void*)0},{(void*)0,&p_1278->g_172,&p_1278->g_172,&p_1278->g_172,(void*)0},{(void*)0,&p_1278->g_172,&p_1278->g_172,&p_1278->g_172,(void*)0}},{{(void*)0,&p_1278->g_172,&p_1278->g_172,&p_1278->g_172,(void*)0},{(void*)0,&p_1278->g_172,&p_1278->g_172,&p_1278->g_172,(void*)0},{(void*)0,&p_1278->g_172,&p_1278->g_172,&p_1278->g_172,(void*)0}},{{(void*)0,&p_1278->g_172,&p_1278->g_172,&p_1278->g_172,(void*)0},{(void*)0,&p_1278->g_172,&p_1278->g_172,&p_1278->g_172,(void*)0},{(void*)0,&p_1278->g_172,&p_1278->g_172,&p_1278->g_172,(void*)0}}};
                    uint32_t ***l_805 = &l_806[0][0][4];
                    int32_t l_816 = (-1L);
                    int32_t *l_841 = &l_134[7][3];
                    int16_t *l_843[1];
                    int64_t *l_844 = &p_1278->g_175;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_843[i] = &p_1278->g_373;
                    (*p_25) = (((((p_1278->g_11 & 3UL) , ((*l_805) = &p_1278->g_172)) == ((l_807 == ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_815, ((+0x6DL) || p_26))), ((l_816 ^ 0x5B2F5D99L) > (*p_25)))), (**l_801))) , &p_1278->g_637)) , (void*)0)) , l_817[0][0]) == l_818);
                    (*p_1278->g_84) = (((safe_rshift_func_int8_t_s_u((!(p_26 >= l_815)), 6)) | 0UL) <= (((l_822[3][0] = (safe_unary_minus_func_uint32_t_u(p_1278->g_58))) | l_823) == (+((safe_rshift_func_uint16_t_u_s((((*l_844) = ((safe_sub_func_uint8_t_u_u(((p_1278->g_828 , l_823) ^ ((((p_1278->g_92.f1 = (((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((p_1278->g_52[2] = ((safe_mod_func_uint8_t_u_u((0x3EF9D31D54F8F9AFL | (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*p_1278->g_421) = (((*l_841) ^= ((**p_1278->g_83) == (**l_801))) == (**p_1278->g_83))), l_815)), p_28))), (*p_1278->g_221))) <= (*p_1278->g_295))) != p_26), p_1278->g_373)) <= l_823), 4L)) , 0x0FL) != p_26), l_842[8][7][0])) && 0x0AC6A550F10EF99CL) , 0x3568L)) && p_28) >= p_26) || p_1278->g_51)), (*p_1278->g_295))) || (**l_801))) , p_28), p_1278->g_473)) != 0x4D8353AAL))));
                }
            }
            else
            { /* block id: 420 */
                int32_t l_845 = 8L;
                for (p_1278->g_540 = 6; (p_1278->g_540 >= 0); p_1278->g_540 -= 1)
                { /* block id: 423 */
                    int i;
                    if (p_1278->g_152[p_1278->g_540])
                        break;
                }
                l_822[2][0] = (*p_27);
                return l_845;
            }
            return l_822[3][0];
        }
        if ((*p_1278->g_788))
            break;
        if ((*p_27))
            break;
        if ((*p_1278->g_788))
            continue;
    }
    return (*p_1278->g_788);
}


/* ------------------------------------------ */
/* 
 * reads : p_1278->g_52 p_1278->g_55
 * writes: p_1278->g_52
 */
union U0  func_31(uint32_t  p_32, int16_t  p_33, int64_t  p_34, uint16_t  p_35, int64_t  p_36, struct S1 * p_1278)
{ /* block id: 24 */
    int32_t l_44 = 0x1F3A4B44L;
    int32_t *l_45 = &p_1278->g_11;
    int32_t l_46 = 0x11E8E103L;
    int32_t *l_47 = &l_44;
    int32_t *l_48 = &l_44;
    int32_t *l_49 = &l_44;
    int32_t *l_50[1][7][10] = {{{(void*)0,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,(void*)0,(void*)0},{(void*)0,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,(void*)0,(void*)0},{(void*)0,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,(void*)0,(void*)0},{(void*)0,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,(void*)0,(void*)0},{(void*)0,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,(void*)0,(void*)0},{(void*)0,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,(void*)0,(void*)0},{(void*)0,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,&l_46,(void*)0,(void*)0}}};
    int i, j, k;
    p_1278->g_52[2]++;
    return p_1278->g_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_1278->g_51 p_1278->g_99 p_1278->g_84 p_1278->g_94 p_1278->g_58 p_1278->g_52
 * writes: p_1278->g_108 p_1278->g_55.f1 p_1278->g_58
 */
uint64_t  func_63(uint32_t  p_64, int32_t * p_65, int16_t  p_66, int64_t  p_67, struct S1 * p_1278)
{ /* block id: 41 */
    int8_t *l_107 = &p_1278->g_108;
    int32_t **l_113 = &p_1278->g_84;
    int16_t *l_116 = &p_1278->g_55.f1;
    int16_t *l_117[2][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    uint16_t l_118[9][10][2] = {{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}},{{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL},{65535UL,0UL}}};
    int i, j, k;
    (*p_1278->g_84) = (safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(p_1278->g_51, ((*l_107) = p_66))) > (safe_mul_func_uint8_t_u_u((((((void*)0 != &p_1278->g_94) == ((p_1278->g_99 , (((safe_div_func_uint8_t_u_u((l_113 != (void*)0), (safe_mul_func_int16_t_s_s((l_118[2][5][0] |= (p_64 | (((((*l_116) = p_66) , (*l_113)) != p_65) <= p_1278->g_94))), (**l_113))))) <= (**l_113)) , &p_1278->g_94)) != p_65)) , (**l_113)) < p_1278->g_51), 0xCCL))), p_1278->g_94));
    return p_1278->g_52[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1278->g_84 p_1278->g_99 p_1278->g_55.f0
 * writes: p_1278->g_58 p_1278->g_99
 */
uint8_t  func_72(int32_t ** p_73, int64_t  p_74, struct S1 * p_1278)
{ /* block id: 36 */
    uint16_t l_95 = 0xFF0DL;
    int32_t *l_96 = &p_1278->g_11;
    int32_t l_97[2];
    int32_t *l_98[3][3] = {{&p_1278->g_58,&p_1278->g_58,&p_1278->g_58},{&p_1278->g_58,&p_1278->g_58,&p_1278->g_58},{&p_1278->g_58,&p_1278->g_58,&p_1278->g_58}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_97[i] = 1L;
lbl_102:
    (*p_1278->g_84) = l_95;
    p_1278->g_99--;
    if (l_95)
        goto lbl_102;
    return p_1278->g_55.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1278->g_83 p_1278->g_84 p_1278->g_92.f0
 * writes: p_1278->g_84
 */
uint8_t  func_77(int32_t ** p_78, int8_t  p_79, int32_t * p_80, uint16_t  p_81, uint32_t  p_82, struct S1 * p_1278)
{ /* block id: 33 */
    (*p_78) = (*p_1278->g_83);
    return p_1278->g_92.f0;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1279;
    struct S1* p_1278 = &c_1279;
    struct S1 c_1280 = {
        0UL, // p_1278->g_7
        1L, // p_1278->g_11
        0x78D5L, // p_1278->g_43
        5L, // p_1278->g_51
        {65533UL,65533UL,65533UL}, // p_1278->g_52
        {0UL}, // p_1278->g_55
        0x16C7BFB9L, // p_1278->g_58
        &p_1278->g_58, // p_1278->g_84
        &p_1278->g_84, // p_1278->g_83
        {0x84L}, // p_1278->g_92
        4294967295UL, // p_1278->g_94
        4294967295UL, // p_1278->g_99
        0x04L, // p_1278->g_108
        0x2360892CL, // p_1278->g_120
        {0x9BDCL,0x95E7L,0x9BDCL,0x9BDCL,0x95E7L,0x9BDCL,0x9BDCL}, // p_1278->g_152
        (void*)0, // p_1278->g_172
        4L, // p_1278->g_175
        0xD58D48762EDC84E9L, // p_1278->g_178
        1UL, // p_1278->g_208
        {0x49L,0x49L,0x49L,0x49L,0x49L,0x49L,0x49L}, // p_1278->g_222
        &p_1278->g_222[0], // p_1278->g_221
        1L, // p_1278->g_234
        4294967290UL, // p_1278->g_264
        &p_1278->g_108, // p_1278->g_295
        1UL, // p_1278->g_347
        0x35L, // p_1278->g_372
        0x4D3CL, // p_1278->g_373
        {8UL,8UL,8UL,8UL,8UL,8UL,8UL}, // p_1278->g_374
        &p_1278->g_152[1], // p_1278->g_421
        &p_1278->g_421, // p_1278->g_420
        9UL, // p_1278->g_473
        0xED71E7F5L, // p_1278->g_476
        0x43976243L, // p_1278->g_540
        {{{(-6L),(-8L),(-1L),1L,(-8L),(-6L)},{(-6L),(-8L),(-1L),1L,(-8L),(-6L)},{(-6L),(-8L),(-1L),1L,(-8L),(-6L)},{(-6L),(-8L),(-1L),1L,(-8L),(-6L)},{(-6L),(-8L),(-1L),1L,(-8L),(-6L)},{(-6L),(-8L),(-1L),1L,(-8L),(-6L)},{(-6L),(-8L),(-1L),1L,(-8L),(-6L)},{(-6L),(-8L),(-1L),1L,(-8L),(-6L)},{(-6L),(-8L),(-1L),1L,(-8L),(-6L)},{(-6L),(-8L),(-1L),1L,(-8L),(-6L)}}}, // p_1278->g_542
        65533UL, // p_1278->g_543
        18446744073709551611UL, // p_1278->g_560
        (-8L), // p_1278->g_608
        9UL, // p_1278->g_611
        &p_1278->g_543, // p_1278->g_639
        &p_1278->g_639, // p_1278->g_638
        &p_1278->g_638, // p_1278->g_637
        &p_1278->g_637, // p_1278->g_636
        {0UL}, // p_1278->g_650
        (void*)0, // p_1278->g_741
        {{4UL},{0xBCL},{4UL},{4UL},{0xBCL},{4UL},{4UL}}, // p_1278->g_758
        {7UL}, // p_1278->g_776
        5L, // p_1278->g_786
        &p_1278->g_58, // p_1278->g_788
        {&p_1278->g_788,&p_1278->g_788,&p_1278->g_788,&p_1278->g_788,&p_1278->g_788,&p_1278->g_788,&p_1278->g_788,&p_1278->g_788}, // p_1278->g_787
        &p_1278->g_788, // p_1278->g_789
        (void*)0, // p_1278->g_800
        {4UL}, // p_1278->g_828
        (void*)0, // p_1278->g_857
        {&p_1278->g_11,&p_1278->g_11,&p_1278->g_11}, // p_1278->g_859
        0xF521F927L, // p_1278->g_894
        (void*)0, // p_1278->g_911
        {0xFEL}, // p_1278->g_936
        (-9L), // p_1278->g_961
        {{0x5AL,(-1L),0x5AL,0x5AL,(-1L),0x5AL,0x5AL,(-1L)},{0x5AL,(-1L),0x5AL,0x5AL,(-1L),0x5AL,0x5AL,(-1L)},{0x5AL,(-1L),0x5AL,0x5AL,(-1L),0x5AL,0x5AL,(-1L)}}, // p_1278->g_963
        0x74L, // p_1278->g_1030
        &p_1278->g_83, // p_1278->g_1036
        &p_1278->g_560, // p_1278->g_1072
        (void*)0, // p_1278->g_1122
        &p_1278->g_1122, // p_1278->g_1121
        (-1L), // p_1278->g_1156
        &p_1278->g_611, // p_1278->g_1161
        {{{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161}},{{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161}},{{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161}},{{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161}},{{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161},{&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,&p_1278->g_1161,(void*)0,(void*)0,&p_1278->g_1161}}}, // p_1278->g_1160
        0x19D4C9FEA267C079L, // p_1278->g_1219
        0x73L, // p_1278->g_1272
    };
    c_1279 = c_1280;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1278);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1278->g_7, "p_1278->g_7", print_hash_value);
    transparent_crc(p_1278->g_11, "p_1278->g_11", print_hash_value);
    transparent_crc(p_1278->g_43, "p_1278->g_43", print_hash_value);
    transparent_crc(p_1278->g_51, "p_1278->g_51", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1278->g_52[i], "p_1278->g_52[i]", print_hash_value);

    }
    transparent_crc(p_1278->g_55.f0, "p_1278->g_55.f0", print_hash_value);
    transparent_crc(p_1278->g_58, "p_1278->g_58", print_hash_value);
    transparent_crc(p_1278->g_92.f0, "p_1278->g_92.f0", print_hash_value);
    transparent_crc(p_1278->g_94, "p_1278->g_94", print_hash_value);
    transparent_crc(p_1278->g_99, "p_1278->g_99", print_hash_value);
    transparent_crc(p_1278->g_108, "p_1278->g_108", print_hash_value);
    transparent_crc(p_1278->g_120, "p_1278->g_120", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1278->g_152[i], "p_1278->g_152[i]", print_hash_value);

    }
    transparent_crc(p_1278->g_175, "p_1278->g_175", print_hash_value);
    transparent_crc(p_1278->g_178, "p_1278->g_178", print_hash_value);
    transparent_crc(p_1278->g_208, "p_1278->g_208", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1278->g_222[i], "p_1278->g_222[i]", print_hash_value);

    }
    transparent_crc(p_1278->g_234, "p_1278->g_234", print_hash_value);
    transparent_crc(p_1278->g_264, "p_1278->g_264", print_hash_value);
    transparent_crc(p_1278->g_347, "p_1278->g_347", print_hash_value);
    transparent_crc(p_1278->g_372, "p_1278->g_372", print_hash_value);
    transparent_crc(p_1278->g_373, "p_1278->g_373", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1278->g_374[i], "p_1278->g_374[i]", print_hash_value);

    }
    transparent_crc(p_1278->g_473, "p_1278->g_473", print_hash_value);
    transparent_crc(p_1278->g_476, "p_1278->g_476", print_hash_value);
    transparent_crc(p_1278->g_540, "p_1278->g_540", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1278->g_542[i][j][k], "p_1278->g_542[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1278->g_543, "p_1278->g_543", print_hash_value);
    transparent_crc(p_1278->g_560, "p_1278->g_560", print_hash_value);
    transparent_crc(p_1278->g_608, "p_1278->g_608", print_hash_value);
    transparent_crc(p_1278->g_611, "p_1278->g_611", print_hash_value);
    transparent_crc(p_1278->g_650.f0, "p_1278->g_650.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1278->g_758[i].f0, "p_1278->g_758[i].f0", print_hash_value);

    }
    transparent_crc(p_1278->g_776.f0, "p_1278->g_776.f0", print_hash_value);
    transparent_crc(p_1278->g_786, "p_1278->g_786", print_hash_value);
    transparent_crc(p_1278->g_828.f0, "p_1278->g_828.f0", print_hash_value);
    transparent_crc(p_1278->g_894, "p_1278->g_894", print_hash_value);
    transparent_crc(p_1278->g_936.f0, "p_1278->g_936.f0", print_hash_value);
    transparent_crc(p_1278->g_961, "p_1278->g_961", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1278->g_963[i][j], "p_1278->g_963[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1278->g_1030, "p_1278->g_1030", print_hash_value);
    transparent_crc(p_1278->g_1156, "p_1278->g_1156", print_hash_value);
    transparent_crc(p_1278->g_1219, "p_1278->g_1219", print_hash_value);
    transparent_crc(p_1278->g_1272, "p_1278->g_1272", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
