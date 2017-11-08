// -g 53,66,2 -l 1,33,2
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


// Seed: 3322326281

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   uint32_t  f1;
   volatile int16_t  f2;
};

struct S1 {
   int32_t  f0;
   uint8_t  f1;
};

struct S2 {
    uint32_t g_2[7];
    int32_t g_13;
    int8_t g_78;
    int64_t g_81[4];
    uint64_t g_107[5];
    int8_t *g_112;
    int8_t **g_111;
    int8_t **g_113;
    int8_t * volatile *g_114;
    int8_t ***g_116[10];
    uint32_t g_118[10][8][3];
    int32_t ** volatile g_123;
    int32_t ** volatile g_124;
    int32_t g_126;
    int32_t *g_125;
    struct S1 g_140;
    struct S1 *g_142[6];
    struct S1 ** volatile g_141[10];
    volatile struct S0 g_153;
    int16_t g_155[4][4];
    int16_t g_157;
    uint32_t g_174;
    int16_t g_194[2];
    uint16_t g_218;
    struct S0 g_220;
    struct S0 *g_222;
    struct S0 ** volatile g_221;
    int32_t ** volatile g_226;
    int32_t * volatile g_271;
    int32_t ** volatile g_272;
    struct S0 g_284;
    volatile struct S0 g_295;
    volatile struct S0 * volatile g_296[8];
    volatile uint8_t g_338[7][5][3];
    int32_t ** volatile g_410;
    volatile uint16_t g_418[8];
    struct S0 g_424;
    struct S0 g_425[2][6][8];
    int32_t ** volatile g_427[5][4];
    int32_t *g_436;
    uint64_t g_453;
    uint64_t g_493;
    struct S1 * volatile g_509[7];
    struct S1 * volatile g_510[4];
    struct S1 * volatile g_511;
    struct S1 * volatile g_512;
    uint64_t g_516;
    uint16_t g_528[2];
    uint16_t *g_527;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S2 * p_540);
int16_t  func_19(int32_t  p_20, int32_t * p_21, int32_t  p_22, struct S2 * p_540);
int16_t  func_30(int16_t  p_31, struct S1  p_32, int32_t  p_33, uint32_t  p_34, struct S2 * p_540);
int8_t  func_37(int32_t * p_38, int32_t  p_39, int32_t * p_40, int64_t  p_41, int32_t * p_42, struct S2 * p_540);
int32_t * func_44(uint8_t  p_45, uint64_t  p_46, int32_t * p_47, uint32_t  p_48, struct S2 * p_540);
int32_t * func_49(int32_t * p_50, uint64_t  p_51, int32_t * p_52, int32_t * p_53, struct S2 * p_540);
int32_t * func_54(uint64_t  p_55, uint32_t  p_56, int32_t * p_57, uint64_t  p_58, uint8_t  p_59, struct S2 * p_540);
uint64_t  func_60(int32_t * p_61, uint64_t  p_62, int32_t * p_63, uint32_t  p_64, int64_t  p_65, struct S2 * p_540);
int32_t * func_66(int8_t  p_67, uint16_t  p_68, uint64_t  p_69, int32_t  p_70, uint64_t  p_71, struct S2 * p_540);
int16_t  func_95(int8_t  p_96, int8_t * p_97, int16_t  p_98, struct S2 * p_540);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_540->g_2 p_540->g_13 p_540->g_78 p_540->g_81 p_540->g_107 p_540->g_114 p_540->g_126 p_540->g_118 p_540->g_153 p_540->g_155 p_540->g_125 p_540->g_174 p_540->g_112 p_540->g_111 p_540->g_140 p_540->g_157 p_540->g_194 p_540->g_218 p_540->g_221 p_540->g_226 p_540->g_410 p_540->g_436 p_540->g_425.f0 p_540->g_424.f1 p_540->g_220.f0 p_540->g_418 p_540->g_220.f1 p_540->g_295.f2 p_540->g_284.f1 p_540->g_425.f1 p_540->g_512 p_540->g_516 p_540->g_284.f2 p_540->g_528 p_540->g_493
 * writes: p_540->g_13 p_540->g_78 p_540->g_107 p_540->g_111 p_540->g_113 p_540->g_116 p_540->g_125 p_540->g_126 p_540->g_155 p_540->g_157 p_540->g_174 p_540->g_118 p_540->g_194 p_540->g_218 p_540->g_222 p_540->g_220.f1 p_540->g_140.f1 p_540->g_140.f0 p_540->g_453 p_540->g_436 p_540->g_493 p_540->g_140 p_540->g_527 p_540->g_221
 */
int32_t  func_1(struct S2 * p_540)
{ /* block id: 4 */
    uint8_t l_9[3][5][9] = {{{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L}},{{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L}},{{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L},{0x29L,1UL,0x27L,0x78L,255UL,0UL,0x1BL,0x27L,0xC6L}}};
    int32_t *l_12 = &p_540->g_13;
    int32_t l_14 = 0x1716E289L;
    struct S1 l_497 = {0x0A441E73L,251UL};
    int32_t l_535 = (-10L);
    int32_t *l_538 = &p_540->g_126;
    int32_t *l_539[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_539[i] = &l_497.f0;
    l_14 &= (((*l_12) = (((p_540->g_2[5] , ((1L ^ p_540->g_2[3]) != (safe_mul_func_uint8_t_u_u((0x6EL && (safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_9[0][4][1], 1L)) == l_9[0][4][1]), (safe_rshift_func_int16_t_s_s(p_540->g_2[1], 6))))), ((18446744073709551609UL == p_540->g_2[5]) <= l_9[0][4][1]))))) < p_540->g_2[1]) , p_540->g_2[2])) | 0xA3FDA37BL);
    if ((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(8L, p_540->g_2[5])), 6)))
    { /* block id: 7 */
        uint64_t l_25 = 1UL;
        int32_t *l_43 = &l_14;
        int8_t *l_76 = (void*)0;
        int8_t *l_77 = &p_540->g_78;
        int32_t l_438 = (-1L);
        int32_t **l_490 = &p_540->g_436;
        uint64_t *l_491 = (void*)0;
        uint64_t *l_492 = &p_540->g_493;
        (*l_12) = (func_19((safe_sub_func_uint32_t_u_u(l_25, ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(p_540->g_13, 1)) || (func_30((safe_div_func_int8_t_s_s(((*p_540->g_112) = func_37(l_43, p_540->g_13, (((p_540->g_2[0] , (void*)0) == ((*l_490) = func_44(p_540->g_13, (((*l_492) = ((!((+(*l_12)) , (((*l_490) = func_49(func_54(func_60(func_66(((*l_77) &= ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(252UL, 1)), (*l_43))) >= p_540->g_13)), (*l_43), (*l_12), p_540->g_2[5], (*l_43), p_540), (*l_43), &p_540->g_13, p_540->g_81[1], p_540->g_425[0][2][2].f0, p_540), l_438, &l_14, p_540->g_220.f0, (*l_12), p_540), p_540->g_2[5], l_12, l_12, p_540)) == (void*)0))) <= (*l_12))) , (*l_12)), &p_540->g_13, p_540->g_425[0][2][2].f0, p_540))) , &l_14), p_540->g_13, &l_438, p_540)), p_540->g_284.f1)), l_497, p_540->g_425[0][2][2].f1, p_540->g_424.f1, p_540) , (*l_12))), p_540->g_528[0])) > p_540->g_516))), &p_540->g_13, p_540->g_425[0][2][2].f0, p_540) > l_535);
    }
    else
    { /* block id: 264 */
        struct S0 **l_537 = &p_540->g_222;
        struct S0 ***l_536[3][4];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_536[i][j] = &l_537;
        }
        p_540->g_221 = &p_540->g_222;
    }
    p_540->g_140.f0 ^= (p_540->g_418[6] , ((*l_538) ^= (*l_12)));
    return p_540->g_220.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_540->g_493 p_540->g_13
 * writes: p_540->g_493 p_540->g_13
 */
int16_t  func_19(int32_t  p_20, int32_t * p_21, int32_t  p_22, struct S2 * p_540)
{ /* block id: 256 */
    for (p_540->g_493 = 0; (p_540->g_493 <= 7); p_540->g_493 = safe_add_func_uint64_t_u_u(p_540->g_493, 6))
    { /* block id: 259 */
        uint32_t l_534[6] = {0xFE816BD4L,0xFE816BD4L,0xFE816BD4L,0xFE816BD4L,0xFE816BD4L,0xFE816BD4L};
        int i;
        (*p_21) &= l_534[4];
    }
    return p_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_540->g_512 p_540->g_13 p_540->g_516 p_540->g_140.f1 p_540->g_284.f2 p_540->g_126 p_540->g_107 p_540->g_155 p_540->g_2
 * writes: p_540->g_140 p_540->g_126 p_540->g_218 p_540->g_107 p_540->g_527
 */
int16_t  func_30(int16_t  p_31, struct S1  p_32, int32_t  p_33, uint32_t  p_34, struct S2 * p_540)
{ /* block id: 245 */
    int32_t *l_498 = &p_540->g_126;
    int32_t *l_499[1];
    int32_t l_500[7][3];
    uint32_t l_501 = 0x1084F0C3L;
    struct S1 l_508 = {0x0281DF85L,0UL};
    uint16_t l_515 = 1UL;
    uint8_t *l_521[7][3] = {{&l_508.f1,&l_508.f1,&p_540->g_140.f1},{&l_508.f1,&l_508.f1,&p_540->g_140.f1},{&l_508.f1,&l_508.f1,&p_540->g_140.f1},{&l_508.f1,&l_508.f1,&p_540->g_140.f1},{&l_508.f1,&l_508.f1,&p_540->g_140.f1},{&l_508.f1,&l_508.f1,&p_540->g_140.f1},{&l_508.f1,&l_508.f1,&p_540->g_140.f1}};
    uint16_t *l_524 = &p_540->g_218;
    uint64_t *l_525 = &p_540->g_107[3];
    uint16_t **l_526 = (void*)0;
    int8_t **l_529[6][7][3] = {{{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112}},{{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112}},{{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112}},{{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112}},{{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112}},{{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112},{(void*)0,(void*)0,&p_540->g_112}}};
    int8_t ***l_530 = (void*)0;
    int8_t **l_531 = &p_540->g_112;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_499[i] = (void*)0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            l_500[i][j] = 0L;
    }
    --l_501;
    (*p_540->g_512) = ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((-1L), 10)), 12)) , l_508);
    p_32.f0 = (p_34 > (((safe_rshift_func_uint16_t_u_u(((l_515 = p_540->g_13) == (((p_540->g_516 & p_540->g_140.f1) >= (safe_div_func_uint8_t_u_u(((((p_540->g_527 = ((((((((*l_525) &= (safe_lshift_func_uint16_t_u_s(((*l_524) = (((-1L) | p_540->g_284.f2) != ((((*l_498) &= p_34) , 0UL) | (safe_lshift_func_uint8_t_u_u(0x31L, 7))))), p_34))) , (*l_498)) < p_32.f1) , p_540->g_107[2]) , p_32.f1) , p_540->g_155[1][3]) , (void*)0)) != &p_540->g_528[0]) < p_31) ^ p_540->g_2[5]), 0x72L))) | p_33)), p_32.f0)) > 0x5D429D18L) <= 3L));
    l_531 = l_529[2][2][0];
    return p_540->g_107[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_37(int32_t * p_38, int32_t  p_39, int32_t * p_40, int64_t  p_41, int32_t * p_42, struct S2 * p_540)
{ /* block id: 241 */
    struct S1 *l_495 = &p_540->g_140;
    int32_t l_496 = (-9L);
    l_495 = l_495;
    return l_496;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_44(uint8_t  p_45, uint64_t  p_46, int32_t * p_47, uint32_t  p_48, struct S2 * p_540)
{ /* block id: 238 */
    int32_t *l_494 = (void*)0;
    return l_494;
}


/* ------------------------------------------ */
/* 
 * reads : p_540->g_13 p_540->g_153.f0 p_540->g_107 p_540->g_194 p_540->g_220.f1 p_540->g_295.f2 p_540->g_118 p_540->g_126
 * writes: p_540->g_453
 */
int32_t * func_49(int32_t * p_50, uint64_t  p_51, int32_t * p_52, int32_t * p_53, struct S2 * p_540)
{ /* block id: 231 */
    int64_t l_461[8][1][8] = {{{0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL}},{{0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL}},{{0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL}},{{0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL}},{{0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL}},{{0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL}},{{0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL}},{{0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL,0L,0L,0x0BB48499E5D3EE2AL}}};
    int32_t l_487 = (-1L);
    uint64_t *l_488 = &p_540->g_453;
    int32_t l_489 = 0x2904AC93L;
    int i, j, k;
    l_489 |= (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((l_461[1][0][5] && (safe_rshift_func_uint16_t_u_s(p_51, (safe_mul_func_int16_t_s_s((p_51 != (safe_div_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((((((safe_add_func_uint16_t_u_u((p_51 < (((safe_sub_func_int64_t_s_s((l_461[1][0][5] ^ ((safe_unary_minus_func_int8_t_s((((*l_488) = (0x57L != (safe_rshift_func_int16_t_s_s((((((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0x1350L, (l_487 = (safe_lshift_func_uint8_t_u_s(((((+0xD9L) || (safe_div_func_int32_t_s_s(0x68666F78L, (*p_53)))) ^ l_461[1][0][5]) ^ p_540->g_153.f0), p_51))))), l_461[1][0][5])) , (*p_52)) , p_540->g_13) || (-1L)) < 7L) ^ p_540->g_107[2]) != l_461[1][0][5]), 8)))) | p_540->g_194[1]))) & 0x6B679F6AC21D1FC7L)), 0x13A95681E31CB51CL)) ^ 0x19C000E0L) >= l_461[1][0][5])), p_51)) != p_540->g_220.f1) || 0x50AAB46DF394F76CL) || p_51) || p_540->g_295.f2) & p_51), 0xF38FL)), l_461[1][0][5])) <= 7UL) != l_461[6][0][6]), p_51))), p_51))))), p_540->g_118[5][4][1])) || p_51), p_540->g_126)), p_51));
    return p_50;
}


/* ------------------------------------------ */
/* 
 * reads : p_540->g_218 p_540->g_107 p_540->g_118 p_540->g_126 p_540->g_418
 * writes: p_540->g_453 p_540->g_107
 */
int32_t * func_54(uint64_t  p_55, uint32_t  p_56, int32_t * p_57, uint64_t  p_58, uint8_t  p_59, struct S2 * p_540)
{ /* block id: 223 */
    uint16_t l_439 = 0x5204L;
    int64_t *l_440[6][1] = {{&p_540->g_81[1]},{&p_540->g_81[1]},{&p_540->g_81[1]},{&p_540->g_81[1]},{&p_540->g_81[1]},{&p_540->g_81[1]}};
    int32_t l_441[3];
    struct S0 **l_450 = &p_540->g_222;
    struct S1 *l_451 = &p_540->g_140;
    uint64_t *l_452 = &p_540->g_453;
    uint64_t *l_454[3][10] = {{&p_540->g_107[2],&p_540->g_107[2],&p_540->g_107[2],&p_540->g_107[3],&p_540->g_107[4],&p_540->g_107[2],&p_540->g_107[3],&p_540->g_107[2],&p_540->g_107[3],&p_540->g_107[2]},{&p_540->g_107[2],&p_540->g_107[2],&p_540->g_107[2],&p_540->g_107[3],&p_540->g_107[4],&p_540->g_107[2],&p_540->g_107[3],&p_540->g_107[2],&p_540->g_107[3],&p_540->g_107[2]},{&p_540->g_107[2],&p_540->g_107[2],&p_540->g_107[2],&p_540->g_107[3],&p_540->g_107[4],&p_540->g_107[2],&p_540->g_107[3],&p_540->g_107[2],&p_540->g_107[3],&p_540->g_107[2]}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_441[i] = (-4L);
    (*p_57) &= (l_439 , ((+(l_441[0] = p_540->g_218)) & (safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u(255UL, 3)) != (p_58 = ((((p_55 &= (p_540->g_107[0] = (p_540->g_107[2] & (((safe_add_func_int16_t_s_s((254UL && (((void*)0 == l_450) <= (((*l_452) = ((((l_451 == l_451) & p_59) , &p_57) != &p_540->g_436)) != p_540->g_118[8][3][1]))), 0x10C8L)) | l_439) , l_439)))) <= p_58) , p_540->g_126) && p_56))) >= l_439), p_540->g_418[7]))));
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_540->g_13 p_540->g_424.f1
 * writes: p_540->g_126
 */
uint64_t  func_60(int32_t * p_61, uint64_t  p_62, int32_t * p_63, uint32_t  p_64, int64_t  p_65, struct S2 * p_540)
{ /* block id: 220 */
    int32_t *l_437 = &p_540->g_126;
    (*l_437) = (+(*p_63));
    return p_540->g_424.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_540->g_81 p_540->g_2 p_540->g_107 p_540->g_114 p_540->g_78 p_540->g_13 p_540->g_126 p_540->g_118 p_540->g_153 p_540->g_155 p_540->g_125 p_540->g_174 p_540->g_112 p_540->g_111 p_540->g_140 p_540->g_157 p_540->g_194 p_540->g_218 p_540->g_221 p_540->g_226 p_540->g_410 p_540->g_436
 * writes: p_540->g_107 p_540->g_111 p_540->g_113 p_540->g_116 p_540->g_125 p_540->g_126 p_540->g_155 p_540->g_157 p_540->g_78 p_540->g_174 p_540->g_118 p_540->g_194 p_540->g_218 p_540->g_222 p_540->g_220.f1 p_540->g_140.f1 p_540->g_140.f0
 */
int32_t * func_66(int8_t  p_67, uint16_t  p_68, uint64_t  p_69, int32_t  p_70, uint64_t  p_71, struct S2 * p_540)
{ /* block id: 9 */
    uint32_t l_90 = 0xB735D465L;
    int32_t *l_429 = &p_540->g_140.f0;
    int32_t **l_430 = (void*)0;
    int32_t **l_431 = &l_429;
    uint8_t *l_435[7] = {&p_540->g_140.f1,&p_540->g_140.f1,&p_540->g_140.f1,&p_540->g_140.f1,&p_540->g_140.f1,&p_540->g_140.f1,&p_540->g_140.f1};
    int i;
    for (p_69 = 0; (p_69 > 33); ++p_69)
    { /* block id: 12 */
        int32_t *l_85 = (void*)0;
        int32_t **l_84 = &l_85;
        int32_t *l_87 = &p_540->g_13;
        int32_t **l_86 = &l_87;
        for (p_67 = 3; (p_67 >= 0); p_67 -= 1)
        { /* block id: 15 */
            int32_t *l_82[7] = {&p_540->g_13,&p_540->g_13,&p_540->g_13,&p_540->g_13,&p_540->g_13,&p_540->g_13,&p_540->g_13};
            int i;
            if ((!p_540->g_81[p_67]))
            { /* block id: 16 */
                return l_82[4];
            }
            else
            { /* block id: 18 */
                int32_t *l_83 = &p_540->g_13;
                return l_83;
            }
        }
        (*l_86) = ((*l_84) = &p_540->g_13);
        if (p_540->g_2[2])
            continue;
        for (p_67 = (-5); (p_67 >= 27); ++p_67)
        { /* block id: 27 */
            if (p_540->g_2[5])
                break;
            for (p_71 = 0; (p_71 <= 3); p_71 += 1)
            { /* block id: 31 */
                --l_90;
            }
        }
    }
    (*l_431) = (p_71 , ((safe_mod_func_int16_t_s_s(func_95(p_70, &p_540->g_78, l_90, p_540), p_540->g_140.f1)) , l_429));
    for (p_540->g_218 = 0; (p_540->g_218 >= 26); p_540->g_218 = safe_add_func_uint64_t_u_u(p_540->g_218, 6))
    { /* block id: 214 */
        int32_t *l_434[4][5][9] = {{{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0}},{{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0}},{{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0}},{{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0},{(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0,(void*)0,&p_540->g_140.f0,(void*)0}}};
        int i, j, k;
        return l_434[0][4][8];
    }
    (**l_431) = ((p_540->g_140.f1 = (*l_429)) != 0xE6L);
    return p_540->g_436;
}


/* ------------------------------------------ */
/* 
 * reads : p_540->g_107 p_540->g_114 p_540->g_78 p_540->g_13 p_540->g_126 p_540->g_81 p_540->g_118 p_540->g_153 p_540->g_2 p_540->g_155 p_540->g_125 p_540->g_174 p_540->g_112 p_540->g_111 p_540->g_140 p_540->g_157 p_540->g_194 p_540->g_218 p_540->g_221 p_540->g_226 p_540->g_410
 * writes: p_540->g_107 p_540->g_111 p_540->g_113 p_540->g_116 p_540->g_125 p_540->g_126 p_540->g_155 p_540->g_157 p_540->g_78 p_540->g_174 p_540->g_118 p_540->g_194 p_540->g_218 p_540->g_222 p_540->g_220.f1
 */
int16_t  func_95(int8_t  p_96, int8_t * p_97, int16_t  p_98, struct S2 * p_540)
{ /* block id: 36 */
    int8_t *l_99 = (void*)0;
    int8_t **l_100 = &l_99;
    uint64_t *l_105 = (void*)0;
    uint64_t *l_106 = &p_540->g_107[2];
    int8_t ***l_110[10][2][10] = {{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}},{{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0,&l_100,&l_100,&l_100}}};
    int8_t ****l_115[8][2] = {{(void*)0,&l_110[7][0][1]},{(void*)0,&l_110[7][0][1]},{(void*)0,&l_110[7][0][1]},{(void*)0,&l_110[7][0][1]},{(void*)0,&l_110[7][0][1]},{(void*)0,&l_110[7][0][1]},{(void*)0,&l_110[7][0][1]},{(void*)0,&l_110[7][0][1]}};
    uint32_t *l_117[1][7];
    int32_t l_119[7];
    int32_t l_120 = 0x4AAA59CCL;
    int32_t l_121 = (-5L);
    int32_t l_129 = 0x1FB71B89L;
    struct S1 *l_139 = &p_540->g_140;
    uint32_t l_371[2];
    struct S0 **l_386 = &p_540->g_222;
    struct S1 **l_389[8] = {&p_540->g_142[5],&p_540->g_142[4],&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[4],&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[4]};
    uint8_t l_421 = 5UL;
    int32_t **l_428[8][4] = {{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_117[i][j] = &p_540->g_118[5][4][1];
    }
    for (i = 0; i < 7; i++)
        l_119[i] = 0L;
    for (i = 0; i < 2; i++)
        l_371[i] = 0xD7B725A2L;
    if (((((((*l_100) = l_99) != (void*)0) < (safe_lshift_func_uint8_t_u_u(p_98, 1))) && ((safe_mul_func_int8_t_s_s(((--(*l_106)) || (((p_540->g_113 = (p_540->g_111 = &p_97)) == p_540->g_114) || (((((&l_100 != (p_540->g_116[1] = &p_540->g_113)) && (4294967295UL == (l_120 = (l_119[6] = p_96)))) , &p_540->g_114) != (void*)0) < 18446744073709551615UL))), (*p_97))) != l_121)) == p_540->g_13))
    { /* block id: 44 */
        int32_t *l_122[5] = {&l_120,&l_120,&l_120,&l_120,&l_120};
        struct S1 *l_143 = &p_540->g_140;
        int8_t ****l_152 = &l_110[3][1][5];
        int i;
        p_540->g_125 = l_122[2];
        for (p_540->g_126 = 0; (p_540->g_126 < (-30)); p_540->g_126--)
        { /* block id: 48 */
            uint8_t l_130 = 0x0CL;
            l_130++;
        }
        for (l_120 = (-23); (l_120 >= 23); l_120++)
        { /* block id: 53 */
            uint32_t l_137 = 1UL;
            int32_t l_138 = 1L;
            int16_t *l_154 = &p_540->g_155[1][3];
            int16_t *l_156 = &p_540->g_157;
            l_138 &= (l_137 = ((safe_rshift_func_int8_t_s_u((*p_97), 4)) > p_540->g_81[1]));
            l_143 = l_139;
            l_138 = (safe_lshift_func_uint16_t_u_s(((((safe_mul_func_int8_t_s_s((1L ^ ((((safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(p_540->g_118[5][4][1], 12)) , &p_540->g_116[1]) != l_152), (p_540->g_153 , ((*l_154) &= p_540->g_2[6])))) >= (((!((*l_156) = ((+((!(*p_97)) || ((p_96 > ((((l_152 != (void*)0) | 3L) || p_96) && l_120)) , (*p_97)))) & 0x61L))) | 0x9687L) <= (*p_97))) , 1UL) & p_96)), 0x09L)) ^ p_98) , 1L) <= p_98), 4));
        }
        for (l_129 = (-4); (l_129 != 21); l_129++)
        { /* block id: 63 */
            if ((*p_540->g_125))
                break;
        }
    }
    else
    { /* block id: 66 */
        int32_t l_185 = 0x1EF3BD04L;
        int32_t l_192 = (-1L);
        int32_t l_193[9];
        int i;
        for (i = 0; i < 9; i++)
            l_193[i] = (-5L);
        for (l_121 = (-19); (l_121 == 16); l_121 = safe_add_func_int8_t_s_s(l_121, 1))
        { /* block id: 69 */
            int32_t l_171[5][1] = {{0x6374C3C9L},{0x6374C3C9L},{0x6374C3C9L},{0x6374C3C9L},{0x6374C3C9L}};
            int32_t l_186[10][1];
            struct S1 *l_211 = &p_540->g_140;
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 1; j++)
                    l_186[i][j] = 0L;
            }
            for (l_129 = (-30); (l_129 > 0); l_129++)
            { /* block id: 72 */
                uint8_t l_195[5][8] = {{1UL,0x17L,1UL,1UL,0x17L,1UL,1UL,0x17L},{1UL,0x17L,1UL,1UL,0x17L,1UL,1UL,0x17L},{1UL,0x17L,1UL,1UL,0x17L,1UL,1UL,0x17L},{1UL,0x17L,1UL,1UL,0x17L,1UL,1UL,0x17L},{1UL,0x17L,1UL,1UL,0x17L,1UL,1UL,0x17L}};
                struct S1 *l_210 = &p_540->g_140;
                int32_t l_213 = 0x6E0A34BDL;
                int8_t **l_216[8][9][3] = {{{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99}},{{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99}},{{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99}},{{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99}},{{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99}},{{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99}},{{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99}},{{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99},{&p_540->g_112,&p_540->g_112,&l_99}}};
                int i, j, k;
                for (p_540->g_78 = (-27); (p_540->g_78 >= 2); p_540->g_78 = safe_add_func_uint64_t_u_u(p_540->g_78, 8))
                { /* block id: 75 */
                    struct S1 *l_208 = &p_540->g_140;
                    int32_t l_212[2][8] = {{0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L},{0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L,0x2325B171L}};
                    uint32_t l_214 = 4294967290UL;
                    int i, j;
                    for (l_120 = 0; (l_120 <= 1); l_120 += 1)
                    { /* block id: 78 */
                        uint32_t *l_170 = (void*)0;
                        uint32_t *l_172 = (void*)0;
                        uint32_t *l_173 = &p_540->g_174;
                        int32_t **l_177 = &p_540->g_125;
                        int32_t *l_187 = &p_540->g_140.f0;
                        int32_t *l_188 = &p_540->g_126;
                        int32_t *l_189 = (void*)0;
                        int32_t *l_190 = &p_540->g_140.f0;
                        int32_t *l_191[10][9][2] = {{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}},{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}},{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}},{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}},{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}},{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}},{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}},{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}},{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}},{{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121},{(void*)0,&l_121}}};
                        int i, j, k;
                        l_186[7][0] = (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((((*l_173)--) , (l_171[0][0] = (p_540->g_118[0][0][0] = ((p_540->g_81[(l_120 + 1)] > ((((*l_177) = &l_120) != (void*)0) & 8UL)) | (safe_unary_minus_func_int64_t_s(p_540->g_107[(l_120 + 3)])))))) & p_540->g_107[(l_120 + 3)]) <= p_96), ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(l_121, (safe_lshift_func_int8_t_s_s((l_185 = (*p_540->g_112)), (**p_540->g_111))))) > l_120), l_120)) & 0x69L))), p_540->g_153.f2));
                        ++l_195[4][5];
                        return p_96;
                    }
                    for (p_540->g_174 = 0; (p_540->g_174 >= 36); p_540->g_174 = safe_add_func_int32_t_s_s(p_540->g_174, 6))
                    { /* block id: 90 */
                        int8_t **l_202 = &p_540->g_112;
                        int32_t l_207 = 0x675ED7DAL;
                        struct S1 **l_209[1];
                        int16_t *l_215 = &p_540->g_194[1];
                        uint16_t *l_217 = &p_540->g_218;
                        struct S0 *l_219 = &p_540->g_220;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_209[i] = &l_208;
                        (*p_540->g_125) |= ((((*l_106) = ((safe_sub_func_uint16_t_u_u(((*l_217) |= (((l_202 = (void*)0) != ((safe_add_func_int16_t_s_s(((*l_215) &= (p_98 , (((((((safe_mod_func_uint32_t_u_u(0x3425632BL, l_207)) < ((l_210 = l_208) != (l_211 = l_139))) , (((l_213 = l_212[1][4]) & p_540->g_155[3][0]) , (((*l_210) , p_540->g_78) || l_214))) && 0x8EFDL) || p_540->g_157) , p_540->g_107[2]) <= p_540->g_153.f0))), 65532UL)) , l_216[1][4][0])) <= l_195[3][2])), p_98)) > l_195[4][5])) && 0x7F7825D7338BB773L) || (-4L));
                        (*p_540->g_221) = l_219;
                        if (l_214)
                            continue;
                    }
                    if (p_96)
                        goto lbl_426;
                    return p_540->g_194[1];
                }
            }
        }
        for (l_121 = 0; (l_121 <= (-14)); l_121--)
        { /* block id: 108 */
            int32_t *l_225 = &l_120;
            (*p_540->g_226) = l_225;
        }
    }
    for (p_540->g_126 = 1; (p_540->g_126 <= 9); p_540->g_126 += 1)
    { /* block id: 114 */
        return p_540->g_153.f1;
    }
lbl_426:
    for (p_540->g_220.f1 = 9; (p_540->g_220.f1 < 52); p_540->g_220.f1 = safe_add_func_int8_t_s_s(p_540->g_220.f1, 6))
    { /* block id: 119 */
        int16_t l_233 = 0x3E5BL;
        uint32_t l_254 = 0xD0B9ABF4L;
        int16_t *l_255 = (void*)0;
        int16_t *l_256 = (void*)0;
        int16_t *l_257 = &p_540->g_194[0];
        uint32_t l_258 = 0UL;
        int32_t l_285 = 0x57EB0D9FL;
        struct S0 **l_327 = &p_540->g_222;
        struct S1 l_345 = {0x0EF876BFL,247UL};
        uint16_t l_366 = 0xA0C1L;
        int32_t l_415 = 0x05EE34FCL;
        int32_t l_416 = 8L;
        int32_t l_417[6] = {0L,(-2L),0L,0L,(-2L),0L};
        int i;
        (1 + 1);
    }
    (*p_540->g_410) = &l_119[6];
    return p_98;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_541;
    struct S2* p_540 = &c_541;
    struct S2 c_542 = {
        {0x4AA0D722L,0x4AA0D722L,0x4AA0D722L,0x4AA0D722L,0x4AA0D722L,0x4AA0D722L,0x4AA0D722L}, // p_540->g_2
        1L, // p_540->g_13
        0x72L, // p_540->g_78
        {0x4D9805F634C5D19EL,0x4D9805F634C5D19EL,0x4D9805F634C5D19EL,0x4D9805F634C5D19EL}, // p_540->g_81
        {0x6BFD34DB6457B54CL,0x6BFD34DB6457B54CL,0x6BFD34DB6457B54CL,0x6BFD34DB6457B54CL,0x6BFD34DB6457B54CL}, // p_540->g_107
        &p_540->g_78, // p_540->g_112
        &p_540->g_112, // p_540->g_111
        (void*)0, // p_540->g_113
        (void*)0, // p_540->g_114
        {&p_540->g_113,&p_540->g_113,&p_540->g_113,&p_540->g_113,&p_540->g_113,&p_540->g_113,&p_540->g_113,&p_540->g_113,&p_540->g_113,&p_540->g_113}, // p_540->g_116
        {{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}},{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}},{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}},{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}},{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}},{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}},{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}},{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}},{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}},{{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL},{0x030F790EL,0xF947C661L,4UL}}}, // p_540->g_118
        (void*)0, // p_540->g_123
        (void*)0, // p_540->g_124
        0x5452DFFAL, // p_540->g_126
        &p_540->g_126, // p_540->g_125
        {-1L,0xA6L}, // p_540->g_140
        {&p_540->g_140,&p_540->g_140,&p_540->g_140,&p_540->g_140,&p_540->g_140,&p_540->g_140}, // p_540->g_142
        {&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[5],&p_540->g_142[5]}, // p_540->g_141
        {-7L,1UL,0x4935L}, // p_540->g_153
        {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}}, // p_540->g_155
        0L, // p_540->g_157
        0x3BDE5FC0L, // p_540->g_174
        {1L,1L}, // p_540->g_194
        0x31C1L, // p_540->g_218
        {-1L,0xCF0B3B0FL,-5L}, // p_540->g_220
        (void*)0, // p_540->g_222
        &p_540->g_222, // p_540->g_221
        &p_540->g_125, // p_540->g_226
        &p_540->g_126, // p_540->g_271
        &p_540->g_125, // p_540->g_272
        {1L,0x9DF2DC09L,-1L}, // p_540->g_284
        {0x55L,0xC0C754D6L,5L}, // p_540->g_295
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_540->g_296
        {{{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL}},{{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL}},{{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL}},{{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL}},{{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL}},{{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL}},{{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL},{0x7BL,1UL,255UL}}}, // p_540->g_338
        &p_540->g_125, // p_540->g_410
        {0x0CAEL,0xE200L,0x0CAEL,0x0CAEL,0xE200L,0x0CAEL,0x0CAEL,0xE200L}, // p_540->g_418
        {1L,1UL,0x4727L}, // p_540->g_424
        {{{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}}},{{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}},{{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL},{0x09L,0UL,-7L},{0x39L,4294967289UL,5L},{0x39L,4294967289UL,5L},{0x09L,0UL,-7L},{-1L,0xE615E9B7L,0x6DFAL}}}}, // p_540->g_425
        {{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125},{&p_540->g_125,&p_540->g_125,&p_540->g_125,&p_540->g_125}}, // p_540->g_427
        (void*)0, // p_540->g_436
        18446744073709551615UL, // p_540->g_453
        5UL, // p_540->g_493
        {(void*)0,&p_540->g_140,(void*)0,(void*)0,&p_540->g_140,(void*)0,(void*)0}, // p_540->g_509
        {&p_540->g_140,&p_540->g_140,&p_540->g_140,&p_540->g_140}, // p_540->g_510
        (void*)0, // p_540->g_511
        &p_540->g_140, // p_540->g_512
        0x10BED8832B160D24L, // p_540->g_516
        {65535UL,65535UL}, // p_540->g_528
        &p_540->g_528[0], // p_540->g_527
    };
    c_541 = c_542;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_540);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_540->g_2[i], "p_540->g_2[i]", print_hash_value);

    }
    transparent_crc(p_540->g_13, "p_540->g_13", print_hash_value);
    transparent_crc(p_540->g_78, "p_540->g_78", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_540->g_81[i], "p_540->g_81[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_540->g_107[i], "p_540->g_107[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_540->g_118[i][j][k], "p_540->g_118[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_540->g_126, "p_540->g_126", print_hash_value);
    transparent_crc(p_540->g_140.f0, "p_540->g_140.f0", print_hash_value);
    transparent_crc(p_540->g_140.f1, "p_540->g_140.f1", print_hash_value);
    transparent_crc(p_540->g_153.f0, "p_540->g_153.f0", print_hash_value);
    transparent_crc(p_540->g_153.f1, "p_540->g_153.f1", print_hash_value);
    transparent_crc(p_540->g_153.f2, "p_540->g_153.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_540->g_155[i][j], "p_540->g_155[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_540->g_157, "p_540->g_157", print_hash_value);
    transparent_crc(p_540->g_174, "p_540->g_174", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_540->g_194[i], "p_540->g_194[i]", print_hash_value);

    }
    transparent_crc(p_540->g_218, "p_540->g_218", print_hash_value);
    transparent_crc(p_540->g_220.f0, "p_540->g_220.f0", print_hash_value);
    transparent_crc(p_540->g_220.f1, "p_540->g_220.f1", print_hash_value);
    transparent_crc(p_540->g_220.f2, "p_540->g_220.f2", print_hash_value);
    transparent_crc(p_540->g_284.f0, "p_540->g_284.f0", print_hash_value);
    transparent_crc(p_540->g_284.f1, "p_540->g_284.f1", print_hash_value);
    transparent_crc(p_540->g_284.f2, "p_540->g_284.f2", print_hash_value);
    transparent_crc(p_540->g_295.f0, "p_540->g_295.f0", print_hash_value);
    transparent_crc(p_540->g_295.f1, "p_540->g_295.f1", print_hash_value);
    transparent_crc(p_540->g_295.f2, "p_540->g_295.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_540->g_338[i][j][k], "p_540->g_338[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_540->g_418[i], "p_540->g_418[i]", print_hash_value);

    }
    transparent_crc(p_540->g_424.f0, "p_540->g_424.f0", print_hash_value);
    transparent_crc(p_540->g_424.f1, "p_540->g_424.f1", print_hash_value);
    transparent_crc(p_540->g_424.f2, "p_540->g_424.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_540->g_425[i][j][k].f0, "p_540->g_425[i][j][k].f0", print_hash_value);
                transparent_crc(p_540->g_425[i][j][k].f1, "p_540->g_425[i][j][k].f1", print_hash_value);
                transparent_crc(p_540->g_425[i][j][k].f2, "p_540->g_425[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(p_540->g_453, "p_540->g_453", print_hash_value);
    transparent_crc(p_540->g_493, "p_540->g_493", print_hash_value);
    transparent_crc(p_540->g_516, "p_540->g_516", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_540->g_528[i], "p_540->g_528[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
