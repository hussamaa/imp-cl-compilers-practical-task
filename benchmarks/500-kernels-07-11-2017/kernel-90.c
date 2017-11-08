// -g 58,20,2 -l 1,10,2
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


// Seed: 2737546086

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int64_t g_2;
    int32_t g_6;
    uint16_t g_16;
    uint32_t g_23;
    uint8_t g_56;
    uint8_t g_59;
    uint32_t g_80;
    int8_t g_93;
    uint16_t g_95;
    uint64_t g_97;
    uint32_t *g_100;
    int32_t g_102;
    int32_t * volatile g_101;
    int8_t g_123;
    uint64_t *g_151;
    uint64_t **g_150;
    int16_t g_175;
    int32_t * volatile g_177;
    int64_t g_208;
    volatile uint32_t g_211;
    uint32_t **g_250;
    uint8_t g_281;
    int16_t g_300;
    int32_t *g_332[4];
    int32_t ** volatile g_331;
    int32_t g_396;
    int32_t * volatile g_395;
    int32_t * volatile g_404;
    volatile uint32_t g_437;
    volatile uint32_t g_454;
    uint64_t ***g_460;
    int32_t ** volatile g_485;
    int32_t ** volatile g_510;
    int64_t g_537;
    volatile uint8_t g_566;
    volatile uint8_t *g_565;
    volatile uint8_t ** volatile g_564;
    uint64_t g_592[3];
    uint32_t g_604;
    uint16_t *g_611;
    uint16_t **g_610;
    uint16_t ** volatile *g_609;
    uint64_t *** volatile g_621;
    int32_t ** volatile g_636[1];
    int32_t ** volatile g_637;
    int16_t g_659;
    int32_t ** volatile g_679[5];
    int32_t ** volatile g_680;
    volatile uint32_t g_806;
    uint8_t *g_864;
    uint8_t **g_863;
    int32_t g_1016[4];
    int16_t g_1027[7];
    int32_t ** volatile g_1072;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_1179);
int32_t * func_11(uint16_t  p_12, struct S0 * p_1179);
uint32_t  func_13(int32_t  p_14, struct S0 * p_1179);
int32_t * func_18(int32_t  p_19, int8_t  p_20, int32_t  p_21, struct S0 * p_1179);
int8_t  func_24(uint32_t * p_25, uint32_t  p_26, uint16_t * p_27, int32_t  p_28, struct S0 * p_1179);
uint16_t * func_30(int32_t  p_31, uint32_t  p_32, int16_t  p_33, struct S0 * p_1179);
uint16_t  func_36(int32_t * p_37, uint32_t * p_38, uint32_t * p_39, struct S0 * p_1179);
uint32_t * func_40(uint64_t  p_41, uint32_t  p_42, uint32_t * p_43, struct S0 * p_1179);
int8_t  func_46(uint64_t  p_47, uint8_t  p_48, struct S0 * p_1179);
int8_t  func_81(uint32_t * p_82, uint32_t  p_83, uint8_t * p_84, uint32_t * p_85, struct S0 * p_1179);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1179->g_2 p_1179->g_6 p_1179->g_16 p_1179->g_56 p_1179->g_80 p_1179->g_59 p_1179->g_101 p_1179->g_102 p_1179->g_97 p_1179->g_93 p_1179->g_281 p_1179->g_150 p_1179->g_151 p_1179->g_331 p_1179->g_332 p_1179->g_485 p_1179->g_592 p_1179->g_637 p_1179->g_300 p_1179->g_396 p_1179->g_123 p_1179->g_863 p_1179->g_864 p_1179->g_1016 p_1179->g_659
 * writes: p_1179->g_6 p_1179->g_16 p_1179->g_23 p_1179->g_56 p_1179->g_59 p_1179->g_93 p_1179->g_95 p_1179->g_100 p_1179->g_102 p_1179->g_281 p_1179->g_175 p_1179->g_208 p_1179->g_332 p_1179->g_300 p_1179->g_97 p_1179->g_1016
 */
int32_t  func_1(struct S0 * p_1179)
{ /* block id: 4 */
    int32_t l_3[9];
    int64_t l_4 = 5L;
    int32_t *l_5 = &p_1179->g_6;
    int32_t **l_1177 = &p_1179->g_332[2];
    int32_t *l_1178 = &p_1179->g_1016[1];
    int i;
    for (i = 0; i < 9; i++)
        l_3[i] = (-1L);
    (*l_1178) |= (((1L == p_1179->g_2) , l_3[3]) != (((*l_5) = l_4) , (safe_div_func_uint32_t_u_u((~(((*l_5) >= ((*l_5) | ((safe_add_func_uint16_t_u_u((((*l_1177) = func_11((*l_5), p_1179)) == &p_1179->g_396), (*l_5))) <= 0x562190A0E582C1B1L))) | (*l_5))), 0x66864861L))));
    return p_1179->g_659;
}


/* ------------------------------------------ */
/* 
 * reads : p_1179->g_6 p_1179->g_16 p_1179->g_2 p_1179->g_56 p_1179->g_80 p_1179->g_59 p_1179->g_101 p_1179->g_102 p_1179->g_97 p_1179->g_93 p_1179->g_281 p_1179->g_150 p_1179->g_151 p_1179->g_331 p_1179->g_332 p_1179->g_485 p_1179->g_592 p_1179->g_637 p_1179->g_300 p_1179->g_396 p_1179->g_123 p_1179->g_863 p_1179->g_864
 * writes: p_1179->g_16 p_1179->g_23 p_1179->g_56 p_1179->g_59 p_1179->g_93 p_1179->g_95 p_1179->g_100 p_1179->g_102 p_1179->g_281 p_1179->g_175 p_1179->g_208 p_1179->g_332 p_1179->g_300 p_1179->g_97
 */
int32_t * func_11(uint16_t  p_12, struct S0 * p_1179)
{ /* block id: 6 */
    uint16_t *l_15 = &p_1179->g_16;
    int32_t l_17 = 0x62CF4565L;
    int32_t l_1173 = 0L;
    int64_t l_1174[1];
    int32_t l_1175[4][8] = {{0x03CAB668L,0x03CAB668L,8L,0x6A7C39D8L,(-3L),0x6A7C39D8L,8L,0x03CAB668L},{0x03CAB668L,0x03CAB668L,8L,0x6A7C39D8L,(-3L),0x6A7C39D8L,8L,0x03CAB668L},{0x03CAB668L,0x03CAB668L,8L,0x6A7C39D8L,(-3L),0x6A7C39D8L,8L,0x03CAB668L},{0x03CAB668L,0x03CAB668L,8L,0x6A7C39D8L,(-3L),0x6A7C39D8L,8L,0x03CAB668L}};
    int32_t *l_1176 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1174[i] = 0L;
    l_1175[1][4] = (func_13(((((*l_15) = p_1179->g_6) > l_17) , p_12), p_1179) , (p_12 && ((safe_mul_func_int8_t_s_s((((*p_1179->g_151) = ((safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((**p_1179->g_863) = ((l_17 = l_17) != ((safe_add_func_int32_t_s_s((((((&p_1179->g_610 == (void*)0) < ((l_1173 , p_1179->g_123) & (**p_1179->g_150))) | p_12) || l_1173) | p_1179->g_102), 0xC5A67A57L)) | p_12))), l_1173)), 0xB0B1E74EL)), l_1173)) & l_1174[0]), l_1174[0])) == 1UL) ^ (-1L)) , (*p_1179->g_864)), 0x43L)) , (**p_1179->g_150))) <= 0x25725EB75D384418L), 0xD0L)) , 2L)));
    return l_1176;
}


/* ------------------------------------------ */
/* 
 * reads : p_1179->g_16 p_1179->g_2 p_1179->g_6 p_1179->g_56 p_1179->g_80 p_1179->g_59 p_1179->g_101 p_1179->g_102 p_1179->g_97 p_1179->g_150 p_1179->g_151 p_1179->g_331 p_1179->g_332 p_1179->g_485 p_1179->g_592 p_1179->g_637 p_1179->g_300 p_1179->g_396 p_1179->g_93 p_1179->g_281
 * writes: p_1179->g_23 p_1179->g_56 p_1179->g_59 p_1179->g_93 p_1179->g_95 p_1179->g_100 p_1179->g_102 p_1179->g_281 p_1179->g_175 p_1179->g_208 p_1179->g_332 p_1179->g_300
 */
uint32_t  func_13(int32_t  p_14, struct S0 * p_1179)
{ /* block id: 8 */
    uint32_t *l_22 = &p_1179->g_23;
    int32_t l_29[2];
    uint8_t *l_55 = &p_1179->g_56;
    int32_t *l_58[3];
    uint16_t l_640 = 65535UL;
    int32_t l_673[6];
    uint8_t *l_674 = (void*)0;
    int64_t l_805 = (-10L);
    int16_t *l_834 = (void*)0;
    uint32_t l_917 = 0x80B55BA4L;
    uint16_t **l_944[5] = {&p_1179->g_611,&p_1179->g_611,&p_1179->g_611,&p_1179->g_611,&p_1179->g_611};
    uint16_t **l_946[10][8] = {{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0},{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0},{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0},{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0},{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0},{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0},{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0},{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0},{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0},{&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0,&p_1179->g_611,&p_1179->g_611,(void*)0}};
    uint8_t ***l_963 = &p_1179->g_863;
    uint32_t l_1046 = 1UL;
    uint64_t l_1048 = 0xDE8A9900D766AD9EL;
    int16_t l_1062 = 0x66D0L;
    uint16_t l_1108[1];
    uint32_t l_1158 = 0xB693CDC1L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_29[i] = 0x7312B948L;
    for (i = 0; i < 3; i++)
        l_58[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_673[i] = 0x48EF4763L;
    for (i = 0; i < 1; i++)
        l_1108[i] = 0x9FF0L;
lbl_675:
    (*p_1179->g_637) = func_18((p_1179->g_16 ^ ((*l_22) = p_14)), (p_1179->g_16 , func_24(l_22, l_29[1], func_30((safe_lshift_func_uint16_t_u_u(func_36(&p_1179->g_6, func_40(p_1179->g_2, (safe_add_func_int8_t_s_s((((p_1179->g_59 = (p_1179->g_6 >= func_46(((((safe_sub_func_uint8_t_u_u(((*l_55) ^= ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_1179->g_6, p_14)), l_29[1])) , l_29[1])), 0x2DL)) && p_14) , 0x1AD5L) ^ p_1179->g_2), p_1179->g_2, p_1179))) ^ p_1179->g_6) && p_14), 0UL)), l_58[0], p_1179), l_58[1], p_1179), 2)), p_1179->g_97, p_14, p_1179), p_14, p_1179)), p_14, p_1179);
    for (p_1179->g_300 = 0; (p_1179->g_300 <= 2); p_1179->g_300 += 1)
    { /* block id: 305 */
        uint8_t *l_645[6][9] = {{&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59},{&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59},{&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59},{&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59},{&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59},{&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59,&p_1179->g_59}};
        int32_t l_662 = 5L;
        int32_t l_663[2];
        uint16_t *l_672[8][5];
        uint16_t l_683 = 1UL;
        int64_t l_734[8][10][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
        int32_t l_735[4] = {1L,1L,1L,1L};
        uint8_t l_767 = 0x3CL;
        int16_t l_790 = 0x678AL;
        int32_t l_802 = 0x4BB6F1E6L;
        uint32_t l_819 = 0xAB6F5A6AL;
        int16_t **l_820 = (void*)0;
        int16_t l_841 = 1L;
        int8_t l_981 = 0x02L;
        uint64_t ***l_991 = &p_1179->g_150;
        int32_t l_1047 = 0x3BD8F711L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_663[i] = 1L;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 5; j++)
                l_672[i][j] = &l_640;
        }
        (1 + 1);
    }
    if (p_1179->g_16)
        goto lbl_675;
    return p_1179->g_396;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_18(int32_t  p_19, int8_t  p_20, int32_t  p_21, struct S0 * p_1179)
{ /* block id: 300 */
    int32_t *l_635 = &p_1179->g_6;
    return l_635;
}


/* ------------------------------------------ */
/* 
 * reads : p_1179->g_150 p_1179->g_151 p_1179->g_97 p_1179->g_331 p_1179->g_332 p_1179->g_485 p_1179->g_102 p_1179->g_592 p_1179->g_6
 * writes: p_1179->g_95 p_1179->g_175 p_1179->g_208
 */
int8_t  func_24(uint32_t * p_25, uint32_t  p_26, uint16_t * p_27, int32_t  p_28, struct S0 * p_1179)
{ /* block id: 228 */
    uint16_t *l_500 = &p_1179->g_16;
    uint16_t **l_499[10] = {&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500,&l_500};
    uint32_t ***l_507[2][1][10] = {{{(void*)0,&p_1179->g_250,(void*)0,(void*)0,&p_1179->g_250,(void*)0,(void*)0,&p_1179->g_250,(void*)0,(void*)0}},{{(void*)0,&p_1179->g_250,(void*)0,(void*)0,&p_1179->g_250,(void*)0,(void*)0,&p_1179->g_250,(void*)0,(void*)0}}};
    int32_t *l_513[7] = {&p_1179->g_396,&p_1179->g_396,&p_1179->g_396,&p_1179->g_396,&p_1179->g_396,&p_1179->g_396,&p_1179->g_396};
    int32_t *l_514[6][10][1] = {{{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6}},{{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6}},{{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6}},{{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6}},{{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6}},{{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6},{&p_1179->g_6}}};
    int64_t l_534 = 0x2144EB37FD4A8AEFL;
    uint64_t *l_559[9][8] = {{&p_1179->g_97,&p_1179->g_97,(void*)0,(void*)0,(void*)0,&p_1179->g_97,&p_1179->g_97,(void*)0},{&p_1179->g_97,&p_1179->g_97,(void*)0,(void*)0,(void*)0,&p_1179->g_97,&p_1179->g_97,(void*)0},{&p_1179->g_97,&p_1179->g_97,(void*)0,(void*)0,(void*)0,&p_1179->g_97,&p_1179->g_97,(void*)0},{&p_1179->g_97,&p_1179->g_97,(void*)0,(void*)0,(void*)0,&p_1179->g_97,&p_1179->g_97,(void*)0},{&p_1179->g_97,&p_1179->g_97,(void*)0,(void*)0,(void*)0,&p_1179->g_97,&p_1179->g_97,(void*)0},{&p_1179->g_97,&p_1179->g_97,(void*)0,(void*)0,(void*)0,&p_1179->g_97,&p_1179->g_97,(void*)0},{&p_1179->g_97,&p_1179->g_97,(void*)0,(void*)0,(void*)0,&p_1179->g_97,&p_1179->g_97,(void*)0},{&p_1179->g_97,&p_1179->g_97,(void*)0,(void*)0,(void*)0,&p_1179->g_97,&p_1179->g_97,(void*)0},{&p_1179->g_97,&p_1179->g_97,(void*)0,(void*)0,(void*)0,&p_1179->g_97,&p_1179->g_97,(void*)0}};
    int16_t l_573 = 0x4358L;
    uint8_t *l_623 = (void*)0;
    int i, j, k;
    for (p_26 = 0; (p_26 >= 17); p_26 = safe_add_func_uint8_t_u_u(p_26, 1))
    { /* block id: 231 */
        uint16_t *l_498[7][4] = {{&p_1179->g_95,&p_1179->g_95,&p_1179->g_16,&p_1179->g_95},{&p_1179->g_95,&p_1179->g_95,&p_1179->g_16,&p_1179->g_95},{&p_1179->g_95,&p_1179->g_95,&p_1179->g_16,&p_1179->g_95},{&p_1179->g_95,&p_1179->g_95,&p_1179->g_16,&p_1179->g_95},{&p_1179->g_95,&p_1179->g_95,&p_1179->g_16,&p_1179->g_95},{&p_1179->g_95,&p_1179->g_95,&p_1179->g_16,&p_1179->g_95},{&p_1179->g_95,&p_1179->g_95,&p_1179->g_16,&p_1179->g_95}};
        uint16_t **l_497 = &l_498[2][1];
        uint16_t ***l_496[5][6][3] = {{{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0}},{{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0}},{{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0}},{{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0}},{{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0},{&l_497,&l_497,(void*)0}}};
        int16_t *l_505 = &p_1179->g_175;
        uint32_t ***l_506 = &p_1179->g_250;
        int32_t l_508 = (-8L);
        int64_t *l_509 = &p_1179->g_208;
        int32_t **l_511 = (void*)0;
        int32_t **l_512[1];
        uint32_t **l_533 = &p_1179->g_100;
        uint64_t l_574 = 0x2552297DF3889149L;
        uint64_t **l_620[2][3][5] = {{{&l_559[1][7],(void*)0,(void*)0,&l_559[1][7],&l_559[1][7]},{&l_559[1][7],(void*)0,(void*)0,&l_559[1][7],&l_559[1][7]},{&l_559[1][7],(void*)0,(void*)0,&l_559[1][7],&l_559[1][7]}},{{&l_559[1][7],(void*)0,(void*)0,&l_559[1][7],&l_559[1][7]},{&l_559[1][7],(void*)0,(void*)0,&l_559[1][7],&l_559[1][7]},{&l_559[1][7],(void*)0,(void*)0,&l_559[1][7],&l_559[1][7]}}};
        uint8_t *l_633 = &p_1179->g_56;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_512[i] = &p_1179->g_332[0];
        l_513[0] = (((**p_1179->g_150) ^ (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s(0x3FL, 7)) | ((l_499[4] = &p_27) != (void*)0)), ((*l_509) = (((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((!(p_1179->g_95 = 0UL)), ((*l_505) = (0x788BL != p_28)))), (l_506 != l_507[0][0][0]))) <= l_508) >= 4294967292UL))))) , (*p_1179->g_331));
        l_514[2][5][0] = (*p_1179->g_485);
        if ((**p_1179->g_485))
            continue;
        for (l_508 = (-12); (l_508 != 20); ++l_508)
        { /* block id: 241 */
            uint16_t **l_531[4];
            int32_t l_532 = 0x72C1048EL;
            uint8_t *l_535 = &p_1179->g_59;
            int64_t *l_536 = &p_1179->g_537;
            uint8_t l_547 = 255UL;
            int32_t *l_554 = &p_1179->g_102;
            int32_t *l_590[5][6][3] = {{{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102}},{{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102}},{{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102}},{{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102}},{{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102},{&p_1179->g_6,&l_532,&p_1179->g_102}}};
            uint32_t l_619 = 0x64B562F7L;
            uint16_t l_630 = 5UL;
            uint64_t ***l_631 = &l_620[0][1][1];
            int8_t l_634 = 0x70L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_531[i] = &l_498[5][1];
            (1 + 1);
        }
    }
    return p_1179->g_592[2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t * func_30(int32_t  p_31, uint32_t  p_32, int16_t  p_33, struct S0 * p_1179)
{ /* block id: 226 */
    uint16_t *l_489[4][1] = {{&p_1179->g_95},{&p_1179->g_95},{&p_1179->g_95},{&p_1179->g_95}};
    int i, j;
    return l_489[2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1179->g_93 p_1179->g_281
 * writes: p_1179->g_93 p_1179->g_281
 */
uint16_t  func_36(int32_t * p_37, uint32_t * p_38, uint32_t * p_39, struct S0 * p_1179)
{ /* block id: 26 */
    uint32_t *l_120 = &p_1179->g_80;
    int32_t l_124 = 0x643F7896L;
    uint64_t *l_149 = &p_1179->g_97;
    uint64_t **l_148[9][10][2] = {{{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149}},{{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149}},{{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149}},{{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149}},{{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149}},{{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149}},{{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149}},{{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149}},{{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149},{&l_149,&l_149}}};
    int64_t l_172 = 9L;
    int32_t l_184 = 1L;
    uint64_t l_274 = 0xCFF01D182E770EC7L;
    int64_t l_287[9][9] = {{0x40336B4E0D86B512L,0x40336B4E0D86B512L,(-1L),(-1L),(-4L),0x559A3BD0620ECA3BL,8L,5L,8L},{0x40336B4E0D86B512L,0x40336B4E0D86B512L,(-1L),(-1L),(-4L),0x559A3BD0620ECA3BL,8L,5L,8L},{0x40336B4E0D86B512L,0x40336B4E0D86B512L,(-1L),(-1L),(-4L),0x559A3BD0620ECA3BL,8L,5L,8L},{0x40336B4E0D86B512L,0x40336B4E0D86B512L,(-1L),(-1L),(-4L),0x559A3BD0620ECA3BL,8L,5L,8L},{0x40336B4E0D86B512L,0x40336B4E0D86B512L,(-1L),(-1L),(-4L),0x559A3BD0620ECA3BL,8L,5L,8L},{0x40336B4E0D86B512L,0x40336B4E0D86B512L,(-1L),(-1L),(-4L),0x559A3BD0620ECA3BL,8L,5L,8L},{0x40336B4E0D86B512L,0x40336B4E0D86B512L,(-1L),(-1L),(-4L),0x559A3BD0620ECA3BL,8L,5L,8L},{0x40336B4E0D86B512L,0x40336B4E0D86B512L,(-1L),(-1L),(-4L),0x559A3BD0620ECA3BL,8L,5L,8L},{0x40336B4E0D86B512L,0x40336B4E0D86B512L,(-1L),(-1L),(-4L),0x559A3BD0620ECA3BL,8L,5L,8L}};
    int32_t l_336 = 0x50E820FAL;
    int32_t l_340 = (-10L);
    int32_t l_342 = 7L;
    int32_t l_343 = 0x4759508DL;
    int32_t l_344 = 0L;
    int32_t l_345 = (-9L);
    int32_t l_348[10][3][2] = {{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}},{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}},{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}},{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}},{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}},{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}},{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}},{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}},{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}},{{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)},{0x539C1A3CL,(-1L)}}};
    uint16_t *l_398 = &p_1179->g_16;
    uint64_t ***l_458 = &l_148[2][2][1];
    int i, j, k;
    for (p_1179->g_93 = (-9); (p_1179->g_93 != (-20)); p_1179->g_93 = safe_sub_func_uint16_t_u_u(p_1179->g_93, 9))
    { /* block id: 29 */
        uint32_t **l_121 = &l_120;
        int8_t *l_122 = &p_1179->g_123;
        int32_t l_141 = 0x0EDB61D1L;
        int32_t l_207 = 0L;
        uint64_t l_283 = 0x994AC54636818AD0L;
        int16_t l_311[6][9][4] = {{{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L}},{{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L}},{{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L}},{{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L}},{{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L}},{{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L},{(-5L),0x3685L,0x2F0BL,0x7E73L}}};
        int32_t l_338 = 0x23A94196L;
        int32_t l_339 = 0x402D7321L;
        int32_t l_346 = 1L;
        int32_t l_347 = 0x5E058419L;
        int32_t l_349 = 0x10CB8604L;
        int32_t l_352 = 0x7D326E90L;
        int32_t l_353 = 0x146D1B89L;
        int32_t l_354 = 0x311BB9CFL;
        int32_t l_355 = 0x2521C4E2L;
        int32_t l_356[3];
        uint32_t l_368 = 4294967287UL;
        int64_t l_445 = 0x694883F7417FCE80L;
        uint64_t ***l_479 = &p_1179->g_150;
        uint8_t l_480 = 0x4BL;
        uint64_t l_484[8][5][4] = {{{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL}},{{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL}},{{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL}},{{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL}},{{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL}},{{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL}},{{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL}},{{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL},{18446744073709551615UL,0xFA83594A9BF095E8L,0x5771FB2CBE2FDE95L,0xA18D573CE48CA20CL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_356[i] = 9L;
        (1 + 1);
    }
    for (p_1179->g_281 = 0; (p_1179->g_281 > 11); p_1179->g_281 = safe_add_func_int32_t_s_s(p_1179->g_281, 3))
    { /* block id: 221 */
        uint16_t l_488 = 65535UL;
        if (l_488)
            break;
    }
    l_124 |= l_342;
    return l_348[0][2][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1179->g_6 p_1179->g_80 p_1179->g_16 p_1179->g_59 p_1179->g_101 p_1179->g_102 p_1179->g_97
 * writes: p_1179->g_93 p_1179->g_95 p_1179->g_100 p_1179->g_102
 */
uint32_t * func_40(uint64_t  p_41, uint32_t  p_42, uint32_t * p_43, struct S0 * p_1179)
{ /* block id: 14 */
    uint32_t *l_79 = &p_1179->g_80;
    uint32_t *l_87 = &p_1179->g_80;
    uint32_t **l_86 = &l_87;
    int32_t l_88 = 1L;
    uint8_t *l_89 = &p_1179->g_59;
    int8_t *l_92 = &p_1179->g_93;
    uint16_t *l_94 = &p_1179->g_95;
    uint64_t *l_96[8][7][4] = {{{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97}},{{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97}},{{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97}},{{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97}},{{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97}},{{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97}},{{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97}},{{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97},{&p_1179->g_97,(void*)0,(void*)0,&p_1179->g_97}}};
    int32_t l_98[2];
    uint32_t *l_99[1];
    int32_t *l_117[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_98[i] = 8L;
    for (i = 0; i < 1; i++)
        l_99[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_117[i] = &p_1179->g_102;
    (*p_1179->g_101) = (p_41 && ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s(p_42)), 5)) && ((p_1179->g_100 = ((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((!(l_98[0] |= (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((&p_42 == &p_42) < (((*l_94) = (safe_mul_func_int8_t_s_s(4L, ((+(safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((&p_42 != l_79), ((*l_92) = func_81(((*l_86) = l_79), (l_88 , p_1179->g_6), l_89, l_79, p_1179)))) , p_1179->g_16), 11)), 255UL))) , l_88)))) ^ p_41)) || l_88), l_88)), p_1179->g_59)))) <= (-1L)), 0x44L)), l_88)) , l_99[0])) != (void*)0)));
    (*p_1179->g_101) = (((p_1179->g_102 & (*p_1179->g_101)) || ((0x49L < ((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((((((safe_mul_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u(0L, 2)) & (-2L)) && l_88) != (0UL >= (((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(p_42, ((-1L) & l_98[0]))), 6)), p_42)) , l_98[0]) != p_41))), 0x61L)) , p_1179->g_97) & l_88) == l_98[0]) == 0x7EL), 5)) & p_1179->g_97), l_98[0])) && 65535UL)) == l_98[0])) && p_1179->g_80);
    return &p_1179->g_80;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_46(uint64_t  p_47, uint8_t  p_48, struct S0 * p_1179)
{ /* block id: 11 */
    uint32_t l_57[7] = {0x7DBC1552L,0x7DBC1552L,0x7DBC1552L,0x7DBC1552L,0x7DBC1552L,0x7DBC1552L,0x7DBC1552L};
    int i;
    return l_57[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1179->g_80
 * writes:
 */
int8_t  func_81(uint32_t * p_82, uint32_t  p_83, uint8_t * p_84, uint32_t * p_85, struct S0 * p_1179)
{ /* block id: 16 */
    int32_t *l_91 = &p_1179->g_6;
    int32_t **l_90 = &l_91;
    l_90 = (void*)0;
    return p_1179->g_80;
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S0 c_1180;
    struct S0* p_1179 = &c_1180;
    struct S0 c_1181 = {
        0x29D19AC196A162C9L, // p_1179->g_2
        0x570A50B5L, // p_1179->g_6
        65535UL, // p_1179->g_16
        0UL, // p_1179->g_23
        4UL, // p_1179->g_56
        0xC4L, // p_1179->g_59
        0x3F56F60DL, // p_1179->g_80
        0x4EL, // p_1179->g_93
        0x47A5L, // p_1179->g_95
        18446744073709551615UL, // p_1179->g_97
        &p_1179->g_80, // p_1179->g_100
        0x4ECB2DECL, // p_1179->g_102
        &p_1179->g_102, // p_1179->g_101
        (-9L), // p_1179->g_123
        &p_1179->g_97, // p_1179->g_151
        &p_1179->g_151, // p_1179->g_150
        0x0B96L, // p_1179->g_175
        &p_1179->g_102, // p_1179->g_177
        0L, // p_1179->g_208
        4294967289UL, // p_1179->g_211
        (void*)0, // p_1179->g_250
        0x89L, // p_1179->g_281
        0x03F2L, // p_1179->g_300
        {&p_1179->g_102,&p_1179->g_102,&p_1179->g_102,&p_1179->g_102}, // p_1179->g_332
        &p_1179->g_332[0], // p_1179->g_331
        0x6E453C7EL, // p_1179->g_396
        &p_1179->g_396, // p_1179->g_395
        &p_1179->g_396, // p_1179->g_404
        0xB4DB0224L, // p_1179->g_437
        0x516D5F1FL, // p_1179->g_454
        (void*)0, // p_1179->g_460
        &p_1179->g_332[0], // p_1179->g_485
        (void*)0, // p_1179->g_510
        0L, // p_1179->g_537
        249UL, // p_1179->g_566
        &p_1179->g_566, // p_1179->g_565
        &p_1179->g_565, // p_1179->g_564
        {0x074F8B0EBEF4F7FEL,0x074F8B0EBEF4F7FEL,0x074F8B0EBEF4F7FEL}, // p_1179->g_592
        0xB23430C5L, // p_1179->g_604
        &p_1179->g_95, // p_1179->g_611
        &p_1179->g_611, // p_1179->g_610
        &p_1179->g_610, // p_1179->g_609
        &p_1179->g_150, // p_1179->g_621
        {&p_1179->g_332[1]}, // p_1179->g_636
        &p_1179->g_332[0], // p_1179->g_637
        0x0F2EL, // p_1179->g_659
        {&p_1179->g_332[3],&p_1179->g_332[3],&p_1179->g_332[3],&p_1179->g_332[3],&p_1179->g_332[3]}, // p_1179->g_679
        &p_1179->g_332[0], // p_1179->g_680
        4294967295UL, // p_1179->g_806
        &p_1179->g_56, // p_1179->g_864
        &p_1179->g_864, // p_1179->g_863
        {0x16CD906BL,0x16CD906BL,0x16CD906BL,0x16CD906BL}, // p_1179->g_1016
        {0x4AB7L,0x101CL,0x4AB7L,0x4AB7L,0x101CL,0x4AB7L,0x4AB7L}, // p_1179->g_1027
        &p_1179->g_332[0], // p_1179->g_1072
    };
    c_1180 = c_1181;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1179);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1179->g_2, "p_1179->g_2", print_hash_value);
    transparent_crc(p_1179->g_6, "p_1179->g_6", print_hash_value);
    transparent_crc(p_1179->g_16, "p_1179->g_16", print_hash_value);
    transparent_crc(p_1179->g_23, "p_1179->g_23", print_hash_value);
    transparent_crc(p_1179->g_56, "p_1179->g_56", print_hash_value);
    transparent_crc(p_1179->g_59, "p_1179->g_59", print_hash_value);
    transparent_crc(p_1179->g_80, "p_1179->g_80", print_hash_value);
    transparent_crc(p_1179->g_93, "p_1179->g_93", print_hash_value);
    transparent_crc(p_1179->g_95, "p_1179->g_95", print_hash_value);
    transparent_crc(p_1179->g_97, "p_1179->g_97", print_hash_value);
    transparent_crc(p_1179->g_102, "p_1179->g_102", print_hash_value);
    transparent_crc(p_1179->g_123, "p_1179->g_123", print_hash_value);
    transparent_crc(p_1179->g_175, "p_1179->g_175", print_hash_value);
    transparent_crc(p_1179->g_208, "p_1179->g_208", print_hash_value);
    transparent_crc(p_1179->g_211, "p_1179->g_211", print_hash_value);
    transparent_crc(p_1179->g_281, "p_1179->g_281", print_hash_value);
    transparent_crc(p_1179->g_300, "p_1179->g_300", print_hash_value);
    transparent_crc(p_1179->g_396, "p_1179->g_396", print_hash_value);
    transparent_crc(p_1179->g_437, "p_1179->g_437", print_hash_value);
    transparent_crc(p_1179->g_454, "p_1179->g_454", print_hash_value);
    transparent_crc(p_1179->g_537, "p_1179->g_537", print_hash_value);
    transparent_crc(p_1179->g_566, "p_1179->g_566", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1179->g_592[i], "p_1179->g_592[i]", print_hash_value);

    }
    transparent_crc(p_1179->g_604, "p_1179->g_604", print_hash_value);
    transparent_crc(p_1179->g_659, "p_1179->g_659", print_hash_value);
    transparent_crc(p_1179->g_806, "p_1179->g_806", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1179->g_1016[i], "p_1179->g_1016[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1179->g_1027[i], "p_1179->g_1027[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
