// -g 38,32,6 -l 1,8,6
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


// Seed: 2682981646

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   volatile int8_t  f1;
   volatile uint32_t  f2;
};

union U1 {
   uint64_t  f0;
   int64_t  f1;
   volatile int32_t  f2;
   uint64_t  f3;
};

struct S2 {
    int8_t g_30;
    int32_t g_37;
    int32_t *g_36;
    volatile union U1 g_42;
    int32_t g_52;
    uint8_t g_85[10][6][2];
    int32_t * volatile g_90;
    struct S0 g_101;
    uint32_t g_111[1];
    uint16_t g_114[3];
    volatile struct S0 g_117;
    uint32_t g_134;
    uint64_t g_138;
    uint64_t *g_137;
    uint16_t g_141;
    uint32_t g_142;
    uint16_t g_143;
    int16_t g_145;
    volatile union U1 g_162;
    int64_t g_184;
    int32_t ** volatile g_186[6];
    int32_t ** volatile g_187;
    struct S0 g_196[6];
    int32_t g_208[1];
    uint32_t g_244;
    int32_t g_249;
    volatile int64_t g_277;
    volatile struct S0 g_308;
    volatile struct S0 g_309;
    int8_t *g_335;
    int64_t g_358;
    volatile struct S0 g_396;
    volatile struct S0 * volatile g_397;
    int32_t ** volatile g_400;
    int32_t ** volatile g_401[6];
    uint8_t *g_412;
    uint8_t **g_411[3][7];
    uint8_t **g_414;
    uint8_t *** volatile g_413;
    int32_t ** volatile g_441;
    volatile union U1 g_458;
    uint32_t g_464[5];
    volatile union U1 g_498[8];
    volatile union U1 *g_533;
    union U1 *g_540;
    uint8_t g_545;
    int32_t g_546;
    int32_t *g_548;
    int64_t g_565;
    uint32_t g_578[8];
    union U1 g_595[6];
    volatile int32_t g_606;
    union U1 **g_624;
    union U1 ***g_623;
    struct S0 g_627;
    int32_t g_645;
    union U1 g_658;
    union U1 g_749;
    union U1 g_824;
    volatile uint16_t g_834[4];
    volatile uint16_t g_835[10][8][3];
    volatile uint16_t g_836[4][6][9];
    volatile uint16_t g_837[6][6];
    volatile uint16_t g_838;
    volatile uint16_t g_839;
    volatile uint16_t g_840;
    volatile uint16_t g_841[1][8];
    volatile uint16_t g_842;
    volatile uint16_t g_843;
    volatile uint16_t g_844;
    volatile uint16_t g_845;
    volatile uint16_t g_846[8];
    volatile uint16_t g_847;
    volatile uint16_t g_848;
    volatile uint16_t g_849;
    volatile uint16_t g_850;
    volatile uint16_t g_851;
    volatile uint16_t g_852;
    volatile uint16_t g_853[3][1];
    volatile uint16_t g_854;
    volatile uint16_t g_855;
    volatile uint16_t * volatile g_833[8][10];
    volatile uint16_t * volatile *g_832;
    volatile uint16_t * volatile * volatile *g_831;
    volatile union U1 g_894;
    volatile struct S0 g_895[6][10];
    volatile int16_t g_919;
    uint8_t ***g_992;
    uint8_t ****g_991;
    uint16_t *g_1017;
    uint16_t **g_1016;
    union U1 g_1060[9];
    struct S0 g_1073;
    union U1 g_1078;
    union U1 g_1090;
    volatile int32_t g_1158;
    int32_t ** volatile g_1161[5];
    int32_t ** volatile g_1162;
    int32_t ** volatile g_1172;
    int32_t ** volatile g_1173;
    int64_t g_1196;
    volatile int8_t g_1220[9][4][3];
    uint16_t ***g_1248[3];
    uint32_t **g_1274;
    int32_t ** volatile g_1276;
    int64_t *g_1284[10][3];
    int64_t **g_1283;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S2 * p_1287);
int32_t * func_2(int32_t * p_3, struct S2 * p_1287);
int32_t * func_4(int64_t  p_5, int32_t * p_6, struct S2 * p_1287);
int16_t  func_13(uint8_t  p_14, int16_t  p_15, int32_t * p_16, uint32_t  p_17, struct S2 * p_1287);
int16_t  func_19(uint32_t  p_20, int32_t * p_21, int32_t * p_22, int64_t  p_23, struct S2 * p_1287);
uint32_t  func_24(uint64_t  p_25, int32_t  p_26, int32_t * p_27, int32_t * p_28, int32_t * p_29, struct S2 * p_1287);
int32_t * func_31(int32_t * p_32, uint16_t  p_33, int32_t * p_34, int64_t  p_35, struct S2 * p_1287);
uint32_t  func_38(int32_t  p_39, struct S2 * p_1287);
int16_t  func_43(int32_t  p_44, uint64_t  p_45, int32_t * p_46, int32_t * p_47, int16_t  p_48, struct S2 * p_1287);
int32_t * func_70(int32_t * p_71, int32_t * p_72, int32_t * p_73, struct S2 * p_1287);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1287->g_30 p_1287->g_36 p_1287->g_37 p_1287->g_42 p_1287->g_52 p_1287->g_42.f0 p_1287->g_138 p_1287->g_145 p_1287->g_162 p_1287->g_114 p_1287->g_142 p_1287->g_143 p_1287->g_85 p_1287->g_101.f0 p_1287->g_187 p_1287->g_249 p_1287->g_309 p_1287->g_90 p_1287->g_335 p_1287->g_141 p_1287->g_396 p_1287->g_397 p_1287->g_413 p_1287->g_358 p_1287->g_208 p_1287->g_308.f1 p_1287->g_137 p_1287->g_441 p_1287->g_412 p_1287->g_458 p_1287->g_117.f0 p_1287->g_244 p_1287->g_464 p_1287->g_414 p_1287->g_498 p_1287->g_134 p_1287->g_546 p_1287->g_548 p_1287->g_565 p_1287->g_578 p_1287->g_111 p_1287->g_627 p_1287->g_645 p_1287->g_458.f0 p_1287->g_545 p_1287->g_308.f0 p_1287->g_749.f0 p_1287->g_533 p_1287->g_824 p_1287->g_831 p_1287->g_196 p_1287->g_894 p_1287->g_184 p_1287->g_824.f0 p_1287->g_991 p_1287->g_836 p_1287->g_832 p_1287->g_841 p_1287->g_1017 p_1287->g_1060 p_1287->g_623 p_1287->g_624 p_1287->g_1073 p_1287->g_1078 p_1287->g_658.f0 p_1287->g_1090 p_1287->g_101.f1 p_1287->g_101.f2 p_1287->g_1158 p_1287->g_1162 p_1287->g_1173 p_1287->g_595.f0 p_1287->g_162.f0 p_1287->g_1090.f3 p_1287->g_1090.f1 p_1287->g_308.f2 p_1287->g_834 p_1287->g_850 p_1287->g_1274 p_1287->g_1276 p_1287->g_1283 p_1287->g_1196
 * writes: p_1287->g_37 p_1287->g_52 p_1287->g_42.f2 p_1287->g_138 p_1287->g_141 p_1287->g_184 p_1287->g_36 p_1287->g_134 p_1287->g_30 p_1287->g_396 p_1287->g_411 p_1287->g_414 p_1287->g_358 p_1287->g_85 p_1287->g_208 p_1287->g_249 p_1287->g_464 p_1287->g_533 p_1287->g_540 p_1287->g_545 p_1287->g_143 p_1287->g_145 p_1287->g_565 p_1287->g_111 p_1287->g_623 p_1287->g_627 p_1287->g_546 p_1287->g_658.f0 p_1287->g_244 p_1287->g_895 p_1287->g_142 p_1287->g_196 p_1287->g_101 p_1287->g_824.f0 p_1287->g_991 p_1287->g_137 p_1287->g_1016 p_1287->g_578 p_1287->g_114 p_1287->g_1078.f1 p_1287->g_624 p_1287->g_1090.f3 p_1287->g_1090.f1 p_1287->g_832 p_1287->g_1248 p_1287->g_548
 */
uint64_t  func_1(struct S2 * p_1287)
{ /* block id: 4 */
    int32_t l_18 = 7L;
    int32_t *l_51 = &p_1287->g_52;
    int32_t *l_407[8] = {&p_1287->g_208[0],&p_1287->g_249,&p_1287->g_208[0],&p_1287->g_208[0],&p_1287->g_249,&p_1287->g_208[0],&p_1287->g_208[0],&p_1287->g_249};
    int32_t l_549[7][4];
    int64_t **l_1282 = (void*)0;
    uint16_t ***l_1285 = &p_1287->g_1016;
    int32_t l_1286 = 0x269C544FL;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
            l_549[i][j] = 9L;
    }
    (*p_1287->g_1276) = func_2(func_4((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(func_13(l_18, func_19((func_24(l_18, p_1287->g_30, func_31(p_1287->g_36, (((func_38((p_1287->g_37 ^ 0x5EA2L), p_1287) ^ (p_1287->g_42 , (((func_43((safe_sub_func_uint16_t_u_u(l_18, 0xE465L)), p_1287->g_30, l_51, l_51, (*l_51), p_1287) , p_1287->g_42.f0) , 1UL) == p_1287->g_52))) , &p_1287->g_37) != l_51), &p_1287->g_52, (*l_51), p_1287), &p_1287->g_52, &p_1287->g_52, p_1287) | l_18), l_407[7], l_407[0], p_1287->g_145, p_1287), p_1287->g_548, l_549[1][3], p_1287), p_1287->g_244)), (-7L))), p_1287->g_578[6])), &l_549[1][3], p_1287), p_1287);
    p_1287->g_249 |= (safe_mod_func_uint8_t_u_u((((*p_1287->g_397) , (*l_51)) > (safe_unary_minus_func_int8_t_s(((*p_1287->g_335) = (*p_1287->g_335))))), ((safe_sub_func_int32_t_s_s((l_1282 != p_1287->g_1283), (((l_1285 != &p_1287->g_1016) , (*l_51)) || ((l_1286 && p_1287->g_1196) < (*l_51))))) , (-1L))));
    return (*p_1287->g_137);
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_1090.f1 p_1287->g_308.f2 p_1287->g_249 p_1287->g_137 p_1287->g_138 p_1287->g_578 p_1287->g_208 p_1287->g_412 p_1287->g_85 p_1287->g_335 p_1287->g_30 p_1287->g_244 p_1287->g_52 p_1287->g_90 p_1287->g_645 p_1287->g_834 p_1287->g_831 p_1287->g_850 p_1287->g_141 p_1287->g_1274
 * writes: p_1287->g_1090.f1 p_1287->g_249 p_1287->g_52 p_1287->g_184 p_1287->g_143 p_1287->g_1078.f1 p_1287->g_832 p_1287->g_138 p_1287->g_1248 p_1287->g_85 p_1287->g_358 p_1287->g_208
 */
int32_t * func_2(int32_t * p_3, struct S2 * p_1287)
{ /* block id: 575 */
    int16_t l_1214 = 0L;
    int32_t l_1215 = 1L;
    int32_t l_1216 = 1L;
    int32_t l_1217 = 0x2C8ED0C5L;
    int32_t l_1218 = 0x3AD432DEL;
    int32_t l_1219[7];
    int32_t *l_1238 = &l_1216;
    int i;
    for (i = 0; i < 7; i++)
        l_1219[i] = 0x7B821628L;
    for (p_1287->g_1090.f1 = 0; (p_1287->g_1090.f1 <= 0); p_1287->g_1090.f1 += 1)
    { /* block id: 578 */
        int32_t *l_1209 = &p_1287->g_249;
        int32_t *l_1210 = &p_1287->g_645;
        int32_t *l_1211 = &p_1287->g_208[0];
        int32_t *l_1212 = &p_1287->g_208[0];
        int32_t *l_1213[1][6][3] = {{{&p_1287->g_249,&p_1287->g_249,&p_1287->g_249},{&p_1287->g_249,&p_1287->g_249,&p_1287->g_249},{&p_1287->g_249,&p_1287->g_249,&p_1287->g_249},{&p_1287->g_249,&p_1287->g_249,&p_1287->g_249},{&p_1287->g_249,&p_1287->g_249,&p_1287->g_249},{&p_1287->g_249,&p_1287->g_249,&p_1287->g_249}}};
        int64_t l_1221 = 0x73BF2C96CA9428FAL;
        uint64_t l_1222 = 18446744073709551610UL;
        uint64_t *l_1237 = &l_1222;
        int i, j, k;
        l_1222++;
        p_1287->g_52 |= (safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(p_1287->g_308.f2, ((*l_1209) ^= 0x213FED3AL))) > ((safe_sub_func_uint64_t_u_u(18446744073709551611UL, (*p_1287->g_137))) != 7UL)) & ((((((((p_1287->g_578[6] < ((l_1219[1] >= ((*l_1237) = ((safe_mul_func_uint8_t_u_u((l_1219[2] | l_1214), (*l_1211))) > l_1216))) ^ l_1219[0])) > 0L) & (*p_1287->g_412)) == (*p_1287->g_335)) , 8L) , 0x311723BC7F71D63AL) , 4294967292UL) <= l_1218)), p_1287->g_244)), 0x3FL)), 1UL));
        if ((*p_1287->g_90))
            break;
        for (p_1287->g_184 = 0; (p_1287->g_184 >= 0); p_1287->g_184 -= 1)
        { /* block id: 586 */
            int8_t *l_1241 = &p_1287->g_30;
            uint16_t l_1253 = 65535UL;
            l_1238 = ((*l_1210) , &l_1219[0]);
            for (l_1217 = 0; (l_1217 <= 0); l_1217 += 1)
            { /* block id: 590 */
                int8_t **l_1242 = &l_1241;
                uint16_t ****l_1247 = (void*)0;
                int32_t l_1271 = 0L;
                int64_t *l_1272 = &p_1287->g_358;
                uint32_t **l_1273 = (void*)0;
                int32_t l_1275 = 0x4EF17DA3L;
                int i;
                for (p_1287->g_143 = 0; (p_1287->g_143 <= 0); p_1287->g_143 += 1)
                { /* block id: 593 */
                    for (p_1287->g_1078.f1 = 3; (p_1287->g_1078.f1 >= 0); p_1287->g_1078.f1 -= 1)
                    { /* block id: 596 */
                        int i;
                        (*l_1238) ^= p_1287->g_834[l_1217];
                        (*p_1287->g_831) = (void*)0;
                    }
                }
                if (p_1287->g_834[l_1217])
                    continue;
                l_1275 &= ((*l_1238) = (((((*l_1242) = l_1241) == (void*)0) != (((*p_1287->g_137) = ((*l_1237) = (*l_1210))) < (safe_sub_func_int32_t_s_s(((*l_1211) ^= (safe_lshift_func_uint16_t_u_s(((p_1287->g_1248[2] = &p_1287->g_1016) != &p_1287->g_832), (safe_rshift_func_int8_t_s_s((*p_1287->g_335), ((((*l_1272) = ((safe_rshift_func_int16_t_s_u(l_1253, (*l_1210))) && (safe_sub_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(((((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(((*p_1287->g_412) = (safe_add_func_int16_t_s_s((((*l_1238) > (*l_1238)) <= (*l_1209)), 0L))), (*l_1238))) ^ p_1287->g_850) == 0x7D79L), (*l_1209))), 1L)) == l_1271) | l_1271) && l_1271))), 65532UL)) > p_1287->g_52), l_1253)), p_1287->g_141)) , (*l_1238)) > l_1271), (*l_1210))))) , l_1273) == p_1287->g_1274)))))), 9UL)))) , 0x7930B7F3L));
            }
        }
    }
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_565 p_1287->g_111 p_1287->g_397 p_1287->g_396 p_1287->g_578 p_1287->g_335 p_1287->g_30 p_1287->g_627 p_1287->g_137 p_1287->g_138 p_1287->g_117.f0 p_1287->g_412 p_1287->g_645 p_1287->g_464 p_1287->g_85 p_1287->g_458.f0 p_1287->g_36 p_1287->g_145 p_1287->g_308.f1 p_1287->g_52 p_1287->g_548 p_1287->g_545 p_1287->g_308.f0 p_1287->g_208 p_1287->g_101.f0 p_1287->g_141 p_1287->g_37 p_1287->g_749.f0 p_1287->g_533 p_1287->g_42 p_1287->g_498 p_1287->g_824 p_1287->g_831 p_1287->g_196 p_1287->g_244 p_1287->g_894 p_1287->g_184 p_1287->g_142 p_1287->g_546 p_1287->g_824.f0 p_1287->g_991 p_1287->g_836 p_1287->g_832 p_1287->g_841 p_1287->g_1017 p_1287->g_114 p_1287->g_1060 p_1287->g_623 p_1287->g_624 p_1287->g_1073 p_1287->g_1078 p_1287->g_658.f0 p_1287->g_1090 p_1287->g_309.f1 p_1287->g_101.f1 p_1287->g_101.f2 p_1287->g_1158 p_1287->g_1162 p_1287->g_1173 p_1287->g_595.f0 p_1287->g_162.f0 p_1287->g_1090.f3
 * writes: p_1287->g_565 p_1287->g_111 p_1287->g_145 p_1287->g_623 p_1287->g_30 p_1287->g_627 p_1287->g_546 p_1287->g_138 p_1287->g_85 p_1287->g_143 p_1287->g_658.f0 p_1287->g_36 p_1287->g_545 p_1287->g_208 p_1287->g_358 p_1287->g_244 p_1287->g_895 p_1287->g_184 p_1287->g_142 p_1287->g_196 p_1287->g_101 p_1287->g_37 p_1287->g_141 p_1287->g_824.f0 p_1287->g_991 p_1287->g_137 p_1287->g_1016 p_1287->g_578 p_1287->g_114 p_1287->g_1078.f1 p_1287->g_624 p_1287->g_1090.f3
 */
int32_t * func_4(int64_t  p_5, int32_t * p_6, struct S2 * p_1287)
{ /* block id: 294 */
    uint16_t *l_587 = &p_1287->g_143;
    union U1 *l_594 = &p_1287->g_595[5];
    int32_t l_596 = 0x0C731160L;
    int32_t l_598 = 1L;
    union U1 ***l_626 = &p_1287->g_624;
    struct S0 *l_687 = &p_1287->g_196[1];
    uint8_t l_714 = 0x50L;
    int32_t *l_753 = &p_1287->g_208[0];
    uint8_t ***l_757 = &p_1287->g_411[0][0];
    uint32_t l_771 = 0xE5B34766L;
    int32_t l_776 = (-9L);
    int32_t l_780 = 1L;
    int32_t l_781[10][8] = {{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L},{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L},{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L},{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L},{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L},{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L},{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L},{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L},{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L},{1L,0L,(-1L),1L,0x1A96EF66L,0x58BA5C95L,0x58BA5C95L,0x1A96EF66L}};
    int32_t l_785 = (-1L);
    uint32_t l_793 = 0x353F9E3AL;
    uint16_t l_798 = 0x61A6L;
    uint32_t **l_819 = (void*)0;
    uint16_t ***l_856 = (void*)0;
    uint64_t *l_1009 = &p_1287->g_138;
    union U1 ***l_1026 = &p_1287->g_624;
    int32_t l_1054[1];
    int32_t l_1072 = 0L;
    int32_t l_1135 = 0x040AA678L;
    int32_t l_1136 = 0x08974C1EL;
    struct S0 **l_1160 = (void*)0;
    int64_t l_1167 = (-1L);
    int i, j;
    for (i = 0; i < 1; i++)
        l_1054[i] = 0x02DA61C4L;
    for (p_1287->g_565 = 0; (p_1287->g_565 < 19); p_1287->g_565++)
    { /* block id: 297 */
        int32_t l_581 = 0x34FD6982L;
        int32_t l_582 = (-1L);
        uint16_t *l_586 = (void*)0;
        uint16_t **l_585 = &l_586;
        int32_t *l_597[7][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int64_t l_599[7] = {0x75D29FA86CB2AFDCL,0x75D29FA86CB2AFDCL,0x75D29FA86CB2AFDCL,0x75D29FA86CB2AFDCL,0x75D29FA86CB2AFDCL,0x75D29FA86CB2AFDCL,0x75D29FA86CB2AFDCL};
        uint16_t l_600 = 0xA039L;
        int32_t **l_603[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_603[i] = &p_1287->g_548;
        (1 + 1);
    }
    if (((*p_6) = 0x48592F23L))
    { /* block id: 312 */
        uint32_t *l_612 = &p_1287->g_111[0];
        int32_t l_617 = 1L;
        int16_t *l_618[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U1 **l_622 = &l_594;
        union U1 ***l_621 = &l_622;
        union U1 ****l_625 = &l_621;
        uint16_t **l_641 = &l_587;
        uint8_t ***l_758 = &p_1287->g_414;
        int32_t l_774[2][5][7] = {{{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)},{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)},{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)},{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)},{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)}},{{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)},{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)},{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)},{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)},{(-9L),0x5EB41402L,0x45A0745DL,0x573DE586L,(-2L),2L,(-9L)}}};
        int8_t l_791 = 5L;
        uint16_t **l_810 = &l_587;
        uint8_t *l_860 = &p_1287->g_85[2][4][0];
        uint8_t *l_862 = &l_714;
        int32_t l_881 = (-1L);
        int64_t l_929 = 0x2F797949C1C2BF00L;
        struct S0 *l_937 = &p_1287->g_627;
        int32_t l_950 = 2L;
        uint32_t l_958 = 1UL;
        int i, j, k;
        if ((((*l_625) = (((safe_add_func_int16_t_s_s(0x18C0L, (((*l_612)--) >= (safe_add_func_uint16_t_u_u(l_617, (p_1287->g_145 = l_617)))))) != (+((*p_1287->g_335) = (((safe_add_func_int16_t_s_s(((*p_1287->g_397) , p_1287->g_578[5]), l_596)) && ((p_1287->g_623 = l_621) != &p_1287->g_624)) , (*p_1287->g_335))))) , &l_622)) != l_626))
        { /* block id: 318 */
            struct S0 *l_628 = &p_1287->g_627;
            uint32_t l_633 = 4294967287UL;
            int32_t l_635 = (-5L);
            int32_t **l_640 = (void*)0;
            int32_t l_642 = 0x009848A8L;
            union U1 *l_656 = (void*)0;
            int8_t l_662 = 0x48L;
lbl_659:
            (*l_628) = p_1287->g_627;
            for (p_1287->g_546 = 23; (p_1287->g_546 >= 16); p_1287->g_546--)
            { /* block id: 322 */
                uint32_t l_634 = 4294967289UL;
                int32_t **l_639 = &p_1287->g_36;
                int32_t ***l_638[7][9] = {{&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639},{&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639},{&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639},{&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639},{&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639},{&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639},{&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639,&l_639}};
                union U1 *l_657 = &p_1287->g_658;
                int32_t l_690 = (-1L);
                int i, j;
                l_642 |= (((l_635 = ((safe_div_func_int32_t_s_s(((*p_6) &= l_633), (p_5 & p_5))) == l_634)) == (0L == (~(safe_mul_func_int8_t_s_s((0x1A762C2C91C74BCBL < l_596), ((*p_1287->g_412) = (((*p_1287->g_137) = (((((((((l_640 = &p_1287->g_548) != (void*)0) , l_641) != (void*)0) , (-1L)) != l_633) & (*p_1287->g_137)) , p_1287->g_117.f0) >= p_5)) < 0x035E7C86767FDD2EL))))))) || 0x2DA9L);
                l_596 ^= (safe_mul_func_int8_t_s_s((l_635 < p_5), ((*p_1287->g_412) ^= (((*p_6) != (&p_1287->g_358 != &p_5)) , (((p_1287->g_645 && (safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((*p_1287->g_137) = ((p_5 < 6L) & (p_5 ^ 0xBD3BA050L))), l_617)), 1UL))) , p_5) | p_1287->g_464[4])))));
                if (((*p_6) = (safe_lshift_func_uint16_t_u_u((p_1287->g_85[4][3][0] , ((*l_587) = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((0xE01582B0F5677A84L <= p_5), p_1287->g_458.f0)), 1)) < (((*l_622) = l_656) != l_657)))), 2))))
                { /* block id: 335 */
                    int8_t l_663[8][5][4] = {{{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)}},{{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)}},{{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)}},{{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)}},{{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)}},{{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)}},{{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)}},{{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)},{0L,5L,0x00L,(-3L)}}};
                    int32_t l_664 = 0x40EF6D90L;
                    int i, j, k;
                    if (p_1287->g_627.f0)
                        goto lbl_659;
                    if (l_596)
                        break;
                    for (p_1287->g_658.f0 = 9; (p_1287->g_658.f0 != 12); ++p_1287->g_658.f0)
                    { /* block id: 340 */
                        uint32_t l_665 = 0xDC162621L;
                        if (l_662)
                            break;
                        ++l_665;
                    }
                }
                else
                { /* block id: 344 */
                    struct S0 *l_688 = &p_1287->g_196[1];
                    int32_t l_689 = 0x4E506908L;
                    (*l_639) = p_6;
                    if ((((((safe_add_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s(((**l_639) = l_617))) < ((*p_1287->g_137)--)) , (safe_rshift_func_uint8_t_u_s(1UL, (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((((l_617 || ((safe_rshift_func_int16_t_s_u((((*p_6) & (((*p_1287->g_137) = (l_617 != p_1287->g_145)) == (((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_598, ((l_687 != l_688) != l_689))), p_1287->g_464[4])) ^ p_1287->g_464[1]) >= p_1287->g_308.f1) , 5UL) != l_598))) | p_1287->g_52), p_1287->g_464[1])) == 0x10L)) | 250UL) < p_5), l_596)), p_5))))), p_5)) , l_617) , &p_1287->g_244) == (void*)0) & p_5))
                    { /* block id: 349 */
                        if (l_690)
                            break;
                        (*p_6) = (**l_639);
                        (*l_639) = &l_598;
                    }
                    else
                    { /* block id: 353 */
                        return (*l_640);
                    }
                    for (p_1287->g_545 = 4; (p_1287->g_545 == 24); ++p_1287->g_545)
                    { /* block id: 358 */
                        uint16_t l_699 = 0xBD42L;
                        l_596 &= ((*p_6) ^= (safe_add_func_int32_t_s_s((((&p_1287->g_145 != (void*)0) || (**l_639)) , ((void*)0 != p_6)), (p_5 , (!(((safe_mul_func_uint16_t_u_u(l_633, (safe_mod_func_int64_t_s_s(l_699, p_1287->g_308.f0)))) == p_5) ^ 0x4AC0L))))));
                        return p_6;
                    }
                    if ((*p_6))
                        continue;
                }
            }
        }
        else
        { /* block id: 366 */
            uint64_t l_713 = 0x68AFA3CE98FFB688L;
            int32_t *l_754 = &p_1287->g_208[0];
            int32_t l_775 = 0x5832B6F3L;
            int32_t l_777 = 0x4274C1D0L;
            int32_t l_779 = 0x1D58D55AL;
            int32_t l_782 = 0x7ABAA155L;
            int32_t l_783 = 0x5A1CB34FL;
            int32_t l_784 = 0x5E3B07BBL;
            int32_t l_786 = 1L;
            int32_t l_788 = 0x35E6FB53L;
            int32_t l_789 = (-4L);
            int32_t l_792 = 0x5F4CFD28L;
            uint16_t ***l_807 = &l_641;
            uint16_t **l_809[6] = {&l_587,&l_587,&l_587,&l_587,&l_587,&l_587};
            uint16_t ***l_808[5][7][7] = {{{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]}},{{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]}},{{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]}},{{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]}},{{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]},{&l_809[2],(void*)0,&l_809[2],(void*)0,&l_809[2],&l_809[2],&l_809[2]}}};
            uint32_t *l_818 = &p_1287->g_244;
            uint32_t **l_817 = &l_818;
            int8_t *l_857 = &l_791;
            int64_t l_858 = 0x024DF3307FC55181L;
            int64_t *l_859 = &p_1287->g_358;
            uint8_t **l_861 = &l_860;
            uint16_t l_882 = 0x95E1L;
            int i, j, k;
            for (p_1287->g_145 = 0; (p_1287->g_145 >= 29); p_1287->g_145 = safe_add_func_int32_t_s_s(p_1287->g_145, 7))
            { /* block id: 369 */
                int64_t l_736 = 0L;
                int32_t l_737 = 0x3401F782L;
                uint64_t l_738 = 18446744073709551615UL;
                int32_t *l_772[6] = {&p_1287->g_645,&p_1287->g_645,&p_1287->g_645,&p_1287->g_645,&p_1287->g_645,&p_1287->g_645};
                int i;
                (1 + 1);
            }
            (*p_6) = ((safe_sub_func_uint16_t_u_u(p_1287->g_111[0], (safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((l_774[1][4][3] | (safe_sub_func_int16_t_s_s((&l_587 != (l_810 = ((*l_807) = &l_587))), (safe_mul_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((-1L), p_1287->g_396.f0)) <= ((((*l_753) = ((safe_div_func_int32_t_s_s((((+(((l_817 == l_819) & (((((*p_6) & p_5) , (*l_753)) || 9L) || p_1287->g_138)) || p_1287->g_145)) , p_1287->g_101.f0) | (*l_753)), (*l_754))) != 0xD6L)) | p_1287->g_141) >= p_1287->g_37)), p_5))))) > (*p_1287->g_137)), p_1287->g_749.f0)), 4)))) , l_791);
            (*p_6) &= (((*p_1287->g_533) , (safe_sub_func_uint8_t_u_u((((*l_861) = (((((l_774[0][4][3] ^= p_1287->g_208[0]) , ((safe_rshift_func_uint8_t_u_u((((p_1287->g_824 , (*l_641)) != (void*)0) != ((((*l_859) = (250UL != ((((((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((*l_753), ((*l_857) = ((*p_1287->g_335) = (safe_mod_func_uint8_t_u_u((((((p_1287->g_831 == l_856) & (*p_1287->g_137)) == p_5) , (-3L)) > 4UL), (*p_1287->g_412))))))), 4)) || 0x07A75779L) & 0x9AE2L) ^ p_5) , l_858) , 0x63L))) , p_1287->g_578[5]) , 0L)), p_5)) && (*l_753))) <= 0x136173FCL) , (-5L)) , l_860)) != l_862), (*p_1287->g_412)))) , l_774[0][4][3]);
            (*p_6) = (safe_div_func_uint16_t_u_u((((0x2F8C7338L || (((((*l_754) = ((*l_687) , ((!18446744073709551614UL) == 0x3E1F394628FF64CDL))) <= ((((safe_rshift_func_uint16_t_u_s((((0x4C51L != (p_5 <= ((safe_add_func_int64_t_s_s(p_5, (((safe_add_func_uint16_t_u_u((((!((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(0x5F46C7562CADA475L, (((((**l_817)++) , (l_881 = (safe_rshift_func_uint8_t_u_s(((**l_861) = (l_617 = (p_5 , p_5))), 4)))) , p_5) , 0x7538413354574B7AL))) , p_5), p_1287->g_565)) >= 0xAA616934206A5AECL)) && 0x6DL) || p_5), l_774[0][4][3])) ^ p_5) == (*p_6)))) , l_774[0][4][3]))) , l_882) || p_5), p_5)) > l_774[0][4][3]) > 0x21E0L) == 0x55DB9B1F5681821BL)) , 251UL) > 4UL)) , 0L) , 1UL), p_5));
        }
        for (l_791 = 0; (l_791 >= 19); l_791 = safe_add_func_int64_t_s_s(l_791, 1))
        { /* block id: 425 */
            uint32_t l_887[2][5][3] = {{{1UL,4294967287UL,4294967287UL},{1UL,4294967287UL,4294967287UL},{1UL,4294967287UL,4294967287UL},{1UL,4294967287UL,4294967287UL},{1UL,4294967287UL,4294967287UL}},{{1UL,4294967287UL,4294967287UL},{1UL,4294967287UL,4294967287UL},{1UL,4294967287UL,4294967287UL},{1UL,4294967287UL,4294967287UL},{1UL,4294967287UL,4294967287UL}}};
            struct S0 **l_892[5];
            uint8_t l_893 = 0xF4L;
            int32_t l_921 = 0x344DD47DL;
            int32_t l_922 = (-5L);
            int32_t l_925 = 0L;
            int32_t l_926 = 6L;
            int32_t l_927[8] = {(-5L),(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L)};
            int32_t *l_951 = (void*)0;
            int32_t *l_952 = &l_598;
            int32_t *l_953 = &l_925;
            int32_t *l_954 = &l_925;
            int32_t *l_955 = &l_922;
            int32_t *l_956 = &p_1287->g_37;
            int32_t *l_957[5][4][1];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_892[i] = &l_687;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_957[i][j][k] = &l_922;
                }
            }
            if ((((((((l_774[0][4][3] && ((safe_mul_func_uint16_t_u_u(p_5, l_887[1][4][0])) , (safe_sub_func_uint8_t_u_u(((((void*)0 != &p_1287->g_413) & 0xCF02B69EL) ^ (safe_mod_func_uint8_t_u_u(((l_687 = &p_1287->g_101) == (void*)0), ((p_1287->g_111[0] < p_5) ^ l_617)))), (*p_1287->g_335))))) != l_893) && l_887[1][4][0]) , p_1287->g_894) , (void*)0) == (void*)0) , (*l_753)))
            { /* block id: 427 */
                p_1287->g_895[0][4] = (*p_1287->g_397);
            }
            else
            { /* block id: 429 */
                (*p_6) &= 0x0046D64CL;
            }
            for (p_1287->g_184 = 14; (p_1287->g_184 <= (-27)); --p_1287->g_184)
            { /* block id: 434 */
                int32_t l_898 = 0x790386E0L;
                int32_t l_920 = 0x6A28A064L;
                int32_t l_923 = (-5L);
                int32_t l_924 = 0L;
                int32_t l_928[10] = {0x6CE5F123L,0x6CE5F123L,0x6CE5F123L,0x6CE5F123L,0x6CE5F123L,0x6CE5F123L,0x6CE5F123L,0x6CE5F123L,0x6CE5F123L,0x6CE5F123L};
                uint8_t l_930 = 1UL;
                union U1 *l_933 = &p_1287->g_595[0];
                int i;
                for (l_714 = 2; (l_714 <= 7); l_714 += 1)
                { /* block id: 437 */
                    int32_t *l_899 = &p_1287->g_208[0];
                    int32_t *l_900 = &l_596;
                    int32_t *l_901 = &l_780;
                    int32_t l_902[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                    int32_t *l_903 = (void*)0;
                    int32_t *l_904 = &l_898;
                    int32_t *l_905 = &l_902[1];
                    int32_t *l_906 = &p_1287->g_37;
                    int32_t *l_907 = (void*)0;
                    int32_t *l_908 = &p_1287->g_208[0];
                    int32_t *l_909 = (void*)0;
                    int32_t *l_910 = &p_1287->g_52;
                    int32_t *l_911 = (void*)0;
                    int32_t *l_912 = &p_1287->g_208[0];
                    int32_t *l_913 = (void*)0;
                    int32_t *l_914 = &p_1287->g_52;
                    int32_t *l_915 = &l_781[6][7];
                    int32_t *l_916 = (void*)0;
                    int32_t *l_917 = &p_1287->g_37;
                    int32_t *l_918[3][5][8] = {{{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]}},{{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]}},{{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]},{&l_902[2],&l_776,&l_776,&l_902[2],(void*)0,&l_774[1][0][4],&l_596,&l_774[1][0][4]}}};
                    struct S0 *l_938 = &p_1287->g_196[5];
                    int i, j, k;
                    ++l_930;
                    for (p_1287->g_142 = 0; (p_1287->g_142 <= 7); p_1287->g_142 += 1)
                    { /* block id: 441 */
                        uint8_t l_936 = 0x74L;
                        int i;
                        (*l_687) = (((p_1287->g_546 , &p_1287->g_498[l_714]) == ((**l_621) = l_933)) , (*p_1287->g_397));
                        if ((*l_753))
                            break;
                        (*l_906) = ((65529UL & (l_898 = (safe_lshift_func_uint8_t_u_u((!(~p_5)), 7)))) < l_936);
                        l_938 = l_937;
                    }
                }
                for (p_1287->g_141 = 0; (p_1287->g_141 > 24); p_1287->g_141 = safe_add_func_uint16_t_u_u(p_1287->g_141, 4))
                { /* block id: 452 */
                    uint8_t l_943 = 0xEFL;
                    int32_t *l_948 = &l_774[0][4][3];
                    for (p_1287->g_824.f0 = (-8); (p_1287->g_824.f0 >= 22); p_1287->g_824.f0 = safe_add_func_uint8_t_u_u(p_1287->g_824.f0, 5))
                    { /* block id: 455 */
                        if ((*p_6))
                            break;
                        l_943--;
                    }
                    for (l_596 = (-19); (l_596 == 5); l_596 = safe_add_func_uint16_t_u_u(l_596, 6))
                    { /* block id: 461 */
                        int32_t *l_949 = &l_774[0][4][2];
                        return p_6;
                    }
                    if ((*p_6))
                        continue;
                }
            }
            l_958++;
        }
        l_753 = &l_781[6][7];
    }
    else
    { /* block id: 470 */
        int64_t l_973 = 0x78DB9B7D408B9CCDL;
        int32_t l_975 = 1L;
        int32_t l_977 = (-10L);
        int32_t l_978[1];
        int32_t l_980 = (-1L);
        int16_t l_982 = 0x0512L;
        int16_t l_983 = 1L;
        uint64_t l_985 = 0xB591624045E0F0A5L;
        union U1 ***l_1025 = &p_1287->g_624;
        uint32_t l_1061 = 1UL;
        uint16_t l_1071 = 65534UL;
        uint16_t ***l_1079 = &p_1287->g_1016;
        int8_t *l_1098 = &p_1287->g_30;
        int32_t l_1120 = (-1L);
        int32_t *l_1164[8][10] = {{(void*)0,&p_1287->g_208[0],&p_1287->g_645,&p_1287->g_208[0],(void*)0,&l_975,&p_1287->g_645,&l_598,&p_1287->g_52,(void*)0},{(void*)0,&p_1287->g_208[0],&p_1287->g_645,&p_1287->g_208[0],(void*)0,&l_975,&p_1287->g_645,&l_598,&p_1287->g_52,(void*)0},{(void*)0,&p_1287->g_208[0],&p_1287->g_645,&p_1287->g_208[0],(void*)0,&l_975,&p_1287->g_645,&l_598,&p_1287->g_52,(void*)0},{(void*)0,&p_1287->g_208[0],&p_1287->g_645,&p_1287->g_208[0],(void*)0,&l_975,&p_1287->g_645,&l_598,&p_1287->g_52,(void*)0},{(void*)0,&p_1287->g_208[0],&p_1287->g_645,&p_1287->g_208[0],(void*)0,&l_975,&p_1287->g_645,&l_598,&p_1287->g_52,(void*)0},{(void*)0,&p_1287->g_208[0],&p_1287->g_645,&p_1287->g_208[0],(void*)0,&l_975,&p_1287->g_645,&l_598,&p_1287->g_52,(void*)0},{(void*)0,&p_1287->g_208[0],&p_1287->g_645,&p_1287->g_208[0],(void*)0,&l_975,&p_1287->g_645,&l_598,&p_1287->g_52,(void*)0},{(void*)0,&p_1287->g_208[0],&p_1287->g_645,&p_1287->g_208[0],(void*)0,&l_975,&p_1287->g_645,&l_598,&p_1287->g_52,(void*)0}};
        int64_t l_1198 = 1L;
        int8_t l_1203 = 0x57L;
        uint16_t l_1204 = 0x979DL;
        volatile struct S0 * volatile *l_1208 = (void*)0;
        volatile struct S0 * volatile **l_1207 = &l_1208;
        int i, j;
        for (i = 0; i < 1; i++)
            l_978[i] = 0x73242737L;
        for (l_771 = 0; (l_771 > 42); ++l_771)
        { /* block id: 473 */
            uint8_t l_965[10] = {252UL,252UL,252UL,252UL,252UL,252UL,252UL,252UL,252UL,252UL};
            int32_t l_974 = 8L;
            int32_t l_976 = 0x5555033DL;
            int32_t l_979 = 5L;
            int32_t l_981[7] = {0x1FC38AADL,1L,0x1FC38AADL,0x1FC38AADL,1L,0x1FC38AADL,0x1FC38AADL};
            int32_t l_984 = 0x0360F2A3L;
            int i;
            if ((*p_6))
                break;
            for (l_798 = 0; (l_798 <= 2); l_798++)
            { /* block id: 477 */
                int32_t l_966[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
                int32_t *l_967 = &p_1287->g_208[0];
                int32_t *l_968 = &p_1287->g_208[0];
                int32_t *l_969 = &l_780;
                int32_t *l_970 = &l_598;
                int32_t *l_971 = &l_776;
                int32_t *l_972[8][6][2] = {{{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]}},{{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]}},{{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]}},{{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]}},{{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]}},{{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]}},{{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]}},{{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]},{&l_781[6][7],&l_781[1][7]}}};
                int32_t **l_988 = &l_972[1][3][0];
                int i, j, k;
                if (l_965[4])
                    break;
                --l_985;
                (*l_988) = p_6;
            }
        }
        for (p_1287->g_138 = 0; (p_1287->g_138 <= 2); p_1287->g_138 += 1)
        { /* block id: 485 */
            uint8_t *****l_993 = &p_1287->g_991;
            int16_t *l_994[2];
            uint64_t **l_1010 = &p_1287->g_137;
            uint64_t *l_1012[4] = {&l_985,&l_985,&l_985,&l_985};
            uint64_t **l_1011 = &l_1012[3];
            int32_t l_1013 = 6L;
            uint16_t **l_1015[9] = {&l_587,&l_587,&l_587,&l_587,&l_587,&l_587,&l_587,&l_587,&l_587};
            uint16_t **l_1019 = (void*)0;
            uint16_t ***l_1018 = &l_1019;
            union U1 ****l_1024[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t *l_1029 = (void*)0;
            int64_t *l_1030 = &l_973;
            int16_t l_1117 = (-2L);
            int32_t l_1119 = (-1L);
            int32_t l_1121 = (-1L);
            int32_t l_1129[6][8] = {{(-9L),2L,(-1L),0x569B7D8CL,2L,0x569B7D8CL,(-1L),2L},{(-9L),2L,(-1L),0x569B7D8CL,2L,0x569B7D8CL,(-1L),2L},{(-9L),2L,(-1L),0x569B7D8CL,2L,0x569B7D8CL,(-1L),2L},{(-9L),2L,(-1L),0x569B7D8CL,2L,0x569B7D8CL,(-1L),2L},{(-9L),2L,(-1L),0x569B7D8CL,2L,0x569B7D8CL,(-1L),2L},{(-9L),2L,(-1L),0x569B7D8CL,2L,0x569B7D8CL,(-1L),2L}};
            struct S0 **l_1159 = &l_687;
            uint32_t *l_1178 = (void*)0;
            int i, j;
            for (i = 0; i < 2; i++)
                l_994[i] = &l_982;
            (*p_6) = (p_5 , ((((safe_lshift_func_int8_t_s_u((((*l_993) = p_1287->g_991) != ((p_1287->g_145 ^= (l_757 != l_757)) , ((safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((+(safe_lshift_func_uint16_t_u_u(0UL, 15))), (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((*l_753) ^ ((((*l_1010) = l_1009) != ((*l_1011) = &l_985)) <= l_983)) & p_5), (-1L))), l_1013)), p_1287->g_836[2][5][8])), 1)))), l_1013)) , &l_757))), 3)) >= p_5) , l_983) , l_985));
            (*p_6) ^= ((safe_unary_minus_func_uint8_t_u(((p_1287->g_1016 = l_1015[8]) == ((*l_1018) = l_1015[5])))) ^ ((p_5 | (((*l_1030) &= (safe_mod_func_int16_t_s_s(p_5, (((((*l_687) , ((1UL <= ((l_1025 = (void*)0) != l_1026)) ^ ((safe_lshift_func_int8_t_s_s(((*p_1287->g_533) , (*l_753)), 7)) >= l_977))) >= 65533UL) || 0x41070AEDC64EE9B5L) , 1L)))) , 0x274F36DF57511CB8L)) & p_5));
            if ((*p_6))
                break;
            for (p_1287->g_143 = 0; (p_1287->g_143 <= 2); p_1287->g_143 += 1)
            { /* block id: 499 */
                uint32_t *l_1041 = &p_1287->g_578[6];
                uint32_t *l_1044 = &p_1287->g_111[0];
                int32_t l_1045 = (-8L);
                int32_t l_1059 = 0x20B14ED7L;
                int64_t l_1070 = 1L;
                int8_t *l_1097 = &p_1287->g_30;
                int64_t l_1113[1][6] = {{(-1L),4L,(-1L),(-1L),4L,(-1L)}};
                uint8_t **l_1114 = &p_1287->g_412;
                int32_t l_1116 = 0x3CCE1826L;
                int32_t l_1123 = (-1L);
                int32_t l_1125 = 0x59335F2EL;
                int32_t l_1126 = (-9L);
                union U1 ***l_1157 = &p_1287->g_624;
                uint64_t l_1168 = 18446744073709551609UL;
                uint64_t l_1182[4][10] = {{18446744073709551615UL,18446744073709551610UL,0x4AA691DD120B19FAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL,0x4AA691DD120B19FAL,18446744073709551610UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551610UL,0x4AA691DD120B19FAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL,0x4AA691DD120B19FAL,18446744073709551610UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551610UL,0x4AA691DD120B19FAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL,0x4AA691DD120B19FAL,18446744073709551610UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551610UL,0x4AA691DD120B19FAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL,0x4AA691DD120B19FAL,18446744073709551610UL,18446744073709551615UL}};
                int32_t l_1197 = 1L;
                int32_t l_1199 = (-7L);
                int32_t l_1200 = 0x58FDDE9FL;
                int32_t l_1201[10];
                int32_t l_1202 = 0x6CE549DDL;
                int i, j;
                for (i = 0; i < 10; i++)
                    l_1201[i] = (-4L);
                (*l_753) = 0x7E5159ECL;
                (*l_687) = (*p_1287->g_397);
                if (((l_978[0] = (safe_lshift_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((p_5 <= (p_5 || ((((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((*l_1041) &= 4294967295UL), (4294967289UL & (*p_6)))), 3)) <= 0L) < (((*l_753) || ((safe_add_func_uint32_t_u_u(((*l_1044) = (p_5 > ((((*p_1287->g_831) == (void*)0) && (*p_1287->g_137)) != p_1287->g_841[0][4]))), 0xA88DCBB5L)) || p_5)) == p_5)) ^ (*l_753)))) , p_5) ^ (-3L)), 0x26L)), p_5)) || 1UL) == l_1045) , 0x4DL), (*p_1287->g_412)))) > (*l_753)))
                { /* block id: 505 */
                    uint32_t *l_1084 = &p_1287->g_464[1];
                    int32_t l_1085 = 0x21F2207AL;
                    union U1 **l_1112[7][2] = {{(void*)0,&l_594},{(void*)0,&l_594},{(void*)0,&l_594},{(void*)0,&l_594},{(void*)0,&l_594},{(void*)0,&l_594},{(void*)0,&l_594}};
                    int32_t l_1118 = 0x78E14AF8L;
                    int32_t l_1122 = 0L;
                    int32_t l_1124 = 0x7F10995AL;
                    int32_t l_1127 = 0x325DEA96L;
                    int32_t l_1128 = 0x1724D920L;
                    int32_t l_1130 = (-1L);
                    int32_t l_1131 = 0x4FFB6C8FL;
                    int32_t l_1137 = 1L;
                    int32_t l_1138[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1138[i] = 0x04869E27L;
                    if ((l_1013 &= ((*p_6) = ((*p_1287->g_533) , (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((+p_5) && (8UL <= (safe_add_func_int8_t_s_s((((((+((void*)0 != &p_1287->g_30)) < (((*l_753) = 1L) >= p_5)) > 0x1107L) == (safe_lshift_func_uint8_t_u_s(((((!((*p_1287->g_1017)--)) > ((safe_div_func_uint16_t_u_u(((p_5 , p_5) == l_1045), p_5)) < l_982)) != l_1059) , p_5), 3))) , p_5), 0x7EL)))), 3)), (*p_1287->g_335)))))))
                    { /* block id: 510 */
                        uint32_t l_1064 = 4294967295UL;
                        union U1 **l_1067 = &l_594;
                        (*p_6) ^= ((p_1287->g_1060[5] , (((((p_5 || (l_1061 | (safe_lshift_func_int8_t_s_s((-10L), 4)))) ^ l_1064) >= (safe_mul_func_int16_t_s_s((((((*p_1287->g_623) != l_1067) >= (*l_753)) & ((l_1071 &= (safe_mod_func_uint64_t_u_u((((l_1070 & 0UL) < 1UL) && 0x4FL), l_1059))) | 0UL)) || l_1064), l_1072))) , p_1287->g_1073) , l_1059)) != p_5);
                        (*l_753) = (safe_sub_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(0x3DL, 2)) & (p_1287->g_1078.f1 = ((-1L) || (p_1287->g_1078 , (*l_753))))) & (!p_1287->g_658.f0)), ((*p_6) && l_1013)));
                        (*p_6) &= ((((&l_1015[7] != l_1079) , 0x6364AC13L) > (((p_5 ^ ((safe_lshift_func_int8_t_s_u((*p_1287->g_335), p_5)) || (safe_mod_func_uint32_t_u_u(((0x0EE6L <= p_1287->g_145) || ((l_1084 != (void*)0) , (*l_753))), 0x09811CA4L)))) , l_1013) || l_1085)) || (-1L));
                    }
                    else
                    { /* block id: 516 */
                        (*l_753) ^= ((((p_5 & (((p_5 > ((*p_6) = l_1013)) == ((p_6 != (void*)0) <= l_978[0])) ^ (((((p_1287->g_1090 , &p_1287->g_142) != (void*)0) >= 0xC8L) == 0L) , p_1287->g_309.f1))) || l_1070) || p_1287->g_196[1].f1) | l_978[0]);
                        return p_6;
                    }
                    for (l_780 = 0; (l_780 <= 2); l_780 += 1)
                    { /* block id: 523 */
                        union U1 **l_1111 = (void*)0;
                        int32_t *l_1115[2];
                        uint32_t l_1132 = 1UL;
                        uint64_t l_1139[4][6][6] = {{{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL}},{{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL}},{{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL}},{{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL},{0UL,18446744073709551607UL,18446744073709551606UL,0xB7D081C4D5765465L,18446744073709551609UL,0x416690FC45D5F2FAL}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1115[i] = (void*)0;
                        (*p_6) &= (safe_rshift_func_int8_t_s_s((((((*l_753) | (l_1097 != ((p_1287->g_101.f1 ^ (-1L)) , l_1098))) && ((safe_sub_func_int64_t_s_s(((((safe_div_func_uint16_t_u_u(p_5, (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((&p_1287->g_90 != ((safe_rshift_func_uint16_t_u_s(((((*l_626) = (void*)0) != (l_1112[1][0] = l_1111)) && p_5), l_1113[0][2])) , &p_6)) >= 0L), p_5)), l_1070)), l_1085)))) <= p_1287->g_101.f2) , (void*)0) == l_1114), 0UL)) != l_985)) || 65535UL) < 0UL), l_1113[0][2]));
                        l_1132++;
                        l_1139[2][1][4]--;
                        if ((*p_6))
                            continue;
                    }
                    if ((((0x75L == (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((((&p_6 != (void*)0) <= (safe_rshift_func_uint8_t_u_s(4UL, 5))) || (safe_rshift_func_int8_t_s_u(((*l_1098) &= 0x36L), ((safe_sub_func_int32_t_s_s((((l_1160 = ((((((safe_unary_minus_func_int8_t_s((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_1126 | (l_1157 == (l_1125 , l_1157))), p_5)), 0UL)))) , p_5) || p_1287->g_1158) & p_5) , l_1070) , l_1159)) != (void*)0) || 3L), l_1061)) < p_1287->g_578[3])))), 1)) , p_5), l_973))) <= l_1121) | l_1122))
                    { /* block id: 533 */
                        (*p_1287->g_1162) = p_6;
                    }
                    else
                    { /* block id: 535 */
                        int32_t **l_1163[10][9] = {{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36},{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36},{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36},{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36},{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36},{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36},{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36},{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36},{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36},{&p_1287->g_36,&p_1287->g_36,&l_753,&p_1287->g_548,&p_1287->g_36,&p_1287->g_548,&p_1287->g_548,&l_753,&p_1287->g_36}};
                        int i, j;
                        (*p_6) ^= l_1129[2][7];
                        if ((*p_6))
                            break;
                        if ((*p_6))
                            break;
                        l_1164[3][5] = (void*)0;
                    }
                }
                else
                { /* block id: 541 */
                    int16_t l_1165 = 0x5B59L;
                    int32_t l_1166[5][4][8] = {{{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL}},{{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL}},{{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL}},{{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL}},{{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL},{(-8L),1L,0x0A6BBA52L,0x3C6F3F88L,0x7BF90507L,(-1L),0L,0x3792037FL}}};
                    int32_t *l_1192 = &l_1054[0];
                    int i, j, k;
                    l_1168--;
                    for (l_1167 = 2; (l_1167 >= 0); l_1167 -= 1)
                    { /* block id: 545 */
                        int32_t *l_1171 = &l_1059;
                        uint32_t **l_1179 = &l_1041;
                        (*p_1287->g_1173) = (l_1171 = &l_1126);
                        (*l_753) |= (safe_sub_func_uint16_t_u_u(((*p_1287->g_1017) = (((safe_div_func_int16_t_s_s((p_1287->g_145 = ((l_1121 |= (((((0xA26B4D759BE77A0BL && (l_1178 != ((*l_1179) = p_6))) >= p_1287->g_595[5].f0) , ((+(*p_1287->g_137)) , p_5)) | (((*l_1044) = (safe_mul_func_int8_t_s_s((((((*p_6) || (0x6EDCL ^ p_1287->g_162.f0)) || 4294967295UL) , (void*)0) == (void*)0), p_5))) == 0L)) | (*p_1287->g_36))) != p_5)), p_5)) >= (*p_1287->g_36)) , l_1129[2][5])), p_5));
                        if ((**p_1287->g_1173))
                            break;
                        (*p_1287->g_36) ^= (-5L);
                    }
                    l_1126 ^= (((l_1182[1][5] & ((l_1123 |= l_1125) , (((((safe_add_func_uint64_t_u_u((*l_753), ((safe_lshift_func_uint8_t_u_s((p_5 < 1UL), 2)) | (~255UL)))) || (safe_unary_minus_func_uint32_t_u(1UL))) , (p_1287->g_145 = ((((((*l_1192) = (safe_div_func_int32_t_s_s(((!p_1287->g_396.f0) , (p_5 ^ p_5)), (*l_753)))) , 0x9FC26ED5698272D7L) && p_1287->g_578[2]) >= 0UL) , p_5))) , &p_1287->g_30) == &p_1287->g_30))) , (*p_6)) | p_1287->g_645);
                    (*l_753) = (1UL < ((*l_1041)--));
                }
                (*p_6) = 0x4A840470L;
                for (p_1287->g_1090.f3 = 0; (p_1287->g_1090.f3 <= 2); p_1287->g_1090.f3 += 1)
                { /* block id: 567 */
                    int32_t l_1195[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1195[i] = 0x398C528BL;
                    l_1204--;
                }
            }
        }
        (*l_1207) = &p_1287->g_397;
    }
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_143 p_1287->g_565
 * writes: p_1287->g_143 p_1287->g_145
 */
int16_t  func_13(uint8_t  p_14, int16_t  p_15, int32_t * p_16, uint32_t  p_17, struct S2 * p_1287)
{ /* block id: 279 */
    union U1 **l_550 = (void*)0;
    union U1 ***l_551 = &l_550;
    int32_t l_556 = 7L;
    int32_t l_557 = 3L;
    uint64_t *l_566 = &p_1287->g_138;
    (*l_551) = l_550;
lbl_564:
    for (p_1287->g_143 = (-4); (p_1287->g_143 > 12); p_1287->g_143 = safe_add_func_uint64_t_u_u(p_1287->g_143, 5))
    { /* block id: 283 */
        int32_t l_558 = (-7L);
        int16_t *l_561 = (void*)0;
        int16_t *l_562 = &p_1287->g_145;
        int32_t *l_563 = &l_557;
        l_557 &= (safe_lshift_func_uint16_t_u_u(l_556, 6));
        if (l_558)
            break;
        (*l_563) = (p_17 || (p_14 && ((safe_add_func_int16_t_s_s(((*l_562) = ((void*)0 != &p_1287->g_138)), 0x026FL)) | p_17)));
        if (l_556)
            goto lbl_564;
    }
    l_557 |= (p_1287->g_565 , (((l_566 != (void*)0) >= ((((((l_556 = ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(((void*)0 != &p_1287->g_196[1]))), (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((-1L), l_556)) < p_17), 6)) >= (safe_add_func_uint8_t_u_u((&p_16 != &p_1287->g_36), p_14))), 0x40L)))) > 0xEC0CL)) | p_17) | 0x29232ECFL) , 4L) >= 0x0166D14C51552697L) || 0x235AB89483BFCE70L)) <= p_15));
    l_556 |= l_557;
    return l_556;
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_413 p_1287->g_208 p_1287->g_249 p_1287->g_308.f1 p_1287->g_85 p_1287->g_30 p_1287->g_137 p_1287->g_138 p_1287->g_141 p_1287->g_441 p_1287->g_412 p_1287->g_458 p_1287->g_117.f0 p_1287->g_244 p_1287->g_464 p_1287->g_414 p_1287->g_36 p_1287->g_37 p_1287->g_90 p_1287->g_498 p_1287->g_335 p_1287->g_143 p_1287->g_134 p_1287->g_546 p_1287->g_358
 * writes: p_1287->g_411 p_1287->g_414 p_1287->g_358 p_1287->g_85 p_1287->g_208 p_1287->g_249 p_1287->g_134 p_1287->g_36 p_1287->g_138 p_1287->g_464 p_1287->g_52 p_1287->g_37 p_1287->g_533 p_1287->g_540 p_1287->g_545
 */
int16_t  func_19(uint32_t  p_20, int32_t * p_21, int32_t * p_22, int64_t  p_23, struct S2 * p_1287)
{ /* block id: 219 */
    uint8_t *l_409 = &p_1287->g_85[6][1][0];
    uint8_t **l_408 = &l_409;
    uint8_t ***l_410 = &l_408;
    int32_t l_428 = 0x25899808L;
    int32_t l_429 = 0x37028C0EL;
    int32_t l_470 = (-1L);
    int32_t l_471 = (-7L);
    int32_t l_473 = 0x37BBB021L;
    int32_t l_474 = 0x0C12E7CAL;
    int32_t l_476 = 1L;
    int32_t l_478 = 0x64809D64L;
    int32_t l_479 = (-9L);
    int32_t l_481 = 0x7FAC2B07L;
    int32_t l_482 = 0L;
    int32_t l_483[8] = {0x5B95095CL,0x5B95095CL,0x5B95095CL,0x5B95095CL,0x5B95095CL,0x5B95095CL,0x5B95095CL,0x5B95095CL};
    int64_t l_484 = 0x34B8B33C3AC1C0ACL;
    int64_t l_485 = 1L;
    int16_t l_515[10][9][2] = {{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}},{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}},{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}},{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}},{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}},{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}},{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}},{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}},{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}},{{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)},{(-8L),(-3L)}}};
    int64_t *l_525 = (void*)0;
    int8_t l_526 = 0x5CL;
    int i, j, k;
lbl_532:
    (*p_1287->g_413) = (p_1287->g_411[2][6] = ((*l_410) = l_408));
    for (p_1287->g_358 = 0; (p_1287->g_358 != 13); ++p_1287->g_358)
    { /* block id: 225 */
        int32_t l_437 = 0x047F5803L;
        int32_t *l_440[6] = {&l_428,&p_1287->g_208[0],&l_428,&l_428,&p_1287->g_208[0],&l_428};
        int8_t *l_457[1];
        uint64_t l_463 = 0xC334D19B85E26AE9L;
        uint32_t l_465 = 0xC8EF2555L;
        uint32_t l_486[1][9][8] = {{{0UL,0UL,0UL,0UL,1UL,0x0E2454DDL,0x290F9DC8L,4294967288UL},{0UL,0UL,0UL,0UL,1UL,0x0E2454DDL,0x290F9DC8L,4294967288UL},{0UL,0UL,0UL,0UL,1UL,0x0E2454DDL,0x290F9DC8L,4294967288UL},{0UL,0UL,0UL,0UL,1UL,0x0E2454DDL,0x290F9DC8L,4294967288UL},{0UL,0UL,0UL,0UL,1UL,0x0E2454DDL,0x290F9DC8L,4294967288UL},{0UL,0UL,0UL,0UL,1UL,0x0E2454DDL,0x290F9DC8L,4294967288UL},{0UL,0UL,0UL,0UL,1UL,0x0E2454DDL,0x290F9DC8L,4294967288UL},{0UL,0UL,0UL,0UL,1UL,0x0E2454DDL,0x290F9DC8L,4294967288UL},{0UL,0UL,0UL,0UL,1UL,0x0E2454DDL,0x290F9DC8L,4294967288UL}}};
        int32_t *l_529[7] = {&p_1287->g_208[0],&p_1287->g_208[0],&p_1287->g_208[0],&p_1287->g_208[0],&p_1287->g_208[0],&p_1287->g_208[0],&p_1287->g_208[0]};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_457[i] = &p_1287->g_30;
        if ((*p_22))
            break;
        if ((safe_div_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((((safe_unary_minus_func_uint64_t_u((((safe_add_func_uint8_t_u_u(((*l_409) &= (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((l_428 = l_428), 8)) | l_429) <= p_23), p_1287->g_308.f1))), (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s((((p_1287->g_30 >= (safe_mul_func_int16_t_s_s(((((*p_22) = (((safe_add_func_uint64_t_u_u(p_23, 1L)) == (-2L)) == l_437)) , p_1287->g_30) || 6L), l_429))) == 0x560E2B36L) < l_429))) ^ p_23), p_20)))) <= 0x7E9DCAC31AF7C589L) | p_23))) < (*p_1287->g_137)) < p_1287->g_141), 1UL)) & l_437) ^ p_1287->g_138), p_23)))
        { /* block id: 230 */
            uint8_t *l_449[7] = {&p_1287->g_85[6][0][0],&p_1287->g_85[3][5][1],&p_1287->g_85[6][0][0],&p_1287->g_85[6][0][0],&p_1287->g_85[3][5][1],&p_1287->g_85[6][0][0],&p_1287->g_85[6][0][0]};
            int32_t l_466 = 1L;
            int32_t l_469 = 6L;
            int32_t l_472 = 0L;
            int32_t l_475 = 0x261A511FL;
            int32_t l_477 = 2L;
            int32_t l_480[9];
            int i;
            for (i = 0; i < 9; i++)
                l_480[i] = 0x05978C71L;
            for (p_1287->g_134 = 0; (p_1287->g_134 < 41); p_1287->g_134 = safe_add_func_int8_t_s_s(p_1287->g_134, 4))
            { /* block id: 233 */
                int16_t l_442[2][7] = {{0x1BFBL,0x1BFBL,0x1BFBL,0x1BFBL,0x1BFBL,0x1BFBL,0x1BFBL},{0x1BFBL,0x1BFBL,0x1BFBL,0x1BFBL,0x1BFBL,0x1BFBL,0x1BFBL}};
                int32_t l_450 = 0x241DEB0FL;
                int8_t *l_467 = &p_1287->g_30;
                int32_t **l_468 = &p_1287->g_36;
                int i, j;
                (*p_1287->g_441) = l_440[0];
                if (l_442[0][6])
                    continue;
                (*p_21) ^= (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_20, (l_450 = ((*p_1287->g_412) = (safe_mul_func_int8_t_s_s(((void*)0 == l_449[3]), p_20)))))), 0L));
                (*l_468) = func_70((((!0x7FL) , ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((+((safe_lshift_func_uint8_t_u_u(((l_457[0] != (((p_23 > (!p_20)) < ((p_1287->g_458 , (1L >= ((((p_1287->g_117.f0 | ((*p_1287->g_137) = (*p_1287->g_137))) < (safe_add_func_uint64_t_u_u((p_1287->g_464[2] |= ((((((safe_rshift_func_uint16_t_u_u(p_1287->g_244, 0)) >= l_463) != p_20) , l_429) == p_23) && p_20)), l_428))) || l_450) ^ l_465))) , l_466)) , l_467)) != (*p_21)), l_442[0][6])) | 0xEB745F4AL)) , (**p_1287->g_414)), 2)), (*p_1287->g_36))) < 0x0E0062A4D28112C1L)) , (*p_1287->g_441)), p_21, &l_429, p_1287);
            }
            --l_486[0][2][0];
        }
        else
        { /* block id: 244 */
            int32_t l_504 = 1L;
            int64_t *l_509 = &l_485;
            union U1 *l_538 = (void*)0;
            for (p_1287->g_37 = 0; (p_1287->g_37 != 12); p_1287->g_37 = safe_add_func_int32_t_s_s(p_1287->g_37, 5))
            { /* block id: 247 */
                int64_t **l_510 = &l_509;
                int64_t *l_512 = &p_1287->g_184;
                int64_t **l_511 = &l_512;
                int64_t *l_514[8];
                int64_t **l_513 = &l_514[7];
                int32_t l_516 = (-5L);
                int i;
                for (i = 0; i < 8; i++)
                    l_514[i] = &p_1287->g_184;
                if ((*p_22))
                    break;
                if ((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s((safe_rshift_func_int16_t_s_u(((~(safe_sub_func_int64_t_s_s((p_1287->g_498[5] , (safe_sub_func_uint32_t_u_u(p_20, (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((-6L))), p_23))))), l_504))) , (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((+((((*l_510) = l_509) == ((*l_513) = ((*l_511) = &p_23))) > (**p_1287->g_414))), 0)), (*p_1287->g_335)))), l_515[5][0][1])))) & l_516), 0UL)))
                { /* block id: 252 */
                    uint8_t l_522 = 7UL;
                    int32_t **l_523 = &l_440[0];
                    int64_t *l_524 = &l_485;
                    int32_t *l_527 = (void*)0;
                    int32_t *l_528 = &l_473;
                    int32_t **l_530 = &l_527;
                    int32_t *l_531[3][6] = {{(void*)0,(void*)0,&l_428,&l_473,&p_1287->g_37,&l_473},{(void*)0,(void*)0,&l_428,&l_473,&p_1287->g_37,&l_473},{(void*)0,(void*)0,&l_428,&l_473,&p_1287->g_37,&l_473}};
                    int i, j;
                    (*l_523) = func_70(func_70(((safe_div_func_uint32_t_u_u(p_1287->g_143, ((*l_528) |= (((((safe_unary_minus_func_uint16_t_u(((((((((((~p_1287->g_138) , (safe_sub_func_int64_t_s_s(l_504, (((*p_1287->g_412) , l_522) == (((l_509 != (void*)0) && (((*p_22) , ((*l_523) = &l_504)) == p_21)) >= 0x1B01BD7D351BF10AL))))) != l_504) , l_524) == l_525) > p_23) > p_20) ^ p_1287->g_138) ^ p_23) && l_526))) < p_23) , p_23) || (-1L)) || 0xA5E7L)))) , (*l_523)), p_22, p_22, p_1287), &l_504, l_529[4], p_1287);
                    (*l_530) = func_70(func_70(p_22, p_22, func_70(((*l_523) = &l_504), func_70(((l_516 = 0x4807AA4228D67F7AL) , ((*l_530) = p_21)), &l_504, l_531[1][5], p_1287), (p_1287->g_36 = p_21), p_1287), p_1287), &p_1287->g_249, &p_1287->g_249, p_1287);
                }
                else
                { /* block id: 261 */
                    union U1 **l_539[9][6][4] = {{{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538}},{{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538}},{{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538}},{{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538}},{{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538}},{{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538}},{{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538}},{{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538}},{{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538},{&l_538,(void*)0,&l_538,&l_538}}};
                    int32_t l_543 = 1L;
                    uint8_t *l_544 = &p_1287->g_545;
                    int i, j, k;
                    if (p_1287->g_134)
                        goto lbl_532;
                    p_1287->g_533 = &p_1287->g_42;
                    if ((safe_add_func_uint8_t_u_u(((((p_1287->g_540 = l_538) == l_538) > ((**p_1287->g_414) < ((*p_1287->g_137) , ((0x090DC396L && ((*p_21) = (safe_mod_func_int32_t_s_s((4294967291UL == ((((*l_544) = l_543) , (+0UL)) || l_478)), l_504)))) || p_23)))) || l_543), p_1287->g_546)))
                    { /* block id: 267 */
                        uint32_t l_547[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_547[i] = 0UL;
                        if (l_547[1])
                            break;
                        return p_1287->g_138;
                    }
                    else
                    { /* block id: 270 */
                        return p_20;
                    }
                }
            }
            if (l_504)
                continue;
        }
    }
    return p_1287->g_208[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_145 p_1287->g_162 p_1287->g_114 p_1287->g_142 p_1287->g_143 p_1287->g_52 p_1287->g_85 p_1287->g_101.f0 p_1287->g_37 p_1287->g_187 p_1287->g_249 p_1287->g_309 p_1287->g_36 p_1287->g_90 p_1287->g_335 p_1287->g_141 p_1287->g_396 p_1287->g_397 p_1287->g_138
 * writes: p_1287->g_37 p_1287->g_52 p_1287->g_42.f2 p_1287->g_138 p_1287->g_141 p_1287->g_184 p_1287->g_36 p_1287->g_134 p_1287->g_30 p_1287->g_396
 */
uint32_t  func_24(uint64_t  p_25, int32_t  p_26, int32_t * p_27, int32_t * p_28, int32_t * p_29, struct S2 * p_1287)
{ /* block id: 14 */
    uint64_t l_67 = 0x92CE4CA00AF4084FL;
    int32_t *l_88 = &p_1287->g_37;
    int16_t l_146 = 0L;
    int16_t l_212 = 1L;
    int32_t l_260 = (-1L);
    int32_t l_262 = (-8L);
    int32_t l_264 = 1L;
    int32_t l_270 = (-10L);
    int32_t l_272 = 0x18C1127AL;
    int32_t l_276[5][10][5] = {{{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L}},{{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L}},{{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L}},{{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L}},{{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L},{(-1L),(-1L),0L,3L,0x12A369F4L}}};
    int8_t *l_331[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_381 = 0xC4DCL;
    uint32_t l_385 = 0x2C8A975CL;
    int32_t *l_399[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_403[6][3];
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
            l_403[i][j] = 0x37CD6E46L;
    }
lbl_185:
    for (p_1287->g_37 = 0; (p_1287->g_37 < (-8)); p_1287->g_37--)
    { /* block id: 17 */
        int32_t *l_64 = &p_1287->g_52;
        int32_t *l_65 = &p_1287->g_52;
        int32_t *l_66[8][8][4] = {{{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52}},{{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52}},{{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52}},{{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52}},{{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52}},{{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52}},{{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52}},{{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52},{&p_1287->g_52,&p_1287->g_52,&p_1287->g_37,&p_1287->g_52}}};
        uint8_t *l_84 = &p_1287->g_85[2][4][0];
        uint64_t *l_118 = (void*)0;
        uint64_t *l_147[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_147[i] = &p_1287->g_138;
        l_67--;
        for (p_1287->g_52 = 0; p_1287->g_52 < 8; p_1287->g_52 += 1)
        {
            for (p_25 = 0; p_25 < 8; p_25 += 1)
            {
                for (p_1287->g_42.f2 = 0; p_1287->g_42.f2 < 4; p_1287->g_42.f2 += 1)
                {
                    l_66[p_1287->g_52][p_25][p_1287->g_42.f2] = &p_1287->g_37;
                }
            }
        }
    }
    for (p_1287->g_138 = 8; (p_1287->g_138 == 5); --p_1287->g_138)
    { /* block id: 64 */
        uint64_t l_163 = 18446744073709551615UL;
        uint8_t *l_164 = &p_1287->g_85[2][4][0];
        int16_t *l_179 = &l_146;
        uint16_t *l_180 = &p_1287->g_141;
        uint16_t *l_181 = (void*)0;
        uint16_t *l_182[3][9] = {{&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1],(void*)0,&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1]},{&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1],(void*)0,&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1]},{&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1],(void*)0,&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1],&p_1287->g_114[1]}};
        int64_t *l_183 = &p_1287->g_184;
        int32_t *l_188 = &p_1287->g_52;
        uint8_t l_234 = 0x8EL;
        int16_t l_258 = 0x591AL;
        int32_t l_259 = 0x1075D6D8L;
        int32_t l_263 = 0x6BC78CB2L;
        int32_t l_265 = (-4L);
        int32_t l_268[4] = {(-1L),(-1L),(-1L),(-1L)};
        int32_t l_274 = 0x231FFB44L;
        uint16_t l_299 = 0UL;
        uint32_t l_316 = 4294967294UL;
        int8_t *l_330 = &p_1287->g_30;
        int i, j;
        if ((safe_div_func_int64_t_s_s(((*l_183) = ((((*l_88) = ((*l_180) = (1UL < (safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_1287->g_145, ((safe_sub_func_uint8_t_u_u(((~(safe_div_func_int16_t_s_s((p_1287->g_162 , l_163), ((((&p_1287->g_85[2][4][0] != l_164) != (safe_mul_func_int16_t_s_s(((*l_179) = (safe_mul_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u(p_1287->g_114[1], (safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(p_1287->g_142, ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s(p_25, l_163)) , l_163), 7)) , 0UL))) >= 0x4E30F3DAL), p_26)))) ^ 0L) | p_1287->g_143) , p_25), p_1287->g_52))), 65531UL))) && p_26) & p_25)))) , p_26), 0xF8L)) ^ p_1287->g_85[5][1][0]))), p_1287->g_101.f0)) && (*l_88)), 4))))) != 4L) , (*l_88))), 7L)))
        { /* block id: 69 */
            if ((*p_28))
                break;
            if (p_26)
                goto lbl_185;
            (*p_1287->g_187) = &p_1287->g_52;
        }
        else
        { /* block id: 73 */
            int32_t **l_189 = &p_1287->g_36;
            int64_t l_225 = 0x58683A89B0C404CDL;
            int32_t l_250 = 9L;
            int16_t l_267 = (-7L);
            int32_t l_271[6];
            uint8_t *l_286[7];
            uint64_t l_367 = 18446744073709551607UL;
            int8_t **l_382 = &l_331[0];
            uint32_t **l_386 = (void*)0;
            uint32_t *l_388 = (void*)0;
            uint32_t **l_387 = &l_388;
            int i;
            for (i = 0; i < 6; i++)
                l_271[i] = 0L;
            for (i = 0; i < 7; i++)
                l_286[i] = &l_234;
            (*l_189) = (p_1287->g_101.f0 , l_188);
            for (p_1287->g_134 = (-29); (p_1287->g_134 >= 28); p_1287->g_134 = safe_add_func_uint64_t_u_u(p_1287->g_134, 9))
            { /* block id: 77 */
                int8_t *l_206 = &p_1287->g_30;
                int64_t l_207 = 0x1C584D33C817C744L;
                int32_t l_217 = 0x74B60E2EL;
                int32_t l_275 = 0x07AB9D66L;
                int32_t l_278[4][5] = {{3L,6L,1L,6L,3L},{3L,6L,1L,6L,3L},{3L,6L,1L,6L,3L},{3L,6L,1L,6L,3L}};
                int i, j;
                (1 + 1);
            }
            for (l_270 = 16; (l_270 == (-10)); l_270 = safe_sub_func_uint16_t_u_u(l_270, 9))
            { /* block id: 164 */
                uint64_t l_354 = 5UL;
                uint8_t l_364 = 0x56L;
                uint64_t *l_372 = &l_367;
                (1 + 1);
            }
            if (((&p_1287->g_30 != ((*l_382) = l_164)) == (((void*)0 != &p_1287->g_30) >= ((!(((*l_387) = func_70(func_31((((void*)0 != l_330) , &p_26), p_1287->g_249, (((safe_add_func_int8_t_s_s((p_1287->g_309 , (-7L)), 0x44L)) ^ l_385) , &l_268[2]), (*l_88), p_1287), &p_1287->g_37, &l_259, p_1287)) != &p_1287->g_244)) && (*p_29)))))
            { /* block id: 198 */
                uint16_t l_395 = 0x9762L;
                (*p_28) = ((safe_div_func_int8_t_s_s(((*p_1287->g_335) = p_25), (safe_add_func_uint8_t_u_u((((void*)0 != &p_29) <= 0xC88DL), p_25)))) , ((((((*l_179) = 0x641BL) != (p_1287->g_141++)) , p_25) >= (((void*)0 != &p_1287->g_335) | l_395)) >= p_26));
                (*p_27) = 0x46ABAB98L;
            }
            else
            { /* block id: 204 */
                return p_1287->g_309.f1;
            }
        }
        (*p_1287->g_397) = p_1287->g_396;
    }
    for (p_1287->g_138 = 0; (p_1287->g_138 <= 0); p_1287->g_138 += 1)
    { /* block id: 212 */
        int32_t **l_398 = &l_88;
        int32_t l_402[8][1][3] = {{{0x5C17979AL,0x6F54A072L,0x23C65F82L}},{{0x5C17979AL,0x6F54A072L,0x23C65F82L}},{{0x5C17979AL,0x6F54A072L,0x23C65F82L}},{{0x5C17979AL,0x6F54A072L,0x23C65F82L}},{{0x5C17979AL,0x6F54A072L,0x23C65F82L}},{{0x5C17979AL,0x6F54A072L,0x23C65F82L}},{{0x5C17979AL,0x6F54A072L,0x23C65F82L}},{{0x5C17979AL,0x6F54A072L,0x23C65F82L}}};
        uint16_t l_404 = 0x6296L;
        int i, j, k;
        (*p_1287->g_187) = (l_399[1] = ((*l_398) = func_70(&l_260, &p_26, (*p_1287->g_187), p_1287)));
        --l_404;
    }
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_52 p_1287->g_36 p_1287->g_208
 * writes: p_1287->g_37 p_1287->g_52 p_1287->g_208
 */
int32_t * func_31(int32_t * p_32, uint16_t  p_33, int32_t * p_34, int64_t  p_35, struct S2 * p_1287)
{ /* block id: 10 */
    int32_t *l_53 = &p_1287->g_37;
    int32_t *l_54 = &p_1287->g_37;
    int32_t *l_55 = &p_1287->g_52;
    int32_t *l_56 = (void*)0;
    int32_t *l_57[3][5] = {{(void*)0,(void*)0,&p_1287->g_37,&p_1287->g_37,&p_1287->g_52},{(void*)0,(void*)0,&p_1287->g_37,&p_1287->g_37,&p_1287->g_52},{(void*)0,(void*)0,&p_1287->g_37,&p_1287->g_37,&p_1287->g_52}};
    int8_t l_58 = 0x70L;
    uint8_t l_59 = 251UL;
    int i, j;
    l_59++;
    (*p_1287->g_36) = (*p_34);
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_36 p_1287->g_30
 * writes: p_1287->g_37
 */
uint32_t  func_38(int32_t  p_39, struct S2 * p_1287)
{ /* block id: 5 */
    (*p_1287->g_36) = (safe_mul_func_uint16_t_u_u(p_39, 0x32B7L));
    return p_1287->g_30;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_43(int32_t  p_44, uint64_t  p_45, int32_t * p_46, int32_t * p_47, int16_t  p_48, struct S2 * p_1287)
{ /* block id: 8 */
    return p_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_90
 * writes: p_1287->g_52
 */
int32_t * func_70(int32_t * p_71, int32_t * p_72, int32_t * p_73, struct S2 * p_1287)
{ /* block id: 22 */
    int64_t l_89 = 0x6C92F0D9F09F7ADBL;
    int32_t *l_91 = &p_1287->g_52;
    (*p_1287->g_90) = (l_89 > 0x9D53036CC05FD73FL);
    l_91 = &p_1287->g_37;
    return p_71;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1288;
    struct S2* p_1287 = &c_1288;
    struct S2 c_1289 = {
        0L, // p_1287->g_30
        0x494ABC24L, // p_1287->g_37
        &p_1287->g_37, // p_1287->g_36
        {0xE35A12A2EF7E2919L}, // p_1287->g_42
        0x2E5F0E77L, // p_1287->g_52
        {{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}},{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}},{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}},{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}},{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}},{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}},{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}},{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}},{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}},{{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L},{4UL,0x59L}}}, // p_1287->g_85
        &p_1287->g_52, // p_1287->g_90
        {0x032C2DE0L,-4L,4294967290UL}, // p_1287->g_101
        {0xF356F341L}, // p_1287->g_111
        {65532UL,65532UL,65532UL}, // p_1287->g_114
        {4UL,0x7EL,1UL}, // p_1287->g_117
        0xFBC4F1BBL, // p_1287->g_134
        18446744073709551615UL, // p_1287->g_138
        &p_1287->g_138, // p_1287->g_137
        0UL, // p_1287->g_141
        0x0B4B7B0DL, // p_1287->g_142
        0xA0F1L, // p_1287->g_143
        6L, // p_1287->g_145
        {0x9C0090DE99574A33L}, // p_1287->g_162
        9L, // p_1287->g_184
        {&p_1287->g_36,&p_1287->g_36,&p_1287->g_36,&p_1287->g_36,&p_1287->g_36,&p_1287->g_36}, // p_1287->g_186
        &p_1287->g_36, // p_1287->g_187
        {{0UL,0x03L,3UL},{0UL,0x03L,3UL},{0UL,0x03L,3UL},{0UL,0x03L,3UL},{0UL,0x03L,3UL},{0UL,0x03L,3UL}}, // p_1287->g_196
        {0x3459BAA4L}, // p_1287->g_208
        0xDCE94A69L, // p_1287->g_244
        0x3C5C3625L, // p_1287->g_249
        (-9L), // p_1287->g_277
        {1UL,0x74L,1UL}, // p_1287->g_308
        {0x0E9FCC4DL,0x59L,4294967292UL}, // p_1287->g_309
        &p_1287->g_30, // p_1287->g_335
        0x54D99733C2BF1DB0L, // p_1287->g_358
        {8UL,0x47L,0x7500099BL}, // p_1287->g_396
        &p_1287->g_396, // p_1287->g_397
        (void*)0, // p_1287->g_400
        {&p_1287->g_36,&p_1287->g_36,&p_1287->g_36,&p_1287->g_36,&p_1287->g_36,&p_1287->g_36}, // p_1287->g_401
        &p_1287->g_85[7][0][0], // p_1287->g_412
        {{&p_1287->g_412,&p_1287->g_412,(void*)0,(void*)0,&p_1287->g_412,(void*)0,(void*)0},{&p_1287->g_412,&p_1287->g_412,(void*)0,(void*)0,&p_1287->g_412,(void*)0,(void*)0},{&p_1287->g_412,&p_1287->g_412,(void*)0,(void*)0,&p_1287->g_412,(void*)0,(void*)0}}, // p_1287->g_411
        &p_1287->g_412, // p_1287->g_414
        &p_1287->g_414, // p_1287->g_413
        &p_1287->g_36, // p_1287->g_441
        {0xDA2966DCFDB93C4EL}, // p_1287->g_458
        {0UL,0UL,0UL,0UL,0UL}, // p_1287->g_464
        {{0x2DD164FED14B5A26L},{0x2DD164FED14B5A26L},{0x2DD164FED14B5A26L},{0x2DD164FED14B5A26L},{0x2DD164FED14B5A26L},{0x2DD164FED14B5A26L},{0x2DD164FED14B5A26L},{0x2DD164FED14B5A26L}}, // p_1287->g_498
        &p_1287->g_498[7], // p_1287->g_533
        (void*)0, // p_1287->g_540
        0xE4L, // p_1287->g_545
        (-5L), // p_1287->g_546
        (void*)0, // p_1287->g_548
        0x144834A74A583837L, // p_1287->g_565
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_1287->g_578
        {{1UL},{7UL},{1UL},{1UL},{7UL},{1UL}}, // p_1287->g_595
        0x2AB52523L, // p_1287->g_606
        &p_1287->g_540, // p_1287->g_624
        &p_1287->g_624, // p_1287->g_623
        {0x4BC27B72L,2L,0x2365C0A6L}, // p_1287->g_627
        0x4A246E9DL, // p_1287->g_645
        {7UL}, // p_1287->g_658
        {18446744073709551615UL}, // p_1287->g_749
        {0xD0CF5D8637A68909L}, // p_1287->g_824
        {65529UL,65529UL,65529UL,65529UL}, // p_1287->g_834
        {{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}},{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}},{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}},{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}},{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}},{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}},{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}},{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}},{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}},{{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL},{65535UL,0UL,65528UL}}}, // p_1287->g_835
        {{{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL}},{{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL}},{{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL}},{{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL},{65528UL,65535UL,65535UL,0x899CL,0xFB72L,65535UL,65526UL,0x7AEBL,65530UL}}}, // p_1287->g_836
        {{4UL,0xDC11L,4UL,0xDC11L,4UL,4UL},{4UL,0xDC11L,4UL,0xDC11L,4UL,4UL},{4UL,0xDC11L,4UL,0xDC11L,4UL,4UL},{4UL,0xDC11L,4UL,0xDC11L,4UL,4UL},{4UL,0xDC11L,4UL,0xDC11L,4UL,4UL},{4UL,0xDC11L,4UL,0xDC11L,4UL,4UL}}, // p_1287->g_837
        65535UL, // p_1287->g_838
        0x4428L, // p_1287->g_839
        0UL, // p_1287->g_840
        {{65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL}}, // p_1287->g_841
        0x61EFL, // p_1287->g_842
        0x45F6L, // p_1287->g_843
        0x57B8L, // p_1287->g_844
        0x9C3DL, // p_1287->g_845
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_1287->g_846
        0xD282L, // p_1287->g_847
        0x711EL, // p_1287->g_848
        1UL, // p_1287->g_849
        0x204AL, // p_1287->g_850
        0xD11AL, // p_1287->g_851
        0x76C5L, // p_1287->g_852
        {{0UL},{0UL},{0UL}}, // p_1287->g_853
        1UL, // p_1287->g_854
        65527UL, // p_1287->g_855
        {{(void*)0,(void*)0,&p_1287->g_853[1][0],&p_1287->g_834[1],&p_1287->g_849,&p_1287->g_834[1],&p_1287->g_853[1][0],(void*)0,(void*)0,&p_1287->g_853[1][0]},{(void*)0,(void*)0,&p_1287->g_853[1][0],&p_1287->g_834[1],&p_1287->g_849,&p_1287->g_834[1],&p_1287->g_853[1][0],(void*)0,(void*)0,&p_1287->g_853[1][0]},{(void*)0,(void*)0,&p_1287->g_853[1][0],&p_1287->g_834[1],&p_1287->g_849,&p_1287->g_834[1],&p_1287->g_853[1][0],(void*)0,(void*)0,&p_1287->g_853[1][0]},{(void*)0,(void*)0,&p_1287->g_853[1][0],&p_1287->g_834[1],&p_1287->g_849,&p_1287->g_834[1],&p_1287->g_853[1][0],(void*)0,(void*)0,&p_1287->g_853[1][0]},{(void*)0,(void*)0,&p_1287->g_853[1][0],&p_1287->g_834[1],&p_1287->g_849,&p_1287->g_834[1],&p_1287->g_853[1][0],(void*)0,(void*)0,&p_1287->g_853[1][0]},{(void*)0,(void*)0,&p_1287->g_853[1][0],&p_1287->g_834[1],&p_1287->g_849,&p_1287->g_834[1],&p_1287->g_853[1][0],(void*)0,(void*)0,&p_1287->g_853[1][0]},{(void*)0,(void*)0,&p_1287->g_853[1][0],&p_1287->g_834[1],&p_1287->g_849,&p_1287->g_834[1],&p_1287->g_853[1][0],(void*)0,(void*)0,&p_1287->g_853[1][0]},{(void*)0,(void*)0,&p_1287->g_853[1][0],&p_1287->g_834[1],&p_1287->g_849,&p_1287->g_834[1],&p_1287->g_853[1][0],(void*)0,(void*)0,&p_1287->g_853[1][0]}}, // p_1287->g_833
        &p_1287->g_833[2][9], // p_1287->g_832
        &p_1287->g_832, // p_1287->g_831
        {0UL}, // p_1287->g_894
        {{{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL},{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL}},{{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL},{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL}},{{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL},{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL}},{{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL},{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL}},{{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL},{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL}},{{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL},{4294967292UL,0x05L,4294967287UL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{0x0EB4B930L,-1L,0xBD37BB3AL},{0xDB9D7355L,0x04L,0xD0A9C86EL},{4294967292UL,0x05L,4294967287UL}}}, // p_1287->g_895
        0x612AL, // p_1287->g_919
        &p_1287->g_411[2][6], // p_1287->g_992
        &p_1287->g_992, // p_1287->g_991
        &p_1287->g_114[1], // p_1287->g_1017
        &p_1287->g_1017, // p_1287->g_1016
        {{0x0D0C7DBD24EF2A26L},{0x0D0C7DBD24EF2A26L},{0x0D0C7DBD24EF2A26L},{0x0D0C7DBD24EF2A26L},{0x0D0C7DBD24EF2A26L},{0x0D0C7DBD24EF2A26L},{0x0D0C7DBD24EF2A26L},{0x0D0C7DBD24EF2A26L},{0x0D0C7DBD24EF2A26L}}, // p_1287->g_1060
        {7UL,0x38L,4294967291UL}, // p_1287->g_1073
        {0UL}, // p_1287->g_1078
        {18446744073709551608UL}, // p_1287->g_1090
        0x110A2EE8L, // p_1287->g_1158
        {&p_1287->g_548,&p_1287->g_548,&p_1287->g_548,&p_1287->g_548,&p_1287->g_548}, // p_1287->g_1161
        &p_1287->g_36, // p_1287->g_1162
        (void*)0, // p_1287->g_1172
        &p_1287->g_36, // p_1287->g_1173
        0x11F36CF48C81D855L, // p_1287->g_1196
        {{{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}},{{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}},{{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}},{{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}},{{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}},{{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}},{{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}},{{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}},{{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}}}, // p_1287->g_1220
        {&p_1287->g_1016,&p_1287->g_1016,&p_1287->g_1016}, // p_1287->g_1248
        (void*)0, // p_1287->g_1274
        &p_1287->g_548, // p_1287->g_1276
        {{(void*)0,&p_1287->g_184,&p_1287->g_184},{(void*)0,&p_1287->g_184,&p_1287->g_184},{(void*)0,&p_1287->g_184,&p_1287->g_184},{(void*)0,&p_1287->g_184,&p_1287->g_184},{(void*)0,&p_1287->g_184,&p_1287->g_184},{(void*)0,&p_1287->g_184,&p_1287->g_184},{(void*)0,&p_1287->g_184,&p_1287->g_184},{(void*)0,&p_1287->g_184,&p_1287->g_184},{(void*)0,&p_1287->g_184,&p_1287->g_184},{(void*)0,&p_1287->g_184,&p_1287->g_184}}, // p_1287->g_1284
        &p_1287->g_1284[7][0], // p_1287->g_1283
    };
    c_1288 = c_1289;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1287);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1287->g_30, "p_1287->g_30", print_hash_value);
    transparent_crc(p_1287->g_37, "p_1287->g_37", print_hash_value);
    transparent_crc(p_1287->g_42.f0, "p_1287->g_42.f0", print_hash_value);
    transparent_crc(p_1287->g_52, "p_1287->g_52", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1287->g_85[i][j][k], "p_1287->g_85[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1287->g_101.f0, "p_1287->g_101.f0", print_hash_value);
    transparent_crc(p_1287->g_101.f1, "p_1287->g_101.f1", print_hash_value);
    transparent_crc(p_1287->g_101.f2, "p_1287->g_101.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1287->g_111[i], "p_1287->g_111[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1287->g_114[i], "p_1287->g_114[i]", print_hash_value);

    }
    transparent_crc(p_1287->g_117.f0, "p_1287->g_117.f0", print_hash_value);
    transparent_crc(p_1287->g_117.f1, "p_1287->g_117.f1", print_hash_value);
    transparent_crc(p_1287->g_117.f2, "p_1287->g_117.f2", print_hash_value);
    transparent_crc(p_1287->g_134, "p_1287->g_134", print_hash_value);
    transparent_crc(p_1287->g_138, "p_1287->g_138", print_hash_value);
    transparent_crc(p_1287->g_141, "p_1287->g_141", print_hash_value);
    transparent_crc(p_1287->g_142, "p_1287->g_142", print_hash_value);
    transparent_crc(p_1287->g_143, "p_1287->g_143", print_hash_value);
    transparent_crc(p_1287->g_145, "p_1287->g_145", print_hash_value);
    transparent_crc(p_1287->g_162.f0, "p_1287->g_162.f0", print_hash_value);
    transparent_crc(p_1287->g_184, "p_1287->g_184", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1287->g_196[i].f0, "p_1287->g_196[i].f0", print_hash_value);
        transparent_crc(p_1287->g_196[i].f1, "p_1287->g_196[i].f1", print_hash_value);
        transparent_crc(p_1287->g_196[i].f2, "p_1287->g_196[i].f2", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1287->g_208[i], "p_1287->g_208[i]", print_hash_value);

    }
    transparent_crc(p_1287->g_244, "p_1287->g_244", print_hash_value);
    transparent_crc(p_1287->g_249, "p_1287->g_249", print_hash_value);
    transparent_crc(p_1287->g_277, "p_1287->g_277", print_hash_value);
    transparent_crc(p_1287->g_308.f0, "p_1287->g_308.f0", print_hash_value);
    transparent_crc(p_1287->g_308.f1, "p_1287->g_308.f1", print_hash_value);
    transparent_crc(p_1287->g_308.f2, "p_1287->g_308.f2", print_hash_value);
    transparent_crc(p_1287->g_309.f0, "p_1287->g_309.f0", print_hash_value);
    transparent_crc(p_1287->g_309.f1, "p_1287->g_309.f1", print_hash_value);
    transparent_crc(p_1287->g_309.f2, "p_1287->g_309.f2", print_hash_value);
    transparent_crc(p_1287->g_358, "p_1287->g_358", print_hash_value);
    transparent_crc(p_1287->g_396.f0, "p_1287->g_396.f0", print_hash_value);
    transparent_crc(p_1287->g_396.f1, "p_1287->g_396.f1", print_hash_value);
    transparent_crc(p_1287->g_396.f2, "p_1287->g_396.f2", print_hash_value);
    transparent_crc(p_1287->g_458.f0, "p_1287->g_458.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1287->g_464[i], "p_1287->g_464[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1287->g_498[i].f0, "p_1287->g_498[i].f0", print_hash_value);

    }
    transparent_crc(p_1287->g_545, "p_1287->g_545", print_hash_value);
    transparent_crc(p_1287->g_546, "p_1287->g_546", print_hash_value);
    transparent_crc(p_1287->g_565, "p_1287->g_565", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1287->g_578[i], "p_1287->g_578[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1287->g_595[i].f0, "p_1287->g_595[i].f0", print_hash_value);

    }
    transparent_crc(p_1287->g_606, "p_1287->g_606", print_hash_value);
    transparent_crc(p_1287->g_627.f0, "p_1287->g_627.f0", print_hash_value);
    transparent_crc(p_1287->g_627.f1, "p_1287->g_627.f1", print_hash_value);
    transparent_crc(p_1287->g_627.f2, "p_1287->g_627.f2", print_hash_value);
    transparent_crc(p_1287->g_645, "p_1287->g_645", print_hash_value);
    transparent_crc(p_1287->g_658.f0, "p_1287->g_658.f0", print_hash_value);
    transparent_crc(p_1287->g_749.f0, "p_1287->g_749.f0", print_hash_value);
    transparent_crc(p_1287->g_824.f0, "p_1287->g_824.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1287->g_834[i], "p_1287->g_834[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1287->g_835[i][j][k], "p_1287->g_835[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1287->g_836[i][j][k], "p_1287->g_836[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1287->g_837[i][j], "p_1287->g_837[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1287->g_838, "p_1287->g_838", print_hash_value);
    transparent_crc(p_1287->g_839, "p_1287->g_839", print_hash_value);
    transparent_crc(p_1287->g_840, "p_1287->g_840", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1287->g_841[i][j], "p_1287->g_841[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1287->g_842, "p_1287->g_842", print_hash_value);
    transparent_crc(p_1287->g_843, "p_1287->g_843", print_hash_value);
    transparent_crc(p_1287->g_844, "p_1287->g_844", print_hash_value);
    transparent_crc(p_1287->g_845, "p_1287->g_845", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1287->g_846[i], "p_1287->g_846[i]", print_hash_value);

    }
    transparent_crc(p_1287->g_847, "p_1287->g_847", print_hash_value);
    transparent_crc(p_1287->g_848, "p_1287->g_848", print_hash_value);
    transparent_crc(p_1287->g_849, "p_1287->g_849", print_hash_value);
    transparent_crc(p_1287->g_850, "p_1287->g_850", print_hash_value);
    transparent_crc(p_1287->g_851, "p_1287->g_851", print_hash_value);
    transparent_crc(p_1287->g_852, "p_1287->g_852", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1287->g_853[i][j], "p_1287->g_853[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1287->g_854, "p_1287->g_854", print_hash_value);
    transparent_crc(p_1287->g_855, "p_1287->g_855", print_hash_value);
    transparent_crc(p_1287->g_894.f0, "p_1287->g_894.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1287->g_895[i][j].f0, "p_1287->g_895[i][j].f0", print_hash_value);
            transparent_crc(p_1287->g_895[i][j].f1, "p_1287->g_895[i][j].f1", print_hash_value);
            transparent_crc(p_1287->g_895[i][j].f2, "p_1287->g_895[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_1287->g_919, "p_1287->g_919", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1287->g_1060[i].f0, "p_1287->g_1060[i].f0", print_hash_value);

    }
    transparent_crc(p_1287->g_1073.f0, "p_1287->g_1073.f0", print_hash_value);
    transparent_crc(p_1287->g_1073.f1, "p_1287->g_1073.f1", print_hash_value);
    transparent_crc(p_1287->g_1073.f2, "p_1287->g_1073.f2", print_hash_value);
    transparent_crc(p_1287->g_1090.f0, "p_1287->g_1090.f0", print_hash_value);
    transparent_crc(p_1287->g_1158, "p_1287->g_1158", print_hash_value);
    transparent_crc(p_1287->g_1196, "p_1287->g_1196", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1287->g_1220[i][j][k], "p_1287->g_1220[i][j][k]", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
