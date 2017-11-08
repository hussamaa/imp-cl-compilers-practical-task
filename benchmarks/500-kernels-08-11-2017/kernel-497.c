// --atomics 67 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 25,19,7 -l 25,1,1
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

__constant uint32_t permutations[10][25] = {
{1,17,13,11,16,4,8,18,15,9,12,2,10,20,22,5,19,3,23,7,6,21,0,24,14}, // permutation 0
{17,2,23,3,1,11,18,16,12,22,4,24,15,0,6,8,5,10,9,14,21,19,20,7,13}, // permutation 1
{20,23,7,15,10,14,6,21,3,19,2,5,24,13,8,11,0,1,17,12,18,9,16,4,22}, // permutation 2
{1,8,10,13,6,3,4,9,19,23,17,24,7,0,15,14,16,2,5,11,18,12,20,22,21}, // permutation 3
{4,21,24,13,19,3,0,14,18,2,1,12,17,7,5,23,15,6,8,22,16,20,9,11,10}, // permutation 4
{5,3,20,2,10,18,21,23,9,24,13,4,0,12,17,7,11,15,22,1,16,14,8,19,6}, // permutation 5
{6,23,22,18,10,13,8,2,16,5,3,19,21,15,14,4,1,11,24,12,7,9,0,20,17}, // permutation 6
{7,3,5,10,13,0,24,16,14,1,6,18,8,23,20,9,17,15,21,11,19,12,2,4,22}, // permutation 7
{1,7,17,6,13,4,21,22,14,24,3,18,11,16,5,19,9,0,10,20,12,15,2,23,8}, // permutation 8
{6,11,9,12,17,18,7,4,15,14,23,0,13,10,21,20,24,2,22,8,1,3,5,19,16} // permutation 9
};

// Seed: 3169279500

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   volatile uint32_t  f1;
   int16_t  f2;
   uint64_t  f3;
};

struct S1 {
    int32_t g_106;
    int32_t *g_105;
    int32_t *g_120;
    int32_t g_123;
    int32_t * volatile g_122;
    union U0 g_124;
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
union U0  func_1(struct S1 * p_125);
int64_t  func_102(int32_t * p_103, uint32_t  p_104, struct S1 * p_125);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_125->g_105 p_125->l_comm_values p_125->g_106 p_125->g_120 p_125->g_122 p_125->g_124
 * writes: p_125->g_106 p_125->g_105 p_125->g_120 p_125->g_123
 */
union U0  func_1(struct S1 * p_125)
{ /* block id: 4 */
    uint32_t l_119 = 0x32C83D21L;
    int32_t **l_121 = &p_125->g_120;
    if ((atomic_inc(&p_125->g_atomic_input[67 * get_linear_group_id() + 13]) == 9))
    { /* block id: 6 */
        int32_t l_2 = 0x7E04822BL;
        for (l_2 = 0; (l_2 != 16); ++l_2)
        { /* block id: 9 */
            int8_t l_5 = 0x0FL;
            uint32_t l_6 = 0xE8B0D193L;
            VECTOR(int16_t, 8) l_7 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3EC7L), 0x3EC7L), 0x3EC7L, 0L, 0x3EC7L);
            uint64_t l_8 = 0xEF6E229EDCA8FECFL;
            VECTOR(int32_t, 16) l_9 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
            VECTOR(int32_t, 8) l_10 = (VECTOR(int32_t, 8))(0x1B6917ABL, (VECTOR(int32_t, 4))(0x1B6917ABL, (VECTOR(int32_t, 2))(0x1B6917ABL, 0L), 0L), 0L, 0x1B6917ABL, 0L);
            uint32_t l_11 = 4294967295UL;
            union U0 l_12 = {7L};/* VOLATILE GLOBAL l_12 */
            int32_t l_13 = 0x238D0672L;
            int i;
            l_9.s0 = ((l_8 ^= ((l_6 = l_5) , ((VECTOR(int16_t, 8))(l_7.s52767550)).s7)) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_9.s0890)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(l_10.s01671335)).s55, (int32_t)l_11, (int32_t)(l_12 , l_13)))).yyyyyxyy)).s15)).yxxx)))).s4);
            for (l_10.s3 = (-4); (l_10.s3 >= 10); ++l_10.s3)
            { /* block id: 15 */
                int16_t l_16 = 0x7BA2L;
                if (l_16)
                { /* block id: 16 */
                    uint8_t l_17 = 0UL;
                    VECTOR(int32_t, 2) l_18 = (VECTOR(int32_t, 2))((-5L), 1L);
                    int i;
                    l_9.s9 = l_17;
                    if (((VECTOR(int32_t, 4))(0x5D840DFEL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x5ACB314BL, 0L)))), ((VECTOR(int32_t, 2))(l_18.yx))))))), (-5L))).x)
                    { /* block id: 18 */
                        int16_t l_19 = 0x506FL;
                        int8_t l_20 = 0x1EL;
                        l_18.y &= l_19;
                        l_20 = 0x007C1ABDL;
                    }
                    else
                    { /* block id: 21 */
                        uint32_t l_21 = 0xF5D1CC0CL;
                        int32_t l_22 = 0x79DEB476L;
                        int32_t l_25 = 0x5707D8EBL;
                        VECTOR(uint8_t, 8) l_26 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x62L), 0x62L), 0x62L, 255UL, 0x62L);
                        int8_t l_27[4] = {0x17L,0x17L,0x17L,0x17L};
                        int64_t l_28[5] = {1L,1L,1L,1L,1L};
                        uint8_t l_29 = 250UL;
                        uint64_t l_30 = 0UL;
                        int8_t l_31 = 0x0CL;
                        int i;
                        l_9.se ^= ((VECTOR(int32_t, 4))((l_18.y = (((l_22 = l_21) , ((l_11--) , 0L)) , l_25)), (-1L), 0x455DBFE6L, 0x7C2657A7L)).w;
                        l_29 = (l_18.y = (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_26.s6264)).zxyyywzzywzzwyxy)).s2 , (l_27[0] , l_28[2])));
                        l_9.sf &= (l_31 = l_30);
                    }
                }
                else
                { /* block id: 31 */
                    uint8_t l_32 = 1UL;
                    int8_t l_71 = 0x3AL;
                    int32_t l_73 = 0x0C809647L;
                    int32_t *l_72 = &l_73;
                    int32_t *l_74 = &l_73;
                    if (l_32)
                    { /* block id: 32 */
                        uint64_t l_33 = 0x624E194E4064544AL;
                        int32_t l_36 = 0x2075D7B1L;
                        int32_t l_37 = 8L;
                        int32_t l_39 = (-5L);
                        int32_t *l_38 = &l_39;
                        --l_33;
                        l_37 |= (l_36 = 0x161DBFA2L);
                        l_38 = l_38;
                    }
                    else
                    { /* block id: 37 */
                        int8_t l_40 = 0x4DL;
                        VECTOR(int32_t, 4) l_41 = (VECTOR(int32_t, 4))(0x796394AEL, (VECTOR(int32_t, 2))(0x796394AEL, (-4L)), (-4L));
                        int32_t l_42 = (-9L);
                        uint64_t l_43 = 18446744073709551615UL;
                        uint32_t l_44 = 5UL;
                        int i;
                        l_40 = (-5L);
                        l_9.sa = ((VECTOR(int32_t, 2))(l_41.xz)).lo;
                        l_44 |= ((((VECTOR(int32_t, 2))(7L, (-1L))).hi , (l_9.s4 = l_42)) , l_43);
                    }
                    for (l_32 = 0; (l_32 > 48); l_32++)
                    { /* block id: 45 */
                        int8_t l_47 = 0x1CL;
                        VECTOR(int32_t, 4) l_48 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6E1D35EEL), 0x6E1D35EEL);
                        VECTOR(uint64_t, 2) l_49 = (VECTOR(uint64_t, 2))(0x7EE7A741179D740FL, 0xB4F12B152D5F2ABAL);
                        uint32_t l_50 = 4294967295UL;
                        VECTOR(int32_t, 4) l_51 = (VECTOR(int32_t, 4))(0x2A688ECCL, (VECTOR(int32_t, 2))(0x2A688ECCL, 0x33783651L), 0x33783651L);
                        VECTOR(int32_t, 16) l_52 = (VECTOR(int32_t, 16))(0x2F0E761DL, (VECTOR(int32_t, 4))(0x2F0E761DL, (VECTOR(int32_t, 2))(0x2F0E761DL, 8L), 8L), 8L, 0x2F0E761DL, 8L, (VECTOR(int32_t, 2))(0x2F0E761DL, 8L), (VECTOR(int32_t, 2))(0x2F0E761DL, 8L), 0x2F0E761DL, 8L, 0x2F0E761DL, 8L);
                        VECTOR(int32_t, 16) l_53 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 7L), 7L), 7L, (-5L), 7L, (VECTOR(int32_t, 2))((-5L), 7L), (VECTOR(int32_t, 2))((-5L), 7L), (-5L), 7L, (-5L), 7L);
                        int16_t l_54 = 0x5A2BL;
                        VECTOR(int32_t, 2) l_55 = (VECTOR(int32_t, 2))(1L, 1L);
                        int32_t l_56 = 0x6EEF6617L;
                        int32_t *l_57 = &l_56;
                        int32_t *l_58 = (void*)0;
                        int8_t l_59 = 0x7EL;
                        int i;
                        l_48.x |= l_47;
                        l_56 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 2))(0xFB601BA2AAC5DA29L, 0x2365B212F019D465L)).yxxxyyyy, ((VECTOR(uint64_t, 16))(l_49.xyxyxxyyyxxxxxyy)).lo))).hi)).x , l_50), (-1L), 0L, (-1L), 1L, (-1L), 0x31552AE0L, 9L)).s1, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x1AE2D2C9L, 8L, 1L, (-1L))).wxzyywzx)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x66FCAC8AL, 0x17083D4BL)).hi, ((VECTOR(int32_t, 2))(l_51.zw)), 0x413F5ED5L)).lo, ((VECTOR(int32_t, 2))(l_52.sb3))))).yyyxyxyyyxyxxyxy)).s910f, ((VECTOR(int32_t, 2))(l_53.sb9)).xyyy))), l_54, ((VECTOR(int32_t, 8))(l_55.yyxyyxyx)), 0x46B82E5CL, 0x63C4023AL)).s1;
                        l_58 = l_57;
                        l_9.s2 &= l_59;
                    }
                    for (l_32 = 0; (l_32 >= 51); ++l_32)
                    { /* block id: 53 */
                        uint32_t l_62[6] = {4294967295UL,1UL,4294967295UL,4294967295UL,1UL,4294967295UL};
                        uint8_t l_63 = 0x18L;
                        int32_t l_65 = 0x0CAA6600L;
                        int32_t *l_64 = &l_65;
                        int32_t *l_66[10] = {&l_65,&l_65,&l_65,&l_65,&l_65,&l_65,&l_65,&l_65,&l_65,&l_65};
                        int32_t l_67 = 0x0B27CD67L;
                        int32_t *l_68[7] = {&l_65,&l_65,&l_65,&l_65,&l_65,&l_65,&l_65};
                        int32_t *l_69 = &l_67;
                        int32_t *l_70[8][7][4] = {{{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67}}};
                        int i, j, k;
                        l_9.s3 = l_62[4];
                        l_9.sa = l_63;
                        l_66[5] = l_64;
                        l_70[7][0][1] = (l_67 , (l_69 = (l_68[0] = (void*)0)));
                    }
                    l_74 = ((l_6 ^= l_71) , l_72);
                }
                for (l_16 = (-10); (l_16 > 21); ++l_16)
                { /* block id: 66 */
                    int32_t l_77 = (-10L);
                    int32_t *l_81 = &l_77;
                    int32_t *l_82[8][8] = {{&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77},{&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77},{&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77},{&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77},{&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77},{&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77},{&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77},{&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77}};
                    int i, j;
                    for (l_77 = 0; (l_77 > 5); l_77 = safe_add_func_uint16_t_u_u(l_77, 5))
                    { /* block id: 69 */
                        int16_t l_80 = (-8L);
                        l_9.sc ^= l_80;
                    }
                    l_82[4][3] = l_81;
                    for (l_77 = 0; (l_77 == 10); l_77++)
                    { /* block id: 75 */
                        int32_t l_85 = 0x149FC4A8L;
                        int32_t l_86 = (-1L);
                        uint8_t l_87[8];
                        VECTOR(uint8_t, 4) l_90 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xF5L), 0xF5L);
                        int8_t l_91 = 0x05L;
                        uint16_t l_92 = 65535UL;
                        VECTOR(uint8_t, 8) l_93 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 9UL), 9UL), 9UL, 1UL, 9UL);
                        VECTOR(uint8_t, 2) l_94 = (VECTOR(uint8_t, 2))(1UL, 0UL);
                        int32_t *l_96 = &l_85;
                        int32_t **l_95 = &l_96;
                        int32_t **l_97 = &l_96;
                        int32_t **l_98[3][10][6] = {{{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96}},{{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96}},{{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96},{&l_96,(void*)0,&l_96,&l_96,(void*)0,&l_96}}};
                        int32_t **l_99[9][2] = {{&l_96,&l_96},{&l_96,&l_96},{&l_96,&l_96},{&l_96,&l_96},{&l_96,&l_96},{&l_96,&l_96},{&l_96,&l_96},{&l_96,&l_96},{&l_96,&l_96}};
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_87[i] = 0UL;
                        l_85 = (l_86 = l_85);
                        --l_87[3];
                        l_95 = (((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(l_90.xxxw)).hi, ((VECTOR(uint8_t, 2))(0x77L, 7UL))))).xxyyxxyy))))).s13)), (uint8_t)l_91))), 0x3EL, 0x02L)).zxxwyxzyyzzzyyyy, (uint8_t)((l_11 = l_92) , ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 4))(l_93.s1767)), ((VECTOR(uint8_t, 4))(0x44L, ((VECTOR(uint8_t, 2))(l_94.yx)), 255UL))))).y)))).s9 , l_95);
                        l_99[6][0] = (l_98[2][3][5] = l_97);
                    }
                }
            }
        }
        unsigned int result = 0;
        result += l_2;
        atomic_add(&p_125->g_special_values[67 * get_linear_group_id() + 13], result);
    }
    else
    { /* block id: 87 */
        (1 + 1);
    }
    (*p_125->g_122) = ((safe_sub_func_int64_t_s_s(func_102(p_125->g_105, p_125->l_comm_values[(safe_mod_func_uint32_t_u_u(p_125->tid, 25))], p_125), (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(1L, 0x3B69C7970BCD7438L)), l_119)), (((*l_121) = p_125->g_120) != p_125->g_122))))) < p_125->l_comm_values[(safe_mod_func_uint32_t_u_u(p_125->tid, 25))]);
    return p_125->g_124;
}


/* ------------------------------------------ */
/* 
 * reads : p_125->g_106
 * writes: p_125->g_106 p_125->g_105
 */
int64_t  func_102(int32_t * p_103, uint32_t  p_104, struct S1 * p_125)
{ /* block id: 90 */
    for (p_104 = 0; (p_104 <= 34); p_104++)
    { /* block id: 93 */
        int32_t *l_111 = &p_125->g_106;
        for (p_125->g_106 = (-25); (p_125->g_106 >= 23); p_125->g_106++)
        { /* block id: 96 */
            int32_t **l_112 = &p_125->g_105;
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_125->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 25)), permutations[(safe_mod_func_uint32_t_u_u(4294967295UL, 10))][(safe_mod_func_uint32_t_u_u(p_125->tid, 25))]));
            (*l_112) = l_111;
        }
    }
    return p_104;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[25];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 25; i++)
            l_comm_values[i] = 1;
    struct S1 c_126;
    struct S1* p_125 = &c_126;
    struct S1 c_127 = {
        0x3330DB19L, // p_125->g_106
        &p_125->g_106, // p_125->g_105
        (void*)0, // p_125->g_120
        0x38C22D3DL, // p_125->g_123
        &p_125->g_123, // p_125->g_122
        {1L}, // p_125->g_124
        0, // p_125->v_collective
        sequence_input[get_global_id(0)], // p_125->global_0_offset
        sequence_input[get_global_id(1)], // p_125->global_1_offset
        sequence_input[get_global_id(2)], // p_125->global_2_offset
        sequence_input[get_local_id(0)], // p_125->local_0_offset
        sequence_input[get_local_id(1)], // p_125->local_1_offset
        sequence_input[get_local_id(2)], // p_125->local_2_offset
        sequence_input[get_group_id(0)], // p_125->group_0_offset
        sequence_input[get_group_id(1)], // p_125->group_1_offset
        sequence_input[get_group_id(2)], // p_125->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 25)), permutations[0][get_linear_local_id()])), // p_125->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_126 = c_127;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_125);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_125->g_106, "p_125->g_106", print_hash_value);
    transparent_crc(p_125->g_123, "p_125->g_123", print_hash_value);
    transparent_crc(p_125->g_124.f0, "p_125->g_124.f0", print_hash_value);
    transparent_crc(p_125->v_collective, "p_125->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 67; i++)
            transparent_crc(p_125->g_special_values[i + 67 * get_linear_group_id()], "p_125->g_special_values[i + 67 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_125->l_comm_values[get_linear_local_id()], "p_125->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_125->g_comm_values[get_linear_group_id() * 25 + get_linear_local_id()], "p_125->g_comm_values[get_linear_group_id() * 25 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
