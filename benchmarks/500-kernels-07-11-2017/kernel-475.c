// -g 12,30,20 -l 2,10,10
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


// Seed: 2198264018

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
};

struct S1 {
    int32_t g_3[10][7];
    int8_t g_22;
    int8_t g_23;
    int8_t g_30;
    volatile int32_t g_35;
    volatile int32_t g_36[2];
    int32_t g_37;
    volatile int32_t g_63;
    volatile int32_t g_64;
    int32_t g_65;
    volatile int32_t g_68;
    volatile int32_t g_69;
    int32_t g_70;
    struct S0 g_87[7];
    uint16_t g_88;
    int16_t g_93[5][5];
    int32_t *g_97[8][1];
    int32_t ** volatile g_96;
    int64_t g_122;
    int32_t g_125;
    int32_t * volatile g_127;
    int32_t * volatile g_130;
    uint64_t g_134;
    int64_t g_136;
    int32_t g_137[7];
    volatile uint32_t g_144;
    uint8_t g_157;
    struct S0 *g_200;
    struct S0 ** volatile g_199;
    int64_t g_216[6][2][3];
    int8_t g_218[7][8][2];
    uint32_t g_228[1][5][1];
    int8_t g_292;
    int32_t g_293[5][9];
    uint32_t g_297;
    int32_t g_409;
    int16_t g_437;
    volatile uint64_t g_474;
    volatile uint64_t *g_473;
    volatile uint64_t * volatile *g_472[8][3];
    int32_t ** volatile g_490;
    int32_t ** volatile g_491;
    uint32_t g_530;
    int32_t ** volatile g_531;
    volatile int32_t g_566;
    int16_t g_600;
    uint32_t *g_626;
    uint32_t ** volatile g_625;
    uint16_t g_637;
    uint16_t *g_737;
    uint16_t *g_738;
    uint8_t g_791;
    uint8_t *g_790;
    int32_t **g_796;
    int32_t ***g_795[9][4];
    struct S0 ** volatile g_853;
    struct S0 ** volatile g_854;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S1 * p_888);
uint32_t  func_24(int32_t * p_25, struct S1 * p_888);
int32_t * func_26(int8_t * p_27, int32_t * p_28, struct S1 * p_888);
int32_t * func_42(int8_t * p_43, int8_t  p_44, struct S1 * p_888);
int32_t * func_45(int32_t  p_46, int32_t * p_47, struct S1 * p_888);
uint16_t  func_51(int64_t  p_52, struct S1 * p_888);
int64_t  func_53(int32_t  p_54, uint32_t  p_55, int32_t * p_56, int8_t * p_57, uint64_t  p_58, struct S1 * p_888);
int32_t  func_59(int8_t * p_60, struct S1 * p_888);
uint16_t  func_76(struct S0 * p_77, uint16_t  p_78, struct S1 * p_888);
struct S0 * func_79(int32_t  p_80, uint64_t  p_81, uint16_t  p_82, uint8_t  p_83, uint64_t  p_84, struct S1 * p_888);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_888->g_3 p_888->g_30 p_888->g_531 p_888->g_491 p_888->g_97 p_888->g_530 p_888->g_127 p_888->g_88 p_888->g_218 p_888->g_93 p_888->g_216 p_888->g_293 p_888->g_600 p_888->g_136 p_888->g_626 p_888->g_297 p_888->g_122 p_888->g_738 p_888->g_637 p_888->g_65 p_888->g_96 p_888->g_68 p_888->g_70 p_888->g_37 p_888->g_125 p_888->g_134
 * writes: p_888->g_22 p_888->g_23 p_888->g_30 p_888->g_97 p_888->g_297 p_888->g_70 p_888->g_93 p_888->g_218 p_888->g_136 p_888->g_88 p_888->g_122 p_888->g_125 p_888->g_3
 */
int8_t  func_1(struct S1 * p_888)
{ /* block id: 4 */
    int32_t *l_2 = &p_888->g_3[2][5];
    int32_t *l_4 = (void*)0;
    int32_t *l_5[5][5][2] = {{{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]}},{{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]}},{{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]}},{{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]}},{{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]},{&p_888->g_3[2][5],&p_888->g_3[2][5]}}};
    uint64_t l_6 = 18446744073709551615UL;
    int32_t l_9[5][3] = {{0x76D70783L,0x5465392FL,0x38A83A56L},{0x76D70783L,0x5465392FL,0x38A83A56L},{0x76D70783L,0x5465392FL,0x38A83A56L},{0x76D70783L,0x5465392FL,0x38A83A56L},{0x76D70783L,0x5465392FL,0x38A83A56L}};
    int16_t l_10 = 6L;
    uint8_t l_11 = 0xBAL;
    int8_t *l_21[10] = {&p_888->g_22,&p_888->g_22,&p_888->g_22,&p_888->g_22,&p_888->g_22,&p_888->g_22,&p_888->g_22,&p_888->g_22,&p_888->g_22,&p_888->g_22};
    struct S0 **l_885 = (void*)0;
    struct S0 *l_886 = (void*)0;
    uint16_t l_887 = 0xA585L;
    int i, j, k;
    l_6++;
    if (l_6)
        goto lbl_14;
lbl_14:
    l_11++;
    (*l_2) = ((safe_rshift_func_int8_t_s_s(((((safe_add_func_int8_t_s_s((!7L), ((safe_add_func_int8_t_s_s((p_888->g_23 = (p_888->g_22 = p_888->g_3[7][4])), (((!(!func_24(((*l_2) , &l_9[4][2]), p_888))) , (safe_mod_func_uint32_t_u_u(((~((l_886 = func_79(((*p_888->g_127) = 0x722EC774L), p_888->g_122, (*p_888->g_738), (3UL >= p_888->g_65), p_888->g_293[0][5], p_888)) == (void*)0)) | 0L), (*l_2)))) == p_888->g_134))) ^ 1UL))) , (void*)0) != (void*)0) || p_888->g_93[1][0]), p_888->g_216[2][1][2])) > 0x4AL);
    (*l_2) = l_887;
    return (*l_2);
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_30 p_888->g_531 p_888->g_491 p_888->g_97 p_888->g_530 p_888->g_3 p_888->g_127 p_888->g_88 p_888->g_218 p_888->g_93 p_888->g_216 p_888->g_293 p_888->g_600 p_888->g_136 p_888->g_626 p_888->g_297
 * writes: p_888->g_30 p_888->g_97 p_888->g_297 p_888->g_70 p_888->g_93 p_888->g_218 p_888->g_136 p_888->g_88
 */
uint32_t  func_24(int32_t * p_25, struct S1 * p_888)
{ /* block id: 10 */
    int8_t *l_29 = &p_888->g_30;
    int32_t *l_31 = &p_888->g_3[2][5];
    int32_t **l_532 = &p_888->g_97[7][0];
    uint32_t *l_539 = &p_888->g_297;
    uint64_t *l_542[10][10] = {{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134},{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134},{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134},{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134},{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134},{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134},{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134},{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134},{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134},{&p_888->g_134,&p_888->g_134,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134,(void*)0,&p_888->g_134,&p_888->g_134}};
    int32_t *l_547[3];
    int16_t *l_560 = (void*)0;
    uint64_t l_561 = 0UL;
    uint8_t l_567 = 0x09L;
    int16_t **l_570 = &l_560;
    int64_t *l_591 = &p_888->g_216[2][1][2];
    int64_t **l_590 = &l_591;
    int8_t *l_601 = (void*)0;
    int8_t *l_602[5];
    uint8_t l_603 = 0x6FL;
    int32_t l_740 = 4L;
    uint32_t l_752[7][1][7] = {{{0x0414B875L,4294967295UL,0x9A6050C6L,0UL,0x9A6050C6L,4294967295UL,0x0414B875L}},{{0x0414B875L,4294967295UL,0x9A6050C6L,0UL,0x9A6050C6L,4294967295UL,0x0414B875L}},{{0x0414B875L,4294967295UL,0x9A6050C6L,0UL,0x9A6050C6L,4294967295UL,0x0414B875L}},{{0x0414B875L,4294967295UL,0x9A6050C6L,0UL,0x9A6050C6L,4294967295UL,0x0414B875L}},{{0x0414B875L,4294967295UL,0x9A6050C6L,0UL,0x9A6050C6L,4294967295UL,0x0414B875L}},{{0x0414B875L,4294967295UL,0x9A6050C6L,0UL,0x9A6050C6L,4294967295UL,0x0414B875L}},{{0x0414B875L,4294967295UL,0x9A6050C6L,0UL,0x9A6050C6L,4294967295UL,0x0414B875L}}};
    int64_t l_805 = 0x4C2F7A87564DF2BCL;
    struct S0 l_822 = {0x7B7E8871L};
    uint16_t l_871 = 65535UL;
    struct S0 **l_881 = &p_888->g_200;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_547[i] = &p_888->g_137[1];
    for (i = 0; i < 5; i++)
        l_602[i] = &p_888->g_292;
    p_25 = ((*l_532) = func_26(l_29, l_31, p_888));
    if ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(0UL, (safe_rshift_func_int8_t_s_u((((((*l_539) = p_888->g_530) , &p_888->g_530) != (((safe_lshift_func_uint8_t_u_u(((void*)0 == l_542[9][9]), 5)) ^ (safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(((*p_888->g_127) = (**p_888->g_531)), (safe_mul_func_uint8_t_u_u((~(*l_31)), (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((p_888->g_93[4][0] = (p_888->g_530 < (**l_532))), 4)) , l_561) == 18446744073709551615UL), p_888->g_88)), p_888->g_218[6][2][1])), p_888->g_30)), 10)))))) >= (**l_532)), 6))) , (void*)0)) && (**l_532)), 4)))), (*l_31))))
    { /* block id: 239 */
        uint16_t l_562 = 0x6952L;
        return l_562;
    }
    else
    { /* block id: 241 */
        int64_t l_563 = (-8L);
        int32_t l_564 = (-3L);
        int32_t l_565[6] = {0L,(-1L),0L,0L,(-1L),0L};
        int i;
        --l_567;
    }
    if ((l_603 = ((((*p_888->g_127) = (**l_532)) > (&p_888->g_93[0][2] != ((*l_31) , ((*l_570) = l_560)))) & (safe_lshift_func_uint16_t_u_u((((p_888->g_218[1][5][0] = (safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s(((((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0x14BAFED2L, (((safe_mul_func_uint16_t_u_u((p_888->g_93[3][4] , (safe_add_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((l_590 == (void*)0), (safe_sub_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((((((safe_lshift_func_int8_t_s_s((!((*l_29) = (*l_31))), 4)) != 1L) , p_888->g_216[3][0][0]) , p_888->g_293[3][6]) ^ (*l_31)), 3)), p_888->g_530)) > 0x33L), (*l_31))))), 1UL))), 0xDA36L)) == 1UL) || p_888->g_93[0][3]))), p_888->g_600)), p_888->g_93[1][0])) > p_888->g_600) & 6L) , (*p_25)))) != (*l_31)) , (*l_31)), 2)), p_888->g_3[2][5]))) , (void*)0) == (void*)0), 3)))))
    { /* block id: 249 */
        int16_t l_610 = 5L;
        int32_t l_618 = 0x5171F3C6L;
        uint32_t **l_624 = &l_539;
        uint8_t l_656 = 249UL;
        uint64_t l_659 = 2UL;
        int32_t l_670 = 5L;
        int32_t l_674 = (-1L);
        int32_t l_677[2][9] = {{0x5FA5FA19L,0x302D95B0L,0x5FA5FA19L,0x5FA5FA19L,0x302D95B0L,0x5FA5FA19L,0x5FA5FA19L,0x302D95B0L,0x5FA5FA19L},{0x5FA5FA19L,0x302D95B0L,0x5FA5FA19L,0x5FA5FA19L,0x302D95B0L,0x5FA5FA19L,0x5FA5FA19L,0x302D95B0L,0x5FA5FA19L}};
        uint8_t l_743 = 0UL;
        int8_t **l_749 = &l_602[3];
        int32_t ***l_792 = &l_532;
        int32_t l_848 = 0x5C4CFB84L;
        struct S0 *l_852 = (void*)0;
        int i, j;
        for (p_888->g_136 = 17; (p_888->g_136 >= 21); ++p_888->g_136)
        { /* block id: 252 */
            if ((*p_25))
                break;
        }
        for (p_888->g_88 = 0; (p_888->g_88 >= 59); p_888->g_88 = safe_add_func_int8_t_s_s(p_888->g_88, 6))
        { /* block id: 257 */
            uint32_t l_615[6][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
            int32_t l_616 = 0x576C80BCL;
            struct S0 *l_663 = &p_888->g_87[2];
            int32_t l_666 = 0x7E31D139L;
            int32_t l_668 = 0x52CCC5F1L;
            int32_t l_679 = 6L;
            int32_t l_681 = (-7L);
            int32_t l_682 = (-1L);
            int32_t l_683 = 8L;
            int32_t l_684 = 0x29F7DFBAL;
            int32_t l_685[3];
            uint16_t *l_739 = &p_888->g_637;
            int32_t *l_763 = &p_888->g_409;
            uint8_t *l_780[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t ***l_794[9][1] = {{&l_532},{&l_532},{&l_532},{&l_532},{&l_532},{&l_532},{&l_532},{&l_532},{&l_532}};
            uint64_t **l_820 = &l_542[9][9];
            uint64_t ***l_819 = &l_820;
            uint8_t l_846 = 0x55L;
            uint8_t l_849[2];
            uint32_t l_868 = 4294967291UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_685[i] = 0x58802150L;
            for (i = 0; i < 2; i++)
                l_849[i] = 1UL;
            (1 + 1);
        }
    }
    else
    { /* block id: 393 */
        uint16_t **l_879 = &p_888->g_737;
        struct S0 **l_880 = &p_888->g_200;
        int32_t l_882 = 0L;
        l_882 = (((l_879 != (void*)0) , l_880) != l_881);
    }
    return (*p_888->g_626);
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_30 p_888->g_531 p_888->g_491 p_888->g_97
 * writes: p_888->g_30 p_888->g_97
 */
int32_t * func_26(int8_t * p_27, int32_t * p_28, struct S1 * p_888)
{ /* block id: 11 */
    uint32_t l_48 = 4294967295UL;
    int32_t *l_392 = &p_888->g_3[2][5];
    for (p_888->g_30 = 0; (p_888->g_30 <= 18); p_888->g_30++)
    { /* block id: 14 */
        int8_t *l_34 = (void*)0;
        int32_t l_391[8][7] = {{0x7B4181C5L,0x0437FA1AL,0x0437FA1AL,0x7B4181C5L,(-1L),0x4780BEFEL,0x4780BEFEL},{0x7B4181C5L,0x0437FA1AL,0x0437FA1AL,0x7B4181C5L,(-1L),0x4780BEFEL,0x4780BEFEL},{0x7B4181C5L,0x0437FA1AL,0x0437FA1AL,0x7B4181C5L,(-1L),0x4780BEFEL,0x4780BEFEL},{0x7B4181C5L,0x0437FA1AL,0x0437FA1AL,0x7B4181C5L,(-1L),0x4780BEFEL,0x4780BEFEL},{0x7B4181C5L,0x0437FA1AL,0x0437FA1AL,0x7B4181C5L,(-1L),0x4780BEFEL,0x4780BEFEL},{0x7B4181C5L,0x0437FA1AL,0x0437FA1AL,0x7B4181C5L,(-1L),0x4780BEFEL,0x4780BEFEL},{0x7B4181C5L,0x0437FA1AL,0x0437FA1AL,0x7B4181C5L,(-1L),0x4780BEFEL,0x4780BEFEL},{0x7B4181C5L,0x0437FA1AL,0x0437FA1AL,0x7B4181C5L,(-1L),0x4780BEFEL,0x4780BEFEL}};
        int32_t l_478 = 0x46D10EA2L;
        uint64_t *l_505 = &p_888->g_134;
        uint64_t **l_504[10];
        uint64_t ***l_503 = &l_504[5];
        int32_t l_509 = 4L;
        int32_t **l_510 = &p_888->g_97[7][0];
        int32_t **l_511 = &l_392;
        int32_t *l_514 = &p_888->g_137[2];
        int64_t *l_525 = &p_888->g_216[5][1][1];
        uint32_t *l_528 = (void*)0;
        uint32_t *l_529 = &p_888->g_530;
        int i, j;
        for (i = 0; i < 10; i++)
            l_504[i] = &l_505;
        (1 + 1);
    }
    (*p_888->g_531) = p_28;
    return (*p_888->g_491);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_888->g_97
 */
int32_t * func_42(int8_t * p_43, int8_t  p_44, struct S1 * p_888)
{ /* block id: 177 */
    int32_t l_405 = 0x5CD86355L;
    int32_t *l_406 = (void*)0;
    int32_t *l_407[9][5][5] = {{{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]}},{{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]}},{{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]}},{{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]}},{{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]}},{{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]}},{{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]}},{{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]}},{{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]},{&p_888->g_137[1],&p_888->g_70,(void*)0,&p_888->g_70,&p_888->g_137[1]}}};
    int i, j, k;
    l_407[2][3][1] = func_45((+((safe_unary_minus_func_uint16_t_u(0xC036L)) & l_405)), l_406, p_888);
    return l_406;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_888->g_97
 */
int32_t * func_45(int32_t  p_46, int32_t * p_47, struct S1 * p_888)
{ /* block id: 171 */
    struct S0 l_393[2] = {{5L},{5L}};
    int32_t *l_394[6] = {&p_888->g_65,(void*)0,&p_888->g_65,&p_888->g_65,(void*)0,&p_888->g_65};
    int32_t l_395 = 0x2C3BF350L;
    int8_t l_396 = 7L;
    int32_t l_397[6];
    uint64_t l_398 = 0x887185A8F3726C7BL;
    int32_t **l_401 = &p_888->g_97[7][0];
    int i;
    for (i = 0; i < 6; i++)
        l_397[i] = (-9L);
    l_393[0] = l_393[1];
    l_398++;
    (*l_401) = p_47;
    return &p_888->g_3[2][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_65 p_888->g_134 p_888->g_218 p_888->g_122 p_888->g_64 p_888->g_93 p_888->g_127
 * writes: p_888->g_93 p_888->g_70
 */
uint16_t  func_51(int64_t  p_52, struct S1 * p_888)
{ /* block id: 162 */
    int32_t *l_346 = &p_888->g_65;
    int32_t *l_347 = (void*)0;
    int32_t *l_348[2][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t l_349 = 0x3F13F1C3035D422AL;
    int8_t l_350[4] = {(-1L),(-1L),(-1L),(-1L)};
    int32_t l_351[6] = {0x151DAF60L,0x151DAF60L,0x151DAF60L,0x151DAF60L,0x151DAF60L,0x151DAF60L};
    int32_t l_352 = 0L;
    int8_t l_353 = 0x31L;
    int16_t l_354 = 0x3F60L;
    uint8_t l_355[1][4] = {{6UL,6UL,6UL,6UL}};
    uint8_t *l_378 = &l_355[0][0];
    int32_t l_379 = 0L;
    uint32_t l_380 = 0xCDA89CB0L;
    int16_t *l_381 = (void*)0;
    int16_t *l_382[5];
    int32_t l_383 = 0L;
    uint32_t l_384 = 0x4D97B653L;
    uint16_t l_387[1];
    int i, j;
    for (i = 0; i < 5; i++)
        l_382[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_387[i] = 0x26D3L;
    l_355[0][2]--;
    (*p_888->g_127) = (+(((void*)0 != &p_888->g_218[0][7][1]) & (((*l_346) , (((safe_mod_func_int16_t_s_s((p_888->g_93[1][0] ^= (p_52 & (safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(0x8F95L, ((*l_346) , p_888->g_134))) >= (+(safe_sub_func_int32_t_s_s(0x36302C97L, (~((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((((((((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((((*l_378) = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((0x16L > 0xDCL) & p_52), 6)), p_52))) >= p_888->g_218[0][7][1]), 0xB9L)), p_52)) || 0x1FB586FE887E1C5DL) > 246UL) > p_888->g_122) && p_52) < p_52) && p_888->g_64) , p_52), (*l_346))), l_379)) > l_380)))))), 2)))), p_52)) ^ 4UL) , p_52)) != (*l_346))));
    l_384++;
    ++l_387[0];
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_144 p_888->g_125
 * writes: p_888->g_144 p_888->g_125
 */
int64_t  func_53(int32_t  p_54, uint32_t  p_55, int32_t * p_56, int8_t * p_57, uint64_t  p_58, struct S1 * p_888)
{ /* block id: 49 */
    int32_t *l_139 = &p_888->g_70;
    int32_t **l_140 = &l_139;
    int32_t *l_141 = &p_888->g_70;
    int32_t l_142[8][2] = {{(-6L),0x546132A9L},{(-6L),0x546132A9L},{(-6L),0x546132A9L},{(-6L),0x546132A9L},{(-6L),0x546132A9L},{(-6L),0x546132A9L},{(-6L),0x546132A9L},{(-6L),0x546132A9L}};
    int32_t *l_143[3];
    int16_t *l_155 = &p_888->g_93[2][4];
    struct S0 *l_198 = &p_888->g_87[1];
    int32_t l_290[7];
    uint64_t l_331 = 0x7ACE969139DE4035L;
    int16_t l_344[5] = {0x634CL,0x634CL,0x634CL,0x634CL,0x634CL};
    int i, j;
    for (i = 0; i < 3; i++)
        l_143[i] = &l_142[2][1];
    for (i = 0; i < 7; i++)
        l_290[i] = 0x0161D5ABL;
    (*l_140) = l_139;
    ++p_888->g_144;
    for (p_58 = 0; (p_58 < 55); p_58++)
    { /* block id: 54 */
        uint64_t l_151 = 0x0F59ADD7983F0AB7L;
        int32_t l_164 = 0x7F87ACA6L;
        int32_t l_165 = 6L;
        int32_t l_166 = 0L;
        int32_t l_179 = 2L;
        int32_t l_182 = 0x104A074EL;
        int32_t l_184 = 3L;
        int32_t l_187 = (-6L);
        int32_t l_188[3][5][6] = {{{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L}},{{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L}},{{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L},{0x1B4FA777L,(-1L),(-2L),1L,1L,1L}}};
        int32_t *l_230 = &p_888->g_3[2][5];
        uint32_t l_255 = 0x6C640537L;
        uint32_t *l_330 = (void*)0;
        uint32_t **l_329 = &l_330;
        int i, j, k;
        for (p_888->g_125 = 0; (p_888->g_125 <= 2); p_888->g_125 += 1)
        { /* block id: 57 */
            uint8_t *l_156[9];
            int32_t l_167 = (-8L);
            int64_t *l_171 = &p_888->g_136;
            int64_t **l_170 = &l_171;
            uint64_t *l_172 = &p_888->g_134;
            int64_t *l_173 = &p_888->g_136;
            int32_t l_177 = 0x1166651EL;
            int32_t l_178 = (-1L);
            int32_t l_180 = 0x687EC680L;
            int32_t l_183 = 3L;
            int32_t l_185 = 0x5896DF70L;
            int32_t l_186[10][2][2] = {{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}},{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}},{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}},{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}},{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}},{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}},{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}},{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}},{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}},{{0x02EBC213L,0x02EBC213L},{0x02EBC213L,0x02EBC213L}}};
            uint8_t l_190[3];
            struct S0 l_249[1] = {{-4L}};
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_156[i] = &p_888->g_157;
            for (i = 0; i < 3; i++)
                l_190[i] = 0x30L;
            (1 + 1);
        }
    }
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_65 p_888->g_87 p_888->g_37 p_888->g_63 p_888->g_3 p_888->g_96 p_888->g_68 p_888->g_70 p_888->g_30 p_888->g_93 p_888->g_125 p_888->g_122 p_888->g_127 p_888->g_64
 * writes: p_888->g_65 p_888->g_70 p_888->g_88 p_888->g_93 p_888->g_97 p_888->g_122 p_888->g_125
 */
int32_t  func_59(int8_t * p_60, struct S1 * p_888)
{ /* block id: 19 */
    struct S0 l_61[10][1] = {{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}}};
    struct S0 *l_62 = &l_61[7][0];
    struct S0 *l_91 = (void*)0;
    int32_t *l_131 = &p_888->g_125;
    int i, j;
    (*l_62) = l_61[7][0];
    for (p_888->g_65 = 24; (p_888->g_65 != 9); p_888->g_65 = safe_sub_func_uint64_t_u_u(p_888->g_65, 9))
    { /* block id: 23 */
        uint32_t l_73 = 1UL;
        int16_t *l_92 = &p_888->g_93[1][0];
        int32_t l_128 = (-1L);
        int32_t l_129 = 0x2F535E81L;
        for (p_888->g_70 = 0; (p_888->g_70 < (-14)); p_888->g_70 = safe_sub_func_int8_t_s_s(p_888->g_70, 8))
        { /* block id: 26 */
            if (l_73)
                break;
        }
        l_129 &= (((safe_lshift_func_uint16_t_u_u(func_76(func_79((safe_rshift_func_int8_t_s_u(((8UL != (p_888->g_88 = (p_888->g_87[1] , l_61[7][0].f0))) ^ (p_888->g_37 != (((safe_mul_func_uint16_t_u_u(((~((l_91 == &p_888->g_87[1]) <= ((*l_92) = l_73))) < (~(safe_sub_func_uint32_t_u_u((l_73 , (0x4FL | 0L)), l_61[7][0].f0)))), l_73)) || 0UL) , l_73))), p_888->g_63)), l_61[7][0].f0, l_61[7][0].f0, p_888->g_3[4][3], l_73, p_888), p_888->g_3[2][5], p_888), 1)) , l_128) != l_73);
        if (l_73)
            break;
    }
    (*l_131) = l_61[7][0].f0;
    return (*l_131);
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_122 p_888->g_127 p_888->g_70 p_888->g_64
 * writes: p_888->g_70
 */
uint16_t  func_76(struct S0 * p_77, uint16_t  p_78, struct S1 * p_888)
{ /* block id: 38 */
    (*p_888->g_127) &= (0xBBL <= p_888->g_122);
    return p_888->g_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_96 p_888->g_68 p_888->g_70 p_888->g_30 p_888->g_37 p_888->g_93 p_888->g_125
 * writes: p_888->g_97 p_888->g_70 p_888->g_122 p_888->g_93 p_888->g_125
 */
struct S0 * func_79(int32_t  p_80, uint64_t  p_81, uint16_t  p_82, uint8_t  p_83, uint64_t  p_84, struct S1 * p_888)
{ /* block id: 31 */
    uint32_t l_111 = 0x15F4AA8BL;
    int32_t *l_118 = &p_888->g_70;
    int64_t *l_121 = &p_888->g_122;
    int16_t *l_123 = &p_888->g_93[2][3];
    int32_t *l_124 = &p_888->g_125;
    struct S0 *l_126 = &p_888->g_87[1];
    (*p_888->g_96) = &p_80;
    (*l_124) &= (safe_rshift_func_int8_t_s_u((((((safe_sub_func_uint64_t_u_u(0x74F72E784E7BDFF3L, (((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_888->g_68, (((*l_123) = (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((p_83 & ((safe_unary_minus_func_uint32_t_u(l_111)) , (safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(p_84, ((*l_121) = (safe_add_func_int32_t_s_s(((*l_118) = (4294967295UL >= (((((void*)0 != l_118) || ((safe_mul_func_int16_t_s_s((*l_118), 0x67A2L)) < (*l_118))) >= p_888->g_30) , p_888->g_37))), p_81))))), p_84)))), p_888->g_93[4][1])), p_81)) | p_888->g_93[0][3]) <= l_111)) == (-1L)))), 1L)) != p_80) < 0x29L))) || p_84) , 4294967292UL) <= 5L) != p_83), 6));
    return l_126;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_889;
    struct S1* p_888 = &c_889;
    struct S1 c_890 = {
        {{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L},{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L},{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L},{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L},{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L},{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L},{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L},{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L},{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L},{9L,0x039D6B9CL,0x6F084217L,(-5L),0x272A7275L,(-5L),0x6F084217L}}, // p_888->g_3
        0x2FL, // p_888->g_22
        1L, // p_888->g_23
        0x4DL, // p_888->g_30
        (-1L), // p_888->g_35
        {0x77977D32L,0x77977D32L}, // p_888->g_36
        0x1AD2EC94L, // p_888->g_37
        0x3F81597FL, // p_888->g_63
        8L, // p_888->g_64
        0x589B7A40L, // p_888->g_65
        (-2L), // p_888->g_68
        0x78023CB4L, // p_888->g_69
        0x57A5127AL, // p_888->g_70
        {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}}, // p_888->g_87
        0xAF9AL, // p_888->g_88
        {{(-3L),(-9L),(-9L),(-3L),(-3L)},{(-3L),(-9L),(-9L),(-3L),(-3L)},{(-3L),(-9L),(-9L),(-3L),(-3L)},{(-3L),(-9L),(-9L),(-3L),(-3L)},{(-3L),(-9L),(-9L),(-3L),(-3L)}}, // p_888->g_93
        {{&p_888->g_3[8][0]},{&p_888->g_3[8][0]},{&p_888->g_3[8][0]},{&p_888->g_3[8][0]},{&p_888->g_3[8][0]},{&p_888->g_3[8][0]},{&p_888->g_3[8][0]},{&p_888->g_3[8][0]}}, // p_888->g_97
        &p_888->g_97[7][0], // p_888->g_96
        0x29E87E310A61F905L, // p_888->g_122
        0x07100DB3L, // p_888->g_125
        &p_888->g_70, // p_888->g_127
        (void*)0, // p_888->g_130
        0UL, // p_888->g_134
        (-10L), // p_888->g_136
        {1L,1L,1L,1L,1L,1L,1L}, // p_888->g_137
        0UL, // p_888->g_144
        248UL, // p_888->g_157
        (void*)0, // p_888->g_200
        &p_888->g_200, // p_888->g_199
        {{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)}},{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)}},{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)}},{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)}},{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)}},{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)}}}, // p_888->g_216
        {{{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L}},{{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L}},{{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L}},{{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L}},{{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L}},{{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L}},{{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L},{0x31L,0x72L}}}, // p_888->g_218
        {{{0x26885EA7L},{0x26885EA7L},{0x26885EA7L},{0x26885EA7L},{0x26885EA7L}}}, // p_888->g_228
        0x43L, // p_888->g_292
        {{0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L},{0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L},{0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L},{0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L},{0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L,0x046989D6L}}, // p_888->g_293
        9UL, // p_888->g_297
        0x79854DCCL, // p_888->g_409
        0x5343L, // p_888->g_437
        0xA60E4E9098F65F08L, // p_888->g_474
        &p_888->g_474, // p_888->g_473
        {{&p_888->g_473,&p_888->g_473,&p_888->g_473},{&p_888->g_473,&p_888->g_473,&p_888->g_473},{&p_888->g_473,&p_888->g_473,&p_888->g_473},{&p_888->g_473,&p_888->g_473,&p_888->g_473},{&p_888->g_473,&p_888->g_473,&p_888->g_473},{&p_888->g_473,&p_888->g_473,&p_888->g_473},{&p_888->g_473,&p_888->g_473,&p_888->g_473},{&p_888->g_473,&p_888->g_473,&p_888->g_473}}, // p_888->g_472
        (void*)0, // p_888->g_490
        &p_888->g_97[7][0], // p_888->g_491
        0xF613F960L, // p_888->g_530
        &p_888->g_97[7][0], // p_888->g_531
        0x11504421L, // p_888->g_566
        0L, // p_888->g_600
        &p_888->g_297, // p_888->g_626
        &p_888->g_626, // p_888->g_625
        0x454AL, // p_888->g_637
        &p_888->g_637, // p_888->g_737
        &p_888->g_637, // p_888->g_738
        0xB8L, // p_888->g_791
        &p_888->g_791, // p_888->g_790
        &p_888->g_97[7][0], // p_888->g_796
        {{&p_888->g_796,&p_888->g_796,&p_888->g_796,&p_888->g_796},{&p_888->g_796,&p_888->g_796,&p_888->g_796,&p_888->g_796},{&p_888->g_796,&p_888->g_796,&p_888->g_796,&p_888->g_796},{&p_888->g_796,&p_888->g_796,&p_888->g_796,&p_888->g_796},{&p_888->g_796,&p_888->g_796,&p_888->g_796,&p_888->g_796},{&p_888->g_796,&p_888->g_796,&p_888->g_796,&p_888->g_796},{&p_888->g_796,&p_888->g_796,&p_888->g_796,&p_888->g_796},{&p_888->g_796,&p_888->g_796,&p_888->g_796,&p_888->g_796},{&p_888->g_796,&p_888->g_796,&p_888->g_796,&p_888->g_796}}, // p_888->g_795
        (void*)0, // p_888->g_853
        &p_888->g_200, // p_888->g_854
    };
    c_889 = c_890;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_888);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_888->g_3[i][j], "p_888->g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_888->g_22, "p_888->g_22", print_hash_value);
    transparent_crc(p_888->g_23, "p_888->g_23", print_hash_value);
    transparent_crc(p_888->g_30, "p_888->g_30", print_hash_value);
    transparent_crc(p_888->g_35, "p_888->g_35", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_888->g_36[i], "p_888->g_36[i]", print_hash_value);

    }
    transparent_crc(p_888->g_37, "p_888->g_37", print_hash_value);
    transparent_crc(p_888->g_63, "p_888->g_63", print_hash_value);
    transparent_crc(p_888->g_64, "p_888->g_64", print_hash_value);
    transparent_crc(p_888->g_65, "p_888->g_65", print_hash_value);
    transparent_crc(p_888->g_68, "p_888->g_68", print_hash_value);
    transparent_crc(p_888->g_69, "p_888->g_69", print_hash_value);
    transparent_crc(p_888->g_70, "p_888->g_70", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_888->g_87[i].f0, "p_888->g_87[i].f0", print_hash_value);

    }
    transparent_crc(p_888->g_88, "p_888->g_88", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_888->g_93[i][j], "p_888->g_93[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_888->g_122, "p_888->g_122", print_hash_value);
    transparent_crc(p_888->g_125, "p_888->g_125", print_hash_value);
    transparent_crc(p_888->g_134, "p_888->g_134", print_hash_value);
    transparent_crc(p_888->g_136, "p_888->g_136", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_888->g_137[i], "p_888->g_137[i]", print_hash_value);

    }
    transparent_crc(p_888->g_144, "p_888->g_144", print_hash_value);
    transparent_crc(p_888->g_157, "p_888->g_157", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_888->g_216[i][j][k], "p_888->g_216[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_888->g_218[i][j][k], "p_888->g_218[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_888->g_228[i][j][k], "p_888->g_228[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_888->g_292, "p_888->g_292", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_888->g_293[i][j], "p_888->g_293[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_888->g_297, "p_888->g_297", print_hash_value);
    transparent_crc(p_888->g_409, "p_888->g_409", print_hash_value);
    transparent_crc(p_888->g_437, "p_888->g_437", print_hash_value);
    transparent_crc(p_888->g_474, "p_888->g_474", print_hash_value);
    transparent_crc(p_888->g_530, "p_888->g_530", print_hash_value);
    transparent_crc(p_888->g_566, "p_888->g_566", print_hash_value);
    transparent_crc(p_888->g_600, "p_888->g_600", print_hash_value);
    transparent_crc(p_888->g_637, "p_888->g_637", print_hash_value);
    transparent_crc(p_888->g_791, "p_888->g_791", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
