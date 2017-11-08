// -g 96,46,2 -l 1,46,2
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


// Seed: 2578556978

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   volatile int32_t  f1;
   uint8_t  f2;
   volatile int64_t  f3;
};

struct S1 {
   int8_t  f0;
   volatile uint16_t  f1;
   int64_t  f2;
};

struct S2 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    volatile int32_t g_14;
    volatile int32_t g_15;
    int32_t g_16;
    int64_t g_19[9][1][8];
    int32_t g_20;
    int32_t g_49;
    uint8_t g_64;
    uint32_t g_73;
    int32_t g_86;
    int32_t *g_85;
    struct S0 g_91;
    struct S0 * volatile g_92;
    volatile struct S1 g_98[6];
    int16_t g_100;
    int16_t *g_102;
    int64_t g_109;
    int32_t *g_110[9][3][9];
    int64_t g_122;
    struct S0 *g_125;
    struct S1 g_167[8];
    volatile int32_t g_177;
    int16_t g_211[9];
    uint16_t g_215;
    struct S1 *g_233;
    struct S1 **g_232;
    uint16_t **g_247;
    uint16_t ***g_264;
    int32_t ** volatile g_276;
    uint64_t g_295;
    uint16_t g_353;
    volatile struct S1 g_363;
    int32_t ** volatile g_389;
    int64_t g_414;
    int32_t * volatile g_419;
    struct S1 g_421;
    int32_t ** volatile g_424[5];
    int32_t ** volatile g_425;
    uint64_t g_443;
    int32_t * volatile g_448;
    struct S1 g_461;
    volatile struct S1 g_468;
    volatile int8_t *g_469;
    volatile struct S1 g_476[7];
    uint32_t g_505;
    int32_t ** volatile g_543;
    int32_t ** volatile g_546;
    struct S1 g_556;
    int32_t g_558;
    int32_t g_560;
    uint32_t *g_561[3][1];
    int32_t ** volatile g_586[6];
    uint32_t g_672;
    volatile uint8_t g_673;
    struct S1 g_695;
    uint64_t g_700;
    volatile struct S1 g_721;
    struct S0 g_770[3];
    uint8_t g_773;
    uint32_t g_832;
    int32_t ** volatile g_875;
    struct S1 g_879;
    int32_t *g_948;
    int32_t **g_947;
    volatile struct S0 g_954;
    volatile uint16_t g_1048;
    int32_t ** volatile g_1066;
    int8_t g_1078;
    int32_t ** volatile g_1092[9][4][7];
    struct S1 ** volatile *g_1109[6][1];
    struct S1 ** volatile **g_1108;
    struct S1 ** volatile ** volatile *g_1107;
    int32_t ** volatile g_1138;
    struct S1 g_1147;
    int64_t g_1178[6];
    uint32_t *g_1200[10][10][2];
    uint32_t *g_1201[10][7][3];
    struct S1 g_1221;
    int32_t * volatile g_1286;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S2 * p_1287);
uint32_t  func_10(int32_t  p_11, struct S2 * p_1287);
int32_t * func_21(int32_t * p_22, int16_t  p_23, int32_t  p_24, int64_t  p_25, int32_t  p_26, struct S2 * p_1287);
int16_t  func_30(uint16_t  p_31, uint64_t  p_32, int32_t * p_33, struct S2 * p_1287);
uint8_t  func_34(int32_t  p_35, int32_t * p_36, struct S2 * p_1287);
int32_t  func_37(int16_t  p_38, int32_t * p_39, struct S2 * p_1287);
uint8_t  func_40(int16_t  p_41, int32_t * p_42, int64_t  p_43, struct S2 * p_1287);
int16_t  func_44(int32_t * p_45, uint32_t  p_46, struct S2 * p_1287);
struct S0  func_68(uint32_t  p_69, uint32_t  p_70, uint32_t  p_71, struct S2 * p_1287);
struct S0  func_76(int8_t  p_77, uint32_t  p_78, int16_t  p_79, struct S2 * p_1287);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1287->g_5 p_1287->g_4 p_1287->g_20 p_1287->g_461.f2 p_1287->g_211 p_1287->g_556.f2 p_1287->g_85 p_1287->g_86 p_1287->g_232 p_1287->g_233 p_1287->g_1178 p_1287->g_15 p_1287->g_91 p_1287->g_73 p_1287->g_98 p_1287->g_16 p_1287->g_109 p_1287->g_125 p_1287->g_1221 p_1287->g_102 p_1287->g_100 p_1287->g_721.f1 p_1287->g_947 p_1287->g_948 p_1287->g_558 p_1287->g_167.f0 p_1287->g_469 p_1287->g_468.f0 p_1287->g_695.f0 p_1287->g_167.f2 p_1287->g_476.f1 p_1287->g_49 p_1287->g_1147.f0 p_1287->g_421.f0 p_1287->g_468.f2 p_1287->g_832 p_1287->g_353 p_1287->g_389 p_1287->g_1286
 * writes: p_1287->g_5 p_1287->g_461.f2 p_1287->g_556.f2 p_1287->g_86 p_1287->g_1200 p_1287->g_1201 p_1287->g_85 p_1287->g_91 p_1287->g_102 p_1287->g_100 p_1287->g_109 p_1287->g_110 p_1287->g_167 p_1287->g_16 p_1287->g_695.f0 p_1287->g_295 p_1287->g_49 p_1287->g_1178
 */
int16_t  func_1(struct S2 * p_1287)
{ /* block id: 4 */
    uint8_t l_1188 = 0xCDL;
    uint32_t *l_1199 = &p_1287->g_91.f0;
    uint32_t **l_1198[5];
    uint8_t l_1202 = 1UL;
    int32_t l_1210 = 0x66A61827L;
    int32_t l_1211 = 0x18CC0EDBL;
    int32_t l_1212 = 0x65170EC0L;
    uint32_t l_1213 = 0UL;
    int8_t *l_1238 = &p_1287->g_695.f0;
    uint64_t *l_1268 = (void*)0;
    uint64_t **l_1267[9][8][3] = {{{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1198[i] = &l_1199;
    for (p_1287->g_5 = 0; (p_1287->g_5 > (-24)); p_1287->g_5 = safe_sub_func_uint64_t_u_u(p_1287->g_5, 9))
    { /* block id: 7 */
        if ((safe_div_func_uint32_t_u_u(func_10(p_1287->g_4, p_1287), l_1188)))
        { /* block id: 575 */
            for (p_1287->g_461.f2 = 8; (p_1287->g_461.f2 >= 0); p_1287->g_461.f2 -= 1)
            { /* block id: 578 */
                int i;
                if (p_1287->g_211[p_1287->g_461.f2])
                    break;
                if (p_1287->g_211[p_1287->g_461.f2])
                    break;
            }
        }
        else
        { /* block id: 582 */
            uint32_t l_1189 = 0x6D0EC635L;
            return l_1189;
        }
    }
    for (p_1287->g_556.f2 = 0; (p_1287->g_556.f2 <= 12); p_1287->g_556.f2 = safe_add_func_uint8_t_u_u(p_1287->g_556.f2, 9))
    { /* block id: 588 */
        (*p_1287->g_85) ^= (-9L);
    }
    (*p_1287->g_125) = func_68(((((safe_sub_func_int32_t_s_s(0x1BCD89F6L, l_1188)) , ((safe_lshift_func_int16_t_s_u(0L, 14)) , ((safe_div_func_uint32_t_u_u((((*p_1287->g_232) != (void*)0) && (((p_1287->g_1200[6][7][0] = &p_1287->g_73) != (p_1287->g_1201[0][3][0] = &p_1287->g_73)) == 0x6800L)), l_1188)) && p_1287->g_1178[2]))) <= l_1188) , l_1202), p_1287->g_4, l_1188, p_1287);
    if (((void*)0 != &p_1287->g_1201[0][3][0]))
    { /* block id: 594 */
        int8_t l_1205[6] = {0x74L,8L,0x74L,0x74L,8L,0x74L};
        int32_t l_1209[3][10][5] = {{{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)}},{{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)}},{{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)},{(-6L),0x76484CE7L,0x7607903AL,(-3L),(-10L)}}};
        uint8_t *l_1248 = &p_1287->g_64;
        uint8_t **l_1247 = &l_1248;
        int i, j, k;
        if ((safe_mod_func_int64_t_s_s(0x42AF9C272B06FB79L, (l_1205[2] || 0x5889L))))
        { /* block id: 595 */
            int32_t *l_1206 = (void*)0;
            int32_t *l_1207 = &p_1287->g_20;
            int32_t *l_1208[9][1] = {{&p_1287->g_49},{&p_1287->g_49},{&p_1287->g_49},{&p_1287->g_49},{&p_1287->g_49},{&p_1287->g_49},{&p_1287->g_49},{&p_1287->g_49},{&p_1287->g_49}};
            uint32_t l_1216 = 0x967EB8B1L;
            int i, j;
            --l_1213;
            --l_1216;
            for (l_1202 = 0; (l_1202 != 46); l_1202 = safe_add_func_uint32_t_u_u(l_1202, 6))
            { /* block id: 600 */
                (**p_1287->g_232) = p_1287->g_1221;
            }
        }
        else
        { /* block id: 603 */
            uint8_t *l_1225 = &p_1287->g_770[0].f2;
            uint8_t **l_1224 = &l_1225;
            int32_t l_1245 = 1L;
            int32_t l_1246[7];
            uint32_t l_1249 = 4294967289UL;
            int i;
            for (i = 0; i < 7; i++)
                l_1246[i] = 0x540CB9D7L;
            l_1249 &= (4294967287UL & (l_1224 == (((((*p_1287->g_102) = (l_1205[2] == (((*p_1287->g_85) = (((safe_lshift_func_int16_t_s_u((-1L), 11)) ^ (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((*p_1287->g_102) == (&p_1287->g_1078 != l_1238)), (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((p_1287->g_721.f1 <= (((((**p_1287->g_947) , 0L) || 0x3044L) && l_1202) > l_1188)) , p_1287->g_167[6].f0), p_1287->g_1178[1])), l_1245)) , (*p_1287->g_469)), l_1246[6])))), 0x16L)), 0x5BA5L)), l_1209[0][3][2]))) && (-1L))) == 0x3140C5FCL))) | l_1209[0][9][2]) >= l_1188) , l_1247)));
        }
    }
    else
    { /* block id: 608 */
        uint32_t l_1266[7][10][3] = {{{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL}},{{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL}},{{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL}},{{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL}},{{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL}},{{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL}},{{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL},{0x6BD8AE11L,4294967293UL,0UL}}};
        int32_t l_1269 = 1L;
        int32_t *l_1274 = &p_1287->g_49;
        uint16_t *l_1275 = (void*)0;
        int64_t *l_1284 = &p_1287->g_1178[2];
        int64_t *l_1285[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1285[i] = (void*)0;
        for (p_1287->g_695.f0 = 19; (p_1287->g_695.f0 > 23); ++p_1287->g_695.f0)
        { /* block id: 611 */
            int64_t l_1260[3][9] = {{3L,3L,0x2A9C8AF651E25AD6L,0x005A39D9BA7A9D50L,1L,(-6L),0x3AED3CACB6D4D0B2L,0x033CF93101D7E6D7L,0x3AED3CACB6D4D0B2L},{3L,3L,0x2A9C8AF651E25AD6L,0x005A39D9BA7A9D50L,1L,(-6L),0x3AED3CACB6D4D0B2L,0x033CF93101D7E6D7L,0x3AED3CACB6D4D0B2L},{3L,3L,0x2A9C8AF651E25AD6L,0x005A39D9BA7A9D50L,1L,(-6L),0x3AED3CACB6D4D0B2L,0x033CF93101D7E6D7L,0x3AED3CACB6D4D0B2L}};
            uint64_t *l_1261 = &p_1287->g_295;
            int i, j;
            (*p_1287->g_85) = (((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_1260[0][1], ((((l_1211 & ((*l_1261) = l_1260[1][7])) | ((l_1260[0][1] > (safe_lshift_func_uint8_t_u_s(l_1260[1][1], (*p_1287->g_469)))) >= (l_1188 != 0x3AL))) , ((safe_mul_func_uint8_t_u_u((p_1287->g_167[6].f2 && l_1266[0][8][0]), (*p_1287->g_469))) , l_1267[8][6][2])) != (void*)0))), 0x09L)) == 6UL), l_1210)) , 0x43L), 1)) , p_1287->g_91.f0) == l_1269);
        }
        (*p_1287->g_1286) = (((safe_sub_func_int64_t_s_s((((~((0x1EB5L <= ((((p_1287->g_476[1].f1 , (safe_div_func_uint16_t_u_u(((~((*l_1274) &= ((*p_1287->g_85) = (l_1269 <= l_1266[0][8][0])))) | ((((l_1212 = l_1213) | ((safe_lshift_func_int8_t_s_u((((safe_add_func_uint16_t_u_u(((((((p_1287->g_1147.f0 || (l_1211 |= ((safe_rshift_func_uint8_t_u_s(p_1287->g_421.f0, 6)) < ((*l_1284) = ((((safe_lshift_func_int16_t_s_s((-2L), 0)) >= (l_1210 , 7UL)) >= (-7L)) || 0x8D9BL))))) != 0x4AL) | 65535UL) > 0x6E3A6B63L) & l_1202) > 2L), l_1188)) & p_1287->g_468.f2) <= p_1287->g_832), p_1287->g_695.f0)) > p_1287->g_353)) > l_1210) <= 0xDDC5L)), l_1266[3][0][0]))) , 0L) > 18446744073709551613UL) , (*p_1287->g_102))) != l_1269)) , (*l_1274)) || 0x67L), l_1210)) || p_1287->g_1221.f1) , (**p_1287->g_389));
    }
    return (*p_1287->g_102);
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_20
 * writes:
 */
uint32_t  func_10(int32_t  p_11, struct S2 * p_1287)
{ /* block id: 8 */
    uint8_t l_27 = 251UL;
    int32_t *l_47 = &p_1287->g_20;
    uint16_t l_554 = 0xEACEL;
    struct S1 ***l_562 = &p_1287->g_232;
    uint8_t *l_578 = (void*)0;
    uint8_t **l_577 = &l_578;
    uint16_t l_583 = 0x81F4L;
    int32_t l_600 = (-1L);
    int32_t l_609 = 0x582A87D2L;
    int32_t l_612 = (-1L);
    int32_t l_617[3];
    uint16_t *l_640[8];
    uint16_t **l_639 = &l_640[6];
    int32_t *l_656 = &p_1287->g_558;
    int32_t l_738 = (-9L);
    uint64_t *l_957 = &p_1287->g_443;
    uint64_t *l_959 = &p_1287->g_443;
    uint64_t l_1025 = 5UL;
    int32_t l_1030[7][2] = {{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L}};
    uint64_t l_1068 = 7UL;
    int8_t l_1110[4][6] = {{(-1L),0x58L,0x58L,(-1L),(-1L),0x58L},{(-1L),0x58L,0x58L,(-1L),(-1L),0x58L},{(-1L),0x58L,0x58L,(-1L),(-1L),0x58L},{(-1L),0x58L,0x58L,(-1L),(-1L),0x58L}};
    uint32_t l_1165 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_617[i] = 0x119702D1L;
    for (i = 0; i < 8; i++)
        l_640[i] = &l_554;
    for (p_11 = 0; (p_11 != 26); p_11++)
    { /* block id: 11 */
        int32_t *l_386 = &p_1287->g_16;
        int32_t **l_544 = &l_47;
        int32_t **l_545 = (void*)0;
        uint8_t *l_549 = &p_1287->g_91.f2;
        struct S1 *l_555 = &p_1287->g_556;
        int32_t *l_557 = &p_1287->g_558;
        int32_t *l_559[5];
        int i;
        for (i = 0; i < 5; i++)
            l_559[i] = &p_1287->g_560;
        (1 + 1);
    }
    return (*l_47);
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_211 p_1287->g_476 p_1287->g_19 p_1287->g_389 p_1287->g_85 p_1287->g_98.f2 p_1287->g_98.f0 p_1287->g_295 p_1287->g_461.f0 p_1287->g_233 p_1287->g_167 p_1287->g_232 p_1287->g_98.f1 p_1287->g_505 p_1287->g_102 p_1287->g_100 p_1287->g_49
 * writes: p_1287->g_20 p_1287->g_91.f2 p_1287->g_109 p_1287->g_215 p_1287->g_295 p_1287->g_461.f0 p_1287->g_167 p_1287->g_233 p_1287->g_505 p_1287->g_468.f0 p_1287->g_91.f0 p_1287->g_73 p_1287->g_19 p_1287->g_86
 */
int32_t * func_21(int32_t * p_22, int16_t  p_23, int32_t  p_24, int64_t  p_25, int32_t  p_26, struct S2 * p_1287)
{ /* block id: 227 */
    uint16_t ****l_474 = &p_1287->g_264;
    uint8_t *l_475[10];
    int32_t l_477[4][4][10] = {{{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L}},{{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L}},{{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L}},{{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L},{8L,8L,0x65FB6B7CL,4L,0x7302F8A9L,0L,0x436E4D86L,0x78CD19D0L,0x436E4D86L,0L}}};
    uint32_t l_495 = 0xDD63A967L;
    int8_t l_500 = 0x09L;
    uint64_t *l_517 = &p_1287->g_295;
    uint16_t *l_520 = &p_1287->g_353;
    int32_t *l_528 = &l_477[3][2][5];
    int32_t *l_529 = &p_1287->g_86;
    int32_t *l_530 = (void*)0;
    int32_t *l_531 = &p_1287->g_86;
    int32_t *l_532 = &p_1287->g_20;
    int32_t *l_533 = &p_1287->g_20;
    int32_t *l_534 = (void*)0;
    int32_t *l_535 = &l_477[3][2][5];
    int32_t *l_536 = (void*)0;
    int32_t *l_537 = (void*)0;
    int32_t *l_538[6][4] = {{&p_1287->g_20,&p_1287->g_16,&p_1287->g_20,&p_1287->g_20},{&p_1287->g_20,&p_1287->g_16,&p_1287->g_20,&p_1287->g_20},{&p_1287->g_20,&p_1287->g_16,&p_1287->g_20,&p_1287->g_20},{&p_1287->g_20,&p_1287->g_16,&p_1287->g_20,&p_1287->g_20},{&p_1287->g_20,&p_1287->g_16,&p_1287->g_20,&p_1287->g_20},{&p_1287->g_20,&p_1287->g_16,&p_1287->g_20,&p_1287->g_20}};
    uint8_t l_539 = 0xF7L;
    int32_t *l_542 = &l_477[0][1][3];
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_475[i] = &p_1287->g_91.f2;
    (*p_22) = (p_1287->g_211[6] && 0x38E8114FDC36ADCAL);
    if (((p_1287->g_109 = (0x1CEF4ADCL < (safe_mul_func_uint8_t_u_u(250UL, ((&p_1287->g_264 == l_474) > (p_1287->g_91.f2 = 0UL)))))) == (((((&l_475[4] != (p_1287->g_476[1] , &l_475[0])) >= (-1L)) != 1L) == p_1287->g_19[8][0][4]) || l_477[3][2][5])))
    { /* block id: 231 */
        return (*p_1287->g_389);
    }
    else
    { /* block id: 233 */
        uint16_t *l_484 = &p_1287->g_215;
        uint64_t *l_485 = &p_1287->g_295;
        int32_t l_490 = 3L;
        int32_t l_491 = 0x07AB8882L;
        int32_t l_492 = (-1L);
        int32_t l_493 = 0x3752FDCDL;
        int32_t l_494 = (-1L);
        struct S1 *l_503 = &p_1287->g_421;
        (*p_22) = (safe_div_func_int64_t_s_s((-1L), (l_477[1][0][5] , ((safe_lshift_func_uint16_t_u_u(((*l_484) = (safe_mod_func_uint64_t_u_u(p_1287->g_98[4].f2, 0xFA12E5F008A195C2L))), 11)) , ((*l_485) ^= p_1287->g_98[4].f0)))));
        for (p_1287->g_461.f0 = 12; (p_1287->g_461.f0 <= (-20)); p_1287->g_461.f0--)
        { /* block id: 239 */
            int32_t *l_488 = (void*)0;
            int32_t *l_489[8] = {&p_1287->g_5,&p_1287->g_86,&p_1287->g_5,&p_1287->g_5,&p_1287->g_86,&p_1287->g_5,&p_1287->g_5,&p_1287->g_86};
            int i;
            ++l_495;
        }
        (**p_1287->g_232) = (*p_1287->g_233);
        if ((((safe_sub_func_int8_t_s_s(0x3BL, 1L)) < ((p_23 <= l_491) == 0x4D9EL)) , l_500))
        { /* block id: 243 */
            struct S1 *l_501 = &p_1287->g_167[7];
            struct S1 **l_502 = &l_501;
            uint32_t *l_504[9][5] = {{&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505},{&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505},{&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505},{&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505},{&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505},{&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505},{&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505},{&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505},{&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505,&p_1287->g_505}};
            uint64_t *l_516 = &p_1287->g_295;
            int i, j;
            l_503 = ((*l_502) = ((*p_1287->g_232) = l_501));
            (*p_22) = (1L ^ ((((*l_503) , (p_1287->g_505 ^= p_1287->g_98[4].f1)) , ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((*p_1287->g_102) & ((l_517 = l_516) != &p_1287->g_295)), ((0x25CFL || 0x00B1L) <= ((void*)0 == l_520)))), p_25)), p_1287->g_476[1].f0)), p_24)), l_477[3][2][5])) || p_26)) > p_1287->g_49));
        }
        else
        { /* block id: 250 */
            uint32_t l_523 = 4294967293UL;
            int32_t *l_526 = &l_491;
            for (p_1287->g_505 = (-21); (p_1287->g_505 >= 50); p_1287->g_505 = safe_add_func_int64_t_s_s(p_1287->g_505, 1))
            { /* block id: 253 */
                int32_t *l_527 = (void*)0;
                --l_523;
                return l_527;
            }
            for (p_1287->g_468.f0 = 0; p_1287->g_468.f0 < 9; p_1287->g_468.f0 += 1)
            {
                for (p_1287->g_91.f0 = 0; p_1287->g_91.f0 < 1; p_1287->g_91.f0 += 1)
                {
                    for (p_1287->g_73 = 0; p_1287->g_73 < 8; p_1287->g_73 += 1)
                    {
                        p_1287->g_19[p_1287->g_468.f0][p_1287->g_91.f0][p_1287->g_73] = 1L;
                    }
                }
            }
        }
    }
    l_539++;
    return (*p_1287->g_389);
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_233 p_1287->g_167 p_1287->g_421.f0 p_1287->g_215 p_1287->g_49 p_1287->g_448 p_1287->g_86 p_1287->g_91 p_1287->g_461 p_1287->g_421.f2 p_1287->g_19 p_1287->g_468 p_1287->g_102 p_1287->g_100 p_1287->g_469
 * writes: p_1287->g_421 p_1287->g_110 p_1287->g_215 p_1287->g_443 p_1287->g_295 p_1287->g_167.f0 p_1287->g_86 p_1287->g_122
 */
int16_t  func_30(uint16_t  p_31, uint64_t  p_32, int32_t * p_33, struct S2 * p_1287)
{ /* block id: 209 */
    uint16_t l_431 = 65535UL;
    int32_t l_434[10] = {3L,3L,3L,3L,3L,3L,3L,3L,3L,3L};
    uint16_t *l_435 = (void*)0;
    uint16_t *l_436 = (void*)0;
    uint16_t *l_437 = &p_1287->g_215;
    struct S0 *l_440 = &p_1287->g_91;
    uint64_t *l_441 = (void*)0;
    uint64_t *l_442 = &p_1287->g_443;
    int8_t *l_446 = &p_1287->g_167[6].f0;
    struct S1 ****l_447 = (void*)0;
    int64_t *l_470 = &p_1287->g_122;
    uint32_t l_471 = 9UL;
    int i;
    p_1287->g_421 = (*p_1287->g_233);
    for (p_1287->g_421.f0 = 4; (p_1287->g_421.f0 >= 0); p_1287->g_421.f0 -= 1)
    { /* block id: 213 */
        int32_t *l_422 = &p_1287->g_16;
        int32_t **l_423 = &p_1287->g_110[0][0][5];
        int32_t **l_426 = &l_422;
        (*l_426) = ((*l_423) = l_422);
        return p_31;
    }
    (*p_1287->g_448) ^= ((safe_rshift_func_uint8_t_u_s(255UL, 0)) >= (p_32 <= ((((safe_rshift_func_uint8_t_u_u(((l_431 ^ ((((*l_442) = (safe_mul_func_uint16_t_u_u((++(*l_437)), (((void*)0 == &p_1287->g_64) != ((void*)0 != l_440))))) , ((((((((*l_446) = ((safe_sub_func_uint64_t_u_u((p_1287->g_295 = ((p_1287->g_167[6].f0 | (1UL == l_434[1])) && p_31)), p_31)) == 0x5E5C0D26L)) & 0x55L) && (-4L)) | l_431) && p_1287->g_49) , l_447) != l_447)) >= 65528UL)) >= 0x293D6469528214A4L), 6)) ^ 0x5E010275A46B2132L) , l_434[1]) < 18446744073709551615UL)));
    (*p_1287->g_448) = (safe_mod_func_uint64_t_u_u((((((((safe_mod_func_int64_t_s_s(((*l_470) = (2L == ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((((((((247UL | (l_446 == ((*l_440) , (p_1287->g_461 , (((safe_lshift_func_int8_t_s_u((((*l_437) = ((((safe_add_func_uint64_t_u_u(p_1287->g_421.f2, (((safe_div_func_int16_t_s_s((((((p_1287->g_19[0][0][6] <= ((l_431 , ((&l_440 == &l_440) & 4294967286UL)) && p_32)) , p_32) > p_31) , p_1287->g_468) , (*p_1287->g_102)), 8UL)) & (-1L)) ^ l_431))) , l_431) && 1L) ^ p_1287->g_91.f0)) <= 1L), p_1287->g_461.f2)) | p_1287->g_91.f2) , p_1287->g_469))))) ^ p_32) | 0x0BL) && l_431) > l_434[2]) , l_434[1]) | p_32) >= l_434[5]), 1)), 0xB87BL)), p_31)), p_31)) <= (-1L)))), 0x038F151739E04EB5L)) < p_31) && l_471) ^ l_434[1]) & 6UL) <= 1UL) | l_471), 0x9069F28AF75B2A63L));
    return (*p_1287->g_102);
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_85 p_1287->g_16 p_1287->g_86 p_1287->g_419 p_1287->g_20
 * writes: p_1287->g_20
 */
uint8_t  func_34(int32_t  p_35, int32_t * p_36, struct S2 * p_1287)
{ /* block id: 206 */
    uint8_t l_420 = 0x9FL;
    (*p_1287->g_419) |= (*p_1287->g_85);
    return l_420;
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_16 p_1287->g_389 p_1287->g_363.f1 p_1287->g_215 p_1287->g_91.f0 p_1287->g_232 p_1287->g_233 p_1287->g_102 p_1287->g_100 p_1287->g_49 p_1287->g_91.f2 p_1287->g_167.f2 p_1287->g_414 p_1287->g_211 p_1287->g_167.f0 p_1287->g_64 p_1287->g_247 p_1287->g_276 p_1287->g_85
 * writes: p_1287->g_85 p_1287->g_215 p_1287->g_49 p_1287->g_167.f0 p_1287->g_414
 */
int32_t  func_37(int16_t  p_38, int32_t * p_39, struct S2 * p_1287)
{ /* block id: 192 */
    int16_t *l_394 = &p_1287->g_211[6];
    int32_t l_401 = 0x524CBF0AL;
    int32_t l_404 = (-1L);
    int32_t l_405 = 0x469C7A6AL;
    int32_t l_406 = 0x114B0F63L;
    struct S1 **l_410 = &p_1287->g_233;
    uint16_t *l_416 = &p_1287->g_353;
    uint16_t **l_415 = &l_416;
    if ((*p_39))
    { /* block id: 193 */
        int32_t *l_387 = &p_1287->g_49;
        int32_t **l_388 = (void*)0;
        uint16_t *l_407 = &p_1287->g_215;
        int8_t *l_413 = &p_1287->g_167[6].f0;
        int32_t *l_417[3][7][3] = {{{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5}},{{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5}},{{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_5}}};
        int32_t **l_418 = &p_1287->g_85;
        int i, j, k;
        (*p_1287->g_389) = l_387;
        l_405 &= (safe_mod_func_uint64_t_u_u(p_1287->g_363.f1, ((safe_sub_func_int64_t_s_s((-9L), ((((void*)0 == l_394) , ((safe_sub_func_uint8_t_u_u((!((safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((((((l_401 > (((safe_lshift_func_uint16_t_u_s(((*l_407)--), 12)) , l_410) == ((((p_1287->g_414 ^= (((*l_413) = (safe_sub_func_int32_t_s_s((7L >= (l_406 = ((*l_387) ^= ((((p_1287->g_91.f0 || ((p_38 , (void*)0) != (*p_1287->g_232))) > p_38) < (*p_1287->g_102)) , 0x2C9F851DL)))), p_1287->g_91.f2))) && p_1287->g_167[6].f2)) >= p_38) | 0xA142L) , (void*)0))) ^ l_401) && (*p_39)) != p_1287->g_211[4]) , p_1287->g_167[6].f0) < p_1287->g_64), 0x2804B8D6D6C96DC3L)), l_404)) , p_38)), l_404)) , l_415)) != p_1287->g_247))) || p_38)));
        (*l_418) = p_39;
    }
    else
    { /* block id: 202 */
        return (*p_39);
    }
    return (**p_1287->g_276);
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_276 p_1287->g_85 p_1287->g_20 p_1287->g_91.f2 p_1287->g_16 p_1287->g_86 p_1287->g_353 p_1287->g_211 p_1287->g_102 p_1287->g_100 p_1287->g_98.f2 p_1287->g_363 p_1287->g_233 p_1287->g_91.f3 p_1287->g_91.f0 p_1287->g_14 p_1287->g_5
 * writes: p_1287->g_85 p_1287->g_20 p_1287->g_91.f2 p_1287->g_167 p_1287->g_91.f0 p_1287->g_73 p_1287->g_100
 */
uint8_t  func_40(int16_t  p_41, int32_t * p_42, int64_t  p_43, struct S2 * p_1287)
{ /* block id: 172 */
    int32_t **l_325 = &p_1287->g_85;
    int64_t *l_326 = &p_1287->g_109;
    int32_t l_358 = 0x14DADDD4L;
    int32_t l_359[10][10] = {{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L},{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L},{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L},{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L},{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L},{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L},{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L},{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L},{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L},{0x109EE718L,(-7L),0x1D028D91L,0x0BD67B30L,0x6A7C9879L,0x109EE718L,0x0BD67B30L,0x01F03B73L,0x0BD67B30L,0x109EE718L}};
    uint8_t l_360 = 0x7CL;
    struct S0 **l_383 = &p_1287->g_125;
    int i, j;
    (*l_325) = (*p_1287->g_276);
    if (((*p_42) &= (l_326 == &p_43)))
    { /* block id: 175 */
        int16_t **l_331 = &p_1287->g_102;
        int32_t l_354 = 0x30531498L;
        struct S1 **l_356 = &p_1287->g_233;
        int32_t *l_357[7][5] = {{&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86},{&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86,&p_1287->g_86}};
        int i, j;
        for (p_1287->g_91.f2 = (-26); (p_1287->g_91.f2 <= 32); p_1287->g_91.f2++)
        { /* block id: 178 */
            uint8_t l_342 = 252UL;
            int32_t l_355 = 1L;
            l_354 = ((((safe_div_func_uint16_t_u_u(((((0x29L >= (~((((((((**l_325) , l_331) == &p_1287->g_102) && ((safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(p_43, (((safe_mul_func_uint8_t_u_u((((((*p_42) ^= (((void*)0 != &p_1287->g_233) == ((safe_mul_func_uint8_t_u_u((!(safe_lshift_func_int8_t_s_u(l_342, (safe_div_func_uint64_t_u_u(((((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(0x3EL, p_43)), p_1287->g_353)), 0)) != p_1287->g_211[6]), p_43)) <= p_43) > l_354) <= l_354), 18446744073709551615UL))))), 0UL)) >= (*p_1287->g_102)))) , 0x1E75A493L) > 0L) == l_355), l_342)) | 0x39F3L) != p_43))), 0xA99D0033823C9C4AL)) , p_41)) & (*p_1287->g_102)) , l_356) != l_356) > l_354))) | (*p_1287->g_102)) || p_41) | 0x1CBCE19B71EB6CD4L), p_43)) | (**l_325)) && p_1287->g_98[4].f2) >= p_43);
        }
        ++l_360;
        (**l_356) = p_1287->g_363;
    }
    else
    { /* block id: 184 */
        uint32_t *l_364 = &p_1287->g_73;
        int8_t *l_377 = &p_1287->g_167[6].f0;
        struct S0 **l_384[9] = {&p_1287->g_125,&p_1287->g_125,&p_1287->g_125,&p_1287->g_125,&p_1287->g_125,&p_1287->g_125,&p_1287->g_125,&p_1287->g_125,&p_1287->g_125};
        int8_t l_385 = 1L;
        int i;
        l_385 &= ((p_1287->g_91.f3 , (((*l_364) = ((p_1287->g_91.f0 |= p_1287->g_211[6]) < (*p_42))) , ((*p_1287->g_102) = ((safe_sub_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((**l_325), ((safe_add_func_uint32_t_u_u(4294967295UL, 0xF6020C1BL)) < (**l_325)))) , ((*l_377) = 0x2AL)) > (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int64_t_s((l_383 == l_384[6]))), p_1287->g_14)), p_1287->g_91.f2))), p_41)) != 0x1FL), (**l_325))), p_1287->g_5)) | 0x01D3L), 0UL)) <= 1UL)))) & 0x3110L);
    }
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_20 p_1287->g_49 p_1287->g_64 p_1287->g_19 p_1287->g_15 p_1287->g_73 p_1287->g_5 p_1287->g_91 p_1287->g_98 p_1287->g_86 p_1287->g_16 p_1287->g_109 p_1287->g_122 p_1287->g_4 p_1287->g_102 p_1287->g_100 p_1287->g_167 p_1287->g_232 p_1287->g_247 p_1287->g_85 p_1287->g_276 p_1287->g_295 p_1287->g_211 p_1287->g_215 p_1287->g_125
 * writes: p_1287->g_20 p_1287->g_49 p_1287->g_64 p_1287->g_73 p_1287->g_85 p_1287->g_86 p_1287->g_91 p_1287->g_102 p_1287->g_100 p_1287->g_109 p_1287->g_110 p_1287->g_122 p_1287->g_125 p_1287->g_4 p_1287->g_167 p_1287->g_211 p_1287->g_247 p_1287->g_264 p_1287->g_295 p_1287->g_233
 */
int16_t  func_44(int32_t * p_45, uint32_t  p_46, struct S2 * p_1287)
{ /* block id: 21 */
    int64_t l_53 = 1L;
    int32_t l_54 = 0x513BCE86L;
    int32_t l_55 = 0x6BA43638L;
    int32_t l_56 = 0x7D0E68ACL;
    int64_t *l_156 = &p_1287->g_122;
    int32_t l_174 = 5L;
    int64_t l_176 = 1L;
    int32_t l_180 = 3L;
    int32_t l_181 = 0L;
    int32_t l_182 = 0x09D17400L;
    int32_t l_183 = (-1L);
    int32_t l_185 = 1L;
    int32_t l_187[4][4][9] = {{{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L}},{{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L}},{{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L}},{{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L},{0L,1L,1L,0x48EE47FBL,0x0D5DC915L,0x04B4AF36L,1L,0x0D5DC915L,0L}}};
    int32_t l_229 = 0x382B5C7CL;
    struct S0 *l_230 = &p_1287->g_91;
    uint16_t *l_279[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t l_299 = 0x6DL;
    uint16_t l_318 = 0xF349L;
    int i, j, k;
    for (p_1287->g_20 = 0; (p_1287->g_20 <= 0); p_1287->g_20 += 1)
    { /* block id: 24 */
        int32_t *l_50 = &p_1287->g_49;
        int32_t *l_51 = &p_1287->g_49;
        int32_t *l_52[9][9][1] = {{{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20}},{{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20}},{{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20}},{{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20}},{{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20}},{{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20}},{{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20}},{{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20}},{{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20},{&p_1287->g_20}}};
        uint32_t l_57 = 4294967295UL;
        int16_t *l_62 = (void*)0;
        int16_t *l_63[7];
        uint32_t *l_72[7][7][5] = {{{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0}},{{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0}},{{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0}},{{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0}},{{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0}},{{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0}},{{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0},{&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,&p_1287->g_73,(void*)0}}};
        uint32_t l_116 = 4294967287UL;
        int16_t **l_119 = &l_62;
        int64_t *l_120 = &l_53;
        int64_t *l_121[2];
        struct S0 *l_126 = &p_1287->g_91;
        int16_t **l_136[2][3] = {{&l_63[3],&l_63[3],&l_63[3]},{&l_63[3],&l_63[3],&l_63[3]}};
        struct S1 *l_168 = &p_1287->g_167[4];
        int16_t l_195 = 0x6861L;
        int16_t l_196 = 0L;
        uint8_t *l_212 = &p_1287->g_91.f2;
        struct S1 **l_236[5] = {&l_168,&l_168,&l_168,&l_168,&l_168};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_63[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_121[i] = &p_1287->g_122;
        ++l_57;
        l_116 |= (safe_mul_func_int8_t_s_s(((((*l_51) |= 0x20C815F7L) == (~((p_1287->g_64 &= 0x608CL) & (65528UL > ((safe_mul_func_uint8_t_u_u(p_1287->g_19[8][0][7], (((p_1287->g_15 , (safe_unary_minus_func_uint8_t_u((((func_68(p_46, (p_1287->g_73++), p_1287->g_19[6][0][7], p_1287) , ((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((p_1287->g_98[4].f0 | l_53), 5)), p_46)) < p_46)) && (*p_45)) , 4UL)))) && p_1287->g_109) , p_1287->g_73))) <= l_53))))) != 0UL), 2L));
        if ((p_46 , (((safe_add_func_uint8_t_u_u((((*l_119) = &p_1287->g_100) != (void*)0), p_1287->g_98[4].f0)) > (((0xE818B1E2C77FF3C2L != (l_54 |= (p_1287->g_122 = (0x675D9F9298E093FEL >= (p_1287->g_109 |= (((p_46 < (((*l_120) = (-1L)) < ((void*)0 == &p_1287->g_109))) , 0L) || p_46)))))) | p_46) && 0x6BA9F1CB05E35C8CL)) ^ 0xF46AD5B22CD46132L)))
        { /* block id: 52 */
            struct S0 *l_124 = &p_1287->g_91;
            struct S0 **l_123[6][2][6] = {{{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124}},{{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124}},{{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124}},{{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124}},{{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124}},{{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124}}};
            int32_t **l_131 = &p_1287->g_110[0][0][5];
            volatile int32_t *l_144[4];
            volatile int32_t **l_143 = &l_144[1];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_144[i] = &p_1287->g_91.f1;
            (*l_51) = ((((p_1287->g_125 = &p_1287->g_91) != l_126) & (safe_lshift_func_uint8_t_u_s(((&p_1287->g_20 == ((*l_131) = &p_1287->g_49)) && ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((+(0x0A8829C2L != (l_136[0][0] != (void*)0))), 5)), (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(3UL, (safe_mul_func_int8_t_s_s(p_46, (-7L))))), p_1287->g_91.f1)))) != p_46)), p_1287->g_122))) && p_46);
            (*l_143) = &p_1287->g_4;
            for (l_53 = 0; (l_53 >= 0); l_53 -= 1)
            { /* block id: 59 */
                int64_t *l_155 = &p_1287->g_122;
                uint8_t *l_161 = &p_1287->g_64;
                (**l_143) = (1L < (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((l_155 == l_156), (p_1287->g_98[4].f1 , ((((safe_sub_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u(((p_46 || ((0UL < 0L) <= (((*l_161)--) <= p_46))) , p_1287->g_4), p_1287->g_109)) || 0UL) >= 5UL) || p_46), p_46)) & p_1287->g_16) ^ l_56) >= p_46)))) >= l_55), p_1287->g_86)) && 4294967291UL), 10)), p_1287->g_20)), 248UL)));
                for (l_57 = 0; (l_57 <= 0); l_57 += 1)
                { /* block id: 64 */
                    uint16_t l_166[7][6] = {{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}};
                    int i, j, k;
                    l_166[0][4] &= (p_1287->g_98[4] , ((*l_51) ^= (safe_mul_func_int8_t_s_s(p_1287->g_19[(p_1287->g_20 + 4)][l_53][(l_53 + 1)], (((void*)0 != &p_1287->g_91) , p_1287->g_19[(p_1287->g_20 + 4)][l_53][(l_53 + 1)])))));
                }
            }
        }
        else
        { /* block id: 69 */
            return (*p_1287->g_102);
        }
        (*l_168) = p_1287->g_167[6];
        for (p_1287->g_122 = 0; (p_1287->g_122 >= 0); p_1287->g_122 -= 1)
        { /* block id: 75 */
            int32_t l_170[5];
            int8_t l_188[3][6] = {{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}};
            uint8_t *l_200[4][10] = {{&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64},{&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64},{&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64},{&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64,&p_1287->g_64}};
            uint16_t l_228 = 65527UL;
            uint16_t ***l_263 = &p_1287->g_247;
            struct S0 *l_316 = &p_1287->g_91;
            uint64_t l_320 = 0xEDA2D746597E8113L;
            int i, j;
            for (i = 0; i < 5; i++)
                l_170[i] = 0x1E87EC68L;
            for (p_1287->g_73 = 0; (p_1287->g_73 <= 0); p_1287->g_73 += 1)
            { /* block id: 78 */
                int64_t l_169 = 1L;
                int32_t l_171 = 0x4F71ED02L;
                int32_t l_172 = 0x7AF087EBL;
                int32_t l_173 = 4L;
                int32_t l_175 = 0x29747AEAL;
                int32_t l_178 = 0x3ABCD41BL;
                int32_t l_179 = 0x50FDD930L;
                int32_t l_184 = 0x70176F25L;
                int32_t l_186 = 0x040E6F50L;
                int32_t l_189 = 1L;
                int32_t l_190 = 1L;
                int32_t l_191 = 0x05DB9D89L;
                int32_t l_192 = 0x629B2AEEL;
                int32_t l_193 = 0x3DB6FB7CL;
                int32_t l_194[6];
                uint16_t l_197 = 1UL;
                int i;
                for (i = 0; i < 6; i++)
                    l_194[i] = (-3L);
                if ((*p_45))
                    break;
                l_197++;
                for (p_1287->g_100 = 1; (p_1287->g_100 >= 0); p_1287->g_100 -= 1)
                { /* block id: 83 */
                    uint8_t **l_201[4];
                    int32_t l_202 = 0x4A3F60B6L;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_201[i] = &l_200[0][0];
                    l_184 &= ((*l_50) |= (((p_1287->g_98[4] , (l_200[0][5] = l_200[0][0])) != (void*)0) | l_202));
                    return p_46;
                }
            }
            for (l_57 = 0; (l_57 <= 0); l_57 += 1)
            { /* block id: 92 */
                int32_t l_213[10] = {0x183F3DA2L,0x183F3DA2L,0x183F3DA2L,0x183F3DA2L,0x183F3DA2L,0x183F3DA2L,0x183F3DA2L,0x183F3DA2L,0x183F3DA2L,0x183F3DA2L};
                uint16_t *l_214[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_227 = 0x2EED1760L;
                struct S0 *l_231[3][4] = {{&p_1287->g_91,&p_1287->g_91,&p_1287->g_91,&p_1287->g_91},{&p_1287->g_91,&p_1287->g_91,&p_1287->g_91,&p_1287->g_91},{&p_1287->g_91,&p_1287->g_91,&p_1287->g_91,&p_1287->g_91}};
                struct S1 **l_235 = &p_1287->g_233;
                int32_t l_306 = 0x43C2D527L;
                uint64_t l_319 = 0x0CC5F9576AD60C00L;
                int i, j;
                if (((((((safe_rshift_func_int8_t_s_u(((safe_sub_func_int64_t_s_s(p_1287->g_15, ((l_55 = (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((p_1287->g_211[6] = p_1287->g_122), ((p_1287->g_73 , l_212) != (void*)0))), l_213[1]))) > (((((*l_212) = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((((safe_add_func_uint32_t_u_u(((0x6F823C73L || 4294967295UL) || (safe_unary_minus_func_int32_t_s(l_227))), l_228)) && 18446744073709551612UL) || l_188[2][3]) | 4294967295UL), p_46)), p_46)) && p_46), p_1287->g_91.f2)), l_229))) > (*l_50)) & (*p_45)) | (*l_50))))) == (-10L)), p_1287->g_109)) && 0x16L) > 0x5E403528L) , 65535UL) ^ l_227) & (*p_1287->g_102)))
                { /* block id: 96 */
                    uint32_t l_238 = 5UL;
                    if (l_213[1])
                        break;
                    if ((0xF1D1L < p_1287->g_109))
                    { /* block id: 98 */
                        struct S1 ***l_234[3][5][7] = {{{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232}},{{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232}},{{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232},{(void*)0,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232,&p_1287->g_232}}};
                        int i, j, k;
                        l_231[2][3] = l_230;
                        l_236[4] = (l_235 = p_1287->g_232);
                    }
                    else
                    { /* block id: 102 */
                        int32_t l_237 = 0x33322A08L;
                        int8_t *l_245 = &l_188[1][3];
                        int8_t *l_246 = (void*)0;
                        l_238++;
                        l_213[1] = (safe_lshift_func_int8_t_s_u(p_46, 7));
                        (*l_51) = ((!((l_182 = ((*l_245) = (safe_mod_func_int64_t_s_s(p_1287->g_98[4].f0, 0xA40AB47427F0A379L)))) <= 0x2BL)) & 0x37F6L);
                    }
                    for (p_1287->g_86 = 1; (p_1287->g_86 >= 0); p_1287->g_86 -= 1)
                    { /* block id: 111 */
                        uint16_t ***l_248 = &p_1287->g_247;
                        (*l_248) = p_1287->g_247;
                        if ((*p_45))
                            break;
                        (*l_51) |= 2L;
                        if (l_213[1])
                            break;
                    }
                }
                else
                { /* block id: 117 */
                    int64_t l_251 = 3L;
                    int32_t *l_275 = &p_1287->g_16;
                    uint16_t *l_280 = &l_228;
                    int32_t l_297 = 0x1EB100A9L;
                    int32_t l_298[8];
                    struct S0 **l_317[6][2][10] = {{{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126},{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126}},{{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126},{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126}},{{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126},{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126}},{{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126},{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126}},{{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126},{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126}},{{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126},{&l_231[2][3],(void*)0,&l_126,&l_231[2][3],&l_316,&l_231[2][3],&l_231[2][3],&l_316,&l_231[2][3],&l_126}}};
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_298[i] = 0x5103F6C6L;
                    if (l_213[6])
                        break;
                    for (l_55 = 0; (l_55 >= 0); l_55 -= 1)
                    { /* block id: 121 */
                        int8_t l_258 = 0x36L;
                        uint16_t ***l_266 = &p_1287->g_247;
                        uint16_t ****l_265 = &l_266;
                        int8_t *l_292 = &l_188[2][0];
                        struct S1 ***l_294 = &l_235;
                        struct S1 ****l_293 = &l_294;
                        l_227 = (safe_sub_func_uint32_t_u_u(((p_46 = (p_1287->g_167[6].f0 == l_251)) >= ((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(((l_200[0][0] != ((((l_258 || p_1287->g_167[6].f1) , &p_1287->g_232) == ((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((l_263 != ((*l_265) = (p_1287->g_264 = (void*)0))), (safe_sub_func_int32_t_s_s(((l_213[1] = ((safe_sub_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u((((*l_50) = ((safe_add_func_int16_t_s_s(((l_258 && 1UL) , (-1L)), (*p_1287->g_102))) < l_258)) > 0x586771EEL), 1L)) > p_1287->g_91.f2), l_251)) , 0xED05L)) & 0x230EL), p_1287->g_167[6].f0)))), (*p_1287->g_85))) , &p_1287->g_232)) , &p_1287->g_64)) , l_251), 0x7D5959697A2663EAL)) & p_1287->g_16), l_170[4])), 6)) > 0x036D3FA5L)), (*p_1287->g_85)));
                        (*p_1287->g_276) = l_275;
                        (*p_1287->g_125) = func_68((((p_46--) ^ (((l_279[9] = l_279[1]) == l_280) && ((safe_mul_func_int16_t_s_s(((((((2UL >= (safe_lshift_func_uint8_t_u_s(255UL, ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((p_1287->g_295 |= (((safe_lshift_func_int16_t_s_u(((l_126 == (void*)0) < l_185), (safe_lshift_func_int8_t_s_u(((*l_292) = 8L), ((((*l_293) = &l_235) != &p_1287->g_232) , p_1287->g_122))))) , p_1287->g_49) >= 0x32827763L)))), (*p_45))) <= p_1287->g_211[6])))) == 0x9C58DDADL) , 0x4BL) , &p_1287->g_110[0][0][5]) != &p_45) >= (*l_275)), (*p_1287->g_102))) < 0x807A14A86C76AD62L))) , p_46), p_1287->g_98[4].f0, p_1287->g_215, p_1287);
                        (*l_294) = (*l_294);
                    }
                    for (l_182 = 1; (l_182 >= 0); l_182 -= 1)
                    { /* block id: 139 */
                        int32_t l_296[8][10][3] = {{{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L}},{{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L}},{{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L}},{{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L}},{{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L}},{{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L}},{{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L}},{{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L},{0x0B8834E9L,0x7A67194BL,0x045D9B98L}}};
                        uint64_t *l_309 = &p_1287->g_295;
                        int i, j, k;
                        (*l_51) = 9L;
                        --l_299;
                        if (l_188[1][3])
                            break;
                        (*l_50) |= ((~((void*)0 != &l_212)) ^ ((safe_add_func_int8_t_s_s((0x1F51E27F2D186D5FL != ((safe_sub_func_uint64_t_u_u(((--(*l_212)) == 0x2EL), 1UL)) != p_1287->g_167[6].f1)), (((*l_309)++) && ((*l_120) = l_227)))) || ((safe_lshift_func_uint16_t_u_u((l_227 = p_46), (0x321160A9L | (*l_275)))) , 0xA3L)));
                    }
                    l_306 &= ((*l_51) |= (((safe_sub_func_uint64_t_u_u((((l_231[2][3] == (p_1287->g_125 = (l_316 = l_316))) , p_1287->g_109) >= ((!l_318) > (!(((0x71DCL < 65526UL) && p_46) , ((p_1287->g_64 = (p_1287->g_91.f2 = ((((0x7294L ^ ((9UL < (-1L)) , (*p_1287->g_102))) == p_46) <= l_319) <= l_320))) || p_1287->g_15))))), p_46)) , (void*)0) == &l_230));
                }
                (*l_50) = (safe_mul_func_uint16_t_u_u(0x45B4L, 0xF818L));
            }
            for (p_1287->g_109 = 0; (p_1287->g_109 >= 0); p_1287->g_109 -= 1)
            { /* block id: 160 */
                struct S1 *l_324 = &p_1287->g_167[5];
                for (l_196 = 0; (l_196 <= 0); l_196 += 1)
                { /* block id: 163 */
                    struct S1 *l_323 = &p_1287->g_167[0];
                    l_324 = ((*p_1287->g_232) = l_323);
                    return (*p_1287->g_102);
                }
            }
        }
    }
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_15 p_1287->g_5 p_1287->g_20 p_1287->g_86 p_1287->g_91 p_1287->g_73 p_1287->g_98 p_1287->g_16 p_1287->g_109
 * writes: p_1287->g_85 p_1287->g_86 p_1287->g_91 p_1287->g_102 p_1287->g_100 p_1287->g_109 p_1287->g_110
 */
struct S0  func_68(uint32_t  p_69, uint32_t  p_70, uint32_t  p_71, struct S2 * p_1287)
{ /* block id: 29 */
    int32_t *l_82 = &p_1287->g_20;
    int32_t *l_84 = &p_1287->g_16;
    int32_t **l_83[8][7][4] = {{{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82}}};
    struct S0 *l_93 = &p_1287->g_91;
    int16_t *l_99 = &p_1287->g_100;
    int16_t **l_101[6] = {&l_99,&l_99,&l_99,&l_99,&l_99,&l_99};
    uint8_t l_107 = 0x18L;
    int64_t *l_108 = &p_1287->g_109;
    uint64_t l_111 = 0x7A280F67D394C19AL;
    int i, j, k;
    (*l_93) = func_76(p_1287->g_15, (safe_mod_func_uint8_t_u_u(p_69, p_1287->g_5)), ((l_82 == (p_1287->g_85 = &p_1287->g_20)) != ((*l_82) == p_1287->g_20)), p_1287);
    p_1287->g_110[0][0][5] = (p_1287->g_85 = (((*l_108) &= (+((safe_rshift_func_int8_t_s_s((((safe_mod_func_int64_t_s_s(p_1287->g_91.f1, p_1287->g_73)) , (p_1287->g_98[4] , (p_1287->g_102 = l_99))) != (void*)0), 0)) != ((safe_add_func_uint32_t_u_u((0xFF3AL != (&p_1287->g_100 != &p_1287->g_100)), (((*l_99) = (safe_mod_func_int64_t_s_s((((((void*)0 == &p_1287->g_85) , p_1287->g_86) < p_1287->g_91.f2) == p_69), 1UL))) && (*l_84)))) , l_107)))) , &p_1287->g_16));
    l_111 = 0x10A2F695L;
    return (*l_93);
}


/* ------------------------------------------ */
/* 
 * reads : p_1287->g_86 p_1287->g_91
 * writes: p_1287->g_86
 */
struct S0  func_76(int8_t  p_77, uint32_t  p_78, int16_t  p_79, struct S2 * p_1287)
{ /* block id: 31 */
    int32_t l_89 = (-1L);
    for (p_1287->g_86 = 0; (p_1287->g_86 <= 19); p_1287->g_86 = safe_add_func_uint16_t_u_u(p_1287->g_86, 2))
    { /* block id: 34 */
        int8_t l_90[8] = {(-6L),8L,(-6L),(-6L),8L,(-6L),(-6L),8L};
        int i;
        l_90[4] = l_89;
    }
    return p_1287->g_91;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1288;
    struct S2* p_1287 = &c_1288;
    struct S2 c_1289 = {
        0x5073FF82L, // p_1287->g_2
        1L, // p_1287->g_3
        0x72A72759L, // p_1287->g_4
        0x6A66E58DL, // p_1287->g_5
        0x3969161DL, // p_1287->g_14
        0x50357257L, // p_1287->g_15
        (-1L), // p_1287->g_16
        {{{0x758B39D20578CCA6L,0x648792891F433C8AL,0x4D1D2A6F9A4D91F0L,1L,(-10L),1L,0x4D1D2A6F9A4D91F0L,0x648792891F433C8AL}},{{0x758B39D20578CCA6L,0x648792891F433C8AL,0x4D1D2A6F9A4D91F0L,1L,(-10L),1L,0x4D1D2A6F9A4D91F0L,0x648792891F433C8AL}},{{0x758B39D20578CCA6L,0x648792891F433C8AL,0x4D1D2A6F9A4D91F0L,1L,(-10L),1L,0x4D1D2A6F9A4D91F0L,0x648792891F433C8AL}},{{0x758B39D20578CCA6L,0x648792891F433C8AL,0x4D1D2A6F9A4D91F0L,1L,(-10L),1L,0x4D1D2A6F9A4D91F0L,0x648792891F433C8AL}},{{0x758B39D20578CCA6L,0x648792891F433C8AL,0x4D1D2A6F9A4D91F0L,1L,(-10L),1L,0x4D1D2A6F9A4D91F0L,0x648792891F433C8AL}},{{0x758B39D20578CCA6L,0x648792891F433C8AL,0x4D1D2A6F9A4D91F0L,1L,(-10L),1L,0x4D1D2A6F9A4D91F0L,0x648792891F433C8AL}},{{0x758B39D20578CCA6L,0x648792891F433C8AL,0x4D1D2A6F9A4D91F0L,1L,(-10L),1L,0x4D1D2A6F9A4D91F0L,0x648792891F433C8AL}},{{0x758B39D20578CCA6L,0x648792891F433C8AL,0x4D1D2A6F9A4D91F0L,1L,(-10L),1L,0x4D1D2A6F9A4D91F0L,0x648792891F433C8AL}},{{0x758B39D20578CCA6L,0x648792891F433C8AL,0x4D1D2A6F9A4D91F0L,1L,(-10L),1L,0x4D1D2A6F9A4D91F0L,0x648792891F433C8AL}}}, // p_1287->g_19
        0x260C437FL, // p_1287->g_20
        0x62D17F49L, // p_1287->g_49
        0xD5L, // p_1287->g_64
        0UL, // p_1287->g_73
        0L, // p_1287->g_86
        &p_1287->g_86, // p_1287->g_85
        {0x085DA103L,0L,249UL,-1L}, // p_1287->g_91
        (void*)0, // p_1287->g_92
        {{0x78L,0x597FL,0x62FE7C9D89B7A404L},{0x78L,0x597FL,0x62FE7C9D89B7A404L},{0x78L,0x597FL,0x62FE7C9D89B7A404L},{0x78L,0x597FL,0x62FE7C9D89B7A404L},{0x78L,0x597FL,0x62FE7C9D89B7A404L},{0x78L,0x597FL,0x62FE7C9D89B7A404L}}, // p_1287->g_98
        0x3448L, // p_1287->g_100
        &p_1287->g_100, // p_1287->g_102
        0x23F393C2DF5847FBL, // p_1287->g_109
        {{{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20}},{{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20}},{{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20}},{{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20}},{{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20}},{{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20}},{{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20}},{{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20}},{{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20},{(void*)0,&p_1287->g_16,&p_1287->g_20,&p_1287->g_86,&p_1287->g_16,&p_1287->g_16,&p_1287->g_20,&p_1287->g_16,&p_1287->g_20}}}, // p_1287->g_110
        0L, // p_1287->g_122
        &p_1287->g_91, // p_1287->g_125
        {{0x53L,0x8598L,0x0C1190EECBCC985EL},{0x53L,0x8598L,0x0C1190EECBCC985EL},{0x53L,0x8598L,0x0C1190EECBCC985EL},{0x53L,0x8598L,0x0C1190EECBCC985EL},{0x53L,0x8598L,0x0C1190EECBCC985EL},{0x53L,0x8598L,0x0C1190EECBCC985EL},{0x53L,0x8598L,0x0C1190EECBCC985EL},{0x53L,0x8598L,0x0C1190EECBCC985EL}}, // p_1287->g_167
        (-1L), // p_1287->g_177
        {0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_1287->g_211
        0UL, // p_1287->g_215
        &p_1287->g_167[3], // p_1287->g_233
        &p_1287->g_233, // p_1287->g_232
        (void*)0, // p_1287->g_247
        (void*)0, // p_1287->g_264
        &p_1287->g_85, // p_1287->g_276
        7UL, // p_1287->g_295
        0xD16EL, // p_1287->g_353
        {0x02L,0x4019L,-8L}, // p_1287->g_363
        &p_1287->g_85, // p_1287->g_389
        0x4A0E54417EC245B2L, // p_1287->g_414
        &p_1287->g_20, // p_1287->g_419
        {-1L,0x03DFL,-1L}, // p_1287->g_421
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1287->g_424
        (void*)0, // p_1287->g_425
        0x091B7ABB886939ECL, // p_1287->g_443
        &p_1287->g_86, // p_1287->g_448
        {0x18L,0x0053L,0x52559B7B73C8A679L}, // p_1287->g_461
        {-1L,0x5F23L,-8L}, // p_1287->g_468
        &p_1287->g_468.f0, // p_1287->g_469
        {{0x1CL,0x209DL,0L},{0x1CL,0x209DL,0L},{0x1CL,0x209DL,0L},{0x1CL,0x209DL,0L},{0x1CL,0x209DL,0L},{0x1CL,0x209DL,0L},{0x1CL,0x209DL,0L}}, // p_1287->g_476
        4294967295UL, // p_1287->g_505
        &p_1287->g_110[3][0][1], // p_1287->g_543
        &p_1287->g_85, // p_1287->g_546
        {0L,1UL,1L}, // p_1287->g_556
        8L, // p_1287->g_558
        0x4A574B22L, // p_1287->g_560
        {{&p_1287->g_505},{&p_1287->g_505},{&p_1287->g_505}}, // p_1287->g_561
        {&p_1287->g_110[3][1][8],&p_1287->g_110[0][0][5],&p_1287->g_110[3][1][8],&p_1287->g_110[3][1][8],&p_1287->g_110[0][0][5],&p_1287->g_110[3][1][8]}, // p_1287->g_586
        0x63834D4AL, // p_1287->g_672
        2UL, // p_1287->g_673
        {-10L,0x5DC6L,0x21C7CDE23EF5D1BDL}, // p_1287->g_695
        0x9BC974EB4301AD3FL, // p_1287->g_700
        {-1L,0x40B4L,-5L}, // p_1287->g_721
        {{4294967294UL,6L,0x5CL,3L},{4294967294UL,6L,0x5CL,3L},{4294967294UL,6L,0x5CL,3L}}, // p_1287->g_770
        8UL, // p_1287->g_773
        0x1D380101L, // p_1287->g_832
        &p_1287->g_110[0][0][5], // p_1287->g_875
        {0x72L,0x396AL,0x26156A5122176C30L}, // p_1287->g_879
        &p_1287->g_558, // p_1287->g_948
        &p_1287->g_948, // p_1287->g_947
        {0x0E777C2FL,-8L,5UL,0x62CE1A411702888BL}, // p_1287->g_954
        0UL, // p_1287->g_1048
        &p_1287->g_110[4][0][6], // p_1287->g_1066
        0x2BL, // p_1287->g_1078
        {{{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]}},{{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]}},{{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]}},{{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]}},{{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]}},{{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]}},{{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]}},{{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]}},{{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]},{&p_1287->g_85,&p_1287->g_85,(void*)0,&p_1287->g_85,&p_1287->g_110[0][0][5],&p_1287->g_110[7][0][0],&p_1287->g_110[1][0][6]}}}, // p_1287->g_1092
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_1287->g_1109
        &p_1287->g_1109[5][0], // p_1287->g_1108
        &p_1287->g_1108, // p_1287->g_1107
        &p_1287->g_85, // p_1287->g_1138
        {0x1AL,0x0E4FL,-1L}, // p_1287->g_1147
        {0x05D2C034C3B6327AL,(-3L),0x05D2C034C3B6327AL,0x05D2C034C3B6327AL,(-3L),0x05D2C034C3B6327AL}, // p_1287->g_1178
        {{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}},{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}},{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}},{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}},{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}},{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}},{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}},{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}},{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}},{{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0},{&p_1287->g_73,&p_1287->g_91.f0}}}, // p_1287->g_1200
        {{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}},{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}},{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}},{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}},{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}},{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}},{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}},{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}},{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}},{{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0},{&p_1287->g_91.f0,(void*)0,(void*)0}}}, // p_1287->g_1201
        {0x1EL,0xFA27L,1L}, // p_1287->g_1221
        &p_1287->g_5, // p_1287->g_1286
    };
    c_1288 = c_1289;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1287);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1287->g_2, "p_1287->g_2", print_hash_value);
    transparent_crc(p_1287->g_3, "p_1287->g_3", print_hash_value);
    transparent_crc(p_1287->g_4, "p_1287->g_4", print_hash_value);
    transparent_crc(p_1287->g_5, "p_1287->g_5", print_hash_value);
    transparent_crc(p_1287->g_14, "p_1287->g_14", print_hash_value);
    transparent_crc(p_1287->g_15, "p_1287->g_15", print_hash_value);
    transparent_crc(p_1287->g_16, "p_1287->g_16", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1287->g_19[i][j][k], "p_1287->g_19[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1287->g_20, "p_1287->g_20", print_hash_value);
    transparent_crc(p_1287->g_49, "p_1287->g_49", print_hash_value);
    transparent_crc(p_1287->g_64, "p_1287->g_64", print_hash_value);
    transparent_crc(p_1287->g_73, "p_1287->g_73", print_hash_value);
    transparent_crc(p_1287->g_86, "p_1287->g_86", print_hash_value);
    transparent_crc(p_1287->g_91.f0, "p_1287->g_91.f0", print_hash_value);
    transparent_crc(p_1287->g_91.f1, "p_1287->g_91.f1", print_hash_value);
    transparent_crc(p_1287->g_91.f2, "p_1287->g_91.f2", print_hash_value);
    transparent_crc(p_1287->g_91.f3, "p_1287->g_91.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1287->g_98[i].f0, "p_1287->g_98[i].f0", print_hash_value);
        transparent_crc(p_1287->g_98[i].f1, "p_1287->g_98[i].f1", print_hash_value);
        transparent_crc(p_1287->g_98[i].f2, "p_1287->g_98[i].f2", print_hash_value);

    }
    transparent_crc(p_1287->g_100, "p_1287->g_100", print_hash_value);
    transparent_crc(p_1287->g_109, "p_1287->g_109", print_hash_value);
    transparent_crc(p_1287->g_122, "p_1287->g_122", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1287->g_167[i].f0, "p_1287->g_167[i].f0", print_hash_value);
        transparent_crc(p_1287->g_167[i].f1, "p_1287->g_167[i].f1", print_hash_value);
        transparent_crc(p_1287->g_167[i].f2, "p_1287->g_167[i].f2", print_hash_value);

    }
    transparent_crc(p_1287->g_177, "p_1287->g_177", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1287->g_211[i], "p_1287->g_211[i]", print_hash_value);

    }
    transparent_crc(p_1287->g_215, "p_1287->g_215", print_hash_value);
    transparent_crc(p_1287->g_295, "p_1287->g_295", print_hash_value);
    transparent_crc(p_1287->g_353, "p_1287->g_353", print_hash_value);
    transparent_crc(p_1287->g_363.f0, "p_1287->g_363.f0", print_hash_value);
    transparent_crc(p_1287->g_363.f1, "p_1287->g_363.f1", print_hash_value);
    transparent_crc(p_1287->g_363.f2, "p_1287->g_363.f2", print_hash_value);
    transparent_crc(p_1287->g_414, "p_1287->g_414", print_hash_value);
    transparent_crc(p_1287->g_421.f0, "p_1287->g_421.f0", print_hash_value);
    transparent_crc(p_1287->g_421.f1, "p_1287->g_421.f1", print_hash_value);
    transparent_crc(p_1287->g_421.f2, "p_1287->g_421.f2", print_hash_value);
    transparent_crc(p_1287->g_443, "p_1287->g_443", print_hash_value);
    transparent_crc(p_1287->g_461.f0, "p_1287->g_461.f0", print_hash_value);
    transparent_crc(p_1287->g_461.f1, "p_1287->g_461.f1", print_hash_value);
    transparent_crc(p_1287->g_461.f2, "p_1287->g_461.f2", print_hash_value);
    transparent_crc(p_1287->g_468.f0, "p_1287->g_468.f0", print_hash_value);
    transparent_crc(p_1287->g_468.f1, "p_1287->g_468.f1", print_hash_value);
    transparent_crc(p_1287->g_468.f2, "p_1287->g_468.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1287->g_476[i].f0, "p_1287->g_476[i].f0", print_hash_value);
        transparent_crc(p_1287->g_476[i].f1, "p_1287->g_476[i].f1", print_hash_value);
        transparent_crc(p_1287->g_476[i].f2, "p_1287->g_476[i].f2", print_hash_value);

    }
    transparent_crc(p_1287->g_505, "p_1287->g_505", print_hash_value);
    transparent_crc(p_1287->g_556.f0, "p_1287->g_556.f0", print_hash_value);
    transparent_crc(p_1287->g_556.f1, "p_1287->g_556.f1", print_hash_value);
    transparent_crc(p_1287->g_556.f2, "p_1287->g_556.f2", print_hash_value);
    transparent_crc(p_1287->g_558, "p_1287->g_558", print_hash_value);
    transparent_crc(p_1287->g_560, "p_1287->g_560", print_hash_value);
    transparent_crc(p_1287->g_672, "p_1287->g_672", print_hash_value);
    transparent_crc(p_1287->g_673, "p_1287->g_673", print_hash_value);
    transparent_crc(p_1287->g_695.f0, "p_1287->g_695.f0", print_hash_value);
    transparent_crc(p_1287->g_695.f1, "p_1287->g_695.f1", print_hash_value);
    transparent_crc(p_1287->g_695.f2, "p_1287->g_695.f2", print_hash_value);
    transparent_crc(p_1287->g_700, "p_1287->g_700", print_hash_value);
    transparent_crc(p_1287->g_721.f0, "p_1287->g_721.f0", print_hash_value);
    transparent_crc(p_1287->g_721.f1, "p_1287->g_721.f1", print_hash_value);
    transparent_crc(p_1287->g_721.f2, "p_1287->g_721.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1287->g_770[i].f0, "p_1287->g_770[i].f0", print_hash_value);
        transparent_crc(p_1287->g_770[i].f1, "p_1287->g_770[i].f1", print_hash_value);
        transparent_crc(p_1287->g_770[i].f2, "p_1287->g_770[i].f2", print_hash_value);
        transparent_crc(p_1287->g_770[i].f3, "p_1287->g_770[i].f3", print_hash_value);

    }
    transparent_crc(p_1287->g_773, "p_1287->g_773", print_hash_value);
    transparent_crc(p_1287->g_832, "p_1287->g_832", print_hash_value);
    transparent_crc(p_1287->g_879.f0, "p_1287->g_879.f0", print_hash_value);
    transparent_crc(p_1287->g_879.f1, "p_1287->g_879.f1", print_hash_value);
    transparent_crc(p_1287->g_879.f2, "p_1287->g_879.f2", print_hash_value);
    transparent_crc(p_1287->g_954.f0, "p_1287->g_954.f0", print_hash_value);
    transparent_crc(p_1287->g_954.f1, "p_1287->g_954.f1", print_hash_value);
    transparent_crc(p_1287->g_954.f2, "p_1287->g_954.f2", print_hash_value);
    transparent_crc(p_1287->g_954.f3, "p_1287->g_954.f3", print_hash_value);
    transparent_crc(p_1287->g_1048, "p_1287->g_1048", print_hash_value);
    transparent_crc(p_1287->g_1078, "p_1287->g_1078", print_hash_value);
    transparent_crc(p_1287->g_1147.f0, "p_1287->g_1147.f0", print_hash_value);
    transparent_crc(p_1287->g_1147.f1, "p_1287->g_1147.f1", print_hash_value);
    transparent_crc(p_1287->g_1147.f2, "p_1287->g_1147.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1287->g_1178[i], "p_1287->g_1178[i]", print_hash_value);

    }
    transparent_crc(p_1287->g_1221.f0, "p_1287->g_1221.f0", print_hash_value);
    transparent_crc(p_1287->g_1221.f1, "p_1287->g_1221.f1", print_hash_value);
    transparent_crc(p_1287->g_1221.f2, "p_1287->g_1221.f2", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
