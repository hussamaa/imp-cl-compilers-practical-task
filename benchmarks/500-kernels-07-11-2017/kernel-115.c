// -g 17,62,3 -l 1,31,3
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


// Seed: 528318849

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int16_t  f1;
   volatile uint8_t  f2;
   uint64_t  f3;
   volatile uint8_t  f4;
};

union U1 {
   int32_t  f0;
   int8_t  f1;
   struct S0  f2;
   volatile int8_t * f3;
};

struct S2 {
    int8_t g_10;
    int8_t *g_9;
    uint32_t g_15[6][6][7];
    volatile struct S0 g_23;
    int32_t g_31;
    int64_t g_37;
    uint16_t g_38;
    uint32_t g_56;
    uint32_t g_57;
    uint32_t **g_74;
    uint32_t ***g_73;
    int16_t g_105;
    int32_t g_119;
    int8_t g_121;
    int8_t g_145;
    uint16_t **g_173;
    uint32_t g_178[3];
    int16_t g_202;
    int16_t g_205[8];
    struct S0 g_209;
    struct S0 g_210[8];
    struct S0 g_211;
    struct S0 g_212;
    struct S0 g_213;
    struct S0 g_214;
    struct S0 g_215;
    struct S0 g_216;
    struct S0 g_217;
    struct S0 g_218;
    struct S0 g_219;
    struct S0 g_220;
    struct S0 g_221;
    struct S0 g_222;
    int32_t g_240;
    struct S0 g_249[10];
    struct S0 *g_248[7];
    int32_t g_250;
    uint64_t g_284[10][5];
    uint16_t g_314[9][5][1];
    int16_t g_330;
    int16_t g_362[8];
    uint32_t g_412;
    int32_t *g_432[2];
    uint8_t g_440;
    int8_t g_447;
    volatile union U1 g_450;
    volatile union U1 *g_449[1][1];
    int32_t *g_453;
    volatile uint32_t g_463;
    volatile uint32_t g_464[9];
    volatile uint32_t g_465;
    volatile uint32_t g_466;
    volatile uint32_t g_467;
    volatile uint32_t g_468;
    volatile uint32_t g_469[6][9];
    volatile uint32_t g_470;
    volatile uint32_t g_471[10];
    volatile uint32_t g_472;
    volatile uint32_t g_473[8][9][3];
    volatile uint32_t g_474;
    volatile uint32_t g_475[1][2];
    volatile uint32_t g_476[8][6][5];
    volatile uint32_t g_477[10][3][8];
    volatile uint32_t g_478[6][5];
    volatile uint32_t g_479;
    volatile uint32_t g_480;
    volatile uint32_t g_481;
    volatile uint32_t g_482;
    volatile uint32_t g_483;
    volatile uint32_t g_484;
    volatile uint32_t g_485[10][1][3];
    volatile uint32_t g_486;
    volatile uint32_t g_487;
    volatile uint32_t g_488;
    volatile uint32_t g_489;
    volatile uint32_t g_490;
    volatile uint32_t g_491[5][5][2];
    volatile uint32_t *g_462[1][7][10];
    volatile uint32_t **g_461;
    uint8_t g_494;
    volatile uint64_t g_544;
    volatile uint64_t *g_543;
    uint32_t g_570;
    union U1 g_674;
    int32_t g_714;
    union U1 g_748;
    uint8_t g_827;
    struct S0 g_879;
    struct S0 g_881;
    union U1 g_891;
    union U1 g_917;
    union U1 g_918;
    union U1 g_919[3];
    union U1 g_920[6];
    union U1 g_921;
    union U1 g_922;
    union U1 g_923;
    union U1 g_924;
    union U1 g_925;
    union U1 g_926[2];
    union U1 g_927;
    union U1 g_928[6];
    union U1 g_929;
    union U1 g_930;
    union U1 g_931[7];
    union U1 g_932;
    union U1 g_933;
    union U1 g_934;
    union U1 g_935;
    union U1 g_936;
    union U1 g_937;
    union U1 g_938[5];
    union U1 g_939;
    union U1 g_940[3];
    union U1 g_941;
    union U1 g_942;
    union U1 g_943;
    union U1 g_944;
    union U1 g_945[8][1][10];
    union U1 g_946;
    union U1 g_947;
    union U1 g_948;
    union U1 g_949;
    union U1 g_950;
    union U1 g_951;
    union U1 g_952;
    union U1 g_953;
    union U1 g_954;
    union U1 g_955[9];
    union U1 g_956;
    union U1 g_957;
    union U1 g_958;
    union U1 g_959;
    union U1 g_960[10][8][1];
    union U1 g_961;
    union U1 g_962;
    union U1 g_963;
    union U1 g_964;
    union U1 g_965;
    union U1 g_966;
    union U1 g_967;
    union U1 g_968;
    union U1 g_969;
    union U1 g_970[4];
    union U1 g_971;
    union U1 g_972;
    union U1 g_973;
    union U1 g_974;
    union U1 g_975;
    union U1 g_976;
    union U1 g_977[9];
    union U1 g_978;
    union U1 g_979[8];
    union U1 g_980;
    union U1 g_981;
    union U1 g_982;
    union U1 g_983;
    union U1 g_984;
    union U1 g_985;
    union U1 g_986;
    union U1 g_987;
    union U1 g_988;
    union U1 g_989[2];
    union U1 g_990;
    union U1 g_991;
    union U1 g_992;
    union U1 g_993;
    union U1 g_994;
    union U1 g_997;
    int32_t *g_1006;
    int32_t **g_1005;
    uint16_t g_1068[6];
    uint32_t g_1126[4][2][6];
    struct S0 g_1150[4];
    struct S0 g_1153;
    int8_t *g_1168;
    struct S0 g_1254;
    uint64_t *g_1279;
    uint64_t **g_1278;
    struct S0 **g_1280;
    int64_t g_1319;
    volatile union U1 g_1347;
    int32_t ** volatile g_1356;
    uint16_t ****g_1379[9];
    struct S0 g_1402[6];
    struct S0 g_1403;
    volatile int64_t g_1416;
    int32_t *g_1425;
    volatile int16_t *g_1444[6][3];
    volatile int16_t * volatile *g_1443;
    struct S0 g_1446;
    union U1 g_1451;
    uint64_t g_1568;
    uint16_t * volatile * volatile g_1601;
    uint16_t * volatile g_1603;
    uint16_t * volatile g_1604;
    uint16_t * volatile g_1605;
    uint16_t * volatile *g_1602[9][2][1];
    uint16_t * volatile * volatile * volatile g_1600[2][3];
    uint16_t * volatile * volatile *g_1606;
    uint16_t * volatile * volatile * volatile *g_1599[7];
    uint16_t * volatile * volatile * volatile **g_1598;
    int32_t g_1620;
    struct S0 g_1632;
    union U1 g_1669;
    int32_t ** volatile g_1672;
    volatile union U1 g_1683;
    int32_t * volatile g_1731;
    struct S0 g_1734;
    uint64_t g_1745;
    union U1 g_1799[1][4][7];
    int32_t g_1865[4];
    volatile uint32_t g_1869;
    int32_t **g_1921;
    int32_t ***g_1920;
    int32_t ****g_1919[1][2];
    union U1 g_1929[3][6];
    volatile union U1 g_1932;
    int16_t g_1970[8][5];
    uint32_t g_1989[3][5][4];
    int8_t g_1990[7][3][10];
    uint32_t *g_2010;
    volatile struct S0 g_2020;
    union U1 *g_2033;
    union U1 ** volatile g_2032;
    struct S0 g_2049;
    volatile uint64_t g_2074;
    uint32_t g_2078;
    volatile union U1 g_2136;
    struct S0 g_2161;
    volatile uint64_t ** volatile * volatile *g_2174;
    volatile struct S0 g_2210;
    uint32_t g_2228;
    union U1 ** volatile g_2245;
    union U1 ** volatile g_2278;
    uint64_t ***g_2302;
    uint32_t *g_2310;
    struct S0 g_2316[2][9];
    volatile uint32_t g_2339;
    int16_t g_2347;
    uint8_t g_2377;
    union U1 ** volatile g_2393;
    volatile struct S0 g_2396;
    uint32_t **g_2408;
    uint64_t **g_2416;
    int32_t g_2491;
    int32_t g_2513;
    struct S0 g_2545;
    volatile uint32_t g_2560;
    uint16_t g_2609;
    volatile union U1 g_2639[3][7][6];
    uint16_t g_2698;
    union U1 g_2731;
    struct S0 g_2735[1];
    int8_t g_2787[3];
    volatile struct S0 g_2795;
    volatile struct S0 g_2799;
    volatile struct S0 g_2800;
    volatile int32_t g_2816[4][5];
    volatile int32_t *g_2815;
    volatile int32_t ** volatile g_2814[5];
    volatile int32_t ** volatile g_2817;
    union U1 g_2850[8];
    int32_t ** volatile g_2859[10];
    volatile union U1 g_2862;
    int64_t g_2874[10];
    struct S0 g_2942;
    struct S0 g_2949;
    struct S0 g_2966;
    struct S0 g_2967[8][8][4];
    int32_t ** volatile g_2987;
    struct S0 g_3009;
    uint16_t *****g_3013[4];
    uint16_t ******g_3012[3][10];
    uint16_t *******g_3011;
    volatile int32_t ** volatile g_3050[1];
    volatile int32_t ** volatile g_3051;
    int32_t ** volatile g_3063;
    int32_t *g_3126;
    struct S0 g_3130[10];
    struct S0 * volatile g_3131;
    volatile uint16_t g_3146;
    volatile uint16_t *g_3145;
    volatile uint16_t **g_3144;
    volatile uint16_t *** volatile g_3143;
    volatile uint16_t *** volatile *g_3142;
    volatile uint16_t *** volatile * volatile *g_3141;
    volatile uint16_t *** volatile * volatile * volatile *g_3140[1][8][8];
    volatile uint16_t *** volatile * volatile * volatile **g_3139;
    volatile uint16_t *** volatile * volatile * volatile ** volatile * volatile g_3138[9][9];
    uint16_t ********g_3148[3][5][7];
    uint16_t ******g_3153;
    struct S0 g_3204;
    union U1 g_3227;
    struct S0 g_3262;
    struct S0 * volatile * volatile *g_3279;
    struct S0 * volatile * volatile ** volatile g_3278;
    volatile struct S0 g_3291;
    volatile struct S0 * volatile g_3292;
    volatile struct S0 g_3299;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S2 * p_3313);
int64_t  func_4(int8_t * p_5, uint32_t  p_6, uint32_t  p_7, int8_t * p_8, struct S2 * p_3313);
uint64_t  func_16(int8_t * p_17, struct S2 * p_3313);
int8_t * func_18(int8_t * p_19, uint32_t  p_20, uint64_t  p_21, int8_t * p_22, struct S2 * p_3313);
uint8_t  func_25(int32_t  p_26, struct S2 * p_3313);
int32_t * func_58(uint32_t * p_59, int8_t * p_60, uint64_t  p_61, struct S2 * p_3313);
uint32_t * func_62(int8_t * p_63, int32_t  p_64, int64_t  p_65, int32_t  p_66, int32_t  p_67, struct S2 * p_3313);
int8_t * func_68(uint32_t *** p_69, int32_t  p_70, int32_t * p_71, uint32_t * p_72, struct S2 * p_3313);
int8_t  func_77(uint32_t  p_78, int8_t * p_79, struct S2 * p_3313);
uint32_t  func_80(uint32_t  p_81, uint32_t ** p_82, uint32_t *** p_83, uint32_t  p_84, struct S2 * p_3313);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_3313->g_9 p_3313->g_23 p_3313->g_38 p_3313->g_31 p_3313->g_1150.f1 p_3313->g_1279 p_3313->g_284 p_3313->g_881.f0 p_3313->g_965.f0 p_3313->g_453 p_3313->g_119 p_3313->g_220.f3 p_3313->g_1356 p_3313->g_10 p_3313->g_1734 p_3313->g_330 p_3313->g_1005 p_3313->g_1006 p_3313->g_1745 p_3313->g_827 p_3313->g_211.f3 p_3313->g_1632.f1 p_3313->g_1280 p_3313->g_2010 p_3313->g_178 p_3313->g_2302 p_3313->g_1278 p_3313->g_3063 p_3313->g_479 p_3313->g_924.f0 p_3313->g_2491 p_3313->g_991.f0 p_3313->g_2161.f3 p_3313->g_961.f0 p_3313->g_544 p_3313->g_314 p_3313->g_221.f1 p_3313->g_2316.f0 p_3313->g_918.f0 p_3313->g_988.f0 p_3313->g_964.f0 p_3313->g_212.f1 p_3313->g_1632.f2 p_3313->g_1068 p_3313->g_944.f0 p_3313->g_217.f0 p_3313->g_216.f3 p_3313->g_3130 p_3313->g_3131 p_3313->g_1672 p_3313->g_214 p_3313->g_73 p_3313->g_74 p_3313->g_1379 p_3313->g_447 p_3313->g_3144 p_3313->g_3145 p_3313->g_3146 p_3313->g_2316.f1 p_3313->g_1865 p_3313->g_941.f0 p_3313->g_2949.f1 p_3313->g_250 p_3313->g_1153.f0 p_3313->g_3204 p_3313->g_221.f0 p_3313->g_1632.f3 p_3313->g_2787 p_3313->g_209.f1 p_3313->g_1731 p_3313->g_3153 p_3313->g_3013 p_3313->g_1605 p_3313->g_248 p_3313->g_2815 p_3313->g_2816 p_3313->g_2032 p_3313->g_2033 p_3313->g_989 p_3313->g_3262 p_3313->g_917.f0 p_3313->g_969.f0 p_3313->g_494 p_3313->g_925.f0 p_3313->g_218.f0 p_3313->g_932.f0 p_3313->g_3278 p_3313->g_997.f0 p_3313->g_3291 p_3313->g_3292 p_3313->g_3299 p_3313->g_489 p_3313->g_2049.f1 p_3313->g_931.f0 p_3313->g_1990 p_3313->g_213.f0
 * writes: p_3313->g_15 p_3313->g_38 p_3313->g_31 p_3313->g_56 p_3313->g_57 p_3313->g_119 p_3313->g_220.f3 p_3313->g_432 p_3313->g_827 p_3313->g_1632.f1 p_3313->g_248 p_3313->g_1402.f1 p_3313->g_2491 p_3313->g_314 p_3313->g_1068 p_3313->g_494 p_3313->g_212.f1 p_3313->g_217.f3 p_3313->g_3126 p_3313->g_214 p_3313->g_105 p_3313->g_2949.f1 p_3313->g_962.f2.f1 p_3313->g_2787 p_3313->g_570 p_3313->g_2816 p_3313->g_222.f0 p_3313->g_178 p_3313->g_212.f0 p_3313->g_211.f3 p_3313->g_284 p_3313->g_968.f2.f1 p_3313->g_205 p_3313->g_37 p_3313->g_218.f0 p_3313->g_412 p_3313->g_221.f0 p_3313->g_879.f0 p_3313->g_1319 p_3313->g_3291 p_3313->g_10 p_3313->g_2049.f1 p_3313->g_2377
 */
int32_t  func_1(struct S2 * p_3313)
{ /* block id: 4 */
    int32_t l_11 = (-4L);
    uint32_t *l_14 = &p_3313->g_15[3][3][2];
    int8_t *l_29[6][7] = {{&p_3313->g_10,&p_3313->g_10,&p_3313->g_10,(void*)0,&p_3313->g_10,(void*)0,&p_3313->g_10},{&p_3313->g_10,&p_3313->g_10,&p_3313->g_10,(void*)0,&p_3313->g_10,(void*)0,&p_3313->g_10},{&p_3313->g_10,&p_3313->g_10,&p_3313->g_10,(void*)0,&p_3313->g_10,(void*)0,&p_3313->g_10},{&p_3313->g_10,&p_3313->g_10,&p_3313->g_10,(void*)0,&p_3313->g_10,(void*)0,&p_3313->g_10},{&p_3313->g_10,&p_3313->g_10,&p_3313->g_10,(void*)0,&p_3313->g_10,(void*)0,&p_3313->g_10},{&p_3313->g_10,&p_3313->g_10,&p_3313->g_10,(void*)0,&p_3313->g_10,(void*)0,&p_3313->g_10}};
    int32_t *l_3068 = &p_3313->g_2491;
    uint16_t *l_3072 = &p_3313->g_314[5][1][0];
    uint16_t **l_3071 = &l_3072;
    uint16_t *l_3094 = &p_3313->g_1068[2];
    int8_t l_3095 = 0x44L;
    uint8_t *l_3096 = &p_3313->g_494;
    uint16_t *****l_3150 = &p_3313->g_1379[3];
    uint64_t ****l_3203 = &p_3313->g_2302;
    union U1 *l_3226 = &p_3313->g_3227;
    int8_t l_3230 = 0x3CL;
    int32_t l_3238 = (-1L);
    int32_t l_3247 = 0x3536BD4AL;
    int32_t l_3248 = 0x266414F6L;
    uint16_t l_3250 = 0x38E6L;
    struct S0 ***l_3255 = (void*)0;
    uint8_t l_3267[2];
    uint32_t ***l_3306 = (void*)0;
    int64_t l_3307 = 0x3FA82183B1C485F0L;
    int16_t *l_3308 = &p_3313->g_994.f2.f1;
    int16_t *l_3309 = (void*)0;
    int16_t *l_3310 = &p_3313->g_940[0].f2.f1;
    int16_t *l_3311 = &p_3313->g_2049.f1;
    uint8_t *l_3312 = &p_3313->g_2377;
    int i, j;
    for (i = 0; i < 2; i++)
        l_3267[i] = 0xBAL;
    (*l_3068) ^= (safe_add_func_uint16_t_u_u(((((func_4(p_3313->g_9, l_11, ((*l_14) = (7UL < (safe_rshift_func_int8_t_s_u(0x0AL, 4)))), (func_16(func_18(&p_3313->g_10, (((p_3313->g_23 , (safe_unary_minus_func_uint64_t_u(0UL))) < func_25(((+(!(l_11 , ((((safe_lshift_func_uint16_t_u_s((&p_3313->g_10 == &p_3313->g_10), l_11)) && l_11) , (void*)0) == l_29[2][5])))) , (-1L)), p_3313)) , l_11), l_11, l_29[2][5], p_3313), p_3313) , l_29[2][5]), p_3313) , p_3313->g_479) , 0x79EDA960L) , l_11) & p_3313->g_924.f0), l_11));
    (*p_3313->g_453) = (l_3068 == ((((safe_mul_func_int16_t_s_s((((((void*)0 != l_3071) > (((safe_mul_func_uint16_t_u_u((65535UL <= (safe_rshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((((safe_add_func_int16_t_s_s((*l_3068), (safe_div_func_uint8_t_u_u((*l_3068), (((*l_3068) != ((*l_3096) = (((safe_mul_func_uint8_t_u_u(((((safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((*l_3094) = ((**l_3071) &= ((((((safe_unary_minus_func_int8_t_s((((safe_sub_func_int64_t_s_s(p_3313->g_991.f0, (safe_rshift_func_int16_t_s_s((*l_3068), 9)))) >= (*l_3068)) , 1L))) >= p_3313->g_2161.f3) , (*p_3313->g_1006)) , p_3313->g_544) & (*l_3068)) , (*l_3068)))), p_3313->g_221.f1)), p_3313->g_284[7][3])) > 8L) , (***p_3313->g_2302)) ^ 0x2DD36A0356F25DD3L), (*l_3068))) , l_3095) & 0L))) || (*l_3068)))))) & 0x75D0L) , 0x31A828171747B8A9L), p_3313->g_2316[1][3].f0)) | (*l_3068)), (*p_3313->g_9)))), (*l_3068))) == 4294967289UL) ^ p_3313->g_918.f0)) ^ p_3313->g_988.f0) | (*l_3068)), p_3313->g_964.f0)) > 0x7AF2CF285D944285L) != 0UL) , (void*)0));
    for (p_3313->g_212.f1 = (-6); (p_3313->g_212.f1 > (-19)); p_3313->g_212.f1 = safe_sub_func_uint32_t_u_u(p_3313->g_212.f1, 8))
    { /* block id: 1430 */
        uint16_t l_3120 = 0x7B1EL;
        int64_t l_3129 = 0x06CF7479D63EAFC8L;
        int8_t *l_3133 = &p_3313->g_2787[1];
        uint16_t *****l_3149 = &p_3313->g_1379[3];
        int32_t *l_3154 = &p_3313->g_2491;
        int32_t ***l_3177 = &p_3313->g_1005;
        uint64_t l_3235 = 18446744073709551608UL;
        int32_t l_3241 = 0x21D680B4L;
        int32_t l_3271 = 5L;
        int32_t l_3272[7] = {8L,8L,8L,8L,8L,8L,8L};
        uint32_t l_3274 = 0x8E3A7C36L;
        int i;
        for (p_3313->g_217.f3 = 0; (p_3313->g_217.f3 != 23); p_3313->g_217.f3 = safe_add_func_int64_t_s_s(p_3313->g_217.f3, 6))
        { /* block id: 1433 */
            int64_t l_3103 = (-4L);
            uint32_t ****l_3106 = &p_3313->g_73;
            int32_t *l_3123 = &p_3313->g_119;
            uint64_t l_3132[6] = {0x18E70B603CA50296L,0x18E70B603CA50296L,0x18E70B603CA50296L,0x18E70B603CA50296L,0x18E70B603CA50296L,0x18E70B603CA50296L};
            uint16_t *****l_3151 = &p_3313->g_1379[4];
            int32_t l_3179 = 0x61617936L;
            int16_t *l_3182 = &p_3313->g_997.f2.f1;
            int16_t *l_3183 = &p_3313->g_962.f2.f1;
            int16_t *l_3184 = &p_3313->g_2949.f1;
            int64_t l_3205 = 0x79EC993A9166CF54L;
            int64_t l_3232[1][6][10] = {{{(-1L),0x6A0AE5329C83EF6EL,0x014C46D851156901L,0x403B675DDA133733L,1L,0x403B675DDA133733L,0x014C46D851156901L,0x6A0AE5329C83EF6EL,(-1L),1L},{(-1L),0x6A0AE5329C83EF6EL,0x014C46D851156901L,0x403B675DDA133733L,1L,0x403B675DDA133733L,0x014C46D851156901L,0x6A0AE5329C83EF6EL,(-1L),1L},{(-1L),0x6A0AE5329C83EF6EL,0x014C46D851156901L,0x403B675DDA133733L,1L,0x403B675DDA133733L,0x014C46D851156901L,0x6A0AE5329C83EF6EL,(-1L),1L},{(-1L),0x6A0AE5329C83EF6EL,0x014C46D851156901L,0x403B675DDA133733L,1L,0x403B675DDA133733L,0x014C46D851156901L,0x6A0AE5329C83EF6EL,(-1L),1L},{(-1L),0x6A0AE5329C83EF6EL,0x014C46D851156901L,0x403B675DDA133733L,1L,0x403B675DDA133733L,0x014C46D851156901L,0x6A0AE5329C83EF6EL,(-1L),1L},{(-1L),0x6A0AE5329C83EF6EL,0x014C46D851156901L,0x403B675DDA133733L,1L,0x403B675DDA133733L,0x014C46D851156901L,0x6A0AE5329C83EF6EL,(-1L),1L}}};
            uint64_t l_3233 = 9UL;
            int32_t l_3243 = 0x0258B179L;
            int32_t l_3245 = 0x44DAEBBAL;
            int32_t l_3249 = 0x0EC6B235L;
            int16_t l_3273 = 0L;
            int64_t *l_3284 = &p_3313->g_1319;
            uint64_t l_3287 = 0UL;
            struct S0 ****l_3288 = &l_3255;
            int i, j, k;
            for (p_3313->g_1632.f1 = (-10); (p_3313->g_1632.f1 > 10); p_3313->g_1632.f1++)
            { /* block id: 1436 */
                return l_3103;
            }
            if (((*p_3313->g_453) |= ((safe_div_func_uint32_t_u_u((l_3106 == &p_3313->g_73), (safe_mod_func_int32_t_s_s(((&p_3313->g_1919[0][1] != (void*)0) , ((safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((-1L) != 0L) , p_3313->g_1632.f2), (safe_unary_minus_func_int8_t_s((((((safe_mul_func_uint16_t_u_u(((*l_3094)++), ((((((l_3120 && 0x068847AFL) == l_3120) && p_3313->g_944.f0) != l_3120) | l_3103) , p_3313->g_217.f0))) , l_3120) >= p_3313->g_216.f3) , (-4L)) < 0x25B2913FL))))), 0x27A47C79L)) && l_3120)), (*l_3068))))) ^ l_3103)))
            { /* block id: 1441 */
                int32_t **l_3124 = (void*)0;
                int32_t **l_3125[2][2];
                uint16_t ********l_3147[4] = {&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011};
                uint16_t ******l_3152 = &l_3150;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_3125[i][j] = &p_3313->g_432[0];
                }
                (*p_3313->g_3131) = ((safe_mod_func_uint16_t_u_u((l_3123 == (p_3313->g_3126 = (void*)0)), (safe_rshift_func_int16_t_s_u(l_3129, 14)))) , p_3313->g_3130[8]);
                if (l_3132[4])
                    continue;
                (*p_3313->g_1672) = l_3154;
            }
            else
            { /* block id: 1453 */
                uint32_t l_3155[10][4][6] = {{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}},{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}},{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}},{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}},{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}},{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}},{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}},{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}},{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}},{{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL},{0xB1AC22BFL,4294967295UL,0xAB202838L,0x63102C27L,0xC412098EL,8UL}}};
                uint16_t ***l_3175 = (void*)0;
                uint16_t ****l_3174 = &l_3175;
                int32_t ***l_3176 = &p_3313->g_1005;
                int16_t *l_3178 = &p_3313->g_105;
                int i, j, k;
                l_3155[8][3][0]++;
                l_3179 &= ((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u((~(!(((*p_3313->g_3131) , ((*l_3154) <= (((((*l_3178) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((void*)0 == (*p_3313->g_73)), 2)), ((((safe_lshift_func_int8_t_s_u((((((*l_3151) != l_3174) , l_3176) != (p_3313->g_447 , l_3177)) | 18446744073709551613UL), (*l_3068))) | (**p_3313->g_3144)) < (*l_3068)) , 1L))) > (*l_3154)) ^ 0x9912FB50L), 13)), p_3313->g_2316[1][3].f1))) , 0UL) == 0x6FL) != p_3313->g_1865[0]))) < 0x1FBF6B091A3D11E8L))), 2)) | (-7L)) , (*l_3068)) != (*l_3123)), l_3155[6][0][3])) < 0x3931C928L), (*l_3068))) & p_3313->g_941.f0);
            }
            if (((safe_mul_func_int16_t_s_s(((*l_3183) = ((*l_3068) , ((*l_3184) &= (-1L)))), ((((safe_mul_func_uint8_t_u_u(p_3313->g_250, (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((((safe_div_func_int64_t_s_s(((*p_3313->g_9) ^ ((*l_3133) &= (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((*l_3154), 8)) , (p_3313->g_1153.f0 | (*p_3313->g_9))), (l_3203 != (p_3313->g_3204 , &p_3313->g_2302)))) > 0x1AL) , 0x56L), (*l_3154))), p_3313->g_221.f0)), p_3313->g_1632.f3)))), p_3313->g_209.f1)) == (*p_3313->g_453)) <= (*l_3068)) <= 0x394D5955A953861BL) >= l_3205), 2)), (*l_3154))))) || 0x9EFFFC5BF919181BL) < 0UL) , 0xE22CL))) , (*p_3313->g_1731)))
            { /* block id: 1461 */
                int8_t l_3222 = 0x7BL;
                uint8_t l_3229 = 0xF9L;
                uint32_t l_3234[2];
                int32_t l_3236 = 0x65CF2657L;
                int32_t l_3242 = 0x4E9A93DAL;
                int32_t l_3244 = 0x264EB3F3L;
                int32_t l_3246 = 9L;
                struct S0 ***l_3257 = &p_3313->g_1280;
                int64_t *l_3264[6][1];
                int64_t **l_3263 = &l_3264[5][0];
                int32_t *l_3268 = &l_3179;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_3234[i] = 9UL;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_3264[i][j] = &p_3313->g_2874[9];
                }
                for (p_3313->g_38 = 0; (p_3313->g_38 > 40); p_3313->g_38++)
                { /* block id: 1464 */
                    uint32_t *l_3225 = (void*)0;
                    uint16_t l_3228 = 0UL;
                    int32_t *l_3231[3];
                    int32_t l_3240 = (-1L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_3231[i] = &l_3179;
                    if ((((safe_unary_minus_func_uint64_t_u((((*l_3123) < (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((l_3232[0][5][0] |= (safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((((((*l_3068) = (safe_rshift_func_int16_t_s_s(((p_3313->g_827 = (((((l_3222 == ((safe_lshift_func_uint16_t_u_u(((p_3313->g_570 = ((*p_3313->g_3153) != (void*)0)) , (*p_3313->g_1605)), 8)) >= ((l_3222 ^ ((((void*)0 != l_3226) != (*l_3123)) , l_3222)) , l_3228))) < (*p_3313->g_9)) > l_3222) || (*l_3123)) >= 0x709EL)) && l_3222), 15))) < 0xC630EB59L) > 1L) >= (-1L)) <= l_3229), l_3230)) != (**p_3313->g_1278)) | 0x4C8CAB6EL), 5))), l_3222)) & (*l_3123)) , (*l_3068)), l_3233)))), l_3234[0]))) || (*l_3068)))) , (*p_3313->g_1280)) == (*p_3313->g_1280)))
                    { /* block id: 1469 */
                        l_3235 = ((void*)0 != l_3225);
                    }
                    else
                    { /* block id: 1471 */
                        uint32_t **l_3237 = (void*)0;
                        int32_t l_3239 = 0x22C91BC7L;
                        l_3236 &= 0x3A60F5E4L;
                        l_3237 = (**l_3106);
                        ++l_3250;
                    }
                    for (p_3313->g_214.f1 = 0; (p_3313->g_214.f1 <= 12); p_3313->g_214.f1 = safe_add_func_uint16_t_u_u(p_3313->g_214.f1, 6))
                    { /* block id: 1478 */
                        struct S0 ****l_3256 = &l_3255;
                        (*p_3313->g_2815) |= (((*l_3256) = l_3255) != ((*l_3123) , l_3257));
                    }
                }
                (*l_3154) ^= ((**p_3313->g_2032) , (safe_lshift_func_uint8_t_u_u(p_3313->g_214.f1, 2)));
                l_3268 = func_58(l_3154, ((*l_3154) , func_18(&p_3313->g_2787[1], ((safe_div_func_int32_t_s_s(((~((p_3313->g_3262 , (void*)0) != ((*l_3263) = &p_3313->g_2874[9]))) != ((safe_mod_func_int8_t_s_s(5L, 0x23L)) , l_3267[1])), (*l_3123))) , (*p_3313->g_2010)), (*p_3313->g_1279), &p_3313->g_1990[6][0][4], p_3313)), (*l_3123), p_3313);
            }
            else
            { /* block id: 1486 */
                int32_t *l_3269 = &l_3248;
                int32_t *l_3270[2];
                int16_t l_3277 = (-3L);
                int i;
                for (i = 0; i < 2; i++)
                    l_3270[i] = &l_3241;
                ++l_3274;
                return l_3277;
            }
            (*p_3313->g_453) &= (p_3313->g_3278 == ((((safe_lshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s(((*l_3068) , ((((*l_3284) = 8L) | 0x99BFAF2FFDB6629EL) <= ((***p_3313->g_2302) == (*l_3154)))), (~((p_3313->g_997.f0 , (*l_3154)) < (safe_add_func_int16_t_s_s(0x5B0BL, l_3287)))))) < 0x52L), (*l_3154))) > (*l_3154)) != (*l_3154)) , l_3288));
        }
        (*p_3313->g_453) |= (*l_3154);
        for (l_3250 = 25; (l_3250 > 5); l_3250 = safe_sub_func_int16_t_s_s(l_3250, 2))
        { /* block id: 1496 */
            (*p_3313->g_3292) = p_3313->g_3291;
        }
    }
    (*p_3313->g_453) &= (safe_mul_func_uint16_t_u_u(((*l_3068) & ((*l_3312) = (((safe_div_func_uint32_t_u_u(((**p_3313->g_2032) , (safe_sub_func_uint8_t_u_u((*l_3068), (p_3313->g_3299 , ((*l_3096) = 1UL))))), (*l_3068))) , ((~(((((*l_3068) && ((*l_3311) ^= ((safe_add_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((((safe_add_func_int8_t_s_s(((*l_3068) > ((*p_3313->g_9) = ((void*)0 != l_3306))), (*l_3068))) < (*l_3068)) > 0L), p_3313->g_489)) != (*l_3068)), l_3307)) != 9UL))) , p_3313->g_931[2].f0) == 18446744073709551614UL) == p_3313->g_1990[3][0][1])) || p_3313->g_213.f0)) || 0x4B01D7CFL))), (-10L)));
    return (*l_3068);
}


/* ------------------------------------------ */
/* 
 * reads : p_3313->g_453 p_3313->g_38 p_3313->g_1280 p_3313->g_2010 p_3313->g_178 p_3313->g_2302 p_3313->g_1278 p_3313->g_1279 p_3313->g_284 p_3313->g_1005 p_3313->g_1006 p_3313->g_3063
 * writes: p_3313->g_119 p_3313->g_38 p_3313->g_248 p_3313->g_1402.f1 p_3313->g_432
 */
int64_t  func_4(int8_t * p_5, uint32_t  p_6, uint32_t  p_7, int8_t * p_8, struct S2 * p_3313)
{ /* block id: 1280 */
    int64_t l_2754 = 0x0C766665F35973C6L;
    int32_t l_2759 = 0x29BEB826L;
    int32_t l_2764 = (-7L);
    int32_t l_2766 = 0x433282ACL;
    int32_t l_2767[2][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L}};
    uint32_t l_2768[8] = {0xC763F512L,0xC763F512L,0xC763F512L,0xC763F512L,0xC763F512L,0xC763F512L,0xC763F512L,0xC763F512L};
    int64_t l_2798 = (-2L);
    int16_t *l_2845 = &p_3313->g_1402[4].f1;
    int32_t *l_2851 = &p_3313->g_222.f0;
    int32_t l_2870 = 0x6602F39DL;
    int16_t l_2882 = 6L;
    int32_t l_2907[9];
    uint16_t *l_2983 = (void*)0;
    uint16_t **l_2982 = &l_2983;
    int32_t l_3049 = 0x7C4D25F0L;
    volatile int32_t *l_3052[1];
    int8_t **l_3054 = &p_3313->g_1168;
    int8_t ***l_3053 = &l_3054;
    uint32_t l_3055[1];
    uint16_t *****l_3060 = &p_3313->g_1379[3];
    int32_t *l_3062 = &p_3313->g_991.f0;
    int32_t l_3064[7][3] = {{0x10EC9C8BL,(-8L),0x10EC9C8BL},{0x10EC9C8BL,(-8L),0x10EC9C8BL},{0x10EC9C8BL,(-8L),0x10EC9C8BL},{0x10EC9C8BL,(-8L),0x10EC9C8BL},{0x10EC9C8BL,(-8L),0x10EC9C8BL},{0x10EC9C8BL,(-8L),0x10EC9C8BL},{0x10EC9C8BL,(-8L),0x10EC9C8BL}};
    uint32_t l_3065 = 0x3C9AF0E4L;
    int i, j;
    for (i = 0; i < 9; i++)
        l_2907[i] = 0x36659FC1L;
    for (i = 0; i < 1; i++)
        l_3052[i] = &p_3313->g_2816[2][3];
    for (i = 0; i < 1; i++)
        l_3055[i] = 4294967291UL;
    (*p_3313->g_453) = 0x02B2CBCAL;
    for (p_3313->g_38 = 0; (p_3313->g_38 < 48); p_3313->g_38 = safe_add_func_uint32_t_u_u(p_3313->g_38, 3))
    { /* block id: 1284 */
        struct S0 ***l_2751 = (void*)0;
        struct S0 ****l_2750[5][2][6] = {{{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0},{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0}},{{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0},{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0}},{{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0},{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0}},{{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0},{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0}},{{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0},{(void*)0,&l_2751,(void*)0,(void*)0,&l_2751,(void*)0}}};
        struct S0 *****l_2749 = &l_2750[1][0][0];
        int32_t l_2762 = (-1L);
        int32_t l_2763 = 1L;
        int32_t *l_2765[3];
        int16_t *l_2785 = &p_3313->g_941.f2.f1;
        uint16_t *l_2786 = &p_3313->g_2698;
        int32_t *l_2855 = &p_3313->g_119;
        int8_t l_2883 = 0x20L;
        uint16_t ***l_2974[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2765[i] = &l_2763;
        for (i = 0; i < 3; i++)
            l_2974[i] = &p_3313->g_173;
        (*p_3313->g_453) = (~(((void*)0 == l_2749) > (l_2754 || (((((l_2759 |= ((l_2754 == p_6) != (l_2754 == p_7))) || (l_2762 = ((l_2759 = (((0x0A31L == (safe_mul_func_int16_t_s_s(p_6, 0x3B7AL))) || l_2762) , p_7)) && p_7))) != l_2763) & 0UL) < l_2764))));
        l_2768[1]++;
        (*p_3313->g_1280) = (void*)0;
    }
    (*p_3313->g_3063) = ((((l_3053 != (void*)0) <= l_3055[0]) < (((safe_add_func_int64_t_s_s((p_6 < (safe_rshift_func_uint8_t_u_s(((((0xEADDL > (((l_3060 == l_3060) || (safe_unary_minus_func_uint16_t_u((!p_6)))) & ((*l_2845) = (p_7 != p_6)))) || p_6) , 0x16A4EA93L) >= (*p_3313->g_2010)), 4))), (***p_3313->g_2302))) , (*p_3313->g_1005)) != l_3062)) , &l_2907[8]);
    --l_3065;
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_16(int8_t * p_17, struct S2 * p_3313)
{ /* block id: 984 */
    int8_t l_2129[3];
    uint16_t ***l_2137 = &p_3313->g_173;
    struct S0 *l_2212 = &p_3313->g_2161;
    int32_t l_2226 = (-1L);
    union U1 *l_2244 = (void*)0;
    int32_t l_2326 = 0x5BF23766L;
    int32_t l_2332 = 0x0031B0BAL;
    int32_t l_2334[9];
    uint8_t *l_2391 = &p_3313->g_827;
    uint32_t **l_2397 = &p_3313->g_2310;
    int32_t *****l_2436[7] = {&p_3313->g_1919[0][1],&p_3313->g_1919[0][0],&p_3313->g_1919[0][1],&p_3313->g_1919[0][1],&p_3313->g_1919[0][0],&p_3313->g_1919[0][1],&p_3313->g_1919[0][1]};
    int8_t ***l_2438[4];
    int32_t l_2464 = 0x2B8882C9L;
    uint32_t l_2502 = 4294967295UL;
    int32_t l_2520 = 0x5AD4F38CL;
    uint32_t l_2527 = 0x1C0E28FFL;
    uint16_t *l_2542 = &p_3313->g_314[3][3][0];
    uint16_t l_2570[4][4][4] = {{{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL}},{{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL}},{{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL}},{{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL},{65535UL,65527UL,65533UL,65527UL}}};
    uint64_t *l_2660 = &p_3313->g_284[8][2];
    int8_t l_2695 = (-1L);
    uint16_t l_2702 = 0xBB9EL;
    int32_t *l_2733 = &l_2226;
    int32_t **l_2736[6][6] = {{&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425},{&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425},{&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425},{&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425},{&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425},{&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425,&p_3313->g_1425}};
    int8_t *l_2745 = &l_2695;
    uint8_t l_2746 = 0x49L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2129[i] = (-1L);
    for (i = 0; i < 9; i++)
        l_2334[i] = 0x022666ADL;
    for (i = 0; i < 4; i++)
        l_2438[i] = (void*)0;
    return l_2746;
}


/* ------------------------------------------ */
/* 
 * reads : p_3313->g_220.f3 p_3313->g_1356 p_3313->g_9 p_3313->g_10 p_3313->g_1734 p_3313->g_330 p_3313->g_1005 p_3313->g_1006 p_3313->g_1745 p_3313->g_827 p_3313->g_211.f3 p_3313->g_453 p_3313->g_119 p_3313->g_1632.f1 p_3313->g_2787
 * writes: p_3313->g_220.f3 p_3313->g_432 p_3313->g_827 p_3313->g_1632.f1
 */
int8_t * func_18(int8_t * p_19, uint32_t  p_20, uint64_t  p_21, int8_t * p_22, struct S2 * p_3313)
{ /* block id: 604 */
    uint32_t *l_1330 = (void*)0;
    int32_t ***l_1337 = &p_3313->g_1005;
    int32_t ***l_1339[6][7] = {{&p_3313->g_1005,(void*)0,(void*)0,&p_3313->g_1005,&p_3313->g_1005,(void*)0,(void*)0},{&p_3313->g_1005,(void*)0,(void*)0,&p_3313->g_1005,&p_3313->g_1005,(void*)0,(void*)0},{&p_3313->g_1005,(void*)0,(void*)0,&p_3313->g_1005,&p_3313->g_1005,(void*)0,(void*)0},{&p_3313->g_1005,(void*)0,(void*)0,&p_3313->g_1005,&p_3313->g_1005,(void*)0,(void*)0},{&p_3313->g_1005,(void*)0,(void*)0,&p_3313->g_1005,&p_3313->g_1005,(void*)0,(void*)0},{&p_3313->g_1005,(void*)0,(void*)0,&p_3313->g_1005,&p_3313->g_1005,(void*)0,(void*)0}};
    int32_t l_1355 = (-1L);
    int32_t l_1370[6] = {0x3E92B00DL,0x6276FEA6L,0x3E92B00DL,0x3E92B00DL,0x6276FEA6L,0x3E92B00DL};
    uint16_t l_1440 = 0xB51EL;
    volatile int16_t * volatile *l_1445 = &p_3313->g_1444[0][2];
    int64_t l_1467 = 0x06E8D3B3CC9E87FAL;
    int16_t l_1471 = 0x300AL;
    uint32_t l_1530[9][8][3] = {{{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL}},{{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL}},{{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL}},{{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL}},{{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL}},{{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL}},{{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL}},{{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL}},{{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL},{0x336E9EE5L,0x3E7A16D9L,0UL}}};
    int8_t *l_1537 = &p_3313->g_121;
    uint8_t *l_1746 = (void*)0;
    uint16_t l_1747 = 0x13B2L;
    uint8_t *l_1748 = &p_3313->g_827;
    int32_t ****l_1803 = &l_1339[0][5];
    uint32_t ****l_1828 = &p_3313->g_73;
    uint16_t *l_1838 = &p_3313->g_38;
    struct S0 ***l_1843 = &p_3313->g_1280;
    int32_t *l_1908 = &p_3313->g_119;
    int32_t *l_2021 = &l_1370[1];
    int32_t *l_2022 = (void*)0;
    int32_t *l_2023[1];
    int32_t l_2024 = 0x39957DAAL;
    int8_t l_2025[5][10][5] = {{{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L}},{{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L}},{{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L}},{{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L}},{{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L},{3L,0x04L,0x4DL,(-5L),3L}}};
    int32_t l_2026[1][1][9];
    int32_t l_2027 = 0x64E29DA9L;
    uint32_t l_2028 = 0x0176F25AL;
    union U1 *l_2031[10][2][1] = {{{&p_3313->g_930},{&p_3313->g_930}},{{&p_3313->g_930},{&p_3313->g_930}},{{&p_3313->g_930},{&p_3313->g_930}},{{&p_3313->g_930},{&p_3313->g_930}},{{&p_3313->g_930},{&p_3313->g_930}},{{&p_3313->g_930},{&p_3313->g_930}},{{&p_3313->g_930},{&p_3313->g_930}},{{&p_3313->g_930},{&p_3313->g_930}},{{&p_3313->g_930},{&p_3313->g_930}},{{&p_3313->g_930},{&p_3313->g_930}}};
    int32_t l_2034 = (-2L);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2023[i] = &p_3313->g_119;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
                l_2026[i][j][k] = 9L;
        }
    }
    for (p_3313->g_220.f3 = 0; (p_3313->g_220.f3 >= 30); p_3313->g_220.f3 = safe_add_func_int32_t_s_s(p_3313->g_220.f3, 5))
    { /* block id: 607 */
        int32_t ****l_1338 = &l_1337;
        uint8_t *l_1340 = (void*)0;
        uint8_t *l_1341[5][9][5] = {{{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440}},{{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440}},{{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440}},{{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440}},{{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440},{&p_3313->g_827,&p_3313->g_827,&p_3313->g_827,&p_3313->g_494,&p_3313->g_440}}};
        int32_t l_1342 = (-2L);
        int32_t l_1354 = 0x03684140L;
        int32_t *l_1369 = &p_3313->g_221.f0;
        int8_t *l_1377 = &p_3313->g_933.f1;
        uint16_t ****l_1381 = (void*)0;
        int32_t l_1386 = 0x02CA3289L;
        int32_t l_1387 = (-6L);
        int32_t l_1388 = 0x3751119CL;
        uint32_t l_1389 = 4294967295UL;
        int16_t *l_1396 = &p_3313->g_105;
        int16_t l_1400 = 9L;
        int8_t l_1407[2][2] = {{0L,0L},{0L,0L}};
        int32_t l_1413[2];
        int16_t l_1469 = 0x5CEFL;
        uint64_t ***l_1525 = &p_3313->g_1278;
        uint16_t l_1526 = 65527UL;
        int64_t *l_1554 = &p_3313->g_1319;
        struct S0 ***l_1670 = &p_3313->g_1280;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1413[i] = 0x01BCDC91L;
        (*p_3313->g_1356) = &l_1354;
        if (p_20)
            continue;
    }
    if ((safe_sub_func_int8_t_s_s((*p_3313->g_9), ((p_3313->g_1734 , &l_1440) == (((p_3313->g_330 , (((**l_1337) == ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((*l_1748) &= (l_1747 = (safe_div_func_int8_t_s_s(((((((safe_div_func_int32_t_s_s((p_20 != (safe_mul_func_int8_t_s_s(0x3BL, (p_21 <= ((((void*)0 == p_22) , 0x77A1BE45L) != p_3313->g_1745))))), 0x22E5A0A9L)) , (*p_3313->g_9)) || (*p_19)) || p_20) == l_1530[8][3][0]) , (*p_19)), l_1530[0][7][0])))) >= p_21) & p_3313->g_211.f3), p_20)), l_1467)) , (**l_1337))) < 3L)) & (*p_3313->g_453)) , &l_1440)))))
    { /* block id: 789 */
        uint8_t l_1749 = 0x49L;
        l_1749++;
    }
    else
    { /* block id: 791 */
        uint8_t l_1756 = 0x5FL;
        uint8_t l_1761[1];
        uint64_t *l_1762[10][2] = {{(void*)0,&p_3313->g_1568},{(void*)0,&p_3313->g_1568},{(void*)0,&p_3313->g_1568},{(void*)0,&p_3313->g_1568},{(void*)0,&p_3313->g_1568},{(void*)0,&p_3313->g_1568},{(void*)0,&p_3313->g_1568},{(void*)0,&p_3313->g_1568},{(void*)0,&p_3313->g_1568},{(void*)0,&p_3313->g_1568}};
        int32_t ****l_1804 = &l_1339[4][0];
        uint32_t l_1805 = 4294967292UL;
        int32_t *l_1860[3][4];
        uint8_t l_1866 = 0x63L;
        int8_t **l_1874 = &p_3313->g_9;
        int32_t **l_1886 = (void*)0;
        int16_t *l_1893 = &p_3313->g_217.f1;
        int16_t **l_1892 = &l_1893;
        uint16_t *****l_1900 = &p_3313->g_1379[7];
        uint64_t l_1906 = 18446744073709551614UL;
        int32_t ****l_1924[8][1][8] = {{{&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920}},{{&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920}},{{&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920}},{{&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920}},{{&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920}},{{&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920}},{{&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920}},{{&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920,&p_3313->g_1920}}};
        union U1 *l_1935 = &p_3313->g_891;
        union U1 **l_1934 = &l_1935;
        int32_t l_1944 = 1L;
        uint64_t ***l_1949 = &p_3313->g_1278;
        uint32_t **l_1955[3];
        uint32_t ***l_1954 = &l_1955[1];
        uint32_t **l_1956 = (void*)0;
        uint16_t l_2008 = 0xFE30L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1761[i] = 0xF4L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_1860[i][j] = &p_3313->g_31;
        }
        for (i = 0; i < 3; i++)
            l_1955[i] = (void*)0;
        (1 + 1);
    }
    --l_2028;
    for (p_3313->g_1632.f1 = 1; (p_3313->g_1632.f1 >= 0); p_3313->g_1632.f1 -= 1)
    { /* block id: 906 */
        uint64_t l_2035 = 0UL;
        uint32_t **l_2044[1];
        int32_t l_2046[6][5] = {{0L,0x5749F3D8L,3L,0x3B6EB939L,3L},{0L,0x5749F3D8L,3L,0x3B6EB939L,3L},{0L,0x5749F3D8L,3L,0x3B6EB939L,3L},{0L,0x5749F3D8L,3L,0x3B6EB939L,3L},{0L,0x5749F3D8L,3L,0x3B6EB939L,3L},{0L,0x5749F3D8L,3L,0x3B6EB939L,3L}};
        union U1 **l_2057 = &l_2031[6][1][0];
        uint64_t **l_2070 = (void*)0;
        uint64_t l_2087 = 0UL;
        struct S0 ****l_2103 = &l_1843;
        int i, j;
        for (i = 0; i < 1; i++)
            l_2044[i] = &p_3313->g_2010;
        (1 + 1);
    }
    return &p_3313->g_447;
}


/* ------------------------------------------ */
/* 
 * reads : p_3313->g_38 p_3313->g_31 p_3313->g_1150.f1 p_3313->g_1279 p_3313->g_284 p_3313->g_881.f0 p_3313->g_965.f0 p_3313->g_453 p_3313->g_119
 * writes: p_3313->g_38 p_3313->g_31 p_3313->g_56 p_3313->g_57 p_3313->g_119
 */
uint8_t  func_25(int32_t  p_26, struct S2 * p_3313)
{ /* block id: 6 */
    int32_t *l_30 = &p_3313->g_31;
    int32_t *l_32 = &p_3313->g_31;
    int32_t l_33[10][7] = {{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L},{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L},{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L},{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L},{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L},{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L},{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L},{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L},{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L},{0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L,0x78487B25L}};
    int32_t *l_34 = (void*)0;
    int32_t *l_35 = (void*)0;
    int32_t *l_36[7][3] = {{&l_33[2][4],(void*)0,&l_33[2][4]},{&l_33[2][4],(void*)0,&l_33[2][4]},{&l_33[2][4],(void*)0,&l_33[2][4]},{&l_33[2][4],(void*)0,&l_33[2][4]},{&l_33[2][4],(void*)0,&l_33[2][4]},{&l_33[2][4],(void*)0,&l_33[2][4]},{&l_33[2][4],(void*)0,&l_33[2][4]}};
    int8_t l_41 = 0x77L;
    int16_t l_599[6][3][2] = {{{0x01B9L,0x2D08L},{0x01B9L,0x2D08L},{0x01B9L,0x2D08L}},{{0x01B9L,0x2D08L},{0x01B9L,0x2D08L},{0x01B9L,0x2D08L}},{{0x01B9L,0x2D08L},{0x01B9L,0x2D08L},{0x01B9L,0x2D08L}},{{0x01B9L,0x2D08L},{0x01B9L,0x2D08L},{0x01B9L,0x2D08L}},{{0x01B9L,0x2D08L},{0x01B9L,0x2D08L},{0x01B9L,0x2D08L}},{{0x01B9L,0x2D08L},{0x01B9L,0x2D08L},{0x01B9L,0x2D08L}}};
    uint64_t *l_1311 = &p_3313->g_921.f2.f3;
    uint32_t l_1327[3][4] = {{0xC6FE0E5BL,0xDC680E18L,0xB188DE6AL,0xDC680E18L},{0xC6FE0E5BL,0xDC680E18L,0xB188DE6AL,0xDC680E18L},{0xC6FE0E5BL,0xDC680E18L,0xB188DE6AL,0xDC680E18L}};
    int i, j, k;
    --p_3313->g_38;
    for (p_3313->g_31 = 0; (p_3313->g_31 <= 2); p_3313->g_31 += 1)
    { /* block id: 10 */
        uint8_t l_42 = 0xE2L;
        uint32_t *l_86[8][7][4] = {{{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56}},{{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56}},{{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56}},{{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56}},{{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56}},{{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56}},{{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56}},{{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,(void*)0,&p_3313->g_56,&p_3313->g_56}}};
        uint32_t **l_85[6] = {&l_86[4][2][1],&l_86[4][2][1],&l_86[4][2][1],&l_86[4][2][1],&l_86[4][2][1],&l_86[4][2][1]};
        int32_t l_87[1];
        int32_t **l_1247 = &l_36[0][2];
        int64_t l_1281 = 0x4F2B35D99BF8AD89L;
        uint16_t ***l_1295[2];
        uint64_t *l_1310 = &p_3313->g_211.f3;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_87[i] = 0L;
        for (i = 0; i < 2; i++)
            l_1295[i] = &p_3313->g_173;
        for (p_3313->g_38 = 0; (p_3313->g_38 <= 2); p_3313->g_38 += 1)
        { /* block id: 13 */
            int32_t l_43 = 0L;
            uint32_t **l_45 = (void*)0;
            uint32_t ***l_44 = &l_45;
            uint32_t *l_55 = &p_3313->g_56;
            int i, j;
            l_36[(p_3313->g_31 + 1)][p_3313->g_31] = l_36[p_3313->g_31][p_3313->g_38];
            l_43 &= ((l_41 &= l_33[(p_3313->g_31 + 1)][p_3313->g_38]) == (l_42 = p_26));
            (*l_44) = (void*)0;
            p_3313->g_57 = (l_33[(p_3313->g_31 + 1)][p_3313->g_38] |= (p_26 == (safe_div_func_int64_t_s_s(((p_3313->g_31 != ((*l_55) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0xA02DL, p_3313->g_31)), (safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_u(p_26, 0)))))))) >= p_26), 18446744073709551614UL))));
        }
    }
    (*p_3313->g_453) &= ((safe_div_func_uint32_t_u_u((((((p_26 , (*l_30)) ^ (p_3313->g_1150[3].f1 == ((0x7943A0D4L & ((4294967294UL & 0L) == ((safe_add_func_int8_t_s_s((1L ^ l_1327[0][1]), (*l_32))) , (*p_3313->g_1279)))) > p_3313->g_881.f0))) & 0x177E71A5L) && p_3313->g_965.f0) == 0x78L), p_26)) == 1L);
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_3313->g_212.f0 p_3313->g_211.f3 p_3313->g_917.f0 p_3313->g_9 p_3313->g_10 p_3313->g_119 p_3313->g_214.f0 p_3313->g_178 p_3313->g_56 p_3313->g_969.f0 p_3313->g_218.f0 p_3313->g_412 p_3313->g_221.f0 p_3313->g_879.f0 p_3313->g_494 p_3313->g_925.f0 p_3313->g_944.f0 p_3313->g_965.f0 p_3313->g_932.f0 p_3313->g_1126 p_3313->g_2491
 * writes: p_3313->g_222.f0 p_3313->g_178 p_3313->g_212.f0 p_3313->g_211.f3 p_3313->g_284 p_3313->g_119 p_3313->g_968.f2.f1 p_3313->g_205 p_3313->g_37 p_3313->g_218.f0 p_3313->g_412 p_3313->g_221.f0 p_3313->g_879.f0 p_3313->g_494 p_3313->g_56 p_3313->g_38 p_3313->g_1126 p_3313->g_2491
 */
int32_t * func_58(uint32_t * p_59, int8_t * p_60, uint64_t  p_61, struct S2 * p_3313)
{ /* block id: 420 */
    int32_t *l_883 = &p_3313->g_119;
    int32_t *l_884[3][7] = {{&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119},{&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119},{&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119,&p_3313->g_119}};
    uint8_t l_885 = 0xF0L;
    union U1 *l_996 = &p_3313->g_997;
    int32_t **l_1007[6] = {&p_3313->g_1006,&p_3313->g_1006,&p_3313->g_1006,&p_3313->g_1006,&p_3313->g_1006,&p_3313->g_1006};
    struct S0 *l_1149 = &p_3313->g_1150[3];
    int32_t **l_1200 = &l_883;
    int32_t ***l_1199 = &l_1200;
    int16_t l_1208[8] = {0x7168L,0x7168L,0x7168L,0x7168L,0x7168L,0x7168L,0x7168L,0x7168L};
    int i, j;
    for (p_3313->g_222.f0 = 0; p_3313->g_222.f0 < 3; p_3313->g_222.f0 += 1)
    {
        p_3313->g_178[p_3313->g_222.f0] = 0x2C184558L;
    }
lbl_1233:
    l_885--;
    for (p_3313->g_212.f0 = (-4); (p_3313->g_212.f0 <= (-4)); p_3313->g_212.f0 = safe_add_func_int8_t_s_s(p_3313->g_212.f0, 7))
    { /* block id: 425 */
        int64_t *l_913 = &p_3313->g_37;
        int64_t l_914 = 0x0D889AF3A0B1953CL;
        int32_t *l_1003 = &p_3313->g_973.f0;
        int32_t **l_1002 = &l_1003;
        uint32_t l_1023 = 4294967295UL;
        int32_t l_1076 = 1L;
        int8_t l_1078 = (-1L);
        int32_t l_1084 = 0x7711F5BCL;
        int32_t l_1085[9];
        struct S0 *l_1152 = &p_3313->g_1153;
        uint32_t l_1155 = 4294967291UL;
        uint32_t ****l_1188[1][5] = {{&p_3313->g_73,&p_3313->g_73,&p_3313->g_73,&p_3313->g_73,&p_3313->g_73}};
        uint64_t *l_1198 = &p_3313->g_284[9][4];
        int32_t ****l_1201 = &l_1199;
        int16_t *l_1229 = &p_3313->g_968.f2.f1;
        int16_t *l_1230 = &p_3313->g_205[4];
        int i, j;
        for (i = 0; i < 9; i++)
            l_1085[i] = 1L;
        for (p_3313->g_211.f3 = 1; (p_3313->g_211.f3 <= 4); p_3313->g_211.f3 += 1)
        { /* block id: 428 */
            union U1 *l_890 = &p_3313->g_891;
            int64_t *l_900[7] = {&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37};
            int32_t l_910 = 0x63452518L;
            int32_t l_915 = 0x4DED645BL;
            int32_t ***l_1004 = (void*)0;
            int32_t ***l_1008 = (void*)0;
            int32_t ***l_1009 = &l_1007[0];
            int32_t *l_1044 = &p_3313->g_119;
            struct S0 **l_1045[4];
            int32_t l_1079 = 0x05AF6588L;
            int32_t l_1081 = 0x17AFBD30L;
            int32_t l_1082 = (-5L);
            int32_t l_1083 = 0x4C266D96L;
            int32_t l_1089 = 0x09349FB0L;
            int32_t l_1090 = (-1L);
            int32_t l_1092 = (-1L);
            int32_t l_1093 = 0x2EFE68BEL;
            int32_t l_1094 = 0x3ED3B6D0L;
            int32_t l_1095 = (-10L);
            int32_t l_1097 = 0x1A41D582L;
            int32_t l_1098 = 0x57AA4D3DL;
            int32_t l_1099 = (-7L);
            int32_t l_1100[6][8][5] = {{{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)}},{{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)}},{{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)}},{{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)}},{{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)}},{{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)},{4L,0x69487BE9L,0L,0x2AB15750L,(-1L)}}};
            uint32_t *l_1125 = &p_3313->g_1126[2][0][0];
            int16_t *l_1127 = &p_3313->g_748.f2.f1;
            uint64_t *l_1134 = (void*)0;
            uint64_t *l_1135 = &p_3313->g_986.f2.f3;
            uint64_t *l_1136 = &p_3313->g_941.f2.f3;
            uint32_t ****l_1164 = &p_3313->g_73;
            int8_t l_1165 = 6L;
            int8_t *l_1169 = &l_1078;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1045[i] = &p_3313->g_248[1];
            (1 + 1);
        }
        (*l_883) = (safe_sub_func_int32_t_s_s(((((*l_1198) = (safe_mul_func_int16_t_s_s(p_61, p_61))) && (((((*l_1201) = l_1199) != &l_1200) > ((((safe_sub_func_uint16_t_u_u((&p_3313->g_173 == (void*)0), (p_61 < (((safe_rshift_func_int16_t_s_u(p_61, (safe_rshift_func_uint16_t_u_u((6UL ^ p_3313->g_917.f0), 3)))) >= 0x2DB5L) <= p_61)))) , 1UL) , p_61) | l_1208[4])) ^ (*p_3313->g_9))) == p_61), 0xB70274F1L));
        if (((****l_1201) || (((safe_lshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((((*l_913) = (~(safe_mul_func_int16_t_s_s(0x0F82L, (p_61 >= ((*l_1230) = (((*l_1199) != (*l_1199)) >= ((*l_1229) = (((((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((*l_883), 6)) & (((void*)0 == &p_3313->g_284[4][2]) | (safe_div_func_uint64_t_u_u(0x2D7F7C7F744B6E1AL, p_61)))), (****l_1201))), p_3313->g_214.f0)) || p_61), (*p_59))) > p_3313->g_969.f0) | 255UL) > p_61) == 0x2274L))))))))) >= (*l_883)), 65529UL)), (****l_1201))) | (****l_1201)) , (-4L)), 11)) , &p_3313->g_1006) != (void*)0)))
        { /* block id: 515 */
            int32_t *l_1235 = &l_1085[7];
            int32_t l_1246[8];
            int i;
            for (i = 0; i < 8; i++)
                l_1246[i] = (-3L);
            for (p_3313->g_218.f0 = 0; (p_3313->g_218.f0 != (-11)); p_3313->g_218.f0 = safe_sub_func_int16_t_s_s(p_3313->g_218.f0, 2))
            { /* block id: 518 */
                uint8_t l_1238 = 0xBAL;
                uint16_t *l_1241[5] = {&p_3313->g_314[3][3][0],&p_3313->g_314[3][3][0],&p_3313->g_314[3][3][0],&p_3313->g_314[3][3][0],&p_3313->g_314[3][3][0]};
                int i;
                for (p_3313->g_412 = 0; (p_3313->g_412 <= 0); p_3313->g_412 += 1)
                { /* block id: 521 */
                    if (p_61)
                        goto lbl_1233;
                }
                for (p_3313->g_221.f0 = 0; (p_3313->g_221.f0 >= 0); p_3313->g_221.f0 -= 1)
                { /* block id: 526 */
                    for (p_3313->g_879.f0 = 6; (p_3313->g_879.f0 >= 2); p_3313->g_879.f0 -= 1)
                    { /* block id: 529 */
                        int32_t *l_1234 = &l_1085[7];
                        return p_59;
                    }
                    return p_59;
                }
                for (p_3313->g_494 = 3; (p_3313->g_494 <= 8); p_3313->g_494 += 1)
                { /* block id: 536 */
                    int i;
                    l_1085[p_3313->g_494] = (+(p_61 ^ 1UL));
                    (***l_1201) = (*l_1200);
                    if (p_61)
                        continue;
                }
                (*l_883) = (1UL & ((****l_1201) ^ ((safe_add_func_int8_t_s_s(((((((*p_59) = 0xFE2307CBL) ^ l_1238) ^ ((((((!p_3313->g_925.f0) || ((((*l_1235) = (safe_rshift_func_int8_t_s_u(0x50L, p_3313->g_944.f0))) && (safe_add_func_uint64_t_u_u((l_1238 , (safe_lshift_func_uint16_t_u_s((**l_1200), 12))), p_61))) | (****l_1201))) < p_3313->g_965.f0) && l_1246[1]) != 65535UL) || 0x905952D0A2049734L)) , p_3313->g_218.f0) ^ p_3313->g_932.f0), (****l_1201))) || 0x8DB807ACC3037810L)));
            }
        }
        else
        { /* block id: 545 */
            for (p_3313->g_38 = 0; p_3313->g_38 < 1; p_3313->g_38 += 1)
            {
                for (p_3313->g_119 = 0; p_3313->g_119 < 5; p_3313->g_119 += 1)
                {
                    l_1188[p_3313->g_38][p_3313->g_119] = &p_3313->g_73;
                }
            }
        }
    }
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_3313->g_121 p_3313->g_10 p_3313->g_145 p_3313->g_56 p_3313->g_9 p_3313->g_119 p_3313->g_222.f1 p_3313->g_284 p_3313->g_221.f3 p_3313->g_219.f3 p_3313->g_494 p_3313->g_211.f0 p_3313->g_205 p_3313->g_209.f3 p_3313->g_314 p_3313->g_178 p_3313->g_220.f1 p_3313->g_462 p_3313->g_218.f3 p_3313->g_714 p_3313->g_449 p_3313->g_570 p_3313->g_674.f0 p_3313->g_217.f0 p_3313->g_212.f3 p_3313->g_216.f3 p_3313->g_249.f1 p_3313->g_362 p_3313->g_219.f0 p_3313->g_827 p_3313->g_210.f1 p_3313->g_249.f0 p_3313->g_211.f1 p_3313->g_249.f3 p_3313->g_202 p_3313->g_440 p_3313->g_222.f3
 * writes: p_3313->g_222.f3 p_3313->g_119 p_3313->g_221.f3 p_3313->g_222.f1 p_3313->g_494 p_3313->g_440 p_3313->g_453 p_3313->g_214.f1 p_3313->g_56 p_3313->g_362 p_3313->g_432 p_3313->g_213.f1 p_3313->g_38 p_3313->g_220.f1 p_3313->g_178 p_3313->g_218.f3 p_3313->g_570 p_3313->g_314 p_3313->g_284 p_3313->g_249.f1 p_3313->g_10 p_3313->g_145 p_3313->g_219.f3 p_3313->g_211.f3 p_3313->g_216.f3 p_3313->g_827 p_3313->g_248
 */
uint32_t * func_62(int8_t * p_63, int32_t  p_64, int64_t  p_65, int32_t  p_66, int32_t  p_67, struct S2 * p_3313)
{ /* block id: 256 */
    uint32_t ****l_613 = &p_3313->g_73;
    int8_t *l_614 = &p_3313->g_10;
    uint16_t l_615 = 65535UL;
    int32_t l_620 = (-1L);
    int32_t l_621 = 1L;
    uint64_t *l_629 = &p_3313->g_214.f3;
    uint32_t l_677[5][4][10] = {{{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL}},{{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL}},{{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL}},{{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL}},{{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL},{6UL,0UL,4294967295UL,0x889FECC9L,8UL,8UL,0x889FECC9L,4294967295UL,0UL,6UL}}};
    int32_t *l_709 = &l_621;
    int16_t *l_743 = (void*)0;
    int16_t **l_742 = &l_743;
    int16_t l_768 = 0x1465L;
    int64_t l_779 = 0x5C689E5004CDDF90L;
    int32_t l_786 = 1L;
    int32_t l_787 = 9L;
    int32_t l_789 = 0x250D53B5L;
    int32_t l_791 = 0x0A5B9D50L;
    int32_t l_792 = 0x3F84961AL;
    int32_t l_793 = (-3L);
    uint32_t l_794 = 1UL;
    int32_t l_817[6];
    struct S0 *l_878 = &p_3313->g_879;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_817[i] = (-3L);
lbl_800:
    for (p_3313->g_222.f3 = 0; (p_3313->g_222.f3 <= 13); p_3313->g_222.f3 = safe_add_func_int8_t_s_s(p_3313->g_222.f3, 5))
    { /* block id: 259 */
        uint32_t ****l_612 = &p_3313->g_73;
        int32_t l_617 = (-1L);
        struct S0 **l_634 = &p_3313->g_248[1];
        union U1 **l_675 = (void*)0;
        int32_t *l_697[8][2][5] = {{{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0},{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0}},{{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0},{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0}},{{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0},{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0}},{{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0},{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0}},{{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0},{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0}},{{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0},{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0}},{{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0},{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0}},{{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0},{&p_3313->g_240,&p_3313->g_674.f0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_708 = &l_617;
        int i, j, k;
        if ((safe_rshift_func_int8_t_s_s(((p_67 >= (safe_lshift_func_int8_t_s_s((*p_63), 5))) , (safe_div_func_int8_t_s_s(((-1L) < ((safe_sub_func_int32_t_s_s((p_67 = (p_3313->g_56 && ((safe_rshift_func_int16_t_s_s((p_64 | (((l_612 != l_613) , ((void*)0 == l_614)) || 1UL)), p_65)) <= (*p_63)))), p_64)) == l_615)), l_615))), (*p_3313->g_9))))
        { /* block id: 261 */
            int32_t *l_616 = &p_3313->g_119;
            (*l_616) |= (&p_3313->g_145 == &p_3313->g_447);
            (*l_616) = p_67;
            if (l_617)
                break;
        }
        else
        { /* block id: 265 */
            uint16_t l_622 = 0xD2C5L;
            uint8_t *l_635 = &p_3313->g_494;
            uint32_t *l_637 = &p_3313->g_56;
            int32_t l_686 = 0x11CEB488L;
            uint32_t **l_706 = &l_637;
            if (p_65)
                break;
            for (p_3313->g_221.f3 = 0; (p_3313->g_221.f3 <= 0); p_3313->g_221.f3 += 1)
            { /* block id: 269 */
                int32_t *l_618[7][6] = {{&l_617,&l_617,&l_617,&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617,&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617,&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617,&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617,&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617,&l_617,&l_617,&l_617},{&l_617,&l_617,&l_617,&l_617,&l_617,&l_617}};
                int64_t l_619 = 0x41F1BEBE43AAA940L;
                int i, j;
                --l_622;
                for (p_3313->g_222.f1 = 4; (p_3313->g_222.f1 >= 0); p_3313->g_222.f1 -= 1)
                { /* block id: 273 */
                    int i, j;
                    l_617 ^= (safe_mod_func_uint32_t_u_u(p_3313->g_284[(p_3313->g_222.f1 + 2)][p_3313->g_222.f1], (safe_rshift_func_int16_t_s_u(p_3313->g_284[(p_3313->g_221.f3 + 7)][p_3313->g_222.f1], 6))));
                }
            }
            l_620 |= (-9L);
            if ((((((*l_635) ^= ((((l_620 <= ((void*)0 != l_629)) >= (safe_mul_func_int16_t_s_s(p_3313->g_219.f3, ((safe_add_func_int16_t_s_s(((((l_634 == (void*)0) < (l_622 < ((void*)0 != p_63))) ^ 0x1D09L) != 0xC4L), p_66)) == 0x81L)))) && (*p_3313->g_9)) <= 255UL)) && 0xD0L) , l_617) < p_3313->g_211.f0))
            { /* block id: 279 */
                uint8_t l_671 = 1UL;
                union U1 *l_673 = &p_3313->g_674;
                union U1 **l_672 = &l_673;
                int32_t **l_680 = (void*)0;
                int32_t **l_681 = &p_3313->g_432[0];
                for (p_3313->g_440 = 0; (p_3313->g_440 <= 0); p_3313->g_440 += 1)
                { /* block id: 282 */
                    int32_t **l_636 = &p_3313->g_453;
                    (*l_636) = &p_3313->g_119;
                    for (p_3313->g_214.f1 = 0; (p_3313->g_214.f1 <= 0); p_3313->g_214.f1 += 1)
                    { /* block id: 286 */
                        return l_637;
                    }
                }
                for (l_621 = 0; (l_621 >= 13); l_621++)
                { /* block id: 292 */
                    uint8_t l_646 = 252UL;
                    uint32_t *l_649 = &p_3313->g_178[0];
                    int32_t l_662[1];
                    int16_t *l_676 = &p_3313->g_362[0];
                    int32_t **l_678 = (void*)0;
                    int32_t **l_679 = &p_3313->g_432[0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_662[i] = 0x072052BDL;
                    for (p_3313->g_56 = 0; (p_3313->g_56 < 52); p_3313->g_56 = safe_add_func_uint32_t_u_u(p_3313->g_56, 1))
                    { /* block id: 295 */
                        int32_t *l_642 = &l_617;
                        int32_t *l_643 = &l_617;
                        int32_t *l_644 = &l_620;
                        int32_t *l_645[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_645[i] = (void*)0;
                        --l_646;
                        return l_649;
                    }
                    p_67 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_65, (((((((void*)0 != &p_3313->g_453) >= p_3313->g_205[5]) ^ (2UL > ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(7UL, ((*l_676) = (((((safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((l_662[0] &= l_620) , l_621), (safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((l_646 | 0x5E9BL) < l_622), 13)) <= l_671), l_671)), l_646)), p_3313->g_209.f3)))), p_65)) , l_672) != l_675) != p_64) | l_617)))), l_617)) && l_677[1][0][9]))) <= l_646) , l_621) != (*p_3313->g_9)))), 10));
                    if (l_671)
                        continue;
                    (*l_679) = &l_620;
                }
                if (l_677[4][3][3])
                    continue;
                (*l_681) = &p_3313->g_119;
            }
            else
            { /* block id: 307 */
                uint16_t *l_690 = &l_622;
                uint16_t **l_689 = &l_690;
                uint16_t *l_692 = (void*)0;
                uint16_t **l_691 = &l_692;
                int8_t l_693 = 3L;
                p_66 = ((l_617 , (((*p_3313->g_9) | (((safe_mul_func_int8_t_s_s(0x47L, (((*l_635) = (safe_lshift_func_int16_t_s_s(((l_686 = p_65) , ((safe_sub_func_int64_t_s_s(((((*l_689) = &l_622) != ((*l_691) = &l_615)) , l_677[3][0][9]), ((*p_3313->g_9) >= 0xFAL))) || l_693)), p_64))) && 0x1EL))) == 4294967287UL) >= p_65)) == (*p_63))) != p_3313->g_314[4][3][0]);
                if (l_686)
                    continue;
                for (p_3313->g_213.f1 = 0; (p_3313->g_213.f1 >= 0); p_3313->g_213.f1 -= 1)
                { /* block id: 316 */
                    uint32_t *l_695 = &p_3313->g_178[0];
                    int32_t l_696 = (-6L);
                    for (p_3313->g_38 = 0; (p_3313->g_38 <= 0); p_3313->g_38 += 1)
                    { /* block id: 319 */
                        uint32_t *l_694[2][6];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_694[i][j] = &l_677[1][0][9];
                        }
                        return l_695;
                    }
                    l_696 = l_693;
                    for (p_3313->g_220.f1 = 0; (p_3313->g_220.f1 <= 0); p_3313->g_220.f1 += 1)
                    { /* block id: 325 */
                        int32_t **l_698 = &l_697[0][0][2];
                        uint8_t *l_703 = &p_3313->g_440;
                        int32_t *l_707 = &p_3313->g_119;
                        int i, j, k;
                        (*l_707) = ((((*l_695) = ((p_3313->g_178[1] , (((*l_698) = l_697[0][0][2]) != p_3313->g_462[p_3313->g_220.f1][p_3313->g_220.f1][(p_3313->g_220.f1 + 8)])) , ((&p_64 != (void*)0) != ((safe_div_func_uint8_t_u_u(((*l_703) = (++(*l_635))), 0x2BL)) , (safe_sub_func_int32_t_s_s(l_620, ((l_706 = &l_637) != &l_695))))))) || 0x7AF05DC7L) , l_696);
                    }
                }
            }
        }
        (*l_708) |= 0x427B6566L;
    }
    (*l_709) ^= 0x56668C38L;
    for (p_3313->g_218.f3 = 0; (p_3313->g_218.f3 != 21); p_3313->g_218.f3 = safe_add_func_int8_t_s_s(p_3313->g_218.f3, 9))
    { /* block id: 341 */
        int32_t *l_712 = &p_3313->g_119;
        int32_t **l_713[5][4] = {{&p_3313->g_432[0],&p_3313->g_453,&l_712,&p_3313->g_453},{&p_3313->g_432[0],&p_3313->g_453,&l_712,&p_3313->g_453},{&p_3313->g_432[0],&p_3313->g_453,&l_712,&p_3313->g_453},{&p_3313->g_432[0],&p_3313->g_453,&l_712,&p_3313->g_453},{&p_3313->g_432[0],&p_3313->g_453,&l_712,&p_3313->g_453}};
        int i, j;
        p_3313->g_453 = l_712;
    }
    if (((*l_709) = (p_67 & p_3313->g_714)))
    { /* block id: 345 */
        int16_t l_744 = 0x130BL;
        int32_t l_745[4][3] = {{(-6L),0L,(-6L)},{(-6L),0L,(-6L)},{(-6L),0L,(-6L)},{(-6L),0L,(-6L)}};
        int32_t l_771[2][10];
        int32_t l_772 = 0x3A81DE58L;
        int8_t l_790 = 0x39L;
        uint32_t *l_797[6][10][4] = {{{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]}},{{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]}},{{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]}},{{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]}},{{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]}},{{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]},{(void*)0,&l_677[3][0][0],&l_677[2][3][5],&l_677[1][3][2]}}};
        int32_t **l_799 = &p_3313->g_432[0];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 10; j++)
                l_771[i][j] = 0x2FAD1689L;
        }
        if (((void*)0 == p_3313->g_449[0][0]))
        { /* block id: 346 */
            uint32_t *l_717[8] = {&p_3313->g_56,&p_3313->g_56,&p_3313->g_56,&p_3313->g_56,&p_3313->g_56,&p_3313->g_56,&p_3313->g_56,&p_3313->g_56};
            uint16_t *l_728 = &p_3313->g_314[8][3][0];
            uint64_t *l_739 = (void*)0;
            uint64_t *l_740[5] = {&p_3313->g_284[0][4],&p_3313->g_284[0][4],&p_3313->g_284[0][4],&p_3313->g_284[0][4],&p_3313->g_284[0][4]};
            int16_t *l_741 = &p_3313->g_249[1].f1;
            union U1 *l_747 = &p_3313->g_748;
            union U1 **l_746 = &l_747;
            int i;
            for (p_3313->g_570 = 0; (p_3313->g_570 <= 18); ++p_3313->g_570)
            { /* block id: 349 */
                return &p_3313->g_178[2];
            }
            (*l_709) = (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((&p_3313->g_284[7][2] != (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(p_64, p_66)), 4)), 5)) & (((*l_728)--) & (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((((!(*p_3313->g_9)) ^ (*p_63)) != (l_744 = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((((4294967291UL == (((0x10A3B37EB9DA1922L >= (p_3313->g_284[7][3] = (*l_709))) ^ ((*l_741) = (-2L))) < (*l_709))) | p_67) , l_742) == (void*)0), 10)), (*l_709))))), (*p_63))), p_65)))) , l_740[3])), p_3313->g_674.f0)), l_745[0][0]));
            (*l_746) = (void*)0;
        }
        else
        { /* block id: 358 */
            int32_t l_757 = 0x79625928L;
            int32_t *l_769[5] = {&l_620,&l_620,&l_620,&l_620,&l_620};
            uint64_t *l_770 = &p_3313->g_284[8][2];
            int i;
            l_772 &= (((((((4294967295UL >= (safe_lshift_func_int8_t_s_u(((*l_709) , (safe_rshift_func_int8_t_s_s(((((*l_770) = ((safe_mul_func_int16_t_s_s(((((safe_add_func_int32_t_s_s(l_757, (*l_709))) <= ((((safe_sub_func_uint8_t_u_u((((((!(l_613 != (((safe_mul_func_int8_t_s_s(((*l_614) = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((4L & l_745[0][0]) , (~(p_67 ^= (l_745[2][0] = (((safe_add_func_int64_t_s_s(((-1L) < l_745[0][0]), l_768)) > (*p_63)) > (*p_63)))))) == p_66), (*p_3313->g_9))) || (*p_3313->g_9)), l_744))), p_3313->g_217.f0)) , p_3313->g_121) , (void*)0))) ^ p_3313->g_211.f0) | (*l_709)) && p_67) | p_3313->g_212.f3), 0x98L)) , 0xDFA3L) > 1L) & 0UL)) != (*l_709)) != p_3313->g_216.f3), l_744)) | p_65)) != l_771[1][1]) > 0x31D27D66554B8184L), p_3313->g_249[1].f1))), 0))) != 18446744073709551615UL) , 0x07EFL) < (-1L)) || p_67) , (-4L)) ^ 0x60L);
        }
        if (l_745[0][0])
        { /* block id: 365 */
            int32_t *l_773 = &p_3313->g_119;
            int32_t *l_774 = &l_621;
            int32_t *l_775 = &l_771[1][1];
            int32_t *l_776 = (void*)0;
            int32_t *l_777 = &p_3313->g_119;
            int32_t l_778 = (-4L);
            int32_t *l_780 = (void*)0;
            int32_t *l_781 = &l_778;
            int32_t *l_782 = &l_778;
            int32_t *l_783 = (void*)0;
            int32_t *l_784 = &l_771[1][1];
            int32_t *l_785[9][8][3] = {{{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778}},{{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778}},{{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778}},{{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778}},{{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778}},{{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778}},{{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778}},{{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778}},{{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778},{&l_772,(void*)0,&l_778}}};
            int32_t l_788 = 0x000EEF5FL;
            int i, j, k;
            ++l_794;
        }
        else
        { /* block id: 367 */
            uint32_t *l_798 = &p_3313->g_178[0];
            return l_798;
        }
        p_3313->g_432[1] = &p_67;
        (*l_799) = &p_66;
    }
    else
    { /* block id: 372 */
        int32_t *l_801 = &p_3313->g_119;
        int16_t *l_806[6] = {&p_3313->g_220.f1,&p_3313->g_105,&p_3313->g_220.f1,&p_3313->g_220.f1,&p_3313->g_105,&p_3313->g_220.f1};
        int32_t l_822 = 1L;
        int8_t l_823[4] = {0x76L,0x76L,0x76L,0x76L};
        int32_t l_825 = 0x0367A373L;
        int32_t l_826[9][1] = {{0x37DC430FL},{0x37DC430FL},{0x37DC430FL},{0x37DC430FL},{0x37DC430FL},{0x37DC430FL},{0x37DC430FL},{0x37DC430FL},{0x37DC430FL}};
        union U1 *l_833 = (void*)0;
        union U1 **l_832 = &l_833;
        uint64_t *l_848[8] = {&p_3313->g_284[4][3],&p_3313->g_284[4][3],&p_3313->g_284[4][3],&p_3313->g_284[4][3],&p_3313->g_284[4][3],&p_3313->g_284[4][3],&p_3313->g_284[4][3],&p_3313->g_284[4][3]};
        struct S0 *l_880[1][3];
        struct S0 **l_882 = &p_3313->g_248[1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_880[i][j] = &p_3313->g_881;
        }
        if (p_64)
            goto lbl_800;
        (*l_801) ^= (*l_709);
        for (p_3313->g_145 = 5; (p_3313->g_145 >= 0); p_3313->g_145 -= 1)
        { /* block id: 377 */
            int32_t **l_815[6];
            union U1 *l_831 = (void*)0;
            union U1 **l_830 = &l_831;
            uint32_t l_852 = 8UL;
            int i;
            for (i = 0; i < 6; i++)
                l_815[i] = &p_3313->g_453;
            (*l_801) = 2L;
            for (p_3313->g_219.f3 = 0; (p_3313->g_219.f3 <= 7); p_3313->g_219.f3 += 1)
            { /* block id: 381 */
                int32_t l_816 = 1L;
                int32_t l_818[1][4];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_818[i][j] = (-1L);
                }
                for (l_791 = 0; (l_791 >= 0); l_791 -= 1)
                { /* block id: 384 */
                    int32_t **l_805 = &l_801;
                    int i;
                    for (p_3313->g_211.f3 = 0; (p_3313->g_211.f3 <= 7); p_3313->g_211.f3 += 1)
                    { /* block id: 387 */
                        uint32_t *l_802 = &l_677[1][0][9];
                        return &p_3313->g_56;
                    }
                    (*l_709) = ((((((((((safe_mod_func_uint32_t_u_u((p_3313->g_178[0] |= ((p_3313->g_362[(l_791 + 1)] , l_805) == ((((((*l_742) = l_806[0]) == (void*)0) == 0xB3B3AF45L) , (p_3313->g_362[(p_3313->g_145 + 1)] , ((safe_mod_func_uint8_t_u_u(((**l_805) > ((safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(((0x3286L <= (safe_div_func_int16_t_s_s(0L, (-10L)))) == 0xEE5CD0A2L), (-2L))) == p_64), 7)) > 0x24A3511F86F3DF9DL)), 0x84L)) , p_66))) , l_815[4]))), 1L)) < l_816) == 0x309181C3L) | 0x5D15L) >= l_816) != l_817[1]) > (**l_805)) ^ 0xEBCDL) , (*l_709)) > p_3313->g_219.f0);
                }
                for (p_3313->g_216.f3 = 0; (p_3313->g_216.f3 <= 0); p_3313->g_216.f3 += 1)
                { /* block id: 396 */
                    int8_t l_819 = 0x0BL;
                    int32_t l_820 = 0L;
                    int32_t l_821 = (-3L);
                    int32_t l_824[6][4][5] = {{{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)}},{{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)}},{{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)}},{{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)}},{{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)}},{{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)},{(-1L),9L,(-5L),(-1L),(-1L)}}};
                    uint16_t *l_837 = &p_3313->g_38;
                    int i, j, k;
                    ++p_3313->g_827;
                    p_67 |= (l_830 != l_832);
                    for (p_3313->g_211.f3 = 1; (p_3313->g_211.f3 <= 7); p_3313->g_211.f3 += 1)
                    { /* block id: 401 */
                        int32_t *l_836[10] = {&p_3313->g_212.f0,&p_3313->g_218.f0,&p_3313->g_211.f0,&p_3313->g_218.f0,&p_3313->g_212.f0,&p_3313->g_212.f0,&p_3313->g_218.f0,&p_3313->g_211.f0,&p_3313->g_218.f0,&p_3313->g_212.f0};
                        uint16_t *l_839 = &l_615;
                        uint16_t **l_838 = &l_839;
                        uint32_t *l_851[8][6] = {{&p_3313->g_56,&p_3313->g_178[(p_3313->g_216.f3 + 2)],(void*)0,&p_3313->g_178[(p_3313->g_216.f3 + 2)],&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,&p_3313->g_178[(p_3313->g_216.f3 + 2)],(void*)0,&p_3313->g_178[(p_3313->g_216.f3 + 2)],&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,&p_3313->g_178[(p_3313->g_216.f3 + 2)],(void*)0,&p_3313->g_178[(p_3313->g_216.f3 + 2)],&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,&p_3313->g_178[(p_3313->g_216.f3 + 2)],(void*)0,&p_3313->g_178[(p_3313->g_216.f3 + 2)],&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,&p_3313->g_178[(p_3313->g_216.f3 + 2)],(void*)0,&p_3313->g_178[(p_3313->g_216.f3 + 2)],&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,&p_3313->g_178[(p_3313->g_216.f3 + 2)],(void*)0,&p_3313->g_178[(p_3313->g_216.f3 + 2)],&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,&p_3313->g_178[(p_3313->g_216.f3 + 2)],(void*)0,&p_3313->g_178[(p_3313->g_216.f3 + 2)],&p_3313->g_56,&p_3313->g_56},{&p_3313->g_56,&p_3313->g_178[(p_3313->g_216.f3 + 2)],(void*)0,&p_3313->g_178[(p_3313->g_216.f3 + 2)],&p_3313->g_56,&p_3313->g_56}};
                        int64_t *l_853[7][8] = {{&l_779,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&l_779,&l_779,&p_3313->g_37,&p_3313->g_37},{&l_779,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&l_779,&l_779,&p_3313->g_37,&p_3313->g_37},{&l_779,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&l_779,&l_779,&p_3313->g_37,&p_3313->g_37},{&l_779,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&l_779,&l_779,&p_3313->g_37,&p_3313->g_37},{&l_779,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&l_779,&l_779,&p_3313->g_37,&p_3313->g_37},{&l_779,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&l_779,&l_779,&p_3313->g_37,&p_3313->g_37},{&l_779,&p_3313->g_37,&p_3313->g_37,&p_3313->g_37,&l_779,&l_779,&p_3313->g_37,&p_3313->g_37}};
                        int i, j;
                        (*l_801) ^= (p_3313->g_178[(p_3313->g_216.f3 + 2)] >= (((safe_sub_func_uint8_t_u_u((((((l_816 = p_3313->g_210[6].f1) , ((((l_837 == ((*l_838) = &p_3313->g_314[3][3][0])) , ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((p_64 == (!(*l_709))), ((1UL > (safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(p_64, ((l_848[5] == (void*)0) & p_65))), p_3313->g_249[1].f0))) , p_3313->g_178[(p_3313->g_216.f3 + 2)]))) <= (*p_63)), 65535UL)) > 1UL)) && p_65) < p_3313->g_212.f3)) | p_64) , p_3313->g_211.f1) >= (*p_3313->g_9)), p_64)) && p_3313->g_249[1].f3) >= 0x294372EEL));
                        p_66 = (((safe_sub_func_int64_t_s_s(((*l_801) = (p_65 = ((p_3313->g_362[5] == (((l_816 = (l_852 = (*l_801))) == ((p_67 , 0UL) > p_3313->g_202)) , (p_65 != p_65))) , l_824[2][0][4]))), l_820)) >= p_3313->g_178[(p_3313->g_216.f3 + 2)]) || p_3313->g_178[(p_3313->g_216.f3 + 2)]);
                    }
                    p_3313->g_453 = (void*)0;
                }
            }
        }
        (*l_882) = (((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((-10L), 11)), (safe_sub_func_int8_t_s_s((*p_63), ((safe_add_func_int8_t_s_s((*p_3313->g_9), p_3313->g_249[1].f3)) <= (safe_mod_func_int16_t_s_s(((!(safe_mul_func_uint16_t_u_u((~((safe_div_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_s((((((*l_801) != (safe_mul_func_uint8_t_u_u((((((((p_65 < p_64) == (((*l_709) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((l_880[0][0] = l_878) != l_878) && p_64), 8)), 4))) , (*l_801))) | (*l_801)) == 0x193F6BF0C1DBC7A6L) > 1L) <= p_3313->g_178[0]) ^ 249UL), 0x77L))) && (*l_801)) || (*p_3313->g_9)) <= 0x24L), (*l_801))) , p_66) < (*l_801)) < 0x309D136CL), 0UL)), 9UL)) & p_3313->g_440)), (*l_801)))) , p_67), p_67))))))) != (*l_801)) , l_880[0][0]);
    }
    return &p_3313->g_56;
}


/* ------------------------------------------ */
/* 
 * reads : p_3313->g_221.f3 p_3313->g_205 p_3313->g_31 p_3313->g_119 p_3313->g_220.f1 p_3313->g_9 p_3313->g_10 p_3313->g_362 p_3313->g_240 p_3313->g_178 p_3313->g_314 p_3313->g_412 p_3313->g_210.f1 p_3313->g_216.f0 p_3313->g_248 p_3313->g_173 p_3313->g_210.f3 p_3313->g_212.f0 p_3313->g_215.f1 p_3313->g_447 p_3313->g_250 p_3313->g_449 p_3313->g_222.f0 p_3313->g_222.f3 p_3313->g_74 p_3313->g_73 p_3313->g_461 p_3313->g_494 p_3313->g_145 p_3313->g_38 p_3313->g_121 p_3313->g_209.f3 p_3313->g_453 p_3313->g_284 p_3313->g_211.f0 p_3313->g_543 p_3313->g_37 p_3313->g_221.f0 p_3313->g_215.f3 p_3313->g_570 p_3313->g_216.f1 p_3313->g_249.f3 p_3313->g_212.f1
 * writes: p_3313->g_212.f1 p_3313->g_221.f3 p_3313->g_121 p_3313->g_219.f0 p_3313->g_178 p_3313->g_56 p_3313->g_362 p_3313->g_219.f1 p_3313->g_119 p_3313->g_216.f3 p_3313->g_216.f0 p_3313->g_412 p_3313->g_215.f3 p_3313->g_432 p_3313->g_37 p_3313->g_10 p_3313->g_449 p_3313->g_453 p_3313->g_222.f0 p_3313->g_222.f3 p_3313->g_440 p_3313->g_74 p_3313->g_314 p_3313->g_38 p_3313->g_494 p_3313->g_145 p_3313->g_284 p_3313->g_173 p_3313->g_221.f0 p_3313->g_570 p_3313->g_216.f1
 */
int8_t * func_68(uint32_t *** p_69, int32_t  p_70, int32_t * p_71, uint32_t * p_72, struct S2 * p_3313)
{ /* block id: 116 */
    int32_t l_355 = 1L;
    int16_t l_382 = 7L;
    int32_t l_429[7] = {0x40080C06L,0x40080C06L,0x40080C06L,0x40080C06L,0x40080C06L,0x40080C06L,0x40080C06L};
    uint8_t *l_439 = &p_3313->g_440;
    int i;
lbl_598:
    for (p_3313->g_212.f1 = (-6); (p_3313->g_212.f1 >= (-27)); p_3313->g_212.f1--)
    { /* block id: 119 */
        int32_t **l_352 = (void*)0;
        int32_t *l_354 = (void*)0;
        int32_t **l_353 = &l_354;
        int32_t l_411 = 2L;
        struct S0 *l_423 = (void*)0;
        (*l_353) = &p_3313->g_31;
        (*l_353) = &p_3313->g_31;
        for (p_3313->g_221.f3 = 1; (p_3313->g_221.f3 <= 7); p_3313->g_221.f3 += 1)
        { /* block id: 124 */
            uint32_t *l_361 = &p_3313->g_56;
            int32_t l_394 = 0x333B9CF4L;
            int32_t *l_397 = &l_355;
            int i;
            for (p_3313->g_121 = 0; (p_3313->g_121 <= 7); p_3313->g_121 += 1)
            { /* block id: 127 */
                (*l_353) = &p_3313->g_119;
            }
            if ((p_3313->g_205[p_3313->g_221.f3] , (*p_71)))
            { /* block id: 130 */
                p_70 = 2L;
                for (p_3313->g_219.f0 = 0; p_3313->g_219.f0 < 3; p_3313->g_219.f0 += 1)
                {
                    p_3313->g_178[p_3313->g_219.f0] = 0x54156B18L;
                }
                if (l_355)
                    break;
                if ((*p_71))
                    continue;
            }
            else
            { /* block id: 135 */
                int16_t l_358[9][3] = {{0x753AL,0x637EL,0x753AL},{0x753AL,0x637EL,0x753AL},{0x753AL,0x637EL,0x753AL},{0x753AL,0x637EL,0x753AL},{0x753AL,0x637EL,0x753AL},{0x753AL,0x637EL,0x753AL},{0x753AL,0x637EL,0x753AL},{0x753AL,0x637EL,0x753AL},{0x753AL,0x637EL,0x753AL}};
                int32_t l_392 = 0x151A2CABL;
                int32_t *l_398 = &l_355;
                int i, j;
                p_3313->g_362[5] |= (safe_sub_func_uint32_t_u_u(p_3313->g_205[p_3313->g_221.f3], ((**l_353) , (l_358[1][0] , (((~(((safe_mul_func_int8_t_s_s(0x5CL, p_70)) > ((void*)0 != l_361)) , p_3313->g_220.f1)) || ((*l_361) = (p_3313->g_205[p_3313->g_221.f3] && (*p_3313->g_9)))) || 3L)))));
                for (p_3313->g_219.f1 = 0; (p_3313->g_219.f1 <= 7); p_3313->g_219.f1 += 1)
                { /* block id: 140 */
                    int32_t *l_363 = &p_3313->g_119;
                    (*l_363) |= 4L;
                }
                if (p_3313->g_240)
                    break;
                if (l_358[4][0])
                { /* block id: 144 */
                    int8_t *l_396 = &p_3313->g_10;
                    for (l_355 = 2; (l_355 >= 0); l_355 -= 1)
                    { /* block id: 147 */
                        int16_t *l_377 = (void*)0;
                        int16_t **l_376 = &l_377;
                        int16_t *l_379 = &p_3313->g_215.f1;
                        int16_t **l_378 = &l_379;
                        uint64_t *l_389 = (void*)0;
                        uint64_t *l_390 = &p_3313->g_216.f3;
                        uint16_t *l_391[6][3] = {{&p_3313->g_38,&p_3313->g_38,&p_3313->g_314[2][2][0]},{&p_3313->g_38,&p_3313->g_38,&p_3313->g_314[2][2][0]},{&p_3313->g_38,&p_3313->g_38,&p_3313->g_314[2][2][0]},{&p_3313->g_38,&p_3313->g_38,&p_3313->g_314[2][2][0]},{&p_3313->g_38,&p_3313->g_38,&p_3313->g_314[2][2][0]},{&p_3313->g_38,&p_3313->g_38,&p_3313->g_314[2][2][0]}};
                        uint8_t *l_393[6][2];
                        int32_t *l_395 = &p_3313->g_119;
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_393[i][j] = (void*)0;
                        }
                        (*l_395) = (((safe_div_func_uint16_t_u_u((p_71 != ((p_3313->g_178[l_355] , (0L && ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_394 = (((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((*l_376) = &p_3313->g_330) == ((*l_378) = (void*)0)), (l_382 = (safe_lshift_func_uint16_t_u_s(0x4B1CL, 11))))), (l_392 ^= (safe_mod_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((((((p_70 == (((*l_390) = ((p_3313->g_205[p_3313->g_221.f3] <= (~(safe_add_func_int16_t_s_s((~0x2E4FL), p_3313->g_314[3][3][0])))) , p_3313->g_178[1])) , 8UL)) <= p_3313->g_205[p_3313->g_221.f3]) & p_70) >= 5L) ^ 255UL), l_358[1][1])) & p_70) < 0UL), 0x3CFEL))))), 3)) < l_358[1][0]) , p_3313->g_240)), 0)), l_358[1][0])) != (-7L)))) , p_72)), p_70)) > 0x11D0DBAB8B7D61BFL) , 0L);
                        (*l_353) = (void*)0;
                        return l_396;
                    }
                }
                else
                { /* block id: 158 */
                    l_398 = (l_397 = ((*l_353) = &p_3313->g_119));
                }
            }
            for (p_3313->g_216.f0 = 6; (p_3313->g_216.f0 >= 2); p_3313->g_216.f0 -= 1)
            { /* block id: 166 */
                int32_t *l_399 = &p_3313->g_119;
                int32_t *l_400 = &l_394;
                int32_t *l_401 = &l_355;
                int32_t *l_402 = &p_3313->g_119;
                int32_t *l_403 = &p_3313->g_119;
                int32_t *l_404 = &l_394;
                int32_t *l_405 = (void*)0;
                int32_t *l_406 = &l_394;
                int32_t *l_407 = &l_355;
                int32_t *l_408 = (void*)0;
                int32_t *l_409 = (void*)0;
                int32_t *l_410[6] = {&p_3313->g_31,(void*)0,&p_3313->g_31,&p_3313->g_31,(void*)0,&p_3313->g_31};
                uint8_t l_421[9][9] = {{254UL,0x3AL,0UL,0x31L,0x3AL,0x31L,0UL,0x3AL,254UL},{254UL,0x3AL,0UL,0x31L,0x3AL,0x31L,0UL,0x3AL,254UL},{254UL,0x3AL,0UL,0x31L,0x3AL,0x31L,0UL,0x3AL,254UL},{254UL,0x3AL,0UL,0x31L,0x3AL,0x31L,0UL,0x3AL,254UL},{254UL,0x3AL,0UL,0x31L,0x3AL,0x31L,0UL,0x3AL,254UL},{254UL,0x3AL,0UL,0x31L,0x3AL,0x31L,0UL,0x3AL,254UL},{254UL,0x3AL,0UL,0x31L,0x3AL,0x31L,0UL,0x3AL,254UL},{254UL,0x3AL,0UL,0x31L,0x3AL,0x31L,0UL,0x3AL,254UL},{254UL,0x3AL,0UL,0x31L,0x3AL,0x31L,0UL,0x3AL,254UL}};
                struct S0 **l_422[10][9][2] = {{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}},{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}},{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}},{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}},{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}},{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}},{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}},{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}},{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}},{{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0},{&p_3313->g_248[p_3313->g_216.f0],(void*)0}}};
                int64_t *l_428 = &p_3313->g_37;
                int i, j, k;
                p_3313->g_412++;
                (*l_406) ^= ((+(p_3313->g_210[6].f1 && (((((safe_div_func_int8_t_s_s(((*l_397) = (((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_70, (((l_421[0][5] , (l_423 = p_3313->g_248[p_3313->g_216.f0])) != (void*)0) || (p_3313->g_173 != ((safe_lshift_func_uint8_t_u_s((((l_355 , (((safe_div_func_uint32_t_u_u(((((p_3313->g_210[6].f3 && ((void*)0 != l_428)) , l_429[4]) , l_355) || 8L), (*l_397))) , 0x50B8L) & p_70)) , p_70) , p_3313->g_212.f0), 3)) , (void*)0))))), l_382)) && (**l_353)) != 1L)), 1L)) || p_70) > (*p_71)) < 1L) | l_429[0]))) && 0UL);
            }
        }
    }
    for (p_3313->g_412 = 0; (p_3313->g_412 <= 7); p_3313->g_412 += 1)
    { /* block id: 176 */
        int32_t *l_430 = (void*)0;
        uint8_t l_445[1][7] = {{7UL,7UL,7UL,7UL,7UL,7UL,7UL}};
        int i, j;
        if (p_3313->g_205[p_3313->g_412])
            break;
        for (p_3313->g_215.f3 = 0; (p_3313->g_215.f3 <= 7); p_3313->g_215.f3 += 1)
        { /* block id: 180 */
            int32_t **l_431[8] = {&l_430,&l_430,&l_430,&l_430,&l_430,&l_430,&l_430,&l_430};
            uint8_t l_446 = 246UL;
            int64_t *l_448 = &p_3313->g_37;
            volatile union U1 **l_451 = (void*)0;
            volatile union U1 **l_452 = &p_3313->g_449[0][0];
            int i;
            p_3313->g_432[0] = l_430;
            p_70 = ((safe_sub_func_uint8_t_u_u((255UL < 250UL), (((safe_sub_func_int16_t_s_s(p_3313->g_215.f1, (((*p_3313->g_9) ^= (((*l_448) = (safe_lshift_func_int8_t_s_s((l_429[4] = ((((l_439 == &p_3313->g_440) != l_355) != ((((safe_sub_func_int32_t_s_s((*p_71), p_70)) ^ ((safe_lshift_func_int8_t_s_s((~((l_429[3] != 0x79F2L) || p_70)), 7)) < l_445[0][4])) >= l_446) ^ p_3313->g_447)) <= p_3313->g_250)), 3))) > p_3313->g_205[5])) ^ p_70))) > p_3313->g_178[0]) & l_382))) , 9L);
            (*l_452) = p_3313->g_449[0][0];
            p_3313->g_453 = (p_3313->g_432[0] = &p_70);
        }
    }
    for (p_3313->g_221.f3 = 0; (p_3313->g_221.f3 >= 32); ++p_3313->g_221.f3)
    { /* block id: 193 */
        int32_t l_496[9] = {9L,1L,9L,9L,1L,9L,9L,1L,9L};
        int32_t l_517 = 1L;
        uint64_t *l_542 = &p_3313->g_214.f3;
        struct S0 *l_547 = (void*)0;
        uint64_t l_564[6] = {0xF5ADC0E3FD15A72FL,0xF5ADC0E3FD15A72FL,0xF5ADC0E3FD15A72FL,0xF5ADC0E3FD15A72FL,0xF5ADC0E3FD15A72FL,0xF5ADC0E3FD15A72FL};
        int8_t *l_597[9][1];
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 1; j++)
                l_597[i][j] = &p_3313->g_121;
        }
        for (p_3313->g_222.f0 = 0; (p_3313->g_222.f0 <= 4); p_3313->g_222.f0 += 1)
        { /* block id: 196 */
            int64_t l_511 = 0x4819F47221CAEAEEL;
            int8_t l_535[5];
            int64_t *l_548 = &p_3313->g_37;
            int32_t l_558 = 0L;
            int32_t l_559 = (-9L);
            int32_t l_561 = 0x4D4E9BF8L;
            int32_t l_562 = 0x3FB0436FL;
            int32_t l_563[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
            int16_t l_569[1][6] = {{0x057AL,0x057AL,0x057AL,0x057AL,0x057AL,0x057AL}};
            int32_t l_595[8][3][9] = {{{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)}},{{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)}},{{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)}},{{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)}},{{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)}},{{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)}},{{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)}},{{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)},{(-8L),(-8L),(-1L),0L,0x2565724BL,0x2565724BL,0L,(-1L),(-8L)}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_535[i] = 0x1CL;
            for (p_3313->g_222.f3 = 0; (p_3313->g_222.f3 <= 6); p_3313->g_222.f3 += 1)
            { /* block id: 199 */
                uint16_t l_460 = 0x47C0L;
                uint16_t *l_492 = &p_3313->g_38;
                uint8_t *l_493 = &p_3313->g_494;
                int32_t l_495[9][10] = {{0x06261C0FL,1L,0x0F0CBB37L,8L,0x0F0CBB37L,1L,0x06261C0FL,1L,0x1B34BF4FL,0x1B34BF4FL},{0x06261C0FL,1L,0x0F0CBB37L,8L,0x0F0CBB37L,1L,0x06261C0FL,1L,0x1B34BF4FL,0x1B34BF4FL},{0x06261C0FL,1L,0x0F0CBB37L,8L,0x0F0CBB37L,1L,0x06261C0FL,1L,0x1B34BF4FL,0x1B34BF4FL},{0x06261C0FL,1L,0x0F0CBB37L,8L,0x0F0CBB37L,1L,0x06261C0FL,1L,0x1B34BF4FL,0x1B34BF4FL},{0x06261C0FL,1L,0x0F0CBB37L,8L,0x0F0CBB37L,1L,0x06261C0FL,1L,0x1B34BF4FL,0x1B34BF4FL},{0x06261C0FL,1L,0x0F0CBB37L,8L,0x0F0CBB37L,1L,0x06261C0FL,1L,0x1B34BF4FL,0x1B34BF4FL},{0x06261C0FL,1L,0x0F0CBB37L,8L,0x0F0CBB37L,1L,0x06261C0FL,1L,0x1B34BF4FL,0x1B34BF4FL},{0x06261C0FL,1L,0x0F0CBB37L,8L,0x0F0CBB37L,1L,0x06261C0FL,1L,0x1B34BF4FL,0x1B34BF4FL},{0x06261C0FL,1L,0x0F0CBB37L,8L,0x0F0CBB37L,1L,0x06261C0FL,1L,0x1B34BF4FL,0x1B34BF4FL}};
                uint16_t *l_497 = &l_460;
                uint32_t l_514 = 0x9A998318L;
                int i, j;
                if ((((*l_439) = 255UL) ^ (0x6C1EL | ((*l_497) = ((p_3313->g_362[p_3313->g_222.f3] && (l_429[p_3313->g_222.f3] = l_429[(p_3313->g_222.f0 + 1)])) ^ ((l_496[6] = (l_495[2][3] = (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((+(((((*l_493) ^= ((p_3313->g_215.f1 & 0x28L) < (((l_460 & l_460) <= ((*l_492) = (p_3313->g_314[3][3][0] = (((*p_3313->g_73) = (*p_69)) != p_3313->g_461)))) , 0x06L))) || p_70) <= l_382) >= 1L)), 10)), 4294967286UL)))) > p_70))))))
                { /* block id: 209 */
                    int64_t l_502 = 0x0949438146715F2FL;
                    int8_t l_515 = 5L;
                    for (p_3313->g_145 = 0; (p_3313->g_145 <= 4); p_3313->g_145 += 1)
                    { /* block id: 212 */
                        uint16_t l_516 = 1UL;
                        int i, j;
                        l_517 ^= ((((void*)0 == &p_3313->g_37) <= (safe_div_func_uint64_t_u_u(p_3313->g_38, p_70))) < (safe_add_func_int32_t_s_s(l_502, (((+((((safe_add_func_uint32_t_u_u((((p_70 | (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_511 , (l_502 > (safe_mod_func_uint8_t_u_u(((((((((p_3313->g_314[3][3][0] &= 6UL) != 65530UL) || 254UL) || p_3313->g_250) , 0x144FE7D2L) , l_514) > l_515) , p_3313->g_121), l_516)))), p_3313->g_209.f3)), p_70))) == l_496[6]) == 0L), l_511)) <= 0x254EF26BD19921E7L) >= 0L) != (-1L))) , l_516) , (*p_3313->g_453)))));
                        (*p_3313->g_453) |= ((p_3313->g_284[(p_3313->g_222.f0 + 3)][p_3313->g_222.f0]--) | (~p_3313->g_447));
                    }
                }
                else
                { /* block id: 218 */
                    uint16_t ***l_526 = &p_3313->g_173;
                    int32_t l_529 = (-5L);
                    int32_t l_530[9][5][4] = {{{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL}},{{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL}},{{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL}},{{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL}},{{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL}},{{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL}},{{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL}},{{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL}},{{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL},{0L,1L,0x199837E3L,0x0425BCCDL}}};
                    int i, j, k;
                    l_530[2][1][1] &= ((-1L) <= (l_429[6] != ((safe_add_func_int8_t_s_s((((*p_71) == (safe_rshift_func_uint8_t_u_s((((*l_526) = p_3313->g_173) == (void*)0), 0))) , p_70), (0xB553L >= p_70))) >= (((safe_div_func_uint8_t_u_u(l_429[p_3313->g_222.f3], l_495[2][3])) , p_3313->g_211.f0) , l_529))));
                    if ((*p_3313->g_453))
                        break;
                }
                p_71 = &p_3313->g_31;
            }
            if ((*p_3313->g_453))
                continue;
            p_71 = &p_3313->g_31;
            if ((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((l_496[6] != (&p_3313->g_10 != (void*)0)) < l_535[2]), (safe_sub_func_int64_t_s_s(((*l_548) &= (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((~(l_542 == p_3313->g_543)), 0)), ((safe_rshift_func_int16_t_s_s((-8L), 9)) , (0xCC4977D6L <= ((l_547 != p_3313->g_248[5]) <= (*p_3313->g_9))))))), l_496[6])))), l_429[3])))
            { /* block id: 228 */
                for (p_3313->g_221.f0 = 22; (p_3313->g_221.f0 <= 27); p_3313->g_221.f0++)
                { /* block id: 231 */
                    if (l_355)
                        break;
                }
            }
            else
            { /* block id: 234 */
                int32_t *l_551 = &p_3313->g_119;
                int32_t *l_552 = &p_3313->g_119;
                int32_t *l_553 = &l_496[4];
                int32_t *l_554 = &l_429[4];
                int32_t *l_555 = &p_3313->g_119;
                int32_t *l_556 = &l_429[4];
                int32_t *l_557[2];
                int8_t l_560 = 0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_557[i] = &l_496[0];
                l_564[2]++;
                for (p_3313->g_215.f3 = 0; (p_3313->g_215.f3 == 21); ++p_3313->g_215.f3)
                { /* block id: 238 */
                    int32_t l_596 = 0x7FCAADF6L;
                    ++p_3313->g_570;
                    for (p_3313->g_216.f1 = 0; (p_3313->g_216.f1 == (-23)); --p_3313->g_216.f1)
                    { /* block id: 242 */
                        int32_t l_577 = 0x0FB83E85L;
                        (*l_556) = ((*l_552) = ((((safe_add_func_int64_t_s_s((l_577 = l_355), p_3313->g_249[1].f3)) , (safe_mod_func_uint64_t_u_u((((*p_3313->g_9) = 0L) > (safe_mul_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s((((p_70 >= (((l_547 == p_3313->g_248[3]) <= l_563[2]) > ((safe_mod_func_int8_t_s_s(0x14L, 4L)) < l_595[7][1][0]))) ^ p_70) != p_70), p_3313->g_222.f3)), l_577)))), l_595[1][0][4])), l_596)), 2)) ^ p_70) == 0xC78DL) , p_70), 255UL))), (-1L)))) , 0x1045L) & 0x437AL));
                        return l_597[0][0];
                    }
                }
            }
        }
        l_496[3] = 0x7BC694B9L;
        if (l_382)
            goto lbl_598;
    }
    return &p_3313->g_145;
}


/* ------------------------------------------ */
/* 
 * reads : p_3313->g_57 p_3313->g_9 p_3313->g_10 p_3313->g_105 p_3313->g_38 p_3313->g_56 p_3313->g_119 p_3313->g_121 p_3313->g_145 p_3313->g_31 p_3313->g_37 p_3313->g_173 p_3313->g_178 p_3313->g_205 p_3313->g_213.f0 p_3313->g_73 p_3313->g_74 p_3313->g_248 p_3313->g_209.f1 p_3313->g_250 p_3313->g_213.f1 p_3313->g_209.f3 p_3313->g_202 p_3313->g_284 p_3313->g_240 p_3313->g_218.f3 p_3313->g_219.f1 p_3313->g_314 p_3313->g_212.f3 p_3313->g_222.f0 p_3313->g_216.f0 p_3313->g_330 p_3313->g_211.f3
 * writes: p_3313->g_57 p_3313->g_10 p_3313->g_105 p_3313->g_121 p_3313->g_145 p_3313->g_119 p_3313->g_56 p_3313->g_178 p_3313->g_202 p_3313->g_205 p_3313->g_213.f0 p_3313->g_74 p_3313->g_240 p_3313->g_284 p_3313->g_38 p_3313->g_314 p_3313->g_212.f3 p_3313->g_222.f0 p_3313->g_211.f1
 */
int8_t  func_77(uint32_t  p_78, int8_t * p_79, struct S2 * p_3313)
{ /* block id: 26 */
    int64_t l_95 = 0x4F0F4353CEB4B622L;
    uint8_t l_100 = 246UL;
    int32_t l_103[4][6] = {{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}};
    uint8_t l_149[3];
    int32_t l_151 = 0x54276EE3L;
    uint16_t *l_166[2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_149[i] = 255UL;
    for (i = 0; i < 2; i++)
        l_166[i] = &p_3313->g_38;
    for (p_3313->g_57 = 27; (p_3313->g_57 < 52); p_3313->g_57++)
    { /* block id: 29 */
        int8_t *l_92 = (void*)0;
        int16_t *l_104 = &p_3313->g_105;
        int32_t l_111 = 0x6AF607F3L;
        int32_t l_112 = 1L;
        uint16_t **l_264 = &l_166[1];
        int32_t l_267 = 0x3E0EC4D1L;
        uint32_t ****l_272 = &p_3313->g_73;
        uint8_t *l_307 = &l_149[2];
        int32_t *l_317 = &l_103[2][5];
        if ((safe_add_func_uint64_t_u_u((~((((((void*)0 == l_92) , ((safe_mul_func_int16_t_s_s((l_95 | ((l_111 = (((*l_104) &= (safe_lshift_func_int8_t_s_s(((*p_3313->g_9) ^= (safe_div_func_uint8_t_u_u(l_100, ((safe_lshift_func_uint8_t_u_u(((-1L) | p_78), 7)) & (0x5932BC35L & (l_103[2][0] = p_78)))))), 2))) <= (safe_div_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint8_t_u_u(p_78, l_111)))), p_3313->g_38)))) < p_78)), l_112)) != p_3313->g_56)) == l_112) && (-7L)) < p_3313->g_57)), p_78)))
        { /* block id: 34 */
            uint32_t l_122 = 1UL;
            int8_t *l_143 = &p_3313->g_121;
            int8_t *l_144 = &p_3313->g_145;
            int32_t l_148[1][10] = {{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}};
            uint16_t *l_150[8][4] = {{&p_3313->g_38,&p_3313->g_38,(void*)0,&p_3313->g_38},{&p_3313->g_38,&p_3313->g_38,(void*)0,&p_3313->g_38},{&p_3313->g_38,&p_3313->g_38,(void*)0,&p_3313->g_38},{&p_3313->g_38,&p_3313->g_38,(void*)0,&p_3313->g_38},{&p_3313->g_38,&p_3313->g_38,(void*)0,&p_3313->g_38},{&p_3313->g_38,&p_3313->g_38,(void*)0,&p_3313->g_38},{&p_3313->g_38,&p_3313->g_38,(void*)0,&p_3313->g_38},{&p_3313->g_38,&p_3313->g_38,(void*)0,&p_3313->g_38}};
            int64_t *l_165 = &l_95;
            uint16_t *l_168[6] = {&p_3313->g_38,&p_3313->g_38,&p_3313->g_38,&p_3313->g_38,&p_3313->g_38,&p_3313->g_38};
            uint16_t **l_167 = &l_168[3];
            uint16_t *l_175[9][1][3];
            uint16_t **l_174 = &l_175[0][0][2];
            uint32_t *l_176 = (void*)0;
            uint32_t *l_177 = &p_3313->g_56;
            uint32_t ***l_185 = &p_3313->g_74;
            uint32_t ***l_186[2];
            struct S0 *l_208[6][2][9] = {{{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219},{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219}},{{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219},{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219}},{{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219},{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219}},{{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219},{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219}},{{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219},{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219}},{{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219},{&p_3313->g_219,&p_3313->g_209,&p_3313->g_209,&p_3313->g_219,&p_3313->g_212,&p_3313->g_216,&p_3313->g_216,&p_3313->g_212,&p_3313->g_219}}};
            uint16_t l_251[5][1] = {{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}};
            int32_t *l_273 = &p_3313->g_31;
            int32_t l_311 = 0x7ACFE27EL;
            int32_t *l_313[3];
            int i, j, k;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_175[i][j][k] = (void*)0;
                }
            }
            for (i = 0; i < 2; i++)
                l_186[i] = &p_3313->g_74;
            for (i = 0; i < 3; i++)
                l_313[i] = &l_103[2][0];
            for (l_111 = 0; (l_111 > (-1)); l_111--)
            { /* block id: 37 */
                int32_t *l_115 = (void*)0;
                int32_t *l_116 = &l_112;
                int32_t *l_117 = &l_112;
                int32_t *l_118 = &l_103[2][0];
                int32_t *l_120[7] = {&l_103[3][3],&l_103[3][3],&l_103[3][3],&l_103[3][3],&l_103[3][3],&l_103[3][3],&l_103[3][3]};
                int i;
                l_122++;
                (*l_116) &= p_3313->g_57;
                if (p_3313->g_119)
                    break;
            }
            p_3313->g_119 = (((safe_mod_func_uint32_t_u_u((0xEE10C307L < ((((p_78 == 3L) != (l_151 &= ((safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(l_103[2][0], 0x14L)) <= (0x69409422L <= (((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((((((*l_104) = ((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0UL, (((safe_div_func_int8_t_s_s(((*l_144) |= ((*l_143) ^= ((*p_79) = (*p_3313->g_9)))), (safe_mul_func_int16_t_s_s(((void*)0 != p_79), l_148[0][0])))) & p_3313->g_31) || p_78))), 15)) , p_78)) || l_111) , p_3313->g_145) | l_103[1][5]), p_3313->g_57)), l_149[2])), l_122)) >= (-2L)) | p_3313->g_56))), p_3313->g_37)) >= p_3313->g_119))) | l_103[2][0]) & l_112)), l_148[0][0])) && 18446744073709551614UL) == 0L);
            if ((((p_3313->g_178[0] = ((*l_177) = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((*p_79), 5)), 1)))), (((+(safe_sub_func_int32_t_s_s(((l_103[2][0] = p_3313->g_31) < (p_3313->g_105 <= (safe_rshift_func_uint8_t_u_s(((-6L) != (l_112 ^= l_151)), (((*l_165) = p_78) == ((l_150[4][0] = l_166[1]) != ((*l_167) = l_166[1]))))))), ((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((l_174 = p_3313->g_173) != &l_166[1]), 18446744073709551607UL)), (*p_3313->g_9))) ^ (-4L))))) | p_78) > p_3313->g_37))))) > p_3313->g_10) <= p_3313->g_119))
            { /* block id: 56 */
                int32_t *l_179 = &l_111;
                int32_t *l_180 = &l_103[2][3];
                (*l_180) &= ((*l_179) = p_3313->g_178[0]);
            }
            else
            { /* block id: 59 */
                uint64_t l_203 = 1UL;
                int32_t *l_241 = &l_112;
                uint64_t *l_282 = &l_203;
                uint8_t *l_283 = &l_149[2];
                int32_t *l_285 = &l_151;
                int8_t **l_306 = &l_92;
                uint8_t *l_308 = &l_149[2];
                int32_t *l_312 = &l_111;
                for (l_112 = 2; (l_112 >= 0); l_112 -= 1)
                { /* block id: 62 */
                    uint32_t ***l_181 = &p_3313->g_74;
                    uint32_t ****l_182 = &l_181;
                    uint32_t ***l_184 = &p_3313->g_74;
                    uint32_t ****l_183[5][2] = {{&p_3313->g_73,&l_184},{&p_3313->g_73,&l_184},{&p_3313->g_73,&l_184},{&p_3313->g_73,&l_184},{&p_3313->g_73,&l_184}};
                    int16_t *l_201 = &p_3313->g_202;
                    int16_t *l_204[3][7][10] = {{{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]}},{{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]}},{{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]},{&p_3313->g_205[5],&p_3313->g_205[6],&p_3313->g_205[6],&p_3313->g_205[0],&p_3313->g_205[4],&p_3313->g_205[6],(void*)0,(void*)0,&p_3313->g_205[3],&p_3313->g_205[3]}}};
                    uint64_t *l_206 = &l_203;
                    int32_t *l_207 = &l_151;
                    struct S0 **l_223 = &l_208[5][1][2];
                    int i, j, k;
                    (*l_207) = ((((*l_206) = (((l_185 = ((l_149[l_112] < (p_3313->g_105 = 8L)) , ((*l_182) = l_181))) == l_186[0]) == ((*l_177) = (safe_mod_func_int16_t_s_s((p_3313->g_205[5] &= (((((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_3313->g_178[0], 0L)), l_100)), ((*l_201) = ((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((0x2DF9921EL | 1L) , p_78), (*p_79))), p_78)), p_3313->g_56)) >= 0x6187993AL)))) >= p_78) , 0x4ABBFA7F8D447F79L) != 0x50EFE05FA8ED5CDAL) | l_203)), p_78))))) , &l_166[0]) == p_3313->g_173);
                    (*l_223) = l_208[3][0][2];
                    for (p_3313->g_213.f0 = 0; (p_3313->g_213.f0 <= 0); p_3313->g_213.f0 += 1)
                    { /* block id: 74 */
                        uint32_t **l_238 = &l_177;
                        int32_t *l_239 = &p_3313->g_240;
                        int32_t *l_256[4] = {&l_103[0][2],&l_103[0][2],&l_103[0][2],&l_103[0][2]};
                        uint16_t **l_263 = &l_150[4][0];
                        int i, j;
                        (*l_207) = 0x72C5E541L;
                        l_241 = ((((((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(0x479EL, 3)), l_148[p_3313->g_213.f0][(l_112 + 2)])), (p_78 & (safe_mod_func_uint16_t_u_u((((*l_239) = (safe_lshift_func_uint16_t_u_s((((*l_185) = (*p_3313->g_73)) == (l_148[0][0] , l_238)), 6))) , (l_241 == (void*)0)), ((safe_add_func_int32_t_s_s(((l_151 = (((safe_add_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(((p_3313->g_248[1] != p_3313->g_248[1]) ^ 0xA599ACBDL), p_78)) | 0x6A2EL) ^ p_3313->g_209.f1), (*l_241))) , p_3313->g_250) < 0xC8D91BA7L)) || 1L), 0x2776EE65L)) | p_3313->g_38)))))), 0x43L)), p_78)) , 0L) == 0x76EEAEBF9CC5E223L) != (*p_79)) <= l_251[0][0]) , &p_3313->g_31);
                        l_267 = ((safe_mul_func_int8_t_s_s(((*p_79) ^ (safe_sub_func_int32_t_s_s((l_111 = ((*l_207) &= (l_148[p_3313->g_213.f0][(l_112 + 2)] != 1L))), (p_3313->g_213.f1 != (safe_lshift_func_uint16_t_u_u((p_3313->g_209.f3 && (safe_mod_func_uint8_t_u_u(p_78, (safe_rshift_func_int16_t_s_u(((l_263 == l_264) , (safe_sub_func_uint32_t_u_u(p_3313->g_178[1], p_78))), 2))))), 11)))))), l_95)) , l_111);
                    }
                }
                (*l_285) = (safe_mod_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(p_78, p_3313->g_202)) , (((void*)0 == l_272) , (l_273 == (void*)0))), ((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(0L, ((safe_div_func_int8_t_s_s((*p_79), (+(p_3313->g_284[8][2] &= ((*l_283) = ((((*l_282) = ((safe_lshift_func_int8_t_s_u(((void*)0 == l_241), 1)) < p_78)) < 1L) , 0x91L)))))) , p_78))), 0UL)) ^ 0xD2D7D5BE434A542EL)));
                (*l_285) = ((safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((((**l_167)--) >= 65530UL), 1)) == (((void*)0 == (**l_272)) , (((*p_79) = (((((safe_add_func_uint64_t_u_u(l_95, (*l_273))) , (safe_sub_func_int32_t_s_s(l_111, (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((((*l_241) != (l_267 = ((safe_mod_func_uint16_t_u_u(((*l_272) != (l_186[0] = (void*)0)), l_267)) <= p_78))) || (*l_285)), (-7L))) | p_78), 6)) , p_3313->g_240), p_3313->g_250))))) || (-1L)) | l_111) , 0x5BL)) ^ p_3313->g_218.f3))) <= 0xA0L), 1UL)) | p_78);
                (*l_312) = (l_103[2][0] = (l_311 |= ((l_103[2][0] && (-4L)) <= (safe_mul_func_int16_t_s_s((4294967288UL >= (p_78 || (((((*l_306) = (void*)0) != &p_3313->g_121) , l_307) == l_308))), ((((*l_285) &= (safe_add_func_uint8_t_u_u(p_3313->g_219.f1, 1L))) ^ 0x27AB3DE0L) > l_112))))));
            }
            p_3313->g_314[3][3][0]--;
        }
        else
        { /* block id: 101 */
            l_317 = &p_3313->g_119;
        }
    }
    for (p_3313->g_212.f3 = 0; (p_3313->g_212.f3 > 56); p_3313->g_212.f3++)
    { /* block id: 107 */
        int32_t *l_321 = &p_3313->g_119;
        int32_t **l_320 = &l_321;
        int32_t *l_324 = &p_3313->g_222.f0;
        int16_t *l_329 = &p_3313->g_211.f1;
        uint8_t *l_347 = (void*)0;
        uint8_t *l_348 = &l_149[2];
        int64_t l_349 = 0x780363ACFDD263ADL;
        (*l_320) = &l_103[0][5];
        (*l_321) = (safe_mul_func_uint16_t_u_u((l_349 &= (((*l_324) |= 0L) , (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((((*l_329) = (p_3313->g_216.f0 <= 0x0CCC565EBF90950AL)) , p_3313->g_330), (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((*l_348) = (((((safe_rshift_func_int16_t_s_u(p_3313->g_219.f1, (0x1CFC50AFL | (l_100 , l_95)))) != ((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(p_78, p_3313->g_211.f3)), l_149[2])) | 9L) , (**l_320)), 0x62L)), p_78)), p_3313->g_37)) || p_78)) , (-1L)) != p_78) && 0xB481374B149FC8DAL)), (*p_3313->g_9))), 0x3FE3CDBEL)))), p_3313->g_119)))), l_103[3][0]));
    }
    return (*p_3313->g_9);
}


/* ------------------------------------------ */
/* 
 * reads : p_3313->g_31
 * writes:
 */
uint32_t  func_80(uint32_t  p_81, uint32_t ** p_82, uint32_t *** p_83, uint32_t  p_84, struct S2 * p_3313)
{ /* block id: 24 */
    return p_3313->g_31;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_3314;
    struct S2* p_3313 = &c_3314;
    struct S2 c_3315 = {
        0L, // p_3313->g_10
        &p_3313->g_10, // p_3313->g_9
        {{{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L}},{{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L}},{{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L}},{{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L}},{{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L}},{{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L},{0xD3335637L,0x3187110EL,4UL,0xA8E55A44L,0xB382E580L,0xD3335637L,0xA8E55A44L}}}, // p_3313->g_15
        {-1L,9L,253UL,0x254981C5860BC23CL,0xA2L}, // p_3313->g_23
        (-1L), // p_3313->g_31
        0x13AB76A10B913A86L, // p_3313->g_37
        4UL, // p_3313->g_38
        0xE3B6EA11L, // p_3313->g_56
        0xFC201266L, // p_3313->g_57
        (void*)0, // p_3313->g_74
        &p_3313->g_74, // p_3313->g_73
        (-3L), // p_3313->g_105
        (-3L), // p_3313->g_119
        (-1L), // p_3313->g_121
        1L, // p_3313->g_145
        (void*)0, // p_3313->g_173
        {0xEC5B3E99L,0xEC5B3E99L,0xEC5B3E99L}, // p_3313->g_178
        0x2F30L, // p_3313->g_202
        {0L,(-1L),0L,0L,(-1L),0L,0L,(-1L)}, // p_3313->g_205
        {0x3EF79E81L,0x6FC9L,0UL,0x3FFEDB683C2DD450L,254UL}, // p_3313->g_209
        {{0x216054A3L,0L,0x24L,9UL,255UL},{0x216054A3L,0L,0x24L,9UL,255UL},{0x216054A3L,0L,0x24L,9UL,255UL},{0x216054A3L,0L,0x24L,9UL,255UL},{0x216054A3L,0L,0x24L,9UL,255UL},{0x216054A3L,0L,0x24L,9UL,255UL},{0x216054A3L,0L,0x24L,9UL,255UL},{0x216054A3L,0L,0x24L,9UL,255UL}}, // p_3313->g_210
        {-7L,1L,0x07L,0x960B8A5674ED4916L,0x1DL}, // p_3313->g_211
        {0x62B856E2L,-1L,249UL,6UL,0x8FL}, // p_3313->g_212
        {0x7EFD13C6L,0x1380L,0xCFL,0x89D0FCB306C27A06L,0x02L}, // p_3313->g_213
        {9L,8L,0x5CL,0xEB641AC3D22769CAL,0x7AL}, // p_3313->g_214
        {0x177DB183L,0x6E78L,255UL,0x648DAA51747AB603L,0xB8L}, // p_3313->g_215
        {0x37ABAE86L,-1L,0x81L,18446744073709551615UL,0x4DL}, // p_3313->g_216
        {-8L,0x26D1L,0xD8L,5UL,0UL}, // p_3313->g_217
        {0x57E3DCABL,-4L,0xE7L,18446744073709551615UL,3UL}, // p_3313->g_218
        {1L,1L,0x43L,0xC01A54C5D4644126L,0xB1L}, // p_3313->g_219
        {0x1CDE32BAL,0x4189L,0xF5L,18446744073709551610UL,0x72L}, // p_3313->g_220
        {-4L,0x10D9L,0xE9L,18446744073709551606UL,0x7DL}, // p_3313->g_221
        {0x5687EBC9L,1L,0x2FL,0x7324F2782A31A939L,251UL}, // p_3313->g_222
        (-1L), // p_3313->g_240
        {{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL},{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL},{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL},{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL},{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL},{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL},{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL},{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL},{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL},{1L,0x27D0L,1UL,0x5AFFD8D47B228D58L,0x3DL}}, // p_3313->g_249
        {&p_3313->g_249[1],&p_3313->g_249[1],&p_3313->g_249[1],&p_3313->g_249[1],&p_3313->g_249[1],&p_3313->g_249[1],&p_3313->g_249[1]}, // p_3313->g_248
        2L, // p_3313->g_250
        {{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL},{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL},{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL},{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL},{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL},{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL},{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL},{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL},{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL},{1UL,0x914E0829E44B4A44L,1UL,0x914E0829E44B4A44L,1UL}}, // p_3313->g_284
        {{{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL}},{{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL}},{{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL}},{{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL}},{{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL}},{{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL}},{{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL}},{{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL}},{{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL},{0xEC2EL}}}, // p_3313->g_314
        0x4D15L, // p_3313->g_330
        {0x00BBL,0x00BBL,0x00BBL,0x00BBL,0x00BBL,0x00BBL,0x00BBL,0x00BBL}, // p_3313->g_362
        4294967292UL, // p_3313->g_412
        {&p_3313->g_119,&p_3313->g_119}, // p_3313->g_432
        5UL, // p_3313->g_440
        0x72L, // p_3313->g_447
        {1L}, // p_3313->g_450
        {{&p_3313->g_450}}, // p_3313->g_449
        &p_3313->g_119, // p_3313->g_453
        0x67732697L, // p_3313->g_463
        {4294967295UL,1UL,4294967295UL,4294967295UL,1UL,4294967295UL,4294967295UL,1UL,4294967295UL}, // p_3313->g_464
        0x97C825F8L, // p_3313->g_465
        0x142DFABEL, // p_3313->g_466
        0x3D2C1D47L, // p_3313->g_467
        0x28518AC3L, // p_3313->g_468
        {{0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL},{0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL},{0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL},{0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL},{0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL},{0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL,0UL,0x21D64F1DL,0UL}}, // p_3313->g_469
        4UL, // p_3313->g_470
        {4294967295UL,0xA9A34BC3L,4294967295UL,0xA9A34BC3L,4294967295UL,4294967295UL,0xA9A34BC3L,4294967295UL,0xA9A34BC3L,4294967295UL}, // p_3313->g_471
        0UL, // p_3313->g_472
        {{{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L}},{{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L}},{{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L}},{{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L}},{{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L}},{{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L}},{{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L}},{{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L},{1UL,0x5948001EL,0xD9263A44L}}}, // p_3313->g_473
        0xF182F2CCL, // p_3313->g_474
        {{1UL,1UL}}, // p_3313->g_475
        {{{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL}},{{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL}},{{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL}},{{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL}},{{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL}},{{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL}},{{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL}},{{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL},{0x60EC221AL,0xBC8555D8L,0x0DE53070L,0UL,4294967289UL}}}, // p_3313->g_476
        {{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}},{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}},{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}},{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}},{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}},{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}},{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}},{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}},{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}},{{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL},{0x53E591AEL,0x38A44014L,0UL,0x2CF89BD3L,0xFDA3FE59L,0x7DA76AF3L,1UL,0xC1FD13DDL}}}, // p_3313->g_477
        {{1UL,0x74680034L,1UL,1UL,0x74680034L},{1UL,0x74680034L,1UL,1UL,0x74680034L},{1UL,0x74680034L,1UL,1UL,0x74680034L},{1UL,0x74680034L,1UL,1UL,0x74680034L},{1UL,0x74680034L,1UL,1UL,0x74680034L},{1UL,0x74680034L,1UL,1UL,0x74680034L}}, // p_3313->g_478
        4294967295UL, // p_3313->g_479
        0x46648F4FL, // p_3313->g_480
        0x7235B268L, // p_3313->g_481
        0xDB83B3F2L, // p_3313->g_482
        7UL, // p_3313->g_483
        0x124DAFD8L, // p_3313->g_484
        {{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}},{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}},{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}},{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}},{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}},{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}},{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}},{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}},{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}},{{0xE85DF39CL,0xE85DF39CL,0x141F8240L}}}, // p_3313->g_485
        4294967295UL, // p_3313->g_486
        4294967295UL, // p_3313->g_487
        4294967286UL, // p_3313->g_488
        4294967295UL, // p_3313->g_489
        0UL, // p_3313->g_490
        {{{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L}},{{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L}},{{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L}},{{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L}},{{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L},{0xF2EBC562L,0xEEEC51C6L}}}, // p_3313->g_491
        {{{&p_3313->g_487,&p_3313->g_479,&p_3313->g_481,(void*)0,&p_3313->g_481,&p_3313->g_479,&p_3313->g_487,&p_3313->g_473[5][4][1],&p_3313->g_467,&p_3313->g_471[9]},{&p_3313->g_487,&p_3313->g_479,&p_3313->g_481,(void*)0,&p_3313->g_481,&p_3313->g_479,&p_3313->g_487,&p_3313->g_473[5][4][1],&p_3313->g_467,&p_3313->g_471[9]},{&p_3313->g_487,&p_3313->g_479,&p_3313->g_481,(void*)0,&p_3313->g_481,&p_3313->g_479,&p_3313->g_487,&p_3313->g_473[5][4][1],&p_3313->g_467,&p_3313->g_471[9]},{&p_3313->g_487,&p_3313->g_479,&p_3313->g_481,(void*)0,&p_3313->g_481,&p_3313->g_479,&p_3313->g_487,&p_3313->g_473[5][4][1],&p_3313->g_467,&p_3313->g_471[9]},{&p_3313->g_487,&p_3313->g_479,&p_3313->g_481,(void*)0,&p_3313->g_481,&p_3313->g_479,&p_3313->g_487,&p_3313->g_473[5][4][1],&p_3313->g_467,&p_3313->g_471[9]},{&p_3313->g_487,&p_3313->g_479,&p_3313->g_481,(void*)0,&p_3313->g_481,&p_3313->g_479,&p_3313->g_487,&p_3313->g_473[5][4][1],&p_3313->g_467,&p_3313->g_471[9]},{&p_3313->g_487,&p_3313->g_479,&p_3313->g_481,(void*)0,&p_3313->g_481,&p_3313->g_479,&p_3313->g_487,&p_3313->g_473[5][4][1],&p_3313->g_467,&p_3313->g_471[9]}}}, // p_3313->g_462
        &p_3313->g_462[0][6][5], // p_3313->g_461
        0x42L, // p_3313->g_494
        0xC937CF0BBCD5209BL, // p_3313->g_544
        &p_3313->g_544, // p_3313->g_543
        4294967295UL, // p_3313->g_570
        {0x2CD1F6ABL}, // p_3313->g_674
        0x2A31470DL, // p_3313->g_714
        {-6L}, // p_3313->g_748
        0x30L, // p_3313->g_827
        {1L,0x4C39L,248UL,1UL,6UL}, // p_3313->g_879
        {-6L,0x0FABL,0xACL,0x3CE9287CB37C51D3L,0xC5L}, // p_3313->g_881
        {0x7A5526BCL}, // p_3313->g_891
        {0x2AA9A51FL}, // p_3313->g_917
        {0x0869C97CL}, // p_3313->g_918
        {{-1L},{-1L},{-1L}}, // p_3313->g_919
        {{1L},{1L},{1L},{1L},{1L},{1L}}, // p_3313->g_920
        {4L}, // p_3313->g_921
        {0L}, // p_3313->g_922
        {0x39BD56E3L}, // p_3313->g_923
        {0x7DA5A887L}, // p_3313->g_924
        {0L}, // p_3313->g_925
        {{-1L},{-1L}}, // p_3313->g_926
        {1L}, // p_3313->g_927
        {{0x78A6C40DL},{0x78A6C40DL},{0x78A6C40DL},{0x78A6C40DL},{0x78A6C40DL},{0x78A6C40DL}}, // p_3313->g_928
        {5L}, // p_3313->g_929
        {1L}, // p_3313->g_930
        {{0x2C9F8179L},{2L},{0x2C9F8179L},{0x2C9F8179L},{2L},{0x2C9F8179L},{0x2C9F8179L}}, // p_3313->g_931
        {0x08AB7A2FL}, // p_3313->g_932
        {0x28710BCFL}, // p_3313->g_933
        {0x647569BBL}, // p_3313->g_934
        {0L}, // p_3313->g_935
        {0x23C382CFL}, // p_3313->g_936
        {-1L}, // p_3313->g_937
        {{0x635E84BAL},{0x635E84BAL},{0x635E84BAL},{0x635E84BAL},{0x635E84BAL}}, // p_3313->g_938
        {0x5CEBD0E9L}, // p_3313->g_939
        {{1L},{1L},{1L}}, // p_3313->g_940
        {-1L}, // p_3313->g_941
        {0x1469AFE0L}, // p_3313->g_942
        {0x5939911AL}, // p_3313->g_943
        {0x6F848A32L}, // p_3313->g_944
        {{{{0x49DBAC3CL},{0x78645140L},{0x78645140L},{0x49DBAC3CL},{1L},{1L},{9L},{0x068A40F9L},{0x68066FB1L},{0x0F0B4864L}}},{{{0x49DBAC3CL},{0x78645140L},{0x78645140L},{0x49DBAC3CL},{1L},{1L},{9L},{0x068A40F9L},{0x68066FB1L},{0x0F0B4864L}}},{{{0x49DBAC3CL},{0x78645140L},{0x78645140L},{0x49DBAC3CL},{1L},{1L},{9L},{0x068A40F9L},{0x68066FB1L},{0x0F0B4864L}}},{{{0x49DBAC3CL},{0x78645140L},{0x78645140L},{0x49DBAC3CL},{1L},{1L},{9L},{0x068A40F9L},{0x68066FB1L},{0x0F0B4864L}}},{{{0x49DBAC3CL},{0x78645140L},{0x78645140L},{0x49DBAC3CL},{1L},{1L},{9L},{0x068A40F9L},{0x68066FB1L},{0x0F0B4864L}}},{{{0x49DBAC3CL},{0x78645140L},{0x78645140L},{0x49DBAC3CL},{1L},{1L},{9L},{0x068A40F9L},{0x68066FB1L},{0x0F0B4864L}}},{{{0x49DBAC3CL},{0x78645140L},{0x78645140L},{0x49DBAC3CL},{1L},{1L},{9L},{0x068A40F9L},{0x68066FB1L},{0x0F0B4864L}}},{{{0x49DBAC3CL},{0x78645140L},{0x78645140L},{0x49DBAC3CL},{1L},{1L},{9L},{0x068A40F9L},{0x68066FB1L},{0x0F0B4864L}}}}, // p_3313->g_945
        {9L}, // p_3313->g_946
        {1L}, // p_3313->g_947
        {-5L}, // p_3313->g_948
        {0x28C0F81EL}, // p_3313->g_949
        {0L}, // p_3313->g_950
        {0x7A6D1E77L}, // p_3313->g_951
        {0x2B034A6DL}, // p_3313->g_952
        {-1L}, // p_3313->g_953
        {1L}, // p_3313->g_954
        {{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}}, // p_3313->g_955
        {-4L}, // p_3313->g_956
        {0x55045A7CL}, // p_3313->g_957
        {4L}, // p_3313->g_958
        {0x1B43D32EL}, // p_3313->g_959
        {{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}}}, // p_3313->g_960
        {6L}, // p_3313->g_961
        {0x7F00E69DL}, // p_3313->g_962
        {0x77CF47E6L}, // p_3313->g_963
        {0x255636B1L}, // p_3313->g_964
        {-1L}, // p_3313->g_965
        {-1L}, // p_3313->g_966
        {0x032031EBL}, // p_3313->g_967
        {0L}, // p_3313->g_968
        {0x0EE38184L}, // p_3313->g_969
        {{1L},{1L},{1L},{1L}}, // p_3313->g_970
        {-1L}, // p_3313->g_971
        {0x301DEFA0L}, // p_3313->g_972
        {1L}, // p_3313->g_973
        {0x7DD22EBEL}, // p_3313->g_974
        {0x55A97CE9L}, // p_3313->g_975
        {0x4D1EDCA5L}, // p_3313->g_976
        {{0x1278E13BL},{0x1278E13BL},{0x1278E13BL},{0x1278E13BL},{0x1278E13BL},{0x1278E13BL},{0x1278E13BL},{0x1278E13BL},{0x1278E13BL}}, // p_3313->g_977
        {0x2A1C2170L}, // p_3313->g_978
        {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}}, // p_3313->g_979
        {0L}, // p_3313->g_980
        {5L}, // p_3313->g_981
        {0x123B2892L}, // p_3313->g_982
        {0x43B42B10L}, // p_3313->g_983
        {0x028A98EFL}, // p_3313->g_984
        {0x6FAB79AFL}, // p_3313->g_985
        {0x1F862762L}, // p_3313->g_986
        {-8L}, // p_3313->g_987
        {0x58C61B92L}, // p_3313->g_988
        {{-1L},{-1L}}, // p_3313->g_989
        {0x08C636E7L}, // p_3313->g_990
        {0x045D8458L}, // p_3313->g_991
        {1L}, // p_3313->g_992
        {1L}, // p_3313->g_993
        {1L}, // p_3313->g_994
        {0x26B30185L}, // p_3313->g_997
        &p_3313->g_961.f0, // p_3313->g_1006
        &p_3313->g_1006, // p_3313->g_1005
        {0xA343L,0xA343L,0xA343L,0xA343L,0xA343L,0xA343L}, // p_3313->g_1068
        {{{0x0D6D0850L,4294967290UL,0xA5D04CEEL,0xA6F027E3L,4294967290UL,0xA6F027E3L},{0x0D6D0850L,4294967290UL,0xA5D04CEEL,0xA6F027E3L,4294967290UL,0xA6F027E3L}},{{0x0D6D0850L,4294967290UL,0xA5D04CEEL,0xA6F027E3L,4294967290UL,0xA6F027E3L},{0x0D6D0850L,4294967290UL,0xA5D04CEEL,0xA6F027E3L,4294967290UL,0xA6F027E3L}},{{0x0D6D0850L,4294967290UL,0xA5D04CEEL,0xA6F027E3L,4294967290UL,0xA6F027E3L},{0x0D6D0850L,4294967290UL,0xA5D04CEEL,0xA6F027E3L,4294967290UL,0xA6F027E3L}},{{0x0D6D0850L,4294967290UL,0xA5D04CEEL,0xA6F027E3L,4294967290UL,0xA6F027E3L},{0x0D6D0850L,4294967290UL,0xA5D04CEEL,0xA6F027E3L,4294967290UL,0xA6F027E3L}}}, // p_3313->g_1126
        {{0x4C6F5170L,0L,0x3EL,8UL,1UL},{0x4C6F5170L,0L,0x3EL,8UL,1UL},{0x4C6F5170L,0L,0x3EL,8UL,1UL},{0x4C6F5170L,0L,0x3EL,8UL,1UL}}, // p_3313->g_1150
        {8L,0L,6UL,0UL,255UL}, // p_3313->g_1153
        (void*)0, // p_3313->g_1168
        {1L,0L,0UL,0x1FD244428CE58483L,0x63L}, // p_3313->g_1254
        &p_3313->g_284[8][2], // p_3313->g_1279
        &p_3313->g_1279, // p_3313->g_1278
        &p_3313->g_248[1], // p_3313->g_1280
        0L, // p_3313->g_1319
        {-1L}, // p_3313->g_1347
        &p_3313->g_432[1], // p_3313->g_1356
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_3313->g_1379
        {{0x45A7006FL,0x4B26L,0x8DL,0UL,0x30L},{0x45A7006FL,0x4B26L,0x8DL,0UL,0x30L},{0x45A7006FL,0x4B26L,0x8DL,0UL,0x30L},{0x45A7006FL,0x4B26L,0x8DL,0UL,0x30L},{0x45A7006FL,0x4B26L,0x8DL,0UL,0x30L},{0x45A7006FL,0x4B26L,0x8DL,0UL,0x30L}}, // p_3313->g_1402
        {0x6BA66EB7L,0x6E99L,0xE2L,18446744073709551609UL,255UL}, // p_3313->g_1403
        5L, // p_3313->g_1416
        (void*)0, // p_3313->g_1425
        {{&p_3313->g_23.f1,&p_3313->g_23.f1,&p_3313->g_23.f1},{&p_3313->g_23.f1,&p_3313->g_23.f1,&p_3313->g_23.f1},{&p_3313->g_23.f1,&p_3313->g_23.f1,&p_3313->g_23.f1},{&p_3313->g_23.f1,&p_3313->g_23.f1,&p_3313->g_23.f1},{&p_3313->g_23.f1,&p_3313->g_23.f1,&p_3313->g_23.f1},{&p_3313->g_23.f1,&p_3313->g_23.f1,&p_3313->g_23.f1}}, // p_3313->g_1444
        &p_3313->g_1444[0][2], // p_3313->g_1443
        {0x704CAB02L,7L,0x47L,0x676C22AC7A08B063L,0xCBL}, // p_3313->g_1446
        {3L}, // p_3313->g_1451
        0UL, // p_3313->g_1568
        (void*)0, // p_3313->g_1601
        &p_3313->g_314[3][3][0], // p_3313->g_1603
        (void*)0, // p_3313->g_1604
        &p_3313->g_1068[5], // p_3313->g_1605
        {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}}, // p_3313->g_1602
        {{&p_3313->g_1602[8][0][0],&p_3313->g_1602[8][0][0],&p_3313->g_1602[8][0][0]},{&p_3313->g_1602[8][0][0],&p_3313->g_1602[8][0][0],&p_3313->g_1602[8][0][0]}}, // p_3313->g_1600
        (void*)0, // p_3313->g_1606
        {&p_3313->g_1606,(void*)0,&p_3313->g_1606,&p_3313->g_1606,(void*)0,&p_3313->g_1606,&p_3313->g_1606}, // p_3313->g_1599
        &p_3313->g_1599[5], // p_3313->g_1598
        (-10L), // p_3313->g_1620
        {0x7DD6832AL,0x785FL,0xF1L,18446744073709551615UL,0x92L}, // p_3313->g_1632
        {-1L}, // p_3313->g_1669
        &p_3313->g_432[0], // p_3313->g_1672
        {0x4C4FEB43L}, // p_3313->g_1683
        &p_3313->g_31, // p_3313->g_1731
        {0x6CD9E2D0L,0x3F52L,0UL,0x26CD460CF1A4410CL,0xF8L}, // p_3313->g_1734
        0xDA502C12191EDD70L, // p_3313->g_1745
        {{{{0L},{0L},{0x439415BAL},{0L},{0L},{0L},{0L}},{{0L},{0L},{0x439415BAL},{0L},{0L},{0L},{0L}},{{0L},{0L},{0x439415BAL},{0L},{0L},{0L},{0L}},{{0L},{0L},{0x439415BAL},{0L},{0L},{0L},{0L}}}}, // p_3313->g_1799
        {0x129F31DCL,0x129F31DCL,0x129F31DCL,0x129F31DCL}, // p_3313->g_1865
        0UL, // p_3313->g_1869
        (void*)0, // p_3313->g_1921
        &p_3313->g_1921, // p_3313->g_1920
        {{&p_3313->g_1920,&p_3313->g_1920}}, // p_3313->g_1919
        {{{1L},{1L},{0x72DDDEE6L},{0x3FEA9440L},{-2L},{0x3FEA9440L}},{{1L},{1L},{0x72DDDEE6L},{0x3FEA9440L},{-2L},{0x3FEA9440L}},{{1L},{1L},{0x72DDDEE6L},{0x3FEA9440L},{-2L},{0x3FEA9440L}}}, // p_3313->g_1929
        {0x484B0976L}, // p_3313->g_1932
        {{0x6172L,0x3260L,0x6172L,0x6172L,0x3260L},{0x6172L,0x3260L,0x6172L,0x6172L,0x3260L},{0x6172L,0x3260L,0x6172L,0x6172L,0x3260L},{0x6172L,0x3260L,0x6172L,0x6172L,0x3260L},{0x6172L,0x3260L,0x6172L,0x6172L,0x3260L},{0x6172L,0x3260L,0x6172L,0x6172L,0x3260L},{0x6172L,0x3260L,0x6172L,0x6172L,0x3260L},{0x6172L,0x3260L,0x6172L,0x6172L,0x3260L}}, // p_3313->g_1970
        {{{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL}},{{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL}},{{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL},{4294967295UL,4294967295UL,9UL,0xC8C60D7FL}}}, // p_3313->g_1989
        {{{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L}},{{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L}},{{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L}},{{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L}},{{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L}},{{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L}},{{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L},{0x0CL,0x7EL,0x15L,0x15L,0x7EL,0x0CL,0x5CL,0x09L,(-1L),9L}}}, // p_3313->g_1990
        &p_3313->g_178[0], // p_3313->g_2010
        {0L,0x7C65L,0x9BL,9UL,0UL}, // p_3313->g_2020
        &p_3313->g_989[0], // p_3313->g_2033
        &p_3313->g_2033, // p_3313->g_2032
        {0x2D3EC22CL,6L,0x25L,0x004775444CAA32A4L,255UL}, // p_3313->g_2049
        0x245F9A7D5ABB853BL, // p_3313->g_2074
        0x097816C6L, // p_3313->g_2078
        {0x17B9983FL}, // p_3313->g_2136
        {1L,2L,255UL,18446744073709551615UL,0UL}, // p_3313->g_2161
        (void*)0, // p_3313->g_2174
        {-8L,-1L,0UL,0xAAFB623810E5A728L,254UL}, // p_3313->g_2210
        4294967295UL, // p_3313->g_2228
        &p_3313->g_2033, // p_3313->g_2245
        &p_3313->g_2033, // p_3313->g_2278
        &p_3313->g_1278, // p_3313->g_2302
        &p_3313->g_1989[0][1][0], // p_3313->g_2310
        {{{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{0x04FED21FL,0x613CL,255UL,0x2416BF5DBD6B5F47L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{0x04FED21FL,0x613CL,255UL,0x2416BF5DBD6B5F47L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{0x04FED21FL,0x613CL,255UL,0x2416BF5DBD6B5F47L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL}},{{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{0x04FED21FL,0x613CL,255UL,0x2416BF5DBD6B5F47L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{0x04FED21FL,0x613CL,255UL,0x2416BF5DBD6B5F47L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL},{0x04FED21FL,0x613CL,255UL,0x2416BF5DBD6B5F47L,255UL},{1L,0x1DE8L,255UL,0x62FE574611BECE63L,255UL}}}, // p_3313->g_2316
        4294967286UL, // p_3313->g_2339
        1L, // p_3313->g_2347
        6UL, // p_3313->g_2377
        &p_3313->g_2033, // p_3313->g_2393
        {0x32132643L,6L,0x08L,0xAC7C888D88CAA6BAL,0x63L}, // p_3313->g_2396
        (void*)0, // p_3313->g_2408
        &p_3313->g_1279, // p_3313->g_2416
        0x60DB626FL, // p_3313->g_2491
        4L, // p_3313->g_2513
        {0x539DC67EL,-1L,8UL,0x1DAF57B0EAEA8B45L,0xC3L}, // p_3313->g_2545
        0x1A4184C1L, // p_3313->g_2560
        0xB024L, // p_3313->g_2609
        {{{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}}},{{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}}},{{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}},{{0L},{0L},{0x4C4526D3L},{0L},{0x5767763AL},{7L}}}}, // p_3313->g_2639
        0xC247L, // p_3313->g_2698
        {-1L}, // p_3313->g_2731
        {{0x1416CC9DL,3L,9UL,9UL,0x5CL}}, // p_3313->g_2735
        {4L,4L,4L}, // p_3313->g_2787
        {1L,-1L,0xD0L,0xC2E8F1548BA07246L,249UL}, // p_3313->g_2795
        {6L,-7L,0xCCL,0x02CF6623A925EA1AL,255UL}, // p_3313->g_2799
        {0x4F7253A7L,0x7967L,0xD6L,18446744073709551607UL,1UL}, // p_3313->g_2800
        {{(-6L),0L,(-6L),(-6L),0L},{(-6L),0L,(-6L),(-6L),0L},{(-6L),0L,(-6L),(-6L),0L},{(-6L),0L,(-6L),(-6L),0L}}, // p_3313->g_2816
        &p_3313->g_2816[1][1], // p_3313->g_2815
        {&p_3313->g_2815,&p_3313->g_2815,&p_3313->g_2815,&p_3313->g_2815,&p_3313->g_2815}, // p_3313->g_2814
        &p_3313->g_2815, // p_3313->g_2817
        {{0x61BEA130L},{1L},{0x61BEA130L},{0x61BEA130L},{1L},{0x61BEA130L},{0x61BEA130L},{1L}}, // p_3313->g_2850
        {&p_3313->g_432[0],&p_3313->g_432[0],&p_3313->g_432[0],&p_3313->g_432[0],&p_3313->g_432[0],&p_3313->g_432[0],&p_3313->g_432[0],&p_3313->g_432[0],&p_3313->g_432[0],&p_3313->g_432[0]}, // p_3313->g_2859
        {0x7DA88C06L}, // p_3313->g_2862
        {0x4C2B88E60F3C977CL,0x3219FD83D9031DDCL,0x4C2B88E60F3C977CL,0x4C2B88E60F3C977CL,0x3219FD83D9031DDCL,0x4C2B88E60F3C977CL,0x4C2B88E60F3C977CL,0x3219FD83D9031DDCL,0x4C2B88E60F3C977CL,0x4C2B88E60F3C977CL}, // p_3313->g_2874
        {0x7E5358B2L,0x6F1DL,8UL,0UL,0xD3L}, // p_3313->g_2942
        {1L,0x447CL,5UL,0x4DD2E2800B26AE5BL,0x8BL}, // p_3313->g_2949
        {0x71B76A02L,1L,247UL,0x8B068AEED6C69F06L,0xEBL}, // p_3313->g_2966
        {{{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}}},{{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}}},{{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}}},{{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}}},{{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}}},{{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}}},{{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}}},{{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}},{{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{6L,0x2166L,1UL,0xC142C31AB49A257EL,0xD3L},{0x0D37BA7DL,-9L,255UL,0UL,255UL},{0x261827C8L,6L,0xB2L,0xA283832B31DBBA83L,1UL}}}}, // p_3313->g_2967
        &p_3313->g_453, // p_3313->g_2987
        {0L,0L,3UL,6UL,0x9CL}, // p_3313->g_3009
        {&p_3313->g_1379[6],&p_3313->g_1379[6],&p_3313->g_1379[6],&p_3313->g_1379[6]}, // p_3313->g_3013
        {{&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1]},{&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1]},{&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1],&p_3313->g_3013[1]}}, // p_3313->g_3012
        &p_3313->g_3012[2][9], // p_3313->g_3011
        {&p_3313->g_2815}, // p_3313->g_3050
        (void*)0, // p_3313->g_3051
        &p_3313->g_432[1], // p_3313->g_3063
        &p_3313->g_119, // p_3313->g_3126
        {{0x15DB1C87L,0x19C4L,0x4AL,0xC528F61B6AD4F7AEL,0x1AL},{-10L,0x160DL,0xDEL,0UL,0UL},{0x18593776L,0x604FL,0x31L,1UL,0x7CL},{-10L,0x160DL,0xDEL,0UL,0UL},{0x15DB1C87L,0x19C4L,0x4AL,0xC528F61B6AD4F7AEL,0x1AL},{0x15DB1C87L,0x19C4L,0x4AL,0xC528F61B6AD4F7AEL,0x1AL},{-10L,0x160DL,0xDEL,0UL,0UL},{0x18593776L,0x604FL,0x31L,1UL,0x7CL},{-10L,0x160DL,0xDEL,0UL,0UL},{0x15DB1C87L,0x19C4L,0x4AL,0xC528F61B6AD4F7AEL,0x1AL}}, // p_3313->g_3130
        &p_3313->g_214, // p_3313->g_3131
        1UL, // p_3313->g_3146
        &p_3313->g_3146, // p_3313->g_3145
        &p_3313->g_3145, // p_3313->g_3144
        &p_3313->g_3144, // p_3313->g_3143
        &p_3313->g_3143, // p_3313->g_3142
        &p_3313->g_3142, // p_3313->g_3141
        {{{&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,(void*)0},{&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,(void*)0},{&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,(void*)0},{&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,(void*)0},{&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,(void*)0},{&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,(void*)0},{&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,(void*)0},{&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,&p_3313->g_3141,(void*)0}}}, // p_3313->g_3140
        &p_3313->g_3140[0][4][3], // p_3313->g_3139
        {{&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139},{&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139},{&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139},{&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139},{&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139},{&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139},{&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139},{&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139},{&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139,&p_3313->g_3139}}, // p_3313->g_3138
        {{{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011}},{{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011}},{{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011},{&p_3313->g_3011,&p_3313->g_3011,&p_3313->g_3011,(void*)0,&p_3313->g_3011,(void*)0,&p_3313->g_3011}}}, // p_3313->g_3148
        &p_3313->g_3013[1], // p_3313->g_3153
        {0x69DF9029L,-1L,0x3AL,0x92DFA9286BE15865L,3UL}, // p_3313->g_3204
        {0L}, // p_3313->g_3227
        {0x4DF1DCCCL,0x0A3DL,0x95L,0xD3587DD74CC585E6L,0xD6L}, // p_3313->g_3262
        (void*)0, // p_3313->g_3279
        &p_3313->g_3279, // p_3313->g_3278
        {0x75EB1CA8L,0x6E34L,0xDDL,1UL,0x5BL}, // p_3313->g_3291
        &p_3313->g_3291, // p_3313->g_3292
        {0x6176C007L,0x147DL,1UL,0xA7B31A40E1C29FAFL,0xE2L}, // p_3313->g_3299
    };
    c_3314 = c_3315;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_3313);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_3313->g_10, "p_3313->g_10", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_3313->g_15[i][j][k], "p_3313->g_15[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_23.f0, "p_3313->g_23.f0", print_hash_value);
    transparent_crc(p_3313->g_23.f1, "p_3313->g_23.f1", print_hash_value);
    transparent_crc(p_3313->g_23.f2, "p_3313->g_23.f2", print_hash_value);
    transparent_crc(p_3313->g_23.f3, "p_3313->g_23.f3", print_hash_value);
    transparent_crc(p_3313->g_23.f4, "p_3313->g_23.f4", print_hash_value);
    transparent_crc(p_3313->g_31, "p_3313->g_31", print_hash_value);
    transparent_crc(p_3313->g_37, "p_3313->g_37", print_hash_value);
    transparent_crc(p_3313->g_38, "p_3313->g_38", print_hash_value);
    transparent_crc(p_3313->g_56, "p_3313->g_56", print_hash_value);
    transparent_crc(p_3313->g_57, "p_3313->g_57", print_hash_value);
    transparent_crc(p_3313->g_105, "p_3313->g_105", print_hash_value);
    transparent_crc(p_3313->g_119, "p_3313->g_119", print_hash_value);
    transparent_crc(p_3313->g_121, "p_3313->g_121", print_hash_value);
    transparent_crc(p_3313->g_145, "p_3313->g_145", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_3313->g_178[i], "p_3313->g_178[i]", print_hash_value);

    }
    transparent_crc(p_3313->g_202, "p_3313->g_202", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_3313->g_205[i], "p_3313->g_205[i]", print_hash_value);

    }
    transparent_crc(p_3313->g_209.f0, "p_3313->g_209.f0", print_hash_value);
    transparent_crc(p_3313->g_209.f1, "p_3313->g_209.f1", print_hash_value);
    transparent_crc(p_3313->g_209.f2, "p_3313->g_209.f2", print_hash_value);
    transparent_crc(p_3313->g_209.f3, "p_3313->g_209.f3", print_hash_value);
    transparent_crc(p_3313->g_209.f4, "p_3313->g_209.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_3313->g_210[i].f0, "p_3313->g_210[i].f0", print_hash_value);
        transparent_crc(p_3313->g_210[i].f1, "p_3313->g_210[i].f1", print_hash_value);
        transparent_crc(p_3313->g_210[i].f2, "p_3313->g_210[i].f2", print_hash_value);
        transparent_crc(p_3313->g_210[i].f3, "p_3313->g_210[i].f3", print_hash_value);
        transparent_crc(p_3313->g_210[i].f4, "p_3313->g_210[i].f4", print_hash_value);

    }
    transparent_crc(p_3313->g_211.f0, "p_3313->g_211.f0", print_hash_value);
    transparent_crc(p_3313->g_211.f1, "p_3313->g_211.f1", print_hash_value);
    transparent_crc(p_3313->g_211.f2, "p_3313->g_211.f2", print_hash_value);
    transparent_crc(p_3313->g_211.f3, "p_3313->g_211.f3", print_hash_value);
    transparent_crc(p_3313->g_211.f4, "p_3313->g_211.f4", print_hash_value);
    transparent_crc(p_3313->g_212.f0, "p_3313->g_212.f0", print_hash_value);
    transparent_crc(p_3313->g_212.f1, "p_3313->g_212.f1", print_hash_value);
    transparent_crc(p_3313->g_212.f2, "p_3313->g_212.f2", print_hash_value);
    transparent_crc(p_3313->g_212.f3, "p_3313->g_212.f3", print_hash_value);
    transparent_crc(p_3313->g_212.f4, "p_3313->g_212.f4", print_hash_value);
    transparent_crc(p_3313->g_213.f0, "p_3313->g_213.f0", print_hash_value);
    transparent_crc(p_3313->g_213.f1, "p_3313->g_213.f1", print_hash_value);
    transparent_crc(p_3313->g_213.f2, "p_3313->g_213.f2", print_hash_value);
    transparent_crc(p_3313->g_213.f3, "p_3313->g_213.f3", print_hash_value);
    transparent_crc(p_3313->g_213.f4, "p_3313->g_213.f4", print_hash_value);
    transparent_crc(p_3313->g_214.f0, "p_3313->g_214.f0", print_hash_value);
    transparent_crc(p_3313->g_214.f1, "p_3313->g_214.f1", print_hash_value);
    transparent_crc(p_3313->g_214.f2, "p_3313->g_214.f2", print_hash_value);
    transparent_crc(p_3313->g_214.f3, "p_3313->g_214.f3", print_hash_value);
    transparent_crc(p_3313->g_214.f4, "p_3313->g_214.f4", print_hash_value);
    transparent_crc(p_3313->g_215.f0, "p_3313->g_215.f0", print_hash_value);
    transparent_crc(p_3313->g_215.f1, "p_3313->g_215.f1", print_hash_value);
    transparent_crc(p_3313->g_215.f2, "p_3313->g_215.f2", print_hash_value);
    transparent_crc(p_3313->g_215.f3, "p_3313->g_215.f3", print_hash_value);
    transparent_crc(p_3313->g_215.f4, "p_3313->g_215.f4", print_hash_value);
    transparent_crc(p_3313->g_216.f0, "p_3313->g_216.f0", print_hash_value);
    transparent_crc(p_3313->g_216.f1, "p_3313->g_216.f1", print_hash_value);
    transparent_crc(p_3313->g_216.f2, "p_3313->g_216.f2", print_hash_value);
    transparent_crc(p_3313->g_216.f3, "p_3313->g_216.f3", print_hash_value);
    transparent_crc(p_3313->g_216.f4, "p_3313->g_216.f4", print_hash_value);
    transparent_crc(p_3313->g_217.f0, "p_3313->g_217.f0", print_hash_value);
    transparent_crc(p_3313->g_217.f1, "p_3313->g_217.f1", print_hash_value);
    transparent_crc(p_3313->g_217.f2, "p_3313->g_217.f2", print_hash_value);
    transparent_crc(p_3313->g_217.f3, "p_3313->g_217.f3", print_hash_value);
    transparent_crc(p_3313->g_217.f4, "p_3313->g_217.f4", print_hash_value);
    transparent_crc(p_3313->g_218.f0, "p_3313->g_218.f0", print_hash_value);
    transparent_crc(p_3313->g_218.f1, "p_3313->g_218.f1", print_hash_value);
    transparent_crc(p_3313->g_218.f2, "p_3313->g_218.f2", print_hash_value);
    transparent_crc(p_3313->g_218.f3, "p_3313->g_218.f3", print_hash_value);
    transparent_crc(p_3313->g_218.f4, "p_3313->g_218.f4", print_hash_value);
    transparent_crc(p_3313->g_219.f0, "p_3313->g_219.f0", print_hash_value);
    transparent_crc(p_3313->g_219.f1, "p_3313->g_219.f1", print_hash_value);
    transparent_crc(p_3313->g_219.f2, "p_3313->g_219.f2", print_hash_value);
    transparent_crc(p_3313->g_219.f3, "p_3313->g_219.f3", print_hash_value);
    transparent_crc(p_3313->g_219.f4, "p_3313->g_219.f4", print_hash_value);
    transparent_crc(p_3313->g_220.f0, "p_3313->g_220.f0", print_hash_value);
    transparent_crc(p_3313->g_220.f1, "p_3313->g_220.f1", print_hash_value);
    transparent_crc(p_3313->g_220.f2, "p_3313->g_220.f2", print_hash_value);
    transparent_crc(p_3313->g_220.f3, "p_3313->g_220.f3", print_hash_value);
    transparent_crc(p_3313->g_220.f4, "p_3313->g_220.f4", print_hash_value);
    transparent_crc(p_3313->g_221.f0, "p_3313->g_221.f0", print_hash_value);
    transparent_crc(p_3313->g_221.f1, "p_3313->g_221.f1", print_hash_value);
    transparent_crc(p_3313->g_221.f2, "p_3313->g_221.f2", print_hash_value);
    transparent_crc(p_3313->g_221.f3, "p_3313->g_221.f3", print_hash_value);
    transparent_crc(p_3313->g_221.f4, "p_3313->g_221.f4", print_hash_value);
    transparent_crc(p_3313->g_222.f0, "p_3313->g_222.f0", print_hash_value);
    transparent_crc(p_3313->g_222.f1, "p_3313->g_222.f1", print_hash_value);
    transparent_crc(p_3313->g_222.f2, "p_3313->g_222.f2", print_hash_value);
    transparent_crc(p_3313->g_222.f3, "p_3313->g_222.f3", print_hash_value);
    transparent_crc(p_3313->g_222.f4, "p_3313->g_222.f4", print_hash_value);
    transparent_crc(p_3313->g_240, "p_3313->g_240", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_3313->g_249[i].f0, "p_3313->g_249[i].f0", print_hash_value);
        transparent_crc(p_3313->g_249[i].f1, "p_3313->g_249[i].f1", print_hash_value);
        transparent_crc(p_3313->g_249[i].f2, "p_3313->g_249[i].f2", print_hash_value);
        transparent_crc(p_3313->g_249[i].f3, "p_3313->g_249[i].f3", print_hash_value);
        transparent_crc(p_3313->g_249[i].f4, "p_3313->g_249[i].f4", print_hash_value);

    }
    transparent_crc(p_3313->g_250, "p_3313->g_250", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_3313->g_284[i][j], "p_3313->g_284[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_3313->g_314[i][j][k], "p_3313->g_314[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_330, "p_3313->g_330", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_3313->g_362[i], "p_3313->g_362[i]", print_hash_value);

    }
    transparent_crc(p_3313->g_412, "p_3313->g_412", print_hash_value);
    transparent_crc(p_3313->g_440, "p_3313->g_440", print_hash_value);
    transparent_crc(p_3313->g_447, "p_3313->g_447", print_hash_value);
    transparent_crc(p_3313->g_450.f0, "p_3313->g_450.f0", print_hash_value);
    transparent_crc(p_3313->g_463, "p_3313->g_463", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_3313->g_464[i], "p_3313->g_464[i]", print_hash_value);

    }
    transparent_crc(p_3313->g_465, "p_3313->g_465", print_hash_value);
    transparent_crc(p_3313->g_466, "p_3313->g_466", print_hash_value);
    transparent_crc(p_3313->g_467, "p_3313->g_467", print_hash_value);
    transparent_crc(p_3313->g_468, "p_3313->g_468", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_3313->g_469[i][j], "p_3313->g_469[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3313->g_470, "p_3313->g_470", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_3313->g_471[i], "p_3313->g_471[i]", print_hash_value);

    }
    transparent_crc(p_3313->g_472, "p_3313->g_472", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_3313->g_473[i][j][k], "p_3313->g_473[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_474, "p_3313->g_474", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_3313->g_475[i][j], "p_3313->g_475[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_3313->g_476[i][j][k], "p_3313->g_476[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_3313->g_477[i][j][k], "p_3313->g_477[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_3313->g_478[i][j], "p_3313->g_478[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3313->g_479, "p_3313->g_479", print_hash_value);
    transparent_crc(p_3313->g_480, "p_3313->g_480", print_hash_value);
    transparent_crc(p_3313->g_481, "p_3313->g_481", print_hash_value);
    transparent_crc(p_3313->g_482, "p_3313->g_482", print_hash_value);
    transparent_crc(p_3313->g_483, "p_3313->g_483", print_hash_value);
    transparent_crc(p_3313->g_484, "p_3313->g_484", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_3313->g_485[i][j][k], "p_3313->g_485[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_486, "p_3313->g_486", print_hash_value);
    transparent_crc(p_3313->g_487, "p_3313->g_487", print_hash_value);
    transparent_crc(p_3313->g_488, "p_3313->g_488", print_hash_value);
    transparent_crc(p_3313->g_489, "p_3313->g_489", print_hash_value);
    transparent_crc(p_3313->g_490, "p_3313->g_490", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_3313->g_491[i][j][k], "p_3313->g_491[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_494, "p_3313->g_494", print_hash_value);
    transparent_crc(p_3313->g_544, "p_3313->g_544", print_hash_value);
    transparent_crc(p_3313->g_570, "p_3313->g_570", print_hash_value);
    transparent_crc(p_3313->g_674.f0, "p_3313->g_674.f0", print_hash_value);
    transparent_crc(p_3313->g_714, "p_3313->g_714", print_hash_value);
    transparent_crc(p_3313->g_748.f0, "p_3313->g_748.f0", print_hash_value);
    transparent_crc(p_3313->g_827, "p_3313->g_827", print_hash_value);
    transparent_crc(p_3313->g_879.f0, "p_3313->g_879.f0", print_hash_value);
    transparent_crc(p_3313->g_879.f1, "p_3313->g_879.f1", print_hash_value);
    transparent_crc(p_3313->g_879.f2, "p_3313->g_879.f2", print_hash_value);
    transparent_crc(p_3313->g_879.f3, "p_3313->g_879.f3", print_hash_value);
    transparent_crc(p_3313->g_879.f4, "p_3313->g_879.f4", print_hash_value);
    transparent_crc(p_3313->g_881.f0, "p_3313->g_881.f0", print_hash_value);
    transparent_crc(p_3313->g_881.f1, "p_3313->g_881.f1", print_hash_value);
    transparent_crc(p_3313->g_881.f2, "p_3313->g_881.f2", print_hash_value);
    transparent_crc(p_3313->g_881.f3, "p_3313->g_881.f3", print_hash_value);
    transparent_crc(p_3313->g_881.f4, "p_3313->g_881.f4", print_hash_value);
    transparent_crc(p_3313->g_891.f0, "p_3313->g_891.f0", print_hash_value);
    transparent_crc(p_3313->g_917.f0, "p_3313->g_917.f0", print_hash_value);
    transparent_crc(p_3313->g_918.f0, "p_3313->g_918.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_3313->g_919[i].f0, "p_3313->g_919[i].f0", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_3313->g_920[i].f0, "p_3313->g_920[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_921.f0, "p_3313->g_921.f0", print_hash_value);
    transparent_crc(p_3313->g_922.f0, "p_3313->g_922.f0", print_hash_value);
    transparent_crc(p_3313->g_923.f0, "p_3313->g_923.f0", print_hash_value);
    transparent_crc(p_3313->g_924.f0, "p_3313->g_924.f0", print_hash_value);
    transparent_crc(p_3313->g_925.f0, "p_3313->g_925.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_3313->g_926[i].f0, "p_3313->g_926[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_927.f0, "p_3313->g_927.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_3313->g_928[i].f0, "p_3313->g_928[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_929.f0, "p_3313->g_929.f0", print_hash_value);
    transparent_crc(p_3313->g_930.f0, "p_3313->g_930.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_3313->g_931[i].f0, "p_3313->g_931[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_932.f0, "p_3313->g_932.f0", print_hash_value);
    transparent_crc(p_3313->g_933.f0, "p_3313->g_933.f0", print_hash_value);
    transparent_crc(p_3313->g_934.f0, "p_3313->g_934.f0", print_hash_value);
    transparent_crc(p_3313->g_935.f0, "p_3313->g_935.f0", print_hash_value);
    transparent_crc(p_3313->g_936.f0, "p_3313->g_936.f0", print_hash_value);
    transparent_crc(p_3313->g_937.f0, "p_3313->g_937.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_3313->g_938[i].f0, "p_3313->g_938[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_939.f0, "p_3313->g_939.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_3313->g_940[i].f0, "p_3313->g_940[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_941.f0, "p_3313->g_941.f0", print_hash_value);
    transparent_crc(p_3313->g_942.f0, "p_3313->g_942.f0", print_hash_value);
    transparent_crc(p_3313->g_943.f0, "p_3313->g_943.f0", print_hash_value);
    transparent_crc(p_3313->g_944.f0, "p_3313->g_944.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_3313->g_945[i][j][k].f0, "p_3313->g_945[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_946.f0, "p_3313->g_946.f0", print_hash_value);
    transparent_crc(p_3313->g_947.f0, "p_3313->g_947.f0", print_hash_value);
    transparent_crc(p_3313->g_948.f0, "p_3313->g_948.f0", print_hash_value);
    transparent_crc(p_3313->g_949.f0, "p_3313->g_949.f0", print_hash_value);
    transparent_crc(p_3313->g_950.f0, "p_3313->g_950.f0", print_hash_value);
    transparent_crc(p_3313->g_951.f0, "p_3313->g_951.f0", print_hash_value);
    transparent_crc(p_3313->g_952.f0, "p_3313->g_952.f0", print_hash_value);
    transparent_crc(p_3313->g_953.f0, "p_3313->g_953.f0", print_hash_value);
    transparent_crc(p_3313->g_954.f0, "p_3313->g_954.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_3313->g_955[i].f0, "p_3313->g_955[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_956.f0, "p_3313->g_956.f0", print_hash_value);
    transparent_crc(p_3313->g_957.f0, "p_3313->g_957.f0", print_hash_value);
    transparent_crc(p_3313->g_958.f0, "p_3313->g_958.f0", print_hash_value);
    transparent_crc(p_3313->g_959.f0, "p_3313->g_959.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_3313->g_960[i][j][k].f0, "p_3313->g_960[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_961.f0, "p_3313->g_961.f0", print_hash_value);
    transparent_crc(p_3313->g_962.f0, "p_3313->g_962.f0", print_hash_value);
    transparent_crc(p_3313->g_963.f0, "p_3313->g_963.f0", print_hash_value);
    transparent_crc(p_3313->g_964.f0, "p_3313->g_964.f0", print_hash_value);
    transparent_crc(p_3313->g_965.f0, "p_3313->g_965.f0", print_hash_value);
    transparent_crc(p_3313->g_966.f0, "p_3313->g_966.f0", print_hash_value);
    transparent_crc(p_3313->g_967.f0, "p_3313->g_967.f0", print_hash_value);
    transparent_crc(p_3313->g_968.f0, "p_3313->g_968.f0", print_hash_value);
    transparent_crc(p_3313->g_969.f0, "p_3313->g_969.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_3313->g_970[i].f0, "p_3313->g_970[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_971.f0, "p_3313->g_971.f0", print_hash_value);
    transparent_crc(p_3313->g_972.f0, "p_3313->g_972.f0", print_hash_value);
    transparent_crc(p_3313->g_973.f0, "p_3313->g_973.f0", print_hash_value);
    transparent_crc(p_3313->g_974.f0, "p_3313->g_974.f0", print_hash_value);
    transparent_crc(p_3313->g_975.f0, "p_3313->g_975.f0", print_hash_value);
    transparent_crc(p_3313->g_976.f0, "p_3313->g_976.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_3313->g_977[i].f0, "p_3313->g_977[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_978.f0, "p_3313->g_978.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_3313->g_979[i].f0, "p_3313->g_979[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_980.f0, "p_3313->g_980.f0", print_hash_value);
    transparent_crc(p_3313->g_981.f0, "p_3313->g_981.f0", print_hash_value);
    transparent_crc(p_3313->g_982.f0, "p_3313->g_982.f0", print_hash_value);
    transparent_crc(p_3313->g_983.f0, "p_3313->g_983.f0", print_hash_value);
    transparent_crc(p_3313->g_984.f0, "p_3313->g_984.f0", print_hash_value);
    transparent_crc(p_3313->g_985.f0, "p_3313->g_985.f0", print_hash_value);
    transparent_crc(p_3313->g_986.f0, "p_3313->g_986.f0", print_hash_value);
    transparent_crc(p_3313->g_987.f0, "p_3313->g_987.f0", print_hash_value);
    transparent_crc(p_3313->g_988.f0, "p_3313->g_988.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_3313->g_989[i].f0, "p_3313->g_989[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_990.f0, "p_3313->g_990.f0", print_hash_value);
    transparent_crc(p_3313->g_991.f0, "p_3313->g_991.f0", print_hash_value);
    transparent_crc(p_3313->g_992.f0, "p_3313->g_992.f0", print_hash_value);
    transparent_crc(p_3313->g_993.f0, "p_3313->g_993.f0", print_hash_value);
    transparent_crc(p_3313->g_994.f0, "p_3313->g_994.f0", print_hash_value);
    transparent_crc(p_3313->g_997.f0, "p_3313->g_997.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_3313->g_1068[i], "p_3313->g_1068[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_3313->g_1126[i][j][k], "p_3313->g_1126[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_3313->g_1150[i].f0, "p_3313->g_1150[i].f0", print_hash_value);
        transparent_crc(p_3313->g_1150[i].f1, "p_3313->g_1150[i].f1", print_hash_value);
        transparent_crc(p_3313->g_1150[i].f2, "p_3313->g_1150[i].f2", print_hash_value);
        transparent_crc(p_3313->g_1150[i].f3, "p_3313->g_1150[i].f3", print_hash_value);
        transparent_crc(p_3313->g_1150[i].f4, "p_3313->g_1150[i].f4", print_hash_value);

    }
    transparent_crc(p_3313->g_1153.f0, "p_3313->g_1153.f0", print_hash_value);
    transparent_crc(p_3313->g_1153.f1, "p_3313->g_1153.f1", print_hash_value);
    transparent_crc(p_3313->g_1153.f2, "p_3313->g_1153.f2", print_hash_value);
    transparent_crc(p_3313->g_1153.f3, "p_3313->g_1153.f3", print_hash_value);
    transparent_crc(p_3313->g_1153.f4, "p_3313->g_1153.f4", print_hash_value);
    transparent_crc(p_3313->g_1254.f0, "p_3313->g_1254.f0", print_hash_value);
    transparent_crc(p_3313->g_1254.f1, "p_3313->g_1254.f1", print_hash_value);
    transparent_crc(p_3313->g_1254.f2, "p_3313->g_1254.f2", print_hash_value);
    transparent_crc(p_3313->g_1254.f3, "p_3313->g_1254.f3", print_hash_value);
    transparent_crc(p_3313->g_1254.f4, "p_3313->g_1254.f4", print_hash_value);
    transparent_crc(p_3313->g_1319, "p_3313->g_1319", print_hash_value);
    transparent_crc(p_3313->g_1347.f0, "p_3313->g_1347.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_3313->g_1402[i].f0, "p_3313->g_1402[i].f0", print_hash_value);
        transparent_crc(p_3313->g_1402[i].f1, "p_3313->g_1402[i].f1", print_hash_value);
        transparent_crc(p_3313->g_1402[i].f2, "p_3313->g_1402[i].f2", print_hash_value);
        transparent_crc(p_3313->g_1402[i].f3, "p_3313->g_1402[i].f3", print_hash_value);
        transparent_crc(p_3313->g_1402[i].f4, "p_3313->g_1402[i].f4", print_hash_value);

    }
    transparent_crc(p_3313->g_1403.f0, "p_3313->g_1403.f0", print_hash_value);
    transparent_crc(p_3313->g_1403.f1, "p_3313->g_1403.f1", print_hash_value);
    transparent_crc(p_3313->g_1403.f2, "p_3313->g_1403.f2", print_hash_value);
    transparent_crc(p_3313->g_1403.f3, "p_3313->g_1403.f3", print_hash_value);
    transparent_crc(p_3313->g_1403.f4, "p_3313->g_1403.f4", print_hash_value);
    transparent_crc(p_3313->g_1416, "p_3313->g_1416", print_hash_value);
    transparent_crc(p_3313->g_1446.f0, "p_3313->g_1446.f0", print_hash_value);
    transparent_crc(p_3313->g_1446.f1, "p_3313->g_1446.f1", print_hash_value);
    transparent_crc(p_3313->g_1446.f2, "p_3313->g_1446.f2", print_hash_value);
    transparent_crc(p_3313->g_1446.f3, "p_3313->g_1446.f3", print_hash_value);
    transparent_crc(p_3313->g_1446.f4, "p_3313->g_1446.f4", print_hash_value);
    transparent_crc(p_3313->g_1451.f0, "p_3313->g_1451.f0", print_hash_value);
    transparent_crc(p_3313->g_1568, "p_3313->g_1568", print_hash_value);
    transparent_crc(p_3313->g_1620, "p_3313->g_1620", print_hash_value);
    transparent_crc(p_3313->g_1632.f0, "p_3313->g_1632.f0", print_hash_value);
    transparent_crc(p_3313->g_1632.f1, "p_3313->g_1632.f1", print_hash_value);
    transparent_crc(p_3313->g_1632.f2, "p_3313->g_1632.f2", print_hash_value);
    transparent_crc(p_3313->g_1632.f3, "p_3313->g_1632.f3", print_hash_value);
    transparent_crc(p_3313->g_1632.f4, "p_3313->g_1632.f4", print_hash_value);
    transparent_crc(p_3313->g_1669.f0, "p_3313->g_1669.f0", print_hash_value);
    transparent_crc(p_3313->g_1683.f0, "p_3313->g_1683.f0", print_hash_value);
    transparent_crc(p_3313->g_1734.f0, "p_3313->g_1734.f0", print_hash_value);
    transparent_crc(p_3313->g_1734.f1, "p_3313->g_1734.f1", print_hash_value);
    transparent_crc(p_3313->g_1734.f2, "p_3313->g_1734.f2", print_hash_value);
    transparent_crc(p_3313->g_1734.f3, "p_3313->g_1734.f3", print_hash_value);
    transparent_crc(p_3313->g_1734.f4, "p_3313->g_1734.f4", print_hash_value);
    transparent_crc(p_3313->g_1745, "p_3313->g_1745", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_3313->g_1799[i][j][k].f0, "p_3313->g_1799[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_3313->g_1865[i], "p_3313->g_1865[i]", print_hash_value);

    }
    transparent_crc(p_3313->g_1869, "p_3313->g_1869", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_3313->g_1929[i][j].f0, "p_3313->g_1929[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_3313->g_1932.f0, "p_3313->g_1932.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_3313->g_1970[i][j], "p_3313->g_1970[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_3313->g_1989[i][j][k], "p_3313->g_1989[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_3313->g_1990[i][j][k], "p_3313->g_1990[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_2020.f0, "p_3313->g_2020.f0", print_hash_value);
    transparent_crc(p_3313->g_2020.f1, "p_3313->g_2020.f1", print_hash_value);
    transparent_crc(p_3313->g_2020.f2, "p_3313->g_2020.f2", print_hash_value);
    transparent_crc(p_3313->g_2020.f3, "p_3313->g_2020.f3", print_hash_value);
    transparent_crc(p_3313->g_2020.f4, "p_3313->g_2020.f4", print_hash_value);
    transparent_crc(p_3313->g_2049.f0, "p_3313->g_2049.f0", print_hash_value);
    transparent_crc(p_3313->g_2049.f1, "p_3313->g_2049.f1", print_hash_value);
    transparent_crc(p_3313->g_2049.f2, "p_3313->g_2049.f2", print_hash_value);
    transparent_crc(p_3313->g_2049.f3, "p_3313->g_2049.f3", print_hash_value);
    transparent_crc(p_3313->g_2049.f4, "p_3313->g_2049.f4", print_hash_value);
    transparent_crc(p_3313->g_2074, "p_3313->g_2074", print_hash_value);
    transparent_crc(p_3313->g_2078, "p_3313->g_2078", print_hash_value);
    transparent_crc(p_3313->g_2136.f0, "p_3313->g_2136.f0", print_hash_value);
    transparent_crc(p_3313->g_2161.f0, "p_3313->g_2161.f0", print_hash_value);
    transparent_crc(p_3313->g_2161.f1, "p_3313->g_2161.f1", print_hash_value);
    transparent_crc(p_3313->g_2161.f2, "p_3313->g_2161.f2", print_hash_value);
    transparent_crc(p_3313->g_2161.f3, "p_3313->g_2161.f3", print_hash_value);
    transparent_crc(p_3313->g_2161.f4, "p_3313->g_2161.f4", print_hash_value);
    transparent_crc(p_3313->g_2210.f0, "p_3313->g_2210.f0", print_hash_value);
    transparent_crc(p_3313->g_2210.f1, "p_3313->g_2210.f1", print_hash_value);
    transparent_crc(p_3313->g_2210.f2, "p_3313->g_2210.f2", print_hash_value);
    transparent_crc(p_3313->g_2210.f3, "p_3313->g_2210.f3", print_hash_value);
    transparent_crc(p_3313->g_2210.f4, "p_3313->g_2210.f4", print_hash_value);
    transparent_crc(p_3313->g_2228, "p_3313->g_2228", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_3313->g_2316[i][j].f0, "p_3313->g_2316[i][j].f0", print_hash_value);
            transparent_crc(p_3313->g_2316[i][j].f1, "p_3313->g_2316[i][j].f1", print_hash_value);
            transparent_crc(p_3313->g_2316[i][j].f2, "p_3313->g_2316[i][j].f2", print_hash_value);
            transparent_crc(p_3313->g_2316[i][j].f3, "p_3313->g_2316[i][j].f3", print_hash_value);
            transparent_crc(p_3313->g_2316[i][j].f4, "p_3313->g_2316[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_3313->g_2339, "p_3313->g_2339", print_hash_value);
    transparent_crc(p_3313->g_2347, "p_3313->g_2347", print_hash_value);
    transparent_crc(p_3313->g_2377, "p_3313->g_2377", print_hash_value);
    transparent_crc(p_3313->g_2396.f0, "p_3313->g_2396.f0", print_hash_value);
    transparent_crc(p_3313->g_2396.f1, "p_3313->g_2396.f1", print_hash_value);
    transparent_crc(p_3313->g_2396.f2, "p_3313->g_2396.f2", print_hash_value);
    transparent_crc(p_3313->g_2396.f3, "p_3313->g_2396.f3", print_hash_value);
    transparent_crc(p_3313->g_2396.f4, "p_3313->g_2396.f4", print_hash_value);
    transparent_crc(p_3313->g_2491, "p_3313->g_2491", print_hash_value);
    transparent_crc(p_3313->g_2513, "p_3313->g_2513", print_hash_value);
    transparent_crc(p_3313->g_2545.f0, "p_3313->g_2545.f0", print_hash_value);
    transparent_crc(p_3313->g_2545.f1, "p_3313->g_2545.f1", print_hash_value);
    transparent_crc(p_3313->g_2545.f2, "p_3313->g_2545.f2", print_hash_value);
    transparent_crc(p_3313->g_2545.f3, "p_3313->g_2545.f3", print_hash_value);
    transparent_crc(p_3313->g_2545.f4, "p_3313->g_2545.f4", print_hash_value);
    transparent_crc(p_3313->g_2560, "p_3313->g_2560", print_hash_value);
    transparent_crc(p_3313->g_2609, "p_3313->g_2609", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_3313->g_2639[i][j][k].f0, "p_3313->g_2639[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_2698, "p_3313->g_2698", print_hash_value);
    transparent_crc(p_3313->g_2731.f0, "p_3313->g_2731.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_3313->g_2735[i].f0, "p_3313->g_2735[i].f0", print_hash_value);
        transparent_crc(p_3313->g_2735[i].f1, "p_3313->g_2735[i].f1", print_hash_value);
        transparent_crc(p_3313->g_2735[i].f2, "p_3313->g_2735[i].f2", print_hash_value);
        transparent_crc(p_3313->g_2735[i].f3, "p_3313->g_2735[i].f3", print_hash_value);
        transparent_crc(p_3313->g_2735[i].f4, "p_3313->g_2735[i].f4", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_3313->g_2787[i], "p_3313->g_2787[i]", print_hash_value);

    }
    transparent_crc(p_3313->g_2795.f0, "p_3313->g_2795.f0", print_hash_value);
    transparent_crc(p_3313->g_2795.f1, "p_3313->g_2795.f1", print_hash_value);
    transparent_crc(p_3313->g_2795.f2, "p_3313->g_2795.f2", print_hash_value);
    transparent_crc(p_3313->g_2795.f3, "p_3313->g_2795.f3", print_hash_value);
    transparent_crc(p_3313->g_2795.f4, "p_3313->g_2795.f4", print_hash_value);
    transparent_crc(p_3313->g_2799.f0, "p_3313->g_2799.f0", print_hash_value);
    transparent_crc(p_3313->g_2799.f1, "p_3313->g_2799.f1", print_hash_value);
    transparent_crc(p_3313->g_2799.f2, "p_3313->g_2799.f2", print_hash_value);
    transparent_crc(p_3313->g_2799.f3, "p_3313->g_2799.f3", print_hash_value);
    transparent_crc(p_3313->g_2799.f4, "p_3313->g_2799.f4", print_hash_value);
    transparent_crc(p_3313->g_2800.f0, "p_3313->g_2800.f0", print_hash_value);
    transparent_crc(p_3313->g_2800.f1, "p_3313->g_2800.f1", print_hash_value);
    transparent_crc(p_3313->g_2800.f2, "p_3313->g_2800.f2", print_hash_value);
    transparent_crc(p_3313->g_2800.f3, "p_3313->g_2800.f3", print_hash_value);
    transparent_crc(p_3313->g_2800.f4, "p_3313->g_2800.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_3313->g_2816[i][j], "p_3313->g_2816[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_3313->g_2850[i].f0, "p_3313->g_2850[i].f0", print_hash_value);

    }
    transparent_crc(p_3313->g_2862.f0, "p_3313->g_2862.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_3313->g_2874[i], "p_3313->g_2874[i]", print_hash_value);

    }
    transparent_crc(p_3313->g_2942.f0, "p_3313->g_2942.f0", print_hash_value);
    transparent_crc(p_3313->g_2942.f1, "p_3313->g_2942.f1", print_hash_value);
    transparent_crc(p_3313->g_2942.f2, "p_3313->g_2942.f2", print_hash_value);
    transparent_crc(p_3313->g_2942.f3, "p_3313->g_2942.f3", print_hash_value);
    transparent_crc(p_3313->g_2942.f4, "p_3313->g_2942.f4", print_hash_value);
    transparent_crc(p_3313->g_2949.f0, "p_3313->g_2949.f0", print_hash_value);
    transparent_crc(p_3313->g_2949.f1, "p_3313->g_2949.f1", print_hash_value);
    transparent_crc(p_3313->g_2949.f2, "p_3313->g_2949.f2", print_hash_value);
    transparent_crc(p_3313->g_2949.f3, "p_3313->g_2949.f3", print_hash_value);
    transparent_crc(p_3313->g_2949.f4, "p_3313->g_2949.f4", print_hash_value);
    transparent_crc(p_3313->g_2966.f0, "p_3313->g_2966.f0", print_hash_value);
    transparent_crc(p_3313->g_2966.f1, "p_3313->g_2966.f1", print_hash_value);
    transparent_crc(p_3313->g_2966.f2, "p_3313->g_2966.f2", print_hash_value);
    transparent_crc(p_3313->g_2966.f3, "p_3313->g_2966.f3", print_hash_value);
    transparent_crc(p_3313->g_2966.f4, "p_3313->g_2966.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_3313->g_2967[i][j][k].f0, "p_3313->g_2967[i][j][k].f0", print_hash_value);
                transparent_crc(p_3313->g_2967[i][j][k].f1, "p_3313->g_2967[i][j][k].f1", print_hash_value);
                transparent_crc(p_3313->g_2967[i][j][k].f2, "p_3313->g_2967[i][j][k].f2", print_hash_value);
                transparent_crc(p_3313->g_2967[i][j][k].f3, "p_3313->g_2967[i][j][k].f3", print_hash_value);
                transparent_crc(p_3313->g_2967[i][j][k].f4, "p_3313->g_2967[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(p_3313->g_3009.f0, "p_3313->g_3009.f0", print_hash_value);
    transparent_crc(p_3313->g_3009.f1, "p_3313->g_3009.f1", print_hash_value);
    transparent_crc(p_3313->g_3009.f2, "p_3313->g_3009.f2", print_hash_value);
    transparent_crc(p_3313->g_3009.f3, "p_3313->g_3009.f3", print_hash_value);
    transparent_crc(p_3313->g_3009.f4, "p_3313->g_3009.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_3313->g_3130[i].f0, "p_3313->g_3130[i].f0", print_hash_value);
        transparent_crc(p_3313->g_3130[i].f1, "p_3313->g_3130[i].f1", print_hash_value);
        transparent_crc(p_3313->g_3130[i].f2, "p_3313->g_3130[i].f2", print_hash_value);
        transparent_crc(p_3313->g_3130[i].f3, "p_3313->g_3130[i].f3", print_hash_value);
        transparent_crc(p_3313->g_3130[i].f4, "p_3313->g_3130[i].f4", print_hash_value);

    }
    transparent_crc(p_3313->g_3146, "p_3313->g_3146", print_hash_value);
    transparent_crc(p_3313->g_3204.f0, "p_3313->g_3204.f0", print_hash_value);
    transparent_crc(p_3313->g_3204.f1, "p_3313->g_3204.f1", print_hash_value);
    transparent_crc(p_3313->g_3204.f2, "p_3313->g_3204.f2", print_hash_value);
    transparent_crc(p_3313->g_3204.f3, "p_3313->g_3204.f3", print_hash_value);
    transparent_crc(p_3313->g_3204.f4, "p_3313->g_3204.f4", print_hash_value);
    transparent_crc(p_3313->g_3227.f0, "p_3313->g_3227.f0", print_hash_value);
    transparent_crc(p_3313->g_3262.f0, "p_3313->g_3262.f0", print_hash_value);
    transparent_crc(p_3313->g_3262.f1, "p_3313->g_3262.f1", print_hash_value);
    transparent_crc(p_3313->g_3262.f2, "p_3313->g_3262.f2", print_hash_value);
    transparent_crc(p_3313->g_3262.f3, "p_3313->g_3262.f3", print_hash_value);
    transparent_crc(p_3313->g_3262.f4, "p_3313->g_3262.f4", print_hash_value);
    transparent_crc(p_3313->g_3291.f0, "p_3313->g_3291.f0", print_hash_value);
    transparent_crc(p_3313->g_3291.f1, "p_3313->g_3291.f1", print_hash_value);
    transparent_crc(p_3313->g_3291.f2, "p_3313->g_3291.f2", print_hash_value);
    transparent_crc(p_3313->g_3291.f3, "p_3313->g_3291.f3", print_hash_value);
    transparent_crc(p_3313->g_3291.f4, "p_3313->g_3291.f4", print_hash_value);
    transparent_crc(p_3313->g_3299.f0, "p_3313->g_3299.f0", print_hash_value);
    transparent_crc(p_3313->g_3299.f1, "p_3313->g_3299.f1", print_hash_value);
    transparent_crc(p_3313->g_3299.f2, "p_3313->g_3299.f2", print_hash_value);
    transparent_crc(p_3313->g_3299.f3, "p_3313->g_3299.f3", print_hash_value);
    transparent_crc(p_3313->g_3299.f4, "p_3313->g_3299.f4", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
