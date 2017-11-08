// -g 27,4,36 -l 3,4,18
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


// Seed: 3142509661

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint64_t  f0;
   uint8_t  f1;
};

struct S1 {
    int32_t g_3;
    int32_t g_8;
    int32_t g_62;
    union U0 g_77;
    int64_t g_83;
    uint64_t g_107;
    int32_t g_109;
    int64_t g_110;
    int32_t g_112;
    int64_t g_113;
    int32_t g_114;
    volatile uint8_t g_115;
    int32_t *g_119;
    int32_t ** volatile g_118;
    uint32_t g_120;
    int16_t g_129;
    int32_t ** volatile g_149;
    int32_t ** volatile g_150;
    volatile uint16_t g_157[5][6][8];
    uint16_t g_177;
    int32_t **g_207;
    uint32_t g_221;
    uint8_t g_243;
    union U0 *g_247;
    int8_t g_252;
    int64_t g_264;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S1 * p_271);
int32_t * func_9(uint8_t  p_10, int32_t * p_11, uint32_t  p_12, int32_t * p_13, struct S1 * p_271);
int32_t * func_16(int64_t  p_17, struct S1 * p_271);
uint32_t  func_18(int32_t  p_19, struct S1 * p_271);
uint64_t  func_20(uint32_t  p_21, int32_t * p_22, int32_t * p_23, struct S1 * p_271);
int16_t  func_26(int32_t * p_27, uint16_t  p_28, uint8_t  p_29, uint64_t  p_30, uint64_t  p_31, struct S1 * p_271);
int8_t  func_35(uint32_t  p_36, int32_t  p_37, uint16_t  p_38, int32_t * p_39, struct S1 * p_271);
int32_t  func_40(uint64_t  p_41, struct S1 * p_271);
int64_t  func_46(int32_t * p_47, int32_t * p_48, int32_t * p_49, uint8_t  p_50, int32_t * p_51, struct S1 * p_271);
int32_t * func_53(uint64_t  p_54, int64_t  p_55, int32_t  p_56, int32_t  p_57, int32_t * p_58, struct S1 * p_271);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_271->g_3 p_271->g_8 p_271->g_113
 * writes: p_271->g_3 p_271->g_8
 */
int64_t  func_1(struct S1 * p_271)
{ /* block id: 4 */
    uint32_t l_2[4] = {4294967294UL,4294967294UL,4294967294UL,4294967294UL};
    int32_t *l_52[7][4] = {{&p_271->g_8,&p_271->g_3,&p_271->g_8,&p_271->g_8},{&p_271->g_8,&p_271->g_3,&p_271->g_8,&p_271->g_8},{&p_271->g_8,&p_271->g_3,&p_271->g_8,&p_271->g_8},{&p_271->g_8,&p_271->g_3,&p_271->g_8,&p_271->g_8},{&p_271->g_8,&p_271->g_3,&p_271->g_8,&p_271->g_8},{&p_271->g_8,&p_271->g_3,&p_271->g_8,&p_271->g_8},{&p_271->g_8,&p_271->g_3,&p_271->g_8,&p_271->g_8}};
    uint64_t l_197 = 0xEBA5108633E49B17L;
    int32_t l_198 = 0x548396DEL;
    uint8_t l_256 = 0x49L;
    int32_t ***l_261 = (void*)0;
    int i, j;
    for (p_271->g_3 = 3; (p_271->g_3 >= 0); p_271->g_3 -= 1)
    { /* block id: 7 */
        int32_t *l_7 = &p_271->g_8;
        int16_t *l_128 = &p_271->g_129;
        int32_t **l_180[2];
        union U0 *l_184 = &p_271->g_77;
        int32_t l_200 = 0x0A1B23E1L;
        int64_t **l_219 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_180[i] = &p_271->g_119;
        (*l_7) |= ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(l_2[p_271->g_3])), 2L)) >= l_2[p_271->g_3]);
    }
    l_256 ^= (((void*)0 != &l_197) <= p_271->g_113);
    for (p_271->g_3 = 0; (p_271->g_3 == 21); p_271->g_3++)
    { /* block id: 136 */
        int32_t ****l_262 = &l_261;
        int32_t l_263 = 0x40DD2EE8L;
        uint16_t l_265 = 1UL;
        l_263 = (safe_rshift_func_uint8_t_u_s((&p_271->g_150 == ((*l_262) = l_261)), 0));
        l_265++;
    }
    for (p_271->g_3 = (-1); (p_271->g_3 <= 11); ++p_271->g_3)
    { /* block id: 143 */
        int64_t l_270 = (-3L);
        l_270 = 0x33200A3AL;
    }
    return p_271->g_113;
}


/* ------------------------------------------ */
/* 
 * reads : p_271->g_83 p_271->g_8 p_271->g_120 p_271->g_114 p_271->g_3 p_271->g_112 p_271->g_119 p_271->g_150 p_271->g_157 p_271->g_118 p_271->g_177
 * writes: p_271->g_83 p_271->g_8 p_271->g_114 p_271->g_120 p_271->g_113 p_271->g_119 p_271->g_157 p_271->g_177
 */
int32_t * func_9(uint8_t  p_10, int32_t * p_11, uint32_t  p_12, int32_t * p_13, struct S1 * p_271)
{ /* block id: 53 */
    int32_t l_144 = (-1L);
    int32_t *l_160 = &p_271->g_62;
    int32_t *l_161 = &p_271->g_62;
    int32_t *l_162 = (void*)0;
    int32_t *l_163 = &l_144;
    int32_t l_164 = 0x251E73E5L;
    int32_t *l_165 = &p_271->g_109;
    int32_t l_166 = (-1L);
    int32_t *l_167 = &l_166;
    int32_t *l_168 = &l_166;
    int32_t l_169 = 5L;
    int32_t *l_170 = &l_144;
    int32_t *l_171 = (void*)0;
    int32_t *l_172 = &p_271->g_109;
    int32_t *l_173 = &p_271->g_114;
    int32_t *l_174 = (void*)0;
    int32_t *l_175[2];
    int64_t l_176 = 0x3B3AB43E13164FACL;
    int i;
    for (i = 0; i < 2; i++)
        l_175[i] = (void*)0;
    for (p_271->g_83 = 0; (p_271->g_83 <= 26); p_271->g_83 = safe_add_func_int32_t_s_s(p_271->g_83, 1))
    { /* block id: 56 */
        uint32_t l_133[8][4][8] = {{{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL}},{{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL}},{{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL}},{{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL}},{{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL}},{{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL}},{{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL}},{{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL},{8UL,1UL,4294967292UL,1UL,4294967292UL,1UL,4294967292UL,1UL}}};
        uint64_t *l_134 = &p_271->g_107;
        int32_t l_154 = 0x22D52091L;
        int32_t l_156[10][10] = {{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L},{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L},{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L},{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L},{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L},{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L},{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L},{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L},{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L},{0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L,(-10L),0x28C644E4L,0x28C644E4L}};
        int i, j, k;
        for (p_271->g_8 = 3; (p_271->g_8 >= 0); p_271->g_8 -= 1)
        { /* block id: 59 */
            int32_t *l_135 = &p_271->g_114;
            union U0 *l_151 = (void*)0;
            int32_t l_153 = 0L;
            int32_t l_155[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
            int i;
            (*l_135) = (((void*)0 != l_134) , l_133[3][0][7]);
            for (p_271->g_120 = 0; (p_271->g_120 <= 3); p_271->g_120 += 1)
            { /* block id: 63 */
                uint64_t **l_142 = (void*)0;
                uint64_t *l_143 = &p_271->g_107;
                int64_t *l_145 = &p_271->g_113;
                int32_t *l_148[3][1][10] = {{{&p_271->g_3,&p_271->g_3,&p_271->g_114,(void*)0,&p_271->g_62,(void*)0,&p_271->g_114,&p_271->g_3,&p_271->g_3,&p_271->g_114}},{{&p_271->g_3,&p_271->g_3,&p_271->g_114,(void*)0,&p_271->g_62,(void*)0,&p_271->g_114,&p_271->g_3,&p_271->g_3,&p_271->g_114}},{{&p_271->g_3,&p_271->g_3,&p_271->g_114,(void*)0,&p_271->g_62,(void*)0,&p_271->g_114,&p_271->g_3,&p_271->g_3,&p_271->g_114}}};
                int i, j, k;
                (*p_271->g_150) = func_16(((((l_133[p_271->g_8][p_271->g_8][(p_271->g_8 + 2)] || (((safe_add_func_int64_t_s_s(l_133[(p_271->g_8 + 1)][p_271->g_120][(p_271->g_8 + 1)], (safe_lshift_func_int16_t_s_u((((0x75635FBB508EA8A6L | (safe_mod_func_uint64_t_u_u(((l_143 = (void*)0) == &p_271->g_107), (((l_133[p_271->g_120][p_271->g_120][(p_271->g_120 + 4)] , (((((*l_145) = (4294967290UL >= (l_144 = 0x5464414DL))) , (((safe_sub_func_uint16_t_u_u(p_271->g_83, (*l_135))) & 0x93L) <= 18446744073709551607UL)) && l_133[(p_271->g_8 + 1)][p_271->g_120][(p_271->g_8 + 1)]) != (*l_135))) < (-6L)) | (*p_13))))) , l_148[0][0][5]) != p_13), 8)))) | p_271->g_83) , (*p_13))) != p_271->g_112) >= (*p_13)) , p_271->g_120), p_271);
            }
            l_151 = &p_271->g_77;
            for (p_271->g_120 = 0; (p_271->g_120 <= 3); p_271->g_120 += 1)
            { /* block id: 72 */
                int32_t *l_152[2][5];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_152[i][j] = (void*)0;
                }
                ++p_271->g_157[4][3][4];
            }
        }
        return (*p_271->g_118);
    }
    p_271->g_177--;
    (*l_170) = ((void*)0 == &p_13);
    return (*p_271->g_150);
}


/* ------------------------------------------ */
/* 
 * reads : p_271->g_119
 * writes: p_271->g_119
 */
int32_t * func_16(int64_t  p_17, struct S1 * p_271)
{ /* block id: 50 */
    int32_t **l_130 = &p_271->g_119;
    (*l_130) = (void*)0;
    return (*l_130);
}


/* ------------------------------------------ */
/* 
 * reads : p_271->g_107 p_271->g_114 p_271->g_62
 * writes: p_271->g_107 p_271->g_114
 */
uint32_t  func_18(int32_t  p_19, struct S1 * p_271)
{ /* block id: 42 */
    for (p_271->g_107 = (-26); (p_271->g_107 <= 15); p_271->g_107 = safe_add_func_int64_t_s_s(p_271->g_107, 6))
    { /* block id: 45 */
        int32_t *l_127 = &p_271->g_114;
        (*l_127) ^= p_19;
    }
    return p_271->g_62;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_20(uint32_t  p_21, int32_t * p_22, int32_t * p_23, struct S1 * p_271)
{ /* block id: 39 */
    uint8_t l_122[7] = {247UL,0x7CL,247UL,247UL,0x7CL,247UL,247UL};
    int i;
    l_122[0]--;
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_271->g_119
 */
int16_t  func_26(int32_t * p_27, uint16_t  p_28, uint8_t  p_29, uint64_t  p_30, uint64_t  p_31, struct S1 * p_271)
{ /* block id: 36 */
    int32_t **l_121 = &p_271->g_119;
    (*l_121) = (void*)0;
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_271->g_118 p_271->g_109
 * writes: p_271->g_119
 */
int8_t  func_35(uint32_t  p_36, int32_t  p_37, uint16_t  p_38, int32_t * p_39, struct S1 * p_271)
{ /* block id: 33 */
    (*p_271->g_118) = &p_271->g_8;
    return p_271->g_109;
}


/* ------------------------------------------ */
/* 
 * reads : p_271->g_8 p_271->g_83 p_271->g_62 p_271->g_77.f0 p_271->g_107 p_271->g_109 p_271->g_115
 * writes: p_271->g_62 p_271->g_107 p_271->g_109 p_271->g_110 p_271->g_115
 */
int32_t  func_40(uint64_t  p_41, struct S1 * p_271)
{ /* block id: 23 */
    int8_t l_88 = 1L;
    int64_t *l_91 = &p_271->g_83;
    int64_t **l_92 = &l_91;
    int64_t *l_94 = &p_271->g_83;
    int64_t **l_93 = &l_94;
    int32_t *l_101 = &p_271->g_62;
    uint64_t *l_106 = &p_271->g_107;
    int32_t *l_108[10][1][4] = {{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}},{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}},{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}},{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}},{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}},{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}},{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}},{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}},{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}},{{&p_271->g_109,&p_271->g_3,&p_271->g_3,&p_271->g_3}}};
    uint64_t l_111 = 0x8B5088466DEC5612L;
    int i, j, k;
    l_111 |= (l_88 , (safe_sub_func_int16_t_s_s(((+((p_271->g_8 <= p_41) <= (p_271->g_110 = (((*l_93) = ((*l_92) = l_91)) == ((((p_271->g_109 &= (((*l_106) |= (((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((*l_101) = p_271->g_83) , ((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_271->g_83, (0x3870L <= (((*l_101) && (0x1B82L == p_41)) || p_271->g_8)))), 0x3DL)) != (*l_101))), p_271->g_77.f0)), 14)), l_88)) < p_41) || 0UL)) && p_41)) | 4294967286UL) >= p_41) , &p_271->g_83))))) >= p_271->g_83), 1UL)));
    --p_271->g_115;
    return (*l_101);
}


/* ------------------------------------------ */
/* 
 * reads : p_271->g_77 p_271->g_77.f0 p_271->g_8 p_271->g_3 p_271->g_62
 * writes: p_271->g_83 p_271->g_62
 */
int64_t  func_46(int32_t * p_47, int32_t * p_48, int32_t * p_49, uint8_t  p_50, int32_t * p_51, struct S1 * p_271)
{ /* block id: 18 */
    uint16_t l_65 = 0x663BL;
    int32_t *l_76[2];
    int64_t *l_82 = &p_271->g_83;
    int32_t l_86 = 1L;
    uint32_t l_87 = 4294967295UL;
    int i;
    for (i = 0; i < 2; i++)
        l_76[i] = &p_271->g_3;
    ++l_65;
    (*p_48) ^= (safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_76[1] != (void*)0) <= ((p_271->g_77 , ((*l_82) = (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(p_271->g_77.f0, 2)), p_50)))) <= ((p_271->g_8 & p_50) >= ((safe_sub_func_int32_t_s_s((248UL || p_271->g_3), l_86)) == 0xFD36L)))), 0x156DL)), 0x80B7L)) > p_50), p_50)), l_87));
    return p_271->g_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_271->g_62 p_271->g_3 p_271->g_8
 * writes: p_271->g_62
 */
int32_t * func_53(uint64_t  p_54, int64_t  p_55, int32_t  p_56, int32_t  p_57, int32_t * p_58, struct S1 * p_271)
{ /* block id: 9 */
    int32_t *l_61 = &p_271->g_62;
    (*l_61) = 0L;
    for (p_271->g_62 = (-18); (p_271->g_62 < (-25)); p_271->g_62 = safe_sub_func_uint32_t_u_u(p_271->g_62, 3))
    { /* block id: 13 */
        if ((*p_58))
            break;
    }
    (*l_61) = (+(*p_58));
    return l_61;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_272;
    struct S1* p_271 = &c_272;
    struct S1 c_273 = {
        (-1L), // p_271->g_3
        1L, // p_271->g_8
        0L, // p_271->g_62
        {0x9B8364B2CBD72F54L}, // p_271->g_77
        0x6D535453F201F9D9L, // p_271->g_83
        0xCAB5D99DD6BBCA57L, // p_271->g_107
        1L, // p_271->g_109
        0x0DD4D5FF68F1F7CCL, // p_271->g_110
        0x3EB14036L, // p_271->g_112
        (-7L), // p_271->g_113
        0x6A62F802L, // p_271->g_114
        0x76L, // p_271->g_115
        (void*)0, // p_271->g_119
        &p_271->g_119, // p_271->g_118
        4294967291UL, // p_271->g_120
        0x68E1L, // p_271->g_129
        (void*)0, // p_271->g_149
        &p_271->g_119, // p_271->g_150
        {{{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L}},{{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L}},{{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L}},{{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L}},{{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L},{0x86FEL,0UL,0x6952L,0x5EEDL,65535UL,0x8882L,65526UL,0xB201L}}}, // p_271->g_157
        0xCA5EL, // p_271->g_177
        &p_271->g_119, // p_271->g_207
        0x0B79297DL, // p_271->g_221
        0x2CL, // p_271->g_243
        (void*)0, // p_271->g_247
        0L, // p_271->g_252
        0x203054315FED4A6DL, // p_271->g_264
    };
    c_272 = c_273;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_271);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_271->g_3, "p_271->g_3", print_hash_value);
    transparent_crc(p_271->g_8, "p_271->g_8", print_hash_value);
    transparent_crc(p_271->g_62, "p_271->g_62", print_hash_value);
    transparent_crc(p_271->g_77.f0, "p_271->g_77.f0", print_hash_value);
    transparent_crc(p_271->g_83, "p_271->g_83", print_hash_value);
    transparent_crc(p_271->g_107, "p_271->g_107", print_hash_value);
    transparent_crc(p_271->g_109, "p_271->g_109", print_hash_value);
    transparent_crc(p_271->g_110, "p_271->g_110", print_hash_value);
    transparent_crc(p_271->g_112, "p_271->g_112", print_hash_value);
    transparent_crc(p_271->g_113, "p_271->g_113", print_hash_value);
    transparent_crc(p_271->g_114, "p_271->g_114", print_hash_value);
    transparent_crc(p_271->g_115, "p_271->g_115", print_hash_value);
    transparent_crc(p_271->g_120, "p_271->g_120", print_hash_value);
    transparent_crc(p_271->g_129, "p_271->g_129", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_271->g_157[i][j][k], "p_271->g_157[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_271->g_177, "p_271->g_177", print_hash_value);
    transparent_crc(p_271->g_221, "p_271->g_221", print_hash_value);
    transparent_crc(p_271->g_243, "p_271->g_243", print_hash_value);
    transparent_crc(p_271->g_252, "p_271->g_252", print_hash_value);
    transparent_crc(p_271->g_264, "p_271->g_264", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
