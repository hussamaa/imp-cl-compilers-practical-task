// -g 27,88,4 -l 3,4,2
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


// Seed: 495787765

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
   int8_t * f1;
   uint8_t  f2;
   uint64_t  f3;
   uint16_t  f4;
};

union U1 {
   int64_t  f0;
   uint16_t  f1;
   int32_t  f2;
   int64_t  f3;
};

struct S2 {
    int8_t g_6;
    int8_t *g_5[10];
    int16_t g_18;
    uint8_t g_64;
    int32_t g_70;
    int16_t g_71;
    uint64_t g_94[10];
    uint32_t g_98;
    volatile uint32_t g_104;
    volatile uint32_t * volatile g_103;
    volatile int32_t g_111;
    int32_t g_112[10];
    volatile int32_t g_113;
    volatile int32_t g_115;
    volatile int16_t g_116[10][4];
    volatile uint32_t g_117;
    int32_t g_123;
    uint8_t *g_131[9][8][3];
    uint16_t g_181[7][7][1];
    int32_t g_182;
    uint32_t g_185[3];
    int8_t g_188[10][3][8];
    volatile uint8_t g_189;
    uint8_t g_193;
    union U0 g_213[2];
    int32_t g_224;
    int32_t * volatile g_223[2][1];
    int16_t *g_230;
    int8_t g_277;
    int32_t * volatile g_281;
    int32_t * volatile g_299;
    union U1 * volatile g_316;
    int64_t g_329[7];
    int32_t * volatile g_332[9][10][2];
    uint32_t g_386;
    union U1 g_390;
    int32_t * volatile g_392;
    uint64_t g_400;
    uint64_t *g_414[2][7];
    uint64_t ** volatile g_413;
    uint32_t g_416[7];
    int32_t g_417;
    int32_t * volatile g_418;
    int32_t ** volatile g_420;
    uint8_t ***g_445;
    int8_t **g_460;
    int8_t *** volatile g_459;
    int32_t ** volatile g_476;
    int32_t ** volatile g_477;
    int32_t *g_479;
    int32_t ** volatile g_478;
    union U0 *g_483;
    int32_t ** volatile g_488[4][4][10];
    volatile int16_t g_504[7];
    uint64_t g_525[4][6];
    uint64_t *g_528;
    uint16_t g_530;
    int32_t * volatile g_543;
    volatile int32_t * volatile g_573[8];
    int8_t ***g_609;
    volatile uint32_t g_663;
    int32_t ** volatile g_728;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_792);
int64_t  func_2(int16_t  p_3, int8_t  p_4, struct S2 * p_792);
int8_t * func_7(uint64_t  p_8, int8_t * p_9, uint16_t  p_10, int8_t * p_11, uint32_t  p_12, struct S2 * p_792);
uint32_t  func_13(int64_t  p_14, int32_t  p_15, uint8_t  p_16, struct S2 * p_792);
int8_t * func_22(union U0  p_23, uint8_t  p_24, int8_t * p_25, uint32_t  p_26, uint64_t  p_27, struct S2 * p_792);
union U0  func_28(int32_t  p_29, uint32_t  p_30, int8_t * p_31, struct S2 * p_792);
int8_t * func_32(int8_t * p_33, struct S2 * p_792);
int8_t * func_34(uint16_t  p_35, uint8_t  p_36, uint8_t  p_37, union U0  p_38, int8_t * p_39, struct S2 * p_792);
int32_t  func_44(int8_t * p_45, struct S2 * p_792);
int8_t * func_46(int32_t  p_47, int8_t * p_48, struct S2 * p_792);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_792->g_5 p_792->g_18 p_792->g_6 p_792->g_64 p_792->g_94 p_792->g_98 p_792->g_70 p_792->g_103 p_792->g_117 p_792->g_71 p_792->g_116 p_792->g_112 p_792->g_104 p_792->g_181 p_792->g_185 p_792->g_188 p_792->g_189 p_792->g_193 p_792->g_213 p_792->g_213.f0 p_792->g_182 p_792->g_224 p_792->g_281 p_792->g_230 p_792->g_299 p_792->g_316 p_792->g_277 p_792->g_386 p_792->g_392 p_792->g_400 p_792->g_413 p_792->g_418 p_792->g_459 p_792->g_460 p_792->g_416 p_792->g_478 p_792->g_504 p_792->g_329 p_792->g_530 p_792->g_543 p_792->g_483 p_792->g_528 p_792->g_525 p_792->g_573 p_792->g_417 p_792->g_663 p_792->g_728 p_792->g_479
 * writes: p_792->g_18 p_792->g_64 p_792->g_70 p_792->g_71 p_792->g_94 p_792->g_98 p_792->g_117 p_792->g_123 p_792->g_131 p_792->g_181 p_792->g_188 p_792->g_189 p_792->g_193 p_792->g_115 p_792->g_182 p_792->g_224 p_792->g_277 p_792->g_185 p_792->g_316 p_792->g_329 p_792->g_386 p_792->g_390.f2 p_792->g_390.f0 p_792->g_400 p_792->g_417 p_792->g_445 p_792->g_460 p_792->g_479 p_792->g_483 p_792->g_528 p_792->g_530 p_792->g_6 p_792->g_609 p_792->g_213.f0 p_792->g_390.f1 p_792->g_213 p_792->g_390.f3
 */
uint32_t  func_1(struct S2 * p_792)
{ /* block id: 4 */
    int64_t l_17 = 0x179CD329B3A00D0EL;
    uint64_t *l_524 = &p_792->g_525[1][0];
    uint64_t **l_526 = (void*)0;
    uint64_t **l_527[5][6] = {{&l_524,(void*)0,(void*)0,&l_524,&l_524,&l_524},{&l_524,(void*)0,(void*)0,&l_524,&l_524,&l_524},{&l_524,(void*)0,(void*)0,&l_524,&l_524,&l_524},{&l_524,(void*)0,(void*)0,&l_524,&l_524,&l_524},{&l_524,(void*)0,(void*)0,&l_524,&l_524,&l_524}};
    uint16_t *l_529 = &p_792->g_530;
    int8_t *l_532 = &p_792->g_277;
    int32_t l_774 = 0x57066F1DL;
    int8_t **l_780 = (void*)0;
    int i, j;
    if ((~((p_792->g_390.f3 = func_2((p_792->g_5[6] == (l_532 = func_7(((func_13(l_17, (p_792->g_18 = l_17), l_17, p_792) , 0UL) == 18446744073709551609UL), &p_792->g_6, ((*l_529) |= ((p_792->g_528 = l_524) != &p_792->g_525[0][0])), &p_792->g_6, p_792->g_213[1].f0, p_792))), l_17, p_792)) , l_17)))
    { /* block id: 399 */
        uint16_t l_775 = 0x499EL;
        l_774 = (*p_792->g_418);
        l_775 ^= (l_17 && l_17);
    }
    else
    { /* block id: 402 */
        union U0 l_781 = {253UL};
        int64_t l_790 = 1L;
        int32_t l_791 = (-9L);
        l_791 &= ((safe_mul_func_int16_t_s_s(((void*)0 != &l_774), (((safe_div_func_int8_t_s_s((((*p_792->g_459) = l_780) == (void*)0), 0x47L)) , l_781) , (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((+(safe_add_func_int16_t_s_s(((void*)0 != &p_792->g_230), ((p_792->g_64 & l_17) >= p_792->g_71)))), l_790)), 1UL)), (*p_792->g_230)))))) & 1L);
        return l_774;
    }
    return l_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_792->g_70 p_792->g_112 p_792->g_18 p_792->g_543 p_792->g_224 p_792->g_418 p_792->g_64 p_792->g_483 p_792->g_213 p_792->g_528 p_792->g_525 p_792->g_181 p_792->g_94 p_792->g_573 p_792->g_230 p_792->g_71 p_792->g_185 p_792->g_329 p_792->g_6 p_792->g_417 p_792->g_103 p_792->g_104 p_792->g_663 p_792->g_116 p_792->g_728 p_792->g_479 p_792->g_193
 * writes: p_792->g_70 p_792->g_390.f2 p_792->g_479 p_792->g_18 p_792->g_224 p_792->g_64 p_792->g_181 p_792->g_71 p_792->g_6 p_792->g_609 p_792->g_213.f0 p_792->g_483 p_792->g_390.f1 p_792->g_530 p_792->g_188 p_792->g_94 p_792->g_213
 */
int64_t  func_2(int16_t  p_3, int8_t  p_4, struct S2 * p_792)
{ /* block id: 289 */
    uint32_t l_535 = 0x8D412F6FL;
    uint64_t *l_538 = &p_792->g_525[2][0];
    int32_t l_564 = 0x2E4E3193L;
    uint64_t l_585 = 0x93B23B4BDA7E0C01L;
    int8_t ***l_610 = &p_792->g_460;
    uint8_t l_634 = 0x0BL;
    uint16_t l_675[6] = {65529UL,65529UL,65529UL,65529UL,65529UL,65529UL};
    int32_t l_715[3][6][2] = {{{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L}},{{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L}},{{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L},{0x7B8D8AE7L,1L}}};
    union U0 l_757 = {247UL};
    uint16_t l_771 = 0x4983L;
    int i, j, k;
    for (p_792->g_70 = 0; (p_792->g_70 <= (-13)); p_792->g_70--)
    { /* block id: 292 */
        uint64_t **l_559 = &l_538;
        int32_t l_568 = 0x6D61F93EL;
        int32_t l_619 = 4L;
        int32_t l_674[10];
        int32_t *l_730 = &p_792->g_390.f2;
        uint16_t *l_748 = (void*)0;
        uint64_t *l_749 = &p_792->g_94[4];
        union U0 l_756 = {8UL};
        uint64_t l_762 = 0UL;
        int8_t l_763 = 0x78L;
        uint64_t l_764 = 0x01C4CB76DCE8CF06L;
        int32_t l_765[6] = {1L,0L,1L,1L,0L,1L};
        uint16_t *l_767 = (void*)0;
        uint16_t **l_766 = &l_767;
        uint64_t l_768 = 18446744073709551607UL;
        int32_t *l_769 = &l_715[1][3][1];
        int32_t *l_770[1];
        int i;
        for (i = 0; i < 10; i++)
            l_674[i] = 6L;
        for (i = 0; i < 1; i++)
            l_770[i] = &l_674[2];
        if (((0x3B1EL < (p_792->g_112[5] <= (((l_535 , 1L) == (((&p_792->g_525[1][0] != ((safe_sub_func_uint8_t_u_u(9UL, (p_4 ^ 0x7FD9F2B8L))) , l_538)) > 0UL) >= p_3)) < 18446744073709551612UL))) != p_3))
        { /* block id: 293 */
            int32_t *l_541 = (void*)0;
            int32_t l_548 = 0x53574818L;
            uint64_t l_582 = 0xB21E63658228001DL;
            uint32_t l_596 = 4294967294UL;
            int8_t ****l_611 = (void*)0;
            uint16_t l_626 = 0x9E4CL;
            for (p_792->g_390.f2 = 0; (p_792->g_390.f2 > (-6)); p_792->g_390.f2 = safe_sub_func_uint16_t_u_u(p_792->g_390.f2, 1))
            { /* block id: 296 */
                int32_t **l_542 = &p_792->g_479;
                uint64_t **l_560 = &l_538;
                int32_t l_584 = 1L;
                int32_t l_625[7][3][7] = {{{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L}},{{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L}},{{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L}},{{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L}},{{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L}},{{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L}},{{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L},{0x30F8F7FFL,0x42DB497CL,0x51387081L,1L,0x70714EDFL,1L,1L}}};
                int i, j, k;
                (*l_542) = l_541;
                for (p_792->g_18 = 6; (p_792->g_18 >= 2); p_792->g_18 -= 1)
                { /* block id: 300 */
                    int32_t l_545[2][2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_545[i][j] = (-1L);
                    }
                    (*p_792->g_543) = p_792->g_112[(p_792->g_18 + 3)];
                    for (p_792->g_224 = 8; (p_792->g_224 >= 0); p_792->g_224 -= 1)
                    { /* block id: 304 */
                        uint8_t l_544 = 0UL;
                        l_545[1][0] &= l_544;
                        if (p_3)
                            break;
                        if (l_544)
                            break;
                        if ((*p_792->g_418))
                            continue;
                    }
                    for (p_792->g_64 = 0; (p_792->g_64 <= 9); p_792->g_64 += 1)
                    { /* block id: 312 */
                        uint16_t l_563 = 65531UL;
                        uint16_t *l_565 = &p_792->g_181[5][1][0];
                        int32_t *l_566 = (void*)0;
                        int32_t *l_567[2][2] = {{&p_792->g_417,&p_792->g_417},{&p_792->g_417,&p_792->g_417}};
                        uint64_t *l_583 = &l_582;
                        int i, j;
                        l_568 &= (((*l_565) |= ((safe_mod_func_uint64_t_u_u(l_548, 1UL)) ^ ((safe_sub_func_int16_t_s_s(l_535, (safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u(((l_564 = ((*p_792->g_483) , (safe_sub_func_uint64_t_u_u((l_559 == ((*p_792->g_528) , l_560)), (safe_div_func_uint64_t_u_u((l_535 >= l_563), p_792->g_224)))))) <= p_4), 0xDE81FBE6L)), 1UL)), 1)))) >= p_3))) && p_4);
                        l_545[1][0] = (((safe_add_func_uint64_t_u_u(((*l_583) = ((((0x962469883E8B3B25L < l_568) | ((safe_div_func_uint16_t_u_u(p_792->g_94[7], (((p_792->g_573[3] != &l_545[1][1]) | p_3) & (l_564 | (safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u(p_4, (safe_sub_func_uint16_t_u_u((((*p_792->g_230) |= ((l_582 | 0x2AL) , 0L)) & l_545[1][0]), l_535)))), l_564)), p_792->g_18)))))) >= p_792->g_185[1])) & p_792->g_329[1]) , p_4)), l_545[0][0])) > l_568) == p_4);
                        (*p_792->g_543) = l_568;
                        l_585++;
                    }
                }
                for (p_792->g_6 = (-22); (p_792->g_6 != (-11)); p_792->g_6 = safe_add_func_uint64_t_u_u(p_792->g_6, 5))
                { /* block id: 325 */
                    int8_t ***l_613 = (void*)0;
                    int8_t ****l_612 = &l_613;
                    int32_t l_614 = 0x559E2BAAL;
                    int32_t l_615 = 7L;
                    int32_t l_624 = 8L;
                    if (p_3)
                        break;
                    if (l_585)
                        continue;
                    for (l_585 = (-23); (l_585 > 51); ++l_585)
                    { /* block id: 330 */
                        int8_t ***l_608 = &p_792->g_460;
                        int8_t ****l_607[6][6][7] = {{{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608}},{{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608}},{{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608}},{{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608}},{{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608}},{{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,(void*)0,&l_608,&l_608,(void*)0,&l_608,&l_608}}};
                        uint8_t *l_616 = &p_792->g_213[1].f0;
                        int64_t l_617 = 0x3E6FA6860E638F8DL;
                        uint16_t *l_618 = &p_792->g_181[6][0][0];
                        int32_t *l_620 = &l_548;
                        int32_t *l_621 = &l_584;
                        int32_t *l_622 = &l_615;
                        int32_t *l_623[3][6][9] = {{{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548}},{{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548}},{{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548},{&l_548,&p_792->g_417,&l_614,&l_614,(void*)0,&p_792->g_417,&l_614,&l_548,&l_548}}};
                        int i, j, k;
                        l_619 |= (safe_mul_func_uint16_t_u_u(((*l_618) = (safe_sub_func_int32_t_s_s((0x09L > l_596), ((((18446744073709551615UL && ((l_584 |= ((*l_616) = ((((p_792->g_64 , (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0x0F57L, (((l_614 |= (p_4 = ((((safe_lshift_func_uint8_t_u_s(0xCDL, 4)) != (safe_add_func_uint8_t_u_u(((p_792->g_609 = &p_792->g_460) != l_610), (l_564 = ((l_612 = l_611) == &l_608))))) <= 0x1CD8L) , p_4))) , l_564) ^ l_615))), 4))) < l_615) != p_792->g_417) >= l_568))) > 0L)) && l_614) , l_617) != p_792->g_329[3])))), 0x4B3FL));
                        ++l_626;
                        if ((*p_792->g_418))
                            break;
                    }
                    p_792->g_224 &= (safe_rshift_func_uint8_t_u_u(0x1AL, ((*p_792->g_103) , ((void*)0 == &p_792->g_460))));
                }
            }
        }
        else
        { /* block id: 346 */
            int16_t l_633 = 1L;
            int32_t l_680[6];
            int8_t ***l_702 = &p_792->g_460;
            uint32_t l_705[5][1] = {{0xCB78756FL},{0xCB78756FL},{0xCB78756FL},{0xCB78756FL},{0xCB78756FL}};
            int32_t *l_731 = (void*)0;
            int i, j;
            for (i = 0; i < 6; i++)
                l_680[i] = 1L;
            if (l_568)
            { /* block id: 347 */
                int32_t *l_631 = &p_792->g_224;
                int32_t *l_632[8][8][4] = {{{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70}},{{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70}},{{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70}},{{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70}},{{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70}},{{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70}},{{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70}},{{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70},{&p_792->g_224,&p_792->g_70,&p_792->g_224,&p_792->g_70}}};
                union U0 **l_639 = &p_792->g_483;
                union U0 *l_641 = &p_792->g_213[1];
                union U0 **l_640 = &l_641;
                int i, j, k;
                l_634--;
                (*l_631) = (((*p_792->g_230) |= (safe_mul_func_int16_t_s_s(0L, (0L | 0xFEL)))) | ((void*)0 != &l_634));
                (*l_640) = ((*l_639) = &p_792->g_213[1]);
            }
            else
            { /* block id: 353 */
                uint64_t l_678 = 0xA68E6AC77F46FD27L;
                int32_t l_684 = (-6L);
                int32_t l_690 = 1L;
                int32_t l_691 = 0x785FDEFFL;
                int8_t ***l_701 = &p_792->g_460;
                int32_t l_717 = 6L;
                int32_t l_718 = 0x5D3507B4L;
                int32_t l_719 = 0L;
                int32_t l_722 = 0x5CFB9EF6L;
                int32_t l_723 = 1L;
                int32_t l_724[4][1][6] = {{{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}},{{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}},{{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}},{{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}}};
                int i, j, k;
                for (l_535 = 0; (l_535 < 36); l_535++)
                { /* block id: 356 */
                    uint64_t l_658 = 0x5EBC5291E6E92028L;
                    int32_t *l_676 = &l_619;
                    int64_t l_677 = 0x32B527A4A0AA8C46L;
                    uint8_t *l_679 = (void*)0;
                    int32_t l_689 = 1L;
                    uint32_t l_692 = 1UL;
                    int32_t l_713 = 0x711DF38CL;
                    int32_t l_714 = 0L;
                    int32_t l_716 = 0x648D94AFL;
                    int32_t l_720 = 0x46F6AEB4L;
                    int32_t l_721[2];
                    uint32_t l_725 = 5UL;
                    int32_t **l_729[5] = {&l_676,&l_676,&l_676,&l_676,&l_676};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_721[i] = 0x7E38C431L;
                    if (l_634)
                        break;
                    if (((l_680[5] = (safe_add_func_int32_t_s_s(((((safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s(p_3, (safe_div_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((((l_658 & (safe_sub_func_uint8_t_u_u(l_568, (safe_div_func_uint16_t_u_u(p_792->g_663, p_4))))) >= p_792->g_181[1][0][0]) < (safe_div_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(p_792->g_70, ((*l_676) = (safe_div_func_int16_t_s_s((((~(0x7B424C9BL == ((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(((!p_3) || 0x4BL), p_4)) > 0x6E18DEABL) & l_674[2]), 0x20L)) && l_633))) < l_675[3]) , p_4), 6UL))))) == 0x71L), l_564))), l_674[8])), 0x3A24787286917365L)), p_3)) ^ p_3), 0x66F3L)))), l_675[4])) < p_792->g_112[5]) != l_677) < l_678), p_3))) | p_3))
                    { /* block id: 360 */
                        uint64_t l_683 = 1UL;
                        int32_t *l_685 = (void*)0;
                        int32_t *l_686 = &l_684;
                        int32_t *l_687 = &l_674[1];
                        int32_t *l_688[3];
                        int8_t ****l_703 = (void*)0;
                        int8_t ***l_704 = &p_792->g_460;
                        uint16_t *l_706 = &p_792->g_390.f1;
                        int64_t l_707[4] = {0x07542D5A4A5DE46DL,0x07542D5A4A5DE46DL,0x07542D5A4A5DE46DL,0x07542D5A4A5DE46DL};
                        uint16_t *l_708 = &p_792->g_530;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_688[i] = &p_792->g_417;
                        (*p_792->g_418) = (safe_rshift_func_int8_t_s_u(l_683, 4));
                        l_684 &= p_3;
                        --l_692;
                        (*l_676) = (p_3 && ((*l_708) = (((safe_rshift_func_int8_t_s_u(l_535, (((((((*l_706) = ((((7L && (((p_792->g_116[0][1] >= (*l_686)) && (((safe_div_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((l_701 != (l_690 , (l_704 = l_702))), p_792->g_112[5])) >= l_705[3][0]) ^ p_4), 0x3475F9A243E83B2EL)) , 0x6CDD5A386B8BF37EL) >= 0x519604F02239F0FCL)) != 0xD92D0332L)) && 0x7689E765L) || p_4) ^ l_633)) >= l_634) | l_707[3]) & p_3) && l_690) != 0xA3L))) , l_678) != p_4)));
                    }
                    else
                    { /* block id: 368 */
                        int32_t *l_709 = &l_674[2];
                        int32_t *l_710 = &p_792->g_417;
                        int32_t *l_711 = &l_568;
                        int32_t *l_712[2][3][1] = {{{&l_680[5]},{&l_680[5]},{&l_680[5]}},{{&l_680[5]},{&l_680[5]},{&l_680[5]}}};
                        int i, j, k;
                        if (l_585)
                            break;
                        --l_725;
                        (*p_792->g_728) = &l_715[2][3][0];
                        if (l_715[2][1][1])
                            continue;
                    }
                    l_731 = (l_730 = (*p_792->g_728));
                    for (l_658 = 0; (l_658 <= 2); l_658 += 1)
                    { /* block id: 378 */
                        int i, j, k;
                        l_724[2][0][3] ^= (safe_div_func_uint16_t_u_u((p_4 != 0x8754D5A0ED2C3A79L), (safe_sub_func_int16_t_s_s(l_675[2], (((*l_676) = (safe_add_func_uint64_t_u_u((~((l_722 = (l_715[2][1][1] & (p_792->g_188[(l_658 + 4)][l_658][(l_658 + 3)] = (p_4 || (0x3CBF4D5D163C1BEFL || ((p_3 || (p_3 | l_691)) == p_4)))))) >= p_792->g_193)), l_675[3]))) & p_3)))));
                    }
                }
            }
        }
        l_568 ^= (safe_rshift_func_int8_t_s_s((l_564 = (((l_674[2] |= (((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((&p_792->g_181[1][4][0] == (l_675[2] , l_748)) ^ ((p_792->g_104 ^ ((--(*l_749)) | ((p_4 = 2L) != (safe_div_func_int64_t_s_s(((safe_sub_func_int64_t_s_s(((((*l_766) = ((((*p_792->g_483) = (l_757 = l_756)) , (safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((p_3 >= (l_762 <= 247UL)), l_763)) < l_764), l_765[3]))) , (void*)0)) != (void*)0) >= p_3), 18446744073709551610UL)) && 0UL), p_3))))) > 2UL)) == 0L), 2L)), p_3)), l_768)) >= 6UL) <= l_675[3])) == 0x3284DF43F6607F14L) <= (*p_792->g_230))), l_675[2]));
        l_771++;
    }
    return p_792->g_417;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_7(uint64_t  p_8, int8_t * p_9, uint16_t  p_10, int8_t * p_11, uint32_t  p_12, struct S2 * p_792)
{ /* block id: 286 */
    int8_t *l_531 = &p_792->g_188[4][0][5];
    return l_531;
}


/* ------------------------------------------ */
/* 
 * reads : p_792->g_18 p_792->g_6 p_792->g_64 p_792->g_94 p_792->g_98 p_792->g_70 p_792->g_103 p_792->g_117 p_792->g_71 p_792->g_116 p_792->g_112 p_792->g_104 p_792->g_181 p_792->g_185 p_792->g_188 p_792->g_189 p_792->g_193 p_792->g_213 p_792->g_213.f0 p_792->g_182 p_792->g_224 p_792->g_281 p_792->g_230 p_792->g_299 p_792->g_316 p_792->g_277 p_792->g_386 p_792->g_392 p_792->g_400 p_792->g_413 p_792->g_418 p_792->g_459 p_792->g_460 p_792->g_5 p_792->g_416 p_792->g_478 p_792->g_504 p_792->g_329
 * writes: p_792->g_18 p_792->g_64 p_792->g_70 p_792->g_71 p_792->g_94 p_792->g_98 p_792->g_117 p_792->g_123 p_792->g_131 p_792->g_181 p_792->g_188 p_792->g_189 p_792->g_193 p_792->g_115 p_792->g_182 p_792->g_224 p_792->g_277 p_792->g_185 p_792->g_316 p_792->g_329 p_792->g_386 p_792->g_390.f2 p_792->g_390.f0 p_792->g_400 p_792->g_417 p_792->g_445 p_792->g_460 p_792->g_479 p_792->g_483
 */
uint32_t  func_13(int64_t  p_14, int32_t  p_15, uint8_t  p_16, struct S2 * p_792)
{ /* block id: 6 */
    int32_t l_19[6] = {0L,(-1L),0L,0L,(-1L),0L};
    int8_t *l_50 = &p_792->g_6;
    int32_t l_306 = 0x341B79ADL;
    int8_t *l_313[1][5][10] = {{{(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0},{(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0},{(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0},{(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0},{(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0,&p_792->g_6,(void*)0,(void*)0}}};
    int i, j, k;
    for (p_14 = 5; (p_14 >= 0); p_14 -= 1)
    { /* block id: 9 */
        int16_t l_49 = 0x2ED0L;
        union U0 l_312 = {247UL};
        int8_t *l_465[3];
        int32_t l_523 = 0x5E5EBDB0L;
        int i;
        for (i = 0; i < 3; i++)
            l_465[i] = &p_792->g_6;
        for (p_792->g_18 = 1; (p_792->g_18 <= 5); p_792->g_18 += 1)
        { /* block id: 12 */
            int8_t **l_65 = &l_50;
            int32_t *l_305 = (void*)0;
            int32_t l_311 = 0x30CFE398L;
            int i;
            (*p_792->g_299) = ((safe_mul_func_uint16_t_u_u(((((*l_65) = func_22(func_28(l_19[p_792->g_18], p_792->g_18, func_32(func_34((((l_311 = (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((65529UL & ((l_306 ^= func_44(((*l_65) = func_46(l_49, l_50, p_792)), p_792)) || (safe_rshift_func_int16_t_s_u((p_16 && (safe_lshift_func_int8_t_s_s(p_14, 7))), p_14)))) > 1L), 7UL)), 0x16L))) <= l_19[4]) < l_19[2]), p_16, p_14, l_312, l_313[0][2][3], p_792), p_792), p_792), p_792->g_416[5], l_465[1], p_16, p_14, p_792)) != l_313[0][2][8]) <= p_792->g_416[5]), 0x712BL)) , 0x1C1FEE51L);
            return l_523;
        }
        return l_19[2];
    }
    return l_19[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_792->g_459 p_792->g_460 p_792->g_5 p_792->g_478 p_792->g_64 p_792->g_112 p_792->g_181 p_792->g_504 p_792->g_329 p_792->g_230 p_792->g_71 p_792->g_281 p_792->g_70
 * writes: p_792->g_479 p_792->g_483 p_792->g_181 p_792->g_329
 */
int8_t * func_22(union U0  p_23, uint8_t  p_24, int8_t * p_25, uint32_t  p_26, uint64_t  p_27, struct S2 * p_792)
{ /* block id: 242 */
    uint16_t l_468 = 0xE339L;
    int32_t l_469 = 0x471BC237L;
    union U0 *l_481 = &p_792->g_213[1];
    union U0 **l_482[5][1][5];
    union U1 *l_484[9];
    int32_t *l_489 = &l_469;
    int32_t l_516 = 1L;
    uint8_t **l_519 = &p_792->g_131[5][2][1];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_482[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 9; i++)
        l_484[i] = (void*)0;
    if ((safe_mul_func_uint8_t_u_u(l_468, l_469)))
    { /* block id: 243 */
        uint32_t l_470 = 0xC6835BDDL;
        ++l_470;
    }
    else
    { /* block id: 245 */
        int32_t *l_475 = (void*)0;
        int32_t *l_480 = &l_469;
        for (l_469 = (-11); (l_469 > (-26)); l_469 = safe_sub_func_int16_t_s_s(l_469, 8))
        { /* block id: 248 */
            return (**p_792->g_459);
        }
        (*p_792->g_478) = l_475;
        (*l_480) &= l_468;
    }
    p_792->g_483 = l_481;
    if ((((+0L) > (l_484[4] == (void*)0)) < (p_792->g_64 & (p_23.f0 >= p_792->g_112[5]))))
    { /* block id: 255 */
        uint32_t l_485 = 4294967295UL;
        int32_t l_514[10][3] = {{6L,6L,6L},{6L,6L,6L},{6L,6L,6L},{6L,6L,6L},{6L,6L,6L},{6L,6L,6L},{6L,6L,6L},{6L,6L,6L},{6L,6L,6L},{6L,6L,6L}};
        int i, j;
        l_485--;
        l_489 = &l_469;
        for (l_469 = 0; (l_469 != (-14)); --l_469)
        { /* block id: 260 */
            uint16_t *l_494[8][3][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_501 = (-3L);
            int32_t l_509 = (-9L);
            int64_t *l_510 = &p_792->g_390.f0;
            int64_t *l_511 = &p_792->g_329[1];
            uint8_t *l_512 = (void*)0;
            uint8_t *l_513[10] = {&p_792->g_213[1].f0,&p_792->g_213[1].f0,&p_792->g_213[1].f0,&p_792->g_213[1].f0,&p_792->g_213[1].f0,&p_792->g_213[1].f0,&p_792->g_213[1].f0,&p_792->g_213[1].f0,&p_792->g_213[1].f0,&p_792->g_213[1].f0};
            int32_t *l_515 = &l_509;
            int i, j, k;
            l_516 = (safe_mul_func_uint16_t_u_u((p_792->g_181[4][5][0] &= (p_23.f0 <= 0UL)), (l_485 && ((((*l_515) = ((safe_div_func_int8_t_s_s((((l_514[7][0] = ((((*l_511) ^= ((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((*l_489), (l_501 |= (*l_489)))), (((safe_rshift_func_uint8_t_u_u(l_485, ((p_792->g_504[4] , (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_509, 0)), (((void*)0 != &p_792->g_329[1]) ^ p_26)))) & 0x7A0BBB95D51006F4L))) && p_26) | 0x54B6L))) , p_26)) >= (*l_489)) || p_24)) ^ p_27) != 0x41D4E4C455EE1605L), 0xDDL)) <= l_509)) , (*p_792->g_230)) <= l_485))));
        }
    }
    else
    { /* block id: 268 */
        if ((safe_sub_func_int64_t_s_s(0x4A2C857AA1ADEC18L, (*l_489))))
        { /* block id: 269 */
            union U1 l_520 = {-1L};
            uint8_t **l_521[10] = {&p_792->g_131[6][0][2],&p_792->g_131[3][2][2],&p_792->g_131[5][2][1],&p_792->g_131[3][2][2],&p_792->g_131[6][0][2],&p_792->g_131[6][0][2],&p_792->g_131[3][2][2],&p_792->g_131[5][2][1],&p_792->g_131[3][2][2],&p_792->g_131[6][0][2]};
            int32_t **l_522 = &l_489;
            int i;
            (*l_522) = ((l_519 != ((l_520 = l_520) , l_521[5])) , &l_516);
        }
        else
        { /* block id: 272 */
            (*l_489) &= (*p_792->g_281);
        }
    }
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U0  func_28(int32_t  p_29, uint32_t  p_30, int8_t * p_31, struct S2 * p_792)
{ /* block id: 239 */
    uint8_t l_461[8];
    union U0 l_464 = {0x16L};
    int i;
    for (i = 0; i < 8; i++)
        l_461[i] = 255UL;
    ++l_461[2];
    return l_464;
}


/* ------------------------------------------ */
/* 
 * reads : p_792->g_71 p_792->g_299 p_792->g_70 p_792->g_230 p_792->g_213.f0 p_792->g_94 p_792->g_281 p_792->g_181 p_792->g_98 p_792->g_386 p_792->g_6 p_792->g_64 p_792->g_18 p_792->g_277 p_792->g_392 p_792->g_189 p_792->g_400 p_792->g_413 p_792->g_418 p_792->g_459 p_792->g_460 p_792->g_5
 * writes: p_792->g_71 p_792->g_277 p_792->g_182 p_792->g_70 p_792->g_181 p_792->g_123 p_792->g_185 p_792->g_98 p_792->g_386 p_792->g_64 p_792->g_390.f2 p_792->g_390.f0 p_792->g_400 p_792->g_329 p_792->g_417 p_792->g_224 p_792->g_445 p_792->g_460
 */
int8_t * func_32(int8_t * p_33, struct S2 * p_792)
{ /* block id: 172 */
    uint32_t l_334 = 4294967286UL;
    uint64_t *l_366 = &p_792->g_94[1];
    int64_t *l_381 = &p_792->g_329[1];
    int8_t *l_387 = (void*)0;
    union U1 *l_389 = &p_792->g_390;
    union U1 **l_388 = &l_389;
    uint32_t *l_415 = &p_792->g_416[5];
    uint8_t **l_444 = &p_792->g_131[5][2][1];
    uint8_t ***l_443[2];
    int32_t l_456[2];
    int i;
    for (i = 0; i < 2; i++)
        l_443[i] = &l_444;
    for (i = 0; i < 2; i++)
        l_456[i] = (-1L);
    for (p_792->g_71 = 4; (p_792->g_71 >= 2); p_792->g_71 -= 1)
    { /* block id: 175 */
        int32_t l_338 = 7L;
        uint16_t *l_365 = (void*)0;
        union U1 **l_391 = &l_389;
        uint32_t *l_431 = &p_792->g_185[1];
        uint32_t l_458 = 7UL;
        if (l_334)
        { /* block id: 176 */
            int8_t *l_335 = &p_792->g_6;
            int16_t *l_357 = &p_792->g_18;
            int32_t l_358 = 0x6A54095CL;
            uint64_t *l_368 = &p_792->g_94[4];
            uint64_t **l_367 = &l_368;
            uint32_t *l_382 = &l_334;
            for (p_792->g_277 = 0; (p_792->g_277 <= 6); p_792->g_277 += 1)
            { /* block id: 179 */
                uint8_t l_349 = 0x6AL;
                int16_t *l_356 = &p_792->g_71;
                for (p_792->g_182 = 6; (p_792->g_182 >= 0); p_792->g_182 -= 1)
                { /* block id: 182 */
                    return l_335;
                }
                if ((*p_792->g_299))
                    continue;
                (*p_792->g_281) = ((safe_mod_func_int16_t_s_s((*p_792->g_230), (l_338 && l_338))) , (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(4294967295UL, (((-2L) || (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(((l_349 && 4294967293UL) & (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((l_356 == l_357) , l_349) , l_338), l_334)), l_358)), (*p_792->g_230)))), p_792->g_213[1].f0)) <= p_792->g_94[0]), l_349)), 1UL))) >= 0x5767460E2FB11A5EL))), 7)));
            }
            l_358 = ((--p_792->g_181[4][6][0]) >= ((safe_mod_func_uint8_t_u_u(255UL, (safe_add_func_uint64_t_u_u((l_365 != l_357), l_334)))) < (l_366 == ((*l_367) = (void*)0))));
            for (p_792->g_123 = 0; (p_792->g_123 <= 6); p_792->g_123 += 1)
            { /* block id: 193 */
                int32_t l_373[2];
                uint32_t *l_374 = &p_792->g_185[1];
                uint32_t *l_385 = &p_792->g_386;
                uint8_t **l_429 = &p_792->g_131[5][2][1];
                int32_t l_432 = 0x05344A25L;
                uint8_t ***l_442[8][4] = {{&l_429,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429},{&l_429,&l_429,(void*)0,&l_429}};
                uint8_t ****l_441 = &l_442[7][3];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_373[i] = 0x52823067L;
                (*p_792->g_392) = (((safe_sub_func_int8_t_s_s((((((*l_374) = (safe_div_func_uint16_t_u_u(65533UL, l_373[0]))) ^ (p_792->g_98--)) <= (safe_rshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u((+((l_358 <= (((l_358 , func_46(((l_374 == (((void*)0 != l_381) , l_382)) <= ((*l_385) |= ((safe_mod_func_uint64_t_u_u(18446744073709551612UL, l_334)) > 0x0D62L))), l_335, p_792)) != l_387) ^ l_358)) && l_358)), 4)) ^ l_338) >= l_373[0]), 2))) > 8UL), (*p_33))) , l_388) != l_391);
                if (l_358)
                { /* block id: 198 */
                    int32_t l_395 = 0x6BBA8051L;
                    for (p_792->g_390.f0 = 0; (p_792->g_390.f0 <= 6); p_792->g_390.f0 += 1)
                    { /* block id: 201 */
                        uint64_t *l_398 = (void*)0;
                        uint64_t *l_399[4][8][6] = {{{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0}},{{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0}},{{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0}},{{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0},{(void*)0,&p_792->g_400,&p_792->g_400,&p_792->g_400,&p_792->g_400,(void*)0}}};
                        int32_t l_401 = 0x5ABF5479L;
                        uint16_t *l_412 = &p_792->g_181[4][5][0];
                        int i, j, k;
                        (*p_792->g_418) = (safe_lshift_func_int8_t_s_u((l_395 || l_395), (p_792->g_189 || (l_395 > (safe_add_func_int64_t_s_s((p_792->g_417 = (((((((*l_381) = (((((((p_792->g_400--) , (((((*l_412) = (safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(((9L > (l_366 != ((*l_367) = &p_792->g_94[4]))) | l_373[0]), l_401)), 6)), 9)), l_401))) && 0xBB25L) , (void*)0) != p_792->g_413)) & l_401) && l_338) > l_401) >= 0x64D628F1B933ADC6L) != 0x79L)) & p_792->g_98) <= l_395) , l_415) != (void*)0) , 0L)), l_358))))));
                        return l_387;
                    }
                }
                else
                { /* block id: 210 */
                    int32_t *l_419[1];
                    uint8_t ***l_430 = &l_429;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_419[i] = &p_792->g_417;
                    for (p_792->g_390.f2 = 1; (p_792->g_390.f2 <= 6); p_792->g_390.f2 += 1)
                    { /* block id: 213 */
                        int32_t *l_421 = &p_792->g_224;
                        uint16_t *l_424 = &p_792->g_213[1].f4;
                        uint16_t *l_425 = &p_792->g_213[1].f4;
                        uint16_t *l_426 = &p_792->g_181[4][5][0];
                        l_421 = l_419[0];
                        (*l_421) = (l_334 >= ((safe_mod_func_int16_t_s_s(0x7280L, (*p_792->g_230))) && ((*l_426)++)));
                    }
                    (*l_430) = l_429;
                    l_432 = (((+0x56AE5293L) , l_374) != l_431);
                }
                if ((safe_sub_func_int32_t_s_s(0x41BEC5B4L, (safe_mul_func_int8_t_s_s(0x00L, (safe_add_func_int16_t_s_s(l_338, ((safe_lshift_func_int8_t_s_s((((((*l_441) = (void*)0) != (p_792->g_445 = l_443[0])) != (safe_sub_func_int32_t_s_s(l_358, (safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((p_792->g_189 & l_334), 3UL)) ^ p_792->g_213[1].f0), 0x1D6AL)) , 255UL) & l_358), 8L)) <= 0x6C9EL), l_373[0]))))) || 0x58L), (*p_33))) < 0x0F45L))))))))
                { /* block id: 223 */
                    int16_t l_457 = (-2L);
                    l_456[0] = l_373[0];
                    if (l_457)
                        break;
                }
                else
                { /* block id: 226 */
                    for (l_432 = 4; (l_432 >= 1); l_432 -= 1)
                    { /* block id: 229 */
                        if (l_458)
                            break;
                    }
                }
            }
        }
        else
        { /* block id: 234 */
            (*p_792->g_459) = &p_792->g_5[6];
        }
    }
    return (*p_792->g_460);
}


/* ------------------------------------------ */
/* 
 * reads : p_792->g_316 p_792->g_224 p_792->g_277 p_792->g_188 p_792->g_64 p_792->g_103 p_792->g_104
 * writes: p_792->g_316 p_792->g_329 p_792->g_224
 */
int8_t * func_34(uint16_t  p_35, uint8_t  p_36, uint8_t  p_37, union U0  p_38, int8_t * p_39, struct S2 * p_792)
{ /* block id: 164 */
    int32_t *l_314 = &p_792->g_224;
    int32_t **l_315 = &l_314;
    union U1 * volatile *l_317 = &p_792->g_316;
    int64_t *l_328 = &p_792->g_329[1];
    uint16_t l_331 = 65530UL;
    int32_t l_333 = 0x76A0469AL;
    (*l_315) = l_314;
    (*l_317) = p_792->g_316;
    (**l_315) = ((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((*l_314), ((((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((p_37 > (safe_div_func_int16_t_s_s(((void*)0 != l_328), (-4L)))) , (((*l_314) != (!(safe_unary_minus_func_int8_t_s(((p_35 , (p_792->g_277 || (+(l_331 &= ((*l_328) = ((((0x1706L <= p_37) != p_36) || p_37) , p_36)))))) && (-4L)))))) & p_792->g_188[4][0][5])), 3)), (*l_314))) == p_792->g_64) , (*p_792->g_103)) , (**l_315)))), (**l_315))) , 1L);
    l_333 ^= (**l_315);
    return &p_792->g_277;
}


/* ------------------------------------------ */
/* 
 * reads : p_792->g_64 p_792->g_94 p_792->g_98 p_792->g_18 p_792->g_6 p_792->g_70 p_792->g_103 p_792->g_117 p_792->g_71 p_792->g_116 p_792->g_112 p_792->g_104 p_792->g_181 p_792->g_185 p_792->g_188 p_792->g_189 p_792->g_193 p_792->g_213 p_792->g_213.f0 p_792->g_182 p_792->g_224 p_792->g_281 p_792->g_230 p_792->g_299
 * writes: p_792->g_70 p_792->g_71 p_792->g_94 p_792->g_98 p_792->g_117 p_792->g_123 p_792->g_131 p_792->g_64 p_792->g_181 p_792->g_188 p_792->g_189 p_792->g_193 p_792->g_115 p_792->g_182 p_792->g_224 p_792->g_277 p_792->g_185
 */
int32_t  func_44(int8_t * p_45, struct S2 * p_792)
{ /* block id: 18 */
    uint32_t l_68 = 0x653D3A1AL;
    int32_t l_76 = 0x5C49480DL;
    union U0 l_83[5] = {{254UL},{254UL},{254UL},{254UL},{254UL}};
    int32_t l_92[7] = {0x75F43C6BL,0x668E7EE3L,0x75F43C6BL,0x75F43C6BL,0x668E7EE3L,0x75F43C6BL,0x75F43C6BL};
    int32_t l_99 = 0L;
    int16_t *l_101[1];
    int16_t l_142 = 0L;
    uint8_t **l_153[4];
    int16_t *l_200 = (void*)0;
    uint32_t l_252 = 4294967295UL;
    int8_t **l_261 = &p_792->g_5[6];
    int16_t l_292 = 1L;
    uint16_t l_297 = 0x2914L;
    int16_t l_298[7];
    int i;
    for (i = 0; i < 1; i++)
        l_101[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_153[i] = &p_792->g_131[6][7][0];
    for (i = 0; i < 7; i++)
        l_298[i] = 1L;
    if (((safe_sub_func_uint8_t_u_u(l_68, l_68)) , 0x6CDB5955L))
    { /* block id: 19 */
        int32_t *l_69[5][2][2];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_69[i][j][k] = &p_792->g_70;
            }
        }
        p_792->g_71 = (p_792->g_70 = l_68);
        p_792->g_70 = (8L < ((void*)0 != p_45));
    }
    else
    { /* block id: 23 */
        int32_t l_74 = 0L;
        int16_t *l_75[5][7] = {{&p_792->g_71,&p_792->g_71,&p_792->g_71,&p_792->g_18,(void*)0,(void*)0,(void*)0},{&p_792->g_71,&p_792->g_71,&p_792->g_71,&p_792->g_18,(void*)0,(void*)0,(void*)0},{&p_792->g_71,&p_792->g_71,&p_792->g_71,&p_792->g_18,(void*)0,(void*)0,(void*)0},{&p_792->g_71,&p_792->g_71,&p_792->g_71,&p_792->g_18,(void*)0,(void*)0,(void*)0},{&p_792->g_71,&p_792->g_71,&p_792->g_71,&p_792->g_18,(void*)0,(void*)0,(void*)0}};
        int32_t *l_88 = &p_792->g_70;
        uint32_t *l_91[3];
        int32_t l_93 = 3L;
        uint32_t *l_97[2];
        int32_t l_110[8] = {0x74B2D4C7L,0x74B2D4C7L,0x74B2D4C7L,0x74B2D4C7L,0x74B2D4C7L,0x74B2D4C7L,0x74B2D4C7L,0x74B2D4C7L};
        int32_t l_129 = 0x304C604AL;
        uint8_t l_220 = 252UL;
        int8_t **l_263 = &p_792->g_5[6];
        int8_t ***l_262 = &l_263;
        int32_t **l_264 = &l_88;
        union U0 l_266[5] = {{0x4FL},{0x4FL},{0x4FL},{0x4FL},{0x4FL}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_91[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_97[i] = &p_792->g_98;
        if ((((safe_add_func_int64_t_s_s(((l_76 = l_74) | ((safe_rshift_func_int16_t_s_u((l_99 ^= ((safe_add_func_uint16_t_u_u((((((l_68 , (safe_mod_func_uint32_t_u_u((((((l_83[0] , (safe_sub_func_uint32_t_u_u((p_792->g_98 |= ((((*l_88) = l_74) == (safe_div_func_uint64_t_u_u((l_83[0].f0 ^ p_792->g_64), l_83[0].f0))) != (((--p_792->g_94[4]) , l_75[2][5]) != (void*)0))), p_792->g_64))) , (-5L)) < 0x07L) | p_792->g_18) & 1L), l_83[0].f0))) , (void*)0) == &p_792->g_64) < l_68) != p_792->g_6), 65535UL)) != (-8L))), 2)) | l_92[2])), l_68)) > p_792->g_6) , 0x14CD5359L))
        { /* block id: 29 */
            int16_t l_100 = 0x6417L;
            int8_t *l_102 = &p_792->g_6;
            int32_t l_105 = 0x71C44022L;
            int32_t l_114[2][8] = {{0x5C9B18AFL,0x5C9B18AFL,0L,0L,0L,0L,0L,0x5C9B18AFL},{0x5C9B18AFL,0x5C9B18AFL,0L,0L,0L,0L,0L,0x5C9B18AFL}};
            int i, j;
            (*l_88) |= p_792->g_94[1];
            if ((l_105 = (((((((l_100 , ((((~(l_101[0] == &l_100)) > p_792->g_94[4]) , p_792->g_64) ^ (((p_45 != l_102) == (&l_93 != &p_792->g_70)) < p_792->g_70))) , (void*)0) != (void*)0) , (*l_88)) && 252UL) , p_792->g_103) != (void*)0)))
            { /* block id: 32 */
                int32_t *l_106 = &l_76;
                int32_t *l_107 = &l_93;
                int32_t *l_108 = &l_76;
                int32_t *l_109[9][6] = {{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105}};
                int64_t l_128 = 0x1EA80ACB108F1FC7L;
                int i, j;
                ++p_792->g_117;
                for (p_792->g_71 = 3; (p_792->g_71 >= 0); p_792->g_71 -= 1)
                { /* block id: 36 */
                    int64_t l_127 = 4L;
                    uint8_t **l_130 = (void*)0;
                    int16_t l_137 = 0x7881L;
                    int32_t l_155 = 0x4B6E5E77L;
                    int64_t l_186 = 0x02D65ADCFF9AFA6BL;
                    for (l_100 = 0; (l_100 >= 0); l_100 -= 1)
                    { /* block id: 39 */
                        uint64_t *l_122[7][3] = {{&p_792->g_94[8],&p_792->g_94[4],&p_792->g_94[8]},{&p_792->g_94[8],&p_792->g_94[4],&p_792->g_94[8]},{&p_792->g_94[8],&p_792->g_94[4],&p_792->g_94[8]},{&p_792->g_94[8],&p_792->g_94[4],&p_792->g_94[8]},{&p_792->g_94[8],&p_792->g_94[4],&p_792->g_94[8]},{&p_792->g_94[8],&p_792->g_94[4],&p_792->g_94[8]},{&p_792->g_94[8],&p_792->g_94[4],&p_792->g_94[8]}};
                        int i, j;
                        (*l_107) = (((((l_114[(l_100 + 1)][(l_100 + 6)] |= p_792->g_116[(l_100 + 6)][(l_100 + 1)]) != (((p_792->g_94[8] <= (248UL | p_792->g_94[6])) || l_68) & ((p_792->g_123 = p_792->g_64) || ((p_792->g_112[2] ^ ((safe_unary_minus_func_uint8_t_u((*l_88))) <= (safe_mod_func_int16_t_s_s(l_127, 0x7137L)))) != l_128)))) && 0L) , l_129) == 1L);
                    }
                    if (((p_792->g_131[5][2][1] = &p_792->g_64) == (void*)0))
                    { /* block id: 45 */
                        int64_t l_134 = 0x526E25B4CBD725CBL;
                        int64_t *l_154 = &l_127;
                        (*l_108) &= ((*l_88) == (0x643BL == ((l_134 > (((safe_sub_func_uint8_t_u_u(l_99, l_137)) & ((-1L) & ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((p_792->g_98 || l_100), 3)), ((void*)0 != &p_792->g_98))) || l_142))) & p_792->g_71)) < (*l_107))));
                        (*l_107) ^= ((((safe_add_func_uint8_t_u_u((((p_792->g_98 , (l_76 = ((*l_154) = (((safe_mod_func_uint8_t_u_u((*l_88), (safe_sub_func_int16_t_s_s((((p_792->g_112[2] <= (((l_137 & ((*l_88) ^ ((l_137 , 0x1BAEL) | (safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((void*)0 == l_153[1]) < (*l_106)), l_105)), p_792->g_64))))) && p_792->g_116[0][3]) | (*l_88))) & (*l_88)) <= (*l_106)), 0x3AFEL)))) || 0x9C52FCFA090A79C2L) < l_114[0][1])))) <= l_137) <= 0x52A41E83L), l_137)) || p_792->g_104) == p_792->g_94[4]) < l_105);
                    }
                    else
                    { /* block id: 50 */
                        uint16_t l_156 = 0xCCE8L;
                        ++l_156;
                    }
                    if (p_792->g_117)
                        continue;
                    for (p_792->g_64 = 0; (p_792->g_64 <= 3); p_792->g_64 += 1)
                    { /* block id: 56 */
                        uint16_t *l_175 = &l_83[0].f4;
                        uint16_t *l_176 = &l_83[0].f4;
                        uint16_t *l_177 = (void*)0;
                        uint16_t *l_178 = &l_83[0].f4;
                        int32_t l_179[3][10][4] = {{{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L}},{{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L}},{{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L},{(-5L),(-5L),(-2L),0x3055CD90L}}};
                        uint16_t *l_180[6][5][8] = {{{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0}},{{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0}},{{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0}},{{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0}},{{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0}},{{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0},{&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0,&p_792->g_181[1][6][0],&p_792->g_181[4][4][0],&p_792->g_181[4][4][0],&p_792->g_181[1][6][0],(void*)0}}};
                        int8_t *l_187 = &p_792->g_188[4][0][5];
                        int i, j, k;
                        (*l_107) &= (((*l_187) &= (safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((p_792->g_116[(p_792->g_64 + 5)][p_792->g_71] , (!(l_186 |= ((!(p_792->g_116[(p_792->g_64 + 1)][p_792->g_64] | (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(0x22B5A8EEEFA9EDD4L, (*l_108))), 2)), (*l_88))), (p_792->g_71 , (l_114[1][5] , p_792->g_64)))), ((p_792->g_181[6][5][0]--) & ((*p_45) > p_792->g_185[1])))))) , l_99)))), 0UL)), 0x24FFD792L)), 5))) & l_92[2]);
                        if (p_792->g_117)
                            break;
                        p_792->g_189--;
                    }
                }
            }
            else
            { /* block id: 65 */
                int32_t *l_192[9][10][2] = {{{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0}},{{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0}},{{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0}},{{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0}},{{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0}},{{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0}},{{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0}},{{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0}},{{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0},{&l_114[0][1],(void*)0}}};
                int16_t *l_198[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_198[i] = &l_142;
                p_792->g_193++;
                for (l_129 = 0; (l_129 <= 3); l_129 += 1)
                { /* block id: 69 */
                    int16_t **l_199[3][9][7] = {{{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]}},{{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]}},{{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]},{&l_198[0],&l_101[0],(void*)0,&l_198[0],&l_75[0][4],&l_198[0],&l_198[0]}}};
                    int32_t l_201 = 0x60A869F2L;
                    int i, j, k;
                    if (((safe_lshift_func_uint16_t_u_s(l_92[4], 2)) | ((&p_792->g_71 == (l_200 = (l_75[0][4] = l_198[0]))) < 0x05D044DBL)))
                    { /* block id: 72 */
                        l_201 = ((l_201 >= 0x58268F0BL) ^ (!((*l_88) &= ((*p_45) <= (*p_45)))));
                    }
                    else
                    { /* block id: 75 */
                        return l_201;
                    }
                    for (p_792->g_64 = 0; (p_792->g_64 <= 9); p_792->g_64 += 1)
                    { /* block id: 80 */
                        int i, j;
                        return p_792->g_116[(l_129 + 6)][l_129];
                    }
                }
                (*l_88) = p_792->g_185[2];
                for (l_76 = 0; (l_76 > (-9)); l_76 = safe_sub_func_uint8_t_u_u(l_76, 9))
                { /* block id: 87 */
                    uint32_t l_210 = 0xDB800E99L;
                    uint64_t *l_214 = &p_792->g_213[1].f3;
                    uint64_t *l_215[2][6][8] = {{{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0}},{{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0},{(void*)0,(void*)0,&p_792->g_94[8],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[8],(void*)0}}};
                    int i, j, k;
                    if (p_792->g_70)
                        break;
                    for (p_792->g_193 = 0; p_792->g_193 < 7; p_792->g_193 += 1)
                    {
                        l_92[p_792->g_193] = 0x607D1F71L;
                    }
                    p_792->g_115 = (l_220 &= (safe_div_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(p_792->g_193, (l_210 < ((((0xAD4462A7L != (-1L)) > (l_114[1][4] == ((safe_rshift_func_int16_t_s_u((p_792->g_213[1] , l_99), 10)) || ((p_792->g_94[4]++) ^ (l_198[0] == ((safe_mul_func_uint8_t_u_u((((*l_88) & p_792->g_213[1].f0) , 250UL), (*p_45))) , &p_792->g_71)))))) & 0x54L) , p_792->g_182)))) == (*p_45)), l_105)) & l_210), p_792->g_104)));
                    for (l_100 = 15; (l_100 <= 22); ++l_100)
                    { /* block id: 95 */
                        return (*l_88);
                    }
                }
            }
        }
        else
        { /* block id: 100 */
            int32_t *l_225[8][1][10] = {{{(void*)0,&l_92[2],&l_92[2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_92[2]}},{{(void*)0,&l_92[2],&l_92[2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_92[2]}},{{(void*)0,&l_92[2],&l_92[2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_92[2]}},{{(void*)0,&l_92[2],&l_92[2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_92[2]}},{{(void*)0,&l_92[2],&l_92[2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_92[2]}},{{(void*)0,&l_92[2],&l_92[2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_92[2]}},{{(void*)0,&l_92[2],&l_92[2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_92[2]}},{{(void*)0,&l_92[2],&l_92[2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_92[2]}}};
            int32_t **l_226 = &l_225[5][0][1];
            int i, j, k;
            l_99 |= (4L <= (*l_88));
            (*l_226) = &l_92[3];
            for (l_99 = 20; (l_99 >= (-9)); --l_99)
            { /* block id: 105 */
                int16_t **l_229[8][3][4] = {{{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]}},{{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]}},{{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]}},{{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]}},{{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]}},{{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]}},{{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]}},{{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]},{&l_200,&l_200,&l_75[0][4],&l_75[0][4]}}};
                int32_t l_245 = 0L;
                int16_t l_251 = (-10L);
                int i, j, k;
                (1 + 1);
            }
        }
        (*l_88) = ((l_99 = 2L) & (l_261 != ((*l_262) = &p_792->g_5[7])));
        (*l_264) = &l_93;
        for (p_792->g_182 = 9; (p_792->g_182 >= 0); p_792->g_182 -= 1)
        { /* block id: 133 */
            uint64_t l_280 = 0UL;
            for (p_792->g_193 = 0; (p_792->g_193 <= 9); p_792->g_193 += 1)
            { /* block id: 136 */
                int32_t *l_265 = &l_129;
                (*l_265) &= (**l_264);
            }
            for (p_792->g_224 = 0; (p_792->g_224 <= 9); p_792->g_224 += 1)
            { /* block id: 141 */
                int64_t l_278 = 1L;
                int32_t l_279 = 0x4F38775CL;
                (**l_264) |= (-7L);
                (**l_264) = (l_266[4] , (safe_div_func_int64_t_s_s((((-2L) < (safe_div_func_int64_t_s_s(p_792->g_70, (safe_rshift_func_int8_t_s_s(l_68, (!((safe_mod_func_uint8_t_u_u(0x43L, (safe_rshift_func_uint16_t_u_u(((l_278 = (((p_792->g_277 = (*l_88)) , (**l_264)) < 0x44C8E39011DAF7CFL)) || (**l_264)), p_792->g_181[6][6][0])))) >= l_279))))))) && l_280), 6UL)));
                (*p_792->g_281) ^= ((**l_264) = ((p_792->g_94[4] , 0x59E9L) >= (p_792->g_182 == l_68)));
                if (l_280)
                    continue;
            }
        }
    }
    for (l_99 = 8; (l_99 == (-21)); l_99 = safe_sub_func_uint32_t_u_u(l_99, 2))
    { /* block id: 154 */
        uint8_t **l_284 = &p_792->g_131[2][5][2];
        int32_t l_285 = 0x740B4E1BL;
        uint32_t *l_302 = &l_252;
        uint32_t *l_303 = &p_792->g_185[0];
        int32_t *l_304 = &l_285;
        (*p_792->g_299) &= (p_792->g_71 , ((((l_284 == (l_153[3] = (void*)0)) & ((l_285 && p_792->g_224) <= ((((safe_add_func_int16_t_s_s(0x7E79L, (safe_div_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(l_292, (safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_285 >= p_792->g_6), (*p_792->g_230))), l_285)))) <= l_92[2]) | l_142), l_285)))) == 1L) && l_297) || l_298[2]))) == 0x2697L) && 0x11FFL));
        (*l_304) = (safe_rshift_func_int16_t_s_s(((*p_45) != (!((*p_792->g_299) ^ ((*l_303) = ((*l_302) = (4294967295UL && 5UL)))))), 12));
    }
    return l_99;
}


/* ------------------------------------------ */
/* 
 * reads : p_792->g_6 p_792->g_64 p_792->g_18
 * writes: p_792->g_64
 */
int8_t * func_46(int32_t  p_47, int8_t * p_48, struct S2 * p_792)
{ /* block id: 13 */
    int8_t *l_51 = &p_792->g_6;
    int32_t l_56 = 0x1C17F726L;
    uint8_t *l_63 = &p_792->g_64;
    l_56 = ((l_51 == (p_47 , &p_792->g_6)) | ((((0L <= p_47) && (((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(l_56, l_56)) , (((*l_63) &= (safe_rshift_func_uint16_t_u_u((p_792->g_6 > (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(2UL, 2)) | 0x037AL), 0xDDL))), 13))) & l_56)) ^ p_792->g_6), p_47)) || l_56) , 0x6574L)) && 0xEBL) <= p_792->g_18));
    return p_48;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_793;
    struct S2* p_792 = &c_793;
    struct S2 c_794 = {
        0x58L, // p_792->g_6
        {&p_792->g_6,&p_792->g_6,&p_792->g_6,&p_792->g_6,&p_792->g_6,&p_792->g_6,&p_792->g_6,&p_792->g_6,&p_792->g_6,&p_792->g_6}, // p_792->g_5
        0x4447L, // p_792->g_18
        0x25L, // p_792->g_64
        1L, // p_792->g_70
        0x116AL, // p_792->g_71
        {1UL,1UL,0UL,1UL,1UL,1UL,1UL,0UL,1UL,1UL}, // p_792->g_94
        0xE4EAF162L, // p_792->g_98
        0UL, // p_792->g_104
        &p_792->g_104, // p_792->g_103
        0x45DC917AL, // p_792->g_111
        {0x172096B2L,0x2EC37504L,0x172096B2L,0x172096B2L,0x2EC37504L,0x172096B2L,0x172096B2L,0x2EC37504L,0x172096B2L,0x172096B2L}, // p_792->g_112
        0x3061077FL, // p_792->g_113
        0x249038C8L, // p_792->g_115
        {{0x55FDL,0x4F4CL,0x55A6L,3L},{0x55FDL,0x4F4CL,0x55A6L,3L},{0x55FDL,0x4F4CL,0x55A6L,3L},{0x55FDL,0x4F4CL,0x55A6L,3L},{0x55FDL,0x4F4CL,0x55A6L,3L},{0x55FDL,0x4F4CL,0x55A6L,3L},{0x55FDL,0x4F4CL,0x55A6L,3L},{0x55FDL,0x4F4CL,0x55A6L,3L},{0x55FDL,0x4F4CL,0x55A6L,3L},{0x55FDL,0x4F4CL,0x55A6L,3L}}, // p_792->g_116
        0x5FD3493DL, // p_792->g_117
        0x60FC580CL, // p_792->g_123
        {{{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64}},{{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64}},{{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64}},{{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64}},{{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64}},{{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64}},{{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64}},{{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64}},{{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64},{(void*)0,(void*)0,&p_792->g_64}}}, // p_792->g_131
        {{{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L}},{{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L}},{{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L}},{{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L}},{{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L}},{{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L}},{{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L},{0xB498L}}}, // p_792->g_181
        0x2A311253L, // p_792->g_182
        {6UL,6UL,6UL}, // p_792->g_185
        {{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}},{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}},{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}},{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}},{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}},{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}},{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}},{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}},{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}},{{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L},{0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L}}}, // p_792->g_188
        0x3CL, // p_792->g_189
        0UL, // p_792->g_193
        {{1UL},{1UL}}, // p_792->g_213
        8L, // p_792->g_224
        {{&p_792->g_224},{&p_792->g_224}}, // p_792->g_223
        &p_792->g_71, // p_792->g_230
        (-10L), // p_792->g_277
        &p_792->g_70, // p_792->g_281
        &p_792->g_70, // p_792->g_299
        (void*)0, // p_792->g_316
        {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}, // p_792->g_329
        {{{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70}},{{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70}},{{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70}},{{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70}},{{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70}},{{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70}},{{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70}},{{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70}},{{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70},{(void*)0,&p_792->g_70}}}, // p_792->g_332
        0x07DE2283L, // p_792->g_386
        {0x66A222620D03C911L}, // p_792->g_390
        &p_792->g_390.f2, // p_792->g_392
        0x0632BCC5FBBC6955L, // p_792->g_400
        {{&p_792->g_94[6],&p_792->g_94[5],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[5],&p_792->g_94[6],&p_792->g_94[6]},{&p_792->g_94[6],&p_792->g_94[5],&p_792->g_94[6],&p_792->g_94[6],&p_792->g_94[5],&p_792->g_94[6],&p_792->g_94[6]}}, // p_792->g_414
        &p_792->g_414[1][2], // p_792->g_413
        {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}, // p_792->g_416
        (-5L), // p_792->g_417
        &p_792->g_224, // p_792->g_418
        (void*)0, // p_792->g_420
        (void*)0, // p_792->g_445
        &p_792->g_5[6], // p_792->g_460
        &p_792->g_460, // p_792->g_459
        (void*)0, // p_792->g_476
        (void*)0, // p_792->g_477
        &p_792->g_417, // p_792->g_479
        &p_792->g_479, // p_792->g_478
        &p_792->g_213[1], // p_792->g_483
        {{{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0}},{{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0}},{{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0}},{{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0},{(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0,(void*)0,&p_792->g_479,&p_792->g_479,&p_792->g_479,(void*)0}}}, // p_792->g_488
        {0x215CL,0x215CL,0x215CL,0x215CL,0x215CL,0x215CL,0x215CL}, // p_792->g_504
        {{8UL,0x1493B972FBC740BFL,0xFD76CD25131B3627L,18446744073709551615UL,0xFD76CD25131B3627L,0x1493B972FBC740BFL},{8UL,0x1493B972FBC740BFL,0xFD76CD25131B3627L,18446744073709551615UL,0xFD76CD25131B3627L,0x1493B972FBC740BFL},{8UL,0x1493B972FBC740BFL,0xFD76CD25131B3627L,18446744073709551615UL,0xFD76CD25131B3627L,0x1493B972FBC740BFL},{8UL,0x1493B972FBC740BFL,0xFD76CD25131B3627L,18446744073709551615UL,0xFD76CD25131B3627L,0x1493B972FBC740BFL}}, // p_792->g_525
        &p_792->g_525[1][0], // p_792->g_528
        65535UL, // p_792->g_530
        &p_792->g_224, // p_792->g_543
        {&p_792->g_115,&p_792->g_115,&p_792->g_115,&p_792->g_115,&p_792->g_115,&p_792->g_115,&p_792->g_115,&p_792->g_115}, // p_792->g_573
        &p_792->g_460, // p_792->g_609
        0xE54C4BE2L, // p_792->g_663
        &p_792->g_479, // p_792->g_728
    };
    c_793 = c_794;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_792);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_792->g_6, "p_792->g_6", print_hash_value);
    transparent_crc(p_792->g_18, "p_792->g_18", print_hash_value);
    transparent_crc(p_792->g_64, "p_792->g_64", print_hash_value);
    transparent_crc(p_792->g_70, "p_792->g_70", print_hash_value);
    transparent_crc(p_792->g_71, "p_792->g_71", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_792->g_94[i], "p_792->g_94[i]", print_hash_value);

    }
    transparent_crc(p_792->g_98, "p_792->g_98", print_hash_value);
    transparent_crc(p_792->g_104, "p_792->g_104", print_hash_value);
    transparent_crc(p_792->g_111, "p_792->g_111", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_792->g_112[i], "p_792->g_112[i]", print_hash_value);

    }
    transparent_crc(p_792->g_113, "p_792->g_113", print_hash_value);
    transparent_crc(p_792->g_115, "p_792->g_115", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_792->g_116[i][j], "p_792->g_116[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_792->g_117, "p_792->g_117", print_hash_value);
    transparent_crc(p_792->g_123, "p_792->g_123", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_792->g_181[i][j][k], "p_792->g_181[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_792->g_182, "p_792->g_182", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_792->g_185[i], "p_792->g_185[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_792->g_188[i][j][k], "p_792->g_188[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_792->g_189, "p_792->g_189", print_hash_value);
    transparent_crc(p_792->g_193, "p_792->g_193", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_792->g_213[i].f0, "p_792->g_213[i].f0", print_hash_value);

    }
    transparent_crc(p_792->g_224, "p_792->g_224", print_hash_value);
    transparent_crc(p_792->g_277, "p_792->g_277", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_792->g_329[i], "p_792->g_329[i]", print_hash_value);

    }
    transparent_crc(p_792->g_386, "p_792->g_386", print_hash_value);
    transparent_crc(p_792->g_390.f3, "p_792->g_390.f3", print_hash_value);
    transparent_crc(p_792->g_400, "p_792->g_400", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_792->g_416[i], "p_792->g_416[i]", print_hash_value);

    }
    transparent_crc(p_792->g_417, "p_792->g_417", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_792->g_504[i], "p_792->g_504[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_792->g_525[i][j], "p_792->g_525[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_792->g_530, "p_792->g_530", print_hash_value);
    transparent_crc(p_792->g_663, "p_792->g_663", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
