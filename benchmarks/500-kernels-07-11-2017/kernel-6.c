// -g 81,18,4 -l 1,6,1
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


// Seed: 4115996241

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint64_t  f0;
   volatile int64_t  f1;
   uint64_t  f2;
   uint64_t  f3;
};

struct S1 {
    int8_t g_3;
    int16_t g_23;
    volatile int32_t g_32;
    volatile int32_t * volatile g_31;
    int32_t g_41[10][4];
    int32_t *g_40;
    int64_t g_97;
    int8_t g_98;
    uint32_t g_122;
    int8_t g_130;
    uint16_t g_171;
    uint32_t g_198[5];
    int8_t g_230[1][6][8];
    int64_t g_235;
    uint32_t g_240;
    uint8_t g_247;
    uint64_t g_263;
    uint64_t *g_262[1][8][10];
    uint8_t *g_269;
    uint8_t **g_268;
    int64_t g_272[7][2];
    uint8_t g_289[9][8][3];
    union U0 g_292;
    union U0 g_293;
    union U0 g_294;
    union U0 g_295[6][7];
    union U0 g_296[2];
    union U0 g_297;
    union U0 g_298;
    union U0 g_299[5][2];
    union U0 g_300;
    union U0 g_301;
    union U0 g_302;
    int16_t *g_346;
    int16_t **g_345;
    volatile union U0 g_358;
    volatile union U0 *g_357[2];
    uint8_t g_433[10];
    uint32_t g_438;
    uint16_t g_467;
    int16_t **g_617;
    volatile int64_t g_639;
    volatile int64_t *g_638;
    volatile int64_t **g_637;
    union U0 g_679;
    int32_t g_684;
    union U0 g_728[8][3][2];
    uint8_t g_747;
    volatile int16_t g_774;
    volatile int16_t *g_773;
    volatile int16_t **g_772;
    volatile int16_t ***g_771[4][7][2];
    volatile int16_t ****g_770;
    int32_t g_777;
    volatile uint16_t g_787[1];
    volatile uint16_t * volatile g_786;
    int16_t g_801;
    int32_t ** volatile g_802;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S1 * p_841);
uint8_t  func_6(uint16_t  p_7, int64_t  p_8, int8_t  p_9, int16_t  p_10, uint64_t  p_11, struct S1 * p_841);
int32_t * func_24(int32_t  p_25, uint8_t  p_26, int64_t  p_27, struct S1 * p_841);
int16_t * func_28(int64_t  p_29, int16_t  p_30, struct S1 * p_841);
uint16_t  func_46(uint64_t  p_47, int32_t * p_48, int16_t * p_49, int32_t * p_50, struct S1 * p_841);
int8_t  func_53(int16_t  p_54, int32_t * p_55, int8_t  p_56, int16_t * p_57, int32_t  p_58, struct S1 * p_841);
int32_t * func_60(int32_t  p_61, uint32_t  p_62, int32_t * p_63, struct S1 * p_841);
int32_t  func_76(int16_t * p_77, struct S1 * p_841);
int16_t * func_78(int8_t  p_79, int32_t  p_80, struct S1 * p_841);
uint16_t  func_81(int16_t * p_82, uint32_t  p_83, int32_t  p_84, int64_t  p_85, struct S1 * p_841);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_841->g_3 p_841->g_23 p_841->g_31 p_841->g_40 p_841->g_32 p_841->g_41 p_841->g_345 p_841->g_346 p_841->g_684 p_841->g_617 p_841->g_130 p_841->g_438 p_841->g_122 p_841->g_198 p_841->g_293.f0 p_841->g_358.f0 p_841->g_292.f2 p_841->g_728 p_841->g_747 p_841->g_268 p_841->g_269 p_841->g_247 p_841->g_299.f0 p_841->g_770 p_841->g_433 p_841->g_777 p_841->g_98 p_841->g_272 p_841->g_786 p_841->g_787 p_841->g_235 p_841->g_801 p_841->g_802 p_841->g_289 p_841->g_774 p_841->g_772 p_841->g_773
 * writes: p_841->g_23 p_841->g_684 p_841->g_40 p_841->g_122 p_841->g_198 p_841->g_438 p_841->g_41 p_841->g_292.f2 p_841->g_747 p_841->g_292.f3 p_841->g_777 p_841->g_98 p_841->g_467 p_841->g_235 p_841->g_801 p_841->g_346 p_841->g_32
 */
int16_t  func_1(struct S1 * p_841)
{ /* block id: 4 */
    int32_t l_2 = 0x38EE41B6L;
    int16_t *l_22 = &p_841->g_23;
    uint64_t l_831 = 0xE753CBDCD9B22EC1L;
    int32_t *l_834 = &p_841->g_777;
    uint32_t l_840[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int i;
    if ((l_831 |= (((l_2 || p_841->g_3) || p_841->g_3) ^ ((l_2 != (safe_rshift_func_uint8_t_u_u(p_841->g_3, func_6(l_2, (p_841->g_3 , ((safe_lshift_func_int16_t_s_s(0L, (((safe_mod_func_uint16_t_u_u((((((((*l_22) ^= (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((0x0BL <= l_2), (-6L))), 0)) <= p_841->g_3), l_2))) , p_841->g_23) != 0UL) != p_841->g_3) , l_2) & 0x0BCAL), 5UL)) , 65529UL) == l_2))) | p_841->g_3)), l_2, l_2, p_841->g_3, p_841)))) >= l_2))))
    { /* block id: 363 */
        int32_t l_832[7] = {1L,(-8L),1L,1L,(-8L),1L,1L};
        int i;
        return l_832[5];
    }
    else
    { /* block id: 365 */
        int32_t **l_833[3][10] = {{&p_841->g_40,&p_841->g_40,&p_841->g_40,(void*)0,(void*)0,(void*)0,&p_841->g_40,&p_841->g_40,&p_841->g_40,&p_841->g_40},{&p_841->g_40,&p_841->g_40,&p_841->g_40,(void*)0,(void*)0,(void*)0,&p_841->g_40,&p_841->g_40,&p_841->g_40,&p_841->g_40},{&p_841->g_40,&p_841->g_40,&p_841->g_40,(void*)0,(void*)0,(void*)0,&p_841->g_40,&p_841->g_40,&p_841->g_40,&p_841->g_40}};
        uint32_t *l_835 = &p_841->g_198[1];
        int16_t ***l_837 = (void*)0;
        int16_t ****l_836 = &l_837;
        int16_t *****l_838 = (void*)0;
        int16_t *****l_839 = &l_836;
        int i, j;
        l_834 = (*p_841->g_802);
        (*p_841->g_31) = ((((*l_835) &= 4UL) < ((*p_841->g_40) = ((((!(*l_834)) , (*l_834)) || (&p_841->g_771[2][2][1] != ((*l_839) = l_836))) , (*l_834)))) == (l_840[1] , 0xE0C5L));
        (*p_841->g_802) = (*p_841->g_802);
    }
    return (**p_841->g_772);
}


/* ------------------------------------------ */
/* 
 * reads : p_841->g_23 p_841->g_31 p_841->g_40 p_841->g_32 p_841->g_3 p_841->g_41 p_841->g_345 p_841->g_346 p_841->g_684 p_841->g_617 p_841->g_130 p_841->g_438 p_841->g_122 p_841->g_198 p_841->g_293.f0 p_841->g_358.f0 p_841->g_292.f2 p_841->g_728 p_841->g_747 p_841->g_268 p_841->g_269 p_841->g_247 p_841->g_299.f0 p_841->g_770 p_841->g_433 p_841->g_777 p_841->g_98 p_841->g_272 p_841->g_786 p_841->g_787 p_841->g_235 p_841->g_801 p_841->g_802 p_841->g_289 p_841->g_774
 * writes: p_841->g_684 p_841->g_40 p_841->g_122 p_841->g_198 p_841->g_438 p_841->g_41 p_841->g_292.f2 p_841->g_747 p_841->g_292.f3 p_841->g_777 p_841->g_98 p_841->g_467 p_841->g_235 p_841->g_801 p_841->g_346
 */
uint8_t  func_6(uint16_t  p_7, int64_t  p_8, int8_t  p_9, int16_t  p_10, uint64_t  p_11, struct S1 * p_841)
{ /* block id: 6 */
    uint8_t l_37 = 0xC0L;
    int32_t **l_805 = &p_841->g_40;
    int64_t l_814[3][4][9] = {{{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L},{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L},{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L},{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L}},{{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L},{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L},{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L},{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L}},{{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L},{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L},{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L},{0L,(-1L),0L,0x466A7A3F2F312316L,(-1L),0x466A7A3F2F312316L,0L,(-1L),0L}}};
    int i, j, k;
    (*l_805) = func_24(p_841->g_23, ((((*p_841->g_617) = func_28((((p_841->g_31 != (void*)0) ^ ((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_37, l_37)), (safe_add_func_uint8_t_u_u(l_37, ((void*)0 == p_841->g_40))))) && (p_9 || l_37))) != l_37), p_10, p_841)) != &p_10) != l_37), p_841->g_130, p_841);
    (*l_805) = (*l_805);
    p_841->g_777 ^= (((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((l_814[2][2][2] , p_841->g_289[8][1][1]), p_841->g_272[4][1])) != (((safe_sub_func_int16_t_s_s((**l_805), ((0x09ABL != (safe_mod_func_uint64_t_u_u(((**l_805) && (p_9 == (safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((0x022DC41FL | ((**l_805) != 0x2BD9L)), 0x71L)) != 0x760C39A56B25A742L), p_841->g_774)), p_841->g_41[1][0])) | 0x997383FCL), (**l_805))), (**l_805))))), 18446744073709551608UL))) == p_10))) > (**l_805)) & (*p_841->g_40))), 65529UL)), p_841->g_801)), p_10)) > (**l_805)) > p_841->g_247);
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_841->g_40 p_841->g_684
 * writes: p_841->g_684
 */
int32_t * func_24(int32_t  p_25, uint8_t  p_26, int64_t  p_27, struct S1 * p_841)
{ /* block id: 355 */
    int32_t *l_804 = &p_841->g_684;
    (*p_841->g_40) &= 0x689C1AF0L;
    return l_804;
}


/* ------------------------------------------ */
/* 
 * reads : p_841->g_23 p_841->g_32 p_841->g_3 p_841->g_41 p_841->g_345 p_841->g_346 p_841->g_684 p_841->g_617 p_841->g_130 p_841->g_438 p_841->g_122 p_841->g_198 p_841->g_293.f0 p_841->g_358.f0 p_841->g_40 p_841->g_292.f2 p_841->g_728 p_841->g_747 p_841->g_268 p_841->g_269 p_841->g_247 p_841->g_299.f0 p_841->g_770 p_841->g_433 p_841->g_777 p_841->g_98 p_841->g_272 p_841->g_786 p_841->g_787 p_841->g_235 p_841->g_801 p_841->g_802
 * writes: p_841->g_684 p_841->g_40 p_841->g_122 p_841->g_198 p_841->g_438 p_841->g_41 p_841->g_292.f2 p_841->g_747 p_841->g_292.f3 p_841->g_777 p_841->g_98 p_841->g_467 p_841->g_235 p_841->g_801
 */
int16_t * func_28(int64_t  p_29, int16_t  p_30, struct S1 * p_841)
{ /* block id: 7 */
    int16_t l_51 = (-8L);
    int32_t *l_52[5][5][1] = {{{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]}},{{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]}},{{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]}},{{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]}},{{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]},{&p_841->g_41[1][0]}}};
    uint16_t *l_793 = &p_841->g_467;
    int64_t *l_798 = &p_841->g_235;
    int32_t l_799 = 0x70349706L;
    int16_t *l_800[10];
    int16_t *l_803 = (void*)0;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_800[i] = &p_841->g_801;
    (*p_841->g_802) = ((p_841->g_801 &= ((safe_add_func_uint64_t_u_u(p_841->g_23, ((safe_div_func_int16_t_s_s(1L, ((*l_793) = func_46(l_51, l_52[1][3][0], &l_51, &p_841->g_41[8][2], p_841)))) , (l_799 = ((*l_798) &= (safe_mod_func_uint8_t_u_u((~(safe_sub_func_int64_t_s_s(((*p_841->g_269) & 0x02L), p_30))), 248UL))))))) == 0UL)) , &p_841->g_684);
    return l_803;
}


/* ------------------------------------------ */
/* 
 * reads : p_841->g_32 p_841->g_3 p_841->g_41 p_841->g_345 p_841->g_346 p_841->g_684 p_841->g_617 p_841->g_130 p_841->g_438 p_841->g_122 p_841->g_23 p_841->g_198 p_841->g_293.f0 p_841->g_358.f0 p_841->g_40 p_841->g_292.f2 p_841->g_728 p_841->g_747 p_841->g_268 p_841->g_269 p_841->g_247 p_841->g_299.f0 p_841->g_770 p_841->g_433 p_841->g_777 p_841->g_98 p_841->g_272 p_841->g_786 p_841->g_787
 * writes: p_841->g_684 p_841->g_40 p_841->g_122 p_841->g_198 p_841->g_438 p_841->g_41 p_841->g_292.f2 p_841->g_747 p_841->g_292.f3 p_841->g_777 p_841->g_98
 */
uint16_t  func_46(uint64_t  p_47, int32_t * p_48, int16_t * p_49, int32_t * p_50, struct S1 * p_841)
{ /* block id: 8 */
    int8_t l_59 = 0x44L;
    int16_t *l_75[9][4] = {{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23}};
    int16_t **l_74 = &l_75[8][1];
    int32_t **l_686 = &p_841->g_40;
    int32_t *l_776 = &p_841->g_777;
    uint32_t l_791 = 4294967289UL;
    int i, j;
    (*l_776) &= (func_53(l_59, ((*l_686) = func_60((p_48 == ((*l_686) = ((safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((~(((safe_div_func_uint8_t_u_u(p_47, ((p_841->g_32 | p_841->g_3) ^ (((*l_74) = p_49) != (func_76(func_78((func_81(&p_841->g_23, (p_47 < (p_841->g_3 != p_47)), l_59, l_59, p_841) | l_59), l_59, p_841), p_841) , (*p_841->g_617)))))) >= l_59) != (-1L))) , 0x5DFBL), 7)), l_59)), l_59)) & p_47), p_841->g_130)) , (void*)0))), l_59, &p_841->g_41[1][0], p_841)), p_841->g_438, (*p_841->g_617), (*p_50), p_841) ^ p_841->g_433[4]);
    for (p_841->g_98 = 0; (p_841->g_98 != 20); ++p_841->g_98)
    { /* block id: 342 */
        uint64_t *l_788[10] = {&p_841->g_292.f3,&p_841->g_292.f3,&p_841->g_292.f3,&p_841->g_292.f3,&p_841->g_292.f3,&p_841->g_292.f3,&p_841->g_292.f3,&p_841->g_292.f3,&p_841->g_292.f3,&p_841->g_292.f3};
        int32_t l_792 = 0x0A0AAFB7L;
        int i;
        (*l_776) = (safe_div_func_uint64_t_u_u((p_47 = ((safe_lshift_func_int8_t_s_u(p_841->g_272[3][0], 5)) , ((safe_mul_func_uint8_t_u_u((p_841->g_786 != (void*)0), p_47)) , p_47))), ((0x125253F1L | (*p_50)) || (safe_div_func_uint64_t_u_u(((1L < 1L) || 0L), l_791)))));
        return l_792;
    }
    return (*p_841->g_786);
}


/* ------------------------------------------ */
/* 
 * reads : p_841->g_122 p_841->g_617 p_841->g_346 p_841->g_23 p_841->g_198 p_841->g_293.f0 p_841->g_358.f0 p_841->g_40 p_841->g_41 p_841->g_292.f2 p_841->g_728 p_841->g_747 p_841->g_268 p_841->g_269 p_841->g_247 p_841->g_299.f0 p_841->g_770 p_841->g_3 p_841->g_684
 * writes: p_841->g_122 p_841->g_198 p_841->g_438 p_841->g_41 p_841->g_292.f2 p_841->g_747 p_841->g_292.f3 p_841->g_684
 */
int8_t  func_53(int16_t  p_54, int32_t * p_55, int8_t  p_56, int16_t * p_57, int32_t  p_58, struct S1 * p_841)
{ /* block id: 318 */
    int16_t ***l_730 = &p_841->g_617;
    int16_t ****l_729[3];
    int32_t l_733 = 0x6C694123L;
    int32_t l_734 = 0x7B63F223L;
    int32_t l_735 = 0x529DC465L;
    int32_t l_736 = (-1L);
    int32_t l_737 = 0x098FE757L;
    int32_t l_738 = 0x68214EF2L;
    int32_t l_739 = (-4L);
    int32_t l_740 = 0x7E1794E1L;
    int32_t l_741 = 0x548E3C36L;
    int32_t l_742 = 0L;
    int32_t l_743 = 0x53615D75L;
    int32_t l_744 = 0x4214F9C8L;
    int32_t l_745 = 8L;
    int32_t l_746[5][1][4];
    union U0 *l_759 = &p_841->g_292;
    union U0 **l_758 = &l_759;
    uint64_t *l_760 = &p_841->g_292.f3;
    int32_t *l_775[3][10][8] = {{{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734}},{{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734}},{{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734},{&l_740,&l_739,&l_733,&l_734,&l_746[3][0][2],&l_740,&l_734,&l_734}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_729[i] = &l_730;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_746[i][j][k] = 2L;
        }
    }
    for (p_841->g_122 = 1; (p_841->g_122 == 56); p_841->g_122++)
    { /* block id: 321 */
        uint32_t *l_720 = &p_841->g_438;
        int8_t *l_721 = &p_841->g_230[0][0][2];
        int32_t l_722[6][2][3] = {{{1L,1L,4L},{1L,1L,4L}},{{1L,1L,4L},{1L,1L,4L}},{{1L,1L,4L},{1L,1L,4L}},{{1L,1L,4L},{1L,1L,4L}},{{1L,1L,4L},{1L,1L,4L}},{{1L,1L,4L},{1L,1L,4L}}};
        int i, j, k;
        (*p_841->g_40) |= ((+((void*)0 == &p_841->g_41[9][1])) , (((safe_mul_func_int16_t_s_s((**p_841->g_617), (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((0xF1C5159B95AF5EEDL | (((254UL >= p_58) , (((p_841->g_198[4] &= (safe_rshift_func_uint8_t_u_u(0UL, 5))) <= (p_841->g_293.f0 , ((*l_720) = p_841->g_358.f0))) , l_721)) != &p_841->g_98)), 0x6F0188CFL)), 4)) > 0UL), 1)))) > 0x455718724FA44C92L) <= l_722[2][1][0]));
    }
    for (p_841->g_292.f2 = 0; (p_841->g_292.f2 > 10); p_841->g_292.f2++)
    { /* block id: 328 */
        int16_t l_725 = (-10L);
        int32_t l_731 = 3L;
        int32_t *l_732[7];
        int i;
        for (i = 0; i < 7; i++)
            l_732[i] = &l_731;
        if (l_725)
            break;
        (*p_841->g_40) ^= (safe_add_func_int8_t_s_s((p_841->g_728[0][2][1] , ((l_729[0] = l_729[0]) != &l_730)), (~l_725)));
        --p_841->g_747;
    }
    p_841->g_684 |= (safe_sub_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(p_58, 7)) | (safe_rshift_func_uint8_t_u_u((**p_841->g_268), 7))), 2L)) , ((*l_760) = (l_758 == (void*)0))) | (safe_div_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(p_841->g_299[1][0].f0)) > ((*p_841->g_40) &= (safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((l_736 = (safe_rshift_func_int16_t_s_s((p_841->g_770 == &l_730), 3))) ^ 7L), l_735)), l_746[3][0][2])))), p_841->g_3))), l_746[4][0][3]));
    return p_56;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_60(int32_t  p_61, uint32_t  p_62, int32_t * p_63, struct S1 * p_841)
{ /* block id: 313 */
    int32_t *l_687 = &p_841->g_41[1][0];
    int32_t *l_688 = &p_841->g_684;
    int32_t *l_689 = &p_841->g_41[1][0];
    int32_t *l_690 = &p_841->g_684;
    int32_t *l_691 = &p_841->g_41[1][0];
    int32_t *l_692 = &p_841->g_684;
    int32_t *l_693 = &p_841->g_684;
    int32_t *l_694 = &p_841->g_684;
    int32_t *l_695 = &p_841->g_41[6][0];
    int32_t *l_696[3][8] = {{&p_841->g_41[8][0],&p_841->g_41[2][2],&p_841->g_41[8][0],&p_841->g_41[8][0],&p_841->g_41[2][2],&p_841->g_41[8][0],&p_841->g_41[8][0],&p_841->g_41[2][2]},{&p_841->g_41[8][0],&p_841->g_41[2][2],&p_841->g_41[8][0],&p_841->g_41[8][0],&p_841->g_41[2][2],&p_841->g_41[8][0],&p_841->g_41[8][0],&p_841->g_41[2][2]},{&p_841->g_41[8][0],&p_841->g_41[2][2],&p_841->g_41[8][0],&p_841->g_41[8][0],&p_841->g_41[2][2],&p_841->g_41[8][0],&p_841->g_41[8][0],&p_841->g_41[2][2]}};
    int64_t l_697 = 0x0B18DFA16756FDDDL;
    int64_t l_698 = 9L;
    int32_t l_699[5][3][1] = {{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}}};
    int16_t l_700[2];
    int16_t l_701 = (-8L);
    uint32_t l_702 = 0UL;
    uint64_t l_705 = 0xDF01815E51ABA7F3L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_700[i] = 0L;
    --l_702;
    l_705++;
    return p_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_841->g_41 p_841->g_684
 * writes: p_841->g_684
 */
int32_t  func_76(int16_t * p_77, struct S1 * p_841)
{ /* block id: 307 */
    int32_t *l_681 = &p_841->g_41[1][0];
    int32_t **l_682 = (void*)0;
    int32_t *l_683 = &p_841->g_684;
    uint16_t l_685[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
    int i;
    l_681 = l_681;
    (*l_683) |= (*l_681);
    l_683 = &p_841->g_41[1][0];
    return l_685[7];
}


/* ------------------------------------------ */
/* 
 * reads : p_841->g_345 p_841->g_346
 * writes:
 */
int16_t * func_78(int8_t  p_79, int32_t  p_80, struct S1 * p_841)
{ /* block id: 12 */
    int32_t *l_88 = (void*)0;
    int16_t *l_109[5][5][4] = {{{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23}},{{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23}},{{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23}},{{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23}},{{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23},{&p_841->g_23,&p_841->g_23,&p_841->g_23,&p_841->g_23}}};
    int32_t l_124 = 0x5BF83720L;
    int32_t l_136 = 0x73AEC32AL;
    int32_t l_145[2];
    uint64_t l_157 = 0xC680C6B32BBBA2D2L;
    int64_t *l_190 = &p_841->g_97;
    uint8_t *l_246 = &p_841->g_247;
    int8_t *l_338[6];
    int16_t **l_344 = &l_109[1][4][3];
    int16_t ***l_343[4] = {&l_344,&l_344,&l_344,&l_344};
    uint32_t *l_347 = &p_841->g_198[1];
    int16_t l_437[5];
    int32_t l_509 = 0x7E27BACAL;
    uint32_t l_553 = 0x513C96B6L;
    int16_t l_602 = (-9L);
    uint64_t l_603 = 0x223636F0699AC101L;
    int32_t l_618 = 0L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_145[i] = 0L;
    for (i = 0; i < 6; i++)
        l_338[i] = &p_841->g_98;
    for (i = 0; i < 5; i++)
        l_437[i] = 1L;
    for (p_79 = 0; (p_79 > 10); p_79 = safe_add_func_int16_t_s_s(p_79, 2))
    { /* block id: 15 */
        uint8_t l_95 = 5UL;
        int64_t *l_96[10] = {&p_841->g_97,(void*)0,&p_841->g_97,&p_841->g_97,(void*)0,&p_841->g_97,&p_841->g_97,(void*)0,&p_841->g_97,&p_841->g_97};
        int64_t l_114 = 1L;
        int32_t l_123 = 0x6984B8F1L;
        uint32_t l_125 = 0xD555874CL;
        int32_t l_142 = 0x1ED89A75L;
        int32_t l_143 = 0x437E7265L;
        int32_t l_150[3];
        uint32_t l_325 = 5UL;
        int i;
        for (i = 0; i < 3; i++)
            l_150[i] = (-1L);
        l_88 = &p_841->g_41[9][3];
    }
    return (*p_841->g_345);
}


/* ------------------------------------------ */
/* 
 * reads : p_841->g_41
 * writes:
 */
uint16_t  func_81(int16_t * p_82, uint32_t  p_83, int32_t  p_84, int64_t  p_85, struct S1 * p_841)
{ /* block id: 10 */
    return p_841->g_41[1][0];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_842;
    struct S1* p_841 = &c_842;
    struct S1 c_843 = {
        3L, // p_841->g_3
        (-1L), // p_841->g_23
        9L, // p_841->g_32
        &p_841->g_32, // p_841->g_31
        {{0x491930E8L,(-6L),0L,(-6L)},{0x491930E8L,(-6L),0L,(-6L)},{0x491930E8L,(-6L),0L,(-6L)},{0x491930E8L,(-6L),0L,(-6L)},{0x491930E8L,(-6L),0L,(-6L)},{0x491930E8L,(-6L),0L,(-6L)},{0x491930E8L,(-6L),0L,(-6L)},{0x491930E8L,(-6L),0L,(-6L)},{0x491930E8L,(-6L),0L,(-6L)},{0x491930E8L,(-6L),0L,(-6L)}}, // p_841->g_41
        &p_841->g_41[1][0], // p_841->g_40
        1L, // p_841->g_97
        0x1EL, // p_841->g_98
        0xB8142826L, // p_841->g_122
        0x24L, // p_841->g_130
        65535UL, // p_841->g_171
        {0x64288B94L,0x64288B94L,0x64288B94L,0x64288B94L,0x64288B94L}, // p_841->g_198
        {{{(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L},{(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L},{(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L},{(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L},{(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L},{(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L}}}, // p_841->g_230
        9L, // p_841->g_235
        0UL, // p_841->g_240
        0x0FL, // p_841->g_247
        0xB895AD1BCB1F45C5L, // p_841->g_263
        {{{&p_841->g_263,(void*)0,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,(void*)0,(void*)0,&p_841->g_263},{&p_841->g_263,(void*)0,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,(void*)0,(void*)0,&p_841->g_263},{&p_841->g_263,(void*)0,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,(void*)0,(void*)0,&p_841->g_263},{&p_841->g_263,(void*)0,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,(void*)0,(void*)0,&p_841->g_263},{&p_841->g_263,(void*)0,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,(void*)0,(void*)0,&p_841->g_263},{&p_841->g_263,(void*)0,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,(void*)0,(void*)0,&p_841->g_263},{&p_841->g_263,(void*)0,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,(void*)0,(void*)0,&p_841->g_263},{&p_841->g_263,(void*)0,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,&p_841->g_263,(void*)0,(void*)0,&p_841->g_263}}}, // p_841->g_262
        &p_841->g_247, // p_841->g_269
        &p_841->g_269, // p_841->g_268
        {{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)}}, // p_841->g_272
        {{{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL}},{{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL}},{{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL}},{{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL}},{{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL}},{{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL}},{{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL}},{{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL}},{{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL},{0xA6L,0xA6L,0UL}}}, // p_841->g_289
        {0xF8BC75F3E8FABF89L}, // p_841->g_292
        {0x6F8067EE7919F868L}, // p_841->g_293
        {0UL}, // p_841->g_294
        {{{8UL},{18446744073709551615UL},{18446744073709551615UL},{8UL},{18446744073709551609UL},{0xFEE10322254527A5L},{0xFEE10322254527A5L}},{{8UL},{18446744073709551615UL},{18446744073709551615UL},{8UL},{18446744073709551609UL},{0xFEE10322254527A5L},{0xFEE10322254527A5L}},{{8UL},{18446744073709551615UL},{18446744073709551615UL},{8UL},{18446744073709551609UL},{0xFEE10322254527A5L},{0xFEE10322254527A5L}},{{8UL},{18446744073709551615UL},{18446744073709551615UL},{8UL},{18446744073709551609UL},{0xFEE10322254527A5L},{0xFEE10322254527A5L}},{{8UL},{18446744073709551615UL},{18446744073709551615UL},{8UL},{18446744073709551609UL},{0xFEE10322254527A5L},{0xFEE10322254527A5L}},{{8UL},{18446744073709551615UL},{18446744073709551615UL},{8UL},{18446744073709551609UL},{0xFEE10322254527A5L},{0xFEE10322254527A5L}}}, // p_841->g_295
        {{0x2476AF6C5CB491CEL},{0x2476AF6C5CB491CEL}}, // p_841->g_296
        {0x9BAC4A2D653F4D58L}, // p_841->g_297
        {0x6D608B34C2925DAAL}, // p_841->g_298
        {{{0x11E9C1D866102DC3L},{18446744073709551612UL}},{{0x11E9C1D866102DC3L},{18446744073709551612UL}},{{0x11E9C1D866102DC3L},{18446744073709551612UL}},{{0x11E9C1D866102DC3L},{18446744073709551612UL}},{{0x11E9C1D866102DC3L},{18446744073709551612UL}}}, // p_841->g_299
        {0xF7A21F0574190082L}, // p_841->g_300
        {1UL}, // p_841->g_301
        {0xE8DF24C9ECF58E64L}, // p_841->g_302
        &p_841->g_23, // p_841->g_346
        &p_841->g_346, // p_841->g_345
        {0xFC248CB65ACCE002L}, // p_841->g_358
        {&p_841->g_358,&p_841->g_358}, // p_841->g_357
        {4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL}, // p_841->g_433
        8UL, // p_841->g_438
        0xB086L, // p_841->g_467
        &p_841->g_346, // p_841->g_617
        (-1L), // p_841->g_639
        &p_841->g_639, // p_841->g_638
        &p_841->g_638, // p_841->g_637
        {0xC08B3B9ABC6A6D8AL}, // p_841->g_679
        (-7L), // p_841->g_684
        {{{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}}},{{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}}},{{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}}},{{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}}},{{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}}},{{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}}},{{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}}},{{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}},{{0xF0EE188CEA079476L},{0xA5B8ED2B7672C4A0L}}}}, // p_841->g_728
        0x22L, // p_841->g_747
        (-7L), // p_841->g_774
        &p_841->g_774, // p_841->g_773
        &p_841->g_773, // p_841->g_772
        {{{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772}},{{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772}},{{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772}},{{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772},{&p_841->g_772,&p_841->g_772}}}, // p_841->g_771
        &p_841->g_771[1][3][0], // p_841->g_770
        0x31A6EE7EL, // p_841->g_777
        {0x030DL}, // p_841->g_787
        &p_841->g_787[0], // p_841->g_786
        0x76CAL, // p_841->g_801
        &p_841->g_40, // p_841->g_802
    };
    c_842 = c_843;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_841);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_841->g_3, "p_841->g_3", print_hash_value);
    transparent_crc(p_841->g_23, "p_841->g_23", print_hash_value);
    transparent_crc(p_841->g_32, "p_841->g_32", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_841->g_41[i][j], "p_841->g_41[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_841->g_97, "p_841->g_97", print_hash_value);
    transparent_crc(p_841->g_98, "p_841->g_98", print_hash_value);
    transparent_crc(p_841->g_122, "p_841->g_122", print_hash_value);
    transparent_crc(p_841->g_130, "p_841->g_130", print_hash_value);
    transparent_crc(p_841->g_171, "p_841->g_171", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_841->g_198[i], "p_841->g_198[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_841->g_230[i][j][k], "p_841->g_230[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_841->g_235, "p_841->g_235", print_hash_value);
    transparent_crc(p_841->g_240, "p_841->g_240", print_hash_value);
    transparent_crc(p_841->g_247, "p_841->g_247", print_hash_value);
    transparent_crc(p_841->g_263, "p_841->g_263", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_841->g_272[i][j], "p_841->g_272[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_841->g_289[i][j][k], "p_841->g_289[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_841->g_292.f3, "p_841->g_292.f3", print_hash_value);
    transparent_crc(p_841->g_293.f0, "p_841->g_293.f0", print_hash_value);
    transparent_crc(p_841->g_294.f0, "p_841->g_294.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_841->g_295[i][j].f0, "p_841->g_295[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_841->g_296[i].f0, "p_841->g_296[i].f0", print_hash_value);

    }
    transparent_crc(p_841->g_297.f0, "p_841->g_297.f0", print_hash_value);
    transparent_crc(p_841->g_298.f0, "p_841->g_298.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_841->g_299[i][j].f0, "p_841->g_299[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_841->g_300.f0, "p_841->g_300.f0", print_hash_value);
    transparent_crc(p_841->g_301.f0, "p_841->g_301.f0", print_hash_value);
    transparent_crc(p_841->g_302.f0, "p_841->g_302.f0", print_hash_value);
    transparent_crc(p_841->g_358.f0, "p_841->g_358.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_841->g_433[i], "p_841->g_433[i]", print_hash_value);

    }
    transparent_crc(p_841->g_438, "p_841->g_438", print_hash_value);
    transparent_crc(p_841->g_467, "p_841->g_467", print_hash_value);
    transparent_crc(p_841->g_639, "p_841->g_639", print_hash_value);
    transparent_crc(p_841->g_679.f0, "p_841->g_679.f0", print_hash_value);
    transparent_crc(p_841->g_684, "p_841->g_684", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_841->g_728[i][j][k].f0, "p_841->g_728[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_841->g_747, "p_841->g_747", print_hash_value);
    transparent_crc(p_841->g_774, "p_841->g_774", print_hash_value);
    transparent_crc(p_841->g_777, "p_841->g_777", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_841->g_787[i], "p_841->g_787[i]", print_hash_value);

    }
    transparent_crc(p_841->g_801, "p_841->g_801", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
