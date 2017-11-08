// -g 95,56,1 -l 5,14,1
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


// Seed: 1237235837

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_4;
    int32_t g_11;
    int32_t g_18;
    volatile uint16_t g_25;
    int32_t * volatile g_26[1][3];
    int32_t g_61;
    uint64_t g_112;
    uint64_t *g_111[6];
    uint16_t g_115;
    uint32_t g_133[6];
    uint32_t g_135;
    uint32_t *g_139;
    uint32_t ** volatile g_138;
    uint32_t ** volatile * volatile g_140;
    int32_t g_142[3];
    int64_t g_152;
    int16_t g_158[5];
    uint8_t g_176;
    int32_t *g_181;
    int32_t ** volatile g_180;
    uint16_t g_201;
    int8_t g_219[7];
    int32_t g_221;
    int32_t ** volatile g_224[3][10][7];
    int32_t *g_274;
    int32_t ** volatile g_273;
    int32_t ** volatile g_292;
    uint32_t **g_300;
    uint32_t ***g_299;
    uint64_t g_328;
    int16_t g_329[8][6][5];
    int32_t ** volatile g_349;
    int64_t g_419;
    uint16_t *** volatile g_452;
    volatile int64_t g_501;
    volatile int64_t *g_500;
    uint32_t g_546[9][7][2];
    uint16_t *g_618;
    uint16_t **g_617;
    int32_t ** volatile g_622[4][5];
    int32_t ** volatile g_623[2];
    int8_t g_690[7][5];
    volatile uint8_t * volatile * volatile g_694[2];
    int32_t g_782[8][9];
    int32_t * volatile g_850;
    int8_t *** volatile g_881;
    int32_t ** volatile g_917;
    uint64_t **g_935[10];
    uint64_t **g_936[6][5][8];
    int32_t g_943;
    volatile uint32_t g_956;
    volatile uint32_t *g_955;
    uint16_t g_1005;
    int32_t g_1039[4][1][2];
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S0 * p_1059);
int16_t  func_34(int32_t * p_35, uint8_t  p_36, uint8_t  p_37, int32_t * p_38, int32_t * p_39, struct S0 * p_1059);
uint16_t  func_44(int32_t  p_45, uint32_t  p_46, uint64_t * p_47, int32_t * p_48, int32_t * p_49, struct S0 * p_1059);
uint64_t  func_52(uint64_t * p_53, int32_t * p_54, int32_t  p_55, struct S0 * p_1059);
uint64_t * func_56(int64_t  p_57, int64_t  p_58, int32_t * p_59, struct S0 * p_1059);
int8_t  func_80(int32_t * p_81, uint32_t  p_82, int32_t * p_83, int16_t  p_84, uint8_t  p_85, struct S0 * p_1059);
int32_t * func_86(int32_t * p_87, int16_t  p_88, int32_t * p_89, uint16_t  p_90, struct S0 * p_1059);
int32_t * func_91(int64_t  p_92, int8_t  p_93, int32_t * p_94, int8_t  p_95, int32_t  p_96, struct S0 * p_1059);
uint64_t  func_106(uint64_t * p_107, uint8_t  p_108, int32_t * p_109, uint64_t * p_110, struct S0 * p_1059);
uint16_t  func_122(int64_t  p_123, int32_t * p_124, int32_t * p_125, uint64_t * p_126, int32_t * p_127, struct S0 * p_1059);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1059->g_4 p_1059->g_18 p_1059->g_25
 * writes: p_1059->g_11 p_1059->g_18 p_1059->g_181
 */
uint16_t  func_1(struct S0 * p_1059)
{ /* block id: 4 */
    uint32_t l_14 = 4294967291UL;
    uint64_t *l_17 = (void*)0;
    int32_t l_27 = 0x0A644184L;
    uint32_t l_50 = 1UL;
    uint64_t *l_843[4] = {&p_1059->g_328,&p_1059->g_328,&p_1059->g_328,&p_1059->g_328};
    uint64_t l_1040[2][6][7] = {{{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL}},{{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL},{0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL,0x06EC3B699F90B722L,0xD55C7CAF39FF413DL,0xD55C7CAF39FF413DL}}};
    uint16_t *l_1041 = &p_1059->g_201;
    int32_t **l_1056 = (void*)0;
    int32_t **l_1057 = &p_1059->g_181;
    int64_t l_1058 = 0x6DF7187EFC51A0B6L;
    int i, j, k;
lbl_1055:
    l_27 = ((safe_rshift_func_int16_t_s_u(9L, (p_1059->g_4 , (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((((safe_div_func_uint16_t_u_u((p_1059->g_11 = p_1059->g_4), (safe_add_func_uint32_t_u_u((p_1059->g_4 < l_14), (safe_sub_func_uint64_t_u_u(l_14, (p_1059->g_18 = p_1059->g_4))))))) && ((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((((void*)0 != l_17) < p_1059->g_18) , p_1059->g_25), p_1059->g_4)), l_14)), l_14)) , p_1059->g_25)) | 0x005D9C72L), 1)), 0UL))))) == 246UL);
    for (p_1059->g_18 = 0; (p_1059->g_18 > 19); p_1059->g_18++)
    { /* block id: 10 */
        uint8_t l_51 = 0UL;
        int32_t *l_844 = &p_1059->g_11;
        uint16_t l_939 = 7UL;
        uint32_t l_1037 = 1UL;
        int32_t *l_1038[3];
        int16_t l_1050 = 0L;
        int8_t *l_1053 = &p_1059->g_690[1][2];
        int8_t *l_1054 = &p_1059->g_4;
        int i;
        for (i = 0; i < 3; i++)
            l_1038[i] = &p_1059->g_1039[2][0][1];
        (1 + 1);
    }
    if (l_14)
        goto lbl_1055;
    (*l_1057) = &l_27;
    return l_1058;
}


/* ------------------------------------------ */
/* 
 * reads : p_1059->g_943 p_1059->g_133 p_1059->g_4 p_1059->g_142 p_1059->g_690 p_1059->g_274 p_1059->g_11 p_1059->g_219 p_1059->g_349 p_1059->g_500 p_1059->g_501 p_1059->g_176 p_1059->g_618 p_1059->g_201
 * writes: p_1059->g_943 p_1059->g_274 p_1059->g_133 p_1059->g_181
 */
int16_t  func_34(int32_t * p_35, uint8_t  p_36, uint8_t  p_37, int32_t * p_38, int32_t * p_39, struct S0 * p_1059)
{ /* block id: 470 */
    int32_t *l_942 = &p_1059->g_943;
    int32_t l_946 = 0x08618F00L;
    uint64_t ***l_952 = (void*)0;
    uint64_t ****l_951 = &l_952;
    uint64_t ***l_953[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint64_t ****l_954 = &l_953[3][1];
    int16_t *l_957[7][1];
    int32_t l_958[4][6][4] = {{{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L}},{{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L}},{{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L}},{{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L},{0x305628D0L,(-9L),0x3A0C53EAL,0x305628D0L}}};
    int32_t *l_959 = &p_1059->g_142[1];
    int32_t **l_960 = &p_1059->g_274;
    uint32_t *l_961 = &p_1059->g_133[5];
    int64_t l_977 = (-1L);
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_957[i][j] = &p_1059->g_158[0];
    }
    (*l_960) = (((*l_942) ^= (safe_lshift_func_uint8_t_u_s(0x7EL, 5))) , &l_958[2][2][3]);
    if ((((((p_37 | (--(*l_961))) && (safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u(p_1059->g_4, 6)) <= p_37) , (safe_mul_func_uint16_t_u_u(p_37, ((*l_959) >= (p_1059->g_690[6][3] | (((**l_960) , (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s((*p_38))) || (safe_div_func_int32_t_s_s(1L, 4294967295UL))), (**l_960)))) != p_1059->g_219[2])))))) , (*l_959)), (*l_959))), l_977))) >= p_37) , (*l_959)) ^ p_37))
    { /* block id: 479 */
        int16_t l_984 = 0x4BF4L;
        int32_t l_1008[6] = {0x2EEFF290L,0x2EEFF290L,0x2EEFF290L,0x2EEFF290L,0x2EEFF290L,0x2EEFF290L};
        int64_t l_1009 = 0x6B2A2448734A6D7CL;
        int i;
        for (p_36 = 0; (p_36 <= 7); p_36 += 1)
        { /* block id: 482 */
            uint8_t l_1004 = 254UL;
            int32_t *l_1010 = (void*)0;
            (1 + 1);
        }
        (*p_1059->g_349) = p_38;
    }
    else
    { /* block id: 517 */
        uint32_t ***l_1034 = &p_1059->g_300;
        (**l_960) &= ((+(safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(1UL, ((safe_unary_minus_func_uint32_t_u((((void*)0 == p_35) ^ ((safe_mul_func_int16_t_s_s((p_37 || (0x0B225BC28A63E951L > (*p_1059->g_500))), (l_1034 != ((safe_mod_func_uint8_t_u_u(p_1059->g_176, 0x71L)) , l_1034)))) <= (-6L))))) , 0x8191L))), 0x17L))) & (*p_1059->g_618));
    }
    (*l_960) = (void*)0;
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1059->g_112 p_1059->g_11 p_1059->g_274 p_1059->g_850 p_1059->g_273 p_1059->g_61 p_1059->g_221 p_1059->g_142 p_1059->g_618 p_1059->g_133 p_1059->g_328
 * writes: p_1059->g_112 p_1059->g_61 p_1059->g_181 p_1059->g_221 p_1059->g_139 p_1059->g_201
 */
uint16_t  func_44(int32_t  p_45, uint32_t  p_46, uint64_t * p_47, int32_t * p_48, int32_t * p_49, struct S0 * p_1059)
{ /* block id: 425 */
    int32_t l_854 = 0x579B88A3L;
    uint32_t **l_859 = &p_1059->g_139;
    int16_t *l_866 = &p_1059->g_158[1];
    int16_t **l_867 = &l_866;
    int64_t l_870 = 0L;
    int16_t *l_871 = (void*)0;
    int32_t *l_872 = (void*)0;
    int32_t *l_873 = &p_1059->g_61;
    uint64_t **l_931 = &p_1059->g_111[4];
    uint8_t *l_932 = &p_1059->g_176;
    for (p_1059->g_112 = 0; (p_1059->g_112 != 43); p_1059->g_112 = safe_add_func_int64_t_s_s(p_1059->g_112, 6))
    { /* block id: 428 */
        int32_t *l_851[4][10] = {{&p_1059->g_142[1],&p_1059->g_142[2],&p_1059->g_61,&p_1059->g_142[2],&p_1059->g_142[1],&p_1059->g_142[1],&p_1059->g_142[2],&p_1059->g_61,&p_1059->g_142[2],&p_1059->g_142[1]},{&p_1059->g_142[1],&p_1059->g_142[2],&p_1059->g_61,&p_1059->g_142[2],&p_1059->g_142[1],&p_1059->g_142[1],&p_1059->g_142[2],&p_1059->g_61,&p_1059->g_142[2],&p_1059->g_142[1]},{&p_1059->g_142[1],&p_1059->g_142[2],&p_1059->g_61,&p_1059->g_142[2],&p_1059->g_142[1],&p_1059->g_142[1],&p_1059->g_142[2],&p_1059->g_61,&p_1059->g_142[2],&p_1059->g_142[1]},{&p_1059->g_142[1],&p_1059->g_142[2],&p_1059->g_61,&p_1059->g_142[2],&p_1059->g_142[1],&p_1059->g_142[1],&p_1059->g_142[2],&p_1059->g_61,&p_1059->g_142[2],&p_1059->g_142[1]}};
        int i, j;
        for (p_1059->g_61 = 6; (p_1059->g_61 != (-27)); p_1059->g_61 = safe_sub_func_int16_t_s_s(p_1059->g_61, 8))
        { /* block id: 431 */
            int32_t **l_849 = &p_1059->g_181;
            (*l_849) = &p_45;
        }
        (*p_1059->g_850) = ((*p_1059->g_274) = (*p_49));
        p_1059->g_61 |= ((**p_1059->g_273) = (*p_49));
        if ((*p_48))
            break;
    }
    (*l_873) |= (((safe_sub_func_uint32_t_u_u(l_854, (*p_49))) | ((((l_854 == (**p_1059->g_273)) < (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((((*l_859) = (void*)0) == &p_46), (((*p_1059->g_618) = (l_854 == ((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((++p_46) || (((*l_867) = l_866) == (((safe_rshift_func_uint8_t_u_s(0x09L, l_870)) , l_870) , l_871))), 0x34L)), 0x13E4L)) != p_1059->g_142[2]))) , p_1059->g_133[0]))), 0UL))) != (*p_47)) , 0x6C2018F419A95F78L)) || 0x4664L);
    for (p_45 = 0; (p_45 >= (-29)); p_45 = safe_sub_func_int16_t_s_s(p_45, 7))
    { /* block id: 447 */
        uint8_t *l_913 = &p_1059->g_176;
        uint8_t **l_912[1][1];
        int32_t l_916 = 0x732C10DDL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_912[i][j] = &l_913;
        }
        (1 + 1);
    }
    return (*l_873);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_52(uint64_t * p_53, int32_t * p_54, int32_t  p_55, struct S0 * p_1059)
{ /* block id: 423 */
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_1059->g_61 p_1059->g_4 p_1059->g_111 p_1059->g_115 p_1059->g_25 p_1059->g_11 p_1059->g_152 p_1059->g_181 p_1059->g_142 p_1059->g_328 p_1059->g_273 p_1059->g_274 p_1059->g_221 p_1059->g_201 p_1059->g_133 p_1059->g_158 p_1059->g_176 p_1059->g_349 p_1059->g_112 p_1059->g_135 p_1059->g_329 p_1059->g_500 p_1059->g_180 p_1059->g_219 p_1059->g_501 p_1059->g_546 p_1059->g_617 p_1059->g_618 p_1059->g_690 p_1059->g_694 p_1059->g_419
 * writes: p_1059->g_61 p_1059->g_152 p_1059->g_142 p_1059->g_328 p_1059->g_221 p_1059->g_201 p_1059->g_176 p_1059->g_329 p_1059->g_112 p_1059->g_135 p_1059->g_115 p_1059->g_419 p_1059->g_219 p_1059->g_546 p_1059->g_690 p_1059->g_158 p_1059->g_111 p_1059->g_181 p_1059->g_4 p_1059->g_617
 */
uint64_t * func_56(int64_t  p_57, int64_t  p_58, int32_t * p_59, struct S0 * p_1059)
{ /* block id: 11 */
    int32_t *l_60 = &p_1059->g_61;
    int32_t *l_62 = &p_1059->g_61;
    int32_t *l_63[8][9][3] = {{{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61}},{{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61}},{{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61}},{{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61}},{{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61}},{{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61}},{{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61}},{{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61},{&p_1059->g_61,&p_1059->g_11,&p_1059->g_61}}};
    uint16_t l_64 = 0xAB5DL;
    uint64_t *l_117[2][10][9] = {{{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112}},{{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112},{(void*)0,&p_1059->g_112,(void*)0,(void*)0,(void*)0,&p_1059->g_112,(void*)0,&p_1059->g_112,&p_1059->g_112}}};
    int32_t l_759[8];
    uint16_t **l_842 = &p_1059->g_618;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_759[i] = (-9L);
    --l_64;
    (*l_62) ^= 0x257EF93BL;
    for (p_58 = 14; (p_58 != (-13)); p_58 = safe_sub_func_int64_t_s_s(p_58, 7))
    { /* block id: 16 */
        uint16_t l_105 = 65532UL;
        int32_t *l_735 = &p_1059->g_221;
        int32_t *l_758 = &p_1059->g_142[2];
        int32_t l_785 = 0L;
        uint64_t *l_791 = &p_1059->g_112;
        int32_t l_792 = 0L;
        int32_t l_794[1][7] = {{0L,0L,0L,0L,0L,0L,0L}};
        uint32_t l_835 = 0x6E781C22L;
        int i, j;
        for (p_1059->g_61 = 26; (p_1059->g_61 > 14); p_1059->g_61--)
        { /* block id: 19 */
            uint8_t l_745 = 0UL;
            int32_t l_784 = 0L;
            int32_t l_787 = (-1L);
            int32_t l_793 = 0L;
            int32_t l_795 = 0x4E41067FL;
            int32_t l_796 = 0x07A1D04CL;
            int32_t l_797[10][1] = {{0x50D6A842L},{0x50D6A842L},{0x50D6A842L},{0x50D6A842L},{0x50D6A842L},{0x50D6A842L},{0x50D6A842L},{0x50D6A842L},{0x50D6A842L},{0x50D6A842L}};
            uint32_t l_798 = 0xDFFEB602L;
            int16_t l_826 = (-1L);
            int32_t *l_827 = &l_785;
            uint8_t *l_834[3][10] = {{&p_1059->g_176,&p_1059->g_176,(void*)0,&p_1059->g_176,(void*)0,&p_1059->g_176,(void*)0,&p_1059->g_176,&p_1059->g_176,(void*)0},{&p_1059->g_176,&p_1059->g_176,(void*)0,&p_1059->g_176,(void*)0,&p_1059->g_176,(void*)0,&p_1059->g_176,&p_1059->g_176,(void*)0},{&p_1059->g_176,&p_1059->g_176,(void*)0,&p_1059->g_176,(void*)0,&p_1059->g_176,(void*)0,&p_1059->g_176,&p_1059->g_176,(void*)0}};
            uint32_t l_836 = 0UL;
            int32_t **l_837 = &p_1059->g_181;
            int i, j;
            for (p_57 = 0; (p_57 != 25); p_57 = safe_add_func_int16_t_s_s(p_57, 1))
            { /* block id: 22 */
                uint64_t l_116 = 0x3F511B60CE2261CAL;
                uint16_t *l_437[9] = {&p_1059->g_201,&p_1059->g_201,&p_1059->g_201,&p_1059->g_201,&p_1059->g_201,&p_1059->g_201,&p_1059->g_201,&p_1059->g_201,&p_1059->g_201};
                int32_t **l_729 = &p_1059->g_181;
                int16_t l_764 = 0L;
                int32_t l_783 = 0x6DF84FB2L;
                int32_t l_786[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_786[i] = 0x58469DC6L;
                if (((p_1059->g_4 <= (safe_add_func_uint16_t_u_u(((*p_1059->g_618) = ((((void*)0 != &p_1059->g_11) , (safe_lshift_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s((p_57 ^ p_1059->g_4), func_80(((*l_729) = func_86(func_91((safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_58, ((p_1059->g_201 |= (safe_add_func_uint64_t_u_u((l_105 , func_106(p_1059->g_111[4], ((safe_mod_func_uint16_t_u_u((p_1059->g_115 || 0xE7310FB7A05A861DL), l_116)) != p_1059->g_25), &p_1059->g_11, l_117[1][3][0], p_1059)), p_57))) < p_1059->g_133[0]))), p_58)) > 0xFE10L), p_1059->g_158[0])), l_116, l_60, p_1059->g_158[3], l_116, p_1059), l_105, &p_1059->g_11, p_57, p_1059)), l_105, p_59, p_1059->g_133[0], p_1059->g_11, p_1059))))) != 0x71C14D77951F8273L) <= p_57), p_57))) == (*l_60))), p_58))) <= p_58))
                { /* block id: 353 */
                    int16_t l_733 = 0x22C9L;
                    int32_t **l_734[9] = {&l_63[5][1][2],&l_63[5][1][2],&l_63[5][1][2],&l_63[5][1][2],&l_63[5][1][2],&l_63[5][1][2],&l_63[5][1][2],&l_63[5][1][2],&l_63[5][1][2]};
                    uint8_t *l_756 = &p_1059->g_176;
                    int8_t *l_757 = &p_1059->g_4;
                    int16_t *l_760[6] = {&p_1059->g_329[6][2][2],&p_1059->g_158[0],&p_1059->g_329[6][2][2],&p_1059->g_329[6][2][2],&p_1059->g_158[0],&p_1059->g_329[6][2][2]};
                    int i;
                    for (l_116 = 0; (l_116 <= 3); l_116 += 1)
                    { /* block id: 356 */
                        int i, j;
                        (*p_59) = (*p_59);
                        if ((*p_59))
                            continue;
                        (*l_729) = (*p_1059->g_180);
                    }
                    (*l_729) = func_91((**l_729), (p_1059->g_690[6][2] |= (l_733 = 0x1EL)), (l_735 = (l_60 = p_59)), l_105, ((safe_rshift_func_uint8_t_u_s(((*l_756) = ((safe_sub_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((safe_unary_minus_func_int16_t_s((p_1059->g_158[2] = ((safe_add_func_uint64_t_u_u(l_745, (l_759[7] = (((*l_757) = (safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((p_59 != (l_63[5][1][2] = func_91(p_57, ((*l_757) |= (safe_rshift_func_uint8_t_u_u(((*l_756) = (((+((*l_62) >= (-1L))) || l_745) , l_105)), 3))), l_758, p_1059->g_546[5][2][0], (*p_59), p_1059))) != 1UL), p_58)), (*l_758))), p_57)) > (**l_729)), p_58))) , (*l_758))))) != 0L)))) && (-4L)), p_58)), (*l_62))) & (*p_1059->g_500))), 6)) == 0xE5066889D30F996FL), p_1059);
                    (*l_729) = p_59;
                }
                else
                { /* block id: 374 */
                    uint32_t l_788 = 1UL;
                    for (p_1059->g_221 = 0; (p_1059->g_221 <= 2); p_1059->g_221 += 1)
                    { /* block id: 377 */
                        int32_t ***l_775 = (void*)0;
                        int32_t ***l_776 = &l_729;
                        int16_t *l_779 = &l_764;
                        int32_t **l_781 = &l_758;
                        int32_t ***l_780 = &l_781;
                        int i, j, k;
                        (*l_729) = l_63[(p_1059->g_221 + 2)][(p_1059->g_221 + 6)][p_1059->g_221];
                    }
                    l_788--;
                }
                return l_791;
            }
            --l_798;
            for (p_1059->g_221 = (-19); (p_1059->g_221 <= (-1)); ++p_1059->g_221)
            { /* block id: 394 */
                int32_t l_824[2][8] = {{0x33984AF5L,1L,0x33984AF5L,0x33984AF5L,1L,0x33984AF5L,0x33984AF5L,1L},{0x33984AF5L,1L,0x33984AF5L,0x33984AF5L,1L,0x33984AF5L,0x33984AF5L,1L}};
                int i, j;
                (*p_59) = ((*p_1059->g_181) = (-4L));
                if ((*p_59))
                    break;
                for (l_64 = 0; (l_64 <= 4); l_64 += 1)
                { /* block id: 400 */
                    int8_t *l_803 = &p_1059->g_690[0][0];
                    int64_t *l_825 = &p_1059->g_152;
                    int i, j, k;
                    (*l_758) &= p_1059->g_329[l_64][(l_64 + 1)][l_64];
                    l_827 = func_91(p_57, ((*l_803) |= 0x5BL), (((safe_lshift_func_uint16_t_u_s(((((l_826 = (!(safe_div_func_int32_t_s_s((((*l_758) ^= (safe_lshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(p_1059->g_329[2][5][2], (safe_sub_func_uint64_t_u_u(0x909A6D5595E9260AL, ((*l_791) = (safe_mul_func_uint16_t_u_u((((((*l_825) = ((8UL < (safe_mul_func_uint16_t_u_u(l_797[9][0], (**p_1059->g_617)))) != (p_58 || l_824[1][5]))) ^ 1UL) , (*p_1059->g_618)) & p_57), (*l_60)))))))), 0x34CF79E01400D552L)) ^ 0L) > (*p_59)), p_57)), 4L)) < p_1059->g_329[l_64][(l_64 + 1)][l_64]), 12))) ^ (-1L)), (*p_59))))) ^ p_57) , 0x8F6F2E1BL) <= 1UL), 7)) <= p_57) , &l_794[0][4]), p_1059->g_133[0], l_824[1][5], p_1059);
                }
            }
            (*l_837) = func_91(p_57, (p_57 < (safe_add_func_uint8_t_u_u(p_58, ((safe_add_func_uint32_t_u_u((((~(((+(p_57 == ((0L && (safe_rshift_func_uint8_t_u_s((l_835 &= (p_1059->g_221 ^ ((!(*l_827)) <= (*p_59)))), 7))) , 0UL))) , l_836) < (*l_62))) & (*l_758)) || 0x47F70623L), (*l_60))) ^ (*l_758))))), p_59, p_58, (*l_827), p_1059);
        }
        if ((*p_1059->g_181))
            break;
    }
    for (p_1059->g_221 = 12; (p_1059->g_221 <= (-19)); --p_1059->g_221)
    { /* block id: 417 */
        uint16_t **l_840 = (void*)0;
        uint16_t ***l_841 = &p_1059->g_617;
        (*p_59) |= (((p_58 && 0x6F6B256AF40BB93FL) && (*l_60)) < (p_58 > (((*l_841) = l_840) != (l_842 = (p_58 , &p_1059->g_618)))));
    }
    return &p_1059->g_112;
}


/* ------------------------------------------ */
/* 
 * reads : p_1059->g_546
 * writes:
 */
int8_t  func_80(int32_t * p_81, uint32_t  p_82, int32_t * p_83, int16_t  p_84, uint8_t  p_85, struct S0 * p_1059)
{ /* block id: 349 */
    uint16_t l_730 = 0xB9FBL;
    ++l_730;
    return p_1059->g_546[5][2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1059->g_142 p_1059->g_349 p_1059->g_181 p_1059->g_274 p_1059->g_221 p_1059->g_4 p_1059->g_11 p_1059->g_133 p_1059->g_201 p_1059->g_115 p_1059->g_329 p_1059->g_135 p_1059->g_500 p_1059->g_112 p_1059->g_61 p_1059->g_180 p_1059->g_219 p_1059->g_501 p_1059->g_546 p_1059->g_328 p_1059->g_158 p_1059->g_617 p_1059->g_618 p_1059->g_152 p_1059->g_690 p_1059->g_25 p_1059->g_694 p_1059->g_419 p_1059->g_176
 * writes: p_1059->g_152 p_1059->g_176 p_1059->g_221 p_1059->g_329 p_1059->g_112 p_1059->g_135 p_1059->g_201 p_1059->g_115 p_1059->g_419 p_1059->g_142 p_1059->g_219 p_1059->g_546 p_1059->g_328 p_1059->g_690 p_1059->g_158 p_1059->g_111
 */
int32_t * func_86(int32_t * p_87, int16_t  p_88, int32_t * p_89, uint16_t  p_90, struct S0 * p_1059)
{ /* block id: 185 */
    int64_t l_444 = 4L;
    uint16_t *l_451[2];
    uint16_t **l_450 = &l_451[0];
    int32_t l_464 = 0x5D37C0EEL;
    int32_t l_470 = 0x6DCBE3F2L;
    int32_t l_471[7] = {0x5507A409L,0x5507A409L,0x5507A409L,0x5507A409L,0x5507A409L,0x5507A409L,0x5507A409L};
    uint8_t l_473 = 0xC5L;
    uint8_t l_567 = 0x50L;
    int8_t l_596[9];
    int16_t *l_648 = (void*)0;
    uint64_t l_654 = 0xFA005138BED9294DL;
    uint32_t l_702 = 4294967295UL;
    uint64_t **l_707 = &p_1059->g_111[4];
    int32_t **l_708 = &p_1059->g_274;
    int8_t *l_711 = &l_596[7];
    uint8_t *l_727 = (void*)0;
    uint8_t **l_726 = &l_727;
    int i;
    for (i = 0; i < 2; i++)
        l_451[i] = &p_1059->g_201;
    for (i = 0; i < 9; i++)
        l_596[i] = 0x68L;
lbl_728:
    for (p_1059->g_152 = 0; (p_1059->g_152 <= 0); p_1059->g_152 += 1)
    { /* block id: 188 */
        uint32_t l_441 = 1UL;
        uint16_t **l_453 = &l_451[0];
        int16_t l_454[8];
        int32_t l_460[1];
        uint16_t l_479 = 65535UL;
        uint64_t *l_561 = &p_1059->g_328;
        uint64_t *l_566 = &p_1059->g_112;
        uint16_t l_583 = 0x3FC1L;
        uint32_t **l_651 = &p_1059->g_139;
        uint32_t l_656 = 0xE62D3A4CL;
        int32_t l_657[3];
        uint16_t l_661 = 65535UL;
        uint8_t *l_680 = &l_567;
        int i;
        for (i = 0; i < 8; i++)
            l_454[i] = 0x494AL;
        for (i = 0; i < 1; i++)
            l_460[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_657[i] = 3L;
        for (p_1059->g_176 = 0; (p_1059->g_176 <= 0); p_1059->g_176 += 1)
        { /* block id: 191 */
            int32_t l_462 = 0x24CE7ECFL;
            int32_t l_463 = 0L;
            int32_t l_465 = 0L;
            uint64_t l_476 = 0xEAA83B9E07E671BEL;
            int8_t l_509 = 0x4CL;
            int32_t l_534[5][7][1] = {{{8L},{8L},{8L},{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L},{8L},{8L},{8L}}};
            int i, j, k;
            for (p_1059->g_221 = 6; (p_1059->g_221 >= 1); p_1059->g_221 -= 1)
            { /* block id: 194 */
                int32_t l_445 = 0x5B97325DL;
                int16_t *l_448 = (void*)0;
                int16_t *l_449 = &p_1059->g_329[6][2][2];
                int32_t l_461 = (-1L);
                int32_t l_467 = (-1L);
                int32_t l_468 = 0x5DA75E51L;
                int32_t l_469 = 0x06883DBAL;
                int8_t *l_514 = (void*)0;
                int8_t *l_515 = (void*)0;
                int8_t *l_516 = &l_509;
                int32_t *l_517 = &l_471[3];
                int i, j;
                if (((((l_441 | (((*l_449) = (safe_add_func_uint32_t_u_u(((l_444 , l_445) < (0x1AB501C02810FAA2L != (safe_lshift_func_int8_t_s_u((((*p_87) || (**p_1059->g_349)) , (-8L)), (+0UL))))), (0L ^ p_88)))) != p_90)) || (*p_1059->g_274)) , p_1059->g_4) & p_90))
                { /* block id: 196 */
                    return p_87;
                }
                else
                { /* block id: 198 */
                    int16_t l_466 = 0x02FDL;
                    int32_t l_472[2];
                    uint32_t *l_493 = &p_1059->g_135;
                    int64_t *l_502 = &p_1059->g_419;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_472[i] = 0x0B4B5821L;
                    for (p_1059->g_112 = 0; (p_1059->g_112 <= 6); p_1059->g_112 += 1)
                    { /* block id: 201 */
                        l_453 = l_450;
                    }
                    for (p_1059->g_135 = 0; (p_1059->g_135 <= 6); p_1059->g_135 += 1)
                    { /* block id: 206 */
                        int32_t *l_455 = &p_1059->g_142[2];
                        int32_t *l_456 = &p_1059->g_142[2];
                        int32_t *l_457 = &p_1059->g_142[2];
                        int32_t *l_458 = &l_445;
                        int32_t *l_459[6][7] = {{&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221},{&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221},{&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221},{&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221},{&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221},{&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221,&p_1059->g_221}};
                        int i, j;
                        ++l_473;
                        if ((*p_89))
                            continue;
                        ++l_476;
                    }
                    if (l_479)
                        continue;
                    (*p_1059->g_181) = ((p_90 ^ ((safe_div_func_uint16_t_u_u((p_1059->g_133[0] , (safe_div_func_uint16_t_u_u(((**l_450)--), ((safe_sub_func_int8_t_s_s(((((p_1059->g_115++) , ((l_464 = 0x2B1F1756L) , p_1059->g_329[1][4][0])) == ((*l_502) = ((l_460[0] = (safe_unary_minus_func_uint8_t_u(((((*p_89) == (**p_1059->g_349)) < (((((1L > ((--(*l_493)) | (4294967292UL <= ((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((l_479 | l_460[0]), l_465)), p_1059->g_329[4][5][3])) ^ p_88)))) , p_1059->g_500) == &p_1059->g_152) >= (*p_1059->g_181)) > 4294967295UL)) > l_465)))) <= p_90))) | 0x19CBC30FD7CD2C43L), l_444)) , 0x9BFCL)))), 0x1250L)) , 0x77E5L)) & p_90);
                }
                l_445 = (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(0x20L, (((*p_89) < (p_90 > (safe_mul_func_int16_t_s_s(l_463, (p_1059->g_112 , ((*l_449) ^= l_509)))))) ^ (((l_473 < p_90) , 4294967295UL) , l_462)))), 0x42A76D3CL));
                (*l_517) ^= ((safe_rshift_func_int16_t_s_u((p_88 > p_1059->g_61), ((l_444 ^ (((**p_1059->g_180) , l_451[1]) != ((((safe_mod_func_int64_t_s_s((l_444 || ((*l_516) &= p_1059->g_219[3])), (-1L))) || (4294967295UL >= 0x261F8FEEL)) , l_468) , &p_1059->g_329[6][2][2]))) == p_1059->g_329[6][2][2]))) ^ (*p_89));
                if (l_454[3])
                    break;
            }
            l_453 = &l_451[0];
            for (l_441 = (-30); (l_441 != 45); ++l_441)
            { /* block id: 229 */
                uint64_t *l_535 = (void*)0;
                uint64_t *l_536[3];
                uint32_t l_537 = 0x58567D96L;
                uint8_t *l_542 = &l_473;
                int8_t l_543 = 1L;
                uint32_t *l_544 = &p_1059->g_135;
                int8_t *l_545 = &p_1059->g_219[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_536[i] = &l_476;
                (*p_1059->g_181) = (safe_mul_func_int8_t_s_s((((p_1059->g_546[5][2][0] ^= (safe_div_func_int8_t_s_s(((*l_545) = (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((*p_1059->g_500) && 0x3557FE68BCB6CAD5L) , (((safe_lshift_func_uint8_t_u_u(255UL, 6)) ^ ((safe_rshift_func_int16_t_s_u(((p_90 <= l_534[2][4][0]) & ((*l_544) = ((((++l_537) || (+((safe_lshift_func_uint8_t_u_s(((*l_542) = p_1059->g_142[2]), 2)) & ((p_1059->g_419 = (l_543 = ((+(((&p_1059->g_219[4] == (void*)0) || (p_88 > 2UL)) == p_88)) > l_471[2]))) >= p_90)))) , p_1059->g_112) && l_479))), p_90)) != l_476)) , p_88)) & p_90), p_90)), p_1059->g_201)), p_90))), p_1059->g_115))) , &l_534[1][3][0]) != &p_1059->g_142[2]), p_88));
            }
        }
        (*p_87) = (safe_rshift_func_uint8_t_u_u(p_1059->g_142[0], ((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_1059->g_546[5][2][0], (safe_sub_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u(0x04862C4C76081D61L, (safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(p_88, 14)) == p_88) < l_444), ((((((((*l_561)++) == ((*l_566) &= (safe_div_func_uint8_t_u_u(l_473, p_1059->g_142[2])))) <= 0x100033D1L) | p_88) <= 1L) , (*p_1059->g_181)) , l_567))))) ^ p_90), (*p_1059->g_500))))), 12)) , p_1059->g_158[0])));
        for (p_1059->g_135 = 0; (p_1059->g_135 <= 6); p_1059->g_135 += 1)
        { /* block id: 245 */
            uint16_t **l_578 = &l_451[0];
            int8_t *l_599 = &p_1059->g_4;
            int32_t l_616 = (-1L);
            uint32_t *l_632 = &p_1059->g_135;
            int i, j;
            (1 + 1);
        }
        for (l_583 = 0; (l_583 <= 6); l_583 += 1)
        { /* block id: 321 */
            int32_t *l_658 = &l_471[2];
            int32_t **l_662 = &l_658;
            uint8_t **l_677 = (void*)0;
            uint8_t *l_679[6] = {&l_473,(void*)0,&l_473,&l_473,(void*)0,&l_473};
            uint8_t **l_678 = &l_679[4];
            int8_t *l_689[3][4] = {{&p_1059->g_4,&p_1059->g_4,(void*)0,&p_1059->g_4},{&p_1059->g_4,&p_1059->g_4,(void*)0,&p_1059->g_4},{&p_1059->g_4,&p_1059->g_4,(void*)0,&p_1059->g_4}};
            uint16_t *l_691 = &p_1059->g_201;
            uint32_t *l_695 = &p_1059->g_135;
            int i, j;
            (*l_662) = func_91((*p_1059->g_500), p_1059->g_61, ((*l_662) = func_91(l_657[2], l_583, l_658, (safe_div_func_int16_t_s_s(l_661, ((l_444 & ((p_88 != (0x137BAFB3A529BA4FL >= p_1059->g_329[5][2][0])) & 18446744073709551615UL)) , 0x4D52L))), l_471[2], p_1059)), p_1059->g_201, (*p_89), p_1059);
            (*p_1059->g_274) = ((*l_658) = ((safe_lshift_func_int8_t_s_s((p_1059->g_219[l_583] = ((-1L) != (safe_rshift_func_uint16_t_u_u((**p_1059->g_617), 13)))), 7)) == (safe_div_func_int8_t_s_s(((!(l_657[2] = ((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((p_1059->g_690[6][4] |= ((((((*l_678) = &l_567) == l_680) || (safe_sub_func_int16_t_s_s((p_1059->g_329[5][0][1] = p_1059->g_152), (0x76L & (l_596[5] != (safe_div_func_uint64_t_u_u(18446744073709551607UL, (((*l_566) = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(65535UL, 0x6443L)), 7))) || l_567)))))))) , 0x4BD6A739L) , (**l_662))) == p_88), 65535UL)) >= p_1059->g_133[0]), p_90)) && l_596[7]), p_88)), p_1059->g_221)) && (-1L)))) != (*l_658)), p_1059->g_25))));
            if ((*p_89))
                break;
            l_657[2] = ((**p_1059->g_349) = ((l_691 == ((safe_sub_func_int16_t_s_s((p_1059->g_694[1] == ((((*p_1059->g_618) || 65528UL) | ((*l_695)++)) , &l_679[4])), (p_1059->g_158[0] = ((((**l_662) == (*p_1059->g_618)) , (safe_rshift_func_int16_t_s_s((p_1059->g_329[6][2][2] &= (((safe_div_func_int16_t_s_s(p_90, 1UL)) <= 0x17A1BBDF425658F7L) & p_88)), l_702))) , 7L)))) , &p_90)) >= (*p_1059->g_181)));
        }
    }
    (*p_1059->g_181) &= (safe_mul_func_uint16_t_u_u(((-8L) == (safe_mod_func_int64_t_s_s((((*l_707) = &p_1059->g_328) == ((&p_1059->g_274 != l_708) , &p_1059->g_328)), p_1059->g_690[3][3]))), (p_88 = (**l_708))));
    l_726 = ((0xC2816BFDL < (safe_lshift_func_uint8_t_u_s((((*l_711) = (0x804ABEEDL >= ((**l_708) = (**p_1059->g_180)))) < (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_90, (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(p_90, 5)) ^ (p_90 ^ (0x6FA21EA1L | (p_88 || (safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_1059->g_112, p_90)), p_88)), 0x0AL)))))), (-3L))))), p_1059->g_419))), 7))) , (void*)0);
    if (p_1059->g_328)
        goto lbl_728;
    return p_87;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_91(int64_t  p_92, int8_t  p_93, int32_t * p_94, int8_t  p_95, int32_t  p_96, struct S0 * p_1059)
{ /* block id: 183 */
    int32_t *l_438 = &p_1059->g_142[2];
    return l_438;
}


/* ------------------------------------------ */
/* 
 * reads : p_1059->g_11 p_1059->g_152 p_1059->g_181 p_1059->g_142 p_1059->g_328 p_1059->g_273 p_1059->g_274 p_1059->g_221
 * writes: p_1059->g_152 p_1059->g_142 p_1059->g_328 p_1059->g_221
 */
uint64_t  func_106(uint64_t * p_107, uint8_t  p_108, int32_t * p_109, uint64_t * p_110, struct S0 * p_1059)
{ /* block id: 23 */
    int16_t l_128[7][3] = {{0x5729L,0x5729L,0x5729L},{0x5729L,0x5729L,0x5729L},{0x5729L,0x5729L,0x5729L},{0x5729L,0x5729L,0x5729L},{0x5729L,0x5729L,0x5729L},{0x5729L,0x5729L,0x5729L},{0x5729L,0x5729L,0x5729L}};
    int32_t l_251 = (-4L);
    int32_t l_256[6];
    int8_t l_268[3];
    uint64_t *l_284 = &p_1059->g_112;
    uint32_t **l_286[6][4][7] = {{{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0}},{{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0}},{{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0}},{{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0}},{{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0}},{{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0},{(void*)0,&p_1059->g_139,(void*)0,(void*)0,&p_1059->g_139,(void*)0,(void*)0}}};
    uint32_t ***l_285 = &l_286[4][2][4];
    uint32_t l_358 = 0x3BEA31BEL;
    int32_t *l_389[7][8] = {{&p_1059->g_142[0],&l_256[0],&l_256[0],&p_1059->g_142[0],&p_1059->g_61,(void*)0,&l_256[0],&p_1059->g_142[1]},{&p_1059->g_142[0],&l_256[0],&l_256[0],&p_1059->g_142[0],&p_1059->g_61,(void*)0,&l_256[0],&p_1059->g_142[1]},{&p_1059->g_142[0],&l_256[0],&l_256[0],&p_1059->g_142[0],&p_1059->g_61,(void*)0,&l_256[0],&p_1059->g_142[1]},{&p_1059->g_142[0],&l_256[0],&l_256[0],&p_1059->g_142[0],&p_1059->g_61,(void*)0,&l_256[0],&p_1059->g_142[1]},{&p_1059->g_142[0],&l_256[0],&l_256[0],&p_1059->g_142[0],&p_1059->g_61,(void*)0,&l_256[0],&p_1059->g_142[1]},{&p_1059->g_142[0],&l_256[0],&l_256[0],&p_1059->g_142[0],&p_1059->g_61,(void*)0,&l_256[0],&p_1059->g_142[1]},{&p_1059->g_142[0],&l_256[0],&l_256[0],&p_1059->g_142[0],&p_1059->g_61,(void*)0,&l_256[0],&p_1059->g_142[1]}};
    int8_t l_391 = 0x73L;
    uint32_t l_392 = 0xFE68420AL;
    uint16_t l_400[3][4][8] = {{{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L},{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L},{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L},{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L}},{{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L},{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L},{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L},{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L}},{{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L},{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L},{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L},{5UL,65535UL,65535UL,5UL,0x75D7L,0xC165L,0xC165L,0x75D7L}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_256[i] = 1L;
    for (i = 0; i < 3; i++)
        l_268[i] = 0x46L;
    for (p_108 = 0; (p_108 < 43); p_108 = safe_add_func_uint64_t_u_u(p_108, 1))
    { /* block id: 26 */
        uint32_t *l_134 = &p_1059->g_135;
        int32_t l_179 = 0x017EA376L;
        int32_t l_257 = 0x5E214C64L;
        int32_t l_259 = 0x1707066AL;
        int32_t l_261 = 0x6815A875L;
        int32_t l_265 = 0x7DBA259CL;
        int32_t l_266 = 0x32683604L;
        int32_t l_267[4][5][3] = {{{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)}},{{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)}},{{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)}},{{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)},{1L,1L,(-1L)}}};
        uint32_t l_269 = 0x36C47E8BL;
        int8_t *l_275 = &p_1059->g_219[1];
        int32_t *l_289[8];
        uint32_t ***l_302 = &p_1059->g_300;
        uint8_t l_311 = 0x6DL;
        int32_t *l_348 = &l_256[0];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_289[i] = &l_256[0];
        if ((*p_109))
            break;
    }
    if (l_268[1])
    { /* block id: 126 */
        uint32_t **l_382[4][2][9] = {{{&p_1059->g_139,&p_1059->g_139,(void*)0,&p_1059->g_139,(void*)0,(void*)0,(void*)0,(void*)0,&p_1059->g_139},{&p_1059->g_139,&p_1059->g_139,(void*)0,&p_1059->g_139,(void*)0,(void*)0,(void*)0,(void*)0,&p_1059->g_139}},{{&p_1059->g_139,&p_1059->g_139,(void*)0,&p_1059->g_139,(void*)0,(void*)0,(void*)0,(void*)0,&p_1059->g_139},{&p_1059->g_139,&p_1059->g_139,(void*)0,&p_1059->g_139,(void*)0,(void*)0,(void*)0,(void*)0,&p_1059->g_139}},{{&p_1059->g_139,&p_1059->g_139,(void*)0,&p_1059->g_139,(void*)0,(void*)0,(void*)0,(void*)0,&p_1059->g_139},{&p_1059->g_139,&p_1059->g_139,(void*)0,&p_1059->g_139,(void*)0,(void*)0,(void*)0,(void*)0,&p_1059->g_139}},{{&p_1059->g_139,&p_1059->g_139,(void*)0,&p_1059->g_139,(void*)0,(void*)0,(void*)0,(void*)0,&p_1059->g_139},{&p_1059->g_139,&p_1059->g_139,(void*)0,&p_1059->g_139,(void*)0,(void*)0,(void*)0,(void*)0,&p_1059->g_139}}};
        int32_t l_384 = 0x3CEBBD08L;
        int i, j, k;
        for (p_1059->g_152 = 0; (p_1059->g_152 <= 0); p_1059->g_152 = safe_add_func_int32_t_s_s(p_1059->g_152, 1))
        { /* block id: 129 */
            uint32_t *l_369 = &p_1059->g_135;
            int32_t l_370 = (-1L);
            uint16_t l_371 = 65533UL;
            uint16_t *l_383 = &p_1059->g_201;
            int32_t **l_385 = &p_1059->g_181;
            (1 + 1);
        }
    }
    else
    { /* block id: 138 */
        (*p_1059->g_181) ^= (*p_109);
    }
    for (p_1059->g_328 = 0; (p_1059->g_328 <= 21); p_1059->g_328 = safe_add_func_int16_t_s_s(p_1059->g_328, 9))
    { /* block id: 143 */
        uint8_t l_388[3][2][8] = {{{0x78L,0x78L,0x36L,0UL,0x59L,0UL,0x36L,0x78L},{0x78L,0x78L,0x36L,0UL,0x59L,0UL,0x36L,0x78L}},{{0x78L,0x78L,0x36L,0UL,0x59L,0UL,0x36L,0x78L},{0x78L,0x78L,0x36L,0UL,0x59L,0UL,0x36L,0x78L}},{{0x78L,0x78L,0x36L,0UL,0x59L,0UL,0x36L,0x78L},{0x78L,0x78L,0x36L,0UL,0x59L,0UL,0x36L,0x78L}}};
        int32_t l_390[8][8][4] = {{{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)}},{{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)}},{{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)}},{{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)}},{{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)}},{{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)}},{{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)}},{{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)},{0x496988D1L,5L,1L,(-1L)}}};
        uint32_t l_415 = 8UL;
        int i, j, k;
        (*p_1059->g_181) = ((**p_1059->g_273) = l_388[0][1][5]);
        l_389[6][4] = l_389[0][4];
        l_392--;
        for (p_1059->g_152 = 0; (p_1059->g_152 <= 2); p_1059->g_152 += 1)
        { /* block id: 150 */
            int8_t l_395 = 0x48L;
            int32_t l_396 = 0x3F6C1856L;
            int32_t l_397 = 0x5C3AAE1AL;
            int32_t l_398 = 0L;
            int32_t l_399[8][3] = {{0x669142EFL,0x669142EFL,0x669142EFL},{0x669142EFL,0x669142EFL,0x669142EFL},{0x669142EFL,0x669142EFL,0x669142EFL},{0x669142EFL,0x669142EFL,0x669142EFL},{0x669142EFL,0x669142EFL,0x669142EFL},{0x669142EFL,0x669142EFL,0x669142EFL},{0x669142EFL,0x669142EFL,0x669142EFL},{0x669142EFL,0x669142EFL,0x669142EFL}};
            int64_t *l_418 = &p_1059->g_419;
            int8_t *l_426 = &l_395;
            int i, j;
            ++l_400[1][2][7];
        }
    }
    for (l_391 = (-8); (l_391 == 0); l_391 = safe_add_func_int16_t_s_s(l_391, 2))
    { /* block id: 174 */
        for (p_1059->g_221 = (-28); (p_1059->g_221 > 25); p_1059->g_221 = safe_add_func_int16_t_s_s(p_1059->g_221, 1))
        { /* block id: 177 */
            int16_t l_432 = 8L;
            int32_t l_433[3];
            uint8_t l_434 = 0UL;
            int i;
            for (i = 0; i < 3; i++)
                l_433[i] = (-1L);
            --l_434;
        }
    }
    return p_108;
}


/* ------------------------------------------ */
/* 
 * reads : p_1059->g_115 p_1059->g_135 p_1059->g_138 p_1059->g_140 p_1059->g_112 p_1059->g_26 p_1059->g_133 p_1059->g_11 p_1059->g_61 p_1059->g_4
 * writes: p_1059->g_115 p_1059->g_135 p_1059->g_138 p_1059->g_112 p_1059->g_26 p_1059->g_152 p_1059->g_142
 */
uint16_t  func_122(int64_t  p_123, int32_t * p_124, int32_t * p_125, uint64_t * p_126, int32_t * p_127, struct S0 * p_1059)
{ /* block id: 29 */
    int32_t l_177 = (-1L);
    for (p_1059->g_115 = 0; (p_1059->g_115 <= 0); p_1059->g_115 += 1)
    { /* block id: 32 */
        int16_t l_159[7] = {0x43FAL,0x1C8FL,0x43FAL,0x43FAL,0x1C8FL,0x43FAL,0x43FAL};
        int i;
        for (p_1059->g_135 = 0; (p_1059->g_135 <= 0); p_1059->g_135 += 1)
        { /* block id: 35 */
            return p_123;
        }
        for (p_1059->g_135 = 0; (p_1059->g_135 <= 0); p_1059->g_135 += 1)
        { /* block id: 40 */
            uint16_t l_148 = 7UL;
            int64_t *l_151 = &p_1059->g_152;
            int16_t *l_157[7][1] = {{&p_1059->g_158[0]},{&p_1059->g_158[0]},{&p_1059->g_158[0]},{&p_1059->g_158[0]},{&p_1059->g_158[0]},{&p_1059->g_158[0]},{&p_1059->g_158[0]}};
            int32_t *l_162 = (void*)0;
            uint32_t **l_170[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint32_t ***l_169[6] = {(void*)0,&l_170[0][1],(void*)0,(void*)0,&l_170[0][1],(void*)0};
            uint32_t ****l_171 = &l_169[5];
            uint8_t *l_175[3][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int32_t *l_178 = &p_1059->g_142[2];
            int i, j, k;
            (*p_1059->g_140) = p_1059->g_138;
            for (p_1059->g_112 = 0; (p_1059->g_112 <= 5); p_1059->g_112 += 1)
            { /* block id: 44 */
                int32_t *l_141 = &p_1059->g_142[2];
                int32_t *l_143 = &p_1059->g_142[2];
                int32_t l_144[8][9] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                int32_t *l_145 = &p_1059->g_142[2];
                int32_t *l_146 = &p_1059->g_142[0];
                int32_t *l_147[7];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_147[i] = &p_1059->g_142[2];
                p_1059->g_26[p_1059->g_115][(p_1059->g_115 + 2)] = p_1059->g_26[p_1059->g_135][(p_1059->g_135 + 1)];
                l_148--;
            }
            (*l_178) = ((+(((*l_151) = (+p_1059->g_133[2])) <= ((((l_177 = (safe_add_func_uint16_t_u_u(p_123, ((safe_rshift_func_int16_t_s_s((l_159[5] = 0x1BCEL), (safe_add_func_int64_t_s_s(((l_162 = &p_1059->g_61) == ((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((*l_171) = l_169[5]) == (void*)0), 0x0A8A3E14L)), (safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u(((p_1059->g_135 && (*p_126)) & p_1059->g_11))), (*p_126))))), p_123)) , p_1059->g_26[p_1059->g_115][(p_1059->g_135 + 2)])), l_148)))) || (-3L))))) == p_1059->g_61) && 0x4414D6DA497F6437L) | p_1059->g_11))) == p_123);
        }
    }
    return p_1059->g_4;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1060;
    struct S0* p_1059 = &c_1060;
    struct S0 c_1061 = {
        0x0FL, // p_1059->g_4
        0x67ED6F18L, // p_1059->g_11
        0x176DF7E4L, // p_1059->g_18
        0xB441L, // p_1059->g_25
        {{(void*)0,(void*)0,(void*)0}}, // p_1059->g_26
        (-1L), // p_1059->g_61
        0x1B9AD14953B525E9L, // p_1059->g_112
        {(void*)0,&p_1059->g_112,(void*)0,(void*)0,&p_1059->g_112,(void*)0}, // p_1059->g_111
        7UL, // p_1059->g_115
        {0x5E376B26L,0x5E376B26L,0x5E376B26L,0x5E376B26L,0x5E376B26L,0x5E376B26L}, // p_1059->g_133
        0xBB834B12L, // p_1059->g_135
        (void*)0, // p_1059->g_139
        &p_1059->g_139, // p_1059->g_138
        &p_1059->g_138, // p_1059->g_140
        {0x1A8E3B28L,0x1A8E3B28L,0x1A8E3B28L}, // p_1059->g_142
        0x123AD0E7527B815EL, // p_1059->g_152
        {1L,1L,1L,1L,1L}, // p_1059->g_158
        9UL, // p_1059->g_176
        &p_1059->g_142[2], // p_1059->g_181
        &p_1059->g_181, // p_1059->g_180
        0x455BL, // p_1059->g_201
        {0x4EL,0x4EL,0x4EL,0x4EL,0x4EL,0x4EL,0x4EL}, // p_1059->g_219
        8L, // p_1059->g_221
        {{{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0}},{{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0}},{{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0},{&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,&p_1059->g_181,(void*)0,(void*)0}}}, // p_1059->g_224
        &p_1059->g_221, // p_1059->g_274
        &p_1059->g_274, // p_1059->g_273
        (void*)0, // p_1059->g_292
        (void*)0, // p_1059->g_300
        &p_1059->g_300, // p_1059->g_299
        1UL, // p_1059->g_328
        {{{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L}},{{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L}},{{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L}},{{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L}},{{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L}},{{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L}},{{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L}},{{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L},{0x39DDL,0x33AEL,0x1DA5L,0L,4L}}}, // p_1059->g_329
        &p_1059->g_181, // p_1059->g_349
        0x0DEDBBB95F644EB2L, // p_1059->g_419
        (void*)0, // p_1059->g_452
        0x79C461C1F894D512L, // p_1059->g_501
        &p_1059->g_501, // p_1059->g_500
        {{{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL}},{{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL}},{{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL}},{{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL}},{{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL}},{{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL}},{{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL}},{{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL}},{{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL},{0xBFF70813L,4294967290UL}}}, // p_1059->g_546
        &p_1059->g_201, // p_1059->g_618
        &p_1059->g_618, // p_1059->g_617
        {{&p_1059->g_181,&p_1059->g_181,(void*)0,&p_1059->g_181,&p_1059->g_274},{&p_1059->g_181,&p_1059->g_181,(void*)0,&p_1059->g_181,&p_1059->g_274},{&p_1059->g_181,&p_1059->g_181,(void*)0,&p_1059->g_181,&p_1059->g_274},{&p_1059->g_181,&p_1059->g_181,(void*)0,&p_1059->g_181,&p_1059->g_274}}, // p_1059->g_622
        {(void*)0,(void*)0}, // p_1059->g_623
        {{0L,1L,0x2AL,1L,0L},{0L,1L,0x2AL,1L,0L},{0L,1L,0x2AL,1L,0L},{0L,1L,0x2AL,1L,0L},{0L,1L,0x2AL,1L,0L},{0L,1L,0x2AL,1L,0L},{0L,1L,0x2AL,1L,0L}}, // p_1059->g_690
        {(void*)0,(void*)0}, // p_1059->g_694
        {{(-10L),0x7C74C199L,0x7C74C199L,(-10L),0x56BDA68DL,0x5A10B1D5L,0x5A10B1D5L,0x56BDA68DL,(-10L)},{(-10L),0x7C74C199L,0x7C74C199L,(-10L),0x56BDA68DL,0x5A10B1D5L,0x5A10B1D5L,0x56BDA68DL,(-10L)},{(-10L),0x7C74C199L,0x7C74C199L,(-10L),0x56BDA68DL,0x5A10B1D5L,0x5A10B1D5L,0x56BDA68DL,(-10L)},{(-10L),0x7C74C199L,0x7C74C199L,(-10L),0x56BDA68DL,0x5A10B1D5L,0x5A10B1D5L,0x56BDA68DL,(-10L)},{(-10L),0x7C74C199L,0x7C74C199L,(-10L),0x56BDA68DL,0x5A10B1D5L,0x5A10B1D5L,0x56BDA68DL,(-10L)},{(-10L),0x7C74C199L,0x7C74C199L,(-10L),0x56BDA68DL,0x5A10B1D5L,0x5A10B1D5L,0x56BDA68DL,(-10L)},{(-10L),0x7C74C199L,0x7C74C199L,(-10L),0x56BDA68DL,0x5A10B1D5L,0x5A10B1D5L,0x56BDA68DL,(-10L)},{(-10L),0x7C74C199L,0x7C74C199L,(-10L),0x56BDA68DL,0x5A10B1D5L,0x5A10B1D5L,0x56BDA68DL,(-10L)}}, // p_1059->g_782
        &p_1059->g_61, // p_1059->g_850
        (void*)0, // p_1059->g_881
        &p_1059->g_274, // p_1059->g_917
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1059->g_935
        {{{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]}},{{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]}},{{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]}},{{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]}},{{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]}},{{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]},{&p_1059->g_111[0],(void*)0,&p_1059->g_111[5],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[4],&p_1059->g_111[3]}}}, // p_1059->g_936
        0x72ECEA31L, // p_1059->g_943
        0xA32AC1F4L, // p_1059->g_956
        &p_1059->g_956, // p_1059->g_955
        4UL, // p_1059->g_1005
        {{{0x491AC390L,0x491AC390L}},{{0x491AC390L,0x491AC390L}},{{0x491AC390L,0x491AC390L}},{{0x491AC390L,0x491AC390L}}}, // p_1059->g_1039
    };
    c_1060 = c_1061;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1059);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1059->g_4, "p_1059->g_4", print_hash_value);
    transparent_crc(p_1059->g_11, "p_1059->g_11", print_hash_value);
    transparent_crc(p_1059->g_18, "p_1059->g_18", print_hash_value);
    transparent_crc(p_1059->g_25, "p_1059->g_25", print_hash_value);
    transparent_crc(p_1059->g_61, "p_1059->g_61", print_hash_value);
    transparent_crc(p_1059->g_112, "p_1059->g_112", print_hash_value);
    transparent_crc(p_1059->g_115, "p_1059->g_115", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1059->g_133[i], "p_1059->g_133[i]", print_hash_value);

    }
    transparent_crc(p_1059->g_135, "p_1059->g_135", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1059->g_142[i], "p_1059->g_142[i]", print_hash_value);

    }
    transparent_crc(p_1059->g_152, "p_1059->g_152", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1059->g_158[i], "p_1059->g_158[i]", print_hash_value);

    }
    transparent_crc(p_1059->g_176, "p_1059->g_176", print_hash_value);
    transparent_crc(p_1059->g_201, "p_1059->g_201", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1059->g_219[i], "p_1059->g_219[i]", print_hash_value);

    }
    transparent_crc(p_1059->g_221, "p_1059->g_221", print_hash_value);
    transparent_crc(p_1059->g_328, "p_1059->g_328", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1059->g_329[i][j][k], "p_1059->g_329[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1059->g_419, "p_1059->g_419", print_hash_value);
    transparent_crc(p_1059->g_501, "p_1059->g_501", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1059->g_546[i][j][k], "p_1059->g_546[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1059->g_690[i][j], "p_1059->g_690[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1059->g_782[i][j], "p_1059->g_782[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1059->g_943, "p_1059->g_943", print_hash_value);
    transparent_crc(p_1059->g_956, "p_1059->g_956", print_hash_value);
    transparent_crc(p_1059->g_1005, "p_1059->g_1005", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1059->g_1039[i][j][k], "p_1059->g_1039[i][j][k]", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
