// -g 33,74,2 -l 1,37,2
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


// Seed: 968098337

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_15;
    int16_t g_25;
    uint8_t g_27[2][2][6];
    volatile int32_t g_60[5][2];
    volatile int32_t g_61;
    volatile int32_t g_62;
    volatile int32_t g_63;
    int32_t g_64[5];
    int32_t *g_108;
    int32_t ** volatile g_107;
    uint8_t g_118;
    int8_t g_122;
    int32_t g_127[4];
    int32_t * volatile g_126;
    uint32_t g_129;
    int32_t g_151;
    uint8_t *g_158;
    int16_t g_179;
    int16_t g_181[8][2][10];
    int8_t g_231;
    int32_t *g_236;
    int32_t **g_235;
    int16_t *g_245;
    int16_t *g_249;
    uint64_t g_260;
    int32_t g_266;
    int32_t g_267;
    int32_t *** volatile g_274;
    int64_t g_280;
    int8_t g_308[8];
    int16_t **g_314;
    int16_t *** volatile g_313;
    int16_t *** volatile g_315;
    volatile uint16_t g_347;
    int16_t g_361;
    uint64_t g_362;
    int32_t g_394;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S0 * p_395);
int32_t * func_2(int8_t  p_3, int32_t * p_4, struct S0 * p_395);
uint16_t  func_12(int8_t  p_13, int32_t * p_14, struct S0 * p_395);
int32_t ** func_16(int32_t  p_17, int32_t  p_18, int64_t  p_19, struct S0 * p_395);
int32_t ** func_38(uint8_t * p_39, int32_t ** p_40, int32_t  p_41, int32_t ** p_42, int8_t  p_43, struct S0 * p_395);
uint8_t * func_44(int32_t  p_45, int8_t  p_46, uint8_t * p_47, struct S0 * p_395);
uint8_t * func_49(uint8_t  p_50, uint32_t  p_51, struct S0 * p_395);
uint8_t  func_52(uint8_t * p_53, struct S0 * p_395);
uint8_t * func_54(int32_t  p_55, struct S0 * p_395);
int32_t  func_67(int32_t ** p_68, struct S0 * p_395);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_395->g_15 p_395->g_25 p_395->g_27 p_395->g_64 p_395->g_107 p_395->g_108 p_395->g_151 p_395->g_158 p_395->g_126 p_395->g_127 p_395->g_235 p_395->g_118 p_395->g_61 p_395->g_181 p_395->g_260 p_395->g_179 p_395->g_267 p_395->g_122 p_395->g_249 p_395->g_308 p_395->g_236 p_395->g_129 p_395->g_313 p_395->g_315 p_395->g_60 p_395->g_62 p_395->g_347 p_395->g_280 p_395->g_362 p_395->g_266 p_395->g_231 p_395->g_394 p_395->g_314
 * writes: p_395->g_15 p_395->g_64 p_395->g_108 p_395->g_151 p_395->g_122 p_395->g_231 p_395->g_245 p_395->g_249 p_395->g_27 p_395->g_260 p_395->g_236 p_395->g_235 p_395->g_129 p_395->g_267 p_395->g_179 p_395->g_25 p_395->g_308 p_395->g_314 p_395->g_280 p_395->g_347 p_395->g_181 p_395->g_362 p_395->g_118 p_395->g_127
 */
uint16_t  func_1(struct S0 * p_395)
{ /* block id: 4 */
    int32_t l_11[4];
    int8_t *l_306 = (void*)0;
    int8_t *l_307 = &p_395->g_308[3];
    int32_t **l_374 = &p_395->g_236;
    uint64_t l_393 = 1UL;
    int i;
    for (i = 0; i < 4; i++)
        l_11[i] = (-10L);
    (*l_374) = func_2((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((-1L), 1UL)), 0)), ((safe_mul_func_int8_t_s_s(((*l_307) &= ((-1L) == (l_11[0] == func_12(p_395->g_15, &l_11[0], p_395)))), (l_11[0] > 8L))) , (*p_395->g_235)), p_395);
    (*l_374) = ((safe_sub_func_int64_t_s_s(p_395->g_362, (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((2UL <= (((((*p_395->g_108) = (safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s((3L || 0x56F24C86L), ((safe_add_func_uint64_t_u_u(((((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((*p_395->g_158), 0x60L)) || ((safe_add_func_int8_t_s_s(p_395->g_266, 9L)) < (p_395->g_280 != l_393))), 3)) , p_395->g_231) , l_393) && p_395->g_394), l_393)) & 0L))) , (**p_395->g_314)), p_395->g_15))) > p_395->g_27[0][0][2]) , (void*)0) == (void*)0)), p_395->g_15)), 255UL)))) , (void*)0);
    return p_395->g_60[0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_129 p_395->g_313 p_395->g_315 p_395->g_267 p_395->g_60 p_395->g_108 p_395->g_64 p_395->g_151 p_395->g_308 p_395->g_127 p_395->g_62 p_395->g_347 p_395->g_235 p_395->g_280 p_395->g_158 p_395->g_362 p_395->g_15 p_395->g_118 p_395->g_260 p_395->g_107 p_395->g_126 p_395->g_236
 * writes: p_395->g_129 p_395->g_314 p_395->g_267 p_395->g_64 p_395->g_151 p_395->g_280 p_395->g_347 p_395->g_236 p_395->g_308 p_395->g_181 p_395->g_27 p_395->g_362 p_395->g_118 p_395->g_127
 */
int32_t * func_2(int8_t  p_3, int32_t * p_4, struct S0 * p_395)
{ /* block id: 129 */
    int16_t **l_311 = &p_395->g_249;
    int32_t l_336 = (-1L);
    for (p_395->g_129 = 0; (p_395->g_129 < 39); p_395->g_129++)
    { /* block id: 132 */
        int16_t ***l_312 = (void*)0;
        int32_t *l_318 = &p_395->g_127[1];
        uint16_t l_332 = 0x4EDEL;
        int32_t l_343 = 9L;
        int32_t **l_373 = (void*)0;
        (*p_395->g_313) = l_311;
        (*p_395->g_315) = l_311;
        for (p_395->g_267 = 1; (p_395->g_267 >= 0); p_395->g_267 -= 1)
        { /* block id: 137 */
            int32_t **l_316[9][8] = {{&p_395->g_108,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_108,&p_395->g_236},{&p_395->g_108,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_108,&p_395->g_236},{&p_395->g_108,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_108,&p_395->g_236},{&p_395->g_108,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_108,&p_395->g_236},{&p_395->g_108,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_108,&p_395->g_236},{&p_395->g_108,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_108,&p_395->g_236},{&p_395->g_108,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_108,&p_395->g_236},{&p_395->g_108,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_108,&p_395->g_236},{&p_395->g_108,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_236,&p_395->g_108,&p_395->g_108,&p_395->g_236}};
            int32_t **l_317[9];
            int32_t l_335 = (-1L);
            int i, j;
            for (i = 0; i < 9; i++)
                l_317[i] = &p_395->g_108;
            l_317[7] = l_316[1][0];
            (*p_395->g_108) ^= p_395->g_60[(p_395->g_267 + 1)][p_395->g_267];
            p_4 = l_318;
            for (p_395->g_151 = 1; (p_395->g_151 >= 0); p_395->g_151 -= 1)
            { /* block id: 143 */
                uint64_t *l_325[4][8] = {{&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260},{&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260},{&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260},{&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260,&p_395->g_260}};
                uint64_t l_331 = 0x4A37D489A5C862C7L;
                int32_t l_337 = (-3L);
                int32_t l_338 = 1L;
                int32_t l_341 = (-1L);
                int i, j;
                for (p_395->g_280 = 0; (p_395->g_280 <= 1); p_395->g_280 += 1)
                { /* block id: 146 */
                    uint64_t *l_326 = &p_395->g_260;
                    int32_t l_340 = 0L;
                    int32_t l_345[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_345[i] = 0x3CA2B792L;
                    if (((!(safe_div_func_int64_t_s_s(((p_395->g_308[(p_395->g_151 + 1)] , 0x46589544L) > p_395->g_308[(p_395->g_151 + 1)]), ((safe_mul_func_uint16_t_u_u((*l_318), ((safe_mod_func_uint16_t_u_u((l_325[2][3] == l_326), 0x2446L)) > (safe_div_func_int64_t_s_s(p_3, (safe_div_func_int8_t_s_s(((p_395->g_62 != l_331) , (-4L)), p_3))))))) , 0x4639BB6E73D4B730L)))) ^ p_3))
                    { /* block id: 147 */
                        int8_t l_339 = 0L;
                        int32_t l_342 = 1L;
                        int32_t l_344 = 1L;
                        int32_t l_346 = 2L;
                        l_332++;
                        if (l_335)
                            break;
                        p_395->g_347--;
                        (*p_395->g_235) = p_4;
                    }
                    else
                    { /* block id: 152 */
                        uint16_t *l_359 = (void*)0;
                        uint16_t *l_360[9] = {(void*)0,&l_332,(void*)0,(void*)0,&l_332,(void*)0,(void*)0,&l_332,(void*)0};
                        int32_t l_371 = 1L;
                        uint8_t *l_372 = &p_395->g_118;
                        int i, j, k;
                        (*l_318) = (((p_395->g_308[(p_395->g_267 + 1)] = (65533UL == p_3)) || (0xECL > p_3)) || (((((((*l_372) &= (safe_unary_minus_func_uint32_t_u((((safe_sub_func_int8_t_s_s((0x69L || ((*p_395->g_158) = (safe_lshift_func_int16_t_s_u((p_395->g_181[(p_395->g_280 + 4)][p_395->g_267][(p_395->g_151 + 8)] = 0x0ABCL), 14)))), (safe_mod_func_int16_t_s_s((((((safe_lshift_func_uint16_t_u_u(((l_345[6] = (p_395->g_362--)) | (~(safe_mod_func_int16_t_s_s((l_371 = (((safe_rshift_func_int8_t_s_u(p_395->g_151, ((safe_mul_func_uint16_t_u_u((((((-3L) != (p_395->g_129 & p_3)) <= l_336) || 0x09A3DEADA3C97FF4L) & p_3), 65532UL)) && p_395->g_151))) < p_3) & p_3)), 4UL)))), 5)) == l_340) ^ p_395->g_60[0][1]) || (-8L)) , p_3), p_3)))) == l_336) & p_395->g_15)))) | p_395->g_260) & p_3) , l_341) != (*l_318)) ^ 0x47360C20L));
                        (*p_395->g_235) = &l_340;
                    }
                    (*p_395->g_235) = p_4;
                    (*p_395->g_108) &= (*p_4);
                }
                l_336 = ((**p_395->g_107) = ((*l_318) = (*p_4)));
                for (l_337 = 3; (l_337 >= 0); l_337 -= 1)
                { /* block id: 171 */
                    for (l_335 = 0; (l_335 <= 1); l_335 += 1)
                    { /* block id: 174 */
                        (*p_395->g_235) = ((l_373 != (void*)0) , p_4);
                    }
                }
            }
        }
        (*l_318) = (*p_395->g_126);
    }
    return (*p_395->g_235);
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_25 p_395->g_15 p_395->g_27 p_395->g_64 p_395->g_107 p_395->g_108 p_395->g_151 p_395->g_158 p_395->g_126 p_395->g_127 p_395->g_235 p_395->g_118 p_395->g_61 p_395->g_181 p_395->g_260 p_395->g_179 p_395->g_267 p_395->g_122 p_395->g_249
 * writes: p_395->g_15 p_395->g_64 p_395->g_108 p_395->g_151 p_395->g_122 p_395->g_231 p_395->g_245 p_395->g_249 p_395->g_27 p_395->g_260 p_395->g_236 p_395->g_235 p_395->g_129 p_395->g_267 p_395->g_179 p_395->g_25
 */
uint16_t  func_12(int8_t  p_13, int32_t * p_14, struct S0 * p_395)
{ /* block id: 5 */
    uint8_t *l_26[6][2][1] = {{{&p_395->g_27[1][1][3]},{&p_395->g_27[1][1][3]}},{{&p_395->g_27[1][1][3]},{&p_395->g_27[1][1][3]}},{{&p_395->g_27[1][1][3]},{&p_395->g_27[1][1][3]}},{{&p_395->g_27[1][1][3]},{&p_395->g_27[1][1][3]}},{{&p_395->g_27[1][1][3]},{&p_395->g_27[1][1][3]}},{{&p_395->g_27[1][1][3]},{&p_395->g_27[1][1][3]}}};
    int32_t l_28 = (-1L);
    int32_t **l_37 = (void*)0;
    int8_t *l_48 = &p_395->g_15;
    uint32_t *l_263 = (void*)0;
    uint32_t *l_264 = &p_395->g_129;
    int32_t *l_265[7] = {&p_395->g_127[2],&p_395->g_266,&p_395->g_127[2],&p_395->g_127[2],&p_395->g_266,&p_395->g_127[2],&p_395->g_127[2]};
    int32_t ***l_272 = (void*)0;
    int32_t ***l_273 = (void*)0;
    int16_t l_285 = 0x4B14L;
    uint8_t l_303 = 0x60L;
    int i, j, k;
    l_37 = func_16((*p_14), (safe_unary_minus_func_int64_t_s((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((l_28 = p_395->g_25) != (safe_sub_func_int32_t_s_s(((p_395->g_25 , (p_13 & ((safe_mod_func_int32_t_s_s((p_395->g_267 |= (0x0B6FB96FL <= ((*l_264) = (((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((l_37 != (p_395->g_235 = func_38(func_44(p_13, ((*l_48) = p_395->g_15), func_49(func_52(func_54((((safe_lshift_func_int8_t_s_u(p_395->g_27[0][1][2], 0)) == p_13) < p_13), p_395), p_395), p_13, p_395), p_395), p_395->g_235, p_395->g_118, &p_395->g_236, p_13, p_395))), p_395->g_127[1])), p_13)) == 0x576698BAL) >= p_395->g_181[1][1][6]) , 0x8FC48C961F2527ABL) , 0xFBEA9577L)))), (*p_14))) || 0x2E75L))) , (**p_395->g_107)), (-1L)))), 0)), 0x41647D06EC2E3FE0L)))), p_395->g_181[1][1][6], p_395);
    for (p_395->g_179 = (-9); (p_395->g_179 >= 10); p_395->g_179 = safe_add_func_int32_t_s_s(p_395->g_179, 2))
    { /* block id: 118 */
        int64_t *l_279[3][7] = {{&p_395->g_280,(void*)0,&p_395->g_280,(void*)0,&p_395->g_280,&p_395->g_280,(void*)0},{&p_395->g_280,(void*)0,&p_395->g_280,(void*)0,&p_395->g_280,&p_395->g_280,(void*)0},{&p_395->g_280,(void*)0,&p_395->g_280,(void*)0,&p_395->g_280,&p_395->g_280,(void*)0}};
        int32_t l_281 = 0x5538BD61L;
        int32_t l_282 = (-1L);
        int32_t l_283 = 0x203335BDL;
        int32_t l_284 = (-1L);
        int32_t l_286 = 0x2C0F7A9EL;
        int32_t l_287 = 0x363ACFDDL;
        int32_t l_288 = 8L;
        int32_t l_289 = 1L;
        uint16_t l_290[5][7] = {{0x4BC6L,0xC412L,0x4BC6L,0x4BC6L,0xC412L,0x4BC6L,0x4BC6L},{0x4BC6L,0xC412L,0x4BC6L,0x4BC6L,0xC412L,0x4BC6L,0x4BC6L},{0x4BC6L,0xC412L,0x4BC6L,0x4BC6L,0xC412L,0x4BC6L,0x4BC6L},{0x4BC6L,0xC412L,0x4BC6L,0x4BC6L,0xC412L,0x4BC6L,0x4BC6L},{0x4BC6L,0xC412L,0x4BC6L,0x4BC6L,0xC412L,0x4BC6L,0x4BC6L}};
        int i, j;
        (**p_395->g_107) &= (((l_281 ^= (safe_mod_func_uint64_t_u_u(p_13, 0x1128C8310920EB86L))) , 0UL) ^ p_13);
        (*p_395->g_108) = 0x625801CFL;
        l_290[4][1]++;
        (*p_395->g_235) = p_14;
    }
    (*p_395->g_108) = (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(8L, 0xF15F833BL)), (safe_sub_func_int16_t_s_s((*p_395->g_249), ((safe_rshift_func_int8_t_s_u((((safe_add_func_int64_t_s_s((((*p_14) > (p_395->g_127[1] >= (p_395->g_25 = l_303))) || ((safe_mod_func_int32_t_s_s((8UL & p_395->g_27[1][1][0]), ((p_13 < 0x566013AFL) & 0x428333CBL))) >= p_395->g_64[2])), p_395->g_181[1][1][6])) ^ (-1L)) & 0x53L), p_13)) , p_13)))));
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_108 p_395->g_122
 * writes: p_395->g_64 p_395->g_122
 */
int32_t ** func_16(int32_t  p_17, int32_t  p_18, int64_t  p_19, struct S0 * p_395)
{ /* block id: 107 */
    int32_t l_268 = 0x4F7EEDC5L;
    int32_t **l_271 = &p_395->g_236;
    (*p_395->g_108) = l_268;
    for (p_395->g_122 = 0; (p_395->g_122 > 24); p_395->g_122 = safe_add_func_int32_t_s_s(p_395->g_122, 1))
    { /* block id: 111 */
        return l_271;
    }
    return l_271;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_61 p_395->g_27 p_395->g_181 p_395->g_64 p_395->g_260 p_395->g_179 p_395->g_126 p_395->g_127 p_395->g_235
 * writes: p_395->g_245 p_395->g_249 p_395->g_27 p_395->g_122 p_395->g_260 p_395->g_236
 */
int32_t ** func_38(uint8_t * p_39, int32_t ** p_40, int32_t  p_41, int32_t ** p_42, int8_t  p_43, struct S0 * p_395)
{ /* block id: 94 */
    uint64_t l_237 = 8UL;
    int16_t *l_244 = (void*)0;
    int16_t **l_246 = &l_244;
    int16_t *l_248 = (void*)0;
    int16_t **l_247[5] = {&l_248,&l_248,&l_248,&l_248,&l_248};
    int8_t *l_258 = &p_395->g_122;
    uint64_t *l_259 = &p_395->g_260;
    int32_t ***l_261 = &p_395->g_235;
    int32_t l_262[9];
    int i;
    for (i = 0; i < 9; i++)
        l_262[i] = 0x3679061FL;
    l_262[0] ^= ((((l_237 | p_43) && ((((((((safe_rshift_func_uint16_t_u_u((&p_395->g_235 == (void*)0), 13)) <= (((safe_div_func_uint64_t_u_u(((*l_259) &= (((p_395->g_61 <= ((safe_lshift_func_uint16_t_u_s((((*l_246) = (p_395->g_245 = l_244)) == (p_395->g_249 = &p_395->g_181[0][0][8])), (((((*l_258) = ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((*p_39) = (*p_39)), ((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(p_395->g_181[1][1][6], 65527UL)), 0x21B2CCC2L)) <= 4294967295UL))), p_41)) & p_43)) & (-1L)) , (-5L)) , p_395->g_64[2]))) && p_41)) , l_237) <= 0x41F8F721435A0674L)), p_395->g_179)) & (-1L)) , l_237)) , &p_39) != (void*)0) >= l_237) || (*p_395->g_126)) >= l_237) | p_41)) , l_261) != l_261);
    (**l_261) = (void*)0;
    return &p_395->g_236;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_15 p_395->g_107 p_395->g_108 p_395->g_64 p_395->g_126 p_395->g_127
 * writes: p_395->g_15 p_395->g_64
 */
uint8_t * func_44(int32_t  p_45, int8_t  p_46, uint8_t * p_47, struct S0 * p_395)
{ /* block id: 85 */
    int64_t l_234 = (-1L);
    for (p_395->g_15 = 0; (p_395->g_15 >= (-17)); p_395->g_15--)
    { /* block id: 88 */
        (*p_395->g_108) = (**p_395->g_107);
        if ((*p_395->g_126))
            break;
    }
    l_234 ^= (*p_395->g_126);
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t * func_49(uint8_t  p_50, uint32_t  p_51, struct S0 * p_395)
{ /* block id: 83 */
    return &p_395->g_27[1][1][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_151 p_395->g_108 p_395->g_158 p_395->g_27
 * writes: p_395->g_151 p_395->g_122 p_395->g_231 p_395->g_64
 */
uint8_t  func_52(uint8_t * p_53, struct S0 * p_395)
{ /* block id: 73 */
    int32_t l_198 = 0x4F89951AL;
    int32_t l_202 = (-1L);
    int32_t l_217 = 1L;
    int32_t l_218 = 0x69C9B773L;
    int32_t l_219 = 7L;
    int32_t l_220 = (-1L);
    int32_t l_221[5] = {1L,1L,1L,1L,1L};
    uint32_t l_222 = 4294967292UL;
    int8_t *l_225 = (void*)0;
    int8_t *l_226 = &p_395->g_122;
    int16_t *l_227[2][10] = {{&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25},{&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25,&p_395->g_25}};
    int8_t *l_230 = &p_395->g_231;
    int i, j;
    for (p_395->g_151 = (-20); (p_395->g_151 == 25); p_395->g_151 = safe_add_func_int32_t_s_s(p_395->g_151, 1))
    { /* block id: 76 */
        int32_t *l_191 = (void*)0;
        int32_t *l_192 = (void*)0;
        int32_t *l_193 = &p_395->g_64[0];
        int32_t *l_194 = &p_395->g_127[1];
        int32_t *l_195 = &p_395->g_127[1];
        int32_t *l_196 = &p_395->g_127[1];
        int32_t *l_197 = &p_395->g_64[4];
        int32_t *l_199 = &p_395->g_127[0];
        int32_t *l_200 = &p_395->g_127[2];
        int32_t *l_201 = (void*)0;
        int32_t *l_203 = (void*)0;
        int32_t *l_204 = &p_395->g_127[1];
        int32_t *l_205 = &p_395->g_127[1];
        int32_t *l_206 = (void*)0;
        int32_t *l_207 = (void*)0;
        int32_t *l_208 = &p_395->g_127[1];
        int32_t *l_209 = &p_395->g_127[1];
        int32_t *l_210 = &p_395->g_127[3];
        int32_t l_211 = 0L;
        int32_t *l_212 = &l_198;
        int32_t *l_213 = &p_395->g_127[0];
        int32_t *l_214 = &p_395->g_127[1];
        int32_t *l_215 = (void*)0;
        int32_t *l_216[5][10] = {{&p_395->g_151,&p_395->g_127[1],&p_395->g_127[1],&p_395->g_64[0],&p_395->g_127[1],&p_395->g_127[1],&p_395->g_151,&l_198,&p_395->g_151,&p_395->g_127[1]},{&p_395->g_151,&p_395->g_127[1],&p_395->g_127[1],&p_395->g_64[0],&p_395->g_127[1],&p_395->g_127[1],&p_395->g_151,&l_198,&p_395->g_151,&p_395->g_127[1]},{&p_395->g_151,&p_395->g_127[1],&p_395->g_127[1],&p_395->g_64[0],&p_395->g_127[1],&p_395->g_127[1],&p_395->g_151,&l_198,&p_395->g_151,&p_395->g_127[1]},{&p_395->g_151,&p_395->g_127[1],&p_395->g_127[1],&p_395->g_64[0],&p_395->g_127[1],&p_395->g_127[1],&p_395->g_151,&l_198,&p_395->g_151,&p_395->g_127[1]},{&p_395->g_151,&p_395->g_127[1],&p_395->g_127[1],&p_395->g_64[0],&p_395->g_127[1],&p_395->g_127[1],&p_395->g_151,&l_198,&p_395->g_151,&p_395->g_127[1]}};
        int i, j;
        --l_222;
    }
    (*p_395->g_108) = ((((*l_226) = l_218) , l_227[0][5]) != ((safe_rshift_func_int8_t_s_s(((*l_230) = l_219), 2)) , (void*)0));
    return (*p_395->g_158);
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_64 p_395->g_25 p_395->g_107 p_395->g_108
 * writes: p_395->g_64 p_395->g_108
 */
uint8_t * func_54(int32_t  p_55, struct S0 * p_395)
{ /* block id: 8 */
    int32_t l_103[6] = {0x32F57006L,0x32F57006L,0x32F57006L,0x32F57006L,0x32F57006L,0x32F57006L};
    int32_t l_111[8][2] = {{0x60488F66L,0x60488F66L},{0x60488F66L,0x60488F66L},{0x60488F66L,0x60488F66L},{0x60488F66L,0x60488F66L},{0x60488F66L,0x60488F66L},{0x60488F66L,0x60488F66L},{0x60488F66L,0x60488F66L},{0x60488F66L,0x60488F66L}};
    uint32_t *l_128[7][7][2] = {{{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129}},{{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129}},{{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129}},{{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129}},{{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129}},{{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129}},{{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129},{(void*)0,&p_395->g_129}}};
    int32_t l_132[9];
    int64_t l_138[3];
    int32_t ***l_149 = (void*)0;
    uint8_t *l_155 = &p_395->g_27[0][1][0];
    uint8_t *l_157 = &p_395->g_27[1][1][5];
    uint16_t l_159 = 0x44EEL;
    uint32_t l_176 = 0UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_132[i] = 6L;
    for (i = 0; i < 3; i++)
        l_138[i] = (-5L);
    for (p_55 = (-15); (p_55 == (-23)); p_55 = safe_sub_func_int64_t_s_s(p_55, 6))
    { /* block id: 11 */
        int32_t **l_69 = (void*)0;
        int32_t *l_87 = &p_395->g_64[2];
        for (p_395->g_64[0] = 0; (p_395->g_64[0] != (-16)); p_395->g_64[0] = safe_sub_func_int16_t_s_s(p_395->g_64[0], 3))
        { /* block id: 14 */
            return &p_395->g_27[1][1][3];
        }
        (*l_87) &= func_67(l_69, p_395);
    }
    for (p_55 = (-5); (p_55 == 17); p_55 = safe_add_func_int32_t_s_s(p_55, 7))
    { /* block id: 24 */
        uint32_t l_98 = 0xCD02AC2FL;
        int32_t ***l_104 = (void*)0;
        int32_t **l_106 = (void*)0;
        int32_t ***l_105 = &l_106;
        int32_t l_133 = 0x197A29FEL;
        int32_t l_134 = 0x13A31308L;
        int32_t l_135 = 0L;
        int32_t l_136 = 0x4FE08C1CL;
        int32_t l_137[3];
        int8_t l_161 = 0x46L;
        int i;
        for (i = 0; i < 3; i++)
            l_137[i] = 1L;
        (1 + 1);
    }
    (*p_395->g_107) = (p_55 , (*p_395->g_107));
    return &p_395->g_27[1][0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_25
 * writes:
 */
int32_t  func_67(int32_t ** p_68, struct S0 * p_395)
{ /* block id: 17 */
    int32_t *l_70 = &p_395->g_64[0];
    int32_t *l_71 = &p_395->g_64[3];
    int32_t *l_72 = &p_395->g_64[3];
    int32_t *l_73 = &p_395->g_64[0];
    int32_t *l_74 = &p_395->g_64[0];
    int32_t *l_75 = &p_395->g_64[4];
    int32_t *l_76 = &p_395->g_64[0];
    int32_t *l_77 = (void*)0;
    int32_t *l_78 = &p_395->g_64[0];
    int32_t *l_79 = &p_395->g_64[3];
    int32_t *l_80 = &p_395->g_64[0];
    int32_t *l_81 = &p_395->g_64[0];
    int32_t *l_82 = (void*)0;
    int32_t *l_83[8];
    uint8_t l_84 = 0UL;
    int i;
    for (i = 0; i < 8; i++)
        l_83[i] = &p_395->g_64[1];
    ++l_84;
    return p_395->g_25;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_396;
    struct S0* p_395 = &c_396;
    struct S0 c_397 = {
        0x61L, // p_395->g_15
        0x2A67L, // p_395->g_25
        {{{0x80L,0xB3L,0x93L,0xB3L,0x80L,0x80L},{0x80L,0xB3L,0x93L,0xB3L,0x80L,0x80L}},{{0x80L,0xB3L,0x93L,0xB3L,0x80L,0x80L},{0x80L,0xB3L,0x93L,0xB3L,0x80L,0x80L}}}, // p_395->g_27
        {{0x254764FEL,0x254764FEL},{0x254764FEL,0x254764FEL},{0x254764FEL,0x254764FEL},{0x254764FEL,0x254764FEL},{0x254764FEL,0x254764FEL}}, // p_395->g_60
        0x6FCC72FDL, // p_395->g_61
        0L, // p_395->g_62
        0L, // p_395->g_63
        {1L,1L,1L,1L,1L}, // p_395->g_64
        &p_395->g_64[0], // p_395->g_108
        &p_395->g_108, // p_395->g_107
        0x22L, // p_395->g_118
        0x65L, // p_395->g_122
        {0x5A2E691EL,0x5A2E691EL,0x5A2E691EL,0x5A2E691EL}, // p_395->g_127
        &p_395->g_127[1], // p_395->g_126
        0UL, // p_395->g_129
        0x17E8E832L, // p_395->g_151
        &p_395->g_27[1][0][2], // p_395->g_158
        0x0D7AL, // p_395->g_179
        {{{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL},{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL}},{{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL},{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL}},{{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL},{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL}},{{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL},{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL}},{{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL},{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL}},{{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL},{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL}},{{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL},{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL}},{{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL},{0x1A80L,0x09D8L,1L,1L,0x09D8L,0x1A80L,(-1L),1L,0L,0x6C8CL}}}, // p_395->g_181
        0L, // p_395->g_231
        &p_395->g_127[1], // p_395->g_236
        &p_395->g_236, // p_395->g_235
        &p_395->g_181[1][1][6], // p_395->g_245
        &p_395->g_179, // p_395->g_249
        1UL, // p_395->g_260
        0x390212D1L, // p_395->g_266
        (-1L), // p_395->g_267
        (void*)0, // p_395->g_274
        0x7590AF42D96D5BA9L, // p_395->g_280
        {0x10L,0x10L,0x10L,0x10L,0x10L,0x10L,0x10L,0x10L}, // p_395->g_308
        &p_395->g_249, // p_395->g_314
        &p_395->g_314, // p_395->g_313
        &p_395->g_314, // p_395->g_315
        1UL, // p_395->g_347
        0L, // p_395->g_361
        5UL, // p_395->g_362
        (-5L), // p_395->g_394
    };
    c_396 = c_397;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_395);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_395->g_15, "p_395->g_15", print_hash_value);
    transparent_crc(p_395->g_25, "p_395->g_25", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_395->g_27[i][j][k], "p_395->g_27[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_395->g_60[i][j], "p_395->g_60[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_395->g_61, "p_395->g_61", print_hash_value);
    transparent_crc(p_395->g_62, "p_395->g_62", print_hash_value);
    transparent_crc(p_395->g_63, "p_395->g_63", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_395->g_64[i], "p_395->g_64[i]", print_hash_value);

    }
    transparent_crc(p_395->g_118, "p_395->g_118", print_hash_value);
    transparent_crc(p_395->g_122, "p_395->g_122", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_395->g_127[i], "p_395->g_127[i]", print_hash_value);

    }
    transparent_crc(p_395->g_129, "p_395->g_129", print_hash_value);
    transparent_crc(p_395->g_151, "p_395->g_151", print_hash_value);
    transparent_crc(p_395->g_179, "p_395->g_179", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_395->g_181[i][j][k], "p_395->g_181[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_395->g_231, "p_395->g_231", print_hash_value);
    transparent_crc(p_395->g_260, "p_395->g_260", print_hash_value);
    transparent_crc(p_395->g_266, "p_395->g_266", print_hash_value);
    transparent_crc(p_395->g_267, "p_395->g_267", print_hash_value);
    transparent_crc(p_395->g_280, "p_395->g_280", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_395->g_308[i], "p_395->g_308[i]", print_hash_value);

    }
    transparent_crc(p_395->g_347, "p_395->g_347", print_hash_value);
    transparent_crc(p_395->g_361, "p_395->g_361", print_hash_value);
    transparent_crc(p_395->g_362, "p_395->g_362", print_hash_value);
    transparent_crc(p_395->g_394, "p_395->g_394", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
