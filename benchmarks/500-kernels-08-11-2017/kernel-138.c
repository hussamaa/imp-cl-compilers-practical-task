// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 43,73,3 -l 43,1,1
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

__constant uint32_t permutations[10][43] = {
{30,8,6,7,0,37,40,31,10,16,15,26,29,18,4,20,19,2,39,12,28,3,42,34,27,13,41,23,9,33,25,24,14,17,5,38,35,1,22,21,11,32,36}, // permutation 0
{14,27,40,24,5,22,4,2,8,21,20,17,41,16,38,33,6,36,39,18,42,32,11,35,28,15,30,13,1,3,31,29,34,19,12,26,10,37,7,0,9,23,25}, // permutation 1
{32,30,24,9,42,25,37,16,20,18,29,35,10,41,34,17,19,15,28,6,21,38,2,1,11,14,36,5,0,39,3,13,22,8,40,12,4,27,26,7,23,33,31}, // permutation 2
{39,0,28,27,24,38,8,9,15,19,36,29,42,10,37,41,2,12,11,34,4,18,23,20,6,30,14,17,32,1,21,7,22,25,26,33,13,40,5,35,31,16,3}, // permutation 3
{5,16,32,38,33,11,22,1,20,2,8,39,14,29,41,27,24,7,19,10,31,4,13,42,25,18,35,30,17,3,0,9,37,15,34,6,36,12,28,23,26,21,40}, // permutation 4
{18,15,41,1,25,26,42,14,6,31,8,30,36,2,28,22,19,21,29,27,40,23,24,33,13,32,37,39,4,35,34,17,16,0,12,10,20,9,5,3,7,38,11}, // permutation 5
{20,32,15,35,2,21,19,41,17,34,18,42,4,13,10,29,6,12,23,24,22,40,25,28,11,3,8,31,9,30,5,36,0,38,27,39,33,37,26,1,14,16,7}, // permutation 6
{22,20,34,21,38,30,19,41,9,25,26,12,4,3,13,27,31,5,0,8,39,2,37,18,29,42,1,15,28,36,23,33,32,35,16,24,40,7,17,6,11,10,14}, // permutation 7
{14,9,1,8,13,29,18,27,33,31,40,0,2,12,25,24,26,20,11,38,32,16,39,19,37,23,5,6,10,30,17,41,36,35,15,7,42,34,28,21,4,3,22}, // permutation 8
{38,18,26,30,31,11,37,14,36,29,42,2,24,5,16,0,32,10,12,8,22,4,27,17,15,6,21,19,25,1,40,20,28,33,13,3,35,9,34,39,41,7,23} // permutation 9
};

// Seed: 3141306432

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

struct S1 {
    VECTOR(int32_t, 4) g_2;
    VECTOR(int8_t, 8) g_39;
    int32_t g_80;
    volatile VECTOR(int32_t, 16) g_94;
    VECTOR(uint8_t, 16) g_106;
    VECTOR(int16_t, 16) g_107;
    int32_t *g_137;
    uint32_t g_146;
    uint16_t g_158[9];
    VECTOR(int16_t, 4) g_173;
    VECTOR(int16_t, 2) g_189;
    VECTOR(int16_t, 8) g_190;
    VECTOR(int16_t, 16) g_191;
    int32_t g_198[4];
    volatile int64_t g_200;
    volatile int64_t *g_199;
    uint8_t g_203;
    uint32_t g_205[9];
    uint64_t g_207;
    int8_t g_208;
    int32_t *g_216;
    VECTOR(uint32_t, 16) g_218;
    uint16_t g_226[7][6];
    uint32_t g_230;
    struct S0 g_233;
    int64_t *g_246;
    int16_t g_315[4][5];
    int32_t ** volatile g_330;
    int32_t ** volatile g_331;
    volatile VECTOR(uint8_t, 16) g_334;
    VECTOR(uint32_t, 8) g_352;
    int16_t g_363;
    int8_t *g_366[7][5];
    int8_t * volatile *g_365;
    struct S0 * volatile g_716;
    int32_t ** volatile g_738[1];
    struct S0 * volatile g_740;
    int32_t ** volatile g_747;
    volatile uint32_t g_761[5][4];
    int32_t ** volatile g_764;
    VECTOR(int8_t, 2) g_792;
    volatile VECTOR(uint8_t, 8) g_807;
    volatile VECTOR(uint8_t, 2) g_812;
    VECTOR(int64_t, 4) g_816;
    volatile int32_t g_838;
    VECTOR(int32_t, 8) g_866;
    VECTOR(int32_t, 2) g_867;
    VECTOR(int32_t, 4) g_868;
    volatile VECTOR(int32_t, 4) g_869;
    int32_t **g_877;
    VECTOR(uint16_t, 2) g_879;
    VECTOR(uint32_t, 8) g_890;
    struct S0 * volatile g_898;
    VECTOR(uint8_t, 4) g_909;
    volatile VECTOR(uint8_t, 16) g_911;
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
int32_t  func_1(struct S1 * p_935);
uint32_t  func_12(uint64_t  p_13, struct S1 * p_935);
uint64_t  func_14(uint32_t  p_15, uint32_t  p_16, uint32_t  p_17, int64_t  p_18, struct S1 * p_935);
int16_t  func_19(uint32_t  p_20, uint32_t  p_21, int32_t  p_22, struct S1 * p_935);
int64_t  func_28(uint8_t  p_29, int32_t  p_30, uint32_t  p_31, int32_t  p_32, struct S1 * p_935);
uint8_t  func_95(int8_t  p_96, int32_t * p_97, uint32_t  p_98, int64_t  p_99, struct S0  p_100, struct S1 * p_935);
uint32_t  func_114(int32_t * p_115, int32_t * p_116, struct S0  p_117, uint32_t  p_118, int16_t  p_119, struct S1 * p_935);
int32_t * func_122(uint64_t  p_123, uint64_t  p_124, struct S1 * p_935);
int32_t  func_129(int32_t ** p_130, int32_t ** p_131, int32_t  p_132, struct S1 * p_935);
int32_t ** func_134(int32_t * p_135, uint32_t  p_136, struct S1 * p_935);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_935->g_2 p_935->l_comm_values p_935->g_39 p_935->g_80 p_935->g_216 p_935->g_191 p_935->g_233.f0 p_935->g_246 p_935->g_233 p_935->g_205 p_935->g_198 p_935->g_107 p_935->g_331 p_935->g_158 p_935->g_363 p_935->g_137 p_935->g_365 p_935->g_218 p_935->g_173 p_935->g_203 p_935->g_740 p_935->g_comm_values p_935->g_199 p_935->g_200 p_935->g_747 p_935->g_761 p_935->g_764 p_935->g_792 p_935->g_315
 * writes: p_935->g_2 p_935->g_80 p_935->g_137 p_935->g_233.f0 p_935->g_246 p_935->g_216 p_935->g_208 p_935->g_363 p_935->g_365 p_935->g_233 p_935->g_218 p_935->g_226 p_935->g_203 p_935->g_761
 */
int32_t  func_1(struct S1 * p_935)
{ /* block id: 4 */
    uint8_t l_23 = 0UL;
    int32_t l_33 = 1L;
    uint64_t l_44 = 0xB19F88DD0BB265D6L;
    int32_t l_736 = 0x31CB09E4L;
    struct S0 l_739 = {0UL};
    int32_t l_760 = 0x2E0B1B24L;
    VECTOR(int64_t, 4) l_810 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x706F636637EFE2A5L), 0x706F636637EFE2A5L);
    int32_t **l_827 = &p_935->g_216;
    uint32_t *l_832 = &p_935->g_146;
    int32_t l_847 = 0x4ED47471L;
    int32_t l_848 = 0L;
    VECTOR(int32_t, 4) l_863 = (VECTOR(int32_t, 4))(0x4776B6A5L, (VECTOR(int32_t, 2))(0x4776B6A5L, 0x33757535L), 0x33757535L);
    VECTOR(int32_t, 8) l_864 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2AC6E6E0L), 0x2AC6E6E0L), 0x2AC6E6E0L, 1L, 0x2AC6E6E0L);
    int i;
    for (p_935->g_2.x = 0; (p_935->g_2.x > 23); p_935->g_2.x++)
    { /* block id: 7 */
        uint32_t l_7 = 0UL;
        int32_t l_38 = (-1L);
        int32_t l_40[2][10] = {{0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L},{0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L,0x1FFBE626L}};
        uint32_t *l_721[8][6] = {{(void*)0,&p_935->g_230,(void*)0,(void*)0,&p_935->g_230,(void*)0},{(void*)0,&p_935->g_230,(void*)0,(void*)0,&p_935->g_230,(void*)0},{(void*)0,&p_935->g_230,(void*)0,(void*)0,&p_935->g_230,(void*)0},{(void*)0,&p_935->g_230,(void*)0,(void*)0,&p_935->g_230,(void*)0},{(void*)0,&p_935->g_230,(void*)0,(void*)0,&p_935->g_230,(void*)0},{(void*)0,&p_935->g_230,(void*)0,(void*)0,&p_935->g_230,(void*)0},{(void*)0,&p_935->g_230,(void*)0,(void*)0,&p_935->g_230,(void*)0},{(void*)0,&p_935->g_230,(void*)0,(void*)0,&p_935->g_230,(void*)0}};
        uint16_t *l_722 = &p_935->g_226[1][5];
        int32_t *l_737 = (void*)0;
        VECTOR(int8_t, 8) l_777 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x60L), 0x60L), 0x60L, 0L, 0x60L);
        int32_t **l_796 = &p_935->g_216;
        int64_t *l_800 = (void*)0;
        VECTOR(uint16_t, 16) l_813 = (VECTOR(uint16_t, 16))(0xCCD3L, (VECTOR(uint16_t, 4))(0xCCD3L, (VECTOR(uint16_t, 2))(0xCCD3L, 0xE736L), 0xE736L), 0xE736L, 0xCCD3L, 0xE736L, (VECTOR(uint16_t, 2))(0xCCD3L, 0xE736L), (VECTOR(uint16_t, 2))(0xCCD3L, 0xE736L), 0xCCD3L, 0xE736L, 0xCCD3L, 0xE736L);
        uint8_t l_874[8][9] = {{251UL,0x93L,0x1BL,0x1BL,0x93L,251UL,4UL,0x2BL,3UL},{251UL,0x93L,0x1BL,0x1BL,0x93L,251UL,4UL,0x2BL,3UL},{251UL,0x93L,0x1BL,0x1BL,0x93L,251UL,4UL,0x2BL,3UL},{251UL,0x93L,0x1BL,0x1BL,0x93L,251UL,4UL,0x2BL,3UL},{251UL,0x93L,0x1BL,0x1BL,0x93L,251UL,4UL,0x2BL,3UL},{251UL,0x93L,0x1BL,0x1BL,0x93L,251UL,4UL,0x2BL,3UL},{251UL,0x93L,0x1BL,0x1BL,0x93L,251UL,4UL,0x2BL,3UL},{251UL,0x93L,0x1BL,0x1BL,0x93L,251UL,4UL,0x2BL,3UL}};
        uint16_t *l_889 = &p_935->g_226[1][5];
        uint8_t l_895 = 0xB1L;
        int i, j;
        if ((((safe_div_func_int8_t_s_s(l_7, (safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_935->g_2.x, (((((*l_722) = (((p_935->g_218.se &= func_12(func_14((func_19((--l_23), (((safe_add_func_int16_t_s_s((p_935->l_comm_values[(safe_mod_func_uint32_t_u_u(p_935->tid, 43))] || func_28(l_7, ((l_33 , (((safe_rshift_func_uint8_t_u_u((l_38 && ((((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_935->g_39.s0336)).yxzyxwyz)).s7235377421525277))).sa > (0L > l_38)) == p_935->l_comm_values[(safe_mod_func_uint32_t_u_u(p_935->tid, 43))])), 0)) , 0x133BL) | l_38)) || 0L), l_7, l_40[0][5], p_935)), (-8L))) , l_38) , p_935->g_39.s7), l_7, p_935) != p_935->l_comm_values[(safe_mod_func_uint32_t_u_u(p_935->tid, 43))]), p_935->l_comm_values[(safe_mod_func_uint32_t_u_u(p_935->tid, 43))], l_33, l_44, p_935), p_935)) && l_38) <= GROUP_DIVERGE(1, 1))) | p_935->l_comm_values[(safe_mod_func_uint32_t_u_u(p_935->tid, 43))]) != 0x0E91L) == l_38))) , 0x49FCL), l_40[1][3])))) >= (-7L)) != p_935->g_173.x))
        { /* block id: 399 */
            uint8_t l_723 = 249UL;
            int32_t *l_724 = &l_33;
            uint8_t *l_729 = &p_935->g_203;
            int32_t l_756 = (-4L);
            int32_t l_757 = (-6L);
            int32_t l_758 = 7L;
            int32_t l_759 = 0x1FE8FDD3L;
            (*l_724) ^= l_723;
            if ((safe_add_func_int32_t_s_s(((*l_724) = 0x4576F749L), (safe_rshift_func_int8_t_s_u((((--(*l_729)) & (l_44 | FAKE_DIVERGE(p_935->local_0_offset, get_local_id(0), 10))) , (safe_mod_func_uint64_t_u_u((0x34BCBE04L & (safe_lshift_func_int8_t_s_s(l_7, (l_736 = l_7)))), 9L))), 6)))))
            { /* block id: 404 */
                (*l_724) = (-1L);
                l_737 = l_737;
                if ((*l_724))
                    continue;
            }
            else
            { /* block id: 408 */
                int16_t l_748 = 0x617EL;
                int32_t *l_749 = &l_40[0][5];
                int32_t *l_750 = &p_935->g_80;
                int32_t *l_751 = &l_736;
                int32_t *l_752 = &l_736;
                int32_t *l_753 = &p_935->g_80;
                int32_t *l_754 = &l_40[0][0];
                int32_t *l_755[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_755[i] = &l_40[0][5];
                (*p_935->g_740) = l_739;
                (*p_935->g_747) = func_122(p_935->g_191.s4, (safe_mod_func_int64_t_s_s((((p_935->g_198[2] > (l_33 || 1UL)) < 1UL) >= (((safe_lshift_func_uint8_t_u_u(((((p_935->g_comm_values[p_935->tid] , ((VECTOR(int16_t, 2))(0x4D20L, (-7L))).hi) && ((safe_mod_func_uint64_t_u_u(p_935->g_205[5], (*p_935->g_199))) | (((*l_724) , &p_935->g_230) != (void*)0))) , 4294967293UL) & 8L), p_935->g_198[0])) > (-9L)) && 0UL)), (*l_724))), p_935);
                --p_935->g_761[3][3];
            }
            (*p_935->g_764) = &l_736;
        }
        else
        { /* block id: 414 */
            int32_t *l_765 = &p_935->g_80;
            int64_t *l_772[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t l_778 = 0x7E7C19ED2C80E427L;
            int8_t *l_779 = (void*)0;
            int8_t *l_780 = (void*)0;
            int8_t *l_781 = (void*)0;
            int8_t *l_782 = (void*)0;
            int8_t *l_783 = (void*)0;
            int8_t *l_784 = &p_935->g_208;
            int8_t *l_785 = (void*)0;
            int8_t *l_786 = (void*)0;
            int8_t *l_787 = (void*)0;
            int8_t *l_788 = (void*)0;
            int8_t *l_789 = (void*)0;
            int8_t *l_790 = (void*)0;
            int8_t *l_791 = (void*)0;
            int8_t l_795 = (-1L);
            int32_t *l_797 = &l_33;
            int16_t l_804[6][4] = {{0x47A9L,(-1L),(-1L),(-1L)},{0x47A9L,(-1L),(-1L),(-1L)},{0x47A9L,(-1L),(-1L),(-1L)},{0x47A9L,(-1L),(-1L),(-1L)},{0x47A9L,(-1L),(-1L),(-1L)},{0x47A9L,(-1L),(-1L),(-1L)}};
            int32_t l_819 = 0x49238601L;
            uint32_t *l_834 = &p_935->g_230;
            int32_t l_842 = 0x0CA429A9L;
            int32_t l_843 = (-1L);
            int32_t l_844 = 0x5DB7EAA9L;
            int16_t l_845 = 0x5E98L;
            int32_t l_851 = 0x06EDB90BL;
            int32_t l_852 = 0x62763C50L;
            int64_t l_853 = 0x07C02DE4CBAE4CAFL;
            uint8_t l_855 = 4UL;
            VECTOR(int16_t, 8) l_881 = (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x1743L), 0x1743L), 0x1743L, (-7L), 0x1743L);
            int32_t l_910[2][5][8] = {{{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)},{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)},{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)},{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)},{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)}},{{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)},{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)},{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)},{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)},{0x326F565AL,0L,(-1L),0x7F9187D8L,1L,1L,0x7F9187D8L,(-1L)}}};
            uint32_t l_932 = 5UL;
            int i, j, k;
            (*l_765) ^= l_23;
            (*l_797) |= (safe_sub_func_int32_t_s_s(0x54E8ED50L, ((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((&p_935->g_200 != l_772[3]), 0x6BL)), ((((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(1L, 0x67L)), ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(l_777.s2752)).ywzxwzxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((*l_765) = ((*l_784) = l_778)), ((VECTOR(int8_t, 8))(0x37L, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(p_935->g_792.yyxx)), ((VECTOR(int8_t, 4))((l_736 = ((*p_935->g_199) || (-1L))), ((VECTOR(int8_t, 2))(1L, 0x5AL)), (-1L)))))), 0x67L, 5L, 0x60L)), (safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(p_935->g_792.x, 247UL, 0xC9L, (*l_765), 0x34L, 0xE2L, 0x24L, 0xD5L)).s0251176655506043, ((VECTOR(uint8_t, 16))(3UL))))))))).s9, p_935->g_2.z)), 0x17L, l_40[0][4], 1L, l_739.f0, 0x68L, 0x19L)))).hi)), (-8L), l_795, ((VECTOR(int8_t, 2))(0x4EL)), ((VECTOR(int8_t, 4))(0x0EL)))).odd))), ((VECTOR(int8_t, 8))(0L))))).s44))))).hi, l_44)), 1L)) , p_935->g_107.s6) , (void*)0) != l_796))) != p_935->g_198[1])));
            for (p_935->g_80 = 0; (p_935->g_80 < 17); ++p_935->g_80)
            { /* block id: 422 */
                int32_t l_803 = 0x1F4DE9B4L;
                struct S0 l_821 = {1UL};
                struct S0 l_822 = {4294967295UL};
                int32_t l_846 = 0x6C73D2E3L;
                int32_t l_849 = (-6L);
                int32_t l_850 = 0x3B7392EFL;
                int32_t l_854 = (-5L);
                uint16_t l_902 = 0x3E5AL;
                VECTOR(uint8_t, 2) l_913 = (VECTOR(uint8_t, 2))(254UL, 0x19L);
                VECTOR(int32_t, 8) l_920 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
                struct S0 *l_934 = &p_935->g_233;
                int i;
                l_804[0][2] ^= ((&p_935->g_200 != l_800) == (safe_div_func_int8_t_s_s((65527UL & (l_803 || p_935->g_315[1][1])), (*l_765))));
            }
        }
        return l_810.y;
    }
    return l_864.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_935->g_80 p_935->g_198
 * writes: p_935->g_233 p_935->g_80
 */
uint32_t  func_12(uint64_t  p_13, struct S1 * p_935)
{ /* block id: 393 */
    struct S0 l_715 = {5UL};
    struct S0 *l_717 = &p_935->g_233;
    int32_t *l_720 = &p_935->g_80;
    (*l_717) = l_715;
    (*l_720) &= (safe_mul_func_int16_t_s_s(p_13, 0x6865L));
    return p_935->g_198[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_935->g_80 p_935->g_216 p_935->g_191 p_935->g_233.f0 p_935->g_39 p_935->l_comm_values p_935->g_246 p_935->g_233 p_935->g_205 p_935->g_198 p_935->g_107 p_935->g_331 p_935->g_158 p_935->g_363 p_935->g_137 p_935->g_365
 * writes: p_935->g_80 p_935->g_137 p_935->g_233.f0 p_935->g_246 p_935->g_216 p_935->g_208 p_935->g_363 p_935->g_365
 */
uint64_t  func_14(uint32_t  p_15, uint32_t  p_16, uint32_t  p_17, int64_t  p_18, struct S1 * p_935)
{ /* block id: 14 */
    uint32_t l_144[4][9] = {{6UL,0x66FBB581L,0xA64A4A93L,0x9727A2C1L,4294967293UL,6UL,0x9727A2C1L,0x779B981BL,0x9727A2C1L},{6UL,0x66FBB581L,0xA64A4A93L,0x9727A2C1L,4294967293UL,6UL,0x9727A2C1L,0x779B981BL,0x9727A2C1L},{6UL,0x66FBB581L,0xA64A4A93L,0x9727A2C1L,4294967293UL,6UL,0x9727A2C1L,0x779B981BL,0x9727A2C1L},{6UL,0x66FBB581L,0xA64A4A93L,0x9727A2C1L,4294967293UL,6UL,0x9727A2C1L,0x779B981BL,0x9727A2C1L}};
    int64_t *l_245[5];
    int32_t l_260 = 2L;
    int32_t l_275 = (-1L);
    int32_t l_278 = 0x1D2BFCDBL;
    int32_t l_280 = 0L;
    int32_t l_282 = 0x11F7142EL;
    int32_t l_283 = 0L;
    int16_t l_284 = 0x6BA0L;
    struct S0 l_292 = {1UL};
    int32_t *l_304[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_309[4][3][6] = {{{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL},{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL},{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL}},{{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL},{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL},{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL}},{{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL},{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL},{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL}},{{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL},{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL},{0x156FEEA5L,0x545C0055L,0x1F2F8721L,0x3443746FL,0x0E9D4F16L,0x6E51303DL}}};
    uint32_t *l_324[3];
    uint8_t *l_340[2];
    VECTOR(uint16_t, 4) l_350 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65528UL), 65528UL);
    VECTOR(uint16_t, 4) l_351 = (VECTOR(uint16_t, 4))(0x8A92L, (VECTOR(uint16_t, 2))(0x8A92L, 4UL), 4UL);
    int32_t **l_364 = &l_304[0];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_245[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_324[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_340[i] = &p_935->g_203;
    for (p_15 = (-7); (p_15 < 58); p_15 = safe_add_func_uint64_t_u_u(p_15, 1))
    { /* block id: 17 */
        uint32_t l_91 = 1UL;
        VECTOR(uint8_t, 2) l_105 = (VECTOR(uint8_t, 2))(7UL, 0x51L);
        int32_t *l_121 = (void*)0;
        int16_t l_241[1];
        int32_t l_273 = 0x7E304C94L;
        int32_t l_274 = 0x1BB53ACBL;
        int32_t l_276 = 0x50889C46L;
        int32_t l_277 = 0x4E8DC023L;
        VECTOR(int32_t, 16) l_281 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x1B47BCCFL), 0x1B47BCCFL), 0x1B47BCCFL, 5L, 0x1B47BCCFL, (VECTOR(int32_t, 2))(5L, 0x1B47BCCFL), (VECTOR(int32_t, 2))(5L, 0x1B47BCCFL), 5L, 0x1B47BCCFL, 5L, 0x1B47BCCFL);
        uint8_t l_285 = 0UL;
        VECTOR(uint16_t, 2) l_299 = (VECTOR(uint16_t, 2))(0x97CAL, 0xD913L);
        VECTOR(uint16_t, 8) l_349 = (VECTOR(uint16_t, 8))(0x40CAL, (VECTOR(uint16_t, 4))(0x40CAL, (VECTOR(uint16_t, 2))(0x40CAL, 65535UL), 65535UL), 65535UL, 0x40CAL, 65535UL);
        uint8_t l_361 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_241[i] = 0x56BEL;
        for (p_17 = 0; (p_17 > 22); p_17 = safe_add_func_int16_t_s_s(p_17, 8))
        { /* block id: 20 */
            VECTOR(uint16_t, 4) l_103 = (VECTOR(uint16_t, 4))(0x70B5L, (VECTOR(uint16_t, 2))(0x70B5L, 3UL), 3UL);
            VECTOR(uint16_t, 8) l_104 = (VECTOR(uint16_t, 8))(0x063AL, (VECTOR(uint16_t, 4))(0x063AL, (VECTOR(uint16_t, 2))(0x063AL, 65535UL), 65535UL), 65535UL, 0x063AL, 65535UL);
            VECTOR(int16_t, 8) l_108 = (VECTOR(int16_t, 8))(0x3A4DL, (VECTOR(int16_t, 4))(0x3A4DL, (VECTOR(int16_t, 2))(0x3A4DL, 5L), 5L), 5L, 0x3A4DL, 5L);
            VECTOR(uint32_t, 2) l_112 = (VECTOR(uint32_t, 2))(0x98190555L, 0xB60A5FB0L);
            int32_t **l_133 = (void*)0;
            int32_t **l_258 = (void*)0;
            int32_t **l_259 = &p_935->g_216;
            int i;
            if ((atomic_inc(&p_935->g_atomic_input[92 * get_linear_group_id() + 72]) == 0))
            { /* block id: 22 */
                int32_t l_49 = 0x4FB11589L;
                int64_t l_61 = 0x0B047C1471C2AA0BL;
                int16_t l_62 = 1L;
                int16_t l_63 = 0x6FABL;
                int8_t l_64 = 0x48L;
                uint16_t l_65[9] = {1UL,65529UL,1UL,1UL,65529UL,1UL,1UL,65529UL,1UL};
                uint32_t l_66[10] = {0xD1BD9F01L,0x4FE37806L,4294967287UL,0x4FE37806L,0xD1BD9F01L,0xD1BD9F01L,0x4FE37806L,4294967287UL,0x4FE37806L,0xD1BD9F01L};
                struct S0 l_67 = {0UL};
                struct S0 l_68 = {4294967291UL};
                struct S0 l_69 = {0x324B7C80L};
                struct S0 l_70 = {0x2F47D66AL};
                struct S0 l_71 = {4294967290UL};
                struct S0 l_72[1][2][4] = {{{{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL}}}};
                VECTOR(int32_t, 16) l_73 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x68F1E0EFL), 0x68F1E0EFL), 0x68F1E0EFL, 0L, 0x68F1E0EFL, (VECTOR(int32_t, 2))(0L, 0x68F1E0EFL), (VECTOR(int32_t, 2))(0L, 0x68F1E0EFL), 0L, 0x68F1E0EFL, 0L, 0x68F1E0EFL);
                int32_t l_74 = (-1L);
                int64_t l_75 = (-8L);
                int32_t l_76 = 0x4DB7CFF1L;
                int i, j, k;
                for (l_49 = (-22); (l_49 < (-9)); ++l_49)
                { /* block id: 25 */
                    int32_t l_52[9];
                    uint8_t l_53 = 0x7BL;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_52[i] = 0L;
                    l_53++;
                    for (l_52[8] = 0; (l_52[8] > (-3)); l_52[8] = safe_sub_func_uint16_t_u_u(l_52[8], 7))
                    { /* block id: 29 */
                        uint32_t l_58 = 6UL;
                        VECTOR(uint64_t, 8) l_59 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xE64BFCE9347A64A0L), 0xE64BFCE9347A64A0L), 0xE64BFCE9347A64A0L, 0UL, 0xE64BFCE9347A64A0L);
                        uint32_t l_60 = 1UL;
                        int i;
                        l_60 ^= (l_59.s7 ^= l_58);
                    }
                }
                l_72[0][1][1] = (l_71 = ((l_61 , (l_63 = l_62)) , ((l_66[5] = (l_64 , l_65[3])) , (l_70 = (l_69 = (l_68 = l_67))))));
                l_74 |= ((VECTOR(int32_t, 4))(l_73.s155d)).z;
                l_76 ^= l_75;
                unsigned int result = 0;
                result += l_49;
                result += l_61;
                result += l_62;
                result += l_63;
                result += l_64;
                int l_65_i0;
                for (l_65_i0 = 0; l_65_i0 < 9; l_65_i0++) {
                    result += l_65[l_65_i0];
                }
                int l_66_i0;
                for (l_66_i0 = 0; l_66_i0 < 10; l_66_i0++) {
                    result += l_66[l_66_i0];
                }
                result += l_67.f0;
                result += l_68.f0;
                result += l_69.f0;
                result += l_70.f0;
                result += l_71.f0;
                int l_72_i0, l_72_i1, l_72_i2;
                for (l_72_i0 = 0; l_72_i0 < 1; l_72_i0++) {
                    for (l_72_i1 = 0; l_72_i1 < 2; l_72_i1++) {
                        for (l_72_i2 = 0; l_72_i2 < 4; l_72_i2++) {
                            result += l_72[l_72_i0][l_72_i1][l_72_i2].f0;
                        }
                    }
                }
                result += l_73.sf;
                result += l_73.se;
                result += l_73.sd;
                result += l_73.sc;
                result += l_73.sb;
                result += l_73.sa;
                result += l_73.s9;
                result += l_73.s8;
                result += l_73.s7;
                result += l_73.s6;
                result += l_73.s5;
                result += l_73.s4;
                result += l_73.s3;
                result += l_73.s2;
                result += l_73.s1;
                result += l_73.s0;
                result += l_74;
                result += l_75;
                result += l_76;
                atomic_add(&p_935->g_special_values[92 * get_linear_group_id() + 72], result);
            }
            else
            { /* block id: 43 */
                (1 + 1);
            }
            for (p_16 = (-22); (p_16 != 55); p_16++)
            { /* block id: 48 */
                int32_t *l_79 = &p_935->g_80;
                int32_t *l_81 = &p_935->g_80;
                int32_t *l_82 = &p_935->g_80;
                int32_t *l_83 = &p_935->g_80;
                int32_t *l_84 = (void*)0;
                int32_t *l_85 = &p_935->g_80;
                int32_t *l_86 = &p_935->g_80;
                int32_t *l_87 = (void*)0;
                int32_t l_88[6] = {(-8L),(-10L),(-8L),(-8L),(-10L),(-8L)};
                int32_t *l_89 = &p_935->g_80;
                int32_t *l_90[6] = {&l_88[0],&l_88[0],&l_88[0],&l_88[0],&l_88[0],&l_88[0]};
                VECTOR(uint32_t, 4) l_111 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xA6CE2C69L), 0xA6CE2C69L);
                VECTOR(uint32_t, 2) l_113 = (VECTOR(uint32_t, 2))(0xD168C87BL, 4294967295UL);
                int32_t **l_120[6][2] = {{&l_89,&l_89},{&l_89,&l_89},{&l_89,&l_89},{&l_89,&l_89},{&l_89,&l_89},{&l_89,&l_89}};
                uint32_t *l_145 = &p_935->g_146;
                struct S0 l_237 = {4294967295UL};
                struct S0 l_244 = {4294967295UL};
                int i, j;
                --l_91;
                (*l_85) &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_935->g_94.s4c)).xxxxxxyy)))).s5;
                if (func_28(func_95((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0UL, ((VECTOR(uint16_t, 2))(l_103.wx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(l_104.s50)).yyxyxyxx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(l_105.yx)), ((VECTOR(uint8_t, 2))(p_935->g_106.sb9))))).xxyyyxyx)).s21)).xxyyyxyy))))).s77, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(p_935->g_107.sde)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_108.s72037402)).lo)).even))).yxyyyyyxxyxyxyxy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x5FF6L, 0x6C63L)), func_19((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(1UL, 0xC96F0977L)).yxyy, ((VECTOR(uint32_t, 8))(l_111.yxywxxwx)).even))).xyywxwywwyzwzwxw))))).se8ba, ((VECTOR(uint32_t, 2))(1UL, 0xA12E2198L)).yyyx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_112.xx)).xyyxyxxxxyxyyyyx)).s52d7))).xzwyzxwwwxyzxzwx)).safa2)).wyxxzzwy)).s5467607334662407, ((VECTOR(uint32_t, 4))(l_113.xyyy)).yywxwyxwwxxyxwzw))).s4, p_935->g_94.se)), func_114((l_121 = (void*)0), func_122(p_935->g_106.s0, (safe_lshift_func_int16_t_s_u(0x6B4CL, (((*l_85) = (*l_85)) <= (safe_sub_func_int32_t_s_s(func_129(l_133, func_134(p_935->g_137, ((*l_145) = ((safe_div_func_int32_t_s_s(p_935->g_107.s3, ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(p_935->g_2.z, p_15)) ^ 0UL), p_17)) || l_144[2][2]))) || l_144[2][2])), p_935), p_935->g_comm_values[p_935->tid], p_935), 0xF3C2C29DL))))), p_935), p_935->g_233, p_935->g_173.z, p_17, p_935), p_16, p_935), p_15, ((VECTOR(int16_t, 4))(1L)))).s6007402143030150))).sd3))), 0xE785L, 0xD8E9L)), ((VECTOR(uint16_t, 8))(0x16E5L)), 0x04A7L)).sb, l_103.z)), p_935->g_216, p_18, p_18, l_237, p_935), l_105.y, p_935->g_233.f0, p_935->g_39.s0, p_935))
                { /* block id: 95 */
                    p_935->g_137 = &p_935->g_80;
                    if ((atomic_inc(&p_935->l_atomic_input[49]) == 6))
                    { /* block id: 98 */
                        uint8_t l_238 = 0xECL;
                        --l_238;
                        unsigned int result = 0;
                        result += l_238;
                        atomic_add(&p_935->l_special_values[49], result);
                    }
                    else
                    { /* block id: 100 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 103 */
                    int64_t **l_247 = &p_935->g_246;
                    l_241[0] |= (-7L);
                    for (p_935->g_233.f0 = 2; (p_935->g_233.f0 != 4); p_935->g_233.f0 = safe_add_func_uint16_t_u_u(p_935->g_233.f0, 2))
                    { /* block id: 107 */
                        if (l_144[0][3])
                            break;
                    }
                    p_935->g_137 = &p_935->g_80;
                    if (((l_244 , l_245[2]) != ((*l_247) = p_935->g_246)))
                    { /* block id: 112 */
                        int32_t **l_249 = &p_935->g_216;
                        int32_t ***l_248 = &l_249;
                        int32_t **l_251 = &p_935->g_216;
                        int32_t ***l_250 = &l_251;
                        (*l_250) = ((*l_248) = (void*)0);
                    }
                    else
                    { /* block id: 115 */
                        uint8_t l_252 = 249UL;
                        int32_t *l_253 = &p_935->g_80;
                        l_253 = func_122(l_252, p_935->l_comm_values[(safe_mod_func_uint32_t_u_u(p_935->tid, 43))], p_935);
                    }
                }
            }
            if ((atomic_inc(&p_935->l_atomic_input[46]) == 7))
            { /* block id: 121 */
                uint8_t l_254 = 0x8AL;
                int32_t l_255 = 0x08869D01L;
                uint16_t l_256 = 65535UL;
                int32_t l_257 = (-8L);
                l_255 = l_254;
                l_257 = l_256;
                unsigned int result = 0;
                result += l_254;
                result += l_255;
                result += l_256;
                result += l_257;
                atomic_add(&p_935->l_special_values[46], result);
            }
            else
            { /* block id: 124 */
                (1 + 1);
            }
            p_935->g_137 = ((p_935->g_233 , (p_935->g_205[6] != (l_260 = (&p_935->g_198[2] != ((*l_259) = l_121))))) , l_121);
        }
        for (p_18 = 0; (p_18 <= (-15)); p_18 = safe_sub_func_int16_t_s_s(p_18, 1))
        { /* block id: 133 */
            int32_t *l_263 = &l_260;
            int32_t l_264 = 5L;
            int32_t l_265 = 0x64D3B09AL;
            int32_t *l_266 = &l_264;
            int32_t *l_267 = (void*)0;
            int32_t *l_268 = &l_264;
            int32_t *l_269 = &l_265;
            int32_t *l_270 = &l_265;
            int32_t *l_271 = &p_935->g_80;
            int32_t *l_272[4] = {&l_260,&l_260,&l_260,&l_260};
            int32_t l_279 = 0L;
            struct S0 l_294 = {0x94D7DD97L};
            VECTOR(int8_t, 8) l_357 = (VECTOR(int8_t, 8))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x5CL), 0x5CL), 0x5CL, 9L, 0x5CL);
            int8_t l_360[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            l_285--;
            for (l_273 = 10; (l_273 >= 4); l_273 = safe_sub_func_uint64_t_u_u(l_273, 3))
            { /* block id: 137 */
                int32_t *l_302 = &p_935->g_80;
                for (l_275 = 0; (l_275 != 22); ++l_275)
                { /* block id: 140 */
                    struct S0 *l_293[9] = {&p_935->g_233,&p_935->g_233,&p_935->g_233,&p_935->g_233,&p_935->g_233,&p_935->g_233,&p_935->g_233,&p_935->g_233,&p_935->g_233};
                    int32_t **l_303 = (void*)0;
                    uint32_t *l_310 = &l_294.f0;
                    uint64_t l_316 = 18446744073709551614UL;
                    int i;
                    l_294 = l_292;
                    for (l_279 = 0; (l_279 <= (-13)); l_279--)
                    { /* block id: 144 */
                        p_935->g_137 = &p_935->g_80;
                    }
                    (*l_270) &= ((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_299.yxxx)).xwzzyzxxyyxwwzxy)).s3, (((safe_mul_func_uint8_t_u_u((((0x1075L > p_935->g_39.s5) < ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((&p_935->g_80 != (l_304[0] = l_302)) != ((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((*l_310) = ((&p_935->g_198[3] == l_272[2]) < l_309[2][0][1])) > (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0x104DL, ((*l_302) = p_935->g_315[2][1]))), p_935->g_158[4]))), 255UL)), p_935->g_315[3][0])) || p_15)), 0xAF4A5F34L, 1UL, ((VECTOR(uint32_t, 4))(8UL)), 0x0E271EE9L)).s7651747133743036)).s8a2a, ((VECTOR(uint32_t, 4))(0x57ABA26CL))))).wyxwzwxwyxxyzzww, ((VECTOR(uint32_t, 16))(4294967290UL))))).s7b, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0xCECA912DC9772731L))))).hi) != p_16), 255UL)) , (void*)0) == &l_245[2]))) <= l_316);
                }
            }
            for (p_935->g_80 = 0; (p_935->g_80 == (-14)); p_935->g_80--)
            { /* block id: 155 */
                uint64_t l_319 = 0UL;
                uint32_t *l_323 = &l_292.f0;
                uint32_t **l_322 = &l_323;
                uint32_t *l_325 = (void*)0;
                uint32_t *l_327[6][4][9] = {{{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0}},{{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0}},{{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0}},{{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0}},{{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0}},{{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0},{&p_935->g_233.f0,(void*)0,&p_935->g_146,(void*)0,&p_935->g_230,(void*)0,&l_294.f0,&p_935->g_146,(void*)0}}};
                uint32_t **l_326 = &l_327[4][0][1];
                uint32_t *l_329[6] = {&p_935->g_205[4],&p_935->g_205[4],&p_935->g_205[4],&p_935->g_205[4],&p_935->g_205[4],&p_935->g_205[4]};
                uint32_t **l_328 = &l_329[4];
                int i, j, k;
                (*p_935->g_331) = func_122((l_319 >= ((safe_add_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (((*l_322) = func_122(p_935->g_198[2], p_935->g_107.s4, p_935)) == (l_324[0] = &p_935->g_230)))) < (((*l_328) = ((*l_326) = (l_325 = func_122(p_17, p_16, p_935)))) == &p_935->g_205[5]))), l_319, p_935);
            }
            for (p_935->g_208 = 0; (p_935->g_208 <= 14); ++p_935->g_208)
            { /* block id: 165 */
                int32_t l_337 = 0x07E79E75L;
                uint8_t *l_342 = &p_935->g_203;
                uint8_t **l_341 = &l_342;
                uint16_t *l_358 = (void*)0;
                uint16_t *l_359 = &p_935->g_226[5][1];
                VECTOR(int32_t, 16) l_362 = (VECTOR(int32_t, 16))(0x37888637L, (VECTOR(int32_t, 4))(0x37888637L, (VECTOR(int32_t, 2))(0x37888637L, 0x50D48E6EL), 0x50D48E6EL), 0x50D48E6EL, 0x37888637L, 0x50D48E6EL, (VECTOR(int32_t, 2))(0x37888637L, 0x50D48E6EL), (VECTOR(int32_t, 2))(0x37888637L, 0x50D48E6EL), 0x37888637L, 0x50D48E6EL, 0x37888637L, 0x50D48E6EL);
                int i;
                p_935->g_363 &= ((((VECTOR(uint8_t, 16))(p_935->g_334.s0df438b3dc72b964)).sf | (safe_mul_func_uint16_t_u_u((p_935->g_107.sc >= (!l_337)), (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), 9))))) <= ((((p_15 , l_340[1]) == ((*l_341) = &l_285)) , p_15) && ((((l_362.s6 = (((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), p_935->g_173.z)), ((VECTOR(uint16_t, 4))(l_349.s5717)).z)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(l_350.wx)).yyxy, ((VECTOR(uint16_t, 8))(l_351.xxxywxxz)).lo))).xyxwwzywwzxzzxyx, ((VECTOR(uint16_t, 2))(0xA3A0L, 0x7106L)).xyyxyxyxyyyxyxyx))).sf638)).ywxwzxyy, ((VECTOR(uint16_t, 2))(0xF5C4L, 0x329CL)).xyyyxyxx))))).s5)), 4294967293UL, 4294967295UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_935->g_352.s2615)).ywwzzwxw)).s35)).yxyy)), 4294967286UL)).s67)), 4294967295UL)).z && ((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xD33763558134D8C9L, 18446744073709551615UL)))).yxyyxyyy, ((VECTOR(uint64_t, 2))(0x789C417655FDF324L, 0xCAAE95312AAD0BF7L)).yyyyyyxy))).s67)), 18446744073709551615UL, ((l_360[8] = ((*l_359) = (!(safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(l_357.s23022042))))).s7, (*l_271))) == 0x3BL), (*l_270)))))) == l_361), p_17, ((VECTOR(uint64_t, 8))(3UL)), GROUP_DIVERGE(1, 1), 0x3A8D199B151245E3L, 0x9200326CECA46E4AL)).sa0)).hi == 0x5C8848BFD57F4B2DL) , p_16))) >= FAKE_DIVERGE(p_935->local_0_offset, get_local_id(0), 10)) | 0x45L) | p_935->g_158[2])));
                (*p_935->g_331) = &l_265;
                (*p_935->g_137) = (-1L);
            }
        }
    }
    (*l_364) = &l_309[2][0][1];
    p_935->g_365 = p_935->g_365;
    if ((atomic_inc(&p_935->g_atomic_input[92 * get_linear_group_id() + 34]) == 9))
    { /* block id: 179 */
        int64_t l_367[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int8_t l_368 = 1L;
        VECTOR(int32_t, 16) l_573 = (VECTOR(int32_t, 16))(0x4AEAAD01L, (VECTOR(int32_t, 4))(0x4AEAAD01L, (VECTOR(int32_t, 2))(0x4AEAAD01L, 0x10E6CFBDL), 0x10E6CFBDL), 0x10E6CFBDL, 0x4AEAAD01L, 0x10E6CFBDL, (VECTOR(int32_t, 2))(0x4AEAAD01L, 0x10E6CFBDL), (VECTOR(int32_t, 2))(0x4AEAAD01L, 0x10E6CFBDL), 0x4AEAAD01L, 0x10E6CFBDL, 0x4AEAAD01L, 0x10E6CFBDL);
        int8_t l_574 = 0x35L;
        uint32_t l_575[6][7] = {{1UL,4294967295UL,4294967295UL,1UL,0xB6C44EE8L,0xA4D172D6L,0xA4D172D6L},{1UL,4294967295UL,4294967295UL,1UL,0xB6C44EE8L,0xA4D172D6L,0xA4D172D6L},{1UL,4294967295UL,4294967295UL,1UL,0xB6C44EE8L,0xA4D172D6L,0xA4D172D6L},{1UL,4294967295UL,4294967295UL,1UL,0xB6C44EE8L,0xA4D172D6L,0xA4D172D6L},{1UL,4294967295UL,4294967295UL,1UL,0xB6C44EE8L,0xA4D172D6L,0xA4D172D6L},{1UL,4294967295UL,4294967295UL,1UL,0xB6C44EE8L,0xA4D172D6L,0xA4D172D6L}};
        uint32_t l_576 = 4294967289UL;
        uint32_t l_577 = 1UL;
        int8_t l_578 = 0x3BL;
        int32_t *l_580 = (void*)0;
        int32_t **l_579 = &l_580;
        int32_t **l_581 = &l_580;
        uint16_t l_582 = 1UL;
        int i, j;
        if ((l_368 |= l_367[7]))
        { /* block id: 181 */
            uint8_t l_369 = 0x15L;
            uint32_t l_370 = 0UL;
            int8_t l_371 = (-1L);
            if ((l_371 = (l_370 &= (l_369 = (-10L)))))
            { /* block id: 185 */
                uint64_t l_372 = 1UL;
                int64_t l_408 = 6L;
                uint32_t l_409[2];
                uint32_t l_412[4];
                int16_t l_413[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                int i;
                for (i = 0; i < 2; i++)
                    l_409[i] = 0x157C3972L;
                for (i = 0; i < 4; i++)
                    l_412[i] = 0xE76DD2CEL;
                if (l_372)
                { /* block id: 186 */
                    VECTOR(int32_t, 16) l_373 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0D7F1011L), 0x0D7F1011L), 0x0D7F1011L, 1L, 0x0D7F1011L, (VECTOR(int32_t, 2))(1L, 0x0D7F1011L), (VECTOR(int32_t, 2))(1L, 0x0D7F1011L), 1L, 0x0D7F1011L, 1L, 0x0D7F1011L);
                    uint8_t l_374[2][3][1] = {{{0x65L},{0x65L},{0x65L}},{{0x65L},{0x65L},{0x65L}}};
                    uint32_t l_375 = 0xD72D8E9FL;
                    VECTOR(int32_t, 2) l_376 = (VECTOR(int32_t, 2))(0x7F4D2352L, 1L);
                    uint16_t l_377 = 0xA15BL;
                    VECTOR(int32_t, 8) l_378 = (VECTOR(int32_t, 8))(0x06CF942CL, (VECTOR(int32_t, 4))(0x06CF942CL, (VECTOR(int32_t, 2))(0x06CF942CL, (-6L)), (-6L)), (-6L), 0x06CF942CL, (-6L));
                    int32_t l_379[7][1];
                    VECTOR(int32_t, 8) l_380 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x48E85CC0L), 0x48E85CC0L), 0x48E85CC0L, 0L, 0x48E85CC0L);
                    VECTOR(int32_t, 4) l_381 = (VECTOR(int32_t, 4))(0x7A6FA3F3L, (VECTOR(int32_t, 2))(0x7A6FA3F3L, 0x4D2C887AL), 0x4D2C887AL);
                    uint32_t l_382[10] = {0x2F1A0E5EL,0x2F1A0E5EL,0x2F1A0E5EL,0x2F1A0E5EL,0x2F1A0E5EL,0x2F1A0E5EL,0x2F1A0E5EL,0x2F1A0E5EL,0x2F1A0E5EL,0x2F1A0E5EL};
                    int32_t l_383 = 0x5FE70CD3L;
                    uint16_t l_384[4];
                    uint32_t l_385 = 1UL;
                    uint32_t l_386 = 0x5263C96BL;
                    uint32_t l_387[10] = {4294967291UL,4UL,0xC538D2C8L,4UL,4294967291UL,4294967291UL,4UL,0xC538D2C8L,4UL,4294967291UL};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_379[i][j] = 5L;
                    }
                    for (i = 0; i < 4; i++)
                        l_384[i] = 0xF9E3L;
                    l_382[1] = ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_373.s309857359ee0047e)).s0be1, ((VECTOR(int32_t, 16))((l_375 = l_374[1][2][0]), ((VECTOR(int32_t, 8))(l_376.xyxyxxxx)), (l_377 = 0x481AC097L), ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_378.s4454)).zyyyyzyy))).s1, 0x26642A46L, (l_379[2][0] , 0x4427DAAFL), 0x270AC51FL, 0x1AE59221L, 0x7CF1C565L)).sf0b7, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_380.s7311055602430322)).s13)).yyyxxxyyyxxxxyyy)).s9a9f, ((VECTOR(int32_t, 2))(l_381.zz)).yyxx)))))).w;
                    l_385 |= (l_383 , l_384[3]);
                    l_387[6] = l_386;
                }
                else
                { /* block id: 192 */
                    int16_t l_388 = 0x5AC7L;
                    if (l_388)
                    { /* block id: 193 */
                        VECTOR(uint64_t, 16) l_389 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint64_t, 2))(1UL, 0UL), (VECTOR(uint64_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
                        VECTOR(int32_t, 16) l_390 = (VECTOR(int32_t, 16))(0x60FBF538L, (VECTOR(int32_t, 4))(0x60FBF538L, (VECTOR(int32_t, 2))(0x60FBF538L, 0x55382ABEL), 0x55382ABEL), 0x55382ABEL, 0x60FBF538L, 0x55382ABEL, (VECTOR(int32_t, 2))(0x60FBF538L, 0x55382ABEL), (VECTOR(int32_t, 2))(0x60FBF538L, 0x55382ABEL), 0x60FBF538L, 0x55382ABEL, 0x60FBF538L, 0x55382ABEL);
                        VECTOR(int32_t, 2) l_391 = (VECTOR(int32_t, 2))(4L, 1L);
                        VECTOR(int32_t, 8) l_392 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-1L)), (-1L)), (-1L), 4L, (-1L));
                        int16_t l_393 = 0x46AFL;
                        VECTOR(int16_t, 2) l_394 = (VECTOR(int16_t, 2))(1L, 0L);
                        VECTOR(int32_t, 8) l_395 = (VECTOR(int32_t, 8))(0x41923634L, (VECTOR(int32_t, 4))(0x41923634L, (VECTOR(int32_t, 2))(0x41923634L, 0x720A43A7L), 0x720A43A7L), 0x720A43A7L, 0x41923634L, 0x720A43A7L);
                        int32_t *l_396 = (void*)0;
                        int i;
                        l_389.s0 = 1L;
                        l_396 = (((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_390.s28)).xxyxyyxxxyyxyyyx)).hi)).s12)).xxxxyyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_391.yxxyyyxy)).lo)).wxxyxyxz))).s31, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(l_392.s73175741)).s4430055363637701, (int32_t)l_393))).sb6d8)).lo))).hi , ((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_394.xxxyxxyxxyyyxyxx)).s01)).lo , (((VECTOR(int32_t, 2))(l_395.s00)).lo , ((VECTOR(uint64_t, 2))(4UL, 1UL)).odd)) , (void*)0));
                    }
                    else
                    { /* block id: 196 */
                        struct S0 l_397 = {0x24994364L};
                        struct S0 l_398 = {0xD7DFA84AL};
                        int16_t l_399 = 1L;
                        int64_t l_400 = (-7L);
                        int8_t l_401 = 0x4BL;
                        VECTOR(uint32_t, 8) l_402 = (VECTOR(uint32_t, 8))(0x1C0306E1L, (VECTOR(uint32_t, 4))(0x1C0306E1L, (VECTOR(uint32_t, 2))(0x1C0306E1L, 0xE86082F2L), 0xE86082F2L), 0xE86082F2L, 0x1C0306E1L, 0xE86082F2L);
                        int16_t l_403 = (-1L);
                        int32_t l_405 = (-1L);
                        int32_t *l_404 = &l_405;
                        int32_t *l_406 = &l_405;
                        int32_t *l_407 = &l_405;
                        int i;
                        l_398 = l_397;
                        l_403 ^= ((l_399 , (l_400 , l_401)) , l_402.s0);
                        l_407 = (l_406 = l_404);
                    }
                }
                l_409[1]--;
                if ((l_413[0] = l_412[0]))
                { /* block id: 205 */
                    uint32_t l_414[7][7] = {{4294967295UL,0x260B9869L,0x05813685L,0x01098F47L,0x260B9869L,0x01098F47L,0x05813685L},{4294967295UL,0x260B9869L,0x05813685L,0x01098F47L,0x260B9869L,0x01098F47L,0x05813685L},{4294967295UL,0x260B9869L,0x05813685L,0x01098F47L,0x260B9869L,0x01098F47L,0x05813685L},{4294967295UL,0x260B9869L,0x05813685L,0x01098F47L,0x260B9869L,0x01098F47L,0x05813685L},{4294967295UL,0x260B9869L,0x05813685L,0x01098F47L,0x260B9869L,0x01098F47L,0x05813685L},{4294967295UL,0x260B9869L,0x05813685L,0x01098F47L,0x260B9869L,0x01098F47L,0x05813685L},{4294967295UL,0x260B9869L,0x05813685L,0x01098F47L,0x260B9869L,0x01098F47L,0x05813685L}};
                    uint16_t l_415 = 1UL;
                    VECTOR(uint8_t, 2) l_416 = (VECTOR(uint8_t, 2))(0x0EL, 248UL);
                    uint16_t l_417 = 0x54FBL;
                    int32_t l_418 = 0x70967E95L;
                    int16_t l_419[7] = {0x154EL,(-4L),0x154EL,0x154EL,(-4L),0x154EL,0x154EL};
                    int32_t l_420 = 0x76D208DFL;
                    int8_t l_421 = (-9L);
                    uint16_t l_422 = 9UL;
                    int32_t l_423[2][6][8] = {{{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L}},{{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L},{1L,1L,7L,(-1L),8L,0x0F8B9176L,0x3EB16D07L,0x4B2093C4L}}};
                    uint32_t l_424[1];
                    uint32_t l_425[3];
                    VECTOR(uint8_t, 2) l_426 = (VECTOR(uint8_t, 2))(0x97L, 0xF9L);
                    int8_t l_427 = 7L;
                    VECTOR(uint8_t, 2) l_428 = (VECTOR(uint8_t, 2))(252UL, 0xADL);
                    VECTOR(uint8_t, 8) l_429 = (VECTOR(uint8_t, 8))(0xDAL, (VECTOR(uint8_t, 4))(0xDAL, (VECTOR(uint8_t, 2))(0xDAL, 0UL), 0UL), 0UL, 0xDAL, 0UL);
                    VECTOR(uint8_t, 2) l_430 = (VECTOR(uint8_t, 2))(255UL, 0xDBL);
                    VECTOR(uint8_t, 2) l_431 = (VECTOR(uint8_t, 2))(0UL, 0x20L);
                    VECTOR(uint8_t, 2) l_432 = (VECTOR(uint8_t, 2))(0UL, 0x47L);
                    VECTOR(uint8_t, 16) l_433 = (VECTOR(uint8_t, 16))(0xDBL, (VECTOR(uint8_t, 4))(0xDBL, (VECTOR(uint8_t, 2))(0xDBL, 255UL), 255UL), 255UL, 0xDBL, 255UL, (VECTOR(uint8_t, 2))(0xDBL, 255UL), (VECTOR(uint8_t, 2))(0xDBL, 255UL), 0xDBL, 255UL, 0xDBL, 255UL);
                    VECTOR(uint8_t, 8) l_434 = (VECTOR(uint8_t, 8))(0x8EL, (VECTOR(uint8_t, 4))(0x8EL, (VECTOR(uint8_t, 2))(0x8EL, 1UL), 1UL), 1UL, 0x8EL, 1UL);
                    VECTOR(int8_t, 2) l_435 = (VECTOR(int8_t, 2))(0x36L, (-1L));
                    VECTOR(int8_t, 2) l_436 = (VECTOR(int8_t, 2))(0L, 0x6DL);
                    uint64_t l_437[8][8][4] = {{{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL}},{{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL}},{{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL}},{{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL}},{{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL}},{{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL}},{{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL}},{{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL},{0x489EDA9596CE941CL,0xE32688C6A88DFEA1L,1UL,1UL}}};
                    int8_t l_438 = (-1L);
                    VECTOR(uint8_t, 16) l_439 = (VECTOR(uint8_t, 16))(0xF2L, (VECTOR(uint8_t, 4))(0xF2L, (VECTOR(uint8_t, 2))(0xF2L, 248UL), 248UL), 248UL, 0xF2L, 248UL, (VECTOR(uint8_t, 2))(0xF2L, 248UL), (VECTOR(uint8_t, 2))(0xF2L, 248UL), 0xF2L, 248UL, 0xF2L, 248UL);
                    int16_t l_440 = (-2L);
                    uint16_t l_441 = 0x5611L;
                    int8_t l_442 = (-1L);
                    uint32_t l_443 = 0x2590158AL;
                    int16_t l_444 = 0x003DL;
                    uint32_t l_445 = 5UL;
                    int16_t l_446[3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_424[i] = 1UL;
                    for (i = 0; i < 3; i++)
                        l_425[i] = 4294967287UL;
                    for (i = 0; i < 3; i++)
                        l_446[i] = 0x4497L;
                    l_415 = l_414[1][2];
                    if ((((((VECTOR(uint32_t, 2))(0x17655958L, 4294967290UL)).even , (l_444 = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_416.yx)).xyxx)).x, ((l_424[0] = ((l_421 |= (l_417 , (l_420 = (l_419[3] = l_418)))) , (l_423[0][2][7] = l_422))) , 1UL), 0x13L, (GROUP_DIVERGE(2, 1) , l_425[2]), 246UL, ((VECTOR(uint8_t, 2))(l_426.yx)), l_427, 1UL, 4UL, 1UL, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(l_428.xy)).yxxx, ((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 16))(l_429.s7634642252163442)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x0DB3F942L, 0xB5ECC560L)).yyyxxxyxxyxyyxxx)).s2 , GROUP_DIVERGE(2, 1)), ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))((l_428.x |= ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))((l_369 = ((VECTOR(uint8_t, 16))(l_430.yyyyyyyxyyxyyyxy)).sa), ((VECTOR(uint8_t, 16))(l_431.yyxyyyxyxyxxyxxy)).s7, ((VECTOR(uint8_t, 2))(l_432.xx)), 0x79L, ((VECTOR(uint8_t, 2))(l_433.sb3)), 1UL))))).s25)).hi), FAKE_DIVERGE(p_935->global_0_offset, get_global_id(0), 10), 255UL, ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_434.s16)), ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_435.xxyy)).zwwwzwxy)).odd, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(l_436.yxxyxyyy)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))((-5L), l_437[2][4][0], (l_371 = l_438), 0L, ((VECTOR(int8_t, 2))(0x62L, 0L)), (l_371 ^= ((l_369 = ((VECTOR(uint8_t, 16))(l_439.s9da7eae0860e1631)).sd) , (l_440 , l_441))), 0x2FL, ((VECTOR(int8_t, 2))(0x0FL)), l_442, ((VECTOR(int8_t, 2))(0L)), 1L, (-1L), (-1L))).odd, ((VECTOR(int8_t, 8))(0x6BL))))).s7300271414503445, (int8_t)(-1L)))).sf7)).yyxy))).hi))), ((VECTOR(int8_t, 2))(0x62L))))).yxxx))).zxyywyyw)).s73, ((VECTOR(uint8_t, 2))(0UL))))), 0xA7L, l_443, 0x0BL, 0UL)))).hi, ((VECTOR(uint8_t, 4))(1UL))))), 0x09L)).odd)).lo)), ((VECTOR(uint8_t, 2))(249UL))))), 6UL)))).zzxxxzwxxyxzxyxz))).sdd33, ((VECTOR(uint8_t, 4))(0x88L))))), 1UL)).even)).even)).y)) , l_445) , l_446[0]))
                    { /* block id: 218 */
                        int64_t l_447 = 1L;
                        struct S0 l_448 = {4294967291UL};
                        VECTOR(int32_t, 8) l_449 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x00DBCFCDL), 0x00DBCFCDL), 0x00DBCFCDL, 5L, 0x00DBCFCDL);
                        int i;
                        l_423[0][2][7] ^= l_447;
                        l_423[1][5][1] ^= (l_448 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_449.s02)), (-10L), 0x460C17DEL)).wxzzxyzwxwyxzwxz)).sf);
                    }
                    else
                    { /* block id: 221 */
                        struct S0 l_450[5][6] = {{{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL}},{{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL}},{{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL}},{{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL}},{{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL},{0x02A8D5DFL}}};
                        struct S0 l_451 = {0x02F9299CL};
                        struct S0 l_452 = {4294967295UL};
                        uint8_t l_453 = 255UL;
                        struct S0 l_454 = {0UL};
                        struct S0 l_455 = {1UL};
                        int i, j;
                        l_452 = (l_451 = (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-2L), (-1L))))).even , (l_450[2][3] = l_450[2][1])));
                        l_423[1][5][6] = l_453;
                        l_455 = l_454;
                    }
                }
                else
                { /* block id: 228 */
                    VECTOR(uint64_t, 16) l_456 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL);
                    VECTOR(uint64_t, 16) l_457 = (VECTOR(uint64_t, 16))(0x12176B7DF6245630L, (VECTOR(uint64_t, 4))(0x12176B7DF6245630L, (VECTOR(uint64_t, 2))(0x12176B7DF6245630L, 0x2A650DD6BAD00960L), 0x2A650DD6BAD00960L), 0x2A650DD6BAD00960L, 0x12176B7DF6245630L, 0x2A650DD6BAD00960L, (VECTOR(uint64_t, 2))(0x12176B7DF6245630L, 0x2A650DD6BAD00960L), (VECTOR(uint64_t, 2))(0x12176B7DF6245630L, 0x2A650DD6BAD00960L), 0x12176B7DF6245630L, 0x2A650DD6BAD00960L, 0x12176B7DF6245630L, 0x2A650DD6BAD00960L);
                    int32_t l_458 = 1L;
                    VECTOR(uint32_t, 16) l_459 = (VECTOR(uint32_t, 16))(0x74308C31L, (VECTOR(uint32_t, 4))(0x74308C31L, (VECTOR(uint32_t, 2))(0x74308C31L, 4294967286UL), 4294967286UL), 4294967286UL, 0x74308C31L, 4294967286UL, (VECTOR(uint32_t, 2))(0x74308C31L, 4294967286UL), (VECTOR(uint32_t, 2))(0x74308C31L, 4294967286UL), 0x74308C31L, 4294967286UL, 0x74308C31L, 4294967286UL);
                    uint32_t l_460 = 4294967295UL;
                    int16_t l_461 = 0x25E4L;
                    VECTOR(int32_t, 16) l_462 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x552F81D0L), 0x552F81D0L), 0x552F81D0L, (-1L), 0x552F81D0L, (VECTOR(int32_t, 2))((-1L), 0x552F81D0L), (VECTOR(int32_t, 2))((-1L), 0x552F81D0L), (-1L), 0x552F81D0L, (-1L), 0x552F81D0L);
                    int64_t l_463 = 0x1FCF4C5A29EC5695L;
                    uint32_t l_464 = 4294967295UL;
                    uint32_t l_465 = 0xB434D943L;
                    uint64_t l_466 = 0UL;
                    VECTOR(int32_t, 8) l_467 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4AA78DE2L), 0x4AA78DE2L), 0x4AA78DE2L, 1L, 0x4AA78DE2L);
                    uint32_t l_468[5];
                    VECTOR(uint16_t, 16) l_469 = (VECTOR(uint16_t, 16))(0x50A8L, (VECTOR(uint16_t, 4))(0x50A8L, (VECTOR(uint16_t, 2))(0x50A8L, 65535UL), 65535UL), 65535UL, 0x50A8L, 65535UL, (VECTOR(uint16_t, 2))(0x50A8L, 65535UL), (VECTOR(uint16_t, 2))(0x50A8L, 65535UL), 0x50A8L, 65535UL, 0x50A8L, 65535UL);
                    uint32_t l_470 = 0xE1DF0763L;
                    int64_t l_471 = (-1L);
                    uint32_t l_472[1];
                    int32_t l_473 = 4L;
                    uint64_t l_474 = 0x520B6069987C9B9BL;
                    uint32_t l_475 = 0x7607D01DL;
                    uint32_t l_476 = 1UL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_468[i] = 0UL;
                    for (i = 0; i < 1; i++)
                        l_472[i] = 0xAF86749AL;
                    l_458 &= (((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(l_456.saa02277a)).s05, ((VECTOR(uint64_t, 16))(l_457.sad2882ccd5ea1083)).s50))).hi , 0x0ACF3808L);
                    l_476 = ((((VECTOR(uint32_t, 4))(l_459.sb0db)).y , (l_460 , l_461)) , (((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(l_462.s09611851a363ad8e)).s36, (int32_t)l_463, (int32_t)l_464))).yxyxyxxy, (int32_t)(l_465 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_466, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(l_467.s17256414)).s54, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_468[0], l_469.s0, l_470, ((VECTOR(int32_t, 4))(0x4780991AL)), l_471, 4L, 0x088EDC37L, (-1L), ((VECTOR(int32_t, 2))(0x60C866EFL)), l_472[0], (-4L), (-3L))), ((VECTOR(int32_t, 16))((-1L)))))).sf6b0, ((VECTOR(int32_t, 4))((-5L))), ((VECTOR(int32_t, 4))(0x4471942BL))))).odd)), ((VECTOR(int32_t, 2))(0x5470F3FAL)))))))), 0x4CE98A99L, 0x588D7346L)), ((VECTOR(int32_t, 2))(0x142D5EF3L)), 0x73ACA325L)).s6, 0x062943B0L, ((VECTOR(int32_t, 2))(0x43754198L)), l_473, l_474, 0x4A88E190L, 5L)).s7)))).s5 , l_475));
                    for (l_474 = 4; (l_474 < 13); ++l_474)
                    { /* block id: 233 */
                        VECTOR(uint64_t, 16) l_479 = (VECTOR(uint64_t, 16))(0x2D52E36B844DC42BL, (VECTOR(uint64_t, 4))(0x2D52E36B844DC42BL, (VECTOR(uint64_t, 2))(0x2D52E36B844DC42BL, 0xF67D7752D2EA4169L), 0xF67D7752D2EA4169L), 0xF67D7752D2EA4169L, 0x2D52E36B844DC42BL, 0xF67D7752D2EA4169L, (VECTOR(uint64_t, 2))(0x2D52E36B844DC42BL, 0xF67D7752D2EA4169L), (VECTOR(uint64_t, 2))(0x2D52E36B844DC42BL, 0xF67D7752D2EA4169L), 0x2D52E36B844DC42BL, 0xF67D7752D2EA4169L, 0x2D52E36B844DC42BL, 0xF67D7752D2EA4169L);
                        uint32_t l_482 = 0UL;
                        VECTOR(uint64_t, 2) l_483 = (VECTOR(uint64_t, 2))(0x8829DF67C68C47A0L, 0x38368A586DC91FEFL);
                        VECTOR(uint64_t, 4) l_484 = (VECTOR(uint64_t, 4))(0x47A9E6469B5EE45EL, (VECTOR(uint64_t, 2))(0x47A9E6469B5EE45EL, 0x118F05971BF20BC5L), 0x118F05971BF20BC5L);
                        VECTOR(uint64_t, 4) l_485 = (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x7CD3491409476E90L), 0x7CD3491409476E90L);
                        VECTOR(uint32_t, 16) l_486 = (VECTOR(uint32_t, 16))(0xC7CAB79CL, (VECTOR(uint32_t, 4))(0xC7CAB79CL, (VECTOR(uint32_t, 2))(0xC7CAB79CL, 0x2E5936F5L), 0x2E5936F5L), 0x2E5936F5L, 0xC7CAB79CL, 0x2E5936F5L, (VECTOR(uint32_t, 2))(0xC7CAB79CL, 0x2E5936F5L), (VECTOR(uint32_t, 2))(0xC7CAB79CL, 0x2E5936F5L), 0xC7CAB79CL, 0x2E5936F5L, 0xC7CAB79CL, 0x2E5936F5L);
                        VECTOR(uint32_t, 8) l_487 = (VECTOR(uint32_t, 8))(0x88F708C9L, (VECTOR(uint32_t, 4))(0x88F708C9L, (VECTOR(uint32_t, 2))(0x88F708C9L, 0xC8C685DCL), 0xC8C685DCL), 0xC8C685DCL, 0x88F708C9L, 0xC8C685DCL);
                        uint16_t l_488 = 0UL;
                        VECTOR(int32_t, 16) l_489 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x54A41F7AL), 0x54A41F7AL), 0x54A41F7AL, (-1L), 0x54A41F7AL, (VECTOR(int32_t, 2))((-1L), 0x54A41F7AL), (VECTOR(int32_t, 2))((-1L), 0x54A41F7AL), (-1L), 0x54A41F7AL, (-1L), 0x54A41F7AL);
                        VECTOR(uint64_t, 2) l_490 = (VECTOR(uint64_t, 2))(0xE261065C35F43969L, 1UL);
                        VECTOR(uint64_t, 2) l_491 = (VECTOR(uint64_t, 2))(0xBC632FFAA1111C21L, 18446744073709551615UL);
                        VECTOR(uint64_t, 8) l_492 = (VECTOR(uint64_t, 8))(0xECBAD0B91B8A0D48L, (VECTOR(uint64_t, 4))(0xECBAD0B91B8A0D48L, (VECTOR(uint64_t, 2))(0xECBAD0B91B8A0D48L, 0x66CC08FFC2D84C48L), 0x66CC08FFC2D84C48L), 0x66CC08FFC2D84C48L, 0xECBAD0B91B8A0D48L, 0x66CC08FFC2D84C48L);
                        VECTOR(uint64_t, 2) l_493 = (VECTOR(uint64_t, 2))(0xBA15CE5BAE4D30AAL, 0xFEF24524DB425F35L);
                        uint32_t l_494 = 0UL;
                        VECTOR(int8_t, 16) l_495 = (VECTOR(int8_t, 16))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0x45L), 0x45L), 0x45L, 0x15L, 0x45L, (VECTOR(int8_t, 2))(0x15L, 0x45L), (VECTOR(int8_t, 2))(0x15L, 0x45L), 0x15L, 0x45L, 0x15L, 0x45L);
                        VECTOR(uint64_t, 2) l_496 = (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL);
                        VECTOR(uint64_t, 2) l_497 = (VECTOR(uint64_t, 2))(18446744073709551613UL, 18446744073709551615UL);
                        VECTOR(uint32_t, 16) l_498 = (VECTOR(uint32_t, 16))(0xB8C90312L, (VECTOR(uint32_t, 4))(0xB8C90312L, (VECTOR(uint32_t, 2))(0xB8C90312L, 0x260CB54AL), 0x260CB54AL), 0x260CB54AL, 0xB8C90312L, 0x260CB54AL, (VECTOR(uint32_t, 2))(0xB8C90312L, 0x260CB54AL), (VECTOR(uint32_t, 2))(0xB8C90312L, 0x260CB54AL), 0xB8C90312L, 0x260CB54AL, 0xB8C90312L, 0x260CB54AL);
                        VECTOR(uint16_t, 8) l_499 = (VECTOR(uint16_t, 8))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 65526UL), 65526UL), 65526UL, 9UL, 65526UL);
                        VECTOR(uint32_t, 2) l_500 = (VECTOR(uint32_t, 2))(0UL, 0x1E605D80L);
                        struct S0 l_501[3] = {{0UL},{0UL},{0UL}};
                        VECTOR(int64_t, 8) l_502 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x75E02A17D2C2E296L), 0x75E02A17D2C2E296L), 0x75E02A17D2C2E296L, 0L, 0x75E02A17D2C2E296L);
                        uint8_t l_503 = 0x47L;
                        uint32_t l_504 = 0UL;
                        uint8_t l_505 = 0x88L;
                        int32_t l_506 = (-8L);
                        int32_t l_507 = 0x41E1899AL;
                        struct S0 l_508 = {1UL};
                        struct S0 l_509 = {4294967295UL};
                        struct S0 l_510 = {4294967295UL};
                        VECTOR(int32_t, 2) l_511 = (VECTOR(int32_t, 2))(0x4CDA5011L, (-10L));
                        int32_t l_512 = 0x6AAE4366L;
                        int i;
                        l_479.se++;
                        l_467.s5 ^= (l_462.s0 &= l_482);
                        l_510 = (l_509 = (((VECTOR(uint64_t, 16))((l_505 = ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_483.xxxyyxyx)).s21)).xxyyyxxx))).s1762676624177752, ((VECTOR(uint64_t, 16))(18446744073709551615UL, 0x155DF4E0D470B3D5L, 1UL, ((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_484.wzzz)).y, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_485.zzwwzyxw)).even)), 4UL, 0xD607CB69E34FEFF9L, 18446744073709551615UL)).lo, ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 2))(18446744073709551613UL, 0x11E532867883879AL)).xxyxyxxy, ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 16))(1UL, ((VECTOR(uint32_t, 8))(l_486.se3888eda)), ((VECTOR(uint32_t, 2))(0UL, 0x6776FDDDL)), 0x407C2034L, ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(l_487.s3574212256545573)).s4f))), 0xD132804AL, 9UL)).s0978, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_488, GROUP_DIVERGE(1, 1), 0UL, ((VECTOR(uint32_t, 2))(1UL, 0xE8B5E015L)), l_489.s1, 7UL, 1UL)).s1035313246011535)).s81c3))).xwwzwxzywywxywzy)).hi, ((VECTOR(uint64_t, 4))(l_490.xxyx)).yzyyxyzz, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x0EDBB0323B244EAFL, 1UL)).yxyy)).wzzwwzxz)))))).s44, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_491.yyxxxxyx)).s03)), 2UL, ((VECTOR(uint64_t, 2))(l_492.s16)), 0UL, 0x03CA05E043C6F09EL, 0x8779E8815894DD97L)).lo)).hi))).yyxy))).x, 0xDC220F8A89E1026AL, ((VECTOR(uint64_t, 4))(l_493.yxyx)), 0xD81486F05A0C1395L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))(0xA4A4E663835BEE56L, ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551609UL)).xyyyxxyx, (uint64_t)l_494))), (l_456.s6 |= 0x442D31DCA00ADE46L), (((VECTOR(int8_t, 16))(l_495.s9e581e60841de620)).sf , FAKE_DIVERGE(p_935->group_0_offset, get_group_id(0), 10)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0xAA8F27D40664565FL, 18446744073709551606UL, 18446744073709551615UL, 6UL)).wwywzyzx)).s0, 18446744073709551607UL, 18446744073709551612UL, 0x3830F90AA0F6B034L, 0UL)).s15, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_496.xyyyyxyyyxyyyyxy)))).s61))).yyxy)).y, 18446744073709551615UL, (l_456.sb = 0x3048D2A2814D4989L), 0x04833BA4B0EAF7DEL, 0x2A47669F8B115873L, 0xF12748CBF1F46B21L)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_497.xyxyxyxx)).s7147520544746326))))).see, (uint64_t)(l_466 = (l_372 = (((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 0UL)).yxxx)), ((VECTOR(uint32_t, 16))(l_498.s543ab166deccdc1a)).s76c9, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(l_499.s4210)), ((VECTOR(uint16_t, 2))(1UL, 0xF42DL)).xxxy))).xxwywxxx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_500.yx)).yyxyxyyx))))).lo))).x , ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 2))(0xC7FD85FB8E5D72F2L, 0UL)).yxxy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0UL, 0xF7C17CAED3D7042CL)))).xyyy, ((VECTOR(uint64_t, 16))(1UL, 1UL, ((l_501[1] , GROUP_DIVERGE(0, 1)) , (l_457.s0 = (l_456.s5 = ((l_413[6] ^= l_502.s1) , l_503)))), 0xCB84A5573BDD2BEBL, 18446744073709551606UL, ((VECTOR(uint64_t, 2))(0xEFB9E7C4BCEF9050L)), l_504, ((VECTOR(uint64_t, 8))(0xFC114021B8D4A918L)))).sbd92))).w)))))).yyyy, ((VECTOR(uint64_t, 4))(0x48782385E07FFA91L)), ((VECTOR(uint64_t, 4))(3UL))))).x), 18446744073709551615UL, ((VECTOR(uint64_t, 2))(0xD608728BEDF8FAB8L)), l_506, l_507, 0xEFB643081936FC2EL, 18446744073709551610UL, 0xBD754FCFA586B74AL, 0xB92581B317EB4B1DL, 0x4D6B52E8D2751DF8L, ((VECTOR(uint64_t, 2))(1UL)), 0xA13F37508BDD9A00L, 18446744073709551615UL, 3UL)).s3 , l_508));
                        l_512 &= (l_507 = ((VECTOR(int32_t, 16))(l_511.xyyxyxxxxxxyyxxx)).s4);
                    }
                }
            }
            else
            { /* block id: 251 */
                VECTOR(int32_t, 8) l_513 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x42EDE97DL), 0x42EDE97DL), 0x42EDE97DL, 4L, 0x42EDE97DL);
                uint8_t l_514 = 0x1AL;
                uint32_t l_515 = 4294967291UL;
                int32_t l_516 = 0x34B82B11L;
                VECTOR(uint32_t, 8) l_517 = (VECTOR(uint32_t, 8))(0x4248B175L, (VECTOR(uint32_t, 4))(0x4248B175L, (VECTOR(uint32_t, 2))(0x4248B175L, 0x42C09D46L), 0x42C09D46L), 0x42C09D46L, 0x4248B175L, 0x42C09D46L);
                uint32_t l_518[7];
                VECTOR(int32_t, 16) l_519 = (VECTOR(int32_t, 16))(0x6D9D0AFBL, (VECTOR(int32_t, 4))(0x6D9D0AFBL, (VECTOR(int32_t, 2))(0x6D9D0AFBL, (-1L)), (-1L)), (-1L), 0x6D9D0AFBL, (-1L), (VECTOR(int32_t, 2))(0x6D9D0AFBL, (-1L)), (VECTOR(int32_t, 2))(0x6D9D0AFBL, (-1L)), 0x6D9D0AFBL, (-1L), 0x6D9D0AFBL, (-1L));
                VECTOR(int16_t, 4) l_520 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x37E2L), 0x37E2L);
                VECTOR(uint16_t, 16) l_521 = (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0xF2B2L), 0xF2B2L), 0xF2B2L, 2UL, 0xF2B2L, (VECTOR(uint16_t, 2))(2UL, 0xF2B2L), (VECTOR(uint16_t, 2))(2UL, 0xF2B2L), 2UL, 0xF2B2L, 2UL, 0xF2B2L);
                VECTOR(int32_t, 16) l_522 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5CCD3F2AL), 0x5CCD3F2AL), 0x5CCD3F2AL, 0L, 0x5CCD3F2AL, (VECTOR(int32_t, 2))(0L, 0x5CCD3F2AL), (VECTOR(int32_t, 2))(0L, 0x5CCD3F2AL), 0L, 0x5CCD3F2AL, 0L, 0x5CCD3F2AL);
                uint16_t l_523 = 65535UL;
                uint8_t l_524 = 248UL;
                VECTOR(uint16_t, 8) l_525 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
                VECTOR(uint16_t, 16) l_526 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x221FL), 0x221FL), 0x221FL, 65535UL, 0x221FL, (VECTOR(uint16_t, 2))(65535UL, 0x221FL), (VECTOR(uint16_t, 2))(65535UL, 0x221FL), 65535UL, 0x221FL, 65535UL, 0x221FL);
                VECTOR(uint16_t, 4) l_527 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x12F3L), 0x12F3L);
                VECTOR(uint16_t, 2) l_528 = (VECTOR(uint16_t, 2))(65535UL, 0x408AL);
                VECTOR(uint16_t, 8) l_529 = (VECTOR(uint16_t, 8))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x717CL), 0x717CL), 0x717CL, 6UL, 0x717CL);
                uint8_t l_530 = 0x8EL;
                int64_t l_531 = 9L;
                VECTOR(uint16_t, 8) l_532 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL);
                VECTOR(uint16_t, 8) l_533 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xD069L), 0xD069L), 0xD069L, 65535UL, 0xD069L);
                VECTOR(uint16_t, 2) l_534 = (VECTOR(uint16_t, 2))(0UL, 0xC685L);
                VECTOR(uint16_t, 8) l_535 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0x48DAL), 0x48DAL), 0x48DAL, 8UL, 0x48DAL);
                VECTOR(uint16_t, 16) l_536 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xAB18L), 0xAB18L), 0xAB18L, 0UL, 0xAB18L, (VECTOR(uint16_t, 2))(0UL, 0xAB18L), (VECTOR(uint16_t, 2))(0UL, 0xAB18L), 0UL, 0xAB18L, 0UL, 0xAB18L);
                VECTOR(uint16_t, 4) l_537 = (VECTOR(uint16_t, 4))(0x4AC5L, (VECTOR(uint16_t, 2))(0x4AC5L, 5UL), 5UL);
                VECTOR(uint16_t, 2) l_538 = (VECTOR(uint16_t, 2))(1UL, 0xDD66L);
                VECTOR(uint16_t, 4) l_539 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x6D23L), 0x6D23L);
                int32_t l_540 = 0x152CC96AL;
                int16_t l_541 = (-1L);
                int8_t l_542 = 0x3AL;
                uint64_t l_543 = 0x89AD2938EEE0933BL;
                int16_t l_544 = 0x0AA2L;
                uint8_t l_545 = 0xE3L;
                VECTOR(uint8_t, 4) l_546 = (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0xD0L), 0xD0L);
                int16_t l_547[1];
                uint16_t l_548 = 65529UL;
                uint8_t l_549 = 6UL;
                uint16_t l_550 = 65535UL;
                uint16_t l_551 = 1UL;
                uint8_t l_552 = 0x4DL;
                uint8_t l_553 = 0x1EL;
                uint16_t l_554 = 0x9060L;
                int64_t *l_556 = &l_531;
                int64_t **l_555 = &l_556;
                int64_t **l_557 = (void*)0;
                int i;
                for (i = 0; i < 7; i++)
                    l_518[i] = 4294967295UL;
                for (i = 0; i < 1; i++)
                    l_547[i] = (-1L);
                l_554 = (l_553 = (l_552 = ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x7D7FC0BBL, ((VECTOR(int32_t, 2))(l_513.s77)), 3L, 0x1DF72A45L, (((l_515 ^= l_514) , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x14L, 1L)).yyyyyxyyyxxyyyyy)).s5727)).w) , (l_549 = (l_548 = (l_547[0] = (l_546.y = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_516, ((VECTOR(uint32_t, 4))(l_517.s4675)), (GROUP_DIVERGE(2, 1) , FAKE_DIVERGE(p_935->global_1_offset, get_global_id(1), 10)), 4294967295UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 4))(l_518[0], ((VECTOR(int32_t, 2))(l_519.sfd)), 0x7A94CC8FL)).wyzxxzyxzxzywzxw, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x7238L, (-7L))).xyyyyxyyxxyxxxyy)).even, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_520.yyzyxzzxxzyxwxxy)))).lo))).lo)).zwyxwwxz)).s15, ((VECTOR(uint16_t, 16))(l_521.scc251ea648954e16)).s40))))).xyyxxyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_522.sfd)).xxyxxxyxyxxyyxyx)).lo))).odd, (int32_t)(l_524 = l_523)))).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((-4L), (l_519.s1 &= 0x3DC3FD44L), 2L, 0x256409D0L)).even)), 1L, 0x40CB2028L)).hi))).xyxxxxxyxyyxxxyy))).sb0ad)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 16))(l_525.s7274135245110026)), ((VECTOR(uint16_t, 16))(l_526.s97182ac67b0f1037))))).s69df, ((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 16))(l_527.wwyzwxyxzyyxwwzy))))).s44f3, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0x4441L, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(l_528.yxxyxyxx)).lo, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 2))(0L, (-1L)))))).xyxxxxyx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_529.s6156)).odd)).yxxyyxxx))).odd))), (l_531 ^= l_530), ((VECTOR(uint16_t, 2))(l_532.s23)), 0x52C8L, ((VECTOR(uint16_t, 2))(l_533.s40)), 0xB7FAL, ((VECTOR(uint16_t, 2))(1UL, 8UL)), 0x564FL, 0xB230L)).s1925))))).yxyyyzwyyyyzzzww, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(l_534.yxyyxxxyxyyyxyyy)), ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_535.s0301)).xywyyzxwxwwyzwzx)).even))).s3702243421643117))), ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 16))(l_536.s56c8a499e8b9c85b)).s55, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_537.xwzxzzxxyyzxwzyz)).s0, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 2))(0x2961L, 0x6453L)).xxyy, ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(l_538.yxyx)).xywzzyzyxxwzzxyx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_539.yywywywz)).s12)).odd, 65535UL, (l_542 = (l_541 ^= l_540)), 0x189DL, ((l_543 , l_544) , 1UL), ((VECTOR(uint16_t, 2))(0x80A4L)), 0xC1A3L)).s3674404740453100))).hi, ((VECTOR(uint16_t, 8))(0xF056L)), ((VECTOR(uint16_t, 8))(0xEAC4L))))).odd, ((VECTOR(uint16_t, 4))(0xC9ABL))))), ((VECTOR(uint16_t, 2))(1UL)), 0xC741L, 0xF6FFL)).s0353011701650432)).s29de, (uint16_t)0x9D74L, (uint16_t)7UL))).y, l_545, 65526UL, 0x4E09L)).xywyzzwxwwxxzzyz, ((VECTOR(uint16_t, 16))(0xF35CL))))))).sa4)).yyxxxxyy, ((VECTOR(uint16_t, 8))(0x2027L))))).lo, ((VECTOR(uint16_t, 4))(0xCE59L))))), 65535UL, 0UL, 9UL)).s37))), ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 2))(0xB91CL))))).yxyy, ((VECTOR(uint16_t, 4))(0x65E5L))))).zyzwyxxwwzzzyzzx))).s0ed0, ((VECTOR(uint16_t, 4))(0UL))))).wzwxwxzwzzwwxzyx)).se325)).hi)), ((VECTOR(uint32_t, 2))(1UL)), 0x15F52C56L)).scd)).odd , 0x03DBE2F8L)))))), (-1L), ((VECTOR(int32_t, 2))(7L)), ((VECTOR(int32_t, 2))((-4L))), l_550, (-5L), 0L, (-5L), 0x317E0DDDL)))).s13)).yyyy, (int32_t)l_551))).y));
                l_557 = l_555;
                for (l_525.s2 = 0; (l_525.s2 != 32); l_525.s2 = safe_add_func_int32_t_s_s(l_525.s2, 2))
                { /* block id: 268 */
                    struct S0 l_560 = {4294967292UL};
                    struct S0 l_561[8][3] = {{{4294967295UL},{4294967293UL},{0x6829B015L}},{{4294967295UL},{4294967293UL},{0x6829B015L}},{{4294967295UL},{4294967293UL},{0x6829B015L}},{{4294967295UL},{4294967293UL},{0x6829B015L}},{{4294967295UL},{4294967293UL},{0x6829B015L}},{{4294967295UL},{4294967293UL},{0x6829B015L}},{{4294967295UL},{4294967293UL},{0x6829B015L}},{{4294967295UL},{4294967293UL},{0x6829B015L}}};
                    uint32_t l_562 = 0xF3F59E91L;
                    int i, j;
                    l_561[5][2] = l_560;
                    l_513.s1 |= l_562;
                }
            }
        }
        else
        { /* block id: 273 */
            uint8_t l_563[2];
            VECTOR(int32_t, 4) l_566 = (VECTOR(int32_t, 4))(0x2445E5BEL, (VECTOR(int32_t, 2))(0x2445E5BEL, 0x2CFD5449L), 0x2CFD5449L);
            VECTOR(int32_t, 8) l_567 = (VECTOR(int32_t, 8))(0x62CEA698L, (VECTOR(int32_t, 4))(0x62CEA698L, (VECTOR(int32_t, 2))(0x62CEA698L, 1L), 1L), 1L, 0x62CEA698L, 1L);
            VECTOR(int32_t, 8) l_568 = (VECTOR(int32_t, 8))(0x6057B97BL, (VECTOR(int32_t, 4))(0x6057B97BL, (VECTOR(int32_t, 2))(0x6057B97BL, 0x5BD84CF5L), 0x5BD84CF5L), 0x5BD84CF5L, 0x6057B97BL, 0x5BD84CF5L);
            uint16_t l_569 = 0x0588L;
            int32_t l_570 = 0x3BCAC0BDL;
            int32_t *l_571 = (void*)0;
            int32_t *l_572[5][8][4] = {{{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0}},{{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0}},{{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0}},{{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0}},{{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0},{(void*)0,&l_570,&l_570,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_563[i] = 0x01L;
            --l_563[1];
            l_570 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_566.zzywwxxyxyxxzwww)).s8a, ((VECTOR(int32_t, 8))(l_567.s51733043)).s43, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(l_568.s73)).xxyx, ((VECTOR(int32_t, 4))(0x22AAA77DL, l_569, (-1L), 0L))))).odd))).yyyxxxxx)).s7;
            l_572[3][2][2] = l_571;
        }
        l_576 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x01CEDA51L, (-7L))).xyyyyyxyyyxxyyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_573.sbbb1)).hi)), 0x36E1EACDL, 0x70725E14L)))).yxyyxzwwwwzywxxw, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x3E614A68L, (l_574 , l_575[0][3]), ((VECTOR(int32_t, 4))((-3L), 0x1A10FDE8L, 0x46318B08L, (-4L))), 0L, 0x61DDE30AL)).s77)).yyyyxxxyxxxxxyyx))))).s3;
        l_581 = (l_577 , ((l_578 = ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(0x316F903DL, (-1L))), 0x17F7DD7EL)).y) , l_579));
        if ((l_582 , 0x3C1F0987L))
        { /* block id: 281 */
            uint32_t l_583 = 4294967295UL;
            VECTOR(int64_t, 4) l_584 = (VECTOR(int64_t, 4))(0x720E3678C76CB069L, (VECTOR(int64_t, 2))(0x720E3678C76CB069L, 0x5470C27994664089L), 0x5470C27994664089L);
            int32_t l_585[2];
            uint32_t l_586 = 0UL;
            int16_t l_587 = 0x3305L;
            VECTOR(uint16_t, 8) l_588 = (VECTOR(uint16_t, 8))(0xA9DEL, (VECTOR(uint16_t, 4))(0xA9DEL, (VECTOR(uint16_t, 2))(0xA9DEL, 0xD5CFL), 0xD5CFL), 0xD5CFL, 0xA9DEL, 0xD5CFL);
            int32_t l_589 = 0L;
            int32_t l_590 = 0x71F3D52FL;
            struct S0 l_591 = {7UL};
            struct S0 l_592 = {4294967295UL};
            uint32_t l_593 = 0xF2170132L;
            int i;
            for (i = 0; i < 2; i++)
                l_585[i] = 0x49181030L;
            l_584.x = l_583;
            l_592 = ((l_590 = (l_585[0] , ((l_586 , (l_588.s1 = (l_587 , (l_367[3] ^= 0x167D9D6CD6C00430L)))) , l_589))) , l_591);
            if (l_593)
            { /* block id: 287 */
                int32_t *l_594 = (void*)0;
                int8_t l_595 = 1L;
                uint16_t l_596 = 0x3EB1L;
                uint32_t l_599 = 0UL;
                int16_t l_600 = 0x0100L;
                int8_t l_601[7][9][4] = {{{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}},{{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}},{{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}},{{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}},{{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}},{{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}},{{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}}};
                uint32_t l_602 = 4294967294UL;
                VECTOR(uint16_t, 16) l_603 = (VECTOR(uint16_t, 16))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0xB837L), 0xB837L), 0xB837L, 4UL, 0xB837L, (VECTOR(uint16_t, 2))(4UL, 0xB837L), (VECTOR(uint16_t, 2))(4UL, 0xB837L), 4UL, 0xB837L, 4UL, 0xB837L);
                int16_t l_604 = (-6L);
                int32_t *l_605 = (void*)0;
                int i, j, k;
                (*l_581) = l_594;
                --l_596;
                (*l_581) = (((l_600 = l_599) , l_601[0][7][2]) , (l_605 = ((l_602 , (((VECTOR(uint16_t, 8))(l_603.sa181a413)).s1 , (l_574 |= l_604))) , (void*)0)));
            }
            else
            { /* block id: 294 */
                int16_t l_606 = 0x2C18L;
                int16_t l_607 = 0x31CFL;
                uint16_t l_608 = 0x5A4AL;
                --l_608;
            }
        }
        else
        { /* block id: 297 */
            int32_t *l_611 = (void*)0;
            int32_t l_613 = 0x62DE5FD8L;
            int32_t *l_612 = &l_613;
            int32_t *l_614 = &l_613;
            l_614 = (l_612 = ((*l_579) = l_611));
            for (l_613 = (-28); (l_613 >= (-22)); ++l_613)
            { /* block id: 303 */
                uint32_t l_617 = 0xFE955775L;
                int32_t l_621 = 0x7D6FF9A7L;
                int32_t *l_620 = &l_621;
                int32_t l_622[4][7] = {{0x2283C007L,(-1L),(-6L),0x387D98E6L,(-1L),0x387D98E6L,(-6L)},{0x2283C007L,(-1L),(-6L),0x387D98E6L,(-1L),0x387D98E6L,(-6L)},{0x2283C007L,(-1L),(-6L),0x387D98E6L,(-1L),0x387D98E6L,(-6L)},{0x2283C007L,(-1L),(-6L),0x387D98E6L,(-1L),0x387D98E6L,(-6L)}};
                int16_t l_669 = (-1L);
                int64_t l_670 = (-1L);
                int i, j;
                --l_617;
                (*l_581) = l_620;
                if (l_622[0][6])
                { /* block id: 306 */
                    VECTOR(int32_t, 16) l_623 = (VECTOR(int32_t, 16))(0x68C49FEDL, (VECTOR(int32_t, 4))(0x68C49FEDL, (VECTOR(int32_t, 2))(0x68C49FEDL, 0x6DEC3DAFL), 0x6DEC3DAFL), 0x6DEC3DAFL, 0x68C49FEDL, 0x6DEC3DAFL, (VECTOR(int32_t, 2))(0x68C49FEDL, 0x6DEC3DAFL), (VECTOR(int32_t, 2))(0x68C49FEDL, 0x6DEC3DAFL), 0x68C49FEDL, 0x6DEC3DAFL, 0x68C49FEDL, 0x6DEC3DAFL);
                    VECTOR(int32_t, 8) l_624 = (VECTOR(int32_t, 8))(0x2410E979L, (VECTOR(int32_t, 4))(0x2410E979L, (VECTOR(int32_t, 2))(0x2410E979L, 0x4AE1FCBEL), 0x4AE1FCBEL), 0x4AE1FCBEL, 0x2410E979L, 0x4AE1FCBEL);
                    int32_t l_625 = (-7L);
                    int16_t l_626 = 7L;
                    int64_t l_627[10];
                    uint64_t l_628 = 18446744073709551615UL;
                    int32_t *l_629[3][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    uint32_t l_630 = 0x1E7B634EL;
                    int32_t l_631 = 0x63AFFBA4L;
                    int32_t l_632 = 0x55048D58L;
                    uint64_t l_633 = 1UL;
                    int i, j;
                    for (i = 0; i < 10; i++)
                        l_627[i] = 1L;
                    (*l_620) ^= ((VECTOR(int32_t, 8))((-1L), 8L, 0x42404688L, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_623.s7148)).yzyxyzwy)))).s5062270247347775)).s5d8f, ((VECTOR(int32_t, 4))(l_624.s2423))))), 0x5501360FL)).s3;
                    l_629[2][9] = (GROUP_DIVERGE(0, 1) , ((*l_581) = ((l_626 = l_625) , ((l_628 ^= l_627[6]) , (void*)0))));
                    (*l_620) = ((l_630 , (l_632 ^= l_631)) , 0x2B73470CL);
                    if (l_633)
                    { /* block id: 314 */
                        (*l_620) &= 0x186C594DL;
                    }
                    else
                    { /* block id: 316 */
                        VECTOR(uint64_t, 8) l_634 = (VECTOR(uint64_t, 8))(0x6F68D7AB12340C9EL, (VECTOR(uint64_t, 4))(0x6F68D7AB12340C9EL, (VECTOR(uint64_t, 2))(0x6F68D7AB12340C9EL, 0x4C047F88A5DE6F3CL), 0x4C047F88A5DE6F3CL), 0x4C047F88A5DE6F3CL, 0x6F68D7AB12340C9EL, 0x4C047F88A5DE6F3CL);
                        uint64_t l_635[5][8][5] = {{{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL}},{{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL}},{{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL}},{{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL}},{{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL},{0xDAD2592C2BC2AAC4L,18446744073709551615UL,0xD87B01EA4A74803CL,0x22E5FF14E1C3ADC2L,0xD87B01EA4A74803CL}}};
                        uint32_t l_636 = 0x6BBC7027L;
                        uint16_t l_637[5][8][2] = {{{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL}},{{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL}},{{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL}},{{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL}},{{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL},{0x8D3FL,9UL}}};
                        VECTOR(uint64_t, 4) l_638 = (VECTOR(uint64_t, 4))(0x86907F499D654C9CL, (VECTOR(uint64_t, 2))(0x86907F499D654C9CL, 0x3519368C983FAD28L), 0x3519368C983FAD28L);
                        int32_t l_640 = 9L;
                        int32_t *l_639[6][6][5] = {{{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640}},{{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640}},{{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640}},{{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640}},{{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640}},{{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640},{&l_640,&l_640,(void*)0,&l_640,&l_640}}};
                        uint16_t l_641 = 65528UL;
                        int64_t l_642 = 0x442C930FD0672363L;
                        int i, j, k;
                        l_637[3][6][0] ^= ((l_635[1][7][0] |= ((VECTOR(uint64_t, 8))(l_634.s26162174)).s7) , l_636);
                        (*l_620) |= l_638.x;
                        (*l_581) = l_639[3][1][3];
                        l_642 ^= l_641;
                    }
                }
                else
                { /* block id: 323 */
                    int32_t l_644[1][9][8] = {{{0x2BFD5E07L,(-1L),(-4L),0L,(-1L),0x2BFD5E07L,0L,0x598F5407L},{0x2BFD5E07L,(-1L),(-4L),0L,(-1L),0x2BFD5E07L,0L,0x598F5407L},{0x2BFD5E07L,(-1L),(-4L),0L,(-1L),0x2BFD5E07L,0L,0x598F5407L},{0x2BFD5E07L,(-1L),(-4L),0L,(-1L),0x2BFD5E07L,0L,0x598F5407L},{0x2BFD5E07L,(-1L),(-4L),0L,(-1L),0x2BFD5E07L,0L,0x598F5407L},{0x2BFD5E07L,(-1L),(-4L),0L,(-1L),0x2BFD5E07L,0L,0x598F5407L},{0x2BFD5E07L,(-1L),(-4L),0L,(-1L),0x2BFD5E07L,0L,0x598F5407L},{0x2BFD5E07L,(-1L),(-4L),0L,(-1L),0x2BFD5E07L,0L,0x598F5407L},{0x2BFD5E07L,(-1L),(-4L),0L,(-1L),0x2BFD5E07L,0L,0x598F5407L}}};
                    int32_t *l_643 = &l_644[0][0][6];
                    VECTOR(uint32_t, 8) l_645 = (VECTOR(uint32_t, 8))(0xC12914FCL, (VECTOR(uint32_t, 4))(0xC12914FCL, (VECTOR(uint32_t, 2))(0xC12914FCL, 0UL), 0UL), 0UL, 0xC12914FCL, 0UL);
                    VECTOR(uint32_t, 4) l_646 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL);
                    VECTOR(uint32_t, 4) l_647 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xFC62B6C6L), 0xFC62B6C6L);
                    VECTOR(uint32_t, 4) l_648 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL);
                    VECTOR(int32_t, 16) l_649 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                    VECTOR(int32_t, 2) l_650 = (VECTOR(int32_t, 2))(0x039CBAF8L, (-1L));
                    VECTOR(int32_t, 8) l_651 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x057C0080L), 0x057C0080L), 0x057C0080L, (-7L), 0x057C0080L);
                    uint32_t l_652 = 7UL;
                    uint16_t l_653 = 0UL;
                    VECTOR(uint32_t, 16) l_654 = (VECTOR(uint32_t, 16))(0x391EBC0FL, (VECTOR(uint32_t, 4))(0x391EBC0FL, (VECTOR(uint32_t, 2))(0x391EBC0FL, 0x9C2667B6L), 0x9C2667B6L), 0x9C2667B6L, 0x391EBC0FL, 0x9C2667B6L, (VECTOR(uint32_t, 2))(0x391EBC0FL, 0x9C2667B6L), (VECTOR(uint32_t, 2))(0x391EBC0FL, 0x9C2667B6L), 0x391EBC0FL, 0x9C2667B6L, 0x391EBC0FL, 0x9C2667B6L);
                    VECTOR(uint32_t, 2) l_655 = (VECTOR(uint32_t, 2))(0x99931B37L, 0x7C97BEB7L);
                    VECTOR(int32_t, 4) l_656 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2BE50418L), 0x2BE50418L);
                    VECTOR(uint32_t, 2) l_657 = (VECTOR(uint32_t, 2))(0xFD5D02DEL, 0x6473E169L);
                    VECTOR(uint32_t, 8) l_658 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 4294967287UL), 4294967287UL), 4294967287UL, 4294967288UL, 4294967287UL);
                    VECTOR(uint32_t, 4) l_659 = (VECTOR(uint32_t, 4))(0xE5AA17BFL, (VECTOR(uint32_t, 2))(0xE5AA17BFL, 0x97EEC94DL), 0x97EEC94DL);
                    struct S0 l_660 = {0x72A664BDL};
                    uint16_t l_661 = 0xAECFL;
                    int32_t l_662 = 0L;
                    VECTOR(int32_t, 4) l_663 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2EA8C711L), 0x2EA8C711L);
                    int32_t l_668 = 1L;
                    int i, j, k;
                    (*l_579) = l_643;
                    l_663.x |= (l_656.w = ((((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_645.s3421)), ((VECTOR(uint32_t, 4))(0UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_646.xx)).xxxyxxyxyxyxxxyx)).even, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x8B03020EL, 4294967295UL)), 0x3BC50D31L, 0xD8A6B86CL)))).wzxyzyxwxwxxzzyz, ((VECTOR(uint32_t, 8))(l_647.wzxywxxx)).s1435231345122146))).s2c)).xxyxyxxx))).s06, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_648.xxyxwzyy)).s1715201226562671)).sa6, ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(l_649.se3a937ab)).lo, ((VECTOR(int32_t, 2))(l_650.xx)).yyyy))).odd, ((VECTOR(int32_t, 16))(l_651.s7616730465122315)).sfa))), ((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 16))(l_652, l_653, 4294967295UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 16))(l_654.s0bbda926a1ce4eb3)).s4837, ((VECTOR(uint32_t, 2))(l_655.xx)).xxxx))).even)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x4CF10E40L, 0x4FE8E0FBL, 0x4349C3CAL, 0xD460FB0DL)).xzyyxxyy)), 1UL, ((VECTOR(uint32_t, 2))(0x4B83F22EL, 0x207A0B8BL)), 0xD75AF5BBL)).hi))).hi))).even)))))).xxyx, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 8))(l_656.zzywwyxx)).s52))).yyxy, (uint32_t)(l_575[0][3] = 0x6E3489CCL)))), ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(l_657.xy)).yyyxyyyy, ((VECTOR(uint32_t, 16))(l_658.s6234053555063513)).odd))).odd))).lo)), 7UL)))), ((VECTOR(uint32_t, 8))(l_659.xwwywywx))))).s3 , (l_662 = (l_577 &= ((l_660 , ((VECTOR(int32_t, 2))(0x49244D27L, 4L)).even) , l_661)))) , ((*l_643) = 1L)));
                    for (l_651.s6 = 1; (l_651.s6 != 18); l_651.s6++)
                    { /* block id: 333 */
                        VECTOR(uint16_t, 4) l_666 = (VECTOR(uint16_t, 4))(0xAF33L, (VECTOR(uint16_t, 2))(0xAF33L, 0x2C20L), 0x2C20L);
                        int32_t l_667 = 0x5ECBEAB6L;
                        int i;
                        (*l_643) = l_666.z;
                        (*l_643) ^= l_667;
                    }
                    (*l_580) |= l_668;
                }
                (*l_620) &= (l_669 , l_670);
            }
            for (l_613 = 29; (l_613 < (-30)); l_613 = safe_sub_func_int16_t_s_s(l_613, 4))
            { /* block id: 343 */
                uint16_t l_673[7] = {0xFA1AL,0x3A23L,0xFA1AL,0xFA1AL,0x3A23L,0xFA1AL,0xFA1AL};
                int32_t l_674 = 0x2A3C4149L;
                int i;
                if ((l_674 &= ((l_582 &= 1UL) , l_673[1])))
                { /* block id: 346 */
                    int32_t l_675[5][8][6] = {{{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL}},{{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL}},{{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL}},{{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL}},{{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL},{4L,0L,0x66F71049L,0x09BFD5E1L,(-7L),0x0D78C75DL}}};
                    VECTOR(int32_t, 8) l_682 = (VECTOR(int32_t, 8))(0x366E1BDDL, (VECTOR(int32_t, 4))(0x366E1BDDL, (VECTOR(int32_t, 2))(0x366E1BDDL, 0x48A2ED0FL), 0x48A2ED0FL), 0x48A2ED0FL, 0x366E1BDDL, 0x48A2ED0FL);
                    VECTOR(int32_t, 4) l_683 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
                    VECTOR(int32_t, 16) l_684 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L), (VECTOR(int32_t, 2))((-5L), (-1L)), (VECTOR(int32_t, 2))((-5L), (-1L)), (-5L), (-1L), (-5L), (-1L));
                    uint64_t l_685 = 0xEEC6EE965AC9B14EL;
                    int i, j, k;
                    for (l_675[2][2][1] = 20; (l_675[2][2][1] == (-9)); l_675[2][2][1] = safe_sub_func_int16_t_s_s(l_675[2][2][1], 9))
                    { /* block id: 349 */
                        uint8_t l_678 = 0x4AL;
                        int64_t l_679 = 1L;
                        int32_t l_681 = (-5L);
                        int32_t *l_680 = &l_681;
                        l_679 = l_678;
                        (*l_581) = l_680;
                    }
                    l_682.s6 = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(l_682.s54)).yxxx, ((VECTOR(int32_t, 2))(0x31485894L, 0x7309B020L)).yxyy, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(l_683.zxxw)).wyywyyzz, ((VECTOR(int32_t, 8))(l_684.s178c2c3f))))).lo))).y;
                    l_573.s7 &= l_685;
                }
                else
                { /* block id: 355 */
                    uint32_t l_686 = 0x41BA2361L;
                    l_686 = 0L;
                }
                for (l_673[2] = 7; (l_673[2] != 37); l_673[2]++)
                { /* block id: 360 */
                    uint64_t l_689[3][6] = {{0x8AF255C83099AA0BL,0x4A75C0EF71196C24L,0xD74A6540C192C67CL,18446744073709551615UL,0x4A75C0EF71196C24L,18446744073709551615UL},{0x8AF255C83099AA0BL,0x4A75C0EF71196C24L,0xD74A6540C192C67CL,18446744073709551615UL,0x4A75C0EF71196C24L,18446744073709551615UL},{0x8AF255C83099AA0BL,0x4A75C0EF71196C24L,0xD74A6540C192C67CL,18446744073709551615UL,0x4A75C0EF71196C24L,18446744073709551615UL}};
                    uint32_t l_690 = 4294967295UL;
                    int i, j;
                    (*l_579) = ((l_689[1][3] , l_690) , (void*)0);
                    for (l_690 = 0; (l_690 < 44); l_690 = safe_add_func_uint16_t_u_u(l_690, 8))
                    { /* block id: 364 */
                        uint32_t l_693 = 0xB6AA17D0L;
                        struct S0 l_694 = {0x93535F84L};
                        struct S0 l_695[2] = {{4294967295UL},{4294967295UL}};
                        int i;
                        l_693 = (-1L);
                        l_695[0] = l_694;
                    }
                    for (l_689[1][3] = 0; (l_689[1][3] < 4); ++l_689[1][3])
                    { /* block id: 370 */
                        VECTOR(int32_t, 16) l_698 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x65DCE293L), 0x65DCE293L), 0x65DCE293L, (-1L), 0x65DCE293L, (VECTOR(int32_t, 2))((-1L), 0x65DCE293L), (VECTOR(int32_t, 2))((-1L), 0x65DCE293L), (-1L), 0x65DCE293L, (-1L), 0x65DCE293L);
                        VECTOR(int32_t, 4) l_699 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L);
                        uint8_t l_700 = 5UL;
                        int16_t l_701 = 8L;
                        uint32_t l_702 = 0x4C7371FDL;
                        int i;
                        l_701 |= (l_700 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(l_698.sccb31e1619267d00)), ((VECTOR(int32_t, 8))(l_699.ywwxxyzz)).s7107515113333153))).se634)).y);
                        l_702--;
                    }
                }
                for (l_674 = 0; (l_674 > 4); l_674 = safe_add_func_int64_t_s_s(l_674, 6))
                { /* block id: 378 */
                    int32_t *l_707 = (void*)0;
                    int32_t l_708 = 0x3FB31C10L;
                    (*l_581) = l_707;
                    for (l_708 = 18; (l_708 <= 27); l_708++)
                    { /* block id: 382 */
                        int16_t l_711 = 5L;
                        uint64_t l_712 = 18446744073709551608UL;
                        uint32_t l_713[1][4][7] = {{{0xAE941BDAL,0xAE941BDAL,3UL,0UL,0x41FECBEDL,4294967292UL,0x9CBBBF21L},{0xAE941BDAL,0xAE941BDAL,3UL,0UL,0x41FECBEDL,4294967292UL,0x9CBBBF21L},{0xAE941BDAL,0xAE941BDAL,3UL,0UL,0x41FECBEDL,4294967292UL,0x9CBBBF21L},{0xAE941BDAL,0xAE941BDAL,3UL,0UL,0x41FECBEDL,4294967292UL,0x9CBBBF21L}}};
                        int8_t l_714 = 0x10L;
                        int i, j, k;
                        l_712 |= l_711;
                        l_714 ^= l_713[0][0][0];
                    }
                }
            }
        }
        unsigned int result = 0;
        int l_367_i0;
        for (l_367_i0 = 0; l_367_i0 < 8; l_367_i0++) {
            result += l_367[l_367_i0];
        }
        result += l_368;
        result += l_573.sf;
        result += l_573.se;
        result += l_573.sd;
        result += l_573.sc;
        result += l_573.sb;
        result += l_573.sa;
        result += l_573.s9;
        result += l_573.s8;
        result += l_573.s7;
        result += l_573.s6;
        result += l_573.s5;
        result += l_573.s4;
        result += l_573.s3;
        result += l_573.s2;
        result += l_573.s1;
        result += l_573.s0;
        result += l_574;
        int l_575_i0, l_575_i1;
        for (l_575_i0 = 0; l_575_i0 < 6; l_575_i0++) {
            for (l_575_i1 = 0; l_575_i1 < 7; l_575_i1++) {
                result += l_575[l_575_i0][l_575_i1];
            }
        }
        result += l_576;
        result += l_577;
        result += l_578;
        result += l_582;
        atomic_add(&p_935->g_special_values[92 * get_linear_group_id() + 34], result);
    }
    else
    { /* block id: 389 */
        (1 + 1);
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_19(uint32_t  p_20, uint32_t  p_21, int32_t  p_22, struct S1 * p_935)
{ /* block id: 12 */
    uint64_t l_43 = 0x6954EB856A759F32L;
    return l_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_935->l_comm_values
 * writes:
 */
int64_t  func_28(uint8_t  p_29, int32_t  p_30, uint32_t  p_31, int32_t  p_32, struct S1 * p_935)
{ /* block id: 9 */
    uint64_t l_41 = 0UL;
    int8_t l_42[10] = {0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L};
    int i;
    l_41 |= p_935->l_comm_values[(safe_mod_func_uint32_t_u_u(p_935->tid, 43))];
    return l_42[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_935->g_191
 * writes:
 */
uint8_t  func_95(int8_t  p_96, int32_t * p_97, uint32_t  p_98, int64_t  p_99, struct S0  p_100, struct S1 * p_935)
{ /* block id: 93 */
    return p_935->g_191.s5;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_114(int32_t * p_115, int32_t * p_116, struct S0  p_117, uint32_t  p_118, int16_t  p_119, struct S1 * p_935)
{ /* block id: 90 */
    uint8_t l_234 = 0x2CL;
    ++l_234;
    return l_234;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_122(uint64_t  p_123, uint64_t  p_124, struct S1 * p_935)
{ /* block id: 88 */
    int32_t *l_232 = (void*)0;
    return l_232;
}


/* ------------------------------------------ */
/* 
 * reads : p_935->g_106 p_935->g_146 p_935->g_comm_values p_935->g_173 p_935->g_189 p_935->g_190 p_935->g_191 p_935->g_199 p_935->g_2 p_935->g_203 p_935->g_107 p_935->g_39 p_935->g_158 p_935->g_216 p_935->g_218 p_935->g_198 p_935->g_205 p_935->g_226
 * writes: p_935->g_137 p_935->g_comm_values p_935->g_158 p_935->g_146 p_935->g_198 p_935->g_203 p_935->g_205 p_935->g_207 p_935->g_208 p_935->g_226 p_935->g_230
 */
int32_t  func_129(int32_t ** p_130, int32_t ** p_131, int32_t  p_132, struct S1 * p_935)
{ /* block id: 57 */
    int32_t *l_151 = (void*)0;
    int32_t *l_152 = (void*)0;
    int32_t *l_155[6][2][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_156[4][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t *l_157 = (void*)0;
    uint64_t l_159 = 0xC767B023839C7493L;
    VECTOR(uint64_t, 2) l_176 = (VECTOR(uint64_t, 2))(0x9BDC76872175B47AL, 18446744073709551615UL);
    VECTOR(uint32_t, 2) l_177 = (VECTOR(uint32_t, 2))(0UL, 3UL);
    VECTOR(int16_t, 2) l_186 = (VECTOR(int16_t, 2))((-1L), 1L);
    VECTOR(int16_t, 4) l_187 = (VECTOR(int16_t, 4))(0x7A6CL, (VECTOR(int16_t, 2))(0x7A6CL, 0x2081L), 0x2081L);
    VECTOR(int16_t, 8) l_188 = (VECTOR(int16_t, 8))(0x7705L, (VECTOR(int16_t, 4))(0x7705L, (VECTOR(int16_t, 2))(0x7705L, (-7L)), (-7L)), (-7L), 0x7705L, (-7L));
    VECTOR(uint64_t, 2) l_196 = (VECTOR(uint64_t, 2))(4UL, 1UL);
    int32_t l_231 = 0L;
    int i, j, k;
    l_159 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((p_935->g_158[4] = ((p_935->g_comm_values[p_935->tid] = (0xD3EBDD5AL <= ((safe_mul_func_uint16_t_u_u((((*p_131) = l_151) == (l_152 = l_151)), p_132)) , (safe_sub_func_int8_t_s_s(p_132, (p_132 | (p_132 <= (0xE853L || ((((l_155[0][0][2] == l_156[1][0]) , 0x6DD9E1A7L) & p_935->g_106.sc) , p_132))))))))) && p_132)), 0x13BC2572L, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x751AD0A0L)), 6L, 0x0BB31F0EL)).s2311046153031061)).s5;
    if ((atomic_inc(&p_935->g_atomic_input[92 * get_linear_group_id() + 7]) == 2))
    { /* block id: 64 */
        VECTOR(int8_t, 8) l_160 = (VECTOR(int8_t, 8))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L));
        int32_t l_161 = 0x5F2A7C57L;
        int8_t l_162 = 0x30L;
        uint32_t l_163 = 0xFC378843L;
        VECTOR(uint64_t, 2) l_166 = (VECTOR(uint64_t, 2))(9UL, 0xEA31E4377C8831FDL);
        int i;
        l_161 ^= l_160.s3;
        l_162 &= 0L;
        l_163++;
        l_166.y = 0x04E8CAA0L;
        unsigned int result = 0;
        result += l_160.s7;
        result += l_160.s6;
        result += l_160.s5;
        result += l_160.s4;
        result += l_160.s3;
        result += l_160.s2;
        result += l_160.s1;
        result += l_160.s0;
        result += l_161;
        result += l_162;
        result += l_163;
        result += l_166.y;
        result += l_166.x;
        atomic_add(&p_935->g_special_values[92 * get_linear_group_id() + 7], result);
    }
    else
    { /* block id: 69 */
        (1 + 1);
    }
    for (p_935->g_146 = 0; (p_935->g_146 < 5); p_935->g_146 = safe_add_func_uint32_t_u_u(p_935->g_146, 1))
    { /* block id: 74 */
        VECTOR(int16_t, 8) l_174 = (VECTOR(int16_t, 8))(0x1788L, (VECTOR(int16_t, 4))(0x1788L, (VECTOR(int16_t, 2))(0x1788L, 2L), 2L), 2L, 0x1788L, 2L);
        VECTOR(int8_t, 8) l_175 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x7AL), 0x7AL), 0x7AL, 1L, 0x7AL);
        VECTOR(int16_t, 16) l_192 = (VECTOR(int16_t, 16))(0x47ABL, (VECTOR(int16_t, 4))(0x47ABL, (VECTOR(int16_t, 2))(0x47ABL, 1L), 1L), 1L, 0x47ABL, 1L, (VECTOR(int16_t, 2))(0x47ABL, 1L), (VECTOR(int16_t, 2))(0x47ABL, 1L), 0x47ABL, 1L, 0x47ABL, 1L);
        int32_t *l_195 = (void*)0;
        int32_t *l_197 = &p_935->g_198[2];
        uint8_t *l_201 = (void*)0;
        uint8_t *l_202 = &p_935->g_203;
        uint32_t *l_204[3][1][1];
        int64_t l_206 = (-2L);
        VECTOR(uint32_t, 8) l_213 = (VECTOR(uint32_t, 8))(0x4E5ABEBFL, (VECTOR(uint32_t, 4))(0x4E5ABEBFL, (VECTOR(uint32_t, 2))(0x4E5ABEBFL, 1UL), 1UL), 1UL, 0x4E5ABEBFL, 1UL);
        int32_t **l_217 = &l_197;
        uint16_t *l_225 = &p_935->g_226[1][5];
        int8_t *l_227 = (void*)0;
        int8_t *l_228 = &p_935->g_208;
        int32_t l_229 = 0x17C22961L;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_204[i][j][k] = &p_935->g_205[5];
            }
        }
        if (p_935->g_146)
            break;
        p_935->g_208 = (p_935->g_comm_values[p_935->tid] == (p_935->g_207 = ((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_935->group_0_offset, get_group_id(0), 10), ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(3L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(p_935->g_173.wz)).xyxyxxyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_174.s54)).yxyyyxxy))))), (((p_935->g_205[5] = ((VECTOR(uint32_t, 4))((((((((VECTOR(int8_t, 8))((-5L), 0x2CL, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_175.s17)), (((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 8))(0UL, ((VECTOR(uint64_t, 2))(l_176.yx)), (p_935->g_146 >= (((VECTOR(uint32_t, 16))(l_177.yyxyyxyyyyxxyxyy)).s4 , l_174.s0)), 0x3BC7C59C4CCA3F03L, (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((*l_202) |= ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_186.xy)).yxyyxxxy)).s3007267416033047, ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(0x74A9L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-5L), 0x165DL)).xxxy)), (-1L), ((VECTOR(int16_t, 2))(l_187.xx)), ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(l_188.s7511052444102437)), ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(p_935->g_189.xx)).yyyyxyyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 1L)), 8L, 0x57BEL)).yyxzzyyyxzwxzxwz)).hi, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(0x0565L, 0x5407L)).yxyy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_935->g_190.s35)))).xxxy))).wxyxyzwz))).s0727144621262662))).sf2, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-5L), (-10L))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_935->g_191.s9378)), (0xFBDC80103624ADBFL | l_175.s4), ((VECTOR(int16_t, 2))(l_192.sf0)), 0L)).s51)), 0x0E03L, 0L)).hi)), p_935->g_189.x, ((VECTOR(int16_t, 8))((safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (((((l_195 == (((*l_197) = (((VECTOR(uint64_t, 16))(l_196.yxyyyxxyxxxyyyxx)).s5 == p_132)) , (void*)0)) ^ p_132) , p_935->g_199) == (void*)0) , 0UL))), (-1L), 0x4D8EL, p_132, ((VECTOR(int16_t, 2))((-4L))), 0x7F5FL, 0x3501L)), 0L, 0x0159L, 0x1452L)).s91))), ((VECTOR(int16_t, 4))((-10L))), 0x5968L, 1L)), ((VECTOR(int16_t, 16))(7L))))), ((VECTOR(int16_t, 16))(0x7ADDL))))).s0, p_935->g_2.z)) ^ p_132)), 7)) || p_935->g_146), 0L)), 0x132B8B98L)), 18446744073709551613UL, 0x4A3FD36FC4771298L)).s1513575466164044, ((VECTOR(uint64_t, 16))(0xA91A525DDED77BE7L)), ((VECTOR(uint64_t, 16))(0x7DDB8EC8C7DFA00BL))))).s7 <= p_132), ((VECTOR(int8_t, 2))((-9L))), (-1L), p_935->g_107.s7, 0x3FL, ((VECTOR(int8_t, 2))(0x00L)), 7L, p_935->g_39.s6, p_935->g_189.y, 0x59L, (-8L), (-1L))), ((VECTOR(int8_t, 16))(5L))))).odd)).s0, p_935->g_39.s5, 0x48L, 1L, 0x5BL, (-1L))).s2 ^ p_132) & 0x2EL) , p_935->g_189.x) == p_132) || (-8L)), 3UL, 0x8342FEDEL, 0UL)).x) == 0x1A15CE65L) > p_935->g_191.sa), ((VECTOR(int16_t, 2))(9L)), 0x7813L, 5L, ((VECTOR(int16_t, 2))(0L)), 4L)).hi, ((VECTOR(int16_t, 8))(0x6E2DL))))).even, ((VECTOR(int16_t, 4))(0x0A90L))))).odd)), 0x4143L)).wxxzywwxyxzwxxzz, ((VECTOR(int16_t, 16))(0x38CAL))))), (int16_t)p_132))).s92, ((VECTOR(int16_t, 2))((-10L)))))), 0x4543L, 0L, 0x6519L, 0L, p_935->g_191.sc, ((VECTOR(int16_t, 2))(0L)), 7L, 0x06D2L, p_132, ((VECTOR(int16_t, 2))(0L)), (-1L), 1L)).s6 && 0x2D0FL) && GROUP_DIVERGE(1, 1)))), GROUP_DIVERGE(1, 1))) <= l_206)));
        p_935->g_230 = ((l_229 = ((p_132 >= (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_213.s6614)).wzywzwwywxzyxxyz)).s0, (((safe_lshift_func_uint8_t_u_s(p_132, p_935->g_158[3])) < (p_132 <= ((VECTOR(uint16_t, 2))(0UL, 65533UL)).hi)) , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x96E32C83L, 0xDFF55E27L)).xxxx)).w))), (0x6236L == (((*l_217) = p_935->g_216) == &p_935->g_198[3]))))) | (((((VECTOR(uint32_t, 16))(p_935->g_218.sd510183994f5809b)).s3 == ((((((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(((*l_228) = ((safe_mul_func_int8_t_s_s((p_935->g_198[2] >= ((((*l_225) = (safe_rshift_func_uint8_t_u_u(((l_217 != (void*)0) , 1UL), p_132))) || p_935->g_205[5]) == p_935->g_190.s5)), 0L)) ^ p_132)), ((VECTOR(int8_t, 2))(0L)), 7L)), ((VECTOR(int8_t, 4))(2L))))).y, p_935->g_190.s4)) != 0x17L) && 1L) ^ p_935->g_205[0]) != 0xF9E5FAA0L) & 0x418DBF7E247BFBD1L)) , 0x66131344L) >= p_935->g_146))) , p_935->g_226[1][5]);
    }
    return l_231;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_134(int32_t * p_135, uint32_t  p_136, struct S1 * p_935)
{ /* block id: 54 */
    int8_t l_147[4] = {0x25L,0x25L,0x25L,0x25L};
    int32_t **l_148 = &p_935->g_137;
    int i;
    l_147[2] &= (-2L);
    return l_148;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[43];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 43; i++)
            l_comm_values[i] = 1;
    struct S1 c_936;
    struct S1* p_935 = &c_936;
    struct S1 c_937 = {
        (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 1L), 1L), // p_935->g_2
        (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 1L), 1L), 1L, (-5L), 1L), // p_935->g_39
        0x66D59493L, // p_935->g_80
        (VECTOR(int32_t, 16))(0x45D31225L, (VECTOR(int32_t, 4))(0x45D31225L, (VECTOR(int32_t, 2))(0x45D31225L, 0x5C99C235L), 0x5C99C235L), 0x5C99C235L, 0x45D31225L, 0x5C99C235L, (VECTOR(int32_t, 2))(0x45D31225L, 0x5C99C235L), (VECTOR(int32_t, 2))(0x45D31225L, 0x5C99C235L), 0x45D31225L, 0x5C99C235L, 0x45D31225L, 0x5C99C235L), // p_935->g_94
        (VECTOR(uint8_t, 16))(0x08L, (VECTOR(uint8_t, 4))(0x08L, (VECTOR(uint8_t, 2))(0x08L, 1UL), 1UL), 1UL, 0x08L, 1UL, (VECTOR(uint8_t, 2))(0x08L, 1UL), (VECTOR(uint8_t, 2))(0x08L, 1UL), 0x08L, 1UL, 0x08L, 1UL), // p_935->g_106
        (VECTOR(int16_t, 16))(0x49A8L, (VECTOR(int16_t, 4))(0x49A8L, (VECTOR(int16_t, 2))(0x49A8L, (-1L)), (-1L)), (-1L), 0x49A8L, (-1L), (VECTOR(int16_t, 2))(0x49A8L, (-1L)), (VECTOR(int16_t, 2))(0x49A8L, (-1L)), 0x49A8L, (-1L), 0x49A8L, (-1L)), // p_935->g_107
        (void*)0, // p_935->g_137
        0x05FA5AF9L, // p_935->g_146
        {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}, // p_935->g_158
        (VECTOR(int16_t, 4))(0x3CC1L, (VECTOR(int16_t, 2))(0x3CC1L, 0x1ACFL), 0x1ACFL), // p_935->g_173
        (VECTOR(int16_t, 2))((-2L), 0x6FF8L), // p_935->g_189
        (VECTOR(int16_t, 8))(0x6BE3L, (VECTOR(int16_t, 4))(0x6BE3L, (VECTOR(int16_t, 2))(0x6BE3L, (-6L)), (-6L)), (-6L), 0x6BE3L, (-6L)), // p_935->g_190
        (VECTOR(int16_t, 16))(0x5995L, (VECTOR(int16_t, 4))(0x5995L, (VECTOR(int16_t, 2))(0x5995L, (-1L)), (-1L)), (-1L), 0x5995L, (-1L), (VECTOR(int16_t, 2))(0x5995L, (-1L)), (VECTOR(int16_t, 2))(0x5995L, (-1L)), 0x5995L, (-1L), 0x5995L, (-1L)), // p_935->g_191
        {5L,5L,5L,5L}, // p_935->g_198
        0x67568F5A85F17F0FL, // p_935->g_200
        &p_935->g_200, // p_935->g_199
        0x12L, // p_935->g_203
        {0xBCBE0442L,0xBCBE0442L,0xBCBE0442L,0xBCBE0442L,0xBCBE0442L,0xBCBE0442L,0xBCBE0442L,0xBCBE0442L,0xBCBE0442L}, // p_935->g_205
        8UL, // p_935->g_207
        0x5FL, // p_935->g_208
        &p_935->g_198[1], // p_935->g_216
        (VECTOR(uint32_t, 16))(0x2A8841FFL, (VECTOR(uint32_t, 4))(0x2A8841FFL, (VECTOR(uint32_t, 2))(0x2A8841FFL, 3UL), 3UL), 3UL, 0x2A8841FFL, 3UL, (VECTOR(uint32_t, 2))(0x2A8841FFL, 3UL), (VECTOR(uint32_t, 2))(0x2A8841FFL, 3UL), 0x2A8841FFL, 3UL, 0x2A8841FFL, 3UL), // p_935->g_218
        {{65528UL,65528UL,0xFD77L,0UL,0UL,0UL},{65528UL,65528UL,0xFD77L,0UL,0UL,0UL},{65528UL,65528UL,0xFD77L,0UL,0UL,0UL},{65528UL,65528UL,0xFD77L,0UL,0UL,0UL},{65528UL,65528UL,0xFD77L,0UL,0UL,0UL},{65528UL,65528UL,0xFD77L,0UL,0UL,0UL},{65528UL,65528UL,0xFD77L,0UL,0UL,0UL}}, // p_935->g_226
        0x44AFDD00L, // p_935->g_230
        {0x4BA6F3B4L}, // p_935->g_233
        (void*)0, // p_935->g_246
        {{0x0C64L,0x0C64L,0x0C64L,0x0C64L,0x0C64L},{0x0C64L,0x0C64L,0x0C64L,0x0C64L,0x0C64L},{0x0C64L,0x0C64L,0x0C64L,0x0C64L,0x0C64L},{0x0C64L,0x0C64L,0x0C64L,0x0C64L,0x0C64L}}, // p_935->g_315
        (void*)0, // p_935->g_330
        &p_935->g_137, // p_935->g_331
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_935->g_334
        (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL), // p_935->g_352
        0L, // p_935->g_363
        {{(void*)0,&p_935->g_208,(void*)0,(void*)0,&p_935->g_208},{(void*)0,&p_935->g_208,(void*)0,(void*)0,&p_935->g_208},{(void*)0,&p_935->g_208,(void*)0,(void*)0,&p_935->g_208},{(void*)0,&p_935->g_208,(void*)0,(void*)0,&p_935->g_208},{(void*)0,&p_935->g_208,(void*)0,(void*)0,&p_935->g_208},{(void*)0,&p_935->g_208,(void*)0,(void*)0,&p_935->g_208},{(void*)0,&p_935->g_208,(void*)0,(void*)0,&p_935->g_208}}, // p_935->g_366
        &p_935->g_366[5][4], // p_935->g_365
        (void*)0, // p_935->g_716
        {&p_935->g_137}, // p_935->g_738
        &p_935->g_233, // p_935->g_740
        &p_935->g_137, // p_935->g_747
        {{0x580FDC4FL,1UL,0x580FDC4FL,0x580FDC4FL},{0x580FDC4FL,1UL,0x580FDC4FL,0x580FDC4FL},{0x580FDC4FL,1UL,0x580FDC4FL,0x580FDC4FL},{0x580FDC4FL,1UL,0x580FDC4FL,0x580FDC4FL},{0x580FDC4FL,1UL,0x580FDC4FL,0x580FDC4FL}}, // p_935->g_761
        &p_935->g_137, // p_935->g_764
        (VECTOR(int8_t, 2))((-1L), (-1L)), // p_935->g_792
        (VECTOR(uint8_t, 8))(0x33L, (VECTOR(uint8_t, 4))(0x33L, (VECTOR(uint8_t, 2))(0x33L, 0xBAL), 0xBAL), 0xBAL, 0x33L, 0xBAL), // p_935->g_807
        (VECTOR(uint8_t, 2))(255UL, 0x77L), // p_935->g_812
        (VECTOR(int64_t, 4))(0x3B4F07357D53F3F4L, (VECTOR(int64_t, 2))(0x3B4F07357D53F3F4L, 0x0291E2566DAB4894L), 0x0291E2566DAB4894L), // p_935->g_816
        0x50B7A1CDL, // p_935->g_838
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4920AC46L), 0x4920AC46L), 0x4920AC46L, 0L, 0x4920AC46L), // p_935->g_866
        (VECTOR(int32_t, 2))((-3L), 0x56C1162DL), // p_935->g_867
        (VECTOR(int32_t, 4))(0x1B0D8C64L, (VECTOR(int32_t, 2))(0x1B0D8C64L, 0x2337F294L), 0x2337F294L), // p_935->g_868
        (VECTOR(int32_t, 4))(0x2C0D1B27L, (VECTOR(int32_t, 2))(0x2C0D1B27L, 0x52A4368BL), 0x52A4368BL), // p_935->g_869
        &p_935->g_137, // p_935->g_877
        (VECTOR(uint16_t, 2))(65534UL, 0x11E5L), // p_935->g_879
        (VECTOR(uint32_t, 8))(0x5D06DC1EL, (VECTOR(uint32_t, 4))(0x5D06DC1EL, (VECTOR(uint32_t, 2))(0x5D06DC1EL, 0xD18E9BE1L), 0xD18E9BE1L), 0xD18E9BE1L, 0x5D06DC1EL, 0xD18E9BE1L), // p_935->g_890
        &p_935->g_233, // p_935->g_898
        (VECTOR(uint8_t, 4))(0x90L, (VECTOR(uint8_t, 2))(0x90L, 250UL), 250UL), // p_935->g_909
        (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0x15L), 0x15L), 0x15L, 6UL, 0x15L, (VECTOR(uint8_t, 2))(6UL, 0x15L), (VECTOR(uint8_t, 2))(6UL, 0x15L), 6UL, 0x15L, 6UL, 0x15L), // p_935->g_911
        0, // p_935->v_collective
        sequence_input[get_global_id(0)], // p_935->global_0_offset
        sequence_input[get_global_id(1)], // p_935->global_1_offset
        sequence_input[get_global_id(2)], // p_935->global_2_offset
        sequence_input[get_local_id(0)], // p_935->local_0_offset
        sequence_input[get_local_id(1)], // p_935->local_1_offset
        sequence_input[get_local_id(2)], // p_935->local_2_offset
        sequence_input[get_group_id(0)], // p_935->group_0_offset
        sequence_input[get_group_id(1)], // p_935->group_1_offset
        sequence_input[get_group_id(2)], // p_935->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 43)), permutations[0][get_linear_local_id()])), // p_935->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_936 = c_937;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_935);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_935->g_2.x, "p_935->g_2.x", print_hash_value);
    transparent_crc(p_935->g_2.y, "p_935->g_2.y", print_hash_value);
    transparent_crc(p_935->g_2.z, "p_935->g_2.z", print_hash_value);
    transparent_crc(p_935->g_2.w, "p_935->g_2.w", print_hash_value);
    transparent_crc(p_935->g_39.s0, "p_935->g_39.s0", print_hash_value);
    transparent_crc(p_935->g_39.s1, "p_935->g_39.s1", print_hash_value);
    transparent_crc(p_935->g_39.s2, "p_935->g_39.s2", print_hash_value);
    transparent_crc(p_935->g_39.s3, "p_935->g_39.s3", print_hash_value);
    transparent_crc(p_935->g_39.s4, "p_935->g_39.s4", print_hash_value);
    transparent_crc(p_935->g_39.s5, "p_935->g_39.s5", print_hash_value);
    transparent_crc(p_935->g_39.s6, "p_935->g_39.s6", print_hash_value);
    transparent_crc(p_935->g_39.s7, "p_935->g_39.s7", print_hash_value);
    transparent_crc(p_935->g_80, "p_935->g_80", print_hash_value);
    transparent_crc(p_935->g_94.s0, "p_935->g_94.s0", print_hash_value);
    transparent_crc(p_935->g_94.s1, "p_935->g_94.s1", print_hash_value);
    transparent_crc(p_935->g_94.s2, "p_935->g_94.s2", print_hash_value);
    transparent_crc(p_935->g_94.s3, "p_935->g_94.s3", print_hash_value);
    transparent_crc(p_935->g_94.s4, "p_935->g_94.s4", print_hash_value);
    transparent_crc(p_935->g_94.s5, "p_935->g_94.s5", print_hash_value);
    transparent_crc(p_935->g_94.s6, "p_935->g_94.s6", print_hash_value);
    transparent_crc(p_935->g_94.s7, "p_935->g_94.s7", print_hash_value);
    transparent_crc(p_935->g_94.s8, "p_935->g_94.s8", print_hash_value);
    transparent_crc(p_935->g_94.s9, "p_935->g_94.s9", print_hash_value);
    transparent_crc(p_935->g_94.sa, "p_935->g_94.sa", print_hash_value);
    transparent_crc(p_935->g_94.sb, "p_935->g_94.sb", print_hash_value);
    transparent_crc(p_935->g_94.sc, "p_935->g_94.sc", print_hash_value);
    transparent_crc(p_935->g_94.sd, "p_935->g_94.sd", print_hash_value);
    transparent_crc(p_935->g_94.se, "p_935->g_94.se", print_hash_value);
    transparent_crc(p_935->g_94.sf, "p_935->g_94.sf", print_hash_value);
    transparent_crc(p_935->g_106.s0, "p_935->g_106.s0", print_hash_value);
    transparent_crc(p_935->g_106.s1, "p_935->g_106.s1", print_hash_value);
    transparent_crc(p_935->g_106.s2, "p_935->g_106.s2", print_hash_value);
    transparent_crc(p_935->g_106.s3, "p_935->g_106.s3", print_hash_value);
    transparent_crc(p_935->g_106.s4, "p_935->g_106.s4", print_hash_value);
    transparent_crc(p_935->g_106.s5, "p_935->g_106.s5", print_hash_value);
    transparent_crc(p_935->g_106.s6, "p_935->g_106.s6", print_hash_value);
    transparent_crc(p_935->g_106.s7, "p_935->g_106.s7", print_hash_value);
    transparent_crc(p_935->g_106.s8, "p_935->g_106.s8", print_hash_value);
    transparent_crc(p_935->g_106.s9, "p_935->g_106.s9", print_hash_value);
    transparent_crc(p_935->g_106.sa, "p_935->g_106.sa", print_hash_value);
    transparent_crc(p_935->g_106.sb, "p_935->g_106.sb", print_hash_value);
    transparent_crc(p_935->g_106.sc, "p_935->g_106.sc", print_hash_value);
    transparent_crc(p_935->g_106.sd, "p_935->g_106.sd", print_hash_value);
    transparent_crc(p_935->g_106.se, "p_935->g_106.se", print_hash_value);
    transparent_crc(p_935->g_106.sf, "p_935->g_106.sf", print_hash_value);
    transparent_crc(p_935->g_107.s0, "p_935->g_107.s0", print_hash_value);
    transparent_crc(p_935->g_107.s1, "p_935->g_107.s1", print_hash_value);
    transparent_crc(p_935->g_107.s2, "p_935->g_107.s2", print_hash_value);
    transparent_crc(p_935->g_107.s3, "p_935->g_107.s3", print_hash_value);
    transparent_crc(p_935->g_107.s4, "p_935->g_107.s4", print_hash_value);
    transparent_crc(p_935->g_107.s5, "p_935->g_107.s5", print_hash_value);
    transparent_crc(p_935->g_107.s6, "p_935->g_107.s6", print_hash_value);
    transparent_crc(p_935->g_107.s7, "p_935->g_107.s7", print_hash_value);
    transparent_crc(p_935->g_107.s8, "p_935->g_107.s8", print_hash_value);
    transparent_crc(p_935->g_107.s9, "p_935->g_107.s9", print_hash_value);
    transparent_crc(p_935->g_107.sa, "p_935->g_107.sa", print_hash_value);
    transparent_crc(p_935->g_107.sb, "p_935->g_107.sb", print_hash_value);
    transparent_crc(p_935->g_107.sc, "p_935->g_107.sc", print_hash_value);
    transparent_crc(p_935->g_107.sd, "p_935->g_107.sd", print_hash_value);
    transparent_crc(p_935->g_107.se, "p_935->g_107.se", print_hash_value);
    transparent_crc(p_935->g_107.sf, "p_935->g_107.sf", print_hash_value);
    transparent_crc(p_935->g_146, "p_935->g_146", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_935->g_158[i], "p_935->g_158[i]", print_hash_value);

    }
    transparent_crc(p_935->g_173.x, "p_935->g_173.x", print_hash_value);
    transparent_crc(p_935->g_173.y, "p_935->g_173.y", print_hash_value);
    transparent_crc(p_935->g_173.z, "p_935->g_173.z", print_hash_value);
    transparent_crc(p_935->g_173.w, "p_935->g_173.w", print_hash_value);
    transparent_crc(p_935->g_189.x, "p_935->g_189.x", print_hash_value);
    transparent_crc(p_935->g_189.y, "p_935->g_189.y", print_hash_value);
    transparent_crc(p_935->g_190.s0, "p_935->g_190.s0", print_hash_value);
    transparent_crc(p_935->g_190.s1, "p_935->g_190.s1", print_hash_value);
    transparent_crc(p_935->g_190.s2, "p_935->g_190.s2", print_hash_value);
    transparent_crc(p_935->g_190.s3, "p_935->g_190.s3", print_hash_value);
    transparent_crc(p_935->g_190.s4, "p_935->g_190.s4", print_hash_value);
    transparent_crc(p_935->g_190.s5, "p_935->g_190.s5", print_hash_value);
    transparent_crc(p_935->g_190.s6, "p_935->g_190.s6", print_hash_value);
    transparent_crc(p_935->g_190.s7, "p_935->g_190.s7", print_hash_value);
    transparent_crc(p_935->g_191.s0, "p_935->g_191.s0", print_hash_value);
    transparent_crc(p_935->g_191.s1, "p_935->g_191.s1", print_hash_value);
    transparent_crc(p_935->g_191.s2, "p_935->g_191.s2", print_hash_value);
    transparent_crc(p_935->g_191.s3, "p_935->g_191.s3", print_hash_value);
    transparent_crc(p_935->g_191.s4, "p_935->g_191.s4", print_hash_value);
    transparent_crc(p_935->g_191.s5, "p_935->g_191.s5", print_hash_value);
    transparent_crc(p_935->g_191.s6, "p_935->g_191.s6", print_hash_value);
    transparent_crc(p_935->g_191.s7, "p_935->g_191.s7", print_hash_value);
    transparent_crc(p_935->g_191.s8, "p_935->g_191.s8", print_hash_value);
    transparent_crc(p_935->g_191.s9, "p_935->g_191.s9", print_hash_value);
    transparent_crc(p_935->g_191.sa, "p_935->g_191.sa", print_hash_value);
    transparent_crc(p_935->g_191.sb, "p_935->g_191.sb", print_hash_value);
    transparent_crc(p_935->g_191.sc, "p_935->g_191.sc", print_hash_value);
    transparent_crc(p_935->g_191.sd, "p_935->g_191.sd", print_hash_value);
    transparent_crc(p_935->g_191.se, "p_935->g_191.se", print_hash_value);
    transparent_crc(p_935->g_191.sf, "p_935->g_191.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_935->g_198[i], "p_935->g_198[i]", print_hash_value);

    }
    transparent_crc(p_935->g_200, "p_935->g_200", print_hash_value);
    transparent_crc(p_935->g_203, "p_935->g_203", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_935->g_205[i], "p_935->g_205[i]", print_hash_value);

    }
    transparent_crc(p_935->g_207, "p_935->g_207", print_hash_value);
    transparent_crc(p_935->g_208, "p_935->g_208", print_hash_value);
    transparent_crc(p_935->g_218.s0, "p_935->g_218.s0", print_hash_value);
    transparent_crc(p_935->g_218.s1, "p_935->g_218.s1", print_hash_value);
    transparent_crc(p_935->g_218.s2, "p_935->g_218.s2", print_hash_value);
    transparent_crc(p_935->g_218.s3, "p_935->g_218.s3", print_hash_value);
    transparent_crc(p_935->g_218.s4, "p_935->g_218.s4", print_hash_value);
    transparent_crc(p_935->g_218.s5, "p_935->g_218.s5", print_hash_value);
    transparent_crc(p_935->g_218.s6, "p_935->g_218.s6", print_hash_value);
    transparent_crc(p_935->g_218.s7, "p_935->g_218.s7", print_hash_value);
    transparent_crc(p_935->g_218.s8, "p_935->g_218.s8", print_hash_value);
    transparent_crc(p_935->g_218.s9, "p_935->g_218.s9", print_hash_value);
    transparent_crc(p_935->g_218.sa, "p_935->g_218.sa", print_hash_value);
    transparent_crc(p_935->g_218.sb, "p_935->g_218.sb", print_hash_value);
    transparent_crc(p_935->g_218.sc, "p_935->g_218.sc", print_hash_value);
    transparent_crc(p_935->g_218.sd, "p_935->g_218.sd", print_hash_value);
    transparent_crc(p_935->g_218.se, "p_935->g_218.se", print_hash_value);
    transparent_crc(p_935->g_218.sf, "p_935->g_218.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_935->g_226[i][j], "p_935->g_226[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_935->g_230, "p_935->g_230", print_hash_value);
    transparent_crc(p_935->g_233.f0, "p_935->g_233.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_935->g_315[i][j], "p_935->g_315[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_935->g_334.s0, "p_935->g_334.s0", print_hash_value);
    transparent_crc(p_935->g_334.s1, "p_935->g_334.s1", print_hash_value);
    transparent_crc(p_935->g_334.s2, "p_935->g_334.s2", print_hash_value);
    transparent_crc(p_935->g_334.s3, "p_935->g_334.s3", print_hash_value);
    transparent_crc(p_935->g_334.s4, "p_935->g_334.s4", print_hash_value);
    transparent_crc(p_935->g_334.s5, "p_935->g_334.s5", print_hash_value);
    transparent_crc(p_935->g_334.s6, "p_935->g_334.s6", print_hash_value);
    transparent_crc(p_935->g_334.s7, "p_935->g_334.s7", print_hash_value);
    transparent_crc(p_935->g_334.s8, "p_935->g_334.s8", print_hash_value);
    transparent_crc(p_935->g_334.s9, "p_935->g_334.s9", print_hash_value);
    transparent_crc(p_935->g_334.sa, "p_935->g_334.sa", print_hash_value);
    transparent_crc(p_935->g_334.sb, "p_935->g_334.sb", print_hash_value);
    transparent_crc(p_935->g_334.sc, "p_935->g_334.sc", print_hash_value);
    transparent_crc(p_935->g_334.sd, "p_935->g_334.sd", print_hash_value);
    transparent_crc(p_935->g_334.se, "p_935->g_334.se", print_hash_value);
    transparent_crc(p_935->g_334.sf, "p_935->g_334.sf", print_hash_value);
    transparent_crc(p_935->g_352.s0, "p_935->g_352.s0", print_hash_value);
    transparent_crc(p_935->g_352.s1, "p_935->g_352.s1", print_hash_value);
    transparent_crc(p_935->g_352.s2, "p_935->g_352.s2", print_hash_value);
    transparent_crc(p_935->g_352.s3, "p_935->g_352.s3", print_hash_value);
    transparent_crc(p_935->g_352.s4, "p_935->g_352.s4", print_hash_value);
    transparent_crc(p_935->g_352.s5, "p_935->g_352.s5", print_hash_value);
    transparent_crc(p_935->g_352.s6, "p_935->g_352.s6", print_hash_value);
    transparent_crc(p_935->g_352.s7, "p_935->g_352.s7", print_hash_value);
    transparent_crc(p_935->g_363, "p_935->g_363", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_935->g_761[i][j], "p_935->g_761[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_935->g_792.x, "p_935->g_792.x", print_hash_value);
    transparent_crc(p_935->g_792.y, "p_935->g_792.y", print_hash_value);
    transparent_crc(p_935->g_807.s0, "p_935->g_807.s0", print_hash_value);
    transparent_crc(p_935->g_807.s1, "p_935->g_807.s1", print_hash_value);
    transparent_crc(p_935->g_807.s2, "p_935->g_807.s2", print_hash_value);
    transparent_crc(p_935->g_807.s3, "p_935->g_807.s3", print_hash_value);
    transparent_crc(p_935->g_807.s4, "p_935->g_807.s4", print_hash_value);
    transparent_crc(p_935->g_807.s5, "p_935->g_807.s5", print_hash_value);
    transparent_crc(p_935->g_807.s6, "p_935->g_807.s6", print_hash_value);
    transparent_crc(p_935->g_807.s7, "p_935->g_807.s7", print_hash_value);
    transparent_crc(p_935->g_812.x, "p_935->g_812.x", print_hash_value);
    transparent_crc(p_935->g_812.y, "p_935->g_812.y", print_hash_value);
    transparent_crc(p_935->g_816.x, "p_935->g_816.x", print_hash_value);
    transparent_crc(p_935->g_816.y, "p_935->g_816.y", print_hash_value);
    transparent_crc(p_935->g_816.z, "p_935->g_816.z", print_hash_value);
    transparent_crc(p_935->g_816.w, "p_935->g_816.w", print_hash_value);
    transparent_crc(p_935->g_838, "p_935->g_838", print_hash_value);
    transparent_crc(p_935->g_866.s0, "p_935->g_866.s0", print_hash_value);
    transparent_crc(p_935->g_866.s1, "p_935->g_866.s1", print_hash_value);
    transparent_crc(p_935->g_866.s2, "p_935->g_866.s2", print_hash_value);
    transparent_crc(p_935->g_866.s3, "p_935->g_866.s3", print_hash_value);
    transparent_crc(p_935->g_866.s4, "p_935->g_866.s4", print_hash_value);
    transparent_crc(p_935->g_866.s5, "p_935->g_866.s5", print_hash_value);
    transparent_crc(p_935->g_866.s6, "p_935->g_866.s6", print_hash_value);
    transparent_crc(p_935->g_866.s7, "p_935->g_866.s7", print_hash_value);
    transparent_crc(p_935->g_867.x, "p_935->g_867.x", print_hash_value);
    transparent_crc(p_935->g_867.y, "p_935->g_867.y", print_hash_value);
    transparent_crc(p_935->g_868.x, "p_935->g_868.x", print_hash_value);
    transparent_crc(p_935->g_868.y, "p_935->g_868.y", print_hash_value);
    transparent_crc(p_935->g_868.z, "p_935->g_868.z", print_hash_value);
    transparent_crc(p_935->g_868.w, "p_935->g_868.w", print_hash_value);
    transparent_crc(p_935->g_869.x, "p_935->g_869.x", print_hash_value);
    transparent_crc(p_935->g_869.y, "p_935->g_869.y", print_hash_value);
    transparent_crc(p_935->g_869.z, "p_935->g_869.z", print_hash_value);
    transparent_crc(p_935->g_869.w, "p_935->g_869.w", print_hash_value);
    transparent_crc(p_935->g_879.x, "p_935->g_879.x", print_hash_value);
    transparent_crc(p_935->g_879.y, "p_935->g_879.y", print_hash_value);
    transparent_crc(p_935->g_890.s0, "p_935->g_890.s0", print_hash_value);
    transparent_crc(p_935->g_890.s1, "p_935->g_890.s1", print_hash_value);
    transparent_crc(p_935->g_890.s2, "p_935->g_890.s2", print_hash_value);
    transparent_crc(p_935->g_890.s3, "p_935->g_890.s3", print_hash_value);
    transparent_crc(p_935->g_890.s4, "p_935->g_890.s4", print_hash_value);
    transparent_crc(p_935->g_890.s5, "p_935->g_890.s5", print_hash_value);
    transparent_crc(p_935->g_890.s6, "p_935->g_890.s6", print_hash_value);
    transparent_crc(p_935->g_890.s7, "p_935->g_890.s7", print_hash_value);
    transparent_crc(p_935->g_909.x, "p_935->g_909.x", print_hash_value);
    transparent_crc(p_935->g_909.y, "p_935->g_909.y", print_hash_value);
    transparent_crc(p_935->g_909.z, "p_935->g_909.z", print_hash_value);
    transparent_crc(p_935->g_909.w, "p_935->g_909.w", print_hash_value);
    transparent_crc(p_935->g_911.s0, "p_935->g_911.s0", print_hash_value);
    transparent_crc(p_935->g_911.s1, "p_935->g_911.s1", print_hash_value);
    transparent_crc(p_935->g_911.s2, "p_935->g_911.s2", print_hash_value);
    transparent_crc(p_935->g_911.s3, "p_935->g_911.s3", print_hash_value);
    transparent_crc(p_935->g_911.s4, "p_935->g_911.s4", print_hash_value);
    transparent_crc(p_935->g_911.s5, "p_935->g_911.s5", print_hash_value);
    transparent_crc(p_935->g_911.s6, "p_935->g_911.s6", print_hash_value);
    transparent_crc(p_935->g_911.s7, "p_935->g_911.s7", print_hash_value);
    transparent_crc(p_935->g_911.s8, "p_935->g_911.s8", print_hash_value);
    transparent_crc(p_935->g_911.s9, "p_935->g_911.s9", print_hash_value);
    transparent_crc(p_935->g_911.sa, "p_935->g_911.sa", print_hash_value);
    transparent_crc(p_935->g_911.sb, "p_935->g_911.sb", print_hash_value);
    transparent_crc(p_935->g_911.sc, "p_935->g_911.sc", print_hash_value);
    transparent_crc(p_935->g_911.sd, "p_935->g_911.sd", print_hash_value);
    transparent_crc(p_935->g_911.se, "p_935->g_911.se", print_hash_value);
    transparent_crc(p_935->g_911.sf, "p_935->g_911.sf", print_hash_value);
    transparent_crc(p_935->v_collective, "p_935->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 92; i++)
            transparent_crc(p_935->g_special_values[i + 92 * get_linear_group_id()], "p_935->g_special_values[i + 92 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 92; i++)
            transparent_crc(p_935->l_special_values[i], "p_935->l_special_values[i]", print_hash_value);
    transparent_crc(p_935->l_comm_values[get_linear_local_id()], "p_935->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_935->g_comm_values[get_linear_group_id() * 43 + get_linear_local_id()], "p_935->g_comm_values[get_linear_group_id() * 43 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
