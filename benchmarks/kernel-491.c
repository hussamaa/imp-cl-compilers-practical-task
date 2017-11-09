// --atomics 57 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 46,31,6 -l 2,1,1
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

// Seed: 1831401931

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint64_t  f1;
   uint8_t  f2;
   uint16_t  f3;
   int32_t  f4;
};

struct S1 {
   uint8_t  f0;
   volatile int64_t  f1;
   uint8_t  f2;
   volatile uint32_t  f3;
   volatile uint32_t  f4;
   volatile uint32_t  f5;
   int8_t  f6;
};

struct S2 {
   int64_t  f0;
   int16_t  f1;
   uint64_t  f2;
   volatile uint16_t  f3;
};

struct S3 {
   uint32_t  f0;
   volatile uint32_t  f1;
   int32_t  f2;
   struct S2  f3;
   struct S2  f4;
};

union U4 {
   int32_t  f0;
   struct S2  f1;
   volatile struct S0  f2;
   int64_t  f3;
   uint64_t  f4;
};

union U5 {
   uint32_t  f0;
   uint8_t  f1;
   volatile uint16_t  f2;
   int64_t  f3;
   uint64_t  f4;
};

union U6 {
   struct S3  f0;
   uint64_t  f1;
   struct S2  f2;
   volatile int32_t  f3;
};

struct S7 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    int32_t g_12;
    int16_t g_20;
    struct S0 g_26[6];
    int16_t g_33;
    int16_t *g_32[5][9];
    int32_t g_37;
    volatile VECTOR(uint8_t, 16) g_44;
    volatile struct S3 *g_122;
    uint16_t g_131;
    int8_t g_135;
    int32_t g_137;
    int16_t g_138;
    uint16_t g_139;
    uint8_t g_144;
    VECTOR(uint64_t, 2) g_148;
    struct S3 *g_149;
    struct S3 g_179;
    int32_t * volatile g_181;
    VECTOR(int64_t, 16) g_192;
    int32_t g_205;
    int32_t *g_210[10][10][2];
    int32_t **g_209[8][8];
    uint32_t g_212;
    struct S1 g_231;
    volatile struct S1 g_232;
    volatile struct S1 g_233;
    volatile union U5 g_237[1][8];
    int32_t ***g_239[5][5][5];
    volatile struct S3 g_256[4];
    uint16_t *g_269;
    struct S1 g_282;
    struct S1 *g_281[3][7];
    volatile uint64_t *g_283;
    VECTOR(uint8_t, 2) g_289;
    int32_t g_290[2][5][7];
    uint32_t g_294;
    volatile VECTOR(uint32_t, 8) g_315;
    struct S3 g_328;
    struct S3 g_329;
    volatile struct S1 g_332[6];
    volatile struct S1 * volatile g_333;
    int32_t g_334;
    struct S3 g_440;
    union U5 g_480;
    volatile union U6 g_481;
    volatile struct S1 g_482;
    int8_t g_498;
    volatile int64_t g_506;
    int32_t ** volatile g_532;
    int32_t * volatile g_534[9];
    int32_t * volatile g_535;
    int32_t * volatile g_536;
    volatile struct S2 g_544[9];
    VECTOR(int64_t, 8) g_562;
    VECTOR(uint64_t, 16) g_564;
    VECTOR(uint64_t, 2) g_566;
    VECTOR(uint64_t, 8) g_581;
    VECTOR(int32_t, 16) g_611;
    VECTOR(int32_t, 8) g_613;
    volatile VECTOR(int32_t, 4) g_615;
    struct S2 g_618;
    VECTOR(int32_t, 4) g_624;
    volatile VECTOR(int32_t, 2) g_625;
    volatile uint16_t g_641;
    volatile uint32_t g_646;
    struct S2 g_649[2][7][1];
    struct S2 * volatile g_650;
    uint32_t g_661;
    struct S1 g_664[7][3][6];
    VECTOR(int16_t, 4) g_668;
    volatile struct S1 g_683;
    struct S2 g_685[6];
    VECTOR(int32_t, 16) g_692;
    volatile int32_t g_699;
    int32_t ** volatile g_723[8][5][6];
    int32_t ** volatile g_725;
    VECTOR(uint64_t, 4) g_735;
    volatile VECTOR(uint8_t, 8) g_743;
    VECTOR(int16_t, 8) g_744;
    volatile struct S1 g_746;
    union U6 g_749;
    struct S1 g_753[5];
    volatile struct S2 g_755;
    volatile union U4 g_764[8];
    volatile VECTOR(int32_t, 8) g_766;
    int32_t * volatile g_774;
    volatile struct S3 g_777;
    struct S3 * volatile * volatile *g_779;
    struct S3 **g_783;
    struct S3 ***g_782[4];
    VECTOR(uint16_t, 8) g_801;
    VECTOR(uint16_t, 16) g_802;
    uint8_t g_805;
    struct S3 g_806;
    struct S3 g_807;
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
uint64_t  func_1(struct S7 * p_889);
uint32_t  func_7(int8_t  p_8, struct S7 * p_889);
struct S0  func_15(int16_t  p_16, int64_t  p_17, struct S0  p_18, struct S7 * p_889);
int16_t * func_21(int16_t * p_22, struct S7 * p_889);
int16_t * func_23(struct S0  p_24, uint32_t  p_25, struct S7 * p_889);
int32_t  func_38(int32_t  p_39, int32_t  p_40, struct S7 * p_889);
uint8_t  func_45(int16_t * p_46, int16_t * p_47, struct S0  p_48, int16_t * p_49, struct S7 * p_889);
int16_t * func_50(int32_t * p_51, int16_t * p_52, struct S7 * p_889);
int16_t  func_79(uint32_t  p_80, struct S7 * p_889);
uint32_t  func_87(int32_t * p_88, uint32_t  p_89, int32_t * p_90, uint16_t  p_91, int32_t  p_92, struct S7 * p_889);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_889->g_4 p_889->g_20 p_889->g_26 p_889->g_32 p_889->g_37 p_889->g_179.f3.f2 p_889->g_179.f3.f1 p_889->g_283 p_889->g_44 p_889->g_33 p_889->g_440 p_889->g_282.f2 p_889->g_481 p_889->g_482 p_889->g_536 p_889->g_334 p_889->g_544 p_889->g_333 p_889->g_332 p_889->g_661 p_889->g_179.f4.f2 p_889->g_562 p_889->g_564 p_889->g_290 p_889->g_566 p_889->g_138 p_889->g_664 p_889->g_480.f0 p_889->g_683 p_889->g_650 p_889->g_179.f3 p_889->g_725 p_889->g_148 p_889->g_692 p_889->g_746 p_889->g_749 p_889->g_181 p_889->g_753 p_889->g_755 p_889->g_764 p_889->g_774 p_889->g_137 p_889->g_777 p_889->g_779 p_889->g_805 p_889->g_806 p_889->g_581
 * writes: p_889->g_4 p_889->g_12 p_889->g_20 p_889->g_37 p_889->g_212 p_889->g_231.f6 p_889->g_138 p_889->g_328.f4.f1 p_889->g_137 p_889->g_33 p_889->g_26.f3 p_889->g_329.f4.f0 p_889->g_440.f4.f1 p_889->g_334 p_889->g_440.f2 p_889->g_179.f0 p_889->g_661 p_889->g_179.f4.f2 p_889->g_231.f0 p_889->g_480.f0 p_889->g_179.f4.f1 p_889->g_179.f3.f2 p_889->g_149 p_889->g_144 p_889->g_329.f0 p_889->g_685 p_889->g_210 p_889->g_564 p_889->g_328.f0 p_889->g_782 p_889->g_807
 */
uint64_t  func_1(struct S7 * p_889)
{ /* block id: 4 */
    int32_t *l_884 = &p_889->g_137;
    int32_t *l_885[10][1][3] = {{{&p_889->g_4,&p_889->g_4,(void*)0}},{{&p_889->g_4,&p_889->g_4,(void*)0}},{{&p_889->g_4,&p_889->g_4,(void*)0}},{{&p_889->g_4,&p_889->g_4,(void*)0}},{{&p_889->g_4,&p_889->g_4,(void*)0}},{{&p_889->g_4,&p_889->g_4,(void*)0}},{{&p_889->g_4,&p_889->g_4,(void*)0}},{{&p_889->g_4,&p_889->g_4,(void*)0}},{{&p_889->g_4,&p_889->g_4,(void*)0}},{{&p_889->g_4,&p_889->g_4,(void*)0}}};
    uint16_t l_886 = 65535UL;
    int i, j, k;
    for (p_889->g_4 = 1; (p_889->g_4 > (-9)); --p_889->g_4)
    { /* block id: 7 */
        int32_t l_9 = (-3L);
        p_889->g_807 = (func_7((FAKE_DIVERGE(p_889->local_1_offset, get_local_id(1), 10) != l_9), p_889) , p_889->g_806);
    }
    if ((atomic_inc(&p_889->g_atomic_input[57 * get_linear_group_id() + 36]) == 9))
    { /* block id: 428 */
        int32_t l_808 = (-1L);
        for (l_808 = 0; (l_808 < (-13)); l_808--)
        { /* block id: 431 */
            int32_t l_811 = 0x59111926L;
            int32_t l_812 = 0x1955E97DL;
            if ((l_812 = l_811))
            { /* block id: 433 */
                int32_t l_813 = 9L;
                for (l_813 = 0; (l_813 > (-1)); l_813 = safe_sub_func_int64_t_s_s(l_813, 5))
                { /* block id: 436 */
                    int8_t l_816 = 0x1EL;
                    int8_t l_817 = 0x01L;
                    VECTOR(uint32_t, 2) l_818 = (VECTOR(uint32_t, 2))(0xD7B62F2BL, 0x081ED744L);
                    uint32_t l_819 = 4294967286UL;
                    uint32_t l_820 = 4294967295UL;
                    uint64_t l_821 = 0xBA7176E53787AEA1L;
                    int i;
                    l_818.x &= (l_817 = (l_812 |= l_816));
                    l_812 = l_819;
                    l_821 = l_820;
                }
                for (l_813 = 0; (l_813 == 8); l_813 = safe_add_func_uint32_t_u_u(l_813, 4))
                { /* block id: 445 */
                    struct S2 l_824 = {0x6F7D16B12FED202BL,0L,4UL,65528UL};/* VOLATILE GLOBAL l_824 */
                    int32_t l_825 = 0x25151F6EL;
                    uint32_t l_826 = 4294967295UL;
                    uint32_t l_827 = 0x8322CDAAL;
                    l_827 ^= (l_824 , (l_825 , l_826));
                }
            }
            else
            { /* block id: 448 */
                int64_t l_828 = (-5L);
                uint32_t l_829 = 4294967287UL;
                union U6 l_833[1] = {{{1UL,1UL,-1L,{0x508B1BD1F043B711L,0x424CL,0x87E10273D1DF4355L,65529UL},{6L,0x2A1BL,0xD4EF7CA01B14D6DBL,0x4987L}}}};
                union U6 *l_832 = &l_833[0];
                int i;
                --l_829;
                l_832 = (void*)0;
            }
            for (l_812 = (-18); (l_812 == 11); l_812 = safe_add_func_int16_t_s_s(l_812, 3))
            { /* block id: 454 */
                int32_t l_836[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_836[i] = 0x0001803FL;
                for (l_836[0] = 0; (l_836[0] >= 4); l_836[0] = safe_add_func_uint8_t_u_u(l_836[0], 1))
                { /* block id: 457 */
                    uint8_t l_839 = 0x83L;
                    int32_t l_855 = 1L;
                    uint16_t l_856 = 0xB801L;
                    uint8_t l_857 = 0x3DL;
                    int32_t l_858[2][1];
                    int32_t l_859 = 0x0FD885E9L;
                    uint32_t l_860 = 0xC6169E9EL;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_858[i][j] = (-7L);
                    }
                    if (l_839)
                    { /* block id: 458 */
                        int32_t l_841 = 0x5B7F32B4L;
                        int32_t *l_840 = &l_841;
                        int32_t *l_842 = &l_841;
                        int16_t l_843 = 0x2E7CL;
                        union U6 l_845 = {{1UL,0x359BFB85L,-7L,{0x0E3EA21D29C2F116L,0x47FDL,0xDA653471226790C7L,65527UL},{0x473663E18DCFE697L,-3L,5UL,65528UL}}};/* VOLATILE GLOBAL l_845 */
                        union U6 *l_844 = &l_845;
                        union U6 *l_846[10] = {&l_845,&l_845,&l_845,&l_845,&l_845,&l_845,&l_845,&l_845,&l_845,&l_845};
                        union U6 *l_847 = &l_845;
                        int i;
                        l_842 = l_840;
                        l_847 = (l_843 , (l_846[1] = (l_844 = (void*)0)));
                    }
                    else
                    { /* block id: 463 */
                        VECTOR(int8_t, 16) l_848 = (VECTOR(int8_t, 16))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 0x1CL), 0x1CL), 0x1CL, 0x41L, 0x1CL, (VECTOR(int8_t, 2))(0x41L, 0x1CL), (VECTOR(int8_t, 2))(0x41L, 0x1CL), 0x41L, 0x1CL, 0x41L, 0x1CL);
                        union U6 l_849 = {{0x85112468L,1UL,0x331B3BABL,{0x6A8DC70280BF4FAAL,0L,0x02D001B743660330L,65535UL},{1L,0x7D54L,0xE8BBE6672E2C16B6L,0UL}}};/* VOLATILE GLOBAL l_849 */
                        uint64_t l_850 = 0x4612F084071DEC68L;
                        uint32_t l_851 = 4294967293UL;
                        VECTOR(int64_t, 2) l_852 = (VECTOR(int64_t, 2))(5L, 2L);
                        struct S1 l_853 = {1UL,0x0FFBFA21DF491FF9L,0x54L,0x7E8B65C4L,0xB46009DEL,0x917DCE34L,0x75L};/* VOLATILE GLOBAL l_853 */
                        struct S1 l_854 = {0x3EL,0x129F24629E746130L,0x35L,0x2BF139FDL,0x0A2D05A3L,4294967289UL,-9L};/* VOLATILE GLOBAL l_854 */
                        int i;
                        l_851 = (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_848.sbc)).xxyxyxxxyyxxxyyx)).odd)).s7 , (l_849 , l_850));
                        l_854 = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_852.yy)).xyyy)).x , l_853);
                    }
                    l_855 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x15FAFA9AL, 0x4B97253AL)), (-9L), 0x5C5E7F36L)).w;
                    l_857 = l_856;
                    l_860++;
                }
                for (l_836[0] = (-24); (l_836[0] >= 22); l_836[0] = safe_add_func_int64_t_s_s(l_836[0], 9))
                { /* block id: 473 */
                    int16_t l_865 = 1L;
                    int16_t l_866[1][8] = {{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}};
                    int i, j;
                    l_866[0][5] = l_865;
                }
            }
        }
        for (l_808 = (-16); (l_808 != 7); l_808 = safe_add_func_int32_t_s_s(l_808, 4))
        { /* block id: 480 */
            uint64_t l_869 = 0UL;
            uint8_t l_870[2][10] = {{3UL,0x35L,0x35L,3UL,3UL,0x35L,0x35L,3UL,3UL,0x35L},{3UL,0x35L,0x35L,3UL,3UL,0x35L,0x35L,3UL,3UL,0x35L}};
            union U5 l_872 = {0x06D06710L};/* VOLATILE GLOBAL l_872 */
            union U5 *l_871 = &l_872;
            union U5 *l_873 = &l_872;
            int64_t l_874 = 0x55280A7E030AB8FDL;
            int64_t l_875[8] = {8L,8L,8L,8L,8L,8L,8L,8L};
            uint8_t l_876 = 0xA5L;
            int32_t l_879 = 9L;
            int64_t l_880 = (-8L);
            int32_t l_882 = 0x2C15E7E1L;
            int32_t *l_881 = &l_882;
            int32_t *l_883 = &l_882;
            int i, j;
            l_873 = ((l_869 , l_870[1][1]) , l_871);
            --l_876;
            l_883 = ((l_880 = l_879) , l_881);
        }
        unsigned int result = 0;
        result += l_808;
        atomic_add(&p_889->g_special_values[57 * get_linear_group_id() + 36], result);
    }
    else
    { /* block id: 486 */
        (1 + 1);
    }
    l_886++;
    (*l_884) = (*l_884);
    return p_889->g_581.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_889->g_20 p_889->g_26 p_889->g_32 p_889->g_37 p_889->g_179.f3.f2 p_889->g_179.f3.f1 p_889->g_283 p_889->g_44 p_889->g_33 p_889->g_440 p_889->g_282.f2 p_889->g_481 p_889->g_482 p_889->g_536 p_889->g_334 p_889->g_544 p_889->g_333 p_889->g_332 p_889->g_661 p_889->g_179.f4.f2 p_889->g_562 p_889->g_564 p_889->g_290 p_889->g_566 p_889->g_138 p_889->g_664 p_889->g_480.f0 p_889->g_683 p_889->g_650 p_889->g_179.f3 p_889->g_725 p_889->g_148 p_889->g_692 p_889->g_746 p_889->g_749 p_889->g_181 p_889->g_753 p_889->g_755 p_889->g_328.f0 p_889->g_764 p_889->g_649.f1 p_889->g_766 p_889->g_774 p_889->g_137 p_889->g_777 p_889->g_779 p_889->g_801 p_889->g_802 p_889->g_805
 * writes: p_889->g_12 p_889->g_20 p_889->g_37 p_889->g_212 p_889->g_231.f6 p_889->g_138 p_889->g_328.f4.f1 p_889->g_137 p_889->g_33 p_889->g_26.f3 p_889->g_329.f4.f0 p_889->g_440.f4.f1 p_889->g_334 p_889->g_440.f2 p_889->g_179.f0 p_889->g_661 p_889->g_179.f4.f2 p_889->g_231.f0 p_889->g_480.f0 p_889->g_179.f4.f1 p_889->g_179.f3.f2 p_889->g_149 p_889->g_144 p_889->g_329.f0 p_889->g_685 p_889->g_210 p_889->g_564 p_889->g_328.f0 p_889->g_782
 */
uint32_t  func_7(int8_t  p_8, struct S7 * p_889)
{ /* block id: 8 */
    int16_t *l_666 = &p_889->g_440.f3.f1;
    struct S3 ****l_673 = (void*)0;
    int32_t l_676 = 9L;
    int32_t l_680[5][5][7] = {{{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L}},{{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L}},{{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L}},{{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L}},{{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L},{(-7L),0x13433460L,1L,(-1L),5L,1L,1L}}};
    struct S3 *l_694 = &p_889->g_179;
    int32_t *l_757 = (void*)0;
    VECTOR(uint32_t, 8) l_765 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 4294967294UL), 4294967294UL), 4294967294UL, 2UL, 4294967294UL);
    uint8_t l_786 = 0x86L;
    VECTOR(uint16_t, 4) l_799 = (VECTOR(uint16_t, 4))(0x0FD3L, (VECTOR(uint16_t, 2))(0x0FD3L, 0x303BL), 0x303BL);
    VECTOR(uint16_t, 16) l_800 = (VECTOR(uint16_t, 16))(0x7DCBL, (VECTOR(uint16_t, 4))(0x7DCBL, (VECTOR(uint16_t, 2))(0x7DCBL, 0x14B3L), 0x14B3L), 0x14B3L, 0x7DCBL, 0x14B3L, (VECTOR(uint16_t, 2))(0x7DCBL, 0x14B3L), (VECTOR(uint16_t, 2))(0x7DCBL, 0x14B3L), 0x7DCBL, 0x14B3L, 0x7DCBL, 0x14B3L);
    int i, j, k;
    for (p_8 = (-30); (p_8 == 11); p_8 = safe_add_func_uint8_t_u_u(p_8, 3))
    { /* block id: 11 */
        int32_t l_667 = 0L;
        VECTOR(int16_t, 2) l_669 = (VECTOR(int16_t, 2))(0x6D27L, (-10L));
        VECTOR(int16_t, 16) l_670 = (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x6D2DL), 0x6D2DL), 0x6D2DL, 2L, 0x6D2DL, (VECTOR(int16_t, 2))(2L, 0x6D2DL), (VECTOR(int16_t, 2))(2L, 0x6D2DL), 2L, 0x6D2DL, 2L, 0x6D2DL);
        struct S2 *l_684 = &p_889->g_685[4];
        int32_t l_701 = 0x23329468L;
        uint64_t l_705 = 0x619ECDA6E1E9D40FL;
        int32_t l_707 = 0x0E68764BL;
        int32_t l_710 = 7L;
        int32_t l_712[2][6];
        VECTOR(uint64_t, 2) l_734 = (VECTOR(uint64_t, 2))(0xB82DF2CA63206F43L, 4UL);
        int32_t **l_745[8];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_712[i][j] = (-7L);
        }
        for (i = 0; i < 8; i++)
            l_745[i] = &p_889->g_210[3][7][1];
        for (p_889->g_12 = 0; (p_889->g_12 < (-21)); p_889->g_12 = safe_sub_func_int8_t_s_s(p_889->g_12, 8))
        { /* block id: 14 */
            int16_t *l_19 = &p_889->g_20;
            int32_t l_27 = 0x45D07A05L;
            int16_t **l_665[8] = {&p_889->g_32[1][6],&p_889->g_32[1][6],&p_889->g_32[1][6],&p_889->g_32[1][6],&p_889->g_32[1][6],&p_889->g_32[1][6],&p_889->g_32[1][6],&p_889->g_32[1][6]};
            int32_t *l_674 = (void*)0;
            int32_t *l_675[3][9][9] = {{{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_889->g_12,&l_27,&p_889->g_12,(void*)0,(void*)0,(void*)0}}};
            uint32_t *l_677 = (void*)0;
            uint32_t *l_678[6][10][3] = {{{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0}},{{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0}},{{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0}},{{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0}},{{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0}},{{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0},{&p_889->g_480.f0,(void*)0,(void*)0}}};
            struct S0 l_679 = {4294967291UL,0x535167664F8E7109L,0x0CL,4UL,1L};
            int32_t l_727[4][2][9] = {{{(-1L),(-10L),(-6L),(-10L),(-1L),(-1L),(-10L),(-6L),(-10L)},{(-1L),(-10L),(-6L),(-10L),(-1L),(-1L),(-10L),(-6L),(-10L)}},{{(-1L),(-10L),(-6L),(-10L),(-1L),(-1L),(-10L),(-6L),(-10L)},{(-1L),(-10L),(-6L),(-10L),(-1L),(-1L),(-10L),(-6L),(-10L)}},{{(-1L),(-10L),(-6L),(-10L),(-1L),(-1L),(-10L),(-6L),(-10L)},{(-1L),(-10L),(-6L),(-10L),(-1L),(-1L),(-10L),(-6L),(-10L)}},{{(-1L),(-10L),(-6L),(-10L),(-1L),(-1L),(-10L),(-6L),(-10L)},{(-1L),(-10L),(-6L),(-10L),(-1L),(-1L),(-10L),(-6L),(-10L)}}};
            uint16_t l_728 = 0x92C5L;
            int i, j, k;
            if ((l_680[3][0][0] = (func_15(((((*l_19) &= 0x4C32L) | ((l_666 = func_21(func_23(p_889->g_26[1], l_27, p_889), p_889)) != p_889->g_32[0][6])) == (p_889->g_480.f0 &= ((l_676 = (((!(l_667 ^ ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_889->g_668.xyww)), 0x59A6L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(l_669.yyyy)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_670.s3007a9f4e099e962)).hi)).lo))).yxwzzxyw)), (((safe_add_func_uint64_t_u_u(((void*)0 != l_673), l_669.y)) < p_889->g_624.y) == p_889->g_611.s7), 0x3219L, 0x1B43L)))).odd, ((VECTOR(uint16_t, 8))(0UL))))).s12, ((VECTOR(int32_t, 2))(0x6DA8D016L)), ((VECTOR(int32_t, 2))(2L))))))).even)) , p_889->g_283) == (void*)0)) | 4294967286UL))), p_889->g_664[1][0][5].f6, l_679, p_889) , p_8)))
            { /* block id: 359 */
                uint64_t l_689 = 5UL;
                int32_t l_709 = 6L;
                int32_t l_711 = 7L;
                int32_t l_716 = 5L;
                int32_t l_717 = 0x640B95DCL;
                uint32_t l_718 = 0x1C5C25FFL;
                VECTOR(int8_t, 2) l_742 = (VECTOR(int8_t, 2))(0L, 0x3CL);
                uint32_t l_750 = 1UL;
                uint16_t **l_754 = (void*)0;
                int i;
                for (p_889->g_179.f4.f1 = 27; (p_889->g_179.f4.f1 >= 10); p_889->g_179.f4.f1 = safe_sub_func_uint32_t_u_u(p_889->g_179.f4.f1, 3))
                { /* block id: 362 */
                    uint32_t l_686 = 0x034E0A91L;
                    l_686 = ((p_889->g_683 , &p_889->g_544[1]) != l_684);
                    for (p_889->g_179.f3.f2 = (-15); (p_889->g_179.f3.f2 >= 56); p_889->g_179.f3.f2 = safe_add_func_int8_t_s_s(p_889->g_179.f3.f2, 7))
                    { /* block id: 366 */
                        uint32_t l_693[10][9][1] = {{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}},{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}},{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}},{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}},{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}},{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}},{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}},{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}},{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}},{{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL},{2UL}}};
                        int i, j, k;
                        l_689++;
                        l_693[3][0][0] = ((VECTOR(int32_t, 16))(p_889->g_692.sc891d28d09c6c20a)).s4;
                    }
                    p_889->g_149 = l_694;
                }
                for (p_889->g_179.f4.f1 = 0; (p_889->g_179.f4.f1 >= 3); p_889->g_179.f4.f1 = safe_add_func_uint32_t_u_u(p_889->g_179.f4.f1, 5))
                { /* block id: 374 */
                    int16_t l_700[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    int32_t l_706 = 0x4C463942L;
                    int32_t l_708 = 0L;
                    int32_t l_713 = 0L;
                    int32_t l_714 = 0x08BC462AL;
                    int32_t l_715 = (-2L);
                    int i;
                    for (p_889->g_144 = 0; (p_889->g_144 < 28); p_889->g_144 = safe_add_func_int8_t_s_s(p_889->g_144, 4))
                    { /* block id: 377 */
                        uint32_t l_702 = 0xAF8594C5L;
                        ++l_702;
                        if (l_705)
                            break;
                    }
                    --l_718;
                    for (p_889->g_329.f0 = 27; (p_889->g_329.f0 <= 41); p_889->g_329.f0 = safe_add_func_uint8_t_u_u(p_889->g_329.f0, 6))
                    { /* block id: 384 */
                        int32_t **l_724 = (void*)0;
                        int32_t l_726[5][8] = {{1L,0x6E634D7CL,1L,1L,0x6E634D7CL,1L,1L,0x6E634D7CL},{1L,0x6E634D7CL,1L,1L,0x6E634D7CL,1L,1L,0x6E634D7CL},{1L,0x6E634D7CL,1L,1L,0x6E634D7CL,1L,1L,0x6E634D7CL},{1L,0x6E634D7CL,1L,1L,0x6E634D7CL,1L,1L,0x6E634D7CL},{1L,0x6E634D7CL,1L,1L,0x6E634D7CL,1L,1L,0x6E634D7CL}};
                        uint64_t *l_736[10][8][3] = {{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}},{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}},{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}},{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}},{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}},{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}},{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}},{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}},{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}},{{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0},{(void*)0,&p_889->g_649[1][4][0].f2,(void*)0}}};
                        int8_t l_737 = 0x43L;
                        int i, j, k;
                        (*l_684) = (*p_889->g_650);
                        (*p_889->g_725) = &l_676;
                        --l_728;
                        l_711 ^= (safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s((l_737 = (l_680[2][3][1] | (p_889->g_564.s8 = (((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 2))(l_734.yx)).yyyxxyyy))).s23, ((VECTOR(uint64_t, 16))(p_889->g_735.xzxyxzwwxwyyxxyw)).s7e))).hi >= l_700[5])))))) >= ((((p_889->g_148.y , (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(l_742.xyxxyyyyxyyxyxyx)).sb, ((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(9UL, 255UL)).xxyx)).xwyywyyxzxwzxywy)).even, ((VECTOR(uint8_t, 8))(p_889->g_743.s54062072))))).s0)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_889->g_744.s16216632)).odd)).w))) , l_745[6]) == l_745[6]) != p_889->g_692.s1)), 0x4A68F854L));
                    }
                    (*p_889->g_181) = (p_889->g_746 , (safe_lshift_func_uint8_t_u_u((((p_889->g_749 , &p_889->g_649[1][4][0]) != (void*)0) , FAKE_DIVERGE(p_889->group_0_offset, get_group_id(0), 10)), 4)));
                }
                l_750--;
                l_680[3][0][0] = (p_889->g_753[0] , (1UL | (l_754 != l_754)));
            }
            else
            { /* block id: 396 */
                int32_t *l_756 = &p_889->g_137;
                (*l_684) = p_889->g_755;
                l_757 = l_756;
                if (p_8)
                    break;
            }
            l_675[0][2][7] = (void*)0;
            if (p_8)
                break;
        }
    }
    for (p_889->g_20 = 0; (p_889->g_20 <= 1); ++p_889->g_20)
    { /* block id: 407 */
        int32_t l_760 = 0x1689D5BFL;
        return l_760;
    }
    for (p_889->g_328.f0 = 0; (p_889->g_328.f0 == 10); p_889->g_328.f0 = safe_add_func_int16_t_s_s(p_889->g_328.f0, 1))
    { /* block id: 412 */
        int16_t *l_763[5];
        VECTOR(uint32_t, 4) l_767 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x6F0F0656L), 0x6F0F0656L);
        VECTOR(uint32_t, 4) l_768 = (VECTOR(uint32_t, 4))(0x8693ABFAL, (VECTOR(uint32_t, 2))(0x8693ABFAL, 0UL), 0UL);
        int64_t *l_771[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (i = 0; i < 5; i++)
            l_763[i] = &p_889->g_749.f0.f4.f1;
        (*p_889->g_774) = (p_889->g_564.sd < (((void*)0 == l_763[2]) >= (p_8 & (p_889->g_764[2] , ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 16))(l_765.s7762466320054072)).lo, (uint32_t)(p_889->g_649[1][4][0].f1 > (((VECTOR(int32_t, 2))(p_889->g_766.s57)).lo ^ ((VECTOR(uint32_t, 4))(0x63EB168CL, ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 8))(l_767.xzzxywwy)).s7311555651660000, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_768.wyyy)).xzwzzyyywwywyzyy))))), (uint32_t)(safe_add_func_int64_t_s_s((l_680[0][4][1] = (l_767.w | p_8)), (FAKE_DIVERGE(p_889->global_0_offset, get_global_id(0), 10) | ((safe_div_func_uint64_t_u_u(p_8, p_8)) | p_8))))))).sc, 0x7BA9EDC1L, 1UL)).y)), (uint32_t)p_8))).s5))));
        if ((*p_889->g_181))
            continue;
    }
    if (l_680[1][1][1])
    { /* block id: 417 */
        return p_889->g_138;
    }
    else
    { /* block id: 419 */
        uint16_t *l_778 = &p_889->g_26[1].f3;
        struct S3 **l_781 = &l_694;
        struct S3 ***l_780 = &l_781;
        int32_t l_803 = 6L;
        int32_t l_804 = 0x433FF6FEL;
        l_804 ^= ((safe_add_func_uint16_t_u_u(((p_889->g_777 , ((*l_778) = p_8)) < (p_889->g_779 == (p_889->g_782[1] = l_780))), (safe_mul_func_int64_t_s_s(l_786, ((safe_lshift_func_uint8_t_u_s(p_889->g_440.f4.f2, 2)) == (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_889->g_664[1][0][5].f0, 5)), ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_799.xx)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_800.sf897)).zwwyzyzw)), 1UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_889->g_801.s7173)))).yyyyzxww)).lo)), 0xED6AL)).s58, ((VECTOR(uint16_t, 4))(p_889->g_802.s0ca9)).even))), ((VECTOR(uint16_t, 16))((p_889->g_753[0].f2 < 0x4AL), ((VECTOR(uint16_t, 8))(1UL)), 0x32AFL, 0x5CC7L, ((VECTOR(uint16_t, 2))(0xC023L)), l_803, 0xFBE0L, 2UL)).sde))), p_8, FAKE_DIVERGE(p_889->local_0_offset, get_local_id(0), 10), p_8, GROUP_DIVERGE(0, 1), 9UL, 0xA4C0L)).s2, p_8)), 12)) , 0x7298L))), p_889->g_440.f2))))))) | 0L);
        return p_889->g_805;
    }
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S0  func_15(int16_t  p_16, int64_t  p_17, struct S0  p_18, struct S7 * p_889)
{ /* block id: 356 */
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_889->g_440.f4.f1 p_889->g_332.f2 p_889->g_506 p_889->g_294 p_889->g_179.f3.f2 p_889->g_179.f0 p_889->g_536 p_889->g_334 p_889->g_231.f6 p_889->g_544 p_889->g_333 p_889->g_332 p_889->g_440.f2 p_889->g_179.f4.f2 p_889->g_562 p_889->g_564 p_889->g_290 p_889->g_566 p_889->g_138 p_889->g_661 p_889->g_664
 * writes: p_889->g_440.f4.f1 p_889->g_231.f6 p_889->g_334 p_889->g_440.f2 p_889->g_179.f4.f2 p_889->g_231.f0 p_889->g_179.f0 p_889->g_661
 */
int16_t * func_21(int16_t * p_22, struct S7 * p_889)
{ /* block id: 264 */
    int64_t l_491 = (-9L);
    int32_t l_500[1];
    int32_t l_505 = (-9L);
    int32_t l_531 = 1L;
    int16_t *l_539 = &p_889->g_179.f4.f1;
    int32_t l_543 = 0x50FC9393L;
    VECTOR(int64_t, 2) l_563 = (VECTOR(int64_t, 2))((-1L), 0L);
    struct S0 l_567 = {0x4E9E9B6AL,0UL,0xBBL,0x3319L,-7L};
    int32_t l_570 = (-10L);
    VECTOR(int32_t, 2) l_619 = (VECTOR(int32_t, 2))(1L, (-2L));
    uint32_t *l_623 = &p_889->g_212;
    VECTOR(uint32_t, 8) l_631 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967294UL), 4294967294UL), 4294967294UL, 1UL, 4294967294UL);
    int32_t l_660 = 1L;
    int i;
    for (i = 0; i < 1; i++)
        l_500[i] = 0x4166D5F6L;
    for (p_889->g_440.f4.f1 = 0; (p_889->g_440.f4.f1 >= 20); p_889->g_440.f4.f1 = safe_add_func_uint8_t_u_u(p_889->g_440.f4.f1, 3))
    { /* block id: 267 */
        int32_t l_490 = 0x43DEDB83L;
        int32_t l_501 = 0x6AB4637AL;
        int32_t l_502 = 9L;
        int32_t l_503[10] = {0x11DA8CDEL,0x581BA05CL,0x11DA8CDEL,0x11DA8CDEL,0x581BA05CL,0x11DA8CDEL,0x11DA8CDEL,0x581BA05CL,0x11DA8CDEL,0x11DA8CDEL};
        uint16_t l_507 = 65535UL;
        int i;
        if (l_490)
        { /* block id: 268 */
            int16_t *l_492 = &p_889->g_329.f3.f1;
            int32_t l_494 = 0L;
            int32_t l_495 = 0L;
            int32_t l_496 = 0x598C61F3L;
            int32_t l_497 = (-1L);
            int32_t l_499 = 0x7A4DDB26L;
            int32_t l_504[2][10] = {{0x78069F4DL,0x3269CAA1L,(-1L),0x3269CAA1L,0x78069F4DL,0x78069F4DL,0x3269CAA1L,(-1L),0x3269CAA1L,0x78069F4DL},{0x78069F4DL,0x3269CAA1L,(-1L),0x3269CAA1L,0x78069F4DL,0x78069F4DL,0x3269CAA1L,(-1L),0x3269CAA1L,0x78069F4DL}};
            union U5 *l_512 = &p_889->g_480;
            int i, j;
            if ((!l_491))
            { /* block id: 269 */
                return l_492;
            }
            else
            { /* block id: 271 */
                int32_t *l_493[8][8] = {{(void*)0,&p_889->g_334,&p_889->g_4,&p_889->g_137,&p_889->g_334,&p_889->g_137,&p_889->g_4,&p_889->g_334},{(void*)0,&p_889->g_334,&p_889->g_4,&p_889->g_137,&p_889->g_334,&p_889->g_137,&p_889->g_4,&p_889->g_334},{(void*)0,&p_889->g_334,&p_889->g_4,&p_889->g_137,&p_889->g_334,&p_889->g_137,&p_889->g_4,&p_889->g_334},{(void*)0,&p_889->g_334,&p_889->g_4,&p_889->g_137,&p_889->g_334,&p_889->g_137,&p_889->g_4,&p_889->g_334},{(void*)0,&p_889->g_334,&p_889->g_4,&p_889->g_137,&p_889->g_334,&p_889->g_137,&p_889->g_4,&p_889->g_334},{(void*)0,&p_889->g_334,&p_889->g_4,&p_889->g_137,&p_889->g_334,&p_889->g_137,&p_889->g_4,&p_889->g_334},{(void*)0,&p_889->g_334,&p_889->g_4,&p_889->g_137,&p_889->g_334,&p_889->g_137,&p_889->g_4,&p_889->g_334},{(void*)0,&p_889->g_334,&p_889->g_4,&p_889->g_137,&p_889->g_334,&p_889->g_137,&p_889->g_4,&p_889->g_334}};
                int i, j;
                l_507++;
                if ((safe_sub_func_uint8_t_u_u(l_491, ((void*)0 == l_512))))
                { /* block id: 273 */
                    int32_t l_523 = 0x559AA943L;
                    int8_t *l_524 = &p_889->g_231.f6;
                    if ((atomic_inc(&p_889->g_atomic_input[57 * get_linear_group_id() + 26]) == 4))
                    { /* block id: 275 */
                        int32_t l_513[3];
                        int8_t l_514 = 0x69L;
                        uint32_t l_515 = 0xA25EEA54L;
                        int8_t l_518 = 0x54L;
                        int32_t l_519 = (-9L);
                        int32_t *l_520[4];
                        int32_t *l_521 = (void*)0;
                        int32_t *l_522 = &l_513[1];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_513[i] = 0L;
                        for (i = 0; i < 4; i++)
                            l_520[i] = (void*)0;
                        --l_515;
                        l_519 &= l_518;
                        l_520[0] = (void*)0;
                        l_522 = l_521;
                        unsigned int result = 0;
                        int l_513_i0;
                        for (l_513_i0 = 0; l_513_i0 < 3; l_513_i0++) {
                            result += l_513[l_513_i0];
                        }
                        result += l_514;
                        result += l_515;
                        result += l_518;
                        result += l_519;
                        atomic_add(&p_889->g_special_values[57 * get_linear_group_id() + 26], result);
                    }
                    else
                    { /* block id: 280 */
                        (1 + 1);
                    }
                    l_531 |= ((l_495 &= ((VECTOR(uint32_t, 16))(((l_523 != ((*l_524) = p_889->g_332[5].f2)) , (safe_mul_func_uint8_t_u_u((l_503[0] < (safe_add_func_uint16_t_u_u(l_502, (l_491 , (p_889->g_506 & ((+((p_889->g_294 , 0xDDC4L) > (safe_sub_func_int64_t_s_s(p_889->g_179.f3.f2, l_496)))) < 8L)))))), 0x39L))), ((VECTOR(uint32_t, 2))(0UL)), ((VECTOR(uint32_t, 2))(4294967289UL)), 0UL, ((VECTOR(uint32_t, 2))(0xD9A6C127L)), p_889->g_179.f0, ((VECTOR(uint32_t, 4))(0xF794C980L)), 0x87308566L, 0UL, 1UL)).s8) | l_500[0]);
                }
                else
                { /* block id: 286 */
                    int32_t **l_533 = &l_493[1][5];
                    (*l_533) = l_493[2][0];
                    (*l_533) = (void*)0;
                    if (l_503[4])
                        continue;
                }
            }
            (*p_889->g_536) &= (&p_889->g_532 != (void*)0);
        }
        else
        { /* block id: 293 */
            for (p_889->g_334 = 0; (p_889->g_334 >= (-7)); p_889->g_334 = safe_sub_func_uint8_t_u_u(p_889->g_334, 5))
            { /* block id: 296 */
                return l_539;
            }
        }
    }
    for (p_889->g_231.f6 = 0; (p_889->g_231.f6 == 6); p_889->g_231.f6++)
    { /* block id: 303 */
        int32_t l_545 = 0x54BF327CL;
        int32_t l_546[4];
        int32_t *l_547 = &p_889->g_37;
        int32_t **l_548 = &l_547;
        int32_t l_603[3];
        VECTOR(int32_t, 4) l_612 = (VECTOR(int32_t, 4))(0x6D0F2528L, (VECTOR(int32_t, 2))(0x6D0F2528L, 0L), 0L);
        VECTOR(int32_t, 16) l_626 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x3F62817CL), 0x3F62817CL), 0x3F62817CL, 5L, 0x3F62817CL, (VECTOR(int32_t, 2))(5L, 0x3F62817CL), (VECTOR(int32_t, 2))(5L, 0x3F62817CL), 5L, 0x3F62817CL, 5L, 0x3F62817CL);
        int16_t l_657[4];
        int64_t l_658 = 0L;
        int i;
        for (i = 0; i < 4; i++)
            l_546[i] = 0x5DD6A7AEL;
        for (i = 0; i < 3; i++)
            l_603[i] = 0x7F89FD2CL;
        for (i = 0; i < 4; i++)
            l_657[i] = 0x402FL;
        (*l_548) = (((((safe_unary_minus_func_uint32_t_u(l_543)) & (((p_889->g_544[1] , (*p_889->g_333)) , 0x04A71E08714DD830L) , l_545)) > 0UL) , l_546[2]) , l_547);
        (*l_548) = &l_500[0];
        for (p_889->g_440.f2 = (-21); (p_889->g_440.f2 != 11); p_889->g_440.f2 = safe_add_func_uint16_t_u_u(p_889->g_440.f2, 5))
        { /* block id: 308 */
            int8_t l_551 = 0x6BL;
            uint64_t *l_556 = &p_889->g_179.f4.f2;
            uint8_t *l_559[8][8][4] = {{{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144}},{{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144}},{{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144}},{{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144}},{{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144}},{{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144}},{{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144}},{{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144},{&p_889->g_144,&p_889->g_231.f2,(void*)0,&p_889->g_144}}};
            int64_t *l_565 = &l_491;
            uint64_t l_571 = 0x05DE7E3182CE60DBL;
            int32_t l_572 = 0x12042570L;
            int32_t l_598 = 0x49EE0D18L;
            int32_t l_599 = 0x3F3C0753L;
            int32_t l_600 = 0L;
            VECTOR(int32_t, 4) l_602 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L));
            uint8_t l_608 = 255UL;
            VECTOR(int32_t, 4) l_617 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2DF84B4EL), 0x2DF84B4EL);
            VECTOR(uint16_t, 8) l_621 = (VECTOR(uint16_t, 8))(0xCE35L, (VECTOR(uint16_t, 4))(0xCE35L, (VECTOR(uint16_t, 2))(0xCE35L, 8UL), 8UL), 8UL, 0xCE35L, 8UL);
            VECTOR(int32_t, 16) l_622 = (VECTOR(int32_t, 16))(0x51C5AAA8L, (VECTOR(int32_t, 4))(0x51C5AAA8L, (VECTOR(int32_t, 2))(0x51C5AAA8L, 1L), 1L), 1L, 0x51C5AAA8L, 1L, (VECTOR(int32_t, 2))(0x51C5AAA8L, 1L), (VECTOR(int32_t, 2))(0x51C5AAA8L, 1L), 0x51C5AAA8L, 1L, 0x51C5AAA8L, 1L);
            int32_t *l_651 = &l_599;
            int32_t *l_652 = &l_603[1];
            int32_t *l_653 = &l_600;
            int32_t *l_654 = &l_572;
            int32_t *l_655 = &l_570;
            int32_t *l_656[8] = {&p_889->g_334,&p_889->g_334,&p_889->g_334,&p_889->g_334,&p_889->g_334,&p_889->g_334,&p_889->g_334,&p_889->g_334};
            int16_t l_659[7] = {(-3L),0x23B5L,(-3L),(-3L),0x23B5L,(-3L),(-3L)};
            int i, j, k;
            (**l_548) = (l_551 = (**l_548));
            atomic_max(&p_889->g_atomic_reduction[get_linear_group_id()], ((safe_sub_func_int32_t_s_s(((*l_547) = (safe_mul_func_uint8_t_u_u((p_889->g_231.f0 = (l_531 ^= (((*p_889->g_333) , ((*l_556)--)) ^ (*l_547)))), (l_572 &= ((l_551 || (((l_570 = (safe_lshift_func_int8_t_s_u((((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_889->g_562.s0634524625776113)).s0f6f)).xzzzyzww)))).s4504247460735526, ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_563.xx)).yyyxxxyyyxyyxyyx)), (int64_t)(((*l_565) = (l_563.y || ((VECTOR(uint64_t, 2))(p_889->g_564.s0c)).lo)) || p_889->g_290[1][2][5]), (int64_t)(0xE07E9CF0A00F554BL <= ((VECTOR(uint64_t, 4))(l_551, ((VECTOR(uint64_t, 2))(p_889->g_566.yx)), 18446744073709551615UL)).y)))), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))((l_567 , ((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0L, (!((safe_mul_func_uint8_t_u_u(((0x9253L < 0UL) | 0xBCBEL), 0L)) , l_567.f2)), 0x6D08L, 0L, 0x4A13L, (-10L), 0x0C29L, (**l_548), (-8L), ((VECTOR(int16_t, 2))((-5L))), 0x6822L, (-5L), 4L, 0x0742L, 0x4CEBL)).s92)).lo < (**l_548)) , l_567.f2)), ((VECTOR(int64_t, 2))(0x0AF7B7CFF6D86167L)), 0x5D147C81A7C9D6F4L)), 0x0584B4B585910AADL, ((VECTOR(int64_t, 2))(0x12CD4ACD3B92DC0EL)), 0x1B634F5BFA6B7C5CL)).lo)), ((VECTOR(int64_t, 4))((-1L)))))).lo)).yxxxxxxyxyxyxyyy))).sc , (-1L)), 5))) & l_571) == l_571)) ^ 0x366EL))))), p_889->g_138)) <= l_571) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_889->v_collective += p_889->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (p_889->g_179.f0 = 29; (p_889->g_179.f0 > 37); ++p_889->g_179.f0)
            { /* block id: 321 */
                VECTOR(uint64_t, 16) l_583 = (VECTOR(uint64_t, 16))(0x9439D0E559B51105L, (VECTOR(uint64_t, 4))(0x9439D0E559B51105L, (VECTOR(uint64_t, 2))(0x9439D0E559B51105L, 0UL), 0UL), 0UL, 0x9439D0E559B51105L, 0UL, (VECTOR(uint64_t, 2))(0x9439D0E559B51105L, 0UL), (VECTOR(uint64_t, 2))(0x9439D0E559B51105L, 0UL), 0x9439D0E559B51105L, 0UL, 0x9439D0E559B51105L, 0UL);
                int32_t l_591 = (-7L);
                int32_t l_592 = 1L;
                VECTOR(int64_t, 8) l_593 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L));
                int32_t l_594 = (-9L);
                int32_t l_595 = 1L;
                int32_t l_601 = 9L;
                int32_t l_604 = (-1L);
                int32_t l_606 = 1L;
                int32_t l_607 = 7L;
                VECTOR(int32_t, 2) l_614 = (VECTOR(int32_t, 2))(0x42D82C95L, 0x1D11FC43L);
                int16_t l_640 = 0x111FL;
                int i;
                (1 + 1);
            }
            p_889->g_661++;
        }
        (*l_547) = (p_889->g_664[1][0][5] , (*l_547));
    }
    return l_539;
}


/* ------------------------------------------ */
/* 
 * reads : p_889->g_32 p_889->g_37 p_889->g_231.f6 p_889->g_138 p_889->g_328.f4.f1 p_889->g_179.f3.f2 p_889->g_179.f3.f1 p_889->g_137 p_889->g_283 p_889->g_44 p_889->g_26.f0 p_889->g_33 p_889->g_440 p_889->g_282.f2 p_889->g_481 p_889->g_482 p_889->g_12
 * writes: p_889->g_37 p_889->g_212 p_889->g_231.f6 p_889->g_138 p_889->g_328.f4.f1 p_889->g_137 p_889->g_33 p_889->g_26.f3 p_889->g_329.f4.f0
 */
int16_t * func_23(struct S0  p_24, uint32_t  p_25, struct S7 * p_889)
{ /* block id: 16 */
    int32_t *l_53 = &p_889->g_37;
    int16_t *l_183 = (void*)0;
    VECTOR(uint64_t, 4) l_189 = (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 18446744073709551615UL), 18446744073709551615UL);
    int32_t l_215 = 0x7612EA23L;
    int32_t l_444 = (-6L);
    int32_t l_447 = (-1L);
    int32_t l_448 = 0x124D0434L;
    int32_t l_450 = 1L;
    int32_t l_452 = 0x374B4BB8L;
    int32_t l_453 = (-6L);
    int32_t l_454 = 0x081EBDE1L;
    uint64_t l_477 = 5UL;
    VECTOR(int64_t, 8) l_483 = (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0x0BA73AC1FCAE3C38L), 0x0BA73AC1FCAE3C38L), 0x0BA73AC1FCAE3C38L, (-2L), 0x0BA73AC1FCAE3C38L);
    int i;
    for (p_25 = 0; (p_25 != 34); p_25++)
    { /* block id: 19 */
        VECTOR(uint16_t, 16) l_43 = (VECTOR(uint16_t, 16))(0xE6FCL, (VECTOR(uint16_t, 4))(0xE6FCL, (VECTOR(uint16_t, 2))(0xE6FCL, 0x58C9L), 0x58C9L), 0x58C9L, 0xE6FCL, 0x58C9L, (VECTOR(uint16_t, 2))(0xE6FCL, 0x58C9L), (VECTOR(uint16_t, 2))(0xE6FCL, 0x58C9L), 0xE6FCL, 0x58C9L, 0xE6FCL, 0x58C9L);
        int32_t l_214 = 0x04796355L;
        int i;
        for (p_24.f3 = 6; (p_24.f3 < 1); --p_24.f3)
        { /* block id: 22 */
            return p_889->g_32[1][6];
        }
        for (p_24.f1 = 0; (p_24.f1 >= 8); ++p_24.f1)
        { /* block id: 27 */
            int32_t *l_36 = &p_889->g_37;
            int16_t *l_54 = &p_889->g_33;
            uint64_t *l_197 = (void*)0;
            uint64_t *l_198 = (void*)0;
            uint64_t *l_199 = (void*)0;
            uint64_t *l_200 = (void*)0;
            uint64_t *l_201 = (void*)0;
            uint64_t *l_202 = (void*)0;
            uint64_t *l_203 = (void*)0;
            uint64_t *l_204[3][9] = {{&p_889->g_179.f3.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2,&p_889->g_179.f3.f2,&p_889->g_179.f3.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2},{&p_889->g_179.f3.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2,&p_889->g_179.f3.f2,&p_889->g_179.f3.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2},{&p_889->g_179.f3.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2,&p_889->g_179.f3.f2,&p_889->g_179.f3.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2,&p_889->g_179.f4.f2}};
            uint32_t *l_211 = &p_889->g_212;
            uint16_t *l_213[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j;
            (*l_36) &= 0x2B8909FFL;
            (*l_36) = func_38(((*l_53) = (safe_rshift_func_uint8_t_u_s(((((*l_211) = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0x56D2926A09395830L, 0x36EAF0AB59A67E99L, 0x55C71DA89A030833L, (p_889->g_334 &= (((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_43.se433)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0x28L, 0x06L, 0x6FL, 249UL)).zywzywzx)).odd, ((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(1UL, 246UL, 0xD9L, ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(0UL, 254UL)).yyyxyxyy, (uint8_t)GROUP_DIVERGE(0, 1)))).s33))).xyyx)).xwwxzxxz, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_889->g_44.s928f)).hi)).xxxyyxxy)))).s56)), ((VECTOR(uint8_t, 2))(255UL, 0x67L)), ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(func_45(func_50(l_53, l_54, p_889), l_183, p_24, ((safe_add_func_uint16_t_u_u((l_214 = (((*l_211) = (safe_unary_minus_func_int16_t_s((safe_sub_func_uint16_t_u_u((((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 8))(l_189.yywzzwxw)).odd, (uint64_t)(safe_mul_func_int8_t_s_s((((VECTOR(int64_t, 2))(p_889->g_192.s7c)).odd > ((((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u((((p_889->g_205 = p_24.f2) & (18446744073709551608UL == (safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s((&l_36 == ((l_54 != p_889->g_32[1][6]) , p_889->g_209[6][4])))) != l_189.x), p_24.f4)))) ^ p_25), 0x23F3548BEFD341B8L)) | p_24.f0), 14)) | FAKE_DIVERGE(p_889->local_0_offset, get_local_id(0), 10)) | p_24.f4) >= 7UL)), p_889->g_179.f3.f1)), (uint64_t)FAKE_DIVERGE(p_889->group_2_offset, get_group_id(2), 10)))).y <= l_43.s5), p_889->g_179.f3.f0))))) & l_43.s3)), l_215)) , (void*)0), p_889), ((VECTOR(uint8_t, 2))(0x86L)), ((VECTOR(uint8_t, 4))(0x63L)), 0UL))))).s30, ((VECTOR(uint8_t, 2))(255UL)))))))).yxxxyyyxyxxyxxxy)).s82, ((VECTOR(uint8_t, 2))(0x8AL))))).xyxyyxxx))).hi, ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 4))(0x59L))))), ((VECTOR(uint8_t, 4))(250UL))))), ((VECTOR(uint8_t, 8))(5UL)), 255UL)).even)), ((VECTOR(uint8_t, 8))(0xDFL))))).s6705245532057776))), ((VECTOR(uint8_t, 16))(1UL))))).sc30f)))))).odd)), 0x4AB1L, 0xDC42L)).z, 0x2ADBL, 0UL, ((VECTOR(uint16_t, 2))(6UL)), ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 4))(0x6B5CL)), 0x0F61L)).s0fc2, ((VECTOR(uint16_t, 4))(0x5BC3L))))).wyyxzyyz)).s5662467312717066, ((VECTOR(uint16_t, 16))(0x5F6EL))))).s0a))))).yxyy, ((VECTOR(uint16_t, 4))(0xEBDBL))))).z && (*l_53))), ((VECTOR(uint64_t, 2))(5UL)), 18446744073709551610UL, 18446744073709551613UL)).s12)).odd ^ p_24.f2)) , l_43.s3) < p_24.f0), 2))), p_24.f3, p_889);
        }
    }
    if ((safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s(p_25, ((+(*l_53)) ^ p_889->g_179.f3.f2))) <= p_889->g_179.f3.f1), (*l_53))))
    { /* block id: 198 */
        int32_t *l_428 = &p_889->g_37;
        struct S3 *l_439 = &p_889->g_440;
        int32_t *l_441[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (p_24.f0 = 0; (p_24.f0 > 26); p_24.f0 = safe_add_func_uint64_t_u_u(p_24.f0, 8))
        { /* block id: 201 */
            int16_t *l_435 = &p_889->g_33;
            uint16_t *l_438 = &p_889->g_26[1].f3;
            if ((atomic_inc(&p_889->l_atomic_input[24]) == 1))
            { /* block id: 203 */
                uint8_t l_359 = 0x7EL;
                uint8_t l_360 = 255UL;
                VECTOR(int32_t, 2) l_367 = (VECTOR(int32_t, 2))(1L, 0x5167262AL);
                int32_t l_421 = 0x4A09B3C3L;
                int8_t l_422 = 0x08L;
                uint64_t l_423 = 18446744073709551615UL;
                int i;
                l_360 = l_359;
                for (l_359 = (-4); (l_359 < 29); ++l_359)
                { /* block id: 207 */
                    struct S0 l_363 = {0x931CC0EFL,2UL,0xC8L,0xF984L,0x51D1570FL};
                    int32_t l_365[3];
                    int32_t *l_364 = &l_365[1];
                    int32_t *l_366[6][3][10] = {{{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]}},{{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]}},{{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]}},{{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]}},{{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]}},{{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]},{(void*)0,&l_365[1],&l_365[0],(void*)0,&l_365[0],&l_365[1],(void*)0,&l_365[1],&l_365[0],&l_365[1]}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_365[i] = (-1L);
                    l_366[2][0][8] = (l_363 , l_364);
                }
                if (((VECTOR(int32_t, 2))(l_367.yx)).hi)
                { /* block id: 210 */
                    VECTOR(int16_t, 8) l_368 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x505CL), 0x505CL), 0x505CL, (-1L), 0x505CL);
                    VECTOR(int8_t, 4) l_369 = (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x60L), 0x60L);
                    VECTOR(int16_t, 4) l_370 = (VECTOR(int16_t, 4))(0x33C9L, (VECTOR(int16_t, 2))(0x33C9L, 0x2385L), 0x2385L);
                    VECTOR(int16_t, 2) l_371 = (VECTOR(int16_t, 2))(1L, (-5L));
                    VECTOR(int16_t, 16) l_372 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x44C0L), 0x44C0L), 0x44C0L, 0L, 0x44C0L, (VECTOR(int16_t, 2))(0L, 0x44C0L), (VECTOR(int16_t, 2))(0L, 0x44C0L), 0L, 0x44C0L, 0L, 0x44C0L);
                    int i;
                    if ((((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(l_368.s1663337576405735)).s658f, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x6B04L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(l_369.xzzywyyxyyzyyyxy)).scb, ((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 4))(7L, (-9L), 5L, 0x30L)).xzxxzyyz))).s10))).yyxxxyyy, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(l_370.yyyzywwzzzzwxyzy)).hi)))))).s02)).xyyx)), (-6L), (-3L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_371.xyxyxyyy)))), (-2L))))).s04d8, ((VECTOR(int16_t, 16))(l_372.s73cff6984c69644b)).sda8c)))))).y , (-1L)))
                    { /* block id: 211 */
                        struct S1 l_373[9][3] = {{{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L},{0x82L,0x06229DF0FF67C84FL,0x29L,0x675E34E6L,0x548A3C77L,0x831B738CL,-1L},{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L}},{{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L},{0x82L,0x06229DF0FF67C84FL,0x29L,0x675E34E6L,0x548A3C77L,0x831B738CL,-1L},{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L}},{{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L},{0x82L,0x06229DF0FF67C84FL,0x29L,0x675E34E6L,0x548A3C77L,0x831B738CL,-1L},{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L}},{{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L},{0x82L,0x06229DF0FF67C84FL,0x29L,0x675E34E6L,0x548A3C77L,0x831B738CL,-1L},{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L}},{{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L},{0x82L,0x06229DF0FF67C84FL,0x29L,0x675E34E6L,0x548A3C77L,0x831B738CL,-1L},{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L}},{{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L},{0x82L,0x06229DF0FF67C84FL,0x29L,0x675E34E6L,0x548A3C77L,0x831B738CL,-1L},{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L}},{{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L},{0x82L,0x06229DF0FF67C84FL,0x29L,0x675E34E6L,0x548A3C77L,0x831B738CL,-1L},{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L}},{{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L},{0x82L,0x06229DF0FF67C84FL,0x29L,0x675E34E6L,0x548A3C77L,0x831B738CL,-1L},{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L}},{{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L},{0x82L,0x06229DF0FF67C84FL,0x29L,0x675E34E6L,0x548A3C77L,0x831B738CL,-1L},{0x9AL,1L,0x48L,7UL,0UL,4UL,0x08L}}};
                        int32_t l_374 = 0L;
                        VECTOR(uint64_t, 4) l_375 = (VECTOR(uint64_t, 4))(0xCED3FC1F2002904FL, (VECTOR(uint64_t, 2))(0xCED3FC1F2002904FL, 1UL), 1UL);
                        VECTOR(uint64_t, 8) l_376 = (VECTOR(uint64_t, 8))(0x0B1CABDCCE7D3FB5L, (VECTOR(uint64_t, 4))(0x0B1CABDCCE7D3FB5L, (VECTOR(uint64_t, 2))(0x0B1CABDCCE7D3FB5L, 0x9FBA29240AD32308L), 0x9FBA29240AD32308L), 0x9FBA29240AD32308L, 0x0B1CABDCCE7D3FB5L, 0x9FBA29240AD32308L);
                        VECTOR(uint64_t, 4) l_377 = (VECTOR(uint64_t, 4))(0x7AA2FA70523B7567L, (VECTOR(uint64_t, 2))(0x7AA2FA70523B7567L, 3UL), 3UL);
                        VECTOR(uint64_t, 8) l_378 = (VECTOR(uint64_t, 8))(0xC53004C585D84885L, (VECTOR(uint64_t, 4))(0xC53004C585D84885L, (VECTOR(uint64_t, 2))(0xC53004C585D84885L, 0x41445CD29F83154AL), 0x41445CD29F83154AL), 0x41445CD29F83154AL, 0xC53004C585D84885L, 0x41445CD29F83154AL);
                        VECTOR(uint64_t, 4) l_379 = (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0UL), 0UL);
                        union U5 l_380 = {1UL};/* VOLATILE GLOBAL l_380 */
                        struct S0 l_381 = {0UL,4UL,0xE5L,0xD89EL,-6L};
                        int8_t l_382 = (-9L);
                        VECTOR(uint64_t, 4) l_383 = (VECTOR(uint64_t, 4))(0x19C1FF5908AFB616L, (VECTOR(uint64_t, 2))(0x19C1FF5908AFB616L, 0x508CA025FEACC6DAL), 0x508CA025FEACC6DAL);
                        VECTOR(uint64_t, 4) l_384 = (VECTOR(uint64_t, 4))(0xA205E78FEACBE15EL, (VECTOR(uint64_t, 2))(0xA205E78FEACBE15EL, 18446744073709551615UL), 18446744073709551615UL);
                        VECTOR(uint64_t, 2) l_385 = (VECTOR(uint64_t, 2))(0xB72933BB712821E9L, 18446744073709551607UL);
                        VECTOR(uint64_t, 2) l_386 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551606UL);
                        VECTOR(uint64_t, 16) l_387 = (VECTOR(uint64_t, 16))(0x1972A57CDB615C94L, (VECTOR(uint64_t, 4))(0x1972A57CDB615C94L, (VECTOR(uint64_t, 2))(0x1972A57CDB615C94L, 0UL), 0UL), 0UL, 0x1972A57CDB615C94L, 0UL, (VECTOR(uint64_t, 2))(0x1972A57CDB615C94L, 0UL), (VECTOR(uint64_t, 2))(0x1972A57CDB615C94L, 0UL), 0x1972A57CDB615C94L, 0UL, 0x1972A57CDB615C94L, 0UL);
                        uint32_t l_388[5] = {1UL,1UL,1UL,1UL,1UL};
                        uint8_t l_389 = 0xBCL;
                        int32_t l_391 = 0x6B70D557L;
                        int32_t *l_390 = &l_391;
                        int32_t *l_392 = &l_391;
                        int i, j;
                        l_392 = (l_373[5][0] , (l_390 = (((VECTOR(uint64_t, 16))(0xDF26AEDD95FD2902L, l_374, 0xC556F8DAED605B91L, ((VECTOR(uint64_t, 16))(l_375.xzzyywwywyzzzwzx)).s9, 0x9A6743CE150014C0L, ((VECTOR(uint64_t, 8))(0x541C9A02B0CB3C9EL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 8))(l_376.s41665420)).s20, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))((l_388[1] = ((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 16))(l_377.xxxwzwyxwxzzxzyz)).s6b, ((VECTOR(uint64_t, 8))(l_378.s26057776)).s55, ((VECTOR(uint64_t, 2))(4UL, 18446744073709551615UL))))).yxxyyyyx))).s3002661721737430, (uint64_t)0UL))))).odd)))).even)).xxzyzzzw, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_379.xxyyzzxyyxzyyzwy)).s6fa6)).yzywyyzz))).s12)))).lo, (l_380 , (l_381 , l_382)), ((VECTOR(uint64_t, 8))(l_383.wyzywzyx)).s6, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 4))(l_384.xwyy)), ((VECTOR(uint64_t, 8))(l_385.xyxyxyyy)).even, ((VECTOR(uint64_t, 8))(l_386.xyyyyxxx)).lo))).odd)), ((VECTOR(uint64_t, 2))(l_387.s21)), 0x06D19C9C9D8CE559L)).s0363611762131333, (uint64_t)0x73EADAFBDADB4494L))).s7), 18446744073709551613UL, 18446744073709551607UL, 0x838E247480E45A62L)), l_389, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0x2A182EAF061B1558L)).s22))), 18446744073709551611UL, 18446744073709551615UL)), 18446744073709551610UL, 0x7059EF1C1EF67E97L, 6UL)), ((VECTOR(uint64_t, 2))(0xAFF16D9346A8A067L)), 0x7562B418B64C8F81L)).s4 , (void*)0)));
                        l_367.y |= 2L;
                    }
                    else
                    { /* block id: 216 */
                        VECTOR(int32_t, 2) l_393 = (VECTOR(int32_t, 2))((-10L), 0x3ECA7CFCL);
                        VECTOR(int32_t, 4) l_394 = (VECTOR(int32_t, 4))(0x1C64B106L, (VECTOR(int32_t, 2))(0x1C64B106L, 0x1956D2CAL), 0x1956D2CAL);
                        VECTOR(uint32_t, 16) l_395 = (VECTOR(uint32_t, 16))(0xCCA20E88L, (VECTOR(uint32_t, 4))(0xCCA20E88L, (VECTOR(uint32_t, 2))(0xCCA20E88L, 5UL), 5UL), 5UL, 0xCCA20E88L, 5UL, (VECTOR(uint32_t, 2))(0xCCA20E88L, 5UL), (VECTOR(uint32_t, 2))(0xCCA20E88L, 5UL), 0xCCA20E88L, 5UL, 0xCCA20E88L, 5UL);
                        int32_t l_396 = 9L;
                        VECTOR(uint32_t, 16) l_397 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x2C3C5834L), 0x2C3C5834L), 0x2C3C5834L, 1UL, 0x2C3C5834L, (VECTOR(uint32_t, 2))(1UL, 0x2C3C5834L), (VECTOR(uint32_t, 2))(1UL, 0x2C3C5834L), 1UL, 0x2C3C5834L, 1UL, 0x2C3C5834L);
                        VECTOR(uint32_t, 8) l_398 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x51864352L), 0x51864352L), 0x51864352L, 0UL, 0x51864352L);
                        VECTOR(uint32_t, 8) l_399 = (VECTOR(uint32_t, 8))(0x2B94EC44L, (VECTOR(uint32_t, 4))(0x2B94EC44L, (VECTOR(uint32_t, 2))(0x2B94EC44L, 0xA0FF2240L), 0xA0FF2240L), 0xA0FF2240L, 0x2B94EC44L, 0xA0FF2240L);
                        VECTOR(uint32_t, 2) l_400 = (VECTOR(uint32_t, 2))(0xE00D1912L, 1UL);
                        VECTOR(uint32_t, 4) l_401 = (VECTOR(uint32_t, 4))(0x55902905L, (VECTOR(uint32_t, 2))(0x55902905L, 4294967290UL), 4294967290UL);
                        int32_t l_402 = 8L;
                        struct S2 l_403 = {-1L,0x7855L,18446744073709551615UL,0x3975L};/* VOLATILE GLOBAL l_403 */
                        VECTOR(uint32_t, 2) l_404 = (VECTOR(uint32_t, 2))(0x896FA061L, 0UL);
                        VECTOR(uint32_t, 16) l_405 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL, (VECTOR(uint32_t, 2))(0UL, 7UL), (VECTOR(uint32_t, 2))(0UL, 7UL), 0UL, 7UL, 0UL, 7UL);
                        VECTOR(uint32_t, 8) l_406 = (VECTOR(uint32_t, 8))(0x933BC6B7L, (VECTOR(uint32_t, 4))(0x933BC6B7L, (VECTOR(uint32_t, 2))(0x933BC6B7L, 7UL), 7UL), 7UL, 0x933BC6B7L, 7UL);
                        uint32_t l_407 = 4294967292UL;
                        int8_t l_408 = (-1L);
                        uint32_t l_409 = 0x3252F919L;
                        union U6 l_410 = {{4294967295UL,0xBF30E249L,7L,{1L,0L,0x7884B7B5C23E183BL,65535UL},{3L,-1L,1UL,65531UL}}};/* VOLATILE GLOBAL l_410 */
                        union U4 l_412 = {0L};/* VOLATILE GLOBAL l_412 */
                        union U4 *l_411 = &l_412;
                        union U4 *l_413 = &l_412;
                        int i;
                        l_413 = ((((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_393.yxxyyxyx)).s02, ((VECTOR(int32_t, 16))(l_394.xywwxzxwzywyyxzy)).sec))).yxyy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_395.sdf29b417)).s2, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(l_396, ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 8))(l_397.s111ca660)).even, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_398.s1520506257222502)).s18)).xxxx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 8))(l_399.s06712126))))), ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(l_400.yxxx)).zywxyzxyzxxyyzzy, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(l_401.yw)), (uint32_t)0xA993241DL, (uint32_t)(l_402 , (l_403 , 4294967295UL))))).xxxyxyxyyyxyyxyy))).sb5, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(9UL, 0x6716D169L)), 1UL, 1UL)).hi))), 5UL, 5UL, 0x7AFE907BL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_404.yyyy)).hi)), 0UL)).sdb25))).yyxywyxy, ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_405.s71)), 0x0A02F65DL, 0x40E072FCL)).xzxzwzyw, (uint32_t)((VECTOR(uint32_t, 4))(l_406.s0120)).w)))))).s53)).xxyy))), 0xAA2D01DEL, 0xFD1B7B00L, 0x82E5A85EL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x1E2B5A86L, 1UL)))), l_407, FAKE_DIVERGE(p_889->global_0_offset, get_global_id(0), 10), l_408, l_409, 0xC7A9B8FFL, 0xD9EE1A3BL)).s281c, ((VECTOR(uint32_t, 4))(0xCFBD534EL))))).xzwyzyzy)).s56)), ((VECTOR(uint32_t, 4))(0xC4F4880AL)), 0xC7141335L)).s37)).xyxx))).y , l_410) , l_411);
                    }
                }
                else
                { /* block id: 219 */
                    int32_t l_414[5][3] = {{0x49D2A04EL,0x49D2A04EL,0x49D2A04EL},{0x49D2A04EL,0x49D2A04EL,0x49D2A04EL},{0x49D2A04EL,0x49D2A04EL,0x49D2A04EL},{0x49D2A04EL,0x49D2A04EL,0x49D2A04EL},{0x49D2A04EL,0x49D2A04EL,0x49D2A04EL}};
                    uint32_t l_420 = 1UL;
                    int i, j;
                    for (l_414[3][1] = (-3); (l_414[3][1] == 29); l_414[3][1] = safe_add_func_int16_t_s_s(l_414[3][1], 1))
                    { /* block id: 222 */
                        union U4 l_418 = {0x5323698BL};/* VOLATILE GLOBAL l_418 */
                        union U4 *l_417 = &l_418;
                        union U4 *l_419 = &l_418;
                        l_419 = l_417;
                    }
                    l_367.y |= l_420;
                }
                l_423++;
                unsigned int result = 0;
                result += l_359;
                result += l_360;
                result += l_367.y;
                result += l_367.x;
                result += l_421;
                result += l_422;
                result += l_423;
                atomic_add(&p_889->l_special_values[24], result);
            }
            else
            { /* block id: 228 */
                (1 + 1);
            }
            for (p_889->g_137 = (-9); (p_889->g_137 <= (-12)); p_889->g_137 = safe_sub_func_uint8_t_u_u(p_889->g_137, 9))
            { /* block id: 233 */
                l_428 = l_428;
            }
            (*l_53) = (l_53 == ((((((void*)0 == p_889->g_283) , 0x694DFDF1L) | ((((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((*l_435) |= ((safe_sub_func_int64_t_s_s(0L, p_889->g_44.s3)) & p_889->g_26[1].f0)) == (p_24.f4 , ((*l_438) = (safe_rshift_func_uint8_t_u_s(((*l_53) > 0x8FL), (*l_53)))))), 0x38574A42C776DBFCL)), 0)) , (void*)0) != l_439) | 0x0959F2424E4AFBCBL)) | p_24.f1) , l_441[1]));
        }
        for (p_889->g_328.f4.f1 = (-18); (p_889->g_328.f4.f1 <= 12); p_889->g_328.f4.f1 = safe_add_func_int32_t_s_s(p_889->g_328.f4.f1, 5))
        { /* block id: 242 */
            int32_t l_449[2][8][9] = {{{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L}},{{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L},{0L,0x5330631DL,(-10L),0L,0x51710339L,0L,(-10L),0x5330631DL,0L}}};
            int8_t l_451 = (-1L);
            int8_t l_476 = 0x31L;
            int i, j, k;
            (*l_428) ^= l_444;
            for (p_24.f1 = 7; (p_24.f1 >= 2); --p_24.f1)
            { /* block id: 246 */
                uint16_t l_455 = 0x3E95L;
                struct S3 **l_467 = (void*)0;
                struct S3 ***l_466 = &l_467;
                --l_455;
                for (p_889->g_137 = 18; (p_889->g_137 > (-30)); p_889->g_137 = safe_sub_func_uint16_t_u_u(p_889->g_137, 1))
                { /* block id: 250 */
                    struct S1 *l_460 = &p_889->g_282;
                    struct S3 **l_464 = &l_439;
                    struct S3 ***l_463[4] = {&l_464,&l_464,&l_464,&l_464};
                    struct S3 ****l_465 = &l_463[3];
                    VECTOR(uint16_t, 2) l_468 = (VECTOR(uint16_t, 2))(0x5EBAL, 0UL);
                    int64_t *l_475 = &p_889->g_329.f4.f0;
                    int i;
                    l_476 ^= (((+(((l_460 == ((safe_rshift_func_int8_t_s_s((0x578ED2DDA7152616L > ((VECTOR(int64_t, 2))(0x6D887294365B540AL, 3L)).odd), 2)) , &p_889->g_232)) & (((*l_465) = l_463[3]) != l_466)) != (((*l_439) , l_455) == (((VECTOR(uint16_t, 2))(l_468.xx)).lo , (safe_mul_func_int8_t_s_s(((p_25 < ((safe_mul_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((((+((*l_475) = p_24.f3)) , 0x6F71L) ^ (*l_53)), 0x7AL)) == l_468.y) & 0L), 1UL)) <= p_889->g_282.f2)) >= 5L), 0x9EL)))))) , p_24.f4) && p_24.f4);
                }
                if (l_477)
                    continue;
            }
        }
    }
    else
    { /* block id: 258 */
        union U5 *l_479[8];
        union U5 **l_478 = &l_479[4];
        int32_t l_484 = (-7L);
        VECTOR(int64_t, 2) l_485 = (VECTOR(int64_t, 2))(0x306EBD3F069AB16CL, 0x5DD836ABDD023C99L);
        VECTOR(int64_t, 8) l_486 = (VECTOR(int64_t, 8))(0x2F9FDEBE46D86E4FL, (VECTOR(int64_t, 4))(0x2F9FDEBE46D86E4FL, (VECTOR(int64_t, 2))(0x2F9FDEBE46D86E4FL, 0x6FA9FC696753ECFAL), 0x6FA9FC696753ECFAL), 0x6FA9FC696753ECFAL, 0x2F9FDEBE46D86E4FL, 0x6FA9FC696753ECFAL);
        volatile struct S3 *l_487 = &p_889->g_256[2];
        int i;
        for (i = 0; i < 8; i++)
            l_479[i] = &p_889->g_480;
        (*l_478) = (void*)0;
        l_487 = ((p_25 ^ ((p_889->g_481 , p_889->g_482) , ((*l_53) < ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(l_483.s7707334631031514)).s7e, (int64_t)p_889->g_12, (int64_t)(p_25 , l_484)))))).yxxxyxyy, ((VECTOR(int64_t, 4))(l_485.yxxy)).zyyyywzw, ((VECTOR(int64_t, 8))(l_486.s03616225))))).s2))) , &p_889->g_256[1]);
        (*l_53) &= (~p_24.f4);
    }
    return &p_889->g_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_889->g_231.f6 p_889->g_138 p_889->g_328.f4.f1
 * writes: p_889->g_231.f6 p_889->g_138 p_889->g_328.f4.f1
 */
int32_t  func_38(int32_t  p_39, int32_t  p_40, struct S7 * p_889)
{ /* block id: 177 */
    VECTOR(uint64_t, 8) l_350 = (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xC51F7F5B7E7C5208L), 0xC51F7F5B7E7C5208L), 0xC51F7F5B7E7C5208L, 18446744073709551606UL, 0xC51F7F5B7E7C5208L);
    int i;
    for (p_889->g_231.f6 = (-5); (p_889->g_231.f6 >= (-20)); --p_889->g_231.f6)
    { /* block id: 180 */
        uint64_t l_341 = 18446744073709551609UL;
        for (p_889->g_138 = 27; (p_889->g_138 > (-30)); p_889->g_138 = safe_sub_func_int64_t_s_s(p_889->g_138, 2))
        { /* block id: 183 */
            int8_t l_344 = 0x5DL;
            int32_t *l_345 = &p_889->g_37;
            int32_t *l_346 = &p_889->g_137;
            int32_t l_347 = 0x27786C95L;
            int32_t *l_348 = &p_889->g_334;
            int32_t *l_349[8];
            int i;
            for (i = 0; i < 8; i++)
                l_349[i] = &l_347;
            for (p_889->g_328.f4.f1 = 0; (p_889->g_328.f4.f1 >= (-26)); p_889->g_328.f4.f1 = safe_sub_func_int8_t_s_s(p_889->g_328.f4.f1, 2))
            { /* block id: 186 */
                ++l_341;
            }
            atomic_min(&p_889->g_atomic_reduction[get_linear_group_id()], p_40 + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_889->v_collective += p_889->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            l_350.s0--;
        }
        return p_40;
    }
    return l_350.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_889->g_137 p_889->g_37 p_889->g_179.f0 p_889->g_179.f4.f2 p_889->g_231 p_889->g_232 p_889->g_237 p_889->g_233 p_889->g_256 p_889->g_26.f0 p_889->g_281 p_889->g_283 p_889->g_212 p_889->g_282.f2 p_889->g_289 p_889->g_290 p_889->g_179.f3.f0 p_889->g_315 p_889->g_12 p_889->g_4 p_889->g_328 p_889->g_332 p_889->g_333
 * writes: p_889->g_137 p_889->g_37 p_889->g_179.f0 p_889->g_179.f4.f2 p_889->g_233 p_889->g_239 p_889->g_269 p_889->g_139 p_889->g_231.f6 p_889->g_212 p_889->g_290 p_889->g_294 p_889->g_282.f6 p_889->g_179.f3.f0 p_889->g_149 p_889->g_179.f3.f2 p_889->g_329 p_889->g_231.f0 p_889->g_332
 */
uint8_t  func_45(int16_t * p_46, int16_t * p_47, struct S0  p_48, int16_t * p_49, struct S7 * p_889)
{ /* block id: 91 */
    int32_t *l_225[8][8][3] = {{{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12}},{{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12}},{{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12}},{{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12}},{{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12}},{{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12}},{{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12}},{{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12},{&p_889->g_4,&p_889->g_12,&p_889->g_12}}};
    int32_t ***l_235 = &p_889->g_209[6][4];
    struct S1 *l_278 = (void*)0;
    VECTOR(int8_t, 16) l_303 = (VECTOR(int8_t, 16))(0x01L, (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, 1L), 1L), 1L, 0x01L, 1L, (VECTOR(int8_t, 2))(0x01L, 1L), (VECTOR(int8_t, 2))(0x01L, 1L), 0x01L, 1L, 0x01L, 1L);
    int i, j, k;
    for (p_889->g_137 = (-10); (p_889->g_137 == (-2)); p_889->g_137 = safe_add_func_uint64_t_u_u(p_889->g_137, 5))
    { /* block id: 94 */
        struct S3 **l_227 = (void*)0;
        int32_t ***l_238 = &p_889->g_209[6][4];
        VECTOR(int16_t, 8) l_270 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0FA8L), 0x0FA8L), 0x0FA8L, 0L, 0x0FA8L);
        struct S1 *l_279 = (void*)0;
        int i;
        for (p_48.f2 = 16; (p_48.f2 < 54); p_48.f2 = safe_add_func_uint16_t_u_u(p_48.f2, 4))
        { /* block id: 97 */
            int32_t *l_220 = &p_889->g_37;
            struct S3 **l_221 = &p_889->g_149;
            VECTOR(int16_t, 2) l_271 = (VECTOR(int16_t, 2))(0x3722L, 0L);
            int i;
            if (((*l_220) ^= 2L))
            { /* block id: 99 */
                int32_t *l_254 = (void*)0;
                int32_t l_255 = 0x1D8D233EL;
                uint16_t *l_266 = &p_889->g_139;
                int32_t *l_276 = &p_889->g_137;
                uint32_t *l_284 = &p_889->g_212;
                int8_t *l_291[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t *l_292 = (void*)0;
                uint32_t *l_293 = &p_889->g_294;
                int i, j;
                (*l_220) = p_48.f4;
                if ((l_221 != l_221))
                { /* block id: 101 */
                    int32_t **l_226 = &l_225[1][7][0];
                    struct S3 ***l_228 = &l_221;
                    for (p_889->g_179.f0 = 0; (p_889->g_179.f0 <= 38); p_889->g_179.f0 = safe_add_func_uint8_t_u_u(p_889->g_179.f0, 2))
                    { /* block id: 104 */
                        int32_t l_224 = 0L;
                        if (l_224)
                            break;
                        if (p_48.f4)
                            break;
                    }
                    (*l_226) = l_225[0][2][0];
                    (*l_220) &= (&p_889->g_122 == ((*l_228) = l_227));
                }
                else
                { /* block id: 111 */
                    int64_t l_234 = 0L;
                    uint16_t *l_268 = &p_889->g_131;
                    uint16_t **l_267[2];
                    int32_t *l_277 = &l_255;
                    int8_t *l_280 = &p_889->g_231.f6;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_267[i] = &l_268;
                    for (p_889->g_179.f4.f2 = (-8); (p_889->g_179.f4.f2 > 34); p_889->g_179.f4.f2 = safe_add_func_int16_t_s_s(p_889->g_179.f4.f2, 2))
                    { /* block id: 114 */
                        int32_t ****l_236[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        volatile struct S1 *l_240 = &p_889->g_233;
                        int i;
                        l_225[2][6][0] = (p_889->g_231 , (void*)0);
                        p_889->g_233 = p_889->g_232;
                        (*l_220) = (l_234 < ((l_235 = l_235) == (p_889->g_239[3][1][2] = (p_889->g_237[0][4] , l_238))));
                        (*l_240) = p_889->g_233;
                    }
                    if ((atomic_inc(&p_889->g_atomic_input[57 * get_linear_group_id() + 17]) == 1))
                    { /* block id: 123 */
                        int32_t l_241 = (-7L);
                        int32_t l_242 = 0x1F9AEE05L;
                        VECTOR(int32_t, 8) l_243 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x27EC4DDAL), 0x27EC4DDAL), 0x27EC4DDAL, (-1L), 0x27EC4DDAL);
                        int32_t l_244 = 0x33CB2E22L;
                        uint32_t l_245 = 0UL;
                        VECTOR(int32_t, 2) l_246 = (VECTOR(int32_t, 2))(6L, 0L);
                        int64_t l_247 = (-7L);
                        uint8_t l_248[8] = {255UL,0x89L,255UL,255UL,0x89L,255UL,255UL,0x89L};
                        int16_t l_249 = 0x5C6CL;
                        VECTOR(uint32_t, 8) l_250 = (VECTOR(uint32_t, 8))(0x30052219L, (VECTOR(uint32_t, 4))(0x30052219L, (VECTOR(uint32_t, 2))(0x30052219L, 0x0F49DFCFL), 0x0F49DFCFL), 0x0F49DFCFL, 0x30052219L, 0x0F49DFCFL);
                        VECTOR(int32_t, 2) l_251 = (VECTOR(int32_t, 2))(1L, (-1L));
                        VECTOR(int32_t, 4) l_252 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 1L), 1L);
                        int32_t l_253 = 0x51D2FAF8L;
                        int i;
                        l_242 |= l_241;
                        l_253 = ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(0x5DCAA069L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_243.s57)).yyxxxxxyxxyyyyyx)).even, ((VECTOR(int32_t, 8))(1L, l_244, (l_245 , (-6L)), 0x12EFA34EL, ((VECTOR(int32_t, 4))(l_246.xyyx))))))).s0, ((VECTOR(int32_t, 2))(0x7F47E2E7L, 0L)), (-1L))).lo, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(0x39C060ADL, ((VECTOR(int32_t, 2))(4L, 1L)), ((VECTOR(int32_t, 4))(l_247, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(1L, 0L, (-9L), 0x399A0AECL, 0x5442FCBCL, (l_248[2] ^= 8L), ((l_250.s3 = l_249) , ((VECTOR(int32_t, 8))(l_251.yxxyxxyy)).s2), 0x3967E32BL, ((VECTOR(int32_t, 8))(l_252.wxxyxwyw)))).s07, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x4907A83FL, 0x03FBA52BL)).xyxxyxxxxxyyxyyx)).s9, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x2B780F72L, 0x4310BBCFL)), 0x149AE534L, 0x7A7EEC75L)).ywwzwzxxyzzyzyxw)).s27d1)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))((-1L), 0x29A293F6L, (-1L), 0x57B3824CL)).xwwzxyzxyzzyyywx, ((VECTOR(int32_t, 16))(1L))))).sd9, ((VECTOR(int32_t, 2))(0x3B120FD1L))))), 0x54657B57L, 1L)).yxwwzywz)), 1L, (-1L), 5L, 0x356F1739L)).s5, 0x56947012L, ((VECTOR(int32_t, 8))(1L)), (-1L), ((VECTOR(int32_t, 4))(0x50EAC3A3L)), 3L)).s60, ((VECTOR(int32_t, 2))(1L))))).yyyyyyxx, ((VECTOR(int32_t, 8))((-6L)))))).even)), 0x6F62464DL, 3L, 0x63531944L)).s76))), 0x5E2F1190L)), (-1L))).s13, ((VECTOR(int32_t, 2))(9L)))))))))), 0x45D0225BL)).xywzzwzz, ((VECTOR(int32_t, 8))(0L))))).s0;
                        unsigned int result = 0;
                        result += l_241;
                        result += l_242;
                        result += l_243.s7;
                        result += l_243.s6;
                        result += l_243.s5;
                        result += l_243.s4;
                        result += l_243.s3;
                        result += l_243.s2;
                        result += l_243.s1;
                        result += l_243.s0;
                        result += l_244;
                        result += l_245;
                        result += l_246.y;
                        result += l_246.x;
                        result += l_247;
                        int l_248_i0;
                        for (l_248_i0 = 0; l_248_i0 < 8; l_248_i0++) {
                            result += l_248[l_248_i0];
                        }
                        result += l_249;
                        result += l_250.s7;
                        result += l_250.s6;
                        result += l_250.s5;
                        result += l_250.s4;
                        result += l_250.s3;
                        result += l_250.s2;
                        result += l_250.s1;
                        result += l_250.s0;
                        result += l_251.y;
                        result += l_251.x;
                        result += l_252.w;
                        result += l_252.z;
                        result += l_252.y;
                        result += l_252.x;
                        result += l_253;
                        atomic_add(&p_889->g_special_values[57 * get_linear_group_id() + 17], result);
                    }
                    else
                    { /* block id: 128 */
                        (1 + 1);
                    }
                    l_254 = l_254;
                    (*l_220) = (((l_255 , ((p_889->g_256[2] , GROUP_DIVERGE(0, 1)) == ((safe_sub_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u(((p_48.f1 , ((safe_unary_minus_func_uint32_t_u(GROUP_DIVERGE(2, 1))) < ((((*l_280) = (safe_lshift_func_int16_t_s_u((l_266 != (p_889->g_269 = p_47)), ((*l_266) = ((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_270.s5500614417603674)).odd)).s6671233763372122)).odd)), ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(l_271.xy)).xyyxxxxy, (int16_t)(safe_lshift_func_uint8_t_u_u((p_889->g_179.f0 , (safe_lshift_func_int8_t_s_u(((l_276 == (l_277 = &l_255)) > ((l_278 != l_279) <= 1L)), 7))), p_889->g_26[1].f0))))), ((VECTOR(int16_t, 8))(0x406DL))))).s50, ((VECTOR(int16_t, 2))(0x1F22L)), ((VECTOR(int16_t, 2))(5L))))).yyyy, ((VECTOR(int16_t, 4))((-7L)))))).odd))).hi)))) , l_278) != p_889->g_281[0][5]))) , 0x06B9E29AD657C292L), 0x219F553E666A5D62L)) ^ 0x3111L), p_48.f2)) != 18446744073709551611UL), FAKE_DIVERGE(p_889->group_2_offset, get_group_id(2), 10))) != 0x9CL))) , (void*)0) == p_889->g_283);
                }
                if (l_270.s4)
                    break;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_889->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u((p_889->g_256[2].f3.f1 < (p_889->g_282.f6 = ((--(*l_284)) | (+((p_889->g_290[1][2][5] &= (((+(safe_mul_func_int8_t_s_s((&l_235 != &l_235), p_889->g_282.f2))) < (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_889->g_289.xxyxxyyy)).lo)).xyzwwyxx)).s2 | 0x28L)) <= 4294967295UL)) || ((*l_293) = ((p_889->g_231.f6 = ((void*)0 == &p_889->g_122)) > 3L))))))), 10))][(safe_mod_func_uint32_t_u_u(p_889->tid, 2))]));
            }
            else
            { /* block id: 147 */
                uint64_t l_297 = 18446744073709551615UL;
                (*l_220) &= (safe_div_func_uint16_t_u_u(65532UL, (+(0x49C7F3C7L <= (6L < l_297)))));
                return p_48.f3;
            }
            for (p_889->g_179.f3.f0 = 8; (p_889->g_179.f3.f0 > (-18)); p_889->g_179.f3.f0 = safe_sub_func_uint32_t_u_u(p_889->g_179.f3.f0, 2))
            { /* block id: 153 */
                VECTOR(int8_t, 4) l_300 = (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, (-5L)), (-5L));
                int32_t *l_314 = &p_889->g_4;
                VECTOR(uint32_t, 2) l_316 = (VECTOR(uint32_t, 2))(0xFFB6D117L, 4UL);
                struct S3 *l_317 = &p_889->g_179;
                struct S3 **l_318 = &l_317;
                struct S3 **l_319 = &p_889->g_149;
                uint32_t *l_323[1][9][2] = {{{&p_889->g_294,&p_889->g_294},{&p_889->g_294,&p_889->g_294},{&p_889->g_294,&p_889->g_294},{&p_889->g_294,&p_889->g_294},{&p_889->g_294,&p_889->g_294},{&p_889->g_294,&p_889->g_294},{&p_889->g_294,&p_889->g_294},{&p_889->g_294,&p_889->g_294},{&p_889->g_294,&p_889->g_294}}};
                uint32_t **l_322 = &l_323[0][4][1];
                int32_t l_324 = 0x79EF7070L;
                uint64_t *l_325 = (void*)0;
                uint64_t *l_326[3];
                int32_t l_327 = 8L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_326[i] = (void*)0;
                (*l_220) = (p_48.f1 >= p_48.f0);
                l_327 = (l_300.z > (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_303.s91593d3e56773e46)).sf, (safe_sub_func_uint64_t_u_u((p_889->g_179.f3.f2 = (safe_mul_func_uint16_t_u_u(p_48.f0, ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((p_48.f3 | (safe_mul_func_uint16_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4UL, 8UL)), 6UL, ((void*)0 == l_314), p_48.f3, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x84DA04BAL, 0x364305D0L)), 0UL, 0x4053C0D0L)).hi)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x07420DEEL, 4294967292UL)).yxxyxxyx)).s70))), 0x3182B652L)).s2152350571152730, ((VECTOR(uint32_t, 16))(p_889->g_315.s1262263035516171))))).sc3)).xyyx))), ((VECTOR(uint32_t, 2))(l_316.yx)), 0xD9942291L, 4294967291UL)), 4294967295UL, 0UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x55D227EEL, 8UL)), 0x9D763D55L, 1UL)), 4UL, 0x6D4718C7L)).hi)), (((*l_318) = l_317) != ((*l_319) = (void*)0)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(6UL, (((*l_220) = (((safe_lshift_func_uint8_t_u_s((((*l_322) = l_314) == &p_889->g_212), 1)) >= p_48.f1) || p_889->g_12)) < (*l_314)), 0UL, 0x187F81E8L)).yyywzwzy))).s13)))), ((VECTOR(uint32_t, 2))(0x9DEC1BE3L)), ((VECTOR(uint32_t, 2))(4294967295UL)), 5UL)).s5 ^ p_48.f1), (*l_314)))), l_324)) , 0x03L), GROUP_DIVERGE(2, 1))) & p_48.f3)))), 0x5FD1509206DD438CL)))));
                p_889->g_329 = p_889->g_328;
            }
            (*l_220) &= p_48.f4;
        }
        for (p_889->g_231.f0 = 0; (p_889->g_231.f0 <= 28); ++p_889->g_231.f0)
        { /* block id: 167 */
            if (p_48.f2)
                break;
            (*p_889->g_333) = p_889->g_332[5];
            return p_889->g_233.f0;
        }
    }
    return p_48.f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_889->g_33 p_889->g_37 p_889->g_3 p_889->g_26 p_889->g_4 p_889->g_122 p_889->g_131 p_889->g_139 p_889->g_138 p_889->g_144 p_889->g_148 p_889->g_149 p_889->g_179 p_889->g_comm_values p_889->g_181
 * writes: p_889->g_33 p_889->g_37 p_889->g_122 p_889->g_131 p_889->g_139 p_889->g_138 p_889->g_144 p_889->g_149 p_889->g_137 p_889->g_148
 */
int16_t * func_50(int32_t * p_51, int16_t * p_52, struct S7 * p_889)
{ /* block id: 29 */
    VECTOR(int32_t, 8) l_58 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-9L)), (-9L)), (-9L), 0L, (-9L));
    int32_t l_59 = 7L;
    int32_t l_60 = 0x007C168BL;
    int32_t l_61 = 0x2529581CL;
    int32_t l_62 = 0x6CC2D129L;
    int32_t l_63 = 0x54612A8CL;
    int32_t l_64 = 0x12859F96L;
    int32_t l_65 = 0x4324F1CCL;
    int32_t l_66 = 1L;
    uint32_t l_67 = 7UL;
    uint64_t l_71 = 5UL;
    uint8_t l_81 = 6UL;
    uint64_t *l_164 = (void*)0;
    uint64_t *l_165 = (void*)0;
    uint64_t *l_166[10] = {&l_71,&l_71,&l_71,&l_71,&l_71,&l_71,&l_71,&l_71,&l_71,&l_71};
    int32_t l_167 = 8L;
    int32_t l_168 = 0x30C17D96L;
    int32_t l_169 = 0x218CAF6FL;
    int32_t l_170 = 0x167B81A4L;
    int32_t l_171 = 1L;
    int32_t l_172 = 4L;
    int32_t l_173 = 3L;
    int32_t l_174 = 0x5AF29524L;
    VECTOR(uint16_t, 2) l_177 = (VECTOR(uint16_t, 2))(65529UL, 65529UL);
    struct S3 *l_178 = &p_889->g_179;
    struct S3 **l_180 = &p_889->g_149;
    int16_t *l_182 = &p_889->g_179.f3.f1;
    int i;
    for (p_889->g_33 = (-14); (p_889->g_33 != 17); p_889->g_33 = safe_add_func_uint64_t_u_u(p_889->g_33, 7))
    { /* block id: 32 */
        int32_t *l_57[2][1];
        int64_t l_70 = 1L;
        VECTOR(int32_t, 8) l_74 = (VECTOR(int32_t, 8))(0x53CE469CL, (VECTOR(int32_t, 4))(0x53CE469CL, (VECTOR(int32_t, 2))(0x53CE469CL, 0x452267D0L), 0x452267D0L), 0x452267D0L, 0x53CE469CL, 0x452267D0L);
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_57[i][j] = &p_889->g_37;
        }
        ++l_67;
        l_71--;
        (*p_51) ^= ((VECTOR(int32_t, 2))(l_74.s64)).hi;
    }
    (*p_889->g_181) = (safe_sub_func_int32_t_s_s(((*p_51) ^= 0x2390A414L), ((safe_rshift_func_int16_t_s_s(func_79(l_81, p_889), 11)) || (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s(l_64, (l_61 || l_58.s1))), ((((safe_lshift_func_uint8_t_u_u((+(((++p_889->g_148.y) != (((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_177.xyyxxxxy)).s3301273341255414)).s5 ^ (l_178 == ((*l_180) = l_178))) && ((*p_889->g_149) , p_889->g_comm_values[p_889->tid])) < (-1L))) , GROUP_DIVERGE(2, 1))), 7)) ^ (*p_52)) != l_174) || l_64))), l_58.s5)))));
    return l_182;
}


/* ------------------------------------------ */
/* 
 * reads : p_889->g_3 p_889->g_26 p_889->g_4 p_889->g_122 p_889->g_131 p_889->g_139 p_889->g_138 p_889->g_144 p_889->g_148 p_889->g_149
 * writes: p_889->g_33 p_889->g_122 p_889->g_131 p_889->g_139 p_889->g_138 p_889->g_144 p_889->g_149 p_889->g_137
 */
int16_t  func_79(uint32_t  p_80, struct S7 * p_889)
{ /* block id: 38 */
    VECTOR(int32_t, 16) l_82 = (VECTOR(int32_t, 16))(0x4FB06A0BL, (VECTOR(int32_t, 4))(0x4FB06A0BL, (VECTOR(int32_t, 2))(0x4FB06A0BL, (-1L)), (-1L)), (-1L), 0x4FB06A0BL, (-1L), (VECTOR(int32_t, 2))(0x4FB06A0BL, (-1L)), (VECTOR(int32_t, 2))(0x4FB06A0BL, (-1L)), 0x4FB06A0BL, (-1L), 0x4FB06A0BL, (-1L));
    int32_t *l_93 = &p_889->g_4;
    VECTOR(uint16_t, 2) l_100 = (VECTOR(uint16_t, 2))(0UL, 3UL);
    VECTOR(uint16_t, 2) l_101 = (VECTOR(uint16_t, 2))(5UL, 1UL);
    int32_t *l_110 = &p_889->g_4;
    VECTOR(int64_t, 4) l_151 = (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x4F80C1E263753532L), 0x4F80C1E263753532L);
    int32_t *l_152 = &p_889->g_137;
    int i;
    (*l_152) = ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(9L, 0x60DC513BL)), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x53CD2F62L)), (-8L), (-10L))), 0x75A68AA9L, ((VECTOR(int32_t, 2))(l_82.s01)), 0x5F95FD10L)), (int32_t)(l_82.s6 >= (safe_mul_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(p_889->g_3, ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 8))(0x04L, (func_87(l_93, (p_889->g_26[1] , ((((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(9UL, ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(0xC0EDBB19L, 0x435D5771L)).xxxxyyxx, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(l_100.yyxy)).zwxwwwwzzwyxyzzx, ((VECTOR(uint16_t, 16))(l_101.xyxyxyyxyxxyyxyy))))).lo)).even, (uint32_t)((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((*l_93) , (void*)0) == (void*)0), p_80)), p_80)) || (*l_93)) < (*l_93)) != 0UL), p_80)) >= (*l_93)), (*l_93))) , 0UL)))).zzzxwyxz, ((VECTOR(uint32_t, 8))(1UL))))).s1)), p_80)), 0x4045D3C7L)) , 0x71L) != 0x38L) , 0UL)), l_110, p_80, p_80, p_889) >= p_80), 0x63L, 0x38L, (*l_93), 6L, 1L, 9L)), (int8_t)p_80, (int8_t)0x16L))).s52))).even)) ^ l_151.z) , p_80), (*l_110))))))).s74))))), ((VECTOR(int32_t, 2))(0x50F7EA90L))))).xyyx, ((VECTOR(int32_t, 4))(0x305CA375L))))).w;
    if ((atomic_inc(&p_889->g_atomic_input[57 * get_linear_group_id() + 48]) == 1))
    { /* block id: 77 */
        int8_t l_153[5][2][5] = {{{2L,(-1L),0L,0L,0x76L},{2L,(-1L),0L,0L,0x76L}},{{2L,(-1L),0L,0L,0x76L},{2L,(-1L),0L,0L,0x76L}},{{2L,(-1L),0L,0L,0x76L},{2L,(-1L),0L,0L,0x76L}},{{2L,(-1L),0L,0L,0x76L},{2L,(-1L),0L,0L,0x76L}},{{2L,(-1L),0L,0L,0x76L},{2L,(-1L),0L,0L,0x76L}}};
        int32_t l_154 = 1L;
        int32_t l_155 = (-1L);
        int i, j, k;
        l_155 ^= (l_154 = l_153[2][1][4]);
        unsigned int result = 0;
        int l_153_i0, l_153_i1, l_153_i2;
        for (l_153_i0 = 0; l_153_i0 < 5; l_153_i0++) {
            for (l_153_i1 = 0; l_153_i1 < 2; l_153_i1++) {
                for (l_153_i2 = 0; l_153_i2 < 5; l_153_i2++) {
                    result += l_153[l_153_i0][l_153_i1][l_153_i2];
                }
            }
        }
        result += l_154;
        result += l_155;
        atomic_add(&p_889->g_special_values[57 * get_linear_group_id() + 48], result);
    }
    else
    { /* block id: 80 */
        (1 + 1);
    }
    return (*l_110);
}


/* ------------------------------------------ */
/* 
 * reads : p_889->g_26.f1 p_889->g_122 p_889->g_131 p_889->g_139 p_889->g_138 p_889->g_4 p_889->g_144 p_889->g_148 p_889->g_149 p_889->g_26.f4
 * writes: p_889->g_33 p_889->g_122 p_889->g_131 p_889->g_139 p_889->g_138 p_889->g_144 p_889->g_149 p_889->g_137
 */
uint32_t  func_87(int32_t * p_88, uint32_t  p_89, int32_t * p_90, uint16_t  p_91, int32_t  p_92, struct S7 * p_889)
{ /* block id: 39 */
    int32_t **l_111 = (void*)0;
    int32_t *l_113 = &p_889->g_12;
    int32_t **l_112 = &l_113;
    int16_t *l_127[8] = {&p_889->g_33,&p_889->g_33,&p_889->g_33,&p_889->g_33,&p_889->g_33,&p_889->g_33,&p_889->g_33,&p_889->g_33};
    int16_t *l_129 = &p_889->g_33;
    int64_t l_130[6] = {8L,8L,8L,8L,8L,8L};
    int32_t *l_136[8][7] = {{&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4},{&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4},{&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4},{&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4},{&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4},{&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4},{&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4},{&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4,&p_889->g_137,&p_889->g_4,&p_889->g_4}};
    int i, j;
    (*l_112) = &p_889->g_12;
    for (p_92 = (-14); (p_92 <= 10); ++p_92)
    { /* block id: 43 */
        int32_t ***l_134 = &l_112;
        for (p_89 = 0; (p_89 != 6); ++p_89)
        { /* block id: 46 */
            if (p_889->g_26[1].f1)
                break;
        }
        p_88 = p_90;
        for (p_889->g_33 = 0; (p_889->g_33 != (-24)); p_889->g_33 = safe_sub_func_uint32_t_u_u(p_889->g_33, 5))
        { /* block id: 52 */
            int64_t *l_124 = (void*)0;
            int64_t *l_125[1][3][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_126[9] = {0L,8L,0L,0L,8L,0L,0L,8L,0L};
            int16_t **l_128 = (void*)0;
            int i, j, k;
            for (p_91 = 0; (p_91 != 52); p_91++)
            { /* block id: 55 */
                volatile struct S3 **l_123 = &p_889->g_122;
                (*l_123) = p_889->g_122;
            }
            l_130[5] = ((l_126[3] &= 0x31907E6BEB08D429L) < ((l_127[7] = l_127[5]) != (p_91 , l_129)));
            p_889->g_131--;
        }
        (*l_134) = &p_90;
    }
    p_889->g_139++;
    for (p_889->g_138 = 17; (p_889->g_138 <= 10); p_889->g_138 = safe_sub_func_int64_t_s_s(p_889->g_138, 9))
    { /* block id: 68 */
        VECTOR(uint64_t, 2) l_147 = (VECTOR(uint64_t, 2))(0x6B0A23445CF57BC3L, 0x89702E9BE69E52E5L);
        struct S3 **l_150 = &p_889->g_149;
        int i;
        if ((*p_90))
            break;
        --p_889->g_144;
        p_889->g_137 = (((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_147.yyyxyxyy)).s5577043356560367)).saf, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_889->g_148.xyyy)).zwyxzxyx)).s35))).odd < (((*l_150) = p_889->g_149) != p_889->g_122));
    }
    return p_889->g_26[1].f4;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S7 c_890;
    struct S7* p_889 = &c_890;
    struct S7 c_891 = {
        8L, // p_889->g_2
        1L, // p_889->g_3
        0x5AD94E8FL, // p_889->g_4
        0x7F8CD3BEL, // p_889->g_12
        0L, // p_889->g_20
        {{4294967295UL,0xF95848308FAA83FBL,9UL,0x70A1L,-3L},{4294967295UL,0xF95848308FAA83FBL,9UL,0x70A1L,-3L},{4294967295UL,0xF95848308FAA83FBL,9UL,0x70A1L,-3L},{4294967295UL,0xF95848308FAA83FBL,9UL,0x70A1L,-3L},{4294967295UL,0xF95848308FAA83FBL,9UL,0x70A1L,-3L},{4294967295UL,0xF95848308FAA83FBL,9UL,0x70A1L,-3L}}, // p_889->g_26
        0x0246L, // p_889->g_33
        {{&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33},{&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33},{&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33},{&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33},{&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33,(void*)0,&p_889->g_33,&p_889->g_33,&p_889->g_33}}, // p_889->g_32
        0x0CFADBACL, // p_889->g_37
        (VECTOR(uint8_t, 16))(0x97L, (VECTOR(uint8_t, 4))(0x97L, (VECTOR(uint8_t, 2))(0x97L, 246UL), 246UL), 246UL, 0x97L, 246UL, (VECTOR(uint8_t, 2))(0x97L, 246UL), (VECTOR(uint8_t, 2))(0x97L, 246UL), 0x97L, 246UL, 0x97L, 246UL), // p_889->g_44
        (void*)0, // p_889->g_122
        0x4300L, // p_889->g_131
        (-2L), // p_889->g_135
        0x4E2E87BEL, // p_889->g_137
        0x01C9L, // p_889->g_138
        6UL, // p_889->g_139
        0xDDL, // p_889->g_144
        (VECTOR(uint64_t, 2))(1UL, 0x6345F6C1FB7A5768L), // p_889->g_148
        (void*)0, // p_889->g_149
        {4294967293UL,0xED4FC664L,0x7B201579L,{0x0966509481357879L,0x2DBBL,0x373CEC42E94AF868L,65535UL},{-1L,0x225EL,0x8F92758EFBC765FFL,0x329AL}}, // p_889->g_179
        &p_889->g_137, // p_889->g_181
        (VECTOR(int64_t, 16))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L), (VECTOR(int64_t, 2))(9L, (-1L)), (VECTOR(int64_t, 2))(9L, (-1L)), 9L, (-1L), 9L, (-1L)), // p_889->g_192
        0x1CA2B82AL, // p_889->g_205
        {{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}},{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}},{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}},{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}},{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}},{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}},{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}},{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}},{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}},{{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4},{&p_889->g_12,&p_889->g_4}}}, // p_889->g_210
        {{&p_889->g_210[7][5][0],&p_889->g_210[5][1][0],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],(void*)0,&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1]},{&p_889->g_210[7][5][0],&p_889->g_210[5][1][0],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],(void*)0,&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1]},{&p_889->g_210[7][5][0],&p_889->g_210[5][1][0],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],(void*)0,&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1]},{&p_889->g_210[7][5][0],&p_889->g_210[5][1][0],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],(void*)0,&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1]},{&p_889->g_210[7][5][0],&p_889->g_210[5][1][0],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],(void*)0,&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1]},{&p_889->g_210[7][5][0],&p_889->g_210[5][1][0],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],(void*)0,&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1]},{&p_889->g_210[7][5][0],&p_889->g_210[5][1][0],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],(void*)0,&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1]},{&p_889->g_210[7][5][0],&p_889->g_210[5][1][0],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],(void*)0,&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1]}}, // p_889->g_209
        0x9B188DA3L, // p_889->g_212
        {0xF3L,-5L,0x95L,4294967295UL,4294967291UL,0xC981E794L,0x56L}, // p_889->g_231
        {3UL,0L,0x18L,0xF7C297B8L,0x6B586D94L,0x151376F2L,0x44L}, // p_889->g_232
        {0x63L,1L,0xCFL,0UL,0x0EF95768L,0xBE3EF9C9L,0x55L}, // p_889->g_233
        {{{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL}}}, // p_889->g_237
        {{{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]}},{{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]}},{{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]}},{{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]}},{{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]},{&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[6][4],&p_889->g_209[7][2]}}}, // p_889->g_239
        {{5UL,4294967286UL,0x1DB65A71L,{0x47E68FB0DBA5ACDDL,0x0045L,6UL,0x9AF1L},{0x67241B832FB84948L,1L,0UL,0xE852L}},{5UL,4294967286UL,0x1DB65A71L,{0x47E68FB0DBA5ACDDL,0x0045L,6UL,0x9AF1L},{0x67241B832FB84948L,1L,0UL,0xE852L}},{5UL,4294967286UL,0x1DB65A71L,{0x47E68FB0DBA5ACDDL,0x0045L,6UL,0x9AF1L},{0x67241B832FB84948L,1L,0UL,0xE852L}},{5UL,4294967286UL,0x1DB65A71L,{0x47E68FB0DBA5ACDDL,0x0045L,6UL,0x9AF1L},{0x67241B832FB84948L,1L,0UL,0xE852L}}}, // p_889->g_256
        (void*)0, // p_889->g_269
        {0xC2L,0L,0UL,0xA7388A2AL,0x69D36941L,0x652E78C9L,7L}, // p_889->g_282
        {{&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282},{&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282},{&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282,&p_889->g_282}}, // p_889->g_281
        (void*)0, // p_889->g_283
        (VECTOR(uint8_t, 2))(0x93L, 0UL), // p_889->g_289
        {{{3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L}},{{3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L}}}, // p_889->g_290
        0x005A5602L, // p_889->g_294
        (VECTOR(uint32_t, 8))(0x25096C6FL, (VECTOR(uint32_t, 4))(0x25096C6FL, (VECTOR(uint32_t, 2))(0x25096C6FL, 0x3B764972L), 0x3B764972L), 0x3B764972L, 0x25096C6FL, 0x3B764972L), // p_889->g_315
        {4294967295UL,0UL,0x17A7DE28L,{0x3BCB2381BBB57777L,6L,18446744073709551615UL,0xCFB5L},{0x1B8BC6B3AAE569DFL,0x0A9AL,1UL,0x1FA1L}}, // p_889->g_328
        {0xFA880154L,0UL,0L,{1L,0x656DL,0x46E57411B6CACAE9L,0x3182L},{0x45AD507E42EB2ACDL,0L,0x4835FD16A828E597L,0x0E1FL}}, // p_889->g_329
        {{0x52L,0x27277EEC87AE34F9L,0UL,0UL,0UL,0x07A15293L,0x18L},{0x52L,0x27277EEC87AE34F9L,0UL,0UL,0UL,0x07A15293L,0x18L},{0x52L,0x27277EEC87AE34F9L,0UL,0UL,0UL,0x07A15293L,0x18L},{0x52L,0x27277EEC87AE34F9L,0UL,0UL,0UL,0x07A15293L,0x18L},{0x52L,0x27277EEC87AE34F9L,0UL,0UL,0UL,0x07A15293L,0x18L},{0x52L,0x27277EEC87AE34F9L,0UL,0UL,0UL,0x07A15293L,0x18L}}, // p_889->g_332
        &p_889->g_332[5], // p_889->g_333
        0x07BE547BL, // p_889->g_334
        {2UL,0x985D61D8L,0x1D608DF1L,{0x4EF2153001618649L,0x7D02L,0x6690C44D8147ED2AL,65532UL},{6L,-1L,0x8BED1D4121B45632L,0UL}}, // p_889->g_440
        {0x6FE72E23L}, // p_889->g_480
        {{1UL,4294967295UL,0L,{-6L,1L,0x3E60E6D1893D1C9AL,0x6D34L},{-10L,-1L,18446744073709551613UL,0x3B29L}}}, // p_889->g_481
        {255UL,0x11620369288C2661L,0x14L,0UL,4294967295UL,0xA52B5AFEL,0x3DL}, // p_889->g_482
        0x3DL, // p_889->g_498
        (-1L), // p_889->g_506
        (void*)0, // p_889->g_532
        {&p_889->g_137,&p_889->g_137,&p_889->g_137,&p_889->g_137,&p_889->g_137,&p_889->g_137,&p_889->g_137,&p_889->g_137,&p_889->g_137}, // p_889->g_534
        (void*)0, // p_889->g_535
        &p_889->g_334, // p_889->g_536
        {{0x48972EF19EED7570L,0x2702L,0x45552D843A999661L,65535UL},{0x48972EF19EED7570L,0x2702L,0x45552D843A999661L,65535UL},{0x48972EF19EED7570L,0x2702L,0x45552D843A999661L,65535UL},{0x48972EF19EED7570L,0x2702L,0x45552D843A999661L,65535UL},{0x48972EF19EED7570L,0x2702L,0x45552D843A999661L,65535UL},{0x48972EF19EED7570L,0x2702L,0x45552D843A999661L,65535UL},{0x48972EF19EED7570L,0x2702L,0x45552D843A999661L,65535UL},{0x48972EF19EED7570L,0x2702L,0x45552D843A999661L,65535UL},{0x48972EF19EED7570L,0x2702L,0x45552D843A999661L,65535UL}}, // p_889->g_544
        (VECTOR(int64_t, 8))(0x3A82E41F66F799CEL, (VECTOR(int64_t, 4))(0x3A82E41F66F799CEL, (VECTOR(int64_t, 2))(0x3A82E41F66F799CEL, 0x234BD2FC5819B615L), 0x234BD2FC5819B615L), 0x234BD2FC5819B615L, 0x3A82E41F66F799CEL, 0x234BD2FC5819B615L), // p_889->g_562
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL), // p_889->g_564
        (VECTOR(uint64_t, 2))(0xC42FFC60965E096FL, 1UL), // p_889->g_566
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 8UL), 8UL), 8UL, 1UL, 8UL), // p_889->g_581
        (VECTOR(int32_t, 16))(0x0C65DEB2L, (VECTOR(int32_t, 4))(0x0C65DEB2L, (VECTOR(int32_t, 2))(0x0C65DEB2L, (-3L)), (-3L)), (-3L), 0x0C65DEB2L, (-3L), (VECTOR(int32_t, 2))(0x0C65DEB2L, (-3L)), (VECTOR(int32_t, 2))(0x0C65DEB2L, (-3L)), 0x0C65DEB2L, (-3L), 0x0C65DEB2L, (-3L)), // p_889->g_611
        (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x6CD1BD48L), 0x6CD1BD48L), 0x6CD1BD48L, (-5L), 0x6CD1BD48L), // p_889->g_613
        (VECTOR(int32_t, 4))(0x76ECAF2BL, (VECTOR(int32_t, 2))(0x76ECAF2BL, 1L), 1L), // p_889->g_615
        {0x6FC9D54E887CB75EL,0x559DL,0xDC20B2B5E4894C5CL,3UL}, // p_889->g_618
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), // p_889->g_624
        (VECTOR(int32_t, 2))((-1L), 0x55C0DCD0L), // p_889->g_625
        0xC671L, // p_889->g_641
        0x9998C237L, // p_889->g_646
        {{{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}}},{{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}},{{0x5C355C7C6D78A415L,-8L,0xFC1CC58BD4C90ADBL,0x69E4L}}}}, // p_889->g_649
        &p_889->g_179.f3, // p_889->g_650
        0xE83396A1L, // p_889->g_661
        {{{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}}},{{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}}},{{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}}},{{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}}},{{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}}},{{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}}},{{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}},{{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{0x59L,0x061367A66F2900E4L,0x9AL,0xEBE6989AL,0x7C33555CL,1UL,0x02L},{0xD0L,0x3885132E480F1AADL,252UL,0xD5FA6E21L,0x8369DE77L,1UL,0x40L},{0xDEL,0L,0xB6L,0xD6369009L,0UL,0x9923068BL,1L},{255UL,0L,0xC6L,0UL,0UL,0xF8F1BBB3L,0x20L},{0x69L,0x3A81A5205F40A69EL,249UL,1UL,0x9B29F042L,0xF7BB1A72L,-1L}}}}, // p_889->g_664
        (VECTOR(int16_t, 4))(0x796FL, (VECTOR(int16_t, 2))(0x796FL, (-1L)), (-1L)), // p_889->g_668
        {246UL,0x649DC545243BC84FL,0x4DL,0UL,0xCCB2E82EL,4294967286UL,0x74L}, // p_889->g_683
        {{0x48F11190C88BD3ADL,6L,0UL,0xE157L},{-1L,-1L,18446744073709551612UL,0x23D1L},{0x48F11190C88BD3ADL,6L,0UL,0xE157L},{0x48F11190C88BD3ADL,6L,0UL,0xE157L},{-1L,-1L,18446744073709551612UL,0x23D1L},{0x48F11190C88BD3ADL,6L,0UL,0xE157L}}, // p_889->g_685
        (VECTOR(int32_t, 16))(0x5EB3A2A9L, (VECTOR(int32_t, 4))(0x5EB3A2A9L, (VECTOR(int32_t, 2))(0x5EB3A2A9L, 0x05251645L), 0x05251645L), 0x05251645L, 0x5EB3A2A9L, 0x05251645L, (VECTOR(int32_t, 2))(0x5EB3A2A9L, 0x05251645L), (VECTOR(int32_t, 2))(0x5EB3A2A9L, 0x05251645L), 0x5EB3A2A9L, 0x05251645L, 0x5EB3A2A9L, 0x05251645L), // p_889->g_692
        (-3L), // p_889->g_699
        {{{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]}},{{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]}},{{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]}},{{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]}},{{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]}},{{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]}},{{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]}},{{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]},{&p_889->g_210[9][5][1],&p_889->g_210[3][7][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1],&p_889->g_210[3][7][1],&p_889->g_210[1][6][1]}}}, // p_889->g_723
        &p_889->g_210[4][8][0], // p_889->g_725
        (VECTOR(uint64_t, 4))(0x50F53DB71B562A81L, (VECTOR(uint64_t, 2))(0x50F53DB71B562A81L, 18446744073709551608UL), 18446744073709551608UL), // p_889->g_735
        (VECTOR(uint8_t, 8))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0x48L), 0x48L), 0x48L, 4UL, 0x48L), // p_889->g_743
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_889->g_744
        {0x87L,1L,0xBDL,0xCE62C9E4L,0xC6BD6F07L,0x11E74AE1L,0L}, // p_889->g_746
        {{0x19840658L,3UL,2L,{0x0BEAA258800ED731L,5L,0xD6B4011EEB7E7158L,0xA3A0L},{-1L,0x3FB2L,18446744073709551614UL,0xDAF9L}}}, // p_889->g_749
        {{255UL,0x54866F262A1A5847L,0x0DL,6UL,4294967295UL,0x094F3EBDL,3L},{255UL,0x54866F262A1A5847L,0x0DL,6UL,4294967295UL,0x094F3EBDL,3L},{255UL,0x54866F262A1A5847L,0x0DL,6UL,4294967295UL,0x094F3EBDL,3L},{255UL,0x54866F262A1A5847L,0x0DL,6UL,4294967295UL,0x094F3EBDL,3L},{255UL,0x54866F262A1A5847L,0x0DL,6UL,4294967295UL,0x094F3EBDL,3L}}, // p_889->g_753
        {0x66403DEC7673364FL,-1L,0xC84BD4610FCDA9B8L,0x7084L}, // p_889->g_755
        {{0x37E51315L},{0x37E51315L},{0x37E51315L},{0x37E51315L},{0x37E51315L},{0x37E51315L},{0x37E51315L},{0x37E51315L}}, // p_889->g_764
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1D6312F4L), 0x1D6312F4L), 0x1D6312F4L, 0L, 0x1D6312F4L), // p_889->g_766
        &p_889->g_137, // p_889->g_774
        {0xE5907EB6L,0x269B81B4L,0x08360409L,{-1L,0x5979L,18446744073709551615UL,65535UL},{0x285D4F48139E24B6L,0x0215L,0UL,1UL}}, // p_889->g_777
        (void*)0, // p_889->g_779
        &p_889->g_149, // p_889->g_783
        {&p_889->g_783,&p_889->g_783,&p_889->g_783,&p_889->g_783}, // p_889->g_782
        (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 65531UL), 65531UL), 65531UL, 65528UL, 65531UL), // p_889->g_801
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x3BDFL), 0x3BDFL), 0x3BDFL, 1UL, 0x3BDFL, (VECTOR(uint16_t, 2))(1UL, 0x3BDFL), (VECTOR(uint16_t, 2))(1UL, 0x3BDFL), 1UL, 0x3BDFL, 1UL, 0x3BDFL), // p_889->g_802
        0xD3L, // p_889->g_805
        {0xD46E7949L,9UL,-8L,{0x56B24CDF549568F7L,1L,18446744073709551615UL,65535UL},{0x409A8110B0ED3D97L,1L,0x09220C6A176FBD8EL,65530UL}}, // p_889->g_806
        {0xDC247348L,0xDE261B59L,4L,{1L,-8L,0x248DE25DDFC1C956L,0xE603L},{8L,0x36BEL,0xD40426195197C89CL,0x0161L}}, // p_889->g_807
        0, // p_889->v_collective
        sequence_input[get_global_id(0)], // p_889->global_0_offset
        sequence_input[get_global_id(1)], // p_889->global_1_offset
        sequence_input[get_global_id(2)], // p_889->global_2_offset
        sequence_input[get_local_id(0)], // p_889->local_0_offset
        sequence_input[get_local_id(1)], // p_889->local_1_offset
        sequence_input[get_local_id(2)], // p_889->local_2_offset
        sequence_input[get_group_id(0)], // p_889->group_0_offset
        sequence_input[get_group_id(1)], // p_889->group_1_offset
        sequence_input[get_group_id(2)], // p_889->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_889->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_890 = c_891;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_889);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_889->g_2, "p_889->g_2", print_hash_value);
    transparent_crc(p_889->g_3, "p_889->g_3", print_hash_value);
    transparent_crc(p_889->g_4, "p_889->g_4", print_hash_value);
    transparent_crc(p_889->g_12, "p_889->g_12", print_hash_value);
    transparent_crc(p_889->g_20, "p_889->g_20", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_889->g_26[i].f0, "p_889->g_26[i].f0", print_hash_value);
        transparent_crc(p_889->g_26[i].f1, "p_889->g_26[i].f1", print_hash_value);
        transparent_crc(p_889->g_26[i].f2, "p_889->g_26[i].f2", print_hash_value);
        transparent_crc(p_889->g_26[i].f3, "p_889->g_26[i].f3", print_hash_value);
        transparent_crc(p_889->g_26[i].f4, "p_889->g_26[i].f4", print_hash_value);

    }
    transparent_crc(p_889->g_33, "p_889->g_33", print_hash_value);
    transparent_crc(p_889->g_37, "p_889->g_37", print_hash_value);
    transparent_crc(p_889->g_44.s0, "p_889->g_44.s0", print_hash_value);
    transparent_crc(p_889->g_44.s1, "p_889->g_44.s1", print_hash_value);
    transparent_crc(p_889->g_44.s2, "p_889->g_44.s2", print_hash_value);
    transparent_crc(p_889->g_44.s3, "p_889->g_44.s3", print_hash_value);
    transparent_crc(p_889->g_44.s4, "p_889->g_44.s4", print_hash_value);
    transparent_crc(p_889->g_44.s5, "p_889->g_44.s5", print_hash_value);
    transparent_crc(p_889->g_44.s6, "p_889->g_44.s6", print_hash_value);
    transparent_crc(p_889->g_44.s7, "p_889->g_44.s7", print_hash_value);
    transparent_crc(p_889->g_44.s8, "p_889->g_44.s8", print_hash_value);
    transparent_crc(p_889->g_44.s9, "p_889->g_44.s9", print_hash_value);
    transparent_crc(p_889->g_44.sa, "p_889->g_44.sa", print_hash_value);
    transparent_crc(p_889->g_44.sb, "p_889->g_44.sb", print_hash_value);
    transparent_crc(p_889->g_44.sc, "p_889->g_44.sc", print_hash_value);
    transparent_crc(p_889->g_44.sd, "p_889->g_44.sd", print_hash_value);
    transparent_crc(p_889->g_44.se, "p_889->g_44.se", print_hash_value);
    transparent_crc(p_889->g_44.sf, "p_889->g_44.sf", print_hash_value);
    transparent_crc(p_889->g_131, "p_889->g_131", print_hash_value);
    transparent_crc(p_889->g_135, "p_889->g_135", print_hash_value);
    transparent_crc(p_889->g_137, "p_889->g_137", print_hash_value);
    transparent_crc(p_889->g_138, "p_889->g_138", print_hash_value);
    transparent_crc(p_889->g_139, "p_889->g_139", print_hash_value);
    transparent_crc(p_889->g_144, "p_889->g_144", print_hash_value);
    transparent_crc(p_889->g_148.x, "p_889->g_148.x", print_hash_value);
    transparent_crc(p_889->g_148.y, "p_889->g_148.y", print_hash_value);
    transparent_crc(p_889->g_179.f0, "p_889->g_179.f0", print_hash_value);
    transparent_crc(p_889->g_179.f1, "p_889->g_179.f1", print_hash_value);
    transparent_crc(p_889->g_179.f2, "p_889->g_179.f2", print_hash_value);
    transparent_crc(p_889->g_179.f3.f0, "p_889->g_179.f3.f0", print_hash_value);
    transparent_crc(p_889->g_179.f3.f1, "p_889->g_179.f3.f1", print_hash_value);
    transparent_crc(p_889->g_179.f3.f2, "p_889->g_179.f3.f2", print_hash_value);
    transparent_crc(p_889->g_179.f3.f3, "p_889->g_179.f3.f3", print_hash_value);
    transparent_crc(p_889->g_179.f4.f0, "p_889->g_179.f4.f0", print_hash_value);
    transparent_crc(p_889->g_179.f4.f1, "p_889->g_179.f4.f1", print_hash_value);
    transparent_crc(p_889->g_179.f4.f2, "p_889->g_179.f4.f2", print_hash_value);
    transparent_crc(p_889->g_179.f4.f3, "p_889->g_179.f4.f3", print_hash_value);
    transparent_crc(p_889->g_192.s0, "p_889->g_192.s0", print_hash_value);
    transparent_crc(p_889->g_192.s1, "p_889->g_192.s1", print_hash_value);
    transparent_crc(p_889->g_192.s2, "p_889->g_192.s2", print_hash_value);
    transparent_crc(p_889->g_192.s3, "p_889->g_192.s3", print_hash_value);
    transparent_crc(p_889->g_192.s4, "p_889->g_192.s4", print_hash_value);
    transparent_crc(p_889->g_192.s5, "p_889->g_192.s5", print_hash_value);
    transparent_crc(p_889->g_192.s6, "p_889->g_192.s6", print_hash_value);
    transparent_crc(p_889->g_192.s7, "p_889->g_192.s7", print_hash_value);
    transparent_crc(p_889->g_192.s8, "p_889->g_192.s8", print_hash_value);
    transparent_crc(p_889->g_192.s9, "p_889->g_192.s9", print_hash_value);
    transparent_crc(p_889->g_192.sa, "p_889->g_192.sa", print_hash_value);
    transparent_crc(p_889->g_192.sb, "p_889->g_192.sb", print_hash_value);
    transparent_crc(p_889->g_192.sc, "p_889->g_192.sc", print_hash_value);
    transparent_crc(p_889->g_192.sd, "p_889->g_192.sd", print_hash_value);
    transparent_crc(p_889->g_192.se, "p_889->g_192.se", print_hash_value);
    transparent_crc(p_889->g_192.sf, "p_889->g_192.sf", print_hash_value);
    transparent_crc(p_889->g_205, "p_889->g_205", print_hash_value);
    transparent_crc(p_889->g_212, "p_889->g_212", print_hash_value);
    transparent_crc(p_889->g_231.f0, "p_889->g_231.f0", print_hash_value);
    transparent_crc(p_889->g_231.f1, "p_889->g_231.f1", print_hash_value);
    transparent_crc(p_889->g_231.f2, "p_889->g_231.f2", print_hash_value);
    transparent_crc(p_889->g_231.f3, "p_889->g_231.f3", print_hash_value);
    transparent_crc(p_889->g_231.f4, "p_889->g_231.f4", print_hash_value);
    transparent_crc(p_889->g_231.f5, "p_889->g_231.f5", print_hash_value);
    transparent_crc(p_889->g_231.f6, "p_889->g_231.f6", print_hash_value);
    transparent_crc(p_889->g_232.f0, "p_889->g_232.f0", print_hash_value);
    transparent_crc(p_889->g_232.f1, "p_889->g_232.f1", print_hash_value);
    transparent_crc(p_889->g_232.f2, "p_889->g_232.f2", print_hash_value);
    transparent_crc(p_889->g_232.f3, "p_889->g_232.f3", print_hash_value);
    transparent_crc(p_889->g_232.f4, "p_889->g_232.f4", print_hash_value);
    transparent_crc(p_889->g_232.f5, "p_889->g_232.f5", print_hash_value);
    transparent_crc(p_889->g_232.f6, "p_889->g_232.f6", print_hash_value);
    transparent_crc(p_889->g_233.f0, "p_889->g_233.f0", print_hash_value);
    transparent_crc(p_889->g_233.f1, "p_889->g_233.f1", print_hash_value);
    transparent_crc(p_889->g_233.f2, "p_889->g_233.f2", print_hash_value);
    transparent_crc(p_889->g_233.f3, "p_889->g_233.f3", print_hash_value);
    transparent_crc(p_889->g_233.f4, "p_889->g_233.f4", print_hash_value);
    transparent_crc(p_889->g_233.f5, "p_889->g_233.f5", print_hash_value);
    transparent_crc(p_889->g_233.f6, "p_889->g_233.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_889->g_237[i][j].f0, "p_889->g_237[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_889->g_256[i].f0, "p_889->g_256[i].f0", print_hash_value);
        transparent_crc(p_889->g_256[i].f1, "p_889->g_256[i].f1", print_hash_value);
        transparent_crc(p_889->g_256[i].f2, "p_889->g_256[i].f2", print_hash_value);
        transparent_crc(p_889->g_256[i].f3.f0, "p_889->g_256[i].f3.f0", print_hash_value);
        transparent_crc(p_889->g_256[i].f3.f1, "p_889->g_256[i].f3.f1", print_hash_value);
        transparent_crc(p_889->g_256[i].f3.f2, "p_889->g_256[i].f3.f2", print_hash_value);
        transparent_crc(p_889->g_256[i].f3.f3, "p_889->g_256[i].f3.f3", print_hash_value);
        transparent_crc(p_889->g_256[i].f4.f0, "p_889->g_256[i].f4.f0", print_hash_value);
        transparent_crc(p_889->g_256[i].f4.f1, "p_889->g_256[i].f4.f1", print_hash_value);
        transparent_crc(p_889->g_256[i].f4.f2, "p_889->g_256[i].f4.f2", print_hash_value);
        transparent_crc(p_889->g_256[i].f4.f3, "p_889->g_256[i].f4.f3", print_hash_value);

    }
    transparent_crc(p_889->g_282.f0, "p_889->g_282.f0", print_hash_value);
    transparent_crc(p_889->g_282.f1, "p_889->g_282.f1", print_hash_value);
    transparent_crc(p_889->g_282.f2, "p_889->g_282.f2", print_hash_value);
    transparent_crc(p_889->g_282.f3, "p_889->g_282.f3", print_hash_value);
    transparent_crc(p_889->g_282.f4, "p_889->g_282.f4", print_hash_value);
    transparent_crc(p_889->g_282.f5, "p_889->g_282.f5", print_hash_value);
    transparent_crc(p_889->g_282.f6, "p_889->g_282.f6", print_hash_value);
    transparent_crc(p_889->g_289.x, "p_889->g_289.x", print_hash_value);
    transparent_crc(p_889->g_289.y, "p_889->g_289.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_889->g_290[i][j][k], "p_889->g_290[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_889->g_294, "p_889->g_294", print_hash_value);
    transparent_crc(p_889->g_315.s0, "p_889->g_315.s0", print_hash_value);
    transparent_crc(p_889->g_315.s1, "p_889->g_315.s1", print_hash_value);
    transparent_crc(p_889->g_315.s2, "p_889->g_315.s2", print_hash_value);
    transparent_crc(p_889->g_315.s3, "p_889->g_315.s3", print_hash_value);
    transparent_crc(p_889->g_315.s4, "p_889->g_315.s4", print_hash_value);
    transparent_crc(p_889->g_315.s5, "p_889->g_315.s5", print_hash_value);
    transparent_crc(p_889->g_315.s6, "p_889->g_315.s6", print_hash_value);
    transparent_crc(p_889->g_315.s7, "p_889->g_315.s7", print_hash_value);
    transparent_crc(p_889->g_328.f0, "p_889->g_328.f0", print_hash_value);
    transparent_crc(p_889->g_328.f1, "p_889->g_328.f1", print_hash_value);
    transparent_crc(p_889->g_328.f2, "p_889->g_328.f2", print_hash_value);
    transparent_crc(p_889->g_328.f3.f0, "p_889->g_328.f3.f0", print_hash_value);
    transparent_crc(p_889->g_328.f3.f1, "p_889->g_328.f3.f1", print_hash_value);
    transparent_crc(p_889->g_328.f3.f2, "p_889->g_328.f3.f2", print_hash_value);
    transparent_crc(p_889->g_328.f3.f3, "p_889->g_328.f3.f3", print_hash_value);
    transparent_crc(p_889->g_328.f4.f0, "p_889->g_328.f4.f0", print_hash_value);
    transparent_crc(p_889->g_328.f4.f1, "p_889->g_328.f4.f1", print_hash_value);
    transparent_crc(p_889->g_328.f4.f2, "p_889->g_328.f4.f2", print_hash_value);
    transparent_crc(p_889->g_328.f4.f3, "p_889->g_328.f4.f3", print_hash_value);
    transparent_crc(p_889->g_329.f0, "p_889->g_329.f0", print_hash_value);
    transparent_crc(p_889->g_329.f1, "p_889->g_329.f1", print_hash_value);
    transparent_crc(p_889->g_329.f2, "p_889->g_329.f2", print_hash_value);
    transparent_crc(p_889->g_329.f3.f0, "p_889->g_329.f3.f0", print_hash_value);
    transparent_crc(p_889->g_329.f3.f1, "p_889->g_329.f3.f1", print_hash_value);
    transparent_crc(p_889->g_329.f3.f2, "p_889->g_329.f3.f2", print_hash_value);
    transparent_crc(p_889->g_329.f3.f3, "p_889->g_329.f3.f3", print_hash_value);
    transparent_crc(p_889->g_329.f4.f0, "p_889->g_329.f4.f0", print_hash_value);
    transparent_crc(p_889->g_329.f4.f1, "p_889->g_329.f4.f1", print_hash_value);
    transparent_crc(p_889->g_329.f4.f2, "p_889->g_329.f4.f2", print_hash_value);
    transparent_crc(p_889->g_329.f4.f3, "p_889->g_329.f4.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_889->g_332[i].f0, "p_889->g_332[i].f0", print_hash_value);
        transparent_crc(p_889->g_332[i].f1, "p_889->g_332[i].f1", print_hash_value);
        transparent_crc(p_889->g_332[i].f2, "p_889->g_332[i].f2", print_hash_value);
        transparent_crc(p_889->g_332[i].f3, "p_889->g_332[i].f3", print_hash_value);
        transparent_crc(p_889->g_332[i].f4, "p_889->g_332[i].f4", print_hash_value);
        transparent_crc(p_889->g_332[i].f5, "p_889->g_332[i].f5", print_hash_value);
        transparent_crc(p_889->g_332[i].f6, "p_889->g_332[i].f6", print_hash_value);

    }
    transparent_crc(p_889->g_334, "p_889->g_334", print_hash_value);
    transparent_crc(p_889->g_440.f0, "p_889->g_440.f0", print_hash_value);
    transparent_crc(p_889->g_440.f1, "p_889->g_440.f1", print_hash_value);
    transparent_crc(p_889->g_440.f2, "p_889->g_440.f2", print_hash_value);
    transparent_crc(p_889->g_440.f3.f0, "p_889->g_440.f3.f0", print_hash_value);
    transparent_crc(p_889->g_440.f3.f1, "p_889->g_440.f3.f1", print_hash_value);
    transparent_crc(p_889->g_440.f3.f2, "p_889->g_440.f3.f2", print_hash_value);
    transparent_crc(p_889->g_440.f3.f3, "p_889->g_440.f3.f3", print_hash_value);
    transparent_crc(p_889->g_440.f4.f0, "p_889->g_440.f4.f0", print_hash_value);
    transparent_crc(p_889->g_440.f4.f1, "p_889->g_440.f4.f1", print_hash_value);
    transparent_crc(p_889->g_440.f4.f2, "p_889->g_440.f4.f2", print_hash_value);
    transparent_crc(p_889->g_440.f4.f3, "p_889->g_440.f4.f3", print_hash_value);
    transparent_crc(p_889->g_480.f0, "p_889->g_480.f0", print_hash_value);
    transparent_crc(p_889->g_481.f0.f0, "p_889->g_481.f0.f0", print_hash_value);
    transparent_crc(p_889->g_481.f0.f1, "p_889->g_481.f0.f1", print_hash_value);
    transparent_crc(p_889->g_481.f0.f2, "p_889->g_481.f0.f2", print_hash_value);
    transparent_crc(p_889->g_481.f0.f3.f0, "p_889->g_481.f0.f3.f0", print_hash_value);
    transparent_crc(p_889->g_481.f0.f3.f1, "p_889->g_481.f0.f3.f1", print_hash_value);
    transparent_crc(p_889->g_481.f0.f3.f2, "p_889->g_481.f0.f3.f2", print_hash_value);
    transparent_crc(p_889->g_481.f0.f3.f3, "p_889->g_481.f0.f3.f3", print_hash_value);
    transparent_crc(p_889->g_481.f0.f4.f0, "p_889->g_481.f0.f4.f0", print_hash_value);
    transparent_crc(p_889->g_481.f0.f4.f1, "p_889->g_481.f0.f4.f1", print_hash_value);
    transparent_crc(p_889->g_481.f0.f4.f2, "p_889->g_481.f0.f4.f2", print_hash_value);
    transparent_crc(p_889->g_481.f0.f4.f3, "p_889->g_481.f0.f4.f3", print_hash_value);
    transparent_crc(p_889->g_482.f0, "p_889->g_482.f0", print_hash_value);
    transparent_crc(p_889->g_482.f1, "p_889->g_482.f1", print_hash_value);
    transparent_crc(p_889->g_482.f2, "p_889->g_482.f2", print_hash_value);
    transparent_crc(p_889->g_482.f3, "p_889->g_482.f3", print_hash_value);
    transparent_crc(p_889->g_482.f4, "p_889->g_482.f4", print_hash_value);
    transparent_crc(p_889->g_482.f5, "p_889->g_482.f5", print_hash_value);
    transparent_crc(p_889->g_482.f6, "p_889->g_482.f6", print_hash_value);
    transparent_crc(p_889->g_498, "p_889->g_498", print_hash_value);
    transparent_crc(p_889->g_506, "p_889->g_506", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_889->g_544[i].f0, "p_889->g_544[i].f0", print_hash_value);
        transparent_crc(p_889->g_544[i].f1, "p_889->g_544[i].f1", print_hash_value);
        transparent_crc(p_889->g_544[i].f2, "p_889->g_544[i].f2", print_hash_value);
        transparent_crc(p_889->g_544[i].f3, "p_889->g_544[i].f3", print_hash_value);

    }
    transparent_crc(p_889->g_562.s0, "p_889->g_562.s0", print_hash_value);
    transparent_crc(p_889->g_562.s1, "p_889->g_562.s1", print_hash_value);
    transparent_crc(p_889->g_562.s2, "p_889->g_562.s2", print_hash_value);
    transparent_crc(p_889->g_562.s3, "p_889->g_562.s3", print_hash_value);
    transparent_crc(p_889->g_562.s4, "p_889->g_562.s4", print_hash_value);
    transparent_crc(p_889->g_562.s5, "p_889->g_562.s5", print_hash_value);
    transparent_crc(p_889->g_562.s6, "p_889->g_562.s6", print_hash_value);
    transparent_crc(p_889->g_562.s7, "p_889->g_562.s7", print_hash_value);
    transparent_crc(p_889->g_564.s0, "p_889->g_564.s0", print_hash_value);
    transparent_crc(p_889->g_564.s1, "p_889->g_564.s1", print_hash_value);
    transparent_crc(p_889->g_564.s2, "p_889->g_564.s2", print_hash_value);
    transparent_crc(p_889->g_564.s3, "p_889->g_564.s3", print_hash_value);
    transparent_crc(p_889->g_564.s4, "p_889->g_564.s4", print_hash_value);
    transparent_crc(p_889->g_564.s5, "p_889->g_564.s5", print_hash_value);
    transparent_crc(p_889->g_564.s6, "p_889->g_564.s6", print_hash_value);
    transparent_crc(p_889->g_564.s7, "p_889->g_564.s7", print_hash_value);
    transparent_crc(p_889->g_564.s8, "p_889->g_564.s8", print_hash_value);
    transparent_crc(p_889->g_564.s9, "p_889->g_564.s9", print_hash_value);
    transparent_crc(p_889->g_564.sa, "p_889->g_564.sa", print_hash_value);
    transparent_crc(p_889->g_564.sb, "p_889->g_564.sb", print_hash_value);
    transparent_crc(p_889->g_564.sc, "p_889->g_564.sc", print_hash_value);
    transparent_crc(p_889->g_564.sd, "p_889->g_564.sd", print_hash_value);
    transparent_crc(p_889->g_564.se, "p_889->g_564.se", print_hash_value);
    transparent_crc(p_889->g_564.sf, "p_889->g_564.sf", print_hash_value);
    transparent_crc(p_889->g_566.x, "p_889->g_566.x", print_hash_value);
    transparent_crc(p_889->g_566.y, "p_889->g_566.y", print_hash_value);
    transparent_crc(p_889->g_581.s0, "p_889->g_581.s0", print_hash_value);
    transparent_crc(p_889->g_581.s1, "p_889->g_581.s1", print_hash_value);
    transparent_crc(p_889->g_581.s2, "p_889->g_581.s2", print_hash_value);
    transparent_crc(p_889->g_581.s3, "p_889->g_581.s3", print_hash_value);
    transparent_crc(p_889->g_581.s4, "p_889->g_581.s4", print_hash_value);
    transparent_crc(p_889->g_581.s5, "p_889->g_581.s5", print_hash_value);
    transparent_crc(p_889->g_581.s6, "p_889->g_581.s6", print_hash_value);
    transparent_crc(p_889->g_581.s7, "p_889->g_581.s7", print_hash_value);
    transparent_crc(p_889->g_611.s0, "p_889->g_611.s0", print_hash_value);
    transparent_crc(p_889->g_611.s1, "p_889->g_611.s1", print_hash_value);
    transparent_crc(p_889->g_611.s2, "p_889->g_611.s2", print_hash_value);
    transparent_crc(p_889->g_611.s3, "p_889->g_611.s3", print_hash_value);
    transparent_crc(p_889->g_611.s4, "p_889->g_611.s4", print_hash_value);
    transparent_crc(p_889->g_611.s5, "p_889->g_611.s5", print_hash_value);
    transparent_crc(p_889->g_611.s6, "p_889->g_611.s6", print_hash_value);
    transparent_crc(p_889->g_611.s7, "p_889->g_611.s7", print_hash_value);
    transparent_crc(p_889->g_611.s8, "p_889->g_611.s8", print_hash_value);
    transparent_crc(p_889->g_611.s9, "p_889->g_611.s9", print_hash_value);
    transparent_crc(p_889->g_611.sa, "p_889->g_611.sa", print_hash_value);
    transparent_crc(p_889->g_611.sb, "p_889->g_611.sb", print_hash_value);
    transparent_crc(p_889->g_611.sc, "p_889->g_611.sc", print_hash_value);
    transparent_crc(p_889->g_611.sd, "p_889->g_611.sd", print_hash_value);
    transparent_crc(p_889->g_611.se, "p_889->g_611.se", print_hash_value);
    transparent_crc(p_889->g_611.sf, "p_889->g_611.sf", print_hash_value);
    transparent_crc(p_889->g_613.s0, "p_889->g_613.s0", print_hash_value);
    transparent_crc(p_889->g_613.s1, "p_889->g_613.s1", print_hash_value);
    transparent_crc(p_889->g_613.s2, "p_889->g_613.s2", print_hash_value);
    transparent_crc(p_889->g_613.s3, "p_889->g_613.s3", print_hash_value);
    transparent_crc(p_889->g_613.s4, "p_889->g_613.s4", print_hash_value);
    transparent_crc(p_889->g_613.s5, "p_889->g_613.s5", print_hash_value);
    transparent_crc(p_889->g_613.s6, "p_889->g_613.s6", print_hash_value);
    transparent_crc(p_889->g_613.s7, "p_889->g_613.s7", print_hash_value);
    transparent_crc(p_889->g_615.x, "p_889->g_615.x", print_hash_value);
    transparent_crc(p_889->g_615.y, "p_889->g_615.y", print_hash_value);
    transparent_crc(p_889->g_615.z, "p_889->g_615.z", print_hash_value);
    transparent_crc(p_889->g_615.w, "p_889->g_615.w", print_hash_value);
    transparent_crc(p_889->g_618.f0, "p_889->g_618.f0", print_hash_value);
    transparent_crc(p_889->g_618.f1, "p_889->g_618.f1", print_hash_value);
    transparent_crc(p_889->g_618.f2, "p_889->g_618.f2", print_hash_value);
    transparent_crc(p_889->g_618.f3, "p_889->g_618.f3", print_hash_value);
    transparent_crc(p_889->g_624.x, "p_889->g_624.x", print_hash_value);
    transparent_crc(p_889->g_624.y, "p_889->g_624.y", print_hash_value);
    transparent_crc(p_889->g_624.z, "p_889->g_624.z", print_hash_value);
    transparent_crc(p_889->g_624.w, "p_889->g_624.w", print_hash_value);
    transparent_crc(p_889->g_625.x, "p_889->g_625.x", print_hash_value);
    transparent_crc(p_889->g_625.y, "p_889->g_625.y", print_hash_value);
    transparent_crc(p_889->g_641, "p_889->g_641", print_hash_value);
    transparent_crc(p_889->g_646, "p_889->g_646", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_889->g_649[i][j][k].f0, "p_889->g_649[i][j][k].f0", print_hash_value);
                transparent_crc(p_889->g_649[i][j][k].f1, "p_889->g_649[i][j][k].f1", print_hash_value);
                transparent_crc(p_889->g_649[i][j][k].f2, "p_889->g_649[i][j][k].f2", print_hash_value);
                transparent_crc(p_889->g_649[i][j][k].f3, "p_889->g_649[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(p_889->g_661, "p_889->g_661", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_889->g_664[i][j][k].f0, "p_889->g_664[i][j][k].f0", print_hash_value);
                transparent_crc(p_889->g_664[i][j][k].f1, "p_889->g_664[i][j][k].f1", print_hash_value);
                transparent_crc(p_889->g_664[i][j][k].f2, "p_889->g_664[i][j][k].f2", print_hash_value);
                transparent_crc(p_889->g_664[i][j][k].f3, "p_889->g_664[i][j][k].f3", print_hash_value);
                transparent_crc(p_889->g_664[i][j][k].f4, "p_889->g_664[i][j][k].f4", print_hash_value);
                transparent_crc(p_889->g_664[i][j][k].f5, "p_889->g_664[i][j][k].f5", print_hash_value);
                transparent_crc(p_889->g_664[i][j][k].f6, "p_889->g_664[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(p_889->g_668.x, "p_889->g_668.x", print_hash_value);
    transparent_crc(p_889->g_668.y, "p_889->g_668.y", print_hash_value);
    transparent_crc(p_889->g_668.z, "p_889->g_668.z", print_hash_value);
    transparent_crc(p_889->g_668.w, "p_889->g_668.w", print_hash_value);
    transparent_crc(p_889->g_683.f0, "p_889->g_683.f0", print_hash_value);
    transparent_crc(p_889->g_683.f1, "p_889->g_683.f1", print_hash_value);
    transparent_crc(p_889->g_683.f2, "p_889->g_683.f2", print_hash_value);
    transparent_crc(p_889->g_683.f3, "p_889->g_683.f3", print_hash_value);
    transparent_crc(p_889->g_683.f4, "p_889->g_683.f4", print_hash_value);
    transparent_crc(p_889->g_683.f5, "p_889->g_683.f5", print_hash_value);
    transparent_crc(p_889->g_683.f6, "p_889->g_683.f6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_889->g_685[i].f0, "p_889->g_685[i].f0", print_hash_value);
        transparent_crc(p_889->g_685[i].f1, "p_889->g_685[i].f1", print_hash_value);
        transparent_crc(p_889->g_685[i].f2, "p_889->g_685[i].f2", print_hash_value);
        transparent_crc(p_889->g_685[i].f3, "p_889->g_685[i].f3", print_hash_value);

    }
    transparent_crc(p_889->g_692.s0, "p_889->g_692.s0", print_hash_value);
    transparent_crc(p_889->g_692.s1, "p_889->g_692.s1", print_hash_value);
    transparent_crc(p_889->g_692.s2, "p_889->g_692.s2", print_hash_value);
    transparent_crc(p_889->g_692.s3, "p_889->g_692.s3", print_hash_value);
    transparent_crc(p_889->g_692.s4, "p_889->g_692.s4", print_hash_value);
    transparent_crc(p_889->g_692.s5, "p_889->g_692.s5", print_hash_value);
    transparent_crc(p_889->g_692.s6, "p_889->g_692.s6", print_hash_value);
    transparent_crc(p_889->g_692.s7, "p_889->g_692.s7", print_hash_value);
    transparent_crc(p_889->g_692.s8, "p_889->g_692.s8", print_hash_value);
    transparent_crc(p_889->g_692.s9, "p_889->g_692.s9", print_hash_value);
    transparent_crc(p_889->g_692.sa, "p_889->g_692.sa", print_hash_value);
    transparent_crc(p_889->g_692.sb, "p_889->g_692.sb", print_hash_value);
    transparent_crc(p_889->g_692.sc, "p_889->g_692.sc", print_hash_value);
    transparent_crc(p_889->g_692.sd, "p_889->g_692.sd", print_hash_value);
    transparent_crc(p_889->g_692.se, "p_889->g_692.se", print_hash_value);
    transparent_crc(p_889->g_692.sf, "p_889->g_692.sf", print_hash_value);
    transparent_crc(p_889->g_699, "p_889->g_699", print_hash_value);
    transparent_crc(p_889->g_735.x, "p_889->g_735.x", print_hash_value);
    transparent_crc(p_889->g_735.y, "p_889->g_735.y", print_hash_value);
    transparent_crc(p_889->g_735.z, "p_889->g_735.z", print_hash_value);
    transparent_crc(p_889->g_735.w, "p_889->g_735.w", print_hash_value);
    transparent_crc(p_889->g_743.s0, "p_889->g_743.s0", print_hash_value);
    transparent_crc(p_889->g_743.s1, "p_889->g_743.s1", print_hash_value);
    transparent_crc(p_889->g_743.s2, "p_889->g_743.s2", print_hash_value);
    transparent_crc(p_889->g_743.s3, "p_889->g_743.s3", print_hash_value);
    transparent_crc(p_889->g_743.s4, "p_889->g_743.s4", print_hash_value);
    transparent_crc(p_889->g_743.s5, "p_889->g_743.s5", print_hash_value);
    transparent_crc(p_889->g_743.s6, "p_889->g_743.s6", print_hash_value);
    transparent_crc(p_889->g_743.s7, "p_889->g_743.s7", print_hash_value);
    transparent_crc(p_889->g_744.s0, "p_889->g_744.s0", print_hash_value);
    transparent_crc(p_889->g_744.s1, "p_889->g_744.s1", print_hash_value);
    transparent_crc(p_889->g_744.s2, "p_889->g_744.s2", print_hash_value);
    transparent_crc(p_889->g_744.s3, "p_889->g_744.s3", print_hash_value);
    transparent_crc(p_889->g_744.s4, "p_889->g_744.s4", print_hash_value);
    transparent_crc(p_889->g_744.s5, "p_889->g_744.s5", print_hash_value);
    transparent_crc(p_889->g_744.s6, "p_889->g_744.s6", print_hash_value);
    transparent_crc(p_889->g_744.s7, "p_889->g_744.s7", print_hash_value);
    transparent_crc(p_889->g_746.f0, "p_889->g_746.f0", print_hash_value);
    transparent_crc(p_889->g_746.f1, "p_889->g_746.f1", print_hash_value);
    transparent_crc(p_889->g_746.f2, "p_889->g_746.f2", print_hash_value);
    transparent_crc(p_889->g_746.f3, "p_889->g_746.f3", print_hash_value);
    transparent_crc(p_889->g_746.f4, "p_889->g_746.f4", print_hash_value);
    transparent_crc(p_889->g_746.f5, "p_889->g_746.f5", print_hash_value);
    transparent_crc(p_889->g_746.f6, "p_889->g_746.f6", print_hash_value);
    transparent_crc(p_889->g_749.f0.f0, "p_889->g_749.f0.f0", print_hash_value);
    transparent_crc(p_889->g_749.f0.f1, "p_889->g_749.f0.f1", print_hash_value);
    transparent_crc(p_889->g_749.f0.f2, "p_889->g_749.f0.f2", print_hash_value);
    transparent_crc(p_889->g_749.f0.f3.f0, "p_889->g_749.f0.f3.f0", print_hash_value);
    transparent_crc(p_889->g_749.f0.f3.f1, "p_889->g_749.f0.f3.f1", print_hash_value);
    transparent_crc(p_889->g_749.f0.f3.f2, "p_889->g_749.f0.f3.f2", print_hash_value);
    transparent_crc(p_889->g_749.f0.f3.f3, "p_889->g_749.f0.f3.f3", print_hash_value);
    transparent_crc(p_889->g_749.f0.f4.f0, "p_889->g_749.f0.f4.f0", print_hash_value);
    transparent_crc(p_889->g_749.f0.f4.f1, "p_889->g_749.f0.f4.f1", print_hash_value);
    transparent_crc(p_889->g_749.f0.f4.f2, "p_889->g_749.f0.f4.f2", print_hash_value);
    transparent_crc(p_889->g_749.f0.f4.f3, "p_889->g_749.f0.f4.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_889->g_753[i].f0, "p_889->g_753[i].f0", print_hash_value);
        transparent_crc(p_889->g_753[i].f1, "p_889->g_753[i].f1", print_hash_value);
        transparent_crc(p_889->g_753[i].f2, "p_889->g_753[i].f2", print_hash_value);
        transparent_crc(p_889->g_753[i].f3, "p_889->g_753[i].f3", print_hash_value);
        transparent_crc(p_889->g_753[i].f4, "p_889->g_753[i].f4", print_hash_value);
        transparent_crc(p_889->g_753[i].f5, "p_889->g_753[i].f5", print_hash_value);
        transparent_crc(p_889->g_753[i].f6, "p_889->g_753[i].f6", print_hash_value);

    }
    transparent_crc(p_889->g_755.f0, "p_889->g_755.f0", print_hash_value);
    transparent_crc(p_889->g_755.f1, "p_889->g_755.f1", print_hash_value);
    transparent_crc(p_889->g_755.f2, "p_889->g_755.f2", print_hash_value);
    transparent_crc(p_889->g_755.f3, "p_889->g_755.f3", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_889->g_764[i].f0, "p_889->g_764[i].f0", print_hash_value);

    }
    transparent_crc(p_889->g_766.s0, "p_889->g_766.s0", print_hash_value);
    transparent_crc(p_889->g_766.s1, "p_889->g_766.s1", print_hash_value);
    transparent_crc(p_889->g_766.s2, "p_889->g_766.s2", print_hash_value);
    transparent_crc(p_889->g_766.s3, "p_889->g_766.s3", print_hash_value);
    transparent_crc(p_889->g_766.s4, "p_889->g_766.s4", print_hash_value);
    transparent_crc(p_889->g_766.s5, "p_889->g_766.s5", print_hash_value);
    transparent_crc(p_889->g_766.s6, "p_889->g_766.s6", print_hash_value);
    transparent_crc(p_889->g_766.s7, "p_889->g_766.s7", print_hash_value);
    transparent_crc(p_889->g_777.f0, "p_889->g_777.f0", print_hash_value);
    transparent_crc(p_889->g_777.f1, "p_889->g_777.f1", print_hash_value);
    transparent_crc(p_889->g_777.f2, "p_889->g_777.f2", print_hash_value);
    transparent_crc(p_889->g_777.f3.f0, "p_889->g_777.f3.f0", print_hash_value);
    transparent_crc(p_889->g_777.f3.f1, "p_889->g_777.f3.f1", print_hash_value);
    transparent_crc(p_889->g_777.f3.f2, "p_889->g_777.f3.f2", print_hash_value);
    transparent_crc(p_889->g_777.f3.f3, "p_889->g_777.f3.f3", print_hash_value);
    transparent_crc(p_889->g_777.f4.f0, "p_889->g_777.f4.f0", print_hash_value);
    transparent_crc(p_889->g_777.f4.f1, "p_889->g_777.f4.f1", print_hash_value);
    transparent_crc(p_889->g_777.f4.f2, "p_889->g_777.f4.f2", print_hash_value);
    transparent_crc(p_889->g_777.f4.f3, "p_889->g_777.f4.f3", print_hash_value);
    transparent_crc(p_889->g_801.s0, "p_889->g_801.s0", print_hash_value);
    transparent_crc(p_889->g_801.s1, "p_889->g_801.s1", print_hash_value);
    transparent_crc(p_889->g_801.s2, "p_889->g_801.s2", print_hash_value);
    transparent_crc(p_889->g_801.s3, "p_889->g_801.s3", print_hash_value);
    transparent_crc(p_889->g_801.s4, "p_889->g_801.s4", print_hash_value);
    transparent_crc(p_889->g_801.s5, "p_889->g_801.s5", print_hash_value);
    transparent_crc(p_889->g_801.s6, "p_889->g_801.s6", print_hash_value);
    transparent_crc(p_889->g_801.s7, "p_889->g_801.s7", print_hash_value);
    transparent_crc(p_889->g_802.s0, "p_889->g_802.s0", print_hash_value);
    transparent_crc(p_889->g_802.s1, "p_889->g_802.s1", print_hash_value);
    transparent_crc(p_889->g_802.s2, "p_889->g_802.s2", print_hash_value);
    transparent_crc(p_889->g_802.s3, "p_889->g_802.s3", print_hash_value);
    transparent_crc(p_889->g_802.s4, "p_889->g_802.s4", print_hash_value);
    transparent_crc(p_889->g_802.s5, "p_889->g_802.s5", print_hash_value);
    transparent_crc(p_889->g_802.s6, "p_889->g_802.s6", print_hash_value);
    transparent_crc(p_889->g_802.s7, "p_889->g_802.s7", print_hash_value);
    transparent_crc(p_889->g_802.s8, "p_889->g_802.s8", print_hash_value);
    transparent_crc(p_889->g_802.s9, "p_889->g_802.s9", print_hash_value);
    transparent_crc(p_889->g_802.sa, "p_889->g_802.sa", print_hash_value);
    transparent_crc(p_889->g_802.sb, "p_889->g_802.sb", print_hash_value);
    transparent_crc(p_889->g_802.sc, "p_889->g_802.sc", print_hash_value);
    transparent_crc(p_889->g_802.sd, "p_889->g_802.sd", print_hash_value);
    transparent_crc(p_889->g_802.se, "p_889->g_802.se", print_hash_value);
    transparent_crc(p_889->g_802.sf, "p_889->g_802.sf", print_hash_value);
    transparent_crc(p_889->g_805, "p_889->g_805", print_hash_value);
    transparent_crc(p_889->g_806.f0, "p_889->g_806.f0", print_hash_value);
    transparent_crc(p_889->g_806.f1, "p_889->g_806.f1", print_hash_value);
    transparent_crc(p_889->g_806.f2, "p_889->g_806.f2", print_hash_value);
    transparent_crc(p_889->g_806.f3.f0, "p_889->g_806.f3.f0", print_hash_value);
    transparent_crc(p_889->g_806.f3.f1, "p_889->g_806.f3.f1", print_hash_value);
    transparent_crc(p_889->g_806.f3.f2, "p_889->g_806.f3.f2", print_hash_value);
    transparent_crc(p_889->g_806.f3.f3, "p_889->g_806.f3.f3", print_hash_value);
    transparent_crc(p_889->g_806.f4.f0, "p_889->g_806.f4.f0", print_hash_value);
    transparent_crc(p_889->g_806.f4.f1, "p_889->g_806.f4.f1", print_hash_value);
    transparent_crc(p_889->g_806.f4.f2, "p_889->g_806.f4.f2", print_hash_value);
    transparent_crc(p_889->g_806.f4.f3, "p_889->g_806.f4.f3", print_hash_value);
    transparent_crc(p_889->g_807.f0, "p_889->g_807.f0", print_hash_value);
    transparent_crc(p_889->g_807.f1, "p_889->g_807.f1", print_hash_value);
    transparent_crc(p_889->g_807.f2, "p_889->g_807.f2", print_hash_value);
    transparent_crc(p_889->g_807.f3.f0, "p_889->g_807.f3.f0", print_hash_value);
    transparent_crc(p_889->g_807.f3.f1, "p_889->g_807.f3.f1", print_hash_value);
    transparent_crc(p_889->g_807.f3.f2, "p_889->g_807.f3.f2", print_hash_value);
    transparent_crc(p_889->g_807.f3.f3, "p_889->g_807.f3.f3", print_hash_value);
    transparent_crc(p_889->g_807.f4.f0, "p_889->g_807.f4.f0", print_hash_value);
    transparent_crc(p_889->g_807.f4.f1, "p_889->g_807.f4.f1", print_hash_value);
    transparent_crc(p_889->g_807.f4.f2, "p_889->g_807.f4.f2", print_hash_value);
    transparent_crc(p_889->g_807.f4.f3, "p_889->g_807.f4.f3", print_hash_value);
    transparent_crc(p_889->v_collective, "p_889->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 57; i++)
            transparent_crc(p_889->g_special_values[i + 57 * get_linear_group_id()], "p_889->g_special_values[i + 57 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 57; i++)
            transparent_crc(p_889->l_special_values[i], "p_889->l_special_values[i]", print_hash_value);
    transparent_crc(p_889->l_comm_values[get_linear_local_id()], "p_889->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_889->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_889->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
