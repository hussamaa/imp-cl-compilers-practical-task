// --atomics 20 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 69,34,2 -l 1,17,2
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

__constant uint32_t permutations[10][34] = {
{9,2,4,14,33,11,3,12,25,32,18,26,8,17,24,5,31,22,15,27,19,23,7,13,30,0,6,1,16,29,21,20,28,10}, // permutation 0
{22,18,32,3,28,27,29,19,1,5,12,0,25,13,21,14,4,2,9,24,11,23,26,7,17,33,31,6,8,30,20,10,15,16}, // permutation 1
{1,20,27,17,4,6,14,3,24,10,18,29,12,28,13,16,2,5,31,8,30,25,11,26,22,19,33,15,23,9,7,21,32,0}, // permutation 2
{30,12,29,15,7,28,0,32,14,20,11,33,27,3,31,10,26,18,19,9,16,24,21,13,6,2,4,8,25,23,5,22,17,1}, // permutation 3
{12,21,32,8,26,13,29,11,3,4,14,28,16,25,19,30,20,22,15,27,23,31,5,9,1,7,24,33,2,10,0,18,17,6}, // permutation 4
{6,21,5,22,10,18,4,1,26,29,7,27,9,19,32,15,16,23,11,30,12,25,0,20,31,14,33,2,28,17,3,24,13,8}, // permutation 5
{8,24,5,22,23,12,7,18,32,21,20,16,26,27,30,33,14,15,3,10,25,29,31,11,9,19,13,0,28,6,17,2,4,1}, // permutation 6
{2,20,26,19,32,30,27,8,16,28,17,0,12,13,23,3,6,4,18,21,22,29,5,7,1,25,9,24,10,31,11,14,33,15}, // permutation 7
{23,28,19,1,22,11,13,9,12,3,14,20,32,24,17,21,27,30,25,8,0,33,16,10,7,2,15,18,29,5,4,6,26,31}, // permutation 8
{17,18,9,16,1,26,14,19,0,23,33,29,8,6,2,20,11,21,5,27,28,32,4,13,30,31,25,22,15,10,24,12,3,7} // permutation 9
};

// Seed: 3848084921

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(uint32_t, 8) g_20;
    VECTOR(uint32_t, 8) g_22;
    uint64_t g_25;
    uint16_t g_29;
    volatile int32_t g_33[10];
    volatile int16_t g_35;
    int32_t g_36;
    uint64_t g_37;
    uint16_t g_94;
    int32_t g_104;
    uint32_t *g_106;
    int32_t g_109;
    uint16_t g_112[2];
    VECTOR(int8_t, 16) g_122;
    uint8_t g_152;
    uint64_t * volatile *g_155;
    VECTOR(int16_t, 2) g_169;
    int8_t *g_188;
    int8_t *g_190;
    int64_t g_192;
    uint32_t g_198[6][10][1];
    VECTOR(int64_t, 16) g_204;
    uint32_t g_217;
    VECTOR(uint32_t, 16) g_218;
    VECTOR(int8_t, 8) g_222;
    uint32_t g_239;
    uint32_t g_259;
    uint8_t g_261;
    int32_t g_262;
    uint32_t g_263;
    int32_t * volatile *g_295;
    VECTOR(uint64_t, 2) g_301;
    uint8_t g_354;
    uint64_t g_368;
    VECTOR(uint32_t, 4) g_482;
    VECTOR(int16_t, 4) g_490;
    int64_t g_534;
    volatile uint64_t g_535[10];
    volatile VECTOR(uint8_t, 8) g_553;
    VECTOR(uint32_t, 8) g_565;
    volatile VECTOR(int8_t, 8) g_575;
    volatile VECTOR(uint64_t, 2) g_606;
    volatile int8_t g_631;
    volatile int16_t g_632;
    uint16_t g_635;
    uint64_t g_639;
    uint64_t g_651;
    int32_t *g_655;
    int32_t ** volatile g_654;
    volatile int16_t g_662;
    int32_t g_663;
    volatile int32_t g_664;
    uint8_t g_665;
    VECTOR(int64_t, 4) g_710;
    volatile VECTOR(uint32_t, 16) g_731;
    int32_t ** volatile g_774;
    VECTOR(int8_t, 4) g_789;
    int64_t g_813[1];
    int32_t g_814[5][9];
    VECTOR(int8_t, 2) g_819;
    VECTOR(int8_t, 16) g_829;
    VECTOR(int16_t, 4) g_908;
    volatile VECTOR(int64_t, 4) g_916;
    VECTOR(int8_t, 16) g_926;
    int16_t g_959;
    VECTOR(uint8_t, 4) g_1027;
    VECTOR(int64_t, 4) g_1048;
    VECTOR(int64_t, 4) g_1050;
    VECTOR(int64_t, 2) g_1051;
    int32_t *g_1055;
    int32_t **g_1054;
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
int64_t  func_1(struct S0 * p_1061);
int32_t  func_2(uint16_t  p_3, int8_t  p_4, uint8_t  p_5, uint32_t  p_6, struct S0 * p_1061);
int64_t  func_10(int16_t  p_11, struct S0 * p_1061);
int32_t  func_14(int32_t  p_15, int64_t  p_16, uint64_t  p_17, uint32_t  p_18, int64_t  p_19, struct S0 * p_1061);
int16_t  func_40(int32_t * p_41, int8_t  p_42, int16_t  p_43, struct S0 * p_1061);
uint32_t  func_66(uint32_t  p_67, uint32_t  p_68, uint32_t  p_69, int32_t * p_70, struct S0 * p_1061);
uint16_t  func_72(int32_t  p_73, uint16_t * p_74, uint32_t  p_75, int64_t  p_76, int32_t  p_77, struct S0 * p_1061);
int16_t  func_78(uint8_t  p_79, uint32_t * p_80, uint32_t * p_81, uint32_t * p_82, int32_t * p_83, struct S0 * p_1061);
int8_t  func_84(uint64_t * p_85, int32_t  p_86, uint32_t * p_87, int32_t * p_88, uint16_t * p_89, struct S0 * p_1061);
uint64_t * func_90(int64_t  p_91, uint16_t * p_92, struct S0 * p_1061);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1061->g_comm_values p_1061->l_comm_values p_1061->g_22 p_1061->g_29 p_1061->g_37 p_1061->g_632 p_1061->g_665 p_1061->g_663 p_1061->g_654 p_1061->g_259 p_1061->g_222 p_1061->g_122 p_1061->g_112 p_1061->g_710 p_1061->g_635 p_1061->g_152 p_1061->g_218 p_1061->g_301 p_1061->g_198 p_1061->g_731 p_1061->g_490 p_1061->g_774 p_1061->g_789 p_1061->g_535 p_1061->g_169 p_1061->g_662 p_1061->g_819 p_1061->g_109 p_1061->g_36 p_1061->g_33 p_1061->g_829 p_1061->g_204 p_1061->g_192 p_1061->g_908 p_1061->g_916 p_1061->g_926 p_1061->g_25 p_1061->g_959 p_1061->g_651 p_1061->g_814 p_1061->g_20 p_1061->g_368 p_1061->g_1027 p_1061->g_239 p_1061->g_262 p_1061->g_553 p_1061->g_482 p_1061->g_1048 p_1061->g_1050 p_1061->g_1051 p_1061->g_1054
 * writes: p_1061->g_25 p_1061->g_29 p_1061->g_37 p_1061->g_665 p_1061->g_261 p_1061->g_663 p_1061->g_655 p_1061->g_36 p_1061->g_259 p_1061->g_122 p_1061->g_152 p_1061->g_301 p_1061->g_635 p_1061->g_112 p_1061->g_789 p_1061->g_490 p_1061->g_169 p_1061->g_109 p_1061->g_651 p_1061->g_814 p_1061->g_368
 */
int64_t  func_1(struct S0 * p_1061)
{ /* block id: 4 */
    uint16_t l_7[8];
    VECTOR(int8_t, 16) l_796 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int8_t, 2))(0L, 0L), (VECTOR(int8_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    int8_t *l_797 = (void*)0;
    int8_t *l_798 = (void*)0;
    int8_t *l_799 = (void*)0;
    int8_t *l_800 = (void*)0;
    int8_t *l_801 = (void*)0;
    int8_t *l_802 = (void*)0;
    int8_t *l_803[1];
    int16_t *l_806 = (void*)0;
    int32_t l_807 = 0x7AF75525L;
    int32_t *l_808 = &p_1061->g_104;
    uint16_t *l_809 = &p_1061->g_635;
    int64_t *l_906 = (void*)0;
    VECTOR(int16_t, 2) l_907 = (VECTOR(int16_t, 2))(9L, 0x297DL);
    int16_t *l_917 = (void*)0;
    int16_t *l_918 = (void*)0;
    int16_t *l_919 = (void*)0;
    int16_t *l_920[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int32_t *l_921 = &p_1061->g_36;
    int32_t *l_922 = &p_1061->g_109;
    uint32_t l_939 = 4294967295UL;
    uint32_t l_958 = 0xC56F0F05L;
    uint64_t l_960 = 0xA4E0F1A25820A9B4L;
    uint32_t l_1008 = 0x4CAE1E06L;
    int16_t l_1038 = 0x5F8FL;
    int32_t l_1039 = 0x1256DE2FL;
    VECTOR(int64_t, 4) l_1047 = (VECTOR(int64_t, 4))(0x49CF37DD24C8F67EL, (VECTOR(int64_t, 2))(0x49CF37DD24C8F67EL, 5L), 5L);
    VECTOR(int64_t, 4) l_1052 = (VECTOR(int64_t, 4))(0x5BE0138CAB60B177L, (VECTOR(int64_t, 2))(0x5BE0138CAB60B177L, 0x4A7067312D14F75EL), 0x4A7067312D14F75EL);
    int i, j;
    for (i = 0; i < 8; i++)
        l_7[i] = 0xD4F2L;
    for (i = 0; i < 1; i++)
        l_803[i] = (void*)0;
    if (func_2(l_7[7], p_1061->g_comm_values[p_1061->tid], l_7[1], ((!(((((safe_add_func_int8_t_s_s((p_1061->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1061->tid, 34))] | func_10(p_1061->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1061->tid, 34))], p_1061)), ((VECTOR(int8_t, 4))(p_1061->g_789.wyww)).z)) , ((safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s((p_1061->g_789.z = ((VECTOR(int8_t, 4))(l_796.s1b85)).w), (safe_rshift_func_int16_t_s_u((l_807 = 0x341BL), ((*l_809) = ((void*)0 == l_808)))))) , l_7[7]), 0x2FL)) | 0L)) >= (-1L)) || p_1061->g_535[0]) > 0x80FCL)) != p_1061->g_169.y), p_1061))
    { /* block id: 356 */
        return p_1061->g_490.y;
    }
    else
    { /* block id: 358 */
        int32_t l_820 = 8L;
        int32_t *l_821 = &p_1061->g_109;
        int64_t *l_822[5];
        int32_t l_830 = 0x62F759E3L;
        int32_t *l_837 = (void*)0;
        int i;
        for (i = 0; i < 5; i++)
            l_822[i] = &p_1061->g_192;
        p_1061->g_36 ^= (FAKE_DIVERGE(p_1061->group_0_offset, get_group_id(0), 10) , (+((((p_1061->g_535[8] && (p_1061->g_731.s3 , p_1061->g_662)) , (((~(l_820 &= ((VECTOR(int8_t, 8))(p_1061->g_819.yxyxyxxx)).s3)) ^ (p_1061->g_665 = p_1061->g_218.sa)) , l_821)) != &p_1061->g_262) >= ((*l_821) < (&p_1061->g_534 != l_822[4])))));
        p_1061->g_36 &= ((((((safe_add_func_int8_t_s_s(((((-9L) & ((safe_add_func_int8_t_s_s((*l_821), (GROUP_DIVERGE(2, 1) & p_1061->g_33[4]))) , (safe_div_func_int8_t_s_s((l_796.sd , ((VECTOR(int8_t, 8))(p_1061->g_829.s8f577ae6)).s4), (l_830 , (safe_sub_func_int32_t_s_s((0x03L & (safe_sub_func_int16_t_s_s(((*l_821) || (safe_div_func_int8_t_s_s((!(l_7[5] , (p_1061->g_204.sf || l_796.s4))), p_1061->g_192))), 0x3B0FL))), 0L))))))) | l_796.s1) | 0xB804B755L), (*l_821))) , 252UL) != FAKE_DIVERGE(p_1061->global_1_offset, get_global_id(1), 10)) < FAKE_DIVERGE(p_1061->local_2_offset, get_local_id(2), 10)) > 0x1B72664DL) & 0L);
    }
    if ((atomic_inc(&p_1061->g_atomic_input[20 * get_linear_group_id() + 12]) == 4))
    { /* block id: 365 */
        int32_t l_838 = (-10L);
        uint16_t l_903[8][4];
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 4; j++)
                l_903[i][j] = 0x80C6L;
        }
        for (l_838 = 0; (l_838 <= (-23)); l_838--)
        { /* block id: 368 */
            int32_t l_841 = 0x66540817L;
            int32_t l_848 = (-1L);
            uint32_t l_849 = 4294967295UL;
            VECTOR(uint64_t, 8) l_850 = (VECTOR(uint64_t, 8))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0UL), 0UL), 0UL, 18446744073709551612UL, 0UL);
            int32_t l_851 = 1L;
            uint16_t l_902 = 0x9D94L;
            int i;
            for (l_841 = (-17); (l_841 >= (-2)); l_841++)
            { /* block id: 371 */
                uint64_t l_844[5] = {0xFC59DF28448D0778L,0xFC59DF28448D0778L,0xFC59DF28448D0778L,0xFC59DF28448D0778L,0xFC59DF28448D0778L};
                int32_t l_846 = 1L;
                int32_t *l_845 = &l_846;
                int32_t *l_847 = &l_846;
                int i;
                l_844[2] = 0x458A943CL;
                l_847 = l_845;
                l_845 = (void*)0;
            }
            l_849 = l_848;
            if ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_850.s0114420612730720)).sa6)).xxxyxxyyyxxyxxxy)).s3b01, ((VECTOR(uint64_t, 4))(0x44180948B379CEAEL, ((VECTOR(uint64_t, 2))(0xA328377DBC06CDEBL, 0x07C12CB123880152L)), 0x050D8029D147333DL))))).zxxzzxzwzyywzxyy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x50C1E85151C3FEA9L, 0xB81CEF2595C66BEFL)).yxxxyyxx)).s5340335351304531))).odd)).s7675113447166511)).s8 , l_851))
            { /* block id: 377 */
                uint64_t l_852 = 1UL;
                l_848 &= l_852;
            }
            else
            { /* block id: 379 */
                int32_t l_853 = 0x26C843B3L;
                uint32_t l_854 = 0x9CF7118AL;
                uint32_t l_855 = 0x568897A2L;
                int32_t *l_856 = (void*)0;
                int32_t l_858 = 0x7243816BL;
                int32_t *l_857 = &l_858;
                uint32_t l_859 = 4294967286UL;
                l_848 = (l_854 = l_853);
                l_848 &= l_855;
                l_857 = l_856;
                if (l_859)
                { /* block id: 384 */
                    VECTOR(int32_t, 16) l_860 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-7L)), (-7L)), (-7L), 0L, (-7L), (VECTOR(int32_t, 2))(0L, (-7L)), (VECTOR(int32_t, 2))(0L, (-7L)), 0L, (-7L), 0L, (-7L));
                    VECTOR(int32_t, 8) l_861 = (VECTOR(int32_t, 8))(0x53C364B3L, (VECTOR(int32_t, 4))(0x53C364B3L, (VECTOR(int32_t, 2))(0x53C364B3L, 0x56B62C11L), 0x56B62C11L), 0x56B62C11L, 0x53C364B3L, 0x56B62C11L);
                    VECTOR(int32_t, 2) l_862 = (VECTOR(int32_t, 2))(1L, 0x247689AAL);
                    int64_t l_863 = 0x03B4A2B45C74B063L;
                    int32_t l_869 = (-8L);
                    uint32_t l_870 = 0xE0D8788AL;
                    VECTOR(int32_t, 2) l_873 = (VECTOR(int32_t, 2))(0x055B9BC5L, 1L);
                    uint32_t l_874 = 4294967295UL;
                    VECTOR(int32_t, 2) l_875 = (VECTOR(int32_t, 2))(0L, 0x3E45DBA7L);
                    VECTOR(int32_t, 8) l_876 = (VECTOR(int32_t, 8))(0x68148390L, (VECTOR(int32_t, 4))(0x68148390L, (VECTOR(int32_t, 2))(0x68148390L, (-1L)), (-1L)), (-1L), 0x68148390L, (-1L));
                    uint32_t l_877 = 0x57C6E9B9L;
                    int64_t l_878[2];
                    int32_t l_879 = 0L;
                    int16_t l_880 = (-9L);
                    VECTOR(int32_t, 8) l_881 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                    VECTOR(int32_t, 2) l_882 = (VECTOR(int32_t, 2))(0x1F74DFE5L, 0x666561DBL);
                    VECTOR(int32_t, 8) l_883 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5C59E939L), 0x5C59E939L), 0x5C59E939L, 0L, 0x5C59E939L);
                    VECTOR(int32_t, 2) l_884 = (VECTOR(int32_t, 2))(1L, 0L);
                    uint32_t l_885 = 0xB6B9EB76L;
                    uint32_t l_886 = 0UL;
                    uint16_t l_887 = 65532UL;
                    VECTOR(int32_t, 8) l_888 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3E20F6F8L), 0x3E20F6F8L), 0x3E20F6F8L, 0L, 0x3E20F6F8L);
                    int64_t l_889 = 0x10AAED5DC19B1C2DL;
                    VECTOR(int32_t, 16) l_890 = (VECTOR(int32_t, 16))(0x422B7D02L, (VECTOR(int32_t, 4))(0x422B7D02L, (VECTOR(int32_t, 2))(0x422B7D02L, 0x059768F8L), 0x059768F8L), 0x059768F8L, 0x422B7D02L, 0x059768F8L, (VECTOR(int32_t, 2))(0x422B7D02L, 0x059768F8L), (VECTOR(int32_t, 2))(0x422B7D02L, 0x059768F8L), 0x422B7D02L, 0x059768F8L, 0x422B7D02L, 0x059768F8L);
                    uint32_t l_891[6][9][4] = {{{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L}},{{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L}},{{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L}},{{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L}},{{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L}},{{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L},{0x662DF370L,6UL,0x089D1667L,0x2BBCCA25L}}};
                    uint32_t l_892[3][2][10] = {{{0x44F43300L,0UL,0x4F972AF1L,0xDEF7E45EL,0UL,0xDEF7E45EL,0x4F972AF1L,0UL,0x44F43300L,0x44F43300L},{0x44F43300L,0UL,0x4F972AF1L,0xDEF7E45EL,0UL,0xDEF7E45EL,0x4F972AF1L,0UL,0x44F43300L,0x44F43300L}},{{0x44F43300L,0UL,0x4F972AF1L,0xDEF7E45EL,0UL,0xDEF7E45EL,0x4F972AF1L,0UL,0x44F43300L,0x44F43300L},{0x44F43300L,0UL,0x4F972AF1L,0xDEF7E45EL,0UL,0xDEF7E45EL,0x4F972AF1L,0UL,0x44F43300L,0x44F43300L}},{{0x44F43300L,0UL,0x4F972AF1L,0xDEF7E45EL,0UL,0xDEF7E45EL,0x4F972AF1L,0UL,0x44F43300L,0x44F43300L},{0x44F43300L,0UL,0x4F972AF1L,0xDEF7E45EL,0UL,0xDEF7E45EL,0x4F972AF1L,0UL,0x44F43300L,0x44F43300L}}};
                    VECTOR(uint64_t, 8) l_893 = (VECTOR(uint64_t, 8))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 0x5DB42E32EBE38E2CL), 0x5DB42E32EBE38E2CL), 0x5DB42E32EBE38E2CL, 8UL, 0x5DB42E32EBE38E2CL);
                    uint16_t l_894 = 0UL;
                    VECTOR(uint16_t, 16) l_895 = (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 65535UL), 65535UL), 65535UL, 65526UL, 65535UL, (VECTOR(uint16_t, 2))(65526UL, 65535UL), (VECTOR(uint16_t, 2))(65526UL, 65535UL), 65526UL, 65535UL, 65526UL, 65535UL);
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_878[i] = 0L;
                    l_863 &= ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_860.s52e6e109)), ((VECTOR(int32_t, 4))(0x5C0663E7L, ((VECTOR(int32_t, 2))(l_861.s76)), 6L)).wwxyzwyx, ((VECTOR(int32_t, 2))(0x7C19021AL, (-1L))).xyxyxyxx))).s36)).yyxxyxyx, ((VECTOR(int32_t, 4))(l_862.xyxy)).zxxyzwzx))).s0;
                    for (l_860.s9 = (-22); (l_860.s9 > 7); l_860.s9++)
                    { /* block id: 388 */
                        uint64_t l_866[8][6] = {{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL}};
                        int64_t l_867[3];
                        int8_t l_868[8] = {0x64L,0x64L,0x64L,0x64L,0x64L,0x64L,0x64L,0x64L};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_867[i] = 1L;
                        l_861.s3 ^= l_866[3][2];
                        l_868[2] |= l_867[1];
                    }
                    ++l_870;
                    l_858 = ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_873.xxyxxyyyyyxyxxyx)).s8e, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0x339CB79FL)).yyyxxyxxyyxyxyxy)).sd4a8)).wwzyyxxx)).s4762020456374264, (int32_t)l_874))).s25, ((VECTOR(int32_t, 16))(l_875.yyyyxxyyyyyxxxyy)).se4))).yxxxxyyy)).s1157134655645176)).sbe, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_876.s67523550)).s1373111101413341)).sd5, ((VECTOR(int32_t, 2))(0x6D2D09F9L, 5L))))).xyxxyxyy)).s64))).yyyy, ((VECTOR(int32_t, 16))(l_877, (l_848 &= 0x786F62E7L), 0x47912CE8L, (-1L), (l_878[1] , ((l_880 = l_879) , ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_881.s65)), ((VECTOR(int32_t, 4))(l_882.yxyy)), 0L, (-1L))).s0530202227213313, ((VECTOR(int32_t, 16))(l_883.s7076675711227462)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_884.yyyxxyxxxyxyxyxx)).s280c, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((l_885 , (l_887 = (l_848 |= l_886))), ((VECTOR(int32_t, 2))(l_888.s74)), 0x30C6C54BL, (((VECTOR(int32_t, 4))((-1L), l_889, 0x56BACD80L, 0x755DD6E3L)).x , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_890.sdd)), l_891[4][0][3], ((VECTOR(int32_t, 2))(0x2C3122BCL)), 0x3D1DDFEEL, 0x6BB95C7CL, 1L)).s6475514126573116, ((VECTOR(int32_t, 16))(0x27A4F911L))))).s65)), (-1L), ((VECTOR(int32_t, 2))(0x589DA986L)), l_892[0][1][9], 0x7DCCBF4EL, (-10L))))), (int32_t)l_893.s6))).hi)), ((VECTOR(int32_t, 8))((-7L))), ((VECTOR(int32_t, 2))(1L)), 0x7D1E7834L, 0x2F2A395CL)))).hi, ((VECTOR(int32_t, 8))(0L))))))).s14)).hi), ((VECTOR(int32_t, 8))(0x1C21AFF5L)), ((VECTOR(int32_t, 2))((-1L))), 2L)).se475))))), 1L, 0x032C87CEL, l_894, 0x5EDE7435L, ((VECTOR(int32_t, 8))(0x713D69B9L))))))).sf)), l_895.sf, 0x7FCD4156L, ((VECTOR(int32_t, 4))((-1L))), 0L, ((VECTOR(int32_t, 2))(0x13D51F00L)), 0x249F8B56L, 0x01F10FB6L)).s755c))).x;
                }
                else
                { /* block id: 398 */
                    uint8_t l_896 = 0x21L;
                    int8_t l_897 = 9L;
                    int32_t l_898 = 0x61A98865L;
                    uint32_t l_899 = 4294967291UL;
                    int32_t l_901 = (-1L);
                    int32_t *l_900 = &l_901;
                    l_896 ^= 5L;
                    l_857 = (l_856 = ((l_898 = (l_897 , GROUP_DIVERGE(2, 1))) , (l_899 , l_900)));
                }
            }
            l_902 = 0L;
        }
        ++l_903[2][0];
        unsigned int result = 0;
        result += l_838;
        int l_903_i0, l_903_i1;
        for (l_903_i0 = 0; l_903_i0 < 8; l_903_i0++) {
            for (l_903_i1 = 0; l_903_i1 < 4; l_903_i1++) {
                result += l_903[l_903_i0][l_903_i1];
            }
        }
        atomic_add(&p_1061->g_special_values[20 * get_linear_group_id() + 12], result);
    }
    else
    { /* block id: 408 */
        (1 + 1);
    }
    if (((*l_922) = ((*l_921) &= (((VECTOR(int16_t, 8))((l_906 == &p_1061->g_534), (FAKE_DIVERGE(p_1061->local_1_offset, get_local_id(1), 10) ^ ((VECTOR(int16_t, 8))(l_907.xxyxxyyy)).s1), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1061->g_908.wy)))), 0x1297L, 0x39DCL)), (-9L), 0x12F9L)).s2 <= (p_1061->g_169.y = (p_1061->g_490.x |= (l_807 = (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((safe_sub_func_int16_t_s_s((&p_1061->g_635 == (void*)0), l_796.sa)))), (safe_div_func_uint64_t_u_u(0xFE750E39780409CEL, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(p_1061->g_916.yy)).yxyxxyyyxxyxyyxx)).s0)))))))))))
    { /* block id: 416 */
        uint16_t l_925 = 65535UL;
        int32_t *l_927 = (void*)0;
        int32_t *l_928 = &p_1061->g_814[4][5];
        int32_t *l_929 = &p_1061->g_814[4][5];
        int32_t *l_930 = &p_1061->g_262;
        int32_t *l_931 = &p_1061->g_814[2][7];
        int32_t *l_932 = &p_1061->g_36;
        int32_t *l_933 = &p_1061->g_36;
        int32_t *l_934 = &p_1061->g_814[3][0];
        int32_t *l_935 = &l_807;
        int32_t *l_936 = &p_1061->g_814[2][2];
        int32_t *l_937 = &p_1061->g_814[1][4];
        int32_t *l_938[7][7][5] = {{{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36}},{{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36}},{{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36}},{{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36}},{{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36}},{{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36}},{{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36},{&p_1061->g_262,&p_1061->g_262,&p_1061->g_814[3][5],&l_807,&p_1061->g_36}}};
        int i, j, k;
        atomic_max(&p_1061->l_atomic_reduction[0], (safe_mul_func_int16_t_s_s((l_925 ^ ((VECTOR(int8_t, 8))(p_1061->g_926.sd04c295d)).s5), (&l_807 == (void*)0))));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1061->v_collective += p_1061->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_939--;
    }
    else
    { /* block id: 419 */
        uint32_t *l_942 = &p_1061->g_239;
        int32_t l_949 = 0x1C626E6DL;
        int32_t l_956 = 2L;
        int8_t **l_957 = (void*)0;
        VECTOR(int32_t, 2) l_986 = (VECTOR(int32_t, 2))(0x2A58AF59L, 0x443E8F39L);
        int32_t l_1028 = 0x4C092AD0L;
        int32_t **l_1045 = &p_1061->g_655;
        VECTOR(int64_t, 16) l_1046 = (VECTOR(int64_t, 16))(0x569D34666266AA8BL, (VECTOR(int64_t, 4))(0x569D34666266AA8BL, (VECTOR(int64_t, 2))(0x569D34666266AA8BL, 0x4C85C344489CB91AL), 0x4C85C344489CB91AL), 0x4C85C344489CB91AL, 0x569D34666266AA8BL, 0x4C85C344489CB91AL, (VECTOR(int64_t, 2))(0x569D34666266AA8BL, 0x4C85C344489CB91AL), (VECTOR(int64_t, 2))(0x569D34666266AA8BL, 0x4C85C344489CB91AL), 0x569D34666266AA8BL, 0x4C85C344489CB91AL, 0x569D34666266AA8BL, 0x4C85C344489CB91AL);
        VECTOR(int64_t, 2) l_1049 = (VECTOR(int64_t, 2))(0x27868372FFD1B6D6L, 7L);
        int64_t l_1059[7] = {0x7C1455C4A45C4AABL,0x19164C59FF9F5F68L,0x7C1455C4A45C4AABL,0x7C1455C4A45C4AABL,0x19164C59FF9F5F68L,0x7C1455C4A45C4AABL,0x7C1455C4A45C4AABL};
        int32_t l_1060[3][2];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_1060[i][j] = 1L;
        }
        if (((l_942 != l_921) >= (safe_div_func_uint8_t_u_u(((((&p_1061->g_662 != (void*)0) < (safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(((l_949 >= ((((safe_div_func_uint8_t_u_u(3UL, p_1061->g_301.y)) == ((safe_rshift_func_uint16_t_u_s((l_956 > ((void*)0 != l_957)), 13)) , l_958)) >= l_956) >= 0x0A57L)) & 9L), 1UL)) >= p_1061->g_25), p_1061->g_959))) != p_1061->g_222.s0) , (*l_921)), l_956))))
        { /* block id: 420 */
            return l_960;
        }
        else
        { /* block id: 422 */
            uint32_t l_1003[6][5][8] = {{{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL}},{{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL}},{{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL}},{{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL}},{{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL}},{{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL},{4294967290UL,4294967295UL,1UL,5UL,0x3DCE5D57L,1UL,1UL,0xD8EC8EACL}}};
            int32_t *l_1037 = &p_1061->g_104;
            uint32_t l_1040[2][2][7];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_1040[i][j][k] = 8UL;
                }
            }
            if (((-3L) != (*l_922)))
            { /* block id: 423 */
                uint32_t l_983 = 6UL;
                int32_t *l_991 = &p_1061->g_262;
                int32_t *l_992 = &l_949;
                int32_t *l_993 = (void*)0;
                int32_t *l_994 = &l_807;
                int32_t *l_995 = &p_1061->g_262;
                int32_t *l_996 = (void*)0;
                int32_t *l_997 = &p_1061->g_262;
                int32_t *l_998 = &l_949;
                int32_t *l_999 = &p_1061->g_262;
                int32_t *l_1000 = &p_1061->g_814[4][5];
                int32_t *l_1001 = &l_807;
                int32_t *l_1002[6][8][5] = {{{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109}},{{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109}},{{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109}},{{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109}},{{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109}},{{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109},{&p_1061->g_109,&p_1061->g_262,&p_1061->g_262,&p_1061->g_109,&p_1061->g_109}}};
                int i, j, k;
                for (p_1061->g_259 = (-5); (p_1061->g_259 <= 49); p_1061->g_259 = safe_add_func_uint32_t_u_u(p_1061->g_259, 6))
                { /* block id: 426 */
                    uint64_t *l_973 = &p_1061->g_37;
                    uint64_t **l_972 = &l_973;
                    int32_t *l_977 = &p_1061->g_814[4][5];
                    int32_t *l_978 = &l_949;
                    int32_t *l_979 = (void*)0;
                    int32_t *l_980 = &p_1061->g_109;
                    int32_t *l_981 = &p_1061->g_36;
                    int32_t *l_982 = (void*)0;
                    for (p_1061->g_663 = 0; (p_1061->g_663 <= 5); p_1061->g_663 = safe_add_func_int32_t_s_s(p_1061->g_663, 4))
                    { /* block id: 429 */
                        uint64_t *l_965 = &p_1061->g_651;
                        int32_t *l_976 = &l_807;
                        (*l_976) &= ((FAKE_DIVERGE(p_1061->local_0_offset, get_local_id(0), 10) > (p_1061->g_789.z <= (++(*l_965)))) || ((((safe_sub_func_uint64_t_u_u((*l_921), (safe_sub_func_int16_t_s_s((l_972 == &l_965), (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))((*l_922), ((VECTOR(int16_t, 2))(0x583FL, 0x2937L)), (-4L))).w, 11)))))) , l_942) == (void*)0) != (p_1061->g_490.z = p_1061->g_301.x)));
                    }
                    ++l_983;
                    if (((*l_977) |= ((VECTOR(int32_t, 8))(l_986.xyyyyxxx)).s5))
                    { /* block id: 436 */
                        return p_1061->g_20.s4;
                    }
                    else
                    { /* block id: 438 */
                        if ((*l_978))
                            break;
                        l_978 = l_977;
                    }
                }
                for (p_1061->g_368 = 0; (p_1061->g_368 != 20); p_1061->g_368++)
                { /* block id: 445 */
                    int32_t *l_989 = (void*)0;
                    int32_t **l_990 = &l_921;
                    (*l_990) = l_989;
                }
                l_1003[4][3][7]--;
                l_1008 ^= (safe_rshift_func_uint16_t_u_u(0xCF89L, 6));
            }
            else
            { /* block id: 450 */
                int8_t *l_1009 = (void*)0;
                VECTOR(uint8_t, 4) l_1026 = (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 255UL), 255UL);
                uint8_t *l_1041 = &p_1061->g_665;
                int32_t **l_1042[9] = {&p_1061->g_655,(void*)0,&p_1061->g_655,&p_1061->g_655,(void*)0,&p_1061->g_655,&p_1061->g_655,(void*)0,&p_1061->g_655};
                int i;
                l_986.x = (l_1009 == &p_1061->g_631);
                (*l_922) = (safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((*l_1041) = (((safe_sub_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(p_1061->g_819.y, ((((((safe_mul_func_int16_t_s_s(p_1061->g_259, (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((l_1028 = (((VECTOR(uint8_t, 8))((p_1061->g_789.w < (18446744073709551615UL & p_1061->g_33[3])), ((VECTOR(uint8_t, 4))(l_1026.zxyz)), l_1003[4][3][7], 255UL, 0x13L)).s7 | ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(p_1061->g_1027.zzzywwxyzxyzxxww)).s38))).lo)), (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xFFL, 7UL)), 0UL, 0x29L)).x || (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(65535UL, (!(safe_mul_func_uint16_t_u_u((((VECTOR(uint32_t, 2))(4294967290UL, 0x7675F57DL)).even || (safe_div_func_int8_t_s_s(((p_1061->g_239 < ((void*)0 == l_1037)) != l_1038), p_1061->g_651))), 1UL))))), p_1061->g_262))))), FAKE_DIVERGE(p_1061->local_1_offset, get_local_id(1), 10))), (-1L))))) <= 1L) >= 0L) & l_1039) && p_1061->g_635) , l_1003[4][3][7]))) == (-10L)), l_1040[0][1][0])) > l_1040[0][0][6]) , p_1061->g_553.s6)), p_1061->g_36)), 65526UL));
                (*p_1061->g_774) = (void*)0;
            }
            (*l_922) = l_1040[0][0][0];
        }
        (*l_1045) = ((l_986.x != ((+p_1061->g_482.w) <= GROUP_DIVERGE(1, 1))) , (l_922 = (void*)0));
        l_1060[0][0] = (((VECTOR(int64_t, 4))(l_1046.s5628)).w <= ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 2))(l_1047.xy)).yxyyxyyy, ((VECTOR(int64_t, 4))(8L, 0x0ADA9CD660D6C35CL, (-1L), 0x7D60D914E2D705C3L)).xyxwzyzw))).s77)).xxxxxxyyyxyyyyxx)), ((VECTOR(int64_t, 2))(p_1061->g_1048.ww)).xxyyxxyxyyxxyyxy, ((VECTOR(int64_t, 16))((-1L), 0x6B83F0B8A7BCB463L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_1049.yyxyxxyx)).s27)), p_1061->g_829.sd, 3L, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(0x347D57E440E1026BL, 0x252851FD52713F7DL)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_1061->g_1050.wxzw)))), ((VECTOR(int64_t, 4))(p_1061->g_1051.yyyx)))).s60))).yyyy)), 1L, ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))(l_1052.yzxzyyxzxxyzyywy)).s38d4, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x04EFDAE7AE25D342L, (-1L))))), 0x54BECCD63BD6284BL)), ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(0x7E84BE4C9719AFF0L, (safe_unary_minus_func_uint16_t_u(((((p_1061->g_1054 == (void*)0) > (&p_1061->g_239 == &p_1061->g_239)) != (safe_add_func_int64_t_s_s(p_1061->g_29, ((safe_unary_minus_func_int16_t_s((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(0UL, 0x7411886C27E3F477L, 18446744073709551613UL, 1UL)))).x == ((void*)0 == &p_1061->g_354)))) ^ 4294967286UL)))) ^ l_1059[4]))), 0x02CF4A551357BF92L, 4L)).odd, ((VECTOR(int64_t, 2))(0x5BD72459E1C2CE68L))))), 0L, 0L)).hi))), p_1061->g_1027.w, p_1061->g_204.s1, 0x254C580BDF8D431EL, 9L, ((VECTOR(int64_t, 2))(1L)), 0x00AF8D60CF3F9B89L)).sc0de, ((VECTOR(int64_t, 4))(0x520BFC7FDAEC05DAL))))).y, p_1061->g_1050.x, (-9L), 0x237869CA4AFAAEEEL, 7L, ((VECTOR(int64_t, 4))(0x1692A7C89651EDEDL)), 0x3449439C14072C6BL))))).even, ((VECTOR(int64_t, 8))(0L))))))).s3);
    }
    return p_1061->g_1051.x;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_2(uint16_t  p_3, int8_t  p_4, uint8_t  p_5, uint32_t  p_6, struct S0 * p_1061)
{ /* block id: 353 */
    int32_t *l_810 = (void*)0;
    int32_t *l_811 = &p_1061->g_109;
    int32_t *l_812[6] = {&p_1061->g_36,&p_1061->g_36,&p_1061->g_36,&p_1061->g_36,&p_1061->g_36,&p_1061->g_36};
    int8_t l_815 = 0x62L;
    uint32_t l_816 = 4294967295UL;
    int i;
    l_816++;
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1061->g_comm_values p_1061->g_22 p_1061->g_29 p_1061->g_37 p_1061->g_632 p_1061->g_665 p_1061->g_663 p_1061->g_654 p_1061->g_259 p_1061->g_222 p_1061->g_122 p_1061->g_112 p_1061->g_710 p_1061->g_635 p_1061->g_152 p_1061->g_218 p_1061->g_301 p_1061->g_198 p_1061->g_731 p_1061->g_490 p_1061->g_774
 * writes: p_1061->g_25 p_1061->g_29 p_1061->g_37 p_1061->g_665 p_1061->g_261 p_1061->g_663 p_1061->g_655 p_1061->g_36 p_1061->g_259 p_1061->g_122 p_1061->g_152 p_1061->g_301 p_1061->g_635 p_1061->g_112
 */
int64_t  func_10(int16_t  p_11, struct S0 * p_1061)
{ /* block id: 5 */
    uint32_t l_23 = 0x737AE9F9L;
    int32_t l_685 = 0x485759C0L;
    VECTOR(int32_t, 2) l_712 = (VECTOR(int32_t, 2))((-4L), 0x09221CDCL);
    VECTOR(int32_t, 2) l_714 = (VECTOR(int32_t, 2))(0x0C2707A3L, 4L);
    VECTOR(uint16_t, 8) l_725 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), 0UL), 0UL, 65528UL, 0UL);
    uint16_t *l_783 = (void*)0;
    uint16_t *l_784 = (void*)0;
    uint16_t *l_785 = &p_1061->g_112[0];
    int16_t l_788 = 3L;
    int i;
    for (p_11 = 0; (p_11 == 20); ++p_11)
    { /* block id: 8 */
        VECTOR(uint32_t, 8) l_21 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xF5F40E13L), 0xF5F40E13L), 0xF5F40E13L, 0UL, 0xF5F40E13L);
        uint64_t *l_24[6][3][6] = {{{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25}},{{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25}},{{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25}},{{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25}},{{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25}},{{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25},{&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25,&p_1061->g_25}}};
        int32_t l_690 = 0x698B5F2CL;
        int32_t l_692 = 0x64F9F2EEL;
        int32_t l_693 = 1L;
        VECTOR(int64_t, 4) l_708 = (VECTOR(int64_t, 4))(0x248B7DB73ADE265DL, (VECTOR(int64_t, 2))(0x248B7DB73ADE265DL, 0x0AD85676AC783697L), 0x0AD85676AC783697L);
        VECTOR(int64_t, 4) l_709 = (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 3L), 3L);
        VECTOR(int32_t, 8) l_713 = (VECTOR(int32_t, 8))(0x49989441L, (VECTOR(int32_t, 4))(0x49989441L, (VECTOR(int32_t, 2))(0x49989441L, 0x1F9A801BL), 0x1F9A801BL), 0x1F9A801BL, 0x49989441L, 0x1F9A801BL);
        VECTOR(uint16_t, 2) l_726 = (VECTOR(uint16_t, 2))(9UL, 0xD3F8L);
        uint16_t *l_727 = &p_1061->g_635;
        uint16_t *l_728[4];
        int8_t *l_734 = (void*)0;
        int8_t *l_735 = (void*)0;
        VECTOR(uint8_t, 2) l_736 = (VECTOR(uint8_t, 2))(3UL, 0x95L);
        int32_t *l_738 = &p_1061->g_36;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_728[i] = &p_1061->g_94;
        if (func_14((((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_1061->g_20.s1160055413662334)).s709b)).zxwzyzzwwyyyxwzz)).s7f, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_21.s75)).xyyyxxyx)).s27))))).even ^ ((VECTOR(uint32_t, 2))(p_1061->g_22.s65)).even), p_1061->g_comm_values[p_1061->tid], p_11, l_23, (((p_1061->g_25 = l_21.s5) > 0x604A276AC116E074L) ^ (l_21.s6 < p_1061->g_22.s2)), p_1061))
        { /* block id: 283 */
            int32_t *l_672 = &p_1061->g_262;
            for (p_1061->g_663 = 5; (p_1061->g_663 > (-24)); p_1061->g_663--)
            { /* block id: 286 */
                int32_t **l_673[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_673[i] = (void*)0;
                (*p_1061->g_654) = l_672;
            }
        }
        else
        { /* block id: 289 */
            int32_t *l_674 = (void*)0;
            int32_t *l_675 = &p_1061->g_36;
            int32_t l_680[1][7][7] = {{{0L,0x52456D96L,0x66FBA858L,0L,0x52456D96L,0L,0x66FBA858L},{0L,0x52456D96L,0x66FBA858L,0L,0x52456D96L,0L,0x66FBA858L},{0L,0x52456D96L,0x66FBA858L,0L,0x52456D96L,0L,0x66FBA858L},{0L,0x52456D96L,0x66FBA858L,0L,0x52456D96L,0L,0x66FBA858L},{0L,0x52456D96L,0x66FBA858L,0L,0x52456D96L,0L,0x66FBA858L},{0L,0x52456D96L,0x66FBA858L,0L,0x52456D96L,0L,0x66FBA858L},{0L,0x52456D96L,0x66FBA858L,0L,0x52456D96L,0L,0x66FBA858L}}};
            int8_t *l_699 = (void*)0;
            uint8_t *l_711 = &p_1061->g_152;
            int i, j, k;
            (*l_675) = p_11;
            for (p_1061->g_259 = 9; (p_1061->g_259 >= 56); p_1061->g_259 = safe_add_func_uint64_t_u_u(p_1061->g_259, 6))
            { /* block id: 293 */
                int32_t *l_678 = &p_1061->g_36;
                int32_t *l_679 = &p_1061->g_262;
                int32_t *l_681 = &l_680[0][1][2];
                int32_t *l_682 = &l_680[0][1][0];
                int32_t *l_683 = &l_680[0][1][2];
                int32_t *l_684 = &p_1061->g_36;
                int32_t *l_686 = &l_685;
                int32_t *l_687 = &p_1061->g_109;
                int32_t *l_688 = &p_1061->g_36;
                int32_t *l_689 = &p_1061->g_109;
                int32_t *l_691[10][6] = {{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0},{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0},{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0},{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0},{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0},{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0},{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0},{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0},{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0},{&p_1061->g_262,&l_680[0][1][2],(void*)0,(void*)0,&p_1061->g_262,(void*)0}};
                uint8_t l_694 = 0xD1L;
                int i, j;
                l_694++;
                (*l_682) = p_11;
            }
            (*l_675) = p_11;
            (*l_675) = (safe_mul_func_int8_t_s_s((p_1061->g_122.s0 |= p_1061->g_222.s3), ((safe_mul_func_uint16_t_u_u((l_693 | l_692), (safe_mul_func_uint8_t_u_u(((*l_711) &= ((GROUP_DIVERGE(0, 1) == p_1061->g_112[1]) , (safe_lshift_func_int8_t_s_u((p_11 || (((safe_sub_func_int64_t_s_s((((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(l_708.yzxy)).odd, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_709.zzyx)).hi)), p_11, ((VECTOR(int64_t, 2))(p_1061->g_710.xz)), p_11, 1L, 1L)).s73))).lo , 0x6748BC6336FE9DEBL), 0xCAEF96D108A993E3L)) && p_11) >= p_11)), p_1061->g_635)))), p_1061->g_218.s1)))) , p_11)));
        }
        l_685 = p_11;
        if (((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(0x56BC4AC6L, ((VECTOR(int32_t, 2))(l_712.xx)), 0x21BC8D1FL)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0x58254261L)), ((VECTOR(int32_t, 4))(l_713.s7532)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_714.yy)), 0x4A680E16L, (-9L))), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0L, (safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((((safe_add_func_int32_t_s_s(0L, ((--p_1061->g_301.x) | p_11))) > ((safe_sub_func_uint8_t_u_u((((l_685 = ((*l_727) = ((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 4))(l_725.s0611)).hi, ((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 2))(0x364BL, 0xBABAL)), GROUP_DIVERGE(2, 1), ((VECTOR(uint16_t, 2))(0UL, 0x2B7EL)), 0xB351L, 0xB267L)).s14))), ((VECTOR(uint16_t, 2))(l_726.yx))))).even)) || 65528UL) >= (~l_713.s6)), (safe_lshift_func_uint8_t_u_s(1UL, ((p_1061->g_198[0][4][0] || ((VECTOR(uint32_t, 2))(p_1061->g_731.sf3)).lo) || (safe_mul_func_int16_t_s_s(p_11, ((((l_714.y = l_714.x) ^ 253UL) , p_11) ^ (-1L))))))))) <= l_736.x)) > p_1061->g_490.w), 1UL)), l_23)), (-7L), (-8L))).xxzwxyyw)).odd)).lo, ((VECTOR(int32_t, 2))((-5L)))))), (-1L), 0x11BCE9DAL, 0x07D19527L, 0x12307406L)).lo)).s44))).lo)
        { /* block id: 307 */
            int32_t *l_737 = &l_693;
            if (l_736.y)
                break;
            l_738 = l_737;
        }
        else
        { /* block id: 310 */
            int32_t *l_773 = &p_1061->g_262;
            if ((atomic_inc(&p_1061->g_atomic_input[20 * get_linear_group_id() + 9]) == 9))
            { /* block id: 312 */
                int32_t l_739 = (-7L);
                uint16_t l_771 = 65535UL;
                uint32_t l_772 = 0x3128809CL;
                for (l_739 = 0; (l_739 > 2); l_739++)
                { /* block id: 315 */
                    int32_t l_742 = 1L;
                    int32_t *l_770 = &l_742;
                    for (l_742 = (-23); (l_742 == 25); l_742 = safe_add_func_int16_t_s_s(l_742, 6))
                    { /* block id: 318 */
                        VECTOR(uint32_t, 2) l_745 = (VECTOR(uint32_t, 2))(0x870BEEA8L, 8UL);
                        int8_t l_746[3][10][5] = {{{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)}},{{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)}},{{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)},{0x00L,(-4L),0x68L,0x7AL,(-1L)}}};
                        uint64_t l_747[5][5][9] = {{{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL}},{{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL}},{{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL}},{{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL}},{{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0xC5F1D4F2BAFC19BBL,6UL,0xBEBD8EA3A352F71CL,0UL,1UL,0UL,1UL}}};
                        int8_t l_750 = 5L;
                        VECTOR(int32_t, 4) l_751 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-6L)), (-6L));
                        int64_t l_752 = 5L;
                        VECTOR(int32_t, 8) l_753 = (VECTOR(int32_t, 8))(0x2ACBB9C9L, (VECTOR(int32_t, 4))(0x2ACBB9C9L, (VECTOR(int32_t, 2))(0x2ACBB9C9L, 8L), 8L), 8L, 0x2ACBB9C9L, 8L);
                        VECTOR(int32_t, 16) l_754 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int32_t, 2))(2L, 0L), (VECTOR(int32_t, 2))(2L, 0L), 2L, 0L, 2L, 0L);
                        uint16_t l_755[6];
                        uint8_t l_756 = 253UL;
                        VECTOR(int32_t, 16) l_757 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L), (VECTOR(int32_t, 2))(9L, (-1L)), (VECTOR(int32_t, 2))(9L, (-1L)), 9L, (-1L), 9L, (-1L));
                        VECTOR(int32_t, 16) l_758 = (VECTOR(int32_t, 16))(0x31955257L, (VECTOR(int32_t, 4))(0x31955257L, (VECTOR(int32_t, 2))(0x31955257L, 0x481FBA57L), 0x481FBA57L), 0x481FBA57L, 0x31955257L, 0x481FBA57L, (VECTOR(int32_t, 2))(0x31955257L, 0x481FBA57L), (VECTOR(int32_t, 2))(0x31955257L, 0x481FBA57L), 0x31955257L, 0x481FBA57L, 0x31955257L, 0x481FBA57L);
                        VECTOR(uint16_t, 16) l_759 = (VECTOR(uint16_t, 16))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0xB0AAL), 0xB0AAL), 0xB0AAL, 7UL, 0xB0AAL, (VECTOR(uint16_t, 2))(7UL, 0xB0AAL), (VECTOR(uint16_t, 2))(7UL, 0xB0AAL), 7UL, 0xB0AAL, 7UL, 0xB0AAL);
                        VECTOR(uint16_t, 8) l_760 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x6371L), 0x6371L), 0x6371L, 65526UL, 0x6371L);
                        VECTOR(uint16_t, 8) l_761 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL);
                        VECTOR(int16_t, 16) l_762 = (VECTOR(int16_t, 16))(0x6F9DL, (VECTOR(int16_t, 4))(0x6F9DL, (VECTOR(int16_t, 2))(0x6F9DL, (-1L)), (-1L)), (-1L), 0x6F9DL, (-1L), (VECTOR(int16_t, 2))(0x6F9DL, (-1L)), (VECTOR(int16_t, 2))(0x6F9DL, (-1L)), 0x6F9DL, (-1L), 0x6F9DL, (-1L));
                        VECTOR(int32_t, 2) l_763 = (VECTOR(int32_t, 2))(0x0E69942CL, 0x354404AAL);
                        VECTOR(int32_t, 16) l_764 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x031B2159L), 0x031B2159L), 0x031B2159L, 8L, 0x031B2159L, (VECTOR(int32_t, 2))(8L, 0x031B2159L), (VECTOR(int32_t, 2))(8L, 0x031B2159L), 8L, 0x031B2159L, 8L, 0x031B2159L);
                        VECTOR(int32_t, 8) l_765 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x69EB86FBL), 0x69EB86FBL), 0x69EB86FBL, 7L, 0x69EB86FBL);
                        VECTOR(int32_t, 2) l_766 = (VECTOR(int32_t, 2))(0x3044D10AL, 0x2E23F6B6L);
                        VECTOR(int32_t, 4) l_767 = (VECTOR(int32_t, 4))(0x17B2EA78L, (VECTOR(int32_t, 2))(0x17B2EA78L, (-6L)), (-6L));
                        int16_t l_768 = 0x4E41L;
                        uint8_t l_769 = 0UL;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_755[i] = 0x2C92L;
                        l_746[0][5][4] = l_745.y;
                        l_747[4][3][6]--;
                        l_769 = (l_750 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_751.zzzx)), (-8L), l_752, 0x61765B65L, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_753.s01)).xyyx, (int32_t)(l_753.s2 = 0L)))).xxwyxxxz)), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_754.s05e342038dac5941)).s6a, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(1L, 1L)).yyxy, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(0x238ECE30L, 0x1D81E746L)).xxyx, ((VECTOR(int32_t, 8))(((FAKE_DIVERGE(p_1061->local_1_offset, get_local_id(1), 10) , (l_755[4] = 9L)) , l_756), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_757.s29db715ef30318aa)).odd)).s1361127436223023)).s4ce2)).even, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(l_758.s7beb5829)), (int32_t)(-6L), (int32_t)(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_759.sebe73637)).even)).z, ((VECTOR(uint16_t, 2))(l_760.s01)), 0x3716L)).zxwzyxzy, ((VECTOR(uint16_t, 16))(l_761.s1365434777763017)).odd))).s51, ((VECTOR(uint16_t, 2))(65530UL, 0xD35AL))))), ((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_762.s073a)).yzwwxxyxwxxywzyy)).se6)).yxyxyxxyyyxxxxxx))).se0))).lo , 3L)))).s17))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_763.yx)))).yxxx)), 0x76896466L)).hi))).odd, ((VECTOR(int32_t, 2))(l_764.s6d))))).xxxy))).hi))).yyyxxyyy, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_765.s00563063)).s1, (-1L), (-1L), 0x169309DAL)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_766.yyyx)).wwxyyxyxwzxzyzxy)).s9d1a, ((VECTOR(int32_t, 2))((-1L), 0x46EA140EL)).yyyy))).wwywyxywxxyzwzzz, ((VECTOR(int32_t, 2))(l_767.wy)).yxyxxxxxxyxxyxyx))).even))).s00, ((VECTOR(int32_t, 2))((-1L), (-1L))), ((VECTOR(int32_t, 8))(l_768, 6L, ((VECTOR(int32_t, 4))(2L)), 0x54992641L, 0x2B970F10L)).s15))), 0L, ((VECTOR(int32_t, 4))(0L)), 0x6E69114DL, 0x46D83CCEL)))).s0);
                    }
                    l_770 = (void*)0;
                }
                l_739 = l_771;
                l_739 = l_772;
                unsigned int result = 0;
                result += l_739;
                result += l_771;
                result += l_772;
                atomic_add(&p_1061->g_special_values[20 * get_linear_group_id() + 9], result);
            }
            else
            { /* block id: 329 */
                (1 + 1);
            }
            if (l_714.y)
            { /* block id: 332 */
                (*p_1061->g_774) = l_773;
            }
            else
            { /* block id: 334 */
                int64_t l_780 = (-3L);
                if ((atomic_inc(&p_1061->l_atomic_input[10]) == 9))
                { /* block id: 336 */
                    VECTOR(uint16_t, 16) l_775 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x6C2DL), 0x6C2DL), 0x6C2DL, 1UL, 0x6C2DL, (VECTOR(uint16_t, 2))(1UL, 0x6C2DL), (VECTOR(uint16_t, 2))(1UL, 0x6C2DL), 1UL, 0x6C2DL, 1UL, 0x6C2DL);
                    uint64_t l_776 = 4UL;
                    uint32_t l_777 = 0UL;
                    int16_t l_778 = 0x7046L;
                    uint16_t l_779 = 0x49EBL;
                    int i;
                    l_779 &= ((l_777 = (l_776 &= ((VECTOR(uint16_t, 8))(l_775.s3e0ee483)).s1)) , l_778);
                    unsigned int result = 0;
                    result += l_775.sf;
                    result += l_775.se;
                    result += l_775.sd;
                    result += l_775.sc;
                    result += l_775.sb;
                    result += l_775.sa;
                    result += l_775.s9;
                    result += l_775.s8;
                    result += l_775.s7;
                    result += l_775.s6;
                    result += l_775.s5;
                    result += l_775.s4;
                    result += l_775.s3;
                    result += l_775.s2;
                    result += l_775.s1;
                    result += l_775.s0;
                    result += l_776;
                    result += l_777;
                    result += l_778;
                    result += l_779;
                    atomic_add(&p_1061->l_special_values[10], result);
                }
                else
                { /* block id: 340 */
                    (1 + 1);
                }
                return l_780;
            }
        }
    }
    l_714.y |= (safe_add_func_uint16_t_u_u((p_11 > 0x042F25D829A6A299L), ((*l_785)++)));
    return l_788;
}


/* ------------------------------------------ */
/* 
 * reads : p_1061->g_29 p_1061->g_37 p_1061->g_632 p_1061->g_665 p_1061->g_261
 * writes: p_1061->g_29 p_1061->g_37 p_1061->g_665 p_1061->g_261
 */
int32_t  func_14(int32_t  p_15, int64_t  p_16, uint64_t  p_17, uint32_t  p_18, int64_t  p_19, struct S0 * p_1061)
{ /* block id: 10 */
    int16_t l_55 = 0x518CL;
    VECTOR(int8_t, 4) l_56 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x6CL), 0x6CL);
    int32_t l_658 = 1L;
    int32_t l_659 = 0x78B215AEL;
    int32_t *l_660 = (void*)0;
    int32_t *l_661[9][3] = {{&p_1061->g_262,(void*)0,&p_1061->g_262},{&p_1061->g_262,(void*)0,&p_1061->g_262},{&p_1061->g_262,(void*)0,&p_1061->g_262},{&p_1061->g_262,(void*)0,&p_1061->g_262},{&p_1061->g_262,(void*)0,&p_1061->g_262},{&p_1061->g_262,(void*)0,&p_1061->g_262},{&p_1061->g_262,(void*)0,&p_1061->g_262},{&p_1061->g_262,(void*)0,&p_1061->g_262},{&p_1061->g_262,(void*)0,&p_1061->g_262}};
    int i, j;
    for (p_19 = 0; (p_19 < (-29)); p_19 = safe_sub_func_int8_t_s_s(p_19, 7))
    { /* block id: 13 */
        int32_t l_28[6] = {0x658D83F7L,0x658D83F7L,0x658D83F7L,0x658D83F7L,0x658D83F7L,0x658D83F7L};
        int32_t *l_32 = &l_28[0];
        int32_t *l_34[10][8][3] = {{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}},{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}},{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}},{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}},{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}},{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}},{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}},{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}},{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}},{{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]},{&l_28[3],&l_28[0],&l_28[4]}}};
        uint32_t *l_52 = (void*)0;
        uint32_t *l_53 = (void*)0;
        uint32_t *l_54[4];
        uint64_t *l_61 = &p_1061->g_37;
        int16_t *l_656 = (void*)0;
        int16_t *l_657[3];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_54[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_657[i] = (void*)0;
        --p_1061->g_29;
        --p_1061->g_37;
        l_659 |= (l_658 = (((*l_32) = ((VECTOR(int16_t, 16))((-3L), func_40(&l_28[4], p_1061->g_25, ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((((*l_32) = p_1061->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1061->tid, 34))]) && (((l_55 && (((*l_61) = (((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(l_56.ywwyxxyxzzzwwwwz)).s40, (int8_t)(safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((((GROUP_DIVERGE(1, 1) || p_19) , p_1061->g_36) , p_19), ((-8L) >= p_18))), l_56.w))))))).yyxyyxxy, ((VECTOR(uint8_t, 8))(0xE6L))))), ((VECTOR(int16_t, 8))(0x6BBCL))))), ((VECTOR(int16_t, 8))(0x21F8L))))).s1 <= p_1061->g_33[7])) , p_1061->g_20.s0)) , l_56.z) ^ p_1061->g_36)) != 2L), 1)), 0x52BDL)), 4294967295UL)), p_16)) != (-5L)), p_1061), ((VECTOR(int16_t, 4))(4L)), ((VECTOR(int16_t, 2))((-1L))), (-5L), 0x77F3L, ((VECTOR(int16_t, 4))(0x16D5L)), 0x2BEAL, 0x3992L)).sf) && p_1061->g_632));
    }
    --p_1061->g_665;
    for (p_1061->g_261 = 0; (p_1061->g_261 == 57); ++p_1061->g_261)
    { /* block id: 279 */
        if (p_15)
            break;
    }
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1061->g_25 p_1061->g_36 p_1061->g_20 p_1061->g_106 p_1061->g_112 p_1061->g_109 p_1061->g_37 p_1061->g_122 permutations p_1061->g_comm_values p_1061->g_94 p_1061->g_22 p_1061->g_155 p_1061->g_152 p_1061->g_169 p_1061->l_comm_values p_1061->g_188 p_1061->g_190 p_1061->g_192 p_1061->g_204 p_1061->g_104 p_1061->g_217 p_1061->g_218 p_1061->g_222 p_1061->g_239 p_1061->g_259 p_1061->g_263 p_1061->g_295 p_1061->g_301 p_1061->g_354 p_1061->g_368 p_1061->g_482 p_1061->g_198 p_1061->g_490 p_1061->g_29 p_1061->g_535 p_1061->g_553 p_1061->g_262 p_1061->g_33 p_1061->g_565 p_1061->g_575 p_1061->g_635 p_1061->g_639 p_1061->g_651 p_1061->g_654
 * writes: p_1061->g_25 p_1061->g_29 p_1061->g_104 p_1061->g_112 p_1061->g_37 permutations p_1061->g_109 p_1061->g_152 p_1061->g_188 p_1061->g_192 p_1061->g_122 p_1061->g_198 p_1061->g_22 p_1061->g_217 p_1061->g_239 p_1061->g_261 p_1061->g_263 p_1061->g_94 p_1061->g_262 p_1061->g_169 p_1061->g_354 p_1061->g_368 p_1061->g_36 p_1061->g_535 p_1061->g_635 p_1061->g_639 p_1061->g_651 p_1061->g_655
 */
int16_t  func_40(int32_t * p_41, int8_t  p_42, int16_t  p_43, struct S0 * p_1061)
{ /* block id: 18 */
    uint16_t *l_93 = &p_1061->g_94;
    VECTOR(int32_t, 2) l_102 = (VECTOR(int32_t, 2))(0x1F6D150EL, 5L);
    int32_t *l_528[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int8_t, 8) l_560 = (VECTOR(int8_t, 8))(0x59L, (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0x35L), 0x35L), 0x35L, 0x59L, 0x35L);
    VECTOR(int8_t, 8) l_561 = (VECTOR(int8_t, 8))(0x11L, (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 0x49L), 0x49L), 0x49L, 0x11L, 0x49L);
    VECTOR(int64_t, 4) l_564 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L);
    VECTOR(uint32_t, 8) l_566 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 3UL), 3UL), 3UL, 4294967295UL, 3UL);
    VECTOR(int64_t, 2) l_567 = (VECTOR(int64_t, 2))(1L, 0x1DF34194118A9ADBL);
    VECTOR(int64_t, 16) l_568 = (VECTOR(int64_t, 16))(0x0D7B3D598307F58CL, (VECTOR(int64_t, 4))(0x0D7B3D598307F58CL, (VECTOR(int64_t, 2))(0x0D7B3D598307F58CL, 0x0DCDA81ADAA88D43L), 0x0DCDA81ADAA88D43L), 0x0DCDA81ADAA88D43L, 0x0D7B3D598307F58CL, 0x0DCDA81ADAA88D43L, (VECTOR(int64_t, 2))(0x0D7B3D598307F58CL, 0x0DCDA81ADAA88D43L), (VECTOR(int64_t, 2))(0x0D7B3D598307F58CL, 0x0DCDA81ADAA88D43L), 0x0D7B3D598307F58CL, 0x0DCDA81ADAA88D43L, 0x0D7B3D598307F58CL, 0x0DCDA81ADAA88D43L);
    VECTOR(int64_t, 16) l_569 = (VECTOR(int64_t, 16))(0x3B00034A429751DDL, (VECTOR(int64_t, 4))(0x3B00034A429751DDL, (VECTOR(int64_t, 2))(0x3B00034A429751DDL, 1L), 1L), 1L, 0x3B00034A429751DDL, 1L, (VECTOR(int64_t, 2))(0x3B00034A429751DDL, 1L), (VECTOR(int64_t, 2))(0x3B00034A429751DDL, 1L), 0x3B00034A429751DDL, 1L, 0x3B00034A429751DDL, 1L);
    VECTOR(int64_t, 4) l_570 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 5L), 5L);
    int32_t **l_574 = (void*)0;
    int32_t ***l_573 = &l_574;
    VECTOR(int8_t, 8) l_576 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x13L), 0x13L), 0x13L, 0L, 0x13L);
    uint8_t *l_579 = &p_1061->g_261;
    uint32_t *l_595 = (void*)0;
    int8_t *l_596[9][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint16_t l_597 = 65535UL;
    int32_t l_598 = 0x143659E9L;
    uint32_t *l_617[5][7] = {{(void*)0,&p_1061->g_263,(void*)0,(void*)0,(void*)0,&p_1061->g_263,(void*)0},{(void*)0,&p_1061->g_263,(void*)0,(void*)0,(void*)0,&p_1061->g_263,(void*)0},{(void*)0,&p_1061->g_263,(void*)0,(void*)0,(void*)0,&p_1061->g_263,(void*)0},{(void*)0,&p_1061->g_263,(void*)0,(void*)0,(void*)0,&p_1061->g_263,(void*)0},{(void*)0,&p_1061->g_263,(void*)0,(void*)0,(void*)0,&p_1061->g_263,(void*)0}};
    uint64_t l_623 = 0xCF69C96E5786F484L;
    uint8_t l_650 = 255UL;
    int i, j;
    for (p_1061->g_25 = 0; (p_1061->g_25 != 37); p_1061->g_25 = safe_add_func_int64_t_s_s(p_1061->g_25, 9))
    { /* block id: 21 */
        uint16_t *l_71[9] = {&p_1061->g_29,(void*)0,&p_1061->g_29,&p_1061->g_29,(void*)0,&p_1061->g_29,&p_1061->g_29,(void*)0,&p_1061->g_29};
        int32_t *l_103 = &p_1061->g_104;
        int i;
        atomic_or(&p_1061->g_atomic_reduction[get_linear_group_id()], (safe_mod_func_uint32_t_u_u(0xFC0A9984L, func_66(p_1061->g_36, (((p_1061->g_29 = p_1061->g_20.s4) != func_72((func_78((((func_84(func_90(p_42, l_93, p_1061), ((*l_103) = (safe_mul_func_int16_t_s_s((p_43 &= ((safe_div_func_uint64_t_u_u((p_41 == p_41), p_42)) >= l_102.y)), p_42))), p_41, &p_1061->g_36, l_93, p_1061) || 0x12L) , 0x5DL) , 0xEDL), p_1061->g_106, p_1061->g_106, l_103, &p_1061->g_36, p_1061) > 0x8B87L), l_93, l_102.y, p_42, p_1061->g_25, p_1061)) || p_1061->g_29), l_102.y, l_528[1], p_1061))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1061->v_collective += p_1061->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    p_1061->g_262 ^= (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x3BL, 0L)), ((VECTOR(int8_t, 2))(l_560.s74)), ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(l_561.s7002705017410465)).hi, (int8_t)(((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(0L, (!p_1061->g_comm_values[p_1061->tid]), ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 2))(0x7864C54A32ABA41DL, 0x247A7DE7ABBF8FF1L)).yxxxxxxxyxxyyyyx, ((VECTOR(int64_t, 4))(l_564.xxyz)).xxwzxwwxxyxwyyxy))).hi, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(0x1A9E5BDAL, 1L)).yxyxyyxyxyyyxyyy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1061->g_565.s1366)).hi)))).yxyx))).odd, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_566.s56)), 4294967288UL, 1UL)).hi))))).xyyyyyyxxxxyyxxx))))).even, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_567.yx)).xxxy)).y, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-1L), (-3L))).xxxxxyxxyxxxyxyx)).s0e, ((VECTOR(int64_t, 2))(l_568.s12)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(l_569.s726c4624)).s63, ((VECTOR(int64_t, 8))(l_570.zwzxwzzz)).s50))), (-3L), 8L)), (safe_mul_func_uint16_t_u_u((l_573 == (((p_43 ^ ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x65L, 0L)).yyxyxxxyyxyxxxxx)).s9a1a)), ((VECTOR(int8_t, 16))(p_1061->g_575.s1314351321252146)).sfd45))).zxzywzywzyxyyyxy, ((VECTOR(int8_t, 8))(6L, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(l_576.s66)).yyxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0L)).xyyyxyyxxxyxyxyy)).s47fd))), (p_42 = ((safe_lshift_func_uint8_t_u_u(((*l_579) = p_43), p_42)) < ((*l_93) = (safe_mul_func_int8_t_s_s((l_597 = (((-8L) == (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(0xB9D8L, 0xB333L)).hi, 5)) && (safe_unary_minus_func_int32_t_s((safe_div_func_int8_t_s_s((p_43 && (safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s(((p_1061->g_112[1] = (safe_add_func_int32_t_s_s(((void*)0 == l_595), (*p_41)))) <= p_1061->g_36), p_42)), GROUP_DIVERGE(2, 1)))), p_43))))), GROUP_DIVERGE(1, 1)))) , p_42)), 0x7FL))))), 0x47L, (-7L))).s7667352343142160, ((VECTOR(int8_t, 16))(0L))))).s22, ((VECTOR(uint8_t, 2))(0x40L))))).lo) || 0x86L) , (void*)0)), 0x91E1L)), 0x7264CAA6590D4F5AL, 1L, 0x676D2D3FAB81E349L)).s41))).yxxxxxxy)).s5321246634344023)).sc6, ((VECTOR(int64_t, 2))((-7L))), ((VECTOR(int64_t, 2))(0L))))), (-3L))).wwyzwxzz))), (int64_t)p_1061->g_comm_values[p_1061->tid], (int64_t)p_42))).s3106512170114457)).sec80, ((VECTOR(int64_t, 4))(8L))))), (int64_t)(-1L)))), 0x1AE15E9F13CC6D02L, ((VECTOR(int64_t, 4))((-3L))), ((VECTOR(int64_t, 2))(8L)), ((VECTOR(int64_t, 2))((-1L))), 0x5A51D983C190E19BL)).sf, p_1061->g_217)) || p_1061->g_204.s2) | p_43)))))), ((VECTOR(int8_t, 8))(0x4EL))))).s34, ((VECTOR(int8_t, 2))(5L))))).xxyyxyyyxxyxyxyx)).sdf)).yyyxyxyyyxxxyyxx, ((VECTOR(int8_t, 16))(0x6EL)), ((VECTOR(int8_t, 16))(0L))))).sec95)), ((VECTOR(int8_t, 4))(1L))))))).s4 , l_598);
    for (p_1061->g_109 = 0; (p_1061->g_109 > (-18)); p_1061->g_109 = safe_sub_func_int64_t_s_s(p_1061->g_109, 1))
    { /* block id: 240 */
        int32_t l_605 = (-1L);
        uint16_t *l_607 = &p_1061->g_29;
        VECTOR(int32_t, 2) l_612 = (VECTOR(int32_t, 2))((-4L), (-1L));
        int32_t *l_626[10] = {&p_1061->g_262,&p_1061->g_262,&p_1061->g_262,&p_1061->g_262,&p_1061->g_262,&p_1061->g_262,&p_1061->g_262,&p_1061->g_262,&p_1061->g_262,&p_1061->g_262};
        int i;
        if (((((safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(l_605, ((VECTOR(uint64_t, 4))(p_1061->g_606.yyyy)).w)), p_1061->g_490.x)) , 0x6A07E9177336E9F5L) & ((void*)0 == l_607)) < (GROUP_DIVERGE(1, 1) & (safe_mod_func_int16_t_s_s(((p_42 , (safe_rshift_func_uint8_t_u_u((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_612.xxyx)))).w , p_42), ((safe_lshift_func_uint16_t_u_u((((1UL & (safe_rshift_func_int8_t_s_u((l_617[3][3] == (void*)0), p_1061->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1061->tid, 34))]))) ^ FAKE_DIVERGE(p_1061->global_2_offset, get_global_id(2), 10)) <= l_612.x), 12)) != 0L)))) , l_612.x), 8UL)))))
        { /* block id: 241 */
            int32_t l_622 = 0L;
            int32_t l_627 = (-1L);
            int32_t l_628 = 0L;
            int32_t l_629 = 0x3211D238L;
            int32_t l_630 = 0x1AA424F7L;
            int32_t l_633 = 0L;
            int32_t l_634 = (-3L);
            for (p_42 = 0; (p_42 != 6); p_42++)
            { /* block id: 244 */
                for (p_1061->g_368 = 24; (p_1061->g_368 <= 14); --p_1061->g_368)
                { /* block id: 247 */
                    ++l_623;
                }
                p_41 = (p_1061->g_33[3] , l_626[5]);
            }
            p_1061->g_635++;
        }
        else
        { /* block id: 253 */
            int16_t l_638 = 3L;
            p_1061->g_639++;
            if ((atomic_inc(&p_1061->l_atomic_input[14]) == 3))
            { /* block id: 256 */
                int16_t l_642 = (-7L);
                uint8_t l_643 = 251UL;
                uint32_t l_644 = 0x40540818L;
                uint32_t l_645 = 2UL;
                int8_t l_646 = 0x16L;
                uint64_t l_647[6];
                VECTOR(int32_t, 2) l_648 = (VECTOR(int32_t, 2))(0x6F7006BBL, 0x2CA35BFCL);
                int64_t l_649 = (-1L);
                int i;
                for (i = 0; i < 6; i++)
                    l_647[i] = 1UL;
                l_645 = (((l_642 = GROUP_DIVERGE(2, 1)) , l_643) , l_644);
                l_647[5] |= l_646;
                l_649 ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_648.yyyyxxxy)).s06)).odd;
                unsigned int result = 0;
                result += l_642;
                result += l_643;
                result += l_644;
                result += l_645;
                result += l_646;
                int l_647_i0;
                for (l_647_i0 = 0; l_647_i0 < 6; l_647_i0++) {
                    result += l_647[l_647_i0];
                }
                result += l_648.y;
                result += l_648.x;
                result += l_649;
                atomic_add(&p_1061->l_special_values[14], result);
            }
            else
            { /* block id: 261 */
                (1 + 1);
            }
            if ((*p_41))
                continue;
        }
        (*p_41) = (l_650 || 0x77416129L);
        if ((*p_41))
            break;
        p_1061->g_651++;
    }
    (*p_1061->g_654) = p_41;
    return p_1061->g_490.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_1061->g_535 p_1061->g_36 p_1061->g_553 p_1061->g_112 p_1061->g_262 p_1061->g_33
 * writes: p_1061->g_262 p_1061->g_36 p_1061->g_535 p_1061->g_112
 */
uint32_t  func_66(uint32_t  p_67, uint32_t  p_68, uint32_t  p_69, int32_t * p_70, struct S0 * p_1061)
{ /* block id: 223 */
    uint32_t *l_529 = &p_1061->g_239;
    int32_t *l_530 = &p_1061->g_262;
    int32_t l_531 = 1L;
    int32_t *l_532 = &p_1061->g_36;
    int32_t *l_533[6] = {&l_531,&l_531,&l_531,&l_531,&l_531,&l_531};
    VECTOR(int32_t, 8) l_540 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x712442D7L), 0x712442D7L), 0x712442D7L, 0L, 0x712442D7L);
    int8_t **l_551 = &p_1061->g_190;
    int16_t *l_552 = (void*)0;
    int32_t *l_556 = &p_1061->g_104;
    int32_t **l_555 = &l_556;
    int32_t ***l_554 = &l_555;
    int32_t l_557[2];
    uint16_t *l_558 = (void*)0;
    uint16_t *l_559 = &p_1061->g_112[0];
    int i;
    for (i = 0; i < 2; i++)
        l_557[i] = 1L;
    p_1061->g_36 = ((*l_530) = ((void*)0 == l_529));
    p_1061->g_535[4]--;
    atomic_and(&p_1061->l_atomic_reduction[0], (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))((-3L), ((VECTOR(int32_t, 2))(l_540.s46)), 4L)).z, (((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_69, ((*l_559) |= ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_u((l_551 != l_551), 0)) , l_552) == &p_1061->g_35) > (-1L)), (*l_532))) , ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1061->g_553.s3640)).ywyzwyyw)).s32)).hi), (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(0x4CL, 0x5FL, ((void*)0 == l_554), 0x2BL, ((VECTOR(int8_t, 2))(0x50L)), 0x65L, 0x29L)).s46))), 0x75L, 0x60L)).odd)), 0x34L, (-1L))).zzxxzyzz)).s3 , (*l_532)))) != l_557[0])))), (*l_530))) , &p_1061->g_535[4]) == &p_1061->g_37))) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1061->v_collective += p_1061->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_1061->g_33[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1061->g_37 p_1061->g_122 permutations p_1061->g_comm_values p_1061->g_94 p_1061->g_22 p_1061->g_112 p_1061->g_109 p_1061->g_155 p_1061->g_36 p_1061->g_152 p_1061->g_169 p_1061->g_25 p_1061->l_comm_values p_1061->g_188 p_1061->g_190 p_1061->g_192 p_1061->g_204 p_1061->g_104 p_1061->g_217 p_1061->g_218 p_1061->g_222 p_1061->g_239 p_1061->g_259 p_1061->g_263 p_1061->g_295 p_1061->g_301 p_1061->g_354 p_1061->g_368 p_1061->g_482 p_1061->g_198 p_1061->g_490
 * writes: p_1061->g_37 permutations p_1061->g_109 p_1061->g_152 p_1061->g_188 p_1061->g_192 p_1061->g_122 p_1061->g_198 p_1061->g_22 p_1061->g_217 p_1061->g_239 p_1061->g_261 p_1061->g_263 p_1061->g_94 p_1061->g_262 p_1061->g_169 p_1061->g_354 p_1061->g_368
 */
uint16_t  func_72(int32_t  p_73, uint16_t * p_74, uint32_t  p_75, int64_t  p_76, int32_t  p_77, struct S0 * p_1061)
{ /* block id: 33 */
    uint64_t l_115 = 0xEEE7CDA8B21999CBL;
    VECTOR(uint16_t, 16) l_158 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x2858L), 0x2858L), 0x2858L, 1UL, 0x2858L, (VECTOR(uint16_t, 2))(1UL, 0x2858L), (VECTOR(uint16_t, 2))(1UL, 0x2858L), 1UL, 0x2858L, 1UL, 0x2858L);
    int32_t *l_164[1][4][8] = {{{&p_1061->g_36,&p_1061->g_36,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_36},{&p_1061->g_36,&p_1061->g_36,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_36},{&p_1061->g_36,&p_1061->g_36,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_36},{&p_1061->g_36,&p_1061->g_36,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_36}}};
    VECTOR(int8_t, 16) l_201 = (VECTOR(int8_t, 16))(0x26L, (VECTOR(int8_t, 4))(0x26L, (VECTOR(int8_t, 2))(0x26L, 1L), 1L), 1L, 0x26L, 1L, (VECTOR(int8_t, 2))(0x26L, 1L), (VECTOR(int8_t, 2))(0x26L, 1L), 0x26L, 1L, 0x26L, 1L);
    VECTOR(uint16_t, 8) l_205 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0xD292L), 0xD292L), 0xD292L, 5UL, 0xD292L);
    int8_t l_219[9] = {8L,8L,8L,8L,8L,8L,8L,8L,8L};
    VECTOR(uint16_t, 4) l_225 = (VECTOR(uint16_t, 4))(0xCA5BL, (VECTOR(uint16_t, 2))(0xCA5BL, 0x83FAL), 0x83FAL);
    VECTOR(uint16_t, 16) l_226 = (VECTOR(uint16_t, 16))(0x13EEL, (VECTOR(uint16_t, 4))(0x13EEL, (VECTOR(uint16_t, 2))(0x13EEL, 65535UL), 65535UL), 65535UL, 0x13EEL, 65535UL, (VECTOR(uint16_t, 2))(0x13EEL, 65535UL), (VECTOR(uint16_t, 2))(0x13EEL, 65535UL), 0x13EEL, 65535UL, 0x13EEL, 65535UL);
    VECTOR(int8_t, 4) l_230 = (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, 1L), 1L);
    VECTOR(int64_t, 8) l_276 = (VECTOR(int64_t, 8))(0x0D9B2E33A0EA851AL, (VECTOR(int64_t, 4))(0x0D9B2E33A0EA851AL, (VECTOR(int64_t, 2))(0x0D9B2E33A0EA851AL, 0L), 0L), 0L, 0x0D9B2E33A0EA851AL, 0L);
    uint64_t **l_498 = (void*)0;
    uint8_t *l_506[5];
    uint32_t l_515 = 4294967295UL;
    int64_t l_527 = (-1L);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_506[i] = (void*)0;
    if ((+l_115))
    { /* block id: 34 */
        uint32_t *l_124 = (void*)0;
        int32_t l_144 = 0x1B42A304L;
        for (p_73 = 0; (p_73 == 1); p_73 = safe_add_func_int8_t_s_s(p_73, 6))
        { /* block id: 37 */
            VECTOR(uint8_t, 16) l_123 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL);
            int i;
            for (p_1061->g_37 = (-16); (p_1061->g_37 > 15); p_1061->g_37 = safe_add_func_int64_t_s_s(p_1061->g_37, 8))
            { /* block id: 40 */
                uint32_t *l_129 = (void*)0;
                uint32_t *l_130 = &permutations[(safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_1061->group_1_offset, get_group_id(1), 10), 10))][(safe_mod_func_uint32_t_u_u(p_1061->tid, 34))];
                uint64_t *l_142[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint64_t **l_141 = &l_142[0][0];
                int8_t *l_143[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_145 = &p_1061->g_109;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1061->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 34)), permutations[(safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_1061->group_1_offset, get_group_id(1), 10), 10))][(safe_mod_func_uint32_t_u_u(p_1061->tid, 34))]));
                (*l_145) &= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(p_1061->g_122.s72)).xxyxyyyy))).s0701311612170476, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_123.sd2)), ((((void*)0 == l_124) < ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((((*l_130) &= FAKE_DIVERGE(p_1061->global_0_offset, get_global_id(0), 10)) >= (((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((l_144 = ((((safe_lshift_func_uint8_t_u_u(((p_1061->g_comm_values[p_1061->tid] > (safe_div_func_uint16_t_u_u((l_123.s7 || 4294967295UL), p_1061->g_94))) || (((*l_141) = func_90(l_115, &p_1061->g_94, p_1061)) == &p_1061->g_37)), 0)) > p_1061->g_22.s7) & 0L) , p_1061->g_122.s0)), 0L)), l_123.sa)) > 1UL) , p_1061->g_112[0])), p_76)), (*p_74))) || l_115)) < FAKE_DIVERGE(p_1061->local_1_offset, get_local_id(1), 10)), ((VECTOR(uint8_t, 4))(246UL)), 0x55L)))).s3665321502726563))).s9e)).yxxyxyxyyyyxyxyy)))), ((VECTOR(uint8_t, 16))(1UL))))).s2fdf, ((VECTOR(uint8_t, 4))(0xFDL)), ((VECTOR(uint8_t, 4))(0xC4L))))), 0UL, 0xB9L, 0x8EL, 0x36L)).hi, ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 4))(0x07L))))).wzwzzywwxwxzxzzx))).s7f, ((VECTOR(uint8_t, 2))(5UL))))).hi, FAKE_DIVERGE(p_1061->group_2_offset, get_group_id(2), 10)));
            }
        }
    }
    else
    { /* block id: 50 */
        int32_t l_150 = 0x0409B1CEL;
        VECTOR(uint16_t, 4) l_159 = (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x9086L), 0x9086L);
        int32_t *l_171 = &p_1061->g_109;
        uint16_t l_191 = 0x4612L;
        VECTOR(int8_t, 8) l_195 = (VECTOR(int8_t, 8))(0x35L, (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, 0x53L), 0x53L), 0x53L, 0x35L, 0x53L);
        int i;
        for (p_77 = 0; (p_77 == 3); p_77++)
        { /* block id: 53 */
            uint8_t *l_151 = &p_1061->g_152;
            int32_t l_160 = 5L;
            int32_t *l_161 = (void*)0;
            int32_t *l_162[5] = {&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109};
            int64_t l_163 = 6L;
            VECTOR(int16_t, 2) l_168 = (VECTOR(int16_t, 2))(4L, 0x3B94L);
            VECTOR(int16_t, 16) l_170 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), (-4L)), (-4L)), (-4L), (-6L), (-4L), (VECTOR(int16_t, 2))((-6L), (-4L)), (VECTOR(int16_t, 2))((-6L), (-4L)), (-6L), (-4L), (-6L), (-4L));
            int i;
            l_163 &= (((((safe_sub_func_uint8_t_u_u(((*l_151) = l_150), (0x6928L | (l_150 <= FAKE_DIVERGE(p_1061->global_0_offset, get_global_id(0), 10))))) && (safe_mul_func_int16_t_s_s((((p_75 , l_115) <= ((p_1061->g_155 != p_1061->g_155) > ((p_1061->g_36 ^ (safe_div_func_int64_t_s_s((((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 16))(l_158.sd32165e1e43403c5)).s79, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(l_159.yzxwywxwzxzzwzyz)).s53, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0xA27DL, 0UL, ((VECTOR(uint16_t, 2))(0xDC01L)), ((VECTOR(uint16_t, 4))(0xB640L)), 0UL, 0x57B0L, GROUP_DIVERGE(2, 1), 0xFEB0L, p_1061->g_36, ((VECTOR(uint16_t, 2))(0x4458L)), 0xD47EL)).sa3af)).hi))), 0x35C8L, 0x54E8L)).hi))).yxyx))).x == p_1061->g_152), l_160))) & (-8L)))) , p_77), 1UL))) > l_160) == p_76) & l_158.sa);
            if (p_77)
            { /* block id: 56 */
                int32_t **l_165 = (void*)0;
                int32_t **l_166 = &l_162[2];
                VECTOR(int16_t, 8) l_167 = (VECTOR(int16_t, 8))(0x0EACL, (VECTOR(int16_t, 4))(0x0EACL, (VECTOR(int16_t, 2))(0x0EACL, 0x4A09L), 0x4A09L), 0x4A09L, 0x0EACL, 0x4A09L);
                int i;
                (*l_166) = l_164[0][2][1];
                p_73 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_167.s26)), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 16))(l_168.xyyxxxyyxxxxxxyy)).s7bf9, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1061->g_169.yyyxxxyx)).hi)).lo, ((VECTOR(int16_t, 16))(l_170.s3f9e7c7bd3f7da16)).s59))).yxyx))).odd))).xxxyyyxxxxyyxxxy)).odd)).s0;
            }
            else
            { /* block id: 59 */
                int32_t **l_172 = &l_161;
                uint64_t *l_185 = &p_1061->g_25;
                uint64_t **l_184 = &l_185;
                uint64_t ***l_183 = &l_184;
                int8_t **l_189 = &p_1061->g_188;
                int8_t *l_196 = (void*)0;
                int8_t *l_197[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t *l_212 = (void*)0;
                uint32_t *l_213 = (void*)0;
                uint32_t *l_214 = (void*)0;
                uint32_t *l_215 = (void*)0;
                VECTOR(uint16_t, 16) l_216 = (VECTOR(uint16_t, 16))(0x7581L, (VECTOR(uint16_t, 4))(0x7581L, (VECTOR(uint16_t, 2))(0x7581L, 0xF396L), 0xF396L), 0xF396L, 0x7581L, 0xF396L, (VECTOR(uint16_t, 2))(0x7581L, 0xF396L), (VECTOR(uint16_t, 2))(0x7581L, 0xF396L), 0x7581L, 0xF396L, 0x7581L, 0xF396L);
                int i;
                (*l_172) = (p_1061->g_25 , l_171);
                p_1061->g_192 |= (safe_add_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((p_73 & (p_1061->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1061->tid, 34))] != p_73)), (*p_74))), ((*l_171) ^= ((((*l_183) = (void*)0) != p_1061->g_155) >= p_1061->g_122.s2)))), (p_77 && (safe_add_func_int64_t_s_s((((*l_189) = p_1061->g_188) != p_1061->g_190), (-1L)))))) | 0x791001A1CCD3B4F5L) || l_191), (-1L))) > p_1061->g_122.sd), (*p_74)));
                p_1061->g_217 ^= (safe_lshift_func_uint8_t_u_u(((p_1061->g_198[1][1][0] = (p_1061->g_122.s9 ^= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_195.s3743532510527205)))).odd)).s0)) , (p_1061->g_152 = ((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(l_201.s25)).xyxyyyyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(5L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(p_1061->g_204.se49bda0e2562001a)).s8, (((l_216.s7 |= (((VECTOR(uint16_t, 16))(l_205.s4244610446516722)).s7 == (safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_u(((0L | (((p_1061->g_22.s6 = ((((**l_172) = ((*l_171) <= (!((p_75 , (GROUP_DIVERGE(0, 1) , ((&l_184 == &p_1061->g_155) || ((*l_171) <= p_77)))) ^ 0x2C936966L)))) != (p_75 > 18446744073709551606UL)) <= p_1061->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1061->tid, 34))])) > 0x6F5A8E44L) ^ 0xCC6B989850A8AAC9L)) != 5L), p_76)) && 4294967295UL) & p_1061->g_104), 2)))) >= 0x1AL) | 0xB949037EL))) , 0x75L), (**l_172), 0x3FL, ((VECTOR(int8_t, 4))((-6L))), 8L)).s23)).yxxyxxyyxxxxxyyy, ((VECTOR(int8_t, 16))((-8L)))))).lo)).s02, ((VECTOR(int8_t, 2))(0L))))))), 5L, 0x61L, 1L, 0x20L, 0x7BL)).s11)).yxyxyxyx))).s1, 5)) ^ (-8L)))), p_1061->g_112[0]));
                atomic_min(&p_1061->l_atomic_reduction[0], ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_1061->g_218.scc06ec8495d76302)).even)).s3 , p_1061->g_155) != (void*)0));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1061->v_collective += p_1061->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            p_73 = ((*l_171) ^= 0x24EEF291L);
        }
        p_73 ^= ((*l_171) |= p_1061->g_104);
    }
    if ((p_73 = l_219[7]))
    { /* block id: 81 */
        VECTOR(int8_t, 16) l_221 = (VECTOR(int8_t, 16))(0x3EL, (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 0x3BL), 0x3BL), 0x3BL, 0x3EL, 0x3BL, (VECTOR(int8_t, 2))(0x3EL, 0x3BL), (VECTOR(int8_t, 2))(0x3EL, 0x3BL), 0x3EL, 0x3BL, 0x3EL, 0x3BL);
        VECTOR(int8_t, 2) l_223 = (VECTOR(int8_t, 2))(2L, (-3L));
        VECTOR(uint8_t, 16) l_224 = (VECTOR(uint8_t, 16))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0x2FL), 0x2FL), 0x2FL, 8UL, 0x2FL, (VECTOR(uint8_t, 2))(8UL, 0x2FL), (VECTOR(uint8_t, 2))(8UL, 0x2FL), 8UL, 0x2FL, 8UL, 0x2FL);
        VECTOR(int32_t, 4) l_227 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
        int8_t *l_231[2];
        uint8_t *l_232 = (void*)0;
        uint8_t *l_233 = &p_1061->g_152;
        uint32_t *l_238[5][9] = {{&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,(void*)0,&p_1061->g_239},{&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,(void*)0,&p_1061->g_239},{&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,(void*)0,&p_1061->g_239},{&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,(void*)0,&p_1061->g_239},{&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,&p_1061->g_239,(void*)0,&p_1061->g_239}};
        int32_t l_242 = 0x29EC34D0L;
        uint8_t *l_260 = &p_1061->g_261;
        int i, j;
        for (i = 0; i < 2; i++)
            l_231[i] = (void*)0;
        p_73 = (safe_unary_minus_func_uint32_t_u((246UL <= ((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(9L, 0x7ED3L)), 0x3A01L, 0L)).odd)).even , (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_221.se6)), (-3L), (-10L))), ((VECTOR(int8_t, 2))(p_1061->g_222.s03)).xyyy))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_223.yx)).yxyx)), ((VECTOR(int8_t, 2))((-9L), 2L)).xyxx))))).z <= (((VECTOR(uint8_t, 4))(l_224.sd5c6)).z && (((FAKE_DIVERGE(p_1061->global_1_offset, get_global_id(1), 10) && ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(l_225.wx)).xyyxyxyx, ((VECTOR(uint16_t, 4))(l_226.s9ca3)).wxxyxwzy))).s0, p_1061->g_22.s0, 0x003EL, 0x2F2DL)).lo)))).yyxyyxyy)).s3) >= ((((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(l_227.xzywwzxw)).even, ((VECTOR(int32_t, 2))(0x5733F8B9L, 0x34C0E798L)).xxyx))).x , p_73) || (safe_lshift_func_int8_t_s_u((!(p_1061->g_122.s6 = ((l_227.y |= p_1061->g_122.s6) , ((VECTOR(int8_t, 4))(l_230.wwyx)).y))), ((*l_233) |= 0xC2L))))) , p_1061->g_comm_values[p_1061->tid])))) != ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_75, 9)), ((*l_260) = ((l_242 ^= (p_1061->g_239++)) , (GROUP_DIVERGE(0, 1) <= (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((p_1061->g_109 = (safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(1UL, (safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(p_1061->g_259, p_75)), l_224.s3)))), p_75)) , 0x43AFL), p_1061->g_112[0])), l_223.y))), p_1061->g_25)), 7))))))) | GROUP_DIVERGE(2, 1))))));
        p_1061->g_263--;
    }
    else
    { /* block id: 91 */
        VECTOR(int64_t, 8) l_275 = (VECTOR(int64_t, 8))(0x6D17E8DB4B3ED0F1L, (VECTOR(int64_t, 4))(0x6D17E8DB4B3ED0F1L, (VECTOR(int64_t, 2))(0x6D17E8DB4B3ED0F1L, 0x2306FBF4255ED363L), 0x2306FBF4255ED363L), 0x2306FBF4255ED363L, 0x6D17E8DB4B3ED0F1L, 0x2306FBF4255ED363L);
        int32_t l_280 = 0x25D4D992L;
        int32_t *l_306 = &p_1061->g_104;
        VECTOR(int32_t, 4) l_312 = (VECTOR(int32_t, 4))(0x6AFEB27DL, (VECTOR(int32_t, 2))(0x6AFEB27DL, 0x25689C2BL), 0x25689C2BL);
        uint64_t *l_325 = &l_115;
        VECTOR(int16_t, 8) l_491 = (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x3D2EL), 0x3D2EL), 0x3D2EL, 4L, 0x3D2EL);
        VECTOR(int16_t, 4) l_492 = (VECTOR(int16_t, 4))(0x1005L, (VECTOR(int16_t, 2))(0x1005L, (-6L)), (-6L));
        uint64_t ***l_495 = (void*)0;
        uint64_t **l_497[7];
        uint64_t ***l_496[4];
        int16_t l_503 = 6L;
        uint8_t *l_507 = &p_1061->g_354;
        uint8_t *l_508 = &p_1061->g_261;
        int16_t *l_509 = (void*)0;
        int16_t *l_510 = (void*)0;
        int16_t *l_511 = (void*)0;
        int16_t *l_512 = (void*)0;
        int16_t *l_513 = (void*)0;
        int16_t *l_514[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t l_516 = 65535UL;
        int i;
        for (i = 0; i < 7; i++)
            l_497[i] = &l_325;
        for (i = 0; i < 4; i++)
            l_496[i] = &l_497[1];
        for (p_77 = 0; (p_77 == (-20)); p_77--)
        { /* block id: 94 */
            int64_t l_274 = 1L;
            VECTOR(int64_t, 2) l_277 = (VECTOR(int64_t, 2))((-1L), 0x4127A3C4AB22BD5DL);
            uint32_t *l_283 = (void*)0;
            uint32_t *l_284 = &p_1061->g_263;
            int8_t *l_296 = (void*)0;
            int8_t *l_297 = (void*)0;
            int8_t *l_298 = &l_219[1];
            VECTOR(uint32_t, 4) l_313 = (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 1UL), 1UL);
            int32_t l_363 = 2L;
            int32_t l_364 = 5L;
            int32_t **l_478 = &l_306;
            int32_t ***l_477 = &l_478;
            VECTOR(uint32_t, 8) l_479 = (VECTOR(uint32_t, 8))(0xFA28D64CL, (VECTOR(uint32_t, 4))(0xFA28D64CL, (VECTOR(uint32_t, 2))(0xFA28D64CL, 0xC38965F9L), 0xC38965F9L), 0xC38965F9L, 0xFA28D64CL, 0xC38965F9L);
            uint64_t *l_489 = &p_1061->g_37;
            int i;
            if ((safe_rshift_func_int16_t_s_u((((*l_298) = ((5L && ((safe_add_func_int32_t_s_s(p_1061->g_22.s5, (safe_lshift_func_int16_t_s_u(l_274, 2)))) , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(l_275.s1572540160413113)).s420b, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_276.s26416576)).s3051764126560401)).sea2e, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))(l_277.yx))))).xxyxyxyx)).odd))).y, ((safe_lshift_func_int16_t_s_u(((l_280 |= l_275.s0) , (!(safe_add_func_uint32_t_u_u(((*l_284) |= ((void*)0 != &p_1061->g_239)), (safe_lshift_func_int16_t_s_s((((l_275.s5 <= (safe_sub_func_uint16_t_u_u(((*p_74) = ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(65535UL, 0x1A4CL)).yyxxxyxy, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(0x7D0FL, 65535UL)).xyxy, (uint16_t)(((VECTOR(int16_t, 8))((((safe_lshift_func_uint8_t_u_s((((safe_div_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(65535UL, p_1061->g_109)) & p_1061->g_25) < l_275.s6) >= 0UL), (-1L))) , p_1061->g_295) != (void*)0), 0)) && GROUP_DIVERGE(1, 1)) ^ p_73), 0L, ((VECTOR(int16_t, 4))(0x2643L)), (-1L), (-9L))).s1 && l_280), (uint16_t)l_275.s3))).zywwwzwx))))).s03, ((VECTOR(uint16_t, 2))(0x0468L)), ((VECTOR(uint16_t, 2))(0UL))))).odd), 0x7479L))) < GROUP_DIVERGE(0, 1)) == l_277.x), p_1061->g_25)))))), 7)) < 0x34A2L), ((VECTOR(int64_t, 4))(0x04CED09A8BBA5172L)), 0x4E109F48C37F4F73L, 0x1A0C521786769AABL)).lo)), 0L, ((VECTOR(int64_t, 2))(0L)), p_1061->g_217, p_1061->g_22.s2, ((VECTOR(int64_t, 2))(0x30B635D1684ECFFFL)), p_1061->g_263, ((VECTOR(int64_t, 2))(0x2EBB3E9F4AFBBC11L)), 0L, 0x09B747F85B942BDCL)))).s1)) != 0L)) & p_73), 11)))
            { /* block id: 99 */
                int8_t l_304 = 7L;
                int64_t *l_305 = &l_274;
                int32_t **l_307 = &l_306;
                VECTOR(int32_t, 2) l_310 = (VECTOR(int32_t, 2))(0x66499E2AL, (-3L));
                int32_t **l_360 = &l_164[0][0][7];
                int i;
                if (((safe_lshift_func_uint8_t_u_s((((VECTOR(uint64_t, 16))(p_1061->g_301.xxyxyxyyxxxxyxxy)).sc | 0x40B19E0C032D9703L), (safe_mod_func_int8_t_s_s(((((*l_284) = (((l_304 >= ((*l_305) = ((((l_280 |= p_75) && 0x1B4FF7CDL) | 0x7BDA6F53L) > ((VECTOR(uint32_t, 2))(0xE7049906L, 0x10D127D4L)).odd))) , &p_1061->g_104) == ((*l_307) = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((p_1061->g_262 = l_304), 0x47DBE32CL, (-1L), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))((-1L), p_77, 0L, ((VECTOR(int32_t, 2))(0x262FD1AFL, 0L)), (0x79L >= (-5L)), 1L, 0x22CDF6BDL)), ((VECTOR(int32_t, 8))(0x77340E4FL))))), ((VECTOR(int32_t, 4))(3L)), 0x00E57269L)))).s4 , l_306)))) >= l_277.x) | FAKE_DIVERGE(p_1061->group_1_offset, get_group_id(1), 10)), p_75)))) || p_76))
                { /* block id: 105 */
                    VECTOR(int32_t, 4) l_311 = (VECTOR(int32_t, 4))(0x782FF706L, (VECTOR(int32_t, 2))(0x782FF706L, 0x4CB3BAD0L), 0x4CB3BAD0L);
                    int32_t l_326 = 0L;
                    int32_t **l_352 = &l_164[0][2][1];
                    int i;
                    l_326 ^= (p_73 &= (safe_div_func_int16_t_s_s((p_1061->g_169.y = (((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(l_310.yy)).yxxxxxyxyyyxxxyx, ((VECTOR(int32_t, 8))(l_311.zzwzzwyz)).s6705026211107513, ((VECTOR(int32_t, 2))(l_312.yz)).yyyyyyyyxxxyyxxx))).s2 != ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(l_313.zwwyxxwx)).odd, ((VECTOR(uint32_t, 8))(((*l_284) |= ((safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))(0L, 0x3313D0A2L)).even, l_310.x)) >= (0x67B1D92DL == (&p_1061->g_155 == &p_1061->g_155))), 0)) , (safe_unary_minus_func_uint64_t_u(l_304)))), (l_311.x && ((safe_mul_func_int16_t_s_s(((&l_115 == ((safe_div_func_uint64_t_u_u(l_275.s1, (0x202B1D1F3E0EEA0BL || 9UL))) , l_325)) | l_312.x), (*p_74))) && l_310.x)), 0x97EB821AL, 1UL, ((VECTOR(uint32_t, 2))(8UL)), 0UL, 0x3F9073FCL)).odd))))).yzwzxzww)).s7)), p_1061->g_218.sb)));
                    if ((atomic_inc(&p_1061->l_atomic_input[11]) == 7))
                    { /* block id: 111 */
                        int32_t l_327 = 0x59A7F48AL;
                        int32_t l_328[2][8][10] = {{{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)}},{{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-1L),1L,(-1L),1L,(-1L),(-1L),(-2L),(-2L)}}};
                        int32_t l_329[4][8][6] = {{{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L}},{{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L}},{{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L}},{{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L},{0L,0L,0x536A53D2L,0x52F146B0L,7L,0x52F146B0L}}};
                        int64_t l_330 = (-1L);
                        int32_t l_331[4];
                        int32_t l_332 = 7L;
                        uint32_t l_333 = 1UL;
                        int32_t *l_337 = &l_329[2][5][0];
                        int32_t **l_336 = &l_337;
                        int32_t **l_338 = &l_337;
                        uint64_t l_339 = 0x975087D1C8D14FBDL;
                        VECTOR(int32_t, 2) l_342 = (VECTOR(int32_t, 2))((-10L), 0x5B3478B9L);
                        VECTOR(int32_t, 8) l_343 = (VECTOR(int32_t, 8))(0x1BD89AB3L, (VECTOR(int32_t, 4))(0x1BD89AB3L, (VECTOR(int32_t, 2))(0x1BD89AB3L, 1L), 1L), 1L, 0x1BD89AB3L, 1L);
                        VECTOR(uint8_t, 8) l_344 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
                        VECTOR(uint8_t, 4) l_345 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x8FL), 0x8FL);
                        VECTOR(uint8_t, 2) l_346 = (VECTOR(uint8_t, 2))(4UL, 0xB1L);
                        VECTOR(uint8_t, 2) l_347 = (VECTOR(uint8_t, 2))(0xEDL, 0xE3L);
                        int32_t l_348 = 0x697CAC5AL;
                        VECTOR(int32_t, 8) l_349 = (VECTOR(int32_t, 8))(0x7ADE429BL, (VECTOR(int32_t, 4))(0x7ADE429BL, (VECTOR(int32_t, 2))(0x7ADE429BL, (-1L)), (-1L)), (-1L), 0x7ADE429BL, (-1L));
                        VECTOR(int32_t, 8) l_350 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x1C15D430L), 0x1C15D430L), 0x1C15D430L, 9L, 0x1C15D430L);
                        uint32_t l_351 = 0x91155E7EL;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_331[i] = 0x5E2A3C32L;
                        --l_333;
                        l_338 = l_336;
                        l_339--;
                        l_351 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_342.yx)), ((VECTOR(int32_t, 2))(l_343.s70))))), 2L, (-1L), 0x36655F04L, ((((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(l_344.s41)).xxxyyyxy, ((VECTOR(uint8_t, 16))(9UL, 251UL, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(l_345.zwzwywwy)), ((VECTOR(uint8_t, 4))(0xDDL, ((VECTOR(uint8_t, 2))(0xADL, 255UL)), 0x6EL)).xwxyzzwz))), ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(l_346.xx)), ((VECTOR(uint8_t, 16))(l_347.xxxyyxyxyxyxxyyy)).sb5))), 253UL, 0xE5L, 0xB3L, 7UL)).hi))).s1 , l_348) , 0x6F63F66FL), 0L, (-9L), 0x0CFACC17L, ((VECTOR(int32_t, 4))(l_349.s3721)), 8L, 0x43F93BFEL, 1L)).s13))), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(9L, 0x72FF6683L)), 0L, 0x081643C2L)).hi, ((VECTOR(int32_t, 2))(l_350.s13)))))))), (-1L), 3L)).w;
                        unsigned int result = 0;
                        result += l_327;
                        int l_328_i0, l_328_i1, l_328_i2;
                        for (l_328_i0 = 0; l_328_i0 < 2; l_328_i0++) {
                            for (l_328_i1 = 0; l_328_i1 < 8; l_328_i1++) {
                                for (l_328_i2 = 0; l_328_i2 < 10; l_328_i2++) {
                                    result += l_328[l_328_i0][l_328_i1][l_328_i2];
                                }
                            }
                        }
                        int l_329_i0, l_329_i1, l_329_i2;
                        for (l_329_i0 = 0; l_329_i0 < 4; l_329_i0++) {
                            for (l_329_i1 = 0; l_329_i1 < 8; l_329_i1++) {
                                for (l_329_i2 = 0; l_329_i2 < 6; l_329_i2++) {
                                    result += l_329[l_329_i0][l_329_i1][l_329_i2];
                                }
                            }
                        }
                        result += l_330;
                        int l_331_i0;
                        for (l_331_i0 = 0; l_331_i0 < 4; l_331_i0++) {
                            result += l_331[l_331_i0];
                        }
                        result += l_332;
                        result += l_333;
                        result += l_339;
                        result += l_342.y;
                        result += l_342.x;
                        result += l_343.s7;
                        result += l_343.s6;
                        result += l_343.s5;
                        result += l_343.s4;
                        result += l_343.s3;
                        result += l_343.s2;
                        result += l_343.s1;
                        result += l_343.s0;
                        result += l_344.s7;
                        result += l_344.s6;
                        result += l_344.s5;
                        result += l_344.s4;
                        result += l_344.s3;
                        result += l_344.s2;
                        result += l_344.s1;
                        result += l_344.s0;
                        result += l_345.w;
                        result += l_345.z;
                        result += l_345.y;
                        result += l_345.x;
                        result += l_346.y;
                        result += l_346.x;
                        result += l_347.y;
                        result += l_347.x;
                        result += l_348;
                        result += l_349.s7;
                        result += l_349.s6;
                        result += l_349.s5;
                        result += l_349.s4;
                        result += l_349.s3;
                        result += l_349.s2;
                        result += l_349.s1;
                        result += l_349.s0;
                        result += l_350.s7;
                        result += l_350.s6;
                        result += l_350.s5;
                        result += l_350.s4;
                        result += l_350.s3;
                        result += l_350.s2;
                        result += l_350.s1;
                        result += l_350.s0;
                        result += l_351;
                        atomic_add(&p_1061->l_special_values[11], result);
                    }
                    else
                    { /* block id: 116 */
                        (1 + 1);
                    }
                    p_73 ^= l_304;
                    (*l_352) = &p_1061->g_36;
                }
                else
                { /* block id: 121 */
                    int8_t l_353 = 0x0BL;
                    int32_t l_359 = 0x48C272DEL;
                    p_1061->g_354--;
                    for (l_115 = 21; (l_115 == 23); ++l_115)
                    { /* block id: 125 */
                        return l_359;
                    }
                    return (*p_74);
                }
                p_73 = (((*l_360) = &p_1061->g_36) == &p_1061->g_262);
                for (p_1061->g_263 = 0; (p_1061->g_263 < 1); p_1061->g_263++)
                { /* block id: 134 */
                    int32_t l_365 = 0x31A205CDL;
                    int32_t l_366 = 0x6AC3F7EEL;
                    int32_t l_367 = 0x191D9928L;
                    p_1061->g_368++;
                    if (l_312.z)
                        continue;
                    l_312.z &= p_73;
                }
            }
            else
            { /* block id: 139 */
                if ((atomic_inc(&p_1061->l_atomic_input[8]) == 4))
                { /* block id: 141 */
                    int32_t l_371 = 1L;
                    int32_t l_394[6] = {0x14BD2D97L,0L,0x14BD2D97L,0x14BD2D97L,0L,0x14BD2D97L};
                    uint8_t l_395 = 0UL;
                    uint32_t l_396 = 0xC87CBD62L;
                    uint16_t l_397 = 1UL;
                    int64_t l_400[8][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
                    VECTOR(int16_t, 4) l_401 = (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x3223L), 0x3223L);
                    uint32_t l_402 = 0x8F987C3BL;
                    VECTOR(int16_t, 8) l_403 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6A0CL), 0x6A0CL), 0x6A0CL, 1L, 0x6A0CL);
                    VECTOR(int16_t, 4) l_404 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L);
                    int64_t l_405 = (-1L);
                    VECTOR(int16_t, 4) l_406 = (VECTOR(int16_t, 4))(0x694CL, (VECTOR(int16_t, 2))(0x694CL, 1L), 1L);
                    VECTOR(uint8_t, 2) l_407 = (VECTOR(uint8_t, 2))(7UL, 0xBDL);
                    uint32_t l_408 = 0xD89D095EL;
                    uint64_t l_409 = 0x847EB6E80ED32296L;
                    VECTOR(uint8_t, 8) l_410 = (VECTOR(uint8_t, 8))(0x02L, (VECTOR(uint8_t, 4))(0x02L, (VECTOR(uint8_t, 2))(0x02L, 0x4EL), 0x4EL), 0x4EL, 0x02L, 0x4EL);
                    VECTOR(uint8_t, 2) l_411 = (VECTOR(uint8_t, 2))(3UL, 0xFBL);
                    VECTOR(uint8_t, 2) l_412 = (VECTOR(uint8_t, 2))(0UL, 0UL);
                    uint32_t l_413 = 0x6F2C080CL;
                    int8_t l_414 = 1L;
                    uint32_t l_415 = 4294967291UL;
                    uint64_t l_416 = 0x4713683FA0509840L;
                    int32_t *l_417 = (void*)0;
                    int32_t *l_418[9] = {&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371};
                    int32_t *l_419[2];
                    int32_t *l_420[6];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_419[i] = &l_371;
                    for (i = 0; i < 6; i++)
                        l_420[i] = &l_371;
                    for (l_371 = 22; (l_371 != (-8)); l_371 = safe_sub_func_uint8_t_u_u(l_371, 3))
                    { /* block id: 144 */
                        int64_t l_374 = 0L;
                        uint16_t l_375 = 0xA94DL;
                        uint32_t l_378 = 4294967294UL;
                        int8_t l_379 = (-1L);
                        int16_t l_380 = 0x0592L;
                        int32_t l_381 = 0x138265B9L;
                        uint64_t l_382 = 4UL;
                        uint8_t l_383 = 0UL;
                        uint64_t l_384 = 0xD7A58F7B16BBABC9L;
                        l_375--;
                        l_384 ^= (l_378 , (l_379 , (l_383 ^= (l_382 = ((l_380 , FAKE_DIVERGE(p_1061->local_2_offset, get_local_id(2), 10)) , l_381)))));
                    }
                    for (l_371 = (-23); (l_371 >= 21); l_371 = safe_add_func_uint16_t_u_u(l_371, 2))
                    { /* block id: 152 */
                        uint32_t l_387 = 4294967295UL;
                        int16_t l_388 = 0L;
                        uint64_t l_389 = 0x7062B3286809131BL;
                        int16_t l_390[6][4][1] = {{{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L}},{{8L},{8L},{8L},{8L}}};
                        int8_t l_391 = 0x76L;
                        int16_t l_392 = 0x5807L;
                        VECTOR(uint32_t, 8) l_393 = (VECTOR(uint32_t, 8))(0x3C0BBB50L, (VECTOR(uint32_t, 4))(0x3C0BBB50L, (VECTOR(uint32_t, 2))(0x3C0BBB50L, 4294967295UL), 4294967295UL), 4294967295UL, 0x3C0BBB50L, 4294967295UL);
                        int i, j, k;
                        l_389 ^= (l_388 = (l_387 = (-1L)));
                        l_393.s0 = (l_392 = (l_391 ^= l_390[1][1][0]));
                    }
                    l_420[0] = ((l_395 ^= (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x3FB3FF18L, 0x0F0D33ABL, 1L, 0L)).wyzxyzxwxwzwzyxz)).s2 , l_394[3])) , (l_419[0] = (l_418[5] = (l_417 = ((l_416 ^= (l_396 , ((--l_397) , (l_400[6][0] , ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(l_401.wwzzywxx)), ((VECTOR(int16_t, 2))(0x0A28L, 0x6BCAL)).xxxyxyxy, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-4L), 0x0F9EL)), l_402, ((VECTOR(int16_t, 2))(0x64EDL, 0x0BD9L)), ((VECTOR(int16_t, 16))(l_403.s7544541553166056)).s4, 0x5108L, 0x5310L)).s10, ((VECTOR(int16_t, 8))(l_404.wxwzwwyz)).s61))).yxyy)).zyzzwzzyxwzzxyxx, (int16_t)l_405))).lo))).s34, ((VECTOR(int16_t, 8))(l_406.wwxxzxxx)).s32))).yxxxyyyy, ((VECTOR(uint16_t, 8))(0x7F4CL, 0xC093L, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(l_407.yxxyxxxxyxyxyxyx)).s4fe9, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_408, 0UL, l_409, 1UL, 7UL, 7UL, 1UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 2))(254UL, 0UL)).xyxy, ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 4))(l_410.s6167)).xywwwwwx, ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(l_411.yxyyyxxy)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 2))(l_412.xx)).xyxxxyyy))), 9UL, l_413, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(1UL)), 7UL, 6UL)).lo))), (uint8_t)GROUP_DIVERGE(0, 1), (uint8_t)l_414))), ((VECTOR(uint8_t, 8))(6UL))))).odd))).xyzxywzywyzxyyzy, ((VECTOR(uint8_t, 16))(0x2FL))))).s7d, ((VECTOR(uint8_t, 2))(5UL)), ((VECTOR(uint8_t, 2))(0x0AL))))), 0x5FL, 0UL)), 247UL, 250UL, l_415, 0xBBL, 253UL)).sb5)).xxxx))).xzwzyywy)).hi, ((VECTOR(uint8_t, 4))(0x22L))))), 0xB338L, 0xD055L))))).lo, ((VECTOR(int32_t, 4))(0x0E2AC410L)), ((VECTOR(int32_t, 4))(4L))))).y)))) , l_417)))));
                    unsigned int result = 0;
                    result += l_371;
                    int l_394_i0;
                    for (l_394_i0 = 0; l_394_i0 < 6; l_394_i0++) {
                        result += l_394[l_394_i0];
                    }
                    result += l_395;
                    result += l_396;
                    result += l_397;
                    int l_400_i0, l_400_i1;
                    for (l_400_i0 = 0; l_400_i0 < 8; l_400_i0++) {
                        for (l_400_i1 = 0; l_400_i1 < 2; l_400_i1++) {
                            result += l_400[l_400_i0][l_400_i1];
                        }
                    }
                    result += l_401.w;
                    result += l_401.z;
                    result += l_401.y;
                    result += l_401.x;
                    result += l_402;
                    result += l_403.s7;
                    result += l_403.s6;
                    result += l_403.s5;
                    result += l_403.s4;
                    result += l_403.s3;
                    result += l_403.s2;
                    result += l_403.s1;
                    result += l_403.s0;
                    result += l_404.w;
                    result += l_404.z;
                    result += l_404.y;
                    result += l_404.x;
                    result += l_405;
                    result += l_406.w;
                    result += l_406.z;
                    result += l_406.y;
                    result += l_406.x;
                    result += l_407.y;
                    result += l_407.x;
                    result += l_408;
                    result += l_409;
                    result += l_410.s7;
                    result += l_410.s6;
                    result += l_410.s5;
                    result += l_410.s4;
                    result += l_410.s3;
                    result += l_410.s2;
                    result += l_410.s1;
                    result += l_410.s0;
                    result += l_411.y;
                    result += l_411.x;
                    result += l_412.y;
                    result += l_412.x;
                    result += l_413;
                    result += l_414;
                    result += l_415;
                    result += l_416;
                    atomic_add(&p_1061->l_special_values[8], result);
                }
                else
                { /* block id: 167 */
                    (1 + 1);
                }
                if (p_75)
                    continue;
                if ((atomic_inc(&p_1061->l_atomic_input[17]) == 4))
                { /* block id: 172 */
                    uint16_t l_421 = 1UL;
                    int32_t l_423 = 0x0EED692BL;
                    int32_t *l_422 = &l_423;
                    int32_t *l_424 = &l_423;
                    int32_t *l_425 = &l_423;
                    int32_t l_426 = (-4L);
                    uint64_t l_465 = 0xCF38AF548DC20C86L;
                    uint32_t l_466 = 0x7F78092BL;
                    int16_t l_467 = 0L;
                    int8_t l_468 = 0x07L;
                    l_425 = (l_421 , (l_424 = (l_422 = (void*)0)));
                    if (l_426)
                    { /* block id: 176 */
                        int32_t l_427 = 0x480BCF21L;
                        uint32_t l_428 = 0x732894D0L;
                        --l_428;
                    }
                    else
                    { /* block id: 178 */
                        VECTOR(int32_t, 4) l_431 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x01926C84L), 0x01926C84L);
                        VECTOR(int32_t, 8) l_432 = (VECTOR(int32_t, 8))(0x546E1D15L, (VECTOR(int32_t, 4))(0x546E1D15L, (VECTOR(int32_t, 2))(0x546E1D15L, 0x094175BAL), 0x094175BAL), 0x094175BAL, 0x546E1D15L, 0x094175BAL);
                        VECTOR(int32_t, 2) l_433 = (VECTOR(int32_t, 2))(0x00C94F49L, (-1L));
                        VECTOR(int32_t, 8) l_434 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-3L)), (-3L)), (-3L), 8L, (-3L));
                        uint64_t l_435 = 7UL;
                        int64_t l_436 = 0L;
                        VECTOR(uint16_t, 2) l_437 = (VECTOR(uint16_t, 2))(65535UL, 0x7363L);
                        VECTOR(uint8_t, 16) l_438 = (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 249UL), 249UL), 249UL, 9UL, 249UL, (VECTOR(uint8_t, 2))(9UL, 249UL), (VECTOR(uint8_t, 2))(9UL, 249UL), 9UL, 249UL, 9UL, 249UL);
                        int32_t l_439 = 1L;
                        int64_t l_440[4][10][4] = {{{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL}},{{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL}},{{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL}},{{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL},{0x47ED08E0EE5D0737L,1L,0x75AF3A90E59BD8FBL,0x748DB9DF99D806BEL}}};
                        VECTOR(uint8_t, 2) l_441 = (VECTOR(uint8_t, 2))(0x8DL, 1UL);
                        VECTOR(uint8_t, 16) l_442 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 248UL), 248UL), 248UL, 1UL, 248UL, (VECTOR(uint8_t, 2))(1UL, 248UL), (VECTOR(uint8_t, 2))(1UL, 248UL), 1UL, 248UL, 1UL, 248UL);
                        VECTOR(uint8_t, 4) l_443 = (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 1UL), 1UL);
                        uint32_t l_444[8] = {0x334D9CF9L,0x334D9CF9L,0x334D9CF9L,0x334D9CF9L,0x334D9CF9L,0x334D9CF9L,0x334D9CF9L,0x334D9CF9L};
                        VECTOR(uint8_t, 2) l_445 = (VECTOR(uint8_t, 2))(1UL, 255UL);
                        VECTOR(uint8_t, 8) l_446 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 8UL), 8UL), 8UL, 0UL, 8UL);
                        VECTOR(uint8_t, 16) l_447 = (VECTOR(uint8_t, 16))(0x74L, (VECTOR(uint8_t, 4))(0x74L, (VECTOR(uint8_t, 2))(0x74L, 1UL), 1UL), 1UL, 0x74L, 1UL, (VECTOR(uint8_t, 2))(0x74L, 1UL), (VECTOR(uint8_t, 2))(0x74L, 1UL), 0x74L, 1UL, 0x74L, 1UL);
                        VECTOR(uint8_t, 16) l_448 = (VECTOR(uint8_t, 16))(0xC4L, (VECTOR(uint8_t, 4))(0xC4L, (VECTOR(uint8_t, 2))(0xC4L, 251UL), 251UL), 251UL, 0xC4L, 251UL, (VECTOR(uint8_t, 2))(0xC4L, 251UL), (VECTOR(uint8_t, 2))(0xC4L, 251UL), 0xC4L, 251UL, 0xC4L, 251UL);
                        VECTOR(uint8_t, 2) l_449 = (VECTOR(uint8_t, 2))(0x56L, 0UL);
                        VECTOR(uint8_t, 4) l_450 = (VECTOR(uint8_t, 4))(0xEDL, (VECTOR(uint8_t, 2))(0xEDL, 2UL), 2UL);
                        VECTOR(uint8_t, 2) l_451 = (VECTOR(uint8_t, 2))(250UL, 0UL);
                        int64_t l_452 = 0x22109C243F79390EL;
                        int32_t l_453 = (-10L);
                        VECTOR(uint8_t, 8) l_454 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 7UL), 7UL), 7UL, 1UL, 7UL);
                        VECTOR(uint8_t, 4) l_455 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL);
                        VECTOR(uint8_t, 8) l_456 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xD8L), 0xD8L), 0xD8L, 0UL, 0xD8L);
                        uint8_t l_457 = 0x0DL;
                        int16_t l_458 = 0x1210L;
                        uint64_t l_459 = 18446744073709551613UL;
                        uint8_t l_460[1];
                        int8_t l_461 = (-1L);
                        uint32_t l_462 = 0xB8F7BD5FL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_460[i] = 0x10L;
                        l_461 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_431.zzwx)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_432.s61)).xyxxyxyy)))).s43, ((VECTOR(int32_t, 2))(0x7C18AAA2L, (-1L)))))), ((VECTOR(int32_t, 16))(l_433.xxyyyxyxxyxxyyxy)).sb7, ((VECTOR(int32_t, 16))(l_434.s3754573645770444)).s3c))).yxyxyyxxxyyxyyyx, ((VECTOR(int32_t, 8))(0x37884551L, 1L, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))((-5L), l_435, 7L, 0x669071BFL)), ((VECTOR(int32_t, 16))(l_436, (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(1UL, 0UL, 0x0736L, 1UL, 0x9336L, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_437.xyxxxyyyyxyxyyyx)).lo)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_438.sf5a73c26)).s6775477367312002)), ((VECTOR(uint8_t, 8))(0UL, 255UL, 0x68L, l_439, l_440[0][5][1], ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_441.xy)).xyxy)), 9UL, (l_444[0] ^= ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 8))(l_442.s0f16cf39)), ((VECTOR(uint8_t, 8))(l_443.zyyxywwy))))).s4), 1UL, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_445.xxxy)).yxwwyzwwxwzyyyzy)), ((VECTOR(uint8_t, 8))(l_446.s40703776)).s1203635531415616))).s25, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_447.s7f)), 0UL, 0x7BL)).hi, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_448.s3c2e)), 254UL, 0x56L, 249UL, 1UL, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(255UL, 255UL)).yxxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_449.xxxx)).lo)), 0x68L)).wwxxyywx)))).lo, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 4))(l_450.zxxy)).yxyzzwyyzwzwzzyw, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_451.xyyxxyxyxyxyxyyx))))))).s5050))), 6UL, (((VECTOR(uint32_t, 2))(0x5BBDCB65L, 0x59B9E4EDL)).odd , (l_453 = l_452)), 1UL, 0x54L)).s3d))), ((VECTOR(uint8_t, 2))(l_454.s70)).lo, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(l_455.wwzx)), ((VECTOR(uint8_t, 2))(l_456.s62)).xxxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0UL, l_457, 253UL, 0UL))))))), 0x50L, 255UL)), ((VECTOR(uint8_t, 16))(0UL))))).s0, 0x3FL, 0x40L)).s2154230210034361))).s71)))), 0x973DL)).s80c3)).x , l_458), 0x194A4AE2L, l_459, 0x3A2A8B32L, 0x36500BA3L, (-9L), 0x3EFE719FL, 0x7BD7C555L, 0x7CE3DAF9L, l_460[0], (-4L), ((VECTOR(int32_t, 4))(0x1F00264FL)))).sf5eb))), 8L, 0x09E9E98AL)).s2757563562014427))))).sd;
                        l_462++;
                    }
                    l_468 = ((l_465 , (l_466 , 0x3BA9BDE7L)) , (l_467 = (-1L)));
                    for (l_423 = (-6); (l_423 >= (-25)); l_423 = safe_sub_func_uint32_t_u_u(l_423, 3))
                    { /* block id: 188 */
                        int64_t l_471[5];
                        VECTOR(uint64_t, 4) l_472 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xB3711F955B4169A8L), 0xB3711F955B4169A8L);
                        VECTOR(uint64_t, 16) l_473 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL);
                        VECTOR(uint64_t, 4) l_474 = (VECTOR(uint64_t, 4))(0xECE95F272B04E83AL, (VECTOR(uint64_t, 2))(0xECE95F272B04E83AL, 0xA5554F3AF96384F7L), 0xA5554F3AF96384F7L);
                        int i;
                        for (i = 0; i < 5; i++)
                            l_471[i] = 0L;
                        l_471[3] |= 0x2F25FC60L;
                        l_474.w = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0x40B511E5E6E231FAL, 18446744073709551612UL, 1UL, 0x9DB570239D88D574L)), ((VECTOR(uint64_t, 4))(7UL, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_472.ywyxyyxy)).hi)).odd, ((VECTOR(uint64_t, 4))(l_473.sd7ae)).even))), 18446744073709551613UL)))).s52)).even , (l_426 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(1L, 0x3D0AB41BL, (-3L), (-1L))).even)).yyyyyyyxyxxxyyxy))).s8458)).w));
                    }
                    unsigned int result = 0;
                    result += l_421;
                    result += l_423;
                    result += l_426;
                    result += l_465;
                    result += l_466;
                    result += l_467;
                    result += l_468;
                    atomic_add(&p_1061->l_special_values[17], result);
                }
                else
                { /* block id: 193 */
                    (1 + 1);
                }
            }
            p_1061->g_109 ^= (safe_sub_func_int32_t_s_s(((0x5DL < ((((*l_477) = &l_306) != (void*)0) <= ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(0x33019BEAL, 0x42F55476L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_479.s0774526663040646)).s90cc)).wxzxwxyz, ((VECTOR(uint32_t, 16))(1UL, FAKE_DIVERGE(p_1061->local_1_offset, get_local_id(1), 10), ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(0xB939A584L, (safe_lshift_func_uint16_t_u_u(p_1061->g_192, 6)), ((VECTOR(uint32_t, 4))(p_1061->g_482.xwxw)), 4294967288UL, 0xD1C6BD59L)).s54, ((VECTOR(uint32_t, 16))(0x0724CAA2L, (safe_div_func_int16_t_s_s(9L, p_1061->g_112[0])), p_76, 0x4DAA04AFL, ((VECTOR(uint32_t, 4))(0xAF2951ECL, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x05339268L, 4294967295UL)).yxyxxxxx)).s27))), (uint32_t)((((((safe_mod_func_uint64_t_u_u(((((safe_sub_func_uint8_t_u_u((((VECTOR(uint32_t, 8))((l_325 == l_489), 0xD4FEA03DL, 0x8FAFBCD1L, ((VECTOR(uint32_t, 2))(0x83FFE72EL)), 0UL, 4294967295UL, 1UL)).s7 != p_77), 0x3EL)) == p_75) , &p_1061->g_192) == &p_1061->g_192), p_1061->g_198[1][1][0])) || 0x37E45825L) > l_364) >= GROUP_DIVERGE(2, 1)) >= p_76) | l_312.x), (uint32_t)p_73))), 0x0CBDDC55L)), 4294967295UL, ((VECTOR(uint32_t, 2))(0x62B84163L)), 4294967291UL, ((VECTOR(uint32_t, 2))(1UL)), 0xA851C628L, 0UL)).s6c, ((VECTOR(uint32_t, 2))(0x111C8984L))))), 0xE905B04DL, ((VECTOR(uint32_t, 2))(0x9B0EC789L)), ((VECTOR(uint32_t, 8))(9UL)), 1UL)).even, ((VECTOR(uint32_t, 8))(0x16AB54E2L))))).hi)).lo))).xyxy)).xzzxzwzw)))).s3)) , l_280), p_73));
        }
        p_1061->g_109 &= (((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(p_1061->g_490.xwyx)).even, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x728CL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_491.s05)))), 5L, ((VECTOR(int16_t, 2))(l_492.yz)), 0x2191L, 0L)).even)).lo))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))((((l_515 = (safe_mul_func_int16_t_s_s(p_1061->g_104, ((*p_74) &= (l_492.w <= ((((((l_498 = &l_325) == (void*)0) || (safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(l_503, (safe_lshift_func_uint16_t_u_u(p_1061->g_239, GROUP_DIVERGE(0, 1))))), ((l_507 = l_506[3]) == ((p_1061->g_36 != ((((*l_325) = l_312.x) | GROUP_DIVERGE(0, 1)) & p_1061->g_198[1][1][0])) , l_508))))) > l_280) ^ 0x9B2E18D2L) > 0x5EB807CDF8E7A06DL)))))) > 1L) >= FAKE_DIVERGE(p_1061->local_0_offset, get_local_id(0), 10)), 0xD525L, ((VECTOR(uint16_t, 2))(7UL)), l_503, ((VECTOR(uint16_t, 4))(0xB169L)), 65535UL, 0xD163L, l_516, ((VECTOR(uint16_t, 4))(65529UL)))).s0a))))).odd , p_73);
    }
    for (p_77 = (-11); (p_77 <= 2); ++p_77)
    { /* block id: 209 */
        uint64_t *l_522 = (void*)0;
        uint64_t **l_521 = &l_522;
        for (p_73 = (-24); (p_73 > (-12)); p_73 = safe_add_func_int16_t_s_s(p_73, 2))
        { /* block id: 212 */
            uint64_t ***l_523 = &l_521;
            (*l_523) = l_521;
            for (p_1061->g_109 = 9; (p_1061->g_109 < (-15)); p_1061->g_109--)
            { /* block id: 216 */
                int32_t **l_526 = &l_164[0][2][1];
                (*l_526) = &p_73;
                return (*p_74);
            }
        }
    }
    return l_527;
}


/* ------------------------------------------ */
/* 
 * reads : p_1061->g_112 p_1061->g_109
 * writes: p_1061->g_112
 */
int16_t  func_78(uint8_t  p_79, uint32_t * p_80, uint32_t * p_81, uint32_t * p_82, int32_t * p_83, struct S0 * p_1061)
{ /* block id: 30 */
    int32_t *l_107 = (void*)0;
    int32_t *l_108 = &p_1061->g_109;
    int32_t *l_110 = &p_1061->g_109;
    int32_t *l_111[5] = {&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109,&p_1061->g_109};
    int i;
    p_1061->g_112[0]++;
    return (*l_110);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_84(uint64_t * p_85, int32_t  p_86, uint32_t * p_87, int32_t * p_88, uint16_t * p_89, struct S0 * p_1061)
{ /* block id: 28 */
    uint8_t l_105 = 6UL;
    return l_105;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t * func_90(int64_t  p_91, uint16_t * p_92, struct S0 * p_1061)
{ /* block id: 23 */
    uint64_t l_95[4] = {0x995B858EE3BABBD5L,0x995B858EE3BABBD5L,0x995B858EE3BABBD5L,0x995B858EE3BABBD5L};
    int i;
    l_95[2]--;
    return &p_1061->g_37;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[34];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 34; i++)
            l_comm_values[i] = 1;
    struct S0 c_1062;
    struct S0* p_1061 = &c_1062;
    struct S0 c_1063 = {
        (VECTOR(uint32_t, 8))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0x9F08664AL), 0x9F08664AL), 0x9F08664AL, 8UL, 0x9F08664AL), // p_1061->g_20
        (VECTOR(uint32_t, 8))(0xA0A9F4F9L, (VECTOR(uint32_t, 4))(0xA0A9F4F9L, (VECTOR(uint32_t, 2))(0xA0A9F4F9L, 0x23703ACBL), 0x23703ACBL), 0x23703ACBL, 0xA0A9F4F9L, 0x23703ACBL), // p_1061->g_22
        18446744073709551610UL, // p_1061->g_25
        0xD767L, // p_1061->g_29
        {0x7B364FEFL,0x7B364FEFL,0x7B364FEFL,0x7B364FEFL,0x7B364FEFL,0x7B364FEFL,0x7B364FEFL,0x7B364FEFL,0x7B364FEFL,0x7B364FEFL}, // p_1061->g_33
        0x2D6AL, // p_1061->g_35
        (-1L), // p_1061->g_36
        0xF1DFBA308D5B9499L, // p_1061->g_37
        65535UL, // p_1061->g_94
        0x1537F146L, // p_1061->g_104
        (void*)0, // p_1061->g_106
        1L, // p_1061->g_109
        {65535UL,65535UL}, // p_1061->g_112
        (VECTOR(int8_t, 16))(0x44L, (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, 0x64L), 0x64L), 0x64L, 0x44L, 0x64L, (VECTOR(int8_t, 2))(0x44L, 0x64L), (VECTOR(int8_t, 2))(0x44L, 0x64L), 0x44L, 0x64L, 0x44L, 0x64L), // p_1061->g_122
        248UL, // p_1061->g_152
        (void*)0, // p_1061->g_155
        (VECTOR(int16_t, 2))(1L, (-9L)), // p_1061->g_169
        (void*)0, // p_1061->g_188
        (void*)0, // p_1061->g_190
        0L, // p_1061->g_192
        {{{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L}},{{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L}},{{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L}},{{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L}},{{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L}},{{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L},{0x49C78893L}}}, // p_1061->g_198
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int64_t, 2))(1L, (-1L)), (VECTOR(int64_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L)), // p_1061->g_204
        4294967294UL, // p_1061->g_217
        (VECTOR(uint32_t, 16))(0x8B3A1682L, (VECTOR(uint32_t, 4))(0x8B3A1682L, (VECTOR(uint32_t, 2))(0x8B3A1682L, 1UL), 1UL), 1UL, 0x8B3A1682L, 1UL, (VECTOR(uint32_t, 2))(0x8B3A1682L, 1UL), (VECTOR(uint32_t, 2))(0x8B3A1682L, 1UL), 0x8B3A1682L, 1UL, 0x8B3A1682L, 1UL), // p_1061->g_218
        (VECTOR(int8_t, 8))(0x6CL, (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, (-1L)), (-1L)), (-1L), 0x6CL, (-1L)), // p_1061->g_222
        0x954F3EA3L, // p_1061->g_239
        0xC3AD434EL, // p_1061->g_259
        0xBBL, // p_1061->g_261
        0L, // p_1061->g_262
        4294967286UL, // p_1061->g_263
        (void*)0, // p_1061->g_295
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), // p_1061->g_301
        0x79L, // p_1061->g_354
        0x78B9B127E93FF852L, // p_1061->g_368
        (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 1UL), 1UL), // p_1061->g_482
        (VECTOR(int16_t, 4))(0x3100L, (VECTOR(int16_t, 2))(0x3100L, 0x40CCL), 0x40CCL), // p_1061->g_490
        0x4CA2301E8BBB80A8L, // p_1061->g_534
        {18446744073709551615UL,0x61E4E69B1801E4D4L,0xC7E69D44B2941505L,0x61E4E69B1801E4D4L,18446744073709551615UL,18446744073709551615UL,0x61E4E69B1801E4D4L,0xC7E69D44B2941505L,0x61E4E69B1801E4D4L,18446744073709551615UL}, // p_1061->g_535
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL), // p_1061->g_553
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x58B7B3C7L), 0x58B7B3C7L), 0x58B7B3C7L, 4294967295UL, 0x58B7B3C7L), // p_1061->g_565
        (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x1AL), 0x1AL), 0x1AL, (-6L), 0x1AL), // p_1061->g_575
        (VECTOR(uint64_t, 2))(0UL, 0xD4A59B0941FF3B00L), // p_1061->g_606
        (-1L), // p_1061->g_631
        0L, // p_1061->g_632
        0UL, // p_1061->g_635
        0xDBCE58E85DA9C908L, // p_1061->g_639
        4UL, // p_1061->g_651
        (void*)0, // p_1061->g_655
        &p_1061->g_655, // p_1061->g_654
        0x5F41L, // p_1061->g_662
        0x22E3C95CL, // p_1061->g_663
        0L, // p_1061->g_664
        0xE9L, // p_1061->g_665
        (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 1L), 1L), // p_1061->g_710
        (VECTOR(uint32_t, 16))(0x34F8FD6AL, (VECTOR(uint32_t, 4))(0x34F8FD6AL, (VECTOR(uint32_t, 2))(0x34F8FD6AL, 0x49B6D0D6L), 0x49B6D0D6L), 0x49B6D0D6L, 0x34F8FD6AL, 0x49B6D0D6L, (VECTOR(uint32_t, 2))(0x34F8FD6AL, 0x49B6D0D6L), (VECTOR(uint32_t, 2))(0x34F8FD6AL, 0x49B6D0D6L), 0x34F8FD6AL, 0x49B6D0D6L, 0x34F8FD6AL, 0x49B6D0D6L), // p_1061->g_731
        &p_1061->g_655, // p_1061->g_774
        (VECTOR(int8_t, 4))(0x09L, (VECTOR(int8_t, 2))(0x09L, 0x4CL), 0x4CL), // p_1061->g_789
        {0L}, // p_1061->g_813
        {{0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L},{0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L},{0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L},{0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L},{0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L,0x30453400L}}, // p_1061->g_814
        (VECTOR(int8_t, 2))(0L, (-8L)), // p_1061->g_819
        (VECTOR(int8_t, 16))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 0x38L), 0x38L), 0x38L, 0x05L, 0x38L, (VECTOR(int8_t, 2))(0x05L, 0x38L), (VECTOR(int8_t, 2))(0x05L, 0x38L), 0x05L, 0x38L, 0x05L, 0x38L), // p_1061->g_829
        (VECTOR(int16_t, 4))(0x313AL, (VECTOR(int16_t, 2))(0x313AL, 0x0D50L), 0x0D50L), // p_1061->g_908
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x619093E3BA692033L), 0x619093E3BA692033L), // p_1061->g_916
        (VECTOR(int8_t, 16))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0x59L), 0x59L), 0x59L, 0x62L, 0x59L, (VECTOR(int8_t, 2))(0x62L, 0x59L), (VECTOR(int8_t, 2))(0x62L, 0x59L), 0x62L, 0x59L, 0x62L, 0x59L), // p_1061->g_926
        4L, // p_1061->g_959
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), // p_1061->g_1027
        (VECTOR(int64_t, 4))(0x6CA033CFE7D856C0L, (VECTOR(int64_t, 2))(0x6CA033CFE7D856C0L, 0x2009E15763DA8B8AL), 0x2009E15763DA8B8AL), // p_1061->g_1048
        (VECTOR(int64_t, 4))(0x5BF66723BAC2877AL, (VECTOR(int64_t, 2))(0x5BF66723BAC2877AL, (-9L)), (-9L)), // p_1061->g_1050
        (VECTOR(int64_t, 2))(1L, 0x6CC2114F75769D08L), // p_1061->g_1051
        &p_1061->g_104, // p_1061->g_1055
        &p_1061->g_1055, // p_1061->g_1054
        0, // p_1061->v_collective
        sequence_input[get_global_id(0)], // p_1061->global_0_offset
        sequence_input[get_global_id(1)], // p_1061->global_1_offset
        sequence_input[get_global_id(2)], // p_1061->global_2_offset
        sequence_input[get_local_id(0)], // p_1061->local_0_offset
        sequence_input[get_local_id(1)], // p_1061->local_1_offset
        sequence_input[get_local_id(2)], // p_1061->local_2_offset
        sequence_input[get_group_id(0)], // p_1061->group_0_offset
        sequence_input[get_group_id(1)], // p_1061->group_1_offset
        sequence_input[get_group_id(2)], // p_1061->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 34)), permutations[0][get_linear_local_id()])), // p_1061->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1062 = c_1063;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1061);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1061->g_20.s0, "p_1061->g_20.s0", print_hash_value);
    transparent_crc(p_1061->g_20.s1, "p_1061->g_20.s1", print_hash_value);
    transparent_crc(p_1061->g_20.s2, "p_1061->g_20.s2", print_hash_value);
    transparent_crc(p_1061->g_20.s3, "p_1061->g_20.s3", print_hash_value);
    transparent_crc(p_1061->g_20.s4, "p_1061->g_20.s4", print_hash_value);
    transparent_crc(p_1061->g_20.s5, "p_1061->g_20.s5", print_hash_value);
    transparent_crc(p_1061->g_20.s6, "p_1061->g_20.s6", print_hash_value);
    transparent_crc(p_1061->g_20.s7, "p_1061->g_20.s7", print_hash_value);
    transparent_crc(p_1061->g_22.s0, "p_1061->g_22.s0", print_hash_value);
    transparent_crc(p_1061->g_22.s1, "p_1061->g_22.s1", print_hash_value);
    transparent_crc(p_1061->g_22.s2, "p_1061->g_22.s2", print_hash_value);
    transparent_crc(p_1061->g_22.s3, "p_1061->g_22.s3", print_hash_value);
    transparent_crc(p_1061->g_22.s4, "p_1061->g_22.s4", print_hash_value);
    transparent_crc(p_1061->g_22.s5, "p_1061->g_22.s5", print_hash_value);
    transparent_crc(p_1061->g_22.s6, "p_1061->g_22.s6", print_hash_value);
    transparent_crc(p_1061->g_22.s7, "p_1061->g_22.s7", print_hash_value);
    transparent_crc(p_1061->g_25, "p_1061->g_25", print_hash_value);
    transparent_crc(p_1061->g_29, "p_1061->g_29", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1061->g_33[i], "p_1061->g_33[i]", print_hash_value);

    }
    transparent_crc(p_1061->g_35, "p_1061->g_35", print_hash_value);
    transparent_crc(p_1061->g_36, "p_1061->g_36", print_hash_value);
    transparent_crc(p_1061->g_37, "p_1061->g_37", print_hash_value);
    transparent_crc(p_1061->g_94, "p_1061->g_94", print_hash_value);
    transparent_crc(p_1061->g_104, "p_1061->g_104", print_hash_value);
    transparent_crc(p_1061->g_109, "p_1061->g_109", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1061->g_112[i], "p_1061->g_112[i]", print_hash_value);

    }
    transparent_crc(p_1061->g_122.s0, "p_1061->g_122.s0", print_hash_value);
    transparent_crc(p_1061->g_122.s1, "p_1061->g_122.s1", print_hash_value);
    transparent_crc(p_1061->g_122.s2, "p_1061->g_122.s2", print_hash_value);
    transparent_crc(p_1061->g_122.s3, "p_1061->g_122.s3", print_hash_value);
    transparent_crc(p_1061->g_122.s4, "p_1061->g_122.s4", print_hash_value);
    transparent_crc(p_1061->g_122.s5, "p_1061->g_122.s5", print_hash_value);
    transparent_crc(p_1061->g_122.s6, "p_1061->g_122.s6", print_hash_value);
    transparent_crc(p_1061->g_122.s7, "p_1061->g_122.s7", print_hash_value);
    transparent_crc(p_1061->g_122.s8, "p_1061->g_122.s8", print_hash_value);
    transparent_crc(p_1061->g_122.s9, "p_1061->g_122.s9", print_hash_value);
    transparent_crc(p_1061->g_122.sa, "p_1061->g_122.sa", print_hash_value);
    transparent_crc(p_1061->g_122.sb, "p_1061->g_122.sb", print_hash_value);
    transparent_crc(p_1061->g_122.sc, "p_1061->g_122.sc", print_hash_value);
    transparent_crc(p_1061->g_122.sd, "p_1061->g_122.sd", print_hash_value);
    transparent_crc(p_1061->g_122.se, "p_1061->g_122.se", print_hash_value);
    transparent_crc(p_1061->g_122.sf, "p_1061->g_122.sf", print_hash_value);
    transparent_crc(p_1061->g_152, "p_1061->g_152", print_hash_value);
    transparent_crc(p_1061->g_169.x, "p_1061->g_169.x", print_hash_value);
    transparent_crc(p_1061->g_169.y, "p_1061->g_169.y", print_hash_value);
    transparent_crc(p_1061->g_192, "p_1061->g_192", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1061->g_198[i][j][k], "p_1061->g_198[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1061->g_204.s0, "p_1061->g_204.s0", print_hash_value);
    transparent_crc(p_1061->g_204.s1, "p_1061->g_204.s1", print_hash_value);
    transparent_crc(p_1061->g_204.s2, "p_1061->g_204.s2", print_hash_value);
    transparent_crc(p_1061->g_204.s3, "p_1061->g_204.s3", print_hash_value);
    transparent_crc(p_1061->g_204.s4, "p_1061->g_204.s4", print_hash_value);
    transparent_crc(p_1061->g_204.s5, "p_1061->g_204.s5", print_hash_value);
    transparent_crc(p_1061->g_204.s6, "p_1061->g_204.s6", print_hash_value);
    transparent_crc(p_1061->g_204.s7, "p_1061->g_204.s7", print_hash_value);
    transparent_crc(p_1061->g_204.s8, "p_1061->g_204.s8", print_hash_value);
    transparent_crc(p_1061->g_204.s9, "p_1061->g_204.s9", print_hash_value);
    transparent_crc(p_1061->g_204.sa, "p_1061->g_204.sa", print_hash_value);
    transparent_crc(p_1061->g_204.sb, "p_1061->g_204.sb", print_hash_value);
    transparent_crc(p_1061->g_204.sc, "p_1061->g_204.sc", print_hash_value);
    transparent_crc(p_1061->g_204.sd, "p_1061->g_204.sd", print_hash_value);
    transparent_crc(p_1061->g_204.se, "p_1061->g_204.se", print_hash_value);
    transparent_crc(p_1061->g_204.sf, "p_1061->g_204.sf", print_hash_value);
    transparent_crc(p_1061->g_217, "p_1061->g_217", print_hash_value);
    transparent_crc(p_1061->g_218.s0, "p_1061->g_218.s0", print_hash_value);
    transparent_crc(p_1061->g_218.s1, "p_1061->g_218.s1", print_hash_value);
    transparent_crc(p_1061->g_218.s2, "p_1061->g_218.s2", print_hash_value);
    transparent_crc(p_1061->g_218.s3, "p_1061->g_218.s3", print_hash_value);
    transparent_crc(p_1061->g_218.s4, "p_1061->g_218.s4", print_hash_value);
    transparent_crc(p_1061->g_218.s5, "p_1061->g_218.s5", print_hash_value);
    transparent_crc(p_1061->g_218.s6, "p_1061->g_218.s6", print_hash_value);
    transparent_crc(p_1061->g_218.s7, "p_1061->g_218.s7", print_hash_value);
    transparent_crc(p_1061->g_218.s8, "p_1061->g_218.s8", print_hash_value);
    transparent_crc(p_1061->g_218.s9, "p_1061->g_218.s9", print_hash_value);
    transparent_crc(p_1061->g_218.sa, "p_1061->g_218.sa", print_hash_value);
    transparent_crc(p_1061->g_218.sb, "p_1061->g_218.sb", print_hash_value);
    transparent_crc(p_1061->g_218.sc, "p_1061->g_218.sc", print_hash_value);
    transparent_crc(p_1061->g_218.sd, "p_1061->g_218.sd", print_hash_value);
    transparent_crc(p_1061->g_218.se, "p_1061->g_218.se", print_hash_value);
    transparent_crc(p_1061->g_218.sf, "p_1061->g_218.sf", print_hash_value);
    transparent_crc(p_1061->g_222.s0, "p_1061->g_222.s0", print_hash_value);
    transparent_crc(p_1061->g_222.s1, "p_1061->g_222.s1", print_hash_value);
    transparent_crc(p_1061->g_222.s2, "p_1061->g_222.s2", print_hash_value);
    transparent_crc(p_1061->g_222.s3, "p_1061->g_222.s3", print_hash_value);
    transparent_crc(p_1061->g_222.s4, "p_1061->g_222.s4", print_hash_value);
    transparent_crc(p_1061->g_222.s5, "p_1061->g_222.s5", print_hash_value);
    transparent_crc(p_1061->g_222.s6, "p_1061->g_222.s6", print_hash_value);
    transparent_crc(p_1061->g_222.s7, "p_1061->g_222.s7", print_hash_value);
    transparent_crc(p_1061->g_239, "p_1061->g_239", print_hash_value);
    transparent_crc(p_1061->g_259, "p_1061->g_259", print_hash_value);
    transparent_crc(p_1061->g_261, "p_1061->g_261", print_hash_value);
    transparent_crc(p_1061->g_262, "p_1061->g_262", print_hash_value);
    transparent_crc(p_1061->g_263, "p_1061->g_263", print_hash_value);
    transparent_crc(p_1061->g_301.x, "p_1061->g_301.x", print_hash_value);
    transparent_crc(p_1061->g_301.y, "p_1061->g_301.y", print_hash_value);
    transparent_crc(p_1061->g_354, "p_1061->g_354", print_hash_value);
    transparent_crc(p_1061->g_368, "p_1061->g_368", print_hash_value);
    transparent_crc(p_1061->g_482.x, "p_1061->g_482.x", print_hash_value);
    transparent_crc(p_1061->g_482.y, "p_1061->g_482.y", print_hash_value);
    transparent_crc(p_1061->g_482.z, "p_1061->g_482.z", print_hash_value);
    transparent_crc(p_1061->g_482.w, "p_1061->g_482.w", print_hash_value);
    transparent_crc(p_1061->g_490.x, "p_1061->g_490.x", print_hash_value);
    transparent_crc(p_1061->g_490.y, "p_1061->g_490.y", print_hash_value);
    transparent_crc(p_1061->g_490.z, "p_1061->g_490.z", print_hash_value);
    transparent_crc(p_1061->g_490.w, "p_1061->g_490.w", print_hash_value);
    transparent_crc(p_1061->g_534, "p_1061->g_534", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1061->g_535[i], "p_1061->g_535[i]", print_hash_value);

    }
    transparent_crc(p_1061->g_553.s0, "p_1061->g_553.s0", print_hash_value);
    transparent_crc(p_1061->g_553.s1, "p_1061->g_553.s1", print_hash_value);
    transparent_crc(p_1061->g_553.s2, "p_1061->g_553.s2", print_hash_value);
    transparent_crc(p_1061->g_553.s3, "p_1061->g_553.s3", print_hash_value);
    transparent_crc(p_1061->g_553.s4, "p_1061->g_553.s4", print_hash_value);
    transparent_crc(p_1061->g_553.s5, "p_1061->g_553.s5", print_hash_value);
    transparent_crc(p_1061->g_553.s6, "p_1061->g_553.s6", print_hash_value);
    transparent_crc(p_1061->g_553.s7, "p_1061->g_553.s7", print_hash_value);
    transparent_crc(p_1061->g_565.s0, "p_1061->g_565.s0", print_hash_value);
    transparent_crc(p_1061->g_565.s1, "p_1061->g_565.s1", print_hash_value);
    transparent_crc(p_1061->g_565.s2, "p_1061->g_565.s2", print_hash_value);
    transparent_crc(p_1061->g_565.s3, "p_1061->g_565.s3", print_hash_value);
    transparent_crc(p_1061->g_565.s4, "p_1061->g_565.s4", print_hash_value);
    transparent_crc(p_1061->g_565.s5, "p_1061->g_565.s5", print_hash_value);
    transparent_crc(p_1061->g_565.s6, "p_1061->g_565.s6", print_hash_value);
    transparent_crc(p_1061->g_565.s7, "p_1061->g_565.s7", print_hash_value);
    transparent_crc(p_1061->g_575.s0, "p_1061->g_575.s0", print_hash_value);
    transparent_crc(p_1061->g_575.s1, "p_1061->g_575.s1", print_hash_value);
    transparent_crc(p_1061->g_575.s2, "p_1061->g_575.s2", print_hash_value);
    transparent_crc(p_1061->g_575.s3, "p_1061->g_575.s3", print_hash_value);
    transparent_crc(p_1061->g_575.s4, "p_1061->g_575.s4", print_hash_value);
    transparent_crc(p_1061->g_575.s5, "p_1061->g_575.s5", print_hash_value);
    transparent_crc(p_1061->g_575.s6, "p_1061->g_575.s6", print_hash_value);
    transparent_crc(p_1061->g_575.s7, "p_1061->g_575.s7", print_hash_value);
    transparent_crc(p_1061->g_606.x, "p_1061->g_606.x", print_hash_value);
    transparent_crc(p_1061->g_606.y, "p_1061->g_606.y", print_hash_value);
    transparent_crc(p_1061->g_631, "p_1061->g_631", print_hash_value);
    transparent_crc(p_1061->g_632, "p_1061->g_632", print_hash_value);
    transparent_crc(p_1061->g_635, "p_1061->g_635", print_hash_value);
    transparent_crc(p_1061->g_639, "p_1061->g_639", print_hash_value);
    transparent_crc(p_1061->g_651, "p_1061->g_651", print_hash_value);
    transparent_crc(p_1061->g_662, "p_1061->g_662", print_hash_value);
    transparent_crc(p_1061->g_663, "p_1061->g_663", print_hash_value);
    transparent_crc(p_1061->g_664, "p_1061->g_664", print_hash_value);
    transparent_crc(p_1061->g_665, "p_1061->g_665", print_hash_value);
    transparent_crc(p_1061->g_710.x, "p_1061->g_710.x", print_hash_value);
    transparent_crc(p_1061->g_710.y, "p_1061->g_710.y", print_hash_value);
    transparent_crc(p_1061->g_710.z, "p_1061->g_710.z", print_hash_value);
    transparent_crc(p_1061->g_710.w, "p_1061->g_710.w", print_hash_value);
    transparent_crc(p_1061->g_731.s0, "p_1061->g_731.s0", print_hash_value);
    transparent_crc(p_1061->g_731.s1, "p_1061->g_731.s1", print_hash_value);
    transparent_crc(p_1061->g_731.s2, "p_1061->g_731.s2", print_hash_value);
    transparent_crc(p_1061->g_731.s3, "p_1061->g_731.s3", print_hash_value);
    transparent_crc(p_1061->g_731.s4, "p_1061->g_731.s4", print_hash_value);
    transparent_crc(p_1061->g_731.s5, "p_1061->g_731.s5", print_hash_value);
    transparent_crc(p_1061->g_731.s6, "p_1061->g_731.s6", print_hash_value);
    transparent_crc(p_1061->g_731.s7, "p_1061->g_731.s7", print_hash_value);
    transparent_crc(p_1061->g_731.s8, "p_1061->g_731.s8", print_hash_value);
    transparent_crc(p_1061->g_731.s9, "p_1061->g_731.s9", print_hash_value);
    transparent_crc(p_1061->g_731.sa, "p_1061->g_731.sa", print_hash_value);
    transparent_crc(p_1061->g_731.sb, "p_1061->g_731.sb", print_hash_value);
    transparent_crc(p_1061->g_731.sc, "p_1061->g_731.sc", print_hash_value);
    transparent_crc(p_1061->g_731.sd, "p_1061->g_731.sd", print_hash_value);
    transparent_crc(p_1061->g_731.se, "p_1061->g_731.se", print_hash_value);
    transparent_crc(p_1061->g_731.sf, "p_1061->g_731.sf", print_hash_value);
    transparent_crc(p_1061->g_789.x, "p_1061->g_789.x", print_hash_value);
    transparent_crc(p_1061->g_789.y, "p_1061->g_789.y", print_hash_value);
    transparent_crc(p_1061->g_789.z, "p_1061->g_789.z", print_hash_value);
    transparent_crc(p_1061->g_789.w, "p_1061->g_789.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1061->g_813[i], "p_1061->g_813[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1061->g_814[i][j], "p_1061->g_814[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1061->g_819.x, "p_1061->g_819.x", print_hash_value);
    transparent_crc(p_1061->g_819.y, "p_1061->g_819.y", print_hash_value);
    transparent_crc(p_1061->g_829.s0, "p_1061->g_829.s0", print_hash_value);
    transparent_crc(p_1061->g_829.s1, "p_1061->g_829.s1", print_hash_value);
    transparent_crc(p_1061->g_829.s2, "p_1061->g_829.s2", print_hash_value);
    transparent_crc(p_1061->g_829.s3, "p_1061->g_829.s3", print_hash_value);
    transparent_crc(p_1061->g_829.s4, "p_1061->g_829.s4", print_hash_value);
    transparent_crc(p_1061->g_829.s5, "p_1061->g_829.s5", print_hash_value);
    transparent_crc(p_1061->g_829.s6, "p_1061->g_829.s6", print_hash_value);
    transparent_crc(p_1061->g_829.s7, "p_1061->g_829.s7", print_hash_value);
    transparent_crc(p_1061->g_829.s8, "p_1061->g_829.s8", print_hash_value);
    transparent_crc(p_1061->g_829.s9, "p_1061->g_829.s9", print_hash_value);
    transparent_crc(p_1061->g_829.sa, "p_1061->g_829.sa", print_hash_value);
    transparent_crc(p_1061->g_829.sb, "p_1061->g_829.sb", print_hash_value);
    transparent_crc(p_1061->g_829.sc, "p_1061->g_829.sc", print_hash_value);
    transparent_crc(p_1061->g_829.sd, "p_1061->g_829.sd", print_hash_value);
    transparent_crc(p_1061->g_829.se, "p_1061->g_829.se", print_hash_value);
    transparent_crc(p_1061->g_829.sf, "p_1061->g_829.sf", print_hash_value);
    transparent_crc(p_1061->g_908.x, "p_1061->g_908.x", print_hash_value);
    transparent_crc(p_1061->g_908.y, "p_1061->g_908.y", print_hash_value);
    transparent_crc(p_1061->g_908.z, "p_1061->g_908.z", print_hash_value);
    transparent_crc(p_1061->g_908.w, "p_1061->g_908.w", print_hash_value);
    transparent_crc(p_1061->g_916.x, "p_1061->g_916.x", print_hash_value);
    transparent_crc(p_1061->g_916.y, "p_1061->g_916.y", print_hash_value);
    transparent_crc(p_1061->g_916.z, "p_1061->g_916.z", print_hash_value);
    transparent_crc(p_1061->g_916.w, "p_1061->g_916.w", print_hash_value);
    transparent_crc(p_1061->g_926.s0, "p_1061->g_926.s0", print_hash_value);
    transparent_crc(p_1061->g_926.s1, "p_1061->g_926.s1", print_hash_value);
    transparent_crc(p_1061->g_926.s2, "p_1061->g_926.s2", print_hash_value);
    transparent_crc(p_1061->g_926.s3, "p_1061->g_926.s3", print_hash_value);
    transparent_crc(p_1061->g_926.s4, "p_1061->g_926.s4", print_hash_value);
    transparent_crc(p_1061->g_926.s5, "p_1061->g_926.s5", print_hash_value);
    transparent_crc(p_1061->g_926.s6, "p_1061->g_926.s6", print_hash_value);
    transparent_crc(p_1061->g_926.s7, "p_1061->g_926.s7", print_hash_value);
    transparent_crc(p_1061->g_926.s8, "p_1061->g_926.s8", print_hash_value);
    transparent_crc(p_1061->g_926.s9, "p_1061->g_926.s9", print_hash_value);
    transparent_crc(p_1061->g_926.sa, "p_1061->g_926.sa", print_hash_value);
    transparent_crc(p_1061->g_926.sb, "p_1061->g_926.sb", print_hash_value);
    transparent_crc(p_1061->g_926.sc, "p_1061->g_926.sc", print_hash_value);
    transparent_crc(p_1061->g_926.sd, "p_1061->g_926.sd", print_hash_value);
    transparent_crc(p_1061->g_926.se, "p_1061->g_926.se", print_hash_value);
    transparent_crc(p_1061->g_926.sf, "p_1061->g_926.sf", print_hash_value);
    transparent_crc(p_1061->g_959, "p_1061->g_959", print_hash_value);
    transparent_crc(p_1061->g_1027.x, "p_1061->g_1027.x", print_hash_value);
    transparent_crc(p_1061->g_1027.y, "p_1061->g_1027.y", print_hash_value);
    transparent_crc(p_1061->g_1027.z, "p_1061->g_1027.z", print_hash_value);
    transparent_crc(p_1061->g_1027.w, "p_1061->g_1027.w", print_hash_value);
    transparent_crc(p_1061->g_1048.x, "p_1061->g_1048.x", print_hash_value);
    transparent_crc(p_1061->g_1048.y, "p_1061->g_1048.y", print_hash_value);
    transparent_crc(p_1061->g_1048.z, "p_1061->g_1048.z", print_hash_value);
    transparent_crc(p_1061->g_1048.w, "p_1061->g_1048.w", print_hash_value);
    transparent_crc(p_1061->g_1050.x, "p_1061->g_1050.x", print_hash_value);
    transparent_crc(p_1061->g_1050.y, "p_1061->g_1050.y", print_hash_value);
    transparent_crc(p_1061->g_1050.z, "p_1061->g_1050.z", print_hash_value);
    transparent_crc(p_1061->g_1050.w, "p_1061->g_1050.w", print_hash_value);
    transparent_crc(p_1061->g_1051.x, "p_1061->g_1051.x", print_hash_value);
    transparent_crc(p_1061->g_1051.y, "p_1061->g_1051.y", print_hash_value);
    transparent_crc(p_1061->v_collective, "p_1061->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 20; i++)
            transparent_crc(p_1061->g_special_values[i + 20 * get_linear_group_id()], "p_1061->g_special_values[i + 20 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 20; i++)
            transparent_crc(p_1061->l_special_values[i], "p_1061->l_special_values[i]", print_hash_value);
    transparent_crc(p_1061->l_comm_values[get_linear_local_id()], "p_1061->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1061->g_comm_values[get_linear_group_id() * 34 + get_linear_local_id()], "p_1061->g_comm_values[get_linear_group_id() * 34 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
