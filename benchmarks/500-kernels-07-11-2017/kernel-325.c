// -g 100,5,17 -l 4,1,1
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


// Seed: 1639959663

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint64_t  f0;
   volatile int32_t  f1;
   volatile int32_t  f2;
};

union U1 {
   uint32_t  f0;
   volatile int16_t  f1;
   uint64_t  f2;
   uint32_t  f3;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t **g_70;
    int32_t g_72;
    int32_t g_74;
    volatile int32_t g_77;
    volatile int32_t g_78;
    int32_t g_79;
    int8_t g_97[4][2][1];
    int16_t g_109;
    union U0 g_142[8];
    volatile union U1 g_158[2][1];
    int64_t g_169;
    union U0 g_184;
    volatile int8_t * volatile *g_192;
    uint16_t g_210[6];
    uint16_t g_212;
    int32_t * volatile g_213;
    int32_t *g_217;
    int32_t ** volatile g_216;
    uint64_t g_251;
    int16_t g_275;
    uint32_t g_296;
    uint32_t g_297;
    int64_t g_302;
    union U0 g_329;
    volatile uint16_t g_350[3];
    volatile uint16_t * volatile g_349;
    volatile uint16_t * volatile * volatile g_348[5][5][9];
    volatile uint16_t g_353;
    volatile uint16_t *g_352;
    volatile uint16_t * volatile *g_351[10][6][3];
    int16_t *g_357;
    uint32_t * volatile g_371;
    uint32_t * volatile *g_370;
    int8_t *g_395;
    int8_t **g_394;
    volatile union U0 g_415;
    int32_t * volatile g_419;
    int16_t g_438;
    int32_t ** volatile g_457;
    uint32_t g_460[5][3][5];
    uint8_t g_493[6];
    int64_t g_500;
    union U1 g_532;
    volatile union U1 g_546;
    uint8_t g_605[6][7];
    int32_t g_728[5];
    union U1 *g_732;
    union U1 **g_731[9][5];
    uint8_t * volatile ** volatile g_735;
    uint32_t g_746;
    uint64_t g_808;
    int16_t g_809[9][4][1];
    int32_t g_823;
    volatile uint8_t g_873;
    volatile uint8_t *g_872;
    volatile uint8_t **g_871;
    int32_t ** volatile g_878[8][10][1];
    uint64_t *g_904;
    volatile uint64_t g_906[1];
    volatile uint64_t *g_905;
    uint32_t *g_951;
    uint32_t **g_950;
    uint32_t ***g_949;
    int32_t ** volatile g_971[5][5][6];
    volatile int32_t g_1017;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_1023);
uint8_t  func_14(uint8_t  p_15, struct S2 * p_1023);
int32_t  func_20(uint32_t  p_21, uint8_t  p_22, struct S2 * p_1023);
int16_t  func_25(uint32_t  p_26, struct S2 * p_1023);
uint64_t  func_32(int32_t * p_33, int32_t ** p_34, int32_t * p_35, int32_t * p_36, struct S2 * p_1023);
int32_t * func_37(uint64_t  p_38, int32_t * p_39, uint32_t  p_40, uint32_t  p_41, int32_t  p_42, struct S2 * p_1023);
uint64_t  func_43(int32_t  p_44, uint32_t  p_45, int32_t ** p_46, int32_t ** p_47, struct S2 * p_1023);
int16_t  func_56(int32_t * p_57, int32_t ** p_58, int32_t  p_59, int32_t  p_60, struct S2 * p_1023);
int32_t ** func_64(int32_t ** p_65, uint32_t  p_66, int32_t * p_67, struct S2 * p_1023);
int32_t ** func_68(int32_t ** p_69, struct S2 * p_1023);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1023->g_3 p_1023->g_2 p_1023->g_70 p_1023->g_72 p_1023->g_79 p_1023->g_74 p_1023->g_97 p_1023->g_77 p_1023->g_109 p_1023->g_78 p_1023->g_142 p_1023->g_142.f0 p_1023->g_158 p_1023->g_184 p_1023->g_192 p_1023->g_296 p_1023->g_357 p_1023->g_275 p_1023->g_500 p_1023->g_212 p_1023->g_395 p_1023->g_302 p_1023->g_217 p_1023->g_457 p_1023->g_532 p_1023->g_370 p_1023->g_438 p_1023->g_493 p_1023->g_546 p_1023->g_419 p_1023->g_371 p_1023->g_460 p_1023->g_169 p_1023->g_350 p_1023->g_728 p_1023->g_210 p_1023->g_605 p_1023->g_532.f0 p_1023->g_352 p_1023->g_353 p_1023->g_746 p_1023->g_251 p_1023->g_213 p_1023->g_329.f0 p_1023->g_808 p_1023->g_809 p_1023->g_394 p_1023->g_184.f0 p_1023->g_823 p_1023->g_349 p_1023->g_871 p_1023->g_872 p_1023->g_873 p_1023->g_216 p_1023->g_905 p_1023->g_329 p_1023->g_950 p_1023->g_951
 * writes: p_1023->g_3 p_1023->g_72 p_1023->g_74 p_1023->g_79 p_1023->g_97 p_1023->g_109 p_1023->g_169 p_1023->g_2 p_1023->g_302 p_1023->g_500 p_1023->g_275 p_1023->g_493 p_1023->g_438 p_1023->g_251 p_1023->g_210 p_1023->g_746 p_1023->g_357 p_1023->g_605 p_1023->g_728 p_1023->g_823 p_1023->g_296 p_1023->g_532.f0 p_1023->g_217 p_1023->g_732 p_1023->g_808 p_1023->g_904 p_1023->g_949
 */
uint32_t  func_1(struct S2 * p_1023)
{ /* block id: 4 */
    int32_t l_13 = 0x2B5457D6L;
    int16_t *l_852 = (void*)0;
    int8_t l_854 = 0x72L;
    int32_t l_880[6][1] = {{0x1AC7CFADL},{0x1AC7CFADL},{0x1AC7CFADL},{0x1AC7CFADL},{0x1AC7CFADL},{0x1AC7CFADL}};
    int32_t *l_888[5] = {&l_13,&l_13,&l_13,&l_13,&l_13};
    uint32_t *l_947 = (void*)0;
    uint32_t **l_946 = &l_947;
    uint32_t ***l_945 = &l_946;
    int32_t **l_998 = (void*)0;
    int32_t *l_1013 = &l_880[0][0];
    int32_t *l_1014 = &p_1023->g_728[3];
    int32_t *l_1015 = (void*)0;
    int32_t *l_1016[3];
    int8_t l_1018 = 0x24L;
    int64_t l_1019 = 0L;
    uint32_t l_1020 = 4294967295UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1016[i] = &p_1023->g_728[1];
    for (p_1023->g_3 = 6; (p_1023->g_3 > (-23)); p_1023->g_3 = safe_sub_func_uint64_t_u_u(p_1023->g_3, 8))
    { /* block id: 7 */
        int16_t l_744[3];
        int64_t *l_745[10][7] = {{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1023->g_500,(void*)0,&p_1023->g_500,(void*)0}};
        int32_t *l_822 = &p_1023->g_823;
        uint32_t *l_848 = &p_1023->g_532.f3;
        uint32_t *l_849 = &p_1023->g_296;
        int16_t **l_853 = &l_852;
        int8_t ***l_855 = &p_1023->g_394;
        int32_t l_926[2][9][4] = {{{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L}},{{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L},{1L,(-3L),(-3L),1L}}};
        uint32_t l_990[3][7] = {{4294967295UL,0xBF5BF30BL,0xFCDAF50FL,1UL,0xBF5BF30BL,1UL,0xFCDAF50FL},{4294967295UL,0xBF5BF30BL,0xFCDAF50FL,1UL,0xBF5BF30BL,1UL,0xFCDAF50FL},{4294967295UL,0xBF5BF30BL,0xFCDAF50FL,1UL,0xBF5BF30BL,1UL,0xFCDAF50FL}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_744[i] = 1L;
        (*l_822) |= (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mod_func_int16_t_s_s(((safe_div_func_int8_t_s_s((p_1023->g_2 || (l_13 != (func_14(l_13, p_1023) > ((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(func_20(((safe_sub_func_int64_t_s_s((p_1023->g_746 = ((func_25(l_13, p_1023) != (p_1023->g_210[3] ^= ((safe_rshift_func_int8_t_s_u((((safe_add_func_int32_t_s_s(l_13, (safe_sub_func_uint8_t_u_u(0x1CL, 0x49L)))) | p_1023->g_460[2][2][1]) | l_744[2]), 7)) | p_1023->g_728[1]))) != l_13)), p_1023->g_605[0][6])) == 0x32L), p_1023->g_532.f0, p_1023), l_13)), 0xC3E6L)) , p_1023->g_728[1])))), 0x63L)) & 0x619A39B3L), 7L)))), 0x020F6EE7L));
        (*p_1023->g_217) ^= l_13;
        if ((((p_1023->g_500 |= ((*p_1023->g_349) != (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((0x1CA7B4FC70B68E2DL ^ (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((*l_822), 6)), 0))) > 0x6E233B75L), (safe_add_func_int64_t_s_s(((((safe_mul_func_int8_t_s_s(((((*p_1023->g_357) = 0x1CC9L) >= (p_1023->g_532.f0 , (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(0x2BL, 7)) && (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((0x734B9CBC19A3C596L <= ((((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((*l_849)--) || (((*l_853) = l_852) == (void*)0)), (*l_822))), l_13)) , 1UL) | p_1023->g_251) , p_1023->g_809[4][2][0])), (*p_1023->g_217))), 12))), l_13)))) > l_854), l_13)) , (*l_822)) , (void*)0) == l_855), l_854)))), p_1023->g_808)))) >= 0UL) , (-1L)))
        { /* block id: 360 */
            (*p_1023->g_217) &= 1L;
        }
        else
        { /* block id: 362 */
            uint8_t *l_862 = (void*)0;
            uint8_t **l_861 = &l_862;
            int32_t l_863 = 0L;
            int64_t *l_887 = (void*)0;
            uint8_t l_991 = 255UL;
            int16_t l_1008 = 0x2C0EL;
            int32_t l_1009 = 0x3A2D9408L;
            for (p_1023->g_532.f0 = 13; (p_1023->g_532.f0 != 35); p_1023->g_532.f0 = safe_add_func_int16_t_s_s(p_1023->g_532.f0, 4))
            { /* block id: 365 */
                uint8_t **l_874 = &l_862;
                int32_t l_877[1];
                uint64_t l_884 = 18446744073709551615UL;
                int64_t *l_889 = (void*)0;
                uint16_t l_935 = 65535UL;
                uint64_t l_970 = 0xD485EF2995AB1E3FL;
                int32_t l_989 = 0x6B46E999L;
                uint8_t l_1003 = 0x62L;
                int i;
                for (i = 0; i < 1; i++)
                    l_877[i] = 0x6F7E3126L;
                if (((*l_822) = (**p_1023->g_457)))
                { /* block id: 367 */
                    int32_t *l_858 = &l_13;
                    uint8_t *l_860 = &p_1023->g_605[2][6];
                    uint8_t **l_859 = &l_860;
                    int32_t l_875 = 0L;
                    uint8_t l_876 = 0x45L;
                    int32_t **l_879 = &p_1023->g_217;
                    int32_t *l_881 = &p_1023->g_823;
                    int32_t *l_882 = &l_875;
                    int32_t *l_883[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*l_879) = func_37((((((*l_858) = 2L) , (l_859 == l_861)) , ((0L > ((**p_1023->g_394) & (l_863 ^ (((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint64_t_u(p_1023->g_79)), (*l_822))) <= (safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((p_1023->g_871 == l_874) | p_1023->g_97[0][1][0]), 4)) > l_875), (**p_1023->g_871)))) != 1L)))) , (**p_1023->g_216))) != l_876), &p_1023->g_728[1], p_1023->g_460[4][2][4], l_863, l_877[0], p_1023);
                    l_884--;
                }
                else
                { /* block id: 371 */
                    if ((l_887 != (((*l_822) |= ((p_1023->g_251 , (l_888[4] = p_1023->g_217)) == (void*)0)) , l_889)))
                    { /* block id: 374 */
                        return p_1023->g_74;
                    }
                    else
                    { /* block id: 376 */
                        union U1 *l_890 = &p_1023->g_532;
                        union U1 **l_891 = &p_1023->g_732;
                        (*l_891) = l_890;
                        return l_880[2][0];
                    }
                }
                for (p_1023->g_808 = 1; (p_1023->g_808 <= 5); p_1023->g_808 += 1)
                { /* block id: 383 */
                    uint8_t l_917 = 0xFBL;
                    for (p_1023->g_109 = 0; (p_1023->g_109 <= 5); p_1023->g_109 += 1)
                    { /* block id: 386 */
                        uint64_t *l_903 = &p_1023->g_184.f0;
                        uint64_t **l_902[5][7] = {{(void*)0,&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{(void*)0,&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{(void*)0,&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{(void*)0,&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0},{(void*)0,&l_903,&l_903,&l_903,&l_903,&l_903,(void*)0}};
                        int32_t *l_918 = &p_1023->g_823;
                        int32_t *l_919 = &l_880[0][0];
                        int32_t *l_920 = &p_1023->g_728[3];
                        int32_t *l_921 = &l_877[0];
                        int32_t *l_922 = &p_1023->g_79;
                        int32_t *l_923 = &p_1023->g_823;
                        int32_t *l_924 = &p_1023->g_79;
                        int32_t *l_925 = &p_1023->g_79;
                        int32_t *l_927 = &p_1023->g_74;
                        int32_t *l_928 = (void*)0;
                        int32_t *l_929 = &l_880[0][0];
                        int32_t *l_930 = (void*)0;
                        int32_t *l_931 = (void*)0;
                        int32_t *l_932 = &l_877[0];
                        int32_t *l_933 = &p_1023->g_728[2];
                        int32_t *l_934[8];
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_934[i] = &l_880[1][0];
                        l_917 = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((**p_1023->g_370), ((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((*p_1023->g_357), ((p_1023->g_904 = (void*)0) != p_1023->g_905))), (*l_822))) <= (((safe_add_func_uint8_t_u_u(p_1023->g_142[6].f0, ((*l_822) | ((((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((*p_1023->g_357), 11)), ((safe_add_func_uint32_t_u_u(p_1023->g_109, 4294967295UL)) , 0xFAL))) || 6UL) || p_1023->g_532.f0) <= p_1023->g_275)))) <= 0xFCL) == 0L)))), (*p_1023->g_357)));
                        --l_935;
                    }
                    (*p_1023->g_217) = 0x4B7B7D57L;
                    (*l_822) &= 0x3F29BBA4L;
                }
                for (l_854 = (-26); (l_854 == (-23)); l_854 = safe_add_func_int8_t_s_s(l_854, 6))
                { /* block id: 396 */
                    uint8_t l_964 = 1UL;
                    int32_t l_965 = (-1L);
                    int32_t *l_972 = (void*)0;
                    uint8_t l_1010 = 0UL;
                    (*l_822) = (**p_1023->g_457);
                    for (p_1023->g_74 = 27; (p_1023->g_74 != (-2)); --p_1023->g_74)
                    { /* block id: 400 */
                        uint32_t ****l_948[2];
                        int32_t l_960 = 4L;
                        uint8_t *l_961[4][5][3] = {{{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0}},{{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0}},{{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0}},{{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0},{&p_1023->g_605[2][4],&p_1023->g_605[2][4],(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_948[i] = &l_945;
                        (*l_822) = ((safe_unary_minus_func_uint64_t_u(((p_1023->g_493[4] ^= (l_863 != ((safe_rshift_func_uint16_t_u_u(((p_1023->g_949 = l_945) == &p_1023->g_370), ((*p_1023->g_357) >= (safe_rshift_func_int8_t_s_u((((safe_sub_func_int8_t_s_s(l_884, (**p_1023->g_871))) , (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((l_877[0] = l_960) && (l_965 = ((p_1023->g_329 , (safe_div_func_uint16_t_u_u((0x12L ^ l_964), 7UL))) && 0x04970BCF87765618L))), (*p_1023->g_357))), (**p_1023->g_950)))) > (*p_1023->g_357)), 1))))) && 0L))) != l_884))) | p_1023->g_184.f0);
                        l_972 = func_37((~(safe_sub_func_uint64_t_u_u((*l_822), p_1023->g_329.f0))), func_37((l_960 , 0x70D6BDF6F89FC434L), (*p_1023->g_457), (((((((~(9L == 0x85L)) | ((-1L) > (safe_add_func_uint16_t_u_u(((((*p_1023->g_357) == 0x0611L) == 0xBE2EL) | l_960), l_970)))) , (*p_1023->g_217)) < 0xC26E564BL) , p_1023->g_169) != 1UL) , l_863), l_877[0], l_965, p_1023), l_863, l_13, l_863, p_1023);
                    }
                    (*p_1023->g_217) = (((safe_mod_func_uint64_t_u_u(l_854, (p_1023->g_500 = ((safe_lshift_func_int16_t_s_s(0x5043L, ((+(((p_1023->g_77 , (**p_1023->g_394)) | ((safe_add_func_int32_t_s_s(((((*p_1023->g_951) = (safe_div_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((l_880[1][0] ^ ((((safe_sub_func_uint64_t_u_u(p_1023->g_809[2][0][0], ((p_1023->g_493[2] = (safe_rshift_func_uint8_t_u_s(4UL, (safe_div_func_uint8_t_u_u(1UL, (**p_1023->g_394)))))) , 6UL))) || l_989) & 0x64L) && 0x176396D6D5F372FCL)) & l_863), 1UL)) & l_990[2][0]), 0x79L))) , l_863) , l_991), l_854)) ^ l_854)) && l_863)) <= l_991))) , p_1023->g_873)))) & (*l_822)) & 1L);
                    for (l_991 = 0; (l_991 >= 19); l_991 = safe_add_func_int64_t_s_s(l_991, 5))
                    { /* block id: 414 */
                        int64_t l_1001 = (-10L);
                        uint64_t *l_1002 = &l_884;
                        int32_t *l_1004 = &l_926[1][4][0];
                        int32_t *l_1005 = &l_877[0];
                        int32_t *l_1006 = &l_965;
                        int32_t *l_1007[5][4][9] = {{{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]}},{{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]}},{{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]}},{{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]}},{{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]},{&l_877[0],&l_877[0],&l_926[1][4][0],&l_926[1][4][0],&l_877[0],&l_877[0],(void*)0,&l_965,&l_880[4][0]}}};
                        int i, j, k;
                        (*l_822) |= (l_880[0][0] < (l_1003 ^= (l_991 , (((safe_sub_func_int64_t_s_s(1L, (((*l_1002) = (safe_mul_func_int8_t_s_s((((void*)0 == l_998) <= (safe_rshift_func_uint8_t_u_s((*p_1023->g_872), (p_1023->g_275 <= (l_1001 <= (((*p_1023->g_217) >= l_935) ^ 2L)))))), l_991))) != 0x7AD71C612626F5DBL))) == l_1001) >= (*p_1023->g_395)))));
                        if (l_863)
                            break;
                        (**p_1023->g_457) = (+l_863);
                        --l_1010;
                    }
                }
            }
        }
    }
    l_1020--;
    return (*l_1014);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_14(uint8_t  p_15, struct S2 * p_1023)
{ /* block id: 8 */
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_352 p_1023->g_353 p_1023->g_746 p_1023->g_251 p_1023->g_357 p_1023->g_217 p_1023->g_79 p_1023->g_302 p_1023->g_493 p_1023->g_109 p_1023->g_213 p_1023->g_74 p_1023->g_460 p_1023->g_395 p_1023->g_97 p_1023->g_212 p_1023->g_329.f0 p_1023->g_370 p_1023->g_371 p_1023->g_296 p_1023->g_808 p_1023->g_809 p_1023->g_728 p_1023->g_394 p_1023->g_184.f0
 * writes: p_1023->g_357 p_1023->g_251 p_1023->g_169 p_1023->g_109 p_1023->g_79 p_1023->g_605 p_1023->g_74 p_1023->g_97 p_1023->g_728
 */
int32_t  func_20(uint32_t  p_21, uint8_t  p_22, struct S2 * p_1023)
{ /* block id: 334 */
    int16_t **l_747 = (void*)0;
    int16_t **l_748 = &p_1023->g_357;
    int16_t *l_750 = (void*)0;
    int16_t **l_749 = &l_750;
    int16_t *l_752[2];
    int16_t **l_751 = &l_752[1];
    int32_t l_753 = 0x5EF57480L;
    int16_t l_772 = 0L;
    uint64_t *l_775 = &p_1023->g_251;
    int64_t *l_778 = (void*)0;
    int64_t *l_779 = (void*)0;
    int64_t *l_780 = &p_1023->g_169;
    int32_t *l_781 = &p_1023->g_79;
    int8_t ***l_793[1];
    uint64_t l_814 = 18446744073709551609UL;
    int i;
    for (i = 0; i < 2; i++)
        l_752[i] = &p_1023->g_109;
    for (i = 0; i < 1; i++)
        l_793[i] = &p_1023->g_394;
    l_753 &= (((*l_748) = &p_1023->g_109) == ((*l_751) = ((*l_749) = &p_1023->g_275)));
    if (((safe_mod_func_uint64_t_u_u(((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((*p_1023->g_352) | (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(p_21, (safe_add_func_uint16_t_u_u((p_1023->g_746 & (safe_rshift_func_int8_t_s_s((((0x95126586L | ((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(l_772, (((safe_add_func_uint16_t_u_u(l_772, ((**l_748) = (((*l_775)++) <= ((*l_780) = (l_772 && l_753)))))) != p_22) , p_21))) ^ (*p_1023->g_217)), l_772)) , l_753)) , p_1023->g_302) ^ p_21), 3))), 0UL)))), p_1023->g_493[2]))) || p_21), 7)), 0x31105A27L)) == p_1023->g_493[2]) ^ 18446744073709551615UL) || l_772), 0x61F1C7AF99A29BC7L)) ^ p_21))
    { /* block id: 342 */
        l_781 = (void*)0;
    }
    else
    { /* block id: 344 */
        uint32_t l_792 = 0xB0A051CFL;
        int8_t ***l_794 = &p_1023->g_394;
        uint8_t *l_795 = &p_1023->g_605[2][4];
        union U1 **l_800 = &p_1023->g_732;
        (*p_1023->g_213) = ((-5L) & ((p_1023->g_109 != ((safe_div_func_uint8_t_u_u(((*l_795) = ((((safe_mod_func_uint8_t_u_u(((*l_781) = (*l_781)), ((safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_792 > (p_22 > ((*p_1023->g_213) >= p_1023->g_460[2][0][2]))), (l_793[0] == l_794))), (*p_1023->g_357))) , (-1L)))) < p_21) < p_21) <= p_21)), (*p_1023->g_395))) <= (*p_1023->g_357))) < p_1023->g_460[2][0][2]));
        p_1023->g_728[1] &= (safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((((*p_1023->g_395) = (p_1023->g_212 == (p_1023->g_329.f0 > (l_800 == &p_1023->g_732)))) | (0UL | ((((*p_1023->g_357) & ((safe_sub_func_uint32_t_u_u((**p_1023->g_370), (l_792 & (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int8_t_s_s(((p_1023->g_808 , l_794) == l_794), 0)) & p_21)))))) != p_1023->g_809[2][0][0])) ^ (*l_781)) , 5L))) <= p_21) < p_21), (*l_781))), p_1023->g_251));
    }
    (*p_1023->g_217) = (65527UL || (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(p_21, (((**p_1023->g_394) < l_814) == (-5L)))) ^ p_21), ((~(safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(p_21)), p_22))) > (((safe_mul_func_int8_t_s_s((((l_753 = (safe_lshift_func_uint8_t_u_u(p_1023->g_184.f0, p_21))) | 255UL) , 0x3AL), 255UL)) || p_21) <= p_21)))));
    return (*p_1023->g_213);
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_3 p_1023->g_70 p_1023->g_72 p_1023->g_79 p_1023->g_74 p_1023->g_97 p_1023->g_77 p_1023->g_109 p_1023->g_78 p_1023->g_142 p_1023->g_142.f0 p_1023->g_158 p_1023->g_184 p_1023->g_192 p_1023->g_296 p_1023->g_357 p_1023->g_275 p_1023->g_500 p_1023->g_212 p_1023->g_395 p_1023->g_302 p_1023->g_217 p_1023->g_457 p_1023->g_532 p_1023->g_370 p_1023->g_438 p_1023->g_493 p_1023->g_546 p_1023->g_419 p_1023->g_371 p_1023->g_460 p_1023->g_169 p_1023->g_350
 * writes: p_1023->g_72 p_1023->g_74 p_1023->g_79 p_1023->g_97 p_1023->g_109 p_1023->g_169 p_1023->g_2 p_1023->g_302 p_1023->g_500 p_1023->g_275 p_1023->g_493 p_1023->g_438 p_1023->g_251
 */
int16_t  func_25(uint32_t  p_26, struct S2 * p_1023)
{ /* block id: 10 */
    volatile int32_t **l_27 = (void*)0;
    volatile int32_t **l_28 = (void*)0;
    volatile int32_t **l_29 = (void*)0;
    volatile int32_t *l_31 = &p_1023->g_2;
    volatile int32_t **l_30 = &l_31;
    int32_t **l_61 = (void*)0;
    int32_t *l_63[1][8] = {{&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3}};
    int32_t **l_62 = &l_63[0][0];
    int32_t *l_147[5][10] = {{&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3},{&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3},{&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3},{&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3},{&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3,&p_1023->g_3}};
    int32_t ***l_496 = &l_61;
    int64_t *l_499 = &p_1023->g_500;
    int16_t l_589 = (-3L);
    uint8_t *l_608 = &p_1023->g_605[2][4];
    int8_t ***l_624[3];
    union U1 *l_643 = &p_1023->g_532;
    int32_t ***l_700 = &l_61;
    int64_t l_736 = 0x7CA74C791B610C6AL;
    int32_t l_737 = (-1L);
    int i, j;
    for (i = 0; i < 3; i++)
        l_624[i] = &p_1023->g_394;
lbl_590:
    (*l_30) = &p_1023->g_2;
    (*l_31) = (func_32(func_37(func_43(((safe_sub_func_uint32_t_u_u(func_14(((safe_div_func_uint32_t_u_u(p_26, (safe_sub_func_uint32_t_u_u(0UL, p_1023->g_3)))) || ((*l_499) &= func_14(((safe_div_func_int16_t_s_s(func_56(((*l_62) = (void*)0), ((*l_496) = func_64(func_68(p_1023->g_70, p_1023), p_1023->g_142[6].f0, l_147[4][7], p_1023)), p_1023->g_296, p_26, p_1023), 0x1E26L)) >= p_26), p_1023))), p_1023), p_26)) , 0x013C1FE6L), p_26, &l_147[3][8], &p_1023->g_217, p_1023), l_147[4][7], p_1023->g_296, p_26, p_26, p_1023), &p_1023->g_217, l_147[4][3], &p_1023->g_3, p_1023) && l_589);
    if (p_1023->g_275)
        goto lbl_590;
    for (p_1023->g_169 = (-3); (p_1023->g_169 == (-27)); --p_1023->g_169)
    { /* block id: 261 */
        uint32_t l_593 = 0x6EAD5754L;
        uint8_t *l_606[6];
        int32_t l_614[7][2][1];
        int8_t **l_629 = &p_1023->g_395;
        int64_t l_642 = 0L;
        uint8_t l_677 = 1UL;
        int32_t *l_699 = (void*)0;
        uint32_t l_702[7] = {1UL,4294967293UL,1UL,1UL,4294967293UL,1UL,1UL};
        int16_t **l_730 = &p_1023->g_357;
        union U1 *l_734 = &p_1023->g_532;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_606[i] = &p_1023->g_605[2][4];
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_614[i][j][k] = 0x296B5C05L;
            }
        }
        for (p_1023->g_109 = 0; (p_1023->g_109 <= 0); p_1023->g_109 += 1)
        { /* block id: 264 */
            uint8_t *l_601 = &p_1023->g_493[4];
            uint8_t **l_600 = &l_601;
            int32_t l_647 = 0x2194E260L;
            int32_t l_652 = 1L;
            int32_t *l_675 = &p_1023->g_74;
            uint32_t l_713 = 0x749110AAL;
            (*l_31) = 0x14430956L;
        }
    }
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_357 p_1023->g_275 p_1023->g_532 p_1023->g_370 p_1023->g_395 p_1023->g_97 p_1023->g_438 p_1023->g_493 p_1023->g_546 p_1023->g_419 p_1023->g_74 p_1023->g_217 p_1023->g_79 p_1023->g_3 p_1023->g_371 p_1023->g_296 p_1023->g_500 p_1023->g_460 p_1023->g_169 p_1023->g_350 p_1023->g_109
 * writes: p_1023->g_275 p_1023->g_493 p_1023->g_438 p_1023->g_79 p_1023->g_251 p_1023->g_109
 */
uint64_t  func_32(int32_t * p_33, int32_t ** p_34, int32_t * p_35, int32_t * p_36, struct S2 * p_1023)
{ /* block id: 228 */
    int32_t l_531 = 0L;
    uint32_t *l_534 = &p_1023->g_296;
    uint32_t **l_533[7][3] = {{&l_534,&l_534,&l_534},{&l_534,&l_534,&l_534},{&l_534,&l_534,&l_534},{&l_534,&l_534,&l_534},{&l_534,&l_534,&l_534},{&l_534,&l_534,&l_534},{&l_534,&l_534,&l_534}};
    uint8_t *l_545 = &p_1023->g_493[2];
    int32_t l_549 = 0x5A8E5C7DL;
    uint32_t l_550 = 0x3200450DL;
    int32_t l_567 = 0x31E72B01L;
    int32_t l_569 = (-7L);
    int32_t l_570 = 0x465D66C7L;
    int i, j;
    if (((((safe_rshift_func_int16_t_s_u(((*p_1023->g_357) = (*p_1023->g_357)), 3)) & ((safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u(l_531, (((((l_531 , p_1023->g_532) , l_533[4][2]) != ((safe_mod_func_int32_t_s_s(0x4B5FD422L, l_531)) , p_1023->g_370)) | (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((!((*l_545) = (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_531, 1L)), l_531)))), 7)) >= l_531), 6))) < l_531))) <= (-1L)) == l_531) ^ (*p_1023->g_395)), 0x20L)) || 0x18A7C6BFL), l_531)) ^ l_531)) > l_531) >= 0x6856L))
    { /* block id: 231 */
        for (p_1023->g_438 = 2; (p_1023->g_438 >= 0); p_1023->g_438 -= 1)
        { /* block id: 234 */
            int i;
            return p_1023->g_493[(p_1023->g_438 + 2)];
        }
    }
    else
    { /* block id: 237 */
        uint16_t l_547 = 65534UL;
        int32_t *l_548[9];
        int i;
        for (i = 0; i < 9; i++)
            l_548[i] = (void*)0;
        l_549 = ((*p_33) = ((l_531 == (p_1023->g_546 , l_547)) >= l_531));
        (**p_34) = (*p_1023->g_419);
        (*p_33) ^= 0x571CB56BL;
    }
    if ((+(*p_36)))
    { /* block id: 243 */
        return l_550;
    }
    else
    { /* block id: 245 */
        int32_t l_568[6][10] = {{0x0FA9FBD1L,0x5BB2071CL,(-8L),0x7DDE2821L,(-8L),0x5BB2071CL,0x0FA9FBD1L,(-3L),(-1L),(-1L)},{0x0FA9FBD1L,0x5BB2071CL,(-8L),0x7DDE2821L,(-8L),0x5BB2071CL,0x0FA9FBD1L,(-3L),(-1L),(-1L)},{0x0FA9FBD1L,0x5BB2071CL,(-8L),0x7DDE2821L,(-8L),0x5BB2071CL,0x0FA9FBD1L,(-3L),(-1L),(-1L)},{0x0FA9FBD1L,0x5BB2071CL,(-8L),0x7DDE2821L,(-8L),0x5BB2071CL,0x0FA9FBD1L,(-3L),(-1L),(-1L)},{0x0FA9FBD1L,0x5BB2071CL,(-8L),0x7DDE2821L,(-8L),0x5BB2071CL,0x0FA9FBD1L,(-3L),(-1L),(-1L)},{0x0FA9FBD1L,0x5BB2071CL,(-8L),0x7DDE2821L,(-8L),0x5BB2071CL,0x0FA9FBD1L,(-3L),(-1L),(-1L)}};
        int32_t l_571 = 0L;
        int32_t l_572 = 0x423DDED8L;
        uint16_t l_585 = 65535UL;
        uint64_t *l_588 = &p_1023->g_251;
        int i, j;
        l_549 = (safe_div_func_uint32_t_u_u((((((l_570 = (l_568[5][0] = ((((((((*p_1023->g_357) = ((void*)0 == &p_1023->g_357)) & (((**p_1023->g_370) ^ (((safe_lshift_func_int8_t_s_u(0x4BL, 7)) | (safe_rshift_func_uint8_t_u_u(l_549, (safe_div_func_int8_t_s_s(0x1EL, (safe_add_func_uint8_t_u_u((((*p_1023->g_217) |= ((safe_mod_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_531, (l_569 = ((((18446744073709551612UL | (((l_567 = (l_550 , 255UL)) ^ l_568[5][0]) || l_568[5][0])) != 0x015FL) , l_568[5][0]) , l_568[5][0])))), p_1023->g_500)) != 0x71E5L) && p_1023->g_460[0][0][3]), l_568[4][7])) || 0xD77D68E0D74BCF70L)) <= l_568[5][0]), 0UL))))))) && p_1023->g_169)) <= l_531)) ^ 255UL) == 0x1D284EB7232DB239L) | l_550) , l_549) | l_550))) >= l_550) > l_571) != l_549) || l_570), 1L));
        (*p_1023->g_217) &= (l_572 & ((*l_588) = ((safe_mod_func_int8_t_s_s(l_568[5][0], (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(l_550, (*p_1023->g_395))), (safe_mod_func_int8_t_s_s(0x77L, l_549)))))) != (((((safe_add_func_int8_t_s_s(l_585, l_585)) & (safe_lshift_func_uint16_t_u_u((l_570 != l_567), l_549))) != l_549) | 0x53BE0370L) == l_568[5][0]))));
    }
    return p_1023->g_350[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_142 p_1023->g_212 p_1023->g_395 p_1023->g_97 p_1023->g_302 p_1023->g_217 p_1023->g_457
 * writes: p_1023->g_97 p_1023->g_79
 */
int32_t * func_37(uint64_t  p_38, int32_t * p_39, uint32_t  p_40, uint32_t  p_41, int32_t  p_42, struct S2 * p_1023)
{ /* block id: 223 */
    int8_t l_513 = 0x3FL;
    int8_t l_520 = 0x7DL;
    int32_t l_521 = 0x7598C3E6L;
    uint32_t l_522 = 0xEC48A711L;
    (*p_1023->g_217) = (((safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint16_t_u_u(p_38, ((+(!((safe_mod_func_int16_t_s_s((((l_521 ^= (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0x50L, l_513)), p_42)) , (((((*p_1023->g_395) ^= (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((0x3D3CC050638CB481L != (p_1023->g_142[6] , 1L)), p_42)), ((safe_add_func_uint32_t_u_u((p_1023->g_212 ^ 0xA32536C5F6E89759L), l_520)) , 6L)))) | l_513) ^ p_42) == l_513)), l_520))) & p_1023->g_302) >= p_42), p_42)) ^ 0L))) , l_522))) ^ l_513) , (void*)0) != (void*)0), 0)) , l_521) < 18446744073709551615UL);
    return (*p_1023->g_457);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_43(int32_t  p_44, uint32_t  p_45, int32_t ** p_46, int32_t ** p_47, struct S2 * p_1023)
{ /* block id: 221 */
    return p_44;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_302 p_1023->g_169 p_1023->g_357 p_1023->g_275 p_1023->g_109
 * writes: p_1023->g_302 p_1023->g_169
 */
int16_t  func_56(int32_t * p_57, int32_t ** p_58, int32_t  p_59, int32_t  p_60, struct S2 * p_1023)
{ /* block id: 209 */
    for (p_1023->g_302 = 0; (p_1023->g_302 != 9); p_1023->g_302 = safe_add_func_int16_t_s_s(p_1023->g_302, 2))
    { /* block id: 212 */
        for (p_1023->g_169 = 0; (p_1023->g_169 <= 0); p_1023->g_169 += 1)
        { /* block id: 215 */
            return (*p_1023->g_357);
        }
    }
    return (*p_1023->g_357);
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_79 p_1023->g_74 p_1023->g_3 p_1023->g_158 p_1023->g_72 p_1023->g_97 p_1023->g_70 p_1023->g_184 p_1023->g_142.f0 p_1023->g_192 p_1023->g_109
 * writes: p_1023->g_79 p_1023->g_74 p_1023->g_72 p_1023->g_169 p_1023->g_97 p_1023->g_2 p_1023->g_109
 */
int32_t ** func_64(int32_t ** p_65, uint32_t  p_66, int32_t * p_67, struct S2 * p_1023)
{ /* block id: 60 */
    int64_t l_150 = 0x0C06C6856C279493L;
    int32_t l_161 = 0x096333BDL;
    uint32_t l_162 = 0xAD9D65D8L;
    int32_t l_178 = 0x76E46630L;
    int32_t l_180[5] = {8L,8L,8L,8L,8L};
    int8_t *l_191[6][6];
    int8_t **l_190[9] = {&l_191[2][4],(void*)0,&l_191[2][4],&l_191[2][4],(void*)0,&l_191[2][4],&l_191[2][4],(void*)0,&l_191[2][4]};
    int32_t *l_429 = &p_1023->g_74;
    uint8_t *l_492 = &p_1023->g_493[2];
    uint32_t l_494 = 0xF7EE5616L;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
            l_191[i][j] = (void*)0;
    }
    for (p_1023->g_79 = (-1); (p_1023->g_79 > 3); p_1023->g_79 = safe_add_func_int64_t_s_s(p_1023->g_79, 5))
    { /* block id: 63 */
        if (l_150)
            break;
    }
lbl_195:
    for (p_1023->g_74 = (-3); (p_1023->g_74 != (-3)); ++p_1023->g_74)
    { /* block id: 68 */
        int32_t l_153 = 8L;
        int32_t *l_154 = &p_1023->g_72;
        (*l_154) = l_153;
        l_161 ^= ((safe_unary_minus_func_uint32_t_u(p_66)) ^ ((safe_sub_func_int64_t_s_s(p_1023->g_3, (p_1023->g_158[0][0] , (safe_sub_func_int32_t_s_s((-9L), (*l_154)))))) ^ p_1023->g_97[3][1][0]));
        if (l_162)
            continue;
        return p_1023->g_70;
    }
    for (l_150 = 0; (l_150 > (-6)); l_150 = safe_sub_func_int16_t_s_s(l_150, 4))
    { /* block id: 76 */
        uint32_t l_167 = 7UL;
        int32_t l_179[8] = {0x6968EFB8L,1L,0x6968EFB8L,0x6968EFB8L,1L,0x6968EFB8L,0x6968EFB8L,1L};
        int i;
        for (l_161 = 0; (l_161 <= (-21)); --l_161)
        { /* block id: 79 */
            uint32_t *l_168[7];
            int32_t *l_170 = &p_1023->g_79;
            int32_t *l_171 = (void*)0;
            int32_t *l_172 = &p_1023->g_79;
            int32_t *l_173 = &p_1023->g_79;
            int32_t *l_174 = &p_1023->g_79;
            int32_t *l_175 = &p_1023->g_72;
            int32_t *l_176 = (void*)0;
            int32_t *l_177[4] = {&p_1023->g_79,&p_1023->g_79,&p_1023->g_79,&p_1023->g_79};
            uint16_t l_181[6] = {0x439AL,0x439AL,0x439AL,0x439AL,0x439AL,0x439AL};
            int8_t *l_189[7][6] = {{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[2][1][0],(void*)0,&p_1023->g_97[2][1][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[2][1][0],(void*)0,&p_1023->g_97[2][1][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[2][1][0],(void*)0,&p_1023->g_97[2][1][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[2][1][0],(void*)0,&p_1023->g_97[2][1][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[2][1][0],(void*)0,&p_1023->g_97[2][1][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[2][1][0],(void*)0,&p_1023->g_97[2][1][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[2][1][0],(void*)0,&p_1023->g_97[2][1][0]}};
            int i, j;
            for (i = 0; i < 7; i++)
                l_168[i] = (void*)0;
            (*l_170) = ((p_1023->g_169 = l_167) == p_66);
            l_181[0]++;
            if (p_1023->g_79)
                continue;
            p_1023->g_2 = (((((p_1023->g_184 , 1UL) == (0L <= (((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(0x0F48L, 7)), (l_178 = ((((void*)0 != p_67) <= p_66) , (p_1023->g_142[6].f0 == ((p_1023->g_97[1][0][0] = (((void*)0 != p_67) , (*l_170))) == 0x22L)))))) , l_190[7]) == p_1023->g_192))) > 0x8C9CD3F7L) <= p_66) == l_180[3]);
        }
    }
    for (p_1023->g_109 = 8; (p_1023->g_109 > 23); p_1023->g_109 = safe_add_func_uint64_t_u_u(p_1023->g_109, 1))
    { /* block id: 91 */
        int32_t *l_203 = (void*)0;
        int32_t l_208[2][5][9] = {{{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL},{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL},{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL},{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL},{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL}},{{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL},{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL},{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL},{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL},{0x4E70BD27L,0x31D4C4AEL,0x594E9917L,0x7FB06713L,0x594E9917L,0x31D4C4AEL,0x4E70BD27L,(-1L),0x3E75671FL}}};
        uint16_t *l_209 = &p_1023->g_210[1];
        uint64_t *l_211 = (void*)0;
        int64_t l_253 = 0x3D7A3F9EB71334DCL;
        uint8_t l_428 = 0xFAL;
        uint32_t *l_473 = &p_1023->g_296;
        uint32_t **l_472 = &l_473;
        int i, j, k;
        if (p_1023->g_72)
            goto lbl_195;
    }
    return &p_1023->g_217;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_72 p_1023->g_70 p_1023->g_79 p_1023->g_74 p_1023->g_97 p_1023->g_77 p_1023->g_3 p_1023->g_109 p_1023->g_78 p_1023->g_142
 * writes: p_1023->g_72 p_1023->g_74 p_1023->g_79 p_1023->g_97 p_1023->g_109
 */
int32_t ** func_68(int32_t ** p_69, struct S2 * p_1023)
{ /* block id: 13 */
    int32_t *l_71[10][7] = {{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72},{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72},{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72},{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72},{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72},{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72},{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72},{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72},{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72},{&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72,&p_1023->g_72}};
    int i, j;
    l_71[0][4] = (void*)0;
    for (p_1023->g_72 = 6; (p_1023->g_72 >= 0); p_1023->g_72 -= 1)
    { /* block id: 17 */
        uint8_t l_73 = 1UL;
        p_69 = &l_71[0][4];
        if (l_73)
            break;
        for (l_73 = 0; (l_73 <= 6); l_73 += 1)
        { /* block id: 22 */
            int32_t l_108 = 0x5A2EA94AL;
            int32_t l_113 = 0x79BF173AL;
            int32_t **l_118 = &l_71[9][1];
            for (p_1023->g_74 = 5; (p_1023->g_74 >= 0); p_1023->g_74 -= 1)
            { /* block id: 25 */
                int32_t l_75[9][3] = {{0x7EC6B039L,0x472EA128L,0x5672FEE6L},{0x7EC6B039L,0x472EA128L,0x5672FEE6L},{0x7EC6B039L,0x472EA128L,0x5672FEE6L},{0x7EC6B039L,0x472EA128L,0x5672FEE6L},{0x7EC6B039L,0x472EA128L,0x5672FEE6L},{0x7EC6B039L,0x472EA128L,0x5672FEE6L},{0x7EC6B039L,0x472EA128L,0x5672FEE6L},{0x7EC6B039L,0x472EA128L,0x5672FEE6L},{0x7EC6B039L,0x472EA128L,0x5672FEE6L}};
                int32_t l_76 = 0x56799626L;
                int i, j;
                l_76 &= ((l_75[3][1] >= p_1023->g_72) & (p_1023->g_70 != (void*)0));
            }
            for (p_1023->g_74 = 1; (p_1023->g_74 <= 6); p_1023->g_74 += 1)
            { /* block id: 30 */
                uint8_t l_81 = 0xA6L;
                uint8_t l_107[4][3][8] = {{{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L},{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L},{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L}},{{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L},{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L},{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L}},{{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L},{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L},{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L}},{{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L},{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L},{253UL,0xA2L,253UL,253UL,0xA2L,253UL,253UL,0xA2L}}};
                int64_t l_112 = 1L;
                int32_t l_114 = 0x59B496B1L;
                int i, j, k;
                if (((void*)0 != (*p_69)))
                { /* block id: 31 */
                    uint32_t l_115 = 0xC3D1A69EL;
                    int16_t l_124 = (-1L);
                    for (p_1023->g_79 = 6; (p_1023->g_79 >= 0); p_1023->g_79 -= 1)
                    { /* block id: 34 */
                        int32_t *l_80[10] = {&p_1023->g_3,&p_1023->g_74,&p_1023->g_79,&p_1023->g_74,&p_1023->g_3,&p_1023->g_3,&p_1023->g_74,&p_1023->g_79,&p_1023->g_74,&p_1023->g_3};
                        int8_t *l_96[4][2][9] = {{{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0]}},{{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0]}},{{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0]}},{{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0]},{&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0],&p_1023->g_97[1][0][0]}}};
                        int i, j, k;
                        l_71[l_73][p_1023->g_79] = l_80[5];
                        if (l_81)
                            break;
                        p_1023->g_109 &= (safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((+(safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(p_1023->g_74, l_81)) & (5L != (p_1023->g_97[1][1][0] |= l_73))) <= (safe_div_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u(((((safe_div_func_uint64_t_u_u((((-4L) && ((p_1023->g_74 , (*p_69)) == (*p_69))) ^ (safe_mul_func_int16_t_s_s(p_1023->g_79, l_107[3][2][2]))), p_1023->g_79)) ^ l_108) | 2UL) >= (-2L)), 3UL)))), l_108))), 0x35E7L)), 0x2560L))), 4294967295UL)), l_81)) || p_1023->g_97[2][0][0]) , l_108) != p_1023->g_74), p_1023->g_77)) & p_1023->g_72), p_1023->g_3));
                    }
                    for (p_1023->g_79 = 6; (p_1023->g_79 >= 0); p_1023->g_79 -= 1)
                    { /* block id: 42 */
                        int32_t l_110 = 0x2F67B55CL;
                        int32_t l_111 = (-1L);
                        int i, j;
                        l_115--;
                        return p_1023->g_70;
                    }
                    for (l_81 = 0; (l_81 > 14); l_81 = safe_add_func_uint16_t_u_u(l_81, 6))
                    { /* block id: 48 */
                        uint32_t l_121 = 4294967288UL;
                        l_121--;
                        if (l_124)
                            continue;
                    }
                }
                else
                { /* block id: 52 */
                    int8_t *l_138 = &p_1023->g_97[3][0][0];
                    int8_t **l_139 = &l_138;
                    l_113 = ((((safe_lshift_func_uint8_t_u_s(l_107[3][2][2], p_1023->g_78)) || ((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint16_t_u(((safe_div_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(p_1023->g_109, (&p_1023->g_97[1][0][0] != ((*l_139) = l_138)))) < (safe_add_func_uint32_t_u_u((p_1023->g_142[6] , (safe_lshift_func_uint8_t_u_u(((*p_69) == (void*)0), (safe_add_func_uint16_t_u_u(p_1023->g_74, p_1023->g_77))))), 1UL))), 0x13A5848CL)) <= 0x5206BB7CL))) & 7UL), 3)), 1UL)), l_73)) , 65534UL)) && p_1023->g_97[1][0][0]) < p_1023->g_72);
                }
            }
        }
    }
    return p_1023->g_70;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1024;
    struct S2* p_1023 = &c_1024;
    struct S2 c_1025 = {
        (-1L), // p_1023->g_2
        0x2B29949DL, // p_1023->g_3
        (void*)0, // p_1023->g_70
        (-1L), // p_1023->g_72
        0x3C842353L, // p_1023->g_74
        (-1L), // p_1023->g_77
        0x5A4005DEL, // p_1023->g_78
        0x6D168620L, // p_1023->g_79
        {{{2L},{2L}},{{2L},{2L}},{{2L},{2L}},{{2L},{2L}}}, // p_1023->g_97
        0x51E2L, // p_1023->g_109
        {{0xE657869F8A89CB40L},{0xE657869F8A89CB40L},{0xE657869F8A89CB40L},{0xE657869F8A89CB40L},{0xE657869F8A89CB40L},{0xE657869F8A89CB40L},{0xE657869F8A89CB40L},{0xE657869F8A89CB40L}}, // p_1023->g_142
        {{{4294967290UL}},{{4294967290UL}}}, // p_1023->g_158
        0x7B0F277706B8BA93L, // p_1023->g_169
        {0xE191EB41D5FB7F66L}, // p_1023->g_184
        (void*)0, // p_1023->g_192
        {0xB54CL,0xB54CL,0xB54CL,0xB54CL,0xB54CL,0xB54CL}, // p_1023->g_210
        4UL, // p_1023->g_212
        &p_1023->g_74, // p_1023->g_213
        &p_1023->g_79, // p_1023->g_217
        &p_1023->g_217, // p_1023->g_216
        0xFBB1B36E39BB3AE0L, // p_1023->g_251
        (-1L), // p_1023->g_275
        0xCEFC9DA7L, // p_1023->g_296
        0x2F4C1B1EL, // p_1023->g_297
        0x41F7F4DD99563AFEL, // p_1023->g_302
        {0x1A71D5EAB3F58FC1L}, // p_1023->g_329
        {65532UL,65532UL,65532UL}, // p_1023->g_350
        &p_1023->g_350[1], // p_1023->g_349
        {{{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349}},{{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349}},{{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349}},{{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349}},{{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349},{&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349,(void*)0,(void*)0,&p_1023->g_349,&p_1023->g_349,&p_1023->g_349}}}, // p_1023->g_348
        65535UL, // p_1023->g_353
        &p_1023->g_353, // p_1023->g_352
        {{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}},{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}},{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}},{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}},{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}},{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}},{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}},{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}},{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}},{{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352},{(void*)0,(void*)0,&p_1023->g_352}}}, // p_1023->g_351
        &p_1023->g_275, // p_1023->g_357
        &p_1023->g_296, // p_1023->g_371
        &p_1023->g_371, // p_1023->g_370
        &p_1023->g_97[0][1][0], // p_1023->g_395
        &p_1023->g_395, // p_1023->g_394
        {6UL}, // p_1023->g_415
        &p_1023->g_74, // p_1023->g_419
        (-1L), // p_1023->g_438
        &p_1023->g_217, // p_1023->g_457
        {{{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L}},{{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L}},{{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L}},{{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L}},{{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L},{0x3402980FL,0x3402980FL,4UL,4294967291UL,0x37CDF0E9L}}}, // p_1023->g_460
        {0x6BL,0xF4L,0x6BL,0x6BL,0xF4L,0x6BL}, // p_1023->g_493
        0x3F62CDE192AD359DL, // p_1023->g_500
        {4294967295UL}, // p_1023->g_532
        {4294967295UL}, // p_1023->g_546
        {{246UL,0x54L,246UL,246UL,0x54L,246UL,246UL},{246UL,0x54L,246UL,246UL,0x54L,246UL,246UL},{246UL,0x54L,246UL,246UL,0x54L,246UL,246UL},{246UL,0x54L,246UL,246UL,0x54L,246UL,246UL},{246UL,0x54L,246UL,246UL,0x54L,246UL,246UL},{246UL,0x54L,246UL,246UL,0x54L,246UL,246UL}}, // p_1023->g_605
        {0x134DCCCCL,0x134DCCCCL,0x134DCCCCL,0x134DCCCCL,0x134DCCCCL}, // p_1023->g_728
        &p_1023->g_532, // p_1023->g_732
        {{&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732},{&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732},{&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732},{&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732},{&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732},{&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732},{&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732},{&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732},{&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732,&p_1023->g_732}}, // p_1023->g_731
        (void*)0, // p_1023->g_735
        0UL, // p_1023->g_746
        18446744073709551606UL, // p_1023->g_808
        {{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}}}, // p_1023->g_809
        (-7L), // p_1023->g_823
        0x7AL, // p_1023->g_873
        &p_1023->g_873, // p_1023->g_872
        &p_1023->g_872, // p_1023->g_871
        {{{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217}},{{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217}},{{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217}},{{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217}},{{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217}},{{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217}},{{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217}},{{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217},{&p_1023->g_217}}}, // p_1023->g_878
        (void*)0, // p_1023->g_904
        {0x37A9695B88A67D26L}, // p_1023->g_906
        &p_1023->g_906[0], // p_1023->g_905
        &p_1023->g_296, // p_1023->g_951
        &p_1023->g_951, // p_1023->g_950
        &p_1023->g_950, // p_1023->g_949
        {{{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217}},{{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217}},{{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217}},{{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217}},{{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217},{&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,&p_1023->g_217,(void*)0,&p_1023->g_217}}}, // p_1023->g_971
        (-8L), // p_1023->g_1017
    };
    c_1024 = c_1025;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1023);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1023->g_2, "p_1023->g_2", print_hash_value);
    transparent_crc(p_1023->g_3, "p_1023->g_3", print_hash_value);
    transparent_crc(p_1023->g_72, "p_1023->g_72", print_hash_value);
    transparent_crc(p_1023->g_74, "p_1023->g_74", print_hash_value);
    transparent_crc(p_1023->g_77, "p_1023->g_77", print_hash_value);
    transparent_crc(p_1023->g_78, "p_1023->g_78", print_hash_value);
    transparent_crc(p_1023->g_79, "p_1023->g_79", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1023->g_97[i][j][k], "p_1023->g_97[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1023->g_109, "p_1023->g_109", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1023->g_142[i].f0, "p_1023->g_142[i].f0", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1023->g_158[i][j].f0, "p_1023->g_158[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1023->g_169, "p_1023->g_169", print_hash_value);
    transparent_crc(p_1023->g_184.f0, "p_1023->g_184.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1023->g_210[i], "p_1023->g_210[i]", print_hash_value);

    }
    transparent_crc(p_1023->g_212, "p_1023->g_212", print_hash_value);
    transparent_crc(p_1023->g_251, "p_1023->g_251", print_hash_value);
    transparent_crc(p_1023->g_275, "p_1023->g_275", print_hash_value);
    transparent_crc(p_1023->g_296, "p_1023->g_296", print_hash_value);
    transparent_crc(p_1023->g_297, "p_1023->g_297", print_hash_value);
    transparent_crc(p_1023->g_302, "p_1023->g_302", print_hash_value);
    transparent_crc(p_1023->g_329.f0, "p_1023->g_329.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1023->g_350[i], "p_1023->g_350[i]", print_hash_value);

    }
    transparent_crc(p_1023->g_353, "p_1023->g_353", print_hash_value);
    transparent_crc(p_1023->g_415.f0, "p_1023->g_415.f0", print_hash_value);
    transparent_crc(p_1023->g_438, "p_1023->g_438", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1023->g_460[i][j][k], "p_1023->g_460[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1023->g_493[i], "p_1023->g_493[i]", print_hash_value);

    }
    transparent_crc(p_1023->g_500, "p_1023->g_500", print_hash_value);
    transparent_crc(p_1023->g_532.f0, "p_1023->g_532.f0", print_hash_value);
    transparent_crc(p_1023->g_546.f0, "p_1023->g_546.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1023->g_605[i][j], "p_1023->g_605[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1023->g_728[i], "p_1023->g_728[i]", print_hash_value);

    }
    transparent_crc(p_1023->g_746, "p_1023->g_746", print_hash_value);
    transparent_crc(p_1023->g_808, "p_1023->g_808", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1023->g_809[i][j][k], "p_1023->g_809[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1023->g_823, "p_1023->g_823", print_hash_value);
    transparent_crc(p_1023->g_873, "p_1023->g_873", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1023->g_906[i], "p_1023->g_906[i]", print_hash_value);

    }
    transparent_crc(p_1023->g_1017, "p_1023->g_1017", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
