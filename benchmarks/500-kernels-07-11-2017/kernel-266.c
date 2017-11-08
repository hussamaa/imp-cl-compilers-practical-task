// -g 21,3,73 -l 7,1,1
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


// Seed: 518743220

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint16_t  f0;
   volatile uint64_t  f1;
   uint32_t  f2;
   int32_t  f3;
};

struct S1 {
    volatile int32_t g_2;
    int32_t g_3;
    int16_t g_27;
    uint64_t g_38;
    int16_t g_42[4];
    uint8_t g_68;
    uint8_t g_77;
    int64_t g_84;
    uint32_t g_94;
    int32_t g_121;
    int32_t * volatile g_120[2][2];
    int32_t * volatile g_123;
    int32_t *g_125;
    int32_t ** volatile g_124;
    int8_t g_150;
    int32_t * volatile g_151;
    int32_t *g_166;
    int32_t * volatile g_173;
    uint32_t g_208;
    int32_t * volatile g_217;
    uint16_t g_226[6][4][8];
    int32_t * volatile g_235[8][7];
    int32_t * volatile g_278[8][10][3];
    int16_t *g_291;
    int16_t **g_290;
    int16_t *g_301;
    int32_t g_334;
    int32_t * volatile g_333;
    uint16_t * volatile g_352;
    uint16_t * volatile * volatile g_351;
    volatile union U0 g_354;
    volatile union U0 *g_358;
    int64_t g_399;
    union U0 g_415;
    int8_t g_439;
    uint16_t g_444;
    int32_t ** volatile g_449;
    uint64_t g_468;
    uint8_t *g_485;
    uint64_t g_487;
    int32_t ** volatile g_506;
    int32_t ** volatile g_515;
    uint32_t *g_575;
    union U0 g_586;
    uint32_t g_606;
    int32_t g_638;
    volatile int32_t **g_661;
    volatile int32_t ***g_660;
    volatile int16_t g_675;
    volatile int16_t *g_674;
    volatile int16_t * volatile * volatile g_673;
    volatile int16_t * volatile * volatile *g_672;
    volatile int16_t * volatile * volatile **g_671;
    int32_t g_894;
    int32_t * volatile g_919;
    volatile union U0 g_934;
    volatile union U0 g_981[6][7];
    int32_t ** volatile g_988[1];
    int32_t ** volatile g_989[9][5];
    int32_t ** volatile g_990;
    uint64_t *g_993[1];
    uint64_t **g_992;
    union U0 g_1005[5];
    int32_t g_1017;
    union U0 *g_1050[5];
    union U0 **g_1049;
    volatile union U0 g_1072;
    int16_t ***g_1103;
    int16_t ****g_1102;
    int32_t ** volatile g_1145;
    volatile int8_t g_1148;
    int32_t ** volatile g_1187;
    int32_t *g_1188;
    int64_t g_1238;
    union U0 g_1239;
    int32_t ** volatile g_1241;
};


/* --- FORWARD DECLARATIONS --- */
uint8_t  func_1(struct S1 * p_1281);
int32_t * func_6(int32_t  p_7, struct S1 * p_1281);
int64_t  func_14(int32_t * p_15, uint64_t  p_16, int32_t * p_17, int32_t * p_18, struct S1 * p_1281);
int32_t * func_19(int32_t  p_20, int32_t * p_21, uint64_t  p_22, struct S1 * p_1281);
int32_t * func_29(uint32_t  p_30, struct S1 * p_1281);
uint32_t  func_31(int32_t * p_32, uint16_t  p_33, int32_t * p_34, struct S1 * p_1281);
uint16_t  func_47(int32_t * p_48, int32_t * p_49, uint32_t  p_50, int16_t * p_51, int64_t  p_52, struct S1 * p_1281);
int32_t * func_53(int16_t  p_54, int32_t  p_55, int8_t  p_56, int32_t * p_57, struct S1 * p_1281);
int8_t  func_73(int32_t * p_74, int32_t * p_75, struct S1 * p_1281);
int32_t * func_78(uint32_t  p_79, struct S1 * p_1281);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1281->g_3 p_1281->g_444
 * writes: p_1281->g_3
 */
uint8_t  func_1(struct S1 * p_1281)
{ /* block id: 4 */
    int64_t l_8 = 0L;
    int64_t l_28 = (-7L);
    int32_t *l_35 = (void*)0;
    int32_t *l_1196 = (void*)0;
    int32_t *l_1199[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1199[i] = &p_1281->g_3;
    for (p_1281->g_3 = (-20); (p_1281->g_3 == 6); p_1281->g_3 = safe_add_func_int8_t_s_s(p_1281->g_3, 8))
    { /* block id: 7 */
        int64_t l_13 = (-1L);
        int16_t *l_25 = (void*)0;
        int16_t *l_26 = &p_1281->g_27;
        int32_t *l_36 = &p_1281->g_3;
        int32_t **l_1189 = &l_36;
        int32_t **l_1190 = (void*)0;
        int32_t **l_1191 = &p_1281->g_166;
        int32_t **l_1192 = &p_1281->g_166;
        int32_t **l_1193 = &p_1281->g_125;
        int32_t **l_1194 = (void*)0;
        int32_t **l_1195 = &p_1281->g_1188;
        int32_t **l_1197 = &p_1281->g_125;
        int32_t *l_1198 = &p_1281->g_121;
        int64_t *l_1237 = &p_1281->g_1238;
        (1 + 1);
    }
    return p_1281->g_444;
}


/* ------------------------------------------ */
/* 
 * reads : p_1281->g_1239 p_1281->g_1241 p_1281->g_94 p_1281->g_334 p_1281->g_934.f0 p_1281->g_208 p_1281->g_992 p_1281->g_993 p_1281->g_468 p_1281->g_894 p_1281->g_415.f0 p_1281->g_301 p_1281->g_42 p_1281->g_1238 p_1281->g_1188
 * writes: p_1281->g_1188 p_1281->g_94 p_1281->g_334 p_1281->g_1239.f0 p_1281->g_468
 */
int32_t * func_6(int32_t  p_7, struct S1 * p_1281)
{ /* block id: 545 */
    int32_t *l_1240 = &p_1281->g_334;
    int32_t l_1242 = 0x4EC9F657L;
    int16_t *****l_1243 = (void*)0;
    uint32_t *l_1248[8] = {&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94};
    int64_t *l_1253 = &p_1281->g_84;
    int16_t ****l_1266[3];
    uint32_t l_1267 = 4294967286UL;
    uint16_t *l_1268 = &p_1281->g_1239.f0;
    int32_t l_1269 = 0x50813331L;
    int32_t *l_1280 = &p_1281->g_3;
    int i;
    for (i = 0; i < 3; i++)
        l_1266[i] = &p_1281->g_1103;
    (*p_1281->g_1241) = (p_1281->g_1239 , l_1240);
    l_1269 = ((l_1242 >= (l_1243 == l_1243)) > (((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((*l_1240) &= (--p_1281->g_94)), l_1242)), ((*l_1268) = ((p_1281->g_934.f0 >= (l_1267 = ((safe_lshift_func_uint8_t_u_s((((((l_1253 != (((safe_rshift_func_int8_t_s_u((0x3B82L <= (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_1242 || (((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((((safe_div_func_int8_t_s_s((l_1266[2] != (void*)0), 0x6CL)) , p_7) ^ 4L) , p_7), p_7)), p_1281->g_208)) != (**p_1281->g_992)) || p_7)), l_1242)), p_1281->g_894))), p_7)) >= (-3L)) , (void*)0)) < p_7) , 0x4154E5DA44B13BFFL) , (void*)0) != (void*)0), 7)) <= 0x5255L))) || p_1281->g_415.f0)))) == (*p_1281->g_301)) > 0xBE9D3CEFL));
    (*p_1281->g_1188) = (safe_mod_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u(p_7, (0UL ^ (((((**p_1281->g_992) = (((void*)0 != &l_1269) >= (safe_add_func_uint64_t_u_u(0xC5C989DB8560DBEEL, ((safe_lshift_func_int16_t_s_u((&l_1268 != &l_1268), 15)) <= (safe_sub_func_uint16_t_u_u(((((p_1281->g_934.f0 , 0xD48FL) || p_7) , &l_1268) != (void*)0), (-1L)))))))) | p_7) & 0xB30E8BD4C89FB215L) <= (*l_1240))))) , p_1281->g_1238), 1L));
    return l_1280;
}


/* ------------------------------------------ */
/* 
 * reads : p_1281->g_894 p_1281->g_301 p_1281->g_672 p_1281->g_673 p_1281->g_674 p_1281->g_675 p_1281->g_77
 * writes: p_1281->g_42 p_1281->g_77 p_1281->g_439 p_1281->g_894 p_1281->g_487 p_1281->g_125
 */
int64_t  func_14(int32_t * p_15, uint64_t  p_16, int32_t * p_17, int32_t * p_18, struct S1 * p_1281)
{ /* block id: 521 */
    int16_t l_1205[10][2];
    int32_t l_1206 = 2L;
    int32_t *l_1209 = &p_1281->g_638;
    int32_t l_1224[9][7][4] = {{{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L}},{{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L}},{{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L}},{{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L}},{{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L}},{{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L}},{{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L}},{{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L}},{{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L},{0x36ADF86EL,0x64418907L,0x63A16B4FL,6L}}};
    int32_t l_1225[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_1205[i][j] = 0x02EEL;
    }
    if (((safe_mul_func_int8_t_s_s((l_1206 ^= (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u(l_1205[4][0])) >= l_1205[1][0]), 65534UL))), (safe_lshift_func_uint8_t_u_s((p_1281->g_894 > (l_1209 != ((safe_lshift_func_uint16_t_u_u(((l_1205[4][0] != (-10L)) > (0x3AL >= (safe_rshift_func_int16_t_s_u((+(l_1225[1] = ((safe_mod_func_int32_t_s_s((((l_1224[0][0][3] |= ((*p_1281->g_301) = (safe_div_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(l_1205[4][0], p_16)), l_1205[9][0])) , 1UL), p_16)))) && (***p_1281->g_672)) , 0x38C4657AL), l_1205[4][0])) >= 0x20A68D09L))), 11)))), 11)) , p_18))), 3)))) || p_16))
    { /* block id: 526 */
        uint8_t *l_1226 = (void*)0;
        uint8_t *l_1227 = &p_1281->g_77;
        int8_t *l_1230 = &p_1281->g_439;
        l_1206 |= (((*l_1227)--) || ((*l_1230) = 0x26L));
        l_1224[6][0][2] ^= ((~p_16) & l_1225[1]);
    }
    else
    { /* block id: 531 */
        int32_t *l_1231[7][5] = {{&l_1225[3],&p_1281->g_1017,&l_1225[3],&l_1225[3],&p_1281->g_1017},{&l_1225[3],&p_1281->g_1017,&l_1225[3],&l_1225[3],&p_1281->g_1017},{&l_1225[3],&p_1281->g_1017,&l_1225[3],&l_1225[3],&p_1281->g_1017},{&l_1225[3],&p_1281->g_1017,&l_1225[3],&l_1225[3],&p_1281->g_1017},{&l_1225[3],&p_1281->g_1017,&l_1225[3],&l_1225[3],&p_1281->g_1017},{&l_1225[3],&p_1281->g_1017,&l_1225[3],&l_1225[3],&p_1281->g_1017},{&l_1225[3],&p_1281->g_1017,&l_1225[3],&l_1225[3],&p_1281->g_1017}};
        int i, j;
        l_1231[5][2] = &l_1225[3];
    }
    for (p_1281->g_894 = 0; (p_1281->g_894 <= 12); p_1281->g_894 = safe_add_func_int8_t_s_s(p_1281->g_894, 6))
    { /* block id: 536 */
        for (p_1281->g_487 = (-28); (p_1281->g_487 != 15); ++p_1281->g_487)
        { /* block id: 539 */
            int32_t **l_1236 = &p_1281->g_125;
            (*l_1236) = (void*)0;
        }
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_1281->g_638 p_1281->g_992 p_1281->g_993 p_1281->g_468 p_1281->g_150 p_1281->g_415.f3 p_1281->g_1187 p_1281->g_166 p_1281->g_1188
 * writes: p_1281->g_638 p_1281->g_485 p_1281->g_334 p_1281->g_415.f3 p_1281->g_166
 */
int32_t * func_19(int32_t  p_20, int32_t * p_21, uint64_t  p_22, struct S1 * p_1281)
{ /* block id: 500 */
    union U0 **l_1160[9][8] = {{(void*)0,&p_1281->g_1050[1],&p_1281->g_1050[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1281->g_1050[1],&p_1281->g_1050[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1281->g_1050[1],&p_1281->g_1050[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1281->g_1050[1],&p_1281->g_1050[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1281->g_1050[1],&p_1281->g_1050[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1281->g_1050[1],&p_1281->g_1050[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1281->g_1050[1],&p_1281->g_1050[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1281->g_1050[1],&p_1281->g_1050[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1281->g_1050[1],&p_1281->g_1050[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_1164 = 0L;
    uint8_t *l_1171 = &p_1281->g_77;
    uint32_t l_1184 = 0x5A6998FDL;
    int i, j;
    for (p_1281->g_638 = 0; (p_1281->g_638 == 12); ++p_1281->g_638)
    { /* block id: 503 */
        uint16_t l_1161 = 1UL;
        uint8_t *l_1170 = (void*)0;
        uint8_t **l_1172 = (void*)0;
        uint8_t **l_1173[8] = {&l_1171,&l_1171,&l_1171,&l_1171,&l_1171,&l_1171,&l_1171,&l_1171};
        int32_t *l_1174 = (void*)0;
        int32_t *l_1175 = (void*)0;
        int32_t *l_1176 = &p_1281->g_334;
        int32_t l_1183[4][9] = {{0x1C058E43L,0x799F74AFL,0x2F3C0C86L,0x799F74AFL,0x1C058E43L,0x1C058E43L,0x799F74AFL,0x2F3C0C86L,0x799F74AFL},{0x1C058E43L,0x799F74AFL,0x2F3C0C86L,0x799F74AFL,0x1C058E43L,0x1C058E43L,0x799F74AFL,0x2F3C0C86L,0x799F74AFL},{0x1C058E43L,0x799F74AFL,0x2F3C0C86L,0x799F74AFL,0x1C058E43L,0x1C058E43L,0x799F74AFL,0x2F3C0C86L,0x799F74AFL},{0x1C058E43L,0x799F74AFL,0x2F3C0C86L,0x799F74AFL,0x1C058E43L,0x1C058E43L,0x799F74AFL,0x2F3C0C86L,0x799F74AFL}};
        int i, j;
        (*l_1176) = (safe_div_func_uint32_t_u_u(((((l_1160[7][2] == &p_1281->g_1050[0]) == (**p_1281->g_992)) | (l_1161 > (p_22 <= (safe_div_func_int8_t_s_s((~0L), l_1164))))) | ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s((l_1170 != (l_1171 = (p_1281->g_485 = l_1171))))), l_1164)), p_1281->g_150)) < p_22)), 0xC3691335L));
        for (p_1281->g_415.f3 = 27; (p_1281->g_415.f3 > (-17)); p_1281->g_415.f3 = safe_sub_func_int8_t_s_s(p_1281->g_415.f3, 2))
        { /* block id: 509 */
            int32_t *l_1179 = &p_1281->g_334;
            int32_t *l_1180 = &p_1281->g_894;
            int32_t *l_1181 = &p_1281->g_121;
            int32_t *l_1182[4] = {&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121};
            int i;
            l_1184++;
        }
    }
    (*p_1281->g_1187) = &p_20;
    (*p_1281->g_166) = l_1164;
    return p_1281->g_1188;
}


/* ------------------------------------------ */
/* 
 * reads : p_1281->g_150 p_1281->g_333 p_1281->g_334 p_1281->g_1145 p_1281->g_166
 * writes: p_1281->g_150 p_1281->g_334 p_1281->g_166
 */
int32_t * func_29(uint32_t  p_30, struct S1 * p_1281)
{ /* block id: 490 */
    int16_t l_1141 = 0x6359L;
    int32_t l_1146[2];
    int64_t l_1149[3][1][6] = {{{0x132224C35C03EAB2L,(-3L),0x349E033BA186B396L,0x3847366D53AD6978L,(-3L),0x3847366D53AD6978L}},{{0x132224C35C03EAB2L,(-3L),0x349E033BA186B396L,0x3847366D53AD6978L,(-3L),0x3847366D53AD6978L}},{{0x132224C35C03EAB2L,(-3L),0x349E033BA186B396L,0x3847366D53AD6978L,(-3L),0x3847366D53AD6978L}}};
    int32_t *l_1153 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1146[i] = (-2L);
    for (p_1281->g_150 = 0; (p_1281->g_150 < (-9)); --p_1281->g_150)
    { /* block id: 493 */
        int32_t *l_1144 = &p_1281->g_334;
        int32_t *l_1147[5];
        uint64_t l_1150 = 0x6FA597FDCAA34F90L;
        int i;
        for (i = 0; i < 5; i++)
            l_1147[i] = (void*)0;
        (*p_1281->g_333) &= ((l_1141 != l_1141) , (safe_lshift_func_uint8_t_u_u(255UL, 2)));
        (*p_1281->g_1145) = l_1144;
        (*p_1281->g_166) = p_30;
        --l_1150;
    }
    return l_1153;
}


/* ------------------------------------------ */
/* 
 * reads : p_1281->g_38 p_1281->g_3 p_1281->g_42 p_1281->g_2 p_1281->g_68 p_1281->g_77 p_1281->g_123 p_1281->g_124 p_1281->g_125 p_1281->g_150 p_1281->g_151 p_1281->g_121 p_1281->g_84 p_1281->g_166 p_1281->g_173 p_1281->g_94 p_1281->g_208 p_1281->g_217 p_1281->g_226 p_1281->g_301 p_1281->g_333 p_1281->g_351 p_1281->g_354 p_1281->g_358 p_1281->g_334 p_1281->g_399 p_1281->g_449 p_1281->g_439 p_1281->g_444 p_1281->g_415.f0 p_1281->g_290 p_1281->g_291 p_1281->g_354.f0 p_1281->g_515 p_1281->g_468 p_1281->g_919 p_1281->g_352 p_1281->g_934 p_1281->g_671 p_1281->g_672 p_1281->g_673 p_1281->g_674 p_1281->g_675 p_1281->g_894 p_1281->g_638 p_1281->g_990 p_1281->g_992 p_1281->g_993 p_1281->g_660 p_1281->g_661 p_1281->g_1072 p_1281->g_586.f2 p_1281->g_1102 p_1281->g_1017
 * writes: p_1281->g_38 p_1281->g_68 p_1281->g_77 p_1281->g_84 p_1281->g_121 p_1281->g_125 p_1281->g_150 p_1281->g_42 p_1281->g_94 p_1281->g_208 p_1281->g_226 p_1281->g_290 p_1281->g_291 p_1281->g_301 p_1281->g_334 p_1281->g_358 p_1281->g_399 p_1281->g_575 p_1281->g_894 p_1281->g_415.f0 p_1281->g_439 p_1281->g_638 p_1281->g_468 p_1281->g_1049 p_1281->g_586.f2 p_1281->g_1102 p_1281->g_1017
 */
uint32_t  func_31(int32_t * p_32, uint16_t  p_33, int32_t * p_34, struct S1 * p_1281)
{ /* block id: 9 */
    int32_t *l_37[9][2][6] = {{{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3},{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3}},{{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3},{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3}},{{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3},{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3}},{{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3},{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3}},{{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3},{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3}},{{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3},{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3}},{{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3},{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3}},{{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3},{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3}},{{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3},{&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3,&p_1281->g_3}}};
    int16_t *l_41[3];
    uint64_t *l_60 = (void*)0;
    uint64_t *l_61 = (void*)0;
    int16_t l_1132[6] = {1L,1L,1L,1L,1L,1L};
    int32_t l_1133 = 0x566A3081L;
    int32_t l_1134[5][2][2] = {{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}}};
    int16_t l_1135 = (-4L);
    uint8_t l_1136 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_41[i] = &p_1281->g_42[3];
    ++p_1281->g_38;
    p_1281->g_1017 |= ((((void*)0 == l_41[1]) & ((safe_add_func_int32_t_s_s((*p_34), ((safe_sub_func_uint16_t_u_u(func_47(func_53(((l_37[4][1][3] != (void*)0) , ((safe_rshift_func_uint8_t_u_s((((p_1281->g_38--) || (safe_add_func_uint8_t_u_u(p_33, ((safe_mul_func_uint8_t_u_u(p_1281->g_42[3], (((p_1281->g_68 = (*p_34)) != ((&p_1281->g_42[3] != &p_1281->g_42[3]) & p_1281->g_2)) != p_33))) | p_33)))) <= p_33), 3)) > 0x9CC5119B5F814D19L)), p_1281->g_42[0], p_1281->g_3, &p_1281->g_3, p_1281), &p_1281->g_3, p_1281->g_468, l_41[1], p_1281->g_439, p_1281), 0x0B86L)) , (*p_1281->g_166)))) < (-1L))) <= 0UL);
    ++l_1136;
    return p_1281->g_675;
}


/* ------------------------------------------ */
/* 
 * reads : p_1281->g_919 p_1281->g_333 p_1281->g_334 p_1281->g_42 p_1281->g_352 p_1281->g_226 p_1281->g_351 p_1281->g_934 p_1281->g_671 p_1281->g_672 p_1281->g_673 p_1281->g_674 p_1281->g_675 p_1281->g_301 p_1281->g_468 p_1281->g_894 p_1281->g_3 p_1281->g_121 p_1281->g_638 p_1281->g_990 p_1281->g_38 p_1281->g_77 p_1281->g_123 p_1281->g_124 p_1281->g_125 p_1281->g_150 p_1281->g_151 p_1281->g_68 p_1281->g_84 p_1281->g_166 p_1281->g_992 p_1281->g_993 p_1281->g_660 p_1281->g_661 p_1281->g_399 p_1281->g_1072 p_1281->g_586.f2 p_1281->g_449 p_1281->g_1102 p_1281->g_94 p_1281->g_439
 * writes: p_1281->g_68 p_1281->g_334 p_1281->g_439 p_1281->g_226 p_1281->g_894 p_1281->g_638 p_1281->g_125 p_1281->g_38 p_1281->g_77 p_1281->g_121 p_1281->g_150 p_1281->g_84 p_1281->g_42 p_1281->g_468 p_1281->g_1049 p_1281->g_586.f2 p_1281->g_1102 p_1281->g_94
 */
uint16_t  func_47(int32_t * p_48, int32_t * p_49, uint32_t  p_50, int16_t * p_51, int64_t  p_52, struct S1 * p_1281)
{ /* block id: 375 */
    uint8_t *l_918[6][9][4] = {{{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0}},{{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0}},{{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0}},{{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0}},{{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0}},{{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0},{(void*)0,&p_1281->g_68,&p_1281->g_68,(void*)0}}};
    int32_t l_924 = 0x7BBACFF5L;
    int8_t *l_925 = &p_1281->g_439;
    uint16_t *l_928[2][7][6] = {{{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]}},{{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]},{&p_1281->g_226[2][1][3],&p_1281->g_586.f0,&p_1281->g_586.f0,&p_1281->g_226[1][1][3],(void*)0,&p_1281->g_226[2][1][3]}}};
    int16_t l_931 = 0x6991L;
    int32_t l_947 = 0x08053F76L;
    int32_t *l_948 = &p_1281->g_894;
    int64_t *l_959 = &p_1281->g_84;
    uint16_t l_983 = 5UL;
    int32_t l_1031[2];
    uint16_t l_1077[2];
    uint8_t l_1129 = 0x4DL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1031[i] = (-10L);
    for (i = 0; i < 2; i++)
        l_1077[i] = 65533UL;
    (*p_1281->g_919) = (safe_rshift_func_int8_t_s_u(p_50, (~(p_1281->g_68 = 0x7EL))));
    if ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((*l_925) = l_924), ((*p_1281->g_333) && ((*l_948) = (((~(((safe_mul_func_int16_t_s_s((*p_51), (l_931 = (++(*p_1281->g_352))))) , ((((safe_rshift_func_uint16_t_u_s((**p_1281->g_351), 7)) < 0x4EL) , ((((p_1281->g_934 , (safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((!p_52), (+(safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((l_947 = (safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((0x33L <= p_52), 0x9CL)), l_931))) , (****p_1281->g_671)), (*p_1281->g_301))), p_1281->g_226[1][1][3]))))), (*p_51)))) != p_1281->g_226[0][0][2]) & l_924) > l_924)) , (void*)0)) != &p_1281->g_358)) ^ p_52) < p_1281->g_468))))), p_1281->g_468)))
    { /* block id: 383 */
        int64_t *l_961 = &p_1281->g_84;
        int64_t **l_960 = &l_961;
        int32_t l_964 = (-1L);
        int32_t *l_965 = (void*)0;
        int32_t *l_966 = &l_924;
        union U0 *l_1004[2];
        union U0 **l_1003[9][1] = {{&l_1004[0]},{&l_1004[0]},{&l_1004[0]},{&l_1004[0]},{&l_1004[0]},{&l_1004[0]},{&l_1004[0]},{&l_1004[0]},{&l_1004[0]}};
        union U0 ***l_1002 = &l_1003[0][0];
        int32_t *l_1018[7];
        uint8_t l_1042 = 0x01L;
        int32_t **l_1108[1];
        int i, j;
        for (i = 0; i < 2; i++)
            l_1004[i] = &p_1281->g_1005[0];
        for (i = 0; i < 7; i++)
            l_1018[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_1108[i] = &l_1018[5];
        (*l_966) |= (p_50 <= (((safe_lshift_func_uint8_t_u_s(p_50, (safe_mul_func_int16_t_s_s(0x7364L, (safe_rshift_func_uint8_t_u_s(((*l_948) = (l_964 &= ((safe_sub_func_int16_t_s_s((-4L), (safe_add_func_uint8_t_u_u((((((*p_1281->g_301) , l_959) != ((*l_960) = &p_52)) , (safe_sub_func_int16_t_s_s((*p_1281->g_674), p_52))) < p_52), (*l_948))))) ^ (*p_49)))), 5)))))) ^ 0x1C634E32FA97EE1AL) >= p_52));
        if (((safe_add_func_int32_t_s_s((*p_48), (*p_48))) , (1UL & (*p_51))))
        { /* block id: 388 */
            int32_t l_969 = 0x2F9443ADL;
            int32_t *l_970 = &l_947;
            int32_t l_971 = (-10L);
            int32_t *l_972 = &p_1281->g_894;
            int32_t *l_973 = &l_969;
            uint16_t l_974 = 65533UL;
            int32_t *l_987 = &l_969;
            int32_t **l_991[3];
            int i;
            for (i = 0; i < 3; i++)
                l_991[i] = &l_970;
            l_974++;
            for (p_1281->g_638 = 0; (p_1281->g_638 <= 17); ++p_1281->g_638)
            { /* block id: 392 */
                int64_t *l_982[2];
                int32_t l_984[10][4][6] = {{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}},{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}},{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}},{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}},{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}},{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}},{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}},{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}},{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}},{{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL},{0x51B579F2L,0x28BA719BL,0x3C7DFD18L,0x02C20A05L,0x3C7DFD18L,0x28BA719BL}}};
                int32_t l_985 = 6L;
                uint32_t *l_986 = &p_1281->g_94;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_982[i] = &p_1281->g_399;
                (*p_1281->g_990) = &l_971;
            }
            l_966 = func_78((~p_50), p_1281);
        }
        else
        { /* block id: 400 */
            uint32_t l_996 = 6UL;
            int16_t *l_999 = &l_931;
            union U0 ***l_1015 = &l_1003[0][0];
            int8_t l_1023 = 0L;
            int32_t l_1024 = 2L;
            int32_t l_1029 = 0x0CBAC99FL;
            int32_t l_1032 = 0x7F737677L;
            int32_t l_1034 = 2L;
            int32_t l_1035 = (-6L);
            int32_t l_1036 = 0x667674A2L;
            int32_t l_1037 = (-8L);
            int32_t l_1038 = (-7L);
            int32_t l_1039 = 1L;
            int32_t l_1040 = 0x3F1DA29DL;
            int32_t l_1041 = (-1L);
            int64_t l_1076 = 0L;
            int16_t l_1095 = (-1L);
            union U0 *l_1107[2][9] = {{&p_1281->g_415,&p_1281->g_1005[2],&p_1281->g_586,&p_1281->g_1005[2],&p_1281->g_415,&p_1281->g_415,&p_1281->g_1005[2],&p_1281->g_586,&p_1281->g_1005[2]},{&p_1281->g_415,&p_1281->g_1005[2],&p_1281->g_586,&p_1281->g_1005[2],&p_1281->g_415,&p_1281->g_415,&p_1281->g_1005[2],&p_1281->g_586,&p_1281->g_1005[2]}};
            int i, j;
lbl_1101:
            (*l_948) &= ((void*)0 != p_1281->g_992);
            if ((safe_add_func_uint64_t_u_u((l_996 != p_50), (((p_50 & ((safe_rshift_func_int16_t_s_s(1L, ((*l_999) = ((*l_948) = ((*p_1281->g_301) ^= (*l_948)))))) || ((*l_959) = (((**p_1281->g_992) &= ((((**p_1281->g_351) = 0UL) < ((safe_div_func_uint16_t_u_u(((*p_1281->g_301) , ((l_1002 = l_1002) == &l_1003[0][0])), (*p_1281->g_301))) != p_1281->g_42[1])) | 1UL)) , (-1L))))) == p_52) < 0x311247259436FB66L))))
            { /* block id: 409 */
                union U0 ***l_1014 = &l_1003[8][0];
                int32_t l_1016 = 0x0FF7A2DFL;
                int32_t l_1027 = 0L;
                int32_t l_1033[2][1][6] = {{{(-2L),0x70F6A0E2L,(-2L),(-2L),0x70F6A0E2L,(-2L)}},{{(-2L),0x70F6A0E2L,(-2L),(-2L),0x70F6A0E2L,(-2L)}}};
                int i, j, k;
                if ((((**p_1281->g_351) = 0UL) , (((*p_1281->g_352) = (*p_1281->g_352)) == 1UL)))
                { /* block id: 412 */
                    uint32_t *l_1020 = &p_1281->g_94;
                    uint32_t **l_1019 = &l_1020;
                    int32_t l_1021 = (-1L);
                    int32_t l_1022 = (-5L);
                    int32_t l_1025 = 0x5947AD09L;
                    int32_t l_1026 = 0x20816518L;
                    int32_t l_1028 = 0x07CE2B08L;
                    int32_t l_1030[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1030[i] = 1L;
                    (*l_966) = (safe_rshift_func_int16_t_s_u(((p_52 ^ ((!(*l_966)) != (safe_mod_func_int8_t_s_s(((((((**p_1281->g_992) &= (((void*)0 != &p_1281->g_638) || ((*p_1281->g_151) = (l_1021 = ((1L < (((safe_div_func_int16_t_s_s((((*l_1019) = p_49) != (void*)0), (*l_948))) > p_50) < (*l_948))) , (*p_48)))))) > l_1022) & p_50) != (*p_1281->g_166)) , p_52), p_1281->g_226[1][1][3])))) & l_1023), 2));
                    --l_1042;
                }
                else
                { /* block id: 421 */
                    if ((*p_48))
                    { /* block id: 422 */
                        return l_1016;
                    }
                    else
                    { /* block id: 424 */
                        return p_50;
                    }
                }
            }
            else
            { /* block id: 428 */
                uint64_t l_1045 = 0xEB23B77DDF8F18A3L;
                union U0 **l_1048 = (void*)0;
                int16_t ***l_1073 = &p_1281->g_290;
                int32_t l_1074[10] = {8L,0L,0x6F4194A6L,0L,8L,8L,0L,0x6F4194A6L,0L,8L};
                int i;
                (*l_966) |= (((l_1045 &= 0x54L) && (l_1035 = 0x7EL)) || ((safe_rshift_func_uint8_t_u_u(((*l_948) |= ((void*)0 != (*p_1281->g_660))), ((*l_1002) == (p_1281->g_1049 = l_1048)))) || ((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((**p_1281->g_351), (-1L))), (1L < l_1036))) , 0x05L)));
                if (l_1023)
                    goto lbl_1075;
lbl_1075:
                l_1074[4] = ((((((!((((void*)0 != p_48) || (((((((safe_rshift_func_int16_t_s_u(((*l_999) &= ((p_50 , ((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((**l_960) = ((void*)0 == &p_1281->g_981[4][4])) || p_50), ((0x263643C5L >= (safe_unary_minus_func_int16_t_s((safe_add_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_u(((l_996 <= (+(safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u((**p_1281->g_992), p_1281->g_399)), p_50)), p_50)))) <= p_1281->g_675), p_50)) > 0x75ECL) < l_1045), l_1034))))) , (**p_1281->g_351)))), l_1045)) , 0x7B9BL)) || (*p_1281->g_301))), p_50)) >= 0x66A295DBL) , p_1281->g_1072) , p_52) || 0x76A79AEBB805F863L) == 0x597DCE77F528F48FL) < 0x9BBBA08DL)) != 1L)) >= p_50) , l_1073) != (void*)0) > l_1041) >= 9UL);
                l_1077[0]--;
                for (l_1035 = 0; (l_1035 == 19); l_1035 = safe_add_func_int64_t_s_s(l_1035, 1))
                { /* block id: 441 */
                    uint16_t l_1099[4] = {2UL,2UL,2UL,2UL};
                    int32_t l_1100[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                    int16_t ****l_1105 = &p_1281->g_1103;
                    union U0 *l_1106[10][3] = {{(void*)0,&p_1281->g_586,(void*)0},{(void*)0,&p_1281->g_586,(void*)0},{(void*)0,&p_1281->g_586,(void*)0},{(void*)0,&p_1281->g_586,(void*)0},{(void*)0,&p_1281->g_586,(void*)0},{(void*)0,&p_1281->g_586,(void*)0},{(void*)0,&p_1281->g_586,(void*)0},{(void*)0,&p_1281->g_586,(void*)0},{(void*)0,&p_1281->g_586,(void*)0},{(void*)0,&p_1281->g_586,(void*)0}};
                    int i, j;
                    for (p_1281->g_586.f2 = 0; (p_1281->g_586.f2 > 41); p_1281->g_586.f2 = safe_add_func_int32_t_s_s(p_1281->g_586.f2, 1))
                    { /* block id: 444 */
                        int32_t l_1086[4] = {0x45D78625L,0x45D78625L,0x45D78625L,0x45D78625L};
                        int16_t *****l_1104 = &p_1281->g_1102;
                        int i;
                        l_1024 = ((*p_1281->g_919) && (safe_mul_func_uint16_t_u_u((((**p_1281->g_449) >= (((((void*)0 != &p_1281->g_226[1][3][6]) && (((*l_925) = l_1086[0]) < (safe_mul_func_int16_t_s_s((0L | (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((l_1039 = (l_1100[7] = (((safe_lshift_func_int8_t_s_u(l_1095, ((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_u(((*l_966) ^= 1UL), 2)))) > l_1099[0]))) , &l_1048) != &p_1281->g_1049))), 0)) != 65535UL), l_1074[0]))), (*p_51))))) > 0x311ECA29683BE59CL) , (*p_1281->g_125))) && 0x11L), (*p_1281->g_301))));
                        if ((*l_948))
                            break;
                        if (p_1281->g_638)
                            goto lbl_1101;
                        (*l_948) |= ((((*l_1104) = p_1281->g_1102) == l_1105) == (l_959 != (void*)0));
                    }
                    l_1107[0][6] = l_1106[2][0];
                }
            }
            return p_52;
        }
        l_948 = p_48;
    }
    else
    { /* block id: 461 */
        uint32_t l_1119 = 0xAF405699L;
        int32_t l_1125 = 0x44853DE9L;
        int32_t *l_1128[6][7] = {{&l_924,&p_1281->g_334,&l_924,&l_924,&p_1281->g_334,&l_924,&l_924},{&l_924,&p_1281->g_334,&l_924,&l_924,&p_1281->g_334,&l_924,&l_924},{&l_924,&p_1281->g_334,&l_924,&l_924,&p_1281->g_334,&l_924,&l_924},{&l_924,&p_1281->g_334,&l_924,&l_924,&p_1281->g_334,&l_924,&l_924},{&l_924,&p_1281->g_334,&l_924,&l_924,&p_1281->g_334,&l_924,&l_924},{&l_924,&p_1281->g_334,&l_924,&l_924,&p_1281->g_334,&l_924,&l_924}};
        int i, j;
        for (p_1281->g_94 = 0; (p_1281->g_94 != 45); p_1281->g_94 = safe_add_func_uint16_t_u_u(p_1281->g_94, 6))
        { /* block id: 464 */
            int32_t l_1120[9] = {0x4B9AAD04L,0x4B9AAD04L,0x4B9AAD04L,0x4B9AAD04L,0x4B9AAD04L,0x4B9AAD04L,0x4B9AAD04L,0x4B9AAD04L,0x4B9AAD04L};
            int16_t ****l_1126 = &p_1281->g_1103;
            int i;
            for (p_50 = (-22); (p_50 != 49); p_50 = safe_add_func_uint32_t_u_u(p_50, 3))
            { /* block id: 467 */
                int16_t *****l_1127 = &p_1281->g_1102;
                l_1125 = (safe_add_func_int64_t_s_s((p_1281->g_84 = ((safe_add_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((l_1119 || l_1120[8]), (safe_add_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u(0x1F29L, 65535UL)) && (p_1281->g_439 = p_50)), (p_1281->g_42[3] ^ (p_52 < l_1119)))))) > ((~0x28C381835D269374L) != p_50)) && p_1281->g_84), p_50)) && (****p_1281->g_671))), p_1281->g_38));
                (*l_948) ^= (+((((*l_1127) = l_1126) == &p_1281->g_672) || ((void*)0 == &p_52)));
                (*l_948) = ((*p_1281->g_123) = (*p_48));
            }
            l_1128[0][5] = p_48;
            if ((*p_48))
                break;
            --l_1129;
        }
        for (p_1281->g_439 = 1; (p_1281->g_439 >= 0); p_1281->g_439 -= 1)
        { /* block id: 482 */
            return p_52;
        }
    }
    return p_50;
}


/* ------------------------------------------ */
/* 
 * reads : p_1281->g_77 p_1281->g_42 p_1281->g_3 p_1281->g_38 p_1281->g_123 p_1281->g_124 p_1281->g_125 p_1281->g_150 p_1281->g_151 p_1281->g_68 p_1281->g_121 p_1281->g_84 p_1281->g_166 p_1281->g_173 p_1281->g_94 p_1281->g_208 p_1281->g_2 p_1281->g_217 p_1281->g_226 p_1281->g_301 p_1281->g_333 p_1281->g_351 p_1281->g_354 p_1281->g_358 p_1281->g_334 p_1281->g_399 p_1281->g_449 p_1281->g_439 p_1281->g_444 p_1281->g_415.f0 p_1281->g_290 p_1281->g_291 p_1281->g_354.f0 p_1281->g_515
 * writes: p_1281->g_68 p_1281->g_77 p_1281->g_84 p_1281->g_38 p_1281->g_121 p_1281->g_125 p_1281->g_150 p_1281->g_42 p_1281->g_94 p_1281->g_208 p_1281->g_226 p_1281->g_290 p_1281->g_291 p_1281->g_301 p_1281->g_334 p_1281->g_358 p_1281->g_399 p_1281->g_575 p_1281->g_894 p_1281->g_415.f0
 */
int32_t * func_53(int16_t  p_54, int32_t  p_55, int8_t  p_56, int32_t * p_57, struct S1 * p_1281)
{ /* block id: 13 */
    uint16_t l_85 = 65532UL;
    int32_t l_95 = 5L;
    uint16_t * volatile * volatile l_353 = &p_1281->g_352;/* VOLATILE GLOBAL l_353 */
    int32_t *l_359 = (void*)0;
    int8_t *l_370 = &p_1281->g_150;
    uint32_t *l_371 = &p_1281->g_94;
    int16_t **l_400[4][10] = {{(void*)0,(void*)0,&p_1281->g_301,&p_1281->g_301,&p_1281->g_291,&p_1281->g_301,&p_1281->g_301,(void*)0,(void*)0,&p_1281->g_301},{(void*)0,(void*)0,&p_1281->g_301,&p_1281->g_301,&p_1281->g_291,&p_1281->g_301,&p_1281->g_301,(void*)0,(void*)0,&p_1281->g_301},{(void*)0,(void*)0,&p_1281->g_301,&p_1281->g_301,&p_1281->g_291,&p_1281->g_301,&p_1281->g_301,(void*)0,(void*)0,&p_1281->g_301},{(void*)0,(void*)0,&p_1281->g_301,&p_1281->g_301,&p_1281->g_291,&p_1281->g_301,&p_1281->g_301,(void*)0,(void*)0,&p_1281->g_301}};
    union U0 *l_414[10][10] = {{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415},{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415},{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415},{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415},{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415},{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415},{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415},{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415},{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415},{&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415,&p_1281->g_415}};
    union U0 **l_413 = &l_414[1][3];
    int64_t l_425 = 0x25252FAEC3FA586DL;
    int32_t l_457 = 0x3EC27F66L;
    int32_t l_459 = 0x611CD1A5L;
    int32_t l_460[10][10][2] = {{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}},{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}},{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}},{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}},{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}},{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}},{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}},{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}},{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}},{{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL},{0x6CB6891EL,0x5F06EF8AL}}};
    int8_t l_524 = 0x2CL;
    uint32_t l_553 = 4294967295UL;
    int32_t **l_561 = (void*)0;
    int32_t ***l_560[10][6] = {{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561},{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561},{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561},{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561},{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561},{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561},{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561},{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561},{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561},{&l_561,&l_561,&l_561,&l_561,(void*)0,&l_561}};
    uint8_t **l_631 = &p_1281->g_485;
    int16_t **l_636 = (void*)0;
    uint8_t l_653 = 0x60L;
    uint64_t *l_728 = (void*)0;
    int8_t l_764[1];
    int64_t l_841 = 0x2FB3DCB6D5D94BF4L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_764[i] = 0x2EL;
lbl_557:
    for (p_1281->g_68 = (-6); (p_1281->g_68 > 31); ++p_1281->g_68)
    { /* block id: 16 */
        uint8_t *l_76 = &p_1281->g_77;
        int64_t *l_82 = (void*)0;
        int64_t *l_83 = &p_1281->g_84;
        uint32_t *l_92 = (void*)0;
        uint32_t *l_93[10][6] = {{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94},{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94},{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94},{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94},{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94},{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94},{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94},{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94},{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94},{&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94,&p_1281->g_94}};
        int32_t l_96 = 1L;
        int32_t **l_167[8][7] = {{&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125,&p_1281->g_166,&p_1281->g_125,&p_1281->g_125}};
        int i, j;
        if (((((1UL == (safe_lshift_func_int8_t_s_u(func_73((((*l_76) = 0x4EL) , ((*p_1281->g_124) = func_78(((((l_85 = ((*l_83) = (safe_div_func_uint8_t_u_u(((*l_76) &= 0x45L), p_1281->g_42[3])))) | (l_96 = (((0L == (safe_div_func_uint32_t_u_u((l_95 &= (safe_add_func_uint16_t_u_u(0xCE1FL, (p_54 ^ ((safe_sub_func_int32_t_s_s(((((void*)0 == &p_1281->g_42[3]) | p_1281->g_3) >= 0x60L), (*p_57))) & p_1281->g_38))))), 0x23AFD543L))) != 7L) || l_95))) , 0x1BC9L) , l_96), p_1281))), &p_1281->g_3, p_1281), p_1281->g_3))) != 0x12FACD6FL) ^ p_1281->g_68) > p_55))
        { /* block id: 138 */
            uint8_t l_355 = 0x57L;
            volatile union U0 *l_357 = (void*)0;
            volatile union U0 **l_356[10][5][5] = {{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357,&l_357,&l_357}}};
            int i, j, k;
            l_353 = p_1281->g_351;
            l_95 ^= (p_1281->g_354 , (p_1281->g_84 > l_355));
            p_1281->g_358 = &p_1281->g_354;
            l_359 = (*p_1281->g_124);
        }
        else
        { /* block id: 143 */
            p_55 = (safe_lshift_func_uint8_t_u_s(p_1281->g_94, 5));
        }
        return (*p_1281->g_124);
    }
    if ((((*p_1281->g_358) , (((*l_371) = (p_1281->g_121 , ((safe_mod_func_int32_t_s_s((*p_57), ((*p_1281->g_125) = 0x7D83C1E5L))) >= ((((((safe_lshift_func_uint8_t_u_s(p_1281->g_226[5][2][5], ((*l_370) = (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_95, ((0x84C5L > p_55) <= 1L))), 1L))))) ^ p_54) , p_1281->g_38) == 0x54L) != p_1281->g_226[1][1][3]) || (*p_57))))) != 0x68870B58L)) || p_54))
    { /* block id: 151 */
        uint32_t l_383 = 0UL;
        uint64_t *l_391 = &p_1281->g_38;
        int64_t *l_397 = (void*)0;
        int64_t *l_398 = &p_1281->g_399;
        int32_t l_401 = (-1L);
        int32_t l_453 = 9L;
        int32_t l_455[4] = {0x0B4AB5E0L,0x0B4AB5E0L,0x0B4AB5E0L,0x0B4AB5E0L};
        int16_t **l_509 = &p_1281->g_301;
        uint32_t l_525 = 4294967295UL;
        int i;
        l_401 ^= (((((safe_add_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_s((p_56 , (((safe_rshift_func_int16_t_s_u((0x649EL && (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((safe_add_func_int16_t_s_s((*p_1281->g_301), (p_1281->g_2 && l_383))))), (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint64_t_u((!((*l_391) = 5UL)))), (((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_int16_t_s((&p_1281->g_291 == ((((((*l_371) |= ((((*l_398) |= (safe_mod_func_uint64_t_u_u((p_1281->g_334 , ((*p_1281->g_166) == (*p_1281->g_166))), p_55))) , l_397) == (void*)0)) == p_56) && (*p_57)) , l_383) , l_400[3][9])))) && p_56) , p_1281->g_42[3]), l_383)) , 0xEE4CC71DL) >= (-3L)))) == 0x04D5DF07A8AD6C23L), l_95)), p_1281->g_334))))), 3)) != l_383) > 0x2EL)), p_56)) , (void*)0) != (void*)0) & (-4L)), p_1281->g_68)) ^ p_54) || 0x2F437F50E5614A70L) != p_54) > p_1281->g_226[2][3][4]);
        (*p_1281->g_125) |= (*p_1281->g_333);
        for (p_1281->g_399 = 5; (p_1281->g_399 == (-6)); p_1281->g_399 = safe_sub_func_uint32_t_u_u(p_1281->g_399, 9))
        { /* block id: 159 */
            uint8_t l_408 = 0x70L;
            uint8_t *l_416 = &l_408;
            int32_t l_443[5][10] = {{6L,(-4L),6L,6L,(-4L),6L,6L,(-4L),6L,6L},{6L,(-4L),6L,6L,(-4L),6L,6L,(-4L),6L,6L},{6L,(-4L),6L,6L,(-4L),6L,6L,(-4L),6L,6L},{6L,(-4L),6L,6L,(-4L),6L,6L,(-4L),6L,6L},{6L,(-4L),6L,6L,(-4L),6L,6L,(-4L),6L,6L}};
            int32_t l_495[3][6] = {{0x7771E0AFL,0x3D436FD0L,6L,0x3D436FD0L,0x7771E0AFL,0x7771E0AFL},{0x7771E0AFL,0x3D436FD0L,6L,0x3D436FD0L,0x7771E0AFL,0x7771E0AFL},{0x7771E0AFL,0x3D436FD0L,6L,0x3D436FD0L,0x7771E0AFL,0x7771E0AFL}};
            uint64_t *l_511 = &p_1281->g_38;
            int32_t *l_523[7] = {&l_460[1][8][0],&l_460[1][8][0],&l_460[1][8][0],&l_460[1][8][0],&l_460[1][8][0],&l_460[1][8][0],&l_460[1][8][0]};
            int64_t *l_548 = &l_425;
            int32_t l_554 = 0x1730047AL;
            int i, j;
            (1 + 1);
        }
    }
    else
    { /* block id: 222 */
        int64_t l_579 = (-10L);
        int32_t l_614[5][2][1] = {{{(-1L)},{(-1L)}},{{(-1L)},{(-1L)}},{{(-1L)},{(-1L)}},{{(-1L)},{(-1L)}},{{(-1L)},{(-1L)}}};
        uint16_t l_708 = 1UL;
        int32_t l_778 = 0x37D075F6L;
        union U0 **l_804 = &l_414[1][3];
        union U0 **l_805[4] = {&l_414[6][5],&l_414[6][5],&l_414[6][5],&l_414[6][5]};
        int32_t l_868 = (-1L);
        uint16_t l_875 = 0xD4B3L;
        int64_t *l_876 = &p_1281->g_399;
        int16_t *l_877 = &p_1281->g_42[3];
        uint64_t *l_878 = (void*)0;
        uint64_t *l_879 = (void*)0;
        uint64_t *l_880 = &p_1281->g_38;
        int32_t *l_890 = &l_460[7][2][0];
        int32_t *l_892 = &l_460[4][5][0];
        int64_t *l_893 = (void*)0;
        int i, j, k;
        for (p_1281->g_94 = (-5); (p_1281->g_94 > 54); ++p_1281->g_94)
        { /* block id: 225 */
            uint16_t l_562 = 0xD576L;
            uint8_t *l_563 = &p_1281->g_68;
            int32_t l_576 = 0L;
            l_576 |= (((void*)0 == l_560[3][5]) != (((*l_563) |= l_562) && (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_s(((p_1281->g_575 = (((*p_1281->g_125) = ((safe_rshift_func_uint16_t_u_u(65532UL, 4)) <= (1UL <= ((((-1L) < 0x2EBEL) > p_56) >= (((safe_lshift_func_uint8_t_u_s(((safe_div_func_int16_t_s_s((0x0FL > (-7L)), 0xFA10L)) , l_562), p_1281->g_94)) & 0x6223E1DBL) < p_54))))) , &p_1281->g_208)) != p_57), 5))))));
        }
        if ((**p_1281->g_449))
        { /* block id: 231 */
            int32_t l_587[6] = {0L,0L,0L,0L,0L,0L};
            int32_t ***l_662 = (void*)0;
            union U0 *l_680 = (void*)0;
            int64_t *l_713 = &l_425;
            int32_t l_736 = 0x69197FF2L;
            uint64_t **l_741 = &l_728;
            int32_t l_756 = 0L;
            int32_t l_758 = 0x1E420357L;
            int32_t l_759 = 0L;
            int32_t l_760 = 5L;
            int32_t l_761[6][10][4] = {{{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L}},{{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L}},{{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L}},{{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L}},{{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L}},{{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L},{0x7490720DL,(-8L),(-6L),0x0D1C92D2L}}};
            uint32_t l_782[9] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
            int i, j, k;
            p_55 = (p_56 || (p_1281->g_439 & p_1281->g_444));
        }
        else
        { /* block id: 336 */
            uint32_t l_852[8][2][9] = {{{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL},{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL}},{{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL},{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL}},{{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL},{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL}},{{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL},{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL}},{{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL},{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL}},{{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL},{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL}},{{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL},{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL}},{{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL},{0UL,0x0756ECCFL,2UL,2UL,0x0756ECCFL,0UL,0x35FE0CC3L,0xA2060C64L,0x7BDA4E2EL}}};
            int32_t l_867 = (-1L);
            int i, j, k;
            (*p_1281->g_125) |= (safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((l_852[2][1][1] == ((((safe_sub_func_int8_t_s_s((~(safe_mul_func_int8_t_s_s(((p_1281->g_2 > ((((safe_add_func_uint8_t_u_u(((p_56 && ((--(*l_371)) , (((safe_div_func_int32_t_s_s((p_55 , (safe_mod_func_int64_t_s_s((((safe_add_func_uint8_t_u_u(l_852[2][1][1], 0x0CL)) && p_55) || (p_55 | (((void*)0 == p_1281->g_358) & l_852[2][1][1]))), (-1L)))), 0x0CE25908L)) < p_56) == 0x70L))) & l_614[2][1][0]), p_55)) ^ l_778) > p_55) == 18446744073709551612UL)) && p_1281->g_415.f0), l_867))), 0xC1L)) != l_868) != 1UL) <= l_852[5][0][1])), (*p_1281->g_166))) == p_1281->g_150), p_1281->g_150));
        }
        if ((safe_mod_func_uint32_t_u_u((+((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(l_875, (&p_1281->g_399 == l_876))), (l_877 == ((*p_1281->g_290) = (*p_1281->g_290))))) & ((*l_880) = (0x37F0L && 1UL)))), (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((((*l_370) |= 0L) & (0x64264080E7D768DDL && p_1281->g_354.f0)), p_56)), 0x1FA72D0F49347194L)))))
        { /* block id: 343 */
            int32_t l_885 = 0L;
            int32_t l_886[2];
            uint32_t l_887 = 0xAC1A910EL;
            int32_t *l_891[5][8] = {{&p_1281->g_121,&l_614[4][0][0],(void*)0,(void*)0,(void*)0,&l_614[4][0][0],&p_1281->g_121,&l_886[0]},{&p_1281->g_121,&l_614[4][0][0],(void*)0,(void*)0,(void*)0,&l_614[4][0][0],&p_1281->g_121,&l_886[0]},{&p_1281->g_121,&l_614[4][0][0],(void*)0,(void*)0,(void*)0,&l_614[4][0][0],&p_1281->g_121,&l_886[0]},{&p_1281->g_121,&l_614[4][0][0],(void*)0,(void*)0,(void*)0,&l_614[4][0][0],&p_1281->g_121,&l_886[0]},{&p_1281->g_121,&l_614[4][0][0],(void*)0,(void*)0,(void*)0,&l_614[4][0][0],&p_1281->g_121,&l_886[0]}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_886[i] = 2L;
            l_887--;
            return (*p_1281->g_515);
        }
        else
        { /* block id: 346 */
            (*p_1281->g_125) = ((p_1281->g_894 = ((*p_1281->g_301) = ((void*)0 == l_893))) , (*p_57));
        }
    }
    for (l_95 = 0; (l_95 == (-11)); l_95 = safe_sub_func_uint32_t_u_u(l_95, 5))
    { /* block id: 354 */
        int32_t l_899 = (-9L);
        int32_t l_900 = 0L;
        for (p_1281->g_415.f0 = (-3); (p_1281->g_415.f0 <= 20); p_1281->g_415.f0 = safe_add_func_uint16_t_u_u(p_1281->g_415.f0, 3))
        { /* block id: 357 */
            uint32_t l_901 = 4UL;
            union U0 **l_910[2];
            int i;
            for (i = 0; i < 2; i++)
                l_910[i] = &l_414[1][3];
            ++l_901;
            for (l_553 = (-29); (l_553 != 35); l_553 = safe_add_func_uint8_t_u_u(l_553, 9))
            { /* block id: 361 */
                uint16_t l_911[6][7][1] = {{{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L}},{{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L}},{{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L}},{{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L}},{{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L}},{{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L},{0x5653L}}};
                uint8_t *l_912 = (void*)0;
                uint8_t *l_913 = &l_653;
                int i, j, k;
                (*p_1281->g_125) = (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((void*)0 == l_910[0]), ((*l_913) = l_911[0][0][0]))), (-7L)));
                if ((*p_57))
                    break;
                if (p_1281->g_439)
                    goto lbl_557;
            }
        }
        for (l_524 = 19; (l_524 != 6); l_524--)
        { /* block id: 370 */
            return (*p_1281->g_449);
        }
    }
    return (*p_1281->g_449);
}


/* ------------------------------------------ */
/* 
 * reads : p_1281->g_3 p_1281->g_173 p_1281->g_121 p_1281->g_94 p_1281->g_42 p_1281->g_125 p_1281->g_208 p_1281->g_84 p_1281->g_2 p_1281->g_68 p_1281->g_77 p_1281->g_217 p_1281->g_226 p_1281->g_124 p_1281->g_38 p_1281->g_151 p_1281->g_150 p_1281->g_301 p_1281->g_333
 * writes: p_1281->g_121 p_1281->g_94 p_1281->g_208 p_1281->g_84 p_1281->g_150 p_1281->g_226 p_1281->g_38 p_1281->g_42 p_1281->g_77 p_1281->g_290 p_1281->g_291 p_1281->g_301 p_1281->g_334
 */
int8_t  func_73(int32_t * p_74, int32_t * p_75, struct S1 * p_1281)
{ /* block id: 48 */
    int8_t l_170 = 0x11L;
    int64_t l_171[3];
    uint64_t *l_172[2][2];
    uint8_t *l_186 = &p_1281->g_77;
    int32_t l_238 = 0x0847EDA4L;
    int32_t l_241 = (-1L);
    int64_t *l_282[6] = {&l_171[0],&l_171[1],&l_171[0],&l_171[0],&l_171[1],&l_171[0]};
    uint8_t l_303 = 255UL;
    uint64_t *l_308 = &p_1281->g_38;
    int32_t *l_337 = &p_1281->g_334;
    int32_t *l_341 = &p_1281->g_334;
    int32_t *l_342 = &l_238;
    int32_t *l_343 = &p_1281->g_334;
    int32_t *l_344 = &p_1281->g_334;
    int32_t *l_345 = (void*)0;
    int32_t *l_346 = &p_1281->g_334;
    int32_t *l_347[2];
    uint32_t l_348 = 0x7A7518A8L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_171[i] = (-7L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_172[i][j] = &p_1281->g_38;
    }
    for (i = 0; i < 2; i++)
        l_347[i] = &p_1281->g_334;
lbl_335:
    if (((safe_lshift_func_int16_t_s_s(((l_170 > (-9L)) < (*p_74)), l_170)) > l_171[2]))
    { /* block id: 49 */
        uint32_t *l_182 = &p_1281->g_94;
        int32_t l_185 = 9L;
        int16_t *l_188[4][10][5] = {{{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0}},{{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0}},{{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0}},{{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0},{&p_1281->g_42[3],(void*)0,&p_1281->g_42[3],&p_1281->g_42[3],(void*)0}}};
        int16_t **l_187 = &l_188[2][6][3];
        int8_t *l_193 = &l_170;
        int16_t l_201[1];
        uint32_t l_231 = 0x14887734L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_201[i] = 1L;
        (*p_1281->g_173) |= (&p_1281->g_38 != l_172[1][0]);
        if ((((((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((l_171[2] < ((((*l_182) |= (safe_rshift_func_int16_t_s_s(l_170, 11))) | (safe_lshift_func_uint16_t_u_u((l_185 <= (l_186 != (void*)0)), (&p_1281->g_42[1] == ((*l_187) = (void*)0))))) <= (((safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((l_193 == (l_185 , (void*)0)), l_185)) > 0x54040A6DBE89911EL), l_185)) & p_1281->g_121) & l_171[2]))) ^ l_170), p_1281->g_3)), l_185)) == (*p_75)) < p_1281->g_42[1]) , 5UL) > 0x99L))
        { /* block id: 53 */
            int16_t *l_198 = (void*)0;
            int8_t l_206[2][5][5] = {{{(-1L),1L,0x24L,1L,(-1L)},{(-1L),1L,0x24L,1L,(-1L)},{(-1L),1L,0x24L,1L,(-1L)},{(-1L),1L,0x24L,1L,(-1L)},{(-1L),1L,0x24L,1L,(-1L)}},{{(-1L),1L,0x24L,1L,(-1L)},{(-1L),1L,0x24L,1L,(-1L)},{(-1L),1L,0x24L,1L,(-1L)},{(-1L),1L,0x24L,1L,(-1L)},{(-1L),1L,0x24L,1L,(-1L)}}};
            uint32_t *l_207 = &p_1281->g_208;
            int8_t *l_215 = &p_1281->g_150;
            int32_t l_216 = 0x3C9B642AL;
            int32_t *l_218 = &p_1281->g_121;
            uint16_t *l_225 = &p_1281->g_226[1][1][3];
            int32_t *l_232 = &l_216;
            int i, j, k;
            p_1281->g_121 ^= ((((((0xB6L != (((0x2C31F8A2L < (((l_185 , 0x672DL) <= (((!(safe_add_func_uint32_t_u_u(l_185, ((safe_lshift_func_uint16_t_u_s(((((((((*l_187) = ((((l_198 == ((safe_add_func_int64_t_s_s((+(!((l_201[0] = (*p_1281->g_125)) | ((((*l_207) ^= (safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s(l_170, l_206[0][4][1])), p_1281->g_42[1]))) , 0x56L) >= l_185)))), p_1281->g_84)) , &p_1281->g_42[3])) != 0x60924E14L) <= l_185) , &p_1281->g_42[3])) != &p_1281->g_42[1]) , p_1281->g_84) || l_171[2]) > 8UL) ^ l_206[0][4][1]) , 0xD41EL), l_171[0])) && l_206[0][4][1])))) & 0L) < 0x515F6AA3A504EC7DL)) != 0x2753925E94D96B29L)) == p_1281->g_2) | p_1281->g_42[0])) && p_1281->g_42[1]) ^ p_1281->g_68) > l_185) , 0L) && p_1281->g_84);
            (*p_1281->g_217) = ((p_1281->g_84 = l_206[0][0][4]) && ((safe_rshift_func_uint8_t_u_s((l_185 |= (&p_1281->g_150 != &l_206[0][0][3])), ((*l_193) |= (safe_rshift_func_int8_t_s_u((0xE7B0658B699BD09FL > l_171[2]), 7))))) <= (l_201[0] , ((((l_216 &= ((*l_215) = ((((l_206[0][0][1] , l_193) == (void*)0) & 0x094FL) && p_1281->g_77))) | l_171[2]) <= p_1281->g_121) == l_171[1]))));
            (*l_218) = (-9L);
            (*l_232) ^= ((*l_218) == (((*p_74) == ((((safe_mul_func_int16_t_s_s(p_1281->g_208, ((safe_add_func_uint64_t_u_u(((safe_div_func_int8_t_s_s(0x00L, l_171[0])) < (((*l_225)--) | (l_201[0] <= (p_1281->g_121 , p_1281->g_208)))), (~(safe_mul_func_uint8_t_u_u((((-1L) > p_1281->g_68) , l_185), l_171[2]))))) || 0x1184B929L))) != (**p_1281->g_124)) != 1L) ^ l_170)) ^ l_231));
        }
        else
        { /* block id: 67 */
            return p_1281->g_94;
        }
    }
    else
    { /* block id: 70 */
        int32_t *l_236 = (void*)0;
        uint32_t l_237 = 0xB0460979L;
        l_237 |= (safe_rshift_func_int8_t_s_s(1L, 5));
        l_241 = ((l_238 = 0x5C2CL) && (l_238 < (p_1281->g_38 <= (0x6EF0EF6DL && (safe_sub_func_int16_t_s_s(((((*p_1281->g_151) , l_171[0]) > l_238) < ((0x5ADFD7D043DD9BAFL != p_1281->g_150) > p_1281->g_68)), p_1281->g_38))))));
        return p_1281->g_208;
    }
    for (l_170 = 26; (l_170 != (-15)); l_170--)
    { /* block id: 78 */
        uint32_t l_255[6][2] = {{0x7240D87DL,0xFD9AC3D8L},{0x7240D87DL,0xFD9AC3D8L},{0x7240D87DL,0xFD9AC3D8L},{0x7240D87DL,0xFD9AC3D8L},{0x7240D87DL,0xFD9AC3D8L},{0x7240D87DL,0xFD9AC3D8L}};
        int64_t *l_272 = &l_171[0];
        int32_t l_280[8] = {0x7203773BL,(-1L),0x7203773BL,0x7203773BL,(-1L),0x7203773BL,0x7203773BL,(-1L)};
        int32_t l_285 = 0x40448F3FL;
        int16_t *l_289 = &p_1281->g_42[3];
        int16_t **l_288 = &l_289;
        int i, j;
        (*p_1281->g_173) |= l_238;
        if (l_238)
            break;
        for (p_1281->g_38 = 0; (p_1281->g_38 > 23); p_1281->g_38 = safe_add_func_int8_t_s_s(p_1281->g_38, 9))
        { /* block id: 83 */
            uint64_t l_252 = 0UL;
            uint32_t l_277 = 0x24B57395L;
            int64_t **l_281[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t **l_286 = (void*)0;
            int32_t l_307[4];
            int i;
            for (i = 0; i < 4; i++)
                l_307[i] = 2L;
            for (l_238 = 17; (l_238 <= 27); ++l_238)
            { /* block id: 86 */
                int16_t *l_248 = &p_1281->g_42[3];
                int32_t l_251 = 0x7BFFA6FDL;
                int32_t *l_256 = &l_251;
                uint16_t *l_259[5][10][2] = {{{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]}},{{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]}},{{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]}},{{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]}},{{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]},{&p_1281->g_226[1][1][3],&p_1281->g_226[1][1][3]}}};
                int32_t *l_279[5][6] = {{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121}};
                int i, j, k;
                (*l_256) = (((*l_248) |= 0x023FL) & (safe_lshift_func_int16_t_s_u((((*l_186) = l_251) != (l_252 && (safe_rshift_func_uint8_t_u_s(((p_1281->g_84 = l_251) < l_241), (l_255[2][1] || p_1281->g_121))))), (l_238 <= 0x22L))));
                l_280[3] = ((safe_mul_func_uint16_t_u_u(((*l_256) ^= (--p_1281->g_226[1][1][3])), (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((l_252 , (((-1L) && (safe_add_func_uint8_t_u_u((p_1281->g_68 <= ((safe_sub_func_uint16_t_u_u(p_1281->g_68, ((safe_lshift_func_int16_t_s_u(((l_171[2] , (l_272 != l_272)) || (safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((((0x56L != (0x2F6F7A06L & l_252)) > (*p_74)) <= (*p_75)), 0x61AEE968L)) != 8UL), p_1281->g_84))), l_277)) < 0x4E9515FB0BF56E5EL))) ^ l_277)), 1L))) , l_277)) & (**p_1281->g_124)), 10)), 0x53L)))) >= p_1281->g_42[2]);
            }
            if ((((l_282[3] = (void*)0) != (void*)0) , ((safe_lshift_func_uint16_t_u_s(6UL, 9)) & (l_255[2][0] > (l_285 > l_280[3])))))
            { /* block id: 96 */
                int16_t ***l_287 = &l_286;
                int16_t *l_300[2];
                int32_t l_302 = 0x7E556765L;
                uint16_t *l_304 = (void*)0;
                int32_t *l_305 = (void*)0;
                int32_t *l_306[7][2][1] = {{{&l_238},{&l_238}},{{&l_238},{&l_238}},{{&l_238},{&l_238}},{{&l_238},{&l_238}},{{&l_238},{&l_238}},{{&l_238},{&l_238}},{{&l_238},{&l_238}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_300[i] = &p_1281->g_42[3];
                l_307[0] |= ((((*l_287) = l_286) != (p_1281->g_290 = l_288)) > (safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((l_255[5][1] & (((p_1281->g_94 == (((p_1281->g_208 & ((p_1281->g_2 , ((p_1281->g_226[1][1][3] = ((((*p_1281->g_151) |= (safe_mod_func_int8_t_s_s((l_255[2][1] < ((safe_mod_func_uint8_t_u_u(((((*l_288) = (p_1281->g_291 = &p_1281->g_42[2])) != (p_1281->g_301 = l_300[0])) || (*p_75)), l_255[2][1])) , l_302)), l_252))) == l_303) | l_238)) >= 65531UL)) , 0L)) && (-2L)) && 0x66894392L)) != l_303) , p_1281->g_226[1][1][7])), 4L)) == 0x6DAEL), p_1281->g_42[3])));
            }
            else
            { /* block id: 105 */
                int16_t l_320 = 0x5AC2L;
                l_307[0] = (l_308 != (void*)0);
                for (p_1281->g_94 = (-1); (p_1281->g_94 <= 18); p_1281->g_94++)
                { /* block id: 109 */
                    uint32_t l_311 = 0xA7AA2B66L;
                    int32_t l_314 = 0x4F38DF07L;
                    ++l_311;
                    l_314 = l_280[3];
                }
                for (p_1281->g_121 = 0; (p_1281->g_121 <= 5); p_1281->g_121 += 1)
                { /* block id: 115 */
                    int32_t *l_315 = &l_280[4];
                    if ((*p_1281->g_125))
                        break;
                    (*l_315) = (*p_74);
                    (*p_1281->g_333) = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((((l_320 , ((~(p_75 != p_75)) > (safe_mod_func_int64_t_s_s(((l_238 ^= p_1281->g_84) && 0x457A3A65D18B561DL), (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(1L, l_277)), (safe_add_func_int32_t_s_s(0x5560089FL, (((safe_rshift_func_uint8_t_u_s(((l_280[4] = 9UL) != 0L), 2)) <= (-7L)) != 0xC0743BC17667CB00L))))), (*p_1281->g_301))))))) && (*l_315)) <= 3L), l_307[0])), 1L));
                }
            }
            for (l_277 = 0; (l_277 <= 1); l_277 += 1)
            { /* block id: 125 */
                int32_t **l_336[9][7][4] = {{{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125}},{{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125}},{{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125}},{{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125}},{{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125}},{{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125}},{{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125}},{{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125}},{{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_166,(void*)0,&p_1281->g_125,&p_1281->g_125}}};
                int i, j, k;
                if (l_252)
                    goto lbl_335;
                l_337 = &l_280[4];
            }
            for (p_1281->g_77 = (-6); (p_1281->g_77 == 48); p_1281->g_77 = safe_add_func_uint8_t_u_u(p_1281->g_77, 2))
            { /* block id: 131 */
                uint16_t l_340 = 0x5141L;
                return l_340;
            }
        }
    }
    --l_348;
    return p_1281->g_208;
}


/* ------------------------------------------ */
/* 
 * reads : p_1281->g_38 p_1281->g_77 p_1281->g_42 p_1281->g_123 p_1281->g_124 p_1281->g_125 p_1281->g_3 p_1281->g_150 p_1281->g_151 p_1281->g_68 p_1281->g_121 p_1281->g_84 p_1281->g_166
 * writes: p_1281->g_38 p_1281->g_77 p_1281->g_121 p_1281->g_125 p_1281->g_150 p_1281->g_84 p_1281->g_42
 */
int32_t * func_78(uint32_t  p_79, struct S1 * p_1281)
{ /* block id: 23 */
    uint64_t *l_97 = &p_1281->g_38;
    int32_t l_122 = 0x23610563L;
    uint8_t *l_134 = (void*)0;
    uint8_t *l_135[8] = {&p_1281->g_77,&p_1281->g_77,&p_1281->g_77,&p_1281->g_77,&p_1281->g_77,&p_1281->g_77,&p_1281->g_77,&p_1281->g_77};
    int32_t l_142[8][5][6] = {{{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L}},{{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L}},{{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L}},{{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L}},{{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L}},{{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L}},{{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L}},{{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L},{0x15BDED78L,0x1567760CL,(-6L),9L,0x57ECED54L,0L}}};
    int8_t *l_149 = &p_1281->g_150;
    int16_t *l_164 = &p_1281->g_42[3];
    int32_t *l_165 = &l_122;
    int i, j, k;
    if (((&p_1281->g_38 == &p_1281->g_38) <= ((*l_97) |= p_79)))
    { /* block id: 25 */
        int16_t *l_109 = &p_1281->g_42[3];
        uint64_t *l_110 = &p_1281->g_38;
        int32_t l_119 = 0x6A136180L;
        for (p_1281->g_38 = 15; (p_1281->g_38 < 36); p_1281->g_38 = safe_add_func_uint64_t_u_u(p_1281->g_38, 7))
        { /* block id: 28 */
            uint64_t **l_111 = &l_97;
            uint8_t *l_116 = &p_1281->g_77;
            l_122 = ((safe_mod_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_add_func_uint64_t_u_u((((l_109 == (void*)0) <= (l_110 != ((*l_111) = l_97))) && 0x03L), (safe_rshift_func_uint16_t_u_s(65535UL, (safe_mul_func_int16_t_s_s((-1L), ((--(*l_116)) >= (p_79 , p_1281->g_42[3])))))))))) , p_79), 15)) , l_119), 0xE1196B4AL)) < p_79), 1UL)) | 0x21D5E08CE29F52E1L);
        }
        (*p_1281->g_123) = l_122;
    }
    else
    { /* block id: 34 */
        (*p_1281->g_124) = &l_122;
        (*p_1281->g_125) = (safe_mul_func_uint8_t_u_u(0xBFL, 0xC4L));
    }
    (*p_1281->g_151) = (safe_mod_func_uint16_t_u_u(p_79, ((p_1281->g_77 = (l_122 = (safe_add_func_uint16_t_u_u((+65535UL), (0x6EL > (p_79 , (safe_mul_func_int16_t_s_s(l_122, p_79)))))))) & (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_142[2][2][0], 5)) >= ((((*l_149) |= ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((p_79 ^ p_79) == p_79), 4294967295UL)), p_1281->g_3)), p_79)) == l_142[2][2][0])) <= l_142[5][2][3]) > 0x7AFBL)), p_79)))));
    l_142[0][4][4] = ((safe_rshift_func_int16_t_s_s((l_122 & p_1281->g_68), (p_79 && (*p_1281->g_123)))) & ((p_1281->g_84 = (p_79 == 0x294EL)) , (safe_div_func_int8_t_s_s(((((*l_164) &= (safe_rshift_func_int8_t_s_u(((*l_149) = (safe_add_func_uint16_t_u_u(l_142[2][2][0], (p_79 , (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(l_122, p_1281->g_38)) || l_122), 0x38BEL)))))), 6))) && l_142[2][2][0]) >= p_1281->g_84), l_142[2][1][5]))));
    return p_1281->g_166;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1282;
    struct S1* p_1281 = &c_1282;
    struct S1 c_1283 = {
        (-10L), // p_1281->g_2
        0L, // p_1281->g_3
        0x3A6BL, // p_1281->g_27
        18446744073709551615UL, // p_1281->g_38
        {0L,0L,0L,0L}, // p_1281->g_42
        7UL, // p_1281->g_68
        0x51L, // p_1281->g_77
        (-9L), // p_1281->g_84
        0x3ECF3843L, // p_1281->g_94
        0x29568EBAL, // p_1281->g_121
        {{&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121}}, // p_1281->g_120
        &p_1281->g_121, // p_1281->g_123
        &p_1281->g_121, // p_1281->g_125
        &p_1281->g_125, // p_1281->g_124
        (-9L), // p_1281->g_150
        &p_1281->g_121, // p_1281->g_151
        &p_1281->g_3, // p_1281->g_166
        &p_1281->g_121, // p_1281->g_173
        9UL, // p_1281->g_208
        &p_1281->g_121, // p_1281->g_217
        {{{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL}},{{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL}},{{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL}},{{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL}},{{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL}},{{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL},{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL}}}, // p_1281->g_226
        {{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121},{&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121,&p_1281->g_121}}, // p_1281->g_235
        {{{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121}},{{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121}},{{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121}},{{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121}},{{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121}},{{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121}},{{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121}},{{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121},{&p_1281->g_121,(void*)0,&p_1281->g_121}}}, // p_1281->g_278
        (void*)0, // p_1281->g_291
        &p_1281->g_291, // p_1281->g_290
        &p_1281->g_42[3], // p_1281->g_301
        (-1L), // p_1281->g_334
        &p_1281->g_334, // p_1281->g_333
        &p_1281->g_226[1][1][3], // p_1281->g_352
        &p_1281->g_352, // p_1281->g_351
        {65535UL}, // p_1281->g_354
        &p_1281->g_354, // p_1281->g_358
        0L, // p_1281->g_399
        {0xE116L}, // p_1281->g_415
        (-10L), // p_1281->g_439
        1UL, // p_1281->g_444
        &p_1281->g_125, // p_1281->g_449
        0xE77A451F7C12372AL, // p_1281->g_468
        (void*)0, // p_1281->g_485
        18446744073709551614UL, // p_1281->g_487
        (void*)0, // p_1281->g_506
        &p_1281->g_125, // p_1281->g_515
        &p_1281->g_415.f2, // p_1281->g_575
        {4UL}, // p_1281->g_586
        0xF8204EE3L, // p_1281->g_606
        (-1L), // p_1281->g_638
        (void*)0, // p_1281->g_661
        &p_1281->g_661, // p_1281->g_660
        0x2311L, // p_1281->g_675
        &p_1281->g_675, // p_1281->g_674
        &p_1281->g_674, // p_1281->g_673
        &p_1281->g_673, // p_1281->g_672
        &p_1281->g_672, // p_1281->g_671
        0x25B5FA18L, // p_1281->g_894
        &p_1281->g_334, // p_1281->g_919
        {0x933DL}, // p_1281->g_934
        {{{0x40E1L},{0x32DEL},{0UL},{65535UL},{0xE49EL},{65535UL},{0UL}},{{0x40E1L},{0x32DEL},{0UL},{65535UL},{0xE49EL},{65535UL},{0UL}},{{0x40E1L},{0x32DEL},{0UL},{65535UL},{0xE49EL},{65535UL},{0UL}},{{0x40E1L},{0x32DEL},{0UL},{65535UL},{0xE49EL},{65535UL},{0UL}},{{0x40E1L},{0x32DEL},{0UL},{65535UL},{0xE49EL},{65535UL},{0UL}},{{0x40E1L},{0x32DEL},{0UL},{65535UL},{0xE49EL},{65535UL},{0UL}}}, // p_1281->g_981
        {&p_1281->g_125}, // p_1281->g_988
        {{&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125},{&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125,&p_1281->g_125}}, // p_1281->g_989
        &p_1281->g_125, // p_1281->g_990
        {&p_1281->g_468}, // p_1281->g_993
        &p_1281->g_993[0], // p_1281->g_992
        {{0x2AE9L},{0x2AE9L},{0x2AE9L},{0x2AE9L},{0x2AE9L}}, // p_1281->g_1005
        (-1L), // p_1281->g_1017
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1281->g_1050
        &p_1281->g_1050[3], // p_1281->g_1049
        {65527UL}, // p_1281->g_1072
        &p_1281->g_290, // p_1281->g_1103
        &p_1281->g_1103, // p_1281->g_1102
        &p_1281->g_166, // p_1281->g_1145
        (-1L), // p_1281->g_1148
        &p_1281->g_166, // p_1281->g_1187
        (void*)0, // p_1281->g_1188
        0L, // p_1281->g_1238
        {1UL}, // p_1281->g_1239
        &p_1281->g_1188, // p_1281->g_1241
    };
    c_1282 = c_1283;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1281);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1281->g_2, "p_1281->g_2", print_hash_value);
    transparent_crc(p_1281->g_3, "p_1281->g_3", print_hash_value);
    transparent_crc(p_1281->g_27, "p_1281->g_27", print_hash_value);
    transparent_crc(p_1281->g_38, "p_1281->g_38", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1281->g_42[i], "p_1281->g_42[i]", print_hash_value);

    }
    transparent_crc(p_1281->g_68, "p_1281->g_68", print_hash_value);
    transparent_crc(p_1281->g_77, "p_1281->g_77", print_hash_value);
    transparent_crc(p_1281->g_84, "p_1281->g_84", print_hash_value);
    transparent_crc(p_1281->g_94, "p_1281->g_94", print_hash_value);
    transparent_crc(p_1281->g_121, "p_1281->g_121", print_hash_value);
    transparent_crc(p_1281->g_150, "p_1281->g_150", print_hash_value);
    transparent_crc(p_1281->g_208, "p_1281->g_208", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1281->g_226[i][j][k], "p_1281->g_226[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1281->g_334, "p_1281->g_334", print_hash_value);
    transparent_crc(p_1281->g_354.f0, "p_1281->g_354.f0", print_hash_value);
    transparent_crc(p_1281->g_399, "p_1281->g_399", print_hash_value);
    transparent_crc(p_1281->g_415.f0, "p_1281->g_415.f0", print_hash_value);
    transparent_crc(p_1281->g_439, "p_1281->g_439", print_hash_value);
    transparent_crc(p_1281->g_444, "p_1281->g_444", print_hash_value);
    transparent_crc(p_1281->g_468, "p_1281->g_468", print_hash_value);
    transparent_crc(p_1281->g_487, "p_1281->g_487", print_hash_value);
    transparent_crc(p_1281->g_586.f0, "p_1281->g_586.f0", print_hash_value);
    transparent_crc(p_1281->g_606, "p_1281->g_606", print_hash_value);
    transparent_crc(p_1281->g_638, "p_1281->g_638", print_hash_value);
    transparent_crc(p_1281->g_675, "p_1281->g_675", print_hash_value);
    transparent_crc(p_1281->g_894, "p_1281->g_894", print_hash_value);
    transparent_crc(p_1281->g_934.f0, "p_1281->g_934.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1281->g_981[i][j].f0, "p_1281->g_981[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1281->g_1005[i].f0, "p_1281->g_1005[i].f0", print_hash_value);

    }
    transparent_crc(p_1281->g_1017, "p_1281->g_1017", print_hash_value);
    transparent_crc(p_1281->g_1072.f0, "p_1281->g_1072.f0", print_hash_value);
    transparent_crc(p_1281->g_1148, "p_1281->g_1148", print_hash_value);
    transparent_crc(p_1281->g_1238, "p_1281->g_1238", print_hash_value);
    transparent_crc(p_1281->g_1239.f0, "p_1281->g_1239.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
