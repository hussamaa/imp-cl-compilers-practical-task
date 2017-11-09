// --atomics 57 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 59,49,2 -l 1,7,2
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

__constant uint32_t permutations[10][14] = {
{1,13,8,4,12,3,5,6,0,10,2,7,9,11}, // permutation 0
{3,9,13,10,4,6,0,7,12,5,1,2,11,8}, // permutation 1
{8,4,12,5,0,9,2,13,10,7,11,3,1,6}, // permutation 2
{7,12,6,2,9,11,4,1,8,10,5,3,13,0}, // permutation 3
{4,6,8,2,5,12,7,11,10,13,1,0,9,3}, // permutation 4
{1,5,6,13,2,8,9,7,10,0,4,12,11,3}, // permutation 5
{9,11,2,5,12,1,10,13,3,4,8,0,6,7}, // permutation 6
{6,9,10,0,7,3,1,8,2,5,13,11,12,4}, // permutation 7
{13,2,9,6,12,7,8,10,1,0,4,11,3,5}, // permutation 8
{9,10,3,5,1,11,4,2,0,12,8,13,7,6} // permutation 9
};

// Seed: 2454557128

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(uint16_t, 4) g_31;
    int32_t g_52;
    int16_t g_66;
    uint64_t g_85;
    volatile VECTOR(uint8_t, 16) g_91;
    int32_t g_100[8][1];
    int32_t * volatile g_99;
    VECTOR(int16_t, 8) g_157;
    int8_t g_171;
    VECTOR(int16_t, 4) g_192;
    volatile uint8_t g_239[8];
    VECTOR(uint16_t, 4) g_255;
    VECTOR(int8_t, 4) g_266;
    uint32_t g_281;
    int16_t g_285;
    VECTOR(uint32_t, 16) g_305;
    volatile int64_t *g_309;
    volatile int64_t ** volatile g_308;
    uint64_t g_345[4];
    int8_t g_346;
    VECTOR(uint8_t, 8) g_375;
    int8_t g_386;
    VECTOR(int64_t, 2) g_390;
    VECTOR(int64_t, 2) g_391;
    volatile VECTOR(int64_t, 4) g_392;
    VECTOR(int64_t, 2) g_393;
    volatile VECTOR(uint8_t, 4) g_401;
    int32_t *g_417;
    int32_t ** volatile g_416;
    int32_t g_419;
    VECTOR(uint32_t, 4) g_437;
    VECTOR(uint32_t, 8) g_438;
    volatile VECTOR(int16_t, 2) g_446;
    int32_t g_475[10];
    uint64_t g_484;
    int32_t g_489;
    VECTOR(uint64_t, 8) g_490;
    int32_t * volatile g_497;
    int64_t *g_591;
    volatile VECTOR(int8_t, 16) g_592;
    volatile VECTOR(int8_t, 2) g_593;
    volatile VECTOR(int8_t, 2) g_594;
    VECTOR(uint32_t, 16) g_606;
    VECTOR(int64_t, 2) g_612;
    int32_t *g_632;
    int32_t ** volatile g_631[7];
    volatile int8_t * volatile g_635;
    volatile int8_t * volatile *g_634;
    VECTOR(uint32_t, 16) g_650;
    VECTOR(uint32_t, 8) g_655;
    int32_t ** volatile g_664;
    int64_t g_667[8][1][4];
    int16_t *g_682;
    int16_t **g_681;
    int32_t ** volatile g_725;
    uint32_t g_735[4];
    VECTOR(uint64_t, 16) g_747;
    VECTOR(int64_t, 2) g_787;
    volatile VECTOR(int64_t, 16) g_798;
    volatile VECTOR(int64_t, 2) g_799;
    volatile uint8_t *g_801[8][4];
    volatile uint8_t * volatile * volatile g_800;
    VECTOR(int64_t, 2) g_803;
    VECTOR(int64_t, 2) g_804;
    volatile VECTOR(int64_t, 4) g_805;
    uint64_t **g_815;
    VECTOR(uint32_t, 16) g_820;
    VECTOR(uint8_t, 4) g_823;
    VECTOR(int64_t, 2) g_850;
    volatile VECTOR(int64_t, 16) g_860;
    uint64_t g_862;
    VECTOR(uint16_t, 8) g_874;
    VECTOR(int64_t, 4) g_882;
    volatile VECTOR(int32_t, 16) g_894;
    uint8_t **g_895;
    int32_t * volatile g_900[10][9][2];
    VECTOR(int16_t, 16) g_902;
    VECTOR(int64_t, 16) g_911;
    VECTOR(int64_t, 8) g_912;
    VECTOR(int64_t, 16) g_914;
    volatile VECTOR(uint16_t, 4) g_922;
    VECTOR(int8_t, 2) g_924;
    VECTOR(int8_t, 4) g_925;
    VECTOR(uint8_t, 16) g_929;
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
uint64_t  func_1(struct S0 * p_963);
int32_t  func_2(int64_t  p_3, int32_t  p_4, struct S0 * p_963);
int16_t  func_15(uint32_t  p_16, int64_t  p_17, int32_t  p_18, uint32_t  p_19, uint8_t  p_20, struct S0 * p_963);
uint32_t  func_21(uint32_t  p_22, uint32_t  p_23, int64_t  p_24, int64_t  p_25, struct S0 * p_963);
uint16_t  func_32(uint16_t  p_33, uint32_t  p_34, int64_t  p_35, int32_t  p_36, struct S0 * p_963);
uint32_t  func_37(int16_t  p_38, int8_t  p_39, uint16_t  p_40, uint32_t  p_41, int32_t  p_42, struct S0 * p_963);
int8_t  func_55(int32_t  p_56, uint64_t  p_57, uint8_t  p_58, int32_t  p_59, struct S0 * p_963);
uint64_t  func_61(int16_t  p_62, uint32_t  p_63, uint32_t  p_64, struct S0 * p_963);
int8_t  func_69(uint8_t  p_70, int64_t  p_71, uint64_t  p_72, uint8_t  p_73, struct S0 * p_963);
uint64_t  func_79(uint64_t  p_80, int16_t * p_81, int16_t * p_82, int64_t  p_83, struct S0 * p_963);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_963->g_comm_values p_963->l_comm_values p_963->g_31 p_963->g_52 p_963->g_66 p_963->g_91 p_963->g_99 p_963->g_85 p_963->g_157 p_963->g_100 p_963->g_192 p_963->g_239 p_963->g_255 p_963->g_305 p_963->g_308 p_963->g_266 p_963->g_345 p_963->g_346 p_963->g_375 p_963->g_386 p_963->g_390 p_963->g_391 p_963->g_392 p_963->g_393 p_963->g_171 p_963->g_401 p_963->g_416 p_963->g_437 p_963->g_438 p_963->g_446 p_963->g_475 p_963->g_484 p_963->g_489 p_963->g_419 p_963->g_490 p_963->g_285 p_963->g_497 p_963->g_281 p_963->g_592 p_963->g_593 p_963->g_594 p_963->g_606 p_963->g_612 p_963->g_309 p_963->g_664 p_963->g_417 p_963->g_681 p_963->g_725 p_963->g_682 p_963->g_747 p_963->g_787 p_963->g_632 p_963->g_798 p_963->g_799 p_963->g_800 p_963->g_803 p_963->g_804 p_963->g_805 p_963->g_820 p_963->g_823 p_963->g_735 p_963->g_850 p_963->g_860 p_963->g_862 p_963->g_874 p_963->g_911 p_963->g_912 p_963->g_914 p_963->g_815 p_963->g_922 p_963->g_902 p_963->g_924
 * writes: p_963->g_52 p_963->g_66 p_963->g_85 p_963->g_100 p_963->g_171 p_963->g_31 p_963->g_239 p_963->g_255 p_963->g_345 p_963->g_346 p_963->g_386 p_963->g_417 p_963->g_475 p_963->g_484 p_963->g_489 p_963->g_281 p_963->g_591 p_963->g_735 p_963->g_815 p_963->g_606 p_963->g_862 p_963->g_924
 */
uint64_t  func_1(struct S0 * p_963)
{ /* block id: 4 */
    uint8_t l_726 = 1UL;
    int32_t l_728 = 0x0B9E3F55L;
    int32_t l_730[4][4][10] = {{{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL}},{{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL}},{{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL}},{{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL},{1L,0x657CC958L,0L,0x4588EED5L,(-1L),0x4588EED5L,0L,0x657CC958L,1L,0x608DA62BL}}};
    int64_t **l_740 = &p_963->g_591;
    VECTOR(int16_t, 16) l_744 = (VECTOR(int16_t, 16))(0x3659L, (VECTOR(int16_t, 4))(0x3659L, (VECTOR(int16_t, 2))(0x3659L, 1L), 1L), 1L, 0x3659L, 1L, (VECTOR(int16_t, 2))(0x3659L, 1L), (VECTOR(int16_t, 2))(0x3659L, 1L), 0x3659L, 1L, 0x3659L, 1L);
    VECTOR(uint64_t, 8) l_748 = (VECTOR(uint64_t, 8))(0xF3FAD82DCD9B489EL, (VECTOR(uint64_t, 4))(0xF3FAD82DCD9B489EL, (VECTOR(uint64_t, 2))(0xF3FAD82DCD9B489EL, 0x0131A477361C723EL), 0x0131A477361C723EL), 0x0131A477361C723EL, 0xF3FAD82DCD9B489EL, 0x0131A477361C723EL);
    VECTOR(uint64_t, 2) l_749 = (VECTOR(uint64_t, 2))(0x794CD7B1EE2882B7L, 0x4E1A09474FD7EADCL);
    int32_t *l_806 = &p_963->g_419;
    VECTOR(uint16_t, 2) l_810 = (VECTOR(uint16_t, 2))(1UL, 0UL);
    int64_t l_811 = 0x3DE7ED398C45529AL;
    uint8_t l_834 = 0x81L;
    int8_t *l_835 = &p_963->g_171;
    uint32_t *l_840 = (void*)0;
    int64_t l_849 = 0x43040D64BDAE2B56L;
    uint32_t *l_851 = &p_963->g_735[0];
    uint32_t l_852[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
    int32_t *l_853 = (void*)0;
    int32_t *l_854 = &l_730[2][3][7];
    VECTOR(uint64_t, 16) l_855 = (VECTOR(uint64_t, 16))(0x0F640988350664B9L, (VECTOR(uint64_t, 4))(0x0F640988350664B9L, (VECTOR(uint64_t, 2))(0x0F640988350664B9L, 0x041E2F83BCBB8902L), 0x041E2F83BCBB8902L), 0x041E2F83BCBB8902L, 0x0F640988350664B9L, 0x041E2F83BCBB8902L, (VECTOR(uint64_t, 2))(0x0F640988350664B9L, 0x041E2F83BCBB8902L), (VECTOR(uint64_t, 2))(0x0F640988350664B9L, 0x041E2F83BCBB8902L), 0x0F640988350664B9L, 0x041E2F83BCBB8902L, 0x0F640988350664B9L, 0x041E2F83BCBB8902L);
    int32_t l_884 = 0x61343F78L;
    uint8_t l_897[10][1][1] = {{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}}};
    VECTOR(int64_t, 4) l_915 = (VECTOR(int64_t, 4))(0x3D4638813906203BL, (VECTOR(int64_t, 2))(0x3D4638813906203BL, 0x1AC6A92B9B0070F9L), 0x1AC6A92B9B0070F9L);
    VECTOR(int8_t, 8) l_923 = (VECTOR(int8_t, 8))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 7L), 7L), 7L, 0x62L, 7L);
    VECTOR(int8_t, 4) l_926 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L));
    uint64_t *l_940 = &p_963->g_484;
    uint64_t **l_952 = &l_940;
    int i, j, k;
    if (func_2(p_963->g_comm_values[p_963->tid], p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))], p_963))
    { /* block id: 343 */
        uint32_t *l_727 = (void*)0;
        uint8_t *l_729 = &l_726;
        int32_t l_736 = 1L;
        int32_t l_737 = (-6L);
        int64_t **l_739 = &p_963->g_591;
        int64_t ***l_738 = &l_739;
        int32_t *l_741[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_742 = (-10L);
        int16_t l_743[3][6][6] = {{{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL}},{{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL}},{{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL},{0x3485L,0x7E6EL,2L,0x6C05L,2L,0x7E6EL}}};
        VECTOR(uint64_t, 8) l_746 = (VECTOR(uint64_t, 8))(0x50DA7DB6251A0B77L, (VECTOR(uint64_t, 4))(0x50DA7DB6251A0B77L, (VECTOR(uint64_t, 2))(0x50DA7DB6251A0B77L, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 0x50DA7DB6251A0B77L, 18446744073709551609UL);
        VECTOR(int64_t, 16) l_786 = (VECTOR(int64_t, 16))(0x64B97E84897E79DFL, (VECTOR(int64_t, 4))(0x64B97E84897E79DFL, (VECTOR(int64_t, 2))(0x64B97E84897E79DFL, (-1L)), (-1L)), (-1L), 0x64B97E84897E79DFL, (-1L), (VECTOR(int64_t, 2))(0x64B97E84897E79DFL, (-1L)), (VECTOR(int64_t, 2))(0x64B97E84897E79DFL, (-1L)), 0x64B97E84897E79DFL, (-1L), 0x64B97E84897E79DFL, (-1L));
        int i, j, k;
        l_742 |= (l_726 , (((*l_738) = (((l_728 = p_963->g_100[4][0]) > ((((*l_729) &= 0x91L) & ((l_730[2][3][7] , ((l_730[2][3][7] <= (((0xC0L | p_963->g_391.x) ^ (l_736 = ((safe_rshift_func_uint16_t_u_s(((((p_963->g_735[0] = (safe_rshift_func_uint8_t_u_s(3UL, 3))) ^ (0x4F88CDEAL <= (*p_963->g_99))) != p_963->g_475[2]) < 1L), (*p_963->g_682))) && l_730[2][3][7]))) || l_737)) > 0x71L)) >= l_737)) ^ 0x01L)) , (void*)0)) != l_740));
        if (l_743[2][1][4])
        { /* block id: 350 */
            int64_t l_745 = (-5L);
            l_730[2][1][1] ^= ((((**p_963->g_681) = ((VECTOR(int16_t, 4))(l_744.s6351)).y) >= (GROUP_DIVERGE(1, 1) ^ l_745)) ^ (p_963->g_592.se & ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(0UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_746.s67605571)).odd)), ((VECTOR(uint64_t, 4))(p_963->g_747.s4647)))))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_748.s40601665)).hi)), p_963->g_31.z, 0UL, 0xB7202381A0E7D1BAL)).s9485, ((VECTOR(uint64_t, 4))(l_749.xyxy))))).yyxwzzwxyzywxyyz))).s8));
        }
        else
        { /* block id: 353 */
            uint64_t l_791 = 0UL;
            uint64_t l_796 = 0xA6A3D937CCB7ACBDL;
            VECTOR(int32_t, 4) l_797 = (VECTOR(int32_t, 4))(0x45591F71L, (VECTOR(int32_t, 2))(0x45591F71L, (-10L)), (-10L));
            int i;
            for (p_963->g_386 = (-24); (p_963->g_386 == (-18)); p_963->g_386++)
            { /* block id: 356 */
                if ((*p_963->g_99))
                    break;
                if ((atomic_inc(&p_963->l_atomic_input[23]) == 3))
                { /* block id: 359 */
                    int64_t l_752[6] = {0x315CA7EA5D9D86D1L,0x2E38E01FB9C2E5C6L,0x315CA7EA5D9D86D1L,0x315CA7EA5D9D86D1L,0x2E38E01FB9C2E5C6L,0x315CA7EA5D9D86D1L};
                    int32_t l_776 = 2L;
                    int32_t *l_775 = &l_776;
                    int32_t *l_777 = &l_776;
                    int32_t l_778[9] = {0x0FEB580CL,0x0FEB580CL,0x0FEB580CL,0x0FEB580CL,0x0FEB580CL,0x0FEB580CL,0x0FEB580CL,0x0FEB580CL,0x0FEB580CL};
                    uint32_t l_779 = 8UL;
                    int i;
                    if (l_752[5])
                    { /* block id: 360 */
                        uint32_t l_753 = 2UL;
                        int32_t l_755 = 0x042DCA21L;
                        int32_t *l_754[4][1] = {{&l_755},{&l_755},{&l_755},{&l_755}};
                        int32_t *l_756 = &l_755;
                        uint32_t l_757 = 0x280E37A9L;
                        uint32_t l_758 = 1UL;
                        int16_t l_759 = 0x2F52L;
                        int8_t l_760 = 0x6FL;
                        int i, j;
                        l_754[2][0] = ((((VECTOR(uint32_t, 2))(0x591DF670L, 4294967288UL)).lo , l_753) , l_754[3][0]);
                        l_756 = (void*)0;
                        l_758 ^= l_757;
                        l_760 &= l_759;
                    }
                    else
                    { /* block id: 365 */
                        int64_t **l_761 = (void*)0;
                        int64_t **l_762 = (void*)0;
                        int64_t **l_763 = (void*)0;
                        int64_t l_766 = 0x7F673330624AD367L;
                        int64_t *l_765 = &l_766;
                        int64_t **l_764 = &l_765;
                        int32_t l_767 = (-10L);
                        uint64_t l_768 = 18446744073709551615UL;
                        l_764 = (l_763 = (l_762 = l_761));
                        l_768 ^= l_767;
                    }
                    for (l_752[5] = (-17); (l_752[5] > 17); l_752[5]++)
                    { /* block id: 373 */
                        uint64_t l_771 = 0x4DE3AEF2662DA1B0L;
                        int32_t l_772 = 0x1EB7AE30L;
                        uint16_t l_773 = 0UL;
                        int32_t l_774 = 0x010F8818L;
                        l_772 = l_771;
                        l_774 = l_773;
                    }
                    l_777 = l_775;
                    --l_779;
                    unsigned int result = 0;
                    int l_752_i0;
                    for (l_752_i0 = 0; l_752_i0 < 6; l_752_i0++) {
                        result += l_752[l_752_i0];
                    }
                    result += l_776;
                    int l_778_i0;
                    for (l_778_i0 = 0; l_778_i0 < 9; l_778_i0++) {
                        result += l_778[l_778_i0];
                    }
                    result += l_779;
                    atomic_add(&p_963->l_special_values[23], result);
                }
                else
                { /* block id: 379 */
                    (1 + 1);
                }
            }
            for (l_742 = (-30); (l_742 <= 24); l_742 = safe_add_func_int64_t_s_s(l_742, 6))
            { /* block id: 385 */
                uint32_t l_788 = 1UL;
                l_797.y &= (((((safe_lshift_func_int16_t_s_s((*p_963->g_682), 11)) <= (*p_963->g_682)) == (((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0x5F004B6B5F2AFF98L, ((VECTOR(int64_t, 2))(0x025D10A952095CCFL, 0x662FB6433317F02FL)), (-1L), ((VECTOR(int64_t, 2))(l_786.sbe)), 2L, 9L)))))).odd, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_963->g_787.yxxx)))).hi)).xxyx))))).xzyzywwz)).s1 > (l_788 ^ ((((((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))((-1L), 0L, 1L, 0x46C7L, ((*p_963->g_632) , (((((*p_963->g_99) , l_791) < (((safe_mul_func_uint8_t_u_u(p_963->g_266.y, (safe_add_func_int16_t_s_s((p_963->g_171 > l_730[0][1][1]), (**p_963->g_681))))) > p_963->g_747.s5) >= l_788)) > l_796) < l_788)), ((VECTOR(int16_t, 2))((-8L))), l_791, ((VECTOR(int16_t, 4))((-6L))), 1L, 0x59EBL, 0x7D6BL, (-5L))).lo, ((VECTOR(int16_t, 8))(1L))))).s7 != l_748.s5) , p_963->g_239[4]) | l_788) == l_744.se))) > 0x1316L) , (**p_963->g_681))) || l_791) != l_788);
            }
        }
    }
    else
    { /* block id: 389 */
        int64_t *l_802[1];
        int32_t l_807 = 7L;
        int32_t *l_812 = &p_963->g_475[4];
        uint64_t **l_813 = (void*)0;
        uint64_t ***l_814[4] = {&l_813,&l_813,&l_813,&l_813};
        int i;
        for (i = 0; i < 1; i++)
            l_802[i] = &p_963->g_667[6][0][3];
        (*l_812) |= (((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(0x52BCE521F6F99285L, (-6L))), 0x1ADF68949987BC80L)).odd)), ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0x0371397F87C775FCL, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(0x2144F871AB185C4FL, (-8L))), ((VECTOR(int64_t, 2))(0x4DB5119684E75AA2L, 0x56753C6AA137E565L))))), 0x5069F15FE990F7FFL, ((void*)0 == &l_726), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_963->g_798.s882cb025e32a63bc)).sdd)), (-3L))))), ((VECTOR(int64_t, 16))(p_963->g_799.xxyxxyxxyxxyyyxy)).hi))).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(0x7FE159D0E6C46631L, (l_730[0][0][8] = (p_963->g_800 != (void*)0)), 3L, 0x04F29246856C4D47L)).zxxzxwwx, ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 8))(p_963->g_803.xyxyxxyy)), ((VECTOR(int64_t, 16))(p_963->g_804.xxxxyyyxyxyyxyyx)).even))), ((VECTOR(int64_t, 2))(0x09D409D178E0C91DL, 0x407A734465172833L)).xxxxyxyx))))).s13)).xyxyxxxyxyxxyxyx, ((VECTOR(int64_t, 4))(p_963->g_805.wywy)).zwyzyxzyxwwywzwy))).sf46b))))).hi))).even , ((l_806 == (((l_807 | (((((l_807 == l_807) <= (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(l_810.yx)), (uint16_t)(l_807 , 0xEBADL)))).xxxxyxxxxyxxyyxy))).s0, l_807))) & l_810.y) <= p_963->g_391.y) , l_811)) < l_807) , (void*)0)) , (*p_963->g_99)));
        p_963->g_815 = l_813;
    }
    l_728 |= ((~(safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((VECTOR(uint32_t, 8))(8UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_963->g_820.s3d)).yxyxyyyxyxyxyyxx)).lo)).s6, ((VECTOR(uint32_t, 4))(0x7EDA9951L, 0x985FB0C7L, 1UL, 1UL)), 6UL, 1UL)).s4 >= ((((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(p_963->g_823.zzzwyzzzzxwyyyxy)).s1, (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s((**p_963->g_681), 0)) | (safe_mul_func_int16_t_s_s((((safe_add_func_int64_t_s_s((safe_div_func_int8_t_s_s(0x11L, ((*l_835) = l_834))), ((*p_963->g_308) != &p_963->g_667[0][0][0]))) | ((p_963->g_735[3] || l_748.s4) , 0x0BA9L)) || 7L), l_744.sf))), p_963->g_820.sa)))) ^ p_963->g_803.x) == l_749.y) && p_963->g_606.se)), p_963->g_437.w)), l_730[1][1][3]))) <= l_726);
    p_963->g_489 |= (((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((((p_963->g_606.sb--) && 4294967295UL) & 1L) && (p_963->g_171 = (safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(l_748.s7, (l_749.x & ((+(safe_add_func_int32_t_s_s(((*l_854) = (l_849 | ((((((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_963->g_850.yyxxyxxy)), ((VECTOR(int64_t, 2))(0x11343CF8D0048E88L, 1L)), 0x69A922D3B06CCB0AL, ((VECTOR(int64_t, 4))(0x6892BE093CBBD97EL, 0L, 0x67BC5AE32AE07B7BL, 0x2EC97920F72F4829L)), (-5L))).se == (((*l_851) = l_744.sc) , (((FAKE_DIVERGE(p_963->group_1_offset, get_group_id(1), 10) != (l_749.y , l_852[3])) && (((((void*)0 == &l_730[3][0][4]) , l_730[3][0][4]) <= 4294967295UL) & 0xE6EBL)) > p_963->g_266.z))) , (*p_963->g_99)) & p_963->g_157.s5) == l_810.y) == p_963->g_157.s0) <= 0x246DL))), l_749.y))) , (*l_854))))), l_855.sb)))), p_963->g_157.s2)), 2)) < p_963->g_820.s6) , (*p_963->g_99));
    if (((!1L) , ((void*)0 == &p_963->g_815)))
    { /* block id: 401 */
        int64_t l_863 = 0x67D705974F9560EFL;
        int16_t **l_871 = &p_963->g_682;
        VECTOR(uint16_t, 16) l_875 = (VECTOR(uint16_t, 16))(0xBAADL, (VECTOR(uint16_t, 4))(0xBAADL, (VECTOR(uint16_t, 2))(0xBAADL, 0xA7ADL), 0xA7ADL), 0xA7ADL, 0xBAADL, 0xA7ADL, (VECTOR(uint16_t, 2))(0xBAADL, 0xA7ADL), (VECTOR(uint16_t, 2))(0xBAADL, 0xA7ADL), 0xBAADL, 0xA7ADL, 0xBAADL, 0xA7ADL);
        int16_t l_898 = (-1L);
        VECTOR(int8_t, 16) l_927 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x24L), 0x24L), 0x24L, (-1L), 0x24L, (VECTOR(int8_t, 2))((-1L), 0x24L), (VECTOR(int8_t, 2))((-1L), 0x24L), (-1L), 0x24L, (-1L), 0x24L);
        uint64_t ***l_951[1];
        int i;
        for (i = 0; i < 1; i++)
            l_951[i] = (void*)0;
        for (l_834 = (-1); (l_834 < 57); l_834 = safe_add_func_uint32_t_u_u(l_834, 1))
        { /* block id: 404 */
            VECTOR(uint16_t, 16) l_873 = (VECTOR(uint16_t, 16))(0xF3DEL, (VECTOR(uint16_t, 4))(0xF3DEL, (VECTOR(uint16_t, 2))(0xF3DEL, 0xC4D5L), 0xC4D5L), 0xC4D5L, 0xF3DEL, 0xC4D5L, (VECTOR(uint16_t, 2))(0xF3DEL, 0xC4D5L), (VECTOR(uint16_t, 2))(0xF3DEL, 0xC4D5L), 0xF3DEL, 0xC4D5L, 0xF3DEL, 0xC4D5L);
            int32_t l_887 = (-8L);
            VECTOR(uint64_t, 4) l_890 = (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 1UL), 1UL);
            uint8_t ***l_896 = &p_963->g_895;
            uint8_t *l_899 = &l_726;
            int32_t *l_901[1];
            VECTOR(int64_t, 8) l_913 = (VECTOR(int64_t, 8))(0x7A4A1A1AB991D3C9L, (VECTOR(int64_t, 4))(0x7A4A1A1AB991D3C9L, (VECTOR(int64_t, 2))(0x7A4A1A1AB991D3C9L, (-8L)), (-8L)), (-8L), 0x7A4A1A1AB991D3C9L, (-8L));
            VECTOR(uint16_t, 4) l_919 = (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x562CL), 0x562CL);
            int32_t l_930 = (-2L);
            VECTOR(int16_t, 8) l_931 = (VECTOR(int16_t, 8))(0x538DL, (VECTOR(int16_t, 4))(0x538DL, (VECTOR(int16_t, 2))(0x538DL, 0L), 0L), 0L, 0x538DL, 0L);
            int i;
            for (i = 0; i < 1; i++)
                l_901[i] = &p_963->g_475[3];
            for (p_963->g_52 = 0; (p_963->g_52 == (-27)); p_963->g_52 = safe_sub_func_int16_t_s_s(p_963->g_52, 2))
            { /* block id: 407 */
                uint64_t *l_861[7][1] = {{&p_963->g_862},{&p_963->g_862},{&p_963->g_862},{&p_963->g_862},{&p_963->g_862},{&p_963->g_862},{&p_963->g_862}};
                int32_t l_864 = 0x25BD7A9FL;
                uint16_t *l_872[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint16_t l_880 = 0x1CBFL;
                int8_t *l_881 = &p_963->g_386;
                int32_t *l_883 = &p_963->g_489;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_963->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[(safe_mod_func_uint32_t_u_u((((*p_963->g_682) < (**p_963->g_681)) || (((VECTOR(int64_t, 2))(p_963->g_860.sc9)).lo , ((p_963->g_862++) , (((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(((p_963->g_255.y = (l_871 != &p_963->g_682)) >= 0x22F2L), ((*l_881) ^= ((*l_835) ^= (((+((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 16))(0x0139L, 65526UL, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(65531UL, 0xAEDDL, ((VECTOR(uint16_t, 4))(l_873.s7a05)), 0x91CFL, 0xF2CFL)), ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 4))(p_963->g_874.s0674)).xxxwwwwxwxyyxzxw, ((VECTOR(uint16_t, 8))(l_875.s289aea8f)).s0424553742611425, ((VECTOR(uint16_t, 2))(0x4DF3L, 65535UL)).xyxxxyyxyyyxyxyy))).sfa)).xxxx, (uint16_t)(((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((*p_963->g_682), 8)), ((l_880 , (0x10CFL > 1L)) | l_880))) > 0x4EL) & p_963->g_798.s9)))).zzyzwxyz))).even, (uint16_t)p_963->g_305.s2, (uint16_t)FAKE_DIVERGE(p_963->local_2_offset, get_local_id(2), 10)))), 0x5092L, 0xAA9BL, 2UL, 1UL)))))).s09, ((VECTOR(uint16_t, 2))(0x0F29L)), ((VECTOR(uint16_t, 2))(1UL))))), ((VECTOR(uint16_t, 4))(0x0CA3L)), ((VECTOR(uint16_t, 2))(0x6D2DL)), 0UL, p_963->g_787.y, l_873.s6, 0x904DL, 0xCF33L, 65531UL)).sbcf1, ((VECTOR(uint16_t, 4))(1UL)), ((VECTOR(uint16_t, 4))(6UL))))).x) <= 0xBEC0L) ^ p_963->g_266.z))), 0L, 0x44L)).w, p_963->g_305.sb)) == 0x477AAF1EL) & 0UL)))), 10))][(safe_mod_func_uint32_t_u_u(p_963->tid, 14))]));
                (*l_883) ^= (((VECTOR(int64_t, 16))(p_963->g_882.xxxwyxwyyzzxywyx)).s2 , ((*l_854) = (*p_963->g_99)));
            }
            (*p_963->g_99) = ((*l_854) = (l_884 < (l_875.s4 || (((*l_899) |= (((safe_rshift_func_uint8_t_u_s((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))((l_887 = (p_963->g_850.x , p_963->g_650.sb)), p_963->g_805.z, 0xD147C3B8L, 1UL)).wwwxxxzyyyyzwyzw)).sd | p_963->g_803.y), p_963->g_comm_values[p_963->tid])) || (((safe_sub_func_int8_t_s_s((((VECTOR(uint64_t, 8))(l_890.zxyxzxyz)).s0 , ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_963->g_894.s25e6)).odd)).even)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(0x89L, (&p_963->g_801[7][0] == ((*l_896) = p_963->g_895)), p_963->g_747.sf, p_963->g_305.s3, l_897[2][0][0], ((VECTOR(uint8_t, 2))(0x24L)), 0x86L)), ((VECTOR(uint8_t, 8))(0x3CL))))).s46)).odd)) >= p_963->g_100[2][0])), p_963->g_874.s7)) > l_898) , l_873.sd)) == p_963->g_820.s8)) <= p_963->g_85))));
            if (((*l_854) = (((+((**p_963->g_681) = ((VECTOR(int16_t, 8))(p_963->g_902.s5de7592f)).s4)) , ((safe_sub_func_uint8_t_u_u(((void*)0 == l_806), ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, (-1L))), (-1L), 0x09L)).xyxyzyzzyxxwyxxw, ((VECTOR(int8_t, 4))(3L, ((VECTOR(int8_t, 2))(0x11L, 0x41L)), 0x55L)).xxwzwzxwxyzxzwww))).sa)) <= (*p_963->g_99))) & ((l_875.s0 , &p_963->g_281) != (void*)0))))
            { /* block id: 425 */
                uint16_t *l_910[5][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint16_t **l_909 = &l_910[0][7];
                uint64_t *l_916 = (void*)0;
                uint64_t *l_917 = &p_963->g_85;
                int32_t l_918 = (-4L);
                VECTOR(int8_t, 2) l_928 = (VECTOR(int8_t, 2))(0L, 0x59L);
                uint64_t **l_941 = &l_916;
                int32_t l_942 = 1L;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_963->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[(safe_mod_func_uint32_t_u_u((((*p_963->g_99) = (-1L)) < (l_863 , ((l_898 , ((l_918 ^= (((*l_917) &= (safe_mul_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(((((*l_909) = p_963->g_682) == p_963->g_682) , p_963->g_437.y), ((((VECTOR(int64_t, 16))((-1L), ((VECTOR(int64_t, 4))(p_963->g_911.sdb07)), 0x39652CC47485EAADL, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 2))(p_963->g_912.s07)).yxyxxyxxxxxxxyxy, ((VECTOR(int64_t, 16))(l_913.s7160132322100644))))).sa4ae, ((VECTOR(int64_t, 2))(p_963->g_914.s2a)).yxxy))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_915.yw)).yyyx)), 1L, 1L)).sa , ((((*l_740) = &p_963->g_667[2][0][3]) != &l_863) == (p_963->g_281 | 1L))) , (*p_963->g_682)))) , FAKE_DIVERGE(p_963->group_2_offset, get_group_id(2), 10)) >= l_875.s3), p_963->g_612.x))) , p_963->g_31.z)) , (void*)0)) != (void*)0))), 10))][(safe_mod_func_uint32_t_u_u(p_963->tid, 14))]));
                l_942 |= (p_963->g_285 | ((l_863 >= (+(((VECTOR(uint16_t, 8))(l_919.yzywyzww)).s7 > (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_963->g_922.xzxwwyyz)).s2, (((p_963->g_924.y = (p_963->g_823.z , ((*l_854) , ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(0L, 0x56L)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(l_923.s3214335023716634)).s41))))), ((VECTOR(int8_t, 8))(p_963->g_924.yxxxyxxy)).s4, (FAKE_DIVERGE(p_963->local_0_offset, get_local_id(0), 10) <= l_918), ((VECTOR(int8_t, 2))(0x5FL, 0x7EL)), ((VECTOR(int8_t, 4))(p_963->g_925.yyzx)), (-1L), 6L, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(l_926.zxzy)), ((VECTOR(int8_t, 4))(l_927.s2eb4)), ((VECTOR(int8_t, 16))(l_928.yyyyxxyyxyxyxxxy)).s6c35))))).sf8))).lo))) >= ((VECTOR(uint8_t, 4))(p_963->g_929.s711a)).y) > (l_930 , (((((FAKE_DIVERGE(p_963->local_1_offset, get_local_id(1), 10) && ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_931.s3532)).wwzyywww)), ((VECTOR(int16_t, 8))((-1L), 0x5087L, 0x4783L, (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(1L, (safe_rshift_func_int8_t_s_s((((*l_941) = l_940) != l_940), 5)))), l_875.s0)), p_963->g_157.s1)), ((VECTOR(int16_t, 2))(0L)), 0x26EFL, 0x1C61L))))).s44, ((VECTOR(int16_t, 2))(0x402DL))))).yxxy)).yzyyxzxz)), ((VECTOR(int16_t, 4))(0x0F37L)), ((VECTOR(int16_t, 2))((-1L))), 0L, 0x2ECCL)).s2) != 0x3AL) ^ 0x65L) <= p_963->g_489) ^ l_898)))))))) <= 0x5B18E7E4L));
            }
            else
            { /* block id: 437 */
                uint8_t l_943 = 0x70L;
                if (l_943)
                    break;
                return p_963->g_192.y;
            }
            for (l_930 = 0; (l_930 > 9); ++l_930)
            { /* block id: 443 */
                return l_863;
            }
        }
        (*p_963->g_497) = (!(safe_rshift_func_uint8_t_u_s((0x4D0EC139L >= (safe_unary_minus_func_int32_t_s(((&l_871 == &l_871) && ((safe_div_func_uint8_t_u_u((&l_940 != (l_952 = p_963->g_815)), (safe_sub_func_int16_t_s_s((((p_963->g_815 != (((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((*p_963->g_682) = (**p_963->g_681)), 0x4C84L)), (((safe_rshift_func_uint16_t_u_u((p_963->g_682 == p_963->g_682), p_963->g_860.s4)) , (void*)0) == (void*)0))) , p_963->g_922.y) , p_963->g_815)) || p_963->g_438.s5) & p_963->g_902.sa), (*l_854))))) , p_963->g_747.s3))))), p_963->g_157.s6)));
    }
    else
    { /* block id: 450 */
        int32_t *l_961 = &p_963->g_475[3];
        int32_t **l_962[8] = {(void*)0,&p_963->g_417,(void*)0,(void*)0,&p_963->g_417,(void*)0,(void*)0,&p_963->g_417};
        int i;
        (*p_963->g_725) = l_961;
        return p_963->g_594.x;
    }
    return p_963->g_924.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_963->g_comm_values p_963->g_31 p_963->g_52 p_963->g_66 p_963->l_comm_values p_963->g_91 p_963->g_99 p_963->g_85 p_963->g_157 p_963->g_100 p_963->g_192 p_963->g_239 p_963->g_255 p_963->g_305 p_963->g_308 p_963->g_266 p_963->g_345 p_963->g_346 p_963->g_375 p_963->g_386 p_963->g_390 p_963->g_391 p_963->g_392 p_963->g_393 p_963->g_171 p_963->g_401 p_963->g_416 p_963->g_437 p_963->g_438 p_963->g_446 p_963->g_475 p_963->g_484 p_963->g_489 p_963->g_419 p_963->g_490 p_963->g_285 p_963->g_497 p_963->g_281 p_963->g_592 p_963->g_593 p_963->g_594 p_963->g_606 p_963->g_612 p_963->g_309 p_963->g_664 p_963->g_417 p_963->g_681 p_963->g_725
 * writes: p_963->g_52 p_963->g_66 p_963->g_85 p_963->g_100 p_963->g_171 p_963->g_31 p_963->g_239 p_963->g_255 p_963->g_345 p_963->g_346 p_963->g_386 p_963->g_417 p_963->g_475 p_963->g_484 p_963->g_489 p_963->g_281 p_963->g_591
 */
int32_t  func_2(int64_t  p_3, int32_t  p_4, struct S0 * p_963)
{ /* block id: 5 */
    VECTOR(int64_t, 4) l_28 = (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 1L), 1L);
    VECTOR(uint16_t, 16) l_29 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xD484L), 0xD484L), 0xD484L, 0UL, 0xD484L, (VECTOR(uint16_t, 2))(0UL, 0xD484L), (VECTOR(uint16_t, 2))(0UL, 0xD484L), 0UL, 0xD484L, 0UL, 0xD484L);
    VECTOR(uint16_t, 16) l_30 = (VECTOR(uint16_t, 16))(0x1F0EL, (VECTOR(uint16_t, 4))(0x1F0EL, (VECTOR(uint16_t, 2))(0x1F0EL, 65533UL), 65533UL), 65533UL, 0x1F0EL, 65533UL, (VECTOR(uint16_t, 2))(0x1F0EL, 65533UL), (VECTOR(uint16_t, 2))(0x1F0EL, 65533UL), 0x1F0EL, 65533UL, 0x1F0EL, 65533UL);
    int8_t l_47 = (-2L);
    VECTOR(uint16_t, 2) l_492 = (VECTOR(uint16_t, 2))(0UL, 5UL);
    int32_t l_494 = 0x49BFDBF6L;
    int64_t l_495[1];
    int64_t l_498 = 0x2772E0F6F2976FC3L;
    VECTOR(int32_t, 2) l_673 = (VECTOR(int32_t, 2))(0x48043446L, (-1L));
    int16_t **l_683 = &p_963->g_682;
    int32_t *l_686[10] = {&p_963->g_475[3],(void*)0,&p_963->g_475[3],&p_963->g_475[3],(void*)0,&p_963->g_475[3],&p_963->g_475[3],(void*)0,&p_963->g_475[3],&p_963->g_475[3]};
    uint8_t l_696 = 1UL;
    int32_t l_706 = 0x6E6B7417L;
    int64_t l_710 = 0x7ECB6E889279772DL;
    uint16_t l_711 = 3UL;
    uint8_t l_722 = 246UL;
    int i;
    for (i = 0; i < 1; i++)
        l_495[i] = 0x3116CA6AFC0D3F49L;
    if ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x19D94B4B13281D21L, 0x6B32A831D26EC17EL)))).yxxx, (int64_t)(safe_div_func_uint16_t_u_u(p_3, ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_963->g_comm_values[p_963->tid], ((VECTOR(uint8_t, 16))((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(func_15(func_21((safe_sub_func_uint16_t_u_u(1UL, ((l_494 = (((VECTOR(int64_t, 8))(l_28.yxyzwzxy)).s0 , ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_29.s07374fd5)).s2200335100300015)).odd, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_30.s7fc0)), 0x6AE3L, 0x752EL, 9UL, 1UL)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(GROUP_DIVERGE(0, 1), FAKE_DIVERGE(p_963->group_1_offset, get_group_id(1), 10), 0xF29CL, 0x4F16L)), ((VECTOR(uint16_t, 4))(p_963->g_31.zwwz)), p_963->g_comm_values[p_963->tid], func_32(l_30.s7, (l_492.y |= func_37((safe_div_func_int16_t_s_s(p_963->g_31.z, (safe_div_func_int64_t_s_s(l_47, (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(0x3565L, (p_963->g_52 &= p_963->g_31.y))), 65526UL)))))), p_3, l_30.s9, p_963->g_31.x, p_963->g_31.y, p_963)), l_30.s8, p_963->g_192.y, p_963), 65535UL, 0x8108L, ((VECTOR(uint16_t, 4))(1UL)))).even))).s6755326026254606))).s79)).yyyy, ((VECTOR(uint16_t, 4))(5UL)), ((VECTOR(uint16_t, 4))(0xF934L))))).x)) >= 0L))), l_495[0], p_963->g_375.s1, p_3, p_963), l_495[0], p_963->g_390.y, l_498, l_495[0], p_963), p_963->g_490.s7)), p_963->g_437.w)), 0xCEL, ((VECTOR(uint8_t, 2))(247UL)), FAKE_DIVERGE(p_963->group_0_offset, get_group_id(0), 10), p_3, ((VECTOR(uint8_t, 2))(255UL)), 0xF2L, FAKE_DIVERGE(p_963->local_0_offset, get_local_id(0), 10), l_47, p_963->g_391.y, ((VECTOR(uint8_t, 4))(1UL)))).s8)), p_963->g_419)) , l_494)))))).odd, ((VECTOR(int64_t, 2))(0x3A1706987FFCC955L))))), ((VECTOR(int64_t, 2))(5L)), l_47, 0x1439038E60504758L, ((VECTOR(int64_t, 2))((-6L))), ((VECTOR(int64_t, 8))(6L)))).sdf46, ((VECTOR(int64_t, 4))((-1L))), ((VECTOR(int64_t, 4))(0x52C056D1F9D9BE3AL))))).xxwwyywy)).s1 , 0L))
    { /* block id: 292 */
        int8_t l_663[3];
        int i;
        for (i = 0; i < 3; i++)
            l_663[i] = 0L;
        l_494 |= (safe_sub_func_uint8_t_u_u(0x73L, l_663[0]));
    }
    else
    { /* block id: 294 */
        int32_t l_670 = 6L;
        int32_t l_671 = 0x2B0C5B56L;
        int32_t l_672[5][10][5] = {{{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L}},{{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L}},{{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L}},{{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L}},{{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L},{1L,(-4L),0x0D3001A4L,0x1E84B45BL,0x3E8CC0C2L}}};
        uint64_t l_674 = 0xF17113485922E353L;
        int i, j, k;
        (*p_963->g_664) = &l_494;
        for (p_963->g_52 = 0; (p_963->g_52 <= 26); p_963->g_52 = safe_add_func_int16_t_s_s(p_963->g_52, 3))
        { /* block id: 298 */
            int32_t *l_668 = &p_963->g_100[7][0];
            int32_t *l_669[7];
            int32_t **l_677[4][5][2] = {{{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417}},{{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417}},{{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417}},{{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417},{&p_963->g_417,&p_963->g_417}}};
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_669[i] = &p_963->g_100[4][0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_963->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[(safe_mod_func_uint32_t_u_u((l_494 < l_29.s7), 10))][(safe_mod_func_uint32_t_u_u(p_963->tid, 14))]));
            --l_674;
            (*p_963->g_664) = (*p_963->g_416);
            (*l_668) ^= 0x5AC57947L;
        }
        for (p_963->g_171 = 3; (p_963->g_171 >= (-11)); p_963->g_171--)
        { /* block id: 308 */
            VECTOR(int32_t, 8) l_680 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L);
            int i;
            (*p_963->g_417) |= (((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(l_680.s22642112)).s2001453617520045, ((VECTOR(int32_t, 2))(0L, 0L)).yxxyyxyxyyyxxyxy))).se , p_4);
            l_683 = p_963->g_681;
        }
        for (l_670 = (-30); (l_670 == (-11)); ++l_670)
        { /* block id: 314 */
            int8_t l_687[5] = {0x02L,0x02L,0x02L,0x02L,0x02L};
            int32_t l_688 = 0x5D488ECAL;
            int32_t l_689 = 3L;
            int32_t l_690 = 0x75035411L;
            int32_t l_691 = 0x053149CFL;
            int32_t l_692 = (-2L);
            int32_t l_693 = 0x457BE697L;
            int32_t l_694[10][3][8] = {{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}},{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}},{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}},{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}},{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}},{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}},{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}},{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}},{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}},{{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)},{0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L),0x1190012EL,0x1190012EL,(-6L)}}};
            int32_t l_695[7] = {0x735A81E9L,0x735A81E9L,0x735A81E9L,0x735A81E9L,0x735A81E9L,0x735A81E9L,0x735A81E9L};
            int i, j, k;
            l_686[1] = (*p_963->g_416);
            (*p_963->g_417) = (*p_963->g_99);
            ++l_696;
        }
    }
    for (p_4 = (-5); (p_4 > (-22)); p_4--)
    { /* block id: 322 */
        int32_t l_705[1][8] = {{0x7FD24C85L,0x7FD24C85L,0x7FD24C85L,0x7FD24C85L,0x7FD24C85L,0x7FD24C85L,0x7FD24C85L,0x7FD24C85L}};
        int32_t l_707 = (-1L);
        int32_t l_708 = 2L;
        VECTOR(int32_t, 8) l_709 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L);
        int i, j;
        for (l_498 = 9; (l_498 <= (-16)); l_498 = safe_sub_func_uint32_t_u_u(l_498, 1))
        { /* block id: 325 */
            for (p_963->g_484 = 0; (p_963->g_484 == 7); p_963->g_484 = safe_add_func_uint64_t_u_u(p_963->g_484, 4))
            { /* block id: 328 */
                if ((*p_963->g_497))
                    break;
            }
            return p_4;
        }
        l_711--;
    }
    for (l_706 = 0; (l_706 != 4); l_706 = safe_add_func_uint16_t_u_u(l_706, 4))
    { /* block id: 337 */
        int32_t l_716 = (-1L);
        int32_t l_717 = 4L;
        int32_t l_718 = 1L;
        int32_t l_719 = 3L;
        int32_t l_720 = (-1L);
        int32_t l_721 = 0x5F7926E6L;
        if (l_716)
            break;
        ++l_722;
        (*p_963->g_725) = &l_719;
    }
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_963->g_446 p_963->g_157 p_963->g_52 p_963->g_192 p_963->g_85 p_963->g_497 p_963->g_489 p_963->g_281 p_963->g_99 p_963->g_100 p_963->g_171 p_963->g_386 p_963->g_266 p_963->g_475 p_963->g_592 p_963->g_593 p_963->g_594 p_963->g_401 p_963->g_606 p_963->g_437 p_963->g_612 p_963->g_31 p_963->g_91 p_963->g_308 p_963->g_309
 * writes: p_963->g_85 p_963->g_489 p_963->g_386 p_963->g_281 p_963->g_171 p_963->g_591 p_963->g_100
 */
int16_t  func_15(uint32_t  p_16, int64_t  p_17, int32_t  p_18, uint32_t  p_19, uint8_t  p_20, struct S0 * p_963)
{ /* block id: 199 */
    uint16_t l_505 = 65526UL;
    uint8_t *l_518 = (void*)0;
    int32_t l_519 = 0x6954C0FEL;
    int32_t *l_521[1];
    int32_t **l_520 = &l_521[0];
    int32_t l_523 = 0x21486665L;
    VECTOR(uint32_t, 8) l_653 = (VECTOR(uint32_t, 8))(0x3627B1A5L, (VECTOR(uint32_t, 4))(0x3627B1A5L, (VECTOR(uint32_t, 2))(0x3627B1A5L, 4294967295UL), 4294967295UL), 4294967295UL, 0x3627B1A5L, 4294967295UL);
    int32_t *l_659 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_521[i] = &p_963->g_419;
    if ((((*l_520) = ((safe_sub_func_uint32_t_u_u(((!0x21E98307DFDAA9F4L) && ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_963->global_1_offset, get_global_id(1), 10), GROUP_DIVERGE(2, 1))) , (2UL == p_19)), l_505)) , ((p_963->g_446.x | (safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((-2L), p_963->g_157.s3)) != ((l_519 = (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s((p_20 != p_963->g_52), p_963->g_192.x)), 65534UL)), 0L))) ^ 1L)), 0x143BL)) && p_16), 0x42A0L))) & 0xFFL))), l_505)) , (void*)0)) != &p_18))
    { /* block id: 202 */
        int32_t *l_522[4][8][2] = {{{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519}},{{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519}},{{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519}},{{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519},{&l_519,&l_519}}};
        uint8_t l_524[7][9][1] = {{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}}};
        uint64_t *l_529 = (void*)0;
        uint64_t *l_530 = &p_963->g_85;
        int64_t *l_538 = (void*)0;
        int64_t **l_537 = &l_538;
        int8_t *l_547 = &p_963->g_386;
        uint32_t *l_548 = (void*)0;
        uint32_t *l_549 = &p_963->g_281;
        int64_t l_626 = 6L;
        int i, j, k;
        l_524[2][7][0]++;
        l_523 = (safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(1UL, 0x12L)).even, (FAKE_DIVERGE(p_963->group_0_offset, get_group_id(0), 10) && (((*l_530)--) >= (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(p_18, 7)) == ((void*)0 != l_537)), (((*l_549) = ((((*l_547) = (l_519 , (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((*p_963->g_497) |= 4L), (safe_add_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(9L, l_523)) && 0xA4DFC5AB1D1A01A0L), p_963->g_281)))), 5)))) > l_505) < 18446744073709551613UL)) , l_519)))))));
        if (p_19)
        { /* block id: 209 */
            VECTOR(uint32_t, 2) l_559 = (VECTOR(uint32_t, 2))(0x8BDF605CL, 0x02A7503AL);
            int i;
            for (p_19 = 5; (p_19 != 20); ++p_19)
            { /* block id: 212 */
                l_519 ^= (*p_963->g_497);
                for (l_519 = 0; (l_519 >= 6); l_519 = safe_add_func_int16_t_s_s(l_519, 1))
                { /* block id: 216 */
                    uint8_t l_554 = 0UL;
                    l_554--;
                    for (p_963->g_281 = 0; (p_963->g_281 >= 13); p_963->g_281 = safe_add_func_uint16_t_u_u(p_963->g_281, 2))
                    { /* block id: 220 */
                        if (l_559.y)
                            break;
                    }
                    if ((*p_963->g_99))
                        continue;
                }
            }
        }
        else
        { /* block id: 226 */
            int32_t *l_563 = &p_963->g_475[3];
            VECTOR(int8_t, 16) l_589 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x52L), 0x52L), 0x52L, (-1L), 0x52L, (VECTOR(int8_t, 2))((-1L), 0x52L), (VECTOR(int8_t, 2))((-1L), 0x52L), (-1L), 0x52L, (-1L), 0x52L);
            int8_t **l_600 = &l_547;
            int32_t l_625 = 0x6B62A428L;
            VECTOR(uint32_t, 8) l_654 = (VECTOR(uint32_t, 8))(0x99B525F1L, (VECTOR(uint32_t, 4))(0x99B525F1L, (VECTOR(uint32_t, 2))(0x99B525F1L, 0UL), 0UL), 0UL, 0x99B525F1L, 0UL);
            int i;
            for (p_963->g_171 = 6; (p_963->g_171 > 20); p_963->g_171 = safe_add_func_int64_t_s_s(p_963->g_171, 6))
            { /* block id: 229 */
                int32_t **l_562 = &l_522[3][5][1];
                if (p_18)
                    break;
                (*l_562) = &l_523;
                l_563 = &l_519;
                if ((atomic_inc(&p_963->g_atomic_input[57 * get_linear_group_id() + 55]) == 3))
                { /* block id: 234 */
                    int32_t l_564 = 0x4DA5EAA4L;
                    int16_t l_577 = (-2L);
                    for (l_564 = 24; (l_564 != (-15)); l_564 = safe_sub_func_uint16_t_u_u(l_564, 9))
                    { /* block id: 237 */
                        uint32_t l_567 = 4294967288UL;
                        int64_t l_568 = (-1L);
                        uint32_t l_569 = 4UL;
                        int8_t l_572 = 0x03L;
                        int8_t *l_571 = &l_572;
                        int8_t **l_570 = &l_571;
                        int8_t **l_573 = &l_571;
                        int8_t **l_574 = &l_571;
                        int32_t l_576 = 0x5836D237L;
                        int32_t *l_575[10] = {&l_576,(void*)0,&l_576,(void*)0,&l_576,&l_576,(void*)0,&l_576,(void*)0,&l_576};
                        int i;
                        l_568 = l_567;
                        l_574 = (l_573 = (l_569 , (GROUP_DIVERGE(2, 1) , l_570)));
                        l_575[7] = (void*)0;
                    }
                    l_577 = 0x043EBFCBL;
                    unsigned int result = 0;
                    result += l_564;
                    result += l_577;
                    atomic_add(&p_963->g_special_values[57 * get_linear_group_id() + 55], result);
                }
                else
                { /* block id: 244 */
                    (1 + 1);
                }
            }
            for (p_963->g_386 = 0; (p_963->g_386 != 15); p_963->g_386 = safe_add_func_uint16_t_u_u(p_963->g_386, 2))
            { /* block id: 250 */
                VECTOR(uint16_t, 4) l_586 = (VECTOR(uint16_t, 4))(0x8542L, (VECTOR(uint16_t, 2))(0x8542L, 0UL), 0UL);
                int64_t *l_590 = (void*)0;
                int16_t l_595 = (-7L);
                int32_t l_601 = 0x3E2FDCC7L;
                int32_t l_613[7][6] = {{0x4639A78AL,0x6CE3337CL,4L,0x0EFA594BL,0x6CE3337CL,0x0EFA594BL},{0x4639A78AL,0x6CE3337CL,4L,0x0EFA594BL,0x6CE3337CL,0x0EFA594BL},{0x4639A78AL,0x6CE3337CL,4L,0x0EFA594BL,0x6CE3337CL,0x0EFA594BL},{0x4639A78AL,0x6CE3337CL,4L,0x0EFA594BL,0x6CE3337CL,0x0EFA594BL},{0x4639A78AL,0x6CE3337CL,4L,0x0EFA594BL,0x6CE3337CL,0x0EFA594BL},{0x4639A78AL,0x6CE3337CL,4L,0x0EFA594BL,0x6CE3337CL,0x0EFA594BL},{0x4639A78AL,0x6CE3337CL,4L,0x0EFA594BL,0x6CE3337CL,0x0EFA594BL}};
                uint8_t *l_620 = &l_524[2][7][0];
                int32_t **l_633 = &l_521[0];
                int8_t **l_636[10] = {&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547};
                VECTOR(uint32_t, 4) l_651 = (VECTOR(uint32_t, 4))(0xAC0E377DL, (VECTOR(uint32_t, 2))(0xAC0E377DL, 0x606427B0L), 0x606427B0L);
                int i, j;
                for (p_963->g_85 = (-30); (p_963->g_85 == 22); p_963->g_85 = safe_add_func_int8_t_s_s(p_963->g_85, 1))
                { /* block id: 253 */
                    (*p_963->g_497) = (p_963->g_266.z , 0x1ACF4AC0L);
                }
                if ((safe_rshift_func_int16_t_s_s((-1L), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(l_586.zxzzywxwzzxzwyxy)).s9, ((p_963->g_475[3] >= (((((*l_549) = ((p_17 ^ (((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))((-1L), 0x62L, ((VECTOR(int8_t, 2))(l_589.s31)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((-1L), p_16, 0x23L, ((*l_537) != (p_963->g_591 = l_590)), 0x29L, 6L, (-1L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_963->g_592.sf9)).xxxy)), 0x64L, p_20, ((VECTOR(int8_t, 8))(p_963->g_593.xyyyyxyy)).s4, 0x21L, 0x3AL)).s7e)), 0x7EL, 0x4EL)), ((VECTOR(int8_t, 8))(p_963->g_594.yxxyyyxy)))))))).s4002373164275241, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(1L, 0x3DL)).xyxx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_963->g_489, ((VECTOR(int8_t, 2))(0x2CL)), (-7L))))).even, ((VECTOR(int8_t, 2))((-2L)))))).xxyxxyxxxxyyxxxy, ((VECTOR(int8_t, 16))(1L))))).s370e, (int8_t)0x0BL, (int8_t)(-6L)))).lo)).yxyx))).xywxzxyxwywyxxyx))), ((VECTOR(int8_t, 16))(0L))))).s9, 0x69L)) , l_595) ^ 8L)) || 0x2EL)) == p_20) & (-3L)) || 0x07L)) == p_18))) ^ p_963->g_100[7][0]), p_963->g_592.sa, 1L, 0x7601L, ((VECTOR(int16_t, 2))(7L)), p_19, ((VECTOR(int16_t, 8))(1L)), 0x6899L)).sdc))).even)))
                { /* block id: 258 */
                    uint64_t l_596 = 0x914D359E066E2547L;
                    return l_596;
                }
                else
                { /* block id: 260 */
                    uint16_t *l_609 = &l_505;
                    int32_t l_614 = (-10L);
                    int8_t *l_615 = &p_963->g_171;
                    uint8_t **l_618 = &l_518;
                    int32_t l_657[9] = {8L,0L,8L,8L,0L,8L,8L,0L,8L};
                    int32_t *l_658 = &l_657[7];
                    int i;
                    if (p_16)
                        break;
                    p_963->g_100[1][0] ^= (safe_unary_minus_func_uint32_t_u((+(safe_div_func_int64_t_s_s((l_601 = (&l_547 == l_600)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))((-10L), 0L)).xyxx, ((VECTOR(int64_t, 4))(1L, (safe_mul_func_uint8_t_u_u(p_963->g_401.z, (((((*l_615) = ((*l_563) <= (safe_sub_func_uint8_t_u_u(((((((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_963->g_606.sfc)), ((safe_sub_func_uint32_t_u_u(0x833C9F53L, ((l_613[0][4] ^= ((+((l_609 != (void*)0) & (safe_mod_func_int16_t_s_s(p_963->g_437.x, (((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 2))(8UL, 0xBF83FDBAC537B86CL)).xyyyxyyxyyyxyxyy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 8))(p_963->g_612.yyyxyxxy))))))).s1175705114030122))).se || (-1L)))))) > 6UL)) > p_18))) >= p_18), ((VECTOR(uint32_t, 4))(0UL)), 6UL)), ((VECTOR(uint32_t, 8))(4294967295UL))))).lo, ((VECTOR(uint32_t, 4))(0x6E464845L))))).z >= 0L) > p_963->g_437.y) < l_614) , p_963->g_31.z), p_17)))) != p_20) > (-1L)) & 4UL))), (-2L), (-5L)))))), ((VECTOR(int64_t, 2))(7L)), 1L, (-1L))).s2)))));
                    p_963->g_100[1][0] |= ((!(FAKE_DIVERGE(p_963->group_1_offset, get_group_id(1), 10) , (((l_614 , (((((safe_div_func_int16_t_s_s((*l_563), 0xB17EL)) < (((l_601 = ((FAKE_DIVERGE(p_963->global_2_offset, get_global_id(2), 10) , (((*l_618) = &p_20) == ((((safe_unary_minus_func_int8_t_s(l_505)) , l_615) == &p_963->g_171) , l_620))) > (safe_add_func_uint8_t_u_u((0UL & 0x2B081D04L), 5L)))) == p_20) != l_614)) != l_614) < l_586.z) , (void*)0)) != (void*)0) != p_963->g_91.s8))) && 0x08432705ED53BCC6L);
                    for (l_519 = (-2); (l_519 > 24); l_519++)
                    { /* block id: 271 */
                        int32_t **l_637 = (void*)0;
                        int32_t **l_638 = &p_963->g_417;
                        int32_t **l_639[1][4];
                        VECTOR(uint32_t, 4) l_652 = (VECTOR(uint32_t, 4))(0x231E8D5AL, (VECTOR(uint32_t, 2))(0x231E8D5AL, 0x764403B1L), 0x764403B1L);
                        int64_t *l_656 = (void*)0;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_639[i][j] = (void*)0;
                        }
                        l_626 = (l_625 = (*p_963->g_497));
                        l_614 = (safe_sub_func_uint16_t_u_u((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(5L, (safe_mul_func_int8_t_s_s((((p_963->g_631[1] != l_633) < ((((p_963->g_100[4][0] &= (l_523 = p_17)) >= l_519) , p_963->g_634) == l_636[1])) || p_20), (&l_625 != (l_563 = &l_614)))), (-1L), (*l_563), ((VECTOR(int16_t, 2))(0x664BL)), 0L, (-9L))))).s3 & p_19) != p_19) & p_963->g_386), 65527UL));
                        l_657[7] &= (safe_add_func_int16_t_s_s((0x612CL == (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((((l_614 <= ((safe_div_func_int8_t_s_s(((*p_963->g_308) == ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0L, (((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 8))(0xF1FB75C4L, p_963->g_192.z, ((*l_549)++), 0x2032EA7EL, 4294967294UL, ((VECTOR(uint32_t, 2))(0xFD3BA96EL, 8UL)), 4294967295UL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_963->g_650.s76)).xxxxyyyxxyxxyyxy)).sd8)).xyyxxxxy, ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_651.xz)).xyxxxxxyyyxyyyxx)).sf2ef, ((VECTOR(uint32_t, 8))(((*l_549) = p_20), ((VECTOR(uint32_t, 4))(l_652.xzzx)), ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(l_653.s27)), ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 2))(l_654.s32)).yyyy, ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(p_963->g_655.s15354675)).s52))).xyxx))).hi, ((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 2))(9UL, 0xEF7E6776L)).xyxxyxxyxxxxyyxy, (uint32_t)((p_16 , &p_963->g_417) != (void*)0)))).s94))), ((VECTOR(uint32_t, 2))(1UL))))), 4294967287UL)).even))).wxyxyzwx))).s1 > p_16), 0x53D4816EABDB071BL, (-1L), ((VECTOR(int64_t, 2))(0x214BE26CFD504797L)), 0x2335AED52A008398L, 5L)).lo)).z & p_20) , l_656)), l_614)) >= (*l_563))) ^ 0x76D593125866B22CL) ^ 0xFAL) | 3L), p_18)) ^ 0UL), p_963->g_612.x))), FAKE_DIVERGE(p_963->global_1_offset, get_global_id(1), 10)));
                        l_658 = &l_601;
                    }
                }
                return p_963->g_91.se;
            }
            l_659 = l_549;
        }
    }
    else
    { /* block id: 288 */
        int64_t l_660 = (-1L);
        l_660 = p_16;
    }
    return p_963->g_192.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_963->g_497
 * writes: p_963->g_489
 */
uint32_t  func_21(uint32_t  p_22, uint32_t  p_23, int64_t  p_24, int64_t  p_25, struct S0 * p_963)
{ /* block id: 196 */
    uint8_t l_496 = 0x02L;
    (*p_963->g_497) = ((-5L) != l_496);
    return l_496;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_32(uint16_t  p_33, uint32_t  p_34, int64_t  p_35, int32_t  p_36, struct S0 * p_963)
{ /* block id: 193 */
    int16_t l_493 = 0x0D2AL;
    return l_493;
}


/* ------------------------------------------ */
/* 
 * reads : p_963->g_66 p_963->g_31 p_963->l_comm_values p_963->g_91 p_963->g_99 p_963->g_85 p_963->g_157 p_963->g_100 p_963->g_192 p_963->g_239 p_963->g_255 p_963->g_305 p_963->g_308 p_963->g_266 p_963->g_345 p_963->g_346 p_963->g_375 p_963->g_386 p_963->g_390 p_963->g_391 p_963->g_392 p_963->g_393 p_963->g_171 p_963->g_401 p_963->g_416 p_963->g_437 p_963->g_438 p_963->g_446 p_963->g_475 p_963->g_484 p_963->g_489 p_963->g_419 p_963->g_490 p_963->g_285
 * writes: p_963->g_52 p_963->g_66 p_963->g_85 p_963->g_100 p_963->g_171 p_963->g_31 p_963->g_239 p_963->g_255 p_963->g_345 p_963->g_346 p_963->g_386 p_963->g_417 p_963->g_475 p_963->g_484 p_963->g_489
 */
uint32_t  func_37(int16_t  p_38, int8_t  p_39, uint16_t  p_40, uint32_t  p_41, int32_t  p_42, struct S0 * p_963)
{ /* block id: 7 */
    int32_t *l_60 = &p_963->g_52;
    int16_t *l_65 = &p_963->g_66;
    int32_t l_482 = 0x415D29AFL;
    int32_t *l_487 = (void*)0;
    int32_t *l_488 = &p_963->g_489;
    uint64_t *l_491[5];
    int i;
    for (i = 0; i < 5; i++)
        l_491[i] = &p_963->g_345[2];
    (*l_488) &= (safe_rshift_func_int8_t_s_s(func_55(((*l_60) = 1L), func_61(((*l_65) |= 1L), p_38, p_38, p_963), (0x6F44L || (safe_add_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(p_963->g_391.y, 1L)) , (safe_div_func_uint8_t_u_u((l_482 > 0x98L), p_963->g_390.x))) == p_38) , l_482), p_38))), p_41, p_963), 5));
    (*l_488) = (p_963->g_419 || (p_963->g_484 |= ((VECTOR(uint64_t, 16))(p_963->g_490.s3546717035373152)).sd));
    return p_963->g_285;
}


/* ------------------------------------------ */
/* 
 * reads : p_963->g_484 p_963->g_99 p_963->g_100
 * writes: p_963->g_484 p_963->g_100
 */
int8_t  func_55(int32_t  p_56, uint64_t  p_57, uint8_t  p_58, int32_t  p_59, struct S0 * p_963)
{ /* block id: 184 */
    int32_t *l_483[6][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int i, j, k;
    p_963->g_484++;
    (*p_963->g_99) ^= (p_59 , 1L);
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_963->g_66 p_963->g_31 p_963->l_comm_values p_963->g_91 p_963->g_99 p_963->g_85 p_963->g_157 p_963->g_100 p_963->g_192 p_963->g_239 p_963->g_255 p_963->g_305 p_963->g_308 p_963->g_266 p_963->g_345 p_963->g_346 p_963->g_375 p_963->g_386 p_963->g_390 p_963->g_391 p_963->g_392 p_963->g_393 p_963->g_171 p_963->g_401 p_963->g_416 p_963->g_437 p_963->g_438 p_963->g_446 p_963->g_475
 * writes: p_963->g_66 p_963->g_85 p_963->g_100 p_963->g_171 p_963->g_31 p_963->g_239 p_963->g_255 p_963->g_345 p_963->g_346 p_963->g_386 p_963->g_417 p_963->g_475
 */
uint64_t  func_61(int16_t  p_62, uint32_t  p_63, uint32_t  p_64, struct S0 * p_963)
{ /* block id: 10 */
    int32_t *l_472 = (void*)0;
    int32_t *l_473 = (void*)0;
    int32_t *l_474 = &p_963->g_475[3];
    for (p_963->g_66 = 1; (p_963->g_66 >= 16); p_963->g_66 = safe_add_func_int16_t_s_s(p_963->g_66, 8))
    { /* block id: 13 */
        return p_963->g_31.z;
    }
    (*l_474) ^= (0xB1L == (func_69(p_62, p_963->g_66, p_64, p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))], p_963) == (~p_64)));
    return p_963->g_255.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_963->g_31 p_963->g_91 p_963->g_99 p_963->g_85 p_963->g_157 p_963->g_66 p_963->g_100 p_963->g_192 p_963->l_comm_values p_963->g_239 p_963->g_255 p_963->g_305 p_963->g_308 p_963->g_266 p_963->g_345 p_963->g_346 p_963->g_375 p_963->g_386 p_963->g_390 p_963->g_391 p_963->g_392 p_963->g_393 p_963->g_171 p_963->g_401 p_963->g_416 p_963->g_437 p_963->g_438 p_963->g_446
 * writes: p_963->g_85 p_963->g_100 p_963->g_171 p_963->g_66 p_963->g_31 p_963->g_239 p_963->g_255 p_963->g_345 p_963->g_346 p_963->g_386 p_963->g_417
 */
int8_t  func_69(uint8_t  p_70, int64_t  p_71, uint64_t  p_72, uint8_t  p_73, struct S0 * p_963)
{ /* block id: 16 */
    int64_t l_76 = 0x7C2923F8C0E5C5CCL;
    uint64_t *l_84 = &p_963->g_85;
    int16_t *l_86 = (void*)0;
    int64_t *l_94 = &l_76;
    int32_t l_95 = (-1L);
    int32_t *l_418 = &p_963->g_419;
    VECTOR(int64_t, 16) l_422 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x00024F99A347A0E3L), 0x00024F99A347A0E3L), 0x00024F99A347A0E3L, 1L, 0x00024F99A347A0E3L, (VECTOR(int64_t, 2))(1L, 0x00024F99A347A0E3L), (VECTOR(int64_t, 2))(1L, 0x00024F99A347A0E3L), 1L, 0x00024F99A347A0E3L, 1L, 0x00024F99A347A0E3L);
    int32_t *l_423 = &p_963->g_100[0][0];
    VECTOR(uint16_t, 2) l_430 = (VECTOR(uint16_t, 2))(65526UL, 0x1D5DL);
    VECTOR(uint16_t, 16) l_431 = (VECTOR(uint16_t, 16))(0xC291L, (VECTOR(uint16_t, 4))(0xC291L, (VECTOR(uint16_t, 2))(0xC291L, 0x3616L), 0x3616L), 0x3616L, 0xC291L, 0x3616L, (VECTOR(uint16_t, 2))(0xC291L, 0x3616L), (VECTOR(uint16_t, 2))(0xC291L, 0x3616L), 0xC291L, 0x3616L, 0xC291L, 0x3616L);
    VECTOR(int16_t, 16) l_436 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x710BL), 0x710BL), 0x710BL, (-1L), 0x710BL, (VECTOR(int16_t, 2))((-1L), 0x710BL), (VECTOR(int16_t, 2))((-1L), 0x710BL), (-1L), 0x710BL, (-1L), 0x710BL);
    VECTOR(uint32_t, 2) l_440 = (VECTOR(uint32_t, 2))(4294967288UL, 0x6B9513CFL);
    VECTOR(int16_t, 2) l_447 = (VECTOR(int16_t, 2))((-5L), 0L);
    int32_t l_456 = 0x5711C436L;
    int32_t l_457 = 0x3F5A7FC0L;
    int32_t l_458 = 0L;
    int32_t l_459 = 0x0E9CAAC2L;
    int32_t l_460 = 7L;
    int32_t l_461 = 0x160C5EE1L;
    int32_t l_462 = 0x7B3EF850L;
    int32_t l_463 = 0x2835BF67L;
    int8_t l_464 = 0x4FL;
    int32_t l_465 = (-1L);
    int32_t l_466 = 0x39792178L;
    int32_t l_467 = (-8L);
    VECTOR(int32_t, 8) l_468 = (VECTOR(int32_t, 8))(0x38DDDCC8L, (VECTOR(int32_t, 4))(0x38DDDCC8L, (VECTOR(int32_t, 2))(0x38DDDCC8L, 0x254AA897L), 0x254AA897L), 0x254AA897L, 0x38DDDCC8L, 0x254AA897L);
    uint32_t l_469 = 0x77F87BA3L;
    int i;
    l_95 = (safe_mul_func_int8_t_s_s((((((l_76 = 0xA0L) , ((safe_mul_func_uint8_t_u_u((func_79(((*l_84) = p_963->g_31.z), &p_963->g_66, l_86, (0x61D86E6AL & ((l_86 != (void*)0) , (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x791AL, (((*l_94) = ((VECTOR(int64_t, 8))(1L, (((VECTOR(uint8_t, 16))(p_963->g_91.se879cfd24bd9f5b6)).s0 >= (++p_73)), l_76, ((VECTOR(int64_t, 2))(0x59CE790008233887L)), 6L, (-3L), 0x435242359916A5C5L)).s4) >= l_95))), l_95)))), p_963) | l_95), l_95)) , l_418)) == (void*)0) & p_72) <= 0x77474D1EC7C141C0L), 0x2AL));
    (*l_423) = (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_422.sb0)).hi, (((VECTOR(uint16_t, 2))(1UL, 0x40F9L)).even , p_73)));
    for (p_71 = 0; (p_71 > 5); p_71++)
    { /* block id: 175 */
        VECTOR(uint32_t, 16) l_439 = (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x90CFD69CL), 0x90CFD69CL), 0x90CFD69CL, 4294967288UL, 0x90CFD69CL, (VECTOR(uint32_t, 2))(4294967288UL, 0x90CFD69CL), (VECTOR(uint32_t, 2))(4294967288UL, 0x90CFD69CL), 4294967288UL, 0x90CFD69CL, 4294967288UL, 0x90CFD69CL);
        uint32_t *l_441[5];
        int32_t l_442[1];
        VECTOR(uint16_t, 2) l_443 = (VECTOR(uint16_t, 2))(0x5A13L, 0xFC8BL);
        VECTOR(int16_t, 16) l_444 = (VECTOR(int16_t, 16))(0x48ABL, (VECTOR(int16_t, 4))(0x48ABL, (VECTOR(int16_t, 2))(0x48ABL, 1L), 1L), 1L, 0x48ABL, 1L, (VECTOR(int16_t, 2))(0x48ABL, 1L), (VECTOR(int16_t, 2))(0x48ABL, 1L), 0x48ABL, 1L, 0x48ABL, 1L);
        VECTOR(int16_t, 2) l_445 = (VECTOR(int16_t, 2))((-1L), 1L);
        int32_t l_452 = (-8L);
        int32_t *l_453 = &l_442[0];
        int32_t *l_454 = &p_963->g_100[7][0];
        int32_t *l_455[6][5] = {{&l_442[0],&l_452,&l_452,&l_95,&l_452},{&l_442[0],&l_452,&l_452,&l_95,&l_452},{&l_442[0],&l_452,&l_452,&l_95,&l_452},{&l_442[0],&l_452,&l_452,&l_95,&l_452},{&l_442[0],&l_452,&l_452,&l_95,&l_452},{&l_442[0],&l_452,&l_452,&l_95,&l_452}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_441[i] = &p_963->g_281;
        for (i = 0; i < 1; i++)
            l_442[i] = 0x30516263L;
        (*l_423) = ((&p_963->g_419 != (void*)0) , (safe_sub_func_uint8_t_u_u(0UL, (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 4))(l_430.xyxx)).hi, ((VECTOR(uint16_t, 16))(l_431.s92d02b030d819e72)).s3b))).xyyx)).lo)).hi, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(0x11L, ((VECTOR(int8_t, 2))(0x31L, 9L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((GROUP_DIVERGE(2, 1) == ((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(0x6179L, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(l_436.scd2d6704d1c6a4d0)).s72, ((VECTOR(int16_t, 2))((-8L), (-1L)))))), 1UL)).y, (1UL || ((VECTOR(int16_t, 8))((p_963->g_66 = ((((*p_963->g_99) ^ (l_442[0] = ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(p_963->g_437.xw)), ((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_963->g_438.s71)))), 1UL, 0x7C924B33L)).zyyxwyxzzxwxxxxz)).odd)).even, (uint32_t)(FAKE_DIVERGE(p_963->local_0_offset, get_local_id(0), 10) < ((1UL < (0x7BL >= FAKE_DIVERGE(p_963->global_2_offset, get_global_id(2), 10))) | GROUP_DIVERGE(0, 1)))))).xxyywzwxzzyzwxyy)).sf1)).yyxyxyxy, ((VECTOR(uint32_t, 2))(l_439.s5f)).yyyxyxyy))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(l_440.xyxyxyxyyyyyyxxy)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x51185709L, 0x18900FA0L)))), 4294967292UL, 6UL)).zzzywzywzzyywxxw))).s3663)).zwyxzwwx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x45587C88L, 0x63CCE0A8L)))).yyxxxxyx))).s27))).even)) || ((VECTOR(uint16_t, 16))(l_443.xyyyyxxxyyxyxyyy)).sd) == p_72)), ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_444.s412d0be0248581de)).sdb55)))).lo)).yxyy)).wxzywwyyywzwwzxw, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_445.xyyyxyxxyyyyxxxy)).odd)).s5132255237221522))).s2e, ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-6L), 0x4529L)))).yxxxyyxyyxyxxyyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_963->g_446.xx)))).yyyxxxyx))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_447.xy)).yyxy)), ((VECTOR(int16_t, 4))((-1L), ((VECTOR(int16_t, 2))(2L, 1L)), (-1L)))))))).sc2))), 2L, 0x7BEAL, (((safe_div_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(l_439.sb, 0x44L)) != FAKE_DIVERGE(p_963->group_2_offset, get_group_id(2), 10)), l_445.x)) >= l_452) & p_73), 3L, 0x750BL)).s7))), 18446744073709551615UL)) ^ (-9L))), 0L, 3L, (-4L))).xxyyxzyz)))).odd)), (-1L))).odd, ((VECTOR(uint8_t, 4))(0x9AL))))).z)))));
        l_469++;
    }
    return (*l_423);
}


/* ------------------------------------------ */
/* 
 * reads : p_963->g_99 p_963->g_85 p_963->g_157 p_963->g_66 p_963->g_91 p_963->g_100 p_963->g_192 p_963->l_comm_values p_963->g_31 p_963->g_239 p_963->g_255 p_963->g_305 p_963->g_308 p_963->g_266 p_963->g_345 p_963->g_346 p_963->g_375 p_963->g_386 p_963->g_390 p_963->g_391 p_963->g_392 p_963->g_393 p_963->g_171 p_963->g_401 p_963->g_416
 * writes: p_963->g_100 p_963->g_85 p_963->g_171 p_963->g_66 p_963->g_31 p_963->g_239 p_963->g_255 p_963->g_345 p_963->g_346 p_963->g_386 p_963->g_417
 */
uint64_t  func_79(uint64_t  p_80, int16_t * p_81, int16_t * p_82, int64_t  p_83, struct S0 * p_963)
{ /* block id: 21 */
    uint64_t l_98 = 0x657D2A19D8D7774CL;
    uint16_t *l_168[7][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_169 = (-7L);
    int8_t *l_170 = &p_963->g_171;
    int32_t l_172 = 0x2EC48A50L;
    int16_t l_173 = 1L;
    int32_t l_181 = (-1L);
    int32_t l_182[9] = {(-2L),0x4F6DA58DL,(-2L),(-2L),0x4F6DA58DL,(-2L),(-2L),0x4F6DA58DL,(-2L)};
    uint32_t l_183 = 0x5E1EA3A6L;
    int32_t l_193 = 1L;
    uint32_t l_196 = 0x9C4AB7F0L;
    uint8_t l_197 = 0x34L;
    int32_t l_207 = 1L;
    int64_t l_208 = 0x5F9DBF9705C1F3B2L;
    VECTOR(uint64_t, 8) l_229 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 2UL), 2UL), 2UL, 18446744073709551615UL, 2UL);
    VECTOR(int32_t, 4) l_256 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x13FCAF53L), 0x13FCAF53L);
    VECTOR(uint32_t, 4) l_263 = (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0xD9D8BA12L), 0xD9D8BA12L);
    VECTOR(uint16_t, 16) l_278 = (VECTOR(uint16_t, 16))(0xF65EL, (VECTOR(uint16_t, 4))(0xF65EL, (VECTOR(uint16_t, 2))(0xF65EL, 65535UL), 65535UL), 65535UL, 0xF65EL, 65535UL, (VECTOR(uint16_t, 2))(0xF65EL, 65535UL), (VECTOR(uint16_t, 2))(0xF65EL, 65535UL), 0xF65EL, 65535UL, 0xF65EL, 65535UL);
    VECTOR(uint16_t, 2) l_280 = (VECTOR(uint16_t, 2))(0UL, 65530UL);
    uint32_t l_293 = 0x06249774L;
    int8_t l_343 = 0x26L;
    int32_t l_352 = 6L;
    VECTOR(uint16_t, 8) l_353 = (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0UL), 0UL), 0UL, 65529UL, 0UL);
    VECTOR(uint16_t, 2) l_360 = (VECTOR(uint16_t, 2))(1UL, 65535UL);
    VECTOR(uint64_t, 2) l_383 = (VECTOR(uint64_t, 2))(3UL, 18446744073709551614UL);
    uint32_t l_384 = 0UL;
    uint8_t l_387 = 0x0CL;
    VECTOR(int64_t, 2) l_396 = (VECTOR(int64_t, 2))(0x185DC857C6D8648EL, 3L);
    VECTOR(uint8_t, 8) l_399 = (VECTOR(uint8_t, 8))(0xCCL, (VECTOR(uint8_t, 4))(0xCCL, (VECTOR(uint8_t, 2))(0xCCL, 249UL), 249UL), 249UL, 0xCCL, 249UL);
    VECTOR(uint8_t, 2) l_400 = (VECTOR(uint8_t, 2))(1UL, 0xEEL);
    VECTOR(uint8_t, 2) l_402 = (VECTOR(uint8_t, 2))(0x22L, 0x29L);
    int i, j;
    for (p_83 = 25; (p_83 >= 29); p_83 = safe_add_func_uint8_t_u_u(p_83, 8))
    { /* block id: 24 */
        (*p_963->g_99) = l_98;
        if ((atomic_inc(&p_963->l_atomic_input[10]) == 2))
        { /* block id: 27 */
            int32_t l_101 = 0x00C6B665L;
            for (l_101 = (-1); (l_101 > (-3)); --l_101)
            { /* block id: 30 */
                uint16_t l_104 = 1UL;
                uint32_t l_105 = 4UL;
                int64_t *l_107 = (void*)0;
                int64_t **l_106 = &l_107;
                l_106 = ((l_104 , l_105) , (void*)0);
            }
            for (l_101 = 0; (l_101 != (-17)); l_101--)
            { /* block id: 35 */
                int32_t l_110 = 0x2B5195E1L;
                for (l_110 = 0; (l_110 >= (-27)); l_110 = safe_sub_func_int64_t_s_s(l_110, 7))
                { /* block id: 38 */
                    uint16_t l_113 = 65535UL;
                    uint32_t l_114[4][2][4] = {{{0xA7E6D091L,0xA7E6D091L,4294967295UL,0UL},{0xA7E6D091L,0xA7E6D091L,4294967295UL,0UL}},{{0xA7E6D091L,0xA7E6D091L,4294967295UL,0UL},{0xA7E6D091L,0xA7E6D091L,4294967295UL,0UL}},{{0xA7E6D091L,0xA7E6D091L,4294967295UL,0UL},{0xA7E6D091L,0xA7E6D091L,4294967295UL,0UL}},{{0xA7E6D091L,0xA7E6D091L,4294967295UL,0UL},{0xA7E6D091L,0xA7E6D091L,4294967295UL,0UL}}};
                    int i, j, k;
                    l_114[2][0][0] |= l_113;
                }
            }
            unsigned int result = 0;
            result += l_101;
            atomic_add(&p_963->l_special_values[10], result);
        }
        else
        { /* block id: 42 */
            (1 + 1);
        }
        for (p_963->g_85 = 0; (p_963->g_85 == 30); p_963->g_85++)
        { /* block id: 47 */
            int32_t *l_118 = &p_963->g_100[4][0];
            int32_t **l_117 = &l_118;
            (*l_117) = (void*)0;
            if ((atomic_inc(&p_963->l_atomic_input[44]) == 1))
            { /* block id: 50 */
                int32_t l_120 = 0x0DEC7D61L;
                int32_t *l_119 = &l_120;
                int64_t l_121 = (-10L);
                uint16_t l_122 = 65535UL;
                int64_t l_123[2][5][4] = {{{1L,1L,0x6A08C46E721FB129L,(-4L)},{1L,1L,0x6A08C46E721FB129L,(-4L)},{1L,1L,0x6A08C46E721FB129L,(-4L)},{1L,1L,0x6A08C46E721FB129L,(-4L)},{1L,1L,0x6A08C46E721FB129L,(-4L)}},{{1L,1L,0x6A08C46E721FB129L,(-4L)},{1L,1L,0x6A08C46E721FB129L,(-4L)},{1L,1L,0x6A08C46E721FB129L,(-4L)},{1L,1L,0x6A08C46E721FB129L,(-4L)},{1L,1L,0x6A08C46E721FB129L,(-4L)}}};
                int i, j, k;
                l_119 = (void*)0;
                if (((l_122 ^= l_121) , l_123[0][0][1]))
                { /* block id: 53 */
                    int32_t l_124 = 0x08FC9099L;
                    int32_t *l_146 = &l_124;
                    for (l_124 = 0; (l_124 >= 10); l_124 = safe_add_func_int8_t_s_s(l_124, 7))
                    { /* block id: 56 */
                        uint32_t l_127 = 0x989FA4E9L;
                        uint64_t l_128 = 0xCB50322C85E55DFCL;
                        int32_t l_129 = 6L;
                        uint32_t l_130 = 1UL;
                        int8_t l_131 = 0x2AL;
                        int16_t l_132 = 0x42D9L;
                        VECTOR(int32_t, 8) l_133 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 7L), 7L), 7L, 0L, 7L);
                        int16_t l_134 = 0x3939L;
                        VECTOR(int32_t, 8) l_135 = (VECTOR(int32_t, 8))(0x75A7A75AL, (VECTOR(int32_t, 4))(0x75A7A75AL, (VECTOR(int32_t, 2))(0x75A7A75AL, 0L), 0L), 0L, 0x75A7A75AL, 0L);
                        VECTOR(int32_t, 2) l_136 = (VECTOR(int32_t, 2))(0x0EF1A537L, 0x2D51AC0DL);
                        VECTOR(int32_t, 4) l_137 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x5487E53EL), 0x5487E53EL);
                        uint8_t l_138 = 9UL;
                        VECTOR(int32_t, 8) l_139 = (VECTOR(int32_t, 8))(0x3BDFDC5FL, (VECTOR(int32_t, 4))(0x3BDFDC5FL, (VECTOR(int32_t, 2))(0x3BDFDC5FL, 0x32AA8116L), 0x32AA8116L), 0x32AA8116L, 0x3BDFDC5FL, 0x32AA8116L);
                        uint8_t l_140 = 0x2BL;
                        int32_t l_141 = 0x350B5FE4L;
                        uint32_t l_142 = 0x2A42F98EL;
                        VECTOR(int32_t, 8) l_143 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4EF7B2E3L), 0x4EF7B2E3L), 0x4EF7B2E3L, 0L, 0x4EF7B2E3L);
                        uint8_t l_144 = 1UL;
                        int8_t l_145 = 1L;
                        int i;
                        l_120 = 0x296E5626L;
                        l_128 = l_127;
                        l_144 = ((l_129 , l_130) , (l_143.s0 = ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(0x5C77F51BL, ((VECTOR(int32_t, 4))(0x70CD8B2FL, l_131, 0L, (-9L))), ((l_132 = 1L) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-1L), 0x00D6BF4BL, (((VECTOR(int32_t, 2))(l_133.s33)).odd , l_134), (-8L), 0x0E566308L, 0x6BDDE1E7L, 6L, 5L)))).s7), 0x2EE60D34L, 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_135.s44121073)).s05)).xyyy)).z, 0x3FC9F35AL, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_136.yy)).yyyy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_137.zzyy)), 0x6C5D866FL, 7L, 0x11F1F153L, 1L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x0E88EED3L, 9L)), (-3L), 4L, 1L, l_138, 0x755EC10FL, 0x7B93DB6BL)), ((VECTOR(int32_t, 8))(l_139.s37120173))))).s0275537620606572)))).s3fe0, ((VECTOR(int32_t, 16))(l_140, (l_141 , (l_120 = l_142)), 0L, 0L, 0x5B985A9AL, 0x476476FDL, ((VECTOR(int32_t, 2))(0x2A63A172L)), 0x19E39778L, 0x45736710L, ((VECTOR(int32_t, 2))(6L)), 0x0AA5B394L, 0x493ECD75L, 0x034994D0L, (-2L))).s8235))), (-1L), (-8L))).s02, ((VECTOR(int32_t, 2))(0x2F6D8A0CL)), ((VECTOR(int32_t, 2))(0x24337CDBL))))).yyxxyxyx, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(1L))))), 0x73EDF114L, 0x57DE1A35L, ((VECTOR(int32_t, 4))(0x797960EBL)), 0x190269B8L, 0x1FF72C97L)))), ((VECTOR(int32_t, 16))(0x04E31C67L)), ((VECTOR(int32_t, 16))(1L))))).s1));
                        l_145 |= 0L;
                    }
                    l_119 = l_146;
                }
                else
                { /* block id: 66 */
                    int32_t l_147 = 0x19CEE683L;
                    l_120 |= l_147;
                    for (l_147 = (-14); (l_147 >= 16); ++l_147)
                    { /* block id: 70 */
                        int32_t l_151 = 0L;
                        int32_t *l_150 = &l_151;
                        int32_t *l_152 = &l_151;
                        l_150 = (l_119 = l_150);
                        l_119 = l_152;
                    }
                }
                unsigned int result = 0;
                result += l_120;
                result += l_121;
                result += l_122;
                int l_123_i0, l_123_i1, l_123_i2;
                for (l_123_i0 = 0; l_123_i0 < 2; l_123_i0++) {
                    for (l_123_i1 = 0; l_123_i1 < 5; l_123_i1++) {
                        for (l_123_i2 = 0; l_123_i2 < 4; l_123_i2++) {
                            result += l_123[l_123_i0][l_123_i1][l_123_i2];
                        }
                    }
                }
                atomic_add(&p_963->l_special_values[44], result);
            }
            else
            { /* block id: 76 */
                (1 + 1);
            }
        }
    }
    if (((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((safe_sub_func_int32_t_s_s(0L, (l_98 > (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 4))(p_963->g_157.s4771)).y, p_963->g_66))))) < ((-2L) <= (safe_add_func_int8_t_s_s(((p_83 && l_98) < (safe_add_func_uint32_t_u_u(0UL, ((safe_add_func_int8_t_s_s(((*l_170) = ((safe_sub_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((0x5979L < (l_169 = p_963->g_91.se)), p_963->g_66)) && l_98), p_963->g_157.s7)) != 0x8DL)), 0x9FL)) <= l_172)))), p_963->g_100[6][0])))), p_80, ((VECTOR(uint32_t, 2))(0x95E14E43L)), 0x85E4FF75L, ((VECTOR(uint32_t, 2))(4294967293UL)), 0xC82D1F4FL)).s5425145402215444)).lo)).s4 && 4294967295UL) , p_80))
    { /* block id: 83 */
        int32_t *l_174 = &p_963->g_100[4][0];
        int32_t *l_175 = &l_169;
        int32_t *l_176 = &p_963->g_100[3][0];
        int32_t *l_177 = (void*)0;
        int32_t *l_178 = &l_169;
        int32_t *l_179 = &p_963->g_100[4][0];
        int32_t *l_180[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int64_t *l_194 = (void*)0;
        int64_t *l_195[8][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int16_t *l_201 = &l_173;
        int16_t **l_200 = &l_201;
        uint64_t *l_206 = &p_963->g_85;
        uint64_t l_209 = 18446744073709551615UL;
        VECTOR(uint32_t, 4) l_214 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL);
        int16_t ***l_219 = &l_200;
        VECTOR(uint16_t, 4) l_234 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xB0E4L), 0xB0E4L);
        int16_t l_291 = (-1L);
        VECTOR(uint16_t, 4) l_354 = (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 65533UL), 65533UL);
        VECTOR(uint16_t, 4) l_355 = (VECTOR(uint16_t, 4))(0x4BDAL, (VECTOR(uint16_t, 2))(0x4BDAL, 8UL), 8UL);
        VECTOR(uint16_t, 16) l_358 = (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 65535UL), 65535UL), 65535UL, 65533UL, 65535UL, (VECTOR(uint16_t, 2))(65533UL, 65535UL), (VECTOR(uint16_t, 2))(65533UL, 65535UL), 65533UL, 65535UL, 65533UL, 65535UL);
        VECTOR(uint16_t, 2) l_359 = (VECTOR(uint16_t, 2))(0xA02DL, 65528UL);
        int i, j;
        --l_183;
        l_181 |= (p_80 >= (((VECTOR(int16_t, 8))(((*p_81) = (-2L)), 2L, (safe_add_func_int64_t_s_s(((0L == (safe_div_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(p_963->g_192.xwyxwxzxxxzwzxzz)).s1585))).w, ((l_196 = l_193) , l_197))) , (((VECTOR(uint64_t, 2))(8UL, 0x2694479903A0161FL)).even ^ ((*l_206) = (safe_mod_func_uint32_t_u_u(((l_182[2] &= (&p_963->g_66 != ((*l_200) = &p_963->g_66))) , (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_963->g_192.x, p_80)), 0UL))), (*l_174)))))), p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))]))) < p_83), p_83)), (*l_175), p_963->g_85, 0x5023L, 0x0B65L, (-1L))).s1 <= p_963->g_192.y));
        ++l_209;
        if ((safe_mul_func_int16_t_s_s(5L, ((*l_178) = (((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(l_214.wzwwzzyywwxyyzxw)).hi, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(1UL, ((p_83 , ((((l_208 , (p_963->g_31.z++)) , (safe_lshift_func_uint8_t_u_s((((&l_208 != (void*)0) , &p_81) == ((*l_219) = &p_81)), 3))) > p_83) , &l_194)) == &l_195[5][0]), 8UL, 0xA5CE5B98L, ((VECTOR(uint32_t, 2))(0xF909D75BL)), 0xC12C816AL, 0xEAACACCCL)).lo, (uint32_t)p_80))).zxzwzxxzzzyxyzxz)), ((VECTOR(uint32_t, 16))(0x4061B3A2L)), ((VECTOR(uint32_t, 16))(0x6CB6D5B2L))))).s9963, ((VECTOR(uint32_t, 4))(0x23BC560EL))))), p_963->g_66, 0xCD78A68BL, 4294967295UL, 0xC4312D83L)).even, ((VECTOR(uint32_t, 4))(6UL))))).wwxyxwww))).s0 & p_963->g_100[4][0])))))
        { /* block id: 95 */
            int32_t l_220 = 5L;
            int32_t l_221 = (-1L);
            int32_t l_222 = (-1L);
            int32_t l_223 = 0x317E528EL;
            int32_t l_224 = 1L;
            int32_t l_225 = 0x0EA9CB6AL;
            int32_t l_226 = 0x21669746L;
            int32_t l_227 = 5L;
            int32_t l_228 = 0x2325A27AL;
            VECTOR(uint16_t, 16) l_279 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65532UL), 65532UL, 65535UL, 65532UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65535UL, 65532UL, 65535UL, 65532UL);
            VECTOR(uint32_t, 2) l_347 = (VECTOR(uint32_t, 2))(0UL, 0xC565E48EL);
            VECTOR(uint16_t, 16) l_356 = (VECTOR(uint16_t, 16))(0x1F74L, (VECTOR(uint16_t, 4))(0x1F74L, (VECTOR(uint16_t, 2))(0x1F74L, 0x9E94L), 0x9E94L), 0x9E94L, 0x1F74L, 0x9E94L, (VECTOR(uint16_t, 2))(0x1F74L, 0x9E94L), (VECTOR(uint16_t, 2))(0x1F74L, 0x9E94L), 0x1F74L, 0x9E94L, 0x1F74L, 0x9E94L);
            VECTOR(uint16_t, 4) l_357 = (VECTOR(uint16_t, 4))(0xAB42L, (VECTOR(uint16_t, 2))(0xAB42L, 0x4910L), 0x4910L);
            VECTOR(uint16_t, 4) l_361 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x0162L), 0x0162L);
            int64_t **l_362 = &l_194;
            int i;
            ++l_229.s6;
            if (((p_963->g_66 ^= (safe_add_func_int64_t_s_s(0x019D07085DC86D78L, p_80))) >= (((VECTOR(uint16_t, 8))(l_234.zyyywyxx)).s4 > (safe_lshift_func_int8_t_s_u(0x77L, 0)))))
            { /* block id: 98 */
                int64_t l_245 = 0x0C90DBE4FE40A839L;
                int32_t l_248 = 1L;
                int32_t l_249 = 0x7B2451EDL;
                for (p_963->g_85 = (-7); (p_963->g_85 >= 15); p_963->g_85++)
                { /* block id: 101 */
                    int32_t l_244 = 0x591B4D00L;
                    int32_t l_246 = 0x1BEFE6A0L;
                    VECTOR(int32_t, 2) l_247 = (VECTOR(int32_t, 2))(0x3DDF15BDL, 1L);
                    uint64_t l_250[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_250[i] = 0x138C168379605CF9L;
                    ++p_963->g_239[4];
                    for (l_207 = 14; (l_207 == (-27)); l_207 = safe_sub_func_int32_t_s_s(l_207, 5))
                    { /* block id: 105 */
                        --l_250[2];
                        return l_223;
                    }
                }
                (*p_963->g_99) = (safe_rshift_func_uint16_t_u_u((p_963->g_255.w = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_963->g_255.zwyyzyzxwzxywzwz)).odd)).s6), p_83));
            }
            else
            { /* block id: 112 */
                int32_t *l_260 = &l_207;
                VECTOR(int32_t, 2) l_287 = (VECTOR(int32_t, 2))(0x0EF656F2L, 0x1C28F168L);
                int i;
                if (((*p_963->g_99) = ((VECTOR(int32_t, 4))(l_256.yxyy)).x))
                { /* block id: 114 */
                    int16_t l_288 = (-1L);
                    int32_t l_289 = 0x454AD161L;
                    int32_t l_290 = (-8L);
                    int32_t l_292 = (-9L);
                    for (p_963->g_85 = (-28); (p_963->g_85 < 54); p_963->g_85++)
                    { /* block id: 117 */
                        int32_t *l_259 = &l_220;
                        uint64_t l_277 = 0xDD34E7CA7AA63157L;
                        uint32_t *l_282 = (void*)0;
                        uint32_t *l_283 = (void*)0;
                        uint32_t *l_284[8][8][3] = {{{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0}},{{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0}},{{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0}},{{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0}},{{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0}},{{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0}},{{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0}},{{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,&l_196,(void*)0}}};
                        int32_t **l_286 = &l_175;
                        int i, j, k;
                        (*l_175) = (((((*l_219) = (void*)0) == &p_81) && (*p_963->g_99)) && ((l_259 != l_260) && (*p_963->g_99)));
                        if (p_80)
                            continue;
                        (*l_286) = ((safe_add_func_uint8_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_263.wxxz)), 4294967295UL, 0x2760A48CL, FAKE_DIVERGE(p_963->global_2_offset, get_global_id(2), 10), (safe_sub_func_int8_t_s_s(((void*)0 == p_963->g_99), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_963->g_266.xyxzyzyxzxxyxzxw)))).sc)), ((VECTOR(uint32_t, 4))(0xC7FBDF4BL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 8))(5UL, (safe_mul_func_uint16_t_u_u(l_220, (safe_add_func_uint32_t_u_u((p_963->g_285 = (l_193 = (safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((((*l_201) &= (((((p_963->g_comm_values[p_963->tid] == l_277) != ((((VECTOR(uint16_t, 8))(l_278.s840ea710)).s1 == ((VECTOR(uint16_t, 16))(0x6BEDL, 0xBFF0L, p_80, p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))], ((VECTOR(uint16_t, 2))(l_279.sb0)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_280.yxyyxyyy)))))).lo)).xzzxyxxw)), 0xE7E4L, 65535UL)).s4) <= ((p_963->g_281 = (0x4FE4D903703908D1L != p_963->g_157.s5)) != p_963->g_157.s7))) , p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))]) > l_277) >= p_963->g_comm_values[p_963->tid])) && 1UL), p_963->g_171)), 0)) >= (*p_963->g_99)), p_963->g_255.y)))), p_80)))), p_83, 0xADC6A7CFL, 4294967292UL, ((VECTOR(uint32_t, 2))(0x75C99B3FL)), 0xFE9D9399L)), ((VECTOR(uint32_t, 8))(0UL))))).s53)), 6UL)), ((VECTOR(uint32_t, 2))(4294967287UL)), 4294967291UL, 4294967295UL)).s9 , 255UL), 0x22L)) , l_260);
                    }
                    ++l_293;
                }
                else
                { /* block id: 128 */
                    uint64_t l_304[1];
                    VECTOR(uint16_t, 4) l_316 = (VECTOR(uint16_t, 4))(0x24BFL, (VECTOR(uint16_t, 2))(0x24BFL, 0x54CDL), 0x54CDL);
                    uint64_t *l_325 = &l_98;
                    uint16_t *l_333 = (void*)0;
                    uint16_t **l_332 = &l_333;
                    uint32_t *l_342 = &l_183;
                    uint8_t *l_344[1][6][10] = {{{&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197},{&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197},{&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197},{&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197},{&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197},{&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197,&l_197}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_304[i] = 0UL;
                    l_225 = (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((l_304[0] , ((((l_223 = ((VECTOR(uint32_t, 16))(p_963->g_305.sec481428103ab75c)).s7) , (((*l_206)++) == ((void*)0 != p_963->g_308))) == ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(0UL, (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((((((*l_325) = ((safe_lshift_func_int16_t_s_s((((((VECTOR(uint16_t, 4))(l_316.xxxy)).w && GROUP_DIVERGE(2, 1)) < (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(8UL, (safe_sub_func_int64_t_s_s(p_963->g_31.y, (0x7364E87EL >= 4294967295UL))))), 0))) < (safe_mod_func_int8_t_s_s(p_80, p_963->g_255.y))), l_220)) & 0UL)) ^ p_83) || 7UL) || p_963->g_100[1][0]) , p_963->g_66), (*p_81))), 248UL)), 1UL, 9UL, 0x8FL, p_963->g_266.w, 0x04L, 4UL)).s57, ((VECTOR(uint8_t, 2))(0x92L))))).xxxx, ((VECTOR(uint8_t, 4))(0x36L))))), ((VECTOR(uint8_t, 4))(0xD6L))))).z) , 0x365AF1EEL)) != GROUP_DIVERGE(2, 1)), l_304[0])) != p_83), 0x64L)), 7)), l_316.y));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_963->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((p_963->g_345[3] &= ((p_80 > ((l_182[6] = (safe_add_func_uint32_t_u_u(p_963->g_91.sc, (p_80 , (((l_168[2][4] != ((*l_332) = (void*)0)) ^ (GROUP_DIVERGE(2, 1) && ((((GROUP_DIVERGE(1, 1) && (safe_sub_func_int16_t_s_s(((((**l_200) |= (*l_178)) != (safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((p_963->g_100[4][0] , p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))]), (safe_rshift_func_int16_t_s_u((((*l_342) = l_287.x) < 0xAB2D90A1L), l_343)))), p_83))) < GROUP_DIVERGE(2, 1)), 0xDEC5L))) && p_83) | p_80) | (-3L)))) , FAKE_DIVERGE(p_963->global_1_offset, get_global_id(1), 10)))))) == (-9L))) || p_83)), 0xB740L)), 0x68CAF494B84DC7CBL)), 10))][(safe_mod_func_uint32_t_u_u(p_963->tid, 14))]));
                    (*l_179) = (p_963->g_346 ^= (*p_963->g_99));
                }
            }
            (*l_175) ^= (((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(0xFD45AB81L, 0x4E567DBCL, 4294967295UL, 0x7EC8E803L)).yxwwxzwz, ((VECTOR(uint32_t, 8))(l_347.yxyyxxxy))))).odd, ((VECTOR(uint32_t, 16))((safe_div_func_int64_t_s_s((FAKE_DIVERGE(p_963->local_0_offset, get_local_id(0), 10) && (safe_rshift_func_int16_t_s_s(l_352, 10))), l_223)), p_963->g_192.z, 0x47B9C661L, 0xFE1B02E6L, ((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(l_353.s1510)), ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_354.wz)).even, 65535UL, 0x69BEL, 0xFCBCL, ((VECTOR(uint16_t, 2))(l_355.yx)), 0xCDACL, 65533UL, 0x5641L, 0xE28BL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(l_356.s6e8ec02e)), ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(0x7CCFL, 6UL)).xyyx, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(l_357.xz)), ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(0xAC27L, 65535UL, 65533UL, 65530UL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 1UL)).yxyx))))).odd))).yyxx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_358.s86d0)).zwwxwxxx)).lo))).yzyywwwy))).odd)), 0x8B22L, 0UL)).s278c, ((VECTOR(uint16_t, 4))(l_359.yxxy))))).yxyyxyzwzzxxzwxz, ((VECTOR(uint16_t, 2))(l_360.xx)).xxyxxxxxxxyyyyyy))).s4d15))), ((VECTOR(uint16_t, 16))(0x9ABFL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_361.wy)), 0xCB92L, 0x1225L)), (&p_963->g_309 != (p_80 , l_362)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0x1C97L, (safe_mod_func_uint32_t_u_u(0xBF15F7D8L, (*l_174))), ((VECTOR(uint16_t, 4))(0xE253L)), 0xF4CFL, 65533UL)).s34)).yxxy)).y, p_963->g_239[4], p_963->g_31.y, 1UL, (*l_179), 1UL, 5UL, 0xE9B2L, 0UL, 0xB27EL)).s8873))).wxzxxzxw, ((VECTOR(uint32_t, 8))(4294967295UL)), ((VECTOR(uint32_t, 8))(0x30D455A4L))))), ((VECTOR(uint32_t, 8))(0xFA41F7F3L))))), ((VECTOR(uint32_t, 4))(0UL)))).s53e0))).x & 0x0BC243EEL);
        }
        else
        { /* block id: 146 */
            int32_t l_378[8][5][2] = {{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}}};
            int32_t l_385[5] = {0x643E9282L,0x643E9282L,0x643E9282L,0x643E9282L,0x643E9282L};
            int i, j, k;
            p_963->g_386 ^= (safe_sub_func_int32_t_s_s(0x46642B09L, (((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(0x002AL, (!((+(-9L)) ^ ((0x36FBE982L && ((*l_179) ^= ((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((0L || ((0x4CFC564CF22E3A02L > ((VECTOR(int64_t, 8))(1L, (safe_add_func_uint16_t_u_u(p_83, (l_256.y &= (safe_lshift_func_int16_t_s_s((((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_963->g_375.s45)).xxxyyyxx)).s0, 4UL, 0x02L)).w != (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0x8461L, (l_378[1][0][0] = p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))]), 0UL, 0UL)))), 0UL, 0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65535UL, 0xED9FL)).xxxx)), ((VECTOR(uint16_t, 4))(0x7407L, ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 2))((-5L), 5L)).yyyyxyyx, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((-4L), 0x6AL, ((((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((*l_178) = ((((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_383.xyxyyyyx)).s7121335254446672)).s7, p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))])) > 246UL) , 0x1DA2L) == p_963->g_375.s6)), 0x13867332L, 0x590B8538L, 1L)).wxywzxxyxxyyzzxx)).lo, ((VECTOR(int32_t, 8))(0x57537F6BL))))).s2, (-1L))) , p_83) != 0x5B6C2B0465F9C377L) < (*p_81)), (-1L), 0x6AL, ((VECTOR(int8_t, 2))(0x00L)), 0x77L)).even)))).zxzxxzyywyzyzzxy)).s5c, ((VECTOR(uint8_t, 2))(255UL))))), ((VECTOR(int16_t, 2))((-8L)))))).xyyxxyyx))).s54, ((VECTOR(uint16_t, 2))(1UL))))), 0xA7DEL)), 0xC1FEL, 0x66BBL)).se, 9))), (*p_81)))))), ((VECTOR(int64_t, 2))(0x6144DA4E16CC6001L)), 0x654C7940E899C9ACL, 1L, 0x476B76D250B9560BL, 9L)).s0) < p_963->g_91.se)), p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))])) < p_80) && l_378[1][3][1]), l_384)) != l_385[3]))) , (*l_175)))), ((VECTOR(int16_t, 4))(0x5144L)), (-1L), (-8L))).lo, ((VECTOR(int16_t, 4))(4L))))).y > (-4L))));
            return l_387;
        }
    }
    else
    { /* block id: 154 */
        VECTOR(uint8_t, 8) l_403 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xD4L), 0xD4L), 0xD4L, 255UL, 0xD4L);
        int32_t l_415 = 0L;
        int i;
        for (l_207 = 0; (l_207 > 9); ++l_207)
        { /* block id: 157 */
            int64_t *l_394 = (void*)0;
            int64_t *l_395 = (void*)0;
            int32_t *l_397 = &l_172;
            VECTOR(int32_t, 16) l_398 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3B96162EL), 0x3B96162EL), 0x3B96162EL, 1L, 0x3B96162EL, (VECTOR(int32_t, 2))(1L, 0x3B96162EL), (VECTOR(int32_t, 2))(1L, 0x3B96162EL), 1L, 0x3B96162EL, 1L, 0x3B96162EL);
            VECTOR(uint64_t, 16) l_408 = (VECTOR(uint64_t, 16))(0xA871033A2C4CC19FL, (VECTOR(uint64_t, 4))(0xA871033A2C4CC19FL, (VECTOR(uint64_t, 2))(0xA871033A2C4CC19FL, 1UL), 1UL), 1UL, 0xA871033A2C4CC19FL, 1UL, (VECTOR(uint64_t, 2))(0xA871033A2C4CC19FL, 1UL), (VECTOR(uint64_t, 2))(0xA871033A2C4CC19FL, 1UL), 0xA871033A2C4CC19FL, 1UL, 0xA871033A2C4CC19FL, 1UL);
            uint8_t *l_409 = &l_197;
            uint8_t *l_410 = (void*)0;
            uint8_t *l_411 = (void*)0;
            uint8_t *l_412[3];
            int32_t *l_413 = &p_963->g_100[4][0];
            int32_t *l_414[6] = {&l_169,&l_169,&l_169,&l_169,&l_169,&l_169};
            int i;
            for (i = 0; i < 3; i++)
                l_412[i] = &l_387;
            (*l_413) &= ((((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x10D1F653393C8E4EL, ((VECTOR(int64_t, 4))(p_963->g_390.xxyx)), 0x21175030C408FF48L, ((VECTOR(int64_t, 2))(p_963->g_391.yx)), 9L, ((VECTOR(int64_t, 8))(p_963->g_392.zzzxxxzy)).s0, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x0E240CAA23D5AF64L, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(p_80, (p_83 = ((VECTOR(int64_t, 4))(p_963->g_393.yxxy)).y), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_396.xxxyyxyyxyxyxxyx)).s4a)).yyxyxyyy)).s77)))), ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))((p_963->g_171 , ((*l_397) = (-1L))), 0x44414BB0L, 0x3A239AF2L, 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_398.s85)), ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(p_80, ((*l_397) = l_229.s1), (-3L), ((((*l_170) = ((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_399.s2302400364467472)).sc, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_400.yxxy)).lo)).yxxxyyxx)).s23)), 0xE0L)), ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(0xFEL, 253UL, 0UL, (l_182[2] = ((*l_409) = ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_83, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(p_963->g_401.xy)).xyxy, ((VECTOR(uint8_t, 8))(l_402.yyyxyxyy)).lo, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(3UL, p_963->g_31.w, ((VECTOR(uint8_t, 4))(8UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_403.s6237)), (safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_408.s29)).yxxxyxxy)).s4, p_80)), l_403.s0)), 0x5DL, 0UL, 255UL, 251UL, ((VECTOR(uint8_t, 4))(0x39L)), ((VECTOR(uint8_t, 2))(1UL)), 7UL)).s0b)), 252UL)), FAKE_DIVERGE(p_963->local_2_offset, get_local_id(2), 10), 247UL, ((VECTOR(uint8_t, 2))(0x4BL)), p_963->g_346, ((VECTOR(uint8_t, 2))(6UL)), p_963->l_comm_values[(safe_mod_func_uint32_t_u_u(p_963->tid, 14))], 0x0AL, 0x10L)).sf1b8))))).z, 255UL, 247UL)), 254UL, FAKE_DIVERGE(p_963->group_0_offset, get_group_id(0), 10), 0xECL, ((VECTOR(uint8_t, 4))(247UL)), 0x30L, ((VECTOR(uint8_t, 4))(0UL)))).sb1)).even)), ((VECTOR(uint8_t, 8))(249UL)), p_963->g_393.x, ((VECTOR(uint8_t, 2))(0xC7L)), 255UL)).se8a4, ((VECTOR(uint8_t, 4))(0xD9L))))).wyxyxwxw, ((VECTOR(uint8_t, 8))(0UL)), ((VECTOR(uint8_t, 8))(251UL))))), 255UL, l_403.s2, 255UL, 255UL)).sa | p_963->g_345[3]) < p_80)) > 0x73L) <= p_963->g_305.s0), 0x5AEDE6AFL, 5L, p_83, l_197, 1L, 1L, 0x0BA2720FL, ((VECTOR(int32_t, 4))(0x7D5FCE41L)), 1L)).odd, ((VECTOR(int32_t, 8))(0x004C3306L))))).s14)).xxxxyxxy))).s02, ((VECTOR(int32_t, 2))(0L))))).yxxxyxxxyxxyxyxx)).even, ((VECTOR(int32_t, 8))((-1L)))))).lo))))).zxxyyxyxyyywzxyw, ((VECTOR(int32_t, 16))((-6L)))))).scf10)))).zzxwxzxy)).s25, ((VECTOR(uint32_t, 2))(0x6AE9C315L))))), ((VECTOR(int64_t, 4))((-1L))))).s02, ((VECTOR(int64_t, 2))(0x7E28174EE4E32368L)), ((VECTOR(int64_t, 2))((-1L)))))).yyxx, ((VECTOR(int64_t, 4))(0L))))), l_398.s9, 0x057D9DC7B954877CL, 0x68E82AA7C79F229AL, (-8L))), p_83, ((VECTOR(int64_t, 2))(0x1EBC3F98CBEEF1CFL)), ((VECTOR(int64_t, 2))((-1L))), 0x01E428ACA2886175L)).s10, ((VECTOR(int64_t, 2))(0L)))))))), 2L)))), 0x2A7898CC58BFB7B8L, 0x593189D29C52A4C8L)).s512a)).odd)).xyyy)).yywxwyzw)).s1 , 18446744073709551615UL) < l_169) < p_963->g_31.y) & (-10L));
            l_415 |= (*p_963->g_99);
            l_182[2] &= (*p_963->g_99);
        }
        (*p_963->g_416) = &l_181;
    }
    return l_383.y;
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
    __local int64_t l_comm_values[14];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 14; i++)
            l_comm_values[i] = 1;
    struct S0 c_964;
    struct S0* p_963 = &c_964;
    struct S0 c_965 = {
        (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 7UL), 7UL), // p_963->g_31
        0x3395CC9EL, // p_963->g_52
        0L, // p_963->g_66
        2UL, // p_963->g_85
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 8UL), 8UL), 8UL, 255UL, 8UL, (VECTOR(uint8_t, 2))(255UL, 8UL), (VECTOR(uint8_t, 2))(255UL, 8UL), 255UL, 8UL, 255UL, 8UL), // p_963->g_91
        {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}, // p_963->g_100
        &p_963->g_100[4][0], // p_963->g_99
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L), // p_963->g_157
        0x69L, // p_963->g_171
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), // p_963->g_192
        {0x3FL,0x3FL,0x3FL,0x3FL,0x3FL,0x3FL,0x3FL,0x3FL}, // p_963->g_239
        (VECTOR(uint16_t, 4))(0x293EL, (VECTOR(uint16_t, 2))(0x293EL, 0x68BCL), 0x68BCL), // p_963->g_255
        (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x04L), 0x04L), // p_963->g_266
        4294967293UL, // p_963->g_281
        1L, // p_963->g_285
        (VECTOR(uint32_t, 16))(0x7164121EL, (VECTOR(uint32_t, 4))(0x7164121EL, (VECTOR(uint32_t, 2))(0x7164121EL, 0xFFEEB476L), 0xFFEEB476L), 0xFFEEB476L, 0x7164121EL, 0xFFEEB476L, (VECTOR(uint32_t, 2))(0x7164121EL, 0xFFEEB476L), (VECTOR(uint32_t, 2))(0x7164121EL, 0xFFEEB476L), 0x7164121EL, 0xFFEEB476L, 0x7164121EL, 0xFFEEB476L), // p_963->g_305
        (void*)0, // p_963->g_309
        &p_963->g_309, // p_963->g_308
        {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}, // p_963->g_345
        (-1L), // p_963->g_346
        (VECTOR(uint8_t, 8))(0x33L, (VECTOR(uint8_t, 4))(0x33L, (VECTOR(uint8_t, 2))(0x33L, 0UL), 0UL), 0UL, 0x33L, 0UL), // p_963->g_375
        0x29L, // p_963->g_386
        (VECTOR(int64_t, 2))(0L, 0x6BC1265369205810L), // p_963->g_390
        (VECTOR(int64_t, 2))(0x4F853297BE0394ECL, (-5L)), // p_963->g_391
        (VECTOR(int64_t, 4))(0x34BA70878BC4DD5EL, (VECTOR(int64_t, 2))(0x34BA70878BC4DD5EL, 0x598344D154AE7C29L), 0x598344D154AE7C29L), // p_963->g_392
        (VECTOR(int64_t, 2))(0x12E3AF42B1A88B5DL, 0x77818B4373EFF802L), // p_963->g_393
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x88L), 0x88L), // p_963->g_401
        &p_963->g_100[4][0], // p_963->g_417
        &p_963->g_417, // p_963->g_416
        6L, // p_963->g_419
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), // p_963->g_437
        (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 1UL), 1UL), 1UL, 4294967294UL, 1UL), // p_963->g_438
        (VECTOR(int16_t, 2))(0x6886L, 0x518AL), // p_963->g_446
        {0x72B00C03L,0x481FD44CL,0x72B00C03L,0x72B00C03L,0x481FD44CL,0x72B00C03L,0x72B00C03L,0x481FD44CL,0x72B00C03L,0x72B00C03L}, // p_963->g_475
        0x793A439D51A1BC92L, // p_963->g_484
        5L, // p_963->g_489
        (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x7D0CA67768931031L), 0x7D0CA67768931031L), 0x7D0CA67768931031L, 18446744073709551606UL, 0x7D0CA67768931031L), // p_963->g_490
        &p_963->g_489, // p_963->g_497
        (void*)0, // p_963->g_591
        (VECTOR(int8_t, 16))(0x72L, (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, (-6L)), (-6L)), (-6L), 0x72L, (-6L), (VECTOR(int8_t, 2))(0x72L, (-6L)), (VECTOR(int8_t, 2))(0x72L, (-6L)), 0x72L, (-6L), 0x72L, (-6L)), // p_963->g_592
        (VECTOR(int8_t, 2))(0x2DL, 0x3CL), // p_963->g_593
        (VECTOR(int8_t, 2))(1L, 9L), // p_963->g_594
        (VECTOR(uint32_t, 16))(0xF33231CAL, (VECTOR(uint32_t, 4))(0xF33231CAL, (VECTOR(uint32_t, 2))(0xF33231CAL, 0x085C7813L), 0x085C7813L), 0x085C7813L, 0xF33231CAL, 0x085C7813L, (VECTOR(uint32_t, 2))(0xF33231CAL, 0x085C7813L), (VECTOR(uint32_t, 2))(0xF33231CAL, 0x085C7813L), 0xF33231CAL, 0x085C7813L, 0xF33231CAL, 0x085C7813L), // p_963->g_606
        (VECTOR(int64_t, 2))((-1L), (-3L)), // p_963->g_612
        &p_963->g_419, // p_963->g_632
        {&p_963->g_632,&p_963->g_632,&p_963->g_632,&p_963->g_632,&p_963->g_632,&p_963->g_632,&p_963->g_632}, // p_963->g_631
        (void*)0, // p_963->g_635
        &p_963->g_635, // p_963->g_634
        (VECTOR(uint32_t, 16))(0xB0B1380FL, (VECTOR(uint32_t, 4))(0xB0B1380FL, (VECTOR(uint32_t, 2))(0xB0B1380FL, 0xCEDB889DL), 0xCEDB889DL), 0xCEDB889DL, 0xB0B1380FL, 0xCEDB889DL, (VECTOR(uint32_t, 2))(0xB0B1380FL, 0xCEDB889DL), (VECTOR(uint32_t, 2))(0xB0B1380FL, 0xCEDB889DL), 0xB0B1380FL, 0xCEDB889DL, 0xB0B1380FL, 0xCEDB889DL), // p_963->g_650
        (VECTOR(uint32_t, 8))(0x4369730DL, (VECTOR(uint32_t, 4))(0x4369730DL, (VECTOR(uint32_t, 2))(0x4369730DL, 0x5F4E1BF2L), 0x5F4E1BF2L), 0x5F4E1BF2L, 0x4369730DL, 0x5F4E1BF2L), // p_963->g_655
        &p_963->g_417, // p_963->g_664
        {{{0x368A1DD6683BFE61L,(-6L),1L,0L}},{{0x368A1DD6683BFE61L,(-6L),1L,0L}},{{0x368A1DD6683BFE61L,(-6L),1L,0L}},{{0x368A1DD6683BFE61L,(-6L),1L,0L}},{{0x368A1DD6683BFE61L,(-6L),1L,0L}},{{0x368A1DD6683BFE61L,(-6L),1L,0L}},{{0x368A1DD6683BFE61L,(-6L),1L,0L}},{{0x368A1DD6683BFE61L,(-6L),1L,0L}}}, // p_963->g_667
        &p_963->g_66, // p_963->g_682
        &p_963->g_682, // p_963->g_681
        &p_963->g_417, // p_963->g_725
        {1UL,1UL,1UL,1UL}, // p_963->g_735
        (VECTOR(uint64_t, 16))(0x62920218B8B523BBL, (VECTOR(uint64_t, 4))(0x62920218B8B523BBL, (VECTOR(uint64_t, 2))(0x62920218B8B523BBL, 9UL), 9UL), 9UL, 0x62920218B8B523BBL, 9UL, (VECTOR(uint64_t, 2))(0x62920218B8B523BBL, 9UL), (VECTOR(uint64_t, 2))(0x62920218B8B523BBL, 9UL), 0x62920218B8B523BBL, 9UL, 0x62920218B8B523BBL, 9UL), // p_963->g_747
        (VECTOR(int64_t, 2))((-2L), 0x589908FE431FF8DBL), // p_963->g_787
        (VECTOR(int64_t, 16))(0x66EAC1B6297DA536L, (VECTOR(int64_t, 4))(0x66EAC1B6297DA536L, (VECTOR(int64_t, 2))(0x66EAC1B6297DA536L, 1L), 1L), 1L, 0x66EAC1B6297DA536L, 1L, (VECTOR(int64_t, 2))(0x66EAC1B6297DA536L, 1L), (VECTOR(int64_t, 2))(0x66EAC1B6297DA536L, 1L), 0x66EAC1B6297DA536L, 1L, 0x66EAC1B6297DA536L, 1L), // p_963->g_798
        (VECTOR(int64_t, 2))(0x7E74AD486FD4CD47L, 0x53D340502D22C134L), // p_963->g_799
        {{&p_963->g_239[5],&p_963->g_239[4],&p_963->g_239[4],&p_963->g_239[5]},{&p_963->g_239[5],&p_963->g_239[4],&p_963->g_239[4],&p_963->g_239[5]},{&p_963->g_239[5],&p_963->g_239[4],&p_963->g_239[4],&p_963->g_239[5]},{&p_963->g_239[5],&p_963->g_239[4],&p_963->g_239[4],&p_963->g_239[5]},{&p_963->g_239[5],&p_963->g_239[4],&p_963->g_239[4],&p_963->g_239[5]},{&p_963->g_239[5],&p_963->g_239[4],&p_963->g_239[4],&p_963->g_239[5]},{&p_963->g_239[5],&p_963->g_239[4],&p_963->g_239[4],&p_963->g_239[5]},{&p_963->g_239[5],&p_963->g_239[4],&p_963->g_239[4],&p_963->g_239[5]}}, // p_963->g_801
        &p_963->g_801[7][1], // p_963->g_800
        (VECTOR(int64_t, 2))((-1L), 6L), // p_963->g_803
        (VECTOR(int64_t, 2))(0x00FD914F11302E59L, 0x449F2C61639320E0L), // p_963->g_804
        (VECTOR(int64_t, 4))(0x2B8BBFBFAE1B95B5L, (VECTOR(int64_t, 2))(0x2B8BBFBFAE1B95B5L, 0L), 0L), // p_963->g_805
        (void*)0, // p_963->g_815
        (VECTOR(uint32_t, 16))(0x4958AFF6L, (VECTOR(uint32_t, 4))(0x4958AFF6L, (VECTOR(uint32_t, 2))(0x4958AFF6L, 0x940DABEAL), 0x940DABEAL), 0x940DABEAL, 0x4958AFF6L, 0x940DABEAL, (VECTOR(uint32_t, 2))(0x4958AFF6L, 0x940DABEAL), (VECTOR(uint32_t, 2))(0x4958AFF6L, 0x940DABEAL), 0x4958AFF6L, 0x940DABEAL, 0x4958AFF6L, 0x940DABEAL), // p_963->g_820
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x02L), 0x02L), // p_963->g_823
        (VECTOR(int64_t, 2))(0x114026F3493E3F5FL, 0x217BAE9CBD1B9C46L), // p_963->g_850
        (VECTOR(int64_t, 16))(0x06A3525C309306F3L, (VECTOR(int64_t, 4))(0x06A3525C309306F3L, (VECTOR(int64_t, 2))(0x06A3525C309306F3L, 0x0109E122654B50C7L), 0x0109E122654B50C7L), 0x0109E122654B50C7L, 0x06A3525C309306F3L, 0x0109E122654B50C7L, (VECTOR(int64_t, 2))(0x06A3525C309306F3L, 0x0109E122654B50C7L), (VECTOR(int64_t, 2))(0x06A3525C309306F3L, 0x0109E122654B50C7L), 0x06A3525C309306F3L, 0x0109E122654B50C7L, 0x06A3525C309306F3L, 0x0109E122654B50C7L), // p_963->g_860
        0x703470BCC285B0F2L, // p_963->g_862
        (VECTOR(uint16_t, 8))(0x49E9L, (VECTOR(uint16_t, 4))(0x49E9L, (VECTOR(uint16_t, 2))(0x49E9L, 0x86DDL), 0x86DDL), 0x86DDL, 0x49E9L, 0x86DDL), // p_963->g_874
        (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, (-10L)), (-10L)), // p_963->g_882
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x330CE719L), 0x330CE719L), 0x330CE719L, (-1L), 0x330CE719L, (VECTOR(int32_t, 2))((-1L), 0x330CE719L), (VECTOR(int32_t, 2))((-1L), 0x330CE719L), (-1L), 0x330CE719L, (-1L), 0x330CE719L), // p_963->g_894
        (void*)0, // p_963->g_895
        {{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}},{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}},{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}},{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}},{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}},{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}},{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}},{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}},{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}},{{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0},{&p_963->g_100[4][0],(void*)0}}}, // p_963->g_900
        (VECTOR(int16_t, 16))(0x63A6L, (VECTOR(int16_t, 4))(0x63A6L, (VECTOR(int16_t, 2))(0x63A6L, 0x7AD9L), 0x7AD9L), 0x7AD9L, 0x63A6L, 0x7AD9L, (VECTOR(int16_t, 2))(0x63A6L, 0x7AD9L), (VECTOR(int16_t, 2))(0x63A6L, 0x7AD9L), 0x63A6L, 0x7AD9L, 0x63A6L, 0x7AD9L), // p_963->g_902
        (VECTOR(int64_t, 16))(0x2D2B542DAB9430D2L, (VECTOR(int64_t, 4))(0x2D2B542DAB9430D2L, (VECTOR(int64_t, 2))(0x2D2B542DAB9430D2L, 0L), 0L), 0L, 0x2D2B542DAB9430D2L, 0L, (VECTOR(int64_t, 2))(0x2D2B542DAB9430D2L, 0L), (VECTOR(int64_t, 2))(0x2D2B542DAB9430D2L, 0L), 0x2D2B542DAB9430D2L, 0L, 0x2D2B542DAB9430D2L, 0L), // p_963->g_911
        (VECTOR(int64_t, 8))(0x30B9A58D33E9F9FBL, (VECTOR(int64_t, 4))(0x30B9A58D33E9F9FBL, (VECTOR(int64_t, 2))(0x30B9A58D33E9F9FBL, 0x6639C3C346E84B57L), 0x6639C3C346E84B57L), 0x6639C3C346E84B57L, 0x30B9A58D33E9F9FBL, 0x6639C3C346E84B57L), // p_963->g_912
        (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int64_t, 2))(2L, 0L), (VECTOR(int64_t, 2))(2L, 0L), 2L, 0L, 2L, 0L), // p_963->g_914
        (VECTOR(uint16_t, 4))(0x3571L, (VECTOR(uint16_t, 2))(0x3571L, 2UL), 2UL), // p_963->g_922
        (VECTOR(int8_t, 2))(0x06L, 1L), // p_963->g_924
        (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-1L)), (-1L)), // p_963->g_925
        (VECTOR(uint8_t, 16))(0x1DL, (VECTOR(uint8_t, 4))(0x1DL, (VECTOR(uint8_t, 2))(0x1DL, 1UL), 1UL), 1UL, 0x1DL, 1UL, (VECTOR(uint8_t, 2))(0x1DL, 1UL), (VECTOR(uint8_t, 2))(0x1DL, 1UL), 0x1DL, 1UL, 0x1DL, 1UL), // p_963->g_929
        0, // p_963->v_collective
        sequence_input[get_global_id(0)], // p_963->global_0_offset
        sequence_input[get_global_id(1)], // p_963->global_1_offset
        sequence_input[get_global_id(2)], // p_963->global_2_offset
        sequence_input[get_local_id(0)], // p_963->local_0_offset
        sequence_input[get_local_id(1)], // p_963->local_1_offset
        sequence_input[get_local_id(2)], // p_963->local_2_offset
        sequence_input[get_group_id(0)], // p_963->group_0_offset
        sequence_input[get_group_id(1)], // p_963->group_1_offset
        sequence_input[get_group_id(2)], // p_963->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[0][get_linear_local_id()])), // p_963->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_964 = c_965;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_963);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_963->g_31.x, "p_963->g_31.x", print_hash_value);
    transparent_crc(p_963->g_31.y, "p_963->g_31.y", print_hash_value);
    transparent_crc(p_963->g_31.z, "p_963->g_31.z", print_hash_value);
    transparent_crc(p_963->g_31.w, "p_963->g_31.w", print_hash_value);
    transparent_crc(p_963->g_52, "p_963->g_52", print_hash_value);
    transparent_crc(p_963->g_66, "p_963->g_66", print_hash_value);
    transparent_crc(p_963->g_85, "p_963->g_85", print_hash_value);
    transparent_crc(p_963->g_91.s0, "p_963->g_91.s0", print_hash_value);
    transparent_crc(p_963->g_91.s1, "p_963->g_91.s1", print_hash_value);
    transparent_crc(p_963->g_91.s2, "p_963->g_91.s2", print_hash_value);
    transparent_crc(p_963->g_91.s3, "p_963->g_91.s3", print_hash_value);
    transparent_crc(p_963->g_91.s4, "p_963->g_91.s4", print_hash_value);
    transparent_crc(p_963->g_91.s5, "p_963->g_91.s5", print_hash_value);
    transparent_crc(p_963->g_91.s6, "p_963->g_91.s6", print_hash_value);
    transparent_crc(p_963->g_91.s7, "p_963->g_91.s7", print_hash_value);
    transparent_crc(p_963->g_91.s8, "p_963->g_91.s8", print_hash_value);
    transparent_crc(p_963->g_91.s9, "p_963->g_91.s9", print_hash_value);
    transparent_crc(p_963->g_91.sa, "p_963->g_91.sa", print_hash_value);
    transparent_crc(p_963->g_91.sb, "p_963->g_91.sb", print_hash_value);
    transparent_crc(p_963->g_91.sc, "p_963->g_91.sc", print_hash_value);
    transparent_crc(p_963->g_91.sd, "p_963->g_91.sd", print_hash_value);
    transparent_crc(p_963->g_91.se, "p_963->g_91.se", print_hash_value);
    transparent_crc(p_963->g_91.sf, "p_963->g_91.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_963->g_100[i][j], "p_963->g_100[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_963->g_157.s0, "p_963->g_157.s0", print_hash_value);
    transparent_crc(p_963->g_157.s1, "p_963->g_157.s1", print_hash_value);
    transparent_crc(p_963->g_157.s2, "p_963->g_157.s2", print_hash_value);
    transparent_crc(p_963->g_157.s3, "p_963->g_157.s3", print_hash_value);
    transparent_crc(p_963->g_157.s4, "p_963->g_157.s4", print_hash_value);
    transparent_crc(p_963->g_157.s5, "p_963->g_157.s5", print_hash_value);
    transparent_crc(p_963->g_157.s6, "p_963->g_157.s6", print_hash_value);
    transparent_crc(p_963->g_157.s7, "p_963->g_157.s7", print_hash_value);
    transparent_crc(p_963->g_171, "p_963->g_171", print_hash_value);
    transparent_crc(p_963->g_192.x, "p_963->g_192.x", print_hash_value);
    transparent_crc(p_963->g_192.y, "p_963->g_192.y", print_hash_value);
    transparent_crc(p_963->g_192.z, "p_963->g_192.z", print_hash_value);
    transparent_crc(p_963->g_192.w, "p_963->g_192.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_963->g_239[i], "p_963->g_239[i]", print_hash_value);

    }
    transparent_crc(p_963->g_255.x, "p_963->g_255.x", print_hash_value);
    transparent_crc(p_963->g_255.y, "p_963->g_255.y", print_hash_value);
    transparent_crc(p_963->g_255.z, "p_963->g_255.z", print_hash_value);
    transparent_crc(p_963->g_255.w, "p_963->g_255.w", print_hash_value);
    transparent_crc(p_963->g_266.x, "p_963->g_266.x", print_hash_value);
    transparent_crc(p_963->g_266.y, "p_963->g_266.y", print_hash_value);
    transparent_crc(p_963->g_266.z, "p_963->g_266.z", print_hash_value);
    transparent_crc(p_963->g_266.w, "p_963->g_266.w", print_hash_value);
    transparent_crc(p_963->g_281, "p_963->g_281", print_hash_value);
    transparent_crc(p_963->g_285, "p_963->g_285", print_hash_value);
    transparent_crc(p_963->g_305.s0, "p_963->g_305.s0", print_hash_value);
    transparent_crc(p_963->g_305.s1, "p_963->g_305.s1", print_hash_value);
    transparent_crc(p_963->g_305.s2, "p_963->g_305.s2", print_hash_value);
    transparent_crc(p_963->g_305.s3, "p_963->g_305.s3", print_hash_value);
    transparent_crc(p_963->g_305.s4, "p_963->g_305.s4", print_hash_value);
    transparent_crc(p_963->g_305.s5, "p_963->g_305.s5", print_hash_value);
    transparent_crc(p_963->g_305.s6, "p_963->g_305.s6", print_hash_value);
    transparent_crc(p_963->g_305.s7, "p_963->g_305.s7", print_hash_value);
    transparent_crc(p_963->g_305.s8, "p_963->g_305.s8", print_hash_value);
    transparent_crc(p_963->g_305.s9, "p_963->g_305.s9", print_hash_value);
    transparent_crc(p_963->g_305.sa, "p_963->g_305.sa", print_hash_value);
    transparent_crc(p_963->g_305.sb, "p_963->g_305.sb", print_hash_value);
    transparent_crc(p_963->g_305.sc, "p_963->g_305.sc", print_hash_value);
    transparent_crc(p_963->g_305.sd, "p_963->g_305.sd", print_hash_value);
    transparent_crc(p_963->g_305.se, "p_963->g_305.se", print_hash_value);
    transparent_crc(p_963->g_305.sf, "p_963->g_305.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_963->g_345[i], "p_963->g_345[i]", print_hash_value);

    }
    transparent_crc(p_963->g_346, "p_963->g_346", print_hash_value);
    transparent_crc(p_963->g_375.s0, "p_963->g_375.s0", print_hash_value);
    transparent_crc(p_963->g_375.s1, "p_963->g_375.s1", print_hash_value);
    transparent_crc(p_963->g_375.s2, "p_963->g_375.s2", print_hash_value);
    transparent_crc(p_963->g_375.s3, "p_963->g_375.s3", print_hash_value);
    transparent_crc(p_963->g_375.s4, "p_963->g_375.s4", print_hash_value);
    transparent_crc(p_963->g_375.s5, "p_963->g_375.s5", print_hash_value);
    transparent_crc(p_963->g_375.s6, "p_963->g_375.s6", print_hash_value);
    transparent_crc(p_963->g_375.s7, "p_963->g_375.s7", print_hash_value);
    transparent_crc(p_963->g_386, "p_963->g_386", print_hash_value);
    transparent_crc(p_963->g_390.x, "p_963->g_390.x", print_hash_value);
    transparent_crc(p_963->g_390.y, "p_963->g_390.y", print_hash_value);
    transparent_crc(p_963->g_391.x, "p_963->g_391.x", print_hash_value);
    transparent_crc(p_963->g_391.y, "p_963->g_391.y", print_hash_value);
    transparent_crc(p_963->g_392.x, "p_963->g_392.x", print_hash_value);
    transparent_crc(p_963->g_392.y, "p_963->g_392.y", print_hash_value);
    transparent_crc(p_963->g_392.z, "p_963->g_392.z", print_hash_value);
    transparent_crc(p_963->g_392.w, "p_963->g_392.w", print_hash_value);
    transparent_crc(p_963->g_393.x, "p_963->g_393.x", print_hash_value);
    transparent_crc(p_963->g_393.y, "p_963->g_393.y", print_hash_value);
    transparent_crc(p_963->g_401.x, "p_963->g_401.x", print_hash_value);
    transparent_crc(p_963->g_401.y, "p_963->g_401.y", print_hash_value);
    transparent_crc(p_963->g_401.z, "p_963->g_401.z", print_hash_value);
    transparent_crc(p_963->g_401.w, "p_963->g_401.w", print_hash_value);
    transparent_crc(p_963->g_419, "p_963->g_419", print_hash_value);
    transparent_crc(p_963->g_437.x, "p_963->g_437.x", print_hash_value);
    transparent_crc(p_963->g_437.y, "p_963->g_437.y", print_hash_value);
    transparent_crc(p_963->g_437.z, "p_963->g_437.z", print_hash_value);
    transparent_crc(p_963->g_437.w, "p_963->g_437.w", print_hash_value);
    transparent_crc(p_963->g_438.s0, "p_963->g_438.s0", print_hash_value);
    transparent_crc(p_963->g_438.s1, "p_963->g_438.s1", print_hash_value);
    transparent_crc(p_963->g_438.s2, "p_963->g_438.s2", print_hash_value);
    transparent_crc(p_963->g_438.s3, "p_963->g_438.s3", print_hash_value);
    transparent_crc(p_963->g_438.s4, "p_963->g_438.s4", print_hash_value);
    transparent_crc(p_963->g_438.s5, "p_963->g_438.s5", print_hash_value);
    transparent_crc(p_963->g_438.s6, "p_963->g_438.s6", print_hash_value);
    transparent_crc(p_963->g_438.s7, "p_963->g_438.s7", print_hash_value);
    transparent_crc(p_963->g_446.x, "p_963->g_446.x", print_hash_value);
    transparent_crc(p_963->g_446.y, "p_963->g_446.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_963->g_475[i], "p_963->g_475[i]", print_hash_value);

    }
    transparent_crc(p_963->g_484, "p_963->g_484", print_hash_value);
    transparent_crc(p_963->g_489, "p_963->g_489", print_hash_value);
    transparent_crc(p_963->g_490.s0, "p_963->g_490.s0", print_hash_value);
    transparent_crc(p_963->g_490.s1, "p_963->g_490.s1", print_hash_value);
    transparent_crc(p_963->g_490.s2, "p_963->g_490.s2", print_hash_value);
    transparent_crc(p_963->g_490.s3, "p_963->g_490.s3", print_hash_value);
    transparent_crc(p_963->g_490.s4, "p_963->g_490.s4", print_hash_value);
    transparent_crc(p_963->g_490.s5, "p_963->g_490.s5", print_hash_value);
    transparent_crc(p_963->g_490.s6, "p_963->g_490.s6", print_hash_value);
    transparent_crc(p_963->g_490.s7, "p_963->g_490.s7", print_hash_value);
    transparent_crc(p_963->g_592.s0, "p_963->g_592.s0", print_hash_value);
    transparent_crc(p_963->g_592.s1, "p_963->g_592.s1", print_hash_value);
    transparent_crc(p_963->g_592.s2, "p_963->g_592.s2", print_hash_value);
    transparent_crc(p_963->g_592.s3, "p_963->g_592.s3", print_hash_value);
    transparent_crc(p_963->g_592.s4, "p_963->g_592.s4", print_hash_value);
    transparent_crc(p_963->g_592.s5, "p_963->g_592.s5", print_hash_value);
    transparent_crc(p_963->g_592.s6, "p_963->g_592.s6", print_hash_value);
    transparent_crc(p_963->g_592.s7, "p_963->g_592.s7", print_hash_value);
    transparent_crc(p_963->g_592.s8, "p_963->g_592.s8", print_hash_value);
    transparent_crc(p_963->g_592.s9, "p_963->g_592.s9", print_hash_value);
    transparent_crc(p_963->g_592.sa, "p_963->g_592.sa", print_hash_value);
    transparent_crc(p_963->g_592.sb, "p_963->g_592.sb", print_hash_value);
    transparent_crc(p_963->g_592.sc, "p_963->g_592.sc", print_hash_value);
    transparent_crc(p_963->g_592.sd, "p_963->g_592.sd", print_hash_value);
    transparent_crc(p_963->g_592.se, "p_963->g_592.se", print_hash_value);
    transparent_crc(p_963->g_592.sf, "p_963->g_592.sf", print_hash_value);
    transparent_crc(p_963->g_593.x, "p_963->g_593.x", print_hash_value);
    transparent_crc(p_963->g_593.y, "p_963->g_593.y", print_hash_value);
    transparent_crc(p_963->g_594.x, "p_963->g_594.x", print_hash_value);
    transparent_crc(p_963->g_594.y, "p_963->g_594.y", print_hash_value);
    transparent_crc(p_963->g_606.s0, "p_963->g_606.s0", print_hash_value);
    transparent_crc(p_963->g_606.s1, "p_963->g_606.s1", print_hash_value);
    transparent_crc(p_963->g_606.s2, "p_963->g_606.s2", print_hash_value);
    transparent_crc(p_963->g_606.s3, "p_963->g_606.s3", print_hash_value);
    transparent_crc(p_963->g_606.s4, "p_963->g_606.s4", print_hash_value);
    transparent_crc(p_963->g_606.s5, "p_963->g_606.s5", print_hash_value);
    transparent_crc(p_963->g_606.s6, "p_963->g_606.s6", print_hash_value);
    transparent_crc(p_963->g_606.s7, "p_963->g_606.s7", print_hash_value);
    transparent_crc(p_963->g_606.s8, "p_963->g_606.s8", print_hash_value);
    transparent_crc(p_963->g_606.s9, "p_963->g_606.s9", print_hash_value);
    transparent_crc(p_963->g_606.sa, "p_963->g_606.sa", print_hash_value);
    transparent_crc(p_963->g_606.sb, "p_963->g_606.sb", print_hash_value);
    transparent_crc(p_963->g_606.sc, "p_963->g_606.sc", print_hash_value);
    transparent_crc(p_963->g_606.sd, "p_963->g_606.sd", print_hash_value);
    transparent_crc(p_963->g_606.se, "p_963->g_606.se", print_hash_value);
    transparent_crc(p_963->g_606.sf, "p_963->g_606.sf", print_hash_value);
    transparent_crc(p_963->g_612.x, "p_963->g_612.x", print_hash_value);
    transparent_crc(p_963->g_612.y, "p_963->g_612.y", print_hash_value);
    transparent_crc(p_963->g_650.s0, "p_963->g_650.s0", print_hash_value);
    transparent_crc(p_963->g_650.s1, "p_963->g_650.s1", print_hash_value);
    transparent_crc(p_963->g_650.s2, "p_963->g_650.s2", print_hash_value);
    transparent_crc(p_963->g_650.s3, "p_963->g_650.s3", print_hash_value);
    transparent_crc(p_963->g_650.s4, "p_963->g_650.s4", print_hash_value);
    transparent_crc(p_963->g_650.s5, "p_963->g_650.s5", print_hash_value);
    transparent_crc(p_963->g_650.s6, "p_963->g_650.s6", print_hash_value);
    transparent_crc(p_963->g_650.s7, "p_963->g_650.s7", print_hash_value);
    transparent_crc(p_963->g_650.s8, "p_963->g_650.s8", print_hash_value);
    transparent_crc(p_963->g_650.s9, "p_963->g_650.s9", print_hash_value);
    transparent_crc(p_963->g_650.sa, "p_963->g_650.sa", print_hash_value);
    transparent_crc(p_963->g_650.sb, "p_963->g_650.sb", print_hash_value);
    transparent_crc(p_963->g_650.sc, "p_963->g_650.sc", print_hash_value);
    transparent_crc(p_963->g_650.sd, "p_963->g_650.sd", print_hash_value);
    transparent_crc(p_963->g_650.se, "p_963->g_650.se", print_hash_value);
    transparent_crc(p_963->g_650.sf, "p_963->g_650.sf", print_hash_value);
    transparent_crc(p_963->g_655.s0, "p_963->g_655.s0", print_hash_value);
    transparent_crc(p_963->g_655.s1, "p_963->g_655.s1", print_hash_value);
    transparent_crc(p_963->g_655.s2, "p_963->g_655.s2", print_hash_value);
    transparent_crc(p_963->g_655.s3, "p_963->g_655.s3", print_hash_value);
    transparent_crc(p_963->g_655.s4, "p_963->g_655.s4", print_hash_value);
    transparent_crc(p_963->g_655.s5, "p_963->g_655.s5", print_hash_value);
    transparent_crc(p_963->g_655.s6, "p_963->g_655.s6", print_hash_value);
    transparent_crc(p_963->g_655.s7, "p_963->g_655.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_963->g_667[i][j][k], "p_963->g_667[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_963->g_735[i], "p_963->g_735[i]", print_hash_value);

    }
    transparent_crc(p_963->g_747.s0, "p_963->g_747.s0", print_hash_value);
    transparent_crc(p_963->g_747.s1, "p_963->g_747.s1", print_hash_value);
    transparent_crc(p_963->g_747.s2, "p_963->g_747.s2", print_hash_value);
    transparent_crc(p_963->g_747.s3, "p_963->g_747.s3", print_hash_value);
    transparent_crc(p_963->g_747.s4, "p_963->g_747.s4", print_hash_value);
    transparent_crc(p_963->g_747.s5, "p_963->g_747.s5", print_hash_value);
    transparent_crc(p_963->g_747.s6, "p_963->g_747.s6", print_hash_value);
    transparent_crc(p_963->g_747.s7, "p_963->g_747.s7", print_hash_value);
    transparent_crc(p_963->g_747.s8, "p_963->g_747.s8", print_hash_value);
    transparent_crc(p_963->g_747.s9, "p_963->g_747.s9", print_hash_value);
    transparent_crc(p_963->g_747.sa, "p_963->g_747.sa", print_hash_value);
    transparent_crc(p_963->g_747.sb, "p_963->g_747.sb", print_hash_value);
    transparent_crc(p_963->g_747.sc, "p_963->g_747.sc", print_hash_value);
    transparent_crc(p_963->g_747.sd, "p_963->g_747.sd", print_hash_value);
    transparent_crc(p_963->g_747.se, "p_963->g_747.se", print_hash_value);
    transparent_crc(p_963->g_747.sf, "p_963->g_747.sf", print_hash_value);
    transparent_crc(p_963->g_787.x, "p_963->g_787.x", print_hash_value);
    transparent_crc(p_963->g_787.y, "p_963->g_787.y", print_hash_value);
    transparent_crc(p_963->g_798.s0, "p_963->g_798.s0", print_hash_value);
    transparent_crc(p_963->g_798.s1, "p_963->g_798.s1", print_hash_value);
    transparent_crc(p_963->g_798.s2, "p_963->g_798.s2", print_hash_value);
    transparent_crc(p_963->g_798.s3, "p_963->g_798.s3", print_hash_value);
    transparent_crc(p_963->g_798.s4, "p_963->g_798.s4", print_hash_value);
    transparent_crc(p_963->g_798.s5, "p_963->g_798.s5", print_hash_value);
    transparent_crc(p_963->g_798.s6, "p_963->g_798.s6", print_hash_value);
    transparent_crc(p_963->g_798.s7, "p_963->g_798.s7", print_hash_value);
    transparent_crc(p_963->g_798.s8, "p_963->g_798.s8", print_hash_value);
    transparent_crc(p_963->g_798.s9, "p_963->g_798.s9", print_hash_value);
    transparent_crc(p_963->g_798.sa, "p_963->g_798.sa", print_hash_value);
    transparent_crc(p_963->g_798.sb, "p_963->g_798.sb", print_hash_value);
    transparent_crc(p_963->g_798.sc, "p_963->g_798.sc", print_hash_value);
    transparent_crc(p_963->g_798.sd, "p_963->g_798.sd", print_hash_value);
    transparent_crc(p_963->g_798.se, "p_963->g_798.se", print_hash_value);
    transparent_crc(p_963->g_798.sf, "p_963->g_798.sf", print_hash_value);
    transparent_crc(p_963->g_799.x, "p_963->g_799.x", print_hash_value);
    transparent_crc(p_963->g_799.y, "p_963->g_799.y", print_hash_value);
    transparent_crc(p_963->g_803.x, "p_963->g_803.x", print_hash_value);
    transparent_crc(p_963->g_803.y, "p_963->g_803.y", print_hash_value);
    transparent_crc(p_963->g_804.x, "p_963->g_804.x", print_hash_value);
    transparent_crc(p_963->g_804.y, "p_963->g_804.y", print_hash_value);
    transparent_crc(p_963->g_805.x, "p_963->g_805.x", print_hash_value);
    transparent_crc(p_963->g_805.y, "p_963->g_805.y", print_hash_value);
    transparent_crc(p_963->g_805.z, "p_963->g_805.z", print_hash_value);
    transparent_crc(p_963->g_805.w, "p_963->g_805.w", print_hash_value);
    transparent_crc(p_963->g_820.s0, "p_963->g_820.s0", print_hash_value);
    transparent_crc(p_963->g_820.s1, "p_963->g_820.s1", print_hash_value);
    transparent_crc(p_963->g_820.s2, "p_963->g_820.s2", print_hash_value);
    transparent_crc(p_963->g_820.s3, "p_963->g_820.s3", print_hash_value);
    transparent_crc(p_963->g_820.s4, "p_963->g_820.s4", print_hash_value);
    transparent_crc(p_963->g_820.s5, "p_963->g_820.s5", print_hash_value);
    transparent_crc(p_963->g_820.s6, "p_963->g_820.s6", print_hash_value);
    transparent_crc(p_963->g_820.s7, "p_963->g_820.s7", print_hash_value);
    transparent_crc(p_963->g_820.s8, "p_963->g_820.s8", print_hash_value);
    transparent_crc(p_963->g_820.s9, "p_963->g_820.s9", print_hash_value);
    transparent_crc(p_963->g_820.sa, "p_963->g_820.sa", print_hash_value);
    transparent_crc(p_963->g_820.sb, "p_963->g_820.sb", print_hash_value);
    transparent_crc(p_963->g_820.sc, "p_963->g_820.sc", print_hash_value);
    transparent_crc(p_963->g_820.sd, "p_963->g_820.sd", print_hash_value);
    transparent_crc(p_963->g_820.se, "p_963->g_820.se", print_hash_value);
    transparent_crc(p_963->g_820.sf, "p_963->g_820.sf", print_hash_value);
    transparent_crc(p_963->g_823.x, "p_963->g_823.x", print_hash_value);
    transparent_crc(p_963->g_823.y, "p_963->g_823.y", print_hash_value);
    transparent_crc(p_963->g_823.z, "p_963->g_823.z", print_hash_value);
    transparent_crc(p_963->g_823.w, "p_963->g_823.w", print_hash_value);
    transparent_crc(p_963->g_850.x, "p_963->g_850.x", print_hash_value);
    transparent_crc(p_963->g_850.y, "p_963->g_850.y", print_hash_value);
    transparent_crc(p_963->g_860.s0, "p_963->g_860.s0", print_hash_value);
    transparent_crc(p_963->g_860.s1, "p_963->g_860.s1", print_hash_value);
    transparent_crc(p_963->g_860.s2, "p_963->g_860.s2", print_hash_value);
    transparent_crc(p_963->g_860.s3, "p_963->g_860.s3", print_hash_value);
    transparent_crc(p_963->g_860.s4, "p_963->g_860.s4", print_hash_value);
    transparent_crc(p_963->g_860.s5, "p_963->g_860.s5", print_hash_value);
    transparent_crc(p_963->g_860.s6, "p_963->g_860.s6", print_hash_value);
    transparent_crc(p_963->g_860.s7, "p_963->g_860.s7", print_hash_value);
    transparent_crc(p_963->g_860.s8, "p_963->g_860.s8", print_hash_value);
    transparent_crc(p_963->g_860.s9, "p_963->g_860.s9", print_hash_value);
    transparent_crc(p_963->g_860.sa, "p_963->g_860.sa", print_hash_value);
    transparent_crc(p_963->g_860.sb, "p_963->g_860.sb", print_hash_value);
    transparent_crc(p_963->g_860.sc, "p_963->g_860.sc", print_hash_value);
    transparent_crc(p_963->g_860.sd, "p_963->g_860.sd", print_hash_value);
    transparent_crc(p_963->g_860.se, "p_963->g_860.se", print_hash_value);
    transparent_crc(p_963->g_860.sf, "p_963->g_860.sf", print_hash_value);
    transparent_crc(p_963->g_862, "p_963->g_862", print_hash_value);
    transparent_crc(p_963->g_874.s0, "p_963->g_874.s0", print_hash_value);
    transparent_crc(p_963->g_874.s1, "p_963->g_874.s1", print_hash_value);
    transparent_crc(p_963->g_874.s2, "p_963->g_874.s2", print_hash_value);
    transparent_crc(p_963->g_874.s3, "p_963->g_874.s3", print_hash_value);
    transparent_crc(p_963->g_874.s4, "p_963->g_874.s4", print_hash_value);
    transparent_crc(p_963->g_874.s5, "p_963->g_874.s5", print_hash_value);
    transparent_crc(p_963->g_874.s6, "p_963->g_874.s6", print_hash_value);
    transparent_crc(p_963->g_874.s7, "p_963->g_874.s7", print_hash_value);
    transparent_crc(p_963->g_882.x, "p_963->g_882.x", print_hash_value);
    transparent_crc(p_963->g_882.y, "p_963->g_882.y", print_hash_value);
    transparent_crc(p_963->g_882.z, "p_963->g_882.z", print_hash_value);
    transparent_crc(p_963->g_882.w, "p_963->g_882.w", print_hash_value);
    transparent_crc(p_963->g_894.s0, "p_963->g_894.s0", print_hash_value);
    transparent_crc(p_963->g_894.s1, "p_963->g_894.s1", print_hash_value);
    transparent_crc(p_963->g_894.s2, "p_963->g_894.s2", print_hash_value);
    transparent_crc(p_963->g_894.s3, "p_963->g_894.s3", print_hash_value);
    transparent_crc(p_963->g_894.s4, "p_963->g_894.s4", print_hash_value);
    transparent_crc(p_963->g_894.s5, "p_963->g_894.s5", print_hash_value);
    transparent_crc(p_963->g_894.s6, "p_963->g_894.s6", print_hash_value);
    transparent_crc(p_963->g_894.s7, "p_963->g_894.s7", print_hash_value);
    transparent_crc(p_963->g_894.s8, "p_963->g_894.s8", print_hash_value);
    transparent_crc(p_963->g_894.s9, "p_963->g_894.s9", print_hash_value);
    transparent_crc(p_963->g_894.sa, "p_963->g_894.sa", print_hash_value);
    transparent_crc(p_963->g_894.sb, "p_963->g_894.sb", print_hash_value);
    transparent_crc(p_963->g_894.sc, "p_963->g_894.sc", print_hash_value);
    transparent_crc(p_963->g_894.sd, "p_963->g_894.sd", print_hash_value);
    transparent_crc(p_963->g_894.se, "p_963->g_894.se", print_hash_value);
    transparent_crc(p_963->g_894.sf, "p_963->g_894.sf", print_hash_value);
    transparent_crc(p_963->g_902.s0, "p_963->g_902.s0", print_hash_value);
    transparent_crc(p_963->g_902.s1, "p_963->g_902.s1", print_hash_value);
    transparent_crc(p_963->g_902.s2, "p_963->g_902.s2", print_hash_value);
    transparent_crc(p_963->g_902.s3, "p_963->g_902.s3", print_hash_value);
    transparent_crc(p_963->g_902.s4, "p_963->g_902.s4", print_hash_value);
    transparent_crc(p_963->g_902.s5, "p_963->g_902.s5", print_hash_value);
    transparent_crc(p_963->g_902.s6, "p_963->g_902.s6", print_hash_value);
    transparent_crc(p_963->g_902.s7, "p_963->g_902.s7", print_hash_value);
    transparent_crc(p_963->g_902.s8, "p_963->g_902.s8", print_hash_value);
    transparent_crc(p_963->g_902.s9, "p_963->g_902.s9", print_hash_value);
    transparent_crc(p_963->g_902.sa, "p_963->g_902.sa", print_hash_value);
    transparent_crc(p_963->g_902.sb, "p_963->g_902.sb", print_hash_value);
    transparent_crc(p_963->g_902.sc, "p_963->g_902.sc", print_hash_value);
    transparent_crc(p_963->g_902.sd, "p_963->g_902.sd", print_hash_value);
    transparent_crc(p_963->g_902.se, "p_963->g_902.se", print_hash_value);
    transparent_crc(p_963->g_902.sf, "p_963->g_902.sf", print_hash_value);
    transparent_crc(p_963->g_911.s0, "p_963->g_911.s0", print_hash_value);
    transparent_crc(p_963->g_911.s1, "p_963->g_911.s1", print_hash_value);
    transparent_crc(p_963->g_911.s2, "p_963->g_911.s2", print_hash_value);
    transparent_crc(p_963->g_911.s3, "p_963->g_911.s3", print_hash_value);
    transparent_crc(p_963->g_911.s4, "p_963->g_911.s4", print_hash_value);
    transparent_crc(p_963->g_911.s5, "p_963->g_911.s5", print_hash_value);
    transparent_crc(p_963->g_911.s6, "p_963->g_911.s6", print_hash_value);
    transparent_crc(p_963->g_911.s7, "p_963->g_911.s7", print_hash_value);
    transparent_crc(p_963->g_911.s8, "p_963->g_911.s8", print_hash_value);
    transparent_crc(p_963->g_911.s9, "p_963->g_911.s9", print_hash_value);
    transparent_crc(p_963->g_911.sa, "p_963->g_911.sa", print_hash_value);
    transparent_crc(p_963->g_911.sb, "p_963->g_911.sb", print_hash_value);
    transparent_crc(p_963->g_911.sc, "p_963->g_911.sc", print_hash_value);
    transparent_crc(p_963->g_911.sd, "p_963->g_911.sd", print_hash_value);
    transparent_crc(p_963->g_911.se, "p_963->g_911.se", print_hash_value);
    transparent_crc(p_963->g_911.sf, "p_963->g_911.sf", print_hash_value);
    transparent_crc(p_963->g_912.s0, "p_963->g_912.s0", print_hash_value);
    transparent_crc(p_963->g_912.s1, "p_963->g_912.s1", print_hash_value);
    transparent_crc(p_963->g_912.s2, "p_963->g_912.s2", print_hash_value);
    transparent_crc(p_963->g_912.s3, "p_963->g_912.s3", print_hash_value);
    transparent_crc(p_963->g_912.s4, "p_963->g_912.s4", print_hash_value);
    transparent_crc(p_963->g_912.s5, "p_963->g_912.s5", print_hash_value);
    transparent_crc(p_963->g_912.s6, "p_963->g_912.s6", print_hash_value);
    transparent_crc(p_963->g_912.s7, "p_963->g_912.s7", print_hash_value);
    transparent_crc(p_963->g_914.s0, "p_963->g_914.s0", print_hash_value);
    transparent_crc(p_963->g_914.s1, "p_963->g_914.s1", print_hash_value);
    transparent_crc(p_963->g_914.s2, "p_963->g_914.s2", print_hash_value);
    transparent_crc(p_963->g_914.s3, "p_963->g_914.s3", print_hash_value);
    transparent_crc(p_963->g_914.s4, "p_963->g_914.s4", print_hash_value);
    transparent_crc(p_963->g_914.s5, "p_963->g_914.s5", print_hash_value);
    transparent_crc(p_963->g_914.s6, "p_963->g_914.s6", print_hash_value);
    transparent_crc(p_963->g_914.s7, "p_963->g_914.s7", print_hash_value);
    transparent_crc(p_963->g_914.s8, "p_963->g_914.s8", print_hash_value);
    transparent_crc(p_963->g_914.s9, "p_963->g_914.s9", print_hash_value);
    transparent_crc(p_963->g_914.sa, "p_963->g_914.sa", print_hash_value);
    transparent_crc(p_963->g_914.sb, "p_963->g_914.sb", print_hash_value);
    transparent_crc(p_963->g_914.sc, "p_963->g_914.sc", print_hash_value);
    transparent_crc(p_963->g_914.sd, "p_963->g_914.sd", print_hash_value);
    transparent_crc(p_963->g_914.se, "p_963->g_914.se", print_hash_value);
    transparent_crc(p_963->g_914.sf, "p_963->g_914.sf", print_hash_value);
    transparent_crc(p_963->g_922.x, "p_963->g_922.x", print_hash_value);
    transparent_crc(p_963->g_922.y, "p_963->g_922.y", print_hash_value);
    transparent_crc(p_963->g_922.z, "p_963->g_922.z", print_hash_value);
    transparent_crc(p_963->g_922.w, "p_963->g_922.w", print_hash_value);
    transparent_crc(p_963->g_924.x, "p_963->g_924.x", print_hash_value);
    transparent_crc(p_963->g_924.y, "p_963->g_924.y", print_hash_value);
    transparent_crc(p_963->g_925.x, "p_963->g_925.x", print_hash_value);
    transparent_crc(p_963->g_925.y, "p_963->g_925.y", print_hash_value);
    transparent_crc(p_963->g_925.z, "p_963->g_925.z", print_hash_value);
    transparent_crc(p_963->g_925.w, "p_963->g_925.w", print_hash_value);
    transparent_crc(p_963->g_929.s0, "p_963->g_929.s0", print_hash_value);
    transparent_crc(p_963->g_929.s1, "p_963->g_929.s1", print_hash_value);
    transparent_crc(p_963->g_929.s2, "p_963->g_929.s2", print_hash_value);
    transparent_crc(p_963->g_929.s3, "p_963->g_929.s3", print_hash_value);
    transparent_crc(p_963->g_929.s4, "p_963->g_929.s4", print_hash_value);
    transparent_crc(p_963->g_929.s5, "p_963->g_929.s5", print_hash_value);
    transparent_crc(p_963->g_929.s6, "p_963->g_929.s6", print_hash_value);
    transparent_crc(p_963->g_929.s7, "p_963->g_929.s7", print_hash_value);
    transparent_crc(p_963->g_929.s8, "p_963->g_929.s8", print_hash_value);
    transparent_crc(p_963->g_929.s9, "p_963->g_929.s9", print_hash_value);
    transparent_crc(p_963->g_929.sa, "p_963->g_929.sa", print_hash_value);
    transparent_crc(p_963->g_929.sb, "p_963->g_929.sb", print_hash_value);
    transparent_crc(p_963->g_929.sc, "p_963->g_929.sc", print_hash_value);
    transparent_crc(p_963->g_929.sd, "p_963->g_929.sd", print_hash_value);
    transparent_crc(p_963->g_929.se, "p_963->g_929.se", print_hash_value);
    transparent_crc(p_963->g_929.sf, "p_963->g_929.sf", print_hash_value);
    transparent_crc(p_963->v_collective, "p_963->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 57; i++)
            transparent_crc(p_963->g_special_values[i + 57 * get_linear_group_id()], "p_963->g_special_values[i + 57 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 57; i++)
            transparent_crc(p_963->l_special_values[i], "p_963->l_special_values[i]", print_hash_value);
    transparent_crc(p_963->l_comm_values[get_linear_local_id()], "p_963->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_963->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()], "p_963->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
