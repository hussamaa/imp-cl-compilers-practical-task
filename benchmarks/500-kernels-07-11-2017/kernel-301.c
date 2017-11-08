// -g 75,69,1 -l 75,1,1
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


// Seed: 2575584720

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   volatile uint64_t  f1;
   int8_t  f2;
   volatile uint16_t  f3;
   int32_t  f4;
   int8_t  f5;
   int16_t  f6;
   int64_t  f7;
};

struct S1 {
   int32_t  f0;
   volatile int64_t  f1;
   volatile int64_t  f2;
   volatile int8_t  f3;
   uint16_t  f4;
   uint64_t  f5;
   uint32_t  f6;
   uint64_t  f7;
};

struct S2 {
   struct S1  f0;
   volatile int64_t  f1;
   uint16_t  f2;
   int32_t  f3;
   uint64_t  f4;
};

struct S3 {
   volatile uint64_t  f0;
   int32_t  f1;
   volatile int32_t  f2;
   struct S2  f3;
   volatile struct S0  f4;
   struct S1  f5;
   struct S0  f6;
};

struct S4 {
    int64_t g_5[10];
    uint32_t g_26[5];
    volatile int32_t g_57;
    int32_t g_58;
    volatile int32_t g_59;
    int32_t g_60;
    int32_t g_62;
    volatile struct S0 g_73;
    volatile struct S0 g_74[1];
    uint8_t g_105;
    uint32_t g_136;
    uint32_t g_137;
    int8_t g_151;
    int64_t g_176;
    int64_t g_178;
    struct S2 g_191;
    struct S2 *g_190;
    int64_t g_199[6];
    uint8_t g_200;
    int32_t g_222[7];
    volatile int16_t *g_253;
    int64_t g_258;
    int16_t g_261;
    volatile struct S2 g_269;
    volatile struct S1 g_276;
    volatile struct S3 g_281[6];
    int32_t *g_283;
    int32_t ** volatile g_282;
    volatile int64_t * volatile g_285[1][2][4];
    volatile int64_t * volatile * volatile g_284;
    volatile int64_t * volatile * volatile * volatile g_286;
    int32_t ** volatile g_321;
    int32_t ** volatile g_322;
    int32_t ** volatile g_323;
    int32_t ** volatile g_324;
    volatile struct S3 g_337[2];
    volatile int64_t * volatile g_361;
    volatile int64_t * volatile *g_360[6][7][5];
    struct S2 g_381;
    struct S2 g_382;
    int32_t g_415;
    struct S2 g_428;
    volatile struct S1 g_456;
    int8_t *g_514[9][5][4];
    int8_t * volatile *g_513;
    int32_t ** volatile g_517[4][4][9];
    volatile uint32_t g_521[3][6];
    struct S3 g_561;
    struct S0 g_593;
    int32_t ** volatile g_634;
    volatile struct S1 g_652;
    volatile struct S3 *g_665[7];
    volatile struct S3 ** volatile g_664;
    volatile int64_t g_675;
    uint8_t *g_692;
    uint8_t **g_691;
    struct S3 *g_720;
    struct S3 ** volatile g_719;
    struct S0 g_723;
    volatile int16_t g_739;
    volatile uint64_t g_748;
    volatile uint64_t * volatile g_747;
    volatile uint64_t * volatile *g_746;
    volatile struct S0 g_754;
    uint32_t *g_821;
    uint32_t **g_820;
    uint8_t *g_832;
    int32_t ** volatile g_847[10][2][3];
    int32_t ** volatile g_848;
    struct S3 g_931;
    int32_t ** volatile g_937;
    struct S0 g_951;
    struct S3 *g_1004;
    struct S3 ** volatile g_1003;
    volatile struct S3 g_1014;
    volatile int16_t g_1019[10];
    int32_t ** volatile g_1042;
};


/* --- FORWARD DECLARATIONS --- */
struct S0  func_1(struct S4 * p_1058);
int32_t  func_2(uint16_t  p_3, uint32_t  p_4, struct S4 * p_1058);
uint16_t  func_21(uint32_t  p_22, uint32_t  p_23, struct S4 * p_1058);
int16_t  func_27(int64_t  p_28, uint32_t  p_29, uint64_t  p_30, struct S4 * p_1058);
int32_t  func_31(int64_t  p_32, struct S4 * p_1058);
uint32_t  func_35(uint64_t  p_36, int64_t  p_37, int16_t  p_38, uint64_t  p_39, struct S4 * p_1058);
uint8_t  func_44(int32_t  p_45, uint64_t  p_46, struct S4 * p_1058);
int64_t  func_75(int32_t * p_76, int32_t * p_77, uint32_t  p_78, struct S4 * p_1058);
int32_t * func_80(int64_t  p_81, int32_t  p_82, int32_t * p_83, int32_t  p_84, uint8_t  p_85, struct S4 * p_1058);
int64_t  func_89(int32_t * p_90, uint8_t  p_91, int32_t  p_92, int32_t * p_93, int32_t  p_94, struct S4 * p_1058);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1058->g_5 p_1058->g_284 p_1058->g_285 p_1058->g_269.f1 p_1058->g_276.f1 p_1058->g_281.f5.f1 p_1058->g_931.f5.f5 p_1058->g_137 p_1058->g_1042 p_1058->g_283 p_1058->g_937 p_1058->g_222 p_1058->g_832 p_1058->g_58 p_1058->g_60 p_1058->g_593.f7 p_1058->g_561.f1 p_1058->g_561.f6
 * writes: p_1058->g_5 p_1058->g_283 p_1058->g_105 p_1058->g_561.f1
 */
struct S0  func_1(struct S4 * p_1058)
{ /* block id: 4 */
    uint64_t l_8 = 0UL;
    int32_t *l_1057 = &p_1058->g_561.f1;
    (*l_1057) |= func_2(p_1058->g_5[4], (safe_sub_func_int8_t_s_s(0x79L, (l_8 ^ 0x0B168F928D9BA5F2L))), p_1058);
    return p_1058->g_561.f6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1058->g_284 p_1058->g_285 p_1058->g_269.f1 p_1058->g_276.f1 p_1058->g_281.f5.f1 p_1058->g_931.f5.f5 p_1058->g_137 p_1058->g_1042 p_1058->g_283 p_1058->g_937 p_1058->g_222 p_1058->g_832 p_1058->g_58 p_1058->g_60 p_1058->g_593.f7
 * writes: p_1058->g_5 p_1058->g_283 p_1058->g_105
 */
int32_t  func_2(uint16_t  p_3, uint32_t  p_4, struct S4 * p_1058)
{ /* block id: 5 */
    int16_t l_825 = 4L;
    int32_t l_963 = 0x2754018DL;
    int32_t l_982[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
    int32_t l_1018 = 0x13A75BD8L;
    uint64_t l_1028 = 18446744073709551615UL;
    uint32_t l_1045 = 1UL;
    uint8_t l_1054 = 0x6EL;
    uint32_t *l_1055 = &p_1058->g_136;
    int32_t *l_1056 = (void*)0;
    int i;
    for (p_3 = 0; (p_3 >= 47); ++p_3)
    { /* block id: 8 */
        uint64_t l_953 = 0x3ABFE86CC16FC1C9L;
        uint32_t l_961 = 0UL;
        int32_t l_987[8] = {0x47FB71EFL,0x47FB71EFL,0x47FB71EFL,0x47FB71EFL,0x47FB71EFL,0x47FB71EFL,0x47FB71EFL,0x47FB71EFL};
        uint8_t l_1010 = 0UL;
        struct S3 *l_1013 = (void*)0;
        int32_t *l_1015 = &l_987[6];
        int32_t *l_1016 = &l_982[0];
        int32_t *l_1017[7] = {&l_982[6],&l_982[6],&l_982[6],&l_982[6],&l_982[6],&l_982[6],&l_982[6]};
        uint64_t l_1020 = 18446744073709551615UL;
        int64_t *l_1023 = &p_1058->g_5[4];
        struct S3 **l_1036 = &p_1058->g_1004;
        struct S3 ***l_1035 = &l_1036;
        uint32_t l_1041 = 1UL;
        int i;
        for (p_4 = 0; (p_4 >= 52); p_4++)
        { /* block id: 11 */
            int64_t l_16 = 0x44779D44F4CC511EL;
            int16_t *l_975[9] = {&l_825,(void*)0,&l_825,&l_825,(void*)0,&l_825,&l_825,(void*)0,&l_825};
            int32_t l_977 = 6L;
            int32_t l_989 = 0x544D8985L;
            int32_t l_991 = 0L;
            int32_t l_992 = 0x35C862A1L;
            int32_t l_993[3][5][7] = {{{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL}},{{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL}},{{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL},{(-7L),0x0EBC9DBEL,3L,0x0EBC9DBEL,(-7L),(-7L),0x0EBC9DBEL}}};
            int8_t l_998[8] = {0x6FL,0x6FL,0x6FL,0x6FL,0x6FL,0x6FL,0x6FL,0x6FL};
            int i, j, k;
            (1 + 1);
        }
        l_1020++;
        (*p_1058->g_1042) = func_80(((*l_1023) = (0x5D0B1AD8L ^ p_3)), (p_4 || (safe_add_func_uint8_t_u_u((((((**p_1058->g_284) != ((l_1028 <= (((safe_div_func_uint64_t_u_u((((safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((((*l_1035) = &p_1058->g_1004) == (((((safe_sub_func_uint8_t_u_u(l_825, (0x62L > (safe_mod_func_uint64_t_u_u(0x670CF8A3162B3F3DL, (*l_1015)))))) | 0x1B0A65CE494A4EA2L) == 0xAC4633230D165996L) > l_1018) , &p_1058->g_1004)), p_3)), p_4)) <= 0x52L) , p_1058->g_931.f5.f5), p_1058->g_137)) < p_3) > 0x34A276FED2AA4420L)) != p_3)) <= l_1041) < l_982[6]) , 0x34L), 0x7EL))), &l_982[6], l_825, l_982[0], p_1058);
        if (p_3)
            continue;
    }
    l_1056 = ((p_1058->g_283 != p_1058->g_283) , func_80(l_825, p_3, (*p_1058->g_937), l_963, (safe_sub_func_uint64_t_u_u((((l_1045 | ((*p_1058->g_832) = (p_1058->g_222[0] & (safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((!((safe_div_func_int64_t_s_s(((l_1054 , l_1055) != l_1055), l_982[6])) > p_3)), l_1018)) ^ 0x406EDDC7L), (-1L))), p_4))))) && (*p_1058->g_283)) >= l_1028), p_1058->g_593.f7)), p_1058));
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1058->g_513 p_1058->g_514 p_1058->g_337.f3.f0.f3 p_1058->g_691 p_1058->g_561.f3.f0.f4 p_1058->g_284 p_1058->g_285 p_1058->g_269.f1 p_1058->g_276.f1 p_1058->g_281.f5.f1 p_1058->g_222 p_1058->g_428.f0.f6 p_1058->g_283 p_1058->g_428.f0.f5 p_1058->g_692 p_1058->g_200 p_1058->g_848 p_1058->g_58 p_1058->g_832 p_1058->g_634 p_1058->g_337.f4.f2 p_1058->g_593.f0 p_1058->g_281.f2 p_1058->g_593.f7 p_1058->g_747 p_1058->g_748 p_1058->g_723.f6 p_1058->g_931 p_1058->g_937 p_1058->g_561.f3.f3 p_1058->g_951
 * writes: p_1058->g_692 p_1058->g_832 p_1058->g_561.f3.f0.f4 p_1058->g_199 p_1058->g_105 p_1058->g_58 p_1058->g_60 p_1058->g_283 p_1058->g_382.f2 p_1058->g_200 p_1058->g_561.f3.f0.f7 p_1058->g_381.f0.f7 p_1058->g_561.f6.f2 p_1058->g_723.f6 p_1058->g_561.f3.f3 p_1058->g_931.f3.f0.f5 p_1058->g_74
 */
uint16_t  func_21(uint32_t  p_22, uint32_t  p_23, struct S4 * p_1058)
{ /* block id: 388 */
    uint8_t *l_830 = &p_1058->g_200;
    uint8_t **l_831[9][4] = {{&l_830,(void*)0,(void*)0,(void*)0},{&l_830,(void*)0,(void*)0,(void*)0},{&l_830,(void*)0,(void*)0,(void*)0},{&l_830,(void*)0,(void*)0,(void*)0},{&l_830,(void*)0,(void*)0,(void*)0},{&l_830,(void*)0,(void*)0,(void*)0},{&l_830,(void*)0,(void*)0,(void*)0},{&l_830,(void*)0,(void*)0,(void*)0},{&l_830,(void*)0,(void*)0,(void*)0}};
    int32_t l_833 = (-8L);
    int32_t l_836 = 0x38A8B1D0L;
    uint32_t l_837[6] = {0x28CA45A2L,0xC70F2D26L,0x28CA45A2L,0x28CA45A2L,0xC70F2D26L,0x28CA45A2L};
    int32_t l_895 = 0x21A62768L;
    int8_t l_925 = 0x18L;
    int32_t l_945[7];
    uint32_t ***l_949[1][1];
    int i, j;
    for (i = 0; i < 7; i++)
        l_945[i] = 0x65BFB207L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_949[i][j] = &p_1058->g_820;
    }
    if ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((l_833 = ((((((void*)0 != (*p_1058->g_513)) , 0x68L) , 0x8B29L) == p_1058->g_337[1].f3.f0.f3) | ((p_1058->g_832 = ((*p_1058->g_691) = l_830)) != &p_1058->g_200))) ^ (((safe_rshift_func_int16_t_s_u(l_836, 8)) || p_23) == 8L)), 0)), l_837[0])))
    { /* block id: 392 */
        uint32_t l_839 = 4294967295UL;
        int32_t l_892[7] = {0x0593AF10L,0x0593AF10L,0x0593AF10L,0x0593AF10L,0x0593AF10L,0x0593AF10L,0x0593AF10L};
        uint64_t l_899[4] = {0x9D142A08AA751315L,0x9D142A08AA751315L,0x9D142A08AA751315L,0x9D142A08AA751315L};
        struct S2 **l_932 = &p_1058->g_190;
        uint8_t ***l_934 = &l_831[2][1];
        uint32_t l_946 = 0UL;
        uint32_t ****l_950 = &l_949[0][0];
        int i;
        for (p_1058->g_561.f3.f0.f4 = 0; (p_1058->g_561.f3.f0.f4 <= 5); p_1058->g_561.f3.f0.f4 += 1)
        { /* block id: 395 */
            uint64_t l_838 = 0xFB03825E4D8B831BL;
            struct S3 **l_882 = &p_1058->g_720;
            int32_t l_889 = 0x1F2610F9L;
            int32_t l_894 = 0x2B758D26L;
            int32_t l_897[2][2] = {{0x1AB970AEL,0x1AB970AEL},{0x1AB970AEL,0x1AB970AEL}};
            int i, j;
            if (p_22)
            { /* block id: 396 */
                return l_838;
            }
            else
            { /* block id: 398 */
                int32_t l_840 = 0x0BB3AD1DL;
                int64_t *l_845 = &p_1058->g_561.f6.f0;
                uint8_t *l_846 = &p_1058->g_105;
                uint16_t *l_865 = &p_1058->g_382.f2;
                int32_t l_890 = 0x2FCBB1AFL;
                int32_t l_891 = 0x3882E85BL;
                int32_t l_893 = 0x3B565FE8L;
                int32_t l_896 = 0x357DB3CBL;
                int32_t l_898[3];
                int8_t *l_926 = (void*)0;
                int8_t *l_927 = &p_1058->g_561.f6.f2;
                int32_t *l_928 = &l_836;
                int i;
                for (i = 0; i < 3; i++)
                    l_898[i] = 0x32DD43B3L;
                (*p_1058->g_848) = func_80((p_1058->g_199[p_1058->g_561.f3.f0.f4] = l_839), l_837[0], func_80((**p_1058->g_284), ((*p_1058->g_283) = ((l_840 != (safe_mod_func_uint32_t_u_u((~l_839), 0x9C4D33FCL))) , (p_22 ^ ((!((safe_add_func_uint8_t_u_u(((*l_846) = (((((p_1058->g_222[2] , l_845) != (void*)0) , (void*)0) != l_846) , l_840)), l_838)) | p_23)) && p_1058->g_428.f0.f6)))), &p_1058->g_415, p_1058->g_428.f0.f5, (**p_1058->g_691), p_1058), p_1058->g_428.f0.f6, l_839, p_1058);
                if ((((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(5UL, 7)), ((*l_865) = (0x7BD80A8668CDCC81L && (p_1058->g_199[p_1058->g_561.f3.f0.f4] = ((safe_lshift_func_int8_t_s_s((-1L), (p_23 , (safe_div_func_uint8_t_u_u((**p_1058->g_691), ((**p_1058->g_848) ^ (safe_mul_func_int8_t_s_s((0x9C40A525L <= (safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((*p_1058->g_832), (((l_833 = (4294967295UL | (*p_1058->g_283))) <= 0x71L) , 0x62L))), 3))), p_23)))))))) & p_22)))))), 0x7936E33DL)) ^ 1L) , (**p_1058->g_634)))
                { /* block id: 406 */
                    int64_t l_877 = 0x7214FFE3E2DD03BFL;
                    struct S3 **l_881 = &p_1058->g_720;
                    struct S3 ***l_880 = &l_881;
                    uint64_t *l_883 = &p_1058->g_561.f3.f0.f7;
                    uint64_t *l_884 = &p_1058->g_381.f0.f7;
                    int32_t *l_885[10] = {&l_840,&l_840,&l_840,&l_840,&l_840,&l_840,&l_840,&l_840,&l_840,&l_840};
                    int i;
                    l_833 ^= ((safe_div_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(0x6B28FDB2C8CDB2BDL, (((*l_884) = ((*l_883) = (p_22 | ((safe_rshift_func_uint8_t_u_u((++(*p_1058->g_692)), 1)) | (((*l_880) = (((safe_rshift_func_uint16_t_u_u((p_1058->g_337[1].f4.f2 < ((safe_unary_minus_func_int16_t_s(p_1058->g_593.f0)) | l_877)), l_836)) , (l_837[0] , (safe_mul_func_int16_t_s_s(p_1058->g_281[0].f2, p_22)))) , &p_1058->g_720)) != l_882))))) , 5UL))) && p_23), p_1058->g_58)) , p_23);
                    return p_1058->g_593.f7;
                }
                else
                { /* block id: 413 */
                    int32_t *l_886 = &p_1058->g_222[0];
                    int32_t *l_887 = (void*)0;
                    int32_t *l_888[7] = {&p_1058->g_60,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60};
                    int i;
                    l_899[0]--;
                }
                l_928 = (((safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((++(*p_1058->g_832)), ((*l_927) = (l_893 = (safe_add_func_uint8_t_u_u(0x92L, (safe_add_func_uint64_t_u_u(0xC1C29AB91E7BB50FL, ((((safe_rshift_func_int8_t_s_u((l_889 = 0L), 2)) > 1UL) || p_22) >= (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((0x5BF9L != (safe_rshift_func_int16_t_s_s(0L, 4))))), (safe_mod_func_uint64_t_u_u((((*p_1058->g_283) = 1L) >= (l_838 < l_925)), (*p_1058->g_747)))))))))))))), p_23)), p_23)) == p_23) , (void*)0);
            }
            if (l_899[3])
                break;
            for (p_1058->g_723.f6 = 5; (p_1058->g_723.f6 >= 1); p_1058->g_723.f6 -= 1)
            { /* block id: 426 */
                struct S2 ***l_933 = &l_932;
                int16_t *l_935 = (void*)0;
                int32_t l_936 = 2L;
                int32_t *l_938 = &l_836;
                int32_t *l_939[4][3][2];
                uint64_t l_940 = 0xEE6D4A53AB05E01DL;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_939[i][j][k] = &l_833;
                    }
                }
                (*p_1058->g_937) = func_80(p_23, (&p_22 != &p_1058->g_521[1][1]), &l_836, p_23, (safe_mul_func_uint8_t_u_u(((l_895 = (&l_831[2][1] == ((((p_1058->g_931 , &p_1058->g_190) != ((*l_933) = l_932)) >= 0xE8B09867L) , l_934))) || l_889), l_936)), p_1058);
                ++l_940;
                for (p_1058->g_561.f3.f3 = 1; (p_1058->g_561.f3.f3 <= 5); p_1058->g_561.f3.f3 += 1)
                { /* block id: 433 */
                    int16_t l_943 = (-1L);
                    for (p_1058->g_931.f3.f0.f5 = 0; (p_1058->g_931.f3.f0.f5 <= 1); p_1058->g_931.f3.f0.f5 += 1)
                    { /* block id: 436 */
                        int32_t **l_944 = &l_939[3][2][1];
                        int i, j, k;
                        if ((**p_1058->g_848))
                            break;
                        if (l_943)
                            break;
                        (*p_1058->g_937) = &l_836;
                        (*l_944) = (void*)0;
                    }
                }
                --l_946;
            }
        }
        (*p_1058->g_283) = (((*l_950) = ((((void*)0 != &l_925) && (l_837[0] && 8UL)) , l_949[0][0])) == &p_1058->g_820);
    }
    else
    { /* block id: 448 */
        struct S0 *l_952[5];
        int i;
        for (i = 0; i < 5; i++)
            l_952[i] = &p_1058->g_931.f6;
        p_1058->g_74[0] = p_1058->g_951;
    }
    return l_837[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1058->g_5 p_1058->g_26 p_1058->g_58 p_1058->g_73 p_1058->g_381.f0.f4 p_1058->g_261 p_1058->g_281.f4.f7 p_1058->g_190 p_1058->g_137 p_1058->g_283 p_1058->g_381.f3 p_1058->g_282 p_1058->g_60 p_1058->g_281.f4 p_1058->g_456 p_1058->g_281.f3.f0.f6 p_1058->g_381.f0.f0 p_1058->g_176 p_1058->g_428.f0.f5 p_1058->g_337.f3.f2 p_1058->g_191.f2 p_1058->g_428.f4 p_1058->g_269.f0.f0 p_1058->g_382.f4 p_1058->g_324 p_1058->g_191.f3 p_1058->g_286 p_1058->g_284 p_1058->g_285 p_1058->g_269.f1 p_1058->g_276.f1 p_1058->g_281.f5.f1 p_1058->g_561.f5.f0 p_1058->g_593 p_1058->g_191.f0.f0 p_1058->g_382.f2 p_1058->g_178 p_1058->g_191.f0.f5 p_1058->g_561.f4.f0 p_1058->g_381.f0.f2 p_1058->g_191.f4 p_1058->g_382.f0.f5 p_1058->g_191 p_1058->g_561.f3.f0.f4 p_1058->g_746 p_1058->g_428.f0.f6 p_1058->g_105 p_1058->g_754 p_1058->g_415 p_1058->g_382.f3 p_1058->g_723.f5 p_1058->g_222 p_1058->g_200 p_1058->g_723.f2
 * writes: p_1058->g_58 p_1058->g_60 p_1058->g_74 p_1058->g_381.f0.f4 p_1058->g_261 p_1058->g_200 p_1058->g_381.f3 p_1058->g_62 p_1058->g_105 p_1058->g_151 p_1058->g_191.f3 p_1058->g_176 p_1058->g_561.f6.f6 p_1058->g_178 p_1058->g_382.f3 p_1058->g_191.f4 p_1058->g_191.f0.f0 p_1058->g_382.f0.f5 p_1058->g_381.f4 p_1058->g_428.f0.f6 p_1058->g_199 p_1058->g_415 p_1058->g_561.f5.f6 p_1058->g_723.f5 p_1058->g_428.f2 p_1058->g_820 p_1058->g_723.f2
 */
int16_t  func_27(int64_t  p_28, uint32_t  p_29, uint64_t  p_30, struct S4 * p_1058)
{ /* block id: 13 */
    int64_t l_51 = 0x6EC37461BCF2EC28L;
    uint8_t l_54 = 247UL;
    int32_t l_601[3];
    int32_t *l_602 = &p_1058->g_382.f3;
    uint64_t *l_603 = (void*)0;
    uint64_t *l_604 = &p_1058->g_191.f4;
    int32_t *l_805 = &p_1058->g_415;
    uint8_t l_808 = 255UL;
    int i;
    for (i = 0; i < 3; i++)
        l_601[i] = (-3L);
    (*l_805) |= func_31((p_29 > (safe_sub_func_uint64_t_u_u((0x1C19CD89L && func_35(((*l_604) &= (((*l_602) = ((6L == ((0x0647L >= p_29) != ((safe_div_func_int32_t_s_s((l_601[0] |= (safe_mod_func_uint8_t_u_u(0xB8L, func_44(((safe_add_func_int32_t_s_s(((p_1058->g_5[4] >= (safe_mul_func_int8_t_s_s(l_51, (safe_div_func_uint32_t_u_u(((p_1058->g_5[4] , l_54) | p_1058->g_5[6]), p_1058->g_26[4]))))) != p_30), p_28)) & p_1058->g_26[3]), l_54, p_1058)))), p_28)) ^ l_54))) <= 0x8738L)) , l_51)), l_51, p_29, p_28, p_1058)), p_30))), p_1058);
    (*l_805) = p_30;
    for (p_1058->g_382.f3 = 5; (p_1058->g_382.f3 >= 1); p_1058->g_382.f3 -= 1)
    { /* block id: 360 */
        uint64_t l_812[10] = {0xD1ABE4DF9C384BD4L,0xD1ABE4DF9C384BD4L,0xD1ABE4DF9C384BD4L,0xD1ABE4DF9C384BD4L,0xD1ABE4DF9C384BD4L,0xD1ABE4DF9C384BD4L,0xD1ABE4DF9C384BD4L,0xD1ABE4DF9C384BD4L,0xD1ABE4DF9C384BD4L,0xD1ABE4DF9C384BD4L};
        uint32_t *l_816 = &p_1058->g_561.f3.f0.f6;
        uint32_t **l_815 = &l_816;
        int i;
        for (p_1058->g_561.f5.f6 = 0; (p_1058->g_561.f5.f6 <= 6); p_1058->g_561.f5.f6 += 1)
        { /* block id: 363 */
            int i;
            for (p_1058->g_723.f5 = 1; (p_1058->g_723.f5 <= 6); p_1058->g_723.f5 += 1)
            { /* block id: 366 */
                int i;
                return p_1058->g_222[p_1058->g_723.f5];
            }
            (*l_805) &= ((++p_1058->g_200) | (p_1058->g_222[p_1058->g_382.f3] == l_808));
            for (p_1058->g_428.f2 = 0; (p_1058->g_428.f2 == 31); p_1058->g_428.f2++)
            { /* block id: 373 */
                int32_t *l_811[7] = {&p_1058->g_222[p_1058->g_382.f3],&p_1058->g_222[0],&p_1058->g_222[p_1058->g_382.f3],&p_1058->g_222[p_1058->g_382.f3],&p_1058->g_222[0],&p_1058->g_222[p_1058->g_382.f3],&p_1058->g_222[p_1058->g_382.f3]};
                uint32_t ***l_817 = &l_815;
                uint32_t **l_819[3];
                uint32_t ***l_818[5][9][5] = {{{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0}},{{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0}},{{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0}},{{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0}},{{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0},{&l_819[0],&l_819[1],&l_819[1],(void*)0,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_819[i] = &l_816;
                l_812[1]++;
                p_1058->g_820 = ((*l_817) = l_815);
                for (p_1058->g_723.f2 = 26; (p_1058->g_723.f2 <= (-17)); --p_1058->g_723.f2)
                { /* block id: 379 */
                    int16_t l_824 = 0x5917L;
                    return l_824;
                }
            }
            (*p_1058->g_283) = (!(p_29 != p_1058->g_222[(p_1058->g_382.f3 + 1)]));
        }
    }
    return (*l_805);
}


/* ------------------------------------------ */
/* 
 * reads : p_1058->g_282 p_1058->g_283 p_1058->g_60
 * writes:
 */
int32_t  func_31(int64_t  p_32, struct S4 * p_1058)
{ /* block id: 353 */
    int16_t l_794 = (-1L);
    int32_t *l_795 = (void*)0;
    int32_t *l_796[1][9][10] = {{{&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_561.f1,&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[0],&p_1058->g_222[0]},{&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_561.f1,&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[0],&p_1058->g_222[0]},{&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_561.f1,&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[0],&p_1058->g_222[0]},{&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_561.f1,&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[0],&p_1058->g_222[0]},{&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_561.f1,&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[0],&p_1058->g_222[0]},{&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_561.f1,&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[0],&p_1058->g_222[0]},{&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_561.f1,&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[0],&p_1058->g_222[0]},{&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_561.f1,&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[0],&p_1058->g_222[0]},{&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_222[6],&p_1058->g_561.f1,&p_1058->g_60,&p_1058->g_561.f1,&p_1058->g_222[0],&p_1058->g_222[0]}}};
    int16_t l_797[9][6] = {{0x109AL,0x722AL,5L,0x316BL,0x722AL,0x316BL},{0x109AL,0x722AL,5L,0x316BL,0x722AL,0x316BL},{0x109AL,0x722AL,5L,0x316BL,0x722AL,0x316BL},{0x109AL,0x722AL,5L,0x316BL,0x722AL,0x316BL},{0x109AL,0x722AL,5L,0x316BL,0x722AL,0x316BL},{0x109AL,0x722AL,5L,0x316BL,0x722AL,0x316BL},{0x109AL,0x722AL,5L,0x316BL,0x722AL,0x316BL},{0x109AL,0x722AL,5L,0x316BL,0x722AL,0x316BL},{0x109AL,0x722AL,5L,0x316BL,0x722AL,0x316BL}};
    int8_t l_798 = 0x26L;
    int32_t l_799 = 1L;
    int32_t l_800 = 1L;
    int64_t l_801 = (-7L);
    uint32_t l_802[4] = {0xDC7EADA3L,0xDC7EADA3L,0xDC7EADA3L,0xDC7EADA3L};
    int i, j, k;
    --l_802[2];
    return (**p_1058->g_282);
}


/* ------------------------------------------ */
/* 
 * reads : p_1058->g_191.f0.f0 p_1058->g_382.f0.f5 p_1058->g_190 p_1058->g_191 p_1058->g_561.f3.f0.f4 p_1058->g_746 p_1058->g_428.f0.f6 p_1058->g_105 p_1058->g_754 p_1058->g_176 p_1058->g_26 p_1058->g_283 p_1058->g_60
 * writes: p_1058->g_191.f0.f0 p_1058->g_382.f0.f5 p_1058->g_381.f4 p_1058->g_261 p_1058->g_428.f0.f6 p_1058->g_105 p_1058->g_176 p_1058->g_199 p_1058->g_60
 */
uint32_t  func_35(uint64_t  p_36, int64_t  p_37, int16_t  p_38, uint64_t  p_39, struct S4 * p_1058)
{ /* block id: 272 */
    uint8_t l_619 = 6UL;
    int32_t l_622 = 0L;
    int32_t *l_626 = &p_1058->g_561.f3.f0.f0;
    int64_t l_631[1][3];
    int32_t l_768 = 2L;
    int8_t l_772 = 0x2EL;
    int32_t l_774 = 0x3004AFD3L;
    int32_t l_775 = 0x280EA2DDL;
    int32_t l_776 = 0x06989375L;
    int32_t l_777[4][7] = {{0x13FD0259L,0x675C7FFAL,0x13FD0259L,0x13FD0259L,0x675C7FFAL,0x13FD0259L,0x13FD0259L},{0x13FD0259L,0x675C7FFAL,0x13FD0259L,0x13FD0259L,0x675C7FFAL,0x13FD0259L,0x13FD0259L},{0x13FD0259L,0x675C7FFAL,0x13FD0259L,0x13FD0259L,0x675C7FFAL,0x13FD0259L,0x13FD0259L},{0x13FD0259L,0x675C7FFAL,0x13FD0259L,0x13FD0259L,0x675C7FFAL,0x13FD0259L,0x13FD0259L}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_631[i][j] = 0x7EDA2BF4E05D3843L;
    }
    for (p_1058->g_191.f0.f0 = 0; (p_1058->g_191.f0.f0 == 21); p_1058->g_191.f0.f0++)
    { /* block id: 275 */
        int16_t l_651 = 4L;
        int64_t *l_656 = &p_1058->g_5[9];
        int64_t **l_655 = &l_656;
        uint64_t *l_744 = (void*)0;
        uint64_t *l_745 = &p_1058->g_381.f4;
        int16_t *l_749 = &p_1058->g_261;
        uint32_t *l_750 = &p_1058->g_428.f0.f6;
        uint8_t *l_751 = &p_1058->g_105;
        int64_t *l_755 = &p_1058->g_176;
        int64_t *l_756 = &p_1058->g_199[1];
        int32_t l_761 = 0x03F6C407L;
        int32_t l_762 = 1L;
        int32_t l_763[8][10] = {{0x5F08E166L,0L,1L,0x781CEB3AL,1L,0L,0x5F08E166L,0x0C7ACD1AL,5L,(-8L)},{0x5F08E166L,0L,1L,0x781CEB3AL,1L,0L,0x5F08E166L,0x0C7ACD1AL,5L,(-8L)},{0x5F08E166L,0L,1L,0x781CEB3AL,1L,0L,0x5F08E166L,0x0C7ACD1AL,5L,(-8L)},{0x5F08E166L,0L,1L,0x781CEB3AL,1L,0L,0x5F08E166L,0x0C7ACD1AL,5L,(-8L)},{0x5F08E166L,0L,1L,0x781CEB3AL,1L,0L,0x5F08E166L,0x0C7ACD1AL,5L,(-8L)},{0x5F08E166L,0L,1L,0x781CEB3AL,1L,0L,0x5F08E166L,0x0C7ACD1AL,5L,(-8L)},{0x5F08E166L,0L,1L,0x781CEB3AL,1L,0L,0x5F08E166L,0x0C7ACD1AL,5L,(-8L)},{0x5F08E166L,0L,1L,0x781CEB3AL,1L,0L,0x5F08E166L,0x0C7ACD1AL,5L,(-8L)}};
        int32_t l_764 = 0x0E98538FL;
        int32_t l_765 = 9L;
        int32_t l_766 = 0x6F13AFE2L;
        int32_t l_767 = 1L;
        int32_t l_769 = (-10L);
        int32_t l_770 = 0x468C68CEL;
        int32_t l_771 = 0x111453FCL;
        int32_t l_773[1][5];
        uint64_t l_778[6][2];
        uint32_t l_793 = 4294967293UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_773[i][j] = 0x2C759B3DL;
        }
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_778[i][j] = 0UL;
        }
        for (p_1058->g_382.f0.f5 = 6; (p_1058->g_382.f0.f5 <= 43); p_1058->g_382.f0.f5++)
        { /* block id: 278 */
            uint32_t *l_616 = &p_1058->g_26[3];
            uint64_t *l_623 = &p_1058->g_381.f0.f5;
            int32_t l_699 = 2L;
            struct S3 *l_718[5][6] = {{&p_1058->g_561,&p_1058->g_561,(void*)0,&p_1058->g_561,&p_1058->g_561,&p_1058->g_561},{&p_1058->g_561,&p_1058->g_561,(void*)0,&p_1058->g_561,&p_1058->g_561,&p_1058->g_561},{&p_1058->g_561,&p_1058->g_561,(void*)0,&p_1058->g_561,&p_1058->g_561,&p_1058->g_561},{&p_1058->g_561,&p_1058->g_561,(void*)0,&p_1058->g_561,&p_1058->g_561,&p_1058->g_561},{&p_1058->g_561,&p_1058->g_561,(void*)0,&p_1058->g_561,&p_1058->g_561,&p_1058->g_561}};
            int i, j;
            (1 + 1);
        }
        if (p_36)
            break;
        if (((((((*l_750) |= (safe_lshift_func_int16_t_s_s(p_37, ((*l_749) = (safe_add_func_uint64_t_u_u(((*p_1058->g_190) , ((*l_745) = p_1058->g_561.f3.f0.f4)), (p_1058->g_746 == p_1058->g_746))))))) , ((((*l_751) &= 0UL) , ((*l_756) = ((*l_755) ^= ((safe_mul_func_uint8_t_u_u(((l_651 , p_1058->g_754) , l_651), 0L)) >= l_619)))) < p_36)) >= 0x6A4ECE8AL) > 18446744073709551610UL) <= 0x47L))
        { /* block id: 343 */
            int32_t *l_757 = &p_1058->g_415;
            int32_t *l_758 = (void*)0;
            int32_t *l_759 = (void*)0;
            int32_t *l_760[9] = {&l_622,&l_622,&l_622,&l_622,&l_622,&l_622,&l_622,&l_622,&l_622};
            int i;
            --l_778[3][1];
        }
        else
        { /* block id: 345 */
            int64_t *l_790 = (void*)0;
            int64_t **l_789 = &l_790;
            int8_t *l_791[9];
            int32_t l_792 = 8L;
            int i;
            for (i = 0; i < 9; i++)
                l_791[i] = &p_1058->g_593.f2;
            (*p_1058->g_283) |= (safe_add_func_uint64_t_u_u(((((0x39L == (p_38 != 65528UL)) || (safe_mul_func_uint16_t_u_u(((*p_1058->g_190) , ((l_792 |= (p_1058->g_26[0] , (safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(p_39, 9L)), (&p_37 != ((*l_789) = &p_1058->g_258)))))) <= 0x0AL)), l_778[3][1]))) == l_762) ^ 4294967289UL), p_1058->g_382.f0.f5));
        }
        return l_793;
    }
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1058->g_58 p_1058->g_26 p_1058->g_73 p_1058->g_381.f0.f4 p_1058->g_261 p_1058->g_281.f4.f7 p_1058->g_190 p_1058->g_137 p_1058->g_283 p_1058->g_381.f3 p_1058->g_282 p_1058->g_60 p_1058->g_281.f4 p_1058->g_456 p_1058->g_281.f3.f0.f6 p_1058->g_381.f0.f0 p_1058->g_176 p_1058->g_428.f0.f5 p_1058->g_337.f3.f2 p_1058->g_191.f2 p_1058->g_428.f4 p_1058->g_269.f0.f0 p_1058->g_382.f4 p_1058->g_324 p_1058->g_191.f3 p_1058->g_286 p_1058->g_284 p_1058->g_285 p_1058->g_269.f1 p_1058->g_276.f1 p_1058->g_281.f5.f1 p_1058->g_561.f5.f0 p_1058->g_593 p_1058->g_191.f0.f0 p_1058->g_382.f2 p_1058->g_178 p_1058->g_191.f0.f5 p_1058->g_561.f4.f0 p_1058->g_381.f0.f2
 * writes: p_1058->g_58 p_1058->g_60 p_1058->g_74 p_1058->g_381.f0.f4 p_1058->g_261 p_1058->g_200 p_1058->g_381.f3 p_1058->g_62 p_1058->g_105 p_1058->g_151 p_1058->g_191.f3 p_1058->g_176 p_1058->g_561.f6.f6 p_1058->g_178
 */
uint8_t  func_44(int32_t  p_45, uint64_t  p_46, struct S4 * p_1058)
{ /* block id: 14 */
    uint8_t l_97[7];
    int32_t *l_221[3];
    int64_t l_519 = 0L;
    int32_t l_537 = 0x282082C7L;
    int8_t *l_553 = &p_1058->g_151;
    int64_t l_569[5];
    uint16_t l_570 = 5UL;
    int64_t *l_574 = &p_1058->g_176;
    int64_t **l_573 = &l_574;
    uint32_t l_583[4] = {4294967289UL,4294967289UL,4294967289UL,4294967289UL};
    uint32_t *l_594 = &l_583[2];
    uint8_t *l_595 = &l_97[2];
    int16_t *l_596 = &p_1058->g_561.f6.f6;
    int32_t l_597 = 0x6CA768F9L;
    int64_t *l_598 = &p_1058->g_178;
    int32_t l_599[9][5][5] = {{{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L}},{{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L}},{{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L}},{{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L}},{{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L}},{{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L}},{{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L}},{{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L}},{{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L},{0x30CD4761L,0L,(-1L),1L,0x459878B1L}}};
    int16_t *l_600 = &p_1058->g_261;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_97[i] = 246UL;
    for (i = 0; i < 3; i++)
        l_221[i] = &p_1058->g_222[0];
    for (i = 0; i < 5; i++)
        l_569[i] = (-4L);
    for (p_46 = 2; (p_46 > 1); p_46 = safe_sub_func_int32_t_s_s(p_46, 1))
    { /* block id: 17 */
        uint64_t l_70 = 0x220C99D02BD444C6L;
        int32_t *l_88 = &p_1058->g_58;
        uint32_t l_416 = 1UL;
        struct S2 *l_427 = &p_1058->g_428;
        int32_t l_430 = 0x5649C548L;
        int32_t l_432[2];
        int8_t l_465 = 3L;
        int64_t **l_533 = (void*)0;
        int64_t ***l_532 = &l_533;
        uint64_t l_538 = 0x6FDCF9C68149F9E6L;
        struct S3 *l_560 = &p_1058->g_561;
        int8_t l_565 = 0x31L;
        int i;
        for (i = 0; i < 2; i++)
            l_432[i] = 0L;
        for (p_45 = 0; (p_45 <= 4); p_45 += 1)
        { /* block id: 20 */
            int8_t l_68 = (-8L);
            int32_t *l_79 = &p_1058->g_58;
            uint8_t *l_98 = &l_97[3];
            int i;
            for (p_1058->g_58 = 1; (p_1058->g_58 <= 4); p_1058->g_58 += 1)
            { /* block id: 23 */
                for (p_1058->g_60 = 1; (p_1058->g_60 <= 4); p_1058->g_60 += 1)
                { /* block id: 26 */
                    int32_t *l_61 = &p_1058->g_62;
                    int32_t *l_63 = &p_1058->g_62;
                    int32_t *l_64 = &p_1058->g_62;
                    int32_t *l_65 = &p_1058->g_62;
                    int32_t *l_66 = &p_1058->g_62;
                    int32_t *l_67 = &p_1058->g_62;
                    int32_t *l_69 = &p_1058->g_62;
                    int i;
                    ++l_70;
                    if (p_1058->g_26[p_1058->g_58])
                        continue;
                }
                p_1058->g_74[0] = p_1058->g_73;
            }
        }
        l_416--;
        for (p_1058->g_381.f0.f4 = 0; (p_1058->g_381.f0.f4 <= 1); p_1058->g_381.f0.f4 += 1)
        { /* block id: 191 */
            int32_t *l_423 = &p_1058->g_62;
            int32_t l_433 = 0x627E386FL;
            int32_t l_434 = 1L;
            int32_t l_435 = 0L;
            int32_t l_436 = 8L;
            int32_t l_437 = 0x533BF591L;
            uint16_t l_440 = 0UL;
            int32_t l_460 = 0L;
            int16_t l_505 = 0L;
            int32_t l_520 = 0x23C941BCL;
            int64_t ***l_534 = (void*)0;
            struct S1 *l_546 = &p_1058->g_381.f0;
            struct S3 **l_562 = &l_560;
            struct S3 *l_564[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            struct S3 **l_563 = &l_564[3];
            uint8_t l_566 = 0x1AL;
            int i;
            for (p_1058->g_261 = 0; (p_1058->g_261 <= 1); p_1058->g_261 += 1)
            { /* block id: 194 */
                uint8_t *l_424[3];
                int64_t ***l_425 = (void*)0;
                int64_t ****l_426 = &l_425;
                uint64_t *l_429[9][3][3];
                int32_t l_431 = 2L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_424[i] = &l_97[2];
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_429[i][j][k] = &p_1058->g_381.f4;
                    }
                }
                l_431 = ((*p_1058->g_283) = ((safe_mul_func_int16_t_s_s(p_1058->g_26[(p_1058->g_261 + 3)], (p_45 == ((safe_mod_func_uint8_t_u_u((p_1058->g_200 = (((void*)0 == l_423) || (p_46 | ((*l_88) = 0xD2L)))), p_1058->g_281[0].f4.f7)) >= ((((p_45 != (l_430 = (((((*l_426) = l_425) == &p_1058->g_360[2][2][4]) , l_427) != p_1058->g_190))) & p_46) , p_45) , p_46))))) >= p_1058->g_137));
            }
            for (p_45 = 0; (p_45 <= 4); p_45 += 1)
            { /* block id: 204 */
                int16_t l_438 = 0x14AAL;
                int32_t l_439[4] = {(-1L),(-1L),(-1L),(-1L)};
                int64_t *l_504 = &p_1058->g_258;
                int64_t **l_503 = &l_504;
                int64_t ***l_502 = &l_503;
                uint32_t l_557[10][2] = {{0xFA5E5C27L,0xFA5E5C27L},{0xFA5E5C27L,0xFA5E5C27L},{0xFA5E5C27L,0xFA5E5C27L},{0xFA5E5C27L,0xFA5E5C27L},{0xFA5E5C27L,0xFA5E5C27L},{0xFA5E5C27L,0xFA5E5C27L},{0xFA5E5C27L,0xFA5E5C27L},{0xFA5E5C27L,0xFA5E5C27L},{0xFA5E5C27L,0xFA5E5C27L},{0xFA5E5C27L,0xFA5E5C27L}};
                int i, j;
                --l_440;
                for (p_1058->g_381.f3 = 1; (p_1058->g_381.f3 <= 4); p_1058->g_381.f3 += 1)
                { /* block id: 208 */
                    int8_t l_480 = 0L;
                    uint8_t *l_481 = &p_1058->g_105;
                    (*p_1058->g_283) = (**p_1058->g_282);
                    (*l_423) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((p_1058->g_281[0].f4 , ((safe_div_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((l_439[2] || (safe_unary_minus_func_int64_t_s(l_439[3]))), (safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u((p_1058->g_456 , (((safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_u(7L, p_45)))) , (p_46 == l_460)) , (safe_mod_func_int8_t_s_s(((safe_add_func_int64_t_s_s((-5L), (-1L))) >= p_1058->g_281[0].f3.f0.f6), p_1058->g_381.f0.f0)))), p_1058->g_176)), 3L)))) , p_46) , p_46), 6UL)) , p_1058->g_428.f0.f5)), 3)), l_465));
                    (*l_423) = (safe_sub_func_int8_t_s_s(0x4BL, ((safe_mod_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((((*l_481) = (safe_sub_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((0x2E376434L || (safe_sub_func_uint16_t_u_u((((1UL & p_45) , ((*l_88) , l_480)) & p_1058->g_337[1].f3.f2), p_46))), ((p_45 , l_480) & 0x0FL))) & p_46), p_46))) >= p_45), 0x59F329D4L)) || 0x57BDL), p_1058->g_191.f2)) == 1UL) , 0x30BDL), (-7L))) <= 0x6FD2L)));
                }
                (**p_1058->g_324) = ((((*l_423) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((p_1058->g_151 = (safe_rshift_func_uint16_t_u_s(0xD16DL, 9))) || (safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(p_1058->g_428.f4, (!(!(p_45 != ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((0x49C889DF03D7300AL || (safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((p_45 , 0x293719B8L) , (p_1058->g_269.f0.f0 & (*l_88))), (safe_lshift_func_int8_t_s_s(((void*)0 != l_502), 4)))) > l_439[2]), 65535UL))) < 0x058504F94FDA8D4CL), l_439[2])), p_45)) <= l_505)))))), p_46))), p_1058->g_382.f4)), 13))) , 1L) && 0x16EAB9F0L);
                for (p_1058->g_191.f3 = 1; (p_1058->g_191.f3 >= 0); p_1058->g_191.f3 -= 1)
                { /* block id: 219 */
                    int32_t l_512[9][10] = {{(-1L),0x5121F997L,5L,0x702D7B55L,0x5121F997L,0x702D7B55L,5L,0x5121F997L,(-1L),(-1L)},{(-1L),0x5121F997L,5L,0x702D7B55L,0x5121F997L,0x702D7B55L,5L,0x5121F997L,(-1L),(-1L)},{(-1L),0x5121F997L,5L,0x702D7B55L,0x5121F997L,0x702D7B55L,5L,0x5121F997L,(-1L),(-1L)},{(-1L),0x5121F997L,5L,0x702D7B55L,0x5121F997L,0x702D7B55L,5L,0x5121F997L,(-1L),(-1L)},{(-1L),0x5121F997L,5L,0x702D7B55L,0x5121F997L,0x702D7B55L,5L,0x5121F997L,(-1L),(-1L)},{(-1L),0x5121F997L,5L,0x702D7B55L,0x5121F997L,0x702D7B55L,5L,0x5121F997L,(-1L),(-1L)},{(-1L),0x5121F997L,5L,0x702D7B55L,0x5121F997L,0x702D7B55L,5L,0x5121F997L,(-1L),(-1L)},{(-1L),0x5121F997L,5L,0x702D7B55L,0x5121F997L,0x702D7B55L,5L,0x5121F997L,(-1L),(-1L)},{(-1L),0x5121F997L,5L,0x702D7B55L,0x5121F997L,0x702D7B55L,5L,0x5121F997L,(-1L),(-1L)}};
                    int8_t **l_515 = &p_1058->g_514[4][2][0];
                    int64_t ****l_535 = &l_534;
                    int16_t *l_536 = &l_438;
                    uint16_t l_543 = 0xE10EL;
                    int i, j;
                    (1 + 1);
                }
            }
            (*l_563) = ((*l_562) = l_560);
            l_566++;
        }
        l_570--;
    }
    p_1058->g_58 ^= ((((l_573 != &l_574) > ((*p_1058->g_283) = (((***p_1058->g_286) == ((**l_573) = (0UL > (0x2BA3C979L >= (safe_mul_func_int16_t_s_s(p_1058->g_561.f5.f0, (safe_lshift_func_uint16_t_u_s(((+(safe_rshift_func_int16_t_s_u(0x7C58L, p_46))) | p_46), 0)))))))) >= p_1058->g_382.f4))) != p_46) <= l_583[0]);
    l_221[0] = func_80((((*l_573) == (*l_573)) , 0x0AF09BB625E72027L), ((*p_1058->g_283) &= (-1L)), l_221[2], ((((*l_600) |= ((safe_add_func_uint32_t_u_u(((((((safe_add_func_int32_t_s_s(p_45, (((safe_div_func_uint16_t_u_u(((((((*l_598) ^= ((**l_573) = ((p_45 > ((((*l_596) = ((safe_unary_minus_func_int8_t_s(((safe_mul_func_uint16_t_u_u((((*l_595) = (p_45 && (((*l_594) &= (p_1058->g_593 , p_46)) < p_45))) | 0xA0L), p_46)) > 0xB6616DDB9F021196L))) >= p_1058->g_191.f0.f0)) > l_597) != p_1058->g_382.f2)) , 7L))) != p_1058->g_191.f0.f5) || p_46) & p_1058->g_382.f4) == 0x492197F00A038B8AL), p_45)) || l_599[0][1][3]) >= p_45))) , (void*)0) != l_595) , p_45) & p_46) && p_46), p_46)) || 4L)) < 65535UL) , p_1058->g_561.f4.f0), p_45, p_1058);
    return p_1058->g_381.f0.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1058->g_105 p_1058->g_58 p_1058->g_191.f0.f7 p_1058->g_191.f2 p_1058->g_191.f4 p_1058->g_136 p_1058->g_74.f2 p_1058->g_62 p_1058->g_253 p_1058->g_258 p_1058->g_5 p_1058->g_200 p_1058->g_269 p_1058->g_276 p_1058->g_281 p_1058->g_176 p_1058->g_74.f5 p_1058->g_199 p_1058->g_282 p_1058->g_284 p_1058->g_286 p_1058->g_151 p_1058->g_283 p_1058->g_285 p_1058->g_324 p_1058->g_337 p_1058->g_191.f0.f6 p_1058->g_60 p_1058->g_137 p_1058->g_360 p_1058->g_190 p_1058->g_191
 * writes: p_1058->g_105 p_1058->g_58 p_1058->g_191.f4 p_1058->g_136 p_1058->g_222 p_1058->g_191.f2 p_1058->g_258 p_1058->g_261 p_1058->g_200 p_1058->g_283 p_1058->g_284 p_1058->g_191.f0.f7 p_1058->g_151 p_1058->g_176 p_1058->g_191.f0.f0 p_1058->g_382 p_1058->g_199
 */
int64_t  func_75(int32_t * p_76, int32_t * p_77, uint32_t  p_78, struct S4 * p_1058)
{ /* block id: 110 */
    uint32_t l_228 = 0x9841E669L;
    int32_t l_233 = 0x0EA937B6L;
    int64_t *l_252 = &p_1058->g_199[2];
    int64_t **l_251 = &l_252;
    uint16_t *l_254 = (void*)0;
    uint16_t *l_255 = &p_1058->g_191.f2;
    int32_t l_256 = 0x3CF49A6DL;
    int64_t *l_257 = &p_1058->g_258;
    int32_t l_259[4] = {4L,4L,4L,4L};
    int16_t *l_260 = &p_1058->g_261;
    uint8_t *l_262 = (void*)0;
    uint64_t l_263 = 0xC5E4DCB4F3F161F6L;
    int64_t *l_299 = &p_1058->g_258;
    uint16_t l_352 = 65529UL;
    uint32_t l_379 = 0xDA94D545L;
    int i;
    for (p_1058->g_105 = 0; (p_1058->g_105 >= 49); p_1058->g_105 = safe_add_func_uint64_t_u_u(p_1058->g_105, 6))
    { /* block id: 113 */
        int8_t *l_227 = &p_1058->g_151;
        int8_t **l_226 = &l_227;
        int32_t l_234 = 0x24FC960DL;
        if ((((safe_unary_minus_func_uint8_t_u(1UL)) == ((((*l_226) = (void*)0) == (l_228 , &p_1058->g_151)) | (safe_mul_func_int8_t_s_s((((*p_76) = (*p_76)) || (((p_78 , ((+0UL) , l_228)) | p_78) > p_1058->g_191.f0.f7)), 0x2EL)))) || p_1058->g_191.f2))
        { /* block id: 116 */
            for (p_1058->g_191.f4 = 0; (p_1058->g_191.f4 <= 6); p_1058->g_191.f4 += 1)
            { /* block id: 119 */
                for (p_1058->g_136 = 0; (p_1058->g_136 <= 5); p_1058->g_136 += 1)
                { /* block id: 122 */
                    int i;
                    l_233 = (p_1058->g_222[(p_1058->g_136 + 1)] = 0L);
                }
                return p_78;
            }
        }
        else
        { /* block id: 128 */
            return l_234;
        }
    }
    (*p_76) = ((safe_rshift_func_int16_t_s_s(((((p_1058->g_74[0].f2 ^ ((safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s((p_78 && (p_1058->g_62 & (safe_div_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((l_233 = (safe_mod_func_int16_t_s_s(((*l_260) = (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((((*l_257) &= (((!((*l_255) &= (l_251 != ((l_228 | ((l_233 , (void*)0) != p_1058->g_253)) , &l_252)))) == l_228) || l_256)) , l_259[3]) > 1L), p_1058->g_136)) >= l_228), l_259[3]))), p_1058->g_62))), (-7L))), 1L)))), p_78)), p_1058->g_5[4])) , 0x675EL)) , l_256) & l_228) || p_1058->g_200), l_263)) || 0UL);
    if ((0xF4L ^ 0UL))
    { /* block id: 137 */
        int32_t l_268 = 0x01E83345L;
        uint64_t *l_287 = &l_263;
        int8_t *l_302 = &p_1058->g_151;
        int64_t **l_303 = &l_257;
        uint64_t **l_312 = (void*)0;
        uint64_t **l_313 = &l_287;
        int32_t l_314 = 0x0419782BL;
        (*p_1058->g_282) = func_80(((((safe_mul_func_uint8_t_u_u(p_78, (safe_rshift_func_uint8_t_u_s(l_268, 1)))) || (!(p_1058->g_269 , (safe_lshift_func_int8_t_s_u((((*l_255) = (safe_mul_func_int16_t_s_s(0L, (((p_78 > ((safe_add_func_int8_t_s_s((p_1058->g_276 , ((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((p_1058->g_281[0] , (p_1058->g_200 = p_1058->g_281[0].f3.f0.f7)), p_1058->g_191.f2)), p_78)) < p_1058->g_176)), 0x1FL)) || 1UL)) <= 0xE6BECDB6F072E333L) , p_1058->g_74[0].f5)))) != 0x6F8DL), 2))))) >= (-8L)) , p_1058->g_74[0].f2), p_1058->g_199[1], p_76, p_78, l_268, p_1058);
        (*p_1058->g_286) = p_1058->g_284;
        l_314 &= ((++(*l_287)) && ((((safe_unary_minus_func_int8_t_s((safe_div_func_uint32_t_u_u(((p_1058->g_191.f0.f7++) , (safe_add_func_int8_t_s_s((-1L), (((+((l_299 != ((safe_lshift_func_uint8_t_u_s(l_233, ((*l_302) |= 1L))) , ((*l_303) = &p_1058->g_258))) > (safe_mod_func_uint32_t_u_u((((*l_313) = (((((((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(0x0707L, ((((void*)0 == (*p_1058->g_286)) >= l_259[1]) , p_78))), l_259[1])) == l_233), l_268)) <= 8UL) , (**p_1058->g_282)) ^ 9UL) , l_268) && p_78) , l_287)) != (void*)0), 1UL)))) >= p_78) , p_78)))), (*p_76))))) && 253UL) || p_78) , l_259[3]));
        for (p_1058->g_191.f4 = 27; (p_1058->g_191.f4 < 37); ++p_1058->g_191.f4)
        { /* block id: 150 */
            int32_t *l_319 = (void*)0;
            int32_t *l_320[5][2][10] = {{{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233},{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233}},{{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233},{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233}},{{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233},{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233}},{{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233},{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233}},{{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233},{&l_314,&l_233,(void*)0,(void*)0,&l_233,&p_1058->g_222[0],&l_233,&p_1058->g_222[0],&p_1058->g_222[0],&l_233}}};
            int i, j, k;
            (*p_1058->g_324) = func_80(l_268, (*p_77), p_77, ((**p_1058->g_284) <= ((safe_mod_func_int8_t_s_s(0x64L, 0x75L)) || (((((l_233 = 0x4F93BFC3L) == p_1058->g_258) >= ((p_78 || 255UL) && p_78)) > p_1058->g_5[8]) || 5L))), p_78, p_1058);
        }
    }
    else
    { /* block id: 154 */
        int32_t l_353 = 0x7CC72E72L;
        int64_t ***l_389 = (void*)0;
        int64_t **l_391 = &l_257;
        int64_t ***l_390 = &l_391;
        int32_t l_414 = 0x6538EF27L;
        for (p_1058->g_105 = 15; (p_1058->g_105 < 8); p_1058->g_105--)
        { /* block id: 157 */
            int16_t l_350 = 0L;
            int8_t *l_351 = &p_1058->g_151;
            (*p_76) &= (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(((p_78 < ((~((p_1058->g_337[1] , ((!((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((&p_1058->g_284 != &p_1058->g_284), ((*l_351) = (safe_div_func_uint16_t_u_u((0L >= (((safe_sub_func_uint16_t_u_u(p_1058->g_269.f0.f1, (safe_lshift_func_int16_t_s_s((-1L), 0)))) <= ((*l_260) = (safe_lshift_func_int8_t_s_s((((void*)0 != &p_76) , p_78), 2)))) , l_350)), 0x227BL))))), p_1058->g_191.f0.f6)) & (*p_1058->g_283))) , l_350)) , p_78)) >= p_78)) , l_352), p_1058->g_137)) >= l_350), l_353)), p_78)) , p_1058->g_281[0].f4.f3), 251UL)), 1L));
            for (p_1058->g_200 = (-6); (p_1058->g_200 != 32); ++p_1058->g_200)
            { /* block id: 163 */
                uint64_t l_363 = 0x03E5DB0A236A0E87L;
                int32_t l_364 = (-9L);
                int32_t *l_378 = &p_1058->g_191.f0.f0;
                struct S2 *l_380[10][3] = {{&p_1058->g_381,(void*)0,&p_1058->g_381},{&p_1058->g_381,(void*)0,&p_1058->g_381},{&p_1058->g_381,(void*)0,&p_1058->g_381},{&p_1058->g_381,(void*)0,&p_1058->g_381},{&p_1058->g_381,(void*)0,&p_1058->g_381},{&p_1058->g_381,(void*)0,&p_1058->g_381},{&p_1058->g_381,(void*)0,&p_1058->g_381},{&p_1058->g_381,(void*)0,&p_1058->g_381},{&p_1058->g_381,(void*)0,&p_1058->g_381},{&p_1058->g_381,(void*)0,&p_1058->g_381}};
                int i, j;
                p_1058->g_382 = ((((0xB074A68DL & (safe_mod_func_int8_t_s_s(0L, p_1058->g_281[0].f4.f5))) && ((safe_sub_func_int64_t_s_s((p_1058->g_360[2][2][4] == &p_1058->g_361), ((((safe_unary_minus_func_int32_t_s(((l_364 ^= l_363) < ((((*l_378) = (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s(((*p_77) &= (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_1058->g_337[1].f6.f6, 6)), p_78)), 6))))) ^ (safe_mod_func_int8_t_s_s(((p_1058->g_176 = (((((((void*)0 == &p_1058->g_60) , p_1058->g_62) == 0x0FL) == l_353) <= (*p_1058->g_283)) <= l_350)) || p_78), p_1058->g_136))), 0x72A42C80L)), 6))) , 8UL) != p_78)))) , 18446744073709551606UL) | l_379) || l_350))) , (*p_76))) & 0x529E886CL) , (*p_1058->g_190));
            }
        }
        if ((safe_div_func_int16_t_s_s(l_353, (safe_mul_func_uint16_t_u_u(((0xEC872CF7CFBFDBF6L ^ 0x7FAE190E8EC2CF7AL) <= ((((*p_77) & p_1058->g_337[1].f3.f0.f3) != (safe_rshift_func_int16_t_s_s((!(l_353 <= ((*l_252) &= l_233))), (((*l_390) = &l_299) == &l_257)))) || 0xC47D8770L)), p_78)))))
        { /* block id: 173 */
            return p_78;
        }
        else
        { /* block id: 175 */
            uint8_t *l_398[1];
            uint8_t **l_401 = &l_262;
            uint8_t **l_402 = &l_398[0];
            int32_t l_413[8] = {0x3F2785ECL,5L,0x3F2785ECL,0x3F2785ECL,5L,0x3F2785ECL,0x3F2785ECL,5L};
            int i;
            for (i = 0; i < 1; i++)
                l_398[i] = (void*)0;
            l_413[5] = (+(((-1L) && ((p_78 | ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((l_353 = 0UL), (safe_sub_func_uint32_t_u_u((p_1058->g_176 , (&p_1058->g_200 != ((*l_402) = ((*l_401) = l_262)))), (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(255UL, ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((--(*l_255)), (l_233 = p_1058->g_276.f1))), (6L > l_379))) == p_78))), l_259[3])))))) | 0x1EF8L), 5)) < l_413[4])) & l_414)) == l_414));
        }
    }
    return p_78;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_80(int64_t  p_81, int32_t  p_82, int32_t * p_83, int32_t  p_84, uint8_t  p_85, struct S4 * p_1058)
{ /* block id: 108 */
    return &p_1058->g_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_1058->g_60 p_1058->g_26 p_1058->g_5 p_1058->g_58 p_1058->g_105 p_1058->g_62 p_1058->g_137 p_1058->g_151 p_1058->g_190 p_1058->g_200 p_1058->g_136 p_1058->g_191.f3 p_1058->g_191.f0.f0
 * writes: p_1058->g_62 p_1058->g_60 p_1058->g_58 p_1058->g_136 p_1058->g_137 p_1058->g_176 p_1058->g_178 p_1058->g_190 p_1058->g_200 p_1058->g_151
 */
int64_t  func_89(int32_t * p_90, uint8_t  p_91, int32_t  p_92, int32_t * p_93, int32_t  p_94, struct S4 * p_1058)
{ /* block id: 33 */
    int32_t *l_99 = &p_1058->g_60;
    uint8_t *l_104 = &p_1058->g_105;
    int16_t l_129[3][3][1];
    int32_t l_152 = (-2L);
    int32_t l_154 = 0x47E69135L;
    uint16_t l_168 = 0x5E60L;
    uint16_t l_185 = 0x927CL;
    int64_t *l_208[2];
    struct S2 **l_217[10][7] = {{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190},{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190},{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190},{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190},{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190},{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190},{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190},{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190},{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190},{&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190,&p_1058->g_190}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_129[i][j][k] = 0x3F17L;
        }
    }
    for (i = 0; i < 2; i++)
        l_208[i] = &p_1058->g_199[2];
    p_1058->g_62 = (l_99 == (void*)0);
lbl_220:
    for (p_1058->g_60 = 0; (p_1058->g_60 < (-3)); p_1058->g_60 = safe_sub_func_uint32_t_u_u(p_1058->g_60, 8))
    { /* block id: 37 */
        uint32_t l_116 = 0x948D72D2L;
        for (p_94 = 0; (p_94 == (-25)); p_94 = safe_sub_func_int64_t_s_s(p_94, 9))
        { /* block id: 40 */
            uint32_t l_110 = 0x2FD71B99L;
            int32_t *l_111[9][4][6] = {{{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60}},{{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60}},{{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60}},{{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60}},{{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60}},{{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60}},{{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60}},{{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60}},{{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60},{&p_1058->g_60,(void*)0,(void*)0,&p_1058->g_60,&p_1058->g_60,&p_1058->g_60}}};
            int i, j, k;
            p_1058->g_58 &= ((((l_104 == (void*)0) > 9UL) & p_1058->g_26[4]) , (!(((((safe_add_func_uint16_t_u_u(((((((safe_rshift_func_uint8_t_u_s(l_110, (((!(!(*l_99))) , &p_91) == (((&p_94 == &p_1058->g_62) > p_92) , l_104)))) , p_1058->g_5[4]) , p_92) <= p_91) , &p_1058->g_60) != l_111[6][2][5]), p_92)) || p_1058->g_26[3]) , 0xCC2217A8L) <= 5L) && p_94)));
            for (l_110 = (-3); (l_110 <= 57); ++l_110)
            { /* block id: 44 */
                if (p_1058->g_105)
                    break;
                (*p_93) = (safe_lshift_func_uint16_t_u_s(9UL, p_1058->g_62));
                l_116--;
            }
        }
    }
    for (p_92 = (-28); (p_92 >= (-2)); p_92++)
    { /* block id: 53 */
        uint64_t l_128[9][2] = {{0x1B125E79E523DBDAL,0x1B125E79E523DBDAL},{0x1B125E79E523DBDAL,0x1B125E79E523DBDAL},{0x1B125E79E523DBDAL,0x1B125E79E523DBDAL},{0x1B125E79E523DBDAL,0x1B125E79E523DBDAL},{0x1B125E79E523DBDAL,0x1B125E79E523DBDAL},{0x1B125E79E523DBDAL,0x1B125E79E523DBDAL},{0x1B125E79E523DBDAL,0x1B125E79E523DBDAL},{0x1B125E79E523DBDAL,0x1B125E79E523DBDAL},{0x1B125E79E523DBDAL,0x1B125E79E523DBDAL}};
        int32_t l_144 = 0x4B70C1D3L;
        int32_t l_153 = 2L;
        int32_t l_155 = 0x7E74D0DCL;
        int64_t *l_207[7][4] = {{&p_1058->g_199[4],&p_1058->g_5[6],&p_1058->g_5[6],&p_1058->g_5[6]},{&p_1058->g_199[4],&p_1058->g_5[6],&p_1058->g_5[6],&p_1058->g_5[6]},{&p_1058->g_199[4],&p_1058->g_5[6],&p_1058->g_5[6],&p_1058->g_5[6]},{&p_1058->g_199[4],&p_1058->g_5[6],&p_1058->g_5[6],&p_1058->g_5[6]},{&p_1058->g_199[4],&p_1058->g_5[6],&p_1058->g_5[6],&p_1058->g_5[6]},{&p_1058->g_199[4],&p_1058->g_5[6],&p_1058->g_5[6],&p_1058->g_5[6]},{&p_1058->g_199[4],&p_1058->g_5[6],&p_1058->g_5[6],&p_1058->g_5[6]}};
        int64_t **l_209 = &l_208[1];
        uint32_t *l_211 = &p_1058->g_136;
        uint32_t **l_210 = &l_211;
        int16_t *l_212 = &l_129[0][2][0];
        int8_t *l_218 = &p_1058->g_151;
        int8_t l_219 = 1L;
        int i, j;
        for (p_94 = 0; (p_94 >= (-9)); p_94 = safe_sub_func_uint32_t_u_u(p_94, 1))
        { /* block id: 56 */
            uint32_t l_138[1];
            uint8_t l_157 = 1UL;
            int32_t l_193 = 0x3C712B6BL;
            int32_t l_195[7][10][3] = {{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}},{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}},{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}},{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}},{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}},{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}},{{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L},{0L,1L,1L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_138[i] = 0xCF041155L;
            if ((safe_mul_func_int16_t_s_s(8L, (p_1058->g_26[4] < ((&p_1058->g_105 != (void*)0) < p_1058->g_5[8])))))
            { /* block id: 57 */
                return p_1058->g_62;
            }
            else
            { /* block id: 59 */
                int16_t l_125 = 0x20D7L;
                int32_t l_156 = 0x5331A3B0L;
                uint32_t *l_189 = &p_1058->g_26[1];
                uint32_t **l_188[7][2] = {{&l_189,&l_189},{&l_189,&l_189},{&l_189,&l_189},{&l_189,&l_189},{&l_189,&l_189},{&l_189,&l_189},{&l_189,&l_189}};
                struct S2 **l_192 = &p_1058->g_190;
                int32_t *l_194 = &p_1058->g_60;
                int32_t *l_196 = &l_154;
                int32_t *l_197 = (void*)0;
                int32_t *l_198[5] = {&l_154,&l_154,&l_154,&l_154,&l_154};
                int i, j;
                if (l_125)
                { /* block id: 60 */
                    uint32_t *l_134 = (void*)0;
                    uint32_t *l_135 = &p_1058->g_136;
                    p_1058->g_137 &= (safe_mod_func_int16_t_s_s(((((*l_135) = (p_92 == (((p_92 | l_128[4][0]) , (((p_1058->g_62 <= p_1058->g_105) , ((p_1058->g_60 && (p_1058->g_58 >= (l_129[2][1][0] , (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_99) = p_94), 6)), p_94))))) || 0UL)) >= p_1058->g_5[6])) >= l_128[0][1]))) && p_1058->g_105) < p_1058->g_58), p_92));
                    return l_138[0];
                }
                else
                { /* block id: 65 */
                    int64_t l_139 = 0x148F47512D4483B5L;
                    int32_t *l_140 = (void*)0;
                    int32_t *l_141 = (void*)0;
                    int32_t *l_142 = &p_1058->g_60;
                    int32_t *l_143 = &p_1058->g_58;
                    int32_t *l_145 = &p_1058->g_58;
                    int32_t *l_146 = (void*)0;
                    int32_t *l_147 = &p_1058->g_58;
                    int32_t *l_148 = (void*)0;
                    int32_t *l_149 = &p_1058->g_62;
                    int32_t *l_150[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    ++l_157;
                }
                for (l_155 = (-21); (l_155 <= (-19)); ++l_155)
                { /* block id: 70 */
                    for (l_156 = 0; (l_156 >= (-11)); l_156--)
                    { /* block id: 73 */
                        int64_t *l_175 = &p_1058->g_176;
                        int64_t *l_177 = &p_1058->g_178;
                        (*l_99) = (((*l_177) = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((*l_175) = (l_168 < (((p_91 , ((safe_mul_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_u(p_94, 14)) > (p_1058->g_5[4] >= 1UL)) , &p_94) != (void*)0), (*p_93))) ^ ((p_92 & (-5L)) ^ 0x58L)), p_1058->g_5[4])) == l_125)) , p_93) == (void*)0))) , p_1058->g_62), p_91)), p_1058->g_105)) < 0xA8AFL)) & p_92);
                        if (p_1058->g_151)
                            continue;
                    }
                    if ((*p_90))
                        continue;
                    for (l_168 = 26; (l_168 <= 8); l_168--)
                    { /* block id: 82 */
                        int32_t *l_181 = &l_154;
                        int32_t *l_182 = &l_152;
                        int32_t *l_183 = &l_152;
                        int32_t *l_184[4] = {&l_144,&l_144,&l_144,&l_144};
                        int i;
                        l_185++;
                        l_188[5][1] = (void*)0;
                        if ((*p_93))
                            break;
                    }
                }
                (*l_192) = p_1058->g_190;
                ++p_1058->g_200;
            }
        }
        if ((+((safe_sub_func_int64_t_s_s((p_94 & ((*l_212) = ((l_207[3][0] == ((*l_209) = l_208[0])) < (((*l_210) = &p_1058->g_26[1]) != (void*)0)))), ((((safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((&p_1058->g_190 == l_217[9][5]) > (((*l_218) = (1UL != p_94)) | p_1058->g_136)), p_1058->g_136)) ^ p_91) ^ 65534UL), (*l_99))) > p_1058->g_191.f3) && p_91) , p_1058->g_191.f0.f0))) >= l_153)))
        { /* block id: 96 */
            for (p_94 = 0; (p_94 <= 1); p_94 += 1)
            { /* block id: 99 */
                return l_219;
            }
        }
        else
        { /* block id: 102 */
            if (l_168)
                goto lbl_220;
        }
    }
    return (*l_99);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S4 c_1059;
    struct S4* p_1058 = &c_1059;
    struct S4 c_1060 = {
        {0x218E9934B0B4EF66L,0x218E9934B0B4EF66L,0x218E9934B0B4EF66L,0x218E9934B0B4EF66L,0x218E9934B0B4EF66L,0x218E9934B0B4EF66L,0x218E9934B0B4EF66L,0x218E9934B0B4EF66L,0x218E9934B0B4EF66L,0x218E9934B0B4EF66L}, // p_1058->g_5
        {0x8E01AFECL,0x8E01AFECL,0x8E01AFECL,0x8E01AFECL,0x8E01AFECL}, // p_1058->g_26
        5L, // p_1058->g_57
        1L, // p_1058->g_58
        0x0915D489L, // p_1058->g_59
        4L, // p_1058->g_60
        (-1L), // p_1058->g_62
        {0x37607968679DD5AEL,0UL,0x01L,0x16B3L,0x379E2962L,0x61L,0x453FL,0x77944D42BE3C69BBL}, // p_1058->g_73
        {{3L,0UL,-1L,0xFAA9L,0x538B87B6L,0x75L,-1L,0L}}, // p_1058->g_74
        0xDAL, // p_1058->g_105
        0x94A997FCL, // p_1058->g_136
        1UL, // p_1058->g_137
        2L, // p_1058->g_151
        (-8L), // p_1058->g_176
        0x59258287A3C92833L, // p_1058->g_178
        {{0x3C386943L,-4L,0x625639F120E9FE6BL,0x0AL,65533UL,0x7779B4FEF38AB0B1L,0xFC1BAD84L,4UL},0x7DF31C3D107391EFL,0x32E6L,1L,0xF28D7A2F4DF6C7F8L}, // p_1058->g_191
        &p_1058->g_191, // p_1058->g_190
        {0x7EAD5EC58B0227ADL,0x7EAD5EC58B0227ADL,0x7EAD5EC58B0227ADL,0x7EAD5EC58B0227ADL,0x7EAD5EC58B0227ADL,0x7EAD5EC58B0227ADL}, // p_1058->g_199
        0x3BL, // p_1058->g_200
        {(-7L),(-1L),(-7L),(-7L),(-1L),(-7L),(-7L)}, // p_1058->g_222
        (void*)0, // p_1058->g_253
        (-7L), // p_1058->g_258
        0x35F4L, // p_1058->g_261
        {{-1L,0x79984349FD6D78E6L,-1L,0x3AL,0x21ACL,18446744073709551609UL,3UL,0x4CD03F4EF0FF0162L},-8L,0x72DEL,0x098E09D7L,0x09794D5BFBD02E40L}, // p_1058->g_269
        {0x16EABE1CL,0x1C1923D8348DC139L,0x2897B0590F9319D2L,0L,0x85C9L,0x47E1C72E30379E35L,4294967295UL,0x8A200C977F8B95D9L}, // p_1058->g_276
        {{4UL,0x67737C8AL,0x64E92A9DL,{{0x7A7B511BL,-1L,-1L,0L,65533UL,1UL,4294967286UL,0x94BD40102855B816L},0x2061BE2EFF3B490FL,0x01C5L,-1L,0UL},{0x49B8C997FF8A4D87L,0x6988AD69F502D782L,4L,0x18A5L,0L,-10L,1L,0x1BD662E9029FDCDEL},{1L,0L,0x1F420560C5AEF02EL,-1L,0x00E1L,18446744073709551611UL,1UL,0xECE72C066E181E8EL},{0x04A5F7E6AA0FA19FL,0xDDA7767F09A42ADBL,-1L,0x4E01L,0x4EACF3CDL,0x76L,1L,7L}},{0x7195CB3C5C33FC11L,-1L,0x0404CD1AL,{{-1L,1L,-5L,1L,3UL,1UL,0xBA4E0764L,0xD354C98D323A33DEL},0x6C5B3812A1256B1FL,1UL,0x5E44C6F2L,0x780F7B21165C56F8L},{0x13ACF49B51BDFFC9L,1UL,0x3FL,65529UL,-7L,-5L,0x1F39L,0x1143F4B0CF762508L},{0x54093352L,0x6675F6B8C41C65E7L,0x0D366C35C314755EL,0L,0UL,0x79C502A78D98D93EL,6UL,18446744073709551610UL},{0x1DD93E933A933DB2L,0x31B7860BB8B317F3L,-2L,0UL,-2L,0x3CL,0x5C1BL,0x76C08D80014CE8C8L}},{4UL,0x67737C8AL,0x64E92A9DL,{{0x7A7B511BL,-1L,-1L,0L,65533UL,1UL,4294967286UL,0x94BD40102855B816L},0x2061BE2EFF3B490FL,0x01C5L,-1L,0UL},{0x49B8C997FF8A4D87L,0x6988AD69F502D782L,4L,0x18A5L,0L,-10L,1L,0x1BD662E9029FDCDEL},{1L,0L,0x1F420560C5AEF02EL,-1L,0x00E1L,18446744073709551611UL,1UL,0xECE72C066E181E8EL},{0x04A5F7E6AA0FA19FL,0xDDA7767F09A42ADBL,-1L,0x4E01L,0x4EACF3CDL,0x76L,1L,7L}},{4UL,0x67737C8AL,0x64E92A9DL,{{0x7A7B511BL,-1L,-1L,0L,65533UL,1UL,4294967286UL,0x94BD40102855B816L},0x2061BE2EFF3B490FL,0x01C5L,-1L,0UL},{0x49B8C997FF8A4D87L,0x6988AD69F502D782L,4L,0x18A5L,0L,-10L,1L,0x1BD662E9029FDCDEL},{1L,0L,0x1F420560C5AEF02EL,-1L,0x00E1L,18446744073709551611UL,1UL,0xECE72C066E181E8EL},{0x04A5F7E6AA0FA19FL,0xDDA7767F09A42ADBL,-1L,0x4E01L,0x4EACF3CDL,0x76L,1L,7L}},{0x7195CB3C5C33FC11L,-1L,0x0404CD1AL,{{-1L,1L,-5L,1L,3UL,1UL,0xBA4E0764L,0xD354C98D323A33DEL},0x6C5B3812A1256B1FL,1UL,0x5E44C6F2L,0x780F7B21165C56F8L},{0x13ACF49B51BDFFC9L,1UL,0x3FL,65529UL,-7L,-5L,0x1F39L,0x1143F4B0CF762508L},{0x54093352L,0x6675F6B8C41C65E7L,0x0D366C35C314755EL,0L,0UL,0x79C502A78D98D93EL,6UL,18446744073709551610UL},{0x1DD93E933A933DB2L,0x31B7860BB8B317F3L,-2L,0UL,-2L,0x3CL,0x5C1BL,0x76C08D80014CE8C8L}},{4UL,0x67737C8AL,0x64E92A9DL,{{0x7A7B511BL,-1L,-1L,0L,65533UL,1UL,4294967286UL,0x94BD40102855B816L},0x2061BE2EFF3B490FL,0x01C5L,-1L,0UL},{0x49B8C997FF8A4D87L,0x6988AD69F502D782L,4L,0x18A5L,0L,-10L,1L,0x1BD662E9029FDCDEL},{1L,0L,0x1F420560C5AEF02EL,-1L,0x00E1L,18446744073709551611UL,1UL,0xECE72C066E181E8EL},{0x04A5F7E6AA0FA19FL,0xDDA7767F09A42ADBL,-1L,0x4E01L,0x4EACF3CDL,0x76L,1L,7L}}}, // p_1058->g_281
        &p_1058->g_60, // p_1058->g_283
        &p_1058->g_283, // p_1058->g_282
        {{{&p_1058->g_281[0].f5.f1,&p_1058->g_281[0].f5.f1,&p_1058->g_281[0].f5.f1,&p_1058->g_281[0].f5.f1},{&p_1058->g_281[0].f5.f1,&p_1058->g_281[0].f5.f1,&p_1058->g_281[0].f5.f1,&p_1058->g_281[0].f5.f1}}}, // p_1058->g_285
        &p_1058->g_285[0][1][1], // p_1058->g_284
        &p_1058->g_284, // p_1058->g_286
        (void*)0, // p_1058->g_321
        (void*)0, // p_1058->g_322
        (void*)0, // p_1058->g_323
        &p_1058->g_283, // p_1058->g_324
        {{0x4523043293D730E3L,3L,0x5DC09939L,{{0x7A12A793L,0x69B76119070582BCL,-4L,0x29L,0xBFA3L,0x9DEEEC245D851CD8L,5UL,0x5990A5554EDFD152L},-8L,0xEEDAL,0x4368FA08L,0xE560A1FF2559C4E1L},{0x25839F482893DC63L,0x1F2213736988ECCBL,0x0EL,0x3FE0L,0x52624A31L,0x1DL,0x4FE5L,0x3442E5E93C6BA4E8L},{0L,0x0596C50F0944CA47L,1L,1L,0xB03BL,0UL,4294967287UL,18446744073709551615UL},{0L,0UL,0x5CL,0x1E14L,0x08D824F0L,0x66L,-9L,0x0B3F138F6F16FDA1L}},{0x4523043293D730E3L,3L,0x5DC09939L,{{0x7A12A793L,0x69B76119070582BCL,-4L,0x29L,0xBFA3L,0x9DEEEC245D851CD8L,5UL,0x5990A5554EDFD152L},-8L,0xEEDAL,0x4368FA08L,0xE560A1FF2559C4E1L},{0x25839F482893DC63L,0x1F2213736988ECCBL,0x0EL,0x3FE0L,0x52624A31L,0x1DL,0x4FE5L,0x3442E5E93C6BA4E8L},{0L,0x0596C50F0944CA47L,1L,1L,0xB03BL,0UL,4294967287UL,18446744073709551615UL},{0L,0UL,0x5CL,0x1E14L,0x08D824F0L,0x66L,-9L,0x0B3F138F6F16FDA1L}}}, // p_1058->g_337
        &p_1058->g_337[1].f3.f0.f2, // p_1058->g_361
        {{{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361}},{{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361}},{{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361}},{{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361}},{{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361}},{{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361},{&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361,&p_1058->g_361}}}, // p_1058->g_360
        {{0x09E2B7C9L,0x0B8E693AD60E80A7L,1L,0L,65530UL,3UL,0xEFFA9E35L,2UL},0L,65528UL,0x46107DB0L,0x48962ACFE7A89DF4L}, // p_1058->g_381
        {{7L,-7L,1L,-1L,0xC08DL,18446744073709551615UL,4294967295UL,0xCE76D961DEDF9DA8L},1L,1UL,0x64916562L,0x02096C10FC326C97L}, // p_1058->g_382
        0x661B9C6BL, // p_1058->g_415
        {{-6L,0x4DD0DE0247B080BAL,4L,0x69L,0xFD9AL,0xFE0EFC14EF2F9845L,4294967289UL,0xFCB804B9B0143853L},0x52CA9F399BD99724L,65535UL,0x2E470AFEL,0x872D6C60A29E69DEL}, // p_1058->g_428
        {0L,0x0F5FD911D911948AL,0x72CF99CCC1CF216EL,0x61L,0xD66CL,0x6DF99078D1F937A8L,0x4DFA2A91L,0UL}, // p_1058->g_456
        {{{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151}},{{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151}},{{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151}},{{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151}},{{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151}},{{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151}},{{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151}},{{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151}},{{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151},{&p_1058->g_151,&p_1058->g_151,&p_1058->g_151,&p_1058->g_151}}}, // p_1058->g_514
        &p_1058->g_514[4][2][0], // p_1058->g_513
        {{{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,(void*)0,(void*)0,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}}}, // p_1058->g_517
        {{0xC773A72BL,0UL,0xC773A72BL,0xC773A72BL,0UL,0xC773A72BL},{0xC773A72BL,0UL,0xC773A72BL,0xC773A72BL,0UL,0xC773A72BL},{0xC773A72BL,0UL,0xC773A72BL,0xC773A72BL,0UL,0xC773A72BL}}, // p_1058->g_521
        {0x410439E718B5602FL,0x31F7F55FL,0x5F8EA331L,{{3L,0x005DDBB9694E14ADL,0x000303EDFDB1C3A1L,0x50L,0x4679L,9UL,0xBB497810L,1UL},1L,0x6796L,0x3E5769D1L,18446744073709551615UL},{5L,8UL,0x6FL,0x4FE4L,0x0E13915CL,-2L,0x711CL,0L},{-1L,0x4B38074574CE580DL,0x412B1EE2C9ECC720L,-1L,0UL,18446744073709551607UL,4294967289UL,18446744073709551612UL},{-1L,0x28AA5D12D1E8B5D9L,0x2EL,0x7BD2L,2L,8L,-1L,0L}}, // p_1058->g_561
        {0x302B7C22F679DC71L,18446744073709551611UL,-9L,0x99F0L,0x058CF5B2L,-1L,0x407CL,0x375D68F721590C97L}, // p_1058->g_593
        &p_1058->g_283, // p_1058->g_634
        {0x5BB7E779L,-1L,8L,0x4CL,0xDCE5L,8UL,0x4598235CL,0xC76E7F98C1F280EEL}, // p_1058->g_652
        {&p_1058->g_337[0],&p_1058->g_337[0],&p_1058->g_337[0],&p_1058->g_337[0],&p_1058->g_337[0],&p_1058->g_337[0],&p_1058->g_337[0]}, // p_1058->g_665
        &p_1058->g_665[4], // p_1058->g_664
        0x64EA16B913DE539EL, // p_1058->g_675
        (void*)0, // p_1058->g_692
        &p_1058->g_692, // p_1058->g_691
        &p_1058->g_561, // p_1058->g_720
        &p_1058->g_720, // p_1058->g_719
        {0x7812346FA4AF0A74L,0xD53E19F5EF4D02C5L,0x01L,0x7B00L,0x2672EAB4L,0x6CL,-1L,0x3817F70D11E09BD8L}, // p_1058->g_723
        (-1L), // p_1058->g_739
        2UL, // p_1058->g_748
        &p_1058->g_748, // p_1058->g_747
        &p_1058->g_747, // p_1058->g_746
        {1L,0x86ACE723E90A78FFL,7L,1UL,0x00B078ABL,3L,0x4456L,-10L}, // p_1058->g_754
        &p_1058->g_191.f0.f6, // p_1058->g_821
        &p_1058->g_821, // p_1058->g_820
        &p_1058->g_105, // p_1058->g_832
        {{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}},{{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283},{&p_1058->g_283,&p_1058->g_283,&p_1058->g_283}}}, // p_1058->g_847
        &p_1058->g_283, // p_1058->g_848
        {0xEEB5190745A8BA98L,0x4E3EBDA0L,7L,{{0x092AF05BL,0x2C23B6DD2FE122CCL,1L,0x09L,65535UL,0UL,0x1518793BL,18446744073709551614UL},5L,65535UL,0x39D70275L,1UL},{0x4BB36DCDAFF204B5L,18446744073709551611UL,0x3BL,0x712BL,0x17DC0899L,0x5EL,0x2B1BL,0x57523F01AF86B921L},{0x1EC0EB6CL,0x2828A572222BE0B7L,0x2259FCFF67ED9FCBL,0x27L,0xADF1L,0x2DEC1F4AA4A05150L,0xD439F9D5L,0x7CC36C67390B5399L},{0x793102029E07D8EDL,0x614E4E3DCE9F18F9L,1L,65535UL,0x633AB6D8L,1L,-8L,0x19AD4375A90B2D7EL}}, // p_1058->g_931
        &p_1058->g_283, // p_1058->g_937
        {0x56399A3A8EAC6AEFL,0UL,0x2AL,0UL,0x4EFDF64BL,-5L,1L,-1L}, // p_1058->g_951
        &p_1058->g_561, // p_1058->g_1004
        &p_1058->g_1004, // p_1058->g_1003
        {0xD44D53F94A14EE7FL,0x0003FDF3L,-7L,{{-1L,1L,0x5EBF1808221BA614L,-10L,0xB321L,1UL,4294967295UL,18446744073709551615UL},0x68984A1A74E91187L,0xC997L,0x12D9A71FL,5UL},{0L,5UL,0x47L,0x16A5L,-6L,0x31L,0x3C7DL,0L},{0x0F358090L,0x5D8F4243CE68B41FL,1L,-1L,65527UL,9UL,0x2B4F5B44L,18446744073709551615UL},{0L,0xE44168F902172845L,0x22L,1UL,0L,0x63L,0x7BD8L,0x36D659BB6DDB4784L}}, // p_1058->g_1014
        {0x1895L,(-10L),0x03C4L,(-10L),0x1895L,0x1895L,(-10L),0x03C4L,(-10L),0x1895L}, // p_1058->g_1019
        &p_1058->g_283, // p_1058->g_1042
    };
    c_1059 = c_1060;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1058);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1058->g_5[i], "p_1058->g_5[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1058->g_26[i], "p_1058->g_26[i]", print_hash_value);

    }
    transparent_crc(p_1058->g_57, "p_1058->g_57", print_hash_value);
    transparent_crc(p_1058->g_58, "p_1058->g_58", print_hash_value);
    transparent_crc(p_1058->g_59, "p_1058->g_59", print_hash_value);
    transparent_crc(p_1058->g_60, "p_1058->g_60", print_hash_value);
    transparent_crc(p_1058->g_62, "p_1058->g_62", print_hash_value);
    transparent_crc(p_1058->g_73.f0, "p_1058->g_73.f0", print_hash_value);
    transparent_crc(p_1058->g_73.f1, "p_1058->g_73.f1", print_hash_value);
    transparent_crc(p_1058->g_73.f2, "p_1058->g_73.f2", print_hash_value);
    transparent_crc(p_1058->g_73.f3, "p_1058->g_73.f3", print_hash_value);
    transparent_crc(p_1058->g_73.f4, "p_1058->g_73.f4", print_hash_value);
    transparent_crc(p_1058->g_73.f5, "p_1058->g_73.f5", print_hash_value);
    transparent_crc(p_1058->g_73.f6, "p_1058->g_73.f6", print_hash_value);
    transparent_crc(p_1058->g_73.f7, "p_1058->g_73.f7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1058->g_74[i].f0, "p_1058->g_74[i].f0", print_hash_value);
        transparent_crc(p_1058->g_74[i].f1, "p_1058->g_74[i].f1", print_hash_value);
        transparent_crc(p_1058->g_74[i].f2, "p_1058->g_74[i].f2", print_hash_value);
        transparent_crc(p_1058->g_74[i].f3, "p_1058->g_74[i].f3", print_hash_value);
        transparent_crc(p_1058->g_74[i].f4, "p_1058->g_74[i].f4", print_hash_value);
        transparent_crc(p_1058->g_74[i].f5, "p_1058->g_74[i].f5", print_hash_value);
        transparent_crc(p_1058->g_74[i].f6, "p_1058->g_74[i].f6", print_hash_value);
        transparent_crc(p_1058->g_74[i].f7, "p_1058->g_74[i].f7", print_hash_value);

    }
    transparent_crc(p_1058->g_105, "p_1058->g_105", print_hash_value);
    transparent_crc(p_1058->g_136, "p_1058->g_136", print_hash_value);
    transparent_crc(p_1058->g_137, "p_1058->g_137", print_hash_value);
    transparent_crc(p_1058->g_151, "p_1058->g_151", print_hash_value);
    transparent_crc(p_1058->g_176, "p_1058->g_176", print_hash_value);
    transparent_crc(p_1058->g_178, "p_1058->g_178", print_hash_value);
    transparent_crc(p_1058->g_191.f0.f0, "p_1058->g_191.f0.f0", print_hash_value);
    transparent_crc(p_1058->g_191.f0.f1, "p_1058->g_191.f0.f1", print_hash_value);
    transparent_crc(p_1058->g_191.f0.f2, "p_1058->g_191.f0.f2", print_hash_value);
    transparent_crc(p_1058->g_191.f0.f3, "p_1058->g_191.f0.f3", print_hash_value);
    transparent_crc(p_1058->g_191.f0.f4, "p_1058->g_191.f0.f4", print_hash_value);
    transparent_crc(p_1058->g_191.f0.f5, "p_1058->g_191.f0.f5", print_hash_value);
    transparent_crc(p_1058->g_191.f0.f6, "p_1058->g_191.f0.f6", print_hash_value);
    transparent_crc(p_1058->g_191.f0.f7, "p_1058->g_191.f0.f7", print_hash_value);
    transparent_crc(p_1058->g_191.f1, "p_1058->g_191.f1", print_hash_value);
    transparent_crc(p_1058->g_191.f2, "p_1058->g_191.f2", print_hash_value);
    transparent_crc(p_1058->g_191.f3, "p_1058->g_191.f3", print_hash_value);
    transparent_crc(p_1058->g_191.f4, "p_1058->g_191.f4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1058->g_199[i], "p_1058->g_199[i]", print_hash_value);

    }
    transparent_crc(p_1058->g_200, "p_1058->g_200", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1058->g_222[i], "p_1058->g_222[i]", print_hash_value);

    }
    transparent_crc(p_1058->g_258, "p_1058->g_258", print_hash_value);
    transparent_crc(p_1058->g_261, "p_1058->g_261", print_hash_value);
    transparent_crc(p_1058->g_269.f0.f0, "p_1058->g_269.f0.f0", print_hash_value);
    transparent_crc(p_1058->g_269.f0.f1, "p_1058->g_269.f0.f1", print_hash_value);
    transparent_crc(p_1058->g_269.f0.f2, "p_1058->g_269.f0.f2", print_hash_value);
    transparent_crc(p_1058->g_269.f0.f3, "p_1058->g_269.f0.f3", print_hash_value);
    transparent_crc(p_1058->g_269.f0.f4, "p_1058->g_269.f0.f4", print_hash_value);
    transparent_crc(p_1058->g_269.f0.f5, "p_1058->g_269.f0.f5", print_hash_value);
    transparent_crc(p_1058->g_269.f0.f6, "p_1058->g_269.f0.f6", print_hash_value);
    transparent_crc(p_1058->g_269.f0.f7, "p_1058->g_269.f0.f7", print_hash_value);
    transparent_crc(p_1058->g_269.f1, "p_1058->g_269.f1", print_hash_value);
    transparent_crc(p_1058->g_269.f2, "p_1058->g_269.f2", print_hash_value);
    transparent_crc(p_1058->g_269.f3, "p_1058->g_269.f3", print_hash_value);
    transparent_crc(p_1058->g_269.f4, "p_1058->g_269.f4", print_hash_value);
    transparent_crc(p_1058->g_276.f0, "p_1058->g_276.f0", print_hash_value);
    transparent_crc(p_1058->g_276.f1, "p_1058->g_276.f1", print_hash_value);
    transparent_crc(p_1058->g_276.f2, "p_1058->g_276.f2", print_hash_value);
    transparent_crc(p_1058->g_276.f3, "p_1058->g_276.f3", print_hash_value);
    transparent_crc(p_1058->g_276.f4, "p_1058->g_276.f4", print_hash_value);
    transparent_crc(p_1058->g_276.f5, "p_1058->g_276.f5", print_hash_value);
    transparent_crc(p_1058->g_276.f6, "p_1058->g_276.f6", print_hash_value);
    transparent_crc(p_1058->g_276.f7, "p_1058->g_276.f7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1058->g_281[i].f0, "p_1058->g_281[i].f0", print_hash_value);
        transparent_crc(p_1058->g_281[i].f1, "p_1058->g_281[i].f1", print_hash_value);
        transparent_crc(p_1058->g_281[i].f2, "p_1058->g_281[i].f2", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f0.f0, "p_1058->g_281[i].f3.f0.f0", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f0.f1, "p_1058->g_281[i].f3.f0.f1", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f0.f2, "p_1058->g_281[i].f3.f0.f2", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f0.f3, "p_1058->g_281[i].f3.f0.f3", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f0.f4, "p_1058->g_281[i].f3.f0.f4", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f0.f5, "p_1058->g_281[i].f3.f0.f5", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f0.f6, "p_1058->g_281[i].f3.f0.f6", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f0.f7, "p_1058->g_281[i].f3.f0.f7", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f1, "p_1058->g_281[i].f3.f1", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f2, "p_1058->g_281[i].f3.f2", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f3, "p_1058->g_281[i].f3.f3", print_hash_value);
        transparent_crc(p_1058->g_281[i].f3.f4, "p_1058->g_281[i].f3.f4", print_hash_value);
        transparent_crc(p_1058->g_281[i].f4.f0, "p_1058->g_281[i].f4.f0", print_hash_value);
        transparent_crc(p_1058->g_281[i].f4.f1, "p_1058->g_281[i].f4.f1", print_hash_value);
        transparent_crc(p_1058->g_281[i].f4.f2, "p_1058->g_281[i].f4.f2", print_hash_value);
        transparent_crc(p_1058->g_281[i].f4.f3, "p_1058->g_281[i].f4.f3", print_hash_value);
        transparent_crc(p_1058->g_281[i].f4.f4, "p_1058->g_281[i].f4.f4", print_hash_value);
        transparent_crc(p_1058->g_281[i].f4.f5, "p_1058->g_281[i].f4.f5", print_hash_value);
        transparent_crc(p_1058->g_281[i].f4.f6, "p_1058->g_281[i].f4.f6", print_hash_value);
        transparent_crc(p_1058->g_281[i].f4.f7, "p_1058->g_281[i].f4.f7", print_hash_value);
        transparent_crc(p_1058->g_281[i].f5.f0, "p_1058->g_281[i].f5.f0", print_hash_value);
        transparent_crc(p_1058->g_281[i].f5.f1, "p_1058->g_281[i].f5.f1", print_hash_value);
        transparent_crc(p_1058->g_281[i].f5.f2, "p_1058->g_281[i].f5.f2", print_hash_value);
        transparent_crc(p_1058->g_281[i].f5.f3, "p_1058->g_281[i].f5.f3", print_hash_value);
        transparent_crc(p_1058->g_281[i].f5.f4, "p_1058->g_281[i].f5.f4", print_hash_value);
        transparent_crc(p_1058->g_281[i].f5.f5, "p_1058->g_281[i].f5.f5", print_hash_value);
        transparent_crc(p_1058->g_281[i].f5.f6, "p_1058->g_281[i].f5.f6", print_hash_value);
        transparent_crc(p_1058->g_281[i].f5.f7, "p_1058->g_281[i].f5.f7", print_hash_value);
        transparent_crc(p_1058->g_281[i].f6.f0, "p_1058->g_281[i].f6.f0", print_hash_value);
        transparent_crc(p_1058->g_281[i].f6.f1, "p_1058->g_281[i].f6.f1", print_hash_value);
        transparent_crc(p_1058->g_281[i].f6.f2, "p_1058->g_281[i].f6.f2", print_hash_value);
        transparent_crc(p_1058->g_281[i].f6.f3, "p_1058->g_281[i].f6.f3", print_hash_value);
        transparent_crc(p_1058->g_281[i].f6.f4, "p_1058->g_281[i].f6.f4", print_hash_value);
        transparent_crc(p_1058->g_281[i].f6.f5, "p_1058->g_281[i].f6.f5", print_hash_value);
        transparent_crc(p_1058->g_281[i].f6.f6, "p_1058->g_281[i].f6.f6", print_hash_value);
        transparent_crc(p_1058->g_281[i].f6.f7, "p_1058->g_281[i].f6.f7", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1058->g_337[i].f0, "p_1058->g_337[i].f0", print_hash_value);
        transparent_crc(p_1058->g_337[i].f1, "p_1058->g_337[i].f1", print_hash_value);
        transparent_crc(p_1058->g_337[i].f2, "p_1058->g_337[i].f2", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f0.f0, "p_1058->g_337[i].f3.f0.f0", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f0.f1, "p_1058->g_337[i].f3.f0.f1", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f0.f2, "p_1058->g_337[i].f3.f0.f2", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f0.f3, "p_1058->g_337[i].f3.f0.f3", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f0.f4, "p_1058->g_337[i].f3.f0.f4", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f0.f5, "p_1058->g_337[i].f3.f0.f5", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f0.f6, "p_1058->g_337[i].f3.f0.f6", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f0.f7, "p_1058->g_337[i].f3.f0.f7", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f1, "p_1058->g_337[i].f3.f1", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f2, "p_1058->g_337[i].f3.f2", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f3, "p_1058->g_337[i].f3.f3", print_hash_value);
        transparent_crc(p_1058->g_337[i].f3.f4, "p_1058->g_337[i].f3.f4", print_hash_value);
        transparent_crc(p_1058->g_337[i].f4.f0, "p_1058->g_337[i].f4.f0", print_hash_value);
        transparent_crc(p_1058->g_337[i].f4.f1, "p_1058->g_337[i].f4.f1", print_hash_value);
        transparent_crc(p_1058->g_337[i].f4.f2, "p_1058->g_337[i].f4.f2", print_hash_value);
        transparent_crc(p_1058->g_337[i].f4.f3, "p_1058->g_337[i].f4.f3", print_hash_value);
        transparent_crc(p_1058->g_337[i].f4.f4, "p_1058->g_337[i].f4.f4", print_hash_value);
        transparent_crc(p_1058->g_337[i].f4.f5, "p_1058->g_337[i].f4.f5", print_hash_value);
        transparent_crc(p_1058->g_337[i].f4.f6, "p_1058->g_337[i].f4.f6", print_hash_value);
        transparent_crc(p_1058->g_337[i].f4.f7, "p_1058->g_337[i].f4.f7", print_hash_value);
        transparent_crc(p_1058->g_337[i].f5.f0, "p_1058->g_337[i].f5.f0", print_hash_value);
        transparent_crc(p_1058->g_337[i].f5.f1, "p_1058->g_337[i].f5.f1", print_hash_value);
        transparent_crc(p_1058->g_337[i].f5.f2, "p_1058->g_337[i].f5.f2", print_hash_value);
        transparent_crc(p_1058->g_337[i].f5.f3, "p_1058->g_337[i].f5.f3", print_hash_value);
        transparent_crc(p_1058->g_337[i].f5.f4, "p_1058->g_337[i].f5.f4", print_hash_value);
        transparent_crc(p_1058->g_337[i].f5.f5, "p_1058->g_337[i].f5.f5", print_hash_value);
        transparent_crc(p_1058->g_337[i].f5.f6, "p_1058->g_337[i].f5.f6", print_hash_value);
        transparent_crc(p_1058->g_337[i].f5.f7, "p_1058->g_337[i].f5.f7", print_hash_value);
        transparent_crc(p_1058->g_337[i].f6.f0, "p_1058->g_337[i].f6.f0", print_hash_value);
        transparent_crc(p_1058->g_337[i].f6.f1, "p_1058->g_337[i].f6.f1", print_hash_value);
        transparent_crc(p_1058->g_337[i].f6.f2, "p_1058->g_337[i].f6.f2", print_hash_value);
        transparent_crc(p_1058->g_337[i].f6.f3, "p_1058->g_337[i].f6.f3", print_hash_value);
        transparent_crc(p_1058->g_337[i].f6.f4, "p_1058->g_337[i].f6.f4", print_hash_value);
        transparent_crc(p_1058->g_337[i].f6.f5, "p_1058->g_337[i].f6.f5", print_hash_value);
        transparent_crc(p_1058->g_337[i].f6.f6, "p_1058->g_337[i].f6.f6", print_hash_value);
        transparent_crc(p_1058->g_337[i].f6.f7, "p_1058->g_337[i].f6.f7", print_hash_value);

    }
    transparent_crc(p_1058->g_381.f0.f0, "p_1058->g_381.f0.f0", print_hash_value);
    transparent_crc(p_1058->g_381.f0.f1, "p_1058->g_381.f0.f1", print_hash_value);
    transparent_crc(p_1058->g_381.f0.f2, "p_1058->g_381.f0.f2", print_hash_value);
    transparent_crc(p_1058->g_381.f0.f3, "p_1058->g_381.f0.f3", print_hash_value);
    transparent_crc(p_1058->g_381.f0.f4, "p_1058->g_381.f0.f4", print_hash_value);
    transparent_crc(p_1058->g_381.f0.f5, "p_1058->g_381.f0.f5", print_hash_value);
    transparent_crc(p_1058->g_381.f0.f6, "p_1058->g_381.f0.f6", print_hash_value);
    transparent_crc(p_1058->g_381.f0.f7, "p_1058->g_381.f0.f7", print_hash_value);
    transparent_crc(p_1058->g_381.f1, "p_1058->g_381.f1", print_hash_value);
    transparent_crc(p_1058->g_381.f2, "p_1058->g_381.f2", print_hash_value);
    transparent_crc(p_1058->g_381.f3, "p_1058->g_381.f3", print_hash_value);
    transparent_crc(p_1058->g_381.f4, "p_1058->g_381.f4", print_hash_value);
    transparent_crc(p_1058->g_382.f0.f0, "p_1058->g_382.f0.f0", print_hash_value);
    transparent_crc(p_1058->g_382.f0.f1, "p_1058->g_382.f0.f1", print_hash_value);
    transparent_crc(p_1058->g_382.f0.f2, "p_1058->g_382.f0.f2", print_hash_value);
    transparent_crc(p_1058->g_382.f0.f3, "p_1058->g_382.f0.f3", print_hash_value);
    transparent_crc(p_1058->g_382.f0.f4, "p_1058->g_382.f0.f4", print_hash_value);
    transparent_crc(p_1058->g_382.f0.f5, "p_1058->g_382.f0.f5", print_hash_value);
    transparent_crc(p_1058->g_382.f0.f6, "p_1058->g_382.f0.f6", print_hash_value);
    transparent_crc(p_1058->g_382.f0.f7, "p_1058->g_382.f0.f7", print_hash_value);
    transparent_crc(p_1058->g_382.f1, "p_1058->g_382.f1", print_hash_value);
    transparent_crc(p_1058->g_382.f2, "p_1058->g_382.f2", print_hash_value);
    transparent_crc(p_1058->g_382.f3, "p_1058->g_382.f3", print_hash_value);
    transparent_crc(p_1058->g_382.f4, "p_1058->g_382.f4", print_hash_value);
    transparent_crc(p_1058->g_415, "p_1058->g_415", print_hash_value);
    transparent_crc(p_1058->g_428.f0.f0, "p_1058->g_428.f0.f0", print_hash_value);
    transparent_crc(p_1058->g_428.f0.f1, "p_1058->g_428.f0.f1", print_hash_value);
    transparent_crc(p_1058->g_428.f0.f2, "p_1058->g_428.f0.f2", print_hash_value);
    transparent_crc(p_1058->g_428.f0.f3, "p_1058->g_428.f0.f3", print_hash_value);
    transparent_crc(p_1058->g_428.f0.f4, "p_1058->g_428.f0.f4", print_hash_value);
    transparent_crc(p_1058->g_428.f0.f5, "p_1058->g_428.f0.f5", print_hash_value);
    transparent_crc(p_1058->g_428.f0.f6, "p_1058->g_428.f0.f6", print_hash_value);
    transparent_crc(p_1058->g_428.f0.f7, "p_1058->g_428.f0.f7", print_hash_value);
    transparent_crc(p_1058->g_428.f1, "p_1058->g_428.f1", print_hash_value);
    transparent_crc(p_1058->g_428.f2, "p_1058->g_428.f2", print_hash_value);
    transparent_crc(p_1058->g_428.f3, "p_1058->g_428.f3", print_hash_value);
    transparent_crc(p_1058->g_428.f4, "p_1058->g_428.f4", print_hash_value);
    transparent_crc(p_1058->g_456.f0, "p_1058->g_456.f0", print_hash_value);
    transparent_crc(p_1058->g_456.f1, "p_1058->g_456.f1", print_hash_value);
    transparent_crc(p_1058->g_456.f2, "p_1058->g_456.f2", print_hash_value);
    transparent_crc(p_1058->g_456.f3, "p_1058->g_456.f3", print_hash_value);
    transparent_crc(p_1058->g_456.f4, "p_1058->g_456.f4", print_hash_value);
    transparent_crc(p_1058->g_456.f5, "p_1058->g_456.f5", print_hash_value);
    transparent_crc(p_1058->g_456.f6, "p_1058->g_456.f6", print_hash_value);
    transparent_crc(p_1058->g_456.f7, "p_1058->g_456.f7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1058->g_521[i][j], "p_1058->g_521[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1058->g_561.f0, "p_1058->g_561.f0", print_hash_value);
    transparent_crc(p_1058->g_561.f1, "p_1058->g_561.f1", print_hash_value);
    transparent_crc(p_1058->g_561.f2, "p_1058->g_561.f2", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f0.f0, "p_1058->g_561.f3.f0.f0", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f0.f1, "p_1058->g_561.f3.f0.f1", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f0.f2, "p_1058->g_561.f3.f0.f2", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f0.f3, "p_1058->g_561.f3.f0.f3", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f0.f4, "p_1058->g_561.f3.f0.f4", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f0.f5, "p_1058->g_561.f3.f0.f5", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f0.f6, "p_1058->g_561.f3.f0.f6", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f0.f7, "p_1058->g_561.f3.f0.f7", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f1, "p_1058->g_561.f3.f1", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f2, "p_1058->g_561.f3.f2", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f3, "p_1058->g_561.f3.f3", print_hash_value);
    transparent_crc(p_1058->g_561.f3.f4, "p_1058->g_561.f3.f4", print_hash_value);
    transparent_crc(p_1058->g_561.f4.f0, "p_1058->g_561.f4.f0", print_hash_value);
    transparent_crc(p_1058->g_561.f4.f1, "p_1058->g_561.f4.f1", print_hash_value);
    transparent_crc(p_1058->g_561.f4.f2, "p_1058->g_561.f4.f2", print_hash_value);
    transparent_crc(p_1058->g_561.f4.f3, "p_1058->g_561.f4.f3", print_hash_value);
    transparent_crc(p_1058->g_561.f4.f4, "p_1058->g_561.f4.f4", print_hash_value);
    transparent_crc(p_1058->g_561.f4.f5, "p_1058->g_561.f4.f5", print_hash_value);
    transparent_crc(p_1058->g_561.f4.f6, "p_1058->g_561.f4.f6", print_hash_value);
    transparent_crc(p_1058->g_561.f4.f7, "p_1058->g_561.f4.f7", print_hash_value);
    transparent_crc(p_1058->g_561.f5.f0, "p_1058->g_561.f5.f0", print_hash_value);
    transparent_crc(p_1058->g_561.f5.f1, "p_1058->g_561.f5.f1", print_hash_value);
    transparent_crc(p_1058->g_561.f5.f2, "p_1058->g_561.f5.f2", print_hash_value);
    transparent_crc(p_1058->g_561.f5.f3, "p_1058->g_561.f5.f3", print_hash_value);
    transparent_crc(p_1058->g_561.f5.f4, "p_1058->g_561.f5.f4", print_hash_value);
    transparent_crc(p_1058->g_561.f5.f5, "p_1058->g_561.f5.f5", print_hash_value);
    transparent_crc(p_1058->g_561.f5.f6, "p_1058->g_561.f5.f6", print_hash_value);
    transparent_crc(p_1058->g_561.f5.f7, "p_1058->g_561.f5.f7", print_hash_value);
    transparent_crc(p_1058->g_561.f6.f0, "p_1058->g_561.f6.f0", print_hash_value);
    transparent_crc(p_1058->g_561.f6.f1, "p_1058->g_561.f6.f1", print_hash_value);
    transparent_crc(p_1058->g_561.f6.f2, "p_1058->g_561.f6.f2", print_hash_value);
    transparent_crc(p_1058->g_561.f6.f3, "p_1058->g_561.f6.f3", print_hash_value);
    transparent_crc(p_1058->g_561.f6.f4, "p_1058->g_561.f6.f4", print_hash_value);
    transparent_crc(p_1058->g_561.f6.f5, "p_1058->g_561.f6.f5", print_hash_value);
    transparent_crc(p_1058->g_561.f6.f6, "p_1058->g_561.f6.f6", print_hash_value);
    transparent_crc(p_1058->g_561.f6.f7, "p_1058->g_561.f6.f7", print_hash_value);
    transparent_crc(p_1058->g_593.f0, "p_1058->g_593.f0", print_hash_value);
    transparent_crc(p_1058->g_593.f1, "p_1058->g_593.f1", print_hash_value);
    transparent_crc(p_1058->g_593.f2, "p_1058->g_593.f2", print_hash_value);
    transparent_crc(p_1058->g_593.f3, "p_1058->g_593.f3", print_hash_value);
    transparent_crc(p_1058->g_593.f4, "p_1058->g_593.f4", print_hash_value);
    transparent_crc(p_1058->g_593.f5, "p_1058->g_593.f5", print_hash_value);
    transparent_crc(p_1058->g_593.f6, "p_1058->g_593.f6", print_hash_value);
    transparent_crc(p_1058->g_593.f7, "p_1058->g_593.f7", print_hash_value);
    transparent_crc(p_1058->g_652.f0, "p_1058->g_652.f0", print_hash_value);
    transparent_crc(p_1058->g_652.f1, "p_1058->g_652.f1", print_hash_value);
    transparent_crc(p_1058->g_652.f2, "p_1058->g_652.f2", print_hash_value);
    transparent_crc(p_1058->g_652.f3, "p_1058->g_652.f3", print_hash_value);
    transparent_crc(p_1058->g_652.f4, "p_1058->g_652.f4", print_hash_value);
    transparent_crc(p_1058->g_652.f5, "p_1058->g_652.f5", print_hash_value);
    transparent_crc(p_1058->g_652.f6, "p_1058->g_652.f6", print_hash_value);
    transparent_crc(p_1058->g_652.f7, "p_1058->g_652.f7", print_hash_value);
    transparent_crc(p_1058->g_675, "p_1058->g_675", print_hash_value);
    transparent_crc(p_1058->g_723.f0, "p_1058->g_723.f0", print_hash_value);
    transparent_crc(p_1058->g_723.f1, "p_1058->g_723.f1", print_hash_value);
    transparent_crc(p_1058->g_723.f2, "p_1058->g_723.f2", print_hash_value);
    transparent_crc(p_1058->g_723.f3, "p_1058->g_723.f3", print_hash_value);
    transparent_crc(p_1058->g_723.f4, "p_1058->g_723.f4", print_hash_value);
    transparent_crc(p_1058->g_723.f5, "p_1058->g_723.f5", print_hash_value);
    transparent_crc(p_1058->g_723.f6, "p_1058->g_723.f6", print_hash_value);
    transparent_crc(p_1058->g_723.f7, "p_1058->g_723.f7", print_hash_value);
    transparent_crc(p_1058->g_739, "p_1058->g_739", print_hash_value);
    transparent_crc(p_1058->g_748, "p_1058->g_748", print_hash_value);
    transparent_crc(p_1058->g_754.f0, "p_1058->g_754.f0", print_hash_value);
    transparent_crc(p_1058->g_754.f1, "p_1058->g_754.f1", print_hash_value);
    transparent_crc(p_1058->g_754.f2, "p_1058->g_754.f2", print_hash_value);
    transparent_crc(p_1058->g_754.f3, "p_1058->g_754.f3", print_hash_value);
    transparent_crc(p_1058->g_754.f4, "p_1058->g_754.f4", print_hash_value);
    transparent_crc(p_1058->g_754.f5, "p_1058->g_754.f5", print_hash_value);
    transparent_crc(p_1058->g_754.f6, "p_1058->g_754.f6", print_hash_value);
    transparent_crc(p_1058->g_754.f7, "p_1058->g_754.f7", print_hash_value);
    transparent_crc(p_1058->g_931.f0, "p_1058->g_931.f0", print_hash_value);
    transparent_crc(p_1058->g_931.f1, "p_1058->g_931.f1", print_hash_value);
    transparent_crc(p_1058->g_931.f2, "p_1058->g_931.f2", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f0.f0, "p_1058->g_931.f3.f0.f0", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f0.f1, "p_1058->g_931.f3.f0.f1", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f0.f2, "p_1058->g_931.f3.f0.f2", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f0.f3, "p_1058->g_931.f3.f0.f3", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f0.f4, "p_1058->g_931.f3.f0.f4", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f0.f5, "p_1058->g_931.f3.f0.f5", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f0.f6, "p_1058->g_931.f3.f0.f6", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f0.f7, "p_1058->g_931.f3.f0.f7", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f1, "p_1058->g_931.f3.f1", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f2, "p_1058->g_931.f3.f2", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f3, "p_1058->g_931.f3.f3", print_hash_value);
    transparent_crc(p_1058->g_931.f3.f4, "p_1058->g_931.f3.f4", print_hash_value);
    transparent_crc(p_1058->g_931.f4.f0, "p_1058->g_931.f4.f0", print_hash_value);
    transparent_crc(p_1058->g_931.f4.f1, "p_1058->g_931.f4.f1", print_hash_value);
    transparent_crc(p_1058->g_931.f4.f2, "p_1058->g_931.f4.f2", print_hash_value);
    transparent_crc(p_1058->g_931.f4.f3, "p_1058->g_931.f4.f3", print_hash_value);
    transparent_crc(p_1058->g_931.f4.f4, "p_1058->g_931.f4.f4", print_hash_value);
    transparent_crc(p_1058->g_931.f4.f5, "p_1058->g_931.f4.f5", print_hash_value);
    transparent_crc(p_1058->g_931.f4.f6, "p_1058->g_931.f4.f6", print_hash_value);
    transparent_crc(p_1058->g_931.f4.f7, "p_1058->g_931.f4.f7", print_hash_value);
    transparent_crc(p_1058->g_931.f5.f0, "p_1058->g_931.f5.f0", print_hash_value);
    transparent_crc(p_1058->g_931.f5.f1, "p_1058->g_931.f5.f1", print_hash_value);
    transparent_crc(p_1058->g_931.f5.f2, "p_1058->g_931.f5.f2", print_hash_value);
    transparent_crc(p_1058->g_931.f5.f3, "p_1058->g_931.f5.f3", print_hash_value);
    transparent_crc(p_1058->g_931.f5.f4, "p_1058->g_931.f5.f4", print_hash_value);
    transparent_crc(p_1058->g_931.f5.f5, "p_1058->g_931.f5.f5", print_hash_value);
    transparent_crc(p_1058->g_931.f5.f6, "p_1058->g_931.f5.f6", print_hash_value);
    transparent_crc(p_1058->g_931.f5.f7, "p_1058->g_931.f5.f7", print_hash_value);
    transparent_crc(p_1058->g_931.f6.f0, "p_1058->g_931.f6.f0", print_hash_value);
    transparent_crc(p_1058->g_931.f6.f1, "p_1058->g_931.f6.f1", print_hash_value);
    transparent_crc(p_1058->g_931.f6.f2, "p_1058->g_931.f6.f2", print_hash_value);
    transparent_crc(p_1058->g_931.f6.f3, "p_1058->g_931.f6.f3", print_hash_value);
    transparent_crc(p_1058->g_931.f6.f4, "p_1058->g_931.f6.f4", print_hash_value);
    transparent_crc(p_1058->g_931.f6.f5, "p_1058->g_931.f6.f5", print_hash_value);
    transparent_crc(p_1058->g_931.f6.f6, "p_1058->g_931.f6.f6", print_hash_value);
    transparent_crc(p_1058->g_931.f6.f7, "p_1058->g_931.f6.f7", print_hash_value);
    transparent_crc(p_1058->g_951.f0, "p_1058->g_951.f0", print_hash_value);
    transparent_crc(p_1058->g_951.f1, "p_1058->g_951.f1", print_hash_value);
    transparent_crc(p_1058->g_951.f2, "p_1058->g_951.f2", print_hash_value);
    transparent_crc(p_1058->g_951.f3, "p_1058->g_951.f3", print_hash_value);
    transparent_crc(p_1058->g_951.f4, "p_1058->g_951.f4", print_hash_value);
    transparent_crc(p_1058->g_951.f5, "p_1058->g_951.f5", print_hash_value);
    transparent_crc(p_1058->g_951.f6, "p_1058->g_951.f6", print_hash_value);
    transparent_crc(p_1058->g_951.f7, "p_1058->g_951.f7", print_hash_value);
    transparent_crc(p_1058->g_1014.f0, "p_1058->g_1014.f0", print_hash_value);
    transparent_crc(p_1058->g_1014.f1, "p_1058->g_1014.f1", print_hash_value);
    transparent_crc(p_1058->g_1014.f2, "p_1058->g_1014.f2", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f0.f0, "p_1058->g_1014.f3.f0.f0", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f0.f1, "p_1058->g_1014.f3.f0.f1", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f0.f2, "p_1058->g_1014.f3.f0.f2", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f0.f3, "p_1058->g_1014.f3.f0.f3", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f0.f4, "p_1058->g_1014.f3.f0.f4", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f0.f5, "p_1058->g_1014.f3.f0.f5", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f0.f6, "p_1058->g_1014.f3.f0.f6", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f0.f7, "p_1058->g_1014.f3.f0.f7", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f1, "p_1058->g_1014.f3.f1", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f2, "p_1058->g_1014.f3.f2", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f3, "p_1058->g_1014.f3.f3", print_hash_value);
    transparent_crc(p_1058->g_1014.f3.f4, "p_1058->g_1014.f3.f4", print_hash_value);
    transparent_crc(p_1058->g_1014.f4.f0, "p_1058->g_1014.f4.f0", print_hash_value);
    transparent_crc(p_1058->g_1014.f4.f1, "p_1058->g_1014.f4.f1", print_hash_value);
    transparent_crc(p_1058->g_1014.f4.f2, "p_1058->g_1014.f4.f2", print_hash_value);
    transparent_crc(p_1058->g_1014.f4.f3, "p_1058->g_1014.f4.f3", print_hash_value);
    transparent_crc(p_1058->g_1014.f4.f4, "p_1058->g_1014.f4.f4", print_hash_value);
    transparent_crc(p_1058->g_1014.f4.f5, "p_1058->g_1014.f4.f5", print_hash_value);
    transparent_crc(p_1058->g_1014.f4.f6, "p_1058->g_1014.f4.f6", print_hash_value);
    transparent_crc(p_1058->g_1014.f4.f7, "p_1058->g_1014.f4.f7", print_hash_value);
    transparent_crc(p_1058->g_1014.f5.f0, "p_1058->g_1014.f5.f0", print_hash_value);
    transparent_crc(p_1058->g_1014.f5.f1, "p_1058->g_1014.f5.f1", print_hash_value);
    transparent_crc(p_1058->g_1014.f5.f2, "p_1058->g_1014.f5.f2", print_hash_value);
    transparent_crc(p_1058->g_1014.f5.f3, "p_1058->g_1014.f5.f3", print_hash_value);
    transparent_crc(p_1058->g_1014.f5.f4, "p_1058->g_1014.f5.f4", print_hash_value);
    transparent_crc(p_1058->g_1014.f5.f5, "p_1058->g_1014.f5.f5", print_hash_value);
    transparent_crc(p_1058->g_1014.f5.f6, "p_1058->g_1014.f5.f6", print_hash_value);
    transparent_crc(p_1058->g_1014.f5.f7, "p_1058->g_1014.f5.f7", print_hash_value);
    transparent_crc(p_1058->g_1014.f6.f0, "p_1058->g_1014.f6.f0", print_hash_value);
    transparent_crc(p_1058->g_1014.f6.f1, "p_1058->g_1014.f6.f1", print_hash_value);
    transparent_crc(p_1058->g_1014.f6.f2, "p_1058->g_1014.f6.f2", print_hash_value);
    transparent_crc(p_1058->g_1014.f6.f3, "p_1058->g_1014.f6.f3", print_hash_value);
    transparent_crc(p_1058->g_1014.f6.f4, "p_1058->g_1014.f6.f4", print_hash_value);
    transparent_crc(p_1058->g_1014.f6.f5, "p_1058->g_1014.f6.f5", print_hash_value);
    transparent_crc(p_1058->g_1014.f6.f6, "p_1058->g_1014.f6.f6", print_hash_value);
    transparent_crc(p_1058->g_1014.f6.f7, "p_1058->g_1014.f6.f7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1058->g_1019[i], "p_1058->g_1019[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
