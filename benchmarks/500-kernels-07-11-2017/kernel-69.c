// -g 10,28,7 -l 1,14,7
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


// Seed: 2200818934

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int64_t  f0;
   volatile int16_t  f1;
   uint32_t  f2;
};

struct S1 {
    int32_t g_3;
    int32_t g_6;
    int16_t g_20;
    volatile int16_t g_24;
    volatile int16_t *g_23;
    int32_t g_40;
    volatile int32_t g_48;
    int16_t g_70;
    int32_t g_72;
    uint64_t g_76;
    int32_t g_114;
    int32_t *g_117;
    int32_t ** volatile g_125;
    int64_t g_132;
    int32_t ** volatile g_135;
    uint64_t g_153;
    union U0 g_157[2];
    uint8_t g_172;
    int16_t g_175;
    uint16_t g_177;
    uint16_t g_178;
    int16_t g_184;
    int32_t g_201[2][7];
    int32_t ** volatile g_202;
    int8_t g_208[8];
    volatile int16_t * volatile g_211;
    uint16_t g_236;
    uint32_t g_250;
    union U0 g_252;
    int8_t g_254[2][4][5];
    int8_t g_256;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S1 * p_295);
int8_t  func_7(int32_t ** p_8, int32_t * p_9, uint32_t  p_10, int32_t ** p_11, uint32_t  p_12, struct S1 * p_295);
int32_t ** func_13(int32_t  p_14, struct S1 * p_295);
int32_t * func_28(int32_t  p_29, uint8_t  p_30, int32_t  p_31, int8_t  p_32, int16_t * p_33, struct S1 * p_295);
int32_t  func_34(int32_t  p_35, int32_t * p_36, int16_t * p_37, int32_t * p_38, struct S1 * p_295);
int16_t * func_41(int32_t * p_42, struct S1 * p_295);
int32_t * func_43(int32_t  p_44, struct S1 * p_295);
int64_t  func_56(int32_t * p_57, uint16_t  p_58, int32_t * p_59, int8_t  p_60, int32_t  p_61, struct S1 * p_295);
uint64_t  func_66(int64_t  p_67, int16_t * p_68, struct S1 * p_295);
int64_t  func_83(int32_t  p_84, int32_t * p_85, uint8_t  p_86, struct S1 * p_295);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_295->g_3 p_295->g_6 p_295->g_236 p_295->g_20 p_295->g_252.f0 p_295->g_208 p_295->g_117 p_295->g_178 p_295->g_135 p_295->g_72
 * writes: p_295->g_3 p_295->g_6 p_295->g_236 p_295->g_20 p_295->g_252.f0 p_295->g_177 p_295->g_76 p_295->g_178 p_295->g_72
 */
int64_t  func_1(struct S1 * p_295)
{ /* block id: 4 */
    uint64_t l_2[3][2] = {{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}};
    int16_t *l_183 = &p_295->g_184;
    int32_t *l_185 = &p_295->g_6;
    int32_t **l_264 = &p_295->g_117;
    int i, j;
lbl_292:
    for (p_295->g_3 = 1; (p_295->g_3 >= 0); p_295->g_3 -= 1)
    { /* block id: 7 */
        int32_t *l_5 = (void*)0;
        int32_t **l_4 = &l_5;
        int16_t *l_25[1];
        uint32_t l_224 = 0xA0988E54L;
        int i;
        for (i = 0; i < 1; i++)
            l_25[i] = (void*)0;
        (*l_4) = (void*)0;
        for (p_295->g_6 = 0; (p_295->g_6 <= 1); p_295->g_6 += 1)
        { /* block id: 11 */
            int16_t *l_19 = &p_295->g_20;
            int32_t *l_39 = &p_295->g_40;
            int32_t *l_206[10][1];
            int8_t *l_207[1][8][6] = {{{&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],(void*)0,&p_295->g_208[7]},{&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],(void*)0,&p_295->g_208[7]},{&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],(void*)0,&p_295->g_208[7]},{&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],(void*)0,&p_295->g_208[7]},{&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],(void*)0,&p_295->g_208[7]},{&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],(void*)0,&p_295->g_208[7]},{&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],(void*)0,&p_295->g_208[7]},{&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],&p_295->g_208[7],(void*)0,&p_295->g_208[7]}}};
            uint32_t l_261 = 1UL;
            int i, j, k;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 1; j++)
                    l_206[i][j] = &p_295->g_3;
            }
            (1 + 1);
        }
    }
    for (p_295->g_236 = 0; (p_295->g_236 > 18); ++p_295->g_236)
    { /* block id: 143 */
        int32_t **l_280 = &p_295->g_117;
        for (p_295->g_20 = 0; (p_295->g_20 <= 7); p_295->g_20 += 1)
        { /* block id: 146 */
            int64_t *l_277 = &p_295->g_252.f0;
            uint16_t *l_283 = &p_295->g_177;
            uint64_t *l_286[5][1] = {{&p_295->g_76},{&p_295->g_76},{&p_295->g_76},{&p_295->g_76},{&p_295->g_76}};
            int32_t l_291[9][10][2] = {{{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L}},{{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L}},{{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L}},{{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L}},{{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L}},{{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L}},{{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L}},{{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L}},{{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L},{1L,0x2E1F2AC8L}}};
            int i, j, k;
            (**l_280) ^= (((*l_277) ^= 0x3F8854D64D8A8CEDL) != (p_295->g_208[p_295->g_20] != (&p_295->g_117 != l_280)));
            l_291[1][3][0] = ((*l_185) = ((**l_280) = ((p_295->g_208[p_295->g_20] | (safe_rshift_func_uint16_t_u_s(((*l_283) = p_295->g_236), 3))) & (&p_295->g_236 != (((0L && ((safe_add_func_uint64_t_u_u((p_295->g_76 = (&p_295->g_117 == &p_295->g_117)), ((**l_280) != 4294967295UL))) , (safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(4294967295UL, (**l_280))), 1)))) <= 5UL) , (void*)0)))));
        }
        return (**l_264);
    }
    if (p_295->g_3)
        goto lbl_292;
    for (p_295->g_178 = 26; (p_295->g_178 == 56); p_295->g_178++)
    { /* block id: 160 */
        p_295->g_72 &= ((**l_264) = ((*l_185) ^= (**p_295->g_135)));
    }
    return p_295->g_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_295->g_153 p_295->g_117 p_295->g_202 p_295->g_236 p_295->g_208 p_295->g_72 p_295->g_3 p_295->g_70 p_295->g_172 p_295->g_157.f0 p_295->g_250 p_295->g_76 p_295->g_20 p_295->g_252 p_295->g_254
 * writes: p_295->g_153 p_295->g_72 p_295->g_172 p_295->g_250 p_295->g_175 p_295->g_208 p_295->g_254 p_295->g_256
 */
int8_t  func_7(int32_t ** p_8, int32_t * p_9, uint32_t  p_10, int32_t ** p_11, uint32_t  p_12, struct S1 * p_295)
{ /* block id: 116 */
    uint64_t *l_231 = &p_295->g_153;
    uint16_t *l_241 = &p_295->g_236;
    int32_t *l_242 = &p_295->g_3;
    uint16_t *l_243[10][8][2] = {{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}},{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}},{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}},{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}},{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}},{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}},{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}},{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}},{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}},{{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236},{&p_295->g_236,&p_295->g_236}}};
    uint8_t *l_246 = (void*)0;
    uint8_t *l_247 = &p_295->g_172;
    int32_t l_248[1];
    uint32_t *l_249 = &p_295->g_250;
    int16_t *l_251[9][10] = {{(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0,(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0},{(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0,(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0},{(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0,(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0},{(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0,(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0},{(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0,(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0},{(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0,(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0},{(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0,(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0},{(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0,(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0},{(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0,(void*)0,&p_295->g_20,&p_295->g_184,&p_295->g_20,(void*)0}};
    int8_t *l_253 = &p_295->g_254[1][3][1];
    int8_t *l_255 = &p_295->g_256;
    int32_t l_257 = 0x6B3A4488L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_248[i] = (-7L);
    l_257 = (safe_mul_func_int8_t_s_s(((*l_255) = ((*l_253) |= (((((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u(((*l_231)++), 0x3163B82698C18C88L)) <= ((safe_add_func_int64_t_s_s(((+((*p_8) != (*p_295->g_202))) < p_295->g_236), ((p_295->g_208[0] = (((p_295->g_175 = ((((*l_249) &= (safe_lshift_func_uint8_t_u_s((l_248[0] = (p_295->g_208[6] || (safe_add_func_uint16_t_u_u(((l_241 = l_241) != (l_243[5][7][1] = func_41(l_242, p_295))), (safe_lshift_func_uint8_t_u_s(((*l_247) |= ((*l_242) > p_295->g_70)), p_295->g_157[1].f0)))))), 2))) , (void*)0) != (void*)0)) <= p_295->g_157[1].f0) >= p_295->g_157[1].f0)) , (*l_242)))) == p_295->g_76)), 14)) <= p_295->g_20) || (*l_242)) , p_295->g_252) , p_295->g_250))), 248UL));
    return p_295->g_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_295->g_211 p_295->g_208 p_295->g_172 p_295->g_117 p_295->g_72 p_295->g_3 p_295->g_153 p_295->g_178 p_295->g_132 p_295->g_76
 * writes: p_295->g_117 p_295->g_201
 */
int32_t ** func_13(int32_t  p_14, struct S1 * p_295)
{ /* block id: 103 */
    uint64_t l_212 = 7UL;
    int32_t l_217 = 4L;
    uint32_t l_218 = 0x99CA2A99L;
    int32_t **l_219 = &p_295->g_117;
    int32_t *l_220[4];
    int32_t **l_223 = &p_295->g_117;
    int i;
    for (i = 0; i < 4; i++)
        l_220[i] = &p_295->g_201[1][4];
    l_217 = (0x45770A46L > (p_14 <= (((l_218 = (((((0x10432EA9840A54B7L != (+(p_14 <= (&p_295->g_70 != p_295->g_211)))) & ((((l_212 = p_295->g_208[7]) | (((safe_mod_func_int64_t_s_s((p_295->g_172 || ((safe_lshift_func_int16_t_s_u((-4L), 13)) != (*p_295->g_117))), 0xCDDD8CA945547A38L)) | l_217) && l_217)) < p_14) , 0L)) & l_217) & p_14) ^ p_14)) ^ p_295->g_153) || 0x5BB4L)));
    (*l_219) = (void*)0;
    if ((((p_295->g_201[1][0] = (p_14 = p_295->g_178)) , p_295->g_132) < p_295->g_76))
    { /* block id: 110 */
        uint16_t l_221 = 1UL;
        int32_t *l_222 = &l_217;
        (*l_222) ^= l_221;
    }
    else
    { /* block id: 112 */
        return l_223;
    }
    return l_219;
}


/* ------------------------------------------ */
/* 
 * reads : p_295->g_135 p_295->g_117
 * writes: p_295->g_114
 */
int32_t * func_28(int32_t  p_29, uint8_t  p_30, int32_t  p_31, int8_t  p_32, int16_t * p_33, struct S1 * p_295)
{ /* block id: 98 */
    int32_t *l_205[10][2] = {{&p_295->g_72,&p_295->g_72},{&p_295->g_72,&p_295->g_72},{&p_295->g_72,&p_295->g_72},{&p_295->g_72,&p_295->g_72},{&p_295->g_72,&p_295->g_72},{&p_295->g_72,&p_295->g_72},{&p_295->g_72,&p_295->g_72},{&p_295->g_72,&p_295->g_72},{&p_295->g_72,&p_295->g_72},{&p_295->g_72,&p_295->g_72}};
    int i, j;
    p_31 = ((safe_div_func_int32_t_s_s((p_295->g_114 = (-5L)), p_32)) && (p_30 <= p_29));
    return (*p_295->g_135);
}


/* ------------------------------------------ */
/* 
 * reads : p_295->g_117 p_295->g_72 p_295->g_3 p_295->g_157 p_295->g_172 p_295->g_157.f0 p_295->g_132 p_295->g_184 p_295->g_201 p_295->g_48 p_295->g_40 p_295->g_70 p_295->g_23 p_295->g_24 p_295->g_6 p_295->g_76 p_295->g_114 p_295->g_125 p_295->g_135 p_295->g_178 p_295->g_202
 * writes: p_295->g_172 p_295->g_201 p_295->g_40 p_295->g_72 p_295->g_76 p_295->g_48 p_295->g_70 p_295->g_114 p_295->g_117 p_295->g_132 p_295->g_175 p_295->g_177 p_295->g_178
 */
int32_t  func_34(int32_t  p_35, int32_t * p_36, int16_t * p_37, int32_t * p_38, struct S1 * p_295)
{ /* block id: 92 */
    int32_t l_186 = (-4L);
    uint64_t *l_187[9] = {&p_295->g_76,&p_295->g_76,&p_295->g_76,&p_295->g_76,&p_295->g_76,&p_295->g_76,&p_295->g_76,&p_295->g_76,&p_295->g_76};
    int32_t l_192 = (-7L);
    int32_t l_199 = (-10L);
    int32_t *l_200 = &p_295->g_201[1][3];
    int i;
    (*p_295->g_202) = func_43(((*l_200) ^= (((l_186 = (*p_295->g_117)) | ((p_295->g_157[1] , l_187[4]) == (void*)0)) < (p_295->g_172 = ((safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(p_295->g_72, l_192)) <= 0x4BC6AF4CL), (p_295->g_172 , (safe_lshift_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((safe_div_func_uint8_t_u_u((p_295->g_157[1].f0 , 0xE1L), p_295->g_132)), p_295->g_184)) , 1L), l_199))))) , p_295->g_184)))), p_295);
    return p_295->g_114;
}


/* ------------------------------------------ */
/* 
 * reads : p_295->g_72
 * writes: p_295->g_72
 */
int16_t * func_41(int32_t * p_42, struct S1 * p_295)
{ /* block id: 89 */
    int32_t *l_182 = &p_295->g_72;
    (*l_182) ^= 0x3B5C28C5L;
    return &p_295->g_175;
}


/* ------------------------------------------ */
/* 
 * reads : p_295->g_48 p_295->g_3 p_295->g_40 p_295->g_70 p_295->g_23 p_295->g_24 p_295->g_6 p_295->g_72 p_295->g_76 p_295->g_114 p_295->g_117 p_295->g_125 p_295->g_135 p_295->g_132 p_295->g_157 p_295->g_178
 * writes: p_295->g_40 p_295->g_72 p_295->g_76 p_295->g_48 p_295->g_70 p_295->g_114 p_295->g_117 p_295->g_132 p_295->g_172 p_295->g_175 p_295->g_177 p_295->g_178
 */
int32_t * func_43(int32_t  p_44, struct S1 * p_295)
{ /* block id: 14 */
    int32_t *l_45 = (void*)0;
    int32_t *l_46 = (void*)0;
    int32_t *l_47[9][1];
    uint32_t l_49 = 0x584125DBL;
    int16_t *l_69 = &p_295->g_70;
    int64_t *l_158 = &p_295->g_132;
    int32_t *l_179 = &p_295->g_72;
    int32_t l_181 = 0x4F36308BL;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_47[i][j] = (void*)0;
    }
    --l_49;
    for (l_49 = 0; (l_49 >= 13); ++l_49)
    { /* block id: 18 */
        int32_t *l_63 = &p_295->g_40;
        int32_t l_115[3][4][1] = {{{0x296CD894L},{0x296CD894L},{0x296CD894L},{0x296CD894L}},{{0x296CD894L},{0x296CD894L},{0x296CD894L},{0x296CD894L}},{{0x296CD894L},{0x296CD894L},{0x296CD894L},{0x296CD894L}}};
        uint64_t *l_152[5];
        uint32_t l_173 = 4294967295UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_152[i] = &p_295->g_153;
        for (p_295->g_40 = 0; (p_295->g_40 > 22); p_295->g_40 = safe_add_func_int16_t_s_s(p_295->g_40, 4))
        { /* block id: 21 */
            int32_t *l_62[2][5];
            uint64_t *l_75 = &p_295->g_76;
            int32_t l_116 = 0x39A73505L;
            int64_t l_133 = 0x55DB8EE5A8B3B0CBL;
            int32_t **l_180[3][7][6] = {{{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45}},{{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45}},{{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45},{&p_295->g_117,&l_45,&l_47[7][0],&l_45,&p_295->g_117,&l_45}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_62[i][j] = (void*)0;
            }
            l_116 |= (l_115[2][1][0] = (func_56(l_62[0][1], p_295->g_48, &p_295->g_6, (((&p_295->g_40 != l_63) || ((*l_75) = (safe_div_func_int32_t_s_s((func_66(p_44, l_69, p_295) , (safe_rshift_func_uint16_t_u_s(0xF84BL, 7))), p_44)))) == p_295->g_40), p_295->g_70, p_295) , 0x26F4C769L));
            if (l_116)
            { /* block id: 44 */
                return p_295->g_117;
            }
            else
            { /* block id: 46 */
                int8_t l_136 = 0x0FL;
                int32_t l_154 = 0L;
                for (p_44 = (-29); (p_44 <= 3); p_44 = safe_add_func_int8_t_s_s(p_44, 1))
                { /* block id: 49 */
                    int32_t *l_123 = &p_295->g_6;
                    if ((&p_295->g_40 != (void*)0))
                    { /* block id: 50 */
                        uint64_t l_120 = 18446744073709551615UL;
                        int32_t **l_124 = &l_47[2][0];
                        l_120++;
                        (*l_124) = l_123;
                    }
                    else
                    { /* block id: 53 */
                        int32_t *l_134 = &l_115[2][1][0];
                        (*p_295->g_125) = &p_295->g_72;
                        l_133 = (safe_add_func_int16_t_s_s((((((((p_295->g_3 & (safe_rshift_func_int8_t_s_u(l_115[1][0][0], 3))) & (p_44 , l_116)) ^ (p_44 , ((safe_div_func_int64_t_s_s((p_295->g_132 = ((7L >= ((-1L) || (-1L))) <= (+0x2981A8B4L))), p_44)) < l_115[2][1][0]))) ^ p_44) , p_44) > 4294967295UL) > p_295->g_40), (*p_295->g_23)));
                        (*p_295->g_135) = l_134;
                    }
                }
                l_136 |= (*p_295->g_117);
                for (l_116 = 0; (l_116 >= (-15)); --l_116)
                { /* block id: 63 */
                    int8_t *l_159 = (void*)0;
                    int8_t *l_160 = &l_136;
                    uint8_t *l_171 = &p_295->g_172;
                    int16_t *l_174 = &p_295->g_175;
                    uint16_t *l_176 = &p_295->g_177;
                    for (p_295->g_70 = 0; (p_295->g_70 >= 16); p_295->g_70++)
                    { /* block id: 66 */
                        int64_t *l_144 = &p_295->g_132;
                        int32_t l_150[3];
                        uint64_t **l_151[10][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_150[i] = 0x7CE87808L;
                        l_154 = (((p_295->g_24 , ((l_152[4] = ((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s(((((*l_144) |= p_295->g_114) , &p_295->g_40) != l_63))), 2)) , ((((-8L) < ((*l_144) = ((((safe_add_func_uint64_t_u_u(((*l_75) |= 18446744073709551612UL), (l_115[2][3][0] = ((p_44 ^ (safe_unary_minus_func_int64_t_s(p_44))) != ((safe_div_func_int8_t_s_s((((+(*p_295->g_23)) , 0xF6D5B129L) != p_44), p_44)) && l_150[2]))))) , (void*)0) == (void*)0) != 5L))) >= p_295->g_70) , l_144))) != (void*)0)) , &p_295->g_153) == l_75);
                    }
                    p_295->g_178 ^= ((safe_rshift_func_int8_t_s_u(((*l_160) = (p_295->g_157[1] , (l_136 == ((void*)0 == l_158)))), 6)) || (((*l_176) = ((l_133 == 0xB0C0EAC7L) ^ (safe_lshift_func_int16_t_s_s((l_154 = (safe_rshift_func_int16_t_s_s(((*l_174) = (safe_add_func_int16_t_s_s((((*l_69) = (safe_mod_func_uint8_t_u_u((p_295->g_70 , (((safe_rshift_func_uint8_t_u_u(p_295->g_132, ((*l_171) = 1UL))) , p_295->g_6) >= 0x4CL)), p_295->g_48))) || l_173), p_44))), 14))), l_136)))) | l_116));
                }
            }
            (*p_295->g_135) = l_179;
        }
        (*l_179) ^= ((void*)0 == l_152[2]);
    }
    (*l_179) &= l_181;
    return (*p_295->g_135);
}


/* ------------------------------------------ */
/* 
 * reads : p_295->g_23 p_295->g_24 p_295->g_40 p_295->g_6 p_295->g_70 p_295->g_72 p_295->g_3 p_295->g_48 p_295->g_76 p_295->g_114
 * writes: p_295->g_72 p_295->g_48 p_295->g_70 p_295->g_114
 */
int64_t  func_56(int32_t * p_57, uint16_t  p_58, int32_t * p_59, int8_t  p_60, int32_t  p_61, struct S1 * p_295)
{ /* block id: 26 */
    uint32_t l_95 = 0xF6A0F30BL;
    int32_t *l_106 = &p_295->g_72;
    int16_t *l_111 = (void*)0;
    int16_t *l_112 = &p_295->g_70;
    int32_t *l_113 = &p_295->g_114;
    for (p_60 = (-24); (p_60 == 18); p_60++)
    { /* block id: 29 */
        int64_t l_97 = 0x72D060950C43CAE2L;
        int32_t **l_98[4];
        int32_t *l_101 = &p_295->g_3;
        int32_t **l_100 = &l_101;
        int32_t ***l_99 = &l_100;
        int i;
        for (i = 0; i < 4; i++)
            l_98[i] = (void*)0;
        p_295->g_48 = (p_61 = (p_295->g_72 = (((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((*p_295->g_23), ((func_83((((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((p_295->g_40 != (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_95, (safe_unary_minus_func_uint32_t_u(l_97)))), p_295->g_6))), ((~(l_98[3] != ((*l_99) = &p_59))) || (safe_lshift_func_int8_t_s_u((p_295->g_70 & (safe_unary_minus_func_uint8_t_u(0xD5L))), p_295->g_6))))) <= 0xFA27L), 0)) ^ (*p_59)) , 0x3A5642BEL), &p_295->g_6, p_60, p_295) , l_95) == p_295->g_72))), 3)) == 0L) || p_295->g_3)));
        return p_58;
    }
    (*l_113) |= ((((p_295->g_6 >= (((void*)0 != &p_295->g_24) <= ((*l_106) = 8L))) ^ (safe_div_func_int16_t_s_s(((*l_112) = ((p_295->g_48 & (safe_unary_minus_func_int8_t_s(((p_295->g_3 == (safe_unary_minus_func_int16_t_s(((((*p_59) < ((0x0DD5L ^ ((((&p_295->g_40 != (void*)0) != 1L) , p_295->g_76) != 1L)) & p_295->g_40)) != (*p_59)) , 0x66AFL)))) == (*p_59))))) & 0x4C5BL)), p_60))) , p_58) || (-5L));
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_295->g_3
 * writes: p_295->g_72
 */
uint64_t  func_66(int64_t  p_67, int16_t * p_68, struct S1 * p_295)
{ /* block id: 22 */
    int32_t *l_71 = &p_295->g_72;
    (*l_71) = 0x707ECB51L;
    return p_295->g_3;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_83(int32_t  p_84, int32_t * p_85, uint8_t  p_86, struct S1 * p_295)
{ /* block id: 31 */
    int8_t l_105 = 0L;
    return l_105;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_296;
    struct S1* p_295 = &c_296;
    struct S1 c_297 = {
        0x46721591L, // p_295->g_3
        0x5FCC58A0L, // p_295->g_6
        0L, // p_295->g_20
        (-9L), // p_295->g_24
        &p_295->g_24, // p_295->g_23
        0x2BA4A2C6L, // p_295->g_40
        9L, // p_295->g_48
        1L, // p_295->g_70
        0x5CD23E82L, // p_295->g_72
        0xD44351D5E8E05992L, // p_295->g_76
        (-10L), // p_295->g_114
        &p_295->g_3, // p_295->g_117
        &p_295->g_117, // p_295->g_125
        8L, // p_295->g_132
        &p_295->g_117, // p_295->g_135
        0xBF6126C60711D43FL, // p_295->g_153
        {{0x3497D78ABA538469L},{0x3497D78ABA538469L}}, // p_295->g_157
        0xA7L, // p_295->g_172
        0x7437L, // p_295->g_175
        0x0663L, // p_295->g_177
        65534UL, // p_295->g_178
        (-1L), // p_295->g_184
        {{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L}}, // p_295->g_201
        &p_295->g_117, // p_295->g_202
        {0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL}, // p_295->g_208
        &p_295->g_24, // p_295->g_211
        5UL, // p_295->g_236
        0xB8976AF4L, // p_295->g_250
        {0x1D43E14E9EA8A35CL}, // p_295->g_252
        {{{(-3L),1L,0x0DL,0L,0x0DL},{(-3L),1L,0x0DL,0L,0x0DL},{(-3L),1L,0x0DL,0L,0x0DL},{(-3L),1L,0x0DL,0L,0x0DL}},{{(-3L),1L,0x0DL,0L,0x0DL},{(-3L),1L,0x0DL,0L,0x0DL},{(-3L),1L,0x0DL,0L,0x0DL},{(-3L),1L,0x0DL,0L,0x0DL}}}, // p_295->g_254
        1L, // p_295->g_256
    };
    c_296 = c_297;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_295);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_295->g_3, "p_295->g_3", print_hash_value);
    transparent_crc(p_295->g_6, "p_295->g_6", print_hash_value);
    transparent_crc(p_295->g_20, "p_295->g_20", print_hash_value);
    transparent_crc(p_295->g_24, "p_295->g_24", print_hash_value);
    transparent_crc(p_295->g_40, "p_295->g_40", print_hash_value);
    transparent_crc(p_295->g_48, "p_295->g_48", print_hash_value);
    transparent_crc(p_295->g_70, "p_295->g_70", print_hash_value);
    transparent_crc(p_295->g_72, "p_295->g_72", print_hash_value);
    transparent_crc(p_295->g_76, "p_295->g_76", print_hash_value);
    transparent_crc(p_295->g_114, "p_295->g_114", print_hash_value);
    transparent_crc(p_295->g_132, "p_295->g_132", print_hash_value);
    transparent_crc(p_295->g_153, "p_295->g_153", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_295->g_157[i].f0, "p_295->g_157[i].f0", print_hash_value);

    }
    transparent_crc(p_295->g_172, "p_295->g_172", print_hash_value);
    transparent_crc(p_295->g_175, "p_295->g_175", print_hash_value);
    transparent_crc(p_295->g_177, "p_295->g_177", print_hash_value);
    transparent_crc(p_295->g_178, "p_295->g_178", print_hash_value);
    transparent_crc(p_295->g_184, "p_295->g_184", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_295->g_201[i][j], "p_295->g_201[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_295->g_208[i], "p_295->g_208[i]", print_hash_value);

    }
    transparent_crc(p_295->g_236, "p_295->g_236", print_hash_value);
    transparent_crc(p_295->g_250, "p_295->g_250", print_hash_value);
    transparent_crc(p_295->g_252.f0, "p_295->g_252.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_295->g_254[i][j][k], "p_295->g_254[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_295->g_256, "p_295->g_256", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
