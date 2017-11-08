// -g 79,48,2 -l 1,48,2
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


// Seed: 1165344925

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int16_t  f1;
   uint32_t  f2;
};

union U1 {
   int8_t * f0;
   volatile uint8_t  f1;
   struct S0  f2;
};

union U2 {
   int16_t  f0;
   int8_t * f1;
   struct S0  f2;
   volatile uint64_t  f3;
};

struct S3 {
    int32_t g_4;
    volatile uint8_t g_7;
    uint8_t g_19;
    int32_t g_51;
    int64_t g_62;
    int8_t g_75;
    int8_t *g_74;
    struct S0 g_93;
    int32_t *g_110;
    int32_t * volatile *g_109[9][2][4];
    int8_t g_116[4];
    uint8_t g_132;
    int64_t g_138;
    int64_t g_140;
    int32_t g_142;
    uint16_t g_156[5][5][3];
    uint16_t g_180[8];
    uint16_t g_189;
    uint64_t g_196;
    volatile int32_t g_221[1];
    volatile int32_t * volatile g_220;
    volatile int32_t * volatile *g_219[5];
    volatile int32_t * volatile **g_218[5][2][2];
    uint64_t g_261;
    int32_t g_278[3];
    int64_t *g_341;
    union U2 g_358;
    uint32_t g_390;
    int32_t **g_436;
    volatile int8_t g_447;
    volatile int8_t * volatile g_446;
    volatile int8_t * volatile *g_445;
    volatile int8_t * volatile **g_444;
    uint8_t g_498;
    uint16_t g_517;
    int32_t g_527;
    uint16_t **g_571;
    uint32_t g_583[5][10];
    uint64_t g_584;
    int16_t *g_594;
    uint32_t g_693;
    int32_t g_713;
    uint32_t *g_714;
    union U1 g_738;
    int8_t **g_752;
    int8_t ***g_751;
    int64_t g_771[8][5];
    int8_t g_772;
    int32_t *g_798;
    int32_t g_799;
    union U2 * volatile g_827;
    union U2 * volatile * volatile g_826;
    int32_t g_830;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S3 * p_836);
int32_t  func_27(int64_t  p_28, int32_t * p_29, struct S3 * p_836);
int8_t  func_32(int32_t  p_33, int64_t  p_34, int32_t  p_35, struct S3 * p_836);
int32_t  func_38(uint8_t * p_39, int32_t  p_40, struct S3 * p_836);
uint8_t * func_41(struct S0  p_42, int32_t  p_43, int32_t  p_44, int32_t  p_45, struct S3 * p_836);
struct S0  func_46(int32_t  p_47, struct S3 * p_836);
int32_t  func_54(int32_t * p_55, int64_t  p_56, uint32_t  p_57, int32_t * p_58, uint64_t  p_59, struct S3 * p_836);
int64_t  func_65(uint16_t  p_66, uint8_t * p_67, int64_t  p_68, uint64_t  p_69, int16_t  p_70, struct S3 * p_836);
int64_t  func_72(int64_t  p_73, struct S3 * p_836);
int8_t * func_76(int32_t * p_77, uint64_t  p_78, int8_t * p_79, struct S0  p_80, int32_t  p_81, struct S3 * p_836);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_836->g_7 p_836->g_4 p_836->g_799 p_836->g_180 p_836->g_110 p_836->g_594 p_836->g_527 p_836->g_826
 * writes: p_836->g_7 p_836->g_4 p_836->g_19 p_836->g_799 p_836->g_51 p_836->g_93.f1 p_836->g_527 p_836->g_826
 */
int32_t  func_1(struct S3 * p_836)
{ /* block id: 4 */
    int8_t l_2 = 0x1EL;
    int32_t *l_3 = &p_836->g_4;
    int32_t *l_5 = &p_836->g_4;
    int32_t *l_6[4][6][4] = {{{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4}},{{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4}},{{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4}},{{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4},{&p_836->g_4,&p_836->g_4,&p_836->g_4,&p_836->g_4}}};
    int32_t l_10[6];
    uint8_t l_819[7] = {0xDBL,0xA0L,0xDBL,0xDBL,0xA0L,0xDBL,0xDBL};
    uint64_t l_831 = 18446744073709551609UL;
    int32_t l_835 = (-6L);
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_10[i] = (-1L);
lbl_834:
    ++p_836->g_7;
    if (l_10[1])
    { /* block id: 6 */
        int32_t l_194 = 0L;
        int32_t l_804 = 8L;
        uint16_t l_806 = 0UL;
        int8_t l_810 = 6L;
        int32_t l_811 = 0x491A882FL;
        int32_t l_812 = 0x476739EBL;
        int32_t l_813 = 0x34579DECL;
        int32_t l_814 = 0L;
        int32_t l_815 = 0x06485E16L;
        int32_t l_816 = 2L;
        int32_t l_817 = 0x6E03FB3AL;
        int32_t l_818[9] = {(-3L),(-7L),(-3L),(-3L),(-7L),(-3L),(-3L),(-7L),(-3L)};
        int i;
        for (l_2 = 0; (l_2 == (-19)); --l_2)
        { /* block id: 9 */
            uint64_t l_13 = 18446744073709551615UL;
            int32_t l_801 = 0x225BC28AL;
            uint8_t l_809[1][8] = {{250UL,250UL,250UL,250UL,250UL,250UL,250UL,250UL}};
            int i, j;
            l_13++;
            (*l_3) ^= p_836->g_7;
            for (p_836->g_4 = (-28); (p_836->g_4 <= 16); p_836->g_4++)
            { /* block id: 14 */
                uint8_t *l_18 = &p_836->g_19;
                int32_t **l_20 = &l_3;
                int32_t l_802 = 0x7AFD09BBL;
                int32_t l_803 = 0x18DF4A5AL;
                (*l_20) = ((((*l_18) = p_836->g_7) < 0x6AL) , (void*)0);
                for (l_13 = (-25); (l_13 >= 32); l_13 = safe_add_func_uint8_t_u_u(l_13, 6))
                { /* block id: 19 */
                    uint8_t l_307 = 255UL;
                    int32_t l_800 = 0x4B4A8184L;
                    int32_t l_805 = 0x6E283A40L;
                    for (p_836->g_19 = 0; (p_836->g_19 < 12); p_836->g_19 = safe_add_func_int16_t_s_s(p_836->g_19, 8))
                    { /* block id: 22 */
                        uint32_t l_48 = 0UL;
                        struct S0 *l_185 = &p_836->g_93;
                        uint16_t *l_188 = &p_836->g_189;
                        uint64_t *l_195 = &p_836->g_196;
                        int32_t *l_197 = &l_10[1];
                        int8_t *l_794 = (void*)0;
                        int8_t *l_795 = &p_836->g_772;
                        (1 + 1);
                    }
                    for (p_836->g_799 = 7; (p_836->g_799 >= 0); p_836->g_799 -= 1)
                    { /* block id: 404 */
                        int i;
                        return p_836->g_180[p_836->g_799];
                    }
                    l_806--;
                    if ((*l_5))
                        break;
                }
                return l_809[0][7];
            }
        }
        ++l_819[6];
    }
    else
    { /* block id: 414 */
        int8_t l_822 = 0x30L;
        int32_t l_823[2][3] = {{0L,0x3AC2ACC1L,0L},{0L,0x3AC2ACC1L,0L}};
        int i, j;
        (*l_5) |= ((*p_836->g_110) = l_822);
        l_823[0][0] |= (l_822 > ((*p_836->g_594) = 3L));
    }
    for (p_836->g_527 = 0; (p_836->g_527 >= 23); p_836->g_527 = safe_add_func_uint16_t_u_u(p_836->g_527, 1))
    { /* block id: 422 */
        union U2 * volatile * volatile *l_828 = &p_836->g_826;
        int32_t l_829[2];
        int i;
        for (i = 0; i < 2; i++)
            l_829[i] = 0x3C7BCC9EL;
        (*l_828) = p_836->g_826;
        --l_831;
    }
    if (p_836->g_527)
        goto lbl_834;
    return l_835;
}


/* ------------------------------------------ */
/* 
 * reads : p_836->g_799
 * writes: p_836->g_110 p_836->g_798
 */
int32_t  func_27(int64_t  p_28, int32_t * p_29, struct S3 * p_836)
{ /* block id: 395 */
    struct S0 l_796 = {0x04218D10L,1L,8UL};
    int32_t **l_797 = &p_836->g_110;
    p_836->g_798 = (l_796 , ((*l_797) = p_29));
    return p_836->g_799;
}


/* ------------------------------------------ */
/* 
 * reads : p_836->g_93 p_836->g_51 p_836->g_196 p_836->g_156 p_836->g_751 p_836->g_752 p_836->g_74 p_836->g_75
 * writes: p_836->g_93 p_836->g_51 p_836->g_196 p_836->g_738.f2
 */
int8_t  func_32(int32_t  p_33, int64_t  p_34, int32_t  p_35, struct S3 * p_836)
{ /* block id: 133 */
    int32_t l_315 = 0L;
    int32_t l_318 = 0x552AB017L;
    struct S0 l_334 = {1UL,0x64D9L,4294967295UL};
    uint64_t *l_349[4][9];
    int32_t *l_435 = &p_836->g_278[0];
    int32_t **l_434 = &l_435;
    int32_t l_460 = 4L;
    int32_t l_466 = 0L;
    int32_t l_468 = 0L;
    int32_t l_491 = (-2L);
    int32_t l_493[8][8] = {{1L,(-1L),6L,0x3E0619F5L,6L,(-1L),1L,0L},{1L,(-1L),6L,0x3E0619F5L,6L,(-1L),1L,0L},{1L,(-1L),6L,0x3E0619F5L,6L,(-1L),1L,0L},{1L,(-1L),6L,0x3E0619F5L,6L,(-1L),1L,0L},{1L,(-1L),6L,0x3E0619F5L,6L,(-1L),1L,0L},{1L,(-1L),6L,0x3E0619F5L,6L,(-1L),1L,0L},{1L,(-1L),6L,0x3E0619F5L,6L,(-1L),1L,0L},{1L,(-1L),6L,0x3E0619F5L,6L,(-1L),1L,0L}};
    int16_t l_543[10][6] = {{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL},{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL},{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL},{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL},{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL},{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL},{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL},{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL},{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL},{1L,1L,(-8L),0x2A0BL,1L,0x2A0BL}};
    int32_t **l_544 = (void*)0;
    int32_t *l_562 = (void*)0;
    uint64_t l_589 = 0UL;
    int64_t l_631 = 0x7F104E9D3B6D553FL;
    int8_t l_644 = 0x17L;
    int32_t l_646 = 0x10AE494FL;
    int16_t l_653 = 0x604CL;
    int16_t l_770[9];
    struct S0 *l_778 = &p_836->g_93;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
            l_349[i][j] = &p_836->g_261;
    }
    for (i = 0; i < 9; i++)
        l_770[i] = 2L;
    for (p_34 = 0; (p_34 <= 2); p_34 += 1)
    { /* block id: 136 */
        int16_t *l_314[2];
        uint32_t l_319 = 1UL;
        int64_t *l_338 = &p_836->g_140;
        int32_t l_373 = 0L;
        struct S0 l_393 = {5UL,0x2334L,0xE268C1AAL};
        uint32_t l_403 = 0x6B3BBE40L;
        int32_t *l_423 = (void*)0;
        int32_t **l_422 = &l_423;
        int32_t ***l_421 = &l_422;
        uint8_t l_428[10] = {0xE6L,0x42L,0xE6L,0xE6L,0x42L,0xE6L,0xE6L,0x42L,0xE6L,0xE6L};
        uint16_t l_429 = 0xC505L;
        int32_t l_456[3][8][9] = {{{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L}},{{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L}},{{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L},{0x2AB565FFL,0x5F3D7D98L,0L,0x0109A71CL,0x71C760AAL,0x27EC26A0L,(-1L),5L,0L}}};
        int8_t l_484 = (-7L);
        uint64_t l_528 = 0UL;
        uint32_t *l_576 = &l_319;
        int32_t *l_582 = &l_491;
        int8_t *l_585 = &p_836->g_75;
        int32_t *l_586 = &l_315;
        int32_t *l_587 = &l_466;
        int32_t *l_588[10] = {&l_466,&l_466,&l_466,&l_466,&l_466,&l_466,&l_466,&l_466,&l_466,&l_466};
        uint64_t *l_592 = (void*)0;
        uint64_t *l_593 = &p_836->g_196;
        uint32_t l_633 = 4294967295UL;
        uint32_t l_638 = 1UL;
        int8_t l_659 = 0x2BL;
        int64_t l_757[10] = {0x2897E6D968607EC5L,0x2897E6D968607EC5L,0x2897E6D968607EC5L,0x2897E6D968607EC5L,0x2897E6D968607EC5L,0x2897E6D968607EC5L,0x2897E6D968607EC5L,0x2897E6D968607EC5L,0x2897E6D968607EC5L,0x2897E6D968607EC5L};
        int8_t l_769[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_314[i] = &p_836->g_93.f1;
        for (i = 0; i < 2; i++)
            l_769[i] = 0x1AL;
        (1 + 1);
    }
    (*l_778) = p_836->g_93;
    (*l_778) = (*l_778);
    for (p_836->g_93.f0 = (-5); (p_836->g_93.f0 <= 49); ++p_836->g_93.f0)
    { /* block id: 376 */
        uint32_t l_781 = 0x7C15C633L;
        int32_t *l_782 = (void*)0;
        int32_t *l_783 = &p_836->g_51;
        int16_t l_784 = 0x344FL;
        int32_t *l_786 = (void*)0;
        int32_t *l_787 = &l_468;
        int32_t *l_788 = &l_468;
        int32_t *l_789 = &l_493[1][2];
        int32_t *l_790[7][4] = {{(void*)0,(void*)0,&l_466,&p_836->g_142},{(void*)0,(void*)0,&l_466,&p_836->g_142},{(void*)0,(void*)0,&l_466,&p_836->g_142},{(void*)0,(void*)0,&l_466,&p_836->g_142},{(void*)0,(void*)0,&l_466,&p_836->g_142},{(void*)0,(void*)0,&l_466,&p_836->g_142},{(void*)0,(void*)0,&l_466,&p_836->g_142}};
        uint8_t l_791 = 0x46L;
        int i, j;
        (*l_783) &= l_781;
        for (p_836->g_93.f1 = 0; (p_836->g_93.f1 <= 2); p_836->g_93.f1 += 1)
        { /* block id: 380 */
            if (l_784)
                break;
            for (p_836->g_196 = 0; (p_836->g_196 <= 2); p_836->g_196 += 1)
            { /* block id: 384 */
                struct S0 *l_785 = &p_836->g_738.f2;
                int i, j, k;
                (*l_783) &= p_836->g_156[(p_836->g_93.f1 + 2)][(p_836->g_93.f1 + 2)][p_836->g_93.f1];
                (*l_785) = (*l_778);
                return (***p_836->g_751);
            }
        }
        ++l_791;
    }
    return l_493[1][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_836->g_261
 * writes: p_836->g_261 p_836->g_51
 */
int32_t  func_38(uint8_t * p_39, int32_t  p_40, struct S3 * p_836)
{ /* block id: 124 */
    int64_t l_297 = 0x6A6669404FB00BE1L;
    int32_t l_302 = 0x70D5558EL;
    int32_t l_303 = (-5L);
    for (p_836->g_261 = (-1); (p_836->g_261 < 51); ++p_836->g_261)
    { /* block id: 127 */
        int32_t l_293 = 1L;
        struct S0 l_294[8] = {{0x81189C19L,0x0AD3L,0UL},{0x81189C19L,0x0AD3L,0UL},{0x81189C19L,0x0AD3L,0UL},{0x81189C19L,0x0AD3L,0UL},{0x81189C19L,0x0AD3L,0UL},{0x81189C19L,0x0AD3L,0UL},{0x81189C19L,0x0AD3L,0UL},{0x81189C19L,0x0AD3L,0UL}};
        struct S0 *l_295 = &l_294[6];
        int32_t *l_296 = &p_836->g_51;
        int32_t *l_298 = &p_836->g_142;
        int32_t *l_299 = &p_836->g_142;
        int32_t *l_300 = &p_836->g_51;
        int32_t *l_301[1][7][7];
        uint64_t l_304[5];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 7; k++)
                    l_301[i][j][k] = &p_836->g_142;
            }
        }
        for (i = 0; i < 5; i++)
            l_304[i] = 0x94732FFEC495DDBAL;
        (*l_295) = l_294[6];
        (*l_296) = p_40;
        --l_304[0];
    }
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_836->g_116 p_836->g_62 p_836->g_74 p_836->g_75 p_836->g_180 p_836->g_218 p_836->g_93.f0 p_836->g_261 p_836->g_156 p_836->g_51 p_836->g_140
 * writes: p_836->g_132 p_836->g_93 p_836->g_62 p_836->g_110 p_836->g_51
 */
uint8_t * func_41(struct S0  p_42, int32_t  p_43, int32_t  p_44, int32_t  p_45, struct S3 * p_836)
{ /* block id: 72 */
    int8_t *l_210 = &p_836->g_116[3];
    int32_t l_214[6][10][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
    int8_t **l_228[7];
    int32_t l_264 = 0x7DEDD072L;
    int16_t l_271 = 0x550AL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_228[i] = &l_210;
    for (p_44 = (-4); (p_44 >= (-28)); p_44 = safe_sub_func_int8_t_s_s(p_44, 2))
    { /* block id: 75 */
        uint64_t l_200 = 1UL;
        int32_t l_209 = 0L;
        uint8_t *l_211 = &p_836->g_132;
        int32_t **l_216 = (void*)0;
        int32_t l_242[8] = {0x35D527B3L,0x35D527B3L,0x35D527B3L,0x35D527B3L,0x35D527B3L,0x35D527B3L,0x35D527B3L,0x35D527B3L};
        int8_t l_281[7] = {(-1L),(-2L),(-1L),(-1L),(-2L),(-1L),(-1L)};
        int i;
        if ((l_200 , (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0xE7A4L, (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((*l_211) = ((l_209 , l_210) != l_210)), (((safe_mul_func_int16_t_s_s((0xCAA67D54B7434E4EL > p_43), p_42.f0)) < l_214[1][0][0]) , p_45))) | p_44), p_836->g_116[3])))), p_42.f2))))
        { /* block id: 77 */
            struct S0 *l_215[9];
            int32_t ***l_217 = &l_216;
            int8_t **l_223 = &p_836->g_74;
            int32_t l_237[5][8][6] = {{{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)}},{{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)}},{{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)}},{{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)}},{{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)},{(-9L),(-1L),0x003E451AL,(-1L),(-1L),(-9L)}}};
            int8_t l_286 = (-10L);
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_215[i] = &p_836->g_93;
            p_836->g_93 = (p_42 = p_42);
            (*l_217) = l_216;
            for (p_836->g_62 = 0; (p_836->g_62 <= 1); p_836->g_62 += 1)
            { /* block id: 83 */
                int8_t *l_226 = &p_836->g_116[3];
                int32_t l_232 = 0L;
                int32_t l_244 = 1L;
                int32_t l_256 = 0x7BDC57ADL;
                uint8_t l_272 = 0x03L;
                int32_t l_279 = 7L;
                int32_t l_280 = 0x4C805FC8L;
                int32_t l_282 = (-9L);
                int32_t l_284[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_284[i] = 1L;
                p_836->g_110 = &p_44;
                for (p_42.f1 = 8; (p_42.f1 >= 1); p_42.f1 -= 1)
                { /* block id: 87 */
                    int8_t **l_222 = &l_210;
                    int32_t **l_236 = (void*)0;
                    int32_t ***l_235 = &l_236;
                    int32_t **l_238 = (void*)0;
                    int32_t l_243 = 9L;
                    int64_t l_275 = (-1L);
                    int32_t l_276 = (-6L);
                    int32_t l_283 = 0x47EE9953L;
                    int32_t l_285 = 1L;
                    uint16_t l_287 = 1UL;
                    for (p_836->g_132 = 0; (p_836->g_132 <= 1); p_836->g_132 += 1)
                    { /* block id: 90 */
                        int16_t l_227 = 2L;
                        int32_t *l_229 = &p_836->g_51;
                        int i, j, k;
                        (*l_229) = (p_42.f1 <= (((((((((*p_836->g_74) | p_836->g_180[1]) , p_836->g_218[3][0][1]) != ((l_222 == l_223) , &l_216)) < ((&l_200 != ((((safe_sub_func_int32_t_s_s((((void*)0 != l_226) ^ 0x46245483L), p_42.f0)) & 0x0B30L) ^ l_227) , &l_200)) , 0x1B23E1FFL)) , l_222) != l_228[2]) != p_42.f2) || 0x4B8241A096EA88E2L));
                    }
                    p_836->g_110 = ((safe_sub_func_uint64_t_u_u((((((l_232 , (p_836->g_62 , p_42.f1)) | (safe_rshift_func_uint16_t_u_u((+1UL), (0x21L > (&p_836->g_219[3] == &p_836->g_219[0]))))) || ((l_216 != ((*l_235) = (void*)0)) , l_237[1][2][4])) , (void*)0) != (void*)0), l_209)) , (void*)0);
                    for (p_836->g_93.f0 = 3; (p_836->g_93.f0 <= 8); p_836->g_93.f0 += 1)
                    { /* block id: 97 */
                        int32_t **l_239 = (void*)0;
                        int32_t *l_240 = &l_214[1][0][0];
                        int32_t *l_241[8] = {&l_214[2][5][0],&l_214[2][5][0],&l_214[2][5][0],&l_214[2][5][0],&l_214[2][5][0],&l_214[2][5][0],&l_214[2][5][0],&l_214[2][5][0]};
                        uint32_t l_245 = 4UL;
                        int i;
                        p_836->g_110 = (void*)0;
                        (*l_240) |= 0x734A936EL;
                        ++l_245;
                        if (l_237[1][2][4])
                            break;
                    }
                    if ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s((l_256 >= ((safe_mod_func_uint8_t_u_u(0x52L, ((*l_211) = ((safe_div_func_int32_t_s_s((l_237[1][2][4] ^= (l_214[5][5][0] = p_836->g_261)), (safe_div_func_uint8_t_u_u(l_264, ((safe_unary_minus_func_uint16_t_u(p_836->g_93.f0)) , p_43))))) , p_836->g_156[2][4][2])))) != p_836->g_51)), (safe_lshift_func_int8_t_s_u(((0x8C27L && 7L) >= p_44), 7)))) ^ p_836->g_140), (*p_836->g_74))) != p_42.f2), 0x4B94L)), p_836->g_140)))
                    { /* block id: 106 */
                        int32_t *l_268 = &l_244;
                        int32_t *l_269 = &l_232;
                        int32_t *l_270[1][4][9] = {{{&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0]},{&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0]},{&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0]},{&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0],&l_214[3][8][0]}}};
                        int32_t l_277[6][5] = {{0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L},{0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L},{0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L},{0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L},{0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L},{0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L,0x3498E7A9L}};
                        int i, j, k;
                        (*l_269) = ((*l_268) = p_42.f2);
                        (*l_269) = l_242[1];
                        --l_272;
                        ++l_287;
                    }
                    else
                    { /* block id: 112 */
                        uint8_t *l_290 = &p_836->g_132;
                        return l_290;
                    }
                }
                return l_211;
            }
            return &p_836->g_132;
        }
        else
        { /* block id: 119 */
            if (p_44)
                break;
        }
    }
    return &p_836->g_132;
}


/* ------------------------------------------ */
/* 
 * reads : p_836->g_51 p_836->g_4 p_836->g_74 p_836->g_75 p_836->g_19 p_836->g_93 p_836->g_109 p_836->g_116 p_836->g_110 p_836->g_132 p_836->g_138 p_836->g_142 p_836->g_156 p_836->g_180
 * writes: p_836->g_51 p_836->g_62 p_836->g_116 p_836->g_132 p_836->g_138 p_836->g_140 p_836->g_142 p_836->g_156 p_836->g_93 p_836->g_180
 */
struct S0  func_46(int32_t  p_47, struct S3 * p_836)
{ /* block id: 23 */
    int32_t *l_60 = &p_836->g_4;
    int32_t l_179[4][2][5] = {{{(-10L),(-1L),1L,(-6L),0x1901D41CL},{(-10L),(-1L),1L,(-6L),0x1901D41CL}},{{(-10L),(-1L),1L,(-6L),0x1901D41CL},{(-10L),(-1L),1L,(-6L),0x1901D41CL}},{{(-10L),(-1L),1L,(-6L),0x1901D41CL},{(-10L),(-1L),1L,(-6L),0x1901D41CL}},{{(-10L),(-1L),1L,(-6L),0x1901D41CL},{(-10L),(-1L),1L,(-6L),0x1901D41CL}}};
    int32_t *l_183[3][3][4] = {{{&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3]},{&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3]},{&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3]}},{{&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3]},{&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3]},{&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3]}},{{&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3]},{&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3]},{&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3],&l_179[1][0][3]}}};
    int64_t l_184 = 2L;
    int i, j, k;
    for (p_47 = 0; (p_47 <= (-15)); p_47 = safe_sub_func_uint16_t_u_u(p_47, 8))
    { /* block id: 26 */
        int16_t l_178[4][5][9] = {{{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL}},{{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL}},{{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL}},{{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL},{0x1858L,0x4A53L,(-8L),(-5L),(-1L),0x1901L,0L,6L,0x7E4DL}}};
        int i, j, k;
        for (p_836->g_51 = (-3); (p_836->g_51 <= (-17)); p_836->g_51 = safe_sub_func_uint32_t_u_u(p_836->g_51, 2))
        { /* block id: 29 */
            int64_t *l_61 = &p_836->g_62;
            int32_t l_71 = 0x6240C41AL;
            l_178[2][1][1] &= func_54(l_60, ((*l_61) = p_47), (*l_60), l_60, ((safe_rshift_func_uint16_t_u_u((func_65(l_71, &p_836->g_19, func_72(l_71, p_836), ((safe_div_func_int16_t_s_s((~p_836->g_51), 3UL)) | p_836->g_75), p_47, p_836) , 0x4061L), 7)) | (*p_836->g_110)), p_836);
        }
        p_836->g_180[1]++;
    }
    l_184 |= (*p_836->g_110);
    return p_836->g_93;
}


/* ------------------------------------------ */
/* 
 * reads : p_836->g_4
 * writes:
 */
int32_t  func_54(int32_t * p_55, int64_t  p_56, uint32_t  p_57, int32_t * p_58, uint64_t  p_59, struct S3 * p_836)
{ /* block id: 53 */
    struct S0 *l_169 = &p_836->g_93;
    int32_t l_171[9][6][4] = {{{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL}},{{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL}},{{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL}},{{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL}},{{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL}},{{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL}},{{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL}},{{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL}},{{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL},{0x2D8CDCC9L,4L,0x47E0269AL,0x0226C0DDL}}};
    int i, j, k;
    for (p_57 = 10; (p_57 != 21); p_57 = safe_add_func_uint64_t_u_u(p_57, 3))
    { /* block id: 56 */
        struct S0 *l_170 = (void*)0;
        int32_t *l_172 = (void*)0;
        int32_t *l_173 = &l_171[0][4][3];
        int32_t *l_174[2][7] = {{&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3]},{&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3],&l_171[0][4][3]}};
        uint64_t l_175 = 1UL;
        int i, j;
        l_170 = l_169;
        ++l_175;
    }
    return (*p_55);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_65(uint16_t  p_66, uint8_t * p_67, int64_t  p_68, uint64_t  p_69, int16_t  p_70, struct S3 * p_836)
{ /* block id: 51 */
    int32_t l_166 = 0x0BD7AEA9L;
    return l_166;
}


/* ------------------------------------------ */
/* 
 * reads : p_836->g_74 p_836->g_75 p_836->g_4 p_836->g_19 p_836->g_51 p_836->g_93 p_836->g_109 p_836->g_116 p_836->g_110 p_836->g_132 p_836->g_138 p_836->g_142 p_836->g_156 l_456
 * writes: p_836->g_116 p_836->g_132 p_836->g_138 p_836->g_140 p_836->g_142 p_836->g_156 p_836->g_93
 */
int64_t  func_72(int64_t  p_73, struct S3 * p_836)
{ /* block id: 31 */
    int32_t *l_82 = &p_836->g_4;
    int8_t *l_143 = &p_836->g_116[3];
    int8_t *l_145[4][3][9] = {{{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]},{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]},{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]}},{{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]},{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]},{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]}},{{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]},{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]},{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]}},{{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]},{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]},{(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3],(void*)0,(void*)0,&p_836->g_116[3],&p_836->g_116[3],&p_836->g_116[3]}}};
    int8_t **l_144 = &l_145[2][0][8];
    int32_t l_146 = 0L;
    uint16_t *l_155 = &p_836->g_156[2][4][2];
    int32_t *l_161 = &p_836->g_142;
    struct S0 l_162 = {0UL,0x6F32L,4294967295UL};
    struct S0 *l_163 = &p_836->g_93;
    int i, j, k;
    l_146 = ((p_836->g_74 == ((*l_144) = (l_143 = func_76(l_82, (((((p_836->g_75 > 0xB8364B2CL) , ((safe_sub_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s(((*l_82) , ((safe_lshift_func_uint16_t_u_s(p_73, 12)) < (((p_73 , ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(65535UL, p_836->g_19)), p_836->g_75)) , 0x6FL)) == 0x11L) | p_836->g_19))), 0x3715L)) , &p_836->g_4) != (void*)0) <= p_836->g_51), 255UL)) , 0x3F327E0EL)) && p_73) == (*l_82)) != 0x0DL), &p_836->g_75, p_836->g_93, (*l_82), p_836)))) , p_73);
    (*l_161) = (safe_rshift_func_uint16_t_u_s(((((+(p_73 <= (((safe_rshift_func_int8_t_s_u((*p_836->g_74), 0)) || ((safe_sub_func_uint64_t_u_u(0x25F292E68823E01FL, (safe_rshift_func_uint16_t_u_u((--(*l_155)), (safe_sub_func_int8_t_s_s(4L, (((-1L) & ((~(*l_82)) == p_836->g_142)) < p_836->g_132))))))) ^ (*l_82))) <= p_73))) && (*l_82)) , 3UL) < p_73), 6));
    (*l_163) = l_162;
    return p_836->g_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_836->g_74 p_836->g_75 p_836->g_109 p_836->g_116 p_836->g_4 p_836->g_93.f2 p_836->g_93.f1 p_836->g_110 p_836->g_51 p_836->g_132 p_836->g_138 p_836->g_142 l_456
 * writes: p_836->g_116 p_836->g_132 p_836->g_138 p_836->g_140 p_836->g_142
 */
int8_t * func_76(int32_t * p_77, uint64_t  p_78, int8_t * p_79, struct S0  p_80, int32_t  p_81, struct S3 * p_836)
{ /* block id: 32 */
    int32_t l_103 = 4L;
    int32_t **l_111 = &p_836->g_110;
    int32_t ***l_112 = (void*)0;
    int32_t ***l_113 = &l_111;
    uint64_t l_114[10][6][2] = {{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}},{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}},{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}},{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}},{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}},{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}},{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}},{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}},{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}},{{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L},{1UL,0x24F1449E4C9CD7D8L}}};
    int8_t *l_115 = &p_836->g_116[3];
    int64_t *l_117 = (void*)0;
    int32_t *l_118 = &l_103;
    uint64_t *l_125 = (void*)0;
    uint64_t *l_126 = &l_114[7][0][0];
    uint8_t *l_131 = &p_836->g_132;
    int64_t *l_137 = &p_836->g_138;
    int64_t *l_139 = &p_836->g_140;
    int32_t *l_141 = &p_836->g_142;
    int i, j, k;
    (*l_118) = (((safe_add_func_int8_t_s_s((*p_836->g_74), p_836->g_75)) & ((((safe_add_func_int8_t_s_s((*p_836->g_74), p_81)) , (((safe_div_func_int64_t_s_s((((((~((*l_115) |= (((safe_unary_minus_func_uint64_t_u((safe_add_func_uint16_t_u_u(l_103, (((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((((safe_add_func_int32_t_s_s(0x48D5A9C1L, ((l_103 , p_836->g_109[5][1][2]) == ((*l_113) = l_111)))) >= 0x6EC41C9606EF8CBCL) > l_114[7][0][0]))) != 0L), 65529UL)) == 0xBC3FCB6E431BEC19L) > p_80.f0))))) , 1UL) | 0xB053F5E9E6483285L))) < p_836->g_4) , l_117) == (void*)0) <= 1L), p_836->g_93.f2)) == 253UL) , (void*)0)) == (void*)0) , (-1L))) && p_80.f2);
    (*l_118) = (safe_add_func_uint8_t_u_u(p_80.f0, (((((void*)0 == (*l_113)) >= ((p_836->g_93.f1 == (safe_mul_func_uint16_t_u_u(0xAD40L, (safe_rshift_func_uint8_t_u_u((**l_111), (((void*)0 == &p_81) != ((*l_126)--))))))) | (*p_836->g_110))) ^ p_80.f1) == (***l_113))));
    (*l_141) |= (0x43L != (safe_add_func_int32_t_s_s((((*l_139) = ((0x347B9C4FL & p_81) >= (((*l_137) |= ((++(*l_131)) != (((p_836->g_4 & (&p_836->g_110 != &p_836->g_110)) == (safe_rshift_func_uint8_t_u_s(p_78, ((((!(((*l_118) = (*p_77)) & (**l_111))) , p_80) , 0x6AL) & (*p_836->g_74))))) && p_80.f2))) , (*l_118)))) ^ 0UL), (*p_77))));
    return p_79;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S3 c_837;
    struct S3* p_836 = &c_837;
    struct S3 c_838 = {
        0x05A1FA14L, // p_836->g_4
        0x3AL, // p_836->g_7
        2UL, // p_836->g_19
        0L, // p_836->g_51
        0x1E16845925F8A419L, // p_836->g_62
        0L, // p_836->g_75
        &p_836->g_75, // p_836->g_74
        {0x87F17E9BL,-2L,0UL}, // p_836->g_93
        &p_836->g_51, // p_836->g_110
        {{{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110},{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110}},{{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110},{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110}},{{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110},{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110}},{{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110},{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110}},{{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110},{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110}},{{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110},{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110}},{{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110},{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110}},{{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110},{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110}},{{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110},{(void*)0,&p_836->g_110,&p_836->g_110,&p_836->g_110}}}, // p_836->g_109
        {0x6EL,0x6EL,0x6EL,0x6EL}, // p_836->g_116
        0x1DL, // p_836->g_132
        1L, // p_836->g_138
        0x0A5162D90DD55268L, // p_836->g_140
        0x12E90868L, // p_836->g_142
        {{{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL}},{{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL}},{{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL}},{{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL}},{{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL},{8UL,0x61DBL,0xC0AAL}}}, // p_836->g_156
        {65527UL,0xB14EL,65527UL,65527UL,0xB14EL,65527UL,65527UL,0xB14EL}, // p_836->g_180
        0UL, // p_836->g_189
        0x937E8331BD6A1D81L, // p_836->g_196
        {7L}, // p_836->g_221
        &p_836->g_221[0], // p_836->g_220
        {&p_836->g_220,&p_836->g_220,&p_836->g_220,&p_836->g_220,&p_836->g_220}, // p_836->g_219
        {{{&p_836->g_219[3],&p_836->g_219[3]},{&p_836->g_219[3],&p_836->g_219[3]}},{{&p_836->g_219[3],&p_836->g_219[3]},{&p_836->g_219[3],&p_836->g_219[3]}},{{&p_836->g_219[3],&p_836->g_219[3]},{&p_836->g_219[3],&p_836->g_219[3]}},{{&p_836->g_219[3],&p_836->g_219[3]},{&p_836->g_219[3],&p_836->g_219[3]}},{{&p_836->g_219[3],&p_836->g_219[3]},{&p_836->g_219[3],&p_836->g_219[3]}}}, // p_836->g_218
        6UL, // p_836->g_261
        {0x7419F010L,0x7419F010L,0x7419F010L}, // p_836->g_278
        &p_836->g_138, // p_836->g_341
        {0x7D3AL}, // p_836->g_358
        4294967290UL, // p_836->g_390
        (void*)0, // p_836->g_436
        (-9L), // p_836->g_447
        &p_836->g_447, // p_836->g_446
        &p_836->g_446, // p_836->g_445
        &p_836->g_445, // p_836->g_444
        0x6BL, // p_836->g_498
        0xD99CL, // p_836->g_517
        0x53B30CA3L, // p_836->g_527
        (void*)0, // p_836->g_571
        {{0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL},{0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL},{0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL},{0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL},{0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL,4UL,0x12633A06L,0x12633A06L,4UL}}, // p_836->g_583
        9UL, // p_836->g_584
        &p_836->g_93.f1, // p_836->g_594
        4294967295UL, // p_836->g_693
        0x2882D825L, // p_836->g_713
        (void*)0, // p_836->g_714
        {0}, // p_836->g_738
        &p_836->g_74, // p_836->g_752
        &p_836->g_752, // p_836->g_751
        {{0x18BE10DE9A255774L,0x7B7549F9C13C86DCL,0x18BE10DE9A255774L,0x18BE10DE9A255774L,0x7B7549F9C13C86DCL},{0x18BE10DE9A255774L,0x7B7549F9C13C86DCL,0x18BE10DE9A255774L,0x18BE10DE9A255774L,0x7B7549F9C13C86DCL},{0x18BE10DE9A255774L,0x7B7549F9C13C86DCL,0x18BE10DE9A255774L,0x18BE10DE9A255774L,0x7B7549F9C13C86DCL},{0x18BE10DE9A255774L,0x7B7549F9C13C86DCL,0x18BE10DE9A255774L,0x18BE10DE9A255774L,0x7B7549F9C13C86DCL},{0x18BE10DE9A255774L,0x7B7549F9C13C86DCL,0x18BE10DE9A255774L,0x18BE10DE9A255774L,0x7B7549F9C13C86DCL},{0x18BE10DE9A255774L,0x7B7549F9C13C86DCL,0x18BE10DE9A255774L,0x18BE10DE9A255774L,0x7B7549F9C13C86DCL},{0x18BE10DE9A255774L,0x7B7549F9C13C86DCL,0x18BE10DE9A255774L,0x18BE10DE9A255774L,0x7B7549F9C13C86DCL},{0x18BE10DE9A255774L,0x7B7549F9C13C86DCL,0x18BE10DE9A255774L,0x18BE10DE9A255774L,0x7B7549F9C13C86DCL}}, // p_836->g_771
        1L, // p_836->g_772
        (void*)0, // p_836->g_798
        0x1448294BL, // p_836->g_799
        &p_836->g_358, // p_836->g_827
        &p_836->g_827, // p_836->g_826
        0x7CBDFFE4L, // p_836->g_830
    };
    c_837 = c_838;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_836);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_836->g_4, "p_836->g_4", print_hash_value);
    transparent_crc(p_836->g_7, "p_836->g_7", print_hash_value);
    transparent_crc(p_836->g_19, "p_836->g_19", print_hash_value);
    transparent_crc(p_836->g_51, "p_836->g_51", print_hash_value);
    transparent_crc(p_836->g_62, "p_836->g_62", print_hash_value);
    transparent_crc(p_836->g_75, "p_836->g_75", print_hash_value);
    transparent_crc(p_836->g_93.f0, "p_836->g_93.f0", print_hash_value);
    transparent_crc(p_836->g_93.f1, "p_836->g_93.f1", print_hash_value);
    transparent_crc(p_836->g_93.f2, "p_836->g_93.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_836->g_116[i], "p_836->g_116[i]", print_hash_value);

    }
    transparent_crc(p_836->g_132, "p_836->g_132", print_hash_value);
    transparent_crc(p_836->g_138, "p_836->g_138", print_hash_value);
    transparent_crc(p_836->g_140, "p_836->g_140", print_hash_value);
    transparent_crc(p_836->g_142, "p_836->g_142", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_836->g_156[i][j][k], "p_836->g_156[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_836->g_180[i], "p_836->g_180[i]", print_hash_value);

    }
    transparent_crc(p_836->g_189, "p_836->g_189", print_hash_value);
    transparent_crc(p_836->g_196, "p_836->g_196", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_836->g_221[i], "p_836->g_221[i]", print_hash_value);

    }
    transparent_crc(p_836->g_261, "p_836->g_261", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_836->g_278[i], "p_836->g_278[i]", print_hash_value);

    }
    transparent_crc(p_836->g_358.f0, "p_836->g_358.f0", print_hash_value);
    transparent_crc(p_836->g_390, "p_836->g_390", print_hash_value);
    transparent_crc(p_836->g_447, "p_836->g_447", print_hash_value);
    transparent_crc(p_836->g_498, "p_836->g_498", print_hash_value);
    transparent_crc(p_836->g_517, "p_836->g_517", print_hash_value);
    transparent_crc(p_836->g_527, "p_836->g_527", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_836->g_583[i][j], "p_836->g_583[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_836->g_584, "p_836->g_584", print_hash_value);
    transparent_crc(p_836->g_693, "p_836->g_693", print_hash_value);
    transparent_crc(p_836->g_713, "p_836->g_713", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_836->g_771[i][j], "p_836->g_771[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_836->g_772, "p_836->g_772", print_hash_value);
    transparent_crc(p_836->g_799, "p_836->g_799", print_hash_value);
    transparent_crc(p_836->g_830, "p_836->g_830", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
