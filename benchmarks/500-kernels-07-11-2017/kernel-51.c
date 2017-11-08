// -g 7,81,10 -l 1,3,5
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


// Seed: 697965352

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int32_t  f1;
};

struct S1 {
   uint8_t  f0;
};

struct S2 {
    struct S0 *g_17[2];
    volatile uint32_t g_30[2];
    uint32_t g_41;
    struct S0 g_54;
    int32_t g_62;
    uint16_t g_65;
    uint64_t g_75;
    uint8_t g_80;
    uint8_t *g_88;
    int64_t g_99;
    uint8_t g_117;
    int16_t g_127[7];
    int16_t g_145;
    int8_t g_149;
    uint32_t g_152;
    int32_t g_186;
    uint16_t g_187[7];
    int32_t g_190;
    uint8_t g_194;
    uint8_t g_224;
    uint64_t g_234;
    uint8_t g_277[2];
    uint64_t g_284;
    int64_t g_313;
    int32_t g_316;
    struct S1 g_322;
    uint8_t **g_335;
    struct S1 *g_366;
    int32_t *g_379;
    uint32_t g_430;
    int8_t g_472[2][1];
    int8_t *g_514[6][6][5];
    int8_t **g_513;
    int32_t g_551;
    int16_t g_555;
    uint32_t g_556[3][5][8];
    volatile struct S0 g_577;
    volatile struct S0 *g_576;
    volatile struct S0 * volatile * volatile g_575;
    volatile struct S0 * volatile * volatile *g_574;
    int32_t g_648;
    uint32_t g_650;
    int64_t g_655[9][6];
    int8_t g_659;
    volatile uint32_t g_662;
    volatile int64_t g_688[7][3];
    volatile uint64_t g_689;
    int64_t *g_726;
    int64_t **g_725;
    int64_t *** volatile g_724;
    int8_t ***g_727;
    struct S1 * volatile g_773;
    volatile uint16_t g_776;
    volatile uint8_t g_806;
    int64_t g_838;
    uint8_t g_839[3][8];
    struct S0 g_851;
    struct S0 ** volatile g_869;
    uint64_t *g_946;
    uint64_t **g_945;
    int32_t ** volatile g_1008;
    int32_t ** volatile g_1009;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_1011);
struct S0 * func_2(uint32_t  p_3, struct S0 * p_4, struct S0  p_5, int64_t  p_6, uint8_t  p_7, struct S2 * p_1011);
struct S0 * func_9(struct S0 * p_10, struct S0 * p_11, struct S0 * p_12, int64_t  p_13, struct S2 * p_1011);
struct S0 * func_14(struct S0 * p_15, int8_t  p_16, struct S2 * p_1011);
int8_t  func_20(int64_t  p_21, struct S0 * p_22, struct S0 * p_23, struct S2 * p_1011);
int32_t  func_33(int64_t  p_34, struct S2 * p_1011);
int64_t  func_35(int64_t  p_36, int32_t  p_37, struct S0 * p_38, int32_t  p_39, struct S0 * p_40, struct S2 * p_1011);
int32_t  func_42(uint64_t  p_43, struct S0 * p_44, uint64_t  p_45, int8_t  p_46, struct S2 * p_1011);
struct S0  func_47(struct S0 * p_48, int8_t  p_49, struct S0 * p_50, struct S0 * p_51, struct S2 * p_1011);
struct S0 * func_55(uint64_t  p_56, struct S0 ** p_57, struct S0 ** p_58, struct S2 * p_1011);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1011->g_17 p_1011->g_30 p_1011->g_41 p_1011->g_54.f0 p_1011->g_54.f1 p_1011->g_65 p_1011->g_62 p_1011->g_75 p_1011->g_80 p_1011->g_88 p_1011->g_99 p_1011->g_54 p_1011->g_117 p_1011->g_145 p_1011->g_149 p_1011->g_152 p_1011->g_127 p_1011->g_187 p_1011->g_194 p_1011->g_190 p_1011->g_224 p_1011->g_234 p_1011->g_186 p_1011->g_277 p_1011->g_284 p_1011->g_313 p_1011->g_316 p_1011->g_322 p_1011->g_379 p_1011->g_430 p_1011->g_335 p_1011->g_650 p_1011->g_551 p_1011->g_472 p_1011->g_659 p_1011->g_662 p_1011->g_648 p_1011->g_574 p_1011->g_575 p_1011->g_689 p_1011->g_724 p_1011->g_577.f1 p_1011->g_773 p_1011->g_576 p_1011->g_776 p_1011->g_577 p_1011->g_806 p_1011->g_838 p_1011->g_839 p_1011->g_655 p_1011->g_726 p_1011->g_851.f1 p_1011->g_556 p_1011->g_945 p_1011->g_1009
 * writes: p_1011->g_65 p_1011->g_62 p_1011->g_75 p_1011->g_80 p_1011->g_99 p_1011->g_117 p_1011->g_127 p_1011->g_54.f0 p_1011->g_149 p_1011->g_152 p_1011->g_145 p_1011->g_186 p_1011->g_187 p_1011->g_194 p_1011->g_224 p_1011->g_234 p_1011->g_277 p_1011->g_284 p_1011->g_54.f1 p_1011->g_316 p_1011->g_335 p_1011->g_366 p_1011->g_190 p_1011->g_379 p_1011->g_430 p_1011->g_88 p_1011->g_551 p_1011->g_650 p_1011->g_655 p_1011->g_659 p_1011->g_662 p_1011->g_648 p_1011->g_689 p_1011->g_725 p_1011->g_727 p_1011->g_322 p_1011->g_577 p_1011->g_776 p_1011->g_54 p_1011->g_806 p_1011->g_851.f1
 */
uint32_t  func_1(struct S2 * p_1011)
{ /* block id: 4 */
    int8_t l_8 = 0x28L;
    struct S0 *l_53[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 **l_52 = &l_53[3];
    struct S0 **l_60[8] = {&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0]};
    struct S0 ***l_59 = &l_60[4];
    uint64_t *l_283 = &p_1011->g_284;
    uint32_t l_285 = 1UL;
    int32_t *l_653 = &p_1011->g_551;
    int64_t *l_654 = &p_1011->g_655[0][1];
    int8_t *l_658 = &p_1011->g_659;
    struct S0 *l_850 = &p_1011->g_851;
    int32_t l_852[2];
    struct S0 l_1005 = {1L,0x2160C428L};
    int64_t l_1006 = (-4L);
    int i;
    for (i = 0; i < 2; i++)
        l_852[i] = 0x06F31924L;
    (*l_52) = func_2(l_8, ((*l_52) = func_9(func_14(p_1011->g_17[0], ((*l_658) ^= (safe_rshift_func_int8_t_s_s(func_20(((*l_654) = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((((safe_add_func_uint32_t_u_u(p_1011->g_30[0], ((safe_mod_func_int32_t_s_s(((*l_653) = func_33(func_35(p_1011->g_41, l_8, p_1011->g_17[0], (func_42(((*l_283) |= (func_47(((*l_52) = (void*)0), p_1011->g_54.f0, func_55(((((((*l_59) = &p_1011->g_17[0]) != &p_1011->g_17[0]) , p_1011->g_54.f1) > 5L) && l_8), &p_1011->g_17[1], &p_1011->g_17[1], p_1011), &p_1011->g_54, p_1011) , l_8)), p_1011->g_17[1], l_285, p_1011->g_190, p_1011) , l_8), p_1011->g_17[1], p_1011), p_1011)), l_285)) || (*l_653)))) || p_1011->g_30[1]) == p_1011->g_472[1][0]), p_1011->g_322.f0)), l_8))), p_1011->g_17[0], p_1011->g_17[0], p_1011), 6))), p_1011), l_850, &p_1011->g_851, l_852[1], p_1011)), l_1005, l_1006, p_1011->g_556[2][0][0], p_1011);
    l_1005.f0 &= (*l_653);
    return p_1011->g_577.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1011->g_1009
 * writes: p_1011->g_379
 */
struct S0 * func_2(uint32_t  p_3, struct S0 * p_4, struct S0  p_5, int64_t  p_6, uint8_t  p_7, struct S2 * p_1011)
{ /* block id: 452 */
    int32_t *l_1007 = (void*)0;
    struct S0 *l_1010 = &p_1011->g_851;
    (*p_1011->g_1009) = l_1007;
    return l_1010;
}


/* ------------------------------------------ */
/* 
 * reads : p_1011->g_316 p_1011->g_224 p_1011->g_472 p_1011->g_62 p_1011->g_726 p_1011->g_54.f0 p_1011->g_551 p_1011->g_379 p_1011->g_65 p_1011->g_277 p_1011->g_145 p_1011->g_776 p_1011->g_187 p_1011->g_838 p_1011->g_190 p_1011->g_648 p_1011->g_662 p_1011->g_149 p_1011->g_839 p_1011->g_851.f1 p_1011->g_556 p_1011->g_54 p_1011->g_945 p_1011->g_430 p_1011->g_30 p_1011->g_577.f0
 * writes: p_1011->g_316 p_1011->g_224 p_1011->g_62 p_1011->g_655 p_1011->g_551 p_1011->g_190 p_1011->g_648 p_1011->g_277 p_1011->g_145 p_1011->g_851.f1 p_1011->g_152 p_1011->g_335
 */
struct S0 * func_9(struct S0 * p_10, struct S0 * p_11, struct S0 * p_12, int64_t  p_13, struct S2 * p_1011)
{ /* block id: 361 */
    int32_t *l_859 = &p_1011->g_62;
    int32_t *l_860 = &p_1011->g_551;
    struct S1 l_888 = {1UL};
    int32_t l_889[3];
    uint16_t l_932 = 0UL;
    uint64_t l_965 = 0x195F46848043446BL;
    int32_t **l_1003[9][6];
    int32_t *l_1004 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_889[i] = 1L;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
            l_1003[i][j] = &l_860;
    }
    if (((p_13 >= p_13) , p_13))
    { /* block id: 362 */
        int32_t *l_857[7][4] = {{(void*)0,&p_1011->g_851.f0,(void*)0,(void*)0},{(void*)0,&p_1011->g_851.f0,(void*)0,(void*)0},{(void*)0,&p_1011->g_851.f0,(void*)0,(void*)0},{(void*)0,&p_1011->g_851.f0,(void*)0,(void*)0},{(void*)0,&p_1011->g_851.f0,(void*)0,(void*)0},{(void*)0,&p_1011->g_851.f0,(void*)0,(void*)0},{(void*)0,&p_1011->g_851.f0,(void*)0,(void*)0}};
        uint64_t l_893 = 1UL;
        uint16_t l_898 = 65535UL;
        uint64_t *l_913 = &p_1011->g_75;
        uint64_t **l_914 = &l_913;
        uint64_t l_929[7][6][2] = {{{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L}},{{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L}},{{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L}},{{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L}},{{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L}},{{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L}},{{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L},{0x6265F2BDEF2CAB4EL,0xFFCC955076332B71L}}};
        uint8_t *l_930 = &p_1011->g_277[1];
        int16_t *l_931 = &p_1011->g_145;
        int i, j, k;
        for (p_1011->g_316 = (-15); (p_1011->g_316 != 1); p_1011->g_316 = safe_add_func_int8_t_s_s(p_1011->g_316, 8))
        { /* block id: 365 */
            int32_t *l_855 = &p_1011->g_551;
            int32_t l_856[1];
            int i;
            for (i = 0; i < 1; i++)
                l_856[i] = 5L;
            for (p_1011->g_224 = 0; (p_1011->g_224 <= 0); p_1011->g_224 += 1)
            { /* block id: 368 */
                int32_t **l_858[4] = {&l_857[5][2],&l_857[5][2],&l_857[5][2],&l_857[5][2]};
                int i, j;
                l_855 = (void*)0;
                l_856[0] ^= (-6L);
                l_860 = (l_859 = l_857[5][2]);
                if (p_1011->g_472[p_1011->g_224][p_1011->g_224])
                    break;
            }
            return &p_1011->g_54;
        }
        for (p_1011->g_62 = 0; (p_1011->g_62 != 3); ++p_1011->g_62)
        { /* block id: 379 */
            int32_t **l_865 = &l_859;
            l_860 = &p_1011->g_62;
            (*l_865) = (((*p_1011->g_726) = (safe_lshift_func_uint8_t_u_s(p_13, 4))) , l_857[5][2]);
        }
        if ((safe_add_func_int64_t_s_s(p_1011->g_54.f0, p_13)))
        { /* block id: 384 */
            struct S0 *l_868 = &p_1011->g_851;
            struct S0 **l_870 = &l_868;
            (*l_860) ^= (&p_1011->g_430 == (void*)0);
            (*l_870) = l_868;
        }
        else
        { /* block id: 387 */
            int8_t l_879 = 0L;
            int32_t l_890 = 1L;
            int32_t l_891 = 0L;
            int32_t l_892[7] = {8L,3L,8L,8L,3L,8L,8L};
            int i;
            (*p_1011->g_379) = p_13;
            (*l_860) = (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(p_1011->g_65, p_13)), 5)) , p_13), ((((((safe_mod_func_int64_t_s_s((l_879 <= p_1011->g_277[1]), (safe_mod_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_s(p_1011->g_145, ((((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(p_13, p_13)), (!0xCE3DL))) & (*l_860)) != 0x78D070E1L) , 1L))) , l_879) | (*l_860)) & p_1011->g_776), p_1011->g_277[1])))) , 5L) | 0x64BFE5FDFEF29485L) , l_888) , &p_1011->g_725) != &p_1011->g_725)));
            l_893++;
        }
        l_889[2] |= (safe_sub_func_uint64_t_u_u(l_898, (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((p_13 || (0x71B00B65EF214BE2L < ((~((((safe_div_func_uint32_t_u_u(((p_1011->g_187[0] < (((safe_add_func_int8_t_s_s((((*l_860) = (p_13 <= (safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((((*l_914) = l_913) == &p_1011->g_75) == (((((*l_931) |= (2UL < (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((*l_930) = (safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_1011->g_838, 9UL)), p_13)) && l_929[0][0][1]), p_13))), 0x5FL)), (*p_1011->g_379))), 0x71838B84L)), (*l_860))))) != 65535UL) , 0x26L) == p_13)), p_1011->g_662)), p_13)))) || 0x739DC731L), 0L)) <= p_13) != p_1011->g_149)) & 0x28A911A8B2A29897L), p_1011->g_54.f0)) || p_13) ^ (-1L)) & 0xA5AD290EL)) >= p_1011->g_839[2][2]))), l_932)), 0xF337L))));
    }
    else
    { /* block id: 397 */
        int8_t l_933 = (-6L);
        int32_t l_950 = (-7L);
        struct S0 l_974 = {4L,3L};
        struct S0 l_986[1][7][9] = {{{{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L}},{{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L}},{{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L}},{{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L}},{{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L}},{{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L}},{{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L},{0x0ECA5571L,0x06B3E2E0L}}}};
        int i, j, k;
        if (l_933)
        { /* block id: 398 */
            uint8_t l_934 = 0xABL;
            ++l_934;
        }
        else
        { /* block id: 400 */
            uint16_t l_944[9] = {0xEAC9L,1UL,0xEAC9L,0xEAC9L,1UL,0xEAC9L,0xEAC9L,1UL,0xEAC9L};
            struct S1 l_996 = {0x32L};
            uint8_t **l_1002 = (void*)0;
            int i;
            if ((*p_1011->g_379))
            { /* block id: 401 */
                int64_t l_951 = 0x059639C246F9E37DL;
                int32_t l_977 = 1L;
lbl_978:
                for (p_1011->g_851.f1 = 0; (p_1011->g_851.f1 >= 3); ++p_1011->g_851.f1)
                { /* block id: 404 */
                    uint64_t **l_947 = (void*)0;
                    int32_t l_949 = 0x48990177L;
                    struct S1 *l_968 = &l_888;
                    struct S1 **l_969 = &p_1011->g_366;
                    for (p_1011->g_152 = 0; (p_1011->g_152 >= 50); p_1011->g_152 = safe_add_func_uint16_t_u_u(p_1011->g_152, 9))
                    { /* block id: 407 */
                        int64_t *l_943[8][5] = {{(void*)0,&p_1011->g_838,&p_1011->g_838,&p_1011->g_99,&p_1011->g_838},{(void*)0,&p_1011->g_838,&p_1011->g_838,&p_1011->g_99,&p_1011->g_838},{(void*)0,&p_1011->g_838,&p_1011->g_838,&p_1011->g_99,&p_1011->g_838},{(void*)0,&p_1011->g_838,&p_1011->g_838,&p_1011->g_99,&p_1011->g_838},{(void*)0,&p_1011->g_838,&p_1011->g_838,&p_1011->g_99,&p_1011->g_838},{(void*)0,&p_1011->g_838,&p_1011->g_838,&p_1011->g_99,&p_1011->g_838},{(void*)0,&p_1011->g_838,&p_1011->g_838,&p_1011->g_99,&p_1011->g_838},{(void*)0,&p_1011->g_838,&p_1011->g_838,&p_1011->g_99,&p_1011->g_838}};
                        struct S0 *l_948 = (void*)0;
                        int i, j;
                        l_950 = (((safe_mul_func_int8_t_s_s((p_1011->g_838 != ((p_13 <= p_1011->g_556[1][1][3]) , ((*p_10) , ((((l_944[1] = (-1L)) , p_1011->g_945) == l_947) ^ ((p_1011->g_430 & (((void*)0 != l_948) > (*l_860))) < 0x71405223L))))), l_949)) , 3UL) || p_13);
                        return &p_1011->g_54;
                    }
                }
                for (p_1011->g_648 = 0; (p_1011->g_648 > (-27)); p_1011->g_648 = safe_sub_func_uint16_t_u_u(p_1011->g_648, 7))
                { /* block id: 436 */
                    l_977 &= p_13;
                    if (p_1011->g_430)
                        goto lbl_978;
                }
            }
            else
            { /* block id: 440 */
                uint32_t *l_983[3][2] = {{(void*)0,&p_1011->g_430},{(void*)0,&p_1011->g_430},{(void*)0,&p_1011->g_430}};
                int32_t l_985[2];
                uint8_t **l_1000 = &p_1011->g_88;
                uint8_t ***l_1001 = &p_1011->g_335;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_985[i] = (-8L);
                l_985[1] |= (safe_mul_func_uint8_t_u_u((0x5DAC579471B025D8L & ((p_13 != (p_13 , (p_1011->g_30[0] != (safe_rshift_func_int16_t_s_s(0x75A8L, 4))))) , ((void*)0 == l_983[2][1]))), ((safe_unary_minus_func_int32_t_s((*p_1011->g_379))) , ((((0x51059ECBL <= 4294967294UL) < l_974.f1) , 0x46L) > p_13))));
                l_985[1] = (((l_986[0][5][0] , ((((*l_859) , (((safe_lshift_func_int16_t_s_u((((l_933 | (safe_unary_minus_func_uint64_t_u((((l_944[7] == (safe_mod_func_int8_t_s_s(((((safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s((+(l_996 , (safe_unary_minus_func_uint16_t_u((0L == 3UL))))), (safe_div_func_int64_t_s_s(((((*l_1001) = l_1000) != l_1002) , (-1L)), p_1011->g_577.f0)))), 1L)) && p_13) != l_985[1]) | p_1011->g_187[1]), p_13))) ^ p_13) > p_13)))) & l_974.f0) > p_13), p_1011->g_839[1][0])) , p_13) , 0x1CL)) >= 0L) != 255UL)) == p_13) >= p_13);
                (*l_860) = (p_13 < 0x697182C219410B70L);
            }
        }
        return p_10;
    }
    l_1004 = &p_1011->g_190;
    return p_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_1011->g_662 p_1011->g_194 p_1011->g_430 p_1011->g_379 p_1011->g_190 p_1011->g_648 p_1011->g_574 p_1011->g_575 p_1011->g_75 p_1011->g_689 p_1011->g_551 p_1011->g_277 p_1011->g_335 p_1011->g_88 p_1011->g_187 p_1011->g_724 p_1011->g_127 p_1011->g_650 p_1011->g_54.f0 p_1011->g_577.f1 p_1011->g_41 p_1011->g_234 p_1011->g_186 p_1011->g_773 p_1011->g_576 p_1011->g_62 p_1011->g_776 p_1011->g_316 p_1011->g_284 p_1011->g_577 p_1011->g_806 p_1011->g_30 p_1011->g_65 p_1011->g_838 p_1011->g_839 p_1011->g_145 p_1011->g_655
 * writes: p_1011->g_662 p_1011->g_194 p_1011->g_284 p_1011->g_190 p_1011->g_648 p_1011->g_689 p_1011->g_127 p_1011->g_551 p_1011->g_65 p_1011->g_277 p_1011->g_187 p_1011->g_725 p_1011->g_727 p_1011->g_650 p_1011->g_322 p_1011->g_577 p_1011->g_62 p_1011->g_776 p_1011->g_54 p_1011->g_806 p_1011->g_379 p_1011->g_234 p_1011->g_80 p_1011->g_145
 */
struct S0 * func_14(struct S0 * p_15, int8_t  p_16, struct S2 * p_1011)
{ /* block id: 265 */
    int32_t *l_660 = &p_1011->g_551;
    int32_t *l_661[6] = {&p_1011->g_62,&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_54.f0,&p_1011->g_62};
    int8_t ***l_683 = (void*)0;
    int8_t ***l_684 = &p_1011->g_513;
    uint8_t l_763 = 0xAEL;
    uint32_t l_813 = 0x8D0CDF98L;
    int64_t l_816 = (-1L);
    int i;
lbl_667:
    p_1011->g_662--;
    for (p_1011->g_194 = 0; (p_1011->g_194 < 58); ++p_1011->g_194)
    { /* block id: 269 */
        struct S0 **l_677 = &p_1011->g_17[0];
        struct S0 ***l_676 = &l_677;
        int32_t l_680 = 0x618C4D0BL;
        uint64_t *l_681 = &p_1011->g_284;
        int8_t ****l_682 = (void*)0;
        int32_t l_686[7][7] = {{(-1L),0x152CA6F1L,0x2C91A798L,0x2835BF67L,0x2101B383L,(-1L),0x2835BF67L},{(-1L),0x152CA6F1L,0x2C91A798L,0x2835BF67L,0x2101B383L,(-1L),0x2835BF67L},{(-1L),0x152CA6F1L,0x2C91A798L,0x2835BF67L,0x2101B383L,(-1L),0x2835BF67L},{(-1L),0x152CA6F1L,0x2C91A798L,0x2835BF67L,0x2101B383L,(-1L),0x2835BF67L},{(-1L),0x152CA6F1L,0x2C91A798L,0x2835BF67L,0x2101B383L,(-1L),0x2835BF67L},{(-1L),0x152CA6F1L,0x2C91A798L,0x2835BF67L,0x2101B383L,(-1L),0x2835BF67L},{(-1L),0x152CA6F1L,0x2C91A798L,0x2835BF67L,0x2101B383L,(-1L),0x2835BF67L}};
        uint32_t *l_692 = &p_1011->g_430;
        int32_t **l_713[1][1];
        int64_t *l_723[4];
        int64_t **l_722 = &l_723[0];
        int64_t l_728 = 0x45D74FC0A67F373DL;
        uint16_t l_729 = 0x0CA6L;
        uint32_t l_817[5];
        uint64_t l_833 = 0xF691737B54AA2308L;
        uint16_t l_842 = 0xAD4BL;
        uint64_t l_849 = 1UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_713[i][j] = &l_661[2];
        }
        for (i = 0; i < 4; i++)
            l_723[i] = &p_1011->g_655[6][3];
        for (i = 0; i < 5; i++)
            l_817[i] = 4UL;
        if (p_1011->g_194)
            goto lbl_667;
        if (((((((*p_1011->g_379) = (safe_lshift_func_uint8_t_u_s(((l_683 = ((safe_rshift_func_int16_t_s_u(((~p_16) == (0L && (p_1011->g_430 , ((0x7045DE34L | 0x1001736EL) == (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*p_1011->g_379), ((*p_1011->g_574) != ((*l_676) = &p_15)))), (((*l_681) = (safe_div_func_int8_t_s_s((0UL || 65535UL), l_680))) == p_16))))))), 9)) , &p_1011->g_513)) == l_684), l_680))) < p_1011->g_75) <= 0x35L) | 0x143BL) != 0x0A788854L))
        { /* block id: 275 */
            int32_t l_685 = 0x0AEF24B5L;
            int32_t l_687[9] = {0x405C422CL,0x405C422CL,0x405C422CL,0x405C422CL,0x405C422CL,0x405C422CL,0x405C422CL,0x405C422CL,0x405C422CL};
            int16_t *l_695 = &p_1011->g_127[0];
            int i;
            (*p_1011->g_379) = 0x560384CEL;
            p_1011->g_689--;
            l_685 = ((*l_660) = (((*l_695) = ((0UL || p_16) , (((void*)0 == l_692) < (safe_lshift_func_int16_t_s_u((l_687[6] &= 0L), (0xB3402DD9L == (((-1L) & (+((0x64611E4CDE16D7C2L ^ (p_16 && p_16)) < p_16))) != (*l_660)))))))) != p_16));
        }
        else
        { /* block id: 282 */
            uint32_t l_696 = 0x9D8FA7ECL;
            int32_t l_701 = (-1L);
            uint32_t *l_730[10] = {&p_1011->g_430,(void*)0,(void*)0,(void*)0,&p_1011->g_430,&p_1011->g_430,(void*)0,(void*)0,(void*)0,&p_1011->g_430};
            int32_t l_771 = 0L;
            struct S1 l_772[3] = {{0x12L},{0x12L},{0x12L}};
            struct S0 l_774 = {0x0645EE44L,-1L};
            int32_t **l_791 = &p_1011->g_379;
            int32_t l_801 = 1L;
            int32_t l_802 = 0x043EBFCBL;
            int32_t l_804 = 0x21B7A120L;
            int32_t l_805 = 0x7D9C26E3L;
            int i;
            (*p_1011->g_379) &= 0x385CC3A3L;
            if ((l_696 > (safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(p_16, 6L)), l_701))))
            { /* block id: 284 */
                uint8_t *l_717 = &p_1011->g_322.f0;
                int32_t l_721[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_721[i] = 0x75B24111L;
                for (p_1011->g_65 = 0; (p_1011->g_65 < 58); p_1011->g_65++)
                { /* block id: 287 */
                    uint8_t *l_706 = &p_1011->g_277[1];
                    uint16_t l_716 = 0UL;
                    uint16_t *l_718 = &p_1011->g_187[2];
                    l_721[1] &= ((!(((safe_mul_func_uint8_t_u_u((++(*l_706)), 1UL)) < p_16) ^ (safe_sub_func_uint16_t_u_u(l_701, (((l_713[0][0] == (void*)0) , (safe_lshift_func_int8_t_s_s(l_716, ((*p_1011->g_335) != l_717)))) & ((((*l_718)--) | 0x4B95L) < l_716)))))) , (*p_1011->g_379));
                    (*p_1011->g_724) = l_722;
                }
                (*p_1011->g_379) = (l_684 == (p_1011->g_727 = &p_1011->g_513));
                if (l_721[1])
                    break;
            }
            else
            { /* block id: 296 */
                int64_t l_737 = 7L;
                int32_t l_742 = 0x1F1C8039L;
                int32_t ***l_792 = &l_713[0][0];
                struct S0 *l_797 = &p_1011->g_54;
                int64_t *l_798 = &l_737;
                int32_t l_800[5][5] = {{0x61E30E1BL,2L,0x61E30E1BL,0x61E30E1BL,2L},{0x61E30E1BL,2L,0x61E30E1BL,0x61E30E1BL,2L},{0x61E30E1BL,2L,0x61E30E1BL,0x61E30E1BL,2L},{0x61E30E1BL,2L,0x61E30E1BL,0x61E30E1BL,2L},{0x61E30E1BL,2L,0x61E30E1BL,0x61E30E1BL,2L}};
                int i, j;
                if ((l_728 & ((!(l_729 || ((p_1011->g_127[3] , &p_1011->g_430) == l_730[4]))) <= (safe_rshift_func_uint16_t_u_s((p_16 < ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_737, (safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(l_742, 0xB4L)), p_16)))), 0x0D3FL)) ^ p_16)), p_1011->g_650)))))
                { /* block id: 297 */
                    uint32_t *l_745[4] = {&p_1011->g_650,&p_1011->g_650,&p_1011->g_650,&p_1011->g_650};
                    uint16_t *l_756 = &p_1011->g_187[2];
                    int16_t *l_768 = &p_1011->g_127[2];
                    int64_t *l_769[4];
                    int16_t l_770 = 0L;
                    struct S0 *l_775 = &l_774;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_769[i] = (void*)0;
                    l_771 ^= (safe_div_func_uint32_t_u_u((((*p_1011->g_379) | ((p_1011->g_54.f0 >= ((++p_1011->g_650) || ((safe_sub_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((((l_770 = (p_1011->g_277[1] || (safe_add_func_int64_t_s_s(p_16, ((((p_16 <= (safe_rshift_func_int8_t_s_s((((*l_756)--) > ((*l_768) ^= (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((l_701 |= (p_16 != (((l_763 && (safe_mul_func_int16_t_s_s(p_1011->g_577.f1, (safe_mul_func_int16_t_s_s(p_16, p_16))))) & (*l_660)) >= 0x07L))), l_696)), p_1011->g_41)))), p_16))) , p_16) == p_16) > 0x3007L))))) < p_16) , 0x1BF3BDB512186F89L), p_16)) || p_1011->g_234), p_1011->g_186)) , p_16))) & (-4L))) | l_696), (-2L)));
                    (*p_1011->g_773) = l_772[2];
                    (**p_1011->g_575) = ((*l_775) = l_774);
                    p_1011->g_62 |= (*p_1011->g_379);
                }
                else
                { /* block id: 308 */
                    (*l_660) |= (~((void*)0 != &p_1011->g_688[0][0]));
                    p_1011->g_776--;
                }
                if ((safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(p_1011->g_316, (safe_sub_func_int64_t_s_s(((p_16 <= (((*l_798) = ((safe_add_func_uint8_t_u_u(0x29L, (safe_mod_func_uint32_t_u_u((p_1011->g_284 | ((safe_lshift_func_int16_t_s_u(((p_1011->g_650 = ((l_791 != ((*l_792) = &p_1011->g_379)) != (**l_791))) == (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((((*l_797) = (**p_1011->g_575)) , l_686[0][2]) < (-10L)), 0x53ED125E919035D8L)), (*l_660)))), 7)) <= p_16)), 0x327F4C80L)))) >= 0UL)) > l_686[6][1])) , 0x4F0FB8FF49E8D6FBL), 0x1D7435FB911CAA92L)))) == (**l_791)), p_16)))
                { /* block id: 316 */
                    int16_t l_799 = 6L;
                    int32_t l_803 = 0x6C686848L;
                    p_1011->g_806++;
                    if ((*p_1011->g_379))
                        break;
                    (**l_791) = (p_1011->g_30[0] > (***l_792));
                }
                else
                { /* block id: 320 */
                    for (l_804 = (-30); (l_804 == (-17)); l_804++)
                    { /* block id: 323 */
                        int32_t l_811 = 0x74E7EAF1L;
                        int32_t l_812[2][2][6] = {{{0x62A0BA69L,0x32F32033L,(-3L),1L,(-3L),0x32F32033L},{0x62A0BA69L,0x32F32033L,(-3L),1L,(-3L),0x32F32033L}},{{0x62A0BA69L,0x32F32033L,(-3L),1L,(-3L),0x32F32033L},{0x62A0BA69L,0x32F32033L,(-3L),1L,(-3L),0x32F32033L}}};
                        int i, j, k;
                        l_812[1][0][1] |= (l_811 = ((**l_791) || p_16));
                    }
                    (**l_792) = &p_1011->g_190;
                    if (p_16)
                        break;
                }
            }
            l_813--;
        }
        ++l_817[0];
        if ((*p_1011->g_379))
        { /* block id: 334 */
            uint32_t l_824 = 0x999B5854L;
            int32_t l_840 = (-10L);
            if (((*l_660) |= (safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((l_824 <= (((p_1011->g_65 != p_16) | (safe_rshift_func_int8_t_s_u((p_1011->g_190 , (safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_int16_t_s_s(p_1011->g_689, 7)) <= ((safe_sub_func_uint32_t_u_u(0xB2085C78L, l_833)) < ((((safe_mod_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((0x44F7L < p_1011->g_284), l_824)) ^ 0x5BF83FDBAC537B86L), l_824)) | p_16) != p_16) == 0xF76FACD117DF8599L))) || 0x9D688367L) , 7UL), p_1011->g_838))), 3))) < (-7L))) <= 0x798EL), p_16)), p_1011->g_839[1][0]))))
            { /* block id: 336 */
                int8_t l_841[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_841[i] = 2L;
                ++l_842;
            }
            else
            { /* block id: 338 */
                for (p_1011->g_234 = (-10); (p_1011->g_234 == 42); p_1011->g_234 = safe_add_func_uint32_t_u_u(p_1011->g_234, 9))
                { /* block id: 341 */
                    for (p_1011->g_80 = 0; (p_1011->g_80 >= 15); p_1011->g_80++)
                    { /* block id: 344 */
                        p_1011->g_379 = (l_660 = &p_1011->g_648);
                    }
                }
                for (p_1011->g_145 = 0; (p_1011->g_145 <= 5); p_1011->g_145 += 1)
                { /* block id: 351 */
                    int i, j;
                    if (p_1011->g_655[(p_1011->g_145 + 3)][p_1011->g_145])
                        break;
                }
            }
        }
        else
        { /* block id: 355 */
            l_849 = p_16;
            return &p_1011->g_54;
        }
    }
    return &p_1011->g_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_1011->g_99
 * writes: p_1011->g_379
 */
int8_t  func_20(int64_t  p_21, struct S0 * p_22, struct S0 * p_23, struct S2 * p_1011)
{ /* block id: 261 */
    int32_t **l_656[2][3][3] = {{{&p_1011->g_379,&p_1011->g_379,&p_1011->g_379},{&p_1011->g_379,&p_1011->g_379,&p_1011->g_379},{&p_1011->g_379,&p_1011->g_379,&p_1011->g_379}},{{&p_1011->g_379,&p_1011->g_379,&p_1011->g_379},{&p_1011->g_379,&p_1011->g_379,&p_1011->g_379},{&p_1011->g_379,&p_1011->g_379,&p_1011->g_379}}};
    int16_t l_657[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_657[i] = (-3L);
    p_1011->g_379 = (p_1011->g_99 , &p_1011->g_648);
    return l_657[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1011->g_152 p_1011->g_335 p_1011->g_145 p_1011->g_187 p_1011->g_186 p_1011->g_54.f0 p_1011->g_650
 * writes: p_1011->g_152 p_1011->g_88 p_1011->g_551 p_1011->g_54.f0 p_1011->g_650
 */
int32_t  func_33(int64_t  p_34, struct S2 * p_1011)
{ /* block id: 244 */
    uint32_t l_629[3][1];
    struct S1 l_633[1] = {{253UL}};
    int32_t l_635 = 0x180F66EAL;
    int32_t l_647 = 0x10F0FE4AL;
    int32_t l_649 = 0L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_629[i][j] = 0UL;
    }
    for (p_1011->g_152 = 0; (p_1011->g_152 < 38); p_1011->g_152 = safe_add_func_uint8_t_u_u(p_1011->g_152, 9))
    { /* block id: 247 */
        uint8_t *l_624 = &p_1011->g_277[0];
        int32_t *l_630 = &p_1011->g_551;
        int32_t *l_636 = &p_1011->g_190;
        int32_t *l_637 = &p_1011->g_62;
        int32_t *l_638 = &p_1011->g_54.f0;
        int32_t l_639[8];
        int32_t *l_640 = &l_639[5];
        int32_t *l_641 = &l_639[2];
        int32_t *l_642 = &l_635;
        int32_t *l_643 = &p_1011->g_190;
        int32_t *l_644 = &l_639[2];
        int32_t *l_645 = &l_639[3];
        int32_t *l_646[1][9];
        int i, j;
        for (i = 0; i < 8; i++)
            l_639[i] = 0x460B31C9L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 9; j++)
                l_646[i][j] = &l_639[2];
        }
        (*l_630) = ((((0x66L == (safe_lshift_func_uint8_t_u_u(p_34, ((((l_624 == ((*p_1011->g_335) = l_624)) , p_1011->g_145) > p_1011->g_187[2]) & (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_1011->g_186, p_34)), l_629[1][0])))))) != 0x1BL) > p_34) , 8L);
        for (p_1011->g_54.f0 = 0; (p_1011->g_54.f0 != (-8)); p_1011->g_54.f0 = safe_sub_func_int32_t_s_s(p_1011->g_54.f0, 2))
        { /* block id: 252 */
            struct S1 *l_634 = &l_633[0];
            (*l_634) = l_633[0];
        }
        if (l_629[1][0])
            break;
        ++p_1011->g_650;
    }
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_1011->g_430 p_1011->g_194 p_1011->g_149 p_1011->g_145 p_1011->g_190 p_1011->g_152
 * writes: p_1011->g_430 p_1011->g_284 p_1011->g_190
 */
int64_t  func_35(int64_t  p_36, int32_t  p_37, struct S0 * p_38, int32_t  p_39, struct S0 * p_40, struct S2 * p_1011)
{ /* block id: 171 */
    int32_t *l_484[6][9][4] = {{{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62}},{{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62}},{{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62}},{{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62}},{{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62}},{{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_54.f0,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62}}};
    uint64_t l_585[1];
    int32_t l_593 = (-1L);
    uint32_t l_602 = 4294967295UL;
    struct S1 *l_603[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t *l_604[9] = {&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[1][0]};
    int64_t l_605 = 0x5A3E97AE72CF9245L;
    uint64_t *l_606 = (void*)0;
    uint64_t *l_607 = &p_1011->g_284;
    uint32_t *l_614 = &l_602;
    struct S0 l_617 = {0x17510E44L,0x128AF2A7L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_585[i] = 0x8104058B9A117503L;
    for (p_1011->g_430 = 0; (p_1011->g_430 <= 1); p_1011->g_430 += 1)
    { /* block id: 174 */
        int32_t **l_485 = &l_484[1][8][0];
        uint8_t ***l_503[9] = {&p_1011->g_335,&p_1011->g_335,&p_1011->g_335,&p_1011->g_335,&p_1011->g_335,&p_1011->g_335,&p_1011->g_335,&p_1011->g_335,&p_1011->g_335};
        int64_t l_504 = 0x39D4ABB65AF1EE80L;
        struct S1 l_525 = {1UL};
        int32_t l_553 = 0x0147081EL;
        int32_t l_554 = 0x5ABD2EB1L;
        int8_t l_563 = (-6L);
        int i;
        (1 + 1);
    }
    p_1011->g_190 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_593, 4)), 3)), (safe_add_func_uint8_t_u_u(0xDEL, (safe_lshift_func_uint16_t_u_s(((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((4UL | (((l_602 < 0x48L) > (((&p_1011->g_75 != &p_1011->g_75) || ((*l_607) = (l_603[0] == ((((l_605 = (p_36 != p_39)) || p_39) < p_1011->g_194) , &p_1011->g_322)))) & p_36)) , p_37)) < 9L), p_36)), p_36)) ^ p_37) , p_37) , p_39), p_1011->g_149))))));
    p_1011->g_190 &= ((safe_div_func_uint32_t_u_u(0x3689681FL, (((p_39 | (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_1011->g_194, (((*l_614)++) <= p_39))), 5))) > ((l_617 , (0x52A4L == (safe_mul_func_int16_t_s_s(p_37, p_37)))) , p_36)) | 0x09A93835L))) != p_1011->g_145);
    return p_1011->g_152;
}


/* ------------------------------------------ */
/* 
 * reads : p_1011->g_187 p_1011->g_190 p_1011->g_99 p_1011->g_54.f0 p_1011->g_284 p_1011->g_127 p_1011->g_277 p_1011->g_313 p_1011->g_41 p_1011->g_62 p_1011->g_316 p_1011->g_322 p_1011->g_80 p_1011->g_194 p_1011->g_65 p_1011->g_379 p_1011->g_149 p_1011->g_430 p_1011->g_75 p_1011->g_234 p_1011->g_54.f1 p_1011->g_186
 * writes: p_1011->g_54.f1 p_1011->g_186 p_1011->g_234 p_1011->g_316 p_1011->g_54.f0 p_1011->g_62 p_1011->g_149 p_1011->g_335 p_1011->g_127 p_1011->g_65 p_1011->g_366 p_1011->g_190 p_1011->g_379 p_1011->g_75 p_1011->g_277 p_1011->g_284
 */
int32_t  func_42(uint64_t  p_43, struct S0 * p_44, uint64_t  p_45, int8_t  p_46, struct S2 * p_1011)
{ /* block id: 91 */
    uint16_t l_314 = 7UL;
    struct S1 l_318 = {0x44L};
    struct S1 *l_319 = (void*)0;
    struct S1 *l_320 = (void*)0;
    struct S1 *l_321 = &l_318;
    uint8_t **l_334 = &p_1011->g_88;
    uint8_t **l_336 = (void*)0;
    int32_t l_353 = 0L;
    int8_t l_355 = 0x19L;
    struct S0 l_401[1] = {{0x5E8C950FL,0x601795FEL}};
    int64_t *l_404 = (void*)0;
    struct S0 **l_413[10][3][8] = {{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}},{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}},{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}},{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}},{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}},{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}},{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}},{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}},{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}},{{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0},{&p_1011->g_17[1],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],&p_1011->g_17[0],(void*)0,(void*)0,(void*)0}}};
    int32_t *l_432 = &l_401[0].f0;
    int32_t l_437 = 0L;
    int i, j, k;
lbl_463:
    for (p_1011->g_54.f1 = (-5); (p_1011->g_54.f1 < (-21)); --p_1011->g_54.f1)
    { /* block id: 94 */
        int32_t *l_290 = &p_1011->g_54.f0;
        int32_t *l_317 = &p_1011->g_62;
        for (p_1011->g_186 = (-10); (p_1011->g_186 == 11); p_1011->g_186 = safe_add_func_uint16_t_u_u(p_1011->g_186, 9))
        { /* block id: 97 */
            int32_t **l_291 = &l_290;
            uint64_t *l_308 = &p_1011->g_234;
            int32_t *l_315[8][8][1] = {{{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190}},{{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190}},{{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190}},{{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190}},{{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190}},{{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190}},{{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190}},{{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190},{&p_1011->g_190}}};
            int i, j, k;
            (*l_291) = l_290;
            p_1011->g_316 |= ((((p_1011->g_187[5] | (safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s(0x56ACL, (safe_sub_func_uint16_t_u_u(0UL, (safe_add_func_uint64_t_u_u((((0x5BL <= ((safe_lshift_func_uint8_t_u_s((((p_1011->g_190 <= (((+((safe_add_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u(p_1011->g_99, ((*l_308) = 0x68BF3F15251F8878L))) > (((safe_div_func_uint8_t_u_u((**l_291), (safe_div_func_uint8_t_u_u(0x5BL, p_1011->g_284)))) == p_1011->g_127[2]) | p_1011->g_277[1])) >= 0xFE9995B7L), p_1011->g_127[6])) == p_1011->g_313)) , (*l_290)) ^ p_46)) || (**l_291)) ^ (-1L)), p_45)) < p_1011->g_99)) , 255UL) <= 0x8FL), l_314)))))), p_1011->g_41))) , (**l_291)) >= 0x34024CB0C6D8FC74L) == p_1011->g_62);
            return p_46;
        }
        (*l_317) = ((*l_290) &= 0x21D1AF20L);
    }
    (*l_321) = l_318;
    (*l_321) = p_1011->g_322;
    for (p_1011->g_149 = 0; (p_1011->g_149 < 22); p_1011->g_149 = safe_add_func_uint8_t_u_u(p_1011->g_149, 2))
    { /* block id: 110 */
        int32_t l_331 = 1L;
        uint8_t **l_332 = &p_1011->g_88;
        uint8_t ***l_333 = (void*)0;
        uint64_t *l_352 = &p_1011->g_234;
        uint64_t **l_351 = &l_352;
        int16_t *l_354 = &p_1011->g_127[3];
        struct S1 *l_371 = &l_318;
        int32_t l_374 = 0x2AD76D7FL;
        uint16_t l_391 = 5UL;
        struct S0 *l_475 = &p_1011->g_54;
        uint32_t l_483 = 0x091E0BDEL;
        if ((safe_mod_func_uint16_t_u_u(0x71DDL, (safe_div_func_int16_t_s_s((0x350790CDL > ((safe_lshift_func_uint8_t_u_s((((0x3460L && l_331) , ((p_1011->g_335 = (l_334 = l_332)) == l_336)) != (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((+(safe_add_func_uint32_t_u_u(((p_1011->g_284 < (safe_lshift_func_uint16_t_u_s(l_331, 13))) , (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((~(((*l_354) = ((safe_mod_func_uint8_t_u_u((l_353 = (+(((((*l_351) = (void*)0) != (void*)0) >= 0UL) <= p_1011->g_80))), p_45)) == l_331)) | 6L)), p_1011->g_194)), p_45))), p_43))) < 0x28F18FD0L) >= p_1011->g_190), l_314)), l_355))), p_45)) && l_331)), (-1L))))))
        { /* block id: 116 */
            uint16_t *l_358 = (void*)0;
            uint16_t *l_359[7][7] = {{&p_1011->g_65,&l_314,&l_314,&p_1011->g_65,&l_314,(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&l_314,&l_314,&p_1011->g_65,&l_314,(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&l_314,&l_314,&p_1011->g_65,&l_314,(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&l_314,&l_314,&p_1011->g_65,&l_314,(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&l_314,&l_314,&p_1011->g_65,&l_314,(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&l_314,&l_314,&p_1011->g_65,&l_314,(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&l_314,&l_314,&p_1011->g_65,&l_314,(void*)0,&p_1011->g_187[2]}};
            int32_t *l_372 = (void*)0;
            int32_t *l_373[9] = {&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62};
            int i, j;
            l_353 |= (l_374 |= ((p_43 <= (((0x396952F9L | ((0x0AL ^ (((++p_1011->g_65) || (safe_add_func_uint32_t_u_u(((void*)0 != l_358), (safe_mul_func_uint16_t_u_u(((p_1011->g_366 = &l_318) == (((safe_sub_func_uint16_t_u_u(0x28EAL, (safe_div_func_uint64_t_u_u(p_43, 0xA31F853D6C6D53B5L)))) != 0x6D4EL) , l_371)), p_1011->g_277[0]))))) != l_314)) == 6L)) ^ 0xFA40L) , (-7L))) ^ 0x6A71L));
        }
        else
        { /* block id: 121 */
            int64_t *l_396[1];
            uint32_t l_407[1];
            int32_t *l_408 = &p_1011->g_54.f0;
            int i;
            for (i = 0; i < 1; i++)
                l_396[i] = &p_1011->g_313;
            for (i = 0; i < 1; i++)
                l_407[i] = 1UL;
            for (p_1011->g_190 = (-5); (p_1011->g_190 > (-23)); p_1011->g_190 = safe_sub_func_int32_t_s_s(p_1011->g_190, 2))
            { /* block id: 124 */
                int32_t *l_378 = &p_1011->g_190;
                int32_t **l_377 = &l_378;
                int32_t *l_380 = &l_353;
                int32_t *l_381 = &p_1011->g_54.f0;
                int32_t *l_382 = &p_1011->g_54.f0;
                int32_t *l_383 = &l_374;
                int32_t *l_384 = &p_1011->g_54.f0;
                int32_t *l_385 = &p_1011->g_62;
                int32_t *l_386 = (void*)0;
                int32_t *l_387 = &l_353;
                int32_t *l_388 = &l_374;
                int32_t *l_389 = &p_1011->g_62;
                int32_t *l_390[1][4] = {{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62}};
                int i, j;
                (*l_377) = &p_1011->g_190;
                p_1011->g_379 = &l_353;
                l_391++;
                for (p_46 = 0; p_46 < 1; p_46 += 1)
                {
                    for (p_1011->g_75 = 0; p_1011->g_75 < 4; p_1011->g_75 += 1)
                    {
                        l_390[p_46][p_1011->g_75] = &p_1011->g_190;
                    }
                }
            }
            (*l_408) &= ((*p_1011->g_379) = (safe_add_func_uint16_t_u_u((l_396[0] != l_396[0]), (((safe_mul_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((l_401[0] , ((-1L) && ((((((l_374 = (0x1675L || (l_404 != l_396[0]))) || (((l_401[0].f0 = ((~(((safe_div_func_uint16_t_u_u(l_318.f0, p_45)) != 1L) & l_355)) != l_391)) || p_43) > 0x0E3DL)) ^ p_45) < l_407[0]) , &p_45) != l_396[0]))), 4)) != p_46) <= l_318.f0), l_355)) >= p_46) <= 6UL))));
            for (p_1011->g_54.f1 = 0; (p_1011->g_54.f1 <= 15); ++p_1011->g_54.f1)
            { /* block id: 136 */
                uint8_t *l_414 = &p_1011->g_277[1];
                int32_t l_417 = 0L;
                int32_t l_421 = 0L;
                int16_t l_425 = (-1L);
                uint32_t l_438[6] = {2UL,8UL,2UL,2UL,8UL,2UL};
                struct S0 *l_459 = (void*)0;
                int32_t **l_476 = &l_432;
                int i;
                if ((safe_add_func_uint64_t_u_u((((p_43 >= ((((((*l_414) ^= ((l_331 | ((l_413[3][0][3] != &p_44) > (*p_1011->g_379))) , l_331)) > p_43) ^ (safe_div_func_uint64_t_u_u(l_331, p_45))) || l_417) != p_1011->g_99)) <= p_43) <= (*l_408)), p_1011->g_54.f0)))
                { /* block id: 138 */
                    int8_t *l_420[1][8] = {{&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355}};
                    uint64_t *l_424 = &p_1011->g_284;
                    struct S0 *l_427[7][8][4] = {{{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]}},{{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]}},{{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]}},{{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]}},{{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]}},{{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]}},{{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]},{&p_1011->g_54,&l_401[0],&p_1011->g_54,&l_401[0]}}};
                    uint32_t *l_429 = &p_1011->g_430;
                    uint32_t **l_428 = &l_429;
                    int32_t *l_434 = &l_421;
                    int32_t *l_435 = &l_401[0].f0;
                    int32_t *l_436[7][6][2] = {{{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190}},{{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190}},{{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190}},{{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190}},{{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190}},{{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190}},{{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190},{&l_421,&p_1011->g_190}}};
                    int i, j, k;
                    if ((safe_add_func_uint32_t_u_u((l_417 == 3UL), (((((((((((l_353 |= p_43) >= ((+(l_421 ^= 0L)) == (p_1011->g_190 & (((*l_424) = (safe_lshift_func_int8_t_s_u(0x2AL, 6))) >= l_425)))) , (void*)0) != (p_43 , (void*)0)) & p_1011->g_313) <= 1UL) && 0xE11580ADB614F5B0L) || 0xBEL) & l_417) , p_1011->g_149) | p_1011->g_62))))
                    { /* block id: 142 */
                        struct S0 *l_426 = &p_1011->g_54;
                        l_427[5][7][0] = l_426;
                        return p_43;
                    }
                    else
                    { /* block id: 145 */
                        uint32_t ***l_431 = &l_428;
                        int32_t **l_433 = &p_1011->g_379;
                        (*l_431) = l_428;
                        (*l_408) = 6L;
                        (*l_433) = l_432;
                    }
                    l_438[2]--;
                    return p_45;
                }
                else
                { /* block id: 152 */
                    uint32_t *l_443 = (void*)0;
                    uint32_t *l_444 = &l_407[0];
                    uint16_t *l_462 = &l_314;
                    (*p_1011->g_379) = (+(safe_mul_func_int8_t_s_s((((++(*l_444)) | (safe_div_func_int8_t_s_s((((*l_462) = (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((p_46 != (7UL != (((safe_div_func_int32_t_s_s(p_46, (l_417 = (safe_div_func_uint8_t_u_u((((p_1011->g_430 & p_45) & (safe_div_func_int64_t_s_s(((l_459 != ((safe_rshift_func_int16_t_s_s(((p_45 , p_45) , (*l_432)), 14)) , (void*)0)) | 0x22713DB1L), p_45))) != 0L), 0x07L))))) , p_1011->g_127[2]) >= p_1011->g_75))) ^ p_1011->g_187[1]) < 0x0DL), p_1011->g_190)), p_43))) > p_46), 9L))) != p_1011->g_234), (*l_432))));
                    if (p_1011->g_75)
                        goto lbl_463;
                }
            }
        }
    }
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1011->g_62 p_1011->g_75 p_1011->g_80 p_1011->g_65 p_1011->g_88 p_1011->g_99 p_1011->g_54.f0 p_1011->g_41 p_1011->g_17 p_1011->g_54 p_1011->g_117 p_1011->g_145 p_1011->g_149 p_1011->g_152 p_1011->g_127 p_1011->g_187 p_1011->g_194 p_1011->g_190 p_1011->g_224 p_1011->g_234 p_1011->g_186 p_1011->g_277
 * writes: p_1011->g_62 p_1011->g_75 p_1011->g_80 p_1011->g_99 p_1011->g_65 p_1011->g_117 p_1011->g_127 p_1011->g_54.f0 p_1011->g_149 p_1011->g_152 p_1011->g_145 p_1011->g_186 p_1011->g_187 p_1011->g_194 p_1011->g_224 p_1011->g_234 p_1011->g_277
 */
struct S0  func_47(struct S0 * p_48, int8_t  p_49, struct S0 * p_50, struct S0 * p_51, struct S2 * p_1011)
{ /* block id: 11 */
    int64_t *l_124 = &p_1011->g_99;
    int32_t l_130 = (-1L);
    int32_t l_192 = 0L;
    struct S0 l_282 = {0L,0x47CDA25BL};
    for (p_1011->g_62 = 0; (p_1011->g_62 >= (-8)); --p_1011->g_62)
    { /* block id: 14 */
        uint32_t l_73[9][7] = {{0x5767A065L,0x0E5C5CC9L,1UL,0xBD97C292L,1UL,0x0E5C5CC9L,0x5767A065L},{0x5767A065L,0x0E5C5CC9L,1UL,0xBD97C292L,1UL,0x0E5C5CC9L,0x5767A065L},{0x5767A065L,0x0E5C5CC9L,1UL,0xBD97C292L,1UL,0x0E5C5CC9L,0x5767A065L},{0x5767A065L,0x0E5C5CC9L,1UL,0xBD97C292L,1UL,0x0E5C5CC9L,0x5767A065L},{0x5767A065L,0x0E5C5CC9L,1UL,0xBD97C292L,1UL,0x0E5C5CC9L,0x5767A065L},{0x5767A065L,0x0E5C5CC9L,1UL,0xBD97C292L,1UL,0x0E5C5CC9L,0x5767A065L},{0x5767A065L,0x0E5C5CC9L,1UL,0xBD97C292L,1UL,0x0E5C5CC9L,0x5767A065L},{0x5767A065L,0x0E5C5CC9L,1UL,0xBD97C292L,1UL,0x0E5C5CC9L,0x5767A065L},{0x5767A065L,0x0E5C5CC9L,1UL,0xBD97C292L,1UL,0x0E5C5CC9L,0x5767A065L}};
        uint32_t l_87[5] = {1UL,1UL,1UL,1UL,1UL};
        int32_t l_97 = 0x7C8A60B1L;
        int32_t l_140 = 4L;
        int16_t *l_144 = &p_1011->g_145;
        int64_t *l_165 = &p_1011->g_99;
        struct S0 l_170 = {0L,0x0EE989E9L};
        struct S0 l_255[5] = {{7L,-1L},{7L,-1L},{7L,-1L},{7L,-1L},{7L,-1L}};
        uint16_t l_260[8] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
        uint32_t l_269 = 1UL;
        int16_t l_276 = 0x07F7L;
        int32_t *l_281 = &p_1011->g_190;
        int32_t **l_280 = &l_281;
        int i, j;
        for (p_49 = 0; (p_49 != 8); p_49 = safe_add_func_int8_t_s_s(p_49, 4))
        { /* block id: 17 */
            uint64_t *l_74 = &p_1011->g_75;
            uint8_t *l_78 = (void*)0;
            uint8_t *l_79 = &p_1011->g_80;
            uint8_t **l_89 = &l_78;
            int32_t l_96 = (-6L);
            int64_t *l_98 = &p_1011->g_99;
            struct S0 *l_101[3];
            struct S0 **l_100 = &l_101[0];
            int16_t *l_147 = &p_1011->g_145;
            uint16_t l_175 = 8UL;
            int32_t *l_272 = &l_97;
            int32_t *l_273 = &l_192;
            int32_t *l_274 = &l_97;
            int32_t *l_275[1];
            int i;
            for (i = 0; i < 3; i++)
                l_101[i] = &p_1011->g_54;
            for (i = 0; i < 1; i++)
                l_275[i] = &l_192;
            (*l_100) = func_55(((*l_74) &= l_73[0][5]), (((-4L) < (((safe_add_func_uint8_t_u_u(((*l_79)++), p_49)) > (safe_rshift_func_int8_t_s_u((((((p_1011->g_65 != (l_87[0] >= ((p_1011->g_88 != ((*l_89) = l_78)) | ((*l_98) ^= (l_97 = (safe_lshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((l_96 >= l_87[4]) ^ p_49), 1L)), 0x70L)) , 0x0EL), 2))))))) > p_1011->g_54.f0) & p_1011->g_41) , l_73[0][5]) || 5UL), p_49))) | 0x0880F5C685B35A07L)) , &p_1011->g_17[1]), &p_1011->g_17[0], p_1011);
            for (l_97 = (-22); (l_97 > (-12)); l_97 = safe_add_func_uint64_t_u_u(l_97, 5))
            { /* block id: 26 */
                struct S0 l_104 = {0x5E1C3789L,0x6A71534BL};
                int32_t *l_106 = &p_1011->g_62;
                int32_t **l_105 = &l_106;
                int32_t *l_108 = &p_1011->g_62;
                int32_t **l_107 = &l_108;
                uint64_t l_109 = 18446744073709551615UL;
                int64_t *l_125 = &p_1011->g_99;
                int32_t l_191 = 1L;
                int32_t l_193 = 3L;
                int8_t *l_201 = &p_1011->g_149;
                struct S1 *l_227 = (void*)0;
                (*l_107) = ((*l_105) = (l_104 , &l_96));
                l_109--;
                if (((**l_105) & ((0UL <= l_96) , p_49)))
                { /* block id: 30 */
                    uint32_t l_112[10][3] = {{5UL,5UL,5UL},{5UL,5UL,5UL},{5UL,5UL,5UL},{5UL,5UL,5UL},{5UL,5UL,5UL},{5UL,5UL,5UL},{5UL,5UL,5UL},{5UL,5UL,5UL},{5UL,5UL,5UL},{5UL,5UL,5UL}};
                    int32_t l_132 = 9L;
                    int16_t *l_143 = (void*)0;
                    int32_t *l_188 = &l_104.f0;
                    int32_t *l_189[6][10][4] = {{{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0}},{{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0}},{{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0}},{{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0}},{{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0}},{{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0},{&l_140,(void*)0,&l_140,&l_104.f0}}};
                    int8_t *l_200 = &p_1011->g_149;
                    int8_t **l_199 = &l_200;
                    int i, j, k;
                    if (l_112[2][0])
                    { /* block id: 31 */
                        uint8_t *l_115 = (void*)0;
                        uint8_t *l_116 = &p_1011->g_117;
                        int16_t *l_126 = &p_1011->g_127[2];
                        int32_t l_131[2][2][8];
                        int32_t *l_139[3];
                        int16_t **l_146[3][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int8_t *l_148 = &p_1011->g_149;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 8; k++)
                                    l_131[i][j][k] = 0L;
                            }
                        }
                        for (i = 0; i < 3; i++)
                            l_139[i] = &l_104.f0;
                        l_132 |= ((safe_div_func_int8_t_s_s((((*p_51) , ((*l_79) = p_49)) | (++(*l_116))), ((((*l_126) = (((void*)0 == p_48) , (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(p_1011->g_75, p_49)), (l_124 != l_125))))) <= ((((safe_add_func_uint64_t_u_u(l_130, (**l_105))) , p_1011->g_54.f1) || 3UL) <= l_96)) ^ 0xDFL))) & l_131[1][0][4]);
                        l_130 |= (((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((((**l_105) & l_131[1][0][2]) <= ((0L < (p_1011->g_54.f0 ^= (l_140 = p_1011->g_65))) && ((*l_126) = (-5L)))) | ((*l_148) &= ((safe_mul_func_int16_t_s_s(((((((((((l_143 == ((p_49 , 0L) , (l_147 = l_144))) == p_1011->g_75) ^ p_49) | p_49) , l_96) <= p_49) >= 9UL) && p_1011->g_75) , 0xFB82L) < p_1011->g_145), 0L)) < p_1011->g_145))), l_73[7][6])), 1L)), 0x21L)) < l_87[0]) & 0xA92CL);
                        (*l_107) = (*l_107);
                    }
                    else
                    { /* block id: 43 */
                        int32_t *l_150 = &l_130;
                        int32_t *l_151[1][6];
                        int8_t *l_172 = (void*)0;
                        int8_t **l_171 = &l_172;
                        uint32_t *l_173 = (void*)0;
                        uint32_t *l_174[10][1][6];
                        uint16_t *l_184 = &l_175;
                        uint16_t l_185 = 0xA72BL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_151[i][j] = (void*)0;
                        }
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 6; k++)
                                    l_174[i][j][k] = (void*)0;
                            }
                        }
                        p_1011->g_152++;
                        p_1011->g_54.f0 = ((**l_105) = ((safe_mod_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_1011->g_54.f1, (((safe_lshift_func_int16_t_s_s((p_1011->g_127[2] && ((((((safe_div_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s((((l_170.f0 = ((*p_51) , ((l_165 == (p_1011->g_145 , (void*)0)) < ((safe_lshift_func_int16_t_s_u(((((*l_124) = ((-1L) & (((*l_171) = (l_170 , &p_1011->g_149)) != &p_49))) & (*l_108)) < l_130), 15)) == 0x4D50L)))) , p_49) > p_49), l_175)) < p_49), (-1L))) && (*l_108)) | p_49) ^ p_1011->g_54.f0) , 1UL) | p_1011->g_80)), l_112[2][0])) == p_49) < p_49))), p_1011->g_54.f1)) && 9L));
                        p_1011->g_187[2] |= (p_1011->g_186 = (p_1011->g_54.f0 |= (((safe_div_func_uint8_t_u_u(((p_49 , (safe_lshift_func_uint16_t_u_s((((((0xC14C3A41A2CE7F33L & (((p_1011->g_41 | (((safe_mul_func_int8_t_s_s(((((0x400A8503L == p_49) , ((*l_98) ^= (((*l_184) |= (safe_lshift_func_int16_t_s_u((p_1011->g_127[5] = ((*l_144) = (-10L))), 0))) ^ p_1011->g_152))) | l_96) & (((((l_185 & p_49) ^ p_49) <= 4L) , p_49) >= 0x50E5L)), l_96)) <= p_1011->g_80) < p_49)) > l_96) & p_1011->g_41)) != 0x74F54AD9C548221DL) == 0x3B12L) > 0x4FA5L) , p_49), 1))) != p_1011->g_117), (*l_106))) & l_112[2][0]) | l_96)));
                    }
                    p_1011->g_194--;
                    for (l_192 = 1; (l_192 == (-28)); --l_192)
                    { /* block id: 61 */
                        (*l_107) = ((*l_105) = &p_1011->g_190);
                    }
                    (*l_188) &= ((((*l_199) = (void*)0) != l_201) ^ ((safe_sub_func_int16_t_s_s(l_73[2][3], 4UL)) || (**l_107)));
                }
                else
                { /* block id: 67 */
                    int16_t *l_221[1][8][1] = {{{&p_1011->g_145},{&p_1011->g_145},{&p_1011->g_145},{&p_1011->g_145},{&p_1011->g_145},{&p_1011->g_145},{&p_1011->g_145},{&p_1011->g_145}}};
                    int32_t l_223[6] = {0x7A01DA8FL,0L,0x7A01DA8FL,0x7A01DA8FL,0L,0x7A01DA8FL};
                    uint16_t *l_250[2][4][4] = {{{&p_1011->g_65,&p_1011->g_187[2],(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&p_1011->g_187[2],(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&p_1011->g_187[2],(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&p_1011->g_187[2],(void*)0,&p_1011->g_187[2]}},{{&p_1011->g_65,&p_1011->g_187[2],(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&p_1011->g_187[2],(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&p_1011->g_187[2],(void*)0,&p_1011->g_187[2]},{&p_1011->g_65,&p_1011->g_187[2],(void*)0,&p_1011->g_187[2]}}};
                    int16_t **l_268 = &l_221[0][6][0];
                    int16_t ***l_267 = &l_268;
                    int32_t l_270 = 0x1CA42827L;
                    int32_t *l_271 = &l_140;
                    int i, j, k;
                    if ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(p_1011->g_127[2], 5)) , 0x61L), ((*l_79) = (p_49 , ((p_1011->g_117 <= ((((*l_201) = ((safe_add_func_int16_t_s_s((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((l_130 , ((p_1011->g_187[2] ^ (safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(((((l_221[0][7][0] == (void*)0) && l_130) & l_87[0]) | (-10L)), 2)) >= 0x6363CAE3L), 0x747682D1DD9B939DL))) , 0xF10C4547A68E1F30L)) , (-1L)))), 7)), 0x852D9DEAL)) , l_130) <= p_49), l_170.f0)) > 4294967289UL)) == p_1011->g_80) , p_1011->g_127[1])) == p_1011->g_187[2]))))) || l_96), 12)))
                    { /* block id: 70 */
                        int32_t *l_222[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_222[i] = &l_193;
                        p_1011->g_224++;
                        l_227 = l_227;
                    }
                    else
                    { /* block id: 73 */
                        int32_t *l_228 = &l_192;
                        int32_t *l_229 = &l_130;
                        int32_t *l_230 = &l_96;
                        int32_t *l_231 = &l_193;
                        int32_t *l_232 = &l_192;
                        int32_t *l_233[8][6] = {{&l_104.f0,(void*)0,&p_1011->g_54.f0,&l_192,(void*)0,&l_192},{&l_104.f0,(void*)0,&p_1011->g_54.f0,&l_192,(void*)0,&l_192},{&l_104.f0,(void*)0,&p_1011->g_54.f0,&l_192,(void*)0,&l_192},{&l_104.f0,(void*)0,&p_1011->g_54.f0,&l_192,(void*)0,&l_192},{&l_104.f0,(void*)0,&p_1011->g_54.f0,&l_192,(void*)0,&l_192},{&l_104.f0,(void*)0,&p_1011->g_54.f0,&l_192,(void*)0,&l_192},{&l_104.f0,(void*)0,&p_1011->g_54.f0,&l_192,(void*)0,&l_192},{&l_104.f0,(void*)0,&p_1011->g_54.f0,&l_192,(void*)0,&l_192}};
                        int i, j;
                        p_1011->g_234++;
                        p_1011->g_54.f0 = (*l_108);
                        if (p_49)
                            continue;
                    }
                    (*l_271) ^= (((l_130 != ((safe_rshift_func_int16_t_s_u(((~(p_49 < ((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((p_1011->g_54.f1 , (safe_mod_func_uint8_t_u_u(((~(safe_mod_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(((p_1011->g_187[2]++) >= (l_270 |= (safe_lshift_func_uint8_t_u_u((l_255[2] , ((safe_rshift_func_uint8_t_u_s(((p_1011->g_145 != l_260[7]) == (l_97 > (safe_add_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((((((((*l_267) = (void*)0) == (l_269 , &l_147)) < (**l_107)) ^ p_49) || 1UL) != p_49) <= p_1011->g_145), 15)) | 0x0AL), p_1011->g_186)) , 0x4AC5L), 9L)))), 4)) && p_1011->g_186)), l_223[3])))), 18446744073709551613UL)) , (-7L)), (-1L)))) , p_49), 4L))))), 0xA4825EF7L)), l_130)) && 1UL))) , 3L), 3)) != 1UL)) & 0xD26DL) > p_1011->g_234);
                    (*l_105) = &l_192;
                }
            }
            p_1011->g_277[1]++;
        }
        (*l_280) = (void*)0;
    }
    return l_282;
}


/* ------------------------------------------ */
/* 
 * reads : p_1011->g_65 p_1011->g_17
 * writes: p_1011->g_65
 */
struct S0 * func_55(uint64_t  p_56, struct S0 ** p_57, struct S0 ** p_58, struct S2 * p_1011)
{ /* block id: 7 */
    int32_t *l_61 = &p_1011->g_62;
    int32_t *l_63 = &p_1011->g_62;
    int32_t *l_64[10][7] = {{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62},{&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62,&p_1011->g_62}};
    struct S0 l_68 = {0x689C674FL,7L};
    int i, j;
    ++p_1011->g_65;
    l_68 = l_68;
    return (*p_57);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1012;
    struct S2* p_1011 = &c_1012;
    struct S2 c_1013 = {
        {(void*)0,(void*)0}, // p_1011->g_17
        {0x61BE360DL,0x61BE360DL}, // p_1011->g_30
        4294967290UL, // p_1011->g_41
        {0L,0x717B38E5L}, // p_1011->g_54
        0x49E520C3L, // p_1011->g_62
        65527UL, // p_1011->g_65
        0UL, // p_1011->g_75
        0x20L, // p_1011->g_80
        (void*)0, // p_1011->g_88
        1L, // p_1011->g_99
        0xDFL, // p_1011->g_117
        {1L,1L,1L,1L,1L,1L,1L}, // p_1011->g_127
        (-1L), // p_1011->g_145
        1L, // p_1011->g_149
        0x5B283499L, // p_1011->g_152
        1L, // p_1011->g_186
        {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}, // p_1011->g_187
        (-1L), // p_1011->g_190
        0x69L, // p_1011->g_194
        248UL, // p_1011->g_224
        18446744073709551615UL, // p_1011->g_234
        {1UL,1UL}, // p_1011->g_277
        0x596293FC5627ABC6L, // p_1011->g_284
        0x6738FE241AC8A185L, // p_1011->g_313
        (-1L), // p_1011->g_316
        {248UL}, // p_1011->g_322
        &p_1011->g_88, // p_1011->g_335
        &p_1011->g_322, // p_1011->g_366
        &p_1011->g_62, // p_1011->g_379
        4294967288UL, // p_1011->g_430
        {{0x61L},{0x61L}}, // p_1011->g_472
        {{{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]}},{{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]}},{{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]}},{{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]}},{{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]}},{{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]},{&p_1011->g_149,&p_1011->g_472[1][0],&p_1011->g_472[1][0],&p_1011->g_472[0][0],&p_1011->g_472[0][0]}}}, // p_1011->g_514
        &p_1011->g_514[4][5][1], // p_1011->g_513
        0x45DA89E0L, // p_1011->g_551
        (-1L), // p_1011->g_555
        {{{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L}},{{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L}},{{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L},{0xDDE1C239L,0xDDE1C239L,4294967295UL,0xADF97740L,0xCA13956AL,0xBED9F8CCL,0xC66BFC1AL,0x1D178339L}}}, // p_1011->g_556
        {1L,-1L}, // p_1011->g_577
        &p_1011->g_577, // p_1011->g_576
        &p_1011->g_576, // p_1011->g_575
        &p_1011->g_575, // p_1011->g_574
        1L, // p_1011->g_648
        0x60FC8E99L, // p_1011->g_650
        {{1L,1L,0x4FD69C5F75B2F8F5L,0L,0x074C5D7A306252F0L,0L},{1L,1L,0x4FD69C5F75B2F8F5L,0L,0x074C5D7A306252F0L,0L},{1L,1L,0x4FD69C5F75B2F8F5L,0L,0x074C5D7A306252F0L,0L},{1L,1L,0x4FD69C5F75B2F8F5L,0L,0x074C5D7A306252F0L,0L},{1L,1L,0x4FD69C5F75B2F8F5L,0L,0x074C5D7A306252F0L,0L},{1L,1L,0x4FD69C5F75B2F8F5L,0L,0x074C5D7A306252F0L,0L},{1L,1L,0x4FD69C5F75B2F8F5L,0L,0x074C5D7A306252F0L,0L},{1L,1L,0x4FD69C5F75B2F8F5L,0L,0x074C5D7A306252F0L,0L},{1L,1L,0x4FD69C5F75B2F8F5L,0L,0x074C5D7A306252F0L,0L}}, // p_1011->g_655
        1L, // p_1011->g_659
        1UL, // p_1011->g_662
        {{0x0997A383ACE68855L,(-1L),0x0997A383ACE68855L},{0x0997A383ACE68855L,(-1L),0x0997A383ACE68855L},{0x0997A383ACE68855L,(-1L),0x0997A383ACE68855L},{0x0997A383ACE68855L,(-1L),0x0997A383ACE68855L},{0x0997A383ACE68855L,(-1L),0x0997A383ACE68855L},{0x0997A383ACE68855L,(-1L),0x0997A383ACE68855L},{0x0997A383ACE68855L,(-1L),0x0997A383ACE68855L}}, // p_1011->g_688
        0xA32B8DDDCC876DA5L, // p_1011->g_689
        &p_1011->g_655[0][1], // p_1011->g_726
        &p_1011->g_726, // p_1011->g_725
        &p_1011->g_725, // p_1011->g_724
        (void*)0, // p_1011->g_727
        &p_1011->g_322, // p_1011->g_773
        0xDC0FL, // p_1011->g_776
        252UL, // p_1011->g_806
        0x5384639A78AFF0B4L, // p_1011->g_838
        {{0x14L,3UL,3UL,0x14L,0x14L,3UL,3UL,0x14L},{0x14L,3UL,3UL,0x14L,0x14L,3UL,3UL,0x14L},{0x14L,3UL,3UL,0x14L,0x14L,3UL,3UL,0x14L}}, // p_1011->g_839
        {0x4FCE738EL,0x3235983DL}, // p_1011->g_851
        (void*)0, // p_1011->g_869
        (void*)0, // p_1011->g_946
        &p_1011->g_946, // p_1011->g_945
        (void*)0, // p_1011->g_1008
        &p_1011->g_379, // p_1011->g_1009
    };
    c_1012 = c_1013;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1011);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1011->g_30[i], "p_1011->g_30[i]", print_hash_value);

    }
    transparent_crc(p_1011->g_41, "p_1011->g_41", print_hash_value);
    transparent_crc(p_1011->g_54.f0, "p_1011->g_54.f0", print_hash_value);
    transparent_crc(p_1011->g_54.f1, "p_1011->g_54.f1", print_hash_value);
    transparent_crc(p_1011->g_62, "p_1011->g_62", print_hash_value);
    transparent_crc(p_1011->g_65, "p_1011->g_65", print_hash_value);
    transparent_crc(p_1011->g_75, "p_1011->g_75", print_hash_value);
    transparent_crc(p_1011->g_80, "p_1011->g_80", print_hash_value);
    transparent_crc(p_1011->g_99, "p_1011->g_99", print_hash_value);
    transparent_crc(p_1011->g_117, "p_1011->g_117", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1011->g_127[i], "p_1011->g_127[i]", print_hash_value);

    }
    transparent_crc(p_1011->g_145, "p_1011->g_145", print_hash_value);
    transparent_crc(p_1011->g_149, "p_1011->g_149", print_hash_value);
    transparent_crc(p_1011->g_152, "p_1011->g_152", print_hash_value);
    transparent_crc(p_1011->g_186, "p_1011->g_186", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1011->g_187[i], "p_1011->g_187[i]", print_hash_value);

    }
    transparent_crc(p_1011->g_190, "p_1011->g_190", print_hash_value);
    transparent_crc(p_1011->g_194, "p_1011->g_194", print_hash_value);
    transparent_crc(p_1011->g_224, "p_1011->g_224", print_hash_value);
    transparent_crc(p_1011->g_234, "p_1011->g_234", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1011->g_277[i], "p_1011->g_277[i]", print_hash_value);

    }
    transparent_crc(p_1011->g_284, "p_1011->g_284", print_hash_value);
    transparent_crc(p_1011->g_313, "p_1011->g_313", print_hash_value);
    transparent_crc(p_1011->g_316, "p_1011->g_316", print_hash_value);
    transparent_crc(p_1011->g_322.f0, "p_1011->g_322.f0", print_hash_value);
    transparent_crc(p_1011->g_430, "p_1011->g_430", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1011->g_472[i][j], "p_1011->g_472[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1011->g_551, "p_1011->g_551", print_hash_value);
    transparent_crc(p_1011->g_555, "p_1011->g_555", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1011->g_556[i][j][k], "p_1011->g_556[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1011->g_577.f0, "p_1011->g_577.f0", print_hash_value);
    transparent_crc(p_1011->g_577.f1, "p_1011->g_577.f1", print_hash_value);
    transparent_crc(p_1011->g_648, "p_1011->g_648", print_hash_value);
    transparent_crc(p_1011->g_650, "p_1011->g_650", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1011->g_655[i][j], "p_1011->g_655[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1011->g_659, "p_1011->g_659", print_hash_value);
    transparent_crc(p_1011->g_662, "p_1011->g_662", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1011->g_688[i][j], "p_1011->g_688[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1011->g_689, "p_1011->g_689", print_hash_value);
    transparent_crc(p_1011->g_776, "p_1011->g_776", print_hash_value);
    transparent_crc(p_1011->g_806, "p_1011->g_806", print_hash_value);
    transparent_crc(p_1011->g_838, "p_1011->g_838", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1011->g_839[i][j], "p_1011->g_839[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1011->g_851.f0, "p_1011->g_851.f0", print_hash_value);
    transparent_crc(p_1011->g_851.f1, "p_1011->g_851.f1", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
