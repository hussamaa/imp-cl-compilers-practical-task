// -g 87,84,1 -l 3,84,1
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


// Seed: 759004173

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int16_t  f1;
   int16_t  f2;
   uint8_t  f3;
   uint8_t  f4;
   int64_t  f5;
   volatile uint64_t  f6;
};

union U1 {
   uint64_t  f0;
   volatile int8_t  f1;
   struct S0  f2;
   int32_t  f3;
   int64_t  f4;
};

struct S2 {
    int32_t g_4;
    int8_t g_7[7];
    int32_t g_8;
    volatile int32_t g_9;
    int32_t g_10[10][4];
    volatile int64_t g_39;
    volatile struct S0 g_95[10];
    uint32_t g_97;
    uint32_t *g_118[10];
    uint32_t **g_117;
    int16_t g_127;
    union U1 g_147;
    union U1 *g_146[1];
    union U1 ** volatile g_148;
    union U1 ** volatile g_149;
    union U1 **g_154;
    union U1 *** volatile g_153;
    union U1 g_172;
    int32_t *g_196;
    int32_t ** volatile g_195[9][5][2];
    int32_t ** volatile g_197;
    int32_t ** volatile g_204;
    int32_t ** volatile g_207;
    struct S0 g_212;
    int64_t g_227;
    int32_t g_228[4];
    uint16_t g_232;
    volatile int64_t g_252;
    int32_t ** volatile g_260;
    int32_t ** volatile g_269[7][7][1];
    int32_t ** volatile g_273;
    volatile struct S0 g_280[2];
    int32_t **g_293;
    int32_t *** volatile g_292;
    uint64_t g_344;
    struct S0 g_373;
    struct S0 g_376[1];
    uint64_t g_382;
    volatile struct S0 g_387;
    int32_t ** volatile g_394[1];
    int32_t ** volatile g_395;
    volatile uint32_t g_396;
    volatile struct S0 g_454;
    volatile uint8_t g_459;
    struct S0 g_480;
    uint64_t **g_485;
    int32_t ** volatile g_490;
    int64_t g_511[1];
    int8_t g_539;
    int32_t ** volatile g_542;
    struct S0 g_543;
    struct S0 * volatile g_544;
    union U1 ** volatile * volatile g_634;
    volatile struct S0 g_643;
    volatile union U1 g_683;
    struct S0 g_689;
    uint32_t g_743;
    uint32_t g_747[5][7];
    int32_t ** volatile g_789;
    uint16_t *g_796;
    uint16_t **g_795;
    union U1 g_809[7][2][3];
    int32_t g_827;
    struct S0 g_828;
    int32_t * volatile g_838;
    int32_t ** volatile g_870;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S2 * p_871);
int32_t * func_45(uint32_t  p_46, uint16_t  p_47, struct S2 * p_871);
int32_t  func_53(uint8_t  p_54, struct S2 * p_871);
struct S0  func_55(int32_t * p_56, uint32_t  p_57, uint64_t  p_58, struct S2 * p_871);
int32_t * func_59(int64_t  p_60, int64_t  p_61, struct S2 * p_871);
uint32_t  func_62(int8_t  p_63, int32_t * p_64, uint16_t  p_65, uint16_t  p_66, int32_t * p_67, struct S2 * p_871);
uint16_t  func_70(int32_t * p_71, struct S2 * p_871);
int32_t * func_72(int32_t * p_73, int32_t * p_74, uint64_t  p_75, int32_t * p_76, int8_t  p_77, struct S2 * p_871);
int32_t * func_78(int32_t * p_79, int32_t  p_80, uint32_t  p_81, int64_t  p_82, uint64_t  p_83, struct S2 * p_871);
int8_t  func_87(int32_t * p_88, int32_t * p_89, struct S2 * p_871);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_871->g_4 p_871->g_8 p_871->g_7 p_871->g_10
 * writes: p_871->g_4 p_871->g_8 p_871->g_10
 */
int64_t  func_1(struct S2 * p_871)
{ /* block id: 4 */
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = &p_871->g_4;
    int32_t l_33 = 0x18072F25L;
    int32_t l_35 = 0x401CEA02L;
    int32_t l_36 = 0x7DE2E510L;
    int32_t l_37[4] = {0x2B6367AFL,0x2B6367AFL,0x2B6367AFL,0x2B6367AFL};
    int16_t l_38 = (-5L);
    uint16_t l_40 = 0x2B77L;
    int32_t l_265 = 0x26A1FEF0L;
    int i;
    (*l_3) = (-1L);
    for (p_871->g_4 = 29; (p_871->g_4 > 1); --p_871->g_4)
    { /* block id: 8 */
        int32_t *l_11 = &p_871->g_10[0][2];
        int32_t *l_12 = (void*)0;
        int32_t *l_13 = &p_871->g_8;
        int32_t *l_14 = &p_871->g_10[9][3];
        int32_t *l_15 = &p_871->g_8;
        int32_t *l_16 = (void*)0;
        int32_t *l_17 = &p_871->g_10[4][3];
        int32_t *l_18 = &p_871->g_8;
        int32_t *l_19 = &p_871->g_10[8][1];
        int32_t *l_20 = (void*)0;
        int32_t *l_21 = &p_871->g_10[3][1];
        int32_t *l_22 = &p_871->g_10[6][3];
        int32_t *l_23 = &p_871->g_10[6][3];
        int32_t *l_24 = &p_871->g_10[1][2];
        int32_t *l_25 = (void*)0;
        int32_t *l_26 = (void*)0;
        int32_t *l_27 = &p_871->g_8;
        int32_t *l_28 = &p_871->g_8;
        int32_t *l_29 = (void*)0;
        int32_t *l_30 = &p_871->g_10[6][3];
        int32_t *l_31 = &p_871->g_10[6][3];
        int32_t *l_32 = (void*)0;
        int32_t *l_34[10] = {&p_871->g_10[9][2],&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[9][2],&p_871->g_10[9][2],&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[9][2]};
        int i;
        for (p_871->g_8 = 0; (p_871->g_8 <= 6); p_871->g_8 += 1)
        { /* block id: 11 */
            int i;
            if (p_871->g_7[p_871->g_8])
                break;
            if (p_871->g_4)
                continue;
            for (p_871->g_10[6][3] = 5; (p_871->g_10[6][3] >= 0); p_871->g_10[6][3] -= 1)
            { /* block id: 16 */
                int i;
                return p_871->g_7[p_871->g_8];
            }
        }
        l_40--;
    }
    for (l_35 = 0; (l_35 < 6); l_35 = safe_add_func_int64_t_s_s(l_35, 5))
    { /* block id: 24 */
        int32_t *l_84 = &l_37[0];
        int32_t *l_90 = (void*)0;
        uint8_t l_264 = 0UL;
        uint32_t l_618[7][6][6] = {{{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL}},{{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL}},{{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL}},{{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL}},{{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL}},{{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL}},{{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL},{1UL,0x3D019672L,0x3D019672L,1UL,0xBE6B68F2L,0UL}}};
        int8_t *l_619[2][4][7] = {{{&p_871->g_539,&p_871->g_539,(void*)0,&p_871->g_539,&p_871->g_539,&p_871->g_539,(void*)0},{&p_871->g_539,&p_871->g_539,(void*)0,&p_871->g_539,&p_871->g_539,&p_871->g_539,(void*)0},{&p_871->g_539,&p_871->g_539,(void*)0,&p_871->g_539,&p_871->g_539,&p_871->g_539,(void*)0},{&p_871->g_539,&p_871->g_539,(void*)0,&p_871->g_539,&p_871->g_539,&p_871->g_539,(void*)0}},{{&p_871->g_539,&p_871->g_539,(void*)0,&p_871->g_539,&p_871->g_539,&p_871->g_539,(void*)0},{&p_871->g_539,&p_871->g_539,(void*)0,&p_871->g_539,&p_871->g_539,&p_871->g_539,(void*)0},{&p_871->g_539,&p_871->g_539,(void*)0,&p_871->g_539,&p_871->g_539,&p_871->g_539,(void*)0},{&p_871->g_539,&p_871->g_539,(void*)0,&p_871->g_539,&p_871->g_539,&p_871->g_539,(void*)0}}};
        uint8_t l_620 = 253UL;
        int32_t *l_621 = &l_37[0];
        uint8_t *l_829 = &p_871->g_480.f3;
        int32_t l_833 = 0L;
        int i, j, k;
        (1 + 1);
    }
    return (*l_3);
}


/* ------------------------------------------ */
/* 
 * reads : p_871->g_480.f1 p_871->g_827 p_871->g_838 p_871->g_228 p_871->g_689.f2 p_871->g_543.f0 p_871->g_252 p_871->g_387.f0 p_871->g_511 p_871->g_212.f2 p_871->g_147.f2.f2 p_871->g_395 p_871->g_196
 * writes: p_871->g_480.f1 p_871->g_228 p_871->g_689.f2 p_871->g_543.f0 p_871->g_7 p_871->g_747 p_871->g_147.f2.f2
 */
int32_t * func_45(uint32_t  p_46, uint16_t  p_47, struct S2 * p_871)
{ /* block id: 409 */
    int64_t l_849 = 0x2BAC36323FE5D168L;
    uint64_t l_860 = 4UL;
    int32_t l_862[3];
    uint8_t *l_863 = &p_871->g_689.f4;
    uint32_t **l_864 = &p_871->g_118[0];
    int32_t l_865 = 1L;
    int32_t *l_869[10] = {&p_871->g_10[1][0],&p_871->g_10[1][0],&p_871->g_10[1][0],&p_871->g_10[1][0],&p_871->g_10[1][0],&p_871->g_10[1][0],&p_871->g_10[1][0],&p_871->g_10[1][0],&p_871->g_10[1][0],&p_871->g_10[1][0]};
    int i;
    for (i = 0; i < 3; i++)
        l_862[i] = 0x0F38E48EL;
    for (p_871->g_480.f1 = (-4); (p_871->g_480.f1 != 15); p_871->g_480.f1 = safe_add_func_int64_t_s_s(p_871->g_480.f1, 3))
    { /* block id: 412 */
        (*p_871->g_838) &= (safe_lshift_func_int8_t_s_s(p_871->g_827, 4));
        if (p_47)
            continue;
        for (p_871->g_689.f2 = 0; (p_871->g_689.f2 >= (-20)); p_871->g_689.f2--)
        { /* block id: 417 */
            int32_t l_841 = (-1L);
            l_841 = 0x10C8361BL;
        }
    }
    for (p_871->g_543.f0 = 0; (p_871->g_543.f0 > 29); p_871->g_543.f0 = safe_add_func_int16_t_s_s(p_871->g_543.f0, 6))
    { /* block id: 423 */
        uint32_t l_844 = 0xD050476FL;
        int8_t *l_845 = &p_871->g_7[2];
        uint32_t *l_858 = (void*)0;
        uint32_t *l_859 = &p_871->g_747[1][4];
        int32_t *l_861[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        l_865 &= (p_47 | (((((l_844 || ((&p_871->g_459 != (((+((*l_845) = 0x7EL)) <= (safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint8_t_u_u(((l_844 & l_849) != (l_862[2] = ((safe_div_func_int16_t_s_s((((l_844 >= (l_844 == (((*l_859) = ((safe_mod_func_int32_t_s_s((((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_844 > 0L), p_871->g_252)), p_47)) , p_871->g_387.f0) | p_871->g_511[0]), l_849)) == p_47)) , l_849))) != p_47) != l_860), 0x9E72L)) || 0x3592L))), p_46)) , p_47)))) , l_863)) <= p_47)) , l_864) == (void*)0) || 0x00F007E9L) >= p_871->g_212.f2));
        for (p_871->g_147.f2.f2 = (-26); (p_871->g_147.f2.f2 <= 11); p_871->g_147.f2.f2 = safe_add_func_uint64_t_u_u(p_871->g_147.f2.f2, 2))
        { /* block id: 430 */
            int32_t *l_868[4] = {&p_871->g_10[9][2],&p_871->g_10[9][2],&p_871->g_10[9][2],&p_871->g_10[9][2]};
            int i;
            return l_868[0];
        }
    }
    (*p_871->g_838) = ((void*)0 == &p_871->g_127);
    return (*p_871->g_395);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_53(uint8_t  p_54, struct S2 * p_871)
{ /* block id: 406 */
    uint32_t l_830 = 0x8334736AL;
    --l_830;
    return l_830;
}


/* ------------------------------------------ */
/* 
 * reads : p_871->g_543.f1 p_871->g_212.f5 p_871->g_747 p_871->g_454.f1 p_871->g_196 p_871->g_10 p_871->g_228 p_871->g_373.f2 p_871->g_382 p_871->g_8 p_871->g_273 p_871->g_689.f3 p_871->g_543.f4 p_871->g_4 p_871->g_543.f2 p_871->g_543.f3 p_871->g_795 p_871->g_485 p_871->g_809 p_871->g_376.f0 p_871->g_212.f3 p_871->g_480.f0 p_871->g_796 p_871->g_232 p_871->g_459 p_871->g_117 p_871->g_118 p_871->g_97 p_871->g_212.f4 p_871->g_480.f4 p_871->g_542 p_871->g_387.f6 p_871->g_539 p_871->g_373.f3 p_871->g_689.f0 p_871->g_95.f2 p_871->g_9 p_871->g_543.f0 p_871->g_828
 * writes: p_871->g_747 p_871->g_147.f4 p_871->g_480.f1 p_871->g_10 p_871->g_228 p_871->g_4 p_871->g_543.f4 p_871->g_8 p_871->g_382 p_871->g_147.f2.f4 p_871->g_196 p_871->g_543.f3 p_871->g_827 p_871->g_227 p_871->g_539
 */
struct S0  func_55(int32_t * p_56, uint32_t  p_57, uint64_t  p_58, struct S2 * p_871)
{ /* block id: 375 */
    uint32_t *l_746 = &p_871->g_747[1][4];
    union U1 **l_762 = (void*)0;
    union U1 ***l_763 = &l_762;
    union U1 **l_764 = &p_871->g_146[0];
    int64_t *l_765 = &p_871->g_147.f4;
    int32_t l_766 = 0x203BB09FL;
    int16_t *l_767 = &p_871->g_480.f1;
    int32_t *l_768 = &p_871->g_4;
    uint8_t *l_769 = &p_871->g_543.f4;
    uint64_t *l_784 = &p_871->g_382;
    int32_t **l_790 = &p_871->g_196;
    uint16_t *l_794 = &p_871->g_232;
    uint16_t **l_793 = &l_794;
    int32_t l_811 = 1L;
    int8_t l_824 = 7L;
    int32_t *l_825 = &l_811;
    int32_t *l_826 = &p_871->g_827;
    p_871->g_8 |= (((p_871->g_543.f1 || p_871->g_212.f5) | (safe_sub_func_uint8_t_u_u(((*l_769) = (((*l_746)--) , (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((*l_768) = ((*p_871->g_196) = (((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((((*l_765) = (((safe_mod_func_int16_t_s_s(p_871->g_454.f1, (safe_mod_func_uint32_t_u_u(0x6FF5C19FL, (*p_871->g_196))))) , ((*l_763) = l_762)) != l_764)) , (+((*l_767) = l_766))) & (p_871->g_373.f2 > p_57)), p_57)), p_57)) == p_57) < p_58))), 3L)), 0x4E8AL)))), p_871->g_382))) & 0xDA3C34A31B42DF02L);
    (*l_790) = func_72((l_768 = func_78(p_56, (**p_871->g_273), (!(((*l_763) = &p_871->g_146[0]) != (((safe_add_func_int32_t_s_s((p_871->g_689.f3 <= ((*l_765) = 0x30A767303531A188L)), (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(1UL, (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((++(*l_769)) ^ 0x4FL), (((*l_784) ^= p_57) , ((((safe_div_func_int64_t_s_s(((safe_add_func_uint8_t_u_u((((*l_768) | (*l_768)) != 0L), 0x40L)) <= (*l_768)), 8L)) > p_871->g_543.f2) ^ (*l_768)) , 0x1E5EL)))), 255UL)))), (*l_768))), 4)))) , p_58) , l_764))), (*l_768), p_58, p_871)), p_56, p_871->g_212.f5, &l_766, l_766, p_871);
    for (p_871->g_543.f3 = 0; (p_871->g_543.f3 >= 31); p_871->g_543.f3++)
    { /* block id: 392 */
        uint64_t **l_801 = (void*)0;
        int32_t l_808 = 0L;
        int32_t *l_810[10][3][8] = {{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}},{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}},{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}},{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}},{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}},{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}},{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}},{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}},{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}},{{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0},{&l_766,&p_871->g_8,&l_766,&p_871->g_8,(void*)0,&l_808,&l_808,(void*)0}}};
        int i, j, k;
        (**l_790) &= (l_793 == p_871->g_795);
        p_871->g_8 ^= (safe_add_func_uint32_t_u_u((p_871->g_485 == p_871->g_485), (((safe_div_func_uint16_t_u_u(((l_801 != p_871->g_485) | ((safe_lshift_func_uint16_t_u_u(0x3D9EL, 6)) >= (((*l_784) = ((l_766 = ((**l_790) = (((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((l_808 != p_58), ((p_871->g_809[0][0][1] , p_871->g_376[0].f0) != (**l_790)))), 0x53444F1EL)) , p_58) != 250UL))) ^ p_871->g_212.f3)) != p_58))), p_871->g_480.f0)) & l_811) <= p_871->g_10[8][3])));
    }
    (*l_790) = func_59((safe_sub_func_int64_t_s_s(0x05532D833311799CL, (&l_794 != &p_871->g_796))), (safe_add_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(((((*l_784) = p_57) | (safe_sub_func_int32_t_s_s(0x60C3DA7BL, (l_769 == l_769)))) >= 3L), (((*l_826) = ((((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((((*l_825) = ((**l_790) = l_824)) , (*p_871->g_796)), p_871->g_459)) == 0x2FF29B5EL), 65535UL)) == (**p_871->g_117)) , p_871->g_212.f4) > p_871->g_480.f4)) , p_871->g_454.f1))) && p_58), p_57)), p_871);
    return p_871->g_828;
}


/* ------------------------------------------ */
/* 
 * reads : p_871->g_542 p_871->g_196 p_871->g_10 p_871->g_228 p_871->g_543.f3 p_871->g_387.f6 p_871->g_539 p_871->g_376.f0 p_871->g_373.f3 p_871->g_689.f0 p_871->g_373.f2 p_871->g_232 p_871->g_117 p_871->g_118 p_871->g_97 p_871->g_95.f2 p_871->g_9 p_871->g_543.f0
 * writes: p_871->g_543.f3 p_871->g_227 p_871->g_539
 */
int32_t * func_59(int64_t  p_60, int64_t  p_61, struct S2 * p_871)
{ /* block id: 331 */
    int64_t l_645 = (-1L);
    int32_t *l_662[1][8][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t l_697 = (-1L);
    struct S0 *l_735[4][6][3] = {{{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]}},{{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]}},{{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]}},{{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]},{(void*)0,(void*)0,&p_871->g_376[0]}}};
    uint64_t ***l_741 = &p_871->g_485;
    int i, j, k;
    if ((p_61 , (l_645 , (**p_871->g_542))))
    { /* block id: 332 */
        int64_t l_655 = 0L;
        int64_t l_658 = (-4L);
        int32_t l_659 = 1L;
        int16_t *l_679 = (void*)0;
        int32_t ***l_682 = (void*)0;
        int32_t l_690 = 0x5226B452L;
        int32_t l_691 = (-1L);
        int32_t l_692 = 0x615B3E5DL;
        int32_t l_693[4][2] = {{0x11110DA3L,0x11110DA3L},{0x11110DA3L,0x11110DA3L},{0x11110DA3L,0x11110DA3L},{0x11110DA3L,0x11110DA3L}};
        int8_t l_694 = 0x3AL;
        int64_t l_695 = 0x2FCDEA9000BB3EF4L;
        int32_t l_696 = (-6L);
        uint64_t l_698[5][10] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
        int i, j;
        for (p_871->g_543.f3 = 10; (p_871->g_543.f3 == 30); ++p_871->g_543.f3)
        { /* block id: 335 */
            int32_t *l_652[4][9] = {{&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_8,&p_871->g_4,&p_871->g_8,&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3]},{&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_8,&p_871->g_4,&p_871->g_8,&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3]},{&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_8,&p_871->g_4,&p_871->g_8,&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3]},{&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_8,&p_871->g_4,&p_871->g_8,&p_871->g_10[6][3],&p_871->g_10[6][3],&p_871->g_10[6][3]}};
            int i, j;
            (1 + 1);
        }
        l_698[2][6]--;
    }
    else
    { /* block id: 366 */
        int32_t l_709 = (-1L);
        int64_t *l_710 = &p_871->g_227;
        int32_t *l_711 = &p_871->g_228[1];
        int8_t *l_726 = &p_871->g_539;
        uint16_t **l_728[1];
        uint16_t ***l_727 = &l_728[0];
        struct S0 *l_734 = &p_871->g_689;
        struct S0 **l_736 = &l_735[2][0][0];
        int32_t **l_742[1][8][6] = {{{&l_662[0][5][0],&l_662[0][5][0],&l_662[0][3][4],&l_662[0][5][0],&l_711,&l_662[0][3][4]},{&l_662[0][5][0],&l_662[0][5][0],&l_662[0][3][4],&l_662[0][5][0],&l_711,&l_662[0][3][4]},{&l_662[0][5][0],&l_662[0][5][0],&l_662[0][3][4],&l_662[0][5][0],&l_711,&l_662[0][3][4]},{&l_662[0][5][0],&l_662[0][5][0],&l_662[0][3][4],&l_662[0][5][0],&l_711,&l_662[0][3][4]},{&l_662[0][5][0],&l_662[0][5][0],&l_662[0][3][4],&l_662[0][5][0],&l_711,&l_662[0][3][4]},{&l_662[0][5][0],&l_662[0][5][0],&l_662[0][3][4],&l_662[0][5][0],&l_711,&l_662[0][3][4]},{&l_662[0][5][0],&l_662[0][5][0],&l_662[0][3][4],&l_662[0][5][0],&l_711,&l_662[0][3][4]},{&l_662[0][5][0],&l_662[0][5][0],&l_662[0][3][4],&l_662[0][5][0],&l_711,&l_662[0][3][4]}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_728[i] = (void*)0;
        (*l_727) = ((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((p_61 ^ (safe_mul_func_int8_t_s_s(((*l_726) = ((((safe_add_func_int64_t_s_s(((*l_710) = l_709), (l_662[0][5][0] == l_711))) , func_78(l_662[0][0][3], p_60, (safe_mul_func_uint16_t_u_u((((p_871->g_387.f6 & (((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(((*l_726) &= (+(safe_div_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((*l_711), (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(p_60, 0x278AL)), 10)))), (-1L))))), p_60)), 0x52236D09L)) && (-4L)) , p_871->g_376[0].f0)) != 65535UL) <= p_871->g_373.f3), p_60)), p_871->g_689.f0, (*l_711), p_871)) == l_711) >= p_871->g_373.f2)), p_61))) < (*p_871->g_196)), p_871->g_232)), (**p_871->g_117))) , (void*)0);
        l_662[0][5][0] = (((safe_mod_func_int64_t_s_s(((p_61 | (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((**p_871->g_117))), ((l_734 == (p_60 , ((*l_736) = l_735[2][0][0]))) ^ (safe_div_func_uint16_t_u_u((4L | ((((((safe_lshift_func_uint16_t_u_s((((**p_871->g_117) || ((*l_711) , (((l_741 == (void*)0) , p_61) || p_871->g_95[2].f2))) , 0xD207L), 7)) && p_871->g_9) | 0x3F39L) & p_871->g_543.f0) > (*p_871->g_196)) , 2UL)), (-1L))))))) < 7UL), 0x65EAAA56FA04855AL)) | p_61) , (void*)0);
    }
    return l_662[0][2][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_871->g_228 p_871->g_634 p_871->g_373.f3 p_871->g_212.f4 p_871->g_376.f0 p_871->g_543.f3 p_871->g_511 p_871->g_643 p_871->g_196
 * writes: p_871->g_511 p_871->g_147.f4 p_871->g_10 p_871->g_228
 */
uint32_t  func_62(int8_t  p_63, int32_t * p_64, uint16_t  p_65, uint16_t  p_66, int32_t * p_67, struct S2 * p_871)
{ /* block id: 324 */
    uint8_t l_624 = 255UL;
    union U1 ***l_639 = &p_871->g_154;
    int64_t *l_640 = &p_871->g_511[0];
    int64_t *l_641 = &p_871->g_147.f4;
    uint8_t l_642[10][7][3] = {{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}},{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}},{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}},{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}},{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}},{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}},{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}},{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}},{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}},{{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L},{249UL,252UL,0xE1L}}};
    int32_t l_644 = 1L;
    int i, j, k;
    (*p_871->g_196) = (safe_lshift_func_int8_t_s_s((l_624 > (((((((*l_641) = (((*l_640) |= ((safe_sub_func_uint16_t_u_u(p_871->g_228[1], p_66)) | (safe_mul_func_int8_t_s_s(p_66, ((safe_lshift_func_uint16_t_u_u(65535UL, (65534UL == (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((((p_871->g_634 != ((safe_add_func_uint16_t_u_u(l_624, ((safe_mul_func_int8_t_s_s(p_871->g_373.f3, l_624)) >= p_871->g_212.f4))) , l_639)) > p_65) , p_871->g_373.f3))), p_871->g_376[0].f0))))) >= p_871->g_543.f3))))) != p_66)) == l_642[1][1][2]) , p_871->g_643) , 5L) ^ p_65) ^ 0x5EL)), 7));
    l_644 = ((*p_64) = l_644);
    return l_644;
}


/* ------------------------------------------ */
/* 
 * reads : p_871->g_273 p_871->g_172.f2.f3 p_871->g_373.f1 p_871->g_543.f4
 * writes: p_871->g_196 p_871->g_172.f2.f3 p_871->g_10
 */
uint16_t  func_70(int32_t * p_71, struct S2 * p_871)
{ /* block id: 150 */
    int32_t *l_272[10] = {&p_871->g_228[1],&p_871->g_228[1],&p_871->g_228[1],&p_871->g_228[1],&p_871->g_228[1],&p_871->g_228[1],&p_871->g_228[1],&p_871->g_228[1],&p_871->g_228[1],&p_871->g_228[1]};
    uint16_t l_289 = 65535UL;
    int64_t l_512 = 0x3937AADA066D6357L;
    int32_t *l_519 = &p_871->g_10[9][3];
    union U1 ***l_571[6][4] = {{&p_871->g_154,&p_871->g_154,&p_871->g_154,&p_871->g_154},{&p_871->g_154,&p_871->g_154,&p_871->g_154,&p_871->g_154},{&p_871->g_154,&p_871->g_154,&p_871->g_154,&p_871->g_154},{&p_871->g_154,&p_871->g_154,&p_871->g_154,&p_871->g_154},{&p_871->g_154,&p_871->g_154,&p_871->g_154,&p_871->g_154},{&p_871->g_154,&p_871->g_154,&p_871->g_154,&p_871->g_154}};
    int i, j;
    (*p_871->g_273) = l_272[8];
    for (p_871->g_172.f2.f3 = 0; (p_871->g_172.f2.f3 > 49); p_871->g_172.f2.f3++)
    { /* block id: 154 */
        union U1 **l_278 = &p_871->g_146[0];
        union U1 ***l_279 = (void*)0;
        int32_t l_288 = 0L;
        uint64_t l_383 = 0xDC8BA5D176F9586FL;
        uint16_t *l_429 = &p_871->g_232;
        uint16_t **l_428 = &l_429;
        int32_t l_479 = 0x36CC1A14L;
        int32_t *l_545 = &p_871->g_10[6][3];
        int32_t l_601[4][5] = {{0x520697F3L,0x003A8524L,0x1202B26AL,0L,0x003A8524L},{0x520697F3L,0x003A8524L,0x1202B26AL,0L,0x003A8524L},{0x520697F3L,0x003A8524L,0x1202B26AL,0L,0x003A8524L},{0x520697F3L,0x003A8524L,0x1202B26AL,0L,0x003A8524L}};
        uint16_t l_613 = 0x3DDFL;
        int i, j;
        (1 + 1);
    }
    (*l_519) = ((safe_lshift_func_int8_t_s_s(p_871->g_373.f1, 3)) < 0x7CL);
    return p_871->g_543.f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_871->g_147.f2.f4
 * writes: p_871->g_147.f2.f4
 */
int32_t * func_72(int32_t * p_73, int32_t * p_74, uint64_t  p_75, int32_t * p_76, int8_t  p_77, struct S2 * p_871)
{ /* block id: 141 */
    int32_t *l_271 = &p_871->g_228[2];
    for (p_871->g_147.f2.f4 = 0; (p_871->g_147.f2.f4 <= 3); p_871->g_147.f2.f4 += 1)
    { /* block id: 144 */
        int32_t l_270 = 0L;
        int i;
        p_76 = &p_871->g_228[p_871->g_147.f2.f4];
        l_270 ^= 0x618B0B13L;
        return p_76;
    }
    return l_271;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_78(int32_t * p_79, int32_t  p_80, uint32_t  p_81, int64_t  p_82, uint64_t  p_83, struct S2 * p_871)
{ /* block id: 138 */
    int32_t *l_266 = (void*)0;
    int32_t **l_267[6];
    int32_t *l_268[6][9] = {{&p_871->g_4,&p_871->g_8,(void*)0,&p_871->g_228[0],&p_871->g_8,&p_871->g_228[0],(void*)0,&p_871->g_8,&p_871->g_4},{&p_871->g_4,&p_871->g_8,(void*)0,&p_871->g_228[0],&p_871->g_8,&p_871->g_228[0],(void*)0,&p_871->g_8,&p_871->g_4},{&p_871->g_4,&p_871->g_8,(void*)0,&p_871->g_228[0],&p_871->g_8,&p_871->g_228[0],(void*)0,&p_871->g_8,&p_871->g_4},{&p_871->g_4,&p_871->g_8,(void*)0,&p_871->g_228[0],&p_871->g_8,&p_871->g_228[0],(void*)0,&p_871->g_8,&p_871->g_4},{&p_871->g_4,&p_871->g_8,(void*)0,&p_871->g_228[0],&p_871->g_8,&p_871->g_228[0],(void*)0,&p_871->g_8,&p_871->g_4},{&p_871->g_4,&p_871->g_8,(void*)0,&p_871->g_228[0],&p_871->g_8,&p_871->g_228[0],(void*)0,&p_871->g_8,&p_871->g_4}};
    int i, j;
    for (i = 0; i < 6; i++)
        l_267[i] = &l_266;
    p_79 = l_266;
    return l_268[5][7];
}


/* ------------------------------------------ */
/* 
 * reads : p_871->g_4 p_871->g_7 p_871->g_95 p_871->g_10 p_871->g_97 p_871->g_8 p_871->g_117 p_871->g_9 p_871->g_127 p_871->g_146 p_871->g_39 p_871->g_153 p_871->g_197 p_871->g_147.f0 p_871->g_196 p_871->g_204 p_871->g_154 p_871->g_147 p_871->g_207 p_871->g_212 p_871->g_227 p_871->g_260
 * writes: p_871->g_97 p_871->g_4 p_871->g_10 p_871->g_7 p_871->g_8 p_871->g_127 p_871->g_95 p_871->g_146 p_871->g_147.f3 p_871->g_154 p_871->g_147.f2.f1 p_871->g_196 p_871->g_172.f2.f0 p_871->g_172.f3 p_871->g_227 p_871->g_228 p_871->g_212.f3 p_871->g_232
 */
int8_t  func_87(int32_t * p_88, int32_t * p_89, struct S2 * p_871)
{ /* block id: 25 */
    uint64_t l_93 = 0xE17D650891F15DEEL;
    int32_t *l_94 = &p_871->g_10[7][3];
    uint32_t *l_96 = &p_871->g_97;
    int32_t l_185[2][7][9] = {{{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L}},{{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L},{0x509CE921L,0L,0x509CE921L,0x731F8F64L,0L,0x72C81C4EL,2L,0x70A9B80DL,3L}}};
    int8_t l_255 = 4L;
    int i, j, k;
    if ((p_871->g_4 == (safe_sub_func_uint32_t_u_u(4294967295UL, ((*l_96) = ((l_93 <= ((*p_88) | (p_871->g_7[0] | (l_94 == ((p_871->g_95[2] , (*l_94)) , p_88))))) , (*l_94)))))))
    { /* block id: 27 */
        uint32_t **l_98 = (void*)0;
        l_98 = &l_96;
    }
    else
    { /* block id: 29 */
        int16_t l_99 = 0x165FL;
        int32_t *l_100 = (void*)0;
        int32_t *l_101 = &p_871->g_8;
        uint8_t l_102[6] = {0x9BL,0x9BL,0x9BL,0x9BL,0x9BL,0x9BL};
        int i;
        (*p_88) ^= (*l_94);
        (*l_94) = l_99;
        ++l_102[0];
        for (p_871->g_97 = 0; p_871->g_97 < 7; p_871->g_97 += 1)
        {
            p_871->g_7[p_871->g_97] = (-7L);
        }
    }
    for (p_871->g_97 = 5; (p_871->g_97 <= 12); p_871->g_97++)
    { /* block id: 37 */
        (*p_88) = (*p_88);
        if (p_871->g_95[2].f1)
            continue;
        for (p_871->g_4 = 19; (p_871->g_4 <= (-18)); p_871->g_4 = safe_sub_func_uint32_t_u_u(p_871->g_4, 5))
        { /* block id: 42 */
            int8_t l_119 = 0x59L;
            for (p_871->g_8 = 0; (p_871->g_8 > 16); p_871->g_8 = safe_add_func_int8_t_s_s(p_871->g_8, 8))
            { /* block id: 45 */
                uint32_t l_126 = 0xE44F3935L;
                p_871->g_127 &= (safe_div_func_uint64_t_u_u(18446744073709551615UL, (((-1L) & ((safe_sub_func_int32_t_s_s(((*l_94) = (((safe_sub_func_uint8_t_u_u(((void*)0 == l_96), 0x69L)) , p_871->g_117) == ((l_119 , (((safe_rshift_func_uint8_t_u_u((*l_94), (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((p_88 == (void*)0) > 8UL) != 4L), p_871->g_9)), (*l_94))))) & p_871->g_10[1][3]) <= (*l_94))) , (void*)0))), 4294967295UL)) || p_871->g_95[2].f4)) & l_126)));
            }
        }
        p_871->g_95[2] = p_871->g_95[2];
    }
    for (p_871->g_97 = 0; (p_871->g_97 <= 9); p_871->g_97 += 1)
    { /* block id: 54 */
        int16_t l_132 = 0L;
        int16_t l_143 = (-7L);
        uint32_t *l_144 = &p_871->g_97;
        union U1 **l_152[9][10] = {{&p_871->g_146[0],&p_871->g_146[0],&p_871->g_146[0],(void*)0,(void*)0,&p_871->g_146[0],(void*)0,(void*)0,(void*)0,&p_871->g_146[0]},{&p_871->g_146[0],&p_871->g_146[0],&p_871->g_146[0],(void*)0,(void*)0,&p_871->g_146[0],(void*)0,(void*)0,(void*)0,&p_871->g_146[0]},{&p_871->g_146[0],&p_871->g_146[0],&p_871->g_146[0],(void*)0,(void*)0,&p_871->g_146[0],(void*)0,(void*)0,(void*)0,&p_871->g_146[0]},{&p_871->g_146[0],&p_871->g_146[0],&p_871->g_146[0],(void*)0,(void*)0,&p_871->g_146[0],(void*)0,(void*)0,(void*)0,&p_871->g_146[0]},{&p_871->g_146[0],&p_871->g_146[0],&p_871->g_146[0],(void*)0,(void*)0,&p_871->g_146[0],(void*)0,(void*)0,(void*)0,&p_871->g_146[0]},{&p_871->g_146[0],&p_871->g_146[0],&p_871->g_146[0],(void*)0,(void*)0,&p_871->g_146[0],(void*)0,(void*)0,(void*)0,&p_871->g_146[0]},{&p_871->g_146[0],&p_871->g_146[0],&p_871->g_146[0],(void*)0,(void*)0,&p_871->g_146[0],(void*)0,(void*)0,(void*)0,&p_871->g_146[0]},{&p_871->g_146[0],&p_871->g_146[0],&p_871->g_146[0],(void*)0,(void*)0,&p_871->g_146[0],(void*)0,(void*)0,(void*)0,&p_871->g_146[0]},{&p_871->g_146[0],&p_871->g_146[0],&p_871->g_146[0],(void*)0,(void*)0,&p_871->g_146[0],(void*)0,(void*)0,(void*)0,&p_871->g_146[0]}};
        int32_t l_167 = 0x28B32BEEL;
        int32_t l_175 = 3L;
        int32_t l_186 = 0x3E7333C2L;
        int32_t l_188[9];
        uint32_t l_192 = 0xBC701F63L;
        int8_t l_247 = 0x68L;
        int i, j;
        for (i = 0; i < 9; i++)
            l_188[i] = (-1L);
        if (p_871->g_10[7][2])
            break;
        if (p_871->g_8)
        { /* block id: 56 */
            uint64_t l_139 = 18446744073709551611UL;
            uint32_t l_142 = 0x18778202L;
            int8_t *l_145 = &p_871->g_7[5];
            (*p_88) &= (((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((*l_145) = ((l_132 && (p_871->g_95[2].f5 & (&p_871->g_10[6][3] == (void*)0))) | (((((((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_139 && ((((((safe_lshift_func_int8_t_s_s(((*l_94) && l_142), 6)) || l_142) , (((((void*)0 != &p_871->g_8) < p_871->g_127) & l_132) > p_871->g_10[4][3])) , 255UL) < 0L) & (*l_94))), 2)), 1)), (*l_94))) != 4UL) , l_143) ^ l_132) < (*l_94)) && l_139) , l_144) != l_144) , p_871->g_10[6][3]))) >= 0x1BL), 0xDCF8L)), p_871->g_10[2][1])) != l_139) == p_871->g_97);
            (*p_88) = (-3L);
            if (p_871->g_7[0])
                continue;
        }
        else
        { /* block id: 61 */
            int16_t l_151 = 6L;
            union U1 *l_170 = &p_871->g_147;
            int32_t l_176 = 5L;
            int32_t l_187[7][10] = {{1L,8L,1L,1L,8L,1L,1L,8L,1L,1L},{1L,8L,1L,1L,8L,1L,1L,8L,1L,1L},{1L,8L,1L,1L,8L,1L,1L,8L,1L,1L},{1L,8L,1L,1L,8L,1L,1L,8L,1L,1L},{1L,8L,1L,1L,8L,1L,1L,8L,1L,1L},{1L,8L,1L,1L,8L,1L,1L,8L,1L,1L},{1L,8L,1L,1L,8L,1L,1L,8L,1L,1L}};
            int i, j;
            for (l_143 = 8; (l_143 >= 1); l_143 -= 1)
            { /* block id: 64 */
                union U1 *l_171 = &p_871->g_172;
                int32_t l_173 = 0x7CE1603CL;
                int32_t l_189 = 0L;
                int32_t l_191 = 0x46425BE3L;
                uint32_t l_229 = 0x230D2C0BL;
                int32_t l_243 = (-4L);
                int32_t l_244 = 0x165C230CL;
                int32_t l_245 = 6L;
                int32_t l_248 = 0x3768528BL;
                int32_t l_249 = (-1L);
                int32_t l_250 = 1L;
                int32_t l_251 = (-10L);
                int32_t l_254 = 1L;
                int32_t l_256[1];
                uint16_t l_257[2];
                int i;
                for (i = 0; i < 1; i++)
                    l_256[i] = 0x3914EE3DL;
                for (i = 0; i < 2; i++)
                    l_257[i] = 65535UL;
                for (p_871->g_4 = 1; (p_871->g_4 <= 9); p_871->g_4 += 1)
                { /* block id: 67 */
                    for (p_871->g_8 = 3; (p_871->g_8 >= 0); p_871->g_8 -= 1)
                    { /* block id: 70 */
                        union U1 **l_150 = &p_871->g_146[0];
                        (*l_150) = p_871->g_146[0];
                    }
                    if (p_871->g_39)
                        continue;
                }
                if (p_871->g_10[7][1])
                { /* block id: 75 */
                    int8_t l_155[2];
                    int16_t *l_168 = (void*)0;
                    int16_t *l_169 = &p_871->g_147.f2.f1;
                    union U1 ***l_174 = (void*)0;
                    int32_t l_190[5][7];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_155[i] = (-1L);
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_190[i][j] = 0x400974A8L;
                    }
                    for (p_871->g_147.f3 = 0; (p_871->g_147.f3 <= 6); p_871->g_147.f3 += 1)
                    { /* block id: 78 */
                        int i;
                        (*p_88) = l_151;
                        (*p_871->g_153) = l_152[7][2];
                        if (p_871->g_127)
                            break;
                        return l_155[0];
                    }
                    if ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((-1L), 10)), 0)) ^ l_151) == (l_175 &= (((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((*l_94) == ((*l_94) , ((safe_unary_minus_func_uint32_t_u(((((l_132 || ((((l_155[0] && (safe_lshift_func_int8_t_s_u(0x6CL, (((*l_169) = (p_871->g_95[p_871->g_97] , (p_871->g_127 = (l_167 |= (0x8912L != 0x9D5CL))))) ^ l_155[0])))) , l_167) , l_170) != l_171)) , 0x1DL) && (-1L)) > 0x09L))) < l_173))), 18446744073709551615UL)), l_132)) , &l_152[2][9]) != l_174))))
                    { /* block id: 88 */
                        return l_132;
                    }
                    else
                    { /* block id: 90 */
                        int32_t *l_177 = &p_871->g_8;
                        int32_t *l_178 = (void*)0;
                        int32_t *l_179 = &p_871->g_10[6][3];
                        int32_t *l_180 = &l_173;
                        int32_t *l_181 = &l_175;
                        int32_t *l_182 = &l_173;
                        int32_t *l_183 = &l_167;
                        int32_t *l_184[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_184[i] = &l_176;
                        l_192++;
                        (*p_871->g_197) = &l_190[1][3];
                        return l_191;
                    }
                }
                else
                { /* block id: 95 */
                    (*p_871->g_196) |= ((safe_sub_func_uint64_t_u_u(18446744073709551615UL, (safe_lshift_func_uint8_t_u_s(l_187[4][5], (safe_add_func_int8_t_s_s(l_186, p_871->g_147.f0)))))) >= l_151);
                }
                for (p_871->g_172.f2.f0 = 1; (p_871->g_172.f2.f0 <= 6); p_871->g_172.f2.f0 += 1)
                { /* block id: 100 */
                    volatile struct S0 *l_206 = &p_871->g_95[4];
                    for (l_151 = 1; (l_151 >= 0); l_151 -= 1)
                    { /* block id: 103 */
                        int32_t **l_205 = &l_94;
                        int i, j, k;
                        l_185[l_151][(l_151 + 5)][(l_151 + 4)] &= 0x1EC2C39DL;
                        (*p_871->g_204) = &l_185[l_151][(l_151 + 4)][(l_151 + 6)];
                        (*l_205) = &l_185[l_151][l_151][(p_871->g_172.f2.f0 + 2)];
                    }
                    (*l_206) = ((**p_871->g_154) , p_871->g_95[7]);
                }
                for (p_871->g_172.f3 = 0; (p_871->g_172.f3 <= 3); p_871->g_172.f3 += 1)
                { /* block id: 112 */
                    int64_t *l_226 = &p_871->g_227;
                    uint8_t *l_230 = &p_871->g_212.f3;
                    uint16_t *l_231 = &p_871->g_232;
                    int32_t l_240 = 0x773BB535L;
                    int32_t l_241 = 0x1691744EL;
                    int32_t l_242[5][3];
                    int32_t l_253 = 0x4B9D765CL;
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_242[i][j] = 0x018798A2L;
                    }
                    (*p_871->g_207) = &p_871->g_10[p_871->g_97][p_871->g_172.f3];
                    if ((**p_871->g_197))
                        break;
                    if (((((*l_231) = (safe_mod_func_uint8_t_u_u(p_871->g_147.f0, (safe_mod_func_uint64_t_u_u(((l_175 , p_871->g_212) , (safe_div_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((((((((safe_unary_minus_func_uint8_t_u(((*l_230) ^= (((safe_mod_func_uint8_t_u_u((p_88 == (void*)0), ((0x1A3D08D108B6CD92L <= (p_871->g_228[1] = ((*l_226) = (((safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((*l_94), l_188[5])) & l_176) , 0xD59AL), 11)) ^ l_175) && 0UL)))) , l_229))) != p_871->g_95[2].f4) , l_191)))) >= 5L) & l_151) , &p_871->g_7[2]) == (void*)0) && p_871->g_227) , p_871->g_212.f1) && p_871->g_95[2].f3), 0x71L)), l_189)) , 1UL), 9UL))), l_132))))) & 0UL) < 0x56L))
                    { /* block id: 119 */
                        return p_871->g_10[6][3];
                    }
                    else
                    { /* block id: 121 */
                        int32_t *l_233 = &l_188[4];
                        int32_t *l_234 = (void*)0;
                        int32_t *l_235 = &p_871->g_8;
                        int32_t *l_236 = &l_185[0][1][6];
                        int32_t l_237[8] = {1L,(-4L),1L,1L,(-4L),1L,1L,(-4L)};
                        int32_t *l_238 = &l_175;
                        int32_t *l_239[7] = {&l_187[1][8],&l_187[1][8],&l_187[1][8],&l_187[1][8],&l_187[1][8],&l_187[1][8],&l_187[1][8]};
                        int32_t l_246 = 0x7CED22EAL;
                        int i;
                        if (l_173)
                            break;
                        l_257[1]++;
                        return l_241;
                    }
                }
            }
            (*p_871->g_260) = &l_185[1][2][0];
            return l_187[3][7];
        }
    }
    for (p_871->g_8 = 28; (p_871->g_8 > (-1)); --p_871->g_8)
    { /* block id: 134 */
        uint16_t l_263 = 0x9DBCL;
        return l_263;
    }
    return (*l_94);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_872;
    struct S2* p_871 = &c_872;
    struct S2 c_873 = {
        8L, // p_871->g_4
        {0x59L,0x59L,0x59L,0x59L,0x59L,0x59L,0x59L}, // p_871->g_7
        0x36F65E79L, // p_871->g_8
        0x047D2038L, // p_871->g_9
        {{0L,0x314F4E79L,0x4157736DL,0x11B4956EL},{0L,0x314F4E79L,0x4157736DL,0x11B4956EL},{0L,0x314F4E79L,0x4157736DL,0x11B4956EL},{0L,0x314F4E79L,0x4157736DL,0x11B4956EL},{0L,0x314F4E79L,0x4157736DL,0x11B4956EL},{0L,0x314F4E79L,0x4157736DL,0x11B4956EL},{0L,0x314F4E79L,0x4157736DL,0x11B4956EL},{0L,0x314F4E79L,0x4157736DL,0x11B4956EL},{0L,0x314F4E79L,0x4157736DL,0x11B4956EL},{0L,0x314F4E79L,0x4157736DL,0x11B4956EL}}, // p_871->g_10
        0L, // p_871->g_39
        {{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL},{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL},{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL},{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL},{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL},{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL},{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL},{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL},{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL},{0x01A93EFF9D668DABL,1L,0x277BL,0UL,1UL,4L,0x31FB6C9C462E654CL}}, // p_871->g_95
        0x04CB07E9L, // p_871->g_97
        {&p_871->g_97,&p_871->g_97,&p_871->g_97,&p_871->g_97,&p_871->g_97,&p_871->g_97,&p_871->g_97,&p_871->g_97,&p_871->g_97,&p_871->g_97}, // p_871->g_118
        &p_871->g_118[0], // p_871->g_117
        0x5CC4L, // p_871->g_127
        {18446744073709551614UL}, // p_871->g_147
        {&p_871->g_147}, // p_871->g_146
        (void*)0, // p_871->g_148
        (void*)0, // p_871->g_149
        &p_871->g_146[0], // p_871->g_154
        &p_871->g_154, // p_871->g_153
        {18446744073709551615UL}, // p_871->g_172
        &p_871->g_8, // p_871->g_196
        {{{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196}},{{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196}},{{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196}},{{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196}},{{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196}},{{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196}},{{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196}},{{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196}},{{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196},{&p_871->g_196,&p_871->g_196}}}, // p_871->g_195
        &p_871->g_196, // p_871->g_197
        &p_871->g_196, // p_871->g_204
        &p_871->g_196, // p_871->g_207
        {0L,0L,3L,0xDCL,0x3CL,6L,18446744073709551613UL}, // p_871->g_212
        0x57BAE0BE8C19A545L, // p_871->g_227
        {0x40485674L,0x40485674L,0x40485674L,0x40485674L}, // p_871->g_228
        1UL, // p_871->g_232
        5L, // p_871->g_252
        &p_871->g_196, // p_871->g_260
        {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}}, // p_871->g_269
        &p_871->g_196, // p_871->g_273
        {{0x5903581B5EB7728FL,0x5109L,0x0149L,0x08L,0x5BL,0x72B72AB8E5642EEFL,0x898BB63FFE5A35B0L},{0x5903581B5EB7728FL,0x5109L,0x0149L,0x08L,0x5BL,0x72B72AB8E5642EEFL,0x898BB63FFE5A35B0L}}, // p_871->g_280
        (void*)0, // p_871->g_293
        &p_871->g_293, // p_871->g_292
        0xD8305E03BA83663CL, // p_871->g_344
        {0x1D6262D24C5DD7CFL,0x35C0L,3L,4UL,0x89L,-8L,0UL}, // p_871->g_373
        {{0x4997CFD824F1799DL,-6L,1L,255UL,253UL,6L,0x955FC9F1E5D0C2D5L}}, // p_871->g_376
        0x600BFB7852BE3175L, // p_871->g_382
        {0L,0x20FBL,-1L,0x50L,0x38L,-1L,0x931EA7D3F9B3F220L}, // p_871->g_387
        {(void*)0}, // p_871->g_394
        &p_871->g_196, // p_871->g_395
        4UL, // p_871->g_396
        {0x4DD9D3AB9065EC86L,0L,5L,0x45L,9UL,0L,0x429962B05023B0A0L}, // p_871->g_454
        0x0CL, // p_871->g_459
        {0x5A38A5D5AAC2DC8AL,0x2757L,0L,0UL,0xDBL,0x673DBD5D52FD6D98L,0xF08B0E00B5322B0EL}, // p_871->g_480
        (void*)0, // p_871->g_485
        &p_871->g_196, // p_871->g_490
        {1L}, // p_871->g_511
        0L, // p_871->g_539
        &p_871->g_196, // p_871->g_542
        {6L,-1L,0x76FFL,0x1FL,9UL,0x4633B61C401016B9L,0x3013F9644F74B6B2L}, // p_871->g_543
        &p_871->g_376[0], // p_871->g_544
        &p_871->g_149, // p_871->g_634
        {0x0815EB7009EA5E05L,0x0903L,0x0D72L,1UL,9UL,1L,18446744073709551606UL}, // p_871->g_643
        {18446744073709551609UL}, // p_871->g_683
        {-1L,-1L,-6L,0x6BL,0xDDL,0x3664B418ACC3BC45L,18446744073709551615UL}, // p_871->g_689
        4294967292UL, // p_871->g_743
        {{0x0AF292A4L,0x0AF292A4L,0x1A2E57C1L,1UL,4294967295UL,1UL,0x1A2E57C1L},{0x0AF292A4L,0x0AF292A4L,0x1A2E57C1L,1UL,4294967295UL,1UL,0x1A2E57C1L},{0x0AF292A4L,0x0AF292A4L,0x1A2E57C1L,1UL,4294967295UL,1UL,0x1A2E57C1L},{0x0AF292A4L,0x0AF292A4L,0x1A2E57C1L,1UL,4294967295UL,1UL,0x1A2E57C1L},{0x0AF292A4L,0x0AF292A4L,0x1A2E57C1L,1UL,4294967295UL,1UL,0x1A2E57C1L}}, // p_871->g_747
        (void*)0, // p_871->g_789
        &p_871->g_232, // p_871->g_796
        &p_871->g_796, // p_871->g_795
        {{{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}},{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}}},{{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}},{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}}},{{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}},{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}}},{{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}},{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}}},{{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}},{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}}},{{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}},{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}}},{{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}},{{0xF71809D8D5BFE1E7L},{0xA3F4B28BAB7F0D64L},{0xD6E44FBB1B5DA52DL}}}}, // p_871->g_809
        0x1D71508CL, // p_871->g_827
        {1L,0x1FE8L,-1L,0xD0L,0xD4L,0x34A5DF3F27A0D198L,0x38D90C29213132A1L}, // p_871->g_828
        &p_871->g_228[1], // p_871->g_838
        &p_871->g_196, // p_871->g_870
    };
    c_872 = c_873;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_871);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_871->g_4, "p_871->g_4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_871->g_7[i], "p_871->g_7[i]", print_hash_value);

    }
    transparent_crc(p_871->g_8, "p_871->g_8", print_hash_value);
    transparent_crc(p_871->g_9, "p_871->g_9", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_871->g_10[i][j], "p_871->g_10[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_871->g_39, "p_871->g_39", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_871->g_95[i].f0, "p_871->g_95[i].f0", print_hash_value);
        transparent_crc(p_871->g_95[i].f1, "p_871->g_95[i].f1", print_hash_value);
        transparent_crc(p_871->g_95[i].f2, "p_871->g_95[i].f2", print_hash_value);
        transparent_crc(p_871->g_95[i].f3, "p_871->g_95[i].f3", print_hash_value);
        transparent_crc(p_871->g_95[i].f4, "p_871->g_95[i].f4", print_hash_value);
        transparent_crc(p_871->g_95[i].f5, "p_871->g_95[i].f5", print_hash_value);
        transparent_crc(p_871->g_95[i].f6, "p_871->g_95[i].f6", print_hash_value);

    }
    transparent_crc(p_871->g_97, "p_871->g_97", print_hash_value);
    transparent_crc(p_871->g_127, "p_871->g_127", print_hash_value);
    transparent_crc(p_871->g_147.f0, "p_871->g_147.f0", print_hash_value);
    transparent_crc(p_871->g_172.f0, "p_871->g_172.f0", print_hash_value);
    transparent_crc(p_871->g_212.f0, "p_871->g_212.f0", print_hash_value);
    transparent_crc(p_871->g_212.f1, "p_871->g_212.f1", print_hash_value);
    transparent_crc(p_871->g_212.f2, "p_871->g_212.f2", print_hash_value);
    transparent_crc(p_871->g_212.f3, "p_871->g_212.f3", print_hash_value);
    transparent_crc(p_871->g_212.f4, "p_871->g_212.f4", print_hash_value);
    transparent_crc(p_871->g_212.f5, "p_871->g_212.f5", print_hash_value);
    transparent_crc(p_871->g_212.f6, "p_871->g_212.f6", print_hash_value);
    transparent_crc(p_871->g_227, "p_871->g_227", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_871->g_228[i], "p_871->g_228[i]", print_hash_value);

    }
    transparent_crc(p_871->g_232, "p_871->g_232", print_hash_value);
    transparent_crc(p_871->g_252, "p_871->g_252", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_871->g_280[i].f0, "p_871->g_280[i].f0", print_hash_value);
        transparent_crc(p_871->g_280[i].f1, "p_871->g_280[i].f1", print_hash_value);
        transparent_crc(p_871->g_280[i].f2, "p_871->g_280[i].f2", print_hash_value);
        transparent_crc(p_871->g_280[i].f3, "p_871->g_280[i].f3", print_hash_value);
        transparent_crc(p_871->g_280[i].f4, "p_871->g_280[i].f4", print_hash_value);
        transparent_crc(p_871->g_280[i].f5, "p_871->g_280[i].f5", print_hash_value);
        transparent_crc(p_871->g_280[i].f6, "p_871->g_280[i].f6", print_hash_value);

    }
    transparent_crc(p_871->g_344, "p_871->g_344", print_hash_value);
    transparent_crc(p_871->g_373.f0, "p_871->g_373.f0", print_hash_value);
    transparent_crc(p_871->g_373.f1, "p_871->g_373.f1", print_hash_value);
    transparent_crc(p_871->g_373.f2, "p_871->g_373.f2", print_hash_value);
    transparent_crc(p_871->g_373.f3, "p_871->g_373.f3", print_hash_value);
    transparent_crc(p_871->g_373.f4, "p_871->g_373.f4", print_hash_value);
    transparent_crc(p_871->g_373.f5, "p_871->g_373.f5", print_hash_value);
    transparent_crc(p_871->g_373.f6, "p_871->g_373.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_871->g_376[i].f0, "p_871->g_376[i].f0", print_hash_value);
        transparent_crc(p_871->g_376[i].f1, "p_871->g_376[i].f1", print_hash_value);
        transparent_crc(p_871->g_376[i].f2, "p_871->g_376[i].f2", print_hash_value);
        transparent_crc(p_871->g_376[i].f3, "p_871->g_376[i].f3", print_hash_value);
        transparent_crc(p_871->g_376[i].f4, "p_871->g_376[i].f4", print_hash_value);
        transparent_crc(p_871->g_376[i].f5, "p_871->g_376[i].f5", print_hash_value);
        transparent_crc(p_871->g_376[i].f6, "p_871->g_376[i].f6", print_hash_value);

    }
    transparent_crc(p_871->g_382, "p_871->g_382", print_hash_value);
    transparent_crc(p_871->g_387.f0, "p_871->g_387.f0", print_hash_value);
    transparent_crc(p_871->g_387.f1, "p_871->g_387.f1", print_hash_value);
    transparent_crc(p_871->g_387.f2, "p_871->g_387.f2", print_hash_value);
    transparent_crc(p_871->g_387.f3, "p_871->g_387.f3", print_hash_value);
    transparent_crc(p_871->g_387.f4, "p_871->g_387.f4", print_hash_value);
    transparent_crc(p_871->g_387.f5, "p_871->g_387.f5", print_hash_value);
    transparent_crc(p_871->g_387.f6, "p_871->g_387.f6", print_hash_value);
    transparent_crc(p_871->g_396, "p_871->g_396", print_hash_value);
    transparent_crc(p_871->g_454.f0, "p_871->g_454.f0", print_hash_value);
    transparent_crc(p_871->g_454.f1, "p_871->g_454.f1", print_hash_value);
    transparent_crc(p_871->g_454.f2, "p_871->g_454.f2", print_hash_value);
    transparent_crc(p_871->g_454.f3, "p_871->g_454.f3", print_hash_value);
    transparent_crc(p_871->g_454.f4, "p_871->g_454.f4", print_hash_value);
    transparent_crc(p_871->g_454.f5, "p_871->g_454.f5", print_hash_value);
    transparent_crc(p_871->g_454.f6, "p_871->g_454.f6", print_hash_value);
    transparent_crc(p_871->g_459, "p_871->g_459", print_hash_value);
    transparent_crc(p_871->g_480.f0, "p_871->g_480.f0", print_hash_value);
    transparent_crc(p_871->g_480.f1, "p_871->g_480.f1", print_hash_value);
    transparent_crc(p_871->g_480.f2, "p_871->g_480.f2", print_hash_value);
    transparent_crc(p_871->g_480.f3, "p_871->g_480.f3", print_hash_value);
    transparent_crc(p_871->g_480.f4, "p_871->g_480.f4", print_hash_value);
    transparent_crc(p_871->g_480.f5, "p_871->g_480.f5", print_hash_value);
    transparent_crc(p_871->g_480.f6, "p_871->g_480.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_871->g_511[i], "p_871->g_511[i]", print_hash_value);

    }
    transparent_crc(p_871->g_539, "p_871->g_539", print_hash_value);
    transparent_crc(p_871->g_543.f0, "p_871->g_543.f0", print_hash_value);
    transparent_crc(p_871->g_543.f1, "p_871->g_543.f1", print_hash_value);
    transparent_crc(p_871->g_543.f2, "p_871->g_543.f2", print_hash_value);
    transparent_crc(p_871->g_543.f3, "p_871->g_543.f3", print_hash_value);
    transparent_crc(p_871->g_543.f4, "p_871->g_543.f4", print_hash_value);
    transparent_crc(p_871->g_543.f5, "p_871->g_543.f5", print_hash_value);
    transparent_crc(p_871->g_543.f6, "p_871->g_543.f6", print_hash_value);
    transparent_crc(p_871->g_643.f0, "p_871->g_643.f0", print_hash_value);
    transparent_crc(p_871->g_643.f1, "p_871->g_643.f1", print_hash_value);
    transparent_crc(p_871->g_643.f2, "p_871->g_643.f2", print_hash_value);
    transparent_crc(p_871->g_643.f3, "p_871->g_643.f3", print_hash_value);
    transparent_crc(p_871->g_643.f4, "p_871->g_643.f4", print_hash_value);
    transparent_crc(p_871->g_643.f5, "p_871->g_643.f5", print_hash_value);
    transparent_crc(p_871->g_643.f6, "p_871->g_643.f6", print_hash_value);
    transparent_crc(p_871->g_683.f0, "p_871->g_683.f0", print_hash_value);
    transparent_crc(p_871->g_689.f0, "p_871->g_689.f0", print_hash_value);
    transparent_crc(p_871->g_689.f1, "p_871->g_689.f1", print_hash_value);
    transparent_crc(p_871->g_689.f2, "p_871->g_689.f2", print_hash_value);
    transparent_crc(p_871->g_689.f3, "p_871->g_689.f3", print_hash_value);
    transparent_crc(p_871->g_689.f4, "p_871->g_689.f4", print_hash_value);
    transparent_crc(p_871->g_689.f5, "p_871->g_689.f5", print_hash_value);
    transparent_crc(p_871->g_689.f6, "p_871->g_689.f6", print_hash_value);
    transparent_crc(p_871->g_743, "p_871->g_743", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_871->g_747[i][j], "p_871->g_747[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_871->g_809[i][j][k].f0, "p_871->g_809[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_871->g_827, "p_871->g_827", print_hash_value);
    transparent_crc(p_871->g_828.f0, "p_871->g_828.f0", print_hash_value);
    transparent_crc(p_871->g_828.f1, "p_871->g_828.f1", print_hash_value);
    transparent_crc(p_871->g_828.f2, "p_871->g_828.f2", print_hash_value);
    transparent_crc(p_871->g_828.f3, "p_871->g_828.f3", print_hash_value);
    transparent_crc(p_871->g_828.f4, "p_871->g_828.f4", print_hash_value);
    transparent_crc(p_871->g_828.f5, "p_871->g_828.f5", print_hash_value);
    transparent_crc(p_871->g_828.f6, "p_871->g_828.f6", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
