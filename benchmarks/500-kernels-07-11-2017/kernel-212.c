// -g 29,34,6 -l 1,17,6
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


// Seed: 1989317217

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint16_t g_2[9];
    volatile int32_t g_3[5];
    int32_t g_4;
    uint8_t g_35[4];
    int32_t g_40;
    int16_t g_43;
    int32_t * volatile g_62;
    int32_t * volatile *g_61;
    int8_t g_74;
    int8_t *g_73;
    int64_t g_85[5][9][3];
    int32_t g_87;
    int32_t g_94;
    uint16_t g_96;
    uint64_t g_115;
    uint64_t g_117;
    uint8_t g_123;
    uint32_t g_125[5];
    int16_t g_128;
    int32_t g_159;
    uint8_t g_197;
    int16_t g_201;
    int32_t *g_204;
    int32_t *g_205[4][10][6];
    uint64_t g_232;
    int32_t *g_348;
    int32_t **g_347;
    int8_t g_351;
    uint32_t g_433[3][5];
    uint32_t g_504[3][6][8];
    int32_t g_555;
    volatile int64_t *g_636[1];
    volatile int64_t * volatile *g_635;
    uint32_t g_661;
    int8_t g_711;
    int32_t g_714;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_722);
int32_t  func_5(uint16_t  p_6, int64_t  p_7, struct S0 * p_722);
uint64_t  func_17(int64_t  p_18, uint64_t  p_19, uint16_t  p_20, int16_t  p_21, struct S0 * p_722);
int64_t  func_22(uint32_t  p_23, uint8_t  p_24, uint64_t  p_25, struct S0 * p_722);
int16_t  func_26(int64_t  p_27, uint32_t  p_28, int32_t  p_29, uint32_t  p_30, uint64_t  p_31, struct S0 * p_722);
int64_t  func_48(uint64_t  p_49, int64_t  p_50, struct S0 * p_722);
int16_t  func_51(int64_t  p_52, int32_t ** p_53, uint64_t  p_54, int32_t  p_55, uint64_t  p_56, struct S0 * p_722);
int32_t * func_69(int8_t * p_70, int16_t * p_71, uint16_t  p_72, struct S0 * p_722);
uint64_t  func_75(int32_t  p_76, int32_t * p_77, int32_t ** p_78, int32_t ** p_79, int8_t * p_80, struct S0 * p_722);
int32_t * func_81(int32_t  p_82, struct S0 * p_722);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_722->g_4 p_722->g_43 p_722->g_204 p_722->g_87 p_722->g_504
 * writes: p_722->g_4 p_722->g_87
 */
int64_t  func_1(struct S0 * p_722)
{ /* block id: 4 */
    int32_t l_14 = 1L;
    int16_t l_708 = 0x1264L;
    uint8_t *l_718[1];
    uint8_t **l_717 = &l_718[0];
    uint8_t **l_720[5][3][4] = {{{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]}},{{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]}},{{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]}},{{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]}},{{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]},{&l_718[0],&l_718[0],&l_718[0],&l_718[0]}}};
    uint8_t ***l_719 = &l_720[1][2][2];
    int32_t l_721[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_718[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_721[i] = (-1L);
    for (p_722->g_4 = 5; (p_722->g_4 >= 0); p_722->g_4 -= 1)
    { /* block id: 7 */
        int32_t l_32[2];
        int64_t *l_709 = &p_722->g_85[1][2][1];
        int8_t *l_710 = &p_722->g_711;
        int32_t *l_713 = &p_722->g_714;
        int i;
        for (i = 0; i < 2; i++)
            l_32[i] = 0x6F37D437L;
        (1 + 1);
    }
    (*p_722->g_204) ^= ((safe_mul_func_uint8_t_u_u((p_722->g_43 & ((l_717 == ((*l_719) = &l_718[0])) >= l_14)), l_708)) && l_721[0]);
    return p_722->g_504[0][2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_722->g_347 p_722->g_348
 * writes: p_722->g_348
 */
int32_t  func_5(uint16_t  p_6, int64_t  p_7, struct S0 * p_722)
{ /* block id: 324 */
    uint16_t l_712[6];
    int i;
    for (i = 0; i < 6; i++)
        l_712[i] = 0xE6A7L;
    (*p_722->g_347) = (*p_722->g_347);
    l_712[4] |= p_7;
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_722->g_123 p_722->g_347 p_722->g_348 p_722->g_74 p_722->g_35 p_722->g_73 p_722->g_85 p_722->g_232 p_722->g_125 p_722->g_351 p_722->g_504
 * writes: p_722->g_123 p_722->g_94 p_722->g_40 p_722->g_35 p_722->g_348
 */
uint64_t  func_17(int64_t  p_18, uint64_t  p_19, uint16_t  p_20, int16_t  p_21, struct S0 * p_722)
{ /* block id: 307 */
    int64_t l_663 = 0L;
    int32_t *l_664[9] = {&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_94};
    uint64_t l_665 = 0xFE9BBF2F9C6D80A0L;
    int16_t l_672 = 8L;
    uint8_t l_673 = 0xAAL;
    uint32_t l_707 = 8UL;
    int i;
    --l_665;
    for (p_722->g_123 = 0; (p_722->g_123 != 2); p_722->g_123 = safe_add_func_int32_t_s_s(p_722->g_123, 4))
    { /* block id: 311 */
        int32_t l_670[3];
        int32_t l_671 = 0L;
        uint8_t *l_680 = &p_722->g_35[3];
        int32_t l_705[3][4][8] = {{{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L},{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L},{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L},{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L}},{{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L},{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L},{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L},{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L}},{{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L},{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L},{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L},{1L,0x7CBCCD5FL,(-9L),0x7CBCCD5FL,1L,(-2L),(-1L),1L}}};
        uint32_t l_706 = 0x10571FEFL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_670[i] = 0L;
        l_671 &= (l_670[1] = (((**p_722->g_347) = 0x71F4EE2FL) == p_722->g_74));
        l_673++;
        l_707 ^= (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((*l_680)--), ((((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(9UL, 7)) | (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(1L, 5)) < ((((safe_add_func_uint16_t_u_u(((void*)0 == l_664[3]), (safe_div_func_int8_t_s_s((*p_722->g_73), p_722->g_85[1][7][0])))) , (+(safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((((p_722->g_232 && (safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((65535UL ^ ((safe_lshift_func_uint16_t_u_u(l_671, p_20)) > p_722->g_232)) && 1L), p_722->g_125[3])) == p_19), 0L))) , p_722->g_351) , p_18) >= 0x05L) , 0xFEL), 0x9FL)), (-6L))))) , l_705[2][2][3]) & l_705[0][0][1])), l_670[1]))), p_722->g_504[2][3][3])) , (*p_722->g_73)) ^ p_19) && (*p_722->g_73)))) <= l_706), 5));
    }
    (*p_722->g_348) = p_19;
    (*p_722->g_347) = l_664[1];
    return p_722->g_351;
}


/* ------------------------------------------ */
/* 
 * reads : p_722->g_347 p_722->g_348 p_722->g_74 p_722->g_117 p_722->g_40 p_722->g_661 p_722->g_73 p_722->g_351
 * writes: p_722->g_96 p_722->g_201 p_722->g_94 p_722->g_40
 */
int64_t  func_22(uint32_t  p_23, uint8_t  p_24, uint64_t  p_25, struct S0 * p_722)
{ /* block id: 302 */
    uint8_t *l_644[8][8] = {{&p_722->g_35[0],&p_722->g_123,&p_722->g_123,&p_722->g_35[0],&p_722->g_35[1],&p_722->g_123,&p_722->g_123,&p_722->g_35[1]},{&p_722->g_35[0],&p_722->g_123,&p_722->g_123,&p_722->g_35[0],&p_722->g_35[1],&p_722->g_123,&p_722->g_123,&p_722->g_35[1]},{&p_722->g_35[0],&p_722->g_123,&p_722->g_123,&p_722->g_35[0],&p_722->g_35[1],&p_722->g_123,&p_722->g_123,&p_722->g_35[1]},{&p_722->g_35[0],&p_722->g_123,&p_722->g_123,&p_722->g_35[0],&p_722->g_35[1],&p_722->g_123,&p_722->g_123,&p_722->g_35[1]},{&p_722->g_35[0],&p_722->g_123,&p_722->g_123,&p_722->g_35[0],&p_722->g_35[1],&p_722->g_123,&p_722->g_123,&p_722->g_35[1]},{&p_722->g_35[0],&p_722->g_123,&p_722->g_123,&p_722->g_35[0],&p_722->g_35[1],&p_722->g_123,&p_722->g_123,&p_722->g_35[1]},{&p_722->g_35[0],&p_722->g_123,&p_722->g_123,&p_722->g_35[0],&p_722->g_35[1],&p_722->g_123,&p_722->g_123,&p_722->g_35[1]},{&p_722->g_35[0],&p_722->g_123,&p_722->g_123,&p_722->g_35[0],&p_722->g_35[1],&p_722->g_123,&p_722->g_123,&p_722->g_35[1]}};
    int32_t l_645 = 0x2731439BL;
    uint16_t *l_646 = (void*)0;
    uint16_t *l_647 = (void*)0;
    uint16_t *l_648 = &p_722->g_96;
    uint8_t l_657[2][2];
    int16_t l_658[7] = {1L,1L,1L,1L,1L,1L,1L};
    uint64_t l_659 = 0x2924430F5BEB9B97L;
    int16_t *l_660 = &p_722->g_201;
    uint8_t l_662 = 0x4EL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_657[i][j] = 0x17L;
    }
    (*p_722->g_348) = (((safe_sub_func_int64_t_s_s(p_24, (!((((l_644[4][6] == (void*)0) , ((*l_660) = ((((void*)0 != (*p_722->g_347)) , ((-6L) | (((*l_648) = l_645) >= (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_24, (((~((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((l_645 ^ p_24) ^ p_722->g_74), p_722->g_117)), 0x0A8285A3L)) , p_722->g_40) , p_25) && 0x30DE780DA37A34BBL)) != l_657[1][1]) && l_658[6]))), l_659))))) && 4UL))) <= p_722->g_661) , l_662)))) == l_658[6]) < (*p_722->g_73));
    return p_722->g_351;
}


/* ------------------------------------------ */
/* 
 * reads : p_722->g_35 p_722->g_4 p_722->g_43 p_722->g_40 p_722->g_61 p_722->g_73 p_722->g_96 p_722->g_74 p_722->g_115 p_722->g_85 p_722->g_125 p_722->g_128 p_722->g_87 p_722->g_123 p_722->g_94 p_722->g_201 p_722->g_232 p_722->g_197 p_722->g_347 p_722->g_348 p_722->g_117 p_722->g_635
 * writes: p_722->g_43 p_722->g_96 p_722->g_115 p_722->g_117 p_722->g_87 p_722->g_123 p_722->g_125 p_722->g_94 p_722->g_85 p_722->g_197 p_722->g_128 p_722->g_201 p_722->g_204 p_722->g_205 p_722->g_159 p_722->g_232 p_722->g_74 p_722->g_348 p_722->g_40 p_722->g_433
 */
int16_t  func_26(int64_t  p_27, uint32_t  p_28, int32_t  p_29, uint32_t  p_30, uint64_t  p_31, struct S0 * p_722)
{ /* block id: 9 */
    int32_t *l_34 = &p_722->g_4;
    int32_t **l_33 = &l_34;
    int32_t *l_39 = &p_722->g_40;
    int8_t l_60 = 1L;
    int8_t **l_573[3][8] = {{&p_722->g_73,&p_722->g_73,&p_722->g_73,(void*)0,(void*)0,(void*)0,&p_722->g_73,&p_722->g_73},{&p_722->g_73,&p_722->g_73,&p_722->g_73,(void*)0,(void*)0,(void*)0,&p_722->g_73,&p_722->g_73},{&p_722->g_73,&p_722->g_73,&p_722->g_73,(void*)0,(void*)0,(void*)0,&p_722->g_73,&p_722->g_73}};
    int32_t l_584 = 0x1E80E018L;
    int32_t l_586 = 3L;
    int16_t l_588 = 0x0B25L;
    int32_t l_589 = 0x4DA66685L;
    int32_t l_590 = 0x5C0F382FL;
    int32_t l_591 = (-7L);
    int32_t l_592[5][1];
    uint8_t *l_601 = &p_722->g_123;
    int32_t *l_616[5];
    int32_t l_622 = 1L;
    uint32_t l_626 = 0x9435D71EL;
    int64_t *l_638 = &p_722->g_85[4][0][1];
    int64_t **l_637 = &l_638;
    uint32_t *l_640 = &p_722->g_433[0][0];
    int32_t l_641 = 0x4CF7B426L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_592[i][j] = 0x5F9CB33CL;
    }
    for (i = 0; i < 5; i++)
        l_616[i] = (void*)0;
    (*l_33) = (void*)0;
    for (p_29 = 0; (p_29 <= 3); p_29 += 1)
    { /* block id: 13 */
        uint32_t l_36 = 0xB017290BL;
        int32_t l_47 = 0x5464CD02L;
        int64_t *l_564 = &p_722->g_85[2][3][0];
        int64_t **l_565 = (void*)0;
        int64_t **l_566 = &l_564;
        int16_t *l_574[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        int32_t l_578 = 0x57690037L;
        int16_t l_585 = 0x555AL;
        int32_t l_587[3];
        int32_t l_593 = 0x7AFDCB74L;
        int64_t l_594 = 7L;
        uint64_t l_623 = 0xDDCEB05D79D8FA2DL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_587[i] = 0x721B04BDL;
        for (p_31 = 0; (p_31 <= 3); p_31 += 1)
        { /* block id: 16 */
            int32_t l_46 = 0x4885C3B3L;
            int16_t *l_59[5] = {&p_722->g_43,&p_722->g_43,&p_722->g_43,&p_722->g_43,&p_722->g_43};
            int8_t *l_63 = (void*)0;
            int8_t *l_64 = (void*)0;
            int8_t *l_65 = &l_60;
            int32_t *l_559 = &l_47;
            int i;
            for (p_28 = 0; (p_28 <= 3); p_28 += 1)
            { /* block id: 19 */
                int i;
                if (p_722->g_35[p_29])
                    break;
                l_36++;
                l_39 = ((*l_33) = (void*)0);
                l_47 ^= ((((((p_722->g_43 ^= (p_722->g_35[p_28] , ((safe_mul_func_int16_t_s_s(0x2BE8L, p_722->g_4)) < (p_27 <= (8UL || p_31))))) >= (p_722->g_40 , (p_722->g_4 , (safe_lshift_func_int16_t_s_u(p_722->g_40, p_31))))) ^ 1UL) >= 0UL) , 0L) , l_46);
            }
            (*l_559) = (p_722->g_35[p_31] <= func_48(p_722->g_35[p_29], ((func_51((safe_mul_func_int16_t_s_s((l_47 &= p_722->g_35[p_29]), (((p_29 , l_60) , ((p_722->g_40 , ((((*l_65) |= (p_722->g_35[2] == ((((p_722->g_40 , p_722->g_61) != (void*)0) ^ 18446744073709551615UL) , 0x0A3212EC3887D173L))) >= p_29) == p_722->g_35[1])) && p_722->g_43)) >= p_722->g_4))), &l_39, p_31, p_722->g_4, p_722->g_40, p_722) >= 0x37FCL) , (-10L)), p_722));
        }
    }
    l_641 = ((p_31 >= p_722->g_232) || ((*l_640) = (((safe_mul_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((p_722->g_635 != l_637), p_31)), ((safe_unary_minus_func_uint8_t_u(p_722->g_232)) || (-1L)))) || ((void*)0 == &p_722->g_115)) > p_31), p_29)) & 0L) & p_29)));
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_722->g_117 p_722->g_232
 * writes: p_722->g_115 p_722->g_43 p_722->g_205 p_722->g_117 p_722->g_40
 */
int64_t  func_48(uint64_t  p_49, int64_t  p_50, struct S0 * p_722)
{ /* block id: 183 */
    int16_t l_403 = 0x396FL;
    int32_t *l_404 = &p_722->g_87;
    int32_t *l_405 = &p_722->g_40;
    int32_t *l_406 = &p_722->g_94;
    int32_t *l_407 = (void*)0;
    int32_t *l_408 = &p_722->g_40;
    int32_t *l_409 = &p_722->g_94;
    int32_t *l_410 = (void*)0;
    int32_t *l_411[6][10][4] = {{{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94}},{{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94}},{{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94}},{{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94}},{{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94}},{{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94},{&p_722->g_94,(void*)0,&p_722->g_4,&p_722->g_94}}};
    int64_t l_412 = 4L;
    uint8_t l_413 = 0xCBL;
    int16_t l_445 = 0x0EA7L;
    int8_t **l_482 = (void*)0;
    int32_t l_514 = 0x08362EF9L;
    int8_t l_526[9][6] = {{0x1CL,0x18L,0x78L,(-3L),0x78L,0x18L},{0x1CL,0x18L,0x78L,(-3L),0x78L,0x18L},{0x1CL,0x18L,0x78L,(-3L),0x78L,0x18L},{0x1CL,0x18L,0x78L,(-3L),0x78L,0x18L},{0x1CL,0x18L,0x78L,(-3L),0x78L,0x18L},{0x1CL,0x18L,0x78L,(-3L),0x78L,0x18L},{0x1CL,0x18L,0x78L,(-3L),0x78L,0x18L},{0x1CL,0x18L,0x78L,(-3L),0x78L,0x18L},{0x1CL,0x18L,0x78L,(-3L),0x78L,0x18L}};
    int i, j, k;
    --l_413;
    for (p_722->g_115 = 0; p_722->g_115 < 4; p_722->g_115 += 1)
    {
        for (p_722->g_43 = 0; p_722->g_43 < 10; p_722->g_43 += 1)
        {
            for (p_49 = 0; p_49 < 6; p_49 += 1)
            {
                p_722->g_205[p_722->g_115][p_722->g_43][p_49] = &p_722->g_4;
            }
        }
    }
    for (p_722->g_117 = 0; (p_722->g_117 <= 2); p_722->g_117 += 1)
    { /* block id: 188 */
        uint32_t l_425[2][6][3] = {{{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL}},{{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL},{5UL,0x9BC937CFL,0x9BC937CFL}}};
        int32_t l_448 = (-10L);
        int32_t l_474 = 0L;
        int8_t **l_500 = &p_722->g_73;
        int16_t *l_503[1];
        uint64_t *l_511[8][10] = {{&p_722->g_117,(void*)0,(void*)0,(void*)0,&p_722->g_117,&p_722->g_117,&p_722->g_115,&p_722->g_117,&p_722->g_117,&p_722->g_115},{&p_722->g_117,(void*)0,(void*)0,(void*)0,&p_722->g_117,&p_722->g_117,&p_722->g_115,&p_722->g_117,&p_722->g_117,&p_722->g_115},{&p_722->g_117,(void*)0,(void*)0,(void*)0,&p_722->g_117,&p_722->g_117,&p_722->g_115,&p_722->g_117,&p_722->g_117,&p_722->g_115},{&p_722->g_117,(void*)0,(void*)0,(void*)0,&p_722->g_117,&p_722->g_117,&p_722->g_115,&p_722->g_117,&p_722->g_117,&p_722->g_115},{&p_722->g_117,(void*)0,(void*)0,(void*)0,&p_722->g_117,&p_722->g_117,&p_722->g_115,&p_722->g_117,&p_722->g_117,&p_722->g_115},{&p_722->g_117,(void*)0,(void*)0,(void*)0,&p_722->g_117,&p_722->g_117,&p_722->g_115,&p_722->g_117,&p_722->g_117,&p_722->g_115},{&p_722->g_117,(void*)0,(void*)0,(void*)0,&p_722->g_117,&p_722->g_117,&p_722->g_115,&p_722->g_117,&p_722->g_117,&p_722->g_115},{&p_722->g_117,(void*)0,(void*)0,(void*)0,&p_722->g_117,&p_722->g_117,&p_722->g_115,&p_722->g_117,&p_722->g_117,&p_722->g_115}};
        int32_t *l_524[1][3][2] = {{{&p_722->g_159,&p_722->g_159},{&p_722->g_159,&p_722->g_159},{&p_722->g_159,&p_722->g_159}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_503[i] = &p_722->g_43;
        for (p_722->g_40 = 0; (p_722->g_40 <= 4); p_722->g_40 += 1)
        { /* block id: 191 */
            uint32_t *l_432 = &p_722->g_433[2][3];
            int32_t l_444 = 0x6A5E1F51L;
            uint8_t *l_446 = (void*)0;
            uint8_t *l_447[2];
            int16_t *l_449 = &p_722->g_43;
            int32_t *l_450 = &l_448;
            int32_t l_456 = 0x58C6CE44L;
            int i;
            for (i = 0; i < 2; i++)
                l_447[i] = &p_722->g_197;
            (1 + 1);
        }
    }
    return p_722->g_232;
}


/* ------------------------------------------ */
/* 
 * reads : p_722->g_73 p_722->g_40 p_722->g_43 p_722->g_96 p_722->g_61 p_722->g_74 p_722->g_115 p_722->g_85 p_722->g_4 p_722->g_125 p_722->g_35 p_722->g_128 p_722->g_87 p_722->g_123 p_722->g_94 p_722->g_159 p_722->g_232 p_722->g_201 p_722->g_197 p_722->g_347 p_722->g_348 p_722->g_117
 * writes: p_722->g_96 p_722->g_115 p_722->g_117 p_722->g_87 p_722->g_43 p_722->g_123 p_722->g_125 p_722->g_94 p_722->g_85 p_722->g_197 p_722->g_128 p_722->g_201 p_722->g_204 p_722->g_205 p_722->g_159 p_722->g_232 p_722->g_74 p_722->g_348
 */
int16_t  func_51(int64_t  p_52, int32_t ** p_53, uint64_t  p_54, int32_t  p_55, uint64_t  p_56, struct S0 * p_722)
{ /* block id: 29 */
    uint8_t l_68 = 0xC1L;
    int32_t **l_349 = &p_722->g_348;
    int8_t *l_350 = &p_722->g_351;
    int16_t *l_377 = &p_722->g_43;
    int32_t l_379[5] = {0x41D45886L,0x41D45886L,0x41D45886L,0x41D45886L,0x41D45886L};
    uint16_t *l_388[10];
    uint32_t l_391 = 4294967295UL;
    uint32_t l_402 = 0x9536EFDAL;
    int i;
    for (i = 0; i < 10; i++)
        l_388[i] = &p_722->g_96;
    l_379[2] = ((((p_56 != (~l_68)) == ((*p_53) != ((*l_349) = func_69(p_722->g_73, (func_75(p_722->g_40, func_81((safe_mul_func_int16_t_s_s(p_722->g_43, p_56)), p_722), p_722->g_347, l_349, l_350, p_722) , l_377), p_722->g_35[1], p_722)))) , p_722->g_43) & p_55);
    (*p_722->g_348) = (0x78ACL != p_52);
    l_379[2] = (safe_sub_func_int64_t_s_s((6UL & (((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((!((((safe_add_func_uint16_t_u_u(((**l_349) = p_56), ((((safe_add_func_uint16_t_u_u(((l_391 > p_722->g_117) | ((safe_div_func_uint16_t_u_u(((((*l_377) ^= ((safe_mod_func_int64_t_s_s((-2L), (safe_add_func_uint16_t_u_u((((0xE9EC12C7BB83BD03L ^ (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(p_54, 9L)), 0x10E5L))) || l_391) && l_402), 1UL)))) && p_54)) <= 0UL) >= p_56), 65535UL)) != p_722->g_232)), p_54)) < p_722->g_4) > p_54) != 1L))) <= p_56) || p_722->g_201) <= p_52)) && 0x5301L), l_402)), 250UL)) <= p_54) , p_722->g_94)), p_722->g_74));
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_69(int8_t * p_70, int16_t * p_71, uint16_t  p_72, struct S0 * p_722)
{ /* block id: 174 */
    int32_t *l_378 = &p_722->g_94;
    return l_378;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_75(int32_t  p_76, int32_t * p_77, int32_t ** p_78, int32_t ** p_79, int8_t * p_80, struct S0 * p_722)
{ /* block id: 170 */
    int8_t **l_353 = &p_722->g_73;
    int8_t ***l_352 = &l_353;
    int32_t l_354 = 0x323A73AAL;
    int32_t l_355 = (-1L);
    int32_t *l_356 = (void*)0;
    int32_t *l_357 = &p_722->g_87;
    int32_t *l_358 = &p_722->g_94;
    int32_t *l_359 = &p_722->g_94;
    int32_t *l_360 = &p_722->g_94;
    int32_t *l_361 = &p_722->g_40;
    int32_t *l_362 = &l_355;
    int32_t *l_363 = &l_354;
    int32_t *l_364[3];
    int32_t l_365 = 7L;
    int16_t l_366[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int64_t l_367 = 1L;
    int64_t l_368 = 0x68CAE0675AA74334L;
    int32_t l_369 = 1L;
    int64_t l_370 = 1L;
    int64_t l_371[2][2][9] = {{{8L,0x2440BE902A8E209FL,0x27454411CD14D926L,0x1766DA33A7219DE1L,0x2440BE902A8E209FL,0x1766DA33A7219DE1L,0x27454411CD14D926L,0x2440BE902A8E209FL,8L},{8L,0x2440BE902A8E209FL,0x27454411CD14D926L,0x1766DA33A7219DE1L,0x2440BE902A8E209FL,0x1766DA33A7219DE1L,0x27454411CD14D926L,0x2440BE902A8E209FL,8L}},{{8L,0x2440BE902A8E209FL,0x27454411CD14D926L,0x1766DA33A7219DE1L,0x2440BE902A8E209FL,0x1766DA33A7219DE1L,0x27454411CD14D926L,0x2440BE902A8E209FL,8L},{8L,0x2440BE902A8E209FL,0x27454411CD14D926L,0x1766DA33A7219DE1L,0x2440BE902A8E209FL,0x1766DA33A7219DE1L,0x27454411CD14D926L,0x2440BE902A8E209FL,8L}}};
    int64_t l_372[6] = {0x063FB4DD98A33B77L,0x5D2CF9C368378C8CL,0x063FB4DD98A33B77L,0x063FB4DD98A33B77L,0x5D2CF9C368378C8CL,0x063FB4DD98A33B77L};
    int8_t l_373 = 0x1CL;
    uint16_t l_374[2];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_364[i] = &p_722->g_87;
    for (i = 0; i < 2; i++)
        l_374[i] = 65530UL;
    (*l_352) = &p_80;
    --l_374[0];
    return p_76;
}


/* ------------------------------------------ */
/* 
 * reads : p_722->g_96 p_722->g_61 p_722->g_74 p_722->g_115 p_722->g_85 p_722->g_4 p_722->g_125 p_722->g_35 p_722->g_128 p_722->g_43 p_722->g_87 p_722->g_123 p_722->g_94 p_722->g_40 p_722->g_159 p_722->g_232 p_722->g_201 p_722->g_73 p_722->g_197
 * writes: p_722->g_96 p_722->g_115 p_722->g_117 p_722->g_87 p_722->g_43 p_722->g_123 p_722->g_125 p_722->g_94 p_722->g_85 p_722->g_197 p_722->g_128 p_722->g_201 p_722->g_204 p_722->g_205 p_722->g_159 p_722->g_232 p_722->g_74
 */
int32_t * func_81(int32_t  p_82, struct S0 * p_722)
{ /* block id: 30 */
    int8_t l_92 = 0x31L;
    int32_t l_93 = 0L;
    int32_t l_95 = 0x766F91BAL;
    int8_t *l_174[8][5][6] = {{{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0}},{{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0}},{{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0}},{{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0}},{{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0}},{{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0}},{{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0}},{{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0},{(void*)0,&p_722->g_74,(void*)0,(void*)0,&p_722->g_74,(void*)0}}};
    int8_t *l_198 = &p_722->g_74;
    int32_t **l_216 = (void*)0;
    int64_t l_344[4] = {0x2251491DC32367D3L,0x2251491DC32367D3L,0x2251491DC32367D3L,0x2251491DC32367D3L};
    int32_t *l_345 = (void*)0;
    int32_t **l_346 = &p_722->g_205[0][9][2];
    int i, j, k;
    for (p_82 = 0; (p_82 <= 2); p_82 += 1)
    { /* block id: 33 */
        int32_t *l_86 = &p_722->g_87;
        int32_t l_88 = (-5L);
        int32_t *l_89 = &l_88;
        int32_t *l_90 = (void*)0;
        int32_t *l_91[9][1] = {{&l_88},{&l_88},{&l_88},{&l_88},{&l_88},{&l_88},{&l_88},{&l_88},{&l_88}};
        int8_t *l_134 = &p_722->g_74;
        uint32_t l_239 = 0x8C50790AL;
        uint32_t l_242[9] = {0x709E712BL,8UL,0x709E712BL,0x709E712BL,8UL,0x709E712BL,0x709E712BL,8UL,0x709E712BL};
        int8_t l_276[5][5][5] = {{{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L}},{{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L}},{{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L}},{{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L}},{{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L},{0x72L,(-5L),0x38L,0x77L,0x52L}}};
        uint32_t l_287 = 0UL;
        int8_t **l_342 = &l_198;
        int i, j, k;
        p_722->g_96--;
        for (l_88 = 2; (l_88 >= 0); l_88 -= 1)
        { /* block id: 37 */
            int8_t *l_101 = &p_722->g_74;
            uint64_t *l_114 = &p_722->g_115;
            uint64_t *l_116 = &p_722->g_117;
            int16_t *l_127 = &p_722->g_128;
            int32_t l_142 = 0x1EF75D21L;
            uint32_t *l_160 = &p_722->g_125[0];
            int32_t l_164 = (-1L);
            int32_t l_165 = 0L;
            int8_t **l_173[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t *l_195 = &p_722->g_123;
            uint8_t *l_196 = &p_722->g_197;
            int16_t *l_199 = &p_722->g_43;
            int16_t *l_200 = &p_722->g_201;
            int8_t l_202 = 0x09L;
            int32_t **l_203[10][1] = {{&l_89},{&l_89},{&l_89},{&l_89},{&l_89},{&l_89},{&l_89},{&l_89},{&l_89},{&l_89}};
            int i, j;
            (*l_86) = (safe_rshift_func_int16_t_s_u((&p_722->g_74 == l_101), (((*l_116) = (safe_lshift_func_uint16_t_u_s(p_82, ((8UL < ((*l_114) = (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0xA1EF1C42L, (safe_add_func_uint16_t_u_u((p_82 , 0x5DF3L), (safe_sub_func_int32_t_s_s(((void*)0 == p_722->g_61), 0x64F73160L)))))), 0x1F6BL)), 0x71L)))) | p_82)))) > p_722->g_74)));
            for (p_722->g_115 = 0; (p_722->g_115 <= 2); p_722->g_115 += 1)
            { /* block id: 43 */
                int16_t *l_118 = &p_722->g_43;
                uint8_t *l_121 = (void*)0;
                uint8_t *l_122 = &p_722->g_123;
                uint32_t *l_124 = &p_722->g_125[3];
                uint16_t *l_126 = &p_722->g_96;
                int32_t **l_139 = &l_90;
                int32_t **l_140[4];
                int32_t *l_141[7][9] = {{&l_88,&p_722->g_40,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_40,&l_88,&l_95,&p_722->g_40},{&l_88,&p_722->g_40,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_40,&l_88,&l_95,&p_722->g_40},{&l_88,&p_722->g_40,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_40,&l_88,&l_95,&p_722->g_40},{&l_88,&p_722->g_40,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_40,&l_88,&l_95,&p_722->g_40},{&l_88,&p_722->g_40,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_40,&l_88,&l_95,&p_722->g_40},{&l_88,&p_722->g_40,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_40,&l_88,&l_95,&p_722->g_40},{&l_88,&p_722->g_40,&p_722->g_94,&p_722->g_94,&p_722->g_94,&p_722->g_40,&l_88,&l_95,&p_722->g_40}};
                int64_t l_143 = (-1L);
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_140[i] = &l_91[7][0];
                p_722->g_87 = (0x70L != (((((*l_126) = ((0xCFCBL < ((((*l_124) |= (0x142222B0L || ((p_722->g_85[(l_88 + 2)][(p_82 + 2)][p_722->g_115] <= ((*l_122) = ((((1UL | ((*l_118) = 0x5185L)) > p_722->g_96) < (safe_lshift_func_uint8_t_u_s((((((((*l_116) = p_82) <= p_722->g_4) && 0UL) || p_722->g_85[(l_88 + 2)][(p_82 + 2)][p_722->g_115]) || 1UL) , 253UL), p_82))) , p_82))) , 0xEC11135BL))) || p_82) & l_92)) != l_92)) || (-8L)) , &p_722->g_43) == l_127));
                if ((((((safe_div_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((((safe_mul_func_uint16_t_u_u(((*l_89) | ((l_134 == (void*)0) , (4294967295UL == ((((safe_sub_func_int64_t_s_s((((*l_139) = &p_722->g_4) != (l_141[0][8] = &p_722->g_94)), 0x68C0C16224620E0AL)) ^ ((((&p_722->g_128 != (void*)0) && l_142) >= 1L) <= (-5L))) , p_722->g_115) > 0x2EDBL)))), p_722->g_35[0])) | (-1L)) <= 0x52ABL))) , l_143), 0x0BL)) == 0x0BA1L) , p_82) & p_722->g_128) | 0x15DF2204A484DF50L))
                { /* block id: 52 */
                    uint32_t l_145 = 0UL;
                    int32_t **l_148 = &l_90;
                    int i, j, k;
                    for (p_722->g_94 = 0; (p_722->g_94 <= 6); p_722->g_94 += 1)
                    { /* block id: 55 */
                        int32_t *l_144 = &l_142;
                        return &p_722->g_40;
                    }
                    p_722->g_94 = ((1L < ((l_145 ^ ((*l_86) ^= ((safe_mul_func_int16_t_s_s(p_82, (p_722->g_43 | p_82))) && (l_148 != l_148)))) || ((p_722->g_85[p_82][(l_88 + 1)][p_722->g_115] = ((safe_sub_func_uint8_t_u_u((!((void*)0 == &p_722->g_128)), 0x04L)) | l_142)) , 247UL))) , p_82);
                    for (l_92 = 0; (l_92 == (-7)); l_92--)
                    { /* block id: 63 */
                        uint32_t l_153 = 4294967295UL;
                        int32_t *l_158[1][5][5] = {{{&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159},{&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159},{&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159},{&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159},{&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159,&p_722->g_159}}};
                        int32_t l_163 = 0x7F8D447FL;
                        int i, j, k;
                        l_153--;
                        l_163 = ((**l_139) < (safe_sub_func_int16_t_s_s((+((l_142 = (**l_148)) , ((void*)0 != l_160))), ((*l_126)--))));
                    }
                }
                else
                { /* block id: 69 */
                    uint64_t l_166 = 0x00174E01C4077956L;
                    l_166++;
                    (*l_139) = (((void*)0 == p_722->g_61) , (void*)0);
                    for (p_722->g_43 = 0; p_722->g_43 < 4; p_722->g_43 += 1)
                    {
                        l_140[p_722->g_43] = (void*)0;
                    }
                    return &p_722->g_87;
                }
                (*l_86) = (l_93 || ((safe_div_func_uint16_t_u_u((&p_722->g_74 != (void*)0), l_95)) >= p_722->g_4));
            }
            l_93 = ((safe_sub_func_uint64_t_u_u((((l_174[2][2][3] = &p_722->g_74) != ((((+((void*)0 == &l_95)) & (safe_sub_func_int32_t_s_s(0L, (p_722->g_125[3] = (((*l_200) = (safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((l_165 > ((safe_lshift_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s(((*l_199) = ((*l_127) &= ((((l_134 = ((((safe_mod_func_int8_t_s_s(p_82, p_82)) , (((*l_116) = (safe_sub_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(((*l_196) = (+(((*l_195) &= (safe_mod_func_uint32_t_u_u((1L > (safe_lshift_func_int16_t_s_s(((p_722->g_96 , p_82) > 0x36034B83A5DF858CL), p_82))), p_722->g_96))) || 1L))), l_95)) >= p_722->g_35[2]), (-1L)))) != l_142)) <= p_82) , l_198)) != (void*)0) <= 18446744073709551613UL) > (-1L)))), p_722->g_94)) , (*l_86)) && p_82) == p_722->g_125[4]) ^ l_95), p_722->g_40)) > (-1L))), p_722->g_87)), 255UL))) & l_202))))) == p_722->g_74) , &p_722->g_74)) != p_722->g_40), 9L)) , p_82);
            p_722->g_205[0][4][4] = (p_722->g_204 = (void*)0);
        }
        for (p_722->g_159 = 2; (p_722->g_159 >= 0); p_722->g_159 -= 1)
        { /* block id: 92 */
            uint64_t l_206 = 0UL;
            uint32_t *l_213 = &p_722->g_125[3];
            int64_t *l_225 = &p_722->g_85[4][8][1];
            int32_t **l_252 = &l_86;
            (1 + 1);
        }
        for (p_722->g_232 = 0; (p_722->g_232 <= 2); p_722->g_232 += 1)
        { /* block id: 119 */
            int32_t l_253 = 2L;
            uint8_t *l_268 = &p_722->g_123;
            int16_t *l_269[5];
            int32_t l_270 = 0x59BE98C5L;
            uint8_t *l_271 = (void*)0;
            uint8_t *l_272 = &p_722->g_197;
            int32_t **l_273 = (void*)0;
            int32_t **l_274 = &l_91[7][0];
            int64_t l_275[1][6];
            int32_t l_277[9] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
            int i, j;
            for (i = 0; i < 5; i++)
                l_269[i] = &p_722->g_128;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_275[i][j] = 0L;
            }
            (*l_274) = ((p_722->g_96 >= ((((l_253 ^ p_82) && ((*l_86) ^= (((*l_272) = ((l_270 &= (((&p_722->g_4 != &l_88) || (safe_mod_func_uint8_t_u_u(((*l_268) = (((+(((safe_rshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(l_253, (safe_lshift_func_int8_t_s_s((0xB4L || l_253), 5)))), (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((p_722->g_74 , 0UL) || p_722->g_115), 10)), (-10L))))) ^ p_82) , 0L), p_82)) ^ p_722->g_125[3]) | l_253)) > 0x1457L) , 255UL)), 4L))) <= l_253)) || p_722->g_96)) || 0x1DL))) && p_722->g_96) < p_722->g_201)) , (void*)0);
            (*l_274) = &l_88;
            for (p_722->g_87 = 0; (p_722->g_87 <= 2); p_722->g_87 += 1)
            { /* block id: 128 */
                uint64_t l_278 = 18446744073709551608UL;
                ++l_278;
            }
        }
        for (p_722->g_232 = 0; (p_722->g_232 <= 2); p_722->g_232 += 1)
        { /* block id: 134 */
            int64_t l_299 = (-1L);
            int32_t l_307 = 0x77FE14EEL;
            int32_t l_308 = 0x223C14E2L;
            int16_t *l_337 = &p_722->g_43;
            int8_t **l_339 = &l_198;
            int8_t **l_340 = (void*)0;
            for (p_722->g_128 = 0; (p_722->g_128 <= 2); p_722->g_128 += 1)
            { /* block id: 137 */
                uint32_t *l_300 = &p_722->g_125[3];
                int i, j, k;
                l_91[7][0] = &p_722->g_94;
                (*l_86) = p_722->g_85[p_722->g_232][(p_82 + 5)][p_722->g_128];
                (*l_89) ^= ((~((((*l_300) |= (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(0x071F6F16L, (((safe_lshift_func_int16_t_s_u(l_287, (safe_unary_minus_func_int32_t_s((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u((p_82 > (safe_add_func_uint32_t_u_u(((p_722->g_85[p_722->g_232][(p_82 + 5)][p_722->g_128] >= ((~p_722->g_85[p_722->g_232][(p_82 + 5)][p_722->g_128]) == (safe_lshift_func_uint8_t_u_s(0xACL, (l_299 ^= (*p_722->g_73)))))) != 0x69L), (18446744073709551613UL ^ 0x4EBBF1EA3970286BL)))), p_722->g_123)) >= p_82) , (*p_722->g_73)) < 0xEFL), 3)), 0xB1L)) , 0x2126096AL) ^ 1UL))))) || p_722->g_94) == p_82))), p_82))) | 0L) == p_82)) <= (*p_722->g_73));
            }
            for (l_95 = 2; (l_95 >= 0); l_95 -= 1)
            { /* block id: 146 */
                uint32_t *l_305[6][2] = {{&l_287,(void*)0},{&l_287,(void*)0},{&l_287,(void*)0},{&l_287,(void*)0},{&l_287,(void*)0},{&l_287,(void*)0}};
                int32_t l_306 = 0x482EA3C6L;
                int32_t l_309 = 0x15F2E32FL;
                int32_t l_310 = (-3L);
                uint16_t l_327 = 65535UL;
                int i, j;
                (*l_89) ^= ((safe_lshift_func_int16_t_s_s(((p_82 && (((safe_mod_func_int64_t_s_s(((((void*)0 == &p_722->g_96) , (p_722->g_125[3]--)) >= (~((safe_sub_func_int32_t_s_s(p_82, p_722->g_43)) != (!(*p_722->g_73))))), (safe_rshift_func_uint8_t_u_s(p_722->g_123, 1)))) , (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0x58L, ((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(p_722->g_87, p_722->g_74)), l_327)) != 0x6237DB7F74AC043EL))), l_327)), p_722->g_4))) < p_82)) || 0xFCF0A8FCL), (*l_86))) , l_327);
                if (l_299)
                    break;
                for (l_299 = 2; (l_299 >= 0); l_299 -= 1)
                { /* block id: 152 */
                    uint32_t l_328 = 4294967287UL;
                    int16_t *l_338 = &p_722->g_43;
                    int8_t ***l_341[4][6][9] = {{{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340}},{{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340}},{{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340}},{{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340}}};
                    uint8_t *l_343[4][10] = {{&p_722->g_197,(void*)0,&p_722->g_35[0],&p_722->g_35[2],&p_722->g_35[1],&p_722->g_197,&p_722->g_35[2],&p_722->g_35[2],&p_722->g_35[2],&p_722->g_197},{&p_722->g_197,(void*)0,&p_722->g_35[0],&p_722->g_35[2],&p_722->g_35[1],&p_722->g_197,&p_722->g_35[2],&p_722->g_35[2],&p_722->g_35[2],&p_722->g_197},{&p_722->g_197,(void*)0,&p_722->g_35[0],&p_722->g_35[2],&p_722->g_35[1],&p_722->g_197,&p_722->g_35[2],&p_722->g_35[2],&p_722->g_35[2],&p_722->g_197},{&p_722->g_197,(void*)0,&p_722->g_35[0],&p_722->g_35[2],&p_722->g_35[1],&p_722->g_197,&p_722->g_35[2],&p_722->g_35[2],&p_722->g_35[2],&p_722->g_197}};
                    int i, j, k;
                    l_344[1] |= (l_328 , ((*l_89) = (safe_sub_func_int32_t_s_s((!(safe_mul_func_uint16_t_u_u(((!((l_307 = p_82) & ((safe_mul_func_uint8_t_u_u((p_722->g_197 <= ((safe_rshift_func_int8_t_s_u(((*p_722->g_73) |= ((p_722->g_87 , (l_338 = l_337)) != (void*)0)), 5)) == (~(p_722->g_85[(p_722->g_232 + 1)][(l_95 + 5)][l_95] ^= ((l_339 = (void*)0) != (l_342 = l_340)))))), (l_308 = (p_82 && p_82)))) > 0x573CL))) || p_82), p_82))), p_82))));
                    l_339 = &p_722->g_73;
                }
            }
        }
    }
    l_345 = &p_722->g_87;
    (*l_346) = &l_93;
    return &p_722->g_87;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_723;
    struct S0* p_722 = &c_723;
    struct S0 c_724 = {
        {0xF251L,0xF251L,0xF251L,0xF251L,0xF251L,0xF251L,0xF251L,0xF251L,0xF251L}, // p_722->g_2
        {0x37B1891FL,0x37B1891FL,0x37B1891FL,0x37B1891FL,0x37B1891FL}, // p_722->g_3
        (-10L), // p_722->g_4
        {0xA2L,0xA2L,0xA2L,0xA2L}, // p_722->g_35
        (-6L), // p_722->g_40
        0x5476L, // p_722->g_43
        (void*)0, // p_722->g_62
        &p_722->g_62, // p_722->g_61
        (-1L), // p_722->g_74
        &p_722->g_74, // p_722->g_73
        {{{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L}},{{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L}},{{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L}},{{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L}},{{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L},{8L,(-1L),0x3DD5229496F13771L}}}, // p_722->g_85
        5L, // p_722->g_87
        (-9L), // p_722->g_94
        1UL, // p_722->g_96
        0xAFEA2219E070DDB6L, // p_722->g_115
        0x25053E2D80D5DAD1L, // p_722->g_117
        1UL, // p_722->g_123
        {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}, // p_722->g_125
        0x27B4L, // p_722->g_128
        0x1DD7FE33L, // p_722->g_159
        0xB0L, // p_722->g_197
        (-1L), // p_722->g_201
        &p_722->g_87, // p_722->g_204
        {{{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0}},{{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0}},{{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0}},{{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0},{&p_722->g_87,(void*)0,&p_722->g_40,(void*)0,(void*)0,(void*)0}}}, // p_722->g_205
        0x9E69E6C6DA601B76L, // p_722->g_232
        &p_722->g_40, // p_722->g_348
        &p_722->g_348, // p_722->g_347
        0L, // p_722->g_351
        {{0xF1A2ABD5L,0xF1A2ABD5L,0xF1A2ABD5L,0xF1A2ABD5L,0xF1A2ABD5L},{0xF1A2ABD5L,0xF1A2ABD5L,0xF1A2ABD5L,0xF1A2ABD5L,0xF1A2ABD5L},{0xF1A2ABD5L,0xF1A2ABD5L,0xF1A2ABD5L,0xF1A2ABD5L,0xF1A2ABD5L}}, // p_722->g_433
        {{{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL}},{{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL}},{{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL},{4294967290UL,0x82183AA1L,0xA91FB031L,0xA91FB031L,0x82183AA1L,4294967290UL,5UL,0x5298DB4CL}}}, // p_722->g_504
        0x0F8846F0L, // p_722->g_555
        {(void*)0}, // p_722->g_636
        &p_722->g_636[0], // p_722->g_635
        0x388B5D70L, // p_722->g_661
        0L, // p_722->g_711
        0x69465FAAL, // p_722->g_714
    };
    c_723 = c_724;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_722);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_722->g_2[i], "p_722->g_2[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_722->g_3[i], "p_722->g_3[i]", print_hash_value);

    }
    transparent_crc(p_722->g_4, "p_722->g_4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_722->g_35[i], "p_722->g_35[i]", print_hash_value);

    }
    transparent_crc(p_722->g_40, "p_722->g_40", print_hash_value);
    transparent_crc(p_722->g_43, "p_722->g_43", print_hash_value);
    transparent_crc(p_722->g_74, "p_722->g_74", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_722->g_85[i][j][k], "p_722->g_85[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_722->g_87, "p_722->g_87", print_hash_value);
    transparent_crc(p_722->g_94, "p_722->g_94", print_hash_value);
    transparent_crc(p_722->g_96, "p_722->g_96", print_hash_value);
    transparent_crc(p_722->g_115, "p_722->g_115", print_hash_value);
    transparent_crc(p_722->g_117, "p_722->g_117", print_hash_value);
    transparent_crc(p_722->g_123, "p_722->g_123", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_722->g_125[i], "p_722->g_125[i]", print_hash_value);

    }
    transparent_crc(p_722->g_128, "p_722->g_128", print_hash_value);
    transparent_crc(p_722->g_159, "p_722->g_159", print_hash_value);
    transparent_crc(p_722->g_197, "p_722->g_197", print_hash_value);
    transparent_crc(p_722->g_201, "p_722->g_201", print_hash_value);
    transparent_crc(p_722->g_232, "p_722->g_232", print_hash_value);
    transparent_crc(p_722->g_351, "p_722->g_351", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_722->g_433[i][j], "p_722->g_433[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_722->g_504[i][j][k], "p_722->g_504[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_722->g_555, "p_722->g_555", print_hash_value);
    transparent_crc(p_722->g_661, "p_722->g_661", print_hash_value);
    transparent_crc(p_722->g_711, "p_722->g_711", print_hash_value);
    transparent_crc(p_722->g_714, "p_722->g_714", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
