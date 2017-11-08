// -g 67,29,2 -l 67,1,1
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


// Seed: 1044120496

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int64_t g_14[6][3][6];
    int8_t g_24;
    uint32_t g_31;
    int8_t *g_34;
    int32_t g_37;
    uint64_t g_42;
    uint8_t g_46;
    uint32_t g_73;
    uint8_t g_97;
    uint8_t *g_96;
    int32_t *g_103;
    volatile uint32_t g_120;
    volatile uint32_t *g_119;
    volatile uint32_t * volatile * volatile g_118;
    int32_t * volatile g_124;
    int16_t g_173;
    int16_t g_187;
    int32_t g_188;
    uint32_t g_192;
    int32_t * volatile g_199;
    int32_t * volatile g_200;
    uint32_t g_226;
    uint32_t g_228;
    int32_t * volatile g_229;
    int32_t * volatile g_230;
    int32_t * volatile g_240;
    int32_t g_310;
    int64_t g_347;
    uint16_t g_369;
    volatile int32_t g_395;
    volatile int16_t g_397;
    volatile int8_t g_399;
    int32_t g_400[6];
    uint64_t g_401;
    int32_t g_411;
    uint8_t *g_460;
    int32_t g_498;
    int8_t g_504;
    uint32_t *g_506;
    uint32_t **g_505;
    uint32_t *g_525;
    int16_t g_527;
    uint64_t g_561;
    int32_t ** volatile g_608[5];
    int32_t ** volatile g_610;
    int32_t * volatile g_637;
    uint16_t g_646;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_685);
int8_t  func_4(uint32_t  p_5, int8_t  p_6, uint32_t  p_7, int32_t  p_8, int64_t  p_9, struct S0 * p_685);
uint32_t  func_10(int32_t  p_11, uint32_t  p_12, int32_t  p_13, struct S0 * p_685);
int8_t  func_25(uint8_t  p_26, int8_t * p_27, int8_t * p_28, uint32_t  p_29, struct S0 * p_685);
uint32_t  func_50(int8_t * p_51, uint32_t * p_52, int32_t  p_53, int8_t * p_54, uint32_t  p_55, struct S0 * p_685);
uint32_t * func_56(uint8_t * p_57, int8_t * p_58, uint32_t  p_59, struct S0 * p_685);
int8_t * func_60(uint32_t * p_61, int64_t  p_62, int8_t * p_63, int8_t * p_64, uint32_t * p_65, struct S0 * p_685);
uint32_t * func_66(int8_t * p_67, struct S0 * p_685);
int8_t * func_82(uint32_t * p_83, int64_t  p_84, struct S0 * p_685);
uint32_t  func_92(int8_t * p_93, uint32_t  p_94, uint64_t  p_95, struct S0 * p_685);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_685->g_14 p_685->g_31 p_685->g_34 p_685->g_42 p_685->g_37 p_685->g_46 p_685->g_73 p_685->g_96 p_685->g_97 p_685->g_24 p_685->g_124 p_685->g_173 p_685->g_118 p_685->g_119 p_685->g_103 p_685->g_192 p_685->g_200 p_685->g_226 p_685->g_120 p_685->g_228 p_685->g_229 p_685->g_230 p_685->g_240 p_685->g_187 p_685->g_188 p_685->g_310 p_685->g_347 p_685->g_369 p_685->g_401 p_685->g_411 p_685->g_395 p_685->g_397 p_685->g_498 p_685->g_504 p_685->g_527 p_685->g_400 p_685->g_637 p_685->g_646
 * writes: p_685->g_24 p_685->g_31 p_685->g_42 p_685->g_46 p_685->g_34 p_685->g_37 p_685->g_103 p_685->g_124 p_685->g_173 p_685->g_192 p_685->g_96 p_685->g_226 p_685->g_228 p_685->g_73 p_685->g_188 p_685->g_229 p_685->g_310 p_685->g_347 p_685->g_97 p_685->g_369 p_685->g_401 p_685->g_411 p_685->g_14 p_685->g_460 p_685->g_504 p_685->g_505 p_685->g_525 p_685->g_400 p_685->g_646 p_685->g_527
 */
int64_t  func_1(struct S0 * p_685)
{ /* block id: 4 */
    int8_t *l_23 = &p_685->g_24;
    uint32_t *l_30 = &p_685->g_31;
    int32_t l_35 = 0x3FF4914DL;
    uint8_t *l_45 = &p_685->g_46;
    int16_t l_653[5];
    int8_t l_664 = (-1L);
    int i;
    for (i = 0; i < 5; i++)
        l_653[i] = (-4L);
    (*p_685->g_637) = (safe_div_func_int8_t_s_s(func_4((func_10(p_685->g_14[3][1][5], ((safe_mul_func_int8_t_s_s(((p_685->g_14[3][1][5] <= 0x3AEDL) < (safe_mod_func_uint8_t_u_u(((((-1L) ^ ((((p_685->g_14[3][1][5] >= (safe_lshift_func_uint8_t_u_u(((*l_45) |= ((p_685->g_14[5][2][5] ^ ((-2L) < (safe_mul_func_int8_t_s_s(((*l_23) = (-4L)), ((func_25((((*l_30)++) , 1UL), l_23, p_685->g_34, l_35, p_685) > p_685->g_14[3][1][5]) != 6L))))) && 0x3CL)), 4))) < p_685->g_14[3][1][5]) != l_35) , l_35)) , p_685->g_42) < p_685->g_14[3][2][4]), l_35))), 252UL)) > p_685->g_14[4][1][3]), p_685->g_14[3][1][4], p_685) , 0x259F18D4L), l_35, l_35, l_35, p_685->g_14[4][0][3], p_685), p_685->g_400[0]));
    for (p_685->g_369 = (-16); (p_685->g_369 != 41); p_685->g_369 = safe_add_func_uint64_t_u_u(p_685->g_369, 8))
    { /* block id: 271 */
        int32_t *l_640[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        uint32_t **l_672 = &l_30;
        int i, j;
        l_35 = l_35;
        for (p_685->g_411 = 26; (p_685->g_411 < (-2)); p_685->g_411 = safe_sub_func_uint64_t_u_u(p_685->g_411, 3))
        { /* block id: 275 */
            uint16_t *l_645 = &p_685->g_646;
            uint64_t l_662 = 18446744073709551608UL;
            int16_t *l_663 = &p_685->g_527;
            uint32_t *l_665 = &p_685->g_228;
            uint8_t **l_666 = &l_45;
            int32_t l_667 = 0x07560464L;
            uint32_t ***l_673 = &l_672;
            uint32_t **l_675[8];
            uint32_t ***l_674 = &l_675[3];
            uint64_t *l_684 = &l_662;
            int i;
            for (i = 0; i < 8; i++)
                l_675[i] = &p_685->g_506;
            l_667 = (8L && ((((*l_665) = (safe_lshift_func_int8_t_s_u((((*l_645)--) != (safe_mod_func_int16_t_s_s(p_685->g_120, ((*l_663) &= (+(safe_mul_func_uint8_t_u_u((((*l_45) = 0x2DL) <= ((l_653[3] | (safe_mul_func_uint8_t_u_u(((*p_685->g_96) = ((0x2D98L >= (!(65535UL ^ ((~((safe_unary_minus_func_int32_t_s(((p_685->g_24 | (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((-1L))), p_685->g_411))) == (-4L)))) != p_685->g_228)) >= p_685->g_97)))) & l_662)), 0x4CL))) || p_685->g_310)), l_653[2]))))))), l_664))) , &p_685->g_96) == l_666));
            l_667 = ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(l_35, (((p_685->g_505 = ((*p_685->g_96) , ((*l_673) = l_672))) != ((*l_674) = &p_685->g_506)) || (safe_div_func_uint64_t_u_u(((*l_684) = (safe_mod_func_int16_t_s_s(l_653[2], ((safe_add_func_int8_t_s_s(l_667, (((*l_645) = (l_672 != (p_685->g_505 = ((p_685->g_411 , ((safe_sub_func_int64_t_s_s((-7L), l_667)) , p_685->g_347)) , &p_685->g_506)))) & p_685->g_397))) , 65526UL)))), l_667))))), l_667)) >= p_685->g_369);
        }
    }
    return l_664;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_173 p_685->g_240 p_685->g_14 p_685->g_187 p_685->g_230 p_685->g_188 p_685->g_37 p_685->g_46 p_685->g_31 p_685->g_96 p_685->g_97 p_685->g_42 p_685->g_310 p_685->g_192 p_685->g_228 p_685->g_347 p_685->g_73 p_685->g_369 p_685->g_226 p_685->g_24 p_685->g_401 p_685->g_411 p_685->g_395 p_685->g_397 p_685->g_229 p_685->g_200 p_685->g_498 p_685->g_504 p_685->g_527 p_685->g_120 p_685->g_400
 * writes: p_685->g_37 p_685->g_73 p_685->g_226 p_685->g_188 p_685->g_228 p_685->g_173 p_685->g_42 p_685->g_124 p_685->g_34 p_685->g_229 p_685->g_310 p_685->g_347 p_685->g_97 p_685->g_369 p_685->g_401 p_685->g_411 p_685->g_14 p_685->g_24 p_685->g_96 p_685->g_460 p_685->g_103 p_685->g_192 p_685->g_504 p_685->g_505 p_685->g_525
 */
int8_t  func_4(uint32_t  p_5, int8_t  p_6, uint32_t  p_7, int32_t  p_8, int64_t  p_9, struct S0 * p_685)
{ /* block id: 94 */
    uint32_t *l_237[1][4];
    uint32_t **l_236 = &l_237[0][2];
    uint32_t ***l_235[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_243 = (-1L);
    int32_t *l_250[4][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t *l_298[2];
    int64_t l_388 = 0x1CEDBF01043741E1L;
    uint8_t **l_416 = &p_685->g_96;
    int32_t *l_614 = &p_685->g_411;
    int32_t **l_613 = &l_614;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_237[i][j] = &p_685->g_31;
    }
    for (i = 0; i < 2; i++)
        l_298[i] = &p_685->g_73;
lbl_260:
    (*p_685->g_240) = ((safe_mod_func_uint8_t_u_u(0x5CL, (safe_mod_func_int16_t_s_s(((p_6 ^= (((l_235[4] == (void*)0) || 0UL) <= p_685->g_173)) ^ (l_237[0][2] != &p_685->g_37)), (safe_rshift_func_uint16_t_u_u(((((void*)0 != &p_5) || p_5) < 0x5FAAF09B1D98B466L), 5)))))) , p_5);
lbl_262:
    for (p_685->g_73 = 0; (p_685->g_73 > 38); p_685->g_73 = safe_add_func_uint8_t_u_u(p_685->g_73, 1))
    { /* block id: 99 */
        return p_9;
    }
    (*p_685->g_230) = ((l_243 == (p_685->g_14[3][1][5] && (safe_sub_func_uint32_t_u_u(((p_7 >= ((p_685->g_187 & (safe_lshift_func_int16_t_s_s((((l_237[0][3] == ((l_243 < (-1L)) , &p_7)) | ((((void*)0 == &p_685->g_118) , 0x1FL) > 0UL)) != l_243), l_243))) == 0x90L)) , l_243), l_243)))) & 1L);
    for (p_9 = 0; (p_9 > 1); p_9 = safe_add_func_uint16_t_u_u(p_9, 4))
    { /* block id: 105 */
        uint32_t l_257 = 0x85C9947EL;
        int32_t **l_258 = &l_250[3][4];
        int32_t *l_305[5];
        int32_t *l_306[6] = {&l_243,&l_243,&l_243,&l_243,&l_243,&l_243};
        int32_t l_348 = 0x45BD9327L;
        int64_t l_447 = 0x0310E1F8B2898107L;
        int16_t *l_514 = &p_685->g_187;
        int32_t l_595 = 1L;
        uint32_t l_599 = 0x3011701EL;
        int16_t l_634 = (-1L);
        int i;
        for (i = 0; i < 5; i++)
            l_305[i] = &l_243;
        for (p_685->g_226 = 0; (p_685->g_226 != 39); p_685->g_226++)
        { /* block id: 108 */
            int32_t l_295 = 1L;
            uint8_t *l_296 = (void*)0;
            uint32_t **l_383 = &l_298[1];
            int32_t l_394[5][4][8] = {{{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L}},{{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L}},{{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L}},{{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L}},{{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L},{4L,0x697A36D6L,0x7D9D4A11L,0x697A36D6L,4L,4L,0x697A36D6L,0x7D9D4A11L}}};
            int32_t *l_410 = &p_685->g_411;
            uint16_t *l_438 = &p_685->g_369;
            int64_t *l_439 = (void*)0;
            int64_t *l_440 = &p_685->g_14[5][0][5];
            int64_t l_463 = 0x0AAA3B379B815935L;
            uint64_t l_468 = 1UL;
            int16_t l_500 = 0x6470L;
            uint32_t *l_526 = &p_685->g_192;
            uint16_t l_573 = 65535UL;
            int32_t *l_602 = &l_295;
            uint64_t l_631 = 0UL;
            uint8_t l_632[6][7] = {{7UL,250UL,251UL,2UL,251UL,250UL,7UL},{7UL,250UL,251UL,2UL,251UL,250UL,7UL},{7UL,250UL,251UL,2UL,251UL,250UL,7UL},{7UL,250UL,251UL,2UL,251UL,250UL,7UL},{7UL,250UL,251UL,2UL,251UL,250UL,7UL},{7UL,250UL,251UL,2UL,251UL,250UL,7UL}};
            uint32_t l_633 = 0x6F818C4AL;
            uint8_t l_635[4][2][1] = {{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}}};
            int i, j, k;
            for (p_685->g_37 = 0; (p_685->g_37 < 26); p_685->g_37 = safe_add_func_uint16_t_u_u(p_685->g_37, 8))
            { /* block id: 111 */
                uint16_t l_259 = 0x618FL;
                int32_t l_269[2][9] = {{0x3CCD52C4L,0L,0x3CCD52C4L,0x3CCD52C4L,0L,0x3CCD52C4L,0x3CCD52C4L,0L,0x3CCD52C4L},{0x3CCD52C4L,0L,0x3CCD52C4L,0x3CCD52C4L,0L,0x3CCD52C4L,0x3CCD52C4L,0L,0x3CCD52C4L}};
                int32_t l_278 = 0x05E0CE5CL;
                int16_t *l_286[1];
                uint32_t **l_314[3][2][9] = {{{&l_237[0][2],&l_237[0][2],(void*)0,&l_298[1],&l_237[0][0],&l_298[1],(void*)0,(void*)0,&l_298[0]},{&l_237[0][2],&l_237[0][2],(void*)0,&l_298[1],&l_237[0][0],&l_298[1],(void*)0,(void*)0,&l_298[0]}},{{&l_237[0][2],&l_237[0][2],(void*)0,&l_298[1],&l_237[0][0],&l_298[1],(void*)0,(void*)0,&l_298[0]},{&l_237[0][2],&l_237[0][2],(void*)0,&l_298[1],&l_237[0][0],&l_298[1],(void*)0,(void*)0,&l_298[0]}},{{&l_237[0][2],&l_237[0][2],(void*)0,&l_298[1],&l_237[0][0],&l_298[1],(void*)0,(void*)0,&l_298[0]},{&l_237[0][2],&l_237[0][2],(void*)0,&l_298[1],&l_237[0][0],&l_298[1],(void*)0,(void*)0,&l_298[0]}}};
                int64_t l_391 = (-10L);
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_286[i] = &p_685->g_173;
                l_259 ^= (l_257 , (&l_250[3][4] != (l_258 = (void*)0)));
                if (p_7)
                    goto lbl_260;
                for (p_685->g_188 = 0; (p_685->g_188 <= 3); p_685->g_188 += 1)
                { /* block id: 117 */
                    int32_t *l_261 = &p_685->g_37;
                    int32_t *l_272 = &p_685->g_37;
                    uint64_t l_294 = 1UL;
                    int i, j;
                    l_250[p_685->g_188][p_685->g_188] = l_261;
                    if (p_7)
                    { /* block id: 119 */
                        uint16_t *l_273 = (void*)0;
                        uint16_t *l_274 = &l_259;
                        uint32_t *l_277[2];
                        int16_t *l_279 = &p_685->g_173;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_277[i] = (void*)0;
                        if (p_6)
                            goto lbl_262;
                        l_278 = ((safe_sub_func_int16_t_s_s((p_9 & ((safe_div_func_int64_t_s_s(p_5, (safe_sub_func_int8_t_s_s(((((l_269[1][0] = 1L) | ((((safe_mul_func_int16_t_s_s(p_8, ((*l_279) = (((l_272 != (void*)0) ^ ((*l_274)--)) < ((*l_272) | ((((p_685->g_228 = (p_7 = p_685->g_46)) | (p_8 >= 0x31A2L)) || l_278) <= 6UL)))))) > l_278) != 1UL) && p_685->g_31)) == p_8) < (-2L)), p_9)))) != 0x74L)), 0x2C32L)) & 0x1AD0A15EL);
                        if (p_5)
                            break;
                    }
                    else
                    { /* block id: 128 */
                        int8_t l_280[2];
                        uint32_t *l_291[9];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_280[i] = 5L;
                        for (i = 0; i < 9; i++)
                            l_291[i] = &l_257;
                        p_685->g_124 = func_66(&p_685->g_24, p_685);
                        l_280[1] ^= (-2L);
                        l_295 = (safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((safe_unary_minus_func_int64_t_s((l_286[0] == (((safe_div_func_uint64_t_u_u((((p_7 = (safe_rshift_func_uint8_t_u_s(252UL, 0))) || ((+p_9) > ((0x737C8A46L < ((((0x4BD40102855B8163L < (safe_sub_func_int32_t_s_s(((*p_685->g_96) && (&p_685->g_96 != (void*)0)), ((p_685->g_42 , (void*)0) == (void*)0)))) > 0x29L) > l_294) < l_295)) , (-1L)))) <= p_9), 0x8E284A5F7E6AA0FAL)) && 0x7767L) , (void*)0)))), p_685->g_14[3][1][5])), 12));
                        if (p_9)
                            continue;
                    }
                    for (p_5 = 1; (p_5 <= 4); p_5 += 1)
                    { /* block id: 137 */
                        int8_t *l_297 = (void*)0;
                        uint32_t *l_307 = &l_257;
                        int8_t **l_311 = &p_685->g_34;
                        int8_t **l_312 = &l_297;
                        p_685->g_229 = func_56(l_296, ((*l_312) = ((*l_311) = func_82((l_298[1] = func_66(l_297, p_685)), (p_5 , (safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((p_685->g_31 ^ ((l_305[4] == (l_306[2] = (void*)0)) != ((*l_307)++))), 4L)) == ((p_6 > p_5) , p_685->g_310)), p_9))), p_685))), p_685->g_192, p_685);
                    }
                    return p_6;
                }
                if ((safe_unary_minus_func_int8_t_s((l_314[2][0][5] != l_314[0][1][5]))))
                { /* block id: 147 */
                    int8_t l_315 = 0x42L;
                    int16_t *l_342 = &p_685->g_187;
                    int32_t l_344 = 0x79EC15FAL;
                    int32_t l_350 = 0x52E63805L;
                    if (l_278)
                        break;
                    for (p_685->g_310 = 0; (p_685->g_310 <= 2); p_685->g_310 += 1)
                    { /* block id: 151 */
                        int32_t l_316 = 0x2A156F87L;
                        uint32_t *l_333[3];
                        int32_t l_343 = 0L;
                        int64_t *l_345 = (void*)0;
                        int64_t *l_346 = &p_685->g_347;
                        uint16_t *l_349 = &l_259;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_333[i] = &l_257;
                        l_278 = p_685->g_14[(p_685->g_310 + 1)][p_685->g_310][(p_685->g_310 + 1)];
                        l_316 |= (((void*)0 != &p_7) >= l_315);
                        l_350 = (p_685->g_14[5][0][2] , (1UL > (p_5 , (safe_div_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((0L & (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((((*l_349) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(p_9, p_9)) , (++p_685->g_228)), (safe_rshift_func_int16_t_s_u((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_5, (l_342 != (((*l_346) ^= (l_344 = ((((p_6 , 0xA02113A691C5F551L) != l_343) > 7UL) <= 0UL))) , (void*)0)))), (-10L))) >= l_348) , p_685->g_42), p_6)))), 1))) != p_9) == 255UL), p_685->g_42)), p_685->g_73))) >= p_8), p_5)), 4294967293UL)) & 0x0D86140CL), l_315)))));
                    }
                }
                else
                { /* block id: 160 */
                    uint64_t l_385 = 5UL;
                    int32_t l_389 = 2L;
                    int32_t l_390 = 0x560A1FF2L;
                    int32_t l_393[4][5] = {{(-3L),(-3L),0x4A479C78L,0x4E8C0178L,0x6C76F50CL},{(-3L),(-3L),0x4A479C78L,0x4E8C0178L,0x6C76F50CL},{(-3L),(-3L),0x4A479C78L,0x4E8C0178L,0x6C76F50CL},{(-3L),(-3L),0x4A479C78L,0x4E8C0178L,0x6C76F50CL}};
                    int32_t l_398 = 0L;
                    uint32_t *l_404 = &p_685->g_228;
                    int64_t *l_407 = &l_391;
                    int i, j;
                    for (p_685->g_97 = (-21); (p_685->g_97 < 41); p_685->g_97 = safe_add_func_uint64_t_u_u(p_685->g_97, 3))
                    { /* block id: 163 */
                        int16_t *l_359 = &p_685->g_173;
                        uint16_t *l_367 = (void*)0;
                        uint16_t *l_368 = (void*)0;
                        int32_t l_384 = 0x1FCF93BFL;
                        uint64_t *l_386[7] = {&p_685->g_42,&p_685->g_42,&p_685->g_42,&p_685->g_42,&p_685->g_42,&p_685->g_42,&p_685->g_42};
                        int32_t l_387 = 0x6ECA718AL;
                        int32_t l_392 = 1L;
                        int32_t l_396[10][8][3] = {{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}},{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}},{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}},{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}},{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}},{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}},{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}},{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}},{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}},{{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L},{0L,(-1L),1L}}};
                        int i, j, k;
                        l_389 = ((((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u((((l_359 == (void*)0) , ((l_269[0][4] || (p_685->g_42 |= (safe_div_func_int64_t_s_s((p_5 , (safe_div_func_uint32_t_u_u((0x0144L ^ (safe_unary_minus_func_uint64_t_u(((p_685->g_369++) , 0UL)))), ((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u((((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((p_8 , (l_384 |= (safe_mul_func_uint8_t_u_u(((254UL ^ ((void*)0 == l_383)) | 0x66FCL), p_7)))), p_685->g_192)), 3)) == p_8) <= p_5))) , l_295), 4L)), p_6)) , 0x77771135L)))), l_385)))) | l_387)) , (*p_685->g_96)), (-1L))), p_685->g_226)), p_685->g_24)) | 18446744073709551610UL) <= p_5) , l_388);
                        --p_685->g_401;
                    }
                    l_269[0][7] = ((((*p_685->g_230) <= ((*l_404)++)) < l_278) && ((*l_407) = p_685->g_187));
                }
            }
            (*p_685->g_240) = (safe_rshift_func_int8_t_s_u((((*l_440) = ((l_394[0][0][6] = ((*l_410) = (1UL | 0x2716L))) , (safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((*l_438) ^= ((((&l_296 == l_416) , (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_5 > p_685->g_192), (((safe_unary_minus_func_int8_t_s((((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((p_8 & (((p_685->g_97 == ((safe_div_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(l_394[0][0][6], 0x6868F39CL)), p_685->g_37)) , 0x10L)) != 0L) != p_8)), p_685->g_73)) || p_685->g_411) == 0x82CBL), 247UL)), p_9)) <= p_9) | p_7))) ^ 0x14618E13L) < 0x52B233D5AC11CBECL))), l_394[0][0][6])), (*p_685->g_96))), l_295))) != p_5) != (-3L))), l_394[0][2][2])), 12)))) >= p_685->g_188), 2));
            for (p_685->g_24 = 0; (p_685->g_24 <= 5); p_685->g_24 += 1)
            { /* block id: 182 */
                uint8_t l_448 = 0x6BL;
                int8_t *l_457 = (void*)0;
                int32_t l_464 = 0x74E9E4AAL;
                int32_t l_465 = 9L;
                int32_t l_467[2][3][5];
                int8_t *l_554 = &p_685->g_504;
                uint32_t l_594 = 0x06CABFB4L;
                int16_t l_597[6][5][7] = {{{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L}},{{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L}},{{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L}},{{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L}},{{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L}},{{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L},{0x21E9L,1L,0x5EE3L,1L,0x3597L,1L,0x5EE3L}}};
                int32_t **l_611[10] = {&l_410,&l_410,&l_410,&l_410,&l_410,&l_410,&l_410,&l_410,&l_410,&l_410};
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_467[i][j][k] = 0L;
                    }
                }
                if (((l_295 = (safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((((*p_685->g_96) <= p_5) , (l_447 = p_685->g_395)) , p_6), (((p_685->g_24 && 0x30713DA4405A9FEDL) == p_6) ^ ((((((p_9 & l_448) == p_685->g_97) ^ 0L) > p_9) != p_7) & 0x1EF6L)))), 0x597F0CCF32BF1DC6L)), 0x1B5E3FE5A8057006L))) == 4294967295UL))
                { /* block id: 185 */
                    uint32_t l_450 = 0xD8FC810BL;
                    int8_t *l_461 = &p_685->g_24;
                    int32_t l_466 = 0x29E133E0L;
                    uint32_t *l_483 = &p_685->g_192;
                    uint32_t *l_484 = &p_685->g_73;
                    for (p_8 = 0; (p_8 <= 0); p_8 += 1)
                    { /* block id: 188 */
                        int32_t l_449 = 0x0EC2CF7AL;
                        uint8_t *l_458 = &p_685->g_97;
                        uint8_t **l_459[8][2][3] = {{{&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458}},{{&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458}},{{&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458}},{{&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458}},{{&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458}},{{&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458}},{{&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458}},{{&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458}}};
                        int32_t **l_462 = &p_685->g_103;
                        int i, j, k;
                        l_449 = (l_394[(p_8 + 3)][(p_8 + 1)][(p_8 + 6)] = (-1L));
                        if ((*p_685->g_230))
                            continue;
                        l_450 = l_394[0][0][6];
                        (*l_462) = func_56((p_685->g_460 = ((*l_416) = l_458)), l_461, l_295, p_685);
                    }
                    ++l_468;
                    for (l_466 = 0; (l_466 <= 5); l_466 += 1)
                    { /* block id: 201 */
                        if (l_257)
                            goto lbl_260;
                    }
                    (*p_685->g_229) = (safe_sub_func_uint32_t_u_u(p_685->g_397, (safe_div_func_int32_t_s_s((((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(p_685->g_187, (safe_sub_func_int64_t_s_s(((void*)0 == &p_685->g_97), (&l_464 != (l_394[0][0][6] , func_66(func_60(&p_685->g_73, (((safe_rshift_func_int16_t_s_u((((*l_483) = p_685->g_369) , 1L), p_6)) & (-8L)) , 0x1ABFD7F1105FF6A7L), &p_685->g_24, &p_685->g_24, l_484, p_685), p_685))))))), 0x77EBAD189D026C83L)) > 18446744073709551615UL) <= (-8L)), p_5))));
                }
                else
                { /* block id: 206 */
                    uint64_t l_491 = 0x4269E5A549A1689FL;
                    int32_t l_499 = 0L;
                    int32_t l_529 = (-7L);
                    for (p_5 = 0; (p_5 <= 5); p_5 += 1)
                    { /* block id: 209 */
                        int32_t l_488 = 8L;
                        uint32_t *l_501 = (void*)0;
                        uint32_t *l_502 = &l_257;
                        int8_t *l_503 = &p_685->g_504;
                        uint32_t **l_507[8];
                        int64_t l_528 = 0x1767EAAB5C72214AL;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_507[i] = &l_237[0][0];
                        l_295 ^= ((((((p_685->g_505 = ((((*l_503) |= ((safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u(p_685->g_37, ((*l_502) &= ((((p_685->g_42 , l_488) || (l_394[1][0][5] != ((((**l_416)++) , (l_491 , ((((safe_mod_func_uint32_t_u_u(p_685->g_97, ((((l_499 = (((*l_410) |= (safe_add_func_int32_t_s_s((*p_685->g_200), ((safe_lshift_func_uint8_t_u_s((p_8 || (+(p_685->g_31 , 0xB8F7A2ED855E3258L))), p_9)) < p_685->g_498)))) , 0x4FL)) & 0x4FL) <= p_685->g_173) , p_685->g_173))) , p_9) | l_500) != p_685->g_226))) , p_8))) ^ p_5) & p_685->g_192)))))) , 0x58L)) > l_463) , (void*)0)) != l_507[3]) <= p_6) | 1L) != l_500) , p_9);
                        (*p_685->g_229) = (*p_685->g_230);
                        (*p_685->g_200) |= (((safe_rshift_func_int16_t_s_u(p_685->g_187, (p_5 , (((((*l_502) = ((safe_rshift_func_uint8_t_u_s((((*l_503) = ((!((safe_rshift_func_uint16_t_u_s((((((void*)0 != l_514) & (1UL & (safe_rshift_func_int16_t_s_u((((((safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((*l_438)--), 0x4208L)) ^ (safe_sub_func_int64_t_s_s(((((p_685->g_525 = l_306[p_685->g_24]) != l_526) , ((((p_685->g_527 && p_685->g_401) <= p_5) != 0x2C9E16B8L) , p_8)) ^ l_491), p_685->g_188))), p_7)) > 0x27B9E87AL) , p_685->g_188) && (*p_685->g_96)) != p_685->g_188), 1)))) <= p_9) > l_528), l_528)) < l_529)) || l_488)) , l_528), 1)) >= p_8)) , p_5) < p_7) != l_528)))) <= l_528) != p_5);
                        l_306[p_685->g_24] = func_66(l_457, p_685);
                    }
                    (*p_685->g_229) = (((safe_add_func_uint32_t_u_u(p_685->g_120, (-3L))) , p_685->g_401) , (safe_rshift_func_uint16_t_u_u(p_7, (&p_685->g_411 != ((safe_div_func_int64_t_s_s((((p_9 >= ((safe_rshift_func_uint16_t_u_u(((p_9 >= ((*l_440) &= 0x0F4A8BCFCF372AC8L)) <= (safe_sub_func_int8_t_s_s((p_685->g_400[2] || p_8), (*p_685->g_96)))), 8)) != p_6)) || 0L) < p_685->g_310), p_5)) , &p_8)))));
                }
                (*p_685->g_200) = (l_465 |= (-1L));
                l_306[p_685->g_24] = (((void*)0 == &p_685->g_14[3][1][5]) , func_56(((safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((4UL < 0UL), 0)), (safe_add_func_uint32_t_u_u(p_685->g_120, (+((safe_mul_func_int8_t_s_s(((*l_554) |= (safe_mul_func_uint8_t_u_u(0x0FL, p_5))), p_8)) || p_685->g_401)))))) && p_6), p_685->g_187)), l_468)) , &p_685->g_46), &p_685->g_24, p_9, p_685));
            }
            l_250[3][4] = &l_394[0][0][6];
        }
        if ((*p_685->g_230))
            continue;
    }
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_31 p_685->g_14 p_685->g_73 p_685->g_96 p_685->g_97 p_685->g_37 p_685->g_42 p_685->g_24 p_685->g_124 p_685->g_46 p_685->g_173 p_685->g_118 p_685->g_119 p_685->g_103 p_685->g_192 p_685->g_200 p_685->g_226 p_685->g_120 p_685->g_228 p_685->g_229 p_685->g_230
 * writes: p_685->g_31 p_685->g_46 p_685->g_42 p_685->g_34 p_685->g_37 p_685->g_103 p_685->g_124 p_685->g_173 p_685->g_24 p_685->g_192 p_685->g_96 p_685->g_226 p_685->g_228
 */
uint32_t  func_10(int32_t  p_11, uint32_t  p_12, int32_t  p_13, struct S0 * p_685)
{ /* block id: 11 */
    int8_t *l_49[5][5] = {{&p_685->g_24,(void*)0,&p_685->g_24,(void*)0,&p_685->g_24},{&p_685->g_24,(void*)0,&p_685->g_24,(void*)0,&p_685->g_24},{&p_685->g_24,(void*)0,&p_685->g_24,(void*)0,&p_685->g_24},{&p_685->g_24,(void*)0,&p_685->g_24,(void*)0,&p_685->g_24},{&p_685->g_24,(void*)0,&p_685->g_24,(void*)0,&p_685->g_24}};
    uint32_t *l_72 = &p_685->g_73;
    uint32_t l_76[1][4][3] = {{{0x171313FEL,0x171313FEL,0x171313FEL},{0x171313FEL,0x171313FEL,0x171313FEL},{0x171313FEL,0x171313FEL,0x171313FEL},{0x171313FEL,0x171313FEL,0x171313FEL}}};
    uint32_t *l_78[4] = {&p_685->g_73,&p_685->g_73,&p_685->g_73,&p_685->g_73};
    uint32_t **l_133 = &l_72;
    uint32_t ***l_132[6] = {(void*)0,&l_133,(void*)0,(void*)0,&l_133,(void*)0};
    uint32_t ***l_147 = &l_133;
    uint64_t l_160 = 0x8277DDD3BA113A25L;
    int32_t l_190 = 2L;
    int i, j, k;
    for (p_685->g_31 = 12; (p_685->g_31 == 38); ++p_685->g_31)
    { /* block id: 14 */
        uint32_t *l_71 = (void*)0;
        uint32_t **l_70 = &l_71;
        int8_t *l_77[8][3][4] = {{{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0}},{{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0}},{{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0}},{{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0}},{{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0}},{{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0}},{{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0}},{{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0},{(void*)0,&p_685->g_24,&p_685->g_24,(void*)0}}};
        int32_t l_138[7];
        int32_t l_154 = 8L;
        uint32_t l_171 = 0xBEDFB480L;
        uint32_t **l_185[4][4] = {{&l_78[1],(void*)0,(void*)0,&l_78[1]},{&l_78[1],(void*)0,(void*)0,&l_78[1]},{&l_78[1],(void*)0,(void*)0,&l_78[1]},{&l_78[1],(void*)0,(void*)0,&l_78[1]}};
        int32_t *l_221 = &l_138[4];
        uint32_t *l_227 = &p_685->g_228;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_138[i] = 0x5BD879D1L;
        if ((((((-1L) <= (func_25((p_685->g_46 = p_685->g_14[3][1][5]), l_49[0][4], &p_685->g_24, func_50(&p_685->g_24, func_56(l_49[0][4], func_60((l_72 = ((*l_70) = func_66(&p_685->g_24, p_685))), (safe_rshift_func_int8_t_s_u(((p_11 || p_685->g_14[0][0][0]) & l_76[0][3][0]), 4)), &p_685->g_24, l_77[2][2][3], l_78[3], p_685), p_685->g_97, p_685), p_685->g_14[3][1][5], l_49[0][1], p_685->g_24, p_685), p_685) , p_11)) && 0L) | 0x0C1DL) || 0UL))
        { /* block id: 50 */
            uint8_t *l_157 = &p_685->g_97;
            int32_t l_195 = 0x2FE77FC2L;
            int32_t l_196 = 1L;
            if (((void*)0 != l_132[4]))
            { /* block id: 51 */
                int32_t *l_152 = (void*)0;
                int32_t *l_153[8] = {&p_685->g_37,&p_685->g_37,&p_685->g_37,&p_685->g_37,&p_685->g_37,&p_685->g_37,&p_685->g_37,&p_685->g_37};
                int32_t l_189 = (-1L);
                int i;
                p_685->g_37 ^= (safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_138[3], ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((4UL || (p_685->g_42 && (safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((((*p_685->g_124) != (l_154 = (((*l_70) = ((((void*)0 == l_147) || (((safe_lshift_func_uint8_t_u_u(p_11, 4)) == (safe_div_func_uint16_t_u_u(0UL, p_685->g_46))) & p_11)) , &p_685->g_31)) != (**l_147)))) , (*p_685->g_96)), 0x4EL)), 0x25E66551692F62A8L)))), 3)), p_13)) & (*p_685->g_96)))), 0xF3L));
                for (p_685->g_37 = 0; (p_685->g_37 < (-17)); p_685->g_37 = safe_sub_func_int16_t_s_s(p_685->g_37, 8))
                { /* block id: 57 */
                    int16_t *l_172 = &p_685->g_173;
                    int32_t l_174 = 0L;
                    int32_t **l_175 = &p_685->g_103;
                    uint32_t *l_180 = (void*)0;
                    (*l_175) = func_56(l_157, func_82(&p_685->g_73, (p_13 , (safe_sub_func_uint8_t_u_u(l_160, (safe_sub_func_uint32_t_u_u(0xE9429D60L, (((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((*l_172) |= ((safe_mod_func_uint8_t_u_u((((((*l_70) = &p_685->g_31) != (void*)0) , p_12) & l_154), l_171)) < 0x7C989E8BE2EB9B0FL)), p_11)), p_13)), l_174)) < l_76[0][3][0]) , l_76[0][3][0])))))), p_685), p_685->g_42, p_685);
                    l_138[5] ^= 0x4902EFDFL;
                    for (l_171 = 0; (l_171 != 21); l_171 = safe_add_func_int32_t_s_s(l_171, 6))
                    { /* block id: 64 */
                        p_11 = p_13;
                    }
                    for (p_685->g_24 = (-2); (p_685->g_24 >= (-23)); p_685->g_24 = safe_sub_func_int8_t_s_s(p_685->g_24, 7))
                    { /* block id: 69 */
                        int16_t l_186 = 0x241AL;
                        int32_t l_191 = (-6L);
                        (*l_175) = func_56(&p_685->g_46, func_82(l_180, p_685->g_73, p_685), (((*p_685->g_118) != &p_685->g_73) , ((p_685->g_42 && ((l_49[4][4] == (l_77[2][2][3] = func_82(func_56(((safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((l_185[1][1] == (void*)0) >= p_11), l_186)), 0xEB1093934F9474E0L)) , l_77[2][2][3]), &p_685->g_24, p_12, p_685), p_685->g_14[4][2][0], p_685))) < p_13)) , p_685->g_46)), p_685);
                        if ((*p_685->g_103))
                            break;
                        ++p_685->g_192;
                        l_196 &= l_195;
                    }
                }
                l_195 = l_195;
            }
            else
            { /* block id: 78 */
                (*p_685->g_200) |= (safe_lshift_func_uint16_t_u_u(p_685->g_14[3][1][5], 8));
            }
        }
        else
        { /* block id: 81 */
            int8_t *l_209 = &p_685->g_24;
            uint32_t *l_210 = (void*)0;
            uint8_t **l_211 = &p_685->g_96;
            int32_t *l_212[6] = {&l_138[3],(void*)0,&l_138[3],&l_138[3],(void*)0,&l_138[3]};
            int i;
            l_190 = (safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(l_171, (((+0x4160E171A2FFDF36L) , ((safe_rshift_func_uint16_t_u_s(((p_13 & (safe_div_func_int64_t_s_s((((*l_211) = &p_685->g_97) == (void*)0), p_685->g_42))) , p_685->g_173), 2)) <= 0x6405L)) && p_11))), l_138[4]));
        }
        p_11 = ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(0x735CL, 13)), ((*l_227) &= (((safe_div_func_int32_t_s_s((~((safe_mod_func_uint16_t_u_u((l_138[3] || ((*l_221) &= l_76[0][2][2])), (p_685->g_73 ^ (((((safe_div_func_uint16_t_u_u(1UL, l_76[0][3][0])) >= ((safe_lshift_func_int16_t_s_u(((((0xD6F2558EL != (p_685->g_226 &= p_685->g_14[3][1][5])) | 0x79C2L) | (-6L)) == l_190), 15)) && p_12)) | p_11) == p_685->g_120) || p_11)))) , 6L)), 1UL)) || p_685->g_31) >= p_11)))) != p_12);
        p_11 = (*p_685->g_124);
    }
    (*p_685->g_229) = l_76[0][3][0];
    (*p_685->g_230) = l_76[0][1][2];
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_42 p_685->g_37
 * writes: p_685->g_42
 */
int8_t  func_25(uint8_t  p_26, int8_t * p_27, int8_t * p_28, uint32_t  p_29, struct S0 * p_685)
{ /* block id: 7 */
    int32_t *l_36 = &p_685->g_37;
    int32_t *l_38 = &p_685->g_37;
    int32_t *l_39 = &p_685->g_37;
    int32_t *l_40 = (void*)0;
    int32_t *l_41[8][8][2] = {{{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37}},{{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37}},{{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37}},{{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37}},{{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37}},{{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37}},{{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37}},{{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37},{&p_685->g_37,&p_685->g_37}}};
    int i, j, k;
    p_685->g_42++;
    return (*l_36);
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_42
 * writes: p_685->g_124
 */
uint32_t  func_50(int8_t * p_51, uint32_t * p_52, int32_t  p_53, int8_t * p_54, uint32_t  p_55, struct S0 * p_685)
{ /* block id: 46 */
    int16_t l_131 = 0L;
    l_131 = 0x47512D44L;
    p_685->g_124 = p_52;
    return p_685->g_42;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t * func_56(uint8_t * p_57, int8_t * p_58, uint32_t  p_59, struct S0 * p_685)
{ /* block id: 34 */
    int32_t *l_106 = &p_685->g_37;
    uint32_t *l_116 = &p_685->g_73;
    uint32_t **l_115 = &l_116;
    uint32_t ***l_117 = &l_115;
    int32_t l_121 = 0x2C0673FCL;
    return &p_685->g_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_73 p_685->g_14 p_685->g_96 p_685->g_97 p_685->g_37 p_685->g_42 p_685->g_24
 * writes: p_685->g_34 p_685->g_37 p_685->g_42 p_685->g_103
 */
int8_t * func_60(uint32_t * p_61, int64_t  p_62, int8_t * p_63, int8_t * p_64, uint32_t * p_65, struct S0 * p_685)
{ /* block id: 21 */
    int32_t l_79 = 7L;
    uint32_t *l_86[9][4][5] = {{{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73}},{{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73}},{{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73}},{{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73}},{{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73}},{{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73}},{{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73}},{{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73}},{{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73},{&p_685->g_73,&p_685->g_73,&p_685->g_31,&p_685->g_73,&p_685->g_73}}};
    uint32_t **l_85 = &l_86[8][1][2];
    int32_t l_87 = 0x6A3D77AEL;
    int32_t *l_100 = (void*)0;
    int32_t *l_101 = &l_87;
    int32_t l_102 = 0x3FC63197L;
    int i, j, k;
    l_102 ^= ((0UL && (-2L)) , ((*l_101) = (l_79 == (((safe_lshift_func_uint16_t_u_u((&p_685->g_24 != (p_685->g_34 = func_82(((*l_85) = &p_685->g_31), l_87, p_685))), 4)) , (((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u(func_92(func_82((*l_85), ((&p_685->g_37 == &l_87) ^ p_685->g_73), p_685), p_685->g_14[5][2][0], p_62, p_685), p_685->g_42)), p_685->g_24)) >= 18446744073709551612UL) >= (*p_63))) || 0x09L))));
    p_685->g_103 = func_66(&p_685->g_24, p_685);
    return p_64;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_685->g_42
 */
uint32_t * func_66(int8_t * p_67, struct S0 * p_685)
{ /* block id: 16 */
    uint32_t l_68[4] = {0xC214255FL,0xC214255FL,0xC214255FL,0xC214255FL};
    uint32_t *l_69 = (void*)0;
    int i;
    for (p_685->g_42 = 0; p_685->g_42 < 4; p_685->g_42 += 1)
    {
        l_68[p_685->g_42] = 0x98ED4FF9L;
    }
    return l_69;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_82(uint32_t * p_83, int64_t  p_84, struct S0 * p_685)
{ /* block id: 23 */
    return &p_685->g_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_96 p_685->g_97 p_685->g_37 p_685->g_14
 * writes: p_685->g_37
 */
uint32_t  func_92(int8_t * p_93, uint32_t  p_94, uint64_t  p_95, struct S0 * p_685)
{ /* block id: 26 */
    uint64_t l_98 = 0UL;
    int32_t *l_99 = &p_685->g_37;
    l_98 = (((p_93 == p_685->g_96) ^ 0x23E211E8D5353597L) && p_95);
    (*l_99) &= p_685->g_97;
    return p_685->g_14[5][0][5];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_686;
    struct S0* p_685 = &c_686;
    struct S0 c_687 = {
        {{{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L}},{{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L}},{{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L}},{{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L}},{{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L}},{{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L},{0x484B7B831966C477L,(-6L),0x084CB8F6C218E993L,0x6BC5F93BE41B0CE7L,0x6BC5F93BE41B0CE7L,0x084CB8F6C218E993L}}}, // p_685->g_14
        1L, // p_685->g_24
        0xF94A2283L, // p_685->g_31
        (void*)0, // p_685->g_34
        0x403AC464L, // p_685->g_37
        0xD5AE909801C16B31L, // p_685->g_42
        0xCEL, // p_685->g_46
        0x16ABE3F1L, // p_685->g_73
        0x09L, // p_685->g_97
        &p_685->g_97, // p_685->g_96
        (void*)0, // p_685->g_103
        1UL, // p_685->g_120
        &p_685->g_120, // p_685->g_119
        &p_685->g_119, // p_685->g_118
        &p_685->g_37, // p_685->g_124
        0x1AD1L, // p_685->g_173
        0x15D9L, // p_685->g_187
        0x2D88BDD4L, // p_685->g_188
        1UL, // p_685->g_192
        (void*)0, // p_685->g_199
        &p_685->g_37, // p_685->g_200
        0x24FC960DL, // p_685->g_226
        0UL, // p_685->g_228
        &p_685->g_37, // p_685->g_229
        &p_685->g_37, // p_685->g_230
        &p_685->g_37, // p_685->g_240
        (-1L), // p_685->g_310
        5L, // p_685->g_347
        0xCB0FL, // p_685->g_369
        (-1L), // p_685->g_395
        1L, // p_685->g_397
        0x2AL, // p_685->g_399
        {9L,(-2L),9L,9L,(-2L),9L}, // p_685->g_400
        1UL, // p_685->g_401
        0x74A68DBBL, // p_685->g_411
        (void*)0, // p_685->g_460
        0x0DE0247BL, // p_685->g_498
        0x16L, // p_685->g_504
        &p_685->g_73, // p_685->g_506
        &p_685->g_506, // p_685->g_505
        &p_685->g_192, // p_685->g_525
        (-8L), // p_685->g_527
        0x56EA87B755BC7DE7L, // p_685->g_561
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_685->g_608
        &p_685->g_103, // p_685->g_610
        &p_685->g_400[2], // p_685->g_637
        0xA164L, // p_685->g_646
    };
    c_686 = c_687;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_685);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_685->g_14[i][j][k], "p_685->g_14[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_685->g_24, "p_685->g_24", print_hash_value);
    transparent_crc(p_685->g_31, "p_685->g_31", print_hash_value);
    transparent_crc(p_685->g_37, "p_685->g_37", print_hash_value);
    transparent_crc(p_685->g_42, "p_685->g_42", print_hash_value);
    transparent_crc(p_685->g_46, "p_685->g_46", print_hash_value);
    transparent_crc(p_685->g_73, "p_685->g_73", print_hash_value);
    transparent_crc(p_685->g_97, "p_685->g_97", print_hash_value);
    transparent_crc(p_685->g_120, "p_685->g_120", print_hash_value);
    transparent_crc(p_685->g_173, "p_685->g_173", print_hash_value);
    transparent_crc(p_685->g_187, "p_685->g_187", print_hash_value);
    transparent_crc(p_685->g_188, "p_685->g_188", print_hash_value);
    transparent_crc(p_685->g_192, "p_685->g_192", print_hash_value);
    transparent_crc(p_685->g_226, "p_685->g_226", print_hash_value);
    transparent_crc(p_685->g_228, "p_685->g_228", print_hash_value);
    transparent_crc(p_685->g_310, "p_685->g_310", print_hash_value);
    transparent_crc(p_685->g_347, "p_685->g_347", print_hash_value);
    transparent_crc(p_685->g_369, "p_685->g_369", print_hash_value);
    transparent_crc(p_685->g_395, "p_685->g_395", print_hash_value);
    transparent_crc(p_685->g_397, "p_685->g_397", print_hash_value);
    transparent_crc(p_685->g_399, "p_685->g_399", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_685->g_400[i], "p_685->g_400[i]", print_hash_value);

    }
    transparent_crc(p_685->g_401, "p_685->g_401", print_hash_value);
    transparent_crc(p_685->g_411, "p_685->g_411", print_hash_value);
    transparent_crc(p_685->g_498, "p_685->g_498", print_hash_value);
    transparent_crc(p_685->g_504, "p_685->g_504", print_hash_value);
    transparent_crc(p_685->g_527, "p_685->g_527", print_hash_value);
    transparent_crc(p_685->g_561, "p_685->g_561", print_hash_value);
    transparent_crc(p_685->g_646, "p_685->g_646", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
