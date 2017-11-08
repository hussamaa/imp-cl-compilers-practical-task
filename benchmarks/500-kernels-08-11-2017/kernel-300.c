// --atomics 34 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 56,69,1 -l 4,3,1
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

__constant uint32_t permutations[10][12] = {
{6,2,0,1,7,3,5,9,10,11,8,4}, // permutation 0
{5,10,11,0,7,6,4,1,2,3,8,9}, // permutation 1
{4,0,10,2,11,5,3,8,6,1,7,9}, // permutation 2
{1,7,0,10,5,4,3,6,8,2,9,11}, // permutation 3
{3,2,0,11,5,4,10,6,9,8,1,7}, // permutation 4
{6,3,5,11,0,2,9,1,8,10,7,4}, // permutation 5
{6,0,4,11,3,8,7,10,2,9,1,5}, // permutation 6
{8,10,5,2,7,6,9,1,11,4,0,3}, // permutation 7
{1,10,11,8,9,6,7,2,5,0,3,4}, // permutation 8
{5,0,8,3,2,11,4,6,1,10,9,7} // permutation 9
};

// Seed: 168597367

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    int32_t g_5;
    volatile int32_t g_8;
    volatile int32_t g_9;
    int32_t g_10;
    int32_t g_19;
    volatile int32_t ** volatile g_20;
    volatile int32_t *g_30;
    int32_t * volatile g_34;
    int32_t * volatile *g_33[9][3];
    VECTOR(int32_t, 4) g_45;
    int32_t *g_78;
    int32_t **g_77;
    int32_t g_107;
    VECTOR(uint8_t, 2) g_116;
    VECTOR(uint8_t, 8) g_117;
    int32_t **g_126;
    int32_t ***g_125;
    uint32_t g_137;
    uint8_t g_140;
    int8_t g_142;
    int16_t g_143;
    int32_t *g_167;
    VECTOR(uint32_t, 4) g_179;
    VECTOR(uint32_t, 4) g_180;
    uint64_t g_188;
    volatile VECTOR(uint8_t, 4) g_197;
    volatile VECTOR(int32_t, 2) g_209;
    volatile VECTOR(int32_t, 2) g_214;
    VECTOR(uint16_t, 2) g_224;
    volatile VECTOR(int16_t, 16) g_242;
    volatile VECTOR(int32_t, 8) g_247;
    uint16_t *g_285;
    uint32_t g_289;
    volatile VECTOR(int8_t, 2) g_290;
    volatile VECTOR(int8_t, 2) g_296;
    VECTOR(int8_t, 16) g_297;
    VECTOR(int32_t, 2) g_317;
    volatile VECTOR(uint32_t, 4) g_321;
    VECTOR(int16_t, 8) g_360;
    volatile VECTOR(int8_t, 4) g_403;
    VECTOR(int16_t, 8) g_417;
    uint8_t g_423[9];
    VECTOR(uint16_t, 16) g_449;
    volatile VECTOR(int16_t, 4) g_515;
    VECTOR(int32_t, 8) g_518;
    volatile VECTOR(uint32_t, 16) g_549;
    volatile VECTOR(uint32_t, 16) g_555;
    volatile VECTOR(int64_t, 2) g_568;
    int32_t g_581;
    volatile VECTOR(int32_t, 2) g_594;
    VECTOR(uint16_t, 2) g_596;
    VECTOR(uint8_t, 16) g_650;
    VECTOR(uint16_t, 4) g_654;
    volatile int32_t **g_674;
    volatile int32_t ***g_673[5];
    volatile int32_t **** volatile g_672;
    volatile int32_t **** volatile *g_671;
    VECTOR(int8_t, 2) g_685;
    VECTOR(int8_t, 4) g_688;
    uint32_t g_696;
    volatile VECTOR(int8_t, 16) g_728;
    int16_t g_747;
    volatile uint32_t g_751;
    int32_t g_813;
    uint32_t g_818[1];
    int32_t **g_856;
    VECTOR(int16_t, 4) g_883;
    volatile int16_t *g_913;
    volatile int16_t * volatile * volatile g_912;
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
uint64_t  func_1(struct S0 * p_915);
int32_t * func_13(int32_t  p_14, struct S0 * p_915);
int32_t * func_49(uint64_t  p_50, int32_t  p_51, int32_t ** p_52, int32_t * p_53, struct S0 * p_915);
int32_t  func_56(int32_t  p_57, struct S0 * p_915);
int32_t * func_61(int64_t  p_62, int32_t ** p_63, int32_t  p_64, struct S0 * p_915);
int32_t ** func_65(int32_t * p_66, uint32_t  p_67, int32_t  p_68, uint32_t  p_69, uint16_t  p_70, struct S0 * p_915);
int32_t * func_71(int16_t  p_72, int32_t ** p_73, uint32_t  p_74, int32_t * p_75, int32_t  p_76, struct S0 * p_915);
uint32_t  func_79(int8_t  p_80, uint32_t  p_81, struct S0 * p_915);
uint8_t  func_83(int32_t ** p_84, int32_t * p_85, int32_t  p_86, int64_t  p_87, struct S0 * p_915);
int32_t * func_90(uint64_t  p_91, int8_t  p_92, int32_t ** p_93, struct S0 * p_915);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_915->g_2 p_915->g_33 p_915->g_696 p_915->g_360 p_915->g_77 p_915->g_126 p_915->g_78 p_915->g_10 p_915->g_912
 * writes: p_915->g_2 p_915->g_5 p_915->g_10 p_915->g_19 p_915->g_30 p_915->g_360 p_915->g_78 p_915->g_912
 */
uint64_t  func_1(struct S0 * p_915)
{ /* block id: 4 */
    uint8_t l_26[1];
    int32_t *l_35 = (void*)0;
    VECTOR(int32_t, 4) l_43 = (VECTOR(int32_t, 4))(0x619CCD29L, (VECTOR(int32_t, 2))(0x619CCD29L, 0x6AFCA19AL), 0x6AFCA19AL);
    VECTOR(int32_t, 8) l_44 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x187147D8L), 0x187147D8L), 0x187147D8L, 0L, 0x187147D8L);
    VECTOR(int8_t, 4) l_886 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x61L), 0x61L);
    int16_t *l_910 = (void*)0;
    int16_t *l_911 = (void*)0;
    volatile int16_t * volatile * volatile *l_914[5][7][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_26[i] = 0xBFL;
    for (p_915->g_2 = 0; (p_915->g_2 < (-30)); p_915->g_2 = safe_sub_func_int16_t_s_s(p_915->g_2, 2))
    { /* block id: 7 */
        int32_t *l_24 = &p_915->g_19;
        int8_t l_46 = 0x6EL;
        uint32_t *l_817 = &p_915->g_818[0];
        uint16_t *l_823 = (void*)0;
        uint16_t *l_824 = (void*)0;
        uint16_t *l_825 = (void*)0;
        uint16_t *l_826 = (void*)0;
        uint16_t *l_827 = (void*)0;
        uint16_t *l_828 = (void*)0;
        int32_t *l_845[4];
        uint8_t l_857 = 8UL;
        int32_t *****l_879 = (void*)0;
        int i;
        for (i = 0; i < 4; i++)
            l_845[i] = (void*)0;
        for (p_915->g_5 = (-6); (p_915->g_5 < 6); p_915->g_5 = safe_add_func_int64_t_s_s(p_915->g_5, 3))
        { /* block id: 10 */
            VECTOR(uint8_t, 2) l_17 = (VECTOR(uint8_t, 2))(2UL, 255UL);
            int32_t l_25 = 1L;
            int32_t **l_29[5][6] = {{&l_24,&l_24,(void*)0,&l_24,&l_24,&l_24},{&l_24,&l_24,(void*)0,&l_24,&l_24,&l_24},{&l_24,&l_24,(void*)0,&l_24,&l_24,&l_24},{&l_24,&l_24,(void*)0,&l_24,&l_24,&l_24},{&l_24,&l_24,(void*)0,&l_24,&l_24,&l_24}};
            uint16_t l_36 = 0x718DL;
            int i, j;
            for (p_915->g_10 = 27; (p_915->g_10 <= (-16)); p_915->g_10 = safe_sub_func_uint8_t_u_u(p_915->g_10, 9))
            { /* block id: 13 */
                int32_t *l_18 = &p_915->g_19;
                int32_t **l_23[8][1] = {{&l_18},{&l_18},{&l_18},{&l_18},{&l_18},{&l_18},{&l_18},{&l_18}};
                int i, j;
                l_24 = func_13(((*l_18) = (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_17.yyxxxyyyyxxyyxyy)))).s1, p_915->g_2))), p_915);
                l_26[0]--;
            }
            p_915->g_30 = (void*)0;
            for (l_25 = (-5); (l_25 != (-3)); l_25 = safe_add_func_int8_t_s_s(l_25, 2))
            { /* block id: 24 */
                l_35 = func_13((&l_24 != p_915->g_33[3][0]), p_915);
                if (l_36)
                    break;
                if ((atomic_inc(&p_915->l_atomic_input[10]) == 3))
                { /* block id: 28 */
                    VECTOR(int32_t, 8) l_37 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0L), 0L), 0L, 6L, 0L);
                    uint32_t l_38 = 0x8A84D237L;
                    VECTOR(int32_t, 4) l_39 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                    int32_t *l_40 = (void*)0;
                    int32_t *l_41 = (void*)0;
                    int32_t *l_42 = (void*)0;
                    int i;
                    l_41 = ((l_37.s3 , (l_38 ^= FAKE_DIVERGE(p_915->global_1_offset, get_global_id(1), 10))) , (l_39.z , l_40));
                    l_40 = l_42;
                    unsigned int result = 0;
                    result += l_37.s7;
                    result += l_37.s6;
                    result += l_37.s5;
                    result += l_37.s4;
                    result += l_37.s3;
                    result += l_37.s2;
                    result += l_37.s1;
                    result += l_37.s0;
                    result += l_38;
                    result += l_39.w;
                    result += l_39.z;
                    result += l_39.y;
                    result += l_39.x;
                    atomic_add(&p_915->l_special_values[10], result);
                }
                else
                { /* block id: 32 */
                    (1 + 1);
                }
            }
            l_46 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_43.wzwzzzywyxxxwwxz)))).odd, ((VECTOR(int32_t, 8))(l_44.s64346114)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_915->g_45.yzww)).wzxzxwzw))))).odd)).z;
        }
        l_35 = (void*)0;
        for (p_915->g_10 = 0; (p_915->g_10 != (-20)); p_915->g_10 = safe_sub_func_int32_t_s_s(p_915->g_10, 6))
        { /* block id: 41 */
            uint16_t l_58 = 0x0454L;
            int32_t l_809 = 1L;
            int32_t *l_812 = &p_915->g_813;
            int32_t **l_814 = &l_35;
            (1 + 1);
        }
    }
    (*p_915->g_77) = func_13((safe_lshift_func_int16_t_s_s(p_915->g_696, (p_915->g_360.s1 &= l_26[0]))), p_915);
    (**p_915->g_126) |= l_44.s2;
    p_915->g_912 = p_915->g_912;
    return p_915->g_696;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_13(int32_t  p_14, struct S0 * p_915)
{ /* block id: 15 */
    volatile int32_t *l_22[6][4] = {{&p_915->g_8,&p_915->g_8,&p_915->g_8,&p_915->g_8},{&p_915->g_8,&p_915->g_8,&p_915->g_8,&p_915->g_8},{&p_915->g_8,&p_915->g_8,&p_915->g_8,&p_915->g_8},{&p_915->g_8,&p_915->g_8,&p_915->g_8,&p_915->g_8},{&p_915->g_8,&p_915->g_8,&p_915->g_8,&p_915->g_8},{&p_915->g_8,&p_915->g_8,&p_915->g_8,&p_915->g_8}};
    volatile int32_t **l_21 = &l_22[3][3];
    int i, j;
    (*l_21) = &p_915->g_8;
    return &p_915->g_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_77 p_915->g_167 p_915->g_78 p_915->g_5 p_915->g_126
 * writes: p_915->g_5
 */
int32_t * func_49(uint64_t  p_50, int32_t  p_51, int32_t ** p_52, int32_t * p_53, struct S0 * p_915)
{ /* block id: 303 */
    int32_t **l_815 = (void*)0;
    int32_t *l_816 = &p_915->g_5;
    (*p_52) = func_90(p_51, p_51, l_815, p_915);
    (*l_816) ^= 6L;
    return (*p_915->g_126);
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_19 p_915->g_comm_values p_915->g_9 p_915->g_77 p_915->g_78 p_915->g_142 p_915->g_116 p_915->g_45 p_915->g_2 p_915->l_comm_values p_915->g_5 p_915->g_107 p_915->g_143 p_915->g_125 p_915->g_126 p_915->g_34 p_915->g_197 p_915->g_117 p_915->g_214 p_915->g_180 p_915->g_224 p_915->g_179 p_915->g_188 p_915->g_242 p_915->g_140 p_915->g_247 p_915->g_10 p_915->g_209 p_915->g_167 p_915->g_285 p_915->g_289 p_915->g_290 p_915->g_296 p_915->g_297 p_915->g_137 p_915->g_317 p_915->g_321 p_915->g_360 p_915->g_403 p_915->g_417 p_915->g_423 p_915->g_449 p_915->g_515 p_915->g_518 p_915->g_549 p_915->g_555 p_915->g_8 p_915->g_568 p_915->g_594 p_915->g_596 p_915->g_581 p_915->g_650 p_915->g_654 p_915->g_671 p_915->g_685 p_915->g_688 p_915->g_696 p_915->g_728 p_915->g_751
 * writes: p_915->g_19 p_915->g_142 p_915->g_143 p_915->g_107 p_915->g_5 p_915->g_78 p_915->g_167 p_915->g_77 p_915->g_126 p_915->g_125 p_915->g_140 p_915->g_188 p_915->g_comm_values p_915->g_224 p_915->g_116 p_915->g_137 p_915->g_449 p_915->g_297 p_915->g_581 p_915->g_423 p_915->g_696 p_915->g_747 p_915->g_751 p_915->g_596 p_915->g_180 p_915->g_685 p_915->g_417
 */
int32_t  func_56(int32_t  p_57, struct S0 * p_915)
{ /* block id: 42 */
    int32_t *l_148 = &p_915->g_19;
    int32_t ****l_165[8] = {&p_915->g_125,&p_915->g_125,&p_915->g_125,&p_915->g_125,&p_915->g_125,&p_915->g_125,&p_915->g_125,&p_915->g_125};
    int32_t ***l_166[8][9] = {{&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126},{&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126},{&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126},{&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126},{&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126},{&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126},{&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126},{&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126,&p_915->g_126}};
    int64_t l_205[8][8] = {{0x326E8E737431E9B5L,0L,0x44743152C3249E6FL,0x326E8E737431E9B5L,0x73CF29838B50A315L,0x44743152C3249E6FL,0x44743152C3249E6FL,0x73CF29838B50A315L},{0x326E8E737431E9B5L,0L,0x44743152C3249E6FL,0x326E8E737431E9B5L,0x73CF29838B50A315L,0x44743152C3249E6FL,0x44743152C3249E6FL,0x73CF29838B50A315L},{0x326E8E737431E9B5L,0L,0x44743152C3249E6FL,0x326E8E737431E9B5L,0x73CF29838B50A315L,0x44743152C3249E6FL,0x44743152C3249E6FL,0x73CF29838B50A315L},{0x326E8E737431E9B5L,0L,0x44743152C3249E6FL,0x326E8E737431E9B5L,0x73CF29838B50A315L,0x44743152C3249E6FL,0x44743152C3249E6FL,0x73CF29838B50A315L},{0x326E8E737431E9B5L,0L,0x44743152C3249E6FL,0x326E8E737431E9B5L,0x73CF29838B50A315L,0x44743152C3249E6FL,0x44743152C3249E6FL,0x73CF29838B50A315L},{0x326E8E737431E9B5L,0L,0x44743152C3249E6FL,0x326E8E737431E9B5L,0x73CF29838B50A315L,0x44743152C3249E6FL,0x44743152C3249E6FL,0x73CF29838B50A315L},{0x326E8E737431E9B5L,0L,0x44743152C3249E6FL,0x326E8E737431E9B5L,0x73CF29838B50A315L,0x44743152C3249E6FL,0x44743152C3249E6FL,0x73CF29838B50A315L},{0x326E8E737431E9B5L,0L,0x44743152C3249E6FL,0x326E8E737431E9B5L,0x73CF29838B50A315L,0x44743152C3249E6FL,0x44743152C3249E6FL,0x73CF29838B50A315L}};
    uint8_t *l_206 = &p_915->g_140;
    VECTOR(int64_t, 16) l_215 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x7BC0433EE482B487L), 0x7BC0433EE482B487L), 0x7BC0433EE482B487L, (-1L), 0x7BC0433EE482B487L, (VECTOR(int64_t, 2))((-1L), 0x7BC0433EE482B487L), (VECTOR(int64_t, 2))((-1L), 0x7BC0433EE482B487L), (-1L), 0x7BC0433EE482B487L, (-1L), 0x7BC0433EE482B487L);
    VECTOR(int64_t, 4) l_216 = (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 1L), 1L);
    VECTOR(int32_t, 8) l_241 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    uint32_t l_264 = 4294967295UL;
    VECTOR(uint16_t, 8) l_281 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xB12EL), 0xB12EL), 0xB12EL, 0UL, 0xB12EL);
    VECTOR(uint16_t, 4) l_282 = (VECTOR(uint16_t, 4))(0xC322L, (VECTOR(uint16_t, 2))(0xC322L, 0xE1EDL), 0xE1EDL);
    VECTOR(int8_t, 2) l_284 = (VECTOR(int8_t, 2))(0x6BL, 0x09L);
    uint16_t *l_286 = (void*)0;
    VECTOR(int32_t, 16) l_288 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 9L), 9L), 9L, 0L, 9L, (VECTOR(int32_t, 2))(0L, 9L), (VECTOR(int32_t, 2))(0L, 9L), 0L, 9L, 0L, 9L);
    VECTOR(int8_t, 16) l_294 = (VECTOR(int8_t, 16))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0x26L), 0x26L), 0x26L, 0x6EL, 0x26L, (VECTOR(int8_t, 2))(0x6EL, 0x26L), (VECTOR(int8_t, 2))(0x6EL, 0x26L), 0x6EL, 0x26L, 0x6EL, 0x26L);
    VECTOR(uint8_t, 16) l_314 = (VECTOR(uint8_t, 16))(0x38L, (VECTOR(uint8_t, 4))(0x38L, (VECTOR(uint8_t, 2))(0x38L, 7UL), 7UL), 7UL, 0x38L, 7UL, (VECTOR(uint8_t, 2))(0x38L, 7UL), (VECTOR(uint8_t, 2))(0x38L, 7UL), 0x38L, 7UL, 0x38L, 7UL);
    VECTOR(int32_t, 2) l_315 = (VECTOR(int32_t, 2))((-9L), 0x26FBDC7FL);
    uint64_t l_348 = 0xA0BFD9BED3464A58L;
    VECTOR(int16_t, 2) l_371 = (VECTOR(int16_t, 2))(1L, (-7L));
    int64_t l_378[10][3][4] = {{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}},{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}},{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}},{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}},{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}},{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}},{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}},{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}},{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}},{{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L},{0x5B3EBFCC78FBB9AAL,0x13FAABA978031070L,1L,0x50F08702E59BF525L}}};
    VECTOR(int16_t, 2) l_389 = (VECTOR(int16_t, 2))((-1L), 4L);
    uint16_t *l_425 = (void*)0;
    int16_t l_444 = 0x0C53L;
    int32_t *l_476 = &p_915->g_10;
    VECTOR(int16_t, 8) l_513 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 9L), 9L), 9L, 1L, 9L);
    int8_t l_543 = 0x53L;
    VECTOR(uint32_t, 8) l_551 = (VECTOR(uint32_t, 8))(0x902FA5C0L, (VECTOR(uint32_t, 4))(0x902FA5C0L, (VECTOR(uint32_t, 2))(0x902FA5C0L, 4294967291UL), 4294967291UL), 4294967291UL, 0x902FA5C0L, 4294967291UL);
    VECTOR(uint32_t, 8) l_554 = (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x413A2F58L), 0x413A2F58L), 0x413A2F58L, 4294967294UL, 0x413A2F58L);
    VECTOR(uint8_t, 16) l_564 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint8_t, 2))(1UL, 0UL), (VECTOR(uint8_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
    VECTOR(int64_t, 2) l_569 = (VECTOR(int64_t, 2))(0x2F3F4E77BEDAD9FCL, 0x2B16A9EE47C63F35L);
    VECTOR(int16_t, 4) l_619 = (VECTOR(int16_t, 4))(0x73DAL, (VECTOR(int16_t, 2))(0x73DAL, 0x1C8AL), 0x1C8AL);
    VECTOR(int16_t, 4) l_643 = (VECTOR(int16_t, 4))(0x38A1L, (VECTOR(int16_t, 2))(0x38A1L, 0L), 0L);
    VECTOR(uint16_t, 8) l_653 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x4EA3L), 0x4EA3L), 0x4EA3L, 1UL, 0x4EA3L);
    VECTOR(int8_t, 2) l_668 = (VECTOR(int8_t, 2))(6L, 1L);
    VECTOR(int8_t, 8) l_687 = (VECTOR(int8_t, 8))(0x4AL, (VECTOR(int8_t, 4))(0x4AL, (VECTOR(int8_t, 2))(0x4AL, 0x22L), 0x22L), 0x22L, 0x4AL, 0x22L);
    uint8_t l_694 = 0x62L;
    VECTOR(uint16_t, 4) l_734 = (VECTOR(uint16_t, 4))(0x5E38L, (VECTOR(uint16_t, 2))(0x5E38L, 65533UL), 65533UL);
    VECTOR(uint16_t, 8) l_762 = (VECTOR(uint16_t, 8))(0x2B2BL, (VECTOR(uint16_t, 4))(0x2B2BL, (VECTOR(uint16_t, 2))(0x2B2BL, 8UL), 8UL), 8UL, 0x2B2BL, 8UL);
    VECTOR(int32_t, 2) l_771 = (VECTOR(int32_t, 2))(1L, 0x3DD699A1L);
    VECTOR(int8_t, 16) l_780 = (VECTOR(int8_t, 16))(0x58L, (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x14L), 0x14L), 0x14L, 0x58L, 0x14L, (VECTOR(int8_t, 2))(0x58L, 0x14L), (VECTOR(int8_t, 2))(0x58L, 0x14L), 0x58L, 0x14L, 0x58L, 0x14L);
    uint64_t l_783 = 18446744073709551610UL;
    int16_t l_806[8] = {0x3D29L,(-1L),0x3D29L,0x3D29L,(-1L),0x3D29L,0x3D29L,(-1L)};
    int i, j, k;
    for (p_915->g_19 = 0; (p_915->g_19 < (-8)); p_915->g_19 = safe_sub_func_int8_t_s_s(p_915->g_19, 1))
    { /* block id: 45 */
        int64_t l_82 = 0x5E87A905BEA6296EL;
        (*p_915->g_126) = func_61(p_915->g_comm_values[p_915->tid], func_65(func_71(p_915->g_9, p_915->g_77, (p_57 , func_79(l_82, p_57, p_915)), l_148, p_57, p_915), p_915->g_2, p_915->g_comm_values[p_915->tid], p_57, p_57, p_915), p_57, p_915);
    }
    (*l_148) &= ((((void*)0 != l_165[5]) , ((l_166[1][8] = &p_915->g_126) == (void*)0)) , ((VECTOR(int32_t, 2))(0x4BA823D4L, 0x6DBE4F7CL)).hi);
    if (((*p_915->g_77) != (p_915->g_167 = (**p_915->g_125))))
    { /* block id: 99 */
        int32_t **l_184 = &p_915->g_167;
        VECTOR(uint8_t, 8) l_195 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 3UL), 3UL), 3UL, 255UL, 3UL);
        VECTOR(uint8_t, 4) l_198 = (VECTOR(uint8_t, 4))(0xEAL, (VECTOR(uint8_t, 2))(0xEAL, 1UL), 1UL);
        int32_t ***l_219 = &p_915->g_126;
        uint32_t l_225[10][5] = {{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0x9DCF5472L,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
        int8_t *l_243 = &p_915->g_142;
        uint32_t l_246 = 3UL;
        VECTOR(uint32_t, 8) l_250 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xEBE084FBL), 0xEBE084FBL), 0xEBE084FBL, 1UL, 0xEBE084FBL);
        int32_t l_260 = 0x31C7AFC4L;
        uint32_t l_265[7][9][4] = {{{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L}},{{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L}},{{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L}},{{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L}},{{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L}},{{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L}},{{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L},{4294967288UL,0xD536F015L,0x3951CD99L,0x3951CD99L}}};
        VECTOR(uint16_t, 8) l_283 = (VECTOR(uint16_t, 8))(0xB8D9L, (VECTOR(uint16_t, 4))(0xB8D9L, (VECTOR(uint16_t, 2))(0xB8D9L, 1UL), 1UL), 1UL, 0xB8D9L, 1UL);
        uint16_t **l_287[2][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_287[i][j] = &l_286;
        }
        for (p_915->g_5 = 0; (p_915->g_5 > (-3)); --p_915->g_5)
        { /* block id: 102 */
            int32_t **l_174 = (void*)0;
            VECTOR(uint8_t, 2) l_194 = (VECTOR(uint8_t, 2))(0xA9L, 0x1CL);
            uint32_t l_210 = 0UL;
            int16_t *l_211[2][5][5] = {{{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143},{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143},{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143},{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143},{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143}},{{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143},{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143},{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143},{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143},{&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143,&p_915->g_143}}};
            int i, j, k;
            for (p_915->g_107 = 0; (p_915->g_107 < (-12)); p_915->g_107 = safe_sub_func_int32_t_s_s(p_915->g_107, 1))
            { /* block id: 105 */
                if ((safe_rshift_func_int8_t_s_s((p_57 || (l_174 != ((*p_915->g_125) = (*p_915->g_125)))), 7)))
                { /* block id: 107 */
                    int32_t **l_185 = &p_915->g_78;
                    for (p_915->g_142 = 8; (p_915->g_142 < 9); p_915->g_142 = safe_add_func_uint64_t_u_u(p_915->g_142, 7))
                    { /* block id: 110 */
                        VECTOR(int16_t, 2) l_181 = (VECTOR(int16_t, 2))(0L, 0x1E00L);
                        uint64_t *l_186 = (void*)0;
                        uint64_t *l_187[3];
                        int32_t l_189 = 1L;
                        uint64_t l_190 = 0UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_187[i] = &p_915->g_188;
                        l_190 &= ((p_915->g_9 & ((safe_div_func_uint16_t_u_u((((+p_57) != 0x80E4L) != ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(p_915->g_179.zz)), ((VECTOR(uint32_t, 2))(p_915->g_180.zz))))).odd), ((!0x71CD10DCL) , ((VECTOR(int16_t, 16))(l_181.yyyyyxxyyyxxxyyy)).s4))) != (safe_mod_func_int64_t_s_s((((l_184 == l_185) != 0x75E0L) ^ (l_189 = p_57)), (p_915->g_143 , l_181.x))))) ^ p_915->g_45.x);
                        if ((*p_915->g_34))
                            continue;
                        return p_57;
                    }
                }
                else
                { /* block id: 116 */
                    VECTOR(uint8_t, 16) l_196 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x27L), 0x27L), 0x27L, 255UL, 0x27L, (VECTOR(uint8_t, 2))(255UL, 0x27L), (VECTOR(uint8_t, 2))(255UL, 0x27L), 255UL, 0x27L, 255UL, 0x27L);
                    int i, j;
                    for (p_915->g_143 = 0; (p_915->g_143 == (-17)); p_915->g_143 = safe_sub_func_uint32_t_u_u(p_915->g_143, 6))
                    { /* block id: 119 */
                        uint16_t l_193 = 0xADDCL;
                        return l_193;
                    }
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_915->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[(safe_mod_func_uint32_t_u_u((((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(255UL, 1UL, ((VECTOR(uint8_t, 8))(l_194.yxxxyyyy)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(255UL, 255UL)))), (p_57 || ((void*)0 != &p_915->g_140)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_195.s31155503)).s04)), 0x70L)).s9f69, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 4))(l_196.s9e7b)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_915->g_197.xzwy)).ywzzzwzyywwwxwzx)).sb45b))).lo)).yxyx))).xyzwyxwzyzzyyyyx))), ((VECTOR(uint8_t, 16))(l_198.zwxwwyzzwyxzxzxy))))).s7 > (safe_lshift_func_int16_t_s_s((*l_148), p_915->g_117.s5))), 10))][(safe_mod_func_uint32_t_u_u(p_915->tid, 12))]));
                    for (p_915->g_19 = (-24); (p_915->g_19 != (-22)); p_915->g_19++)
                    { /* block id: 127 */
                        return p_57;
                    }
                }
            }
            (*l_148) = (p_915->g_45.x < (safe_mod_func_uint32_t_u_u(((l_205[1][2] , &l_174) == (p_915->g_125 = ((p_915->g_143 = ((l_206 == (void*)0) , ((VECTOR(int16_t, 16))((-3L), (safe_sub_func_uint16_t_u_u((0xB39EC007L && (+((VECTOR(int32_t, 4))(p_915->g_209.yyyy)).w)), (GROUP_DIVERGE(1, 1) != ((VECTOR(int64_t, 16))((-3L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x6B128E4D22ADB033L, 1L)), 0x2C26C5A004C85C76L, 0x45C427A46F4FCCFEL)), p_57, ((VECTOR(int64_t, 2))((-5L), 1L)), 0x77371D450CAA9B47L, (4UL > p_57), ((VECTOR(int64_t, 2))(0x496A5FA51099E4DFL)), 0L, ((VECTOR(int64_t, 2))(0x1C57274BB9F9DEE7L)), 0x5CCE189E2EE13EF0L)).s4))), 1L, ((VECTOR(int16_t, 4))(0x3D9CL)), 0x3486L, ((VECTOR(int16_t, 2))(0x08CEL)), l_210, (-8L), 0L, 0L, 0x10BEL, 1L)).sd)) , &l_184))), p_57)));
        }
        if (((p_915->g_143 = 0x7B61L) & (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_915->g_214.xy)))).odd != (((p_915->g_180.x && ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))(l_215.s2bf7bafebad6d555)).hi, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 8))(l_216.xzwxywwy)).s00, (int64_t)(safe_sub_func_uint16_t_u_u((p_915->g_45.w <= ((p_57 , (p_915->g_125 = &l_184)) == (l_219 = &p_915->g_126))), ((GROUP_DIVERGE(0, 1) & (safe_mul_func_int8_t_s_s(((((*l_206) = (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(0x2A43L, ((VECTOR(uint16_t, 4))(p_915->g_224.yyxy)), ((p_915->g_179.y <= 251UL) < p_57), 65528UL, p_57, 0UL, ((VECTOR(uint16_t, 4))(0x0E0CL)), 65529UL, 3UL, 0x272BL)).s4, 10))) != p_915->g_116.x) < (-9L)), 0UL))) > 0x0DD053B3811DD9A7L))), (int64_t)p_915->g_117.s6))), p_915->g_188, p_915->g_117.s3, 0x51E40C635BAB6BCBL, ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 4))(0L)), p_915->g_224.x, 0L, 1L)))).hi, ((VECTOR(int64_t, 8))((-3L)))))), ((VECTOR(int64_t, 2))(0x16540B88C9C6E5BAL)), 0x5069D47E15903892L, 0x453EFB3BCDCE5CD6L, (-1L), 0x09D66DD006A17E19L, 1L, 0x7843924F58DC4AD3L)).sf) , 18446744073709551610UL) & l_225[7][2]))))
        { /* block id: 140 */
            int32_t ***l_232 = &l_184;
            VECTOR(int32_t, 16) l_240 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x07EFCB92L), 0x07EFCB92L), 0x07EFCB92L, 1L, 0x07EFCB92L, (VECTOR(int32_t, 2))(1L, 0x07EFCB92L), (VECTOR(int32_t, 2))(1L, 0x07EFCB92L), 1L, 0x07EFCB92L, 1L, 0x07EFCB92L);
            int8_t *l_244 = &p_915->g_142;
            int8_t *l_245 = &p_915->g_142;
            int16_t *l_259 = &p_915->g_143;
            int64_t *l_261 = (void*)0;
            int64_t *l_262 = (void*)0;
            int64_t *l_263[8] = {&l_205[1][2],&l_205[1][2],&l_205[1][2],&l_205[1][2],&l_205[1][2],&l_205[1][2],&l_205[1][2],&l_205[1][2]};
            int i;
            (*l_148) &= (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 8))(((safe_sub_func_int32_t_s_s(((((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 4))((safe_mod_func_uint64_t_u_u(0x21012C4BCE4BC551L, (p_915->g_179.y || (((void*)0 == l_232) != (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s(p_57)), p_57)))))), 0x64FCCB9FAF5DF2E6L, 5UL, 1UL)).lo))).yyxxyyyy)).s3 > (safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(1UL, ((((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(l_240.s28314172d5eb5192)), (int32_t)(l_240.s2 = 9L)))).s79e1, ((VECTOR(int32_t, 2))(l_241.s02)).xxyx, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(p_915->g_242.s4d)).yxyx, (int16_t)((l_244 = l_243) == l_245)))), ((VECTOR(uint16_t, 4))(0xAB2EL)))))))).w, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x0E53AC29L)), ((VECTOR(int32_t, 2))(0x5A2E6EB3L)), 1L)).s24, (int32_t)p_57))).yyyyyyxxyxyxyyyy)).s3b)), ((VECTOR(int32_t, 2))((-5L)))))).hi , p_915->g_140) | l_246))), 0x214EL))) & 0UL) & p_915->g_2) && p_57), 0x0C471224L)) < FAKE_DIVERGE(p_915->group_2_offset, get_group_id(2), 10)), 9L, p_57, 8L, (-1L), ((VECTOR(int32_t, 2))(0x32BD8090L)), 0x3D80D6C4L)).odd, ((VECTOR(int32_t, 4))(0x62E7C312L))))).zzxyyzxzwywyzxyz)).sf , 0x15B034C1L);
            (*l_148) = (((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_915->g_247.s61773565)).hi)).yywxyyxw, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(1L, ((safe_rshift_func_uint8_t_u_u(((((~(((VECTOR(uint32_t, 2))(l_250.s50)).hi ^ (0L == ((((p_915->g_188 |= (0x09L & (((&p_915->g_33[7][1] == (p_915->g_125 = &l_184)) , 0xAFA0L) <= l_240.se))) != (~(p_915->g_comm_values[p_915->tid] |= ((safe_mul_func_uint16_t_u_u(1UL, (l_260 &= ((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((*l_259) = (((safe_rshift_func_int8_t_s_u(((*l_243) = (0x292ECBBEFF508AB5L < p_57)), p_915->g_117.s6)) && p_57) & p_915->l_comm_values[(safe_mod_func_uint32_t_u_u(p_915->tid, 12))])), p_915->g_242.sd)), p_57)) & p_915->g_10)))) >= p_915->g_140)))) ^ l_264) | p_57)))) , p_915->g_179.y) , &p_915->g_140) == (void*)0), 1)) | p_915->g_5), 0x23ADF52CL, p_57, 0x132735B1L, 0x36AB2757L, ((VECTOR(int32_t, 8))(0x4AA7F815L)), 0x1E60B38DL, 1L)).s9763, (int32_t)p_57, (int32_t)9L))).odd, ((VECTOR(int32_t, 2))((-1L)))))).yxyyyyyy, (int32_t)p_915->g_116.x, (int32_t)l_265[5][0][2]))).s64, ((VECTOR(int32_t, 2))(0L))))).yyyyxxxx))).s7 , (*p_915->g_34));
        }
        else
        { /* block id: 151 */
            uint64_t *l_272 = (void*)0;
            uint64_t *l_273 = &p_915->g_188;
            (*l_184) = func_61(p_915->g_224.x, (*p_915->g_125), (safe_add_func_uint8_t_u_u(p_57, ((safe_mod_func_uint16_t_u_u(p_915->g_180.z, p_915->g_209.y)) == (p_915->g_107 || ((*l_273) |= (safe_div_func_uint32_t_u_u(p_57, FAKE_DIVERGE(p_915->global_2_offset, get_global_id(2), 10)))))))), p_915);
            (*l_148) = (safe_lshift_func_int8_t_s_u(0L, 3));
        }
        l_260 ^= (safe_unary_minus_func_uint32_t_u(((0xBCF0CCA0L <= (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0x25A5L, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 8))(p_915->g_247.s7, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(0x94A1L, ((VECTOR(uint16_t, 2))(l_281.s36)), 0xA6E1L)).hi, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_282.zzyywzxy)))))).s43))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))(l_283.s3440)).wzwxzxyxxyyyxzwy, ((VECTOR(uint16_t, 2))(0UL, 3UL)).yyyxyyyxyxyyxxxy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(l_284.yyxxyxyxyyyxxyxx)).s5c, ((VECTOR(uint8_t, 4))((p_915->g_19 , ((p_915->g_224.y = (p_915->g_285 != (l_286 = l_286))) >= (((((*l_148) ^= ((VECTOR(int32_t, 4))(l_288.s73ff)).w) != (p_915->g_289 | p_57)) <= (0UL >= l_225[0][2])) <= 5UL))), ((VECTOR(uint8_t, 2))(0xAEL)), 0xF2L)).odd))).yxyxyyxxxyxxyxxy, ((VECTOR(int16_t, 16))(0x4D76L))))).sddef))).xzwwwyxy)).s0771300734271415, ((VECTOR(uint16_t, 16))(65533UL))))))).s34f7, ((VECTOR(uint16_t, 4))(0xB7DDL))))), (uint16_t)0x901EL, (uint16_t)0x9105L))).yywzzxxxzxyzxyzx))))).sd2))))), ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 2))(65535UL)), 65531UL)).s5656413736142060, ((VECTOR(uint16_t, 16))(0x13C7L))))).sc95a))).x)), p_57))) >= 0xD08975AAL)));
    }
    else
    { /* block id: 160 */
        int32_t l_293[5];
        VECTOR(int8_t, 2) l_295 = (VECTOR(int8_t, 2))(4L, 0x76L);
        uint16_t *l_304 = (void*)0;
        int32_t l_305 = (-1L);
        int32_t l_306 = 0x7A8BE72EL;
        uint32_t l_316 = 0xEF47BC0FL;
        VECTOR(uint32_t, 8) l_320 = (VECTOR(uint32_t, 8))(0xA10CC3B3L, (VECTOR(uint32_t, 4))(0xA10CC3B3L, (VECTOR(uint32_t, 2))(0xA10CC3B3L, 0xD76AF81AL), 0xD76AF81AL), 0xD76AF81AL, 0xA10CC3B3L, 0xD76AF81AL);
        VECTOR(int32_t, 8) l_341 = (VECTOR(int32_t, 8))(0x736BA712L, (VECTOR(int32_t, 4))(0x736BA712L, (VECTOR(int32_t, 2))(0x736BA712L, 0x239FBF6BL), 0x239FBF6BL), 0x239FBF6BL, 0x736BA712L, 0x239FBF6BL);
        VECTOR(uint32_t, 2) l_368 = (VECTOR(uint32_t, 2))(4294967292UL, 4294967293UL);
        uint64_t *l_383 = (void*)0;
        uint64_t *l_384 = &p_915->g_188;
        int8_t *l_398 = (void*)0;
        int8_t *l_399[3][7][5] = {{{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0},{(void*)0,(void*)0,(void*)0,&p_915->g_142,(void*)0}}};
        int32_t ***l_409 = &p_915->g_77;
        int64_t l_500 = 1L;
        uint8_t l_502 = 0x4FL;
        VECTOR(uint32_t, 4) l_550 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x1878D25DL), 0x1878D25DL);
        VECTOR(uint32_t, 2) l_553 = (VECTOR(uint32_t, 2))(0xE108DE4BL, 0x19ECD803L);
        VECTOR(int16_t, 2) l_556 = (VECTOR(int16_t, 2))((-1L), 1L);
        VECTOR(int8_t, 2) l_563 = (VECTOR(int8_t, 2))(0x71L, 2L);
        VECTOR(int32_t, 4) l_570 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x341E6F3FL), 0x341E6F3FL);
        VECTOR(uint64_t, 16) l_592 = (VECTOR(uint64_t, 16))(0x5EC28F76653289B1L, (VECTOR(uint64_t, 4))(0x5EC28F76653289B1L, (VECTOR(uint64_t, 2))(0x5EC28F76653289B1L, 0xD93DD2B1F4A4111BL), 0xD93DD2B1F4A4111BL), 0xD93DD2B1F4A4111BL, 0x5EC28F76653289B1L, 0xD93DD2B1F4A4111BL, (VECTOR(uint64_t, 2))(0x5EC28F76653289B1L, 0xD93DD2B1F4A4111BL), (VECTOR(uint64_t, 2))(0x5EC28F76653289B1L, 0xD93DD2B1F4A4111BL), 0x5EC28F76653289B1L, 0xD93DD2B1F4A4111BL, 0x5EC28F76653289B1L, 0xD93DD2B1F4A4111BL);
        VECTOR(uint64_t, 16) l_593 = (VECTOR(uint64_t, 16))(0xEEB2702F9E4B4856L, (VECTOR(uint64_t, 4))(0xEEB2702F9E4B4856L, (VECTOR(uint64_t, 2))(0xEEB2702F9E4B4856L, 0x597BAB919C713285L), 0x597BAB919C713285L), 0x597BAB919C713285L, 0xEEB2702F9E4B4856L, 0x597BAB919C713285L, (VECTOR(uint64_t, 2))(0xEEB2702F9E4B4856L, 0x597BAB919C713285L), (VECTOR(uint64_t, 2))(0xEEB2702F9E4B4856L, 0x597BAB919C713285L), 0xEEB2702F9E4B4856L, 0x597BAB919C713285L, 0xEEB2702F9E4B4856L, 0x597BAB919C713285L);
        uint64_t l_627 = 0xD2CCFAEFC830FA9BL;
        uint32_t l_644 = 0xADF6F47CL;
        int64_t *l_645 = (void*)0;
        int64_t *l_646 = &l_378[8][0][2];
        VECTOR(uint8_t, 16) l_649 = (VECTOR(uint8_t, 16))(0x53L, (VECTOR(uint8_t, 4))(0x53L, (VECTOR(uint8_t, 2))(0x53L, 0x67L), 0x67L), 0x67L, 0x53L, 0x67L, (VECTOR(uint8_t, 2))(0x53L, 0x67L), (VECTOR(uint8_t, 2))(0x53L, 0x67L), 0x53L, 0x67L, 0x53L, 0x67L);
        VECTOR(uint16_t, 8) l_659 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), 0UL), 0UL, 65534UL, 0UL);
        VECTOR(int8_t, 8) l_686 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x52L), 0x52L), 0x52L, 6L, 0x52L);
        uint64_t l_701 = 0x6B3D7C12143E7053L;
        VECTOR(int16_t, 8) l_708 = (VECTOR(int16_t, 8))(0x0872L, (VECTOR(int16_t, 4))(0x0872L, (VECTOR(int16_t, 2))(0x0872L, 0x5891L), 0x5891L), 0x5891L, 0x0872L, 0x5891L);
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_293[i] = (-8L);
        if (((((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_915->g_290.xy)).yyxxyyyy)).s7316776653357243, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((-7L) == (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0UL, 0xAEBCDC3CAAAD1E60L)), 0x4F5053C86591A109L, 0x919B5D5DB5E339E2L, 0x3BF161AC9980CB4FL, 18446744073709551612UL, 0x8609A7D0FC8F1A82L, 0xC6370D1AFEF068E4L)).s1 != ((+p_57) && (safe_add_func_int8_t_s_s((0x00D47D5A1204D076L ^ p_57), (l_293[4] , p_57)))))), ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_294.s604f)).xxyywxwx)).s32, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_295.yyxx)).hi)).xyxyyxyx)).s20))), 2L, (-7L), (-4L), 0x5BL, 0L)).s0643750647574760)).s64, ((VECTOR(int8_t, 16))(p_915->g_296.yxyxyyyyyyxyyyyx)).s10, ((VECTOR(int8_t, 2))(p_915->g_297.s50))))), (-1L), 0x5EL, ((-5L) || ((p_915->g_224.x &= (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(p_915->g_197.y, p_915->g_45.z)) <= p_915->g_137) < p_57), 10)), 2))) || p_915->g_10)), p_57, ((VECTOR(int8_t, 2))(0x07L)), ((VECTOR(int8_t, 4))((-4L))), ((VECTOR(int8_t, 2))(0x17L)), 9L)).s9e, ((VECTOR(int8_t, 2))(0x1DL)), ((VECTOR(int8_t, 2))((-4L)))))).xyyyxyxxyyyxyyxy, ((VECTOR(int8_t, 16))(0x7BL))))).even, ((VECTOR(int8_t, 8))(0x31L)), ((VECTOR(int8_t, 8))(0x16L))))), (-1L), ((VECTOR(int8_t, 2))(0x29L)), 0x07L, l_293[1], 0x2AL, (-8L))).lo, (int8_t)p_915->g_179.y))).s3102443224256435, ((VECTOR(int8_t, 16))((-1L)))))).sf != l_293[4]) > 0L))
        { /* block id: 162 */
            uint32_t l_307 = 4294967290UL;
            l_307--;
        }
        else
        { /* block id: 164 */
            uint8_t *l_330 = (void*)0;
            uint8_t *l_331[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_336 = (-4L);
            int8_t *l_337 = (void*)0;
            int8_t *l_338 = &p_915->g_142;
            int32_t l_340 = 0x312887DCL;
            int32_t l_343 = (-7L);
            int32_t l_345 = 0x2EFD26F8L;
            int32_t l_346[9][5][5] = {{{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L}},{{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L}},{{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L}},{{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L}},{{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L}},{{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L}},{{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L}},{{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L}},{{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L},{(-6L),(-1L),0x06345ED4L,(-2L),4L}}};
            uint16_t *l_361[7];
            int32_t *l_374 = &l_293[4];
            uint16_t **l_377 = &l_286;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_361[i] = (void*)0;
            l_305 = ((VECTOR(int32_t, 2))(0x28AB9211L, 0x247B8B4CL)).hi;
            if ((((safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(255UL, ((*l_206) &= ((VECTOR(uint8_t, 2))(l_314.sde)).even))), (((VECTOR(int64_t, 16))(0x456B98C71873C17FL, (((VECTOR(int32_t, 16))(l_315.xxyxyyxyyxyyxyxy)).s5 == ((VECTOR(uint32_t, 8))(0xF5295B9CL, (l_316 != (((VECTOR(int32_t, 16))(p_915->g_317.yyyyyyxyxyyyyyxx)).sd < (safe_mul_func_int16_t_s_s(l_316, p_57)))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_320.s32512246)).s23)), ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x06666AF9L, 3UL)).yxyx)), ((VECTOR(uint32_t, 4))(p_915->g_321.wxxx))))))).s7), ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))((-2L), 0x5BA27FF7EFD16A6CL)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 4))(0x4B71E53B7330BCA1L, (safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(p_915->g_289, (((*l_338) |= ((-1L) & (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((p_57 <= 0x283F3FB56D082CCAL) , (--p_915->g_116.y)), (safe_lshift_func_int8_t_s_u(p_915->g_179.z, l_336)))), 2)))) || 249UL))) > p_57), p_57)), (-1L), 0x0215D92AAF338CC9L)).yxzxzyzx, ((VECTOR(int64_t, 8))(0x5BC583C7656BBC04L))))).s07)).yyxx)).lo))), (-1L), 0L, p_915->g_209.y, p_915->g_179.z, ((VECTOR(int64_t, 2))(0x436F27D343D97872L)), p_915->g_224.y, 0x53B229A5A3B342C6L, p_915->g_247.s7, 0x5BBED988472AB0E2L, 0x663D516ACF6A21E6L, (-3L))).s9 , p_57))) == 0L) | p_915->g_297.sa))
            { /* block id: 169 */
                int8_t l_339 = 0x04L;
                int32_t l_342 = 0L;
                int32_t l_344 = 0x6C8375D7L;
                int32_t l_347[7][7][4] = {{{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L}},{{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L}},{{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L}},{{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L}},{{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L}},{{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L}},{{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L},{0x624B9680L,0L,0x08485896L,1L}}};
                int i, j, k;
                (*p_915->g_125) = (*p_915->g_125);
                atomic_add(&p_915->g_atomic_reduction[get_linear_group_id()], (-1L));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_915->v_collective += p_915->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                l_348++;
                (*l_148) &= (safe_add_func_uint32_t_u_u(p_915->g_116.y, (*p_915->g_34)));
            }
            else
            { /* block id: 174 */
                uint32_t l_353 = 0x66F7A1ECL;
                --l_353;
            }
            (*l_148) ^= p_57;
            (*l_148) = (((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_915->g_360.s1420)).yywxwzyz)).s7, (l_346[4][0][1] = p_57))) > (safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_s((((VECTOR(uint32_t, 2))(l_368.yx)).even || (safe_div_func_int8_t_s_s((((0x2C4FL <= ((VECTOR(int16_t, 8))(l_371.xxyxyyyy)).s6) | ((((void*)0 == l_304) != ((p_915->g_224.y &= GROUP_DIVERGE(0, 1)) <= (((safe_lshift_func_int8_t_s_s(((l_305 = ((((*l_374) = p_57) , p_915->g_285) != (void*)0)) != (safe_sub_func_int8_t_s_s(((((p_915->g_285 != ((*l_377) = l_361[2])) & l_343) , 5L) , (-6L)), p_915->g_180.w))), 0)) & p_915->g_117.s7) , l_345))) ^ p_57)) > (-9L)), p_915->g_5))), l_378[6][0][1])) < p_915->g_321.y) , p_57) == 65535UL), l_345)), p_57))), FAKE_DIVERGE(p_915->local_0_offset, get_local_id(0), 10))) | 0x48L) , l_320.s0);
        }
        if ((safe_add_func_int64_t_s_s(1L, (safe_mod_func_int32_t_s_s((((0x10L <= (p_915->g_117.s7 < 0x5BL)) | ((p_57 , ((((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0L, (-6L))).xyyy)).zwwxzxzyyzzyxxyx, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))((((*l_384) = 0x9BFCBE6D0F294B9BL) <= (safe_add_func_uint8_t_u_u(l_320.s0, (FAKE_DIVERGE(p_915->group_2_offset, get_group_id(2), 10) >= (((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(l_389.xyxyyxyyyxyyxxyx)).odd, (int16_t)((l_305 &= ((p_915->g_45.x && (((*l_148) = (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_int8_t_s_u((p_915->l_comm_values[(safe_mod_func_uint32_t_u_u(p_915->tid, 12))] < p_915->g_321.w), l_368.y)) || (*l_148)) >= l_293[1]) < 1L), 2)), 7)) < p_57), p_915->g_224.y))) || 0x27L)) & 18446744073709551606UL)) , p_915->g_247.s3)))).s3, 8)) , 9UL) | p_57))))), l_316, (-4L), (-10L))).hi, ((VECTOR(int64_t, 2))(0x5854D075AC7C5B14L)), ((VECTOR(int64_t, 2))(0L))))).xyxyxxxyxyyyyyyy))).sa <= p_915->g_360.s5) | l_293[0])) > p_57)) < p_915->g_289), l_320.s5)))))
        { /* block id: 188 */
            VECTOR(int8_t, 16) l_404 = (VECTOR(int8_t, 16))(0x54L, (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, (-3L)), (-3L)), (-3L), 0x54L, (-3L), (VECTOR(int8_t, 2))(0x54L, (-3L)), (VECTOR(int8_t, 2))(0x54L, (-3L)), 0x54L, (-3L), 0x54L, (-3L));
            int32_t ***l_410 = &p_915->g_126;
            int64_t *l_420[8][2][10] = {{{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]},{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]}},{{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]},{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]}},{{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]},{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]}},{{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]},{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]}},{{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]},{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]}},{{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]},{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]}},{{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]},{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]}},{{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]},{(void*)0,&l_205[1][2],&l_205[0][7],&l_205[1][2],&l_205[6][5],(void*)0,(void*)0,&l_205[6][5],&l_205[1][2],&l_205[0][7]}}};
            uint32_t *l_421 = (void*)0;
            uint32_t *l_422 = &p_915->g_137;
            uint16_t *l_424 = (void*)0;
            uint8_t *l_446[4];
            int32_t l_458 = 1L;
            VECTOR(int16_t, 8) l_514 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
            VECTOR(uint32_t, 2) l_535 = (VECTOR(uint32_t, 2))(0UL, 0xA85C566DL);
            VECTOR(uint16_t, 8) l_567 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xFAB3L), 0xFAB3L), 0xFAB3L, 1UL, 0xFAB3L);
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_446[i] = &p_915->g_140;
            (*l_148) &= (safe_unary_minus_func_uint16_t_u((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(p_915->g_403.xxwyzzxw)).odd, ((VECTOR(int8_t, 2))(l_404.s43)).yxxy))).xwyyxyzxxxwywxxz)).sd, (safe_mod_func_uint8_t_u_u(p_915->g_45.y, (safe_mul_func_uint8_t_u_u((((l_409 == (p_915->g_125 = l_410)) || (safe_lshift_func_uint16_t_u_s(p_57, (18446744073709551609UL || (safe_div_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((p_57 == ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((-1L), 0x10E1L, 0x4751L, (-6L))).w, ((VECTOR(int16_t, 8))(p_915->g_417.s27466752)), (~((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_915->global_0_offset, get_global_id(0), 10), (l_420[1][0][1] == ((((*l_422) = p_915->g_117.s7) || ((+((p_57 || 0xD904L) > 0L)) >= p_915->g_423[3])) , (void*)0)))) > FAKE_DIVERGE(p_915->global_0_offset, get_global_id(0), 10))), ((VECTOR(int16_t, 2))(0x059EL)), ((VECTOR(int16_t, 2))(0x0C89L)), 1L, 0x2C05L)).s5), p_57)), FAKE_DIVERGE(p_915->local_0_offset, get_local_id(0), 10))))))) | l_341.s2), p_57))))))));
            (*l_148) = (p_57 ^ (l_424 == l_425));
            if ((p_915->g_297.sc , ((((*l_384) = ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(18446744073709551610UL, ((safe_mul_func_int16_t_s_s((((void*)0 != &p_915->g_142) ^ p_57), (1L != 0x5664L))) == (p_57 || (p_57 == p_915->g_209.x))), 0x7621D507E589DBBDL, ((VECTOR(uint64_t, 4))(0xF89AAE0F29C4DC5DL)), 0x59900F234326B582L)))).s5) <= p_57) || p_915->g_107)))
            { /* block id: 194 */
                int32_t l_428 = (-5L);
                (**l_410) = func_13(l_428, p_915);
                if ((atomic_inc(&p_915->l_atomic_input[19]) == 1))
                { /* block id: 197 */
                    int32_t l_430 = 0x5A29C6A4L;
                    int32_t *l_429[3];
                    int16_t l_431 = (-8L);
                    uint16_t l_434[7] = {0x3E2EL,65528UL,0x3E2EL,0x3E2EL,65528UL,0x3E2EL,0x3E2EL};
                    uint16_t *l_433 = &l_434[4];
                    uint16_t **l_432 = &l_433;
                    uint16_t **l_435 = &l_433;
                    uint16_t **l_436 = &l_433;
                    int32_t *l_437 = &l_430;
                    int32_t *l_438 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_429[i] = &l_430;
                    l_429[0] = (void*)0;
                    l_436 = (l_435 = (GROUP_DIVERGE(0, 1) , (l_431 , l_432)));
                    l_438 = l_437;
                    unsigned int result = 0;
                    result += l_430;
                    result += l_431;
                    int l_434_i0;
                    for (l_434_i0 = 0; l_434_i0 < 7; l_434_i0++) {
                        result += l_434[l_434_i0];
                    }
                    atomic_add(&p_915->l_special_values[19], result);
                }
                else
                { /* block id: 202 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 205 */
                uint32_t l_443 = 4294967295UL;
                int32_t l_445 = 0x3E778A05L;
                int8_t **l_475 = &l_398;
                uint16_t *l_477 = (void*)0;
                uint16_t *l_478 = (void*)0;
                uint16_t *l_479 = (void*)0;
                uint16_t *l_480 = (void*)0;
                uint16_t *l_481[8][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint32_t **l_501 = &l_421;
                int32_t l_503 = 0x494AC85EL;
                int32_t l_504 = 0L;
                int32_t l_505 = (-1L);
                int32_t *****l_527 = &l_165[5];
                uint64_t l_542 = 0x8B15A2948E14FD38L;
                int64_t l_544 = (-6L);
                VECTOR(uint32_t, 4) l_552 = (VECTOR(uint32_t, 4))(0x9E856BBDL, (VECTOR(uint32_t, 2))(0x9E856BBDL, 1UL), 1UL);
                int i, j;
                l_458 &= (+(p_57 > ((safe_add_func_uint8_t_u_u((((l_445 = (safe_add_func_int64_t_s_s(l_443, l_444))) & p_57) , (l_446[1] == (((((p_915->g_224.x &= FAKE_DIVERGE(p_915->local_1_offset, get_local_id(1), 10)) <= ((safe_div_func_int32_t_s_s(((*l_148) |= 6L), ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(p_915->g_449.s9d273b48)).s67, ((VECTOR(uint16_t, 2))(0x88E4L, 1UL))))).odd)) , ((safe_rshift_func_int8_t_s_s((((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(p_57, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_445, ((VECTOR(uint8_t, 8))((!p_57), 1UL, 0xD4L, 0UL, 7UL, p_915->g_107, 255UL, 0xF7L)), ((VECTOR(uint8_t, 4))(246UL)), ((VECTOR(uint8_t, 2))(0xAFL)), 246UL)).sc3c6)).lo)).xyyyxxxyxxxxxxyy)).s223d)).w)), p_57)) <= l_445), p_915->g_403.x)) != p_57) , p_915->g_107), 1)) > p_915->g_10))) | 0xE88C565BL) , 0x528BD31EL) , l_446[0]))), p_57)) || p_57)));
                l_341.s6 = (safe_mod_func_int32_t_s_s(((l_305 = ((*l_148) = (safe_add_func_uint8_t_u_u(((*l_206) = (safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_505 = (l_504 = (safe_rshift_func_uint16_t_u_s(1UL, (((((*l_475) = (void*)0) == l_399[2][2][1]) >= (l_476 == ((--p_915->g_449.sb) , (**l_410)))) , (l_503 = (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(0xF546L, 1)), 3)), (safe_sub_func_int8_t_s_s(p_915->g_140, ((safe_sub_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s(l_500, (l_445 = (((*l_501) = func_13((0x3697L <= 65535UL), p_915)) != l_422)))), l_502)) | 0x1F1E4E67L), p_915->g_290.x)) > 0xD9DE9C7963DB0333L))))), l_443)))))))), 1)), p_915->g_179.y)), p_57)), 4))), 0x01L)))) == 1L), 0x738B962EL));
                l_458 &= (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 8))(l_513.s25001166)).s23, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(l_514.s1122)), ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 4))(p_915->g_515.xyxz)), (int16_t)((*l_148) & 0x154FBB949EDCB538L), (int16_t)(((((((((~(((((safe_sub_func_int32_t_s_s((((VECTOR(int32_t, 2))(p_915->g_518.s25)).odd , p_57), (!((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((p_915->g_224.y--), ((((*l_527) = &p_915->g_125) == (void*)0) ^ ((((safe_div_func_int32_t_s_s(((((p_915->g_449.sa = (safe_unary_minus_func_uint16_t_u(p_57))) ^ 1L) , (safe_mod_func_int32_t_s_s((((VECTOR(uint32_t, 16))((0UL | (--(*l_384))), ((VECTOR(uint32_t, 4))(l_535.yyxy)), (safe_rshift_func_int8_t_s_s((p_915->g_142 = (p_915->g_297.s0 = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((p_57 < GROUP_DIVERGE(1, 1)), p_915->g_515.z)), p_57)))), 4)), p_915->g_143, ((VECTOR(uint32_t, 4))(0xE859C03EL)), ((VECTOR(uint32_t, 2))(0x7CF38516L)), 4294967289UL, 1UL, 0x4C3BEF4FL)).s2 , (*p_915->g_34)), 0xEA05791AL))) , 0x4751547EL), p_57)) ^ 0x07L) == p_57) , p_915->g_297.s7)))), p_915->g_19)), l_535.y)) , l_542)))) , l_543) , p_57) != p_915->g_417.s3) , p_915->g_197.z)) > 0x0CL) && p_57) ^ p_57) & p_57) , p_915->g_515.w) | p_57) < 0x36L) && p_57))))))))).hi))), ((VECTOR(uint16_t, 2))(3UL))))).hi)), (*l_476))) >= p_57), l_544)) && p_57), 0L));
                l_458 |= (((safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((&p_915->g_33[3][0] == (l_409 = l_410)), ((VECTOR(uint32_t, 2))(4294967295UL, 0x1E59D80BL)), 0x7DDC9BF1L)), ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_915->g_549.s494be3ba)).s3515563733724111)).s9a9d, ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(l_550.wzwzyxzx)).s53, ((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(l_551.s0370)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_552.wz)).xyxxyyxx)).s34, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_553.yy)), 4294967291UL, 0x84A628B1L)).lo))))), ((VECTOR(uint32_t, 4))(l_554.s1156)).lo))).yxyxyxxxxxxyyxxy, ((VECTOR(uint32_t, 4))(p_915->g_555.s4b9e)).yxxyxywwwxyyxwxw))).sff0a))))).s1 , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_556.yyyx)).zxwzxyzy)).even)).xxwxwwxy)).s20)).xxyyyxxxxxyyxyxy)).s3), p_915->g_449.sb)) , ((safe_mod_func_uint16_t_u_u((p_915->g_8 && ((safe_sub_func_uint64_t_u_u(l_542, (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(l_563.yy)).xyxxxyxy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 16))(l_564.s600560a2b3b036a1)), ((VECTOR(uint8_t, 2))(255UL, 0xDFL)).yxyyxyyyyyxxyxxy))).odd))))))).s6, ((l_341.s2 = (safe_add_func_int16_t_s_s(0x3DCFL, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(0x8F28L, 1UL)).yyyxxyyx, ((VECTOR(uint16_t, 4))(l_567.s6161)).xyywxxyw))).s3))) == ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_915->g_568.yyyy)), 1L, 0L, ((VECTOR(int64_t, 2))(l_569.yx)), 1L, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0L, ((VECTOR(int64_t, 8))(((((VECTOR(int32_t, 16))(l_570.zxwzxxzxywzwzyxx)).se , ((((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((&p_915->g_125 == &l_166[1][8]), 0x2374L)), p_57)) < 0L) < (-7L)) , p_915->g_289)) && 1UL), 7L, p_915->g_555.s0, p_915->g_518.s4, 0x54CDD7FA4C88921BL, 0x2B0240355C7F1E54L, 0x4C838D1AB620A524L, 0x1BB849DD89EE39C9L)), 0x0A8D37EA2F19213AL, 0x4CE36329DDFCB729L, l_320.s5, ((VECTOR(int64_t, 2))(8L)), 2L, 9L)).sc654)).wzyzxzzywwzyxwwy, ((VECTOR(int64_t, 16))(1L)), ((VECTOR(int64_t, 16))(0x12F2D42228D5ACEFL))))).s4b)), ((VECTOR(int64_t, 2))(9L))))).xyxy, (int64_t)p_57))), ((VECTOR(int64_t, 2))(5L)), 9L)).s5))))) || p_57)), 0x2A54L)) == p_57)), l_550.w)) >= p_57) != p_57);
            }
        }
        else
        { /* block id: 232 */
            uint32_t l_579 = 0x4D3FE23CL;
            int32_t *l_580 = &p_915->g_581;
            int32_t l_584[6][9][4] = {{{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)}},{{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)}},{{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)}},{{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)}},{{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)}},{{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)},{9L,1L,(-1L),(-1L)}}};
            uint8_t l_595 = 255UL;
            uint32_t *l_605 = (void*)0;
            uint32_t *l_606 = (void*)0;
            uint32_t *l_607 = &p_915->g_137;
            uint16_t *l_612 = (void*)0;
            uint16_t *l_613 = (void*)0;
            uint16_t *l_614 = (void*)0;
            uint16_t *l_615 = (void*)0;
            uint16_t *l_616 = (void*)0;
            int32_t ****l_626 = &l_409;
            int64_t *l_628 = &l_205[3][3];
            int i, j, k;
            l_584[5][8][2] &= ((safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((l_579 || (((*l_580) = (-1L)) , (((~(((*p_915->g_126) = (**p_915->g_125)) != &l_305)) , ((VECTOR(uint32_t, 2))(0xF754E084L, 5UL)).odd) , p_57))), p_915->g_568.x)), (safe_add_func_uint32_t_u_u((((((*l_148) ^= 0x55152D54L) < 4294967295UL) , (p_915->g_188 <= p_57)) | p_57), 0L)))) != p_915->g_360.s0);
            (*l_148) = ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint64_t_u_u(((void*)0 == &p_57), ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 4))(l_592.sbc12)).wyzxwwzzyxyyzxyy, ((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_593.scd)).xyyyxxyx)).s21)).xyxxxyxxyxxxxxyy)))))).s4)))), 1)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_915->g_594.yyxy)).wwzxwwwywwwzwyyx)).lo)).s3617434127132345)).s3)) < ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))((((*l_384) = (l_595 , (p_57 , (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_915->g_596.yxyyyyxx)).even)).z || ((safe_rshift_func_uint16_t_u_u(0UL, ((FAKE_DIVERGE(p_915->local_1_offset, get_local_id(1), 10) , ((((((safe_rshift_func_uint8_t_u_u(((void*)0 == l_409), 3)) , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(4294967289UL, ((VECTOR(uint32_t, 4))((safe_mul_func_uint8_t_u_u((0x61L <= (p_915->g_297.s6 = (safe_div_func_uint64_t_u_u(((((*l_628) ^= (((*l_607)++) , (safe_mul_func_uint16_t_u_u((p_915->g_449.s8++), (((VECTOR(int16_t, 16))(l_619.xzxwxwxwwywyyxxw)).s9 | (safe_rshift_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(((*l_206) ^= ((safe_div_func_int8_t_s_s((l_626 == &p_915->g_125), p_57)) & p_915->g_224.y)), l_627)) != p_57) && p_915->g_45.y), 1))))))) , p_915->g_5) >= 0x7142F8A2DDDE3800L), 0xBA7DA1A1937B6302L)))), p_915->g_417.s0)), 1UL, 4294967288UL, 4294967294UL)), 0x6CF44A59L, 0x4DA7FAD9L, 1UL)).lo)).x) & p_915->l_comm_values[(safe_mod_func_uint32_t_u_u(p_915->tid, 12))]) != p_57) , 18446744073709551615UL) , p_915->g_360.s4)) , 0x5A47L))) , p_915->g_417.s0))))) & p_57), p_915->g_143, 0xDFL, ((VECTOR(uint8_t, 4))(1UL)), 0UL)), p_915->g_423[3], ((VECTOR(uint8_t, 4))(3UL)), 0xDAL, 0UL, 0x5DL)).s2);
        }
        if (((VECTOR(int32_t, 4))((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((((((safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(p_915->g_45.x, (((safe_sub_func_int8_t_s_s(p_915->g_581, (safe_mul_func_uint16_t_u_u(l_592.s0, ((((((safe_mod_func_uint32_t_u_u((((*l_646) |= (((VECTOR(int16_t, 16))(l_643.ywyxyzyzzxzyxwxw)).sd & l_644)) == (safe_rshift_func_uint8_t_u_u(((*l_206) = (p_915->g_423[2] &= ((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(l_649.sf70909de)).s26, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_915->g_650.sa3)))).yyxxyxxx))).s65))), 0xC0L, 0x8CL)).yzwzyxzzzzxwzyzw, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((~(safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))(l_653.s0136)).yxywyzwwwyyywzyz, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_915->g_654.xxxzwzww)).even)).xzwzwxzwwyzzxwwz, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(5UL, 1UL)).yyyxyxyxxxyxyxyy))))).se, 12))), (!(safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(l_659.s65420556)).s7, 11)) <= (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_668.yyxy)))), 0x3AL, 0L, ((VECTOR(int8_t, 8))(0L, (l_304 != l_304), 0x34L, (safe_lshift_func_uint8_t_u_u((((((void*)0 == p_915->g_671) | p_57) , p_915->g_179.y) | p_915->g_180.x), 1)), 8L, ((VECTOR(int8_t, 2))(1L)), 0x20L)), 0L)).s5, p_915->g_555.sa)) > p_57), 6)), ((VECTOR(uint64_t, 2))(0x9A151F3C1E6E49D6L)), ((VECTOR(uint64_t, 2))(0x02108E27E5BE8A98L)), p_57, 0UL, 0x2557B1A2A7D364E7L)))))).s2 & (-1L)), 0L)), p_57))) , (*l_148)) <= 0x7D0EL), 65533UL))), 246UL, 0x87L)))).wxzzzxwzwwywxzwy))).s1)), 4))), p_57)) < 0x03707D8FL) || p_57) , l_425) == (void*)0) | l_659.s1))))) > 0x217873A2L) ^ p_915->g_650.sf))), (-1L))) && 0x8BL) == p_57) == p_57) ^ p_57) , 3L) | 0x682AL), 0L)), 1L)), 0x442A7387L, 1L, 0x764344FAL)).y)
        { /* block id: 248 */
            VECTOR(int64_t, 4) l_675 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x0C210954C056C860L), 0x0C210954C056C860L);
            int32_t *l_684[9][6][4] = {{{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305}},{{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305}},{{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305}},{{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305}},{{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305}},{{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305}},{{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305}},{{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305}},{{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305},{(void*)0,(void*)0,(void*)0,&l_305}}};
            int16_t *l_691[3];
            uint32_t *l_695 = &p_915->g_696;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_691[i] = (void*)0;
            l_341.s2 = (p_57 & ((((VECTOR(int64_t, 16))(l_675.xzwzywywwxwxxxxz)).sa , ((*l_695) ^= (FAKE_DIVERGE(p_915->group_1_offset, get_group_id(1), 10) ^ ((safe_rshift_func_uint8_t_u_s(((p_915->g_8 | ((p_915->g_188++) & (((((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))((-1L), (((*l_646) = (safe_mod_func_uint16_t_u_u(1UL, 0x314CL))) >= (safe_add_func_int8_t_s_s(((**l_409) != l_684[1][1][2]), p_915->g_596.y))), ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_915->g_685.yyxyyxxyxxyyxxyx)).se0)).yxyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_686.s15347337)).lo)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_687.s32)), 0x74L, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(p_915->g_688.xzwwwzzxxzzyzzww)).s00))), (safe_rshift_func_int16_t_s_s((l_306 = (-8L)), 7)), (-4L), 4L)).even))), ((safe_mul_func_uint8_t_u_u(p_915->g_116.x, p_915->g_107)) && p_915->g_650.se), 0x54L, ((VECTOR(int8_t, 2))(0L)), (-3L), (-1L), (-1L), ((VECTOR(int8_t, 2))(0x15L)), 1L)).s74e3, ((VECTOR(int8_t, 4))(1L))))).z ^ p_57) , &l_684[7][3][1]) != (*p_915->g_125)))) ^ l_694), p_915->g_650.s5)) ^ FAKE_DIVERGE(p_915->local_2_offset, get_local_id(2), 10))))) , (*l_476)));
        }
        else
        { /* block id: 254 */
            uint32_t l_716 = 0x64B2EC0BL;
            int64_t *l_723 = &l_205[1][2];
            int32_t l_749 = 1L;
            VECTOR(int8_t, 8) l_779 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x58L), 0x58L), 0x58L, 0L, 0x58L);
            int32_t *l_805[3];
            int i;
            for (i = 0; i < 3; i++)
                l_805[i] = (void*)0;
            l_701 = (safe_lshift_func_uint8_t_u_u(((*l_206)++), 1));
            for (l_264 = 0; (l_264 <= 47); l_264 = safe_add_func_uint8_t_u_u(l_264, 3))
            { /* block id: 259 */
                int16_t l_713 = 1L;
                VECTOR(int8_t, 4) l_717 = (VECTOR(int8_t, 4))(0x63L, (VECTOR(int8_t, 2))(0x63L, (-4L)), (-4L));
                uint32_t *l_720 = &l_316;
                int64_t **l_724 = (void*)0;
                int64_t **l_725[10][2] = {{&l_723,&l_646},{&l_723,&l_646},{&l_723,&l_646},{&l_723,&l_646},{&l_723,&l_646},{&l_723,&l_646},{&l_723,&l_646},{&l_723,&l_646},{&l_723,&l_646},{&l_723,&l_646}};
                int32_t l_746[7] = {0x260DFA19L,0L,0x260DFA19L,0x260DFA19L,0L,0x260DFA19L,0x260DFA19L};
                int32_t l_750 = 0x610295EEL;
                VECTOR(int32_t, 8) l_772 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                VECTOR(int16_t, 16) l_773 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 1L), 1L), 1L, 8L, 1L, (VECTOR(int16_t, 2))(8L, 1L), (VECTOR(int16_t, 2))(8L, 1L), 8L, 1L, 8L, 1L);
                int32_t **l_788 = (void*)0;
                int32_t **l_789 = (void*)0;
                uint16_t *l_790 = (void*)0;
                uint16_t *l_791 = (void*)0;
                uint16_t *l_792[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint8_t *l_793 = (void*)0;
                uint8_t *l_794 = (void*)0;
                uint8_t *l_795 = &l_694;
                uint32_t *l_796[1][7][10] = {{{(void*)0,&p_915->g_289,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_915->g_289,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_915->g_289,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_915->g_289,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_915->g_289,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_915->g_289,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_915->g_289,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                if ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((p_915->g_143 & ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(l_708.s6743165444751216)).s8f39, (int16_t)(safe_add_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((void*)0 != &p_915->g_285), l_713)), ((!(((safe_mod_func_uint64_t_u_u((~l_716), ((!1UL) | (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_717.yw)))).xyxy)).z != (0x6B3FB2F4BDDD6236L > (safe_div_func_uint8_t_u_u(((l_723 = (((*l_720)++) , l_723)) == (p_915->g_188 , &l_205[1][2])), p_915->g_685.y))))))) == 1UL) <= p_57)) < GROUP_DIVERGE(1, 1))))))).x), p_57)), p_57)))
                { /* block id: 262 */
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_915->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[(safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))(p_915->g_728.s03a451f31048df74)).sc, p_915->g_116.x)), 10))][(safe_mod_func_uint32_t_u_u(p_915->tid, 12))]));
                    for (p_915->g_107 = 0; (p_915->g_107 != (-30)); --p_915->g_107)
                    { /* block id: 268 */
                        (*l_148) ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, (-8L))), (-2L), 1L)).z;
                        if (l_713)
                            break;
                    }
                    return p_57;
                }
                else
                { /* block id: 273 */
                    VECTOR(uint16_t, 16) l_733 = (VECTOR(uint16_t, 16))(0x846BL, (VECTOR(uint16_t, 4))(0x846BL, (VECTOR(uint16_t, 2))(0x846BL, 0UL), 0UL), 0UL, 0x846BL, 0UL, (VECTOR(uint16_t, 2))(0x846BL, 0UL), (VECTOR(uint16_t, 2))(0x846BL, 0UL), 0x846BL, 0UL, 0x846BL, 0UL);
                    VECTOR(uint8_t, 2) l_735 = (VECTOR(uint8_t, 2))(0xB5L, 0UL);
                    int32_t l_748 = 7L;
                    int i;
                    l_748 ^= (p_915->g_654.y , (p_915->g_747 = ((*l_148) &= (((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_915->local_1_offset, get_local_id(1), 10), p_57)) && ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_733.se93aea4b)).s66)).xxxx, ((VECTOR(uint16_t, 8))(l_734.ywzzyxxw)).even))).w) , ((((VECTOR(uint8_t, 16))(0xF6L, 1UL, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(0x65L, l_717.z, 0x8BL, 0x68L)).lo, ((VECTOR(uint8_t, 8))((p_915->g_78 != (void*)0), 1UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_735.xxyx)).xxwxzzzx)).even, ((VECTOR(uint8_t, 2))(0x3CL, 255UL)).xxyx, ((VECTOR(uint8_t, 16))(p_915->g_116.x, 0UL, ((safe_add_func_int32_t_s_s((((*l_384) = (l_717.w , l_716)) == ((safe_lshift_func_uint8_t_u_u(((((safe_mod_func_int64_t_s_s(((p_915->g_290.x < p_915->g_449.s4) ^ 0L), p_57)) != 0xDE6750CA1D5102EFL) , l_570.w) , p_915->g_2), p_915->g_2)) == l_717.x)), l_735.x)) == p_57), p_57, ((VECTOR(uint8_t, 4))(0x11L)), ((VECTOR(uint8_t, 4))(0xBDL)), ((VECTOR(uint8_t, 2))(0xCEL)), 249UL, 255UL)).scd2f))).yywwwxxz)))))).s2, 1UL, ((VECTOR(uint8_t, 4))(0xFEL)))).s32))).odd, ((VECTOR(uint8_t, 8))(0x5EL)), 0x81L, 0UL, 0x0CL, 4UL, 0x73L)).s9 ^ l_746[2]) | p_915->g_417.s3)))));
                }
                p_915->g_751--;
                if (l_716)
                    break;
                (*p_915->g_77) = func_71((((p_57 > (safe_mod_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))(l_762.s0154)).xyzyzxyzyzyxxxwz, ((VECTOR(uint16_t, 2))(0xB257L, 0UL)).yyxxyyxyyyyxyxyy, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(0x9EE5L, 0xCC76L)).yxxyxyyx, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 2))(4UL, 0x1556L)), (uint16_t)((l_750 &= ((safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((+((l_749 = (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(5L, (-1L))).yyxx)).even)), ((VECTOR(int32_t, 2))((-4L), 0x39CF9E7CL)), ((VECTOR(int32_t, 4))(l_771.xyyy)).w, 1L, (-2L), 0x121C24CDL)).hi, ((VECTOR(int32_t, 16))(l_772.s4330433076435056)).sa426))).odd)).odd <= ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_773.s7f5c57c9)).s41, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 2))(65535UL, 0x4653L)).xxyxyxyxxyyyxxxx, ((VECTOR(uint16_t, 4))((safe_rshift_func_uint8_t_u_s(p_57, (((safe_unary_minus_func_uint32_t_u((p_915->g_180.w = (((0x320516B0L != (((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(3UL, 0x82L, ((p_57 | (((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_779.s02)).xyxxyxyx)).s23, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_780.s47)).yyyxxyyxxxyyyxxy)).s00))).lo , ((*l_795) ^= ((*l_206) = ((safe_sub_func_int32_t_s_s(((p_915->g_596.y &= ((((l_783 = p_57) , (safe_rshift_func_uint8_t_u_u(((p_57 | ((((l_788 != (l_789 = (*p_915->g_125))) & p_915->g_45.x) && p_915->g_19) <= 0L)) <= p_915->g_555.s2), 3))) <= p_57) | 0L)) > GROUP_DIVERGE(0, 1)), p_915->g_143)) <= p_915->g_423[5]))))) & FAKE_DIVERGE(p_915->global_0_offset, get_global_id(0), 10)), ((VECTOR(uint8_t, 4))(0x50L)), 7UL)).s5, GROUP_DIVERGE(2, 1))) < 0xB2C78D0F687CC91AL) , p_915->g_242.s7)) ^ p_57) && p_57)))) , (-1L)) || p_915->g_449.s0))), 5UL, 0xC4F2L, 0x7572L)).xwxxyzwwwzyxywxw))).sce))), 0x1E0D1C34L, 0L, ((VECTOR(int32_t, 2))(0x0DBB7252L)), 0x7CEE8A52L)).s2)) > p_915->g_654.w)), p_915->g_650.s0)) , p_915->g_360.s3), p_57)) , 1UL) ^ l_779.s1), p_57)), 12)) || 0x7467C5CE6994E46BL)) , p_57), (uint16_t)6UL))).yyyxyyxx))).s06, ((VECTOR(uint16_t, 2))(65526UL)), ((VECTOR(uint16_t, 2))(65535UL))))).yyyxxyyxxyxyxxyy))).s6, 12)) , 8UL) > p_57), p_915->g_289)), p_57)) > l_779.s7), 0x6DFDL))) || l_779.s7) , 1L), l_788, p_915->g_449.sf, (*p_915->g_126), p_57, p_915);
            }
            l_305 = ((p_915->g_116.y = (((VECTOR(int32_t, 4))(0L, (p_915->g_568.x != (((l_749 = p_915->l_comm_values[(safe_mod_func_uint32_t_u_u(p_915->tid, 12))]) == (((safe_mod_func_int8_t_s_s(p_915->g_107, (p_915->g_685.y ^= p_57))) & (safe_mul_func_int8_t_s_s((p_915->g_137 || (((GROUP_DIVERGE(1, 1) , ((p_57 || 0x736DDDDAF0CEE8B4L) , (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((p_915->g_417.s4 = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(2UL, 0x11L)), 13))), p_57, 0L, (-1L))).ywyyywxw)).s31)).even == p_57))) , l_805[0]) == (**l_409))), 249UL))) , p_57)) >= p_57)), 1L, 0x5A2701DDL)).z , l_659.s0)) ^ 249UL);
        }
        (**p_915->g_125) = (**l_409);
    }
    l_806[2] = ((*l_148) = p_57);
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_77 p_915->g_78 p_915->g_126 p_915->g_5 p_915->g_167
 * writes: p_915->g_78 p_915->g_5 p_915->g_167
 */
int32_t * func_61(int64_t  p_62, int32_t ** p_63, int32_t  p_64, struct S0 * p_915)
{ /* block id: 82 */
    (*p_915->g_126) = (*p_915->g_77);
    for (p_915->g_5 = 8; (p_915->g_5 < 1); p_915->g_5--)
    { /* block id: 86 */
        for (p_64 = (-12); (p_64 <= 29); p_64 = safe_add_func_int8_t_s_s(p_64, 2))
        { /* block id: 89 */
            return (*p_63);
        }
    }
    return (*p_63);
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_143 p_915->g_5 p_915->g_125 p_915->g_77 p_915->g_126
 * writes: p_915->g_5
 */
int32_t ** func_65(int32_t * p_66, uint32_t  p_67, int32_t  p_68, uint32_t  p_69, uint16_t  p_70, struct S0 * p_915)
{ /* block id: 77 */
    int32_t *l_159 = &p_915->g_5;
    int32_t l_160 = 0L;
    l_160 ^= (+((*l_159) = (safe_mod_func_uint16_t_u_u(FAKE_DIVERGE(p_915->global_0_offset, get_global_id(0), 10), p_915->g_143))));
    (*l_159) &= (7L > 3L);
    return (*p_915->g_125);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_71(int16_t  p_72, int32_t ** p_73, uint32_t  p_74, int32_t * p_75, int32_t  p_76, struct S0 * p_915)
{ /* block id: 66 */
    int32_t *l_156 = (void*)0;
    if ((atomic_inc(&p_915->l_atomic_input[24]) == 4))
    { /* block id: 68 */
        int32_t *l_150[3][9];
        int32_t **l_149[8][3][8] = {{{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]}},{{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]}},{{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]}},{{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]}},{{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]}},{{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]}},{{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]}},{{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]},{&l_150[2][0],&l_150[2][0],&l_150[1][6],&l_150[2][0],(void*)0,&l_150[2][0],&l_150[1][6],&l_150[2][0]}}};
        int32_t **l_151 = &l_150[2][0];
        int32_t l_153 = (-1L);
        int32_t *l_152 = &l_153;
        int32_t *l_154 = &l_153;
        int32_t *l_155[7] = {&l_153,&l_153,&l_153,&l_153,&l_153,&l_153,&l_153};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 9; j++)
                l_150[i][j] = (void*)0;
        }
        l_151 = l_149[7][0][5];
        l_151 = (GROUP_DIVERGE(1, 1) , (void*)0);
        l_155[6] = (l_154 = l_152);
        unsigned int result = 0;
        result += l_153;
        atomic_add(&p_915->l_special_values[24], result);
    }
    else
    { /* block id: 73 */
        (1 + 1);
    }
    return l_156;
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_2 p_915->l_comm_values p_915->g_5 p_915->g_107 p_915->g_77 p_915->g_78 p_915->g_19 p_915->g_116 p_915->g_117 p_915->g_45 p_915->g_140 p_915->g_142 p_915->g_167
 * writes: p_915->g_107 p_915->g_117 p_915->g_125 p_915->g_137 p_915->g_140 p_915->g_142 p_915->g_143
 */
uint32_t  func_79(int8_t  p_80, uint32_t  p_81, struct S0 * p_915)
{ /* block id: 46 */
    int32_t l_94 = 1L;
    VECTOR(int16_t, 16) l_99 = (VECTOR(int16_t, 16))(0x556AL, (VECTOR(int16_t, 4))(0x556AL, (VECTOR(int16_t, 2))(0x556AL, (-1L)), (-1L)), (-1L), 0x556AL, (-1L), (VECTOR(int16_t, 2))(0x556AL, (-1L)), (VECTOR(int16_t, 2))(0x556AL, (-1L)), 0x556AL, (-1L), 0x556AL, (-1L));
    VECTOR(int16_t, 8) l_102 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L);
    int32_t l_105[8];
    int32_t *l_106 = &p_915->g_107;
    int32_t **l_110 = &p_915->g_78;
    int32_t ***l_109[6][5][5] = {{{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77}},{{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77}},{{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77}},{{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77}},{{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77}},{{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77},{&l_110,&l_110,(void*)0,&p_915->g_77,&p_915->g_77}}};
    int32_t **l_111 = &l_106;
    VECTOR(int8_t, 8) l_112 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x64L), 0x64L), 0x64L, (-3L), 0x64L);
    VECTOR(int8_t, 8) l_113 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 2L), 2L), 2L, 8L, 2L);
    uint8_t *l_118 = (void*)0;
    uint8_t *l_119 = (void*)0;
    uint8_t *l_120 = (void*)0;
    uint8_t *l_121 = (void*)0;
    int32_t ****l_124[8] = {(void*)0,&l_109[3][0][3],(void*)0,(void*)0,&l_109[3][0][3],(void*)0,(void*)0,&l_109[3][0][3]};
    VECTOR(uint16_t, 2) l_129 = (VECTOR(uint16_t, 2))(0x18BDL, 0xE638L);
    uint16_t *l_132 = (void*)0;
    uint16_t *l_133 = (void*)0;
    uint16_t *l_134 = (void*)0;
    uint16_t *l_135 = (void*)0;
    uint16_t *l_136[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t *l_138 = (void*)0;
    uint8_t *l_139 = &p_915->g_140;
    int8_t *l_141[3];
    uint8_t l_144 = 0x16L;
    uint32_t l_147[2][10] = {{0xB2F50514L,1UL,0UL,0UL,1UL,0UL,0UL,1UL,0xB2F50514L,0xB2F50514L},{0xB2F50514L,1UL,0UL,0UL,1UL,0UL,0UL,1UL,0xB2F50514L,0xB2F50514L}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_105[i] = 0x0C227312L;
    for (i = 0; i < 3; i++)
        l_141[i] = &p_915->g_142;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_915->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[(safe_mod_func_uint32_t_u_u((func_83(((safe_lshift_func_int8_t_s_s(8L, 7)) , &p_915->g_78), (l_106 = func_90(p_80, ((l_94 , ((*l_106) |= (((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), (((safe_div_func_int16_t_s_s((((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(l_99.s97)).yxxxyxxyxxxyyxxy, ((VECTOR(int16_t, 4))((p_915->g_2 , (safe_rshift_func_uint8_t_u_s(p_80, 6))), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, (-1L))).yyxyyxxy)))).even)).odd, ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_102.s2427351212313741)).s94)), (int16_t)(p_81 <= p_915->l_comm_values[(safe_mod_func_uint32_t_u_u(p_915->tid, 12))])))).xyyxyxyxxxxxxyxx, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 2))(0x2BF8L, (-1L))).xxyy, (int16_t)(safe_mod_func_int8_t_s_s(0x1DL, (-6L))), (int16_t)0L))).wzxzwyzw)).s21)), ((VECTOR(int16_t, 2))(0L))))).xxyyyxxyyxyyxxyy))).s68))), ((VECTOR(int16_t, 2))(0x7A15L)), ((VECTOR(int16_t, 2))(0x60EEL))))), (-2L))).xwwzzzwywwwwxyxx))), ((VECTOR(int16_t, 16))(1L))))).sf != p_915->g_5), 65530UL)) > 0x3AL) , l_105[0]))) , p_915->g_5) || l_102.s2))) || (*l_106)), &l_106, p_915)), p_81, p_915->g_19, p_915) || 0x5AL), 10))][(safe_mod_func_uint32_t_u_u(p_915->tid, 12))]));
    l_144 &= (p_915->g_143 = ((*p_915->g_77) != (((((l_111 = &l_106) != (p_80 , &p_915->g_78)) < (p_915->g_142 |= ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(l_112.s57)).yyyx, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_113.s2534)), ((VECTOR(int8_t, 8))(((safe_rshift_func_uint8_t_u_u((p_915->g_117.s0 = ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_915->g_116.yxyx)).odd)).xyyy)).lo, ((VECTOR(uint8_t, 4))(p_915->g_117.s0752)).lo))).hi), ((((safe_sub_func_uint64_t_u_u((((&l_110 != (p_915->g_125 = &p_915->g_77)) < (p_81 ^ ((VECTOR(uint8_t, 8))(0x71L, ((*l_139) |= (safe_lshift_func_uint16_t_u_s((p_915->g_137 = (((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0xE9B3L, 0x27E6L)), ((VECTOR(uint16_t, 8))(l_129.xyyyyxxx)), ((VECTOR(uint16_t, 4))(((safe_rshift_func_uint8_t_u_u(((void*)0 == &l_109[0][3][2]), 3)) != p_915->g_45.w), p_80, 65527UL, 65535UL)), 0x6E85L, 1UL)).s77, ((VECTOR(uint16_t, 2))(0xF1D4L))))).even == p_915->g_45.z)), 6))), p_915->g_116.y, 253UL, p_915->g_45.y, p_915->l_comm_values[(safe_mod_func_uint32_t_u_u(p_915->tid, 12))], 255UL, 0x64L)).s1)) , p_915->g_19), 0UL)) & p_80) < 0x4E14L) >= 7L))) , p_80), (-7L), 0x1AL, p_80, 0L, 0x3FL, (-1L), 0L)), 1L, ((VECTOR(int8_t, 2))(0x55L)), 0x6FL)).s2, ((VECTOR(int8_t, 4))((-1L))), ((VECTOR(int8_t, 2))((-7L))), 0L)).odd, ((VECTOR(int8_t, 4))(0x0DL)))))))).w)) >= (-1L)) , (*l_111))));
    l_147[0][2] ^= (~(safe_mul_func_int8_t_s_s(p_915->g_116.x, p_80)));
    return p_915->g_45.w;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_83(int32_t ** p_84, int32_t * p_85, int32_t  p_86, int64_t  p_87, struct S0 * p_915)
{ /* block id: 51 */
    int32_t l_108 = 1L;
    return l_108;
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_77 p_915->g_78 p_915->g_167
 * writes:
 */
int32_t * func_90(uint64_t  p_91, int8_t  p_92, int32_t ** p_93, struct S0 * p_915)
{ /* block id: 48 */
    return (*p_915->g_77);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[34];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 34; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[34];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 34; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[12];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 12; i++)
            l_comm_values[i] = 1;
    struct S0 c_916;
    struct S0* p_915 = &c_916;
    struct S0 c_917 = {
        2L, // p_915->g_2
        0L, // p_915->g_5
        0x58D13034L, // p_915->g_8
        0L, // p_915->g_9
        0x323D1BCAL, // p_915->g_10
        (-10L), // p_915->g_19
        (void*)0, // p_915->g_20
        &p_915->g_8, // p_915->g_30
        &p_915->g_2, // p_915->g_34
        {{&p_915->g_34,&p_915->g_34,&p_915->g_34},{&p_915->g_34,&p_915->g_34,&p_915->g_34},{&p_915->g_34,&p_915->g_34,&p_915->g_34},{&p_915->g_34,&p_915->g_34,&p_915->g_34},{&p_915->g_34,&p_915->g_34,&p_915->g_34},{&p_915->g_34,&p_915->g_34,&p_915->g_34},{&p_915->g_34,&p_915->g_34,&p_915->g_34},{&p_915->g_34,&p_915->g_34,&p_915->g_34},{&p_915->g_34,&p_915->g_34,&p_915->g_34}}, // p_915->g_33
        (VECTOR(int32_t, 4))(0x630C1ABDL, (VECTOR(int32_t, 2))(0x630C1ABDL, 0x6A1E05BFL), 0x6A1E05BFL), // p_915->g_45
        (void*)0, // p_915->g_78
        &p_915->g_78, // p_915->g_77
        (-1L), // p_915->g_107
        (VECTOR(uint8_t, 2))(1UL, 0x72L), // p_915->g_116
        (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0xD1L), 0xD1L), 0xD1L, 9UL, 0xD1L), // p_915->g_117
        &p_915->g_78, // p_915->g_126
        &p_915->g_126, // p_915->g_125
        0x4AFCFED7L, // p_915->g_137
        255UL, // p_915->g_140
        0x74L, // p_915->g_142
        0x0C1DL, // p_915->g_143
        &p_915->g_19, // p_915->g_167
        (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x7A27DFF7L), 0x7A27DFF7L), // p_915->g_179
        (VECTOR(uint32_t, 4))(0x4732960EL, (VECTOR(uint32_t, 2))(0x4732960EL, 4UL), 4UL), // p_915->g_180
        9UL, // p_915->g_188
        (VECTOR(uint8_t, 4))(0x0EL, (VECTOR(uint8_t, 2))(0x0EL, 251UL), 251UL), // p_915->g_197
        (VECTOR(int32_t, 2))(0x70B89F9EL, 0x391B8C51L), // p_915->g_209
        (VECTOR(int32_t, 2))(0x41743E5CL, 0x79B58F67L), // p_915->g_214
        (VECTOR(uint16_t, 2))(0x2ECEL, 2UL), // p_915->g_224
        (VECTOR(int16_t, 16))(0x15F1L, (VECTOR(int16_t, 4))(0x15F1L, (VECTOR(int16_t, 2))(0x15F1L, 0x461EL), 0x461EL), 0x461EL, 0x15F1L, 0x461EL, (VECTOR(int16_t, 2))(0x15F1L, 0x461EL), (VECTOR(int16_t, 2))(0x15F1L, 0x461EL), 0x15F1L, 0x461EL, 0x15F1L, 0x461EL), // p_915->g_242
        (VECTOR(int32_t, 8))(0x2584EF93L, (VECTOR(int32_t, 4))(0x2584EF93L, (VECTOR(int32_t, 2))(0x2584EF93L, (-1L)), (-1L)), (-1L), 0x2584EF93L, (-1L)), // p_915->g_247
        (void*)0, // p_915->g_285
        0UL, // p_915->g_289
        (VECTOR(int8_t, 2))(0x05L, (-1L)), // p_915->g_290
        (VECTOR(int8_t, 2))(0x13L, 0x03L), // p_915->g_296
        (VECTOR(int8_t, 16))(0x69L, (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, (-2L)), (-2L)), (-2L), 0x69L, (-2L), (VECTOR(int8_t, 2))(0x69L, (-2L)), (VECTOR(int8_t, 2))(0x69L, (-2L)), 0x69L, (-2L), 0x69L, (-2L)), // p_915->g_297
        (VECTOR(int32_t, 2))(0x15719B82L, 0L), // p_915->g_317
        (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 4294967295UL), 4294967295UL), // p_915->g_321
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5B99L), 0x5B99L), 0x5B99L, (-1L), 0x5B99L), // p_915->g_360
        (VECTOR(int8_t, 4))(0x33L, (VECTOR(int8_t, 2))(0x33L, 0L), 0L), // p_915->g_403
        (VECTOR(int16_t, 8))(0x4146L, (VECTOR(int16_t, 4))(0x4146L, (VECTOR(int16_t, 2))(0x4146L, 1L), 1L), 1L, 0x4146L, 1L), // p_915->g_417
        {247UL,247UL,247UL,247UL,247UL,247UL,247UL,247UL,247UL}, // p_915->g_423
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xC11FL), 0xC11FL), 0xC11FL, 0UL, 0xC11FL, (VECTOR(uint16_t, 2))(0UL, 0xC11FL), (VECTOR(uint16_t, 2))(0UL, 0xC11FL), 0UL, 0xC11FL, 0UL, 0xC11FL), // p_915->g_449
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4019L), 0x4019L), // p_915->g_515
        (VECTOR(int32_t, 8))(0x0D7C7D0CL, (VECTOR(int32_t, 4))(0x0D7C7D0CL, (VECTOR(int32_t, 2))(0x0D7C7D0CL, 0L), 0L), 0L, 0x0D7C7D0CL, 0L), // p_915->g_518
        (VECTOR(uint32_t, 16))(0x365308E6L, (VECTOR(uint32_t, 4))(0x365308E6L, (VECTOR(uint32_t, 2))(0x365308E6L, 0x22E2CEFBL), 0x22E2CEFBL), 0x22E2CEFBL, 0x365308E6L, 0x22E2CEFBL, (VECTOR(uint32_t, 2))(0x365308E6L, 0x22E2CEFBL), (VECTOR(uint32_t, 2))(0x365308E6L, 0x22E2CEFBL), 0x365308E6L, 0x22E2CEFBL, 0x365308E6L, 0x22E2CEFBL), // p_915->g_549
        (VECTOR(uint32_t, 16))(0x1D6FA7C6L, (VECTOR(uint32_t, 4))(0x1D6FA7C6L, (VECTOR(uint32_t, 2))(0x1D6FA7C6L, 0xC9273D31L), 0xC9273D31L), 0xC9273D31L, 0x1D6FA7C6L, 0xC9273D31L, (VECTOR(uint32_t, 2))(0x1D6FA7C6L, 0xC9273D31L), (VECTOR(uint32_t, 2))(0x1D6FA7C6L, 0xC9273D31L), 0x1D6FA7C6L, 0xC9273D31L, 0x1D6FA7C6L, 0xC9273D31L), // p_915->g_555
        (VECTOR(int64_t, 2))(1L, 0x334050C5AFE4EEB2L), // p_915->g_568
        3L, // p_915->g_581
        (VECTOR(int32_t, 2))(0x5EE917A6L, 0x4E1E35FDL), // p_915->g_594
        (VECTOR(uint16_t, 2))(0x3359L, 0x4560L), // p_915->g_596
        (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 1UL), 1UL), 1UL, 254UL, 1UL, (VECTOR(uint8_t, 2))(254UL, 1UL), (VECTOR(uint8_t, 2))(254UL, 1UL), 254UL, 1UL, 254UL, 1UL), // p_915->g_650
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), // p_915->g_654
        (void*)0, // p_915->g_674
        {&p_915->g_674,&p_915->g_674,&p_915->g_674,&p_915->g_674,&p_915->g_674}, // p_915->g_673
        &p_915->g_673[0], // p_915->g_672
        &p_915->g_672, // p_915->g_671
        (VECTOR(int8_t, 2))(0x2BL, (-4L)), // p_915->g_685
        (VECTOR(int8_t, 4))(0x68L, (VECTOR(int8_t, 2))(0x68L, 0x62L), 0x62L), // p_915->g_688
        0xFBD79056L, // p_915->g_696
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L), (VECTOR(int8_t, 2))(1L, (-10L)), (VECTOR(int8_t, 2))(1L, (-10L)), 1L, (-10L), 1L, (-10L)), // p_915->g_728
        0x1C84L, // p_915->g_747
        4294967290UL, // p_915->g_751
        8L, // p_915->g_813
        {4294967290UL}, // p_915->g_818
        (void*)0, // p_915->g_856
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-3L)), (-3L)), // p_915->g_883
        (void*)0, // p_915->g_913
        &p_915->g_913, // p_915->g_912
        0, // p_915->v_collective
        sequence_input[get_global_id(0)], // p_915->global_0_offset
        sequence_input[get_global_id(1)], // p_915->global_1_offset
        sequence_input[get_global_id(2)], // p_915->global_2_offset
        sequence_input[get_local_id(0)], // p_915->local_0_offset
        sequence_input[get_local_id(1)], // p_915->local_1_offset
        sequence_input[get_local_id(2)], // p_915->local_2_offset
        sequence_input[get_group_id(0)], // p_915->group_0_offset
        sequence_input[get_group_id(1)], // p_915->group_1_offset
        sequence_input[get_group_id(2)], // p_915->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[0][get_linear_local_id()])), // p_915->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_916 = c_917;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_915);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_915->g_2, "p_915->g_2", print_hash_value);
    transparent_crc(p_915->g_5, "p_915->g_5", print_hash_value);
    transparent_crc(p_915->g_8, "p_915->g_8", print_hash_value);
    transparent_crc(p_915->g_9, "p_915->g_9", print_hash_value);
    transparent_crc(p_915->g_10, "p_915->g_10", print_hash_value);
    transparent_crc(p_915->g_19, "p_915->g_19", print_hash_value);
    transparent_crc(p_915->g_45.x, "p_915->g_45.x", print_hash_value);
    transparent_crc(p_915->g_45.y, "p_915->g_45.y", print_hash_value);
    transparent_crc(p_915->g_45.z, "p_915->g_45.z", print_hash_value);
    transparent_crc(p_915->g_45.w, "p_915->g_45.w", print_hash_value);
    transparent_crc(p_915->g_107, "p_915->g_107", print_hash_value);
    transparent_crc(p_915->g_116.x, "p_915->g_116.x", print_hash_value);
    transparent_crc(p_915->g_116.y, "p_915->g_116.y", print_hash_value);
    transparent_crc(p_915->g_117.s0, "p_915->g_117.s0", print_hash_value);
    transparent_crc(p_915->g_117.s1, "p_915->g_117.s1", print_hash_value);
    transparent_crc(p_915->g_117.s2, "p_915->g_117.s2", print_hash_value);
    transparent_crc(p_915->g_117.s3, "p_915->g_117.s3", print_hash_value);
    transparent_crc(p_915->g_117.s4, "p_915->g_117.s4", print_hash_value);
    transparent_crc(p_915->g_117.s5, "p_915->g_117.s5", print_hash_value);
    transparent_crc(p_915->g_117.s6, "p_915->g_117.s6", print_hash_value);
    transparent_crc(p_915->g_117.s7, "p_915->g_117.s7", print_hash_value);
    transparent_crc(p_915->g_137, "p_915->g_137", print_hash_value);
    transparent_crc(p_915->g_140, "p_915->g_140", print_hash_value);
    transparent_crc(p_915->g_142, "p_915->g_142", print_hash_value);
    transparent_crc(p_915->g_143, "p_915->g_143", print_hash_value);
    transparent_crc(p_915->g_179.x, "p_915->g_179.x", print_hash_value);
    transparent_crc(p_915->g_179.y, "p_915->g_179.y", print_hash_value);
    transparent_crc(p_915->g_179.z, "p_915->g_179.z", print_hash_value);
    transparent_crc(p_915->g_179.w, "p_915->g_179.w", print_hash_value);
    transparent_crc(p_915->g_180.x, "p_915->g_180.x", print_hash_value);
    transparent_crc(p_915->g_180.y, "p_915->g_180.y", print_hash_value);
    transparent_crc(p_915->g_180.z, "p_915->g_180.z", print_hash_value);
    transparent_crc(p_915->g_180.w, "p_915->g_180.w", print_hash_value);
    transparent_crc(p_915->g_188, "p_915->g_188", print_hash_value);
    transparent_crc(p_915->g_197.x, "p_915->g_197.x", print_hash_value);
    transparent_crc(p_915->g_197.y, "p_915->g_197.y", print_hash_value);
    transparent_crc(p_915->g_197.z, "p_915->g_197.z", print_hash_value);
    transparent_crc(p_915->g_197.w, "p_915->g_197.w", print_hash_value);
    transparent_crc(p_915->g_209.x, "p_915->g_209.x", print_hash_value);
    transparent_crc(p_915->g_209.y, "p_915->g_209.y", print_hash_value);
    transparent_crc(p_915->g_214.x, "p_915->g_214.x", print_hash_value);
    transparent_crc(p_915->g_214.y, "p_915->g_214.y", print_hash_value);
    transparent_crc(p_915->g_224.x, "p_915->g_224.x", print_hash_value);
    transparent_crc(p_915->g_224.y, "p_915->g_224.y", print_hash_value);
    transparent_crc(p_915->g_242.s0, "p_915->g_242.s0", print_hash_value);
    transparent_crc(p_915->g_242.s1, "p_915->g_242.s1", print_hash_value);
    transparent_crc(p_915->g_242.s2, "p_915->g_242.s2", print_hash_value);
    transparent_crc(p_915->g_242.s3, "p_915->g_242.s3", print_hash_value);
    transparent_crc(p_915->g_242.s4, "p_915->g_242.s4", print_hash_value);
    transparent_crc(p_915->g_242.s5, "p_915->g_242.s5", print_hash_value);
    transparent_crc(p_915->g_242.s6, "p_915->g_242.s6", print_hash_value);
    transparent_crc(p_915->g_242.s7, "p_915->g_242.s7", print_hash_value);
    transparent_crc(p_915->g_242.s8, "p_915->g_242.s8", print_hash_value);
    transparent_crc(p_915->g_242.s9, "p_915->g_242.s9", print_hash_value);
    transparent_crc(p_915->g_242.sa, "p_915->g_242.sa", print_hash_value);
    transparent_crc(p_915->g_242.sb, "p_915->g_242.sb", print_hash_value);
    transparent_crc(p_915->g_242.sc, "p_915->g_242.sc", print_hash_value);
    transparent_crc(p_915->g_242.sd, "p_915->g_242.sd", print_hash_value);
    transparent_crc(p_915->g_242.se, "p_915->g_242.se", print_hash_value);
    transparent_crc(p_915->g_242.sf, "p_915->g_242.sf", print_hash_value);
    transparent_crc(p_915->g_247.s0, "p_915->g_247.s0", print_hash_value);
    transparent_crc(p_915->g_247.s1, "p_915->g_247.s1", print_hash_value);
    transparent_crc(p_915->g_247.s2, "p_915->g_247.s2", print_hash_value);
    transparent_crc(p_915->g_247.s3, "p_915->g_247.s3", print_hash_value);
    transparent_crc(p_915->g_247.s4, "p_915->g_247.s4", print_hash_value);
    transparent_crc(p_915->g_247.s5, "p_915->g_247.s5", print_hash_value);
    transparent_crc(p_915->g_247.s6, "p_915->g_247.s6", print_hash_value);
    transparent_crc(p_915->g_247.s7, "p_915->g_247.s7", print_hash_value);
    transparent_crc(p_915->g_289, "p_915->g_289", print_hash_value);
    transparent_crc(p_915->g_290.x, "p_915->g_290.x", print_hash_value);
    transparent_crc(p_915->g_290.y, "p_915->g_290.y", print_hash_value);
    transparent_crc(p_915->g_296.x, "p_915->g_296.x", print_hash_value);
    transparent_crc(p_915->g_296.y, "p_915->g_296.y", print_hash_value);
    transparent_crc(p_915->g_297.s0, "p_915->g_297.s0", print_hash_value);
    transparent_crc(p_915->g_297.s1, "p_915->g_297.s1", print_hash_value);
    transparent_crc(p_915->g_297.s2, "p_915->g_297.s2", print_hash_value);
    transparent_crc(p_915->g_297.s3, "p_915->g_297.s3", print_hash_value);
    transparent_crc(p_915->g_297.s4, "p_915->g_297.s4", print_hash_value);
    transparent_crc(p_915->g_297.s5, "p_915->g_297.s5", print_hash_value);
    transparent_crc(p_915->g_297.s6, "p_915->g_297.s6", print_hash_value);
    transparent_crc(p_915->g_297.s7, "p_915->g_297.s7", print_hash_value);
    transparent_crc(p_915->g_297.s8, "p_915->g_297.s8", print_hash_value);
    transparent_crc(p_915->g_297.s9, "p_915->g_297.s9", print_hash_value);
    transparent_crc(p_915->g_297.sa, "p_915->g_297.sa", print_hash_value);
    transparent_crc(p_915->g_297.sb, "p_915->g_297.sb", print_hash_value);
    transparent_crc(p_915->g_297.sc, "p_915->g_297.sc", print_hash_value);
    transparent_crc(p_915->g_297.sd, "p_915->g_297.sd", print_hash_value);
    transparent_crc(p_915->g_297.se, "p_915->g_297.se", print_hash_value);
    transparent_crc(p_915->g_297.sf, "p_915->g_297.sf", print_hash_value);
    transparent_crc(p_915->g_317.x, "p_915->g_317.x", print_hash_value);
    transparent_crc(p_915->g_317.y, "p_915->g_317.y", print_hash_value);
    transparent_crc(p_915->g_321.x, "p_915->g_321.x", print_hash_value);
    transparent_crc(p_915->g_321.y, "p_915->g_321.y", print_hash_value);
    transparent_crc(p_915->g_321.z, "p_915->g_321.z", print_hash_value);
    transparent_crc(p_915->g_321.w, "p_915->g_321.w", print_hash_value);
    transparent_crc(p_915->g_360.s0, "p_915->g_360.s0", print_hash_value);
    transparent_crc(p_915->g_360.s1, "p_915->g_360.s1", print_hash_value);
    transparent_crc(p_915->g_360.s2, "p_915->g_360.s2", print_hash_value);
    transparent_crc(p_915->g_360.s3, "p_915->g_360.s3", print_hash_value);
    transparent_crc(p_915->g_360.s4, "p_915->g_360.s4", print_hash_value);
    transparent_crc(p_915->g_360.s5, "p_915->g_360.s5", print_hash_value);
    transparent_crc(p_915->g_360.s6, "p_915->g_360.s6", print_hash_value);
    transparent_crc(p_915->g_360.s7, "p_915->g_360.s7", print_hash_value);
    transparent_crc(p_915->g_403.x, "p_915->g_403.x", print_hash_value);
    transparent_crc(p_915->g_403.y, "p_915->g_403.y", print_hash_value);
    transparent_crc(p_915->g_403.z, "p_915->g_403.z", print_hash_value);
    transparent_crc(p_915->g_403.w, "p_915->g_403.w", print_hash_value);
    transparent_crc(p_915->g_417.s0, "p_915->g_417.s0", print_hash_value);
    transparent_crc(p_915->g_417.s1, "p_915->g_417.s1", print_hash_value);
    transparent_crc(p_915->g_417.s2, "p_915->g_417.s2", print_hash_value);
    transparent_crc(p_915->g_417.s3, "p_915->g_417.s3", print_hash_value);
    transparent_crc(p_915->g_417.s4, "p_915->g_417.s4", print_hash_value);
    transparent_crc(p_915->g_417.s5, "p_915->g_417.s5", print_hash_value);
    transparent_crc(p_915->g_417.s6, "p_915->g_417.s6", print_hash_value);
    transparent_crc(p_915->g_417.s7, "p_915->g_417.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_915->g_423[i], "p_915->g_423[i]", print_hash_value);

    }
    transparent_crc(p_915->g_449.s0, "p_915->g_449.s0", print_hash_value);
    transparent_crc(p_915->g_449.s1, "p_915->g_449.s1", print_hash_value);
    transparent_crc(p_915->g_449.s2, "p_915->g_449.s2", print_hash_value);
    transparent_crc(p_915->g_449.s3, "p_915->g_449.s3", print_hash_value);
    transparent_crc(p_915->g_449.s4, "p_915->g_449.s4", print_hash_value);
    transparent_crc(p_915->g_449.s5, "p_915->g_449.s5", print_hash_value);
    transparent_crc(p_915->g_449.s6, "p_915->g_449.s6", print_hash_value);
    transparent_crc(p_915->g_449.s7, "p_915->g_449.s7", print_hash_value);
    transparent_crc(p_915->g_449.s8, "p_915->g_449.s8", print_hash_value);
    transparent_crc(p_915->g_449.s9, "p_915->g_449.s9", print_hash_value);
    transparent_crc(p_915->g_449.sa, "p_915->g_449.sa", print_hash_value);
    transparent_crc(p_915->g_449.sb, "p_915->g_449.sb", print_hash_value);
    transparent_crc(p_915->g_449.sc, "p_915->g_449.sc", print_hash_value);
    transparent_crc(p_915->g_449.sd, "p_915->g_449.sd", print_hash_value);
    transparent_crc(p_915->g_449.se, "p_915->g_449.se", print_hash_value);
    transparent_crc(p_915->g_449.sf, "p_915->g_449.sf", print_hash_value);
    transparent_crc(p_915->g_515.x, "p_915->g_515.x", print_hash_value);
    transparent_crc(p_915->g_515.y, "p_915->g_515.y", print_hash_value);
    transparent_crc(p_915->g_515.z, "p_915->g_515.z", print_hash_value);
    transparent_crc(p_915->g_515.w, "p_915->g_515.w", print_hash_value);
    transparent_crc(p_915->g_518.s0, "p_915->g_518.s0", print_hash_value);
    transparent_crc(p_915->g_518.s1, "p_915->g_518.s1", print_hash_value);
    transparent_crc(p_915->g_518.s2, "p_915->g_518.s2", print_hash_value);
    transparent_crc(p_915->g_518.s3, "p_915->g_518.s3", print_hash_value);
    transparent_crc(p_915->g_518.s4, "p_915->g_518.s4", print_hash_value);
    transparent_crc(p_915->g_518.s5, "p_915->g_518.s5", print_hash_value);
    transparent_crc(p_915->g_518.s6, "p_915->g_518.s6", print_hash_value);
    transparent_crc(p_915->g_518.s7, "p_915->g_518.s7", print_hash_value);
    transparent_crc(p_915->g_549.s0, "p_915->g_549.s0", print_hash_value);
    transparent_crc(p_915->g_549.s1, "p_915->g_549.s1", print_hash_value);
    transparent_crc(p_915->g_549.s2, "p_915->g_549.s2", print_hash_value);
    transparent_crc(p_915->g_549.s3, "p_915->g_549.s3", print_hash_value);
    transparent_crc(p_915->g_549.s4, "p_915->g_549.s4", print_hash_value);
    transparent_crc(p_915->g_549.s5, "p_915->g_549.s5", print_hash_value);
    transparent_crc(p_915->g_549.s6, "p_915->g_549.s6", print_hash_value);
    transparent_crc(p_915->g_549.s7, "p_915->g_549.s7", print_hash_value);
    transparent_crc(p_915->g_549.s8, "p_915->g_549.s8", print_hash_value);
    transparent_crc(p_915->g_549.s9, "p_915->g_549.s9", print_hash_value);
    transparent_crc(p_915->g_549.sa, "p_915->g_549.sa", print_hash_value);
    transparent_crc(p_915->g_549.sb, "p_915->g_549.sb", print_hash_value);
    transparent_crc(p_915->g_549.sc, "p_915->g_549.sc", print_hash_value);
    transparent_crc(p_915->g_549.sd, "p_915->g_549.sd", print_hash_value);
    transparent_crc(p_915->g_549.se, "p_915->g_549.se", print_hash_value);
    transparent_crc(p_915->g_549.sf, "p_915->g_549.sf", print_hash_value);
    transparent_crc(p_915->g_555.s0, "p_915->g_555.s0", print_hash_value);
    transparent_crc(p_915->g_555.s1, "p_915->g_555.s1", print_hash_value);
    transparent_crc(p_915->g_555.s2, "p_915->g_555.s2", print_hash_value);
    transparent_crc(p_915->g_555.s3, "p_915->g_555.s3", print_hash_value);
    transparent_crc(p_915->g_555.s4, "p_915->g_555.s4", print_hash_value);
    transparent_crc(p_915->g_555.s5, "p_915->g_555.s5", print_hash_value);
    transparent_crc(p_915->g_555.s6, "p_915->g_555.s6", print_hash_value);
    transparent_crc(p_915->g_555.s7, "p_915->g_555.s7", print_hash_value);
    transparent_crc(p_915->g_555.s8, "p_915->g_555.s8", print_hash_value);
    transparent_crc(p_915->g_555.s9, "p_915->g_555.s9", print_hash_value);
    transparent_crc(p_915->g_555.sa, "p_915->g_555.sa", print_hash_value);
    transparent_crc(p_915->g_555.sb, "p_915->g_555.sb", print_hash_value);
    transparent_crc(p_915->g_555.sc, "p_915->g_555.sc", print_hash_value);
    transparent_crc(p_915->g_555.sd, "p_915->g_555.sd", print_hash_value);
    transparent_crc(p_915->g_555.se, "p_915->g_555.se", print_hash_value);
    transparent_crc(p_915->g_555.sf, "p_915->g_555.sf", print_hash_value);
    transparent_crc(p_915->g_568.x, "p_915->g_568.x", print_hash_value);
    transparent_crc(p_915->g_568.y, "p_915->g_568.y", print_hash_value);
    transparent_crc(p_915->g_581, "p_915->g_581", print_hash_value);
    transparent_crc(p_915->g_594.x, "p_915->g_594.x", print_hash_value);
    transparent_crc(p_915->g_594.y, "p_915->g_594.y", print_hash_value);
    transparent_crc(p_915->g_596.x, "p_915->g_596.x", print_hash_value);
    transparent_crc(p_915->g_596.y, "p_915->g_596.y", print_hash_value);
    transparent_crc(p_915->g_650.s0, "p_915->g_650.s0", print_hash_value);
    transparent_crc(p_915->g_650.s1, "p_915->g_650.s1", print_hash_value);
    transparent_crc(p_915->g_650.s2, "p_915->g_650.s2", print_hash_value);
    transparent_crc(p_915->g_650.s3, "p_915->g_650.s3", print_hash_value);
    transparent_crc(p_915->g_650.s4, "p_915->g_650.s4", print_hash_value);
    transparent_crc(p_915->g_650.s5, "p_915->g_650.s5", print_hash_value);
    transparent_crc(p_915->g_650.s6, "p_915->g_650.s6", print_hash_value);
    transparent_crc(p_915->g_650.s7, "p_915->g_650.s7", print_hash_value);
    transparent_crc(p_915->g_650.s8, "p_915->g_650.s8", print_hash_value);
    transparent_crc(p_915->g_650.s9, "p_915->g_650.s9", print_hash_value);
    transparent_crc(p_915->g_650.sa, "p_915->g_650.sa", print_hash_value);
    transparent_crc(p_915->g_650.sb, "p_915->g_650.sb", print_hash_value);
    transparent_crc(p_915->g_650.sc, "p_915->g_650.sc", print_hash_value);
    transparent_crc(p_915->g_650.sd, "p_915->g_650.sd", print_hash_value);
    transparent_crc(p_915->g_650.se, "p_915->g_650.se", print_hash_value);
    transparent_crc(p_915->g_650.sf, "p_915->g_650.sf", print_hash_value);
    transparent_crc(p_915->g_654.x, "p_915->g_654.x", print_hash_value);
    transparent_crc(p_915->g_654.y, "p_915->g_654.y", print_hash_value);
    transparent_crc(p_915->g_654.z, "p_915->g_654.z", print_hash_value);
    transparent_crc(p_915->g_654.w, "p_915->g_654.w", print_hash_value);
    transparent_crc(p_915->g_685.x, "p_915->g_685.x", print_hash_value);
    transparent_crc(p_915->g_685.y, "p_915->g_685.y", print_hash_value);
    transparent_crc(p_915->g_688.x, "p_915->g_688.x", print_hash_value);
    transparent_crc(p_915->g_688.y, "p_915->g_688.y", print_hash_value);
    transparent_crc(p_915->g_688.z, "p_915->g_688.z", print_hash_value);
    transparent_crc(p_915->g_688.w, "p_915->g_688.w", print_hash_value);
    transparent_crc(p_915->g_696, "p_915->g_696", print_hash_value);
    transparent_crc(p_915->g_728.s0, "p_915->g_728.s0", print_hash_value);
    transparent_crc(p_915->g_728.s1, "p_915->g_728.s1", print_hash_value);
    transparent_crc(p_915->g_728.s2, "p_915->g_728.s2", print_hash_value);
    transparent_crc(p_915->g_728.s3, "p_915->g_728.s3", print_hash_value);
    transparent_crc(p_915->g_728.s4, "p_915->g_728.s4", print_hash_value);
    transparent_crc(p_915->g_728.s5, "p_915->g_728.s5", print_hash_value);
    transparent_crc(p_915->g_728.s6, "p_915->g_728.s6", print_hash_value);
    transparent_crc(p_915->g_728.s7, "p_915->g_728.s7", print_hash_value);
    transparent_crc(p_915->g_728.s8, "p_915->g_728.s8", print_hash_value);
    transparent_crc(p_915->g_728.s9, "p_915->g_728.s9", print_hash_value);
    transparent_crc(p_915->g_728.sa, "p_915->g_728.sa", print_hash_value);
    transparent_crc(p_915->g_728.sb, "p_915->g_728.sb", print_hash_value);
    transparent_crc(p_915->g_728.sc, "p_915->g_728.sc", print_hash_value);
    transparent_crc(p_915->g_728.sd, "p_915->g_728.sd", print_hash_value);
    transparent_crc(p_915->g_728.se, "p_915->g_728.se", print_hash_value);
    transparent_crc(p_915->g_728.sf, "p_915->g_728.sf", print_hash_value);
    transparent_crc(p_915->g_747, "p_915->g_747", print_hash_value);
    transparent_crc(p_915->g_751, "p_915->g_751", print_hash_value);
    transparent_crc(p_915->g_813, "p_915->g_813", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_915->g_818[i], "p_915->g_818[i]", print_hash_value);

    }
    transparent_crc(p_915->g_883.x, "p_915->g_883.x", print_hash_value);
    transparent_crc(p_915->g_883.y, "p_915->g_883.y", print_hash_value);
    transparent_crc(p_915->g_883.z, "p_915->g_883.z", print_hash_value);
    transparent_crc(p_915->g_883.w, "p_915->g_883.w", print_hash_value);
    transparent_crc(p_915->v_collective, "p_915->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 34; i++)
            transparent_crc(p_915->l_special_values[i], "p_915->l_special_values[i]", print_hash_value);
    transparent_crc(p_915->l_comm_values[get_linear_local_id()], "p_915->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_915->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()], "p_915->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
