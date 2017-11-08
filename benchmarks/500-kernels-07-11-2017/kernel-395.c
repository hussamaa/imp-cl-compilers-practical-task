// -g 21,70,2 -l 1,35,2
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


// Seed: 3165509401

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   volatile uint8_t  f1;
   volatile uint64_t  f2;
   volatile uint32_t  f3;
   volatile uint8_t  f4;
};

union U1 {
   int64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   struct S0  f3;
   uint32_t  f4;
};

struct S2 {
    uint16_t g_5[7][2];
    int32_t g_22[3][10];
    uint32_t g_36;
    uint8_t g_38;
    volatile int32_t g_39;
    volatile int32_t g_40;
    int32_t g_41;
    int32_t g_57;
    int32_t * volatile g_56[3][9];
    uint16_t *g_68;
    uint16_t **g_67;
    int32_t *g_71;
    int32_t ** volatile g_70;
    volatile uint16_t *g_86;
    volatile uint16_t **g_85;
    volatile uint16_t ***g_84;
    volatile uint16_t *** volatile *g_83;
    volatile uint16_t * volatile * volatile g_111;
    volatile uint16_t * volatile * volatile *g_110;
    uint64_t g_122;
    union U1 g_123[7][3];
    struct S0 g_131;
    struct S0 *g_133[8];
    struct S0 ** volatile g_132;
    int32_t * volatile g_143;
    volatile uint16_t * volatile * volatile g_149;
    struct S0 g_191;
    volatile union U1 g_196;
    uint16_t g_211;
    uint32_t g_216;
    volatile struct S0 g_238;
    volatile struct S0 g_239;
    uint64_t g_290[7];
    int16_t g_330;
    int32_t ** volatile g_332;
    uint64_t *g_337;
    uint64_t **g_336;
    uint64_t *** volatile g_335;
    union U1 g_348;
    struct S0 g_394;
    volatile uint32_t g_398;
    int32_t ** volatile g_401;
    volatile union U1 g_417[5][3][2];
    struct S0 g_418;
    volatile uint32_t g_477;
    volatile struct S0 g_488;
    volatile struct S0 g_489;
    int32_t ** volatile g_490;
    struct S0 g_508;
    int64_t **g_520;
    int64_t *** volatile g_519;
    struct S0 g_523;
    union U1 g_534;
    uint64_t g_538;
    volatile uint32_t g_544[9][3][6];
    int32_t g_572;
    union U1 *g_583[10];
    union U1 ** volatile g_582[9][9][2];
    uint8_t **g_595;
    volatile struct S0 g_602;
    union U1 g_641;
    uint16_t g_654;
    volatile struct S0 g_677;
    int16_t g_681[8][5];
    volatile struct S0 g_683[9];
    volatile struct S0 g_684;
    struct S0 * volatile g_685;
    volatile uint8_t g_690;
    int8_t g_701;
    volatile struct S0 g_709;
    uint16_t *g_713;
    uint32_t g_727;
    int32_t g_731;
    volatile int64_t * volatile g_745[2];
    uint16_t g_763;
    volatile union U1 g_777;
    int32_t ** volatile g_779;
    int32_t g_784;
    struct S0 g_785;
    int32_t g_789;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_790);
uint64_t  func_2(uint16_t  p_3, struct S2 * p_790);
int32_t  func_10(uint32_t  p_11, struct S2 * p_790);
uint32_t  func_14(uint16_t * p_15, struct S2 * p_790);
uint16_t * func_16(uint16_t * p_17, int32_t  p_18, struct S2 * p_790);
int32_t  func_27(int8_t  p_28, struct S2 * p_790);
uint32_t  func_29(int32_t  p_30, struct S2 * p_790);
uint32_t  func_31(int64_t  p_32, struct S2 * p_790);
uint8_t  func_52(int64_t  p_53, struct S2 * p_790);
uint16_t ** func_60(uint16_t * p_61, uint8_t  p_62, struct S2 * p_790);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_790->g_5 p_790->g_38 p_790->g_41 p_790->g_22 p_790->g_67 p_790->g_709.f4 p_790->g_131.f0 p_790->g_418.f0 p_790->g_216 p_790->g_727 p_790->g_508.f0 p_790->g_57 p_790->g_211 p_790->g_122 p_790->g_538 p_790->g_731 p_790->g_394.f1 p_790->g_336 p_790->g_337 p_790->g_290 p_790->g_83 p_790->g_84 p_790->g_654 p_790->g_681 p_790->g_745 p_790->g_191.f0 p_790->g_523.f0 p_790->g_534.f3.f0 p_790->g_489.f2 p_790->g_488.f0 p_790->g_534.f0 p_790->g_777 p_790->g_779 p_790->g_641.f2 p_790->g_490 p_790->g_71 p_790->g_401 p_790->g_544 p_790->g_784 p_790->g_785 p_790->g_523 p_790->g_335 p_790->g_789 p_790->g_143
 * writes: p_790->g_5 p_790->g_36 p_790->g_38 p_790->g_41 p_790->g_348.f3.f0 p_790->g_71 p_790->g_68 p_790->g_713 p_790->g_22 p_790->g_523.f0 p_790->g_216 p_790->g_727 p_790->g_508.f0 p_790->g_731 p_790->g_654 p_790->g_57 p_790->g_534.f3.f0 p_790->g_763 p_790->g_534.f0 p_790->g_583 p_790->g_641.f2 p_790->g_784 p_790->g_523 p_790->g_789
 */
uint32_t  func_1(struct S2 * p_790)
{ /* block id: 4 */
    uint16_t *l_4 = &p_790->g_5[3][0];
    int32_t *l_787 = (void*)0;
    int32_t *l_788 = &p_790->g_789;
    (*l_788) &= (6L || func_2(((*l_4)++), p_790));
    (*l_788) ^= (((void*)0 == l_788) & (*p_790->g_143));
    (*l_788) = (*l_788);
    return (*l_788);
}


/* ------------------------------------------ */
/* 
 * reads : p_790->g_5 p_790->g_38 p_790->g_41 p_790->g_22 p_790->g_67 p_790->g_709.f4 p_790->g_131.f0 p_790->g_418.f0 p_790->g_216 p_790->g_727 p_790->g_508.f0 p_790->g_57 p_790->g_211 p_790->g_122 p_790->g_538 p_790->g_731 p_790->g_394.f1 p_790->g_336 p_790->g_337 p_790->g_290 p_790->g_83 p_790->g_84 p_790->g_654 p_790->g_681 p_790->g_745 p_790->g_191.f0 p_790->g_523.f0 p_790->g_534.f3.f0 p_790->g_489.f2 p_790->g_488.f0 p_790->g_534.f0 p_790->g_777 p_790->g_779 p_790->g_641.f2 p_790->g_490 p_790->g_71 p_790->g_401 p_790->g_544 p_790->g_784 p_790->g_785 p_790->g_523 p_790->g_335
 * writes: p_790->g_36 p_790->g_38 p_790->g_41 p_790->g_348.f3.f0 p_790->g_71 p_790->g_68 p_790->g_713 p_790->g_22 p_790->g_523.f0 p_790->g_216 p_790->g_727 p_790->g_508.f0 p_790->g_731 p_790->g_654 p_790->g_57 p_790->g_534.f3.f0 p_790->g_763 p_790->g_534.f0 p_790->g_583 p_790->g_641.f2 p_790->g_784 p_790->g_523
 */
uint64_t  func_2(uint16_t  p_3, struct S2 * p_790)
{ /* block id: 6 */
    uint16_t *l_19 = &p_790->g_5[2][0];
    int32_t l_20 = 0x1BA87A5EL;
    int8_t *l_758 = &p_790->g_641.f3.f0;
    int8_t *l_759[9] = {&p_790->g_191.f0,&p_790->g_418.f0,&p_790->g_191.f0,&p_790->g_191.f0,&p_790->g_418.f0,&p_790->g_191.f0,&p_790->g_191.f0,&p_790->g_418.f0,&p_790->g_191.f0};
    int32_t l_760[1][7][1];
    int32_t l_761 = 0L;
    uint16_t *l_762 = &p_790->g_763;
    uint8_t l_764 = 8UL;
    int32_t *l_783 = &p_790->g_784;
    struct S0 *l_786 = &p_790->g_523;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_760[i][j][k] = (-1L);
        }
    }
    (*l_783) ^= ((safe_div_func_uint8_t_u_u(p_790->g_5[4][0], (func_10((((safe_mod_func_int16_t_s_s(((0x3DDCA272L | p_3) && func_14(func_16(l_19, l_20, p_790), p_790)), ((*l_762) = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_760[0][0][0] ^= p_790->g_418.f0), ((l_761 |= p_3) == 6UL))), l_20)), 9))))) < l_20) < l_764), p_790) , p_790->g_544[5][0][5]))) | l_764);
    (*l_786) = p_790->g_785;
    (*l_786) = (*l_786);
    return (***p_790->g_335);
}


/* ------------------------------------------ */
/* 
 * reads : p_790->g_489.f2 p_790->g_418.f0 p_790->g_488.f0 p_790->g_534.f0 p_790->g_777 p_790->g_779 p_790->g_641.f2 p_790->g_490 p_790->g_71 p_790->g_401
 * writes: p_790->g_534.f0 p_790->g_583 p_790->g_71 p_790->g_641.f2
 */
int32_t  func_10(uint32_t  p_11, struct S2 * p_790)
{ /* block id: 405 */
    int8_t l_768 = 0x6AL;
    int32_t **l_782[3][4][10] = {{{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71},{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71},{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71},{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71}},{{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71},{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71},{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71},{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71}},{{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71},{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71},{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71},{(void*)0,&p_790->g_71,&p_790->g_71,(void*)0,(void*)0,(void*)0,&p_790->g_71,&p_790->g_71,&p_790->g_71,&p_790->g_71}}};
    int i, j, k;
    if ((safe_mul_func_int16_t_s_s(p_790->g_489.f2, p_790->g_418.f0)))
    { /* block id: 406 */
        int32_t *l_767[2][4] = {{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41}};
        int i, j;
        l_768 ^= 7L;
        return p_790->g_488.f0;
    }
    else
    { /* block id: 409 */
        uint32_t l_773 = 0xFA937E90L;
        int32_t *l_778 = (void*)0;
        for (p_790->g_534.f0 = (-23); (p_790->g_534.f0 == 6); p_790->g_534.f0++)
        { /* block id: 412 */
            int32_t *l_771 = &p_790->g_57;
            int32_t *l_772[6][1] = {{&p_790->g_22[0][1]},{&p_790->g_22[0][1]},{&p_790->g_22[0][1]},{&p_790->g_22[0][1]},{&p_790->g_22[0][1]},{&p_790->g_22[0][1]}};
            union U1 **l_776 = &p_790->g_583[8];
            int i, j;
            l_773--;
            (*l_776) = (void*)0;
        }
        (*p_790->g_779) = (p_790->g_777 , l_778);
        for (p_790->g_641.f2 = 1; (p_790->g_641.f2 != 12); ++p_790->g_641.f2)
        { /* block id: 419 */
            return p_11;
        }
    }
    (*p_790->g_401) = (*p_790->g_490);
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_14(uint16_t * p_15, struct S2 * p_790)
{ /* block id: 400 */
    int32_t l_751[8];
    int i;
    for (i = 0; i < 8; i++)
        l_751[i] = (-1L);
    return l_751[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_790->g_38 p_790->g_41 p_790->g_22 p_790->g_67 p_790->g_709.f4 p_790->g_131.f0 p_790->g_418.f0 p_790->g_216 p_790->g_727 p_790->g_5 p_790->g_508.f0 p_790->g_57 p_790->g_211 p_790->g_122 p_790->g_538 p_790->g_731 p_790->g_394.f1 p_790->g_336 p_790->g_337 p_790->g_290 p_790->g_83 p_790->g_84 p_790->g_654 p_790->g_681 p_790->g_745 p_790->g_191.f0 p_790->g_523.f0 p_790->g_534.f3.f0
 * writes: p_790->g_36 p_790->g_38 p_790->g_41 p_790->g_348.f3.f0 p_790->g_71 p_790->g_68 p_790->g_713 p_790->g_22 p_790->g_523.f0 p_790->g_216 p_790->g_727 p_790->g_508.f0 p_790->g_731 p_790->g_654 p_790->g_57 p_790->g_534.f3.f0
 */
uint16_t * func_16(uint16_t * p_17, int32_t  p_18, struct S2 * p_790)
{ /* block id: 7 */
    int32_t *l_21 = &p_790->g_22[0][1];
    int32_t *l_23[4] = {&p_790->g_22[0][0],&p_790->g_22[0][0],&p_790->g_22[0][0],&p_790->g_22[0][0]};
    uint16_t l_24 = 3UL;
    int64_t *l_746 = &p_790->g_123[0][2].f0;
    uint32_t l_748 = 4294967293UL;
    int i;
    l_24--;
    for (p_18 = 2; (p_18 >= 0); p_18 -= 1)
    { /* block id: 11 */
        int16_t l_721 = 6L;
        uint32_t *l_726 = &p_790->g_727;
        int8_t *l_728 = &p_790->g_508.f0;
        int32_t l_729 = 0L;
        uint16_t *l_740 = &p_790->g_654;
        p_790->g_731 |= func_27((func_29(p_18, p_790) != (safe_add_func_uint8_t_u_u((((p_790->g_523.f0 = (safe_div_func_uint32_t_u_u(p_790->g_131.f0, p_790->g_418.f0))) > ((((((safe_lshift_func_int16_t_s_s(((((l_721 = p_18) , p_18) ^ p_18) == (((((p_18 , (((safe_lshift_func_int8_t_s_u(((*l_728) &= (((*l_726) |= (--p_790->g_216)) || ((*p_17) || 0UL))), p_18)) != l_729) >= p_790->g_57)) >= (-6L)) , p_790->g_211) == p_790->g_122) > p_18)), p_790->g_538)) == p_790->g_57) > (*p_17)) , l_729) == 0x6E31043CL) > 0x980CL)) >= p_790->g_122), p_18))), p_790);
        if (p_18)
            continue;
        if (l_721)
            continue;
        p_790->g_57 &= ((safe_mod_func_int16_t_s_s(((((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((l_729 == (l_729 || (safe_mod_func_uint16_t_u_u(((p_790->g_394.f1 | (p_18 > (**p_790->g_336))) , ((*p_790->g_83) != (void*)0)), (*p_17))))) >= ((--(*l_740)) <= ((safe_div_func_uint32_t_u_u(l_729, p_790->g_681[7][3])) , 0x2E5BL))), (*p_17))), 65535UL)) & p_18) , p_790->g_745[1]) != l_746), (*l_21))) != p_790->g_191.f0);
        for (p_790->g_523.f0 = 3; (p_790->g_523.f0 >= 0); p_790->g_523.f0 -= 1)
        { /* block id: 390 */
            uint16_t *l_747 = &p_790->g_5[4][0];
            for (p_790->g_534.f3.f0 = 2; (p_790->g_534.f3.f0 >= 0); p_790->g_534.f3.f0 -= 1)
            { /* block id: 393 */
                return l_747;
            }
        }
    }
    l_748--;
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_27(int8_t  p_28, struct S2 * p_790)
{ /* block id: 381 */
    uint16_t l_730 = 1UL;
    return l_730;
}


/* ------------------------------------------ */
/* 
 * reads : p_790->g_38 p_790->g_36 p_790->g_41 p_790->g_22 p_790->g_67 p_790->g_709.f4
 * writes: p_790->g_36 p_790->g_38 p_790->g_41 p_790->g_348.f3.f0 p_790->g_71 p_790->g_68 p_790->g_713 p_790->g_22
 */
uint32_t  func_29(int32_t  p_30, struct S2 * p_790)
{ /* block id: 12 */
    int16_t l_35 = 0x7EF5L;
    uint8_t *l_37 = &p_790->g_38;
    uint16_t *l_712 = (void*)0;
    int32_t *l_714 = &p_790->g_22[0][1];
    (*l_714) = (((*p_790->g_67) = (func_31((safe_div_func_uint8_t_u_u(l_35, ((*l_37) |= (p_790->g_36 = p_30)))), p_790) , l_712)) != (p_790->g_713 = (void*)0));
    return p_790->g_709.f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_790->g_36 p_790->g_41 p_790->g_38 p_790->g_22
 * writes: p_790->g_36 p_790->g_38 p_790->g_41 p_790->g_348.f3.f0 p_790->g_71
 */
uint32_t  func_31(int64_t  p_32, struct S2 * p_790)
{ /* block id: 15 */
    uint8_t *l_51 = (void*)0;
    int32_t l_297 = 0x2AA82EACL;
    int32_t l_354 = 0L;
    int32_t l_355[10][5][2] = {{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}},{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}},{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}},{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}},{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}},{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}},{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}},{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}},{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}},{{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L},{1L,0x4AD5D377L}}};
    int64_t l_397[9];
    uint32_t *l_439 = &p_790->g_216;
    uint64_t **l_443 = &p_790->g_337;
    int32_t l_476 = (-4L);
    int32_t l_482[5][4][8] = {{{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L}},{{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L}},{{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L}},{{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L}},{{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L},{1L,0x74B10215L,7L,0x7D3F19E8L,0x74B10215L,0x7D3F19E8L,7L,0x74B10215L}}};
    int32_t *l_497 = &l_355[3][3][1];
    uint64_t *l_529 = &p_790->g_122;
    int64_t l_547 = (-1L);
    uint64_t l_618[4][7][7] = {{{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL}},{{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL}},{{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL}},{{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL},{0xC2AACBB9C92CDE89L,0UL,18446744073709551607UL,0x698257BD4784A90EL,0x394D0C06FDBFA381L,6UL,18446744073709551615UL}}};
    int8_t l_632 = (-1L);
    uint8_t l_706 = 0x68L;
    int32_t **l_711 = &p_790->g_71;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_397[i] = 0x487BD6E6791708FCL;
    for (p_790->g_36 = 0; (p_790->g_36 <= 2); p_790->g_36 += 1)
    { /* block id: 18 */
        int64_t l_304 = 0x15538C678B9B127EL;
        int32_t l_308 = 8L;
        int32_t l_309[7] = {0x5E580794L,0x63C0BBB5L,0x5E580794L,0x5E580794L,0x63C0BBB5L,0x5E580794L,0x5E580794L};
        uint16_t *l_324 = (void*)0;
        uint64_t *l_334[10][5][2] = {{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}},{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}},{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}},{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}},{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}},{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}},{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}},{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}},{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}},{{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]},{(void*)0,&p_790->g_290[1]}}};
        uint64_t **l_333 = &l_334[5][2][1];
        uint64_t **l_516 = (void*)0;
        int16_t *l_535 = &p_790->g_330;
        uint16_t ***l_570 = &p_790->g_67;
        uint16_t ****l_569 = &l_570;
        uint8_t **l_574 = &l_51;
        uint8_t ***l_573[1];
        uint32_t l_615[6][8] = {{0xA94408F6L,6UL,4294967295UL,1UL,0x1474124CL,1UL,4294967295UL,6UL},{0xA94408F6L,6UL,4294967295UL,1UL,0x1474124CL,1UL,4294967295UL,6UL},{0xA94408F6L,6UL,4294967295UL,1UL,0x1474124CL,1UL,4294967295UL,6UL},{0xA94408F6L,6UL,4294967295UL,1UL,0x1474124CL,1UL,4294967295UL,6UL},{0xA94408F6L,6UL,4294967295UL,1UL,0x1474124CL,1UL,4294967295UL,6UL},{0xA94408F6L,6UL,4294967295UL,1UL,0x1474124CL,1UL,4294967295UL,6UL}};
        int64_t l_625[4];
        int32_t l_691 = 0x34C52DB7L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_573[i] = &l_574;
        for (i = 0; i < 4; i++)
            l_625[i] = (-2L);
        for (p_790->g_38 = 0; (p_790->g_38 <= 2); p_790->g_38 += 1)
        { /* block id: 21 */
            uint64_t l_305[10][2][7] = {{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL,0x722A67138265B9F9L,18446744073709551615UL,18446744073709551615UL}}};
            int32_t l_329 = (-1L);
            int32_t l_331[7] = {0x0100DD89L,0x0100DD89L,0x0100DD89L,0x0100DD89L,0x0100DD89L,0x0100DD89L,0x0100DD89L};
            int32_t l_474 = (-7L);
            int i, j, k;
            for (p_32 = 2; (p_32 >= 0); p_32 -= 1)
            { /* block id: 24 */
                for (p_790->g_41 = 2; (p_790->g_41 >= 0); p_790->g_41 -= 1)
                { /* block id: 27 */
                    int32_t l_42 = 7L;
                    int i, j;
                    l_42 &= p_790->g_22[p_790->g_41][(p_790->g_38 + 6)];
                }
            }
            for (p_32 = 2; (p_32 >= 0); p_32 -= 1)
            { /* block id: 33 */
                uint8_t *l_50 = &p_790->g_38;
                uint8_t **l_49[6][5][1] = {{{&l_50},{&l_50},{&l_50},{&l_50},{&l_50}},{{&l_50},{&l_50},{&l_50},{&l_50},{&l_50}},{{&l_50},{&l_50},{&l_50},{&l_50},{&l_50}},{{&l_50},{&l_50},{&l_50},{&l_50},{&l_50}},{{&l_50},{&l_50},{&l_50},{&l_50},{&l_50}},{{&l_50},{&l_50},{&l_50},{&l_50},{&l_50}}};
                int32_t l_347 = 1L;
                int32_t l_351 = 0x0A4CF801L;
                int32_t l_352[4] = {6L,6L,6L,6L};
                int32_t l_359 = 0L;
                int32_t l_360 = 1L;
                int32_t l_361 = 0x74F3D355L;
                int32_t l_362 = 0x5EB74FE5L;
                int32_t l_363 = (-1L);
                int32_t l_364 = (-7L);
                uint16_t l_365 = 0x3650L;
                uint8_t ***l_402 = &l_49[5][4][0];
                int i, j, k;
                (1 + 1);
            }
            for (p_790->g_348.f3.f0 = 0; (p_790->g_348.f3.f0 <= 2); p_790->g_348.f3.f0 += 1)
            { /* block id: 235 */
                uint32_t **l_440 = &l_439;
                uint64_t ***l_444 = (void*)0;
                int8_t *l_461 = &p_790->g_191.f0;
                uint32_t *l_462 = &p_790->g_216;
                int32_t l_463 = 0x12AFFEC6L;
                int32_t l_464[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
                int16_t *l_483 = &p_790->g_330;
                int64_t *l_484[7][6];
                uint32_t l_493[3];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_484[i][j] = &p_790->g_123[0][2].f0;
                }
                for (i = 0; i < 3; i++)
                    l_493[i] = 0UL;
                (1 + 1);
            }
        }
    }
    (*l_711) = &l_297;
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_790->g_41 p_790->g_36 p_790->g_67 p_790->g_70 p_790->g_71 p_790->g_22 p_790->g_83 p_790->g_39 p_790->g_5 p_790->g_110 p_790->g_122 p_790->g_123 p_790->g_57 p_790->g_132 p_790->g_143 p_790->g_149 p_790->g_56 p_790->g_191 p_790->g_216 p_790->g_290
 * writes: p_790->g_41 p_790->g_57 p_790->g_67 p_790->g_71 p_790->g_122 p_790->g_133 p_790->g_56 p_790->g_143 p_790->g_131 p_790->g_216 p_790->g_290
 */
uint8_t  func_52(int64_t  p_53, struct S2 * p_790)
{ /* block id: 35 */
    int64_t l_59 = 0x57EBC4D5916FF7DDL;
    uint16_t ***l_69 = &p_790->g_67;
    uint32_t l_87 = 0x19E1A970L;
    uint8_t *l_120 = &p_790->g_38;
    uint8_t **l_119 = &l_120;
    uint32_t l_124 = 0x434AC264L;
    int32_t l_134 = 0L;
    uint16_t l_153 = 1UL;
    int32_t l_162 = 0L;
    int32_t l_164[4] = {(-4L),(-4L),(-4L),(-4L)};
    int8_t l_169 = (-1L);
    uint8_t l_175 = 0x8EL;
    uint64_t l_235 = 0x2E3E843EBB1A3120L;
    uint64_t l_283[3];
    int i;
    for (i = 0; i < 3; i++)
        l_283[i] = 0x09A1C7425C81DCE8L;
    for (p_790->g_41 = 0; (p_790->g_41 != 29); p_790->g_41 = safe_add_func_uint32_t_u_u(p_790->g_41, 7))
    { /* block id: 38 */
        int32_t *l_58 = &p_790->g_57;
        if (p_53)
            break;
        (*l_58) = p_53;
        (*l_58) = l_59;
    }
    (*l_69) = func_60(&p_790->g_5[3][0], p_790->g_36, p_790);
    (*p_790->g_70) = &p_790->g_22[2][6];
    if ((*p_790->g_71))
    { /* block id: 48 */
        uint32_t l_88 = 0UL;
        int32_t l_89 = 0x557B4538L;
        uint8_t *l_118 = &p_790->g_38;
        uint8_t **l_117[3][7] = {{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118}};
        struct S0 *l_130 = &p_790->g_131;
        int32_t l_166 = 9L;
        int32_t l_167 = 0x47B0F379L;
        int32_t l_168[8][6][5] = {{{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L}},{{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L}},{{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L}},{{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L}},{{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L}},{{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L}},{{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L}},{{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L},{(-10L),(-7L),0x5F94D2B4L,0x13AF9867L,0x0AA5BD06L}}};
        int16_t l_212 = 0x29F2L;
        uint64_t *l_255 = &p_790->g_122;
        uint16_t l_260 = 4UL;
        uint16_t ***l_278 = &p_790->g_67;
        uint16_t ***l_279 = &p_790->g_67;
        int16_t l_280 = 0x14CBL;
        int i, j, k;
        for (p_53 = 23; (p_53 < (-26)); --p_53)
        { /* block id: 51 */
            uint16_t *l_76 = &p_790->g_5[3][0];
            uint16_t ****l_81 = (void*)0;
            uint16_t ****l_82 = &l_69;
            int32_t l_116 = 0x02ECAC60L;
            uint64_t *l_121 = &p_790->g_122;
            int32_t l_125 = 0x135FA0D3L;
            l_89 = (((((((safe_mul_func_uint8_t_u_u((0x314AL && p_53), (l_76 != l_76))) <= (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((((*l_82) = &p_790->g_67) != (void*)0) , (((((void*)0 != p_790->g_83) & p_53) ^ l_87) != p_790->g_41)), p_53)), p_790->g_39)) || l_88) , 0L)) , p_790->g_5[3][1]) | l_88) ^ p_790->g_5[1][0]) > 0x440822F1L) <= p_790->g_22[1][0]);
            if ((((safe_add_func_uint8_t_u_u(((l_125 = (0x68L || ((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_s((-4L), 9)) < (safe_mul_func_uint8_t_u_u((p_53 != (safe_rshift_func_int16_t_s_s((((void*)0 == p_790->g_110) && (safe_mul_func_uint8_t_u_u(((((*l_121) ^= (((l_116 = (safe_rshift_func_uint16_t_u_u(65530UL, (l_89 = l_59)))) , l_117[0][4]) == l_119)) , p_790->g_123[0][2]) , l_124), l_88))), p_790->g_57))), l_125))) ^ 0x400CL), 5)), 6)), l_125)), 1UL)), 0x6EL)) != 7L))) , p_53), p_790->g_22[1][6])) , (-4L)) >= p_790->g_57))
            { /* block id: 58 */
                uint32_t l_144 = 1UL;
                if ((safe_rshift_func_uint8_t_u_s(p_53, 4)))
                { /* block id: 59 */
                    int64_t l_139 = 0L;
                    for (p_790->g_122 = 0; (p_790->g_122 <= 14); ++p_790->g_122)
                    { /* block id: 62 */
                        (*p_790->g_132) = l_130;
                    }
                    (*p_790->g_70) = (void*)0;
                    l_134 &= p_53;
                    for (l_125 = 0; (l_125 >= 16); l_125++)
                    { /* block id: 69 */
                        int32_t *l_140 = &p_790->g_57;
                        if (p_53)
                            break;
                        (*l_140) &= (safe_lshift_func_int8_t_s_s(l_139, 6));
                    }
                }
                else
                { /* block id: 73 */
                    uint32_t l_145 = 0x994BCA52L;
                    int32_t **l_146 = &p_790->g_71;
                    for (p_790->g_41 = 24; (p_790->g_41 != 28); ++p_790->g_41)
                    { /* block id: 76 */
                        (*p_790->g_143) &= (0x48530E6BL != 4294967295UL);
                        l_144 = p_53;
                        return l_145;
                    }
                    (*l_146) = &l_125;
                    (**l_146) = (safe_lshift_func_uint8_t_u_u((p_790->g_149 == (void*)0), 7));
                }
            }
            else
            { /* block id: 84 */
                if (l_88)
                    break;
            }
        }
        if (l_87)
        { /* block id: 88 */
            int16_t l_152 = 0x516BL;
            int32_t l_163 = 0x3327E3E6L;
            int32_t l_165 = 0L;
            int32_t l_170 = 1L;
            int32_t l_171 = 1L;
            int32_t l_172 = (-4L);
            int32_t l_173 = (-4L);
            int32_t l_174[9] = {0x4F20BE43L,0x4F20BE43L,0x4F20BE43L,0x4F20BE43L,0x4F20BE43L,0x4F20BE43L,0x4F20BE43L,0x4F20BE43L,0x4F20BE43L};
            uint32_t l_187[10] = {0xCD88943AL,0x73710BBAL,0x1E40FFE8L,0x73710BBAL,0xCD88943AL,0xCD88943AL,0x73710BBAL,0x1E40FFE8L,0x73710BBAL,0xCD88943AL};
            int i;
            if ((&p_790->g_56[0][3] == (void*)0))
            { /* block id: 89 */
                uint32_t l_150 = 0xBACBEA55L;
                return l_150;
            }
            else
            { /* block id: 91 */
                int32_t *l_151[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_151[i] = &l_89;
                l_153++;
            }
            for (l_87 = 0; (l_87 <= 2); l_87 += 1)
            { /* block id: 96 */
                int32_t *l_156 = &l_89;
                int32_t *l_157 = &p_790->g_57;
                int32_t *l_158 = &l_134;
                int32_t *l_159 = &l_89;
                int32_t *l_160 = (void*)0;
                int32_t *l_161[7][9] = {{&p_790->g_22[2][3],&p_790->g_22[0][1],&p_790->g_22[2][9],&l_89,&l_134,&p_790->g_22[2][3],&l_89,&p_790->g_22[0][1],&l_89},{&p_790->g_22[2][3],&p_790->g_22[0][1],&p_790->g_22[2][9],&l_89,&l_134,&p_790->g_22[2][3],&l_89,&p_790->g_22[0][1],&l_89},{&p_790->g_22[2][3],&p_790->g_22[0][1],&p_790->g_22[2][9],&l_89,&l_134,&p_790->g_22[2][3],&l_89,&p_790->g_22[0][1],&l_89},{&p_790->g_22[2][3],&p_790->g_22[0][1],&p_790->g_22[2][9],&l_89,&l_134,&p_790->g_22[2][3],&l_89,&p_790->g_22[0][1],&l_89},{&p_790->g_22[2][3],&p_790->g_22[0][1],&p_790->g_22[2][9],&l_89,&l_134,&p_790->g_22[2][3],&l_89,&p_790->g_22[0][1],&l_89},{&p_790->g_22[2][3],&p_790->g_22[0][1],&p_790->g_22[2][9],&l_89,&l_134,&p_790->g_22[2][3],&l_89,&p_790->g_22[0][1],&l_89},{&p_790->g_22[2][3],&p_790->g_22[0][1],&p_790->g_22[2][9],&l_89,&l_134,&p_790->g_22[2][3],&l_89,&p_790->g_22[0][1],&l_89}};
                int i, j;
                l_175--;
                for (l_171 = 5; (l_171 >= 0); l_171 -= 1)
                { /* block id: 100 */
                    int32_t l_183 = 0x591AD4FCL;
                    int32_t l_184 = 0x59207944L;
                    int32_t l_185 = (-1L);
                    int32_t l_186 = 8L;
                    int i, j;
                    p_790->g_56[l_87][(l_171 + 3)] = &l_168[4][4][2];
                    for (l_88 = 0; (l_88 <= 2); l_88 += 1)
                    { /* block id: 104 */
                        int32_t *l_178 = &p_790->g_22[0][1];
                        int32_t * volatile *l_179 = (void*)0;
                        int32_t **l_180 = (void*)0;
                        int32_t **l_181 = (void*)0;
                        int32_t **l_182 = &l_158;
                        int i, j;
                        p_790->g_56[l_87][(l_87 + 6)] = l_178;
                        p_790->g_143 = p_790->g_56[l_87][(l_171 + 3)];
                        (*l_182) = (void*)0;
                        l_187[5]--;
                    }
                    (*l_156) = (-6L);
                }
            }
        }
        else
        { /* block id: 113 */
            int32_t **l_190[2];
            uint16_t *l_214 = &l_153;
            uint64_t *l_244 = &p_790->g_122;
            int64_t l_266[4][10] = {{0x7FADE429BEF84BF2L,0L,1L,0L,0L,0L,1L,0L,0x7FADE429BEF84BF2L,0x7FADE429BEF84BF2L},{0x7FADE429BEF84BF2L,0L,1L,0L,0L,0L,1L,0L,0x7FADE429BEF84BF2L,0x7FADE429BEF84BF2L},{0x7FADE429BEF84BF2L,0L,1L,0L,0L,0L,1L,0L,0x7FADE429BEF84BF2L,0x7FADE429BEF84BF2L},{0x7FADE429BEF84BF2L,0L,1L,0L,0L,0L,1L,0L,0x7FADE429BEF84BF2L,0x7FADE429BEF84BF2L}};
            uint16_t ***l_276[8];
            uint16_t ****l_277[9][3] = {{&l_276[4],&l_276[4],&l_69},{&l_276[4],&l_276[4],&l_69},{&l_276[4],&l_276[4],&l_69},{&l_276[4],&l_276[4],&l_69},{&l_276[4],&l_276[4],&l_69},{&l_276[4],&l_276[4],&l_69},{&l_276[4],&l_276[4],&l_69},{&l_276[4],&l_276[4],&l_69},{&l_276[4],&l_276[4],&l_69}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_190[i] = &p_790->g_71;
            for (i = 0; i < 8; i++)
                l_276[i] = &p_790->g_67;
            (*p_790->g_70) = &l_164[0];
            (*l_130) = p_790->g_191;
            for (p_53 = 1; (p_53 >= (-2)); --p_53)
            { /* block id: 118 */
                uint64_t *l_206 = &p_790->g_122;
                int32_t *l_213 = (void*)0;
                int32_t l_220 = 0x585A6EE2L;
                int32_t l_224 = 0x69AABB43L;
                int32_t l_226 = 0x61F5F1F6L;
                int32_t l_227 = 0x3942BDC1L;
                int32_t l_228[4][8][4] = {{{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L}},{{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L}},{{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L}},{{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L},{6L,0x768B99E2L,1L,0x768B99E2L}}};
                int32_t l_256 = (-5L);
                uint8_t *l_262[7][5] = {{&l_175,&p_790->g_38,&l_175,&l_175,&l_175},{&l_175,&p_790->g_38,&l_175,&l_175,&l_175},{&l_175,&p_790->g_38,&l_175,&l_175,&l_175},{&l_175,&p_790->g_38,&l_175,&l_175,&l_175},{&l_175,&p_790->g_38,&l_175,&l_175,&l_175},{&l_175,&p_790->g_38,&l_175,&l_175,&l_175},{&l_175,&p_790->g_38,&l_175,&l_175,&l_175}};
                int i, j, k;
                (1 + 1);
            }
            l_166 ^= ((*p_790->g_71) = (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((1L ^ ((l_278 = l_276[4]) == l_279)), (l_280 , p_53))), p_53)) || (&l_166 == (*p_790->g_70))), 7)), (250UL & 0xC2L))));
        }
        for (p_790->g_216 = 0; (p_790->g_216 < 41); p_790->g_216 = safe_add_func_int8_t_s_s(p_790->g_216, 5))
        { /* block id: 157 */
            return l_283[2];
        }
    }
    else
    { /* block id: 160 */
        int32_t l_284 = 0x2F59C020L;
        int32_t *l_285 = (void*)0;
        int32_t *l_286 = &l_164[1];
        int32_t l_287 = 0L;
        int32_t l_288 = 0x79671815L;
        int32_t *l_289[2];
        int i;
        for (i = 0; i < 2; i++)
            l_289[i] = &l_288;
        ++p_790->g_290[1];
    }
    return l_175;
}


/* ------------------------------------------ */
/* 
 * reads : p_790->g_67
 * writes:
 */
uint16_t ** func_60(uint16_t * p_61, uint8_t  p_62, struct S2 * p_790)
{ /* block id: 43 */
    int32_t *l_63[4][8][4] = {{{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41}},{{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41}},{{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41}},{{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41},{&p_790->g_41,&p_790->g_41,&p_790->g_41,&p_790->g_41}}};
    int64_t l_64 = 0x4F14D92DB271CF4EL;
    uint16_t *l_66 = (void*)0;
    uint16_t **l_65 = &l_66;
    int i, j, k;
    l_64 &= 0x1E9056FFL;
    return p_790->g_67;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_791;
    struct S2* p_790 = &c_791;
    struct S2 c_792 = {
        {{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL}}, // p_790->g_5
        {{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}}, // p_790->g_22
        0xDDBC75B1L, // p_790->g_36
        0x8EL, // p_790->g_38
        0x340437E1L, // p_790->g_39
        0x0BA2C160L, // p_790->g_40
        (-7L), // p_790->g_41
        0x2B93B572L, // p_790->g_57
        {{&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57},{&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57},{&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57,&p_790->g_57}}, // p_790->g_56
        (void*)0, // p_790->g_68
        &p_790->g_68, // p_790->g_67
        &p_790->g_41, // p_790->g_71
        &p_790->g_71, // p_790->g_70
        (void*)0, // p_790->g_86
        &p_790->g_86, // p_790->g_85
        &p_790->g_85, // p_790->g_84
        &p_790->g_84, // p_790->g_83
        &p_790->g_86, // p_790->g_111
        &p_790->g_111, // p_790->g_110
        18446744073709551611UL, // p_790->g_122
        {{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}}}, // p_790->g_123
        {0x3FL,255UL,18446744073709551607UL,0x4F9E29D7L,255UL}, // p_790->g_131
        {&p_790->g_131,&p_790->g_131,&p_790->g_131,&p_790->g_131,&p_790->g_131,&p_790->g_131,&p_790->g_131,&p_790->g_131}, // p_790->g_133
        &p_790->g_133[2], // p_790->g_132
        &p_790->g_57, // p_790->g_143
        &p_790->g_86, // p_790->g_149
        {1L,1UL,0xED34DC581687608FL,0x0EDAC9BBL,0xE5L}, // p_790->g_191
        {2L}, // p_790->g_196
        65531UL, // p_790->g_211
        1UL, // p_790->g_216
        {0x0AL,249UL,18446744073709551608UL,2UL,0x2BL}, // p_790->g_238
        {0x58L,0x7EL,0x96B92F2EC4FD2FFAL,4294967294UL,254UL}, // p_790->g_239
        {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}, // p_790->g_290
        0x7E9CL, // p_790->g_330
        &p_790->g_71, // p_790->g_332
        &p_790->g_290[1], // p_790->g_337
        &p_790->g_337, // p_790->g_336
        &p_790->g_336, // p_790->g_335
        {6L}, // p_790->g_348
        {0x17L,248UL,1UL,4294967295UL,255UL}, // p_790->g_394
        0UL, // p_790->g_398
        &p_790->g_71, // p_790->g_401
        {{{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}}},{{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}}},{{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}}},{{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}}},{{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}},{{0x37F2EA35F2C107C7L},{0L}}}}, // p_790->g_417
        {0x54L,0UL,1UL,0xB807CDF8L,0UL}, // p_790->g_418
        0x85F137C8L, // p_790->g_477
        {-5L,252UL,0x051B371DA6459C89L,4294967294UL,0x67L}, // p_790->g_488
        {0x65L,5UL,0x6783CF189FCC8E9EL,0x2A560DCBL,0x38L}, // p_790->g_489
        &p_790->g_71, // p_790->g_490
        {0x64L,0xC8L,0x60DCE42435BD90F9L,1UL,0xB9L}, // p_790->g_508
        (void*)0, // p_790->g_520
        &p_790->g_520, // p_790->g_519
        {1L,0UL,0x0ADB4B9DD9FA77D6L,0x6C60BABBL,5UL}, // p_790->g_523
        {0x2126ACAB1ABC84E6L}, // p_790->g_534
        18446744073709551615UL, // p_790->g_538
        {{{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL}},{{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL}},{{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL}},{{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL}},{{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL}},{{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL}},{{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL}},{{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL}},{{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL},{0x089B8C69L,0x0318C3DCL,0xA24361F3L,1UL,0x0318C3DCL,1UL}}}, // p_790->g_544
        0x42A1ED7AL, // p_790->g_572
        {&p_790->g_123[0][2],&p_790->g_123[0][2],&p_790->g_123[0][2],&p_790->g_123[0][2],&p_790->g_123[0][2],&p_790->g_123[0][2],&p_790->g_123[0][2],&p_790->g_123[0][2],&p_790->g_123[0][2],&p_790->g_123[0][2]}, // p_790->g_583
        {{{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0}},{{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0}},{{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0}},{{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0}},{{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0}},{{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0}},{{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0}},{{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0}},{{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0},{&p_790->g_583[4],(void*)0}}}, // p_790->g_582
        (void*)0, // p_790->g_595
        {0x24L,0x1EL,18446744073709551615UL,0x12CAC172L,255UL}, // p_790->g_602
        {1L}, // p_790->g_641
        0x7EE9L, // p_790->g_654
        {0x17L,255UL,0x3A410B9C659A444FL,4294967295UL,0x59L}, // p_790->g_677
        {{2L,(-7L),0x4C7AL,(-7L),2L},{2L,(-7L),0x4C7AL,(-7L),2L},{2L,(-7L),0x4C7AL,(-7L),2L},{2L,(-7L),0x4C7AL,(-7L),2L},{2L,(-7L),0x4C7AL,(-7L),2L},{2L,(-7L),0x4C7AL,(-7L),2L},{2L,(-7L),0x4C7AL,(-7L),2L},{2L,(-7L),0x4C7AL,(-7L),2L}}, // p_790->g_681
        {{-1L,0UL,0x95EC6BB3CE58422BL,4294967287UL,0xFDL},{-1L,0UL,0x95EC6BB3CE58422BL,4294967287UL,0xFDL},{-1L,0UL,0x95EC6BB3CE58422BL,4294967287UL,0xFDL},{-1L,0UL,0x95EC6BB3CE58422BL,4294967287UL,0xFDL},{-1L,0UL,0x95EC6BB3CE58422BL,4294967287UL,0xFDL},{-1L,0UL,0x95EC6BB3CE58422BL,4294967287UL,0xFDL},{-1L,0UL,0x95EC6BB3CE58422BL,4294967287UL,0xFDL},{-1L,0UL,0x95EC6BB3CE58422BL,4294967287UL,0xFDL},{-1L,0UL,0x95EC6BB3CE58422BL,4294967287UL,0xFDL}}, // p_790->g_683
        {-1L,0x58L,8UL,4294967295UL,0xE3L}, // p_790->g_684
        &p_790->g_418, // p_790->g_685
        0x78L, // p_790->g_690
        0x54L, // p_790->g_701
        {0x26L,255UL,0x26DC01D5968D1FDFL,3UL,0x81L}, // p_790->g_709
        (void*)0, // p_790->g_713
        5UL, // p_790->g_727
        0x16459A34L, // p_790->g_731
        {(void*)0,(void*)0}, // p_790->g_745
        0x6F34L, // p_790->g_763
        {-1L}, // p_790->g_777
        &p_790->g_71, // p_790->g_779
        0L, // p_790->g_784
        {0x32L,0x98L,0xCB9B9F683F962FA0L,0x26259BF7L,0UL}, // p_790->g_785
        0L, // p_790->g_789
    };
    c_791 = c_792;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_790);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_790->g_5[i][j], "p_790->g_5[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_790->g_22[i][j], "p_790->g_22[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_790->g_36, "p_790->g_36", print_hash_value);
    transparent_crc(p_790->g_38, "p_790->g_38", print_hash_value);
    transparent_crc(p_790->g_39, "p_790->g_39", print_hash_value);
    transparent_crc(p_790->g_40, "p_790->g_40", print_hash_value);
    transparent_crc(p_790->g_41, "p_790->g_41", print_hash_value);
    transparent_crc(p_790->g_57, "p_790->g_57", print_hash_value);
    transparent_crc(p_790->g_122, "p_790->g_122", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_790->g_123[i][j].f0, "p_790->g_123[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_790->g_131.f0, "p_790->g_131.f0", print_hash_value);
    transparent_crc(p_790->g_131.f1, "p_790->g_131.f1", print_hash_value);
    transparent_crc(p_790->g_131.f2, "p_790->g_131.f2", print_hash_value);
    transparent_crc(p_790->g_131.f3, "p_790->g_131.f3", print_hash_value);
    transparent_crc(p_790->g_131.f4, "p_790->g_131.f4", print_hash_value);
    transparent_crc(p_790->g_191.f0, "p_790->g_191.f0", print_hash_value);
    transparent_crc(p_790->g_191.f1, "p_790->g_191.f1", print_hash_value);
    transparent_crc(p_790->g_191.f2, "p_790->g_191.f2", print_hash_value);
    transparent_crc(p_790->g_191.f3, "p_790->g_191.f3", print_hash_value);
    transparent_crc(p_790->g_191.f4, "p_790->g_191.f4", print_hash_value);
    transparent_crc(p_790->g_196.f0, "p_790->g_196.f0", print_hash_value);
    transparent_crc(p_790->g_211, "p_790->g_211", print_hash_value);
    transparent_crc(p_790->g_216, "p_790->g_216", print_hash_value);
    transparent_crc(p_790->g_238.f0, "p_790->g_238.f0", print_hash_value);
    transparent_crc(p_790->g_238.f1, "p_790->g_238.f1", print_hash_value);
    transparent_crc(p_790->g_238.f2, "p_790->g_238.f2", print_hash_value);
    transparent_crc(p_790->g_238.f3, "p_790->g_238.f3", print_hash_value);
    transparent_crc(p_790->g_238.f4, "p_790->g_238.f4", print_hash_value);
    transparent_crc(p_790->g_239.f0, "p_790->g_239.f0", print_hash_value);
    transparent_crc(p_790->g_239.f1, "p_790->g_239.f1", print_hash_value);
    transparent_crc(p_790->g_239.f2, "p_790->g_239.f2", print_hash_value);
    transparent_crc(p_790->g_239.f3, "p_790->g_239.f3", print_hash_value);
    transparent_crc(p_790->g_239.f4, "p_790->g_239.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_790->g_290[i], "p_790->g_290[i]", print_hash_value);

    }
    transparent_crc(p_790->g_330, "p_790->g_330", print_hash_value);
    transparent_crc(p_790->g_348.f0, "p_790->g_348.f0", print_hash_value);
    transparent_crc(p_790->g_394.f0, "p_790->g_394.f0", print_hash_value);
    transparent_crc(p_790->g_394.f1, "p_790->g_394.f1", print_hash_value);
    transparent_crc(p_790->g_394.f2, "p_790->g_394.f2", print_hash_value);
    transparent_crc(p_790->g_394.f3, "p_790->g_394.f3", print_hash_value);
    transparent_crc(p_790->g_394.f4, "p_790->g_394.f4", print_hash_value);
    transparent_crc(p_790->g_398, "p_790->g_398", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_790->g_417[i][j][k].f0, "p_790->g_417[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_790->g_418.f0, "p_790->g_418.f0", print_hash_value);
    transparent_crc(p_790->g_418.f1, "p_790->g_418.f1", print_hash_value);
    transparent_crc(p_790->g_418.f2, "p_790->g_418.f2", print_hash_value);
    transparent_crc(p_790->g_418.f3, "p_790->g_418.f3", print_hash_value);
    transparent_crc(p_790->g_418.f4, "p_790->g_418.f4", print_hash_value);
    transparent_crc(p_790->g_477, "p_790->g_477", print_hash_value);
    transparent_crc(p_790->g_488.f0, "p_790->g_488.f0", print_hash_value);
    transparent_crc(p_790->g_488.f1, "p_790->g_488.f1", print_hash_value);
    transparent_crc(p_790->g_488.f2, "p_790->g_488.f2", print_hash_value);
    transparent_crc(p_790->g_488.f3, "p_790->g_488.f3", print_hash_value);
    transparent_crc(p_790->g_488.f4, "p_790->g_488.f4", print_hash_value);
    transparent_crc(p_790->g_489.f0, "p_790->g_489.f0", print_hash_value);
    transparent_crc(p_790->g_489.f1, "p_790->g_489.f1", print_hash_value);
    transparent_crc(p_790->g_489.f2, "p_790->g_489.f2", print_hash_value);
    transparent_crc(p_790->g_489.f3, "p_790->g_489.f3", print_hash_value);
    transparent_crc(p_790->g_489.f4, "p_790->g_489.f4", print_hash_value);
    transparent_crc(p_790->g_508.f0, "p_790->g_508.f0", print_hash_value);
    transparent_crc(p_790->g_508.f1, "p_790->g_508.f1", print_hash_value);
    transparent_crc(p_790->g_508.f2, "p_790->g_508.f2", print_hash_value);
    transparent_crc(p_790->g_508.f3, "p_790->g_508.f3", print_hash_value);
    transparent_crc(p_790->g_508.f4, "p_790->g_508.f4", print_hash_value);
    transparent_crc(p_790->g_523.f0, "p_790->g_523.f0", print_hash_value);
    transparent_crc(p_790->g_523.f1, "p_790->g_523.f1", print_hash_value);
    transparent_crc(p_790->g_523.f2, "p_790->g_523.f2", print_hash_value);
    transparent_crc(p_790->g_523.f3, "p_790->g_523.f3", print_hash_value);
    transparent_crc(p_790->g_523.f4, "p_790->g_523.f4", print_hash_value);
    transparent_crc(p_790->g_534.f0, "p_790->g_534.f0", print_hash_value);
    transparent_crc(p_790->g_538, "p_790->g_538", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_790->g_544[i][j][k], "p_790->g_544[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_790->g_572, "p_790->g_572", print_hash_value);
    transparent_crc(p_790->g_602.f0, "p_790->g_602.f0", print_hash_value);
    transparent_crc(p_790->g_602.f1, "p_790->g_602.f1", print_hash_value);
    transparent_crc(p_790->g_602.f2, "p_790->g_602.f2", print_hash_value);
    transparent_crc(p_790->g_602.f3, "p_790->g_602.f3", print_hash_value);
    transparent_crc(p_790->g_602.f4, "p_790->g_602.f4", print_hash_value);
    transparent_crc(p_790->g_641.f0, "p_790->g_641.f0", print_hash_value);
    transparent_crc(p_790->g_654, "p_790->g_654", print_hash_value);
    transparent_crc(p_790->g_677.f0, "p_790->g_677.f0", print_hash_value);
    transparent_crc(p_790->g_677.f1, "p_790->g_677.f1", print_hash_value);
    transparent_crc(p_790->g_677.f2, "p_790->g_677.f2", print_hash_value);
    transparent_crc(p_790->g_677.f3, "p_790->g_677.f3", print_hash_value);
    transparent_crc(p_790->g_677.f4, "p_790->g_677.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_790->g_681[i][j], "p_790->g_681[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_790->g_683[i].f0, "p_790->g_683[i].f0", print_hash_value);
        transparent_crc(p_790->g_683[i].f1, "p_790->g_683[i].f1", print_hash_value);
        transparent_crc(p_790->g_683[i].f2, "p_790->g_683[i].f2", print_hash_value);
        transparent_crc(p_790->g_683[i].f3, "p_790->g_683[i].f3", print_hash_value);
        transparent_crc(p_790->g_683[i].f4, "p_790->g_683[i].f4", print_hash_value);

    }
    transparent_crc(p_790->g_684.f0, "p_790->g_684.f0", print_hash_value);
    transparent_crc(p_790->g_684.f1, "p_790->g_684.f1", print_hash_value);
    transparent_crc(p_790->g_684.f2, "p_790->g_684.f2", print_hash_value);
    transparent_crc(p_790->g_684.f3, "p_790->g_684.f3", print_hash_value);
    transparent_crc(p_790->g_684.f4, "p_790->g_684.f4", print_hash_value);
    transparent_crc(p_790->g_690, "p_790->g_690", print_hash_value);
    transparent_crc(p_790->g_701, "p_790->g_701", print_hash_value);
    transparent_crc(p_790->g_709.f0, "p_790->g_709.f0", print_hash_value);
    transparent_crc(p_790->g_709.f1, "p_790->g_709.f1", print_hash_value);
    transparent_crc(p_790->g_709.f2, "p_790->g_709.f2", print_hash_value);
    transparent_crc(p_790->g_709.f3, "p_790->g_709.f3", print_hash_value);
    transparent_crc(p_790->g_709.f4, "p_790->g_709.f4", print_hash_value);
    transparent_crc(p_790->g_727, "p_790->g_727", print_hash_value);
    transparent_crc(p_790->g_731, "p_790->g_731", print_hash_value);
    transparent_crc(p_790->g_763, "p_790->g_763", print_hash_value);
    transparent_crc(p_790->g_777.f0, "p_790->g_777.f0", print_hash_value);
    transparent_crc(p_790->g_784, "p_790->g_784", print_hash_value);
    transparent_crc(p_790->g_785.f0, "p_790->g_785.f0", print_hash_value);
    transparent_crc(p_790->g_785.f1, "p_790->g_785.f1", print_hash_value);
    transparent_crc(p_790->g_785.f2, "p_790->g_785.f2", print_hash_value);
    transparent_crc(p_790->g_785.f3, "p_790->g_785.f3", print_hash_value);
    transparent_crc(p_790->g_785.f4, "p_790->g_785.f4", print_hash_value);
    transparent_crc(p_790->g_789, "p_790->g_789", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
