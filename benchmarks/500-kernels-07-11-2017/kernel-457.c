// -g 56,14,8 -l 2,14,4
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


// Seed: 2777086338

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint64_t  f0;
};

struct S1 {
    uint16_t g_8;
    int32_t g_10;
    int32_t g_22;
    int32_t g_29;
    volatile uint64_t g_31[2];
    int32_t *g_45;
    int32_t **g_44[6];
    int32_t ***g_77[9];
    int32_t ****g_76[8][9];
    uint64_t g_79;
    uint64_t *g_78[1];
    int32_t *g_92;
    int32_t ** volatile g_91;
    volatile union U0 g_105;
    int16_t g_116[6];
    int32_t *** volatile g_121;
    union U0 g_124;
    uint32_t g_154;
    int8_t g_164;
    uint32_t g_177;
    int64_t g_194;
    volatile int32_t *g_195;
    uint32_t g_202;
    int8_t g_205;
    int32_t g_206[3];
    uint8_t g_233;
    uint8_t *g_232;
    volatile union U0 g_236[5];
    int64_t g_263[10];
    uint8_t g_265;
    int8_t g_266;
    uint16_t g_272;
    int32_t g_314;
    int64_t g_315[2][4][2];
    uint64_t g_374;
    volatile int8_t * volatile g_400;
    volatile int8_t * volatile *g_399;
    union U0 g_484[4][7];
    uint32_t g_495;
    int16_t g_500;
    volatile union U0 g_506;
    volatile uint32_t g_520;
    int64_t *g_532;
    int64_t **g_531[4][7];
    uint16_t g_541;
    uint16_t g_543;
    uint16_t g_579[5];
    int32_t *g_600;
    int32_t **g_599[5];
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S1 * p_640);
int32_t * func_2(uint64_t  p_3, int32_t * p_4, int64_t  p_5, int32_t * p_6, int32_t * p_7, struct S1 * p_640);
int64_t  func_11(int32_t  p_12, uint8_t  p_13, struct S1 * p_640);
int32_t * func_15(int32_t * p_16, uint64_t  p_17, int64_t  p_18, struct S1 * p_640);
uint8_t  func_40(uint64_t  p_41, struct S1 * p_640);
int32_t *** func_48(int8_t  p_49, int64_t  p_50, struct S1 * p_640);
int32_t *** func_56(int32_t  p_57, uint64_t * p_58, uint64_t * p_59, uint32_t  p_60, uint32_t  p_61, struct S1 * p_640);
uint64_t * func_62(int32_t **** p_63, int16_t  p_64, int32_t * p_65, int32_t * p_66, struct S1 * p_640);
int32_t **** func_67(uint32_t  p_68, int32_t  p_69, uint64_t * p_70, int8_t  p_71, uint32_t  p_72, struct S1 * p_640);
int32_t * func_97(uint64_t * p_98, uint32_t  p_99, int64_t  p_100, int16_t  p_101, struct S1 * p_640);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_640->g_8 p_640->g_10 p_640->g_22 p_640->g_31 p_640->g_29 p_640->g_44 p_640->g_45 p_640->g_92 p_640->g_116 p_640->g_272 p_640->g_531 p_640->g_232 p_640->g_233 p_640->g_315 p_640->g_541 p_640->g_177 p_640->g_484.f0 p_640->g_314 p_640->g_263 p_640->g_579 p_640->g_164 p_640->g_599 p_640->g_266 p_640->g_484 p_640->g_265 p_640->g_543 p_640->g_91
 * writes: p_640->g_22 p_640->g_31 p_640->g_10 p_640->g_29 p_640->g_8 p_640->g_44 p_640->g_272 p_640->g_495 p_640->g_531 p_640->g_233 p_640->g_541 p_640->g_543 p_640->g_177 p_640->g_202 p_640->g_266 p_640->g_579 p_640->g_116 p_640->g_77 p_640->g_599 p_640->g_265 p_640->g_76 p_640->g_315
 */
uint16_t  func_1(struct S1 * p_640)
{ /* block id: 4 */
    int32_t *l_9 = &p_640->g_10;
    uint32_t l_14 = 6UL;
    int32_t *l_639 = (void*)0;
    l_639 = func_2(p_640->g_8, l_9, func_11((1L && (+p_640->g_10)), l_14, p_640), func_15(&p_640->g_10, (safe_sub_func_int16_t_s_s(3L, (6UL | p_640->g_8))), (*l_9), p_640), &p_640->g_22, p_640);
    (*l_9) = (*l_9);
    return (*l_9);
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_22 p_640->g_31 p_640->g_8 p_640->g_29 p_640->g_44 p_640->g_45 p_640->g_92 p_640->g_116 p_640->g_272 p_640->g_531 p_640->g_232 p_640->g_233 p_640->g_315 p_640->g_541 p_640->g_177 p_640->g_484.f0 p_640->g_10 p_640->g_314 p_640->g_263 p_640->g_579 p_640->g_164 p_640->g_599 p_640->g_266 p_640->g_484 p_640->g_265 p_640->g_543 p_640->g_91
 * writes: p_640->g_22 p_640->g_31 p_640->g_10 p_640->g_29 p_640->g_8 p_640->g_44 p_640->g_272 p_640->g_495 p_640->g_531 p_640->g_233 p_640->g_541 p_640->g_543 p_640->g_177 p_640->g_202 p_640->g_266 p_640->g_579 p_640->g_116 p_640->g_77 p_640->g_599 p_640->g_265 p_640->g_76 p_640->g_315
 */
int32_t * func_2(uint64_t  p_3, int32_t * p_4, int64_t  p_5, int32_t * p_6, int32_t * p_7, struct S1 * p_640)
{ /* block id: 10 */
    uint32_t l_24[1][3][6] = {{{0xF79B347DL,4294967294UL,0xF79B347DL,0xF79B347DL,4294967294UL,0xF79B347DL},{0xF79B347DL,4294967294UL,0xF79B347DL,0xF79B347DL,4294967294UL,0xF79B347DL},{0xF79B347DL,4294967294UL,0xF79B347DL,0xF79B347DL,4294967294UL,0xF79B347DL}}};
    int32_t l_25 = 0x0C3DA550L;
    int32_t l_28 = 1L;
    int32_t l_30[1];
    int32_t ***l_595[5][8] = {{&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1]},{&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1]},{&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1]},{&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1]},{&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1]}};
    int32_t *l_604 = &p_640->g_314;
    int64_t l_613 = (-1L);
    uint16_t l_638[1][3][5] = {{{1UL,0x1E53L,65533UL,0x1E53L,1UL},{1UL,0x1E53L,65533UL,0x1E53L,1UL},{1UL,0x1E53L,65533UL,0x1E53L,1UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_30[i] = 1L;
    for (p_640->g_22 = 0; (p_640->g_22 >= 0); p_640->g_22 -= 1)
    { /* block id: 13 */
        int32_t *l_26 = &l_25;
        int32_t *l_27[3][9];
        int32_t l_608 = 0x17C667B3L;
        int16_t l_614[1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 9; j++)
                l_27[i][j] = (void*)0;
        }
        for (i = 0; i < 1; i++)
            l_614[i] = (-1L);
        if (l_24[0][0][4])
            break;
        p_640->g_31[0]--;
        for (l_25 = 0; (l_25 <= 0); l_25 += 1)
        { /* block id: 18 */
            int32_t **l_34 = &l_27[2][3];
            uint32_t l_37 = 0x020B2DE4L;
            int32_t l_522 = 2L;
            int32_t l_577 = 0x07815DE5L;
            int32_t l_578[2][9][3] = {{{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L}},{{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L},{0x42DF61CFL,(-1L),0x16E6EAD8L}}};
            int16_t l_610 = (-5L);
            int i, j, k;
            (*l_34) = (void*)0;
            for (p_5 = 0; (p_5 >= 0); p_5 -= 1)
            { /* block id: 22 */
                p_640->g_29 ^= (func_11(((*p_4) = (safe_rshift_func_uint16_t_u_u((l_37++), 15))), p_640->g_22, p_640) ^ 0x4CEAA963L);
            }
            l_522 ^= ((0x9FL ^ func_40(p_640->g_8, p_640)) < p_640->g_116[0]);
            for (p_640->g_272 = 0; (p_640->g_272 <= 0); p_640->g_272 += 1)
            { /* block id: 231 */
                int16_t *l_538 = (void*)0;
                uint8_t **l_570 = &p_640->g_232;
                int32_t l_574 = 0x3B0AB414L;
                int32_t l_609 = 0x5DAD1EF6L;
                int32_t l_611 = 0x78128E75L;
                int32_t l_612[7];
                uint8_t l_615 = 1UL;
                int i;
                for (i = 0; i < 7; i++)
                    l_612[i] = 1L;
                for (p_640->g_495 = 0; (p_640->g_495 <= 0); p_640->g_495 += 1)
                { /* block id: 234 */
                    uint8_t l_544 = 0UL;
                    int32_t l_545 = (-9L);
                    int16_t l_552 = 0x360BL;
                    int32_t l_571 = 0x71275505L;
                    int32_t *l_603 = (void*)0;
                    for (p_640->g_8 = 0; (p_640->g_8 <= 1); p_640->g_8 += 1)
                    { /* block id: 237 */
                        int64_t ***l_533 = &p_640->g_531[3][4];
                        uint16_t *l_539 = (void*)0;
                        uint16_t *l_540 = &p_640->g_541;
                        uint16_t *l_542 = &p_640->g_543;
                        int64_t *l_561[10][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                        uint32_t *l_572 = (void*)0;
                        uint32_t *l_573 = &p_640->g_177;
                        int i, j, k;
                        (*p_640->g_92) = (l_545 ^= (safe_div_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(p_640->g_31[(p_640->g_272 + 1)], (((safe_add_func_uint16_t_u_u(((*l_542) = (((*l_540) &= ((safe_rshift_func_int16_t_s_s(0x497FL, (((*p_640->g_232) &= (((*l_533) = p_640->g_531[1][5]) == (void*)0)) || ((safe_mod_func_uint64_t_u_u(((+(safe_sub_func_uint16_t_u_u(((void*)0 == l_538), p_640->g_315[1][3][1]))) , (((((void*)0 == &p_640->g_232) & 0x4E7EF7F5EFEF09CBL) || p_5) == 0x4D3C7807090B9589L)), p_5)) , 0x45L)))) != 9L)) || 1UL)), l_544)) & 0x327662645B925490L) ^ p_3))) ^ p_5) | p_640->g_177), 1UL)));
                        (*p_640->g_45) |= (safe_mod_func_int64_t_s_s((p_5 = p_640->g_484[3][5].f0), (4294967292UL & p_3)));
                        (*p_640->g_45) = (safe_sub_func_int32_t_s_s(p_640->g_31[(p_640->g_272 + 1)], (p_640->g_202 = (safe_rshift_func_int16_t_s_u((l_552 || p_5), ((((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((((65526UL & (4L && (((l_561[1][4][0] == &p_640->g_315[0][1][0]) ^ (safe_lshift_func_uint16_t_u_u((((*l_542) = 0x8A1BL) >= ((safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((*p_640->g_232) = (((*l_573) = (((((safe_lshift_func_uint8_t_u_s((*l_26), p_640->g_315[1][0][1])) , p_5) , l_570) == &p_640->g_232) , l_571)) == (*p_7))), 2)), p_3)) , 0x333AL)), p_5))) , 0xE09FL))) ^ p_640->g_314) & p_640->g_263[4]) == p_640->g_314), 15)), p_5)), p_5)) | (*l_26)), l_574)) <= p_3) < p_5) , 9UL))))));
                    }
                    for (p_640->g_266 = 0; (p_640->g_266 >= 0); p_640->g_266 -= 1)
                    { /* block id: 254 */
                        int32_t l_575 = 1L;
                        int32_t l_576 = (-1L);
                        uint16_t *l_592 = (void*)0;
                        uint16_t *l_593 = &p_640->g_579[0];
                        int16_t *l_594 = &p_640->g_116[0];
                        int32_t ****l_596 = &p_640->g_77[3];
                        int32_t ***l_601 = (void*)0;
                        int32_t ***l_602 = &p_640->g_599[1];
                        uint8_t *l_605 = &p_640->g_265;
                        uint8_t *l_606 = (void*)0;
                        uint8_t *l_607 = &l_544;
                        int i, j;
                        p_640->g_579[1]--;
                        (*p_640->g_92) = (0x4DF26C3CL ^ (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int64_t_s_s((((l_30[p_640->g_22] && ((((safe_div_func_uint8_t_u_u(((*l_607) &= ((*l_605) |= ((p_5 & ((((((*l_602) = ((safe_mul_func_uint8_t_u_u(((p_640->g_263[5] | (p_640->g_8 = (((*l_593) = (+p_3)) > ((*l_594) = p_640->g_164)))) > (l_595[3][6] != ((*l_596) = l_595[3][6]))), (safe_mul_func_uint8_t_u_u((*p_640->g_232), p_5)))) , p_640->g_599[0])) != (void*)0) , p_640->g_484[(p_640->g_272 + 2)][(p_640->g_266 + 4)]) , l_603) == l_604)) > 0x6EL))), 0xFFL)) != p_3) <= p_5) , 3UL)) >= 0x78D975B5L) , l_571), p_640->g_177)) | p_5), p_640->g_266)));
                    }
                }
                l_615--;
            }
        }
    }
    for (p_640->g_543 = 11; (p_640->g_543 >= 5); p_640->g_543 = safe_sub_func_uint64_t_u_u(p_640->g_543, 9))
    { /* block id: 272 */
        uint64_t l_620 = 0x5AAC3AF257852AE5L;
        int64_t *l_623 = &p_640->g_315[1][3][1];
        uint64_t *l_635[8][3][10] = {{{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0},{(void*)0,(void*)0,&p_640->g_374,(void*)0,&l_620,&l_620,&p_640->g_79,&p_640->g_79,(void*)0,(void*)0}}};
        int32_t *****l_636[9][2][3] = {{{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]},{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]}},{{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]},{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]}},{{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]},{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]}},{{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]},{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]}},{{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]},{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]}},{{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]},{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]}},{{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]},{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]}},{{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]},{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]}},{{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]},{&p_640->g_76[7][1],&p_640->g_76[5][0],&p_640->g_76[2][3]}}};
        uint32_t l_637 = 0xA1FD605DL;
        int i, j, k;
        (*p_640->g_45) &= l_620;
        (*p_7) = (safe_lshift_func_int8_t_s_s((p_5 , ((l_623 == ((((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((p_3 = (safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_5 , ((*p_640->g_232) |= (p_5 < 0x24L))), p_5)), 10))))) || ((*l_623) = ((p_5 > ((((*p_4) = ((p_640->g_76[2][3] = (void*)0) == (((*p_640->g_91) == p_4) , (void*)0))) <= (*p_7)) > (-10L))) == 0xAE2CF4981887AD27L))), l_637)), (*p_7))) | 1L), p_5)) || l_638[0][0][0]) , p_3) , (void*)0)) , p_5)), 5));
    }
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_8
 * writes:
 */
int64_t  func_11(int32_t  p_12, uint8_t  p_13, struct S1 * p_640)
{ /* block id: 5 */
    return p_640->g_8;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_15(int32_t * p_16, uint64_t  p_17, int64_t  p_18, struct S1 * p_640)
{ /* block id: 7 */
    int32_t *l_21[2][5] = {{(void*)0,&p_640->g_10,&p_640->g_22,&p_640->g_10,(void*)0},{(void*)0,&p_640->g_10,&p_640->g_22,&p_640->g_10,(void*)0}};
    int8_t l_23 = (-5L);
    int i, j;
    l_23 ^= 0x4A90C6D2L;
    return l_21[0][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_8 p_640->g_44 p_640->g_45 p_640->g_92
 * writes: p_640->g_8 p_640->g_44 p_640->g_10 p_640->g_29
 */
uint8_t  func_40(uint64_t  p_41, struct S1 * p_640)
{ /* block id: 27 */
    int32_t **l_47 = &p_640->g_45;
    int32_t ***l_55 = &p_640->g_44[5];
    int32_t l_73[5];
    int32_t ***l_133 = &p_640->g_44[1];
    int32_t ***l_521 = &p_640->g_44[1];
    int i;
    for (i = 0; i < 5; i++)
        l_73[i] = 5L;
    for (p_640->g_8 = 0; (p_640->g_8 != 28); p_640->g_8 = safe_add_func_uint32_t_u_u(p_640->g_8, 1))
    { /* block id: 30 */
        int32_t ***l_46[4] = {&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1],&p_640->g_44[1]};
        uint64_t *l_53 = (void*)0;
        int32_t ****l_54[7];
        int i;
        for (i = 0; i < 7; i++)
            l_54[i] = &l_46[2];
        l_47 = (p_640->g_44[1] = p_640->g_44[1]);
    }
    (*p_640->g_92) = ((***l_521) = p_41);
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_10 p_640->g_154 p_640->g_29 p_640->g_124.f0 p_640->g_45 p_640->g_177 p_640->g_8 p_640->g_105.f0 p_640->g_194 p_640->g_195 p_640->g_31 p_640->g_78 p_640->g_202 p_640->g_205 p_640->g_121 p_640->g_44 p_640->g_124 p_640->g_206 p_640->g_91 p_640->g_92 p_640->g_232 p_640->g_236 p_640->g_233 p_640->g_265 p_640->g_266 p_640->g_77 p_640->g_263 p_640->g_116 p_640->g_315 p_640->g_22 p_640->g_374 p_640->g_164 p_640->g_79 p_640->g_399 p_640->g_272 p_640->g_484 p_640->g_500 p_640->g_506 p_640->g_520
 * writes: p_640->g_10 p_640->g_29 p_640->g_116 p_640->g_154 p_640->g_164 p_640->g_45 p_640->g_177 p_640->g_194 p_640->g_79 p_640->g_202 p_640->g_205 p_640->g_206 p_640->g_232 p_640->g_92 p_640->g_263 p_640->g_266 p_640->g_272 p_640->g_233 p_640->g_314 p_640->g_495
 */
int32_t *** func_48(int8_t  p_49, int64_t  p_50, struct S1 * p_640)
{ /* block id: 63 */
    uint8_t l_150[1];
    uint64_t **l_161 = (void*)0;
    int32_t *l_165 = &p_640->g_29;
    int32_t ****l_207 = &p_640->g_77[5];
    uint64_t *l_228[7][10] = {{&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79},{&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79},{&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79},{&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79},{&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79},{&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79},{&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79,&p_640->g_79}};
    int16_t *l_229 = &p_640->g_116[5];
    int64_t *l_243 = &p_640->g_194;
    int8_t *l_287[2][10] = {{&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205},{&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205,&p_640->g_205}};
    int32_t l_341 = 0x4583559AL;
    int32_t l_346 = (-4L);
    int32_t l_347 = 0x45A4210CL;
    int32_t l_350 = 0x20E9E221L;
    int64_t l_389 = 1L;
    int8_t l_498 = (-1L);
    int16_t l_499 = (-9L);
    uint32_t *l_519 = &p_640->g_495;
    int i, j;
    for (i = 0; i < 1; i++)
        l_150[i] = 1UL;
    for (p_640->g_10 = 0; (p_640->g_10 <= 5); p_640->g_10 += 1)
    { /* block id: 66 */
        int32_t *l_134 = &p_640->g_29;
        int16_t *l_141[8] = {&p_640->g_116[0],&p_640->g_116[0],&p_640->g_116[0],&p_640->g_116[0],&p_640->g_116[0],&p_640->g_116[0],&p_640->g_116[0],&p_640->g_116[0]};
        uint32_t *l_153 = &p_640->g_154;
        uint64_t **l_162 = &p_640->g_78[0];
        int8_t *l_163 = &p_640->g_164;
        int32_t **l_166 = &p_640->g_45;
        uint8_t *l_180 = (void*)0;
        uint8_t *l_181 = &l_150[0];
        uint64_t **l_258 = &p_640->g_78[0];
        int64_t *l_306 = (void*)0;
        int32_t *l_333[2];
        int32_t l_340 = 0x7BD0E14EL;
        int32_t l_423 = 1L;
        int32_t l_425 = (-8L);
        int32_t l_426[10] = {0x28CA52ECL,3L,0x312F658DL,3L,0x28CA52ECL,0x28CA52ECL,3L,0x312F658DL,3L,0x28CA52ECL};
        uint64_t l_468 = 0xF13F6723C9576F69L;
        int i;
        for (i = 0; i < 2; i++)
            l_333[i] = (void*)0;
        (*l_134) = ((void*)0 != l_134);
        (*l_166) = (((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((*l_163) = (safe_mul_func_int16_t_s_s((p_640->g_116[0] = 1L), (p_50 >= (((safe_add_func_uint8_t_u_u(0xF5L, ((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(l_150[0], (safe_div_func_uint32_t_u_u((--(*l_153)), ((*l_134) & p_50))))) , (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((void*)0 != l_161), (l_162 != l_162))), 0x8982L))), p_640->g_124.f0)), l_150[0])) , l_150[0]))) , 0x41009BDDL) , p_640->g_154))))), 0L)) <= 7UL), 4)) || 0x64293352L) , l_165);
        if (((((safe_lshift_func_int8_t_s_s((+7L), (safe_rshift_func_uint16_t_u_u(((**l_166) < ((((((*l_165) == (0x47D6L || (((*l_181) &= (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((-5L), (*l_134))) ^ ((((safe_lshift_func_uint16_t_u_u((p_640->g_177 ^= (p_50 > p_50)), 15)) ^ (safe_div_func_int8_t_s_s(p_50, p_640->g_8))) , p_640->g_105.f0) >= (-1L))), (*l_165)))) || p_49))) < p_640->g_8) || (*l_134)) < (*l_165)) , p_640->g_154)), p_640->g_10)))) & p_49) ^ p_50) & p_49))
        { /* block id: 74 */
            int8_t l_192 = 0x0AL;
            int64_t *l_193[4] = {&p_640->g_194,&p_640->g_194,&p_640->g_194,&p_640->g_194};
            int8_t *l_203 = (void*)0;
            int8_t *l_204 = &p_640->g_205;
            int16_t *l_225 = &p_640->g_116[5];
            int32_t *l_226[5] = {&p_640->g_29,&p_640->g_29,&p_640->g_29,&p_640->g_29,&p_640->g_29};
            int32_t *l_227 = &p_640->g_22;
            uint16_t l_351 = 0xE853L;
            uint16_t l_375[3];
            uint64_t l_429 = 18446744073709551614UL;
            int i;
            for (i = 0; i < 3; i++)
                l_375[i] = 0x0719L;
            if ((safe_mul_func_uint16_t_u_u((65535UL & (safe_add_func_int32_t_s_s((((((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_192, 9)), (p_640->g_206[0] = (((*l_166) != ((p_640->g_194 |= l_192) , p_640->g_195)) != ((*l_204) ^= (safe_sub_func_int64_t_s_s(((((**l_166) | (p_640->g_31[0] >= (((safe_sub_func_int16_t_s_s(((p_640->g_164 = ((p_640->g_202 ^= (p_640->g_116[1] = (safe_sub_func_int64_t_s_s(((+((((((**l_162) = (p_50 , p_49)) == (**l_166)) | p_49) >= p_50) , p_49)) <= (*l_165)), l_192)))) ^ p_640->g_8)) == (-3L)), (*l_165))) == p_640->g_177) , l_192))) & (*l_165)) <= p_640->g_10), p_49))))))), l_192)) | (-8L)) == (*l_165)) >= 1L) > p_640->g_154), 0x1C3E0AC1L))), p_640->g_8)))
            { /* block id: 82 */
                uint32_t l_224 = 0x26705212L;
                uint64_t **l_256 = (void*)0;
                int64_t *l_305 = &p_640->g_263[8];
                int64_t **l_307[4][2][10] = {{{&l_193[0],(void*)0,&l_193[1],(void*)0,&l_193[0],&l_193[1],&l_193[0],&l_243,(void*)0,&l_193[0]},{&l_193[0],(void*)0,&l_193[1],(void*)0,&l_193[0],&l_193[1],&l_193[0],&l_243,(void*)0,&l_193[0]}},{{&l_193[0],(void*)0,&l_193[1],(void*)0,&l_193[0],&l_193[1],&l_193[0],&l_243,(void*)0,&l_193[0]},{&l_193[0],(void*)0,&l_193[1],(void*)0,&l_193[0],&l_193[1],&l_193[0],&l_243,(void*)0,&l_193[0]}},{{&l_193[0],(void*)0,&l_193[1],(void*)0,&l_193[0],&l_193[1],&l_193[0],&l_243,(void*)0,&l_193[0]},{&l_193[0],(void*)0,&l_193[1],(void*)0,&l_193[0],&l_193[1],&l_193[0],&l_243,(void*)0,&l_193[0]}},{{&l_193[0],(void*)0,&l_193[1],(void*)0,&l_193[0],&l_193[1],&l_193[0],&l_243,(void*)0,&l_193[0]},{&l_193[0],(void*)0,&l_193[1],(void*)0,&l_193[0],&l_193[1],&l_193[0],&l_243,(void*)0,&l_193[0]}}};
                int32_t l_316 = 0x1B4452C0L;
                int32_t *l_334 = &p_640->g_314;
                int i, j, k;
                for (p_640->g_177 = 1; (p_640->g_177 <= 7); p_640->g_177 += 1)
                { /* block id: 85 */
                    uint16_t *l_271 = &p_640->g_272;
                    int i, j;
                    if ((***p_640->g_121))
                        break;
                    if ((l_193[0] != (l_228[2][6] = (p_640->g_124 , func_62(&p_640->g_77[5], p_640->g_206[2], l_227, (*p_640->g_91), p_640)))))
                    { /* block id: 90 */
                        int32_t *l_237[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_237[i] = &p_640->g_29;
                        (*l_166) = func_15((*l_166), ((p_640->g_206[1] || (p_640->g_10 , p_50)) && (&p_640->g_116[4] != l_229)), ((safe_mod_func_int32_t_s_s((!((p_640->g_232 = p_640->g_232) != &p_640->g_233)), (safe_rshift_func_int16_t_s_s((p_640->g_236[1] , 1L), 15)))) , p_640->g_8), p_640);
                        (*p_640->g_91) = l_226[4];
                        l_226[1] = l_237[0];
                    }
                    else
                    { /* block id: 95 */
                        int64_t **l_242[7] = {&l_193[2],&l_193[2],&l_193[2],&l_193[2],&l_193[2],&l_193[2],&l_193[2]};
                        uint64_t ***l_257[3][2] = {{&l_161,&l_161},{&l_161,&l_161},{&l_161,&l_161}};
                        int64_t *l_261 = (void*)0;
                        int64_t *l_262 = &p_640->g_263[5];
                        int32_t l_264 = (-2L);
                        int i, j;
                        p_640->g_266 ^= (safe_add_func_int16_t_s_s(p_640->g_31[0], (safe_sub_func_int32_t_s_s(((l_243 = &p_50) == &p_50), (((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((((safe_div_func_int16_t_s_s(((*l_229) = (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((l_162 = l_256) == l_258) && (safe_add_func_uint16_t_u_u((p_49 == ((p_640->g_206[1] && ((((*l_262) = (*l_134)) ^ (18446744073709551615UL == p_49)) && 0x529BL)) != p_50)), 1L))), 0)), 1))), 0x6949L)) || p_49) <= l_264) , 0x414FL), 65533UL)), (**l_166))), (*p_640->g_232))) , p_640->g_202) & p_640->g_265)))));
                        return (*l_207);
                    }
                    (*l_166) = (*p_640->g_91);
                    (*l_134) &= (safe_sub_func_uint16_t_u_u((!((*l_271) = (safe_mul_func_int8_t_s_s(p_640->g_206[1], 250UL)))), 0x05A4L));
                }
                if (((void*)0 == &p_640->g_233))
                { /* block id: 107 */
                    int8_t **l_288 = &l_203;
                    uint16_t *l_303 = &p_640->g_272;
                    int32_t l_304[9][2] = {{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}};
                    int32_t *l_312 = (void*)0;
                    int32_t *l_313 = &p_640->g_314;
                    int i, j;
                    l_304[8][1] ^= (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((*p_640->g_232) , (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(p_49, ((l_287[0][4] == ((*l_288) = (void*)0)) | 4294967290UL))) > (safe_div_func_uint16_t_u_u((p_49 | ((p_640->g_263[9] <= ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((*p_640->g_232) = ((safe_sub_func_uint16_t_u_u(((*l_303) = (((safe_rshift_func_uint8_t_u_u(l_224, 6)) , p_640->g_205) , 0x7CA8L)), 1UL)) , (*p_640->g_232))), p_640->g_31[0])), 0x00L)) > p_640->g_116[0])) >= p_49)), 1UL))) == (*p_640->g_45)), p_50)), 0xE6L))), p_640->g_29)), p_640->g_205)) , 7L) == 0x37760ADB3E631B1CL), 5)) != p_50), p_640->g_194));
                    (*p_640->g_45) |= (l_305 == l_306);
                    l_316 |= ((**l_166) = ((0x116205D5L && ((*l_153) |= l_224)) <= (((l_307[3][1][8] == (l_304[1][1] , l_307[3][1][8])) , 1UL) , ((((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((&l_166 != (void*)0) , ((*l_313) = p_640->g_194)) , p_640->g_105.f0), 7L)), p_640->g_315[1][3][1])) > p_640->g_315[1][3][1]) > p_640->g_263[1]) < 1UL))));
                }
                else
                { /* block id: 117 */
                    int32_t *l_329 = &p_640->g_10;
                    for (l_224 = 1; (l_224 <= 5); l_224 += 1)
                    { /* block id: 120 */
                        int32_t *****l_321[10] = {&l_207,&l_207,&l_207,&l_207,&l_207,&l_207,&l_207,&l_207,&l_207,&l_207};
                        int8_t **l_328 = &l_287[0][1];
                        int32_t *l_331 = &p_640->g_314;
                        int32_t **l_330 = &l_331;
                        int32_t **l_332 = (void*)0;
                        int i;
                        (*l_165) &= (((void*)0 == l_229) <= (safe_lshift_func_uint8_t_u_s(((((safe_mul_func_int8_t_s_s(p_640->g_22, (((l_333[1] = ((*l_330) = l_329)) == l_334) && 0x94BE247A6F84FC0DL))) >= 0UL) || p_50) < p_640->g_205), p_49)));
                    }
                }
                if ((*l_227))
                    break;
            }
            else
            { /* block id: 129 */
                uint32_t l_335 = 6UL;
                int32_t *l_338[8] = {&p_640->g_10,&p_640->g_10,&p_640->g_10,&p_640->g_10,&p_640->g_10,&p_640->g_10,&p_640->g_10,&p_640->g_10};
                uint8_t *l_365 = &l_150[0];
                int32_t ****l_378 = &p_640->g_77[4];
                int8_t l_397 = (-1L);
                int i;
                if (l_335)
                    break;
                if ((safe_rshift_func_uint8_t_u_s(5UL, 2)))
                { /* block id: 131 */
                    (*l_166) = l_338[7];
                }
                else
                { /* block id: 133 */
                    uint16_t l_339 = 65531UL;
                    int32_t l_342 = (-8L);
                    int32_t l_348[4][4][5] = {{{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L}},{{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L}},{{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L}},{{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L},{0x20B93BEBL,0x7E4F28C9L,0L,0x69215919L,0L}}};
                    uint8_t **l_366 = &p_640->g_232;
                    uint16_t *l_367 = &l_339;
                    uint16_t *l_376 = (void*)0;
                    uint16_t *l_377 = &l_351;
                    int8_t l_421[2][9] = {{0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L},{0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L}};
                    int i, j, k;
                    for (p_640->g_194 = 0; (p_640->g_194 <= 7); p_640->g_194 += 1)
                    { /* block id: 136 */
                        return (*l_207);
                    }
                    if (l_339)
                    { /* block id: 139 */
                        int32_t l_343 = 0x1CFE8390L;
                        int32_t l_344 = 9L;
                        int32_t l_345 = 0x4AC9608DL;
                        int32_t l_349 = 5L;
                        int i;
                        l_351++;
                        if (p_50)
                            continue;
                    }
                    else
                    { /* block id: 142 */
                        int32_t ***l_354 = (void*)0;
                        (*p_640->g_45) = p_50;
                        (*l_166) = l_226[4];
                        if (p_49)
                            break;
                        return l_354;
                    }
                    l_350 &= ((((1UL && 0x4D7AL) > (safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(((*l_377) = (safe_lshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(p_640->g_202, (safe_add_func_uint16_t_u_u(((*l_367) = (l_163 == ((*l_366) = l_365))), (0x3AL < ((safe_div_func_uint32_t_u_u(2UL, ((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((((!p_50) > p_640->g_374) || p_640->g_205) || 0x2E49ED9AD2610EC7L), l_348[1][0][2])), p_49)) , p_640->g_31[1]) >= p_640->g_154) , 0x642C6116L))) <= 4294967291UL)))))) & 0xFE4B67363E014B91L) < l_375[2]), 13))), p_640->g_164)) ^ (*l_134)), 0x1CDC397BF920FC7BL))) & 0x694BL) & p_50);
                    if ((l_378 != &p_640->g_121))
                    { /* block id: 152 */
                        int16_t l_379 = 0x3E4BL;
                        int32_t **l_382 = &l_338[7];
                        int64_t *l_396[9] = {&l_389,&l_389,&l_389,&l_389,&l_389,&l_389,&l_389,&l_389,&l_389};
                        int8_t **l_398[9];
                        int8_t ***l_417 = &l_398[8];
                        int32_t l_418 = (-1L);
                        int i;
                        for (i = 0; i < 9; i++)
                            l_398[i] = &l_203;
                        if (p_50)
                            break;
                        l_350 &= (((((l_379 != p_50) >= ((((p_640->g_124.f0 , (safe_mod_func_uint64_t_u_u((l_382 == (void*)0), (((((*l_243) &= (-9L)) , &l_339) != ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((l_389 && (safe_rshift_func_int16_t_s_u(((*l_229) = (safe_add_func_uint32_t_u_u(((~((**l_162)--)) & ((*l_134) ^= (l_348[0][3][1] = ((0x7839F555241AA35AL ^ l_342) == 0L)))), p_49))), 4))) <= l_397), l_339)) && (*l_134)), p_49)), 12)) , &p_640->g_272)) ^ 1L)))) | 0L) , l_398[8]) != p_640->g_399)) == 0x1193B4A5A0E8362BL) != 1L) , l_379);
                        l_418 |= ((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((l_134 != &p_640->g_314) && ((***p_640->g_121) &= ((safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s((((*l_365)--) != (p_50 < p_640->g_272)), (safe_rshift_func_uint8_t_u_s((p_49 <= (safe_add_func_uint8_t_u_u(p_49, (safe_rshift_func_int8_t_s_u(((*l_204) &= (0xEAD85ACF154E1770L == ((((*l_417) = &l_287[0][4]) != &p_640->g_400) > (-8L)))), p_640->g_374))))), 2)))) , p_640->g_22), 0x6480L)) & 0x60L))), p_50)), 0x0BD5CAA2F1588C48L)) == p_50);
                        (*l_134) = p_50;
                    }
                    else
                    { /* block id: 166 */
                        int64_t l_419 = 2L;
                        int32_t l_420 = 0x1B086EDBL;
                        int32_t l_422 = 3L;
                        int32_t l_424 = (-1L);
                        int32_t l_427 = 0x2E69DD27L;
                        int32_t l_428[4][6][9] = {{{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL}},{{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL}},{{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL}},{{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL},{(-1L),5L,(-1L),0x7A0D4CE7L,0x5EF5D37AL,0x2A4C82FFL,0x71D502BBL,0x79AC501FL,0x2659F86BL}}};
                        int i, j, k;
                        ++l_429;
                    }
                }
            }
            if (p_49)
                break;
            if (p_49)
                continue;
        }
        else
        { /* block id: 173 */
            int32_t *l_432 = &l_340;
            uint16_t *l_439 = &p_640->g_272;
            int32_t l_442 = 0x3ECC7A56L;
            uint64_t *l_465 = &p_640->g_374;
            (*l_166) = l_432;
            (*l_432) = (((((((*l_432) != ((((**l_166) >= (safe_sub_func_int8_t_s_s(p_50, ((*l_134) < (safe_mul_func_uint8_t_u_u((*p_640->g_232), ((safe_div_func_int32_t_s_s(((p_50 > ((*l_439) ^= ((void*)0 == (*l_207)))) , (-7L)), p_50)) , (*l_432)))))))) < p_50) & (**l_166))) , p_640->g_29) == 0x5FC8FABCA3F5977CL) < p_640->g_263[2]) && p_49) != p_49);
            for (p_640->g_205 = 0; (p_640->g_205 > (-3)); p_640->g_205 = safe_sub_func_uint8_t_u_u(p_640->g_205, 1))
            { /* block id: 179 */
                uint64_t l_443[4];
                int32_t l_456 = 0x608300BCL;
                int i;
                for (i = 0; i < 4; i++)
                    l_443[i] = 0x6E5FCF05DBD966DFL;
                l_443[3]--;
                (*l_432) = (safe_mul_func_int16_t_s_s((l_456 = ((p_640->g_154 , ((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((*l_432), 11)), (safe_lshift_func_int16_t_s_u(((((p_49 ^ ((safe_lshift_func_uint16_t_u_s(((++(*l_153)) , 65535UL), p_50)) , 1L)) , ((**l_258) = 18446744073709551615UL)) > ((((((safe_mod_func_int16_t_s_s(((((((safe_add_func_int8_t_s_s(((*l_163) = (l_442 |= (safe_rshift_func_uint16_t_u_s(((void*)0 == l_465), 8)))), (*l_134))) && p_49) && (*p_640->g_232)) , p_50) ^ (-1L)) == p_50), p_640->g_315[0][1][0])) < p_640->g_263[5]) > p_640->g_206[0]) >= 0x1AL) & (***p_640->g_121)) , 18446744073709551615UL)) <= (*l_432)), 3)))) & p_640->g_263[5]) || (*l_134)) & l_456)) ^ 4294967295UL)), p_50));
            }
        }
        if ((safe_mul_func_int16_t_s_s(l_468, 1L)))
        { /* block id: 189 */
            int32_t l_479 = 0x6D3411EFL;
            int8_t l_480 = (-1L);
            (*l_165) = ((p_640->g_266 && ((((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(p_640->g_164, (+(safe_lshift_func_int16_t_s_s((!(p_50 >= 0x76433181C954C739L)), 3))))) <= p_50), 0x76L)) , &l_389) != l_306) , (((safe_add_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((((((((((p_640->g_154 != 1UL) == p_49) > p_50) | l_479) & p_640->g_263[5]) , p_640->g_31[1]) && 1UL) < p_50) | 9UL), 0x64D2L)) > l_480) != p_640->g_272), (*p_640->g_232))) & p_50) == l_480))) | p_50);
        }
        else
        { /* block id: 191 */
            int32_t l_481 = 0x0F94AE7EL;
            uint64_t ***l_485 = &l_162;
            for (p_640->g_164 = 0; (p_640->g_164 <= 1); p_640->g_164 += 1)
            { /* block id: 194 */
                uint64_t ***l_483[5][4][7] = {{{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258}},{{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258}},{{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258}},{{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258}},{{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258},{&l_258,&l_162,&l_258,&l_258,&l_258,&l_162,&l_258}}};
                uint64_t ****l_482 = &l_483[0][0][6];
                int32_t l_492 = 0x3E3A7BC4L;
                int32_t *l_496[6] = {&p_640->g_314,&p_640->g_314,&p_640->g_314,&p_640->g_314,&p_640->g_314,&p_640->g_314};
                int32_t **l_497 = &l_333[1];
                int32_t ***l_501 = &p_640->g_44[1];
                int i, j, k;
                if (l_481)
                    break;
                if (p_49)
                    break;
                (*l_134) = (((*l_482) = &l_161) != (p_640->g_484[3][5] , l_485));
                (*l_166) = func_15(&l_492, p_640->g_500, p_640->g_29, p_640);
                for (p_640->g_202 = 0; (p_640->g_202 <= 0); p_640->g_202 += 1)
                { /* block id: 205 */
                    return l_501;
                }
            }
            for (l_347 = 0; (l_347 <= (-18)); l_347 = safe_sub_func_uint16_t_u_u(l_347, 8))
            { /* block id: 211 */
                (*l_134) = p_50;
                return (*l_207);
            }
            return (*l_207);
        }
    }
    l_346 ^= (safe_add_func_uint32_t_u_u(((p_640->g_506 , (((*l_165) || (safe_rshift_func_int8_t_s_u(p_49, (safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(p_49, 0xA8AEL)) >= ((((*l_519) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((*p_640->g_232), 0)), (&p_640->g_116[0] == (((*l_165) = (p_50 == p_49)) , &l_499)))), p_640->g_265))) , p_50) || 0xEC672739L)), 0x5AE5L))))) < p_640->g_520)) && 0UL), p_49));
    return (*l_207);
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_79 p_640->g_8 p_640->g_29 p_640->g_31 p_640->g_22 p_640->g_91 p_640->g_105 p_640->g_121 p_640->g_124 p_640->g_45 p_640->g_116 p_640->g_92
 * writes: p_640->g_78 p_640->g_92 p_640->g_116 p_640->g_44 p_640->g_29
 */
int32_t *** func_56(int32_t  p_57, uint64_t * p_58, uint64_t * p_59, uint32_t  p_60, uint32_t  p_61, struct S1 * p_640)
{ /* block id: 40 */
    uint64_t *l_83 = &p_640->g_79;
    int32_t l_95 = (-1L);
    int32_t l_96 = 0x2980D529L;
    int32_t ***l_132 = &p_640->g_44[2];
    if ((!(safe_rshift_func_int8_t_s_s(func_11(p_57, p_640->g_79, p_640), 2))))
    { /* block id: 41 */
        uint64_t **l_82 = &p_640->g_78[0];
        int32_t **l_90 = (void*)0;
        (*p_640->g_91) = func_15((func_11((((((*l_82) = &p_640->g_79) != ((0x6F3AL || p_640->g_29) , (l_83 = &p_640->g_79))) != 0x47L) , (safe_lshift_func_int16_t_s_u(0x5092L, 10))), p_640->g_31[0], p_640) , ((safe_div_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(p_61, 0x164E9E25L)) , p_60), p_57)) , (void*)0)), p_640->g_22, p_61, p_640);
        for (p_57 = 17; (p_57 == (-26)); --p_57)
        { /* block id: 47 */
            l_96 = (l_95 = p_60);
        }
    }
    else
    { /* block id: 51 */
        int64_t l_102 = 1L;
        int16_t *l_114 = (void*)0;
        int16_t *l_115 = &p_640->g_116[0];
        int32_t **l_131 = &p_640->g_92;
        (*l_131) = func_97(&p_640->g_79, l_102, p_60, ((safe_mul_func_uint16_t_u_u(l_102, (+0x7CA3L))) , (p_640->g_105 , ((*l_115) = (safe_div_func_int64_t_s_s(p_640->g_79, (safe_mod_func_uint8_t_u_u(l_96, (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_60, l_96)), l_102))))))))), p_640);
    }
    return l_132;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_78
 * writes:
 */
uint64_t * func_62(int32_t **** p_63, int16_t  p_64, int32_t * p_65, int32_t * p_66, struct S1 * p_640)
{ /* block id: 38 */
    return p_640->g_78[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_76
 * writes:
 */
int32_t **** func_67(uint32_t  p_68, int32_t  p_69, uint64_t * p_70, int8_t  p_71, uint32_t  p_72, struct S1 * p_640)
{ /* block id: 36 */
    int32_t ***l_75 = &p_640->g_44[4];
    int32_t ****l_74 = &l_75;
    return p_640->g_76[2][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_121 p_640->g_124 p_640->g_45 p_640->g_79 p_640->g_116 p_640->g_92 p_640->g_29
 * writes: p_640->g_44 p_640->g_29
 */
int32_t * func_97(uint64_t * p_98, uint32_t  p_99, int64_t  p_100, int16_t  p_101, struct S1 * p_640)
{ /* block id: 53 */
    uint32_t l_117 = 0x23CC0FEBL;
    int32_t **l_120 = &p_640->g_45;
    uint8_t l_130 = 1UL;
    l_117++;
    (*p_640->g_121) = l_120;
    (*p_640->g_92) ^= (safe_lshift_func_int8_t_s_u((&p_101 != (p_640->g_124 , (p_100 , &p_640->g_116[0]))), (((void*)0 == (*l_120)) , (p_99 & (((safe_mul_func_int16_t_s_s((((p_100 , (safe_unary_minus_func_int8_t_s(((safe_sub_func_int64_t_s_s(p_100, (*p_98))) != l_117)))) , l_130) , p_100), p_640->g_116[0])) , 0xC8L) >= p_640->g_116[5])))));
    (*p_640->g_92) = p_100;
    return (*l_120);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_641;
    struct S1* p_640 = &c_641;
    struct S1 c_642 = {
        4UL, // p_640->g_8
        (-1L), // p_640->g_10
        0x2E40C18AL, // p_640->g_22
        9L, // p_640->g_29
        {0xB5D06DE21E525036L,0xB5D06DE21E525036L}, // p_640->g_31
        &p_640->g_10, // p_640->g_45
        {&p_640->g_45,&p_640->g_45,&p_640->g_45,&p_640->g_45,&p_640->g_45,&p_640->g_45}, // p_640->g_44
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_640->g_77
        {{&p_640->g_77[3],(void*)0,(void*)0,&p_640->g_77[7],&p_640->g_77[5],&p_640->g_77[7],(void*)0,(void*)0,&p_640->g_77[3]},{&p_640->g_77[3],(void*)0,(void*)0,&p_640->g_77[7],&p_640->g_77[5],&p_640->g_77[7],(void*)0,(void*)0,&p_640->g_77[3]},{&p_640->g_77[3],(void*)0,(void*)0,&p_640->g_77[7],&p_640->g_77[5],&p_640->g_77[7],(void*)0,(void*)0,&p_640->g_77[3]},{&p_640->g_77[3],(void*)0,(void*)0,&p_640->g_77[7],&p_640->g_77[5],&p_640->g_77[7],(void*)0,(void*)0,&p_640->g_77[3]},{&p_640->g_77[3],(void*)0,(void*)0,&p_640->g_77[7],&p_640->g_77[5],&p_640->g_77[7],(void*)0,(void*)0,&p_640->g_77[3]},{&p_640->g_77[3],(void*)0,(void*)0,&p_640->g_77[7],&p_640->g_77[5],&p_640->g_77[7],(void*)0,(void*)0,&p_640->g_77[3]},{&p_640->g_77[3],(void*)0,(void*)0,&p_640->g_77[7],&p_640->g_77[5],&p_640->g_77[7],(void*)0,(void*)0,&p_640->g_77[3]},{&p_640->g_77[3],(void*)0,(void*)0,&p_640->g_77[7],&p_640->g_77[5],&p_640->g_77[7],(void*)0,(void*)0,&p_640->g_77[3]}}, // p_640->g_76
        0x2AD413ED7628F8C8L, // p_640->g_79
        {&p_640->g_79}, // p_640->g_78
        &p_640->g_29, // p_640->g_92
        &p_640->g_92, // p_640->g_91
        {9UL}, // p_640->g_105
        {1L,0x72D9L,1L,1L,0x72D9L,1L}, // p_640->g_116
        &p_640->g_44[4], // p_640->g_121
        {1UL}, // p_640->g_124
        3UL, // p_640->g_154
        (-1L), // p_640->g_164
        0UL, // p_640->g_177
        0x763CE0EB5F683789L, // p_640->g_194
        (void*)0, // p_640->g_195
        4294967291UL, // p_640->g_202
        0x00L, // p_640->g_205
        {(-7L),(-7L),(-7L)}, // p_640->g_206
        0xEDL, // p_640->g_233
        &p_640->g_233, // p_640->g_232
        {{0x34A9BD93B319A55DL},{0x34A9BD93B319A55DL},{0x34A9BD93B319A55DL},{0x34A9BD93B319A55DL},{0x34A9BD93B319A55DL}}, // p_640->g_236
        {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}, // p_640->g_263
        0x12L, // p_640->g_265
        0x43L, // p_640->g_266
        0xE9B9L, // p_640->g_272
        0L, // p_640->g_314
        {{{0x7F9CC139BEEFECDEL,2L},{0x7F9CC139BEEFECDEL,2L},{0x7F9CC139BEEFECDEL,2L},{0x7F9CC139BEEFECDEL,2L}},{{0x7F9CC139BEEFECDEL,2L},{0x7F9CC139BEEFECDEL,2L},{0x7F9CC139BEEFECDEL,2L},{0x7F9CC139BEEFECDEL,2L}}}, // p_640->g_315
        18446744073709551608UL, // p_640->g_374
        (void*)0, // p_640->g_400
        &p_640->g_400, // p_640->g_399
        {{{2UL},{2UL},{1UL},{1UL},{0xF617D3566885BB0DL},{0xAE9BADD51F31FDDBL},{0x40751A05AE71EFDEL}},{{2UL},{2UL},{1UL},{1UL},{0xF617D3566885BB0DL},{0xAE9BADD51F31FDDBL},{0x40751A05AE71EFDEL}},{{2UL},{2UL},{1UL},{1UL},{0xF617D3566885BB0DL},{0xAE9BADD51F31FDDBL},{0x40751A05AE71EFDEL}},{{2UL},{2UL},{1UL},{1UL},{0xF617D3566885BB0DL},{0xAE9BADD51F31FDDBL},{0x40751A05AE71EFDEL}}}, // p_640->g_484
        1UL, // p_640->g_495
        0x362FL, // p_640->g_500
        {18446744073709551613UL}, // p_640->g_506
        0x02FE412CL, // p_640->g_520
        &p_640->g_194, // p_640->g_532
        {{&p_640->g_532,&p_640->g_532,(void*)0,&p_640->g_532,&p_640->g_532,&p_640->g_532,(void*)0},{&p_640->g_532,&p_640->g_532,(void*)0,&p_640->g_532,&p_640->g_532,&p_640->g_532,(void*)0},{&p_640->g_532,&p_640->g_532,(void*)0,&p_640->g_532,&p_640->g_532,&p_640->g_532,(void*)0},{&p_640->g_532,&p_640->g_532,(void*)0,&p_640->g_532,&p_640->g_532,&p_640->g_532,(void*)0}}, // p_640->g_531
        1UL, // p_640->g_541
        65528UL, // p_640->g_543
        {65529UL,65529UL,65529UL,65529UL,65529UL}, // p_640->g_579
        &p_640->g_314, // p_640->g_600
        {&p_640->g_600,&p_640->g_600,&p_640->g_600,&p_640->g_600,&p_640->g_600}, // p_640->g_599
    };
    c_641 = c_642;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_640);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_640->g_8, "p_640->g_8", print_hash_value);
    transparent_crc(p_640->g_10, "p_640->g_10", print_hash_value);
    transparent_crc(p_640->g_22, "p_640->g_22", print_hash_value);
    transparent_crc(p_640->g_29, "p_640->g_29", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_640->g_31[i], "p_640->g_31[i]", print_hash_value);

    }
    transparent_crc(p_640->g_79, "p_640->g_79", print_hash_value);
    transparent_crc(p_640->g_105.f0, "p_640->g_105.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_640->g_116[i], "p_640->g_116[i]", print_hash_value);

    }
    transparent_crc(p_640->g_124.f0, "p_640->g_124.f0", print_hash_value);
    transparent_crc(p_640->g_154, "p_640->g_154", print_hash_value);
    transparent_crc(p_640->g_164, "p_640->g_164", print_hash_value);
    transparent_crc(p_640->g_177, "p_640->g_177", print_hash_value);
    transparent_crc(p_640->g_194, "p_640->g_194", print_hash_value);
    transparent_crc(p_640->g_202, "p_640->g_202", print_hash_value);
    transparent_crc(p_640->g_205, "p_640->g_205", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_640->g_206[i], "p_640->g_206[i]", print_hash_value);

    }
    transparent_crc(p_640->g_233, "p_640->g_233", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_640->g_236[i].f0, "p_640->g_236[i].f0", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_640->g_263[i], "p_640->g_263[i]", print_hash_value);

    }
    transparent_crc(p_640->g_265, "p_640->g_265", print_hash_value);
    transparent_crc(p_640->g_266, "p_640->g_266", print_hash_value);
    transparent_crc(p_640->g_272, "p_640->g_272", print_hash_value);
    transparent_crc(p_640->g_314, "p_640->g_314", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_640->g_315[i][j][k], "p_640->g_315[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_640->g_374, "p_640->g_374", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_640->g_484[i][j].f0, "p_640->g_484[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_640->g_495, "p_640->g_495", print_hash_value);
    transparent_crc(p_640->g_500, "p_640->g_500", print_hash_value);
    transparent_crc(p_640->g_506.f0, "p_640->g_506.f0", print_hash_value);
    transparent_crc(p_640->g_520, "p_640->g_520", print_hash_value);
    transparent_crc(p_640->g_541, "p_640->g_541", print_hash_value);
    transparent_crc(p_640->g_543, "p_640->g_543", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_640->g_579[i], "p_640->g_579[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
