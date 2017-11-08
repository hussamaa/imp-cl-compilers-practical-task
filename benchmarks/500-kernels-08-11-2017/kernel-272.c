// --atomics 58 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 8,98,8 -l 2,14,4
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

__constant uint32_t permutations[10][112] = {
{80,89,88,86,54,61,2,34,62,83,8,92,43,82,26,7,98,85,45,75,71,81,44,73,67,48,36,47,31,58,6,94,66,23,56,52,1,109,100,11,87,102,55,49,74,14,15,69,38,90,39,68,25,16,29,9,63,95,0,103,19,108,106,101,37,84,17,104,60,22,28,40,59,97,51,99,35,64,46,72,33,5,20,110,105,70,10,21,53,111,4,107,18,57,3,32,96,24,50,13,79,27,41,42,93,30,65,77,76,91,78,12}, // permutation 0
{81,38,82,107,68,13,43,100,25,6,16,89,46,93,101,109,32,44,1,5,63,33,108,58,87,88,34,71,80,64,30,94,20,56,21,75,47,78,37,51,31,65,52,3,2,70,17,98,14,57,72,85,36,91,61,77,86,50,48,12,67,8,74,9,54,28,105,55,97,99,15,0,19,7,41,103,62,49,10,29,111,92,84,22,79,66,76,35,60,110,96,45,90,23,18,26,53,40,95,4,104,102,27,11,106,59,83,42,69,24,73,39}, // permutation 1
{35,77,98,106,25,68,90,24,16,20,109,55,73,39,104,95,44,38,36,60,53,8,89,88,86,48,28,49,47,58,103,11,0,64,102,76,1,94,10,93,65,99,45,56,80,18,78,63,61,105,62,29,97,7,43,42,22,81,75,34,51,54,13,66,2,101,79,40,87,41,82,15,67,9,12,30,3,92,46,5,27,91,4,72,37,108,26,85,52,17,110,14,107,100,32,69,70,6,50,71,57,23,96,31,33,83,19,74,21,84,59,111}, // permutation 2
{79,33,74,27,90,107,8,12,53,21,82,1,45,56,108,86,48,84,4,80,67,18,25,28,36,85,93,63,38,88,92,83,99,19,105,111,77,22,26,91,78,35,75,11,23,51,31,54,65,100,98,62,13,14,101,55,66,5,58,72,73,42,50,76,68,69,94,37,96,46,10,32,30,24,6,109,40,44,41,3,103,106,20,60,7,70,102,59,49,2,81,52,87,9,15,97,57,104,16,89,43,17,61,0,29,95,47,71,39,110,64,34}, // permutation 3
{7,65,88,12,96,72,25,68,63,58,0,89,79,77,8,30,107,108,43,9,81,82,83,55,42,70,36,73,28,54,31,91,35,104,48,53,46,78,92,1,97,61,66,62,76,14,38,10,50,106,26,67,16,27,105,60,103,111,29,17,90,21,37,47,109,19,6,87,39,85,98,45,34,32,15,57,74,80,75,94,11,23,86,93,110,101,102,69,56,4,13,52,59,18,33,40,41,22,49,3,100,84,2,95,71,51,64,20,5,24,44,99}, // permutation 4
{1,45,43,81,6,105,66,109,85,49,57,69,40,79,51,37,59,18,23,56,47,35,91,26,72,110,99,64,77,52,97,11,103,62,68,70,15,32,4,33,10,73,104,95,50,74,16,58,27,88,21,53,65,0,8,60,83,12,100,75,89,34,86,19,67,76,80,78,96,42,22,55,24,3,101,31,28,106,36,46,29,61,25,71,48,90,93,14,87,38,30,17,63,9,13,107,108,5,41,39,7,2,94,82,102,54,111,20,92,84,98,44}, // permutation 5
{3,8,104,38,80,51,90,33,5,88,89,45,79,18,101,110,67,95,4,97,24,48,20,22,78,85,13,15,44,96,53,29,16,92,42,75,93,30,106,64,73,9,11,12,65,1,91,77,7,70,43,100,56,36,81,99,86,84,60,34,74,98,14,52,83,6,26,72,109,69,2,39,47,111,50,23,102,76,55,25,37,49,82,41,57,61,66,63,103,17,0,46,28,21,27,105,58,87,108,68,35,31,62,10,32,19,54,71,94,40,59,107}, // permutation 6
{39,43,27,96,25,111,109,21,32,79,98,64,17,11,66,57,108,105,45,69,102,31,76,106,70,14,101,82,47,9,73,77,55,72,65,67,16,42,110,80,12,4,63,46,104,94,44,103,41,81,83,40,48,107,92,75,74,20,90,78,52,0,18,99,56,34,89,6,22,50,37,60,61,26,29,35,100,97,36,33,84,93,3,15,1,13,86,38,71,87,59,91,88,7,68,19,49,53,5,28,58,8,30,62,95,54,2,24,85,51,23,10}, // permutation 7
{79,51,87,25,1,111,50,36,10,37,73,97,8,43,78,110,17,11,35,103,108,15,53,72,47,60,30,9,27,5,46,101,95,2,85,71,66,89,64,6,40,57,68,49,91,106,7,86,80,45,41,18,61,52,69,44,94,75,82,62,74,14,33,42,84,63,55,16,77,100,38,0,39,58,65,13,23,107,21,93,104,34,88,19,54,98,92,32,28,105,67,99,76,31,90,109,22,29,96,20,102,70,81,3,56,83,24,26,59,12,48,4}, // permutation 8
{74,49,17,38,69,0,23,34,35,27,11,52,95,79,67,51,65,25,108,89,29,91,97,75,106,37,8,86,109,81,33,46,10,56,111,82,60,78,36,100,26,63,19,84,88,50,93,61,45,40,83,73,13,3,47,90,16,98,92,104,58,59,4,43,6,66,54,57,48,9,99,22,32,44,1,18,70,85,20,103,71,80,105,12,72,87,76,42,102,24,55,41,15,62,39,7,101,96,68,21,30,28,5,110,31,77,64,14,2,107,53,94} // permutation 9
};

// Seed: 293235386

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint64_t  f0;
   volatile int64_t  f1;
   int8_t  f2;
   int8_t * f3;
   volatile uint32_t  f4;
};

union U1 {
   volatile uint8_t  f0;
   volatile uint64_t  f1;
   uint16_t  f2;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile int32_t g_6[5][3];
    volatile int32_t g_7;
    volatile int32_t g_8;
    volatile int32_t g_9;
    int32_t g_10[9][5];
    int8_t g_110;
    int8_t *g_109;
    int8_t **g_108;
    VECTOR(uint8_t, 8) g_122;
    uint8_t g_124;
    union U1 g_127;
    volatile union U1 g_129;
    volatile union U1 *g_128;
    int32_t *g_132[4][1];
    int32_t **g_131[10];
    int64_t g_153;
    int32_t g_157;
    uint32_t g_171;
    int8_t g_181;
    union U1 *g_183;
    uint64_t g_207;
    uint64_t *g_206;
    int64_t g_209;
    union U1 g_225[4][9];
    union U1 g_227[6];
    uint32_t g_239;
    VECTOR(uint16_t, 2) g_241;
    VECTOR(uint8_t, 8) g_309;
    VECTOR(int8_t, 16) g_314;
    int16_t g_319;
    VECTOR(int32_t, 16) g_326;
    VECTOR(int64_t, 8) g_327;
    VECTOR(int64_t, 2) g_328;
    int64_t g_331;
    VECTOR(uint32_t, 4) g_360;
    VECTOR(uint8_t, 2) g_361;
    VECTOR(int32_t, 2) g_364;
    int64_t *g_366;
    VECTOR(int32_t, 4) g_378;
    VECTOR(int64_t, 2) g_401;
    VECTOR(uint8_t, 8) g_408;
    VECTOR(uint16_t, 4) g_409;
    VECTOR(uint16_t, 2) g_412;
    VECTOR(uint16_t, 4) g_414;
    int32_t g_428;
    int32_t g_431;
    uint32_t g_458;
    uint16_t g_459[7][9][4];
    uint64_t ***g_468;
    int32_t ***g_475;
    VECTOR(int64_t, 8) g_478;
    uint64_t g_481[8];
    uint32_t g_490;
    VECTOR(int32_t, 4) g_499;
    int32_t g_517;
    union U1 g_546;
    VECTOR(int32_t, 8) g_555;
    uint16_t *g_560[8][10];
    union U0 g_597[8];
    VECTOR(uint8_t, 4) g_607;
    uint8_t *g_650;
    uint8_t **g_649[9][10];
    uint8_t ***g_648[8];
    union U1 *g_660[2][7];
    volatile VECTOR(int8_t, 16) g_680;
    int32_t g_734;
    volatile VECTOR(int32_t, 8) g_735;
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
uint64_t  func_1(struct S2 * p_740);
int64_t  func_96(uint64_t  p_97, int32_t  p_98, struct S2 * p_740);
uint32_t  func_101(uint32_t  p_102, struct S2 * p_740);
int16_t  func_113(int64_t  p_114, int16_t  p_115, int32_t ** p_116, struct S2 * p_740);
int32_t  func_135(union U1 * p_136, int32_t  p_137, int32_t ** p_138, struct S2 * p_740);
union U1 * func_139(int32_t * p_140, uint8_t  p_141, uint8_t  p_142, uint64_t  p_143, uint32_t  p_144, struct S2 * p_740);
int32_t  func_163(uint32_t  p_164, int64_t  p_165, uint64_t  p_166, struct S2 * p_740);
int64_t  func_176(uint32_t * p_177, int64_t  p_178, union U1 * p_179, struct S2 * p_740);
uint64_t  func_185(int32_t  p_186, uint16_t  p_187, struct S2 * p_740);
int32_t * func_189(uint32_t  p_190, int16_t  p_191, uint64_t  p_192, uint64_t  p_193, struct S2 * p_740);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_740->g_3 p_740->g_6 p_740->g_209 p_740->g_331 p_740->g_378 p_740->g_475 p_740->g_131 p_740->g_108 p_740->g_109 p_740->g_555 p_740->g_734 p_740->g_735
 * writes: p_740->g_3 p_740->g_10 p_740->g_171 p_740->g_458 p_740->g_132 p_740->g_153 p_740->g_734 p_740->g_660
 */
uint64_t  func_1(struct S2 * p_740)
{ /* block id: 4 */
    uint32_t l_119 = 0xBB123D3EL;
    int32_t l_130 = (-1L);
    int8_t **l_662 = &p_740->g_109;
    int32_t l_664 = 1L;
    uint32_t **l_737 = (void*)0;
    for (p_740->g_3 = 0; (p_740->g_3 >= 20); p_740->g_3++)
    { /* block id: 7 */
        VECTOR(int8_t, 4) l_103 = (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0L), 0L);
        int8_t *l_663[2][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_712 = 0x0C385A6DL;
        uint16_t l_736 = 65535UL;
        union U1 *l_738 = &p_740->g_127;
        union U1 **l_739 = &p_740->g_660[0][6];
        int i, j, k;
        for (p_740->g_10[6][4] = 0; (p_740->g_10[6][4] < (-25)); --p_740->g_10[6][4])
        { /* block id: 10 */
            uint8_t *l_123 = &p_740->g_124;
            int32_t l_125[3];
            union U1 *l_126 = &p_740->g_127;
            uint64_t *l_711[3];
            int32_t *l_733 = &p_740->g_734;
            int i;
            for (i = 0; i < 3; i++)
                l_125[i] = 3L;
            for (i = 0; i < 3; i++)
                l_711[i] = (void*)0;
            if ((atomic_inc(&p_740->l_atomic_input[36]) == 4))
            { /* block id: 12 */
                VECTOR(int32_t, 2) l_13 = (VECTOR(int32_t, 2))(0x0F9ED02EL, 0x1EC0021FL);
                int8_t l_52 = 0x24L;
                int8_t *l_51 = &l_52;
                int8_t **l_50[4][2][1] = {{{&l_51},{&l_51}},{{&l_51},{&l_51}},{{&l_51},{&l_51}},{{&l_51},{&l_51}}};
                int8_t **l_53 = (void*)0;
                int32_t *l_92[7][7][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t *l_93[8][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j, k;
                if (((VECTOR(int32_t, 2))(l_13.yy)).hi)
                { /* block id: 13 */
                    int8_t l_14 = (-1L);
                    int64_t l_15 = 3L;
                    VECTOR(int32_t, 2) l_16 = (VECTOR(int32_t, 2))((-3L), 1L);
                    uint64_t l_17 = 0xB357F039D3CD3624L;
                    uint32_t l_18 = 0x5CAB4306L;
                    int i;
                    if ((l_14 , ((l_17 = (l_15 , ((VECTOR(int32_t, 8))(l_16.xxyyxxyy)).s7)) , (l_18 , 0x72AB2BC8L))))
                    { /* block id: 15 */
                        int32_t l_20 = (-10L);
                        int32_t *l_19 = &l_20;
                        int32_t *l_21[10][7] = {{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20},{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20,&l_20}};
                        uint32_t l_22 = 0xD239BE99L;
                        uint8_t l_23 = 1UL;
                        int i, j;
                        l_21[2][0] = l_19;
                        l_13.x = l_22;
                        l_16.y = 1L;
                        ++l_23;
                    }
                    else
                    { /* block id: 20 */
                        uint32_t l_26 = 0x11E69D08L;
                        int32_t l_27 = 0L;
                        int32_t l_28 = 0x3E719C29L;
                        l_16.x = (l_27 = l_26);
                        l_28 = l_28;
                    }
                }
                else
                { /* block id: 25 */
                    union U1 l_30 = {250UL};/* VOLATILE GLOBAL l_30 */
                    union U1 *l_29[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    union U1 *l_31 = (void*)0;
                    uint32_t l_32[3];
                    uint32_t l_35 = 0xA97D63F7L;
                    uint16_t l_36 = 0UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_32[i] = 1UL;
                    l_31 = l_29[4];
                    l_32[1]++;
                    if ((l_13.x = (l_36 = l_35)))
                    { /* block id: 30 */
                        uint8_t l_37 = 0x08L;
                        int32_t l_40 = 0x593B88A6L;
                        int32_t *l_39 = &l_40;
                        int32_t **l_38[10] = {&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39};
                        int32_t **l_41 = &l_39;
                        int32_t **l_42 = &l_39;
                        int32_t **l_43 = (void*)0;
                        int i;
                        l_13.x |= l_37;
                        l_43 = (l_42 = (l_41 = l_38[6]));
                    }
                    else
                    { /* block id: 35 */
                        uint32_t l_44 = 7UL;
                        VECTOR(int32_t, 4) l_47 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2830F13EL), 0x2830F13EL);
                        uint32_t l_48 = 0x111BE169L;
                        VECTOR(int32_t, 16) l_49 = (VECTOR(int32_t, 16))(0x3790EB5CL, (VECTOR(int32_t, 4))(0x3790EB5CL, (VECTOR(int32_t, 2))(0x3790EB5CL, 0L), 0L), 0L, 0x3790EB5CL, 0L, (VECTOR(int32_t, 2))(0x3790EB5CL, 0L), (VECTOR(int32_t, 2))(0x3790EB5CL, 0L), 0x3790EB5CL, 0L, 0x3790EB5CL, 0L);
                        int i;
                        l_13.y = l_44;
                        l_13.x = ((l_32[1]--) , (l_48 &= ((VECTOR(int32_t, 4))(l_47.xxzz)).x));
                        l_13.x |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_49.sd024)))).w;
                    }
                }
                l_53 = l_50[1][1][0];
                for (l_52 = (-14); (l_52 != 10); ++l_52)
                { /* block id: 46 */
                    VECTOR(int32_t, 2) l_56 = (VECTOR(int32_t, 2))(0x4E951834L, 0x57F02CAAL);
                    int8_t l_57 = 0L;
                    int i;
                    l_13.x = ((VECTOR(int32_t, 8))(l_56.xxxxyxxx)).s2;
                    l_13.y ^= (l_56.x = l_57);
                    for (l_57 = (-22); (l_57 < (-19)); l_57++)
                    { /* block id: 52 */
                        uint32_t l_60 = 4294967294UL;
                        VECTOR(int32_t, 8) l_63 = (VECTOR(int32_t, 8))(0x55EAA97CL, (VECTOR(int32_t, 4))(0x55EAA97CL, (VECTOR(int32_t, 2))(0x55EAA97CL, (-1L)), (-1L)), (-1L), 0x55EAA97CL, (-1L));
                        VECTOR(int32_t, 8) l_64 = (VECTOR(int32_t, 8))(0x42B930EEL, (VECTOR(int32_t, 4))(0x42B930EEL, (VECTOR(int32_t, 2))(0x42B930EEL, 0x7F69E9DAL), 0x7F69E9DAL), 0x7F69E9DAL, 0x42B930EEL, 0x7F69E9DAL);
                        VECTOR(int32_t, 2) l_65 = (VECTOR(int32_t, 2))(0x7F2B3A76L, (-1L));
                        uint64_t l_66 = 0xD71515025B924867L;
                        VECTOR(int32_t, 4) l_67 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                        VECTOR(int32_t, 16) l_68 = (VECTOR(int32_t, 16))(0x1BF4A26EL, (VECTOR(int32_t, 4))(0x1BF4A26EL, (VECTOR(int32_t, 2))(0x1BF4A26EL, 6L), 6L), 6L, 0x1BF4A26EL, 6L, (VECTOR(int32_t, 2))(0x1BF4A26EL, 6L), (VECTOR(int32_t, 2))(0x1BF4A26EL, 6L), 0x1BF4A26EL, 6L, 0x1BF4A26EL, 6L);
                        VECTOR(int32_t, 4) l_69 = (VECTOR(int32_t, 4))(0x1E100AA3L, (VECTOR(int32_t, 2))(0x1E100AA3L, 0x6E06DCF8L), 0x6E06DCF8L);
                        int32_t l_70 = (-1L);
                        uint32_t l_71[7];
                        VECTOR(int32_t, 16) l_72 = (VECTOR(int32_t, 16))(0x5FA932E4L, (VECTOR(int32_t, 4))(0x5FA932E4L, (VECTOR(int32_t, 2))(0x5FA932E4L, 0x0400EC86L), 0x0400EC86L), 0x0400EC86L, 0x5FA932E4L, 0x0400EC86L, (VECTOR(int32_t, 2))(0x5FA932E4L, 0x0400EC86L), (VECTOR(int32_t, 2))(0x5FA932E4L, 0x0400EC86L), 0x5FA932E4L, 0x0400EC86L, 0x5FA932E4L, 0x0400EC86L);
                        VECTOR(int32_t, 16) l_73 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 1L), 1L), 1L, 4L, 1L, (VECTOR(int32_t, 2))(4L, 1L), (VECTOR(int32_t, 2))(4L, 1L), 4L, 1L, 4L, 1L);
                        VECTOR(int32_t, 2) l_74 = (VECTOR(int32_t, 2))(0x3611122AL, 0x738BD3C8L);
                        union U1 l_75 = {2UL};/* VOLATILE GLOBAL l_75 */
                        VECTOR(int32_t, 2) l_76 = (VECTOR(int32_t, 2))(0x61A385A4L, 1L);
                        VECTOR(int32_t, 8) l_77 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L));
                        int64_t l_78 = 0x40BD20A5AE12EA52L;
                        VECTOR(int8_t, 2) l_79 = (VECTOR(int8_t, 2))(5L, 3L);
                        VECTOR(int8_t, 4) l_80 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4FL), 0x4FL);
                        uint32_t l_81[1];
                        VECTOR(uint8_t, 2) l_82 = (VECTOR(uint8_t, 2))(1UL, 0xC8L);
                        VECTOR(uint8_t, 16) l_83 = (VECTOR(uint8_t, 16))(0xA6L, (VECTOR(uint8_t, 4))(0xA6L, (VECTOR(uint8_t, 2))(0xA6L, 6UL), 6UL), 6UL, 0xA6L, 6UL, (VECTOR(uint8_t, 2))(0xA6L, 6UL), (VECTOR(uint8_t, 2))(0xA6L, 6UL), 0xA6L, 6UL, 0xA6L, 6UL);
                        uint64_t l_84 = 0xE94C56F68EFB8CC5L;
                        VECTOR(uint8_t, 2) l_85 = (VECTOR(uint8_t, 2))(0x85L, 0UL);
                        VECTOR(uint8_t, 8) l_86 = (VECTOR(uint8_t, 8))(0x0EL, (VECTOR(uint8_t, 4))(0x0EL, (VECTOR(uint8_t, 2))(0x0EL, 7UL), 7UL), 7UL, 0x0EL, 7UL);
                        VECTOR(uint8_t, 8) l_87 = (VECTOR(uint8_t, 8))(0xEDL, (VECTOR(uint8_t, 4))(0xEDL, (VECTOR(uint8_t, 2))(0xEDL, 0xFDL), 0xFDL), 0xFDL, 0xEDL, 0xFDL);
                        VECTOR(uint8_t, 2) l_88 = (VECTOR(uint8_t, 2))(0x94L, 0xB0L);
                        uint32_t l_89 = 0xF7139B6CL;
                        uint32_t l_90 = 0xE2EE972AL;
                        uint64_t l_91 = 0x7C683C3F70368F86L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_71[i] = 0x375EFDD8L;
                        for (i = 0; i < 1; i++)
                            l_81[i] = 0xCD927889L;
                        ++l_60;
                        l_13.x ^= ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(l_63.s17)).xxyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_64.s12)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_65.xy)).xxxyyxyyxyxyyxxx)).s91))), ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), (-1L))).yxxxxyyy)).s3337542313605667, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0L, 0L, 1L, 1L, l_66, 0x0213A2BBL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_67.yw)))), (-8L), 0x3FEC725EL)), (-2L), ((VECTOR(int32_t, 4))(l_68.sc96a)), 0L)).sa414, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_69.zxyx)).odd)), ((VECTOR(int32_t, 4))(0x047A7A01L, (l_70 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_71[5], 0x39E942A6L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_72.s13)).xyxx)).lo)).yxxyyxyx, ((VECTOR(int32_t, 16))(l_73.sb8780ec7d2368087)).hi))).s00)), 0x732ED884L, 3L)).z, ((VECTOR(int32_t, 8))(l_74.xyyyyyyy)), (l_75 , ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_76.xyyxxxyxyyxxyyyy)).sb176)).zyzxyyxy, ((VECTOR(int32_t, 8))(l_77.s30345031))))).s0), ((VECTOR(int32_t, 4))(0x2F2BF2F7L, l_78, 1L, 0L)))), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(9L, 0x6362L)).xxyxyxxyyxxyyxxx, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(7L, 0L)))))), 0x09C2L, 3L)).y, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(l_79.xy)), ((VECTOR(int8_t, 16))(l_80.xzxzxzzxwxyzywxx)).see))))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))((l_81[0] , ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 4))(0x4DL, ((VECTOR(uint8_t, 2))(l_82.yy)), 4UL)).yyyzwxzxzxwywxyy, ((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_83.sd1cd)).even)).yxxxxxyyyyyxxyxx, ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0x83L, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(255UL, l_84, ((VECTOR(uint8_t, 2))(0x88L, 0xA7L)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(l_85.xy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_86.s14)).yxxyyyxxyxyyxxyy)).s7c, ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_87.s7513)), ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_88.xx)), 0xECL, 246UL)).hi, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(0UL, 255UL, 0x78L, 1UL)).yxxzxzyz, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 4))((l_89 , (l_82.y ^= GROUP_DIVERGE(2, 1))), (((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_90, 1L, 0x0613L, (-1L), 0x7484L, l_91, (-6L), (-1L))).even)), ((VECTOR(int16_t, 4))(0x77D2L))))).x , 7UL), 0x6DL, 0xDBL)).wzxxzyxwyzxwyzxz, ((VECTOR(uint8_t, 16))(1UL))))).s412e)).hi)).xyyxyyyy))).s06))), ((VECTOR(uint8_t, 2))(252UL))))), 246UL, 0x39L)).s34)).yxyyyyyy))).s5044524267327254)), ((VECTOR(uint8_t, 16))(0x9AL))))).s62))).yyxx, ((VECTOR(uint8_t, 4))(0x64L))))).zzyxwzxz)).s7, ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 2))(6UL)), 0xD7L)).lo)).hi, ((VECTOR(uint8_t, 2))(0xAEL))))).yyyxxyxyxxxxyyxx)).s9dd3)))).s46, ((VECTOR(uint8_t, 2))(0xB8L))))), ((VECTOR(uint8_t, 4))(0x2BL)), 5UL)))).s7133735304477014))))))))).sa), ((VECTOR(uint8_t, 2))(0UL)), 0UL)), ((VECTOR(uint8_t, 4))(0x64L)), ((VECTOR(uint8_t, 4))(255UL))))).odd))))).odd, 0x6D2AL, (-2L))), 0x4053L, 0x3CA6L, 0x1A88L, 0x466FL)).s0246217375460275)).s574c, ((VECTOR(int16_t, 4))(0x56AAL))))).xywzzzzwxwzwyyzz)).sd791, (uint16_t)GROUP_DIVERGE(0, 1)))).yywxzzxwzzxwywzy))), ((VECTOR(int32_t, 16))(0x62C09397L))))))).s0), 0x41338C27L, (-4L))).even))).xyyy, ((VECTOR(int32_t, 4))((-7L)))))).even, ((VECTOR(int32_t, 2))(0x32DAB2D3L))))).xyxxxxxyxyxyyyxy)).hi)).s6226135101077534)).lo)).s4617211454663251))))).s90))).xxxxxxxy)))).s15)).xxyy))).y;
                    }
                }
                l_93[7][1] = l_92[6][6][2];
                unsigned int result = 0;
                result += l_13.y;
                result += l_13.x;
                result += l_52;
                atomic_add(&p_740->l_special_values[36], result);
            }
            else
            { /* block id: 59 */
                (1 + 1);
            }
            (*l_733) &= (safe_sub_func_int64_t_s_s(func_96((l_712 = (~(((safe_sub_func_uint32_t_u_u((+((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 2))(0xC9DC7405L, 0UL)).xxyxxyxyxyyyyyxy))).s2), func_101(((GROUP_DIVERGE(1, 1) != (p_740->g_6[3][1] < (((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_103.wxwyxwxz)).s1533633337707057)).s78, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))((l_664 ^= (safe_div_func_uint8_t_u_u((((((safe_mod_func_int64_t_s_s((p_740->g_108 != ((safe_mul_func_int16_t_s_s(func_113((safe_lshift_func_uint8_t_u_s(((((l_119 = FAKE_DIVERGE(p_740->global_2_offset, get_global_id(2), 10)) , ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(p_740->g_122.s55)).odd, ((*l_123) |= (p_740->l_comm_values[(safe_mod_func_uint32_t_u_u(p_740->tid, 112))] | (**p_740->g_108))))) & (l_125[0] == p_740->g_110))) == (l_126 != p_740->g_128)) , ((l_125[0] , p_740->g_10[6][4]) ^ p_740->g_124)), l_130)), p_740->g_3, p_740->g_131[9], p_740), l_125[0])) , l_662)), p_740->g_478.s4)) | l_103.y) , (*l_662)) != l_663[1][1][2]) < l_103.z), 3L))), 0x1FL, 0x0BL, 0L, 0L, ((VECTOR(int8_t, 2))(0x4BL)), 0x63L)).s11, ((VECTOR(int8_t, 2))(0x15L)))))))).yyyx, ((VECTOR(int8_t, 4))(1L))))), ((VECTOR(int8_t, 4))(8L))))).z , 1UL))) || 0x18961DB75DBFF3E1L), p_740))) , l_103.z) & l_130))), l_103.w, p_740), FAKE_DIVERGE(p_740->global_0_offset, get_global_id(0), 10)));
            (*l_733) &= ((VECTOR(int32_t, 2))(p_740->g_735.s13)).odd;
            (*l_733) |= l_736;
        }
        l_737 = (void*)0;
        (*l_739) = l_738;
    }
    return p_740->g_735.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_740->g_108 p_740->g_109 p_740->g_555
 * writes:
 */
int64_t  func_96(uint64_t  p_97, int32_t  p_98, struct S2 * p_740)
{ /* block id: 307 */
    int8_t *l_713 = &p_740->g_597[7].f2;
    int8_t *l_714 = &p_740->g_110;
    union U0 *l_721 = &p_740->g_597[7];
    union U0 *l_724 = &p_740->g_597[3];
    union U0 *l_725 = &p_740->g_597[7];
    int32_t *l_726 = (void*)0;
    int32_t *l_727 = &p_740->g_431;
    int32_t *l_728 = (void*)0;
    int32_t *l_729[6];
    uint16_t l_730 = 0xA1F6L;
    int i;
    for (i = 0; i < 6; i++)
        l_729[i] = &p_740->g_157;
    if (((l_713 = (*p_740->g_108)) == l_714))
    { /* block id: 309 */
        int32_t *l_715[6][5][5] = {{{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431}},{{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431}},{{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431}},{{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431}},{{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431}},{{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431},{&p_740->g_157,&p_740->g_3,&p_740->g_431,&p_740->g_10[1][4],&p_740->g_431}}};
        uint16_t l_716 = 0UL;
        int i, j, k;
        l_716 = (p_98 &= 0x39F2BC26L);
    }
    else
    { /* block id: 312 */
        union U0 *l_720 = &p_740->g_597[7];
        union U0 **l_719 = &l_720;
        union U0 *l_723 = (void*)0;
        union U0 **l_722 = &l_723;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_740->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 112)), permutations[(safe_mod_func_uint32_t_u_u((0x6F72L <= (0UL > ((l_724 = ((*l_722) = (l_721 = ((*l_719) = &p_740->g_597[7])))) != (l_725 = l_725)))), 10))][(safe_mod_func_uint32_t_u_u(p_740->tid, 112))]));
    }
    ++l_730;
    return p_740->g_555.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_740->g_680 p_740->g_209 p_740->g_331 p_740->g_378 p_740->g_475 p_740->g_131
 * writes: p_740->g_171 p_740->g_458 p_740->g_132 p_740->g_153
 */
uint32_t  func_101(uint32_t  p_102, struct S2 * p_740)
{ /* block id: 281 */
    int32_t l_679 = 1L;
    uint16_t l_687[8][8][4] = {{{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L}},{{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L}},{{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L}},{{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L}},{{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L}},{{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L}},{{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L}},{{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L},{0x2D2AL,65534UL,9UL,0xDCF7L}}};
    int64_t *l_694 = &p_740->g_153;
    int32_t l_699 = 0x4B174F06L;
    int32_t l_700 = (-10L);
    int32_t l_701 = (-8L);
    int32_t l_702[6][10][4] = {{{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L}},{{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L}},{{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L}},{{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L}},{{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L}},{{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L},{0x3355F211L,0x3355F211L,0x3355F211L,0x3355F211L}}};
    int16_t l_703[8] = {1L,7L,1L,1L,7L,1L,1L,7L};
    uint32_t l_704 = 3UL;
    VECTOR(int32_t, 2) l_707 = (VECTOR(int32_t, 2))(0x200D3687L, 0x69D1B0E6L);
    int i, j, k;
    if (p_102)
    { /* block id: 282 */
        uint64_t l_667[10] = {18446744073709551615UL,0x69D4D30F5ED82859L,0xE60DCF7B332F6751L,0x69D4D30F5ED82859L,18446744073709551615UL,18446744073709551615UL,0x69D4D30F5ED82859L,0xE60DCF7B332F6751L,0x69D4D30F5ED82859L,18446744073709551615UL};
        uint16_t *l_670 = &p_740->g_546.f2;
        uint16_t *l_671[10];
        int32_t l_672 = 0L;
        uint32_t *l_681 = &p_740->g_171;
        uint32_t *l_682 = &p_740->g_458;
        uint32_t *l_684 = &p_740->g_490;
        uint32_t **l_683[8][10][2] = {{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}}};
        int32_t l_688[3];
        int32_t l_689 = 0x2F01ED9BL;
        int32_t *l_690 = (void*)0;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_671[i] = &p_740->g_459[3][6][0];
        for (i = 0; i < 3; i++)
            l_688[i] = 0x75F9016CL;
        l_689 = (l_688[2] = (safe_rshift_func_uint16_t_u_u(l_667[2], ((safe_add_func_int8_t_s_s((((((l_672 ^= 1UL) ^ (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(l_679, (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_740->g_680.sf0f68aa2)).s63)).lo & ((((*l_682) = ((*l_681) = p_740->g_209)) , p_740->g_331) < ((((VECTOR(uint32_t, 2))(0x644B9DE3L, 4294967287UL)).lo , l_683[1][3][1]) == &l_684))))), p_740->g_378.y)), (safe_mod_func_uint8_t_u_u(p_102, 4UL))))) > p_102) > l_667[7]) & l_687[7][6][1]), p_102)) , 0x2357L))));
        l_690 = ((**p_740->g_475) = &l_689);
    }
    else
    { /* block id: 290 */
        uint32_t l_691 = 0x95DCB508L;
        return l_691;
    }
    if ((((safe_div_func_uint32_t_u_u(0UL, (((*l_694) = ((l_679 <= l_679) , p_102)) || 5UL))) == l_679) <= l_687[0][6][0]))
    { /* block id: 294 */
        int32_t *l_695 = (void*)0;
        int32_t *l_696 = &p_740->g_157;
        int32_t *l_697 = (void*)0;
        int32_t *l_698[3][9][8] = {{{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0}},{{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0}},{{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0},{&l_679,(void*)0,&p_740->g_10[3][0],&p_740->g_10[6][4],&p_740->g_10[6][4],&p_740->g_10[6][4],(void*)0,(void*)0}}};
        int i, j, k;
        --l_704;
        l_699 = (l_702[2][7][3] = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_707.yyyxyxyy)).even)).x);
    }
    else
    { /* block id: 298 */
        uint32_t l_710 = 4294967295UL;
        for (l_699 = 5; (l_699 < (-24)); --l_699)
        { /* block id: 301 */
            if (l_710)
                break;
        }
    }
    return p_102;
}


/* ------------------------------------------ */
/* 
 * reads : p_740->g_110 p_740->l_comm_values p_740->g_153 p_740->g_3 p_740->g_183 p_740->g_122 p_740->g_206 p_740->g_108 p_740->g_109 p_740->g_209 p_740->g_124 p_740->g_157 p_740->g_207 p_740->g_10 p_740->g_128 p_740->g_241 p_740->g_181 p_740->g_171 p_740->g_309 p_740->g_314 p_740->g_326 p_740->g_327 p_740->g_328 p_740->g_comm_values p_740->g_360 p_740->g_361 p_740->g_364 permutations p_740->g_378 p_740->g_127.f2 p_740->g_401 p_740->g_408 p_740->g_409 p_740->g_412 p_740->g_414 p_740->g_132 p_740->g_428 p_740->g_431 p_740->g_468 p_740->g_478 p_740->g_319 p_740->g_331 p_740->g_499 p_740->g_555 p_740->g_648 p_740->g_517 p_740->g_475 p_740->g_131 p_740->g_660
 * writes: p_740->g_110 p_740->g_124 p_740->g_122 p_740->g_157 p_740->g_171 p_740->g_181 p_740->g_183 p_740->g_209 p_740->g_132 p_740->g_207 p_740->g_239 p_740->g_153 p_740->g_241 p_740->g_319 p_740->g_331 p_740->g_366 p_740->g_127.f2 p_740->g_409 p_740->g_314 p_740->g_458 p_740->g_459 p_740->g_475 p_740->g_360 p_740->g_481 p_740->g_490 p_740->g_560 p_740->g_327 p_740->g_597.f2
 */
int16_t  func_113(int64_t  p_114, int16_t  p_115, int32_t ** p_116, struct S2 * p_740)
{ /* block id: 64 */
    int32_t *l_145 = (void*)0;
    VECTOR(int8_t, 2) l_152 = (VECTOR(int8_t, 2))(0x78L, 0x38L);
    VECTOR(uint8_t, 8) l_287 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 246UL), 246UL), 246UL, 1UL, 246UL);
    VECTOR(int8_t, 16) l_313 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int8_t, 2))((-1L), 0L), (VECTOR(int8_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    uint32_t l_322 = 0xBD8DC3DEL;
    int32_t l_346 = 0x441B56ABL;
    int32_t l_353 = 1L;
    int32_t l_355 = 1L;
    uint64_t l_356 = 0UL;
    VECTOR(int32_t, 2) l_377 = (VECTOR(int32_t, 2))(0L, 0L);
    uint32_t l_395 = 1UL;
    VECTOR(uint16_t, 2) l_413 = (VECTOR(uint16_t, 2))(0x211BL, 65533UL);
    uint64_t **l_427 = (void*)0;
    VECTOR(int32_t, 4) l_462 = (VECTOR(int32_t, 4))(0x1C41F314L, (VECTOR(int32_t, 2))(0x1C41F314L, 0x6F9C6A42L), 0x6F9C6A42L);
    VECTOR(uint8_t, 16) l_495 = (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 1UL), 1UL), 1UL, 250UL, 1UL, (VECTOR(uint8_t, 2))(250UL, 1UL), (VECTOR(uint8_t, 2))(250UL, 1UL), 250UL, 1UL, 250UL, 1UL);
    int32_t l_521 = 0x21F5A3AFL;
    uint8_t l_539 = 255UL;
    int16_t *l_587 = &p_740->g_319;
    uint16_t *l_591 = &p_740->g_127.f2;
    uint32_t l_602 = 0x2D18D467L;
    int8_t **l_612 = &p_740->g_109;
    uint32_t l_647 = 4294967287UL;
    uint32_t l_657[10] = {0x81914CDCL,0x81914CDCL,0x81914CDCL,0x81914CDCL,0x81914CDCL,0x81914CDCL,0x81914CDCL,0x81914CDCL,0x81914CDCL,0x81914CDCL};
    union U1 **l_661 = &p_740->g_183;
    int i;
    for (p_740->g_110 = 0; (p_740->g_110 < (-27)); p_740->g_110--)
    { /* block id: 67 */
        VECTOR(uint32_t, 8) l_150 = (VECTOR(uint32_t, 8))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x253F6F19L), 0x253F6F19L), 0x253F6F19L, 4294967290UL, 0x253F6F19L);
        VECTOR(uint32_t, 2) l_151 = (VECTOR(uint32_t, 2))(0x00F40CEAL, 0xF9118A8FL);
        int32_t l_154 = 0x67BDB8DDL;
        uint8_t *l_155 = &p_740->g_124;
        uint64_t *l_156 = (void*)0;
        int32_t l_252 = (-1L);
        int32_t l_253 = 0x3B12C97CL;
        int32_t **l_254 = (void*)0;
        int32_t *l_306 = &l_253;
        VECTOR(uint8_t, 2) l_310 = (VECTOR(uint8_t, 2))(0x02L, 0UL);
        uint8_t l_359[8] = {0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L};
        int8_t **l_365 = (void*)0;
        VECTOR(int16_t, 16) l_380 = (VECTOR(int16_t, 16))(0x4D01L, (VECTOR(int16_t, 4))(0x4D01L, (VECTOR(int16_t, 2))(0x4D01L, 0x44DEL), 0x44DEL), 0x44DEL, 0x4D01L, 0x44DEL, (VECTOR(int16_t, 2))(0x4D01L, 0x44DEL), (VECTOR(int16_t, 2))(0x4D01L, 0x44DEL), 0x4D01L, 0x44DEL, 0x4D01L, 0x44DEL);
        uint64_t ***l_470 = &l_427;
        uint64_t ****l_482 = (void*)0;
        int32_t l_523 = 1L;
        int32_t l_524 = 1L;
        int32_t l_525[2];
        int32_t l_529 = 2L;
        int32_t l_530 = 0x5FA9BB6AL;
        int32_t l_531 = 0x5FC30F80L;
        int32_t l_535[4];
        VECTOR(int64_t, 8) l_543 = (VECTOR(int64_t, 8))(0x318F779E235E40FCL, (VECTOR(int64_t, 4))(0x318F779E235E40FCL, (VECTOR(int64_t, 2))(0x318F779E235E40FCL, 0x56ABA3C71D548ADFL), 0x56ABA3C71D548ADFL), 0x56ABA3C71D548ADFL, 0x318F779E235E40FCL, 0x56ABA3C71D548ADFL);
        union U1 *l_545[3];
        union U0 *l_596 = &p_740->g_597[7];
        int8_t *l_634 = (void*)0;
        int8_t *l_635 = (void*)0;
        int8_t *l_636 = &p_740->g_181;
        int8_t *l_637 = &p_740->g_597[7].f2;
        int16_t **l_642 = &l_587;
        int64_t *l_652 = &p_740->g_153;
        int64_t **l_651[1][5][2] = {{{(void*)0,&l_652},{(void*)0,&l_652},{(void*)0,&l_652},{(void*)0,&l_652},{(void*)0,&l_652}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_525[i] = 0x06BAE47DL;
        for (i = 0; i < 4; i++)
            l_535[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_545[i] = &p_740->g_546;
        if (func_135(func_139(l_145, (safe_rshift_func_uint8_t_u_u((l_145 != l_145), 5)), (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(l_150.s15236276)).odd, ((VECTOR(uint32_t, 8))(l_151.yyxxxyxx)).odd))).odd)).lo, 0x635EDB8BL)), (p_740->g_157 = (p_740->l_comm_values[(safe_mod_func_uint32_t_u_u(p_740->tid, 112))] , (GROUP_DIVERGE(1, 1) != (((VECTOR(int8_t, 4))(l_152.yxyy)).y != (p_740->g_122.s2 = ((*l_155) = (l_154 |= p_740->g_153))))))), p_115, p_740), (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((FAKE_DIVERGE(p_740->global_1_offset, get_global_id(1), 10) ^ (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((0x51562EF1L <= l_252), 6)), l_151.y))) & p_115), l_253)), 0x3EL)), l_254, p_740))
        { /* block id: 118 */
            VECTOR(uint16_t, 4) l_288 = (VECTOR(uint16_t, 4))(0xFB57L, (VECTOR(uint16_t, 2))(0xFB57L, 7UL), 7UL);
            int32_t l_292 = 0x3A4B218AL;
            VECTOR(int32_t, 2) l_303 = (VECTOR(int32_t, 2))((-6L), 0x42A95AF8L);
            VECTOR(int8_t, 16) l_312 = (VECTOR(int8_t, 16))(0x3FL, (VECTOR(int8_t, 4))(0x3FL, (VECTOR(int8_t, 2))(0x3FL, 0x68L), 0x68L), 0x68L, 0x3FL, 0x68L, (VECTOR(int8_t, 2))(0x3FL, 0x68L), (VECTOR(int8_t, 2))(0x3FL, 0x68L), 0x3FL, 0x68L, 0x3FL, 0x68L);
            VECTOR(uint64_t, 4) l_372 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x454593A8B6896B48L), 0x454593A8B6896B48L);
            int32_t ***l_383 = (void*)0;
            int32_t **l_384 = &p_740->g_132[1][0];
            uint16_t *l_387 = (void*)0;
            uint16_t *l_388 = &p_740->g_127.f2;
            uint16_t *l_389 = (void*)0;
            uint16_t *l_390 = (void*)0;
            uint16_t *l_391[5][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            for (p_740->g_153 = 0; (p_740->g_153 == 0); p_740->g_153 = safe_add_func_int8_t_s_s(p_740->g_153, 1))
            { /* block id: 121 */
                VECTOR(int8_t, 2) l_278 = (VECTOR(int8_t, 2))(0x27L, 0L);
                uint16_t *l_289 = (void*)0;
                uint16_t *l_290 = &p_740->g_225[2][5].f2;
                uint16_t *l_291 = &p_740->g_225[2][5].f2;
                uint16_t *l_293[7][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                uint32_t *l_300 = &p_740->g_171;
                int i, j, k;
                if ((atomic_inc(&p_740->l_atomic_input[33]) == 8))
                { /* block id: 123 */
                    VECTOR(uint16_t, 16) l_268 = (VECTOR(uint16_t, 16))(0xECB8L, (VECTOR(uint16_t, 4))(0xECB8L, (VECTOR(uint16_t, 2))(0xECB8L, 0x798AL), 0x798AL), 0x798AL, 0xECB8L, 0x798AL, (VECTOR(uint16_t, 2))(0xECB8L, 0x798AL), (VECTOR(uint16_t, 2))(0xECB8L, 0x798AL), 0xECB8L, 0x798AL, 0xECB8L, 0x798AL);
                    VECTOR(uint16_t, 8) l_269 = (VECTOR(uint16_t, 8))(0x3E2FL, (VECTOR(uint16_t, 4))(0x3E2FL, (VECTOR(uint16_t, 2))(0x3E2FL, 0xA407L), 0xA407L), 0xA407L, 0x3E2FL, 0xA407L);
                    int32_t *l_270 = (void*)0;
                    int32_t l_272 = 0x2223F371L;
                    int32_t *l_271 = &l_272;
                    int32_t *l_273 = &l_272;
                    int32_t *l_274[10];
                    int32_t *l_275 = &l_272;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_274[i] = &l_272;
                    l_275 = (l_274[8] = (l_273 = (((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_268.s507814e99e3b8823)))).sd4, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_269.s0020)).wxxxxzzxzzxzyyzw)).sc6))))).odd , (l_271 = l_270))));
                    unsigned int result = 0;
                    result += l_268.sf;
                    result += l_268.se;
                    result += l_268.sd;
                    result += l_268.sc;
                    result += l_268.sb;
                    result += l_268.sa;
                    result += l_268.s9;
                    result += l_268.s8;
                    result += l_268.s7;
                    result += l_268.s6;
                    result += l_268.s5;
                    result += l_268.s4;
                    result += l_268.s3;
                    result += l_268.s2;
                    result += l_268.s1;
                    result += l_268.s0;
                    result += l_269.s7;
                    result += l_269.s6;
                    result += l_269.s5;
                    result += l_269.s4;
                    result += l_269.s3;
                    result += l_269.s2;
                    result += l_269.s1;
                    result += l_269.s0;
                    result += l_272;
                    atomic_add(&p_740->l_special_values[33], result);
                }
                else
                { /* block id: 128 */
                    (1 + 1);
                }
                (*p_116) = func_189(p_740->g_124, (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_278.xxxy)).y, ((*p_740->g_206) && (FAKE_DIVERGE(p_740->group_2_offset, get_group_id(2), 10) , ((safe_mod_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(0, 1) > 0x23AB086092011231L), 0)) , (safe_div_func_uint64_t_u_u((((p_114 < (GROUP_DIVERGE(2, 1) && (p_740->g_209 ^ 0x4B83D750L))) && l_278.x) || ((safe_add_func_int32_t_s_s((p_740->g_181 , (((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(l_287.s2073)).even, ((VECTOR(uint8_t, 2))(0UL, 255UL))))).yyxy, ((VECTOR(uint16_t, 8))(0x724CL, ((VECTOR(uint16_t, 4))(l_288.zzyz)), ((--p_740->g_241.y) != (((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_740->local_2_offset, get_local_id(2), 10), p_115)), p_114)) , l_145) != l_300)), 65533UL, 0UL)).odd, ((VECTOR(uint16_t, 4))(0x8750L))))).y , l_292)), p_740->g_209)) <= p_115)), (-6L)))) , p_740->g_241.x) , p_115), p_115)) , (*p_740->g_206)))))), l_288.y, (*p_740->g_206), p_740);
            }
            for (p_740->g_153 = (-19); (p_740->g_153 != (-6)); ++p_740->g_153)
            { /* block id: 136 */
                uint64_t l_305[6][1][10];
                VECTOR(uint8_t, 16) l_308 = (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 249UL), 249UL), 249UL, 4UL, 249UL, (VECTOR(uint8_t, 2))(4UL, 249UL), (VECTOR(uint8_t, 2))(4UL, 249UL), 4UL, 249UL, 4UL, 249UL);
                VECTOR(uint8_t, 16) l_311 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0xA4L), 0xA4L), 0xA4L, 6UL, 0xA4L, (VECTOR(uint8_t, 2))(6UL, 0xA4L), (VECTOR(uint8_t, 2))(6UL, 0xA4L), 6UL, 0xA4L, 6UL, 0xA4L);
                int32_t *l_315 = &l_252;
                uint32_t *l_316[3][9][8] = {{{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171}},{{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171}},{{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171},{&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171,&p_740->g_171}}};
                int8_t *l_317[7];
                int32_t l_347 = 0x673F345EL;
                int32_t l_349 = (-10L);
                int32_t l_350[10] = {(-1L),0x152BCCA4L,0L,0x152BCCA4L,(-1L),(-1L),0x152BCCA4L,0L,0x152BCCA4L,(-1L)};
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 10; k++)
                            l_305[i][j][k] = 18446744073709551607UL;
                    }
                }
                for (i = 0; i < 7; i++)
                    l_317[i] = (void*)0;
                if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_303.yyxyxyxxyxyyxyxy)))))).s82)).lo)
                { /* block id: 137 */
                    uint32_t l_304[8] = {0x9E5B1991L,0x9E5B1991L,0x9E5B1991L,0x9E5B1991L,0x9E5B1991L,0x9E5B1991L,0x9E5B1991L,0x9E5B1991L};
                    int i;
                    l_306 = (p_115 , func_189(l_304[3], p_740->g_171, l_305[2][0][6], (~(*p_740->g_206)), p_740));
                    if (l_304[1])
                        continue;
                }
                else
                { /* block id: 140 */
                    int32_t l_307 = 2L;
                    if (p_115)
                        break;
                    if (l_307)
                        continue;
                    return l_305[2][0][6];
                }
                l_315 = func_189(p_114, (p_115 , (p_740->g_319 = ((p_114 , (~((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(l_308.s7766)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(p_740->g_309.s30)).yyyyxxyy, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(l_310.xxxyxxyx)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_311.s9889c965)).odd)), ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_312.s2f)).yyxyxxxx)))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_313.sbd)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(p_740->g_314.sffcf7b3a)), ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(0x3DL, 3L)).yyxyyyyy, ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(((p_740->g_181 = ((l_303.y = (((*l_306) < ((*l_315) = l_303.x)) <= p_740->g_209)) , (p_740->g_241.x , (**p_740->g_108)))) | (l_292 = ((safe_unary_minus_func_int64_t_s(l_288.z)) == p_115))), ((VECTOR(int8_t, 2))(0x73L)), 1L)).zwxyyzywxwyzyzzx, (int8_t)l_288.z))).sbc42, ((VECTOR(int8_t, 4))((-8L)))))), 0L, ((VECTOR(int8_t, 8))(0x57L)), 0x2AL, 0x72L, 1L)))), ((VECTOR(int8_t, 16))(0x3DL))))).odd)))))).s64, ((VECTOR(int8_t, 2))(0x1EL))))), 0x5DL, (-1L), 0x6DL, 0x5AL))))).odd))).wzxzzwzx, ((VECTOR(uint8_t, 8))(255UL))))).s6751373200634422)).hi, (uint8_t)FAKE_DIVERGE(p_740->group_0_offset, get_group_id(0), 10), (uint8_t)p_115))).odd)), 1UL, ((VECTOR(uint8_t, 2))(0xD7L)), 0x31L, 0UL, 255UL, ((VECTOR(uint8_t, 4))(0xF1L)), 1UL)).s78)).xxxxyyyy)).hi))).odd)).even)) , (*l_315)))), l_288.y, p_114, p_740);
                if (l_303.x)
                { /* block id: 151 */
                    l_322 = (safe_add_func_uint8_t_u_u((&p_740->g_109 != (void*)0), GROUP_DIVERGE(1, 1)));
                    return p_740->g_314.s2;
                }
                else
                { /* block id: 154 */
                    VECTOR(int8_t, 16) l_329 = (VECTOR(int8_t, 16))(0x43L, (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, (-1L)), (-1L)), (-1L), 0x43L, (-1L), (VECTOR(int8_t, 2))(0x43L, (-1L)), (VECTOR(int8_t, 2))(0x43L, (-1L)), 0x43L, (-1L), 0x43L, (-1L));
                    int64_t *l_330 = &p_740->g_331;
                    uint32_t *l_338[1][5][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    VECTOR(uint64_t, 2) l_341 = (VECTOR(uint64_t, 2))(0UL, 0UL);
                    int32_t l_348 = 2L;
                    int32_t l_351 = 0x447E968CL;
                    int32_t l_352 = (-10L);
                    int32_t l_354[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_354[i] = 0x799BA1C6L;
                    (*p_116) = func_189(((((0x9FL & ((safe_unary_minus_func_int64_t_s((safe_sub_func_int64_t_s_s(((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0x5319D9DAL)), (*l_306), 0x1BF53A79L, ((VECTOR(int32_t, 2))(p_740->g_326.s7a)), 0L, 1L)).even)).y || l_312.s9) != (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(p_740->g_327.s10)), ((VECTOR(int64_t, 4))(p_740->g_328.xxxy)), (p_740->g_comm_values[p_740->tid] ^ ((VECTOR(int8_t, 8))(l_329.s26eb6890)).s4), 1L, (-10L), ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))((-10L), (((*l_330) = ((l_312.s6 > GROUP_DIVERGE(1, 1)) , 1L)) , (((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((l_303.y ^= (safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((p_740->g_327.s4 , (((safe_add_func_int16_t_s_s(0x6E67L, (p_115 == FAKE_DIVERGE(p_740->group_1_offset, get_group_id(1), 10)))) , (**p_740->g_108)) | p_740->g_326.s5)) == 0xB984F1DCD4565DFAL), 0xC0671A72BC70C73CL)), (*p_740->g_109)))) & GROUP_DIVERGE(1, 1)), ((VECTOR(uint8_t, 2))(0x01L)), 254UL)).hi)).yxxx, ((VECTOR(uint8_t, 4))(0xC3L))))).xxxyzwxz)), ((VECTOR(uint8_t, 8))(0x86L)), ((VECTOR(uint8_t, 8))(1UL))))).s2 || 0x3EL)), p_115, 0x1A66F6F8B31B9CCEL, 0x15219D6C11575514L, ((VECTOR(int64_t, 2))(3L)), 0L)).s33, ((VECTOR(int64_t, 2))(0x64385F96040AAB1CL))))), (-7L), ((VECTOR(int64_t, 4))(0x126B870DFCCB5B1CL)))).sf || (-7L))), (*p_740->g_206))))) , p_115)) || 0x3A88B05C5E7CFC8EL) < p_740->g_122.s7) || p_115), l_288.y, l_329.sd, p_115, p_740);
                    if ((safe_div_func_int16_t_s_s(((0UL != 7UL) == ((VECTOR(uint64_t, 2))(l_341.xy)).lo), (FAKE_DIVERGE(p_740->local_2_offset, get_local_id(2), 10) , 0xCFE3L))))
                    { /* block id: 158 */
                        int32_t *l_342 = (void*)0;
                        int32_t *l_343 = &l_154;
                        int32_t *l_344 = &l_292;
                        int32_t *l_345[10][3][4] = {{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}},{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}},{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}},{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}},{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}},{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}},{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}},{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}},{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}},{{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3},{&l_253,(void*)0,&p_740->g_157,&p_740->g_3}}};
                        int i, j, k;
                        ++l_356;
                        (*l_343) = ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-5L), 1L)).xxyxxyyx)), (int32_t)((*l_344) = 1L), (int32_t)l_359[0]))).s5;
                    }
                    else
                    { /* block id: 162 */
                        int32_t l_373[6][3][4] = {{{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L}},{{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L}},{{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L}},{{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L}},{{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L}},{{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L},{0x1E340C84L,0x75C397FDL,0x593394B5L,0L}}};
                        int32_t *l_374[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_740->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 112)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(p_740->g_360.zyzw)).w, 10))][(safe_mod_func_uint32_t_u_u(p_740->tid, 112))]));
                        l_373[1][1][0] |= (((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x50L, 0xCDL)), 0x43L, 255UL)).even, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(0x40L, 7UL)), ((VECTOR(uint8_t, 16))(p_740->g_361.yxyxxxxxxyxyyxyy)).sa0, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((p_115 && ((l_303.x = ((p_740->g_366 = ((safe_sub_func_int8_t_s_s((((((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 4))(p_740->g_364.yyxx))))).w , l_365) == l_365) >= (*l_306)), l_341.y)) , &p_740->g_331)) == (void*)0)) & (safe_unary_minus_func_uint8_t_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))((permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(p_740->g_360.zyzw)).w, 10))][(safe_mod_func_uint32_t_u_u(p_740->tid, 112))] | ((((safe_mod_func_uint32_t_u_u(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_372.wxwyyxxx)).s17)).yyyy)).xwxzwxyzyzzwyyxw)).s5 | ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))(0x39D4602FL, (p_740->g_122.s2 || p_115), 0x7CD2FF40L, 0L)).hi, ((VECTOR(uint32_t, 2))(4294967288UL))))), ((VECTOR(int64_t, 2))(8L)), ((VECTOR(int64_t, 2))(0x11DBFDB99722FF23L))))).even) == (-1L)), p_740->g_122.s5)) , GROUP_DIVERGE(1, 1)) || 0L) || 0x9F12L)), ((VECTOR(uint8_t, 2))(255UL)), 249UL, 0x0BL, 250UL, 251UL, 0x7FL)).s2, 0x0EL)))))), ((VECTOR(uint8_t, 2))(0xC1L)), ((VECTOR(uint8_t, 8))(0x69L)), ((VECTOR(uint8_t, 4))(9UL)), 0x9FL)).lo)).s15))).xxyyxyyxyyyxxyxx, ((VECTOR(uint8_t, 16))(0xC5L))))).s35))).odd > 0x69L);
                        l_154 = l_351;
                    }
                }
            }
            l_353 |= ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))((((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_377.xxxxxxxy)).s20, ((VECTOR(int32_t, 2))(0x13DF9AECL, 0x400230EFL))))).yxxy, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_740->g_378.yz)))).xxyx, ((VECTOR(int32_t, 2))(0L, 0x193891E9L)).yyxy))).wzzxxxyy, ((VECTOR(int32_t, 16))(((safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((-10L), 0x19FEL, ((VECTOR(int16_t, 2))(l_380.s31)), 0x2C90L, (GROUP_DIVERGE(0, 1) , ((!((safe_add_func_uint64_t_u_u(((*p_740->g_206) ^= (*l_306)), p_114)) | ((l_384 = p_116) != ((safe_mul_func_int8_t_s_s((&p_740->g_239 == (void*)0), ((l_252 &= (*l_306)) & p_115))) , &p_740->g_132[3][0])))) , p_115)), (-1L), 0x6075L)))).s2)) , 0x221D2B2EL), l_292, (-1L), (-1L), 0x4BC31C00L, ((VECTOR(int32_t, 8))(0x2158FE8BL)), 0x607F3794L, (-5L), 6L)).lo))).lo))).z >= 0x00BE3A5EL), 248UL, 1UL, 7UL)).w, 0xAFL)) == p_115);
        }
        else
        { /* block id: 177 */
            VECTOR(int16_t, 16) l_398 = (VECTOR(int16_t, 16))(0x0A9DL, (VECTOR(int16_t, 4))(0x0A9DL, (VECTOR(int16_t, 2))(0x0A9DL, (-1L)), (-1L)), (-1L), 0x0A9DL, (-1L), (VECTOR(int16_t, 2))(0x0A9DL, (-1L)), (VECTOR(int16_t, 2))(0x0A9DL, (-1L)), 0x0A9DL, (-1L), 0x0A9DL, (-1L));
            int32_t *l_429 = &l_346;
            int32_t *l_430[1][4][8] = {{{(void*)0,&l_252,&l_252,&p_740->g_10[4][2],&l_252,&l_252,(void*)0,(void*)0},{(void*)0,&l_252,&l_252,&p_740->g_10[4][2],&l_252,&l_252,(void*)0,(void*)0},{(void*)0,&l_252,&l_252,&p_740->g_10[4][2],&l_252,&l_252,(void*)0,(void*)0},{(void*)0,&l_252,&l_252,&p_740->g_10[4][2],&l_252,&l_252,(void*)0,(void*)0}}};
            int8_t l_449 = 0x24L;
            int8_t l_496 = 0x17L;
            uint64_t l_506 = 1UL;
            uint16_t *l_559 = (void*)0;
            int i, j, k;
            for (p_740->g_127.f2 = 0; (p_740->g_127.f2 >= 38); p_740->g_127.f2 = safe_add_func_uint16_t_u_u(p_740->g_127.f2, 4))
            { /* block id: 180 */
                int32_t *l_394[2];
                int64_t l_402[6] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                uint8_t **l_407 = &l_155;
                int i;
                for (i = 0; i < 2; i++)
                    l_394[i] = (void*)0;
                ++l_395;
                (*l_306) = ((p_115 <= ((VECTOR(int16_t, 8))(l_398.s5717595e)).s5) , (safe_add_func_int64_t_s_s(((p_740->g_364.y != (p_114 >= (p_115 && p_114))) >= p_114), ((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_740->g_401.yx)).yyyy)).x ^ l_402[5]) ^ (safe_rshift_func_uint16_t_u_s(p_740->g_124, 11))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((*p_740->g_206) = ((safe_rshift_func_uint8_t_u_u(((((p_115 , p_114) && p_114) <= p_114) , p_740->g_181), p_114)) <= 0x5896L)), ((VECTOR(uint64_t, 4))(0xDC7B25B388B658DFL)), 0x1C32341830C2F71CL, 0xC8BF59D9AE047A6FL, 0x7930D901CA799656L)).s35)), ((VECTOR(uint64_t, 4))(0x20052A7826DB5F8FL)), 18446744073709551615UL, 0x30865CBF7AA0F46BL)).s45)), 0x72BA5CD0C369FC83L, 0xEA235D013DC98100L)), (*l_306), ((VECTOR(uint64_t, 8))(0x199FD6A50E4DF2FBL)), 18446744073709551615UL, 0xC4909D220BD113D3L)).odd)))).s45)).xxyxyyxx)).odd)), 0UL, (*p_740->g_206), 0x26E6F4B2CBB07DC2L, ((VECTOR(uint64_t, 8))(6UL)), 0x5194CED69FDDEC16L)).s1392)).xxwzxxyzzyzwzyxz)))))).s0)));
                l_407 = (void*)0;
            }
            if ((((l_398.sf && ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(0x46D7L, ((VECTOR(uint16_t, 2))(65535UL, 0x517FL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(0xF9L, 0xA3L))))).yxyyyxxyyxyyxyxx, ((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(p_740->g_408.s77754754)).s1261054734350321, (uint8_t)GROUP_DIVERGE(1, 1))))))), ((VECTOR(uint16_t, 4))(65527UL, FAKE_DIVERGE(p_740->global_1_offset, get_global_id(1), 10), 65526UL, 0x2915L)).yyzwwxywyxyxywyz, ((VECTOR(uint16_t, 16))(p_740->g_409.xxzwyyzzyzyzzzxw))))).s168d)), 0x10E9L)).hi, (uint16_t)(safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0x6833L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_740->g_412.xxyy)).even)), 65534UL, ((VECTOR(uint16_t, 2))(l_413.yy)), 0UL, 0x44E6L)).s11)).xxyx, ((VECTOR(uint16_t, 4))(p_740->g_414.wwzw))))).wxywzyyyxxwwxzwx)).sd, (safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((p_115 == 0x2D795BA79787B41EL) , ((GROUP_DIVERGE(0, 1) , ((l_252 |= (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(((*l_306) = (l_398.sf || ((*l_429) |= (((((*p_740->g_206) ^ ((safe_mod_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(l_398.s0, 7)) , l_427) != l_427), (((*p_116) == (*p_116)) & l_398.sc))) ^ 1L)) , (*l_306)) & p_740->g_361.x) & p_740->g_428)))), (*p_740->g_109))) , 1UL), p_114))) , p_115)) | p_115)), 0xFAE3L)), 1))))))).y) != p_740->g_431) | 6L))
            { /* block id: 189 */
                int8_t **l_432[4][8] = {{&p_740->g_109,(void*)0,&p_740->g_109,(void*)0,&p_740->g_109,&p_740->g_109,(void*)0,&p_740->g_109},{&p_740->g_109,(void*)0,&p_740->g_109,(void*)0,&p_740->g_109,&p_740->g_109,(void*)0,&p_740->g_109},{&p_740->g_109,(void*)0,&p_740->g_109,(void*)0,&p_740->g_109,&p_740->g_109,(void*)0,&p_740->g_109},{&p_740->g_109,(void*)0,&p_740->g_109,(void*)0,&p_740->g_109,&p_740->g_109,(void*)0,&p_740->g_109}};
                int i, j;
                (*l_429) ^= ((-3L) != (l_365 == l_432[0][4]));
            }
            else
            { /* block id: 191 */
                uint16_t l_439 = 0x5DB6L;
                uint16_t *l_440[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t *l_457[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(uint32_t, 8) l_488 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x0B0749A5L), 0x0B0749A5L), 0x0B0749A5L, 0UL, 0x0B0749A5L);
                int32_t l_513 = 1L;
                int32_t l_516[5][8] = {{(-1L),0x7953CE74L,0x0AF2D82FL,0x752630C8L,0x7953CE74L,0x752630C8L,0x0AF2D82FL,0x7953CE74L},{(-1L),0x7953CE74L,0x0AF2D82FL,0x752630C8L,0x7953CE74L,0x752630C8L,0x0AF2D82FL,0x7953CE74L},{(-1L),0x7953CE74L,0x0AF2D82FL,0x752630C8L,0x7953CE74L,0x752630C8L,0x0AF2D82FL,0x7953CE74L},{(-1L),0x7953CE74L,0x0AF2D82FL,0x752630C8L,0x7953CE74L,0x752630C8L,0x0AF2D82FL,0x7953CE74L},{(-1L),0x7953CE74L,0x0AF2D82FL,0x752630C8L,0x7953CE74L,0x752630C8L,0x0AF2D82FL,0x7953CE74L}};
                int32_t l_527 = 0x75240082L;
                VECTOR(int16_t, 2) l_536 = (VECTOR(int16_t, 2))(0x0B2EL, 0x2B52L);
                int32_t *l_544 = &l_535[2];
                uint64_t l_573 = 18446744073709551609UL;
                VECTOR(int32_t, 8) l_578 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x40CE68F3L), 0x40CE68F3L), 0x40CE68F3L, 0L, 0x40CE68F3L);
                uint8_t l_599 = 255UL;
                int i, j;
                (*l_306) ^= ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(1UL, (*p_740->g_206))), 4)) | (~(((((VECTOR(uint8_t, 4))(((p_740->g_181 ^ ((p_740->g_409.y = (0x7E37L | l_439)) || (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s(((+(safe_sub_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s(l_449, (p_740->g_459[3][1][0] = (p_740->g_458 = ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((-6L), (((safe_unary_minus_func_int64_t_s((safe_rshift_func_int16_t_s_u((p_740->g_378.w <= (p_740->g_314.s1 &= ((safe_mod_func_uint16_t_u_u((p_740->g_328.y <= GROUP_DIVERGE(0, 1)), (safe_rshift_func_uint16_t_u_s(p_740->g_309.s3, 7)))) , (*p_740->g_109)))), p_740->g_361.y)))) ^ 1UL) | 1UL), 4L, ((VECTOR(int8_t, 2))(7L)), p_114, 1L, 0x31L)).lo)).zyzyzzzz, ((VECTOR(int8_t, 8))(0x44L))))).s70)), 0x79L, 0x46L)), 0x3EL, p_115, p_114, 6L, p_114, 1L, ((VECTOR(int8_t, 2))(0x4DL)), 0L, l_439, 0x47L, 0x6FL)).sc)))) && 1L), 0xE0D3C951A5BE333AL))) , 0x38L), (**p_740->g_108))) == p_114) , l_439), p_740->g_326.sb)))) != p_740->g_10[5][1]), p_740->g_409.w, 1UL, 0x96L)).w ^ (**p_740->g_108)) >= 0x57E9L) & 0L))), 0x7DL)) <= (*l_429));
                if (((p_740->g_361.y ^ ((safe_rshift_func_int8_t_s_s((p_740->g_314.s9 = ((VECTOR(int8_t, 2))(0x17L, 0x27L)).hi), p_115)) != p_114)) , ((VECTOR(int32_t, 2))(l_462.yw)).even))
                { /* block id: 198 */
                    uint32_t l_473[9] = {1UL,0xDB7E4A04L,1UL,1UL,0xDB7E4A04L,1UL,1UL,0xDB7E4A04L,1UL};
                    int32_t l_487 = 0x6761BCDAL;
                    uint8_t **l_497 = &l_155;
                    VECTOR(uint32_t, 2) l_510 = (VECTOR(uint32_t, 2))(0x032B0128L, 0xD0475A97L);
                    int32_t l_520 = 0x63CA9387L;
                    int32_t l_522 = 0x65913711L;
                    int32_t l_528 = 0x09357E4AL;
                    int32_t l_532 = 1L;
                    int32_t l_533 = 3L;
                    int32_t l_534 = 0x550BC127L;
                    VECTOR(int32_t, 8) l_537 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1962E4E4L), 0x1962E4E4L), 0x1962E4E4L, 0L, 0x1962E4E4L);
                    int i;
                    if (((VECTOR(int32_t, 2))(0x3C329848L, 0L)).hi)
                    { /* block id: 199 */
                        int32_t l_463 = 0x3367EA81L;
                        uint64_t ***l_466 = &l_427;
                        uint64_t ****l_467 = &l_466;
                        uint64_t ****l_469[10][8] = {{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468},{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468},{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468},{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468},{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468},{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468},{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468},{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468},{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468},{&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468,&p_740->g_468}};
                        int32_t ****l_474 = (void*)0;
                        int16_t *l_483 = (void*)0;
                        int16_t *l_484 = (void*)0;
                        int16_t *l_485 = (void*)0;
                        int16_t *l_486[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint32_t *l_489 = &p_740->g_490;
                        int i, j;
                        if (l_463)
                            break;
                        l_487 = (p_115 & ((safe_mul_func_int16_t_s_s(((*l_429) = (p_740->g_319 |= ((GROUP_DIVERGE(0, 1) == p_115) , ((((*l_467) = l_466) == (l_470 = p_740->g_468)) < (safe_add_func_int8_t_s_s((l_473[3] < (p_740->g_360.z = (&p_740->g_131[8] != (p_740->g_475 = &p_740->g_131[8])))), (safe_lshift_func_int8_t_s_u((((((~((VECTOR(int64_t, 4))(p_740->g_478.s1504)).y) == (~(((((p_740->g_314.s5 &= l_439) && (p_740->g_481[5] = (safe_mul_func_uint8_t_u_u(((p_114 & l_439) != 0x5D3FC273L), (**p_740->g_108))))) < FAKE_DIVERGE(p_740->local_2_offset, get_local_id(2), 10)) , l_482) != (void*)0))) < p_740->g_478.s1) & p_740->g_478.s7) && p_740->g_10[6][4]), p_115)))))))), p_740->g_331)) | (*l_306)));
                        (*p_116) = func_189(((*l_489) = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_488.s37)).yxxyxxxy)).s7), p_114, l_473[1], l_473[3], p_740);
                        l_496 = (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(7UL, 255UL)).lo, ((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_495.s61de)).hi)), 250UL)).y)), 14));
                    }
                    else
                    { /* block id: 213 */
                        uint8_t ***l_498 = &l_497;
                        uint32_t *l_507[2];
                        int64_t l_511 = 0x3740136ABDCA7138L;
                        uint32_t **l_512 = &l_507[1];
                        int32_t l_514 = 0x200042C2L;
                        int32_t l_515 = 5L;
                        int32_t l_518 = 0x677D209EL;
                        int32_t l_519 = 0x7A539AE0L;
                        int32_t l_526[5] = {0x67B03128L,0x67B03128L,0x67B03128L,0x67B03128L,0x67B03128L};
                        int32_t l_538 = 0x00022E8BL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_507[i] = &p_740->g_490;
                        (*l_498) = l_497;
                        (*l_306) = (+((VECTOR(int32_t, 2))(p_740->g_499.yz)).hi);
                        l_513 = (safe_rshift_func_int8_t_s_u((+(safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s((!(p_740->g_401.x , l_473[0])), (l_506 < (((((*l_512) = func_189((p_740->g_490 = p_114), (safe_lshift_func_int8_t_s_u((((((l_510.y == (l_511 , ((*p_740->g_108) != l_155))) != ((p_740->g_3 , (void*)0) == (void*)0)) , (*p_740->g_109)) , p_740->g_326.s4) != p_740->g_401.y), p_740->g_327.s1)), (*p_740->g_206), (*p_740->g_206), p_740)) == p_740->g_132[3][0]) > 0x96L) < (*l_306))))) != p_740->g_408.s6) < p_114), 0x7E321612L))), 5));
                        ++l_539;
                    }
                    if (l_533)
                        break;
                }
                else
                { /* block id: 222 */
                    uint8_t l_542 = 0x1BL;
                    uint16_t **l_558[5][6] = {{&l_440[5],(void*)0,&l_440[5],&l_440[5],(void*)0,&l_440[5]},{&l_440[5],(void*)0,&l_440[5],&l_440[5],(void*)0,&l_440[5]},{&l_440[5],(void*)0,&l_440[5],&l_440[5],(void*)0,&l_440[5]},{&l_440[5],(void*)0,&l_440[5],&l_440[5],(void*)0,&l_440[5]},{&l_440[5],(void*)0,&l_440[5],&l_440[5],(void*)0,&l_440[5]}};
                    int16_t *l_563 = (void*)0;
                    int16_t *l_564[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                    int64_t *l_565 = (void*)0;
                    int64_t *l_566 = (void*)0;
                    int64_t *l_567 = (void*)0;
                    int64_t *l_568 = &p_740->g_209;
                    int i, j;
                    l_544 = ((*p_116) = func_189(p_115, l_542, (*p_740->g_206), (p_114 ^ ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(l_543.s7127)).hi, (int64_t)p_114))).hi), p_740));
                    (*l_429) = (l_545[2] != (((*l_568) &= (&p_114 != ((((((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((!p_115), ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s(((p_740->g_319 = ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_740->g_555.s2143335462110604)).even)).s7 > ((((*l_544) && (safe_lshift_func_uint16_t_u_s((l_429 == (*p_116)), 1))) < ((p_740->g_560[7][2] = (l_559 = &l_439)) == (void*)0)) | ((safe_rshift_func_int8_t_s_u(((((*p_740->g_206) <= 0xE583C83806AAE125L) || (-1L)) , (**p_740->g_108)), 2)) < (*p_740->g_206)))) , (*l_429))) & p_740->g_10[6][4]), 0xFDBEL)) <= 0x18CCL), 11)) && p_115))), 0)) || 0L) < p_114) ^ p_114) , 0UL) , &p_740->g_331))) , p_740->g_183));
                    for (l_356 = 0; (l_356 != 42); l_356 = safe_add_func_uint64_t_u_u(l_356, 1))
                    { /* block id: 232 */
                        (*l_429) = 0x37A52C75L;
                        (*p_116) = &l_355;
                        if ((*l_429))
                            break;
                    }
                }
                for (l_539 = 29; (l_539 >= 60); l_539 = safe_add_func_int32_t_s_s(l_539, 4))
                { /* block id: 240 */
                    uint8_t l_574[6];
                    int64_t **l_575 = (void*)0;
                    int64_t **l_576 = (void*)0;
                    int64_t **l_577 = &p_740->g_366;
                    int32_t l_595 = 0L;
                    int32_t l_600 = (-1L);
                    VECTOR(int32_t, 2) l_601 = (VECTOR(int32_t, 2))(3L, (-4L));
                    uint32_t *l_625 = (void*)0;
                    uint32_t *l_626[10][5] = {{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239},{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239},{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239},{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239},{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239},{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239},{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239},{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239},{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239},{(void*)0,&l_395,&p_740->g_239,(void*)0,&p_740->g_239}};
                    int64_t l_629 = 5L;
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_574[i] = 255UL;
                    l_574[5] = l_573;
                    if (((VECTOR(int32_t, 8))(0x48862687L, ((VECTOR(int32_t, 4))((&p_740->g_331 == ((*l_577) = &p_740->g_331)), ((*l_306) = 9L), 0x77EA6120L, (-1L))), ((VECTOR(int32_t, 2))(l_578.s41)), 0x39955DF8L)).s4)
                    { /* block id: 244 */
                        return p_740->g_241.x;
                    }
                    else
                    { /* block id: 246 */
                        uint16_t **l_590[4][10][5] = {{{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559}},{{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559}},{{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559}},{{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559},{&p_740->g_560[0][3],&l_559,&l_440[2],&p_740->g_560[2][0],&l_559}}};
                        int32_t l_592 = (-5L);
                        int64_t *l_593 = (void*)0;
                        int64_t *l_594 = (void*)0;
                        union U0 **l_598 = &l_596;
                        int i, j, k;
                        (*l_306) = ((p_740->g_327.s7 = (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((((p_740->g_364.x >= (**p_740->g_108)) < (0x36L >= ((VECTOR(uint8_t, 2))(0xCAL, 0x33L)).even)) && (safe_rshift_func_int8_t_s_u((p_740->g_314.s9 = (p_115 ^ (safe_add_func_int64_t_s_s((p_740->g_327.s7 & ((VECTOR(uint64_t, 16))(((void*)0 != l_587), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(1UL, ((*p_740->g_206) = (safe_rshift_func_int8_t_s_u(((p_114 == (((((((l_591 = &p_740->g_459[0][5][0]) != (void*)0) > 1L) | (*l_544)) , l_574[5]) && GROUP_DIVERGE(2, 1)) > p_740->g_10[6][4])) , p_114), p_114))), 18446744073709551615UL, 0xD0315BC715B1D29EL)), 0x467987A8B5632B50L, 0xEABC7AE49571FFDFL, 18446744073709551614UL, 2UL)), p_114, 3UL, 0xAE6CDB911550D978L, l_574[5], (*p_740->g_206), 18446744073709551613UL, 0x5D6724957B2F7180L)).sa), p_114)))), 4))) | 0x3A354A30563D9E6CL) <= 0xA9L), l_592)), p_114))) , (*l_544));
                        if (l_595)
                            continue;
                        (*l_598) = l_596;
                        if (l_599)
                            continue;
                    }
                    --l_602;
                    l_629 = ((*l_429) = (((safe_rshift_func_uint16_t_u_u((*l_544), 11)) , ((VECTOR(uint8_t, 2))(p_740->g_607.zz)).odd) ^ ((safe_lshift_func_int8_t_s_u(p_115, (safe_add_func_int8_t_s_s((&l_574[3] != (void*)0), ((l_365 = l_612) != (p_740->g_409.z , l_612)))))) | ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(1UL, 0x36FE6172FD1893BBL)).yyyyyyxxyxxyyxyy)))).s280f)).odd, ((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 4))((safe_add_func_uint64_t_u_u(((*p_740->g_206) = (*l_544)), (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((GROUP_DIVERGE(1, 1) | ((*l_306) ^= ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((p_740->g_239--), p_740->g_171)), p_115)) <= 0x64L))), 0UL)), p_114)) ^ GROUP_DIVERGE(0, 1)), p_114)))), ((VECTOR(uint64_t, 2))(0x80981773FC4B2417L)), 0xCBE02E61E2BE056CL)), ((VECTOR(uint64_t, 4))(0x3392607CB182204AL)), ((VECTOR(uint64_t, 4))(7UL)))))))).odd))), 1UL, 0x6B9CFEA952AB62C5L)).y)));
                }
            }
        }
        if ((safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((((*l_637) = ((*l_636) = 0L)) <= p_115), (safe_add_func_int8_t_s_s((p_114 , (((safe_sub_func_int16_t_s_s(0x3A93L, ((*l_306) && p_114))) , &p_115) == ((*l_642) = l_591))), FAKE_DIVERGE(p_740->local_1_offset, get_local_id(1), 10))))) != (((((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((*l_155) |= ((p_740->g_319 , l_427) != (void*)0)), p_114)), l_647)) , p_740->g_648[0]) != &p_740->g_649[7][0]) != 0UL) || p_740->g_517)) > 255UL), (-9L))))
        { /* block id: 270 */
            int64_t ***l_653 = (void*)0;
            int64_t ***l_654 = &l_651[0][2][0];
            (*l_654) = l_651[0][2][0];
        }
        else
        { /* block id: 272 */
            int32_t *l_655 = &l_524;
            int32_t *l_656[8][1][3] = {{{&l_253,&l_253,&l_524}},{{&l_253,&l_253,&l_524}},{{&l_253,&l_253,&l_524}},{{&l_253,&l_253,&l_524}},{{&l_253,&l_253,&l_524}},{{&l_253,&l_253,&l_524}},{{&l_253,&l_253,&l_524}},{{&l_253,&l_253,&l_524}}};
            int i, j, k;
            l_657[3]--;
        }
        return p_115;
    }
    (**p_740->g_475) = &l_346;
    (*l_661) = p_740->g_660[0][6];
    return p_740->g_361.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_740->g_157
 * writes: p_740->g_157
 */
int32_t  func_135(union U1 * p_136, int32_t  p_137, int32_t ** p_138, struct S2 * p_740)
{ /* block id: 114 */
    int32_t *l_255 = &p_740->g_157;
    int32_t *l_256 = &p_740->g_157;
    int32_t *l_257 = (void*)0;
    int32_t *l_258 = &p_740->g_157;
    int32_t *l_259 = (void*)0;
    int32_t *l_260 = &p_740->g_157;
    int32_t l_261[9][1] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
    int32_t *l_262[1][1][7];
    uint64_t l_263 = 0x0F1835D3D4605079L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
                l_262[i][j][k] = &l_261[7][0];
        }
    }
    ++l_263;
    (*l_260) = (*l_256);
    return p_137;
}


/* ------------------------------------------ */
/* 
 * reads : p_740->g_153 p_740->g_3 p_740->l_comm_values p_740->g_183 p_740->g_122 p_740->g_206 p_740->g_108 p_740->g_109 p_740->g_209 p_740->g_124 p_740->g_110 p_740->g_157 p_740->g_207 p_740->g_10 p_740->g_128 p_740->g_241
 * writes: p_740->g_171 p_740->g_181 p_740->g_183 p_740->g_209 p_740->g_132 p_740->g_157 p_740->g_207 p_740->g_239
 */
union U1 * func_139(int32_t * p_140, uint8_t  p_141, uint8_t  p_142, uint64_t  p_143, uint32_t  p_144, struct S2 * p_740)
{ /* block id: 72 */
    int32_t *l_158[1][8][2] = {{{&p_740->g_157,&p_740->g_157},{&p_740->g_157,&p_740->g_157},{&p_740->g_157,&p_740->g_157},{&p_740->g_157,&p_740->g_157},{&p_740->g_157,&p_740->g_157},{&p_740->g_157,&p_740->g_157},{&p_740->g_157,&p_740->g_157},{&p_740->g_157,&p_740->g_157}}};
    int32_t l_159 = 0L;
    uint16_t l_160 = 5UL;
    int32_t **l_169 = &p_740->g_132[2][0];
    uint32_t *l_170 = &p_740->g_171;
    uint8_t l_240 = 0UL;
    VECTOR(int64_t, 16) l_242 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x2CFCB363515B0F2CL), 0x2CFCB363515B0F2CL), 0x2CFCB363515B0F2CL, 0L, 0x2CFCB363515B0F2CL, (VECTOR(int64_t, 2))(0L, 0x2CFCB363515B0F2CL), (VECTOR(int64_t, 2))(0L, 0x2CFCB363515B0F2CL), 0L, 0x2CFCB363515B0F2CL, 0L, 0x2CFCB363515B0F2CL);
    uint8_t l_243 = 0xD1L;
    int i, j, k;
    l_160--;
    l_240 |= func_163(((*l_170) = ((safe_rshift_func_int16_t_s_s((((void*)0 == l_169) ^ p_740->g_153), 10)) <= (-1L))), p_740->g_3, p_740->l_comm_values[(safe_mod_func_uint32_t_u_u(p_740->tid, 112))], p_740);
    l_243 = (((void*)0 == p_740->g_128) , ((9L > ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_740->g_241.xyyyyxyy)).lo)).odd)).xxyyxyxx)).s3) ^ (((VECTOR(int64_t, 2))(l_242.s9d)).hi || (((*p_740->g_206) != ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_143, 18446744073709551606UL, 18446744073709551615UL, 0x0198C7FE593E916CL)).xzwywwxz)).s47)).xyyyxyyx)).s3) < p_143))));
    return p_740->g_183;
}


/* ------------------------------------------ */
/* 
 * reads : p_740->g_183 p_740->g_3 p_740->g_122 p_740->g_206 p_740->g_108 p_740->g_109 p_740->g_209 p_740->g_124 p_740->g_110 p_740->g_157 p_740->g_207 p_740->g_10
 * writes: p_740->g_181 p_740->g_183 p_740->g_209 p_740->g_132 p_740->g_157 p_740->g_207 p_740->g_239
 */
int32_t  func_163(uint32_t  p_164, int64_t  p_165, uint64_t  p_166, struct S2 * p_740)
{ /* block id: 75 */
    VECTOR(uint32_t, 2) l_174 = (VECTOR(uint32_t, 2))(3UL, 4294967288UL);
    VECTOR(int64_t, 4) l_175 = (VECTOR(int64_t, 4))(0x653BD563EC0E6E02L, (VECTOR(int64_t, 2))(0x653BD563EC0E6E02L, 0L), 0L);
    int8_t *l_180 = &p_740->g_181;
    VECTOR(int8_t, 8) l_182 = (VECTOR(int8_t, 8))(0x27L, (VECTOR(int8_t, 4))(0x27L, (VECTOR(int8_t, 2))(0x27L, 8L), 8L), 8L, 0x27L, 8L);
    union U1 **l_184 = &p_740->g_183;
    uint32_t *l_238 = &p_740->g_239;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_740->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 112)), permutations[(safe_mod_func_uint32_t_u_u(((0xE8CCF3A6AD2B1841L == ((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x057B4A2EL, 0L)).xyyy)).xxzxzzyy, ((VECTOR(uint32_t, 8))(l_174.yyyyyxxy))))).s6325257522041606, ((VECTOR(int64_t, 4))(l_175.zzyy)).zxzzxxyzzzxxxzyw, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x69EC73FAEBFF0220L, (func_176(&p_740->g_171, (((*l_180) = p_164) & ((VECTOR(int8_t, 4))(l_182.s7417)).x), ((*l_184) = p_740->g_183), p_740) != ((*p_740->g_206)--)), 0x7B6ACC92EB9C0AF9L, 1L)).hi)), 0x2714927ADF952F90L, 0x6E0BA4EC74FFF7F3L)).wzzzwxwyywyzxzyx))).s08, (int64_t)(p_164 != ((((*l_238) = (0xB4CEL != (l_175.y ^ ((*p_740->g_108) != (*p_740->g_108))))) >= GROUP_DIVERGE(0, 1)) && p_740->g_10[6][4]))))).lo, p_740->g_10[4][1])) , GROUP_DIVERGE(0, 1))) >= p_166), 10))][(safe_mod_func_uint32_t_u_u(p_740->tid, 112))]));
    return l_174.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_740->g_3 p_740->g_122 p_740->g_206 p_740->g_108 p_740->g_109 p_740->g_209 p_740->g_124 p_740->g_183 p_740->g_110 p_740->g_157
 * writes: p_740->g_181 p_740->g_209 p_740->g_132 p_740->g_157
 */
int64_t  func_176(uint32_t * p_177, int64_t  p_178, union U1 * p_179, struct S2 * p_740)
{ /* block id: 78 */
    uint8_t l_188 = 0x85L;
    union U1 *l_224[6];
    union U1 *l_226 = &p_740->g_227[5];
    VECTOR(uint8_t, 2) l_228 = (VECTOR(uint8_t, 2))(0xB3L, 1UL);
    int32_t l_235 = 0x1CC6AA53L;
    int i, j;
    for (i = 0; i < 6; i++)
        l_224[i] = &p_740->g_225[2][5];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_740->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 112)), permutations[(safe_mod_func_uint32_t_u_u((((((func_185(l_188, p_178, p_740) >= (p_740->g_124 <= ((safe_div_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(((p_740->g_3 < (l_224[4] == (l_226 = p_740->g_183))) != (**p_740->g_108)))) , ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_228.xyxy)).wywzzyyy)), (((safe_rshift_func_int8_t_s_s((p_178 | GROUP_DIVERGE(0, 1)), l_228.x)) , 0x08DF57AAL) & l_228.y), ((VECTOR(uint8_t, 2))(252UL)), p_740->g_110, 255UL, ((VECTOR(uint8_t, 2))(1UL)), 0x10L)).s7), 0xC9L)) != p_178))) ^ (*p_740->g_109)) & 0xDFL) , l_228.y) && (**p_740->g_108)), 10))][(safe_mod_func_uint32_t_u_u(p_740->tid, 112))]));
    for (p_740->g_157 = (-6); (p_740->g_157 >= 10); p_740->g_157++)
    { /* block id: 97 */
        for (p_178 = (-24); (p_178 != 13); p_178 = safe_add_func_int8_t_s_s(p_178, 1))
        { /* block id: 100 */
            if (l_235)
                break;
        }
    }
    return l_188;
}


/* ------------------------------------------ */
/* 
 * reads : p_740->g_3 p_740->g_122 p_740->g_206 p_740->g_108 p_740->g_109 p_740->g_209
 * writes: p_740->g_181 p_740->g_209 p_740->g_132
 */
uint64_t  func_185(int32_t  p_186, uint16_t  p_187, struct S2 * p_740)
{ /* block id: 79 */
    union U1 **l_196[8][5][1] = {{{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183}},{{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183}},{{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183}},{{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183}},{{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183}},{{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183}},{{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183}},{{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183},{&p_740->g_183}}};
    int64_t l_199 = 1L;
    int32_t l_202 = (-6L);
    VECTOR(int8_t, 2) l_203 = (VECTOR(int8_t, 2))(0x64L, 1L);
    int8_t *l_204 = (void*)0;
    int8_t *l_205 = &p_740->g_181;
    uint64_t *l_208[10][4][2] = {{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}},{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}},{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}},{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}},{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}},{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}},{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}},{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}},{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}},{{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207},{&p_740->g_207,&p_740->g_207}}};
    int32_t l_210 = 0L;
    int32_t *l_216 = (void*)0;
    int32_t **l_217 = (void*)0;
    int32_t **l_218 = &p_740->g_132[0][0];
    int i, j, k;
    (*l_218) = (p_740->g_3 , (l_216 = func_189(((safe_rshift_func_uint16_t_u_u((l_196[3][2][0] != l_196[2][0][0]), 4)) <= (safe_mul_func_uint16_t_u_u(l_199, ((safe_sub_func_uint8_t_u_u((l_202 ^= p_740->g_122.s1), ((*l_205) = ((VECTOR(int8_t, 16))(l_203.yxyxyyxxyyxyxxxy)).s7))) < (p_740->g_206 != l_208[3][0][0]))))), (l_210 = (p_740->g_209 |= ((*p_740->g_108) == (*p_740->g_108)))), p_186, l_203.y, p_740)));
    return p_186;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_189(uint32_t  p_190, int16_t  p_191, uint64_t  p_192, uint64_t  p_193, struct S2 * p_740)
{ /* block id: 84 */
    int32_t *l_211 = &p_740->g_3;
    int32_t **l_212 = &l_211;
    uint64_t **l_214 = &p_740->g_206;
    uint64_t ***l_213 = &l_214;
    int32_t *l_215 = &p_740->g_10[6][4];
    (*l_212) = l_211;
    (*l_213) = &p_740->g_206;
    return l_215;
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
    __local int64_t l_comm_values[112];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 112; i++)
            l_comm_values[i] = 1;
    struct S2 c_741;
    struct S2* p_740 = &c_741;
    struct S2 c_742 = {
        0x33C63384L, // p_740->g_2
        0L, // p_740->g_3
        {{0x037182ABL,(-1L),0x037182ABL},{0x037182ABL,(-1L),0x037182ABL},{0x037182ABL,(-1L),0x037182ABL},{0x037182ABL,(-1L),0x037182ABL},{0x037182ABL,(-1L),0x037182ABL}}, // p_740->g_6
        0x79253A34L, // p_740->g_7
        (-1L), // p_740->g_8
        0x585ED065L, // p_740->g_9
        {{0x1A652065L,0x4520EA0CL,1L,1L,0x4520EA0CL},{0x1A652065L,0x4520EA0CL,1L,1L,0x4520EA0CL},{0x1A652065L,0x4520EA0CL,1L,1L,0x4520EA0CL},{0x1A652065L,0x4520EA0CL,1L,1L,0x4520EA0CL},{0x1A652065L,0x4520EA0CL,1L,1L,0x4520EA0CL},{0x1A652065L,0x4520EA0CL,1L,1L,0x4520EA0CL},{0x1A652065L,0x4520EA0CL,1L,1L,0x4520EA0CL},{0x1A652065L,0x4520EA0CL,1L,1L,0x4520EA0CL},{0x1A652065L,0x4520EA0CL,1L,1L,0x4520EA0CL}}, // p_740->g_10
        0x2AL, // p_740->g_110
        &p_740->g_110, // p_740->g_109
        &p_740->g_109, // p_740->g_108
        (VECTOR(uint8_t, 8))(0xD2L, (VECTOR(uint8_t, 4))(0xD2L, (VECTOR(uint8_t, 2))(0xD2L, 0UL), 0UL), 0UL, 0xD2L, 0UL), // p_740->g_122
        0UL, // p_740->g_124
        {0UL}, // p_740->g_127
        {0x1EL}, // p_740->g_129
        &p_740->g_129, // p_740->g_128
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_740->g_132
        {&p_740->g_132[3][0],&p_740->g_132[3][0],&p_740->g_132[3][0],&p_740->g_132[3][0],&p_740->g_132[3][0],&p_740->g_132[3][0],&p_740->g_132[3][0],&p_740->g_132[3][0],&p_740->g_132[3][0],&p_740->g_132[3][0]}, // p_740->g_131
        (-1L), // p_740->g_153
        0L, // p_740->g_157
        0UL, // p_740->g_171
        0x72L, // p_740->g_181
        (void*)0, // p_740->g_183
        0x299416B48063A026L, // p_740->g_207
        &p_740->g_207, // p_740->g_206
        (-3L), // p_740->g_209
        {{{0UL},{0xB9L},{0UL},{0UL},{0xB9L},{0UL},{0UL},{0xB9L},{0UL}},{{0UL},{0xB9L},{0UL},{0UL},{0xB9L},{0UL},{0UL},{0xB9L},{0UL}},{{0UL},{0xB9L},{0UL},{0UL},{0xB9L},{0UL},{0UL},{0xB9L},{0UL}},{{0UL},{0xB9L},{0UL},{0UL},{0xB9L},{0UL},{0UL},{0xB9L},{0UL}}}, // p_740->g_225
        {{0x68L},{1UL},{0x68L},{0x68L},{1UL},{0x68L}}, // p_740->g_227
        0UL, // p_740->g_239
        (VECTOR(uint16_t, 2))(4UL, 65531UL), // p_740->g_241
        (VECTOR(uint8_t, 8))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0x28L), 0x28L), 0x28L, 6UL, 0x28L), // p_740->g_309
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x26L), 0x26L), 0x26L, 0L, 0x26L, (VECTOR(int8_t, 2))(0L, 0x26L), (VECTOR(int8_t, 2))(0L, 0x26L), 0L, 0x26L, 0L, 0x26L), // p_740->g_314
        (-1L), // p_740->g_319
        (VECTOR(int32_t, 16))(0x5325DC2EL, (VECTOR(int32_t, 4))(0x5325DC2EL, (VECTOR(int32_t, 2))(0x5325DC2EL, 0x7A9DCE3CL), 0x7A9DCE3CL), 0x7A9DCE3CL, 0x5325DC2EL, 0x7A9DCE3CL, (VECTOR(int32_t, 2))(0x5325DC2EL, 0x7A9DCE3CL), (VECTOR(int32_t, 2))(0x5325DC2EL, 0x7A9DCE3CL), 0x5325DC2EL, 0x7A9DCE3CL, 0x5325DC2EL, 0x7A9DCE3CL), // p_740->g_326
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_740->g_327
        (VECTOR(int64_t, 2))(0L, 0x7F82ABC913925114L), // p_740->g_328
        (-1L), // p_740->g_331
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), // p_740->g_360
        (VECTOR(uint8_t, 2))(247UL, 3UL), // p_740->g_361
        (VECTOR(int32_t, 2))(1L, 4L), // p_740->g_364
        &p_740->g_331, // p_740->g_366
        (VECTOR(int32_t, 4))(0x2A977918L, (VECTOR(int32_t, 2))(0x2A977918L, 0x3FA97136L), 0x3FA97136L), // p_740->g_378
        (VECTOR(int64_t, 2))(0x271DBD89F834C3C5L, 0x5145D9F220301755L), // p_740->g_401
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 250UL), 250UL), 250UL, 0UL, 250UL), // p_740->g_408
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xF93DL), 0xF93DL), // p_740->g_409
        (VECTOR(uint16_t, 2))(0UL, 0x52B9L), // p_740->g_412
        (VECTOR(uint16_t, 4))(0x373CL, (VECTOR(uint16_t, 2))(0x373CL, 0UL), 0UL), // p_740->g_414
        2L, // p_740->g_428
        1L, // p_740->g_431
        0x56414D38L, // p_740->g_458
        {{{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL}},{{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL}},{{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL}},{{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL}},{{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL}},{{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL}},{{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL},{0UL,0x26C7L,0x1344L,0x323DL}}}, // p_740->g_459
        (void*)0, // p_740->g_468
        &p_740->g_131[9], // p_740->g_475
        (VECTOR(int64_t, 8))(0x59AF407CD9110119L, (VECTOR(int64_t, 4))(0x59AF407CD9110119L, (VECTOR(int64_t, 2))(0x59AF407CD9110119L, (-1L)), (-1L)), (-1L), 0x59AF407CD9110119L, (-1L)), // p_740->g_478
        {0xDC03BB6BFD5FA9FAL,0xDC03BB6BFD5FA9FAL,0xDC03BB6BFD5FA9FAL,0xDC03BB6BFD5FA9FAL,0xDC03BB6BFD5FA9FAL,0xDC03BB6BFD5FA9FAL,0xDC03BB6BFD5FA9FAL,0xDC03BB6BFD5FA9FAL}, // p_740->g_481
        0xB30C7528L, // p_740->g_490
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5CE4497CL), 0x5CE4497CL), // p_740->g_499
        8L, // p_740->g_517
        {0xCFL}, // p_740->g_546
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x15C3E30FL), 0x15C3E30FL), 0x15C3E30FL, 0L, 0x15C3E30FL), // p_740->g_555
        {{(void*)0,(void*)0,&p_740->g_459[3][1][0],&p_740->g_459[6][4][3],&p_740->g_459[1][2][0],(void*)0,&p_740->g_459[6][4][3],&p_740->g_459[4][8][1],&p_740->g_459[6][4][3],(void*)0},{(void*)0,(void*)0,&p_740->g_459[3][1][0],&p_740->g_459[6][4][3],&p_740->g_459[1][2][0],(void*)0,&p_740->g_459[6][4][3],&p_740->g_459[4][8][1],&p_740->g_459[6][4][3],(void*)0},{(void*)0,(void*)0,&p_740->g_459[3][1][0],&p_740->g_459[6][4][3],&p_740->g_459[1][2][0],(void*)0,&p_740->g_459[6][4][3],&p_740->g_459[4][8][1],&p_740->g_459[6][4][3],(void*)0},{(void*)0,(void*)0,&p_740->g_459[3][1][0],&p_740->g_459[6][4][3],&p_740->g_459[1][2][0],(void*)0,&p_740->g_459[6][4][3],&p_740->g_459[4][8][1],&p_740->g_459[6][4][3],(void*)0},{(void*)0,(void*)0,&p_740->g_459[3][1][0],&p_740->g_459[6][4][3],&p_740->g_459[1][2][0],(void*)0,&p_740->g_459[6][4][3],&p_740->g_459[4][8][1],&p_740->g_459[6][4][3],(void*)0},{(void*)0,(void*)0,&p_740->g_459[3][1][0],&p_740->g_459[6][4][3],&p_740->g_459[1][2][0],(void*)0,&p_740->g_459[6][4][3],&p_740->g_459[4][8][1],&p_740->g_459[6][4][3],(void*)0},{(void*)0,(void*)0,&p_740->g_459[3][1][0],&p_740->g_459[6][4][3],&p_740->g_459[1][2][0],(void*)0,&p_740->g_459[6][4][3],&p_740->g_459[4][8][1],&p_740->g_459[6][4][3],(void*)0},{(void*)0,(void*)0,&p_740->g_459[3][1][0],&p_740->g_459[6][4][3],&p_740->g_459[1][2][0],(void*)0,&p_740->g_459[6][4][3],&p_740->g_459[4][8][1],&p_740->g_459[6][4][3],(void*)0}}, // p_740->g_560
        {{0x5A488950FFC3B305L},{0xF165C1C5AC04922EL},{0x5A488950FFC3B305L},{0x5A488950FFC3B305L},{0xF165C1C5AC04922EL},{0x5A488950FFC3B305L},{0x5A488950FFC3B305L},{0xF165C1C5AC04922EL}}, // p_740->g_597
        (VECTOR(uint8_t, 4))(0x8EL, (VECTOR(uint8_t, 2))(0x8EL, 1UL), 1UL), // p_740->g_607
        (void*)0, // p_740->g_650
        {{&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650},{&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650},{&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650},{&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650},{&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650},{&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650},{&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650},{&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650},{&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650,&p_740->g_650}}, // p_740->g_649
        {&p_740->g_649[7][0],&p_740->g_649[7][0],&p_740->g_649[7][0],&p_740->g_649[7][0],&p_740->g_649[7][0],&p_740->g_649[7][0],&p_740->g_649[7][0],&p_740->g_649[7][0]}, // p_740->g_648
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_740->g_660
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 2L), 2L), 2L, 0L, 2L, (VECTOR(int8_t, 2))(0L, 2L), (VECTOR(int8_t, 2))(0L, 2L), 0L, 2L, 0L, 2L), // p_740->g_680
        8L, // p_740->g_734
        (VECTOR(int32_t, 8))(0x1D3AB28EL, (VECTOR(int32_t, 4))(0x1D3AB28EL, (VECTOR(int32_t, 2))(0x1D3AB28EL, 0x740BAAAAL), 0x740BAAAAL), 0x740BAAAAL, 0x1D3AB28EL, 0x740BAAAAL), // p_740->g_735
        0, // p_740->v_collective
        sequence_input[get_global_id(0)], // p_740->global_0_offset
        sequence_input[get_global_id(1)], // p_740->global_1_offset
        sequence_input[get_global_id(2)], // p_740->global_2_offset
        sequence_input[get_local_id(0)], // p_740->local_0_offset
        sequence_input[get_local_id(1)], // p_740->local_1_offset
        sequence_input[get_local_id(2)], // p_740->local_2_offset
        sequence_input[get_group_id(0)], // p_740->group_0_offset
        sequence_input[get_group_id(1)], // p_740->group_1_offset
        sequence_input[get_group_id(2)], // p_740->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 112)), permutations[0][get_linear_local_id()])), // p_740->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_741 = c_742;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_740);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_740->g_2, "p_740->g_2", print_hash_value);
    transparent_crc(p_740->g_3, "p_740->g_3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_740->g_6[i][j], "p_740->g_6[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_740->g_7, "p_740->g_7", print_hash_value);
    transparent_crc(p_740->g_8, "p_740->g_8", print_hash_value);
    transparent_crc(p_740->g_9, "p_740->g_9", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_740->g_10[i][j], "p_740->g_10[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_740->g_110, "p_740->g_110", print_hash_value);
    transparent_crc(p_740->g_122.s0, "p_740->g_122.s0", print_hash_value);
    transparent_crc(p_740->g_122.s1, "p_740->g_122.s1", print_hash_value);
    transparent_crc(p_740->g_122.s2, "p_740->g_122.s2", print_hash_value);
    transparent_crc(p_740->g_122.s3, "p_740->g_122.s3", print_hash_value);
    transparent_crc(p_740->g_122.s4, "p_740->g_122.s4", print_hash_value);
    transparent_crc(p_740->g_122.s5, "p_740->g_122.s5", print_hash_value);
    transparent_crc(p_740->g_122.s6, "p_740->g_122.s6", print_hash_value);
    transparent_crc(p_740->g_122.s7, "p_740->g_122.s7", print_hash_value);
    transparent_crc(p_740->g_124, "p_740->g_124", print_hash_value);
    transparent_crc(p_740->g_127.f0, "p_740->g_127.f0", print_hash_value);
    transparent_crc(p_740->g_129.f0, "p_740->g_129.f0", print_hash_value);
    transparent_crc(p_740->g_153, "p_740->g_153", print_hash_value);
    transparent_crc(p_740->g_157, "p_740->g_157", print_hash_value);
    transparent_crc(p_740->g_171, "p_740->g_171", print_hash_value);
    transparent_crc(p_740->g_181, "p_740->g_181", print_hash_value);
    transparent_crc(p_740->g_207, "p_740->g_207", print_hash_value);
    transparent_crc(p_740->g_209, "p_740->g_209", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_740->g_225[i][j].f0, "p_740->g_225[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_740->g_227[i].f0, "p_740->g_227[i].f0", print_hash_value);

    }
    transparent_crc(p_740->g_239, "p_740->g_239", print_hash_value);
    transparent_crc(p_740->g_241.x, "p_740->g_241.x", print_hash_value);
    transparent_crc(p_740->g_241.y, "p_740->g_241.y", print_hash_value);
    transparent_crc(p_740->g_309.s0, "p_740->g_309.s0", print_hash_value);
    transparent_crc(p_740->g_309.s1, "p_740->g_309.s1", print_hash_value);
    transparent_crc(p_740->g_309.s2, "p_740->g_309.s2", print_hash_value);
    transparent_crc(p_740->g_309.s3, "p_740->g_309.s3", print_hash_value);
    transparent_crc(p_740->g_309.s4, "p_740->g_309.s4", print_hash_value);
    transparent_crc(p_740->g_309.s5, "p_740->g_309.s5", print_hash_value);
    transparent_crc(p_740->g_309.s6, "p_740->g_309.s6", print_hash_value);
    transparent_crc(p_740->g_309.s7, "p_740->g_309.s7", print_hash_value);
    transparent_crc(p_740->g_314.s0, "p_740->g_314.s0", print_hash_value);
    transparent_crc(p_740->g_314.s1, "p_740->g_314.s1", print_hash_value);
    transparent_crc(p_740->g_314.s2, "p_740->g_314.s2", print_hash_value);
    transparent_crc(p_740->g_314.s3, "p_740->g_314.s3", print_hash_value);
    transparent_crc(p_740->g_314.s4, "p_740->g_314.s4", print_hash_value);
    transparent_crc(p_740->g_314.s5, "p_740->g_314.s5", print_hash_value);
    transparent_crc(p_740->g_314.s6, "p_740->g_314.s6", print_hash_value);
    transparent_crc(p_740->g_314.s7, "p_740->g_314.s7", print_hash_value);
    transparent_crc(p_740->g_314.s8, "p_740->g_314.s8", print_hash_value);
    transparent_crc(p_740->g_314.s9, "p_740->g_314.s9", print_hash_value);
    transparent_crc(p_740->g_314.sa, "p_740->g_314.sa", print_hash_value);
    transparent_crc(p_740->g_314.sb, "p_740->g_314.sb", print_hash_value);
    transparent_crc(p_740->g_314.sc, "p_740->g_314.sc", print_hash_value);
    transparent_crc(p_740->g_314.sd, "p_740->g_314.sd", print_hash_value);
    transparent_crc(p_740->g_314.se, "p_740->g_314.se", print_hash_value);
    transparent_crc(p_740->g_314.sf, "p_740->g_314.sf", print_hash_value);
    transparent_crc(p_740->g_319, "p_740->g_319", print_hash_value);
    transparent_crc(p_740->g_326.s0, "p_740->g_326.s0", print_hash_value);
    transparent_crc(p_740->g_326.s1, "p_740->g_326.s1", print_hash_value);
    transparent_crc(p_740->g_326.s2, "p_740->g_326.s2", print_hash_value);
    transparent_crc(p_740->g_326.s3, "p_740->g_326.s3", print_hash_value);
    transparent_crc(p_740->g_326.s4, "p_740->g_326.s4", print_hash_value);
    transparent_crc(p_740->g_326.s5, "p_740->g_326.s5", print_hash_value);
    transparent_crc(p_740->g_326.s6, "p_740->g_326.s6", print_hash_value);
    transparent_crc(p_740->g_326.s7, "p_740->g_326.s7", print_hash_value);
    transparent_crc(p_740->g_326.s8, "p_740->g_326.s8", print_hash_value);
    transparent_crc(p_740->g_326.s9, "p_740->g_326.s9", print_hash_value);
    transparent_crc(p_740->g_326.sa, "p_740->g_326.sa", print_hash_value);
    transparent_crc(p_740->g_326.sb, "p_740->g_326.sb", print_hash_value);
    transparent_crc(p_740->g_326.sc, "p_740->g_326.sc", print_hash_value);
    transparent_crc(p_740->g_326.sd, "p_740->g_326.sd", print_hash_value);
    transparent_crc(p_740->g_326.se, "p_740->g_326.se", print_hash_value);
    transparent_crc(p_740->g_326.sf, "p_740->g_326.sf", print_hash_value);
    transparent_crc(p_740->g_327.s0, "p_740->g_327.s0", print_hash_value);
    transparent_crc(p_740->g_327.s1, "p_740->g_327.s1", print_hash_value);
    transparent_crc(p_740->g_327.s2, "p_740->g_327.s2", print_hash_value);
    transparent_crc(p_740->g_327.s3, "p_740->g_327.s3", print_hash_value);
    transparent_crc(p_740->g_327.s4, "p_740->g_327.s4", print_hash_value);
    transparent_crc(p_740->g_327.s5, "p_740->g_327.s5", print_hash_value);
    transparent_crc(p_740->g_327.s6, "p_740->g_327.s6", print_hash_value);
    transparent_crc(p_740->g_327.s7, "p_740->g_327.s7", print_hash_value);
    transparent_crc(p_740->g_328.x, "p_740->g_328.x", print_hash_value);
    transparent_crc(p_740->g_328.y, "p_740->g_328.y", print_hash_value);
    transparent_crc(p_740->g_331, "p_740->g_331", print_hash_value);
    transparent_crc(p_740->g_360.x, "p_740->g_360.x", print_hash_value);
    transparent_crc(p_740->g_360.y, "p_740->g_360.y", print_hash_value);
    transparent_crc(p_740->g_360.z, "p_740->g_360.z", print_hash_value);
    transparent_crc(p_740->g_360.w, "p_740->g_360.w", print_hash_value);
    transparent_crc(p_740->g_361.x, "p_740->g_361.x", print_hash_value);
    transparent_crc(p_740->g_361.y, "p_740->g_361.y", print_hash_value);
    transparent_crc(p_740->g_364.x, "p_740->g_364.x", print_hash_value);
    transparent_crc(p_740->g_364.y, "p_740->g_364.y", print_hash_value);
    transparent_crc(p_740->g_378.x, "p_740->g_378.x", print_hash_value);
    transparent_crc(p_740->g_378.y, "p_740->g_378.y", print_hash_value);
    transparent_crc(p_740->g_378.z, "p_740->g_378.z", print_hash_value);
    transparent_crc(p_740->g_378.w, "p_740->g_378.w", print_hash_value);
    transparent_crc(p_740->g_401.x, "p_740->g_401.x", print_hash_value);
    transparent_crc(p_740->g_401.y, "p_740->g_401.y", print_hash_value);
    transparent_crc(p_740->g_408.s0, "p_740->g_408.s0", print_hash_value);
    transparent_crc(p_740->g_408.s1, "p_740->g_408.s1", print_hash_value);
    transparent_crc(p_740->g_408.s2, "p_740->g_408.s2", print_hash_value);
    transparent_crc(p_740->g_408.s3, "p_740->g_408.s3", print_hash_value);
    transparent_crc(p_740->g_408.s4, "p_740->g_408.s4", print_hash_value);
    transparent_crc(p_740->g_408.s5, "p_740->g_408.s5", print_hash_value);
    transparent_crc(p_740->g_408.s6, "p_740->g_408.s6", print_hash_value);
    transparent_crc(p_740->g_408.s7, "p_740->g_408.s7", print_hash_value);
    transparent_crc(p_740->g_409.x, "p_740->g_409.x", print_hash_value);
    transparent_crc(p_740->g_409.y, "p_740->g_409.y", print_hash_value);
    transparent_crc(p_740->g_409.z, "p_740->g_409.z", print_hash_value);
    transparent_crc(p_740->g_409.w, "p_740->g_409.w", print_hash_value);
    transparent_crc(p_740->g_412.x, "p_740->g_412.x", print_hash_value);
    transparent_crc(p_740->g_412.y, "p_740->g_412.y", print_hash_value);
    transparent_crc(p_740->g_414.x, "p_740->g_414.x", print_hash_value);
    transparent_crc(p_740->g_414.y, "p_740->g_414.y", print_hash_value);
    transparent_crc(p_740->g_414.z, "p_740->g_414.z", print_hash_value);
    transparent_crc(p_740->g_414.w, "p_740->g_414.w", print_hash_value);
    transparent_crc(p_740->g_428, "p_740->g_428", print_hash_value);
    transparent_crc(p_740->g_431, "p_740->g_431", print_hash_value);
    transparent_crc(p_740->g_458, "p_740->g_458", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_740->g_459[i][j][k], "p_740->g_459[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_740->g_478.s0, "p_740->g_478.s0", print_hash_value);
    transparent_crc(p_740->g_478.s1, "p_740->g_478.s1", print_hash_value);
    transparent_crc(p_740->g_478.s2, "p_740->g_478.s2", print_hash_value);
    transparent_crc(p_740->g_478.s3, "p_740->g_478.s3", print_hash_value);
    transparent_crc(p_740->g_478.s4, "p_740->g_478.s4", print_hash_value);
    transparent_crc(p_740->g_478.s5, "p_740->g_478.s5", print_hash_value);
    transparent_crc(p_740->g_478.s6, "p_740->g_478.s6", print_hash_value);
    transparent_crc(p_740->g_478.s7, "p_740->g_478.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_740->g_481[i], "p_740->g_481[i]", print_hash_value);

    }
    transparent_crc(p_740->g_490, "p_740->g_490", print_hash_value);
    transparent_crc(p_740->g_499.x, "p_740->g_499.x", print_hash_value);
    transparent_crc(p_740->g_499.y, "p_740->g_499.y", print_hash_value);
    transparent_crc(p_740->g_499.z, "p_740->g_499.z", print_hash_value);
    transparent_crc(p_740->g_499.w, "p_740->g_499.w", print_hash_value);
    transparent_crc(p_740->g_517, "p_740->g_517", print_hash_value);
    transparent_crc(p_740->g_546.f0, "p_740->g_546.f0", print_hash_value);
    transparent_crc(p_740->g_555.s0, "p_740->g_555.s0", print_hash_value);
    transparent_crc(p_740->g_555.s1, "p_740->g_555.s1", print_hash_value);
    transparent_crc(p_740->g_555.s2, "p_740->g_555.s2", print_hash_value);
    transparent_crc(p_740->g_555.s3, "p_740->g_555.s3", print_hash_value);
    transparent_crc(p_740->g_555.s4, "p_740->g_555.s4", print_hash_value);
    transparent_crc(p_740->g_555.s5, "p_740->g_555.s5", print_hash_value);
    transparent_crc(p_740->g_555.s6, "p_740->g_555.s6", print_hash_value);
    transparent_crc(p_740->g_555.s7, "p_740->g_555.s7", print_hash_value);
    transparent_crc(p_740->g_607.x, "p_740->g_607.x", print_hash_value);
    transparent_crc(p_740->g_607.y, "p_740->g_607.y", print_hash_value);
    transparent_crc(p_740->g_607.z, "p_740->g_607.z", print_hash_value);
    transparent_crc(p_740->g_607.w, "p_740->g_607.w", print_hash_value);
    transparent_crc(p_740->g_680.s0, "p_740->g_680.s0", print_hash_value);
    transparent_crc(p_740->g_680.s1, "p_740->g_680.s1", print_hash_value);
    transparent_crc(p_740->g_680.s2, "p_740->g_680.s2", print_hash_value);
    transparent_crc(p_740->g_680.s3, "p_740->g_680.s3", print_hash_value);
    transparent_crc(p_740->g_680.s4, "p_740->g_680.s4", print_hash_value);
    transparent_crc(p_740->g_680.s5, "p_740->g_680.s5", print_hash_value);
    transparent_crc(p_740->g_680.s6, "p_740->g_680.s6", print_hash_value);
    transparent_crc(p_740->g_680.s7, "p_740->g_680.s7", print_hash_value);
    transparent_crc(p_740->g_680.s8, "p_740->g_680.s8", print_hash_value);
    transparent_crc(p_740->g_680.s9, "p_740->g_680.s9", print_hash_value);
    transparent_crc(p_740->g_680.sa, "p_740->g_680.sa", print_hash_value);
    transparent_crc(p_740->g_680.sb, "p_740->g_680.sb", print_hash_value);
    transparent_crc(p_740->g_680.sc, "p_740->g_680.sc", print_hash_value);
    transparent_crc(p_740->g_680.sd, "p_740->g_680.sd", print_hash_value);
    transparent_crc(p_740->g_680.se, "p_740->g_680.se", print_hash_value);
    transparent_crc(p_740->g_680.sf, "p_740->g_680.sf", print_hash_value);
    transparent_crc(p_740->g_734, "p_740->g_734", print_hash_value);
    transparent_crc(p_740->g_735.s0, "p_740->g_735.s0", print_hash_value);
    transparent_crc(p_740->g_735.s1, "p_740->g_735.s1", print_hash_value);
    transparent_crc(p_740->g_735.s2, "p_740->g_735.s2", print_hash_value);
    transparent_crc(p_740->g_735.s3, "p_740->g_735.s3", print_hash_value);
    transparent_crc(p_740->g_735.s4, "p_740->g_735.s4", print_hash_value);
    transparent_crc(p_740->g_735.s5, "p_740->g_735.s5", print_hash_value);
    transparent_crc(p_740->g_735.s6, "p_740->g_735.s6", print_hash_value);
    transparent_crc(p_740->g_735.s7, "p_740->g_735.s7", print_hash_value);
    transparent_crc(p_740->v_collective, "p_740->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 58; i++)
            transparent_crc(p_740->l_special_values[i], "p_740->l_special_values[i]", print_hash_value);
    transparent_crc(p_740->l_comm_values[get_linear_local_id()], "p_740->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_740->g_comm_values[get_linear_group_id() * 112 + get_linear_local_id()], "p_740->g_comm_values[get_linear_group_id() * 112 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
