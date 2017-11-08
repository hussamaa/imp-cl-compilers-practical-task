// -g 91,25,3 -l 91,1,1
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


// Seed: 3500723024

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint32_t  f3;
};

union U1 {
   uint8_t  f0;
   struct S0  f1;
   struct S0  f2;
};

union U2 {
   uint32_t  f0;
};

struct S3 {
    int32_t g_2;
    int32_t g_15;
    int64_t g_39;
    uint32_t g_55;
    uint8_t g_61;
    struct S0 g_67;
    uint32_t g_91;
    struct S0 g_97;
    uint16_t g_107;
    int64_t g_110[3][10][8];
    int32_t *g_114;
    uint32_t g_125;
    int64_t g_131;
    volatile int8_t g_134;
    uint64_t g_138;
    volatile int8_t g_146;
    uint8_t g_157;
    uint32_t g_162;
    union U1 g_192;
    int16_t g_194;
    int16_t g_204;
    int64_t g_218;
    volatile uint16_t g_219[1];
    uint16_t *g_240[10];
    int64_t * volatile g_345;
    int64_t * volatile * volatile g_344;
    volatile uint64_t * volatile *g_384;
    volatile uint64_t * volatile * volatile *g_383;
    volatile uint32_t g_399;
    volatile int64_t g_471[5];
    uint16_t g_473;
    union U2 g_507;
    union U2 *g_506;
    union U2 ** volatile g_505;
    uint16_t g_510;
    int32_t *g_519;
    uint32_t *g_525;
    union U1 g_527;
    union U1 *g_531;
    union U1 ** volatile g_530;
    int32_t * volatile g_544[2];
    int32_t g_559[1][7];
    int8_t g_574[3][4];
    uint64_t g_652;
    uint64_t *g_681;
    uint64_t **g_680[5];
    uint64_t ***g_679;
    struct S0 * volatile g_703;
    uint16_t g_722;
    union U2 ** volatile g_768;
    union U2 ** volatile g_769;
    union U2 g_820[2][1][5];
    int8_t g_831;
    int32_t ** volatile g_890;
    union U1 ** volatile g_899;
    int32_t ** volatile g_907[6][10][4];
    int32_t ** volatile g_910[2][1];
    int32_t ** volatile g_912;
    int32_t ** volatile g_913;
    int32_t ** volatile g_922;
    int32_t ** volatile g_927;
    int32_t **g_936;
    int64_t g_960[8][2][5];
    int64_t g_962;
    volatile int64_t g_1093;
    volatile int64_t * volatile g_1092;
    volatile int64_t * volatile *g_1091;
    struct S0 * volatile g_1161;
    struct S0 * volatile g_1168;
    union U1 ** volatile g_1200;
    struct S0 * volatile g_1203;
    struct S0 * volatile g_1204;
    uint32_t * volatile g_1212;
    volatile uint64_t * volatile *** volatile *g_1278;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S3 * p_1284);
int32_t * func_5(uint64_t  p_6, int32_t * p_7, uint32_t  p_8, int32_t * p_9, struct S3 * p_1284);
int32_t * func_10(int32_t  p_11, int32_t  p_12, int16_t  p_13, union U2  p_14, struct S3 * p_1284);
uint8_t  func_16(uint8_t  p_17, int16_t  p_18, int16_t  p_19, int32_t  p_20, struct S3 * p_1284);
int8_t  func_25(int32_t * p_26, uint32_t  p_27, struct S3 * p_1284);
uint32_t  func_28(uint32_t  p_29, uint32_t  p_30, uint32_t  p_31, int32_t * p_32, struct S3 * p_1284);
int16_t  func_40(int8_t  p_41, int64_t  p_42, int16_t  p_43, int32_t * p_44, struct S3 * p_1284);
int8_t  func_45(int32_t  p_46, int64_t * p_47, union U1  p_48, struct S3 * p_1284);
uint64_t  func_64(uint32_t * p_65, struct S3 * p_1284);
int32_t * func_69(struct S0  p_70, int8_t  p_71, uint16_t  p_72, union U1  p_73, struct S3 * p_1284);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1284->g_2 p_1284->g_525 p_1284->g_507.f0 p_1284->g_519 p_1284->g_1278 p_1284->g_138 p_1284->g_652 p_1284->g_960
 * writes: p_1284->g_2 p_1284->g_507.f0 p_1284->g_192.f2.f0 p_1284->g_574
 */
int8_t  func_1(struct S3 * p_1284)
{ /* block id: 4 */
    int32_t l_21 = 0x5589B583L;
    int64_t l_37 = (-1L);
    int8_t *l_1268 = &p_1284->g_574[1][3];
    int8_t l_1275 = 2L;
    uint64_t ****l_1280 = &p_1284->g_679;
    uint64_t *****l_1279[6] = {&l_1280,&l_1280,&l_1280,&l_1280,&l_1280,&l_1280};
    int64_t l_1281 = 0x78223D3522CAE8DCL;
    int8_t *l_1282 = &l_1275;
    int32_t l_1283[9];
    int i;
    for (i = 0; i < 9; i++)
        l_1283[i] = (-1L);
    for (p_1284->g_2 = 0; (p_1284->g_2 <= (-3)); p_1284->g_2--)
    { /* block id: 7 */
        int32_t l_22 = 0x7AB89BDDL;
        int64_t *l_38 = &p_1284->g_39;
        int32_t *l_1169 = (void*)0;
        (1 + 1);
    }
    l_1283[6] &= (safe_rshift_func_int16_t_s_u(((((l_21 = ((*l_1282) = (safe_sub_func_int8_t_s_s(((*l_1268) = ((safe_rshift_func_uint16_t_u_u(l_21, 5)) != (safe_sub_func_int32_t_s_s(((*p_1284->g_519) = (((*p_1284->g_525) |= 9UL) || l_21)), 0UL)))), (((safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((l_1275 != (((0x045619AD015D6C02L == 18446744073709551609UL) & (safe_mul_func_uint16_t_u_u((((p_1284->g_1278 != l_1279[5]) ^ 0x1E8C2DF956324050L) > l_37), p_1284->g_138))) ^ l_1281)), p_1284->g_652)), l_21)) < 4294967295UL), l_1281)) ^ l_1281) != l_37))))) == l_1281) , 3L) == 0x3CD7L), l_37));
    return p_1284->g_960[6][1][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_559 p_1284->g_15 p_1284->g_218 p_1284->g_1092 p_1284->g_1093 p_1284->g_2 p_1284->g_1200 p_1284->g_67 p_1284->g_192.f1 p_1284->g_1204 p_1284->g_1212 p_1284->g_125 p_1284->g_936 p_1284->g_114 p_1284->g_383 p_1284->g_384 p_1284->g_204 p_1284->g_962 p_1284->g_91 p_1284->g_97.f3 p_1284->g_157 p_1284->g_527.f2.f2 p_1284->g_97.f1
 * writes: p_1284->g_527.f2.f2 p_1284->g_67.f2 p_1284->g_531 p_1284->g_67 p_1284->g_192.f1.f3 p_1284->g_204 p_1284->g_97.f1 p_1284->g_962
 */
int32_t * func_5(uint64_t  p_6, int32_t * p_7, uint32_t  p_8, int32_t * p_9, struct S3 * p_1284)
{ /* block id: 600 */
    struct S0 *l_1170 = &p_1284->g_192.f1;
    int16_t l_1173[1][8] = {{(-9L),0x260FL,(-9L),(-9L),0x260FL,(-9L),(-9L),0x260FL}};
    uint8_t l_1197 = 0x92L;
    uint64_t **l_1198 = &p_1284->g_681;
    uint32_t *l_1213 = &p_1284->g_507.f0;
    int i, j;
lbl_1236:
    l_1170 = l_1170;
    for (p_1284->g_527.f2.f2 = 0; (p_1284->g_527.f2.f2 <= 4); p_1284->g_527.f2.f2 += 1)
    { /* block id: 604 */
        int32_t l_1171 = 0x52E52341L;
        uint64_t *l_1172 = &p_1284->g_67.f2;
        struct S0 **l_1174 = &l_1170;
        union U1 *l_1199 = &p_1284->g_192;
        uint64_t ****l_1222[8][10][3] = {{{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679}},{{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679}},{{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679}},{{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679}},{{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679}},{{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679}},{{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679}},{{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679},{&p_1284->g_679,&p_1284->g_679,&p_1284->g_679}}};
        uint64_t *****l_1221 = &l_1222[3][0][2];
        uint32_t l_1254 = 4UL;
        int i, j, k;
        if (l_1171)
            break;
        if ((((*l_1172) = p_6) & ((((l_1173[0][6] | (l_1174 != (void*)0)) <= (((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((0x16L && p_1284->g_559[0][4]) >= (((((((safe_div_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s(l_1173[0][6], 1)) | ((((safe_sub_func_int16_t_s_s((((safe_add_func_int64_t_s_s((safe_div_func_uint8_t_u_u((l_1173[0][6] , ((safe_div_func_uint32_t_u_u(((((safe_sub_func_uint64_t_u_u(18446744073709551607UL, p_8)) && l_1171) | p_6) ^ l_1173[0][0]), (-1L))) != 9L)), p_1284->g_15)), l_1197)) , 0UL) | p_6), 0x56EAL)) , 0x1685712C3C401667L) <= p_8) >= p_8)) || l_1197) <= p_6), 0x1DL)) & l_1197) > p_1284->g_218) , (void*)0) != l_1198) && l_1171) >= (*p_1284->g_1092))), 7L)), 8)), 3)) | p_8) <= 0xC6L)) != p_1284->g_2) ^ l_1173[0][6])))
        { /* block id: 607 */
            uint8_t l_1201 = 0xC2L;
            struct S0 *l_1202 = &p_1284->g_192.f1;
            (*p_1284->g_1200) = l_1199;
            if (l_1201)
                continue;
            (*p_1284->g_1204) = (**l_1174);
        }
        else
        { /* block id: 611 */
            uint8_t l_1209[2];
            uint32_t **l_1214 = &l_1213;
            uint64_t *****l_1223[8] = {&l_1222[3][0][2],(void*)0,&l_1222[3][0][2],&l_1222[3][0][2],(void*)0,&l_1222[3][0][2],&l_1222[3][0][2],(void*)0};
            int32_t l_1224 = 0x08582D97L;
            int32_t *l_1225 = &p_1284->g_67.f0;
            int i;
            for (i = 0; i < 2; i++)
                l_1209[i] = 9UL;
            l_1224 = ((safe_rshift_func_int8_t_s_s(0x17L, (safe_add_func_int8_t_s_s((l_1209[1] <= (((((l_1209[0] , (safe_div_func_int8_t_s_s(((l_1171 >= (p_1284->g_1212 == ((*l_1214) = l_1213))) >= (safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((((l_1171 , (l_1221 == l_1223[6])) <= p_8) , p_1284->g_125), 250UL)) & 0x3AL), 8)) ^ l_1173[0][6]), 65528UL))), 0x3CL))) , l_1171) ^ p_6) < p_6) <= (-7L))), p_6)))) == 0x06F1L);
            (*l_1225) = 0x78433277L;
            return (*p_1284->g_936);
        }
        for (p_1284->g_192.f1.f3 = 0; (p_1284->g_192.f1.f3 <= 4); p_1284->g_192.f1.f3 += 1)
        { /* block id: 619 */
            int16_t l_1234 = 3L;
            int16_t *l_1235[3][7] = {{(void*)0,(void*)0,&l_1173[0][6],&l_1173[0][4],&l_1234,&l_1173[0][4],&l_1173[0][6]},{(void*)0,(void*)0,&l_1173[0][6],&l_1173[0][4],&l_1234,&l_1173[0][4],&l_1173[0][6]},{(void*)0,(void*)0,&l_1173[0][6],&l_1173[0][4],&l_1234,&l_1173[0][4],&l_1173[0][6]}};
            int32_t l_1259 = 0x000CF601L;
            int i, j;
            l_1171 = ((p_8 | (safe_mul_func_int8_t_s_s((l_1171 | l_1171), ((safe_sub_func_uint16_t_u_u(p_6, (((void*)0 == (*p_1284->g_383)) , (p_1284->g_204 ^= (safe_mod_func_int16_t_s_s(((*l_1221) == ((((safe_add_func_uint8_t_u_u(p_1284->g_192.f1.f3, (-10L))) < l_1234) | l_1171) , (void*)0)), 9UL)))))) > l_1173[0][5])))) < l_1197);
            for (p_1284->g_97.f1 = 0; (p_1284->g_97.f1 <= 0); p_1284->g_97.f1 += 1)
            { /* block id: 624 */
                uint8_t l_1255 = 0xB3L;
                uint64_t l_1256 = 1UL;
                (*l_1174) = &p_1284->g_67;
                for (p_1284->g_962 = 0; (p_1284->g_962 <= 0); p_1284->g_962 += 1)
                { /* block id: 628 */
                    uint8_t l_1241[8][9][3] = {{{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L}},{{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L}},{{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L}},{{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L}},{{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L}},{{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L}},{{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L}},{{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L},{0x4CL,0UL,0x01L}}};
                    int i, j, k;
                    for (p_1284->g_67.f2 = 0; (p_1284->g_67.f2 <= 0); p_1284->g_67.f2 += 1)
                    { /* block id: 631 */
                        uint16_t *l_1257[1];
                        int32_t l_1258 = (-1L);
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1257[i] = &p_1284->g_473;
                        if (l_1197)
                            goto lbl_1236;
                        l_1259 |= ((((l_1173[0][6] != (safe_sub_func_int16_t_s_s(((safe_div_func_int64_t_s_s(l_1241[0][0][1], 0x4FFC41B7D051AFE7L)) > (safe_lshift_func_int8_t_s_u(0x62L, 7))), (safe_div_func_int8_t_s_s((((safe_div_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((l_1258 |= (0xEE3132732776AE40L || (safe_add_func_uint32_t_u_u(((((0xD2L >= (((l_1254 | (0x9F219B592BFEAE51L == ((*p_1284->g_1212) >= 4294967289UL))) <= l_1254) && l_1255)) ^ l_1241[0][0][1]) , l_1256) == p_1284->g_192.f1.f2), 1L)))), p_6)), 0x11A6B1A9L)) , 0x23L), p_1284->g_97.f3)) , p_1284->g_157) <= 0xFAL), l_1241[0][0][1]))))) < p_6) <= (-3L)) < l_1241[0][0][1]);
                    }
                }
            }
        }
    }
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_194 p_1284->g_820.f0 p_1284->g_192.f2.f3 p_1284->g_527.f1.f2 p_1284->g_936 p_1284->g_114 p_1284->g_510 p_1284->g_890 p_1284->g_519 p_1284->g_1161 p_1284->g_680 p_1284->g_146 p_1284->g_15 p_1284->g_1168
 * writes: p_1284->g_194 p_1284->g_574 p_1284->g_831 p_1284->g_679 p_1284->g_192.f2.f3 p_1284->g_527.f1.f2 p_1284->g_114 p_1284->g_510 p_1284->g_97 p_1284->g_15 p_1284->g_67
 */
int32_t * func_10(int32_t  p_11, int32_t  p_12, int16_t  p_13, union U2  p_14, struct S3 * p_1284)
{ /* block id: 439 */
    int32_t l_829 = (-9L);
    uint64_t ***l_835 = &p_1284->g_680[1];
    union U1 *l_836[7][3][5] = {{{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527}},{{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527}},{{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527}},{{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527}},{{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527}},{{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527}},{{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527},{(void*)0,&p_1284->g_192,&p_1284->g_527,&p_1284->g_527,&p_1284->g_527}}};
    int32_t *l_903 = &p_1284->g_15;
    uint8_t *l_958 = &p_1284->g_61;
    union U1 *l_970 = (void*)0;
    int64_t l_973 = 0x060289B43A5D7782L;
    int64_t **l_990 = (void*)0;
    uint8_t l_1044 = 0xFFL;
    union U2 l_1086 = {1UL};
    int32_t l_1128 = 0x1BDAF435L;
    struct S0 l_1160 = {1L,2L,0x3B30F8950E03EDC1L,0x66FEE133L};
    int i, j, k;
    for (p_1284->g_194 = (-26); (p_1284->g_194 >= (-9)); p_1284->g_194 = safe_add_func_uint32_t_u_u(p_1284->g_194, 4))
    { /* block id: 442 */
        int8_t *l_830 = &p_1284->g_831;
        uint64_t ***l_832 = &p_1284->g_680[2];
        uint64_t ****l_833 = (void*)0;
        uint64_t ****l_834 = &p_1284->g_679;
        int32_t *l_837 = &l_829;
        p_12 ^= ((safe_mod_func_int32_t_s_s((!5L), ((((*l_830) = (p_1284->g_574[2][2] = l_829)) | (((*l_834) = l_832) != (p_1284->g_820[1][0][3].f0 , l_835))) ^ p_14.f0))) && (l_836[2][2][2] != l_836[2][2][2]));
        return &p_1284->g_2;
    }
    for (p_1284->g_192.f2.f3 = 13; (p_1284->g_192.f2.f3 == 48); ++p_1284->g_192.f2.f3)
    { /* block id: 451 */
        uint32_t *l_842 = &p_1284->g_67.f3;
        int32_t l_843 = 0x500E7AD3L;
        uint8_t *l_858 = &p_1284->g_157;
        int64_t *l_859 = &p_1284->g_218;
        uint8_t *l_860 = &p_1284->g_527.f0;
        uint16_t *l_861 = &p_1284->g_722;
        uint8_t l_880 = 0UL;
        int32_t l_886[9];
        uint32_t l_904 = 0xD72D345AL;
        int32_t *l_911 = &p_1284->g_559[0][2];
        uint8_t *l_959[8][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int64_t *l_961 = &p_1284->g_962;
        int32_t **l_969 = &p_1284->g_114;
        union U1 l_993 = {0x9BL};
        struct S0 l_1050 = {0L,-1L,5UL,0x65FE8916L};
        union U1 **l_1156 = &l_970;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_886[i] = 0x715075DEL;
        (1 + 1);
    }
    for (p_1284->g_527.f1.f2 = (-4); (p_1284->g_527.f1.f2 >= 11); ++p_1284->g_527.f1.f2)
    { /* block id: 587 */
        uint64_t **l_1162 = (void*)0;
        int32_t ***l_1165 = &p_1284->g_936;
        int32_t ***l_1167 = &p_1284->g_936;
        int32_t ****l_1166 = &l_1167;
        (*p_1284->g_936) = (*p_1284->g_936);
        for (p_1284->g_510 = 0; (p_1284->g_510 <= 0); p_1284->g_510 += 1)
        { /* block id: 591 */
            return (*p_1284->g_890);
        }
        (*p_1284->g_1161) = l_1160;
        (*l_903) ^= ((l_1162 == (*l_835)) , (p_1284->g_146 && (l_1165 == ((*l_1166) = &p_1284->g_936))));
    }
    (*p_1284->g_1168) = l_1160;
    return (*p_1284->g_890);
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_97.f0 p_1284->g_192.f1.f3 p_1284->g_67 p_1284->g_703 p_1284->g_473 p_1284->g_344 p_1284->g_345 p_1284->g_525 p_1284->g_507.f0 p_1284->g_722 p_1284->g_507 p_1284->g_530 p_1284->g_531 p_1284->g_194 p_1284->g_192.f1.f2 p_1284->g_39 p_1284->g_510 p_1284->g_769 p_1284->g_218 p_1284->g_114 p_1284->g_15 p_1284->g_204 p_1284->g_2
 * writes: p_1284->g_192.f1 p_1284->g_97.f0 p_1284->g_527.f1 p_1284->g_194 p_1284->g_722 p_1284->g_510 p_1284->g_204 p_1284->g_240 p_1284->g_107 p_1284->g_61 p_1284->g_39 p_1284->g_506 p_1284->g_218 p_1284->g_114 p_1284->g_157 p_1284->g_507
 */
uint8_t  func_16(uint8_t  p_17, int16_t  p_18, int16_t  p_19, int32_t  p_20, struct S3 * p_1284)
{ /* block id: 357 */
    struct S0 l_697 = {0x421679C5L,0L,0x5D724EB6E21F3381L,1UL};
    struct S0 *l_698 = (void*)0;
    struct S0 *l_699 = &p_1284->g_192.f1;
    int32_t *l_700[1][4][3] = {{{&p_1284->g_192.f1.f0,&p_1284->g_559[0][1],&p_1284->g_97.f0},{&p_1284->g_192.f1.f0,&p_1284->g_559[0][1],&p_1284->g_97.f0},{&p_1284->g_192.f1.f0,&p_1284->g_559[0][1],&p_1284->g_97.f0},{&p_1284->g_192.f1.f0,&p_1284->g_559[0][1],&p_1284->g_97.f0}}};
    uint64_t **l_701[3];
    union U1 *l_731 = &p_1284->g_527;
    uint16_t *l_738 = &p_1284->g_107;
    int16_t l_786 = 1L;
    union U2 l_811 = {4294967293UL};
    uint8_t *l_813 = &p_1284->g_157;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_701[i] = (void*)0;
    (*l_699) = l_697;
    l_700[0][3][0] = l_700[0][3][0];
    for (p_1284->g_97.f0 = 0; (p_1284->g_97.f0 <= 9); p_1284->g_97.f0 += 1)
    { /* block id: 362 */
        uint8_t l_702 = 249UL;
        int32_t l_718 = 0L;
        int32_t l_719 = 0x0B556436L;
        int32_t l_721 = 1L;
        uint16_t *l_751 = &p_1284->g_722;
        uint32_t l_796 = 4294967295UL;
        union U2 l_810 = {1UL};
        uint8_t *l_814 = (void*)0;
        uint8_t *l_815 = (void*)0;
        uint32_t l_818 = 4294967295UL;
        l_702 = (p_1284->g_192.f1.f3 , ((void*)0 != l_701[0]));
        (*p_1284->g_703) = ((*l_699) = p_1284->g_67);
        for (p_1284->g_194 = 1; (p_1284->g_194 <= 4); p_1284->g_194 += 1)
        { /* block id: 368 */
            int32_t l_709 = 0x46C63BC0L;
            int32_t l_720 = (-10L);
            uint8_t l_725 = 0x6DL;
            union U1 *l_732[1];
            union U2 l_747 = {9UL};
            uint64_t *l_761 = (void*)0;
            int64_t l_819 = 1L;
            int i;
            for (i = 0; i < 1; i++)
                l_732[i] = (void*)0;
            for (l_697.f1 = 9; (l_697.f1 >= 0); l_697.f1 -= 1)
            { /* block id: 371 */
                uint32_t l_706 = 4294967292UL;
                int64_t *l_708 = &p_1284->g_39;
                int64_t **l_707 = &l_708;
                union U1 l_716[2][5][3] = {{{{9UL},{246UL},{9UL}},{{9UL},{246UL},{9UL}},{{9UL},{246UL},{9UL}},{{9UL},{246UL},{9UL}},{{9UL},{246UL},{9UL}}},{{{9UL},{246UL},{9UL}},{{9UL},{246UL},{9UL}},{{9UL},{246UL},{9UL}},{{9UL},{246UL},{9UL}},{{9UL},{246UL},{9UL}}}};
                int8_t *l_717[4] = {&p_1284->g_574[2][3],&p_1284->g_574[2][3],&p_1284->g_574[2][3],&p_1284->g_574[2][3]};
                int i, j, k;
                l_716[1][3][0].f2.f0 = ((safe_add_func_int32_t_s_s(l_706, ((void*)0 == l_707))) ^ (((((p_1284->g_473 & (l_709 >= ((*l_707) != (*p_1284->g_344)))) || ((safe_mul_func_int8_t_s_s((l_709 = (((((safe_div_func_uint16_t_u_u((l_702 | (safe_div_func_uint64_t_u_u((l_716[1][3][0] , 1UL), 0x8CF4C7F70555E6BCL))), p_17)) >= 1UL) < p_18) >= (*p_1284->g_525)) && p_1284->g_507.f0)), 0L)) & l_716[1][3][0].f0)) != l_702) >= 1UL) && l_702));
                return p_1284->g_473;
            }
            p_1284->g_722++;
            l_725 &= p_18;
            for (l_718 = 2; (l_718 >= 0); l_718 -= 1)
            { /* block id: 380 */
                uint64_t l_726 = 0xC984382ACD745D12L;
                int32_t l_727 = 0x58F26A03L;
                union U1 *l_730 = &p_1284->g_192;
                uint16_t *l_737[4] = {&p_1284->g_107,&p_1284->g_107,&p_1284->g_107,&p_1284->g_107};
                int i;
                l_721 ^= l_726;
                for (p_1284->g_510 = 0; (p_1284->g_510 <= 2); p_1284->g_510 += 1)
                { /* block id: 384 */
                    int32_t l_741 = 0x66C125ABL;
                    int32_t l_746[2][4] = {{0x596049A1L,0x596049A1L,0x596049A1L,0x596049A1L},{0x596049A1L,0x596049A1L,0x596049A1L,0x596049A1L}};
                    int32_t l_748 = 1L;
                    uint64_t *l_762 = &p_1284->g_192.f1.f2;
                    int i, j;
                    l_727 ^= p_17;
                    if ((safe_sub_func_int64_t_s_s(((p_1284->g_507 , l_730) != (l_732[0] = (l_731 = (*p_1284->g_530)))), (safe_lshift_func_uint8_t_u_s(((((l_721 &= (l_741 = (safe_rshift_func_uint8_t_u_u(((l_737[0] != l_738) >= ((void*)0 == &l_730)), ((safe_rshift_func_uint8_t_u_s(p_1284->g_194, (p_17 != p_18))) ^ (-9L)))))) >= (*p_1284->g_525)) || l_727) > p_20), 2)))))
                    { /* block id: 390 */
                        int32_t l_742 = (-1L);
                        int16_t *l_743 = &p_1284->g_204;
                        uint8_t l_744 = 249UL;
                        int32_t l_745 = 0x501C577BL;
                        l_748 = (((l_746[1][1] &= (l_745 &= (((*l_743) = l_742) | (l_744 = (-1L))))) <= 0L) >= ((l_747 , p_17) || 0xAEC8L));
                        return p_17;
                    }
                    else
                    { /* block id: 397 */
                        uint16_t **l_752 = &l_737[0];
                        uint8_t *l_763 = &p_1284->g_61;
                        int64_t *l_766 = &p_1284->g_39;
                        int32_t l_767 = (-7L);
                        int32_t **l_770 = &l_700[0][3][0];
                        int i;
                        l_748 |= (safe_sub_func_uint8_t_u_u(((((((*l_752) = (p_1284->g_240[(p_1284->g_194 + 5)] = l_751)) != (void*)0) >= (safe_rshift_func_uint16_t_u_u(((*l_738) = p_1284->g_192.f1.f2), 1))) , (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((p_17 <= (0x37D10B75F53177EAL >= ((*l_766) ^= (((*l_763) = (l_761 != l_762)) | (safe_mul_func_uint8_t_u_u((((0x193EL ^ p_20) & l_725) && 0x0CL), l_725)))))), l_746[1][1])) , l_767), 0x32ACB7CEL)), p_1284->g_510))) != p_18), l_767));
                        (*p_1284->g_769) = &p_1284->g_507;
                        (*l_770) = l_700[0][3][0];
                    }
                }
            }
            for (p_1284->g_218 = 0; (p_1284->g_218 >= 0); p_1284->g_218 -= 1)
            { /* block id: 411 */
                int32_t l_773 = 0x3E1A9A33L;
                union U2 l_801 = {0x8AC8C487L};
                int16_t *l_804 = &p_1284->g_204;
                struct S0 l_809 = {8L,-9L,0x833F8D4AF6FCF002L,4294967286UL};
                union U2 *l_812 = &p_1284->g_507;
                for (l_697.f0 = 0; (l_697.f0 >= 0); l_697.f0 -= 1)
                { /* block id: 414 */
                    int32_t **l_771 = &l_700[p_1284->g_218][(p_1284->g_218 + 2)][(p_1284->g_218 + 1)];
                    int32_t **l_772 = &p_1284->g_114;
                    int i, j, k;
                    (*l_771) = l_700[p_1284->g_218][(p_1284->g_218 + 2)][(p_1284->g_218 + 1)];
                    (*l_772) = (l_700[0][3][0] = &p_1284->g_15);
                    if (l_773)
                        break;
                    for (p_1284->g_157 = 0; (p_1284->g_157 <= 2); p_1284->g_157 += 1)
                    { /* block id: 421 */
                        uint32_t l_793 = 0xFBD1D8C5L;
                        int64_t *l_794 = &p_1284->g_39;
                        int16_t *l_795 = &p_1284->g_204;
                        l_709 = (safe_add_func_int64_t_s_s(((((*l_795) ^= (safe_mod_func_int16_t_s_s((((*l_794) = ((((safe_lshift_func_int8_t_s_u((0L < (safe_div_func_uint64_t_u_u(l_747.f0, (((p_17 != l_747.f0) && (safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((!(l_786 != (safe_mod_func_int64_t_s_s(p_18, (safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s((**p_1284->g_344), p_17)), l_793)))))), p_1284->g_67.f0)), p_19))) && (-1L))))), 0)) >= 65526UL) < (*p_1284->g_114)) , p_18)) == p_19), p_18))) != p_19) >= p_18), l_796));
                        return p_17;
                    }
                }
                l_709 = ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_796, (l_801 , (((safe_mul_func_uint16_t_u_u(l_796, ((*l_804) = 0L))) ^ (safe_rshift_func_int8_t_s_s(((~((safe_sub_func_uint32_t_u_u((l_809 , ((((*l_812) = (l_811 = l_810)) , (l_814 = l_813)) != (l_815 = (void*)0))), (((l_818 &= ((safe_add_func_uint64_t_u_u(0x0F2672EAB406C583L, 0x770D11E09BD8B5F4L)) <= l_709)) , p_1284->g_2) || l_725))) , l_796)) == (-8L)), p_20))) & 0UL)))) <= l_809.f0), l_819)) == l_719);
            }
        }
    }
    return p_1284->g_2;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_25(int32_t * p_26, uint32_t  p_27, struct S3 * p_1284)
{ /* block id: 355 */
    uint32_t l_696 = 0x3B8C0ECAL;
    return l_696;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_15 p_1284->g_2 p_1284->g_61 p_1284->g_39 p_1284->g_67.f0 p_1284->g_67.f3 p_1284->g_97 p_1284->g_55 p_1284->g_67.f2 p_1284->g_91 p_1284->g_107 p_1284->g_114 p_1284->g_110 p_1284->g_138 p_1284->g_157 p_1284->g_162 p_1284->g_67 p_1284->g_134 p_1284->g_192 p_1284->g_204 p_1284->g_146 p_1284->g_219 p_1284->g_131 p_1284->g_194 p_1284->g_192.f0 p_1284->g_192.f1.f3 p_1284->g_344 p_1284->g_192.f1.f2 p_1284->g_383 p_1284->g_192.f2.f1 p_1284->g_345 p_1284->g_399 p_1284->g_218 p_1284->g_473 p_1284->g_505 p_1284->g_510 p_1284->g_525 p_1284->g_527 p_1284->g_530 p_1284->g_527.f2.f1 p_1284->g_559 p_1284->g_507.f0 p_1284->g_527.f0 p_1284->g_652 p_1284->g_531 p_1284->g_679
 * writes: p_1284->g_61 p_1284->g_91 p_1284->g_107 p_1284->g_67.f2 p_1284->g_114 p_1284->g_138 p_1284->g_97.f2 p_1284->g_157 p_1284->g_162 p_1284->g_67.f3 p_1284->g_194 p_1284->g_204 p_1284->g_219 p_1284->g_240 p_1284->g_97.f0 p_1284->g_125 p_1284->g_192.f1.f3 p_1284->g_192.f0 p_1284->g_67 p_1284->g_192.f1.f2 p_1284->g_39 p_1284->g_192.f2.f1 p_1284->g_110 p_1284->g_473 p_1284->g_506 p_1284->g_131 p_1284->g_510 p_1284->g_519 p_1284->g_525 p_1284->g_531 p_1284->g_527.f2.f1 p_1284->g_559 p_1284->g_97 p_1284->g_507.f0 p_1284->g_574 p_1284->g_218 p_1284->g_527.f0 p_1284->g_652
 */
uint32_t  func_28(uint32_t  p_29, uint32_t  p_30, uint32_t  p_31, int32_t * p_32, struct S3 * p_1284)
{ /* block id: 9 */
    int64_t *l_52 = (void*)0;
    int32_t l_53 = 0x630DE2FDL;
    uint32_t *l_54[7];
    uint8_t *l_60 = &p_1284->g_61;
    int32_t l_526 = 0L;
    int32_t *l_558[10][1];
    struct S0 l_560 = {4L,-1L,6UL,0UL};
    uint64_t *l_563 = &p_1284->g_192.f2.f2;
    uint64_t *l_564 = &l_560.f2;
    int8_t *l_573 = &p_1284->g_574[2][3];
    uint16_t l_593[3];
    uint64_t **l_603[9] = {&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564};
    uint64_t ***l_602 = &l_603[2];
    union U1 l_607 = {251UL};
    int32_t *l_608[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_691 = 0x3967934836B9889BL;
    int8_t l_692 = 2L;
    int i, j;
    for (i = 0; i < 7; i++)
        l_54[i] = &p_1284->g_55;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_558[i][j] = &p_1284->g_559[0][4];
    }
    for (i = 0; i < 3; i++)
        l_593[i] = 65532UL;
    p_1284->g_559[0][0] |= ((func_40(func_45((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((p_1284->g_15 == ((l_53 = (((void*)0 != l_52) <= l_53)) , p_1284->g_2)))), (safe_div_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((--(*l_60)), (func_64(&p_1284->g_55, p_1284) <= (l_526 |= (l_54[1] != (p_1284->g_525 = p_1284->g_525)))))) && p_1284->g_67.f1), 0x14B4BF2F429F9B49L)))), &p_1284->g_218, p_1284->g_527, p_1284), p_1284->g_55, p_1284->g_55, l_54[6], p_1284) >= 0L) , 0L);
    p_1284->g_97 = l_560;
    if ((6UL && ((safe_sub_func_int32_t_s_s(((((--(*l_564)) > (((*p_1284->g_525)++) , p_1284->g_204)) & 18446744073709551615UL) ^ (safe_add_func_int32_t_s_s(0x72303308L, (((p_30 , (safe_div_func_int64_t_s_s(((*p_1284->g_345) < ((-1L) | (((((*l_573) = 0x3CL) && ((((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(p_1284->g_559[0][2], p_30)), p_29)), p_30)) <= p_1284->g_473) == 0x6E59684AFBA4F378L) & 0x43E1L)) && 0x03L) > p_30))), p_31))) >= p_29) | p_1284->g_138)))), 0L)) > p_1284->g_67.f3)))
    { /* block id: 283 */
        int64_t l_583 = 0x2B79D30D862036B8L;
        int64_t *l_588 = &p_1284->g_218;
        uint64_t ****l_598 = (void*)0;
        uint64_t ****l_599 = (void*)0;
        uint64_t **l_601[2][4] = {{&l_563,&l_564,&l_563,&l_563},{&l_563,&l_564,&l_563,&l_563}};
        uint64_t ***l_600 = &l_601[1][2];
        uint32_t l_604 = 0x4BA11930L;
        int32_t l_605 = (-8L);
        uint8_t *l_606 = &p_1284->g_192.f0;
        int32_t **l_609[3][4][3] = {{{&l_608[1],&l_608[1],&l_558[4][0]},{&l_608[1],&l_608[1],&l_558[4][0]},{&l_608[1],&l_608[1],&l_558[4][0]},{&l_608[1],&l_608[1],&l_558[4][0]}},{{&l_608[1],&l_608[1],&l_558[4][0]},{&l_608[1],&l_608[1],&l_558[4][0]},{&l_608[1],&l_608[1],&l_558[4][0]},{&l_608[1],&l_608[1],&l_558[4][0]}},{{&l_608[1],&l_608[1],&l_558[4][0]},{&l_608[1],&l_608[1],&l_558[4][0]},{&l_608[1],&l_608[1],&l_558[4][0]},{&l_608[1],&l_608[1],&l_558[4][0]}}};
        int i, j, k;
        l_583 = (safe_rshift_func_uint8_t_u_u(0x4FL, 4));
        l_608[1] = func_69(l_560, p_30, (safe_sub_func_int16_t_s_s(p_1284->g_107, ((p_30 <= (safe_add_func_int16_t_s_s(p_1284->g_97.f2, (!0L)))) <= ((((p_1284->g_527.f0 = ((*l_606) = (((*l_588) &= p_30) < (safe_sub_func_int32_t_s_s((((l_605 = ((safe_mul_func_uint16_t_u_u((((((l_593[0] , ((safe_div_func_int16_t_s_s((((*l_60) = (safe_mod_func_uint64_t_u_u(((l_600 = (void*)0) != l_602), 0x7867B5445B7A275EL))) <= p_30), l_583)) && p_1284->g_97.f0)) < l_604) , 0xA56EFE57L) < 4294967295UL) | (*p_1284->g_525)), l_583)) >= (-1L))) == (*p_1284->g_525)) == l_604), l_583))))) < l_583) , p_1284->g_527.f0) != p_29)))), l_607, p_1284);
        p_1284->g_519 = &p_1284->g_559[0][4];
        return p_29;
    }
    else
    { /* block id: 294 */
        int32_t *l_622 = &p_1284->g_559[0][4];
        int32_t l_627 = (-6L);
        int16_t l_659 = 0x66EFL;
        union U1 **l_673 = &p_1284->g_531;
        uint64_t l_674 = 0xCD3F2B6883A3A3E4L;
        uint64_t ***l_678 = &l_603[2];
        uint64_t ***l_683 = &l_603[1];
        if ((l_627 ^= (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0x79F3L, (safe_lshift_func_int16_t_s_u((!(safe_rshift_func_int16_t_s_s((p_1284->g_91 & (safe_rshift_func_uint8_t_u_u(255UL, 3))), ((void*)0 == &p_1284->g_138)))), (safe_rshift_func_uint16_t_u_s((&p_1284->g_559[0][4] == l_622), ((safe_div_func_uint64_t_u_u(((*l_564) ^= p_30), (p_1284->g_138 &= ((safe_mul_func_int8_t_s_s((*l_622), p_30)) || p_1284->g_507.f0)))) || p_1284->g_55))))))), p_29))))
        { /* block id: 298 */
            uint64_t l_628 = 0x492BB6F44047C0C5L;
            int32_t l_660 = 0x27925B3FL;
            --l_628;
            for (l_560.f3 = 0; (l_560.f3 <= 24); l_560.f3 = safe_add_func_int16_t_s_s(l_560.f3, 3))
            { /* block id: 302 */
                int8_t l_648 = 0x7DL;
                uint32_t l_649 = 4294967290UL;
                if ((*p_32))
                    break;
                for (p_1284->g_67.f3 = 0; (p_1284->g_67.f3 <= 2); p_1284->g_67.f3 += 1)
                { /* block id: 306 */
                    int8_t l_651[7][5][7] = {{{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L}},{{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L}},{{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L}},{{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L}},{{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L}},{{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L}},{{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L},{0x37L,0x65L,6L,1L,0x41L,1L,6L}}};
                    int i, j, k;
                    for (p_1284->g_91 = 0; (p_1284->g_91 <= 2); p_1284->g_91 += 1)
                    { /* block id: 309 */
                        int16_t *l_643 = &p_1284->g_194;
                        int64_t *l_650 = &p_1284->g_131;
                        int i, j, k;
                        (*l_622) = (((safe_rshift_func_uint8_t_u_s(1UL, (p_1284->g_110[p_1284->g_67.f3][(p_1284->g_91 + 7)][p_1284->g_91] && (safe_rshift_func_uint16_t_u_s(65535UL, ((safe_rshift_func_int8_t_s_s((((*l_650) ^= (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((*l_643) = p_31), 8)) && ((*p_1284->g_525) = ((*p_32) & (((p_1284->g_110[p_1284->g_67.f3][(p_1284->g_91 + 7)][p_1284->g_91] > ((safe_div_func_int16_t_s_s(p_29, p_31)) || (safe_rshift_func_uint8_t_u_u(((*l_60) &= ((p_29 , l_648) | (-1L))), p_30)))) & (*p_1284->g_345)) >= 0x03924DB1A58E19BEL)))), l_649)) && p_30) && p_1284->g_107)) <= (*l_622)), p_1284->g_110[p_1284->g_67.f3][(p_1284->g_91 + 7)][(p_1284->g_91 + 2)])) & 4294967289UL)))))) | p_1284->g_39) | 18446744073709551606UL);
                    }
                    for (p_1284->g_61 = 0; (p_1284->g_61 <= 2); p_1284->g_61 += 1)
                    { /* block id: 318 */
                        --p_1284->g_652;
                    }
                }
                for (p_1284->g_97.f1 = (-2); (p_1284->g_97.f1 >= 24); ++p_1284->g_97.f1)
                { /* block id: 324 */
                    for (l_607.f0 = 0; (l_607.f0 <= 8); l_607.f0 += 1)
                    { /* block id: 327 */
                        int32_t *l_657[6] = {&p_1284->g_559[0][2],(void*)0,&p_1284->g_559[0][2],&p_1284->g_559[0][2],(void*)0,&p_1284->g_559[0][2]};
                        int32_t **l_658 = &l_608[1];
                        int i;
                        (*l_658) = l_657[1];
                        l_660 ^= (p_1284->g_559[0][6] && (l_659 || p_31));
                        (*l_622) ^= ((0x13D58288L != ((((*p_1284->g_525) < (&p_1284->g_531 == (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u(0UL, (safe_mul_func_int16_t_s_s(p_1284->g_527.f0, ((safe_div_func_int8_t_s_s((8UL < ((*l_573) = (0x533391B8L | ((*p_1284->g_530) != (void*)0)))), 0x5FL)) == p_31))))) , p_29), 1)), p_1284->g_91)) >= (-4L)) , l_673))) , l_674) > (-4L))) <= 0x3B2C59FA5E5C2789L);
                    }
                    if (l_649)
                        break;
                }
                (*l_622) ^= (*p_32);
            }
        }
        else
        { /* block id: 337 */
            int32_t **l_675 = &l_608[5];
            uint64_t ****l_682[6] = {&p_1284->g_679,&l_602,&p_1284->g_679,&p_1284->g_679,&l_602,&p_1284->g_679};
            int i;
            (*l_675) = &l_627;
            (*l_622) = (safe_add_func_uint64_t_u_u(18446744073709551615UL, (l_678 != (l_683 = p_1284->g_679))));
        }
    }
    for (l_53 = (-16); (l_53 == 25); ++l_53)
    { /* block id: 345 */
        int32_t **l_686 = &p_1284->g_519;
        int32_t l_689[6][3][6] = {{{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L}},{{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L}},{{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L}},{{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L}},{{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L}},{{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L},{0x687F01CEL,0x29092C9BL,(-1L),0x17EE63E8L,0x6D66F205L,0x6D66F205L}}};
        uint32_t l_693[3][4][7] = {{{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L},{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L},{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L},{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L}},{{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L},{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L},{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L},{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L}},{{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L},{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L},{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L},{0xDB9F0211L,4294967291UL,0x4A53F734L,0xA844257EL,0x4A53F734L,4294967291UL,0xDB9F0211L}}};
        int i, j, k;
        (*l_686) = p_32;
        for (p_1284->g_194 = 0; (p_1284->g_194 >= 0); p_1284->g_194 -= 1)
        { /* block id: 349 */
            int64_t l_687 = 0x69D1E0FB7FA86BEFL;
            int32_t l_688 = 0x38DB5AE8L;
            int32_t l_690[5][10] = {{0x368FAA0BL,(-1L),(-1L),0x368FAA0BL,(-5L),(-9L),0x072F30F5L,(-2L),0x07FF6B5CL,0x05675E77L},{0x368FAA0BL,(-1L),(-1L),0x368FAA0BL,(-5L),(-9L),0x072F30F5L,(-2L),0x07FF6B5CL,0x05675E77L},{0x368FAA0BL,(-1L),(-1L),0x368FAA0BL,(-5L),(-9L),0x072F30F5L,(-2L),0x07FF6B5CL,0x05675E77L},{0x368FAA0BL,(-1L),(-1L),0x368FAA0BL,(-5L),(-9L),0x072F30F5L,(-2L),0x07FF6B5CL,0x05675E77L},{0x368FAA0BL,(-1L),(-1L),0x368FAA0BL,(-5L),(-9L),0x072F30F5L,(-2L),0x07FF6B5CL,0x05675E77L}};
            int i, j;
            l_687 |= 0x1BD0A467L;
            l_693[1][3][0]--;
        }
    }
    return p_1284->g_507.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_40(int8_t  p_41, int64_t  p_42, int16_t  p_43, int32_t * p_44, struct S3 * p_1284)
{ /* block id: 275 */
    uint32_t l_555 = 1UL;
    l_555--;
    return l_555;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_97.f2 p_1284->g_530 p_1284->g_527.f2.f1 p_1284->g_91 p_1284->g_219
 * writes: p_1284->g_97.f2 p_1284->g_531 p_1284->g_527.f2.f1 p_1284->g_157 p_1284->g_97.f0
 */
int8_t  func_45(int32_t  p_46, int64_t * p_47, union U1  p_48, struct S3 * p_1284)
{ /* block id: 260 */
    int16_t l_543[5] = {0x7ACDL,0x7ACDL,0x7ACDL,0x7ACDL,0x7ACDL};
    int32_t l_548 = 0x38BC9C88L;
    int32_t l_549 = (-3L);
    int32_t l_550 = (-2L);
    int32_t l_551[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_551[i][j] = 0x5D43E830L;
    }
    for (p_1284->g_97.f2 = 18; (p_1284->g_97.f2 != 24); p_1284->g_97.f2 = safe_add_func_uint8_t_u_u(p_1284->g_97.f2, 8))
    { /* block id: 263 */
        (*p_1284->g_530) = &p_1284->g_192;
    }
    for (p_1284->g_527.f2.f1 = 25; (p_1284->g_527.f2.f1 <= 0); p_1284->g_527.f2.f1 = safe_sub_func_int8_t_s_s(p_1284->g_527.f2.f1, 6))
    { /* block id: 268 */
        int8_t l_542 = 0x54L;
        int32_t *l_545 = &p_1284->g_97.f0;
        int32_t *l_546 = &p_1284->g_192.f2.f0;
        int32_t *l_547[9][9] = {{&p_1284->g_2,&p_1284->g_192.f2.f0,&p_1284->g_67.f0,(void*)0,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,(void*)0},{&p_1284->g_2,&p_1284->g_192.f2.f0,&p_1284->g_67.f0,(void*)0,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,(void*)0},{&p_1284->g_2,&p_1284->g_192.f2.f0,&p_1284->g_67.f0,(void*)0,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,(void*)0},{&p_1284->g_2,&p_1284->g_192.f2.f0,&p_1284->g_67.f0,(void*)0,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,(void*)0},{&p_1284->g_2,&p_1284->g_192.f2.f0,&p_1284->g_67.f0,(void*)0,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,(void*)0},{&p_1284->g_2,&p_1284->g_192.f2.f0,&p_1284->g_67.f0,(void*)0,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,(void*)0},{&p_1284->g_2,&p_1284->g_192.f2.f0,&p_1284->g_67.f0,(void*)0,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,(void*)0},{&p_1284->g_2,&p_1284->g_192.f2.f0,&p_1284->g_67.f0,(void*)0,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,(void*)0},{&p_1284->g_2,&p_1284->g_192.f2.f0,&p_1284->g_67.f0,(void*)0,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,&p_1284->g_15,(void*)0}};
        uint8_t l_552 = 1UL;
        int i, j;
        (*l_545) = ((p_1284->g_157 = (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_48.f0, 1)), (~((safe_mul_func_uint16_t_u_u(p_46, (p_48.f0 & p_46))) , (-1L))))) < 1UL) & 0UL)) == (((((safe_lshift_func_int16_t_s_u(p_1284->g_91, 10)) , 65526UL) ^ l_542) , l_543[4]) && l_542));
        --l_552;
        if (p_48.f0)
            break;
    }
    return p_1284->g_219[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_15 p_1284->g_39 p_1284->g_67.f0 p_1284->g_67.f3 p_1284->g_97 p_1284->g_55 p_1284->g_67.f2 p_1284->g_91 p_1284->g_107 p_1284->g_114 p_1284->g_2 p_1284->g_110 p_1284->g_138 p_1284->g_157 p_1284->g_162 p_1284->g_67 p_1284->g_134 p_1284->g_192 p_1284->g_204 p_1284->g_146 p_1284->g_219 p_1284->g_131 p_1284->g_194 p_1284->g_192.f0 p_1284->g_192.f1.f3 p_1284->g_344 p_1284->g_192.f1.f2 p_1284->g_383 p_1284->g_192.f2.f1 p_1284->g_345 p_1284->g_399 p_1284->g_218 p_1284->g_473 p_1284->g_505 p_1284->g_510
 * writes: p_1284->g_91 p_1284->g_107 p_1284->g_67.f2 p_1284->g_114 p_1284->g_138 p_1284->g_97.f2 p_1284->g_157 p_1284->g_162 p_1284->g_67.f3 p_1284->g_194 p_1284->g_204 p_1284->g_219 p_1284->g_240 p_1284->g_97.f0 p_1284->g_125 p_1284->g_192.f1.f3 p_1284->g_192.f0 p_1284->g_67 p_1284->g_192.f1.f2 p_1284->g_39 p_1284->g_192.f2.f1 p_1284->g_110 p_1284->g_473 p_1284->g_506 p_1284->g_131 p_1284->g_510 p_1284->g_519
 */
uint64_t  func_64(uint32_t * p_65, struct S3 * p_1284)
{ /* block id: 12 */
    struct S0 l_74 = {1L,0x4F49CF94L,0x2283564F69674B17L,4294967295UL};
    int32_t *l_520 = &l_74.f0;
    if (p_1284->g_15)
    { /* block id: 13 */
        struct S0 *l_66[2];
        struct S0 **l_68 = &l_66[0];
        int32_t l_77 = (-1L);
        uint32_t *l_90 = &p_1284->g_91;
        union U1 l_92[1][5] = {{{5UL},{5UL},{5UL},{5UL},{5UL}}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_66[i] = &p_1284->g_67;
        (*l_68) = (p_1284->g_15 , l_66[0]);
        p_1284->g_519 = func_69(l_74, (((((*l_90) = (safe_lshift_func_uint16_t_u_u((((l_77 || (((((safe_sub_func_int32_t_s_s(0x2C3F4083L, p_1284->g_39)) >= l_77) , (safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint8_t_u_u(255UL, 0x1DL)) , (safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((~8UL) && (safe_lshift_func_uint16_t_u_u(((void*)0 == &l_66[0]), p_1284->g_67.f0))), p_1284->g_67.f0)), l_77))) , l_74.f3), l_74.f0))) , (void*)0) != (void*)0)) , p_1284->g_67.f3) && 0xAAL), 3))) == 0UL) & 0xC9L) > 1UL), l_74.f2, l_92[0][1], p_1284);
    }
    else
    { /* block id: 249 */
        l_520 = (void*)0;
    }
    for (l_74.f1 = (-29); (l_74.f1 != 1); l_74.f1++)
    { /* block id: 254 */
        struct S0 *l_524 = &l_74;
        struct S0 **l_523 = &l_524;
        (*l_523) = (void*)0;
    }
    return p_1284->g_218;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_97 p_1284->g_67.f3 p_1284->g_55 p_1284->g_67.f2 p_1284->g_91 p_1284->g_107 p_1284->g_114 p_1284->g_2 p_1284->g_110 p_1284->g_138 p_1284->g_157 p_1284->g_162 p_1284->g_67 p_1284->g_39 p_1284->g_134 p_1284->g_192 p_1284->g_204 p_1284->g_146 p_1284->g_15 p_1284->g_219 p_1284->g_131 p_1284->g_194 p_1284->g_192.f0 p_1284->g_344 p_1284->g_383 p_1284->g_345 p_1284->g_399 p_1284->g_218 p_1284->g_473 p_1284->g_505 p_1284->g_510 p_1284->g_192.f1.f3 p_1284->g_192.f1.f2 p_1284->g_192.f2.f1
 * writes: p_1284->g_107 p_1284->g_67.f2 p_1284->g_114 p_1284->g_138 p_1284->g_97.f2 p_1284->g_157 p_1284->g_162 p_1284->g_67.f3 p_1284->g_194 p_1284->g_204 p_1284->g_219 p_1284->g_240 p_1284->g_97.f0 p_1284->g_125 p_1284->g_192.f1.f3 p_1284->g_192.f0 p_1284->g_67 p_1284->g_192.f1.f2 p_1284->g_39 p_1284->g_192.f2.f1 p_1284->g_91 p_1284->g_110 p_1284->g_473 p_1284->g_506 p_1284->g_131 p_1284->g_510
 */
int32_t * func_69(struct S0  p_70, int8_t  p_71, uint16_t  p_72, union U1  p_73, struct S3 * p_1284)
{ /* block id: 16 */
    int8_t l_96 = (-6L);
    uint16_t *l_106 = &p_1284->g_107;
    int32_t *l_128 = &p_1284->g_97.f0;
    int32_t l_130[6];
    int64_t *l_150[4][4][9] = {{{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39}},{{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39}},{{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39}},{{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39},{&p_1284->g_39,&p_1284->g_110[0][8][2],&p_1284->g_131,&p_1284->g_39,(void*)0,&p_1284->g_39,&p_1284->g_131,&p_1284->g_110[0][8][2],&p_1284->g_39}}};
    int64_t *l_154 = &p_1284->g_39;
    uint64_t l_202 = 5UL;
    union U1 l_247[9][1][1] = {{{{0x15L}}},{{{0x15L}}},{{{0x15L}}},{{{0x15L}}},{{{0x15L}}},{{{0x15L}}},{{{0x15L}}},{{{0x15L}}},{{{0x15L}}}};
    union U2 l_279 = {0xD6ECBC03L};
    uint32_t *l_290[7][4][1] = {{{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55}},{{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55}},{{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55}},{{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55}},{{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55}},{{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55}},{{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55},{&p_1284->g_55}}};
    struct S0 *l_299 = &p_1284->g_67;
    struct S0 **l_298[8] = {&l_299,&l_299,&l_299,&l_299,&l_299,&l_299,&l_299,&l_299};
    int32_t *l_373 = &l_130[0];
    uint64_t *l_378[9][8][3] = {{{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2}},{{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2}},{{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2}},{{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2}},{{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2}},{{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2}},{{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2}},{{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2}},{{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2},{(void*)0,&p_1284->g_67.f2,&p_1284->g_97.f2}}};
    uint64_t **l_377[10][10][1] = {{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}},{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}},{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}},{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}},{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}},{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}},{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}},{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}},{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}},{{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]},{&l_378[7][0][1]}}};
    uint64_t ***l_376[4][5];
    int32_t l_509 = 7L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_130[i] = 0x5639F120L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_376[i][j] = &l_377[9][7][0];
    }
    if ((((((65530UL || (safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u(l_96, ((p_1284->g_97 , (safe_div_func_uint8_t_u_u(0UL, p_72))) , ((p_1284->g_67.f3 > (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((((p_70 , (safe_sub_func_uint64_t_u_u((((*l_106) = ((-1L) == p_1284->g_97.f0)) >= p_1284->g_97.f3), l_96))) <= 1L) == p_1284->g_97.f0) | l_96) , (-3L)), 1)), l_96))) || l_96))))))) , p_1284->g_55) < l_96) >= p_70.f2) , p_1284->g_97.f2))
    { /* block id: 18 */
        int32_t *l_108 = &p_1284->g_15;
        int32_t **l_109 = &l_108;
        (*l_109) = l_108;
        return &p_1284->g_15;
    }
    else
    { /* block id: 21 */
        int32_t *l_113 = &p_1284->g_97.f0;
        int32_t l_136 = 0x77A056DCL;
        int32_t *l_141 = (void*)0;
        int32_t *l_142 = (void*)0;
        int32_t *l_143 = &p_1284->g_97.f0;
        int32_t *l_144 = &l_130[0];
        int32_t *l_145[4] = {&p_1284->g_67.f0,&p_1284->g_67.f0,&p_1284->g_67.f0,&p_1284->g_67.f0};
        uint64_t l_147 = 0x93EDA46FE84D5964L;
        int64_t **l_151 = &l_150[1][0][0];
        int64_t *l_153 = &p_1284->g_131;
        int64_t **l_152 = &l_153;
        uint64_t *l_155 = &p_1284->g_97.f2;
        uint8_t *l_156[6][5][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        uint16_t l_216 = 65535UL;
        int8_t l_293 = 0x15L;
        union U2 l_390 = {4294967291UL};
        struct S0 **l_518 = (void*)0;
        int i, j, k;
        for (p_1284->g_67.f2 = 0; (p_1284->g_67.f2 <= 2); p_1284->g_67.f2 += 1)
        { /* block id: 24 */
            int32_t *l_111[5] = {&p_1284->g_67.f0,&p_1284->g_67.f0,&p_1284->g_67.f0,&p_1284->g_67.f0,&p_1284->g_67.f0};
            int32_t **l_112[6] = {&l_111[0],&l_111[0],&l_111[0],&l_111[0],&l_111[0],&l_111[0]};
            int i;
            l_113 = l_111[0];
            for (p_71 = 2; (p_71 >= 0); p_71 -= 1)
            { /* block id: 28 */
                int32_t l_126 = (-1L);
                int32_t l_132 = 0x1D08C604L;
                int32_t l_137 = 0x74545E75L;
                p_1284->g_114 = &p_1284->g_2;
                for (p_73.f2.f0 = 0; (p_73.f2.f0 <= 2); p_73.f2.f0 += 1)
                { /* block id: 32 */
                    int16_t l_121 = 4L;
                    int32_t l_127 = 3L;
                    int32_t l_133 = 6L;
                    int32_t l_135[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_135[i] = 0x6AE04394L;
                    for (p_70.f2 = 0; (p_70.f2 <= 2); p_70.f2 += 1)
                    { /* block id: 35 */
                        int32_t l_122 = (-2L);
                        uint32_t *l_123 = (void*)0;
                        uint32_t *l_124[4] = {&p_1284->g_125,&p_1284->g_125,&p_1284->g_125,&p_1284->g_125};
                        int32_t *l_129[1][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                        int i, j, k;
                        l_127 &= (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_1284->g_91, ((((3L | (p_70.f0 != (l_126 = (((((0x63D7E29C1E949441L & (((+0x5C805807L) > (!((((((p_70.f3 || l_121) ^ p_72) && (((l_121 && p_1284->g_107) | 0x2889293DL) & l_96)) >= p_1284->g_97.f3) > l_122) > p_72))) ^ (*p_1284->g_114))) && p_1284->g_91) <= 0x77DDL) >= 0x588FA3BE208CE942L) == 0x6DL)))) < (*p_1284->g_114)) , (void*)0) != &p_70))), p_71)) ^ l_96), p_1284->g_110[0][7][6]));
                        l_129[0][3][1] = l_128;
                    }
                    p_1284->g_138++;
                }
            }
            p_1284->g_114 = (void*)0;
            return &p_1284->g_15;
        }
lbl_261:
        ++l_147;
lbl_461:
        if (((*l_128) < (p_1284->g_162 &= ((((*l_155) = (((*l_152) = ((*l_151) = l_150[1][0][6])) == l_154)) > ((p_1284->g_157--) ^ (-1L))) | (safe_sub_func_int16_t_s_s(p_73.f0, 65535UL))))))
        { /* block id: 52 */
            int64_t l_185 = 0x342314006B9A275DL;
            int32_t l_217 = (-1L);
            uint64_t **l_258 = &l_155;
            uint64_t *l_259 = &l_147;
            int64_t **l_260 = &l_150[0][2][5];
            int8_t *l_264 = (void*)0;
            int8_t *l_265 = &l_96;
            int16_t *l_276 = &p_1284->g_204;
lbl_242:
            for (p_73.f2.f0 = 24; (p_73.f2.f0 != (-5)); p_73.f2.f0--)
            { /* block id: 55 */
                int32_t l_169[2];
                uint16_t *l_239 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_169[i] = (-1L);
                for (p_71 = 2; (p_71 >= 0); p_71 -= 1)
                { /* block id: 58 */
                    uint32_t l_170 = 0xAEDE11C7L;
                    int i;
                    (*l_144) = (safe_mul_func_uint8_t_u_u((((l_169[1] = (safe_mod_func_uint16_t_u_u(l_169[1], l_170))) <= (safe_mod_func_int32_t_s_s(((void*)0 != &l_150[1][0][6]), 7UL))) , (((((safe_mod_func_int32_t_s_s(p_71, (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_1284->g_67 , (((+p_72) | (((safe_mod_func_uint64_t_u_u((p_1284->g_138 = 0xEF7D714BD8925AE9L), p_1284->g_39)) != 2L) , p_1284->g_134)) , p_70.f3)), 0)), (*l_128))) , (*l_128)), 6)) >= p_1284->g_39) != l_185), 9)))) >= p_1284->g_67.f1) == 0x5FL) < p_70.f2) >= (*l_128))), 1UL));
                    for (p_1284->g_67.f3 = 0; (p_1284->g_67.f3 <= 3); p_1284->g_67.f3 += 1)
                    { /* block id: 64 */
                        int16_t *l_193 = &p_1284->g_194;
                        int16_t *l_203 = &p_1284->g_204;
                        int32_t l_209 = 0x6CEDD2ABL;
                        (*l_144) &= ((((*l_203) ^= (((((p_71 , (safe_div_func_int16_t_s_s(((9UL >= (safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(((((p_1284->g_192 , 9L) | ((*l_193) = 0L)) | p_73.f0) >= (--p_1284->g_157)), p_1284->g_67.f1)), 4))) ^ (safe_add_func_uint16_t_u_u((0UL >= (safe_rshift_func_uint8_t_u_s((((safe_unary_minus_func_int32_t_s(0x212C6343L)) > 0x3FL) && (*l_128)), (*l_143)))), l_202))), 1L))) || 0x49F298B9962CEF5FL) ^ p_72) >= 0x6F053202L) && p_70.f0)) & (*l_128)) , (*l_128));
                        p_70.f0 |= (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*l_128) <= ((p_1284->g_91 != p_1284->g_146) | ((l_209 != (((l_169[0] >= l_185) && (((safe_add_func_uint16_t_u_u(p_1284->g_2, (((safe_div_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u((p_1284->g_15 || ((((p_1284->g_15 >= (-7L)) ^ 0x50E8L) & 0xA181L) != 0x57E574C6L)), p_70.f3)) , p_1284->g_97.f1) <= p_1284->g_2), (-3L))) != l_185) < 1UL))) > 1L) & 5UL)) , l_216)) , p_70.f3))), 0x2826348BL)), 7UL));
                    }
                }
                ++p_1284->g_219[0];
                for (l_96 = 0; (l_96 <= 5); l_96 += 1)
                { /* block id: 75 */
                    uint64_t **l_230 = &l_155;
                    uint16_t *l_237 = (void*)0;
                    uint16_t **l_238[10][6] = {{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237},{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237},{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237},{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237},{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237},{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237},{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237},{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237},{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237},{&l_237,&l_237,&l_106,&l_106,&l_237,&l_237}};
                    int32_t l_241[9][10][1] = {{{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL}},{{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL}},{{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL}},{{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL}},{{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL}},{{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL}},{{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL}},{{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL}},{{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL},{0x31A217ABL}}};
                    int i, j, k;
                    if ((safe_mod_func_int64_t_s_s((p_1284->g_131 | l_185), (safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(p_1284->g_97.f0, ((safe_mul_func_uint8_t_u_u(p_70.f2, p_1284->g_97.f3)) & (+((((*l_230) = &p_1284->g_138) != &l_147) , ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((p_72 ^= (+(safe_mul_func_int16_t_s_s(((l_239 = l_237) == (p_1284->g_240[3] = &p_1284->g_107)), l_241[4][4][0])))), 9)), 0x24L)) <= l_169[1])))))), p_1284->g_97.f0)))))
                    { /* block id: 80 */
                        return &p_1284->g_15;
                    }
                    else
                    { /* block id: 82 */
                        if (p_73.f0)
                            break;
                    }
                    if (p_1284->g_67.f1)
                        goto lbl_242;
                    l_130[l_96] = (p_70.f0 > p_1284->g_219[0]);
                }
            }
            (*l_144) = (((*l_143) = ((safe_div_func_uint32_t_u_u(((((safe_mod_func_uint32_t_u_u((4294967295UL <= ((((l_247[8][0][0] , (safe_div_func_uint32_t_u_u(((p_1284->g_97.f1 || (l_217 &= ((p_1284->g_97.f0 , (safe_add_func_int32_t_s_s((safe_div_func_int64_t_s_s((((((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_1284->g_131, (&p_1284->g_138 != (l_259 = ((*l_258) = &l_202))))), p_1284->g_131)) , l_260) != l_260) | 0x299F7040179BD662L) & 0x4D1BL), 1UL)), p_1284->g_162))) >= 0xE72C066E181E8E28L))) || 0x42L), p_70.f0))) && (*l_128)) != 65531UL) , 4L)), l_185)) || 0x0ED4L) < l_185) > p_70.f2), 0xD323A33DL)) < (*l_144))) | p_1284->g_194);
            if (l_96)
                goto lbl_261;
            (*l_128) = (((*l_276) = (((safe_add_func_uint8_t_u_u((p_1284->g_204 ^ (((*l_113) || 0L) <= (*l_128))), ((*l_265) = 0x50L))) > (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((18446744073709551615UL || (safe_div_func_uint32_t_u_u(1UL, (l_185 | (p_71 = (((safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((((*l_128) < p_1284->g_97.f2) & p_1284->g_192.f0), p_71)), 0x624DL)) & 0x532CL) | p_72)))))) , p_1284->g_204), p_70.f2)), 65532UL))) <= p_1284->g_192.f0)) == 65529UL);
        }
        else
        { /* block id: 99 */
            uint32_t *l_291 = (void*)0;
            uint32_t *l_292 = &p_1284->g_125;
            struct S0 *l_297[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            struct S0 **l_296 = &l_297[5];
            int32_t l_346 = 0x16FBDB85L;
            uint64_t ***l_382[5][6] = {{&l_377[4][8][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[0][5][0],&l_377[4][8][0]},{&l_377[4][8][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[0][5][0],&l_377[4][8][0]},{&l_377[4][8][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[0][5][0],&l_377[4][8][0]},{&l_377[4][8][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[0][5][0],&l_377[4][8][0]},{&l_377[4][8][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[9][7][0],&l_377[0][5][0],&l_377[4][8][0]}};
            int8_t l_407 = 0x36L;
            int32_t **l_415[6] = {&l_143,&l_143,&l_143,&l_143,&l_143,&l_143};
            uint8_t l_417[9];
            int i, j;
            for (i = 0; i < 9; i++)
                l_417[i] = 247UL;
            if ((p_70.f3 , ((safe_add_func_int8_t_s_s((((((l_279 = l_279) , p_70.f3) < (safe_rshift_func_int8_t_s_s((*l_128), 2))) <= (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((((p_1284->g_67.f3 >= ((*l_292) = ((l_290[2][2][0] = &p_1284->g_55) == &p_1284->g_55))) , &p_1284->g_138) != &l_147) <= (-1L)), p_70.f0)), 0x2C3DL)) >= p_72) >= p_1284->g_219[0]), l_293)), 0x0961L))) , p_1284->g_138), 0xB3L)) == p_70.f2)))
            { /* block id: 103 */
                int16_t l_329[9][4] = {{0L,(-9L),0x0371L,(-9L)},{0L,(-9L),0x0371L,(-9L)},{0L,(-9L),0x0371L,(-9L)},{0L,(-9L),0x0371L,(-9L)},{0L,(-9L),0x0371L,(-9L)},{0L,(-9L),0x0371L,(-9L)},{0L,(-9L),0x0371L,(-9L)},{0L,(-9L),0x0371L,(-9L)},{0L,(-9L),0x0371L,(-9L)}};
                int32_t l_330 = (-1L);
                int32_t l_370 = 0x6B4E3A92L;
                int i, j;
                for (p_1284->g_192.f1.f3 = 0; (p_1284->g_192.f1.f3 != 36); p_1284->g_192.f1.f3++)
                { /* block id: 106 */
                    return l_292;
                }
lbl_353:
                (*l_144) &= (l_296 == (p_70.f1 , l_298[5]));
                if ((p_1284->g_162 != (safe_unary_minus_func_int16_t_s(((((p_70.f0 = (safe_div_func_int32_t_s_s((p_1284->g_2 || (safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((((((safe_lshift_func_int16_t_s_s(p_72, (safe_sub_func_int32_t_s_s(0x42F7F7D6L, ((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((*l_143) <= (safe_add_func_int64_t_s_s(8L, (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((p_1284->g_192 , (safe_rshift_func_int8_t_s_s((p_1284->g_204 & ((l_329[1][3] = p_70.f1) , p_1284->g_97.f2)), 7))), p_71)), 0x7FL)), p_70.f2))))) == (-6L)), 1)), p_70.f0)) || p_1284->g_138))))) , &p_1284->g_2) != (void*)0) || p_1284->g_97.f0) > p_70.f1), 0x61L)), p_70.f1)), p_71)) , 0x0357L), l_330))), 4294967295UL))) , p_72) & (*l_128)) == p_1284->g_67.f1)))))
                { /* block id: 112 */
                    int16_t l_337 = 0x38FDL;
                    uint16_t l_347 = 65530UL;
                    for (l_293 = 0; (l_293 <= 3); l_293 += 1)
                    { /* block id: 115 */
                        struct S0 **l_342 = &l_297[5];
                        int8_t *l_343 = &l_96;
                        int i;
                        (*l_143) &= (safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s(0x6E8ED091L, ((((((safe_mod_func_int64_t_s_s(((+(l_130[(l_293 + 2)] , l_337)) && l_337), p_1284->g_110[1][1][3])) != ((((safe_div_func_uint64_t_u_u(p_1284->g_162, ((*l_155) ^= p_70.f1))) > (safe_rshift_func_int8_t_s_u(((*l_343) |= ((void*)0 == l_342)), 7))) & 0x539541A7B9ABF689L) < p_73.f0)) , &l_153) == p_1284->g_344) < l_337) , 0xE3C93703L))), l_346));
                        if (l_130[(l_293 + 2)])
                            break;
                        (*l_143) |= l_347;
                        (*l_128) |= (((p_70.f0 != 0x25ECB201L) < p_1284->g_194) == 0x32746AA76B3C505BL);
                    }
                    for (l_330 = 0; (l_330 <= 3); l_330 = safe_add_func_uint16_t_u_u(l_330, 9))
                    { /* block id: 125 */
                        uint64_t ***l_350 = (void*)0;
                        uint64_t **l_352 = (void*)0;
                        uint64_t ***l_351 = &l_352;
                        int32_t l_354[9] = {0x245D851CL,0x245D851CL,0x245D851CL,0x245D851CL,0x245D851CL,0x245D851CL,0x245D851CL,0x245D851CL,0x245D851CL};
                        int i;
                        (*l_351) = (void*)0;
                        if (p_1284->g_67.f3)
                            goto lbl_353;
                        (*l_144) |= (l_354[7] >= ((void*)0 == &p_1284->g_91));
                        return &p_1284->g_2;
                    }
                }
                else
                { /* block id: 131 */
                    int32_t l_369 = (-5L);
                    int16_t *l_371 = &l_329[1][3];
                    (*l_144) &= ((safe_add_func_int16_t_s_s(((*l_371) &= (safe_mod_func_int8_t_s_s(1L, (((safe_div_func_uint32_t_u_u((((-1L) | (((((((p_70.f1 != (p_1284->g_192.f0 = ((((p_1284->g_192 , (safe_lshift_func_int8_t_s_u(p_1284->g_204, 0))) || ((safe_div_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(p_70.f2, p_1284->g_55)) , p_72), p_70.f1)) , p_70.f3)) > p_1284->g_219[0]) , l_369))) <= p_1284->g_162) , (*l_128)) & p_70.f3) , l_370) < 2L) < 0UL)) || (-2L)), l_346)) == p_1284->g_67.f1) && p_72)))), (*l_128))) > p_1284->g_97.f3);
                    (*l_299) = p_1284->g_67;
                }
                for (p_1284->g_192.f1.f2 = 0; (p_1284->g_192.f1.f2 <= 9); p_1284->g_192.f1.f2 += 1)
                { /* block id: 139 */
                    int32_t *l_372 = &l_346;
                    return &p_1284->g_15;
                }
            }
            else
            { /* block id: 142 */
                uint32_t l_406 = 0xDBE43CFAL;
                int32_t l_416 = 0x0737DB03L;
                for (p_1284->g_39 = 0; (p_1284->g_39 <= 3); p_1284->g_39 = safe_add_func_int64_t_s_s(p_1284->g_39, 6))
                { /* block id: 145 */
                    uint64_t ****l_379 = &l_376[0][4];
                    uint64_t ***l_381 = &l_377[9][7][0];
                    uint64_t ****l_380[10][1] = {{&l_381},{&l_381},{&l_381},{&l_381},{&l_381},{&l_381},{&l_381},{&l_381},{&l_381},{&l_381}};
                    int32_t l_385 = 0x20C79D9AL;
                    int64_t *l_391 = &p_1284->g_110[1][9][5];
                    int i, j;
                    (*l_128) ^= ((l_382[2][0] = ((*l_379) = l_376[2][0])) == p_1284->g_383);
                    if (l_385)
                        break;
                    for (p_1284->g_192.f2.f1 = 0; (p_1284->g_192.f2.f1 >= 21); p_1284->g_192.f2.f1++)
                    { /* block id: 152 */
                        int8_t l_392 = 0x5AL;
                        uint32_t *l_408 = (void*)0;
                        uint32_t *l_409 = (void*)0;
                        uint32_t *l_410 = &l_279.f0;
                        l_392 |= (safe_div_func_uint16_t_u_u((l_390 , (((&l_128 != (void*)0) != ((*l_373) && (*l_144))) , (l_391 == (*p_1284->g_344)))), p_70.f2));
                        (*l_373) &= (((*l_391) ^= ((p_1284->g_67 , (safe_add_func_uint64_t_u_u(((p_70.f2 != ((*l_410) = (4294967290UL < ((p_1284->g_91 ^= (((*l_292) = ((0x54FDL > (((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(p_1284->g_399, 1UL)), (((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((l_385 , ((safe_div_func_uint8_t_u_u(0x6AL, (((l_406 = (p_72 >= 0L)) , (*l_128)) & p_70.f0))) , l_346)) <= l_346) < p_70.f1), 1)), 7UL)) , 0x5301L) == 0xB8E4L))) > 7L) == p_72)) < l_407)) <= p_70.f0)) , p_1284->g_194)))) || p_71), p_70.f1))) && (**p_1284->g_344))) & p_1284->g_218);
                        (*l_144) ^= (((0xAAL > ((p_1284->g_192 , ((((*l_391) = (-7L)) <= (!(**p_1284->g_344))) | ((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((l_407 < (((p_1284->g_157 , &p_1284->g_114) == l_415[0]) ^ p_70.f3)), p_70.f2)) == 0x04L), 3)) , l_385))) | 1UL)) >= 0x5524F12AL) > l_406);
                    }
                }
                ++l_417[2];
            }
            if (l_147)
                goto lbl_261;
        }
        for (p_73.f2.f1 = 0; (p_73.f2.f1 >= 0); p_73.f2.f1 -= 1)
        { /* block id: 170 */
            uint32_t l_436 = 4294967286UL;
            int32_t l_438[1];
            uint32_t *l_445 = &p_1284->g_162;
            int32_t l_489 = 2L;
            int32_t l_490[3][9][2] = {{{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L}},{{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L}},{{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L},{0x55F13AFFL,6L}}};
            struct S0 l_514 = {0x18F45BC1L,0x481CFE61L,0UL,1UL};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_438[i] = (-6L);
            for (p_1284->g_107 = 0; (p_1284->g_107 <= 3); p_1284->g_107 += 1)
            { /* block id: 173 */
                uint16_t l_420[6] = {0xA104L,0x273EL,0xA104L,0xA104L,0x273EL,0xA104L};
                int32_t l_421[4] = {1L,1L,1L,1L};
                uint32_t *l_437 = &l_279.f0;
                int i;
                (*l_128) = (((*l_144) = (((l_421[0] = l_420[5]) , (((void*)0 != &p_1284->g_240[(p_1284->g_107 + 3)]) , (l_438[0] |= (1UL > (((l_421[0] | (!(-9L))) >= (((safe_add_func_int64_t_s_s(0x048C472A42C80E68L, p_70.f1)) <= ((*l_437) = ((safe_mod_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((p_1284->g_107 != p_70.f2) , (*l_373)) <= (*l_113)), 4)), 0x7FL)) >= p_1284->g_67.f0), l_436)), (**p_1284->g_344))) , (-1L)), p_73.f0)) < p_70.f1))) && p_1284->g_15)) == p_1284->g_138))))) && p_70.f2)) > 0x258D09BEL);
                return &p_1284->g_2;
            }
            if ((((safe_sub_func_int16_t_s_s((0x5530713DA4405A9FL == (((safe_lshift_func_int16_t_s_u((1UL ^ ((safe_mul_func_int8_t_s_s(((p_1284->g_97 , &l_153) != ((++(*l_445)) , &l_153)), (safe_lshift_func_int8_t_s_u(p_70.f2, 3)))) >= (safe_mul_func_uint8_t_u_u((~((*l_373) = ((((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((8UL & p_72), ((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(p_1284->g_67.f0)), p_73.f0)) , 0x57L))), p_1284->g_67.f3)), p_1284->g_192.f0)) >= 0x19L) == p_1284->g_55) & p_1284->g_138))), p_1284->g_97.f1)))), 11)) > 0x35A6L) >= p_73.f0)), (*l_128))) | 0x5A09L) && 1L))
            { /* block id: 183 */
                int16_t l_462 = 0x113DL;
                uint64_t ****l_468 = &l_376[2][1];
                int32_t l_472 = 0x461C9425L;
                int32_t **l_476[4] = {&l_145[3],&l_145[3],&l_145[3],&l_145[3]};
                int i;
                if (p_1284->g_131)
                    goto lbl_261;
                for (p_1284->g_192.f1.f3 = 0; (p_1284->g_192.f1.f3 <= 3); p_1284->g_192.f1.f3 += 1)
                { /* block id: 187 */
                    (*l_299) = p_1284->g_97;
                    if (p_1284->g_2)
                        goto lbl_461;
                    for (p_1284->g_162 = 0; (p_1284->g_162 <= 0); p_1284->g_162 += 1)
                    { /* block id: 192 */
                        uint64_t ****l_465 = &l_376[2][0];
                        int32_t l_469 = 1L;
                        int32_t l_470[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_470[i] = 0x727D77C0L;
                        p_70.f0 ^= (p_73.f0 == (0xF84BL != (l_462 == (safe_rshift_func_uint16_t_u_s(((*l_106) ^= ((0x4290L || l_462) && (l_465 != ((p_70.f1 , (safe_div_func_int32_t_s_s(((p_73.f0 == l_462) < (-2L)), l_436))) , l_468)))), 6)))));
                        (*l_113) ^= 1L;
                        p_1284->g_473++;
                    }
                    for (p_1284->g_67.f2 = 0; (p_1284->g_67.f2 <= 0); p_1284->g_67.f2 += 1)
                    { /* block id: 200 */
                        p_70.f0 ^= 0L;
                    }
                }
                p_1284->g_114 = &p_1284->g_15;
                (*l_113) &= (safe_mod_func_int16_t_s_s((((((*l_155) = (safe_add_func_uint32_t_u_u(p_1284->g_110[2][6][0], 5UL))) || (((*l_144) = (*p_1284->g_114)) < (safe_add_func_int64_t_s_s(p_70.f2, (l_490[2][7][0] ^= (safe_rshift_func_int16_t_s_s(p_1284->g_138, ((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((((~(l_489 ^= (l_438[0] = (&p_1284->g_114 != &l_113)))) , (p_1284->g_97.f2 , p_1284->g_146)) , p_1284->g_67.f3), p_1284->g_97.f2)), 1L)) || 0x72DC60A059F34E2BL)))))))) || 0x2777L) , p_70.f0), (-1L)));
            }
            else
            { /* block id: 211 */
                struct S0 l_491 = {1L,0x2728D905L,18446744073709551615UL,0UL};
                uint32_t *l_503 = (void*)0;
                uint32_t *l_504 = &l_279.f0;
                p_70 = l_491;
                (*l_113) = l_436;
                if (p_70.f0)
                    continue;
                if ((p_70.f0 < ((p_1284->g_97.f1 & p_70.f0) | ((!(safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s(p_1284->g_146, (safe_rshift_func_int8_t_s_u(0x1AL, 7)))) , (safe_div_func_int64_t_s_s(((**p_1284->g_344) = 0x419B957F39EF162FL), (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((p_73 , ((((*l_504) = (((((p_72 > 254UL) >= (*l_373)) ^ 0UL) < l_489) >= (-1L))) <= 0x5D1781A2L) == l_490[1][1][0])), 0x17L)), l_491.f0)))))))) || p_70.f2))))
                { /* block id: 217 */
                    (*p_1284->g_505) = &l_390;
                }
                else
                { /* block id: 219 */
                    if (p_73.f0)
                        break;
                }
            }
            for (p_1284->g_131 = 0; (p_1284->g_131 <= 3); p_1284->g_131 += 1)
            { /* block id: 225 */
                if (((void*)0 != &l_96))
                { /* block id: 226 */
                    int32_t l_508 = 0x1E6E577BL;
                    --p_1284->g_510;
                }
                else
                { /* block id: 228 */
                    struct S0 l_513[10][10] = {{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}},{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}},{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}},{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}},{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}},{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}},{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}},{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}},{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}},{{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x45B6AD69L,-1L,18446744073709551615UL,0x5CF83B5DL},{-2L,0L,18446744073709551614UL,0x38105CBFL},{0x11CA3BC5L,0L,0xB7233C4610211B9DL,0x05FBCEA7L},{0L,-3L,0x7EF5FFDA5A62C9E1L,0xB8F24C93L},{0x66CD3EA2L,0x0F3CBC51L,18446744073709551615UL,5UL},{0x24FE0EFCL,0x4EF2F984L,8UL,9UL},{0x6990D92BL,0x32506BE9L,0x0975891747C4D2A1L,4294967295UL}}};
                    struct S0 **l_517 = &l_299;
                    int i, j;
                    for (l_509 = 5; (l_509 >= 0); l_509 -= 1)
                    { /* block id: 231 */
                        l_514 = l_513[1][2];
                    }
                    (*l_113) ^= (safe_sub_func_int8_t_s_s((((*l_106) = (l_517 != l_518)) ^ p_72), (p_70 , p_70.f2)));
                    return &p_1284->g_2;
                }
                if ((*l_143))
                    continue;
                for (p_70.f2 = 0; (p_70.f2 <= 0); p_70.f2 += 1)
                { /* block id: 241 */
                    int i, j, k;
                    return l_290[(p_70.f2 + 6)][p_70.f2][p_70.f2];
                }
            }
        }
    }
    return &p_1284->g_15;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S3 c_1285;
    struct S3* p_1284 = &c_1285;
    struct S3 c_1286 = {
        0x263126FFL, // p_1284->g_2
        0x1ACD4098L, // p_1284->g_15
        (-3L), // p_1284->g_39
        0xDA828C04L, // p_1284->g_55
        0x64L, // p_1284->g_61
        {-1L,8L,18446744073709551606UL,4294967289UL}, // p_1284->g_67
        0UL, // p_1284->g_91
        {0x7CB68985L,4L,18446744073709551615UL,0x0F83D54BL}, // p_1284->g_97
        0x3232L, // p_1284->g_107
        {{{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L}},{{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L}},{{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L},{0x23DBDA42F3C5D46AL,9L,1L,1L,9L,0x23DBDA42F3C5D46AL,0x4651966E863DC2C3L,7L}}}, // p_1284->g_110
        (void*)0, // p_1284->g_114
        1UL, // p_1284->g_125
        1L, // p_1284->g_131
        2L, // p_1284->g_134
        18446744073709551613UL, // p_1284->g_138
        (-5L), // p_1284->g_146
        0xE1L, // p_1284->g_157
        0UL, // p_1284->g_162
        {0xEDL}, // p_1284->g_192
        8L, // p_1284->g_194
        0x50C9L, // p_1284->g_204
        (-1L), // p_1284->g_218
        {0xA6D7L}, // p_1284->g_219
        {&p_1284->g_107,&p_1284->g_107,&p_1284->g_107,&p_1284->g_107,&p_1284->g_107,&p_1284->g_107,&p_1284->g_107,&p_1284->g_107,&p_1284->g_107,&p_1284->g_107}, // p_1284->g_240
        &p_1284->g_39, // p_1284->g_345
        &p_1284->g_345, // p_1284->g_344
        (void*)0, // p_1284->g_384
        &p_1284->g_384, // p_1284->g_383
        4294967295UL, // p_1284->g_399
        {2L,2L,2L,2L,2L}, // p_1284->g_471
        6UL, // p_1284->g_473
        {1UL}, // p_1284->g_507
        &p_1284->g_507, // p_1284->g_506
        &p_1284->g_506, // p_1284->g_505
        0x519BL, // p_1284->g_510
        &p_1284->g_192.f2.f0, // p_1284->g_519
        &p_1284->g_507.f0, // p_1284->g_525
        {0xAEL}, // p_1284->g_527
        &p_1284->g_527, // p_1284->g_531
        &p_1284->g_531, // p_1284->g_530
        {&p_1284->g_67.f0,&p_1284->g_67.f0}, // p_1284->g_544
        {{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}}, // p_1284->g_559
        {{0x60L,0x60L,0x60L,0x60L},{0x60L,0x60L,0x60L,0x60L},{0x60L,0x60L,0x60L,0x60L}}, // p_1284->g_574
        0x22D5BB8D5465AE33L, // p_1284->g_652
        (void*)0, // p_1284->g_681
        {&p_1284->g_681,&p_1284->g_681,&p_1284->g_681,&p_1284->g_681,&p_1284->g_681}, // p_1284->g_680
        &p_1284->g_680[3], // p_1284->g_679
        &p_1284->g_527.f1, // p_1284->g_703
        65533UL, // p_1284->g_722
        (void*)0, // p_1284->g_768
        &p_1284->g_506, // p_1284->g_769
        {{{{0xF7692CD9L},{0xDAEC64D4L},{0xF7692CD9L},{0xF7692CD9L},{0xDAEC64D4L}}},{{{0xF7692CD9L},{0xDAEC64D4L},{0xF7692CD9L},{0xF7692CD9L},{0xDAEC64D4L}}}}, // p_1284->g_820
        (-9L), // p_1284->g_831
        &p_1284->g_519, // p_1284->g_890
        &p_1284->g_531, // p_1284->g_899
        {{{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114}},{{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114}},{{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114}},{{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114}},{{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114}},{{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114},{&p_1284->g_114,&p_1284->g_519,&p_1284->g_114,&p_1284->g_114}}}, // p_1284->g_907
        {{&p_1284->g_114},{&p_1284->g_114}}, // p_1284->g_910
        (void*)0, // p_1284->g_912
        (void*)0, // p_1284->g_913
        &p_1284->g_114, // p_1284->g_922
        &p_1284->g_519, // p_1284->g_927
        &p_1284->g_114, // p_1284->g_936
        {{{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L},{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L}},{{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L},{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L}},{{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L},{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L}},{{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L},{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L}},{{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L},{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L}},{{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L},{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L}},{{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L},{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L}},{{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L},{0x2D0A73D7DCC4DBF9L,0L,0x2F4457DF4717C1F1L,0x1F70A583F29459C4L,0x03A6DC5C4635EFE6L}}}, // p_1284->g_960
        7L, // p_1284->g_962
        (-5L), // p_1284->g_1093
        &p_1284->g_1093, // p_1284->g_1092
        &p_1284->g_1092, // p_1284->g_1091
        &p_1284->g_97, // p_1284->g_1161
        &p_1284->g_67, // p_1284->g_1168
        &p_1284->g_531, // p_1284->g_1200
        &p_1284->g_192.f2, // p_1284->g_1203
        &p_1284->g_67, // p_1284->g_1204
        &p_1284->g_91, // p_1284->g_1212
        (void*)0, // p_1284->g_1278
    };
    c_1285 = c_1286;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1284);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1284->g_2, "p_1284->g_2", print_hash_value);
    transparent_crc(p_1284->g_15, "p_1284->g_15", print_hash_value);
    transparent_crc(p_1284->g_39, "p_1284->g_39", print_hash_value);
    transparent_crc(p_1284->g_55, "p_1284->g_55", print_hash_value);
    transparent_crc(p_1284->g_61, "p_1284->g_61", print_hash_value);
    transparent_crc(p_1284->g_67.f0, "p_1284->g_67.f0", print_hash_value);
    transparent_crc(p_1284->g_67.f1, "p_1284->g_67.f1", print_hash_value);
    transparent_crc(p_1284->g_67.f2, "p_1284->g_67.f2", print_hash_value);
    transparent_crc(p_1284->g_67.f3, "p_1284->g_67.f3", print_hash_value);
    transparent_crc(p_1284->g_91, "p_1284->g_91", print_hash_value);
    transparent_crc(p_1284->g_97.f0, "p_1284->g_97.f0", print_hash_value);
    transparent_crc(p_1284->g_97.f1, "p_1284->g_97.f1", print_hash_value);
    transparent_crc(p_1284->g_97.f2, "p_1284->g_97.f2", print_hash_value);
    transparent_crc(p_1284->g_97.f3, "p_1284->g_97.f3", print_hash_value);
    transparent_crc(p_1284->g_107, "p_1284->g_107", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1284->g_110[i][j][k], "p_1284->g_110[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1284->g_125, "p_1284->g_125", print_hash_value);
    transparent_crc(p_1284->g_131, "p_1284->g_131", print_hash_value);
    transparent_crc(p_1284->g_134, "p_1284->g_134", print_hash_value);
    transparent_crc(p_1284->g_138, "p_1284->g_138", print_hash_value);
    transparent_crc(p_1284->g_146, "p_1284->g_146", print_hash_value);
    transparent_crc(p_1284->g_157, "p_1284->g_157", print_hash_value);
    transparent_crc(p_1284->g_162, "p_1284->g_162", print_hash_value);
    transparent_crc(p_1284->g_192.f0, "p_1284->g_192.f0", print_hash_value);
    transparent_crc(p_1284->g_194, "p_1284->g_194", print_hash_value);
    transparent_crc(p_1284->g_204, "p_1284->g_204", print_hash_value);
    transparent_crc(p_1284->g_218, "p_1284->g_218", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1284->g_219[i], "p_1284->g_219[i]", print_hash_value);

    }
    transparent_crc(p_1284->g_399, "p_1284->g_399", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1284->g_471[i], "p_1284->g_471[i]", print_hash_value);

    }
    transparent_crc(p_1284->g_473, "p_1284->g_473", print_hash_value);
    transparent_crc(p_1284->g_507.f0, "p_1284->g_507.f0", print_hash_value);
    transparent_crc(p_1284->g_510, "p_1284->g_510", print_hash_value);
    transparent_crc(p_1284->g_527.f0, "p_1284->g_527.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1284->g_559[i][j], "p_1284->g_559[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1284->g_574[i][j], "p_1284->g_574[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1284->g_652, "p_1284->g_652", print_hash_value);
    transparent_crc(p_1284->g_722, "p_1284->g_722", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1284->g_820[i][j][k].f0, "p_1284->g_820[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1284->g_831, "p_1284->g_831", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1284->g_960[i][j][k], "p_1284->g_960[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1284->g_962, "p_1284->g_962", print_hash_value);
    transparent_crc(p_1284->g_1093, "p_1284->g_1093", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
