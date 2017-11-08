// -g 52,66,2 -l 2,22,2
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


// Seed: 4267279362

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    volatile int32_t g_4;
    int8_t g_5;
    volatile int8_t g_6;
    int32_t g_16;
    int8_t g_42;
    int64_t g_59;
    int64_t g_62;
    int16_t g_85;
    int32_t *g_90;
    int8_t *g_114[3][10][8];
    uint16_t g_118[10][7];
    uint64_t g_120;
    int32_t **g_125;
    int32_t g_128;
    uint64_t g_147;
    volatile uint64_t g_164;
    volatile uint64_t *g_163;
    volatile uint64_t ** volatile g_162;
    int8_t g_170;
    int32_t * volatile g_241[9];
    int32_t * volatile g_242;
    int32_t * volatile g_243;
    volatile int16_t g_246;
    int16_t *g_256[8];
    uint8_t g_291;
    volatile int32_t g_309[5];
    uint32_t g_324;
    volatile int16_t g_351;
    int32_t *g_356;
    int8_t **g_421;
    uint16_t g_629;
    int32_t ***g_635[1];
    uint64_t **g_636;
    uint8_t * volatile g_666;
    uint8_t * volatile *g_665;
    int16_t g_667;
    int32_t g_742;
    int32_t * volatile g_741;
    int64_t g_796;
    int16_t * volatile *g_862;
    int16_t * volatile * volatile * volatile g_861;
    int16_t g_884;
    int8_t g_909;
    uint32_t g_945;
    uint16_t * volatile g_956;
    uint16_t * volatile *g_955[7];
    uint64_t g_1022;
    uint64_t g_1038;
    int16_t **g_1103;
    int16_t *** volatile g_1138;
    int16_t g_1181;
    uint8_t * volatile **g_1256[2][2][2];
    uint8_t *g_1259;
    uint8_t **g_1258[7][7];
    uint8_t ***g_1257;
    uint64_t ***g_1311;
    uint32_t g_1376;
    int32_t *g_1378;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_1401);
int32_t * func_20(int32_t * p_21, struct S0 * p_1401);
int32_t * func_22(int32_t * p_23, int32_t * p_24, uint8_t  p_25, int32_t * p_26, int64_t  p_27, struct S0 * p_1401);
int32_t * func_28(int32_t * p_29, int8_t  p_30, int8_t  p_31, struct S0 * p_1401);
int32_t * func_32(uint32_t  p_33, int32_t  p_34, int32_t * p_35, int32_t  p_36, int32_t * p_37, struct S0 * p_1401);
int32_t * func_64(int64_t  p_65, int8_t * p_66, int8_t  p_67, uint64_t  p_68, int64_t  p_69, struct S0 * p_1401);
int8_t * func_96(uint32_t  p_97, int64_t * p_98, int64_t * p_99, int16_t  p_100, struct S0 * p_1401);
int32_t  func_103(int32_t  p_104, int32_t * p_105, int8_t * p_106, struct S0 * p_1401);
int32_t  func_107(uint64_t * p_108, int32_t ** p_109, int8_t ** p_110, struct S0 * p_1401);
int32_t  func_111(int8_t * p_112, uint16_t  p_113, struct S0 * p_1401);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1401->g_3 p_1401->g_356 p_1401->g_125 p_1401->g_1022 p_1401->g_128 p_1401->g_62 p_1401->g_1259 p_1401->g_291 p_1401->g_956 p_1401->g_118 p_1401->g_5 p_1401->g_796 p_1401->g_324 p_1401->g_90 p_1401->g_16 p_1401->g_6
 * writes: p_1401->g_3 p_1401->g_1181 p_1401->g_324 p_1401->g_90 p_1401->g_1022 p_1401->g_62 p_1401->g_291 p_1401->g_118 p_1401->g_909 p_1401->g_16
 */
int64_t  func_1(struct S0 * p_1401)
{ /* block id: 4 */
    int32_t *l_2[10] = {&p_1401->g_3,&p_1401->g_3,&p_1401->g_3,&p_1401->g_3,&p_1401->g_3,&p_1401->g_3,&p_1401->g_3,&p_1401->g_3,&p_1401->g_3,&p_1401->g_3};
    uint32_t l_7 = 0x90C6D21CL;
    int8_t l_54[8] = {4L,4L,4L,4L,4L,4L,4L,4L};
    int32_t l_1183 = 1L;
    uint32_t l_1224 = 0x426870F4L;
    int8_t l_1250 = 0x32L;
    int64_t l_1255[1][10][2] = {{{8L,0x1E5BF44AB47ED03AL},{8L,0x1E5BF44AB47ED03AL},{8L,0x1E5BF44AB47ED03AL},{8L,0x1E5BF44AB47ED03AL},{8L,0x1E5BF44AB47ED03AL},{8L,0x1E5BF44AB47ED03AL},{8L,0x1E5BF44AB47ED03AL},{8L,0x1E5BF44AB47ED03AL},{8L,0x1E5BF44AB47ED03AL},{8L,0x1E5BF44AB47ED03AL}}};
    uint16_t l_1262 = 0x0DD0L;
    int32_t l_1319 = (-6L);
    int32_t l_1379 = 0x36B2DB87L;
    uint64_t *l_1380[9] = {(void*)0,&p_1401->g_1038,(void*)0,(void*)0,&p_1401->g_1038,(void*)0,(void*)0,&p_1401->g_1038,(void*)0};
    int64_t *l_1385 = &p_1401->g_62;
    int32_t l_1394 = 0x751FB330L;
    int16_t l_1395 = (-1L);
    uint16_t l_1396 = 0xDAC1L;
    int32_t l_1397 = 6L;
    int32_t l_1398 = 0L;
    int8_t *l_1399 = &p_1401->g_909;
    uint32_t l_1400 = 0UL;
    int i, j, k;
    l_7++;
    for (l_7 = 0; (l_7 < 15); ++l_7)
    { /* block id: 8 */
        uint32_t l_19 = 0xCC099843L;
        int16_t l_917[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t l_1161 = (-8L);
        int64_t l_1162 = 0x11CD448B3FC0F107L;
        uint64_t *l_1182 = &p_1401->g_147;
        int32_t **l_1190 = &l_2[5];
        uint16_t l_1253 = 0x3F1FL;
        int16_t *l_1254 = &p_1401->g_1181;
        uint8_t ****l_1260 = (void*)0;
        uint8_t ****l_1261 = &p_1401->g_1257;
        int32_t l_1324 = 0x3F94088DL;
        int32_t l_1326 = 4L;
        int32_t l_1328 = 0x2AD02FE0L;
        int32_t l_1329 = 0x26C9D12DL;
        int32_t l_1331[7] = {(-8L),0x14930356L,(-8L),(-8L),0x14930356L,(-8L),(-8L)};
        int i;
        if ((p_1401->g_3 = p_1401->g_3))
        { /* block id: 10 */
            uint16_t l_55[1];
            int32_t l_60 = (-1L);
            int32_t *l_918 = &p_1401->g_3;
            int64_t l_1160 = 0x11F86A21E4115284L;
            uint64_t *l_1164 = &p_1401->g_147;
            int8_t l_1184 = 0x50L;
            int32_t **l_1203[7][6] = {{&l_2[0],&l_2[0],&p_1401->g_356,&p_1401->g_356,&p_1401->g_90,&p_1401->g_90},{&l_2[0],&l_2[0],&p_1401->g_356,&p_1401->g_356,&p_1401->g_90,&p_1401->g_90},{&l_2[0],&l_2[0],&p_1401->g_356,&p_1401->g_356,&p_1401->g_90,&p_1401->g_90},{&l_2[0],&l_2[0],&p_1401->g_356,&p_1401->g_356,&p_1401->g_90,&p_1401->g_90},{&l_2[0],&l_2[0],&p_1401->g_356,&p_1401->g_356,&p_1401->g_90,&p_1401->g_90},{&l_2[0],&l_2[0],&p_1401->g_356,&p_1401->g_356,&p_1401->g_90,&p_1401->g_90},{&l_2[0],&l_2[0],&p_1401->g_356,&p_1401->g_356,&p_1401->g_90,&p_1401->g_90}};
            uint8_t l_1238 = 0xEEL;
            int64_t l_1239 = 1L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_55[i] = 1UL;
            for (p_1401->g_3 = 0; (p_1401->g_3 != 22); p_1401->g_3 = safe_add_func_int16_t_s_s(p_1401->g_3, 6))
            { /* block id: 13 */
                uint32_t l_47 = 1UL;
                int32_t l_57 = 0x136B8055L;
                uint64_t *l_1150 = &p_1401->g_120;
                int32_t l_1240 = 0L;
                (1 + 1);
            }
        }
        else
        { /* block id: 636 */
            for (p_1401->g_1181 = (-20); (p_1401->g_1181 <= (-24)); p_1401->g_1181 = safe_sub_func_int32_t_s_s(p_1401->g_1181, 5))
            { /* block id: 639 */
                int32_t l_1245 = 1L;
                for (p_1401->g_324 = (-19); (p_1401->g_324 == 49); ++p_1401->g_324)
                { /* block id: 642 */
                    if (l_1245)
                        break;
                    if ((*p_1401->g_356))
                        continue;
                }
                (*p_1401->g_125) = &l_1183;
            }
            if ((*p_1401->g_356))
                continue;
        }
    }
    (*p_1401->g_90) |= ((l_1379 & (0x5CD8D18B186399EFL >= (++p_1401->g_1022))) > ((safe_rshift_func_uint8_t_u_s((+((*p_1401->g_1259) = (((*l_1385) |= p_1401->g_128) , (*p_1401->g_1259)))), ((*l_1399) = ((safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u(((((*p_1401->g_956) = (*p_1401->g_956)) > (safe_mul_func_uint16_t_u_u((l_1394 < (p_1401->g_5 | p_1401->g_796)), 65535UL))) < p_1401->g_324), l_1395)) <= l_1396), 1UL)), l_1397)) >= l_1398)))) , l_1400));
    return p_1401->g_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_125
 * writes: p_1401->g_90
 */
int32_t * func_20(int32_t * p_21, struct S0 * p_1401)
{ /* block id: 588 */
    int32_t *l_1140[3];
    int i;
    for (i = 0; i < 3; i++)
        l_1140[i] = &p_1401->g_128;
    (*p_1401->g_125) = p_21;
    (*p_1401->g_125) = (void*)0;
    return l_1140[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_163 p_1401->g_164 p_1401->g_162 p_1401->g_742 p_1401->g_85 p_1401->g_324 p_1401->g_3 p_1401->g_243 p_1401->g_16 p_1401->g_955 p_1401->g_170 p_1401->g_956 p_1401->g_118 p_1401->g_1022 p_1401->g_796 p_1401->g_945 p_1401->g_1038 p_1401->g_309 p_1401->g_291 p_1401->g_861 p_1401->g_862 p_1401->g_356 p_1401->g_125 p_1401->g_90 p_1401->g_741 p_1401->g_62 p_1401->g_1103 p_1401->g_256 p_1401->g_120 p_1401->g_1138 p_1401->g_667 p_1401->g_147 p_1401->g_42
 * writes: p_1401->g_667 p_1401->g_884 p_1401->g_742 p_1401->g_16 p_1401->g_170 p_1401->g_59 p_1401->g_147 p_1401->g_324 p_1401->g_1022 p_1401->g_945 p_1401->g_1038 p_1401->g_291 p_1401->g_90 p_1401->g_42 p_1401->g_62 p_1401->g_636 p_1401->g_1103 p_1401->g_629 p_1401->g_120
 */
int32_t * func_22(int32_t * p_23, int32_t * p_24, uint8_t  p_25, int32_t * p_26, int64_t  p_27, struct S0 * p_1401)
{ /* block id: 475 */
    int16_t *l_923 = &p_1401->g_667;
    int32_t ***l_926 = &p_1401->g_125;
    int16_t *l_927 = &p_1401->g_884;
    uint8_t *l_930[7][1] = {{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291}};
    int32_t l_933 = 0x116EBF95L;
    uint16_t l_938[1];
    int8_t *l_939[9] = {&p_1401->g_170,&p_1401->g_170,&p_1401->g_170,&p_1401->g_170,&p_1401->g_170,&p_1401->g_170,&p_1401->g_170,&p_1401->g_170,&p_1401->g_170};
    int32_t l_940[4][5] = {{1L,(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L,(-10L)}};
    uint64_t ***l_943 = &p_1401->g_636;
    uint32_t *l_944[8][4] = {{&p_1401->g_945,&p_1401->g_945,&p_1401->g_945,&p_1401->g_945},{&p_1401->g_945,&p_1401->g_945,&p_1401->g_945,&p_1401->g_945},{&p_1401->g_945,&p_1401->g_945,&p_1401->g_945,&p_1401->g_945},{&p_1401->g_945,&p_1401->g_945,&p_1401->g_945,&p_1401->g_945},{&p_1401->g_945,&p_1401->g_945,&p_1401->g_945,&p_1401->g_945},{&p_1401->g_945,&p_1401->g_945,&p_1401->g_945,&p_1401->g_945},{&p_1401->g_945,&p_1401->g_945,&p_1401->g_945,&p_1401->g_945},{&p_1401->g_945,&p_1401->g_945,&p_1401->g_945,&p_1401->g_945}};
    int8_t l_946 = 0x01L;
    uint16_t *l_958 = &p_1401->g_629;
    uint16_t **l_957 = &l_958;
    int8_t l_959 = (-6L);
    int32_t l_990 = 0x52B34263L;
    uint8_t **l_992 = &l_930[3][0];
    uint8_t ***l_991 = &l_992;
    uint16_t l_1113 = 65535UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_938[i] = 0x95D4L;
    (*p_23) |= ((p_25 = (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((*l_923) = 0x1FE4L), 15)) != ((~(safe_add_func_uint8_t_u_u((((*l_927) = ((l_926 == &p_1401->g_125) , (p_25 ^ (&p_1401->g_42 == (void*)0)))) ^ (p_25 & (0x040B0CB711540710L != (safe_sub_func_int16_t_s_s((p_25 | (*p_1401->g_163)), 65535UL))))), p_27))) && (**p_1401->g_162))), 0x60685DE5L))) ^ p_27);
    (*p_1401->g_243) ^= ((safe_mul_func_uint8_t_u_u(255UL, l_933)) ^ (((l_946 = (safe_mod_func_uint64_t_u_u(l_933, (safe_add_func_uint32_t_u_u(((p_1401->g_85 ^ l_933) ^ (l_938[0] != (l_940[1][1] &= p_27))), (safe_lshift_func_uint16_t_u_s(((((((l_943 != (p_1401->g_324 , (void*)0)) & p_25) == p_27) , p_25) & p_27) != l_933), p_25))))))) >= (*p_24)) >= 0x1AL));
lbl_1097:
    (*p_23) = (safe_lshift_func_uint16_t_u_s((((((safe_add_func_int8_t_s_s(0x16L, 0x43L)) < 0x78L) , (((safe_rshift_func_uint8_t_u_u(p_25, 6)) , p_1401->g_324) != (l_938[0] != ((l_926 = l_926) != (void*)0)))) <= (((((((p_1401->g_955[5] == l_957) > l_938[0]) , 0x2632500AB6903A03L) | l_933) >= p_1401->g_170) == (**p_1401->g_162)) , (*p_23))) && 0x100218B23E06E619L), l_959));
    for (p_1401->g_170 = 0; (p_1401->g_170 <= (-23)); p_1401->g_170 = safe_sub_func_int32_t_s_s(p_1401->g_170, 1))
    { /* block id: 487 */
        uint8_t **l_963 = &l_930[5][0];
        uint8_t ***l_962[1][8][3] = {{{(void*)0,&l_963,(void*)0},{(void*)0,&l_963,(void*)0},{(void*)0,&l_963,(void*)0},{(void*)0,&l_963,(void*)0},{(void*)0,&l_963,(void*)0},{(void*)0,&l_963,(void*)0},{(void*)0,&l_963,(void*)0},{(void*)0,&l_963,(void*)0}}};
        uint32_t l_970 = 0UL;
        int32_t l_993 = 3L;
        int8_t **l_998 = (void*)0;
        int8_t **l_1000 = &p_1401->g_114[1][7][6];
        int32_t l_1011 = (-1L);
        int32_t l_1026 = 0x404EC2D3L;
        int32_t l_1057 = (-9L);
        int16_t **l_1093 = &p_1401->g_256[3];
        uint64_t ***l_1126 = &p_1401->g_636;
        int32_t *l_1139[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1139[i] = &l_1026;
        for (p_1401->g_667 = 0; (p_1401->g_667 <= 6); p_1401->g_667 += 1)
        { /* block id: 490 */
            int64_t l_979[5][8][6] = {{{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L}},{{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L}},{{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L}},{{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L}},{{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L},{0x4264406D9808DC0EL,0x355CF04600F97B4AL,(-1L),0x0E233AED5338856CL,0x31CFE02A41EC55D0L,8L}}};
            int64_t *l_988 = &p_1401->g_59;
            int32_t l_989 = 4L;
            int16_t *l_1041 = &p_1401->g_667;
            int32_t **l_1048 = (void*)0;
            int8_t ***l_1079 = &p_1401->g_421;
            int8_t ***l_1083 = &p_1401->g_421;
            int i, j, k;
            l_993 &= (l_962[0][5][0] == ((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_970, (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(p_27, 6)), (safe_add_func_int8_t_s_s((l_933 &= (safe_sub_func_int16_t_s_s(((+(0UL & (0xF8L < l_979[2][0][3]))) > (l_989 |= (safe_sub_func_uint8_t_u_u(0xEFL, (l_940[1][0] == (((safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(((*l_988) = (safe_rshift_func_uint8_t_u_s((p_27 , 0xE7L), 4))), p_1401->g_16)), p_27)) , (*p_1401->g_956)) , (*p_26))))))), l_990))), 0x41L)))))), 7UL)), 1)) , l_991));
            for (p_1401->g_147 = 0; (p_1401->g_147 <= 4); p_1401->g_147 += 1)
            { /* block id: 497 */
                int8_t ***l_999 = &l_998;
                int16_t *l_1012 = &p_1401->g_884;
                int32_t l_1025[1];
                uint64_t l_1027 = 0x2ADFCFE3CEA7CF9BL;
                uint32_t l_1045[4] = {0x185A5DB6L,0x185A5DB6L,0x185A5DB6L,0x185A5DB6L};
                int32_t **l_1047 = &p_1401->g_90;
                int8_t ***l_1081 = &l_1000;
                int8_t l_1106 = (-1L);
                int32_t *l_1118[10][10] = {{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3},{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3},{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3},{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3},{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3},{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3},{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3},{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3},{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3},{&p_1401->g_128,&p_1401->g_128,&p_1401->g_3,&l_1025[0],&l_940[0][2],&l_1025[0],&p_1401->g_3,&p_1401->g_128,&p_1401->g_128,&p_1401->g_3}};
                uint64_t ***l_1125 = &p_1401->g_636;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1025[i] = (-1L);
                if ((safe_lshift_func_int8_t_s_s((l_993 = l_938[0]), (safe_sub_func_uint32_t_u_u((p_25 != (((*l_999) = l_998) != (l_1000 = l_1000))), (((safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s((((safe_add_func_int8_t_s_s((((*p_26) && (((safe_mul_func_uint8_t_u_u((8L != 18446744073709551606UL), ((((l_989 , ((l_1011 = ((*l_988) = ((safe_add_func_uint64_t_u_u(((-1L) && p_25), (*p_1401->g_163))) & (-1L)))) , p_27)) ^ 0xFCL) != 0x4A2F5FC24953F2DFL) && 0x5DF33169L))) , (-1L)) <= 0x94C4E4A6L)) >= p_1401->g_16), p_25)) || p_25) || p_25), p_27)), p_25)) | p_1401->g_118[2][1]) == 9UL))))))
                { /* block id: 503 */
                    int32_t l_1013 = 0x7FA652F9L;
                    int16_t **l_1042 = &l_927;
                    uint64_t *l_1046[9][6][4] = {{{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147}},{{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147}},{{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147}},{{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147}},{{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147}},{{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147}},{{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147}},{{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147}},{{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147},{&l_1027,(void*)0,&l_1027,&p_1401->g_147}}};
                    int i, j, k;
                    if ((((void*)0 != l_1012) | p_25))
                    { /* block id: 504 */
                        (*p_23) = (*p_24);
                    }
                    else
                    { /* block id: 506 */
                        return p_26;
                    }
                    for (p_1401->g_324 = 1; (p_1401->g_324 <= 4); p_1401->g_324 += 1)
                    { /* block id: 511 */
                        int32_t *l_1014 = &l_989;
                        int32_t *l_1015 = &l_940[2][2];
                        int32_t *l_1016 = &p_1401->g_16;
                        int32_t *l_1017 = &l_1013;
                        int32_t *l_1018 = &l_933;
                        int32_t *l_1019 = &l_1013;
                        int32_t *l_1020 = &l_933;
                        int32_t *l_1021[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1021[i] = &l_1013;
                        p_1401->g_1022--;
                        l_1027++;
                        (*l_1019) ^= (*p_23);
                    }
                    (*p_1401->g_243) = (0xC8L <= ((((p_1401->g_945 &= p_1401->g_796) & (safe_add_func_uint16_t_u_u((0x34FF167BB1CABED6L <= (p_1401->g_1022 = (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((l_1025[0] = ((+((safe_add_func_int8_t_s_s((l_1045[3] = (((p_1401->g_1038--) , ((p_25 , (void*)0) != ((*l_1042) = l_1041))) ^ ((safe_rshift_func_uint16_t_u_u(p_25, 8)) < 0x7DEC257B049D3855L))), p_27)) <= 0x89352DB5L)) && l_1013)), 1L)), 4294967295UL)))), p_27))) , l_1047) != l_1048));
                }
                else
                { /* block id: 523 */
                    uint32_t l_1092 = 1UL;
                    for (p_1401->g_945 = 0; (p_1401->g_945 <= 4); p_1401->g_945 += 1)
                    { /* block id: 526 */
                        int32_t l_1064 = 0x05FE28B6L;
                        int8_t ****l_1080 = &l_999;
                        int8_t ****l_1082 = &l_1081;
                        (*p_23) = (safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((((65527UL >= (((~(((l_1057 < ((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(l_1064, (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s((1L | ((((((*l_1080) = l_1079) != (p_25 , (l_1083 = ((*l_1082) = l_1081)))) >= (safe_mod_func_int16_t_s_s((p_1401->g_309[4] | (((**l_963) |= (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(p_25, p_25)) > 0x6F19EDABL) , 0x9CL), 2)), l_1064))) || l_1092)), p_25))) & p_25) == p_1401->g_1022)), l_1011)) <= p_25) , 18446744073709551612UL), p_27)), l_1057)) || l_1092), 7UL)), l_979[4][4][4])) <= 0x4AED679BL), p_25)) | p_27), 1UL)))) && p_25), l_1092)), p_27)) >= p_27)) , (*p_1401->g_861)) != l_1093)) != (*p_1401->g_356)) <= l_1092)) <= 0x63A9L) , p_27) == l_1064), p_1401->g_85)) , p_27), 0x4626L));
                        (**l_926) = (*p_1401->g_125);
                    }
                    for (p_1401->g_42 = 4; (p_1401->g_42 >= 1); p_1401->g_42 -= 1)
                    { /* block id: 536 */
                        return (*l_1047);
                    }
                    return (*p_1401->g_125);
                }
                for (l_1057 = 0; (l_1057 <= 8); l_1057 += 1)
                { /* block id: 543 */
                    uint8_t l_1094[3][8][1] = {{{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L}},{{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L}},{{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L},{0xC8L}}};
                    uint64_t *l_1099[9][8] = {{&p_1401->g_120,&p_1401->g_120,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_120},{&p_1401->g_120,&p_1401->g_120,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_120},{&p_1401->g_120,&p_1401->g_120,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_120},{&p_1401->g_120,&p_1401->g_120,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_120},{&p_1401->g_120,&p_1401->g_120,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_120},{&p_1401->g_120,&p_1401->g_120,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_120},{&p_1401->g_120,&p_1401->g_120,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_120},{&p_1401->g_120,&p_1401->g_120,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_120},{&p_1401->g_120,&p_1401->g_120,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_1022,&p_1401->g_120,&p_1401->g_120}};
                    uint64_t **l_1098 = &l_1099[6][2];
                    int16_t ***l_1102[6];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1102[i] = &l_1093;
                    l_1094[0][6][0]--;
                    if (l_989)
                        goto lbl_1097;
                    for (p_1401->g_62 = 5; (p_1401->g_62 >= 0); p_1401->g_62 -= 1)
                    { /* block id: 548 */
                        return p_26;
                    }
                    (*p_23) = ((((*l_943) = l_1098) == &p_1401->g_163) && (safe_lshift_func_uint16_t_u_s(((*l_958) = ((p_1401->g_1103 = &p_1401->g_256[3]) != (*p_1401->g_861))), 1)));
                }
                (*p_1401->g_125) = (void*)0;
                if ((safe_add_func_uint64_t_u_u((((*p_23) & (l_989 = (l_1106 ^ ((safe_mul_func_uint8_t_u_u(((~((((safe_add_func_int32_t_s_s((*p_1401->g_741), p_1401->g_62)) && (safe_add_func_int32_t_s_s((l_1113 = 0x4D7095D7L), (safe_rshift_func_uint16_t_u_u((~(0x3F2DL == (&p_25 == (void*)0))), 12))))) < (safe_mod_func_uint8_t_u_u(1UL, 0xFEL))) <= 0x48L)) , l_1057), p_27)) == p_27)))) <= 18446744073709551607UL), 0x403664047DCFEFF6L)))
                { /* block id: 559 */
                    int16_t *l_1124 = &p_1401->g_85;
                    int32_t l_1127 = 0x7061221DL;
                    int32_t l_1137 = 0x5A552F6AL;
                    for (p_1401->g_291 = 1; (p_1401->g_291 <= 6); p_1401->g_291 += 1)
                    { /* block id: 562 */
                        int64_t l_1121 = 0L;
                        uint64_t *l_1128 = &p_1401->g_120;
                        l_940[0][2] |= (+(p_25 && (safe_mul_func_uint16_t_u_u(l_1121, (safe_div_func_int16_t_s_s(((*p_26) <= (l_993 & ((((+(((((l_1124 != (*p_1401->g_1103)) >= (l_1127 &= (l_1125 == l_1126))) & ((((((*l_1128)--) , ((*p_23) = ((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((((l_1121 & l_970) & l_993) <= p_27), p_25)), p_1401->g_118[2][1])), 1)) >= (*p_26)))) | l_1137) == (*p_1401->g_243)) && 0xC6DDEC2E214CEBF6L)) != p_1401->g_1038) & (*p_24))) , 0x2105L) >= l_1057) & l_993))), 1L))))));
                    }
                    for (l_989 = 6; (l_989 >= 0); l_989 -= 1)
                    { /* block id: 570 */
                        return p_23;
                    }
                    (*p_1401->g_125) = p_24;
                }
                else
                { /* block id: 574 */
                    for (l_993 = 4; (l_993 >= 1); l_993 -= 1)
                    { /* block id: 577 */
                        (*p_1401->g_1138) = &l_1012;
                        return p_23;
                    }
                }
            }
        }
        (*p_1401->g_243) = (-1L);
        if ((*p_26))
            break;
    }
    return (*p_1401->g_125);
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_125
 * writes: p_1401->g_90
 */
int32_t * func_28(int32_t * p_29, int8_t  p_30, int8_t  p_31, struct S0 * p_1401)
{ /* block id: 472 */
    int32_t *l_916 = &p_1401->g_742;
    (*p_1401->g_125) = p_29;
    return l_916;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_16 p_1401->g_62 p_1401->g_3 p_1401->g_4 p_1401->g_42 p_1401->g_5 p_1401->g_85 p_1401->g_90 p_1401->g_114 p_1401->g_118 p_1401->g_120 p_1401->g_128 p_1401->g_125 p_1401->g_59 p_1401->g_246 p_1401->g_147 p_1401->g_170 p_1401->g_163 p_1401->g_164 p_1401->g_309 p_1401->g_324 p_1401->g_351 p_1401->g_356 p_1401->g_243 p_1401->g_629 p_1401->g_291 p_1401->g_162 p_1401->g_256 p_1401->g_741 p_1401->g_742 p_1401->g_667 p_1401->g_796 p_1401->g_861 p_1401->g_909
 * writes: p_1401->g_62 p_1401->g_85 p_1401->g_16 p_1401->g_90 p_1401->g_118 p_1401->g_120 p_1401->g_125 p_1401->g_128 p_1401->g_59 p_1401->g_243 p_1401->g_256 p_1401->g_147 p_1401->g_170 p_1401->g_42 p_1401->g_114 p_1401->g_291 p_1401->g_324 p_1401->g_742 p_1401->g_796 p_1401->g_667 p_1401->g_884 p_1401->g_241 p_1401->g_909
 */
int32_t * func_32(uint32_t  p_33, int32_t  p_34, int32_t * p_35, int32_t  p_36, int32_t * p_37, struct S0 * p_1401)
{ /* block id: 26 */
    uint64_t l_63 = 7UL;
    int8_t *l_81 = &p_1401->g_5;
    int32_t *l_369 = &p_1401->g_3;
    int32_t l_713 = 7L;
    int16_t **l_730 = &p_1401->g_256[3];
    int32_t l_745[6][4] = {{4L,0x4CD94330L,4L,4L},{4L,0x4CD94330L,4L,4L},{4L,0x4CD94330L,4L,4L},{4L,0x4CD94330L,4L,4L},{4L,0x4CD94330L,4L,4L},{4L,0x4CD94330L,4L,4L}};
    uint16_t *l_808 = &p_1401->g_118[8][5];
    uint64_t l_828 = 0x293D111D31514155L;
    uint64_t *l_832 = (void*)0;
    uint64_t **l_831 = &l_832;
    uint32_t l_857 = 4294967290UL;
    int64_t l_915 = 0x32CBB2D8EB96C968L;
    int i, j;
    p_1401->g_62 |= p_1401->g_16;
    if (l_63)
    { /* block id: 28 */
        int16_t l_86 = 0x3C42L;
        uint32_t l_95[2];
        int32_t l_699[9][7][1] = {{{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L}},{{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L}},{{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L}},{{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L}},{{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L}},{{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L}},{{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L}},{{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L}},{{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L},{0x6CFC8D49L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_95[i] = 0xEC4FEF29L;
        if ((*p_37))
        { /* block id: 29 */
            uint64_t *l_76 = (void*)0;
            uint64_t *l_77 = &l_63;
            int8_t **l_78 = (void*)0;
            int8_t *l_80 = &p_1401->g_42;
            int8_t **l_79 = &l_80;
            int32_t l_82 = (-6L);
            int16_t *l_83 = (void*)0;
            int16_t *l_84 = &p_1401->g_85;
            int32_t *l_89 = &p_1401->g_3;
            int32_t **l_88[7][1];
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_88[i][j] = &l_89;
            }
            p_1401->g_90 = func_64((safe_div_func_int32_t_s_s(((*p_37) = (safe_add_func_int64_t_s_s(((safe_div_func_uint8_t_u_u((((*l_77) = 1UL) | ((void*)0 == &p_1401->g_42)), p_1401->g_62)) | (((p_1401->g_62 , ((*l_84) = ((((*l_79) = (void*)0) != l_81) | ((((((((void*)0 == &p_1401->g_62) ^ 0x52544EE7L) & 0x0BEBL) || l_82) | (*p_37)) == 18446744073709551613UL) ^ p_1401->g_3)))) | p_1401->g_4) , 0x653C2AD413ED7628L)), p_1401->g_3))), p_1401->g_42)), &p_1401->g_5, p_1401->g_5, p_36, l_86, p_1401);
            return p_35;
        }
        else
        { /* block id: 39 */
            uint64_t *l_129 = &p_1401->g_120;
            int32_t *l_696 = &p_1401->g_16;
            for (p_33 = 0; (p_33 <= 9); p_33 = safe_add_func_uint64_t_u_u(p_33, 9))
            { /* block id: 42 */
                uint16_t l_693 = 0x67C2L;
                uint8_t *l_700 = (void*)0;
                uint8_t *l_701 = &p_1401->g_291;
                uint16_t *l_704[10][3][3] = {{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}},{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}},{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}},{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}},{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}},{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}},{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}},{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}},{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}},{{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693},{&p_1401->g_118[2][1],(void*)0,&l_693}}};
                int i, j, k;
                for (p_34 = 0; (p_34 >= (-9)); p_34 = safe_sub_func_int32_t_s_s(p_34, 1))
                { /* block id: 45 */
                    uint16_t *l_117 = &p_1401->g_118[2][1];
                    uint64_t **l_130 = &l_129;
                    int32_t **l_131 = &p_1401->g_90;
                    int64_t *l_688 = (void*)0;
                    int8_t *l_689 = &p_1401->g_42;
                    uint64_t l_690[1][7] = {{0x68557D082258C24DL,1UL,0x68557D082258C24DL,0x68557D082258C24DL,1UL,0x68557D082258C24DL,0x68557D082258C24DL}};
                    int i, j;
                    for (p_1401->g_85 = 1; (p_1401->g_85 >= 0); p_1401->g_85 -= 1)
                    { /* block id: 48 */
                        int i;
                        (*p_1401->g_90) |= l_95[p_1401->g_85];
                    }
                    (*l_131) = func_64(p_34, (l_689 = func_96((safe_mul_func_int16_t_s_s((func_103(func_107(((*l_130) = (func_111(p_1401->g_114[1][7][6], ((*l_117) |= ((safe_lshift_func_int8_t_s_u(p_34, 7)) & p_1401->g_62)), p_1401) , ((p_34 , (**p_1401->g_125)) , l_129))), l_131, &p_1401->g_114[1][7][6], p_1401), l_369, &p_1401->g_5, p_1401) , 0x721CL), (*l_369))), l_688, l_688, p_34, p_1401)), p_34, p_1401->g_629, l_690[0][1], p_1401);
                    (*p_37) = (*p_37);
                }
                for (p_1401->g_170 = 1; (p_1401->g_170 != 0); p_1401->g_170 = safe_sub_func_uint16_t_u_u(p_1401->g_170, 2))
                { /* block id: 388 */
                    --l_693;
                }
                p_35 = (l_696 = l_369);
                (**p_1401->g_125) = ((safe_mod_func_uint64_t_u_u((*l_696), l_86)) && (((249UL || (--(*l_701))) & (p_1401->g_118[2][1] = p_1401->g_85)) <= (l_699[2][0][0] < ((safe_rshift_func_uint8_t_u_u(0x82L, (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((l_95[1] < (1L && (safe_sub_func_int32_t_s_s(0x53458828L, p_34)))), p_34)) & 0L), p_34)))) , l_95[0]))));
            }
        }
        (*p_1401->g_90) &= (l_713 <= (safe_rshift_func_uint16_t_u_u(65529UL, (l_699[2][0][0] ^= 0xE191L))));
    }
    else
    { /* block id: 400 */
        uint32_t l_718 = 0x4676C880L;
        int32_t l_729 = 1L;
        int16_t **l_731 = &p_1401->g_256[6];
        int32_t l_732 = 0x45FF7ECAL;
        uint16_t l_738 = 0x3BFCL;
        uint32_t l_757 = 0x725C738EL;
        int32_t l_776 = 0x2D77538FL;
        int32_t l_777 = 0x322F2423L;
        int32_t l_778 = 0x5CD7FF5BL;
        int32_t l_779 = 1L;
        int32_t l_780 = 1L;
        int8_t l_781 = 0L;
        int32_t l_782[9];
        int32_t ***l_797 = (void*)0;
        int32_t l_852 = (-2L);
        uint8_t *l_856 = &p_1401->g_291;
        uint8_t **l_855 = &l_856;
        uint8_t ***l_854[3][2][4] = {{{&l_855,&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855,&l_855}},{{&l_855,&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855,&l_855}},{{&l_855,&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855,&l_855}}};
        uint64_t **l_876[10][7] = {{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0},{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0},{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0},{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0},{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0},{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0},{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0},{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0},{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0},{&l_832,&l_832,&l_832,&l_832,(void*)0,(void*)0,(void*)0}};
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_782[i] = 0x55CF284BL;
        if (((0x63L >= ((p_1401->g_3 < p_1401->g_59) | (safe_lshift_func_int16_t_s_u(((l_718--) & (safe_add_func_uint64_t_u_u((**p_1401->g_162), (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((((((safe_sub_func_int64_t_s_s(l_729, 0L)) ^ ((((p_1401->g_324 && (!((((0UL == (p_33 < p_36)) | 0x244237A4F90BA3A7L) > p_1401->g_170) && (-1L)))) >= 0x131F4ABCL) && l_729) || 0x1DB154EF69D98DE0L)) < p_1401->g_118[2][1]) , l_730) != l_731) != p_33) == (*p_37)), l_732)), (*l_369)))))), 7)))) != p_36))
        { /* block id: 402 */
            int32_t *l_735 = &l_729;
            int64_t *l_739 = &p_1401->g_62;
            int32_t *l_740 = (void*)0;
            (*p_1401->g_741) ^= ((((*l_739) = ((((void*)0 == (*l_730)) < (safe_add_func_int64_t_s_s(p_34, (p_1401->g_128 && (((*l_735) = ((*p_37) = ((void*)0 != (*l_731)))) > (0L & (((safe_mul_func_int8_t_s_s(((((void*)0 == &p_1401->g_125) , (void*)0) == (void*)0), (*l_369))) >= 0x71D2A08DA3EDF3C1L) | p_36))))))) >= l_738)) | l_718) , (*p_1401->g_356));
        }
        else
        { /* block id: 407 */
            int8_t l_756 = 0x3EL;
            int32_t *l_771 = &l_745[3][3];
            int32_t *l_772 = (void*)0;
            int32_t l_773 = 6L;
            int32_t *l_774 = (void*)0;
            int32_t *l_775[6] = {&l_729,&l_729,&l_729,&l_729,&l_729,&l_729};
            uint32_t l_783 = 0x6A0AB9C8L;
            uint8_t *l_812[8][4][4] = {{{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291}},{{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291}},{{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291}},{{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291}},{{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291}},{{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291}},{{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291}},{{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291},{&p_1401->g_291,(void*)0,&p_1401->g_291,&p_1401->g_291}}};
            uint8_t **l_811 = &l_812[7][1][1];
            uint32_t l_858 = 4294967289UL;
            int16_t *l_894[2][9][1] = {{{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884}},{{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884},{&p_1401->g_884}}};
            uint16_t *l_914 = (void*)0;
            uint16_t **l_913 = &l_914;
            int i, j, k;
            for (p_34 = 18; (p_34 < (-13)); p_34 = safe_sub_func_int64_t_s_s(p_34, 3))
            { /* block id: 410 */
                int32_t *l_746 = &p_1401->g_742;
                int32_t *l_747 = (void*)0;
                int32_t *l_748 = &l_745[3][3];
                int32_t *l_749 = (void*)0;
                int32_t *l_750 = &l_729;
                int32_t *l_751 = &p_1401->g_742;
                int32_t *l_752 = &l_729;
                int32_t *l_753 = (void*)0;
                int32_t *l_754 = &l_729;
                int32_t *l_755[2];
                uint64_t *l_770 = &p_1401->g_120;
                int i;
                for (i = 0; i < 2; i++)
                    l_755[i] = &l_745[4][3];
                --l_757;
                (*l_752) = (p_33 && ((safe_add_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((((((void*)0 != p_37) > (((&p_1401->g_666 == (void*)0) ^ 0x375D41CDL) & (1L < 9UL))) , ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((*l_770) ^= p_34), p_33)), (*l_369))) > p_1401->g_629)) , (*l_369)), l_738)) , p_36) || 0UL), (-1L))) || (*l_369)));
            }
            l_783--;
            if ((*l_771))
            { /* block id: 416 */
                int8_t l_800[6][3][7] = {{{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L}},{{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L}},{{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L}},{{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L}},{{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L}},{{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L},{5L,0x33L,1L,(-1L),0L,0L,0L}}};
                uint32_t *l_801 = &l_783;
                uint8_t **l_810 = (void*)0;
                uint8_t ***l_809 = &l_810;
                uint32_t *l_813 = &l_718;
                int8_t *l_814 = &l_781;
                int64_t *l_815 = (void*)0;
                int64_t *l_816 = &p_1401->g_62;
                int i, j, k;
                (*p_37) = (safe_rshift_func_int16_t_s_u(((p_36 | (safe_div_func_int64_t_s_s(((*l_816) ^= ((safe_sub_func_int8_t_s_s(((*l_814) = (safe_add_func_int16_t_s_s((((*l_813) = (p_33 = (0x2DD0L < ((((*l_809) = ((safe_sub_func_int32_t_s_s(((((p_1401->g_796 = p_36) , (l_797 != &p_1401->g_125)) == (((((((safe_sub_func_uint32_t_u_u(((*l_801) |= l_800[1][2][6]), (~(safe_rshift_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s((((p_1401->g_667 >= (safe_sub_func_uint16_t_u_u(p_36, 0x3128L))) || p_33) <= 0x58L), p_33)) & p_33) <= (**p_1401->g_162)), 6))))) | p_34) , p_1401->g_4) , (void*)0) == l_808) < 0x62FDL) | 2L)) , (*p_37)), (*l_771))) , (void*)0)) == l_811) , 3UL)))) , 0x0E93L), p_1401->g_120))), (*l_369))) ^ p_36)), p_34))) >= p_1401->g_118[8][6]), p_34));
            }
            else
            { /* block id: 425 */
                uint64_t l_827 = 6UL;
                uint64_t *l_830 = &l_828;
                uint64_t **l_829 = &l_830;
                int32_t l_835 = (-6L);
                int64_t *l_853 = &p_1401->g_62;
                uint16_t l_875 = 65535UL;
                int16_t ***l_880 = &l_730;
                for (l_778 = (-26); (l_778 <= (-25)); ++l_778)
                { /* block id: 428 */
                    uint16_t **l_819 = &l_808;
                    int32_t l_824[3][5][5] = {{{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L}},{{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L}},{{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L},{0x393CBD86L,0x5BAD05F9L,1L,(-1L),1L}}};
                    int64_t *l_833 = &p_1401->g_796;
                    int8_t *l_834 = &l_781;
                    int i, j, k;
                    (**p_1401->g_125) = (((*l_819) = l_808) != (p_1401->g_796 , ((((((((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((p_36 <= l_824[1][3][1]) > (l_835 = (l_776 = ((safe_mod_func_uint64_t_u_u((+(*p_1401->g_163)), (((*l_834) |= ((((((((((*l_833) = ((((+((l_827 > (*p_37)) == (l_828 == (0UL <= p_1401->g_16)))) | p_1401->g_128) , l_829) == l_831)) & 0L) >= p_1401->g_118[2][1]) , p_33) >= p_36) && (*l_369)) > p_36) == p_1401->g_120) ^ 0x4B6E4BB6L)) && p_1401->g_120))) == 0x18L)))), p_1401->g_62)), (*l_369))) , 0x0139L) , (void*)0) != l_834) == 248UL) | 0x7F7C191FL) >= 0x110F94CF8CF10CEBL) , &p_1401->g_118[2][1])));
                    return (*p_1401->g_125);
                }
                l_369 = func_64(((((l_730 == ((((p_1401->g_351 > ((!(p_1401->g_291 , ((safe_div_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((*l_771), (safe_mul_func_int8_t_s_s(((l_827 > (((+(((*l_853) ^= ((safe_div_func_int32_t_s_s(((p_1401->g_42 > (safe_add_func_uint64_t_u_u(((((((*l_808) = (safe_lshift_func_int16_t_s_u(0x0A21L, p_1401->g_3))) > (safe_add_func_uint8_t_u_u((p_1401->g_291 = (l_729 = ((*p_37) , p_36))), (*l_771)))) , 1UL) <= 0xF6L) , p_36), l_852))) <= (-1L)), p_1401->g_796)) || p_36)) & (*l_771))) , l_854[0][1][0]) != (void*)0)) , l_857), 5L)))) && l_827), (*l_369))) || l_835) ^ (-1L)) || (*l_369)), l_827)) , 0x71D4C4730C94B6DAL))) && 0x4ECF375F0902F86FL)) == l_835) < l_858) , &p_1401->g_256[3])) | (*l_369)) < 4294967293UL) < 0x0BL), &l_756, (*l_771), p_36, p_1401->g_147, p_1401);
                for (l_738 = 0; (l_738 <= 8); l_738 += 1)
                { /* block id: 444 */
                    int16_t *l_877 = &p_1401->g_85;
                    int16_t *l_878 = (void*)0;
                    int16_t *l_879 = &p_1401->g_667;
                    uint16_t **l_899 = (void*)0;
                    uint16_t **l_900 = &l_808;
                    uint32_t *l_905 = &l_718;
                    uint32_t *l_908[3][9][9] = {{{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783}},{{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783}},{{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783},{(void*)0,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783}}};
                    int16_t ***l_912 = &l_730;
                    int i, j, k;
                    if ((safe_add_func_int16_t_s_s((p_1401->g_861 != ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((p_36 | 1L), (l_835 &= 3UL))), (((safe_mul_func_uint16_t_u_u(l_875, (*l_369))) <= ((&p_1401->g_163 == l_876[0][3]) > (+((*l_879) = ((*l_877) = 1L))))) < p_34))), p_1401->g_62)) >= 18446744073709551606UL) > p_1401->g_742) , p_33), 5)), 2)) , l_880)), (*l_369))))
                    { /* block id: 448 */
                        uint32_t *l_883[1];
                        int16_t *l_893 = &p_1401->g_667;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_883[i] = &l_783;
                        (*l_771) &= (safe_mod_func_uint16_t_u_u((((p_1401->g_884 = ((l_782[l_738] = (*l_369)) , l_782[l_738])) == (*p_1401->g_356)) | p_34), (safe_lshift_func_uint16_t_u_s((l_835 <= 0x4C84DF75L), 6))));
                        l_782[7] &= ((safe_lshift_func_int8_t_s_u((0x59163477433F7E7AL | p_33), 7)) == (((safe_add_func_uint64_t_u_u(p_34, (-8L))) == (safe_div_func_int32_t_s_s((((*l_369) ^ 0x1DL) | ((((((*l_730) = l_893) != l_894[1][1][0]) > ((*l_853) &= (safe_lshift_func_int8_t_s_s(p_34, (*l_369))))) ^ 1L) , (*l_369))), p_1401->g_118[2][1]))) & 7L));
                        p_1401->g_241[l_738] = p_35;
                        if ((*l_369))
                            continue;
                    }
                    else
                    { /* block id: 457 */
                        int i;
                        (*p_1401->g_90) &= 1L;
                    }
                    (*p_1401->g_741) |= (safe_lshift_func_int16_t_s_u(((l_915 = ((((*l_900) = &p_1401->g_118[2][1]) != (void*)0) < ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((p_1401->g_909 ^= ((*l_905)++)) == (l_835 = (p_33 = (safe_mul_func_int8_t_s_s((l_835 && (&l_730 != (p_36 , l_912))), ((0xB38CL != 0x4E41L) || ((void*)0 != l_913))))))), p_1401->g_147)), p_34)) ^ p_34))) > 0x59L), 11));
                }
            }
        }
    }
    return p_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_16
 * writes: p_1401->g_16
 */
int32_t * func_64(int64_t  p_65, int8_t * p_66, int8_t  p_67, uint64_t  p_68, int64_t  p_69, struct S0 * p_1401)
{ /* block id: 34 */
    int32_t *l_87 = &p_1401->g_16;
    (*l_87) |= p_65;
    return &p_1401->g_16;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_96(uint32_t  p_97, int64_t * p_98, int64_t * p_99, int16_t  p_100, struct S0 * p_1401)
{ /* block id: 380 */
    return &p_1401->g_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_356 p_1401->g_3 p_1401->g_62 p_1401->g_170 p_1401->g_243 p_1401->g_16 p_1401->g_128 p_1401->g_118 p_1401->g_125 p_1401->g_90 p_1401->g_42 p_1401->g_163 p_1401->g_164 p_1401->g_324 p_1401->g_59 p_1401->g_120 l_60
 * writes: p_1401->g_128 p_1401->g_147 p_1401->g_16 p_1401->g_90 p_1401->g_324 p_1401->g_120
 */
int32_t  func_103(int32_t  p_104, int32_t * p_105, int8_t * p_106, struct S0 * p_1401)
{ /* block id: 240 */
    int32_t *l_370[3][8] = {{(void*)0,&p_1401->g_3,(void*)0,(void*)0,&p_1401->g_3,(void*)0,(void*)0,&p_1401->g_3},{(void*)0,&p_1401->g_3,(void*)0,(void*)0,&p_1401->g_3,(void*)0,(void*)0,&p_1401->g_3},{(void*)0,&p_1401->g_3,(void*)0,(void*)0,&p_1401->g_3,(void*)0,(void*)0,&p_1401->g_3}};
    int32_t l_373[9] = {0x247770A3L,0x31239608L,0x247770A3L,0x247770A3L,0x31239608L,0x247770A3L,0x247770A3L,0x31239608L,0x247770A3L};
    uint32_t l_376 = 0xA64805D4L;
    uint16_t *l_378 = (void*)0;
    uint8_t l_397 = 6UL;
    int16_t l_411[1];
    int8_t l_412 = 0x25L;
    int32_t l_427 = 0x22FA8EE7L;
    int8_t **l_447[4][9] = {{&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7]},{&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7]},{&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7]},{&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7],&p_1401->g_114[2][1][7]}};
    int16_t l_496 = 0x0622L;
    int8_t l_521 = 0x0BL;
    int32_t l_529 = 1L;
    int32_t l_530 = (-4L);
    int8_t l_532 = 0x31L;
    uint32_t l_533[2][6][5] = {{{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L}},{{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L},{3UL,0x5D68EAF7L,0x3E0D177FL,0xA4389031L,0x64744DF4L}}};
    int16_t **l_567 = &p_1401->g_256[3];
    int16_t ***l_566 = &l_567;
    int64_t l_608[3][8][4] = {{{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL}},{{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL}},{{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL},{0x3E2542881FBA5254L,0x3E2542881FBA5254L,0x3E32E1E8D04F25E9L,0x657EB4FB7211B73EL}}};
    int32_t l_632[5][6][3] = {{{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL}},{{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL}},{{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL}},{{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL}},{{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL},{(-1L),0x3659998CL,0x50C9DEBEL}}};
    uint32_t l_633 = 0x8396844CL;
    int32_t ***l_634[8][5] = {{&p_1401->g_125,(void*)0,&p_1401->g_125,(void*)0,&p_1401->g_125},{&p_1401->g_125,(void*)0,&p_1401->g_125,(void*)0,&p_1401->g_125},{&p_1401->g_125,(void*)0,&p_1401->g_125,(void*)0,&p_1401->g_125},{&p_1401->g_125,(void*)0,&p_1401->g_125,(void*)0,&p_1401->g_125},{&p_1401->g_125,(void*)0,&p_1401->g_125,(void*)0,&p_1401->g_125},{&p_1401->g_125,(void*)0,&p_1401->g_125,(void*)0,&p_1401->g_125},{&p_1401->g_125,(void*)0,&p_1401->g_125,(void*)0,&p_1401->g_125},{&p_1401->g_125,(void*)0,&p_1401->g_125,(void*)0,&p_1401->g_125}};
    uint64_t *l_644 = &p_1401->g_147;
    uint64_t **l_643 = &l_644;
    uint16_t l_673 = 0xE827L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_411[i] = (-6L);
    p_1401->g_128 &= ((p_104 = (*p_1401->g_356)) < ((safe_add_func_int8_t_s_s((&p_1401->g_114[1][7][6] != (void*)0), (((l_373[2] == p_1401->g_62) <= (safe_mod_func_uint8_t_u_u(8UL, p_1401->g_170))) >= (*p_1401->g_243)))) & (l_376 != 0xD8B566A6466EB96BL)));
    if (((safe_unary_minus_func_uint16_t_u(p_1401->g_118[2][2])) , (l_378 == l_378)))
    { /* block id: 243 */
        return p_1401->g_118[8][5];
    }
    else
    { /* block id: 245 */
        int32_t l_383 = 0x6CAF0863L;
        int8_t l_392[10] = {0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL};
        uint64_t *l_395 = &p_1401->g_147;
        int8_t *l_396[9];
        int32_t l_426 = 8L;
        int32_t l_428 = 0x5F072D49L;
        int32_t l_429 = (-6L);
        int32_t l_430 = 9L;
        int32_t l_434 = 6L;
        int32_t l_435 = (-1L);
        int32_t l_436 = (-7L);
        int32_t l_437 = 0x3DDFE50AL;
        int32_t l_438 = 0x49F13F67L;
        int32_t l_440 = 0L;
        int32_t l_442 = 0x4EB39BC6L;
        uint8_t l_443[7][4] = {{255UL,0x94L,255UL,255UL},{255UL,0x94L,255UL,255UL},{255UL,0x94L,255UL,255UL},{255UL,0x94L,255UL,255UL},{255UL,0x94L,255UL,255UL},{255UL,0x94L,255UL,255UL},{255UL,0x94L,255UL,255UL}};
        uint32_t l_497 = 0x3DAE5BF8L;
        int i, j;
        for (i = 0; i < 9; i++)
            l_396[i] = &l_392[5];
        if ((safe_sub_func_int8_t_s_s((l_383 = (((((*l_395) = (safe_sub_func_int32_t_s_s(l_383, (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(4UL, p_104)), (safe_div_func_uint16_t_u_u(((&p_1401->g_114[1][7][6] != &p_1401->g_114[2][3][5]) >= (safe_rshift_func_int8_t_s_s((1UL < ((l_392[2] && 1UL) < (safe_div_func_int32_t_s_s(((*p_1401->g_356) , 0L), (**p_1401->g_125))))), 5))), p_1401->g_42))))))) == p_104) , (void*)0) != &p_1401->g_241[6])), l_397)))
        { /* block id: 248 */
            int64_t l_408[6][4][4] = {{{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L}},{{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L}},{{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L}},{{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L}},{{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L}},{{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L},{(-8L),0x4B9C93A73619E2B9L,0x5391C8D4B4F2838DL,9L}}};
            uint8_t *l_410 = &l_397;
            uint8_t **l_409 = &l_410;
            uint8_t l_413 = 255UL;
            int32_t l_424 = 6L;
            int32_t l_425 = 0L;
            int32_t l_431 = 0x7F7BA54BL;
            int32_t l_432 = 0x261503D2L;
            int32_t l_433 = 0x29592596L;
            int32_t l_439 = 0x4F8D5809L;
            int32_t l_441[6];
            uint64_t l_478 = 18446744073709551615UL;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_441[i] = 0x710CADBFL;
            l_383 ^= (*p_105);
            (*p_1401->g_125) = func_64((0x1DL >= (0x3F224DAAL > 4294967291UL)), p_106, (safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((~((!((((safe_rshift_func_int16_t_s_u(((((safe_lshift_func_uint16_t_u_u((&p_1401->g_114[0][1][0] != (void*)0), ((safe_rshift_func_uint16_t_u_s(l_408[4][2][1], (((((*l_409) = &p_1401->g_291) != &p_1401->g_291) > 0xCD374335F50D609DL) != p_104))) , 0x2D5EL))) == 0xE079AC501F64214DL) == p_104) >= l_411[0]), 12)) == (*p_1401->g_163)) | p_104) || 0x20L)) == 0x2A3AL)), l_412)) > 0x59B9L), 65535UL)), l_392[2], l_413, p_1401);
            for (p_1401->g_324 = (-8); (p_1401->g_324 <= 16); p_1401->g_324++)
            { /* block id: 254 */
                int16_t l_420 = 1L;
                int32_t l_422[7][2][6] = {{{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L},{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L}},{{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L},{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L}},{{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L},{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L}},{{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L},{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L}},{{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L},{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L}},{{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L},{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L}},{{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L},{6L,0L,0x5C57BA03L,0x2BCA3F59L,0x5C57BA03L,0L}}};
                int64_t l_423 = 1L;
                int i, j, k;
                (1 + 1);
            }
        }
        else
        { /* block id: 293 */
            l_440 = l_436;
            return p_1401->g_59;
        }
    }
    for (p_1401->g_120 = (-29); (p_1401->g_120 <= 40); p_1401->g_120 = safe_add_func_int16_t_s_s(p_1401->g_120, 4))
    { /* block id: 300 */
        int32_t l_500 = (-3L);
        int32_t l_501 = 0x2F7A590EL;
        int32_t l_502 = 1L;
        int32_t l_503 = 0x309A9FCBL;
        int32_t l_504 = (-8L);
        int32_t l_505 = (-1L);
        int32_t l_506 = (-6L);
        int32_t l_507 = 1L;
        int32_t l_508 = 0x255DEDC6L;
        int32_t l_509 = (-1L);
        int32_t l_510 = 4L;
        int8_t l_511[4][4] = {{0x0DL,0x2FL,0x11L,0x2FL},{0x0DL,0x2FL,0x11L,0x2FL},{0x0DL,0x2FL,0x11L,0x2FL},{0x0DL,0x2FL,0x11L,0x2FL}};
        int32_t l_512 = (-4L);
        int32_t l_513 = 0x1B26B88DL;
        int32_t l_514 = 0x536D7113L;
        int32_t l_515 = 0x04B8DE71L;
        uint8_t l_516 = 0xE7L;
        int32_t l_531[4][6] = {{6L,0x0523AFC1L,5L,0x4D728708L,5L,0x0523AFC1L},{6L,0x0523AFC1L,5L,0x4D728708L,5L,0x0523AFC1L},{6L,0x0523AFC1L,5L,0x4D728708L,5L,0x0523AFC1L},{6L,0x0523AFC1L,5L,0x4D728708L,5L,0x0523AFC1L}};
        uint16_t l_549 = 1UL;
        uint64_t **l_592 = (void*)0;
        int64_t l_672 = 0x731E4DAEEB738D1AL;
        uint64_t l_682[6] = {0xB7DEFDA470348FF8L,0UL,0xB7DEFDA470348FF8L,0xB7DEFDA470348FF8L,0UL,0xB7DEFDA470348FF8L};
        uint16_t *l_683 = &p_1401->g_118[4][0];
        int i, j;
        ++l_516;
    }
    return p_104;
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_128 p_1401->g_59 p_1401->g_120 p_1401->g_125 p_1401->g_90 p_1401->g_16 p_1401->g_246 p_1401->g_3 p_1401->g_147 p_1401->g_170 p_1401->g_42 p_1401->g_114 p_1401->g_118 p_1401->g_4 p_1401->g_163 p_1401->g_164 p_1401->g_85 p_1401->g_62 p_1401->g_309 p_1401->g_5 p_1401->g_324 p_1401->g_351 p_1401->g_356 p_1401->g_291 l_60
 * writes: p_1401->g_128 p_1401->g_59 p_1401->g_120 p_1401->g_90 p_1401->g_243 p_1401->g_256 p_1401->g_16 p_1401->g_62 p_1401->g_147 p_1401->g_170 p_1401->g_42 p_1401->g_114 p_1401->g_85 p_1401->g_291 l_60
 */
int32_t  func_107(uint64_t * p_108, int32_t ** p_109, int8_t ** p_110, struct S0 * p_1401)
{ /* block id: 65 */
    uint8_t l_159[5] = {4UL,4UL,4UL,4UL,4UL};
    uint64_t *l_183 = &p_1401->g_147;
    int32_t l_228 = 0x3EC65207L;
    int32_t *l_248 = &p_1401->g_3;
    int32_t **l_247[8][5][6] = {{{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248}},{{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248}},{{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248}},{{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248}},{{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248}},{{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248}},{{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248}},{{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,&l_248,&l_248,&l_248}}};
    int8_t **l_249 = (void*)0;
    int16_t *l_251 = &p_1401->g_85;
    int32_t l_346 = (-1L);
    int16_t l_364 = 0x6ED9L;
    int i, j, k;
    for (p_1401->g_128 = 10; (p_1401->g_128 >= (-24)); p_1401->g_128--)
    { /* block id: 68 */
        uint64_t l_158 = 0xDED147D6BF538CC8L;
        int32_t ***l_193 = &p_1401->g_125;
        for (p_1401->g_59 = 0; (p_1401->g_59 == 19); p_1401->g_59 = safe_add_func_int32_t_s_s(p_1401->g_59, 3))
        { /* block id: 71 */
            int16_t l_140[8][10] = {{0x6E21L,0x7D60L,(-1L),0x62EAL,0x6F35L,0x6BAAL,0x6BAAL,0x6F35L,0x62EAL,(-1L)},{0x6E21L,0x7D60L,(-1L),0x62EAL,0x6F35L,0x6BAAL,0x6BAAL,0x6F35L,0x62EAL,(-1L)},{0x6E21L,0x7D60L,(-1L),0x62EAL,0x6F35L,0x6BAAL,0x6BAAL,0x6F35L,0x62EAL,(-1L)},{0x6E21L,0x7D60L,(-1L),0x62EAL,0x6F35L,0x6BAAL,0x6BAAL,0x6F35L,0x62EAL,(-1L)},{0x6E21L,0x7D60L,(-1L),0x62EAL,0x6F35L,0x6BAAL,0x6BAAL,0x6F35L,0x62EAL,(-1L)},{0x6E21L,0x7D60L,(-1L),0x62EAL,0x6F35L,0x6BAAL,0x6BAAL,0x6F35L,0x62EAL,(-1L)},{0x6E21L,0x7D60L,(-1L),0x62EAL,0x6F35L,0x6BAAL,0x6BAAL,0x6F35L,0x62EAL,(-1L)},{0x6E21L,0x7D60L,(-1L),0x62EAL,0x6F35L,0x6BAAL,0x6BAAL,0x6F35L,0x62EAL,(-1L)}};
            uint64_t *l_166 = &p_1401->g_147;
            uint64_t **l_165 = &l_166;
            uint64_t *l_181[10];
            uint16_t *l_214 = &p_1401->g_118[2][1];
            int32_t *l_219 = &p_1401->g_3;
            int i, j;
            for (i = 0; i < 10; i++)
                l_181[i] = &l_158;
            for (p_1401->g_120 = 0; (p_1401->g_120 != 7); p_1401->g_120 = safe_add_func_int8_t_s_s(p_1401->g_120, 5))
            { /* block id: 74 */
                int64_t l_160[7][6] = {{(-1L),(-1L),(-2L),(-1L),4L,(-1L)},{(-1L),(-1L),(-2L),(-1L),4L,(-1L)},{(-1L),(-1L),(-2L),(-1L),4L,(-1L)},{(-1L),(-1L),(-2L),(-1L),4L,(-1L)},{(-1L),(-1L),(-2L),(-1L),4L,(-1L)},{(-1L),(-1L),(-2L),(-1L),4L,(-1L)},{(-1L),(-1L),(-2L),(-1L),4L,(-1L)}};
                int32_t l_161 = 0L;
                uint8_t l_184 = 1UL;
                uint16_t l_202[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                int16_t l_239 = 9L;
                uint8_t *l_240 = &l_159[3];
                int i, j;
                (1 + 1);
            }
        }
        if (l_159[0])
            break;
        for (p_1401->g_59 = 0; (p_1401->g_59 <= 4); p_1401->g_59 += 1)
        { /* block id: 113 */
            int i;
            return l_159[p_1401->g_59];
        }
        if ((***l_193))
            break;
    }
lbl_308:
    p_1401->g_243 = ((*p_1401->g_125) = ((l_159[0] ^ (safe_mul_func_int8_t_s_s((l_228 = 0x2EL), (p_1401->g_246 || l_159[0])))) , (*p_1401->g_125)));
    if ((((*l_248) , l_249) != &p_1401->g_114[1][7][6]))
    { /* block id: 121 */
        int64_t l_250 = 0x68607F2044AD6765L;
        int16_t *l_253 = &p_1401->g_85;
        int16_t **l_252 = &l_253;
        int16_t *l_255 = &p_1401->g_85;
        int16_t **l_254 = &l_255;
        int32_t l_263 = 0x240E005BL;
        l_250 &= (**p_1401->g_125);
        (*p_1401->g_90) = (l_251 == (p_1401->g_256[3] = ((*l_254) = ((*l_252) = &p_1401->g_85))));
        for (p_1401->g_120 = 10; (p_1401->g_120 == 47); p_1401->g_120 = safe_add_func_uint64_t_u_u(p_1401->g_120, 2))
        { /* block id: 129 */
            for (p_1401->g_59 = 0; (p_1401->g_59 < (-16)); p_1401->g_59 = safe_sub_func_uint8_t_u_u(p_1401->g_59, 5))
            { /* block id: 132 */
                for (p_1401->g_62 = 0; (p_1401->g_62 <= 20); p_1401->g_62++)
                { /* block id: 135 */
                    (*p_1401->g_125) = (*p_1401->g_125);
                    for (p_1401->g_147 = 0; (p_1401->g_147 <= 4); p_1401->g_147 += 1)
                    { /* block id: 139 */
                        int i;
                        return l_159[p_1401->g_147];
                    }
                    for (p_1401->g_16 = 7; (p_1401->g_16 >= 0); p_1401->g_16 -= 1)
                    { /* block id: 144 */
                        return (*p_1401->g_90);
                    }
                }
                if (l_250)
                    continue;
            }
        }
        l_263 = (l_250 , ((**p_109) = (!(0xB44326F7BA14FACFL < (*p_108)))));
    }
    else
    { /* block id: 153 */
        uint32_t l_271 = 7UL;
        int32_t l_277[1][2];
        int32_t l_278 = 0x45B78067L;
        int32_t *l_298[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t **l_302 = &p_1401->g_114[1][7][6];
        int32_t l_368 = 0L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_277[i][j] = 8L;
        }
        for (p_1401->g_170 = 1; (p_1401->g_170 <= 4); p_1401->g_170 += 1)
        { /* block id: 156 */
            int16_t l_280 = 0L;
            int32_t l_322[5];
            int32_t *l_353 = &l_277[0][1];
            int i;
            for (i = 0; i < 5; i++)
                l_322[i] = (-1L);
            for (p_1401->g_42 = 3; (p_1401->g_42 >= 0); p_1401->g_42 -= 1)
            { /* block id: 159 */
                int64_t *l_274 = &p_1401->g_62;
                int i;
                for (p_1401->g_62 = 0; p_1401->g_62 < 3; p_1401->g_62 += 1)
                {
                    for (p_1401->g_16 = 0; p_1401->g_16 < 10; p_1401->g_16 += 1)
                    {
                        for (p_1401->g_147 = 0; p_1401->g_147 < 8; p_1401->g_147 += 1)
                        {
                            p_1401->g_114[p_1401->g_62][p_1401->g_16][p_1401->g_147] = &p_1401->g_170;
                        }
                    }
                }
                (**p_109) = l_159[p_1401->g_170];
                l_278 &= ((l_159[p_1401->g_42] < (safe_add_func_int32_t_s_s(((l_277[0][1] ^= ((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_u(l_271, 2)))) | (safe_add_func_int32_t_s_s(((p_1401->g_16 , 1L) , (((*l_274) = (p_1401->g_42 == (&l_247[0][1][4] != &p_1401->g_125))) < (safe_rshift_func_uint16_t_u_s(l_271, ((((p_1401->g_114[2][5][2] != &l_159[p_1401->g_170]) > l_159[p_1401->g_170]) , 0x6110CAE8L) , (-7L)))))), (**p_109)))) , 0xF022L), 0L)) , l_159[p_1401->g_42])) || l_271), (**p_109)))) , 0x1E8DAD69L);
                if ((**p_109))
                    continue;
                for (p_1401->g_85 = 0; (p_1401->g_85 <= 2); p_1401->g_85 += 1)
                { /* block id: 168 */
                    int32_t l_279 = 0x7FDCCC42L;
                    int8_t *l_285 = &p_1401->g_42;
                    int32_t l_292 = 0x1C1CCE31L;
                    (**p_109) = l_279;
                    for (l_279 = 2; (l_279 >= 0); l_279 -= 1)
                    { /* block id: 172 */
                        return l_159[p_1401->g_42];
                    }
                    if (l_280)
                        break;
                    for (p_1401->g_120 = 0; (p_1401->g_120 <= 4); p_1401->g_120 += 1)
                    { /* block id: 178 */
                        uint8_t *l_290[2][10][1] = {{{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291}},{{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291},{&p_1401->g_291}}};
                        int i, j, k;
                        (**p_1401->g_125) = (p_1401->g_118[0][3] && (safe_sub_func_uint16_t_u_u(((+((*l_183) = ((((safe_mul_func_int8_t_s_s(0L, 0xE3L)) || ((0x72L | (l_292 &= (p_1401->g_120 | ((l_285 == (void*)0) >= (safe_add_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_s((l_159[p_1401->g_170] ^= (p_1401->g_59 != (~(**p_109)))), l_279)) > l_277[0][1]) && 0x2385E1EAL), 0L)))))) ^ p_1401->g_4)) <= l_280) , (*p_1401->g_163)))) , p_1401->g_164), l_278)));
                    }
                }
            }
            for (p_1401->g_291 = 1; (p_1401->g_291 <= 4); p_1401->g_291 += 1)
            { /* block id: 188 */
                int32_t *l_297 = &p_1401->g_128;
                uint32_t l_305 = 0UL;
                uint16_t l_343[4][3][9] = {{{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL},{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL},{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL}},{{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL},{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL},{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL}},{{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL},{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL},{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL}},{{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL},{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL},{0x972EL,0x972EL,65535UL,65534UL,65535UL,65534UL,65535UL,0x972EL,0x972EL}}};
                int i, j, k;
                for (l_271 = 0; (l_271 <= 4); l_271 += 1)
                { /* block id: 191 */
                    for (p_1401->g_85 = 3; (p_1401->g_85 >= 0); p_1401->g_85 -= 1)
                    { /* block id: 194 */
                        int i, j;
                        if (l_159[l_271])
                            break;
                        return p_1401->g_118[(p_1401->g_85 + 5)][(l_271 + 2)];
                    }
                }
                if (l_159[p_1401->g_170])
                    break;
                if ((**p_109))
                    break;
                for (l_228 = 0; (l_228 <= 4); l_228 += 1)
                { /* block id: 203 */
                    int8_t *l_301 = &p_1401->g_42;
                    int32_t ***l_323 = &l_247[0][4][3];
                    int32_t *l_347 = &l_322[3];
                    int64_t l_348 = 5L;
                    int64_t *l_349 = (void*)0;
                    int64_t *l_350 = &p_1401->g_59;
                    uint32_t l_352 = 0UL;
                    int i;
                    if ((((l_277[0][1] , (p_110 != ((((((p_1401->g_42 , ((*l_301) = (((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((*p_1401->g_125) != (l_298[1] = l_297)), ((*p_108) > (*p_108)))) > (**p_109)), (safe_rshift_func_uint8_t_u_u((l_159[p_1401->g_170] |= (*l_297)), 4)))) < p_1401->g_118[1][3]) , (-1L)))) || 0x09L) == l_278) ^ l_277[0][1]) ^ (*l_297)) , l_302))) == p_1401->g_62) || (*l_248)))
                    { /* block id: 207 */
                        (*p_1401->g_90) ^= (safe_mul_func_uint8_t_u_u(l_305, (safe_rshift_func_int8_t_s_u((*l_297), 7))));
                        if (p_1401->g_3)
                            goto lbl_308;
                    }
                    else
                    { /* block id: 210 */
                        uint8_t *l_320 = (void*)0;
                        int16_t *l_321 = &l_280;
                        if (p_1401->g_62)
                            goto lbl_308;
                        (*p_1401->g_90) |= ((p_1401->g_309[3] , ((((safe_mul_func_uint8_t_u_u(255UL, (safe_mul_func_int8_t_s_s((((*l_321) &= ((*l_251) = (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s(0x55DB20FBL, ((safe_mod_func_uint32_t_u_u(((*l_248) & p_1401->g_5), ((l_320 == &p_1401->g_291) ^ (*p_108)))) <= (!(&p_1401->g_114[1][4][0] != (void*)0))))), 0UL)))) & l_322[2]), 255UL)))) <= (*l_248)) , (-9L)) , l_323)) != (void*)0);
                    }
                    l_353 = func_64(((p_1401->g_62 = (((p_1401->g_324 != ((((*l_251) = (safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((((safe_sub_func_uint64_t_u_u((--(*p_108)), (p_1401->g_59 = p_1401->g_4))) && (((*l_248) , (((safe_lshift_func_int8_t_s_u((*l_248), (safe_div_func_int64_t_s_s(((*l_350) ^= (safe_rshift_func_int16_t_s_s(((+0x7BDA3A7E0E67F560L) == l_159[p_1401->g_170]), ((0L & ((l_343[1][2][4] && (safe_sub_func_int32_t_s_s((((*l_347) = (0x1E0EL == l_346)) , (*p_1401->g_90)), l_348))) != 0x0CE3L)) < (*l_297))))), p_1401->g_351)))) , (**p_109)) > p_1401->g_118[5][3])) <= 0x19117F19L)) > p_1401->g_16), p_1401->g_147)) ^ (*l_297)), 2)), 0xE101L)), p_1401->g_62))) ^ (*l_297)) <= 0x94L)) , (*l_297)) <= p_1401->g_3)) & 18446744073709551611UL), &p_1401->g_42, l_280, l_352, l_159[p_1401->g_170], p_1401);
                }
            }
        }
        for (p_1401->g_147 = 0; (p_1401->g_147 < 48); p_1401->g_147 = safe_add_func_uint8_t_u_u(p_1401->g_147, 5))
        { /* block id: 228 */
            uint8_t l_357[1];
            int32_t l_360[2][9] = {{1L,0L,1L,1L,0L,1L,1L,0L,1L},{1L,0L,1L,1L,0L,1L,1L,0L,1L}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_357[i] = 0xD6L;
            (*p_109) = p_1401->g_356;
            l_357[0]--;
            for (p_1401->g_85 = 0; (p_1401->g_85 <= 0); p_1401->g_85 += 1)
            { /* block id: 233 */
                int32_t l_361 = (-1L);
                int32_t l_362 = 1L;
                int32_t l_363[10];
                uint16_t l_365 = 0x7A69L;
                int i, j;
                for (i = 0; i < 10; i++)
                    l_363[i] = 0x38627E3DL;
                l_365++;
            }
        }
        l_368 |= (*l_248);
    }
    return (*p_1401->g_90);
}


/* ------------------------------------------ */
/* 
 * reads : p_1401->g_120 p_1401->g_90 p_1401->g_16 p_1401->g_128 l_60
 * writes: p_1401->g_120 p_1401->g_125 p_1401->g_128 p_1401->g_16 l_60
 */
int32_t  func_111(int8_t * p_112, uint16_t  p_113, struct S0 * p_1401)
{ /* block id: 52 */
    int32_t *l_119[9];
    int32_t l_123 = 0L;
    int64_t *l_124 = &p_1401->g_59;
    int32_t **l_127 = &p_1401->g_90;
    int32_t ***l_126 = &l_127;
    int i;
    for (i = 0; i < 9; i++)
        l_119[i] = &p_1401->g_16;
    p_1401->g_120--;
    p_1401->g_128 &= ((l_123 & (+(((p_113 && 18446744073709551615UL) , ((l_124 == &p_1401->g_62) <= p_113)) > p_113))) && (((*l_126) = (p_1401->g_125 = &p_1401->g_90)) != ((*p_1401->g_90) , &l_119[4])));
    (***l_126) |= (-5L);
    for (p_1401->g_16 = 2; (p_1401->g_16 >= 0); p_1401->g_16 -= 1)
    { /* block id: 60 */
        return (*p_1401->g_90);
    }
    return (*p_1401->g_90);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1402;
    struct S0* p_1401 = &c_1402;
    struct S0 c_1403 = {
        0x09B54615L, // p_1401->g_3
        5L, // p_1401->g_4
        0x15L, // p_1401->g_5
        1L, // p_1401->g_6
        (-1L), // p_1401->g_16
        0x7AL, // p_1401->g_42
        0x2EDCDDCDEDC29BFBL, // p_1401->g_59
        0L, // p_1401->g_62
        0x311CL, // p_1401->g_85
        &p_1401->g_16, // p_1401->g_90
        {{{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42}},{{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42}},{{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42},{&p_1401->g_5,&p_1401->g_5,&p_1401->g_5,(void*)0,&p_1401->g_42,&p_1401->g_42,(void*)0,&p_1401->g_42}}}, // p_1401->g_114
        {{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL}}, // p_1401->g_118
        18446744073709551608UL, // p_1401->g_120
        &p_1401->g_90, // p_1401->g_125
        5L, // p_1401->g_128
        4UL, // p_1401->g_147
        0x0BAFC0C8250707C8L, // p_1401->g_164
        &p_1401->g_164, // p_1401->g_163
        &p_1401->g_163, // p_1401->g_162
        (-1L), // p_1401->g_170
        {&p_1401->g_16,&p_1401->g_16,&p_1401->g_16,&p_1401->g_16,&p_1401->g_16,&p_1401->g_16,&p_1401->g_16,&p_1401->g_16,&p_1401->g_16}, // p_1401->g_241
        (void*)0, // p_1401->g_242
        &p_1401->g_16, // p_1401->g_243
        0x494EL, // p_1401->g_246
        {&p_1401->g_85,&p_1401->g_85,&p_1401->g_85,&p_1401->g_85,&p_1401->g_85,&p_1401->g_85,&p_1401->g_85,&p_1401->g_85}, // p_1401->g_256
        1UL, // p_1401->g_291
        {0x297B412AL,0x297B412AL,0x297B412AL,0x297B412AL,0x297B412AL}, // p_1401->g_309
        0x14601971L, // p_1401->g_324
        1L, // p_1401->g_351
        &p_1401->g_3, // p_1401->g_356
        (void*)0, // p_1401->g_421
        0xFBFDL, // p_1401->g_629
        {&p_1401->g_125}, // p_1401->g_635
        (void*)0, // p_1401->g_636
        (void*)0, // p_1401->g_666
        &p_1401->g_666, // p_1401->g_665
        1L, // p_1401->g_667
        (-3L), // p_1401->g_742
        &p_1401->g_742, // p_1401->g_741
        (-1L), // p_1401->g_796
        (void*)0, // p_1401->g_862
        &p_1401->g_862, // p_1401->g_861
        1L, // p_1401->g_884
        5L, // p_1401->g_909
        0UL, // p_1401->g_945
        &p_1401->g_118[9][3], // p_1401->g_956
        {&p_1401->g_956,&p_1401->g_956,&p_1401->g_956,&p_1401->g_956,&p_1401->g_956,&p_1401->g_956,&p_1401->g_956}, // p_1401->g_955
        18446744073709551615UL, // p_1401->g_1022
        1UL, // p_1401->g_1038
        &p_1401->g_256[5], // p_1401->g_1103
        &p_1401->g_1103, // p_1401->g_1138
        0L, // p_1401->g_1181
        {{{&p_1401->g_665,&p_1401->g_665},{&p_1401->g_665,&p_1401->g_665}},{{&p_1401->g_665,&p_1401->g_665},{&p_1401->g_665,&p_1401->g_665}}}, // p_1401->g_1256
        &p_1401->g_291, // p_1401->g_1259
        {{(void*)0,&p_1401->g_1259,&p_1401->g_1259,(void*)0,&p_1401->g_1259,&p_1401->g_1259,&p_1401->g_1259},{(void*)0,&p_1401->g_1259,&p_1401->g_1259,(void*)0,&p_1401->g_1259,&p_1401->g_1259,&p_1401->g_1259},{(void*)0,&p_1401->g_1259,&p_1401->g_1259,(void*)0,&p_1401->g_1259,&p_1401->g_1259,&p_1401->g_1259},{(void*)0,&p_1401->g_1259,&p_1401->g_1259,(void*)0,&p_1401->g_1259,&p_1401->g_1259,&p_1401->g_1259},{(void*)0,&p_1401->g_1259,&p_1401->g_1259,(void*)0,&p_1401->g_1259,&p_1401->g_1259,&p_1401->g_1259},{(void*)0,&p_1401->g_1259,&p_1401->g_1259,(void*)0,&p_1401->g_1259,&p_1401->g_1259,&p_1401->g_1259},{(void*)0,&p_1401->g_1259,&p_1401->g_1259,(void*)0,&p_1401->g_1259,&p_1401->g_1259,&p_1401->g_1259}}, // p_1401->g_1258
        &p_1401->g_1258[0][4], // p_1401->g_1257
        &p_1401->g_636, // p_1401->g_1311
        6UL, // p_1401->g_1376
        &p_1401->g_128, // p_1401->g_1378
    };
    c_1402 = c_1403;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1401);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1401->g_3, "p_1401->g_3", print_hash_value);
    transparent_crc(p_1401->g_4, "p_1401->g_4", print_hash_value);
    transparent_crc(p_1401->g_5, "p_1401->g_5", print_hash_value);
    transparent_crc(p_1401->g_6, "p_1401->g_6", print_hash_value);
    transparent_crc(p_1401->g_16, "p_1401->g_16", print_hash_value);
    transparent_crc(p_1401->g_42, "p_1401->g_42", print_hash_value);
    transparent_crc(p_1401->g_59, "p_1401->g_59", print_hash_value);
    transparent_crc(p_1401->g_62, "p_1401->g_62", print_hash_value);
    transparent_crc(p_1401->g_85, "p_1401->g_85", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1401->g_118[i][j], "p_1401->g_118[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1401->g_120, "p_1401->g_120", print_hash_value);
    transparent_crc(p_1401->g_128, "p_1401->g_128", print_hash_value);
    transparent_crc(p_1401->g_147, "p_1401->g_147", print_hash_value);
    transparent_crc(p_1401->g_164, "p_1401->g_164", print_hash_value);
    transparent_crc(p_1401->g_170, "p_1401->g_170", print_hash_value);
    transparent_crc(p_1401->g_246, "p_1401->g_246", print_hash_value);
    transparent_crc(p_1401->g_291, "p_1401->g_291", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1401->g_309[i], "p_1401->g_309[i]", print_hash_value);

    }
    transparent_crc(p_1401->g_324, "p_1401->g_324", print_hash_value);
    transparent_crc(p_1401->g_351, "p_1401->g_351", print_hash_value);
    transparent_crc(p_1401->g_629, "p_1401->g_629", print_hash_value);
    transparent_crc(p_1401->g_667, "p_1401->g_667", print_hash_value);
    transparent_crc(p_1401->g_742, "p_1401->g_742", print_hash_value);
    transparent_crc(p_1401->g_796, "p_1401->g_796", print_hash_value);
    transparent_crc(p_1401->g_884, "p_1401->g_884", print_hash_value);
    transparent_crc(p_1401->g_909, "p_1401->g_909", print_hash_value);
    transparent_crc(p_1401->g_945, "p_1401->g_945", print_hash_value);
    transparent_crc(p_1401->g_1022, "p_1401->g_1022", print_hash_value);
    transparent_crc(p_1401->g_1038, "p_1401->g_1038", print_hash_value);
    transparent_crc(p_1401->g_1181, "p_1401->g_1181", print_hash_value);
    transparent_crc(p_1401->g_1376, "p_1401->g_1376", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
