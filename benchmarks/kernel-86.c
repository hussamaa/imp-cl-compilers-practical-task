// --atomics 58 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 91,69,1 -l 91,1,1
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

__constant uint32_t permutations[10][91] = {
{85,58,40,84,31,22,12,43,25,23,69,19,21,30,3,5,70,80,89,76,56,37,14,57,53,28,81,17,20,86,45,10,7,39,63,2,75,62,72,16,60,79,68,34,15,38,90,35,74,82,52,0,36,78,41,88,50,11,6,77,47,87,18,65,4,48,46,51,66,33,13,54,83,61,59,55,9,8,24,67,73,26,1,49,27,44,32,64,71,42,29}, // permutation 0
{50,83,26,79,82,27,49,9,45,70,90,78,14,47,8,13,86,51,84,74,4,69,16,64,15,56,53,23,0,24,41,71,19,10,42,7,30,88,2,18,52,55,25,31,67,76,11,44,61,87,68,3,28,17,29,12,73,75,40,5,33,59,22,57,6,63,60,46,34,1,85,38,39,20,89,81,66,21,43,72,32,58,36,54,65,80,35,62,37,48,77}, // permutation 1
{40,15,76,78,0,65,81,63,37,26,33,23,59,56,12,3,88,46,36,86,73,18,28,53,25,72,89,17,61,45,19,75,10,9,70,79,4,55,2,71,31,20,13,48,64,47,5,57,52,83,62,27,67,50,22,74,51,58,66,16,43,34,39,29,7,84,14,11,49,30,38,77,69,44,85,90,60,42,8,87,80,41,1,32,68,21,54,24,6,82,35}, // permutation 2
{69,21,77,30,2,19,72,42,87,74,22,60,54,44,41,84,33,7,36,68,90,20,59,40,80,25,65,63,34,82,29,6,23,85,73,31,88,11,81,28,18,8,3,55,86,89,66,17,61,4,47,62,9,78,5,57,67,12,14,58,79,48,10,26,32,39,70,27,76,24,13,35,49,45,15,0,75,53,1,51,16,71,56,37,38,52,43,83,46,64,50}, // permutation 3
{43,16,73,88,40,53,51,7,55,64,21,85,68,60,2,57,12,18,66,74,3,11,70,39,50,34,28,22,31,79,48,29,77,81,83,10,84,59,72,5,4,45,1,6,67,38,47,78,20,75,33,25,44,30,49,15,63,89,0,13,86,58,26,61,24,76,36,14,54,32,52,8,42,17,9,82,46,23,27,62,19,35,37,65,41,56,69,90,80,87,71}, // permutation 4
{59,49,14,9,50,65,74,84,8,18,3,69,80,1,82,12,41,43,19,70,42,21,28,66,87,11,31,48,38,75,46,86,72,83,33,30,58,56,71,68,26,6,25,45,29,52,81,37,4,10,36,55,77,54,32,67,16,15,79,39,13,24,88,90,2,44,20,17,51,5,0,7,60,34,53,73,85,76,23,47,40,35,61,57,89,78,62,64,22,63,27}, // permutation 5
{65,80,52,32,55,90,68,10,18,83,44,67,53,14,28,54,70,79,16,26,17,71,84,75,58,6,56,76,85,46,1,63,24,62,23,30,60,4,35,69,9,64,48,49,86,21,87,22,66,11,82,89,20,33,40,12,50,78,37,27,77,2,19,57,25,36,45,42,51,38,88,3,13,8,72,0,73,39,61,29,34,74,15,43,59,47,7,31,41,5,81}, // permutation 6
{20,61,18,80,24,13,41,43,54,50,48,51,86,74,45,67,85,35,47,22,39,78,30,52,23,14,55,71,2,19,63,15,64,32,70,9,46,8,84,87,0,17,36,65,28,4,42,76,73,1,79,25,31,62,59,72,56,3,27,7,26,60,58,34,5,66,81,37,44,33,77,83,90,57,49,68,88,82,6,21,29,12,10,75,11,16,38,89,69,53,40}, // permutation 7
{56,49,23,62,44,61,64,45,51,68,35,9,47,41,77,11,2,7,73,54,12,71,81,24,6,21,0,57,75,72,82,83,3,76,55,10,46,42,31,67,30,79,33,34,85,1,15,32,22,66,19,60,50,69,65,70,5,88,16,36,84,78,8,14,90,18,48,43,26,37,20,38,89,39,58,80,40,52,53,29,27,86,17,74,87,59,63,28,25,4,13}, // permutation 8
{35,24,19,57,85,60,33,10,63,23,16,78,84,46,53,45,6,9,38,77,11,12,52,34,50,31,61,76,72,47,88,89,51,32,65,82,0,49,74,69,90,37,80,66,4,86,41,36,73,56,81,13,17,28,48,62,59,27,3,40,79,25,68,15,71,20,30,83,58,1,43,87,5,22,14,21,7,44,29,18,26,67,39,54,70,42,2,64,8,55,75} // permutation 9
};

// Seed: 2755958536

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2[7];
    int32_t g_6;
    int32_t g_9;
    volatile int32_t g_12;
    int32_t g_13;
    int16_t g_26;
    uint64_t g_37;
    int8_t g_38;
    int32_t g_57;
    VECTOR(int16_t, 8) g_90;
    VECTOR(uint16_t, 4) g_92;
    VECTOR(uint16_t, 8) g_94;
    uint8_t g_99[9][6][4];
    int32_t g_110[7][9];
    int32_t *g_109;
    int64_t g_121;
    int64_t *g_122;
    int64_t **g_142;
    int16_t g_144;
    int32_t * volatile g_169;
    uint32_t g_178[1];
    uint64_t g_180;
    uint64_t *g_179;
    volatile int32_t *g_181[4][8][4];
    int32_t * volatile g_185;
    volatile VECTOR(uint8_t, 4) g_197;
    volatile VECTOR(uint8_t, 8) g_199;
    volatile VECTOR(uint8_t, 4) g_200;
    VECTOR(uint8_t, 2) g_201;
    int32_t **g_206;
    int32_t ** volatile g_218;
    int32_t *g_221[9][5];
    int32_t ** volatile g_220[1];
    int32_t ** volatile g_223;
    VECTOR(int64_t, 4) g_231;
    VECTOR(int32_t, 8) g_238;
    volatile VECTOR(uint32_t, 16) g_240;
    VECTOR(int64_t, 2) g_248;
    int32_t ** volatile g_255;
    VECTOR(int32_t, 8) g_440;
    VECTOR(uint32_t, 2) g_455;
    VECTOR(uint32_t, 8) g_494;
    VECTOR(int16_t, 16) g_513;
    uint64_t **g_529[10][10][1];
    VECTOR(int8_t, 16) g_544;
    volatile int64_t g_551;
    VECTOR(uint32_t, 16) g_556;
    volatile VECTOR(uint32_t, 8) g_566;
    int32_t g_573;
    volatile uint32_t g_594;
    VECTOR(int64_t, 16) g_595;
    VECTOR(int64_t, 8) g_608;
    int32_t ** volatile g_991;
    VECTOR(int32_t, 8) g_992;
    volatile VECTOR(uint8_t, 2) g_994;
    int32_t **g_998;
    uint64_t g_1044;
    VECTOR(uint32_t, 2) g_1062;
    VECTOR(uint32_t, 2) g_1063;
    VECTOR(uint32_t, 16) g_1064;
    int32_t *g_1098;
    VECTOR(int32_t, 4) g_1102;
    int32_t ** volatile * volatile g_1105;
    int32_t ** volatile * volatile *g_1104;
    volatile uint32_t g_1125;
    volatile VECTOR(int16_t, 2) g_1131;
    VECTOR(int32_t, 16) g_1138;
    VECTOR(int32_t, 8) g_1139;
    VECTOR(int32_t, 4) g_1140;
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
int32_t  func_1(struct S0 * p_1147);
uint8_t  func_40(int32_t * p_41, int64_t  p_42, struct S0 * p_1147);
int32_t * func_43(uint64_t  p_44, int32_t  p_45, int16_t  p_46, int32_t  p_47, struct S0 * p_1147);
int16_t  func_48(uint64_t * p_49, struct S0 * p_1147);
uint64_t * func_50(int32_t  p_51, uint64_t * p_52, uint32_t  p_53, struct S0 * p_1147);
uint64_t * func_58(int32_t * p_59, uint32_t  p_60, int16_t  p_61, uint32_t  p_62, uint64_t  p_63, struct S0 * p_1147);
int32_t * func_64(uint16_t  p_65, uint32_t  p_66, uint64_t * p_67, int64_t  p_68, struct S0 * p_1147);
uint16_t  func_69(int16_t  p_70, int32_t * p_71, struct S0 * p_1147);
uint8_t  func_76(uint64_t * p_77, int32_t * p_78, uint32_t  p_79, int32_t * p_80, struct S0 * p_1147);
uint64_t * func_81(uint64_t * p_82, uint64_t * p_83, int32_t * p_84, struct S0 * p_1147);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1147->g_2 p_1147->g_6 p_1147->g_9 p_1147->g_13 p_1147->g_26 p_1147->g_12 p_1147->g_1098 p_1147->g_185 p_1147->g_1125 p_1147->g_1105 p_1147->g_223 p_1147->g_221 p_1147->g_1104 p_1147->g_1131 p_1147->g_1062 p_1147->g_1138 p_1147->g_1139 p_1147->g_1140 p_1147->g_201 p_1147->g_38 p_1147->g_248 p_1147->g_178 p_1147->g_94 p_1147->g_1064
 * writes: p_1147->g_2 p_1147->g_6 p_1147->g_9 p_1147->g_13 p_1147->g_26 p_1147->g_1125 p_1147->g_221 p_1147->g_178 p_1147->g_94
 */
int32_t  func_1(struct S0 * p_1147)
{ /* block id: 4 */
    uint32_t l_27 = 1UL;
    int32_t l_1103 = 4L;
    uint16_t *l_1116 = (void*)0;
    int32_t l_1121[3][5][3] = {{{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)}},{{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)}},{{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)},{0x702D3E52L,(-8L),(-10L)}}};
    int64_t l_1123 = 0x1A36F2600A7EB9B5L;
    int32_t l_1124[8][1] = {{0x0A072FEAL},{0x0A072FEAL},{0x0A072FEAL},{0x0A072FEAL},{0x0A072FEAL},{0x0A072FEAL},{0x0A072FEAL},{0x0A072FEAL}};
    VECTOR(int64_t, 16) l_1130 = (VECTOR(int64_t, 16))(0x2A0D84F9A00DBDA8L, (VECTOR(int64_t, 4))(0x2A0D84F9A00DBDA8L, (VECTOR(int64_t, 2))(0x2A0D84F9A00DBDA8L, 2L), 2L), 2L, 0x2A0D84F9A00DBDA8L, 2L, (VECTOR(int64_t, 2))(0x2A0D84F9A00DBDA8L, 2L), (VECTOR(int64_t, 2))(0x2A0D84F9A00DBDA8L, 2L), 0x2A0D84F9A00DBDA8L, 2L, 0x2A0D84F9A00DBDA8L, 2L);
    uint8_t *l_1141 = (void*)0;
    uint8_t *l_1142 = &p_1147->g_99[0][4][0];
    uint32_t *l_1143 = &p_1147->g_178[0];
    uint16_t *l_1144 = (void*)0;
    uint16_t *l_1145[2][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t l_1146 = 0xCE298F17622134F1L;
    int i, j, k;
    for (p_1147->g_2[0] = (-18); (p_1147->g_2[0] >= (-16)); p_1147->g_2[0] = safe_add_func_int8_t_s_s(p_1147->g_2[0], 6))
    { /* block id: 7 */
        int32_t *l_5[8][2][1] = {{{&p_1147->g_2[0]},{&p_1147->g_2[0]}},{{&p_1147->g_2[0]},{&p_1147->g_2[0]}},{{&p_1147->g_2[0]},{&p_1147->g_2[0]}},{{&p_1147->g_2[0]},{&p_1147->g_2[0]}},{{&p_1147->g_2[0]},{&p_1147->g_2[0]}},{{&p_1147->g_2[0]},{&p_1147->g_2[0]}},{{&p_1147->g_2[0]},{&p_1147->g_2[0]}},{{&p_1147->g_2[0]},{&p_1147->g_2[0]}}};
        uint32_t l_33[5];
        VECTOR(uint16_t, 8) l_39 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x1A76L), 0x1A76L), 0x1A76L, 0UL, 0x1A76L);
        uint64_t l_183 = 0x5B38493D40E68577L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_33[i] = 5UL;
        if ((p_1147->g_6 = p_1147->g_2[1]))
        { /* block id: 9 */
            int32_t *l_20 = (void*)0;
            for (p_1147->g_6 = 9; (p_1147->g_6 <= 8); p_1147->g_6 = safe_sub_func_uint8_t_u_u(p_1147->g_6, 1))
            { /* block id: 12 */
                for (p_1147->g_9 = 0; (p_1147->g_9 != (-25)); p_1147->g_9--)
                { /* block id: 15 */
                    int32_t l_16 = (-1L);
                    int32_t l_21 = (-1L);
                    for (p_1147->g_13 = 10; (p_1147->g_13 != (-5)); --p_1147->g_13)
                    { /* block id: 18 */
                        uint32_t l_17 = 0x963EC58FL;
                        if (p_1147->g_2[0])
                            break;
                        l_17 ^= l_16;
                    }
                    for (p_1147->g_13 = 0; (p_1147->g_13 > (-23)); p_1147->g_13 = safe_sub_func_int32_t_s_s(p_1147->g_13, 1))
                    { /* block id: 24 */
                        l_21 |= (&p_1147->g_13 == l_20);
                    }
                    l_27 &= (p_1147->g_26 = (p_1147->g_13 |= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(p_1147->g_2[0], 2)), 4))));
                    if (p_1147->g_9)
                        break;
                }
            }
        }
        else
        { /* block id: 33 */
            uint64_t *l_54 = (void*)0;
            uint64_t *l_55 = &p_1147->g_37;
            int32_t l_125[3];
            int16_t l_1120 = 0x714CL;
            int8_t l_1122 = 0x1DL;
            int i;
            for (i = 0; i < 3; i++)
                l_125[i] = 0x1CEE6839L;
            for (p_1147->g_26 = 0; (p_1147->g_26 != (-24)); p_1147->g_26 = safe_sub_func_uint16_t_u_u(p_1147->g_26, 9))
            { /* block id: 36 */
                int16_t l_30[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                uint64_t *l_36 = &p_1147->g_37;
                int32_t *l_56 = &p_1147->g_57;
                int32_t **l_182 = &p_1147->g_109;
                uint64_t **l_256 = &l_36;
                uint64_t *l_1043 = &p_1147->g_1044;
                int32_t l_1117[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1117[i] = (-9L);
                if (l_30[7])
                    break;
                for (p_1147->g_9 = 0; (p_1147->g_9 == 16); p_1147->g_9 = safe_add_func_int64_t_s_s(p_1147->g_9, 9))
                { /* block id: 40 */
                    if (p_1147->g_12)
                        break;
                    return l_33[0];
                }
            }
            l_125[2] = ((safe_div_func_int32_t_s_s((*p_1147->g_1098), l_1120)) , ((*p_1147->g_185) = 1L));
            ++p_1147->g_1125;
            if (l_125[1])
                continue;
        }
        (***p_1147->g_1104) = (**p_1147->g_1105);
        l_1121[0][3][2] = (*p_1147->g_185);
    }
    l_1124[1][0] ^= (safe_add_func_int64_t_s_s((((((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 4))(l_1130.sea7b))))).even))).xxxxxxxx)).s7 <= ((((VECTOR(int16_t, 8))(p_1147->g_1131.yxyxxyyx)).s7 < (l_1121[0][0][1] = 65533UL)) , l_1103)) ^ (safe_div_func_uint16_t_u_u(p_1147->g_1062.x, (p_1147->g_94.s6 |= (safe_div_func_uint32_t_u_u(((*l_1143) &= ((((*p_1147->g_1098) = (safe_rshift_func_int16_t_s_s(((((VECTOR(int32_t, 16))(p_1147->g_1138.s9eede187a23abd58)).s4 && ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1147->g_1139.s0220)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1147->g_1140.xzwxyzzz)).odd)))).s7) != (p_1147->g_201.x || l_1123)), (l_1141 == l_1142)))) || (l_1130.s9 > ((((((((p_1147->g_38 <= p_1147->g_248.x) < GROUP_DIVERGE(1, 1)) <= l_1123) >= l_1103) >= 0x212DFE1F82E9109CL) != p_1147->g_13) == 0x63L) == 0x269EL))) > p_1147->g_6)), l_1130.s8)))))) || l_1146) , (*p_1147->g_1098)) == p_1147->g_1064.sd), GROUP_DIVERGE(1, 1)));
    return l_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1147->g_573 p_1147->g_1102
 * writes: p_1147->g_573
 */
uint8_t  func_40(int32_t * p_41, int64_t  p_42, struct S0 * p_1147)
{ /* block id: 507 */
    int16_t l_1099 = 7L;
    int32_t *l_1100 = (void*)0;
    int32_t *l_1101 = &p_1147->g_573;
    (*l_1101) ^= l_1099;
    (*l_1101) &= ((VECTOR(int32_t, 16))(p_1147->g_1102.yxwwyzwzxxzwzxxx)).sf;
    return p_1147->g_1102.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1147->g_566 p_1147->g_595 p_1147->g_comm_values p_1147->g_178 p_1147->g_94 p_1147->g_1062 p_1147->g_1063 p_1147->g_1064 p_1147->g_181 p_1147->g_223 p_1147->g_608 p_1147->g_12 p_1147->g_90 p_1147->g_179 p_1147->g_180 p_1147->g_144 p_1147->g_99 p_1147->g_1098
 * writes: p_1147->g_99 p_1147->g_38 p_1147->g_178 p_1147->g_94 p_1147->g_221
 */
int32_t * func_43(uint64_t  p_44, int32_t  p_45, int16_t  p_46, int32_t  p_47, struct S0 * p_1147)
{ /* block id: 491 */
    int64_t l_1045 = 0x6508A90E070973BFL;
    uint8_t *l_1052 = &p_1147->g_99[0][3][3];
    int8_t *l_1053 = &p_1147->g_38;
    int32_t l_1054 = 0x23C7810CL;
    int32_t l_1055 = 0x37C85A5FL;
    uint32_t *l_1056 = &p_1147->g_178[0];
    uint16_t *l_1059 = (void*)0;
    int32_t l_1069 = 0L;
    int64_t *l_1074[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1045,&l_1045},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1045,&l_1045},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1045,&l_1045},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1045,&l_1045}};
    int32_t l_1077 = 6L;
    VECTOR(uint64_t, 2) l_1082 = (VECTOR(uint64_t, 2))(2UL, 1UL);
    int32_t *l_1093 = (void*)0;
    int32_t *l_1094[1];
    uint16_t *l_1095 = (void*)0;
    uint16_t *l_1096[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1097 = 0x7759491CL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1094[i] = (void*)0;
    l_1069 = ((VECTOR(int32_t, 16))(0x54E4F563L, l_1045, (-4L), (~(((safe_add_func_uint8_t_u_u(((*l_1052) = (safe_mod_func_int64_t_s_s((safe_add_func_uint8_t_u_u(p_1147->g_566.s7, 0x25L)), p_1147->g_595.sc))), (l_1055 = (l_1054 &= ((*l_1053) = p_1147->g_comm_values[p_1147->tid]))))) ^ (p_44 > ((++(*l_1056)) <= ((++p_1147->g_94.s5) > (((VECTOR(uint32_t, 8))(4294967295UL, ((VECTOR(uint32_t, 2))(p_1147->g_1062.yx)), ((VECTOR(uint32_t, 4))(p_1147->g_1063.xyyy)), 0xDA49D46EL)).s7 && ((VECTOR(uint32_t, 2))(p_1147->g_1064.sc3)).hi))))) & (l_1056 == p_1147->g_181[1][5][1]))), (+(safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0x06L, 0x12L)), 7))), ((VECTOR(int32_t, 8))(1L)), p_47, (-7L), (-1L))).s1;
    (*p_1147->g_223) = &l_1069;
    l_1097 ^= (safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(4294967293UL, (+(((((VECTOR(uint32_t, 16))(1UL, 0x1996B941L, (((((((l_1054 ^= l_1069) < l_1069) != p_1147->g_608.s2) , ((l_1055 = (l_1077 = ((p_46 > (safe_lshift_func_uint8_t_u_u(((l_1077 ^ (safe_add_func_uint8_t_u_u(0xEFL, ((*l_1052) = ((safe_sub_func_uint64_t_u_u((((VECTOR(uint64_t, 8))(l_1082.xyxyxxxy)).s3 >= ((l_1054 = (((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((((void*)0 == &p_1147->g_99[6][3][3]) <= 0UL), p_44)) < p_1147->g_12), 1L)), p_1147->g_90.s6)), p_46)), l_1069)) , 0x53L) >= 0xFFL)) , (-1L))), (*p_1147->g_179))) > 0L))))) , l_1077), p_44))) >= l_1082.y))) ^ l_1082.y)) | p_1147->g_144) , p_47) || 1UL), 0xCBECEC6EL, 0xC533CE29L, p_1147->g_178[0], p_1147->g_99[4][5][1], ((VECTOR(uint32_t, 8))(1UL)), 0x29806C4AL)).s4 != l_1082.y) && 0x29CCA3D4L) , p_44)))), 0xA92B9B00L));
    return p_1147->g_1098;
}


/* ------------------------------------------ */
/* 
 * reads : p_1147->g_37 p_1147->g_180 p_1147->g_90 p_1147->g_223 p_1147->g_221 p_1147->g_991 p_1147->g_992 p_1147->g_994 p_1147->g_179 p_1147->g_13 p_1147->g_144 p_1147->g_494 p_1147->g_2 p_1147->g_9 p_1147->g_206 p_1147->g_110 p_1147->g_12 p_1147->g_240
 * writes: p_1147->g_90 p_1147->g_37 p_1147->g_180 p_1147->g_231 p_1147->g_181 p_1147->g_221 p_1147->g_998 p_1147->g_92 p_1147->g_94 p_1147->g_513 p_1147->g_109
 */
int16_t  func_48(uint64_t * p_49, struct S0 * p_1147)
{ /* block id: 275 */
    int16_t *l_974[1][5][3] = {{{&p_1147->g_26,&p_1147->g_144,&p_1147->g_26},{&p_1147->g_26,&p_1147->g_144,&p_1147->g_26},{&p_1147->g_26,&p_1147->g_144,&p_1147->g_26},{&p_1147->g_26,&p_1147->g_144,&p_1147->g_26},{&p_1147->g_26,&p_1147->g_144,&p_1147->g_26}}};
    int32_t l_977[1];
    int32_t l_978 = 0x519A7131L;
    int32_t l_979 = 1L;
    int64_t *l_986[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_989[6][2][5] = {{{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979},{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979}},{{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979},{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979}},{{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979},{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979}},{{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979},{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979}},{{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979},{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979}},{{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979},{&l_979,&p_1147->g_9,&p_1147->g_6,&p_1147->g_9,&l_979}}};
    VECTOR(int16_t, 16) l_993 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 6L), 6L), 6L, 4L, 6L, (VECTOR(int16_t, 2))(4L, 6L), (VECTOR(int16_t, 2))(4L, 6L), 4L, 6L, 4L, 6L);
    int32_t **l_1004 = &l_989[0][1][1];
    VECTOR(int32_t, 16) l_1041 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_977[i] = (-1L);
    if ((atomic_inc(&p_1147->l_atomic_input[11]) == 6))
    { /* block id: 277 */
        VECTOR(uint8_t, 2) l_626 = (VECTOR(uint8_t, 2))(247UL, 0x0FL);
        VECTOR(uint8_t, 8) l_627 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL);
        VECTOR(uint8_t, 8) l_628 = (VECTOR(uint8_t, 8))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0UL), 0UL), 0UL, 8UL, 0UL);
        uint8_t l_629 = 0xA6L;
        VECTOR(uint8_t, 4) l_630 = (VECTOR(uint8_t, 4))(0x5BL, (VECTOR(uint8_t, 2))(0x5BL, 0xF3L), 0xF3L);
        VECTOR(uint8_t, 8) l_631 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        VECTOR(int16_t, 16) l_632 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-2L)), (-2L)), (-2L), 5L, (-2L), (VECTOR(int16_t, 2))(5L, (-2L)), (VECTOR(int16_t, 2))(5L, (-2L)), 5L, (-2L), 5L, (-2L));
        uint16_t l_633 = 65531UL;
        uint8_t l_634 = 0xEBL;
        VECTOR(int8_t, 16) l_635 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x2CL), 0x2CL), 0x2CL, 0L, 0x2CL, (VECTOR(int8_t, 2))(0L, 0x2CL), (VECTOR(int8_t, 2))(0L, 0x2CL), 0L, 0x2CL, 0L, 0x2CL);
        int32_t l_636[4] = {0x321B4A6FL,0x321B4A6FL,0x321B4A6FL,0x321B4A6FL};
        uint8_t l_637[2][7][6] = {{{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL}},{{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL},{248UL,254UL,0UL,254UL,248UL,0x5FL}}};
        int64_t l_638 = (-1L);
        uint32_t l_639 = 0x5C547451L;
        int32_t l_640 = 0x4719526AL;
        uint8_t l_641 = 251UL;
        VECTOR(int32_t, 8) l_642 = (VECTOR(int32_t, 8))(0x5AE47561L, (VECTOR(int32_t, 4))(0x5AE47561L, (VECTOR(int32_t, 2))(0x5AE47561L, 0x079B5774L), 0x079B5774L), 0x079B5774L, 0x5AE47561L, 0x079B5774L);
        VECTOR(uint16_t, 4) l_643 = (VECTOR(uint16_t, 4))(0xC5ABL, (VECTOR(uint16_t, 2))(0xC5ABL, 65534UL), 65534UL);
        uint64_t l_644 = 0xD2FAAF53ED125E91L;
        int32_t l_645[3];
        int64_t l_646 = 1L;
        uint32_t l_647 = 1UL;
        int8_t l_648 = 0x37L;
        int16_t l_970 = 0x428DL;
        uint16_t l_971 = 0x1988L;
        uint64_t l_972[1][10] = {{0x9E29D2BCE521F6F9L,0x9E29D2BCE521F6F9L,0x9E29D2BCE521F6F9L,0x9E29D2BCE521F6F9L,0x9E29D2BCE521F6F9L,0x9E29D2BCE521F6F9L,0x9E29D2BCE521F6F9L,0x9E29D2BCE521F6F9L,0x9E29D2BCE521F6F9L,0x9E29D2BCE521F6F9L}};
        int64_t l_973 = 0x787C775FC924D01FL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_645[i] = 7L;
        if ((((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(l_626.xyyy)).odd, ((VECTOR(uint8_t, 16))(0x36L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0UL, 255UL, ((VECTOR(uint8_t, 4))(l_627.s3254)), 1UL, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(l_628.s0101343612501055)).s82, ((VECTOR(uint8_t, 16))(0UL, 0UL, 0UL, l_629, ((VECTOR(uint8_t, 8))(0x12L, 249UL, 0x24L, 254UL, ((VECTOR(uint8_t, 4))(l_630.wywy)))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 16))(l_631.s0022453312075350)), ((VECTOR(uint8_t, 8))(0x7EL, 1UL, (((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x65L, 250UL)).xyyxxyyx)).s0 , ((VECTOR(int16_t, 2))(l_632.s75)).even) , (((l_634 |= l_633) , 1L) , (((l_642.s1 = ((((((VECTOR(int32_t, 2))(0x38AADCD4L, 0x24529255L)).even , (l_636[0] = ((VECTOR(int8_t, 4))(l_635.seb8f)).y)) , (l_638 &= l_637[1][5][3])) , l_639) , (l_641 = l_640))) , l_643.y) , l_644))) , 0xC6L), 0UL, 0UL, 0x37L, 0x63L, 0x32L)).s7744007123540625))).s7c))))), 247UL, 5UL)).s9a))), 0UL, ((VECTOR(uint8_t, 4))(0UL)), 0x45L, 0x6AL)).s961c)), 255UL, 0xF4L, 247UL, l_645[1], 0xECL, 255UL, l_646, ((VECTOR(uint8_t, 4))(0UL)))).s22))), ((VECTOR(uint8_t, 2))(0x06L)), 0xF3L, l_647, 0x3AL, 0xFAL, ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 4))(0UL)), 0UL, 0UL)).sfd, ((VECTOR(uint8_t, 2))(6UL))))).odd , l_648))
        { /* block id: 283 */
            int16_t l_649 = 0x0E1BL;
            uint64_t l_650 = 18446744073709551615UL;
            VECTOR(int32_t, 4) l_651 = (VECTOR(int32_t, 4))(0x5C5E8575L, (VECTOR(int32_t, 2))(0x5C5E8575L, 4L), 4L);
            int i;
            l_650 = l_649;
            if (((VECTOR(int32_t, 16))(l_651.wyxzwzxwwxyxzxyw)).s0)
            { /* block id: 285 */
                int32_t l_652 = 1L;
                uint8_t l_653 = 0UL;
                int16_t l_654 = 1L;
                if ((l_652 , (l_653 , (l_636[0] = l_654))))
                { /* block id: 287 */
                    int32_t l_655 = 1L;
                    VECTOR(int32_t, 8) l_661 = (VECTOR(int32_t, 8))(0x1231A33DL, (VECTOR(int32_t, 4))(0x1231A33DL, (VECTOR(int32_t, 2))(0x1231A33DL, 7L), 7L), 7L, 0x1231A33DL, 7L);
                    int16_t l_662 = 0x453EL;
                    int32_t l_663 = 3L;
                    uint64_t l_664 = 0x357BE368542DBDA6L;
                    VECTOR(int32_t, 2) l_667 = (VECTOR(int32_t, 2))((-1L), 0x7A437C1CL);
                    int i;
                    for (l_655 = 0; (l_655 < (-5)); --l_655)
                    { /* block id: 290 */
                        int32_t l_659 = 0x5A5EAA4DL;
                        int32_t *l_658[4] = {&l_659,&l_659,&l_659,&l_659};
                        uint64_t l_660 = 0x1B141E132D99BB94L;
                        int i;
                        l_658[1] = (void*)0;
                        l_651.z ^= l_660;
                    }
                    l_651.w = (l_661.s4 = ((VECTOR(int32_t, 8))(l_661.s26733542)).s1);
                    l_664--;
                    l_651.y |= ((VECTOR(int32_t, 2))(l_667.yx)).lo;
                }
                else
                { /* block id: 298 */
                    uint32_t l_668 = 0x4749AC99L;
                    uint32_t l_671 = 0x3D6D626FL;
                    VECTOR(int8_t, 8) l_672 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x33L), 0x33L), 0x33L, (-1L), 0x33L);
                    uint16_t l_673 = 0UL;
                    uint32_t l_674 = 0xAFDF2B7CL;
                    VECTOR(int8_t, 16) l_675 = (VECTOR(int8_t, 16))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x2EL), 0x2EL), 0x2EL, 4L, 0x2EL, (VECTOR(int8_t, 2))(4L, 0x2EL), (VECTOR(int8_t, 2))(4L, 0x2EL), 4L, 0x2EL, 4L, 0x2EL);
                    uint64_t l_676 = 18446744073709551610UL;
                    VECTOR(int8_t, 16) l_677 = (VECTOR(int8_t, 16))(0x2DL, (VECTOR(int8_t, 4))(0x2DL, (VECTOR(int8_t, 2))(0x2DL, 0x50L), 0x50L), 0x50L, 0x2DL, 0x50L, (VECTOR(int8_t, 2))(0x2DL, 0x50L), (VECTOR(int8_t, 2))(0x2DL, 0x50L), 0x2DL, 0x50L, 0x2DL, 0x50L);
                    VECTOR(int8_t, 4) l_678 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 1L), 1L);
                    uint64_t l_679 = 0x370E2DAEDB0B1B4DL;
                    VECTOR(uint8_t, 4) l_680 = (VECTOR(uint8_t, 4))(0x98L, (VECTOR(uint8_t, 2))(0x98L, 0x0EL), 0x0EL);
                    int32_t l_681 = 7L;
                    VECTOR(int64_t, 8) l_682 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x095AA4D0F980DDE5L), 0x095AA4D0F980DDE5L), 0x095AA4D0F980DDE5L, 0L, 0x095AA4D0F980DDE5L);
                    int8_t l_683 = (-7L);
                    uint32_t l_684 = 1UL;
                    VECTOR(int16_t, 2) l_685 = (VECTOR(int16_t, 2))(0x3CCBL, 0x14D3L);
                    int i;
                    l_668++;
                    l_651.z = (((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_671, ((VECTOR(int8_t, 2))(0x07L, 0L)), 0x3AL)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(5L, ((VECTOR(int8_t, 4))(l_672.s3251)), 0x02L, 0x61L, 0x47L)))).s15)), l_673, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x65L, 0x0CL)))), 0L)).odd, (int8_t)l_674))), 8L, 2L)), ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(0x27L, 0x3CL, 1L, (-1L))).xxyzyyxwzwzwwwzx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(l_675.sfb)).yxyxxxxy, (int8_t)l_676))))).s1163443124143545))).sca, ((VECTOR(int8_t, 2))(l_677.s63)), ((VECTOR(int8_t, 2))((-1L), (-1L)))))), ((VECTOR(int8_t, 8))(l_678.yzwxxxyz)).s65))), (l_635.s6 = l_679), (-1L), (-1L))).sb460)).yxwywyxx, ((VECTOR(uint8_t, 4))(0x19L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 2))(l_680.yy)).xyyy, (uint8_t)((l_681 , ((VECTOR(int64_t, 4))(l_682.s7520)).w) , 0x86L)))).even)), 0UL)).zzzzywxw))).s0535506455373231)).s1 , (l_646 = (l_683 , l_684))) , l_685.y) , (-1L));
                }
            }
            else
            { /* block id: 304 */
                uint64_t l_686 = 18446744073709551615UL;
                uint16_t l_687 = 0xFF4CL;
                VECTOR(int32_t, 2) l_743 = (VECTOR(int32_t, 2))(0x422516CFL, 0L);
                int i;
                if (((l_635.s5 = l_686) , l_687))
                { /* block id: 306 */
                    int64_t l_688 = 0x162FF8E3E2FDCC7BL;
                    VECTOR(uint32_t, 4) l_689 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x99B58546L), 0x99B58546L);
                    uint8_t l_690 = 0x35L;
                    uint8_t l_691 = 251UL;
                    uint64_t l_692 = 0UL;
                    int i;
                    l_636[0] = l_688;
                    l_691 &= (l_690 = ((l_639 = ((VECTOR(uint32_t, 8))(l_689.xwzzwxzz)).s2) , 5L));
                    if (l_692)
                    { /* block id: 311 */
                        int32_t l_693 = 7L;
                        int32_t l_694 = 0x231CAB20L;
                        int32_t l_695 = (-1L);
                        uint32_t l_696 = 0x1737B54AL;
                        ++l_696;
                        l_693 &= (-5L);
                        l_642.s1 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x6F2460F8L, 0x2676F853L)).yyxyyxxx)).s5;
                    }
                    else
                    { /* block id: 315 */
                        int32_t l_700 = 0x23908946L;
                        int32_t *l_699 = &l_700;
                        int32_t *l_701[1];
                        int32_t *l_702 = &l_700;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_701[i] = (void*)0;
                        l_701[0] = l_699;
                        l_702 = (void*)0;
                    }
                }
                else
                { /* block id: 319 */
                    int8_t l_703[4] = {0x15L,0x15L,0x15L,0x15L};
                    int64_t l_704 = 0x6FACD117DF8599C0L;
                    VECTOR(uint64_t, 16) l_705 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0x0B46BC5772E1A3ECL), 0x0B46BC5772E1A3ECL), 0x0B46BC5772E1A3ECL, 6UL, 0x0B46BC5772E1A3ECL, (VECTOR(uint64_t, 2))(6UL, 0x0B46BC5772E1A3ECL), (VECTOR(uint64_t, 2))(6UL, 0x0B46BC5772E1A3ECL), 6UL, 0x0B46BC5772E1A3ECL, 6UL, 0x0B46BC5772E1A3ECL);
                    VECTOR(int32_t, 2) l_715 = (VECTOR(int32_t, 2))(0x0A356107L, 0x7024EC77L);
                    uint16_t l_716 = 1UL;
                    VECTOR(int32_t, 8) l_717 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x4A9403A3L), 0x4A9403A3L), 0x4A9403A3L, 6L, 0x4A9403A3L);
                    VECTOR(int32_t, 4) l_718 = (VECTOR(int32_t, 4))(0x4770DB42L, (VECTOR(int32_t, 2))(0x4770DB42L, 0x2ED50E9AL), 0x2ED50E9AL);
                    uint32_t l_719 = 0xB67A736BL;
                    VECTOR(int32_t, 4) l_720 = (VECTOR(int32_t, 4))(0x3235983DL, (VECTOR(int32_t, 2))(0x3235983DL, 0x5655455BL), 0x5655455BL);
                    VECTOR(int32_t, 2) l_721 = (VECTOR(int32_t, 2))(0x3A29D375L, 0x16769679L);
                    VECTOR(int32_t, 8) l_722 = (VECTOR(int32_t, 8))(0x522B0372L, (VECTOR(int32_t, 4))(0x522B0372L, (VECTOR(int32_t, 2))(0x522B0372L, 0x29975BCEL), 0x29975BCEL), 0x29975BCEL, 0x522B0372L, 0x29975BCEL);
                    VECTOR(uint8_t, 8) l_723 = (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0UL), 0UL), 0UL, 253UL, 0UL);
                    VECTOR(int16_t, 16) l_724 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2C02L), 0x2C02L), 0x2C02L, (-1L), 0x2C02L, (VECTOR(int16_t, 2))((-1L), 0x2C02L), (VECTOR(int16_t, 2))((-1L), 0x2C02L), (-1L), 0x2C02L, (-1L), 0x2C02L);
                    uint8_t l_725 = 253UL;
                    VECTOR(int64_t, 8) l_726 = (VECTOR(int64_t, 8))(0x75D01CEAFCA03E8DL, (VECTOR(int64_t, 4))(0x75D01CEAFCA03E8DL, (VECTOR(int64_t, 2))(0x75D01CEAFCA03E8DL, (-1L)), (-1L)), (-1L), 0x75D01CEAFCA03E8DL, (-1L));
                    VECTOR(int64_t, 8) l_727 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x316E45FE61907C89L), 0x316E45FE61907C89L), 0x316E45FE61907C89L, 0L, 0x316E45FE61907C89L);
                    VECTOR(int64_t, 8) l_728 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 1L), 1L), 1L, 4L, 1L);
                    VECTOR(int64_t, 8) l_729 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x27ED7BEF90154347L), 0x27ED7BEF90154347L), 0x27ED7BEF90154347L, 0L, 0x27ED7BEF90154347L);
                    int8_t l_730 = (-5L);
                    uint8_t l_731 = 249UL;
                    VECTOR(uint16_t, 2) l_732 = (VECTOR(uint16_t, 2))(7UL, 4UL);
                    VECTOR(uint16_t, 2) l_735 = (VECTOR(uint16_t, 2))(0xB8A6L, 8UL);
                    uint16_t l_736 = 0xF638L;
                    VECTOR(int32_t, 16) l_737 = (VECTOR(int32_t, 16))(0x4BE4FCFBL, (VECTOR(int32_t, 4))(0x4BE4FCFBL, (VECTOR(int32_t, 2))(0x4BE4FCFBL, 0x39E39FF2L), 0x39E39FF2L), 0x39E39FF2L, 0x4BE4FCFBL, 0x39E39FF2L, (VECTOR(int32_t, 2))(0x4BE4FCFBL, 0x39E39FF2L), (VECTOR(int32_t, 2))(0x4BE4FCFBL, 0x39E39FF2L), 0x4BE4FCFBL, 0x39E39FF2L, 0x4BE4FCFBL, 0x39E39FF2L);
                    VECTOR(int32_t, 4) l_738 = (VECTOR(int32_t, 4))(0x629B7940L, (VECTOR(int32_t, 2))(0x629B7940L, 0x598D7000L), 0x598D7000L);
                    int8_t l_739 = 0L;
                    uint32_t l_740 = 1UL;
                    int16_t l_741 = 5L;
                    uint64_t l_742 = 0xA96E7B0AC19F40F7L;
                    int i;
                    --l_705.se;
                    for (l_705.s1 = 0; (l_705.s1 <= 20); l_705.s1 = safe_add_func_uint32_t_u_u(l_705.s1, 1))
                    { /* block id: 323 */
                        uint16_t l_710 = 0x173BL;
                        VECTOR(uint32_t, 4) l_713 = (VECTOR(uint32_t, 4))(0x146E4648L, (VECTOR(uint32_t, 2))(0x146E4648L, 0xF82C1397L), 0xF82C1397L);
                        uint32_t *l_712 = (void*)0;
                        uint32_t **l_711 = &l_712;
                        uint32_t **l_714 = &l_712;
                        int i;
                        l_651.z = l_710;
                        l_714 = l_711;
                    }
                    l_642.s7 &= 0L;
                    l_642.s5 = (((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))(l_715.yxyyxyyx)), 0x2D4B38DDL, l_716, 0x5D7AC0DCL, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(l_717.s10002340)), ((VECTOR(int32_t, 16))(l_718.ywyyxxwzzwwzwxyy)).hi))).s2, 1L, 0x29B88CECL, (-1L))).sd , ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))((l_719 , ((VECTOR(int32_t, 16))(l_720.xyxyxxwywzzyyyxx)).s3), 0L, 0x24B3ED15L, 0L)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_721.xy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x5C80C621L)).xxyxyxxxxxyxxxxy)).s54))).yxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_722.s55)).yxyxxyyxxyyyyyyx)))).s3961))).zzwzwyzxxzwzywxw, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x6CD1L, 0x5056L, (l_725 &= (l_723.s7 , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_724.s0eb88581490e0d28)).s8432)).w)), (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_726.s0744661265537025)).s43)), 0x6FA0A3E05B804D87L, 0x75F09DE650A60669L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_727.s03255535)).hi)), ((VECTOR(int64_t, 4))(l_728.s6247)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 4))(l_729.s5076)).wxxwzwzz, (int64_t)(l_638 &= 0L)))).even)))).s4 , l_730), ((VECTOR(int16_t, 2))(4L, 0x2FA3L)), (-1L), 0x7447L)).s2773251636654761)), ((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(3UL, 0x03F8L)).xyyyyxyx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_731, ((VECTOR(uint16_t, 4))(l_732.yyxx)), (l_732.y--), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_735.xxxy)))), 0xC480L, l_736, 2UL, 0xE1B1L, 65529UL, 0x1025L)).s98)).xyyxxxyy))).s3144307467775074))).s73)))), ((VECTOR(int32_t, 4))(l_737.s5b86)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(4L, 5L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_738.xxwx)), 5L, 1L, 0x78CD00C9L, 0L)).s50))).yxyyyyxxyxxyxxyy, ((VECTOR(int32_t, 8))(1L, l_739, 0x049F1914L, l_740, l_741, 0L, 0x307D6152L, 0x24300C08L)).s5076126366220717, ((VECTOR(int32_t, 16))(0x75C4A520L))))).sd688)), 0L, ((VECTOR(int32_t, 4))(0L)), 0x4EFAE203L))))))).s2, l_742, (-2L), 0x0B1380F3L)).odd))).xxyyxxyyyxxxxxyy, ((VECTOR(int32_t, 16))(6L))))).s1);
                }
                if (((VECTOR(int32_t, 2))(l_743.yx)).even)
                { /* block id: 333 */
                    int32_t l_744[1];
                    int8_t l_766 = 0x0AL;
                    uint16_t l_767 = 0x2300L;
                    int16_t l_770[2];
                    uint32_t l_771 = 0x0571838BL;
                    int32_t *l_772[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_773 = &l_744[0];
                    int32_t *l_774 = &l_744[0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_744[i] = 0x53606427L;
                    for (i = 0; i < 2; i++)
                        l_770[i] = (-8L);
                    for (l_744[0] = 0; (l_744[0] == (-3)); l_744[0]--)
                    { /* block id: 336 */
                        int64_t l_747 = 0L;
                        VECTOR(int16_t, 4) l_748 = (VECTOR(int16_t, 4))(0x627BL, (VECTOR(int16_t, 2))(0x627BL, 0x5275L), 0x5275L);
                        VECTOR(int16_t, 16) l_749 = (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 1L), 1L), 1L, 2L, 1L, (VECTOR(int16_t, 2))(2L, 1L), (VECTOR(int16_t, 2))(2L, 1L), 2L, 1L, 2L, 1L);
                        int32_t l_750 = 0x7C3E5EF7L;
                        uint64_t l_751 = 0x071E05594B7BC531L;
                        VECTOR(int64_t, 16) l_752 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x2A0154EF181832A3L), 0x2A0154EF181832A3L), 0x2A0154EF181832A3L, (-1L), 0x2A0154EF181832A3L, (VECTOR(int64_t, 2))((-1L), 0x2A0154EF181832A3L), (VECTOR(int64_t, 2))((-1L), 0x2A0154EF181832A3L), (-1L), 0x2A0154EF181832A3L, (-1L), 0x2A0154EF181832A3L);
                        uint64_t l_753 = 1UL;
                        uint32_t l_754 = 1UL;
                        int64_t l_755 = 0x6DF42D676D593125L;
                        uint32_t l_756[2];
                        VECTOR(int16_t, 16) l_757 = (VECTOR(int16_t, 16))(0x10D8L, (VECTOR(int16_t, 4))(0x10D8L, (VECTOR(int16_t, 2))(0x10D8L, 0x47C7L), 0x47C7L), 0x47C7L, 0x10D8L, 0x47C7L, (VECTOR(int16_t, 2))(0x10D8L, 0x47C7L), (VECTOR(int16_t, 2))(0x10D8L, 0x47C7L), 0x10D8L, 0x47C7L, 0x10D8L, 0x47C7L);
                        VECTOR(int16_t, 16) l_758 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int16_t, 2))(1L, 0L), (VECTOR(int16_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                        VECTOR(int16_t, 8) l_759 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6FCFL), 0x6FCFL), 0x6FCFL, (-1L), 0x6FCFL);
                        int16_t l_760 = (-10L);
                        VECTOR(int16_t, 4) l_761 = (VECTOR(int16_t, 4))(0x1626L, (VECTOR(int16_t, 2))(0x1626L, 0x2BDEL), 0x2BDEL);
                        uint64_t l_762 = 1UL;
                        uint32_t l_763 = 4294967286UL;
                        uint32_t l_764[9] = {0UL,1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL};
                        int16_t l_765 = 0x315CL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_756[i] = 0x897EB27FL;
                        l_651.z ^= (((((l_638 = l_747) , ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(l_748.xzwywxxy)).s2637113525712002, ((VECTOR(int16_t, 16))(l_749.s5114369730d2b5f4)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x5BDCL, 0x552AL, (-1L), l_750, 0x776CL, (-9L), (-6L), (-1L), (l_751 , (l_632.s6 = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x5FC6L, 1L)).yyyxxyxxxyyyxyyy)).s0)), 0x7214L, 0x26CFL, ((((VECTOR(int64_t, 2))(l_752.sb5)).even , (((l_649 = l_753) , l_754) , l_755)) , l_756[0]), 0x711AL, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(l_757.s3fc3)), ((VECTOR(int16_t, 2))(0x2AE9L, (-1L))).yxyx))).even)).xxxy, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(l_758.s6942f04a)).s33, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-4L), (-1L))), 1L, 0x462CL)), ((VECTOR(int16_t, 8))(l_759.s24672205)), (l_632.s7 = l_760), ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_761.wzxz)).wxzywwxxzyxzzxwy)).s136e)).wxyyzwxzyzxwzwxz, (int16_t)l_762))).s17, ((VECTOR(int16_t, 2))(4L))))), 0x2189L)).odd, ((VECTOR(int16_t, 8))((-9L))), ((VECTOR(int16_t, 8))(0L))))).odd)).even, ((VECTOR(int16_t, 2))(0x2170L))))), (-3L), 0x4C95L)).yxwzwwzw))).hi))).odd, ((VECTOR(int16_t, 2))((-1L)))))), (-2L))).lo)).s6772225711620466))).s21)).odd) , FAKE_DIVERGE(p_1147->group_0_offset, get_group_id(0), 10)) , 0xC9CDL) , l_763);
                        l_765 = l_764[5];
                    }
                    l_767--;
                    l_774 = (l_773 = ((l_771 = l_770[1]) , l_772[3]));
                }
                else
                { /* block id: 348 */
                    int32_t l_776[4];
                    int32_t *l_775 = &l_776[1];
                    int32_t *l_777 = &l_776[1];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_776[i] = 4L;
                    l_777 = l_775;
                    for (l_776[1] = 4; (l_776[1] != (-18)); l_776[1] = safe_sub_func_int16_t_s_s(l_776[1], 8))
                    { /* block id: 352 */
                        int32_t l_780 = 0L;
                        uint32_t l_781 = 0x23B55DA0L;
                        VECTOR(int32_t, 8) l_782 = (VECTOR(int32_t, 8))(0x2911A8B2L, (VECTOR(int32_t, 4))(0x2911A8B2L, (VECTOR(int32_t, 2))(0x2911A8B2L, 0x189768C5L), 0x189768C5L), 0x189768C5L, 0x2911A8B2L, 0x189768C5L);
                        uint32_t l_783 = 0x4B1B05A5L;
                        uint8_t l_784[8] = {0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL};
                        uint16_t l_785 = 0x793DL;
                        int32_t l_786 = 0L;
                        int32_t l_787 = 9L;
                        int8_t l_788 = 0x11L;
                        uint16_t l_789 = 4UL;
                        uint64_t l_792 = 0xC84DE80B7B53159DL;
                        VECTOR(int64_t, 16) l_793 = (VECTOR(int64_t, 16))(0x5A0FE97FC8995C1EL, (VECTOR(int64_t, 4))(0x5A0FE97FC8995C1EL, (VECTOR(int64_t, 2))(0x5A0FE97FC8995C1EL, 1L), 1L), 1L, 0x5A0FE97FC8995C1EL, 1L, (VECTOR(int64_t, 2))(0x5A0FE97FC8995C1EL, 1L), (VECTOR(int64_t, 2))(0x5A0FE97FC8995C1EL, 1L), 0x5A0FE97FC8995C1EL, 1L, 0x5A0FE97FC8995C1EL, 1L);
                        VECTOR(uint32_t, 16) l_794 = (VECTOR(uint32_t, 16))(0x27912E2CL, (VECTOR(uint32_t, 4))(0x27912E2CL, (VECTOR(uint32_t, 2))(0x27912E2CL, 0x25FF3F4DL), 0x25FF3F4DL), 0x25FF3F4DL, 0x27912E2CL, 0x25FF3F4DL, (VECTOR(uint32_t, 2))(0x27912E2CL, 0x25FF3F4DL), (VECTOR(uint32_t, 2))(0x27912E2CL, 0x25FF3F4DL), 0x27912E2CL, 0x25FF3F4DL, 0x27912E2CL, 0x25FF3F4DL);
                        VECTOR(uint32_t, 2) l_795 = (VECTOR(uint32_t, 2))(0xD007CBE1L, 4294967287UL);
                        VECTOR(uint32_t, 8) l_796 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967288UL), 4294967288UL), 4294967288UL, 4294967295UL, 4294967288UL);
                        VECTOR(uint16_t, 2) l_797 = (VECTOR(uint16_t, 2))(65535UL, 0x7716L);
                        int8_t l_798[10][3] = {{0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L}};
                        uint32_t l_799 = 4294967293UL;
                        int8_t l_800 = 0x64L;
                        uint16_t l_801 = 0x8D15L;
                        int16_t l_802 = 1L;
                        int32_t l_803[7] = {0x4FB97BADL,0x4FB97BADL,0x4FB97BADL,0x4FB97BADL,0x4FB97BADL,0x4FB97BADL,0x4FB97BADL};
                        int8_t l_804 = 0x1EL;
                        uint32_t l_805 = 0xCCE96CF9L;
                        VECTOR(uint16_t, 8) l_806 = (VECTOR(uint16_t, 8))(0x8965L, (VECTOR(uint16_t, 4))(0x8965L, (VECTOR(uint16_t, 2))(0x8965L, 0UL), 0UL), 0UL, 0x8965L, 0UL);
                        int32_t *l_807 = (void*)0;
                        int i, j;
                        l_743.y = (-3L);
                        l_781 = l_780;
                        l_743.x ^= ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(l_782.s5464)).wyywzxxz, ((VECTOR(int32_t, 16))((FAKE_DIVERGE(p_1147->global_1_offset, get_global_id(1), 10) , (l_783 , l_784[7])), 0x613E26ADL, ((l_785 , ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(1UL, 0x566C807AL)).yxxx, ((VECTOR(uint32_t, 16))((l_788 = (l_787 = l_786)), (l_789 = 5UL), ((VECTOR(uint32_t, 2))(4294967286UL, 4294967290UL)), 0UL, ((++l_781) , l_792), GROUP_DIVERGE(1, 1), l_793.s5, 0UL, 0x51A41B7AL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_794.scad57ef6)).s44)), ((VECTOR(uint32_t, 4))(l_795.yxxx)))).sa6ca))).yzzxyyywzyxwwwwz, ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(l_796.s1506222305341726)).even, ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(2UL, 0x5FE2L)).xxyyxyyxxyxxyxyy, ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0x0522L, 1UL, 0x31ACL, ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(l_797.xyyyxxxyxyyyxyxy)).hi))).s7, (FAKE_DIVERGE(p_1147->global_2_offset, get_global_id(2), 10) , (l_798[7][2] , l_799)), l_800, ((VECTOR(uint16_t, 2))(0x4CFDL)), 0UL, 0x8D30L, ((VECTOR(uint16_t, 4))(0x4A2BL)), 3UL, 1UL)).sef)).xxyx, ((VECTOR(uint16_t, 4))(65535UL))))).wxyywxww, ((VECTOR(uint16_t, 8))(0xEE73L))))).s3602066316421301))).s69f7))).xwzwzxww, ((VECTOR(uint32_t, 8))(4UL))))), 4294967291UL, l_801, ((VECTOR(uint32_t, 2))(0x88C4C3ACL)), GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 2))(3UL)), 0x67F2D53FL)).s5a, ((VECTOR(uint32_t, 2))(0UL))))), ((VECTOR(uint32_t, 2))(0xF649ADA8L))))).yyxy, (uint32_t)l_802))), ((VECTOR(uint32_t, 2))(0UL)), 0x8F0F2483L, 0x1B2A86F1L)).hi, ((VECTOR(uint32_t, 4))(4294967290UL))))).zxxxxxwxxzwxyyxx, ((VECTOR(uint32_t, 16))(4294967295UL))))).sd) , 0x62750F4DL), 0x60ACF52EL, 0x2D16DD68L, l_803[6], l_804, l_805, l_806.s4, 0x436A7DB6L, (-1L), ((VECTOR(int32_t, 2))((-7L))), ((VECTOR(int32_t, 2))(0L)), (-1L))).odd))).s7;
                        l_777 = l_807;
                    }
                    for (l_776[1] = 10; (l_776[1] <= (-19)); l_776[1] = safe_sub_func_int64_t_s_s(l_776[1], 2))
                    { /* block id: 364 */
                        int32_t l_810[3][4][9] = {{{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL},{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL},{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL},{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL}},{{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL},{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL},{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL},{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL}},{{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL},{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL},{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL},{0x164DB37CL,1L,0L,1L,1L,1L,0L,1L,0x164DB37CL}}};
                        VECTOR(int16_t, 16) l_811 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-9L)), (-9L)), (-9L), 0L, (-9L), (VECTOR(int16_t, 2))(0L, (-9L)), (VECTOR(int16_t, 2))(0L, (-9L)), 0L, (-9L), 0L, (-9L));
                        int32_t l_812[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int8_t l_813[3];
                        int32_t l_814 = 0x28DF0109L;
                        int32_t l_815 = 1L;
                        int8_t l_816 = (-4L);
                        int64_t l_817 = 0x6263330DF525B226L;
                        int8_t l_818 = 0x30L;
                        uint32_t l_819 = 4294967294UL;
                        uint8_t l_822 = 254UL;
                        int16_t l_825 = 0x215DL;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_813[i] = 0x1CL;
                        l_812[8] ^= (l_811.sa ^= l_810[2][1][3]);
                        --l_819;
                        ++l_822;
                        l_825 &= (-5L);
                    }
                    for (l_776[2] = 0; (l_776[2] >= (-20)); --l_776[2])
                    { /* block id: 373 */
                        VECTOR(uint32_t, 8) l_828 = (VECTOR(uint32_t, 8))(0x1180CDA7L, (VECTOR(uint32_t, 4))(0x1180CDA7L, (VECTOR(uint32_t, 2))(0x1180CDA7L, 4294967295UL), 4294967295UL), 4294967295UL, 0x1180CDA7L, 4294967295UL);
                        int64_t l_829 = 0x471DB36898D56EE9L;
                        uint16_t l_830 = 0xBE40L;
                        uint32_t l_833 = 0x9A3274F9L;
                        VECTOR(uint32_t, 16) l_834 = (VECTOR(uint32_t, 16))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0x11D9F6C6L), 0x11D9F6C6L), 0x11D9F6C6L, 9UL, 0x11D9F6C6L, (VECTOR(uint32_t, 2))(9UL, 0x11D9F6C6L), (VECTOR(uint32_t, 2))(9UL, 0x11D9F6C6L), 9UL, 0x11D9F6C6L, 9UL, 0x11D9F6C6L);
                        uint8_t l_835 = 255UL;
                        VECTOR(uint32_t, 8) l_838 = (VECTOR(uint32_t, 8))(0xC3117511L, (VECTOR(uint32_t, 4))(0xC3117511L, (VECTOR(uint32_t, 2))(0xC3117511L, 0x277E6DAAL), 0x277E6DAAL), 0x277E6DAAL, 0xC3117511L, 0x277E6DAAL);
                        VECTOR(uint32_t, 16) l_839 = (VECTOR(uint32_t, 16))(0x0354119FL, (VECTOR(uint32_t, 4))(0x0354119FL, (VECTOR(uint32_t, 2))(0x0354119FL, 0x36101BA3L), 0x36101BA3L), 0x36101BA3L, 0x0354119FL, 0x36101BA3L, (VECTOR(uint32_t, 2))(0x0354119FL, 0x36101BA3L), (VECTOR(uint32_t, 2))(0x0354119FL, 0x36101BA3L), 0x0354119FL, 0x36101BA3L, 0x0354119FL, 0x36101BA3L);
                        int16_t l_840 = 2L;
                        VECTOR(int32_t, 2) l_841 = (VECTOR(int32_t, 2))((-1L), (-1L));
                        int16_t l_842[8] = {2L,2L,2L,2L,2L,2L,2L,2L};
                        uint16_t l_843 = 65527UL;
                        uint32_t l_844 = 0x083C7D2FL;
                        int i;
                        l_842[4] &= (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(4294967295UL, ((VECTOR(uint32_t, 2))(l_828.s01)), 4294967292UL, (--l_830), 0xAC32CCE5L, (l_833 = GROUP_DIVERGE(1, 1)), 0x631C13D4L, 0x5F0FA236L, FAKE_DIVERGE(p_1147->group_0_offset, get_group_id(0), 10), ((VECTOR(uint32_t, 2))(l_834.sf5)), (l_835--), (((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_838.s23335116)))))), ((VECTOR(uint32_t, 8))(l_839.s56ae27fc))))).s33))).odd , 0x80E406AAL), 0x1F182F7DL, 0UL)))).s4 , (l_840 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_841.xyxyxyxyyxyyyxxx)).s7d)).even));
                        l_841.y = l_843;
                        l_844++;
                    }
                }
            }
        }
        else
        { /* block id: 383 */
            uint64_t l_847 = 0x233D330F8BA457BEL;
            if ((l_636[3] = (l_847 , 0L)))
            { /* block id: 385 */
                uint16_t l_848[6][4] = {{65531UL,65535UL,65531UL,65531UL},{65531UL,65535UL,65531UL,65531UL},{65531UL,65535UL,65531UL,65531UL},{65531UL,65535UL,65531UL,65531UL},{65531UL,65535UL,65531UL,65531UL},{65531UL,65535UL,65531UL,65531UL}};
                uint8_t l_849 = 1UL;
                int32_t l_851 = 0x4AB6FD72L;
                int32_t *l_850 = &l_851;
                uint32_t l_852 = 0x6260A8A4L;
                int i, j;
                l_642.s3 = 1L;
                l_850 = ((l_849 = (l_848[3][3] = 0x5393E32AL)) , (void*)0);
                if (l_852)
                { /* block id: 390 */
                    int64_t l_853 = 8L;
                    VECTOR(int32_t, 4) l_854 = (VECTOR(int32_t, 4))(0x2B9A7AB0L, (VECTOR(int32_t, 2))(0x2B9A7AB0L, (-1L)), (-1L));
                    int32_t l_855 = 0x77FAA54CL;
                    int8_t l_856 = 5L;
                    uint32_t l_857 = 0x8A7F6B32L;
                    uint8_t l_858 = 0xA5L;
                    int32_t l_859 = 0x3DFA4576L;
                    uint16_t l_860 = 0xD94AL;
                    int8_t l_861 = (-1L);
                    VECTOR(int8_t, 4) l_862 = (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, (-10L)), (-10L));
                    VECTOR(int8_t, 16) l_863 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 9L), 9L), 9L, 0L, 9L, (VECTOR(int8_t, 2))(0L, 9L), (VECTOR(int8_t, 2))(0L, 9L), 0L, 9L, 0L, 9L);
                    int64_t l_864 = 0x48248A789B261A68L;
                    uint8_t l_865 = 0UL;
                    int32_t l_866 = 0x1DCD529FL;
                    int i;
                    l_636[0] ^= ((VECTOR(int32_t, 2))(0x1B7A583CL, 1L)).odd;
                    l_851 = (l_854.w = (l_853 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x31368FF9L, 0x2D34FB28L)), 0x31178F61L, 0x7BFB1ECDL, 0x28B3826DL, 0x23BDB127L, (-1L), 1L, ((VECTOR(int32_t, 4))(l_854.xzxw)), ((l_648 = ((VECTOR(int8_t, 16))(3L, (-5L), 1L, 0L, ((l_857 = (l_856 = l_855)) , (l_635.s7 &= (l_858 , l_859))), (-1L), l_860, ((VECTOR(int8_t, 4))(0x35L, (l_856 ^= l_861), 0x51L, 0x46L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(l_862.wywyzxxzyyyzwzxz)).s319a))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_863.s0aa7)).even)), 7L, (-6L))).odd)).xxyx))))), (-8L))).sc) , l_864), ((VECTOR(int32_t, 2))(6L)), 0x5DB2A919L)).s4));
                    l_866 = (l_636[0] &= l_865);
                }
                else
                { /* block id: 401 */
                    int8_t l_867 = 0x08L;
                    int32_t l_868 = 0L;
                    uint32_t l_869 = 0x877A94B3L;
                    l_869++;
                }
                for (l_849 = (-8); (l_849 == 24); l_849 = safe_add_func_int8_t_s_s(l_849, 9))
                { /* block id: 406 */
                    VECTOR(int32_t, 16) l_874 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                    VECTOR(int32_t, 2) l_875 = (VECTOR(int32_t, 2))(0x13F70743L, 1L);
                    uint32_t l_876[2][8][1] = {{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}};
                    VECTOR(uint16_t, 8) l_877 = (VECTOR(uint16_t, 8))(0xDF83L, (VECTOR(uint16_t, 4))(0xDF83L, (VECTOR(uint16_t, 2))(0xDF83L, 2UL), 2UL), 2UL, 0xDF83L, 2UL);
                    VECTOR(int32_t, 4) l_878 = (VECTOR(int32_t, 4))(0x646E2694L, (VECTOR(int32_t, 2))(0x646E2694L, 0x73D1C319L), 0x73D1C319L);
                    VECTOR(int32_t, 16) l_879 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x5B5F7231L), 0x5B5F7231L), 0x5B5F7231L, 9L, 0x5B5F7231L, (VECTOR(int32_t, 2))(9L, 0x5B5F7231L), (VECTOR(int32_t, 2))(9L, 0x5B5F7231L), 9L, 0x5B5F7231L, 9L, 0x5B5F7231L);
                    VECTOR(int32_t, 16) l_880 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                    VECTOR(int32_t, 4) l_881 = (VECTOR(int32_t, 4))(0x26A6977CL, (VECTOR(int32_t, 2))(0x26A6977CL, 0x2E0E0D0DL), 0x2E0E0D0DL);
                    uint16_t l_882 = 1UL;
                    VECTOR(int32_t, 16) l_883 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x19DD9898L), 0x19DD9898L), 0x19DD9898L, (-1L), 0x19DD9898L, (VECTOR(int32_t, 2))((-1L), 0x19DD9898L), (VECTOR(int32_t, 2))((-1L), 0x19DD9898L), (-1L), 0x19DD9898L, (-1L), 0x19DD9898L);
                    VECTOR(int32_t, 16) l_884 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-8L)), (-8L)), (-8L), 0L, (-8L), (VECTOR(int32_t, 2))(0L, (-8L)), (VECTOR(int32_t, 2))(0L, (-8L)), 0L, (-8L), 0L, (-8L));
                    VECTOR(int32_t, 2) l_885 = (VECTOR(int32_t, 2))(0x7BDBDF92L, 0x6EBC95A6L);
                    VECTOR(int32_t, 2) l_886 = (VECTOR(int32_t, 2))(0x46017F83L, 0x79B19737L);
                    int64_t l_887 = 1L;
                    VECTOR(int16_t, 8) l_888 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L));
                    VECTOR(int16_t, 2) l_889 = (VECTOR(int16_t, 2))(0x6A84L, 0x03F5L);
                    int16_t l_890 = 0x5F93L;
                    uint16_t l_891 = 0xDAEAL;
                    int64_t l_892 = 0x505A45568FFC9BF7L;
                    uint8_t l_893 = 0x69L;
                    uint64_t l_894 = 0x79772DF9AC0F8040L;
                    uint32_t l_895 = 0xC6D1F278L;
                    int i, j, k;
                    l_851 ^= (l_642.s3 = (l_636[0] = (l_876[1][6][0] &= ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_874.sef8f3ebd34a95d4e)).s91fe, ((VECTOR(int32_t, 4))(l_875.yyxy))))).z)));
                    l_895 = ((l_640 = ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(0x62DAF5DEL, (l_877.s6 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_878.zw)).xxxyxxxyxyxxxyxy)).sf), (-6L), 0L))))).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_879.s83bb6e26)), (l_645[1] = ((VECTOR(int32_t, 4))(l_880.s3ea9)).y), (-3L), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_881.wzzxwwzwyywyzwyw)).s66fc)).zyywyyzy, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(4L, (l_645[0] ^= 0x1034A3A7L), 0x326E9BECL, (-1L))), ((VECTOR(int32_t, 8))(0x6B81F42CL, (l_645[0] = l_882), (-7L), (-10L), 0x118F5D68L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x6C463B15L, (-8L))))), (-10L))), ((VECTOR(int32_t, 4))(l_883.s6cd1)))).s68, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(l_884.sb7a05873)), (int32_t)(l_645[1] &= (-1L))))).s5577257515327346)).hi, ((VECTOR(int32_t, 2))(2L, 0x57F5468EL)).xxxxxxyy, ((VECTOR(int32_t, 16))(l_885.yxxyxxyxxxyyyyxy)).lo))).s61))).yxxxyxxx, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_886.yxyyxxyy)).s2612216704506162)).even, ((VECTOR(int32_t, 8))(l_887, 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x5E59F492L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(l_888.s7417527613617016)).even, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_889.yx)), 0x0BD2L, 0x40C3L, 0x76BAL, (l_890 = (l_632.s9 = (-8L))), (-7L), 0x74BEL))))).hi, ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x980BL, 65528UL)))).xxyyxxyy, ((VECTOR(uint16_t, 8))(0x2C80L, 65527UL, l_891, GROUP_DIVERGE(2, 1), 65532UL, 65535UL, 1UL, 0x68F0L))))).lo))))).odd)), l_892, ((VECTOR(int32_t, 2))(0x51316749L)), 0x6DC7E1D2L, 0x61C4659FL)).s34)))), 1L, l_893, 4L, (-3L))))))))).s6, ((VECTOR(int32_t, 4))((-8L))), 1L)).even)).s62))).even) , l_894);
                    for (l_883.s8 = (-5); (l_883.s8 < (-28)); --l_883.s8)
                    { /* block id: 421 */
                        int32_t l_899 = (-1L);
                        int32_t *l_898 = &l_899;
                        l_850 = l_898;
                    }
                }
            }
            else
            { /* block id: 425 */
                int8_t l_900 = (-1L);
                int8_t l_901[5][2] = {{(-6L),0x38L},{(-6L),0x38L},{(-6L),0x38L},{(-6L),0x38L},{(-6L),0x38L}};
                int64_t l_966 = 0x77D6BF8E9A83AF06L;
                uint8_t l_967[6];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_967[i] = 252UL;
                l_636[2] ^= l_900;
                if (l_901[3][0])
                { /* block id: 427 */
                    int32_t l_902 = 0L;
                    VECTOR(int32_t, 2) l_938 = (VECTOR(int32_t, 2))((-1L), 5L);
                    uint32_t l_939 = 0UL;
                    int8_t l_940[3][5] = {{0x74L,(-4L),0x74L,0x74L,(-4L)},{0x74L,(-4L),0x74L,0x74L,(-4L)},{0x74L,(-4L),0x74L,0x74L,(-4L)}};
                    int64_t l_941 = (-10L);
                    int64_t l_942[10] = {0x2F8722F524F459EFL,0x55421C91DDA11A10L,0x2F8722F524F459EFL,0x2F8722F524F459EFL,0x55421C91DDA11A10L,0x2F8722F524F459EFL,0x2F8722F524F459EFL,0x55421C91DDA11A10L,0x2F8722F524F459EFL,0x2F8722F524F459EFL};
                    int64_t l_943 = 1L;
                    int64_t l_944 = (-3L);
                    uint16_t l_945 = 6UL;
                    int i, j;
                    if (l_902)
                    { /* block id: 428 */
                        int32_t l_904 = 0L;
                        int32_t *l_903 = &l_904;
                        VECTOR(int32_t, 4) l_905 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x668A1B4AL), 0x668A1B4AL);
                        uint8_t l_906[5];
                        VECTOR(int32_t, 16) l_907 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L, (VECTOR(int32_t, 2))((-2L), 0L), (VECTOR(int32_t, 2))((-2L), 0L), (-2L), 0L, (-2L), 0L);
                        VECTOR(uint64_t, 8) l_908 = (VECTOR(uint64_t, 8))(0x6CAA9AF7D5FCB075L, (VECTOR(uint64_t, 4))(0x6CAA9AF7D5FCB075L, (VECTOR(uint64_t, 2))(0x6CAA9AF7D5FCB075L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x6CAA9AF7D5FCB075L, 18446744073709551615UL);
                        VECTOR(uint64_t, 16) l_909 = (VECTOR(uint64_t, 16))(0xA369715042F27A63L, (VECTOR(uint64_t, 4))(0xA369715042F27A63L, (VECTOR(uint64_t, 2))(0xA369715042F27A63L, 0UL), 0UL), 0UL, 0xA369715042F27A63L, 0UL, (VECTOR(uint64_t, 2))(0xA369715042F27A63L, 0UL), (VECTOR(uint64_t, 2))(0xA369715042F27A63L, 0UL), 0xA369715042F27A63L, 0UL, 0xA369715042F27A63L, 0UL);
                        VECTOR(uint64_t, 16) l_910 = (VECTOR(uint64_t, 16))(0x7EE8755E58A87AD3L, (VECTOR(uint64_t, 4))(0x7EE8755E58A87AD3L, (VECTOR(uint64_t, 2))(0x7EE8755E58A87AD3L, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0x7EE8755E58A87AD3L, 18446744073709551606UL, (VECTOR(uint64_t, 2))(0x7EE8755E58A87AD3L, 18446744073709551606UL), (VECTOR(uint64_t, 2))(0x7EE8755E58A87AD3L, 18446744073709551606UL), 0x7EE8755E58A87AD3L, 18446744073709551606UL, 0x7EE8755E58A87AD3L, 18446744073709551606UL);
                        VECTOR(uint64_t, 2) l_911 = (VECTOR(uint64_t, 2))(0xD67CA45E7230D51EL, 0x7424AC56B8DF983AL);
                        VECTOR(uint64_t, 8) l_912 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x369675547131CF03L), 0x369675547131CF03L), 0x369675547131CF03L, 1UL, 0x369675547131CF03L);
                        VECTOR(uint64_t, 16) l_913 = (VECTOR(uint64_t, 16))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0xD55C06A785BA9B9DL), 0xD55C06A785BA9B9DL), 0xD55C06A785BA9B9DL, 9UL, 0xD55C06A785BA9B9DL, (VECTOR(uint64_t, 2))(9UL, 0xD55C06A785BA9B9DL), (VECTOR(uint64_t, 2))(9UL, 0xD55C06A785BA9B9DL), 9UL, 0xD55C06A785BA9B9DL, 9UL, 0xD55C06A785BA9B9DL);
                        VECTOR(uint64_t, 2) l_914 = (VECTOR(uint64_t, 2))(0x140A62CA9D45DC07L, 0xB1DFAE796E134127L);
                        VECTOR(uint64_t, 2) l_915 = (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x74A2C878DFFE061FL);
                        VECTOR(int32_t, 16) l_916 = (VECTOR(int32_t, 16))(0x10B9E3F5L, (VECTOR(int32_t, 4))(0x10B9E3F5L, (VECTOR(int32_t, 2))(0x10B9E3F5L, 0L), 0L), 0L, 0x10B9E3F5L, 0L, (VECTOR(int32_t, 2))(0x10B9E3F5L, 0L), (VECTOR(int32_t, 2))(0x10B9E3F5L, 0L), 0x10B9E3F5L, 0L, 0x10B9E3F5L, 0L);
                        VECTOR(uint64_t, 4) l_917 = (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x988097B5D9179E4AL), 0x988097B5D9179E4AL);
                        VECTOR(uint64_t, 8) l_918 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 3UL), 3UL), 3UL, 1UL, 3UL);
                        VECTOR(uint64_t, 8) l_921 = (VECTOR(uint64_t, 8))(0x39B03D38DBD25B3CL, (VECTOR(uint64_t, 4))(0x39B03D38DBD25B3CL, (VECTOR(uint64_t, 2))(0x39B03D38DBD25B3CL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 0x39B03D38DBD25B3CL, 18446744073709551613UL);
                        VECTOR(uint64_t, 8) l_922 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL), 1UL, 18446744073709551615UL, 1UL);
                        VECTOR(int64_t, 2) l_923 = (VECTOR(int64_t, 2))((-1L), 1L);
                        VECTOR(int64_t, 4) l_924 = (VECTOR(int64_t, 4))(0x61C61440AF120520L, (VECTOR(int64_t, 2))(0x61C61440AF120520L, 0x542F45F431FE99E5L), 0x542F45F431FE99E5L);
                        VECTOR(int64_t, 8) l_925 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 8L), 8L), 8L, 0L, 8L);
                        VECTOR(int64_t, 4) l_926 = (VECTOR(int64_t, 4))(0x2E17A1FA99170BD2L, (VECTOR(int64_t, 2))(0x2E17A1FA99170BD2L, 0x3CEC050D8284FA58L), 0x3CEC050D8284FA58L);
                        int64_t l_927 = (-1L);
                        VECTOR(uint8_t, 2) l_928 = (VECTOR(uint8_t, 2))(0x1CL, 0xE4L);
                        int16_t l_929 = 1L;
                        VECTOR(uint16_t, 16) l_930 = (VECTOR(uint16_t, 16))(0x4A02L, (VECTOR(uint16_t, 4))(0x4A02L, (VECTOR(uint16_t, 2))(0x4A02L, 65535UL), 65535UL), 65535UL, 0x4A02L, 65535UL, (VECTOR(uint16_t, 2))(0x4A02L, 65535UL), (VECTOR(uint16_t, 2))(0x4A02L, 65535UL), 0x4A02L, 65535UL, 0x4A02L, 65535UL);
                        uint64_t l_931 = 18446744073709551615UL;
                        uint16_t l_932[1];
                        int32_t l_933 = 1L;
                        int16_t l_934 = 0x51BAL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_906[i] = 5UL;
                        for (i = 0; i < 1; i++)
                            l_932[i] = 0UL;
                        l_903 = (void*)0;
                        l_636[0] = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_905.ywwz)))).w;
                        l_642.s4 ^= l_906[0];
                        l_636[0] &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(l_907.s195c7e3e)).hi, ((VECTOR(int32_t, 8))(0L, 0x54F7645BL, (((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 2))(0x87B510FD039C5C0EL, 0UL)).yxxxxxxxxxxyxxyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_908.s7325)))).lo)).xyxxxxxxxxyxyyyy, ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_909.se9f5)))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 16))(l_910.sd8ff95eae8feabc4)), ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_911.xyxyyyyyyxxxyxyx)))).odd)).s21, ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_912.s13141420)).s04)), (uint64_t)((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_913.s5f)).yyxxxxyx)).s7))), ((VECTOR(uint64_t, 16))(l_914.xyyyyxyxyyyyyxxy)).sdd, ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_915.yxxx)).even)))).yxxx, ((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(GROUP_DIVERGE(2, 1), (l_644 |= l_916.s7), 0x2C236B6C708F4A29L, 6UL)).wxzxwzzzwyzwzwxz, ((VECTOR(uint64_t, 16))(l_917.yywxzzwxzxzxwxyw))))), ((VECTOR(uint64_t, 2))(1UL, 1UL)).xyxxyyyxyxyxxxxy))).s5cf1))).lo))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_918.s26234046)).hi)).lo))).yxxxxxxxxxyxxyyx))).s3b28, ((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0x1AE7A4EE8EDE259DL, (l_644--), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0x337D0B7FE1BC1665L, 6UL, ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_921.s36501500)))).odd, ((VECTOR(uint64_t, 16))(0x7ED2A30483144A19L, 0x9D58F71055A4C644L, 0x4E87B1E130842529L, ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(l_922.s1561)), ((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 16))(l_923.xyyxxyxyyxxyyxxx)).hi, ((VECTOR(int64_t, 8))(l_924.yxxyxwxy))))), ((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(l_925.s5421)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_926.yz)).yyxx)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((l_916.s9 = (l_902 = 1L)) , (l_927 , (((VECTOR(uint8_t, 16))(l_928.yxxyxxyyxyxxxyxx)).s8 , (l_646 ^= (((l_929 , 0x9334E4B3L) , ((VECTOR(uint16_t, 8))(l_930.sb3d70ecb)).s6) , l_931))))), 0x4687F71961410BA4L, (l_646 = 0x1CD4BF72C676B507L), 0x6EB7F6B96D921994L, ((VECTOR(int64_t, 2))((-8L))), 0x6591FB2EEDE3DC19L, (-1L), l_932[0], 0x1BDE9F0511D391D3L, ((VECTOR(int64_t, 4))(0x1BFBE1594E108A64L)), 0L, 5L)).hi)).hi))).zyxyyzxxywxxywyw)).se6))).xxxyxyyx))).hi))), ((VECTOR(uint64_t, 4))(0xEA0429C0620C02D0L))))), 3UL, 0x485E8066DE339BE4L, 0x6D845C508A2FCCF4L, 0xE3E6D92DC92DD13AL, l_933, ((VECTOR(uint64_t, 4))(0xED0227004D6680C3L)))).s5969))), 0UL, 0x178FAB48E22FA82DL, 0xEF85050DA7DB6251L, 0xB776EFF6F605D717L, 0x86C962920218B8B5L, 18446744073709551609UL, ((VECTOR(uint64_t, 2))(0x74647D9C249E57F3L)), 0xD82DCD9B489EA701L, 18446744073709551615UL)).s77)), 18446744073709551612UL, 18446744073709551610UL, l_934, ((VECTOR(uint64_t, 8))(0x5106EAEC794CD7B1L)), 1UL)).s82)).yyxyxxyx)).s0147475762546343, ((VECTOR(uint64_t, 16))(18446744073709551615UL))))).sb2ef)))))))).xyzywxyyzxxzzwxw))).s3 , 2L), 0L, ((VECTOR(int32_t, 4))(0x4CC77F69L)))).even))))).y;
                    }
                    else
                    { /* block id: 439 */
                        int32_t l_936 = 0x1FFB8B75L;
                        int32_t *l_935 = &l_936;
                        int8_t l_937 = 0x62L;
                        l_935 = l_935;
                        l_636[0] = l_937;
                    }
                    l_938.x = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_938.xxxy)).wwyxzzyx)).s6;
                    l_642.s6 = l_939;
                    l_945--;
                }
                else
                { /* block id: 446 */
                    int32_t l_948 = (-3L);
                    VECTOR(int32_t, 16) l_949 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x5A881816L), 0x5A881816L), 0x5A881816L, 8L, 0x5A881816L, (VECTOR(int32_t, 2))(8L, 0x5A881816L), (VECTOR(int32_t, 2))(8L, 0x5A881816L), 8L, 0x5A881816L, 8L, 0x5A881816L);
                    VECTOR(int32_t, 8) l_950 = (VECTOR(int32_t, 8))(0x0DB5EEA6L, (VECTOR(int32_t, 4))(0x0DB5EEA6L, (VECTOR(int32_t, 2))(0x0DB5EEA6L, 0L), 0L), 0L, 0x0DB5EEA6L, 0L);
                    VECTOR(int32_t, 4) l_951 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-9L)), (-9L));
                    int16_t l_952 = 9L;
                    uint16_t l_953 = 0xFAE9L;
                    int8_t l_954 = 8L;
                    uint16_t l_955 = 0xC28FL;
                    VECTOR(int32_t, 8) l_956 = (VECTOR(int32_t, 8))(0x7DCE3EE0L, (VECTOR(int32_t, 4))(0x7DCE3EE0L, (VECTOR(int32_t, 2))(0x7DCE3EE0L, 0x224E5271L), 0x224E5271L), 0x224E5271L, 0x7DCE3EE0L, 0x224E5271L);
                    VECTOR(int32_t, 16) l_957 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int32_t, 2))((-1L), 2L), (VECTOR(int32_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L);
                    int8_t l_958 = 0x64L;
                    int i;
                    l_642.s1 = (((l_948 , ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_949.s44bcdaccdd89908f)).hi, ((VECTOR(int32_t, 2))(l_950.s06)).yxyyyxyy))), ((VECTOR(int32_t, 4))(l_951.wzzy)), l_952, 1L, 6L, (-1L))).s1499)), (int32_t)l_953, (int32_t)(l_645[1] ^= (l_954 , l_955))))).even)).xyxxxxyyyyyyyxxx, ((VECTOR(int32_t, 2))(4L, 4L)).xxxyxyxxxyyxyyyy))))), ((VECTOR(int32_t, 16))(l_956.s1242141614460700)), ((VECTOR(int32_t, 4))(l_957.s4489)).zzwwzxxwywxxxxyy))).s0) , 0x23422205L) , l_958);
                    for (l_950.s2 = 28; (l_950.s2 >= (-2)); l_950.s2 = safe_sub_func_uint64_t_u_u(l_950.s2, 6))
                    { /* block id: 451 */
                        uint8_t l_961 = 1UL;
                        uint8_t l_964 = 248UL;
                        int32_t *l_965 = (void*)0;
                        --l_961;
                        l_636[0] = l_964;
                        l_965 = l_965;
                    }
                }
                l_966 = 0x0007AB80L;
                l_967[4]++;
            }
            l_642.s2 = ((VECTOR(int32_t, 2))((-1L), 0x724A5895L)).lo;
        }
        l_636[0] &= l_970;
        l_973 = (l_971 , l_972[0][5]);
        unsigned int result = 0;
        result += l_626.y;
        result += l_626.x;
        result += l_627.s7;
        result += l_627.s6;
        result += l_627.s5;
        result += l_627.s4;
        result += l_627.s3;
        result += l_627.s2;
        result += l_627.s1;
        result += l_627.s0;
        result += l_628.s7;
        result += l_628.s6;
        result += l_628.s5;
        result += l_628.s4;
        result += l_628.s3;
        result += l_628.s2;
        result += l_628.s1;
        result += l_628.s0;
        result += l_629;
        result += l_630.w;
        result += l_630.z;
        result += l_630.y;
        result += l_630.x;
        result += l_631.s7;
        result += l_631.s6;
        result += l_631.s5;
        result += l_631.s4;
        result += l_631.s3;
        result += l_631.s2;
        result += l_631.s1;
        result += l_631.s0;
        result += l_632.sf;
        result += l_632.se;
        result += l_632.sd;
        result += l_632.sc;
        result += l_632.sb;
        result += l_632.sa;
        result += l_632.s9;
        result += l_632.s8;
        result += l_632.s7;
        result += l_632.s6;
        result += l_632.s5;
        result += l_632.s4;
        result += l_632.s3;
        result += l_632.s2;
        result += l_632.s1;
        result += l_632.s0;
        result += l_633;
        result += l_634;
        result += l_635.sf;
        result += l_635.se;
        result += l_635.sd;
        result += l_635.sc;
        result += l_635.sb;
        result += l_635.sa;
        result += l_635.s9;
        result += l_635.s8;
        result += l_635.s7;
        result += l_635.s6;
        result += l_635.s5;
        result += l_635.s4;
        result += l_635.s3;
        result += l_635.s2;
        result += l_635.s1;
        result += l_635.s0;
        int l_636_i0;
        for (l_636_i0 = 0; l_636_i0 < 4; l_636_i0++) {
            result += l_636[l_636_i0];
        }
        int l_637_i0, l_637_i1, l_637_i2;
        for (l_637_i0 = 0; l_637_i0 < 2; l_637_i0++) {
            for (l_637_i1 = 0; l_637_i1 < 7; l_637_i1++) {
                for (l_637_i2 = 0; l_637_i2 < 6; l_637_i2++) {
                    result += l_637[l_637_i0][l_637_i1][l_637_i2];
                }
            }
        }
        result += l_638;
        result += l_639;
        result += l_640;
        result += l_641;
        result += l_642.s7;
        result += l_642.s6;
        result += l_642.s5;
        result += l_642.s4;
        result += l_642.s3;
        result += l_642.s2;
        result += l_642.s1;
        result += l_642.s0;
        result += l_643.w;
        result += l_643.z;
        result += l_643.y;
        result += l_643.x;
        result += l_644;
        int l_645_i0;
        for (l_645_i0 = 0; l_645_i0 < 3; l_645_i0++) {
            result += l_645[l_645_i0];
        }
        result += l_646;
        result += l_647;
        result += l_648;
        result += l_970;
        result += l_971;
        int l_972_i0, l_972_i1;
        for (l_972_i0 = 0; l_972_i0 < 1; l_972_i0++) {
            for (l_972_i1 = 0; l_972_i1 < 10; l_972_i1++) {
                result += l_972[l_972_i0][l_972_i1];
            }
        }
        result += l_973;
        atomic_add(&p_1147->l_special_values[11], result);
    }
    else
    { /* block id: 464 */
        (1 + 1);
    }
    l_989[3][0][3] = ((p_1147->g_90.s2 = (&p_1147->g_38 == (void*)0)) , func_64((0x7AFE74AD486FD4CDL == (safe_sub_func_int64_t_s_s(l_977[0], (--(*p_49))))), (l_977[0] < (safe_lshift_func_int16_t_s_u(l_977[0], (safe_mod_func_int32_t_s_s(((p_1147->g_231.z = l_977[0]) || (safe_rshift_func_uint8_t_u_u(((l_977[0] , (0x5DA3771CL != l_978)) | 0x690C6B8B96884F29L), 4))), l_979))))), p_49, p_1147->g_90.s5, p_1147));
    if (((void*)0 == l_986[1]))
    { /* block id: 471 */
        int32_t **l_990 = &l_989[3][0][3];
        int32_t ***l_997 = (void*)0;
        uint64_t *l_1001 = &p_1147->g_37;
        VECTOR(int8_t, 2) l_1005 = (VECTOR(int8_t, 2))(0x59L, 0x5BL);
        uint16_t *l_1006 = (void*)0;
        uint16_t *l_1007 = (void*)0;
        uint16_t *l_1008 = (void*)0;
        uint16_t *l_1009 = (void*)0;
        uint16_t *l_1010[1][5][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int8_t l_1013 = 0L;
        int32_t l_1016 = 1L;
        int i, j, k;
        (*p_1147->g_991) = ((*l_990) = (*p_1147->g_223));
        l_1016 ^= ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(p_1147->g_992.s7414534371230337)).sbf, ((VECTOR(int32_t, 8))(0x15B59E89L, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(l_993.s6b)).xxxxxyyyxyyxxxxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xF9B2L, 0xC4EBL)), 2UL, 0x088AL)).wxxzywyz)).even)).xyyxzyxxyxxywxxy))))))).sd22f, ((VECTOR(int32_t, 4))((((VECTOR(uint8_t, 4))(p_1147->g_994.xyyy)).w <= (safe_sub_func_int16_t_s_s((p_1147->g_513.s5 = ((p_1147->g_94.s3 = (p_1147->g_92.w = (((((VECTOR(uint64_t, 4))(0xADEE88D82C454879L, 0x0D1D435F7854B6B1L, 9UL, 0x3CE317001877F298L)).y & 18446744073709551614UL) == (((*p_1147->g_179) , (p_1147->g_998 = l_990)) == ((safe_add_func_uint64_t_u_u((*p_1147->g_179), ((*l_1001)++))) , (l_1004 = &l_989[3][0][3])))) | ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_1005.yyyxyxxy)))).s2))) < (~(safe_div_func_int8_t_s_s(l_1013, p_1147->g_13))))), ((GROUP_DIVERGE(0, 1) & (FAKE_DIVERGE(p_1147->global_2_offset, get_global_id(2), 10) , (safe_mul_func_uint8_t_u_u(p_1147->g_144, p_1147->g_494.s0)))) <= p_1147->g_2[5])))), 0x2642315BL, (-8L), (-2L)))))), l_1005.y, 0x02F5F37EL, 6L)).s54))).xyxxxyyyxyyyxyyy, ((VECTOR(int32_t, 16))(0x7C303D5AL))))).se;
    }
    else
    { /* block id: 481 */
        uint16_t *l_1023 = (void*)0;
        uint16_t *l_1024 = (void*)0;
        uint16_t *l_1025 = (void*)0;
        uint16_t *l_1026[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_1027[7][9][4] = {{{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL}},{{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL}},{{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL}},{{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL}},{{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL}},{{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL}},{{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL},{0L,0x1CBF4002L,0x22E9CFAFL,0x285B0F2EL}}};
        int32_t l_1028 = 0x7CB451CAL;
        uint8_t l_1037 = 0UL;
        VECTOR(int32_t, 8) l_1040 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L);
        int32_t l_1042[4][3] = {{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}};
        int i, j, k;
        l_1042[0][0] = (safe_rshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(p_1147->g_9, (l_1028 = (safe_mod_func_uint16_t_u_u((l_1027[0][4][1] = 0x4420L), 0xF1F4L))))) & ((void*)0 == p_49)) != (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((((*p_1147->g_206) = l_989[3][1][4]) != l_989[2][1][2]) == ((((VECTOR(int64_t, 8))((l_1040.s1 = (~(safe_sub_func_int64_t_s_s(((l_1037 <= ((VECTOR(uint16_t, 2))(65526UL, 0xCA85L)).odd) == (safe_sub_func_int16_t_s_s((p_1147->g_513.se = p_1147->g_110[3][5]), p_1147->g_12))), 0x2DB2E44831E712B9L)))), l_1041.s3, 0x529C90026A674904L, ((VECTOR(int64_t, 4))(1L)), (-1L))).s1 == l_1037) , (*p_49))) > GROUP_DIVERGE(2, 1)) > l_1037), 0L)), p_1147->g_992.s7)), 2))), l_1042[0][2]));
    }
    return p_1147->g_240.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1147->g_6 p_1147->g_37 p_1147->g_180 p_1147->g_13 p_1147->g_90 p_1147->g_185 p_1147->g_9 p_1147->g_110 p_1147->g_57 p_1147->g_179 p_1147->g_197 p_1147->g_38 p_1147->g_238 p_1147->g_248 p_1147->g_92 p_1147->l_comm_values p_1147->g_551 p_1147->g_573 p_1147->g_594 p_1147->g_595 p_1147->g_608 p_1147->g_94 p_1147->g_178 p_1147->g_455
 * writes: p_1147->g_6 p_1147->g_13 p_1147->g_37 p_1147->g_9 p_1147->g_221 p_1147->g_144 p_1147->g_181 p_1147->g_529 p_1147->g_110 p_1147->g_92 p_1147->g_94 p_1147->g_178 p_1147->g_573
 */
uint64_t * func_50(int32_t  p_51, uint64_t * p_52, uint32_t  p_53, struct S0 * p_1147)
{ /* block id: 94 */
    int32_t **l_259[1];
    int32_t l_275 = 0x534CB37EL;
    int32_t l_420 = (-1L);
    int32_t l_423 = 0x7DBCE3D1L;
    int32_t l_428 = 0x07C04496L;
    VECTOR(int32_t, 8) l_433 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1E1C9720L), 0x1E1C9720L), 0x1E1C9720L, (-1L), 0x1E1C9720L);
    VECTOR(int32_t, 16) l_489 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x4C6D13ABL), 0x4C6D13ABL), 0x4C6D13ABL, 6L, 0x4C6D13ABL, (VECTOR(int32_t, 2))(6L, 0x4C6D13ABL), (VECTOR(int32_t, 2))(6L, 0x4C6D13ABL), 6L, 0x4C6D13ABL, 6L, 0x4C6D13ABL);
    VECTOR(uint32_t, 8) l_495 = (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x2783233DL), 0x2783233DL), 0x2783233DL, 4294967289UL, 0x2783233DL);
    VECTOR(uint8_t, 8) l_516 = (VECTOR(uint8_t, 8))(0x32L, (VECTOR(uint8_t, 4))(0x32L, (VECTOR(uint8_t, 2))(0x32L, 0x36L), 0x36L), 0x36L, 0x32L, 0x36L);
    VECTOR(uint8_t, 8) l_517 = (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 1UL), 1UL), 1UL, 248UL, 1UL);
    VECTOR(uint8_t, 16) l_518 = (VECTOR(uint8_t, 16))(0x14L, (VECTOR(uint8_t, 4))(0x14L, (VECTOR(uint8_t, 2))(0x14L, 0x5FL), 0x5FL), 0x5FL, 0x14L, 0x5FL, (VECTOR(uint8_t, 2))(0x14L, 0x5FL), (VECTOR(uint8_t, 2))(0x14L, 0x5FL), 0x14L, 0x5FL, 0x14L, 0x5FL);
    uint64_t *l_524 = &p_1147->g_180;
    uint32_t *l_539 = (void*)0;
    uint8_t l_579 = 0UL;
    int32_t *l_582 = &l_420;
    int32_t *l_583 = &p_1147->g_9;
    int32_t *l_584 = &l_428;
    int32_t *l_585 = &l_423;
    int32_t *l_586 = &p_1147->g_6;
    int32_t *l_587 = &p_1147->g_573;
    int32_t *l_588[1][10] = {{&l_420,&l_420,&l_420,&l_420,&l_420,&l_420,&l_420,&l_420,&l_420,&l_420}};
    uint8_t l_589 = 0xDDL;
    VECTOR(int32_t, 16) l_606 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 3L), 3L), 3L, (-10L), 3L, (VECTOR(int32_t, 2))((-10L), 3L), (VECTOR(int32_t, 2))((-10L), 3L), (-10L), 3L, (-10L), 3L);
    VECTOR(int64_t, 16) l_607 = (VECTOR(int64_t, 16))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L, (VECTOR(int64_t, 2))((-2L), 1L), (VECTOR(int64_t, 2))((-2L), 1L), (-2L), 1L, (-2L), 1L);
    int64_t ***l_609[6][10];
    int16_t l_610 = 0x459FL;
    uint16_t *l_613 = (void*)0;
    uint16_t *l_614 = (void*)0;
    uint16_t *l_615[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t *l_619 = (void*)0;
    uint32_t *l_620 = &p_1147->g_178[0];
    int16_t *l_621 = (void*)0;
    int16_t *l_622 = (void*)0;
    int16_t *l_623 = &l_610;
    int i, j;
    for (i = 0; i < 1; i++)
        l_259[i] = &p_1147->g_109;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
            l_609[i][j] = &p_1147->g_142;
    }
    for (p_1147->g_6 = 0; (p_1147->g_6 >= (-23)); p_1147->g_6 = safe_sub_func_int8_t_s_s(p_1147->g_6, 2))
    { /* block id: 97 */
        int16_t l_276 = 3L;
        int32_t l_418 = 0x34661D7DL;
        int32_t l_422 = (-5L);
        int32_t l_424 = 0x667E09A9L;
        int32_t l_426 = 0x0EC02ED1L;
        int32_t l_427 = (-1L);
        uint32_t l_463 = 4294967295UL;
        VECTOR(int64_t, 2) l_468 = (VECTOR(int64_t, 2))(0x414471C11EBED9F8L, (-8L));
        VECTOR(uint32_t, 2) l_506 = (VECTOR(uint32_t, 2))(1UL, 0xBC30A717L);
        uint64_t *l_523 = &p_1147->g_180;
        int32_t *l_525 = &l_426;
        uint32_t **l_574 = &l_539;
        int32_t *l_578[4][9] = {{(void*)0,&p_1147->g_9,(void*)0,(void*)0,&p_1147->g_9,(void*)0,(void*)0,&p_1147->g_9,(void*)0},{(void*)0,&p_1147->g_9,(void*)0,(void*)0,&p_1147->g_9,(void*)0,(void*)0,&p_1147->g_9,(void*)0},{(void*)0,&p_1147->g_9,(void*)0,(void*)0,&p_1147->g_9,(void*)0,(void*)0,&p_1147->g_9,(void*)0},{(void*)0,&p_1147->g_9,(void*)0,(void*)0,&p_1147->g_9,(void*)0,(void*)0,&p_1147->g_9,(void*)0}};
        int i, j;
        if ((&p_1147->g_109 == l_259[0]))
        { /* block id: 98 */
            if ((atomic_inc(&p_1147->l_atomic_input[32]) == 0))
            { /* block id: 100 */
                uint64_t l_260 = 0xB460943D25446925L;
                int16_t l_261 = 0x134EL;
                int8_t l_262 = (-1L);
                int32_t l_264[6] = {0x0EC12C81L,0x0EC12C81L,0x0EC12C81L,0x0EC12C81L,0x0EC12C81L,0x0EC12C81L};
                int32_t *l_263 = &l_264[2];
                int i;
                l_261 ^= l_260;
                l_263 = (l_262 , (void*)0);
                unsigned int result = 0;
                result += l_260;
                result += l_261;
                result += l_262;
                int l_264_i0;
                for (l_264_i0 = 0; l_264_i0 < 6; l_264_i0++) {
                    result += l_264[l_264_i0];
                }
                atomic_add(&p_1147->l_special_values[32], result);
            }
            else
            { /* block id: 103 */
                (1 + 1);
            }
        }
        else
        { /* block id: 106 */
            VECTOR(uint32_t, 2) l_271 = (VECTOR(uint32_t, 2))(0x12D83D51L, 4294967290UL);
            uint32_t *l_272 = (void*)0;
            uint32_t *l_273 = (void*)0;
            uint32_t *l_274 = (void*)0;
            int32_t l_421[3];
            int16_t l_425 = 0x5C50L;
            uint8_t l_430 = 0UL;
            int i;
            for (i = 0; i < 3; i++)
                l_421[i] = 0x3B6AD5CAL;
            if ((18446744073709551609UL && (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0x5BL, (((l_275 = ((VECTOR(uint32_t, 8))(4294967295UL, 0x8A68BF89L, ((VECTOR(uint32_t, 4))(l_271.yxyy)), 0xDD5268C0L, 0x89D6F418L)).s7) , (*p_52)) >= (l_276 > GROUP_DIVERGE(1, 1))))), (l_276 | 0x4DL))), ((&p_1147->g_179 != &p_52) | ((+l_276) >= p_51))))))
            { /* block id: 108 */
                uint32_t l_277 = 1UL;
                int32_t *l_278 = &p_1147->g_13;
                (*l_278) |= l_277;
                if ((atomic_inc(&p_1147->l_atomic_input[24]) == 9))
                { /* block id: 111 */
                    int32_t l_279 = 0x7747FD3BL;
                    int32_t *l_348 = (void*)0;
                    int32_t *l_349 = (void*)0;
                    VECTOR(int32_t, 16) l_350 = (VECTOR(int32_t, 16))(0x28336256L, (VECTOR(int32_t, 4))(0x28336256L, (VECTOR(int32_t, 2))(0x28336256L, 0x5E9FD722L), 0x5E9FD722L), 0x5E9FD722L, 0x28336256L, 0x5E9FD722L, (VECTOR(int32_t, 2))(0x28336256L, 0x5E9FD722L), (VECTOR(int32_t, 2))(0x28336256L, 0x5E9FD722L), 0x28336256L, 0x5E9FD722L, 0x28336256L, 0x5E9FD722L);
                    int i;
                    if (l_279)
                    { /* block id: 112 */
                        int32_t l_281[10][3];
                        int32_t *l_280 = &l_281[8][1];
                        int32_t *l_282 = &l_281[8][1];
                        int32_t *l_283 = &l_281[8][1];
                        int32_t *l_284 = (void*)0;
                        uint64_t l_285 = 18446744073709551613UL;
                        VECTOR(int32_t, 2) l_286 = (VECTOR(int32_t, 2))(4L, 0x04672E09L);
                        uint32_t l_287[3][6][9] = {{{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L}},{{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L}},{{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L},{4294967295UL,0x83854BC3L,0xC12E71CDL,0x4D9ADC42L,0x5F111156L,0x70EA9CB6L,0x70EA9CB6L,0x5F111156L,0x4D9ADC42L}}};
                        int i, j, k;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_281[i][j] = 0x4328C494L;
                        }
                        l_282 = l_280;
                        l_284 = l_283;
                        l_285 = (-1L);
                        l_287[2][0][4] ^= ((VECTOR(int32_t, 8))(l_286.yxxxxxxx)).s0;
                    }
                    else
                    { /* block id: 117 */
                        int32_t l_288 = 0x148E350BL;
                        int8_t l_289[3];
                        VECTOR(uint32_t, 2) l_290 = (VECTOR(uint32_t, 2))(0xAB490EE6L, 0xDDF625D8L);
                        uint32_t l_291 = 0x97EFC4D0L;
                        uint32_t l_292 = 4294967291UL;
                        VECTOR(uint32_t, 2) l_293 = (VECTOR(uint32_t, 2))(0xC4F91229L, 0x8321FA86L);
                        int32_t l_294 = 5L;
                        int32_t l_295 = 0x4DCC8167L;
                        VECTOR(int64_t, 8) l_296 = (VECTOR(int64_t, 8))(0x6D6B8274297AA096L, (VECTOR(int64_t, 4))(0x6D6B8274297AA096L, (VECTOR(int64_t, 2))(0x6D6B8274297AA096L, 0x2DC942D0C8C6284EL), 0x2DC942D0C8C6284EL), 0x2DC942D0C8C6284EL, 0x6D6B8274297AA096L, 0x2DC942D0C8C6284EL);
                        VECTOR(int64_t, 4) l_297 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x6A2F4C1D79890449L), 0x6A2F4C1D79890449L);
                        uint16_t l_298 = 1UL;
                        int32_t l_299 = 0x0E910793L;
                        VECTOR(int64_t, 4) l_300 = (VECTOR(int64_t, 4))(0x5D2E531E6C8D591BL, (VECTOR(int64_t, 2))(0x5D2E531E6C8D591BL, 3L), 3L);
                        int8_t l_301 = 9L;
                        int8_t l_302 = (-7L);
                        int16_t l_303 = 7L;
                        uint16_t l_304 = 0x9754L;
                        int32_t l_305 = 1L;
                        int32_t l_306 = 1L;
                        uint64_t l_307 = 0x0D30AE7E330E1B65L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_289[i] = (-1L);
                        l_289[2] &= (l_288 = 0L);
                        l_305 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x325A27A8L, 9UL)), 8UL, 4294967295UL, ((VECTOR(uint32_t, 16))(l_290.yyyyyyxxyyyxyxyy)).s3, (l_291 , GROUP_DIVERGE(0, 1)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(1UL, 0x09DB0E4EL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0xC8F225E8L, l_292, ((VECTOR(uint32_t, 8))(l_293.xxyxxyxy)), GROUP_DIVERGE(2, 1), (l_294 , 4294967294UL), 0x3B3921B8L, (l_295 , (((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 4))(l_296.s5472)).yzwzxwzw, ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x5DFA52725B358915L, 0x1D07E729D3353B18L)).yxxy)))), ((VECTOR(int64_t, 2))(l_297.yy)).yyxy))).wyyywxwx))).s3 , (l_299 = l_298))), 0UL, 1UL)).sbc0e)), 4UL, 0x74716CADL)).s31)), 0x0B774321L, (l_301 = (FAKE_DIVERGE(p_1147->local_0_offset, get_local_id(0), 10) , (l_300.x = 0x27F65B8DL))), ((l_302 , l_303) , 0xF1D0AFAAL), ((VECTOR(uint32_t, 4))(4294967286UL)), 4294967294UL))))).sc0)).lo , l_304);
                        l_307++;
                    }
                    for (l_279 = (-13); (l_279 < (-11)); l_279 = safe_add_func_int8_t_s_s(l_279, 8))
                    { /* block id: 128 */
                        VECTOR(uint32_t, 4) l_312 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x2DBA9DB8L), 0x2DBA9DB8L);
                        uint8_t l_313 = 0UL;
                        uint16_t l_314 = 0x3987L;
                        int8_t l_315 = (-1L);
                        uint32_t l_316 = 4294967295UL;
                        VECTOR(int32_t, 16) l_317 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 8L), 8L), 8L, 0L, 8L, (VECTOR(int32_t, 2))(0L, 8L), (VECTOR(int32_t, 2))(0L, 8L), 0L, 8L, 0L, 8L);
                        VECTOR(int16_t, 16) l_318 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x67B2L), 0x67B2L), 0x67B2L, 0L, 0x67B2L, (VECTOR(int16_t, 2))(0L, 0x67B2L), (VECTOR(int16_t, 2))(0L, 0x67B2L), 0L, 0x67B2L, 0L, 0x67B2L);
                        VECTOR(int16_t, 2) l_319 = (VECTOR(int16_t, 2))((-10L), 0x434EL);
                        VECTOR(int16_t, 2) l_320 = (VECTOR(int16_t, 2))(0L, 0x3158L);
                        VECTOR(int16_t, 8) l_321 = (VECTOR(int16_t, 8))(0x5ADAL, (VECTOR(int16_t, 4))(0x5ADAL, (VECTOR(int16_t, 2))(0x5ADAL, 0x2AF8L), 0x2AF8L), 0x2AF8L, 0x5ADAL, 0x2AF8L);
                        VECTOR(int32_t, 8) l_322 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L));
                        VECTOR(int32_t, 4) l_323 = (VECTOR(int32_t, 4))(0x48BAA201L, (VECTOR(int32_t, 2))(0x48BAA201L, (-3L)), (-3L));
                        VECTOR(int16_t, 16) l_324 = (VECTOR(int16_t, 16))(0x6327L, (VECTOR(int16_t, 4))(0x6327L, (VECTOR(int16_t, 2))(0x6327L, 0x1C17L), 0x1C17L), 0x1C17L, 0x6327L, 0x1C17L, (VECTOR(int16_t, 2))(0x6327L, 0x1C17L), (VECTOR(int16_t, 2))(0x6327L, 0x1C17L), 0x6327L, 0x1C17L, 0x6327L, 0x1C17L);
                        VECTOR(int16_t, 16) l_325 = (VECTOR(int16_t, 16))(0x0FE5L, (VECTOR(int16_t, 4))(0x0FE5L, (VECTOR(int16_t, 2))(0x0FE5L, 0L), 0L), 0L, 0x0FE5L, 0L, (VECTOR(int16_t, 2))(0x0FE5L, 0L), (VECTOR(int16_t, 2))(0x0FE5L, 0L), 0x0FE5L, 0L, 0x0FE5L, 0L);
                        VECTOR(int16_t, 2) l_326 = (VECTOR(int16_t, 2))(0x7B6FL, 0x1AAAL);
                        int64_t l_327[10] = {0x0A9B9D1EB9EBAA96L,0x0A9B9D1EB9EBAA96L,0x0A9B9D1EB9EBAA96L,0x0A9B9D1EB9EBAA96L,0x0A9B9D1EB9EBAA96L,0x0A9B9D1EB9EBAA96L,0x0A9B9D1EB9EBAA96L,0x0A9B9D1EB9EBAA96L,0x0A9B9D1EB9EBAA96L,0x0A9B9D1EB9EBAA96L};
                        uint32_t l_328 = 4294967291UL;
                        int16_t l_329 = 0x2127L;
                        uint32_t l_330 = 9UL;
                        uint32_t l_331 = 0xCD341528L;
                        VECTOR(int16_t, 2) l_332 = (VECTOR(int16_t, 2))(1L, 0x387CL);
                        int32_t l_333 = 0x494E0BCCL;
                        VECTOR(int16_t, 16) l_334 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L, (VECTOR(int16_t, 2))((-8L), 0L), (VECTOR(int16_t, 2))((-8L), 0L), (-8L), 0L, (-8L), 0L);
                        VECTOR(int32_t, 4) l_335 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x328938DBL), 0x328938DBL);
                        VECTOR(uint16_t, 2) l_336 = (VECTOR(uint16_t, 2))(0UL, 0x34FCL);
                        VECTOR(uint16_t, 8) l_337 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x75C8L), 0x75C8L), 0x75C8L, 65535UL, 0x75C8L);
                        int8_t l_338 = 1L;
                        uint8_t l_339 = 0x09L;
                        uint32_t l_340 = 4294967289UL;
                        uint32_t l_341 = 2UL;
                        uint8_t l_342 = 0xCCL;
                        uint32_t l_343 = 4294967294UL;
                        int32_t l_344 = 1L;
                        uint8_t l_345 = 0x34L;
                        uint32_t l_346 = 0xC037808AL;
                        uint32_t l_347 = 1UL;
                        int i;
                        l_315 = ((l_313 = ((VECTOR(uint32_t, 8))(l_312.wywwwxwx)).s7) , l_314);
                        l_316 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x18020ED5L, (-9L))), (-1L), 0x723333DDL)).w;
                        l_347 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_317.sc515aa2a863d4604)).sac79, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_318.s45)), 1L, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(l_319.yxxyyyyx)).s30, ((VECTOR(int16_t, 4))(l_320.xyyy)).even))), ((VECTOR(int16_t, 2))(l_321.s57)), 0x75ADL, (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(l_322.s1605471212225402)), ((VECTOR(int32_t, 8))(l_323.xywzxwwx)).s6213651603423556))).s1a87)).z , 0x20E0L), ((VECTOR(int16_t, 2))(l_324.sba)), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(l_325.sca)).yyyyxyyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(1L, (-3L), (-7L), 0L)).hi)).xyxyxxyx))).s16, ((VECTOR(int16_t, 8))(l_326.xxxyyxyy)).s01))), l_327[1], 1L, 0x14F5L)), ((VECTOR(int16_t, 16))(0L, 0x02F0L, (GROUP_DIVERGE(1, 1) , ((l_329 = l_328) , (l_331 = l_330))), 0x3C50L, ((VECTOR(int16_t, 8))(l_332.yyyxyxyy)), 2L, l_333, (-1L), 0L)), ((VECTOR(int16_t, 16))(l_334.s96d31cfa25abaa7d))))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0x84ECL, ((VECTOR(uint16_t, 2))(0x38E9L, 1UL)).hi, l_335.y, 3UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 4))(l_336.yyxx)), ((VECTOR(uint16_t, 4))(l_337.s3421))))).wxwwwxzy)), ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(0x9590L, 1UL, 0UL, 65535UL)).odd, ((VECTOR(uint16_t, 16))(((l_342 |= (((l_339 |= l_338) , l_340) , l_341)) , l_343), 0xF2E7L, l_344, ((VECTOR(uint16_t, 4))(1UL)), l_345, 0x0839L, FAKE_DIVERGE(p_1147->local_1_offset, get_local_id(1), 10), 0x150EL, 0x671CL, ((VECTOR(uint16_t, 2))(3UL)), 65535UL, 1UL)).s2e))), 65527UL, 0UL)).odd)).even)).wwyyxwywyxxzwywy))).s7eef))), l_346, 0L, ((VECTOR(int32_t, 8))(1L)), 0x799C5781L, 0x5582A125L)).s72)).even;
                    }
                    l_349 = l_348;
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, 0x51DBB9EBL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_350.scddaef62)).even)), 0L, 0x45B28031L)).s0263044062752526)).s1)
                    { /* block id: 139 */
                        uint32_t l_351 = 0UL;
                        int8_t l_352 = 0x26L;
                        int32_t l_353 = (-5L);
                        int8_t l_354 = 0x32L;
                        uint32_t l_355 = 0x84FE9D93L;
                        l_350.sb |= l_351;
                        l_353 = l_352;
                        l_350.sa = l_354;
                        l_355 = 0L;
                    }
                    else
                    { /* block id: 144 */
                        int32_t l_357 = 0x75956892L;
                        int32_t *l_356 = &l_357;
                        int64_t l_358 = 0x643EF6C835956C4BL;
                        uint32_t l_359 = 0xEA10CC8CL;
                        l_349 = l_356;
                        l_359--;
                    }
                    unsigned int result = 0;
                    result += l_279;
                    result += l_350.sf;
                    result += l_350.se;
                    result += l_350.sd;
                    result += l_350.sc;
                    result += l_350.sb;
                    result += l_350.sa;
                    result += l_350.s9;
                    result += l_350.s8;
                    result += l_350.s7;
                    result += l_350.s6;
                    result += l_350.s5;
                    result += l_350.s4;
                    result += l_350.s3;
                    result += l_350.s2;
                    result += l_350.s1;
                    result += l_350.s0;
                    atomic_add(&p_1147->l_special_values[24], result);
                }
                else
                { /* block id: 148 */
                    (1 + 1);
                }
                (*l_278) = l_276;
                (*l_278) = (safe_rshift_func_uint16_t_u_s(p_53, p_1147->g_90.s3));
            }
            else
            { /* block id: 153 */
                if (l_276)
                    break;
                if ((atomic_inc(&p_1147->g_atomic_input[58 * get_linear_group_id() + 41]) == 5))
                { /* block id: 156 */
                    int32_t l_364 = 0x27BEFD94L;
                    uint64_t l_375 = 5UL;
                    int8_t l_376 = (-5L);
                    int8_t l_377 = 0L;
                    int16_t l_378 = 1L;
                    int32_t *l_410[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_410[i] = (void*)0;
                    for (l_364 = 0; (l_364 == (-30)); --l_364)
                    { /* block id: 159 */
                        VECTOR(int32_t, 8) l_367 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x4F1C28F1L), 0x4F1C28F1L), 0x4F1C28F1L, (-7L), 0x4F1C28F1L);
                        uint16_t l_368 = 0xC0EEL;
                        uint32_t l_369 = 0x2D6348DCL;
                        VECTOR(int32_t, 4) l_370 = (VECTOR(int32_t, 4))(0x61B9E65FL, (VECTOR(int32_t, 2))(0x61B9E65FL, 9L), 9L);
                        uint64_t l_371 = 0xDC0C2B7958AED116L;
                        int32_t l_372[2];
                        uint16_t l_373 = 0x29BDL;
                        int64_t l_374 = 0x39702632D2EFFF92L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_372[i] = 0x540C54ADL;
                        l_369 ^= (l_368 = ((VECTOR(int32_t, 16))(l_367.s6077025620730741)).s6);
                        l_371 |= ((VECTOR(int32_t, 2))(l_370.yz)).even;
                        l_373 = l_372[0];
                        l_374 &= 0x66E13792L;
                    }
                    l_377 = (l_376 = l_375);
                    if (l_378)
                    { /* block id: 168 */
                        VECTOR(int32_t, 2) l_379 = (VECTOR(int32_t, 2))(1L, 0x2D9EEF6EL);
                        uint32_t l_380 = 4294967286UL;
                        int i;
                        l_364 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_379.xxxyxxxy)).hi)).z;
                        ++l_380;
                    }
                    else
                    { /* block id: 171 */
                        VECTOR(int8_t, 2) l_383 = (VECTOR(int8_t, 2))(0x36L, 0x29L);
                        uint8_t l_384 = 6UL;
                        VECTOR(uint32_t, 4) l_385 = (VECTOR(uint32_t, 4))(0x37CEB4E0L, (VECTOR(uint32_t, 2))(0x37CEB4E0L, 4294967293UL), 4294967293UL);
                        VECTOR(uint32_t, 4) l_386 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x934FB1EDL), 0x934FB1EDL);
                        VECTOR(uint32_t, 8) l_387 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL);
                        VECTOR(uint32_t, 8) l_388 = (VECTOR(uint32_t, 8))(0x14C635E4L, (VECTOR(uint32_t, 4))(0x14C635E4L, (VECTOR(uint32_t, 2))(0x14C635E4L, 0x2961265EL), 0x2961265EL), 0x2961265EL, 0x14C635E4L, 0x2961265EL);
                        uint16_t l_389 = 1UL;
                        VECTOR(uint32_t, 2) l_390 = (VECTOR(uint32_t, 2))(0UL, 0x4396A70DL);
                        uint64_t l_391 = 0xE5446FAC342DEE54L;
                        int32_t l_392 = 4L;
                        int16_t l_393 = 1L;
                        int8_t l_394 = 0x47L;
                        uint32_t l_395 = 1UL;
                        VECTOR(int32_t, 2) l_398 = (VECTOR(int32_t, 2))(0x5E0E863DL, (-1L));
                        VECTOR(int32_t, 16) l_399 = (VECTOR(int32_t, 16))(0x02FD1BB6L, (VECTOR(int32_t, 4))(0x02FD1BB6L, (VECTOR(int32_t, 2))(0x02FD1BB6L, 0x67A8B4A6L), 0x67A8B4A6L), 0x67A8B4A6L, 0x02FD1BB6L, 0x67A8B4A6L, (VECTOR(int32_t, 2))(0x02FD1BB6L, 0x67A8B4A6L), (VECTOR(int32_t, 2))(0x02FD1BB6L, 0x67A8B4A6L), 0x02FD1BB6L, 0x67A8B4A6L, 0x02FD1BB6L, 0x67A8B4A6L);
                        VECTOR(uint32_t, 8) l_400 = (VECTOR(uint32_t, 8))(0x27D279B6L, (VECTOR(uint32_t, 4))(0x27D279B6L, (VECTOR(uint32_t, 2))(0x27D279B6L, 4294967290UL), 4294967290UL), 4294967290UL, 0x27D279B6L, 4294967290UL);
                        VECTOR(uint32_t, 16) l_401 = (VECTOR(uint32_t, 16))(0x54CD0C41L, (VECTOR(uint32_t, 4))(0x54CD0C41L, (VECTOR(uint32_t, 2))(0x54CD0C41L, 0x8068CC3BL), 0x8068CC3BL), 0x8068CC3BL, 0x54CD0C41L, 0x8068CC3BL, (VECTOR(uint32_t, 2))(0x54CD0C41L, 0x8068CC3BL), (VECTOR(uint32_t, 2))(0x54CD0C41L, 0x8068CC3BL), 0x54CD0C41L, 0x8068CC3BL, 0x54CD0C41L, 0x8068CC3BL);
                        int64_t l_402 = (-10L);
                        uint32_t l_403[2][5][4] = {{{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L},{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L},{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L},{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L},{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L}},{{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L},{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L},{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L},{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L},{0xE45A2E24L,4294967295UL,1UL,0x81A1E6C8L}}};
                        uint32_t l_404[3][6][1] = {{{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L}},{{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L}},{{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L},{0xE8026FB6L}}};
                        int64_t l_405 = 0x3975298B4E3347DFL;
                        int32_t l_406[4][1][2] = {{{0x2F4BA8D8L,0x532C6DF3L}},{{0x2F4BA8D8L,0x532C6DF3L}},{{0x2F4BA8D8L,0x532C6DF3L}},{{0x2F4BA8D8L,0x532C6DF3L}}};
                        uint32_t l_407 = 0x2E9CEC52L;
                        int32_t *l_408 = (void*)0;
                        int32_t *l_409 = (void*)0;
                        int i, j, k;
                        l_408 = (((VECTOR(int8_t, 8))(0x61L, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(l_383.xyyxxxyyxyyyyyxy)).even, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-1L), 0x35L)), (-4L), 0x46L)).xxyyzxxw)).s65)).yyxx)))), 1L, (l_384 , 1L), (l_376 ^= 0x56L), ((l_406[2][0][0] |= ((l_404[1][0][0] = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(l_385.wyzzyyzz)).odd, ((VECTOR(uint32_t, 4))(l_386.wwxx)), ((VECTOR(uint32_t, 16))(l_387.s2410043755411246)).s87c7))).zzywwwyzzxywwzzz)).even, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(0x83EA3E73L, 1UL)).yxxxxyxx, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(l_388.s75)).xyxxyxyx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(4UL, l_389, 0x70B63293L, 0x4017B7A4L)).odd)).yyxyyxyx))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_390.xy)), 4UL, 0x00BC54ECL)), 0x95A64240L, l_391, 8UL, 0xDE6F79BAL)).lo, ((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))((-1L), (l_392 , ((++l_395) , 0L)), 0x46EF26CAL, 0x41FC4297L)).lo, ((VECTOR(int32_t, 4))(l_398.xxyx)).lo))))).yxxyyxyxxyyyxyxy, ((VECTOR(int32_t, 2))(l_399.s42)).xyyyyyyxyxxyxxyy))).s72fa, ((VECTOR(uint32_t, 16))(l_400.s2637214357132554)).s99da))), 8UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_401.s66)))), 1UL))))).hi, ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(4294967286UL, 4294967294UL, 0x34654585L, 0UL, 0xEF364E87L, 2UL, 0x30C9E96CL, 4294967295UL, 0x8EE53524L, l_402, 0xA24EB362L, l_403[1][1][1], 4294967295UL, 0x25985E8BL, 0x8D83AC8FL, 4294967295UL)))).sae73, ((VECTOR(uint32_t, 4))(0x50474A25L)))))))).wzyzxzxx, ((VECTOR(uint32_t, 8))(0x36CD6698L))))).s50)).yyyxxyyx)).s5) , l_405)) , 0x42L), ((VECTOR(int8_t, 4))((-6L))), (-3L), ((VECTOR(int8_t, 2))(0x7DL)), 0x5BL)).odd))), 1L, ((VECTOR(int8_t, 4))((-1L))), 0x3EL, (-1L), 0x1CL)).sa1, ((VECTOR(int8_t, 2))((-1L)))))).xyyxyxyyyyyxyyxy)).odd, ((VECTOR(int8_t, 8))(0x7CL))))).s3571600416532115, ((VECTOR(int8_t, 16))(1L))))), ((VECTOR(int8_t, 16))((-10L)))))).s9c17)))).yywxxzwzyyzyyzyw)).s5964, ((VECTOR(int8_t, 4))((-3L)))))), l_407, 1L, 0x62L)).s0 , (void*)0);
                        l_409 = (void*)0;
                    }
                    l_410[0] = (void*)0;
                    unsigned int result = 0;
                    result += l_364;
                    result += l_375;
                    result += l_376;
                    result += l_377;
                    result += l_378;
                    atomic_add(&p_1147->g_special_values[58 * get_linear_group_id() + 41], result);
                }
                else
                { /* block id: 180 */
                    (1 + 1);
                }
                return &p_1147->g_37;
            }
            if ((*p_1147->g_185))
                continue;
            for (p_1147->g_37 = 0; (p_1147->g_37 > 14); p_1147->g_37 = safe_add_func_int64_t_s_s(p_1147->g_37, 1))
            { /* block id: 188 */
                int32_t *l_419[2][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
                int32_t l_429[6] = {2L,0L,2L,2L,0L,2L};
                int i, j, k;
                for (p_1147->g_9 = 0; (p_1147->g_9 >= 29); p_1147->g_9 = safe_add_func_int8_t_s_s(p_1147->g_9, 5))
                { /* block id: 191 */
                    int32_t *l_415 = &p_1147->g_2[0];
                    int32_t **l_416 = &l_415;
                    int32_t **l_417 = &p_1147->g_221[6][0];
                    (*l_417) = ((*l_416) = l_415);
                    return p_52;
                }
                l_430++;
                if (l_424)
                    break;
                l_427 = ((VECTOR(int32_t, 8))(l_433.s71161324)).s0;
            }
        }
        for (l_423 = 0; (l_423 != (-6)); l_423--)
        { /* block id: 203 */
            int32_t *l_436 = &p_1147->g_9;
            VECTOR(int8_t, 16) l_439 = (VECTOR(int8_t, 16))(0x1FL, (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, 0x3FL), 0x3FL), 0x3FL, 0x1FL, 0x3FL, (VECTOR(int8_t, 2))(0x1FL, 0x3FL), (VECTOR(int8_t, 2))(0x1FL, 0x3FL), 0x1FL, 0x3FL, 0x1FL, 0x3FL);
            VECTOR(uint64_t, 16) l_458 = (VECTOR(uint64_t, 16))(0x81D77A8461DFFA6CL, (VECTOR(uint64_t, 4))(0x81D77A8461DFFA6CL, (VECTOR(uint64_t, 2))(0x81D77A8461DFFA6CL, 0xA2BF3FC8E663E495L), 0xA2BF3FC8E663E495L), 0xA2BF3FC8E663E495L, 0x81D77A8461DFFA6CL, 0xA2BF3FC8E663E495L, (VECTOR(uint64_t, 2))(0x81D77A8461DFFA6CL, 0xA2BF3FC8E663E495L), (VECTOR(uint64_t, 2))(0x81D77A8461DFFA6CL, 0xA2BF3FC8E663E495L), 0x81D77A8461DFFA6CL, 0xA2BF3FC8E663E495L, 0x81D77A8461DFFA6CL, 0xA2BF3FC8E663E495L);
            uint16_t *l_461 = (void*)0;
            uint16_t *l_462[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int64_t *l_469 = (void*)0;
            int64_t *l_470 = (void*)0;
            int64_t *l_471 = (void*)0;
            int64_t *l_472 = (void*)0;
            int64_t *l_473[2][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint32_t *l_476 = &p_1147->g_178[0];
            int8_t *l_477[1][7][5] = {{{(void*)0,(void*)0,&p_1147->g_38,(void*)0,&p_1147->g_38},{(void*)0,(void*)0,&p_1147->g_38,(void*)0,&p_1147->g_38},{(void*)0,(void*)0,&p_1147->g_38,(void*)0,&p_1147->g_38},{(void*)0,(void*)0,&p_1147->g_38,(void*)0,&p_1147->g_38},{(void*)0,(void*)0,&p_1147->g_38,(void*)0,&p_1147->g_38},{(void*)0,(void*)0,&p_1147->g_38,(void*)0,&p_1147->g_38},{(void*)0,(void*)0,&p_1147->g_38,(void*)0,&p_1147->g_38}}};
            uint16_t l_478 = 1UL;
            int16_t *l_479[10] = {&p_1147->g_26,(void*)0,&l_276,(void*)0,&p_1147->g_26,&p_1147->g_26,(void*)0,&l_276,(void*)0,&p_1147->g_26};
            int32_t *l_480 = &l_275;
            VECTOR(uint8_t, 2) l_519 = (VECTOR(uint8_t, 2))(0x08L, 255UL);
            int32_t l_522 = 3L;
            uint64_t l_576 = 0x386102104276C679L;
            int i, j, k;
            (*l_436) ^= (-1L);
            (*l_480) &= (safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_439.sf8c0)).odd)))).yxxxyyyyxxxyxxxy, ((VECTOR(int8_t, 8))((-8L), (-7L), (((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1147->g_440.s0022)).xzxxzyyzzyzywwzx)).sc || (safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((((safe_add_func_int32_t_s_s((((*l_436) = (safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((~(((*p_1147->g_179) > p_53) & (l_418 |= (safe_mul_func_int8_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1147->g_455.xyxyxxxxyxxyyxxy)).saa)).lo == (((safe_mod_func_int64_t_s_s((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_458.sc154)), ((**p_1147->g_142) , (safe_lshift_func_uint16_t_u_u(l_423, (--l_463)))), ((VECTOR(uint64_t, 4))(0UL, (safe_mod_func_int8_t_s_s((((p_1147->g_248.y &= ((VECTOR(int64_t, 4))(l_468.yyyy)).w) ^ ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 8))(18446744073709551612UL, (*p_1147->g_179), 2UL, (*p_1147->g_179), (((safe_rshift_func_uint16_t_u_s(l_463, l_433.s2)) <= (((*l_476) = p_1147->g_178[0]) , 0x1E865BF5L)) == 0x6A03C6BAL), ((VECTOR(uint64_t, 2))(0xE9282C6E5A259A64L)), 0x02D3E01946F39963L)).lo, ((VECTOR(uint64_t, 4))(6UL))))), ((VECTOR(uint64_t, 4))(0xDA55C95E7A7E1C27L))))).zyxxywyxyywxwxxy)).se) & l_427), p_51)), 0xB687F3F6ED807253L, 0x89FA6E6CBF8781D8L)), ((VECTOR(uint64_t, 4))(1UL)), ((VECTOR(uint64_t, 2))(5UL)), 0x4E1B76D610D1F653L)).lo)).s1 & 4L), (-1L))) & 1UL) == p_1147->g_6)), p_53))))), (*l_436))), l_478))) == 0x6ADAL), (-1L))) || 1L) < l_433.s1), p_1147->g_199.s7)) ^ (*p_52)), (*p_1147->g_179))), 0x648EL))) , 1UL) && 0x5DL), 0x0DL, (-1L), 2L, (-9L), 0x7FL)).s7315515542332431, ((VECTOR(int8_t, 16))(0x51L))))).s0));
            for (p_1147->g_9 = (-16); (p_1147->g_9 < (-26)); p_1147->g_9 = safe_sub_func_uint64_t_u_u(p_1147->g_9, 5))
            { /* block id: 213 */
                uint64_t l_488 = 4UL;
                uint16_t l_521 = 0UL;
                uint64_t **l_528 = (void*)0;
                int32_t l_532 = 0x323FF94AL;
                VECTOR(int32_t, 8) l_533 = (VECTOR(int32_t, 8))(0x46AEEB92L, (VECTOR(int32_t, 4))(0x46AEEB92L, (VECTOR(int32_t, 2))(0x46AEEB92L, 1L), 1L), 1L, 0x46AEEB92L, 1L);
                int i;
                for (p_1147->g_144 = (-16); (p_1147->g_144 < 5); p_1147->g_144 = safe_add_func_uint64_t_u_u(p_1147->g_144, 2))
                { /* block id: 216 */
                    int32_t l_487 = 0x5A43632BL;
                    int32_t ***l_490 = (void*)0;
                    int32_t l_493 = 0x18B4F719L;
                    int32_t **l_498 = &p_1147->g_221[3][4];
                    int32_t ***l_499 = &l_498;
                    VECTOR(uint8_t, 16) l_520 = (VECTOR(uint8_t, 16))(0x4DL, (VECTOR(uint8_t, 4))(0x4DL, (VECTOR(uint8_t, 2))(0x4DL, 246UL), 246UL), 246UL, 0x4DL, 246UL, (VECTOR(uint8_t, 2))(0x4DL, 246UL), (VECTOR(uint8_t, 2))(0x4DL, 246UL), 0x4DL, 246UL, 0x4DL, 246UL);
                    int i;
                    l_480 = func_64(((((((safe_add_func_int32_t_s_s((l_488 = (l_487 = p_53)), (*l_480))) & ((((VECTOR(int32_t, 16))(l_489.s0ac08be4ce7c7ace)).s9 , l_490) == ((safe_add_func_int64_t_s_s((((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(0UL, ((*p_1147->g_179) > l_493), 4294967295UL, 0x95DD95DDL)).yxxzxwzxwyyxxxyx, ((VECTOR(uint32_t, 16))(p_1147->g_494.s3573647013666557))))).hi, ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(1UL, 0UL, 0UL, 4294967295UL)).zzyxzzww))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 8))(l_495.s62071033)).s22, ((VECTOR(uint32_t, 2))(0x19F7E552L, 0x6CABCC7CL))))))).yyxxxyxy))))).s2 , ((&p_1147->g_169 != ((*l_499) = l_498)) != ((safe_mod_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u((+((VECTOR(uint32_t, 16))(0x669A1899L, 4294967295UL, 4294967287UL, ((VECTOR(uint32_t, 4))(l_506.xyyy)), 0x676127FEL, ((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)), 0UL, ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(1UL, 3UL)), 4294967295UL, 0x098E853BL)).even, ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(FAKE_DIVERGE(p_1147->local_2_offset, get_local_id(2), 10), (safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1147->g_513.s7dadcac0)).even)).zyzyzyyxyzzyyxyw)).s9 == (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(l_516.s02)).xxyyxxyx, ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_517.s50)).xyxxyyyyxxxxyxxy)).hi, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(l_518.sce418ce9)).s22, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_519.yxxxyxyxxxyxxxyx)).sa3))))))).xyxx)).zxwwyzxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_520.scf)).yxxx)).xwxzxyzy)))))).s4, 2))), p_1147->g_144)), l_433.s1)), 0x74EEL)), 0UL, 4294967291UL)), ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 4))(1UL))))).lo))), 1UL, 0x6CF1C58CL, 0x49E4057DL)).s9), (*l_436))) | p_1147->g_57) , (-2L)), (*p_1147->g_179))) , 0x43L) , p_1147->g_197.z), l_521)) >= (*l_480)))), (-1L))) , &l_259[0]))) , (*p_1147->g_185)) <= p_51) , 0x039A395D9EEC36B1L) & l_522), p_51, l_473[1][6][0], l_420, p_1147);
                    if (p_51)
                        break;
                    return l_523;
                }
                l_525 = func_64(p_1147->g_38, p_53, l_524, p_51, p_1147);
                l_533.s1 &= ((*l_480) = (l_517.s1 == ((safe_div_func_uint16_t_u_u((&p_1147->g_179 != (p_1147->g_529[9][5][0] = l_528)), ((l_524 == l_524) , l_516.s5))) , ((FAKE_DIVERGE(p_1147->global_2_offset, get_global_id(2), 10) || (safe_mul_func_int8_t_s_s((((~((((+0x6987EF5AL) | ((l_532 = ((p_1147->g_238.s6 | (((((65532UL != (-1L)) == p_51) ^ 1UL) | p_53) >= 0x5819E723B05B0E21L)) && p_53)) < p_1147->g_248.x)) | (-4L)) != p_53)) ^ p_51) != (*l_436)), p_1147->g_92.z))) != p_53))));
            }
            for (l_428 = (-4); (l_428 == (-29)); l_428 = safe_sub_func_int32_t_s_s(l_428, 1))
            { /* block id: 232 */
                uint32_t *l_538 = &l_463;
                int32_t l_561 = 0x0EFC5299L;
                int32_t **l_577 = &l_436;
                if (((safe_mul_func_uint8_t_u_u((l_489.s4 = (&l_463 != l_538)), p_51)) ^ (p_1147->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1147->tid, 91))] & ((void*)0 == l_539))))
                { /* block id: 234 */
                    return p_52;
                }
                else
                { /* block id: 236 */
                    int32_t l_557[9] = {0x306212DBL,1L,0x306212DBL,0x306212DBL,1L,0x306212DBL,0x306212DBL,1L,0x306212DBL};
                    int i;
                    (*l_525) = (((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s((l_561 |= ((((VECTOR(int8_t, 8))(p_1147->g_544.s74c5d7a3)).s0 && (safe_sub_func_uint16_t_u_u((0x2FB8EDA3190CFD69L < 0x75B2F8F51FF40781L), ((safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(p_1147->g_551, (p_1147->g_92.z ^= (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(0x40336632L, l_489.s0)), 0x1E945587L))))) && 0x4268F8A7FE17AEE2L), (((VECTOR(uint32_t, 8))(p_1147->g_556.s8410e401)).s7 != l_557[4]))) & (safe_sub_func_int64_t_s_s(((safe_unary_minus_func_uint8_t_u(((p_51 <= (*l_525)) | p_1147->g_238.s2))) && (*p_52)), p_1147->g_38)))))) & 0x70F93CE937119B6BL)), 0L)) | 0x46F553F7AB6868CFL), 3)) >= p_51) && l_557[5]);
                }
                if ((*l_480))
                    break;
                for (l_422 = 0; (l_422 < (-25)); --l_422)
                { /* block id: 244 */
                    VECTOR(int16_t, 16) l_569 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x3612L), 0x3612L), 0x3612L, (-10L), 0x3612L, (VECTOR(int16_t, 2))((-10L), 0x3612L), (VECTOR(int16_t, 2))((-10L), 0x3612L), (-10L), 0x3612L, (-10L), 0x3612L);
                    int32_t **l_571 = (void*)0;
                    int32_t ***l_570 = &l_571;
                    int i;
                    (*l_525) = ((*l_436) = 0x34C7FB06L);
                    for (l_420 = (-16); (l_420 >= (-15)); ++l_420)
                    { /* block id: 249 */
                        int32_t ****l_572 = &l_570;
                        uint32_t ***l_575 = &l_574;
                        l_561 = (((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 8))(p_1147->g_566.s22636064)).s4367410276177103, (uint32_t)p_1147->g_9, (uint32_t)(0xABF055FBL ^ ((*l_436) ^= (p_53 != (((p_1147->g_92.x &= p_53) && (safe_mul_func_uint8_t_u_u((((*l_525) = (((VECTOR(int32_t, 8))(1L, (p_51 , p_53), 8L, 0L, ((((VECTOR(int16_t, 4))(l_569.saba1)).w , (*p_52)) ^ (((*l_572) = (((0x4648L & ((p_1147->g_144 && p_53) & 0x7BECL)) & p_1147->g_201.x) , l_570)) == (void*)0)), ((VECTOR(int32_t, 2))(0x653DB5C6L)), (-3L))).s7 != p_53)) && 0x468B291B5637BB5EL), GROUP_DIVERGE(0, 1)))) & p_1147->g_573))))))).s38)).xxxyxxyxyxxxxyyx)))).s854e, (uint32_t)p_1147->g_544.sf))).x & 0xB5F1CF34L);
                        (*l_575) = l_574;
                        if (l_576)
                            break;
                    }
                }
                (*l_577) = &l_427;
            }
        }
        --l_579;
        if (l_517.s5)
            break;
    }
    ++l_589;
    (*l_585) ^= ((*l_587) = ((safe_rshift_func_int16_t_s_u(((*l_623) = ((*l_587) == (p_1147->g_594 ^ (((*l_620) = ((((VECTOR(int64_t, 16))(p_1147->g_595.s444cfff9fee7779e)).s0 , (safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s(1L, ((VECTOR(int32_t, 8))(l_606.s5939609a)).s0)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 8))(0x757D6A18141C7F09L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(0x3B4C01A8435C6CEEL, (-5L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(l_607.sbb45)), ((VECTOR(int64_t, 4))(p_1147->g_608.s5757))))))).odd)), (-6L), ((*l_583) > ((void*)0 != l_609[5][4])), 0x57A15F8B7F176FF3L, 0x73BD11ADC124B3B9L)).s02)).xyyy)), ((((l_610 ^ (((*l_582) = (safe_lshift_func_uint16_t_u_s((p_1147->g_94.s6--), (((safe_unary_minus_func_int16_t_s((FAKE_DIVERGE(p_1147->global_2_offset, get_global_id(2), 10) == p_1147->g_178[0]))) , p_52) != p_52)))) , p_53)) > (*l_583)) ^ (-8L)) <= p_51), 0x1296843F346028D9L, 0x7A8BE28A522DD09CL)), (int64_t)0x7BB662A772E0F6F2L, (int64_t)p_51))), 0x1774910216AFFFB3L, ((VECTOR(int64_t, 4))(0x494E97C2D467C916L)), p_1147->g_455.x, 0x21E98307DFDAA9F4L, 0L)).sc)), p_51)) > (*l_587)) <= p_1147->g_37), FAKE_DIVERGE(p_1147->local_2_offset, get_local_id(2), 10))), 65526UL))) , p_53)) | GROUP_DIVERGE(0, 1))))), 15)) ^ (*p_52)));
    (*l_584) &= (1UL >= (safe_add_func_uint16_t_u_u(0x530AL, 0L)));
    return l_524;
}


/* ------------------------------------------ */
/* 
 * reads : p_1147->g_185 p_1147->g_179 p_1147->g_180 p_1147->g_197 p_1147->g_121 p_1147->g_199 p_1147->g_200 p_1147->g_201 p_1147->l_comm_values p_1147->g_2 p_1147->g_37 p_1147->g_92 p_1147->g_223 p_1147->g_6 p_1147->g_231 p_1147->g_238 p_1147->g_240 p_1147->g_38 p_1147->g_94 p_1147->g_13 p_1147->g_248 p_1147->g_90 p_1147->g_99 p_1147->g_255
 * writes: p_1147->g_9 p_1147->g_206 p_1147->l_comm_values p_1147->g_comm_values p_1147->g_181 p_1147->g_221 p_1147->g_13
 */
uint64_t * func_58(int32_t * p_59, uint32_t  p_60, int16_t  p_61, uint32_t  p_62, uint64_t  p_63, struct S0 * p_1147)
{ /* block id: 75 */
    int8_t l_184 = 0L;
    VECTOR(int64_t, 16) l_192 = (VECTOR(int64_t, 16))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 1L), 1L), 1L, 8L, 1L, (VECTOR(int64_t, 2))(8L, 1L), (VECTOR(int64_t, 2))(8L, 1L), 8L, 1L, 8L, 1L);
    VECTOR(uint8_t, 4) l_198 = (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0xE9L), 0xE9L);
    int32_t **l_205 = &p_1147->g_109;
    int32_t ***l_204[7][2] = {{(void*)0,&l_205},{(void*)0,&l_205},{(void*)0,&l_205},{(void*)0,&l_205},{(void*)0,&l_205},{(void*)0,&l_205},{(void*)0,&l_205}};
    int8_t *l_209 = &l_184;
    int32_t l_210 = 0x701ADFF8L;
    VECTOR(uint32_t, 4) l_239 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x548BBD53L), 0x548BBD53L);
    int32_t l_243 = 0x7A4B4D11L;
    VECTOR(int64_t, 8) l_247 = (VECTOR(int64_t, 8))(0x675E4760E0F07E73L, (VECTOR(int64_t, 4))(0x675E4760E0F07E73L, (VECTOR(int64_t, 2))(0x675E4760E0F07E73L, 1L), 1L), 1L, 0x675E4760E0F07E73L, 1L);
    uint8_t l_253 = 0x30L;
    uint64_t *l_254 = &p_1147->g_37;
    int i, j;
    (*p_1147->g_185) = l_184;
    if ((+(safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(p_63, (((((((*l_209) = ((((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_184, 18446744073709551612UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_192.se114)))).zzywwwzzzwwyyxzz))).s0b85)), 0x9F556B58E442EAC8L, 18446744073709551615UL)))).lo, ((VECTOR(uint64_t, 16))(p_63, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))((*p_1147->g_179), 0xE31945D7D14D15A4L, 18446744073709551615UL, 0UL)).odd)), 18446744073709551615UL, p_62, ((VECTOR(uint64_t, 8))((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(1UL, 1UL, 0x8AL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1147->g_197.zwww)).yywxzxxx)).s31, ((VECTOR(uint8_t, 16))(l_198.zyzyzxyxzwzyyyxz)).sd7))), 0xF9L, p_1147->g_121, ((VECTOR(uint8_t, 4))(p_1147->g_199.s7774)))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(1UL, 0x3EL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1147->g_200.xy)).even, 246UL, 0UL, 0xA9L)), 0xCEL, 0xC5L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_1147->g_201.xxxy)))), ((VECTOR(uint8_t, 2))(0x50L, 4UL)), 7UL, 0x85L)).s76)), ((safe_div_func_uint64_t_u_u(((p_1147->g_206 = &p_1147->g_109) != &p_1147->g_109), (p_1147->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1147->tid, 91))] ^= (safe_mul_func_int16_t_s_s(l_192.se, l_184))))) < p_62), 254UL, 248UL)).s9, 3)), 0)), 18446744073709551615UL, 0x12EF527235E5902AL, 0x4E493BE05BE54755L, ((VECTOR(uint64_t, 2))(0xAB1B66BC57D95470L)), 0x31ABC1FECEB42ADAL, 0x107CED499C8587F0L)), ((VECTOR(uint64_t, 2))(9UL)), 18446744073709551612UL)).s700e))).z && p_1147->g_2[5]) > p_61)) ^ p_1147->g_37) <= 0x0061F076C89BE4A1L) , p_61) | 0x71FA6DF7L) == p_60))), (-1L))), l_210))))
    { /* block id: 80 */
        int64_t *l_211 = (void*)0;
        int64_t *l_212 = (void*)0;
        int64_t *l_213 = (void*)0;
        int64_t *l_214 = (void*)0;
        int64_t *l_215 = (void*)0;
        int64_t *l_216 = (void*)0;
        int64_t *l_217 = (void*)0;
        int32_t **l_219 = (void*)0;
        int32_t **l_222 = (void*)0;
        int16_t l_244 = 0x7164L;
        int32_t *l_245 = &p_1147->g_13;
        uint8_t *l_246 = (void*)0;
        (*p_1147->g_223) = func_64(p_1147->g_92.w, p_61, &p_1147->g_37, (p_1147->g_comm_values[p_1147->tid] = 0x12934A2F955F64EDL), p_1147);
        (*l_245) |= (safe_unary_minus_func_uint64_t_u(((l_198.w < l_210) <= ((((safe_rshift_func_uint8_t_u_s(p_1147->g_6, 3)) == (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x3DL, 0L, (-1L), 0L)).even)).yxyyxyxxyxyyyyxx)).s5 <= ((((safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_1147->local_2_offset, get_local_id(2), 10), (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_1147->g_231.wyyxwyxx)).s5777271221671317)).sa , ((p_63 == (+p_1147->g_92.x)) > (safe_lshift_func_uint8_t_u_s(((l_243 = (safe_add_func_uint32_t_u_u(((p_60 = ((void*)0 == &p_1147->g_206)) < (safe_lshift_func_uint8_t_u_u((((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_1147->g_238.s3502)))).even, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_239.zzzywyxzzyyzxzxw)).hi)).s06, ((VECTOR(uint32_t, 4))(p_1147->g_240.sa5b3)).even))).hi, 4294967295UL, 0x6112EBCBL, ((VECTOR(uint32_t, 4))(((safe_lshift_func_uint8_t_u_s(((p_1147->g_2[2] != (-4L)) | 0x11CAL), p_1147->g_231.x)) , p_1147->g_38), p_1147->g_94.s2, 1UL, 1UL)), 0UL)), ((VECTOR(uint32_t, 4))(0xCB82273DL)), 4294967293UL, 0x5EFD4EDFL, 9UL, 4294967295UL)).sc1))).odd != p_1147->g_37), l_184))), 0x2EF746FDL))) > l_244), 2)))))) >= p_1147->g_121) , p_1147->g_199.s0) , p_60))) || 0UL) || 0x35L))));
        (*p_1147->g_255) = func_64((((l_192.s7 | 1L) && ((((l_246 = l_246) != ((((*l_209) &= (p_1147->g_199.s2 < (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_247.s40)), ((VECTOR(int64_t, 2))(p_1147->g_248.xy)), 1L, (p_1147->g_90.s7 & (safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(1, 1), 8))), 0x437D6875B382D7FBL, 0x15AFFE87B91546A5L)).s5 != (p_1147->g_99[6][3][3] >= (safe_div_func_int64_t_s_s(p_1147->g_201.x, (p_62 | 1L))))))) , p_63) , l_209)) || p_63) , 0L)) > l_239.x), l_253, l_254, p_60, p_1147);
    }
    else
    { /* block id: 89 */
        return l_254;
    }
    return &p_1147->g_180;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1147->g_181
 */
int32_t * func_64(uint16_t  p_65, uint32_t  p_66, uint64_t * p_67, int64_t  p_68, struct S0 * p_1147)
{ /* block id: 71 */
    p_1147->g_181[1][5][1] = &p_1147->g_12;
    return &p_1147->g_110[3][6];
}


/* ------------------------------------------ */
/* 
 * reads : p_1147->g_comm_values p_1147->g_92 p_1147->g_110 p_1147->g_90 p_1147->g_144 p_1147->g_94 p_1147->g_142 p_1147->g_122 p_1147->g_37 p_1147->g_6 p_1147->g_2
 * writes: p_1147->g_142 p_1147->g_144 p_1147->g_9 p_1147->g_6 p_1147->g_comm_values p_1147->g_13 p_1147->g_178
 */
uint16_t  func_69(int16_t  p_70, int32_t * p_71, struct S0 * p_1147)
{ /* block id: 60 */
    VECTOR(uint8_t, 16) l_136 = (VECTOR(uint8_t, 16))(0xECL, (VECTOR(uint8_t, 4))(0xECL, (VECTOR(uint8_t, 2))(0xECL, 0x99L), 0x99L), 0x99L, 0xECL, 0x99L, (VECTOR(uint8_t, 2))(0xECL, 0x99L), (VECTOR(uint8_t, 2))(0xECL, 0x99L), 0xECL, 0x99L, 0xECL, 0x99L);
    VECTOR(int16_t, 16) l_137 = (VECTOR(int16_t, 16))(0x1CD9L, (VECTOR(int16_t, 4))(0x1CD9L, (VECTOR(int16_t, 2))(0x1CD9L, (-1L)), (-1L)), (-1L), 0x1CD9L, (-1L), (VECTOR(int16_t, 2))(0x1CD9L, (-1L)), (VECTOR(int16_t, 2))(0x1CD9L, (-1L)), 0x1CD9L, (-1L), 0x1CD9L, (-1L));
    VECTOR(int16_t, 8) l_138 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x6E91L), 0x6E91L), 0x6E91L, (-9L), 0x6E91L);
    VECTOR(uint16_t, 4) l_139 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 8UL), 8UL);
    int64_t **l_141 = (void*)0;
    int64_t ***l_140[8][5][6] = {{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141},{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}}};
    int16_t *l_143 = &p_1147->g_144;
    uint8_t l_145 = 0x8FL;
    int32_t *l_146 = &p_1147->g_9;
    int64_t *l_149 = (void*)0;
    int64_t *l_150 = (void*)0;
    int64_t *l_151 = (void*)0;
    int64_t *l_152 = (void*)0;
    int64_t *l_153 = (void*)0;
    int64_t *l_154 = (void*)0;
    int64_t *l_155 = (void*)0;
    int64_t *l_156 = (void*)0;
    int64_t *l_157 = (void*)0;
    int64_t *l_158 = (void*)0;
    int64_t *l_159 = (void*)0;
    int64_t *l_160 = (void*)0;
    VECTOR(int16_t, 16) l_161 = (VECTOR(int16_t, 16))(0x02A5L, (VECTOR(int16_t, 4))(0x02A5L, (VECTOR(int16_t, 2))(0x02A5L, 0x0511L), 0x0511L), 0x0511L, 0x02A5L, 0x0511L, (VECTOR(int16_t, 2))(0x02A5L, 0x0511L), (VECTOR(int16_t, 2))(0x02A5L, 0x0511L), 0x02A5L, 0x0511L, 0x02A5L, 0x0511L);
    VECTOR(int16_t, 2) l_162 = (VECTOR(int16_t, 2))(0x4E7BL, 0x01A3L);
    VECTOR(int16_t, 16) l_163 = (VECTOR(int16_t, 16))(0x701AL, (VECTOR(int16_t, 4))(0x701AL, (VECTOR(int16_t, 2))(0x701AL, 0x45F5L), 0x45F5L), 0x45F5L, 0x701AL, 0x45F5L, (VECTOR(int16_t, 2))(0x701AL, 0x45F5L), (VECTOR(int16_t, 2))(0x701AL, 0x45F5L), 0x701AL, 0x45F5L, 0x701AL, 0x45F5L);
    VECTOR(int16_t, 2) l_164 = (VECTOR(int16_t, 2))(0x0ABAL, (-9L));
    VECTOR(int16_t, 2) l_165 = (VECTOR(int16_t, 2))(0x2CB6L, (-7L));
    int16_t l_168[4][2];
    int32_t *l_170[6][2][6] = {{{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6},{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6}},{{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6},{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6}},{{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6},{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6}},{{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6},{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6}},{{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6},{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6}},{{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6},{&p_1147->g_6,&p_1147->g_6,&p_1147->g_2[5],&p_1147->g_2[4],&p_1147->g_6,&p_1147->g_6}}};
    uint32_t *l_177 = &p_1147->g_178[0];
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_168[i][j] = (-5L);
    }
    (*l_146) = (safe_rshift_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((safe_lshift_func_int16_t_s_u(((*l_143) &= ((p_1147->g_comm_values[p_1147->tid] < (safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((p_1147->g_92.x && (((((VECTOR(uint8_t, 4))(l_136.sbd49)).x , (&p_1147->g_122 == (p_1147->g_142 = (((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(l_137.s59d7)), ((VECTOR(uint16_t, 8))((l_138.s7 & 0UL), l_136.sf, ((VECTOR(uint16_t, 2))(l_139.yz)), ((VECTOR(uint16_t, 4))(0UL, 0UL, 9UL, 65535UL)))).lo))).y , &p_1147->g_122)))) ^ ((((0x53L <= p_1147->g_110[5][7]) , 9L) , p_70) > p_70)) > 1UL)), p_1147->g_90.s1)), p_70))) | p_70)), p_1147->g_94.s3)) ^ 0UL))) != p_70) & l_137.s6), l_145));
    p_1147->g_13 = ((safe_rshift_func_int8_t_s_s(((+(p_1147->g_comm_values[p_1147->tid] = ((*l_146) = ((*p_1147->g_142) != ((&p_1147->g_110[3][6] == l_146) , func_81(&p_1147->g_37, &p_1147->g_37, l_146, p_1147)))))) | (p_70 , (!((((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(l_161.sde0336c129863923)).s80, ((VECTOR(int16_t, 4))(l_162.yyxx)).hi))).yyyyyyyxxxyyyyxy, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_163.sf0)), ((VECTOR(int16_t, 4))(l_164.yxyy)), 0L, 0x6331L)), ((VECTOR(int16_t, 16))(l_165.xxyyyxxxyxxyxyyy)).lo))).s1674413077332611))).sa | (safe_add_func_int64_t_s_s((l_168[0][1] = p_1147->g_110[0][7]), 0x20A13F4F6D35079EL))) == p_1147->g_94.s7)))), 0)) | p_70);
    (*l_146) = ((safe_mul_func_uint16_t_u_u(p_70, (((safe_rshift_func_int16_t_s_u(p_70, (safe_mod_func_uint32_t_u_u(((*l_177) = (&l_141 == (void*)0)), 2UL)))) , &l_141) == (void*)0))) , p_70);
    return p_1147->g_2[6];
}


/* ------------------------------------------ */
/* 
 * reads : p_1147->g_comm_values p_1147->g_9 p_1147->g_94 p_1147->g_6 p_1147->g_37 p_1147->g_99 p_1147->g_13 p_1147->g_90
 * writes: p_1147->g_121 p_1147->g_122 p_1147->g_37 p_1147->g_6
 */
uint8_t  func_76(uint64_t * p_77, int32_t * p_78, uint32_t  p_79, int32_t * p_80, struct S0 * p_1147)
{ /* block id: 53 */
    VECTOR(uint64_t, 16) l_117 = (VECTOR(uint64_t, 16))(0x53FEA8E8ED7A3FE0L, (VECTOR(uint64_t, 4))(0x53FEA8E8ED7A3FE0L, (VECTOR(uint64_t, 2))(0x53FEA8E8ED7A3FE0L, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 0x53FEA8E8ED7A3FE0L, 18446744073709551608UL, (VECTOR(uint64_t, 2))(0x53FEA8E8ED7A3FE0L, 18446744073709551608UL), (VECTOR(uint64_t, 2))(0x53FEA8E8ED7A3FE0L, 18446744073709551608UL), 0x53FEA8E8ED7A3FE0L, 18446744073709551608UL, 0x53FEA8E8ED7A3FE0L, 18446744073709551608UL);
    int64_t *l_120 = &p_1147->g_121;
    int64_t **l_123 = &l_120;
    int32_t *l_124 = &p_1147->g_6;
    int i;
    (*l_124) = (safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((p_1147->g_comm_values[p_1147->tid] <= ((+((safe_mul_func_int16_t_s_s(l_117.s1, (safe_rshift_func_int16_t_s_u((((*p_77) |= (((*l_120) = (p_79 & (p_1147->g_9 && p_1147->g_94.s6))) , ((((p_79 != p_1147->g_6) == ((p_1147->g_122 = &p_1147->g_121) != ((*l_123) = &p_1147->g_121))) == 0x235839F227602C2FL) && l_117.s5))) < p_1147->g_99[5][1][1]), p_1147->g_comm_values[p_1147->tid])))) , p_1147->g_13)) ^ GROUP_DIVERGE(1, 1))) | p_1147->g_94.s7), 0x7804E31C676211E3L)), p_1147->g_90.s7));
    return (*l_124);
}


/* ------------------------------------------ */
/* 
 * reads : p_1147->g_37 p_1147->g_26 p_1147->g_90 p_1147->g_92 p_1147->g_94 p_1147->g_99 p_1147->g_38 p_1147->g_6
 * writes: p_1147->g_99 p_1147->g_9 p_1147->g_6
 */
uint64_t * func_81(uint64_t * p_82, uint64_t * p_83, int32_t * p_84, struct S0 * p_1147)
{ /* block id: 47 */
    int32_t **l_86 = (void*)0;
    int32_t ***l_85 = &l_86;
    int32_t l_91 = 0x1D8D7774L;
    VECTOR(uint16_t, 4) l_93 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 3UL), 3UL);
    int32_t l_95 = 1L;
    int32_t l_96 = 0x4A85E45CL;
    uint8_t *l_97 = (void*)0;
    uint8_t *l_98 = &p_1147->g_99[6][3][3];
    uint64_t l_106 = 0xD8B2F8DC5A24BAAFL;
    int32_t *l_107 = (void*)0;
    int32_t *l_108 = &p_1147->g_6;
    int i;
    (*l_85) = (void*)0;
    (*l_108) &= ((((~(*p_83)) || (+(((0x07078C3FL ^ ((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(1L, 4L)).yxyxyyxyxyxyyyxx, ((VECTOR(int32_t, 16))(0x2359916AL, (safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_s(p_1147->g_26, 7)))), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(p_1147->g_90.s74)).xxxx, ((VECTOR(uint16_t, 16))(l_91, ((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(p_1147->g_92.zxyzzyyx)), ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(0x665FL, 0x4743L)).yxyyyyxxyxyxxxyx, ((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(l_93.zw)), 0UL)).even, ((VECTOR(uint16_t, 2))(p_1147->g_94.s01)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(255UL, ((VECTOR(uint8_t, 2))(255UL, 255UL)), ((VECTOR(uint8_t, 8))(8UL, (++(*l_98)), (GROUP_DIVERGE(1, 1) , (l_96 > (safe_div_func_uint64_t_u_u(0xFE4DFDC5D499989FL, ((safe_mod_func_int32_t_s_s(l_93.y, l_91)) ^ (p_1147->g_9 = 0x3BB0DECAL)))))), p_1147->g_92.y, p_1147->g_38, p_1147->g_37, 6UL, 2UL)), l_106, ((VECTOR(uint8_t, 2))(0x7EL)), 0UL, 9UL)).saf, ((VECTOR(uint8_t, 2))(2UL))))), 0x7157L, 0xD183L)).hi))), ((VECTOR(uint16_t, 2))(0x6266L)), ((VECTOR(uint16_t, 2))(0xC2D9L))))).yyxxxyxy, ((VECTOR(uint16_t, 8))(0x0EB0L))))).s0563743671652176))).even, ((VECTOR(uint16_t, 8))(65535UL)), ((VECTOR(uint16_t, 8))(1UL)))))))), ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 2))(0UL)), 0UL, 0x94C0L, 0x3939L)).s7282))), ((VECTOR(int32_t, 8))((-1L))), 6L, 4L))))).sbdde, ((VECTOR(int32_t, 4))((-7L)))))))).xxwxzzyw))).s7) < l_93.y) == 0x11A91DCBL))) , 0x28E54492L) , 0x3BFC9F35L);
    return &p_1147->g_37;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[58];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 58; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[58];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 58; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_comm_values[i] = 1;
    struct S0 c_1148;
    struct S0* p_1147 = &c_1148;
    struct S0 c_1149 = {
        {1L,0L,1L,1L,0L,1L,1L}, // p_1147->g_2
        0L, // p_1147->g_6
        1L, // p_1147->g_9
        0x676373A4L, // p_1147->g_12
        1L, // p_1147->g_13
        0x1E33L, // p_1147->g_26
        0x2B3395CC9E520C3DL, // p_1147->g_37
        (-2L), // p_1147->g_38
        (-4L), // p_1147->g_57
        (VECTOR(int16_t, 8))(0x10E7L, (VECTOR(int16_t, 4))(0x10E7L, (VECTOR(int16_t, 2))(0x10E7L, 0x0257L), 0x0257L), 0x0257L, 0x10E7L, 0x0257L), // p_1147->g_90
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x8D9EL), 0x8D9EL), // p_1147->g_92
        (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 65535UL), 65535UL), 65535UL, 65531UL, 65535UL), // p_1147->g_94
        {{{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL}},{{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL}},{{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL}},{{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL}},{{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL}},{{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL}},{{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL}},{{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL}},{{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL},{2UL,0xBDL,8UL,0xDDL}}}, // p_1147->g_99
        {{0x6B581468L,0x6B581468L,0x2EDDA491L,(-9L),0x08EED364L,(-10L),0x5121EC5DL,(-1L),0x5121EC5DL},{0x6B581468L,0x6B581468L,0x2EDDA491L,(-9L),0x08EED364L,(-10L),0x5121EC5DL,(-1L),0x5121EC5DL},{0x6B581468L,0x6B581468L,0x2EDDA491L,(-9L),0x08EED364L,(-10L),0x5121EC5DL,(-1L),0x5121EC5DL},{0x6B581468L,0x6B581468L,0x2EDDA491L,(-9L),0x08EED364L,(-10L),0x5121EC5DL,(-1L),0x5121EC5DL},{0x6B581468L,0x6B581468L,0x2EDDA491L,(-9L),0x08EED364L,(-10L),0x5121EC5DL,(-1L),0x5121EC5DL},{0x6B581468L,0x6B581468L,0x2EDDA491L,(-9L),0x08EED364L,(-10L),0x5121EC5DL,(-1L),0x5121EC5DL},{0x6B581468L,0x6B581468L,0x2EDDA491L,(-9L),0x08EED364L,(-10L),0x5121EC5DL,(-1L),0x5121EC5DL}}, // p_1147->g_110
        &p_1147->g_110[3][6], // p_1147->g_109
        0x7E7A5B985A9A92C7L, // p_1147->g_121
        (void*)0, // p_1147->g_122
        &p_1147->g_122, // p_1147->g_142
        0x6662L, // p_1147->g_144
        (void*)0, // p_1147->g_169
        {4294967295UL}, // p_1147->g_178
        0x2474D7A56A24BEC2L, // p_1147->g_180
        &p_1147->g_180, // p_1147->g_179
        {{{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12}},{{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12}},{{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12}},{{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12},{(void*)0,&p_1147->g_12,(void*)0,&p_1147->g_12}}}, // p_1147->g_181
        &p_1147->g_9, // p_1147->g_185
        (VECTOR(uint8_t, 4))(0x12L, (VECTOR(uint8_t, 2))(0x12L, 0xBFL), 0xBFL), // p_1147->g_197
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_1147->g_199
        (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 1UL), 1UL), // p_1147->g_200
        (VECTOR(uint8_t, 2))(254UL, 0x8CL), // p_1147->g_201
        &p_1147->g_109, // p_1147->g_206
        (void*)0, // p_1147->g_218
        {{&p_1147->g_2[0],&p_1147->g_6,&p_1147->g_13,(void*)0,&p_1147->g_13},{&p_1147->g_2[0],&p_1147->g_6,&p_1147->g_13,(void*)0,&p_1147->g_13},{&p_1147->g_2[0],&p_1147->g_6,&p_1147->g_13,(void*)0,&p_1147->g_13},{&p_1147->g_2[0],&p_1147->g_6,&p_1147->g_13,(void*)0,&p_1147->g_13},{&p_1147->g_2[0],&p_1147->g_6,&p_1147->g_13,(void*)0,&p_1147->g_13},{&p_1147->g_2[0],&p_1147->g_6,&p_1147->g_13,(void*)0,&p_1147->g_13},{&p_1147->g_2[0],&p_1147->g_6,&p_1147->g_13,(void*)0,&p_1147->g_13},{&p_1147->g_2[0],&p_1147->g_6,&p_1147->g_13,(void*)0,&p_1147->g_13},{&p_1147->g_2[0],&p_1147->g_6,&p_1147->g_13,(void*)0,&p_1147->g_13}}, // p_1147->g_221
        {&p_1147->g_221[6][0]}, // p_1147->g_220
        &p_1147->g_221[1][0], // p_1147->g_223
        (VECTOR(int64_t, 4))(0x346ECC8533B47519L, (VECTOR(int64_t, 2))(0x346ECC8533B47519L, 2L), 2L), // p_1147->g_231
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4F9BA95CL), 0x4F9BA95CL), 0x4F9BA95CL, (-1L), 0x4F9BA95CL), // p_1147->g_238
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xA20FC249L), 0xA20FC249L), 0xA20FC249L, 0UL, 0xA20FC249L, (VECTOR(uint32_t, 2))(0UL, 0xA20FC249L), (VECTOR(uint32_t, 2))(0UL, 0xA20FC249L), 0UL, 0xA20FC249L, 0UL, 0xA20FC249L), // p_1147->g_240
        (VECTOR(int64_t, 2))(0x303ECC52C1734024L, 0x0C6D8FC74D14176DL), // p_1147->g_248
        &p_1147->g_221[3][3], // p_1147->g_255
        (VECTOR(int32_t, 8))(0x279E5910L, (VECTOR(int32_t, 4))(0x279E5910L, (VECTOR(int32_t, 2))(0x279E5910L, (-1L)), (-1L)), (-1L), 0x279E5910L, (-1L)), // p_1147->g_440
        (VECTOR(uint32_t, 2))(0x30573B80L, 0xA43EC917L), // p_1147->g_455
        (VECTOR(uint32_t, 8))(0xADF92289L, (VECTOR(uint32_t, 4))(0xADF92289L, (VECTOR(uint32_t, 2))(0xADF92289L, 0xB55C349DL), 0xB55C349DL), 0xB55C349DL, 0xADF92289L, 0xB55C349DL), // p_1147->g_494
        (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 1L), 1L), 1L, 2L, 1L, (VECTOR(int16_t, 2))(2L, 1L), (VECTOR(int16_t, 2))(2L, 1L), 2L, 1L, 2L, 1L), // p_1147->g_513
        {{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}},{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}},{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}},{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}},{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}},{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}},{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}},{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}},{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}},{{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179},{&p_1147->g_179}}}, // p_1147->g_529
        (VECTOR(int8_t, 16))(0x32L, (VECTOR(int8_t, 4))(0x32L, (VECTOR(int8_t, 2))(0x32L, 1L), 1L), 1L, 0x32L, 1L, (VECTOR(int8_t, 2))(0x32L, 1L), (VECTOR(int8_t, 2))(0x32L, 1L), 0x32L, 1L, 0x32L, 1L), // p_1147->g_544
        0x1185709B218900FAL, // p_1147->g_551
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xB68D74ACL), 0xB68D74ACL), 0xB68D74ACL, 1UL, 0xB68D74ACL, (VECTOR(uint32_t, 2))(1UL, 0xB68D74ACL), (VECTOR(uint32_t, 2))(1UL, 0xB68D74ACL), 1UL, 0xB68D74ACL, 1UL, 0xB68D74ACL), // p_1147->g_556
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL), // p_1147->g_566
        0x788854E5L, // p_1147->g_573
        0x2B98B582L, // p_1147->g_594
        (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x0223D6646BE2029DL), 0x0223D6646BE2029DL), 0x0223D6646BE2029DL, 3L, 0x0223D6646BE2029DL, (VECTOR(int64_t, 2))(3L, 0x0223D6646BE2029DL), (VECTOR(int64_t, 2))(3L, 0x0223D6646BE2029DL), 3L, 0x0223D6646BE2029DL, 3L, 0x0223D6646BE2029DL), // p_1147->g_595
        (VECTOR(int64_t, 8))(0x1793A439D51A1BC9L, (VECTOR(int64_t, 4))(0x1793A439D51A1BC9L, (VECTOR(int64_t, 2))(0x1793A439D51A1BC9L, 0x3AAB414C75B24111L), 0x3AAB414C75B24111L), 0x3AAB414C75B24111L, 0x1793A439D51A1BC9L, 0x3AAB414C75B24111L), // p_1147->g_608
        &p_1147->g_221[6][0], // p_1147->g_991
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x244BCF42L), 0x244BCF42L), 0x244BCF42L, 1L, 0x244BCF42L), // p_1147->g_992
        (VECTOR(uint8_t, 2))(0x97L, 252UL), // p_1147->g_994
        &p_1147->g_221[6][0], // p_1147->g_998
        2UL, // p_1147->g_1044
        (VECTOR(uint32_t, 2))(0x092A656FL, 0xC30045F7L), // p_1147->g_1062
        (VECTOR(uint32_t, 2))(0UL, 0UL), // p_1147->g_1063
        (VECTOR(uint32_t, 16))(0x4D24D3DAL, (VECTOR(uint32_t, 4))(0x4D24D3DAL, (VECTOR(uint32_t, 2))(0x4D24D3DAL, 0xBFE4369CL), 0xBFE4369CL), 0xBFE4369CL, 0x4D24D3DAL, 0xBFE4369CL, (VECTOR(uint32_t, 2))(0x4D24D3DAL, 0xBFE4369CL), (VECTOR(uint32_t, 2))(0x4D24D3DAL, 0xBFE4369CL), 0x4D24D3DAL, 0xBFE4369CL, 0x4D24D3DAL, 0xBFE4369CL), // p_1147->g_1064
        &p_1147->g_2[5], // p_1147->g_1098
        (VECTOR(int32_t, 4))(0x0D5B8243L, (VECTOR(int32_t, 2))(0x0D5B8243L, (-3L)), (-3L)), // p_1147->g_1102
        &p_1147->g_223, // p_1147->g_1105
        &p_1147->g_1105, // p_1147->g_1104
        0x521A1580L, // p_1147->g_1125
        (VECTOR(int16_t, 2))(1L, 9L), // p_1147->g_1131
        (VECTOR(int32_t, 16))(0x60194343L, (VECTOR(int32_t, 4))(0x60194343L, (VECTOR(int32_t, 2))(0x60194343L, (-1L)), (-1L)), (-1L), 0x60194343L, (-1L), (VECTOR(int32_t, 2))(0x60194343L, (-1L)), (VECTOR(int32_t, 2))(0x60194343L, (-1L)), 0x60194343L, (-1L), 0x60194343L, (-1L)), // p_1147->g_1138
        (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x561CBE72L), 0x561CBE72L), 0x561CBE72L, 4L, 0x561CBE72L), // p_1147->g_1139
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7E7F43B1L), 0x7E7F43B1L), // p_1147->g_1140
        0, // p_1147->v_collective
        sequence_input[get_global_id(0)], // p_1147->global_0_offset
        sequence_input[get_global_id(1)], // p_1147->global_1_offset
        sequence_input[get_global_id(2)], // p_1147->global_2_offset
        sequence_input[get_local_id(0)], // p_1147->local_0_offset
        sequence_input[get_local_id(1)], // p_1147->local_1_offset
        sequence_input[get_local_id(2)], // p_1147->local_2_offset
        sequence_input[get_group_id(0)], // p_1147->group_0_offset
        sequence_input[get_group_id(1)], // p_1147->group_1_offset
        sequence_input[get_group_id(2)], // p_1147->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 91)), permutations[0][get_linear_local_id()])), // p_1147->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1148 = c_1149;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1147);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1147->g_2[i], "p_1147->g_2[i]", print_hash_value);

    }
    transparent_crc(p_1147->g_6, "p_1147->g_6", print_hash_value);
    transparent_crc(p_1147->g_9, "p_1147->g_9", print_hash_value);
    transparent_crc(p_1147->g_12, "p_1147->g_12", print_hash_value);
    transparent_crc(p_1147->g_13, "p_1147->g_13", print_hash_value);
    transparent_crc(p_1147->g_26, "p_1147->g_26", print_hash_value);
    transparent_crc(p_1147->g_37, "p_1147->g_37", print_hash_value);
    transparent_crc(p_1147->g_38, "p_1147->g_38", print_hash_value);
    transparent_crc(p_1147->g_57, "p_1147->g_57", print_hash_value);
    transparent_crc(p_1147->g_90.s0, "p_1147->g_90.s0", print_hash_value);
    transparent_crc(p_1147->g_90.s1, "p_1147->g_90.s1", print_hash_value);
    transparent_crc(p_1147->g_90.s2, "p_1147->g_90.s2", print_hash_value);
    transparent_crc(p_1147->g_90.s3, "p_1147->g_90.s3", print_hash_value);
    transparent_crc(p_1147->g_90.s4, "p_1147->g_90.s4", print_hash_value);
    transparent_crc(p_1147->g_90.s5, "p_1147->g_90.s5", print_hash_value);
    transparent_crc(p_1147->g_90.s6, "p_1147->g_90.s6", print_hash_value);
    transparent_crc(p_1147->g_90.s7, "p_1147->g_90.s7", print_hash_value);
    transparent_crc(p_1147->g_92.x, "p_1147->g_92.x", print_hash_value);
    transparent_crc(p_1147->g_92.y, "p_1147->g_92.y", print_hash_value);
    transparent_crc(p_1147->g_92.z, "p_1147->g_92.z", print_hash_value);
    transparent_crc(p_1147->g_92.w, "p_1147->g_92.w", print_hash_value);
    transparent_crc(p_1147->g_94.s0, "p_1147->g_94.s0", print_hash_value);
    transparent_crc(p_1147->g_94.s1, "p_1147->g_94.s1", print_hash_value);
    transparent_crc(p_1147->g_94.s2, "p_1147->g_94.s2", print_hash_value);
    transparent_crc(p_1147->g_94.s3, "p_1147->g_94.s3", print_hash_value);
    transparent_crc(p_1147->g_94.s4, "p_1147->g_94.s4", print_hash_value);
    transparent_crc(p_1147->g_94.s5, "p_1147->g_94.s5", print_hash_value);
    transparent_crc(p_1147->g_94.s6, "p_1147->g_94.s6", print_hash_value);
    transparent_crc(p_1147->g_94.s7, "p_1147->g_94.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1147->g_99[i][j][k], "p_1147->g_99[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1147->g_110[i][j], "p_1147->g_110[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1147->g_121, "p_1147->g_121", print_hash_value);
    transparent_crc(p_1147->g_144, "p_1147->g_144", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1147->g_178[i], "p_1147->g_178[i]", print_hash_value);

    }
    transparent_crc(p_1147->g_180, "p_1147->g_180", print_hash_value);
    transparent_crc(p_1147->g_197.x, "p_1147->g_197.x", print_hash_value);
    transparent_crc(p_1147->g_197.y, "p_1147->g_197.y", print_hash_value);
    transparent_crc(p_1147->g_197.z, "p_1147->g_197.z", print_hash_value);
    transparent_crc(p_1147->g_197.w, "p_1147->g_197.w", print_hash_value);
    transparent_crc(p_1147->g_199.s0, "p_1147->g_199.s0", print_hash_value);
    transparent_crc(p_1147->g_199.s1, "p_1147->g_199.s1", print_hash_value);
    transparent_crc(p_1147->g_199.s2, "p_1147->g_199.s2", print_hash_value);
    transparent_crc(p_1147->g_199.s3, "p_1147->g_199.s3", print_hash_value);
    transparent_crc(p_1147->g_199.s4, "p_1147->g_199.s4", print_hash_value);
    transparent_crc(p_1147->g_199.s5, "p_1147->g_199.s5", print_hash_value);
    transparent_crc(p_1147->g_199.s6, "p_1147->g_199.s6", print_hash_value);
    transparent_crc(p_1147->g_199.s7, "p_1147->g_199.s7", print_hash_value);
    transparent_crc(p_1147->g_200.x, "p_1147->g_200.x", print_hash_value);
    transparent_crc(p_1147->g_200.y, "p_1147->g_200.y", print_hash_value);
    transparent_crc(p_1147->g_200.z, "p_1147->g_200.z", print_hash_value);
    transparent_crc(p_1147->g_200.w, "p_1147->g_200.w", print_hash_value);
    transparent_crc(p_1147->g_201.x, "p_1147->g_201.x", print_hash_value);
    transparent_crc(p_1147->g_201.y, "p_1147->g_201.y", print_hash_value);
    transparent_crc(p_1147->g_231.x, "p_1147->g_231.x", print_hash_value);
    transparent_crc(p_1147->g_231.y, "p_1147->g_231.y", print_hash_value);
    transparent_crc(p_1147->g_231.z, "p_1147->g_231.z", print_hash_value);
    transparent_crc(p_1147->g_231.w, "p_1147->g_231.w", print_hash_value);
    transparent_crc(p_1147->g_238.s0, "p_1147->g_238.s0", print_hash_value);
    transparent_crc(p_1147->g_238.s1, "p_1147->g_238.s1", print_hash_value);
    transparent_crc(p_1147->g_238.s2, "p_1147->g_238.s2", print_hash_value);
    transparent_crc(p_1147->g_238.s3, "p_1147->g_238.s3", print_hash_value);
    transparent_crc(p_1147->g_238.s4, "p_1147->g_238.s4", print_hash_value);
    transparent_crc(p_1147->g_238.s5, "p_1147->g_238.s5", print_hash_value);
    transparent_crc(p_1147->g_238.s6, "p_1147->g_238.s6", print_hash_value);
    transparent_crc(p_1147->g_238.s7, "p_1147->g_238.s7", print_hash_value);
    transparent_crc(p_1147->g_240.s0, "p_1147->g_240.s0", print_hash_value);
    transparent_crc(p_1147->g_240.s1, "p_1147->g_240.s1", print_hash_value);
    transparent_crc(p_1147->g_240.s2, "p_1147->g_240.s2", print_hash_value);
    transparent_crc(p_1147->g_240.s3, "p_1147->g_240.s3", print_hash_value);
    transparent_crc(p_1147->g_240.s4, "p_1147->g_240.s4", print_hash_value);
    transparent_crc(p_1147->g_240.s5, "p_1147->g_240.s5", print_hash_value);
    transparent_crc(p_1147->g_240.s6, "p_1147->g_240.s6", print_hash_value);
    transparent_crc(p_1147->g_240.s7, "p_1147->g_240.s7", print_hash_value);
    transparent_crc(p_1147->g_240.s8, "p_1147->g_240.s8", print_hash_value);
    transparent_crc(p_1147->g_240.s9, "p_1147->g_240.s9", print_hash_value);
    transparent_crc(p_1147->g_240.sa, "p_1147->g_240.sa", print_hash_value);
    transparent_crc(p_1147->g_240.sb, "p_1147->g_240.sb", print_hash_value);
    transparent_crc(p_1147->g_240.sc, "p_1147->g_240.sc", print_hash_value);
    transparent_crc(p_1147->g_240.sd, "p_1147->g_240.sd", print_hash_value);
    transparent_crc(p_1147->g_240.se, "p_1147->g_240.se", print_hash_value);
    transparent_crc(p_1147->g_240.sf, "p_1147->g_240.sf", print_hash_value);
    transparent_crc(p_1147->g_248.x, "p_1147->g_248.x", print_hash_value);
    transparent_crc(p_1147->g_248.y, "p_1147->g_248.y", print_hash_value);
    transparent_crc(p_1147->g_440.s0, "p_1147->g_440.s0", print_hash_value);
    transparent_crc(p_1147->g_440.s1, "p_1147->g_440.s1", print_hash_value);
    transparent_crc(p_1147->g_440.s2, "p_1147->g_440.s2", print_hash_value);
    transparent_crc(p_1147->g_440.s3, "p_1147->g_440.s3", print_hash_value);
    transparent_crc(p_1147->g_440.s4, "p_1147->g_440.s4", print_hash_value);
    transparent_crc(p_1147->g_440.s5, "p_1147->g_440.s5", print_hash_value);
    transparent_crc(p_1147->g_440.s6, "p_1147->g_440.s6", print_hash_value);
    transparent_crc(p_1147->g_440.s7, "p_1147->g_440.s7", print_hash_value);
    transparent_crc(p_1147->g_455.x, "p_1147->g_455.x", print_hash_value);
    transparent_crc(p_1147->g_455.y, "p_1147->g_455.y", print_hash_value);
    transparent_crc(p_1147->g_494.s0, "p_1147->g_494.s0", print_hash_value);
    transparent_crc(p_1147->g_494.s1, "p_1147->g_494.s1", print_hash_value);
    transparent_crc(p_1147->g_494.s2, "p_1147->g_494.s2", print_hash_value);
    transparent_crc(p_1147->g_494.s3, "p_1147->g_494.s3", print_hash_value);
    transparent_crc(p_1147->g_494.s4, "p_1147->g_494.s4", print_hash_value);
    transparent_crc(p_1147->g_494.s5, "p_1147->g_494.s5", print_hash_value);
    transparent_crc(p_1147->g_494.s6, "p_1147->g_494.s6", print_hash_value);
    transparent_crc(p_1147->g_494.s7, "p_1147->g_494.s7", print_hash_value);
    transparent_crc(p_1147->g_513.s0, "p_1147->g_513.s0", print_hash_value);
    transparent_crc(p_1147->g_513.s1, "p_1147->g_513.s1", print_hash_value);
    transparent_crc(p_1147->g_513.s2, "p_1147->g_513.s2", print_hash_value);
    transparent_crc(p_1147->g_513.s3, "p_1147->g_513.s3", print_hash_value);
    transparent_crc(p_1147->g_513.s4, "p_1147->g_513.s4", print_hash_value);
    transparent_crc(p_1147->g_513.s5, "p_1147->g_513.s5", print_hash_value);
    transparent_crc(p_1147->g_513.s6, "p_1147->g_513.s6", print_hash_value);
    transparent_crc(p_1147->g_513.s7, "p_1147->g_513.s7", print_hash_value);
    transparent_crc(p_1147->g_513.s8, "p_1147->g_513.s8", print_hash_value);
    transparent_crc(p_1147->g_513.s9, "p_1147->g_513.s9", print_hash_value);
    transparent_crc(p_1147->g_513.sa, "p_1147->g_513.sa", print_hash_value);
    transparent_crc(p_1147->g_513.sb, "p_1147->g_513.sb", print_hash_value);
    transparent_crc(p_1147->g_513.sc, "p_1147->g_513.sc", print_hash_value);
    transparent_crc(p_1147->g_513.sd, "p_1147->g_513.sd", print_hash_value);
    transparent_crc(p_1147->g_513.se, "p_1147->g_513.se", print_hash_value);
    transparent_crc(p_1147->g_513.sf, "p_1147->g_513.sf", print_hash_value);
    transparent_crc(p_1147->g_544.s0, "p_1147->g_544.s0", print_hash_value);
    transparent_crc(p_1147->g_544.s1, "p_1147->g_544.s1", print_hash_value);
    transparent_crc(p_1147->g_544.s2, "p_1147->g_544.s2", print_hash_value);
    transparent_crc(p_1147->g_544.s3, "p_1147->g_544.s3", print_hash_value);
    transparent_crc(p_1147->g_544.s4, "p_1147->g_544.s4", print_hash_value);
    transparent_crc(p_1147->g_544.s5, "p_1147->g_544.s5", print_hash_value);
    transparent_crc(p_1147->g_544.s6, "p_1147->g_544.s6", print_hash_value);
    transparent_crc(p_1147->g_544.s7, "p_1147->g_544.s7", print_hash_value);
    transparent_crc(p_1147->g_544.s8, "p_1147->g_544.s8", print_hash_value);
    transparent_crc(p_1147->g_544.s9, "p_1147->g_544.s9", print_hash_value);
    transparent_crc(p_1147->g_544.sa, "p_1147->g_544.sa", print_hash_value);
    transparent_crc(p_1147->g_544.sb, "p_1147->g_544.sb", print_hash_value);
    transparent_crc(p_1147->g_544.sc, "p_1147->g_544.sc", print_hash_value);
    transparent_crc(p_1147->g_544.sd, "p_1147->g_544.sd", print_hash_value);
    transparent_crc(p_1147->g_544.se, "p_1147->g_544.se", print_hash_value);
    transparent_crc(p_1147->g_544.sf, "p_1147->g_544.sf", print_hash_value);
    transparent_crc(p_1147->g_551, "p_1147->g_551", print_hash_value);
    transparent_crc(p_1147->g_556.s0, "p_1147->g_556.s0", print_hash_value);
    transparent_crc(p_1147->g_556.s1, "p_1147->g_556.s1", print_hash_value);
    transparent_crc(p_1147->g_556.s2, "p_1147->g_556.s2", print_hash_value);
    transparent_crc(p_1147->g_556.s3, "p_1147->g_556.s3", print_hash_value);
    transparent_crc(p_1147->g_556.s4, "p_1147->g_556.s4", print_hash_value);
    transparent_crc(p_1147->g_556.s5, "p_1147->g_556.s5", print_hash_value);
    transparent_crc(p_1147->g_556.s6, "p_1147->g_556.s6", print_hash_value);
    transparent_crc(p_1147->g_556.s7, "p_1147->g_556.s7", print_hash_value);
    transparent_crc(p_1147->g_556.s8, "p_1147->g_556.s8", print_hash_value);
    transparent_crc(p_1147->g_556.s9, "p_1147->g_556.s9", print_hash_value);
    transparent_crc(p_1147->g_556.sa, "p_1147->g_556.sa", print_hash_value);
    transparent_crc(p_1147->g_556.sb, "p_1147->g_556.sb", print_hash_value);
    transparent_crc(p_1147->g_556.sc, "p_1147->g_556.sc", print_hash_value);
    transparent_crc(p_1147->g_556.sd, "p_1147->g_556.sd", print_hash_value);
    transparent_crc(p_1147->g_556.se, "p_1147->g_556.se", print_hash_value);
    transparent_crc(p_1147->g_556.sf, "p_1147->g_556.sf", print_hash_value);
    transparent_crc(p_1147->g_566.s0, "p_1147->g_566.s0", print_hash_value);
    transparent_crc(p_1147->g_566.s1, "p_1147->g_566.s1", print_hash_value);
    transparent_crc(p_1147->g_566.s2, "p_1147->g_566.s2", print_hash_value);
    transparent_crc(p_1147->g_566.s3, "p_1147->g_566.s3", print_hash_value);
    transparent_crc(p_1147->g_566.s4, "p_1147->g_566.s4", print_hash_value);
    transparent_crc(p_1147->g_566.s5, "p_1147->g_566.s5", print_hash_value);
    transparent_crc(p_1147->g_566.s6, "p_1147->g_566.s6", print_hash_value);
    transparent_crc(p_1147->g_566.s7, "p_1147->g_566.s7", print_hash_value);
    transparent_crc(p_1147->g_573, "p_1147->g_573", print_hash_value);
    transparent_crc(p_1147->g_594, "p_1147->g_594", print_hash_value);
    transparent_crc(p_1147->g_595.s0, "p_1147->g_595.s0", print_hash_value);
    transparent_crc(p_1147->g_595.s1, "p_1147->g_595.s1", print_hash_value);
    transparent_crc(p_1147->g_595.s2, "p_1147->g_595.s2", print_hash_value);
    transparent_crc(p_1147->g_595.s3, "p_1147->g_595.s3", print_hash_value);
    transparent_crc(p_1147->g_595.s4, "p_1147->g_595.s4", print_hash_value);
    transparent_crc(p_1147->g_595.s5, "p_1147->g_595.s5", print_hash_value);
    transparent_crc(p_1147->g_595.s6, "p_1147->g_595.s6", print_hash_value);
    transparent_crc(p_1147->g_595.s7, "p_1147->g_595.s7", print_hash_value);
    transparent_crc(p_1147->g_595.s8, "p_1147->g_595.s8", print_hash_value);
    transparent_crc(p_1147->g_595.s9, "p_1147->g_595.s9", print_hash_value);
    transparent_crc(p_1147->g_595.sa, "p_1147->g_595.sa", print_hash_value);
    transparent_crc(p_1147->g_595.sb, "p_1147->g_595.sb", print_hash_value);
    transparent_crc(p_1147->g_595.sc, "p_1147->g_595.sc", print_hash_value);
    transparent_crc(p_1147->g_595.sd, "p_1147->g_595.sd", print_hash_value);
    transparent_crc(p_1147->g_595.se, "p_1147->g_595.se", print_hash_value);
    transparent_crc(p_1147->g_595.sf, "p_1147->g_595.sf", print_hash_value);
    transparent_crc(p_1147->g_608.s0, "p_1147->g_608.s0", print_hash_value);
    transparent_crc(p_1147->g_608.s1, "p_1147->g_608.s1", print_hash_value);
    transparent_crc(p_1147->g_608.s2, "p_1147->g_608.s2", print_hash_value);
    transparent_crc(p_1147->g_608.s3, "p_1147->g_608.s3", print_hash_value);
    transparent_crc(p_1147->g_608.s4, "p_1147->g_608.s4", print_hash_value);
    transparent_crc(p_1147->g_608.s5, "p_1147->g_608.s5", print_hash_value);
    transparent_crc(p_1147->g_608.s6, "p_1147->g_608.s6", print_hash_value);
    transparent_crc(p_1147->g_608.s7, "p_1147->g_608.s7", print_hash_value);
    transparent_crc(p_1147->g_992.s0, "p_1147->g_992.s0", print_hash_value);
    transparent_crc(p_1147->g_992.s1, "p_1147->g_992.s1", print_hash_value);
    transparent_crc(p_1147->g_992.s2, "p_1147->g_992.s2", print_hash_value);
    transparent_crc(p_1147->g_992.s3, "p_1147->g_992.s3", print_hash_value);
    transparent_crc(p_1147->g_992.s4, "p_1147->g_992.s4", print_hash_value);
    transparent_crc(p_1147->g_992.s5, "p_1147->g_992.s5", print_hash_value);
    transparent_crc(p_1147->g_992.s6, "p_1147->g_992.s6", print_hash_value);
    transparent_crc(p_1147->g_992.s7, "p_1147->g_992.s7", print_hash_value);
    transparent_crc(p_1147->g_994.x, "p_1147->g_994.x", print_hash_value);
    transparent_crc(p_1147->g_994.y, "p_1147->g_994.y", print_hash_value);
    transparent_crc(p_1147->g_1044, "p_1147->g_1044", print_hash_value);
    transparent_crc(p_1147->g_1062.x, "p_1147->g_1062.x", print_hash_value);
    transparent_crc(p_1147->g_1062.y, "p_1147->g_1062.y", print_hash_value);
    transparent_crc(p_1147->g_1063.x, "p_1147->g_1063.x", print_hash_value);
    transparent_crc(p_1147->g_1063.y, "p_1147->g_1063.y", print_hash_value);
    transparent_crc(p_1147->g_1064.s0, "p_1147->g_1064.s0", print_hash_value);
    transparent_crc(p_1147->g_1064.s1, "p_1147->g_1064.s1", print_hash_value);
    transparent_crc(p_1147->g_1064.s2, "p_1147->g_1064.s2", print_hash_value);
    transparent_crc(p_1147->g_1064.s3, "p_1147->g_1064.s3", print_hash_value);
    transparent_crc(p_1147->g_1064.s4, "p_1147->g_1064.s4", print_hash_value);
    transparent_crc(p_1147->g_1064.s5, "p_1147->g_1064.s5", print_hash_value);
    transparent_crc(p_1147->g_1064.s6, "p_1147->g_1064.s6", print_hash_value);
    transparent_crc(p_1147->g_1064.s7, "p_1147->g_1064.s7", print_hash_value);
    transparent_crc(p_1147->g_1064.s8, "p_1147->g_1064.s8", print_hash_value);
    transparent_crc(p_1147->g_1064.s9, "p_1147->g_1064.s9", print_hash_value);
    transparent_crc(p_1147->g_1064.sa, "p_1147->g_1064.sa", print_hash_value);
    transparent_crc(p_1147->g_1064.sb, "p_1147->g_1064.sb", print_hash_value);
    transparent_crc(p_1147->g_1064.sc, "p_1147->g_1064.sc", print_hash_value);
    transparent_crc(p_1147->g_1064.sd, "p_1147->g_1064.sd", print_hash_value);
    transparent_crc(p_1147->g_1064.se, "p_1147->g_1064.se", print_hash_value);
    transparent_crc(p_1147->g_1064.sf, "p_1147->g_1064.sf", print_hash_value);
    transparent_crc(p_1147->g_1102.x, "p_1147->g_1102.x", print_hash_value);
    transparent_crc(p_1147->g_1102.y, "p_1147->g_1102.y", print_hash_value);
    transparent_crc(p_1147->g_1102.z, "p_1147->g_1102.z", print_hash_value);
    transparent_crc(p_1147->g_1102.w, "p_1147->g_1102.w", print_hash_value);
    transparent_crc(p_1147->g_1125, "p_1147->g_1125", print_hash_value);
    transparent_crc(p_1147->g_1131.x, "p_1147->g_1131.x", print_hash_value);
    transparent_crc(p_1147->g_1131.y, "p_1147->g_1131.y", print_hash_value);
    transparent_crc(p_1147->g_1138.s0, "p_1147->g_1138.s0", print_hash_value);
    transparent_crc(p_1147->g_1138.s1, "p_1147->g_1138.s1", print_hash_value);
    transparent_crc(p_1147->g_1138.s2, "p_1147->g_1138.s2", print_hash_value);
    transparent_crc(p_1147->g_1138.s3, "p_1147->g_1138.s3", print_hash_value);
    transparent_crc(p_1147->g_1138.s4, "p_1147->g_1138.s4", print_hash_value);
    transparent_crc(p_1147->g_1138.s5, "p_1147->g_1138.s5", print_hash_value);
    transparent_crc(p_1147->g_1138.s6, "p_1147->g_1138.s6", print_hash_value);
    transparent_crc(p_1147->g_1138.s7, "p_1147->g_1138.s7", print_hash_value);
    transparent_crc(p_1147->g_1138.s8, "p_1147->g_1138.s8", print_hash_value);
    transparent_crc(p_1147->g_1138.s9, "p_1147->g_1138.s9", print_hash_value);
    transparent_crc(p_1147->g_1138.sa, "p_1147->g_1138.sa", print_hash_value);
    transparent_crc(p_1147->g_1138.sb, "p_1147->g_1138.sb", print_hash_value);
    transparent_crc(p_1147->g_1138.sc, "p_1147->g_1138.sc", print_hash_value);
    transparent_crc(p_1147->g_1138.sd, "p_1147->g_1138.sd", print_hash_value);
    transparent_crc(p_1147->g_1138.se, "p_1147->g_1138.se", print_hash_value);
    transparent_crc(p_1147->g_1138.sf, "p_1147->g_1138.sf", print_hash_value);
    transparent_crc(p_1147->g_1139.s0, "p_1147->g_1139.s0", print_hash_value);
    transparent_crc(p_1147->g_1139.s1, "p_1147->g_1139.s1", print_hash_value);
    transparent_crc(p_1147->g_1139.s2, "p_1147->g_1139.s2", print_hash_value);
    transparent_crc(p_1147->g_1139.s3, "p_1147->g_1139.s3", print_hash_value);
    transparent_crc(p_1147->g_1139.s4, "p_1147->g_1139.s4", print_hash_value);
    transparent_crc(p_1147->g_1139.s5, "p_1147->g_1139.s5", print_hash_value);
    transparent_crc(p_1147->g_1139.s6, "p_1147->g_1139.s6", print_hash_value);
    transparent_crc(p_1147->g_1139.s7, "p_1147->g_1139.s7", print_hash_value);
    transparent_crc(p_1147->g_1140.x, "p_1147->g_1140.x", print_hash_value);
    transparent_crc(p_1147->g_1140.y, "p_1147->g_1140.y", print_hash_value);
    transparent_crc(p_1147->g_1140.z, "p_1147->g_1140.z", print_hash_value);
    transparent_crc(p_1147->g_1140.w, "p_1147->g_1140.w", print_hash_value);
    transparent_crc(p_1147->v_collective, "p_1147->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 58; i++)
            transparent_crc(p_1147->g_special_values[i + 58 * get_linear_group_id()], "p_1147->g_special_values[i + 58 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 58; i++)
            transparent_crc(p_1147->l_special_values[i], "p_1147->l_special_values[i]", print_hash_value);
    transparent_crc(p_1147->l_comm_values[get_linear_local_id()], "p_1147->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1147->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()], "p_1147->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
