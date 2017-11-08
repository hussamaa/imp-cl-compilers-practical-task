// -g 93,59,1 -l 31,1,1
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


// Seed: 1484726500

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t * f0;
};

struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    int32_t g_8;
    uint8_t g_68[10][5];
    uint16_t g_80;
    int8_t g_101[7];
    uint32_t g_107;
    int64_t g_120[2];
    int32_t *g_132;
    volatile int32_t g_162[3];
    uint32_t g_195[4];
    int32_t g_197;
    int32_t * volatile g_196[3];
    int32_t * volatile g_198;
    union U0 g_207[2][5];
    uint64_t g_240;
    union U0 *g_273;
    union U0 **g_272;
    union U0 ***g_271;
    volatile int8_t g_329;
    volatile int8_t * volatile g_328;
    volatile int8_t * volatile * volatile g_327;
    int16_t g_361;
    volatile uint32_t g_374;
    uint32_t g_378[6][5];
    int16_t g_380;
    int32_t g_381;
    uint8_t g_415;
    int32_t ** volatile g_417;
    uint32_t g_434;
    int32_t ** volatile g_494;
    int16_t g_540;
    uint8_t *g_571[6];
    uint8_t ** volatile g_570;
    uint8_t ** volatile *g_569;
    int64_t *g_646;
    int64_t *g_647[4][1];
    uint64_t *** volatile g_735[9];
    uint64_t *** volatile g_737;
    int32_t ** volatile g_876[1];
    int8_t g_879;
    int8_t *g_878[6];
    union U0 g_880[5][7];
    int32_t g_887;
    volatile int64_t g_903;
    uint32_t g_913;
    int32_t * volatile g_915;
    int32_t ** volatile g_928;
    volatile int16_t g_977;
    uint32_t g_1019;
    volatile uint8_t g_1044;
    int32_t ** volatile g_1087[3][9][2];
    uint64_t *g_1116;
    uint64_t **g_1115[7][8];
    uint64_t ***g_1114;
    volatile int32_t g_1120;
    int32_t g_1137[9];
};


/* --- FORWARD DECLARATIONS --- */
union U0  func_1(struct S1 * p_1138);
int32_t  func_13(int32_t  p_14, int32_t  p_15, int32_t * p_16, int32_t  p_17, uint32_t  p_18, struct S1 * p_1138);
uint64_t  func_22(int32_t  p_23, struct S1 * p_1138);
int8_t * func_27(uint16_t  p_28, int8_t * p_29, uint16_t  p_30, union U0  p_31, int32_t * p_32, struct S1 * p_1138);
uint64_t  func_33(uint64_t  p_34, int32_t * p_35, int16_t  p_36, int32_t  p_37, uint16_t  p_38, struct S1 * p_1138);
uint8_t  func_39(int8_t * p_40, struct S1 * p_1138);
int8_t * func_41(int32_t * p_42, union U0  p_43, int16_t  p_44, int32_t * p_45, union U0  p_46, struct S1 * p_1138);
int32_t * func_47(int32_t * p_48, uint8_t  p_49, uint64_t  p_50, int64_t  p_51, struct S1 * p_1138);
int32_t  func_54(int8_t * p_55, int32_t  p_56, int8_t * p_57, int64_t  p_58, struct S1 * p_1138);
int8_t * func_59(int32_t  p_60, uint8_t  p_61, int8_t * p_62, uint8_t  p_63, struct S1 * p_1138);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1138->g_8 p_1138->g_272 p_1138->g_273 p_1138->g_207
 * writes: p_1138->g_4 p_1138->g_8
 */
union U0  func_1(struct S1 * p_1138)
{ /* block id: 4 */
    uint64_t l_9[9] = {0xB8F5F4990069F30CL,0xB8F5F4990069F30CL,0xB8F5F4990069F30CL,0xB8F5F4990069F30CL,0xB8F5F4990069F30CL,0xB8F5F4990069F30CL,0xB8F5F4990069F30CL,0xB8F5F4990069F30CL,0xB8F5F4990069F30CL};
    union U0 l_21 = {0};
    int32_t *l_26 = &p_1138->g_8;
    int32_t *l_52 = &p_1138->g_8;
    int64_t l_53 = 0x32987C837E05AF84L;
    int64_t l_882 = (-1L);
    uint32_t *l_912 = &p_1138->g_913;
    uint64_t l_917 = 0x922AA37E7F378710L;
    uint64_t l_998 = 0x6568CE1C348D8AE5L;
    int8_t l_1001 = 0L;
    uint64_t l_1014 = 0x293B7BE66587055AL;
    int16_t l_1017 = 0x04B0L;
    int16_t l_1018 = 9L;
    int32_t l_1125 = 1L;
    int32_t l_1126[8] = {0x61F0CBC2L,0x57223287L,0x61F0CBC2L,0x61F0CBC2L,0x57223287L,0x61F0CBC2L,0x61F0CBC2L,0x57223287L};
    int i;
    for (p_1138->g_4 = 21; (p_1138->g_4 < (-17)); p_1138->g_4 = safe_sub_func_int8_t_s_s(p_1138->g_4, 6))
    { /* block id: 7 */
        int32_t *l_7 = &p_1138->g_8;
        union U0 l_10 = {0};
        (*l_7) ^= 0x43707822L;
        for (p_1138->g_8 = 6; (p_1138->g_8 >= 0); p_1138->g_8 -= 1)
        { /* block id: 11 */
            return l_10;
        }
    }
    return (**p_1138->g_272);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1138->g_8
 */
int32_t  func_13(int32_t  p_14, int32_t  p_15, int32_t * p_16, int32_t  p_17, uint32_t  p_18, struct S1 * p_1138)
{ /* block id: 399 */
    int8_t l_914 = (-1L);
    (*p_16) = (&p_15 != (void*)0);
    return l_914;
}


/* ------------------------------------------ */
/* 
 * reads : p_1138->g_415 p_1138->g_494 p_1138->g_132 p_1138->g_8 p_1138->g_329 p_1138->g_271 p_1138->g_272 p_1138->g_273 p_1138->g_207 p_1138->g_887 p_1138->g_107 p_1138->g_879 p_1138->g_197 p_1138->g_327 p_1138->g_328 p_1138->g_195 p_1138->g_101 p_1138->g_198 p_1138->g_903 p_1138->g_240 p_1138->g_646 p_1138->g_120 p_1138->g_381
 * writes: p_1138->g_415 p_1138->g_8 p_1138->g_197 p_1138->g_240
 */
uint64_t  func_22(int32_t  p_23, struct S1 * p_1138)
{ /* block id: 386 */
    int8_t l_888 = 0x7CL;
    uint16_t l_889 = 65535UL;
    uint64_t *l_904 = &p_1138->g_240;
    uint32_t *l_907 = &p_1138->g_195[0];
    for (p_1138->g_415 = 21; (p_1138->g_415 == 8); --p_1138->g_415)
    { /* block id: 389 */
        int32_t *l_885 = &p_1138->g_8;
        int32_t *l_886[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U0 ***l_894 = &p_1138->g_272;
        int i;
        if ((**p_1138->g_494))
            break;
        ++l_889;
        (*p_1138->g_198) = ((safe_add_func_uint8_t_u_u((p_23 , (((l_888 , (((l_894 == ((safe_add_func_uint64_t_u_u(p_23, ((((((safe_rshift_func_uint16_t_u_u(5UL, p_1138->g_329)) | ((***p_1138->g_271) , (((safe_mul_func_int16_t_s_s(((((*p_1138->g_132) = (*l_885)) == p_23) < p_1138->g_887), p_1138->g_107)) == p_23) > l_889))) && p_1138->g_879) != p_1138->g_197) , (**p_1138->g_327)) >= 9L))) , l_894)) , p_23) , p_1138->g_195[0])) || 0x5259L) < 9UL)), p_23)) == p_1138->g_101[2]);
    }
    (*p_1138->g_132) ^= ((safe_div_func_uint8_t_u_u(((p_1138->g_903 || ((*l_904) ^= 0x864B29956087DE79L)) != (((p_23 ^ ((safe_mul_func_int8_t_s_s(((((void*)0 == l_907) && p_23) , (0xCA22A3F9L < (safe_mod_func_uint64_t_u_u(l_889, (((safe_div_func_int8_t_s_s((p_23 >= l_889), 0x59L)) , 4294967295UL) , (*p_1138->g_646)))))), p_23)) , p_23)) , p_1138->g_381) != p_1138->g_195[2])), l_889)) ^ l_888);
    return l_888;
}


/* ------------------------------------------ */
/* 
 * reads : p_1138->g_132
 * writes: p_1138->g_8
 */
int8_t * func_27(uint16_t  p_28, int8_t * p_29, uint16_t  p_30, union U0  p_31, int32_t * p_32, struct S1 * p_1138)
{ /* block id: 383 */
    int8_t *l_881 = (void*)0;
    (*p_1138->g_132) = (-1L);
    return l_881;
}


/* ------------------------------------------ */
/* 
 * reads : p_1138->g_494 p_1138->g_132 p_1138->g_8 p_1138->g_197 p_1138->g_80 p_1138->g_361 p_1138->g_68 p_1138->g_2 p_1138->g_4 p_1138->g_3 p_1138->g_101
 * writes: p_1138->g_80 p_1138->g_361 p_1138->g_68 p_1138->g_8 p_1138->g_4 p_1138->g_101 p_1138->g_107
 */
uint64_t  func_33(uint64_t  p_34, int32_t * p_35, int16_t  p_36, int32_t  p_37, uint16_t  p_38, struct S1 * p_1138)
{ /* block id: 373 */
    int32_t l_844 = 0x6EDA8877L;
    uint32_t *l_863 = (void*)0;
    uint32_t *l_864[8] = {(void*)0,&p_1138->g_107,(void*)0,(void*)0,&p_1138->g_107,(void*)0,(void*)0,&p_1138->g_107};
    int32_t l_865 = 1L;
    int32_t l_866 = 1L;
    int16_t l_867 = (-1L);
    uint8_t *l_868[3];
    int32_t l_869 = 0L;
    int32_t l_870 = 7L;
    uint64_t *l_871 = (void*)0;
    int16_t *l_872 = (void*)0;
    int16_t *l_873 = &p_1138->g_361;
    int32_t *l_874 = (void*)0;
    int32_t l_875 = 0x4B1CE2D3L;
    int32_t **l_877[5][3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_868[i] = &p_1138->g_68[7][3];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_877[i][j] = (void*)0;
    }
    p_35 = func_47((*p_1138->g_494), ((safe_rshift_func_int16_t_s_s(((l_844 == ((((l_875 = (safe_mul_func_uint16_t_u_u(l_844, (safe_mul_func_int16_t_s_s(((*l_873) |= ((((p_36 | (((safe_rshift_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u(l_844, (((l_870 = (l_869 = (((safe_div_func_uint32_t_u_u((l_866 = (safe_sub_func_uint64_t_u_u(((((void*)0 == &l_844) < (p_1138->g_80 = ((p_38 != (safe_mul_func_int8_t_s_s(((l_865 ^= (safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((l_844 || l_844) <= 8L), l_844)) != 0x0D70L), (-1L)))) && (*p_35)), l_844))) >= 4294967292UL))) , p_1138->g_197), 0x53726A3C45348EF3L))), (*p_35))) < 0x1EBE57BBL) && l_867))) != p_38) != (-6L)))) , p_1138->g_80) || l_867) || (*p_1138->g_132)), 5)) ^ p_36) < l_844)) , (*p_1138->g_132)) , l_871) != l_871)), 0x4FAFL))))) , 1L) >= p_36) <= 0UL)) ^ 4294967290UL), l_844)) , l_844), p_36, p_1138->g_197, p_1138);
    return p_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_1138->g_101 p_1138->g_162 p_1138->g_8 p_1138->g_240 p_1138->g_68 p_1138->g_195 p_1138->g_80 p_1138->g_197 p_1138->g_132 p_1138->g_494 p_1138->g_378 p_1138->g_415 p_1138->g_434 p_1138->g_380 p_1138->g_2 p_1138->g_4 p_1138->g_3 p_1138->g_198 p_1138->g_328 p_1138->g_329 p_1138->g_327 p_1138->g_120 p_1138->g_107 p_1138->g_646 p_1138->g_272 p_1138->g_273 p_1138->g_207 p_1138->g_271 p_1138->g_540 p_1138->g_361 p_1138->g_569 p_1138->g_570 p_1138->g_381
 * writes: p_1138->g_240 p_1138->g_195 p_1138->g_4 p_1138->g_107 p_1138->g_197 p_1138->g_8 p_1138->g_415 p_1138->g_361 p_1138->g_80 p_1138->g_120 p_1138->g_101 p_1138->g_380 p_1138->g_68 p_1138->g_434 p_1138->g_646 p_1138->g_647 p_1138->g_540 p_1138->g_207 p_1138->g_571
 */
uint8_t  func_39(int8_t * p_40, struct S1 * p_1138)
{ /* block id: 81 */
    uint16_t l_228[6][3] = {{0xCE3DL,0xCE3DL,0x631EL},{0xCE3DL,0xCE3DL,0x631EL},{0xCE3DL,0xCE3DL,0x631EL},{0xCE3DL,0xCE3DL,0x631EL},{0xCE3DL,0xCE3DL,0x631EL},{0xCE3DL,0xCE3DL,0x631EL}};
    uint64_t *l_239 = &p_1138->g_240;
    uint32_t *l_241 = &p_1138->g_195[0];
    int32_t l_242 = (-1L);
    uint8_t *l_325[10][4] = {{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]},{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]},{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]},{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]},{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]},{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]},{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]},{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]},{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]},{&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[7][3],&p_1138->g_68[1][2]}};
    uint8_t **l_324 = &l_325[4][2];
    int32_t l_345 = 0x63FD43EEL;
    int32_t l_347 = 0x66B907F1L;
    int32_t l_348[4][8] = {{0x4163344DL,(-1L),1L,(-1L),0x4163344DL,0x4163344DL,(-1L),1L},{0x4163344DL,(-1L),1L,(-1L),0x4163344DL,0x4163344DL,(-1L),1L},{0x4163344DL,(-1L),1L,(-1L),0x4163344DL,0x4163344DL,(-1L),1L},{0x4163344DL,(-1L),1L,(-1L),0x4163344DL,0x4163344DL,(-1L),1L}};
    uint64_t l_355[9][10][1] = {{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}}};
    int64_t l_449[5];
    int32_t *l_471 = &p_1138->g_8;
    uint32_t l_550[8][6][1] = {{{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL}},{{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL}},{{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL}},{{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL}},{{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL}},{{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL}},{{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL}},{{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL},{0x5DBA3FADL}}};
    int8_t *l_589 = &p_1138->g_101[6];
    int8_t **l_588 = &l_589;
    int8_t ***l_587 = &l_588;
    int32_t l_593 = 0x1A990FE3L;
    uint8_t l_611 = 1UL;
    union U0 l_629 = {0};
    int8_t l_676 = 0x22L;
    uint16_t l_678 = 0x553FL;
    int32_t l_767[6];
    int8_t l_775 = 1L;
    uint16_t l_785 = 0xBF15L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_449[i] = 0x6CDAE7ECEFA8F75DL;
    for (i = 0; i < 6; i++)
        l_767[i] = 1L;
    l_242 &= ((p_1138->g_101[3] >= p_1138->g_162[0]) , (safe_mod_func_uint32_t_u_u(((*l_241) = (safe_lshift_func_uint16_t_u_s(((((((~p_1138->g_8) ^ 65533UL) || l_228[3][2]) || (0x75CB8927L || (((*l_239) ^= (safe_mul_func_int16_t_s_s(((l_228[3][2] >= (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(((void*)0 != &p_1138->g_162[0]), 0xAF70A99F064817D2L)), l_228[1][2])), (-6L)))) > 0x2F53L), l_228[3][2]))) < p_1138->g_68[1][0]))) , l_228[4][1]) , p_1138->g_195[0]), 4))), p_1138->g_80)));
lbl_768:
    if ((p_1138->g_197 != (safe_div_func_int32_t_s_s(((l_228[3][2] & 1UL) | (*p_40)), 0xF06B5A6BL))))
    { /* block id: 85 */
        int32_t l_265 = 1L;
        union U0 l_266 = {0};
        union U0 ****l_274 = &p_1138->g_271;
        union U0 ****l_275 = (void*)0;
        union U0 ***l_277 = (void*)0;
        union U0 ****l_276 = &l_277;
        int8_t *l_318 = &p_1138->g_101[4];
        int8_t **l_317[5][1] = {{&l_318},{&l_318},{&l_318},{&l_318},{&l_318}};
        int32_t l_339[10] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
        uint16_t l_423 = 65527UL;
        int16_t *l_432[1][5][9] = {{{&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380},{&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380},{&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380},{&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380},{&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380,&p_1138->g_380}}};
        int32_t *l_477 = &p_1138->g_8;
        uint64_t *l_564[7] = {&p_1138->g_240,&p_1138->g_240,&p_1138->g_240,&p_1138->g_240,&p_1138->g_240,&p_1138->g_240,&p_1138->g_240};
        int32_t l_583 = (-1L);
        int32_t *l_584[8] = {&p_1138->g_197,&p_1138->g_197,&p_1138->g_197,&p_1138->g_197,&p_1138->g_197,&p_1138->g_197,&p_1138->g_197,&p_1138->g_197};
        uint32_t l_590 = 0x1A377A8BL;
        int i, j, k;
        for (p_1138->g_4 = (-18); (p_1138->g_4 <= 28); ++p_1138->g_4)
        { /* block id: 88 */
            union U0 l_262 = {0};
            int32_t l_268[1];
            int i;
            for (i = 0; i < 1; i++)
                l_268[i] = 0x71EF5FA5L;
            for (p_1138->g_107 = 9; (p_1138->g_107 < 26); p_1138->g_107++)
            { /* block id: 91 */
                int32_t l_269 = 0x0E4076FAL;
                for (l_242 = 0; (l_242 == (-5)); --l_242)
                { /* block id: 94 */
                    uint64_t l_253[9][5][5] = {{{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L}},{{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L}},{{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L}},{{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L}},{{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L}},{{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L}},{{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L}},{{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L}},{{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L},{0UL,0x07E235D7C6081798L,0x3238A84264799884L,0x56F310229F8BE133L,0xEE8A6A471C4FF715L}}};
                    int i, j, k;
                    for (p_1138->g_197 = 0; (p_1138->g_197 != (-5)); p_1138->g_197 = safe_sub_func_uint64_t_u_u(p_1138->g_197, 7))
                    { /* block id: 97 */
                        uint32_t l_267 = 0x113E480CL;
                        int32_t *l_270 = &l_268[0];
                        if (l_253[5][4][1])
                            break;
                        (*l_270) = ((((l_242 != 0x1602L) | ((*p_1138->g_132) = (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((((9UL | ((void*)0 != &p_1138->g_120[1])) ^ (((((safe_sub_func_uint32_t_u_u((l_262 , (safe_div_func_uint32_t_u_u((l_228[3][2] & l_265), (l_266 , l_242)))), l_265)) != l_267) ^ 4UL) | l_268[0]) ^ l_268[0])) || 0x57L), l_268[0])), l_269)), 0UL)))) | 0x649BL) == l_269);
                    }
                }
            }
        }
    }
    else
    { /* block id: 251 */
        uint32_t l_599[1][2][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_599[i][j][k] = 0x06E14AEBL;
            }
        }
        for (p_1138->g_415 = 29; (p_1138->g_415 < 33); ++p_1138->g_415)
        { /* block id: 254 */
            int16_t *l_598 = &p_1138->g_361;
            int32_t l_604 = 0x74023D23L;
            int64_t *l_615 = (void*)0;
            int8_t l_616 = 0x61L;
            int16_t *l_617 = &p_1138->g_380;
            int32_t *l_618 = &p_1138->g_197;
            l_618 = func_47((*p_1138->g_494), (*l_471), (p_1138->g_68[7][3] >= ((((*l_617) |= ((+(((safe_sub_func_uint16_t_u_u((((*l_598) = (0x5DAA9E71L & 0L)) | l_599[0][1][0]), (safe_add_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u(((((p_1138->g_80--) < (safe_add_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u((l_611 , p_1138->g_378[5][3]), (safe_unary_minus_func_int8_t_s(((*p_40) = ((p_1138->g_120[1] = (safe_mod_func_uint64_t_u_u(l_599[0][1][0], l_604))) == p_1138->g_415)))))) , 0x0F35A1BD177F2807L) != p_1138->g_434), 0UL))) < l_599[0][1][0]) & l_604), l_616)) , &p_1138->g_197) == &p_1138->g_4), l_599[0][1][0])))) != 0x62ADL) , l_599[0][1][0])) && 65535UL)) & l_599[0][1][0]) , l_599[0][1][0])), (*l_471), p_1138);
            if ((*l_471))
                continue;
            (*l_471) &= (*p_1138->g_198);
        }
        for (p_1138->g_434 = (-29); (p_1138->g_434 >= 46); p_1138->g_434 = safe_add_func_int16_t_s_s(p_1138->g_434, 6))
        { /* block id: 266 */
            (*p_1138->g_132) = (*l_471);
            return (*l_471);
        }
    }
    if ((safe_sub_func_uint8_t_u_u((*l_471), ((*p_40) = (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s((*l_471), (l_629 , (0xC08AB45DL > ((3UL < (*l_471)) || (!((*p_1138->g_198) || (*l_471)))))))) , (safe_rshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(3UL, 3L)), (*p_1138->g_328))) == (*l_471)) , (*l_471)), (*l_471)))), (*l_471))), (*l_471)))))))
    { /* block id: 272 */
        uint32_t l_638 = 0x4CC6F82DL;
        int64_t **l_645[7];
        int32_t l_670 = 0L;
        int32_t l_672 = 0x3654F640L;
        int32_t l_673 = 0x44F0A220L;
        int32_t l_674 = 8L;
        int32_t l_675 = 0x3A8009EEL;
        int32_t l_677 = (-9L);
        int8_t ***l_704[1][7][5] = {{{(void*)0,&l_588,&l_588,(void*)0,(void*)0},{(void*)0,&l_588,&l_588,(void*)0,(void*)0},{(void*)0,&l_588,&l_588,(void*)0,(void*)0},{(void*)0,&l_588,&l_588,(void*)0,(void*)0},{(void*)0,&l_588,&l_588,(void*)0,(void*)0},{(void*)0,&l_588,&l_588,(void*)0,(void*)0},{(void*)0,&l_588,&l_588,(void*)0,(void*)0}}};
        uint32_t l_705 = 0xE4F98132L;
        uint8_t l_718[5][9] = {{8UL,255UL,8UL,8UL,255UL,8UL,8UL,255UL,8UL},{8UL,255UL,8UL,8UL,255UL,8UL,8UL,255UL,8UL},{8UL,255UL,8UL,8UL,255UL,8UL,8UL,255UL,8UL},{8UL,255UL,8UL,8UL,255UL,8UL,8UL,255UL,8UL},{8UL,255UL,8UL,8UL,255UL,8UL,8UL,255UL,8UL}};
        int64_t l_719 = 0x261EE1112F7F00D6L;
        uint16_t l_724 = 1UL;
        union U0 ***l_755 = (void*)0;
        uint8_t l_766[2][4] = {{0xDEL,0xDEL,0xDEL,0xDEL},{0xDEL,0xDEL,0xDEL,0xDEL}};
        int16_t *l_776 = &p_1138->g_361;
        int32_t l_784 = 0x63925D12L;
        int32_t l_795[10] = {0x063B56E8L,0x07C1BCF9L,0x42C531D7L,0x07C1BCF9L,0x063B56E8L,0x063B56E8L,0x07C1BCF9L,0x42C531D7L,0x07C1BCF9L,0x063B56E8L};
        int8_t l_801 = 0x14L;
        uint8_t l_807 = 0x37L;
        int32_t *l_817 = &l_795[6];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_645[i] = (void*)0;
lbl_814:
        if (((safe_mul_func_uint8_t_u_u((*l_471), l_638)) , (l_638 != (safe_add_func_uint64_t_u_u((((((void*)0 != (*p_1138->g_327)) | (((((((safe_mod_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u(0x48L, ((p_1138->g_646 = (l_638 , &p_1138->g_120[1])) != (p_1138->g_647[3][0] = &p_1138->g_120[0])))) || 4294967290UL) || (*l_471)) , (*l_471)), l_638)) ^ 0x03A01203L) ^ 0UL) != l_638) , 4294967295UL) != p_1138->g_120[1]) || l_638)) , l_638) == (*p_40)), (-1L))))))
        { /* block id: 275 */
            int32_t l_671 = 0x57BE4EA2L;
            int32_t l_722 = 0x6B4CCA95L;
            uint64_t **l_734[10][9] = {{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,(void*)0}};
            union U0 ***l_758 = &p_1138->g_272;
            int16_t *l_783 = &p_1138->g_380;
            uint16_t *l_786[1][9] = {{&l_228[3][2],&l_228[3][2],&l_228[3][2],&l_228[3][2],&l_228[3][2],&l_228[3][2],&l_228[3][2],&l_228[3][2],&l_228[3][2]}};
            int i, j;
            for (p_1138->g_415 = (-4); (p_1138->g_415 != 1); ++p_1138->g_415)
            { /* block id: 278 */
                uint64_t l_652 = 0xBB2CAEF4D0EB9A46L;
                (*p_1138->g_132) = (0x4B662E99L || ((*l_241) &= (safe_lshift_func_int8_t_s_u(l_652, (safe_lshift_func_int8_t_s_s((*p_40), 3))))));
            }
            for (l_593 = (-27); (l_593 != (-12)); l_593++)
            { /* block id: 284 */
                int32_t *l_657 = &l_347;
                int32_t *l_658 = &p_1138->g_197;
                int32_t *l_659 = &l_242;
                int32_t *l_660 = &p_1138->g_4;
                int32_t *l_661 = (void*)0;
                int32_t *l_662 = &l_242;
                int32_t *l_663 = &l_348[0][2];
                int32_t *l_664 = &p_1138->g_4;
                int32_t *l_665 = &l_242;
                int32_t *l_666 = &l_242;
                int32_t *l_667 = &l_348[1][0];
                int32_t *l_668 = (void*)0;
                int32_t *l_669[4];
                int32_t l_765 = 0x24F9C840L;
                int i;
                for (i = 0; i < 4; i++)
                    l_669[i] = (void*)0;
                (*l_471) |= (*p_1138->g_198);
                --l_678;
                for (l_673 = 13; (l_673 < (-8)); l_673 = safe_sub_func_uint64_t_u_u(l_673, 6))
                { /* block id: 289 */
                    uint16_t l_687 = 0xD0A3L;
                    int64_t l_694 = 0x71BA77B8D10963B6L;
                    uint8_t l_703[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                    int32_t l_706 = 0L;
                    uint32_t *l_707 = (void*)0;
                    uint32_t *l_708 = &l_550[4][4][0];
                    union U0 ***l_757 = (void*)0;
                    int i;
                    if (((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((((l_687 < ((((*p_1138->g_327) != p_40) , (safe_div_func_uint32_t_u_u((((***p_1138->g_271) = (((*l_708) = ((((*l_471) && (l_706 &= (((*l_241) = l_677) | ((((--(*l_239)) && (l_675 ^= (((((safe_mul_func_uint16_t_u_u(l_694, ((-1L) > (p_1138->g_540 = ((safe_sub_func_uint8_t_u_u(l_671, (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(l_671, l_703[4])), 14)), p_1138->g_107)))) & (*l_471)))))) , &p_1138->g_327) != l_704[0][2][1]) , p_1138->g_120[1]) <= (*p_1138->g_646)))) ^ l_705) , (-1L))))) , (void*)0) == (void*)0)) , (**p_1138->g_272))) , 0x92C3BB01L), l_703[4]))) == 18446744073709551614UL)) > l_671) && p_1138->g_195[0]), 255UL)), 0xA3F98BEBL)) < 6UL))
                    { /* block id: 297 */
                        int32_t l_709 = 0x04B39DE0L;
                        int16_t *l_721 = &p_1138->g_361;
                        int32_t l_723[8] = {(-1L),2L,(-1L),(-1L),2L,(-1L),(-1L),2L};
                        uint16_t *l_731[8] = {(void*)0,&l_687,(void*)0,(void*)0,&l_687,(void*)0,(void*)0,&l_687};
                        int i;
                        (*l_667) = ((3L != ((l_719 = ((p_1138->g_120[0] , (l_672 < 0x28C9997155EF275BL)) <= ((l_709 || (((safe_div_func_int16_t_s_s((l_671 && l_687), p_1138->g_415)) != ((*l_241) = ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((((safe_mod_func_int64_t_s_s((l_706 = (((p_1138->g_3 > p_1138->g_120[1]) > p_1138->g_197) , l_709)), 18446744073709551615UL)) <= p_1138->g_540) , (*l_666)) <= (*p_40)), 5)), (*l_471))) , 0xD1179FC9L))) < l_718[2][3])) != 9UL))) == 0x07L)) | 0x615830BEL);
                        (*l_657) &= (*p_1138->g_198);
                        (**p_1138->g_494) = ((*l_664) = (((safe_unary_minus_func_int64_t_s((l_671 | (((*l_721) &= l_709) && (((--l_724) || 6UL) >= (&p_1138->g_120[1] == &p_1138->g_120[0])))))) > ((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(0x1019L, ((*l_659) = (l_722 = p_1138->g_3)))), 0x04C5C1DAC28AA81AL)) && ((safe_lshift_func_int8_t_s_s(l_723[7], (**p_1138->g_327))) , 0xC9802FC6L))) , (*l_471)));
                    }
                    else
                    { /* block id: 309 */
                        uint64_t ***l_736 = (void*)0;
                        uint64_t **l_738[3];
                        union U0 ****l_756[5] = {&l_755,&l_755,&l_755,&l_755,&l_755};
                        int32_t l_764[5][3][6] = {{{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L}},{{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L}},{{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L}},{{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L}},{{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L},{0L,(-2L),0x0E98887EL,(-2L),0L,0L}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_738[i] = &l_239;
                        if ((*l_471))
                            break;
                        l_738[2] = l_734[8][4];
                        (*l_660) &= (safe_lshift_func_int8_t_s_s((((l_671 | (((safe_mod_func_int8_t_s_s((l_677 ^= (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((l_706 = (safe_div_func_uint64_t_u_u((((((**l_587) = p_40) != (void*)0) > (((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((l_722 ^= (l_674 = ((*p_40) = (((l_757 = l_755) != (l_758 = (void*)0)) || (((safe_add_func_int32_t_s_s(l_694, p_1138->g_107)) | (safe_div_func_uint8_t_u_u((l_718[2][3] > (((((((safe_unary_minus_func_int16_t_s((-1L))) != (*l_657)) && (**p_1138->g_494)) , 0x5AB3L) >= p_1138->g_378[0][1]) , l_764[4][0][3]) <= p_1138->g_120[1])), l_765))) <= l_703[4]))))), l_766[0][2])), l_703[0])) , (*l_666)) != l_705)) , (*l_471)), l_705))) < 0x6AL) | p_1138->g_415), l_767[0])) == l_703[0]), l_675))), (*l_662))) > 2UL) == (*p_1138->g_646))) , (*l_471)) <= 0UL), 4));
                    }
                    (*l_663) |= (*p_1138->g_132);
                }
                if (p_1138->g_434)
                    goto lbl_768;
            }
            (*l_471) = (((+(safe_lshift_func_uint16_t_u_u(((*l_324) != (void*)0), (l_677 = ((safe_div_func_uint8_t_u_u((l_784 = (safe_mod_func_uint32_t_u_u((p_1138->g_107 = (l_775 || ((((p_1138->g_361 && (l_776 != ((safe_mul_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u((((**p_1138->g_327) & (4294967289UL == (l_766[0][2] && (0x17L ^ 1UL)))) , 0x3D7C0746A9A318E7L), 0UL)) | 4294967295UL) , (*l_471)) , (*l_471)), 0x38L)) & (*l_471)) == l_766[0][2]), p_1138->g_378[1][0])) , l_783))) <= p_1138->g_197) & (*l_471)) < 18446744073709551613UL))), l_674))), l_671)) , l_785))))) , &p_1138->g_374) != &l_638);
        }
        else
        { /* block id: 330 */
            uint32_t l_789 = 0xC239952AL;
            int32_t l_791 = 0x72DF1E83L;
            int32_t l_792 = 0x14B00105L;
            int32_t l_794[4][3] = {{1L,0x5D361B27L,0x7D14947EL},{1L,0x5D361B27L,0x7D14947EL},{1L,0x5D361B27L,0x7D14947EL},{1L,0x5D361B27L,0x7D14947EL}};
            int i, j;
            for (p_1138->g_8 = 1; (p_1138->g_8 <= 6); p_1138->g_8 += 1)
            { /* block id: 333 */
                int32_t *l_790[5];
                int8_t l_796 = 0x7AL;
                uint16_t l_811 = 65533UL;
                int i;
                for (i = 0; i < 5; i++)
                    l_790[i] = (void*)0;
                l_792 = (l_791 = (safe_lshift_func_int16_t_s_u(l_789, 12)));
                for (l_677 = 0; (l_677 <= 4); l_677 += 1)
                { /* block id: 338 */
                    int32_t l_793 = 0x4BC85B8EL;
                    int32_t l_797 = 4L;
                    int32_t l_802 = 0x1982F1F7L;
                    int32_t l_803 = 0x35BF7D85L;
                    int32_t l_804 = 0L;
                    int32_t l_805 = 0x4C84E359L;
                    int32_t l_806[5] = {4L,4L,4L,4L,4L};
                    int i;
                    for (p_1138->g_80 = 0; (p_1138->g_80 <= 0); p_1138->g_80 += 1)
                    { /* block id: 341 */
                        uint16_t l_798 = 1UL;
                        --l_798;
                    }
                    if (l_449[l_677])
                        continue;
                    --l_807;
                    for (l_678 = 0; (l_678 <= 0); l_678 += 1)
                    { /* block id: 348 */
                        int32_t l_810 = 0L;
                        l_811--;
                    }
                }
            }
        }
        for (l_347 = 0; (l_347 <= 1); l_347 += 1)
        { /* block id: 356 */
            int32_t **l_815 = (void*)0;
            int32_t **l_816[9][9] = {{&l_471,&p_1138->g_132,&p_1138->g_132,&l_471,&l_471,&l_471,&p_1138->g_132,&p_1138->g_132,&l_471},{&l_471,&p_1138->g_132,&p_1138->g_132,&l_471,&l_471,&l_471,&p_1138->g_132,&p_1138->g_132,&l_471},{&l_471,&p_1138->g_132,&p_1138->g_132,&l_471,&l_471,&l_471,&p_1138->g_132,&p_1138->g_132,&l_471},{&l_471,&p_1138->g_132,&p_1138->g_132,&l_471,&l_471,&l_471,&p_1138->g_132,&p_1138->g_132,&l_471},{&l_471,&p_1138->g_132,&p_1138->g_132,&l_471,&l_471,&l_471,&p_1138->g_132,&p_1138->g_132,&l_471},{&l_471,&p_1138->g_132,&p_1138->g_132,&l_471,&l_471,&l_471,&p_1138->g_132,&p_1138->g_132,&l_471},{&l_471,&p_1138->g_132,&p_1138->g_132,&l_471,&l_471,&l_471,&p_1138->g_132,&p_1138->g_132,&l_471},{&l_471,&p_1138->g_132,&p_1138->g_132,&l_471,&l_471,&l_471,&p_1138->g_132,&p_1138->g_132,&l_471},{&l_471,&p_1138->g_132,&p_1138->g_132,&l_471,&l_471,&l_471,&p_1138->g_132,&p_1138->g_132,&l_471}};
            int i, j;
            if (p_1138->g_197)
                goto lbl_814;
            l_817 = &l_348[2][7];
            for (l_785 = 0; (l_785 <= 1); l_785 += 1)
            { /* block id: 361 */
                uint32_t l_818 = 0x6238F820L;
                uint64_t l_828 = 3UL;
                l_818--;
                if (p_1138->g_107)
                    goto lbl_768;
                (*l_817) = (safe_mul_func_uint8_t_u_u(l_818, ((l_818 || ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(l_818, ((safe_unary_minus_func_int16_t_s((*l_817))) | l_828))) , l_818), p_1138->g_378[0][2])) == (safe_rshift_func_uint16_t_u_u(p_1138->g_240, (((safe_mul_func_uint8_t_u_u((l_828 || 0xDDBBD296L), 1UL)) == 0x6BCB3D93L) , 0x628DL))))) && 1L)));
            }
        }
    }
    else
    { /* block id: 367 */
        union U0 **l_835 = &p_1138->g_273;
        int32_t l_838 = 0x324CFCF0L;
        int32_t **l_839[4];
        int i;
        for (i = 0; i < 4; i++)
            l_839[i] = &p_1138->g_132;
        (*p_1138->g_132) = (*l_471);
        l_471 = func_47(((safe_add_func_uint16_t_u_u(((*l_471) , (l_835 != (void*)0)), (safe_lshift_func_int8_t_s_s(4L, (l_838 < ((p_40 != ((**p_1138->g_569) = func_41(&l_838, (**l_835), ((!((&p_1138->g_328 == (void*)0) , 1UL)) >= (*l_471)), &l_838, (**l_835), p_1138))) , (*l_471))))))) , &l_348[1][3]), (*l_471), p_1138->g_381, l_838, p_1138);
    }
    return (*l_471);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_41(int32_t * p_42, union U0  p_43, int16_t  p_44, int32_t * p_45, union U0  p_46, struct S1 * p_1138)
{ /* block id: 77 */
    int32_t *l_208 = &p_1138->g_197;
    int32_t *l_209 = &p_1138->g_4;
    int32_t *l_210 = &p_1138->g_4;
    int32_t *l_211 = &p_1138->g_197;
    int32_t *l_212 = (void*)0;
    int32_t *l_213 = &p_1138->g_8;
    int32_t *l_214 = &p_1138->g_4;
    int32_t *l_215 = &p_1138->g_4;
    int32_t *l_216[2][2][10] = {{{&p_1138->g_8,&p_1138->g_8,&p_1138->g_197,&p_1138->g_8,&p_1138->g_8,&p_1138->g_8,&p_1138->g_8,&p_1138->g_197,&p_1138->g_8,&p_1138->g_8},{&p_1138->g_8,&p_1138->g_8,&p_1138->g_197,&p_1138->g_8,&p_1138->g_8,&p_1138->g_8,&p_1138->g_8,&p_1138->g_197,&p_1138->g_8,&p_1138->g_8}},{{&p_1138->g_8,&p_1138->g_8,&p_1138->g_197,&p_1138->g_8,&p_1138->g_8,&p_1138->g_8,&p_1138->g_8,&p_1138->g_197,&p_1138->g_8,&p_1138->g_8},{&p_1138->g_8,&p_1138->g_8,&p_1138->g_197,&p_1138->g_8,&p_1138->g_8,&p_1138->g_8,&p_1138->g_8,&p_1138->g_197,&p_1138->g_8,&p_1138->g_8}}};
    uint16_t l_217 = 0x6CE5L;
    uint64_t l_220[8];
    int8_t *l_223 = &p_1138->g_101[5];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_220[i] = 0x0AF0AE876B6C0DD6L;
    l_217--;
    --l_220[1];
    return l_223;
}


/* ------------------------------------------ */
/* 
 * reads : p_1138->g_68 p_1138->g_2 p_1138->g_4 p_1138->g_3 p_1138->g_8 p_1138->g_101 p_1138->g_80
 * writes: p_1138->g_68 p_1138->g_8 p_1138->g_80 p_1138->g_4 p_1138->g_101 p_1138->g_107
 */
int32_t * func_47(int32_t * p_48, uint8_t  p_49, uint64_t  p_50, int64_t  p_51, struct S1 * p_1138)
{ /* block id: 15 */
    uint8_t *l_64 = (void*)0;
    int32_t l_65 = 1L;
    int32_t l_66 = 0x36C1418EL;
    uint8_t *l_67[6][4][2] = {{{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]}},{{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]}},{{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]}},{{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]}},{{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]}},{{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]},{(void*)0,&p_1138->g_68[7][3]}}};
    uint16_t *l_79 = &p_1138->g_80;
    uint16_t l_83 = 65533UL;
    int16_t l_84[5][3] = {{0x7D11L,0x7D11L,0x7D11L},{0x7D11L,0x7D11L,0x7D11L},{0x7D11L,0x7D11L,0x7D11L},{0x7D11L,0x7D11L,0x7D11L},{0x7D11L,0x7D11L,0x7D11L}};
    int32_t l_205 = 0L;
    int32_t *l_206 = &l_66;
    int i, j, k;
    l_205 |= (func_54(func_59(p_49, (p_1138->g_68[0][0]--), l_67[1][2][1], (((((safe_div_func_int32_t_s_s((-1L), (safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((((*p_48) = (p_1138->g_2 < 0x66E8L)) , &p_49) == (((((safe_rshift_func_uint16_t_u_u((l_66 >= ((*l_79) = 8UL)), (safe_mod_func_uint64_t_u_u((((6L != 0UL) | 0x00EDED62L) >= l_65), l_65)))) , p_50) == (-1L)) && 0x30L) , l_67[1][2][1])) < p_1138->g_4), p_49)), 13)))) != l_83) | 250UL) || l_84[2][1]) , p_1138->g_3), p_1138), p_50, l_64, l_84[2][1], p_1138) < 6L);
    p_48 = l_206;
    return &p_1138->g_8;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_54(int8_t * p_55, int32_t  p_56, int8_t * p_57, int64_t  p_58, struct S1 * p_1138)
{ /* block id: 71 */
    int32_t l_200 = 0L;
    int32_t *l_201[4];
    uint64_t l_202[6] = {0x89764C4040728480L,0x04A3EDBD5586F38EL,0x89764C4040728480L,0x89764C4040728480L,0x04A3EDBD5586F38EL,0x89764C4040728480L};
    int i;
    for (i = 0; i < 4; i++)
        l_201[i] = &p_1138->g_8;
    --l_202[3];
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_1138->g_4 p_1138->g_68 p_1138->g_2 p_1138->g_8 p_1138->g_101 p_1138->g_80
 * writes: p_1138->g_4 p_1138->g_8 p_1138->g_68 p_1138->g_101 p_1138->g_107 p_1138->g_80
 */
int8_t * func_59(int32_t  p_60, uint8_t  p_61, int8_t * p_62, uint8_t  p_63, struct S1 * p_1138)
{ /* block id: 19 */
    int16_t l_102 = 0x03D4L;
    int32_t *l_131 = &p_1138->g_4;
    int32_t l_168 = 0L;
    int32_t l_171 = 0x0C0CC138L;
    int32_t l_174 = 0x1C9D4F09L;
    int32_t l_175 = 7L;
    int32_t l_178 = 0x3222122AL;
    int32_t l_179 = 0x797FD67AL;
    int32_t l_180 = 0x265171BFL;
    int32_t l_181 = 8L;
    int32_t l_182 = 0x5B0E5196L;
    int32_t l_183 = 0x04F3E036L;
    int8_t *l_199 = &p_1138->g_101[6];
    for (p_61 = 8; (p_61 > 30); p_61 = safe_add_func_int32_t_s_s(p_61, 7))
    { /* block id: 22 */
        uint32_t l_91 = 4294967287UL;
        union U0 l_97 = {0};
        int32_t *l_108 = &p_1138->g_4;
        uint16_t l_113 = 0xFF68L;
        int32_t l_146 = 0x3EC3B116L;
        int32_t l_164 = 0L;
        int32_t l_173 = (-1L);
        int32_t l_176[10] = {1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L,1L};
        uint32_t l_190 = 0UL;
        int i;
        for (p_63 = 0; (p_63 <= 3); p_63++)
        { /* block id: 25 */
            uint16_t *l_94 = &p_1138->g_80;
            uint16_t l_103 = 7UL;
            union U0 **l_117 = (void*)0;
            int32_t l_139 = 0L;
            int32_t l_156 = 0x0D3AC3EAL;
            int32_t l_161 = 0x5B3A4ADEL;
            int32_t l_167 = (-1L);
            int32_t l_169 = 0x7B3AEF0CL;
            int32_t l_170 = 0L;
            int32_t l_172[6] = {0x0AE68E36L,(-9L),0x0AE68E36L,0x0AE68E36L,(-9L),0x0AE68E36L};
            uint16_t l_185 = 9UL;
            int i;
            for (p_1138->g_4 = (-13); (p_1138->g_4 == (-14)); p_1138->g_4--)
            { /* block id: 28 */
                union U0 l_95[2][8][1] = {{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}}};
                int32_t l_163[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_163[i] = (-1L);
                for (p_1138->g_8 = 0; p_1138->g_8 < 10; p_1138->g_8 += 1)
                {
                    for (p_60 = 0; p_60 < 5; p_60 += 1)
                    {
                        p_1138->g_68[p_1138->g_8][p_60] = 0x3CL;
                    }
                }
                if (l_91)
                    break;
                for (p_60 = (-14); (p_60 >= 22); p_60 = safe_add_func_uint16_t_u_u(p_60, 5))
                { /* block id: 33 */
                    union U0 *l_96[5];
                    int8_t *l_100 = &p_1138->g_101[6];
                    int16_t *l_104 = &l_102;
                    uint32_t *l_105 = (void*)0;
                    uint32_t *l_106 = &p_1138->g_107;
                    int32_t l_114 = 0x37B1C4CFL;
                    int64_t *l_119 = &p_1138->g_120[1];
                    int32_t l_165 = (-5L);
                    int32_t l_166 = 0L;
                    int32_t l_177[10][1] = {{0x47242945L},{0x47242945L},{0x47242945L},{0x47242945L},{0x47242945L},{0x47242945L},{0x47242945L},{0x47242945L},{0x47242945L},{0x47242945L}};
                    int32_t l_184 = (-1L);
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_96[i] = &l_95[1][6][0];
                    if (((((*l_106) = (l_94 == ((0xB915L == ((*l_104) = (p_1138->g_68[8][4] ^ (((p_63 && ((l_97 = l_95[1][6][0]) , (p_1138->g_2 , ((*l_100) |= (65531UL & (safe_lshift_func_int16_t_s_s(p_63, (((0x8C86L != p_1138->g_8) >= 0x1F87L) || p_60)))))))) != l_102) & l_103)))) , (void*)0))) <= p_1138->g_68[7][3]) ^ 1UL))
                    { /* block id: 38 */
                        int32_t **l_109 = &l_108;
                        (*l_109) = l_108;
                    }
                    else
                    { /* block id: 40 */
                        int32_t *l_110 = &p_1138->g_8;
                        union U0 ***l_118 = &l_117;
                        (*l_110) = 0x0ACF152CL;
                        (*l_110) = p_61;
                        (*l_110) = (safe_mod_func_uint16_t_u_u((l_113 || (((*l_100) = 0x69L) ^ (0x5DL ^ ((((p_1138->g_68[7][4] & (18446744073709551613UL & (l_114 > (((((p_61 && ((*l_94) &= (safe_rshift_func_uint16_t_u_u((p_1138->g_68[3][3] != (p_61 >= 18446744073709551615UL)), p_1138->g_68[7][3])))) != p_1138->g_8) == 0x1BL) & l_103) , p_1138->g_68[7][3])))) & 2L) && (*l_110)) , 0xE8L)))), (-1L)));
                        (*l_118) = l_117;
                    }
                }
                if ((*l_108))
                    break;
            }
        }
        if (p_61)
            continue;
    }
    return l_199;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1139;
    struct S1* p_1138 = &c_1139;
    struct S1 c_1140 = {
        0x2061F665L, // p_1138->g_2
        6L, // p_1138->g_3
        0x58BAC04EL, // p_1138->g_4
        3L, // p_1138->g_8
        {{0x7EL,255UL,0x7EL,0x7EL,255UL},{0x7EL,255UL,0x7EL,0x7EL,255UL},{0x7EL,255UL,0x7EL,0x7EL,255UL},{0x7EL,255UL,0x7EL,0x7EL,255UL},{0x7EL,255UL,0x7EL,0x7EL,255UL},{0x7EL,255UL,0x7EL,0x7EL,255UL},{0x7EL,255UL,0x7EL,0x7EL,255UL},{0x7EL,255UL,0x7EL,0x7EL,255UL},{0x7EL,255UL,0x7EL,0x7EL,255UL},{0x7EL,255UL,0x7EL,0x7EL,255UL}}, // p_1138->g_68
        0x9AB1L, // p_1138->g_80
        {0x38L,0L,0x38L,0x38L,0L,0x38L,0x38L}, // p_1138->g_101
        4294967295UL, // p_1138->g_107
        {1L,1L}, // p_1138->g_120
        &p_1138->g_8, // p_1138->g_132
        {0x0438D7A1L,0x0438D7A1L,0x0438D7A1L}, // p_1138->g_162
        {1UL,1UL,1UL,1UL}, // p_1138->g_195
        0x3FB6E778L, // p_1138->g_197
        {&p_1138->g_197,&p_1138->g_197,&p_1138->g_197}, // p_1138->g_196
        &p_1138->g_197, // p_1138->g_198
        {{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}}, // p_1138->g_207
        0xB602AEEA7E6215E6L, // p_1138->g_240
        &p_1138->g_207[1][0], // p_1138->g_273
        &p_1138->g_273, // p_1138->g_272
        &p_1138->g_272, // p_1138->g_271
        (-6L), // p_1138->g_329
        &p_1138->g_329, // p_1138->g_328
        &p_1138->g_328, // p_1138->g_327
        (-4L), // p_1138->g_361
        6UL, // p_1138->g_374
        {{9UL,4294967294UL,9UL,9UL,4294967294UL},{9UL,4294967294UL,9UL,9UL,4294967294UL},{9UL,4294967294UL,9UL,9UL,4294967294UL},{9UL,4294967294UL,9UL,9UL,4294967294UL},{9UL,4294967294UL,9UL,9UL,4294967294UL},{9UL,4294967294UL,9UL,9UL,4294967294UL}}, // p_1138->g_378
        0x242AL, // p_1138->g_380
        0x61C72FABL, // p_1138->g_381
        0xC9L, // p_1138->g_415
        (void*)0, // p_1138->g_417
        0xD49FD10CL, // p_1138->g_434
        &p_1138->g_132, // p_1138->g_494
        0x2B69L, // p_1138->g_540
        {&p_1138->g_68[7][3],(void*)0,&p_1138->g_68[7][3],&p_1138->g_68[7][3],(void*)0,&p_1138->g_68[7][3]}, // p_1138->g_571
        &p_1138->g_571[3], // p_1138->g_570
        &p_1138->g_570, // p_1138->g_569
        &p_1138->g_120[1], // p_1138->g_646
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_1138->g_647
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1138->g_735
        (void*)0, // p_1138->g_737
        {&p_1138->g_132}, // p_1138->g_876
        0x75L, // p_1138->g_879
        {&p_1138->g_879,&p_1138->g_879,&p_1138->g_879,&p_1138->g_879,&p_1138->g_879,&p_1138->g_879}, // p_1138->g_878
        {{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}}, // p_1138->g_880
        0L, // p_1138->g_887
        (-6L), // p_1138->g_903
        0x9B98873BL, // p_1138->g_913
        (void*)0, // p_1138->g_915
        &p_1138->g_132, // p_1138->g_928
        0x66FEL, // p_1138->g_977
        0x92A86B96L, // p_1138->g_1019
        0xF7L, // p_1138->g_1044
        {{{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0}},{{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0}},{{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0},{&p_1138->g_132,(void*)0}}}, // p_1138->g_1087
        (void*)0, // p_1138->g_1116
        {{&p_1138->g_1116,&p_1138->g_1116,&p_1138->g_1116,(void*)0,&p_1138->g_1116,(void*)0,&p_1138->g_1116,&p_1138->g_1116},{&p_1138->g_1116,&p_1138->g_1116,&p_1138->g_1116,(void*)0,&p_1138->g_1116,(void*)0,&p_1138->g_1116,&p_1138->g_1116},{&p_1138->g_1116,&p_1138->g_1116,&p_1138->g_1116,(void*)0,&p_1138->g_1116,(void*)0,&p_1138->g_1116,&p_1138->g_1116},{&p_1138->g_1116,&p_1138->g_1116,&p_1138->g_1116,(void*)0,&p_1138->g_1116,(void*)0,&p_1138->g_1116,&p_1138->g_1116},{&p_1138->g_1116,&p_1138->g_1116,&p_1138->g_1116,(void*)0,&p_1138->g_1116,(void*)0,&p_1138->g_1116,&p_1138->g_1116},{&p_1138->g_1116,&p_1138->g_1116,&p_1138->g_1116,(void*)0,&p_1138->g_1116,(void*)0,&p_1138->g_1116,&p_1138->g_1116},{&p_1138->g_1116,&p_1138->g_1116,&p_1138->g_1116,(void*)0,&p_1138->g_1116,(void*)0,&p_1138->g_1116,&p_1138->g_1116}}, // p_1138->g_1115
        &p_1138->g_1115[3][2], // p_1138->g_1114
        7L, // p_1138->g_1120
        {7L,7L,7L,7L,7L,7L,7L,7L,7L}, // p_1138->g_1137
    };
    c_1139 = c_1140;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1138);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1138->g_2, "p_1138->g_2", print_hash_value);
    transparent_crc(p_1138->g_3, "p_1138->g_3", print_hash_value);
    transparent_crc(p_1138->g_4, "p_1138->g_4", print_hash_value);
    transparent_crc(p_1138->g_8, "p_1138->g_8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1138->g_68[i][j], "p_1138->g_68[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1138->g_80, "p_1138->g_80", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1138->g_101[i], "p_1138->g_101[i]", print_hash_value);

    }
    transparent_crc(p_1138->g_107, "p_1138->g_107", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1138->g_120[i], "p_1138->g_120[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1138->g_162[i], "p_1138->g_162[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1138->g_195[i], "p_1138->g_195[i]", print_hash_value);

    }
    transparent_crc(p_1138->g_197, "p_1138->g_197", print_hash_value);
    transparent_crc(p_1138->g_240, "p_1138->g_240", print_hash_value);
    transparent_crc(p_1138->g_329, "p_1138->g_329", print_hash_value);
    transparent_crc(p_1138->g_361, "p_1138->g_361", print_hash_value);
    transparent_crc(p_1138->g_374, "p_1138->g_374", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1138->g_378[i][j], "p_1138->g_378[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1138->g_380, "p_1138->g_380", print_hash_value);
    transparent_crc(p_1138->g_381, "p_1138->g_381", print_hash_value);
    transparent_crc(p_1138->g_415, "p_1138->g_415", print_hash_value);
    transparent_crc(p_1138->g_434, "p_1138->g_434", print_hash_value);
    transparent_crc(p_1138->g_540, "p_1138->g_540", print_hash_value);
    transparent_crc(p_1138->g_879, "p_1138->g_879", print_hash_value);
    transparent_crc(p_1138->g_887, "p_1138->g_887", print_hash_value);
    transparent_crc(p_1138->g_903, "p_1138->g_903", print_hash_value);
    transparent_crc(p_1138->g_913, "p_1138->g_913", print_hash_value);
    transparent_crc(p_1138->g_977, "p_1138->g_977", print_hash_value);
    transparent_crc(p_1138->g_1019, "p_1138->g_1019", print_hash_value);
    transparent_crc(p_1138->g_1044, "p_1138->g_1044", print_hash_value);
    transparent_crc(p_1138->g_1120, "p_1138->g_1120", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1138->g_1137[i], "p_1138->g_1137[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
