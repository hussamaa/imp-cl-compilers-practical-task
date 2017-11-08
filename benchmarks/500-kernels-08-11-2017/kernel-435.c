// --atomics 54 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 84,41,1 -l 6,1,1
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

__constant uint32_t permutations[10][6] = {
{5,0,4,3,2,1}, // permutation 0
{2,5,4,3,1,0}, // permutation 1
{2,4,1,5,3,0}, // permutation 2
{3,0,1,4,5,2}, // permutation 3
{3,0,4,2,5,1}, // permutation 4
{4,3,1,5,2,0}, // permutation 5
{1,2,0,3,4,5}, // permutation 6
{4,0,3,2,1,5}, // permutation 7
{3,2,0,5,1,4}, // permutation 8
{1,0,3,5,2,4} // permutation 9
};

// Seed: 3213204447

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int8_t * volatile  f0;
   int8_t * f1;
   volatile int8_t  f2;
   volatile uint16_t  f3;
};

struct S1 {
    int32_t g_5;
    int8_t g_11;
    int8_t g_12;
    volatile int32_t g_13;
    uint64_t g_15[7][4][9];
    volatile VECTOR(uint64_t, 2) g_36;
    uint8_t g_70;
    int32_t g_88;
    int16_t g_91;
    VECTOR(uint8_t, 8) g_92;
    VECTOR(uint16_t, 4) g_133;
    uint32_t g_144;
    int64_t g_149;
    VECTOR(int8_t, 2) g_152;
    uint32_t g_159;
    uint32_t *g_161;
    VECTOR(uint32_t, 4) g_179;
    int8_t *g_190;
    int8_t *g_192;
    uint64_t g_194;
    uint8_t g_195;
    int32_t g_198;
    int32_t g_199;
    uint32_t g_200;
    uint64_t g_203;
    uint32_t g_214;
    uint16_t *g_219;
    int32_t *g_225;
    int32_t g_269[2];
    VECTOR(uint16_t, 4) g_270;
    int16_t g_297;
    uint8_t g_322[3];
    union U0 g_328[3][1][5];
    VECTOR(uint64_t, 8) g_333;
    VECTOR(int32_t, 2) g_340;
    volatile int64_t *g_342;
    volatile int64_t **g_341;
    int16_t g_347;
    VECTOR(int8_t, 2) g_377;
    VECTOR(int32_t, 2) g_386;
    VECTOR(int32_t, 16) g_388;
    VECTOR(int32_t, 8) g_403;
    VECTOR(int8_t, 2) g_426;
    volatile VECTOR(uint64_t, 16) g_450;
    volatile uint64_t g_451;
    volatile uint64_t *g_449;
    volatile uint64_t **g_448;
    uint16_t **g_495;
    int32_t **g_508;
    int32_t ***g_507;
    uint32_t **g_569;
    int32_t *g_583;
    volatile VECTOR(uint16_t, 16) g_599;
    volatile VECTOR(int32_t, 2) g_602;
    VECTOR(int32_t, 2) g_603;
    VECTOR(int32_t, 2) g_605;
    VECTOR(int32_t, 4) g_606;
    int8_t **g_612[10][3][5];
    volatile VECTOR(int64_t, 16) g_616;
    VECTOR(int64_t, 4) g_617;
    volatile VECTOR(int64_t, 4) g_618;
    uint8_t *g_644;
    volatile VECTOR(uint16_t, 2) g_659;
    VECTOR(uint16_t, 2) g_661;
    volatile VECTOR(uint16_t, 2) g_665;
    VECTOR(int8_t, 16) g_668;
    volatile union U0 g_685;
    int32_t * volatile g_744;
    VECTOR(uint64_t, 4) g_749;
    VECTOR(uint64_t, 8) g_750;
    VECTOR(int8_t, 8) g_784;
    volatile VECTOR(uint16_t, 8) g_788;
    int16_t *g_794;
    VECTOR(int64_t, 8) g_825;
    volatile VECTOR(int32_t, 2) g_880;
    VECTOR(int64_t, 4) g_885;
    VECTOR(uint8_t, 16) g_909;
    VECTOR(uint8_t, 4) g_910;
    VECTOR(uint16_t, 16) g_925;
    VECTOR(uint16_t, 16) g_926;
    VECTOR(int32_t, 16) g_938;
    volatile VECTOR(int32_t, 4) g_939;
    volatile VECTOR(int32_t, 4) g_940;
    int64_t *g_966;
    volatile uint32_t g_975;
    union U0 *g_982;
    union U0 ** volatile g_981;
    int32_t ** volatile g_990;
    int32_t ** volatile g_1016;
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
union U0  func_1(struct S1 * p_1020);
int32_t  func_18(int32_t  p_19, uint64_t  p_20, int8_t  p_21, int64_t  p_22, int32_t  p_23, struct S1 * p_1020);
int64_t  func_30(int32_t  p_31, uint64_t  p_32, struct S1 * p_1020);
int64_t  func_39(int8_t * p_40, struct S1 * p_1020);
int8_t * func_41(int32_t  p_42, int64_t  p_43, int32_t * p_44, int64_t  p_45, struct S1 * p_1020);
uint16_t  func_50(int8_t * p_51, int32_t * p_52, int16_t  p_53, int32_t  p_54, struct S1 * p_1020);
int8_t * func_55(int16_t  p_56, int8_t * p_57, struct S1 * p_1020);
uint16_t  func_64(int8_t * p_65, int8_t * p_66, int64_t  p_67, struct S1 * p_1020);
int8_t  func_97(int8_t * p_98, int32_t  p_99, uint32_t  p_100, uint64_t  p_101, uint32_t  p_102, struct S1 * p_1020);
int8_t * func_103(uint32_t  p_104, int64_t  p_105, struct S1 * p_1020);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1020->g_15 p_1020->g_5 p_1020->g_13 p_1020->g_36 p_1020->g_comm_values p_1020->g_11 p_1020->g_70 p_1020->g_92 p_1020->g_88 p_1020->g_91 p_1020->g_12 p_1020->g_133 p_1020->g_149 p_1020->g_179 p_1020->g_152 p_1020->g_200 p_1020->g_203 p_1020->g_214 p_1020->g_219 p_1020->g_225 p_1020->g_270 p_1020->g_269 p_1020->g_340 p_1020->g_347 p_1020->g_195 p_1020->g_322 p_1020->g_377 p_1020->g_386 p_1020->g_388 p_1020->g_333 p_1020->g_403 p_1020->g_426 p_1020->g_194 p_1020->g_448 p_1020->l_comm_values p_1020->g_507 p_1020->g_198 p_1020->g_644 p_1020->g_449 p_1020->g_451 p_1020->g_583 p_1020->g_744 p_1020->g_749 p_1020->g_794 p_1020->g_297 p_1020->g_199 p_1020->g_144 p_1020->g_990 p_1020->g_981 p_1020->g_982 p_1020->g_328 p_1020->g_1016
 * writes: p_1020->g_15 p_1020->g_70 p_1020->g_11 p_1020->g_12 p_1020->g_88 p_1020->g_92 p_1020->g_159 p_1020->g_194 p_1020->g_195 p_1020->g_200 p_1020->g_203 p_1020->g_214 p_1020->g_199 p_1020->g_225 p_1020->g_270 p_1020->g_161 p_1020->g_297 p_1020->g_322 p_1020->g_149 p_1020->g_347 p_1020->g_133 p_1020->g_91 p_1020->g_179 p_1020->g_495 p_1020->g_507 p_1020->g_198 p_1020->g_388 p_1020->g_144 p_1020->g_583 p_1020->g_5
 */
union U0  func_1(struct S1 * p_1020)
{ /* block id: 4 */
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = (void*)0;
    int32_t *l_4 = &p_1020->g_5;
    int32_t l_6 = (-9L);
    int32_t *l_7 = &p_1020->g_5;
    int32_t *l_8 = (void*)0;
    int32_t *l_9 = &p_1020->g_5;
    int32_t *l_10[6][3][7] = {{{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5}},{{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5}},{{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5}},{{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5}},{{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5}},{{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5},{&l_6,&l_6,(void*)0,&p_1020->g_5,&p_1020->g_5,(void*)0,&p_1020->g_5}}};
    int32_t l_14[2][1];
    int16_t l_33 = 2L;
    uint32_t l_729 = 0xC075D235L;
    int8_t l_730[3][2][2] = {{{0x05L,0x05L},{0x05L,0x05L}},{{0x05L,0x05L},{0x05L,0x05L}},{{0x05L,0x05L},{0x05L,0x05L}}};
    uint32_t l_731 = 0xD1AAA78CL;
    VECTOR(uint8_t, 2) l_868 = (VECTOR(uint8_t, 2))(0xFCL, 0xCAL);
    VECTOR(uint8_t, 4) l_877 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL);
    VECTOR(int64_t, 2) l_886 = (VECTOR(int64_t, 2))(0x456FB1C216C18636L, 0x11D390778A3828E6L);
    int64_t **l_900 = (void*)0;
    int64_t ***l_899 = &l_900;
    VECTOR(int32_t, 16) l_907 = (VECTOR(int32_t, 16))(0x6D6255C9L, (VECTOR(int32_t, 4))(0x6D6255C9L, (VECTOR(int32_t, 2))(0x6D6255C9L, 0x644CBCBDL), 0x644CBCBDL), 0x644CBCBDL, 0x6D6255C9L, 0x644CBCBDL, (VECTOR(int32_t, 2))(0x6D6255C9L, 0x644CBCBDL), (VECTOR(int32_t, 2))(0x6D6255C9L, 0x644CBCBDL), 0x6D6255C9L, 0x644CBCBDL, 0x6D6255C9L, 0x644CBCBDL);
    VECTOR(uint8_t, 2) l_915 = (VECTOR(uint8_t, 2))(0xB0L, 0x5EL);
    uint64_t l_924 = 0x33ED83254184F3A6L;
    uint32_t **l_930 = &p_1020->g_161;
    VECTOR(int32_t, 2) l_986 = (VECTOR(int32_t, 2))((-5L), 3L);
    union U0 *l_988 = &p_1020->g_328[0][0][4];
    uint8_t l_1017 = 9UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_14[i][j] = 8L;
    }
    --p_1020->g_15[3][3][3];
    if (func_18((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(0x0B68L, (safe_div_func_uint8_t_u_u(((func_30(l_33, ((safe_div_func_int64_t_s_s(((*l_4) ^ ((p_1020->g_13 , p_1020->g_15[6][2][4]) || ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1020->g_36.yx)).xxyyyyxx)).s24)).hi)), (safe_sub_func_int64_t_s_s(((p_1020->g_comm_values[p_1020->tid] ^ 0xBBA0L) & 0x0A10L), func_39(func_41((safe_div_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((0x646FL != 6UL), 9L)) < (*l_9)) != 0L), (*l_9))), p_1020->g_15[4][1][3], &p_1020->g_5, (*l_9), p_1020), p_1020))))) && 0x1183C5CFBB4A8856L), p_1020) && 18446744073709551615UL) ^ 0x7640EB37L), l_729)))), p_1020->g_15[1][2][4])), p_1020->g_15[3][3][3], l_730[2][0][0], p_1020->g_comm_values[p_1020->tid], l_731, p_1020))
    { /* block id: 364 */
        uint8_t l_872 = 0x97L;
        uint64_t l_888 = 0x5E3D4A6AF6142D44L;
        int32_t l_891 = 0x10E0D356L;
        int32_t l_897 = 0x23834C1EL;
        VECTOR(int16_t, 16) l_905 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x127EL), 0x127EL), 0x127EL, 5L, 0x127EL, (VECTOR(int16_t, 2))(5L, 0x127EL), (VECTOR(int16_t, 2))(5L, 0x127EL), 5L, 0x127EL, 5L, 0x127EL);
        VECTOR(int32_t, 16) l_906 = (VECTOR(int32_t, 16))(0x5CCA01A6L, (VECTOR(int32_t, 4))(0x5CCA01A6L, (VECTOR(int32_t, 2))(0x5CCA01A6L, 0L), 0L), 0L, 0x5CCA01A6L, 0L, (VECTOR(int32_t, 2))(0x5CCA01A6L, 0L), (VECTOR(int32_t, 2))(0x5CCA01A6L, 0L), 0x5CCA01A6L, 0L, 0x5CCA01A6L, 0L);
        VECTOR(int32_t, 16) l_941 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
        int32_t *l_997 = (void*)0;
        int i;
        for (p_1020->g_144 = (-19); (p_1020->g_144 <= 27); p_1020->g_144++)
        { /* block id: 367 */
            uint64_t l_873 = 0xD22956C94136476BL;
            VECTOR(int16_t, 8) l_904 = (VECTOR(int16_t, 8))(0x13F6L, (VECTOR(int16_t, 4))(0x13F6L, (VECTOR(int16_t, 2))(0x13F6L, 0x147FL), 0x147FL), 0x147FL, 0x13F6L, 0x147FL);
            VECTOR(uint8_t, 4) l_911 = (VECTOR(uint8_t, 4))(0x87L, (VECTOR(uint8_t, 2))(0x87L, 248UL), 248UL);
            VECTOR(uint8_t, 16) l_914 = (VECTOR(uint8_t, 16))(0xF1L, (VECTOR(uint8_t, 4))(0xF1L, (VECTOR(uint8_t, 2))(0xF1L, 0xD8L), 0xD8L), 0xD8L, 0xF1L, 0xD8L, (VECTOR(uint8_t, 2))(0xF1L, 0xD8L), (VECTOR(uint8_t, 2))(0xF1L, 0xD8L), 0xF1L, 0xD8L, 0xF1L, 0xD8L);
            int32_t *l_919 = (void*)0;
            uint32_t **l_931 = &p_1020->g_161;
            uint64_t l_932[9] = {0x1FA80788615A415FL,0x1FA80788615A415FL,0x1FA80788615A415FL,0x1FA80788615A415FL,0x1FA80788615A415FL,0x1FA80788615A415FL,0x1FA80788615A415FL,0x1FA80788615A415FL,0x1FA80788615A415FL};
            int32_t l_978 = (-8L);
            int32_t l_979[9] = {0x686CDF04L,5L,0x686CDF04L,0x686CDF04L,5L,0x686CDF04L,0x686CDF04L,5L,0x686CDF04L};
            int16_t l_983 = 0x101DL;
            union U0 *l_989[8][5] = {{(void*)0,&p_1020->g_328[0][0][4],(void*)0,(void*)0,&p_1020->g_328[0][0][4]},{(void*)0,&p_1020->g_328[0][0][4],(void*)0,(void*)0,&p_1020->g_328[0][0][4]},{(void*)0,&p_1020->g_328[0][0][4],(void*)0,(void*)0,&p_1020->g_328[0][0][4]},{(void*)0,&p_1020->g_328[0][0][4],(void*)0,(void*)0,&p_1020->g_328[0][0][4]},{(void*)0,&p_1020->g_328[0][0][4],(void*)0,(void*)0,&p_1020->g_328[0][0][4]},{(void*)0,&p_1020->g_328[0][0][4],(void*)0,(void*)0,&p_1020->g_328[0][0][4]},{(void*)0,&p_1020->g_328[0][0][4],(void*)0,(void*)0,&p_1020->g_328[0][0][4]},{(void*)0,&p_1020->g_328[0][0][4],(void*)0,(void*)0,&p_1020->g_328[0][0][4]}};
            int i, j;
            for (p_1020->g_195 = 0; (p_1020->g_195 == 14); p_1020->g_195 = safe_add_func_int64_t_s_s(p_1020->g_195, 1))
            { /* block id: 370 */
                int8_t l_869 = 0x7AL;
                uint16_t *l_874 = (void*)0;
                uint16_t *l_875 = (void*)0;
                uint16_t *l_876 = (void*)0;
                int32_t l_887 = 0x3F69B245L;
                VECTOR(uint64_t, 2) l_898 = (VECTOR(uint64_t, 2))(1UL, 1UL);
                int32_t l_903 = 0x57D8C365L;
                VECTOR(uint8_t, 4) l_908 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x18L), 0x18L);
                VECTOR(uint8_t, 8) l_927 = (VECTOR(uint8_t, 8))(0x1EL, (VECTOR(uint8_t, 4))(0x1EL, (VECTOR(uint8_t, 2))(0x1EL, 0x45L), 0x45L), 0x45L, 0x1EL, 0x45L);
                int32_t l_980 = 0x65B4A07CL;
                int i;
                (1 + 1);
            }
            (*p_1020->g_990) = &l_14[0][0];
            if (l_905.sc)
                break;
        }
        (*l_9) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((*p_1020->g_794) = ((l_997 = &l_14[0][0]) != (void*)0)), 5)), 14)), (safe_sub_func_int32_t_s_s(l_906.s7, GROUP_DIVERGE(1, 1)))));
    }
    else
    { /* block id: 427 */
        uint8_t l_1000 = 1UL;
        int32_t *l_1010 = &p_1020->g_88;
        (*l_9) |= (0x18L < l_1000);
        if ((atomic_inc(&p_1020->l_atomic_input[15]) == 5))
        { /* block id: 430 */
            uint32_t l_1001 = 0x587549B1L;
            uint32_t l_1002 = 0x859785FAL;
            l_1002 = l_1001;
            unsigned int result = 0;
            result += l_1001;
            result += l_1002;
            atomic_add(&p_1020->l_special_values[15], result);
        }
        else
        { /* block id: 432 */
            (1 + 1);
        }
        for (p_1020->g_200 = 16; (p_1020->g_200 != 28); p_1020->g_200 = safe_add_func_uint8_t_u_u(p_1020->g_200, 1))
        { /* block id: 437 */
            int32_t **l_1005 = &l_10[5][2][0];
            (*l_1005) = (*p_1020->g_990);
            for (p_1020->g_297 = (-5); (p_1020->g_297 > (-12)); p_1020->g_297 = safe_sub_func_uint32_t_u_u(p_1020->g_297, 8))
            { /* block id: 441 */
                return (**p_1020->g_981);
            }
            (*l_1005) = (*l_1005);
            atomic_xor(&p_1020->l_atomic_reduction[0], ((((safe_div_func_int16_t_s_s(0L, GROUP_DIVERGE(0, 1))) & ((void*)0 == &p_1020->g_70)) <= (GROUP_DIVERGE(2, 1) , (*l_7))) , (*p_1020->g_744)));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1020->v_collective += p_1020->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        l_1010 = &l_6;
    }
    for (l_729 = 0; (l_729 <= 21); l_729 = safe_add_func_uint32_t_u_u(l_729, 8))
    { /* block id: 451 */
        (*l_899) = (*l_899);
        for (p_1020->g_203 = 0; (p_1020->g_203 >= 24); p_1020->g_203 = safe_add_func_uint8_t_u_u(p_1020->g_203, 7))
        { /* block id: 455 */
            int32_t l_1015 = 0x6856D024L;
            (*l_4) &= l_1015;
            atomic_or(&p_1020->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 2))(0x59ED2E17L, 0x6298D042L)).even + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1020->v_collective += p_1020->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        (*p_1020->g_1016) = ((*p_1020->g_990) = &l_14[1][0]);
    }
    l_1017--;
    return (**p_1020->g_981);
}


/* ------------------------------------------ */
/* 
 * reads : p_1020->g_5 p_1020->g_644 p_1020->g_322 p_1020->g_744 p_1020->g_88 p_1020->g_749 p_1020->g_149 p_1020->g_794 p_1020->g_297 p_1020->g_199
 * writes: p_1020->g_5 p_1020->g_88 p_1020->g_214 p_1020->g_225 p_1020->g_179 p_1020->g_583
 */
int32_t  func_18(int32_t  p_19, uint64_t  p_20, int8_t  p_21, int64_t  p_22, int32_t  p_23, struct S1 * p_1020)
{ /* block id: 313 */
    uint32_t l_738 = 0UL;
    union U0 *l_739 = &p_1020->g_328[2][0][2];
    VECTOR(uint16_t, 2) l_770 = (VECTOR(uint16_t, 2))(0xE1BDL, 0xECA0L);
    int64_t *l_775 = &p_1020->g_149;
    int64_t **l_774[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint16_t *l_797 = (void*)0;
    int8_t l_798 = (-6L);
    int8_t l_799 = 9L;
    int32_t l_821[5] = {0x268FF8DCL,0x268FF8DCL,0x268FF8DCL,0x268FF8DCL,0x268FF8DCL};
    uint8_t l_832 = 0x4DL;
    int32_t *l_857 = &l_821[4];
    int i, j;
    for (p_1020->g_5 = 0; (p_1020->g_5 == 9); ++p_1020->g_5)
    { /* block id: 316 */
        VECTOR(uint16_t, 8) l_756 = (VECTOR(uint16_t, 8))(0xBDD6L, (VECTOR(uint16_t, 4))(0xBDD6L, (VECTOR(uint16_t, 2))(0xBDD6L, 65535UL), 65535UL), 65535UL, 0xBDD6L, 65535UL);
        VECTOR(uint16_t, 4) l_768 = (VECTOR(uint16_t, 4))(0x2EA6L, (VECTOR(uint16_t, 2))(0x2EA6L, 0x38ACL), 0x38ACL);
        VECTOR(uint16_t, 2) l_769 = (VECTOR(uint16_t, 2))(0xA50BL, 0x12C4L);
        int8_t **l_771 = &p_1020->g_192;
        int64_t **l_776[3][2] = {{&l_775,&l_775},{&l_775,&l_775},{&l_775,&l_775}};
        int16_t l_805 = 0x20E4L;
        int32_t l_806 = 0x28D1A924L;
        int32_t l_807 = (-10L);
        uint32_t **l_826 = &p_1020->g_161;
        uint32_t *l_829 = &p_1020->g_200;
        VECTOR(int8_t, 16) l_847 = (VECTOR(int8_t, 16))(0x34L, (VECTOR(int8_t, 4))(0x34L, (VECTOR(int8_t, 2))(0x34L, 0x07L), 0x07L), 0x07L, 0x34L, 0x07L, (VECTOR(int8_t, 2))(0x34L, 0x07L), (VECTOR(int8_t, 2))(0x34L, 0x07L), 0x34L, 0x07L, 0x34L, 0x07L);
        int i, j;
        for (p_23 = (-8); (p_23 >= (-11)); p_23--)
        { /* block id: 319 */
            int32_t *l_740 = (void*)0;
            int32_t *l_741 = (void*)0;
            int32_t *l_742 = (void*)0;
            int32_t *l_743 = (void*)0;
            VECTOR(uint16_t, 4) l_772 = (VECTOR(uint16_t, 4))(0xCEA8L, (VECTOR(uint16_t, 2))(0xCEA8L, 0xE37EL), 0xE37EL);
            VECTOR(uint16_t, 8) l_773 = (VECTOR(uint16_t, 8))(0x52A8L, (VECTOR(uint16_t, 4))(0x52A8L, (VECTOR(uint16_t, 2))(0x52A8L, 0x4013L), 0x4013L), 0x4013L, 0x52A8L, 0x4013L);
            int64_t ***l_777 = &l_776[1][1];
            int32_t l_779 = 1L;
            int i;
            (*p_1020->g_744) &= (safe_mul_func_uint8_t_u_u(((0x0E8555FFL >= l_738) , (*p_1020->g_644)), (&p_1020->g_328[2][0][2] != l_739)));
            if (((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(p_1020->g_749.zywxwxyzwywzwxyw)).s4c, ((VECTOR(uint64_t, 16))(p_1020->g_750.s6443016757545513)).s39))).lo >= (((safe_unary_minus_func_int8_t_s(p_19)) > p_20) >= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_756.s0406117660436260)).s8d50)).x, (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(6UL, 10)) != ((p_22 || (((VECTOR(uint16_t, 4))(0x4AFDL, 0x6DFBL, 0x224DL, 0xA38DL)).z || (0x67L > ((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s((((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_768.xx)).yxyxxyxyxxxyxxyx)).s7e68)).xxwwxyzx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(65529UL, ((VECTOR(uint16_t, 8))(l_769.yyyyyyyy)), ((VECTOR(uint16_t, 2))(l_770.yx)), (&p_1020->g_192 == l_771), 0xFA5BL, ((VECTOR(uint16_t, 2))(l_772.xz)), 0x4CD8L)).sd3, ((VECTOR(uint16_t, 4))(l_773.s0637)).lo))).yyyxxyxy)), ((VECTOR(uint16_t, 8))(((p_21 = (l_774[0][2] == ((*l_777) = (((+((((VECTOR(int64_t, 16))(0x758939550779E448L, 0L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x063CE611127C44BEL, 0L)), 0x159FEB1E5E5D7BFAL, 0x6DA29CD5BA2CBA8FL)).zyyywywx, (int64_t)(0xA63BB5BCL || p_23), (int64_t)p_19))).s30)), ((VECTOR(int64_t, 8))(0x5DF81EB3E1D90C07L)), ((VECTOR(int64_t, 4))((-1L))))).s8 , 2L) == l_756.s5)) , l_769.y) , l_776[1][0])))) & 0x37L), 0x58F1L, p_23, 0x7B42L, ((VECTOR(uint16_t, 2))(0x9517L)), 0xD21BL, 0UL))))).s76)).xyyyxyxy))).s3 ^ p_1020->g_749.w), p_20)))), 3L)) && FAKE_DIVERGE(p_1020->local_2_offset, get_local_id(2), 10))))) <= p_23)), p_23)), 255UL)))), p_22)))), 0xBBDE5C875055D948L)), p_20)) >= (-1L)))
            { /* block id: 323 */
                int32_t *l_778 = &p_1020->g_88;
                l_778 = &p_23;
                return l_779;
            }
            else
            { /* block id: 326 */
                int64_t l_785 = 0x682508DA541F25F9L;
                uint64_t *l_789 = &p_1020->g_15[2][3][4];
                int16_t *l_792 = &p_1020->g_297;
                int16_t **l_793[2];
                uint16_t *l_800 = (void*)0;
                uint16_t *l_801 = (void*)0;
                uint16_t *l_802[9];
                int32_t l_808 = 0L;
                int64_t *l_817 = (void*)0;
                int64_t *l_818 = (void*)0;
                int64_t *l_819 = (void*)0;
                int64_t *l_820[9][7][4] = {{{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0}},{{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0}},{{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0}},{{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0}},{{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0}},{{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0}},{{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0}},{{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0}},{{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0},{(void*)0,&l_785,&l_785,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_793[i] = &l_792;
                for (i = 0; i < 9; i++)
                    l_802[i] = (void*)0;
                if (p_19)
                    break;
                if (p_21)
                    break;
                l_821[4] &= ((safe_rshift_func_int16_t_s_s(p_1020->g_149, 0)) == (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1020->g_784.s45)).xyxxxxyx)).s30)).yyyyyxyyyyyxxyyx, ((VECTOR(int8_t, 16))(l_785, (-1L), (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_1020->g_788.s01064626)).s2, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xCC05L, 0x618AL)), ((--(*l_789)) != (&p_1020->g_347 == (p_1020->g_794 = l_792))), (safe_rshift_func_uint8_t_u_s((l_797 == (void*)0), l_770.y)), ((VECTOR(uint16_t, 2))(0x6FDDL, 0x9416L)), 0UL, 65529UL)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 0xE03CL)), 0xE61AL, 0x583DL))))), FAKE_DIVERGE(p_1020->local_0_offset, get_local_id(0), 10), ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0x7DL, l_798, 0x91L, 249UL)).xzwxzxyw)).s64, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x85L, 0x44L)).xyyy)).odd))), 65528UL))))).even, (uint16_t)(p_1020->g_270.y--)))).odd, ((VECTOR(uint16_t, 8))((p_1020->g_661.x++), 0UL, (l_806 = (safe_sub_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((p_1020->g_617.y ^= (((!(safe_add_func_int64_t_s_s((-10L), p_21))) == l_808) , p_1020->g_195)), p_1020->g_749.x)) || p_20), (-10L)))), 65530UL, ((VECTOR(uint16_t, 2))(0x6039L)), 0UL, 65535UL)).s00))).odd)), ((VECTOR(int8_t, 8))((-1L))), 7L, p_22, (-8L), 0x7FL, 0x38L)), ((VECTOR(int8_t, 16))(0x4FL))))).s3, 6)));
            }
            for (p_1020->g_214 = 0; (p_1020->g_214 <= 60); ++p_1020->g_214)
            { /* block id: 339 */
                int32_t *l_824 = &l_806;
                (*l_824) = (-1L);
            }
        }
        if (p_21)
        { /* block id: 343 */
            VECTOR(uint16_t, 8) l_833 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0xFF68L), 0xFF68L), 0xFF68L, 65534UL, 0xFF68L);
            uint32_t *l_838 = &p_1020->g_159;
            int32_t *l_839 = &l_821[4];
            int i;
            (*l_839) ^= (((((((VECTOR(int64_t, 16))(p_1020->g_825.s3302677152040750)).sa == 2UL) && ((void*)0 != l_826)) ^ ((VECTOR(uint32_t, 16))(((*l_838) = ((safe_div_func_int64_t_s_s(((+((l_829 != l_829) || (safe_mod_func_uint32_t_u_u(l_832, l_833.s2)))) != 0xD178L), (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*p_1020->g_744), 0UL)), GROUP_DIVERGE(1, 1))))) >= p_21)), 6UL, 4294967295UL, 0x0CA2DA2CL, 4294967289UL, 0xED59B847L, p_23, ((VECTOR(uint32_t, 4))(0x2304CA79L)), p_22, 0x5A7F2622L, 5UL, 4294967288UL, 1UL)).s5) > 1L) < 255UL);
            p_1020->g_225 = &l_807;
            return l_738;
        }
        else
        { /* block id: 348 */
            int16_t *l_852[7][4][8] = {{{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805}},{{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805}},{{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805}},{{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805}},{{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805}},{{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805}},{{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805},{&l_805,&p_1020->g_297,&p_1020->g_91,&l_805,&p_1020->g_347,&l_805,(void*)0,&l_805}}};
            int32_t ****l_854 = (void*)0;
            int32_t *****l_853 = &l_854;
            int8_t *l_855[3][8][6] = {{{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12}},{{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12}},{{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12},{&l_799,&l_799,(void*)0,&p_1020->g_12,(void*)0,&p_1020->g_12}}};
            int i, j, k;
            if (((-10L) & ((safe_mul_func_int8_t_s_s(p_22, p_21)) <= (+(p_1020->g_179.y = ((-1L) | (((safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_int16_t_s((*p_1020->g_794))) != ((safe_div_func_uint16_t_u_u(0x2B6DL, ((((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(l_847.sf62a07dd51530d96)).lo, ((VECTOR(int8_t, 16))((l_807 ^= (safe_div_func_int8_t_s_s(((l_821[1] |= ((((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(9UL, (((safe_lshift_func_int16_t_s_s((~(l_806 ^= p_19)), 11)) | ((((&p_1020->g_507 != ((*l_853) = (void*)0)) , p_20) < p_23) < l_769.x)) ^ p_21), 1UL, 1UL)).odd)).yxyx)).y >= p_23) != (**p_1020->g_448)) > l_738) != p_19)) | FAKE_DIVERGE(p_1020->group_2_offset, get_group_id(2), 10)), (-1L)))), ((VECTOR(int8_t, 8))(1L)), l_770.y, 0x68L, l_756.s5, l_821[4], ((VECTOR(int8_t, 2))(7L)), (-5L))).even))).lo)), ((VECTOR(int8_t, 4))(0x2AL)), ((VECTOR(int8_t, 4))(0x56L))))).y ^ 0x4AL) , p_19))) >= p_19)), p_1020->g_199)) == 0x6404C286L) <= 0x44L)))))))
            { /* block id: 354 */
                int32_t **l_856[6] = {&p_1020->g_225,&p_1020->g_225,&p_1020->g_225,&p_1020->g_225,&p_1020->g_225,&p_1020->g_225};
                int i;
                p_1020->g_583 = (void*)0;
                l_857 = &l_806;
            }
            else
            { /* block id: 357 */
                int32_t *l_858 = (void*)0;
                int32_t **l_859 = &p_1020->g_583;
                (*l_859) = l_858;
            }
        }
    }
    (*p_1020->g_744) = 0x17618E4CL;
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_1020->g_149 p_1020->g_198 p_1020->g_12 p_1020->g_200 p_1020->g_644 p_1020->g_322 p_1020->g_340 p_1020->g_449 p_1020->g_451 p_1020->g_583 p_1020->g_5
 * writes: p_1020->g_149 p_1020->g_198 p_1020->g_203 p_1020->g_388 p_1020->g_12 p_1020->g_200 p_1020->g_144 p_1020->g_583
 */
int64_t  func_30(int32_t  p_31, uint64_t  p_32, struct S1 * p_1020)
{ /* block id: 230 */
    int64_t l_529 = 0x3731C6C686415E57L;
    int32_t l_533 = 0x39BE3723L;
    int32_t l_535 = 6L;
    int32_t l_536 = 4L;
    int32_t l_537 = 0x75F7F9D2L;
    int32_t l_538 = 0x59B48B55L;
    int32_t l_539 = 0x672E5EF1L;
    int32_t l_540 = (-1L);
    int32_t l_541 = 0x6E156B07L;
    int32_t l_542 = 0x1AA371DEL;
    int32_t l_544 = 0L;
    int32_t l_545 = 1L;
    int32_t l_546 = 0L;
    int32_t l_547 = 0x695C4F3EL;
    int16_t l_548 = (-9L);
    int16_t l_549 = 0x783BL;
    int32_t l_550 = 0x2EF15C2DL;
    int32_t l_551 = 6L;
    int32_t l_552[5][6] = {{0L,0x6DF30F2AL,0L,0L,0x6DF30F2AL,0L},{0L,0x6DF30F2AL,0L,0L,0x6DF30F2AL,0L},{0L,0x6DF30F2AL,0L,0L,0x6DF30F2AL,0L},{0L,0x6DF30F2AL,0L,0L,0x6DF30F2AL,0L},{0L,0x6DF30F2AL,0L,0L,0x6DF30F2AL,0L}};
    uint32_t l_559 = 0x82D86570L;
    uint32_t **l_567 = &p_1020->g_161;
    VECTOR(uint32_t, 2) l_571 = (VECTOR(uint32_t, 2))(4294967295UL, 2UL);
    int16_t l_585 = 0x4B67L;
    int32_t **l_591 = &p_1020->g_583;
    union U0 *l_609[7];
    union U0 *l_610 = &p_1020->g_328[2][0][2];
    VECTOR(int64_t, 8) l_615 = (VECTOR(int64_t, 8))(0x200CE19401E72A55L, (VECTOR(int64_t, 4))(0x200CE19401E72A55L, (VECTOR(int64_t, 2))(0x200CE19401E72A55L, (-1L)), (-1L)), (-1L), 0x200CE19401E72A55L, (-1L));
    int8_t l_641 = 0x25L;
    int32_t l_673 = 0x4F59E6D8L;
    uint16_t l_682 = 65535UL;
    int16_t l_696 = 0x7646L;
    int8_t l_702 = (-7L);
    int32_t *l_703[3];
    int16_t l_704 = 0x6107L;
    int32_t l_705 = 7L;
    int8_t l_706 = 0x60L;
    uint32_t l_707 = 0UL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_609[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_703[i] = &l_552[1][2];
    for (p_1020->g_149 = 14; (p_1020->g_149 != (-20)); p_1020->g_149--)
    { /* block id: 233 */
        int32_t *l_534[4];
        int64_t l_543 = (-1L);
        uint32_t l_553 = 0x2F74A39AL;
        uint64_t *l_556 = &p_1020->g_203;
        int i;
        for (i = 0; i < 4; i++)
            l_534[i] = (void*)0;
        for (p_1020->g_198 = 9; (p_1020->g_198 < 29); p_1020->g_198 = safe_add_func_uint64_t_u_u(p_1020->g_198, 1))
        { /* block id: 236 */
            uint64_t l_530 = 18446744073709551610UL;
            --l_530;
        }
        l_553--;
        p_1020->g_388.s2 = ((((*l_556) = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x1AF4C7EACB9718EAL, 18446744073709551611UL)), 0x0F0D7AFEF3C70F7DL, 0xA4439EECBE0EFB71L)).y) != l_549) >= p_31);
        if (l_545)
            break;
    }
    for (p_1020->g_12 = (-18); (p_1020->g_12 != 26); p_1020->g_12++)
    { /* block id: 246 */
        VECTOR(uint32_t, 2) l_590 = (VECTOR(uint32_t, 2))(4294967290UL, 0x8A1462E1L);
        int32_t l_592 = 0x3F5DD8F2L;
        VECTOR(int16_t, 2) l_598 = (VECTOR(int16_t, 2))(0L, 4L);
        VECTOR(int64_t, 8) l_608 = (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L);
        int8_t **l_611 = &p_1020->g_192;
        VECTOR(int64_t, 16) l_614 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int64_t, 2))(1L, (-1L)), (VECTOR(int64_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
        union U0 **l_626 = &l_609[4];
        int32_t l_642 = 0x155B8AD1L;
        int32_t l_656 = 0x0548EB45L;
        VECTOR(uint16_t, 4) l_660 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xCCC2L), 0xCCC2L);
        uint64_t l_697 = 0x24F472524A00C57AL;
        uint32_t *l_698 = &p_1020->g_200;
        int i, j;
        (1 + 1);
    }
    ++l_707;
    for (p_1020->g_200 = 0; (p_1020->g_200 < 2); p_1020->g_200++)
    { /* block id: 306 */
        uint32_t *l_722 = (void*)0;
        uint32_t *l_723 = &p_1020->g_144;
        int32_t ***l_728 = &l_591;
        (*l_591) = (((safe_sub_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_32, 0)), (GROUP_DIVERGE(2, 1) ^ ((safe_rshift_func_int8_t_s_s(((*p_1020->g_644) <= (((*l_723) = p_32) > 0x2891C7C9L)), (~0L))) ^ ((p_1020->g_340.x && (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((l_728 != (p_1020->g_149 , (void*)0)), 6)), p_31))) || p_31))))), 65529UL)) | p_32), (*p_1020->g_449))) , 0xD697514859676AE0L) , (**l_728));
        l_703[2] = ((*l_591) = (void*)0);
    }
    return p_1020->g_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1020->g_507 p_1020->g_270 p_1020->g_203 p_1020->g_88
 * writes: p_1020->g_507 p_1020->g_203 p_1020->g_88
 */
int64_t  func_39(int8_t * p_40, struct S1 * p_1020)
{ /* block id: 224 */
    uint32_t l_499[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    uint32_t **l_502 = &p_1020->g_161;
    int32_t **l_506 = &p_1020->g_225;
    int32_t ***l_505 = &l_506;
    int32_t ****l_509 = &p_1020->g_507;
    uint64_t *l_520 = &p_1020->g_203;
    uint16_t l_521 = 3UL;
    int32_t *l_522 = &p_1020->g_88;
    int16_t l_523 = 0x77E8L;
    uint8_t l_524 = 7UL;
    int i;
    (*l_522) = (safe_sub_func_uint64_t_u_u((((0x86F0L | ((VECTOR(int16_t, 2))(0x5178L, 0x6548L)).lo) == GROUP_DIVERGE(0, 1)) , (l_499[3] >= (safe_rshift_func_uint8_t_u_s((((void*)0 != l_502) <= (safe_add_func_int8_t_s_s(((FAKE_DIVERGE(p_1020->group_1_offset, get_group_id(1), 10) , l_505) != ((*l_509) = p_1020->g_507)), (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((l_499[3] || (safe_sub_func_uint64_t_u_u(0x7AB378AA71BC6094L, (safe_add_func_uint64_t_u_u(((*l_520) |= (safe_mod_func_uint8_t_u_u(p_1020->g_270.z, 0xAFL))), l_521))))), 2)), FAKE_DIVERGE(p_1020->group_0_offset, get_group_id(0), 10)))))), 7)))), 0L));
    (*l_522) ^= l_523;
    return l_524;
}


/* ------------------------------------------ */
/* 
 * reads : p_1020->g_15 p_1020->g_11 p_1020->g_70 p_1020->g_92 p_1020->g_88 p_1020->g_91 p_1020->g_12 p_1020->g_comm_values p_1020->g_133 p_1020->g_149 p_1020->g_179 p_1020->g_152 p_1020->g_200 p_1020->g_203 p_1020->g_214 p_1020->g_219 p_1020->g_225 p_1020->g_270 p_1020->g_269 p_1020->g_340 p_1020->g_347 p_1020->g_195 p_1020->g_322 p_1020->g_5 p_1020->g_377 p_1020->g_386 p_1020->g_388 p_1020->g_333 p_1020->g_403 p_1020->g_426 p_1020->g_194 p_1020->g_448 p_1020->l_comm_values
 * writes: p_1020->g_70 p_1020->g_11 p_1020->g_12 p_1020->g_88 p_1020->g_92 p_1020->g_159 p_1020->g_194 p_1020->g_195 p_1020->g_200 p_1020->g_203 p_1020->g_214 p_1020->g_199 p_1020->g_225 p_1020->g_270 p_1020->g_161 p_1020->g_297 p_1020->g_322 p_1020->g_149 p_1020->g_347 p_1020->g_133 p_1020->g_91 p_1020->g_179 p_1020->g_495
 */
int8_t * func_41(int32_t  p_42, int64_t  p_43, int32_t * p_44, int64_t  p_45, struct S1 * p_1020)
{ /* block id: 6 */
    VECTOR(int64_t, 2) l_71 = (VECTOR(int64_t, 2))(1L, 0x17020143C861C607L);
    int16_t *l_346 = &p_1020->g_347;
    int8_t *l_348 = (void*)0;
    int32_t l_496[4][4][6] = {{{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L}},{{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L}},{{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L}},{{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L},{1L,0x42B475DDL,0x32AFA554L,1L,(-3L),0x43A4A357L}}};
    int i, j, k;
    l_496[3][2][5] ^= (func_50(func_55((((safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(p_1020->g_15[1][2][2], (safe_lshift_func_uint16_t_u_s(func_64(&p_1020->g_11, &p_1020->g_12, ((p_1020->g_70 = (-9L)) <= (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, 0x3F5FED851E2D6ACBL)).yyyy)).lo, ((VECTOR(int64_t, 2))(l_71.yx))))), 0x3433D00A11419659L, 0x6C8B6B2362835DF1L)).z > 0x436115CB1E5577DDL)), p_1020), ((*l_346) ^= 0x79AEL))))), 2)) ^ 0UL) | 1UL), l_348, p_1020), &p_1020->g_5, l_71.y, p_42, p_1020) , 0x20C63FABL);
    return l_348;
}


/* ------------------------------------------ */
/* 
 * reads : p_1020->g_195 p_1020->g_70 p_1020->g_11 p_1020->g_322 p_1020->g_12 p_1020->g_5 p_1020->g_377 p_1020->g_152 p_1020->g_88 p_1020->g_386 p_1020->g_388 p_1020->g_219 p_1020->g_200 p_1020->g_333 p_1020->g_403 p_1020->g_133 p_1020->g_179 p_1020->g_426 p_1020->g_194 p_1020->g_448 p_1020->g_270 p_1020->g_91 p_1020->g_149 p_1020->l_comm_values
 * writes: p_1020->g_195 p_1020->g_70 p_1020->g_194 p_1020->g_88 p_1020->g_11 p_1020->g_133 p_1020->g_297 p_1020->g_270 p_1020->g_91 p_1020->g_149 p_1020->g_179 p_1020->g_495
 */
uint16_t  func_50(int8_t * p_51, int32_t * p_52, int16_t  p_53, int32_t  p_54, struct S1 * p_1020)
{ /* block id: 166 */
    VECTOR(int64_t, 2) l_360 = (VECTOR(int64_t, 2))((-2L), 0x39EE69BDBF5AC8FCL);
    int32_t l_397 = 0x74419A53L;
    uint32_t **l_404[7];
    uint64_t *l_409 = &p_1020->g_15[3][3][3];
    VECTOR(int16_t, 16) l_412 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 7L), 7L), 7L, 5L, 7L, (VECTOR(int16_t, 2))(5L, 7L), (VECTOR(int16_t, 2))(5L, 7L), 5L, 7L, 5L, 7L);
    VECTOR(int32_t, 8) l_414 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 7L), 7L), 7L, (-1L), 7L);
    int32_t l_415 = 1L;
    uint16_t *l_418[3];
    VECTOR(int8_t, 16) l_460 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L, (VECTOR(int8_t, 2))((-9L), 0L), (VECTOR(int8_t, 2))((-9L), 0L), (-9L), 0L, (-9L), 0L);
    uint64_t l_461 = 0xDAC72CA895AA6AD0L;
    int i;
    for (i = 0; i < 7; i++)
        l_404[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_418[i] = (void*)0;
    for (p_1020->g_195 = 0; (p_1020->g_195 <= 32); p_1020->g_195 = safe_add_func_uint64_t_u_u(p_1020->g_195, 2))
    { /* block id: 169 */
        VECTOR(int64_t, 2) l_359 = (VECTOR(int64_t, 2))(1L, 0x737A506C2C9570B0L);
        uint8_t l_364 = 252UL;
        uint16_t l_365 = 0xA7B4L;
        int32_t l_379 = (-1L);
        uint16_t l_394 = 0xB62EL;
        uint16_t *l_400 = &l_365;
        VECTOR(int16_t, 8) l_401 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0L), 0L), 0L, 2L, 0L);
        int32_t *l_402[5];
        uint32_t **l_405[1][7][6];
        uint32_t **l_406 = &p_1020->g_161;
        uint64_t *l_410 = &p_1020->g_15[3][3][3];
        VECTOR(int32_t, 16) l_411 = (VECTOR(int32_t, 16))(0x39B268F7L, (VECTOR(int32_t, 4))(0x39B268F7L, (VECTOR(int32_t, 2))(0x39B268F7L, 0x21A9B85FL), 0x21A9B85FL), 0x21A9B85FL, 0x39B268F7L, 0x21A9B85FL, (VECTOR(int32_t, 2))(0x39B268F7L, 0x21A9B85FL), (VECTOR(int32_t, 2))(0x39B268F7L, 0x21A9B85FL), 0x39B268F7L, 0x21A9B85FL, 0x39B268F7L, 0x21A9B85FL);
        uint64_t **l_413 = &l_410;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_402[i] = &l_397;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 6; k++)
                    l_405[i][j][k] = &p_1020->g_161;
            }
        }
        for (p_1020->g_70 = 0; (p_1020->g_70 != 14); p_1020->g_70++)
        { /* block id: 172 */
            int32_t ***l_357 = (void*)0;
            VECTOR(int64_t, 8) l_358 = (VECTOR(int64_t, 8))(0x5A8DD452F02E2B77L, (VECTOR(int64_t, 4))(0x5A8DD452F02E2B77L, (VECTOR(int64_t, 2))(0x5A8DD452F02E2B77L, 0x554991BE6C88EC1AL), 0x554991BE6C88EC1AL), 0x554991BE6C88EC1AL, 0x5A8DD452F02E2B77L, 0x554991BE6C88EC1AL);
            uint64_t *l_363 = &p_1020->g_194;
            int32_t *l_366 = &p_1020->g_88;
            int8_t *l_378[3][6] = {{&p_1020->g_11,&p_1020->g_11,&p_1020->g_11,&p_1020->g_11,&p_1020->g_11,&p_1020->g_11},{&p_1020->g_11,&p_1020->g_11,&p_1020->g_11,&p_1020->g_11,&p_1020->g_11,&p_1020->g_11},{&p_1020->g_11,&p_1020->g_11,&p_1020->g_11,&p_1020->g_11,&p_1020->g_11,&p_1020->g_11}};
            VECTOR(int32_t, 2) l_387 = (VECTOR(int32_t, 2))(0L, (-2L));
            VECTOR(uint16_t, 16) l_393 = (VECTOR(uint16_t, 16))(0x155AL, (VECTOR(uint16_t, 4))(0x155AL, (VECTOR(uint16_t, 2))(0x155AL, 1UL), 1UL), 1UL, 0x155AL, 1UL, (VECTOR(uint16_t, 2))(0x155AL, 1UL), (VECTOR(uint16_t, 2))(0x155AL, 1UL), 0x155AL, 1UL, 0x155AL, 1UL);
            int32_t *l_395 = (void*)0;
            int32_t *l_396[6][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            int i, j;
            (*l_366) = ((((p_1020->g_11 || (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(((safe_rshift_func_uint16_t_u_u((((((void*)0 == l_357) < ((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(l_358.s4164164023712040)), ((VECTOR(int64_t, 4))(l_359.yyxx)).xxywzzzyzxzwxyzz, ((VECTOR(int64_t, 16))(l_360.xyyxxyyyyyyyyxxx))))), (int64_t)(((((*l_363) = (GROUP_DIVERGE(2, 1) , (safe_mod_func_uint8_t_u_u(p_1020->g_322[2], p_1020->g_12)))) < l_364) , (void*)0) != (((void*)0 != &p_1020->g_192) , &p_1020->g_203))))), ((VECTOR(int64_t, 16))(0x364470C18046F75AL))))).sf) , l_360.x) == l_358.s1), 5)) | 0x5F9191F9277D2615L), (-1L), 0x60L, (-6L), l_359.y, ((VECTOR(int8_t, 2))(1L)), 1L)).s0, l_365))) < p_53) == (*p_52)) , l_364);
            l_397 = ((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), 1)) != (safe_lshift_func_int8_t_s_s((((*l_366) &= (((l_379 &= ((VECTOR(int8_t, 2))(p_1020->g_377.yy)).odd) , p_1020->g_152.y) && 0UL)) > (!((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(p_1020->g_386.yxyx)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_387.yyxy)).zyzyxwyy)))).s42, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1020->g_388.s4b6c5446)).odd)).even))), ((VECTOR(int32_t, 2))(0x19806A1CL, 0x613A78C5L))))).xxxy)).y, (~(0x335D3D24D1236AFFL > p_1020->g_70)))) >= (((safe_sub_func_uint32_t_u_u((p_54 > (((((((safe_div_func_uint8_t_u_u(l_360.x, (0UL ^ ((VECTOR(uint16_t, 4))(l_393.scc6d)).z))) | ((p_1020->g_219 == (void*)0) != 0x2F46L)) , GROUP_DIVERGE(1, 1)) && l_360.x) , l_394) , 0UL) , p_1020->g_200)), 4L)) == 0x76L) & (*p_52))), p_1020->g_377.x)), p_54)) , 247UL))), l_360.x))), p_1020->g_333.s0)) <= p_1020->g_388.s6), l_360.x)) || 0x2290L), 0x2775L)) && p_54);
        }
        l_415 &= (((l_359.y >= (safe_rshift_func_int16_t_s_u(((((*l_400) = l_360.y) || ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_401.s11175101)).s67)).xxxxxxyy)).s6761363211662007)).s9) , ((l_414.s7 ^= (((l_397 = l_365) & ((VECTOR(int32_t, 16))(0x049A6010L, ((VECTOR(int32_t, 4))(p_1020->g_403.s5073)).y, ((l_405[0][5][1] = l_404[4]) != l_406), 0x54092E7EL, (safe_rshift_func_int8_t_s_u((p_1020->g_11 &= (l_409 != l_410)), 1)), 1L, (-8L), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(0x53494672L, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_411.s00)).yxxx)).zxxwywwzwwxwwwzw, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(0x693874B7L, ((VECTOR(int32_t, 2))(0x5A28A2CFL, 1L)), 0L, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(l_412.se3)).yyxy, ((VECTOR(uint16_t, 8))(p_54, (((*l_413) = l_410) == (void*)0), 0x59D9L, ((VECTOR(uint16_t, 2))(8UL)), p_54, 0x3302L, 0x6662L)).hi))))).s56, ((VECTOR(int32_t, 2))(0x183AEE0BL))))).xxxyyxxx)).s3373630767627770, ((VECTOR(int32_t, 16))(1L))))).sc6, (int32_t)(-2L)))), 0x2801F09CL, 0x3A9AFF04L)), (-1L), 0x485183ECL, (*p_52), 0L, (-1L), (*p_52), ((VECTOR(int32_t, 2))(0x236B1787L)), (-1L), (-9L), 0x66AFCAE5L, (-1L))).s08, ((VECTOR(int32_t, 2))(0x097F66DEL))))).yxyy, ((VECTOR(int32_t, 4))(8L))))))).odd)), ((VECTOR(int32_t, 2))((-6L))), ((VECTOR(int32_t, 2))((-1L)))))), ((VECTOR(int32_t, 4))((-8L))), 0x669FF21DL)).even, ((VECTOR(int32_t, 4))(0x0B6EF426L)), ((VECTOR(int32_t, 4))(0x1AA7195AL))))), 0x3AE652ACL, 1L, (-1L), 1L, 1L)).sa) < 0xE362L)) , p_1020->g_388.s8)), 10))) < 0x5122721DACD8556FL) > 0x5FA6L);
    }
    l_397 &= (safe_div_func_int16_t_s_s(p_54, (++p_1020->g_133.z)));
    if ((l_414.s7 | 0x5ED282D5B5880232L))
    { /* block id: 189 */
        int64_t l_431 = 0x02BADBE4D7E601FDL;
        int8_t *l_440 = &p_1020->g_11;
        int16_t *l_441 = (void*)0;
        int16_t *l_442 = &p_1020->g_297;
        uint32_t l_443 = 0UL;
        int32_t *l_444 = &p_1020->g_88;
        int32_t l_462 = 0x5E5CAB97L;
        VECTOR(uint64_t, 4) l_476 = (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 18446744073709551615UL), 18446744073709551615UL);
        int i;
        (*l_444) |= (l_360.x , (safe_div_func_uint64_t_u_u((((safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 4))(0x5857L, (l_418[1] == (void*)0), 0x38BEL, 0L)).z)) , (GROUP_DIVERGE(0, 1) | p_1020->g_179.x)) , ((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(p_1020->g_426.yyyy)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((((--p_1020->g_133.z) | ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((-1L) & ((*l_442) = (safe_rshift_func_uint16_t_u_s(1UL, (((*l_440) = 0x6FL) >= ((p_1020->g_194 , (l_397 & p_1020->g_70)) > p_54)))))), p_54)), 0)) < 1UL)) > (-5L)), l_431)) == 0x5153B631F88BDE1AL), l_431)), l_412.se, (-1L), 2L)).lo))))).lo, (-6L))) ^ l_443)), p_53)));
        l_462 &= (safe_add_func_int8_t_s_s((p_53 , (-1L)), (safe_unary_minus_func_uint64_t_u(((0x72D43B3FL != (((*l_444) = ((p_1020->g_448 == &l_409) , (safe_sub_func_uint8_t_u_u((+(((p_1020->g_133.y |= (++p_1020->g_270.x)) != (*l_444)) ^ (safe_sub_func_int8_t_s_s(((65535UL != (safe_mul_func_int16_t_s_s(l_414.s1, (l_412.sc >= l_460.s6)))) == l_461), 0x6BL)))), l_397)))) & 0xA3370FCEL)) , p_1020->g_11)))));
        for (p_1020->g_91 = 0; (p_1020->g_91 != (-20)); --p_1020->g_91)
        { /* block id: 200 */
            int32_t l_469 = 0x7AD6B3BEL;
            int32_t l_472 = 0x1BCB4870L;
            int32_t l_473 = 0L;
            int64_t *l_488 = &p_1020->g_149;
            int64_t **l_487 = &l_488;
            for (p_1020->g_149 = 7; (p_1020->g_149 != (-26)); p_1020->g_149 = safe_sub_func_uint8_t_u_u(p_1020->g_149, 2))
            { /* block id: 203 */
                uint8_t l_481[9];
                int32_t l_482 = 1L;
                int64_t ***l_489 = &l_487;
                int64_t **l_490 = &l_488;
                int32_t l_491 = 0x143EBFB4L;
                int i;
                for (i = 0; i < 9; i++)
                    l_481[i] = 7UL;
                l_491 = (safe_div_func_uint8_t_u_u(((l_469 , l_469) >= ((((+0x0C794C4F24BA6EC0L) || (((safe_mod_func_int32_t_s_s(((p_1020->g_179.w--) || ((l_473 = (p_53 & (&p_1020->g_12 == p_51))) < (((VECTOR(uint64_t, 16))(l_476.yzwwyyyzywywwxzx)).s8 , ((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(l_481[1], (l_482 = l_469))), (safe_div_func_uint16_t_u_u((((*l_489) = ((safe_add_func_int32_t_s_s((*l_444), p_54)) , l_487)) != l_490), p_53)))) != 0UL)))), p_54)) <= l_360.x) < p_53)) , p_1020->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1020->tid, 6))]) <= 1L)), 1UL));
                (*l_444) |= l_481[1];
                if ((atomic_inc(&p_1020->l_atomic_input[0]) == 5))
                { /* block id: 211 */
                    int32_t l_493 = 6L;
                    int32_t *l_492[10][9][2] = {{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}},{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}},{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}},{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}},{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}},{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}},{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}},{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}},{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}},{{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0},{&l_493,(void*)0}}};
                    int i, j, k;
                    l_492[3][2][0] = l_492[5][0][0];
                    unsigned int result = 0;
                    result += l_493;
                    atomic_add(&p_1020->l_special_values[0], result);
                }
                else
                { /* block id: 213 */
                    (1 + 1);
                }
            }
        }
    }
    else
    { /* block id: 218 */
        uint16_t **l_494 = &l_418[0];
        p_1020->g_495 = l_494;
    }
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_55(int16_t  p_56, int8_t * p_57, struct S1 * p_1020)
{ /* block id: 164 */
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_1020->g_11 p_1020->g_70 p_1020->g_15 p_1020->g_92 p_1020->g_88 p_1020->g_91 p_1020->g_12 p_1020->g_comm_values p_1020->g_133 p_1020->g_149 p_1020->g_179 p_1020->g_152 p_1020->g_200 p_1020->g_203 p_1020->g_214 p_1020->g_219 p_1020->g_225 p_1020->g_270 p_1020->g_269 p_1020->g_340
 * writes: p_1020->g_11 p_1020->g_12 p_1020->g_70 p_1020->g_88 p_1020->g_92 p_1020->g_159 p_1020->g_194 p_1020->g_195 p_1020->g_200 p_1020->g_203 p_1020->g_214 p_1020->g_199 p_1020->g_225 p_1020->g_270 p_1020->g_161 p_1020->g_297 p_1020->g_322 p_1020->g_149
 */
uint16_t  func_64(int8_t * p_65, int8_t * p_66, int64_t  p_67, struct S1 * p_1020)
{ /* block id: 8 */
    int8_t *l_120 = &p_1020->g_11;
    int8_t l_132 = 0x01L;
    VECTOR(int8_t, 16) l_284 = (VECTOR(int8_t, 16))(0x20L, (VECTOR(int8_t, 4))(0x20L, (VECTOR(int8_t, 2))(0x20L, 0x29L), 0x29L), 0x29L, 0x20L, 0x29L, (VECTOR(int8_t, 2))(0x20L, 0x29L), (VECTOR(int8_t, 2))(0x20L, 0x29L), 0x20L, 0x29L, 0x20L, 0x29L);
    VECTOR(uint16_t, 16) l_296 = (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 1UL), 1UL), 1UL, 65533UL, 1UL, (VECTOR(uint16_t, 2))(65533UL, 1UL), (VECTOR(uint16_t, 2))(65533UL, 1UL), 65533UL, 1UL, 65533UL, 1UL);
    int32_t l_321[1][5];
    VECTOR(int16_t, 8) l_337 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3FD5L), 0x3FD5L), 0x3FD5L, 0L, 0x3FD5L);
    int32_t l_345 = (-2L);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_321[i][j] = (-4L);
    }
    for (p_1020->g_11 = 0; (p_1020->g_11 <= 23); p_1020->g_11++)
    { /* block id: 11 */
        uint32_t l_89[9][4][6] = {{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}}};
        int32_t l_125 = 0x797FFC2CL;
        VECTOR(uint64_t, 8) l_302 = (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xC5736D9775552FDEL), 0xC5736D9775552FDEL), 0xC5736D9775552FDEL, 18446744073709551609UL, 0xC5736D9775552FDEL);
        int i, j, k;
        for (p_1020->g_12 = 4; (p_1020->g_12 >= 13); ++p_1020->g_12)
        { /* block id: 14 */
            VECTOR(uint8_t, 16) l_80 = (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 255UL), 255UL), 255UL, 254UL, 255UL, (VECTOR(uint8_t, 2))(254UL, 255UL), (VECTOR(uint8_t, 2))(254UL, 255UL), 254UL, 255UL, 254UL, 255UL);
            int32_t l_81[5] = {0x6692E2E7L,0x6692E2E7L,0x6692E2E7L,0x6692E2E7L,0x6692E2E7L};
            int32_t l_126 = 0x3C95D73FL;
            int32_t l_273 = (-1L);
            int32_t *l_274 = &p_1020->g_88;
            int64_t *l_279 = &p_1020->g_149;
            VECTOR(int32_t, 8) l_305 = (VECTOR(int32_t, 8))(0x0F96C164L, (VECTOR(int32_t, 4))(0x0F96C164L, (VECTOR(int32_t, 2))(0x0F96C164L, 0x0C6A9FBCL), 0x0C6A9FBCL), 0x0C6A9FBCL, 0x0F96C164L, 0x0C6A9FBCL);
            int i;
            for (p_67 = (-16); (p_67 == 17); p_67 = safe_add_func_uint32_t_u_u(p_67, 1))
            { /* block id: 17 */
                uint8_t *l_82 = &p_1020->g_70;
                int32_t *l_85 = (void*)0;
                int32_t *l_86 = (void*)0;
                int32_t *l_87 = &p_1020->g_88;
                int32_t *l_90[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_90[i] = &l_81[1];
                (*l_87) = (safe_add_func_uint8_t_u_u((l_81[1] = ((VECTOR(uint8_t, 8))(l_80.s1c24e814)).s1), ((*l_82)--)));
                l_89[8][1][3] = (p_67 >= p_1020->g_15[3][3][3]);
                p_1020->g_92.s3--;
                l_273 ^= (((safe_rshift_func_int8_t_s_u(func_97(func_103(((safe_rshift_func_int16_t_s_u(((l_81[1] = (safe_mod_func_int64_t_s_s(p_1020->g_11, ((safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((((l_125 = (safe_rshift_func_uint8_t_u_u((((((((safe_sub_func_int8_t_s_s(0x62L, l_89[4][2][5])) ^ ((safe_mul_func_uint16_t_u_u(((void*)0 != l_120), ((((p_67 != (safe_lshift_func_int16_t_s_u((&p_1020->g_11 != p_65), (((*l_82) = (((safe_lshift_func_uint8_t_u_u((((p_1020->g_88 <= p_1020->g_91) & (-1L)) != p_67), 0)) ^ 1L) , p_1020->g_88)) ^ 0x3DL)))) , FAKE_DIVERGE(p_1020->local_2_offset, get_local_id(2), 10)) & 0x25219CEAL) , 65534UL))) == (*p_66))) ^ (-1L)) , l_81[0]) || 0UL) > 255UL) == p_1020->g_88), p_1020->g_92.s0))) <= l_80.s5) , p_1020->g_comm_values[p_1020->tid]), p_1020->g_15[3][3][3])), 8)) , p_1020->g_70)))) , l_126), p_1020->g_15[2][0][8])) , 4294967288UL), p_1020->g_15[3][3][3], p_1020), l_132, p_67, l_132, p_67, p_1020), l_132)) , (-1L)) ^ p_1020->g_92.s2);
            }
            (*l_274) = p_67;
            if (((void*)0 == &p_65))
            { /* block id: 120 */
                int64_t *l_278 = &p_1020->g_149;
                int64_t **l_277[3];
                VECTOR(uint16_t, 16) l_295 = (VECTOR(uint16_t, 16))(0x84D3L, (VECTOR(uint16_t, 4))(0x84D3L, (VECTOR(uint16_t, 2))(0x84D3L, 65535UL), 65535UL), 65535UL, 0x84D3L, 65535UL, (VECTOR(uint16_t, 2))(0x84D3L, 65535UL), (VECTOR(uint16_t, 2))(0x84D3L, 65535UL), 0x84D3L, 65535UL, 0x84D3L, 65535UL);
                int32_t *l_323 = &l_321[0][1];
                int32_t **l_324 = &l_274;
                int i;
                for (i = 0; i < 3; i++)
                    l_277[i] = &l_278;
                l_125 &= (-1L);
                if (p_67)
                    continue;
                if ((+(&p_1020->g_219 != (((safe_mul_func_int8_t_s_s((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(0x75D4L, (-1L))).xyxyyxxxyyxyyxyy, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))((((l_279 = (void*)0) == ((safe_mul_func_uint16_t_u_u((((((safe_mod_func_uint8_t_u_u((&p_1020->g_70 != l_120), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(4L, 0x4EL, (p_1020->g_15[4][0][2] , (*l_274)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_284.s7e06d092)).s16)), (safe_div_func_uint32_t_u_u(((*p_1020->g_161) = ((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((p_1020->g_91 | ((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_295.s4463ae84093f67a9)).hi)).s4003566052271012, ((VECTOR(uint16_t, 4))(l_296.s7763)).wxyyzxxxzwzwywxw))).sa) < (p_1020->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1020->tid, 6))] <= 0xAD7AL)) | GROUP_DIVERGE(0, 1)), 65535UL)), 4)))) > p_67), p_1020->g_5)) < l_284.s9)), 0x1F47805EL)), (*l_274), 0x22L, (*p_65), ((VECTOR(int8_t, 2))(0x7DL)), 0x05L, p_1020->g_270.x, 0L, 1L, 0x7CL)).even)).s5)) | p_1020->g_297) ^ p_1020->g_11) , p_1020->g_144) < p_1020->g_144), p_67)) , (void*)0)) < 0x4FDDL), (-9L), 0x2A8DL, 0x4A5EL)).xwzzzwwy, ((VECTOR(int16_t, 8))(0L))))).s2724403714211075))))).s3 > (*l_274)), 4L)) , 0x134DL) , &p_1020->g_219))))
                { /* block id: 125 */
                    int32_t *l_298 = &l_81[1];
                    int32_t **l_299 = &p_1020->g_225;
                    (*l_299) = l_298;
                    for (l_125 = 16; (l_125 > 1); --l_125)
                    { /* block id: 129 */
                        (*l_299) = (((VECTOR(uint64_t, 8))(l_302.s26350573)).s6 , &l_125);
                    }
                }
                else
                { /* block id: 132 */
                    int64_t l_310 = 0L;
                    for (l_125 = 0; (l_125 == 12); l_125 = safe_add_func_int16_t_s_s(l_125, 3))
                    { /* block id: 135 */
                        uint32_t *l_315[9][2][10] = {{{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144},{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144}},{{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144},{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144}},{{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144},{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144}},{{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144},{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144}},{{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144},{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144}},{{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144},{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144}},{{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144},{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144}},{{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144},{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144}},{{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144},{(void*)0,(void*)0,&p_1020->g_159,&l_89[7][2][2],&p_1020->g_144,&p_1020->g_144,&l_89[8][1][3],(void*)0,&l_89[8][1][3],&p_1020->g_144}}};
                        uint32_t **l_316 = &p_1020->g_161;
                        int32_t *l_317 = &l_81[1];
                        int16_t *l_318[3];
                        int32_t **l_320 = (void*)0;
                        int32_t ***l_319 = &l_320;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_318[i] = &p_1020->g_91;
                        p_1020->g_322[0] = ((((VECTOR(int32_t, 2))(l_305.s23)).even > (p_67 , (l_321[0][3] = (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((((p_1020->g_297 = (l_310 == ((safe_add_func_int32_t_s_s(((*l_274) = (safe_mul_func_uint16_t_u_u((&l_89[8][1][3] != (void*)0), 0x7BACL))), FAKE_DIVERGE(p_1020->group_0_offset, get_group_id(0), 10))) > ((*l_317) = (((*l_316) = l_315[2][0][2]) == (void*)0))))) , ((*l_319) = &p_1020->g_225)) == &p_1020->g_225) >= p_67), p_1020->g_133.y)) >= 0x54L), p_1020->g_92.s0))))) > p_1020->g_269[0]);
                    }
                    if (l_310)
                        continue;
                }
                (*l_324) = l_323;
            }
            else
            { /* block id: 147 */
                union U0 *l_327 = &p_1020->g_328[2][0][2];
                int32_t l_336 = 0x33BBE830L;
                VECTOR(int16_t, 16) l_338 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4BAAL), 0x4BAAL), 0x4BAAL, 0L, 0x4BAAL, (VECTOR(int16_t, 2))(0L, 0x4BAAL), (VECTOR(int16_t, 2))(0L, 0x4BAAL), 0L, 0x4BAAL, 0L, 0x4BAAL);
                uint64_t *l_339 = (void*)0;
                uint64_t *l_343 = (void*)0;
                uint64_t *l_344 = &p_1020->g_203;
                int i;
                for (p_1020->g_149 = 21; (p_1020->g_149 < 7); p_1020->g_149 = safe_sub_func_uint16_t_u_u(p_1020->g_149, 6))
                { /* block id: 150 */
                    union U0 **l_329 = &l_327;
                    (*l_329) = l_327;
                    return p_67;
                }
                (*l_274) = ((((p_1020->g_88 , (safe_add_func_uint32_t_u_u((((*l_344) = ((safe_unary_minus_func_uint64_t_u((((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(p_1020->g_333.s11750346)), ((VECTOR(uint64_t, 2))(18446744073709551612UL, 18446744073709551608UL)).xxyxxxyx))).s70))).lo < ((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(l_336, (-1L), 0x1956L, 0x5320L, 0x77E9L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_337.s07)), p_1020->g_12, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(l_338.s0e2ba8c6)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((-3L), (l_339 != ((*p_1020->g_161) , (((((VECTOR(uint32_t, 8))(((((0x0423103033FBDFD0L | l_302.s0) , ((VECTOR(int32_t, 4))(p_1020->g_340.yxxy)).x) , p_1020->g_341) != (void*)0), 0xA90955C7L, p_67, (*p_1020->g_161), GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 2))(0x2CD76C0AL)), 4294967291UL)).s5 | p_67) > p_67) , (void*)0))), (-1L), (-1L), p_1020->g_88, 0x3D30L, 0x0BC9L, 0x7669L)).s6122516063516641)).even))).s33, ((VECTOR(int16_t, 2))((-1L)))))).yxxx, (int16_t)l_296.s5))), (-1L))), p_1020->g_203, 5L, (-1L))).s220e, ((VECTOR(int16_t, 4))(0x2542L))))).yzxzwxxxwyxwzzyz, (int16_t)p_67))).odd)), ((VECTOR(int16_t, 8))(2L)), ((VECTOR(int16_t, 8))(0x7C57L))))).s2713374152540700)).s4, 2L)) < 0x05L)))) <= p_1020->g_269[1])) == FAKE_DIVERGE(p_1020->global_2_offset, get_global_id(2), 10)), l_89[8][1][3]))) , l_125) , l_338.sd) || p_67);
                l_274 = &p_1020->g_88;
            }
            l_345 = ((*l_274) = p_1020->g_340.y);
        }
    }
    return p_67;
}


/* ------------------------------------------ */
/* 
 * reads : p_1020->g_133 p_1020->g_5 p_1020->g_144 p_1020->g_152 p_1020->g_15 p_1020->g_88 p_1020->g_149 p_1020->g_159 p_1020->g_12 p_1020->g_179 p_1020->g_92 p_1020->g_200 p_1020->g_203 p_1020->g_214 p_1020->g_219 p_1020->g_199 p_1020->g_225 p_1020->g_270 p_1020->g_comm_values
 * writes: p_1020->g_144 p_1020->g_149 p_1020->g_161 p_1020->g_159 p_1020->g_70 p_1020->g_88 p_1020->g_194 p_1020->g_195 p_1020->g_200 p_1020->g_203 p_1020->g_214 p_1020->g_199 p_1020->g_225 p_1020->g_270
 */
int8_t  func_97(int8_t * p_98, int32_t  p_99, uint32_t  p_100, uint64_t  p_101, uint32_t  p_102, struct S1 * p_1020)
{ /* block id: 34 */
    VECTOR(uint16_t, 8) l_134 = (VECTOR(uint16_t, 8))(0xD68DL, (VECTOR(uint16_t, 4))(0xD68DL, (VECTOR(uint16_t, 2))(0xD68DL, 0xC9C7L), 0xC9C7L), 0xC9C7L, 0xD68DL, 0xC9C7L);
    uint16_t *l_135 = (void*)0;
    uint16_t *l_136 = (void*)0;
    uint16_t *l_137 = (void*)0;
    uint16_t *l_138 = (void*)0;
    uint16_t *l_139 = (void*)0;
    uint16_t *l_140[7];
    int32_t l_141 = 1L;
    uint32_t *l_142 = (void*)0;
    uint32_t *l_143 = &p_1020->g_144;
    int64_t *l_147 = (void*)0;
    int64_t *l_148 = &p_1020->g_149;
    uint32_t *l_158 = &p_1020->g_159;
    uint32_t **l_160[7] = {&l_158,&l_142,&l_158,&l_158,&l_142,&l_158,&l_158};
    int8_t *l_175 = (void*)0;
    VECTOR(int64_t, 2) l_188 = (VECTOR(int64_t, 2))((-3L), 0L);
    int32_t *l_213[5][2];
    uint16_t **l_220 = &l_136;
    int i, j;
    for (i = 0; i < 7; i++)
        l_140[i] = (void*)0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_213[i][j] = (void*)0;
    }
    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((((((VECTOR(uint16_t, 2))(p_1020->g_133.xw)).hi | p_100) < (((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 16))(l_134.s4223253770725677)), ((VECTOR(uint16_t, 8))((l_141 = p_1020->g_5), (((*l_143)--) & ((((*l_148) = p_100) , 0UL) < (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(p_1020->g_152.xy)).hi, (safe_sub_func_uint16_t_u_u(((((safe_unary_minus_func_int8_t_s(p_1020->g_15[3][3][3])) | FAKE_DIVERGE(p_1020->group_1_offset, get_group_id(1), 10)) == (safe_rshift_func_uint8_t_u_s((p_1020->g_88 & ((p_1020->g_161 = l_158) != &p_1020->g_159)), ((safe_add_func_uint8_t_u_u(((((0UL == l_141) ^ (-1L)) , p_102) == l_134.s3), l_134.s1)) , l_134.s7)))) | p_1020->g_152.y), l_134.s1)))))), 0UL, ((VECTOR(uint16_t, 2))(0x9F27L)), 5UL, 0UL, 0x14BEL)).s7561407702663526))).sb || p_1020->g_149)) , 2L), 7L, 0x7104F43FL, 4L)))).y)
    { /* block id: 39 */
        int16_t l_166 = 4L;
        int32_t l_168 = 0x016B724CL;
        VECTOR(int32_t, 8) l_177 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L));
        VECTOR(uint8_t, 8) l_180 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        int32_t *l_181[1];
        int8_t **l_207[10];
        VECTOR(int16_t, 4) l_208 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4D1DL), 0x4D1DL);
        int i;
        for (i = 0; i < 1; i++)
            l_181[i] = (void*)0;
        for (i = 0; i < 10; i++)
            l_207[i] = &l_175;
        for (p_1020->g_159 = 0; (p_1020->g_159 == 34); p_1020->g_159 = safe_add_func_uint32_t_u_u(p_1020->g_159, 6))
        { /* block id: 42 */
            uint8_t *l_169 = (void*)0;
            uint8_t *l_170 = &p_1020->g_70;
            int8_t *l_174 = &p_1020->g_11;
            int8_t **l_173[5][6] = {{&l_174,&l_174,&l_174,&l_174,&l_174,&l_174},{&l_174,&l_174,&l_174,&l_174,&l_174,&l_174},{&l_174,&l_174,&l_174,&l_174,&l_174,&l_174},{&l_174,&l_174,&l_174,&l_174,&l_174,&l_174},{&l_174,&l_174,&l_174,&l_174,&l_174,&l_174}};
            VECTOR(int32_t, 8) l_176 = (VECTOR(int32_t, 8))(0x34598823L, (VECTOR(int32_t, 4))(0x34598823L, (VECTOR(int32_t, 2))(0x34598823L, (-1L)), (-1L)), (-1L), 0x34598823L, (-1L));
            int32_t *l_178 = &l_141;
            int i, j;
            (*l_178) = (((p_1020->g_133.x | (l_166 | ((!(safe_unary_minus_func_uint16_t_u((l_168 ^= FAKE_DIVERGE(p_1020->local_1_offset, get_local_id(1), 10))))) && ((*l_170) = 0xABL)))) | (safe_lshift_func_int16_t_s_s(((((l_175 = (p_98 = p_98)) != &p_1020->g_11) | (~p_101)) , p_99), 6))) , ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_176.s32)).yxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_177.s03)).xyyx)), ((VECTOR(int32_t, 2))((-6L), 0x277A29E1L)).yyyx))).z);
            return (*p_98);
        }
        p_99 = ((((VECTOR(uint32_t, 16))(p_1020->g_179.zxwxyzwxwzwwxzwz)).sd != p_100) == ((VECTOR(uint8_t, 8))(l_180.s12035276)).s5);
        for (p_1020->g_88 = (-29); (p_1020->g_88 <= 1); ++p_1020->g_88)
        { /* block id: 53 */
            int8_t **l_189[2];
            int32_t l_191 = 0L;
            uint64_t *l_193 = &p_1020->g_194;
            uint32_t *l_209 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_189[i] = (void*)0;
            p_1020->g_195 = (((safe_mod_func_int16_t_s_s((((safe_add_func_int16_t_s_s(p_1020->g_92.s1, (((*l_193) = ((+((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 2))(l_188.xx)).yxyy, (int64_t)((&p_1020->g_70 != (void*)0) , (!((((0x32BF8D3612782790L <= p_1020->g_15[3][1][4]) , (p_1020->g_190 = p_98)) != (l_191 , (p_1020->g_192 = &p_1020->g_12))) || (!p_102)))), (int64_t)l_191))).y) < 0x2C64B0840576B59DL)) == GROUP_DIVERGE(1, 1)))) ^ p_1020->g_149) > p_1020->g_179.z), p_1020->g_152.x)) <= 1L) > 1L);
            for (p_100 = 0; (p_100 < 44); p_100++)
            { /* block id: 60 */
                p_1020->g_200++;
                if (p_1020->g_200)
                    continue;
            }
            p_1020->g_203 ^= l_191;
            p_99 = ((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 8))(((1UL || (((p_100 ^ ((safe_rshift_func_int16_t_s_u((&p_1020->g_192 != (l_207[5] = &p_1020->g_192)), 2)) && ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(4L, 0x4BA4L)))))), 7L, 0x1FF9L)).even)).hi)) != (((p_99 >= ((VECTOR(int16_t, 16))(l_208.wzzyxywyzwyzwwwy)).sd) <= 0x08L) | (FAKE_DIVERGE(p_1020->local_2_offset, get_local_id(2), 10) > ((&p_1020->g_144 != l_209) | (l_134.s3 | l_188.x))))) != 0UL)) < l_134.s6), (-10L), p_1020->g_92.s0, 0x4C1CC095L, ((VECTOR(int32_t, 4))((-9L))))).s4)) < 4294967295UL);
        }
    }
    else
    { /* block id: 68 */
        int32_t *l_211 = &p_1020->g_88;
        int32_t **l_210 = &l_211;
        int32_t *l_212 = &l_141;
        (*l_210) = &l_141;
        l_212 = (void*)0;
    }
    p_1020->g_214++;
    p_1020->g_88 = ((((&p_98 != &l_175) | FAKE_DIVERGE(p_1020->global_1_offset, get_global_id(1), 10)) <= (((*l_220) = p_1020->g_219) != (void*)0)) & (p_99 |= 0x18F066AAL));
    for (p_1020->g_199 = 0; (p_1020->g_199 > 4); p_1020->g_199 = safe_add_func_uint16_t_u_u(p_1020->g_199, 7))
    { /* block id: 78 */
        int32_t *l_223 = &l_141;
        int32_t **l_224[4] = {&l_213[1][0],&l_213[1][0],&l_213[1][0],&l_213[1][0]};
        int64_t *l_268[3];
        int i;
        for (i = 0; i < 3; i++)
            l_268[i] = (void*)0;
        p_1020->g_225 = l_223;
        if ((atomic_inc(&p_1020->l_atomic_input[37]) == 3))
        { /* block id: 81 */
            int32_t l_226[7][8][1];
            int32_t l_247 = 0x49858274L;
            uint32_t l_248[3];
            uint64_t l_249 = 0UL;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_226[i][j][k] = 0L;
                }
            }
            for (i = 0; i < 3; i++)
                l_248[i] = 0x17ADB72AL;
            for (l_226[1][0][0] = 0; (l_226[1][0][0] > 19); l_226[1][0][0]++)
            { /* block id: 84 */
                uint8_t l_229 = 0xE3L;
                int32_t *l_230 = (void*)0;
                int32_t l_232 = 1L;
                int32_t *l_231 = &l_232;
                int32_t *l_233[10] = {&l_232,&l_232,&l_232,&l_232,&l_232,&l_232,&l_232,&l_232,&l_232,&l_232};
                int8_t l_234 = 0x4DL;
                int32_t *l_245[1];
                int32_t *l_246 = &l_232;
                int i;
                for (i = 0; i < 1; i++)
                    l_245[i] = &l_232;
                l_231 = (l_229 , l_230);
                l_233[8] = (void*)0;
                if (l_234)
                { /* block id: 87 */
                    int16_t l_235 = (-10L);
                    int8_t l_236 = (-8L);
                    VECTOR(int32_t, 8) l_237 = (VECTOR(int32_t, 8))(0x2BCC026CL, (VECTOR(int32_t, 4))(0x2BCC026CL, (VECTOR(int32_t, 2))(0x2BCC026CL, (-1L)), (-1L)), (-1L), 0x2BCC026CL, (-1L));
                    uint8_t l_238 = 1UL;
                    uint32_t l_239[3][7] = {{0xF066ECFEL,0xBB6D1ACEL,0xBB6D1ACEL,0xF066ECFEL,0xF066ECFEL,0xBB6D1ACEL,0xBB6D1ACEL},{0xF066ECFEL,0xBB6D1ACEL,0xBB6D1ACEL,0xF066ECFEL,0xF066ECFEL,0xBB6D1ACEL,0xBB6D1ACEL},{0xF066ECFEL,0xBB6D1ACEL,0xBB6D1ACEL,0xF066ECFEL,0xF066ECFEL,0xBB6D1ACEL,0xBB6D1ACEL}};
                    int i, j;
                    l_237.s0 = (l_236 = l_235);
                    l_239[2][0] = l_238;
                }
                else
                { /* block id: 91 */
                    int32_t l_240 = 7L;
                    for (l_240 = 3; (l_240 > (-3)); l_240 = safe_sub_func_uint16_t_u_u(l_240, 1))
                    { /* block id: 94 */
                        uint16_t l_243 = 65526UL;
                        uint32_t l_244 = 0UL;
                        l_244 = l_243;
                    }
                }
                l_246 = l_245[0];
            }
            l_249 = (l_248[0] ^= l_247);
            unsigned int result = 0;
            int l_226_i0, l_226_i1, l_226_i2;
            for (l_226_i0 = 0; l_226_i0 < 7; l_226_i0++) {
                for (l_226_i1 = 0; l_226_i1 < 8; l_226_i1++) {
                    for (l_226_i2 = 0; l_226_i2 < 1; l_226_i2++) {
                        result += l_226[l_226_i0][l_226_i1][l_226_i2];
                    }
                }
            }
            result += l_247;
            int l_248_i0;
            for (l_248_i0 = 0; l_248_i0 < 3; l_248_i0++) {
                result += l_248[l_248_i0];
            }
            result += l_249;
            atomic_add(&p_1020->l_special_values[37], result);
        }
        else
        { /* block id: 102 */
            (1 + 1);
        }
        for (p_1020->g_214 = (-24); (p_1020->g_214 < 8); ++p_1020->g_214)
        { /* block id: 107 */
            uint32_t l_262 = 0x81D988B7L;
            VECTOR(int32_t, 16) l_265 = (VECTOR(int32_t, 16))(0x698489BAL, (VECTOR(int32_t, 4))(0x698489BAL, (VECTOR(int32_t, 2))(0x698489BAL, (-1L)), (-1L)), (-1L), 0x698489BAL, (-1L), (VECTOR(int32_t, 2))(0x698489BAL, (-1L)), (VECTOR(int32_t, 2))(0x698489BAL, (-1L)), 0x698489BAL, (-1L), 0x698489BAL, (-1L));
            int i;
            (*l_223) = ((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(0UL, 0xD25EL)).yyxx, ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0xDA93L, 65527UL, 1UL, 0xE4CAL)), p_102, (safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_262 | ((((safe_add_func_int64_t_s_s(0x79344E7126FB4814L, p_1020->g_5)) , &p_1020->g_88) == (void*)0) & ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(l_265.s396e)).xwxzzxywzzxzxwxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x3A19FD08L)).xyyx)).zwzzyxwzxywyzwyz))).s6)), (GROUP_DIVERGE(0, 1) <= (~p_102)))), (safe_rshift_func_int16_t_s_s((&p_99 != (p_1020->g_225 = &p_99)), p_1020->g_199)))), p_1020->g_92.s3)), p_102)), 0xA1EBL, 65526UL, 0xA79FL, 9UL, ((VECTOR(uint16_t, 4))(65528UL)), 65535UL, 0UL)), ((VECTOR(uint16_t, 16))(65526UL))))).s98)).yxyx, ((VECTOR(uint16_t, 4))(0xD423L))))).zywxyyyz, ((VECTOR(uint16_t, 8))(65532UL))))).even))).w, p_1020->g_92.s2)) < p_100);
            (*p_1020->g_225) = (~p_102);
            (*l_223) = (&p_1020->g_149 != l_268[0]);
            p_1020->g_225 = &p_1020->g_88;
        }
        p_1020->g_270.y--;
    }
    return p_1020->g_comm_values[p_1020->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_1020->g_70
 * writes: p_1020->g_70
 */
int8_t * func_103(uint32_t  p_104, int64_t  p_105, struct S1 * p_1020)
{ /* block id: 26 */
    uint16_t l_130 = 0x3653L;
    int8_t *l_131 = &p_1020->g_12;
    for (p_1020->g_70 = 29; (p_1020->g_70 == 28); p_1020->g_70--)
    { /* block id: 29 */
        int32_t *l_129 = (void*)0;
        l_130 ^= 0x27A39A48L;
        if (p_104)
            break;
    }
    return l_131;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[54];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 54; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[54];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 54; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S1 c_1021;
    struct S1* p_1020 = &c_1021;
    struct S1 c_1022 = {
        0x1C157478L, // p_1020->g_5
        0x03L, // p_1020->g_11
        0x26L, // p_1020->g_12
        0x1C4AD153L, // p_1020->g_13
        {{{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L}},{{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L}},{{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L}},{{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L}},{{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L}},{{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L}},{{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L},{0x7F453ACC8D4E572AL,0xB58B1CA0702DD068L,0x018227FD5D1AFC43L,0x72E30E5DEFA766E9L,0xCBED49F2EA6DA23AL,4UL,4UL,0xCBED49F2EA6DA23AL,0x72E30E5DEFA766E9L}}}, // p_1020->g_15
        (VECTOR(uint64_t, 2))(0xDD4F1ACCADAFA074L, 0x6B756FC104D70CC3L), // p_1020->g_36
        252UL, // p_1020->g_70
        0x3060C5C9L, // p_1020->g_88
        0L, // p_1020->g_91
        (VECTOR(uint8_t, 8))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0xBDL), 0xBDL), 0xBDL, 2UL, 0xBDL), // p_1020->g_92
        (VECTOR(uint16_t, 4))(0xDA7EL, (VECTOR(uint16_t, 2))(0xDA7EL, 0x2D92L), 0x2D92L), // p_1020->g_133
        0xCEBBACF0L, // p_1020->g_144
        2L, // p_1020->g_149
        (VECTOR(int8_t, 2))((-2L), (-4L)), // p_1020->g_152
        0xAD10667DL, // p_1020->g_159
        &p_1020->g_159, // p_1020->g_161
        (VECTOR(uint32_t, 4))(0x9C98D7DDL, (VECTOR(uint32_t, 2))(0x9C98D7DDL, 2UL), 2UL), // p_1020->g_179
        (void*)0, // p_1020->g_190
        (void*)0, // p_1020->g_192
        0x9D31E3E46689637CL, // p_1020->g_194
        0UL, // p_1020->g_195
        1L, // p_1020->g_198
        0x0CB6D31DL, // p_1020->g_199
        0x6A995A4DL, // p_1020->g_200
        0x16DF552267BA3AC3L, // p_1020->g_203
        0x2B50C761L, // p_1020->g_214
        (void*)0, // p_1020->g_219
        &p_1020->g_88, // p_1020->g_225
        {0x03D83071L,0x03D83071L}, // p_1020->g_269
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x64FBL), 0x64FBL), // p_1020->g_270
        0L, // p_1020->g_297
        {248UL,248UL,248UL}, // p_1020->g_322
        {{{{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0}}}}, // p_1020->g_328
        (VECTOR(uint64_t, 8))(0xDC308128F5E78604L, (VECTOR(uint64_t, 4))(0xDC308128F5E78604L, (VECTOR(uint64_t, 2))(0xDC308128F5E78604L, 1UL), 1UL), 1UL, 0xDC308128F5E78604L, 1UL), // p_1020->g_333
        (VECTOR(int32_t, 2))(0x7F698902L, 3L), // p_1020->g_340
        (void*)0, // p_1020->g_342
        &p_1020->g_342, // p_1020->g_341
        (-8L), // p_1020->g_347
        (VECTOR(int8_t, 2))((-6L), 0x7AL), // p_1020->g_377
        (VECTOR(int32_t, 2))(4L, 7L), // p_1020->g_386
        (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 5L), 5L), 5L, (-4L), 5L, (VECTOR(int32_t, 2))((-4L), 5L), (VECTOR(int32_t, 2))((-4L), 5L), (-4L), 5L, (-4L), 5L), // p_1020->g_388
        (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x10DC5FAFL), 0x10DC5FAFL), 0x10DC5FAFL, 8L, 0x10DC5FAFL), // p_1020->g_403
        (VECTOR(int8_t, 2))(0x20L, 0x39L), // p_1020->g_426
        (VECTOR(uint64_t, 16))(0xDCEC4B0220FBB6B6L, (VECTOR(uint64_t, 4))(0xDCEC4B0220FBB6B6L, (VECTOR(uint64_t, 2))(0xDCEC4B0220FBB6B6L, 0UL), 0UL), 0UL, 0xDCEC4B0220FBB6B6L, 0UL, (VECTOR(uint64_t, 2))(0xDCEC4B0220FBB6B6L, 0UL), (VECTOR(uint64_t, 2))(0xDCEC4B0220FBB6B6L, 0UL), 0xDCEC4B0220FBB6B6L, 0UL, 0xDCEC4B0220FBB6B6L, 0UL), // p_1020->g_450
        0UL, // p_1020->g_451
        &p_1020->g_451, // p_1020->g_449
        &p_1020->g_449, // p_1020->g_448
        &p_1020->g_219, // p_1020->g_495
        (void*)0, // p_1020->g_508
        &p_1020->g_508, // p_1020->g_507
        &p_1020->g_161, // p_1020->g_569
        &p_1020->g_5, // p_1020->g_583
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL, 65535UL, 65535UL, 65535UL), // p_1020->g_599
        (VECTOR(int32_t, 2))((-1L), 0x1091679DL), // p_1020->g_602
        (VECTOR(int32_t, 2))(0x76A797A2L, 1L), // p_1020->g_603
        (VECTOR(int32_t, 2))(0x3CE2A6F3L, 0L), // p_1020->g_605
        (VECTOR(int32_t, 4))(0x6984E226L, (VECTOR(int32_t, 2))(0x6984E226L, 1L), 1L), // p_1020->g_606
        {{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}},{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}},{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}},{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}},{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}},{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}},{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}},{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}},{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}},{{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192},{(void*)0,&p_1020->g_190,&p_1020->g_192,&p_1020->g_190,&p_1020->g_192}}}, // p_1020->g_612
        (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 1L), 1L), 1L, 3L, 1L, (VECTOR(int64_t, 2))(3L, 1L), (VECTOR(int64_t, 2))(3L, 1L), 3L, 1L, 3L, 1L), // p_1020->g_616
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x611C1FFDF5B400C1L), 0x611C1FFDF5B400C1L), // p_1020->g_617
        (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0x76C3B076C605BDD5L), 0x76C3B076C605BDD5L), // p_1020->g_618
        &p_1020->g_322[0], // p_1020->g_644
        (VECTOR(uint16_t, 2))(0UL, 0x81E6L), // p_1020->g_659
        (VECTOR(uint16_t, 2))(0xB74FL, 65535UL), // p_1020->g_661
        (VECTOR(uint16_t, 2))(65535UL, 0x1434L), // p_1020->g_665
        (VECTOR(int8_t, 16))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x49L), 0x49L), 0x49L, 0x30L, 0x49L, (VECTOR(int8_t, 2))(0x30L, 0x49L), (VECTOR(int8_t, 2))(0x30L, 0x49L), 0x30L, 0x49L, 0x30L, 0x49L), // p_1020->g_668
        {0}, // p_1020->g_685
        &p_1020->g_88, // p_1020->g_744
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 18446744073709551615UL), // p_1020->g_749
        (VECTOR(uint64_t, 8))(0xEBFBC263B7E6E56BL, (VECTOR(uint64_t, 4))(0xEBFBC263B7E6E56BL, (VECTOR(uint64_t, 2))(0xEBFBC263B7E6E56BL, 0xC92B778DA3DF5EF9L), 0xC92B778DA3DF5EF9L), 0xC92B778DA3DF5EF9L, 0xEBFBC263B7E6E56BL, 0xC92B778DA3DF5EF9L), // p_1020->g_750
        (VECTOR(int8_t, 8))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0x75L), 0x75L), 0x75L, 0x5EL, 0x75L), // p_1020->g_784
        (VECTOR(uint16_t, 8))(0xD4D1L, (VECTOR(uint16_t, 4))(0xD4D1L, (VECTOR(uint16_t, 2))(0xD4D1L, 0x2A27L), 0x2A27L), 0x2A27L, 0xD4D1L, 0x2A27L), // p_1020->g_788
        &p_1020->g_297, // p_1020->g_794
        (VECTOR(int64_t, 8))(0x1262F50779DAC6CFL, (VECTOR(int64_t, 4))(0x1262F50779DAC6CFL, (VECTOR(int64_t, 2))(0x1262F50779DAC6CFL, 0x6BF2FB73B166DC61L), 0x6BF2FB73B166DC61L), 0x6BF2FB73B166DC61L, 0x1262F50779DAC6CFL, 0x6BF2FB73B166DC61L), // p_1020->g_825
        (VECTOR(int32_t, 2))(0L, 0x3B578602L), // p_1020->g_880
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-10L)), (-10L)), // p_1020->g_885
        (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 1UL), 1UL), 1UL, 251UL, 1UL, (VECTOR(uint8_t, 2))(251UL, 1UL), (VECTOR(uint8_t, 2))(251UL, 1UL), 251UL, 1UL, 251UL, 1UL), // p_1020->g_909
        (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 9UL), 9UL), // p_1020->g_910
        (VECTOR(uint16_t, 16))(0x3839L, (VECTOR(uint16_t, 4))(0x3839L, (VECTOR(uint16_t, 2))(0x3839L, 0x38C0L), 0x38C0L), 0x38C0L, 0x3839L, 0x38C0L, (VECTOR(uint16_t, 2))(0x3839L, 0x38C0L), (VECTOR(uint16_t, 2))(0x3839L, 0x38C0L), 0x3839L, 0x38C0L, 0x3839L, 0x38C0L), // p_1020->g_925
        (VECTOR(uint16_t, 16))(0x48B1L, (VECTOR(uint16_t, 4))(0x48B1L, (VECTOR(uint16_t, 2))(0x48B1L, 65531UL), 65531UL), 65531UL, 0x48B1L, 65531UL, (VECTOR(uint16_t, 2))(0x48B1L, 65531UL), (VECTOR(uint16_t, 2))(0x48B1L, 65531UL), 0x48B1L, 65531UL, 0x48B1L, 65531UL), // p_1020->g_926
        (VECTOR(int32_t, 16))(0x5C8188EFL, (VECTOR(int32_t, 4))(0x5C8188EFL, (VECTOR(int32_t, 2))(0x5C8188EFL, 0x78980AEBL), 0x78980AEBL), 0x78980AEBL, 0x5C8188EFL, 0x78980AEBL, (VECTOR(int32_t, 2))(0x5C8188EFL, 0x78980AEBL), (VECTOR(int32_t, 2))(0x5C8188EFL, 0x78980AEBL), 0x5C8188EFL, 0x78980AEBL, 0x5C8188EFL, 0x78980AEBL), // p_1020->g_938
        (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-2L)), (-2L)), // p_1020->g_939
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x64C53348L), 0x64C53348L), // p_1020->g_940
        (void*)0, // p_1020->g_966
        0x01A6C088L, // p_1020->g_975
        &p_1020->g_328[0][0][4], // p_1020->g_982
        &p_1020->g_982, // p_1020->g_981
        &p_1020->g_583, // p_1020->g_990
        &p_1020->g_225, // p_1020->g_1016
        0, // p_1020->v_collective
        sequence_input[get_global_id(0)], // p_1020->global_0_offset
        sequence_input[get_global_id(1)], // p_1020->global_1_offset
        sequence_input[get_global_id(2)], // p_1020->global_2_offset
        sequence_input[get_local_id(0)], // p_1020->local_0_offset
        sequence_input[get_local_id(1)], // p_1020->local_1_offset
        sequence_input[get_local_id(2)], // p_1020->local_2_offset
        sequence_input[get_group_id(0)], // p_1020->group_0_offset
        sequence_input[get_group_id(1)], // p_1020->group_1_offset
        sequence_input[get_group_id(2)], // p_1020->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_1020->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1021 = c_1022;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1020);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1020->g_5, "p_1020->g_5", print_hash_value);
    transparent_crc(p_1020->g_11, "p_1020->g_11", print_hash_value);
    transparent_crc(p_1020->g_12, "p_1020->g_12", print_hash_value);
    transparent_crc(p_1020->g_13, "p_1020->g_13", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1020->g_15[i][j][k], "p_1020->g_15[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1020->g_36.x, "p_1020->g_36.x", print_hash_value);
    transparent_crc(p_1020->g_36.y, "p_1020->g_36.y", print_hash_value);
    transparent_crc(p_1020->g_70, "p_1020->g_70", print_hash_value);
    transparent_crc(p_1020->g_88, "p_1020->g_88", print_hash_value);
    transparent_crc(p_1020->g_91, "p_1020->g_91", print_hash_value);
    transparent_crc(p_1020->g_92.s0, "p_1020->g_92.s0", print_hash_value);
    transparent_crc(p_1020->g_92.s1, "p_1020->g_92.s1", print_hash_value);
    transparent_crc(p_1020->g_92.s2, "p_1020->g_92.s2", print_hash_value);
    transparent_crc(p_1020->g_92.s3, "p_1020->g_92.s3", print_hash_value);
    transparent_crc(p_1020->g_92.s4, "p_1020->g_92.s4", print_hash_value);
    transparent_crc(p_1020->g_92.s5, "p_1020->g_92.s5", print_hash_value);
    transparent_crc(p_1020->g_92.s6, "p_1020->g_92.s6", print_hash_value);
    transparent_crc(p_1020->g_92.s7, "p_1020->g_92.s7", print_hash_value);
    transparent_crc(p_1020->g_133.x, "p_1020->g_133.x", print_hash_value);
    transparent_crc(p_1020->g_133.y, "p_1020->g_133.y", print_hash_value);
    transparent_crc(p_1020->g_133.z, "p_1020->g_133.z", print_hash_value);
    transparent_crc(p_1020->g_133.w, "p_1020->g_133.w", print_hash_value);
    transparent_crc(p_1020->g_144, "p_1020->g_144", print_hash_value);
    transparent_crc(p_1020->g_149, "p_1020->g_149", print_hash_value);
    transparent_crc(p_1020->g_152.x, "p_1020->g_152.x", print_hash_value);
    transparent_crc(p_1020->g_152.y, "p_1020->g_152.y", print_hash_value);
    transparent_crc(p_1020->g_159, "p_1020->g_159", print_hash_value);
    transparent_crc(p_1020->g_179.x, "p_1020->g_179.x", print_hash_value);
    transparent_crc(p_1020->g_179.y, "p_1020->g_179.y", print_hash_value);
    transparent_crc(p_1020->g_179.z, "p_1020->g_179.z", print_hash_value);
    transparent_crc(p_1020->g_179.w, "p_1020->g_179.w", print_hash_value);
    transparent_crc(p_1020->g_194, "p_1020->g_194", print_hash_value);
    transparent_crc(p_1020->g_195, "p_1020->g_195", print_hash_value);
    transparent_crc(p_1020->g_198, "p_1020->g_198", print_hash_value);
    transparent_crc(p_1020->g_199, "p_1020->g_199", print_hash_value);
    transparent_crc(p_1020->g_200, "p_1020->g_200", print_hash_value);
    transparent_crc(p_1020->g_203, "p_1020->g_203", print_hash_value);
    transparent_crc(p_1020->g_214, "p_1020->g_214", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1020->g_269[i], "p_1020->g_269[i]", print_hash_value);

    }
    transparent_crc(p_1020->g_270.x, "p_1020->g_270.x", print_hash_value);
    transparent_crc(p_1020->g_270.y, "p_1020->g_270.y", print_hash_value);
    transparent_crc(p_1020->g_270.z, "p_1020->g_270.z", print_hash_value);
    transparent_crc(p_1020->g_270.w, "p_1020->g_270.w", print_hash_value);
    transparent_crc(p_1020->g_297, "p_1020->g_297", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1020->g_322[i], "p_1020->g_322[i]", print_hash_value);

    }
    transparent_crc(p_1020->g_333.s0, "p_1020->g_333.s0", print_hash_value);
    transparent_crc(p_1020->g_333.s1, "p_1020->g_333.s1", print_hash_value);
    transparent_crc(p_1020->g_333.s2, "p_1020->g_333.s2", print_hash_value);
    transparent_crc(p_1020->g_333.s3, "p_1020->g_333.s3", print_hash_value);
    transparent_crc(p_1020->g_333.s4, "p_1020->g_333.s4", print_hash_value);
    transparent_crc(p_1020->g_333.s5, "p_1020->g_333.s5", print_hash_value);
    transparent_crc(p_1020->g_333.s6, "p_1020->g_333.s6", print_hash_value);
    transparent_crc(p_1020->g_333.s7, "p_1020->g_333.s7", print_hash_value);
    transparent_crc(p_1020->g_340.x, "p_1020->g_340.x", print_hash_value);
    transparent_crc(p_1020->g_340.y, "p_1020->g_340.y", print_hash_value);
    transparent_crc(p_1020->g_347, "p_1020->g_347", print_hash_value);
    transparent_crc(p_1020->g_377.x, "p_1020->g_377.x", print_hash_value);
    transparent_crc(p_1020->g_377.y, "p_1020->g_377.y", print_hash_value);
    transparent_crc(p_1020->g_386.x, "p_1020->g_386.x", print_hash_value);
    transparent_crc(p_1020->g_386.y, "p_1020->g_386.y", print_hash_value);
    transparent_crc(p_1020->g_388.s0, "p_1020->g_388.s0", print_hash_value);
    transparent_crc(p_1020->g_388.s1, "p_1020->g_388.s1", print_hash_value);
    transparent_crc(p_1020->g_388.s2, "p_1020->g_388.s2", print_hash_value);
    transparent_crc(p_1020->g_388.s3, "p_1020->g_388.s3", print_hash_value);
    transparent_crc(p_1020->g_388.s4, "p_1020->g_388.s4", print_hash_value);
    transparent_crc(p_1020->g_388.s5, "p_1020->g_388.s5", print_hash_value);
    transparent_crc(p_1020->g_388.s6, "p_1020->g_388.s6", print_hash_value);
    transparent_crc(p_1020->g_388.s7, "p_1020->g_388.s7", print_hash_value);
    transparent_crc(p_1020->g_388.s8, "p_1020->g_388.s8", print_hash_value);
    transparent_crc(p_1020->g_388.s9, "p_1020->g_388.s9", print_hash_value);
    transparent_crc(p_1020->g_388.sa, "p_1020->g_388.sa", print_hash_value);
    transparent_crc(p_1020->g_388.sb, "p_1020->g_388.sb", print_hash_value);
    transparent_crc(p_1020->g_388.sc, "p_1020->g_388.sc", print_hash_value);
    transparent_crc(p_1020->g_388.sd, "p_1020->g_388.sd", print_hash_value);
    transparent_crc(p_1020->g_388.se, "p_1020->g_388.se", print_hash_value);
    transparent_crc(p_1020->g_388.sf, "p_1020->g_388.sf", print_hash_value);
    transparent_crc(p_1020->g_403.s0, "p_1020->g_403.s0", print_hash_value);
    transparent_crc(p_1020->g_403.s1, "p_1020->g_403.s1", print_hash_value);
    transparent_crc(p_1020->g_403.s2, "p_1020->g_403.s2", print_hash_value);
    transparent_crc(p_1020->g_403.s3, "p_1020->g_403.s3", print_hash_value);
    transparent_crc(p_1020->g_403.s4, "p_1020->g_403.s4", print_hash_value);
    transparent_crc(p_1020->g_403.s5, "p_1020->g_403.s5", print_hash_value);
    transparent_crc(p_1020->g_403.s6, "p_1020->g_403.s6", print_hash_value);
    transparent_crc(p_1020->g_403.s7, "p_1020->g_403.s7", print_hash_value);
    transparent_crc(p_1020->g_426.x, "p_1020->g_426.x", print_hash_value);
    transparent_crc(p_1020->g_426.y, "p_1020->g_426.y", print_hash_value);
    transparent_crc(p_1020->g_450.s0, "p_1020->g_450.s0", print_hash_value);
    transparent_crc(p_1020->g_450.s1, "p_1020->g_450.s1", print_hash_value);
    transparent_crc(p_1020->g_450.s2, "p_1020->g_450.s2", print_hash_value);
    transparent_crc(p_1020->g_450.s3, "p_1020->g_450.s3", print_hash_value);
    transparent_crc(p_1020->g_450.s4, "p_1020->g_450.s4", print_hash_value);
    transparent_crc(p_1020->g_450.s5, "p_1020->g_450.s5", print_hash_value);
    transparent_crc(p_1020->g_450.s6, "p_1020->g_450.s6", print_hash_value);
    transparent_crc(p_1020->g_450.s7, "p_1020->g_450.s7", print_hash_value);
    transparent_crc(p_1020->g_450.s8, "p_1020->g_450.s8", print_hash_value);
    transparent_crc(p_1020->g_450.s9, "p_1020->g_450.s9", print_hash_value);
    transparent_crc(p_1020->g_450.sa, "p_1020->g_450.sa", print_hash_value);
    transparent_crc(p_1020->g_450.sb, "p_1020->g_450.sb", print_hash_value);
    transparent_crc(p_1020->g_450.sc, "p_1020->g_450.sc", print_hash_value);
    transparent_crc(p_1020->g_450.sd, "p_1020->g_450.sd", print_hash_value);
    transparent_crc(p_1020->g_450.se, "p_1020->g_450.se", print_hash_value);
    transparent_crc(p_1020->g_450.sf, "p_1020->g_450.sf", print_hash_value);
    transparent_crc(p_1020->g_451, "p_1020->g_451", print_hash_value);
    transparent_crc(p_1020->g_599.s0, "p_1020->g_599.s0", print_hash_value);
    transparent_crc(p_1020->g_599.s1, "p_1020->g_599.s1", print_hash_value);
    transparent_crc(p_1020->g_599.s2, "p_1020->g_599.s2", print_hash_value);
    transparent_crc(p_1020->g_599.s3, "p_1020->g_599.s3", print_hash_value);
    transparent_crc(p_1020->g_599.s4, "p_1020->g_599.s4", print_hash_value);
    transparent_crc(p_1020->g_599.s5, "p_1020->g_599.s5", print_hash_value);
    transparent_crc(p_1020->g_599.s6, "p_1020->g_599.s6", print_hash_value);
    transparent_crc(p_1020->g_599.s7, "p_1020->g_599.s7", print_hash_value);
    transparent_crc(p_1020->g_599.s8, "p_1020->g_599.s8", print_hash_value);
    transparent_crc(p_1020->g_599.s9, "p_1020->g_599.s9", print_hash_value);
    transparent_crc(p_1020->g_599.sa, "p_1020->g_599.sa", print_hash_value);
    transparent_crc(p_1020->g_599.sb, "p_1020->g_599.sb", print_hash_value);
    transparent_crc(p_1020->g_599.sc, "p_1020->g_599.sc", print_hash_value);
    transparent_crc(p_1020->g_599.sd, "p_1020->g_599.sd", print_hash_value);
    transparent_crc(p_1020->g_599.se, "p_1020->g_599.se", print_hash_value);
    transparent_crc(p_1020->g_599.sf, "p_1020->g_599.sf", print_hash_value);
    transparent_crc(p_1020->g_602.x, "p_1020->g_602.x", print_hash_value);
    transparent_crc(p_1020->g_602.y, "p_1020->g_602.y", print_hash_value);
    transparent_crc(p_1020->g_603.x, "p_1020->g_603.x", print_hash_value);
    transparent_crc(p_1020->g_603.y, "p_1020->g_603.y", print_hash_value);
    transparent_crc(p_1020->g_605.x, "p_1020->g_605.x", print_hash_value);
    transparent_crc(p_1020->g_605.y, "p_1020->g_605.y", print_hash_value);
    transparent_crc(p_1020->g_606.x, "p_1020->g_606.x", print_hash_value);
    transparent_crc(p_1020->g_606.y, "p_1020->g_606.y", print_hash_value);
    transparent_crc(p_1020->g_606.z, "p_1020->g_606.z", print_hash_value);
    transparent_crc(p_1020->g_606.w, "p_1020->g_606.w", print_hash_value);
    transparent_crc(p_1020->g_616.s0, "p_1020->g_616.s0", print_hash_value);
    transparent_crc(p_1020->g_616.s1, "p_1020->g_616.s1", print_hash_value);
    transparent_crc(p_1020->g_616.s2, "p_1020->g_616.s2", print_hash_value);
    transparent_crc(p_1020->g_616.s3, "p_1020->g_616.s3", print_hash_value);
    transparent_crc(p_1020->g_616.s4, "p_1020->g_616.s4", print_hash_value);
    transparent_crc(p_1020->g_616.s5, "p_1020->g_616.s5", print_hash_value);
    transparent_crc(p_1020->g_616.s6, "p_1020->g_616.s6", print_hash_value);
    transparent_crc(p_1020->g_616.s7, "p_1020->g_616.s7", print_hash_value);
    transparent_crc(p_1020->g_616.s8, "p_1020->g_616.s8", print_hash_value);
    transparent_crc(p_1020->g_616.s9, "p_1020->g_616.s9", print_hash_value);
    transparent_crc(p_1020->g_616.sa, "p_1020->g_616.sa", print_hash_value);
    transparent_crc(p_1020->g_616.sb, "p_1020->g_616.sb", print_hash_value);
    transparent_crc(p_1020->g_616.sc, "p_1020->g_616.sc", print_hash_value);
    transparent_crc(p_1020->g_616.sd, "p_1020->g_616.sd", print_hash_value);
    transparent_crc(p_1020->g_616.se, "p_1020->g_616.se", print_hash_value);
    transparent_crc(p_1020->g_616.sf, "p_1020->g_616.sf", print_hash_value);
    transparent_crc(p_1020->g_617.x, "p_1020->g_617.x", print_hash_value);
    transparent_crc(p_1020->g_617.y, "p_1020->g_617.y", print_hash_value);
    transparent_crc(p_1020->g_617.z, "p_1020->g_617.z", print_hash_value);
    transparent_crc(p_1020->g_617.w, "p_1020->g_617.w", print_hash_value);
    transparent_crc(p_1020->g_618.x, "p_1020->g_618.x", print_hash_value);
    transparent_crc(p_1020->g_618.y, "p_1020->g_618.y", print_hash_value);
    transparent_crc(p_1020->g_618.z, "p_1020->g_618.z", print_hash_value);
    transparent_crc(p_1020->g_618.w, "p_1020->g_618.w", print_hash_value);
    transparent_crc(p_1020->g_659.x, "p_1020->g_659.x", print_hash_value);
    transparent_crc(p_1020->g_659.y, "p_1020->g_659.y", print_hash_value);
    transparent_crc(p_1020->g_661.x, "p_1020->g_661.x", print_hash_value);
    transparent_crc(p_1020->g_661.y, "p_1020->g_661.y", print_hash_value);
    transparent_crc(p_1020->g_665.x, "p_1020->g_665.x", print_hash_value);
    transparent_crc(p_1020->g_665.y, "p_1020->g_665.y", print_hash_value);
    transparent_crc(p_1020->g_668.s0, "p_1020->g_668.s0", print_hash_value);
    transparent_crc(p_1020->g_668.s1, "p_1020->g_668.s1", print_hash_value);
    transparent_crc(p_1020->g_668.s2, "p_1020->g_668.s2", print_hash_value);
    transparent_crc(p_1020->g_668.s3, "p_1020->g_668.s3", print_hash_value);
    transparent_crc(p_1020->g_668.s4, "p_1020->g_668.s4", print_hash_value);
    transparent_crc(p_1020->g_668.s5, "p_1020->g_668.s5", print_hash_value);
    transparent_crc(p_1020->g_668.s6, "p_1020->g_668.s6", print_hash_value);
    transparent_crc(p_1020->g_668.s7, "p_1020->g_668.s7", print_hash_value);
    transparent_crc(p_1020->g_668.s8, "p_1020->g_668.s8", print_hash_value);
    transparent_crc(p_1020->g_668.s9, "p_1020->g_668.s9", print_hash_value);
    transparent_crc(p_1020->g_668.sa, "p_1020->g_668.sa", print_hash_value);
    transparent_crc(p_1020->g_668.sb, "p_1020->g_668.sb", print_hash_value);
    transparent_crc(p_1020->g_668.sc, "p_1020->g_668.sc", print_hash_value);
    transparent_crc(p_1020->g_668.sd, "p_1020->g_668.sd", print_hash_value);
    transparent_crc(p_1020->g_668.se, "p_1020->g_668.se", print_hash_value);
    transparent_crc(p_1020->g_668.sf, "p_1020->g_668.sf", print_hash_value);
    transparent_crc(p_1020->g_749.x, "p_1020->g_749.x", print_hash_value);
    transparent_crc(p_1020->g_749.y, "p_1020->g_749.y", print_hash_value);
    transparent_crc(p_1020->g_749.z, "p_1020->g_749.z", print_hash_value);
    transparent_crc(p_1020->g_749.w, "p_1020->g_749.w", print_hash_value);
    transparent_crc(p_1020->g_750.s0, "p_1020->g_750.s0", print_hash_value);
    transparent_crc(p_1020->g_750.s1, "p_1020->g_750.s1", print_hash_value);
    transparent_crc(p_1020->g_750.s2, "p_1020->g_750.s2", print_hash_value);
    transparent_crc(p_1020->g_750.s3, "p_1020->g_750.s3", print_hash_value);
    transparent_crc(p_1020->g_750.s4, "p_1020->g_750.s4", print_hash_value);
    transparent_crc(p_1020->g_750.s5, "p_1020->g_750.s5", print_hash_value);
    transparent_crc(p_1020->g_750.s6, "p_1020->g_750.s6", print_hash_value);
    transparent_crc(p_1020->g_750.s7, "p_1020->g_750.s7", print_hash_value);
    transparent_crc(p_1020->g_784.s0, "p_1020->g_784.s0", print_hash_value);
    transparent_crc(p_1020->g_784.s1, "p_1020->g_784.s1", print_hash_value);
    transparent_crc(p_1020->g_784.s2, "p_1020->g_784.s2", print_hash_value);
    transparent_crc(p_1020->g_784.s3, "p_1020->g_784.s3", print_hash_value);
    transparent_crc(p_1020->g_784.s4, "p_1020->g_784.s4", print_hash_value);
    transparent_crc(p_1020->g_784.s5, "p_1020->g_784.s5", print_hash_value);
    transparent_crc(p_1020->g_784.s6, "p_1020->g_784.s6", print_hash_value);
    transparent_crc(p_1020->g_784.s7, "p_1020->g_784.s7", print_hash_value);
    transparent_crc(p_1020->g_788.s0, "p_1020->g_788.s0", print_hash_value);
    transparent_crc(p_1020->g_788.s1, "p_1020->g_788.s1", print_hash_value);
    transparent_crc(p_1020->g_788.s2, "p_1020->g_788.s2", print_hash_value);
    transparent_crc(p_1020->g_788.s3, "p_1020->g_788.s3", print_hash_value);
    transparent_crc(p_1020->g_788.s4, "p_1020->g_788.s4", print_hash_value);
    transparent_crc(p_1020->g_788.s5, "p_1020->g_788.s5", print_hash_value);
    transparent_crc(p_1020->g_788.s6, "p_1020->g_788.s6", print_hash_value);
    transparent_crc(p_1020->g_788.s7, "p_1020->g_788.s7", print_hash_value);
    transparent_crc(p_1020->g_825.s0, "p_1020->g_825.s0", print_hash_value);
    transparent_crc(p_1020->g_825.s1, "p_1020->g_825.s1", print_hash_value);
    transparent_crc(p_1020->g_825.s2, "p_1020->g_825.s2", print_hash_value);
    transparent_crc(p_1020->g_825.s3, "p_1020->g_825.s3", print_hash_value);
    transparent_crc(p_1020->g_825.s4, "p_1020->g_825.s4", print_hash_value);
    transparent_crc(p_1020->g_825.s5, "p_1020->g_825.s5", print_hash_value);
    transparent_crc(p_1020->g_825.s6, "p_1020->g_825.s6", print_hash_value);
    transparent_crc(p_1020->g_825.s7, "p_1020->g_825.s7", print_hash_value);
    transparent_crc(p_1020->g_880.x, "p_1020->g_880.x", print_hash_value);
    transparent_crc(p_1020->g_880.y, "p_1020->g_880.y", print_hash_value);
    transparent_crc(p_1020->g_885.x, "p_1020->g_885.x", print_hash_value);
    transparent_crc(p_1020->g_885.y, "p_1020->g_885.y", print_hash_value);
    transparent_crc(p_1020->g_885.z, "p_1020->g_885.z", print_hash_value);
    transparent_crc(p_1020->g_885.w, "p_1020->g_885.w", print_hash_value);
    transparent_crc(p_1020->g_909.s0, "p_1020->g_909.s0", print_hash_value);
    transparent_crc(p_1020->g_909.s1, "p_1020->g_909.s1", print_hash_value);
    transparent_crc(p_1020->g_909.s2, "p_1020->g_909.s2", print_hash_value);
    transparent_crc(p_1020->g_909.s3, "p_1020->g_909.s3", print_hash_value);
    transparent_crc(p_1020->g_909.s4, "p_1020->g_909.s4", print_hash_value);
    transparent_crc(p_1020->g_909.s5, "p_1020->g_909.s5", print_hash_value);
    transparent_crc(p_1020->g_909.s6, "p_1020->g_909.s6", print_hash_value);
    transparent_crc(p_1020->g_909.s7, "p_1020->g_909.s7", print_hash_value);
    transparent_crc(p_1020->g_909.s8, "p_1020->g_909.s8", print_hash_value);
    transparent_crc(p_1020->g_909.s9, "p_1020->g_909.s9", print_hash_value);
    transparent_crc(p_1020->g_909.sa, "p_1020->g_909.sa", print_hash_value);
    transparent_crc(p_1020->g_909.sb, "p_1020->g_909.sb", print_hash_value);
    transparent_crc(p_1020->g_909.sc, "p_1020->g_909.sc", print_hash_value);
    transparent_crc(p_1020->g_909.sd, "p_1020->g_909.sd", print_hash_value);
    transparent_crc(p_1020->g_909.se, "p_1020->g_909.se", print_hash_value);
    transparent_crc(p_1020->g_909.sf, "p_1020->g_909.sf", print_hash_value);
    transparent_crc(p_1020->g_910.x, "p_1020->g_910.x", print_hash_value);
    transparent_crc(p_1020->g_910.y, "p_1020->g_910.y", print_hash_value);
    transparent_crc(p_1020->g_910.z, "p_1020->g_910.z", print_hash_value);
    transparent_crc(p_1020->g_910.w, "p_1020->g_910.w", print_hash_value);
    transparent_crc(p_1020->g_925.s0, "p_1020->g_925.s0", print_hash_value);
    transparent_crc(p_1020->g_925.s1, "p_1020->g_925.s1", print_hash_value);
    transparent_crc(p_1020->g_925.s2, "p_1020->g_925.s2", print_hash_value);
    transparent_crc(p_1020->g_925.s3, "p_1020->g_925.s3", print_hash_value);
    transparent_crc(p_1020->g_925.s4, "p_1020->g_925.s4", print_hash_value);
    transparent_crc(p_1020->g_925.s5, "p_1020->g_925.s5", print_hash_value);
    transparent_crc(p_1020->g_925.s6, "p_1020->g_925.s6", print_hash_value);
    transparent_crc(p_1020->g_925.s7, "p_1020->g_925.s7", print_hash_value);
    transparent_crc(p_1020->g_925.s8, "p_1020->g_925.s8", print_hash_value);
    transparent_crc(p_1020->g_925.s9, "p_1020->g_925.s9", print_hash_value);
    transparent_crc(p_1020->g_925.sa, "p_1020->g_925.sa", print_hash_value);
    transparent_crc(p_1020->g_925.sb, "p_1020->g_925.sb", print_hash_value);
    transparent_crc(p_1020->g_925.sc, "p_1020->g_925.sc", print_hash_value);
    transparent_crc(p_1020->g_925.sd, "p_1020->g_925.sd", print_hash_value);
    transparent_crc(p_1020->g_925.se, "p_1020->g_925.se", print_hash_value);
    transparent_crc(p_1020->g_925.sf, "p_1020->g_925.sf", print_hash_value);
    transparent_crc(p_1020->g_926.s0, "p_1020->g_926.s0", print_hash_value);
    transparent_crc(p_1020->g_926.s1, "p_1020->g_926.s1", print_hash_value);
    transparent_crc(p_1020->g_926.s2, "p_1020->g_926.s2", print_hash_value);
    transparent_crc(p_1020->g_926.s3, "p_1020->g_926.s3", print_hash_value);
    transparent_crc(p_1020->g_926.s4, "p_1020->g_926.s4", print_hash_value);
    transparent_crc(p_1020->g_926.s5, "p_1020->g_926.s5", print_hash_value);
    transparent_crc(p_1020->g_926.s6, "p_1020->g_926.s6", print_hash_value);
    transparent_crc(p_1020->g_926.s7, "p_1020->g_926.s7", print_hash_value);
    transparent_crc(p_1020->g_926.s8, "p_1020->g_926.s8", print_hash_value);
    transparent_crc(p_1020->g_926.s9, "p_1020->g_926.s9", print_hash_value);
    transparent_crc(p_1020->g_926.sa, "p_1020->g_926.sa", print_hash_value);
    transparent_crc(p_1020->g_926.sb, "p_1020->g_926.sb", print_hash_value);
    transparent_crc(p_1020->g_926.sc, "p_1020->g_926.sc", print_hash_value);
    transparent_crc(p_1020->g_926.sd, "p_1020->g_926.sd", print_hash_value);
    transparent_crc(p_1020->g_926.se, "p_1020->g_926.se", print_hash_value);
    transparent_crc(p_1020->g_926.sf, "p_1020->g_926.sf", print_hash_value);
    transparent_crc(p_1020->g_938.s0, "p_1020->g_938.s0", print_hash_value);
    transparent_crc(p_1020->g_938.s1, "p_1020->g_938.s1", print_hash_value);
    transparent_crc(p_1020->g_938.s2, "p_1020->g_938.s2", print_hash_value);
    transparent_crc(p_1020->g_938.s3, "p_1020->g_938.s3", print_hash_value);
    transparent_crc(p_1020->g_938.s4, "p_1020->g_938.s4", print_hash_value);
    transparent_crc(p_1020->g_938.s5, "p_1020->g_938.s5", print_hash_value);
    transparent_crc(p_1020->g_938.s6, "p_1020->g_938.s6", print_hash_value);
    transparent_crc(p_1020->g_938.s7, "p_1020->g_938.s7", print_hash_value);
    transparent_crc(p_1020->g_938.s8, "p_1020->g_938.s8", print_hash_value);
    transparent_crc(p_1020->g_938.s9, "p_1020->g_938.s9", print_hash_value);
    transparent_crc(p_1020->g_938.sa, "p_1020->g_938.sa", print_hash_value);
    transparent_crc(p_1020->g_938.sb, "p_1020->g_938.sb", print_hash_value);
    transparent_crc(p_1020->g_938.sc, "p_1020->g_938.sc", print_hash_value);
    transparent_crc(p_1020->g_938.sd, "p_1020->g_938.sd", print_hash_value);
    transparent_crc(p_1020->g_938.se, "p_1020->g_938.se", print_hash_value);
    transparent_crc(p_1020->g_938.sf, "p_1020->g_938.sf", print_hash_value);
    transparent_crc(p_1020->g_939.x, "p_1020->g_939.x", print_hash_value);
    transparent_crc(p_1020->g_939.y, "p_1020->g_939.y", print_hash_value);
    transparent_crc(p_1020->g_939.z, "p_1020->g_939.z", print_hash_value);
    transparent_crc(p_1020->g_939.w, "p_1020->g_939.w", print_hash_value);
    transparent_crc(p_1020->g_940.x, "p_1020->g_940.x", print_hash_value);
    transparent_crc(p_1020->g_940.y, "p_1020->g_940.y", print_hash_value);
    transparent_crc(p_1020->g_940.z, "p_1020->g_940.z", print_hash_value);
    transparent_crc(p_1020->g_940.w, "p_1020->g_940.w", print_hash_value);
    transparent_crc(p_1020->g_975, "p_1020->g_975", print_hash_value);
    transparent_crc(p_1020->v_collective, "p_1020->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 54; i++)
            transparent_crc(p_1020->l_special_values[i], "p_1020->l_special_values[i]", print_hash_value);
    transparent_crc(p_1020->l_comm_values[get_linear_local_id()], "p_1020->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1020->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_1020->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
