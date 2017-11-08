// -g 96,41,1 -l 3,1,1
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


// Seed: 1289277151

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint32_t  f1;
   volatile int8_t  f2;
   volatile int64_t  f3;
   int8_t  f4;
   uint16_t  f5;
   int16_t  f6;
};

struct S1 {
    int32_t g_7;
    int16_t g_34;
    uint8_t g_38;
    struct S0 g_41;
    int32_t g_45;
    volatile int8_t g_47;
    volatile int64_t g_48;
    volatile int32_t g_49;
    int64_t g_50;
    uint32_t g_51[2];
    int32_t *g_94;
    int32_t **g_93;
    int32_t g_99;
    uint32_t g_107;
    uint16_t g_124;
    int8_t g_129;
    int32_t g_148;
    int32_t g_149;
    int16_t g_150;
    uint32_t g_151;
    int8_t *g_157;
    int8_t **g_156;
    uint64_t *g_179[3];
    int64_t g_207;
    int8_t g_208;
    int32_t g_209;
    uint64_t g_211;
    uint32_t g_237;
    uint32_t g_238;
    uint16_t *g_244;
    uint8_t g_292;
    int32_t g_303[6][7];
    struct S0 g_310;
    int32_t * volatile g_375;
    volatile int16_t g_394;
    uint64_t g_424;
    int32_t * volatile g_425;
    int32_t * volatile g_426;
    int32_t * volatile g_427[4];
    uint64_t g_468[2][1][1];
    struct S0 g_581;
    struct S0 g_605;
    struct S0 * volatile g_610;
    volatile struct S0 g_611[5][10];
    int32_t * volatile g_614;
    volatile struct S0 g_625;
    struct S0 g_627[1];
    int32_t * volatile g_660;
    int32_t * volatile g_666;
    struct S0 g_668[2][10][3];
    uint16_t * volatile *g_681;
    uint16_t * volatile * volatile * volatile g_680;
    volatile struct S0 g_717;
    volatile struct S0 *g_734[5][3][6];
    volatile struct S0 ** volatile g_733;
    uint16_t g_758;
    int32_t ** volatile g_796;
    int32_t *g_803;
    struct S0 g_804;
    struct S0 g_805;
    int32_t ** volatile g_809;
    volatile struct S0 ** volatile g_828;
    volatile struct S0 g_831;
    uint64_t **g_844;
    uint64_t ***g_843;
    volatile struct S0 ** volatile g_856;
    uint64_t g_868[1];
    int32_t ** volatile g_872;
    int32_t ** volatile g_874;
    int32_t ** volatile g_875;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_876);
int32_t * func_2(int64_t  p_3, int64_t  p_4, int32_t  p_5, uint64_t  p_6, struct S1 * p_876);
int64_t  func_13(int32_t * p_14, uint32_t  p_15, uint32_t  p_16, uint64_t  p_17, struct S1 * p_876);
int32_t * func_18(int32_t  p_19, uint32_t  p_20, uint8_t  p_21, struct S1 * p_876);
int8_t  func_24(int32_t  p_25, int64_t  p_26, int32_t * p_27, uint32_t  p_28, struct S1 * p_876);
int16_t * func_42(int32_t  p_43, struct S1 * p_876);
uint16_t  func_59(uint8_t * p_60, uint32_t  p_61, int32_t ** p_62, uint8_t  p_63, int32_t ** p_64, struct S1 * p_876);
uint32_t  func_70(uint8_t * p_71, uint16_t  p_72, int64_t  p_73, struct S1 * p_876);
int32_t * func_75(int16_t * p_76, struct S1 * p_876);
int64_t  func_82(int64_t  p_83, int32_t ** p_84, int32_t * p_85, int32_t ** p_86, int64_t  p_87, struct S1 * p_876);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_876->g_7 p_876->g_611.f6 p_876->g_614 p_876->g_45 p_876->g_107 p_876->g_427 p_876->g_211 p_876->g_303 p_876->g_625 p_876->g_157 p_876->g_41.f4 p_876->g_93 p_876->g_151 p_876->g_310.f1 p_876->g_660 p_876->g_581.f5 p_876->g_666 p_876->g_627.f6 p_876->g_668 p_876->g_680 p_876->g_611.f2 p_876->g_149 p_876->g_156 p_876->g_424 p_876->g_717 p_876->g_611.f4 p_876->g_605.f5 p_876->g_41.f0 p_876->g_733 p_876->g_758 p_876->g_129 p_876->g_99 p_876->g_796 p_876->g_94 p_876->g_581.f1 p_876->g_627.f1 p_876->g_803 p_876->g_804 p_876->g_610 p_876->g_805 p_876->g_809 p_876->g_375 p_876->g_292 p_876->g_627.f3 p_876->g_310.f0 p_876->g_734 p_876->g_828 p_876->g_831 p_876->g_124 p_876->g_310.f5 p_876->g_150 p_876->g_868 p_876->g_872 p_876->g_875
 * writes: p_876->g_45 p_876->g_107 p_876->g_427 p_876->g_211 p_876->g_605.f4 p_876->g_149 p_876->g_94 p_876->g_93 p_876->g_310.f1 p_876->g_150 p_876->g_424 p_876->g_611 p_876->g_734 p_876->g_758 p_876->g_605.f1 p_876->g_41.f4 p_876->g_605 p_876->g_244 p_876->g_99 p_876->g_41.f6 p_876->g_843 p_876->g_868
 */
int32_t  func_1(struct S1 * p_876)
{ /* block id: 4 */
    int8_t l_8 = 1L;
    int64_t l_616 = (-9L);
    uint64_t l_667 = 0x80C7C15EFA64E968L;
    (*p_876->g_875) = func_2(p_876->g_7, l_8, (safe_mul_func_int8_t_s_s(p_876->g_7, (((safe_mod_func_uint8_t_u_u((func_13(func_18(l_8, (safe_mul_func_int8_t_s_s(func_24((((18446744073709551611UL > p_876->g_7) == (p_876->g_7 , 0xC257A10DD664087AL)) == ((safe_div_func_uint16_t_u_u(0x6FF1L, p_876->g_7)) ^ p_876->g_7)), l_8, &p_876->g_7, p_876->g_7, p_876), l_8)), p_876->g_611[1][1].f6, p_876), l_8, l_8, l_616, p_876) , 247UL), l_616)) || l_667) , p_876->g_627[0].f6))), l_616, p_876);
    return l_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_876->g_668 p_876->g_680 p_876->g_310.f1 p_876->g_614 p_876->g_45 p_876->g_303 p_876->g_611.f2 p_876->g_149 p_876->g_625.f0 p_876->g_156 p_876->g_157 p_876->g_41.f4 p_876->g_424 p_876->g_717 p_876->g_611.f4 p_876->g_605.f5 p_876->g_41.f0 p_876->g_733 p_876->g_758 p_876->g_129 p_876->g_99 p_876->g_796 p_876->g_625.f5 p_876->g_94 p_876->g_581.f1 p_876->g_627.f1 p_876->g_151 p_876->g_803 p_876->g_804 p_876->g_610 p_876->g_805 p_876->g_809 p_876->g_375 p_876->g_292 p_876->g_627.f3 p_876->g_310.f0 p_876->g_734 p_876->g_828 p_876->g_831 p_876->g_124 p_876->g_310.f5 p_876->g_150 p_876->g_660 p_876->g_868 p_876->g_872
 * writes: p_876->g_150 p_876->g_45 p_876->g_424 p_876->g_611 p_876->g_734 p_876->g_758 p_876->g_605.f1 p_876->g_41.f4 p_876->g_94 p_876->g_107 p_876->g_605 p_876->g_244 p_876->g_99 p_876->g_41.f6 p_876->g_843 p_876->g_868
 */
int32_t * func_2(int64_t  p_3, int64_t  p_4, int32_t  p_5, uint64_t  p_6, struct S1 * p_876)
{ /* block id: 309 */
    int32_t *l_677 = &p_876->g_148;
    uint16_t **l_679[1];
    uint16_t ***l_678 = &l_679[0];
    int32_t l_690[10][8] = {{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L},{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L},{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L},{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L},{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L},{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L},{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L},{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L},{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L},{(-4L),0x6D85BF23L,0x2CE88AF5L,0x2CE88AF5L,0x6D85BF23L,(-4L),0x65B09F2BL,5L}};
    uint32_t **l_691 = (void*)0;
    uint32_t *l_692 = &p_876->g_151;
    int16_t *l_693 = &p_876->g_150;
    int32_t *l_695 = &p_876->g_209;
    int32_t **l_694 = &l_695;
    uint8_t l_701 = 0x1FL;
    uint32_t l_714 = 0UL;
    uint32_t l_735 = 0xEF2119BAL;
    uint64_t l_742[5];
    uint8_t l_840 = 0xA6L;
    volatile struct S0 *l_857 = &p_876->g_831;
    int32_t *l_873 = &p_876->g_149;
    int i, j;
    for (i = 0; i < 1; i++)
        l_679[i] = &p_876->g_244;
    for (i = 0; i < 5; i++)
        l_742[i] = 0x80CC04BC647D42EEL;
    if ((p_876->g_668[1][3][0] , (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_add_func_int64_t_s_s(0x451B406BC7D81732L, (safe_rshift_func_int16_t_s_s((p_3 > (l_677 == ((*l_694) = func_18((l_678 != p_876->g_680), p_876->g_310.f1, (safe_add_func_uint32_t_u_u((((*l_693) = (safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_690[7][2], ((l_692 = l_677) == (void*)0))), p_3))) | 0UL), l_690[7][0])), p_876)))), 13)))) != l_690[2][1]), 2)), l_690[9][7])) != p_4) , l_690[7][2])))
    { /* block id: 313 */
        uint64_t l_698 = 0UL;
        int32_t l_705 = (-10L);
        int32_t l_706 = 0x6634FAA5L;
        int32_t l_707 = 1L;
        int16_t l_708 = (-1L);
        int32_t l_709 = 0x35863CE6L;
        int32_t l_710 = (-1L);
        int32_t l_711 = 0x11B0F2BFL;
        int32_t l_712 = 0x4254B951L;
        int32_t l_713[7] = {0x5AD1C8B8L,0x5AD1C8B8L,0x5AD1C8B8L,0x5AD1C8B8L,0x5AD1C8B8L,0x5AD1C8B8L,0x5AD1C8B8L};
        int16_t *l_730 = &p_876->g_310.f6;
        int64_t l_768 = (-1L);
        int32_t *l_802 = &l_713[2];
        uint16_t l_825 = 0xEB6EL;
        int32_t ***l_839 = &p_876->g_93;
        int32_t *l_859 = &p_876->g_7;
        int32_t *l_860 = &p_876->g_99;
        int32_t *l_861 = (void*)0;
        int32_t *l_862 = &p_876->g_7;
        int32_t *l_863 = (void*)0;
        int32_t *l_864 = &p_876->g_99;
        int32_t *l_865 = &l_690[9][3];
        int32_t *l_866[2][7] = {{&l_709,&l_707,&l_705,&l_707,&l_709,&l_709,&l_707},{&l_709,&l_707,&l_705,&l_707,&l_709,&l_709,&l_707}};
        int16_t l_867 = 0x7B40L;
        int i, j;
        if ((p_876->g_303[0][6] ^ ((+(safe_mul_func_uint8_t_u_u(((l_698 > p_876->g_611[1][1].f2) , ((safe_div_func_uint8_t_u_u((p_876->g_149 , (l_701 || 0x2D5BL)), (safe_mul_func_int16_t_s_s(((*l_693) = ((((&p_876->g_50 != ((&p_6 != (void*)0) , (void*)0)) && l_698) , l_698) != p_876->g_625.f0)), l_690[6][7])))) > 0UL)), (**p_876->g_156)))) ^ l_701)))
        { /* block id: 315 */
            int32_t *l_704[6][5] = {{&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0]},{&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0]},{&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0]},{&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0]},{&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0]},{&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0],&l_690[2][0]}};
            int i, j;
            l_714++;
        }
        else
        { /* block id: 317 */
            int32_t *l_731 = &l_711;
            int32_t l_748 = 0x01BD02FBL;
            int32_t l_750 = 5L;
            int32_t l_752 = 0x420D87A2L;
            int32_t l_754 = 1L;
            int32_t l_756 = 2L;
            int32_t l_757[8][5][4] = {{{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L}},{{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L}},{{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L}},{{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L}},{{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L}},{{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L}},{{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L}},{{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L},{4L,(-1L),0x6DE09BA4L,0x1CD7EE78L}}};
            int32_t l_794 = 9L;
            int32_t *l_858 = &p_876->g_45;
            int i, j, k;
            for (p_876->g_424 = 0; (p_876->g_424 <= 2); p_876->g_424 += 1)
            { /* block id: 320 */
                uint64_t l_729 = 0UL;
                int32_t l_749 = 0x57000142L;
                int32_t l_751 = 1L;
                int32_t l_753 = 1L;
                int32_t l_755[5][1][8] = {{{0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L}},{{0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L}},{{0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L}},{{0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L}},{{0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L,0x3720D8C4L}}};
                uint16_t ***l_816[9][2] = {{&l_679[0],&l_679[0]},{&l_679[0],&l_679[0]},{&l_679[0],&l_679[0]},{&l_679[0],&l_679[0]},{&l_679[0],&l_679[0]},{&l_679[0],&l_679[0]},{&l_679[0],&l_679[0]},{&l_679[0],&l_679[0]},{&l_679[0],&l_679[0]}};
                int32_t **l_821 = &l_677;
                uint64_t *l_824[1][6] = {{(void*)0,&l_698,(void*)0,(void*)0,&l_698,(void*)0}};
                uint64_t ***l_841 = (void*)0;
                int i, j, k;
                for (l_712 = 0; (l_712 <= 2); l_712 += 1)
                { /* block id: 323 */
                    int32_t *l_732 = &l_713[2];
                    uint16_t **l_793 = &p_876->g_244;
                    uint32_t l_795 = 1UL;
                    int32_t *l_801 = &p_876->g_149;
                    int i, j;
                    p_876->g_611[(l_712 + 2)][(p_876->g_424 + 2)] = p_876->g_717;
                    if ((safe_add_func_uint64_t_u_u((l_713[(p_876->g_424 + 3)] , (safe_div_func_int8_t_s_s(((l_713[(p_876->g_424 + 3)] | (p_876->g_611[(l_712 + 2)][(p_876->g_424 + 2)].f4 | (((p_4 && p_5) <= ((((((((safe_div_func_int32_t_s_s(p_3, (-1L))) != ((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((safe_add_func_uint32_t_u_u(p_876->g_605.f5, (((l_729 || 0L) || l_713[2]) & l_690[7][2]))))), p_876->g_41.f0)) | p_4)) || 0UL) ^ l_729) , l_713[(p_876->g_424 + 3)]) == p_3) & p_876->g_310.f1) || 0x09082CA0L)) , 0xA0L))) & l_712), 1UL))), p_3)))
                    { /* block id: 325 */
                        int32_t *l_738 = &l_713[2];
                        int32_t *l_739 = &p_876->g_7;
                        int32_t *l_740 = (void*)0;
                        int32_t *l_741 = &p_876->g_99;
                        l_732 = l_731;
                        (*p_876->g_733) = &p_876->g_611[(l_712 + 2)][(p_876->g_424 + 2)];
                        l_735--;
                        ++l_742[3];
                    }
                    else
                    { /* block id: 330 */
                        int32_t *l_745 = &p_876->g_99;
                        int32_t l_746 = 0x6D009BB3L;
                        int32_t *l_747[2][6][1];
                        uint32_t l_765 = 4294967288UL;
                        uint32_t *l_791 = (void*)0;
                        uint32_t *l_792[5][7] = {{&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1},{&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1},{&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1},{&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1},{&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1,&p_876->g_310.f1}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_747[i][j][k] = &l_690[6][6];
                            }
                        }
                        ++p_876->g_758;
                        l_795 ^= ((*l_732) = (((((safe_lshift_func_int8_t_s_u((l_747[1][2][0] == (void*)0), 3)) <= (safe_add_func_uint16_t_u_u((l_705 = l_765), (safe_add_func_int32_t_s_s(l_768, ((safe_sub_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(((p_4 = ((+(safe_mul_func_int8_t_s_s(((*p_876->g_157) = (safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((-3L), ((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(0x5F550D10L, (p_876->g_605.f1 = (safe_mod_func_uint64_t_u_u(p_5, p_4))))), ((p_6 , l_793) == (*l_678)))), 0x437DL)), 0x4AB3L)), 1UL)) | l_794))), p_876->g_625.f0))), p_5))) ^ p_6)) > 18446744073709551612UL), 6UL)) < l_755[4][0][3]) | 8UL), 6UL)) >= (*l_731))))))) >= p_5) | p_876->g_129) , (*l_745)));
                    }
                    if (l_690[7][2])
                    { /* block id: 339 */
                        uint8_t l_799 = 1UL;
                        (*p_876->g_796) = &p_5;
                        l_801 = func_18(((p_3 = ((safe_div_func_int32_t_s_s(((p_876->g_625.f5 >= (*l_731)) > (l_799 , ((p_876->g_149 , &l_690[1][1]) == (((((**p_876->g_156) , ((p_876->g_107 = (safe_unary_minus_func_int32_t_s((*p_876->g_94)))) == p_5)) != p_876->g_581.f1) < p_876->g_627[0].f1) , &p_5)))), 0x9184E4CFL)) ^ (-1L))) , (*l_731)), l_799, p_876->g_151, p_876);
                        return p_876->g_803;
                    }
                    else
                    { /* block id: 345 */
                        uint16_t *l_808[2][6][7] = {{{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5}},{{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5},{&p_876->g_41.f5,&p_876->g_41.f5,&p_876->g_805.f5,(void*)0,&p_876->g_124,&p_876->g_627[0].f5,&p_876->g_627[0].f5}}};
                        int i, j, k;
                        (*p_876->g_610) = p_876->g_804;
                        (*p_876->g_809) = func_18((p_876->g_805 , ((+4294967292UL) , l_755[1][0][6])), (p_6 | (((((l_690[9][7] = 255UL) , (safe_lshift_func_uint8_t_u_s(((l_808[0][0][2] != (p_876->g_244 = (void*)0)) & (-3L)), 1))) >= 0L) >= 0x2CL) > (*l_802))), (*l_802), p_876);
                        if ((*l_802))
                            continue;
                        (*l_802) |= p_4;
                    }
                }
                if (((((safe_unary_minus_func_int16_t_s(((l_755[1][0][1] = (safe_unary_minus_func_int8_t_s((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(((0x4906A413L < (((*l_731) ^= ((((((void*)0 == l_816[6][0]) >= (safe_rshift_func_int16_t_s_u(l_714, ((*p_876->g_375) > (((safe_lshift_func_uint8_t_u_u(((void*)0 != l_821), ((safe_add_func_uint64_t_u_u((++l_825), (-10L))) & 0x4DDFL))) >= p_876->g_292) != l_701))))) , p_876->g_627[0].f3) >= (*p_876->g_803)) || 0xFC0EA546D922462EL)) && p_3)) || 0x216C1863L), p_6)), 0xE77488B4F52C6409L))))) , (*l_731)))) || p_3) , 0x52AADB06L) != p_876->g_310.f0))
                { /* block id: 357 */
                    (*p_876->g_828) = (*p_876->g_733);
                }
                else
                { /* block id: 359 */
                    uint16_t l_836 = 65530UL;
                    int32_t ***l_837 = &p_876->g_93;
                    int32_t ****l_838[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_838[i] = &l_837;
                    (*p_876->g_803) = (safe_rshift_func_uint16_t_u_u((*l_731), (2L < (p_876->g_831 , (((safe_div_func_int8_t_s_s((l_755[1][0][1] <= (safe_mul_func_int8_t_s_s(l_690[7][2], (((8L && l_836) < p_876->g_804.f5) != (((l_839 = l_837) == (void*)0) && p_876->g_124))))), l_840)) & p_5) == 9L)))));
                    for (p_876->g_41.f6 = 0; (p_876->g_41.f6 <= 2); p_876->g_41.f6 += 1)
                    { /* block id: 364 */
                        uint64_t ****l_842 = &l_841;
                        int32_t l_855[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
                        int i;
                        (*l_802) |= (((((p_876->g_303[0][6] >= 255UL) != (((p_876->g_843 = ((*l_842) = l_841)) != &p_876->g_844) || 246UL)) < ((safe_lshift_func_int8_t_s_s((((-5L) & (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_4, 5)), ((safe_rshift_func_int8_t_s_u(((((safe_div_func_int16_t_s_s((((0x1A5EA4F6D40C6242L >= l_855[0]) , p_876->g_625.f0) != p_876->g_310.f5), p_876->g_150)) == l_690[9][6]) > (*l_731)) >= p_6), 4)) || p_6)))) | (*p_876->g_157)), 5)) , 0x33B2EC5179728D0DL)) < 0L) <= p_6);
                        if (l_755[0][0][1])
                            break;
                    }
                    for (p_876->g_758 = 0; (p_876->g_758 <= 2); p_876->g_758 += 1)
                    { /* block id: 372 */
                        (*p_876->g_809) = &p_5;
                        (*l_731) = (*l_731);
                        l_857 = (*p_876->g_733);
                    }
                    (*l_802) &= ((*p_876->g_660) || ((p_876->g_627[0].f1 ^ 0xC5794C37L) & l_755[3][0][3]));
                }
                (*l_731) = ((*l_802) |= 0x4A01A67EL);
            }
            return l_858;
        }
        p_876->g_868[0]--;
    }
    else
    { /* block id: 385 */
        int16_t l_871[9][5][3] = {{{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)}},{{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)}},{{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)}},{{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)}},{{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)}},{{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)}},{{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)}},{{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)}},{{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)},{0x600AL,(-1L),(-1L)}}};
        int i, j, k;
        (*p_876->g_803) ^= l_871[3][2][2];
    }
    (*p_876->g_872) = &p_5;
    return l_873;
}


/* ------------------------------------------ */
/* 
 * reads : p_876->g_107 p_876->g_427 p_876->g_211 p_876->g_303 p_876->g_625 p_876->g_157 p_876->g_41.f4 p_876->g_93 p_876->g_151 p_876->g_310.f1 p_876->g_660 p_876->g_45 p_876->g_581.f5 p_876->g_666
 * writes: p_876->g_107 p_876->g_427 p_876->g_211 p_876->g_605.f4 p_876->g_149 p_876->g_94 p_876->g_93 p_876->g_310.f1 p_876->g_45
 */
int64_t  func_13(int32_t * p_14, uint32_t  p_15, uint32_t  p_16, uint64_t  p_17, struct S1 * p_876)
{ /* block id: 288 */
    uint64_t l_641 = 7UL;
    int32_t ***l_653 = (void*)0;
    int32_t ***l_654 = &p_876->g_93;
    uint32_t *l_655 = &p_876->g_310.f1;
    int32_t l_665[2];
    int i;
    for (i = 0; i < 2; i++)
        l_665[i] = 7L;
    for (p_876->g_107 = 0; (p_876->g_107 <= 3); p_876->g_107 += 1)
    { /* block id: 291 */
        int32_t l_628[9][9] = {{1L,1L,(-1L),1L,0x112F3FFBL,(-1L),1L,9L,0L},{1L,1L,(-1L),1L,0x112F3FFBL,(-1L),1L,9L,0L},{1L,1L,(-1L),1L,0x112F3FFBL,(-1L),1L,9L,0L},{1L,1L,(-1L),1L,0x112F3FFBL,(-1L),1L,9L,0L},{1L,1L,(-1L),1L,0x112F3FFBL,(-1L),1L,9L,0L},{1L,1L,(-1L),1L,0x112F3FFBL,(-1L),1L,9L,0L},{1L,1L,(-1L),1L,0x112F3FFBL,(-1L),1L,9L,0L},{1L,1L,(-1L),1L,0x112F3FFBL,(-1L),1L,9L,0L},{1L,1L,(-1L),1L,0x112F3FFBL,(-1L),1L,9L,0L}};
        int32_t l_633 = 0x30AF50D6L;
        int32_t l_635 = (-1L);
        int i, j;
        p_876->g_427[p_876->g_107] = p_876->g_427[p_876->g_107];
        for (p_876->g_211 = 0; (p_876->g_211 <= 5); p_876->g_211 += 1)
        { /* block id: 295 */
            struct S0 *l_626 = &p_876->g_627[0];
            int8_t *l_629 = &p_876->g_605.f4;
            int32_t *l_630 = &l_628[7][0];
            uint8_t l_634 = 0xCFL;
            int32_t *l_636 = (void*)0;
            int32_t *l_637 = &p_876->g_149;
            int32_t *l_638 = &l_628[6][6];
            int32_t *l_639 = &l_635;
            int32_t *l_640[3][1][4] = {{{&l_633,(void*)0,&p_876->g_45,(void*)0}},{{&l_633,(void*)0,&p_876->g_45,(void*)0}},{{&l_633,(void*)0,&p_876->g_45,(void*)0}}};
            int i, j, k;
            l_635 ^= (((p_876->g_303[(p_876->g_107 + 2)][(p_876->g_211 + 1)] , (safe_lshift_func_int8_t_s_u(8L, ((safe_rshift_func_int16_t_s_s((((+(safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((0x40L && (p_876->g_625 , (*p_876->g_157))), ((*l_630) = (p_876->g_149 = (((void*)0 != l_626) >= ((*l_629) = l_628[6][6])))))) , (safe_sub_func_int16_t_s_s((((*p_876->g_93) = (void*)0) != p_14), (*l_630)))), p_16))) != p_16) & p_876->g_151), l_633)) && 0xFD2900D85FFB0D14L)))) < 0x86BBL) && l_634);
            l_641++;
        }
    }
    (*p_876->g_660) &= ((((safe_unary_minus_func_uint64_t_u(0UL)) || (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((0x10L >= ((safe_lshift_func_int8_t_s_s((+((&p_14 == ((*l_654) = &p_14)) & ((p_15 || ((*l_655)++)) || ((!p_15) >= p_15)))), (safe_rshift_func_int16_t_s_u((~p_15), 5)))) != p_17)), l_641)), 7)), 0x85L))) ^ 18446744073709551615UL) != 0L);
    (*p_876->g_666) = (safe_div_func_int64_t_s_s(p_876->g_581.f5, ((safe_div_func_uint16_t_u_u(0xFC73L, l_665[0])) | (p_16 < p_17))));
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_876->g_614 p_876->g_45
 * writes: p_876->g_45
 */
int32_t * func_18(int32_t  p_19, uint32_t  p_20, uint8_t  p_21, struct S1 * p_876)
{ /* block id: 285 */
    int64_t *l_613 = (void*)0;
    int32_t *l_615 = (void*)0;
    (*p_876->g_614) |= ((void*)0 == l_613);
    return l_615;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_24(int32_t  p_25, int64_t  p_26, int32_t * p_27, uint32_t  p_28, struct S1 * p_876)
{ /* block id: 5 */
    uint16_t l_31[10][7] = {{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL},{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL},{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL},{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL},{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL},{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL},{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL},{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL},{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL},{65527UL,65527UL,65526UL,0x7649L,0x5DC6L,0x7649L,65526UL}};
    int32_t *l_35 = (void*)0;
    int8_t *l_324 = &p_876->g_208;
    int16_t *l_325 = (void*)0;
    int32_t l_371[10] = {0x03E16D2CL,0x600DF704L,0x03E16D2CL,0x03E16D2CL,0x600DF704L,0x03E16D2CL,0x03E16D2CL,0x600DF704L,0x03E16D2CL,0x03E16D2CL};
    int8_t l_396 = 0L;
    int16_t l_454[10];
    int8_t l_489 = 0L;
    uint64_t **l_595 = (void*)0;
    int i, j;
    for (i = 0; i < 10; i++)
        l_454[i] = 0L;
    for (p_26 = 0; (p_26 <= 6); p_26 += 1)
    { /* block id: 8 */
        int16_t *l_33 = &p_876->g_34;
        int32_t **l_36 = &l_35;
        uint8_t *l_37[9][10][2] = {{{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38}},{{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38}},{{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38}},{{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38}},{{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38}},{{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38}},{{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38}},{{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38}},{{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38},{(void*)0,&p_876->g_38}}};
        int32_t l_326 = (-1L);
        uint16_t l_374 = 0x5968L;
        int64_t l_445 = 0L;
        uint64_t l_476[1];
        int32_t l_484[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_476[i] = 0x85A28A2CF343A750L;
        for (i = 0; i < 1; i++)
            l_484[i] = 0x583B5BCAL;
        for (p_25 = 6; (p_25 >= 1); p_25 -= 1)
        { /* block id: 11 */
            int32_t *l_32 = (void*)0;
            l_32 = p_27;
        }
    }
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_876->g_51
 * writes: p_876->g_51
 */
int16_t * func_42(int32_t  p_43, struct S1 * p_876)
{ /* block id: 18 */
    int32_t *l_44[4][3][5] = {{{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45},{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45},{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45}},{{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45},{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45},{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45}},{{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45},{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45},{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45}},{{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45},{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45},{&p_876->g_7,&p_876->g_45,&p_876->g_7,&p_876->g_7,&p_876->g_45}}};
    int8_t l_46 = 0x0DL;
    int16_t *l_54 = &p_876->g_41.f6;
    int i, j, k;
    --p_876->g_51[1];
    return l_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_876->g_207 p_876->g_93
 * writes: p_876->g_207 p_876->g_124 p_876->g_94
 */
uint16_t  func_59(uint8_t * p_60, uint32_t  p_61, int32_t ** p_62, uint8_t  p_63, int32_t ** p_64, struct S1 * p_876)
{ /* block id: 103 */
    uint8_t l_300 = 255UL;
    for (p_876->g_207 = 0; (p_876->g_207 <= 2); p_876->g_207 += 1)
    { /* block id: 106 */
        int16_t l_295 = 0x638AL;
        int32_t *l_296 = &p_876->g_149;
        int32_t *l_297 = &p_876->g_149;
        int32_t *l_298 = (void*)0;
        int32_t *l_299 = &p_876->g_45;
        for (p_876->g_124 = 0; (p_876->g_124 <= 2); p_876->g_124 += 1)
        { /* block id: 109 */
            (*p_876->g_93) = (*p_64);
        }
        l_295 = 1L;
        l_300++;
    }
    return p_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_876->g_38 p_876->g_50 p_876->g_93 p_876->g_45 p_876->g_99 p_876->g_107 p_876->g_7 p_876->g_94 p_876->g_41.f4 p_876->g_41.f6 p_876->g_129 p_876->g_41.f1 p_876->g_41.f5 p_876->g_41.f0 p_876->g_151 p_876->g_34 p_876->g_179 p_876->g_211 p_876->g_124 p_876->g_208 p_876->g_238 p_876->g_157 p_876->g_150 p_876->g_292
 * writes: p_876->g_45 p_876->g_99 p_876->g_107 p_876->g_124 p_876->g_38 p_876->g_129 p_876->g_151 p_876->g_156 p_876->g_34 p_876->g_150 p_876->g_94 p_876->g_179 p_876->g_149 p_876->g_211 p_876->g_237 p_876->g_238 p_876->g_244 p_876->g_292
 */
uint32_t  func_70(uint8_t * p_71, uint16_t  p_72, int64_t  p_73, struct S1 * p_876)
{ /* block id: 21 */
    int16_t l_79 = 0x3D8AL;
    int32_t *l_91 = &p_876->g_7;
    int32_t **l_90 = &l_91;
    int32_t ***l_92 = &l_90;
    int32_t *l_289 = &p_876->g_99;
    int32_t *l_290 = &p_876->g_99;
    int32_t *l_291[2][6][3] = {{{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45}},{{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45},{&p_876->g_45,&p_876->g_45,&p_876->g_45}}};
    int i, j, k;
    (*p_876->g_93) = func_75((((safe_mul_func_int8_t_s_s((p_876->g_238 ^= (l_79 <= (safe_lshift_func_uint8_t_u_s((p_73 | func_82(((((((safe_add_func_uint16_t_u_u(p_73, (p_72 <= ((((((*l_92) = l_90) != (void*)0) , 0x8BF6E679L) , p_71) != (((p_72 == 8L) ^ p_72) , (void*)0))))) != (*p_71)) >= 65532UL) || p_876->g_50) | p_73) < p_73), p_876->g_93, l_91, &p_876->g_94, p_876->g_45, p_876)), 4)))), (*p_876->g_157))) <= (*l_91)) , (void*)0), p_876);
    for (p_876->g_107 = 0; (p_876->g_107 <= 2); p_876->g_107 += 1)
    { /* block id: 89 */
        uint32_t *l_265 = &p_876->g_107;
        int32_t l_266 = 0x0E99261BL;
        uint16_t *l_267[5][7] = {{(void*)0,(void*)0,&p_876->g_124,(void*)0,&p_876->g_124,(void*)0,(void*)0},{(void*)0,(void*)0,&p_876->g_124,(void*)0,&p_876->g_124,(void*)0,(void*)0},{(void*)0,(void*)0,&p_876->g_124,(void*)0,&p_876->g_124,(void*)0,(void*)0},{(void*)0,(void*)0,&p_876->g_124,(void*)0,&p_876->g_124,(void*)0,(void*)0},{(void*)0,(void*)0,&p_876->g_124,(void*)0,&p_876->g_124,(void*)0,(void*)0}};
        uint32_t l_268 = 0UL;
        uint32_t *l_271 = (void*)0;
        uint32_t *l_272 = (void*)0;
        uint32_t *l_273 = &p_876->g_238;
        int i, j;
        l_266 = ((safe_rshift_func_uint8_t_u_s(0x28L, (safe_lshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s((+(safe_rshift_func_int8_t_s_s((0x7D082DB463EA9C36L ^ ((l_91 != l_265) ^ (l_266 || (((*l_273) = (1UL ^ ((&p_876->g_179[p_876->g_107] != (void*)0) && (--l_268)))) , ((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_266, p_876->g_124)), l_266)), 0xC9C1CD1AL)) <= (*p_71)))))), 3))), 65529UL)) > (*p_876->g_94)) != (*l_91)), p_876->g_150)))) ^ p_72);
        for (p_73 = 2; (p_73 >= 0); p_73 -= 1)
        { /* block id: 95 */
            uint32_t *l_286 = &p_876->g_237;
            int16_t *l_287[10] = {&p_876->g_34,&p_876->g_34,&p_876->g_34,&p_876->g_34,&p_876->g_34,&p_876->g_34,&p_876->g_34,&p_876->g_34,&p_876->g_34,&p_876->g_34};
            int32_t *l_288 = &p_876->g_149;
            int i;
            (*l_288) = (((safe_div_func_int32_t_s_s(0x457E8F95L, ((safe_lshift_func_int16_t_s_u((l_266 ^= ((safe_mod_func_int16_t_s_s(((((void*)0 == l_286) , (((void*)0 == &p_876->g_237) != (0x234898C6L == p_876->g_41.f6))) ^ (p_876->g_150 , p_876->g_211)), 9UL)) > 0x4077BFC1412A8300L)), p_73)) , (*p_876->g_94)))) != (*p_876->g_94)) , 0x277F5BDCL);
        }
        return p_876->g_41.f1;
    }
    ++p_876->g_292;
    return (*l_289);
}


/* ------------------------------------------ */
/* 
 * reads : p_876->g_34 p_876->g_157 p_876->g_41.f4 p_876->g_38 p_876->g_150 p_876->g_41.f6 p_876->g_107 p_876->g_41.f1 p_876->g_93 p_876->g_94
 * writes: p_876->g_149 p_876->g_244
 */
int32_t * func_75(int16_t * p_76, struct S1 * p_876)
{ /* block id: 81 */
    int32_t *l_239[10] = {(void*)0,&p_876->g_149,(void*)0,&p_876->g_149,(void*)0,(void*)0,&p_876->g_149,(void*)0,&p_876->g_149,(void*)0};
    uint16_t *l_242 = &p_876->g_41.f5;
    uint16_t **l_243[2];
    int32_t l_253 = (-1L);
    int32_t l_254 = 0x1BE3F048L;
    int8_t l_255 = 0x24L;
    int32_t l_256 = 0L;
    int i;
    for (i = 0; i < 2; i++)
        l_243[i] = &l_242;
    p_876->g_149 = 0x37182850L;
    l_256 = ((-6L) | (((safe_sub_func_uint8_t_u_u((p_876->g_34 ^ (&p_876->g_124 == (p_876->g_244 = l_242))), (safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((((((safe_div_func_int8_t_s_s(((*p_876->g_157) <= p_876->g_38), p_876->g_150)) , (l_253 , (0x01L != p_876->g_41.f6))) ^ l_254) && (-7L)) <= l_255), p_876->g_34)) == 0xE0B29770L), 1UL)), p_876->g_107)))) & p_876->g_41.f1) <= 0x4CL));
    return (*p_876->g_93);
}


/* ------------------------------------------ */
/* 
 * reads : p_876->g_45 p_876->g_99 p_876->g_107 p_876->g_7 p_876->g_94 p_876->g_41.f4 p_876->g_41.f6 p_876->g_129 p_876->g_41.f1 p_876->g_41.f5 p_876->g_41.f0 p_876->g_151 p_876->g_50 p_876->g_34 p_876->g_179 p_876->g_93 p_876->g_211 p_876->g_124 p_876->g_208
 * writes: p_876->g_45 p_876->g_99 p_876->g_107 p_876->g_124 p_876->g_38 p_876->g_129 p_876->g_151 p_876->g_156 p_876->g_34 p_876->g_150 p_876->g_94 p_876->g_179 p_876->g_149 p_876->g_211 p_876->g_237
 */
int64_t  func_82(int64_t  p_83, int32_t ** p_84, int32_t * p_85, int32_t ** p_86, int64_t  p_87, struct S1 * p_876)
{ /* block id: 23 */
    uint64_t l_97 = 18446744073709551614UL;
    int32_t l_125 = 0x4EB3AD1BL;
    uint16_t l_126 = 0xC474L;
    int32_t l_137[3][8] = {{1L,1L,0x644EA386L,0x0321B0A3L,0x2B3D1750L,0x0321B0A3L,0x644EA386L,1L},{1L,1L,0x644EA386L,0x0321B0A3L,0x2B3D1750L,0x0321B0A3L,0x644EA386L,1L},{1L,1L,0x644EA386L,0x0321B0A3L,0x2B3D1750L,0x0321B0A3L,0x644EA386L,1L}};
    int16_t l_189 = 0x2F9DL;
    int32_t l_210 = 0x567D4EB9L;
    uint16_t *l_214 = &l_126;
    int8_t *l_217 = &p_876->g_208;
    int8_t *l_218 = &p_876->g_129;
    int8_t **l_219 = &l_218;
    int8_t l_232 = 0x79L;
    uint8_t l_233 = 253UL;
    uint8_t *l_234 = &l_233;
    uint8_t l_235 = 0x03L;
    uint32_t *l_236 = &p_876->g_237;
    int i, j;
    for (p_876->g_45 = 0; (p_876->g_45 != 7); ++p_876->g_45)
    { /* block id: 26 */
        int32_t *l_98 = &p_876->g_99;
        uint32_t *l_106 = &p_876->g_107;
        uint8_t *l_110[1];
        uint64_t *l_123 = &l_97;
        int32_t l_127 = 0x0C2A7CE7L;
        int8_t *l_128 = &p_876->g_129;
        int32_t *l_130 = (void*)0;
        int32_t *l_131 = (void*)0;
        int32_t *l_132 = (void*)0;
        int32_t *l_133 = &l_125;
        int32_t *l_134 = &l_127;
        int32_t *l_135 = &l_127;
        int32_t *l_136 = (void*)0;
        int32_t *l_138 = &l_137[0][1];
        int32_t *l_139 = &l_137[1][5];
        int32_t *l_140 = (void*)0;
        int32_t *l_141 = &l_137[1][5];
        int32_t *l_142 = &p_876->g_99;
        int32_t *l_143 = &l_127;
        int32_t *l_144 = &l_125;
        int32_t *l_145 = &l_137[2][6];
        int32_t l_146 = (-7L);
        int32_t *l_147[7] = {&p_876->g_99,&p_876->g_99,&p_876->g_99,&p_876->g_99,&p_876->g_99,&p_876->g_99,&p_876->g_99};
        int i;
        for (i = 0; i < 1; i++)
            l_110[i] = &p_876->g_38;
        (*l_98) |= (l_97 = 0x2DB62A35L);
        (*l_133) = (((safe_add_func_int64_t_s_s((!(0UL <= ((0x8FE19D4D995C899AL > (0x30L < (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((((*l_98) = 0x46EA07D5L) <= (((*l_106)++) == ((l_110[0] != ((1L < (safe_add_func_int8_t_s_s(((*l_128) &= (~((p_87 , (((p_876->g_38 = (safe_div_func_uint64_t_u_u(((((safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((p_876->g_124 = (((safe_mod_func_uint32_t_u_u((((((*l_123) = (safe_lshift_func_int8_t_s_u((p_876->g_7 || 18446744073709551615UL), p_83))) && p_83) >= (-1L)) , p_83), (**p_86))) ^ p_876->g_41.f4) > p_87)), l_125)), p_876->g_41.f6)) == (**p_84)) , l_125) , l_126), l_125))) == (-1L)) , p_876->g_7)) && l_127))), p_876->g_41.f4))) , l_110[0])) != p_876->g_41.f1))), 0xD073A5FBL)), p_876->g_7)))) | p_876->g_41.f5))), p_876->g_41.f0)) & 9UL) < 1UL);
        p_876->g_151--;
        for (p_83 = (-23); (p_83 == 22); ++p_83)
        { /* block id: 39 */
            int8_t **l_159 = &p_876->g_157;
            int32_t l_164[6][7] = {{0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL},{0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL},{0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL},{0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL},{0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL},{0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL,0x10A4FBDCL}};
            int16_t *l_165 = &p_876->g_34;
            int16_t *l_166 = &p_876->g_150;
            uint16_t *l_169 = &l_126;
            int i, j;
            p_876->g_156 = &l_128;
            (*l_135) ^= (p_876->g_41.f4 < ((*l_169) = ((safe_unary_minus_func_int16_t_s((((void*)0 != l_159) , ((*l_166) = ((*l_165) = (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_125, l_164[1][6])), 12))))))) || ((p_876->g_50 > (p_876->g_151 <= 0x2DL)) , (**p_84)))));
        }
    }
    if ((&l_125 != ((*p_84) = (*p_84))))
    { /* block id: 48 */
        uint64_t l_190[7][4][9] = {{{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L}},{{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L}},{{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L}},{{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L}},{{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L}},{{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L}},{{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L},{1UL,0xC56885D1B0BD1E66L,0xFA7DB854CE0AEB5CL,1UL,1UL,0xDE148778A663DAEBL,18446744073709551611UL,0xB8BCA8E44E8D03DDL,0xE0470432E41012E1L}}};
        int32_t *l_198 = &p_876->g_149;
        int i, j, k;
        for (p_876->g_34 = 0; (p_876->g_34 <= 2); p_876->g_34 += 1)
        { /* block id: 51 */
            int32_t *l_186 = &p_876->g_45;
            int32_t *l_187 = &p_876->g_45;
            int32_t *l_188[6];
            int i;
            for (i = 0; i < 6; i++)
                l_188[i] = &l_125;
            for (l_125 = 2; (l_125 >= 0); l_125 -= 1)
            { /* block id: 54 */
                uint64_t *l_178 = &l_97;
                uint64_t **l_180 = &p_876->g_179[2];
                int32_t *l_185 = &p_876->g_45;
                int i, j;
                (*l_185) |= ((safe_add_func_int64_t_s_s(((!(safe_rshift_func_uint16_t_u_s((((-4L) == (safe_sub_func_uint16_t_u_u(l_137[p_876->g_34][(l_125 + 1)], (0x40E96C7B4C5E673EL != ((*l_178) = ((**p_86) & (l_178 != ((*l_180) = p_876->g_179[2])))))))) , ((safe_sub_func_int64_t_s_s((((0x055CL && (!(l_137[p_876->g_34][(l_125 + 1)] && (safe_div_func_uint32_t_u_u(0UL, 0x3DC44921L))))) | 0x8422B37AL) , p_87), p_83)) | p_876->g_41.f0)), 7))) == 0x7BF4L), p_876->g_99)) & 7L);
            }
            l_190[3][3][6]--;
            (*l_187) = 0x653AFABAL;
            (*p_84) = (*p_876->g_93);
        }
        (*l_198) = (p_87 > ((safe_sub_func_uint8_t_u_u(p_87, 0xF9L)) >= (3UL == (0xFCL | (18446744073709551615UL >= (safe_add_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(0x5061A8BDL)), 0L)))))));
        for (p_87 = 0; (p_87 <= 2); p_87 += 1)
        { /* block id: 66 */
            return p_876->g_45;
        }
    }
    else
    { /* block id: 69 */
        int32_t *l_199 = &p_876->g_99;
        int32_t l_200 = 0x757BC192L;
        int32_t *l_201 = &p_876->g_45;
        int32_t *l_202 = &l_137[1][5];
        int32_t *l_203 = &p_876->g_149;
        int32_t *l_204 = &p_876->g_99;
        int32_t *l_205 = &p_876->g_45;
        int32_t *l_206[4][9][6] = {{{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45}},{{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45}},{{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45}},{{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45},{&p_876->g_7,&l_200,&p_876->g_99,&p_876->g_7,&p_876->g_99,&p_876->g_45}}};
        int i, j, k;
        ++p_876->g_211;
    }
    (*p_876->g_93) = (((((*l_214) = 1UL) || (safe_rshift_func_int8_t_s_u(((p_83 && l_189) || (((l_217 = l_217) == ((*l_219) = l_218)) , (((((*l_236) = (((safe_sub_func_int64_t_s_s(((p_876->g_99 = (((((*l_234) = (safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((&p_876->g_107 == p_85), (safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((p_876->g_107 || (((+(0xD2A354E8L >= p_876->g_41.f5)) || 0x1AA598F1L) , l_232)), p_87)), 0xE54D68BA6B442932L)))) && 0x6DE10461C8AACF54L), l_233)), p_876->g_124))) >= p_876->g_50) == l_189) >= 4294967288UL)) >= l_235), l_125)) || (**p_84)) & l_232)) , (*p_876->g_94)) == 4294967294UL) && 4L))), 1))) , 1UL) , (*p_876->g_93));
    return p_876->g_208;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_877;
    struct S1* p_876 = &c_877;
    struct S1 c_878 = {
        3L, // p_876->g_7
        0x549AL, // p_876->g_34
        7UL, // p_876->g_38
        {0x18227FD5L,4294967292UL,-1L,0x0F874340CABDBFADL,7L,1UL,0x124DL}, // p_876->g_41
        0L, // p_876->g_45
        1L, // p_876->g_47
        1L, // p_876->g_48
        0x38596781L, // p_876->g_49
        0x1B05D12CBED49F2EL, // p_876->g_50
        {0xE2DE598CL,0xE2DE598CL}, // p_876->g_51
        &p_876->g_7, // p_876->g_94
        &p_876->g_94, // p_876->g_93
        0x0CFD0E8CL, // p_876->g_99
        0x0DCE920FL, // p_876->g_107
        0UL, // p_876->g_124
        (-4L), // p_876->g_129
        (-1L), // p_876->g_148
        0x6308DE06L, // p_876->g_149
        (-1L), // p_876->g_150
        1UL, // p_876->g_151
        &p_876->g_41.f4, // p_876->g_157
        &p_876->g_157, // p_876->g_156
        {(void*)0,(void*)0,(void*)0}, // p_876->g_179
        0x169B56A995A4DF93L, // p_876->g_207
        0x2CL, // p_876->g_208
        0x1C7487FBL, // p_876->g_209
        0UL, // p_876->g_211
        0x6A09E448L, // p_876->g_237
        4294967293UL, // p_876->g_238
        (void*)0, // p_876->g_244
        0x02L, // p_876->g_292
        {{0x1812D822L,0x1812D822L,0x3BED7776L,(-4L),1L,(-4L),0x3BED7776L},{0x1812D822L,0x1812D822L,0x3BED7776L,(-4L),1L,(-4L),0x3BED7776L},{0x1812D822L,0x1812D822L,0x3BED7776L,(-4L),1L,(-4L),0x3BED7776L},{0x1812D822L,0x1812D822L,0x3BED7776L,(-4L),1L,(-4L),0x3BED7776L},{0x1812D822L,0x1812D822L,0x3BED7776L,(-4L),1L,(-4L),0x3BED7776L},{0x1812D822L,0x1812D822L,0x3BED7776L,(-4L),1L,(-4L),0x3BED7776L}}, // p_876->g_303
        {-1L,0x8E9C823DL,0L,0L,0L,0x9294L,0x1FCDL}, // p_876->g_310
        &p_876->g_99, // p_876->g_375
        0x5097L, // p_876->g_394
        0xA8739C2839383A4AL, // p_876->g_424
        (void*)0, // p_876->g_425
        (void*)0, // p_876->g_426
        {&p_876->g_99,&p_876->g_99,&p_876->g_99,&p_876->g_99}, // p_876->g_427
        {{{0xA36A913AEC7373F9L}},{{0xA36A913AEC7373F9L}}}, // p_876->g_468
        {0x0D82F48FL,0x8E9BB784L,5L,0L,0x5FL,0xD515L,5L}, // p_876->g_581
        {0x01014FF1L,1UL,5L,9L,0x60L,3UL,0x29D4L}, // p_876->g_605
        &p_876->g_605, // p_876->g_610
        {{{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x49C505DFL,4294967295UL,6L,0x1B2C27E9C4D5AAE7L,0x21L,65531UL,0L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L}},{{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x49C505DFL,4294967295UL,6L,0x1B2C27E9C4D5AAE7L,0x21L,65531UL,0L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L}},{{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x49C505DFL,4294967295UL,6L,0x1B2C27E9C4D5AAE7L,0x21L,65531UL,0L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L}},{{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x49C505DFL,4294967295UL,6L,0x1B2C27E9C4D5AAE7L,0x21L,65531UL,0L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L}},{{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x49C505DFL,4294967295UL,6L,0x1B2C27E9C4D5AAE7L,0x21L,65531UL,0L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L},{0x7B34A142L,0x3C74F83EL,0x6AL,0x5D8DC9EDC7BE2972L,0x69L,0x1185L,0x4E28L},{1L,0x7AA178A5L,0x09L,0x3059F5939155B8ADL,0x01L,0x92B7L,-1L},{-5L,4294967292UL,1L,0x2A1FCB58647B4B6EL,0x27L,5UL,0x6501L}}}, // p_876->g_611
        &p_876->g_45, // p_876->g_614
        {1L,4294967288UL,0x42L,0x7D41C09BA8299D64L,0L,0UL,0x63C9L}, // p_876->g_625
        {{0x0B7816CCL,1UL,1L,0x7A8390AE3590BF7DL,-1L,0x7E1DL,0x607BL}}, // p_876->g_627
        &p_876->g_45, // p_876->g_660
        &p_876->g_149, // p_876->g_666
        {{{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}}},{{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}},{{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L},{0x38F0AB01L,6UL,0x18L,0x38F3E7F2439C395EL,1L,0x5376L,-10L},{-10L,4294967287UL,0x4AL,0x17F65CFF5D768D63L,1L,1UL,0x19E0L}}}}, // p_876->g_668
        &p_876->g_244, // p_876->g_681
        &p_876->g_681, // p_876->g_680
        {0x710DB6A0L,0x30EF0205L,-7L,0x4A600FCE51DEA9F5L,0x52L,4UL,0x2503L}, // p_876->g_717
        {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_876->g_734
        &p_876->g_734[2][1][3], // p_876->g_733
        6UL, // p_876->g_758
        &p_876->g_94, // p_876->g_796
        &p_876->g_99, // p_876->g_803
        {0x38469AE0L,0xCFD6AC06L,-7L,-1L,1L,0xB5E6L,0x04C2L}, // p_876->g_804
        {0x062700CFL,4294967295UL,0L,1L,-1L,4UL,0x07B0L}, // p_876->g_805
        &p_876->g_94, // p_876->g_809
        &p_876->g_734[2][1][3], // p_876->g_828
        {-7L,0x674E14B6L,-4L,-7L,0x10L,0x46C2L,0L}, // p_876->g_831
        &p_876->g_179[2], // p_876->g_844
        &p_876->g_844, // p_876->g_843
        (void*)0, // p_876->g_856
        {18446744073709551615UL}, // p_876->g_868
        &p_876->g_94, // p_876->g_872
        (void*)0, // p_876->g_874
        &p_876->g_94, // p_876->g_875
    };
    c_877 = c_878;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_876);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_876->g_7, "p_876->g_7", print_hash_value);
    transparent_crc(p_876->g_34, "p_876->g_34", print_hash_value);
    transparent_crc(p_876->g_38, "p_876->g_38", print_hash_value);
    transparent_crc(p_876->g_41.f0, "p_876->g_41.f0", print_hash_value);
    transparent_crc(p_876->g_41.f1, "p_876->g_41.f1", print_hash_value);
    transparent_crc(p_876->g_41.f2, "p_876->g_41.f2", print_hash_value);
    transparent_crc(p_876->g_41.f3, "p_876->g_41.f3", print_hash_value);
    transparent_crc(p_876->g_41.f4, "p_876->g_41.f4", print_hash_value);
    transparent_crc(p_876->g_41.f5, "p_876->g_41.f5", print_hash_value);
    transparent_crc(p_876->g_41.f6, "p_876->g_41.f6", print_hash_value);
    transparent_crc(p_876->g_45, "p_876->g_45", print_hash_value);
    transparent_crc(p_876->g_47, "p_876->g_47", print_hash_value);
    transparent_crc(p_876->g_48, "p_876->g_48", print_hash_value);
    transparent_crc(p_876->g_49, "p_876->g_49", print_hash_value);
    transparent_crc(p_876->g_50, "p_876->g_50", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_876->g_51[i], "p_876->g_51[i]", print_hash_value);

    }
    transparent_crc(p_876->g_99, "p_876->g_99", print_hash_value);
    transparent_crc(p_876->g_107, "p_876->g_107", print_hash_value);
    transparent_crc(p_876->g_124, "p_876->g_124", print_hash_value);
    transparent_crc(p_876->g_129, "p_876->g_129", print_hash_value);
    transparent_crc(p_876->g_148, "p_876->g_148", print_hash_value);
    transparent_crc(p_876->g_149, "p_876->g_149", print_hash_value);
    transparent_crc(p_876->g_150, "p_876->g_150", print_hash_value);
    transparent_crc(p_876->g_151, "p_876->g_151", print_hash_value);
    transparent_crc(p_876->g_207, "p_876->g_207", print_hash_value);
    transparent_crc(p_876->g_208, "p_876->g_208", print_hash_value);
    transparent_crc(p_876->g_209, "p_876->g_209", print_hash_value);
    transparent_crc(p_876->g_211, "p_876->g_211", print_hash_value);
    transparent_crc(p_876->g_237, "p_876->g_237", print_hash_value);
    transparent_crc(p_876->g_238, "p_876->g_238", print_hash_value);
    transparent_crc(p_876->g_292, "p_876->g_292", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_876->g_303[i][j], "p_876->g_303[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_876->g_310.f0, "p_876->g_310.f0", print_hash_value);
    transparent_crc(p_876->g_310.f1, "p_876->g_310.f1", print_hash_value);
    transparent_crc(p_876->g_310.f2, "p_876->g_310.f2", print_hash_value);
    transparent_crc(p_876->g_310.f3, "p_876->g_310.f3", print_hash_value);
    transparent_crc(p_876->g_310.f4, "p_876->g_310.f4", print_hash_value);
    transparent_crc(p_876->g_310.f5, "p_876->g_310.f5", print_hash_value);
    transparent_crc(p_876->g_310.f6, "p_876->g_310.f6", print_hash_value);
    transparent_crc(p_876->g_394, "p_876->g_394", print_hash_value);
    transparent_crc(p_876->g_424, "p_876->g_424", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_876->g_468[i][j][k], "p_876->g_468[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_876->g_581.f0, "p_876->g_581.f0", print_hash_value);
    transparent_crc(p_876->g_581.f1, "p_876->g_581.f1", print_hash_value);
    transparent_crc(p_876->g_581.f2, "p_876->g_581.f2", print_hash_value);
    transparent_crc(p_876->g_581.f3, "p_876->g_581.f3", print_hash_value);
    transparent_crc(p_876->g_581.f4, "p_876->g_581.f4", print_hash_value);
    transparent_crc(p_876->g_581.f5, "p_876->g_581.f5", print_hash_value);
    transparent_crc(p_876->g_581.f6, "p_876->g_581.f6", print_hash_value);
    transparent_crc(p_876->g_605.f0, "p_876->g_605.f0", print_hash_value);
    transparent_crc(p_876->g_605.f1, "p_876->g_605.f1", print_hash_value);
    transparent_crc(p_876->g_605.f2, "p_876->g_605.f2", print_hash_value);
    transparent_crc(p_876->g_605.f3, "p_876->g_605.f3", print_hash_value);
    transparent_crc(p_876->g_605.f4, "p_876->g_605.f4", print_hash_value);
    transparent_crc(p_876->g_605.f5, "p_876->g_605.f5", print_hash_value);
    transparent_crc(p_876->g_605.f6, "p_876->g_605.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_876->g_611[i][j].f0, "p_876->g_611[i][j].f0", print_hash_value);
            transparent_crc(p_876->g_611[i][j].f1, "p_876->g_611[i][j].f1", print_hash_value);
            transparent_crc(p_876->g_611[i][j].f2, "p_876->g_611[i][j].f2", print_hash_value);
            transparent_crc(p_876->g_611[i][j].f3, "p_876->g_611[i][j].f3", print_hash_value);
            transparent_crc(p_876->g_611[i][j].f4, "p_876->g_611[i][j].f4", print_hash_value);
            transparent_crc(p_876->g_611[i][j].f5, "p_876->g_611[i][j].f5", print_hash_value);
            transparent_crc(p_876->g_611[i][j].f6, "p_876->g_611[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(p_876->g_625.f0, "p_876->g_625.f0", print_hash_value);
    transparent_crc(p_876->g_625.f1, "p_876->g_625.f1", print_hash_value);
    transparent_crc(p_876->g_625.f2, "p_876->g_625.f2", print_hash_value);
    transparent_crc(p_876->g_625.f3, "p_876->g_625.f3", print_hash_value);
    transparent_crc(p_876->g_625.f4, "p_876->g_625.f4", print_hash_value);
    transparent_crc(p_876->g_625.f5, "p_876->g_625.f5", print_hash_value);
    transparent_crc(p_876->g_625.f6, "p_876->g_625.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_876->g_627[i].f0, "p_876->g_627[i].f0", print_hash_value);
        transparent_crc(p_876->g_627[i].f1, "p_876->g_627[i].f1", print_hash_value);
        transparent_crc(p_876->g_627[i].f2, "p_876->g_627[i].f2", print_hash_value);
        transparent_crc(p_876->g_627[i].f3, "p_876->g_627[i].f3", print_hash_value);
        transparent_crc(p_876->g_627[i].f4, "p_876->g_627[i].f4", print_hash_value);
        transparent_crc(p_876->g_627[i].f5, "p_876->g_627[i].f5", print_hash_value);
        transparent_crc(p_876->g_627[i].f6, "p_876->g_627[i].f6", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_876->g_668[i][j][k].f0, "p_876->g_668[i][j][k].f0", print_hash_value);
                transparent_crc(p_876->g_668[i][j][k].f1, "p_876->g_668[i][j][k].f1", print_hash_value);
                transparent_crc(p_876->g_668[i][j][k].f2, "p_876->g_668[i][j][k].f2", print_hash_value);
                transparent_crc(p_876->g_668[i][j][k].f3, "p_876->g_668[i][j][k].f3", print_hash_value);
                transparent_crc(p_876->g_668[i][j][k].f4, "p_876->g_668[i][j][k].f4", print_hash_value);
                transparent_crc(p_876->g_668[i][j][k].f5, "p_876->g_668[i][j][k].f5", print_hash_value);
                transparent_crc(p_876->g_668[i][j][k].f6, "p_876->g_668[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(p_876->g_717.f0, "p_876->g_717.f0", print_hash_value);
    transparent_crc(p_876->g_717.f1, "p_876->g_717.f1", print_hash_value);
    transparent_crc(p_876->g_717.f2, "p_876->g_717.f2", print_hash_value);
    transparent_crc(p_876->g_717.f3, "p_876->g_717.f3", print_hash_value);
    transparent_crc(p_876->g_717.f4, "p_876->g_717.f4", print_hash_value);
    transparent_crc(p_876->g_717.f5, "p_876->g_717.f5", print_hash_value);
    transparent_crc(p_876->g_717.f6, "p_876->g_717.f6", print_hash_value);
    transparent_crc(p_876->g_758, "p_876->g_758", print_hash_value);
    transparent_crc(p_876->g_804.f0, "p_876->g_804.f0", print_hash_value);
    transparent_crc(p_876->g_804.f1, "p_876->g_804.f1", print_hash_value);
    transparent_crc(p_876->g_804.f2, "p_876->g_804.f2", print_hash_value);
    transparent_crc(p_876->g_804.f3, "p_876->g_804.f3", print_hash_value);
    transparent_crc(p_876->g_804.f4, "p_876->g_804.f4", print_hash_value);
    transparent_crc(p_876->g_804.f5, "p_876->g_804.f5", print_hash_value);
    transparent_crc(p_876->g_804.f6, "p_876->g_804.f6", print_hash_value);
    transparent_crc(p_876->g_805.f0, "p_876->g_805.f0", print_hash_value);
    transparent_crc(p_876->g_805.f1, "p_876->g_805.f1", print_hash_value);
    transparent_crc(p_876->g_805.f2, "p_876->g_805.f2", print_hash_value);
    transparent_crc(p_876->g_805.f3, "p_876->g_805.f3", print_hash_value);
    transparent_crc(p_876->g_805.f4, "p_876->g_805.f4", print_hash_value);
    transparent_crc(p_876->g_805.f5, "p_876->g_805.f5", print_hash_value);
    transparent_crc(p_876->g_805.f6, "p_876->g_805.f6", print_hash_value);
    transparent_crc(p_876->g_831.f0, "p_876->g_831.f0", print_hash_value);
    transparent_crc(p_876->g_831.f1, "p_876->g_831.f1", print_hash_value);
    transparent_crc(p_876->g_831.f2, "p_876->g_831.f2", print_hash_value);
    transparent_crc(p_876->g_831.f3, "p_876->g_831.f3", print_hash_value);
    transparent_crc(p_876->g_831.f4, "p_876->g_831.f4", print_hash_value);
    transparent_crc(p_876->g_831.f5, "p_876->g_831.f5", print_hash_value);
    transparent_crc(p_876->g_831.f6, "p_876->g_831.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_876->g_868[i], "p_876->g_868[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
