// --atomics 70 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 89,63,1 -l 89,1,1
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

__constant uint32_t permutations[10][89] = {
{80,39,26,67,42,12,24,13,84,53,51,0,75,14,25,62,64,1,82,48,46,11,4,35,40,8,41,6,3,17,76,37,55,88,21,83,52,81,27,87,70,43,45,22,50,47,59,77,66,60,9,85,38,86,28,74,10,16,56,20,31,44,19,5,58,32,49,54,29,30,78,61,18,34,57,79,15,71,73,7,68,72,2,23,33,65,36,63,69}, // permutation 0
{37,4,77,22,75,65,24,82,3,57,6,10,11,7,34,68,88,64,62,47,21,61,43,86,87,38,67,9,8,29,66,73,69,35,50,32,76,53,44,2,55,31,36,26,71,18,79,15,30,1,49,16,56,74,58,63,5,81,41,84,39,33,40,42,54,80,48,23,60,85,0,12,14,45,83,27,78,28,52,19,46,13,70,17,25,51,59,72,20}, // permutation 1
{37,81,15,74,9,66,48,85,3,5,82,45,88,0,40,51,20,49,71,69,50,86,83,26,78,80,63,39,34,21,38,87,14,29,43,64,28,59,25,46,54,19,53,18,2,8,44,13,73,75,67,22,16,41,70,31,27,65,42,36,1,60,52,58,62,35,23,32,6,79,12,4,55,77,33,47,68,7,17,72,10,11,57,84,61,76,30,56,24}, // permutation 2
{86,33,66,78,71,31,16,88,52,45,81,57,22,60,10,59,1,9,54,26,8,18,7,70,77,28,32,43,19,25,23,61,30,38,72,3,58,67,79,64,80,51,35,20,74,84,50,11,53,0,21,39,27,34,47,63,44,62,15,6,29,17,55,24,69,82,65,75,56,83,4,87,14,85,76,12,73,13,36,5,49,42,41,2,40,46,48,37,68}, // permutation 3
{19,11,82,29,10,26,54,80,28,0,20,23,30,41,15,66,58,8,79,18,31,4,40,39,9,22,61,45,84,6,83,37,55,17,72,67,87,76,86,77,38,64,52,46,62,33,68,56,51,88,12,74,34,50,59,57,78,3,14,44,53,42,81,65,16,35,49,63,21,2,47,71,75,36,24,70,25,69,13,43,27,5,48,1,73,32,85,60,7}, // permutation 4
{54,55,76,15,63,48,25,41,45,70,2,81,5,22,69,4,31,33,12,83,29,73,61,18,51,6,28,57,71,74,19,1,14,8,58,36,7,0,68,56,40,75,26,50,78,43,65,46,10,17,53,38,79,11,88,64,62,44,49,82,20,85,34,13,37,24,77,3,23,39,66,42,72,35,84,16,47,52,87,67,21,86,9,59,30,80,60,27,32}, // permutation 5
{67,30,50,72,59,53,6,88,83,58,38,44,46,12,25,16,21,0,26,33,76,23,40,77,84,79,51,15,81,78,70,31,37,3,61,24,85,57,65,60,7,43,75,20,74,63,32,47,19,36,17,2,73,86,52,41,27,35,4,10,13,69,56,62,55,8,42,29,9,1,14,22,5,87,68,34,49,11,80,71,64,45,39,18,48,54,28,66,82}, // permutation 6
{22,29,70,77,61,66,71,12,3,30,4,32,35,11,42,52,21,25,20,26,5,78,73,33,18,1,59,87,9,86,48,55,43,41,72,88,50,54,65,60,16,44,14,57,84,79,31,82,58,45,7,74,49,64,56,75,83,15,27,81,17,38,13,36,69,53,10,46,37,19,47,34,2,23,24,6,40,67,0,39,51,63,62,80,28,76,85,8,68}, // permutation 7
{1,29,51,19,86,50,39,0,37,44,6,16,61,67,59,43,76,87,13,34,46,80,49,10,11,33,85,5,14,63,54,32,56,8,70,57,55,4,7,83,64,2,62,74,78,20,42,53,12,66,35,40,75,73,25,15,77,17,65,52,48,31,84,21,28,26,24,27,72,71,23,68,9,81,60,30,45,79,22,47,41,82,3,58,36,88,18,69,38}, // permutation 8
{72,21,75,60,33,55,36,3,42,77,31,34,68,1,10,11,85,7,81,57,86,30,70,13,76,66,44,9,87,54,37,43,52,28,80,67,65,47,17,39,6,83,73,63,79,20,71,62,0,41,32,12,78,8,40,19,18,48,38,35,56,27,24,16,59,58,82,5,22,69,14,25,50,49,84,64,46,53,61,15,2,29,74,4,51,45,26,23,88} // permutation 9
};

// Seed: 4114787108

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    int32_t *g_5[1][3][3];
    int32_t ** volatile g_4;
    int32_t g_8;
    uint16_t g_19;
    uint64_t g_20;
    int32_t g_29;
    VECTOR(int16_t, 8) g_30;
    int32_t g_31;
    int32_t g_74;
    int32_t *g_78;
    int32_t g_81[5];
    int8_t g_95;
    VECTOR(uint16_t, 2) g_100;
    VECTOR(uint32_t, 16) g_110;
    uint16_t g_117;
    VECTOR(uint8_t, 4) g_124;
    int32_t *g_172[7][8][4];
    int32_t **g_171;
    uint32_t g_186[4][9];
    uint64_t g_207;
    VECTOR(uint8_t, 4) g_218;
    volatile int8_t g_229;
    volatile int8_t * volatile g_228;
    volatile int8_t * volatile *g_227;
    VECTOR(uint32_t, 4) g_232;
    VECTOR(int32_t, 2) g_289;
    uint8_t *g_325;
    VECTOR(int8_t, 4) g_364;
    int64_t g_367;
    VECTOR(int16_t, 8) g_368;
    VECTOR(int16_t, 8) g_374;
    uint64_t g_382;
    VECTOR(int8_t, 4) g_392;
    VECTOR(int8_t, 8) g_396;
    VECTOR(uint16_t, 4) g_419;
    VECTOR(int32_t, 16) g_451;
    VECTOR(int32_t, 16) g_455;
    uint8_t **g_472;
    uint64_t g_478;
    VECTOR(int16_t, 8) g_574;
    int16_t *g_577;
    int32_t g_616;
    VECTOR(int8_t, 8) g_630;
    VECTOR(uint8_t, 8) g_686;
    VECTOR(uint8_t, 4) g_687;
    VECTOR(uint8_t, 4) g_688;
    VECTOR(uint8_t, 2) g_689;
    VECTOR(int64_t, 2) g_691;
    uint16_t g_713;
    VECTOR(uint64_t, 8) g_733;
    VECTOR(uint64_t, 2) g_734;
    VECTOR(uint64_t, 8) g_735;
    VECTOR(uint64_t, 2) g_736;
    VECTOR(uint32_t, 4) g_740;
    uint64_t g_753;
    uint16_t *g_810;
    VECTOR(uint8_t, 4) g_831;
    VECTOR(int8_t, 8) g_832;
    VECTOR(int8_t, 4) g_833;
    VECTOR(int8_t, 16) g_835;
    uint16_t g_868[2];
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
uint32_t  func_1(struct S0 * p_922);
int32_t * func_11(int32_t * p_12, int8_t  p_13, int32_t * p_14, uint8_t  p_15, struct S0 * p_922);
int32_t  func_23(int32_t * p_24, int32_t  p_25, int16_t  p_26, int32_t * p_27, struct S0 * p_922);
uint16_t  func_32(uint32_t  p_33, int32_t  p_34, int32_t * p_35, struct S0 * p_922);
int32_t * func_36(uint16_t * p_37, struct S0 * p_922);
int32_t * func_38(int32_t ** p_39, int32_t * p_40, struct S0 * p_922);
int32_t ** func_41(int32_t  p_42, int32_t ** p_43, int32_t  p_44, uint8_t  p_45, int16_t  p_46, struct S0 * p_922);
uint8_t  func_48(int32_t * p_49, uint64_t  p_50, uint8_t  p_51, int16_t  p_52, struct S0 * p_922);
uint64_t  func_53(int32_t * p_54, struct S0 * p_922);
int8_t  func_58(int16_t  p_59, int32_t ** p_60, uint16_t * p_61, int8_t  p_62, struct S0 * p_922);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_922->g_4 p_922->g_3 p_922->g_8 p_922->g_186 p_922->g_227 p_922->g_228 p_922->g_229 p_922->g_831 p_922->g_832 p_922->g_833 p_922->g_835 p_922->g_172 p_922->g_100 p_922->g_5 p_922->g_171 p_922->g_289 p_922->g_455 p_922->g_868 p_922->g_733 p_922->g_713
 * writes: p_922->g_5 p_922->g_3 p_922->g_8 p_922->g_186 p_922->g_833 p_922->g_95 p_922->g_367 p_922->g_172 p_922->g_81 p_922->g_19 p_922->g_20 p_922->g_117 p_922->g_810
 */
uint32_t  func_1(struct S0 * p_922)
{ /* block id: 4 */
    int32_t *l_2 = &p_922->g_3;
    int32_t l_815 = 0x033736CBL;
    uint64_t l_816 = 0x17E5B7B738C98CF1L;
    uint16_t l_817 = 0xC5A5L;
    VECTOR(int8_t, 4) l_834 = (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 1L), 1L);
    int8_t *l_836 = &p_922->g_95;
    uint16_t **l_857 = (void*)0;
    uint16_t **l_858 = &p_922->g_810;
    uint16_t **l_859 = (void*)0;
    uint16_t *l_861 = &p_922->g_19;
    uint16_t **l_860 = &l_861;
    uint16_t l_866 = 0x4087L;
    int32_t l_867 = 0x0A1E8341L;
    int32_t *l_869 = &l_867;
    int32_t l_870 = 0x2C9E9F4EL;
    int i;
    (*p_922->g_4) = l_2;
    for (p_922->g_3 = 0; (p_922->g_3 > (-23)); p_922->g_3 = safe_sub_func_int64_t_s_s(p_922->g_3, 5))
    { /* block id: 8 */
        int32_t l_807[5][4] = {{0x6E21B7C7L,0x0F9C3FD1L,0x0F9C3FD1L,0x6E21B7C7L},{0x6E21B7C7L,0x0F9C3FD1L,0x0F9C3FD1L,0x6E21B7C7L},{0x6E21B7C7L,0x0F9C3FD1L,0x0F9C3FD1L,0x6E21B7C7L},{0x6E21B7C7L,0x0F9C3FD1L,0x0F9C3FD1L,0x6E21B7C7L},{0x6E21B7C7L,0x0F9C3FD1L,0x0F9C3FD1L,0x6E21B7C7L}};
        uint32_t l_813 = 0xD67435E3L;
        int32_t *l_814[1][4][4] = {{{&p_922->g_81[0],&p_922->g_81[0],&p_922->g_81[0],&p_922->g_81[0]},{&p_922->g_81[0],&p_922->g_81[0],&p_922->g_81[0],&p_922->g_81[0]},{&p_922->g_81[0],&p_922->g_81[0],&p_922->g_81[0],&p_922->g_81[0]},{&p_922->g_81[0],&p_922->g_81[0],&p_922->g_81[0],&p_922->g_81[0]}}};
        uint32_t *l_820 = (void*)0;
        uint32_t *l_821 = (void*)0;
        uint32_t *l_822 = (void*)0;
        int64_t l_823 = 0x6FF9BC056D08DB0AL;
        uint32_t *l_824 = (void*)0;
        int i, j, k;
        for (p_922->g_8 = (-12); (p_922->g_8 != 21); p_922->g_8 = safe_add_func_uint16_t_u_u(p_922->g_8, 7))
        { /* block id: 11 */
            uint16_t *l_18[1][6];
            int32_t *l_28 = &p_922->g_29;
            int16_t *l_803 = (void*)0;
            int16_t *l_804 = (void*)0;
            int16_t *l_805 = (void*)0;
            int16_t *l_806 = (void*)0;
            int32_t **l_812 = &p_922->g_172[4][3][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_18[i][j] = &p_922->g_19;
            }
            (1 + 1);
        }
        l_815 = l_813;
        l_817 = l_816;
        l_815 |= (safe_mod_func_uint32_t_u_u((*l_2), (p_922->g_186[0][1]++)));
    }
    (*p_922->g_171) = func_38(func_41((*l_2), &p_922->g_5[0][2][1], ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0x8F9BL, ((VECTOR(uint16_t, 4))(0x64B2L, (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((((*l_2) >= ((*l_2) != (FAKE_DIVERGE(p_922->global_1_offset, get_global_id(1), 10) != ((void*)0 == &p_922->g_207)))) >= ((*l_836) = (safe_add_func_int64_t_s_s(p_922->g_8, (((**p_922->g_227) ^ ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(p_922->g_831.xzxx)).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(p_922->g_832.s0337)).odd))).xyyx, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(p_922->g_833.yywy)).yzxywwyz, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(l_834.wyyzxwyx)).s10, ((VECTOR(int8_t, 16))(p_922->g_835.sfefc2a92b0a2b36f)).s76))).xyxxyyyyxyyyxxxx)).s043a)))).zxwxwyyx))).odd))), ((VECTOR(int8_t, 4))(1L, (p_922->g_833.w = (*l_2)), (-6L), (-3L)))))).wyyxzxyx))).s1727533763004727)))).sf0))).lo) ^ 7UL))))) | FAKE_DIVERGE(p_922->global_1_offset, get_global_id(1), 10)), ((VECTOR(int32_t, 2))(0x25B69D59L)), 0x58923BEEL)).lo)).xyyxxyxx, ((VECTOR(int32_t, 8))(2L)), ((VECTOR(int32_t, 8))(0x3245A66AL))))).s3, 0x6CE27298L)), 65535UL, 0xC858L)), ((VECTOR(uint16_t, 2))(0x2336L)), 0x53D5L)))).s4 , (*l_2)) ^ (*l_2)), (*l_2), (*l_2), p_922), l_2, p_922);
    if ((((((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((FAKE_DIVERGE(p_922->local_1_offset, get_local_id(1), 10) == (safe_mod_func_uint8_t_u_u((*l_2), (safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((((((safe_lshift_func_int16_t_s_s((p_922->g_289.x ^ (0x09350352L | (((((*l_869) = ((safe_sub_func_uint32_t_u_u(((&p_922->g_117 != ((*l_860) = ((*l_858) = &p_922->g_19))) == ((((safe_lshift_func_int16_t_s_u(p_922->g_455.sc, 4)) && 0UL) | ((((((*l_2) , (safe_mod_func_int64_t_s_s((*l_2), 18446744073709551614UL))) & l_866) ^ 3UL) < (*l_2)) || GROUP_DIVERGE(0, 1))) <= GROUP_DIVERGE(2, 1))), l_867)) , p_922->g_868[0])) || (*l_2)) <= 0x7652C668B8BDFFA4L) <= (**p_922->g_227)))), 14)) , &p_922->g_472) == &p_922->g_472) , 6UL) | p_922->g_733.s1) , (*l_869)), FAKE_DIVERGE(p_922->local_0_offset, get_local_id(0), 10))), 0x344A2361B0B214B8L))))), 0)), p_922->g_713)), (*l_2))) , (**p_922->g_227)) | GROUP_DIVERGE(2, 1)), l_870)), (*l_2))) | p_922->g_733.s0) & p_922->g_868[0]) <= 3UL) , GROUP_DIVERGE(1, 1)) == (*l_2)) , (*l_2)))
    { /* block id: 380 */
        if ((atomic_inc(&p_922->g_atomic_input[70 * get_linear_group_id() + 57]) == 0))
        { /* block id: 382 */
            int16_t l_871 = 0x7D64L;
            int32_t l_872 = (-1L);
            int32_t l_873 = (-5L);
            uint32_t l_890 = 9UL;
            VECTOR(uint32_t, 16) l_891 = (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 2UL), 2UL), 2UL, 4294967293UL, 2UL, (VECTOR(uint32_t, 2))(4294967293UL, 2UL), (VECTOR(uint32_t, 2))(4294967293UL, 2UL), 4294967293UL, 2UL, 4294967293UL, 2UL);
            int i;
            l_871 |= 0x56A233CEL;
            if ((l_873 &= l_872))
            { /* block id: 385 */
                int32_t l_874 = 0x69CF0710L;
                VECTOR(int32_t, 8) l_885 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5BC32B8EL), 0x5BC32B8EL), 0x5BC32B8EL, 1L, 0x5BC32B8EL);
                int16_t l_886 = 0x2471L;
                int i;
                for (l_874 = 0; (l_874 <= (-14)); l_874 = safe_sub_func_uint16_t_u_u(l_874, 1))
                { /* block id: 388 */
                    uint64_t l_877 = 18446744073709551607UL;
                    uint16_t l_878 = 1UL;
                    int32_t l_880 = 0L;
                    int32_t *l_879 = &l_880;
                    int32_t *l_881 = &l_880;
                    int32_t *l_882 = &l_880;
                    uint32_t l_883 = 0xB6EE2A1DL;
                    int32_t l_884[2][9][6] = {{{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)}},{{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)},{0x2E5F0FE3L,(-1L),1L,0L,1L,(-1L)}}};
                    int i, j, k;
                    l_878 |= l_877;
                    l_882 = (l_881 = l_879);
                    l_884[0][4][1] ^= l_883;
                }
                l_886 ^= ((VECTOR(int32_t, 2))(l_885.s20)).hi;
            }
            else
            { /* block id: 395 */
                int32_t *l_887 = (void*)0;
                int32_t l_889 = (-1L);
                int32_t *l_888 = &l_889;
                l_888 = l_887;
            }
            if ((l_891.s1 = l_890))
            { /* block id: 399 */
                int32_t l_892 = (-10L);
                int64_t l_902 = 0x53664A7EFFEE5EAFL;
                uint16_t l_903 = 1UL;
                int32_t l_906 = 0x77499BDDL;
                int32_t l_907 = 0L;
                for (l_892 = 0; (l_892 != (-21)); l_892--)
                { /* block id: 402 */
                    VECTOR(uint32_t, 4) l_895 = (VECTOR(uint32_t, 4))(0x6031BA9BL, (VECTOR(uint32_t, 2))(0x6031BA9BL, 4294967295UL), 4294967295UL);
                    uint16_t l_896 = 65535UL;
                    int32_t l_898 = 0x0094DFCFL;
                    int32_t *l_897[4][5][10] = {{{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898}},{{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898}},{{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898}},{{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898},{(void*)0,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898,&l_898}}};
                    int32_t *l_899 = (void*)0;
                    int32_t *l_900[10][6][4] = {{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}},{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}},{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}},{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}},{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}},{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}},{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}},{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}},{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}},{{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,(void*)0,&l_898}}};
                    int32_t *l_901 = &l_898;
                    int i, j, k;
                    l_896 = l_895.w;
                    l_901 = (l_900[7][5][3] = (l_899 = l_897[0][0][3]));
                }
                l_903++;
                l_907 = l_906;
            }
            else
            { /* block id: 410 */
                int32_t l_908 = 0x27C6718DL;
                uint32_t l_918 = 0xD0D4AE11L;
                int32_t l_919 = 2L;
                int32_t l_920 = 0x4012B66EL;
                int32_t l_921 = 0x14E4B24CL;
                for (l_908 = 0; (l_908 == 13); l_908++)
                { /* block id: 413 */
                    uint64_t l_911 = 0x144436809459B775L;
                    int64_t l_912 = 0L;
                    int8_t l_913[10][9] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}};
                    uint32_t l_914[6][4][8] = {{{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L}},{{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L}},{{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L}},{{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L}},{{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L}},{{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L},{0x81E4308AL,4294967293UL,4294967293UL,4294967293UL,0x81E4308AL,7UL,4294967295UL,0xE8451A79L}}};
                    int32_t l_916 = 0x2FE59F56L;
                    int32_t *l_915[10];
                    int32_t *l_917[3];
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                        l_915[i] = &l_916;
                    for (i = 0; i < 3; i++)
                        l_917[i] = &l_916;
                    l_914[5][3][7] = (l_911 , (l_913[4][0] |= l_912));
                    l_917[0] = l_915[9];
                }
                l_920 &= ((l_918 = 0x5C52F0A37E18B8D2L) , l_919);
                l_921 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, (-1L))).xxxxxyyxxxxxyxyy)).s8c15)).y;
            }
            unsigned int result = 0;
            result += l_871;
            result += l_872;
            result += l_873;
            result += l_890;
            result += l_891.sf;
            result += l_891.se;
            result += l_891.sd;
            result += l_891.sc;
            result += l_891.sb;
            result += l_891.sa;
            result += l_891.s9;
            result += l_891.s8;
            result += l_891.s7;
            result += l_891.s6;
            result += l_891.s5;
            result += l_891.s4;
            result += l_891.s3;
            result += l_891.s2;
            result += l_891.s1;
            result += l_891.s0;
            atomic_add(&p_922->g_special_values[70 * get_linear_group_id() + 57], result);
        }
        else
        { /* block id: 422 */
            (1 + 1);
        }
    }
    else
    { /* block id: 425 */
        (*l_869) = (!(*l_869));
    }
    return (*l_2);
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_4 p_922->g_5
 * writes: p_922->g_81 p_922->g_5
 */
int32_t * func_11(int32_t * p_12, int8_t  p_13, int32_t * p_14, uint8_t  p_15, struct S0 * p_922)
{ /* block id: 361 */
    int32_t *l_808 = &p_922->g_81[3];
    int32_t l_809 = (-1L);
    int32_t **l_811[6];
    int i;
    for (i = 0; i < 6; i++)
        l_811[i] = &p_922->g_5[0][0][1];
    l_809 = ((*l_808) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-1L), 0x55A4A537L, (-7L), 0x5D9D0BE0L)))).wzwwyzzwxxyzwywx)).sa);
    (*p_922->g_4) = (*p_922->g_4);
    return p_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_3
 * writes:
 */
int32_t  func_23(int32_t * p_24, int32_t  p_25, int16_t  p_26, int32_t * p_27, struct S0 * p_922)
{ /* block id: 359 */
    return (*p_24);
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_325 p_922->g_630 p_922->g_117 p_922->g_392 p_922->g_218 p_922->g_124 p_922->g_30 p_922->g_110 p_922->g_364 p_922->g_186 p_922->g_207 p_922->g_374 p_922->g_686 p_922->g_687 p_922->g_688 p_922->g_689 p_922->g_691 p_922->g_comm_values p_922->g_713 p_922->g_227 p_922->g_455 p_922->g_100 p_922->g_419 p_922->g_733 p_922->g_734 p_922->g_735 p_922->g_736 p_922->g_740 p_922->g_3 p_922->g_753 p_922->g_232 p_922->g_368 p_922->g_367
 * writes: p_922->g_172 p_922->g_19 p_922->g_218 p_922->g_368 p_922->g_396 p_922->g_117 p_922->g_207 p_922->g_100 p_922->g_753
 */
uint16_t  func_32(uint32_t  p_33, int32_t  p_34, int32_t * p_35, struct S0 * p_922)
{ /* block id: 286 */
    int32_t **l_618 = &p_922->g_172[4][3][3];
    int32_t *l_619[2];
    uint32_t l_620 = 0xF9813266L;
    int16_t l_621[7][7][5] = {{{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)}},{{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)}},{{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)}},{{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)}},{{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)}},{{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)}},{{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)},{0x4148L,2L,0x2221L,4L,(-6L)}}};
    int16_t l_622[1];
    VECTOR(int8_t, 8) l_628 = (VECTOR(int8_t, 8))(0x37L, (VECTOR(int8_t, 4))(0x37L, (VECTOR(int8_t, 2))(0x37L, 0x5EL), 0x5EL), 0x5EL, 0x37L, 0x5EL);
    VECTOR(int8_t, 2) l_629 = (VECTOR(int8_t, 2))(0x70L, (-1L));
    int8_t l_669[1];
    VECTOR(uint8_t, 2) l_690 = (VECTOR(uint8_t, 2))(0x4EL, 255UL);
    VECTOR(uint32_t, 8) l_695 = (VECTOR(uint32_t, 8))(0x3925D12FL, (VECTOR(uint32_t, 4))(0x3925D12FL, (VECTOR(uint32_t, 2))(0x3925D12FL, 0x989E92A4L), 0x989E92A4L), 0x989E92A4L, 0x3925D12FL, 0x989E92A4L);
    uint16_t *l_701 = &p_922->g_117;
    uint16_t **l_700 = &l_701;
    VECTOR(int8_t, 4) l_726 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0L), 0L);
    VECTOR(uint64_t, 8) l_737 = (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 2UL), 2UL), 2UL, 18446744073709551608UL, 2UL);
    VECTOR(uint32_t, 4) l_742 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 1UL), 1UL);
    uint8_t l_781 = 246UL;
    int32_t l_787 = 0L;
    VECTOR(int32_t, 2) l_788 = (VECTOR(int32_t, 2))((-1L), 0x7DEFB4F7L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_619[i] = &p_922->g_81[0];
    for (i = 0; i < 1; i++)
        l_622[i] = 0x41E5L;
    for (i = 0; i < 1; i++)
        l_669[i] = 0x35L;
    (*l_618) = p_35;
    (*l_618) = p_35;
    if ((l_621[4][6][0] = (l_620 |= ((void*)0 != p_922->g_325))))
    { /* block id: 291 */
        uint16_t l_623 = 1UL;
        l_623++;
    }
    else
    { /* block id: 293 */
        uint16_t *l_647 = &p_922->g_19;
        int32_t l_648 = 0x2FE039E1L;
        uint8_t *l_657 = (void*)0;
        uint8_t *l_658 = (void*)0;
        uint8_t *l_659[8][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_664 = 0x13894187L;
        int16_t *l_665 = (void*)0;
        int16_t *l_666 = &l_621[4][6][0];
        int8_t *l_667[3][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        int32_t *l_668 = &p_922->g_74;
        int i, j;
        (*l_618) = func_38(&p_922->g_5[0][0][1], ((((((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(l_628.s6626)).lo, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_629.yxxx)).wxwyzwzy)).s21, ((VECTOR(int8_t, 16))(p_922->g_630.s1503036533167157)).s11))), 0x00L, 0L, (l_648 = (((safe_sub_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((+(safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(0x4E67414CF8F3A324L, p_922->g_117)), (safe_rshift_func_int16_t_s_s((((*l_647) = p_922->g_392.z) < (((l_648 == (safe_sub_func_int8_t_s_s((p_922->g_396.s1 = ((safe_rshift_func_int16_t_s_s((p_922->g_368.s6 = ((*l_666) = ((((safe_div_func_int16_t_s_s((-3L), (((safe_lshift_func_uint8_t_u_u(((p_922->g_218.x--) && l_648), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(255UL, 0x58L)).xxyxyxyyxyxyxyyx)).s5494)).z)) != ((safe_lshift_func_uint16_t_u_s((0x3501B4D8A09AC791L >= p_922->g_124.z), 8)) != 1L)) , p_33))) == (-6L)) , l_664) < 0x76DD5A27L))), 7)) & l_664)), p_922->g_30.s5))) , &l_667[0][1]) == (void*)0)), 0))))), p_922->g_124.y)) , GROUP_DIVERGE(0, 1)) | FAKE_DIVERGE(p_922->group_2_offset, get_group_id(2), 10)), (-1L))), 15)), (-10L))) , (void*)0) == (void*)0), 8L)) & l_648) > 0x4FL)), ((VECTOR(int8_t, 2))(0x2DL)), 0x3AL)).s5, p_922->g_110.s2)) , 0x6608710912565973L) , p_922->g_364.z) && 0x49FEL) > p_34) , l_668), p_922);
    }
    if (l_669[0])
    { /* block id: 302 */
        uint32_t l_670[10][4][6] = {{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}},{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}},{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}},{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}},{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}},{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}},{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}},{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}},{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}},{{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L},{4294967295UL,4294967295UL,0xB570F530L,0x73B543E5L,0UL,0xDA95BD79L}}};
        int i, j, k;
        l_670[8][3][5] = 0x38B830FEL;
        for (p_922->g_117 = 0; (p_922->g_117 == 6); p_922->g_117++)
        { /* block id: 306 */
            uint16_t l_675 = 0xE295L;
            l_675 &= (safe_sub_func_int16_t_s_s((0UL && p_922->g_186[0][0]), FAKE_DIVERGE(p_922->global_2_offset, get_global_id(2), 10)));
        }
    }
    else
    { /* block id: 309 */
        int32_t l_680 = 0x00F5C25CL;
        int32_t **l_692 = &p_922->g_78;
        uint8_t l_697 = 0x3EL;
        uint16_t *l_699[6][8] = {{&p_922->g_117,(void*)0,&p_922->g_117,&p_922->g_117,&p_922->g_19,&p_922->g_117,&p_922->g_117,&p_922->g_19},{&p_922->g_117,(void*)0,&p_922->g_117,&p_922->g_117,&p_922->g_19,&p_922->g_117,&p_922->g_117,&p_922->g_19},{&p_922->g_117,(void*)0,&p_922->g_117,&p_922->g_117,&p_922->g_19,&p_922->g_117,&p_922->g_117,&p_922->g_19},{&p_922->g_117,(void*)0,&p_922->g_117,&p_922->g_117,&p_922->g_19,&p_922->g_117,&p_922->g_117,&p_922->g_19},{&p_922->g_117,(void*)0,&p_922->g_117,&p_922->g_117,&p_922->g_19,&p_922->g_117,&p_922->g_117,&p_922->g_19},{&p_922->g_117,(void*)0,&p_922->g_117,&p_922->g_117,&p_922->g_19,&p_922->g_117,&p_922->g_117,&p_922->g_19}};
        uint16_t **l_698 = &l_699[2][5];
        VECTOR(int8_t, 8) l_725 = (VECTOR(int8_t, 8))(0x19L, (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, 0x43L), 0x43L), 0x43L, 0x19L, 0x43L);
        VECTOR(uint32_t, 4) l_741 = (VECTOR(uint32_t, 4))(0x65A1E31BL, (VECTOR(uint32_t, 2))(0x65A1E31BL, 4294967295UL), 4294967295UL);
        uint32_t l_752 = 0x3AFBB3EEL;
        VECTOR(int32_t, 2) l_762 = (VECTOR(int32_t, 2))(2L, 6L);
        VECTOR(int32_t, 16) l_799 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 4L), 4L), 4L, (-10L), 4L, (VECTOR(int32_t, 2))((-10L), 4L), (VECTOR(int32_t, 2))((-10L), 4L), (-10L), 4L, (-10L), 4L);
        VECTOR(int32_t, 8) l_800 = (VECTOR(int32_t, 8))(0x3FBF63DCL, (VECTOR(int32_t, 4))(0x3FBF63DCL, (VECTOR(int32_t, 2))(0x3FBF63DCL, (-1L)), (-1L)), (-1L), 0x3FBF63DCL, (-1L));
        int i, j;
        for (p_922->g_207 = (-2); (p_922->g_207 >= 53); ++p_922->g_207)
        { /* block id: 312 */
            return p_33;
        }
        for (p_922->g_117 = 16; (p_922->g_117 != 35); p_922->g_117 = safe_add_func_uint16_t_u_u(p_922->g_117, 4))
        { /* block id: 317 */
            VECTOR(uint64_t, 2) l_706 = (VECTOR(uint64_t, 2))(0xD0C1A0E978E16F4FL, 18446744073709551614UL);
            int32_t l_715[3][5] = {{0x07FFE6F8L,0x07FFE6F8L,0x07FFE6F8L,0x07FFE6F8L,0x07FFE6F8L},{0x07FFE6F8L,0x07FFE6F8L,0x07FFE6F8L,0x07FFE6F8L,0x07FFE6F8L},{0x07FFE6F8L,0x07FFE6F8L,0x07FFE6F8L,0x07FFE6F8L,0x07FFE6F8L}};
            VECTOR(int8_t, 16) l_727 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x4AL), 0x4AL), 0x4AL, (-7L), 0x4AL, (VECTOR(int8_t, 2))((-7L), 0x4AL), (VECTOR(int8_t, 2))((-7L), 0x4AL), (-7L), 0x4AL, (-7L), 0x4AL);
            VECTOR(int8_t, 16) l_728 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 8L), 8L), 8L, 8L, 8L, (VECTOR(int8_t, 2))(8L, 8L), (VECTOR(int8_t, 2))(8L, 8L), 8L, 8L, 8L, 8L);
            int8_t *l_755 = (void*)0;
            VECTOR(uint16_t, 16) l_759 = (VECTOR(uint16_t, 16))(0x302BL, (VECTOR(uint16_t, 4))(0x302BL, (VECTOR(uint16_t, 2))(0x302BL, 7UL), 7UL), 7UL, 0x302BL, 7UL, (VECTOR(uint16_t, 2))(0x302BL, 7UL), (VECTOR(uint16_t, 2))(0x302BL, 7UL), 0x302BL, 7UL, 0x302BL, 7UL);
            uint32_t l_778 = 0x2BB2ED68L;
            uint32_t l_784[7][3];
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 3; j++)
                    l_784[i][j] = 6UL;
            }
            if ((!l_680))
            { /* block id: 318 */
                int8_t *l_685 = &l_669[0];
                uint8_t l_696 = 0xF4L;
                uint8_t *l_707 = (void*)0;
                uint8_t *l_708 = (void*)0;
                uint8_t *l_709 = &l_696;
                VECTOR(int8_t, 8) l_724 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x38L), 0x38L), 0x38L, 3L, 0x38L);
                uint64_t *l_749 = &p_922->g_207;
                int16_t *l_754 = &l_621[6][5][3];
                uint64_t *l_756[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_756[i] = &p_922->g_382;
                (*l_618) = ((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(0xCEL, (safe_rshift_func_int8_t_s_s(((*l_685) ^= p_922->g_374.s0), 2)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(p_922->g_686.s31667020)), ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_922->g_687.xyyyxzxz)).lo)).even)), 0x42L, 0x96L)).hi))).xyyyxyxyxxyyxxxx))).s3d, ((VECTOR(uint8_t, 16))(p_922->g_688.xzwyxyyzwwwyxwzz)).saa, ((VECTOR(uint8_t, 8))(p_922->g_689.xxyxyxyy)).s03))).yyyyxxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0UL, ((VECTOR(uint8_t, 2))(l_690.yx)), (((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_922->g_691.yxyyxyyx)))).s6 , 0UL) < ((void*)0 != l_692)) ^ (safe_mod_func_int64_t_s_s(((l_696 = (+((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_695.s74257456)).hi)).x)) , ((((l_697 , l_698) != l_700) && (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(p_33, ((*l_709) ^= ((((p_922->g_comm_values[p_922->tid] >= p_34) == l_706.x) | 246UL) > p_33)))), 4))) , l_706.x)), p_34))), GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 2))(0x5CL)), ((VECTOR(uint8_t, 2))(0x22L)), ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 4))(5UL)), 1UL)).s6adf)).wyyxzwzw)).s3444723601426074)).s98, ((VECTOR(uint8_t, 2))(0x18L)), ((VECTOR(uint8_t, 2))(0x2CL))))).yyyyxxyyyxyyyxxy)).odd))).s10)).yxyyyxxy)), p_34, ((VECTOR(uint8_t, 2))(251UL)), 0x46L, 1UL, 0x28L)).s2, l_706.y)) , &p_922->g_81[2]);
                l_715[0][2] |= (((((((*l_685) &= (p_922->g_630.s1 , ((safe_unary_minus_func_uint32_t_u((&p_922->g_207 == ((safe_sub_func_int64_t_s_s(((((void*)0 == &p_922->g_186[0][0]) || ((p_922->g_713 < l_680) && ((safe_unary_minus_func_int16_t_s((p_922->g_227 == &l_685))) < ((~l_696) & p_922->g_455.se)))) || 0x1F669ADBL), p_922->g_comm_values[p_922->tid])) , (void*)0)))) & (-6L)))) | p_33) , p_34) > p_922->g_100.y) , (void*)0) == l_619[1]);
                atomic_or(&p_922->l_atomic_reduction[0], (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(p_34, ((safe_mod_func_uint32_t_u_u(p_922->g_419.w, (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-6L), 0x15L)), 0x61L, 0x6DL)).wwzyxxwz)))).s65, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(l_724.s7462)).zxzxywxwwzywwyzz, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-3L), (-7L))), 0x59L, 4L)).ywywxywwyzyxwzyy))).s1d1f)).lo, ((VECTOR(int8_t, 8))(l_725.s11011317)).s05))).yxyx)).hi))), (&p_922->g_207 == (void*)0), (-10L), ((VECTOR(int8_t, 4))(0x75L, ((VECTOR(int8_t, 2))(l_726.xx)), 1L)))), ((VECTOR(int8_t, 16))(l_727.s7765bb23c2105792)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_728.s80)))).yyyxxyxx))).s0, (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(p_922->g_733.s63354513)).s37, ((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 2))(0xA31EBC91BBFB5A46L, 0UL)).yxyyxxxy, ((VECTOR(uint64_t, 16))(p_922->g_734.xyxyxyyyyxxxyyyy)).odd, ((VECTOR(uint64_t, 16))(p_922->g_735.s6056710470463477)).lo))))).even, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0xFF28A65DEBB3E7D1L, 0x684C4D1475E0CC94L)), 0xF7B2BB0FDEBD6C8AL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 8))(p_922->g_736.xyyyyxxy)).s11, ((VECTOR(uint64_t, 2))(l_737.s50))))).yxxyxyyx)), 8UL, (p_922->g_753 = (safe_mod_func_int32_t_s_s(((((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 8))(p_922->g_740.yyxwzzzx)).s5553456514131207, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_741.xwzzwywx)), ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(0xB77B2CD7L, 0x3D006563L, 4294967295UL, 1UL)), ((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_742.yx)), (safe_div_func_int16_t_s_s(((*l_754) = (((~(((safe_mod_func_int64_t_s_s(0L, (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((~(((p_922->g_740.w ^ l_741.z) , (((--(*l_749)) , ((p_34 <= ((p_922->g_100.x = GROUP_DIVERGE(1, 1)) || (((*p_35) && l_752) & l_697))) | p_922->g_753)) < l_697)) && GROUP_DIVERGE(2, 1))) != 0UL))))) || GROUP_DIVERGE(0, 1)) , 0x374E8D2DL)) <= p_922->g_687.x) == l_724.s1)), l_715[0][2])), p_34, 4294967293UL, 0x512C6E68L, 0x6153553AL, 0xCA8826C1L)).s55, ((VECTOR(uint32_t, 2))(0xC4D51B1BL)), ((VECTOR(uint32_t, 2))(2UL))))).xyxx)))))), l_696, ((VECTOR(uint32_t, 2))(0UL)), 4294967291UL)), ((VECTOR(uint32_t, 16))(1UL)), ((VECTOR(uint32_t, 16))(1UL))))).odd)).s4250264101304121)), ((VECTOR(uint32_t, 16))(0x46FDDE1AL))))).s9d))), ((VECTOR(uint32_t, 2))(4294967295UL))))), 4294967287UL, 5UL)))).zxwwxxwxxwxyzzwz)).sc == p_922->g_691.x) | 0x511DD30AL) , l_755) != &p_922->g_95), GROUP_DIVERGE(1, 1)))), ((VECTOR(uint64_t, 2))(0UL)), 0x3C2065C98406AAA6L)).s9db5))).xxyywzzywxxyzzzy, ((VECTOR(uint64_t, 16))(0x2D4185D312507416L))))).even, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).s23))).yxxxyxyx, ((VECTOR(uint64_t, 8))(0x6CFE3D6B579C635CL))))).s15)).lo , l_728.s2), 0x1286L)), p_34)))))) != p_922->g_3))), GROUP_DIVERGE(1, 1))));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_922->v_collective += p_922->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                l_762.y = ((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_759.sd271)).y, 0x33F9L)) < (((p_922->g_232.x || (l_715[0][0] | (((FAKE_DIVERGE(p_922->group_1_offset, get_group_id(1), 10) == p_33) || (((l_724.s2 == 65535UL) , &p_922->g_95) != (l_725.s1 , ((safe_sub_func_int32_t_s_s(8L, (*p_35))) , (void*)0)))) != 0x421BF8A430E99F7DL))) ^ 0L) > p_922->g_124.w));
            }
            else
            { /* block id: 331 */
                uint32_t l_770 = 4294967292UL;
                for (l_620 = 0; (l_620 > 12); l_620++)
                { /* block id: 334 */
                    int16_t l_768 = 9L;
                    int32_t l_769 = (-9L);
                    for (p_922->g_753 = 0; (p_922->g_753 < 30); p_922->g_753 = safe_add_func_uint32_t_u_u(p_922->g_753, 7))
                    { /* block id: 337 */
                        int64_t l_767 = (-6L);
                        l_767 = ((0x63L < (~p_34)) , (*p_35));
                    }
                    l_769 |= l_768;
                    l_770--;
                }
            }
            for (p_34 = 10; (p_34 < (-9)); --p_34)
            { /* block id: 346 */
                int16_t l_775 = 0x7CF0L;
                int32_t l_776 = 0x52BAA0D5L;
                int64_t l_777 = 5L;
                l_778--;
                if ((*p_35))
                    break;
            }
            --l_781;
            if (l_784[3][0])
                break;
        }
        l_787 |= (safe_lshift_func_int16_t_s_u((-5L), p_922->g_218.z));
        l_762.x = (((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x6DDF63B8L, 0x42A48246L)).yyyxyyxxxxyxyxyx, ((VECTOR(int32_t, 4))(l_788.yxxx)).zxwxwxwyzzwwzyzw, ((VECTOR(int32_t, 16))(0x7CC14B54L, (-4L), ((p_33 <= (((p_34 = 0x7437AEF2L) , p_34) == (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((+((p_35 != ((p_922->g_368.s6 >= (safe_rshift_func_int8_t_s_u(6L, p_922->g_367))) , (void*)0)) , (safe_rshift_func_uint16_t_u_u((~((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_799.s2bca)), 0x43C433A5L, 0x23C06457L, ((VECTOR(int32_t, 8))(l_800.s47034202)), 0x356DCFF1L, 0x42117DCCL)).s6 == (safe_rshift_func_int16_t_s_u((&p_922->g_753 != (void*)0), 11))) | (-1L))), 1)))), 0x7AL)), p_922->g_733.s5)))) != GROUP_DIVERGE(2, 1)), ((VECTOR(int32_t, 8))(0x1217144AL)), (*p_35), 2L, 5L, 0x2A5768FEL, 5L))))).even, ((VECTOR(int32_t, 8))(0x04C3C9B2L))))).s7 , (*p_35));
    }
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_comm_values p_922->g_5 p_922->g_3 p_922->g_30 p_922->g_8 p_922->l_comm_values p_922->g_19 p_922->g_95 p_922->g_100 p_922->g_110 p_922->g_81 p_922->g_117 p_922->g_124 p_922->g_74 p_922->g_20 p_922->g_186 p_922->g_171 p_922->g_218 p_922->g_227 p_922->g_232 p_922->g_207 p_922->g_172 p_922->g_289 p_922->g_364 p_922->g_367 p_922->g_368 p_922->g_374 p_922->g_382 p_922->g_451 p_922->g_455 p_922->g_396 p_922->g_574 p_922->g_577
 * writes: p_922->g_78 p_922->g_19 p_922->g_95 p_922->g_100 p_922->g_117 p_922->g_81 p_922->g_171 p_922->g_20 p_922->g_207 p_922->g_172 p_922->g_74 p_922->g_186 p_922->g_364 p_922->g_367 p_922->g_382 p_922->g_396 p_922->g_472 p_922->g_124
 */
int32_t * func_36(uint16_t * p_37, struct S0 * p_922)
{ /* block id: 16 */
    int32_t **l_47 = &p_922->g_5[0][0][1];
    uint64_t *l_477 = &p_922->g_478;
    uint64_t **l_479 = &l_477;
    uint64_t *l_480 = &p_922->g_478;
    int32_t *l_615 = &p_922->g_616;
    int32_t **l_617[3][2][6] = {{{&p_922->g_5[0][0][1],(void*)0,(void*)0,&p_922->g_172[0][6][3],(void*)0,&p_922->g_172[0][6][3]},{&p_922->g_5[0][0][1],(void*)0,(void*)0,&p_922->g_172[0][6][3],(void*)0,&p_922->g_172[0][6][3]}},{{&p_922->g_5[0][0][1],(void*)0,(void*)0,&p_922->g_172[0][6][3],(void*)0,&p_922->g_172[0][6][3]},{&p_922->g_5[0][0][1],(void*)0,(void*)0,&p_922->g_172[0][6][3],(void*)0,&p_922->g_172[0][6][3]}},{{&p_922->g_5[0][0][1],(void*)0,(void*)0,&p_922->g_172[0][6][3],(void*)0,&p_922->g_172[0][6][3]},{&p_922->g_5[0][0][1],(void*)0,(void*)0,&p_922->g_172[0][6][3],(void*)0,&p_922->g_172[0][6][3]}}};
    int i, j, k;
    p_922->g_172[4][3][3] = func_38(func_41(p_922->g_comm_values[p_922->tid], l_47, (**l_47), func_48(p_922->g_5[0][0][1], (func_53((*l_47), p_922) <= (safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((**l_47) != ((((((*l_479) = l_477) == l_480) , (**l_47)) & (**l_47)) | (**l_47))) & (**l_47)), (**l_47))), (**l_47)))), (**l_47), (**l_47), p_922), (**l_47), p_922), l_615, p_922);
    p_922->g_172[4][3][3] = &p_922->g_8;
    return (*l_47);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_38(int32_t ** p_39, int32_t * p_40, struct S0 * p_922)
{ /* block id: 281 */
    return &p_922->g_81[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_367 p_922->g_172 p_922->g_19 p_922->g_20 p_922->g_100 p_922->g_5 p_922->g_3 p_922->g_117
 * writes: p_922->g_367 p_922->g_172 p_922->g_81 p_922->g_19 p_922->g_20 p_922->g_117
 */
int32_t ** func_41(int32_t  p_42, int32_t ** p_43, int32_t  p_44, uint8_t  p_45, int16_t  p_46, struct S0 * p_922)
{ /* block id: 251 */
    uint32_t l_597 = 0xB1D90977L;
    VECTOR(uint64_t, 2) l_605 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551607UL);
    int i;
    for (p_922->g_367 = 0; (p_922->g_367 == 8); ++p_922->g_367)
    { /* block id: 254 */
        int32_t *l_584 = &p_922->g_81[0];
        int32_t **l_585 = (void*)0;
        int32_t **l_586 = &p_922->g_172[2][4][1];
        uint64_t *l_588 = &p_922->g_478;
        uint64_t **l_587 = &l_588;
        (*l_586) = l_584;
        atomic_add(&p_922->g_atomic_reduction[get_linear_group_id()], (l_587 == (void*)0));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_922->v_collective += p_922->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        (*l_586) = (*l_586);
        (*l_584) = (-6L);
    }
    for (p_922->g_19 = 5; (p_922->g_19 <= 2); p_922->g_19 = safe_sub_func_uint64_t_u_u(p_922->g_19, 8))
    { /* block id: 262 */
        int32_t *l_591 = &p_922->g_81[0];
        int32_t *l_592 = &p_922->g_81[0];
        int32_t *l_593 = &p_922->g_81[3];
        int32_t *l_594 = (void*)0;
        int32_t *l_595 = &p_922->g_81[0];
        int32_t *l_596[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(uint16_t, 8) l_611 = (VECTOR(uint16_t, 8))(0x9832L, (VECTOR(uint16_t, 4))(0x9832L, (VECTOR(uint16_t, 2))(0x9832L, 0x26E7L), 0x26E7L), 0x26E7L, 0x9832L, 0x26E7L);
        uint32_t l_614 = 6UL;
        int i;
        ++l_597;
        for (p_922->g_20 = 0; (p_922->g_20 >= 30); ++p_922->g_20)
        { /* block id: 266 */
            int32_t **l_602[2];
            int i;
            for (i = 0; i < 2; i++)
                l_602[i] = &l_596[0];
            p_922->g_172[3][7][3] = (void*)0;
            if ((safe_add_func_uint64_t_u_u(p_922->g_100.y, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_605.yx)))).lo)))
            { /* block id: 268 */
                if ((**p_43))
                    break;
            }
            else
            { /* block id: 270 */
                VECTOR(uint16_t, 4) l_610 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xC9C8L), 0xC9C8L);
                int i;
                for (p_922->g_117 = 0; (p_922->g_117 != 15); p_922->g_117++)
                { /* block id: 273 */
                    uint16_t *l_612 = (void*)0;
                    uint16_t *l_613[7][7][1];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_613[i][j][k] = (void*)0;
                        }
                    }
                    l_614 ^= (safe_add_func_uint16_t_u_u(((*l_593) = ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(l_610.yw)).xxyy, ((VECTOR(uint16_t, 4))(l_611.s2644))))).hi)).hi), 0x8365L));
                }
            }
        }
    }
    return &p_922->g_172[0][4][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_218 p_922->g_574 p_922->g_232 p_922->g_367 p_922->g_577 p_922->g_382
 * writes: p_922->g_124 p_922->g_382
 */
uint8_t  func_48(int32_t * p_49, uint64_t  p_50, uint8_t  p_51, int16_t  p_52, struct S0 * p_922)
{ /* block id: 203 */
    int16_t *l_557 = (void*)0;
    VECTOR(int32_t, 8) l_562 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x2A54D19CL), 0x2A54D19CL), 0x2A54D19CL, 9L, 0x2A54D19CL);
    int32_t **l_565 = &p_922->g_78;
    VECTOR(uint16_t, 4) l_571 = (VECTOR(uint16_t, 4))(0x9838L, (VECTOR(uint16_t, 2))(0x9838L, 3UL), 3UL);
    uint8_t *l_575 = (void*)0;
    uint8_t *l_576[8][3][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_578[7][1][7] = {{{&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3}},{{&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3}},{{&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3}},{{&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3}},{{&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3}},{{&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3}},{{&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3,&p_922->g_3}}};
    int32_t l_579 = 0x2012031DL;
    int i, j, k;
    if ((atomic_inc(&p_922->g_atomic_input[70 * get_linear_group_id() + 64]) == 0))
    { /* block id: 205 */
        int32_t l_481 = (-1L);
        int32_t l_482 = 1L;
        uint8_t l_483 = 248UL;
        l_483++;
        for (l_483 = 0; (l_483 < 57); ++l_483)
        { /* block id: 209 */
            VECTOR(uint64_t, 8) l_488 = (VECTOR(uint64_t, 8))(0x384DE8212DE42F0AL, (VECTOR(uint64_t, 4))(0x384DE8212DE42F0AL, (VECTOR(uint64_t, 2))(0x384DE8212DE42F0AL, 0xE01AB8E4A19302ABL), 0xE01AB8E4A19302ABL), 0xE01AB8E4A19302ABL, 0x384DE8212DE42F0AL, 0xE01AB8E4A19302ABL);
            int64_t l_489 = 0L;
            VECTOR(uint64_t, 8) l_490 = (VECTOR(uint64_t, 8))(0x83A40CFA9FB95CB7L, (VECTOR(uint64_t, 4))(0x83A40CFA9FB95CB7L, (VECTOR(uint64_t, 2))(0x83A40CFA9FB95CB7L, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0x83A40CFA9FB95CB7L, 18446744073709551607UL);
            VECTOR(uint64_t, 2) l_491 = (VECTOR(uint64_t, 2))(0UL, 0x7DE4F1D7D8942D7AL);
            VECTOR(uint64_t, 8) l_492 = (VECTOR(uint64_t, 8))(0x373AD9F3A6D5236CL, (VECTOR(uint64_t, 4))(0x373AD9F3A6D5236CL, (VECTOR(uint64_t, 2))(0x373AD9F3A6D5236CL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0x373AD9F3A6D5236CL, 18446744073709551614UL);
            VECTOR(uint64_t, 16) l_493 = (VECTOR(uint64_t, 16))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551615UL), 18446744073709551614UL, 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL);
            VECTOR(uint64_t, 2) l_494 = (VECTOR(uint64_t, 2))(0xE730FAB00226BF88L, 18446744073709551615UL);
            VECTOR(uint64_t, 4) l_495 = (VECTOR(uint64_t, 4))(0xFC4A941FE208E707L, (VECTOR(uint64_t, 2))(0xFC4A941FE208E707L, 0x93A28B38BB6957D0L), 0x93A28B38BB6957D0L);
            int32_t l_556 = (-4L);
            int i;
            if ((((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))((l_489 |= ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_488.s72367731)))).s0), ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 8))(l_490.s40675244)).s24, ((VECTOR(uint64_t, 4))(l_491.yxxx)).odd, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_492.s00)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551612UL)).xxyyxxyyxyxyyyxx)).s94)), 0xF2D90EBEA0E7CA0EL, ((VECTOR(uint64_t, 2))(l_493.s6c)), 0x4F860D88D6F62AB6L)).s15))).even, 0UL, ((VECTOR(uint64_t, 4))(l_494.yyyy)), 18446744073709551606UL)), ((VECTOR(uint64_t, 4))(l_495.wxzz)).xzwwwxzx))).s2 , 0x2C429852L))
            { /* block id: 211 */
                int32_t l_496 = 1L;
                VECTOR(uint64_t, 2) l_528 = (VECTOR(uint64_t, 2))(1UL, 0UL);
                VECTOR(int8_t, 8) l_529 = (VECTOR(int8_t, 8))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L));
                uint64_t l_530[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_530[i] = 0x747790041C6CAA9CL;
                for (l_496 = 0; (l_496 >= 21); l_496 = safe_add_func_int32_t_s_s(l_496, 7))
                { /* block id: 214 */
                    int64_t l_499[10][7][3] = {{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}},{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}},{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}},{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}},{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}},{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}},{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}},{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}},{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}},{{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL},{0x197053CCE908312DL,0x197053CCE908312DL,0x197053CCE908312DL}}};
                    uint32_t l_500 = 0xEE1E8548L;
                    uint32_t l_501[10];
                    int32_t l_502 = 0x7149474FL;
                    uint16_t l_503 = 0xCD09L;
                    VECTOR(uint64_t, 16) l_504 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x48889BF8CCC5480AL), 0x48889BF8CCC5480AL), 0x48889BF8CCC5480AL, 1UL, 0x48889BF8CCC5480AL, (VECTOR(uint64_t, 2))(1UL, 0x48889BF8CCC5480AL), (VECTOR(uint64_t, 2))(1UL, 0x48889BF8CCC5480AL), 1UL, 0x48889BF8CCC5480AL, 1UL, 0x48889BF8CCC5480AL);
                    int16_t l_505 = (-2L);
                    int8_t l_506 = 0x74L;
                    int16_t l_507 = 0x76C9L;
                    int64_t l_508 = 3L;
                    uint16_t l_509 = 65527UL;
                    uint8_t l_510 = 0xC6L;
                    uint16_t l_511 = 0UL;
                    int8_t l_512 = 1L;
                    int32_t l_514 = 0x12CF1DF7L;
                    int32_t *l_513[4];
                    int32_t *l_515 = &l_514;
                    int32_t *l_516 = &l_514;
                    int32_t *l_517 = &l_514;
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                        l_501[i] = 0xAEBE21A2L;
                    for (i = 0; i < 4; i++)
                        l_513[i] = &l_514;
                    l_515 = (((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))((((VECTOR(uint32_t, 8))((((l_481 = (l_499[4][0][1] , l_500)) , l_501[5]) , 0UL), 1UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 4))(0x2D3C5C40L, 1UL, 0x7E54DB80L, 4UL)).wzwxyxzw, ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 16))((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0xD1E47A8E12A979A2L, 0xF66DC448A4B002FFL)).xxyxyyxy)), ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 8))(18446744073709551609UL, 18446744073709551606UL, ((VECTOR(uint64_t, 4))(l_502, l_503, 1UL, 9UL)), 1UL, 0xECD7F1A0C9179815L)).s57, ((VECTOR(uint64_t, 8))(l_504.s15f8a04f)).s65, ((VECTOR(uint64_t, 8))(l_505, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 4))(0x7949D9DF692B8BC5L, 18446744073709551609UL, 0x023ED0E2C84C1782L, 0xB974648438359B0AL)).lo, ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(0x2CE5AECF7155F745L, (l_492.s4 = (l_493.s3 = (l_506 , l_507))), ((VECTOR(uint64_t, 2))(0x764BBA5F34DEC079L)), l_508, 0x00A122AE4C8AEFF0L, ((VECTOR(uint64_t, 8))(18446744073709551615UL)), 0x71214D2D5AAAB207L, 6UL)).s251f, ((VECTOR(uint64_t, 4))(1UL))))).wxwzwwxx, ((VECTOR(uint64_t, 8))(0x1DA18158E5AABBD8L)), ((VECTOR(uint64_t, 8))(18446744073709551615UL))))), ((VECTOR(uint64_t, 8))(0xB05E7F5F17E16147L))))).s20))).yyxxyxyyyxxyyxyx, ((VECTOR(uint64_t, 16))(1UL))))).s3105)), ((VECTOR(uint64_t, 2))(0x7D5265EF0DF48A74L)), 0xBF9A54F2B03CB595L)).s17))).xxyyyyxx))), ((VECTOR(uint64_t, 8))(0UL)), ((VECTOR(uint64_t, 8))(1UL))))).hi)).z , 0x76FE6D0EL), 6UL, 4294967288UL, 0UL, 4294967291UL, ((VECTOR(uint32_t, 4))(1UL)), FAKE_DIVERGE(p_922->global_1_offset, get_global_id(1), 10), 0xDFA8DDEAL, l_509, 0x6BBC12A4L, l_510, 1UL, 4294967295UL)).s0c, ((VECTOR(uint32_t, 2))(0x0E5080FBL))))).xxxxyyxx))).lo)).lo, ((VECTOR(uint32_t, 2))(0xA9C635A8L))))))), ((VECTOR(uint32_t, 2))(0xF6CAE75EL)), 4294967295UL, 0x99EAD537L)).s1 , l_511), ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 2))(0x2E96L)), 7L, ((VECTOR(int16_t, 4))(1L)), 5L, l_512, (-1L), 1L, 4L, (-6L))).s3caf, ((VECTOR(int16_t, 4))(0x3694L)), ((VECTOR(int16_t, 4))(0L))))).z , l_513[1]);
                    l_517 = l_516;
                    for (l_504.s1 = 0; (l_504.s1 != 35); l_504.s1 = safe_add_func_int64_t_s_s(l_504.s1, 5))
                    { /* block id: 222 */
                        int32_t l_520 = (-1L);
                        int32_t l_521[2];
                        uint8_t l_522 = 252UL;
                        int32_t *l_525 = &l_520;
                        int32_t *l_526 = &l_520;
                        int8_t l_527 = 0x1FL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_521[i] = 0x469E6851L;
                        --l_522;
                        l_515 = l_525;
                        l_513[0] = (l_517 = l_526);
                        (*l_516) = l_527;
                    }
                    l_481 = 0x377BA86CL;
                }
                l_481 ^= ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_528.yxxyxyxxxxyyyxxx)))).s8 , l_529.s0) , l_530[0]);
            }
            else
            { /* block id: 232 */
                VECTOR(uint64_t, 8) l_531 = (VECTOR(uint64_t, 8))(0x10C374B6CC260BA5L, (VECTOR(uint64_t, 4))(0x10C374B6CC260BA5L, (VECTOR(uint64_t, 2))(0x10C374B6CC260BA5L, 0x3F08D369560BFD6BL), 0x3F08D369560BFD6BL), 0x3F08D369560BFD6BL, 0x10C374B6CC260BA5L, 0x3F08D369560BFD6BL);
                VECTOR(uint64_t, 8) l_532 = (VECTOR(uint64_t, 8))(0xE0B8E243164700DEL, (VECTOR(uint64_t, 4))(0xE0B8E243164700DEL, (VECTOR(uint64_t, 2))(0xE0B8E243164700DEL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xE0B8E243164700DEL, 18446744073709551615UL);
                VECTOR(uint64_t, 4) l_533 = (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 1UL), 1UL);
                VECTOR(uint64_t, 16) l_534 = (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x30F80429C9EBDF4EL), 0x30F80429C9EBDF4EL), 0x30F80429C9EBDF4EL, 18446744073709551611UL, 0x30F80429C9EBDF4EL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x30F80429C9EBDF4EL), (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x30F80429C9EBDF4EL), 18446744073709551611UL, 0x30F80429C9EBDF4EL, 18446744073709551611UL, 0x30F80429C9EBDF4EL);
                VECTOR(uint64_t, 8) l_537 = (VECTOR(uint64_t, 8))(0x22C780D6F6A009BEL, (VECTOR(uint64_t, 4))(0x22C780D6F6A009BEL, (VECTOR(uint64_t, 2))(0x22C780D6F6A009BEL, 0x24E24CB15E652F2EL), 0x24E24CB15E652F2EL), 0x24E24CB15E652F2EL, 0x22C780D6F6A009BEL, 0x24E24CB15E652F2EL);
                VECTOR(uint64_t, 2) l_538 = (VECTOR(uint64_t, 2))(0x9C56BE35E7A58B27L, 5UL);
                VECTOR(uint64_t, 4) l_539 = (VECTOR(uint64_t, 4))(0xE0E0AFF05F6007E7L, (VECTOR(uint64_t, 2))(0xE0E0AFF05F6007E7L, 0UL), 0UL);
                int16_t l_540 = 0L;
                uint64_t l_541 = 0xE7DC87D87F18C2F9L;
                uint32_t l_542 = 3UL;
                VECTOR(int32_t, 2) l_543 = (VECTOR(int32_t, 2))(0x337CE6B0L, 5L);
                VECTOR(int32_t, 4) l_544 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                int32_t l_545 = 0x5C2CF7CAL;
                int16_t l_546 = 0x44C2L;
                uint8_t l_547 = 0x62L;
                int64_t l_548[9] = {0x5F5A3B9A3872E544L,0x5F5A3B9A3872E544L,0x5F5A3B9A3872E544L,0x5F5A3B9A3872E544L,0x5F5A3B9A3872E544L,0x5F5A3B9A3872E544L,0x5F5A3B9A3872E544L,0x5F5A3B9A3872E544L,0x5F5A3B9A3872E544L};
                int32_t l_549 = 1L;
                uint8_t l_550 = 0xF1L;
                uint8_t l_551 = 1UL;
                uint16_t l_552[6][6] = {{0x1AF0L,0x1AF0L,0x7225L,0x98A1L,7UL,0x98A1L},{0x1AF0L,0x1AF0L,0x7225L,0x98A1L,7UL,0x98A1L},{0x1AF0L,0x1AF0L,0x7225L,0x98A1L,7UL,0x98A1L},{0x1AF0L,0x1AF0L,0x7225L,0x98A1L,7UL,0x98A1L},{0x1AF0L,0x1AF0L,0x7225L,0x98A1L,7UL,0x98A1L},{0x1AF0L,0x1AF0L,0x7225L,0x98A1L,7UL,0x98A1L}};
                int8_t l_553 = 0x61L;
                int16_t l_554 = 0x66DDL;
                int32_t l_555 = 0x6E78750FL;
                int i, j;
                l_555 &= (((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_531.s50361714)).even)).xzzxwwxx)).even))), ((VECTOR(uint64_t, 8))(l_532.s12015766)).lo, ((VECTOR(uint64_t, 4))(0x1784BC2636526992L, GROUP_DIVERGE(1, 1), 18446744073709551615UL, 0xE1EB0B95BC09765CL))))).wwwyzywx, ((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 2))(0x881871DF659FE69BL, 0xDF7AA1C706AB7298L)).yyxyyxxx, ((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_533.zzzwzyyw)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_534.s7bba)))).z, ((VECTOR(uint64_t, 2))(0xB20290C4B139BACCL, 18446744073709551615UL)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))((l_488.s6++), ((VECTOR(uint64_t, 2))(7UL, 0x3416364FFA110F6EL)), 1UL)).yzxyzzzwzxwxxxwx)).s9b, ((VECTOR(uint64_t, 2))(l_537.s04))))), 0x2135F2D9247131E0L, 0x88D4E1704A87A932L)))).sb0, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL)), 5UL, 0x6285CAC5F3F46ABCL, ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 8))(l_538.yyxyxyyx)).s7763730137730441, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 16))(l_539.yyxyxyzwzzwzzxxz)).s62f4, ((VECTOR(uint64_t, 8))(18446744073709551610UL, 1UL, 0UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_540, (l_495.w = ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0L, 0x7501E10A44E6B3CEL, 0x34A59498C6CCEF97L, 0x0FD66848271095A8L, (-8L), (l_541 , 1L), 0x7780DE5A271C4F8FL, (-2L))).hi)), (GROUP_DIVERGE(1, 1) , ((l_542 , 4294967295UL) , (((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(l_543.xyyx)), ((VECTOR(int32_t, 2))(l_544.wz)).yxyy))).x , (l_489 = l_545)))), 0x74352080ABD556D9L, (-1L), l_546, 6L, (-8L), (-1L), l_547, 9L, l_548[4], (-1L), 0L)).s89)).yxyyxxxyxyyyxxyx, ((VECTOR(int64_t, 16))(0x1E280FC81D76CEF9L))))).sae, ((VECTOR(int64_t, 2))(0x0134C2C94060FBA2L))))), 18446744073709551607UL, 0x5C45D5FC6C653551L, 9UL, 0xBEB499B8F0FC349FL, 1UL, 0xC344E28FAC365C92L, 0x603E85C732DEDE17L, ((VECTOR(uint64_t, 4))(2UL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0UL)).lo)).odd)), l_549, 1UL, l_550, 0xA6F06A1BACA4CB82L, ((VECTOR(uint64_t, 8))(5UL)))))).sff)).lo), l_551, l_552[5][5], ((VECTOR(uint64_t, 2))(0xB532A35B657DEF82L)), 0xF3863B2BA8AFDA53L, 0xF534720BB50FBDE9L)).s55)).yyxy)), 0UL)).even, ((VECTOR(uint64_t, 4))(0x1B7F0B2F821117E0L))))))))).xyywxzzwxzxxxxyy))).s330b, ((VECTOR(uint64_t, 4))(18446744073709551615UL))))).lo)).yyyx, ((VECTOR(uint64_t, 4))(0xA68C551D13A18243L)), ((VECTOR(uint64_t, 4))(1UL))))))).s75))), 18446744073709551611UL, 0x6082B1CD1F6C153EL)), l_553, 8UL, 0x756131D1FB8BB39BL, 18446744073709551615UL)).even))).xywzwwyy)))))).s1 , l_554);
            }
            l_481 = l_556;
        }
        unsigned int result = 0;
        result += l_481;
        result += l_482;
        result += l_483;
        atomic_add(&p_922->g_special_values[70 * get_linear_group_id() + 64], result);
    }
    else
    { /* block id: 240 */
        (1 + 1);
    }
    l_579 ^= (l_557 == (((p_922->g_124.w = (safe_rshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((((((0x6375BD8EL | ((VECTOR(int32_t, 2))(l_562.s40)).hi) & (safe_rshift_func_uint16_t_u_u((l_565 != (void*)0), ((((0x87CF69EDL >= ((safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_571.wy)), 65535UL, 0UL)).x ^ (safe_mul_func_int8_t_s_s(0L, p_51))), (p_922->g_218.x , ((VECTOR(int16_t, 4))(p_922->g_574.s7551)).z))))) < p_51)) <= l_562.s6) | l_571.y) <= (-1L))))) >= 0x39E2L) , p_922->g_232.w) && 0xFB21B168L), 0x5FL)) > p_51) <= p_51), l_562.s7))) ^ p_922->g_367) , p_922->g_577));
    for (p_922->g_382 = 0; (p_922->g_382 == 38); p_922->g_382 = safe_add_func_uint16_t_u_u(p_922->g_382, 7))
    { /* block id: 247 */
        l_578[0][0][6] = p_49;
    }
    return p_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_comm_values p_922->g_3 p_922->g_30 p_922->g_8 p_922->l_comm_values p_922->g_19 p_922->g_95 p_922->g_100 p_922->g_110 p_922->g_81 p_922->g_117 p_922->g_124 p_922->g_74 p_922->g_20 p_922->g_5 p_922->g_186 p_922->g_171 p_922->g_218 p_922->g_227 p_922->g_232 p_922->g_207 p_922->g_172 p_922->g_289 p_922->g_364 p_922->g_367 p_922->g_368 p_922->g_374 p_922->g_382 p_922->g_451 p_922->g_455 p_922->g_396
 * writes: p_922->g_78 p_922->g_19 p_922->g_95 p_922->g_100 p_922->g_117 p_922->g_81 p_922->g_171 p_922->g_20 p_922->g_207 p_922->g_172 p_922->g_74 p_922->g_186 p_922->g_364 p_922->g_367 p_922->g_382 p_922->g_396 p_922->g_472
 */
uint64_t  func_53(int32_t * p_54, struct S0 * p_922)
{ /* block id: 17 */
    uint64_t l_55[5];
    int32_t *l_73 = &p_922->g_74;
    int32_t **l_75 = (void*)0;
    int32_t **l_76 = &l_73;
    int32_t **l_77[3];
    uint16_t *l_79 = &p_922->g_19;
    int32_t **l_135 = &p_922->g_5[0][2][2];
    int32_t l_143 = 0x3E18B63CL;
    int32_t l_165[3][4] = {{0x5D524B97L,0x2AB04943L,0x5D524B97L,0x5D524B97L},{0x5D524B97L,0x2AB04943L,0x5D524B97L,0x5D524B97L},{0x5D524B97L,0x2AB04943L,0x5D524B97L,0x5D524B97L}};
    int16_t l_197 = 4L;
    int16_t l_246 = 0x3BDAL;
    VECTOR(int32_t, 2) l_309 = (VECTOR(int32_t, 2))(0x7B709EF9L, 1L);
    uint32_t l_316[4] = {1UL,1UL,1UL,1UL};
    VECTOR(int32_t, 2) l_356 = (VECTOR(int32_t, 2))(1L, (-1L));
    int32_t *l_357 = &l_165[1][3];
    int32_t *l_375 = (void*)0;
    int32_t *l_376 = &p_922->g_81[0];
    int32_t *l_377 = (void*)0;
    int32_t *l_378 = &l_165[1][3];
    int32_t *l_379 = (void*)0;
    int32_t *l_380[8][6][5] = {{{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143}},{{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143}},{{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143}},{{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143}},{{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143}},{{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143}},{{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143}},{{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143},{&l_143,&l_143,&p_922->g_81[1],&p_922->g_81[0],&l_143}}};
    int16_t l_381 = (-1L);
    VECTOR(int8_t, 2) l_393 = (VECTOR(int8_t, 2))(0L, 7L);
    VECTOR(uint8_t, 8) l_421 = (VECTOR(uint8_t, 8))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0x96L), 0x96L), 0x96L, 250UL, 0x96L);
    uint64_t l_434 = 0x57A7F494BFDEA2E0L;
    VECTOR(int32_t, 16) l_450 = (VECTOR(int32_t, 16))(0x1EB681C1L, (VECTOR(int32_t, 4))(0x1EB681C1L, (VECTOR(int32_t, 2))(0x1EB681C1L, 0x6788D69EL), 0x6788D69EL), 0x6788D69EL, 0x1EB681C1L, 0x6788D69EL, (VECTOR(int32_t, 2))(0x1EB681C1L, 0x6788D69EL), (VECTOR(int32_t, 2))(0x1EB681C1L, 0x6788D69EL), 0x1EB681C1L, 0x6788D69EL, 0x1EB681C1L, 0x6788D69EL);
    VECTOR(int32_t, 8) l_470 = (VECTOR(int32_t, 8))(0x5D95B5CBL, (VECTOR(int32_t, 4))(0x5D95B5CBL, (VECTOR(int32_t, 2))(0x5D95B5CBL, 6L), 6L), 6L, 0x5D95B5CBL, 6L);
    uint8_t **l_471 = (void*)0;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_55[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_77[i] = (void*)0;
    if (((((l_55[3] == l_55[4]) != ((safe_lshift_func_int8_t_s_u(func_58((safe_mul_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((!(safe_lshift_func_uint8_t_u_u(l_55[3], 4))) , 0x0EL), p_922->g_comm_values[p_922->tid])), l_55[4])) || ((((*l_76) = l_73) != (p_922->g_78 = &p_922->g_74)) > (((*p_54) == (-1L)) >= l_55[3]))) ^ 0x09C5L), l_55[3])), &p_922->g_5[0][2][2], l_79, l_55[2], p_922), p_922->g_8)) >= l_55[3])) || p_922->l_comm_values[(safe_mod_func_uint32_t_u_u(p_922->tid, 89))]) , (*p_54)))
    { /* block id: 23 */
        int64_t l_91 = 0x1186C96E7F8E4820L;
        VECTOR(int16_t, 4) l_107 = (VECTOR(int16_t, 4))(0x5943L, (VECTOR(int16_t, 2))(0x5943L, 0x53D1L), 0x53D1L);
        uint16_t *l_111 = &p_922->g_19;
        VECTOR(uint8_t, 2) l_123 = (VECTOR(uint8_t, 2))(0x8FL, 255UL);
        int8_t *l_137 = (void*)0;
        int8_t **l_138 = &l_137;
        VECTOR(int64_t, 2) l_148 = (VECTOR(int64_t, 2))(0x5D43B544FA214550L, 0x2E8BE43F028F5B55L);
        int32_t *l_150 = &p_922->g_81[0];
        int32_t **l_149 = &l_150;
        int32_t l_163[7];
        uint32_t l_166 = 0UL;
        uint64_t l_199 = 0x33238AD5E783D568L;
        VECTOR(uint64_t, 4) l_215 = (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 2UL), 2UL);
        uint64_t l_241 = 0xE5EDCD1CE3DAEFC0L;
        int i;
        for (i = 0; i < 7; i++)
            l_163[i] = (-7L);
        for (p_922->g_19 = 0; (p_922->g_19 != 49); p_922->g_19 = safe_add_func_int64_t_s_s(p_922->g_19, 1))
        { /* block id: 26 */
            int8_t *l_94 = &p_922->g_95;
            int32_t *l_115 = &p_922->g_3;
            int32_t **l_114 = &l_115;
            uint16_t *l_116 = &p_922->g_117;
            int32_t *l_118 = &p_922->g_81[3];
            (*l_118) = (!(l_91 ^ ((safe_add_func_int8_t_s_s(((*l_94) ^= 0x0AL), (safe_sub_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s(p_922->g_19, ((VECTOR(int16_t, 4))((-1L), ((VECTOR(int16_t, 2))((-3L), 0L)), 0L)).w)) ^ ((VECTOR(uint16_t, 16))(p_922->g_100.yxxyxyyyyxxyyxxx)).sc) , ((safe_div_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((((VECTOR(int16_t, 4))(l_107.xwxw)).z < ((safe_lshift_func_uint16_t_u_s(l_91, 8)) || ((VECTOR(uint32_t, 2))(p_922->g_110.s5a)).lo)), ((&p_922->g_74 == (((*l_116) = (((((((p_922->g_100.x = GROUP_DIVERGE(2, 1)) | (l_111 == (void*)0)) < (safe_lshift_func_int8_t_s_s(l_107.y, (((((((*l_114) = p_54) == l_73) <= p_922->g_110.s1) > l_91) , &p_922->g_81[4]) != (void*)0)))) , 18446744073709551606UL) == (-1L)) == (-6L)) , 0x2F9EL)) , p_54)) , l_55[3]))), (-10L))) <= 1L), p_922->l_comm_values[(safe_mod_func_uint32_t_u_u(p_922->tid, 89))])) >= 0x0643L)) != p_922->g_81[4]), p_922->g_8)))) || l_107.w)));
            (*l_118) &= 0x26BB719DL;
        }
        for (p_922->g_117 = (-3); (p_922->g_117 <= 32); p_922->g_117 = safe_add_func_uint8_t_u_u(p_922->g_117, 1))
        { /* block id: 36 */
            VECTOR(uint8_t, 4) l_125 = (VECTOR(uint8_t, 4))(0x61L, (VECTOR(uint8_t, 2))(0x61L, 0xD3L), 0xD3L);
            VECTOR(uint8_t, 16) l_134 = (VECTOR(uint8_t, 16))(0x42L, (VECTOR(uint8_t, 4))(0x42L, (VECTOR(uint8_t, 2))(0x42L, 0xC2L), 0xC2L), 0xC2L, 0x42L, 0xC2L, (VECTOR(uint8_t, 2))(0x42L, 0xC2L), (VECTOR(uint8_t, 2))(0x42L, 0xC2L), 0x42L, 0xC2L, 0x42L, 0xC2L);
            int32_t l_136 = 9L;
            int i;
            l_136 = (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 4))(l_123.yxxx)), ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 4))(p_922->g_124.yywz)).wyyyzyyw, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_125.zw)))), 247UL, 0x8EL)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0UL, 0x15L)), (safe_add_func_int8_t_s_s(l_125.y, ((p_922->g_117 >= (((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((*l_79) &= FAKE_DIVERGE(p_922->global_0_offset, get_global_id(0), 10)) && ((l_125.x ^ (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(1UL, 255UL)).yxxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(l_134.sbd310e1a7f23e452)).even, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))((((void*)0 != &p_922->g_78) < (l_55[2] < (+((((l_125.y , l_55[1]) , &p_54) == l_135) ^ l_134.s9)))), ((VECTOR(uint8_t, 2))(0xF4L)), GROUP_DIVERGE(1, 1), l_134.se, ((VECTOR(uint8_t, 2))(0xD2L)), 250UL)).odd)).wywwzxxx))))).s61)), ((VECTOR(uint8_t, 8))(8UL)), 1UL, 0xDEL, 251UL, ((VECTOR(uint8_t, 2))(0UL)), 0xC2L)).s8bec, ((VECTOR(uint8_t, 4))(0UL))))).y, 4))) , p_922->g_74)), l_134.s8)) <= p_922->g_20), 6)) , l_134.s7) & p_922->g_124.x)) ^ 6L))), ((VECTOR(uint8_t, 2))(0x3AL)), l_134.s6, ((VECTOR(uint8_t, 2))(0xDFL)), ((VECTOR(uint8_t, 4))(0x79L)), p_922->g_19, 0xACL, 0x9AL, 255UL)).even)), 254UL, ((VECTOR(uint8_t, 2))(1UL)), l_123.x, (**l_135), 0UL, 0xA5L, 0xA4L)).sadef))).odd)), GROUP_DIVERGE(0, 1), ((VECTOR(uint8_t, 4))(0x8DL)), FAKE_DIVERGE(p_922->group_2_offset, get_group_id(2), 10), 254UL, p_922->g_124.z, 0xFBL, 0UL, l_134.s6, ((VECTOR(uint8_t, 2))(0x16L)), 0x7EL)).lo, ((VECTOR(uint8_t, 8))(254UL))))), ((VECTOR(uint8_t, 8))(0xCCL))))).odd)).lo))))).yyyx))), ((VECTOR(uint8_t, 8))(0x76L)), 0x05L, ((VECTOR(uint8_t, 2))(0xD6L)), 0xE8L)).saf)).lo, p_922->l_comm_values[(safe_mod_func_uint32_t_u_u(p_922->tid, 89))]));
        }
        if ((((**l_135) ^ ((((*l_138) = l_137) == ((safe_add_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((**l_135), l_143)) >= GROUP_DIVERGE(0, 1)) , 0xA3390C0CL), (safe_mod_func_int16_t_s_s((((VECTOR(uint8_t, 8))(p_922->g_124.z, 0x8EL, 0UL, (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x3DAE7EE4AC108E42L, 0x4357C3C58E251D06L)))).odd < (safe_div_func_int32_t_s_s((*p_54), ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x1919FE58D0190B99L, ((VECTOR(int64_t, 2))(l_148.xx)), 0x4A41B78C417BC724L)).odd)).yxyxyxxy, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))((-9L), 0x268B7DADB20BFAB2L, 0x0F3222122A3D4019L, (((*l_149) = p_54) != &p_922->g_81[2]), 0x650715622FD341E3L, ((VECTOR(int64_t, 2))(0x2D848D3DA17F8C63L)), 1L, ((VECTOR(int64_t, 2))(0x19E5F1C336489111L)), ((VECTOR(int64_t, 2))(1L)), 0x5A0BE5584E04F8DBL, 0L, 0x4619C9193DE181DAL, 0L)).sb69e)).wyxwzzwz))))).hi)).x & p_922->g_74) ^ (**l_135))))), ((VECTOR(uint8_t, 4))(0x1CL)))).s2 <= p_922->g_81[0]), p_922->g_81[0])))) , &p_922->g_95)) != 0x2A2EA11651A26D26L)) == (**l_135)))
        { /* block id: 42 */
            if ((atomic_inc(&p_922->g_atomic_input[70 * get_linear_group_id() + 4]) == 7))
            { /* block id: 44 */
                uint64_t l_151 = 0x173B0BAAB2A123F6L;
                uint16_t l_152[9];
                uint32_t l_153 = 4294967288UL;
                int32_t *l_154 = (void*)0;
                int32_t l_156 = 0x02E326DCL;
                int32_t *l_155 = &l_156;
                int32_t *l_157 = &l_156;
                int i;
                for (i = 0; i < 9; i++)
                    l_152[i] = 1UL;
                l_153 ^= (l_152[5] = l_151);
                l_157 = (l_155 = l_154);
                unsigned int result = 0;
                result += l_151;
                int l_152_i0;
                for (l_152_i0 = 0; l_152_i0 < 9; l_152_i0++) {
                    result += l_152[l_152_i0];
                }
                result += l_153;
                result += l_156;
                atomic_add(&p_922->g_special_values[70 * get_linear_group_id() + 4], result);
            }
            else
            { /* block id: 49 */
                (1 + 1);
            }
        }
        else
        { /* block id: 52 */
            int32_t l_164 = 0x3C9B9D56L;
            int64_t l_191 = 0x7D89EE913CB2BF3DL;
            int32_t l_195 = 0x16D2739AL;
            VECTOR(int8_t, 16) l_224 = (VECTOR(int8_t, 16))(0x7AL, (VECTOR(int8_t, 4))(0x7AL, (VECTOR(int8_t, 2))(0x7AL, (-7L)), (-7L)), (-7L), 0x7AL, (-7L), (VECTOR(int8_t, 2))(0x7AL, (-7L)), (VECTOR(int8_t, 2))(0x7AL, (-7L)), 0x7AL, (-7L), 0x7AL, (-7L));
            uint16_t l_242 = 0xE822L;
            uint8_t *l_243[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int16_t l_244 = 2L;
            int32_t *l_245[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_245[i] = (void*)0;
            for (p_922->g_117 = 12; (p_922->g_117 <= 29); p_922->g_117 = safe_add_func_uint64_t_u_u(p_922->g_117, 7))
            { /* block id: 55 */
                uint8_t l_169 = 1UL;
                int8_t *l_178 = &p_922->g_95;
                int64_t l_181 = 0L;
                int32_t *l_182 = &l_164;
                int32_t l_183 = 0x59470997L;
                int32_t l_196 = 0x7D2365CFL;
                for (l_143 = 1; (l_143 != 8); l_143 = safe_add_func_uint8_t_u_u(l_143, 1))
                { /* block id: 58 */
                    int32_t *l_162[2][2];
                    int32_t **l_170[2][8][9] = {{{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73}},{{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73},{&l_73,(void*)0,&l_73,&l_73,&l_73,(void*)0,&l_73,&p_922->g_78,&l_73}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_162[i][j] = &p_922->g_81[1];
                    }
                    ++l_166;
                    (*l_149) = p_54;
                    if ((l_163[1] &= l_169))
                    { /* block id: 62 */
                        VECTOR(uint8_t, 8) l_177 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x41L), 0x41L), 0x41L, 0UL, 0x41L);
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_922->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 89)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(1UL, ((void*)0 == l_170[0][7][1]), 0UL, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))((((**l_135) <= (((p_922->g_171 = &p_54) == &p_922->g_5[0][0][1]) , ((((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((l_177.s0 == (((((void*)0 == l_178) , ((((safe_rshift_func_uint16_t_u_s(p_922->g_19, 11)) & p_922->g_19) == FAKE_DIVERGE(p_922->global_1_offset, get_global_id(1), 10)) <= 0L)) < (**l_135)) == p_922->g_110.sd)), l_164)), p_922->g_124.z)) , l_177.s4) , p_922->g_30.s0) == l_164))) , l_181), 1UL, 4294967291UL, 0x1CF9FD15L)), ((VECTOR(uint32_t, 2))(0UL)), 0xA79BAE44L, ((VECTOR(uint32_t, 8))(4294967295UL)), 0x64C40407L)).lo, ((VECTOR(uint32_t, 8))(0UL))))), (**l_135), 0x38ED03E1L, ((VECTOR(uint32_t, 2))(4294967287UL)), 0xA974AF1BL)).s99)).xyyx)).x, 10))][(safe_mod_func_uint32_t_u_u(p_922->tid, 89))]));
                    }
                    else
                    { /* block id: 67 */
                        (*l_149) = l_182;
                        (*l_149) = p_54;
                        if (l_164)
                            break;
                    }
                    if (l_183)
                        break;
                }
                for (p_922->g_20 = 0; (p_922->g_20 <= 10); ++p_922->g_20)
                { /* block id: 76 */
                    int16_t l_194 = 1L;
                    int32_t l_198[9] = {0x741E03DBL,9L,0x741E03DBL,0x741E03DBL,9L,0x741E03DBL,0x741E03DBL,9L,0x741E03DBL};
                    VECTOR(uint64_t, 2) l_212 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x4D8D94FF488365C3L);
                    int i;
                    (*l_182) = p_922->g_186[0][0];
                    for (l_181 = 0; (l_181 <= (-8)); l_181--)
                    { /* block id: 80 */
                        return p_922->g_20;
                    }
                    if ((*p_54))
                        break;
                    for (l_169 = 0; (l_169 >= 4); l_169 = safe_add_func_uint32_t_u_u(l_169, 1))
                    { /* block id: 86 */
                        int32_t *l_192 = &l_163[0];
                        int32_t *l_193[2][4];
                        uint64_t *l_206 = &p_922->g_207;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_193[i][j] = (void*)0;
                        }
                        l_199--;
                        if ((*p_54))
                            break;
                        (*l_192) &= ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((*l_206) = p_922->g_186[3][7]) , p_922->g_117), 0x9123L)), ((**l_135) | GROUP_DIVERGE(0, 1)))) == (safe_div_func_int32_t_s_s(((((safe_mod_func_int8_t_s_s(((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_212.yxyyyyxxyxxyxxxx)).sbc)).hi || (((((safe_add_func_uint8_t_u_u((((*l_76) = p_54) == (void*)0), l_215.x)) , (((((*p_54) & (&p_922->g_74 != p_54)) , p_54) != p_54) || 4294967291UL)) | (*p_54)) && 9L) <= p_922->g_100.y)) , p_922->g_186[1][4]), 9UL)) && 0UL) , (*l_182)) ^ 8L), (*p_54))));
                        if (l_164)
                            continue;
                    }
                }
            }
            (*p_922->g_171) = (void*)0;
            l_246 &= ((((VECTOR(int32_t, 2))(0x5AB48509L, 0L)).lo , (((safe_mul_func_int16_t_s_s((l_191 ^ ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_922->g_218.ywwxwzwz)).s6113310047532407)).s3), (FAKE_DIVERGE(p_922->local_0_offset, get_local_id(0), 10) , ((safe_unary_minus_func_uint8_t_u((l_244 = (safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s(l_191, (((((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(0x66L, 1L)), ((VECTOR(int8_t, 8))(l_224.s28e239a3)).s27, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0L, 0L)).xxyxyyxx)).s33))).lo & l_195) || (safe_rshift_func_uint8_t_u_u(((0x01L && ((FAKE_DIVERGE(p_922->local_1_offset, get_local_id(1), 10) , p_922->g_227) == (void*)0)) , (safe_sub_func_int16_t_s_s(((((VECTOR(uint32_t, 8))(p_922->g_232.yxxyyzxy)).s3 | ((((safe_mod_func_uint8_t_u_u(((*l_150) ^ (safe_sub_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((((0x6C0DD6E7L | (safe_add_func_int64_t_s_s(((((0x64L & GROUP_DIVERGE(1, 1)) & p_922->g_30.s2) | (**l_135)) & p_922->g_207), p_922->g_81[0]))) < l_241) , (*l_150)) ^ l_242), 0x72L)) >= (*l_150)) , (**l_135)), 0UL))), (*l_150))) || 0UL) && p_922->g_8) | l_224.s8)) <= p_922->g_232.y), 0xEBD8L))), (**l_149)))) | (**l_135)))), 2L))))) != (**l_149))))) && 0xCEB3L) && (*l_150))) != p_922->g_74);
        }
        l_163[6] &= 0x34EED16CL;
    }
    else
    { /* block id: 101 */
        VECTOR(int32_t, 2) l_277 = (VECTOR(int32_t, 2))(0L, 0x32179A88L);
        uint32_t l_286[5][2][5] = {{{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL},{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL}},{{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL},{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL}},{{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL},{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL}},{{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL},{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL}},{{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL},{6UL,0x22E33924L,4294967287UL,0x22E33924L,6UL}}};
        uint16_t *l_301 = &p_922->g_117;
        VECTOR(int32_t, 8) l_308 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
        int32_t *l_322 = &p_922->g_81[3];
        uint8_t *l_330 = (void*)0;
        VECTOR(uint8_t, 2) l_355 = (VECTOR(uint8_t, 2))(0xD7L, 0x93L);
        VECTOR(int32_t, 4) l_365 = (VECTOR(int32_t, 4))(0x74D7C293L, (VECTOR(int32_t, 2))(0x74D7C293L, (-1L)), (-1L));
        int i, j, k;
        for (l_143 = 0; (l_143 == 15); l_143 = safe_add_func_int32_t_s_s(l_143, 8))
        { /* block id: 104 */
            VECTOR(int32_t, 8) l_290 = (VECTOR(int32_t, 8))(0x5D9EDA58L, (VECTOR(int32_t, 4))(0x5D9EDA58L, (VECTOR(int32_t, 2))(0x5D9EDA58L, (-2L)), (-2L)), (-2L), 0x5D9EDA58L, (-2L));
            int32_t l_371 = 0x78C17B85L;
            VECTOR(int16_t, 2) l_373 = (VECTOR(int16_t, 2))((-3L), 0x0C34L);
            int i;
            for (p_922->g_74 = 12; (p_922->g_74 == 21); p_922->g_74 = safe_add_func_int16_t_s_s(p_922->g_74, 5))
            { /* block id: 107 */
                VECTOR(int32_t, 2) l_276 = (VECTOR(int32_t, 2))(0x64A434ABL, 1L);
                uint64_t *l_313 = (void*)0;
                int32_t l_352 = 0x7034A2D4L;
                int8_t *l_362 = &p_922->g_95;
                int8_t *l_363[3];
                int16_t *l_366 = (void*)0;
                int16_t *l_369 = &l_197;
                int16_t *l_370[5] = {&l_246,&l_246,&l_246,&l_246,&l_246};
                VECTOR(int16_t, 8) l_372 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6DADL), 0x6DADL), 0x6DADL, 1L, 0x6DADL);
                int i;
                for (i = 0; i < 3; i++)
                    l_363[i] = (void*)0;
                for (p_922->g_207 = 0; (p_922->g_207 <= 26); p_922->g_207++)
                { /* block id: 110 */
                    uint16_t *l_299 = &p_922->g_117;
                    int32_t l_312 = 0x72FD9020L;
                    VECTOR(int64_t, 16) l_333 = (VECTOR(int64_t, 16))(0x2750B496DEB3A4BCL, (VECTOR(int64_t, 4))(0x2750B496DEB3A4BCL, (VECTOR(int64_t, 2))(0x2750B496DEB3A4BCL, 2L), 2L), 2L, 0x2750B496DEB3A4BCL, 2L, (VECTOR(int64_t, 2))(0x2750B496DEB3A4BCL, 2L), (VECTOR(int64_t, 2))(0x2750B496DEB3A4BCL, 2L), 0x2750B496DEB3A4BCL, 2L, 0x2750B496DEB3A4BCL, 2L);
                    int i;
                    if ((atomic_inc(&p_922->l_atomic_input[48]) == 3))
                    { /* block id: 112 */
                        VECTOR(int16_t, 2) l_253 = (VECTOR(int16_t, 2))(0L, 0x6956L);
                        int64_t l_254[10][1][6] = {{{7L,(-1L),1L,(-2L),1L,(-1L)}},{{7L,(-1L),1L,(-2L),1L,(-1L)}},{{7L,(-1L),1L,(-2L),1L,(-1L)}},{{7L,(-1L),1L,(-2L),1L,(-1L)}},{{7L,(-1L),1L,(-2L),1L,(-1L)}},{{7L,(-1L),1L,(-2L),1L,(-1L)}},{{7L,(-1L),1L,(-2L),1L,(-1L)}},{{7L,(-1L),1L,(-2L),1L,(-1L)}},{{7L,(-1L),1L,(-2L),1L,(-1L)}},{{7L,(-1L),1L,(-2L),1L,(-1L)}}};
                        VECTOR(int32_t, 16) l_255 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L), (VECTOR(int32_t, 2))(1L, (-5L)), (VECTOR(int32_t, 2))(1L, (-5L)), 1L, (-5L), 1L, (-5L));
                        VECTOR(int32_t, 8) l_256 = (VECTOR(int32_t, 8))(0x26118C7AL, (VECTOR(int32_t, 4))(0x26118C7AL, (VECTOR(int32_t, 2))(0x26118C7AL, 0x7E235D7CL), 0x7E235D7CL), 0x7E235D7CL, 0x26118C7AL, 0x7E235D7CL);
                        VECTOR(int32_t, 4) l_257 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                        uint8_t l_258 = 252UL;
                        VECTOR(int32_t, 2) l_259 = (VECTOR(int32_t, 2))(0x68A6A471L, 0x7F715E44L);
                        VECTOR(int32_t, 16) l_260 = (VECTOR(int32_t, 16))(0x2AEFFB6EL, (VECTOR(int32_t, 4))(0x2AEFFB6EL, (VECTOR(int32_t, 2))(0x2AEFFB6EL, 8L), 8L), 8L, 0x2AEFFB6EL, 8L, (VECTOR(int32_t, 2))(0x2AEFFB6EL, 8L), (VECTOR(int32_t, 2))(0x2AEFFB6EL, 8L), 0x2AEFFB6EL, 8L, 0x2AEFFB6EL, 8L);
                        VECTOR(int32_t, 8) l_261 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x25A51E6BL), 0x25A51E6BL), 0x25A51E6BL, 1L, 0x25A51E6BL);
                        int8_t l_262 = (-10L);
                        uint32_t l_263 = 1UL;
                        int32_t l_264 = 0x5151C892L;
                        VECTOR(int64_t, 2) l_265 = (VECTOR(int64_t, 2))(1L, 0x4813A64160D235B5L);
                        VECTOR(int32_t, 16) l_266 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-5L)), (-5L)), (-5L), 6L, (-5L), (VECTOR(int32_t, 2))(6L, (-5L)), (VECTOR(int32_t, 2))(6L, (-5L)), 6L, (-5L), 6L, (-5L));
                        uint64_t l_267 = 0xEF5FA5D4976ADAB5L;
                        uint32_t l_268 = 0x8FF0CC10L;
                        uint16_t l_269 = 2UL;
                        int32_t l_270 = 6L;
                        uint32_t l_271 = 0UL;
                        int8_t l_272 = 0x2EL;
                        uint32_t l_273 = 1UL;
                        int i, j, k;
                        l_272 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(4L, (-5L))), 0x708C032CL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(0x674092C0L, ((VECTOR(int32_t, 2))(0x283FA32EL, 0x06014620L)), 0x3238A842L)).zxwyyxxxxzyxwwyx, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 8))(l_253.yyyxxxyy)).s0361337655676551, (int16_t)l_254[4][0][3]))).s52, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0UL, 0xC0F8L)))).xxxxyxyyxxyyyxyy)).s8f))))), 0x09A33DC6L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(l_255.s1d92e10f9213a395)).s39, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(l_256.s6001)).wyxyzzzwzxwxyxzw, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 5L)).yxyy)).ywzwxywzwzxxyzww))).sa7))), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_257.xz)).yyyyxxxyyxyyyyyy)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_258, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_259.xxyxyyxy)), ((VECTOR(int32_t, 16))(9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_260.s8f519cf447d91602)).sf6)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x18C4C04CL, (-1L))))), 0x61E3A921L, ((VECTOR(int32_t, 8))(l_261.s57777346)), 1L, 0L)).hi))), (l_262 , (l_270 |= (l_263 , (l_269 = (l_264 , (l_268 = (((VECTOR(int64_t, 16))(0x1D4D9E788E5EA57CL, 0L, ((VECTOR(int64_t, 4))(l_265.yxxx)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(l_266.sa1)).xxxyyyxx, (int32_t)l_267, (int32_t)0x1A58AE6FL))).s7156407433417667, ((VECTOR(uint32_t, 16))(0x388EDDE4L))))).s8f)).even, ((VECTOR(int64_t, 2))(1L)), 0x2043C2FE3EEE2655L)).x, ((VECTOR(int64_t, 2))(0x5CBDD68C78E4076FL)), ((VECTOR(int64_t, 4))(0x606EB438649BACB7L)), ((VECTOR(int64_t, 2))(1L)), 0x66BD37AEF03B199EL)).se , 0x7074C7D2L))))))), 2L, (-1L), 6L, ((VECTOR(int32_t, 2))(0x3475F304L)), 0x12CDDA06L)).s2437, ((VECTOR(int32_t, 4))(0x6C9369D8L))))).yyyywxzzwwwyzxwx, ((VECTOR(int32_t, 16))(0x68A4B41EL)), ((VECTOR(int32_t, 16))((-5L))))))))).hi, ((VECTOR(int32_t, 8))(0L))))))).s31, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0L))))), 0x06F58921L)).lo)), ((VECTOR(int32_t, 4))(3L)), ((VECTOR(int32_t, 4))(0x7D0F74CCL))))).wyxyzzxyzwzxxxzx, ((VECTOR(int32_t, 16))(0x3DC0BBEFL)))))))).s1f7b, ((VECTOR(int32_t, 4))((-2L))), ((VECTOR(int32_t, 4))(0x1149AF91L))))).xwywzwww, (int32_t)3L))).hi)), 2L)).s5223616130637145, (int32_t)l_271))).sc7)).even;
                        ++l_273;
                        unsigned int result = 0;
                        result += l_253.y;
                        result += l_253.x;
                        int l_254_i0, l_254_i1, l_254_i2;
                        for (l_254_i0 = 0; l_254_i0 < 10; l_254_i0++) {
                            for (l_254_i1 = 0; l_254_i1 < 1; l_254_i1++) {
                                for (l_254_i2 = 0; l_254_i2 < 6; l_254_i2++) {
                                    result += l_254[l_254_i0][l_254_i1][l_254_i2];
                                }
                            }
                        }
                        result += l_255.sf;
                        result += l_255.se;
                        result += l_255.sd;
                        result += l_255.sc;
                        result += l_255.sb;
                        result += l_255.sa;
                        result += l_255.s9;
                        result += l_255.s8;
                        result += l_255.s7;
                        result += l_255.s6;
                        result += l_255.s5;
                        result += l_255.s4;
                        result += l_255.s3;
                        result += l_255.s2;
                        result += l_255.s1;
                        result += l_255.s0;
                        result += l_256.s7;
                        result += l_256.s6;
                        result += l_256.s5;
                        result += l_256.s4;
                        result += l_256.s3;
                        result += l_256.s2;
                        result += l_256.s1;
                        result += l_256.s0;
                        result += l_257.w;
                        result += l_257.z;
                        result += l_257.y;
                        result += l_257.x;
                        result += l_258;
                        result += l_259.y;
                        result += l_259.x;
                        result += l_260.sf;
                        result += l_260.se;
                        result += l_260.sd;
                        result += l_260.sc;
                        result += l_260.sb;
                        result += l_260.sa;
                        result += l_260.s9;
                        result += l_260.s8;
                        result += l_260.s7;
                        result += l_260.s6;
                        result += l_260.s5;
                        result += l_260.s4;
                        result += l_260.s3;
                        result += l_260.s2;
                        result += l_260.s1;
                        result += l_260.s0;
                        result += l_261.s7;
                        result += l_261.s6;
                        result += l_261.s5;
                        result += l_261.s4;
                        result += l_261.s3;
                        result += l_261.s2;
                        result += l_261.s1;
                        result += l_261.s0;
                        result += l_262;
                        result += l_263;
                        result += l_264;
                        result += l_265.y;
                        result += l_265.x;
                        result += l_266.sf;
                        result += l_266.se;
                        result += l_266.sd;
                        result += l_266.sc;
                        result += l_266.sb;
                        result += l_266.sa;
                        result += l_266.s9;
                        result += l_266.s8;
                        result += l_266.s7;
                        result += l_266.s6;
                        result += l_266.s5;
                        result += l_266.s4;
                        result += l_266.s3;
                        result += l_266.s2;
                        result += l_266.s1;
                        result += l_266.s0;
                        result += l_267;
                        result += l_268;
                        result += l_269;
                        result += l_270;
                        result += l_271;
                        result += l_272;
                        result += l_273;
                        atomic_add(&p_922->l_special_values[48], result);
                    }
                    else
                    { /* block id: 118 */
                        (1 + 1);
                    }
                    if ((*p_54))
                    { /* block id: 121 */
                        int32_t *l_278 = (void*)0;
                        int32_t *l_279 = &l_165[1][3];
                        int32_t *l_280 = (void*)0;
                        int32_t *l_281 = &l_165[2][2];
                        int32_t *l_282 = &l_165[1][3];
                        int32_t *l_283 = &l_165[0][2];
                        int32_t *l_284 = &p_922->g_81[0];
                        int32_t *l_285[1];
                        uint16_t **l_300 = &l_299;
                        uint64_t *l_317 = &p_922->g_20;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_285[i] = &p_922->g_81[0];
                        (*l_279) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_276.yyxyyyxx)).s73, ((VECTOR(int32_t, 16))(l_277.yxyxxyyyyyxyyxxx)).s5d))), 0L, 0x21FC523AL)), ((VECTOR(int32_t, 2))(0x38FDD9DBL, 0x0BB68943L)), 0x685A0F50L, 0x7CCE03AFL)).s2;
                        --l_286[0][0][2];
                        (*l_283) ^= (*p_54);
                        (*l_284) &= (!(((((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(p_922->g_289.yy)), ((VECTOR(int32_t, 2))(l_290.s27))))).odd || (safe_rshift_func_int16_t_s_s(((-3L) == (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((~(safe_div_func_int64_t_s_s((l_312 = ((((*l_300) = l_299) != (l_301 = &p_922->g_117)) <= (safe_lshift_func_uint16_t_u_u(l_276.y, ((safe_div_func_uint32_t_u_u((p_922->g_186[0][6] = (safe_mul_func_int16_t_s_s((((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(0x1E3838C3L, (-1L), (-1L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(3L, (-1L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_308.s4632)))), 9L, 0x0B26008EL)), ((VECTOR(int32_t, 8))(l_309.xxxyyxyy)).s4, (((safe_sub_func_int32_t_s_s(l_312, (l_313 == (void*)0))) == (safe_add_func_int8_t_s_s(p_922->g_232.w, (((*l_317) &= l_316[2]) == l_276.x)))) > p_922->g_124.w), 0x41807CF6L, 3L, 0x2B870243L)), ((VECTOR(int32_t, 16))(0x1C7FB668L)), ((VECTOR(int32_t, 16))(0x1CFADB96L))))), ((VECTOR(int32_t, 16))((-1L)))))).sbdf6)).even, ((VECTOR(int32_t, 2))(0x6B1C4B51L)), ((VECTOR(int32_t, 2))(1L))))).odd && p_922->g_19), 0UL))), (**l_135))) , p_922->g_19))))), l_276.x))) ^ GROUP_DIVERGE(2, 1)), 14)), (*p_54)))), 10))) || (*l_282)) != l_276.x));
                    }
                    else
                    { /* block id: 131 */
                        int32_t *l_321 = &p_922->g_3;
                        int32_t **l_320[1];
                        uint8_t **l_326 = (void*)0;
                        uint8_t **l_327 = &p_922->g_325;
                        uint8_t *l_329 = (void*)0;
                        uint8_t **l_328 = &l_329;
                        VECTOR(int64_t, 2) l_334 = (VECTOR(int64_t, 2))((-9L), 0x00E326D5045420D1L);
                        uint32_t l_351 = 0xF540C17CL;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_320[i] = &l_321;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_922->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 89)), permutations[(safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(p_922->g_117, p_922->g_100.y)), 10))][(safe_mod_func_uint32_t_u_u(p_922->tid, 89))]));
                        l_322 = ((*p_922->g_171) = (void*)0);
                        l_309.y = (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((l_276.y , (safe_lshift_func_int16_t_s_u((((((*l_328) = ((*l_327) = p_922->g_325)) != l_330) > ((safe_mul_func_uint16_t_u_u((~((**l_135) & ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 2))(l_333.saa)).xyyxxxxx, ((VECTOR(int64_t, 16))(l_334.yxxxyyxyxyxyyyxy)).lo)))))).s30)).hi)), (safe_div_func_uint8_t_u_u((l_352 &= (safe_lshift_func_int16_t_s_s(((~(safe_div_func_uint8_t_u_u(((**l_135) >= (((safe_lshift_func_uint16_t_u_u((--(*l_79)), 15)) & ((safe_add_func_uint32_t_u_u(((&p_922->g_20 != &p_922->g_20) , (((((safe_sub_func_uint64_t_u_u(((l_276.x || (6L == l_290.s3)) | l_276.y), l_312)) , l_290.s1) , p_922->g_117) > p_922->g_30.s3) , l_290.s6)), l_351)) <= l_276.y)) != p_922->g_110.s1)), p_922->g_81[4]))) == 4294967286UL), p_922->g_100.y))), p_922->g_218.z)))) == p_922->g_110.s9)) || p_922->g_289.y), 5))), 0x01C6L, 0x2048L, 0x2AEAL, l_276.y, 9UL, ((VECTOR(uint16_t, 8))(0x7014L)), 0xBD2EL, 0xEFB8L)).hi)).s7 >= l_333.s5);
                    }
                    l_290.s5 = ((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(GROUP_DIVERGE(2, 1), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_355.xyyyxyxyxxxxyyyy)).s60)).xyyyxxxxxxyyxxyy)).even)).s6, 0x20L, 0x47L)).z, p_922->g_95)) >= ((VECTOR(int32_t, 16))(l_356.xxxxxyyyyxyyyyxy)).sf);
                    return p_922->g_81[0];
                }
                l_357 = (*p_922->g_171);
                l_276.y = (((safe_div_func_uint8_t_u_u(l_290.s3, (safe_add_func_int32_t_s_s(((*l_322) = (p_922->g_289.x < ((((*l_362) = p_922->g_232.y) < (p_922->g_364.y = 7L)) , (((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_365.yx)).xxxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))((p_922->g_367 = p_922->g_364.w), p_922->g_367, 0x0E9BL, ((VECTOR(int16_t, 2))(1L, 0x7E87L)), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))((l_371 ^= ((65532UL <= ((*l_369) = ((VECTOR(int16_t, 16))(p_922->g_368.s4360076173664174)).sc)) , 0x1D5BL)), ((VECTOR(int16_t, 4))((-1L), ((VECTOR(int16_t, 2))(l_372.s44)), 3L)), ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((-1L), 0x34B9L, 1L, 0x4014L)).yyywzzwxzzzyxxxy)).sdac5, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(l_373.yyxy)), ((VECTOR(int16_t, 2))((-10L), 0x736DL)).yxxy)))))), ((VECTOR(int16_t, 8))(p_922->g_374.s41071012)).s6, ((VECTOR(int16_t, 4))(((*l_322) , 0x0A7DL), ((VECTOR(int16_t, 2))(0x247CL)), 0x66A1L)), 0x056BL, 0x3A70L)).s7f, ((VECTOR(int16_t, 2))(0L))))), 0x24ACL)).s3730420267527462))).s44)).yxxx, ((VECTOR(uint16_t, 4))(65528UL))))), 1L, 0x32677C69L, (-9L), ((VECTOR(int32_t, 2))(4L)), l_373.y, ((VECTOR(int32_t, 2))(0x0E5574AFL)), 0x418D5C49L, 8L, 1L, 1L)).s3251))).w >= (*p_54))))), FAKE_DIVERGE(p_922->local_1_offset, get_local_id(1), 10))))) || p_922->g_117) == GROUP_DIVERGE(1, 1));
            }
            return p_922->g_comm_values[p_922->tid];
        }
    }
    --p_922->g_382;
    for (l_381 = (-5); (l_381 < 28); l_381++)
    { /* block id: 161 */
        VECTOR(int8_t, 16) l_391 = (VECTOR(int8_t, 16))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 4L), 4L), 4L, 0x5EL, 4L, (VECTOR(int8_t, 2))(0x5EL, 4L), (VECTOR(int8_t, 2))(0x5EL, 4L), 0x5EL, 4L, 0x5EL, 4L);
        VECTOR(int8_t, 4) l_394 = (VECTOR(int8_t, 4))(0x3FL, (VECTOR(int8_t, 2))(0x3FL, 0L), 0L);
        VECTOR(int8_t, 4) l_395 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L);
        VECTOR(int8_t, 2) l_397 = (VECTOR(int8_t, 2))(9L, (-4L));
        VECTOR(uint32_t, 8) l_424 = (VECTOR(uint32_t, 8))(0xFB95E0CDL, (VECTOR(uint32_t, 4))(0xFB95E0CDL, (VECTOR(uint32_t, 2))(0xFB95E0CDL, 1UL), 1UL), 1UL, 0xFB95E0CDL, 1UL);
        int32_t l_436 = 0x5E0123DBL;
        int32_t l_454 = 0x704AC2E8L;
        VECTOR(int32_t, 8) l_456 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x74430670L), 0x74430670L), 0x74430670L, (-1L), 0x74430670L);
        int8_t *l_459 = (void*)0;
        int8_t *l_460 = (void*)0;
        int8_t *l_461 = (void*)0;
        int8_t *l_462 = (void*)0;
        int8_t *l_463[3][8][4] = {{{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0}},{{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0}},{{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0},{(void*)0,&p_922->g_95,(void*)0,(void*)0}}};
        int i, j, k;
        for (p_922->g_382 = 0; (p_922->g_382 <= 41); p_922->g_382 = safe_add_func_uint16_t_u_u(p_922->g_382, 1))
        { /* block id: 164 */
            int64_t l_406 = (-1L);
            uint64_t *l_420[10][10] = {{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]},{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]},{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]},{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]},{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]},{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]},{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]},{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]},{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]},{&l_55[2],(void*)0,&l_55[4],&p_922->g_382,&p_922->g_382,&p_922->g_20,&l_55[3],&p_922->g_382,&l_55[3],&l_55[3]}};
            uint32_t *l_427 = (void*)0;
            uint32_t *l_428 = (void*)0;
            uint32_t *l_429 = (void*)0;
            uint32_t *l_430 = (void*)0;
            uint32_t *l_431 = (void*)0;
            uint32_t *l_432[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_433 = (-7L);
            int16_t *l_435[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            uint16_t *l_437 = &p_922->g_117;
            int32_t *l_438 = (void*)0;
            uint8_t **l_440 = &p_922->g_325;
            uint8_t ***l_439 = &l_440;
            int i, j;
            if (((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(l_391.sa54b0473f61d338b)).se94f, ((VECTOR(int8_t, 2))((-9L), 0x79L)).yyyx))).yyxwyyzyxzxwyxxz)).s5a)), (-1L), 0x02L)).odd, ((VECTOR(int8_t, 2))(p_922->g_392.yz))))), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(0x51L, ((VECTOR(int8_t, 2))(l_393.yx)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_394.xw)).xyxxxxxx)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_395.zxywzzzzwzxxywww)))).s81)), ((VECTOR(int8_t, 2))(p_922->g_396.s63)), (-1L))).sa8, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_397.yx)).yxyy)), ((VECTOR(int8_t, 8))(0x0FL, 0L, (safe_mul_func_uint16_t_u_u(((*l_437) ^= (p_922->g_20 || (safe_lshift_func_int16_t_s_s(p_922->l_comm_values[(safe_mod_func_uint32_t_u_u(p_922->tid, 89))], (safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_922->local_1_offset, get_local_id(1), 10), (safe_mod_func_int64_t_s_s(l_406, (safe_rshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((p_922->g_124.y >= (l_436 = ((((((l_434 ^= (((((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((((*l_79) ^= ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_922->g_419.yy)))).even) ^ ((l_421.s7 &= 18446744073709551609UL) && l_394.x)), p_922->g_186[0][0])) >= (((safe_mod_func_uint8_t_u_u(((((l_433 |= ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(l_424.s5417510442734075)).s97f1))))).even, (uint32_t)((((((*l_378) = ((safe_lshift_func_int16_t_s_u(l_406, (GROUP_DIVERGE(1, 1) > l_406))) != GROUP_DIVERGE(1, 1))) , 0x163D11666C8A14AFL) , 0xBC01726BL) , l_406) != 0x69CE8C6EL)))).lo) , 0x671F2BB0L) | 0x2AF3694CL) > 0x224136BEL), 6L)) , 1L) | 0x3B2F1984L)), FAKE_DIVERGE(p_922->group_2_offset, get_group_id(2), 10))) <= GROUP_DIVERGE(0, 1)) <= (*l_376)), 4)) > p_922->g_124.z) || 0x79C91D0EL) || p_922->g_186[0][0]) < p_922->g_124.y)) , p_922->g_368.s2) , 6L) > 0x5541766392DA13B4L) , p_922->g_289.x) , 0x0B09L))), 18446744073709551611UL)) & p_922->g_110.sd), (-10L))) , l_433) , l_406), (**l_135))))))))))), 65533UL)), ((VECTOR(int8_t, 4))(0x67L)), (-8L))).hi))).hi, ((VECTOR(int8_t, 2))((-1L)))))), 0x04L, 9L, ((VECTOR(int8_t, 8))(0x03L)), 1L, 0x4BL)).hi, ((VECTOR(int8_t, 8))(0x39L))))).s4, l_406)) | (**l_135)))
            { /* block id: 172 */
                return p_922->g_207;
            }
            else
            { /* block id: 174 */
                l_438 = &l_433;
            }
            (*l_439) = &p_922->g_325;
        }
        for (p_922->g_367 = 0; (p_922->g_367 > (-23)); p_922->g_367 = safe_sub_func_int64_t_s_s(p_922->g_367, 8))
        { /* block id: 181 */
            int32_t *l_447 = (void*)0;
            (*p_922->g_171) = (*p_922->g_171);
            for (p_922->g_95 = 5; (p_922->g_95 < (-25)); p_922->g_95 = safe_sub_func_int16_t_s_s(p_922->g_95, 9))
            { /* block id: 185 */
                if ((atomic_inc(&p_922->l_atomic_input[63]) == 2))
                { /* block id: 187 */
                    int32_t l_445 = 0x6705A994L;
                    uint64_t l_446 = 0x7F0D4FA238AC742AL;
                    l_446 = l_445;
                    unsigned int result = 0;
                    result += l_445;
                    result += l_446;
                    atomic_add(&p_922->l_special_values[63], result);
                }
                else
                { /* block id: 189 */
                    (1 + 1);
                }
            }
            l_447 = &l_436;
        }
        (*l_357) = (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_450.s5a)))), (-3L), ((VECTOR(int32_t, 4))(p_922->g_451.s4b95)), (l_454 = (safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_922->local_2_offset, get_local_id(2), 10), GROUP_DIVERGE(0, 1)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(p_922->g_455.sdc7a8503)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_456.s3740)), (safe_lshift_func_uint8_t_u_s(l_394.y, (p_922->g_396.s0 = ((*l_357) ^ p_922->g_396.s7)))), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 1L)))).yyxyyyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x4189A1F5L, (((1L <= ((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(1UL, 0x45L)).even, (*l_378))) == (((safe_sub_func_int32_t_s_s(((((VECTOR(int32_t, 4))(l_470.s4703)).w != (-10L)) , ((*l_376) = ((p_922->g_472 = l_471) == &p_922->g_325))), ((VECTOR(int32_t, 2))((-4L), 0x4FE4D7F0L)).lo)) < p_922->g_368.s0) >= 0x5FL))) , (*l_357)) <= p_922->l_comm_values[(safe_mod_func_uint32_t_u_u(p_922->tid, 89))]), ((VECTOR(int32_t, 8))(0x7D4281A2L)), 0x13CA6FA7L, ((VECTOR(int32_t, 2))((-1L))), 0L, 1L, (-6L))).se49c)).xxxzyzxy))).s13, ((VECTOR(int32_t, 2))(1L))))).xxyyyxyy, ((VECTOR(int32_t, 8))(0x5A2A8F4FL))))).s61, ((VECTOR(int32_t, 2))(0L))))), 0x609189F7L))))).lo)), ((VECTOR(int32_t, 2))(1L)), 0x2D6161D9L, 0x6AA21122L)).se3, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x60AFF6D7L))))).yxxy)))).x, 0x9EEFB5CAL));
    }
    return (**l_135);
}


/* ------------------------------------------ */
/* 
 * reads : p_922->g_30
 * writes:
 */
int8_t  func_58(int16_t  p_59, int32_t ** p_60, uint16_t * p_61, int8_t  p_62, struct S0 * p_922)
{ /* block id: 20 */
    int32_t *l_80 = &p_922->g_81[0];
    int32_t *l_82 = &p_922->g_81[3];
    int32_t *l_83 = &p_922->g_81[0];
    int32_t *l_84[10] = {&p_922->g_3,&p_922->g_8,(void*)0,&p_922->g_8,&p_922->g_3,&p_922->g_3,&p_922->g_8,(void*)0,&p_922->g_8,&p_922->g_3};
    int8_t l_85 = (-1L);
    VECTOR(uint16_t, 2) l_86 = (VECTOR(uint16_t, 2))(0x55A4L, 0xA2B8L);
    int i;
    l_86.x--;
    return p_922->g_30.s7;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_comm_values[i] = 1;
    struct S0 c_923;
    struct S0* p_922 = &c_923;
    struct S0 c_924 = {
        (-1L), // p_922->g_3
        {{{&p_922->g_3,&p_922->g_3,&p_922->g_3},{&p_922->g_3,&p_922->g_3,&p_922->g_3},{&p_922->g_3,&p_922->g_3,&p_922->g_3}}}, // p_922->g_5
        &p_922->g_5[0][0][1], // p_922->g_4
        0L, // p_922->g_8
        7UL, // p_922->g_19
        0x9694D2B5F7919ADBL, // p_922->g_20
        0L, // p_922->g_29
        (VECTOR(int16_t, 8))(0x61EEL, (VECTOR(int16_t, 4))(0x61EEL, (VECTOR(int16_t, 2))(0x61EEL, 0x338EL), 0x338EL), 0x338EL, 0x61EEL, 0x338EL), // p_922->g_30
        0x64D8D955L, // p_922->g_31
        0L, // p_922->g_74
        &p_922->g_74, // p_922->g_78
        {0x4440DB5BL,0x4440DB5BL,0x4440DB5BL,0x4440DB5BL,0x4440DB5BL}, // p_922->g_81
        0x4EL, // p_922->g_95
        (VECTOR(uint16_t, 2))(3UL, 65535UL), // p_922->g_100
        (VECTOR(uint32_t, 16))(0x60CE0BB6L, (VECTOR(uint32_t, 4))(0x60CE0BB6L, (VECTOR(uint32_t, 2))(0x60CE0BB6L, 4294967292UL), 4294967292UL), 4294967292UL, 0x60CE0BB6L, 4294967292UL, (VECTOR(uint32_t, 2))(0x60CE0BB6L, 4294967292UL), (VECTOR(uint32_t, 2))(0x60CE0BB6L, 4294967292UL), 0x60CE0BB6L, 4294967292UL, 0x60CE0BB6L, 4294967292UL), // p_922->g_110
        1UL, // p_922->g_117
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 251UL), 251UL), // p_922->g_124
        {{{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8}},{{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8}},{{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8}},{{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8}},{{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8}},{{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8}},{{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8},{&p_922->g_81[0],&p_922->g_8,(void*)0,&p_922->g_8}}}, // p_922->g_172
        &p_922->g_172[4][3][3], // p_922->g_171
        {{0UL,4294967287UL,0UL,0UL,4294967287UL,0UL,0UL,4294967287UL,0UL},{0UL,4294967287UL,0UL,0UL,4294967287UL,0UL,0UL,4294967287UL,0UL},{0UL,4294967287UL,0UL,0UL,4294967287UL,0UL,0UL,4294967287UL,0UL},{0UL,4294967287UL,0UL,0UL,4294967287UL,0UL,0UL,4294967287UL,0UL}}, // p_922->g_186
        0xA192B8C824B9CF8BL, // p_922->g_207
        (VECTOR(uint8_t, 4))(0xDDL, (VECTOR(uint8_t, 2))(0xDDL, 253UL), 253UL), // p_922->g_218
        0x5FL, // p_922->g_229
        &p_922->g_229, // p_922->g_228
        &p_922->g_228, // p_922->g_227
        (VECTOR(uint32_t, 4))(0x03D3D6E9L, (VECTOR(uint32_t, 2))(0x03D3D6E9L, 0UL), 0UL), // p_922->g_232
        (VECTOR(int32_t, 2))(0x5AB089EFL, 0x42841380L), // p_922->g_289
        (void*)0, // p_922->g_325
        (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, 0x32L), 0x32L), // p_922->g_364
        9L, // p_922->g_367
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1F05L), 0x1F05L), 0x1F05L, (-1L), 0x1F05L), // p_922->g_368
        (VECTOR(int16_t, 8))(0x7368L, (VECTOR(int16_t, 4))(0x7368L, (VECTOR(int16_t, 2))(0x7368L, 0x5DE1L), 0x5DE1L), 0x5DE1L, 0x7368L, 0x5DE1L), // p_922->g_374
        0x982F445A098D6864L, // p_922->g_382
        (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x32L), 0x32L), // p_922->g_392
        (VECTOR(int8_t, 8))(0x76L, (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 5L), 5L), 5L, 0x76L, 5L), // p_922->g_396
        (VECTOR(uint16_t, 4))(0x8DAAL, (VECTOR(uint16_t, 2))(0x8DAAL, 65535UL), 65535UL), // p_922->g_419
        (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 8L), 8L), 8L, 3L, 8L, (VECTOR(int32_t, 2))(3L, 8L), (VECTOR(int32_t, 2))(3L, 8L), 3L, 8L, 3L, 8L), // p_922->g_451
        (VECTOR(int32_t, 16))(0x749ABFA2L, (VECTOR(int32_t, 4))(0x749ABFA2L, (VECTOR(int32_t, 2))(0x749ABFA2L, 0x3327BCD8L), 0x3327BCD8L), 0x3327BCD8L, 0x749ABFA2L, 0x3327BCD8L, (VECTOR(int32_t, 2))(0x749ABFA2L, 0x3327BCD8L), (VECTOR(int32_t, 2))(0x749ABFA2L, 0x3327BCD8L), 0x749ABFA2L, 0x3327BCD8L, 0x749ABFA2L, 0x3327BCD8L), // p_922->g_455
        (void*)0, // p_922->g_472
        0x3D07C3D5770C8B20L, // p_922->g_478
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4934L), 0x4934L), 0x4934L, 0L, 0x4934L), // p_922->g_574
        (void*)0, // p_922->g_577
        0x5A9C095BL, // p_922->g_616
        (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x06L), 0x06L), 0x06L, 6L, 0x06L), // p_922->g_630
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 252UL), 252UL), 252UL, 255UL, 252UL), // p_922->g_686
        (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0x74L), 0x74L), // p_922->g_687
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x31L), 0x31L), // p_922->g_688
        (VECTOR(uint8_t, 2))(0x41L, 246UL), // p_922->g_689
        (VECTOR(int64_t, 2))(0x41EBFAA817B9370CL, 0x36DAB864E0A538C3L), // p_922->g_691
        5UL, // p_922->g_713
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x093D02B5CE75FB07L), 0x093D02B5CE75FB07L), 0x093D02B5CE75FB07L, 18446744073709551615UL, 0x093D02B5CE75FB07L), // p_922->g_733
        (VECTOR(uint64_t, 2))(0x435DEDB9FC66077BL, 0x4EC177026FAAA77FL), // p_922->g_734
        (VECTOR(uint64_t, 8))(0xF2CD2E3C0AE8B460L, (VECTOR(uint64_t, 4))(0xF2CD2E3C0AE8B460L, (VECTOR(uint64_t, 2))(0xF2CD2E3C0AE8B460L, 0UL), 0UL), 0UL, 0xF2CD2E3C0AE8B460L, 0UL), // p_922->g_735
        (VECTOR(uint64_t, 2))(0x57B6A8F906197821L, 0x3E6F307F5A2EC9FDL), // p_922->g_736
        (VECTOR(uint32_t, 4))(0x8CCF7A8FL, (VECTOR(uint32_t, 2))(0x8CCF7A8FL, 4294967289UL), 4294967289UL), // p_922->g_740
        0UL, // p_922->g_753
        &p_922->g_19, // p_922->g_810
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), // p_922->g_831
        (VECTOR(int8_t, 8))(0x3CL, (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 0L), 0L), 0L, 0x3CL, 0L), // p_922->g_832
        (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0L), 0L), // p_922->g_833
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x6EL), 0x6EL), 0x6EL, (-1L), 0x6EL, (VECTOR(int8_t, 2))((-1L), 0x6EL), (VECTOR(int8_t, 2))((-1L), 0x6EL), (-1L), 0x6EL, (-1L), 0x6EL), // p_922->g_835
        {0UL,0UL}, // p_922->g_868
        0, // p_922->v_collective
        sequence_input[get_global_id(0)], // p_922->global_0_offset
        sequence_input[get_global_id(1)], // p_922->global_1_offset
        sequence_input[get_global_id(2)], // p_922->global_2_offset
        sequence_input[get_local_id(0)], // p_922->local_0_offset
        sequence_input[get_local_id(1)], // p_922->local_1_offset
        sequence_input[get_local_id(2)], // p_922->local_2_offset
        sequence_input[get_group_id(0)], // p_922->group_0_offset
        sequence_input[get_group_id(1)], // p_922->group_1_offset
        sequence_input[get_group_id(2)], // p_922->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 89)), permutations[0][get_linear_local_id()])), // p_922->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_923 = c_924;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_922);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_922->g_3, "p_922->g_3", print_hash_value);
    transparent_crc(p_922->g_8, "p_922->g_8", print_hash_value);
    transparent_crc(p_922->g_19, "p_922->g_19", print_hash_value);
    transparent_crc(p_922->g_20, "p_922->g_20", print_hash_value);
    transparent_crc(p_922->g_29, "p_922->g_29", print_hash_value);
    transparent_crc(p_922->g_30.s0, "p_922->g_30.s0", print_hash_value);
    transparent_crc(p_922->g_30.s1, "p_922->g_30.s1", print_hash_value);
    transparent_crc(p_922->g_30.s2, "p_922->g_30.s2", print_hash_value);
    transparent_crc(p_922->g_30.s3, "p_922->g_30.s3", print_hash_value);
    transparent_crc(p_922->g_30.s4, "p_922->g_30.s4", print_hash_value);
    transparent_crc(p_922->g_30.s5, "p_922->g_30.s5", print_hash_value);
    transparent_crc(p_922->g_30.s6, "p_922->g_30.s6", print_hash_value);
    transparent_crc(p_922->g_30.s7, "p_922->g_30.s7", print_hash_value);
    transparent_crc(p_922->g_31, "p_922->g_31", print_hash_value);
    transparent_crc(p_922->g_74, "p_922->g_74", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_922->g_81[i], "p_922->g_81[i]", print_hash_value);

    }
    transparent_crc(p_922->g_95, "p_922->g_95", print_hash_value);
    transparent_crc(p_922->g_100.x, "p_922->g_100.x", print_hash_value);
    transparent_crc(p_922->g_100.y, "p_922->g_100.y", print_hash_value);
    transparent_crc(p_922->g_110.s0, "p_922->g_110.s0", print_hash_value);
    transparent_crc(p_922->g_110.s1, "p_922->g_110.s1", print_hash_value);
    transparent_crc(p_922->g_110.s2, "p_922->g_110.s2", print_hash_value);
    transparent_crc(p_922->g_110.s3, "p_922->g_110.s3", print_hash_value);
    transparent_crc(p_922->g_110.s4, "p_922->g_110.s4", print_hash_value);
    transparent_crc(p_922->g_110.s5, "p_922->g_110.s5", print_hash_value);
    transparent_crc(p_922->g_110.s6, "p_922->g_110.s6", print_hash_value);
    transparent_crc(p_922->g_110.s7, "p_922->g_110.s7", print_hash_value);
    transparent_crc(p_922->g_110.s8, "p_922->g_110.s8", print_hash_value);
    transparent_crc(p_922->g_110.s9, "p_922->g_110.s9", print_hash_value);
    transparent_crc(p_922->g_110.sa, "p_922->g_110.sa", print_hash_value);
    transparent_crc(p_922->g_110.sb, "p_922->g_110.sb", print_hash_value);
    transparent_crc(p_922->g_110.sc, "p_922->g_110.sc", print_hash_value);
    transparent_crc(p_922->g_110.sd, "p_922->g_110.sd", print_hash_value);
    transparent_crc(p_922->g_110.se, "p_922->g_110.se", print_hash_value);
    transparent_crc(p_922->g_110.sf, "p_922->g_110.sf", print_hash_value);
    transparent_crc(p_922->g_117, "p_922->g_117", print_hash_value);
    transparent_crc(p_922->g_124.x, "p_922->g_124.x", print_hash_value);
    transparent_crc(p_922->g_124.y, "p_922->g_124.y", print_hash_value);
    transparent_crc(p_922->g_124.z, "p_922->g_124.z", print_hash_value);
    transparent_crc(p_922->g_124.w, "p_922->g_124.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_922->g_186[i][j], "p_922->g_186[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_922->g_207, "p_922->g_207", print_hash_value);
    transparent_crc(p_922->g_218.x, "p_922->g_218.x", print_hash_value);
    transparent_crc(p_922->g_218.y, "p_922->g_218.y", print_hash_value);
    transparent_crc(p_922->g_218.z, "p_922->g_218.z", print_hash_value);
    transparent_crc(p_922->g_218.w, "p_922->g_218.w", print_hash_value);
    transparent_crc(p_922->g_229, "p_922->g_229", print_hash_value);
    transparent_crc(p_922->g_232.x, "p_922->g_232.x", print_hash_value);
    transparent_crc(p_922->g_232.y, "p_922->g_232.y", print_hash_value);
    transparent_crc(p_922->g_232.z, "p_922->g_232.z", print_hash_value);
    transparent_crc(p_922->g_232.w, "p_922->g_232.w", print_hash_value);
    transparent_crc(p_922->g_289.x, "p_922->g_289.x", print_hash_value);
    transparent_crc(p_922->g_289.y, "p_922->g_289.y", print_hash_value);
    transparent_crc(p_922->g_364.x, "p_922->g_364.x", print_hash_value);
    transparent_crc(p_922->g_364.y, "p_922->g_364.y", print_hash_value);
    transparent_crc(p_922->g_364.z, "p_922->g_364.z", print_hash_value);
    transparent_crc(p_922->g_364.w, "p_922->g_364.w", print_hash_value);
    transparent_crc(p_922->g_367, "p_922->g_367", print_hash_value);
    transparent_crc(p_922->g_368.s0, "p_922->g_368.s0", print_hash_value);
    transparent_crc(p_922->g_368.s1, "p_922->g_368.s1", print_hash_value);
    transparent_crc(p_922->g_368.s2, "p_922->g_368.s2", print_hash_value);
    transparent_crc(p_922->g_368.s3, "p_922->g_368.s3", print_hash_value);
    transparent_crc(p_922->g_368.s4, "p_922->g_368.s4", print_hash_value);
    transparent_crc(p_922->g_368.s5, "p_922->g_368.s5", print_hash_value);
    transparent_crc(p_922->g_368.s6, "p_922->g_368.s6", print_hash_value);
    transparent_crc(p_922->g_368.s7, "p_922->g_368.s7", print_hash_value);
    transparent_crc(p_922->g_374.s0, "p_922->g_374.s0", print_hash_value);
    transparent_crc(p_922->g_374.s1, "p_922->g_374.s1", print_hash_value);
    transparent_crc(p_922->g_374.s2, "p_922->g_374.s2", print_hash_value);
    transparent_crc(p_922->g_374.s3, "p_922->g_374.s3", print_hash_value);
    transparent_crc(p_922->g_374.s4, "p_922->g_374.s4", print_hash_value);
    transparent_crc(p_922->g_374.s5, "p_922->g_374.s5", print_hash_value);
    transparent_crc(p_922->g_374.s6, "p_922->g_374.s6", print_hash_value);
    transparent_crc(p_922->g_374.s7, "p_922->g_374.s7", print_hash_value);
    transparent_crc(p_922->g_382, "p_922->g_382", print_hash_value);
    transparent_crc(p_922->g_392.x, "p_922->g_392.x", print_hash_value);
    transparent_crc(p_922->g_392.y, "p_922->g_392.y", print_hash_value);
    transparent_crc(p_922->g_392.z, "p_922->g_392.z", print_hash_value);
    transparent_crc(p_922->g_392.w, "p_922->g_392.w", print_hash_value);
    transparent_crc(p_922->g_396.s0, "p_922->g_396.s0", print_hash_value);
    transparent_crc(p_922->g_396.s1, "p_922->g_396.s1", print_hash_value);
    transparent_crc(p_922->g_396.s2, "p_922->g_396.s2", print_hash_value);
    transparent_crc(p_922->g_396.s3, "p_922->g_396.s3", print_hash_value);
    transparent_crc(p_922->g_396.s4, "p_922->g_396.s4", print_hash_value);
    transparent_crc(p_922->g_396.s5, "p_922->g_396.s5", print_hash_value);
    transparent_crc(p_922->g_396.s6, "p_922->g_396.s6", print_hash_value);
    transparent_crc(p_922->g_396.s7, "p_922->g_396.s7", print_hash_value);
    transparent_crc(p_922->g_419.x, "p_922->g_419.x", print_hash_value);
    transparent_crc(p_922->g_419.y, "p_922->g_419.y", print_hash_value);
    transparent_crc(p_922->g_419.z, "p_922->g_419.z", print_hash_value);
    transparent_crc(p_922->g_419.w, "p_922->g_419.w", print_hash_value);
    transparent_crc(p_922->g_451.s0, "p_922->g_451.s0", print_hash_value);
    transparent_crc(p_922->g_451.s1, "p_922->g_451.s1", print_hash_value);
    transparent_crc(p_922->g_451.s2, "p_922->g_451.s2", print_hash_value);
    transparent_crc(p_922->g_451.s3, "p_922->g_451.s3", print_hash_value);
    transparent_crc(p_922->g_451.s4, "p_922->g_451.s4", print_hash_value);
    transparent_crc(p_922->g_451.s5, "p_922->g_451.s5", print_hash_value);
    transparent_crc(p_922->g_451.s6, "p_922->g_451.s6", print_hash_value);
    transparent_crc(p_922->g_451.s7, "p_922->g_451.s7", print_hash_value);
    transparent_crc(p_922->g_451.s8, "p_922->g_451.s8", print_hash_value);
    transparent_crc(p_922->g_451.s9, "p_922->g_451.s9", print_hash_value);
    transparent_crc(p_922->g_451.sa, "p_922->g_451.sa", print_hash_value);
    transparent_crc(p_922->g_451.sb, "p_922->g_451.sb", print_hash_value);
    transparent_crc(p_922->g_451.sc, "p_922->g_451.sc", print_hash_value);
    transparent_crc(p_922->g_451.sd, "p_922->g_451.sd", print_hash_value);
    transparent_crc(p_922->g_451.se, "p_922->g_451.se", print_hash_value);
    transparent_crc(p_922->g_451.sf, "p_922->g_451.sf", print_hash_value);
    transparent_crc(p_922->g_455.s0, "p_922->g_455.s0", print_hash_value);
    transparent_crc(p_922->g_455.s1, "p_922->g_455.s1", print_hash_value);
    transparent_crc(p_922->g_455.s2, "p_922->g_455.s2", print_hash_value);
    transparent_crc(p_922->g_455.s3, "p_922->g_455.s3", print_hash_value);
    transparent_crc(p_922->g_455.s4, "p_922->g_455.s4", print_hash_value);
    transparent_crc(p_922->g_455.s5, "p_922->g_455.s5", print_hash_value);
    transparent_crc(p_922->g_455.s6, "p_922->g_455.s6", print_hash_value);
    transparent_crc(p_922->g_455.s7, "p_922->g_455.s7", print_hash_value);
    transparent_crc(p_922->g_455.s8, "p_922->g_455.s8", print_hash_value);
    transparent_crc(p_922->g_455.s9, "p_922->g_455.s9", print_hash_value);
    transparent_crc(p_922->g_455.sa, "p_922->g_455.sa", print_hash_value);
    transparent_crc(p_922->g_455.sb, "p_922->g_455.sb", print_hash_value);
    transparent_crc(p_922->g_455.sc, "p_922->g_455.sc", print_hash_value);
    transparent_crc(p_922->g_455.sd, "p_922->g_455.sd", print_hash_value);
    transparent_crc(p_922->g_455.se, "p_922->g_455.se", print_hash_value);
    transparent_crc(p_922->g_455.sf, "p_922->g_455.sf", print_hash_value);
    transparent_crc(p_922->g_478, "p_922->g_478", print_hash_value);
    transparent_crc(p_922->g_574.s0, "p_922->g_574.s0", print_hash_value);
    transparent_crc(p_922->g_574.s1, "p_922->g_574.s1", print_hash_value);
    transparent_crc(p_922->g_574.s2, "p_922->g_574.s2", print_hash_value);
    transparent_crc(p_922->g_574.s3, "p_922->g_574.s3", print_hash_value);
    transparent_crc(p_922->g_574.s4, "p_922->g_574.s4", print_hash_value);
    transparent_crc(p_922->g_574.s5, "p_922->g_574.s5", print_hash_value);
    transparent_crc(p_922->g_574.s6, "p_922->g_574.s6", print_hash_value);
    transparent_crc(p_922->g_574.s7, "p_922->g_574.s7", print_hash_value);
    transparent_crc(p_922->g_616, "p_922->g_616", print_hash_value);
    transparent_crc(p_922->g_630.s0, "p_922->g_630.s0", print_hash_value);
    transparent_crc(p_922->g_630.s1, "p_922->g_630.s1", print_hash_value);
    transparent_crc(p_922->g_630.s2, "p_922->g_630.s2", print_hash_value);
    transparent_crc(p_922->g_630.s3, "p_922->g_630.s3", print_hash_value);
    transparent_crc(p_922->g_630.s4, "p_922->g_630.s4", print_hash_value);
    transparent_crc(p_922->g_630.s5, "p_922->g_630.s5", print_hash_value);
    transparent_crc(p_922->g_630.s6, "p_922->g_630.s6", print_hash_value);
    transparent_crc(p_922->g_630.s7, "p_922->g_630.s7", print_hash_value);
    transparent_crc(p_922->g_686.s0, "p_922->g_686.s0", print_hash_value);
    transparent_crc(p_922->g_686.s1, "p_922->g_686.s1", print_hash_value);
    transparent_crc(p_922->g_686.s2, "p_922->g_686.s2", print_hash_value);
    transparent_crc(p_922->g_686.s3, "p_922->g_686.s3", print_hash_value);
    transparent_crc(p_922->g_686.s4, "p_922->g_686.s4", print_hash_value);
    transparent_crc(p_922->g_686.s5, "p_922->g_686.s5", print_hash_value);
    transparent_crc(p_922->g_686.s6, "p_922->g_686.s6", print_hash_value);
    transparent_crc(p_922->g_686.s7, "p_922->g_686.s7", print_hash_value);
    transparent_crc(p_922->g_687.x, "p_922->g_687.x", print_hash_value);
    transparent_crc(p_922->g_687.y, "p_922->g_687.y", print_hash_value);
    transparent_crc(p_922->g_687.z, "p_922->g_687.z", print_hash_value);
    transparent_crc(p_922->g_687.w, "p_922->g_687.w", print_hash_value);
    transparent_crc(p_922->g_688.x, "p_922->g_688.x", print_hash_value);
    transparent_crc(p_922->g_688.y, "p_922->g_688.y", print_hash_value);
    transparent_crc(p_922->g_688.z, "p_922->g_688.z", print_hash_value);
    transparent_crc(p_922->g_688.w, "p_922->g_688.w", print_hash_value);
    transparent_crc(p_922->g_689.x, "p_922->g_689.x", print_hash_value);
    transparent_crc(p_922->g_689.y, "p_922->g_689.y", print_hash_value);
    transparent_crc(p_922->g_691.x, "p_922->g_691.x", print_hash_value);
    transparent_crc(p_922->g_691.y, "p_922->g_691.y", print_hash_value);
    transparent_crc(p_922->g_713, "p_922->g_713", print_hash_value);
    transparent_crc(p_922->g_733.s0, "p_922->g_733.s0", print_hash_value);
    transparent_crc(p_922->g_733.s1, "p_922->g_733.s1", print_hash_value);
    transparent_crc(p_922->g_733.s2, "p_922->g_733.s2", print_hash_value);
    transparent_crc(p_922->g_733.s3, "p_922->g_733.s3", print_hash_value);
    transparent_crc(p_922->g_733.s4, "p_922->g_733.s4", print_hash_value);
    transparent_crc(p_922->g_733.s5, "p_922->g_733.s5", print_hash_value);
    transparent_crc(p_922->g_733.s6, "p_922->g_733.s6", print_hash_value);
    transparent_crc(p_922->g_733.s7, "p_922->g_733.s7", print_hash_value);
    transparent_crc(p_922->g_734.x, "p_922->g_734.x", print_hash_value);
    transparent_crc(p_922->g_734.y, "p_922->g_734.y", print_hash_value);
    transparent_crc(p_922->g_735.s0, "p_922->g_735.s0", print_hash_value);
    transparent_crc(p_922->g_735.s1, "p_922->g_735.s1", print_hash_value);
    transparent_crc(p_922->g_735.s2, "p_922->g_735.s2", print_hash_value);
    transparent_crc(p_922->g_735.s3, "p_922->g_735.s3", print_hash_value);
    transparent_crc(p_922->g_735.s4, "p_922->g_735.s4", print_hash_value);
    transparent_crc(p_922->g_735.s5, "p_922->g_735.s5", print_hash_value);
    transparent_crc(p_922->g_735.s6, "p_922->g_735.s6", print_hash_value);
    transparent_crc(p_922->g_735.s7, "p_922->g_735.s7", print_hash_value);
    transparent_crc(p_922->g_736.x, "p_922->g_736.x", print_hash_value);
    transparent_crc(p_922->g_736.y, "p_922->g_736.y", print_hash_value);
    transparent_crc(p_922->g_740.x, "p_922->g_740.x", print_hash_value);
    transparent_crc(p_922->g_740.y, "p_922->g_740.y", print_hash_value);
    transparent_crc(p_922->g_740.z, "p_922->g_740.z", print_hash_value);
    transparent_crc(p_922->g_740.w, "p_922->g_740.w", print_hash_value);
    transparent_crc(p_922->g_753, "p_922->g_753", print_hash_value);
    transparent_crc(p_922->g_831.x, "p_922->g_831.x", print_hash_value);
    transparent_crc(p_922->g_831.y, "p_922->g_831.y", print_hash_value);
    transparent_crc(p_922->g_831.z, "p_922->g_831.z", print_hash_value);
    transparent_crc(p_922->g_831.w, "p_922->g_831.w", print_hash_value);
    transparent_crc(p_922->g_832.s0, "p_922->g_832.s0", print_hash_value);
    transparent_crc(p_922->g_832.s1, "p_922->g_832.s1", print_hash_value);
    transparent_crc(p_922->g_832.s2, "p_922->g_832.s2", print_hash_value);
    transparent_crc(p_922->g_832.s3, "p_922->g_832.s3", print_hash_value);
    transparent_crc(p_922->g_832.s4, "p_922->g_832.s4", print_hash_value);
    transparent_crc(p_922->g_832.s5, "p_922->g_832.s5", print_hash_value);
    transparent_crc(p_922->g_832.s6, "p_922->g_832.s6", print_hash_value);
    transparent_crc(p_922->g_832.s7, "p_922->g_832.s7", print_hash_value);
    transparent_crc(p_922->g_833.x, "p_922->g_833.x", print_hash_value);
    transparent_crc(p_922->g_833.y, "p_922->g_833.y", print_hash_value);
    transparent_crc(p_922->g_833.z, "p_922->g_833.z", print_hash_value);
    transparent_crc(p_922->g_833.w, "p_922->g_833.w", print_hash_value);
    transparent_crc(p_922->g_835.s0, "p_922->g_835.s0", print_hash_value);
    transparent_crc(p_922->g_835.s1, "p_922->g_835.s1", print_hash_value);
    transparent_crc(p_922->g_835.s2, "p_922->g_835.s2", print_hash_value);
    transparent_crc(p_922->g_835.s3, "p_922->g_835.s3", print_hash_value);
    transparent_crc(p_922->g_835.s4, "p_922->g_835.s4", print_hash_value);
    transparent_crc(p_922->g_835.s5, "p_922->g_835.s5", print_hash_value);
    transparent_crc(p_922->g_835.s6, "p_922->g_835.s6", print_hash_value);
    transparent_crc(p_922->g_835.s7, "p_922->g_835.s7", print_hash_value);
    transparent_crc(p_922->g_835.s8, "p_922->g_835.s8", print_hash_value);
    transparent_crc(p_922->g_835.s9, "p_922->g_835.s9", print_hash_value);
    transparent_crc(p_922->g_835.sa, "p_922->g_835.sa", print_hash_value);
    transparent_crc(p_922->g_835.sb, "p_922->g_835.sb", print_hash_value);
    transparent_crc(p_922->g_835.sc, "p_922->g_835.sc", print_hash_value);
    transparent_crc(p_922->g_835.sd, "p_922->g_835.sd", print_hash_value);
    transparent_crc(p_922->g_835.se, "p_922->g_835.se", print_hash_value);
    transparent_crc(p_922->g_835.sf, "p_922->g_835.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_922->g_868[i], "p_922->g_868[i]", print_hash_value);

    }
    transparent_crc(p_922->v_collective, "p_922->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 70; i++)
            transparent_crc(p_922->g_special_values[i + 70 * get_linear_group_id()], "p_922->g_special_values[i + 70 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 70; i++)
            transparent_crc(p_922->l_special_values[i], "p_922->l_special_values[i]", print_hash_value);
    transparent_crc(p_922->l_comm_values[get_linear_local_id()], "p_922->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_922->g_comm_values[get_linear_group_id() * 89 + get_linear_local_id()], "p_922->g_comm_values[get_linear_group_id() * 89 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
