// --atomics 59 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 5,63,22 -l 5,3,1
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

__constant uint32_t permutations[10][15] = {
{5,2,14,8,12,11,10,7,1,0,4,3,6,13,9}, // permutation 0
{1,7,8,13,9,12,3,5,11,2,4,14,10,0,6}, // permutation 1
{7,6,9,8,4,2,12,11,1,5,0,3,14,10,13}, // permutation 2
{7,0,11,13,12,5,10,1,2,3,6,4,14,8,9}, // permutation 3
{8,11,10,7,13,6,5,0,9,2,1,14,12,4,3}, // permutation 4
{5,2,10,7,3,1,14,0,4,8,6,9,11,12,13}, // permutation 5
{13,10,8,14,7,6,11,9,0,2,3,1,12,5,4}, // permutation 6
{2,3,6,0,7,11,8,1,14,12,10,4,13,5,9}, // permutation 7
{4,13,1,11,10,2,3,8,5,7,12,9,6,0,14}, // permutation 8
{6,0,11,1,13,9,12,5,14,8,7,10,2,4,3} // permutation 9
};

// Seed: 2627954164

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
};

struct S1 {
    int32_t g_3;
    uint8_t g_8;
    volatile VECTOR(uint16_t, 16) g_22;
    VECTOR(int16_t, 16) g_23;
    VECTOR(int32_t, 16) g_43;
    VECTOR(int32_t, 8) g_62;
    uint64_t g_67;
    VECTOR(int64_t, 2) g_74;
    VECTOR(int64_t, 16) g_79;
    VECTOR(int64_t, 4) g_80;
    VECTOR(int64_t, 4) g_82;
    VECTOR(int64_t, 8) g_83;
    VECTOR(int64_t, 4) g_85;
    VECTOR(int64_t, 4) g_86;
    int32_t *g_104;
    int32_t **g_103[2][5][5];
    struct S0 g_107;
    int8_t g_116;
    VECTOR(int32_t, 16) g_119;
    VECTOR(int16_t, 4) g_120;
    VECTOR(uint8_t, 2) g_123;
    uint64_t g_132;
    uint64_t *g_131;
    uint16_t g_133;
    uint32_t g_138;
    VECTOR(uint8_t, 4) g_170;
    VECTOR(uint8_t, 2) g_174;
    volatile int32_t g_180[10];
    volatile int32_t *g_179;
    uint32_t g_190[2];
    int8_t g_196;
    uint16_t g_208;
    int32_t g_225;
    int64_t g_250;
    VECTOR(uint64_t, 2) g_294;
    volatile int16_t *g_303;
    int32_t g_373;
    int16_t g_376;
    int16_t g_381;
    VECTOR(uint16_t, 8) g_391;
    VECTOR(int8_t, 4) g_410;
    int32_t g_437[4][4][3];
    uint64_t g_447;
    VECTOR(int64_t, 16) g_455;
    VECTOR(int32_t, 4) g_457;
    uint8_t *g_471;
    VECTOR(int32_t, 2) g_491;
    uint32_t *g_504;
    uint32_t **g_503;
    VECTOR(uint16_t, 2) g_586;
    uint32_t ***g_623;
    VECTOR(uint16_t, 2) g_668;
    int8_t g_673[2][8][10];
    int32_t g_674;
    VECTOR(int8_t, 8) g_688;
    int16_t g_692;
    uint32_t g_701;
    uint32_t g_723;
    struct S0 * volatile g_732[9][4];
    struct S0 * volatile g_733;
    VECTOR(int32_t, 8) g_744;
    VECTOR(int32_t, 8) g_755;
    uint8_t g_777;
    volatile VECTOR(uint32_t, 2) g_792;
    volatile VECTOR(uint32_t, 16) g_793;
    volatile VECTOR(uint32_t, 2) g_795;
    int32_t * volatile *g_805;
    int32_t * volatile * volatile *g_804;
    int32_t * volatile * volatile ** volatile g_803;
    VECTOR(uint16_t, 8) g_814;
    VECTOR(uint16_t, 4) g_816;
    volatile VECTOR(uint32_t, 8) g_821;
    VECTOR(uint8_t, 16) g_872;
    VECTOR(int16_t, 16) g_888;
    int32_t g_897;
    volatile int32_t g_904;
    int64_t g_906;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S1 * p_909);
uint16_t  func_11(int32_t * p_12, int8_t  p_13, int32_t * p_14, uint32_t  p_15, struct S1 * p_909);
uint64_t  func_24(int32_t * p_25, struct S0  p_26, int8_t  p_27, struct S1 * p_909);
int32_t * func_28(int32_t * p_29, int32_t * p_30, uint32_t  p_31, uint16_t  p_32, struct S1 * p_909);
int32_t * func_33(int64_t  p_34, int32_t * p_35, int32_t * p_36, int32_t * p_37, int32_t * p_38, struct S1 * p_909);
uint16_t  func_57(int32_t * p_58, int32_t ** p_59, struct S1 * p_909);
int64_t  func_76(int32_t * p_77, struct S1 * p_909);
int64_t  func_87(int32_t ** p_88, int32_t * p_89, int32_t  p_90, struct S1 * p_909);
int32_t ** func_91(int32_t * p_92, int32_t * p_93, struct S1 * p_909);
int32_t * func_94(int32_t  p_95, int64_t  p_96, struct S1 * p_909);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_909->g_3 p_909->g_8 p_909->g_23 p_909->g_43 p_909->g_67 p_909->g_103 p_909->g_303 p_909->g_131 p_909->g_132 p_909->g_120 p_909->g_86 p_909->g_119 p_909->g_74 p_909->g_83 p_909->g_190 p_909->g_138 p_909->g_373 p_909->g_85 p_909->g_80 p_909->g_133 p_909->g_447 p_909->g_104 p_909->g_410 p_909->g_116 p_909->g_455 p_909->g_208 p_909->g_381 p_909->g_107.f0 p_909->g_623 p_909->g_503 p_909->g_504 p_909->g_82 p_909->g_674 p_909->g_673 p_909->g_62 p_909->g_225 p_909->g_376 p_909->g_457 p_909->g_701 p_909->g_107 p_909->g_723 p_909->g_733 p_909->g_179 p_909->g_180 p_909->g_391 p_909->g_872 p_909->g_793 p_909->g_888 p_909->g_897 p_909->g_777 p_909->g_805 p_909->g_755 p_909->g_904 p_909->g_906
 * writes: p_909->g_3 p_909->g_8 p_909->g_43 p_909->g_67 p_909->g_250 p_909->g_104 p_909->g_120 p_909->g_138 p_909->g_170 p_909->g_208 p_909->g_133 p_909->g_174 p_909->g_196 p_909->g_107 p_909->g_447 p_909->g_132 p_909->g_116 p_909->g_410 p_909->g_381 p_909->g_623 p_909->g_455 p_909->g_723 p_909->g_131 p_909->g_674 p_909->g_673
 */
int16_t  func_1(struct S1 * p_909)
{ /* block id: 4 */
    int32_t *l_2 = &p_909->g_3;
    struct S0 l_719[8] = {{0x04992B3788D90D85L},{0x04992B3788D90D85L},{0x04992B3788D90D85L},{0x04992B3788D90D85L},{0x04992B3788D90D85L},{0x04992B3788D90D85L},{0x04992B3788D90D85L},{0x04992B3788D90D85L}};
    int32_t l_757 = 0x2136ADAFL;
    int32_t l_763 = 0x7C3F2ECCL;
    VECTOR(int32_t, 4) l_766 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x5357F10CL), 0x5357F10CL);
    VECTOR(uint32_t, 4) l_776 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 7UL), 7UL);
    VECTOR(uint16_t, 8) l_815 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0UL), 0UL), 0UL, 65526UL, 0UL);
    uint16_t l_823 = 1UL;
    VECTOR(uint64_t, 8) l_861 = (VECTOR(uint64_t, 8))(0x4A95FAABA0FF21E4L, (VECTOR(uint64_t, 4))(0x4A95FAABA0FF21E4L, (VECTOR(uint64_t, 2))(0x4A95FAABA0FF21E4L, 6UL), 6UL), 6UL, 0x4A95FAABA0FF21E4L, 6UL);
    uint64_t *l_863 = (void*)0;
    uint16_t *l_898 = (void*)0;
    uint16_t *l_899 = (void*)0;
    uint16_t *l_900 = (void*)0;
    uint16_t *l_901 = &l_823;
    int8_t *l_902 = &p_909->g_116;
    int32_t l_903 = (-8L);
    int64_t l_905 = 0x4FB1901F41701CD8L;
    int32_t *l_907 = (void*)0;
    int32_t *l_908 = &p_909->g_674;
    int i;
    (*l_2) = 0x7EEDE0B4L;
    for (p_909->g_3 = 10; (p_909->g_3 == 18); p_909->g_3 = safe_add_func_int16_t_s_s(p_909->g_3, 7))
    { /* block id: 8 */
        int16_t l_16 = 0x1C5AL;
        VECTOR(uint16_t, 8) l_21 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 3UL), 3UL), 3UL, 65535UL, 3UL);
        int32_t *l_39 = &p_909->g_3;
        int32_t **l_46 = &l_39;
        int32_t *l_718 = (void*)0;
        int32_t *l_754 = (void*)0;
        int32_t *l_756 = (void*)0;
        int32_t *l_758 = (void*)0;
        int32_t *l_759 = (void*)0;
        int32_t *l_760 = (void*)0;
        int32_t l_761 = (-6L);
        int32_t *l_762 = (void*)0;
        struct S0 l_778 = {0x343208432FB0A24DL};
        VECTOR(uint32_t, 8) l_794 = (VECTOR(uint32_t, 8))(0xE2A5D151L, (VECTOR(uint32_t, 4))(0xE2A5D151L, (VECTOR(uint32_t, 2))(0xE2A5D151L, 0xE077B385L), 0xE077B385L), 0xE077B385L, 0xE2A5D151L, 0xE077B385L);
        uint32_t l_854 = 0x4FB064BFL;
        int8_t *l_862 = &p_909->g_673[1][6][2];
        int i;
        l_763 |= (l_761 |= (l_757 |= ((safe_mod_func_uint8_t_u_u((((p_909->g_8 = p_909->g_8) <= (safe_div_func_uint64_t_u_u((func_11(l_2, (((l_16 ^ (l_16 >= (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(l_21.s17674142)).s36, ((VECTOR(uint16_t, 4))(p_909->g_22.s8210)).lo))).hi, 7)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(p_909->g_23.s93fe6966)).hi, (int16_t)p_909->l_comm_values[(safe_mod_func_uint32_t_u_u(p_909->tid, 15))]))).odd)).hi)))) != func_24((l_718 = ((*l_46) = func_28(&p_909->g_3, &p_909->g_3, p_909->g_23.s9, (((*l_46) = func_33(l_21.s1, &p_909->g_3, l_2, l_2, l_39, p_909)) != (void*)0), p_909))), l_719[3], p_909->g_701, p_909)) && 1L), l_2, p_909->g_82.x, p_909) | 0x6FDBL), p_909->g_225))) <= (-1L)), p_909->g_391.s3)) && (**l_46))));
        for (p_909->g_674 = (-6); (p_909->g_674 <= 23); ++p_909->g_674)
        { /* block id: 323 */
            int32_t l_767 = 0L;
            struct S0 l_780[8] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
            uint32_t l_825 = 1UL;
            uint32_t l_832[3][6] = {{0xF77B9AF8L,0xF77B9AF8L,4294967294UL,8UL,0UL,8UL},{0xF77B9AF8L,0xF77B9AF8L,4294967294UL,8UL,0UL,8UL},{0xF77B9AF8L,0xF77B9AF8L,4294967294UL,8UL,0UL,8UL}};
            uint64_t **l_843 = (void*)0;
            int i, j;
            (1 + 1);
        }
        if ((*l_2))
            continue;
        atomic_sub(&p_909->g_atomic_reduction[get_linear_group_id()], ((0UL ^ (((*l_862) ^= (safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u(((*p_909->g_131) ^= ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_861.s0256316126350636)).sa994)).y))) > ((void*)0 != &l_46)), (*l_2)))) >= 0L)) ^ (l_863 != &p_909->g_132)));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_909->v_collective += p_909->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    (*l_908) |= ((VECTOR(int32_t, 4))(0x4599F247L, (((((((safe_lshift_func_uint8_t_u_u((*l_2), (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(p_909->g_872.s454264e3b7057eb7)).s2, ((((((*p_909->g_733) , ((*l_902) |= (((((safe_add_func_uint16_t_u_u((((p_909->g_673[1][4][3] ^ (safe_mod_func_int8_t_s_s((((+(*l_2)) <= (p_909->g_793.sa < (safe_mul_func_int8_t_s_s((p_909->g_107 , (safe_unary_minus_func_uint64_t_u(((*p_909->g_131) = (safe_sub_func_uint8_t_u_u(0x8EL, (safe_lshift_func_uint16_t_u_s(p_909->g_673[1][2][5], 10)))))))), (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(p_909->g_888.s5970)).x, ((*l_901) ^= (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((+(safe_add_func_int64_t_s_s(((((*l_2) , p_909->g_43.sa) >= p_909->g_673[1][1][7]) & (*l_2)), (*l_2)))), p_909->g_897)), (*l_2))) , 4UL), 0x3FL, 0x50L, 255UL)).ywwyyxww)).s1, p_909->g_8))))), 0x8A90156FL)))))) , 0x37L), (-3L)))) | 0xDAC2L) < 0x73595E85L), p_909->g_777)) ^ (*l_2)) <= (**p_909->g_805)) & FAKE_DIVERGE(p_909->group_1_offset, get_group_id(1), 10)) <= 0x47L))) | p_909->g_701) < p_909->g_755.s1) & l_903) || p_909->g_904))) & (*l_2)), l_905)), (*l_2))))) != (*l_2)) , 0x3C0CL) && 0x6437L) & p_909->g_906) || 0xA70753D77DFA6D46L) , (*l_2)), 0x74DB8189L, 0x27092FD2L)).w;
    return (*l_908);
}


/* ------------------------------------------ */
/* 
 * reads : p_909->g_733 p_909->g_744 p_909->g_138 p_909->g_119 p_909->g_723 p_909->g_179 p_909->g_180 p_909->g_131 p_909->g_83
 * writes: p_909->g_107 p_909->g_131 p_909->g_138 p_909->g_67
 */
uint16_t  func_11(int32_t * p_12, int8_t  p_13, int32_t * p_14, uint32_t  p_15, struct S1 * p_909)
{ /* block id: 306 */
    int32_t *l_726 = (void*)0;
    int32_t *l_727[7][8][3] = {{{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0}},{{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0}},{{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0}},{{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0}},{{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0}},{{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0}},{{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0},{&p_909->g_3,&p_909->g_437[0][2][0],(void*)0}}};
    uint32_t l_728 = 1UL;
    struct S0 l_731 = {0x6CE32BC030074A16L};
    VECTOR(uint64_t, 4) l_740 = (VECTOR(uint64_t, 4))(0xC5F84302D537EBFFL, (VECTOR(uint64_t, 2))(0xC5F84302D537EBFFL, 18446744073709551608UL), 18446744073709551608UL);
    uint64_t **l_741 = &p_909->g_131;
    uint8_t l_745 = 255UL;
    uint32_t *l_746 = (void*)0;
    uint32_t *l_747 = &p_909->g_138;
    uint64_t *l_750 = (void*)0;
    int32_t l_751 = (-1L);
    int i, j, k;
    ++l_728;
    (*p_909->g_733) = l_731;
    p_12 = func_94((safe_div_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_740.yzwz)).zzzxzzyzyxzwxwxw)).s80)).lo != ((p_15 , &p_909->g_250) != (void*)0)), (((*l_741) = &p_909->g_67) == ((safe_sub_func_int32_t_s_s((l_745 &= ((VECTOR(int32_t, 16))(p_909->g_744.s6777505345067405)).s7), ((((((--(*l_747)) | (&l_727[4][4][0] == &p_12)) , (p_909->g_119.sa != (p_909->g_723 , (p_15 < p_909->g_138)))) , 0x2AABL) >= p_15) != p_13))) , l_750)))) < (*p_909->g_179)) > l_751), p_13)), p_15, p_909);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_909->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[(safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(p_13, ((*p_909->g_131) = FAKE_DIVERGE(p_909->local_1_offset, get_local_id(1), 10)))), 10))][(safe_mod_func_uint32_t_u_u(p_909->tid, 15))]));
    return p_909->g_83.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_909->g_107 p_909->g_723 p_909->g_131 p_909->g_132 p_909->g_67
 * writes: p_909->g_107 p_909->g_723
 */
uint64_t  func_24(int32_t * p_25, struct S0  p_26, int8_t  p_27, struct S1 * p_909)
{ /* block id: 300 */
    struct S0 *l_720[4] = {&p_909->g_107,&p_909->g_107,&p_909->g_107,&p_909->g_107};
    int32_t *l_721[3];
    int32_t l_722[9][4][7] = {{{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL}},{{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL}},{{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL}},{{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL}},{{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL}},{{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL}},{{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL}},{{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL}},{{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL},{1L,0x46FBAEFBL,(-8L),0x50592A4BL,(-3L),1L,0x50592A4BL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_721[i] = (void*)0;
    p_26 = p_909->g_107;
    p_909->g_107 = (p_26 = p_909->g_107);
    --p_909->g_723;
    return (*p_909->g_131);
}


/* ------------------------------------------ */
/* 
 * reads : p_909->g_43 p_909->g_23 p_909->g_62 p_909->g_67 p_909->g_74 p_909->g_79 p_909->g_80 p_909->g_82 p_909->g_83 p_909->g_85 p_909->g_86 p_909->g_103 p_909->g_107 p_909->g_104 p_909->g_3 p_909->g_116 p_909->g_119 p_909->g_120 p_909->g_123 p_909->g_131 p_909->g_133 p_909->g_132 p_909->l_comm_values p_909->g_170 p_909->g_174 p_909->g_179 p_909->g_190 p_909->g_294 p_909->g_303 p_909->g_208 p_909->g_138 p_909->g_373 p_909->g_196 p_909->g_447 p_909->g_455 p_909->g_457 p_909->g_471 p_909->g_491 p_909->g_381 p_909->g_503 p_909->g_391 p_909->g_410 p_909->g_586 p_909->g_437 p_909->g_623 p_909->g_504 p_909->g_668 p_909->g_673 p_909->g_674 p_909->g_225 p_909->g_376 p_909->g_688 p_909->g_701
 * writes: p_909->g_43 p_909->g_67 p_909->g_116 p_909->g_133 p_909->g_138 p_909->g_123 p_909->g_179 p_909->g_132 p_909->g_190 p_909->g_120 p_909->g_196 p_909->g_250 p_909->g_104 p_909->g_85 p_909->g_79 p_909->g_170 p_909->g_208 p_909->g_174 p_909->g_107 p_909->g_447 p_909->g_381 p_909->g_503 p_909->g_376 p_909->g_410 p_909->g_623 p_909->g_455
 */
int32_t * func_28(int32_t * p_29, int32_t * p_30, uint32_t  p_31, uint16_t  p_32, struct S1 * p_909)
{ /* block id: 19 */
    int32_t *l_47[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int32_t, 2) l_50 = (VECTOR(int32_t, 2))(0x03A798BEL, 0x49060546L);
    VECTOR(int32_t, 8) l_51 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L), 0L, 9L, 0L);
    uint32_t l_52 = 0xE8BD61C0L;
    int32_t l_63[1];
    VECTOR(int64_t, 16) l_72 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int64_t, 2))(1L, (-1L)), (VECTOR(int64_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
    VECTOR(int64_t, 16) l_73 = (VECTOR(int64_t, 16))(0x5AE8CE1F6DC3DB88L, (VECTOR(int64_t, 4))(0x5AE8CE1F6DC3DB88L, (VECTOR(int64_t, 2))(0x5AE8CE1F6DC3DB88L, 0x3635D5AA0404C693L), 0x3635D5AA0404C693L), 0x3635D5AA0404C693L, 0x5AE8CE1F6DC3DB88L, 0x3635D5AA0404C693L, (VECTOR(int64_t, 2))(0x5AE8CE1F6DC3DB88L, 0x3635D5AA0404C693L), (VECTOR(int64_t, 2))(0x5AE8CE1F6DC3DB88L, 0x3635D5AA0404C693L), 0x5AE8CE1F6DC3DB88L, 0x3635D5AA0404C693L, 0x5AE8CE1F6DC3DB88L, 0x3635D5AA0404C693L);
    VECTOR(int64_t, 8) l_75 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    VECTOR(uint16_t, 8) l_288 = (VECTOR(uint16_t, 8))(0x66DCL, (VECTOR(uint16_t, 4))(0x66DCL, (VECTOR(uint16_t, 2))(0x66DCL, 65535UL), 65535UL), 65535UL, 0x66DCL, 65535UL);
    VECTOR(uint8_t, 16) l_558 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL);
    VECTOR(uint16_t, 8) l_584 = (VECTOR(uint16_t, 8))(0xC24FL, (VECTOR(uint16_t, 4))(0xC24FL, (VECTOR(uint16_t, 2))(0xC24FL, 65533UL), 65533UL), 65533UL, 0xC24FL, 65533UL);
    VECTOR(uint16_t, 16) l_585 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x3CF5L), 0x3CF5L), 0x3CF5L, 0UL, 0x3CF5L, (VECTOR(uint16_t, 2))(0UL, 0x3CF5L), (VECTOR(uint16_t, 2))(0UL, 0x3CF5L), 0UL, 0x3CF5L, 0UL, 0x3CF5L);
    int16_t l_603 = 0L;
    uint16_t l_605 = 65529UL;
    int32_t ***l_625 = (void*)0;
    int32_t ****l_624 = &l_625;
    VECTOR(uint16_t, 8) l_669 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xE51FL), 0xE51FL), 0xE51FL, 0UL, 0xE51FL);
    int8_t *l_679 = &p_909->g_196;
    VECTOR(int8_t, 16) l_687 = (VECTOR(int8_t, 16))(0x1FL, (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, (-1L)), (-1L)), (-1L), 0x1FL, (-1L), (VECTOR(int8_t, 2))(0x1FL, (-1L)), (VECTOR(int8_t, 2))(0x1FL, (-1L)), 0x1FL, (-1L), 0x1FL, (-1L));
    VECTOR(int8_t, 4) l_689 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x1DL), 0x1DL);
    VECTOR(uint8_t, 8) l_693 = (VECTOR(uint8_t, 8))(0x82L, (VECTOR(uint8_t, 4))(0x82L, (VECTOR(uint8_t, 2))(0x82L, 0x74L), 0x74L), 0x74L, 0x82L, 0x74L);
    VECTOR(int8_t, 8) l_698 = (VECTOR(int8_t, 8))(0x11L, (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 0x02L), 0x02L), 0x02L, 0x11L, 0x02L);
    VECTOR(int8_t, 2) l_699 = (VECTOR(int8_t, 2))(0x40L, 7L);
    VECTOR(int8_t, 8) l_700 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x66L), 0x66L), 0x66L, 4L, 0x66L);
    int32_t l_716 = 0x66A20560L;
    int32_t *l_717 = &p_909->g_225;
    int i;
    for (i = 0; i < 1; i++)
        l_63[i] = (-6L);
    l_47[5] = (void*)0;
    p_909->g_43.sf |= (safe_lshift_func_int8_t_s_s(p_32, 6));
    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_50.yy)), ((VECTOR(int32_t, 16))(l_51.s5767657717453771)).s8c))).xxxxxxxxyyyyxxxx)).s9)
    { /* block id: 22 */
        return &p_909->g_3;
    }
    else
    { /* block id: 24 */
        uint64_t *l_66[1];
        int32_t l_70 = (-10L);
        VECTOR(int64_t, 16) l_71 = (VECTOR(int64_t, 16))(0x45FE6EE091E6DCF6L, (VECTOR(int64_t, 4))(0x45FE6EE091E6DCF6L, (VECTOR(int64_t, 2))(0x45FE6EE091E6DCF6L, 0x1F656345D18A9382L), 0x1F656345D18A9382L), 0x1F656345D18A9382L, 0x45FE6EE091E6DCF6L, 0x1F656345D18A9382L, (VECTOR(int64_t, 2))(0x45FE6EE091E6DCF6L, 0x1F656345D18A9382L), (VECTOR(int64_t, 2))(0x45FE6EE091E6DCF6L, 0x1F656345D18A9382L), 0x45FE6EE091E6DCF6L, 0x1F656345D18A9382L, 0x45FE6EE091E6DCF6L, 0x1F656345D18A9382L);
        int32_t *l_78[1][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int64_t *l_289 = (void*)0;
        int64_t *l_290[4][2][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int64_t *l_291 = &p_909->g_250;
        int32_t **l_292 = &p_909->g_104;
        uint16_t *l_572 = (void*)0;
        VECTOR(uint16_t, 4) l_589 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 9UL), 9UL);
        uint16_t l_594[7][2][5] = {{{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL},{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL}},{{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL},{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL}},{{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL},{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL}},{{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL},{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL}},{{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL},{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL}},{{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL},{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL}},{{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL},{5UL,0x6BC8L,0x0B2AL,65535UL,0x179EL}}};
        int8_t l_607 = 0L;
        VECTOR(int64_t, 4) l_618 = (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 9L), 9L);
        int32_t l_620[4] = {0x2093DC90L,0x2093DC90L,0x2093DC90L,0x2093DC90L};
        int8_t **l_680[6] = {&l_679,&l_679,&l_679,&l_679,&l_679,&l_679};
        VECTOR(int8_t, 2) l_690 = (VECTOR(int8_t, 2))(1L, 0x2DL);
        uint32_t *l_691[6][5][7] = {{{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52}},{{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52}},{{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52}},{{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52}},{{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52}},{{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52},{&l_52,&l_52,&l_52,&l_52,&l_52,&l_52,&l_52}}};
        int16_t *l_704 = (void*)0;
        int16_t **l_705 = &l_704;
        int32_t **l_714 = (void*)0;
        int32_t l_715 = 0x53E35534L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_66[i] = &p_909->g_67;
        l_52--;
        if ((safe_mod_func_uint16_t_u_u(p_909->g_23.s3, func_57(((*l_292) = func_33((0L < ((safe_sub_func_int32_t_s_s((l_63[0] = (p_31 , ((VECTOR(int32_t, 4))(p_909->g_62.s4352)).w)), (+(safe_sub_func_uint64_t_u_u(0x851AA8C97D735F31L, (l_70 = (--p_909->g_67))))))) , l_70)), func_33(((*l_291) = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(l_71.s81b7ffc8)).s32, ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(l_72.s6f59)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_73.s0a)))).xyyxyyxxxyxxyyxx)).s7599, ((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 2))(1L, 1L)).xyyxyyyy, ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_909->g_74.yyyxxyyx)).s43)).xyyxxyyx))), ((VECTOR(int64_t, 2))(l_75.s77)).yyxxyyxy))).lo, ((VECTOR(int64_t, 16))(func_76(l_78[0][1][0], p_909), (p_909->g_85.w |= (((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(0x8047L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_288.s67)), 0UL, 65534UL)).y)) , p_909->g_174.x), FAKE_DIVERGE(p_909->local_2_offset, get_local_id(2), 10))) && p_909->g_190[0]) >= (-1L))), 0x06EF8A51724CF205L, ((VECTOR(int64_t, 8))(0L)), p_909->g_23.s3, (-4L), (-10L), 8L, 5L)).s0361))).xwxxzzwy)).hi))).wwyywwzyyxwyyzyx)), ((VECTOR(int64_t, 16))(0x4F940AD292A5908AL)), ((VECTOR(int64_t, 16))(0x421B0B1D8BA16A38L))))).s27))).yxxy)).yxwwxzwz)).odd)).x , 0x4709F55AB7DD218FL)), l_47[2], p_30, l_47[5], p_29, p_909), l_47[5], p_30, l_78[0][1][0], p_909)), p_909->g_103[1][0][4], p_909))))
        { /* block id: 226 */
            (*l_292) = (void*)0;
        }
        else
        { /* block id: 228 */
            struct S0 l_571[2] = {{1L},{1L}};
            uint16_t *l_573 = &p_909->g_208;
            VECTOR(int8_t, 2) l_587 = (VECTOR(int8_t, 2))(6L, (-1L));
            int16_t *l_592 = &p_909->g_376;
            uint64_t l_593 = 0UL;
            int8_t *l_595 = (void*)0;
            int8_t *l_596 = &p_909->g_116;
            int8_t *l_597 = (void*)0;
            int8_t *l_598 = (void*)0;
            int8_t *l_599 = (void*)0;
            int8_t *l_600 = (void*)0;
            int32_t l_601 = (-4L);
            uint8_t l_602 = 5UL;
            uint32_t *l_604 = &p_909->g_138;
            int32_t ***l_606[3];
            uint16_t l_608 = 0xA49FL;
            VECTOR(uint32_t, 8) l_619 = (VECTOR(uint32_t, 8))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0x1E0CB918L), 0x1E0CB918L), 0x1E0CB918L, 6UL, 0x1E0CB918L);
            uint64_t *l_643 = &p_909->g_67;
            int64_t l_645 = 1L;
            int i;
            for (i = 0; i < 3; i++)
                l_606[i] = &p_909->g_103[1][0][4];
            l_608 &= (l_607 |= (safe_sub_func_int64_t_s_s(((((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((GROUP_DIVERGE(1, 1) <= ((*l_604) = ((safe_rshift_func_uint8_t_u_u(p_32, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_558.s1c90)).lo)).even)) && (((((safe_div_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((((l_571[1] , l_572) != l_573) ^ (((VECTOR(uint64_t, 8))(((*p_909->g_131) = (safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((*p_29) != ((((safe_sub_func_uint32_t_u_u(((l_601 = ((*l_596) = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_584.s00607770)).s6100076754623324)).s2d7b, ((VECTOR(uint16_t, 4))(l_585.sd1c7))))), (((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 8))(p_909->g_586.xxxyyyyy)).s75, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_587.xxyxxyxyyyyyyyyy)).hi)).s5 == (((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(3L, 1L)).xyyx)).xwwzxxwyzzyywxwx))).sb || (safe_unary_minus_func_uint32_t_u(p_32)))), ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(l_589.wwyyyyww)).s5005631462262055, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((*l_573) = ((0x4669D9B1L & ((((*l_592) = (safe_div_func_uint16_t_u_u(p_909->g_437[3][2][0], (p_32 , GROUP_DIVERGE(1, 1))))) == p_909->g_23.s8) == (*p_30))) && l_593)), ((VECTOR(uint16_t, 2))(0UL)), 9UL)).wzxxxxzx)).s3402733543655514))), (uint16_t)GROUP_DIVERGE(1, 1), (uint16_t)p_31))).sae9c, ((VECTOR(uint16_t, 4))(0UL))))), ((VECTOR(uint16_t, 2))(0x4DE3L)), 0x6D8FL)).s3640001631275041)).sfb))).even ^ p_909->g_43.s5), ((VECTOR(uint16_t, 2))(65535UL)), 65535UL)).s7 >= l_571[1].f0) < p_909->g_123.y) > l_594[5][0][2]), 10)), 13)))) & p_909->g_447), 0x2C90668AL)) , 1L) , l_602) <= p_31)), p_909->g_86.z)), 0x269BFF10L))), l_602, 1UL, p_32, 0x230EC682DB04BD83L, ((VECTOR(uint64_t, 2))(0UL)), 18446744073709551615UL)).s3 < 0UL)) , 1UL), 4)), 13)) == 5L), p_909->g_455.sb)) > p_909->g_373), GROUP_DIVERGE(0, 1))) && l_603) | p_32), (*p_29))) & l_587.x), l_602)) | 0x4DA0L) && l_602) || p_909->g_85.w) == 0x70319AD2L)))), l_605)), p_909->g_410.z)), p_31)) && p_32), (-1L))) || l_593), (-1L))), (*p_30))) , &p_909->g_103[1][2][3]) == l_606[1]) < p_31), p_31)));
            for (p_909->g_381 = (-14); (p_909->g_381 != (-8)); p_909->g_381++)
            { /* block id: 239 */
                int32_t l_621 = 0x603CE82EL;
                uint32_t ***l_622 = &p_909->g_503;
                int32_t l_632[5];
                VECTOR(uint16_t, 2) l_670 = (VECTOR(uint16_t, 2))(0x9C3DL, 0x73E4L);
                int i;
                for (i = 0; i < 5; i++)
                    l_632[i] = 0x1FF8D464L;
                l_620[1] = (safe_mul_func_uint16_t_u_u(((*l_573) |= (safe_sub_func_uint32_t_u_u((0x0746L != ((safe_unary_minus_func_uint64_t_u(GROUP_DIVERGE(2, 1))) != (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_618.xyww)).hi)).lo, p_31)))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_619.s1131)))).w))), p_909->g_381));
                if ((((((*l_573) = (p_909->g_107.f0 , l_621)) > (((((*l_596) = (1UL >= (0UL & (l_622 == (p_909->g_623 = l_622))))) | ((((l_289 == (void*)0) , l_624) != &l_606[0]) , 0x97L)) > p_31) ^ 0xB8L)) , (*p_909->g_623)) != (void*)0))
                { /* block id: 245 */
                    int64_t l_640 = 0x5569215F977D1D1EL;
                    uint64_t l_646[10] = {5UL,0x6117F5C64F37FDD6L,5UL,5UL,0x6117F5C64F37FDD6L,5UL,5UL,0x6117F5C64F37FDD6L,5UL,5UL};
                    int i;
                    (*l_292) = p_29;
                    for (p_32 = 0; (p_32 < 47); p_32 = safe_add_func_int8_t_s_s(p_32, 9))
                    { /* block id: 249 */
                        uint64_t l_635 = 0x4720A816797AE805L;
                        int32_t l_644 = (-10L);
                        struct S0 *l_649 = &l_571[0];
                        atomic_xor(&p_909->l_atomic_reduction[0], (l_632[1] = (safe_div_func_int16_t_s_s(((void*)0 != (*p_909->g_623)), (safe_div_func_int64_t_s_s(p_31, 18446744073709551607UL))))));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_909->v_collective += p_909->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        l_644 = ((p_909->g_455.s4 = (((((!(*p_909->g_131)) <= (0x148FL || p_31)) > (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(0UL, 0x84E4L)), ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0x33DFL, ((p_909->g_82.w = l_635) , (p_31 || (((*l_596) = (safe_lshift_func_int8_t_s_u(0x5BL, 5))) ^ (safe_lshift_func_uint8_t_u_u(p_32, 5))))), 0UL, 0x00AEL)).even)).yyyx)).xxyyywyw, ((VECTOR(uint16_t, 4))(((++p_909->g_447) > (&p_909->g_67 != (l_643 = l_290[1][1][0]))), GROUP_DIVERGE(2, 1), 0xA787L, 0xBAB4L)).zxxzyxxy))).s53))).yxxx, (uint16_t)l_635))).y, p_909->g_190[0]))) ^ 0x0C8EL) != (**l_292))) < p_31);
                        l_646[5]--;
                        (*l_649) = l_571[1];
                    }
                    if ((*p_29))
                        continue;
                    if (l_646[6])
                        continue;
                }
                else
                { /* block id: 263 */
                    l_632[1] &= (*p_909->g_104);
                    return p_29;
                }
                for (l_70 = 0; (l_70 != (-8)); l_70--)
                { /* block id: 269 */
                    uint64_t l_658 = 1UL;
                    uint32_t *l_667 = (void*)0;
                    int32_t l_675 = 0x04A259DCL;
                    int32_t l_676 = 6L;
                    for (l_601 = 0; (l_601 < (-15)); l_601 = safe_sub_func_int8_t_s_s(l_601, 1))
                    { /* block id: 272 */
                        int i, j;
                        if ((*p_30))
                            break;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_909->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[(safe_mod_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((-1L), GROUP_DIVERGE(2, 1))) | (safe_lshift_func_uint8_t_u_u(252UL, 1))), 10))][(safe_mod_func_uint32_t_u_u(p_909->tid, 15))]));
                        l_658--;
                        if (l_632[2])
                            continue;
                    }
                    l_676 = (l_675 = (safe_sub_func_uint8_t_u_u((((*p_909->g_131) , (safe_add_func_uint16_t_u_u(((((((safe_lshift_func_uint8_t_u_u(((**p_909->g_623) == l_667), 0)) | (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(p_909->g_668.xxyxxxxx)).s43, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(0x3EDAL, 0UL)).yyyy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))((p_31 , ((*p_29) > l_632[1])), ((VECTOR(uint16_t, 2))(65535UL, 0x36FBL)), 0x4164L)))).lo)).yxyxxyxxxyyxxxyy)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 2))(l_669.s47)).yxxxxyxyxyxyyyxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x5673L, 65535UL)).xxxx)).xwxwxwyzzwwzyzww, ((VECTOR(uint16_t, 8))(l_670.xxxyxyxx)).s7247226057063063))).s7ba0)).yzwyzywyxwwxwwzz)))).s7a)).yxyxxyxyyyxxxyyy, ((VECTOR(uint16_t, 8))((safe_mul_func_int8_t_s_s((((void*)0 != &p_31) & (*p_29)), FAKE_DIVERGE(p_909->group_2_offset, get_group_id(2), 10))), 0xD03EL, ((VECTOR(uint16_t, 2))(1UL)), 0x25BFL, 0UL, 0UL, 0x3DBDL)).s6757541177547416))).s36df)), p_909->g_437[3][0][2], ((VECTOR(uint16_t, 2))(0xA342L)), 65529UL)).even))).hi)), 0x2DE6L, GROUP_DIVERGE(1, 1), 65531UL, 0x37EBL, 65528UL, 9UL, p_909->g_673[0][5][3], ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 4))(0x289CL)), 0x334EL)).s5a))))).xxyy)).y != p_909->g_82.z)) || p_909->g_674) > 0x0AC5C9BED9139A9FL) | 0xDC9F4378FF7A2DFEL) != p_909->g_673[1][3][2]), p_909->g_3))) | p_909->g_62.s7), 0x37L)));
                }
            }
        }
        (*l_292) = ((GROUP_DIVERGE(0, 1) < (+(safe_add_func_uint32_t_u_u((p_31 < (((&l_607 != (l_679 = l_679)) > p_909->g_225) , p_31)), ((safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 7)) != p_32))))) , func_94(p_32, (p_909->g_376 >= ((((((((*l_679) = (safe_mul_func_uint8_t_u_u((p_909->g_170.z = (((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_687.sc5)).xyxy)), (-3L), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(p_909->g_688.s2255547374504627)).s44, ((VECTOR(int8_t, 2))(0x6DL, (-1L)))))), 8L)), ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(l_689.wxxywwzxyxxwwwwz)).s43f2, ((VECTOR(int8_t, 2))(1L, 0x1FL)).xxxy))).z, ((VECTOR(int8_t, 2))(0x53L, 1L)), 0x10L)).xwyxxyzwwwzzxwww))).sf3dc))).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_690.xx)).yyyyxxxx)).s35))), 0L))))).s2, ((l_693.s5--) , (safe_add_func_int64_t_s_s(((((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(l_698.s0314)).hi, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_699.yyxy)).zyzywzwyxwyzwzzy)).s80))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_700.s2341)), 0x50L, (-1L), 0x1EL, 0x71L, 0L, p_31, (-7L), p_909->g_688.s2, 0x76L, p_31, (-7L), 3L)).se8))).hi ^ p_909->g_673[0][5][3]) >= p_31), (*p_909->g_131)))))) > p_909->g_457.z) , p_32)), p_31))) ^ p_909->g_107.f0) , p_909->g_673[0][5][3]) > p_32) >= p_31) & GROUP_DIVERGE(1, 1)) ^ p_909->g_701)), p_909));
        l_716 &= (((safe_lshift_func_int8_t_s_s(p_32, (&l_603 == ((*l_705) = l_704)))) , ((safe_sub_func_uint32_t_u_u(p_31, p_909->g_381)) == (safe_sub_func_int32_t_s_s((l_715 = (safe_div_func_int8_t_s_s((~(safe_add_func_int8_t_s_s((~((*l_679) = (((*l_292) = p_30) != (p_29 = func_33(p_909->g_138, p_30, p_29, p_29, p_29, p_909))))), 0L))), 0xE6L))), p_32)))) , (-1L));
    }
    return l_717;
}


/* ------------------------------------------ */
/* 
 * reads : p_909->g_43
 * writes:
 */
int32_t * func_33(int64_t  p_34, int32_t * p_35, int32_t * p_36, int32_t * p_37, int32_t * p_38, struct S1 * p_909)
{ /* block id: 10 */
    VECTOR(int32_t, 4) l_42 = (VECTOR(int32_t, 4))(0x757F54ABL, (VECTOR(int32_t, 2))(0x757F54ABL, 0L), 0L);
    int i;
    for (p_34 = 0; (p_34 >= (-24)); p_34 = safe_sub_func_int8_t_s_s(p_34, 4))
    { /* block id: 13 */
        int32_t l_44[9];
        int32_t l_45 = 0L;
        int i;
        for (i = 0; i < 9; i++)
            l_44[i] = 0x2BA10F40L;
        l_45 = (l_44[5] = ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_42.yyzz)).even, ((VECTOR(int32_t, 16))(p_909->g_43.sfbf3f079038991f3)).s2a))).even);
    }
    return &p_909->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_909->g_294 p_909->g_303 p_909->g_131 p_909->g_132 p_909->g_208 p_909->g_3 p_909->g_190 p_909->g_43 p_909->g_79 p_909->g_116 p_909->g_120 p_909->g_86 p_909->g_23 p_909->g_119 p_909->g_74 p_909->g_83 p_909->g_138 p_909->g_373 p_909->g_85 p_909->g_80 p_909->g_133 p_909->g_196 p_909->g_447 p_909->g_455 p_909->g_457 p_909->g_471 p_909->g_104 p_909->g_491 p_909->g_381 p_909->g_503 p_909->g_391 p_909->g_410 p_909->g_67
 * writes: p_909->g_116 p_909->g_79 p_909->g_196 p_909->g_120 p_909->g_138 p_909->g_170 p_909->g_208 p_909->g_133 p_909->g_174 p_909->g_107 p_909->g_447 p_909->g_132 p_909->g_381 p_909->g_503 p_909->g_376 p_909->g_410
 */
uint16_t  func_57(int32_t * p_58, int32_t ** p_59, struct S1 * p_909)
{ /* block id: 123 */
    uint32_t l_293 = 4294967290UL;
    int16_t *l_304 = (void*)0;
    VECTOR(int16_t, 4) l_316 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2D79L), 0x2D79L);
    int32_t l_333 = 0x3E304595L;
    int32_t l_378[10][3][3] = {{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}},{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}},{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}},{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}},{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}},{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}},{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}},{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}},{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}},{{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L},{0x50D5812FL,0x50D5812FL,4L}}};
    int32_t *l_420[1][1][8];
    VECTOR(int8_t, 16) l_480 = (VECTOR(int8_t, 16))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 1L), 1L), 1L, 0x7DL, 1L, (VECTOR(int8_t, 2))(0x7DL, 1L), (VECTOR(int8_t, 2))(0x7DL, 1L), 0x7DL, 1L, 0x7DL, 1L);
    VECTOR(uint32_t, 4) l_484 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0UL), 0UL);
    uint32_t **l_506 = &p_909->g_504;
    uint32_t **l_508 = (void*)0;
    int64_t *l_526[7];
    VECTOR(uint64_t, 4) l_527 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xC02549B458EB24EFL), 0xC02549B458EB24EFL);
    int32_t ***l_533 = (void*)0;
    int32_t ****l_532 = &l_533;
    int32_t l_541 = (-7L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
                l_420[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 7; i++)
        l_526[i] = (void*)0;
    if (l_293)
    { /* block id: 124 */
        uint32_t l_315 = 0x77CF98A6L;
        int32_t l_331 = 0x1386D79EL;
        VECTOR(uint32_t, 2) l_332 = (VECTOR(uint32_t, 2))(0x7B5D0421L, 4294967295UL);
        int8_t *l_334 = &p_909->g_116;
        int64_t *l_335 = (void*)0;
        int64_t *l_336[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t *l_337 = &p_909->g_196;
        int16_t *l_338 = (void*)0;
        int16_t *l_339 = (void*)0;
        int16_t *l_340 = (void*)0;
        int16_t *l_341 = (void*)0;
        int16_t *l_342 = (void*)0;
        int16_t *l_343 = (void*)0;
        int16_t *l_344 = (void*)0;
        int16_t *l_345 = (void*)0;
        int16_t l_346 = 0x2C45L;
        VECTOR(uint8_t, 2) l_356 = (VECTOR(uint8_t, 2))(0xF5L, 0x2CL);
        VECTOR(int32_t, 16) l_379 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x0F6BB181L), 0x0F6BB181L), 0x0F6BB181L, 8L, 0x0F6BB181L, (VECTOR(int32_t, 2))(8L, 0x0F6BB181L), (VECTOR(int32_t, 2))(8L, 0x0F6BB181L), 8L, 0x0F6BB181L, 8L, 0x0F6BB181L);
        int32_t l_380 = 0L;
        VECTOR(uint16_t, 2) l_382 = (VECTOR(uint16_t, 2))(0x5EA1L, 1UL);
        int16_t l_396 = 0x4270L;
        int32_t ***l_404 = &p_909->g_103[1][0][4];
        int i;
        if (((((VECTOR(uint64_t, 4))(p_909->g_294.yxxy)).z >= ((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((p_909->g_303 != l_304), (safe_mod_func_uint8_t_u_u(0UL, (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((p_909->g_120.w ^= (safe_add_func_uint32_t_u_u((l_315 != (*p_909->g_131)), ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_316.yyyz)).yzxwwwwx)).even, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(0x0BL, 0L)).xyyyxxyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0L, 1L)).yxyyxyxyyxyxxxyy)).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-1L), 1L)), ((*l_337) = (safe_rshift_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((p_909->g_208 || 0x3D9FL), (p_909->g_79.s4 &= (((safe_mod_func_uint64_t_u_u(l_316.w, (safe_rshift_func_int8_t_s_s(((*l_334) = (~((((safe_lshift_func_int8_t_s_s((((l_333 = (((~((safe_sub_func_int64_t_s_s(((((safe_div_func_int16_t_s_s((l_331 = (0xC22D8041L || l_316.w)), l_315)) < (*p_58)) < 0xC6F5L) <= 0x04L), (*p_909->g_131))) && l_315)) ^ l_332.y) , l_316.x)) && (-5L)) != l_316.z), l_332.x)) || (-1L)) , p_909->g_190[0]) < p_909->g_43.sb))), l_332.y)))) != 0x28L) >= 255UL)))) >= 0x0C1E4A8EL), FAKE_DIVERGE(p_909->global_2_offset, get_global_id(2), 10)))), l_331, p_909->g_116, (-10L), 0x68L, (-1L)))))), ((VECTOR(int8_t, 8))(0x71L))))).s4115062406264526, ((VECTOR(int8_t, 16))(0x64L))))))))).even)).hi)).lo, ((VECTOR(uint8_t, 2))(0x7FL))))).yyyx))), ((VECTOR(int16_t, 4))(3L))))).zzwywzyz))).even, ((VECTOR(uint16_t, 4))(0x2DF2L))))).w))), p_909->g_86.x)), 1)), p_909->g_23.s1)))))), l_316.z)) != p_909->g_119.s1), p_909->g_74.y)) & l_346) <= (-8L)), l_316.w)) != l_316.w)) >= l_332.y))
        { /* block id: 131 */
            int8_t l_347 = 3L;
            uint8_t *l_363 = (void*)0;
            uint8_t *l_364 = (void*)0;
            uint8_t *l_365 = (void*)0;
            uint8_t *l_366 = (void*)0;
            uint8_t *l_367 = (void*)0;
            uint8_t *l_368 = (void*)0;
            uint8_t *l_369 = (void*)0;
            uint8_t *l_370 = (void*)0;
            uint8_t l_371 = 1UL;
            uint32_t *l_372 = &p_909->g_138;
            int16_t l_374 = 0x1E40L;
            l_374 = (((-3L) && l_347) | ((safe_rshift_func_uint8_t_u_s((l_331 <= l_316.z), 4)) || (FAKE_DIVERGE(p_909->local_1_offset, get_local_id(1), 10) && ((p_909->g_83.s6 < ((safe_sub_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_356.xyyx)).z, (p_909->g_170.y = ((safe_mul_func_uint16_t_u_u(0UL, ((((*l_372) |= (((VECTOR(int32_t, 2))((-1L), 0x6CE7FAF8L)).lo != (safe_add_func_uint16_t_u_u(0xCB83L, (l_356.x & ((((((l_331 ^= (safe_mul_func_uint8_t_u_u((l_333 = l_315), p_909->g_190[0]))) != l_316.y) != l_293) <= l_316.z) , l_316.w) ^ l_371)))))) != p_909->g_373) < l_332.y))) , l_371)))), l_315)) > l_347), p_909->g_85.w)) | l_371)) & p_909->g_120.w))));
        }
        else
        { /* block id: 137 */
            int32_t *l_375 = (void*)0;
            int32_t *l_377[1];
            int32_t *l_419[7][4][3] = {{{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]}},{{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]}},{{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]}},{{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]}},{{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]}},{{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]}},{{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]},{&l_378[9][0][2],&l_378[9][0][2],&l_378[9][0][2]}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_377[i] = &p_909->g_225;
            --l_382.x;
            for (p_909->g_138 = 0; (p_909->g_138 < 36); ++p_909->g_138)
            { /* block id: 141 */
                uint16_t *l_397 = (void*)0;
                uint16_t *l_398 = &p_909->g_208;
                uint16_t *l_399 = &p_909->g_133;
                int32_t ****l_405 = &l_404;
                uint16_t *l_408[8][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                int32_t **l_409 = &l_377[0];
                uint8_t *l_413 = (void*)0;
                uint8_t *l_414[5][6][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                VECTOR(int16_t, 2) l_415 = (VECTOR(int16_t, 2))(0x116AL, 2L);
                int32_t **l_416 = (void*)0;
                int32_t **l_417 = (void*)0;
                int32_t **l_418 = &l_375;
                int i, j, k;
                l_331 ^= (safe_div_func_uint32_t_u_u((l_356.y && (0x4AD97F16B0BA3B4CL | ((safe_add_func_uint16_t_u_u((((VECTOR(uint16_t, 16))(p_909->g_391.s5164301776253472)).s3 != (&p_909->g_104 == &p_909->g_179)), (((VECTOR(uint64_t, 2))(0xD9F22D7F3CA26143L, 0xE3DEF98FE76E5863L)).even != (safe_add_func_uint8_t_u_u(p_909->g_120.w, (-1L)))))) | (l_316.x , p_909->g_23.s5)))), (l_379.s0 = (safe_lshift_func_int16_t_s_u(p_909->g_80.w, GROUP_DIVERGE(2, 1))))));
                (*l_409) = ((p_909->g_119.s6 ^ (l_333 &= (0x3B9D18D5E8E1C5BBL >= (((*l_399) = ((*l_398) = l_396)) && ((((*l_399) &= GROUP_DIVERGE(0, 1)) >= ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))((~((*p_909->g_131) , (safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((((*l_405) = l_404) == ((0xE01730047A4CCAD0L != (((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))((l_378[8][0][0] , (safe_lshift_func_uint16_t_u_s(((*p_909->g_131) | l_356.x), p_909->g_294.y))), 4294967286UL, 0x4E56962FL, 0x8D402E76L)))).zwxwwyxxxyxzxzzy, ((VECTOR(uint32_t, 16))(4294967295UL)), ((VECTOR(uint32_t, 16))(0x685CFD57L))))), ((VECTOR(uint32_t, 16))(0x1F8CD6ECL))))).s9 , GROUP_DIVERGE(1, 1))) , &p_59)) ^ (-9L)), 7L)), 11)))), p_909->g_86.x, 0x8562L, 65535UL)), ((VECTOR(uint16_t, 4))(65535UL)), ((VECTOR(uint16_t, 4))(0x7E6FL))))).y) > p_909->g_86.x))))) , &l_378[8][0][0]);
                l_420[0][0][5] = func_33((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))((-1L), 8L, 0x48L, 0x56L)).yzwxxxyw, ((VECTOR(int8_t, 4))(p_909->g_410.wywy)).xwxxwyxw))))).s3 || l_378[0][1][0]), ((safe_div_func_uint8_t_u_u(p_909->g_119.s6, (p_909->g_174.x = p_909->g_86.w))) , ((*l_409) = p_58)), (l_415.y , (void*)0), ((*l_418) = p_58), l_419[5][0][1], p_909);
            }
            if ((atomic_inc(&p_909->g_atomic_input[59 * get_linear_group_id() + 48]) == 5))
            { /* block id: 156 */
                int32_t l_421[1][5][2] = {{{0x56569F3FL,0x56569F3FL},{0x56569F3FL,0x56569F3FL},{0x56569F3FL,0x56569F3FL},{0x56569F3FL,0x56569F3FL},{0x56569F3FL,0x56569F3FL}}};
                int i, j, k;
                for (l_421[0][0][0] = 23; (l_421[0][0][0] <= (-7)); l_421[0][0][0] = safe_sub_func_uint64_t_u_u(l_421[0][0][0], 4))
                { /* block id: 159 */
                    int32_t l_425 = 1L;
                    int32_t *l_424 = &l_425;
                    int32_t *l_426[10] = {&l_425,&l_425,&l_425,&l_425,&l_425,&l_425,&l_425,&l_425,&l_425,&l_425};
                    int32_t *l_427 = &l_425;
                    int i;
                    l_427 = (FAKE_DIVERGE(p_909->group_2_offset, get_group_id(2), 10) , (l_426[1] = l_424));
                }
                unsigned int result = 0;
                int l_421_i0, l_421_i1, l_421_i2;
                for (l_421_i0 = 0; l_421_i0 < 1; l_421_i0++) {
                    for (l_421_i1 = 0; l_421_i1 < 5; l_421_i1++) {
                        for (l_421_i2 = 0; l_421_i2 < 2; l_421_i2++) {
                            result += l_421[l_421_i0][l_421_i1][l_421_i2];
                        }
                    }
                }
                atomic_add(&p_909->g_special_values[59 * get_linear_group_id() + 48], result);
            }
            else
            { /* block id: 163 */
                (1 + 1);
            }
        }
        for (l_380 = 0; (l_380 <= 28); l_380 = safe_add_func_uint64_t_u_u(l_380, 2))
        { /* block id: 169 */
            int32_t **l_430 = &l_420[0][0][7];
            (*l_430) = p_58;
            (*l_430) = (*l_430);
        }
        l_379.s9 &= ((VECTOR(int32_t, 2))(0x7B0EB3A3L, (-1L))).odd;
    }
    else
    { /* block id: 174 */
        struct S0 l_435 = {0x604DD959B290ACB5L};
        int32_t l_438 = 0x39DA72AAL;
        int32_t l_443[10][5][5] = {{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}},{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}},{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}},{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}},{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}},{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}},{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}},{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}},{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}},{{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L},{2L,1L,1L,2L,5L}}};
        VECTOR(int8_t, 8) l_481 = (VECTOR(int8_t, 8))(0x6BL, (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, (-1L)), (-1L)), (-1L), 0x6BL, (-1L));
        int16_t *l_500 = (void*)0;
        int16_t *l_501 = (void*)0;
        int16_t *l_502 = &p_909->g_381;
        uint32_t ***l_505 = &p_909->g_503;
        uint32_t **l_507 = &p_909->g_504;
        int32_t l_509 = 0x0069C359L;
        int16_t *l_510 = (void*)0;
        int16_t *l_511 = (void*)0;
        int16_t *l_512 = &p_909->g_376;
        int32_t l_513 = 0L;
        int i, j, k;
        for (l_293 = (-14); (l_293 < 4); ++l_293)
        { /* block id: 177 */
            int32_t l_439 = (-1L);
            int32_t l_440 = (-7L);
            int32_t l_442 = 0x1E218B16L;
            uint32_t l_444 = 6UL;
            for (p_909->g_196 = 6; (p_909->g_196 > 16); p_909->g_196++)
            { /* block id: 180 */
                struct S0 *l_436[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_441 = 0x6E2E8881L;
                int32_t *l_453[9] = {&l_442,&l_442,&l_442,&l_442,&l_442,&l_442,&l_442,&l_442,&l_442};
                int i, j;
                p_909->g_107 = l_435;
                ++l_444;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_909->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[(safe_mod_func_uint32_t_u_u(4294967295UL, 10))][(safe_mod_func_uint32_t_u_u(p_909->tid, 15))]));
                if (l_443[5][3][4])
                { /* block id: 186 */
                    uint8_t l_448 = 0x5FL;
                    p_909->g_447 |= (*p_58);
                    if (l_448)
                        break;
                }
                else
                { /* block id: 189 */
                    int64_t l_451 = 0x790B73829D114A0DL;
                    int32_t ***l_470 = &p_909->g_103[1][4][3];
                    int32_t ****l_469 = &l_470;
                    int32_t l_472 = 0x0958D68BL;
                    uint16_t l_473 = 0UL;
                    for (p_909->g_132 = 7; (p_909->g_132 != 16); p_909->g_132 = safe_add_func_int32_t_s_s(p_909->g_132, 1))
                    { /* block id: 192 */
                        int32_t *l_452 = &l_443[3][4][4];
                        VECTOR(int32_t, 16) l_454 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-6L)), (-6L)), (-6L), (-3L), (-6L), (VECTOR(int32_t, 2))((-3L), (-6L)), (VECTOR(int32_t, 2))((-3L), (-6L)), (-3L), (-6L), (-3L), (-6L));
                        int64_t *l_456[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_456[i] = &p_909->g_107.f0;
                        l_453[4] = func_33(l_451, p_58, l_452, &l_442, &l_440, p_909);
                        l_443[4][1][4] = (~((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_454.s00e07e42c4773cfb)).s02, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(0x15FC312FL, 0x3842D3CFL)).xxyx, (int32_t)((l_438 = (0xE7862A6D230580DBL | ((VECTOR(int64_t, 16))(p_909->g_455.sb1dff49cd1855226)).s6)) && 0x47A5E59ED52FCEBCL)))).even, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(p_909->g_457.wxwzzyxywxzxxwzx)).s2f, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))((-1L), 0x6B976835L)).xyxy, (int32_t)(l_456[0] != (void*)0)))), (safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), ((safe_add_func_int64_t_s_s((+((0x25L ^ (safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((void*)0 != l_469) != (p_909->g_471 != (void*)0)) && 0L), 0x4E26L)), 4)))) , l_435.f0), (*l_452)))) , (-4L))), p_909->g_116)) > l_442))), (*p_58), 1L, 0x78913C14L, 1L, (*p_909->g_104), l_443[7][3][3], ((VECTOR(int32_t, 2))((-1L))), 0x665BF9A0L, (-1L), 0L)).s97b2))).xxzzywxw)), 0x0A39C683L, (*p_58), 0x2296C44EL, ((VECTOR(int32_t, 2))(0x520A6631L)), 0x150F8EDFL, 0x13EAF8B6L, (-3L))).sfa))), 0x412CE1D6L, 0x17FF21B5L)).yxyxzwzxwywxxzxx, ((VECTOR(int32_t, 16))((-8L))), ((VECTOR(int32_t, 16))((-2L)))))).sec57, ((VECTOR(int32_t, 4))(9L))))).lo))).yyxxyyxy)).s2);
                        l_442 = 0x7F01EADBL;
                        if ((*p_909->g_104))
                            break;
                    }
                    l_443[3][1][4] ^= ((void*)0 != p_58);
                    l_473--;
                }
            }
        }
        l_513 |= ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(5UL, 0x9AA9F0A7L)).lo, (p_909->g_138++), 4294967289UL, 0x3649E683L)).z ^ (((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(0x40L, 0x4BL)), ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-2L), (-1L))))).yyyxxyxy, ((VECTOR(int8_t, 8))(l_480.se04f6356)), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(0x2CL, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-8L), 6L)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(l_481.s6730023657663343)).sd386, (int8_t)(((l_443[1][1][1] , l_481.s5) & (((VECTOR(uint32_t, 4))(l_484.yxzw)).y == ((((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((l_438 = GROUP_DIVERGE(1, 1)) != ((VECTOR(int32_t, 16))(p_909->g_491.yxxyyxxyxxyyxxyy)).s5), 6)), (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 16))(0x18L, (safe_rshift_func_int16_t_s_u((((safe_add_func_uint32_t_u_u(((((*l_512) = (safe_rshift_func_int16_t_s_u(((*l_502) ^= (&l_443[3][1][2] == (void*)0)), ((((l_509 = ((((l_506 = ((*l_505) = p_909->g_503)) != (l_508 = l_507)) , &l_443[8][3][0]) != (void*)0)) < 0L) , l_443[8][3][0]) == 0x57L)))) & p_909->g_23.sd) != p_909->g_83.s4), l_443[8][3][0])) > 9UL) ^ 0xE3L), 6)), 1L, 0x69L, ((VECTOR(int8_t, 8))(0x2BL)), ((VECTOR(int8_t, 4))(0x4FL)))), ((VECTOR(int8_t, 16))((-10L)))))).even, ((VECTOR(int8_t, 8))(0L))))).s1, p_909->g_79.s7)))) , (void*)0) == (void*)0), l_481.s4)) ^ l_481.s5) != 0UL) > p_909->g_391.s3))) >= l_481.s7)))), p_909->g_381, ((VECTOR(int8_t, 8))(0x15L)), p_909->g_3, 0x69L, (-8L))).s11, ((VECTOR(int8_t, 2))(0x33L))))), l_438, p_909->g_491.x, 8L, 0x4EL)).s43, ((VECTOR(int8_t, 2))(0x07L))))), 0x18L)).odd, ((VECTOR(int8_t, 2))(0x66L))))).xxyxxyxy))))).odd)), p_909->g_23.sc, 0x6CL, ((VECTOR(int8_t, 2))(0x5FL)), 1L, l_435.f0, ((VECTOR(int8_t, 2))(0x5FL)), ((VECTOR(int8_t, 2))(0x07L)), (-1L), (-1L))).sdb31, ((VECTOR(int8_t, 4))(2L))))).hi))).xxxyxxxy))))))).s7, l_443[8][3][0])) == 2UL) <= 0x17L)) >= p_909->g_410.w);
    }
    for (p_909->g_196 = 4; (p_909->g_196 == (-3)); p_909->g_196--)
    { /* block id: 216 */
        uint8_t l_516 = 0xC8L;
        int32_t l_522 = 7L;
        int16_t *l_523 = (void*)0;
        int8_t *l_534 = &p_909->g_116;
        int8_t *l_535 = (void*)0;
        int8_t *l_536 = (void*)0;
        int8_t *l_537 = (void*)0;
        int8_t *l_538 = (void*)0;
        int8_t *l_539 = (void*)0;
        int32_t *l_540 = (void*)0;
        l_516 = ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(7L, 0x354AE6C7L)).yxyyxxxx, ((VECTOR(int32_t, 2))(9L, 0x460A2B42L)).xxyyxyxx))).s7;
        p_58 = (l_540 = func_33((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_516, (p_909->g_410.y &= ((*l_534) = ((safe_unary_minus_func_int32_t_s((l_522 ^= (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(8UL, 0xFEL)))).even , (*p_909->g_104))))) , (((void*)0 != l_523) | (safe_add_func_uint16_t_u_u((l_516 , (p_909->g_131 == l_526[4])), (((l_522 <= ((VECTOR(uint64_t, 16))(l_527.ywxwxyxwyyxywzww)).s2) & (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((((FAKE_DIVERGE(p_909->group_0_offset, get_group_id(0), 10) , ((void*)0 != l_532)) <= 0x1CC3L) && 0x7E551A7FL), l_522)), 0x25D7L))) <= p_909->g_116))))))))), p_909->g_133)), p_58, l_540, p_58, p_58, p_909));
    }
    l_541 ^= 0x65C2C21DL;
    return p_909->g_455.sf;
}


/* ------------------------------------------ */
/* 
 * reads : p_909->g_79 p_909->g_80 p_909->g_82 p_909->g_83 p_909->g_85 p_909->g_86 p_909->g_103 p_909->g_107 p_909->g_104 p_909->g_3 p_909->g_116 p_909->g_23 p_909->g_119 p_909->g_120 p_909->g_123 p_909->g_131 p_909->g_133 p_909->g_132 p_909->l_comm_values p_909->g_170 p_909->g_174 p_909->g_62 p_909->g_179 p_909->g_43
 * writes: p_909->g_43 p_909->g_116 p_909->g_133 p_909->g_138 p_909->g_123 p_909->g_179 p_909->g_132 p_909->g_190 p_909->g_120 p_909->g_196 p_909->g_250 p_909->g_104
 */
int64_t  func_76(int32_t * p_77, struct S1 * p_909)
{ /* block id: 29 */
    VECTOR(int64_t, 4) l_81 = (VECTOR(int64_t, 4))(0x75970FBD1CB9B5B5L, (VECTOR(int64_t, 2))(0x75970FBD1CB9B5B5L, (-10L)), (-10L));
    VECTOR(int64_t, 4) l_84 = (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 8L), 8L);
    int32_t **l_112 = &p_909->g_104;
    int32_t l_252 = (-3L);
    int32_t l_256 = 0x3F19C15CL;
    VECTOR(uint32_t, 8) l_270 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0xCF5824F4L), 0xCF5824F4L), 0xCF5824F4L, 4294967288UL, 0xCF5824F4L);
    uint64_t *l_272 = (void*)0;
    VECTOR(int32_t, 8) l_283 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0B1FF474L), 0x0B1FF474L), 0x0B1FF474L, 1L, 0x0B1FF474L);
    int i;
    if ((((VECTOR(int32_t, 4))(8L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x28DCCB67L, (-7L))))), 0x2F00AFC6L)).z , 0x2708467EL))
    { /* block id: 30 */
        uint32_t l_97 = 1UL;
        int32_t ***l_113 = &l_112;
        int32_t **l_115 = &p_909->g_104;
        int32_t ***l_114 = &l_115;
        int64_t *l_249 = &p_909->g_250;
        int32_t **l_251 = &p_909->g_104;
        int32_t *l_253 = &l_252;
        int32_t *l_254 = (void*)0;
        int32_t *l_255 = &l_252;
        int32_t *l_257 = (void*)0;
        int32_t *l_258 = &p_909->g_225;
        int32_t *l_259 = (void*)0;
        int32_t *l_260 = (void*)0;
        int32_t *l_261 = (void*)0;
        uint32_t l_262 = 0UL;
        (*l_251) = func_33(((*l_249) = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(p_909->g_79.s43)).yyyx, ((VECTOR(int64_t, 8))(p_909->g_80.xyyyzzxx)).hi))), (int64_t)((VECTOR(int64_t, 8))(l_81.wzwxzwxx)).s7))).hi, ((VECTOR(int64_t, 16))(p_909->g_82.xxzxwwzwyzzyzwzw)).sf9))).xyyyyyxyxyxyxxyx)).s64))), 0x70F443C0C33ADB54L, 0x6D5CAB5B2332F7F6L)).wyxzxwyy, ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(0x3CB33D27CF1A457CL, 0x196B4A016C9CC5FAL)).xxxyyyxxyxxyyyxx, ((VECTOR(int64_t, 2))(p_909->g_83.s25)).yyyyyxyyxyyxxyxy))).hi)), ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(l_84.yxywywyw)).odd, ((VECTOR(int64_t, 4))(0x7E01DFB5DA3FE182L, ((VECTOR(int64_t, 2))(2L, 7L)), 0x470FE6C1E6BC9521L))))).xywxwxwy)))))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 2))((-6L), 1L)).yxxx, ((VECTOR(int64_t, 2))(0x26B01F1F5868DEE4L, (-5L))).xxxx))).xywwxwxy)).s6, 0x280F5DD30C446B92L, 0x077F077B29079C9DL, 0L, ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 16))(p_909->g_85.xwyyzxywxwyyzyxw)).s37, ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_909->g_86.yxxw)).wxzwwywywwyzxxwx)).s9b)).xyxx, (int64_t)func_87(func_91(func_94(p_909->g_80.x, l_97, p_909), p_77, p_909), p_77, (safe_mod_func_int32_t_s_s((p_909->g_107 , (((((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((((&p_909->g_104 == ((*l_114) = ((*l_113) = l_112))) || (***l_114)) | 0x4C5E4B60272E8F47L) || 0x5ECC6E98L) , (**l_112)), l_81.x)), 2L)) <= 0x3E6BB753L) != l_81.x) , p_909->g_116) , (**l_112))), p_909->g_23.sb)), p_909)))), ((VECTOR(int64_t, 4))(0x3F4AED43BFEEABC6L))))))))).zwywwwxxxwwyzwwx, ((VECTOR(int64_t, 16))(0x277A25A86136CE82L))))).s66, ((VECTOR(int64_t, 2))((-7L))))))))), 1L, 0x0F73E7C08E44603CL)), 1L, ((VECTOR(int64_t, 8))(6L)), ((VECTOR(int64_t, 2))(0x5F70743EE978D436L)), 0x7E97366C97C41DA4L)).s9ac6, ((VECTOR(int64_t, 4))(0x315D3C8734C3B89EL))))))), ((VECTOR(int64_t, 16))(0x3670792597C3996EL)), ((VECTOR(int64_t, 16))(2L))))).s49f3)), ((VECTOR(int64_t, 8))(0x28AFE621D3B27F0AL)), ((VECTOR(int64_t, 2))(0x25C4B519BC063194L)), 0x67FF3C31E116E148L, 0x51DF26746A294085L)).s52, ((VECTOR(int64_t, 2))(0x517722493428787CL))))).even, ((VECTOR(int64_t, 2))((-1L))), ((VECTOR(int64_t, 2))(0x4A5278A2FBE5F42FL)), 0x5A1B2EFBE026D569L, 0x58ADD9C130DE4521L, 9L, (**l_115), ((VECTOR(int64_t, 4))(0x77E6923AC2437B8CL)), 5L, 0x45821A03C43AEFF4L, 0x34455F90A5D42A52L)).s5), p_77, p_77, p_77, p_77, p_909);
        ++l_262;
    }
    else
    { /* block id: 105 */
        (*l_112) = (*l_112);
        (*l_112) = func_33(p_909->g_62.s5, p_77, p_77, ((p_909->g_43.s3 != ((safe_unary_minus_func_uint8_t_u((**l_112))) , (&p_909->g_132 == &p_909->g_132))) , ((*l_112) = p_77)), p_77, p_909);
    }
    for (l_252 = 0; (l_252 > 10); l_252 = safe_add_func_int32_t_s_s(l_252, 8))
    { /* block id: 112 */
        uint64_t *l_271 = &p_909->g_132;
        uint64_t *l_273 = &p_909->g_132;
        int32_t *l_274[5][7] = {{&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225},{&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225},{&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225},{&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225},{&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225,&p_909->g_225}};
        uint32_t l_275 = 1UL;
        int16_t *l_281 = (void*)0;
        int16_t *l_282 = (void*)0;
        int i, j;
        l_283.s0 = (safe_mul_func_int16_t_s_s((**l_112), (p_909->g_120.z = (!((GROUP_DIVERGE(2, 1) | (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_270.s30)))).lo & (l_256 = (l_275 = (l_271 != (l_273 = l_272)))))) | (safe_mod_func_uint32_t_u_u(0xA723D827L, (safe_div_func_int8_t_s_s((((safe_unary_minus_func_uint64_t_u(((-4L) ^ (FAKE_DIVERGE(p_909->global_2_offset, get_global_id(2), 10) && 0x5F46E2FC318F7372L)))) >= (0x2601L == ((**l_112) , p_909->g_119.se))) != (**l_112)), p_909->g_85.z)))))))));
    }
    return p_909->g_23.sf;
}


/* ------------------------------------------ */
/* 
 * reads : p_909->g_116 p_909->g_119 p_909->g_120 p_909->g_123 p_909->g_80 p_909->g_131 p_909->g_133 p_909->g_3 p_909->g_82 p_909->g_132 p_909->l_comm_values p_909->g_85 p_909->g_170 p_909->g_174 p_909->g_107.f0 p_909->g_62 p_909->g_179 p_909->g_104 p_909->g_83 p_909->g_43
 * writes: p_909->g_116 p_909->g_133 p_909->g_138 p_909->g_123 p_909->g_179 p_909->g_132 p_909->g_190 p_909->g_120 p_909->g_196
 */
int64_t  func_87(int32_t ** p_88, int32_t * p_89, int32_t  p_90, struct S1 * p_909)
{ /* block id: 39 */
    uint8_t l_124 = 0xA6L;
    int8_t l_139 = 0x62L;
    int32_t *l_159 = &p_909->g_3;
    int32_t l_163 = (-10L);
    VECTOR(int64_t, 8) l_165 = (VECTOR(int64_t, 8))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), (-9L)), (-9L)), (-9L), (-7L), (-9L));
    VECTOR(uint8_t, 4) l_171 = (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0xE0L), 0xE0L);
    VECTOR(uint32_t, 16) l_173 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 1UL, 4294967295UL, 1UL, 4294967295UL);
    uint32_t l_187[5][7][7] = {{{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL}},{{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL}},{{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL}},{{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL}},{{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL},{0x51A69871L,5UL,4294967295UL,0x1DE7B98AL,0xB97A4792L,0x94957B35L,0xEE038D1FL}}};
    int32_t l_219[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int i, j, k;
    for (p_909->g_116 = (-15); (p_909->g_116 != (-4)); p_909->g_116 = safe_add_func_uint16_t_u_u(p_909->g_116, 4))
    { /* block id: 42 */
        VECTOR(int16_t, 16) l_121 = (VECTOR(int16_t, 16))(0x6107L, (VECTOR(int16_t, 4))(0x6107L, (VECTOR(int16_t, 2))(0x6107L, 0x1B8AL), 0x1B8AL), 0x1B8AL, 0x6107L, 0x1B8AL, (VECTOR(int16_t, 2))(0x6107L, 0x1B8AL), (VECTOR(int16_t, 2))(0x6107L, 0x1B8AL), 0x6107L, 0x1B8AL, 0x6107L, 0x1B8AL);
        VECTOR(uint8_t, 8) l_122 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        uint64_t *l_136 = &p_909->g_132;
        uint32_t *l_137 = &p_909->g_138;
        VECTOR(int8_t, 8) l_148 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L));
        int32_t l_150 = 0x736F6A9FL;
        int32_t *l_158 = (void*)0;
        int32_t l_162 = 0x1C6798BEL;
        VECTOR(int64_t, 8) l_164 = (VECTOR(int64_t, 8))(0x2A8F979C1DC01494L, (VECTOR(int64_t, 4))(0x2A8F979C1DC01494L, (VECTOR(int64_t, 2))(0x2A8F979C1DC01494L, 0x0FE0D3B134FB932FL), 0x0FE0D3B134FB932FL), 0x0FE0D3B134FB932FL, 0x2A8F979C1DC01494L, 0x0FE0D3B134FB932FL);
        VECTOR(uint32_t, 4) l_172 = (VECTOR(uint32_t, 4))(0x4D5146EAL, (VECTOR(uint32_t, 2))(0x4D5146EAL, 0x4662F551L), 0x4662F551L);
        int32_t l_221 = 0x1913B5FBL;
        int32_t l_222 = 1L;
        VECTOR(int32_t, 4) l_223 = (VECTOR(int32_t, 4))(0x23292492L, (VECTOR(int32_t, 2))(0x23292492L, (-1L)), (-1L));
        int i;
        if (((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(p_909->g_119.s19e5)).odd, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((-1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(5L, 0L)), 0x0BC1L, 0x4AB5L)), ((VECTOR(int16_t, 8))(p_909->g_120.zwxwywxw)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_121.s4d6da33b)).s55)), 9L)))), (int16_t)0x6CCBL, (int16_t)(p_90 & l_121.s9)))).s17)).xyxyxyyxyyyxxyyy, ((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(l_122.s4370)).zxwywyyzxwyxzxyw, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(p_909->g_123.yy)), ((VECTOR(uint8_t, 4))(((l_124 , (((~(safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_909->group_2_offset, get_group_id(2), 10), ((0x02797321L >= ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_909->g_80.x, (p_909->g_131 != &p_909->g_132))), 5)) , (--p_909->g_133))) && ((*l_137) = (&p_909->g_132 == l_136)))))) == 0x3B09L) < p_90)) < 0x1EF98699A9D7EB52L), ((VECTOR(uint8_t, 2))(0xCDL)), 0UL)).hi, ((VECTOR(uint8_t, 2))(255UL))))).yyxyyxxxyxxyyyyy)).s7, 0UL, ((VECTOR(uint8_t, 4))(252UL)), l_139, ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 4))(248UL)), 252UL))))).s9a)).yyxxxyyxxyxxxxyx, ((VECTOR(uint16_t, 16))(0x03EBL))))), ((VECTOR(uint16_t, 16))(0xBDEAL)))))))).s83, ((VECTOR(int32_t, 2))((-1L)))))).xyxxxyxx)).hi)), (-1L), 0x0020A6BAL, 6L, 0x26DBE899L)).s1167101751523255, ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))((-1L)))))).hi, ((VECTOR(int32_t, 8))(0L))))).s6134505317335140, ((VECTOR(int32_t, 16))(0x5190E703L)), ((VECTOR(int32_t, 16))((-2L)))))).hi, ((VECTOR(int32_t, 8))(4L))))).s63, ((VECTOR(int32_t, 2))(9L))))).even)
        { /* block id: 45 */
            VECTOR(int16_t, 8) l_142 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
            int32_t *l_149[3][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            VECTOR(uint64_t, 4) l_155 = (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 18446744073709551615UL), 18446744073709551615UL);
            int32_t **l_160[8][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            uint16_t *l_161 = (void*)0;
            VECTOR(int64_t, 8) l_166 = (VECTOR(int64_t, 8))(0x030DAD6C18F84039L, (VECTOR(int64_t, 4))(0x030DAD6C18F84039L, (VECTOR(int64_t, 2))(0x030DAD6C18F84039L, 2L), 2L), 2L, 0x030DAD6C18F84039L, 2L);
            VECTOR(uint16_t, 2) l_169 = (VECTOR(uint16_t, 2))(65526UL, 0UL);
            int i, j, k;
            l_163 = ((p_909->g_123.y--) || (p_909->g_123.x = (0xAF5FL != ((((l_162 ^= (((l_124 == (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_142.s02146555)).s2431702230414313)).sb <= (((!((FAKE_DIVERGE(p_909->group_2_offset, get_group_id(2), 10) ^ ((-7L) ^ l_142.s0)) && (((safe_unary_minus_func_int32_t_s((l_150 = (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_148.s1253)).w, p_90)), 65535UL))))) >= (safe_div_func_int32_t_s_s(((p_89 != (l_158 = func_33(p_90, (((((safe_add_func_uint64_t_u_u((((VECTOR(uint64_t, 4))(l_155.xwyy)).y == (safe_div_func_int8_t_s_s(((l_149[2][3][0] != (void*)0) == 0x34L), p_90))), l_139)) || 0x8C75DFA5EDEFCC24L) && l_124) == 0x7EL) , l_158), l_159, p_89, l_137, p_909))) & (*l_159)), l_148.s2))) ^ p_909->g_82.x))) || (*p_909->g_131)) & FAKE_DIVERGE(p_909->global_0_offset, get_global_id(0), 10)))) , p_909->l_comm_values[(safe_mod_func_uint32_t_u_u(p_909->tid, 15))]) == 0x20D3CC9FF2BBDB72L)) < p_909->g_85.w) , &l_150) != p_89))));
            l_163 &= (((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 2))(l_164.s61)).xyxyyyxx, ((VECTOR(int64_t, 2))(0L, 8L)).yyyxyyxy))).s77)).yxxxxxxxxyyxyyxy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_165.s42)).xyxyxyxy)).s4071747565303107, ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_90, ((VECTOR(int64_t, 4))(l_166.s6056)), ((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(l_169.xyxxyxyyxyyyxxxy)).odd, ((VECTOR(uint16_t, 2))(0UL, 9UL)).yxxxyxxx))), 0x11C6L, 1UL, 1UL, 65535UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xB537L, 1UL)).xxyy)))).even)).s12)).yyxxxyxxxyxxxyxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(1UL, 0x55E6L, 0UL, 0xEC56L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(249UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 8))(p_909->g_170.ywxwyxwy)), ((VECTOR(uint8_t, 4))(l_171.xyzz)).zyzzxwyz, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(0x0FL, 6UL, (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(5UL, 5UL)).xyyx)), ((VECTOR(uint32_t, 16))(l_172.xxwwwzwxzyyzwxwy)).sde0b))).lo, ((VECTOR(uint32_t, 8))(l_173.sb1b3ae5e)).s31))).yxyyxxxyyyyyxxxy)).sc >= (*l_159)), 1UL, 0UL, ((VECTOR(uint8_t, 2))(0x1AL, 0x40L)), 0UL, ((VECTOR(uint8_t, 2))(1UL, 0x3FL)), 255UL, ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(p_909->g_174.xyyyyyyyyxyyyyyx)).s6fdf, ((VECTOR(uint8_t, 16))(((safe_sub_func_uint32_t_u_u((&p_88 != ((&p_909->g_132 == (void*)0) , &p_909->g_103[1][0][4])), (*l_159))) , (safe_add_func_int32_t_s_s((0x587D5FD9AC3D8670L | p_909->g_107.f0), l_172.x))), l_121.s6, 1UL, 0UL, p_909->g_62.s7, 0xC5L, 5UL, 0x33L, 0xF2L, 0x53L, ((VECTOR(uint8_t, 2))(0x39L)), 6UL, 0UL, 0x61L, 7UL)).s485a))), 0xB8L)).odd)).lo)).yxzyzxxz))).lo)), ((VECTOR(uint8_t, 2))(251UL)), 0xBFL)).s73, ((VECTOR(uint8_t, 2))(0UL))))))), ((VECTOR(uint16_t, 2))(0xE1FAL)), (*l_159), ((VECTOR(uint16_t, 2))(0UL)), p_90, p_90, ((VECTOR(uint16_t, 2))(0UL)), 65529UL)).hi)).s1556122271547313))).s9a))).hi, p_90)) , p_909->g_132), ((VECTOR(int64_t, 4))(0x079D23C0D81AC170L)), p_90, ((VECTOR(int64_t, 4))(1L)), 0L)).s3f)).yyyx)), ((VECTOR(int64_t, 4))(0x525718F321B60992L))))).xywywzzyzwxyyywx))).s7 < (*l_159));
            l_162 |= (0x129BF38967EEF1BCL & 0x2EA79D7E67C20CE6L);
        }
        else
        { /* block id: 54 */
            int32_t l_182 = 0L;
            int32_t l_193 = 0x6F7AD59DL;
            int32_t l_210[8] = {0x5F6773EDL,0x5F6773EDL,0x5F6773EDL,0x5F6773EDL,0x5F6773EDL,0x5F6773EDL,0x5F6773EDL,0x5F6773EDL};
            int32_t *l_232 = &p_909->g_225;
            int32_t *l_233 = (void*)0;
            int32_t *l_234 = &l_221;
            int32_t *l_235 = &l_193;
            int32_t *l_236 = &l_210[3];
            int32_t *l_237 = &l_222;
            int32_t *l_238 = (void*)0;
            int32_t *l_239[4];
            uint32_t l_240 = 4294967295UL;
            int i;
            for (i = 0; i < 4; i++)
                l_239[i] = &l_219[0];
            if (((VECTOR(int32_t, 2))(0x1DECECB7L, 0x16347A8CL)).odd)
            { /* block id: 55 */
                volatile int32_t **l_181 = &p_909->g_179;
                int32_t *l_183 = &l_163;
                (*l_181) = ((p_90 , 0x546C6D6545946B52L) , p_909->g_179);
                (*l_183) ^= ((l_182 = ((+((void*)0 != &p_909->g_138)) , (*p_909->g_104))) && 0x1E035591L);
            }
            else
            { /* block id: 59 */
                uint32_t l_209 = 0xD8E7D01AL;
                int32_t l_218[9][9][3] = {{{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)}},{{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)}},{{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)}},{{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)}},{{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)}},{{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)}},{{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)}},{{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)}},{{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)},{8L,8L,(-1L)}}};
                int i, j, k;
                for (p_909->g_132 = 0; (p_909->g_132 <= 54); ++p_909->g_132)
                { /* block id: 62 */
                    int32_t *l_186 = &l_163;
                    uint32_t **l_188 = (void*)0;
                    uint32_t *l_189 = &p_909->g_190[0];
                    uint8_t *l_191 = (void*)0;
                    uint8_t *l_192[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int16_t *l_194 = (void*)0;
                    int16_t *l_195[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t *l_197 = &l_187[4][5][3];
                    uint64_t *l_206 = (void*)0;
                    uint64_t *l_207 = (void*)0;
                    int32_t l_220 = 0x76D0D217L;
                    int32_t l_224[2][5][4] = {{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}}};
                    uint64_t l_226 = 0UL;
                    int i, j, k;
                    l_187[4][5][3] ^= ((*l_186) = (*p_909->g_104));
                    l_210[3] = ((((*l_189) = ((l_137 = p_89) == (void*)0)) , (p_909->g_83.s4 <= ((l_209 = ((*p_909->g_104) != (+((p_909->g_196 = (p_909->g_120.x |= ((l_193 ^= GROUP_DIVERGE(2, 1)) > p_90))) != ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))((((*l_197) = (*l_159)) & (safe_add_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_u((!(*l_186)), (safe_mod_func_int64_t_s_s((*l_186), (p_909->g_208 = (safe_lshift_func_uint16_t_u_s((((void*)0 == p_89) , 0x0EF8L), p_909->g_83.s4))))))) && p_90) & 0xA04A8153L) | (*l_159)), (-6L)))), ((VECTOR(uint16_t, 2))(0xBFA6L)), 0UL, 0x3B39L, 0xF896L, 65535UL, 0x639DL)), ((VECTOR(uint16_t, 8))(1UL)), ((VECTOR(uint16_t, 8))(0UL))))).s5)))) >= 0x101EA09A76C442C3L))) && 1L);
                    for (l_163 = (-21); (l_163 != 5); l_163++)
                    { /* block id: 76 */
                        int32_t *l_213 = &l_210[0];
                        int32_t *l_214 = &l_210[0];
                        int32_t *l_215 = &l_150;
                        int32_t *l_216 = (void*)0;
                        int32_t *l_217[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        uint32_t l_229 = 0xFCC35F0DL;
                        int i;
                        ++l_226;
                        --l_229;
                        if ((*p_909->g_104))
                            continue;
                    }
                }
            }
            if ((*p_909->g_104))
                break;
            l_240++;
        }
        if ((*p_909->g_104))
            break;
        if ((*p_909->g_104))
        { /* block id: 87 */
            if ((atomic_inc(&p_909->g_atomic_input[59 * get_linear_group_id() + 33]) == 6))
            { /* block id: 89 */
                uint16_t l_243 = 1UL;
                uint16_t l_244 = 1UL;
                struct S0 l_245[5] = {{0x226F176BC0FC3224L},{0x226F176BC0FC3224L},{0x226F176BC0FC3224L},{0x226F176BC0FC3224L},{0x226F176BC0FC3224L}};
                struct S0 l_246 = {-7L};
                int32_t *l_247 = (void*)0;
                int i;
                l_244 = l_243;
                l_246 = l_245[1];
                l_247 = l_247;
                unsigned int result = 0;
                result += l_243;
                result += l_244;
                int l_245_i0;
                for (l_245_i0 = 0; l_245_i0 < 5; l_245_i0++) {
                    result += l_245[l_245_i0].f0;
                }
                result += l_246.f0;
                atomic_add(&p_909->g_special_values[59 * get_linear_group_id() + 33], result);
            }
            else
            { /* block id: 93 */
                (1 + 1);
            }
        }
        else
        { /* block id: 96 */
            int32_t *l_248 = &l_222;
            l_158 = l_248;
        }
        if ((*l_159))
            continue;
    }
    return p_909->g_43.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_909->g_103
 * writes: p_909->g_43
 */
int32_t ** func_91(int32_t * p_92, int32_t * p_93, struct S1 * p_909)
{ /* block id: 33 */
    int32_t *l_99[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(uint64_t, 16) l_100 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint64_t, 2))(1UL, 0UL), (VECTOR(uint64_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
    int i, j;
    l_100.s8--;
    p_909->g_43.s4 = (-1L);
    return p_909->g_103[1][0][4];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_94(int32_t  p_95, int64_t  p_96, struct S1 * p_909)
{ /* block id: 31 */
    int32_t *l_98[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int i, j;
    return l_98[7][0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S1 c_910;
    struct S1* p_909 = &c_910;
    struct S1 c_911 = {
        0x48C66F5AL, // p_909->g_3
        0UL, // p_909->g_8
        (VECTOR(uint16_t, 16))(0xB551L, (VECTOR(uint16_t, 4))(0xB551L, (VECTOR(uint16_t, 2))(0xB551L, 65535UL), 65535UL), 65535UL, 0xB551L, 65535UL, (VECTOR(uint16_t, 2))(0xB551L, 65535UL), (VECTOR(uint16_t, 2))(0xB551L, 65535UL), 0xB551L, 65535UL, 0xB551L, 65535UL), // p_909->g_22
        (VECTOR(int16_t, 16))(0x525BL, (VECTOR(int16_t, 4))(0x525BL, (VECTOR(int16_t, 2))(0x525BL, 0x0661L), 0x0661L), 0x0661L, 0x525BL, 0x0661L, (VECTOR(int16_t, 2))(0x525BL, 0x0661L), (VECTOR(int16_t, 2))(0x525BL, 0x0661L), 0x525BL, 0x0661L, 0x525BL, 0x0661L), // p_909->g_23
        (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L), 1L, 6L, 1L, (VECTOR(int32_t, 2))(6L, 1L), (VECTOR(int32_t, 2))(6L, 1L), 6L, 1L, 6L, 1L), // p_909->g_43
        (VECTOR(int32_t, 8))(0x5F814D19L, (VECTOR(int32_t, 4))(0x5F814D19L, (VECTOR(int32_t, 2))(0x5F814D19L, 0x3EF28F0EL), 0x3EF28F0EL), 0x3EF28F0EL, 0x5F814D19L, 0x3EF28F0EL), // p_909->g_62
        0x2D77871239B75972L, // p_909->g_67
        (VECTOR(int64_t, 2))(7L, 0x066EE5324E311B86L), // p_909->g_74
        (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x7703B84D8593D467L), 0x7703B84D8593D467L), 0x7703B84D8593D467L, 3L, 0x7703B84D8593D467L, (VECTOR(int64_t, 2))(3L, 0x7703B84D8593D467L), (VECTOR(int64_t, 2))(3L, 0x7703B84D8593D467L), 3L, 0x7703B84D8593D467L, 3L, 0x7703B84D8593D467L), // p_909->g_79
        (VECTOR(int64_t, 4))(0x44F7295DFDCAF09EL, (VECTOR(int64_t, 2))(0x44F7295DFDCAF09EL, 0x5CB2EA737198010EL), 0x5CB2EA737198010EL), // p_909->g_80
        (VECTOR(int64_t, 4))(0x19369D4055D0160BL, (VECTOR(int64_t, 2))(0x19369D4055D0160BL, 0L), 0L), // p_909->g_82
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x1657FB82E29568EBL), 0x1657FB82E29568EBL), 0x1657FB82E29568EBL, 0L, 0x1657FB82E29568EBL), // p_909->g_83
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x52751B8D994F87C2L), 0x52751B8D994F87C2L), // p_909->g_85
        (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x39C88BF8F4ABBE4CL), 0x39C88BF8F4ABBE4CL), // p_909->g_86
        &p_909->g_3, // p_909->g_104
        {{{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104},{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104},{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104},{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104},{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104}},{{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104},{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104},{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104},{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104},{&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104,&p_909->g_104}}}, // p_909->g_103
        {0x40D4900E7B76DE95L}, // p_909->g_107
        0x6AL, // p_909->g_116
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_909->g_119
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x06CAL), 0x06CAL), // p_909->g_120
        (VECTOR(uint8_t, 2))(0xE3L, 0x5DL), // p_909->g_123
        0xD794BBEC01999303L, // p_909->g_132
        &p_909->g_132, // p_909->g_131
        0UL, // p_909->g_133
        0x53E1635CL, // p_909->g_138
        (VECTOR(uint8_t, 4))(0xF6L, (VECTOR(uint8_t, 2))(0xF6L, 1UL), 1UL), // p_909->g_170
        (VECTOR(uint8_t, 2))(0x2CL, 0x2FL), // p_909->g_174
        {0x1260AA1EL,0x1260AA1EL,0x1260AA1EL,0x1260AA1EL,0x1260AA1EL,0x1260AA1EL,0x1260AA1EL,0x1260AA1EL,0x1260AA1EL,0x1260AA1EL}, // p_909->g_180
        &p_909->g_180[1], // p_909->g_179
        {4294967293UL,4294967293UL}, // p_909->g_190
        0L, // p_909->g_196
        65535UL, // p_909->g_208
        (-5L), // p_909->g_225
        1L, // p_909->g_250
        (VECTOR(uint64_t, 2))(0xEA2F4BB151787E61L, 3UL), // p_909->g_294
        (void*)0, // p_909->g_303
        (-1L), // p_909->g_373
        (-1L), // p_909->g_376
        (-1L), // p_909->g_381
        (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xCFA0L), 0xCFA0L), 0xCFA0L, 65531UL, 0xCFA0L), // p_909->g_391
        (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-9L)), (-9L)), // p_909->g_410
        {{{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)}},{{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)}},{{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)}},{{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)},{0x6E4111A4L,0L,(-1L)}}}, // p_909->g_437
        0x3683EC7022A5A58FL, // p_909->g_447
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x1336EAC8A4050B61L), 0x1336EAC8A4050B61L), 0x1336EAC8A4050B61L, (-1L), 0x1336EAC8A4050B61L, (VECTOR(int64_t, 2))((-1L), 0x1336EAC8A4050B61L), (VECTOR(int64_t, 2))((-1L), 0x1336EAC8A4050B61L), (-1L), 0x1336EAC8A4050B61L, (-1L), 0x1336EAC8A4050B61L), // p_909->g_455
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), // p_909->g_457
        (void*)0, // p_909->g_471
        (VECTOR(int32_t, 2))(0x5DAA8E0FL, 0x5F36C62AL), // p_909->g_491
        (void*)0, // p_909->g_504
        &p_909->g_504, // p_909->g_503
        (VECTOR(uint16_t, 2))(9UL, 9UL), // p_909->g_586
        &p_909->g_503, // p_909->g_623
        (VECTOR(uint16_t, 2))(0UL, 0x44CFL), // p_909->g_668
        {{{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L}},{{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L},{1L,0x17L,0x4EL,(-4L),0x4EL,0x17L,1L,0x60L,4L,4L}}}, // p_909->g_673
        1L, // p_909->g_674
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x62L), 0x62L), 0x62L, (-1L), 0x62L), // p_909->g_688
        4L, // p_909->g_692
        4294967295UL, // p_909->g_701
        0x3E85DC58L, // p_909->g_723
        {{&p_909->g_107,(void*)0,&p_909->g_107,&p_909->g_107},{&p_909->g_107,(void*)0,&p_909->g_107,&p_909->g_107},{&p_909->g_107,(void*)0,&p_909->g_107,&p_909->g_107},{&p_909->g_107,(void*)0,&p_909->g_107,&p_909->g_107},{&p_909->g_107,(void*)0,&p_909->g_107,&p_909->g_107},{&p_909->g_107,(void*)0,&p_909->g_107,&p_909->g_107},{&p_909->g_107,(void*)0,&p_909->g_107,&p_909->g_107},{&p_909->g_107,(void*)0,&p_909->g_107,&p_909->g_107},{&p_909->g_107,(void*)0,&p_909->g_107,&p_909->g_107}}, // p_909->g_732
        &p_909->g_107, // p_909->g_733
        (VECTOR(int32_t, 8))(0x6276D17DL, (VECTOR(int32_t, 4))(0x6276D17DL, (VECTOR(int32_t, 2))(0x6276D17DL, 0x3C3B2A06L), 0x3C3B2A06L), 0x3C3B2A06L, 0x6276D17DL, 0x3C3B2A06L), // p_909->g_744
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5C3F112BL), 0x5C3F112BL), 0x5C3F112BL, 0L, 0x5C3F112BL), // p_909->g_755
        1UL, // p_909->g_777
        (VECTOR(uint32_t, 2))(0UL, 4294967288UL), // p_909->g_792
        (VECTOR(uint32_t, 16))(0x8BA181D4L, (VECTOR(uint32_t, 4))(0x8BA181D4L, (VECTOR(uint32_t, 2))(0x8BA181D4L, 5UL), 5UL), 5UL, 0x8BA181D4L, 5UL, (VECTOR(uint32_t, 2))(0x8BA181D4L, 5UL), (VECTOR(uint32_t, 2))(0x8BA181D4L, 5UL), 0x8BA181D4L, 5UL, 0x8BA181D4L, 5UL), // p_909->g_793
        (VECTOR(uint32_t, 2))(0x46BA39A7L, 0xA0E7E8E3L), // p_909->g_795
        &p_909->g_104, // p_909->g_805
        &p_909->g_805, // p_909->g_804
        &p_909->g_804, // p_909->g_803
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xFC4BL), 0xFC4BL), 0xFC4BL, 0UL, 0xFC4BL), // p_909->g_814
        (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0UL), 0UL), // p_909->g_816
        (VECTOR(uint32_t, 8))(0x40F62176L, (VECTOR(uint32_t, 4))(0x40F62176L, (VECTOR(uint32_t, 2))(0x40F62176L, 1UL), 1UL), 1UL, 0x40F62176L, 1UL), // p_909->g_821
        (VECTOR(uint8_t, 16))(0xB0L, (VECTOR(uint8_t, 4))(0xB0L, (VECTOR(uint8_t, 2))(0xB0L, 4UL), 4UL), 4UL, 0xB0L, 4UL, (VECTOR(uint8_t, 2))(0xB0L, 4UL), (VECTOR(uint8_t, 2))(0xB0L, 4UL), 0xB0L, 4UL, 0xB0L, 4UL), // p_909->g_872
        (VECTOR(int16_t, 16))(0x6A71L, (VECTOR(int16_t, 4))(0x6A71L, (VECTOR(int16_t, 2))(0x6A71L, 0L), 0L), 0L, 0x6A71L, 0L, (VECTOR(int16_t, 2))(0x6A71L, 0L), (VECTOR(int16_t, 2))(0x6A71L, 0L), 0x6A71L, 0L, 0x6A71L, 0L), // p_909->g_888
        0x7E2518FAL, // p_909->g_897
        0x4E67393EL, // p_909->g_904
        (-5L), // p_909->g_906
        0, // p_909->v_collective
        sequence_input[get_global_id(0)], // p_909->global_0_offset
        sequence_input[get_global_id(1)], // p_909->global_1_offset
        sequence_input[get_global_id(2)], // p_909->global_2_offset
        sequence_input[get_local_id(0)], // p_909->local_0_offset
        sequence_input[get_local_id(1)], // p_909->local_1_offset
        sequence_input[get_local_id(2)], // p_909->local_2_offset
        sequence_input[get_group_id(0)], // p_909->group_0_offset
        sequence_input[get_group_id(1)], // p_909->group_1_offset
        sequence_input[get_group_id(2)], // p_909->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_909->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_910 = c_911;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_909);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_909->g_3, "p_909->g_3", print_hash_value);
    transparent_crc(p_909->g_8, "p_909->g_8", print_hash_value);
    transparent_crc(p_909->g_22.s0, "p_909->g_22.s0", print_hash_value);
    transparent_crc(p_909->g_22.s1, "p_909->g_22.s1", print_hash_value);
    transparent_crc(p_909->g_22.s2, "p_909->g_22.s2", print_hash_value);
    transparent_crc(p_909->g_22.s3, "p_909->g_22.s3", print_hash_value);
    transparent_crc(p_909->g_22.s4, "p_909->g_22.s4", print_hash_value);
    transparent_crc(p_909->g_22.s5, "p_909->g_22.s5", print_hash_value);
    transparent_crc(p_909->g_22.s6, "p_909->g_22.s6", print_hash_value);
    transparent_crc(p_909->g_22.s7, "p_909->g_22.s7", print_hash_value);
    transparent_crc(p_909->g_22.s8, "p_909->g_22.s8", print_hash_value);
    transparent_crc(p_909->g_22.s9, "p_909->g_22.s9", print_hash_value);
    transparent_crc(p_909->g_22.sa, "p_909->g_22.sa", print_hash_value);
    transparent_crc(p_909->g_22.sb, "p_909->g_22.sb", print_hash_value);
    transparent_crc(p_909->g_22.sc, "p_909->g_22.sc", print_hash_value);
    transparent_crc(p_909->g_22.sd, "p_909->g_22.sd", print_hash_value);
    transparent_crc(p_909->g_22.se, "p_909->g_22.se", print_hash_value);
    transparent_crc(p_909->g_22.sf, "p_909->g_22.sf", print_hash_value);
    transparent_crc(p_909->g_23.s0, "p_909->g_23.s0", print_hash_value);
    transparent_crc(p_909->g_23.s1, "p_909->g_23.s1", print_hash_value);
    transparent_crc(p_909->g_23.s2, "p_909->g_23.s2", print_hash_value);
    transparent_crc(p_909->g_23.s3, "p_909->g_23.s3", print_hash_value);
    transparent_crc(p_909->g_23.s4, "p_909->g_23.s4", print_hash_value);
    transparent_crc(p_909->g_23.s5, "p_909->g_23.s5", print_hash_value);
    transparent_crc(p_909->g_23.s6, "p_909->g_23.s6", print_hash_value);
    transparent_crc(p_909->g_23.s7, "p_909->g_23.s7", print_hash_value);
    transparent_crc(p_909->g_23.s8, "p_909->g_23.s8", print_hash_value);
    transparent_crc(p_909->g_23.s9, "p_909->g_23.s9", print_hash_value);
    transparent_crc(p_909->g_23.sa, "p_909->g_23.sa", print_hash_value);
    transparent_crc(p_909->g_23.sb, "p_909->g_23.sb", print_hash_value);
    transparent_crc(p_909->g_23.sc, "p_909->g_23.sc", print_hash_value);
    transparent_crc(p_909->g_23.sd, "p_909->g_23.sd", print_hash_value);
    transparent_crc(p_909->g_23.se, "p_909->g_23.se", print_hash_value);
    transparent_crc(p_909->g_23.sf, "p_909->g_23.sf", print_hash_value);
    transparent_crc(p_909->g_43.s0, "p_909->g_43.s0", print_hash_value);
    transparent_crc(p_909->g_43.s1, "p_909->g_43.s1", print_hash_value);
    transparent_crc(p_909->g_43.s2, "p_909->g_43.s2", print_hash_value);
    transparent_crc(p_909->g_43.s3, "p_909->g_43.s3", print_hash_value);
    transparent_crc(p_909->g_43.s4, "p_909->g_43.s4", print_hash_value);
    transparent_crc(p_909->g_43.s5, "p_909->g_43.s5", print_hash_value);
    transparent_crc(p_909->g_43.s6, "p_909->g_43.s6", print_hash_value);
    transparent_crc(p_909->g_43.s7, "p_909->g_43.s7", print_hash_value);
    transparent_crc(p_909->g_43.s8, "p_909->g_43.s8", print_hash_value);
    transparent_crc(p_909->g_43.s9, "p_909->g_43.s9", print_hash_value);
    transparent_crc(p_909->g_43.sa, "p_909->g_43.sa", print_hash_value);
    transparent_crc(p_909->g_43.sb, "p_909->g_43.sb", print_hash_value);
    transparent_crc(p_909->g_43.sc, "p_909->g_43.sc", print_hash_value);
    transparent_crc(p_909->g_43.sd, "p_909->g_43.sd", print_hash_value);
    transparent_crc(p_909->g_43.se, "p_909->g_43.se", print_hash_value);
    transparent_crc(p_909->g_43.sf, "p_909->g_43.sf", print_hash_value);
    transparent_crc(p_909->g_62.s0, "p_909->g_62.s0", print_hash_value);
    transparent_crc(p_909->g_62.s1, "p_909->g_62.s1", print_hash_value);
    transparent_crc(p_909->g_62.s2, "p_909->g_62.s2", print_hash_value);
    transparent_crc(p_909->g_62.s3, "p_909->g_62.s3", print_hash_value);
    transparent_crc(p_909->g_62.s4, "p_909->g_62.s4", print_hash_value);
    transparent_crc(p_909->g_62.s5, "p_909->g_62.s5", print_hash_value);
    transparent_crc(p_909->g_62.s6, "p_909->g_62.s6", print_hash_value);
    transparent_crc(p_909->g_62.s7, "p_909->g_62.s7", print_hash_value);
    transparent_crc(p_909->g_67, "p_909->g_67", print_hash_value);
    transparent_crc(p_909->g_74.x, "p_909->g_74.x", print_hash_value);
    transparent_crc(p_909->g_74.y, "p_909->g_74.y", print_hash_value);
    transparent_crc(p_909->g_79.s0, "p_909->g_79.s0", print_hash_value);
    transparent_crc(p_909->g_79.s1, "p_909->g_79.s1", print_hash_value);
    transparent_crc(p_909->g_79.s2, "p_909->g_79.s2", print_hash_value);
    transparent_crc(p_909->g_79.s3, "p_909->g_79.s3", print_hash_value);
    transparent_crc(p_909->g_79.s4, "p_909->g_79.s4", print_hash_value);
    transparent_crc(p_909->g_79.s5, "p_909->g_79.s5", print_hash_value);
    transparent_crc(p_909->g_79.s6, "p_909->g_79.s6", print_hash_value);
    transparent_crc(p_909->g_79.s7, "p_909->g_79.s7", print_hash_value);
    transparent_crc(p_909->g_79.s8, "p_909->g_79.s8", print_hash_value);
    transparent_crc(p_909->g_79.s9, "p_909->g_79.s9", print_hash_value);
    transparent_crc(p_909->g_79.sa, "p_909->g_79.sa", print_hash_value);
    transparent_crc(p_909->g_79.sb, "p_909->g_79.sb", print_hash_value);
    transparent_crc(p_909->g_79.sc, "p_909->g_79.sc", print_hash_value);
    transparent_crc(p_909->g_79.sd, "p_909->g_79.sd", print_hash_value);
    transparent_crc(p_909->g_79.se, "p_909->g_79.se", print_hash_value);
    transparent_crc(p_909->g_79.sf, "p_909->g_79.sf", print_hash_value);
    transparent_crc(p_909->g_80.x, "p_909->g_80.x", print_hash_value);
    transparent_crc(p_909->g_80.y, "p_909->g_80.y", print_hash_value);
    transparent_crc(p_909->g_80.z, "p_909->g_80.z", print_hash_value);
    transparent_crc(p_909->g_80.w, "p_909->g_80.w", print_hash_value);
    transparent_crc(p_909->g_82.x, "p_909->g_82.x", print_hash_value);
    transparent_crc(p_909->g_82.y, "p_909->g_82.y", print_hash_value);
    transparent_crc(p_909->g_82.z, "p_909->g_82.z", print_hash_value);
    transparent_crc(p_909->g_82.w, "p_909->g_82.w", print_hash_value);
    transparent_crc(p_909->g_83.s0, "p_909->g_83.s0", print_hash_value);
    transparent_crc(p_909->g_83.s1, "p_909->g_83.s1", print_hash_value);
    transparent_crc(p_909->g_83.s2, "p_909->g_83.s2", print_hash_value);
    transparent_crc(p_909->g_83.s3, "p_909->g_83.s3", print_hash_value);
    transparent_crc(p_909->g_83.s4, "p_909->g_83.s4", print_hash_value);
    transparent_crc(p_909->g_83.s5, "p_909->g_83.s5", print_hash_value);
    transparent_crc(p_909->g_83.s6, "p_909->g_83.s6", print_hash_value);
    transparent_crc(p_909->g_83.s7, "p_909->g_83.s7", print_hash_value);
    transparent_crc(p_909->g_85.x, "p_909->g_85.x", print_hash_value);
    transparent_crc(p_909->g_85.y, "p_909->g_85.y", print_hash_value);
    transparent_crc(p_909->g_85.z, "p_909->g_85.z", print_hash_value);
    transparent_crc(p_909->g_85.w, "p_909->g_85.w", print_hash_value);
    transparent_crc(p_909->g_86.x, "p_909->g_86.x", print_hash_value);
    transparent_crc(p_909->g_86.y, "p_909->g_86.y", print_hash_value);
    transparent_crc(p_909->g_86.z, "p_909->g_86.z", print_hash_value);
    transparent_crc(p_909->g_86.w, "p_909->g_86.w", print_hash_value);
    transparent_crc(p_909->g_107.f0, "p_909->g_107.f0", print_hash_value);
    transparent_crc(p_909->g_116, "p_909->g_116", print_hash_value);
    transparent_crc(p_909->g_119.s0, "p_909->g_119.s0", print_hash_value);
    transparent_crc(p_909->g_119.s1, "p_909->g_119.s1", print_hash_value);
    transparent_crc(p_909->g_119.s2, "p_909->g_119.s2", print_hash_value);
    transparent_crc(p_909->g_119.s3, "p_909->g_119.s3", print_hash_value);
    transparent_crc(p_909->g_119.s4, "p_909->g_119.s4", print_hash_value);
    transparent_crc(p_909->g_119.s5, "p_909->g_119.s5", print_hash_value);
    transparent_crc(p_909->g_119.s6, "p_909->g_119.s6", print_hash_value);
    transparent_crc(p_909->g_119.s7, "p_909->g_119.s7", print_hash_value);
    transparent_crc(p_909->g_119.s8, "p_909->g_119.s8", print_hash_value);
    transparent_crc(p_909->g_119.s9, "p_909->g_119.s9", print_hash_value);
    transparent_crc(p_909->g_119.sa, "p_909->g_119.sa", print_hash_value);
    transparent_crc(p_909->g_119.sb, "p_909->g_119.sb", print_hash_value);
    transparent_crc(p_909->g_119.sc, "p_909->g_119.sc", print_hash_value);
    transparent_crc(p_909->g_119.sd, "p_909->g_119.sd", print_hash_value);
    transparent_crc(p_909->g_119.se, "p_909->g_119.se", print_hash_value);
    transparent_crc(p_909->g_119.sf, "p_909->g_119.sf", print_hash_value);
    transparent_crc(p_909->g_120.x, "p_909->g_120.x", print_hash_value);
    transparent_crc(p_909->g_120.y, "p_909->g_120.y", print_hash_value);
    transparent_crc(p_909->g_120.z, "p_909->g_120.z", print_hash_value);
    transparent_crc(p_909->g_120.w, "p_909->g_120.w", print_hash_value);
    transparent_crc(p_909->g_123.x, "p_909->g_123.x", print_hash_value);
    transparent_crc(p_909->g_123.y, "p_909->g_123.y", print_hash_value);
    transparent_crc(p_909->g_132, "p_909->g_132", print_hash_value);
    transparent_crc(p_909->g_133, "p_909->g_133", print_hash_value);
    transparent_crc(p_909->g_138, "p_909->g_138", print_hash_value);
    transparent_crc(p_909->g_170.x, "p_909->g_170.x", print_hash_value);
    transparent_crc(p_909->g_170.y, "p_909->g_170.y", print_hash_value);
    transparent_crc(p_909->g_170.z, "p_909->g_170.z", print_hash_value);
    transparent_crc(p_909->g_170.w, "p_909->g_170.w", print_hash_value);
    transparent_crc(p_909->g_174.x, "p_909->g_174.x", print_hash_value);
    transparent_crc(p_909->g_174.y, "p_909->g_174.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_909->g_180[i], "p_909->g_180[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_909->g_190[i], "p_909->g_190[i]", print_hash_value);

    }
    transparent_crc(p_909->g_196, "p_909->g_196", print_hash_value);
    transparent_crc(p_909->g_208, "p_909->g_208", print_hash_value);
    transparent_crc(p_909->g_225, "p_909->g_225", print_hash_value);
    transparent_crc(p_909->g_250, "p_909->g_250", print_hash_value);
    transparent_crc(p_909->g_294.x, "p_909->g_294.x", print_hash_value);
    transparent_crc(p_909->g_294.y, "p_909->g_294.y", print_hash_value);
    transparent_crc(p_909->g_373, "p_909->g_373", print_hash_value);
    transparent_crc(p_909->g_376, "p_909->g_376", print_hash_value);
    transparent_crc(p_909->g_381, "p_909->g_381", print_hash_value);
    transparent_crc(p_909->g_391.s0, "p_909->g_391.s0", print_hash_value);
    transparent_crc(p_909->g_391.s1, "p_909->g_391.s1", print_hash_value);
    transparent_crc(p_909->g_391.s2, "p_909->g_391.s2", print_hash_value);
    transparent_crc(p_909->g_391.s3, "p_909->g_391.s3", print_hash_value);
    transparent_crc(p_909->g_391.s4, "p_909->g_391.s4", print_hash_value);
    transparent_crc(p_909->g_391.s5, "p_909->g_391.s5", print_hash_value);
    transparent_crc(p_909->g_391.s6, "p_909->g_391.s6", print_hash_value);
    transparent_crc(p_909->g_391.s7, "p_909->g_391.s7", print_hash_value);
    transparent_crc(p_909->g_410.x, "p_909->g_410.x", print_hash_value);
    transparent_crc(p_909->g_410.y, "p_909->g_410.y", print_hash_value);
    transparent_crc(p_909->g_410.z, "p_909->g_410.z", print_hash_value);
    transparent_crc(p_909->g_410.w, "p_909->g_410.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_909->g_437[i][j][k], "p_909->g_437[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_909->g_447, "p_909->g_447", print_hash_value);
    transparent_crc(p_909->g_455.s0, "p_909->g_455.s0", print_hash_value);
    transparent_crc(p_909->g_455.s1, "p_909->g_455.s1", print_hash_value);
    transparent_crc(p_909->g_455.s2, "p_909->g_455.s2", print_hash_value);
    transparent_crc(p_909->g_455.s3, "p_909->g_455.s3", print_hash_value);
    transparent_crc(p_909->g_455.s4, "p_909->g_455.s4", print_hash_value);
    transparent_crc(p_909->g_455.s5, "p_909->g_455.s5", print_hash_value);
    transparent_crc(p_909->g_455.s6, "p_909->g_455.s6", print_hash_value);
    transparent_crc(p_909->g_455.s7, "p_909->g_455.s7", print_hash_value);
    transparent_crc(p_909->g_455.s8, "p_909->g_455.s8", print_hash_value);
    transparent_crc(p_909->g_455.s9, "p_909->g_455.s9", print_hash_value);
    transparent_crc(p_909->g_455.sa, "p_909->g_455.sa", print_hash_value);
    transparent_crc(p_909->g_455.sb, "p_909->g_455.sb", print_hash_value);
    transparent_crc(p_909->g_455.sc, "p_909->g_455.sc", print_hash_value);
    transparent_crc(p_909->g_455.sd, "p_909->g_455.sd", print_hash_value);
    transparent_crc(p_909->g_455.se, "p_909->g_455.se", print_hash_value);
    transparent_crc(p_909->g_455.sf, "p_909->g_455.sf", print_hash_value);
    transparent_crc(p_909->g_457.x, "p_909->g_457.x", print_hash_value);
    transparent_crc(p_909->g_457.y, "p_909->g_457.y", print_hash_value);
    transparent_crc(p_909->g_457.z, "p_909->g_457.z", print_hash_value);
    transparent_crc(p_909->g_457.w, "p_909->g_457.w", print_hash_value);
    transparent_crc(p_909->g_491.x, "p_909->g_491.x", print_hash_value);
    transparent_crc(p_909->g_491.y, "p_909->g_491.y", print_hash_value);
    transparent_crc(p_909->g_586.x, "p_909->g_586.x", print_hash_value);
    transparent_crc(p_909->g_586.y, "p_909->g_586.y", print_hash_value);
    transparent_crc(p_909->g_668.x, "p_909->g_668.x", print_hash_value);
    transparent_crc(p_909->g_668.y, "p_909->g_668.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_909->g_673[i][j][k], "p_909->g_673[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_909->g_674, "p_909->g_674", print_hash_value);
    transparent_crc(p_909->g_688.s0, "p_909->g_688.s0", print_hash_value);
    transparent_crc(p_909->g_688.s1, "p_909->g_688.s1", print_hash_value);
    transparent_crc(p_909->g_688.s2, "p_909->g_688.s2", print_hash_value);
    transparent_crc(p_909->g_688.s3, "p_909->g_688.s3", print_hash_value);
    transparent_crc(p_909->g_688.s4, "p_909->g_688.s4", print_hash_value);
    transparent_crc(p_909->g_688.s5, "p_909->g_688.s5", print_hash_value);
    transparent_crc(p_909->g_688.s6, "p_909->g_688.s6", print_hash_value);
    transparent_crc(p_909->g_688.s7, "p_909->g_688.s7", print_hash_value);
    transparent_crc(p_909->g_692, "p_909->g_692", print_hash_value);
    transparent_crc(p_909->g_701, "p_909->g_701", print_hash_value);
    transparent_crc(p_909->g_723, "p_909->g_723", print_hash_value);
    transparent_crc(p_909->g_744.s0, "p_909->g_744.s0", print_hash_value);
    transparent_crc(p_909->g_744.s1, "p_909->g_744.s1", print_hash_value);
    transparent_crc(p_909->g_744.s2, "p_909->g_744.s2", print_hash_value);
    transparent_crc(p_909->g_744.s3, "p_909->g_744.s3", print_hash_value);
    transparent_crc(p_909->g_744.s4, "p_909->g_744.s4", print_hash_value);
    transparent_crc(p_909->g_744.s5, "p_909->g_744.s5", print_hash_value);
    transparent_crc(p_909->g_744.s6, "p_909->g_744.s6", print_hash_value);
    transparent_crc(p_909->g_744.s7, "p_909->g_744.s7", print_hash_value);
    transparent_crc(p_909->g_755.s0, "p_909->g_755.s0", print_hash_value);
    transparent_crc(p_909->g_755.s1, "p_909->g_755.s1", print_hash_value);
    transparent_crc(p_909->g_755.s2, "p_909->g_755.s2", print_hash_value);
    transparent_crc(p_909->g_755.s3, "p_909->g_755.s3", print_hash_value);
    transparent_crc(p_909->g_755.s4, "p_909->g_755.s4", print_hash_value);
    transparent_crc(p_909->g_755.s5, "p_909->g_755.s5", print_hash_value);
    transparent_crc(p_909->g_755.s6, "p_909->g_755.s6", print_hash_value);
    transparent_crc(p_909->g_755.s7, "p_909->g_755.s7", print_hash_value);
    transparent_crc(p_909->g_777, "p_909->g_777", print_hash_value);
    transparent_crc(p_909->g_792.x, "p_909->g_792.x", print_hash_value);
    transparent_crc(p_909->g_792.y, "p_909->g_792.y", print_hash_value);
    transparent_crc(p_909->g_793.s0, "p_909->g_793.s0", print_hash_value);
    transparent_crc(p_909->g_793.s1, "p_909->g_793.s1", print_hash_value);
    transparent_crc(p_909->g_793.s2, "p_909->g_793.s2", print_hash_value);
    transparent_crc(p_909->g_793.s3, "p_909->g_793.s3", print_hash_value);
    transparent_crc(p_909->g_793.s4, "p_909->g_793.s4", print_hash_value);
    transparent_crc(p_909->g_793.s5, "p_909->g_793.s5", print_hash_value);
    transparent_crc(p_909->g_793.s6, "p_909->g_793.s6", print_hash_value);
    transparent_crc(p_909->g_793.s7, "p_909->g_793.s7", print_hash_value);
    transparent_crc(p_909->g_793.s8, "p_909->g_793.s8", print_hash_value);
    transparent_crc(p_909->g_793.s9, "p_909->g_793.s9", print_hash_value);
    transparent_crc(p_909->g_793.sa, "p_909->g_793.sa", print_hash_value);
    transparent_crc(p_909->g_793.sb, "p_909->g_793.sb", print_hash_value);
    transparent_crc(p_909->g_793.sc, "p_909->g_793.sc", print_hash_value);
    transparent_crc(p_909->g_793.sd, "p_909->g_793.sd", print_hash_value);
    transparent_crc(p_909->g_793.se, "p_909->g_793.se", print_hash_value);
    transparent_crc(p_909->g_793.sf, "p_909->g_793.sf", print_hash_value);
    transparent_crc(p_909->g_795.x, "p_909->g_795.x", print_hash_value);
    transparent_crc(p_909->g_795.y, "p_909->g_795.y", print_hash_value);
    transparent_crc(p_909->g_814.s0, "p_909->g_814.s0", print_hash_value);
    transparent_crc(p_909->g_814.s1, "p_909->g_814.s1", print_hash_value);
    transparent_crc(p_909->g_814.s2, "p_909->g_814.s2", print_hash_value);
    transparent_crc(p_909->g_814.s3, "p_909->g_814.s3", print_hash_value);
    transparent_crc(p_909->g_814.s4, "p_909->g_814.s4", print_hash_value);
    transparent_crc(p_909->g_814.s5, "p_909->g_814.s5", print_hash_value);
    transparent_crc(p_909->g_814.s6, "p_909->g_814.s6", print_hash_value);
    transparent_crc(p_909->g_814.s7, "p_909->g_814.s7", print_hash_value);
    transparent_crc(p_909->g_816.x, "p_909->g_816.x", print_hash_value);
    transparent_crc(p_909->g_816.y, "p_909->g_816.y", print_hash_value);
    transparent_crc(p_909->g_816.z, "p_909->g_816.z", print_hash_value);
    transparent_crc(p_909->g_816.w, "p_909->g_816.w", print_hash_value);
    transparent_crc(p_909->g_821.s0, "p_909->g_821.s0", print_hash_value);
    transparent_crc(p_909->g_821.s1, "p_909->g_821.s1", print_hash_value);
    transparent_crc(p_909->g_821.s2, "p_909->g_821.s2", print_hash_value);
    transparent_crc(p_909->g_821.s3, "p_909->g_821.s3", print_hash_value);
    transparent_crc(p_909->g_821.s4, "p_909->g_821.s4", print_hash_value);
    transparent_crc(p_909->g_821.s5, "p_909->g_821.s5", print_hash_value);
    transparent_crc(p_909->g_821.s6, "p_909->g_821.s6", print_hash_value);
    transparent_crc(p_909->g_821.s7, "p_909->g_821.s7", print_hash_value);
    transparent_crc(p_909->g_872.s0, "p_909->g_872.s0", print_hash_value);
    transparent_crc(p_909->g_872.s1, "p_909->g_872.s1", print_hash_value);
    transparent_crc(p_909->g_872.s2, "p_909->g_872.s2", print_hash_value);
    transparent_crc(p_909->g_872.s3, "p_909->g_872.s3", print_hash_value);
    transparent_crc(p_909->g_872.s4, "p_909->g_872.s4", print_hash_value);
    transparent_crc(p_909->g_872.s5, "p_909->g_872.s5", print_hash_value);
    transparent_crc(p_909->g_872.s6, "p_909->g_872.s6", print_hash_value);
    transparent_crc(p_909->g_872.s7, "p_909->g_872.s7", print_hash_value);
    transparent_crc(p_909->g_872.s8, "p_909->g_872.s8", print_hash_value);
    transparent_crc(p_909->g_872.s9, "p_909->g_872.s9", print_hash_value);
    transparent_crc(p_909->g_872.sa, "p_909->g_872.sa", print_hash_value);
    transparent_crc(p_909->g_872.sb, "p_909->g_872.sb", print_hash_value);
    transparent_crc(p_909->g_872.sc, "p_909->g_872.sc", print_hash_value);
    transparent_crc(p_909->g_872.sd, "p_909->g_872.sd", print_hash_value);
    transparent_crc(p_909->g_872.se, "p_909->g_872.se", print_hash_value);
    transparent_crc(p_909->g_872.sf, "p_909->g_872.sf", print_hash_value);
    transparent_crc(p_909->g_888.s0, "p_909->g_888.s0", print_hash_value);
    transparent_crc(p_909->g_888.s1, "p_909->g_888.s1", print_hash_value);
    transparent_crc(p_909->g_888.s2, "p_909->g_888.s2", print_hash_value);
    transparent_crc(p_909->g_888.s3, "p_909->g_888.s3", print_hash_value);
    transparent_crc(p_909->g_888.s4, "p_909->g_888.s4", print_hash_value);
    transparent_crc(p_909->g_888.s5, "p_909->g_888.s5", print_hash_value);
    transparent_crc(p_909->g_888.s6, "p_909->g_888.s6", print_hash_value);
    transparent_crc(p_909->g_888.s7, "p_909->g_888.s7", print_hash_value);
    transparent_crc(p_909->g_888.s8, "p_909->g_888.s8", print_hash_value);
    transparent_crc(p_909->g_888.s9, "p_909->g_888.s9", print_hash_value);
    transparent_crc(p_909->g_888.sa, "p_909->g_888.sa", print_hash_value);
    transparent_crc(p_909->g_888.sb, "p_909->g_888.sb", print_hash_value);
    transparent_crc(p_909->g_888.sc, "p_909->g_888.sc", print_hash_value);
    transparent_crc(p_909->g_888.sd, "p_909->g_888.sd", print_hash_value);
    transparent_crc(p_909->g_888.se, "p_909->g_888.se", print_hash_value);
    transparent_crc(p_909->g_888.sf, "p_909->g_888.sf", print_hash_value);
    transparent_crc(p_909->g_897, "p_909->g_897", print_hash_value);
    transparent_crc(p_909->g_904, "p_909->g_904", print_hash_value);
    transparent_crc(p_909->g_906, "p_909->g_906", print_hash_value);
    transparent_crc(p_909->v_collective, "p_909->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 59; i++)
            transparent_crc(p_909->g_special_values[i + 59 * get_linear_group_id()], "p_909->g_special_values[i + 59 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_909->l_comm_values[get_linear_local_id()], "p_909->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_909->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_909->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
