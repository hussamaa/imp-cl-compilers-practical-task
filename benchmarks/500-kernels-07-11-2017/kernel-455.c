// -g 87,97,1 -l 87,1,1
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


// Seed: 2021749824

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint64_t  f1;
   volatile uint16_t  f2;
   uint32_t  f3;
   volatile int16_t  f4;
   int32_t  f5;
   int64_t  f6;
   volatile uint16_t  f7;
};

union U1 {
   int64_t  f0;
   uint16_t  f1;
   volatile int8_t * f2;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile int8_t g_47[9][4][6];
    volatile int8_t * volatile g_46;
    int8_t g_53;
    int8_t *g_52;
    uint64_t g_69;
    int32_t g_94;
    uint32_t g_96;
    uint16_t g_105;
    uint64_t g_109[6][9];
    uint64_t *g_108;
    int16_t g_127;
    uint16_t g_164;
    uint8_t g_167;
    uint32_t g_169;
    int16_t *g_215;
    int16_t **g_214;
    uint32_t g_220[3];
    int16_t g_241;
    int32_t g_244;
    uint16_t g_246;
    int8_t g_251;
    uint64_t g_252;
    int64_t g_388[5];
    int64_t g_390;
    volatile int64_t g_394;
    volatile int64_t * volatile g_393;
    volatile int64_t * volatile *g_392;
    int16_t g_409;
    uint32_t g_410;
    int32_t *g_415;
    int32_t g_423;
    int8_t g_472;
    uint32_t g_475[1];
    volatile int32_t *g_478;
    int32_t ** volatile g_480;
    uint32_t g_483;
    volatile struct S0 g_506[8][6];
    volatile uint16_t g_515;
    union U1 g_520;
    union U1 * volatile g_519;
    union U1 * volatile * volatile g_521[4];
    int32_t * volatile g_539;
    int32_t **g_543[1];
    uint16_t g_579;
    volatile struct S0 g_603;
    uint16_t g_632;
    volatile struct S0 g_681;
    struct S0 g_729;
    int32_t g_730;
    uint8_t g_734;
    int16_t **g_746;
    volatile struct S0 g_761;
    struct S0 g_763;
    struct S0 g_778;
    struct S0 g_779;
    union U1 *g_794;
    union U1 **g_793;
    uint32_t g_819[7][4][5];
    uint16_t g_833;
    volatile struct S0 *g_858;
    uint16_t g_880;
    struct S0 g_909[7][3][1];
    struct S0 * volatile g_910[10];
    struct S0 * volatile g_911;
    int32_t * volatile g_923;
    struct S0 g_946;
    uint32_t *g_953[7];
    int64_t g_962;
    int32_t ** volatile g_990;
    int64_t g_1018;
    int32_t ** volatile g_1024;
    int32_t ** volatile g_1070;
    int32_t ** volatile g_1071;
    int32_t *g_1215;
    int32_t ** volatile g_1214[3][2][9];
    int32_t ** volatile g_1216;
    struct S0 g_1227[8][2][7];
    uint8_t g_1292;
    volatile struct S0 g_1325[8];
    int32_t ** volatile g_1337;
    int32_t ** volatile g_1338;
    struct S0 g_1340;
    uint16_t g_1352;
    uint32_t g_1374;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S2 * p_1394);
int32_t  func_19(int32_t  p_20, uint16_t  p_21, uint64_t  p_22, uint64_t  p_23, struct S2 * p_1394);
int32_t  func_24(int16_t  p_25, int16_t  p_26, int8_t * p_27, struct S2 * p_1394);
uint16_t  func_30(int32_t  p_31, struct S2 * p_1394);
int16_t  func_32(union U1  p_33, struct S2 * p_1394);
union U1  func_38(uint32_t  p_39, int8_t  p_40, int16_t  p_41, struct S2 * p_1394);
uint32_t  func_48(int8_t * p_49, int32_t * p_50, uint64_t  p_51, struct S2 * p_1394);
int32_t * func_54(int8_t * p_55, int32_t  p_56, uint32_t  p_57, struct S2 * p_1394);
uint64_t * func_80(int8_t * p_81, uint8_t  p_82, int32_t * p_83, int32_t * p_84, int64_t  p_85, struct S2 * p_1394);
int8_t * func_86(uint32_t  p_87, int8_t * p_88, uint32_t  p_89, int8_t  p_90, struct S2 * p_1394);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1394->g_3 p_1394->g_46 p_1394->g_52 p_1394->g_53 p_1394->g_69 p_1394->g_96 p_1394->g_105 p_1394->g_108 p_1394->g_109 p_1394->g_94 p_1394->g_127 p_1394->g_164 p_1394->g_169 p_1394->g_214 p_1394->g_167 p_1394->g_220 p_1394->g_246 p_1394->g_252 p_1394->g_472 p_1394->g_475 p_1394->g_480 p_1394->g_483 p_1394->g_415 p_1394->g_423 p_1394->g_392 p_1394->g_393 p_1394->g_506 p_1394->g_390 p_1394->g_47 p_1394->g_515 p_1394->g_519 p_1394->g_394 p_1394->g_520.f0 p_1394->g_215 p_1394->g_539 p_1394->g_520 p_1394->g_579 p_1394->g_632 p_1394->g_729.f2 p_1394->g_778.f7 p_1394->g_778.f6 p_1394->g_241 p_1394->g_779.f6 p_1394->g_761.f6 p_1394->g_858 p_1394->g_880 p_1394->g_729.f3 p_1394->g_778.f5 p_1394->g_819 p_1394->g_746 p_1394->g_779.f4 p_1394->g_761.f1 p_1394->g_779.f5 p_1394->g_763.f3 p_1394->g_909 p_1394->g_911 p_1394->g_923 p_1394->g_778.f1 p_1394->g_729.f0 p_1394->g_729.f1 p_1394->g_946 p_1394->g_730 p_1394->g_990 p_1394->g_409 p_1394->g_1018 p_1394->g_729.f5 p_1394->g_1024 p_1394->g_794 p_1394->g_388 p_1394->g_734 p_1394->g_763.f5 p_1394->g_1071 p_1394->g_833 p_1394->g_244 p_1394->g_962 p_1394->g_603.f0 p_1394->g_603.f7 p_1394->g_778.f0 p_1394->g_763.f6 p_1394->g_761.f7 p_1394->g_1216 p_1394->g_729 p_1394->g_1215 p_1394->g_779.f1 p_1394->g_793 p_1394->g_761.f4 p_1394->g_1292 p_1394->g_778.f2 p_1394->g_1227.f5 p_1394->g_1227.f4 p_1394->g_1325 p_1394->g_1340 p_1394->g_779.f3 p_1394->g_1352 p_1394->g_1374 p_1394->g_761.f2
 * writes: p_1394->g_3 p_1394->g_2 p_1394->g_69 p_1394->g_96 p_1394->g_105 p_1394->g_109 p_1394->g_127 p_1394->g_108 p_1394->g_94 p_1394->g_164 p_1394->g_167 p_1394->g_220 p_1394->g_246 p_1394->g_252 p_1394->g_241 p_1394->g_415 p_1394->g_410 p_1394->g_475 p_1394->g_478 p_1394->g_483 p_1394->g_506 p_1394->g_390 p_1394->g_515 p_1394->g_53 p_1394->g_543 p_1394->g_169 p_1394->g_579 p_1394->g_603 p_1394->g_632 p_1394->g_251 p_1394->g_472 p_1394->g_819 p_1394->g_729 p_1394->g_730 p_1394->g_423 p_1394->g_763 p_1394->g_953 p_1394->g_909.f6 p_1394->g_779.f6 p_1394->g_734 p_1394->g_778.f5 p_1394->g_244 p_1394->g_946.f3 p_1394->g_833 p_1394->g_1215 p_1394->g_1227 p_1394->g_946.f1 p_1394->g_521
 */
uint16_t  func_1(struct S2 * p_1394)
{ /* block id: 4 */
    uint8_t l_7[1];
    int32_t *l_8[5][3][4] = {{{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3}},{{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3}},{{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3}},{{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3}},{{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3},{(void*)0,(void*)0,&p_1394->g_3,&p_1394->g_3}}};
    uint8_t l_13[6] = {0x4FL,0x4FL,0x4FL,0x4FL,0x4FL,0x4FL};
    uint16_t *l_832 = &p_1394->g_833;
    int8_t *l_834 = (void*)0;
    int16_t l_1136 = 0L;
    uint64_t l_1179 = 0x9FA0CD32A348B9FAL;
    uint8_t l_1255 = 0UL;
    int8_t **l_1267 = &l_834;
    int8_t ***l_1266 = &l_1267;
    uint32_t l_1298 = 0x1AE992D6L;
    int32_t *l_1331 = &p_1394->g_730;
    uint32_t **l_1385 = &p_1394->g_953[2];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_7[i] = 0xE1L;
lbl_1198:
    for (p_1394->g_3 = 0; (p_1394->g_3 != (-5)); --p_1394->g_3)
    { /* block id: 7 */
        int32_t l_6 = 0x6418A527L;
        l_6 = 0x664FD9E2L;
        if (p_1394->g_3)
            continue;
    }
lbl_1234:
    p_1394->g_2 = l_7[0];
    for (p_1394->g_3 = 4; (p_1394->g_3 > 29); p_1394->g_3++)
    { /* block id: 14 */
        int32_t *l_16 = &p_1394->g_3;
        int32_t l_1104 = 1L;
        uint16_t l_1105 = 1UL;
        int64_t l_1108 = 0x03C360D2AA5159ACL;
        int8_t **l_1130 = (void*)0;
        uint32_t l_1178 = 0xE411F49AL;
        uint32_t l_1181 = 1UL;
        int64_t *l_1190 = &p_1394->g_962;
        int8_t l_1281 = 0x43L;
        union U1 **l_1343 = (void*)0;
        uint64_t l_1390[6][2][5] = {{{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL},{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL}},{{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL},{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL}},{{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL},{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL}},{{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL},{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL}},{{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL},{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL}},{{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL},{0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL,0x019DFBB8EC5982BBL}}};
        int i, j, k;
        if ((l_1104 |= ((safe_add_func_int16_t_s_s(((*p_1394->g_215) = (l_13[4] , (((safe_rshift_func_uint8_t_u_s(255UL, (&p_1394->g_3 == l_16))) & ((safe_add_func_uint32_t_u_u(p_1394->g_3, func_19(func_24((safe_div_func_int32_t_s_s((p_1394->g_3 ^ func_30(p_1394->g_3, p_1394)), (((l_832 == &p_1394->g_833) | 0x0ACFL) , p_1394->g_779.f6))), (*l_16), l_834, p_1394), (*l_16), p_1394->g_244, p_1394->g_962, p_1394))) || (*l_16))) , (*p_1394->g_215)))), 65535UL)) ^ p_1394->g_946.f3)))
        { /* block id: 567 */
            l_1105++;
        }
        else
        { /* block id: 569 */
            uint64_t l_1111 = 0UL;
            int32_t l_1171 = 0L;
            int16_t l_1187 = 0x594BL;
            int64_t **l_1196 = &l_1190;
            int64_t ***l_1195[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1197 = 0x57212970L;
            uint8_t l_1237 = 0UL;
            int i;
            l_1108 = (*l_16);
            for (p_1394->g_169 = (-28); (p_1394->g_169 < 41); ++p_1394->g_169)
            { /* block id: 573 */
                int32_t l_1118[2];
                uint64_t l_1131 = 1UL;
                int8_t l_1203 = 0x1BL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1118[i] = (-9L);
                l_1104 |= l_1111;
                for (p_1394->g_778.f5 = 4; (p_1394->g_778.f5 < 18); p_1394->g_778.f5 = safe_add_func_uint8_t_u_u(p_1394->g_778.f5, 9))
                { /* block id: 577 */
                    int32_t *l_1127 = &p_1394->g_244;
                    int16_t **l_1132 = &p_1394->g_215;
                    uint8_t *l_1133 = (void*)0;
                    uint8_t *l_1134 = &l_7[0];
                    int32_t *l_1135 = &p_1394->g_763.f5;
                    int64_t l_1137[6] = {6L,(-1L),6L,6L,(-1L),6L};
                    int32_t l_1180 = 0x1FCBF33AL;
                    int32_t ***l_1182 = &p_1394->g_543[0];
                    int i;
                    if (((((*l_16) | (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((l_1118[1] > ((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((*l_1135) = ((((*l_1134) = (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((((p_1394->g_632 , l_1111) , ((*l_1127) = p_1394->g_506[1][5].f4)) , (safe_mod_func_int64_t_s_s((**p_1394->g_392), p_1394->g_778.f6))) ^ ((((((((*l_16) > ((void*)0 == l_1130)) >= (-5L)) || p_1394->g_220[2]) && 0x41L) ^ l_1131) , l_1132) != &p_1394->g_215)), 7)), 0L))) < l_1118[0]) && 255UL)) , l_1136) & (*p_1394->g_108)), p_1394->g_946.f3)), p_1394->g_105)) , l_1137[2])) <= p_1394->g_819[6][1][4]) < (*l_16)), 0x140E9E710E96750FL)), 0x64L))) , p_1394->g_1018) == p_1394->g_632))
                    { /* block id: 581 */
                        uint32_t l_1138[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1138[i] = 5UL;
                        l_1138[0] &= 0x4756149FL;
                    }
                    else
                    { /* block id: 583 */
                        uint32_t *l_1159 = (void*)0;
                        uint32_t *l_1160 = &p_1394->g_483;
                        int32_t l_1176 = 0x779467B5L;
                        int16_t *l_1177 = &l_1136;
                        l_1180 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((~((**p_1394->g_214) != (((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((l_1104 |= (safe_mod_func_uint32_t_u_u(((((*l_1177) = ((safe_add_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((l_1118[1] , ((safe_div_func_uint32_t_u_u((((*l_1160)++) , (safe_mul_func_int8_t_s_s((&p_1394->g_880 != ((!((((*l_1134) = (((safe_mul_func_uint16_t_u_u((18446744073709551614UL ^ (safe_mul_func_uint8_t_u_u((((((safe_sub_func_uint8_t_u_u(((0x31912E8D6D3D2F7BL ^ (((l_1171 ^ (*l_16)) < ((safe_sub_func_uint8_t_u_u(p_1394->g_603.f7, (safe_rshift_func_int16_t_s_s(l_1111, (**p_1394->g_214))))) < p_1394->g_778.f0)) < l_1176)) > l_1171), (*p_1394->g_52))) , 0L) <= 6L) , 1UL) ^ p_1394->g_880), p_1394->g_763.f6))), 0x1D68L)) | 0xAD1EL) , (*l_16))) != 1UL) <= 0x70FEL)) , &p_1394->g_515)), 0L))), p_1394->g_169)) < 0x66F7L)), (**p_1394->g_746))) && p_1394->g_761.f7), p_1394->g_779.f6)) <= 0x132EL)) | (*l_16)) != 18446744073709551615UL), l_1178))) == p_1394->g_109[1][6]), l_1137[0])), 5L)), (*l_16))), p_1394->g_94)) != l_1179) == (*p_1394->g_108)))) > (*l_16)), l_1118[1])), (**p_1394->g_746)));
                        l_1181 = (-1L);
                        l_1180 = (l_1197 &= ((((l_1182 == (void*)0) & (!((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((*p_1394->g_215) == l_1187) , (safe_rshift_func_int8_t_s_s((l_1190 != (*p_1394->g_392)), 5))), 7)), (**p_1394->g_746))) , (safe_mod_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((&p_1394->g_392 != l_1195[4]) > l_1171), (-2L))), l_1131))))) <= l_1171) ^ l_1176));
                        (*p_1394->g_539) ^= l_1118[1];
                    }
                    if ((*l_16))
                        break;
                    if (p_1394->g_244)
                        goto lbl_1198;
                    for (p_1394->g_946.f3 = (-2); (p_1394->g_946.f3 <= 60); p_1394->g_946.f3 = safe_add_func_uint16_t_u_u(p_1394->g_946.f3, 1))
                    { /* block id: 598 */
                        int32_t l_1201 = 0x5C556076L;
                        int32_t l_1202 = 1L;
                        (*p_1394->g_539) ^= (*l_16);
                        l_1202 = l_1201;
                    }
                }
                (*p_1394->g_923) |= (l_1118[1] == l_1203);
            }
            for (p_1394->g_472 = (-25); (p_1394->g_472 >= (-24)); p_1394->g_472 = safe_add_func_uint64_t_u_u(p_1394->g_472, 7))
            { /* block id: 607 */
                int16_t l_1211[3][7][5] = {{{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L}},{{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L}},{{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L},{0L,0L,0x7295L,0x3F2EL,0x3D53L}}};
                int32_t *l_1213 = (void*)0;
                int32_t l_1219 = 6L;
                uint64_t l_1222[2][2] = {{0x5A0F7CB02BACD50FL,0x5A0F7CB02BACD50FL},{0x5A0F7CB02BACD50FL,0x5A0F7CB02BACD50FL}};
                int i, j, k;
                for (p_1394->g_164 = 1; (p_1394->g_164 <= 8); p_1394->g_164 += 1)
                { /* block id: 610 */
                    int8_t l_1208[3];
                    int32_t l_1212 = 0L;
                    int32_t **l_1225 = &l_8[3][2][2];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1208[i] = 2L;
                    for (p_1394->g_833 = 0; (p_1394->g_833 <= 8); p_1394->g_833 += 1)
                    { /* block id: 613 */
                        int32_t l_1217 = (-3L);
                        int32_t l_1218 = 0x13331BDBL;
                        int32_t l_1220 = 0L;
                        int32_t l_1221 = 0x1924CEBBL;
                        int i;
                        l_1212 &= ((safe_mod_func_int32_t_s_s(l_1208[0], (safe_div_func_int64_t_s_s(0x2BE2CC63A75718E8L, (**p_1394->g_392))))) , (l_1211[2][6][0] , l_1211[2][3][3]));
                        (*p_1394->g_1216) = ((*p_1394->g_1071) = l_1213);
                        l_1222[0][0]--;
                    }
                    (*l_1225) = (void*)0;
                    for (p_1394->g_729.f5 = 0; (p_1394->g_729.f5 <= 4); p_1394->g_729.f5 += 1)
                    { /* block id: 622 */
                        struct S0 *l_1226[9] = {&p_1394->g_779,(void*)0,&p_1394->g_779,&p_1394->g_779,(void*)0,&p_1394->g_779,&p_1394->g_779,(void*)0,&p_1394->g_779};
                        int i;
                        p_1394->g_1227[4][0][4] = (*p_1394->g_911);
                    }
                }
                for (p_1394->g_246 = 4; (p_1394->g_246 <= 2); p_1394->g_246 = safe_sub_func_uint64_t_u_u(p_1394->g_246, 2))
                { /* block id: 628 */
                    int32_t *l_1233 = &p_1394->g_730;
                    for (p_1394->g_946.f1 = 17; (p_1394->g_946.f1 == 48); p_1394->g_946.f1 = safe_add_func_int64_t_s_s(p_1394->g_946.f1, 1))
                    { /* block id: 631 */
                        int32_t *l_1232 = &l_1219;
                        l_1233 = l_1232;
                        if ((*p_1394->g_539))
                            break;
                        if (l_1111)
                            break;
                    }
                }
                if ((*l_16))
                    continue;
                for (p_1394->g_167 = 0; (p_1394->g_167 <= 0); p_1394->g_167 += 1)
                { /* block id: 640 */
                    if (p_1394->g_241)
                        goto lbl_1234;
                }
            }
            for (p_1394->g_423 = 0; (p_1394->g_423 <= 21); p_1394->g_423 = safe_add_func_int8_t_s_s(p_1394->g_423, 6))
            { /* block id: 646 */
                ++l_1237;
            }
        }
        for (p_1394->g_241 = 0; (p_1394->g_241 >= (-24)); p_1394->g_241 = safe_sub_func_int32_t_s_s(p_1394->g_241, 7))
        { /* block id: 652 */
            int32_t *l_1244 = (void*)0;
            uint32_t l_1293 = 4294967295UL;
            int32_t l_1320 = (-10L);
            uint16_t l_1366[2][10][8] = {{{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L}},{{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L},{0xCFFEL,65526UL,0xD3C2L,65526UL,0xCFFEL,0xCFFEL,65526UL,0xD3C2L}}};
            union U1 ***l_1393[10][8] = {{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343},{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343},{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343},{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343},{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343},{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343},{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343},{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343},{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343},{&l_1343,&l_1343,(void*)0,&p_1394->g_793,&l_1343,&p_1394->g_793,(void*)0,&l_1343}};
            int i, j, k;
            for (p_1394->g_164 = 0; (p_1394->g_164 == 54); ++p_1394->g_164)
            { /* block id: 655 */
                int32_t **l_1245 = &p_1394->g_1215;
                (*l_1245) = (l_1244 = l_8[4][0][0]);
            }
            l_16 = (*p_1394->g_1216);
            if ((safe_add_func_uint8_t_u_u(0xAAL, (((((*p_1394->g_52) = (((safe_rshift_func_int16_t_s_u((*p_1394->g_215), 9)) ^ (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_1394->g_779.f1, ((2UL < (((**p_1394->g_214) & (*p_1394->g_215)) != (((&l_1179 != l_1190) != (0x6CL == (*p_1394->g_46))) == (*p_1394->g_108)))) & (**p_1394->g_214)))), p_1394->g_472))) >= (*p_1394->g_108))) | 0xB7L) != 1UL) >= 0xEFL))))
            { /* block id: 661 */
                int32_t l_1254[4];
                uint32_t l_1258 = 4294967295UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_1254[i] = 1L;
                ++l_1255;
                ++l_1258;
            }
            else
            { /* block id: 664 */
                int64_t l_1261 = 0x5202D28F284EC45CL;
                struct S0 *l_1294 = &p_1394->g_1227[4][1][1];
                int32_t *l_1322 = &p_1394->g_730;
                int32_t l_1353[5] = {0x2CDA3340L,0x2CDA3340L,0x2CDA3340L,0x2CDA3340L,0x2CDA3340L};
                int16_t l_1356[2][6];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_1356[i][j] = 9L;
                }
                if (l_1261)
                    break;
                if ((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(l_1261, (**p_1394->g_214))), (((**p_1394->g_746) , l_1266) == (void*)0))))
                { /* block id: 666 */
                    uint8_t l_1278 = 0xFCL;
                    volatile struct S0 *l_1297 = &p_1394->g_603;
                    if (((safe_sub_func_uint64_t_u_u(((*p_1394->g_108)--), (((safe_add_func_int8_t_s_s((((p_1394->g_779.f6 && (**p_1394->g_746)) , (((safe_mod_func_uint64_t_u_u((l_1278 | (((safe_sub_func_uint16_t_u_u(((!(-8L)) , (l_1281 , 0xD7CCL)), ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((((**p_1394->g_793) , p_1394->g_167) ^ (safe_add_func_uint16_t_u_u(p_1394->g_909[4][0][0].f1, l_1261))) , p_1394->g_761.f4), (**p_1394->g_214))), 65535UL)), 0x88ABL)), p_1394->g_1292)) > l_1261))) >= p_1394->g_778.f1) <= l_1261)), 0x85E71D86DE81AD3CL)) | l_1293) && p_1394->g_632)) & (*p_1394->g_52)), (*p_1394->g_52))) && l_1278) || (*p_1394->g_923)))) && p_1394->g_778.f2))
                    { /* block id: 668 */
                        struct S0 *l_1295[2][1];
                        uint16_t l_1296 = 65535UL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1295[i][j] = &p_1394->g_763;
                        }
                        l_1295[0][0] = l_1294;
                        if ((*p_1394->g_923))
                            break;
                        if (l_1293)
                            break;
                        (*p_1394->g_539) = l_1296;
                    }
                    else
                    { /* block id: 673 */
                        l_1297 = &p_1394->g_681;
                        if (l_1298)
                            continue;
                        if ((*p_1394->g_539))
                            continue;
                    }
                    if (l_1261)
                        break;
                    for (p_1394->g_729.f6 = 0; (p_1394->g_729.f6 <= 2); p_1394->g_729.f6++)
                    { /* block id: 681 */
                        int32_t *l_1317[4] = {&p_1394->g_244,&p_1394->g_244,&p_1394->g_244,&p_1394->g_244};
                        int32_t **l_1318 = &l_1317[1];
                        int32_t l_1319 = 0L;
                        int i;
                        l_1104 = ((*p_1394->g_108) >= (-3L));
                        l_1320 |= (((((safe_add_func_uint32_t_u_u((((((safe_div_func_int8_t_s_s((*p_1394->g_52), (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((*p_1394->g_393) && (l_1278 <= ((**p_1394->g_214) , (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((**p_1394->g_746), (l_1261 , (safe_rshift_func_int8_t_s_s((p_1394->g_251 = ((((*p_1394->g_794) , &p_1394->g_244) != ((*l_1318) = l_1317[1])) , l_1261)), (*p_1394->g_52)))))), l_1319)) && 0x88L) & (*p_1394->g_52))))), (*p_1394->g_52))), 5)))) | p_1394->g_1227[4][0][4].f5) < 1L) >= p_1394->g_778.f5) > l_1319), 4294967295UL)) && p_1394->g_96) && 0x68857076L) || p_1394->g_1227[4][0][4].f4) && p_1394->g_506[1][5].f1);
                        if (l_1319)
                            break;
                    }
                    for (p_1394->g_244 = 0; (p_1394->g_244 <= 0); p_1394->g_244 += 1)
                    { /* block id: 690 */
                        int32_t *l_1321 = &p_1394->g_3;
                        int32_t *l_1324 = &p_1394->g_729.f5;
                        int32_t **l_1323 = &l_1324;
                        l_1322 = l_1321;
                        (*p_1394->g_539) = (((*l_1323) = l_16) != (void*)0);
                    }
                }
                else
                { /* block id: 695 */
                    uint32_t l_1330 = 0x41576DBAL;
                    struct S0 *l_1335 = &p_1394->g_909[4][0][0];
                    int32_t l_1354 = 0L;
                    int16_t l_1355 = 1L;
                    int32_t l_1357 = 1L;
                    int32_t l_1358 = (-8L);
                    uint32_t l_1360 = 0x1A61B39AL;
                    uint8_t l_1369 = 0xA5L;
                    (*l_1294) = p_1394->g_1325[7];
                    if (((*l_1322) ^= (safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(l_1330, (-7L))), p_1394->g_946.f3))))
                    { /* block id: 698 */
                        int32_t *l_1332 = (void*)0;
                        struct S0 **l_1333[2][9] = {{&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294},{&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294}};
                        struct S0 *l_1334 = (void*)0;
                        int i, j;
                        l_1332 = l_1331;
                        l_1335 = (l_1334 = &p_1394->g_909[0][0][0]);
                    }
                    else
                    { /* block id: 702 */
                        int32_t **l_1336 = (void*)0;
                        int32_t **l_1339 = &l_1244;
                        int32_t l_1359 = 0x12871244L;
                        (*l_1339) = l_8[2][2][0];
                        l_1320 ^= (((*l_1322) <= ((p_1394->g_1340 , ((safe_add_func_uint32_t_u_u(((l_1343 != &p_1394->g_794) >= p_1394->g_778.f7), (safe_sub_func_uint16_t_u_u((!p_1394->g_94), (((safe_add_func_uint64_t_u_u((((p_1394->g_241 , ((safe_rshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u(p_1394->g_472, (((*p_1394->g_108) & (*p_1394->g_108)) < (**p_1394->g_746)))) | p_1394->g_779.f3) , p_1394->g_1292), (*p_1394->g_215))) >= 0x7700FD31L)) > (*l_1322)) == 0L), 0x5E177772C0325D1CL)) >= l_1178) || 9L))))) > p_1394->g_1352)) != (-1L))) > (*l_1322));
                        ++l_1360;
                        if ((*l_1322))
                            continue;
                    }
                    for (l_1358 = 14; (l_1358 >= 10); l_1358 = safe_sub_func_int32_t_s_s(l_1358, 9))
                    { /* block id: 710 */
                        int32_t l_1365 = 0x0AB2AB14L;
                        uint8_t *l_1388 = (void*)0;
                        uint8_t *l_1389[7][4][7] = {{{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]}},{{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]}},{{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]}},{{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]}},{{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]}},{{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]}},{{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]},{&l_1369,&l_1255,&l_13[4],(void*)0,&l_1255,(void*)0,&l_13[4]}}};
                        int i, j, k;
                        --l_1366[1][0][6];
                        l_1369--;
                        (*l_1331) = (safe_lshift_func_int16_t_s_s(((**p_1394->g_214) = (((*p_1394->g_393) & (l_1365 >= (l_1365 ^ p_1394->g_1374))) || (safe_rshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(l_1354, (safe_mod_func_int16_t_s_s(l_1178, 0x2464L)))) != ((safe_mul_func_uint8_t_u_u((p_1394->g_167 = ((safe_sub_func_int16_t_s_s((l_1385 != ((safe_mul_func_uint8_t_u_u(((*p_1394->g_52) | p_1394->g_761.f2), 0UL)) , &p_1394->g_953[4])), 65533UL)) < p_1394->g_819[0][0][0])), l_1360)) < 0x1DBBL)), 15)))), 10));
                        (*p_1394->g_923) = (l_1365 &= l_1330);
                    }
                    --l_1390[1][0][2];
                }
            }
            p_1394->g_521[2] = (void*)0;
        }
    }
    return p_1394->g_47[6][3][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1394->g_108 p_1394->g_109 p_1394->g_603.f0 p_1394->g_94
 * writes: p_1394->g_94
 */
int32_t  func_19(int32_t  p_20, uint16_t  p_21, uint64_t  p_22, uint64_t  p_23, struct S2 * p_1394)
{ /* block id: 560 */
    uint8_t l_1097 = 0UL;
    union U1 **l_1098 = (void*)0;
    int32_t l_1099[5][6][7] = {{{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L}},{{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L}},{{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L}},{{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L}},{{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L},{0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L,0x4C5E6212L,0x25456054L,0x25456054L}}};
    uint64_t **l_1101 = &p_1394->g_108;
    uint64_t ***l_1100 = &l_1101;
    int32_t l_1102[8] = {0x788AB09BL,0x788AB09BL,0x788AB09BL,0x788AB09BL,0x788AB09BL,0x788AB09BL,0x788AB09BL,0x788AB09BL};
    int32_t *l_1103 = &p_1394->g_94;
    int i, j, k;
    (*l_1103) &= (l_1102[4] = (((((safe_div_func_int64_t_s_s(((*p_1394->g_108) != (((0x05EBL == 0x5464L) ^ (p_23 , l_1097)) , (l_1099[3][2][4] |= ((void*)0 != l_1098)))), l_1097)) | ((&l_1097 != (void*)0) ^ 2L)) , l_1100) != &l_1101) <= p_1394->g_603.f0));
    return (*l_1103);
}


/* ------------------------------------------ */
/* 
 * reads : p_1394->g_761.f6 p_1394->g_858 p_1394->g_632 p_1394->g_108 p_1394->g_109 p_1394->g_880 p_1394->g_729.f3 p_1394->g_778.f5 p_1394->g_475 p_1394->g_819 p_1394->g_52 p_1394->g_127 p_1394->g_390 p_1394->g_46 p_1394->g_47 p_1394->g_164 p_1394->g_746 p_1394->g_215 p_1394->g_779.f4 p_1394->g_761.f1 p_1394->g_214 p_1394->g_3 p_1394->g_53 p_1394->g_779.f5 p_1394->g_96 p_1394->g_763.f3 p_1394->g_393 p_1394->g_394 p_1394->g_909 p_1394->g_911 p_1394->g_923 p_1394->g_220 p_1394->g_778.f1 p_1394->g_392 p_1394->g_729.f0 p_1394->g_729.f1 p_1394->g_423 p_1394->g_946 p_1394->g_69 p_1394->g_105 p_1394->g_94 p_1394->g_169 p_1394->g_167 p_1394->g_246 p_1394->g_252 p_1394->g_730 p_1394->g_990 p_1394->g_480 p_1394->g_415 p_1394->g_779.f6 p_1394->g_409 p_1394->g_1018 p_1394->g_729.f5 p_1394->g_506.f5 p_1394->g_579 p_1394->g_1024 p_1394->g_794 p_1394->g_520 p_1394->g_388 p_1394->g_734 p_1394->g_763.f5 p_1394->g_472 p_1394->g_1071 p_1394->g_833
 * writes: p_1394->g_632 p_1394->g_53 p_1394->g_819 p_1394->g_96 p_1394->g_729 p_1394->g_730 p_1394->g_109 p_1394->g_127 p_1394->g_423 p_1394->g_763 p_1394->g_69 p_1394->g_105 p_1394->g_108 p_1394->g_94 p_1394->g_164 p_1394->g_167 p_1394->g_220 p_1394->g_246 p_1394->g_252 p_1394->g_241 p_1394->g_953 p_1394->g_909.f6 p_1394->g_415 p_1394->g_779.f6 p_1394->g_579 p_1394->g_734 p_1394->g_472
 */
int32_t  func_24(int16_t  p_25, int16_t  p_26, int8_t * p_27, struct S2 * p_1394)
{ /* block id: 459 */
    int32_t l_881 = 0x7B7ADF0BL;
    int16_t l_884[5][10] = {{0x124EL,9L,0x30E3L,0x707AL,0x30E3L,9L,0x124EL,0x639DL,(-8L),(-8L)},{0x124EL,9L,0x30E3L,0x707AL,0x30E3L,9L,0x124EL,0x639DL,(-8L),(-8L)},{0x124EL,9L,0x30E3L,0x707AL,0x30E3L,9L,0x124EL,0x639DL,(-8L),(-8L)},{0x124EL,9L,0x30E3L,0x707AL,0x30E3L,9L,0x124EL,0x639DL,(-8L),(-8L)},{0x124EL,9L,0x30E3L,0x707AL,0x30E3L,9L,0x124EL,0x639DL,(-8L),(-8L)}};
    int32_t l_885 = 0x08BD2484L;
    int16_t l_903 = 0x7B33L;
    int32_t l_904[8][8][4] = {{{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L}},{{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L}},{{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L}},{{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L}},{{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L}},{{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L}},{{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L}},{{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L},{0x26EAE12DL,0x5DBAC251L,0x2BB665CFL,7L}}};
    uint64_t *l_908 = &p_1394->g_252;
    int8_t **l_939[5];
    struct S0 *l_947 = &p_1394->g_763;
    uint32_t *l_950 = &p_1394->g_169;
    uint32_t *l_952 = &p_1394->g_483;
    uint32_t **l_951[4];
    uint32_t *l_954[5] = {&p_1394->g_483,&p_1394->g_483,&p_1394->g_483,&p_1394->g_483,&p_1394->g_483};
    int64_t l_955 = (-10L);
    uint16_t l_956 = 0x3A61L;
    int32_t *l_957 = &l_885;
    int8_t l_958 = 0x02L;
    int16_t l_964[7][7] = {{(-1L),0x2F6AL,0x696DL,0x179CL,0x696DL,0x2F6AL,(-1L)},{(-1L),0x2F6AL,0x696DL,0x179CL,0x696DL,0x2F6AL,(-1L)},{(-1L),0x2F6AL,0x696DL,0x179CL,0x696DL,0x2F6AL,(-1L)},{(-1L),0x2F6AL,0x696DL,0x179CL,0x696DL,0x2F6AL,(-1L)},{(-1L),0x2F6AL,0x696DL,0x179CL,0x696DL,0x2F6AL,(-1L)},{(-1L),0x2F6AL,0x696DL,0x179CL,0x696DL,0x2F6AL,(-1L)},{(-1L),0x2F6AL,0x696DL,0x179CL,0x696DL,0x2F6AL,(-1L)}};
    int64_t l_965 = 0L;
    uint64_t l_967 = 3UL;
    union U1 l_983 = {3L};
    uint8_t *l_994 = &p_1394->g_167;
    uint8_t **l_993 = &l_994;
    uint32_t l_1066 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_939[i] = &p_1394->g_52;
    for (i = 0; i < 4; i++)
        l_951[i] = &l_952;
lbl_1004:
    if (p_26)
    { /* block id: 460 */
        uint64_t l_845 = 18446744073709551615UL;
        uint16_t *l_877 = &p_1394->g_632;
        int32_t l_882 = 0x29A0E101L;
        uint32_t *l_883 = &p_1394->g_819[1][3][0];
        int32_t l_886 = 0x1D246303L;
        int32_t l_891 = 0x22337979L;
        int64_t *l_901[3];
        int8_t *l_902[9] = {&p_1394->g_472,&p_1394->g_472,&p_1394->g_472,&p_1394->g_472,&p_1394->g_472,&p_1394->g_472,&p_1394->g_472,&p_1394->g_472,&p_1394->g_472};
        int i;
        for (i = 0; i < 3; i++)
            l_901[i] = &p_1394->g_778.f6;
        l_886 ^= (safe_add_func_int64_t_s_s((l_884[2][7] &= (p_1394->g_761.f6 < (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(4L, (0xDBL && ((safe_mod_func_int32_t_s_s(l_845, ((*l_883) = (safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(((*p_1394->g_52) = ((l_845 ^ (((l_881 = ((safe_add_func_uint16_t_u_u(((+(((safe_mul_func_uint16_t_u_u((((0x63L & ((safe_mul_func_int16_t_s_s((((void*)0 == p_1394->g_858) == ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((--(*l_877)), ((*p_1394->g_108) == 1UL))) > l_845) >= p_1394->g_880), p_25)), 249UL)) && l_845) > 0x7BED214CL) , 0xD9L), 1L)) | l_881) <= 0x319AL), l_845)) < p_1394->g_729.f3) || 0xFCAE1421L) , 0UL), 2)), 0)), (-6L))), l_882)) & p_1394->g_778.f5)), p_25)) , p_26)) < p_26) < 0xD4F7L), p_1394->g_475[0])) , p_26) ^ p_1394->g_819[6][1][4])) != p_25), 0xD75AL)) , l_882)) , p_26) && p_25)) >= l_882)), l_845)), l_882))))) , p_1394->g_127)))) < l_882), l_882)), p_1394->g_390)))), l_885));
        l_904[7][7][0] |= (l_886 & (((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((((l_891 |= ((*p_1394->g_52) = l_881)) & (*p_1394->g_46)) , func_86(p_1394->g_164, func_86((((safe_unary_minus_func_uint32_t_u((((safe_add_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s(((((((l_884[2][9] == ((~((l_881 = (safe_sub_func_int32_t_s_s(l_886, ((l_885 && (*p_1394->g_108)) != (((((*p_1394->g_746) == (*p_1394->g_746)) > p_1394->g_779.f4) && p_1394->g_761.f1) > 1UL))))) >= l_885)) < (-3L))) != 8UL) > (*p_1394->g_108)) == 0xBBC1C160L) && (**p_1394->g_214)) == l_882), p_1394->g_3)), 0x3AD9E45AD80215B7L)) && (*p_1394->g_108)), 4294967286UL)) & 0x01C2B989F32541AAL) ^ (*p_1394->g_52)))) & 0L) , 0xA445E353L), l_902[6], p_1394->g_779.f5, l_903, p_1394), p_1394->g_763.f3, p_26, p_1394)) == &p_1394->g_167), l_885)), l_884[2][7])) ^ 0UL) != l_845));
    }
    else
    { /* block id: 471 */
        uint8_t l_905 = 255UL;
        uint8_t l_912 = 3UL;
        int32_t ***l_924 = &p_1394->g_543[0];
        int32_t l_942[4] = {6L,6L,6L,6L};
        int32_t *l_943 = &l_942[0];
        int32_t *l_944 = &l_881;
        int32_t *l_945 = &p_1394->g_423;
        int i;
        if ((9UL & (*p_1394->g_393)))
        { /* block id: 472 */
            uint32_t l_921[6] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
            int32_t l_922 = 0x4A93A9E6L;
            int i;
            --l_905;
            l_904[0][4][0] ^= ((&p_1394->g_109[1][6] == l_908) || p_26);
            (*p_1394->g_911) = p_1394->g_909[4][0][0];
            (*p_1394->g_923) = (((l_912 || l_912) < (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((**p_1394->g_746), (&p_1394->g_519 != ((l_904[4][7][3] != (l_922 = ((safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((p_25 , (0x236C5714B0C35CFFL >= (-3L))), 4294967286UL)), l_904[7][7][0])) >= l_921[0]))) , (void*)0)))), l_921[0]))) && (*p_1394->g_46));
        }
        else
        { /* block id: 478 */
            int8_t **l_938[2][3];
            int8_t ***l_937 = &l_938[0][0];
            int32_t l_940 = 0x7DA37C84L;
            int32_t ***l_941[7] = {&p_1394->g_543[0],&p_1394->g_543[0],&p_1394->g_543[0],&p_1394->g_543[0],&p_1394->g_543[0],&p_1394->g_543[0],&p_1394->g_543[0]};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_938[i][j] = &p_1394->g_52;
            }
            l_942[3] = (0UL < (p_26 ^= ((**p_1394->g_214) = (((((*p_1394->g_393) && ((*p_1394->g_108) ^= (l_924 == ((p_1394->g_220[2] || (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(6L, ((p_25 , (safe_mul_func_uint16_t_u_u((~((safe_mod_func_uint8_t_u_u(((((p_1394->g_778.f1 ^ (((safe_div_func_uint32_t_u_u(0xDBA5A7C1L, (safe_sub_func_uint16_t_u_u((((*l_937) = &p_1394->g_52) == l_939[3]), p_25)))) != (**p_1394->g_392)) ^ 0x07FDL)) , l_885) , l_940) , 0UL), 4L)) ^ (*p_1394->g_52))), p_1394->g_729.f0))) , 0xDFL))), p_1394->g_729.f1))) , l_941[2])))) || p_25) | (*p_1394->g_52)) < (*p_1394->g_52)))));
        }
        (*l_945) |= ((*l_944) = (~((*l_943) = ((void*)0 == &p_1394->g_96))));
    }
    (*l_947) = p_1394->g_946;
    if ((((p_1394->g_220[2] <= 1L) && ((*l_957) = ((safe_sub_func_int32_t_s_s(1L, (l_950 != l_950))) | (((((p_1394->g_953[0] = func_54(&p_1394->g_53, l_903, ((*p_1394->g_108) <= l_904[7][7][0]), p_1394)) != l_954[0]) > l_955) || p_26) < l_956)))) == l_958))
    { /* block id: 492 */
        int16_t l_959 = (-1L);
        int32_t *l_960 = &l_881;
        int32_t *l_961[7] = {(void*)0,&l_904[7][7][0],(void*)0,(void*)0,&l_904[7][7][0],(void*)0,(void*)0};
        int64_t l_963 = (-2L);
        int32_t l_966 = 0x01BF0800L;
        int8_t ***l_980 = &l_939[4];
        int64_t *l_987 = &p_1394->g_779.f6;
        int64_t **l_986 = &l_987;
        int64_t ***l_988 = &l_986;
        union U1 l_989 = {0L};
        uint64_t **l_1007 = &p_1394->g_108;
        int i;
        l_967--;
        (*l_957) = (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((*l_960) = ((safe_rshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s((safe_div_func_int16_t_s_s((**p_1394->g_214), 0x43D6L)), (l_980 == l_980))) || (safe_mod_func_int32_t_s_s(7L, 0x21C25BD1L))), 2)) >= ((-2L) && ((p_1394->g_909[4][0][0].f6 = (*l_957)) <= (l_983 , (*p_1394->g_108)))))) ^ (*p_1394->g_923)) > p_1394->g_909[4][0][0].f5), 65529UL)), (**p_1394->g_214)));
        (*l_957) = (safe_rshift_func_int16_t_s_s((((*l_988) = l_986) != &p_1394->g_393), 8));
        for (p_1394->g_167 = 0; (p_1394->g_167 <= 4); p_1394->g_167 += 1)
        { /* block id: 501 */
            uint8_t **l_996 = (void*)0;
            int32_t l_1002 = (-7L);
            int8_t **l_1003[4][5][6] = {{{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52}},{{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52}},{{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52}},{{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52},{&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52}}};
            int64_t *l_1022[8][3] = {{&l_963,&l_963,&l_963},{&l_963,&l_963,&l_963},{&l_963,&l_963,&l_963},{&l_963,&l_963,&l_963},{&l_963,&l_963,&l_963},{&l_963,&l_963,&l_963},{&l_963,&l_963,&l_963},{&l_963,&l_963,&l_963}};
            int i, j, k;
            (*p_1394->g_990) = (l_989 , &l_966);
            for (p_1394->g_69 = 1; (p_1394->g_69 <= 4); p_1394->g_69 += 1)
            { /* block id: 505 */
                uint8_t ***l_995[6][7][6] = {{{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993}},{{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993}},{{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993}},{{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993}},{{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993}},{{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993},{&l_993,(void*)0,&l_993,&l_993,(void*)0,&l_993}}};
                int32_t *l_997[4] = {&p_1394->g_423,&p_1394->g_423,&p_1394->g_423,&p_1394->g_423};
                uint32_t **l_1034[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1034[i] = (void*)0;
                if ((safe_sub_func_uint8_t_u_u(((((l_939[p_1394->g_69] == ((~(((l_996 = l_993) == (void*)0) , ((((*p_1394->g_480) != l_997[1]) != (l_884[p_1394->g_167][(p_1394->g_69 + 4)] | (((***l_988) &= (safe_mul_func_uint16_t_u_u((+((p_1394->g_69 == (safe_mod_func_uint8_t_u_u((p_25 & ((*p_1394->g_415) ^ p_26)), l_1002))) , p_26)), p_25))) > (*p_1394->g_108)))) , 0x6B635283L))) , l_1003[3][0][5])) && (*l_957)) == p_1394->g_409) < (-2L)), (*p_1394->g_52))))
                { /* block id: 508 */
                    uint64_t **l_1005 = (void*)0;
                    uint64_t ***l_1006 = &l_1005;
                    int32_t l_1023 = 0x733DDB6CL;
                    int i, j;
                    if (p_1394->g_779.f5)
                        goto lbl_1004;
                    (*p_1394->g_415) &= ((*l_957) = ((((*l_1006) = l_1005) == l_1007) && ((*l_957) >= ((((safe_sub_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(p_26, ((safe_mul_func_int16_t_s_s(((((*l_987) = (safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((~(p_1394->g_1018 | p_25)) , (safe_mul_func_int16_t_s_s((l_884[p_1394->g_69][(p_1394->g_167 + 3)] = (safe_unary_minus_func_int8_t_s((l_1022[0][1] != (*p_1394->g_392))))), (*l_957)))), 6UL)), l_1002))) | p_26) != p_1394->g_729.f5), l_1023)) , (*p_1394->g_215)))) && p_25) >= p_25), l_1002)) , p_1394->g_506[1][5].f5) != p_26) != p_25))));
                }
                else
                { /* block id: 515 */
                    uint32_t *l_1032 = &p_1394->g_763.f0;
                    uint32_t **l_1031[6][9] = {{&l_1032,(void*)0,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,(void*)0,&l_1032},{&l_1032,(void*)0,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,(void*)0,&l_1032},{&l_1032,(void*)0,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,(void*)0,&l_1032},{&l_1032,(void*)0,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,(void*)0,&l_1032},{&l_1032,(void*)0,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,(void*)0,&l_1032},{&l_1032,(void*)0,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,(void*)0,&l_1032}};
                    uint32_t ***l_1033 = &l_1031[5][0];
                    uint32_t ***l_1035 = &l_1034[2];
                    int16_t *l_1046 = (void*)0;
                    int32_t l_1051[4] = {1L,1L,1L,1L};
                    int i, j;
                    for (p_1394->g_579 = 0; (p_1394->g_579 <= 4); p_1394->g_579 += 1)
                    { /* block id: 518 */
                        (*p_1394->g_1024) = (*p_1394->g_990);
                    }
                    (*l_957) |= ((*p_1394->g_923) <= (safe_div_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((((*p_1394->g_215) = (safe_lshift_func_uint16_t_u_u((((((*l_1033) = l_1031[5][0]) != ((*l_1035) = l_1034[2])) & p_25) , ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((*l_960), (((**l_986) = ((65535UL <= (safe_div_func_uint32_t_u_u(((((*p_1394->g_52) <= ((((safe_rshift_func_uint8_t_u_u((p_1394->g_734 = (0x0FCF916A5D0CE2BFL | ((*p_1394->g_794) , p_25))), 5)) | 8UL) ^ 0x54L) <= p_1394->g_109[1][6])) <= 0x1F7C2887L) & 0x43L), p_26))) && (*p_1394->g_415))) != p_25))), (-1L))) && p_1394->g_388[1])), p_26))) != 0x4392L), p_1394->g_632)) , p_26), p_26)));
                    (*l_960) |= (safe_div_func_uint32_t_u_u(((*p_1394->g_746) != (l_1046 = &p_25)), (safe_mul_func_int16_t_s_s((**p_1394->g_214), ((p_1394->g_734--) < ((*l_957) &= ((((**p_1394->g_990) != l_1051[0]) , (*p_1394->g_52)) <= ((safe_mul_func_uint8_t_u_u(((((p_1394->g_763.f5 | (&l_1002 == (void*)0)) , &l_939[3]) == &l_1003[3][0][5]) && (*p_1394->g_108)), 0x3AL)) , p_25))))))));
                }
                for (p_1394->g_763.f3 = 0; (p_1394->g_763.f3 <= 3); p_1394->g_763.f3 += 1)
                { /* block id: 534 */
                    uint32_t l_1055 = 0xA268183AL;
                    int i, j, k;
                    for (p_1394->g_472 = 0; (p_1394->g_472 <= 3); p_1394->g_472 += 1)
                    { /* block id: 537 */
                        int32_t l_1054 = 0x313CF03CL;
                        int i, j, k;
                        ++l_1055;
                    }
                    return l_904[(p_1394->g_69 + 1)][p_1394->g_763.f3][p_1394->g_763.f3];
                }
            }
        }
    }
    else
    { /* block id: 544 */
        int32_t *l_1058 = &p_1394->g_730;
        int32_t *l_1059 = (void*)0;
        int32_t *l_1060 = &l_881;
        int32_t *l_1061 = &l_885;
        int32_t *l_1062 = &l_904[7][7][0];
        int32_t l_1063 = (-1L);
        int32_t *l_1064 = &l_881;
        int32_t *l_1065[10] = {&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881};
        int32_t **l_1069 = &l_1059;
        int i;
        l_1066--;
        (*p_1394->g_1071) = ((*l_1069) = &l_1063);
        for (p_1394->g_472 = 0; (p_1394->g_472 > (-26)); p_1394->g_472 = safe_sub_func_int16_t_s_s(p_1394->g_472, 3))
        { /* block id: 550 */
            union U1 l_1076 = {0x64B1A9DA46800134L};
            int64_t *l_1084[5][7][3] = {{{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390}},{{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390}},{{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390}},{{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390}},{{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390},{&p_1394->g_946.f6,&p_1394->g_520.f0,&p_1394->g_390}}};
            int64_t **l_1083[8] = {(void*)0,&l_1084[4][6][2],(void*)0,(void*)0,&l_1084[4][6][2],(void*)0,(void*)0,&l_1084[4][6][2]};
            int32_t **l_1092 = &l_1058;
            int i, j, k;
            for (l_967 = 2; (l_967 != 14); ++l_967)
            { /* block id: 553 */
                uint8_t l_1093 = 0x19L;
                int32_t *l_1094 = &l_904[6][6][0];
                l_1094 = (*l_1092);
            }
            return p_1394->g_632;
        }
    }
    return p_1394->g_833;
}


/* ------------------------------------------ */
/* 
 * reads : p_1394->g_3 p_1394->g_46 p_1394->g_52 p_1394->g_53 p_1394->g_69 p_1394->g_96 p_1394->g_105 p_1394->g_108 p_1394->g_109 p_1394->g_94 p_1394->g_127 p_1394->g_164 p_1394->g_169 p_1394->g_214 p_1394->g_167 p_1394->g_220 p_1394->g_246 p_1394->g_252 p_1394->g_472 p_1394->g_475 p_1394->g_480 p_1394->g_483 p_1394->g_415 p_1394->g_423 p_1394->g_392 p_1394->g_393 p_1394->g_506 p_1394->g_390 p_1394->g_47 p_1394->g_515 p_1394->g_519 p_1394->g_394 p_1394->g_520.f0 p_1394->g_215 p_1394->g_539 p_1394->g_520 p_1394->g_410 p_1394->g_579 p_1394->g_632 p_1394->g_729.f2 p_1394->g_778.f7 p_1394->g_778.f6 p_1394->g_241
 * writes: p_1394->g_69 p_1394->g_96 p_1394->g_105 p_1394->g_109 p_1394->g_127 p_1394->g_108 p_1394->g_94 p_1394->g_164 p_1394->g_167 p_1394->g_220 p_1394->g_246 p_1394->g_252 p_1394->g_241 p_1394->g_415 p_1394->g_410 p_1394->g_475 p_1394->g_478 p_1394->g_483 p_1394->g_506 p_1394->g_390 p_1394->g_515 p_1394->g_53 p_1394->g_543 p_1394->g_169 p_1394->g_579 p_1394->g_603 p_1394->g_632 p_1394->g_251 p_1394->g_472 p_1394->g_819
 */
uint16_t  func_30(int32_t  p_31, struct S2 * p_1394)
{ /* block id: 15 */
    int8_t *l_58 = &p_1394->g_53;
    int32_t l_59 = 0x413236C2L;
    int32_t *l_414 = &p_1394->g_3;
    int32_t **l_413[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t *l_473 = &p_1394->g_410;
    uint32_t *l_474[4][4] = {{&p_1394->g_475[0],&p_1394->g_475[0],&p_1394->g_475[0],&p_1394->g_475[0]},{&p_1394->g_475[0],&p_1394->g_475[0],&p_1394->g_475[0],&p_1394->g_475[0]},{&p_1394->g_475[0],&p_1394->g_475[0],&p_1394->g_475[0],&p_1394->g_475[0]},{&p_1394->g_475[0],&p_1394->g_475[0],&p_1394->g_475[0],&p_1394->g_475[0]}};
    union U1 l_540 = {0x76FDDD9E407C2034L};
    int32_t l_810 = 0x2E269849L;
    uint16_t *l_828 = (void*)0;
    uint16_t *l_829 = &p_1394->g_246;
    int16_t l_830 = 0x08D8L;
    uint8_t l_831 = 0UL;
    int i, j;
    l_810 ^= ((~((((65533UL & p_1394->g_3) & (p_31 < func_32(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((func_38((p_1394->g_475[0] ^= (safe_div_func_uint64_t_u_u((1L | (safe_add_func_uint32_t_u_u((p_1394->g_46 == (void*)0), ((*l_473) = func_48(p_1394->g_52, (p_1394->g_415 = func_54(l_58, (p_1394->g_3 & l_59), l_59, p_1394)), (*l_414), p_1394))))), p_31))), (*l_414), p_1394->g_53, p_1394) , 1UL), 14)), 1)) , l_540), p_1394))) || (*l_414)) || p_1394->g_729.f2)) != 65526UL);
    l_831 |= (((65530UL >= (((safe_lshift_func_int8_t_s_u(p_31, 5)) == ((p_1394->g_778.f7 >= ((((~(safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u(p_31, p_31)) ^ (l_830 &= ((p_1394->g_819[6][1][4] = p_31) != (((*p_1394->g_108)--) > (((safe_rshift_func_uint16_t_u_u((p_31 || 0x7CL), ((*l_829) = (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((*l_414) || 1UL), (*p_1394->g_52))), 5))))) & (*p_1394->g_52)) || 9UL))))) != p_31), (-1L))), p_31))) <= (*l_414)) < p_31) , (*l_414))) > p_1394->g_778.f6)) , 3L)) | (*l_414)) == p_1394->g_241);
    return (*l_414);
}


/* ------------------------------------------ */
/* 
 * reads : p_1394->g_105 p_1394->g_215 p_1394->g_392 p_1394->g_393 p_1394->g_394 p_1394->g_506.f1 p_1394->g_164 p_1394->g_220 p_1394->g_410 p_1394->g_46 p_1394->g_47 p_1394->g_423 p_1394->g_169 p_1394->g_415 p_1394->g_52 p_1394->g_53 p_1394->g_214 p_1394->g_127 p_1394->g_579 p_1394->g_506 p_1394->g_167 p_1394->g_108 p_1394->g_109 p_1394->g_252 p_1394->g_632
 * writes: p_1394->g_543 p_1394->g_105 p_1394->g_246 p_1394->g_164 p_1394->g_127 p_1394->g_415 p_1394->g_410 p_1394->g_169 p_1394->g_53 p_1394->g_579 p_1394->g_603 p_1394->g_167 p_1394->g_109 p_1394->g_252 p_1394->g_632 p_1394->g_251 p_1394->g_472
 */
int16_t  func_32(union U1  p_33, struct S2 * p_1394)
{ /* block id: 282 */
    int32_t **l_541 = &p_1394->g_415;
    int32_t ***l_542[6] = {&l_541,&l_541,&l_541,&l_541,&l_541,&l_541};
    int64_t l_544 = 0x29E994D2E51C9F50L;
    int64_t **l_562[6];
    int32_t l_566 = 8L;
    uint32_t l_629 = 0x80EE848DL;
    uint8_t l_636 = 7UL;
    uint8_t l_664 = 0x3FL;
    int16_t *l_667 = &p_1394->g_409;
    uint32_t l_669 = 0UL;
    int8_t **l_760 = &p_1394->g_52;
    uint32_t l_807[8][9] = {{4294967291UL,0x46D99224L,0x66465DD6L,0xC192C67CL,0xE57EFF83L,4294967291UL,0xC192C67CL,6UL,0xC192C67CL},{4294967291UL,0x46D99224L,0x66465DD6L,0xC192C67CL,0xE57EFF83L,4294967291UL,0xC192C67CL,6UL,0xC192C67CL},{4294967291UL,0x46D99224L,0x66465DD6L,0xC192C67CL,0xE57EFF83L,4294967291UL,0xC192C67CL,6UL,0xC192C67CL},{4294967291UL,0x46D99224L,0x66465DD6L,0xC192C67CL,0xE57EFF83L,4294967291UL,0xC192C67CL,6UL,0xC192C67CL},{4294967291UL,0x46D99224L,0x66465DD6L,0xC192C67CL,0xE57EFF83L,4294967291UL,0xC192C67CL,6UL,0xC192C67CL},{4294967291UL,0x46D99224L,0x66465DD6L,0xC192C67CL,0xE57EFF83L,4294967291UL,0xC192C67CL,6UL,0xC192C67CL},{4294967291UL,0x46D99224L,0x66465DD6L,0xC192C67CL,0xE57EFF83L,4294967291UL,0xC192C67CL,6UL,0xC192C67CL},{4294967291UL,0x46D99224L,0x66465DD6L,0xC192C67CL,0xE57EFF83L,4294967291UL,0xC192C67CL,6UL,0xC192C67CL}};
    int i, j;
    for (i = 0; i < 6; i++)
        l_562[i] = (void*)0;
    l_544 &= (&p_1394->g_478 == (p_1394->g_543[0] = (p_33.f0 , l_541)));
    for (p_1394->g_105 = 9; (p_1394->g_105 <= 57); p_1394->g_105 = safe_add_func_uint64_t_u_u(p_1394->g_105, 7))
    { /* block id: 287 */
        uint32_t l_561 = 0x1043381CL;
        int32_t l_578 = (-1L);
        for (p_1394->g_246 = 0; (p_1394->g_246 < 4); p_1394->g_246 = safe_add_func_int16_t_s_s(p_1394->g_246, 9))
        { /* block id: 290 */
            uint64_t l_565[1];
            int32_t l_576[6];
            int i;
            for (i = 0; i < 1; i++)
                l_565[i] = 18446744073709551615UL;
            for (i = 0; i < 6; i++)
                l_576[i] = 0x62D35B6AL;
            for (p_1394->g_164 = 0; (p_1394->g_164 <= 2); p_1394->g_164 += 1)
            { /* block id: 293 */
                uint32_t *l_560 = &p_1394->g_220[1];
                uint32_t **l_559 = &l_560;
                int32_t l_567[2][4][7] = {{{0x74C54A1BL,0x1893CB89L,(-1L),0x74C54A1BL,0x58C71C75L,(-1L),(-1L)},{0x74C54A1BL,0x1893CB89L,(-1L),0x74C54A1BL,0x58C71C75L,(-1L),(-1L)},{0x74C54A1BL,0x1893CB89L,(-1L),0x74C54A1BL,0x58C71C75L,(-1L),(-1L)},{0x74C54A1BL,0x1893CB89L,(-1L),0x74C54A1BL,0x58C71C75L,(-1L),(-1L)}},{{0x74C54A1BL,0x1893CB89L,(-1L),0x74C54A1BL,0x58C71C75L,(-1L),(-1L)},{0x74C54A1BL,0x1893CB89L,(-1L),0x74C54A1BL,0x58C71C75L,(-1L),(-1L)},{0x74C54A1BL,0x1893CB89L,(-1L),0x74C54A1BL,0x58C71C75L,(-1L),(-1L)},{0x74C54A1BL,0x1893CB89L,(-1L),0x74C54A1BL,0x58C71C75L,(-1L),(-1L)}}};
                int i, j, k;
                l_567[0][3][2] = (safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((l_566 = (0x4C08FFC2L && (((safe_add_func_int64_t_s_s((((((safe_rshift_func_int8_t_s_u((&p_1394->g_220[p_1394->g_164] != ((*l_559) = &p_1394->g_475[0])), 6)) <= (3L <= (((p_33.f0 , l_561) & ((*p_1394->g_215) = ((void*)0 == l_562[4]))) < (safe_rshift_func_int16_t_s_u(p_33.f0, l_565[0]))))) == 0xE46BE634L) & l_561) , (**p_1394->g_392)), 0x660841DE620F3FDDL)) , 0L) , p_1394->g_506[1][5].f1))), p_1394->g_220[p_1394->g_164])), 5)) & l_561), 0xF6B0L));
                (*l_541) = &l_567[0][0][2];
                for (p_1394->g_410 = 0; (p_1394->g_410 <= 2); p_1394->g_410 += 1)
                { /* block id: 301 */
                    uint32_t *l_572[2];
                    int32_t l_573 = 0L;
                    int32_t l_577[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_572[i] = &p_1394->g_169;
                    for (i = 0; i < 2; i++)
                        l_577[i] = (-2L);
                    if (((-9L) ^ (((((*p_1394->g_52) = (l_576[1] = (((void*)0 == &p_1394->g_169) ^ ((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((*p_1394->g_46), ((p_1394->g_169 &= p_1394->g_423) & l_573))), (0xE9CE7CFCL == p_33.f0))) >= ((((safe_lshift_func_uint16_t_u_s(((*p_1394->g_415) ^ p_33.f0), 14)) != (*p_1394->g_52)) , (**p_1394->g_214)) > p_1394->g_220[2]))))) , (*p_1394->g_52)) & 2UL) > 0UL)))
                    { /* block id: 305 */
                        --p_1394->g_579;
                    }
                    else
                    { /* block id: 307 */
                        l_576[1] = ((**l_541) ^= (-1L));
                    }
                }
                if (p_1394->g_169)
                    goto lbl_806;
                for (l_544 = 0; (l_544 <= 2); l_544 += 1)
                { /* block id: 314 */
                    return p_33.f0;
                }
            }
            for (p_1394->g_127 = (-25); (p_1394->g_127 != 7); p_1394->g_127 = safe_add_func_uint32_t_u_u(p_1394->g_127, 5))
            { /* block id: 320 */
                union U1 l_584 = {0x6FD5C8B92581B317L};
                int64_t *l_598 = &l_544;
                int64_t **l_597[5][5] = {{&l_598,&l_598,&l_598,&l_598,&l_598},{&l_598,&l_598,&l_598,&l_598,&l_598},{&l_598,&l_598,&l_598,&l_598,&l_598},{&l_598,&l_598,&l_598,&l_598,&l_598},{&l_598,&l_598,&l_598,&l_598,&l_598}};
                int32_t l_599 = 0x34B82B11L;
                uint8_t *l_606 = (void*)0;
                uint8_t *l_607 = &p_1394->g_167;
                uint64_t *l_630 = &p_1394->g_252;
                uint16_t *l_631 = &p_1394->g_164;
                int i, j;
                l_599 = ((((l_584 , (safe_sub_func_uint64_t_u_u((+0x52E8D2751DF8B250L), (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((((safe_add_func_uint8_t_u_u((l_578 >= (~((void*)0 == &p_1394->g_475[0]))), 0x01L)) , ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((((&p_1394->g_393 == l_597[2][1]) != 1L) > l_576[2]) != l_578), l_584.f0)) , 0x97L), l_565[0])) & p_1394->g_506[1][5].f1)) , l_578) , (-1L)) >= 0x6C7AL), p_33.f0)), 14))))) == 0L) < 4UL) || 0x6A33L);
                for (p_1394->g_53 = 4; (p_1394->g_53 == 5); p_1394->g_53 = safe_add_func_uint32_t_u_u(p_1394->g_53, 8))
                { /* block id: 324 */
                    volatile struct S0 *l_602[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_602[i][j] = &p_1394->g_506[1][5];
                    }
                    p_1394->g_603 = p_1394->g_506[7][1];
                }
                l_599 = (+(l_565[0] == (safe_sub_func_int64_t_s_s((-1L), (0x20C1L <= (-1L))))));
                if (((((p_33.f0 > ((*l_607) = p_1394->g_167)) ^ (safe_sub_func_int16_t_s_s(p_33.f0, (safe_rshift_func_uint16_t_u_u(((!(((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(((*l_598) = (safe_div_func_uint8_t_u_u(((((safe_div_func_int64_t_s_s((l_599 , ((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s((((*l_631) = (((*l_630) |= ((*p_1394->g_108) = ((safe_unary_minus_func_uint32_t_u(((safe_mod_func_int32_t_s_s(((*p_1394->g_108) > (((p_33.f0 , ((((((p_1394->g_109[4][7] , (void*)0) == (*p_1394->g_392)) & p_33.f0) == p_33.f0) & 0xD5L) != p_33.f0)) || p_33.f0) & (**p_1394->g_214))), l_629)) | p_1394->g_220[2]))) & (*p_1394->g_108)))) >= l_578)) || 1UL), p_1394->g_632)) == l_561) > p_33.f0), 0x0B4AC553L)), 4L)) > p_33.f0)), 0x535ED34C6A6857EFL)) && 0x99L) == p_1394->g_220[0]) , p_33.f0), (*p_1394->g_52)))), p_1394->g_632)), (*p_1394->g_215))) <= 0x2565L) >= (-10L))) != (*p_1394->g_215)), 7))))) <= 0x3D1FD75FL) && p_33.f0))
                { /* block id: 333 */
                    if (l_576[0])
                        break;
                    for (p_1394->g_579 = 0; (p_1394->g_579 <= 0); p_1394->g_579 += 1)
                    { /* block id: 337 */
                        uint32_t l_633 = 0x377DE0AAL;
                        l_633++;
                        l_636--;
                    }
                }
                else
                { /* block id: 341 */
                    return (*p_1394->g_215);
                }
            }
        }
    }
lbl_806:
    for (p_1394->g_632 = 7; (p_1394->g_632 >= 44); ++p_1394->g_632)
    { /* block id: 349 */
        int16_t l_649 = 0x31C0L;
        uint8_t *l_661[2][1];
        int32_t l_662 = 0L;
        int32_t l_663 = 0x0C16462AL;
        int16_t **l_668 = &l_667;
        uint64_t *l_670 = &p_1394->g_252;
        union U1 *l_678[10][2] = {{(void*)0,&p_1394->g_520},{(void*)0,&p_1394->g_520},{(void*)0,&p_1394->g_520},{(void*)0,&p_1394->g_520},{(void*)0,&p_1394->g_520},{(void*)0,&p_1394->g_520},{(void*)0,&p_1394->g_520},{(void*)0,&p_1394->g_520},{(void*)0,&p_1394->g_520},{(void*)0,&p_1394->g_520}};
        uint8_t l_711 = 0x2CL;
        struct S0 *l_748[5][10][4] = {{{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729}},{{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729}},{{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729}},{{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729}},{{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729},{&p_1394->g_729,&p_1394->g_729,&p_1394->g_729,&p_1394->g_729}}};
        uint32_t *l_774[10][3][5] = {{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}},{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}},{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}},{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}},{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}},{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}},{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}},{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}},{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}},{{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3},{&l_629,&p_1394->g_96,&p_1394->g_763.f3,&p_1394->g_729.f0,&p_1394->g_763.f3}}};
        uint32_t **l_773[4];
        int32_t *l_777[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_661[i][j] = (void*)0;
        }
        for (i = 0; i < 4; i++)
            l_773[i] = &l_774[1][2][2];
        for (i = 0; i < 2; i++)
            l_777[i] = &l_566;
        for (p_1394->g_251 = 0; (p_1394->g_251 != (-26)); p_1394->g_251 = safe_sub_func_uint16_t_u_u(p_1394->g_251, 3))
        { /* block id: 352 */
            for (p_1394->g_472 = 3; (p_1394->g_472 >= 0); p_1394->g_472 -= 1)
            { /* block id: 355 */
                return p_33.f0;
            }
        }
    }
    l_807[6][1]--;
    return p_33.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1394->g_164 p_1394->g_480 p_1394->g_252 p_1394->g_483 p_1394->g_475 p_1394->g_415 p_1394->g_423 p_1394->g_3 p_1394->g_392 p_1394->g_393 p_1394->g_506 p_1394->g_390 p_1394->g_69 p_1394->g_96 p_1394->g_47 p_1394->g_515 p_1394->g_519 p_1394->g_394 p_1394->g_220 p_1394->g_52 p_1394->g_53 p_1394->g_520.f0 p_1394->g_214 p_1394->g_215 p_1394->g_108 p_1394->g_539 p_1394->g_520
 * writes: p_1394->g_164 p_1394->g_478 p_1394->g_415 p_1394->g_252 p_1394->g_483 p_1394->g_506 p_1394->g_390 p_1394->g_69 p_1394->g_96 p_1394->g_515 p_1394->g_53 p_1394->g_127 p_1394->g_109 p_1394->g_94
 */
union U1  func_38(uint32_t  p_39, int8_t  p_40, int16_t  p_41, struct S2 * p_1394)
{ /* block id: 229 */
    int16_t l_498 = 5L;
    int32_t l_504 = 0x06064A47L;
    int32_t l_508 = 0x75126967L;
    int8_t l_538 = 3L;
    for (p_1394->g_164 = 21; (p_1394->g_164 != 42); p_1394->g_164 = safe_add_func_uint8_t_u_u(p_1394->g_164, 9))
    { /* block id: 232 */
        int32_t *l_479[3];
        int i;
        for (i = 0; i < 3; i++)
            l_479[i] = &p_1394->g_423;
        p_1394->g_478 = &p_1394->g_2;
        (*p_1394->g_480) = l_479[2];
    }
    for (p_1394->g_252 = 0; (p_1394->g_252 <= 0); p_1394->g_252 += 1)
    { /* block id: 238 */
        uint32_t *l_481 = (void*)0;
        uint32_t *l_482 = &p_1394->g_483;
        int32_t *l_497[3][6][10] = {{{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423}},{{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423}},{{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423},{&p_1394->g_94,&p_1394->g_3,&p_1394->g_423,(void*)0,&p_1394->g_423,&p_1394->g_3,&p_1394->g_94,&p_1394->g_94,(void*)0,&p_1394->g_423}}};
        int32_t **l_505 = &l_497[1][0][1];
        int i, j, k;
        (*l_505) = ((((*l_482)++) , ((safe_unary_minus_func_uint64_t_u(0x78901F33DC35E9DDL)) ^ (safe_sub_func_uint8_t_u_u(1UL, ((safe_mul_func_int16_t_s_s(p_1394->g_475[p_1394->g_252], 0x1E95L)) > ((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((l_498 = (**p_1394->g_480)) || (safe_mul_func_int8_t_s_s((((void*)0 != (*p_1394->g_392)) || (safe_unary_minus_func_int8_t_s(((safe_div_func_int16_t_s_s(l_498, p_40)) == 0UL)))), 0UL))) | l_504), p_40)), 0x4BL)) | l_504), 2)) != p_41)))))) , (void*)0);
        (*l_505) = (*p_1394->g_480);
        for (l_498 = 0; (l_498 >= 0); l_498 -= 1)
        { /* block id: 245 */
            volatile struct S0 *l_507 = &p_1394->g_506[5][1];
            int32_t l_518[7][8] = {{0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L},{0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L},{0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L},{0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L},{0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L},{0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L},{0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L,0x34D470F3L}};
            union U1 * volatile l_523[9] = {&p_1394->g_520,&p_1394->g_520,&p_1394->g_520,&p_1394->g_520,&p_1394->g_520,&p_1394->g_520,&p_1394->g_520,&p_1394->g_520,&p_1394->g_520};
            int i, j;
            if ((**p_1394->g_480))
                break;
            (*l_507) = p_1394->g_506[1][5];
            for (p_1394->g_390 = 0; (p_1394->g_390 <= 2); p_1394->g_390 += 1)
            { /* block id: 250 */
                for (p_1394->g_69 = 0; (p_1394->g_69 <= 0); p_1394->g_69 += 1)
                { /* block id: 253 */
                    (*p_1394->g_480) = (*p_1394->g_480);
                }
                for (p_41 = 0; (p_41 <= 2); p_41 += 1)
                { /* block id: 258 */
                    uint16_t l_509[4][3] = {{0x8A30L,1UL,0x8A30L},{0x8A30L,1UL,0x8A30L},{0x8A30L,1UL,0x8A30L},{0x8A30L,1UL,0x8A30L}};
                    int32_t l_512 = 0x2A8D5DF4L;
                    int32_t l_513[10][10][2] = {{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}},{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}},{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}},{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}},{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}},{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}},{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}},{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}},{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}},{{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L},{(-5L),0x327329E1L}}};
                    int i, j, k;
                    for (p_1394->g_96 = 0; (p_1394->g_96 <= 0); p_1394->g_96 += 1)
                    { /* block id: 261 */
                        int32_t l_514 = (-1L);
                        int i, j, k;
                        --l_509[2][0];
                        if (p_1394->g_47[(p_1394->g_390 + 6)][p_1394->g_252][(p_41 + 2)])
                            continue;
                        p_1394->g_515++;
                    }
                    for (p_39 = 0; (p_39 <= 3); p_39 += 1)
                    { /* block id: 268 */
                        union U1 * volatile *l_522[2][9] = {{&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519},{&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519}};
                        int i, j, k;
                        l_518[2][4] = (0x4AE0L == p_1394->g_47[l_498][(p_1394->g_390 + 1)][(p_1394->g_390 + 2)]);
                        (*l_505) = (*p_1394->g_480);
                        l_523[2] = p_1394->g_519;
                    }
                }
            }
        }
    }
    (*p_1394->g_539) = (!(safe_add_func_uint64_t_u_u((~((((*p_1394->g_108) = (1UL != ((((void*)0 != &l_498) || ((((safe_sub_func_int64_t_s_s((*p_1394->g_393), (l_504 == ((p_1394->g_220[2] == p_41) == ((*p_1394->g_52) = (+(*p_1394->g_52))))))) != (safe_mul_func_int16_t_s_s(((**p_1394->g_214) = (((safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(0x3D5BL, 65527UL)), l_508)), p_1394->g_520.f0)) == l_538), p_40)) > p_39) > (-1L))), p_40))) ^ p_41) | 0xA6F3A9C3C25CABDDL)) | l_508))) >= l_504) <= l_498)), 0x8D6C72A13701DE31L)));
    return (*p_1394->g_519);
}


/* ------------------------------------------ */
/* 
 * reads : p_1394->g_164 p_1394->g_94 p_1394->g_472
 * writes: p_1394->g_164 p_1394->g_94
 */
uint32_t  func_48(int8_t * p_49, int32_t * p_50, uint64_t  p_51, struct S2 * p_1394)
{ /* block id: 184 */
    uint32_t l_418 = 0x715677B5L;
    int32_t l_435 = 1L;
    int32_t *l_449 = &l_435;
    int16_t *l_450 = &p_1394->g_409;
    int64_t *l_460 = &p_1394->g_390;
    int64_t **l_459 = &l_460;
    int64_t ***l_458 = &l_459;
    for (p_1394->g_164 = 22; (p_1394->g_164 != 33); p_1394->g_164 = safe_add_func_int16_t_s_s(p_1394->g_164, 6))
    { /* block id: 187 */
        int32_t *l_419 = &p_1394->g_94;
        uint8_t l_440 = 0x47L;
        int8_t **l_469[7] = {&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52,&p_1394->g_52};
        int i;
        (*l_419) ^= l_418;
        for (p_1394->g_94 = (-4); (p_1394->g_94 >= 15); ++p_1394->g_94)
        { /* block id: 191 */
            int32_t *l_422 = &p_1394->g_423;
            int8_t **l_470 = &p_1394->g_52;
            (1 + 1);
        }
    }
    return p_1394->g_472;
}


/* ------------------------------------------ */
/* 
 * reads : p_1394->g_52 p_1394->g_53 p_1394->g_69 p_1394->g_96 p_1394->g_3 p_1394->g_105 p_1394->g_108 p_1394->g_109 p_1394->g_94 p_1394->g_127 p_1394->g_164 p_1394->g_169 p_1394->g_214 p_1394->g_167 p_1394->g_220 p_1394->g_246 p_1394->g_252
 * writes: p_1394->g_69 p_1394->g_96 p_1394->g_105 p_1394->g_109 p_1394->g_127 p_1394->g_108 p_1394->g_94 p_1394->g_164 p_1394->g_167 p_1394->g_220 p_1394->g_246 p_1394->g_252 p_1394->g_241
 */
int32_t * func_54(int8_t * p_55, int32_t  p_56, uint32_t  p_57, struct S2 * p_1394)
{ /* block id: 16 */
    int8_t *l_61 = (void*)0;
    int8_t **l_60 = &l_61;
    int8_t *l_62 = &p_1394->g_53;
    int32_t l_67 = (-1L);
    uint64_t *l_68 = &p_1394->g_69;
    int16_t l_91 = 0x1493L;
    uint64_t **l_128 = (void*)0;
    uint64_t **l_129[2][7][8] = {{{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108}},{{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108},{&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108,&p_1394->g_108}}};
    int32_t l_172 = 1L;
    int32_t l_188 = 1L;
    int16_t **l_238[4];
    int32_t l_242 = 0L;
    int32_t l_243 = 0x396E32C8L;
    int32_t *l_319 = &l_172;
    int32_t **l_318 = &l_319;
    int32_t l_324[5];
    int64_t l_350[5];
    int16_t l_385 = 0L;
    union U1 l_404 = {0x3366982638BED41EL};
    uint32_t l_412 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_238[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_324[i] = (-7L);
    for (i = 0; i < 5; i++)
        l_350[i] = 0x0FAC8F3660658193L;
    if ((((((*l_60) = p_55) == l_62) || (safe_lshift_func_int16_t_s_u((((*p_1394->g_52) >= ((((++(*l_68)) | ((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_u(0x324BL, 12)))) == ((safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u(((l_68 != (p_1394->g_108 = func_80(func_86(p_57, p_55, l_91, (*p_1394->g_52), p_1394), p_56, &p_1394->g_3, &l_67, p_56, p_1394))) <= 0UL))), p_56)) | p_57) , 0x2B33L) == p_56), (*p_55))) || p_1394->g_109[3][7]))) | p_1394->g_53) != 0x617FL)) <= 4294967295UL), p_56))) >= l_91))
    { /* block id: 30 */
        uint8_t l_132[7][6] = {{0UL,0UL,1UL,247UL,0xD0L,247UL},{0UL,0UL,1UL,247UL,0xD0L,247UL},{0UL,0UL,1UL,247UL,0xD0L,247UL},{0UL,0UL,1UL,247UL,0xD0L,247UL},{0UL,0UL,1UL,247UL,0xD0L,247UL},{0UL,0UL,1UL,247UL,0xD0L,247UL},{0UL,0UL,1UL,247UL,0xD0L,247UL}};
        int32_t *l_137 = &p_1394->g_94;
        int i, j;
        (*l_137) = ((safe_mul_func_int8_t_s_s(l_132[4][2], 0x62L)) < (safe_mod_func_int64_t_s_s(l_132[4][2], (safe_lshift_func_uint16_t_u_u(l_132[4][2], 2)))));
    }
    else
    { /* block id: 32 */
        int8_t *l_157 = &p_1394->g_53;
        int32_t *l_161[5][1][5] = {{{&l_67,&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67}}};
        uint64_t *l_162 = &p_1394->g_109[5][6];
        int i, j, k;
        for (p_57 = 1; (p_57 <= 5); p_57 += 1)
        { /* block id: 35 */
            int64_t l_160 = 0L;
            uint16_t *l_163 = &p_1394->g_164;
            int32_t l_165[3][2] = {{0x352123ECL,9L},{0x352123ECL,9L},{0x352123ECL,9L}};
            uint8_t *l_166 = &p_1394->g_167;
            uint32_t *l_168[3][10][4] = {{{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169}},{{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169}},{{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169},{&p_1394->g_169,&p_1394->g_169,&p_1394->g_169,&p_1394->g_169}}};
            int32_t l_170[5] = {1L,1L,1L,1L,1L};
            int16_t *l_171 = &p_1394->g_127;
            int8_t l_187 = 0x08L;
            int32_t l_219 = (-5L);
            int16_t l_221 = 1L;
            uint32_t l_240 = 1UL;
            int32_t *l_273 = (void*)0;
            int32_t l_299 = 0x5F6222EAL;
            int i, j, k;
            l_172 |= (((((((safe_unary_minus_func_int16_t_s(((*l_171) = (((l_170[4] &= (l_91 & ((*l_166) = (safe_mod_func_int32_t_s_s((l_165[1][0] &= (((safe_div_func_uint8_t_u_u(1UL, (safe_mul_func_uint16_t_u_u((!p_56), (((*l_163) ^= (safe_rshift_func_uint16_t_u_u((+((safe_sub_func_uint16_t_u_u(((*p_55) & 0x59L), ((((((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((p_1394->g_69 , ((safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(((*p_55) & ((l_162 = func_80(l_157, (safe_add_func_uint64_t_u_u((*p_1394->g_108), l_160)), l_161[2][0][0], &l_67, l_91, p_1394)) != (void*)0)), l_91)), 14)) ^ 255UL)), p_57)), p_1394->g_69)) > p_1394->g_53) <= p_1394->g_3) >= p_56) & p_57) | p_1394->g_3))) | p_1394->g_94)), p_1394->g_69))) ^ 65529UL))))) ^ p_1394->g_3) <= p_56)), p_1394->g_94))))) && p_56) | 3L)))) >= p_1394->g_3) || 1UL) == l_160) > 0xA6313875L) , p_1394->g_105) == 0x7743L);
            if ((l_188 ^= (safe_lshift_func_uint16_t_u_u((0x7493250C18A6757BL && (p_56 >= ((*p_1394->g_108) != ((safe_add_func_int16_t_s_s((((&p_1394->g_167 == (((((safe_div_func_uint8_t_u_u(((((((safe_rshift_func_uint8_t_u_u(p_1394->g_96, 4)) == (safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0xCEL, (safe_mod_func_int32_t_s_s(((*p_1394->g_52) > (p_1394->g_3 , (l_91 != p_56))), p_1394->g_96)))), l_172))) <= p_57) ^ l_187) ^ 0x6FD7L) ^ p_1394->g_53), 0x61L)) , 1UL) != p_1394->g_105) <= l_67) , (void*)0)) , p_57) == 0UL), 0xA179L)) > (*p_1394->g_108))))), 7))))
            { /* block id: 44 */
                for (p_56 = 4; (p_56 >= 0); p_56 -= 1)
                { /* block id: 47 */
                    int32_t *l_189 = (void*)0;
                    int32_t **l_190 = &l_161[2][0][0];
                    (*l_190) = l_189;
                    for (p_1394->g_94 = 1; (p_1394->g_94 >= 0); p_1394->g_94 -= 1)
                    { /* block id: 51 */
                        return &p_1394->g_3;
                    }
                }
            }
            else
            { /* block id: 55 */
                int16_t *l_193 = &p_1394->g_127;
                int16_t **l_194 = (void*)0;
                int16_t **l_195 = &l_171;
                int8_t l_202 = (-1L);
                p_1394->g_94 = ((p_56 & ((void*)0 != &p_55)) == ((safe_add_func_uint32_t_u_u((&p_1394->g_127 != ((*l_195) = l_193)), ((p_57 && ((safe_div_func_int64_t_s_s(l_172, p_56)) ^ (safe_div_func_uint32_t_u_u(((((safe_lshift_func_uint16_t_u_s(((((l_165[2][0] = 0x1024L) | l_67) >= l_202) < p_1394->g_105), p_1394->g_3)) <= 65535UL) || 0x478E8836L) < p_57), p_56)))) , p_1394->g_169))) , (*p_1394->g_52)));
                for (l_188 = 1; (l_188 >= 0); l_188 -= 1)
                { /* block id: 61 */
                    int32_t **l_203 = &l_161[2][0][0];
                    int64_t *l_218[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_218[i] = &l_160;
                    (*l_203) = (void*)0;
                    l_221 = ((safe_rshift_func_uint16_t_u_u((((~(safe_mul_func_uint8_t_u_u((l_67 = p_1394->g_109[l_188][l_188]), (&l_187 == ((*l_60) = func_86((l_170[(l_188 + 3)] > ((safe_div_func_int64_t_s_s(7L, (p_1394->g_220[2] = (l_219 ^= ((safe_sub_func_uint32_t_u_u(l_188, p_1394->g_53)) < ((safe_lshift_func_int16_t_s_u(((p_1394->g_214 == &p_1394->g_215) <= (((l_165[(l_188 + 1)][l_188] = (safe_mul_func_uint16_t_u_u(p_56, p_1394->g_53))) || p_1394->g_167) , l_165[1][0])), 4)) , 0x5FD013E866A5DDA6L)))))) <= 0UL)), p_55, p_56, l_202, p_1394)))))) , p_56) | (*p_1394->g_52)), 10)) == (*p_1394->g_52));
                    for (p_1394->g_69 = 0; (p_1394->g_69 <= 2); p_1394->g_69 += 1)
                    { /* block id: 71 */
                        if (p_57)
                            break;
                    }
                }
                if (p_1394->g_164)
                    break;
            }
            if (p_1394->g_220[2])
            { /* block id: 77 */
                int64_t *l_230 = &l_160;
                int64_t l_233 = (-1L);
                uint8_t **l_236 = &l_166;
                int16_t *l_237 = &l_221;
                int32_t l_239 = (-6L);
                int32_t l_245[2];
                int32_t **l_249 = (void*)0;
                int32_t **l_250 = &l_161[2][0][0];
                int i;
                for (i = 0; i < 2; i++)
                    l_245[i] = 0x6E17EB04L;
                l_239 = (safe_sub_func_int32_t_s_s(((safe_div_func_int32_t_s_s(p_1394->g_109[1][6], 4294967295UL)) < p_57), ((safe_mod_func_int8_t_s_s((((((((safe_div_func_int64_t_s_s(((*l_230) |= 0x352019D5596D2B07L), (safe_add_func_uint16_t_u_u(l_233, (p_1394->g_127 <= ((*l_237) &= (safe_lshift_func_uint8_t_u_u((((*l_236) = func_86(p_56, &p_1394->g_53, p_1394->g_220[0], l_172, p_1394)) != p_55), 1)))))))) < p_1394->g_69) & 7L) != l_233) , l_238[3]) == &p_1394->g_215) , 1L), 0x6DL)) > l_233)));
                l_240 = (~p_1394->g_169);
                --p_1394->g_246;
                (*l_250) = &l_67;
            }
            else
            { /* block id: 85 */
                uint16_t l_259[2];
                int32_t l_266 = 0L;
                int64_t *l_267 = (void*)0;
                int64_t *l_268 = &l_160;
                int i;
                for (i = 0; i < 2; i++)
                    l_259[i] = 0xC855L;
                p_1394->g_252--;
                l_266 = ((safe_add_func_int64_t_s_s(0x5C4AB55A89C14EC5L, (((safe_rshift_func_int8_t_s_s((((--l_259[0]) , (safe_sub_func_uint32_t_u_u(0xE5FAA0FEL, 3UL))) > ((safe_mul_func_uint8_t_u_u(p_1394->g_69, 1L)) > (((l_266 ^ ((*l_268) |= 0x5D38E61717C3DF11L)) >= 0x34A214248C0B1116L) | (p_56 <= l_91)))), 6)) , 0x12A9F23F4BAE0D68L) <= 0x2E3BCCD2FC28A9D4L))) | l_165[1][0]);
            }
            for (l_219 = 0; l_219 < 3; l_219 += 1)
            {
                for (p_1394->g_241 = 0; p_1394->g_241 < 2; p_1394->g_241 += 1)
                {
                    l_165[l_219][p_1394->g_241] = 0x1B0C5A6CL;
                }
            }
            for (l_242 = 1; (l_242 >= 0); l_242 -= 1)
            { /* block id: 94 */
                int32_t *l_274 = &l_172;
                int64_t *l_275 = (void*)0;
                int64_t *l_276 = &l_160;
                int64_t l_287[5];
                uint16_t *l_288 = &p_1394->g_246;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_287[i] = 0x02A8A9666FFBF402L;
                (1 + 1);
            }
        }
    }
    for (p_1394->g_105 = 0; (p_1394->g_105 == 18); ++p_1394->g_105)
    { /* block id: 140 */
        int32_t *l_333[4][6][2] = {{{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188}},{{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188}},{{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188}},{{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188},{&l_188,&l_188}}};
        int8_t **l_351 = &l_62;
        uint16_t *l_364 = (void*)0;
        int32_t l_368 = 0x664ACD50L;
        int i, j, k;
        (1 + 1);
    }
    return &p_1394->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1394->g_3 p_1394->g_105 p_1394->g_52 p_1394->g_53 p_1394->g_108 p_1394->g_109 p_1394->g_94 p_1394->g_127
 * writes: p_1394->g_105 p_1394->g_109 p_1394->g_127
 */
uint64_t * func_80(int8_t * p_81, uint8_t  p_82, int32_t * p_83, int32_t * p_84, int64_t  p_85, struct S2 * p_1394)
{ /* block id: 22 */
    int32_t *l_100 = &p_1394->g_94;
    int32_t *l_101 = &p_1394->g_94;
    int32_t *l_102 = &p_1394->g_94;
    int32_t *l_103 = &p_1394->g_94;
    int32_t *l_104[8][9][3] = {{{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3}},{{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3}},{{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3}},{{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3}},{{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3}},{{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3}},{{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3}},{{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3},{&p_1394->g_3,&p_1394->g_3,&p_1394->g_3}}};
    uint64_t *l_114 = &p_1394->g_109[1][8];
    int i, j, k;
    (*p_84) ^= p_1394->g_3;
    p_1394->g_105--;
    p_1394->g_127 |= ((*p_1394->g_52) , ((*p_84) = (((*p_1394->g_108) &= ((void*)0 != p_1394->g_108)) , (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_114 == ((&p_1394->g_53 != ((((-1L) | (safe_lshift_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(p_1394->g_3, p_85)), 7)), ((+(safe_div_func_uint64_t_u_u((*l_102), 0xFAE61DEDA819422BL))) , (*p_1394->g_52)))), p_1394->g_109[1][6])) | p_1394->g_109[1][6]), 2))) || 0x33B60433L) , (void*)0)) , (void*)0)), 0xA8L)), p_85)))));
    return l_114;
}


/* ------------------------------------------ */
/* 
 * reads : p_1394->g_96
 * writes: p_1394->g_96
 */
int8_t * func_86(uint32_t  p_87, int8_t * p_88, uint32_t  p_89, int8_t  p_90, struct S2 * p_1394)
{ /* block id: 19 */
    int32_t l_92 = (-8L);
    int32_t *l_93 = &p_1394->g_94;
    int32_t *l_95[7][7][2] = {{{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94}},{{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94}},{{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94}},{{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94}},{{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94}},{{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94}},{{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94},{(void*)0,&p_1394->g_94}}};
    int8_t *l_99 = &p_1394->g_53;
    int i, j, k;
    p_1394->g_96++;
    return l_99;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1395;
    struct S2* p_1394 = &c_1395;
    struct S2 c_1396 = {
        0x77AB3921L, // p_1394->g_2
        0x68044455L, // p_1394->g_3
        {{{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)}},{{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)}},{{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)}},{{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)}},{{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)}},{{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)}},{{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)}},{{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)}},{{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)}}}, // p_1394->g_47
        &p_1394->g_47[8][3][3], // p_1394->g_46
        0x18L, // p_1394->g_53
        &p_1394->g_53, // p_1394->g_52
        0xDBD1BD9F019D5C01L, // p_1394->g_69
        0x09E6D542L, // p_1394->g_94
        1UL, // p_1394->g_96
        0x7879L, // p_1394->g_105
        {{18446744073709551613UL,18446744073709551613UL,18446744073709551612UL,0UL,0x90574D26467E2B5FL,0UL,18446744073709551612UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551612UL,0UL,0x90574D26467E2B5FL,0UL,18446744073709551612UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551612UL,0UL,0x90574D26467E2B5FL,0UL,18446744073709551612UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551612UL,0UL,0x90574D26467E2B5FL,0UL,18446744073709551612UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551612UL,0UL,0x90574D26467E2B5FL,0UL,18446744073709551612UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551612UL,0UL,0x90574D26467E2B5FL,0UL,18446744073709551612UL,18446744073709551613UL,18446744073709551613UL}}, // p_1394->g_109
        &p_1394->g_109[1][6], // p_1394->g_108
        0x7E7CL, // p_1394->g_127
        65535UL, // p_1394->g_164
        0xB0L, // p_1394->g_167
        0x904D0004L, // p_1394->g_169
        &p_1394->g_127, // p_1394->g_215
        &p_1394->g_215, // p_1394->g_214
        {0x7B7F45CDL,0x7B7F45CDL,0x7B7F45CDL}, // p_1394->g_220
        0x4ABBL, // p_1394->g_241
        0x656643B3L, // p_1394->g_244
        0xB0B5L, // p_1394->g_246
        0x20L, // p_1394->g_251
        3UL, // p_1394->g_252
        {0x0A3863662FD1387BL,0x0A3863662FD1387BL,0x0A3863662FD1387BL,0x0A3863662FD1387BL,0x0A3863662FD1387BL}, // p_1394->g_388
        0x3C6B21A75E040CA6L, // p_1394->g_390
        1L, // p_1394->g_394
        &p_1394->g_394, // p_1394->g_393
        &p_1394->g_393, // p_1394->g_392
        1L, // p_1394->g_409
        7UL, // p_1394->g_410
        &p_1394->g_94, // p_1394->g_415
        0x0CD75C92L, // p_1394->g_423
        1L, // p_1394->g_472
        {0xE2B729CEL}, // p_1394->g_475
        (void*)0, // p_1394->g_478
        &p_1394->g_415, // p_1394->g_480
        0UL, // p_1394->g_483
        {{{0x33036B0DL,0x3F94299B5ECC5603L,0x5822L,0UL,0x2D7CL,0x223AC565L,-1L,0xA186L},{0x83DD4F4CL,0x4EAA836820222B3BL,0x1309L,0x1BD77567L,0x505FL,-7L,0L,1UL},{0x221DAD85L,0UL,1UL,0x57E8C67BL,-1L,0x1453BF10L,-1L,0x48B2L},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L},{0xB7F2B6A2L,18446744073709551615UL,0xEAE0L,4294967295UL,0x1631L,-6L,-10L,65531UL},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L}},{{0x33036B0DL,0x3F94299B5ECC5603L,0x5822L,0UL,0x2D7CL,0x223AC565L,-1L,0xA186L},{0x83DD4F4CL,0x4EAA836820222B3BL,0x1309L,0x1BD77567L,0x505FL,-7L,0L,1UL},{0x221DAD85L,0UL,1UL,0x57E8C67BL,-1L,0x1453BF10L,-1L,0x48B2L},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L},{0xB7F2B6A2L,18446744073709551615UL,0xEAE0L,4294967295UL,0x1631L,-6L,-10L,65531UL},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L}},{{0x33036B0DL,0x3F94299B5ECC5603L,0x5822L,0UL,0x2D7CL,0x223AC565L,-1L,0xA186L},{0x83DD4F4CL,0x4EAA836820222B3BL,0x1309L,0x1BD77567L,0x505FL,-7L,0L,1UL},{0x221DAD85L,0UL,1UL,0x57E8C67BL,-1L,0x1453BF10L,-1L,0x48B2L},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L},{0xB7F2B6A2L,18446744073709551615UL,0xEAE0L,4294967295UL,0x1631L,-6L,-10L,65531UL},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L}},{{0x33036B0DL,0x3F94299B5ECC5603L,0x5822L,0UL,0x2D7CL,0x223AC565L,-1L,0xA186L},{0x83DD4F4CL,0x4EAA836820222B3BL,0x1309L,0x1BD77567L,0x505FL,-7L,0L,1UL},{0x221DAD85L,0UL,1UL,0x57E8C67BL,-1L,0x1453BF10L,-1L,0x48B2L},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L},{0xB7F2B6A2L,18446744073709551615UL,0xEAE0L,4294967295UL,0x1631L,-6L,-10L,65531UL},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L}},{{0x33036B0DL,0x3F94299B5ECC5603L,0x5822L,0UL,0x2D7CL,0x223AC565L,-1L,0xA186L},{0x83DD4F4CL,0x4EAA836820222B3BL,0x1309L,0x1BD77567L,0x505FL,-7L,0L,1UL},{0x221DAD85L,0UL,1UL,0x57E8C67BL,-1L,0x1453BF10L,-1L,0x48B2L},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L},{0xB7F2B6A2L,18446744073709551615UL,0xEAE0L,4294967295UL,0x1631L,-6L,-10L,65531UL},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L}},{{0x33036B0DL,0x3F94299B5ECC5603L,0x5822L,0UL,0x2D7CL,0x223AC565L,-1L,0xA186L},{0x83DD4F4CL,0x4EAA836820222B3BL,0x1309L,0x1BD77567L,0x505FL,-7L,0L,1UL},{0x221DAD85L,0UL,1UL,0x57E8C67BL,-1L,0x1453BF10L,-1L,0x48B2L},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L},{0xB7F2B6A2L,18446744073709551615UL,0xEAE0L,4294967295UL,0x1631L,-6L,-10L,65531UL},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L}},{{0x33036B0DL,0x3F94299B5ECC5603L,0x5822L,0UL,0x2D7CL,0x223AC565L,-1L,0xA186L},{0x83DD4F4CL,0x4EAA836820222B3BL,0x1309L,0x1BD77567L,0x505FL,-7L,0L,1UL},{0x221DAD85L,0UL,1UL,0x57E8C67BL,-1L,0x1453BF10L,-1L,0x48B2L},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L},{0xB7F2B6A2L,18446744073709551615UL,0xEAE0L,4294967295UL,0x1631L,-6L,-10L,65531UL},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L}},{{0x33036B0DL,0x3F94299B5ECC5603L,0x5822L,0UL,0x2D7CL,0x223AC565L,-1L,0xA186L},{0x83DD4F4CL,0x4EAA836820222B3BL,0x1309L,0x1BD77567L,0x505FL,-7L,0L,1UL},{0x221DAD85L,0UL,1UL,0x57E8C67BL,-1L,0x1453BF10L,-1L,0x48B2L},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L},{0xB7F2B6A2L,18446744073709551615UL,0xEAE0L,4294967295UL,0x1631L,-6L,-10L,65531UL},{1UL,0x75E5447EE9314E34L,0x9EDAL,0UL,0x4E94L,0L,0x40FDC9D4D636AC42L,0x4206L}}}, // p_1394->g_506
        0xC434L, // p_1394->g_515
        {0x2943B098D4375419L}, // p_1394->g_520
        &p_1394->g_520, // p_1394->g_519
        {&p_1394->g_519,&p_1394->g_519,&p_1394->g_519,&p_1394->g_519}, // p_1394->g_521
        &p_1394->g_94, // p_1394->g_539
        {&p_1394->g_415}, // p_1394->g_543
        0x5CE6L, // p_1394->g_579
        {4294967293UL,0x244E1420297243C7L,0x0536L,0x326045C4L,0x25D7L,0x6AF24280L,0L,0xD4E3L}, // p_1394->g_603
        1UL, // p_1394->g_632
        {4UL,0xB65DA271598F1FC6L,0x8477L,4294967286UL,0x5640L,0x34A19894L,0x600E3AA4F683C370L,0UL}, // p_1394->g_681
        {5UL,0x072283C007F94F29L,0UL,0x534B053AL,0x04C3L,-1L,0x6E40FA7B87D98E64L,0UL}, // p_1394->g_729
        0x62AF8A4FL, // p_1394->g_730
        0xECL, // p_1394->g_734
        &p_1394->g_215, // p_1394->g_746
        {0xA87F399FL,0xBEAC821C4A95E28EL,0x6C42L,0x930FD067L,-1L,0x7278B8A3L,0x4AA7EF154F913121L,65535UL}, // p_1394->g_761
        {4294967295UL,1UL,5UL,4294967286UL,0x191EL,-10L,-1L,1UL}, // p_1394->g_763
        {1UL,18446744073709551611UL,0xCFB4L,1UL,1L,-1L,-4L,0xC266L}, // p_1394->g_778
        {0xA28AF908L,0x4CF10E40684FE8E0L,65535UL,0x4349C3CAL,0x7D46L,0x7B0DCE15L,0x0D1E487B7D0874B0L,0x3BB9L}, // p_1394->g_779
        &p_1394->g_520, // p_1394->g_794
        &p_1394->g_794, // p_1394->g_793
        {{{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL}},{{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL},{4294967295UL,4294967295UL,4294967290UL,0UL,4294967295UL}}}, // p_1394->g_819
        0x36D0L, // p_1394->g_833
        (void*)0, // p_1394->g_858
        0x2D08L, // p_1394->g_880
        {{{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}}},{{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}}},{{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}}},{{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}}},{{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}}},{{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}}},{{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}},{{0x07804FB3L,0x118C263417657591L,65531UL,0x2A232BBCL,5L,0x0C62E865L,0x0198C34E7D9B6A35L,0xADF0L}}}}, // p_1394->g_909
        {&p_1394->g_909[4][1][0],&p_1394->g_909[4][1][0],&p_1394->g_909[4][1][0],&p_1394->g_909[4][1][0],&p_1394->g_909[4][1][0],&p_1394->g_909[4][1][0],&p_1394->g_909[4][1][0],&p_1394->g_909[4][1][0],&p_1394->g_909[4][1][0],&p_1394->g_909[4][1][0]}, // p_1394->g_910
        &p_1394->g_729, // p_1394->g_911
        &p_1394->g_730, // p_1394->g_923
        {7UL,0xF657215B7232F1D5L,0x5249L,1UL,0x1CEEL,0x4C09224CL,-1L,0x25CEL}, // p_1394->g_946
        {&p_1394->g_483,&p_1394->g_483,&p_1394->g_483,&p_1394->g_483,&p_1394->g_483,&p_1394->g_483,&p_1394->g_483}, // p_1394->g_953
        0L, // p_1394->g_962
        &p_1394->g_415, // p_1394->g_990
        0x541B7C833F5BCADFL, // p_1394->g_1018
        &p_1394->g_415, // p_1394->g_1024
        (void*)0, // p_1394->g_1070
        &p_1394->g_415, // p_1394->g_1071
        &p_1394->g_730, // p_1394->g_1215
        {{{&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0},{&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0}},{{&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0},{&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0}},{{&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0},{&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0,&p_1394->g_1215,(void*)0}}}, // p_1394->g_1214
        &p_1394->g_1215, // p_1394->g_1216
        {{{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}},{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}}},{{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}},{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}}},{{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}},{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}}},{{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}},{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}}},{{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}},{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}}},{{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}},{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}}},{{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}},{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}}},{{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}},{{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0UL,0xCD9DE5C536515F20L,0xD2FCL,0UL,0x130FL,0x70336034L,9L,0x2B99L},{0xDF5A8094L,0xA0058019CE9CB049L,65526UL,0xFD9CFCD9L,0x394FL,0x76136927L,6L,0xB02AL},{0x40BF254FL,0xAA75636A8AE54BD3L,0xEEDFL,0xBDEDCBFBL,0x0AF7L,0x12B1FE9FL,5L,1UL},{1UL,1UL,65535UL,0x9A41ABAFL,-3L,1L,-1L,0UL}}}}, // p_1394->g_1227
        0x6BL, // p_1394->g_1292
        {{0x4AF4E433L,1UL,1UL,1UL,6L,0x3370D632L,0x283B3E4FDF2600CEL,0xD2C6L},{0x4AF4E433L,1UL,1UL,1UL,6L,0x3370D632L,0x283B3E4FDF2600CEL,0xD2C6L},{0x4AF4E433L,1UL,1UL,1UL,6L,0x3370D632L,0x283B3E4FDF2600CEL,0xD2C6L},{0x4AF4E433L,1UL,1UL,1UL,6L,0x3370D632L,0x283B3E4FDF2600CEL,0xD2C6L},{0x4AF4E433L,1UL,1UL,1UL,6L,0x3370D632L,0x283B3E4FDF2600CEL,0xD2C6L},{0x4AF4E433L,1UL,1UL,1UL,6L,0x3370D632L,0x283B3E4FDF2600CEL,0xD2C6L},{0x4AF4E433L,1UL,1UL,1UL,6L,0x3370D632L,0x283B3E4FDF2600CEL,0xD2C6L},{0x4AF4E433L,1UL,1UL,1UL,6L,0x3370D632L,0x283B3E4FDF2600CEL,0xD2C6L}}, // p_1394->g_1325
        (void*)0, // p_1394->g_1337
        (void*)0, // p_1394->g_1338
        {8UL,7UL,0xB960L,0xA39E0F48L,3L,-1L,0x1D2D960901008D23L,0xD79AL}, // p_1394->g_1340
        0UL, // p_1394->g_1352
        0xF542A65DL, // p_1394->g_1374
    };
    c_1395 = c_1396;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1394);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1394->g_2, "p_1394->g_2", print_hash_value);
    transparent_crc(p_1394->g_3, "p_1394->g_3", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1394->g_47[i][j][k], "p_1394->g_47[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1394->g_53, "p_1394->g_53", print_hash_value);
    transparent_crc(p_1394->g_69, "p_1394->g_69", print_hash_value);
    transparent_crc(p_1394->g_94, "p_1394->g_94", print_hash_value);
    transparent_crc(p_1394->g_96, "p_1394->g_96", print_hash_value);
    transparent_crc(p_1394->g_105, "p_1394->g_105", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1394->g_109[i][j], "p_1394->g_109[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1394->g_127, "p_1394->g_127", print_hash_value);
    transparent_crc(p_1394->g_164, "p_1394->g_164", print_hash_value);
    transparent_crc(p_1394->g_167, "p_1394->g_167", print_hash_value);
    transparent_crc(p_1394->g_169, "p_1394->g_169", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1394->g_220[i], "p_1394->g_220[i]", print_hash_value);

    }
    transparent_crc(p_1394->g_241, "p_1394->g_241", print_hash_value);
    transparent_crc(p_1394->g_244, "p_1394->g_244", print_hash_value);
    transparent_crc(p_1394->g_246, "p_1394->g_246", print_hash_value);
    transparent_crc(p_1394->g_251, "p_1394->g_251", print_hash_value);
    transparent_crc(p_1394->g_252, "p_1394->g_252", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1394->g_388[i], "p_1394->g_388[i]", print_hash_value);

    }
    transparent_crc(p_1394->g_390, "p_1394->g_390", print_hash_value);
    transparent_crc(p_1394->g_394, "p_1394->g_394", print_hash_value);
    transparent_crc(p_1394->g_409, "p_1394->g_409", print_hash_value);
    transparent_crc(p_1394->g_410, "p_1394->g_410", print_hash_value);
    transparent_crc(p_1394->g_423, "p_1394->g_423", print_hash_value);
    transparent_crc(p_1394->g_472, "p_1394->g_472", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1394->g_475[i], "p_1394->g_475[i]", print_hash_value);

    }
    transparent_crc(p_1394->g_483, "p_1394->g_483", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1394->g_506[i][j].f0, "p_1394->g_506[i][j].f0", print_hash_value);
            transparent_crc(p_1394->g_506[i][j].f1, "p_1394->g_506[i][j].f1", print_hash_value);
            transparent_crc(p_1394->g_506[i][j].f2, "p_1394->g_506[i][j].f2", print_hash_value);
            transparent_crc(p_1394->g_506[i][j].f3, "p_1394->g_506[i][j].f3", print_hash_value);
            transparent_crc(p_1394->g_506[i][j].f4, "p_1394->g_506[i][j].f4", print_hash_value);
            transparent_crc(p_1394->g_506[i][j].f5, "p_1394->g_506[i][j].f5", print_hash_value);
            transparent_crc(p_1394->g_506[i][j].f6, "p_1394->g_506[i][j].f6", print_hash_value);
            transparent_crc(p_1394->g_506[i][j].f7, "p_1394->g_506[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(p_1394->g_515, "p_1394->g_515", print_hash_value);
    transparent_crc(p_1394->g_520.f0, "p_1394->g_520.f0", print_hash_value);
    transparent_crc(p_1394->g_579, "p_1394->g_579", print_hash_value);
    transparent_crc(p_1394->g_603.f0, "p_1394->g_603.f0", print_hash_value);
    transparent_crc(p_1394->g_603.f1, "p_1394->g_603.f1", print_hash_value);
    transparent_crc(p_1394->g_603.f2, "p_1394->g_603.f2", print_hash_value);
    transparent_crc(p_1394->g_603.f3, "p_1394->g_603.f3", print_hash_value);
    transparent_crc(p_1394->g_603.f4, "p_1394->g_603.f4", print_hash_value);
    transparent_crc(p_1394->g_603.f5, "p_1394->g_603.f5", print_hash_value);
    transparent_crc(p_1394->g_603.f6, "p_1394->g_603.f6", print_hash_value);
    transparent_crc(p_1394->g_603.f7, "p_1394->g_603.f7", print_hash_value);
    transparent_crc(p_1394->g_632, "p_1394->g_632", print_hash_value);
    transparent_crc(p_1394->g_681.f0, "p_1394->g_681.f0", print_hash_value);
    transparent_crc(p_1394->g_681.f1, "p_1394->g_681.f1", print_hash_value);
    transparent_crc(p_1394->g_681.f2, "p_1394->g_681.f2", print_hash_value);
    transparent_crc(p_1394->g_681.f3, "p_1394->g_681.f3", print_hash_value);
    transparent_crc(p_1394->g_681.f4, "p_1394->g_681.f4", print_hash_value);
    transparent_crc(p_1394->g_681.f5, "p_1394->g_681.f5", print_hash_value);
    transparent_crc(p_1394->g_681.f6, "p_1394->g_681.f6", print_hash_value);
    transparent_crc(p_1394->g_681.f7, "p_1394->g_681.f7", print_hash_value);
    transparent_crc(p_1394->g_729.f0, "p_1394->g_729.f0", print_hash_value);
    transparent_crc(p_1394->g_729.f1, "p_1394->g_729.f1", print_hash_value);
    transparent_crc(p_1394->g_729.f2, "p_1394->g_729.f2", print_hash_value);
    transparent_crc(p_1394->g_729.f3, "p_1394->g_729.f3", print_hash_value);
    transparent_crc(p_1394->g_729.f4, "p_1394->g_729.f4", print_hash_value);
    transparent_crc(p_1394->g_729.f5, "p_1394->g_729.f5", print_hash_value);
    transparent_crc(p_1394->g_729.f6, "p_1394->g_729.f6", print_hash_value);
    transparent_crc(p_1394->g_729.f7, "p_1394->g_729.f7", print_hash_value);
    transparent_crc(p_1394->g_730, "p_1394->g_730", print_hash_value);
    transparent_crc(p_1394->g_734, "p_1394->g_734", print_hash_value);
    transparent_crc(p_1394->g_761.f0, "p_1394->g_761.f0", print_hash_value);
    transparent_crc(p_1394->g_761.f1, "p_1394->g_761.f1", print_hash_value);
    transparent_crc(p_1394->g_761.f2, "p_1394->g_761.f2", print_hash_value);
    transparent_crc(p_1394->g_761.f3, "p_1394->g_761.f3", print_hash_value);
    transparent_crc(p_1394->g_761.f4, "p_1394->g_761.f4", print_hash_value);
    transparent_crc(p_1394->g_761.f5, "p_1394->g_761.f5", print_hash_value);
    transparent_crc(p_1394->g_761.f6, "p_1394->g_761.f6", print_hash_value);
    transparent_crc(p_1394->g_761.f7, "p_1394->g_761.f7", print_hash_value);
    transparent_crc(p_1394->g_763.f0, "p_1394->g_763.f0", print_hash_value);
    transparent_crc(p_1394->g_763.f1, "p_1394->g_763.f1", print_hash_value);
    transparent_crc(p_1394->g_763.f2, "p_1394->g_763.f2", print_hash_value);
    transparent_crc(p_1394->g_763.f3, "p_1394->g_763.f3", print_hash_value);
    transparent_crc(p_1394->g_763.f4, "p_1394->g_763.f4", print_hash_value);
    transparent_crc(p_1394->g_763.f5, "p_1394->g_763.f5", print_hash_value);
    transparent_crc(p_1394->g_763.f6, "p_1394->g_763.f6", print_hash_value);
    transparent_crc(p_1394->g_763.f7, "p_1394->g_763.f7", print_hash_value);
    transparent_crc(p_1394->g_778.f0, "p_1394->g_778.f0", print_hash_value);
    transparent_crc(p_1394->g_778.f1, "p_1394->g_778.f1", print_hash_value);
    transparent_crc(p_1394->g_778.f2, "p_1394->g_778.f2", print_hash_value);
    transparent_crc(p_1394->g_778.f3, "p_1394->g_778.f3", print_hash_value);
    transparent_crc(p_1394->g_778.f4, "p_1394->g_778.f4", print_hash_value);
    transparent_crc(p_1394->g_778.f5, "p_1394->g_778.f5", print_hash_value);
    transparent_crc(p_1394->g_778.f6, "p_1394->g_778.f6", print_hash_value);
    transparent_crc(p_1394->g_778.f7, "p_1394->g_778.f7", print_hash_value);
    transparent_crc(p_1394->g_779.f0, "p_1394->g_779.f0", print_hash_value);
    transparent_crc(p_1394->g_779.f1, "p_1394->g_779.f1", print_hash_value);
    transparent_crc(p_1394->g_779.f2, "p_1394->g_779.f2", print_hash_value);
    transparent_crc(p_1394->g_779.f3, "p_1394->g_779.f3", print_hash_value);
    transparent_crc(p_1394->g_779.f4, "p_1394->g_779.f4", print_hash_value);
    transparent_crc(p_1394->g_779.f5, "p_1394->g_779.f5", print_hash_value);
    transparent_crc(p_1394->g_779.f6, "p_1394->g_779.f6", print_hash_value);
    transparent_crc(p_1394->g_779.f7, "p_1394->g_779.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1394->g_819[i][j][k], "p_1394->g_819[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1394->g_833, "p_1394->g_833", print_hash_value);
    transparent_crc(p_1394->g_880, "p_1394->g_880", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1394->g_909[i][j][k].f0, "p_1394->g_909[i][j][k].f0", print_hash_value);
                transparent_crc(p_1394->g_909[i][j][k].f1, "p_1394->g_909[i][j][k].f1", print_hash_value);
                transparent_crc(p_1394->g_909[i][j][k].f2, "p_1394->g_909[i][j][k].f2", print_hash_value);
                transparent_crc(p_1394->g_909[i][j][k].f3, "p_1394->g_909[i][j][k].f3", print_hash_value);
                transparent_crc(p_1394->g_909[i][j][k].f4, "p_1394->g_909[i][j][k].f4", print_hash_value);
                transparent_crc(p_1394->g_909[i][j][k].f5, "p_1394->g_909[i][j][k].f5", print_hash_value);
                transparent_crc(p_1394->g_909[i][j][k].f6, "p_1394->g_909[i][j][k].f6", print_hash_value);
                transparent_crc(p_1394->g_909[i][j][k].f7, "p_1394->g_909[i][j][k].f7", print_hash_value);

            }
        }
    }
    transparent_crc(p_1394->g_946.f0, "p_1394->g_946.f0", print_hash_value);
    transparent_crc(p_1394->g_946.f1, "p_1394->g_946.f1", print_hash_value);
    transparent_crc(p_1394->g_946.f2, "p_1394->g_946.f2", print_hash_value);
    transparent_crc(p_1394->g_946.f3, "p_1394->g_946.f3", print_hash_value);
    transparent_crc(p_1394->g_946.f4, "p_1394->g_946.f4", print_hash_value);
    transparent_crc(p_1394->g_946.f5, "p_1394->g_946.f5", print_hash_value);
    transparent_crc(p_1394->g_946.f6, "p_1394->g_946.f6", print_hash_value);
    transparent_crc(p_1394->g_946.f7, "p_1394->g_946.f7", print_hash_value);
    transparent_crc(p_1394->g_962, "p_1394->g_962", print_hash_value);
    transparent_crc(p_1394->g_1018, "p_1394->g_1018", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1394->g_1227[i][j][k].f0, "p_1394->g_1227[i][j][k].f0", print_hash_value);
                transparent_crc(p_1394->g_1227[i][j][k].f1, "p_1394->g_1227[i][j][k].f1", print_hash_value);
                transparent_crc(p_1394->g_1227[i][j][k].f2, "p_1394->g_1227[i][j][k].f2", print_hash_value);
                transparent_crc(p_1394->g_1227[i][j][k].f3, "p_1394->g_1227[i][j][k].f3", print_hash_value);
                transparent_crc(p_1394->g_1227[i][j][k].f4, "p_1394->g_1227[i][j][k].f4", print_hash_value);
                transparent_crc(p_1394->g_1227[i][j][k].f5, "p_1394->g_1227[i][j][k].f5", print_hash_value);
                transparent_crc(p_1394->g_1227[i][j][k].f6, "p_1394->g_1227[i][j][k].f6", print_hash_value);
                transparent_crc(p_1394->g_1227[i][j][k].f7, "p_1394->g_1227[i][j][k].f7", print_hash_value);

            }
        }
    }
    transparent_crc(p_1394->g_1292, "p_1394->g_1292", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1394->g_1325[i].f0, "p_1394->g_1325[i].f0", print_hash_value);
        transparent_crc(p_1394->g_1325[i].f1, "p_1394->g_1325[i].f1", print_hash_value);
        transparent_crc(p_1394->g_1325[i].f2, "p_1394->g_1325[i].f2", print_hash_value);
        transparent_crc(p_1394->g_1325[i].f3, "p_1394->g_1325[i].f3", print_hash_value);
        transparent_crc(p_1394->g_1325[i].f4, "p_1394->g_1325[i].f4", print_hash_value);
        transparent_crc(p_1394->g_1325[i].f5, "p_1394->g_1325[i].f5", print_hash_value);
        transparent_crc(p_1394->g_1325[i].f6, "p_1394->g_1325[i].f6", print_hash_value);
        transparent_crc(p_1394->g_1325[i].f7, "p_1394->g_1325[i].f7", print_hash_value);

    }
    transparent_crc(p_1394->g_1340.f0, "p_1394->g_1340.f0", print_hash_value);
    transparent_crc(p_1394->g_1340.f1, "p_1394->g_1340.f1", print_hash_value);
    transparent_crc(p_1394->g_1340.f2, "p_1394->g_1340.f2", print_hash_value);
    transparent_crc(p_1394->g_1340.f3, "p_1394->g_1340.f3", print_hash_value);
    transparent_crc(p_1394->g_1340.f4, "p_1394->g_1340.f4", print_hash_value);
    transparent_crc(p_1394->g_1340.f5, "p_1394->g_1340.f5", print_hash_value);
    transparent_crc(p_1394->g_1340.f6, "p_1394->g_1340.f6", print_hash_value);
    transparent_crc(p_1394->g_1340.f7, "p_1394->g_1340.f7", print_hash_value);
    transparent_crc(p_1394->g_1352, "p_1394->g_1352", print_hash_value);
    transparent_crc(p_1394->g_1374, "p_1394->g_1374", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
