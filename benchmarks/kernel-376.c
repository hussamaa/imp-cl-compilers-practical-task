// --atomics 89 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 70,27,1 -l 2,1,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 1188867331

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(int32_t, 2) g_2;
    int32_t g_3;
    uint32_t g_35;
    int32_t g_39;
    uint8_t g_49;
    uint16_t g_75[1][4][4];
    VECTOR(int32_t, 2) g_90;
    uint32_t g_97;
    volatile uint32_t g_101;
    volatile uint32_t *g_100;
    uint32_t g_105;
    VECTOR(int8_t, 2) g_148;
    VECTOR(int8_t, 8) g_150;
    int16_t g_160;
    VECTOR(int32_t, 2) g_239;
    volatile int16_t g_249;
    volatile int16_t *g_248;
    volatile int64_t *g_253[5];
    int64_t *g_266;
    int16_t *g_278[9];
    uint32_t *g_291;
    VECTOR(uint32_t, 4) g_296;
    VECTOR(uint16_t, 16) g_311;
    VECTOR(uint16_t, 8) g_312;
    VECTOR(int64_t, 2) g_322;
    VECTOR(int64_t, 8) g_323;
    VECTOR(uint32_t, 4) g_330;
    VECTOR(uint64_t, 2) g_331;
    int8_t *g_353;
    VECTOR(int16_t, 2) g_355;
    int32_t *g_393;
    VECTOR(int32_t, 16) g_406;
    volatile int8_t g_422[7][10][3];
    volatile int8_t *g_421;
    volatile int8_t * volatile *g_420;
    uint64_t *g_492;
    uint64_t **g_491;
    uint64_t g_512[7];
    VECTOR(uint64_t, 16) g_516;
    uint32_t g_519;
    int16_t g_530;
    VECTOR(uint16_t, 2) g_540;
    int32_t * volatile g_548;
    int32_t * volatile g_549;
    int64_t g_551;
    uint32_t g_585;
    VECTOR(int32_t, 16) g_587;
    VECTOR(int64_t, 4) g_599;
    volatile VECTOR(uint16_t, 2) g_629;
    volatile VECTOR(int64_t, 4) g_640;
    int64_t g_655;
    int32_t ** volatile g_657;
    uint32_t ***g_683;
    int32_t ** volatile g_716[9][1][7];
    int32_t ** volatile g_717;
    int32_t ** volatile g_718;
    VECTOR(uint32_t, 8) g_746;
    uint32_t v_collective;
    uint64_t global_0_offset;
    uint64_t global_1_offset;
    uint64_t global_2_offset;
    uint64_t local_0_offset;
    uint64_t local_1_offset;
    uint64_t local_2_offset;
    uint64_t group_0_offset;
    uint64_t group_1_offset;
    uint64_t group_2_offset;
    uint32_t tid;
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_750);
int32_t  func_6(uint64_t  p_7, int8_t  p_8, struct S0 * p_750);
uint32_t  func_11(int32_t  p_12, struct S0 * p_750);
uint8_t  func_19(uint8_t  p_20, int8_t  p_21, int16_t  p_22, uint32_t  p_23, int64_t  p_24, struct S0 * p_750);
uint8_t  func_25(uint32_t  p_26, uint32_t  p_27, uint64_t  p_28, uint32_t  p_29, int32_t  p_30, struct S0 * p_750);
uint64_t  func_56(uint32_t * p_57, uint8_t  p_58, uint32_t * p_59, uint32_t * p_60, int16_t  p_61, struct S0 * p_750);
uint32_t * func_62(int64_t * p_63, int32_t * p_64, struct S0 * p_750);
int64_t * func_65(uint8_t  p_66, uint32_t  p_67, int64_t  p_68, struct S0 * p_750);
uint32_t * func_85(uint64_t  p_86, struct S0 * p_750);
int16_t  func_174(int16_t * p_175, int32_t * p_176, uint32_t * p_177, struct S0 * p_750);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_750->g_3 p_750->g_599
 * writes: p_750->g_3 p_750->g_393
 */
int32_t  func_1(struct S0 * p_750)
{ /* block id: 4 */
    uint8_t l_517 = 0xBEL;
    int32_t **l_749 = &p_750->g_393;
    for (p_750->g_3 = 0; (p_750->g_3 >= 8); p_750->g_3++)
    { /* block id: 7 */
        int16_t l_13[7] = {(-9L),0x16C7L,(-9L),(-9L),0x16C7L,(-9L),(-9L)};
        uint64_t *l_511 = &p_750->g_512[5];
        uint64_t *l_515[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t *l_518 = &p_750->g_519;
        int16_t *l_528 = (void*)0;
        int16_t *l_529 = &p_750->g_530;
        int32_t l_531 = 3L;
        int32_t l_748 = 1L;
        int i;
        (1 + 1);
    }
    (*l_749) = (void*)0;
    return p_750->g_599.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_750->g_39 p_750->g_540 p_750->g_323 p_750->g_516 p_750->g_160 p_750->g_551 p_750->g_519 p_750->g_422 p_750->g_49 p_750->g_585 p_750->g_587 p_750->g_296 p_750->g_90 p_750->g_657 p_750->g_420 p_750->g_421 p_750->g_322 p_750->g_312 p_750->g_683 p_750->g_355 p_750->g_746
 * writes: p_750->g_39 p_750->g_160 p_750->g_519 p_750->g_551 p_750->g_393 p_750->g_49 p_750->g_585 p_750->g_90 p_750->g_330 p_750->g_683 p_750->g_322
 */
int32_t  func_6(uint64_t  p_7, int8_t  p_8, struct S0 * p_750)
{ /* block id: 219 */
    int8_t l_532 = 6L;
    VECTOR(uint8_t, 8) l_545 = (VECTOR(uint8_t, 8))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0x89L), 0x89L), 0x89L, 249UL, 0x89L);
    int32_t l_550 = 0x266B1C54L;
    int32_t *l_556[7][2][8] = {{{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39},{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39}},{{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39},{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39}},{{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39},{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39}},{{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39},{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39}},{{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39},{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39}},{{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39},{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39}},{{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39},{&p_750->g_3,(void*)0,&l_550,&l_550,(void*)0,(void*)0,&l_550,&p_750->g_39}}};
    int32_t l_560 = (-1L);
    int8_t l_565 = 0x1EL;
    uint32_t l_567 = 7UL;
    VECTOR(int8_t, 2) l_586 = (VECTOR(int8_t, 2))(0x0CL, 2L);
    VECTOR(int64_t, 8) l_598 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x2A82ABCE3FA614D2L), 0x2A82ABCE3FA614D2L), 0x2A82ABCE3FA614D2L, (-1L), 0x2A82ABCE3FA614D2L);
    uint64_t **l_625 = &p_750->g_492;
    int64_t l_635 = 1L;
    int8_t *l_651 = &l_565;
    int64_t l_705 = 0L;
    uint32_t l_745 = 4294967287UL;
    uint8_t l_747 = 255UL;
    int i, j, k;
    if ((p_7 | (l_532 = p_8)))
    { /* block id: 221 */
        int8_t l_539 = 0L;
        VECTOR(int32_t, 16) l_547 = (VECTOR(int32_t, 16))(0x68356469L, (VECTOR(int32_t, 4))(0x68356469L, (VECTOR(int32_t, 2))(0x68356469L, 0x19316094L), 0x19316094L), 0x19316094L, 0x68356469L, 0x19316094L, (VECTOR(int32_t, 2))(0x68356469L, 0x19316094L), (VECTOR(int32_t, 2))(0x68356469L, 0x19316094L), 0x68356469L, 0x19316094L, 0x68356469L, 0x19316094L);
        int i;
        for (p_750->g_39 = 24; (p_750->g_39 > (-21)); p_750->g_39 = safe_sub_func_int8_t_s_s(p_750->g_39, 8))
        { /* block id: 224 */
            int16_t *l_546 = &p_750->g_160;
            l_550 &= (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((-1L), ((l_539 < (((VECTOR(uint16_t, 4))(p_750->g_540.yyxy)).w | (!p_750->g_323.s1))) & (safe_mod_func_uint16_t_u_u(p_750->g_516.s1, ((*l_546) ^= (+(((safe_lshift_func_uint16_t_u_u((((VECTOR(int8_t, 2))(0L, 0L)).even <= ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 2))(9UL, 8UL)).xxxxxyyx, ((VECTOR(uint8_t, 2))(l_545.s65)).xxxxxyyx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x6CL, 0x69L)))).yyyxyxxx))).s4), 8)) & 4294967295UL) == p_8)))))))), ((VECTOR(int32_t, 2))(l_547.s7b)).even));
            return p_750->g_551;
        }
        for (p_750->g_39 = (-25); (p_750->g_39 > 9); p_750->g_39 = safe_add_func_int8_t_s_s(p_750->g_39, 3))
        { /* block id: 231 */
            for (p_750->g_519 = 0; (p_750->g_519 > 39); p_750->g_519 = safe_add_func_int32_t_s_s(p_750->g_519, 7))
            { /* block id: 234 */
                l_556[5][1][7] = &l_550;
            }
            if (l_539)
                break;
        }
    }
    else
    { /* block id: 239 */
        int64_t l_557 = 0x18342763B8DE5519L;
        int32_t l_558 = 0x2EE95081L;
        int32_t l_559 = 1L;
        int32_t l_561 = 9L;
        int32_t l_562 = 0x744163C7L;
        int8_t l_563 = 0x46L;
        int32_t l_564[4] = {0x43D69298L,0x43D69298L,0x43D69298L,0x43D69298L};
        int64_t l_566 = 0x57C13961912F3A57L;
        int16_t l_584 = (-9L);
        int16_t *l_609 = &p_750->g_160;
        uint64_t **l_610 = &p_750->g_492;
        int64_t **l_626 = &p_750->g_266;
        VECTOR(uint32_t, 16) l_643 = (VECTOR(uint32_t, 16))(0xFFADF90EL, (VECTOR(uint32_t, 4))(0xFFADF90EL, (VECTOR(uint32_t, 2))(0xFFADF90EL, 0xB0BD7683L), 0xB0BD7683L), 0xB0BD7683L, 0xFFADF90EL, 0xB0BD7683L, (VECTOR(uint32_t, 2))(0xFFADF90EL, 0xB0BD7683L), (VECTOR(uint32_t, 2))(0xFFADF90EL, 0xB0BD7683L), 0xFFADF90EL, 0xB0BD7683L, 0xFFADF90EL, 0xB0BD7683L);
        int8_t *l_652 = &l_565;
        uint32_t **l_669 = (void*)0;
        int32_t *l_721 = &l_550;
        uint32_t *l_743 = (void*)0;
        uint32_t *l_744[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        l_567++;
        for (p_750->g_551 = 2; (p_750->g_551 == 0); p_750->g_551 = safe_sub_func_int32_t_s_s(p_750->g_551, 7))
        { /* block id: 243 */
            int32_t *l_575[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t *l_580 = &p_750->g_49;
            uint8_t *l_581 = (void*)0;
            uint8_t *l_582 = (void*)0;
            uint8_t *l_583[10][2];
            uint64_t *l_590 = &p_750->g_512[3];
            VECTOR(int64_t, 16) l_597 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
            VECTOR(int64_t, 16) l_600 = (VECTOR(int64_t, 16))(0x7B2DC287DF7AE1EDL, (VECTOR(int64_t, 4))(0x7B2DC287DF7AE1EDL, (VECTOR(int64_t, 2))(0x7B2DC287DF7AE1EDL, 3L), 3L), 3L, 0x7B2DC287DF7AE1EDL, 3L, (VECTOR(int64_t, 2))(0x7B2DC287DF7AE1EDL, 3L), (VECTOR(int64_t, 2))(0x7B2DC287DF7AE1EDL, 3L), 0x7B2DC287DF7AE1EDL, 3L, 0x7B2DC287DF7AE1EDL, 3L);
            int64_t **l_621[9] = {&p_750->g_266,(void*)0,&p_750->g_266,&p_750->g_266,(void*)0,&p_750->g_266,&p_750->g_266,(void*)0,&p_750->g_266};
            uint64_t ***l_624 = &l_610;
            VECTOR(int16_t, 2) l_630 = (VECTOR(int16_t, 2))((-5L), 1L);
            uint64_t l_656 = 0UL;
            uint32_t **l_668 = &p_750->g_291;
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 2; j++)
                    l_583[i][j] = (void*)0;
            }
            for (p_750->g_39 = 0; (p_750->g_39 != (-4)); p_750->g_39 = safe_sub_func_uint32_t_u_u(p_750->g_39, 1))
            { /* block id: 246 */
                int32_t **l_574[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_574[i] = (void*)0;
                l_575[5] = (p_750->g_393 = &p_750->g_3);
                for (l_560 = 0; (l_560 >= 20); l_560 = safe_add_func_uint32_t_u_u(l_560, 7))
                { /* block id: 251 */
                    return p_8;
                }
                return p_7;
            }
            p_750->g_90.x ^= (safe_lshift_func_uint8_t_u_u((((p_750->g_422[0][7][2] == (((p_750->g_585 &= (l_584 = ((*l_580) &= 0x93L))) >= (((VECTOR(int32_t, 16))(l_586.x, 3L, p_7, ((VECTOR(int32_t, 8))(p_750->g_587.sa9eaef11)), (safe_rshift_func_uint8_t_u_u((p_8 > ((p_7 || (~((((*l_590)--) == (safe_mul_func_int8_t_s_s(((FAKE_DIVERGE(p_750->local_0_offset, get_local_id(0), 10) & (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(0L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_597.sf0beb066)).even)).xwyxywxwzzwyzwzz))).lo)).s04)), ((VECTOR(int64_t, 2))(l_598.s55)), ((VECTOR(int64_t, 8))(p_750->g_599.yyzxzzyy)).s45))), 0x0B8FF31CB2CC0EB5L, (-10L))), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_600.s83)))), 0x27A9ED1EC55BA65CL)).s7, (safe_rshift_func_int16_t_s_u((((VECTOR(int32_t, 2))((-1L), 0x19C2D7C9L)).odd > (((FAKE_DIVERGE(p_750->group_0_offset, get_group_id(0), 10) , (safe_div_func_int8_t_s_s(((((((safe_mul_func_int16_t_s_s(0x1076L, (((void*)0 != l_609) || p_750->g_239.y))) != p_750->g_516.sd) && p_750->g_296.z) , p_7) , GROUP_DIVERGE(0, 1)) & 0L), 8L))) , l_610) == (void*)0)), 1))))) | p_750->g_599.w), p_8))) , p_7))) & 0xE01FL)), l_566)), 0x0178D318L, p_750->g_355.y, (-1L), 0x742BA918L)).s8 , 0x70L)) == l_566)) , p_750->g_587.sb) != p_7), p_750->g_296.w));
            l_559 &= (safe_mul_func_int16_t_s_s(p_8, ((((VECTOR(uint64_t, 16))(((p_8 > ((~((safe_mul_func_uint8_t_u_u(p_7, p_7)) > 2UL)) || FAKE_DIVERGE(p_750->local_0_offset, get_local_id(0), 10))) & (safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), (safe_mod_func_uint16_t_u_u((l_621[2] == ((FAKE_DIVERGE(p_750->global_0_offset, get_global_id(0), 10) < (safe_sub_func_uint32_t_u_u(((~(((*l_624) = &p_750->g_492) != l_625)) , (&p_750->g_492 != (void*)0)), 4294967295UL))) , l_626)), (-9L))))) >= (-10L)) < p_750->g_551) > 0x2687L), p_7))), ((VECTOR(uint64_t, 4))(8UL)), 18446744073709551615UL, p_8, 0x818453EABD5AA931L, 0xE63CE00111E940F6L, 0x53DDA9F23357B2C1L, 0x55C44969B718EDDFL, ((VECTOR(uint64_t, 2))(0x883FB0B81B2D31CDL)), 1UL, 0xED86F76BD9B26972L, 0xC063DAC43D0994FCL)).s7 , p_8) < l_564[1])));
            if (((((void*)0 == l_556[5][1][7]) , (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))((-2L), 1L)).even, (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))((0xE9DDFA79L ^ 0x70D49C6BL), ((VECTOR(uint16_t, 2))(p_750->g_629.xy)), 65535UL, 0xD49CL, 65535UL, 65535UL, 1UL)).s60)).lo ^ (l_564[1] = p_7))))) != ((VECTOR(int16_t, 8))(l_630.xyyxyxyx)).s0))
            { /* block id: 264 */
                int8_t l_631 = 0L;
                int32_t l_632 = 0x2AE1EB78L;
                int32_t l_633 = (-7L);
                VECTOR(int32_t, 4) l_634 = (VECTOR(int32_t, 4))(0x28CB452AL, (VECTOR(int32_t, 2))(0x28CB452AL, 0x1873B5A1L), 0x1873B5A1L);
                int8_t l_636 = 0L;
                uint32_t l_637 = 0x84BFF042L;
                uint32_t *l_653 = &l_637;
                int64_t *l_654 = &p_750->g_655;
                int i;
                l_637--;
                (*p_750->g_657) = ((0x1EL || (((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_750->g_640.xwxw)).odd)).yyyy)), 0x4D167D4AB7CBC20EL, 0x4C390E71F17379B3L, ((VECTOR(int64_t, 2))(1L, 0x791A70530E11443AL)), 0L, ((*l_654) |= ((*p_750->g_421) , (safe_rshift_func_int16_t_s_u(p_8, (((VECTOR(uint32_t, 16))(l_643.se0727282f6a32e42)).s6 , (((*l_653) = ((safe_sub_func_int64_t_s_s((p_750->g_296.y , (0x57L && p_7)), 18446744073709551607UL)) | (((*l_590) = (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((~(!((l_651 = p_750->g_353) == l_652))))), 1UL)), p_8))) || 2UL))) , p_8)))))), 0x2744B946A2E76486L, 0x24C7EC887065BE59L, l_643.sf, l_656, (-6L), 0x74EF77D5D7AB44ADL)).sa , l_634.x) , p_8) || p_7)) , &l_632);
            }
            else
            { /* block id: 271 */
                uint64_t l_693 = 18446744073709551614UL;
                int32_t l_707[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_707[i] = 0x41C12ABCL;
                for (l_567 = (-4); (l_567 >= 19); l_567 = safe_add_func_int16_t_s_s(l_567, 9))
                { /* block id: 274 */
                    uint32_t ****l_684 = &p_750->g_683;
                    int32_t l_704 = 0x37405B3AL;
                    uint8_t l_713[7][8] = {{255UL,0x02L,0x91L,0x1AL,0x2CL,1UL,0x1AL,0x91L},{255UL,0x02L,0x91L,0x1AL,0x2CL,1UL,0x1AL,0x91L},{255UL,0x02L,0x91L,0x1AL,0x2CL,1UL,0x1AL,0x91L},{255UL,0x02L,0x91L,0x1AL,0x2CL,1UL,0x1AL,0x91L},{255UL,0x02L,0x91L,0x1AL,0x2CL,1UL,0x1AL,0x91L},{255UL,0x02L,0x91L,0x1AL,0x2CL,1UL,0x1AL,0x91L},{255UL,0x02L,0x91L,0x1AL,0x2CL,1UL,0x1AL,0x91L}};
                    int32_t *l_720 = &p_750->g_39;
                    int i, j;
                    for (p_750->g_49 = 16; (p_750->g_49 != 7); p_750->g_49 = safe_sub_func_int16_t_s_s(p_750->g_49, 2))
                    { /* block id: 277 */
                        uint32_t ***l_670 = &l_668;
                        int32_t l_673 = (-1L);
                        uint32_t *l_674[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_558 = (safe_add_func_uint32_t_u_u(p_8, (p_750->g_330.x = ((safe_sub_func_int64_t_s_s((((*l_670) = (l_669 = l_668)) != (void*)0), 0x5DFBE1ED3799CFDAL)) >= (p_750->g_323.s0 < (p_750->g_516.s5 <= ((l_584 & (**p_750->g_420)) , (p_750->g_519 = (((safe_div_func_int8_t_s_s(((p_750->g_322.x ^ p_7) >= (*p_750->g_421)), 0x79L)) & l_673) , p_750->g_322.x)))))))));
                        return p_7;
                    }
                    if ((l_704 = ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(p_750->g_312.s2, (safe_div_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((&l_669 == ((*l_684) = p_750->g_683)), (safe_unary_minus_func_int32_t_s(((((p_750->g_322.y |= ((safe_add_func_uint32_t_u_u((~(((((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(0x6FD4438FL, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(4294967294UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(65535UL, 1UL)).xxxx, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0UL, 0UL, ((safe_unary_minus_func_int64_t_s((~(p_750->g_599.w ^= (l_693 || (((VECTOR(uint64_t, 4))((safe_sub_func_int8_t_s_s((FAKE_DIVERGE(p_750->group_0_offset, get_group_id(0), 10) , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x7BL, 0x44L, (-3L), (-2L))))).x), (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x6EL, 0x45L)).xyxxxxxxyxyxyyyy)).s3f)))).yxyyyyyxyyyxyyxy, (int8_t)(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x79CFAF5F891D7731L, (-1L))).xxxxxyyx)))).s6 <= (p_750->g_323.s2 = ((safe_sub_func_int16_t_s_s((l_584 , p_8), ((safe_mod_func_int32_t_s_s(((*p_750->g_421) != (p_750->g_331.x < (safe_rshift_func_uint8_t_u_s((p_8 == (-5L)), 1)))), 4L)) != p_750->g_331.y))) >= l_557)))))).sc, 8UL)))), 0xA1E4077D4CFDF544L, 18446744073709551612UL, 0x299B41929824A322L)).x <= GROUP_DIVERGE(0, 1))))))) >= p_8), p_750->g_105, 65535UL, FAKE_DIVERGE(p_750->local_0_offset, get_local_id(0), 10), ((VECTOR(uint16_t, 4))(0xC4E7L)), 0UL, ((VECTOR(uint16_t, 2))(2UL)), 0x7598L, 0x7AEDL, 0xDFBCL)).s28)), 0x094BL, p_750->g_97, p_750->g_239.x, 65530UL, 0x6FB4L)).s20, ((VECTOR(uint16_t, 2))(65530UL))))).yyyy)), ((VECTOR(uint16_t, 2))(65535UL)), 9UL)).odd, ((VECTOR(uint16_t, 4))(0xC6E8L)))))))).wzzxxyxwyxzxwzyz, ((VECTOR(uint32_t, 16))(4UL))))).lo)), 0x5E061FE4L, 0xDB94ACD8L, ((VECTOR(uint32_t, 4))(0x33CCCD76L)), 0UL)).sab5d, ((VECTOR(uint32_t, 4))(0UL))))), p_750->g_239.x, 4294967293UL, 0UL)).odd)).x, p_750->g_355.x)) == 252UL) , 248UL) & l_693) >= p_7)), 3UL)) == 1UL)) >= l_693) || l_693) > 1UL))))) && p_8), FAKE_DIVERGE(p_750->global_0_offset, get_global_id(0), 10))))), p_7)) , p_7)))
                    { /* block id: 290 */
                        int32_t l_706 = 0x6EC58757L;
                        int32_t l_708 = (-1L);
                        int32_t l_709 = 1L;
                        int32_t l_710 = (-5L);
                        int32_t l_711 = 0x232A86BEL;
                        int32_t l_712 = 0x105D109DL;
                        l_713[5][4]--;
                    }
                    else
                    { /* block id: 292 */
                        int32_t **l_719[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_719[i] = &l_556[1][1][1];
                        l_720 = l_575[6];
                    }
                    l_721 = (void*)0;
                }
                if ((atomic_inc(&p_750->g_atomic_input[89 * get_linear_group_id() + 46]) == 4))
                { /* block id: 298 */
                    VECTOR(int16_t, 8) l_722 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                    int32_t l_723 = 0x1B46F324L;
                    int32_t l_724 = 0x736C6E74L;
                    VECTOR(uint16_t, 8) l_725 = (VECTOR(uint16_t, 8))(0xFC4EL, (VECTOR(uint16_t, 4))(0xFC4EL, (VECTOR(uint16_t, 2))(0xFC4EL, 0UL), 0UL), 0UL, 0xFC4EL, 0UL);
                    int32_t l_726 = 0x6F739AD5L;
                    VECTOR(uint16_t, 4) l_727 = (VECTOR(uint16_t, 4))(0xF1F7L, (VECTOR(uint16_t, 2))(0xF1F7L, 65528UL), 65528UL);
                    VECTOR(uint16_t, 2) l_728 = (VECTOR(uint16_t, 2))(0x2998L, 0UL);
                    uint32_t l_729 = 0x2F8FA145L;
                    int32_t l_730 = (-1L);
                    VECTOR(uint16_t, 4) l_731 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xE96DL), 0xE96DL);
                    VECTOR(uint16_t, 8) l_732 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65534UL), 65534UL), 65534UL, 0UL, 65534UL);
                    uint8_t l_733 = 0xCEL;
                    int32_t l_734 = 4L;
                    int32_t l_735 = 9L;
                    int32_t l_736 = 1L;
                    int64_t l_737 = 0x2CB5F8CBA56E6095L;
                    uint16_t l_738 = 0x1C04L;
                    int i;
                    l_733 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_722.s03)), ((VECTOR(uint16_t, 16))(1UL, l_723, 0xD241L, 65535UL, (FAKE_DIVERGE(p_750->local_1_offset, get_local_id(1), 10) , l_724), 65535UL, (l_726 |= ((VECTOR(uint16_t, 2))(l_725.s31)).lo), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(l_727.wwzzxywxwwwxxxyz)).s228e, ((VECTOR(uint16_t, 4))(l_728.yyyy))))))).even)), (l_729 , 65531UL), 0UL, (l_730 , FAKE_DIVERGE(p_750->group_0_offset, get_group_id(0), 10)), ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_731.yz)).yyxxxxyx)).hi, ((VECTOR(uint16_t, 16))(l_732.s3222537074651700)).sb368))))).sd5))).xxxx)).z;
                    l_735 = l_734;
                    l_736 ^= 1L;
                    l_738 = l_737;
                    unsigned int result = 0;
                    result += l_722.s7;
                    result += l_722.s6;
                    result += l_722.s5;
                    result += l_722.s4;
                    result += l_722.s3;
                    result += l_722.s2;
                    result += l_722.s1;
                    result += l_722.s0;
                    result += l_723;
                    result += l_724;
                    result += l_725.s7;
                    result += l_725.s6;
                    result += l_725.s5;
                    result += l_725.s4;
                    result += l_725.s3;
                    result += l_725.s2;
                    result += l_725.s1;
                    result += l_725.s0;
                    result += l_726;
                    result += l_727.w;
                    result += l_727.z;
                    result += l_727.y;
                    result += l_727.x;
                    result += l_728.y;
                    result += l_728.x;
                    result += l_729;
                    result += l_730;
                    result += l_731.w;
                    result += l_731.z;
                    result += l_731.y;
                    result += l_731.x;
                    result += l_732.s7;
                    result += l_732.s6;
                    result += l_732.s5;
                    result += l_732.s4;
                    result += l_732.s3;
                    result += l_732.s2;
                    result += l_732.s1;
                    result += l_732.s0;
                    result += l_733;
                    result += l_734;
                    result += l_735;
                    result += l_736;
                    result += l_737;
                    result += l_738;
                    atomic_add(&p_750->g_special_values[89 * get_linear_group_id() + 46], result);
                }
                else
                { /* block id: 304 */
                    (1 + 1);
                }
                return p_7;
            }
        }
        l_561 |= ((*l_721) = (safe_rshift_func_int16_t_s_s((*l_721), (safe_sub_func_int32_t_s_s((l_562 &= (l_558 = p_8)), (p_750->g_330.x = (l_745 = ((VECTOR(uint32_t, 4))(0x70D3CA3BL, 4294967295UL, 0x32DDFB4BL, 1UL)).x)))))));
    }
    l_747 = (((VECTOR(uint32_t, 16))(p_750->g_746.s4524252214630633)).s5 , p_7);
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_750->g_3 p_750->l_comm_values p_750->g_comm_values p_750->g_39 p_750->g_49 p_750->g_75 p_750->g_35 p_750->g_100 p_750->g_105 p_750->g_97 p_750->g_148 p_750->g_90 p_750->g_160 p_750->g_150 p_750->g_248 p_750->g_253 p_750->g_291 p_750->g_296 p_750->g_353 p_750->g_355 p_750->g_331 p_750->g_330 p_750->g_322 p_750->g_312 p_750->g_311 p_750->g_406 p_750->g_393 p_750->g_420
 * writes: p_750->g_comm_values p_750->g_39 p_750->g_49 p_750->g_75 p_750->g_90 p_750->g_97 p_750->g_105 p_750->g_160 p_750->g_35 p_750->g_266 p_750->g_278 p_750->g_239 p_750->g_331 p_750->g_393 p_750->g_491
 */
uint32_t  func_11(int32_t  p_12, struct S0 * p_750)
{ /* block id: 8 */
    uint32_t l_14[10][7][3] = {{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}},{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}},{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}},{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}},{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}},{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}},{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}},{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}},{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}},{{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL},{0x0EB44952L,0x4BB489F7L,0UL}}};
    int64_t *l_31 = (void*)0;
    uint32_t *l_34[5][4] = {{&p_750->g_35,&p_750->g_35,(void*)0,&p_750->g_35},{&p_750->g_35,&p_750->g_35,(void*)0,&p_750->g_35},{&p_750->g_35,&p_750->g_35,(void*)0,&p_750->g_35},{&p_750->g_35,&p_750->g_35,(void*)0,&p_750->g_35},{&p_750->g_35,&p_750->g_35,(void*)0,&p_750->g_35}};
    int32_t l_36 = 5L;
    uint32_t *l_388 = &p_750->g_105;
    int32_t l_394 = 1L;
    int32_t l_395 = 0x2BD8DAB2L;
    int32_t l_396 = (-1L);
    int32_t l_397 = (-1L);
    int32_t l_398 = 0x0A55613DL;
    int32_t l_399 = 0x2BFC484FL;
    int32_t l_400 = (-2L);
    int32_t l_401 = 0x6463645EL;
    uint32_t l_402 = 4294967288UL;
    int32_t *l_405 = (void*)0;
    VECTOR(int32_t, 8) l_417 = (VECTOR(int32_t, 8))(0x6675FF78L, (VECTOR(int32_t, 4))(0x6675FF78L, (VECTOR(int32_t, 2))(0x6675FF78L, 0x325C9C5EL), 0x325C9C5EL), 0x325C9C5EL, 0x6675FF78L, 0x325C9C5EL);
    VECTOR(int64_t, 4) l_485 = (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x46558BD61E716BA3L), 0x46558BD61E716BA3L);
    uint64_t *l_489 = (void*)0;
    uint64_t **l_488[10][10][2] = {{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}},{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}},{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}},{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}},{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}},{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}},{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}},{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}},{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}},{{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489},{&l_489,&l_489}}};
    int8_t l_502 = 0x22L;
    uint32_t l_503 = 0x73C7A16DL;
    int32_t **l_507 = &p_750->g_393;
    int32_t ***l_506 = &l_507;
    int32_t *l_508 = &l_401;
    int i, j, k;
    if ((((VECTOR(int32_t, 4))((l_14[7][6][1] , p_750->g_3), 7L, 0x51814487L, 0x302CCA7AL)).z >= ((*l_388) = (~(((((safe_sub_func_int64_t_s_s(p_12, (((VECTOR(uint16_t, 2))(0xA7DBL, 0xB697L)).odd <= ((safe_add_func_int8_t_s_s((0x2B81D4B4EA65D338L > (func_19(func_25(p_12, p_750->g_3, p_12, (l_36 |= ((p_750->g_comm_values[p_750->tid] = l_14[7][6][1]) && (safe_lshift_func_int8_t_s_s(p_750->g_3, 6)))), l_14[9][6][1], p_750), l_14[2][4][1], l_14[7][6][1], l_14[8][2][1], p_12, p_750) , l_36)), p_12)) <= p_12)))) , 0x2DL) <= p_750->g_312.s3) | p_750->g_311.sb) & 5UL)))))
    { /* block id: 141 */
        int32_t **l_389 = (void*)0;
        int32_t *l_391 = (void*)0;
        int32_t **l_390[4];
        int32_t *l_392 = &l_36;
        int i;
        for (i = 0; i < 4; i++)
            l_390[i] = &l_391;
        p_750->g_393 = (l_392 = (void*)0);
        --l_402;
        l_405 = (void*)0;
    }
    else
    { /* block id: 146 */
        int8_t *l_412 = (void*)0;
        int32_t l_413 = 0x55DF97E1L;
        VECTOR(uint8_t, 4) l_414 = (VECTOR(uint8_t, 4))(0x9AL, (VECTOR(uint8_t, 2))(0x9AL, 7UL), 7UL);
        int32_t *l_423 = &l_394;
        VECTOR(int16_t, 4) l_483 = (VECTOR(int16_t, 4))(0x0BB8L, (VECTOR(int16_t, 2))(0x0BB8L, 0x50BFL), 0x50BFL);
        int16_t l_484 = (-8L);
        int i;
        (*l_423) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_750->g_406.s73)), (safe_rshift_func_int8_t_s_u(p_12, (safe_unary_minus_func_int32_t_s((((safe_rshift_func_int16_t_s_s((((VECTOR(uint64_t, 8))((l_412 == (void*)0), 0x90034A3CD5C0C3C9L, 1UL, 1UL, ((VECTOR(uint64_t, 2))(0x1D2CEAF3839EF0E1L, 18446744073709551615UL)).even, 0xB6983B3E5581B719L, 0x276ECFAB23D29D25L, 0x8F0C52643BBD13CEL)).s2 , p_12), 12)) , ((FAKE_DIVERGE(p_750->global_1_offset, get_global_id(1), 10) != 7L) == ((*p_750->g_393) = l_413))) , (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_414.zx)), (l_413 = (safe_sub_func_int32_t_s_s(((((VECTOR(int32_t, 4))(l_417.s4317)).z & (safe_add_func_uint32_t_u_u((&p_750->g_353 != p_750->g_420), 0x580B044CL))) , 5L), l_413))), 0x9EL, l_413, 255UL, 253UL, 6UL)).s6 > p_750->g_322.y)))))), (-1L), ((VECTOR(int32_t, 4))((-1L))))).s0;
        if ((atomic_inc(&p_750->l_atomic_input[74]) == 1))
        { /* block id: 151 */
            int32_t l_424[3][5] = {{0x607780E1L,0x371C31A4L,0x607780E1L,0x607780E1L,0x371C31A4L},{0x607780E1L,0x371C31A4L,0x607780E1L,0x607780E1L,0x371C31A4L},{0x607780E1L,0x371C31A4L,0x607780E1L,0x607780E1L,0x371C31A4L}};
            int32_t l_477 = (-10L);
            uint32_t l_478 = 0xA200D6A1L;
            int i, j;
            for (l_424[2][3] = 0; (l_424[2][3] <= 28); l_424[2][3] = safe_add_func_uint8_t_u_u(l_424[2][3], 8))
            { /* block id: 154 */
                VECTOR(int32_t, 2) l_427 = (VECTOR(int32_t, 2))((-2L), 0x5A9FEF25L);
                int32_t l_428[2][8] = {{0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL},{0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL,0x78F23D9EL}};
                VECTOR(uint64_t, 8) l_429 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL);
                VECTOR(uint64_t, 8) l_430 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xD4A6291E917E427EL), 0xD4A6291E917E427EL), 0xD4A6291E917E427EL, 0UL, 0xD4A6291E917E427EL);
                VECTOR(uint64_t, 4) l_431 = (VECTOR(uint64_t, 4))(0x2A32509B9BD92CF5L, (VECTOR(uint64_t, 2))(0x2A32509B9BD92CF5L, 18446744073709551606UL), 18446744073709551606UL);
                VECTOR(uint64_t, 16) l_432 = (VECTOR(uint64_t, 16))(0x8923D6EF1731AC90L, (VECTOR(uint64_t, 4))(0x8923D6EF1731AC90L, (VECTOR(uint64_t, 2))(0x8923D6EF1731AC90L, 0xA7DD82D9A2191D5CL), 0xA7DD82D9A2191D5CL), 0xA7DD82D9A2191D5CL, 0x8923D6EF1731AC90L, 0xA7DD82D9A2191D5CL, (VECTOR(uint64_t, 2))(0x8923D6EF1731AC90L, 0xA7DD82D9A2191D5CL), (VECTOR(uint64_t, 2))(0x8923D6EF1731AC90L, 0xA7DD82D9A2191D5CL), 0x8923D6EF1731AC90L, 0xA7DD82D9A2191D5CL, 0x8923D6EF1731AC90L, 0xA7DD82D9A2191D5CL);
                int32_t l_433 = 1L;
                VECTOR(uint64_t, 2) l_434 = (VECTOR(uint64_t, 2))(5UL, 0xFC3BAB70BA5D4574L);
                VECTOR(int8_t, 2) l_435 = (VECTOR(int8_t, 2))(0x5EL, 0x6FL);
                uint32_t l_436 = 4294967295UL;
                uint32_t l_437 = 4294967293UL;
                VECTOR(int32_t, 2) l_438 = (VECTOR(int32_t, 2))(5L, 1L);
                uint8_t l_439 = 0x00L;
                int32_t *l_440[4][8][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                l_439 |= ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_427.xy)), (l_436 = (((VECTOR(uint64_t, 16))((l_428[1][0] |= GROUP_DIVERGE(2, 1)), ((VECTOR(uint64_t, 8))(0UL, ((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_429.s07)).hi, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_430.s1245526546457105)).sad)), 0UL)).yyzzyxzwwxzywwxw)).s7afa))), 18446744073709551607UL, 6UL, 0UL)), ((VECTOR(uint64_t, 4))(l_431.xwyx)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 8))(l_432.sa52ac355)).even, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(1UL, 18446744073709551614UL, l_433, 18446744073709551615UL, 0x9A96BF836AE0CC63L, 0xD0EB130E4AB70DEAL, 18446744073709551608UL, ((VECTOR(uint64_t, 8))(l_434.yyxyyxxx)), 0x59A288793AEF4130L)).even)).s06)).xyyx)).hi)).yyxx))).odd)), 5UL)).se , l_435.y)), l_437, (-4L), 0x4A30D541L, (-1L), 0x592C49BDL)).s60, ((VECTOR(int32_t, 8))(l_438.yxxxyyyy)).s46))).lo;
                l_440[2][4][5] = (void*)0;
            }
            for (l_424[0][3] = 24; (l_424[0][3] <= 6); l_424[0][3] = safe_sub_func_int64_t_s_s(l_424[0][3], 8))
            { /* block id: 162 */
                int32_t l_443 = (-1L);
                VECTOR(int32_t, 2) l_460 = (VECTOR(int32_t, 2))((-5L), 1L);
                VECTOR(int32_t, 8) l_461 = (VECTOR(int32_t, 8))(0x17E18433L, (VECTOR(int32_t, 4))(0x17E18433L, (VECTOR(int32_t, 2))(0x17E18433L, 0x402B01B8L), 0x402B01B8L), 0x402B01B8L, 0x17E18433L, 0x402B01B8L);
                VECTOR(int32_t, 4) l_462 = (VECTOR(int32_t, 4))(0x3A09FBA9L, (VECTOR(int32_t, 2))(0x3A09FBA9L, 1L), 1L);
                VECTOR(int32_t, 2) l_463 = (VECTOR(int32_t, 2))((-1L), (-1L));
                VECTOR(int32_t, 2) l_464 = (VECTOR(int32_t, 2))((-3L), 0x3C471886L);
                uint32_t l_465 = 0x2B3D9FC3L;
                VECTOR(int32_t, 8) l_466 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x54C5336EL), 0x54C5336EL), 0x54C5336EL, 0L, 0x54C5336EL);
                VECTOR(int32_t, 4) l_467 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x50978D50L), 0x50978D50L);
                VECTOR(int32_t, 16) l_468 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7B8392A8L), 0x7B8392A8L), 0x7B8392A8L, (-1L), 0x7B8392A8L, (VECTOR(int32_t, 2))((-1L), 0x7B8392A8L), (VECTOR(int32_t, 2))((-1L), 0x7B8392A8L), (-1L), 0x7B8392A8L, (-1L), 0x7B8392A8L);
                int i;
                for (l_443 = 0; (l_443 < (-5)); l_443--)
                { /* block id: 165 */
                    VECTOR(int8_t, 16) l_446 = (VECTOR(int8_t, 16))(0x0BL, (VECTOR(int8_t, 4))(0x0BL, (VECTOR(int8_t, 2))(0x0BL, 0x37L), 0x37L), 0x37L, 0x0BL, 0x37L, (VECTOR(int8_t, 2))(0x0BL, 0x37L), (VECTOR(int8_t, 2))(0x0BL, 0x37L), 0x0BL, 0x37L, 0x0BL, 0x37L);
                    uint8_t l_447[7] = {0x40L,255UL,0x40L,0x40L,255UL,0x40L,0x40L};
                    int i;
                    l_447[2] = l_446.sb;
                    for (l_447[1] = (-17); (l_447[1] < 56); l_447[1] = safe_add_func_uint16_t_u_u(l_447[1], 9))
                    { /* block id: 169 */
                        int32_t l_451[4][6][10] = {{{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)}},{{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)}},{{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)}},{{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)},{(-4L),(-8L),3L,0x1FFEE902L,(-4L),0x1FFEE902L,3L,(-8L),(-4L),(-10L)}}};
                        int32_t *l_450 = &l_451[2][0][7];
                        int32_t *l_452 = &l_451[2][0][7];
                        int i, j, k;
                        l_452 = l_450;
                    }
                    for (l_446.s4 = 4; (l_446.s4 != 29); ++l_446.s4)
                    { /* block id: 174 */
                        uint32_t l_455 = 0xC23C2A44L;
                        int16_t l_456 = 0x52EFL;
                        VECTOR(int32_t, 2) l_457 = (VECTOR(int32_t, 2))(0x1FC9DAC2L, 0x7CCBAA7EL);
                        int32_t *l_458 = (void*)0;
                        int64_t l_459 = 1L;
                        int i;
                        l_456 = l_455;
                        l_457.x = ((VECTOR(int32_t, 16))(l_457.xyyxyyyxxyxyyxyy)).s1;
                        l_458 = (void*)0;
                        l_459 = 0x12252F39L;
                    }
                }
                if (((VECTOR(int32_t, 8))(0x5329C661L, ((VECTOR(int32_t, 2))(l_460.yy)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_461.s1316)).odd, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_462.zzyyzxzyzyxzyzwz)).sc99e, ((VECTOR(int32_t, 2))(0x6FD6DD8CL, (-7L))).xyxy))).hi))), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(l_463.xxyxyxyxyxxxyxyy)), ((VECTOR(int32_t, 2))(l_464.xx)).xyxyxxyyyxyxyxxy))).s2d, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_465, ((VECTOR(int32_t, 2))(l_466.s43)).odd, ((VECTOR(int32_t, 4))(l_467.yzxz)), 0x45B6903FL, 0x08F425E8L)))).lo)).odd, ((VECTOR(int32_t, 4))(l_468.sfb10)).odd))), 1L)).s3)
                { /* block id: 181 */
                    int32_t l_470 = 0x24CB222FL;
                    int32_t *l_469 = &l_470;
                    l_469 = (void*)0;
                }
                else
                { /* block id: 183 */
                    int32_t l_471 = (-1L);
                    int32_t l_472 = (-1L);
                    int64_t l_473 = 0x7088FAEE935C2AB1L;
                    int16_t l_474 = 0x3F6CL;
                    uint32_t l_475[1];
                    VECTOR(int32_t, 16) l_476 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x4AEB2BA3L), 0x4AEB2BA3L), 0x4AEB2BA3L, (-4L), 0x4AEB2BA3L, (VECTOR(int32_t, 2))((-4L), 0x4AEB2BA3L), (VECTOR(int32_t, 2))((-4L), 0x4AEB2BA3L), (-4L), 0x4AEB2BA3L, (-4L), 0x4AEB2BA3L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_475[i] = 5UL;
                    l_460.x = (l_461.s5 = l_471);
                    l_464.x = (((l_473 = l_472) , l_474) , (l_468.sa = (l_475[0] , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_476.sea)).xyyyxxxxxxyyyyxx)).s1)));
                }
            }
            l_478++;
            unsigned int result = 0;
            int l_424_i0, l_424_i1;
            for (l_424_i0 = 0; l_424_i0 < 3; l_424_i0++) {
                for (l_424_i1 = 0; l_424_i1 < 5; l_424_i1++) {
                    result += l_424[l_424_i0][l_424_i1];
                }
            }
            result += l_477;
            result += l_478;
            atomic_add(&p_750->l_special_values[74], result);
        }
        else
        { /* block id: 192 */
            (1 + 1);
        }
        (*p_750->g_393) = (~((l_484 &= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_483.wwwzywxy)).s57)).lo) < (((VECTOR(int64_t, 2))(l_485.wy)).hi , (!(0x4127450CL <= (*p_750->g_393))))));
    }
    for (p_750->g_49 = (-4); (p_750->g_49 == 23); p_750->g_49 = safe_add_func_uint64_t_u_u(p_750->g_49, 6))
    { /* block id: 200 */
        uint64_t ***l_490[6][2] = {{&l_488[6][3][0],&l_488[6][7][0]},{&l_488[6][3][0],&l_488[6][7][0]},{&l_488[6][3][0],&l_488[6][7][0]},{&l_488[6][3][0],&l_488[6][7][0]},{&l_488[6][3][0],&l_488[6][7][0]},{&l_488[6][3][0],&l_488[6][7][0]}};
        int32_t l_493 = 0x0B499ECDL;
        int32_t *l_496 = &l_36;
        int32_t *l_497 = &p_750->g_39;
        int32_t *l_498 = (void*)0;
        int32_t *l_499 = &p_750->g_39;
        int32_t *l_500 = (void*)0;
        int32_t *l_501[3][8] = {{&l_394,&l_394,(void*)0,&p_750->g_39,(void*)0,&p_750->g_39,(void*)0,&l_394},{&l_394,&l_394,(void*)0,&p_750->g_39,(void*)0,&p_750->g_39,(void*)0,&l_394},{&l_394,&l_394,(void*)0,&p_750->g_39,(void*)0,&p_750->g_39,(void*)0,&l_394}};
        int i, j;
        p_750->g_491 = l_488[2][5][1];
        if (l_493)
            continue;
        for (l_402 = 0; (l_402 == 6); l_402 = safe_add_func_int8_t_s_s(l_402, 5))
        { /* block id: 205 */
            return p_12;
        }
        --l_503;
    }
    (*l_508) = (&l_405 != ((*l_506) = &l_405));
    (**l_506) = (void*)0;
    return p_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_750->g_39 p_750->g_49 p_750->l_comm_values p_750->g_75 p_750->g_comm_values p_750->g_35 p_750->g_100 p_750->g_105 p_750->g_97 p_750->g_148 p_750->g_90 p_750->g_3 p_750->g_160 p_750->g_150 p_750->g_248 p_750->g_253 p_750->g_291 p_750->g_296 p_750->g_353 p_750->g_355 p_750->g_331 p_750->g_330 p_750->g_322
 * writes: p_750->g_39 p_750->g_49 p_750->g_75 p_750->g_90 p_750->g_97 p_750->g_105 p_750->g_160 p_750->g_35 p_750->g_266 p_750->g_278 p_750->g_239 p_750->g_331
 */
uint8_t  func_19(uint8_t  p_20, int8_t  p_21, int16_t  p_22, uint32_t  p_23, int64_t  p_24, struct S0 * p_750)
{ /* block id: 14 */
    int32_t *l_38 = &p_750->g_39;
    int32_t *l_40 = &p_750->g_39;
    int32_t *l_41 = (void*)0;
    int32_t *l_42 = &p_750->g_39;
    int32_t *l_43 = &p_750->g_39;
    int32_t *l_44 = &p_750->g_39;
    int32_t *l_45 = &p_750->g_39;
    int32_t *l_46 = &p_750->g_39;
    int32_t *l_47[1];
    int64_t l_48 = (-2L);
    uint32_t **l_303 = &p_750->g_291;
    uint32_t l_315 = 4294967295UL;
    int32_t **l_333 = &l_40;
    int8_t *l_352 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_47[i] = &p_750->g_39;
    (*l_38) &= (-3L);
    p_750->g_49--;
    for (p_24 = (-4); (p_24 != (-12)); p_24 = safe_sub_func_int32_t_s_s(p_24, 8))
    { /* block id: 19 */
        uint8_t *l_69 = &p_750->g_49;
        uint16_t *l_74 = &p_750->g_75[0][1][2];
        int64_t *l_267 = &l_48;
        uint32_t *l_290 = (void*)0;
        VECTOR(uint32_t, 4) l_297 = (VECTOR(uint32_t, 4))(0xD213919CL, (VECTOR(uint32_t, 2))(0xD213919CL, 0x48B72D27L), 0x48B72D27L);
        int8_t *l_304 = (void*)0;
        int8_t *l_305[2];
        VECTOR(int32_t, 16) l_306 = (VECTOR(int32_t, 16))(0x5C83A24BL, (VECTOR(int32_t, 4))(0x5C83A24BL, (VECTOR(int32_t, 2))(0x5C83A24BL, 0x17616899L), 0x17616899L), 0x17616899L, 0x5C83A24BL, 0x17616899L, (VECTOR(int32_t, 2))(0x5C83A24BL, 0x17616899L), (VECTOR(int32_t, 2))(0x5C83A24BL, 0x17616899L), 0x5C83A24BL, 0x17616899L, 0x5C83A24BL, 0x17616899L);
        VECTOR(int32_t, 16) l_307 = (VECTOR(int32_t, 16))(0x3D5A3E0DL, (VECTOR(int32_t, 4))(0x3D5A3E0DL, (VECTOR(int32_t, 2))(0x3D5A3E0DL, 0x7EB74050L), 0x7EB74050L), 0x7EB74050L, 0x3D5A3E0DL, 0x7EB74050L, (VECTOR(int32_t, 2))(0x3D5A3E0DL, 0x7EB74050L), (VECTOR(int32_t, 2))(0x3D5A3E0DL, 0x7EB74050L), 0x3D5A3E0DL, 0x7EB74050L, 0x3D5A3E0DL, 0x7EB74050L);
        VECTOR(int32_t, 16) l_308 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x06A5EAA2L), 0x06A5EAA2L), 0x06A5EAA2L, 0L, 0x06A5EAA2L, (VECTOR(int32_t, 2))(0L, 0x06A5EAA2L), (VECTOR(int32_t, 2))(0L, 0x06A5EAA2L), 0L, 0x06A5EAA2L, 0L, 0x06A5EAA2L);
        VECTOR(int32_t, 4) l_309 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x786AAB91L), 0x786AAB91L);
        VECTOR(uint16_t, 4) l_310 = (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0xF259L), 0xF259L);
        VECTOR(uint16_t, 4) l_327 = (VECTOR(uint16_t, 4))(0x9F8DL, (VECTOR(uint16_t, 2))(0x9F8DL, 0x38E6L), 0x38E6L);
        int32_t **l_332[9];
        int16_t l_339 = 1L;
        int32_t l_340 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_305[i] = (void*)0;
        for (i = 0; i < 9; i++)
            l_332[i] = (void*)0;
        (*l_42) = ((safe_add_func_int64_t_s_s((l_45 != &p_750->g_3), func_56(func_62((l_267 = (p_750->g_266 = func_65(((*l_69) ^= p_750->l_comm_values[(safe_mod_func_uint32_t_u_u(p_750->tid, 2))]), (safe_rshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((*l_40), ((*l_74)++))) != (p_750->g_comm_values[p_750->tid] < 0xD318EE11L)), p_750->g_35)), p_750->g_35, p_750))), &p_750->g_3, p_750), p_750->l_comm_values[(safe_mod_func_uint32_t_u_u(p_750->tid, 2))], l_290, p_750->g_291, p_23, p_750))) , p_750->g_39);
        p_750->g_90.x = 0x56A1F0ADL;
        (*l_40) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x5E10BE39L, 3L)).yyxyxxyy, ((VECTOR(int32_t, 4))((safe_sub_func_int8_t_s_s((p_21 = (safe_mul_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(1UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_750->g_296.yz)).xyyy)).zwyxzywwywwxxwyx, ((VECTOR(uint32_t, 16))(l_297.wxzyywzwwyzwywwy))))).s13)), 0UL, 0xE4434653L, ((VECTOR(uint32_t, 4))((safe_mod_func_uint32_t_u_u(((l_297.z > (++(*l_74))) && (*l_42)), l_297.x)), (safe_unary_minus_func_uint32_t_u(((+p_21) || FAKE_DIVERGE(p_750->global_0_offset, get_global_id(0), 10)))), 0x7893A2BEL, 4294967295UL)))).odd)), 4294967288UL, 0xD9EB6B44L, 0x2A175853L)).s3, (l_303 != l_303)))), ((GROUP_DIVERGE(1, 1) <= (~0xBC13L)) && ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_306.s9cc0)).lo, ((VECTOR(int32_t, 2))(l_307.s46))))).hi))), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(l_308.s73)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(l_309.wy)).xxxxxxxy, ((VECTOR(int32_t, 8))(0x2BA46CA4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))((-6L), (-1L), 0x65F4L, 0x6CB1L)).xzxwzwxwxxxxxyyz, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))(l_310.wwyy)), ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(p_750->g_311.sf1)).xxxy, ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 16))(p_750->g_312.s4347546233476366)), ((VECTOR(uint16_t, 16))(0x2F18L, 0UL, 65528UL, (safe_rshift_func_uint8_t_u_u(((*l_40) <= 0x7082L), l_315)), p_750->g_311.sf, 0x622CL, 0UL, 65534UL, GROUP_DIVERGE(2, 1), ((VECTOR(uint16_t, 4))(6UL)), 1UL, 0xBCB5L, 1UL))))).s1bee))).wzwwywzzwxzzxyxx, ((VECTOR(uint16_t, 16))(65528UL)), ((VECTOR(uint16_t, 16))(6UL))))).scc, (uint16_t)FAKE_DIVERGE(p_750->global_0_offset, get_global_id(0), 10)))).yxyy, ((VECTOR(uint16_t, 4))(0x257BL))))), p_750->g_150.s2, (*l_40), 1UL, 0xAF8BL)))).lo)).hi)).yxyxyyyxxxyyxxxy))).hi, ((VECTOR(int32_t, 8))((-1L)))))).even)), ((VECTOR(int32_t, 2))((-3L))), 1L, 9L, ((VECTOR(int32_t, 4))(0x16FF692CL)), 0x06810A47L, 1L, 1L)).s50, ((VECTOR(int32_t, 2))(0x7F822788L)), ((VECTOR(int32_t, 2))(0x18FD823BL))))), 1L, (-5L))), 7L, 0x3E17FFDAL, 6L))))).lo, (int32_t)p_750->g_296.x, (int32_t)1L))).lo))), 0L)).xxwzxyyx, ((VECTOR(int32_t, 8))((-5L)))))).s0053247230022356)).s7;
        for (p_20 = 28; (p_20 >= 23); p_20 = safe_sub_func_int8_t_s_s(p_20, 7))
        { /* block id: 119 */
            VECTOR(uint16_t, 2) l_326 = (VECTOR(uint16_t, 2))(0x0CE3L, 0xF9C2L);
            uint32_t l_336 = 0x0C77B6BFL;
            int32_t l_337 = (-5L);
            int32_t l_338[1];
            uint8_t l_341 = 0x3CL;
            VECTOR(int8_t, 16) l_363 = (VECTOR(int8_t, 16))(0x60L, (VECTOR(int8_t, 4))(0x60L, (VECTOR(int8_t, 2))(0x60L, 0L), 0L), 0L, 0x60L, 0L, (VECTOR(int8_t, 2))(0x60L, 0L), (VECTOR(int8_t, 2))(0x60L, 0L), 0x60L, 0L, 0x60L, 0L);
            int i;
            for (i = 0; i < 1; i++)
                l_338[i] = 0x2A5830FCL;
            l_336 |= ((((safe_rshift_func_int16_t_s_u(((*l_42) , (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_750->g_322.yyxxyyxyxyyyyxxx)))).s1c, ((VECTOR(int64_t, 8))(p_750->g_323.s70347026)).s53, ((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(2L, 6L)).xyyy)).zxywwwzy, (int64_t)p_22))).s65))).even, ((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(0UL, 0x7FE7L, ((VECTOR(uint16_t, 2))(l_326.xx)), 65535UL, 2UL, 65535UL, 65530UL)).lo, ((VECTOR(uint16_t, 4))(l_327.yxzz))))).w, 6)) != (-4L))))), 2)) <= (((VECTOR(uint32_t, 8))(p_750->g_330.yzwxzwxw)).s7 > (((VECTOR(uint64_t, 4))(p_750->g_331.xyyx)).z >= (((l_333 = l_332[0]) == (FAKE_DIVERGE(p_750->local_1_offset, get_local_id(1), 10) , &l_38)) < p_750->l_comm_values[(safe_mod_func_uint32_t_u_u(p_750->tid, 2))])))) <= (l_326.y && l_326.x)) , ((safe_mul_func_int16_t_s_s(((void*)0 == l_332[8]), (-1L))) , (-7L)));
            if (l_326.y)
                break;
            ++l_341;
            for (p_750->g_35 = 9; (p_750->g_35 > 38); p_750->g_35++)
            { /* block id: 126 */
                int8_t **l_354 = &l_305[1];
                VECTOR(uint8_t, 16) l_360 = (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0xF4L), 0xF4L), 0xF4L, 7UL, 0xF4L, (VECTOR(uint8_t, 2))(7UL, 0xF4L), (VECTOR(uint8_t, 2))(7UL, 0xF4L), 7UL, 0xF4L, 7UL, 0xF4L);
                uint64_t *l_366 = (void*)0;
                uint64_t *l_367 = (void*)0;
                uint64_t *l_368 = (void*)0;
                uint64_t *l_369 = (void*)0;
                uint64_t *l_370 = (void*)0;
                uint64_t *l_371 = (void*)0;
                uint64_t *l_372 = (void*)0;
                uint64_t *l_373 = (void*)0;
                uint64_t *l_374 = (void*)0;
                uint64_t *l_375 = (void*)0;
                uint64_t *l_376 = (void*)0;
                uint64_t *l_377 = (void*)0;
                uint64_t *l_378 = (void*)0;
                uint64_t *l_379 = (void*)0;
                uint64_t *l_380[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int32_t l_387 = 0x5D1D5FDCL;
                int i, j;
                if (p_750->g_296.x)
                    break;
                if (p_20)
                    continue;
                l_338[0] |= ((*l_44) &= (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((+((*l_74) = (l_352 != ((*l_354) = p_750->g_353)))), ((VECTOR(int16_t, 8))(p_750->g_355.xxyyxxxx)).s4)) < ((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(255UL, ((VECTOR(uint8_t, 16))(l_360.s8590970e6db23deb)).s1)), (((l_387 &= ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_363.s33)).odd, (safe_mul_func_int16_t_s_s((0xA2L <= p_21), (((++p_750->g_331.x) ^ (p_750->g_253[2] != p_750->g_253[2])) > (((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((4294967295UL | (((*l_69) = 0x01L) >= 0x06L)), p_20)), 0x6539L)) >= p_23) , l_336)))))) < p_24)) && p_20) || p_750->g_330.z))) >= l_360.s6)), p_21)) > p_750->g_322.y), 1L)));
            }
        }
    }
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_750->l_comm_values p_750->g_comm_values
 * writes:
 */
uint8_t  func_25(uint32_t  p_26, uint32_t  p_27, uint64_t  p_28, uint32_t  p_29, int32_t  p_30, struct S0 * p_750)
{ /* block id: 11 */
    int64_t l_37[1];
    int i;
    for (i = 0; i < 1; i++)
        l_37[i] = 1L;
    l_37[0] = p_750->l_comm_values[(safe_mod_func_uint32_t_u_u(p_750->tid, 2))];
    return p_750->g_comm_values[p_750->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_750->g_150
 * writes:
 */
uint64_t  func_56(uint32_t * p_57, uint8_t  p_58, uint32_t * p_59, uint32_t * p_60, int16_t  p_61, struct S0 * p_750)
{ /* block id: 110 */
    return p_750->g_150.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_750->g_3 p_750->g_150
 * writes: p_750->g_278 p_750->g_75 p_750->g_105 p_750->g_239
 */
uint32_t * func_62(int64_t * p_63, int32_t * p_64, struct S0 * p_750)
{ /* block id: 102 */
    int32_t *l_269 = (void*)0;
    int32_t **l_268 = &l_269;
    int16_t *l_276[2];
    int16_t **l_277[4][9] = {{&l_276[0],&l_276[0],(void*)0,&l_276[1],&l_276[1],&l_276[1],(void*)0,&l_276[0],&l_276[0]},{&l_276[0],&l_276[0],(void*)0,&l_276[1],&l_276[1],&l_276[1],(void*)0,&l_276[0],&l_276[0]},{&l_276[0],&l_276[0],(void*)0,&l_276[1],&l_276[1],&l_276[1],(void*)0,&l_276[0],&l_276[0]},{&l_276[0],&l_276[0],(void*)0,&l_276[1],&l_276[1],&l_276[1],(void*)0,&l_276[0],&l_276[0]}};
    uint16_t *l_279 = &p_750->g_75[0][1][2];
    VECTOR(int64_t, 2) l_282 = (VECTOR(int64_t, 2))(0x6A3D496635388A1EL, 0x6F58C2C69E6B9A1AL);
    uint32_t l_283 = 0x09B08893L;
    int32_t **l_284 = (void*)0;
    uint32_t *l_285 = &p_750->g_105;
    int16_t l_286[6];
    int32_t *l_287 = (void*)0;
    int32_t *l_288 = (void*)0;
    int32_t *l_289[8] = {&p_750->g_39,&p_750->g_39,&p_750->g_39,&p_750->g_39,&p_750->g_39,&p_750->g_39,&p_750->g_39,&p_750->g_39};
    int i, j;
    for (i = 0; i < 2; i++)
        l_276[i] = &p_750->g_160;
    for (i = 0; i < 6; i++)
        l_286[i] = 0L;
    (*l_268) = p_64;
    p_750->g_239.x = (safe_div_func_int32_t_s_s((((~(safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((p_750->g_278[1] = l_276[1]) == ((**l_268) , &p_750->g_160)), (1L && ((((*l_279) = 0x0A05L) | (safe_mod_func_uint64_t_u_u((**l_268), ((VECTOR(int64_t, 16))(l_282.xxyxxyxyyyyxxxyy)).se))) ^ (l_283 , ((**l_268) < ((*l_285) = ((l_284 = &p_64) == &l_269)))))))), l_286[2]))) , p_750->g_150.s1) ^ (**l_268)), (**l_268)));
    return l_288;
}


/* ------------------------------------------ */
/* 
 * reads : p_750->g_39 p_750->g_49 p_750->g_75 p_750->g_90 p_750->l_comm_values p_750->g_comm_values p_750->g_35 p_750->g_3 p_750->g_100 p_750->g_105 p_750->g_97 p_750->g_148 p_750->g_150 p_750->g_160 p_750->g_239 p_750->g_248 p_750->g_253
 * writes: p_750->g_39 p_750->g_35 p_750->g_97 p_750->g_90 p_750->g_105 p_750->g_150 p_750->g_160 p_750->g_75 p_750->g_49
 */
int64_t * func_65(uint8_t  p_66, uint32_t  p_67, int64_t  p_68, struct S0 * p_750)
{ /* block id: 22 */
    int32_t l_106 = (-1L);
    int32_t l_108 = 0x03B76DB0L;
    uint64_t l_157 = 0xC88F8C1251048636L;
    uint64_t l_165 = 0x3ED8970B6291A480L;
    int32_t l_230 = 0x08CDEDC7L;
    int64_t l_231 = 0x7BD36F7DA083C917L;
    int32_t l_232 = 0x6CD1D29FL;
    VECTOR(uint64_t, 2) l_242 = (VECTOR(uint64_t, 2))(18446744073709551612UL, 0UL);
    int16_t *l_250 = &p_750->g_160;
    uint32_t *l_261 = &p_750->g_105;
    int64_t *l_265 = (void*)0;
    int i;
    for (p_750->g_39 = 3; (p_750->g_39 == (-16)); p_750->g_39--)
    { /* block id: 25 */
        VECTOR(int64_t, 8) l_82 = (VECTOR(int64_t, 8))(0x51A88BB409C3C7D9L, (VECTOR(int64_t, 4))(0x51A88BB409C3C7D9L, (VECTOR(int64_t, 2))(0x51A88BB409C3C7D9L, 3L), 3L), 3L, 0x51A88BB409C3C7D9L, 3L);
        uint32_t *l_99 = &p_750->g_97;
        uint32_t **l_98 = &l_99;
        uint32_t *l_102 = &p_750->g_97;
        uint32_t *l_103 = (void*)0;
        uint32_t *l_104[10][9][2] = {{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}},{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}},{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}},{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}},{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}},{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}},{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}},{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}},{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}},{{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0},{&p_750->g_105,(void*)0}}};
        uint16_t *l_107[2];
        int64_t *l_125 = (void*)0;
        int8_t l_127 = 0x0DL;
        int32_t l_138 = (-7L);
        VECTOR(int8_t, 16) l_154 = (VECTOR(int8_t, 16))(0x0DL, (VECTOR(int8_t, 4))(0x0DL, (VECTOR(int8_t, 2))(0x0DL, 0x36L), 0x36L), 0x36L, 0x0DL, 0x36L, (VECTOR(int8_t, 2))(0x0DL, 0x36L), (VECTOR(int8_t, 2))(0x0DL, 0x36L), 0x0DL, 0x36L, 0x0DL, 0x36L);
        int32_t l_155 = (-1L);
        int32_t l_156[9] = {0x0B0E1DEEL,0x0B0E1DEEL,0x0B0E1DEEL,0x0B0E1DEEL,0x0B0E1DEEL,0x0B0E1DEEL,0x0B0E1DEEL,0x0B0E1DEEL,0x0B0E1DEEL};
        VECTOR(uint32_t, 2) l_207 = (VECTOR(uint32_t, 2))(0xF9C8F579L, 0x9B8D13D5L);
        VECTOR(int64_t, 4) l_246 = (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 3L), 3L);
        uint64_t *l_247 = (void*)0;
        uint8_t *l_256 = &p_750->g_49;
        int32_t *l_263 = &l_138;
        int32_t **l_262 = &l_263;
        VECTOR(int32_t, 8) l_264 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x765EF6CEL), 0x765EF6CEL), 0x765EF6CEL, 1L, 0x765EF6CEL);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_107[i] = &p_750->g_75[0][1][2];
        if (((func_25(p_750->g_49, ((safe_lshift_func_int8_t_s_s(p_750->g_75[0][0][3], 3)) , ((((VECTOR(int64_t, 2))(l_82.s04)).odd & (((l_106 = ((safe_lshift_func_uint16_t_u_u(func_25(((*l_102) = (((*l_98) = func_85(p_67, p_750)) == p_750->g_100)), (p_750->g_105 &= 0UL), p_750->g_39, func_25(l_82.s7, p_68, l_106, p_750->g_49, l_106, p_750), p_67, p_750), l_106)) >= 0x8AL)) || 0x3E33L) <= l_82.s5)) , 6UL)), l_108, p_66, p_67, p_750) || 0x3FB7CDA3L) || 0L))
        { /* block id: 35 */
            int32_t *l_109 = &l_106;
            uint8_t *l_128[9] = {&p_750->g_49,&p_750->g_49,&p_750->g_49,&p_750->g_49,&p_750->g_49,&p_750->g_49,&p_750->g_49,&p_750->g_49,&p_750->g_49};
            int i;
            (*l_109) = (-1L);
            for (p_750->g_105 = 0; (p_750->g_105 == 18); p_750->g_105++)
            { /* block id: 39 */
                uint32_t l_122 = 0xED184ED8L;
                int64_t **l_126 = &l_125;
                int32_t **l_129[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_129[i] = &l_109;
                l_109 = func_85(((safe_rshift_func_uint16_t_u_s((((((safe_rshift_func_int16_t_s_u((func_25(((safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(func_25(((safe_add_func_uint64_t_u_u(18446744073709551610UL, l_122)) , (safe_rshift_func_int8_t_s_s(p_68, (((*l_126) = l_125) == (void*)0)))), l_82.s3, l_106, p_750->g_35, l_122, p_750), p_750->l_comm_values[(safe_mod_func_uint32_t_u_u(p_750->tid, 2))])), p_68)) == p_67), l_82.s4, l_127, l_82.s5, p_750->g_97, p_750) || (*l_109)), 10)) && p_750->g_49) > (-1L)) , &p_66) == l_128[1]), l_122)) ^ l_122), p_750);
            }
        }
        else
        { /* block id: 43 */
            int8_t l_139 = 2L;
            VECTOR(int8_t, 16) l_149 = (VECTOR(int8_t, 16))(0x63L, (VECTOR(int8_t, 4))(0x63L, (VECTOR(int8_t, 2))(0x63L, 0x40L), 0x40L), 0x40L, 0x63L, 0x40L, (VECTOR(int8_t, 2))(0x63L, 0x40L), (VECTOR(int8_t, 2))(0x63L, 0x40L), 0x63L, 0x40L, 0x63L, 0x40L);
            int32_t l_161[1][6][4] = {{{0x5BFEEEC8L,0x709B1759L,0x5BFEEEC8L,0x5BFEEEC8L},{0x5BFEEEC8L,0x709B1759L,0x5BFEEEC8L,0x5BFEEEC8L},{0x5BFEEEC8L,0x709B1759L,0x5BFEEEC8L,0x5BFEEEC8L},{0x5BFEEEC8L,0x709B1759L,0x5BFEEEC8L,0x5BFEEEC8L},{0x5BFEEEC8L,0x709B1759L,0x5BFEEEC8L,0x5BFEEEC8L},{0x5BFEEEC8L,0x709B1759L,0x5BFEEEC8L,0x5BFEEEC8L}}};
            VECTOR(int16_t, 4) l_164 = (VECTOR(int16_t, 4))(0x7EEBL, (VECTOR(int16_t, 2))(0x7EEBL, 1L), 1L);
            VECTOR(uint8_t, 8) l_205 = (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0xBFL), 0xBFL), 0xBFL, 247UL, 0xBFL);
            int32_t **l_236 = (void*)0;
            int32_t *l_238[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t **l_237 = &l_238[0][8];
            int i, j, k;
            for (p_68 = 0; (p_68 > (-14)); p_68 = safe_sub_func_uint32_t_u_u(p_68, 6))
            { /* block id: 46 */
                VECTOR(int8_t, 2) l_151 = (VECTOR(int8_t, 2))((-5L), 0x3BL);
                int8_t *l_152 = (void*)0;
                int8_t *l_153[8][1][6];
                int32_t l_158 = 0x128F9B6AL;
                int16_t *l_159 = &p_750->g_160;
                VECTOR(int8_t, 2) l_204 = (VECTOR(int8_t, 2))((-2L), 0L);
                VECTOR(int8_t, 4) l_229 = (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 0x29L), 0x29L);
                int i, j, k;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 6; k++)
                            l_153[i][j][k] = &l_127;
                    }
                }
                l_161[0][2][1] = ((safe_rshift_func_int8_t_s_u(((l_106 = (p_750->g_75[0][3][0] , (func_25((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_138 = (~p_66)), ((*l_159) = (l_139 ^ ((p_67 ^= (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_158 = func_25(func_25(((*l_102) = (safe_sub_func_uint8_t_u_u(0x3EL, ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(p_750->g_148.yy)).yxxxyyxyxyxyxyxx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_149.s19)))).yyxxyyxxxyxyxxyy))).sb1)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(9L, 0x0DL)).xxxxxxyy)).s11))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_750->g_150.s73005261)), (-1L), (-3L), ((VECTOR(int8_t, 2))((-7L), 0x25L)), 0L, 0x17L, 0L, 0x45L)).s51))).yxxy, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(l_151.xy)).xyyy, (int8_t)p_750->g_90.x)))))).xxyzzywzxyxzwwzz, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((p_750->g_150.s4 = 0x6FL), 4L, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_154.s132469d7)).odd, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x07L, 0x30L)).yxyxxxyxyxyyxyyx)).s6102, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(9L, 0x60L)).yyyxxyxx, ((VECTOR(int8_t, 8))((l_155 , 0x50L), 1L, p_750->g_comm_values[p_750->tid], 0x30L, 0x69L, ((VECTOR(int8_t, 2))(0x2DL)), 0L))))), ((VECTOR(int8_t, 8))((-5L)))))).odd))), 1L, 8L)).s7450136725120344)).s8d, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(0L))))).yyyxxxxxyxxxyyyx))), ((VECTOR(int8_t, 16))(0x44L)), ((VECTOR(int8_t, 16))(0x6CL))))).s2e, ((VECTOR(int8_t, 2))(5L))))).yyyyxxyxxyxxxyyx, ((VECTOR(int8_t, 16))((-10L)))))).sb))), l_151.x, p_750->g_39, p_750->g_39, l_156[1], p_750), l_154.s6, l_157, l_82.s4, p_750->g_39, p_750)), FAKE_DIVERGE(p_750->group_1_offset, get_group_id(1), 10))), p_750->g_75[0][3][2])), l_151.y))) <= FAKE_DIVERGE(p_750->local_1_offset, get_local_id(1), 10)))))), 4)) < l_108) != p_750->g_148.x), p_750->g_90.x, p_750->g_3, p_750->g_90.y, p_750->g_90.y, p_750) , 0x78067CD4L))) >= p_750->g_49), 7)) >= l_157);
                for (l_106 = 0; (l_106 == (-20)); l_106 = safe_sub_func_int16_t_s_s(l_106, 3))
                { /* block id: 57 */
                    uint64_t l_166 = 0xD607CDC40B6075C1L;
                    int32_t l_167 = 0x75C7D206L;
                    VECTOR(int64_t, 2) l_206 = (VECTOR(int64_t, 2))(0x2590F46CB25444CFL, 0x2F0C1EE57A3F6B23L);
                    int64_t *l_234 = (void*)0;
                    int32_t *l_235 = &l_232;
                    int i;
                    l_158 = (((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 2))(l_164.zz)), ((VECTOR(int16_t, 4))(((*l_159) = l_165), 1L, 0x5282L, (-1L))), (-8L))).s3 || func_25(p_67, (l_166 > ((1UL < (((--p_750->g_105) < func_25((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(func_174(&p_750->g_160, &p_750->g_39, func_85((safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))((safe_add_func_int16_t_s_s(0x0181L, (safe_rshift_func_int8_t_s_s(l_165, p_750->g_75[0][1][2])))), FAKE_DIVERGE(p_750->global_0_offset, get_global_id(0), 10), 4294967295UL, 4294967295UL, ((VECTOR(uint32_t, 2))(0x04DF1343L)), 1UL, 0x0F3F8A80L, ((VECTOR(uint32_t, 4))(4294967288UL)), p_750->g_148.x, 0x6E1AB4B5L, 0UL, 4294967290UL)).s3, GROUP_DIVERGE(1, 1))) , p_66) , p_750->g_49), l_166)) | l_155), l_106)), p_750), p_750), p_750->g_148.y)), 3)), l_151.x, p_750->g_39, p_66, l_157, p_750)) , p_750->g_35)) == p_66)), p_750->g_49, p_67, l_164.z, p_750));
                    for (l_158 = 0; (l_158 == (-24)); l_158--)
                    { /* block id: 67 */
                        if (p_750->g_148.y)
                            break;
                        if (p_750->g_90.y)
                            continue;
                    }
                    if ((GROUP_DIVERGE(0, 1) & ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(l_204.xx)), ((VECTOR(int8_t, 2))(0L, 0x7BL))))).yyxyyyxyyxyxyxyy, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_205.s32)), 0x5BL, 250UL)).zxzyzzzzwyxywwwy, (uint8_t)((((VECTOR(int32_t, 2))(0x596ED306L, 0x1C27CB4EL)).hi , (&p_750->g_49 == ((p_68 , ((VECTOR(int64_t, 2))(l_206.xy)).even) , &p_750->g_49))) ^ ((l_157 > p_750->g_3) == ((VECTOR(uint32_t, 4))(l_207.xyxy)).z)), (uint8_t)((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(1UL, (5L == (safe_sub_func_uint16_t_u_u(l_204.y, (safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(p_68, 2)), l_161[0][5][2])) && l_138), 5))))), FAKE_DIVERGE(p_750->local_0_offset, get_local_id(0), 10), l_108, p_750->g_90.y, 1UL, 0x12L, 1UL)))).s6)))))))).s82)).xyyx)), (int16_t)l_166))).lo)).yxxxxxyyyyyyyyxx)).sb))
                    { /* block id: 71 */
                        int64_t l_224 = 0x679FF3BB69EA1156L;
                        int32_t *l_233 = &l_232;
                        if (p_750->g_150.s7)
                            break;
                        if (p_750->g_75[0][1][2])
                            break;
                        p_750->g_90.y &= ((safe_add_func_uint16_t_u_u((l_232 = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_750->g_75[0][1][2] = (safe_mod_func_uint32_t_u_u(p_750->g_148.x, (0L | (l_224 <= (safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u(((0x4F81L > (((VECTOR(int8_t, 4))(l_229.zwyw)).w ^ (-1L))) & (1L == p_66)), ((l_230 ^= (p_750->g_35 < (l_108 |= p_66))) , p_68))), 4))))))), l_231)), (-1L))) < p_68), ((VECTOR(uint16_t, 2))(0UL)), 0x5E89L, 65535UL, 0xC040L, 1UL, 9UL, 65529UL, 0xEF52L, ((VECTOR(uint16_t, 2))(0xA804L)), ((VECTOR(uint16_t, 4))(0xDEA6L))))))))).seff2)).x), p_750->g_97)) ^ 0x476303DD29CAD3B1L);
                        (*l_233) |= 0x2FD1FDE4L;
                    }
                    else
                    { /* block id: 80 */
                        return l_234;
                    }
                    (*l_235) = 0x5AAB47B4L;
                }
            }
            (*l_237) = func_85(p_750->g_49, p_750);
            l_156[1] &= (p_750->g_90.y = ((VECTOR(int32_t, 16))(p_750->g_239.yyxxyyxyyxxyyxyx)).s7);
        }
        (*l_262) = func_85((+((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 8))(l_242.yyyxxyyy)).s2757555401066117, (uint64_t)p_750->g_97))).s4, (p_67 < (((p_750->g_75[0][1][2] &= (l_108 = (safe_unary_minus_func_uint64_t_u(((((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_246.xxyzywxxywwzxxyw)).s86)).lo, (l_232 ^= p_68))) == (p_750->g_248 != l_250)) == ((*l_250) = (safe_mod_func_uint64_t_u_u(((void*)0 == p_750->g_253[2]), (safe_div_func_int8_t_s_s(((~(p_66 <= (++(*l_256)))) || (safe_rshift_func_uint16_t_u_s(((l_261 != l_261) , p_750->g_90.x), p_750->g_97))), 0x73L)))))) , p_67))))) , &p_750->g_35) == (*l_98))))) == 0L)), p_750);
        (*l_263) = (*l_263);
        (*l_263) = ((VECTOR(int32_t, 2))(l_264.s24)).lo;
    }
    return l_265;
}


/* ------------------------------------------ */
/* 
 * reads : p_750->g_39 p_750->g_90 p_750->l_comm_values p_750->g_comm_values p_750->g_35 p_750->g_3
 * writes: p_750->g_35 p_750->g_97 p_750->g_90
 */
uint32_t * func_85(uint64_t  p_86, struct S0 * p_750)
{ /* block id: 26 */
    VECTOR(int32_t, 8) l_87 = (VECTOR(int32_t, 8))(0x01F95A7FL, (VECTOR(int32_t, 4))(0x01F95A7FL, (VECTOR(int32_t, 2))(0x01F95A7FL, 0x1EC88C48L), 0x1EC88C48L), 0x1EC88C48L, 0x01F95A7FL, 0x1EC88C48L);
    VECTOR(int32_t, 16) l_88 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x29A38644L), 0x29A38644L), 0x29A38644L, 0L, 0x29A38644L, (VECTOR(int32_t, 2))(0L, 0x29A38644L), (VECTOR(int32_t, 2))(0L, 0x29A38644L), 0L, 0x29A38644L, 0L, 0x29A38644L);
    VECTOR(int16_t, 16) l_89 = (VECTOR(int16_t, 16))(0x076FL, (VECTOR(int16_t, 4))(0x076FL, (VECTOR(int16_t, 2))(0x076FL, 0x78A0L), 0x78A0L), 0x78A0L, 0x076FL, 0x78A0L, (VECTOR(int16_t, 2))(0x076FL, 0x78A0L), (VECTOR(int16_t, 2))(0x076FL, 0x78A0L), 0x076FL, 0x78A0L, 0x076FL, 0x78A0L);
    uint32_t *l_93 = (void*)0;
    uint32_t *l_94 = &p_750->g_35;
    uint32_t *l_95 = (void*)0;
    uint32_t *l_96 = &p_750->g_97;
    int i;
    p_750->g_90.x = ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(l_87.s5627)).even, ((VECTOR(int32_t, 2))(l_88.s06))))))))).yxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x3A51F895L, (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(l_89.s2582781ee239ca81))))).s0d)).hi , (p_750->g_39 & (-1L))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_750->g_90.xxxyyxxy)))), ((VECTOR(int32_t, 2))(3L, (-1L))).lo, (p_86 , (((VECTOR(uint16_t, 16))(65531UL, (func_25(((*l_96) = ((*l_94) |= (((((void*)0 != &p_750->g_35) , (void*)0) != &p_750->g_75[0][1][2]) && (safe_add_func_int16_t_s_s(func_25(p_86, l_89.sb, p_86, l_87.s7, p_750->l_comm_values[(safe_mod_func_uint32_t_u_u(p_750->tid, 2))], p_750), 0x21C0L))))), p_86, p_750->l_comm_values[(safe_mod_func_uint32_t_u_u(p_750->tid, 2))], p_750->g_90.x, p_86, p_750) , p_750->g_3), ((VECTOR(uint16_t, 2))(65531UL)), 65535UL, 0x30DCL, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 8))(1UL)))).s9 & l_87.s6)), l_89.s0, ((VECTOR(int32_t, 2))(0x54103A87L)), 0L)).s1c13)), l_88.sa, l_89.sb, 1L, 0x50AECCFCL)).odd, ((VECTOR(int32_t, 4))(0L))))).y;
    return &p_750->g_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_750->g_160
 * writes:
 */
int16_t  func_174(int16_t * p_175, int32_t * p_176, uint32_t * p_177, struct S0 * p_750)
{ /* block id: 60 */
    int32_t **l_188 = (void*)0;
    int32_t *l_189 = (void*)0;
    int32_t *l_190 = (void*)0;
    int32_t *l_191 = (void*)0;
    int32_t l_192 = 0L;
    int32_t *l_193 = &l_192;
    int32_t *l_194 = &l_192;
    int32_t *l_195 = (void*)0;
    int32_t *l_196 = &l_192;
    int32_t *l_197 = (void*)0;
    int32_t *l_198[9];
    uint32_t l_199[8] = {5UL,9UL,5UL,5UL,9UL,5UL,5UL,9UL};
    int i;
    for (i = 0; i < 9; i++)
        l_198[i] = &l_192;
    p_176 = (void*)0;
    ++l_199[2];
    return (*p_175);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S0 c_751;
    struct S0* p_750 = &c_751;
    struct S0 c_752 = {
        (VECTOR(int32_t, 2))(1L, 0x66E3245FL), // p_750->g_2
        1L, // p_750->g_3
        0xFA2B8731L, // p_750->g_35
        0L, // p_750->g_39
        0UL, // p_750->g_49
        {{{3UL,0xD211L,3UL,3UL},{3UL,0xD211L,3UL,3UL},{3UL,0xD211L,3UL,3UL},{3UL,0xD211L,3UL,3UL}}}, // p_750->g_75
        (VECTOR(int32_t, 2))((-1L), 0x0D0FB0CEL), // p_750->g_90
        1UL, // p_750->g_97
        4294967294UL, // p_750->g_101
        &p_750->g_101, // p_750->g_100
        0x068EADFDL, // p_750->g_105
        (VECTOR(int8_t, 2))(0x67L, 0L), // p_750->g_148
        (VECTOR(int8_t, 8))(0x3CL, (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 0x6AL), 0x6AL), 0x6AL, 0x3CL, 0x6AL), // p_750->g_150
        0x5F1BL, // p_750->g_160
        (VECTOR(int32_t, 2))(1L, 0x60EB0DA8L), // p_750->g_239
        4L, // p_750->g_249
        &p_750->g_249, // p_750->g_248
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_750->g_253
        (void*)0, // p_750->g_266
        {&p_750->g_160,&p_750->g_160,&p_750->g_160,&p_750->g_160,&p_750->g_160,&p_750->g_160,&p_750->g_160,&p_750->g_160,&p_750->g_160}, // p_750->g_278
        (void*)0, // p_750->g_291
        (VECTOR(uint32_t, 4))(0x59F01389L, (VECTOR(uint32_t, 2))(0x59F01389L, 0UL), 0UL), // p_750->g_296
        (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 1UL), 1UL), 1UL, 65528UL, 1UL, (VECTOR(uint16_t, 2))(65528UL, 1UL), (VECTOR(uint16_t, 2))(65528UL, 1UL), 65528UL, 1UL, 65528UL, 1UL), // p_750->g_311
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL), // p_750->g_312
        (VECTOR(int64_t, 2))(0x6EF9D87B19F7F49FL, 0x0DF2F1504832173CL), // p_750->g_322
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_750->g_323
        (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 1UL), 1UL), // p_750->g_330
        (VECTOR(uint64_t, 2))(0xA5139F907A063FFBL, 0x335244FC275AE569L), // p_750->g_331
        (void*)0, // p_750->g_353
        (VECTOR(int16_t, 2))(0x3A39L, 0L), // p_750->g_355
        &p_750->g_39, // p_750->g_393
        (VECTOR(int32_t, 16))(0x3BEE0CCAL, (VECTOR(int32_t, 4))(0x3BEE0CCAL, (VECTOR(int32_t, 2))(0x3BEE0CCAL, 0x6DEA1243L), 0x6DEA1243L), 0x6DEA1243L, 0x3BEE0CCAL, 0x6DEA1243L, (VECTOR(int32_t, 2))(0x3BEE0CCAL, 0x6DEA1243L), (VECTOR(int32_t, 2))(0x3BEE0CCAL, 0x6DEA1243L), 0x3BEE0CCAL, 0x6DEA1243L, 0x3BEE0CCAL, 0x6DEA1243L), // p_750->g_406
        {{{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL}},{{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL}},{{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL}},{{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL}},{{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL}},{{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL}},{{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL},{0x58L,0x56L,0x3BL}}}, // p_750->g_422
        &p_750->g_422[4][7][2], // p_750->g_421
        &p_750->g_421, // p_750->g_420
        (void*)0, // p_750->g_492
        &p_750->g_492, // p_750->g_491
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_750->g_512
        (VECTOR(uint64_t, 16))(0xAA89BFEAB65E9A54L, (VECTOR(uint64_t, 4))(0xAA89BFEAB65E9A54L, (VECTOR(uint64_t, 2))(0xAA89BFEAB65E9A54L, 0x40B74C2B8D0213EFL), 0x40B74C2B8D0213EFL), 0x40B74C2B8D0213EFL, 0xAA89BFEAB65E9A54L, 0x40B74C2B8D0213EFL, (VECTOR(uint64_t, 2))(0xAA89BFEAB65E9A54L, 0x40B74C2B8D0213EFL), (VECTOR(uint64_t, 2))(0xAA89BFEAB65E9A54L, 0x40B74C2B8D0213EFL), 0xAA89BFEAB65E9A54L, 0x40B74C2B8D0213EFL, 0xAA89BFEAB65E9A54L, 0x40B74C2B8D0213EFL), // p_750->g_516
        0xB7FAAD69L, // p_750->g_519
        0x31EDL, // p_750->g_530
        (VECTOR(uint16_t, 2))(0x0C6DL, 0x223AL), // p_750->g_540
        (void*)0, // p_750->g_548
        (void*)0, // p_750->g_549
        0L, // p_750->g_551
        1UL, // p_750->g_585
        (VECTOR(int32_t, 16))(0x51A46325L, (VECTOR(int32_t, 4))(0x51A46325L, (VECTOR(int32_t, 2))(0x51A46325L, (-7L)), (-7L)), (-7L), 0x51A46325L, (-7L), (VECTOR(int32_t, 2))(0x51A46325L, (-7L)), (VECTOR(int32_t, 2))(0x51A46325L, (-7L)), 0x51A46325L, (-7L), 0x51A46325L, (-7L)), // p_750->g_587
        (VECTOR(int64_t, 4))(0x74491D211D61EE98L, (VECTOR(int64_t, 2))(0x74491D211D61EE98L, 9L), 9L), // p_750->g_599
        (VECTOR(uint16_t, 2))(0x21AFL, 0x5158L), // p_750->g_629
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), // p_750->g_640
        0x7EAF0943BFC53859L, // p_750->g_655
        &p_750->g_393, // p_750->g_657
        (void*)0, // p_750->g_683
        {{{&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393}},{{&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393}},{{&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393}},{{&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393}},{{&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393}},{{&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393}},{{&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393}},{{&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393}},{{&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393,&p_750->g_393}}}, // p_750->g_716
        (void*)0, // p_750->g_717
        (void*)0, // p_750->g_718
        (VECTOR(uint32_t, 8))(0x909843F9L, (VECTOR(uint32_t, 4))(0x909843F9L, (VECTOR(uint32_t, 2))(0x909843F9L, 1UL), 1UL), 1UL, 0x909843F9L, 1UL), // p_750->g_746
        0, // p_750->v_collective
        sequence_input[get_global_id(0)], // p_750->global_0_offset
        sequence_input[get_global_id(1)], // p_750->global_1_offset
        sequence_input[get_global_id(2)], // p_750->global_2_offset
        sequence_input[get_local_id(0)], // p_750->local_0_offset
        sequence_input[get_local_id(1)], // p_750->local_1_offset
        sequence_input[get_local_id(2)], // p_750->local_2_offset
        sequence_input[get_group_id(0)], // p_750->group_0_offset
        sequence_input[get_group_id(1)], // p_750->group_1_offset
        sequence_input[get_group_id(2)], // p_750->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_750->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_751 = c_752;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_750);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_750->g_2.x, "p_750->g_2.x", print_hash_value);
    transparent_crc(p_750->g_2.y, "p_750->g_2.y", print_hash_value);
    transparent_crc(p_750->g_3, "p_750->g_3", print_hash_value);
    transparent_crc(p_750->g_35, "p_750->g_35", print_hash_value);
    transparent_crc(p_750->g_39, "p_750->g_39", print_hash_value);
    transparent_crc(p_750->g_49, "p_750->g_49", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_750->g_75[i][j][k], "p_750->g_75[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_750->g_90.x, "p_750->g_90.x", print_hash_value);
    transparent_crc(p_750->g_90.y, "p_750->g_90.y", print_hash_value);
    transparent_crc(p_750->g_97, "p_750->g_97", print_hash_value);
    transparent_crc(p_750->g_101, "p_750->g_101", print_hash_value);
    transparent_crc(p_750->g_105, "p_750->g_105", print_hash_value);
    transparent_crc(p_750->g_148.x, "p_750->g_148.x", print_hash_value);
    transparent_crc(p_750->g_148.y, "p_750->g_148.y", print_hash_value);
    transparent_crc(p_750->g_150.s0, "p_750->g_150.s0", print_hash_value);
    transparent_crc(p_750->g_150.s1, "p_750->g_150.s1", print_hash_value);
    transparent_crc(p_750->g_150.s2, "p_750->g_150.s2", print_hash_value);
    transparent_crc(p_750->g_150.s3, "p_750->g_150.s3", print_hash_value);
    transparent_crc(p_750->g_150.s4, "p_750->g_150.s4", print_hash_value);
    transparent_crc(p_750->g_150.s5, "p_750->g_150.s5", print_hash_value);
    transparent_crc(p_750->g_150.s6, "p_750->g_150.s6", print_hash_value);
    transparent_crc(p_750->g_150.s7, "p_750->g_150.s7", print_hash_value);
    transparent_crc(p_750->g_160, "p_750->g_160", print_hash_value);
    transparent_crc(p_750->g_239.x, "p_750->g_239.x", print_hash_value);
    transparent_crc(p_750->g_239.y, "p_750->g_239.y", print_hash_value);
    transparent_crc(p_750->g_249, "p_750->g_249", print_hash_value);
    transparent_crc(p_750->g_296.x, "p_750->g_296.x", print_hash_value);
    transparent_crc(p_750->g_296.y, "p_750->g_296.y", print_hash_value);
    transparent_crc(p_750->g_296.z, "p_750->g_296.z", print_hash_value);
    transparent_crc(p_750->g_296.w, "p_750->g_296.w", print_hash_value);
    transparent_crc(p_750->g_311.s0, "p_750->g_311.s0", print_hash_value);
    transparent_crc(p_750->g_311.s1, "p_750->g_311.s1", print_hash_value);
    transparent_crc(p_750->g_311.s2, "p_750->g_311.s2", print_hash_value);
    transparent_crc(p_750->g_311.s3, "p_750->g_311.s3", print_hash_value);
    transparent_crc(p_750->g_311.s4, "p_750->g_311.s4", print_hash_value);
    transparent_crc(p_750->g_311.s5, "p_750->g_311.s5", print_hash_value);
    transparent_crc(p_750->g_311.s6, "p_750->g_311.s6", print_hash_value);
    transparent_crc(p_750->g_311.s7, "p_750->g_311.s7", print_hash_value);
    transparent_crc(p_750->g_311.s8, "p_750->g_311.s8", print_hash_value);
    transparent_crc(p_750->g_311.s9, "p_750->g_311.s9", print_hash_value);
    transparent_crc(p_750->g_311.sa, "p_750->g_311.sa", print_hash_value);
    transparent_crc(p_750->g_311.sb, "p_750->g_311.sb", print_hash_value);
    transparent_crc(p_750->g_311.sc, "p_750->g_311.sc", print_hash_value);
    transparent_crc(p_750->g_311.sd, "p_750->g_311.sd", print_hash_value);
    transparent_crc(p_750->g_311.se, "p_750->g_311.se", print_hash_value);
    transparent_crc(p_750->g_311.sf, "p_750->g_311.sf", print_hash_value);
    transparent_crc(p_750->g_312.s0, "p_750->g_312.s0", print_hash_value);
    transparent_crc(p_750->g_312.s1, "p_750->g_312.s1", print_hash_value);
    transparent_crc(p_750->g_312.s2, "p_750->g_312.s2", print_hash_value);
    transparent_crc(p_750->g_312.s3, "p_750->g_312.s3", print_hash_value);
    transparent_crc(p_750->g_312.s4, "p_750->g_312.s4", print_hash_value);
    transparent_crc(p_750->g_312.s5, "p_750->g_312.s5", print_hash_value);
    transparent_crc(p_750->g_312.s6, "p_750->g_312.s6", print_hash_value);
    transparent_crc(p_750->g_312.s7, "p_750->g_312.s7", print_hash_value);
    transparent_crc(p_750->g_322.x, "p_750->g_322.x", print_hash_value);
    transparent_crc(p_750->g_322.y, "p_750->g_322.y", print_hash_value);
    transparent_crc(p_750->g_323.s0, "p_750->g_323.s0", print_hash_value);
    transparent_crc(p_750->g_323.s1, "p_750->g_323.s1", print_hash_value);
    transparent_crc(p_750->g_323.s2, "p_750->g_323.s2", print_hash_value);
    transparent_crc(p_750->g_323.s3, "p_750->g_323.s3", print_hash_value);
    transparent_crc(p_750->g_323.s4, "p_750->g_323.s4", print_hash_value);
    transparent_crc(p_750->g_323.s5, "p_750->g_323.s5", print_hash_value);
    transparent_crc(p_750->g_323.s6, "p_750->g_323.s6", print_hash_value);
    transparent_crc(p_750->g_323.s7, "p_750->g_323.s7", print_hash_value);
    transparent_crc(p_750->g_330.x, "p_750->g_330.x", print_hash_value);
    transparent_crc(p_750->g_330.y, "p_750->g_330.y", print_hash_value);
    transparent_crc(p_750->g_330.z, "p_750->g_330.z", print_hash_value);
    transparent_crc(p_750->g_330.w, "p_750->g_330.w", print_hash_value);
    transparent_crc(p_750->g_331.x, "p_750->g_331.x", print_hash_value);
    transparent_crc(p_750->g_331.y, "p_750->g_331.y", print_hash_value);
    transparent_crc(p_750->g_355.x, "p_750->g_355.x", print_hash_value);
    transparent_crc(p_750->g_355.y, "p_750->g_355.y", print_hash_value);
    transparent_crc(p_750->g_406.s0, "p_750->g_406.s0", print_hash_value);
    transparent_crc(p_750->g_406.s1, "p_750->g_406.s1", print_hash_value);
    transparent_crc(p_750->g_406.s2, "p_750->g_406.s2", print_hash_value);
    transparent_crc(p_750->g_406.s3, "p_750->g_406.s3", print_hash_value);
    transparent_crc(p_750->g_406.s4, "p_750->g_406.s4", print_hash_value);
    transparent_crc(p_750->g_406.s5, "p_750->g_406.s5", print_hash_value);
    transparent_crc(p_750->g_406.s6, "p_750->g_406.s6", print_hash_value);
    transparent_crc(p_750->g_406.s7, "p_750->g_406.s7", print_hash_value);
    transparent_crc(p_750->g_406.s8, "p_750->g_406.s8", print_hash_value);
    transparent_crc(p_750->g_406.s9, "p_750->g_406.s9", print_hash_value);
    transparent_crc(p_750->g_406.sa, "p_750->g_406.sa", print_hash_value);
    transparent_crc(p_750->g_406.sb, "p_750->g_406.sb", print_hash_value);
    transparent_crc(p_750->g_406.sc, "p_750->g_406.sc", print_hash_value);
    transparent_crc(p_750->g_406.sd, "p_750->g_406.sd", print_hash_value);
    transparent_crc(p_750->g_406.se, "p_750->g_406.se", print_hash_value);
    transparent_crc(p_750->g_406.sf, "p_750->g_406.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_750->g_422[i][j][k], "p_750->g_422[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_750->g_512[i], "p_750->g_512[i]", print_hash_value);

    }
    transparent_crc(p_750->g_516.s0, "p_750->g_516.s0", print_hash_value);
    transparent_crc(p_750->g_516.s1, "p_750->g_516.s1", print_hash_value);
    transparent_crc(p_750->g_516.s2, "p_750->g_516.s2", print_hash_value);
    transparent_crc(p_750->g_516.s3, "p_750->g_516.s3", print_hash_value);
    transparent_crc(p_750->g_516.s4, "p_750->g_516.s4", print_hash_value);
    transparent_crc(p_750->g_516.s5, "p_750->g_516.s5", print_hash_value);
    transparent_crc(p_750->g_516.s6, "p_750->g_516.s6", print_hash_value);
    transparent_crc(p_750->g_516.s7, "p_750->g_516.s7", print_hash_value);
    transparent_crc(p_750->g_516.s8, "p_750->g_516.s8", print_hash_value);
    transparent_crc(p_750->g_516.s9, "p_750->g_516.s9", print_hash_value);
    transparent_crc(p_750->g_516.sa, "p_750->g_516.sa", print_hash_value);
    transparent_crc(p_750->g_516.sb, "p_750->g_516.sb", print_hash_value);
    transparent_crc(p_750->g_516.sc, "p_750->g_516.sc", print_hash_value);
    transparent_crc(p_750->g_516.sd, "p_750->g_516.sd", print_hash_value);
    transparent_crc(p_750->g_516.se, "p_750->g_516.se", print_hash_value);
    transparent_crc(p_750->g_516.sf, "p_750->g_516.sf", print_hash_value);
    transparent_crc(p_750->g_519, "p_750->g_519", print_hash_value);
    transparent_crc(p_750->g_530, "p_750->g_530", print_hash_value);
    transparent_crc(p_750->g_540.x, "p_750->g_540.x", print_hash_value);
    transparent_crc(p_750->g_540.y, "p_750->g_540.y", print_hash_value);
    transparent_crc(p_750->g_551, "p_750->g_551", print_hash_value);
    transparent_crc(p_750->g_585, "p_750->g_585", print_hash_value);
    transparent_crc(p_750->g_587.s0, "p_750->g_587.s0", print_hash_value);
    transparent_crc(p_750->g_587.s1, "p_750->g_587.s1", print_hash_value);
    transparent_crc(p_750->g_587.s2, "p_750->g_587.s2", print_hash_value);
    transparent_crc(p_750->g_587.s3, "p_750->g_587.s3", print_hash_value);
    transparent_crc(p_750->g_587.s4, "p_750->g_587.s4", print_hash_value);
    transparent_crc(p_750->g_587.s5, "p_750->g_587.s5", print_hash_value);
    transparent_crc(p_750->g_587.s6, "p_750->g_587.s6", print_hash_value);
    transparent_crc(p_750->g_587.s7, "p_750->g_587.s7", print_hash_value);
    transparent_crc(p_750->g_587.s8, "p_750->g_587.s8", print_hash_value);
    transparent_crc(p_750->g_587.s9, "p_750->g_587.s9", print_hash_value);
    transparent_crc(p_750->g_587.sa, "p_750->g_587.sa", print_hash_value);
    transparent_crc(p_750->g_587.sb, "p_750->g_587.sb", print_hash_value);
    transparent_crc(p_750->g_587.sc, "p_750->g_587.sc", print_hash_value);
    transparent_crc(p_750->g_587.sd, "p_750->g_587.sd", print_hash_value);
    transparent_crc(p_750->g_587.se, "p_750->g_587.se", print_hash_value);
    transparent_crc(p_750->g_587.sf, "p_750->g_587.sf", print_hash_value);
    transparent_crc(p_750->g_599.x, "p_750->g_599.x", print_hash_value);
    transparent_crc(p_750->g_599.y, "p_750->g_599.y", print_hash_value);
    transparent_crc(p_750->g_599.z, "p_750->g_599.z", print_hash_value);
    transparent_crc(p_750->g_599.w, "p_750->g_599.w", print_hash_value);
    transparent_crc(p_750->g_629.x, "p_750->g_629.x", print_hash_value);
    transparent_crc(p_750->g_629.y, "p_750->g_629.y", print_hash_value);
    transparent_crc(p_750->g_640.x, "p_750->g_640.x", print_hash_value);
    transparent_crc(p_750->g_640.y, "p_750->g_640.y", print_hash_value);
    transparent_crc(p_750->g_640.z, "p_750->g_640.z", print_hash_value);
    transparent_crc(p_750->g_640.w, "p_750->g_640.w", print_hash_value);
    transparent_crc(p_750->g_655, "p_750->g_655", print_hash_value);
    transparent_crc(p_750->g_746.s0, "p_750->g_746.s0", print_hash_value);
    transparent_crc(p_750->g_746.s1, "p_750->g_746.s1", print_hash_value);
    transparent_crc(p_750->g_746.s2, "p_750->g_746.s2", print_hash_value);
    transparent_crc(p_750->g_746.s3, "p_750->g_746.s3", print_hash_value);
    transparent_crc(p_750->g_746.s4, "p_750->g_746.s4", print_hash_value);
    transparent_crc(p_750->g_746.s5, "p_750->g_746.s5", print_hash_value);
    transparent_crc(p_750->g_746.s6, "p_750->g_746.s6", print_hash_value);
    transparent_crc(p_750->g_746.s7, "p_750->g_746.s7", print_hash_value);
    transparent_crc(p_750->v_collective, "p_750->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 89; i++)
            transparent_crc(p_750->g_special_values[i + 89 * get_linear_group_id()], "p_750->g_special_values[i + 89 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 89; i++)
            transparent_crc(p_750->l_special_values[i], "p_750->l_special_values[i]", print_hash_value);
    transparent_crc(p_750->l_comm_values[get_linear_local_id()], "p_750->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_750->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_750->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
