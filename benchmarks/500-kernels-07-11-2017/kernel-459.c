// -g 19,85,1 -l 19,1,1
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


// Seed: 3507127320

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   volatile int64_t  f2;
   volatile int32_t  f3;
};

struct S1 {
   uint64_t  f0;
   uint64_t  f1;
   int16_t  f2;
   volatile int16_t  f3;
   struct S0  f4;
   int64_t  f5;
   int32_t  f6;
   volatile int16_t  f7;
   int32_t  f8;
};

struct S2 {
    uint16_t g_5;
    int8_t g_32;
    int32_t g_43;
    volatile uint32_t g_51[1];
    uint16_t g_88;
    uint8_t g_89;
    int8_t g_96;
    int8_t *g_95[1];
    int32_t g_106;
    uint64_t g_121;
    uint16_t g_128;
    uint32_t g_132[10][2][1];
    uint64_t g_137;
    int64_t g_141;
    int64_t *g_140[7];
    uint32_t g_161;
    uint32_t g_193;
    uint8_t g_214;
    volatile struct S1 *g_236;
    uint8_t g_243;
    int16_t g_269;
    volatile struct S0 *g_271;
    int32_t *g_280[4];
    volatile int32_t g_322;
    volatile int32_t *g_321;
    volatile int32_t * volatile *g_350;
    volatile int32_t * volatile **g_349;
    int8_t g_366;
    int16_t g_374;
    int32_t ** volatile g_380;
    uint32_t g_391;
    int32_t g_398;
    int32_t *g_397[1];
    struct S1 g_429;
    volatile struct S0 g_446;
    volatile struct S0 g_447;
    uint8_t g_463;
    struct S0 g_471;
    volatile struct S1 g_485;
    uint32_t g_510;
    volatile struct S0 ** volatile g_514[3];
    struct S1 g_537[10];
    struct S1 g_539[3];
    uint64_t **g_557;
    volatile struct S0 g_572;
    struct S0 g_576[6];
    volatile struct S1 g_580[8];
    volatile struct S0 g_607;
    int32_t g_614[4][2];
    volatile struct S0 g_619;
    struct S1 g_628;
    struct S1 * volatile g_629;
    struct S0 g_630;
    volatile struct S1 g_667[6];
    volatile struct S1 g_711;
    volatile struct S1 g_712[3];
    uint32_t *g_734;
    uint32_t **g_733;
    uint32_t *** volatile g_732;
    struct S0 g_735;
    struct S1 g_775;
    struct S1 g_776;
    uint32_t *g_778;
    int64_t g_795;
    uint32_t g_811;
    int8_t g_817;
    int8_t g_831;
    int16_t *g_876;
    int16_t **g_875;
    int16_t ***g_874;
    int16_t g_886[2];
    volatile int32_t *g_903;
    volatile uint32_t g_949;
    struct S0 g_956[7][5][6];
    volatile int64_t g_977[6];
    int8_t g_1047[9];
    volatile struct S0 g_1098[1][2];
    volatile struct S1 g_1137;
    int32_t ** volatile g_1163[2];
    uint32_t ***g_1179;
    uint32_t **g_1183;
    uint32_t ***g_1182;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_1196);
int64_t  func_6(uint32_t  p_7, int8_t  p_8, uint64_t  p_9, uint32_t  p_10, int64_t  p_11, struct S2 * p_1196);
uint64_t  func_16(uint32_t  p_17, uint32_t  p_18, uint32_t  p_19, struct S2 * p_1196);
int16_t  func_20(uint32_t  p_21, uint32_t  p_22, int8_t  p_23, uint32_t  p_24, struct S2 * p_1196);
int8_t  func_38(uint16_t  p_39, uint64_t  p_40, struct S2 * p_1196);
int32_t  func_54(uint8_t  p_55, int32_t * p_56, uint8_t  p_57, struct S2 * p_1196);
uint8_t  func_58(uint8_t  p_59, uint8_t  p_60, int8_t * p_61, int32_t  p_62, int64_t  p_63, struct S2 * p_1196);
int32_t  func_68(uint16_t  p_69, int32_t  p_70, uint8_t  p_71, int8_t  p_72, int64_t  p_73, struct S2 * p_1196);
uint16_t  func_74(int32_t  p_75, int32_t  p_76, int32_t * p_77, struct S2 * p_1196);
int32_t * func_78(uint64_t  p_79, int32_t * p_80, struct S2 * p_1196);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1196->g_5 p_1196->g_32 p_1196->g_43 p_1196->g_51 p_1196->g_95 p_1196->g_88 p_1196->g_96 p_1196->g_106 p_1196->g_89 p_1196->g_121 p_1196->g_128 p_1196->g_161 p_1196->g_137 p_1196->g_193 p_1196->g_141 p_1196->g_132 p_1196->g_214 p_1196->g_236 p_1196->g_243 p_1196->g_271 p_1196->g_269 p_1196->g_321 p_1196->g_349 p_1196->g_374 p_1196->g_380 p_1196->g_366 p_1196->g_322 p_1196->g_397 p_1196->g_398 p_1196->g_429 p_1196->g_446 p_1196->g_471 p_1196->g_485 p_1196->g_350 p_1196->g_735.f0 p_1196->g_875 p_1196->g_876 p_1196->g_886 p_1196->g_903 p_1196->g_775.f4.f0 p_1196->g_776.f2 p_1196->g_1182 p_1196->g_539.f4.f1 p_1196->g_580.f3 p_1196->g_874
 * writes: p_1196->g_32 p_1196->g_43 p_1196->g_51 p_1196->g_88 p_1196->g_89 p_1196->g_106 p_1196->g_5 p_1196->g_121 p_1196->g_161 p_1196->g_96 p_1196->g_128 p_1196->g_193 p_1196->g_214 p_1196->g_236 p_1196->g_243 p_1196->g_269 p_1196->g_280 p_1196->g_321 p_1196->g_374 p_1196->g_132 p_1196->g_391 p_1196->g_322 p_1196->g_141 p_1196->g_397 p_1196->g_447 p_1196->g_463 p_1196->g_429.f0 p_1196->g_735.f0 p_1196->g_775.f4.f0 p_1196->g_1179 p_1196->g_429.f2 p_1196->g_1182 p_1196->g_874 p_1196->g_876
 */
uint32_t  func_1(struct S2 * p_1196)
{ /* block id: 4 */
    int32_t l_2 = 0x43C39BA0L;
    int8_t *l_31 = &p_1196->g_32;
    int64_t l_1155 = 0x4F3079E23478D6A5L;
    int64_t l_1165 = 0x2DEACD299BA283A0L;
    (*p_1196->g_903) = ((l_2 >= (safe_div_func_int64_t_s_s((p_1196->g_5 , func_6(l_2, l_2, ((safe_rshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(l_2, func_16(((func_20(p_1196->g_5, ((p_1196->g_5 | (safe_sub_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((*l_31) = (-10L)), (safe_mod_func_int64_t_s_s(l_2, 0x7A7BF748BBE26B5CL)))), l_2)) , 1L) || l_2) , 0UL), 0x66L))) < 2UL), p_1196->g_5, l_2, p_1196) & 0x42ACL) , l_2), l_1155, p_1196->g_886[1], p_1196))), 1)) < 0x4CL), l_1165, l_1155, p_1196)), l_1165))) , l_2);
    return l_1155;
}


/* ------------------------------------------ */
/* 
 * reads : p_1196->g_775.f4.f0 p_1196->g_321 p_1196->g_322 p_1196->g_776.f2 p_1196->g_485.f1 p_1196->g_875 p_1196->g_876 p_1196->g_349 p_1196->g_350 p_1196->g_1182 p_1196->g_539.f4.f1 p_1196->g_580.f3 p_1196->g_874
 * writes: p_1196->g_775.f4.f0 p_1196->g_1179 p_1196->g_429.f2 p_1196->g_1182 p_1196->g_874 p_1196->g_876 p_1196->g_397
 */
int64_t  func_6(uint32_t  p_7, int8_t  p_8, uint64_t  p_9, uint32_t  p_10, int64_t  p_11, struct S2 * p_1196)
{ /* block id: 640 */
    int8_t l_1177 = 0x0EL;
    uint32_t ***l_1178[8][10] = {{&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,(void*)0,&p_1196->g_733,(void*)0,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733},{&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,(void*)0,&p_1196->g_733,(void*)0,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733},{&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,(void*)0,&p_1196->g_733,(void*)0,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733},{&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,(void*)0,&p_1196->g_733,(void*)0,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733},{&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,(void*)0,&p_1196->g_733,(void*)0,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733},{&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,(void*)0,&p_1196->g_733,(void*)0,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733},{&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,(void*)0,&p_1196->g_733,(void*)0,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733},{&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,(void*)0,&p_1196->g_733,(void*)0,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733,&p_1196->g_733}};
    uint64_t *l_1180 = &p_1196->g_775.f1;
    int32_t l_1181 = (-2L);
    uint32_t ****l_1184 = &p_1196->g_1182;
    int16_t *l_1191[3];
    int16_t ***l_1192 = &p_1196->g_875;
    int16_t ***l_1193[6][3] = {{&p_1196->g_875,&p_1196->g_875,&p_1196->g_875},{&p_1196->g_875,&p_1196->g_875,&p_1196->g_875},{&p_1196->g_875,&p_1196->g_875,&p_1196->g_875},{&p_1196->g_875,&p_1196->g_875,&p_1196->g_875},{&p_1196->g_875,&p_1196->g_875,&p_1196->g_875},{&p_1196->g_875,&p_1196->g_875,&p_1196->g_875}};
    int16_t ****l_1194 = &p_1196->g_874;
    int32_t **l_1195 = &p_1196->g_397[0];
    int i, j;
    for (i = 0; i < 3; i++)
        l_1191[i] = &p_1196->g_539[0].f2;
    for (p_1196->g_775.f4.f0 = 28; (p_1196->g_775.f4.f0 == 19); --p_1196->g_775.f4.f0)
    { /* block id: 643 */
        uint32_t l_1176 = 0x8709107AL;
        if ((*p_1196->g_321))
            break;
        l_1181 = (((safe_add_func_int16_t_s_s(((**p_1196->g_875) = (~((safe_mod_func_uint16_t_u_u(1UL, (safe_lshift_func_int16_t_s_s((p_1196->g_776.f2 < (safe_mul_func_int16_t_s_s((l_1177 ^= l_1176), p_1196->g_485.f1))), 0)))) , ((l_1178[3][8] != (p_1196->g_1179 = l_1178[4][3])) > p_8)))), p_7)) , ((((*p_1196->g_349) == (void*)0) , 0L) , (void*)0)) == l_1180);
    }
    (*l_1195) = ((((((*l_1184) = p_1196->g_1182) != &p_1196->g_1183) < p_9) & (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((p_1196->g_539[0].f4.f1 == (l_1191[1] != ((**l_1192) = (((p_1196->g_580[5].f3 , l_1192) != ((*l_1194) = l_1193[4][1])) , (**p_1196->g_874))))), l_1181)), 0xC4L))) , &l_1181);
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1196->g_321 p_1196->g_121 p_1196->g_903 p_1196->g_429.f4.f2
 * writes: p_1196->g_322
 */
uint64_t  func_16(uint32_t  p_17, uint32_t  p_18, uint32_t  p_19, struct S2 * p_1196)
{ /* block id: 634 */
    uint32_t l_1156 = 0x2B6B8142L;
    uint8_t l_1157 = 0UL;
    int32_t l_1160 = 0x7E9376A7L;
    int16_t ***l_1161 = &p_1196->g_875;
    int32_t *l_1162 = (void*)0;
    int32_t *l_1164 = &p_1196->g_106;
    (*p_1196->g_321) = (l_1156 > l_1157);
    (*p_1196->g_903) = ((safe_lshift_func_int16_t_s_u((p_1196->g_121 || 65532UL), 8)) != (((0x4C60L <= 0x7691L) & l_1160) & (&p_1196->g_875 != l_1161)));
    l_1164 = (l_1162 = l_1162);
    return p_1196->g_429.f4.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1196->g_32 p_1196->g_43 p_1196->g_51 p_1196->g_95 p_1196->g_5 p_1196->g_88 p_1196->g_96 p_1196->g_106 p_1196->g_89 p_1196->g_121 p_1196->g_128 p_1196->g_161 p_1196->g_137 p_1196->g_193 p_1196->g_141 p_1196->g_132 p_1196->g_214 p_1196->g_236 p_1196->g_243 p_1196->g_271 p_1196->g_269 p_1196->g_321 p_1196->g_349 p_1196->g_374 p_1196->g_380 p_1196->g_366 p_1196->g_322 p_1196->g_397 p_1196->g_398 p_1196->g_429 p_1196->g_446 p_1196->g_471 p_1196->g_485 p_1196->g_350 p_1196->g_735.f0 p_1196->g_875 p_1196->g_876
 * writes: p_1196->g_43 p_1196->g_51 p_1196->g_32 p_1196->g_88 p_1196->g_89 p_1196->g_106 p_1196->g_5 p_1196->g_121 p_1196->g_161 p_1196->g_96 p_1196->g_128 p_1196->g_193 p_1196->g_214 p_1196->g_236 p_1196->g_243 p_1196->g_269 p_1196->g_280 p_1196->g_321 p_1196->g_374 p_1196->g_132 p_1196->g_391 p_1196->g_322 p_1196->g_141 p_1196->g_397 p_1196->g_447 p_1196->g_463 p_1196->g_429.f0 p_1196->g_735.f0
 */
int16_t  func_20(uint32_t  p_21, uint32_t  p_22, int8_t  p_23, uint32_t  p_24, struct S2 * p_1196)
{ /* block id: 6 */
    int64_t l_37 = 0x7B49A5C1B09C821FL;
    uint16_t l_41 = 65534UL;
    uint32_t *l_460 = (void*)0;
    int32_t l_461 = 0x1B54D93EL;
    uint8_t *l_462[8][10][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    uint32_t l_464 = 0x4E184711L;
    int32_t *l_466 = &l_461;
    int32_t **l_465[1];
    int32_t ***l_467 = (void*)0;
    int32_t ***l_468 = &l_465[0];
    int16_t *l_486[3];
    uint32_t l_540[2][7][5] = {{{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL}},{{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL},{4294967288UL,0x012FC3BEL,1UL,0xB4CBE2E4L,0xF3DD166BL}}};
    uint32_t l_555 = 0xBACC3844L;
    struct S0 **l_573 = (void*)0;
    int32_t l_590[8];
    uint32_t l_701 = 0x7A606710L;
    uint64_t ***l_719 = &p_1196->g_557;
    int16_t l_856 = 0x1730L;
    int16_t l_866 = 0x436AL;
    struct S1 *l_902[6][7] = {{(void*)0,&p_1196->g_775,&p_1196->g_775,(void*)0,&p_1196->g_539[1],&p_1196->g_628,&p_1196->g_628},{(void*)0,&p_1196->g_775,&p_1196->g_775,(void*)0,&p_1196->g_539[1],&p_1196->g_628,&p_1196->g_628},{(void*)0,&p_1196->g_775,&p_1196->g_775,(void*)0,&p_1196->g_539[1],&p_1196->g_628,&p_1196->g_628},{(void*)0,&p_1196->g_775,&p_1196->g_775,(void*)0,&p_1196->g_539[1],&p_1196->g_628,&p_1196->g_628},{(void*)0,&p_1196->g_775,&p_1196->g_775,(void*)0,&p_1196->g_539[1],&p_1196->g_628,&p_1196->g_628},{(void*)0,&p_1196->g_775,&p_1196->g_775,(void*)0,&p_1196->g_539[1],&p_1196->g_628,&p_1196->g_628}};
    int16_t l_923[7];
    int8_t l_971[3][4] = {{(-1L),(-7L),6L,(-7L)},{(-1L),(-7L),6L,(-7L)},{(-1L),(-7L),6L,(-7L)}};
    int8_t l_972 = 0L;
    int32_t l_978 = 0x7F42FCC8L;
    int32_t l_979 = 0x2371E6B4L;
    uint32_t l_980 = 4294967286UL;
    int32_t l_1053 = (-10L);
    uint32_t l_1111 = 0x192CDB71L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_465[i] = &l_466;
    for (i = 0; i < 3; i++)
        l_486[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_590[i] = 0x20FC4D5FL;
    for (i = 0; i < 7; i++)
        l_923[i] = 0x419BL;
    if (((safe_mul_func_uint8_t_u_u((l_37 &= (~p_23)), ((0xEDL | func_38(p_22, l_41, p_1196)) ^ (((((*l_468) = ((p_1196->g_463 = (l_464 = ((!(safe_add_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(p_22, ((safe_lshift_func_uint16_t_u_u(0xF0ECL, p_21)) < (((safe_rshift_func_uint8_t_u_s(((l_461 = (((safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((-10L) < 7UL), p_1196->g_429.f4.f0)) | p_23), 0x3CL)) >= p_21) || l_41)) == 0x591BB09EL), p_21)) <= 3UL) == p_1196->g_429.f2)))) <= p_22) == p_1196->g_429.f0), l_41))) | l_41))) , l_465[0])) == (void*)0) && p_1196->g_429.f5) | p_1196->g_429.f4.f0)))) , 0x2631D278L))
    { /* block id: 211 */
        int8_t l_472 = 0L;
        uint16_t l_484 = 0xA8B7L;
        int32_t **l_489 = &p_1196->g_280[0];
        for (p_1196->g_429.f0 = 0; (p_1196->g_429.f0 <= 0); p_1196->g_429.f0 += 1)
        { /* block id: 214 */
            uint32_t l_483 = 0x07045C10L;
            int16_t **l_487 = &l_486[1];
            int32_t l_488[7];
            int32_t l_490[6][5] = {{(-1L),0x47718B64L,0x47718B64L,(-1L),(-1L)},{(-1L),0x47718B64L,0x47718B64L,(-1L),(-1L)},{(-1L),0x47718B64L,0x47718B64L,(-1L),(-1L)},{(-1L),0x47718B64L,0x47718B64L,(-1L),(-1L)},{(-1L),0x47718B64L,0x47718B64L,(-1L),(-1L)},{(-1L),0x47718B64L,0x47718B64L,(-1L),(-1L)}};
            int i, j;
            for (i = 0; i < 7; i++)
                l_488[i] = (-1L);
            l_490[4][2] ^= ((((*l_466) |= (safe_lshift_func_uint16_t_u_s((+(((p_1196->g_471 , l_472) , &p_1196->g_269) == &p_1196->g_374)), 15))) , ((((((((safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((l_488[3] = (safe_sub_func_int32_t_s_s(((p_1196->g_132[2][1][0] != (((*l_487) = (((((((p_21 , l_472) | ((!p_1196->g_193) <= ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_483, l_484)), p_22)) , p_22))) , p_1196->g_485) , 0x48C08B6E860C42ACL) , p_24) != 0x5C257B2BL) , l_486[1])) != (void*)0)) != p_1196->g_429.f6), l_483))) <= 0x4A0AAD10L), p_24)) == l_483), l_472)) > l_484) , 8L) || p_24) , (*p_1196->g_349)) == l_489) <= p_24) | 0x31L)) < l_483);
        }
    }
    else
    { /* block id: 220 */
        uint64_t *l_502 = &p_1196->g_121;
        int32_t l_503[1];
        int32_t l_513[2][5];
        int8_t l_518 = 0x37L;
        uint64_t l_548[2][10] = {{8UL,0x3F02EBE50E91ABF8L,1UL,0x3F02EBE50E91ABF8L,8UL,8UL,0x3F02EBE50E91ABF8L,1UL,0x3F02EBE50E91ABF8L,8UL},{8UL,0x3F02EBE50E91ABF8L,1UL,0x3F02EBE50E91ABF8L,8UL,8UL,0x3F02EBE50E91ABF8L,1UL,0x3F02EBE50E91ABF8L,8UL}};
        uint64_t **l_556 = (void*)0;
        struct S0 *l_575 = &p_1196->g_576[4];
        struct S0 **l_574 = &l_575;
        uint64_t **l_624 = (void*)0;
        uint32_t l_637 = 0xF79FE77BL;
        int16_t **l_681 = (void*)0;
        int32_t *l_710[1][8] = {{&l_503[0],&l_503[0],&l_503[0],&l_503[0],&l_503[0],&l_503[0],&l_503[0],&l_503[0]}};
        int32_t l_726 = 0x6973B78AL;
        uint8_t l_727 = 0xBEL;
        uint32_t **l_786 = (void*)0;
        int8_t l_793 = (-1L);
        uint32_t l_834 = 0xFB3ABA0DL;
        uint32_t l_899 = 0x3065F65AL;
        int8_t l_973[7] = {0x61L,0x61L,0x61L,0x61L,0x61L,0x61L,0x61L};
        uint64_t l_974 = 0x19C67378BEE5F07CL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_503[i] = 0x077C88E0L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_513[i][j] = 0L;
        }
        (1 + 1);
    }
    l_980++;
    for (p_1196->g_735.f0 = 0; (p_1196->g_735.f0 < 34); ++p_1196->g_735.f0)
    { /* block id: 528 */
        uint64_t *l_999 = &p_1196->g_776.f0;
        int32_t l_1010 = 0L;
        struct S1 *l_1061 = &p_1196->g_537[1];
        (1 + 1);
    }
    return (**p_1196->g_875);
}


/* ------------------------------------------ */
/* 
 * reads : p_1196->g_32 p_1196->g_43 p_1196->g_51 p_1196->g_95 p_1196->g_5 p_1196->g_88 p_1196->g_96 p_1196->g_106 p_1196->g_89 p_1196->g_121 p_1196->g_128 p_1196->g_161 p_1196->g_137 p_1196->g_193 p_1196->g_141 p_1196->g_132 p_1196->g_214 p_1196->g_236 p_1196->g_243 p_1196->g_271 p_1196->g_269 p_1196->g_321 p_1196->g_349 p_1196->g_374 p_1196->g_380 p_1196->g_366 p_1196->g_322 p_1196->g_397 p_1196->g_398 p_1196->g_429 p_1196->g_446
 * writes: p_1196->g_43 p_1196->g_51 p_1196->g_32 p_1196->g_88 p_1196->g_89 p_1196->g_106 p_1196->g_5 p_1196->g_121 p_1196->g_161 p_1196->g_96 p_1196->g_128 p_1196->g_193 p_1196->g_214 p_1196->g_236 p_1196->g_243 p_1196->g_269 p_1196->g_280 p_1196->g_321 p_1196->g_374 p_1196->g_132 p_1196->g_391 p_1196->g_322 p_1196->g_141 p_1196->g_397 p_1196->g_447
 */
int8_t  func_38(uint16_t  p_39, uint64_t  p_40, struct S2 * p_1196)
{ /* block id: 8 */
    int32_t *l_42 = &p_1196->g_43;
    int32_t *l_44 = (void*)0;
    int32_t *l_45 = (void*)0;
    int32_t l_46 = 2L;
    int32_t *l_47 = &p_1196->g_43;
    int32_t *l_48 = (void*)0;
    int32_t *l_49 = (void*)0;
    int32_t *l_50[6];
    int8_t *l_67 = &p_1196->g_32;
    int32_t **l_85 = (void*)0;
    int32_t **l_86 = &l_50[3];
    int32_t l_87 = 0x0F04B746L;
    int16_t *l_373 = &p_1196->g_374;
    uint16_t l_375 = 65532UL;
    int8_t l_376 = 6L;
    int i;
    for (i = 0; i < 6; i++)
        l_50[i] = &l_46;
    l_46 |= ((*l_42) ^= p_1196->g_32);
    ++p_1196->g_51[0];
    p_1196->g_447 = (func_54(func_58((safe_mul_func_uint8_t_u_u(((p_1196->g_51[0] <= ((*l_373) ^= (((safe_unary_minus_func_int64_t_s((l_67 != l_67))) || ((*l_67) = p_39)) ^ func_68((+func_74(p_1196->g_43, p_1196->g_43, func_78((safe_div_func_int64_t_s_s(p_1196->g_43, (((p_1196->g_89 = (p_1196->g_88 = (safe_div_func_int8_t_s_s(((&l_46 == ((*l_86) = &p_1196->g_43)) , l_87), 254UL)))) && 0x6125F897L) , p_39))), &p_1196->g_43, p_1196), p_1196)), p_40, p_40, p_40, p_1196->g_137, p_1196)))) , 0x55L), p_1196->g_137)), l_375, &p_1196->g_366, p_39, l_376, p_1196), p_1196->g_397[0], p_1196->g_398, p_1196) , p_1196->g_446);
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_1196->g_128 p_1196->g_214 p_1196->g_429 p_1196->g_106 p_1196->g_321 p_1196->g_141 p_1196->g_95 p_1196->g_5 p_1196->g_88 p_1196->g_96 p_1196->g_243
 * writes: p_1196->g_32 p_1196->g_128 p_1196->g_214 p_1196->g_322 p_1196->g_141 p_1196->g_397 p_1196->g_106
 */
int32_t  func_54(uint8_t  p_55, int32_t * p_56, uint8_t  p_57, struct S2 * p_1196)
{ /* block id: 189 */
    uint8_t l_399 = 0x6FL;
    int16_t *l_407 = &p_1196->g_269;
    int16_t **l_406 = &l_407;
    int8_t *l_410 = &p_1196->g_32;
    uint16_t *l_423 = &p_1196->g_128;
    uint8_t *l_426 = &p_1196->g_214;
    int8_t *l_432 = (void*)0;
    int8_t *l_433[1];
    int32_t l_434 = 9L;
    int32_t l_437 = 0x429A4FD4L;
    int32_t l_438 = 0x151B116BL;
    int32_t *l_442[9];
    int32_t **l_443 = (void*)0;
    int32_t **l_444 = &p_1196->g_397[0];
    int32_t **l_445 = &l_442[5];
    int i;
    for (i = 0; i < 1; i++)
        l_433[i] = &p_1196->g_366;
    for (i = 0; i < 9; i++)
        l_442[i] = &p_1196->g_43;
    --l_399;
    (*p_1196->g_321) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((void*)0 != l_406), l_399)), ((safe_div_func_int8_t_s_s(((*l_410) = p_55), (safe_div_func_uint32_t_u_u(p_55, (safe_add_func_int8_t_s_s((l_434 &= (safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((*l_423)++), p_55)) <= (((*l_426)--) < (p_1196->g_429 , (safe_add_func_uint32_t_u_u(p_55, p_57))))), p_1196->g_106)), 1UL))), 0x6AL)))))) && l_399)));
    for (p_1196->g_141 = 0; (p_1196->g_141 == 9); p_1196->g_141 = safe_add_func_uint32_t_u_u(p_1196->g_141, 8))
    { /* block id: 198 */
        uint8_t l_439 = 1UL;
        l_439++;
    }
    (*l_445) = func_78(l_434, ((*l_445) = ((*l_444) = l_442[5])), p_1196);
    return p_1196->g_243;
}


/* ------------------------------------------ */
/* 
 * reads : p_1196->g_214 p_1196->g_380 p_1196->g_366 p_1196->g_43 p_1196->g_132 p_1196->g_321 p_1196->g_322
 * writes: p_1196->g_214 p_1196->g_280 p_1196->g_269 p_1196->g_132 p_1196->g_391 p_1196->g_322
 */
uint8_t  func_58(uint8_t  p_59, uint8_t  p_60, int8_t * p_61, int32_t  p_62, int64_t  p_63, struct S2 * p_1196)
{ /* block id: 174 */
    int32_t *l_379 = &p_1196->g_43;
    int16_t *l_392 = &p_1196->g_374;
    int16_t *l_396 = &p_1196->g_374;
    for (p_1196->g_214 = 0; (p_1196->g_214 >= 38); p_1196->g_214++)
    { /* block id: 177 */
        int16_t *l_383 = &p_1196->g_269;
        int32_t l_384 = (-9L);
        uint32_t *l_389 = &p_1196->g_132[2][1][0];
        uint32_t *l_390 = &p_1196->g_391;
        int16_t **l_393 = &l_392;
        int16_t *l_395 = &p_1196->g_374;
        int16_t **l_394 = &l_395;
        (*p_1196->g_380) = l_379;
        (*p_1196->g_321) ^= ((safe_add_func_uint64_t_u_u(((((*l_383) = p_1196->g_366) && ((*l_383) = l_384)) == (safe_add_func_int64_t_s_s((*l_379), (*l_379)))), ((3L != ((safe_mul_func_int8_t_s_s((((p_62 |= (((*l_390) = ((*l_389) |= 1UL)) >= ((((*l_394) = ((*l_393) = l_392)) == l_396) ^ ((-9L) != p_60)))) & 0L) && p_59), (*p_61))) , 1L)) > 0x33A01B05L))) != (*p_61));
    }
    return p_60;
}


/* ------------------------------------------ */
/* 
 * reads : p_1196->g_43
 * writes: p_1196->g_280 p_1196->g_43
 */
int32_t  func_68(uint16_t  p_69, int32_t  p_70, uint8_t  p_71, int8_t  p_72, int64_t  p_73, struct S2 * p_1196)
{ /* block id: 169 */
    int32_t *l_370 = &p_1196->g_43;
    int32_t **l_371[5];
    int32_t l_372 = (-6L);
    int i;
    for (i = 0; i < 5; i++)
        l_371[i] = &l_370;
    p_1196->g_280[2] = l_370;
    (*l_370) &= l_372;
    return p_69;
}


/* ------------------------------------------ */
/* 
 * reads : p_1196->g_88 p_1196->g_5 p_1196->g_106 p_1196->g_96 p_1196->g_89 p_1196->g_121 p_1196->g_128 p_1196->g_161 p_1196->g_137 p_1196->g_193 p_1196->g_141 p_1196->g_132 p_1196->g_43 p_1196->g_214 p_1196->g_236 p_1196->g_243 p_1196->g_271 p_1196->g_269 p_1196->g_321 p_1196->g_349
 * writes: p_1196->g_43 p_1196->g_88 p_1196->g_5 p_1196->g_106 p_1196->g_121 p_1196->g_89 p_1196->g_161 p_1196->g_96 p_1196->g_128 p_1196->g_193 p_1196->g_214 p_1196->g_236 p_1196->g_243 p_1196->g_269 p_1196->g_280 p_1196->g_321
 */
uint16_t  func_74(int32_t  p_75, int32_t  p_76, int32_t * p_77, struct S2 * p_1196)
{ /* block id: 19 */
    int64_t l_107 = 0x641AB87676DC049DL;
    uint64_t *l_150[6][3];
    uint64_t *l_204 = (void*)0;
    int32_t l_232 = (-1L);
    int8_t l_235 = (-1L);
    int32_t l_242[6][3] = {{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}};
    struct S0 *l_344 = (void*)0;
    int32_t *l_353 = &l_242[4][1];
    int32_t *l_354 = &l_242[4][1];
    int32_t *l_355 = &p_1196->g_43;
    int32_t *l_356 = (void*)0;
    int32_t *l_357 = &l_242[4][1];
    int32_t *l_358 = &l_242[1][1];
    int32_t *l_359 = &l_232;
    int32_t *l_360 = &l_242[3][2];
    int32_t *l_361[1];
    int8_t l_362[4];
    uint32_t l_363 = 0xF6BB8693L;
    uint32_t l_367 = 0xCD965592L;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
            l_150[i][j] = &p_1196->g_121;
    }
    for (i = 0; i < 1; i++)
        l_361[i] = &l_242[4][1];
    for (i = 0; i < 4; i++)
        l_362[i] = 0x22L;
lbl_246:
    (*p_77) = l_107;
    for (p_1196->g_88 = (-20); (p_1196->g_88 > 16); p_1196->g_88 = safe_add_func_int32_t_s_s(p_1196->g_88, 1))
    { /* block id: 23 */
        int32_t l_122 = 0L;
        int32_t l_192 = 4L;
        uint64_t *l_203 = &p_1196->g_137;
        uint64_t **l_202[3][8][2] = {{{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203}},{{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203}},{{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203},{&l_203,&l_203}}};
        uint8_t *l_213[8] = {&p_1196->g_89,&p_1196->g_89,&p_1196->g_89,&p_1196->g_89,&p_1196->g_89,&p_1196->g_89,&p_1196->g_89,&p_1196->g_89};
        int32_t *l_215 = (void*)0;
        int32_t **l_294[9];
        int32_t ***l_293 = &l_294[3];
        uint32_t l_320[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_294[i] = &l_215;
        for (p_1196->g_5 = 22; (p_1196->g_5 == 47); p_1196->g_5 = safe_add_func_uint16_t_u_u(p_1196->g_5, 8))
        { /* block id: 26 */
            int8_t *l_112 = &p_1196->g_96;
            int32_t *l_118 = &p_1196->g_106;
            int32_t **l_117 = &l_118;
            int32_t l_191[4];
            int i;
            for (i = 0; i < 4; i++)
                l_191[i] = (-1L);
            for (p_1196->g_106 = 0; (p_1196->g_106 <= 0); p_1196->g_106 += 1)
            { /* block id: 29 */
                int32_t ***l_119 = &l_117;
                uint64_t *l_120[7][1];
                int64_t *l_123 = &l_107;
                int16_t l_146 = 0x6434L;
                int32_t l_151 = 2L;
                int8_t *l_153 = &p_1196->g_96;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_120[i][j] = &p_1196->g_121;
                }
                if (((((((((((1UL && ((0L || ((*p_77) = (((void*)0 != l_112) <= (((*l_123) = (((((p_1196->g_121 = (((((safe_rshift_func_uint8_t_u_s(p_1196->g_88, (safe_add_func_int8_t_s_s((-9L), ((-1L) | p_1196->g_5))))) || ((((*l_119) = l_117) != (void*)0) && 0UL)) <= p_1196->g_106) <= 0x23AE71BBE26AF1C4L) , l_107)) > p_1196->g_96) && 0L) != l_122) ^ 0x7FL)) && l_107)))) , (-1L))) | p_1196->g_89) , &p_77) != (void*)0) , p_75) , 0x1A964D50L) , 1UL) >= 1L) , 0x1CE06006L) , l_107))
                { /* block id: 34 */
                    int64_t *l_143 = &l_107;
                    int32_t l_147 = 0x321F159AL;
                    for (l_107 = 0; (l_107 >= 0); l_107 -= 1)
                    { /* block id: 37 */
                        uint16_t *l_126 = (void*)0;
                        uint16_t *l_127 = &p_1196->g_128;
                        uint32_t *l_131 = &p_1196->g_132[1][1][0];
                        int32_t *l_135 = &l_122;
                        uint64_t *l_136 = &p_1196->g_137;
                        int64_t **l_142 = &l_123;
                        (1 + 1);
                    }
                }
                else
                { /* block id: 50 */
                    uint32_t l_160 = 0xA66330F8L;
                    uint8_t *l_176 = &p_1196->g_89;
                    uint16_t *l_183[4][9] = {{&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_88},{&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_88},{&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_88},{&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_128,&p_1196->g_88,&p_1196->g_128,&p_1196->g_88}};
                    int32_t l_184 = 0x262FDF43L;
                    int32_t *l_187 = &l_151;
                    int i, j;
                    for (p_76 = 0; (p_76 >= 0); p_76 -= 1)
                    { /* block id: 53 */
                        uint8_t *l_156 = &p_1196->g_89;
                        int32_t l_159 = 2L;
                        p_1196->g_161 ^= (p_1196->g_121 , (safe_unary_minus_func_int8_t_s((((((p_1196->g_121 , p_76) || p_76) ^ (((void*)0 != l_153) && ((*p_77) = (((safe_lshift_func_uint8_t_u_s(((*l_156) = p_1196->g_96), 2)) , p_1196->g_121) >= (((((safe_mod_func_int8_t_s_s(1L, p_1196->g_121)) >= 0x6AL) , p_76) , l_159) < p_75))))) , p_1196->g_128) >= l_160))));
                    }
                    (*l_187) = (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_div_func_int64_t_s_s(l_160, (safe_rshift_func_int8_t_s_s(((*l_153) &= ((&p_1196->g_132[9][0][0] == &p_1196->g_132[1][1][0]) <= (safe_lshift_func_int8_t_s_s(0x11L, ((++(*l_176)) & 255UL))))), (p_1196->g_137 <= ((*p_77) = (safe_add_func_uint32_t_u_u(((**l_117) < p_1196->g_137), ((safe_mod_func_int8_t_s_s(((((++p_1196->g_128) >= ((l_160 , p_1196->g_137) && p_76)) & 0x3BBDF83237CEF4F5L) < p_75), (***l_119))) & 0x7D5238762AC07F36L))))))))) , 0x1057L), p_1196->g_121)), 0x043B8F34L)), p_1196->g_88)) || 1L), 0x044FL));
                }
                for (p_1196->g_96 = 0; (p_1196->g_96 >= 0); p_1196->g_96 -= 1)
                { /* block id: 66 */
                    int32_t *l_188 = &l_122;
                    int32_t *l_189 = &p_1196->g_43;
                    int32_t *l_190[3][7][2] = {{{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151}},{{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151}},{{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151},{&p_1196->g_106,&l_151}}};
                    int i, j, k;
                    p_1196->g_193++;
                }
            }
            return p_1196->g_88;
        }
        if ((l_192 = (safe_mod_func_uint16_t_u_u((((*p_77) = (safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((l_150[3][1] == (l_204 = l_150[3][1])) ^ (((0x4F11L && p_75) == p_1196->g_141) , (l_107 == ((safe_sub_func_uint8_t_u_u((+247UL), (p_1196->g_214 ^= (p_1196->g_89 ^= (p_1196->g_132[9][0][0] | ((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((!((safe_sub_func_int16_t_s_s(((*p_77) <= 5UL), (-1L))) != l_107)) , l_107), l_192)), l_107)) == 0x5BL)))))) && p_1196->g_193)))), 4)) != p_75), p_76))) | p_1196->g_121), (-4L)))))
        { /* block id: 77 */
            uint8_t *l_265[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_281 = 0L;
            int i, j;
            for (p_1196->g_128 = 0; (p_1196->g_128 > 20); ++p_1196->g_128)
            { /* block id: 80 */
                uint8_t l_226 = 0UL;
                uint16_t l_231 = 0xCD69L;
                uint16_t *l_233 = &p_1196->g_5;
                int32_t l_234 = 1L;
                (*p_77) = (((safe_lshift_func_int16_t_s_u((((((p_1196->g_128 >= ((void*)0 == p_77)) , (((((*p_77) || (!(((l_234 = (safe_mul_func_uint16_t_u_u(((*l_233) = ((l_232 = (((((((safe_mul_func_int8_t_s_s(((!l_226) , (4L ^ 1L)), ((0L != ((safe_sub_func_int64_t_s_s(1L, 0x05F3529B9CDFA422L)) <= p_1196->g_106)) , p_1196->g_43))) & l_231) , 0L) > p_75) > 0x9524L) & 0x71A3L) == p_75)) , p_76)), p_75))) < 1L) , (*p_77)))) > l_235) <= p_1196->g_106) == p_76)) > p_1196->g_43) && 8UL) , (-1L)), p_76)) | 0x4839B6CCL) >= 0x13612929A0D023A1L);
                for (l_232 = 0; (l_232 <= 0); l_232 += 1)
                { /* block id: 87 */
                    int32_t l_241 = 0x3161F875L;
                    volatile struct S0 *l_272 = (void*)0;
                    int i, j, k;
                    if ((p_1196->g_132[(l_232 + 7)][(l_232 + 1)][l_232] , p_1196->g_132[(l_232 + 4)][l_232][l_232]))
                    { /* block id: 88 */
                        volatile struct S1 **l_237 = (void*)0;
                        volatile struct S1 **l_238 = &p_1196->g_236;
                        int32_t **l_239 = &l_215;
                        (*l_238) = p_1196->g_236;
                        (*p_77) &= (-7L);
                        (*p_77) = 4L;
                        (*l_239) = p_77;
                    }
                    else
                    { /* block id: 93 */
                        int32_t *l_240[5] = {&l_122,&l_122,&l_122,&l_122,&l_122};
                        int i;
                        ++p_1196->g_243;
                        if (p_1196->g_243)
                            goto lbl_246;
                    }
                    for (p_1196->g_96 = 0; (p_1196->g_96 > 23); p_1196->g_96 = safe_add_func_uint16_t_u_u(p_1196->g_96, 9))
                    { /* block id: 99 */
                        int64_t l_255 = 0x1DCF8AAB92349764L;
                        int8_t *l_258 = &l_235;
                        int16_t *l_268 = &p_1196->g_269;
                        int32_t *l_270 = &l_122;
                        (*l_270) ^= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0xA21EL, ((safe_sub_func_int8_t_s_s((l_255 , l_242[4][1]), ((safe_mod_func_int8_t_s_s(((*l_258) ^= p_75), ((safe_div_func_uint64_t_u_u(((safe_div_func_int64_t_s_s(((safe_div_func_uint16_t_u_u(0xAABCL, ((*l_268) = ((l_265[1][3] != l_258) , (((safe_mod_func_int32_t_s_s((p_1196->g_106 | 0x77892577L), 0xDF69DBDDL)) <= l_255) & (*p_77)))))) && 1L), p_75)) >= p_1196->g_132[(l_232 + 4)][l_232][l_232]), 3L)) || p_76))) != 0xF3F14628L))) < p_76))), l_241));
                        l_272 = p_1196->g_271;
                        p_1196->g_106 |= (safe_mul_func_int16_t_s_s(p_1196->g_137, (p_75 | (&p_1196->g_236 != (void*)0))));
                    }
                }
                (*p_77) &= 0x28120CE1L;
                for (p_1196->g_193 = 0; (p_1196->g_193 != 39); p_1196->g_193++)
                { /* block id: 110 */
                    int32_t *l_277 = &l_242[2][2];
                    int32_t **l_278 = (void*)0;
                    int32_t **l_279 = &l_277;
                    p_1196->g_280[0] = (p_77 = ((*l_279) = l_277));
                    return p_1196->g_269;
                }
            }
            if (p_1196->g_269)
                goto lbl_246;
            return l_281;
        }
        else
        { /* block id: 119 */
            uint32_t l_286 = 0UL;
            int64_t *l_301 = &p_1196->g_141;
            uint32_t l_314 = 0x458D0A81L;
            int32_t l_315 = 0L;
            int32_t l_316 = (-1L);
            int8_t *l_351 = (void*)0;
            for (p_1196->g_269 = 22; (p_1196->g_269 == (-11)); --p_1196->g_269)
            { /* block id: 122 */
                int32_t *l_284 = &l_122;
                int32_t *l_285[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_285[i] = (void*)0;
                l_286--;
                if (l_235)
                    goto lbl_246;
            }
            if ((l_286 , l_286))
            { /* block id: 126 */
                int64_t *l_337[8][4] = {{&p_1196->g_141,&p_1196->g_141,&l_107,&l_107},{&p_1196->g_141,&p_1196->g_141,&l_107,&l_107},{&p_1196->g_141,&p_1196->g_141,&l_107,&l_107},{&p_1196->g_141,&p_1196->g_141,&l_107,&l_107},{&p_1196->g_141,&p_1196->g_141,&l_107,&l_107},{&p_1196->g_141,&p_1196->g_141,&l_107,&l_107},{&p_1196->g_141,&p_1196->g_141,&l_107,&l_107},{&p_1196->g_141,&p_1196->g_141,&l_107,&l_107}};
                int32_t l_345 = 0x1DE05E41L;
                int i, j;
                for (p_1196->g_89 = 0; (p_1196->g_89 < 26); ++p_1196->g_89)
                { /* block id: 129 */
                    int32_t **l_291 = (void*)0;
                    int32_t **l_292 = &p_1196->g_280[3];
                    (*l_292) = &p_1196->g_106;
                }
                l_315 &= ((((void*)0 == l_293) , (safe_mul_func_uint8_t_u_u(p_76, ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((((((void*)0 == &l_232) , ((l_301 == &l_107) > (safe_mod_func_int32_t_s_s((0x4AL != ((((((safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((l_242[1][1] , l_314), 6L)) && 0L), p_75)), l_242[4][1])) < (-1L)) || 0x65L) , (void*)0) == (void*)0) > p_75)), (*p_77))))) == p_1196->g_141) , 0x3DD7L), p_1196->g_121)) | p_75), 6)) && 1L)))) | p_76);
                for (p_1196->g_5 = 0; (p_1196->g_5 <= 7); p_1196->g_5 += 1)
                { /* block id: 135 */
                    uint16_t l_317[9][9][3] = {{{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL}},{{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL}},{{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL}},{{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL}},{{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL}},{{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL}},{{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL}},{{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL}},{{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL},{0x9FC5L,0UL,8UL}}};
                    int i, j, k;
                    if (((*p_77) = l_314))
                    { /* block id: 137 */
                        ++l_317[3][0][0];
                        return p_1196->g_243;
                    }
                    else
                    { /* block id: 140 */
                        volatile int32_t **l_323 = (void*)0;
                        volatile int32_t **l_324 = &p_1196->g_321;
                        l_320[8] = (&p_1196->g_121 == (void*)0);
                        (*l_324) = p_1196->g_321;
                    }
                }
                for (l_314 = 0; (l_314 <= 7); l_314 += 1)
                { /* block id: 147 */
                    for (p_1196->g_106 = 7; (p_1196->g_106 >= 0); p_1196->g_106 -= 1)
                    { /* block id: 150 */
                        uint32_t *l_325 = (void*)0;
                        int32_t l_326 = 0x03BA694CL;
                        int8_t *l_346 = &l_235;
                        int i;
                        l_316 &= ((*p_77) = ((void*)0 != l_325));
                        p_1196->g_280[0] = &p_1196->g_43;
                        (*p_77) &= ((l_316 <= (+(l_326 > (safe_lshift_func_int8_t_s_s(((*l_346) ^= (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(0x1DL, 2)) == ((1UL >= (l_337[4][0] != l_337[4][0])) , p_1196->g_121)), 6)), ((((safe_add_func_uint8_t_u_u(255UL, ((safe_mod_func_uint8_t_u_u(((l_344 != p_1196->g_271) || l_345), 0x4EL)) , 6UL))) , p_75) | 0UL) ^ 0x4C9911B011C773F3L))), l_242[3][1]))), 0))))) == l_314);
                        (*l_293) = &p_77;
                    }
                }
            }
            else
            { /* block id: 159 */
                uint64_t l_352 = 0xDE528EB5C6D15E07L;
                l_316 = (*p_77);
                (*p_77) = ((*p_77) >= ((safe_mul_func_uint16_t_u_u((((p_76 > (+247UL)) && l_232) == (((((void*)0 == p_1196->g_349) , l_351) == &p_1196->g_96) && l_352)), 65529UL)) || l_316));
            }
        }
        (*p_77) &= l_107;
    }
    --l_363;
    l_367++;
    return p_1196->g_106;
}


/* ------------------------------------------ */
/* 
 * reads : p_1196->g_95 p_1196->g_5 p_1196->g_88 p_1196->g_96 p_1196->g_106
 * writes: p_1196->g_106
 */
int32_t * func_78(uint64_t  p_79, int32_t * p_80, struct S2 * p_1196)
{ /* block id: 16 */
    int8_t l_94 = 0x7CL;
    uint8_t l_99[9] = {0x01L,0xFDL,0x01L,0x01L,0xFDL,0x01L,0x01L,0xFDL,0x01L};
    uint32_t l_104 = 4294967286UL;
    int32_t *l_105 = &p_1196->g_106;
    int i;
    (*l_105) &= (safe_rshift_func_uint8_t_u_s(p_79, (((((safe_rshift_func_int16_t_s_u(0x7B38L, l_94)) , l_94) , p_1196->g_95[0]) != (void*)0) & (p_79 | (safe_sub_func_int32_t_s_s((l_99[0] < ((((((((safe_mod_func_uint64_t_u_u(((0x4DC9FF6DE5F43C71L < p_79) < p_1196->g_5), 0x001120EAC2F6E581L)) || p_1196->g_88) < 1L) != 0x4DC47558758A71D4L) == 0UL) , l_104) , p_1196->g_96) , (-4L))), 1L))))));
    return p_80;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1197;
    struct S2* p_1196 = &c_1197;
    struct S2 c_1198 = {
        65535UL, // p_1196->g_5
        0x7CL, // p_1196->g_32
        2L, // p_1196->g_43
        {7UL}, // p_1196->g_51
        65535UL, // p_1196->g_88
        9UL, // p_1196->g_89
        0x48L, // p_1196->g_96
        {&p_1196->g_96}, // p_1196->g_95
        (-4L), // p_1196->g_106
        0x696F087C22977FD2L, // p_1196->g_121
        65535UL, // p_1196->g_128
        {{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}}}, // p_1196->g_132
        7UL, // p_1196->g_137
        (-1L), // p_1196->g_141
        {&p_1196->g_141,&p_1196->g_141,&p_1196->g_141,&p_1196->g_141,&p_1196->g_141,&p_1196->g_141,&p_1196->g_141}, // p_1196->g_140
        0xFDAC8820L, // p_1196->g_161
        0xD8B82488L, // p_1196->g_193
        0xC1L, // p_1196->g_214
        (void*)0, // p_1196->g_236
        0x78L, // p_1196->g_243
        (-6L), // p_1196->g_269
        (void*)0, // p_1196->g_271
        {&p_1196->g_43,&p_1196->g_43,&p_1196->g_43,&p_1196->g_43}, // p_1196->g_280
        0x3701D3A4L, // p_1196->g_322
        &p_1196->g_322, // p_1196->g_321
        (void*)0, // p_1196->g_350
        &p_1196->g_350, // p_1196->g_349
        0x7AL, // p_1196->g_366
        0L, // p_1196->g_374
        &p_1196->g_280[0], // p_1196->g_380
        4294967295UL, // p_1196->g_391
        1L, // p_1196->g_398
        {&p_1196->g_398}, // p_1196->g_397
        {0UL,18446744073709551606UL,0x2EEFL,0x496CL,{0x1273016CL,4UL,1L,-1L},0x2F4B7990B5BDC0ABL,-1L,-4L,0x49B941B2L}, // p_1196->g_429
        {0x0F2815A3L,0x87CF5D1FL,0x7F34442F36751C90L,0x22A2AF9BL}, // p_1196->g_446
        {0xA079E0FFL,0x25628F38L,7L,1L}, // p_1196->g_447
        0x96L, // p_1196->g_463
        {5UL,0x9C4EBD6CL,0x1A1E9AED675A7E47L,-8L}, // p_1196->g_471
        {8UL,18446744073709551608UL,1L,0x7932L,{0xD41152DAL,4294967295UL,0L,0x7D0DC458L},-1L,0L,-10L,1L}, // p_1196->g_485
        0UL, // p_1196->g_510
        {(void*)0,(void*)0,(void*)0}, // p_1196->g_514
        {{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L},{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L},{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L},{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L},{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L},{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L},{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L},{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L},{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L},{0x1F70ECD12D269807L,18446744073709551615UL,1L,0x4A01L,{0x8B08613AL,4294967295UL,0x6B3AF600FB38248EL,1L},0x5EB85CDD2C072C97L,0L,-10L,0x0DB680B1L}}, // p_1196->g_537
        {{4UL,0x39A11204BB2FE15CL,-1L,0x20C7L,{0UL,1UL,0L,0x4593E337L},0x0CE2040E7C898E81L,0x299FFF44L,0L,-7L},{4UL,0x39A11204BB2FE15CL,-1L,0x20C7L,{0UL,1UL,0L,0x4593E337L},0x0CE2040E7C898E81L,0x299FFF44L,0L,-7L},{4UL,0x39A11204BB2FE15CL,-1L,0x20C7L,{0UL,1UL,0L,0x4593E337L},0x0CE2040E7C898E81L,0x299FFF44L,0L,-7L}}, // p_1196->g_539
        (void*)0, // p_1196->g_557
        {0xA15F2B1AL,0x444A9698L,0x0FFA182332B9995AL,0L}, // p_1196->g_572
        {{0UL,0xB9EEFE9AL,0L,0L},{0UL,0xB9EEFE9AL,0L,0L},{0UL,0xB9EEFE9AL,0L,0L},{0UL,0xB9EEFE9AL,0L,0L},{0UL,0xB9EEFE9AL,0L,0L},{0UL,0xB9EEFE9AL,0L,0L}}, // p_1196->g_576
        {{18446744073709551608UL,18446744073709551612UL,0x27BAL,1L,{4294967295UL,0UL,7L,1L},0x580953FE2603A478L,0L,9L,0x2FA8769CL},{18446744073709551608UL,18446744073709551612UL,0x27BAL,1L,{4294967295UL,0UL,7L,1L},0x580953FE2603A478L,0L,9L,0x2FA8769CL},{18446744073709551608UL,18446744073709551612UL,0x27BAL,1L,{4294967295UL,0UL,7L,1L},0x580953FE2603A478L,0L,9L,0x2FA8769CL},{18446744073709551608UL,18446744073709551612UL,0x27BAL,1L,{4294967295UL,0UL,7L,1L},0x580953FE2603A478L,0L,9L,0x2FA8769CL},{18446744073709551608UL,18446744073709551612UL,0x27BAL,1L,{4294967295UL,0UL,7L,1L},0x580953FE2603A478L,0L,9L,0x2FA8769CL},{18446744073709551608UL,18446744073709551612UL,0x27BAL,1L,{4294967295UL,0UL,7L,1L},0x580953FE2603A478L,0L,9L,0x2FA8769CL},{18446744073709551608UL,18446744073709551612UL,0x27BAL,1L,{4294967295UL,0UL,7L,1L},0x580953FE2603A478L,0L,9L,0x2FA8769CL},{18446744073709551608UL,18446744073709551612UL,0x27BAL,1L,{4294967295UL,0UL,7L,1L},0x580953FE2603A478L,0L,9L,0x2FA8769CL}}, // p_1196->g_580
        {0x40C986C8L,0UL,7L,-1L}, // p_1196->g_607
        {{0x5B7871B4L,0x5B7871B4L},{0x5B7871B4L,0x5B7871B4L},{0x5B7871B4L,0x5B7871B4L},{0x5B7871B4L,0x5B7871B4L}}, // p_1196->g_614
        {0xFCC5922FL,0UL,0x0251785F250B9BE7L,6L}, // p_1196->g_619
        {5UL,1UL,0x6EECL,8L,{0xA1EC64C6L,4294967295UL,0L,0x7A38848BL},0x40975CC43BC124A6L,0x0D38567CL,0x2EE4L,1L}, // p_1196->g_628
        &p_1196->g_539[0], // p_1196->g_629
        {0xB40AAB5EL,0xCE36A8A1L,1L,0x47771766L}, // p_1196->g_630
        {{0UL,7UL,0x5243L,0x33ECL,{8UL,4294967290UL,0x287C257D5903C8E3L,0x50220C45L},1L,0x44B89B80L,-6L,0x1E856F52L},{0UL,0x200B6405D4DCFCD9L,-8L,0x20A9L,{0x6CEE9156L,0x52CF91DAL,0x2EBF165B49BED26CL,0L},8L,0x0F13DFFCL,0x79E2L,0x574D2395L},{0UL,7UL,0x5243L,0x33ECL,{8UL,4294967290UL,0x287C257D5903C8E3L,0x50220C45L},1L,0x44B89B80L,-6L,0x1E856F52L},{0UL,7UL,0x5243L,0x33ECL,{8UL,4294967290UL,0x287C257D5903C8E3L,0x50220C45L},1L,0x44B89B80L,-6L,0x1E856F52L},{0UL,0x200B6405D4DCFCD9L,-8L,0x20A9L,{0x6CEE9156L,0x52CF91DAL,0x2EBF165B49BED26CL,0L},8L,0x0F13DFFCL,0x79E2L,0x574D2395L},{0UL,7UL,0x5243L,0x33ECL,{8UL,4294967290UL,0x287C257D5903C8E3L,0x50220C45L},1L,0x44B89B80L,-6L,0x1E856F52L}}, // p_1196->g_667
        {0x8C03B44619A2BF86L,0x526538393C5DCE40L,1L,-1L,{4294967288UL,0x5C71B1C4L,1L,0x11E8C9F5L},0L,0x2E105F86L,1L,0x7F1CECF4L}, // p_1196->g_711
        {{0xE24EBC8FFE89FF3FL,0x912719EC834BAB3BL,-6L,1L,{0x15B443CCL,4294967295UL,0x3D168EE6ADCFB47EL,0x437CDA60L},0x304CF8D73D78D0AFL,0x45A3E977L,1L,-1L},{0xE24EBC8FFE89FF3FL,0x912719EC834BAB3BL,-6L,1L,{0x15B443CCL,4294967295UL,0x3D168EE6ADCFB47EL,0x437CDA60L},0x304CF8D73D78D0AFL,0x45A3E977L,1L,-1L},{0xE24EBC8FFE89FF3FL,0x912719EC834BAB3BL,-6L,1L,{0x15B443CCL,4294967295UL,0x3D168EE6ADCFB47EL,0x437CDA60L},0x304CF8D73D78D0AFL,0x45A3E977L,1L,-1L}}, // p_1196->g_712
        &p_1196->g_510, // p_1196->g_734
        &p_1196->g_734, // p_1196->g_733
        &p_1196->g_733, // p_1196->g_732
        {4UL,0xD096AC09L,8L,-3L}, // p_1196->g_735
        {0x4AAD9E4708A932E2L,1UL,0x7F55L,0x68ECL,{5UL,4294967288UL,0x3CE2A6DD9CF99A87L,0L},0x0881D6683EAE4D5AL,-1L,-3L,0x605D252FL}, // p_1196->g_775
        {18446744073709551615UL,1UL,0x68DDL,1L,{0x34DB92B4L,4294967295UL,0x3C9348319D74E8EFL,0x5B5C09E6L},1L,0x0F93883EL,-1L,0x1C36AE47L}, // p_1196->g_776
        &p_1196->g_429.f4.f1, // p_1196->g_778
        0x57CECDC1DA48DE59L, // p_1196->g_795
        1UL, // p_1196->g_811
        0L, // p_1196->g_817
        0x5AL, // p_1196->g_831
        &p_1196->g_429.f2, // p_1196->g_876
        &p_1196->g_876, // p_1196->g_875
        &p_1196->g_875, // p_1196->g_874
        {0L,0L}, // p_1196->g_886
        &p_1196->g_322, // p_1196->g_903
        1UL, // p_1196->g_949
        {{{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}}},{{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}}},{{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}}},{{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}}},{{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}}},{{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}}},{{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}},{{0x7715869DL,0xDDBD3C23L,3L,0x2C8E63BEL},{0x5C8159F0L,4294967286UL,0x15C948F2FBCCED9FL,-7L},{0xC0E8B342L,0UL,0x65E1FE349B42B8D8L,-1L},{0UL,4294967295UL,0L,0x39D4A57AL},{0xC33DFE7DL,0xCE32A4E6L,7L,0L},{0xD65CD204L,0xFA06EC6CL,-1L,0x666F24FBL}}}}, // p_1196->g_956
        {0L,0x160EEDEF333CAB30L,0L,0L,0x160EEDEF333CAB30L,0L}, // p_1196->g_977
        {0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L}, // p_1196->g_1047
        {{{0x81B8F895L,4294967291UL,0x1F21D1BEC59EB8E6L,3L},{0x81B8F895L,4294967291UL,0x1F21D1BEC59EB8E6L,3L}}}, // p_1196->g_1098
        {0x219BE94C35C29AC3L,0xE741387FA8FB5924L,1L,-7L,{0UL,0UL,0x4599B91B72EF9E8AL,1L},0L,0x02FA4FDCL,-1L,0x6D3CD04AL}, // p_1196->g_1137
        {(void*)0,(void*)0}, // p_1196->g_1163
        &p_1196->g_733, // p_1196->g_1179
        &p_1196->g_778, // p_1196->g_1183
        &p_1196->g_1183, // p_1196->g_1182
    };
    c_1197 = c_1198;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1196);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1196->g_5, "p_1196->g_5", print_hash_value);
    transparent_crc(p_1196->g_32, "p_1196->g_32", print_hash_value);
    transparent_crc(p_1196->g_43, "p_1196->g_43", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1196->g_51[i], "p_1196->g_51[i]", print_hash_value);

    }
    transparent_crc(p_1196->g_88, "p_1196->g_88", print_hash_value);
    transparent_crc(p_1196->g_89, "p_1196->g_89", print_hash_value);
    transparent_crc(p_1196->g_96, "p_1196->g_96", print_hash_value);
    transparent_crc(p_1196->g_106, "p_1196->g_106", print_hash_value);
    transparent_crc(p_1196->g_121, "p_1196->g_121", print_hash_value);
    transparent_crc(p_1196->g_128, "p_1196->g_128", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1196->g_132[i][j][k], "p_1196->g_132[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1196->g_137, "p_1196->g_137", print_hash_value);
    transparent_crc(p_1196->g_141, "p_1196->g_141", print_hash_value);
    transparent_crc(p_1196->g_161, "p_1196->g_161", print_hash_value);
    transparent_crc(p_1196->g_193, "p_1196->g_193", print_hash_value);
    transparent_crc(p_1196->g_214, "p_1196->g_214", print_hash_value);
    transparent_crc(p_1196->g_243, "p_1196->g_243", print_hash_value);
    transparent_crc(p_1196->g_269, "p_1196->g_269", print_hash_value);
    transparent_crc(p_1196->g_322, "p_1196->g_322", print_hash_value);
    transparent_crc(p_1196->g_366, "p_1196->g_366", print_hash_value);
    transparent_crc(p_1196->g_374, "p_1196->g_374", print_hash_value);
    transparent_crc(p_1196->g_391, "p_1196->g_391", print_hash_value);
    transparent_crc(p_1196->g_398, "p_1196->g_398", print_hash_value);
    transparent_crc(p_1196->g_429.f0, "p_1196->g_429.f0", print_hash_value);
    transparent_crc(p_1196->g_429.f1, "p_1196->g_429.f1", print_hash_value);
    transparent_crc(p_1196->g_429.f2, "p_1196->g_429.f2", print_hash_value);
    transparent_crc(p_1196->g_429.f3, "p_1196->g_429.f3", print_hash_value);
    transparent_crc(p_1196->g_429.f4.f0, "p_1196->g_429.f4.f0", print_hash_value);
    transparent_crc(p_1196->g_429.f4.f1, "p_1196->g_429.f4.f1", print_hash_value);
    transparent_crc(p_1196->g_429.f4.f2, "p_1196->g_429.f4.f2", print_hash_value);
    transparent_crc(p_1196->g_429.f4.f3, "p_1196->g_429.f4.f3", print_hash_value);
    transparent_crc(p_1196->g_429.f5, "p_1196->g_429.f5", print_hash_value);
    transparent_crc(p_1196->g_429.f6, "p_1196->g_429.f6", print_hash_value);
    transparent_crc(p_1196->g_429.f7, "p_1196->g_429.f7", print_hash_value);
    transparent_crc(p_1196->g_429.f8, "p_1196->g_429.f8", print_hash_value);
    transparent_crc(p_1196->g_446.f0, "p_1196->g_446.f0", print_hash_value);
    transparent_crc(p_1196->g_446.f1, "p_1196->g_446.f1", print_hash_value);
    transparent_crc(p_1196->g_446.f2, "p_1196->g_446.f2", print_hash_value);
    transparent_crc(p_1196->g_446.f3, "p_1196->g_446.f3", print_hash_value);
    transparent_crc(p_1196->g_447.f0, "p_1196->g_447.f0", print_hash_value);
    transparent_crc(p_1196->g_447.f1, "p_1196->g_447.f1", print_hash_value);
    transparent_crc(p_1196->g_447.f2, "p_1196->g_447.f2", print_hash_value);
    transparent_crc(p_1196->g_447.f3, "p_1196->g_447.f3", print_hash_value);
    transparent_crc(p_1196->g_463, "p_1196->g_463", print_hash_value);
    transparent_crc(p_1196->g_471.f0, "p_1196->g_471.f0", print_hash_value);
    transparent_crc(p_1196->g_471.f1, "p_1196->g_471.f1", print_hash_value);
    transparent_crc(p_1196->g_471.f2, "p_1196->g_471.f2", print_hash_value);
    transparent_crc(p_1196->g_471.f3, "p_1196->g_471.f3", print_hash_value);
    transparent_crc(p_1196->g_485.f0, "p_1196->g_485.f0", print_hash_value);
    transparent_crc(p_1196->g_485.f1, "p_1196->g_485.f1", print_hash_value);
    transparent_crc(p_1196->g_485.f2, "p_1196->g_485.f2", print_hash_value);
    transparent_crc(p_1196->g_485.f3, "p_1196->g_485.f3", print_hash_value);
    transparent_crc(p_1196->g_485.f4.f0, "p_1196->g_485.f4.f0", print_hash_value);
    transparent_crc(p_1196->g_485.f4.f1, "p_1196->g_485.f4.f1", print_hash_value);
    transparent_crc(p_1196->g_485.f4.f2, "p_1196->g_485.f4.f2", print_hash_value);
    transparent_crc(p_1196->g_485.f4.f3, "p_1196->g_485.f4.f3", print_hash_value);
    transparent_crc(p_1196->g_485.f5, "p_1196->g_485.f5", print_hash_value);
    transparent_crc(p_1196->g_485.f6, "p_1196->g_485.f6", print_hash_value);
    transparent_crc(p_1196->g_485.f7, "p_1196->g_485.f7", print_hash_value);
    transparent_crc(p_1196->g_485.f8, "p_1196->g_485.f8", print_hash_value);
    transparent_crc(p_1196->g_510, "p_1196->g_510", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1196->g_537[i].f0, "p_1196->g_537[i].f0", print_hash_value);
        transparent_crc(p_1196->g_537[i].f1, "p_1196->g_537[i].f1", print_hash_value);
        transparent_crc(p_1196->g_537[i].f2, "p_1196->g_537[i].f2", print_hash_value);
        transparent_crc(p_1196->g_537[i].f3, "p_1196->g_537[i].f3", print_hash_value);
        transparent_crc(p_1196->g_537[i].f4.f0, "p_1196->g_537[i].f4.f0", print_hash_value);
        transparent_crc(p_1196->g_537[i].f4.f1, "p_1196->g_537[i].f4.f1", print_hash_value);
        transparent_crc(p_1196->g_537[i].f4.f2, "p_1196->g_537[i].f4.f2", print_hash_value);
        transparent_crc(p_1196->g_537[i].f4.f3, "p_1196->g_537[i].f4.f3", print_hash_value);
        transparent_crc(p_1196->g_537[i].f5, "p_1196->g_537[i].f5", print_hash_value);
        transparent_crc(p_1196->g_537[i].f6, "p_1196->g_537[i].f6", print_hash_value);
        transparent_crc(p_1196->g_537[i].f7, "p_1196->g_537[i].f7", print_hash_value);
        transparent_crc(p_1196->g_537[i].f8, "p_1196->g_537[i].f8", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1196->g_539[i].f0, "p_1196->g_539[i].f0", print_hash_value);
        transparent_crc(p_1196->g_539[i].f1, "p_1196->g_539[i].f1", print_hash_value);
        transparent_crc(p_1196->g_539[i].f2, "p_1196->g_539[i].f2", print_hash_value);
        transparent_crc(p_1196->g_539[i].f3, "p_1196->g_539[i].f3", print_hash_value);
        transparent_crc(p_1196->g_539[i].f4.f0, "p_1196->g_539[i].f4.f0", print_hash_value);
        transparent_crc(p_1196->g_539[i].f4.f1, "p_1196->g_539[i].f4.f1", print_hash_value);
        transparent_crc(p_1196->g_539[i].f4.f2, "p_1196->g_539[i].f4.f2", print_hash_value);
        transparent_crc(p_1196->g_539[i].f4.f3, "p_1196->g_539[i].f4.f3", print_hash_value);
        transparent_crc(p_1196->g_539[i].f5, "p_1196->g_539[i].f5", print_hash_value);
        transparent_crc(p_1196->g_539[i].f6, "p_1196->g_539[i].f6", print_hash_value);
        transparent_crc(p_1196->g_539[i].f7, "p_1196->g_539[i].f7", print_hash_value);
        transparent_crc(p_1196->g_539[i].f8, "p_1196->g_539[i].f8", print_hash_value);

    }
    transparent_crc(p_1196->g_572.f0, "p_1196->g_572.f0", print_hash_value);
    transparent_crc(p_1196->g_572.f1, "p_1196->g_572.f1", print_hash_value);
    transparent_crc(p_1196->g_572.f2, "p_1196->g_572.f2", print_hash_value);
    transparent_crc(p_1196->g_572.f3, "p_1196->g_572.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1196->g_576[i].f0, "p_1196->g_576[i].f0", print_hash_value);
        transparent_crc(p_1196->g_576[i].f1, "p_1196->g_576[i].f1", print_hash_value);
        transparent_crc(p_1196->g_576[i].f2, "p_1196->g_576[i].f2", print_hash_value);
        transparent_crc(p_1196->g_576[i].f3, "p_1196->g_576[i].f3", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1196->g_580[i].f0, "p_1196->g_580[i].f0", print_hash_value);
        transparent_crc(p_1196->g_580[i].f1, "p_1196->g_580[i].f1", print_hash_value);
        transparent_crc(p_1196->g_580[i].f2, "p_1196->g_580[i].f2", print_hash_value);
        transparent_crc(p_1196->g_580[i].f3, "p_1196->g_580[i].f3", print_hash_value);
        transparent_crc(p_1196->g_580[i].f4.f0, "p_1196->g_580[i].f4.f0", print_hash_value);
        transparent_crc(p_1196->g_580[i].f4.f1, "p_1196->g_580[i].f4.f1", print_hash_value);
        transparent_crc(p_1196->g_580[i].f4.f2, "p_1196->g_580[i].f4.f2", print_hash_value);
        transparent_crc(p_1196->g_580[i].f4.f3, "p_1196->g_580[i].f4.f3", print_hash_value);
        transparent_crc(p_1196->g_580[i].f5, "p_1196->g_580[i].f5", print_hash_value);
        transparent_crc(p_1196->g_580[i].f6, "p_1196->g_580[i].f6", print_hash_value);
        transparent_crc(p_1196->g_580[i].f7, "p_1196->g_580[i].f7", print_hash_value);
        transparent_crc(p_1196->g_580[i].f8, "p_1196->g_580[i].f8", print_hash_value);

    }
    transparent_crc(p_1196->g_607.f0, "p_1196->g_607.f0", print_hash_value);
    transparent_crc(p_1196->g_607.f1, "p_1196->g_607.f1", print_hash_value);
    transparent_crc(p_1196->g_607.f2, "p_1196->g_607.f2", print_hash_value);
    transparent_crc(p_1196->g_607.f3, "p_1196->g_607.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1196->g_614[i][j], "p_1196->g_614[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1196->g_619.f0, "p_1196->g_619.f0", print_hash_value);
    transparent_crc(p_1196->g_619.f1, "p_1196->g_619.f1", print_hash_value);
    transparent_crc(p_1196->g_619.f2, "p_1196->g_619.f2", print_hash_value);
    transparent_crc(p_1196->g_619.f3, "p_1196->g_619.f3", print_hash_value);
    transparent_crc(p_1196->g_628.f0, "p_1196->g_628.f0", print_hash_value);
    transparent_crc(p_1196->g_628.f1, "p_1196->g_628.f1", print_hash_value);
    transparent_crc(p_1196->g_628.f2, "p_1196->g_628.f2", print_hash_value);
    transparent_crc(p_1196->g_628.f3, "p_1196->g_628.f3", print_hash_value);
    transparent_crc(p_1196->g_628.f4.f0, "p_1196->g_628.f4.f0", print_hash_value);
    transparent_crc(p_1196->g_628.f4.f1, "p_1196->g_628.f4.f1", print_hash_value);
    transparent_crc(p_1196->g_628.f4.f2, "p_1196->g_628.f4.f2", print_hash_value);
    transparent_crc(p_1196->g_628.f4.f3, "p_1196->g_628.f4.f3", print_hash_value);
    transparent_crc(p_1196->g_628.f5, "p_1196->g_628.f5", print_hash_value);
    transparent_crc(p_1196->g_628.f6, "p_1196->g_628.f6", print_hash_value);
    transparent_crc(p_1196->g_628.f7, "p_1196->g_628.f7", print_hash_value);
    transparent_crc(p_1196->g_628.f8, "p_1196->g_628.f8", print_hash_value);
    transparent_crc(p_1196->g_630.f0, "p_1196->g_630.f0", print_hash_value);
    transparent_crc(p_1196->g_630.f1, "p_1196->g_630.f1", print_hash_value);
    transparent_crc(p_1196->g_630.f2, "p_1196->g_630.f2", print_hash_value);
    transparent_crc(p_1196->g_630.f3, "p_1196->g_630.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1196->g_667[i].f0, "p_1196->g_667[i].f0", print_hash_value);
        transparent_crc(p_1196->g_667[i].f1, "p_1196->g_667[i].f1", print_hash_value);
        transparent_crc(p_1196->g_667[i].f2, "p_1196->g_667[i].f2", print_hash_value);
        transparent_crc(p_1196->g_667[i].f3, "p_1196->g_667[i].f3", print_hash_value);
        transparent_crc(p_1196->g_667[i].f4.f0, "p_1196->g_667[i].f4.f0", print_hash_value);
        transparent_crc(p_1196->g_667[i].f4.f1, "p_1196->g_667[i].f4.f1", print_hash_value);
        transparent_crc(p_1196->g_667[i].f4.f2, "p_1196->g_667[i].f4.f2", print_hash_value);
        transparent_crc(p_1196->g_667[i].f4.f3, "p_1196->g_667[i].f4.f3", print_hash_value);
        transparent_crc(p_1196->g_667[i].f5, "p_1196->g_667[i].f5", print_hash_value);
        transparent_crc(p_1196->g_667[i].f6, "p_1196->g_667[i].f6", print_hash_value);
        transparent_crc(p_1196->g_667[i].f7, "p_1196->g_667[i].f7", print_hash_value);
        transparent_crc(p_1196->g_667[i].f8, "p_1196->g_667[i].f8", print_hash_value);

    }
    transparent_crc(p_1196->g_711.f0, "p_1196->g_711.f0", print_hash_value);
    transparent_crc(p_1196->g_711.f1, "p_1196->g_711.f1", print_hash_value);
    transparent_crc(p_1196->g_711.f2, "p_1196->g_711.f2", print_hash_value);
    transparent_crc(p_1196->g_711.f3, "p_1196->g_711.f3", print_hash_value);
    transparent_crc(p_1196->g_711.f4.f0, "p_1196->g_711.f4.f0", print_hash_value);
    transparent_crc(p_1196->g_711.f4.f1, "p_1196->g_711.f4.f1", print_hash_value);
    transparent_crc(p_1196->g_711.f4.f2, "p_1196->g_711.f4.f2", print_hash_value);
    transparent_crc(p_1196->g_711.f4.f3, "p_1196->g_711.f4.f3", print_hash_value);
    transparent_crc(p_1196->g_711.f5, "p_1196->g_711.f5", print_hash_value);
    transparent_crc(p_1196->g_711.f6, "p_1196->g_711.f6", print_hash_value);
    transparent_crc(p_1196->g_711.f7, "p_1196->g_711.f7", print_hash_value);
    transparent_crc(p_1196->g_711.f8, "p_1196->g_711.f8", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1196->g_712[i].f0, "p_1196->g_712[i].f0", print_hash_value);
        transparent_crc(p_1196->g_712[i].f1, "p_1196->g_712[i].f1", print_hash_value);
        transparent_crc(p_1196->g_712[i].f2, "p_1196->g_712[i].f2", print_hash_value);
        transparent_crc(p_1196->g_712[i].f3, "p_1196->g_712[i].f3", print_hash_value);
        transparent_crc(p_1196->g_712[i].f4.f0, "p_1196->g_712[i].f4.f0", print_hash_value);
        transparent_crc(p_1196->g_712[i].f4.f1, "p_1196->g_712[i].f4.f1", print_hash_value);
        transparent_crc(p_1196->g_712[i].f4.f2, "p_1196->g_712[i].f4.f2", print_hash_value);
        transparent_crc(p_1196->g_712[i].f4.f3, "p_1196->g_712[i].f4.f3", print_hash_value);
        transparent_crc(p_1196->g_712[i].f5, "p_1196->g_712[i].f5", print_hash_value);
        transparent_crc(p_1196->g_712[i].f6, "p_1196->g_712[i].f6", print_hash_value);
        transparent_crc(p_1196->g_712[i].f7, "p_1196->g_712[i].f7", print_hash_value);
        transparent_crc(p_1196->g_712[i].f8, "p_1196->g_712[i].f8", print_hash_value);

    }
    transparent_crc(p_1196->g_735.f0, "p_1196->g_735.f0", print_hash_value);
    transparent_crc(p_1196->g_735.f1, "p_1196->g_735.f1", print_hash_value);
    transparent_crc(p_1196->g_735.f2, "p_1196->g_735.f2", print_hash_value);
    transparent_crc(p_1196->g_735.f3, "p_1196->g_735.f3", print_hash_value);
    transparent_crc(p_1196->g_775.f0, "p_1196->g_775.f0", print_hash_value);
    transparent_crc(p_1196->g_775.f1, "p_1196->g_775.f1", print_hash_value);
    transparent_crc(p_1196->g_775.f2, "p_1196->g_775.f2", print_hash_value);
    transparent_crc(p_1196->g_775.f3, "p_1196->g_775.f3", print_hash_value);
    transparent_crc(p_1196->g_775.f4.f0, "p_1196->g_775.f4.f0", print_hash_value);
    transparent_crc(p_1196->g_775.f4.f1, "p_1196->g_775.f4.f1", print_hash_value);
    transparent_crc(p_1196->g_775.f4.f2, "p_1196->g_775.f4.f2", print_hash_value);
    transparent_crc(p_1196->g_775.f4.f3, "p_1196->g_775.f4.f3", print_hash_value);
    transparent_crc(p_1196->g_775.f5, "p_1196->g_775.f5", print_hash_value);
    transparent_crc(p_1196->g_775.f6, "p_1196->g_775.f6", print_hash_value);
    transparent_crc(p_1196->g_775.f7, "p_1196->g_775.f7", print_hash_value);
    transparent_crc(p_1196->g_775.f8, "p_1196->g_775.f8", print_hash_value);
    transparent_crc(p_1196->g_776.f0, "p_1196->g_776.f0", print_hash_value);
    transparent_crc(p_1196->g_776.f1, "p_1196->g_776.f1", print_hash_value);
    transparent_crc(p_1196->g_776.f2, "p_1196->g_776.f2", print_hash_value);
    transparent_crc(p_1196->g_776.f3, "p_1196->g_776.f3", print_hash_value);
    transparent_crc(p_1196->g_776.f4.f0, "p_1196->g_776.f4.f0", print_hash_value);
    transparent_crc(p_1196->g_776.f4.f1, "p_1196->g_776.f4.f1", print_hash_value);
    transparent_crc(p_1196->g_776.f4.f2, "p_1196->g_776.f4.f2", print_hash_value);
    transparent_crc(p_1196->g_776.f4.f3, "p_1196->g_776.f4.f3", print_hash_value);
    transparent_crc(p_1196->g_776.f5, "p_1196->g_776.f5", print_hash_value);
    transparent_crc(p_1196->g_776.f6, "p_1196->g_776.f6", print_hash_value);
    transparent_crc(p_1196->g_776.f7, "p_1196->g_776.f7", print_hash_value);
    transparent_crc(p_1196->g_776.f8, "p_1196->g_776.f8", print_hash_value);
    transparent_crc(p_1196->g_795, "p_1196->g_795", print_hash_value);
    transparent_crc(p_1196->g_811, "p_1196->g_811", print_hash_value);
    transparent_crc(p_1196->g_817, "p_1196->g_817", print_hash_value);
    transparent_crc(p_1196->g_831, "p_1196->g_831", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1196->g_886[i], "p_1196->g_886[i]", print_hash_value);

    }
    transparent_crc(p_1196->g_949, "p_1196->g_949", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1196->g_956[i][j][k].f0, "p_1196->g_956[i][j][k].f0", print_hash_value);
                transparent_crc(p_1196->g_956[i][j][k].f1, "p_1196->g_956[i][j][k].f1", print_hash_value);
                transparent_crc(p_1196->g_956[i][j][k].f2, "p_1196->g_956[i][j][k].f2", print_hash_value);
                transparent_crc(p_1196->g_956[i][j][k].f3, "p_1196->g_956[i][j][k].f3", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1196->g_977[i], "p_1196->g_977[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1196->g_1047[i], "p_1196->g_1047[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1196->g_1098[i][j].f0, "p_1196->g_1098[i][j].f0", print_hash_value);
            transparent_crc(p_1196->g_1098[i][j].f1, "p_1196->g_1098[i][j].f1", print_hash_value);
            transparent_crc(p_1196->g_1098[i][j].f2, "p_1196->g_1098[i][j].f2", print_hash_value);
            transparent_crc(p_1196->g_1098[i][j].f3, "p_1196->g_1098[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(p_1196->g_1137.f0, "p_1196->g_1137.f0", print_hash_value);
    transparent_crc(p_1196->g_1137.f1, "p_1196->g_1137.f1", print_hash_value);
    transparent_crc(p_1196->g_1137.f2, "p_1196->g_1137.f2", print_hash_value);
    transparent_crc(p_1196->g_1137.f3, "p_1196->g_1137.f3", print_hash_value);
    transparent_crc(p_1196->g_1137.f4.f0, "p_1196->g_1137.f4.f0", print_hash_value);
    transparent_crc(p_1196->g_1137.f4.f1, "p_1196->g_1137.f4.f1", print_hash_value);
    transparent_crc(p_1196->g_1137.f4.f2, "p_1196->g_1137.f4.f2", print_hash_value);
    transparent_crc(p_1196->g_1137.f4.f3, "p_1196->g_1137.f4.f3", print_hash_value);
    transparent_crc(p_1196->g_1137.f5, "p_1196->g_1137.f5", print_hash_value);
    transparent_crc(p_1196->g_1137.f6, "p_1196->g_1137.f6", print_hash_value);
    transparent_crc(p_1196->g_1137.f7, "p_1196->g_1137.f7", print_hash_value);
    transparent_crc(p_1196->g_1137.f8, "p_1196->g_1137.f8", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
