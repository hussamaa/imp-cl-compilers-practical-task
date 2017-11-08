// -g 100,5,13 -l 25,1,1
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


// Seed: 674437343

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint16_t  f1;
   int32_t  f2;
};

struct S1 {
    volatile int32_t g_3;
    int32_t g_4;
    union U0 g_54;
    int32_t g_73[5];
    union U0 *g_85;
    union U0 *g_88;
    union U0 g_90[2][5][3];
    union U0 *g_89;
    int32_t g_93;
    int32_t *g_95;
    int32_t ** volatile g_94;
    int8_t g_105;
    uint16_t g_110;
    uint8_t g_129[3];
    volatile uint32_t g_133;
    int64_t g_134[5];
    uint8_t g_136;
    int32_t g_179;
    int32_t g_180;
    int32_t ** volatile g_202[8][9];
    int8_t *g_222;
    union U0 g_229;
    volatile uint8_t g_257[10][7][3];
    uint8_t **g_289;
    uint8_t *g_292;
    uint8_t **g_291;
    uint8_t *** volatile g_290;
    uint32_t g_337;
    int16_t g_382;
    int32_t g_392;
    uint64_t g_444;
    uint8_t g_463;
    int32_t ** volatile g_471;
    int32_t * volatile g_490;
    volatile uint64_t ** volatile g_499;
    volatile uint8_t g_510[2][5][1];
    int8_t g_518;
    int32_t * volatile g_519;
    int32_t ** volatile g_523;
    int32_t * volatile g_544;
    int32_t * volatile g_601[10][6][4];
    int32_t * volatile g_642[7];
    int32_t ** volatile g_643;
    uint64_t g_650;
    uint64_t *g_660[6];
    uint64_t **g_659;
    uint64_t ***g_658;
    int64_t g_707[10];
    volatile uint16_t **g_714;
    int16_t g_742;
    uint64_t g_803[10];
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S1 * p_804);
union U0  func_5(int64_t  p_6, int32_t  p_7, uint64_t  p_8, int32_t  p_9, struct S1 * p_804);
int64_t  func_10(int16_t  p_11, struct S1 * p_804);
union U0  func_16(int64_t  p_17, int64_t  p_18, struct S1 * p_804);
int16_t  func_19(uint32_t  p_20, uint32_t  p_21, uint32_t  p_22, struct S1 * p_804);
int16_t  func_47(int32_t  p_48, uint16_t  p_49, struct S1 * p_804);
int32_t  func_57(union U0  p_58, int64_t  p_59, uint64_t  p_60, struct S1 * p_804);
union U0  func_61(uint64_t  p_62, struct S1 * p_804);
int64_t  func_65(int32_t  p_66, uint64_t  p_67, int16_t  p_68, uint64_t  p_69, struct S1 * p_804);
uint8_t  func_77(int64_t  p_78, int8_t  p_79, uint8_t  p_80, int64_t  p_81, uint16_t  p_82, struct S1 * p_804);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_804->g_4 p_804->g_222 p_804->g_105
 * writes: p_804->g_4
 */
int8_t  func_1(struct S1 * p_804)
{ /* block id: 4 */
    uint32_t l_2[3];
    int32_t l_498[7] = {0x3D5F59EBL,0x3D5F59EBL,0x3D5F59EBL,0x3D5F59EBL,0x3D5F59EBL,0x3D5F59EBL,0x3D5F59EBL};
    uint64_t **l_648 = (void*)0;
    uint32_t *l_673 = (void*)0;
    int32_t l_676[10] = {0x6CFC1216L,0L,(-8L),0L,0x6CFC1216L,0x6CFC1216L,0L,(-8L),0L,0x6CFC1216L};
    int32_t l_754[9][10] = {{0x1B60C87BL,0x25AEF1B6L,0x4A93FF4AL,(-2L),0x4A93FF4AL,0x25AEF1B6L,0x1B60C87BL,2L,0x0594E28AL,(-2L)},{0x1B60C87BL,0x25AEF1B6L,0x4A93FF4AL,(-2L),0x4A93FF4AL,0x25AEF1B6L,0x1B60C87BL,2L,0x0594E28AL,(-2L)},{0x1B60C87BL,0x25AEF1B6L,0x4A93FF4AL,(-2L),0x4A93FF4AL,0x25AEF1B6L,0x1B60C87BL,2L,0x0594E28AL,(-2L)},{0x1B60C87BL,0x25AEF1B6L,0x4A93FF4AL,(-2L),0x4A93FF4AL,0x25AEF1B6L,0x1B60C87BL,2L,0x0594E28AL,(-2L)},{0x1B60C87BL,0x25AEF1B6L,0x4A93FF4AL,(-2L),0x4A93FF4AL,0x25AEF1B6L,0x1B60C87BL,2L,0x0594E28AL,(-2L)},{0x1B60C87BL,0x25AEF1B6L,0x4A93FF4AL,(-2L),0x4A93FF4AL,0x25AEF1B6L,0x1B60C87BL,2L,0x0594E28AL,(-2L)},{0x1B60C87BL,0x25AEF1B6L,0x4A93FF4AL,(-2L),0x4A93FF4AL,0x25AEF1B6L,0x1B60C87BL,2L,0x0594E28AL,(-2L)},{0x1B60C87BL,0x25AEF1B6L,0x4A93FF4AL,(-2L),0x4A93FF4AL,0x25AEF1B6L,0x1B60C87BL,2L,0x0594E28AL,(-2L)},{0x1B60C87BL,0x25AEF1B6L,0x4A93FF4AL,(-2L),0x4A93FF4AL,0x25AEF1B6L,0x1B60C87BL,2L,0x0594E28AL,(-2L)}};
    int64_t l_777 = 0x73FFBE8555DED17FL;
    int32_t l_778[10][6][4] = {{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}},{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}},{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}},{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}},{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}},{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}},{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}},{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}},{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}},{{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L},{0x2AF80516L,(-3L),1L,0L}}};
    uint16_t l_785 = 0x2883L;
    uint64_t ****l_793 = &p_804->g_658;
    int8_t l_801[6];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2[i] = 4294967288UL;
    for (i = 0; i < 6; i++)
        l_801[i] = 0x16L;
    for (p_804->g_4 = 0; (p_804->g_4 <= 2); p_804->g_4 += 1)
    { /* block id: 7 */
        int16_t *l_497 = &p_804->g_382;
        int8_t *l_517 = &p_804->g_518;
        union U0 l_647 = {1UL};
        uint64_t ***l_657 = &l_648;
        uint32_t l_665 = 4294967287UL;
        int32_t l_666[9][4] = {{0x6848592EL,(-2L),0x6848592EL,0x6848592EL},{0x6848592EL,(-2L),0x6848592EL,0x6848592EL},{0x6848592EL,(-2L),0x6848592EL,0x6848592EL},{0x6848592EL,(-2L),0x6848592EL,0x6848592EL},{0x6848592EL,(-2L),0x6848592EL,0x6848592EL},{0x6848592EL,(-2L),0x6848592EL,0x6848592EL},{0x6848592EL,(-2L),0x6848592EL,0x6848592EL},{0x6848592EL,(-2L),0x6848592EL,0x6848592EL},{0x6848592EL,(-2L),0x6848592EL,0x6848592EL}};
        int32_t l_724 = 0x3D8DB68EL;
        int16_t l_779 = 1L;
        int32_t *l_784[4][2][1] = {{{&l_778[2][1][0]},{&l_778[2][1][0]}},{{&l_778[2][1][0]},{&l_778[2][1][0]}},{{&l_778[2][1][0]},{&l_778[2][1][0]}},{{&l_778[2][1][0]},{&l_778[2][1][0]}}};
        uint32_t *l_790[6][5][8] = {{{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665}},{{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665}},{{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665}},{{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665}},{{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665}},{{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&p_804->g_337,(void*)0,&p_804->g_337,&l_665}}};
        uint64_t *l_800 = &p_804->g_650;
        uint64_t *l_802 = &p_804->g_803[2];
        int i, j, k;
        (1 + 1);
    }
    return (*p_804->g_222);
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_463 p_804->g_523 p_804->g_93 p_804->g_95 p_804->g_73 p_804->g_292 p_804->g_136 p_804->g_54.f1 p_804->g_110 p_804->g_544 p_804->g_392 p_804->g_180 p_804->g_444 p_804->g_134 p_804->g_90.f0 p_804->g_290 p_804->g_291 p_804->g_179 p_804->g_257 p_804->g_4 p_804->g_222 p_804->g_105 p_804->g_518 p_804->g_643
 * writes: p_804->g_463 p_804->g_95 p_804->g_93 p_804->g_382 p_804->g_73 p_804->g_392 p_804->g_180 p_804->g_444 p_804->g_110 p_804->g_136 p_804->g_129
 */
union U0  func_5(int64_t  p_6, int32_t  p_7, uint64_t  p_8, int32_t  p_9, struct S1 * p_804)
{ /* block id: 249 */
    uint16_t l_533 = 65535UL;
    int16_t l_565 = 3L;
    int32_t l_566 = (-1L);
    int32_t l_567[1][1];
    uint8_t *l_603 = &p_804->g_136;
    int8_t **l_631 = &p_804->g_222;
    union U0 l_644 = {0x49D20484L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_567[i][j] = 2L;
    }
    for (p_804->g_463 = 0; (p_804->g_463 >= 58); p_804->g_463 = safe_add_func_int64_t_s_s(p_804->g_463, 6))
    { /* block id: 252 */
        int32_t *l_522 = &p_804->g_93;
        int8_t **l_540[5][2][3] = {{{&p_804->g_222,&p_804->g_222,&p_804->g_222},{&p_804->g_222,&p_804->g_222,&p_804->g_222}},{{&p_804->g_222,&p_804->g_222,&p_804->g_222},{&p_804->g_222,&p_804->g_222,&p_804->g_222}},{{&p_804->g_222,&p_804->g_222,&p_804->g_222},{&p_804->g_222,&p_804->g_222,&p_804->g_222}},{{&p_804->g_222,&p_804->g_222,&p_804->g_222},{&p_804->g_222,&p_804->g_222,&p_804->g_222}},{{&p_804->g_222,&p_804->g_222,&p_804->g_222},{&p_804->g_222,&p_804->g_222,&p_804->g_222}}};
        int16_t *l_541 = (void*)0;
        int16_t *l_542 = &p_804->g_382;
        uint64_t *l_543[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U0 l_545 = {0UL};
        int i, j, k;
        (*p_804->g_523) = l_522;
        (*p_804->g_544) = (safe_mod_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u(p_7, (safe_rshift_func_uint8_t_u_u(((((void*)0 != &p_804->g_499) , (p_8 = (safe_add_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((((*l_522) &= l_533) , (p_804->g_463 , ((((**p_804->g_523) ^ ((safe_rshift_func_int16_t_s_s(((*l_542) = (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((l_540[0][0][1] == l_540[4][0][1]) , (+((*l_522) > (-3L)))), 0x8DL)), p_804->g_73[1]))), l_533)) >= p_8)) , 1L) > 0L))))), 2L)))) , 0UL), (*p_804->g_292))))) && (*p_804->g_292)) , p_804->g_54.f1), p_804->g_110));
        if (p_7)
            continue;
        return l_545;
    }
    for (p_7 = 0; (p_7 != (-3)); p_7--)
    { /* block id: 263 */
        uint64_t l_548 = 18446744073709551615UL;
        int32_t l_552 = 0x34E3CFD1L;
        int32_t l_553 = 0x15398C11L;
        uint16_t *l_564 = &p_804->g_110;
        int32_t l_570 = (-1L);
        int32_t l_572 = 9L;
        int32_t l_574 = (-1L);
        int32_t l_577 = 0x08FA9AAAL;
        int32_t l_578[6];
        int16_t l_604 = 0L;
        uint64_t *l_613 = &p_804->g_444;
        int i;
        for (i = 0; i < 6; i++)
            l_578[i] = (-1L);
        for (p_804->g_392 = 4; (p_804->g_392 >= 0); p_804->g_392 -= 1)
        { /* block id: 266 */
            int8_t l_568 = 0x0FL;
            int32_t l_571 = 1L;
            int32_t l_573 = 0L;
            int32_t l_575 = 1L;
            int32_t l_576 = 1L;
            int8_t **l_600 = &p_804->g_222;
            int32_t *l_602[9];
            uint64_t *l_614 = &p_804->g_444;
            int16_t *l_636 = (void*)0;
            int16_t *l_637 = &l_565;
            uint8_t *l_638 = &p_804->g_129[2];
            int i;
            for (i = 0; i < 9; i++)
                l_602[i] = &p_804->g_73[0];
            for (p_804->g_180 = 0; (p_804->g_180 <= 4); p_804->g_180 += 1)
            { /* block id: 269 */
                uint32_t l_554 = 4UL;
                int32_t l_569 = 8L;
                int32_t l_579 = 0x34A81200L;
                int32_t l_580 = 0x780B051FL;
                int32_t l_581 = (-5L);
                uint32_t l_582[4][5] = {{0xB8CD343BL,0xA29E8544L,4294967290UL,0x6FACEFACL,0xA29E8544L},{0xB8CD343BL,0xA29E8544L,4294967290UL,0x6FACEFACL,0xA29E8544L},{0xB8CD343BL,0xA29E8544L,4294967290UL,0x6FACEFACL,0xA29E8544L},{0xB8CD343BL,0xA29E8544L,4294967290UL,0x6FACEFACL,0xA29E8544L}};
                union U0 l_599 = {0UL};
                int i, j;
                for (p_804->g_444 = 0; (p_804->g_444 <= 4); p_804->g_444 += 1)
                { /* block id: 272 */
                    int32_t *l_549 = &p_804->g_73[p_804->g_444];
                    int32_t *l_550 = &p_804->g_73[2];
                    int32_t *l_551[1];
                    uint16_t **l_561 = (void*)0;
                    uint16_t *l_563 = (void*)0;
                    uint16_t **l_562 = &l_563;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_551[i] = &p_804->g_73[p_804->g_444];
                    if (l_548)
                        break;
                    l_554++;
                    (*l_550) = ((safe_mul_func_int16_t_s_s(((((0x1630BB54L | (((-7L) && ((((*l_562) = &p_804->g_110) != l_564) > 0L)) == 0x6BCBFE4BL)) , p_804->g_180) > ((l_533 && ((-6L) >= 0x597CF981L)) <= p_6)) == p_804->g_134[2]), l_548)) , l_554);
                    --l_582[0][0];
                }
                p_804->g_73[p_804->g_180] |= (p_8 ^ (safe_sub_func_int8_t_s_s(p_6, ((l_582[0][0] & (l_566 &= ((*l_564) = (safe_sub_func_uint64_t_u_u((p_804->g_90[1][4][0].f0 , p_6), (safe_div_func_uint8_t_u_u((p_804->g_180 && ((void*)0 != &p_804->g_222)), (+(safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(1UL, (***p_804->g_290))), 1L)) & p_9) , l_576), 4UL)), 5)))))))))) ^ p_6))));
                return l_599;
            }
            l_553 = (&p_804->g_222 == l_600);
            l_604 |= ((*p_804->g_291) == l_603);
            l_553 = (safe_add_func_uint8_t_u_u(((*l_638) = ((safe_rshift_func_int8_t_s_s((((((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((*l_637) = ((l_613 != l_614) , (safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(l_574, (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(0x6FL, (safe_sub_func_uint8_t_u_u(((*l_603) = ((--(*l_564)) != ((safe_mod_func_int16_t_s_s((p_7 == (safe_add_func_uint8_t_u_u((p_9 != (((void*)0 != l_631) == (((((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s(((((((~(l_631 != (void*)0)) ^ l_578[4]) || p_9) , 6UL) == p_804->g_179) < p_6), p_9)) && 253UL), 18446744073709551610UL)) && 8UL) | 0x79E5L) >= p_804->g_257[2][1][2]) , 0xB5L))), (**p_804->g_291)))), p_804->g_179)) != 0x63700F0D820CADE2L))), l_572)))), (*p_804->g_95))))) & p_9), (*p_804->g_222))))), p_804->g_518)), p_7)) != (*p_804->g_222)) | 0x51250FCB9467F540L) || l_553) >= l_578[2]) != 65535UL) > l_577), (*p_804->g_222))) ^ p_9)), 254UL));
        }
        if (p_9)
            continue;
        for (l_552 = 0; (l_552 < 15); l_552 = safe_add_func_uint8_t_u_u(l_552, 7))
        { /* block id: 295 */
            int32_t *l_641 = &l_567[0][0];
            (*l_641) = l_533;
        }
        l_572 = (+0x0B20DC26L);
    }
    (*p_804->g_643) = &l_567[0][0];
    return l_644;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_134 p_804->g_519 p_804->g_392 p_804->g_4
 * writes: p_804->g_392
 */
int64_t  func_10(int16_t  p_11, struct S1 * p_804)
{ /* block id: 246 */
    (*p_804->g_519) &= (p_804->g_134[1] ^ p_11);
    return p_804->g_4;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_804->g_392 p_804->g_134
 */
union U0  func_16(int64_t  p_17, int64_t  p_18, struct S1 * p_804)
{ /* block id: 240 */
    uint32_t l_513 = 0xB0A456DFL;
    union U0 l_516 = {0UL};
    for (p_804->g_392 = 0; p_804->g_392 < 5; p_804->g_392 += 1)
    {
        p_804->g_134[p_804->g_392] = 0x648B8C142B475DDAL;
    }
    l_513--;
    return l_516;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_499 p_804->g_510
 * writes: p_804->g_499 p_804->g_510
 */
int16_t  func_19(uint32_t  p_20, uint32_t  p_21, uint32_t  p_22, struct S1 * p_804)
{ /* block id: 236 */
    volatile uint64_t ** volatile *l_500 = (void*)0;
    volatile uint64_t ** volatile *l_501 = &p_804->g_499;
    int32_t *l_502 = &p_804->g_93;
    int32_t *l_503 = (void*)0;
    int32_t l_504[7] = {(-1L),0x3766ADA9L,(-1L),(-1L),0x3766ADA9L,(-1L),(-1L)};
    int32_t *l_505 = &p_804->g_93;
    int32_t *l_506 = &p_804->g_73[0];
    int32_t *l_507 = &p_804->g_392;
    int32_t *l_508 = &l_504[4];
    int32_t *l_509[8] = {&p_804->g_93,&p_804->g_93,&p_804->g_93,&p_804->g_93,&p_804->g_93,&p_804->g_93,&p_804->g_93,&p_804->g_93};
    int i;
    (*l_501) = p_804->g_499;
    --p_804->g_510[0][3][0];
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_47(int32_t  p_48, uint16_t  p_49, struct S1 * p_804)
{ /* block id: 9 */
    int16_t l_72[10] = {0x2070L,0x2070L,0x2070L,0x2070L,0x2070L,0x2070L,0x2070L,0x2070L,0x2070L,0x2070L};
    int32_t l_484 = 0x428A2DC6L;
    int32_t l_485[1];
    int i;
    for (i = 0; i < 1; i++)
        l_485[i] = 0x1C2BC097L;
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_804->g_95
 */
int32_t  func_57(union U0  p_58, int64_t  p_59, uint64_t  p_60, struct S1 * p_804)
{ /* block id: 210 */
    int32_t *l_470 = (void*)0;
    int32_t **l_472 = &p_804->g_95;
    (*l_472) = l_470;
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_129 p_804->g_392 p_804->g_291 p_804->g_292 p_804->g_463 p_804->g_110
 * writes: p_804->g_337 p_804->g_73 p_804->g_136 p_804->g_463
 */
union U0  func_61(uint64_t  p_62, struct S1 * p_804)
{ /* block id: 200 */
    int32_t l_445 = 0x22909AFDL;
    int32_t l_458 = (-9L);
    uint8_t *l_461 = (void*)0;
    uint8_t *l_462 = &p_804->g_463;
    uint16_t *l_464 = (void*)0;
    int32_t *l_465[10] = {&p_804->g_73[1],&p_804->g_73[2],&p_804->g_4,&p_804->g_73[2],&p_804->g_73[1],&p_804->g_73[1],&p_804->g_73[2],&p_804->g_4,&p_804->g_73[2],&p_804->g_73[1]};
    uint16_t l_466 = 0xCE0BL;
    int64_t l_467 = 1L;
    uint16_t l_468 = 1UL;
    union U0 l_469[1] = {{4294967295UL}};
    int i;
    for (p_804->g_337 = 0; p_804->g_337 < 5; p_804->g_337 += 1)
    {
        p_804->g_73[p_804->g_337] = 0x79882474L;
    }
    l_468 = (l_467 = (l_466 &= ((0x95L || (l_445 = (~8UL))) != (((safe_div_func_int32_t_s_s(((l_458 = ((*l_462) ^= ((**p_804->g_291) = (safe_lshift_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((void*)0 != &p_804->g_110), (l_458 > 0L))), 5)), ((l_458 != (safe_add_func_uint64_t_u_u(p_804->g_129[2], 0x07F7611BAE3C5E76L))) & 0x68L))) , p_62), p_804->g_392)) || 0x20L) < p_62), 2))))) , p_62), p_804->g_110)) , l_464) == l_464))));
    return l_469[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_257
 * writes:
 */
int64_t  func_65(int32_t  p_66, uint64_t  p_67, int16_t  p_68, uint64_t  p_69, struct S1 * p_804)
{ /* block id: 22 */
    uint16_t l_103 = 0x3317L;
    int8_t *l_104 = &p_804->g_105;
    uint16_t *l_106 = &p_804->g_90[1][4][0].f1;
    uint16_t *l_107 = &p_804->g_90[1][4][0].f1;
    uint16_t *l_108 = &p_804->g_90[1][4][0].f1;
    uint16_t *l_109[1];
    int32_t *l_138[3];
    int32_t **l_225 = (void*)0;
    union U0 l_228 = {0x02602C76L};
    union U0 *l_230 = &l_228;
    uint64_t l_281 = 0xAB009086BE8A3830L;
    union U0 l_377 = {4294967295UL};
    int32_t l_425[7][3][1] = {{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_109[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_138[i] = &p_804->g_73[3];
    return p_804->g_257[1][6][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_4 p_804->g_94 p_804->g_95 p_804->g_93
 * writes: p_804->g_85 p_804->g_88 p_804->g_89 p_804->g_95
 */
uint8_t  func_77(int64_t  p_78, int8_t  p_79, uint8_t  p_80, int64_t  p_81, uint16_t  p_82, struct S1 * p_804)
{ /* block id: 14 */
    union U0 *l_87 = &p_804->g_54;
    union U0 **l_86[7][8] = {{&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87,&l_87,(void*)0},{&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87,&l_87,(void*)0},{&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87,&l_87,(void*)0},{&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87,&l_87,(void*)0},{&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87,&l_87,(void*)0},{&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87,&l_87,(void*)0},{&l_87,&l_87,(void*)0,&l_87,&l_87,&l_87,&l_87,(void*)0}};
    int32_t *l_91 = &p_804->g_4;
    int32_t *l_92 = &p_804->g_93;
    int32_t **l_96 = &l_91;
    int i, j;
    p_804->g_89 = (p_804->g_88 = (p_804->g_85 = (void*)0));
    l_92 = l_91;
    (*p_804->g_94) = (((p_82 ^ p_79) , (*l_92)) , l_92);
    (*l_96) = (*p_804->g_94);
    return p_804->g_93;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_805;
    struct S1* p_804 = &c_805;
    struct S1 c_806 = {
        0x1D832937L, // p_804->g_3
        0x11C15747L, // p_804->g_4
        {0x87D7A760L}, // p_804->g_54
        {7L,7L,7L,7L,7L}, // p_804->g_73
        (void*)0, // p_804->g_85
        (void*)0, // p_804->g_88
        {{{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}}},{{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}}}}, // p_804->g_90
        &p_804->g_90[1][4][0], // p_804->g_89
        0x640B14FAL, // p_804->g_93
        &p_804->g_4, // p_804->g_95
        &p_804->g_95, // p_804->g_94
        0x3AL, // p_804->g_105
        65535UL, // p_804->g_110
        {251UL,251UL,251UL}, // p_804->g_129
        0xE6797F7BL, // p_804->g_133
        {0x2CDE8027EF3DD4F1L,0x2CDE8027EF3DD4F1L,0x2CDE8027EF3DD4F1L,0x2CDE8027EF3DD4F1L,0x2CDE8027EF3DD4F1L}, // p_804->g_134
        0x40L, // p_804->g_136
        (-1L), // p_804->g_179
        1L, // p_804->g_180
        {{&p_804->g_95,(void*)0,&p_804->g_95,(void*)0,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95},{&p_804->g_95,(void*)0,&p_804->g_95,(void*)0,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95},{&p_804->g_95,(void*)0,&p_804->g_95,(void*)0,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95},{&p_804->g_95,(void*)0,&p_804->g_95,(void*)0,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95},{&p_804->g_95,(void*)0,&p_804->g_95,(void*)0,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95},{&p_804->g_95,(void*)0,&p_804->g_95,(void*)0,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95},{&p_804->g_95,(void*)0,&p_804->g_95,(void*)0,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95},{&p_804->g_95,(void*)0,&p_804->g_95,(void*)0,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95,&p_804->g_95}}, // p_804->g_202
        &p_804->g_105, // p_804->g_222
        {0UL}, // p_804->g_229
        {{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}},{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}},{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}},{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}},{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}},{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}},{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}},{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}},{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}},{{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL},{2UL,255UL,4UL}}}, // p_804->g_257
        (void*)0, // p_804->g_289
        &p_804->g_136, // p_804->g_292
        &p_804->g_292, // p_804->g_291
        &p_804->g_291, // p_804->g_290
        0xB5FAAD63L, // p_804->g_337
        0x6A83L, // p_804->g_382
        0L, // p_804->g_392
        0xF68BFCF804601D3CL, // p_804->g_444
        249UL, // p_804->g_463
        (void*)0, // p_804->g_471
        &p_804->g_73[1], // p_804->g_490
        (void*)0, // p_804->g_499
        {{{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL}}}, // p_804->g_510
        1L, // p_804->g_518
        &p_804->g_392, // p_804->g_519
        &p_804->g_95, // p_804->g_523
        &p_804->g_73[4], // p_804->g_544
        {{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}},{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}},{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}},{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}},{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}},{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}},{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}},{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}},{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}},{{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0},{&p_804->g_392,&p_804->g_73[1],&p_804->g_392,(void*)0}}}, // p_804->g_601
        {&p_804->g_93,&p_804->g_73[1],&p_804->g_93,&p_804->g_93,&p_804->g_73[1],&p_804->g_93,&p_804->g_93}, // p_804->g_642
        &p_804->g_95, // p_804->g_643
        0xE29A08D7E968BD80L, // p_804->g_650
        {(void*)0,&p_804->g_444,(void*)0,(void*)0,&p_804->g_444,(void*)0}, // p_804->g_660
        &p_804->g_660[0], // p_804->g_659
        &p_804->g_659, // p_804->g_658
        {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}, // p_804->g_707
        (void*)0, // p_804->g_714
        0x41B0L, // p_804->g_742
        {0x33509A20B01B6EC5L,0x33509A20B01B6EC5L,0x33509A20B01B6EC5L,0x33509A20B01B6EC5L,0x33509A20B01B6EC5L,0x33509A20B01B6EC5L,0x33509A20B01B6EC5L,0x33509A20B01B6EC5L,0x33509A20B01B6EC5L,0x33509A20B01B6EC5L}, // p_804->g_803
    };
    c_805 = c_806;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_804);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_804->g_3, "p_804->g_3", print_hash_value);
    transparent_crc(p_804->g_4, "p_804->g_4", print_hash_value);
    transparent_crc(p_804->g_54.f0, "p_804->g_54.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_804->g_73[i], "p_804->g_73[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_804->g_90[i][j][k].f0, "p_804->g_90[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_804->g_93, "p_804->g_93", print_hash_value);
    transparent_crc(p_804->g_105, "p_804->g_105", print_hash_value);
    transparent_crc(p_804->g_110, "p_804->g_110", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_804->g_129[i], "p_804->g_129[i]", print_hash_value);

    }
    transparent_crc(p_804->g_133, "p_804->g_133", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_804->g_134[i], "p_804->g_134[i]", print_hash_value);

    }
    transparent_crc(p_804->g_136, "p_804->g_136", print_hash_value);
    transparent_crc(p_804->g_179, "p_804->g_179", print_hash_value);
    transparent_crc(p_804->g_180, "p_804->g_180", print_hash_value);
    transparent_crc(p_804->g_229.f0, "p_804->g_229.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_804->g_257[i][j][k], "p_804->g_257[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_804->g_337, "p_804->g_337", print_hash_value);
    transparent_crc(p_804->g_382, "p_804->g_382", print_hash_value);
    transparent_crc(p_804->g_392, "p_804->g_392", print_hash_value);
    transparent_crc(p_804->g_444, "p_804->g_444", print_hash_value);
    transparent_crc(p_804->g_463, "p_804->g_463", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_804->g_510[i][j][k], "p_804->g_510[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_804->g_518, "p_804->g_518", print_hash_value);
    transparent_crc(p_804->g_650, "p_804->g_650", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_804->g_707[i], "p_804->g_707[i]", print_hash_value);

    }
    transparent_crc(p_804->g_742, "p_804->g_742", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_804->g_803[i], "p_804->g_803[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
