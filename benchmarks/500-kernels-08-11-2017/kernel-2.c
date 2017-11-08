// --atomics 77 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 73,99,1 -l 73,1,1
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

__constant uint32_t permutations[10][73] = {
{20,50,5,19,33,0,11,52,72,24,63,47,71,36,42,68,49,40,3,12,35,45,7,51,22,69,26,61,46,41,59,37,43,70,38,28,8,16,31,65,48,25,54,10,60,44,64,15,30,27,2,17,62,13,21,55,23,9,56,58,39,18,1,32,57,4,53,67,29,14,66,6,34}, // permutation 0
{38,48,68,40,16,53,33,42,23,46,26,18,1,58,72,32,8,28,62,10,64,31,24,4,7,19,51,70,52,39,13,56,49,5,37,57,14,54,65,20,15,22,0,41,3,55,25,30,43,34,29,35,50,12,59,66,67,36,60,47,2,27,11,9,44,17,45,6,21,61,69,63,71}, // permutation 1
{10,70,29,27,11,34,7,5,32,37,62,39,52,57,63,54,31,41,0,21,67,72,8,47,18,58,23,61,68,53,20,46,3,19,12,44,17,38,15,24,56,13,33,22,65,48,50,40,4,26,1,14,42,51,6,28,16,45,69,71,9,35,2,60,36,55,43,25,66,49,59,64,30}, // permutation 2
{18,0,59,46,24,43,50,12,57,71,60,32,26,5,1,17,7,63,20,38,70,35,29,51,19,61,4,53,67,58,8,30,16,72,10,15,69,48,47,11,49,68,33,22,41,64,45,36,3,34,13,66,42,9,55,2,52,23,65,14,21,37,44,31,28,27,39,62,56,54,40,25,6}, // permutation 3
{43,42,4,6,58,55,70,26,63,46,64,35,9,37,47,41,50,16,48,30,29,51,56,20,12,34,39,45,8,25,31,5,59,22,28,33,61,53,10,67,11,66,40,69,68,13,57,38,1,52,2,27,21,44,23,15,14,3,18,36,62,49,0,71,24,72,32,54,7,65,60,19,17}, // permutation 4
{70,62,59,9,28,38,20,63,56,65,40,58,72,4,50,22,24,51,47,15,66,60,45,12,25,42,43,34,55,41,23,8,44,10,19,32,36,35,54,0,18,11,26,13,3,30,21,37,46,64,2,29,49,17,48,33,71,16,1,7,61,68,39,69,67,6,14,5,53,27,57,31,52}, // permutation 5
{11,57,43,40,45,4,17,67,60,68,29,2,38,72,70,39,21,48,50,13,46,34,3,66,20,27,36,56,24,61,10,9,62,33,37,49,41,16,32,22,8,55,69,14,5,65,52,6,30,58,7,28,19,25,71,26,35,54,23,51,53,12,1,63,0,31,64,42,44,59,47,18,15}, // permutation 6
{4,29,42,41,51,5,49,59,0,56,71,33,37,53,9,34,52,8,26,35,18,45,27,62,15,64,55,36,46,16,69,10,70,38,44,3,60,65,66,58,54,72,68,12,39,19,40,67,30,24,50,6,11,7,63,17,28,14,1,32,61,22,31,23,43,47,57,13,20,2,21,25,48}, // permutation 7
{70,46,2,53,19,72,7,44,42,33,26,23,25,15,17,22,5,65,11,47,67,24,40,66,4,16,59,61,60,41,63,10,13,62,28,27,35,49,6,34,56,52,9,1,8,54,38,45,14,3,55,39,20,50,68,71,37,43,57,64,31,48,30,18,0,51,36,12,21,58,69,32,29}, // permutation 8
{14,13,4,30,5,32,64,21,40,43,17,22,62,61,16,49,51,54,34,67,60,19,29,71,1,24,50,6,27,37,25,28,35,23,56,7,72,39,70,42,31,59,44,9,63,8,66,52,55,57,47,3,36,58,20,45,65,2,15,12,11,33,38,46,68,10,26,18,48,0,53,69,41} // permutation 9
};

// Seed: 4210358268

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    int32_t g_6;
    volatile int64_t g_10;
    volatile int16_t g_12;
    int64_t g_13[4][6][3];
    uint32_t g_14[1][7];
    uint16_t g_26[4][8];
    int32_t g_34;
    int32_t **g_36;
    int32_t *** volatile g_35;
    uint64_t g_67[3];
    uint64_t g_69;
    int32_t *g_79;
    int32_t **g_78;
    int32_t g_87;
    int64_t g_95;
    uint64_t g_96;
    VECTOR(int8_t, 4) g_104;
    VECTOR(int8_t, 16) g_105;
    VECTOR(int8_t, 16) g_108;
    VECTOR(uint64_t, 4) g_124;
    VECTOR(int16_t, 2) g_134;
    VECTOR(int16_t, 8) g_135;
    VECTOR(int16_t, 8) g_137;
    VECTOR(int16_t, 8) g_140;
    VECTOR(int16_t, 8) g_141;
    int32_t g_154;
    int32_t g_155[5];
    uint16_t *g_221;
    uint16_t **g_220[10];
    uint64_t *g_241[4][6];
    VECTOR(int8_t, 16) g_287;
    VECTOR(int32_t, 8) g_294;
    uint16_t g_296[1];
    VECTOR(int32_t, 4) g_304;
    uint8_t g_306[10];
    int32_t *g_311;
    int32_t **g_310;
    VECTOR(uint16_t, 8) g_315;
    uint8_t g_338;
    uint32_t g_344;
    uint8_t *g_356;
    int32_t g_361;
    VECTOR(int32_t, 4) g_425;
    VECTOR(int32_t, 2) g_426;
    VECTOR(uint8_t, 16) g_447;
    VECTOR(uint16_t, 2) g_449;
    VECTOR(int16_t, 16) g_465;
    VECTOR(int8_t, 2) g_519;
    VECTOR(uint64_t, 8) g_534;
    VECTOR(uint8_t, 16) g_592;
    volatile int64_t g_618;
    volatile VECTOR(int32_t, 2) g_728;
    volatile VECTOR(int32_t, 8) g_729;
    VECTOR(int32_t, 16) g_835;
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
int16_t  func_1(struct S0 * p_847);
uint32_t  func_17(int32_t * p_18, int32_t * p_19, struct S0 * p_847);
int32_t  func_20(int32_t  p_21, int32_t * p_22, int32_t * p_23, struct S0 * p_847);
int32_t ** func_43(uint64_t  p_44, int32_t * p_45, int32_t ** p_46, int8_t  p_47, int32_t * p_48, struct S0 * p_847);
int32_t * func_49(uint64_t  p_50, struct S0 * p_847);
int32_t * func_113(int32_t  p_114, uint16_t ** p_115, uint32_t  p_116, uint16_t ** p_117, struct S0 * p_847);
uint16_t ** func_118(int64_t  p_119, uint32_t  p_120, int32_t  p_121, uint16_t  p_122, uint32_t  p_123, struct S0 * p_847);
int32_t * func_145(int64_t  p_146, int32_t  p_147, int16_t  p_148, struct S0 * p_847);
int32_t  func_223(uint16_t ** p_224, int32_t  p_225, struct S0 * p_847);
int32_t  func_226(uint32_t  p_227, int16_t  p_228, uint16_t ** p_229, int32_t ** p_230, int32_t ** p_231, struct S0 * p_847);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_847->g_2 p_847->g_6 p_847->g_14 p_847->g_12 p_847->g_comm_values p_847->g_35 p_847->g_95 p_847->g_344 p_847->g_155 p_847->g_315 p_847->g_592 p_847->g_69 p_847->g_87 p_847->g_310 p_847->g_311 p_847->g_618 p_847->g_67 p_847->g_104 p_847->g_140 p_847->g_296 p_847->g_728 p_847->g_729 p_847->g_221 p_847->g_154 p_847->g_835 p_847->g_294 p_847->g_425
 * writes: p_847->g_2 p_847->g_6 p_847->g_14 p_847->g_26 p_847->g_36 p_847->g_95 p_847->g_344 p_847->g_69 p_847->g_155 p_847->g_87 p_847->g_311 p_847->g_154
 */
int16_t  func_1(struct S0 * p_847)
{ /* block id: 4 */
    VECTOR(int64_t, 4) l_7 = (VECTOR(int64_t, 4))(0x7C88EB9876427603L, (VECTOR(int64_t, 2))(0x7C88EB9876427603L, 0x1B68DEE21AFA9B64L), 0x1B68DEE21AFA9B64L);
    int32_t l_8 = 0x647F1A96L;
    int32_t l_9 = 7L;
    int32_t l_11[4][5];
    VECTOR(uint16_t, 16) l_740 = (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 6UL), 6UL), 6UL, 65529UL, 6UL, (VECTOR(uint16_t, 2))(65529UL, 6UL), (VECTOR(uint16_t, 2))(65529UL, 6UL), 65529UL, 6UL, 65529UL, 6UL);
    int16_t *l_741 = (void*)0;
    int16_t **l_742 = &l_741;
    uint64_t *l_745 = &p_847->g_96;
    int32_t l_746[6][1][7] = {{{0x6129EFDDL,0x6129EFDDL,(-1L),4L,(-7L),(-3L),1L}},{{0x6129EFDDL,0x6129EFDDL,(-1L),4L,(-7L),(-3L),1L}},{{0x6129EFDDL,0x6129EFDDL,(-1L),4L,(-7L),(-3L),1L}},{{0x6129EFDDL,0x6129EFDDL,(-1L),4L,(-7L),(-3L),1L}},{{0x6129EFDDL,0x6129EFDDL,(-1L),4L,(-7L),(-3L),1L}},{{0x6129EFDDL,0x6129EFDDL,(-1L),4L,(-7L),(-3L),1L}}};
    int8_t l_843 = 0L;
    int32_t *l_846 = &p_847->g_2;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_11[i][j] = (-10L);
    }
    for (p_847->g_2 = 1; (p_847->g_2 == 28); p_847->g_2 = safe_add_func_uint16_t_u_u(p_847->g_2, 8))
    { /* block id: 7 */
        int32_t *l_5[1];
        int i;
        for (i = 0; i < 1; i++)
            l_5[i] = &p_847->g_6;
        p_847->g_6 &= ((VECTOR(int32_t, 2))(0x39ED080CL, 2L)).even;
        ++p_847->g_14[0][3];
    }
    p_847->g_154 |= ((((((((func_17(&p_847->g_6, &l_11[0][2], p_847) || (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_740.s4a01bbf1)), 0x22E5L, (((((*l_742) = l_741) == &p_847->g_12) ^ (safe_rshift_func_int16_t_s_u((((l_745 != &p_847->g_96) >= 0x56E0L) | l_11[0][2]), 12))) | l_7.z), 65528UL, 0x796AL, 0x313BL, 9UL, 65534UL, 0x5296L)).s93, (uint16_t)l_746[1][0][5]))))).lo, p_847->g_728.x))) != 0x09CCL) >= l_746[1][0][5]) >= l_740.s5) , p_847->g_67[2]) ^ 0x0B8841CA71A3AB5DL) < l_740.s4) >= (-8L));
    for (p_847->g_154 = 0; (p_847->g_154 < 26); p_847->g_154 = safe_add_func_uint8_t_u_u(p_847->g_154, 1))
    { /* block id: 370 */
        uint64_t l_838 = 0x2CFABB4B8D6278AAL;
        int32_t l_839 = 6L;
        int64_t *l_842[3][9][4] = {{{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95}},{{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95}},{{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95},{&p_847->g_95,&p_847->g_13[1][1][1],&p_847->g_13[1][1][1],&p_847->g_95}}};
        int32_t *l_844 = &p_847->g_2;
        int32_t *l_845 = &l_11[0][4];
        int i, j, k;
        if ((atomic_inc(&p_847->g_atomic_input[77 * get_linear_group_id() + 23]) == 3))
        { /* block id: 372 */
            uint16_t l_749[2];
            uint64_t l_750 = 0xB0C24ABA7635AB4EL;
            VECTOR(int32_t, 2) l_751 = (VECTOR(int32_t, 2))((-5L), 0x02CCECEEL);
            VECTOR(int32_t, 16) l_752 = (VECTOR(int32_t, 16))(0x23A77008L, (VECTOR(int32_t, 4))(0x23A77008L, (VECTOR(int32_t, 2))(0x23A77008L, 0x7A450E2CL), 0x7A450E2CL), 0x7A450E2CL, 0x23A77008L, 0x7A450E2CL, (VECTOR(int32_t, 2))(0x23A77008L, 0x7A450E2CL), (VECTOR(int32_t, 2))(0x23A77008L, 0x7A450E2CL), 0x23A77008L, 0x7A450E2CL, 0x23A77008L, 0x7A450E2CL);
            uint32_t l_753 = 0xB18F7929L;
            VECTOR(int32_t, 2) l_754 = (VECTOR(int32_t, 2))(0x5583BF31L, 0x01F640B9L);
            uint64_t l_755 = 0x847B1C1C88959BF2L;
            int32_t l_756 = (-1L);
            VECTOR(int32_t, 16) l_757 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4D70C841L), 0x4D70C841L), 0x4D70C841L, 0L, 0x4D70C841L, (VECTOR(int32_t, 2))(0L, 0x4D70C841L), (VECTOR(int32_t, 2))(0L, 0x4D70C841L), 0L, 0x4D70C841L, 0L, 0x4D70C841L);
            uint16_t l_758[10];
            uint32_t l_759[7];
            int16_t l_760 = 0x34AEL;
            int64_t l_761[3][8][6] = {{{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L}},{{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L}},{{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L},{0x5B17453B92103A59L,(-2L),(-2L),0x5B17453B92103A59L,0x30B9CAD4ABD1CFADL,0x0AEE42853CF3A5B3L}}};
            uint8_t l_762 = 255UL;
            int32_t l_822 = 0x1F2571F1L;
            int32_t l_823[8][8] = {{6L,0x7A13775EL,4L,(-6L),0x6CA4D1D9L,(-3L),1L,4L},{6L,0x7A13775EL,4L,(-6L),0x6CA4D1D9L,(-3L),1L,4L},{6L,0x7A13775EL,4L,(-6L),0x6CA4D1D9L,(-3L),1L,4L},{6L,0x7A13775EL,4L,(-6L),0x6CA4D1D9L,(-3L),1L,4L},{6L,0x7A13775EL,4L,(-6L),0x6CA4D1D9L,(-3L),1L,4L},{6L,0x7A13775EL,4L,(-6L),0x6CA4D1D9L,(-3L),1L,4L},{6L,0x7A13775EL,4L,(-6L),0x6CA4D1D9L,(-3L),1L,4L},{6L,0x7A13775EL,4L,(-6L),0x6CA4D1D9L,(-3L),1L,4L}};
            uint16_t l_824 = 0xA111L;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_749[i] = 0xD004L;
            for (i = 0; i < 10; i++)
                l_758[i] = 0x4C42L;
            for (i = 0; i < 7; i++)
                l_759[i] = 1UL;
            l_750 &= (l_749[1] &= 0x42FF165EL);
            if (((VECTOR(int32_t, 8))(0x37762A8EL, ((VECTOR(int32_t, 4))(l_751.yxxx)).z, (-8L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x3EE808C7L, (-1L), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_752.sb854ed46e87dd726)).s1, (l_753 = 0x35805BEBL), (l_755 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_754.yyxx)).hi)).lo), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(4L, 1L)))), (int32_t)((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))((l_756 , ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_757.s165d)).xyzyzyxy)), l_758[4], ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(0x523B9C19L, (-10L), 0x710A6572L, 0L)), ((VECTOR(int32_t, 8))(0x6B61438DL, l_759[3], (l_757.sc = ((l_760 = l_760) , 0x569749B3L)), ((VECTOR(int32_t, 2))(0x60D46BDFL)), 0x79B5DC5DL, 0x5A12D46FL, 0x00B13246L)).hi))), 0x63AD1291L, 0L, 0x2CD09CFEL)), ((VECTOR(int32_t, 16))(0x5ED5427FL)), ((VECTOR(int32_t, 16))(1L))))).se), ((VECTOR(int32_t, 2))(0x560943BBL)), 0x3489EE93L)).ywywyxyxxyxzzzxy, (int32_t)l_761[1][2][1]))).s5))).xxxyyyxyyyyyxyyx)).sb, ((VECTOR(int32_t, 4))(0x77641A4DL)), 0L, 0x768060A5L, 0x03162E10L, (-10L), 1L, 0x5D01FDE6L, 0x07FE0633L, (-7L))).se, 3L, 0x6AD82B78L, ((VECTOR(int32_t, 2))(1L)), (-7L), l_762, 0x7A13C46AL, (-1L), 0x165C5F9CL, ((VECTOR(int32_t, 4))(0L)))).lo)))).s1, 0L, (-5L), 0x5FF3644BL)), 0x557BA66BL)).s6)
            { /* block id: 379 */
                int32_t l_763[8][6][5] = {{{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL}},{{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL}},{{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL}},{{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL}},{{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL}},{{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL}},{{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL}},{{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL},{9L,(-10L),0x45025B71L,0x0C6A4702L,0x75799C5BL}}};
                int i, j, k;
                for (l_763[0][0][2] = 0; (l_763[0][0][2] <= 9); l_763[0][0][2]++)
                { /* block id: 382 */
                    int32_t l_766 = 1L;
                    for (l_766 = 0; (l_766 > (-30)); --l_766)
                    { /* block id: 385 */
                        int32_t *l_769 = (void*)0;
                        int32_t l_771 = 1L;
                        int32_t *l_770[5];
                        int32_t l_772 = (-1L);
                        int32_t l_773 = 1L;
                        uint32_t l_774[6][8][5] = {{{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L}},{{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L}},{{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L}},{{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L}},{{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L}},{{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L},{0x4E28D99EL,1UL,0x42EF1358L,6UL,0xF9ECB0D6L}}};
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_770[i] = &l_771;
                        l_770[3] = l_769;
                        l_752.sa = (-3L);
                        ++l_774[1][7][1];
                    }
                }
            }
            else
            { /* block id: 391 */
                int32_t l_777 = (-9L);
                l_757.s8 ^= ((VECTOR(int32_t, 2))(1L, (-1L))).odd;
                for (l_777 = 0; (l_777 != (-10)); l_777 = safe_sub_func_int32_t_s_s(l_777, 3))
                { /* block id: 395 */
                    int32_t l_780 = (-1L);
                    l_752.s6 &= (l_751.x = 0x78EC2185L);
                    for (l_780 = 0; (l_780 != (-2)); l_780--)
                    { /* block id: 400 */
                        int64_t l_783[5];
                        uint32_t l_784[3][9][7] = {{{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L}},{{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L}},{{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L},{0xA660B1E6L,0UL,0xB5B8163DL,4294967291UL,5UL,0x1C925D11L,0x08039506L}}};
                        VECTOR(int8_t, 8) l_785 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L);
                        VECTOR(int8_t, 16) l_786 = (VECTOR(int8_t, 16))(0x6BL, (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, 0x7DL), 0x7DL), 0x7DL, 0x6BL, 0x7DL, (VECTOR(int8_t, 2))(0x6BL, 0x7DL), (VECTOR(int8_t, 2))(0x6BL, 0x7DL), 0x6BL, 0x7DL, 0x6BL, 0x7DL);
                        uint64_t l_787 = 1UL;
                        VECTOR(int8_t, 4) l_788 = (VECTOR(int8_t, 4))(0x7AL, (VECTOR(int8_t, 2))(0x7AL, 0x74L), 0x74L);
                        VECTOR(int8_t, 16) l_789 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int8_t, 2))(1L, 8L), (VECTOR(int8_t, 2))(1L, 8L), 1L, 8L, 1L, 8L);
                        VECTOR(int8_t, 4) l_790 = (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 0x2DL), 0x2DL);
                        VECTOR(int8_t, 16) l_791 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int8_t, 2))(0L, 5L), (VECTOR(int8_t, 2))(0L, 5L), 0L, 5L, 0L, 5L);
                        VECTOR(int8_t, 16) l_792 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0L), 0L), 0L, 7L, 0L, (VECTOR(int8_t, 2))(7L, 0L), (VECTOR(int8_t, 2))(7L, 0L), 7L, 0L, 7L, 0L);
                        VECTOR(uint64_t, 16) l_793 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551612UL), 18446744073709551612UL), 18446744073709551612UL, 0UL, 18446744073709551612UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551612UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551612UL), 0UL, 18446744073709551612UL, 0UL, 18446744073709551612UL);
                        VECTOR(int8_t, 4) l_794 = (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, (-1L)), (-1L));
                        uint32_t l_795 = 0xA9245371L;
                        int16_t l_798 = 1L;
                        uint32_t l_799 = 4294967295UL;
                        uint8_t l_800 = 0x24L;
                        uint32_t l_801 = 4294967295UL;
                        int64_t l_802 = 0x4196B6464D85869AL;
                        int8_t l_803 = 0x71L;
                        int64_t l_804[4][1];
                        int16_t l_805 = (-9L);
                        int16_t l_806 = 0x4BA8L;
                        int32_t l_807 = 0L;
                        uint64_t l_808 = 1UL;
                        uint32_t l_809 = 4294967295UL;
                        int32_t l_810 = 0x45FB4FDAL;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_783[i] = 0x713582F185165050L;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_804[i][j] = 0x7FE931F38479A988L;
                        }
                        l_806 = (((((l_783[4] , l_784[0][4][2]) , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-1L), 0L)), ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((-1L), ((VECTOR(int8_t, 2))(l_785.s40)), (-1L))).xzzzwxwx)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_786.s4df6)).xwwxxzxw))))).lo)))).zxwyyxyy)).odd, ((VECTOR(int8_t, 8))(l_787, 1L, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_788.wxwyyxyyxxwzyyzw)).s33)).yxyx, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_789.s8f05)).lo)), (-9L), 0L, ((VECTOR(int8_t, 2))(l_790.wz)), 0L, 8L)).s12)).xxxx))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_791.seb)))).yyyy))), (-2L), 0x19L)).hi, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(0x4FL, 0x4EL, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(l_792.s878450b13f2e4941)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x0BL, (l_789.s0 = 0x51L), (-4L), (-2L))).odd)).xxxyxyyy))), ((VECTOR(int8_t, 2))(1L, 0x04L)), (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x7B0A116C64EF85A7L, 3UL)))).xxyxyyyy)).s37))), (uint64_t)((VECTOR(uint64_t, 2))(l_793.s21)).odd))), 0UL, 0UL)).y , 0x30L), (-1L), 0x5BL, 0x2DL)).sbdb6, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_794.yyywwwzz)).s04)), ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x08L, 0x09L)), (-1L), ((l_795--) , (l_798 , l_799)), l_800, ((VECTOR(int8_t, 4))(0x71L)), 0L, ((VECTOR(int8_t, 4))(0x71L)), 2L, (-1L))))).even, ((VECTOR(int8_t, 8))((-9L)))))), ((VECTOR(int8_t, 2))((-6L))), l_801, l_802, 0x64L, 0x34L)).sde52))), (-1L), ((VECTOR(int8_t, 8))(0x34L)), ((VECTOR(int8_t, 2))(0x24L)), 8L)).s8d13))), 0x22L, (-1L))), ((VECTOR(int8_t, 4))(0x39L)), (-1L), l_803, 0x3CL, 0x7CL)).hi)).even)).z) , l_804[0][0]) , 3L) , l_805);
                        l_752.s9 ^= (l_807 = ((((VECTOR(uint32_t, 4))(0x81CAB572L, (l_784[0][4][2] = ((l_808 = l_807) , 0xF5FC7556L)), 9UL, 0xFAA85A8FL)).y , l_809) , 6L));
                        l_754.x = l_810;
                    }
                    l_757.s1 = 0x628A0F8FL;
                    for (l_780 = 0; (l_780 == 9); l_780 = safe_add_func_int8_t_s_s(l_780, 4))
                    { /* block id: 413 */
                        int8_t *l_814 = (void*)0;
                        int8_t **l_813 = &l_814;
                        int8_t **l_815 = (void*)0;
                        l_815 = l_813;
                    }
                }
                for (l_777 = 0; (l_777 < 14); l_777 = safe_add_func_uint16_t_u_u(l_777, 2))
                { /* block id: 419 */
                    VECTOR(int32_t, 16) l_818 = (VECTOR(int32_t, 16))(0x736ABE52L, (VECTOR(int32_t, 4))(0x736ABE52L, (VECTOR(int32_t, 2))(0x736ABE52L, 1L), 1L), 1L, 0x736ABE52L, 1L, (VECTOR(int32_t, 2))(0x736ABE52L, 1L), (VECTOR(int32_t, 2))(0x736ABE52L, 1L), 0x736ABE52L, 1L, 0x736ABE52L, 1L);
                    VECTOR(int32_t, 16) l_819 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                    VECTOR(int32_t, 8) l_820 = (VECTOR(int32_t, 8))(0x4B14B331L, (VECTOR(int32_t, 4))(0x4B14B331L, (VECTOR(int32_t, 2))(0x4B14B331L, (-6L)), (-6L)), (-6L), 0x4B14B331L, (-6L));
                    int32_t *l_821 = (void*)0;
                    int i;
                    l_754.y = ((VECTOR(int32_t, 4))(l_818.s4157)).x;
                    l_752.se |= ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_819.sbc)), ((VECTOR(int32_t, 8))(l_820.s72560627)).s27))).hi;
                    l_821 = (void*)0;
                }
            }
            l_824--;
            unsigned int result = 0;
            int l_749_i0;
            for (l_749_i0 = 0; l_749_i0 < 2; l_749_i0++) {
                result += l_749[l_749_i0];
            }
            result += l_750;
            result += l_751.y;
            result += l_751.x;
            result += l_752.sf;
            result += l_752.se;
            result += l_752.sd;
            result += l_752.sc;
            result += l_752.sb;
            result += l_752.sa;
            result += l_752.s9;
            result += l_752.s8;
            result += l_752.s7;
            result += l_752.s6;
            result += l_752.s5;
            result += l_752.s4;
            result += l_752.s3;
            result += l_752.s2;
            result += l_752.s1;
            result += l_752.s0;
            result += l_753;
            result += l_754.y;
            result += l_754.x;
            result += l_755;
            result += l_756;
            result += l_757.sf;
            result += l_757.se;
            result += l_757.sd;
            result += l_757.sc;
            result += l_757.sb;
            result += l_757.sa;
            result += l_757.s9;
            result += l_757.s8;
            result += l_757.s7;
            result += l_757.s6;
            result += l_757.s5;
            result += l_757.s4;
            result += l_757.s3;
            result += l_757.s2;
            result += l_757.s1;
            result += l_757.s0;
            int l_758_i0;
            for (l_758_i0 = 0; l_758_i0 < 10; l_758_i0++) {
                result += l_758[l_758_i0];
            }
            int l_759_i0;
            for (l_759_i0 = 0; l_759_i0 < 7; l_759_i0++) {
                result += l_759[l_759_i0];
            }
            result += l_760;
            int l_761_i0, l_761_i1, l_761_i2;
            for (l_761_i0 = 0; l_761_i0 < 3; l_761_i0++) {
                for (l_761_i1 = 0; l_761_i1 < 8; l_761_i1++) {
                    for (l_761_i2 = 0; l_761_i2 < 6; l_761_i2++) {
                        result += l_761[l_761_i0][l_761_i1][l_761_i2];
                    }
                }
            }
            result += l_762;
            result += l_822;
            int l_823_i0, l_823_i1;
            for (l_823_i0 = 0; l_823_i0 < 8; l_823_i0++) {
                for (l_823_i1 = 0; l_823_i1 < 8; l_823_i1++) {
                    result += l_823[l_823_i0][l_823_i1];
                }
            }
            result += l_824;
            atomic_add(&p_847->g_special_values[77 * get_linear_group_id() + 23], result);
        }
        else
        { /* block id: 426 */
            (1 + 1);
        }
        l_8 = ((*l_845) = ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((*l_844) |= (((l_9 = (((void*)0 == &p_847->g_78) < l_740.sd)) >= (l_843 = (safe_mul_func_int8_t_s_s(((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_847->g_835.s9d10)).xyyzyxwzwwxzzwyz)).s6 != (safe_rshift_func_uint8_t_u_u((l_838 <= ((p_847->g_344 > 1UL) , ((l_838 >= (l_839 ^= l_838)) == ((safe_mod_func_int8_t_s_s(p_847->g_294.s7, l_8)) <= p_847->g_425.w)))), l_838))) , l_11[0][2]), l_7.w)))) , l_8)), 0UL)), l_746[1][0][5])), 9)) || (*l_844)));
        if ((*l_845))
            continue;
    }
    (*l_846) ^= ((VECTOR(int32_t, 2))(0x494D9093L, (-1L))).lo;
    return (*l_846);
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_6 p_847->g_12 p_847->g_comm_values p_847->g_35 p_847->g_95 p_847->g_344 p_847->g_155 p_847->g_315 p_847->g_592 p_847->g_69 p_847->g_87 p_847->g_310 p_847->g_311 p_847->g_618 p_847->g_67 p_847->g_104 p_847->g_140 p_847->g_296 p_847->g_728 p_847->g_729 p_847->g_221
 * writes: p_847->g_26 p_847->g_6 p_847->g_2 p_847->g_36 p_847->g_95 p_847->g_344 p_847->g_69 p_847->g_155 p_847->g_87 p_847->g_311 p_847->g_14
 */
uint32_t  func_17(int32_t * p_18, int32_t * p_19, struct S0 * p_847)
{ /* block id: 11 */
    int16_t l_24 = 0x7FDEL;
    int32_t *l_25 = (void*)0;
    int32_t l_568 = 0L;
    int32_t l_577 = 8L;
    uint32_t l_578 = 0x5587C629L;
    int32_t l_603 = 0x762D7102L;
    uint8_t **l_734[6][2] = {{(void*)0,&p_847->g_356},{(void*)0,&p_847->g_356},{(void*)0,&p_847->g_356},{(void*)0,&p_847->g_356},{(void*)0,&p_847->g_356},{(void*)0,&p_847->g_356}};
    int8_t l_737[6][1] = {{1L},{1L},{1L},{1L},{1L},{1L}};
    int i, j;
    atomic_xor(&p_847->l_atomic_reduction[0], func_20(((*p_19) = l_24), &p_847->g_6, ((p_847->g_26[3][0] = ((((p_847->g_6 <= 65526UL) , p_18) != (void*)0) , l_24)) , &p_847->g_6), p_847));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_847->v_collective += p_847->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if ((*p_19))
    { /* block id: 257 */
        int32_t *l_569 = &p_847->g_155[1];
        int32_t *l_570 = &p_847->g_87;
        int32_t *l_571 = &p_847->g_6;
        int32_t *l_572 = &p_847->g_6;
        int32_t *l_573 = (void*)0;
        int32_t l_574 = 0x037EEA18L;
        int32_t *l_575 = &p_847->g_155[3];
        int32_t *l_576[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t ***l_597[9][6][4] = {{{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0}},{{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0}},{{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0}},{{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0}},{{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0}},{{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0}},{{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0}},{{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0}},{{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0},{(void*)0,&p_847->g_220[0],&p_847->g_220[3],(void*)0}}};
        int8_t l_604 = (-5L);
        int i, j, k;
        ++l_578;
        for (l_568 = 0; (l_568 != 25); l_568 = safe_add_func_int64_t_s_s(l_568, 9))
        { /* block id: 261 */
            uint32_t l_585 = 4294967292UL;
            uint16_t ***l_596 = &p_847->g_220[1];
            int32_t l_601 = 0x166AA934L;
            uint32_t *l_639 = &p_847->g_14[0][2];
            int16_t *l_640 = &l_24;
            for (p_847->g_344 = 29; (p_847->g_344 == 23); p_847->g_344 = safe_sub_func_int32_t_s_s(p_847->g_344, 4))
            { /* block id: 264 */
                uint8_t l_590 = 0UL;
                int32_t l_602 = 0x68385A0BL;
                uint64_t l_605 = 1UL;
                VECTOR(uint8_t, 2) l_625 = (VECTOR(uint8_t, 2))(0x7CL, 0x84L);
                uint64_t *l_632 = &p_847->g_69;
                int i;
                if (((*l_575) || ((void*)0 != &p_847->g_14[0][3])))
                { /* block id: 265 */
                    int16_t *l_591 = &l_24;
                    --l_585;
                    if ((*p_19))
                        continue;
                    (*l_572) = (safe_sub_func_int8_t_s_s(l_590, (((((*l_591) = p_847->g_315.s5) ^ 0x4332L) <= (GROUP_DIVERGE(1, 1) , ((VECTOR(uint8_t, 16))(p_847->g_592.s6f5655cbaf629745)).s7)) || FAKE_DIVERGE(p_847->global_1_offset, get_global_id(1), 10))));
                    for (p_847->g_69 = 3; (p_847->g_69 >= 50); p_847->g_69 = safe_add_func_int8_t_s_s(p_847->g_69, 5))
                    { /* block id: 272 */
                        VECTOR(int32_t, 8) l_595 = (VECTOR(int32_t, 8))(0x7AC720B4L, (VECTOR(int32_t, 4))(0x7AC720B4L, (VECTOR(int32_t, 2))(0x7AC720B4L, (-9L)), (-9L)), (-9L), 0x7AC720B4L, (-9L));
                        int i;
                        (*l_575) &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_595.s6143531721071360)).lo)).s4;
                        (*l_570) |= (l_596 != l_597[8][0][3]);
                    }
                }
                else
                { /* block id: 276 */
                    int64_t l_600 = 8L;
                    uint64_t *l_622 = &p_847->g_67[2];
                    uint64_t **l_621 = &l_622;
                    int8_t *l_628[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_629 = 0x41A96584L;
                    int i;
                    for (p_847->g_95 = 19; (p_847->g_95 <= (-3)); p_847->g_95--)
                    { /* block id: 279 */
                        (*p_847->g_310) = (*p_847->g_310);
                        l_600 |= 0x49C41F58L;
                    }
                    l_605++;
                    if ((*p_18))
                        break;
                    l_602 &= (safe_div_func_int64_t_s_s(((*l_575) , (safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((VECTOR(int32_t, 4))((-1L), 0x2E6557ADL, (-9L), (-5L))).z , ((p_847->g_618 ^ (((safe_mod_func_int64_t_s_s(((((~l_585) , ((*l_621) = &p_847->g_67[2])) == (void*)0) || (safe_rshift_func_uint16_t_u_s((((((VECTOR(uint8_t, 8))(l_625.yyxyxxxx)).s1 ^ (l_629 |= (safe_rshift_func_uint16_t_u_u(l_600, 7)))) || (safe_mul_func_int8_t_s_s((l_600 && l_600), p_847->g_67[0]))) || (*l_570)), 1))), l_600)) && l_600) > l_585)) & (*p_18))), l_568)), (*l_571))), l_600)), (*l_575)))), (*l_575)));
                }
                (*l_575) |= (*p_19);
                (*p_19) = ((p_847->g_104.x > l_601) , (0x1746B38DEED34EBEL && (((*l_632) = l_602) , l_585)));
            }
            (*l_570) |= (((l_601 = (((*l_575) > (FAKE_DIVERGE(p_847->local_1_offset, get_local_id(1), 10) && p_847->g_67[2])) != ((*p_18) ^= (*p_19)))) || (safe_lshift_func_int8_t_s_s(p_847->g_140.s7, (safe_rshift_func_int16_t_s_u(((*l_640) = (safe_div_func_uint32_t_u_u(((*l_639) = p_847->g_296[0]), (l_577 = l_568)))), 7))))) , 0x17CA1FBDL);
        }
    }
    else
    { /* block id: 300 */
        int16_t l_723 = 0L;
        VECTOR(int32_t, 2) l_724 = (VECTOR(int32_t, 2))(0x24526757L, 0L);
        VECTOR(int32_t, 2) l_730 = (VECTOR(int32_t, 2))(3L, 2L);
        uint8_t **l_733 = &p_847->g_356;
        uint32_t *l_736 = &p_847->g_14[0][3];
        int i;
        if ((atomic_inc(&p_847->g_atomic_input[77 * get_linear_group_id() + 14]) == 3))
        { /* block id: 302 */
            int32_t l_641 = (-1L);
            for (l_641 = 15; (l_641 >= 0); l_641 = safe_sub_func_int16_t_s_s(l_641, 5))
            { /* block id: 305 */
                VECTOR(int32_t, 2) l_644 = (VECTOR(int32_t, 2))(0x335A2595L, 6L);
                uint32_t l_673 = 4294967293UL;
                int i;
                for (l_644.x = (-29); (l_644.x > 0); l_644.x = safe_add_func_int16_t_s_s(l_644.x, 7))
                { /* block id: 308 */
                    int8_t l_647[8] = {0L,0x65L,0L,0L,0x65L,0L,0L,0x65L};
                    int32_t l_648 = (-10L);
                    int16_t l_655 = 1L;
                    int8_t l_656 = (-1L);
                    int16_t l_657 = 0x6267L;
                    int16_t l_658 = (-7L);
                    int32_t l_659 = (-1L);
                    int16_t l_660 = 0x7437L;
                    int32_t l_661 = 0x1E80BC6EL;
                    int32_t l_662 = 0x1D5C5BE4L;
                    int64_t l_663 = 0x123D16B90B198331L;
                    int32_t l_664 = 0x4C5AAD56L;
                    uint32_t l_665 = 0x59A1BC1CL;
                    int32_t l_671[3][1][10] = {{{0x3CDBAA36L,0x751D2864L,0x59AD17D4L,0x372FB383L,0x751D2864L,0x372FB383L,0x59AD17D4L,0x751D2864L,0x3CDBAA36L,0x3CDBAA36L}},{{0x3CDBAA36L,0x751D2864L,0x59AD17D4L,0x372FB383L,0x751D2864L,0x372FB383L,0x59AD17D4L,0x751D2864L,0x3CDBAA36L,0x3CDBAA36L}},{{0x3CDBAA36L,0x751D2864L,0x59AD17D4L,0x372FB383L,0x751D2864L,0x372FB383L,0x59AD17D4L,0x751D2864L,0x3CDBAA36L,0x3CDBAA36L}}};
                    uint32_t l_672 = 5UL;
                    int i, j, k;
                    if ((l_647[6] , l_648))
                    { /* block id: 309 */
                        uint16_t l_649 = 65527UL;
                        l_649 ^= 0x596F48A8L;
                    }
                    else
                    { /* block id: 311 */
                        int32_t l_650 = (-1L);
                        uint16_t l_651 = 0xD982L;
                        uint32_t l_652 = 0xEA881A6BL;
                        VECTOR(int32_t, 2) l_653 = (VECTOR(int32_t, 2))(0L, 0x1FEC41D8L);
                        uint16_t l_654 = 65532UL;
                        int i;
                        l_652 = (l_648 = (l_650 , (l_651 , (-1L))));
                        l_654 = (l_648 = ((VECTOR(int32_t, 8))(l_653.xxyyyyxx)).s7);
                    }
                    l_665++;
                    for (l_647[6] = 0; (l_647[6] == 12); l_647[6] = safe_add_func_uint64_t_u_u(l_647[6], 4))
                    { /* block id: 320 */
                        uint32_t l_670 = 4294967295UL;
                        l_661 = l_670;
                    }
                    l_672 ^= l_671[1][0][2];
                }
                if (l_673)
                { /* block id: 325 */
                    VECTOR(int32_t, 2) l_674 = (VECTOR(int32_t, 2))(0L, 0x1CEEA25FL);
                    VECTOR(int32_t, 8) l_675 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                    uint64_t l_676 = 0x51EF3A59EEF1B209L;
                    VECTOR(int64_t, 8) l_708 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x6A1E00A35A33F808L), 0x6A1E00A35A33F808L), 0x6A1E00A35A33F808L, 0L, 0x6A1E00A35A33F808L);
                    int8_t l_709 = 0x34L;
                    uint16_t l_710 = 0xF168L;
                    int32_t l_711[5][6] = {{0x55FC8FF4L,0x60932325L,0x55FC8FF4L,0x55FC8FF4L,0x60932325L,0x55FC8FF4L},{0x55FC8FF4L,0x60932325L,0x55FC8FF4L,0x55FC8FF4L,0x60932325L,0x55FC8FF4L},{0x55FC8FF4L,0x60932325L,0x55FC8FF4L,0x55FC8FF4L,0x60932325L,0x55FC8FF4L},{0x55FC8FF4L,0x60932325L,0x55FC8FF4L,0x55FC8FF4L,0x60932325L,0x55FC8FF4L},{0x55FC8FF4L,0x60932325L,0x55FC8FF4L,0x55FC8FF4L,0x60932325L,0x55FC8FF4L}};
                    uint8_t l_712 = 0x82L;
                    VECTOR(uint64_t, 2) l_713 = (VECTOR(uint64_t, 2))(0UL, 0UL);
                    VECTOR(uint64_t, 2) l_714 = (VECTOR(uint64_t, 2))(0UL, 0x5932B4E04685173DL);
                    uint16_t l_715 = 0xF95BL;
                    int8_t l_716 = 0L;
                    VECTOR(uint64_t, 16) l_717 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0UL, 18446744073709551614UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551614UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551614UL), 0UL, 18446744073709551614UL, 0UL, 18446744073709551614UL);
                    VECTOR(uint64_t, 4) l_718 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xE37F218D5CD133FFL), 0xE37F218D5CD133FFL);
                    VECTOR(int64_t, 2) l_719 = (VECTOR(int64_t, 2))(0x3D854EE19735BB44L, 0x0600B5BDD75EA8A9L);
                    VECTOR(uint64_t, 8) l_720 = (VECTOR(uint64_t, 8))(0xF4B8271FAC5A212FL, (VECTOR(uint64_t, 4))(0xF4B8271FAC5A212FL, (VECTOR(uint64_t, 2))(0xF4B8271FAC5A212FL, 9UL), 9UL), 9UL, 0xF4B8271FAC5A212FL, 9UL);
                    uint16_t l_721 = 65535UL;
                    int i, j;
                    l_675.s6 = ((VECTOR(int32_t, 2))(l_674.yy)).hi;
                    if (((VECTOR(int32_t, 4))(0x685EF914L, l_676, 1L, (-4L))).w)
                    { /* block id: 327 */
                        uint64_t l_677 = 18446744073709551613UL;
                        VECTOR(int32_t, 2) l_678 = (VECTOR(int32_t, 2))((-1L), (-7L));
                        int32_t l_679[6][7] = {{(-7L),(-7L),0x4DB2A245L,0x066C32BBL,0x69127DE4L,0x4EAF69D0L,1L},{(-7L),(-7L),0x4DB2A245L,0x066C32BBL,0x69127DE4L,0x4EAF69D0L,1L},{(-7L),(-7L),0x4DB2A245L,0x066C32BBL,0x69127DE4L,0x4EAF69D0L,1L},{(-7L),(-7L),0x4DB2A245L,0x066C32BBL,0x69127DE4L,0x4EAF69D0L,1L},{(-7L),(-7L),0x4DB2A245L,0x066C32BBL,0x69127DE4L,0x4EAF69D0L,1L},{(-7L),(-7L),0x4DB2A245L,0x066C32BBL,0x69127DE4L,0x4EAF69D0L,1L}};
                        VECTOR(int32_t, 4) l_680 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x77551C0AL), 0x77551C0AL);
                        VECTOR(int32_t, 4) l_681 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x208DC5FBL), 0x208DC5FBL);
                        int64_t l_682 = 0x75EB7EDB265091EBL;
                        int i, j;
                        l_674.y = 0x70C9F80AL;
                        l_674.x = l_677;
                        l_675.s5 = ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_678.yxyxxxyy)).lo)).wyyxxxzxxxzxzwyz)).s45f8, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((l_679[1][5] , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(0x32AD8815L, 1L)).yyxxyyxx, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(l_680.zxwz))))).zxwwxxzx))).s5422027165364501)).sc), ((VECTOR(int32_t, 2))(l_681.zy)), (-1L))).xwwzwwyzwzwzzywy)).s8c73))).w;
                        l_679[1][1] ^= l_682;
                    }
                    else
                    { /* block id: 332 */
                        VECTOR(int32_t, 4) l_683 = (VECTOR(int32_t, 4))(0x23F6D203L, (VECTOR(int32_t, 2))(0x23F6D203L, (-5L)), (-5L));
                        int32_t l_684[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        VECTOR(uint32_t, 4) l_685 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL);
                        VECTOR(int32_t, 8) l_686 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                        uint16_t l_687[5][3][9] = {{{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL}},{{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL}},{{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL}},{{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL}},{{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL},{0x72BEL,65530UL,0x8D04L,0x22EFL,65535UL,65534UL,0x72BEL,0x11ABL,65535UL}}};
                        uint64_t l_688 = 18446744073709551615UL;
                        VECTOR(int32_t, 16) l_689 = (VECTOR(int32_t, 16))(0x45F04698L, (VECTOR(int32_t, 4))(0x45F04698L, (VECTOR(int32_t, 2))(0x45F04698L, 0x1C2F6823L), 0x1C2F6823L), 0x1C2F6823L, 0x45F04698L, 0x1C2F6823L, (VECTOR(int32_t, 2))(0x45F04698L, 0x1C2F6823L), (VECTOR(int32_t, 2))(0x45F04698L, 0x1C2F6823L), 0x45F04698L, 0x1C2F6823L, 0x45F04698L, 0x1C2F6823L);
                        uint16_t l_690 = 0x0EE3L;
                        uint8_t l_693 = 0UL;
                        VECTOR(uint64_t, 16) l_694 = (VECTOR(uint64_t, 16))(0x07E10BCC332995EBL, (VECTOR(uint64_t, 4))(0x07E10BCC332995EBL, (VECTOR(uint64_t, 2))(0x07E10BCC332995EBL, 0x2D12EB977C1A6D9CL), 0x2D12EB977C1A6D9CL), 0x2D12EB977C1A6D9CL, 0x07E10BCC332995EBL, 0x2D12EB977C1A6D9CL, (VECTOR(uint64_t, 2))(0x07E10BCC332995EBL, 0x2D12EB977C1A6D9CL), (VECTOR(uint64_t, 2))(0x07E10BCC332995EBL, 0x2D12EB977C1A6D9CL), 0x07E10BCC332995EBL, 0x2D12EB977C1A6D9CL, 0x07E10BCC332995EBL, 0x2D12EB977C1A6D9CL);
                        int8_t l_695 = (-1L);
                        VECTOR(uint32_t, 16) l_696 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0x42E5153EL), 0x42E5153EL), 0x42E5153EL, 8UL, 0x42E5153EL, (VECTOR(uint32_t, 2))(8UL, 0x42E5153EL), (VECTOR(uint32_t, 2))(8UL, 0x42E5153EL), 8UL, 0x42E5153EL, 8UL, 0x42E5153EL);
                        int8_t l_697[4][7][8] = {{{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L}},{{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L}},{{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L}},{{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L},{0x60L,0x6BL,9L,0x13L,0L,0x09L,0x4BL,5L}}};
                        int16_t l_698 = 0x6FE0L;
                        int64_t l_699 = 6L;
                        int32_t l_700[8] = {(-1L),0x2B79048EL,(-1L),(-1L),0x2B79048EL,(-1L),(-1L),0x2B79048EL};
                        VECTOR(int64_t, 2) l_701 = (VECTOR(int64_t, 2))((-2L), 6L);
                        VECTOR(int64_t, 4) l_702 = (VECTOR(int64_t, 4))(0x2DE84487F3E9B3C2L, (VECTOR(int64_t, 2))(0x2DE84487F3E9B3C2L, 3L), 3L);
                        uint16_t l_703 = 0xE2DDL;
                        uint32_t l_704[5][6] = {{0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L,0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L},{0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L,0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L},{0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L,0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L},{0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L,0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L},{0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L,0x41DBCF41L,0x2C9B1A2BL,0x41DBCF41L}};
                        int64_t l_705 = 1L;
                        uint8_t l_706 = 0x1EL;
                        uint64_t l_707 = 0UL;
                        int i, j, k;
                        l_644.y &= 0x4B7517E2L;
                        l_704[2][0] = (l_644.x = (((VECTOR(int64_t, 16))((-9L), ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(l_683.zxyyzwxx)).s52, ((VECTOR(uint32_t, 4))(l_684[5], (l_700[2] &= ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_685.xx)), 0UL, 4294967295UL)), ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 8))((((VECTOR(int32_t, 4))(l_686.s0241)).x , 1UL), 4294967295UL, 4294967295UL, 0xC62C28D2L, (l_689.s5 = (l_687[3][1][2] , l_688)), 2UL, 0x79509BA3L, 8UL)).s1721056250100115, (uint32_t)(l_690++), (uint32_t)(l_685.z = (l_693 , (((VECTOR(uint64_t, 8))(GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_694.sfa84c514691b0784)).s0f2c)))), ((VECTOR(uint64_t, 2))(18446744073709551615UL, 9UL)), 18446744073709551613UL)).s7 , (l_695 |= GROUP_DIVERGE(1, 1)))))))).seeaa, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)))))), 0x283532CEL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_696.se5a9609917a9e150)).s8ca0)), 2UL)).s6, (l_697[2][5][2] , (l_699 = (l_685.w = ((l_698 = 4294967290UL) , 0xC0498F75L)))), 0x01DAC633L, 0x29928024L))))).y), 0x7EEBACF5L, 0xF26314ECL)).even))), (-1L), ((VECTOR(int64_t, 8))(l_701.yyyyyyxx)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_702.xzzz)).hi)), (-1L), 1L)).se , (l_674.y &= (l_675.s0 = l_703))));
                        l_644.y |= ((l_705 , l_706) , l_707);
                    }
                    l_721 ^= ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_708.s12)).xyxy)).x , (l_711[0][4] = (l_709 , (l_710 , 0x57623004L)))) , (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 16))(0x84071E478187735BL, l_712, ((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(l_713.yxyxxyxyyyyxxyxy)).s29, ((VECTOR(uint64_t, 2))(0x159ED208244032FAL, 0x6547C22F40EB3600L))))), 0x205630ED552C0BE4L, 0xECD5F988F62D0093L)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_714.yyxxxyxy)).s46)).xyxx))).z, 0xB8172BE1E1BA1050L, l_715, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_716, 18446744073709551615UL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(l_717.s0d)), 1UL, 0x8B4E589E472377C7L, 0x83E331F20B1C32B1L)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_718.zwzz)).lo)))).xyyx))).xxwywwxx)))).odd)), 18446744073709551610UL, 18446744073709551609UL, 0xA88A7A6172E3E7ABL)).s5d))))).yxyy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 16))(l_719.yyyxyyyyxxyxxxxx)).s26))).yxxx, ((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 2))(l_720.s70)).yyxy)))))), 1UL, ((VECTOR(uint64_t, 2))(0x3013E26053AAF188L, 0UL)), 9UL)).odd))).zwywzyzy))))))).lo)).z , (l_644.x = 0x1F05A699L)));
                }
                else
                { /* block id: 351 */
                    uint64_t l_722 = 18446744073709551612UL;
                    l_644.x ^= l_722;
                }
            }
            unsigned int result = 0;
            result += l_641;
            atomic_add(&p_847->g_special_values[77 * get_linear_group_id() + 14], result);
        }
        else
        { /* block id: 355 */
            (1 + 1);
        }
        (*p_18) ^= ((*p_19) || FAKE_DIVERGE(p_847->local_0_offset, get_local_id(0), 10));
        (*p_19) = ((((((*l_736) = ((VECTOR(uint32_t, 16))(0UL, ((VECTOR(uint32_t, 8))(l_723, ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_724.yxyyyyxy)), ((VECTOR(int32_t, 4))((-2L), (safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_u(0UL, ((*p_18) <= l_577))))), 0x670094F6L, 0x2C965179L)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(p_847->g_728.yy)).yxyxyyxx, ((VECTOR(int32_t, 4))(p_847->g_729.s2274)).xywzywww))).s77)), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x12F502E6L, ((VECTOR(int32_t, 8))(l_730.xyyyxxyx)), (safe_mul_func_uint8_t_u_u(((l_733 = &p_847->g_356) != (l_734[5][1] = &p_847->g_356)), GROUP_DIVERGE(1, 1))), ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xFC791D1EL, 0xC771098EL)).xxyyyxyyxxyxyxyx)).s8 , ((*p_847->g_221) = (+(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x0FEDL, (-4L))).xyxx)), 0x0CF2L, ((VECTOR(int16_t, 2))((-3L), 1L)), 0x728CL)).s4 ^ (safe_unary_minus_func_int64_t_s(l_724.y)))))) > FAKE_DIVERGE(p_847->local_2_offset, get_local_id(2), 10)), ((void*)0 != l_734[5][0]), (*p_18), 0x4C5D9F87L, 1L, (-1L))).saf0c)), ((VECTOR(int32_t, 4))(0x5E5E2B32L))))).lo, ((VECTOR(int32_t, 2))(5L))))), 0x5BD2EE3AL, 1L)), ((VECTOR(int32_t, 4))(0x6BB9FDDBL))))))).wyywxxwyxzyxwxwx, ((VECTOR(int32_t, 16))(0x0E4D0440L)), ((VECTOR(int32_t, 16))(0x13F36236L))))).s7853, ((VECTOR(int32_t, 4))((-1L)))))), ((VECTOR(int32_t, 4))(0x0A738DB6L))))))).hi)).s60)).yyxyyyyxxxyxxxxy, ((VECTOR(int32_t, 16))(0x6CFF0EA2L))))).sce)), 4294967295UL, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(0x2A346445L)), 0x7F98DA09L)).odd, ((VECTOR(uint32_t, 4))(1UL))))), 0x652F7DE5L, 0UL, 0x50ACA08DL)), 0xECB52383L, ((VECTOR(uint32_t, 4))(1UL)), 0xA996C8CFL, 0x8C302656L)).sf) < l_603) && 0x66L) , &l_24) != (void*)0);
    }
    return l_737[5][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_6 p_847->g_12 p_847->g_comm_values p_847->g_35 p_847->g_95
 * writes: p_847->g_6 p_847->g_2 p_847->g_36 p_847->g_95
 */
int32_t  func_20(int32_t  p_21, int32_t * p_22, int32_t * p_23, struct S0 * p_847)
{ /* block id: 14 */
    int64_t l_31 = 1L;
    int32_t l_38 = 3L;
    int64_t l_65 = 0x7CA9972037C870D1L;
    int8_t l_436[6] = {5L,0x40L,5L,5L,0x40L,5L};
    uint32_t l_501 = 1UL;
    VECTOR(int16_t, 2) l_508 = (VECTOR(int16_t, 2))(0L, 1L);
    int32_t ***l_513 = &p_847->g_78;
    int32_t *l_559[8] = {&p_847->g_87,&p_847->g_87,&p_847->g_87,&p_847->g_87,&p_847->g_87,&p_847->g_87,&p_847->g_87,&p_847->g_87};
    int32_t l_560[10][9] = {{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L},{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L},{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L},{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L},{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L},{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L},{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L},{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L},{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L},{3L,3L,0x74BD0511L,0x53B86C0CL,(-4L),(-10L),0x61DD4A49L,0x37D64EE4L,0x61DD4A49L}};
    uint32_t l_561 = 0xF1C6554EL;
    int i, j;
    for (p_847->g_6 = (-25); (p_847->g_6 == (-8)); p_847->g_6++)
    { /* block id: 17 */
        int32_t *l_33 = &p_847->g_34;
        int32_t **l_32[9] = {&l_33,&l_33,&l_33,&l_33,&l_33,&l_33,&l_33,&l_33,&l_33};
        int32_t *l_37 = &p_847->g_2;
        VECTOR(int16_t, 8) l_62 = (VECTOR(int16_t, 8))(0x7939L, (VECTOR(int16_t, 4))(0x7939L, (VECTOR(int16_t, 2))(0x7939L, 0x6D9CL), 0x6D9CL), 0x6D9CL, 0x7939L, 0x6D9CL);
        uint64_t *l_66 = &p_847->g_67[2];
        uint64_t *l_68 = &p_847->g_69;
        uint16_t l_70[10][8][3] = {{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}},{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}},{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}},{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}},{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}},{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}},{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}},{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}},{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}},{{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L},{65534UL,65526UL,0x2909L}}};
        int32_t ***l_490 = &p_847->g_78;
        int32_t ***l_491 = &l_32[3];
        int32_t l_498 = 0x322DAB35L;
        int32_t l_499 = 0x33D11B30L;
        int32_t l_500[2][1][10] = {{{0x7FAE8F16L,(-3L),3L,(-3L),0x7FAE8F16L,0x7FAE8F16L,(-3L),3L,(-3L),0x7FAE8F16L}},{{0x7FAE8F16L,(-3L),3L,(-3L),0x7FAE8F16L,0x7FAE8F16L,(-3L),3L,(-3L),0x7FAE8F16L}}};
        VECTOR(uint16_t, 2) l_522 = (VECTOR(uint16_t, 2))(0x46A9L, 65533UL);
        uint16_t **l_547[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_547[i] = &p_847->g_221;
        for (p_847->g_2 = 0; (p_847->g_2 == 26); p_847->g_2++)
        { /* block id: 20 */
            if (p_847->g_12)
            { /* block id: 21 */
                if (l_31)
                    break;
            }
            else
            { /* block id: 23 */
                return p_847->g_comm_values[p_847->tid];
            }
            (*p_847->g_35) = l_32[7];
        }
        p_847->g_2 = (*p_23);
        (*l_37) = 0x54F4D21FL;
    }
    l_561--;
    for (p_847->g_95 = (-7); (p_847->g_95 > 29); p_847->g_95 = safe_add_func_uint16_t_u_u(p_847->g_95, 4))
    { /* block id: 251 */
        int32_t l_566[5];
        uint64_t l_567 = 0xE22874A4BD98A4C3L;
        int i;
        for (i = 0; i < 5; i++)
            l_566[i] = 6L;
        if (l_566[1])
            break;
        if (l_567)
            continue;
    }
    return (*p_22);
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_137 p_847->g_447 p_847->g_87 p_847->g_13 p_847->g_449 p_847->g_154 p_847->g_361 p_847->g_14 p_847->g_465 p_847->g_69 p_847->g_221 p_847->g_26 p_847->g_105
 * writes: p_847->g_154 p_847->g_14 p_847->g_69
 */
int32_t ** func_43(uint64_t  p_44, int32_t * p_45, int32_t ** p_46, int8_t  p_47, int32_t * p_48, struct S0 * p_847)
{ /* block id: 190 */
    int32_t *l_439 = &p_847->g_154;
    int32_t l_440 = 0L;
    int32_t ***l_443 = &p_847->g_78;
    int32_t ***l_444 = &p_847->g_78;
    VECTOR(int64_t, 4) l_448 = (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 1L), 1L);
    VECTOR(uint32_t, 8) l_450 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xDCC53C94L), 0xDCC53C94L), 0xDCC53C94L, 4294967295UL, 0xDCC53C94L);
    uint16_t **l_455[2];
    int32_t *l_456[3];
    uint8_t l_457 = 0UL;
    uint64_t l_458[1][1][6];
    int8_t *l_461[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_464 = &p_847->g_14[0][1];
    uint64_t *l_468 = &p_847->g_69;
    uint32_t l_473 = 0x7F477251L;
    int16_t l_486 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_455[i] = &p_847->g_221;
    for (i = 0; i < 3; i++)
        l_456[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_458[i][j][k] = 0x7AFDBE4B19618110L;
        }
    }
    l_440 &= ((*l_439) = (safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_847->local_0_offset, get_local_id(0), 10), p_47)));
    l_457 |= ((((safe_rshift_func_int16_t_s_u((((!p_847->g_137.s6) >= (l_443 != (l_444 = &p_46))) > ((((safe_sub_func_int8_t_s_s((((((VECTOR(uint8_t, 2))(p_847->g_447.s99)).even & ((p_847->g_87 <= p_44) >= p_847->g_13[0][4][1])) <= ((VECTOR(int64_t, 2))(l_448.xy)).lo) <= ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0xE271L, 4UL, ((VECTOR(uint16_t, 4))(p_847->g_449.yyxy)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(1UL, (1UL | (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_450.s72003304)))).s1 || ((0UL ^ ((safe_rshift_func_uint16_t_u_u(65535UL, 14)) != p_47)) < (*p_48)))), 18446744073709551612UL, 0UL)).yzywyxyxxxzzzyxy)).s7 != (*l_439)), ((VECTOR(int16_t, 2))(0x1E05L)), 1L)).yzyxzzyz)))).s66))).xyyyxyxx)).hi)), ((VECTOR(uint16_t, 2))(0x8660L)), (*l_439), 1UL, 6UL, 0x809BL)).sad08)).wzxyyyxzxwyxxxyx)), ((VECTOR(uint16_t, 16))(65535UL)), ((VECTOR(uint16_t, 16))(0xDD53L))))).s81)), p_44, 0x3140L, FAKE_DIVERGE(p_847->group_0_offset, get_group_id(0), 10), p_47, 0x31BEL, 1UL)).s7), p_44)) == p_44) & p_44) != (*l_439))), (*l_439))) , 0x089E3087FEDA31A7L) , l_455[0]) != l_455[1]);
    ++l_458[0][0][4];
    if ((((*l_439) = (p_47 || (l_461[3] == l_461[4]))) != ((p_44 , p_44) <= (safe_add_func_uint32_t_u_u(((*l_464) &= p_847->g_361), ((((VECTOR(int16_t, 4))(p_847->g_465.s1be9)).y || ((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))((((safe_add_func_int64_t_s_s(1L, (0x51D2E8735BA3FCB6L || (++(*l_468))))) < (safe_sub_func_int32_t_s_s((l_473 >= p_44), FAKE_DIVERGE(p_847->global_1_offset, get_global_id(1), 10)))) , 0xE73DL), ((VECTOR(uint16_t, 8))(65527UL)), (*p_847->g_221), 0x673AL, p_44, ((VECTOR(uint16_t, 4))(1UL)))).sf6)).yyxyxyxxxyyyxxyx))).s4) && 0xC1F8L))))))
    { /* block id: 199 */
        uint8_t l_476 = 252UL;
        int16_t *l_487 = &l_486;
        int32_t l_488 = (-1L);
        l_488 = (safe_lshift_func_uint16_t_u_s(((l_476 | (0x6257AD38L < (((safe_mul_func_uint16_t_u_u(p_44, l_476)) > (safe_unary_minus_func_uint32_t_u(GROUP_DIVERGE(1, 1)))) || p_44))) & ((*l_439) |= (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_44, p_847->g_105.s0)), p_47)))), ((((safe_add_func_uint32_t_u_u(4294967292UL, (*p_48))) || l_486) , p_847->g_221) == l_487)));
    }
    else
    { /* block id: 202 */
        int32_t **l_489 = (void*)0;
        return l_489;
    }
    return &p_847->g_79;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_26 p_847->g_2 p_847->g_14 p_847->g_96 p_847->g_34 p_847->g_87 p_847->g_105 p_847->g_134 p_847->g_104 p_847->g_95 p_847->g_108 p_847->g_67 p_847->g_124 p_847->g_137 p_847->l_comm_values p_847->g_220 p_847->g_155 p_847->g_13 p_847->g_6 p_847->g_221 p_847->g_310 p_847->g_294 p_847->g_338 p_847->g_344 p_847->g_361 p_847->g_356 p_847->g_306 p_847->g_78 p_847->g_79 p_847->g_425 p_847->g_426 p_847->g_140
 * writes: p_847->g_2 p_847->g_78 p_847->g_26 p_847->g_96 p_847->g_87 p_847->g_13 p_847->g_155 p_847->g_141 p_847->g_154 p_847->g_306 p_847->g_294 p_847->g_338 p_847->g_344 p_847->g_296 p_847->g_356 p_847->g_361 p_847->g_311
 */
int32_t * func_49(uint64_t  p_50, struct S0 * p_847)
{ /* block id: 32 */
    int8_t l_91 = 0x2FL;
    int32_t l_92 = 0x1228708DL;
    uint16_t *l_94 = &p_847->g_26[3][0];
    uint16_t **l_93 = &l_94;
    VECTOR(int32_t, 8) l_293 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4165B2EFL), 0x4165B2EFL), 0x4165B2EFL, 0L, 0x4165B2EFL);
    uint8_t *l_362[4] = {&p_847->g_306[5],&p_847->g_306[5],&p_847->g_306[5],&p_847->g_306[5]};
    uint16_t *l_378 = &p_847->g_296[0];
    VECTOR(uint64_t, 16) l_392 = (VECTOR(uint64_t, 16))(0x4359AF67A6107C03L, (VECTOR(uint64_t, 4))(0x4359AF67A6107C03L, (VECTOR(uint64_t, 2))(0x4359AF67A6107C03L, 0UL), 0UL), 0UL, 0x4359AF67A6107C03L, 0UL, (VECTOR(uint64_t, 2))(0x4359AF67A6107C03L, 0UL), (VECTOR(uint64_t, 2))(0x4359AF67A6107C03L, 0UL), 0x4359AF67A6107C03L, 0UL, 0x4359AF67A6107C03L, 0UL);
    VECTOR(uint32_t, 8) l_395 = (VECTOR(uint32_t, 8))(0x4F51CFE5L, (VECTOR(uint32_t, 4))(0x4F51CFE5L, (VECTOR(uint32_t, 2))(0x4F51CFE5L, 0x7C6B5629L), 0x7C6B5629L), 0x7C6B5629L, 0x4F51CFE5L, 0x7C6B5629L);
    uint32_t l_422[10] = {4294967287UL,0xE1E3E613L,4294967287UL,4294967287UL,0xE1E3E613L,4294967287UL,4294967287UL,0xE1E3E613L,4294967287UL,4294967287UL};
    VECTOR(int32_t, 8) l_431 = (VECTOR(int32_t, 8))(0x0DDA350EL, (VECTOR(int32_t, 4))(0x0DDA350EL, (VECTOR(int32_t, 2))(0x0DDA350EL, 0x2AB70C26L), 0x2AB70C26L), 0x2AB70C26L, 0x0DDA350EL, 0x2AB70C26L);
    int32_t *l_435 = &p_847->g_34;
    int i;
    if (p_847->g_26[3][1])
    { /* block id: 33 */
        int32_t *l_76 = &p_847->g_34;
        int32_t **l_75[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int32_t l_88 = 0x07CB90AFL;
        VECTOR(int8_t, 4) l_103 = (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 0L), 0L);
        VECTOR(int16_t, 4) l_136 = (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 2L), 2L);
        VECTOR(int16_t, 16) l_138 = (VECTOR(int16_t, 16))(0x7A7CL, (VECTOR(int16_t, 4))(0x7A7CL, (VECTOR(int16_t, 2))(0x7A7CL, 0x72AFL), 0x72AFL), 0x72AFL, 0x7A7CL, 0x72AFL, (VECTOR(int16_t, 2))(0x7A7CL, 0x72AFL), (VECTOR(int16_t, 2))(0x7A7CL, 0x72AFL), 0x7A7CL, 0x72AFL, 0x7A7CL, 0x72AFL);
        uint64_t *l_303 = &p_847->g_67[0];
        int32_t l_317 = (-1L);
        int32_t l_318 = (-6L);
        int32_t l_320[8][4];
        uint16_t l_324 = 0xF57AL;
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 4; j++)
                l_320[i][j] = 0x01CF61BEL;
        }
        for (p_847->g_2 = 16; (p_847->g_2 != 22); p_847->g_2 = safe_add_func_int64_t_s_s(p_847->g_2, 6))
        { /* block id: 36 */
            int32_t *l_74 = &p_847->g_34;
            int32_t **l_73 = &l_74;
            int32_t ***l_77 = (void*)0;
            uint16_t *l_82 = (void*)0;
            uint16_t *l_83 = &p_847->g_26[1][2];
            VECTOR(int8_t, 16) l_107 = (VECTOR(int8_t, 16))(0x0BL, (VECTOR(int8_t, 4))(0x0BL, (VECTOR(int8_t, 2))(0x0BL, 0x7FL), 0x7FL), 0x7FL, 0x0BL, 0x7FL, (VECTOR(int8_t, 2))(0x0BL, 0x7FL), (VECTOR(int8_t, 2))(0x0BL, 0x7FL), 0x0BL, 0x7FL, 0x0BL, 0x7FL);
            int32_t l_109 = 6L;
            VECTOR(int32_t, 16) l_291 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L, (VECTOR(int32_t, 2))((-6L), 0L), (VECTOR(int32_t, 2))((-6L), 0L), (-6L), 0L, (-6L), 0L);
            VECTOR(int32_t, 16) l_292 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x43F5A579L), 0x43F5A579L), 0x43F5A579L, (-1L), 0x43F5A579L, (VECTOR(int32_t, 2))((-1L), 0x43F5A579L), (VECTOR(int32_t, 2))((-1L), 0x43F5A579L), (-1L), 0x43F5A579L, (-1L), 0x43F5A579L);
            uint16_t l_312 = 0xEC9DL;
            uint64_t *l_329 = &p_847->g_67[2];
            int32_t l_337 = 0x2B2DC59FL;
            uint32_t *l_343 = &p_847->g_344;
            uint16_t *l_353 = &p_847->g_296[0];
            uint8_t *l_355 = &p_847->g_306[7];
            uint8_t **l_354[4][5][7] = {{{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355}},{{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355}},{{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355}},{{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355},{&l_355,(void*)0,&l_355,(void*)0,&l_355,&l_355,&l_355}}};
            int i, j, k;
            if ((((l_73 != (p_847->g_78 = l_75[5][2][0])) != (safe_mul_func_uint16_t_u_u(0xFE19L, ((*l_83) &= p_50)))) & 6UL))
            { /* block id: 39 */
                VECTOR(int8_t, 2) l_101 = (VECTOR(int8_t, 2))(0x36L, 0x0AL);
                VECTOR(int8_t, 8) l_106 = (VECTOR(int8_t, 8))(0x72L, (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, 0x50L), 0x50L), 0x50L, 0x72L, 0x50L);
                int16_t l_111 = 1L;
                int32_t l_112 = 8L;
                VECTOR(int8_t, 8) l_143 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x49L), 0x49L), 0x49L, 0L, 0x49L);
                VECTOR(int8_t, 16) l_286 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x07L), 0x07L), 0x07L, (-10L), 0x07L, (VECTOR(int8_t, 2))((-10L), 0x07L), (VECTOR(int8_t, 2))((-10L), 0x07L), (-10L), 0x07L, (-10L), 0x07L);
                VECTOR(uint16_t, 8) l_309 = (VECTOR(uint16_t, 8))(0xABE0L, (VECTOR(uint16_t, 4))(0xABE0L, (VECTOR(uint16_t, 2))(0xABE0L, 0x262AL), 0x262AL), 0x262AL, 0xABE0L, 0x262AL);
                int32_t l_319 = 1L;
                int32_t l_321 = 1L;
                int32_t l_322 = 0L;
                int32_t l_323 = (-2L);
                int32_t *l_327 = (void*)0;
                int i;
                for (p_50 = (-25); (p_50 == 24); ++p_50)
                { /* block id: 42 */
                    int32_t *l_86[9] = {&p_847->g_2,&p_847->g_6,&p_847->g_2,&p_847->g_2,&p_847->g_6,&p_847->g_2,&p_847->g_2,&p_847->g_6,&p_847->g_2};
                    VECTOR(int16_t, 2) l_139 = (VECTOR(int16_t, 2))(0L, 1L);
                    int i;
                    if ((l_88 &= (-7L)))
                    { /* block id: 44 */
                        l_92 &= (safe_mod_func_int8_t_s_s(p_847->g_14[0][3], l_91));
                        l_93 = (void*)0;
                        p_847->g_96++;
                    }
                    else
                    { /* block id: 48 */
                        VECTOR(int8_t, 4) l_102 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L));
                        VECTOR(int32_t, 2) l_110 = (VECTOR(int32_t, 2))(0x09B2EA33L, (-2L));
                        VECTOR(int8_t, 8) l_142 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1AL), 0x1AL), 0x1AL, 1L, 0x1AL);
                        int64_t *l_144 = &p_847->g_13[0][4][1];
                        int32_t **l_280 = &l_86[2];
                        int i;
                        l_111 |= (l_110.x &= (safe_div_func_uint16_t_u_u((l_109 |= ((p_847->g_34 > (&p_847->g_34 == l_86[8])) > ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(1L, 0x33L)).yyyyyyxx, ((VECTOR(int8_t, 2))(l_101.xx)).xyyxxyyx, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_102.yy)), 0L, 0x06L)).wzyzxyyw, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_103.xxxzwwxy)).s1, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(p_847->g_104.xzxw)).odd, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(p_847->g_105.s54)), ((VECTOR(int8_t, 4))(l_106.s3057)).even)))))), 0x0EL)), ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(l_107.s73a4)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_847->g_108.s198c4011989475b2)))).s74b4)))))).wxzyxzyx)))))).s17))).hi)), p_847->g_87)));
                        l_112 |= p_50;
                        (*l_280) = func_113(p_847->g_105.sb, func_118(((0x63199CE3922E0D36L & ((*l_144) = ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0UL, 0xB0B04AA5B5247B03L)).lo, 0xBF64895FD5604649L, 0UL, ((VECTOR(uint64_t, 4))(p_847->g_124.wwxy)), 0x4AAFBA0E2E69A228L)).s1 , ((p_847->g_87 = (safe_add_func_int64_t_s_s((safe_div_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))((safe_unary_minus_func_int32_t_s(((p_50 , p_50) < p_50))), 0x6EFFL, 1L, (-1L))).wwzwxwwy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(p_847->g_134.yxxyyxyyxyxxyyyx)).even))).s61)), ((VECTOR(int16_t, 8))(p_847->g_135.s40741365)).s44, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_136.xz)), ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((&p_847->g_67[0] == &p_847->g_67[2]) != (p_847->g_141.s7 = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 16))(p_847->g_137.s5141200225411317)).sa, 1L, ((VECTOR(int16_t, 2))(0x5EE9L, 0x0C6CL)), ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(l_138.sfb)).yyyyyyxy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_139.xx)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_847->g_140.s01204747)))), ((VECTOR(int16_t, 8))(p_847->g_141.s23403322)).s2, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))((-8L), 4L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x4C31L, 0x6A24L)).xyxyyyxxxyxxxyyy)).s4f, ((VECTOR(int16_t, 2))(0L, (-8L)))))))))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_142.s1677)).hi)), ((VECTOR(int8_t, 4))((-8L), ((VECTOR(int8_t, 2))((-9L), 1L)), 0L)).odd, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_143.s45)).yxyy)).lo))), 0x5DL, 1L)).odd)))))).xyyyxxyx, (int8_t)((+0xE4B1711AL) < p_847->g_96)))).even, ((VECTOR(uint8_t, 4))(9UL))))), ((VECTOR(int16_t, 4))((-2L)))))), 2L, 0L, (-1L), 0x56C0L, 4L, 0L, p_847->l_comm_values[(safe_mod_func_uint32_t_u_u(p_847->tid, 73))], p_50, 0x6EDEL, 0x790CL, 0L, 1L)).s14, ((VECTOR(int16_t, 2))(1L))))), ((VECTOR(int16_t, 2))(6L)), 0x353BL, 1L, 0L, 0x4880L)), ((VECTOR(int16_t, 8))(1L))))), ((VECTOR(int16_t, 8))((-3L)))))), (int16_t)p_847->g_26[1][2], (int16_t)p_847->g_104.z))).s7, ((VECTOR(int16_t, 4))((-5L))))).lo, ((VECTOR(int16_t, 8))(0x49F9L))))), ((VECTOR(int16_t, 2))((-2L))), 6L)).odd)))).s7)), p_847->g_124.x, ((VECTOR(int16_t, 4))(0x5747L)), 4L, 0L)).odd)).yyxxzxxw, ((VECTOR(int16_t, 8))(0x175FL))))).s0, ((VECTOR(int16_t, 2))((-10L))), ((VECTOR(int16_t, 2))((-2L))), 0x585DL)).even)))).hi))), 0x54D9L, 0L)).ywzyzwyx, (int16_t)p_50))).even)).ywyywzyw, ((VECTOR(int16_t, 8))(0x6D1FL)), ((VECTOR(int16_t, 8))(0x4DA1L))))).s0446211506350052)).s3dca)).yyzyywzw))))).s1674301602666265, ((VECTOR(int16_t, 16))(0L)), ((VECTOR(int16_t, 16))((-4L)))))).s2, p_847->g_134.x)) < p_847->g_104.x), 0x1DA26C017CA1D526L)) > 0x7C7667E6L), p_847->g_95)), p_847->g_108.s1))) | l_91)) >= 0L))) && p_847->g_67[2]), p_847->g_108.s9, p_847->g_124.w, p_847->g_137.s0, p_847->g_67[2], p_847), l_101.x, &p_847->g_221, p_847);
                        if (p_50)
                            break;
                    }
                    for (p_847->g_154 = 0; (p_847->g_154 == 10); p_847->g_154 = safe_add_func_uint16_t_u_u(p_847->g_154, 7))
                    { /* block id: 133 */
                        uint64_t l_283 = 2UL;
                        VECTOR(int8_t, 2) l_288 = (VECTOR(int8_t, 2))(0x69L, (-2L));
                        uint64_t **l_295 = &p_847->g_241[0][2];
                        uint8_t *l_305 = &p_847->g_306[7];
                        uint16_t ***l_316[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_316[i] = &p_847->g_220[3];
                        p_847->g_155[1] ^= (((*l_305) = (p_847->g_221 == (l_283 , ((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_286.s6a514f412a1e5462)).hi)).s22, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(p_847->g_287.s37)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-1L), (-1L))).xxyy)).yzxyzzzw)).s71))), ((VECTOR(int8_t, 4))((-7L), ((VECTOR(int8_t, 2))(l_288.xy)), 0x29L)), 0x7DL, 7L)).hi)).odd))), (safe_add_func_uint8_t_u_u((((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(l_291.s16)).yxxyxyxx, ((VECTOR(int32_t, 2))(l_292.s95)).xyxyxxxx, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_293.s0451)).even, ((VECTOR(int32_t, 2))(p_847->g_294.s07)), ((VECTOR(int32_t, 16))((-1L), (-1L), 0x4D5D57F9L, 0x572EFC17L, (!((p_847->g_296[0] = (l_293.s7 , ((!l_107.sa) , (l_295 != l_295)))) & (((*l_94) = (safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_103.y >= ((l_303 = (void*)0) != (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(2L, 8L)).xxyyxyyxxyxxyyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_847->g_304.xxyxyyzw)).s6315464560373230))))).s16, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0L)).yyxyyxxy)).s71))).yyyx)).hi, ((VECTOR(int32_t, 2))((-10L), (-1L)))))).xyyyxyxy)).s6 , &p_847->g_67[0]))) > (*p_847->g_221)), p_847->l_comm_values[(safe_mod_func_uint32_t_u_u(p_847->tid, 73))])), p_50)) > 0x7FE03B3AL), 0L))) > l_143.s2))), 0x58B69752L, ((VECTOR(int32_t, 2))((-1L))), l_101.x, p_847->g_2, ((VECTOR(int32_t, 4))(0L)), 6L, 0x01737B7AL)).s5c))).yxyxxxxy))).hi, ((VECTOR(int32_t, 4))(0x1AC90246L))))).zzwyzwwx, ((VECTOR(int32_t, 8))((-8L)))))).even)).z , 0L) | l_103.x) , GROUP_DIVERGE(1, 1)), 0x0AL)), 0L, p_847->g_124.y, 0L, 0x14L, 1L, p_847->g_26[3][0], 1L, ((VECTOR(int8_t, 4))((-6L))), 0x5AL)).s7d, ((VECTOR(int8_t, 2))(0x16L))))), (int8_t)l_288.y))).yxyyyyxxxyxyxyyx, ((VECTOR(int8_t, 16))(1L))))).s2, l_138.se)) , (void*)0)))) & p_50);
                        p_847->g_294.s4 ^= ((safe_add_func_int8_t_s_s(((((VECTOR(uint16_t, 4))(l_309.s0443)).z > ((((void*)0 == p_847->g_310) , &p_847->g_221) == (l_93 = func_118(l_312, ((safe_mul_func_uint16_t_u_u(p_50, ((VECTOR(uint16_t, 8))(p_847->g_315.s73251253)).s2)) , (FAKE_DIVERGE(p_847->global_0_offset, get_global_id(0), 10) <= ((l_88 = FAKE_DIVERGE(p_847->global_2_offset, get_global_id(2), 10)) >= (!(l_292.s9 , (p_847->g_155[3] >= FAKE_DIVERGE(p_847->local_1_offset, get_local_id(1), 10))))))), ((((p_50 & 1L) , p_50) & GROUP_DIVERGE(0, 1)) | 0xCCB4F9CFB12D965EL), p_50, p_847->g_13[0][4][1], p_847)))) & 0x446F7C810448B7FEL), l_107.sd)) , l_293.s1);
                    }
                    if (l_111)
                        continue;
                    ++l_324;
                }
                return l_327;
            }
            else
            { /* block id: 147 */
                uint16_t *l_328[7];
                int32_t *l_330 = (void*)0;
                int32_t *l_331 = (void*)0;
                int32_t *l_332 = (void*)0;
                int32_t *l_333 = &l_318;
                int32_t *l_334 = &p_847->g_155[3];
                int32_t *l_335 = &p_847->g_87;
                int32_t *l_336[9] = {&p_847->g_155[1],&p_847->g_6,&p_847->g_155[1],&p_847->g_155[1],&p_847->g_6,&p_847->g_155[1],&p_847->g_155[1],&p_847->g_6,&p_847->g_155[1]};
                int i;
                for (i = 0; i < 7; i++)
                    l_328[i] = &l_312;
                l_293.s1 &= ((((void*)0 != l_328[1]) , &p_847->g_67[2]) == l_329);
                p_847->g_338--;
            }
            (*p_847->g_310) = func_113((((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0xD607L, 65535UL)).yxyxyxxyyxxxxyxy)).se, l_103.w)) & p_50) <= (0x7C6BDDD8L ^ (((--(*l_343)) & (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((*l_94) = p_50), 5)) && p_50), ((safe_rshift_func_uint16_t_u_s((((*l_353) = p_50) ^ (((((*p_847->g_310) = func_145(l_103.y, ((p_847->g_356 = &p_847->g_306[7]) != ((safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_847->group_1_offset, get_group_id(1), 10), ((safe_sub_func_uint64_t_u_u(((p_847->g_361 ^= p_50) < 1L), 18446744073709551609UL)) , p_50))) , l_362[1])), p_50, p_847)) != &l_92) < l_291.sb) | p_847->g_137.s4)), l_91)) || 0x27D181D4L)))) <= p_50))), &p_847->g_221, l_293.s7, &p_847->g_221, p_847);
            for (l_324 = 0; (l_324 <= 46); ++l_324)
            { /* block id: 160 */
                uint16_t l_367 = 0x55E2L;
                int8_t *l_368 = (void*)0;
                int8_t *l_369 = (void*)0;
                int8_t *l_370 = (void*)0;
                int8_t *l_371 = (void*)0;
                int8_t *l_372 = (void*)0;
                int32_t l_373 = (-4L);
                l_292.sb ^= (safe_sub_func_uint8_t_u_u(l_367, (l_373 = (l_293.s1 ^= p_847->g_95))));
            }
        }
    }
    else
    { /* block id: 166 */
        int8_t *l_383 = (void*)0;
        int32_t l_384 = 5L;
        int32_t ***l_414 = (void*)0;
        uint32_t l_418 = 0x2EA7D0AAL;
        int32_t *l_421[3][4][6] = {{{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154},{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154},{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154},{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154}},{{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154},{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154},{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154},{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154}},{{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154},{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154},{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154},{&p_847->g_361,(void*)0,&p_847->g_361,&p_847->g_154,(void*)0,&p_847->g_154}}};
        uint8_t l_434 = 255UL;
        int i, j, k;
        for (l_91 = 0; (l_91 < 24); l_91 = safe_add_func_uint8_t_u_u(l_91, 8))
        { /* block id: 169 */
            uint16_t *l_379 = &p_847->g_26[1][6];
            int32_t l_382 = 0L;
            uint64_t *l_396[5];
            int64_t *l_401 = (void*)0;
            int32_t ***l_416 = &p_847->g_78;
            int32_t ****l_415 = &l_416;
            int32_t l_417 = 0L;
            int16_t l_419 = 0x5C80L;
            int32_t *l_420 = &l_92;
            int i;
            for (i = 0; i < 5; i++)
                l_396[i] = (void*)0;
            p_847->g_294.s7 = (l_384 = (p_847->g_356 != ((l_293.s1 = (safe_lshift_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) <= ((((*l_93) = l_378) != l_379) , (safe_rshift_func_uint16_t_u_u(65530UL, 7)))), (l_382 = p_847->g_137.s6)))) , l_383)));
            (*l_420) = (((safe_unary_minus_func_int8_t_s(((l_382 = ((((p_847->g_155[0] && ((p_847->g_306[6] |= ((safe_mul_func_int16_t_s_s(((((safe_div_func_int16_t_s_s(((((((VECTOR(uint64_t, 16))(l_392.s9ff47a50b4066393)).sb != (((*l_94) = (safe_mod_func_int16_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_395.s54370632)).s50)).hi & (((p_50--) && (safe_mod_func_int64_t_s_s((l_384 = (l_395.s2 == l_382)), (safe_mul_func_uint8_t_u_u(p_50, (safe_sub_func_uint8_t_u_u((l_293.s0 = 0x8EL), 248UL))))))) != (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((FAKE_DIVERGE(p_847->group_1_offset, get_group_id(1), 10) ^ ((safe_div_func_uint16_t_u_u(l_382, (((l_414 != ((*l_415) = l_414)) < l_395.s4) & l_395.s7))) <= l_91)), 65535UL)), l_382)))), l_417))) && l_293.s0)) | 0x18L) , l_382) , p_50), l_418)) , p_847->g_344) > l_418) || p_50), l_395.s6)) != 0L)) & FAKE_DIVERGE(p_847->global_1_offset, get_global_id(1), 10))) , l_417) ^ FAKE_DIVERGE(p_847->group_1_offset, get_group_id(1), 10)) , p_847->g_14[0][3])) && l_419))) == l_418) < 0x0D56A32BL);
            return (*p_847->g_78);
        }
        l_422[2]--;
        l_434 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_847->g_425.wz)), 0x35370C7CL, 0L)))).wzwzxwwz)).hi, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(0x0E34A010L, (-1L))).yyxy, ((VECTOR(int32_t, 16))(p_847->g_426.xyxxxxxyyyxyxxxx)).s7456))), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x177C9B43L, (-2L))), ((VECTOR(int32_t, 16))((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 8))(((safe_mul_func_uint8_t_u_u(p_50, 0x94L)) == p_50), ((VECTOR(int32_t, 4))(0x015D426FL, ((VECTOR(int32_t, 8))(l_431.s37717511)).s0, (-1L), 1L)), p_50, 0x4FCB8B2FL, 0x4E758645L)).s2, ((*p_847->g_221) & ((l_293.s0 = GROUP_DIVERGE(2, 1)) < ((((safe_rshift_func_int8_t_s_u(p_50, 4)) , &l_93) != (p_847->g_140.s7 , &p_847->g_220[3])) ^ FAKE_DIVERGE(p_847->global_0_offset, get_global_id(0), 10)))))), 5L, (-1L), p_50, ((VECTOR(int32_t, 8))(1L)), p_50, ((VECTOR(int32_t, 2))(1L)), 0x68A2BBC0L)).sf6, ((VECTOR(int32_t, 2))(1L))))).xxxx, ((VECTOR(int32_t, 4))(0x3E3C60A5L))))))))))), ((VECTOR(int32_t, 2))(0x618590FCL)), ((VECTOR(int32_t, 4))(1L)), 0x5C6C5A72L, 7L, ((VECTOR(int32_t, 2))(0x344925A1L)), 0x2171E729L, 0x1B38A075L)).s1f, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x7D0A03BEL))))), 7L, 2L)))).xzyxwxzx)).odd)).xxwxxwwxxzxzzxwy)).s82, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))((-1L)))))).yyxyxyyx)))).s6747763701410364)).s1;
    }
    return l_435;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_137 p_847->g_95 p_847->g_134 p_847->g_108 p_847->g_34 p_847->g_155 p_847->g_13 p_847->g_26 p_847->g_87 p_847->g_6
 * writes: p_847->g_241 p_847->g_155 p_847->g_78 p_847->g_141 p_847->g_87
 */
int32_t * func_113(int32_t  p_114, uint16_t ** p_115, uint32_t  p_116, uint16_t ** p_117, struct S0 * p_847)
{ /* block id: 101 */
    VECTOR(int8_t, 2) l_234 = (VECTOR(int8_t, 2))(0x53L, 4L);
    uint64_t *l_239 = &p_847->g_96;
    uint64_t **l_240[9][7] = {{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239}};
    int16_t *l_242 = (void*)0;
    int32_t l_243 = 0x6579FFB8L;
    int32_t *l_244 = &p_847->g_155[3];
    int32_t **l_245[9] = {&p_847->g_79,&p_847->g_79,&p_847->g_79,&p_847->g_79,&p_847->g_79,&p_847->g_79,&p_847->g_79,&p_847->g_79,&p_847->g_79};
    VECTOR(uint16_t, 4) l_265 = (VECTOR(uint16_t, 4))(0x673BL, (VECTOR(uint16_t, 2))(0x673BL, 0x4475L), 0x4475L);
    int32_t *l_270 = (void*)0;
    int32_t *l_271 = &p_847->g_87;
    int32_t *l_272 = &p_847->g_87;
    int32_t *l_273[9];
    int16_t l_274 = 0x21A6L;
    int64_t l_275 = 0x0DCC88198EA67B4FL;
    int32_t l_276 = 1L;
    uint64_t l_277 = 0x1647325FCA033A93L;
    int i, j;
    for (i = 0; i < 9; i++)
        l_273[i] = &p_847->g_155[3];
    if ((p_116 <= (safe_unary_minus_func_uint32_t_u(((func_223(p_115, func_226(p_847->g_137.s0, (((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(0x53B14A4BL, ((VECTOR(int32_t, 2))(0x131B1487L, (-3L))), ((*l_244) = (p_847->g_95 != ((safe_div_func_int8_t_s_s((p_847->g_134.y && (p_847->g_95 >= p_847->g_108.s8)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_234.xxyyyyyxxxyxxxyy)).sf9ff)).z)) >= ((l_243 = (safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((p_847->g_241[0][2] = l_239) == (void*)0), p_847->g_34)), 0x5F5FCC094F27FA77L))) >= GROUP_DIVERGE(2, 1))))), ((VECTOR(int32_t, 8))(0x4F258C9EL)), 0x5E88E6AFL, 0x5E9F337EL, (-1L), 0x53EEF999L)).sc1, ((VECTOR(int32_t, 2))((-10L)))))), ((VECTOR(int32_t, 2))(0x093D39C3L)), ((VECTOR(int32_t, 2))(1L))))).lo , (-9L)), &p_847->g_221, &l_244, l_245[6], p_847), p_847) , p_114) != p_847->g_137.s7)))))
    { /* block id: 116 */
        uint64_t l_253 = 0UL;
        int32_t l_254[2];
        int64_t l_259 = 0x3306FA724ABC332EL;
        int16_t *l_268 = (void*)0;
        int16_t *l_269[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_254[i] = (-1L);
        p_847->g_87 |= (((((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), 3)) & (0x4755BD57L || (l_254[1] = l_253))) >= p_114) , l_254[1]) , (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(0x1AL, 0x30L)).hi, ((safe_add_func_uint64_t_u_u(l_259, (safe_rshift_func_int16_t_s_u((((0x4DL | (safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_847->global_1_offset, get_global_id(1), 10), 2))) , ((safe_unary_minus_func_int16_t_s((l_254[1] = ((((~((8L && (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_265.wyzywyww)).even)).w == (0x07282EA6L | (((safe_mul_func_int16_t_s_s(((p_847->g_141.s3 = (0L | p_114)) || 65535UL), 0x1CC3L)) , l_254[1]) < l_259)))) > 250UL)) ^ 1UL) <= p_847->g_26[3][0]) && (-7L))))) > p_847->g_137.s5)) < 1L), l_259)))) >= p_114))));
    }
    else
    { /* block id: 121 */
        (*l_244) = (p_847->g_87 = p_847->g_6);
    }
    (*l_244) = (-5L);
    l_277--;
    return &p_847->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_87 p_847->l_comm_values p_847->g_96 p_847->g_220
 * writes: p_847->g_96
 */
uint16_t ** func_118(int64_t  p_119, uint32_t  p_120, int32_t  p_121, uint16_t  p_122, uint32_t  p_123, struct S0 * p_847)
{ /* block id: 56 */
    int32_t *l_160 = &p_847->g_2;
    int32_t **l_159 = &l_160;
    VECTOR(int32_t, 4) l_161 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
    int32_t *l_162[10] = {&p_847->g_155[1],&p_847->g_87,&p_847->g_87,&p_847->g_87,&p_847->g_155[1],&p_847->g_155[1],&p_847->g_87,&p_847->g_87,&p_847->g_87,&p_847->g_155[1]};
    int i;
    (*l_159) = func_145(p_847->g_87, p_120, p_847->l_comm_values[(safe_mod_func_uint32_t_u_u(p_847->tid, 73))], p_847);
    p_121 = ((VECTOR(int32_t, 8))(l_161.yzzyxyyz)).s2;
    for (p_847->g_96 = (-13); (p_847->g_96 != 17); p_847->g_96 = safe_add_func_int64_t_s_s(p_847->g_96, 8))
    { /* block id: 64 */
        if ((atomic_inc(&p_847->g_atomic_input[77 * get_linear_group_id() + 26]) == 9))
        { /* block id: 66 */
            int8_t l_165[3];
            uint16_t l_213 = 1UL;
            VECTOR(uint64_t, 8) l_214 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x8CCBB781EF0CDA17L), 0x8CCBB781EF0CDA17L), 0x8CCBB781EF0CDA17L, 0UL, 0x8CCBB781EF0CDA17L);
            uint32_t l_215[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
            int32_t l_217 = 0x45F0FBA4L;
            int32_t *l_216 = &l_217;
            int32_t *l_218[1][1][10] = {{{&l_217,(void*)0,&l_217,&l_217,(void*)0,&l_217,&l_217,(void*)0,&l_217,&l_217}}};
            int8_t l_219 = 2L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_165[i] = (-2L);
            if (l_165[0])
            { /* block id: 67 */
                uint64_t l_166 = 4UL;
                int32_t l_168 = 7L;
                int32_t *l_167 = &l_168;
                int32_t *l_169 = (void*)0;
                l_169 = (l_166 , l_167);
            }
            else
            { /* block id: 69 */
                int32_t l_170 = 0L;
                int32_t l_206 = 0x1A52F8CBL;
                int32_t l_207 = 0x129FC7D4L;
                int32_t l_208 = 0L;
                int16_t l_209 = 0x6BEFL;
                uint32_t l_210 = 0x4741E1A0L;
                for (l_170 = (-11); (l_170 < 13); ++l_170)
                { /* block id: 72 */
                    VECTOR(uint8_t, 8) l_173 = (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x7EL), 0x7EL), 0x7EL, 253UL, 0x7EL);
                    uint64_t l_174 = 18446744073709551607UL;
                    int64_t l_175 = 0x4ED8ECEE319E1ED0L;
                    VECTOR(int64_t, 8) l_176 = (VECTOR(int64_t, 8))(0x4B4F7ADDD0333103L, (VECTOR(int64_t, 4))(0x4B4F7ADDD0333103L, (VECTOR(int64_t, 2))(0x4B4F7ADDD0333103L, 0x402FC24BD3771929L), 0x402FC24BD3771929L), 0x402FC24BD3771929L, 0x4B4F7ADDD0333103L, 0x402FC24BD3771929L);
                    VECTOR(int64_t, 16) l_177 = (VECTOR(int64_t, 16))(0x0B5B9D1BABB20226L, (VECTOR(int64_t, 4))(0x0B5B9D1BABB20226L, (VECTOR(int64_t, 2))(0x0B5B9D1BABB20226L, 0x0FFF6AF44C755263L), 0x0FFF6AF44C755263L), 0x0FFF6AF44C755263L, 0x0B5B9D1BABB20226L, 0x0FFF6AF44C755263L, (VECTOR(int64_t, 2))(0x0B5B9D1BABB20226L, 0x0FFF6AF44C755263L), (VECTOR(int64_t, 2))(0x0B5B9D1BABB20226L, 0x0FFF6AF44C755263L), 0x0B5B9D1BABB20226L, 0x0FFF6AF44C755263L, 0x0B5B9D1BABB20226L, 0x0FFF6AF44C755263L);
                    VECTOR(int64_t, 16) l_178 = (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x1142BF4A9CFADDF1L), 0x1142BF4A9CFADDF1L), 0x1142BF4A9CFADDF1L, 7L, 0x1142BF4A9CFADDF1L, (VECTOR(int64_t, 2))(7L, 0x1142BF4A9CFADDF1L), (VECTOR(int64_t, 2))(7L, 0x1142BF4A9CFADDF1L), 7L, 0x1142BF4A9CFADDF1L, 7L, 0x1142BF4A9CFADDF1L);
                    VECTOR(int64_t, 4) l_179 = (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), (-1L)), (-1L));
                    VECTOR(int64_t, 16) l_180 = (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 5L), 5L), 5L, 3L, 5L, (VECTOR(int64_t, 2))(3L, 5L), (VECTOR(int64_t, 2))(3L, 5L), 3L, 5L, 3L, 5L);
                    VECTOR(int64_t, 2) l_181 = (VECTOR(int64_t, 2))(0x46CF8349BCD83B64L, 0x1D9C005DB3240AD2L);
                    int32_t l_183 = (-7L);
                    int32_t *l_182 = &l_183;
                    int i;
                    l_182 = ((l_173.s1 , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(6L, (l_174 , l_175), 1L, 1L)).zyzxxwyy, ((VECTOR(int64_t, 16))((-1L), ((VECTOR(int64_t, 4))(l_176.s0037)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_177.s576a)))), 1L, 0x4532080C0C3E404CL, ((VECTOR(int64_t, 2))(l_178.s4d)), ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(l_179.xx)), (int64_t)0x71D7CB5B6F9CE4C8L))), 0x38C0F79CB047E52BL)).hi))).s40)))).yxxy, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_180.se7830cf4673ffdfa)).s3877)).even)).yyyx, ((VECTOR(int64_t, 16))(l_181.yxxyyyyxyyxxxxxx)).sc6a7))).zzzwyzzyxyyzxywz)).se) , (void*)0);
                }
                for (l_170 = (-23); (l_170 < 13); l_170++)
                { /* block id: 77 */
                    int8_t l_186 = 0x01L;
                    int32_t l_205 = 0L;
                    int32_t *l_204 = &l_205;
                    if (l_186)
                    { /* block id: 78 */
                        int32_t *l_187 = (void*)0;
                        int32_t l_189 = 0x07E7BF93L;
                        int32_t *l_188 = &l_189;
                        uint16_t l_190 = 1UL;
                        uint8_t l_191 = 0xB0L;
                        int32_t *l_192 = &l_189;
                        int32_t *l_193 = (void*)0;
                        l_188 = l_187;
                        l_191 &= l_190;
                        l_193 = l_192;
                    }
                    else
                    { /* block id: 82 */
                        int64_t l_194 = 1L;
                        uint32_t l_195 = 0xCAFA4DCBL;
                        uint8_t l_198 = 0UL;
                        VECTOR(uint64_t, 4) l_199 = (VECTOR(uint64_t, 4))(0xBD0510458D822432L, (VECTOR(uint64_t, 2))(0xBD0510458D822432L, 0xF5783FD7632D29E3L), 0xF5783FD7632D29E3L);
                        int8_t l_200 = 0x4BL;
                        uint8_t l_201[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_201[i] = 0x5DL;
                        ++l_195;
                        l_200 = (l_198 , l_199.w);
                        l_201[3]--;
                    }
                    l_204 = (void*)0;
                }
                l_207 = l_206;
                --l_210;
            }
            l_215[0] &= (l_214.s0 = l_213);
            l_218[0][0][9] = l_216;
            l_219 |= 0L;
            unsigned int result = 0;
            int l_165_i0;
            for (l_165_i0 = 0; l_165_i0 < 3; l_165_i0++) {
                result += l_165[l_165_i0];
            }
            result += l_213;
            result += l_214.s7;
            result += l_214.s6;
            result += l_214.s5;
            result += l_214.s4;
            result += l_214.s3;
            result += l_214.s2;
            result += l_214.s1;
            result += l_214.s0;
            int l_215_i0;
            for (l_215_i0 = 0; l_215_i0 < 5; l_215_i0++) {
                result += l_215[l_215_i0];
            }
            result += l_217;
            result += l_219;
            atomic_add(&p_847->g_special_values[77 * get_linear_group_id() + 26], result);
        }
        else
        { /* block id: 96 */
            (1 + 1);
        }
    }
    return p_847->g_220[3];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_145(int64_t  p_146, int32_t  p_147, int16_t  p_148, struct S0 * p_847)
{ /* block id: 57 */
    int32_t *l_149 = &p_847->g_87;
    int32_t *l_150 = (void*)0;
    int32_t *l_151 = &p_847->g_87;
    int32_t *l_152 = &p_847->g_87;
    int32_t *l_153[4][8][6] = {{{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2}},{{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2}},{{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2}},{{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2},{&p_847->g_6,(void*)0,&p_847->g_2,&p_847->g_2,&p_847->g_87,&p_847->g_2}}};
    uint32_t l_156 = 0xC9114784L;
    int i, j, k;
    ++l_156;
    return l_153[0][6][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_13
 * writes:
 */
int32_t  func_223(uint16_t ** p_224, int32_t  p_225, struct S0 * p_847)
{ /* block id: 113 */
    int32_t *l_249 = &p_847->g_2;
    int32_t **l_250 = &l_249;
    (*l_250) = l_249;
    return p_847->g_13[0][4][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_155
 * writes: p_847->g_155 p_847->g_78
 */
int32_t  func_226(uint32_t  p_227, int16_t  p_228, uint16_t ** p_229, int32_t ** p_230, int32_t ** p_231, struct S0 * p_847)
{ /* block id: 105 */
    VECTOR(int32_t, 2) l_248 = (VECTOR(int32_t, 2))(0x041C5E05L, 0x385D5EC7L);
    int i;
    for (p_228 = 0; (p_228 >= (-27)); p_228--)
    { /* block id: 108 */
        (**p_230) ^= 0x58A4AC17L;
        p_847->g_78 = &p_847->g_79;
    }
    return l_248.y;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[73];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 73; i++)
            l_comm_values[i] = 1;
    struct S0 c_848;
    struct S0* p_847 = &c_848;
    struct S0 c_849 = {
        0x171C1EC2L, // p_847->g_2
        5L, // p_847->g_6
        0x5F0EBF90350D8AF8L, // p_847->g_10
        0L, // p_847->g_12
        {{{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L}},{{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L}},{{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L}},{{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L},{1L,(-5L),0x6215169FF4CAA5D7L}}}, // p_847->g_13
        {{0x643A64E7L,0x643A64E7L,0x643A64E7L,0x643A64E7L,0x643A64E7L,0x643A64E7L,0x643A64E7L}}, // p_847->g_14
        {{65535UL,1UL,0x817BL,0xF668L,0x817BL,1UL,65535UL,4UL},{65535UL,1UL,0x817BL,0xF668L,0x817BL,1UL,65535UL,4UL},{65535UL,1UL,0x817BL,0xF668L,0x817BL,1UL,65535UL,4UL},{65535UL,1UL,0x817BL,0xF668L,0x817BL,1UL,65535UL,4UL}}, // p_847->g_26
        0L, // p_847->g_34
        (void*)0, // p_847->g_36
        &p_847->g_36, // p_847->g_35
        {0xFA81B22E0064457BL,0xFA81B22E0064457BL,0xFA81B22E0064457BL}, // p_847->g_67
        0xE7E319870F1E569BL, // p_847->g_69
        (void*)0, // p_847->g_79
        &p_847->g_79, // p_847->g_78
        1L, // p_847->g_87
        0L, // p_847->g_95
        0x174C20F6EBCB29D2L, // p_847->g_96
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-4L)), (-4L)), // p_847->g_104
        (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x6CL), 0x6CL), 0x6CL, (-10L), 0x6CL, (VECTOR(int8_t, 2))((-10L), 0x6CL), (VECTOR(int8_t, 2))((-10L), 0x6CL), (-10L), 0x6CL, (-10L), 0x6CL), // p_847->g_105
        (VECTOR(int8_t, 16))(0x49L, (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 0x02L), 0x02L), 0x02L, 0x49L, 0x02L, (VECTOR(int8_t, 2))(0x49L, 0x02L), (VECTOR(int8_t, 2))(0x49L, 0x02L), 0x49L, 0x02L, 0x49L, 0x02L), // p_847->g_108
        (VECTOR(uint64_t, 4))(0x53F41FD33E800ADBL, (VECTOR(uint64_t, 2))(0x53F41FD33E800ADBL, 0x0A64D15AFFB5E83BL), 0x0A64D15AFFB5E83BL), // p_847->g_124
        (VECTOR(int16_t, 2))(0L, 0x6FCDL), // p_847->g_134
        (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x6F0EL), 0x6F0EL), 0x6F0EL, (-7L), 0x6F0EL), // p_847->g_135
        (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x38B1L), 0x38B1L), 0x38B1L, (-4L), 0x38B1L), // p_847->g_137
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x195DL), 0x195DL), 0x195DL, 0L, 0x195DL), // p_847->g_140
        (VECTOR(int16_t, 8))(0x3EA3L, (VECTOR(int16_t, 4))(0x3EA3L, (VECTOR(int16_t, 2))(0x3EA3L, 0x37F6L), 0x37F6L), 0x37F6L, 0x3EA3L, 0x37F6L), // p_847->g_141
        8L, // p_847->g_154
        {1L,1L,1L,1L,1L}, // p_847->g_155
        &p_847->g_26[3][0], // p_847->g_221
        {&p_847->g_221,(void*)0,&p_847->g_221,(void*)0,&p_847->g_221,&p_847->g_221,(void*)0,&p_847->g_221,(void*)0,&p_847->g_221}, // p_847->g_220
        {{&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96},{&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96},{&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96},{&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96,&p_847->g_96}}, // p_847->g_241
        (VECTOR(int8_t, 16))(0x31L, (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, 1L), 1L), 1L, 0x31L, 1L, (VECTOR(int8_t, 2))(0x31L, 1L), (VECTOR(int8_t, 2))(0x31L, 1L), 0x31L, 1L, 0x31L, 1L), // p_847->g_287
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_847->g_294
        {65535UL}, // p_847->g_296
        (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x28290D2CL), 0x28290D2CL), // p_847->g_304
        {0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL,0xBCL}, // p_847->g_306
        (void*)0, // p_847->g_311
        &p_847->g_311, // p_847->g_310
        (VECTOR(uint16_t, 8))(0x96BDL, (VECTOR(uint16_t, 4))(0x96BDL, (VECTOR(uint16_t, 2))(0x96BDL, 65528UL), 65528UL), 65528UL, 0x96BDL, 65528UL), // p_847->g_315
        0x6FL, // p_847->g_338
        0x3FA4764FL, // p_847->g_344
        (void*)0, // p_847->g_356
        0L, // p_847->g_361
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5F70BEC5L), 0x5F70BEC5L), // p_847->g_425
        (VECTOR(int32_t, 2))(0x6B1A5A36L, 0L), // p_847->g_426
        (VECTOR(uint8_t, 16))(0x2DL, (VECTOR(uint8_t, 4))(0x2DL, (VECTOR(uint8_t, 2))(0x2DL, 6UL), 6UL), 6UL, 0x2DL, 6UL, (VECTOR(uint8_t, 2))(0x2DL, 6UL), (VECTOR(uint8_t, 2))(0x2DL, 6UL), 0x2DL, 6UL, 0x2DL, 6UL), // p_847->g_447
        (VECTOR(uint16_t, 2))(5UL, 0x6194L), // p_847->g_449
        (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x6508L), 0x6508L), 0x6508L, 7L, 0x6508L, (VECTOR(int16_t, 2))(7L, 0x6508L), (VECTOR(int16_t, 2))(7L, 0x6508L), 7L, 0x6508L, 7L, 0x6508L), // p_847->g_465
        (VECTOR(int8_t, 2))(0x7FL, 0x64L), // p_847->g_519
        (VECTOR(uint64_t, 8))(0x94EDF1BE95E03DFDL, (VECTOR(uint64_t, 4))(0x94EDF1BE95E03DFDL, (VECTOR(uint64_t, 2))(0x94EDF1BE95E03DFDL, 0xF34490AD3C064365L), 0xF34490AD3C064365L), 0xF34490AD3C064365L, 0x94EDF1BE95E03DFDL, 0xF34490AD3C064365L), // p_847->g_534
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xF7L), 0xF7L), 0xF7L, 0UL, 0xF7L, (VECTOR(uint8_t, 2))(0UL, 0xF7L), (VECTOR(uint8_t, 2))(0UL, 0xF7L), 0UL, 0xF7L, 0UL, 0xF7L), // p_847->g_592
        (-10L), // p_847->g_618
        (VECTOR(int32_t, 2))(0L, 0x32C879A2L), // p_847->g_728
        (VECTOR(int32_t, 8))(0x50B403B3L, (VECTOR(int32_t, 4))(0x50B403B3L, (VECTOR(int32_t, 2))(0x50B403B3L, 0L), 0L), 0L, 0x50B403B3L, 0L), // p_847->g_729
        (VECTOR(int32_t, 16))(0x6B5150B7L, (VECTOR(int32_t, 4))(0x6B5150B7L, (VECTOR(int32_t, 2))(0x6B5150B7L, 0x03AA48E6L), 0x03AA48E6L), 0x03AA48E6L, 0x6B5150B7L, 0x03AA48E6L, (VECTOR(int32_t, 2))(0x6B5150B7L, 0x03AA48E6L), (VECTOR(int32_t, 2))(0x6B5150B7L, 0x03AA48E6L), 0x6B5150B7L, 0x03AA48E6L, 0x6B5150B7L, 0x03AA48E6L), // p_847->g_835
        0, // p_847->v_collective
        sequence_input[get_global_id(0)], // p_847->global_0_offset
        sequence_input[get_global_id(1)], // p_847->global_1_offset
        sequence_input[get_global_id(2)], // p_847->global_2_offset
        sequence_input[get_local_id(0)], // p_847->local_0_offset
        sequence_input[get_local_id(1)], // p_847->local_1_offset
        sequence_input[get_local_id(2)], // p_847->local_2_offset
        sequence_input[get_group_id(0)], // p_847->group_0_offset
        sequence_input[get_group_id(1)], // p_847->group_1_offset
        sequence_input[get_group_id(2)], // p_847->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 73)), permutations[0][get_linear_local_id()])), // p_847->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_848 = c_849;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_847);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_847->g_2, "p_847->g_2", print_hash_value);
    transparent_crc(p_847->g_6, "p_847->g_6", print_hash_value);
    transparent_crc(p_847->g_10, "p_847->g_10", print_hash_value);
    transparent_crc(p_847->g_12, "p_847->g_12", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_847->g_13[i][j][k], "p_847->g_13[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_847->g_14[i][j], "p_847->g_14[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_847->g_26[i][j], "p_847->g_26[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_847->g_34, "p_847->g_34", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_847->g_67[i], "p_847->g_67[i]", print_hash_value);

    }
    transparent_crc(p_847->g_69, "p_847->g_69", print_hash_value);
    transparent_crc(p_847->g_87, "p_847->g_87", print_hash_value);
    transparent_crc(p_847->g_95, "p_847->g_95", print_hash_value);
    transparent_crc(p_847->g_96, "p_847->g_96", print_hash_value);
    transparent_crc(p_847->g_104.x, "p_847->g_104.x", print_hash_value);
    transparent_crc(p_847->g_104.y, "p_847->g_104.y", print_hash_value);
    transparent_crc(p_847->g_104.z, "p_847->g_104.z", print_hash_value);
    transparent_crc(p_847->g_104.w, "p_847->g_104.w", print_hash_value);
    transparent_crc(p_847->g_105.s0, "p_847->g_105.s0", print_hash_value);
    transparent_crc(p_847->g_105.s1, "p_847->g_105.s1", print_hash_value);
    transparent_crc(p_847->g_105.s2, "p_847->g_105.s2", print_hash_value);
    transparent_crc(p_847->g_105.s3, "p_847->g_105.s3", print_hash_value);
    transparent_crc(p_847->g_105.s4, "p_847->g_105.s4", print_hash_value);
    transparent_crc(p_847->g_105.s5, "p_847->g_105.s5", print_hash_value);
    transparent_crc(p_847->g_105.s6, "p_847->g_105.s6", print_hash_value);
    transparent_crc(p_847->g_105.s7, "p_847->g_105.s7", print_hash_value);
    transparent_crc(p_847->g_105.s8, "p_847->g_105.s8", print_hash_value);
    transparent_crc(p_847->g_105.s9, "p_847->g_105.s9", print_hash_value);
    transparent_crc(p_847->g_105.sa, "p_847->g_105.sa", print_hash_value);
    transparent_crc(p_847->g_105.sb, "p_847->g_105.sb", print_hash_value);
    transparent_crc(p_847->g_105.sc, "p_847->g_105.sc", print_hash_value);
    transparent_crc(p_847->g_105.sd, "p_847->g_105.sd", print_hash_value);
    transparent_crc(p_847->g_105.se, "p_847->g_105.se", print_hash_value);
    transparent_crc(p_847->g_105.sf, "p_847->g_105.sf", print_hash_value);
    transparent_crc(p_847->g_108.s0, "p_847->g_108.s0", print_hash_value);
    transparent_crc(p_847->g_108.s1, "p_847->g_108.s1", print_hash_value);
    transparent_crc(p_847->g_108.s2, "p_847->g_108.s2", print_hash_value);
    transparent_crc(p_847->g_108.s3, "p_847->g_108.s3", print_hash_value);
    transparent_crc(p_847->g_108.s4, "p_847->g_108.s4", print_hash_value);
    transparent_crc(p_847->g_108.s5, "p_847->g_108.s5", print_hash_value);
    transparent_crc(p_847->g_108.s6, "p_847->g_108.s6", print_hash_value);
    transparent_crc(p_847->g_108.s7, "p_847->g_108.s7", print_hash_value);
    transparent_crc(p_847->g_108.s8, "p_847->g_108.s8", print_hash_value);
    transparent_crc(p_847->g_108.s9, "p_847->g_108.s9", print_hash_value);
    transparent_crc(p_847->g_108.sa, "p_847->g_108.sa", print_hash_value);
    transparent_crc(p_847->g_108.sb, "p_847->g_108.sb", print_hash_value);
    transparent_crc(p_847->g_108.sc, "p_847->g_108.sc", print_hash_value);
    transparent_crc(p_847->g_108.sd, "p_847->g_108.sd", print_hash_value);
    transparent_crc(p_847->g_108.se, "p_847->g_108.se", print_hash_value);
    transparent_crc(p_847->g_108.sf, "p_847->g_108.sf", print_hash_value);
    transparent_crc(p_847->g_124.x, "p_847->g_124.x", print_hash_value);
    transparent_crc(p_847->g_124.y, "p_847->g_124.y", print_hash_value);
    transparent_crc(p_847->g_124.z, "p_847->g_124.z", print_hash_value);
    transparent_crc(p_847->g_124.w, "p_847->g_124.w", print_hash_value);
    transparent_crc(p_847->g_134.x, "p_847->g_134.x", print_hash_value);
    transparent_crc(p_847->g_134.y, "p_847->g_134.y", print_hash_value);
    transparent_crc(p_847->g_135.s0, "p_847->g_135.s0", print_hash_value);
    transparent_crc(p_847->g_135.s1, "p_847->g_135.s1", print_hash_value);
    transparent_crc(p_847->g_135.s2, "p_847->g_135.s2", print_hash_value);
    transparent_crc(p_847->g_135.s3, "p_847->g_135.s3", print_hash_value);
    transparent_crc(p_847->g_135.s4, "p_847->g_135.s4", print_hash_value);
    transparent_crc(p_847->g_135.s5, "p_847->g_135.s5", print_hash_value);
    transparent_crc(p_847->g_135.s6, "p_847->g_135.s6", print_hash_value);
    transparent_crc(p_847->g_135.s7, "p_847->g_135.s7", print_hash_value);
    transparent_crc(p_847->g_137.s0, "p_847->g_137.s0", print_hash_value);
    transparent_crc(p_847->g_137.s1, "p_847->g_137.s1", print_hash_value);
    transparent_crc(p_847->g_137.s2, "p_847->g_137.s2", print_hash_value);
    transparent_crc(p_847->g_137.s3, "p_847->g_137.s3", print_hash_value);
    transparent_crc(p_847->g_137.s4, "p_847->g_137.s4", print_hash_value);
    transparent_crc(p_847->g_137.s5, "p_847->g_137.s5", print_hash_value);
    transparent_crc(p_847->g_137.s6, "p_847->g_137.s6", print_hash_value);
    transparent_crc(p_847->g_137.s7, "p_847->g_137.s7", print_hash_value);
    transparent_crc(p_847->g_140.s0, "p_847->g_140.s0", print_hash_value);
    transparent_crc(p_847->g_140.s1, "p_847->g_140.s1", print_hash_value);
    transparent_crc(p_847->g_140.s2, "p_847->g_140.s2", print_hash_value);
    transparent_crc(p_847->g_140.s3, "p_847->g_140.s3", print_hash_value);
    transparent_crc(p_847->g_140.s4, "p_847->g_140.s4", print_hash_value);
    transparent_crc(p_847->g_140.s5, "p_847->g_140.s5", print_hash_value);
    transparent_crc(p_847->g_140.s6, "p_847->g_140.s6", print_hash_value);
    transparent_crc(p_847->g_140.s7, "p_847->g_140.s7", print_hash_value);
    transparent_crc(p_847->g_141.s0, "p_847->g_141.s0", print_hash_value);
    transparent_crc(p_847->g_141.s1, "p_847->g_141.s1", print_hash_value);
    transparent_crc(p_847->g_141.s2, "p_847->g_141.s2", print_hash_value);
    transparent_crc(p_847->g_141.s3, "p_847->g_141.s3", print_hash_value);
    transparent_crc(p_847->g_141.s4, "p_847->g_141.s4", print_hash_value);
    transparent_crc(p_847->g_141.s5, "p_847->g_141.s5", print_hash_value);
    transparent_crc(p_847->g_141.s6, "p_847->g_141.s6", print_hash_value);
    transparent_crc(p_847->g_141.s7, "p_847->g_141.s7", print_hash_value);
    transparent_crc(p_847->g_154, "p_847->g_154", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_847->g_155[i], "p_847->g_155[i]", print_hash_value);

    }
    transparent_crc(p_847->g_287.s0, "p_847->g_287.s0", print_hash_value);
    transparent_crc(p_847->g_287.s1, "p_847->g_287.s1", print_hash_value);
    transparent_crc(p_847->g_287.s2, "p_847->g_287.s2", print_hash_value);
    transparent_crc(p_847->g_287.s3, "p_847->g_287.s3", print_hash_value);
    transparent_crc(p_847->g_287.s4, "p_847->g_287.s4", print_hash_value);
    transparent_crc(p_847->g_287.s5, "p_847->g_287.s5", print_hash_value);
    transparent_crc(p_847->g_287.s6, "p_847->g_287.s6", print_hash_value);
    transparent_crc(p_847->g_287.s7, "p_847->g_287.s7", print_hash_value);
    transparent_crc(p_847->g_287.s8, "p_847->g_287.s8", print_hash_value);
    transparent_crc(p_847->g_287.s9, "p_847->g_287.s9", print_hash_value);
    transparent_crc(p_847->g_287.sa, "p_847->g_287.sa", print_hash_value);
    transparent_crc(p_847->g_287.sb, "p_847->g_287.sb", print_hash_value);
    transparent_crc(p_847->g_287.sc, "p_847->g_287.sc", print_hash_value);
    transparent_crc(p_847->g_287.sd, "p_847->g_287.sd", print_hash_value);
    transparent_crc(p_847->g_287.se, "p_847->g_287.se", print_hash_value);
    transparent_crc(p_847->g_287.sf, "p_847->g_287.sf", print_hash_value);
    transparent_crc(p_847->g_294.s0, "p_847->g_294.s0", print_hash_value);
    transparent_crc(p_847->g_294.s1, "p_847->g_294.s1", print_hash_value);
    transparent_crc(p_847->g_294.s2, "p_847->g_294.s2", print_hash_value);
    transparent_crc(p_847->g_294.s3, "p_847->g_294.s3", print_hash_value);
    transparent_crc(p_847->g_294.s4, "p_847->g_294.s4", print_hash_value);
    transparent_crc(p_847->g_294.s5, "p_847->g_294.s5", print_hash_value);
    transparent_crc(p_847->g_294.s6, "p_847->g_294.s6", print_hash_value);
    transparent_crc(p_847->g_294.s7, "p_847->g_294.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_847->g_296[i], "p_847->g_296[i]", print_hash_value);

    }
    transparent_crc(p_847->g_304.x, "p_847->g_304.x", print_hash_value);
    transparent_crc(p_847->g_304.y, "p_847->g_304.y", print_hash_value);
    transparent_crc(p_847->g_304.z, "p_847->g_304.z", print_hash_value);
    transparent_crc(p_847->g_304.w, "p_847->g_304.w", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_847->g_306[i], "p_847->g_306[i]", print_hash_value);

    }
    transparent_crc(p_847->g_315.s0, "p_847->g_315.s0", print_hash_value);
    transparent_crc(p_847->g_315.s1, "p_847->g_315.s1", print_hash_value);
    transparent_crc(p_847->g_315.s2, "p_847->g_315.s2", print_hash_value);
    transparent_crc(p_847->g_315.s3, "p_847->g_315.s3", print_hash_value);
    transparent_crc(p_847->g_315.s4, "p_847->g_315.s4", print_hash_value);
    transparent_crc(p_847->g_315.s5, "p_847->g_315.s5", print_hash_value);
    transparent_crc(p_847->g_315.s6, "p_847->g_315.s6", print_hash_value);
    transparent_crc(p_847->g_315.s7, "p_847->g_315.s7", print_hash_value);
    transparent_crc(p_847->g_338, "p_847->g_338", print_hash_value);
    transparent_crc(p_847->g_344, "p_847->g_344", print_hash_value);
    transparent_crc(p_847->g_361, "p_847->g_361", print_hash_value);
    transparent_crc(p_847->g_425.x, "p_847->g_425.x", print_hash_value);
    transparent_crc(p_847->g_425.y, "p_847->g_425.y", print_hash_value);
    transparent_crc(p_847->g_425.z, "p_847->g_425.z", print_hash_value);
    transparent_crc(p_847->g_425.w, "p_847->g_425.w", print_hash_value);
    transparent_crc(p_847->g_426.x, "p_847->g_426.x", print_hash_value);
    transparent_crc(p_847->g_426.y, "p_847->g_426.y", print_hash_value);
    transparent_crc(p_847->g_447.s0, "p_847->g_447.s0", print_hash_value);
    transparent_crc(p_847->g_447.s1, "p_847->g_447.s1", print_hash_value);
    transparent_crc(p_847->g_447.s2, "p_847->g_447.s2", print_hash_value);
    transparent_crc(p_847->g_447.s3, "p_847->g_447.s3", print_hash_value);
    transparent_crc(p_847->g_447.s4, "p_847->g_447.s4", print_hash_value);
    transparent_crc(p_847->g_447.s5, "p_847->g_447.s5", print_hash_value);
    transparent_crc(p_847->g_447.s6, "p_847->g_447.s6", print_hash_value);
    transparent_crc(p_847->g_447.s7, "p_847->g_447.s7", print_hash_value);
    transparent_crc(p_847->g_447.s8, "p_847->g_447.s8", print_hash_value);
    transparent_crc(p_847->g_447.s9, "p_847->g_447.s9", print_hash_value);
    transparent_crc(p_847->g_447.sa, "p_847->g_447.sa", print_hash_value);
    transparent_crc(p_847->g_447.sb, "p_847->g_447.sb", print_hash_value);
    transparent_crc(p_847->g_447.sc, "p_847->g_447.sc", print_hash_value);
    transparent_crc(p_847->g_447.sd, "p_847->g_447.sd", print_hash_value);
    transparent_crc(p_847->g_447.se, "p_847->g_447.se", print_hash_value);
    transparent_crc(p_847->g_447.sf, "p_847->g_447.sf", print_hash_value);
    transparent_crc(p_847->g_449.x, "p_847->g_449.x", print_hash_value);
    transparent_crc(p_847->g_449.y, "p_847->g_449.y", print_hash_value);
    transparent_crc(p_847->g_465.s0, "p_847->g_465.s0", print_hash_value);
    transparent_crc(p_847->g_465.s1, "p_847->g_465.s1", print_hash_value);
    transparent_crc(p_847->g_465.s2, "p_847->g_465.s2", print_hash_value);
    transparent_crc(p_847->g_465.s3, "p_847->g_465.s3", print_hash_value);
    transparent_crc(p_847->g_465.s4, "p_847->g_465.s4", print_hash_value);
    transparent_crc(p_847->g_465.s5, "p_847->g_465.s5", print_hash_value);
    transparent_crc(p_847->g_465.s6, "p_847->g_465.s6", print_hash_value);
    transparent_crc(p_847->g_465.s7, "p_847->g_465.s7", print_hash_value);
    transparent_crc(p_847->g_465.s8, "p_847->g_465.s8", print_hash_value);
    transparent_crc(p_847->g_465.s9, "p_847->g_465.s9", print_hash_value);
    transparent_crc(p_847->g_465.sa, "p_847->g_465.sa", print_hash_value);
    transparent_crc(p_847->g_465.sb, "p_847->g_465.sb", print_hash_value);
    transparent_crc(p_847->g_465.sc, "p_847->g_465.sc", print_hash_value);
    transparent_crc(p_847->g_465.sd, "p_847->g_465.sd", print_hash_value);
    transparent_crc(p_847->g_465.se, "p_847->g_465.se", print_hash_value);
    transparent_crc(p_847->g_465.sf, "p_847->g_465.sf", print_hash_value);
    transparent_crc(p_847->g_519.x, "p_847->g_519.x", print_hash_value);
    transparent_crc(p_847->g_519.y, "p_847->g_519.y", print_hash_value);
    transparent_crc(p_847->g_534.s0, "p_847->g_534.s0", print_hash_value);
    transparent_crc(p_847->g_534.s1, "p_847->g_534.s1", print_hash_value);
    transparent_crc(p_847->g_534.s2, "p_847->g_534.s2", print_hash_value);
    transparent_crc(p_847->g_534.s3, "p_847->g_534.s3", print_hash_value);
    transparent_crc(p_847->g_534.s4, "p_847->g_534.s4", print_hash_value);
    transparent_crc(p_847->g_534.s5, "p_847->g_534.s5", print_hash_value);
    transparent_crc(p_847->g_534.s6, "p_847->g_534.s6", print_hash_value);
    transparent_crc(p_847->g_534.s7, "p_847->g_534.s7", print_hash_value);
    transparent_crc(p_847->g_592.s0, "p_847->g_592.s0", print_hash_value);
    transparent_crc(p_847->g_592.s1, "p_847->g_592.s1", print_hash_value);
    transparent_crc(p_847->g_592.s2, "p_847->g_592.s2", print_hash_value);
    transparent_crc(p_847->g_592.s3, "p_847->g_592.s3", print_hash_value);
    transparent_crc(p_847->g_592.s4, "p_847->g_592.s4", print_hash_value);
    transparent_crc(p_847->g_592.s5, "p_847->g_592.s5", print_hash_value);
    transparent_crc(p_847->g_592.s6, "p_847->g_592.s6", print_hash_value);
    transparent_crc(p_847->g_592.s7, "p_847->g_592.s7", print_hash_value);
    transparent_crc(p_847->g_592.s8, "p_847->g_592.s8", print_hash_value);
    transparent_crc(p_847->g_592.s9, "p_847->g_592.s9", print_hash_value);
    transparent_crc(p_847->g_592.sa, "p_847->g_592.sa", print_hash_value);
    transparent_crc(p_847->g_592.sb, "p_847->g_592.sb", print_hash_value);
    transparent_crc(p_847->g_592.sc, "p_847->g_592.sc", print_hash_value);
    transparent_crc(p_847->g_592.sd, "p_847->g_592.sd", print_hash_value);
    transparent_crc(p_847->g_592.se, "p_847->g_592.se", print_hash_value);
    transparent_crc(p_847->g_592.sf, "p_847->g_592.sf", print_hash_value);
    transparent_crc(p_847->g_618, "p_847->g_618", print_hash_value);
    transparent_crc(p_847->g_728.x, "p_847->g_728.x", print_hash_value);
    transparent_crc(p_847->g_728.y, "p_847->g_728.y", print_hash_value);
    transparent_crc(p_847->g_729.s0, "p_847->g_729.s0", print_hash_value);
    transparent_crc(p_847->g_729.s1, "p_847->g_729.s1", print_hash_value);
    transparent_crc(p_847->g_729.s2, "p_847->g_729.s2", print_hash_value);
    transparent_crc(p_847->g_729.s3, "p_847->g_729.s3", print_hash_value);
    transparent_crc(p_847->g_729.s4, "p_847->g_729.s4", print_hash_value);
    transparent_crc(p_847->g_729.s5, "p_847->g_729.s5", print_hash_value);
    transparent_crc(p_847->g_729.s6, "p_847->g_729.s6", print_hash_value);
    transparent_crc(p_847->g_729.s7, "p_847->g_729.s7", print_hash_value);
    transparent_crc(p_847->g_835.s0, "p_847->g_835.s0", print_hash_value);
    transparent_crc(p_847->g_835.s1, "p_847->g_835.s1", print_hash_value);
    transparent_crc(p_847->g_835.s2, "p_847->g_835.s2", print_hash_value);
    transparent_crc(p_847->g_835.s3, "p_847->g_835.s3", print_hash_value);
    transparent_crc(p_847->g_835.s4, "p_847->g_835.s4", print_hash_value);
    transparent_crc(p_847->g_835.s5, "p_847->g_835.s5", print_hash_value);
    transparent_crc(p_847->g_835.s6, "p_847->g_835.s6", print_hash_value);
    transparent_crc(p_847->g_835.s7, "p_847->g_835.s7", print_hash_value);
    transparent_crc(p_847->g_835.s8, "p_847->g_835.s8", print_hash_value);
    transparent_crc(p_847->g_835.s9, "p_847->g_835.s9", print_hash_value);
    transparent_crc(p_847->g_835.sa, "p_847->g_835.sa", print_hash_value);
    transparent_crc(p_847->g_835.sb, "p_847->g_835.sb", print_hash_value);
    transparent_crc(p_847->g_835.sc, "p_847->g_835.sc", print_hash_value);
    transparent_crc(p_847->g_835.sd, "p_847->g_835.sd", print_hash_value);
    transparent_crc(p_847->g_835.se, "p_847->g_835.se", print_hash_value);
    transparent_crc(p_847->g_835.sf, "p_847->g_835.sf", print_hash_value);
    transparent_crc(p_847->v_collective, "p_847->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 77; i++)
            transparent_crc(p_847->g_special_values[i + 77 * get_linear_group_id()], "p_847->g_special_values[i + 77 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_847->l_comm_values[get_linear_local_id()], "p_847->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_847->g_comm_values[get_linear_group_id() * 73 + get_linear_local_id()], "p_847->g_comm_values[get_linear_group_id() * 73 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
