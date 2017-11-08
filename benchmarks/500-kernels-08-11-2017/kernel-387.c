// --atomics 87 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 7,52,26 -l 1,4,2
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

__constant uint32_t permutations[10][8] = {
{7,0,5,1,2,6,4,3}, // permutation 0
{1,4,3,2,7,5,0,6}, // permutation 1
{4,5,1,0,7,6,3,2}, // permutation 2
{7,0,5,6,3,4,1,2}, // permutation 3
{2,6,1,0,3,5,7,4}, // permutation 4
{5,2,4,6,0,1,3,7}, // permutation 5
{7,4,1,5,6,3,0,2}, // permutation 6
{7,6,5,3,4,0,2,1}, // permutation 7
{2,3,1,0,5,7,4,6}, // permutation 8
{3,6,1,2,7,4,0,5} // permutation 9
};

// Seed: 166944005

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int64_t  f1;
   int16_t  f2;
   volatile uint32_t  f3;
   volatile uint64_t  f4;
   int64_t  f5;
   int8_t  f6;
   int64_t  f7;
   int32_t  f8;
   int16_t  f9;
};

union U1 {
   int64_t  f0;
   struct S0  f1;
   int64_t  f2;
};

struct S2 {
    int32_t g_2;
    volatile VECTOR(int8_t, 8) g_32;
    uint16_t g_37;
    uint16_t g_45;
    int32_t g_47;
    int64_t g_58;
    int64_t *g_81;
    volatile int8_t g_110;
    int32_t g_111;
    uint16_t g_112;
    VECTOR(uint8_t, 8) g_284;
    int32_t g_288;
    int64_t g_289;
    volatile uint8_t g_297;
    volatile VECTOR(uint8_t, 2) g_307;
    VECTOR(uint8_t, 8) g_308;
    VECTOR(uint8_t, 4) g_309;
    VECTOR(uint8_t, 2) g_310;
    VECTOR(uint8_t, 16) g_312;
    int64_t g_326;
    VECTOR(uint16_t, 8) g_331;
    int32_t *g_339;
    int32_t **g_338;
    int16_t g_348[9][6];
    volatile union U1 g_357[2];
    union U1 g_358;
    uint16_t *g_377;
    uint8_t g_435;
    VECTOR(int8_t, 16) g_450;
    volatile struct S0 g_458;
    VECTOR(int8_t, 2) g_476;
    int16_t g_518;
    int32_t g_520;
    uint32_t g_522;
    VECTOR(uint32_t, 4) g_530;
    VECTOR(uint32_t, 16) g_531;
    VECTOR(int32_t, 8) g_540;
    volatile struct S0 g_553[8];
    struct S0 g_591;
    struct S0 *g_590[6][10];
    VECTOR(int32_t, 2) g_612;
    volatile VECTOR(uint32_t, 4) g_613;
    int64_t g_622;
    volatile union U1 g_627;
    struct S0 g_635;
    VECTOR(uint16_t, 2) g_649;
    int32_t g_678;
    volatile int8_t g_679;
    uint32_t g_680[3];
    volatile uint64_t g_688;
    VECTOR(int64_t, 16) g_703;
    uint32_t *g_726;
    uint32_t ** volatile g_725;
    uint32_t **g_727;
    volatile uint8_t *g_733;
    volatile uint8_t * volatile * volatile g_732[9];
    struct S0 g_762;
    uint64_t g_766;
    volatile uint16_t g_780;
    struct S0 g_783;
    struct S0 g_787[5][1];
    int32_t *g_788;
    struct S0 g_825;
    volatile VECTOR(int64_t, 16) g_848;
    union U1 g_851;
    volatile union U1 *g_852;
    struct S0 g_868[3];
    int32_t * volatile g_892[1];
    int32_t * volatile g_893;
    int32_t * volatile g_894[2];
    volatile int32_t g_903;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S2 * p_907);
int32_t  func_5(uint64_t  p_6, int64_t  p_7, struct S2 * p_907);
uint64_t  func_10(int8_t  p_11, uint8_t  p_12, int8_t  p_13, struct S2 * p_907);
int8_t  func_19(uint16_t  p_20, int32_t  p_21, uint32_t  p_22, struct S2 * p_907);
int16_t  func_42(int32_t  p_43, struct S2 * p_907);
int32_t * func_48(uint32_t  p_49, int32_t  p_50, int32_t * p_51, struct S2 * p_907);
int32_t * func_52(int32_t * p_53, int64_t  p_54, int32_t  p_55, int32_t  p_56, struct S2 * p_907);
int32_t  func_59(uint16_t * p_60, uint32_t  p_61, uint16_t * p_62, struct S2 * p_907);
uint16_t * func_63(int32_t  p_64, struct S2 * p_907);
uint32_t  func_69(int64_t * p_70, struct S2 * p_907);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_907->g_2 p_907->l_comm_values p_907->g_591.f6 p_907->g_310 p_907->g_627 p_907->g_622 p_907->g_308 p_907->g_635 p_907->g_591.f0 p_907->g_338 p_907->g_339 p_907->g_288 p_907->g_591.f9 p_907->g_553.f5 p_907->g_680 p_907->g_531 p_907->g_688 p_907->g_458.f1 p_907->g_32 p_907->g_591.f5 p_907->g_530 p_907->g_458.f9 p_907->g_732 p_907->g_458.f7 p_907->g_58 p_907->g_522 p_907->g_37 p_907->g_435 p_907->g_553.f7 p_907->g_780 p_907->g_783 p_907->g_787 p_907->g_591.f7 p_907->g_788 p_907->g_762.f0 p_907->g_678 p_907->g_358.f1.f6 p_907->g_518 p_907->g_825 p_907->g_47 p_907->g_848 p_907->g_852 p_907->g_762.f5 p_907->g_540 p_907->g_591.f8 p_907->g_868 p_907->g_476
 * writes: p_907->g_2 p_907->g_326 p_907->g_591.f6 p_907->g_591.f0 p_907->g_339 p_907->g_45 p_907->g_476 p_907->g_680 p_907->g_688 p_907->g_635.f6 p_907->g_37 p_907->g_435 p_907->g_635.f0 p_907->g_766 p_907->g_780 p_907->g_358.f1 p_907->g_762.f0 p_907->g_678 p_907->g_288 p_907->g_518 p_907->g_530 p_907->g_591.f8
 */
int32_t  func_1(struct S2 * p_907)
{ /* block id: 4 */
    int32_t l_14 = 0x0586FD5DL;
    int64_t l_628 = 0x3CDABB25636E92E7L;
    uint16_t l_737 = 0x5ACBL;
    int32_t l_776 = 0x228426A1L;
    int32_t l_777 = 0x64F05E42L;
    int32_t *l_789 = &p_907->g_288;
    int32_t l_821 = (-10L);
    uint16_t **l_867 = (void*)0;
    int64_t **l_896 = &p_907->g_81;
    int64_t ***l_895 = &l_896;
    int32_t l_899 = (-1L);
    int32_t l_900 = 0x48C19AFCL;
    int32_t l_901 = (-1L);
    int32_t l_902[9] = {0x23789097L,0x23789097L,0x23789097L,0x23789097L,0x23789097L,0x23789097L,0x23789097L,0x23789097L,0x23789097L};
    uint16_t l_904 = 0xB3DBL;
    int i;
    for (p_907->g_2 = (-25); (p_907->g_2 < 20); p_907->g_2++)
    { /* block id: 7 */
        VECTOR(int8_t, 4) l_31 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L);
        VECTOR(int8_t, 2) l_33 = (VECTOR(int8_t, 2))(0x26L, (-1L));
        uint16_t *l_36 = &p_907->g_37;
        int64_t *l_623 = &p_907->g_358.f1.f7;
        int8_t l_624 = (-4L);
        int64_t l_625 = 2L;
        int16_t l_626 = (-6L);
        uint16_t *l_735 = (void*)0;
        uint16_t *l_736 = &p_907->g_45;
        uint64_t *l_765 = &p_907->g_766;
        int32_t *l_770 = &p_907->g_635.f0;
        int32_t l_774 = 0x27CE3737L;
        int32_t l_775 = 0x45B6E8D9L;
        int32_t l_778 = 0x19EAD0EBL;
        int32_t l_779 = 0x3B121C21L;
        int i;
        (*l_770) = func_5(((safe_lshift_func_uint16_t_u_u((p_907->l_comm_values[(safe_mod_func_uint32_t_u_u(p_907->tid, 8))] , 65528UL), 6)) > ((*l_765) = func_10(((((l_14 && ((*l_736) = ((*l_36) = (((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(4294967295UL, 7UL)).odd, 1UL)) , (safe_div_func_int8_t_s_s(func_19(((((safe_rshift_func_int16_t_s_s(((((((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(l_31.wwyw)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((l_625 = (((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(p_907->g_32.s45143710)).lo, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_33.yxyy)).xyxxwzwzyyyzwyxw)).sad, (int8_t)(safe_sub_func_int64_t_s_s(1L, ((*l_623) = ((p_907->g_comm_values[p_907->tid] & ((*l_36)--)) | (safe_sub_func_uint64_t_u_u(0x531364F2CA12535BL, (func_42(p_907->g_2, p_907) <= 0x4EA7L)))))))))).xyyx, ((VECTOR(int8_t, 4))((-3L)))))), (-8L), ((VECTOR(int8_t, 2))(0x3EL)), (-1L), 0x7EL, ((VECTOR(int8_t, 2))(0x2BL)), 0x6DL, ((VECTOR(int8_t, 2))(1L)), 0x3FL, (-8L))).s16, (int8_t)1L))).odd & l_624)), ((VECTOR(int8_t, 8))(0L)), (-4L), l_31.z, 0x76L, (-1L), ((VECTOR(int8_t, 2))(8L)), 0L)).s72)))).xyxy))).z, p_907->g_591.f6)), 11)), (-6L))) != p_907->g_591.f6) && GROUP_DIVERGE(2, 1)) > 0x79EAC7FADC9A403FL) , p_907->g_310.y) == l_626) & l_14) , 0x666BL), 15)) , p_907->g_627) , GROUP_DIVERGE(1, 1)) , p_907->g_622), l_628, p_907->g_308.s1, p_907), l_626))) > 8L)))) | 0x55L) <= 0xF732A4F4EB318C79L) , p_907->g_522), l_737, l_624, p_907))), l_626, p_907);
        for (l_626 = 0; (l_626 == (-9)); l_626 = safe_sub_func_uint32_t_u_u(l_626, 9))
        { /* block id: 304 */
            int32_t *l_773[6][2] = {{&p_907->g_762.f0,&p_907->g_2},{&p_907->g_762.f0,&p_907->g_2},{&p_907->g_762.f0,&p_907->g_2},{&p_907->g_762.f0,&p_907->g_2},{&p_907->g_762.f0,&p_907->g_2},{&p_907->g_762.f0,&p_907->g_2}};
            struct S0 *l_784 = &p_907->g_358.f1;
            int i, j;
            (*l_770) &= 0x6A199D92L;
            ++p_907->g_780;
            (*l_784) = p_907->g_783;
            (*l_770) = (l_777 = (+(safe_mod_func_int32_t_s_s((((p_907->g_787[4][0] , &p_907->g_326) != (void*)0) & p_907->g_591.f7), l_14))));
        }
        l_789 = p_907->g_788;
    }
    for (p_907->g_762.f0 = 0; (p_907->g_762.f0 <= 16); p_907->g_762.f0 = safe_add_func_uint16_t_u_u(p_907->g_762.f0, 1))
    { /* block id: 315 */
        uint64_t l_792 = 0UL;
        (*p_907->g_338) = func_52(&l_777, l_792, (*l_789), (*p_907->g_788), p_907);
    }
    for (p_907->g_358.f1.f6 = 22; (p_907->g_358.f1.f6 >= 19); --p_907->g_358.f1.f6)
    { /* block id: 320 */
        int32_t *l_812 = &p_907->g_762.f0;
        int32_t *l_813[8] = {&p_907->g_591.f0,&p_907->g_591.f0,&p_907->g_591.f0,&p_907->g_591.f0,&p_907->g_591.f0,&p_907->g_591.f0,&p_907->g_591.f0,&p_907->g_591.f0};
        uint64_t l_814 = 0UL;
        VECTOR(int32_t, 2) l_817 = (VECTOR(int32_t, 2))(0L, (-1L));
        int i;
        if ((atomic_inc(&p_907->l_atomic_input[70]) == 3))
        { /* block id: 322 */
            int32_t l_795 = 1L;
            VECTOR(uint16_t, 4) l_806 = (VECTOR(uint16_t, 4))(0x2735L, (VECTOR(uint16_t, 2))(0x2735L, 0UL), 0UL);
            int64_t l_807 = 0x5A0B2C9C9FC15CE8L;
            VECTOR(uint16_t, 4) l_808 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL);
            int16_t l_809 = (-10L);
            int32_t *l_810 = &l_795;
            int32_t *l_811[9] = {&l_795,(void*)0,&l_795,&l_795,(void*)0,&l_795,&l_795,(void*)0,&l_795};
            int i;
            for (l_795 = 9; (l_795 <= 27); l_795 = safe_add_func_int32_t_s_s(l_795, 5))
            { /* block id: 325 */
                int32_t l_798 = 1L;
                for (l_798 = 16; (l_798 == 18); l_798 = safe_add_func_uint16_t_u_u(l_798, 3))
                { /* block id: 328 */
                    int32_t l_802 = 0x7700DAC8L;
                    int32_t *l_801 = &l_802;
                    uint16_t l_803 = 2UL;
                    l_801 = (void*)0;
                    --l_803;
                }
            }
            l_809 &= (((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_806.yw)), l_807, 8UL, 65535UL, 8UL, 3UL, ((VECTOR(uint16_t, 8))(l_808.zyyyyxzy)), 0xB5DBL)).sc21c)).xzyxyzyz, ((VECTOR(uint16_t, 2))(0x2423L, 65529UL)).xyyxxxyx))).s7 , 0x507E8D72L);
            l_811[2] = l_810;
            unsigned int result = 0;
            result += l_795;
            result += l_806.w;
            result += l_806.z;
            result += l_806.y;
            result += l_806.x;
            result += l_807;
            result += l_808.w;
            result += l_808.z;
            result += l_808.y;
            result += l_808.x;
            result += l_809;
            atomic_add(&p_907->l_special_values[70], result);
        }
        else
        { /* block id: 335 */
            (1 + 1);
        }
        --l_814;
        (*l_789) |= ((VECTOR(int32_t, 8))(l_817.yxxxyyxx)).s0;
        for (p_907->g_518 = 0; (p_907->g_518 < 6); p_907->g_518 = safe_add_func_int32_t_s_s(p_907->g_518, 1))
        { /* block id: 342 */
            uint64_t l_820 = 0xD50C862E3DF2CA0AL;
            int32_t **l_822 = &l_813[7];
            uint32_t *l_834 = (void*)0;
            uint32_t *l_835 = (void*)0;
            uint32_t *l_836 = (void*)0;
            uint32_t *l_837 = (void*)0;
            uint32_t *l_838 = (void*)0;
            uint32_t *l_839 = (void*)0;
            uint32_t *l_840 = (void*)0;
            uint32_t *l_841 = (void*)0;
            uint32_t *l_842 = (void*)0;
            uint32_t *l_843 = (void*)0;
            uint32_t *l_844 = (void*)0;
            uint32_t *l_845 = (void*)0;
            uint32_t *l_846 = (void*)0;
            uint32_t *l_847[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int32_t l_858 = 0x7127438FL;
            int i, j, k;
            (*l_789) = l_820;
            if (l_821)
                break;
            if (((*l_812) = (((((void*)0 != l_822) != (safe_add_func_uint64_t_u_u(0xE27F2E749660F9C5L, (((p_907->g_825 , ((safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (~(**l_822)))) && (((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((p_907->g_530.w = (**l_822)) , (255UL < GROUP_DIVERGE(0, 1))), 0x0130BC94L)), 0x6768L)) | (**l_822)) >= 0L))) != 4294967289UL) || 0xD34CL)))) ^ p_907->g_47) || 0xCDL)))
            { /* block id: 347 */
                VECTOR(uint32_t, 2) l_849 = (VECTOR(uint32_t, 2))(0x7524BC88L, 4294967295UL);
                union U1 *l_850 = &p_907->g_851;
                int32_t l_857 = 0x6E9E34CAL;
                int i;
                (*p_907->g_788) ^= 0L;
                p_907->g_762.f0 ^= ((((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(p_907->g_848.s29)).xyyxyxxyxyyyyyyx))).s9 == ((l_849.y , l_850) != p_907->g_852)) ^ (((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_907->local_2_offset, get_local_id(2), 10), ((p_907->g_762.f5 != ((safe_mod_func_int64_t_s_s(l_849.y, (p_907->g_635.f7 || p_907->g_540.s6))) <= ((*l_789) ^ (l_857 = (&p_907->g_339 != (void*)0))))) , p_907->g_825.f6))) , l_849.y) > (*l_789)));
            }
            else
            { /* block id: 351 */
                uint32_t l_859 = 0x20B1D8C0L;
                l_859--;
            }
        }
    }
    for (p_907->g_591.f8 = (-19); (p_907->g_591.f8 > 16); ++p_907->g_591.f8)
    { /* block id: 358 */
        uint32_t l_864[7];
        uint32_t l_886 = 0xADAF28D1L;
        int16_t *l_888 = &p_907->g_868[1].f2;
        int16_t **l_887 = &l_888;
        int16_t *l_889 = (void*)0;
        int16_t *l_890[4][3] = {{&p_907->g_783.f2,&p_907->g_783.f2,&p_907->g_783.f2},{&p_907->g_783.f2,&p_907->g_783.f2,&p_907->g_783.f2},{&p_907->g_783.f2,&p_907->g_783.f2,&p_907->g_783.f2},{&p_907->g_783.f2,&p_907->g_783.f2,&p_907->g_783.f2}};
        uint16_t **l_891 = &p_907->g_377;
        int32_t *l_897 = &p_907->g_783.f0;
        int32_t *l_898[8] = {&p_907->g_635.f0,&p_907->g_47,&p_907->g_635.f0,&p_907->g_635.f0,&p_907->g_47,&p_907->g_635.f0,&p_907->g_635.f0,&p_907->g_47};
        int i, j;
        for (i = 0; i < 7; i++)
            l_864[i] = 0xC5F02BC9L;
        l_14 = ((l_864[6] >= (((safe_div_func_int32_t_s_s((l_867 != (p_907->g_868[1] , (((GROUP_DIVERGE(1, 1) , l_864[5]) , (safe_div_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((((*l_789) = (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(p_907->g_635.f0, ((safe_div_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((l_886 , ((*l_887) = (p_907->g_787[4][0].f4 , &p_907->g_348[0][2]))) == (void*)0))), l_886)), 6)) , (*l_789)), (*l_789))) > (*l_789)))), l_886))) && p_907->g_787[4][0].f7), l_886)) ^ l_864[6]), p_907->g_476.x)) & 0x06C1595A77AD5434L), p_907->g_635.f1))) , l_891))), FAKE_DIVERGE(p_907->group_1_offset, get_group_id(1), 10))) != p_907->g_868[1].f1) & l_864[6])) & l_864[6]);
        (*l_789) |= ((void*)0 != l_895);
        l_904++;
    }
    return (*l_789);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_5(uint64_t  p_6, int64_t  p_7, struct S2 * p_907)
{ /* block id: 298 */
    uint32_t l_767 = 0UL;
    l_767++;
    return l_767;
}


/* ------------------------------------------ */
/* 
 * reads : p_907->g_37 p_907->g_435 p_907->g_458.f7 p_907->g_762 p_907->g_553.f7
 * writes: p_907->g_37 p_907->g_435 p_907->g_635.f0
 */
uint64_t  func_10(int8_t  p_11, uint8_t  p_12, int8_t  p_13, struct S2 * p_907)
{ /* block id: 292 */
    VECTOR(int8_t, 16) l_744 = (VECTOR(int8_t, 16))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, (-1L)), (-1L)), (-1L), 0x5FL, (-1L), (VECTOR(int8_t, 2))(0x5FL, (-1L)), (VECTOR(int8_t, 2))(0x5FL, (-1L)), 0x5FL, (-1L), 0x5FL, (-1L));
    uint16_t *l_745 = &p_907->g_37;
    VECTOR(uint16_t, 8) l_748 = (VECTOR(uint16_t, 8))(0x79DEL, (VECTOR(uint16_t, 4))(0x79DEL, (VECTOR(uint16_t, 2))(0x79DEL, 0x651AL), 0x651AL), 0x651AL, 0x79DEL, 0x651AL);
    uint8_t *l_751 = &p_907->g_435;
    VECTOR(uint32_t, 4) l_756 = (VECTOR(uint32_t, 4))(0x1343B76FL, (VECTOR(uint32_t, 2))(0x1343B76FL, 0UL), 0UL);
    VECTOR(uint32_t, 4) l_757 = (VECTOR(uint32_t, 4))(0xE84B545FL, (VECTOR(uint32_t, 2))(0xE84B545FL, 4294967295UL), 4294967295UL);
    int32_t l_763 = 0x027AE8ACL;
    int32_t *l_764 = &p_907->g_635.f0;
    int i;
    (*l_764) = (safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(0x7274L, (safe_lshift_func_uint16_t_u_u(((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(3L, 0x17L)).yyxy)), 0L, ((VECTOR(int8_t, 8))(l_744.saa32141a)), 0L, 0x61L, 2L)).s3 && 3L) , (++(*l_745))), l_748.s0)))) | (safe_sub_func_uint8_t_u_u(((*l_751)--), l_748.s6))), (safe_sub_func_int32_t_s_s((-7L), ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(l_756.zxwyzyyxwwzwwwzz)).s8d, ((VECTOR(uint32_t, 2))(0x76BEB11EL, 0x45E56374L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_757.yx)), 0x8150076BL, 1UL, 0xDF7DB7C7L, 0UL, 6UL, 9UL)).lo)).hi))), (uint32_t)(safe_div_func_int64_t_s_s(((+(((((p_907->g_458.f7 || ((((p_12 , ((safe_sub_func_uint64_t_u_u((p_12 & l_748.s5), 0x3FBE4B47CE2326C1L)) , p_907->g_762)) , l_763) >= p_13) , (-1L))) < p_13) >= 0x7DL) , l_757.y) == p_12)) & GROUP_DIVERGE(1, 1)), 0x7996D1699AAB039DL))))).yxxxyyyy))).s4))));
    return p_907->g_553[0].f7;
}


/* ------------------------------------------ */
/* 
 * reads : p_907->g_326 p_907->g_635 p_907->g_591.f0 p_907->g_649 p_907->g_338 p_907->g_45 p_907->g_339 p_907->g_288 p_907->g_591.f9 p_907->g_553.f5 p_907->g_2 p_907->g_680 p_907->g_531 p_907->g_688 p_907->g_703 p_907->g_458.f1 p_907->g_32 p_907->g_591.f5 p_907->g_530 p_907->g_725 p_907->g_458.f9 p_907->g_732 p_907->g_458.f7 p_907->g_58
 * writes: p_907->g_326 p_907->g_591.f6 p_907->g_591.f0 p_907->g_339 p_907->g_45 p_907->g_476 p_907->g_680 p_907->g_688 p_907->g_635.f6 p_907->g_727 p_907->g_288
 */
int8_t  func_19(uint16_t  p_20, int32_t  p_21, uint32_t  p_22, struct S2 * p_907)
{ /* block id: 243 */
    uint64_t l_629 = 0xD1814664257127C0L;
    VECTOR(int32_t, 8) l_644 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x039A983BL), 0x039A983BL), 0x039A983BL, (-3L), 0x039A983BL);
    VECTOR(uint16_t, 8) l_646 = (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0xC57CL), 0xC57CL), 0xC57CL, 65529UL, 0xC57CL);
    VECTOR(uint16_t, 16) l_647 = (VECTOR(uint16_t, 16))(0x9F93L, (VECTOR(uint16_t, 4))(0x9F93L, (VECTOR(uint16_t, 2))(0x9F93L, 65532UL), 65532UL), 65532UL, 0x9F93L, 65532UL, (VECTOR(uint16_t, 2))(0x9F93L, 65532UL), (VECTOR(uint16_t, 2))(0x9F93L, 65532UL), 0x9F93L, 65532UL, 0x9F93L, 65532UL);
    VECTOR(uint16_t, 4) l_648 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xB936L), 0xB936L);
    int32_t *l_672 = (void*)0;
    uint8_t *l_701 = (void*)0;
    VECTOR(uint64_t, 16) l_722 = (VECTOR(uint64_t, 16))(0x9CFB5D61C6DB1476L, (VECTOR(uint64_t, 4))(0x9CFB5D61C6DB1476L, (VECTOR(uint64_t, 2))(0x9CFB5D61C6DB1476L, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 0x9CFB5D61C6DB1476L, 18446744073709551609UL, (VECTOR(uint64_t, 2))(0x9CFB5D61C6DB1476L, 18446744073709551609UL), (VECTOR(uint64_t, 2))(0x9CFB5D61C6DB1476L, 18446744073709551609UL), 0x9CFB5D61C6DB1476L, 18446744073709551609UL, 0x9CFB5D61C6DB1476L, 18446744073709551609UL);
    int i;
    --l_629;
    for (p_907->g_326 = (-19); (p_907->g_326 >= (-14)); p_907->g_326 = safe_add_func_uint16_t_u_u(p_907->g_326, 5))
    { /* block id: 247 */
        int32_t *l_634 = &p_907->g_591.f0;
        int8_t *l_645 = (void*)0;
        int32_t l_674 = 1L;
        int32_t l_675 = 0x0F780169L;
        int32_t l_677[7][1];
        VECTOR(uint64_t, 8) l_702 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 1UL, 18446744073709551609UL);
        VECTOR(int32_t, 2) l_704 = (VECTOR(int32_t, 2))(0L, 6L);
        VECTOR(int16_t, 4) l_707 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x483FL), 0x483FL);
        VECTOR(int16_t, 2) l_710 = (VECTOR(int16_t, 2))(8L, 0L);
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_677[i][j] = 0x4E52A577L;
        }
        (*p_907->g_338) = func_52(l_634, (p_907->g_635 , p_21), p_20, ((safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 6)) != (safe_mul_func_int16_t_s_s((*l_634), (safe_lshift_func_uint8_t_u_u((((-1L) != (p_907->g_591.f6 = (+(p_21 >= ((safe_rshift_func_uint8_t_u_s(p_21, 7)) > ((VECTOR(int32_t, 16))(l_644.s5740766335634565)).s8))))) , (((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_646.s37))))))).xxxyyyxy))).s37)).yyyyyxxxxyyxyyxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_647.s17a887c3500da9a3)).s1a)))).xyxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(1UL, 0xAEE7L)).xxyxyxxxyyxyyxxy)).s7d, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_648.xwzx)).odd))))).yyyxyyxy)).odd))).even)))), 0x6F2AL, 5UL)).ywxzzwyywyxzyxyx))).se6e6, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_907->g_649.xxxxxxxy)).hi)), ((VECTOR(uint16_t, 2))(0xA4CAL, 1UL)).yyyy))).w > p_22)), 0))))), p_907);
        for (p_22 = 0; (p_22 == 55); p_22++)
        { /* block id: 252 */
            int32_t l_668 = 0x29CCFAE1L;
            int32_t l_676[1][10][7];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_676[i][j][k] = (-5L);
                }
            }
            for (p_907->g_45 = (-7); (p_907->g_45 != 59); p_907->g_45 = safe_add_func_uint16_t_u_u(p_907->g_45, 3))
            { /* block id: 255 */
                int8_t *l_669[3][3][1];
                int32_t l_670[4][6][8] = {{{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)}},{{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)}},{{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)}},{{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)},{0x51A4BC50L,(-4L),5L,0x0749723DL,0x1B989F58L,0x0749723DL,5L,(-4L)}}};
                uint64_t *l_671 = &l_629;
                int32_t *l_683 = &l_676[0][6][2];
                int32_t *l_684 = &p_907->g_635.f0;
                int32_t *l_685 = &l_676[0][8][0];
                int32_t *l_686[6][3][2] = {{{&p_907->g_288,&l_674},{&p_907->g_288,&l_674},{&p_907->g_288,&l_674}},{{&p_907->g_288,&l_674},{&p_907->g_288,&l_674},{&p_907->g_288,&l_674}},{{&p_907->g_288,&l_674},{&p_907->g_288,&l_674},{&p_907->g_288,&l_674}},{{&p_907->g_288,&l_674},{&p_907->g_288,&l_674},{&p_907->g_288,&l_674}},{{&p_907->g_288,&l_674},{&p_907->g_288,&l_674},{&p_907->g_288,&l_674}},{{&p_907->g_288,&l_674},{&p_907->g_288,&l_674},{&p_907->g_288,&l_674}}};
                int32_t l_687[8][5] = {{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)}};
                uint8_t *l_700 = (void*)0;
                uint8_t **l_699 = &l_700;
                int16_t l_711 = 9L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_669[i][j][k] = &p_907->g_635.f6;
                    }
                }
                if ((**p_907->g_338))
                    break;
                if (((l_646.s2 & (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((*l_634) &= ((safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((((VECTOR(int16_t, 2))((-1L), (-10L))).lo <= (((safe_mod_func_uint64_t_u_u(((*l_671) = (FAKE_DIVERGE(p_907->global_1_offset, get_global_id(1), 10) != ((0L & (p_907->g_591.f9 >= (((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x315612C2L, 0L)).xyxyyxyxxxxyyyyx))))).s9 , (safe_div_func_uint32_t_u_u(l_646.s6, ((0x9AA2L && (l_668 >= (((p_907->g_476.y = ((p_907->g_553[0].f5 , &p_907->g_590[3][0]) == &p_907->g_590[2][1])) | p_907->g_2) & p_22))) , l_668)))))) ^ l_670[0][4][5]))), p_20)) ^ 6L) , 0x2E5BL)), p_20)), 15)))) , 65529UL)), p_20)), 6))) , (*p_907->g_339)))
                { /* block id: 260 */
                    int32_t *l_673[5][10] = {{(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0,(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0},{(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0,(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0},{(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0,(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0},{(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0,(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0},{(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0,(void*)0,&p_907->g_47,&l_670[0][5][5],&p_907->g_47,(void*)0}};
                    int i, j;
                    l_672 = ((*p_907->g_338) = l_672);
                    ++p_907->g_680[2];
                }
                else
                { /* block id: 264 */
                    return p_907->g_531.sb;
                }
                p_907->g_688++;
                (*p_907->g_338) = func_52(((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((1L & (safe_sub_func_uint64_t_u_u((((*l_699) = l_669[1][2][0]) == l_701), ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551611UL, 0x16B13C16EEF997BEL)).yyxxxyyx)), 2UL, 0xD1310F6FE04AC36AL, ((VECTOR(uint64_t, 2))(l_702.s56)), 0x1A7612CA712DB90FL, 18446744073709551615UL, 5UL, 0x5DD52C8AE8A659EAL)).s630b, ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 2))(p_907->g_703.s5b)).yxyy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(l_704.xx)).xxxy, ((VECTOR(uint32_t, 2))(4294967295UL, 5UL)).xxyx))).zyxwyyyxyywywwyy)).sefca))))).hi))).xyxx))).x))), (p_21 < ((*l_685) = ((safe_mul_func_int16_t_s_s((~((VECTOR(int16_t, 8))(l_707.zwyyzxxx)).s7), ((!p_907->g_458.f1) , (((((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 16))(l_710.yyxxyxyxxxxxyyyy)).s6bb9))).x == 0L) & (l_671 == &l_629)) <= p_907->g_32.s1)))) != 0UL))))), (*l_634))) != 5UL), GROUP_DIVERGE(1, 1))) , &l_687[7][0]), p_22, l_668, l_711, p_907);
            }
        }
        if ((atomic_inc(&p_907->l_atomic_input[5]) == 2))
        { /* block id: 274 */
            uint32_t l_712 = 4294967289UL;
            uint32_t l_713 = 1UL;
            uint16_t l_714 = 0x1AE6L;
            l_713 ^= l_712;
            l_714 &= 1L;
            unsigned int result = 0;
            result += l_712;
            result += l_713;
            result += l_714;
            atomic_add(&p_907->l_special_values[5], result);
        }
        else
        { /* block id: 277 */
            (1 + 1);
        }
        for (p_907->g_635.f6 = 0; (p_907->g_635.f6 < (-11)); p_907->g_635.f6--)
        { /* block id: 282 */
            uint8_t **l_719 = &l_701;
            int32_t l_730 = 0x1C32185AL;
            uint8_t l_731 = 0x92L;
            int32_t l_734 = 0x66E1FDF0L;
            l_734 |= (p_907->g_591.f5 , ((*l_634) = (safe_rshift_func_uint16_t_u_u(p_907->g_530.w, (((l_719 != ((safe_div_func_uint16_t_u_u(((((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 2))(l_722.sf7)).yxyy, (uint64_t)0xBDD11317D48E60D9L, (uint64_t)(safe_sub_func_int32_t_s_s((p_907->g_725 == (p_907->g_727 = &p_907->g_726)), ((**p_907->g_338) = (safe_lshift_func_uint8_t_u_s(l_730, 2)))))))).wxyxzwzz, (uint64_t)p_20))).s6 , p_907->g_458.f9) == (*l_634)), l_731)) , p_907->g_732[0])) && 0x9360F45AL) && p_907->g_458.f7)))));
        }
    }
    return p_907->g_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_907->g_2 p_907->g_comm_values p_907->g_81 p_907->l_comm_values p_907->g_45 p_907->g_47 p_907->g_112 p_907->g_284 p_907->g_288 p_907->g_32 p_907->g_297 p_907->g_307 p_907->g_308 p_907->g_309 p_907->g_310 p_907->g_312 p_907->g_111 p_907->g_289 p_907->g_326 p_907->g_331 p_907->g_110 p_907->g_338 p_907->g_348 p_907->g_357 p_907->g_358 p_907->g_377 p_907->g_435 p_907->g_339 p_907->g_358.f0 p_907->g_458 p_907->g_476 p_907->g_522 p_907->g_450 p_907->g_553 p_907->g_612 p_907->g_613 p_907->g_531 p_907->g_591.f8 p_907->g_622 p_907->g_591.f0
 * writes: p_907->g_58 p_907->g_81 p_907->g_45 p_907->g_112 p_907->g_47 p_907->g_284 p_907->g_288 p_907->g_289 p_907->g_297 p_907->g_326 p_907->g_348 p_907->g_435 p_907->g_339 p_907->g_358.f1.f6 p_907->g_522 p_907->g_358.f1.f1 p_907->g_358.f1.f2 p_907->g_590 p_907->g_622 p_907->g_591.f0
 */
int16_t  func_42(int32_t  p_43, struct S2 * p_907)
{ /* block id: 9 */
    uint16_t *l_44 = &p_907->g_45;
    int32_t *l_46[10][4] = {{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47},{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47},{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47},{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47},{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47},{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47},{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47},{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47},{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47},{&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47}};
    int64_t *l_57 = &p_907->g_58;
    VECTOR(int32_t, 2) l_65 = (VECTOR(int32_t, 2))(0x38EDFC7AL, 0x60F1B639L);
    VECTOR(int64_t, 2) l_68 = (VECTOR(int64_t, 2))((-2L), 0x7F3C8D209D081799L);
    VECTOR(uint8_t, 16) l_282 = (VECTOR(uint8_t, 16))(0xB1L, (VECTOR(uint8_t, 4))(0xB1L, (VECTOR(uint8_t, 2))(0xB1L, 0xA3L), 0xA3L), 0xA3L, 0xB1L, 0xA3L, (VECTOR(uint8_t, 2))(0xB1L, 0xA3L), (VECTOR(uint8_t, 2))(0xB1L, 0xA3L), 0xB1L, 0xA3L, 0xB1L, 0xA3L);
    VECTOR(uint8_t, 2) l_283 = (VECTOR(uint8_t, 2))(0xD9L, 252UL);
    uint8_t *l_287[4][5][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    VECTOR(uint32_t, 16) l_614 = (VECTOR(uint32_t, 16))(0xC30F84A1L, (VECTOR(uint32_t, 4))(0xC30F84A1L, (VECTOR(uint32_t, 2))(0xC30F84A1L, 4294967295UL), 4294967295UL), 4294967295UL, 0xC30F84A1L, 4294967295UL, (VECTOR(uint32_t, 2))(0xC30F84A1L, 4294967295UL), (VECTOR(uint32_t, 2))(0xC30F84A1L, 4294967295UL), 0xC30F84A1L, 4294967295UL, 0xC30F84A1L, 4294967295UL);
    VECTOR(int32_t, 2) l_617 = (VECTOR(int32_t, 2))(0x3C2CACE1L, 9L);
    VECTOR(uint16_t, 4) l_620 = (VECTOR(uint16_t, 4))(0xFE83L, (VECTOR(uint16_t, 2))(0xFE83L, 0x77FBL), 0x77FBL);
    int64_t *l_621[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_621[i] = &p_907->g_591.f5;
    p_43 ^= (l_44 != l_44);
    (*p_907->g_338) = func_48((~p_907->g_2), p_907->g_comm_values[p_907->tid], func_52(&p_907->g_47, ((*l_57) = 1L), func_59(func_63((((VECTOR(int32_t, 4))(l_65.xxyy)).w , (~(safe_add_func_uint8_t_u_u((p_907->g_289 = (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(0x35B2921979897364L, ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(l_68.yy)).xxxx, ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))((func_69(l_57, p_907) , (safe_rshift_func_int16_t_s_u((((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(0x31L, 255UL)).xyxy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_282.s034f45d0bd218efc)).hi)).odd))).yyzyxzxy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_283.yxyyxxyxyxxxyxyx)).s1c)).yyxyyyyy))).s6430216626303147, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(p_907->g_284.s0707441504371146)).s90, ((VECTOR(uint8_t, 2))(0x76L, 0xBBL))))))).xxyyxxyxyyyxxxxx))).sf0, (uint8_t)p_43, (uint8_t)p_907->g_112))).hi && (safe_sub_func_uint8_t_u_u((p_907->g_288 ^= (p_907->g_284.s4 = (p_43 | p_43))), p_43))), p_907->g_32.s4))), ((VECTOR(int64_t, 2))(1L)), (-1L))), ((VECTOR(int64_t, 4))((-1L))), ((VECTOR(int64_t, 4))(0x2139893001091E14L))))), ((VECTOR(int64_t, 4))(0x33FC6AC2D5D75FF6L)))))))), ((VECTOR(int64_t, 4))(0x10F74F535F54270CL)), ((VECTOR(int64_t, 4))(0x19CFDA8591A7F807L))))), p_907->g_32.s6, 0x72893A71CE9F94B8L, 0x1551DEAB51653EB9L)).s62)).hi , p_43)), p_43)))), p_907), p_907->g_308.s2, p_907->g_377, p_907), p_43, p_907), p_907);
    p_907->g_591.f0 ^= ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(((p_907->g_622 &= (((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(p_907->g_612.xyyxxyxx)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(p_907->g_613.yy)).yyxyyyyx, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_907->g_312.s9, 0xA1B273A6L, p_907->g_331.s5, 0x1874E82BL, 1UL, 4294967293UL, ((VECTOR(uint32_t, 8))(l_614.sb74a53d6)), 9UL, 0x591E894FL)).s646f)).yzwzzzyy))).s23)).xxyyxxyx))).s4 > ((((*l_57) = (safe_add_func_int64_t_s_s((((((p_907->g_112 , ((VECTOR(int32_t, 16))(l_617.yyxyxxxxxyxxxxyx)).s7) , 0x10L) >= (safe_mul_func_int16_t_s_s(p_907->g_531.s3, ((p_907->g_591.f8 >= p_43) >= ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_620.zzww)))).y)))) | ((p_43 < 0xC1E691C79B88C9AFL) , 0xE0L)) > 0x4EF2079B2A721D21L), p_907->g_47))) <= p_43) & 0x0CL))) , 0x1589L), 9L, p_43, p_43, p_907->g_458.f3, p_907->g_288, 3L, 0x4D48L)), ((VECTOR(int16_t, 8))((-6L)))))).s3113130155262241))).lo)).s1376460227534760)).sdd87, ((VECTOR(uint16_t, 4))(0x3BB8L))))).z;
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_907->g_358.f0 p_907->g_458 p_907->g_339 p_907->g_288 p_907->g_47 p_907->g_338 p_907->g_45 p_907->g_476 p_907->g_522 p_907->g_450 p_907->g_435 p_907->g_553 p_907->g_309 p_907->g_308 p_907->g_2
 * writes: p_907->g_288 p_907->g_339 p_907->g_358.f1.f6 p_907->g_47 p_907->g_522 p_907->g_358.f1.f1 p_907->g_348 p_907->g_358.f1.f2 p_907->g_590 p_907->g_45
 */
int32_t * func_48(uint32_t  p_49, int32_t  p_50, int32_t * p_51, struct S2 * p_907)
{ /* block id: 184 */
    VECTOR(int8_t, 16) l_449 = (VECTOR(int8_t, 16))(0x5BL, (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, (-1L)), (-1L)), (-1L), 0x5BL, (-1L), (VECTOR(int8_t, 2))(0x5BL, (-1L)), (VECTOR(int8_t, 2))(0x5BL, (-1L)), 0x5BL, (-1L), 0x5BL, (-1L));
    int32_t l_452 = 0x1F08325EL;
    int32_t l_453 = 0x57D17F23L;
    VECTOR(int32_t, 2) l_454 = (VECTOR(int32_t, 2))(0x66391F0CL, 0x0C76F8E2L);
    int16_t *l_466 = &p_907->g_348[0][2];
    uint64_t l_470 = 18446744073709551613UL;
    VECTOR(uint8_t, 8) l_475 = (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x83L), 0x83L), 0x83L, 9UL, 0x83L);
    VECTOR(uint64_t, 16) l_485 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0UL), 0UL), 0UL, 6UL, 0UL, (VECTOR(uint64_t, 2))(6UL, 0UL), (VECTOR(uint64_t, 2))(6UL, 0UL), 6UL, 0UL, 6UL, 0UL);
    uint8_t *l_500 = (void*)0;
    VECTOR(uint32_t, 16) l_529 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xAAAD6D2AL), 0xAAAD6D2AL), 0xAAAD6D2AL, 0UL, 0xAAAD6D2AL, (VECTOR(uint32_t, 2))(0UL, 0xAAAD6D2AL), (VECTOR(uint32_t, 2))(0UL, 0xAAAD6D2AL), 0UL, 0xAAAD6D2AL, 0UL, 0xAAAD6D2AL);
    VECTOR(uint16_t, 4) l_532 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL);
    uint32_t l_606 = 0UL;
    int i;
    for (p_49 = 25; (p_49 >= 50); p_49 = safe_add_func_int8_t_s_s(p_49, 3))
    { /* block id: 187 */
        int64_t **l_445 = &p_907->g_81;
        int64_t **l_447 = &p_907->g_81;
        int64_t ***l_446 = &l_447;
        VECTOR(uint32_t, 4) l_448 = (VECTOR(uint32_t, 4))(0xF0FC2CF3L, (VECTOR(uint32_t, 2))(0xF0FC2CF3L, 0xD01EACE1L), 0xD01EACE1L);
        uint16_t *l_451[1][10][1] = {{{&p_907->g_45},{&p_907->g_45},{&p_907->g_45},{&p_907->g_45},{&p_907->g_45},{&p_907->g_45},{&p_907->g_45},{&p_907->g_45},{&p_907->g_45},{&p_907->g_45}}};
        int32_t l_455 = (-8L);
        VECTOR(uint32_t, 8) l_516 = (VECTOR(uint32_t, 8))(0x07431B01L, (VECTOR(uint32_t, 4))(0x07431B01L, (VECTOR(uint32_t, 2))(0x07431B01L, 0UL), 0UL), 0UL, 0x07431B01L, 0UL);
        int32_t l_550 = 0x1E75443EL;
        int32_t *l_602 = (void*)0;
        int32_t *l_603 = &p_907->g_288;
        int32_t *l_604 = &l_453;
        int32_t *l_605[10];
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_605[i] = &p_907->g_47;
        if (((((-1L) || ((VECTOR(int8_t, 16))((safe_mul_func_uint8_t_u_u(255UL, ((l_445 != ((*l_446) = (void*)0)) < ((VECTOR(uint32_t, 8))(l_448.xxwzxwww)).s2))), ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(0x55L, 1L)).xyxyyxxy, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_449.scefc)).hi)).yxyyyxyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(4L, 0x2EL)).even, ((VECTOR(int8_t, 4))(p_907->g_450.s2232)), p_50, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x43L, (-3L))))).xyxy, (int8_t)(p_50 , p_907->g_284.s4), (int8_t)(((p_907->g_357[0] , ((p_907->g_331.s2--) <= ((p_907->g_458 , p_50) , (-3L)))) != p_907->g_312.s6) && (-1L))))), 0x66L, l_448.z, 0x04L, 0L)).s74)))).yyyxyyxyyyxyxxyy)).s2486)), 0x5FL, l_448.w, p_907->g_458.f7, ((VECTOR(int8_t, 2))((-4L))), 8L)).sc25e)).wzxwyyzz))), ((VECTOR(int8_t, 8))(4L))))), 0x48L, ((VECTOR(int8_t, 4))(1L)), 0x4BL, 0x60L)).s0) > p_907->g_358.f0) == l_454.y))
        { /* block id: 190 */
            int64_t l_461 = 1L;
            int16_t **l_467 = &l_466;
            VECTOR(uint64_t, 8) l_484 = (VECTOR(uint64_t, 8))(0x75AF4E7569644A7FL, (VECTOR(uint64_t, 4))(0x75AF4E7569644A7FL, (VECTOR(uint64_t, 2))(0x75AF4E7569644A7FL, 0x804271C02737AC33L), 0x804271C02737AC33L), 0x804271C02737AC33L, 0x75AF4E7569644A7FL, 0x804271C02737AC33L);
            int32_t *l_512 = &p_907->g_47;
            VECTOR(int8_t, 4) l_535 = (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x4AL), 0x4AL);
            VECTOR(int32_t, 16) l_556 = (VECTOR(int32_t, 16))(0x594B91FFL, (VECTOR(int32_t, 4))(0x594B91FFL, (VECTOR(int32_t, 2))(0x594B91FFL, (-5L)), (-5L)), (-5L), 0x594B91FFL, (-5L), (VECTOR(int32_t, 2))(0x594B91FFL, (-5L)), (VECTOR(int32_t, 2))(0x594B91FFL, (-5L)), 0x594B91FFL, (-5L), 0x594B91FFL, (-5L));
            struct S0 *l_588 = (void*)0;
            int i;
            if (((p_50 && ((((safe_rshift_func_uint16_t_u_s((l_461 = GROUP_DIVERGE(2, 1)), 14)) , (((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((*l_467) = l_466) == (p_907->g_458 , l_451[0][0][0])), 4)), (((p_51 == (l_455 , ((*p_907->g_338) = func_52(p_51, (safe_sub_func_uint16_t_u_u(p_49, p_50)), (*p_907->g_339), (*p_907->g_339), p_907)))) | l_448.w) != p_907->g_45))) | 0xC543L) != 0x12L)) & 18446744073709551609UL) < p_49)) ^ l_470))
            { /* block id: 194 */
                VECTOR(uint64_t, 8) l_483 = (VECTOR(uint64_t, 8))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0x974F62859FB749C1L), 0x974F62859FB749C1L), 0x974F62859FB749C1L, 7UL, 0x974F62859FB749C1L);
                uint16_t **l_486[7][7] = {{&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377},{&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377},{&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377},{&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377},{&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377},{&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377},{&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377,&p_907->g_377}};
                VECTOR(uint16_t, 4) l_489 = (VECTOR(uint16_t, 4))(0x3BCDL, (VECTOR(uint16_t, 2))(0x3BCDL, 0xF23FL), 0xF23FL);
                int8_t *l_501 = (void*)0;
                int8_t *l_502 = (void*)0;
                int32_t l_503 = 0L;
                uint32_t *l_504 = (void*)0;
                uint32_t *l_505 = (void*)0;
                uint32_t *l_506 = (void*)0;
                uint32_t *l_507 = (void*)0;
                uint32_t *l_508 = (void*)0;
                uint32_t *l_509 = (void*)0;
                int8_t *l_510 = (void*)0;
                int8_t *l_511 = &p_907->g_358.f1.f6;
                int i, j;
                (*p_907->g_338) = (((*l_511) = ((0x6525L != (-2L)) != ((l_452 = ((safe_sub_func_uint8_t_u_u(p_907->g_358.f0, ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_475.s2263573416652356)).s4, (l_503 = ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(0x6BL, (-5L))).xxxyxyyx, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x0EL, (-10L), (-6L), ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(p_907->g_476.xxyx)), ((VECTOR(int8_t, 8))(0x66L, 0x7BL, ((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_483.s77461555)), ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x862EC4D8D8920B3CL, 18446744073709551613UL)), 18446744073709551609UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_484.s6723)).even)), 0xDA86BB1A65B3D7F6L, 0xD211C9E42BA7C311L, 0x46CBE53F5E36E1B6L)).lo, ((VECTOR(uint64_t, 8))(l_485.s288d6d0d)).even))).xyzywzxw, (uint64_t)((void*)0 == l_486[5][4]), (uint64_t)(((((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))((8L & ((*l_466) = ((((((p_49 , (FAKE_DIVERGE(p_907->local_2_offset, get_local_id(2), 10) && ((VECTOR(uint64_t, 2))(0x1C200C1C2B06CAF8L, 0UL)).hi)) == (!(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_489.ywyyyyzw)))).s1 < (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(l_449.sc, (p_907->g_309.y--))), 5)) == 0x4BE8L) ^ p_49), l_484.s4)), 2))))) || GROUP_DIVERGE(2, 1)) >= p_50) || 0xF9C6L) != p_49))), 2UL, 0UL, 0x6FL)).z, 0x3CL)) || (*p_907->g_339)) & l_449.s0) > 1L) >= (*p_51))))))).sa, p_50)) , l_484.s2), p_50)), p_49)) , (void*)0) == l_500) , p_49), 0x11L, ((VECTOR(int8_t, 2))(1L)), 0x1CL, 0L)).hi, ((VECTOR(int8_t, 4))(5L))))), 0x10L, p_907->g_284.s7, 0x12L, p_49, ((VECTOR(int8_t, 2))(8L)), (-3L), 0x73L, 0L)))).s20df, ((VECTOR(int8_t, 4))(4L))))), ((VECTOR(int8_t, 4))(0x66L)))).s77, ((VECTOR(int8_t, 2))(0x77L))))).xyxx, ((VECTOR(int8_t, 4))(0x3EL))))).yyxwzyxw))).s2))) & l_455))) | GROUP_DIVERGE(1, 1))) | 7UL))) , l_512);
                (**p_907->g_338) |= (p_907->g_476.x != (l_455 &= (-8L)));
            }
            else
            { /* block id: 203 */
                uint32_t *l_517 = (void*)0;
                uint32_t *l_519[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_521 = 0x006EBA17L;
                uint64_t *l_548 = (void*)0;
                uint64_t *l_549[7] = {&l_470,(void*)0,&l_470,&l_470,(void*)0,&l_470,&l_470};
                int32_t *l_551 = &p_907->g_288;
                uint16_t **l_552 = &l_451[0][4][0];
                int16_t *l_587 = &p_907->g_358.f1.f2;
                int i, j;
                l_551 = ((((l_550 = (safe_rshift_func_int8_t_s_u((0x25053CD819565D77L < ((((((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_516.s63)), 6UL, 1UL)).yxwwwzxz))).s5730260613400356)).even)).s4)) , &p_907->g_326) == ((--p_907->g_522) , &l_461)) && (p_50 ^ (l_455 ^= (safe_rshift_func_uint8_t_u_u(p_907->g_458.f8, 5))))) <= (p_907->g_358.f1.f1 = (+(((safe_div_func_uint8_t_u_u(((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 4))(0x554A5E0AL, ((VECTOR(uint32_t, 2))(l_529.s4d)), 4294967295UL)).xxywzwxzwyywzzzy, ((VECTOR(uint32_t, 2))(p_907->g_530.zz)).xxxyxyxyxyyyyxxx))).sa, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_907->g_531.s5c32)).w, 0xEF48A286L, 4294967287UL, p_907->g_112, ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 16))(0UL, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_532.zyxyzwwz)).s5536020355146034)).s7af0))), (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(0x7AL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(1L, 4L)), ((VECTOR(int8_t, 8))(0L, 0x38L, ((VECTOR(int8_t, 4))(l_535.xzyx)), 0x68L, 0x05L)).s76))), 1L, 0x2CL)), (-1L), 0x19L, 0x6DL)).even, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((((VECTOR(int32_t, 8))(p_907->g_540.s33646620)).s1 , ((*l_512) = (((((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((-1L), ((~((safe_unary_minus_func_int32_t_s(((safe_add_func_int8_t_s_s(0x60L, (*l_512))) != (*p_51)))) | FAKE_DIVERGE(p_907->local_1_offset, get_local_id(1), 10))) , l_521))), GROUP_DIVERGE(0, 1))) || 0L) | 0x353138AA55B2CC1DL) != p_50) < p_50))), FAKE_DIVERGE(p_907->local_1_offset, get_local_id(1), 10))), l_448.w)) , p_50), ((VECTOR(int8_t, 2))(0x6CL)), 0x56L)))), ((VECTOR(int8_t, 4))((-1L)))))).w, 0)), FAKE_DIVERGE(p_907->group_1_offset, get_group_id(1), 10), 0xCE0EL, ((VECTOR(uint16_t, 4))(0xEC07L)), ((VECTOR(uint16_t, 2))(0xCF08L)), 0x4BF8L, 0xF1D6L)), ((VECTOR(uint16_t, 16))(0x8556L))))).s1d)).xxyy, ((VECTOR(uint16_t, 4))(0xF0FDL))))))), 4294967286UL, GROUP_DIVERGE(0, 1), 1UL, 0x83BCC658L, 0x7DDA4E15L, 0x37F00B1DL, 0UL)).sb <= l_521) != l_448.z), l_484.s4)) <= p_907->g_450.s9) , p_907->g_435)))) , GROUP_DIVERGE(1, 1))), l_521))) >= 0xB52CL) <= p_907->g_45) , (*p_907->g_338));
                (*p_907->g_339) &= (l_552 == (p_907->g_553[0] , &p_907->g_377));
                if (((safe_sub_func_int8_t_s_s((((((VECTOR(int32_t, 16))(l_556.sdfefe0ba8b71ef27)).sd == FAKE_DIVERGE(p_907->group_0_offset, get_group_id(0), 10)) & (safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((((*l_587) = (((*l_551) = (((safe_rshift_func_uint16_t_u_u((l_550 = (0UL != (safe_sub_func_uint8_t_u_u((l_470 , GROUP_DIVERGE(0, 1)), (safe_div_func_int64_t_s_s(((safe_add_func_int16_t_s_s(((*l_466) = (~(safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((((safe_div_func_uint8_t_u_u(((**p_907->g_338) >= ((p_50 >= ((safe_mul_func_int16_t_s_s((-8L), (safe_rshift_func_uint16_t_u_u(((void*)0 == &p_907->g_435), l_550)))) | (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_907->g_288, l_485.s6)), p_50)), (*l_551))), p_907->g_309.y)))) < FAKE_DIVERGE(p_907->global_0_offset, get_global_id(0), 10))), p_907->g_553[0].f9)) >= 0x5CAC3BE8DEA2EE4AL) < (-1L)), p_907->g_308.s0)) , (*l_551)), l_532.z)))), (-7L))) | p_907->g_358.f0), 7L)))))), FAKE_DIVERGE(p_907->global_2_offset, get_global_id(2), 10))) <= p_49) | l_448.w)) >= l_453)) ^ 0L), p_49)) & l_516.s7), p_49))) && GROUP_DIVERGE(2, 1)), (-10L))) ^ p_907->g_2))
                { /* block id: 215 */
                    struct S0 **l_589[8][6][5] = {{{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0}},{{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0}},{{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0}},{{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0}},{{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0}},{{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0}},{{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0}},{{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0},{&l_588,&l_588,&l_588,(void*)0,(void*)0}}};
                    int i, j, k;
                    if ((*p_907->g_339))
                        break;
                    p_907->g_590[3][0] = l_588;
                }
                else
                { /* block id: 218 */
                    VECTOR(uint16_t, 4) l_599 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x8270L), 0x8270L);
                    uint32_t **l_600 = &l_519[0][3];
                    uint32_t **l_601 = &l_517;
                    int i;
                    l_455 = ((*l_551) = ((p_49 < (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(l_516.s5, 0x3D3884114C79ADEEL, (((p_50 && (safe_unary_minus_func_uint16_t_u((((*l_601) = ((*l_600) = func_52(&l_550, (safe_div_func_uint64_t_u_u(0x6D94FE75F887E6FAL, p_907->g_591.f9)), (safe_rshift_func_uint16_t_u_s(l_599.x, 12)), (*p_51), p_907))) == l_551)))) <= 7UL) == 18446744073709551614UL), ((VECTOR(uint64_t, 4))(0x6D46B2CA0A1B9376L)), 1UL)).s60))).hi, l_452))) >= l_448.w));
                }
            }
        }
        else
        { /* block id: 225 */
            return (*p_907->g_338);
        }
        l_606++;
        for (p_907->g_45 = (-21); (p_907->g_45 != 46); ++p_907->g_45)
        { /* block id: 231 */
            int32_t *l_611[6][7] = {{(void*)0,(void*)0,&p_907->g_47,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_907->g_47,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_907->g_47,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_907->g_47,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_907->g_47,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_907->g_47,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            return l_611[0][1];
        }
    }
    return p_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_907->g_47 p_907->g_288 p_907->g_591.f0
 * writes: p_907->g_47 p_907->g_288 p_907->g_591.f0
 */
int32_t * func_52(int32_t * p_53, int64_t  p_54, int32_t  p_55, int32_t  p_56, struct S2 * p_907)
{ /* block id: 180 */
    int16_t l_436[7] = {0L,(-7L),0L,0L,(-7L),0L,0L};
    uint64_t l_437 = 18446744073709551615UL;
    int32_t *l_440 = &p_907->g_288;
    int i;
    (*p_53) ^= l_436[0];
    ++l_437;
    return l_440;
}


/* ------------------------------------------ */
/* 
 * reads : p_907->g_297 p_907->g_47 p_907->g_289 p_907->g_326 p_907->g_110 p_907->g_338 p_907->g_288 p_907->g_310 p_907->g_348 p_907->g_357 p_907->g_435 p_907->g_339
 * writes: p_907->g_297 p_907->g_326 p_907->g_112 p_907->g_288 p_907->g_348 p_907->g_47 p_907->g_435 p_907->g_339
 */
int32_t  func_59(uint16_t * p_60, uint32_t  p_61, uint16_t * p_62, struct S2 * p_907)
{ /* block id: 140 */
    int16_t *l_428 = &p_907->g_348[5][2];
    int16_t **l_427 = &l_428;
    int32_t l_429 = 0x5B689FBCL;
    int16_t **l_430 = (void*)0;
    int16_t *l_432[2][3][5] = {{{(void*)0,&p_907->g_348[8][3],&p_907->g_348[8][3],(void*)0,(void*)0},{(void*)0,&p_907->g_348[8][3],&p_907->g_348[8][3],(void*)0,(void*)0},{(void*)0,&p_907->g_348[8][3],&p_907->g_348[8][3],(void*)0,(void*)0}},{{(void*)0,&p_907->g_348[8][3],&p_907->g_348[8][3],(void*)0,(void*)0},{(void*)0,&p_907->g_348[8][3],&p_907->g_348[8][3],(void*)0,(void*)0},{(void*)0,&p_907->g_348[8][3],&p_907->g_348[8][3],(void*)0,(void*)0}}};
    int16_t **l_431 = &l_432[1][1][2];
    int32_t *l_433 = &p_907->g_358.f1.f0;
    int32_t *l_434[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_434[i] = &p_907->g_358.f1.f0;
    if ((atomic_inc(&p_907->l_atomic_input[36]) == 6))
    { /* block id: 142 */
        int32_t l_379 = 0x0C5AB1CBL;
        int32_t *l_378 = &l_379;
        int32_t *l_380 = &l_379;
        l_380 = (l_378 = (void*)0);
        for (l_379 = 0; (l_379 != 29); l_379++)
        { /* block id: 147 */
            uint64_t l_383 = 0x28264F49A396AC79L;
            int64_t l_384 = 1L;
            l_384 = l_383;
        }
        unsigned int result = 0;
        result += l_379;
        atomic_add(&p_907->l_special_values[36], result);
    }
    else
    { /* block id: 150 */
        (1 + 1);
    }
    if ((atomic_inc(&p_907->l_atomic_input[28]) == 4))
    { /* block id: 154 */
        uint8_t l_385[9] = {253UL,253UL,253UL,253UL,253UL,253UL,253UL,253UL,253UL};
        VECTOR(int32_t, 16) l_386 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
        VECTOR(int32_t, 4) l_387 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0L), 0L);
        uint8_t l_388 = 0xBAL;
        int32_t l_389[3];
        int32_t *l_390 = &l_389[2];
        int32_t *l_391 = (void*)0;
        uint64_t l_392[6][3][7] = {{{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL}},{{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL}},{{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL}},{{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL}},{{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL}},{{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL},{18446744073709551606UL,0x48AC47CD2B59D192L,0x48AC47CD2B59D192L,18446744073709551606UL,8UL,0xB2CD55914FFCE9B6L,7UL}}};
        VECTOR(int64_t, 8) l_420 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x53C15AD43F3C3C12L), 0x53C15AD43F3C3C12L), 0x53C15AD43F3C3C12L, 0L, 0x53C15AD43F3C3C12L);
        VECTOR(int64_t, 2) l_421 = (VECTOR(int64_t, 2))(1L, (-9L));
        struct S0 l_422 = {0x1E1EF249L,0L,5L,0x12040362L,0x93CE7C17627B602AL,0x459773ACBE8001C5L,0x1FL,0x3DD51F2B3B4A5CC6L,-4L,0x2E4EL};/* VOLATILE GLOBAL l_422 */
        uint16_t l_425 = 0xE813L;
        uint16_t *l_424[4][3][10] = {{{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425},{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425},{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425}},{{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425},{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425},{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425}},{{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425},{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425},{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425}},{{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425},{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425},{(void*)0,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425,(void*)0,(void*)0,&l_425}}};
        uint16_t **l_423 = &l_424[3][1][4];
        uint16_t **l_426[7][5][7] = {{{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]}},{{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]}},{{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]}},{{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]}},{{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]}},{{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]}},{{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]},{(void*)0,&l_424[3][1][4],&l_424[3][1][4],&l_424[3][1][4],&l_424[0][0][9],&l_424[0][0][5],&l_424[3][1][4]}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_389[i] = 4L;
        l_391 = ((GROUP_DIVERGE(2, 1) , l_385[8]) , (((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x45ED6509L, (-2L))).odd, ((VECTOR(int32_t, 2))(l_386.sca)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x6828AF6DL, 0x7C1ACF76L)))), ((VECTOR(int32_t, 4))(l_387.xzzz)))).s1 , l_388) , l_389[2]) , l_390));
        if (l_392[2][1][5])
        { /* block id: 156 */
            int32_t l_393 = 0x590E7AB6L;
            (*l_391) &= 0x7A6692D8L;
            for (l_393 = 0; (l_393 >= 7); l_393++)
            { /* block id: 160 */
                uint32_t l_396 = 0xC7C74090L;
                uint64_t l_397 = 0x8D6E27ADA7AEEE0CL;
                int16_t l_398 = 0x19D3L;
                int32_t l_399[2][7][1] = {{{0x57149B7CL},{0x57149B7CL},{0x57149B7CL},{0x57149B7CL},{0x57149B7CL},{0x57149B7CL},{0x57149B7CL}},{{0x57149B7CL},{0x57149B7CL},{0x57149B7CL},{0x57149B7CL},{0x57149B7CL},{0x57149B7CL},{0x57149B7CL}}};
                VECTOR(int32_t, 8) l_400 = (VECTOR(int32_t, 8))(0x416733E5L, (VECTOR(int32_t, 4))(0x416733E5L, (VECTOR(int32_t, 2))(0x416733E5L, (-1L)), (-1L)), (-1L), 0x416733E5L, (-1L));
                int64_t l_401 = 0x1CB071589898A9D4L;
                VECTOR(int16_t, 2) l_402 = (VECTOR(int16_t, 2))(1L, 0x33ADL);
                uint16_t l_403 = 65535UL;
                int i, j, k;
                l_390 = (void*)0;
                l_396 = ((*l_391) |= 0x2CC7B734L);
                (*l_391) |= ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_397, 0x1E58C16AL, l_398, ((VECTOR(int32_t, 4))(1L, l_399[1][2][0], 0x0D6AF7FFL, 1L)), 0L)))).s7657151637672203)).lo, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_400.s63)), 0L, 0x594061D5L)).zwyyxxzzywwwwxzz, ((VECTOR(int32_t, 4))(l_401, 0x1CCF33A9L, 0x35DB8D12L, 0x45D3A5D9L)).xyywxzzxxyyxyxyx))).odd))).s5;
                l_403--;
            }
        }
        else
        { /* block id: 167 */
            VECTOR(int32_t, 16) l_406 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x052F4E06L), 0x052F4E06L), 0x052F4E06L, 0L, 0x052F4E06L, (VECTOR(int32_t, 2))(0L, 0x052F4E06L), (VECTOR(int32_t, 2))(0L, 0x052F4E06L), 0L, 0x052F4E06L, 0L, 0x052F4E06L);
            int64_t l_407 = 0x4612B5FDA639FB57L;
            int16_t l_408 = (-2L);
            int16_t l_409 = 1L;
            VECTOR(int64_t, 2) l_410 = (VECTOR(int64_t, 2))(0x258D9813287D0FBBL, 0x25B6913A91EC1205L);
            int32_t l_411 = (-7L);
            int64_t l_412 = 8L;
            VECTOR(int64_t, 4) l_413 = (VECTOR(int64_t, 4))(0x009A43D97ADD4224L, (VECTOR(int64_t, 2))(0x009A43D97ADD4224L, 0x32AC864EBF70F9A3L), 0x32AC864EBF70F9A3L);
            int16_t l_414 = 0x766DL;
            int32_t l_415 = 0x78C64C08L;
            int8_t l_416 = (-1L);
            uint32_t l_417 = 1UL;
            int i;
            (*l_390) |= ((VECTOR(int32_t, 8))(l_406.s555fdd7a)).s7;
            l_417--;
        }
        l_426[5][0][2] = ((((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 2))(l_420.s30)).xxxyxxxy, ((VECTOR(int64_t, 8))(9L, 1L, 1L, 1L, ((VECTOR(int64_t, 4))(l_421.yxyx))))))).s6 , l_422) , l_423);
        unsigned int result = 0;
        int l_385_i0;
        for (l_385_i0 = 0; l_385_i0 < 9; l_385_i0++) {
            result += l_385[l_385_i0];
        }
        result += l_386.sf;
        result += l_386.se;
        result += l_386.sd;
        result += l_386.sc;
        result += l_386.sb;
        result += l_386.sa;
        result += l_386.s9;
        result += l_386.s8;
        result += l_386.s7;
        result += l_386.s6;
        result += l_386.s5;
        result += l_386.s4;
        result += l_386.s3;
        result += l_386.s2;
        result += l_386.s1;
        result += l_386.s0;
        result += l_387.w;
        result += l_387.z;
        result += l_387.y;
        result += l_387.x;
        result += l_388;
        int l_389_i0;
        for (l_389_i0 = 0; l_389_i0 < 3; l_389_i0++) {
            result += l_389[l_389_i0];
        }
        int l_392_i0, l_392_i1, l_392_i2;
        for (l_392_i0 = 0; l_392_i0 < 6; l_392_i0++) {
            for (l_392_i1 = 0; l_392_i1 < 3; l_392_i1++) {
                for (l_392_i2 = 0; l_392_i2 < 7; l_392_i2++) {
                    result += l_392[l_392_i0][l_392_i1][l_392_i2];
                }
            }
        }
        result += l_420.s7;
        result += l_420.s6;
        result += l_420.s5;
        result += l_420.s4;
        result += l_420.s3;
        result += l_420.s2;
        result += l_420.s1;
        result += l_420.s0;
        result += l_421.y;
        result += l_421.x;
        result += l_422.f0;
        result += l_422.f1;
        result += l_422.f2;
        result += l_422.f3;
        result += l_422.f4;
        result += l_422.f5;
        result += l_422.f6;
        result += l_422.f7;
        result += l_422.f8;
        result += l_422.f9;
        result += l_425;
        atomic_add(&p_907->l_special_values[28], result);
    }
    else
    { /* block id: 172 */
        (1 + 1);
    }
    p_907->g_435 |= (((*l_427) = p_62) != ((*l_431) = func_63(l_429, p_907)));
    (*p_907->g_338) = (*p_907->g_338);
    return (**p_907->g_338);
}


/* ------------------------------------------ */
/* 
 * reads : p_907->g_297 p_907->g_307 p_907->g_308 p_907->g_309 p_907->g_310 p_907->g_312 p_907->g_comm_values p_907->g_288 p_907->g_284 p_907->g_111 p_907->l_comm_values p_907->g_47 p_907->g_289 p_907->g_326 p_907->g_112 p_907->g_331 p_907->g_110 p_907->g_338 p_907->g_348 p_907->g_357 p_907->g_358 p_907->g_2
 * writes: p_907->g_297 p_907->g_288 p_907->g_326 p_907->g_112 p_907->g_348 p_907->g_47
 */
uint16_t * func_63(int32_t  p_64, struct S2 * p_907)
{ /* block id: 124 */
    int32_t *l_290 = &p_907->g_288;
    int32_t *l_291 = &p_907->g_288;
    int32_t *l_292 = &p_907->g_288;
    int32_t *l_293 = &p_907->g_288;
    int32_t *l_294 = &p_907->g_47;
    int32_t *l_295 = &p_907->g_288;
    int32_t *l_296[4] = {&p_907->g_47,&p_907->g_47,&p_907->g_47,&p_907->g_47};
    VECTOR(uint8_t, 16) l_306 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x1CL), 0x1CL), 0x1CL, 1UL, 0x1CL, (VECTOR(uint8_t, 2))(1UL, 0x1CL), (VECTOR(uint8_t, 2))(1UL, 0x1CL), 1UL, 0x1CL, 1UL, 0x1CL);
    VECTOR(uint8_t, 2) l_311 = (VECTOR(uint8_t, 2))(0x16L, 249UL);
    uint8_t *l_353[5][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(uint8_t, 4) l_367 = (VECTOR(uint8_t, 4))(0x1AL, (VECTOR(uint8_t, 2))(0x1AL, 3UL), 3UL);
    int64_t *l_368 = (void*)0;
    uint8_t l_374 = 0xF9L;
    int i, j;
    ++p_907->g_297;
    p_907->g_326 |= (safe_mul_func_uint16_t_u_u(0x4AFCL, ((safe_mod_func_int16_t_s_s((((((VECTOR(int64_t, 2))((-1L), 0x25402FC4A7FC88A0L)).hi | ((((GROUP_DIVERGE(0, 1) ^ (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(l_306.s0d49853b)).s6034672013457137, ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(p_907->g_307.xy)).yyxyxxyxyxxxyxxy, ((VECTOR(uint8_t, 2))(p_907->g_308.s52)).xxxxxxyxxyxxxyxy))), ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(p_907->g_309.zzxy)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_907->g_310.yxyyyxyy)).s44)).yyyyyxyxxxyxyxyy)).sa3b0, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_311.yxxx)).zxzyxwyw)).s00)).xxyy, ((VECTOR(uint8_t, 2))(p_907->g_312.sbe)).yxyx, ((VECTOR(uint8_t, 2))(0x3DL, 0xF1L)).xyxy))).zwxzwzzxzzxwwwww)).se2)).yyxxyyyyyyyxxxxx, (uint8_t)((((((*l_293) = (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(p_907->g_312.sf, ((safe_unary_minus_func_int64_t_s(p_64)) & (safe_mod_func_uint8_t_u_u((((p_64 , (p_907->g_comm_values[p_907->tid] || ((p_907->g_307.y < (((((safe_rshift_func_uint16_t_u_s(((&p_907->g_2 != (p_907->g_288 , l_296[3])) > p_64), 3)) <= p_64) || (*l_293)) , (void*)0) != (void*)0)) <= (*l_292)))) , (void*)0) == (void*)0), p_907->g_284.s1))))) , 0L), 0xB673L)), p_64))) > 0x3A7DBBFAL) ^ p_907->g_111) , FAKE_DIVERGE(p_907->global_1_offset, get_global_id(1), 10)) <= p_907->l_comm_values[(safe_mod_func_uint32_t_u_u(p_907->tid, 8))]), (uint8_t)p_64))).lo)).lo))))))), 0x25L, 7UL, 0x2AL, ((VECTOR(uint8_t, 8))(1UL)), 252UL)).s6dba, ((VECTOR(uint8_t, 4))(246UL))))).xyzyxxxyxyxzywww))).odd, ((VECTOR(uint8_t, 8))(254UL))))).s0154353313741322, ((VECTOR(uint8_t, 16))(9UL))))).sa4, ((VECTOR(uint8_t, 2))(255UL))))).lo, 0x53L))) || 0x59L) | p_64) != (-5L))) | p_64) < (*l_294)), p_907->g_289)) & 0x5ECA1EC5L)));
    for (p_907->g_112 = (-1); (p_907->g_112 > 4); p_907->g_112 = safe_add_func_int64_t_s_s(p_907->g_112, 2))
    { /* block id: 130 */
        uint8_t *l_332 = (void*)0;
        uint8_t *l_333[8][3][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_342 = 0L;
        int16_t *l_347 = &p_907->g_348[0][2];
        int32_t l_354 = 0x37DCF14FL;
        int32_t l_369 = 0x109BE530L;
        int32_t l_370 = 0x5EDEA721L;
        int32_t l_371 = 0x11CC9CBEL;
        int32_t l_372 = (-4L);
        VECTOR(int32_t, 4) l_373 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0663E61FL), 0x0663E61FL);
        int i, j, k;
        (*l_294) = (l_354 |= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_907->g_331.s54)))).lo, (((*l_295) = 9UL) || (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_907->g_110, (p_907->g_338 == ((safe_div_func_uint64_t_u_u(l_342, (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((*l_347) = ((65528UL && p_64) || p_64)), ((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((void*)0 != l_353[2][1]) > 0UL), (*l_291))), p_907->g_310.y)) & (*l_292)))), p_907->g_47)))) , &p_907->g_339)))), FAKE_DIVERGE(p_907->local_1_offset, get_local_id(1), 10)))))));
        p_907->g_47 &= ((*l_295) = (p_907->g_348[5][4] , (safe_mod_func_int32_t_s_s(((p_907->g_357[1] , p_64) || ((VECTOR(uint8_t, 8))(((p_907->g_358 , (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_907->g_2, (((!((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_367.wywxyzww)).hi)).x, p_907->g_348[0][2])), 3)) , ((void*)0 == &l_292))) >= (l_368 == (void*)0)) & p_64))), p_64))) == 1L), 0UL, 1UL, ((VECTOR(uint8_t, 4))(0xC5L)), 0x07L)).s1), (*l_291)))));
        l_374--;
    }
    return &p_907->g_112;
}


/* ------------------------------------------ */
/* 
 * reads : p_907->g_comm_values p_907->g_81 p_907->l_comm_values p_907->g_45 p_907->g_47 p_907->g_112
 * writes: p_907->g_81 p_907->g_45 p_907->g_112 p_907->g_47
 */
uint32_t  func_69(int64_t * p_70, struct S2 * p_907)
{ /* block id: 12 */
    int16_t l_73 = 0x3CD5L;
    VECTOR(uint8_t, 8) l_78 = (VECTOR(uint8_t, 8))(0x41L, (VECTOR(uint8_t, 4))(0x41L, (VECTOR(uint8_t, 2))(0x41L, 0xF2L), 0xF2L), 0xF2L, 0x41L, 0xF2L);
    int64_t *l_80 = (void*)0;
    int64_t **l_79 = &l_80;
    uint16_t *l_85 = &p_907->g_45;
    int32_t l_88 = 6L;
    int32_t l_89 = 1L;
    int32_t *l_90 = &p_907->g_47;
    int32_t l_245 = 0x53324805L;
    VECTOR(uint16_t, 2) l_248 = (VECTOR(uint16_t, 2))(0xBBADL, 1UL);
    VECTOR(uint16_t, 4) l_249 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xEEB2L), 0xEEB2L);
    VECTOR(uint16_t, 4) l_250 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL);
    VECTOR(uint16_t, 8) l_251 = (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0x7214L), 0x7214L), 0x7214L, 65529UL, 0x7214L);
    uint8_t *l_252 = (void*)0;
    uint8_t *l_253 = (void*)0;
    uint8_t *l_254 = (void*)0;
    uint8_t *l_255 = (void*)0;
    uint8_t *l_256 = (void*)0;
    uint8_t *l_257 = (void*)0;
    uint8_t *l_258 = (void*)0;
    uint8_t *l_259 = (void*)0;
    uint8_t *l_260 = (void*)0;
    uint8_t *l_261 = (void*)0;
    uint8_t *l_262 = (void*)0;
    uint8_t *l_263 = (void*)0;
    uint8_t *l_264[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_265[7][7][2] = {{{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L}},{{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L}},{{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L}},{{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L}},{{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L}},{{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L}},{{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L},{(-4L),0x5C055292L}}};
    VECTOR(uint16_t, 16) l_268 = (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0x3F10L), 0x3F10L), 0x3F10L, 2UL, 0x3F10L, (VECTOR(uint16_t, 2))(2UL, 0x3F10L), (VECTOR(uint16_t, 2))(2UL, 0x3F10L), 2UL, 0x3F10L, 2UL, 0x3F10L);
    uint16_t *l_277[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_277[i] = &p_907->g_112;
    if ((p_907->g_comm_values[p_907->tid] == (0x1A38AD7B59016633L == ((safe_rshift_func_int8_t_s_s(l_73, ((((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, (((((VECTOR(uint8_t, 16))(l_78.s4762234615133243)).sa >= l_78.s1) , ((*l_79) = p_70)) != (p_907->g_81 = p_907->g_81)))), (p_907->l_comm_values[(safe_mod_func_uint32_t_u_u(p_907->tid, 8))] , (((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint8_t_u_u(((l_89 = ((l_88 = (++(*l_85))) == 0x2A3EL)) & 4294967293UL), 0x70L)))) , l_88) >= 1UL)))) , (void*)0) != l_90) | (*l_90)))) == (*l_90)))))
    { /* block id: 18 */
        int32_t *l_91 = &l_88;
        int32_t *l_92 = &p_907->g_47;
        int32_t *l_93 = &l_89;
        int32_t *l_94 = &l_89;
        int32_t l_95 = 0L;
        int32_t *l_96 = &l_95;
        int32_t *l_97 = &l_88;
        int32_t l_98[6] = {0x5429592AL,0x175A3989L,0x5429592AL,0x5429592AL,0x175A3989L,0x5429592AL};
        int32_t *l_99 = &l_98[3];
        int32_t *l_100 = &l_89;
        int32_t *l_101 = &l_98[3];
        int32_t *l_102 = &l_98[1];
        int32_t *l_103 = (void*)0;
        int32_t *l_104 = &l_98[3];
        int32_t *l_105 = &l_98[3];
        int32_t *l_106 = &l_89;
        int32_t *l_107 = &l_88;
        int32_t *l_108 = &p_907->g_47;
        int32_t *l_109[10][6];
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 6; j++)
                l_109[i][j] = &l_95;
        }
        p_907->g_112++;
    }
    else
    { /* block id: 20 */
        if ((atomic_inc(&p_907->l_atomic_input[33]) == 5))
        { /* block id: 22 */
            int64_t l_115[5];
            uint8_t l_191 = 8UL;
            int64_t l_192 = 1L;
            int8_t l_242 = 1L;
            uint16_t l_243 = 0xACDCL;
            int32_t l_244 = 1L;
            int i;
            for (i = 0; i < 5; i++)
                l_115[i] = (-2L);
            if ((l_115[3] = 0L))
            { /* block id: 24 */
                VECTOR(int32_t, 2) l_116 = (VECTOR(int32_t, 2))(4L, 0x5F853116L);
                int8_t l_117 = 0x47L;
                int32_t l_118 = 0x5FABB592L;
                uint32_t l_119 = 4294967294UL;
                int i;
                l_117 |= ((VECTOR(int32_t, 8))(l_116.yyxyyxyy)).s3;
                l_119 |= l_118;
            }
            else
            { /* block id: 27 */
                int32_t l_121 = (-6L);
                int32_t *l_120 = &l_121;
                int32_t *l_122 = &l_121;
                uint32_t l_187 = 0xC90B6C89L;
                uint32_t l_188 = 0UL;
                struct S0 l_189 = {-2L,0x197DBADE801AB67EL,0x62F4L,4294967289UL,0x61C58A5ED2547712L,0x2E3814567EDCCD7BL,1L,-7L,0x2E51C5C8L,0x0353L};/* VOLATILE GLOBAL l_189 */
                struct S0 l_190 = {-1L,0x725E6F1A90540248L,-4L,4294967294UL,0xD99D8F9857E4DE94L,0x09D1CEE3CB9E092BL,0x04L,-2L,5L,-10L};/* VOLATILE GLOBAL l_190 */
                l_122 = l_120;
                for (l_121 = 0; (l_121 == (-28)); l_121 = safe_sub_func_uint8_t_u_u(l_121, 6))
                { /* block id: 31 */
                    int8_t l_125 = (-3L);
                    VECTOR(int16_t, 2) l_126 = (VECTOR(int16_t, 2))(0x5ECAL, (-3L));
                    VECTOR(int32_t, 4) l_127 = (VECTOR(int32_t, 4))(0x27A0C98AL, (VECTOR(int32_t, 2))(0x27A0C98AL, (-1L)), (-1L));
                    int16_t l_171 = (-1L);
                    uint32_t l_172 = 4294967288UL;
                    int i;
                    if ((l_127.x = (l_126.x = l_125)))
                    { /* block id: 34 */
                        VECTOR(int16_t, 2) l_128 = (VECTOR(int16_t, 2))((-1L), 7L);
                        VECTOR(int16_t, 2) l_129 = (VECTOR(int16_t, 2))(0x5CF9L, 0L);
                        VECTOR(uint16_t, 2) l_130 = (VECTOR(uint16_t, 2))(0x7237L, 1UL);
                        VECTOR(uint16_t, 16) l_131 = (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 65535UL), 65535UL), 65535UL, 65532UL, 65535UL, (VECTOR(uint16_t, 2))(65532UL, 65535UL), (VECTOR(uint16_t, 2))(65532UL, 65535UL), 65532UL, 65535UL, 65532UL, 65535UL);
                        int32_t l_132 = 1L;
                        VECTOR(uint16_t, 4) l_133 = (VECTOR(uint16_t, 4))(0x26F5L, (VECTOR(uint16_t, 2))(0x26F5L, 0x514AL), 0x514AL);
                        VECTOR(uint16_t, 16) l_134 = (VECTOR(uint16_t, 16))(0x14C2L, (VECTOR(uint16_t, 4))(0x14C2L, (VECTOR(uint16_t, 2))(0x14C2L, 0xFF65L), 0xFF65L), 0xFF65L, 0x14C2L, 0xFF65L, (VECTOR(uint16_t, 2))(0x14C2L, 0xFF65L), (VECTOR(uint16_t, 2))(0x14C2L, 0xFF65L), 0x14C2L, 0xFF65L, 0x14C2L, 0xFF65L);
                        VECTOR(uint16_t, 2) l_135 = (VECTOR(uint16_t, 2))(0UL, 0x1B6DL);
                        int64_t l_136 = 0L;
                        int32_t l_137 = 0x7FA16697L;
                        VECTOR(int16_t, 2) l_138 = (VECTOR(int16_t, 2))(0x77B5L, 5L);
                        VECTOR(uint16_t, 8) l_139 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x5A61L), 0x5A61L), 0x5A61L, 65535UL, 0x5A61L);
                        VECTOR(int32_t, 4) l_140 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-7L)), (-7L));
                        VECTOR(int32_t, 2) l_141 = (VECTOR(int32_t, 2))(0x4CACFD22L, 0L);
                        VECTOR(int32_t, 2) l_142 = (VECTOR(int32_t, 2))(0x3C1B5E43L, 0x2BCDE28AL);
                        VECTOR(int32_t, 8) l_143 = (VECTOR(int32_t, 8))(0x73EC1DECL, (VECTOR(int32_t, 4))(0x73EC1DECL, (VECTOR(int32_t, 2))(0x73EC1DECL, 0x76C6AD03L), 0x76C6AD03L), 0x76C6AD03L, 0x73EC1DECL, 0x76C6AD03L);
                        VECTOR(int32_t, 8) l_144 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L));
                        VECTOR(int32_t, 16) l_145 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x76FE4188L), 0x76FE4188L), 0x76FE4188L, (-1L), 0x76FE4188L, (VECTOR(int32_t, 2))((-1L), 0x76FE4188L), (VECTOR(int32_t, 2))((-1L), 0x76FE4188L), (-1L), 0x76FE4188L, (-1L), 0x76FE4188L);
                        VECTOR(int32_t, 2) l_146 = (VECTOR(int32_t, 2))((-10L), 0x55F7E0F1L);
                        VECTOR(int32_t, 2) l_147 = (VECTOR(int32_t, 2))(0x263D67E1L, 0x396BFC59L);
                        VECTOR(int32_t, 2) l_148 = (VECTOR(int32_t, 2))(1L, 0L);
                        int64_t l_149 = 0x1D7D123A2376BBF8L;
                        int32_t l_150 = 5L;
                        int32_t l_151 = 9L;
                        VECTOR(int32_t, 2) l_152 = (VECTOR(int32_t, 2))(0x7D6ECED9L, 1L);
                        uint64_t l_153 = 0x32723F93586B99F0L;
                        uint8_t l_154 = 0x57L;
                        int8_t l_155[10] = {0x7BL,0x3EL,0x7BL,0x7BL,0x3EL,0x7BL,0x7BL,0x3EL,0x7BL,0x7BL};
                        uint16_t l_156 = 1UL;
                        int32_t *l_157 = &l_132;
                        int32_t **l_158 = (void*)0;
                        int32_t **l_159[7] = {&l_157,(void*)0,&l_157,&l_157,(void*)0,&l_157,&l_157};
                        uint32_t l_160 = 4294967291UL;
                        int64_t l_161[10] = {0x1388203293BDCD76L,0x1388203293BDCD76L,0x1388203293BDCD76L,0x1388203293BDCD76L,0x1388203293BDCD76L,0x1388203293BDCD76L,0x1388203293BDCD76L,0x1388203293BDCD76L,0x1388203293BDCD76L,0x1388203293BDCD76L};
                        int i;
                        l_120 = (((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(l_128.xyyx)).even, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_129.xxyxxyxyxxyyxyxy)).s84c7)).even))).xxxyyxxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x1BEEL, (-1L), 0L, 0x49ECL)))).zyyzywwy))).even)), 1L, (-7L), (-8L))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_130.yyxy)), ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_131.scc)), 0xB821L, 0xF58FL)).odd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(2UL, 0UL)), 5UL, 1UL)).odd))), 0xAFFFL, 0xB9E1L)).s3, (l_132 |= 0xFD08L), 1UL, 9UL)), ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(l_133.wyxzwywxwzwwyxwy)).sfa, ((VECTOR(uint16_t, 2))(0xAF26L, 0UL)), ((VECTOR(uint16_t, 2))(l_134.se9))))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_135.xxxy)), (l_136 , l_137), 5UL, 4UL, 0xF927L)).s26))), 2UL, 1UL))))).s37, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_138.xxyx)).wwzwzzxw, ((VECTOR(uint16_t, 4))(l_139.s5411)).yyzzxyxw))).s04))).xxxx, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(l_140.zyzwywwx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_141.xyyyxyyxxyyyyxxx)))).odd))).s1574544552664744, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))((-8L), 0x673AB669L)), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(l_142.xxxyyxxxxxxxyyxy)).s0622, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_143.s70)).yxyy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_144.s7225422551332303)).s5d)).xxxxyyxx)))).s2517017456262003, ((VECTOR(int32_t, 16))(l_145.s0d0cb5f59df16ffc))))).hi)).hi))).zzxwxyxxxxxzzzxz, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(l_146.yxxx)).yxxywwywwwyxxxyz, ((VECTOR(int32_t, 8))(l_147.xxyxyyyy)).s7552352561334171, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_148.xx)).xyxyxyxxxyxyxxyx)).lo))))).odd)), (GROUP_DIVERGE(2, 1) , ((l_150 = l_149) , l_151)), (-6L), (-1L), 0x011774B4L)).s1123705354535223))).hi, ((VECTOR(int32_t, 16))(l_152.xxxyyxyxxyyyxyxx)).lo))).s0425532574511346))).scb))), (int32_t)l_153))), 0x5DAE6AD3L, 0x35FAD433L)).xzxzwzyx)).s73)).yxyy)))))).even))).xyyyyyyxxxxxxxxy, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0x7769B8DEL, 0x0E318C20L)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(0x09C62979L, (-1L))).yyxxyyxyyxxxyyxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_154, (GROUP_DIVERGE(1, 1) , l_155[1]), 0x68E3A146L, 0x0411C86BL)).zwyxwxwx)).s74, ((VECTOR(int32_t, 2))((-4L)))))).xyxyyyyx, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(4L))))).s44)))).xyxxyyyxxxyxxyyy))).even, ((VECTOR(int32_t, 8))(1L))))).s40, ((VECTOR(int32_t, 2))(0x0B4B1B45L)))))))).xyxx, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0L))))).ywwxxywzzwwzyyxz))).se42e))).wyzxxywxywwxwzwy, (int32_t)l_156))).s2d5c)).lo)), ((VECTOR(int32_t, 2))((-1L)))))).xxyyyxyxxyxyxxxy, ((VECTOR(int32_t, 16))(0x35BA5489L))))).s8 , l_157);
                        (*l_120) = (-1L);
                        l_159[5] = (l_158 = l_158);
                        (*l_120) ^= ((l_160 , 0x61L) , l_161[4]);
                    }
                    else
                    { /* block id: 42 */
                        int32_t *l_162 = (void*)0;
                        uint16_t l_163 = 0xA2C9L;
                        int16_t l_164 = 0L;
                        int32_t *l_165 = (void*)0;
                        struct S0 l_166 = {0L,3L,6L,0xBF858BC3L,0x6D6FF152E6D4CF9DL,0x40AA69C249DFCDADL,-5L,1L,0x74B77E74L,-1L};/* VOLATILE GLOBAL l_166 */
                        union U1 l_168 = {-10L};/* VOLATILE GLOBAL l_168 */
                        union U1 *l_167 = &l_168;
                        union U1 *l_169[2][10][10] = {{{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168}},{{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168}}};
                        union U1 *l_170[8] = {&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168};
                        int i, j, k;
                        l_120 = (FAKE_DIVERGE(p_907->local_0_offset, get_local_id(0), 10) , (l_122 = l_162));
                        l_164 = l_163;
                        l_162 = l_165;
                        l_170[0] = (l_166 , (l_169[1][9][7] = l_167));
                    }
                    l_171 &= 0x655C08ECL;
                    l_172--;
                }
                for (l_121 = 0; (l_121 <= 17); l_121 = safe_add_func_uint16_t_u_u(l_121, 1))
                { /* block id: 55 */
                    int16_t l_177 = 1L;
                    VECTOR(int32_t, 4) l_178 = (VECTOR(int32_t, 4))(0x410CCC69L, (VECTOR(int32_t, 2))(0x410CCC69L, 0x1A43CC30L), 0x1A43CC30L);
                    VECTOR(int32_t, 4) l_179 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-5L)), (-5L));
                    union U1 l_180 = {-2L};/* VOLATILE GLOBAL l_180 */
                    int32_t *l_181 = (void*)0;
                    int i;
                    l_120 = ((l_177 = 0x19302300L) , ((((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_178.zw)))), ((VECTOR(int32_t, 8))(0x26307D7EL, 3L, 0x025CEF9BL, ((VECTOR(int32_t, 2))((-4L), 0x39E9AA08L)), 0x20AD96D9L, 1L, 0x07A2B99AL)).s53, ((VECTOR(int32_t, 4))(l_179.xzxy)).lo))).odd , l_180) , l_181));
                    for (l_179.w = (-26); (l_179.w != 26); l_179.w = safe_add_func_int16_t_s_s(l_179.w, 5))
                    { /* block id: 60 */
                        int32_t l_185 = 0x5E08B522L;
                        int32_t *l_184 = &l_185;
                        int32_t *l_186[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_186[i] = &l_185;
                        l_122 = (l_181 = l_184);
                        l_181 = l_186[8];
                        (*l_122) = 5L;
                    }
                }
                l_190 = (l_187 , (l_188 , l_189));
            }
            if ((l_192 &= l_191))
            { /* block id: 70 */
                uint16_t l_193 = 0xEB1FL;
                VECTOR(int32_t, 16) l_205 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L, (VECTOR(int32_t, 2))((-9L), 1L), (VECTOR(int32_t, 2))((-9L), 1L), (-9L), 1L, (-9L), 1L);
                uint32_t l_216 = 0x3EF6D6D9L;
                int32_t l_217 = 1L;
                uint32_t l_218 = 7UL;
                VECTOR(int32_t, 2) l_219 = (VECTOR(int32_t, 2))(0x7B0C5DD6L, (-1L));
                union U1 l_221[8][10] = {{{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L}},{{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L}},{{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L}},{{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L}},{{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L}},{{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L}},{{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L}},{{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L}}};
                union U1 *l_220 = &l_221[1][0];
                union U1 *l_222[9][5] = {{&l_221[1][0],(void*)0,&l_221[3][2],&l_221[1][0],&l_221[3][2]},{&l_221[1][0],(void*)0,&l_221[3][2],&l_221[1][0],&l_221[3][2]},{&l_221[1][0],(void*)0,&l_221[3][2],&l_221[1][0],&l_221[3][2]},{&l_221[1][0],(void*)0,&l_221[3][2],&l_221[1][0],&l_221[3][2]},{&l_221[1][0],(void*)0,&l_221[3][2],&l_221[1][0],&l_221[3][2]},{&l_221[1][0],(void*)0,&l_221[3][2],&l_221[1][0],&l_221[3][2]},{&l_221[1][0],(void*)0,&l_221[3][2],&l_221[1][0],&l_221[3][2]},{&l_221[1][0],(void*)0,&l_221[3][2],&l_221[1][0],&l_221[3][2]},{&l_221[1][0],(void*)0,&l_221[3][2],&l_221[1][0],&l_221[3][2]}};
                union U1 *l_223[2][10] = {{&l_221[1][0],(void*)0,&l_221[6][4],(void*)0,&l_221[1][0],&l_221[1][0],(void*)0,&l_221[6][4],(void*)0,&l_221[1][0]},{&l_221[1][0],(void*)0,&l_221[6][4],(void*)0,&l_221[1][0],&l_221[1][0],(void*)0,&l_221[6][4],(void*)0,&l_221[1][0]}};
                int i, j;
                if (l_193)
                { /* block id: 71 */
                    int32_t l_194 = 0x470B449BL;
                    int64_t l_195 = (-1L);
                    int32_t l_196[5][3] = {{3L,3L,3L},{3L,3L,3L},{3L,3L,3L},{3L,3L,3L},{3L,3L,3L}};
                    int8_t l_197 = (-1L);
                    int32_t l_198[3];
                    uint32_t l_199[2];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_198[i] = (-1L);
                    for (i = 0; i < 2; i++)
                        l_199[i] = 0x3A84F11EL;
                    l_199[0]++;
                }
                else
                { /* block id: 73 */
                    uint8_t l_202 = 246UL;
                    ++l_202;
                }
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_205.s80)), 0x6144A9CEL, 0L)).w)
                { /* block id: 76 */
                    VECTOR(uint32_t, 16) l_206 = (VECTOR(uint32_t, 16))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0UL), 0UL), 0UL, 4294967289UL, 0UL, (VECTOR(uint32_t, 2))(4294967289UL, 0UL), (VECTOR(uint32_t, 2))(4294967289UL, 0UL), 4294967289UL, 0UL, 4294967289UL, 0UL);
                    int32_t *l_207 = (void*)0;
                    int32_t l_209[8][3][3] = {{{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L}},{{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L}},{{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L}},{{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L}},{{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L}},{{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L}},{{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L}},{{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L},{0x382DB4B4L,(-1L),0x2EC5B225L}}};
                    int32_t *l_208 = &l_209[1][0][2];
                    int i, j, k;
                    l_208 = (l_207 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_206.s1a80)).hi)).odd , (void*)0));
                }
                else
                { /* block id: 79 */
                    int32_t l_210 = (-1L);
                    int32_t l_211 = 0x2812206AL;
                    uint32_t l_212 = 1UL;
                    uint8_t l_215[9][9];
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_215[i][j] = 0xB4L;
                    }
                    l_205.s4 ^= 0x3419A3F2L;
                    l_212--;
                    l_215[2][4] &= (l_205.s1 = 0x027D3682L);
                }
                l_218 = (l_217 = (l_216 |= 0x4A489D5AL));
                l_223[0][1] = (l_222[3][3] = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_219.yyxyyyyyxxxxxxxx)))).s9 , l_220));
            }
            else
            { /* block id: 90 */
                int32_t l_224 = 0x55F5AD00L;
                int32_t l_230 = 0x6D3EB0ACL;
                int32_t *l_231[7] = {&l_224,&l_224,&l_224,&l_224,&l_224,&l_224,&l_224};
                int32_t *l_232 = (void*)0;
                uint32_t l_233 = 8UL;
                int i;
                for (l_224 = 0; (l_224 != 18); l_224 = safe_add_func_uint8_t_u_u(l_224, 9))
                { /* block id: 93 */
                    VECTOR(int32_t, 16) l_227 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x086110FCL), 0x086110FCL), 0x086110FCL, 1L, 0x086110FCL, (VECTOR(int32_t, 2))(1L, 0x086110FCL), (VECTOR(int32_t, 2))(1L, 0x086110FCL), 1L, 0x086110FCL, 1L, 0x086110FCL);
                    uint16_t l_228 = 0x2ECCL;
                    int16_t l_229 = 0x3D49L;
                    int i;
                    l_229 |= (l_228 = ((VECTOR(int32_t, 2))(l_227.s68)).even);
                }
                l_232 = (l_230 , l_231[6]);
                if (l_233)
                { /* block id: 98 */
                    int32_t l_234 = (-10L);
                    l_234 = l_234;
                }
                else
                { /* block id: 100 */
                    int32_t l_235 = (-9L);
                    int32_t l_241 = (-3L);
                    for (l_235 = 0; (l_235 == (-6)); l_235--)
                    { /* block id: 103 */
                        uint64_t l_238 = 0x300E0F48A35905E2L;
                        int32_t l_239 = 0x220A0EFFL;
                        uint64_t l_240[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_240[i] = 0x27DA15CDC3111986L;
                        l_240[0] = (l_239 &= l_238);
                    }
                    l_235 &= l_241;
                }
            }
            l_244 = (l_242 , l_243);
            unsigned int result = 0;
            int l_115_i0;
            for (l_115_i0 = 0; l_115_i0 < 5; l_115_i0++) {
                result += l_115[l_115_i0];
            }
            result += l_191;
            result += l_192;
            result += l_242;
            result += l_243;
            result += l_244;
            atomic_add(&p_907->l_special_values[33], result);
        }
        else
        { /* block id: 111 */
            (1 + 1);
        }
    }
    (*l_90) = (((((GROUP_DIVERGE(2, 1) >= l_245) || (*l_90)) != GROUP_DIVERGE(1, 1)) == (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(l_248.yy)), 65529UL)).hi, ((VECTOR(uint16_t, 2))(l_249.yx))))).yxyxxyyx)))), ((VECTOR(uint16_t, 2))(l_250.yw)).xyyxyyyx))).s25, ((VECTOR(uint16_t, 2))(l_251.s10))))).yyyxyyyyyxxyyyxx)).s5, (((4L & (l_88 = (l_265[5][2][0] = ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(6UL, 248UL)).yxxxxxyx)).s3))) >= ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(0xEBB7L, 0xB02EL, 65529UL, 1UL)).hi, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))((safe_mod_func_uint64_t_u_u((*l_90), 0x26327A7D234CDEC3L)), ((VECTOR(uint16_t, 2))(1UL, 0x5A6FL)), 0UL)).ywwwyxywxzzzzwxw)).sb3))).yxxy, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(0UL, ((VECTOR(uint16_t, 8))(l_268.s9be10ebc)), (*l_90), (safe_mod_func_uint64_t_u_u((+p_907->g_47), (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((*l_85) = (*l_90)), (p_907->g_112++))), 2L)), (*l_90))))), ((VECTOR(uint16_t, 4))(0x4209L)), 7UL)).sda, ((VECTOR(uint16_t, 2))(5UL))))).xyyx))), ((VECTOR(uint32_t, 4))(0x503A674EL)))).s27)).hi) == (*l_90)), 0x3710L, 0x986CL, FAKE_DIVERGE(p_907->group_0_offset, get_group_id(0), 10), 65535UL, 65535UL, 3UL)).s6, 7))) < (*l_90));
    return (*l_90);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_comm_values[i] = 1;
    struct S2 c_908;
    struct S2* p_907 = &c_908;
    struct S2 c_909 = {
        (-6L), // p_907->g_2
        (VECTOR(int8_t, 8))(0x06L, (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, (-1L)), (-1L)), (-1L), 0x06L, (-1L)), // p_907->g_32
        1UL, // p_907->g_37
        0UL, // p_907->g_45
        (-4L), // p_907->g_47
        0x5FD6F6066FA41D40L, // p_907->g_58
        (void*)0, // p_907->g_81
        0x51L, // p_907->g_110
        0x280D01B1L, // p_907->g_111
        0UL, // p_907->g_112
        (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 5UL), 5UL), 5UL, 5UL, 5UL), // p_907->g_284
        1L, // p_907->g_288
        0x20FBC93F125DDA3EL, // p_907->g_289
        0xA9L, // p_907->g_297
        (VECTOR(uint8_t, 2))(1UL, 0x20L), // p_907->g_307
        (VECTOR(uint8_t, 8))(0x9EL, (VECTOR(uint8_t, 4))(0x9EL, (VECTOR(uint8_t, 2))(0x9EL, 255UL), 255UL), 255UL, 0x9EL, 255UL), // p_907->g_308
        (VECTOR(uint8_t, 4))(0x3BL, (VECTOR(uint8_t, 2))(0x3BL, 0x59L), 0x59L), // p_907->g_309
        (VECTOR(uint8_t, 2))(1UL, 1UL), // p_907->g_310
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL), // p_907->g_312
        0x7408F1F4155962D4L, // p_907->g_326
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x6700L), 0x6700L), 0x6700L, 65535UL, 0x6700L), // p_907->g_331
        &p_907->g_288, // p_907->g_339
        &p_907->g_339, // p_907->g_338
        {{(-10L),5L,5L,(-10L),0x3A46L,0L},{(-10L),5L,5L,(-10L),0x3A46L,0L},{(-10L),5L,5L,(-10L),0x3A46L,0L},{(-10L),5L,5L,(-10L),0x3A46L,0L},{(-10L),5L,5L,(-10L),0x3A46L,0L},{(-10L),5L,5L,(-10L),0x3A46L,0L},{(-10L),5L,5L,(-10L),0x3A46L,0L},{(-10L),5L,5L,(-10L),0x3A46L,0L},{(-10L),5L,5L,(-10L),0x3A46L,0L}}, // p_907->g_348
        {{0x7EBB4FB39624D617L},{0x7EBB4FB39624D617L}}, // p_907->g_357
        {1L}, // p_907->g_358
        (void*)0, // p_907->g_377
        0xC6L, // p_907->g_435
        (VECTOR(int8_t, 16))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 1L), 1L), 1L, (-6L), 1L, (VECTOR(int8_t, 2))((-6L), 1L), (VECTOR(int8_t, 2))((-6L), 1L), (-6L), 1L, (-6L), 1L), // p_907->g_450
        {0x4EF7C6C4L,0x3A6D93444D775665L,-10L,0UL,0x78519C44ADFC325CL,0x69B76ED0D1A3F0EEL,-5L,0x4D04E3F198DC54B8L,4L,0x2511L}, // p_907->g_458
        (VECTOR(int8_t, 2))(5L, 0x2EL), // p_907->g_476
        0x7E5FL, // p_907->g_518
        (-4L), // p_907->g_520
        0x28D634DAL, // p_907->g_522
        (VECTOR(uint32_t, 4))(0x21FC1A6AL, (VECTOR(uint32_t, 2))(0x21FC1A6AL, 9UL), 9UL), // p_907->g_530
        (VECTOR(uint32_t, 16))(0xF030724DL, (VECTOR(uint32_t, 4))(0xF030724DL, (VECTOR(uint32_t, 2))(0xF030724DL, 0xB82C3DC3L), 0xB82C3DC3L), 0xB82C3DC3L, 0xF030724DL, 0xB82C3DC3L, (VECTOR(uint32_t, 2))(0xF030724DL, 0xB82C3DC3L), (VECTOR(uint32_t, 2))(0xF030724DL, 0xB82C3DC3L), 0xF030724DL, 0xB82C3DC3L, 0xF030724DL, 0xB82C3DC3L), // p_907->g_531
        (VECTOR(int32_t, 8))(0x3B82871BL, (VECTOR(int32_t, 4))(0x3B82871BL, (VECTOR(int32_t, 2))(0x3B82871BL, (-1L)), (-1L)), (-1L), 0x3B82871BL, (-1L)), // p_907->g_540
        {{7L,0x0121FA8FCEA98807L,0x6E71L,0xEB8A9E4FL,3UL,-1L,0x73L,1L,0x57F7777CL,0x7FA9L},{7L,0x0121FA8FCEA98807L,0x6E71L,0xEB8A9E4FL,3UL,-1L,0x73L,1L,0x57F7777CL,0x7FA9L},{7L,0x0121FA8FCEA98807L,0x6E71L,0xEB8A9E4FL,3UL,-1L,0x73L,1L,0x57F7777CL,0x7FA9L},{7L,0x0121FA8FCEA98807L,0x6E71L,0xEB8A9E4FL,3UL,-1L,0x73L,1L,0x57F7777CL,0x7FA9L},{7L,0x0121FA8FCEA98807L,0x6E71L,0xEB8A9E4FL,3UL,-1L,0x73L,1L,0x57F7777CL,0x7FA9L},{7L,0x0121FA8FCEA98807L,0x6E71L,0xEB8A9E4FL,3UL,-1L,0x73L,1L,0x57F7777CL,0x7FA9L},{7L,0x0121FA8FCEA98807L,0x6E71L,0xEB8A9E4FL,3UL,-1L,0x73L,1L,0x57F7777CL,0x7FA9L},{7L,0x0121FA8FCEA98807L,0x6E71L,0xEB8A9E4FL,3UL,-1L,0x73L,1L,0x57F7777CL,0x7FA9L}}, // p_907->g_553
        {0x2DDFEFD5L,0x038420F5F5903FBCL,0x25FAL,4294967292UL,0x753C6C0C50F60C26L,0x48082701C5C3E78AL,0x05L,0x0A8AB3332F248B4DL,5L,-1L}, // p_907->g_591
        {{(void*)0,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591,&p_907->g_591,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591},{(void*)0,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591,&p_907->g_591,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591},{(void*)0,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591,&p_907->g_591,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591},{(void*)0,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591,&p_907->g_591,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591},{(void*)0,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591,&p_907->g_591,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591},{(void*)0,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591,&p_907->g_591,&p_907->g_591,&p_907->g_591,(void*)0,&p_907->g_591}}, // p_907->g_590
        (VECTOR(int32_t, 2))(0L, 6L), // p_907->g_612
        (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0x5078D5E4L), 0x5078D5E4L), // p_907->g_613
        0x090B81A59A6E03E0L, // p_907->g_622
        {0x16156A77E4A875ADL}, // p_907->g_627
        {0x280BA2E8L,-1L,0x6188L,9UL,18446744073709551615UL,0x55B65C82E099DC29L,0x2FL,1L,-10L,0L}, // p_907->g_635
        (VECTOR(uint16_t, 2))(0xD892L, 0x89D9L), // p_907->g_649
        0x7F9FFC0CL, // p_907->g_678
        (-4L), // p_907->g_679
        {0xEAA8E62DL,0xEAA8E62DL,0xEAA8E62DL}, // p_907->g_680
        18446744073709551608UL, // p_907->g_688
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1AF1EAC1FE5B1585L), 0x1AF1EAC1FE5B1585L), 0x1AF1EAC1FE5B1585L, 1L, 0x1AF1EAC1FE5B1585L, (VECTOR(int64_t, 2))(1L, 0x1AF1EAC1FE5B1585L), (VECTOR(int64_t, 2))(1L, 0x1AF1EAC1FE5B1585L), 1L, 0x1AF1EAC1FE5B1585L, 1L, 0x1AF1EAC1FE5B1585L), // p_907->g_703
        (void*)0, // p_907->g_726
        &p_907->g_726, // p_907->g_725
        &p_907->g_726, // p_907->g_727
        (void*)0, // p_907->g_733
        {&p_907->g_733,(void*)0,&p_907->g_733,&p_907->g_733,(void*)0,&p_907->g_733,&p_907->g_733,(void*)0,&p_907->g_733}, // p_907->g_732
        {0x43DAA0E1L,1L,-6L,0xC9112CB6L,6UL,0L,0x65L,8L,0x1AAAA609L,0x0B98L}, // p_907->g_762
        0xAEBF5E1C0D7F83C9L, // p_907->g_766
        0x6F80L, // p_907->g_780
        {-8L,-1L,0x0012L,0xAD21EC13L,0UL,0L,-1L,0x160337E97CCE68B3L,0x4A673841L,0x08E1L}, // p_907->g_783
        {{{0x478EC412L,0x5968027E1980D023L,1L,1UL,0x986199729D75D3D8L,0L,-1L,0x5E7C7BA8E910F3E6L,0x2540E062L,3L}},{{0x478EC412L,0x5968027E1980D023L,1L,1UL,0x986199729D75D3D8L,0L,-1L,0x5E7C7BA8E910F3E6L,0x2540E062L,3L}},{{0x478EC412L,0x5968027E1980D023L,1L,1UL,0x986199729D75D3D8L,0L,-1L,0x5E7C7BA8E910F3E6L,0x2540E062L,3L}},{{0x478EC412L,0x5968027E1980D023L,1L,1UL,0x986199729D75D3D8L,0L,-1L,0x5E7C7BA8E910F3E6L,0x2540E062L,3L}},{{0x478EC412L,0x5968027E1980D023L,1L,1UL,0x986199729D75D3D8L,0L,-1L,0x5E7C7BA8E910F3E6L,0x2540E062L,3L}}}, // p_907->g_787
        &p_907->g_678, // p_907->g_788
        {0x13306F64L,0x13775CA28D8CC6C0L,0x3943L,4UL,0x87063017095902B5L,5L,-1L,1L,-1L,0x1C2EL}, // p_907->g_825
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 2L), 2L), 2L, 0L, 2L, (VECTOR(int64_t, 2))(0L, 2L), (VECTOR(int64_t, 2))(0L, 2L), 0L, 2L, 0L, 2L), // p_907->g_848
        {9L}, // p_907->g_851
        (void*)0, // p_907->g_852
        {{-7L,-1L,0x2176L,0UL,5UL,1L,1L,4L,0x5458F1DCL,-10L},{-7L,-1L,0x2176L,0UL,5UL,1L,1L,4L,0x5458F1DCL,-10L},{-7L,-1L,0x2176L,0UL,5UL,1L,1L,4L,0x5458F1DCL,-10L}}, // p_907->g_868
        {&p_907->g_2}, // p_907->g_892
        (void*)0, // p_907->g_893
        {&p_907->g_591.f0,&p_907->g_591.f0}, // p_907->g_894
        0x3508FEB6L, // p_907->g_903
        0, // p_907->v_collective
        sequence_input[get_global_id(0)], // p_907->global_0_offset
        sequence_input[get_global_id(1)], // p_907->global_1_offset
        sequence_input[get_global_id(2)], // p_907->global_2_offset
        sequence_input[get_local_id(0)], // p_907->local_0_offset
        sequence_input[get_local_id(1)], // p_907->local_1_offset
        sequence_input[get_local_id(2)], // p_907->local_2_offset
        sequence_input[get_group_id(0)], // p_907->group_0_offset
        sequence_input[get_group_id(1)], // p_907->group_1_offset
        sequence_input[get_group_id(2)], // p_907->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 8)), permutations[0][get_linear_local_id()])), // p_907->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_908 = c_909;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_907);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_907->g_2, "p_907->g_2", print_hash_value);
    transparent_crc(p_907->g_32.s0, "p_907->g_32.s0", print_hash_value);
    transparent_crc(p_907->g_32.s1, "p_907->g_32.s1", print_hash_value);
    transparent_crc(p_907->g_32.s2, "p_907->g_32.s2", print_hash_value);
    transparent_crc(p_907->g_32.s3, "p_907->g_32.s3", print_hash_value);
    transparent_crc(p_907->g_32.s4, "p_907->g_32.s4", print_hash_value);
    transparent_crc(p_907->g_32.s5, "p_907->g_32.s5", print_hash_value);
    transparent_crc(p_907->g_32.s6, "p_907->g_32.s6", print_hash_value);
    transparent_crc(p_907->g_32.s7, "p_907->g_32.s7", print_hash_value);
    transparent_crc(p_907->g_37, "p_907->g_37", print_hash_value);
    transparent_crc(p_907->g_45, "p_907->g_45", print_hash_value);
    transparent_crc(p_907->g_47, "p_907->g_47", print_hash_value);
    transparent_crc(p_907->g_58, "p_907->g_58", print_hash_value);
    transparent_crc(p_907->g_110, "p_907->g_110", print_hash_value);
    transparent_crc(p_907->g_111, "p_907->g_111", print_hash_value);
    transparent_crc(p_907->g_112, "p_907->g_112", print_hash_value);
    transparent_crc(p_907->g_284.s0, "p_907->g_284.s0", print_hash_value);
    transparent_crc(p_907->g_284.s1, "p_907->g_284.s1", print_hash_value);
    transparent_crc(p_907->g_284.s2, "p_907->g_284.s2", print_hash_value);
    transparent_crc(p_907->g_284.s3, "p_907->g_284.s3", print_hash_value);
    transparent_crc(p_907->g_284.s4, "p_907->g_284.s4", print_hash_value);
    transparent_crc(p_907->g_284.s5, "p_907->g_284.s5", print_hash_value);
    transparent_crc(p_907->g_284.s6, "p_907->g_284.s6", print_hash_value);
    transparent_crc(p_907->g_284.s7, "p_907->g_284.s7", print_hash_value);
    transparent_crc(p_907->g_288, "p_907->g_288", print_hash_value);
    transparent_crc(p_907->g_289, "p_907->g_289", print_hash_value);
    transparent_crc(p_907->g_297, "p_907->g_297", print_hash_value);
    transparent_crc(p_907->g_307.x, "p_907->g_307.x", print_hash_value);
    transparent_crc(p_907->g_307.y, "p_907->g_307.y", print_hash_value);
    transparent_crc(p_907->g_308.s0, "p_907->g_308.s0", print_hash_value);
    transparent_crc(p_907->g_308.s1, "p_907->g_308.s1", print_hash_value);
    transparent_crc(p_907->g_308.s2, "p_907->g_308.s2", print_hash_value);
    transparent_crc(p_907->g_308.s3, "p_907->g_308.s3", print_hash_value);
    transparent_crc(p_907->g_308.s4, "p_907->g_308.s4", print_hash_value);
    transparent_crc(p_907->g_308.s5, "p_907->g_308.s5", print_hash_value);
    transparent_crc(p_907->g_308.s6, "p_907->g_308.s6", print_hash_value);
    transparent_crc(p_907->g_308.s7, "p_907->g_308.s7", print_hash_value);
    transparent_crc(p_907->g_309.x, "p_907->g_309.x", print_hash_value);
    transparent_crc(p_907->g_309.y, "p_907->g_309.y", print_hash_value);
    transparent_crc(p_907->g_309.z, "p_907->g_309.z", print_hash_value);
    transparent_crc(p_907->g_309.w, "p_907->g_309.w", print_hash_value);
    transparent_crc(p_907->g_310.x, "p_907->g_310.x", print_hash_value);
    transparent_crc(p_907->g_310.y, "p_907->g_310.y", print_hash_value);
    transparent_crc(p_907->g_312.s0, "p_907->g_312.s0", print_hash_value);
    transparent_crc(p_907->g_312.s1, "p_907->g_312.s1", print_hash_value);
    transparent_crc(p_907->g_312.s2, "p_907->g_312.s2", print_hash_value);
    transparent_crc(p_907->g_312.s3, "p_907->g_312.s3", print_hash_value);
    transparent_crc(p_907->g_312.s4, "p_907->g_312.s4", print_hash_value);
    transparent_crc(p_907->g_312.s5, "p_907->g_312.s5", print_hash_value);
    transparent_crc(p_907->g_312.s6, "p_907->g_312.s6", print_hash_value);
    transparent_crc(p_907->g_312.s7, "p_907->g_312.s7", print_hash_value);
    transparent_crc(p_907->g_312.s8, "p_907->g_312.s8", print_hash_value);
    transparent_crc(p_907->g_312.s9, "p_907->g_312.s9", print_hash_value);
    transparent_crc(p_907->g_312.sa, "p_907->g_312.sa", print_hash_value);
    transparent_crc(p_907->g_312.sb, "p_907->g_312.sb", print_hash_value);
    transparent_crc(p_907->g_312.sc, "p_907->g_312.sc", print_hash_value);
    transparent_crc(p_907->g_312.sd, "p_907->g_312.sd", print_hash_value);
    transparent_crc(p_907->g_312.se, "p_907->g_312.se", print_hash_value);
    transparent_crc(p_907->g_312.sf, "p_907->g_312.sf", print_hash_value);
    transparent_crc(p_907->g_326, "p_907->g_326", print_hash_value);
    transparent_crc(p_907->g_331.s0, "p_907->g_331.s0", print_hash_value);
    transparent_crc(p_907->g_331.s1, "p_907->g_331.s1", print_hash_value);
    transparent_crc(p_907->g_331.s2, "p_907->g_331.s2", print_hash_value);
    transparent_crc(p_907->g_331.s3, "p_907->g_331.s3", print_hash_value);
    transparent_crc(p_907->g_331.s4, "p_907->g_331.s4", print_hash_value);
    transparent_crc(p_907->g_331.s5, "p_907->g_331.s5", print_hash_value);
    transparent_crc(p_907->g_331.s6, "p_907->g_331.s6", print_hash_value);
    transparent_crc(p_907->g_331.s7, "p_907->g_331.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_907->g_348[i][j], "p_907->g_348[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_907->g_357[i].f0, "p_907->g_357[i].f0", print_hash_value);

    }
    transparent_crc(p_907->g_435, "p_907->g_435", print_hash_value);
    transparent_crc(p_907->g_450.s0, "p_907->g_450.s0", print_hash_value);
    transparent_crc(p_907->g_450.s1, "p_907->g_450.s1", print_hash_value);
    transparent_crc(p_907->g_450.s2, "p_907->g_450.s2", print_hash_value);
    transparent_crc(p_907->g_450.s3, "p_907->g_450.s3", print_hash_value);
    transparent_crc(p_907->g_450.s4, "p_907->g_450.s4", print_hash_value);
    transparent_crc(p_907->g_450.s5, "p_907->g_450.s5", print_hash_value);
    transparent_crc(p_907->g_450.s6, "p_907->g_450.s6", print_hash_value);
    transparent_crc(p_907->g_450.s7, "p_907->g_450.s7", print_hash_value);
    transparent_crc(p_907->g_450.s8, "p_907->g_450.s8", print_hash_value);
    transparent_crc(p_907->g_450.s9, "p_907->g_450.s9", print_hash_value);
    transparent_crc(p_907->g_450.sa, "p_907->g_450.sa", print_hash_value);
    transparent_crc(p_907->g_450.sb, "p_907->g_450.sb", print_hash_value);
    transparent_crc(p_907->g_450.sc, "p_907->g_450.sc", print_hash_value);
    transparent_crc(p_907->g_450.sd, "p_907->g_450.sd", print_hash_value);
    transparent_crc(p_907->g_450.se, "p_907->g_450.se", print_hash_value);
    transparent_crc(p_907->g_450.sf, "p_907->g_450.sf", print_hash_value);
    transparent_crc(p_907->g_458.f0, "p_907->g_458.f0", print_hash_value);
    transparent_crc(p_907->g_458.f1, "p_907->g_458.f1", print_hash_value);
    transparent_crc(p_907->g_458.f2, "p_907->g_458.f2", print_hash_value);
    transparent_crc(p_907->g_458.f3, "p_907->g_458.f3", print_hash_value);
    transparent_crc(p_907->g_458.f4, "p_907->g_458.f4", print_hash_value);
    transparent_crc(p_907->g_458.f5, "p_907->g_458.f5", print_hash_value);
    transparent_crc(p_907->g_458.f6, "p_907->g_458.f6", print_hash_value);
    transparent_crc(p_907->g_458.f7, "p_907->g_458.f7", print_hash_value);
    transparent_crc(p_907->g_458.f8, "p_907->g_458.f8", print_hash_value);
    transparent_crc(p_907->g_458.f9, "p_907->g_458.f9", print_hash_value);
    transparent_crc(p_907->g_476.x, "p_907->g_476.x", print_hash_value);
    transparent_crc(p_907->g_476.y, "p_907->g_476.y", print_hash_value);
    transparent_crc(p_907->g_518, "p_907->g_518", print_hash_value);
    transparent_crc(p_907->g_520, "p_907->g_520", print_hash_value);
    transparent_crc(p_907->g_522, "p_907->g_522", print_hash_value);
    transparent_crc(p_907->g_530.x, "p_907->g_530.x", print_hash_value);
    transparent_crc(p_907->g_530.y, "p_907->g_530.y", print_hash_value);
    transparent_crc(p_907->g_530.z, "p_907->g_530.z", print_hash_value);
    transparent_crc(p_907->g_530.w, "p_907->g_530.w", print_hash_value);
    transparent_crc(p_907->g_531.s0, "p_907->g_531.s0", print_hash_value);
    transparent_crc(p_907->g_531.s1, "p_907->g_531.s1", print_hash_value);
    transparent_crc(p_907->g_531.s2, "p_907->g_531.s2", print_hash_value);
    transparent_crc(p_907->g_531.s3, "p_907->g_531.s3", print_hash_value);
    transparent_crc(p_907->g_531.s4, "p_907->g_531.s4", print_hash_value);
    transparent_crc(p_907->g_531.s5, "p_907->g_531.s5", print_hash_value);
    transparent_crc(p_907->g_531.s6, "p_907->g_531.s6", print_hash_value);
    transparent_crc(p_907->g_531.s7, "p_907->g_531.s7", print_hash_value);
    transparent_crc(p_907->g_531.s8, "p_907->g_531.s8", print_hash_value);
    transparent_crc(p_907->g_531.s9, "p_907->g_531.s9", print_hash_value);
    transparent_crc(p_907->g_531.sa, "p_907->g_531.sa", print_hash_value);
    transparent_crc(p_907->g_531.sb, "p_907->g_531.sb", print_hash_value);
    transparent_crc(p_907->g_531.sc, "p_907->g_531.sc", print_hash_value);
    transparent_crc(p_907->g_531.sd, "p_907->g_531.sd", print_hash_value);
    transparent_crc(p_907->g_531.se, "p_907->g_531.se", print_hash_value);
    transparent_crc(p_907->g_531.sf, "p_907->g_531.sf", print_hash_value);
    transparent_crc(p_907->g_540.s0, "p_907->g_540.s0", print_hash_value);
    transparent_crc(p_907->g_540.s1, "p_907->g_540.s1", print_hash_value);
    transparent_crc(p_907->g_540.s2, "p_907->g_540.s2", print_hash_value);
    transparent_crc(p_907->g_540.s3, "p_907->g_540.s3", print_hash_value);
    transparent_crc(p_907->g_540.s4, "p_907->g_540.s4", print_hash_value);
    transparent_crc(p_907->g_540.s5, "p_907->g_540.s5", print_hash_value);
    transparent_crc(p_907->g_540.s6, "p_907->g_540.s6", print_hash_value);
    transparent_crc(p_907->g_540.s7, "p_907->g_540.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_907->g_553[i].f0, "p_907->g_553[i].f0", print_hash_value);
        transparent_crc(p_907->g_553[i].f1, "p_907->g_553[i].f1", print_hash_value);
        transparent_crc(p_907->g_553[i].f2, "p_907->g_553[i].f2", print_hash_value);
        transparent_crc(p_907->g_553[i].f3, "p_907->g_553[i].f3", print_hash_value);
        transparent_crc(p_907->g_553[i].f4, "p_907->g_553[i].f4", print_hash_value);
        transparent_crc(p_907->g_553[i].f5, "p_907->g_553[i].f5", print_hash_value);
        transparent_crc(p_907->g_553[i].f6, "p_907->g_553[i].f6", print_hash_value);
        transparent_crc(p_907->g_553[i].f7, "p_907->g_553[i].f7", print_hash_value);
        transparent_crc(p_907->g_553[i].f8, "p_907->g_553[i].f8", print_hash_value);
        transparent_crc(p_907->g_553[i].f9, "p_907->g_553[i].f9", print_hash_value);

    }
    transparent_crc(p_907->g_591.f0, "p_907->g_591.f0", print_hash_value);
    transparent_crc(p_907->g_591.f1, "p_907->g_591.f1", print_hash_value);
    transparent_crc(p_907->g_591.f2, "p_907->g_591.f2", print_hash_value);
    transparent_crc(p_907->g_591.f3, "p_907->g_591.f3", print_hash_value);
    transparent_crc(p_907->g_591.f4, "p_907->g_591.f4", print_hash_value);
    transparent_crc(p_907->g_591.f5, "p_907->g_591.f5", print_hash_value);
    transparent_crc(p_907->g_591.f6, "p_907->g_591.f6", print_hash_value);
    transparent_crc(p_907->g_591.f7, "p_907->g_591.f7", print_hash_value);
    transparent_crc(p_907->g_591.f8, "p_907->g_591.f8", print_hash_value);
    transparent_crc(p_907->g_591.f9, "p_907->g_591.f9", print_hash_value);
    transparent_crc(p_907->g_612.x, "p_907->g_612.x", print_hash_value);
    transparent_crc(p_907->g_612.y, "p_907->g_612.y", print_hash_value);
    transparent_crc(p_907->g_613.x, "p_907->g_613.x", print_hash_value);
    transparent_crc(p_907->g_613.y, "p_907->g_613.y", print_hash_value);
    transparent_crc(p_907->g_613.z, "p_907->g_613.z", print_hash_value);
    transparent_crc(p_907->g_613.w, "p_907->g_613.w", print_hash_value);
    transparent_crc(p_907->g_622, "p_907->g_622", print_hash_value);
    transparent_crc(p_907->g_627.f0, "p_907->g_627.f0", print_hash_value);
    transparent_crc(p_907->g_635.f0, "p_907->g_635.f0", print_hash_value);
    transparent_crc(p_907->g_635.f1, "p_907->g_635.f1", print_hash_value);
    transparent_crc(p_907->g_635.f2, "p_907->g_635.f2", print_hash_value);
    transparent_crc(p_907->g_635.f3, "p_907->g_635.f3", print_hash_value);
    transparent_crc(p_907->g_635.f4, "p_907->g_635.f4", print_hash_value);
    transparent_crc(p_907->g_635.f5, "p_907->g_635.f5", print_hash_value);
    transparent_crc(p_907->g_635.f6, "p_907->g_635.f6", print_hash_value);
    transparent_crc(p_907->g_635.f7, "p_907->g_635.f7", print_hash_value);
    transparent_crc(p_907->g_635.f8, "p_907->g_635.f8", print_hash_value);
    transparent_crc(p_907->g_635.f9, "p_907->g_635.f9", print_hash_value);
    transparent_crc(p_907->g_649.x, "p_907->g_649.x", print_hash_value);
    transparent_crc(p_907->g_649.y, "p_907->g_649.y", print_hash_value);
    transparent_crc(p_907->g_678, "p_907->g_678", print_hash_value);
    transparent_crc(p_907->g_679, "p_907->g_679", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_907->g_680[i], "p_907->g_680[i]", print_hash_value);

    }
    transparent_crc(p_907->g_688, "p_907->g_688", print_hash_value);
    transparent_crc(p_907->g_703.s0, "p_907->g_703.s0", print_hash_value);
    transparent_crc(p_907->g_703.s1, "p_907->g_703.s1", print_hash_value);
    transparent_crc(p_907->g_703.s2, "p_907->g_703.s2", print_hash_value);
    transparent_crc(p_907->g_703.s3, "p_907->g_703.s3", print_hash_value);
    transparent_crc(p_907->g_703.s4, "p_907->g_703.s4", print_hash_value);
    transparent_crc(p_907->g_703.s5, "p_907->g_703.s5", print_hash_value);
    transparent_crc(p_907->g_703.s6, "p_907->g_703.s6", print_hash_value);
    transparent_crc(p_907->g_703.s7, "p_907->g_703.s7", print_hash_value);
    transparent_crc(p_907->g_703.s8, "p_907->g_703.s8", print_hash_value);
    transparent_crc(p_907->g_703.s9, "p_907->g_703.s9", print_hash_value);
    transparent_crc(p_907->g_703.sa, "p_907->g_703.sa", print_hash_value);
    transparent_crc(p_907->g_703.sb, "p_907->g_703.sb", print_hash_value);
    transparent_crc(p_907->g_703.sc, "p_907->g_703.sc", print_hash_value);
    transparent_crc(p_907->g_703.sd, "p_907->g_703.sd", print_hash_value);
    transparent_crc(p_907->g_703.se, "p_907->g_703.se", print_hash_value);
    transparent_crc(p_907->g_703.sf, "p_907->g_703.sf", print_hash_value);
    transparent_crc(p_907->g_762.f0, "p_907->g_762.f0", print_hash_value);
    transparent_crc(p_907->g_762.f1, "p_907->g_762.f1", print_hash_value);
    transparent_crc(p_907->g_762.f2, "p_907->g_762.f2", print_hash_value);
    transparent_crc(p_907->g_762.f3, "p_907->g_762.f3", print_hash_value);
    transparent_crc(p_907->g_762.f4, "p_907->g_762.f4", print_hash_value);
    transparent_crc(p_907->g_762.f5, "p_907->g_762.f5", print_hash_value);
    transparent_crc(p_907->g_762.f6, "p_907->g_762.f6", print_hash_value);
    transparent_crc(p_907->g_762.f7, "p_907->g_762.f7", print_hash_value);
    transparent_crc(p_907->g_762.f8, "p_907->g_762.f8", print_hash_value);
    transparent_crc(p_907->g_762.f9, "p_907->g_762.f9", print_hash_value);
    transparent_crc(p_907->g_766, "p_907->g_766", print_hash_value);
    transparent_crc(p_907->g_780, "p_907->g_780", print_hash_value);
    transparent_crc(p_907->g_783.f0, "p_907->g_783.f0", print_hash_value);
    transparent_crc(p_907->g_783.f1, "p_907->g_783.f1", print_hash_value);
    transparent_crc(p_907->g_783.f2, "p_907->g_783.f2", print_hash_value);
    transparent_crc(p_907->g_783.f3, "p_907->g_783.f3", print_hash_value);
    transparent_crc(p_907->g_783.f4, "p_907->g_783.f4", print_hash_value);
    transparent_crc(p_907->g_783.f5, "p_907->g_783.f5", print_hash_value);
    transparent_crc(p_907->g_783.f6, "p_907->g_783.f6", print_hash_value);
    transparent_crc(p_907->g_783.f7, "p_907->g_783.f7", print_hash_value);
    transparent_crc(p_907->g_783.f8, "p_907->g_783.f8", print_hash_value);
    transparent_crc(p_907->g_783.f9, "p_907->g_783.f9", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_907->g_787[i][j].f0, "p_907->g_787[i][j].f0", print_hash_value);
            transparent_crc(p_907->g_787[i][j].f1, "p_907->g_787[i][j].f1", print_hash_value);
            transparent_crc(p_907->g_787[i][j].f2, "p_907->g_787[i][j].f2", print_hash_value);
            transparent_crc(p_907->g_787[i][j].f3, "p_907->g_787[i][j].f3", print_hash_value);
            transparent_crc(p_907->g_787[i][j].f4, "p_907->g_787[i][j].f4", print_hash_value);
            transparent_crc(p_907->g_787[i][j].f5, "p_907->g_787[i][j].f5", print_hash_value);
            transparent_crc(p_907->g_787[i][j].f6, "p_907->g_787[i][j].f6", print_hash_value);
            transparent_crc(p_907->g_787[i][j].f7, "p_907->g_787[i][j].f7", print_hash_value);
            transparent_crc(p_907->g_787[i][j].f8, "p_907->g_787[i][j].f8", print_hash_value);
            transparent_crc(p_907->g_787[i][j].f9, "p_907->g_787[i][j].f9", print_hash_value);

        }
    }
    transparent_crc(p_907->g_825.f0, "p_907->g_825.f0", print_hash_value);
    transparent_crc(p_907->g_825.f1, "p_907->g_825.f1", print_hash_value);
    transparent_crc(p_907->g_825.f2, "p_907->g_825.f2", print_hash_value);
    transparent_crc(p_907->g_825.f3, "p_907->g_825.f3", print_hash_value);
    transparent_crc(p_907->g_825.f4, "p_907->g_825.f4", print_hash_value);
    transparent_crc(p_907->g_825.f5, "p_907->g_825.f5", print_hash_value);
    transparent_crc(p_907->g_825.f6, "p_907->g_825.f6", print_hash_value);
    transparent_crc(p_907->g_825.f7, "p_907->g_825.f7", print_hash_value);
    transparent_crc(p_907->g_825.f8, "p_907->g_825.f8", print_hash_value);
    transparent_crc(p_907->g_825.f9, "p_907->g_825.f9", print_hash_value);
    transparent_crc(p_907->g_848.s0, "p_907->g_848.s0", print_hash_value);
    transparent_crc(p_907->g_848.s1, "p_907->g_848.s1", print_hash_value);
    transparent_crc(p_907->g_848.s2, "p_907->g_848.s2", print_hash_value);
    transparent_crc(p_907->g_848.s3, "p_907->g_848.s3", print_hash_value);
    transparent_crc(p_907->g_848.s4, "p_907->g_848.s4", print_hash_value);
    transparent_crc(p_907->g_848.s5, "p_907->g_848.s5", print_hash_value);
    transparent_crc(p_907->g_848.s6, "p_907->g_848.s6", print_hash_value);
    transparent_crc(p_907->g_848.s7, "p_907->g_848.s7", print_hash_value);
    transparent_crc(p_907->g_848.s8, "p_907->g_848.s8", print_hash_value);
    transparent_crc(p_907->g_848.s9, "p_907->g_848.s9", print_hash_value);
    transparent_crc(p_907->g_848.sa, "p_907->g_848.sa", print_hash_value);
    transparent_crc(p_907->g_848.sb, "p_907->g_848.sb", print_hash_value);
    transparent_crc(p_907->g_848.sc, "p_907->g_848.sc", print_hash_value);
    transparent_crc(p_907->g_848.sd, "p_907->g_848.sd", print_hash_value);
    transparent_crc(p_907->g_848.se, "p_907->g_848.se", print_hash_value);
    transparent_crc(p_907->g_848.sf, "p_907->g_848.sf", print_hash_value);
    transparent_crc(p_907->g_851.f0, "p_907->g_851.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_907->g_868[i].f0, "p_907->g_868[i].f0", print_hash_value);
        transparent_crc(p_907->g_868[i].f1, "p_907->g_868[i].f1", print_hash_value);
        transparent_crc(p_907->g_868[i].f2, "p_907->g_868[i].f2", print_hash_value);
        transparent_crc(p_907->g_868[i].f3, "p_907->g_868[i].f3", print_hash_value);
        transparent_crc(p_907->g_868[i].f4, "p_907->g_868[i].f4", print_hash_value);
        transparent_crc(p_907->g_868[i].f5, "p_907->g_868[i].f5", print_hash_value);
        transparent_crc(p_907->g_868[i].f6, "p_907->g_868[i].f6", print_hash_value);
        transparent_crc(p_907->g_868[i].f7, "p_907->g_868[i].f7", print_hash_value);
        transparent_crc(p_907->g_868[i].f8, "p_907->g_868[i].f8", print_hash_value);
        transparent_crc(p_907->g_868[i].f9, "p_907->g_868[i].f9", print_hash_value);

    }
    transparent_crc(p_907->g_903, "p_907->g_903", print_hash_value);
    transparent_crc(p_907->v_collective, "p_907->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 87; i++)
            transparent_crc(p_907->l_special_values[i], "p_907->l_special_values[i]", print_hash_value);
    transparent_crc(p_907->l_comm_values[get_linear_local_id()], "p_907->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_907->g_comm_values[get_linear_group_id() * 8 + get_linear_local_id()], "p_907->g_comm_values[get_linear_group_id() * 8 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
