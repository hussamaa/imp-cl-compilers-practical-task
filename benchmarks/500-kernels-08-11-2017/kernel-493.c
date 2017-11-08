// --atomics 27 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 46,28,7 -l 1,28,7
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

__constant uint32_t permutations[10][196] = {
{62,187,97,126,64,70,19,149,114,127,106,49,5,67,52,89,103,124,173,9,116,32,118,63,75,47,193,85,147,2,183,76,101,125,122,159,182,46,74,24,140,30,137,163,56,53,157,184,43,110,16,38,10,66,86,13,166,92,98,84,161,112,96,185,88,80,167,175,113,117,35,28,99,165,190,194,23,171,120,121,142,55,48,129,186,95,195,4,22,44,37,148,154,42,15,178,25,139,11,105,152,57,179,17,7,176,100,138,134,132,14,135,94,68,160,174,150,6,61,36,60,39,41,21,20,27,54,33,91,130,180,34,151,143,51,40,109,3,146,172,8,93,188,144,153,0,87,189,77,50,79,1,18,164,83,155,26,145,181,169,104,115,45,12,111,177,170,107,31,102,59,133,29,131,162,69,82,72,141,156,119,73,158,58,123,136,71,78,168,192,90,108,191,81,128,65}, // permutation 0
{182,74,100,176,72,140,113,112,0,158,2,77,130,167,120,150,125,133,61,12,101,179,84,37,149,194,168,129,143,73,70,93,190,60,35,64,147,29,33,87,173,81,121,110,85,141,13,117,32,16,30,115,94,163,156,78,142,172,65,1,189,24,145,5,122,27,157,160,89,56,66,23,68,136,103,180,178,3,14,195,42,105,95,116,99,11,106,76,53,47,161,96,166,83,132,134,188,25,34,51,138,57,108,21,154,55,28,118,6,62,17,45,39,127,44,46,8,22,185,144,165,171,90,58,48,54,69,36,88,148,97,174,26,124,52,128,59,111,139,15,183,82,40,123,9,18,20,19,102,137,63,109,159,175,126,43,164,114,177,146,186,91,92,104,75,107,170,187,67,181,31,153,151,192,155,135,86,38,191,162,71,169,80,50,10,4,79,131,7,49,152,184,41,98,119,193}, // permutation 1
{1,40,139,123,26,134,65,30,176,53,45,142,163,126,113,66,64,127,29,138,155,3,67,43,0,184,156,191,7,57,11,60,46,47,192,165,104,50,130,183,136,61,160,41,116,154,109,86,170,37,18,107,141,168,20,171,96,83,169,151,27,185,4,121,189,70,82,85,77,174,6,93,52,122,144,179,157,98,71,81,2,69,129,48,161,9,120,153,108,195,12,128,35,148,115,5,58,143,55,164,15,87,124,74,16,149,114,33,175,75,14,182,68,103,89,10,56,88,80,193,167,132,19,36,90,42,180,146,44,49,190,63,186,172,118,188,28,173,177,22,95,79,59,135,111,54,159,158,51,181,23,21,119,105,187,145,106,76,8,73,13,147,162,102,17,117,110,99,39,24,34,131,97,166,38,92,140,101,133,62,150,112,72,91,125,178,32,78,84,152,100,194,137,94,31,25}, // permutation 2
{8,170,183,28,107,2,60,144,178,192,68,66,92,159,71,146,115,155,30,50,141,67,177,120,99,161,119,154,88,18,101,129,110,31,27,56,90,124,117,148,108,193,65,123,180,53,173,98,187,49,11,72,44,145,3,176,171,77,191,94,84,142,190,85,195,103,112,17,136,95,19,69,96,5,149,97,63,37,114,10,42,35,147,122,102,47,163,134,109,137,39,15,40,41,89,164,23,158,73,82,22,165,54,0,26,143,13,184,189,45,6,174,1,34,130,59,46,93,139,79,132,38,70,100,105,52,118,182,113,104,152,7,125,126,188,179,78,153,32,121,12,81,57,106,157,36,74,169,175,168,87,151,135,25,86,111,14,48,76,4,80,166,156,24,138,150,127,33,131,64,140,55,62,128,160,181,116,167,162,9,186,20,21,16,185,51,194,61,75,133,83,29,172,58,43,91}, // permutation 3
{167,67,118,138,174,85,83,169,110,143,148,115,56,1,179,66,154,75,125,170,158,149,144,57,195,26,0,135,40,70,183,33,155,22,10,93,90,180,101,13,105,159,146,94,187,53,88,61,6,131,191,51,92,3,7,29,31,127,186,122,82,17,74,28,136,139,49,98,79,63,5,153,164,81,39,48,78,103,140,120,181,4,60,132,107,36,15,182,116,192,69,42,64,160,89,150,142,145,35,185,133,27,130,8,194,96,50,128,178,86,119,188,108,171,68,117,19,157,175,45,113,9,168,163,161,147,193,43,14,24,102,97,190,55,54,25,41,12,111,32,162,99,152,20,59,173,114,18,124,137,189,62,109,100,34,151,52,71,134,184,106,16,166,80,46,123,11,84,177,37,112,87,58,73,72,30,38,95,126,156,91,47,2,76,141,129,165,65,104,77,44,121,172,176,21,23}, // permutation 4
{49,21,71,54,85,114,128,67,112,119,38,130,44,167,189,180,41,56,50,86,9,63,190,127,51,91,58,135,68,175,99,108,82,133,147,117,152,153,136,165,30,116,11,110,184,194,122,104,92,42,77,23,186,17,100,25,146,160,158,118,137,29,150,103,170,43,15,171,181,74,132,2,39,161,134,53,61,84,169,140,145,163,193,48,172,87,64,18,162,34,76,125,139,26,97,81,188,78,20,111,141,36,155,98,79,182,124,72,121,7,107,174,195,177,8,1,115,22,143,83,80,6,57,106,60,129,102,144,176,187,45,168,27,95,69,178,154,12,4,164,96,89,166,126,94,35,157,66,0,191,151,173,47,32,24,3,14,88,70,120,142,73,62,52,101,183,105,37,149,19,185,138,13,159,59,40,46,113,156,179,10,28,131,148,192,16,31,33,5,123,65,90,93,55,109,75}, // permutation 5
{120,127,40,71,158,44,6,61,173,166,190,110,29,13,12,176,78,30,90,115,113,83,38,174,81,104,15,161,135,175,180,165,41,65,27,140,137,145,89,9,114,181,178,17,119,53,167,16,107,57,121,133,138,54,67,25,130,149,150,109,147,99,141,96,10,122,111,131,159,11,32,118,191,79,3,39,63,93,102,152,156,56,86,194,146,5,105,151,171,168,69,7,154,101,70,95,157,34,98,36,62,85,97,177,84,187,21,31,148,51,142,160,47,116,170,188,24,52,23,123,100,46,66,8,2,193,74,45,68,14,58,189,112,87,64,108,163,4,179,139,59,48,143,1,33,186,129,144,155,77,28,185,103,164,183,72,42,182,35,132,153,26,0,117,136,125,37,82,126,49,162,195,169,184,91,75,60,106,88,50,76,73,94,55,134,128,192,43,172,80,124,18,19,22,20,92}, // permutation 6
{49,66,80,195,91,48,81,69,159,63,54,140,55,36,188,14,26,97,145,101,99,160,19,84,71,143,168,133,46,180,172,134,64,76,192,67,12,98,116,20,65,68,166,75,186,89,78,107,164,175,154,163,158,176,22,178,152,115,139,41,123,38,42,191,184,33,182,173,177,87,129,100,118,21,6,82,179,190,127,117,8,153,52,187,144,194,108,106,47,96,92,88,103,146,3,9,83,141,174,27,171,169,110,31,193,50,2,119,28,53,70,77,149,95,185,59,113,131,126,147,120,44,37,29,124,102,112,157,104,24,30,122,43,86,58,189,7,121,170,35,135,23,162,57,94,156,11,90,18,105,183,79,61,109,5,13,74,138,125,1,56,17,10,136,72,32,111,0,25,16,93,128,34,181,132,150,142,130,15,73,151,4,39,161,60,62,114,167,45,40,155,148,137,165,85,51}, // permutation 7
{184,151,34,12,89,172,166,76,23,150,160,191,139,0,180,177,97,189,104,92,165,24,86,110,145,175,119,54,40,73,107,183,105,127,106,148,157,153,78,3,111,187,159,44,47,121,9,163,115,52,11,140,62,99,31,41,75,101,132,116,93,57,71,6,188,149,48,178,154,25,152,50,185,91,98,46,124,109,33,138,112,32,146,17,18,59,120,195,133,80,64,38,14,144,131,58,137,190,167,30,103,158,122,65,29,194,55,96,26,164,113,82,174,45,100,186,147,28,102,63,39,61,123,176,168,7,173,143,70,81,1,19,135,141,51,136,83,27,108,22,181,49,162,134,130,37,90,117,43,95,193,171,2,128,10,114,77,156,35,8,142,84,192,56,129,36,5,21,155,179,68,169,20,87,42,16,67,94,69,182,88,53,13,15,118,85,79,170,126,125,161,66,60,74,72,4}, // permutation 8
{147,11,72,30,64,67,179,52,14,134,183,141,135,2,172,142,19,127,66,190,34,59,144,186,194,169,176,129,12,124,28,33,89,170,17,117,77,193,182,138,44,154,185,55,4,27,104,160,157,143,63,47,50,97,8,180,181,100,184,32,41,39,94,132,20,120,112,38,118,69,159,5,145,76,15,0,146,122,109,71,40,73,21,195,156,103,68,70,177,86,36,85,188,166,128,62,42,24,137,192,110,61,149,168,102,151,37,108,111,191,163,22,16,174,150,82,161,101,99,189,56,148,140,96,121,18,178,25,48,106,43,116,6,79,123,81,119,164,165,88,93,95,23,173,187,171,60,105,107,133,7,1,49,125,57,80,90,29,87,113,152,115,139,92,31,78,75,126,45,167,175,130,53,84,155,162,10,51,26,158,114,98,91,3,9,13,35,74,46,136,131,65,54,153,58,83} // permutation 9
};

// Seed: 2597525862

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int8_t  f1;
   volatile uint64_t  f2;
   int64_t  f3;
   volatile uint64_t  f4;
   volatile int32_t  f5;
   volatile uint64_t  f6;
   volatile uint16_t  f7;
};

struct S1 {
    int32_t g_50;
    int32_t g_54;
    uint8_t g_58;
    int8_t g_76;
    int8_t g_77;
    int8_t *g_89;
    int32_t * volatile g_94;
    volatile struct S0 * volatile g_219;
    int64_t g_253[9][8][3];
    uint32_t g_254;
    int32_t g_270;
    int16_t g_273;
    uint32_t g_274[9][2];
    uint16_t g_280;
    struct S0 g_298;
    struct S0 *g_297;
    int32_t g_300[10][10];
    VECTOR(int64_t, 16) g_529;
    volatile VECTOR(int64_t, 16) g_530;
    volatile VECTOR(int64_t, 16) g_532;
    int32_t g_569;
    int32_t *g_568;
    int32_t **g_567;
    struct S0 g_579[10];
    uint64_t g_585;
    struct S0 g_587;
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
uint32_t  func_1(struct S1 * p_588);
struct S0  func_61(int32_t * p_62, int32_t ** p_63, int64_t  p_64, uint64_t  p_65, int32_t ** p_66, struct S1 * p_588);
int8_t  func_68(uint32_t  p_69, int32_t * p_70, uint32_t  p_71, struct S1 * p_588);
uint32_t  func_78(uint32_t  p_79, int32_t  p_80, struct S1 * p_588);
uint32_t  func_81(uint32_t  p_82, uint16_t  p_83, int32_t  p_84, struct S1 * p_588);
int32_t  func_91(int32_t  p_92, int32_t  p_93, struct S1 * p_588);
int8_t  func_211(int32_t  p_212, struct S1 * p_588);
int32_t * func_214(int32_t ** p_215, uint16_t  p_216, int8_t  p_217, int32_t * p_218, struct S1 * p_588);
struct S0 * func_221(struct S0 * p_222, uint64_t  p_223, struct S1 * p_588);
struct S0 * func_224(int32_t  p_225, int32_t ** p_226, struct S1 * p_588);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_588->g_50 p_588->g_58 p_588->g_54 p_588->g_77 p_588->g_89 p_588->g_comm_values p_588->l_comm_values p_588->g_219 p_588->g_76 p_588->g_254 p_588->g_274 p_588->g_297 p_588->g_298.f1 p_588->g_280 p_588->g_529 p_588->g_530 p_588->g_532 p_588->g_300 p_588->g_270 p_588->g_298.f0 p_588->g_298.f3 p_588->g_567 p_588->g_568 p_588->g_579 p_588->g_587 p_588->g_298.f2
 * writes: p_588->g_50 p_588->g_58 p_588->g_76 p_588->g_77 p_588->g_254 p_588->g_274 p_588->g_273 p_588->g_54 p_588->g_253 p_588->g_280 p_588->g_300 p_588->g_569 p_588->g_585 p_588->g_568 p_588->g_298
 */
uint32_t  func_1(struct S1 * p_588)
{ /* block id: 4 */
    int32_t *l_67 = &p_588->g_54;
    int8_t *l_75 = &p_588->g_76;
    int32_t l_90 = 0x1BA0D895L;
    int64_t *l_566[9] = {&p_588->g_253[4][2][1],&p_588->g_253[4][2][1],&p_588->g_253[4][2][1],&p_588->g_253[4][2][1],&p_588->g_253[4][2][1],&p_588->g_253[4][2][1],&p_588->g_253[4][2][1],&p_588->g_253[4][2][1],&p_588->g_253[4][2][1]};
    int i;
    if ((atomic_inc(&p_588->l_atomic_input[22]) == 7))
    { /* block id: 6 */
        int32_t l_3 = 6L;
        int32_t *l_2 = &l_3;
        int32_t *l_4 = &l_3;
        l_4 = l_2;
        for (l_3 = 0; (l_3 <= (-27)); l_3 = safe_sub_func_int64_t_s_s(l_3, 4))
        { /* block id: 10 */
            int32_t *l_7 = (void*)0;
            struct S0 l_8 = {-1L,0x1AL,1UL,0L,5UL,0x34B64B5CL,2UL,0UL};/* VOLATILE GLOBAL l_8 */
            struct S0 l_9 = {0x04B064BAE0FC36FEL,-7L,0x6C0E2632C5B641B4L,0x2DCA1A1F050678E0L,0x5DCEFBDE283BC1B0L,1L,18446744073709551615UL,1UL};/* VOLATILE GLOBAL l_9 */
            l_2 = l_7;
            l_9 = l_8;
            for (l_9.f3 = 4; (l_9.f3 > (-20)); l_9.f3 = safe_sub_func_int8_t_s_s(l_9.f3, 7))
            { /* block id: 15 */
                int8_t l_12 = 0x48L;
                int64_t l_13 = (-1L);
                int16_t l_14 = 0x211EL;
                uint32_t l_15 = 1UL;
                uint32_t l_16 = 0xB4983CA3L;
                int32_t l_19 = (-1L);
                int32_t *l_18[10] = {(void*)0,&l_19,(void*)0,(void*)0,&l_19,(void*)0,(void*)0,&l_19,(void*)0,(void*)0};
                int32_t **l_17 = &l_18[5];
                int32_t **l_20 = (void*)0;
                uint16_t l_21[9][1];
                uint16_t l_22 = 1UL;
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_21[i][j] = 0x8698L;
                }
                l_13 = l_12;
                l_20 = ((l_16 = (l_14 , ((VECTOR(int32_t, 4))(0x7420EA1BL, (l_15 = 0x24E63097L), 3L, 1L)).z)) , l_17);
                l_22 = l_21[0][0];
                for (l_15 = 27; (l_15 <= 1); l_15--)
                { /* block id: 23 */
                    int32_t l_25 = 0L;
                    uint16_t l_34 = 65535UL;
                    for (l_25 = 24; (l_25 <= 18); --l_25)
                    { /* block id: 26 */
                        int32_t l_28 = 0x02F3C076L;
                        int32_t l_29 = 0x5F607DBCL;
                        uint32_t l_30 = 1UL;
                        int32_t l_31 = 0x6E8C4B05L;
                        int32_t *l_32 = &l_29;
                        int32_t *l_33 = &l_28;
                        l_31 |= (l_28 , (l_30 &= l_29));
                        l_33 = l_32;
                    }
                    if (l_34)
                    { /* block id: 31 */
                        VECTOR(uint32_t, 4) l_35 = (VECTOR(uint32_t, 4))(0x99B5F277L, (VECTOR(uint32_t, 2))(0x99B5F277L, 0UL), 0UL);
                        uint32_t l_38 = 1UL;
                        int i;
                        --l_35.y;
                        --l_38;
                    }
                    else
                    { /* block id: 34 */
                        uint64_t l_41[7];
                        uint64_t l_42 = 0x0C30F141BD8E7029L;
                        struct S0 l_43 = {-2L,1L,0UL,-8L,0x020822C3E505CE50L,0x2DE1722BL,8UL,0x0E3FL};/* VOLATILE GLOBAL l_43 */
                        VECTOR(int32_t, 8) l_44 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4D501105L), 0x4D501105L), 0x4D501105L, 1L, 0x4D501105L);
                        VECTOR(int32_t, 8) l_45 = (VECTOR(int32_t, 8))(0x07B83529L, (VECTOR(int32_t, 4))(0x07B83529L, (VECTOR(int32_t, 2))(0x07B83529L, 1L), 1L), 1L, 0x07B83529L, 1L);
                        int8_t l_46 = 0x4DL;
                        int32_t *l_48 = (void*)0;
                        int32_t **l_47[6][3] = {{&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48}};
                        int32_t **l_49 = &l_48;
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_41[i] = 0x6C132D45AB60A95AL;
                        l_8 = ((l_41[5] , l_42) , (((VECTOR(int64_t, 4))(2L, 0x595D6068D11A6C9CL, 0x2CF37692AFB55E8AL, (-1L))).x , l_43));
                        l_46 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_44.s42)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_45.s26775532)).s4725060150443426)).sab))))).yyyy)).even)).even;
                        l_44.s0 = (-7L);
                        l_49 = l_47[1][1];
                    }
                }
            }
        }
        unsigned int result = 0;
        result += l_3;
        atomic_add(&p_588->l_special_values[22], result);
    }
    else
    { /* block id: 43 */
        (1 + 1);
    }
    for (p_588->g_50 = 0; (p_588->g_50 >= (-17)); p_588->g_50 = safe_sub_func_uint16_t_u_u(p_588->g_50, 9))
    { /* block id: 48 */
        int32_t *l_53 = &p_588->g_54;
        int32_t *l_55 = &p_588->g_54;
        int32_t *l_56 = &p_588->g_54;
        int32_t *l_57[8] = {&p_588->g_50,&p_588->g_54,&p_588->g_50,&p_588->g_50,&p_588->g_54,&p_588->g_50,&p_588->g_50,&p_588->g_54};
        int i;
        ++p_588->g_58;
        return p_588->g_54;
    }
    (*p_588->g_297) = func_61(l_67, &l_67, ((*l_67) = (func_68((p_588->g_77 &= (safe_sub_func_uint64_t_u_u(p_588->g_54, (safe_unary_minus_func_int8_t_s(((*l_75) = (*l_67))))))), &p_588->g_50, (func_78(func_81(p_588->g_54, (safe_sub_func_int16_t_s_s(((*l_67) < 246UL), (((safe_mod_func_uint16_t_u_u(((void*)0 != p_588->g_89), l_90)) <= p_588->g_54) <= (*l_67)))), p_588->g_comm_values[p_588->tid], p_588), p_588->g_comm_values[p_588->tid], p_588) , 0x4636818AL), p_588) >= (-1L))), p_588->g_529.sa, p_588->g_567, p_588);
    return p_588->g_298.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_568 p_588->g_579 p_588->g_529 p_588->g_76 p_588->g_54 p_588->g_587
 * writes: p_588->g_273 p_588->g_569 p_588->g_585 p_588->g_54 p_588->g_568
 */
struct S0  func_61(int32_t * p_62, int32_t ** p_63, int64_t  p_64, uint64_t  p_65, int32_t ** p_66, struct S1 * p_588)
{ /* block id: 365 */
    VECTOR(uint32_t, 2) l_580 = (VECTOR(uint32_t, 2))(4294967288UL, 4294967295UL);
    int i;
    for (p_64 = (-4); (p_64 < 4); p_64 = safe_add_func_uint32_t_u_u(p_64, 4))
    { /* block id: 368 */
        int16_t *l_576 = &p_588->g_273;
        VECTOR(int64_t, 8) l_581 = (VECTOR(int64_t, 8))(0x24B2639F61C8649AL, (VECTOR(int64_t, 4))(0x24B2639F61C8649AL, (VECTOR(int64_t, 2))(0x24B2639F61C8649AL, (-1L)), (-1L)), (-1L), 0x24B2639F61C8649AL, (-1L));
        uint64_t *l_584 = &p_588->g_585;
        int32_t l_586 = 0L;
        int i;
        (*p_62) &= (safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((((**p_66) = (1L != ((*l_576) = 0x1E25L))) , (safe_add_func_int16_t_s_s(5L, p_64))), ((*l_584) = ((p_588->g_579[8] , (((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 2))(0x4DEAB38AL, 0xE6DF0A60L)).yxyxyyyyxyxyxxxy, ((VECTOR(uint32_t, 16))(l_580.yyxyyyxxxxxyyyyy))))).s6 & ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_581.s1234354072614732)).even)).s4)) <= (0L || (((0x16L | (p_65 , (safe_mul_func_uint8_t_u_u(((p_588->g_529.s8 , p_588->g_76) >= p_64), GROUP_DIVERGE(2, 1))))) ^ l_580.x) , 0x7BDC359F98C2C62BL)))))), l_586));
        (*p_66) = (*p_66);
    }
    return p_588->g_587;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->l_comm_values p_588->g_77 p_588->g_58 p_588->g_219 p_588->g_54 p_588->g_50 p_588->g_76 p_588->g_254 p_588->g_274 p_588->g_297 p_588->g_298.f1 p_588->g_280 p_588->g_529 p_588->g_530 p_588->g_532 p_588->g_300 p_588->g_270 p_588->g_298.f0 p_588->g_comm_values p_588->g_298.f3
 * writes: p_588->g_58 p_588->g_50 p_588->g_76 p_588->g_254 p_588->g_274 p_588->g_273 p_588->g_54 p_588->g_253 p_588->g_280 p_588->g_300
 */
int8_t  func_68(uint32_t  p_69, int32_t * p_70, uint32_t  p_71, struct S1 * p_588)
{ /* block id: 140 */
    int32_t l_213 = 3L;
    uint32_t *l_565 = &p_588->g_274[7][1];
    (*p_70) = func_81(((*l_565) = (safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(p_588->l_comm_values[(safe_mod_func_uint32_t_u_u(p_588->tid, 196))], p_588->g_77)), (safe_div_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((((p_71 > func_91((p_588->g_58 || func_211(l_213, p_588)), (0x1A7B175744F19FA7L | ((p_588->g_529.s9 , p_588->g_comm_values[p_588->tid]) | p_69)), p_588)) > 18446744073709551615UL) ^ l_213), p_69)) | p_588->g_529.s7), l_213))))), l_213, p_588->g_298.f3, p_588);
    return l_213;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_54
 * writes: p_588->g_50
 */
uint32_t  func_78(uint32_t  p_79, int32_t  p_80, struct S1 * p_588)
{ /* block id: 59 */
    int32_t *l_201 = &p_588->g_54;
    int32_t **l_200 = &l_201;
    int32_t *l_202 = &p_588->g_50;
    if ((atomic_inc(&p_588->l_atomic_input[26]) == 1))
    { /* block id: 61 */
        uint16_t l_96 = 1UL;
        int32_t l_97 = 0L;
        uint32_t l_98 = 4294967288UL;
        uint32_t l_99 = 0x6864248AL;
        int32_t l_100 = 0x050BF12BL;
        int64_t l_101 = 0x6721E4501C69F0B4L;
        VECTOR(int32_t, 16) l_189 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6E45068FL), 0x6E45068FL), 0x6E45068FL, 1L, 0x6E45068FL, (VECTOR(int32_t, 2))(1L, 0x6E45068FL), (VECTOR(int32_t, 2))(1L, 0x6E45068FL), 1L, 0x6E45068FL, 1L, 0x6E45068FL);
        uint32_t l_190 = 5UL;
        int8_t l_191 = 1L;
        VECTOR(int32_t, 16) l_192 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
        VECTOR(int32_t, 8) l_193 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x0FE71C25L), 0x0FE71C25L), 0x0FE71C25L, (-6L), 0x0FE71C25L);
        VECTOR(int32_t, 2) l_194 = (VECTOR(int32_t, 2))(0x2E6DAE2CL, 7L);
        int32_t l_195 = 0x1424F645L;
        int32_t l_196 = 0x40894DA3L;
        uint16_t l_197 = 0x6E2EL;
        uint32_t l_198 = 0x0B236780L;
        int16_t l_199 = 7L;
        int i;
        l_99 = ((l_97 ^= ((GROUP_DIVERGE(1, 1) , l_96) , FAKE_DIVERGE(p_588->local_1_offset, get_local_id(1), 10))) , l_98);
        if ((l_101 = (l_100 &= (-2L))))
        { /* block id: 66 */
            uint16_t l_102 = 65531UL;
            uint8_t l_113[10] = {0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL};
            int64_t l_114 = (-1L);
            int i;
            l_102++;
            for (l_102 = (-25); (l_102 != 14); ++l_102)
            { /* block id: 70 */
                uint8_t l_107 = 0UL;
                int64_t l_108 = 0x400369CA922C56DEL;
                int32_t l_110 = 1L;
                int32_t *l_109[5];
                int32_t *l_111 = (void*)0;
                int32_t *l_112 = &l_110;
                int i;
                for (i = 0; i < 5; i++)
                    l_109[i] = &l_110;
                l_109[4] = (l_112 = (l_107 , ((l_101 = l_108) , (l_111 = (FAKE_DIVERGE(p_588->local_1_offset, get_local_id(1), 10) , l_109[4])))));
            }
            if ((l_114 = l_113[8]))
            { /* block id: 77 */
                int32_t l_115 = 0x3692C56CL;
                uint64_t l_140 = 6UL;
                uint64_t l_141[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_141[i] = 0x2E5DFB398794C979L;
                for (l_115 = 0; (l_115 < 24); l_115 = safe_add_func_int16_t_s_s(l_115, 9))
                { /* block id: 80 */
                    VECTOR(int32_t, 16) l_118 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x1CD64B8FL), 0x1CD64B8FL), 0x1CD64B8FL, 4L, 0x1CD64B8FL, (VECTOR(int32_t, 2))(4L, 0x1CD64B8FL), (VECTOR(int32_t, 2))(4L, 0x1CD64B8FL), 4L, 0x1CD64B8FL, 4L, 0x1CD64B8FL);
                    int16_t l_119 = (-3L);
                    int16_t l_120 = (-1L);
                    VECTOR(int32_t, 16) l_121 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x699D52E2L), 0x699D52E2L), 0x699D52E2L, (-1L), 0x699D52E2L, (VECTOR(int32_t, 2))((-1L), 0x699D52E2L), (VECTOR(int32_t, 2))((-1L), 0x699D52E2L), (-1L), 0x699D52E2L, (-1L), 0x699D52E2L);
                    VECTOR(int32_t, 8) l_122 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5DE94EDEL), 0x5DE94EDEL), 0x5DE94EDEL, (-1L), 0x5DE94EDEL);
                    VECTOR(int32_t, 4) l_123 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L);
                    uint32_t l_124 = 1UL;
                    uint32_t l_125 = 4294967295UL;
                    VECTOR(int32_t, 2) l_126 = (VECTOR(int32_t, 2))(0x67205C45L, 0x5FB24A31L);
                    VECTOR(int32_t, 8) l_127 = (VECTOR(int32_t, 8))(0x6667A4CDL, (VECTOR(int32_t, 4))(0x6667A4CDL, (VECTOR(int32_t, 2))(0x6667A4CDL, 0x2C8F595BL), 0x2C8F595BL), 0x2C8F595BL, 0x6667A4CDL, 0x2C8F595BL);
                    int64_t l_128 = 0x6C1A719620DE4005L;
                    uint64_t l_129 = 0x27D3598B098B969CL;
                    VECTOR(int64_t, 16) l_130 = (VECTOR(int64_t, 16))(0x18B4FF7E3BC08C71L, (VECTOR(int64_t, 4))(0x18B4FF7E3BC08C71L, (VECTOR(int64_t, 2))(0x18B4FF7E3BC08C71L, 4L), 4L), 4L, 0x18B4FF7E3BC08C71L, 4L, (VECTOR(int64_t, 2))(0x18B4FF7E3BC08C71L, 4L), (VECTOR(int64_t, 2))(0x18B4FF7E3BC08C71L, 4L), 0x18B4FF7E3BC08C71L, 4L, 0x18B4FF7E3BC08C71L, 4L);
                    VECTOR(int32_t, 2) l_131 = (VECTOR(int32_t, 2))((-8L), 0x2C86F730L);
                    uint8_t l_132 = 251UL;
                    VECTOR(int32_t, 16) l_133 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    uint32_t l_134 = 1UL;
                    uint8_t l_135 = 0x78L;
                    int32_t l_136[6][7][2] = {{{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L}},{{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L}},{{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L}},{{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L}},{{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L}},{{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L},{0x43CDCB43L,0x43CDCB43L}}};
                    int32_t l_137 = 0x32DB0CE1L;
                    uint32_t l_138[8] = {0x77B9BCB2L,0x77B9BCB2L,0x77B9BCB2L,0x77B9BCB2L,0x77B9BCB2L,0x77B9BCB2L,0x77B9BCB2L,0x77B9BCB2L};
                    int64_t l_139 = 1L;
                    int i, j, k;
                    l_139 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_118.s5b)), 0x715829BAL, 5L)).lo)), 1L, 0x26D1EE20L)), ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))((-8L), 0L)).xxxxyxyyyxyxxxxx, ((VECTOR(int32_t, 16))(0x361D1304L, (l_119 , (l_137 = (((l_120 , FAKE_DIVERGE(p_588->global_0_offset, get_global_id(0), 10)) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_121.sda10)).even, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_122.s4045602631555306)), ((VECTOR(int32_t, 8))((-7L), ((VECTOR(int32_t, 2))(l_123.xw)), (-6L), 0x3AF8CB8FL, (l_125 = l_124), 0x75BE2A38L, 0x4D10D832L)).s7704071221420432, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6C501646L, 0x3DE630C7L)), 0x423E70AEL, 0x78AFB31AL)).xwyzyyxxyzzxyywy))).s1d))), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(l_126.xxyxxxyx)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))((-8L), ((VECTOR(int32_t, 8))(l_127.s24605335)), 1L, ((VECTOR(int32_t, 2))((-6L), 0x49E589B7L)), (l_130.s5 |= (l_129 = (l_128 ^= 4L))), 8L, 9L, 1L)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_131.xyyy)).odd)).xxyxxxyxyxxxxyxy)).odd))).even)).wzzwwxxzzyyzyzyy)).s3880))).even)))))), ((VECTOR(int32_t, 8))((-1L), 0L, l_132, ((VECTOR(int32_t, 2))(0x132FC06CL, (-3L))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_133.s6163bbe5bf61d406)).scb)), 0x74407CCEL)).s43))))))).lo) , (((l_134 , l_135) , ((VECTOR(uint64_t, 2))(7UL, 18446744073709551614UL)).even) , l_136[1][6][1])))), 0x267A7CB4L, l_138[4], 0x306FF473L, ((VECTOR(int32_t, 4))(0x6157937CL)), 0x20149EDFL, ((VECTOR(int32_t, 2))(0L)), 6L, ((VECTOR(int32_t, 2))(0x097D27A3L)), 0L))))).s2, (-2L), ((VECTOR(int32_t, 8))(0x3D94EE24L)), 0x3CAA1AADL, 0L)).s6;
                }
                l_141[2] = l_140;
            }
            else
            { /* block id: 89 */
                uint16_t l_142 = 0xC46FL;
                int32_t l_143[9][7][4] = {{{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)}},{{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)}},{{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)}},{{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)}},{{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)}},{{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)}},{{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)}},{{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)}},{{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)},{0x5D0EBA8DL,0x265D3118L,9L,(-1L)}}};
                uint8_t l_144 = 250UL;
                int16_t l_145 = 0x644FL;
                uint32_t l_146 = 4294967290UL;
                uint32_t l_147 = 0x2B6AA699L;
                int16_t l_148 = 3L;
                uint16_t l_149[1];
                int8_t l_150 = 0x3EL;
                uint64_t l_158 = 0xB9BB303BE4332A91L;
                uint8_t l_161 = 255UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_149[i] = 65532UL;
                l_150 ^= (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((l_142 = 0x11E8L), ((VECTOR(int16_t, 8))(l_143[3][3][0], 9L, l_144, (l_145 , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, (-1L))), 0x5E8BL, 0x0E32L)).x), 0x3375L, 0x3DD4L, 0x4E27L, 5L)), ((l_100 = l_146) , ((VECTOR(int16_t, 4))((l_147 , l_148), l_149[0], 0x29F0L, 0x4F30L)).w), ((VECTOR(int16_t, 2))(9L)), ((VECTOR(int16_t, 4))((-1L))))).s7, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 2))((-6L))), (-1L))).s5 , (-2L));
                for (l_149[0] = 0; (l_149[0] == 22); l_149[0]++)
                { /* block id: 95 */
                    int32_t l_153 = 0x5AAF68CCL;
                    for (l_153 = (-14); (l_153 < (-14)); l_153++)
                    { /* block id: 98 */
                        VECTOR(uint32_t, 4) l_156 = (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 9UL), 9UL);
                        int16_t l_157 = 0x0131L;
                        int i;
                        l_157 &= (l_143[3][3][0] = l_156.y);
                    }
                }
                ++l_158;
                l_143[3][4][2] ^= l_161;
            }
        }
        else
        { /* block id: 106 */
            int32_t l_162[2];
            int32_t *l_181 = &l_162[0];
            int32_t *l_182[8] = {&l_162[0],&l_162[0],&l_162[0],&l_162[0],&l_162[0],&l_162[0],&l_162[0],&l_162[0]};
            int32_t *l_183 = &l_162[0];
            uint32_t l_184 = 4294967289UL;
            struct S0 l_186 = {-1L,4L,0x4B272FC51319C18CL,0x26210C82DC3F1970L,0xB9CACC8E27A5988CL,4L,8UL,0x8E0AL};/* VOLATILE GLOBAL l_186 */
            struct S0 *l_185 = &l_186;
            struct S0 *l_187 = &l_186;
            struct S0 *l_188 = &l_186;
            int i;
            for (i = 0; i < 2; i++)
                l_162[i] = 7L;
            for (l_162[0] = 0; (l_162[0] != 17); l_162[0]++)
            { /* block id: 109 */
                int32_t l_165 = 0x1409FF84L;
                for (l_165 = 0; (l_165 > 25); ++l_165)
                { /* block id: 112 */
                    int32_t l_168 = 0x7B8FB8ABL;
                    struct S0 *l_178 = (void*)0;
                    struct S0 l_180 = {0x42F6B5376D6D69B0L,1L,1UL,0L,2UL,1L,0xA1A07391C9919D5EL,0x635DL};/* VOLATILE GLOBAL l_180 */
                    struct S0 *l_179 = &l_180;
                    for (l_168 = 0; (l_168 == (-15)); --l_168)
                    { /* block id: 115 */
                        uint32_t l_171 = 0UL;
                        int32_t l_173 = 9L;
                        int32_t *l_172 = &l_173;
                        int32_t *l_174 = &l_173;
                        uint32_t l_175 = 1UL;
                        uint64_t l_176 = 0x8E6D00B59880F5AFL;
                        uint16_t l_177 = 65534UL;
                        l_171 = 0L;
                        l_174 = l_172;
                        l_177 &= (l_176 ^= l_175);
                    }
                    l_179 = l_178;
                }
            }
            l_183 = (l_182[0] = l_181);
            l_188 = (l_184 , (l_187 = l_185));
        }
        l_199 = (l_198 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_189.s4a979d5404555042)).s1, (-9L), 0x31C92298L, (l_197 = (l_190 , (l_191 , (l_196 = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_192.sd3)))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(0x2122F168L, (-5L))).xxyyxxxyxxxxxyxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_193.s23247053)).s6067166021673264)).s94)).yxxxxxxxyyyxyyyy))))).s30))).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_194.yy)))).lo, (-1L), 0L)).x , (l_195 = 0x4934B161L)))))), 0x58E8656EL, 3L, 0x3FD831ACL, 3L)).s4);
        unsigned int result = 0;
        result += l_96;
        result += l_97;
        result += l_98;
        result += l_99;
        result += l_100;
        result += l_101;
        result += l_189.sf;
        result += l_189.se;
        result += l_189.sd;
        result += l_189.sc;
        result += l_189.sb;
        result += l_189.sa;
        result += l_189.s9;
        result += l_189.s8;
        result += l_189.s7;
        result += l_189.s6;
        result += l_189.s5;
        result += l_189.s4;
        result += l_189.s3;
        result += l_189.s2;
        result += l_189.s1;
        result += l_189.s0;
        result += l_190;
        result += l_191;
        result += l_192.sf;
        result += l_192.se;
        result += l_192.sd;
        result += l_192.sc;
        result += l_192.sb;
        result += l_192.sa;
        result += l_192.s9;
        result += l_192.s8;
        result += l_192.s7;
        result += l_192.s6;
        result += l_192.s5;
        result += l_192.s4;
        result += l_192.s3;
        result += l_192.s2;
        result += l_192.s1;
        result += l_192.s0;
        result += l_193.s7;
        result += l_193.s6;
        result += l_193.s5;
        result += l_193.s4;
        result += l_193.s3;
        result += l_193.s2;
        result += l_193.s1;
        result += l_193.s0;
        result += l_194.y;
        result += l_194.x;
        result += l_195;
        result += l_196;
        result += l_197;
        result += l_198;
        result += l_199;
        atomic_add(&p_588->l_special_values[26], result);
    }
    else
    { /* block id: 134 */
        (1 + 1);
    }
    (*l_202) = (GROUP_DIVERGE(2, 1) | (&p_588->g_54 != ((*l_200) = &p_588->g_54)));
    return p_588->g_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_comm_values p_588->l_comm_values p_588->g_50
 * writes: p_588->g_50
 */
uint32_t  func_81(uint32_t  p_82, uint16_t  p_83, int32_t  p_84, struct S1 * p_588)
{ /* block id: 54 */
    int32_t *l_95 = &p_588->g_50;
    (*l_95) ^= func_91(p_588->g_comm_values[p_588->tid], p_588->l_comm_values[(safe_mod_func_uint32_t_u_u(p_588->tid, 196))], p_588);
    return (*l_95);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_91(int32_t  p_92, int32_t  p_93, struct S1 * p_588)
{ /* block id: 55 */
    return p_92;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_219 p_588->g_54 p_588->g_58 p_588->g_50 p_588->g_76 p_588->g_254 p_588->g_274 p_588->g_297 p_588->g_298.f1 p_588->g_280 p_588->g_529 p_588->g_530 p_588->g_532 p_588->g_300 p_588->g_270 p_588->g_298.f0
 * writes: p_588->g_58 p_588->g_50 p_588->g_76 p_588->g_254 p_588->g_274 p_588->g_273 p_588->g_54 p_588->g_253 p_588->g_280 p_588->g_300
 */
int8_t  func_211(int32_t  p_212, struct S1 * p_588)
{ /* block id: 141 */
    int8_t *l_220 = (void*)0;
    int32_t *l_230 = &p_588->g_50;
    int32_t **l_229 = &l_230;
    uint16_t l_289[3][1][7] = {{{65529UL,0x3E22L,9UL,0x3E22L,65529UL,65529UL,0x3E22L}},{{65529UL,0x3E22L,9UL,0x3E22L,65529UL,65529UL,0x3E22L}},{{65529UL,0x3E22L,9UL,0x3E22L,65529UL,65529UL,0x3E22L}}};
    int32_t *l_299 = &p_588->g_300[6][6];
    int i, j, k;
    atomic_or(&p_588->l_atomic_reduction[0], p_212 + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_588->v_collective += p_588->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    l_299 = ((*l_229) = func_214(((p_588->g_219 != ((p_588->g_54 , (l_220 != (void*)0)) , func_221(func_224((safe_rshift_func_uint16_t_u_u((((p_212 , &p_588->g_77) != l_220) || (p_212 == p_212)), 13)), l_229, p_588), l_289[2][0][0], p_588))) , &l_230), p_588->g_298.f1, p_212, l_299, p_588));
    return (*l_299);
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_280 p_588->g_529 p_588->g_530 p_588->g_532 p_588->g_58 p_588->g_300 p_588->g_270 p_588->g_54 p_588->g_298.f0
 * writes: p_588->g_280 p_588->g_274 p_588->g_253 p_588->g_273 p_588->g_300
 */
int32_t * func_214(int32_t ** p_215, uint16_t  p_216, int8_t  p_217, int32_t * p_218, struct S1 * p_588)
{ /* block id: 197 */
    int64_t l_537 = 0x3905F5E5127CF7B8L;
    uint32_t l_547 = 1UL;
    int32_t l_548[9];
    VECTOR(uint8_t, 4) l_551 = (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 253UL), 253UL);
    int32_t l_555 = 1L;
    int32_t *l_556 = &p_588->g_50;
    int32_t *l_557 = (void*)0;
    int32_t *l_558 = (void*)0;
    int32_t *l_559 = &p_588->g_50;
    int32_t *l_560 = &p_588->g_300[6][6];
    int32_t *l_561[5] = {&p_588->g_54,&p_588->g_54,&p_588->g_54,&p_588->g_54,&p_588->g_54};
    uint8_t l_562 = 0UL;
    int i;
    for (i = 0; i < 9; i++)
        l_548[i] = 0x787727B7L;
    for (p_588->g_280 = 0; (p_588->g_280 == 32); p_588->g_280++)
    { /* block id: 200 */
        VECTOR(int64_t, 2) l_531 = (VECTOR(int64_t, 2))(0x387F6CF9DF2F57C5L, 0x5D54B680A2508394L);
        uint32_t *l_544 = &p_588->g_274[7][1];
        int16_t l_549 = 0x3A1BL;
        int64_t *l_550[2];
        int32_t l_552 = (-4L);
        int i;
        for (i = 0; i < 2; i++)
            l_550[i] = (void*)0;
        if ((atomic_inc(&p_588->l_atomic_input[9]) == 3))
        { /* block id: 202 */
            int32_t l_303 = 0x2532BCFAL;
            VECTOR(int32_t, 2) l_353 = (VECTOR(int32_t, 2))(0x52AA8FB7L, 0x2756B1A0L);
            int32_t l_354 = (-1L);
            uint64_t l_365[2][9] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,0x937E26A3DC60F209L,18446744073709551615UL,0x937E26A3DC60F209L,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,0x937E26A3DC60F209L,18446744073709551615UL,0x937E26A3DC60F209L,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL}};
            uint16_t l_524 = 0x5B08L;
            int i, j;
            for (l_303 = 0; (l_303 != 12); ++l_303)
            { /* block id: 205 */
                VECTOR(int16_t, 4) l_306 = (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-1L)), (-1L));
                VECTOR(int32_t, 8) l_307 = (VECTOR(int32_t, 8))(0x20F47FAEL, (VECTOR(int32_t, 4))(0x20F47FAEL, (VECTOR(int32_t, 2))(0x20F47FAEL, 0x063A27B2L), 0x063A27B2L), 0x063A27B2L, 0x20F47FAEL, 0x063A27B2L);
                int16_t l_308[8] = {1L,4L,1L,1L,4L,1L,1L,4L};
                int8_t l_309 = 4L;
                uint64_t l_343 = 1UL;
                VECTOR(int32_t, 8) l_344 = (VECTOR(int32_t, 8))(0x660F0CE5L, (VECTOR(int32_t, 4))(0x660F0CE5L, (VECTOR(int32_t, 2))(0x660F0CE5L, 0L), 0L), 0L, 0x660F0CE5L, 0L);
                uint16_t l_345 = 0x01A7L;
                VECTOR(int32_t, 2) l_346 = (VECTOR(int32_t, 2))(0x1EFFF406L, 0x03B84FF0L);
                VECTOR(int32_t, 16) l_347 = (VECTOR(int32_t, 16))(0x46365F0AL, (VECTOR(int32_t, 4))(0x46365F0AL, (VECTOR(int32_t, 2))(0x46365F0AL, 4L), 4L), 4L, 0x46365F0AL, 4L, (VECTOR(int32_t, 2))(0x46365F0AL, 4L), (VECTOR(int32_t, 2))(0x46365F0AL, 4L), 0x46365F0AL, 4L, 0x46365F0AL, 4L);
                int64_t l_348 = 0L;
                uint8_t l_349 = 0UL;
                uint64_t l_350 = 4UL;
                int64_t l_351 = 8L;
                VECTOR(uint16_t, 8) l_352 = (VECTOR(uint16_t, 8))(0x4785L, (VECTOR(uint16_t, 4))(0x4785L, (VECTOR(uint16_t, 2))(0x4785L, 65528UL), 65528UL), 65528UL, 0x4785L, 65528UL);
                int i;
                l_309 = (l_308[1] &= ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_306.zwzxwxxx)).s2573214006463022)).sf532, ((VECTOR(uint16_t, 4))(0xDE37L, 0x8CA3L, 0UL, 4UL))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_307.s12252230)).hi))))).y);
                for (l_308[7] = 0; (l_308[7] >= 8); l_308[7] = safe_add_func_int64_t_s_s(l_308[7], 6))
                { /* block id: 210 */
                    uint32_t l_312 = 4294967295UL;
                    int16_t *l_314 = (void*)0;
                    int16_t **l_313[1];
                    int16_t **l_315 = &l_314;
                    int16_t l_316 = 0x612CL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_313[i] = &l_314;
                    l_315 = (l_312 , l_313[0]);
                    if (l_316)
                    { /* block id: 212 */
                        int8_t l_317 = 8L;
                        int32_t l_318 = 1L;
                        uint32_t l_319 = 4294967295UL;
                        int32_t *l_322[9] = {&l_318,&l_318,&l_318,&l_318,&l_318,&l_318,&l_318,&l_318,&l_318};
                        uint32_t l_323 = 0x564FD808L;
                        int64_t l_324 = 5L;
                        uint16_t l_325 = 0UL;
                        uint64_t l_326 = 18446744073709551613UL;
                        VECTOR(int32_t, 4) l_327 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x181D6DF4L), 0x181D6DF4L);
                        VECTOR(int32_t, 4) l_328 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x6212F06AL), 0x6212F06AL);
                        VECTOR(int32_t, 16) l_329 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                        VECTOR(int32_t, 16) l_330 = (VECTOR(int32_t, 16))(0x166027D1L, (VECTOR(int32_t, 4))(0x166027D1L, (VECTOR(int32_t, 2))(0x166027D1L, 4L), 4L), 4L, 0x166027D1L, 4L, (VECTOR(int32_t, 2))(0x166027D1L, 4L), (VECTOR(int32_t, 2))(0x166027D1L, 4L), 0x166027D1L, 4L, 0x166027D1L, 4L);
                        int32_t *l_331[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_331[i] = &l_318;
                        l_319++;
                        l_322[8] = (void*)0;
                        l_324 = l_323;
                        l_322[2] = (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x49L, 1L)).xyyyxxyxxyyyxyyy)))).s1 , (l_331[0] = (((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(0L, (l_325 , l_326), 0x44B3D6CBL, 0x1622A05FL)).wxxxzwyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_327.zyzwzyyzzzxzyxxy)).even)).hi, ((VECTOR(int32_t, 2))(1L, 0x34F151B1L)).xxxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_328.yx)))).xxyx))))).x, ((VECTOR(int32_t, 2))(l_329.sf1)), 0L)).wwxwzwzx, ((VECTOR(int32_t, 4))(l_330.s35fd)).xxxzxwww))).s3 , (void*)0)));
                    }
                    else
                    { /* block id: 218 */
                        uint16_t l_332 = 0x2BCAL;
                        int32_t l_335 = 1L;
                        uint64_t l_336 = 0x0EFD326E90F8A7A4L;
                        uint32_t l_339 = 0xD85EFD67L;
                        int32_t l_340[4][8][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
                        int32_t *l_341[9][6] = {{&l_335,&l_340[1][4][0],&l_340[0][0][0],&l_335,&l_340[0][0][0],&l_340[1][4][0]},{&l_335,&l_340[1][4][0],&l_340[0][0][0],&l_335,&l_340[0][0][0],&l_340[1][4][0]},{&l_335,&l_340[1][4][0],&l_340[0][0][0],&l_335,&l_340[0][0][0],&l_340[1][4][0]},{&l_335,&l_340[1][4][0],&l_340[0][0][0],&l_335,&l_340[0][0][0],&l_340[1][4][0]},{&l_335,&l_340[1][4][0],&l_340[0][0][0],&l_335,&l_340[0][0][0],&l_340[1][4][0]},{&l_335,&l_340[1][4][0],&l_340[0][0][0],&l_335,&l_340[0][0][0],&l_340[1][4][0]},{&l_335,&l_340[1][4][0],&l_340[0][0][0],&l_335,&l_340[0][0][0],&l_340[1][4][0]},{&l_335,&l_340[1][4][0],&l_340[0][0][0],&l_335,&l_340[0][0][0],&l_340[1][4][0]},{&l_335,&l_340[1][4][0],&l_340[0][0][0],&l_335,&l_340[0][0][0],&l_340[1][4][0]}};
                        int32_t *l_342[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j, k;
                        ++l_332;
                        ++l_336;
                        l_342[2][0] = ((l_340[3][2][0] = l_339) , l_341[7][0]);
                    }
                }
                l_352.s2 ^= (l_351 = ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_343, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(0x57984728L, 0x0AE2BAF2L)).yyyx, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0L, 0x1824DAFEL)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-8L))).xyxy)), (-1L), ((VECTOR(int32_t, 2))(l_344.s04)), ((VECTOR(int32_t, 2))(0x69C670EDL, (-6L))), ((VECTOR(int32_t, 2))(1L, 1L)).hi, (-10L), 0x03A069C4L, l_345, 0L, 0x36BF2AB1L, 0x73B934A4L)).even)).s64, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x07E3283BL, ((VECTOR(int32_t, 4))(l_346.yxxy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_347.s926790ed09d8d0a3)).sed)), 0x66D1F9C3L)).s0421330260773117)).se3)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((l_346.x = l_348), 8L, 0L, 0x1D9BC29EL, 1L, l_349, 0x609BA275L, 0x7DF14054L)).s70)), 0x56686D26L, (-2L))).even)))))).xxxx))), l_350, 0x1112B7DBL, 0x2CA5B880L)))).s1515712031771764)).lo))).s7);
            }
            if ((l_354 = ((VECTOR(int32_t, 4))(l_353.xxyx)).w))
            { /* block id: 230 */
                int32_t l_356 = 0x1899CD92L;
                int32_t *l_355[7][3] = {{&l_356,(void*)0,&l_356},{&l_356,(void*)0,&l_356},{&l_356,(void*)0,&l_356},{&l_356,(void*)0,&l_356},{&l_356,(void*)0,&l_356},{&l_356,(void*)0,&l_356},{&l_356,(void*)0,&l_356}};
                int32_t *l_357[1][5][10] = {{{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356,&l_356}}};
                int32_t *l_358 = &l_356;
                int32_t *l_359 = &l_356;
                VECTOR(uint16_t, 16) l_360 = (VECTOR(uint16_t, 16))(0xCC49L, (VECTOR(uint16_t, 4))(0xCC49L, (VECTOR(uint16_t, 2))(0xCC49L, 0x21F2L), 0x21F2L), 0x21F2L, 0xCC49L, 0x21F2L, (VECTOR(uint16_t, 2))(0xCC49L, 0x21F2L), (VECTOR(uint16_t, 2))(0xCC49L, 0x21F2L), 0xCC49L, 0x21F2L, 0xCC49L, 0x21F2L);
                struct S0 l_361 = {0x5A0410DF2DF42169L,0x53L,1UL,0x115692EB870A253DL,18446744073709551615UL,1L,0x45AB369420EEF1A4L,5UL};/* VOLATILE GLOBAL l_361 */
                struct S0 l_362 = {-1L,-2L,0x124DE15898BE5B65L,0L,0x4975026D4807318AL,1L,0x82B31B0ECFDE346DL,65528UL};/* VOLATILE GLOBAL l_362 */
                int i, j, k;
                l_357[0][4][2] = l_355[0][2];
                l_359 = l_358;
                l_360.s2 ^= (-1L);
                l_362 = l_361;
            }
            else
            { /* block id: 235 */
                uint8_t l_363 = 0x06L;
                uint16_t l_364[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_364[i][j] = 0UL;
                }
                l_353.x |= (l_364[0][1] |= l_363);
            }
            if ((l_303 = l_365[1][6]))
            { /* block id: 240 */
                int64_t l_366 = 0x2C77EB58A7662354L;
                int32_t l_367 = 0L;
                int16_t l_368 = (-4L);
                int32_t *l_423[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_424 = &l_367;
                int32_t *l_425 = &l_367;
                int32_t l_474 = 0x25E2FF4FL;
                uint16_t l_475 = 0x661AL;
                int i;
                if (((l_367 = l_366) , l_368))
                { /* block id: 242 */
                    VECTOR(int32_t, 2) l_369 = (VECTOR(int32_t, 2))(0x0F30DE17L, 0x418CD631L);
                    uint64_t l_370 = 1UL;
                    uint64_t l_371 = 1UL;
                    uint32_t l_384 = 4294967291UL;
                    int i;
                    l_367 |= (l_353.x = (((VECTOR(int32_t, 8))(l_369.xyxyxxyy)).s3 , l_370));
                    l_371++;
                    for (l_371 = 0; (l_371 <= 54); l_371++)
                    { /* block id: 248 */
                        int16_t l_376 = (-1L);
                        uint16_t l_377 = 0xCF91L;
                        uint32_t l_378 = 0xB89612BCL;
                        uint8_t l_379 = 0x0BL;
                        int64_t l_380[6];
                        VECTOR(int32_t, 4) l_381 = (VECTOR(int32_t, 4))(0x119D20F8L, (VECTOR(int32_t, 2))(0x119D20F8L, 0x405EEF4DL), 0x405EEF4DL);
                        VECTOR(int32_t, 2) l_382 = (VECTOR(int32_t, 2))(8L, 0x320A03B9L);
                        VECTOR(int32_t, 16) l_383 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2FB7D94BL), 0x2FB7D94BL), 0x2FB7D94BL, 0L, 0x2FB7D94BL, (VECTOR(int32_t, 2))(0L, 0x2FB7D94BL), (VECTOR(int32_t, 2))(0L, 0x2FB7D94BL), 0L, 0x2FB7D94BL, 0L, 0x2FB7D94BL);
                        int i;
                        for (i = 0; i < 6; i++)
                            l_380[i] = (-1L);
                        l_383.s2 = ((VECTOR(int32_t, 16))((l_376 , (l_377 , (l_378 , l_379))), l_380[4], ((VECTOR(int32_t, 8))(l_381.wyyyyxxx)), ((VECTOR(int32_t, 2))(l_382.xx)), 0x2D167068L, ((VECTOR(int32_t, 2))(l_383.s17)), (-1L))).s2;
                    }
                    if (l_384)
                    { /* block id: 251 */
                        int64_t l_385 = 0x3F0AD0424A25B0AFL;
                        uint32_t l_386[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_386[i] = 6UL;
                        ++l_386[0];
                    }
                    else
                    { /* block id: 253 */
                        int32_t l_389 = 0x4D5A5511L;
                        VECTOR(int32_t, 4) l_390 = (VECTOR(int32_t, 4))(0x3912B3F7L, (VECTOR(int32_t, 2))(0x3912B3F7L, 0x2454554EL), 0x2454554EL);
                        uint64_t l_391 = 1UL;
                        uint32_t l_392 = 4294967294UL;
                        int i;
                        l_369.x |= (l_389 , ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(l_390.zzyy)).xwyzwyyw, (int32_t)(l_391 , l_392)))).s5);
                    }
                }
                else
                { /* block id: 256 */
                    int32_t l_393 = (-9L);
                    uint32_t l_420 = 6UL;
                    l_353.y = 0x7E25F6DCL;
                    for (l_393 = 21; (l_393 != 20); l_393 = safe_sub_func_uint16_t_u_u(l_393, 5))
                    { /* block id: 260 */
                        VECTOR(int32_t, 8) l_396 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x3E985698L), 0x3E985698L), 0x3E985698L, (-2L), 0x3E985698L);
                        VECTOR(int32_t, 8) l_397 = (VECTOR(int32_t, 8))(0x15B5A58DL, (VECTOR(int32_t, 4))(0x15B5A58DL, (VECTOR(int32_t, 2))(0x15B5A58DL, 0x03A0F93EL), 0x03A0F93EL), 0x03A0F93EL, 0x15B5A58DL, 0x03A0F93EL);
                        VECTOR(int32_t, 4) l_398 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3DCADF48L), 0x3DCADF48L);
                        VECTOR(int32_t, 2) l_399 = (VECTOR(int32_t, 2))(0x34D3F151L, 6L);
                        VECTOR(int32_t, 4) l_400 = (VECTOR(int32_t, 4))(0x3C5FE0DBL, (VECTOR(int32_t, 2))(0x3C5FE0DBL, 1L), 1L);
                        int64_t l_401 = 0x17B3A5BA182F8944L;
                        VECTOR(int32_t, 16) l_402 = (VECTOR(int32_t, 16))(0x3ED6D75BL, (VECTOR(int32_t, 4))(0x3ED6D75BL, (VECTOR(int32_t, 2))(0x3ED6D75BL, 0x09BB6948L), 0x09BB6948L), 0x09BB6948L, 0x3ED6D75BL, 0x09BB6948L, (VECTOR(int32_t, 2))(0x3ED6D75BL, 0x09BB6948L), (VECTOR(int32_t, 2))(0x3ED6D75BL, 0x09BB6948L), 0x3ED6D75BL, 0x09BB6948L, 0x3ED6D75BL, 0x09BB6948L);
                        VECTOR(int32_t, 16) l_403 = (VECTOR(int32_t, 16))(0x5F643539L, (VECTOR(int32_t, 4))(0x5F643539L, (VECTOR(int32_t, 2))(0x5F643539L, 0x3FB0B1CCL), 0x3FB0B1CCL), 0x3FB0B1CCL, 0x5F643539L, 0x3FB0B1CCL, (VECTOR(int32_t, 2))(0x5F643539L, 0x3FB0B1CCL), (VECTOR(int32_t, 2))(0x5F643539L, 0x3FB0B1CCL), 0x5F643539L, 0x3FB0B1CCL, 0x5F643539L, 0x3FB0B1CCL);
                        uint8_t l_404 = 0x9CL;
                        uint32_t l_405 = 0UL;
                        uint32_t l_406 = 0xEB9FCCEEL;
                        uint8_t l_407 = 253UL;
                        uint32_t l_408 = 0UL;
                        int32_t l_409 = (-8L);
                        uint32_t l_410[5] = {0x41CDC19CL,0x41CDC19CL,0x41CDC19CL,0x41CDC19CL,0x41CDC19CL};
                        int64_t l_411 = 0x62FEDE1CADA77C6EL;
                        int8_t l_412[5][2][10] = {{{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L},{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L}},{{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L},{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L}},{{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L},{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L}},{{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L},{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L}},{{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L},{1L,0x31L,0x4CL,0x31L,1L,1L,0x31L,0x4CL,0x31L,1L}}};
                        uint16_t l_413 = 0UL;
                        uint16_t *l_415 = &l_413;
                        uint16_t **l_414[5] = {&l_415,&l_415,&l_415,&l_415,&l_415};
                        int32_t l_416 = 1L;
                        int32_t *l_417[3][3][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                        int32_t *l_418 = (void*)0;
                        int32_t *l_419 = (void*)0;
                        int i, j, k;
                        l_303 &= ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(0x088D385EL, 0x0DF3AD5FL)).yyyy))).yywyywzy)), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(9L, 0x6EADA17AL)).xyyyyxyy, ((VECTOR(int32_t, 16))(l_396.s7100521434233657)).hi))))).sc5)).xxyx, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(0L, 1L)).yxxyxxxyxyyyyyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(l_397.s45)).yxxyyxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_367 |= (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x538B8821L, 0x681D0E41L)).xxxyxxxyxyxyyyyx)).s2 , ((VECTOR(int32_t, 2))(l_398.ww)).even)), ((VECTOR(int32_t, 2))((-6L), (-1L))).hi, ((VECTOR(int32_t, 4))(l_399.yxxx)), 0x2CEB19ADL, 4L)).s6205071763574172)).hi))).s57, ((VECTOR(int32_t, 16))(l_400.zxwyywzxzwzxxyzz)).sec))).yyyy)), ((VECTOR(int32_t, 4))((-5L), 0x5085FA09L, 0x00FC15BFL, (-1L))))))))).s7055014731455202))).s36db))).lo)))))).yxyxyyxxxxyxxxyx, (int32_t)l_401))).hi, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(0x28317209L, 0x420300EDL)).xyyxxyxy, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_402.s83)), 0x417FCE80L, 1L)).xxzwxxyx))).s34, ((VECTOR(int32_t, 2))(l_403.s80))))).yxxxyxyy))))), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((l_405 = (l_366 = l_404)) , l_406), (FAKE_DIVERGE(p_588->local_0_offset, get_local_id(0), 10) , ((VECTOR(int32_t, 16))(l_407, (l_353.y &= 0x2248BC0DL), l_408, ((VECTOR(int32_t, 8))(0x15DF4844L, l_409, 1L, l_410[4], 0x2893CDDEL, l_411, 8L, (-8L))), 1L, ((VECTOR(int32_t, 2))((-3L))), 1L, 0x76754519L)).sb), l_412[1][1][3], ((VECTOR(int32_t, 2))(0x097751CFL)), ((VECTOR(int32_t, 2))(0x5B6BDC15L)), ((VECTOR(int32_t, 8))(0x0CD328D9L)), 0x0E17E25FL)).s3a32, ((VECTOR(int32_t, 4))(0x4BB5807EL)), ((VECTOR(int32_t, 4))(0x7A64DF05L))))).xyzyzzyy))), ((VECTOR(int32_t, 8))(0L))))).s1;
                        l_353.y &= (l_413 , 1L);
                        l_414[2] = l_414[2];
                        l_419 = (l_418 = ((l_416 = 0xC426L) , l_417[1][1][0]));
                    }
                    ++l_420;
                }
                l_425 = (FAKE_DIVERGE(p_588->group_0_offset, get_group_id(0), 10) , (l_424 = (l_423[4] = (void*)0)));
                for (l_368 = 0; (l_368 == 21); l_368 = safe_add_func_int8_t_s_s(l_368, 5))
                { /* block id: 279 */
                    int32_t l_428 = 1L;
                    int32_t l_454 = 0x4AA78B87L;
                    int32_t *l_453[7] = {&l_454,(void*)0,&l_454,&l_454,(void*)0,&l_454,&l_454};
                    uint32_t l_455 = 0UL;
                    int64_t l_456 = 1L;
                    uint64_t l_457[7][4] = {{1UL,0x45BC2F7AAD08DF0BL,1UL,1UL},{1UL,0x45BC2F7AAD08DF0BL,1UL,1UL},{1UL,0x45BC2F7AAD08DF0BL,1UL,1UL},{1UL,0x45BC2F7AAD08DF0BL,1UL,1UL},{1UL,0x45BC2F7AAD08DF0BL,1UL,1UL},{1UL,0x45BC2F7AAD08DF0BL,1UL,1UL},{1UL,0x45BC2F7AAD08DF0BL,1UL,1UL}};
                    int i, j;
                    l_428 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))).xyyy)).w;
                    for (l_428 = (-17); (l_428 > (-16)); ++l_428)
                    { /* block id: 283 */
                        int16_t l_431 = 0x324CL;
                        int32_t l_432 = 3L;
                        uint32_t l_433 = 4294967295UL;
                        VECTOR(int32_t, 2) l_434 = (VECTOR(int32_t, 2))((-1L), (-1L));
                        int16_t l_435[1];
                        int64_t l_436 = 1L;
                        VECTOR(int16_t, 16) l_437 = (VECTOR(int16_t, 16))(0x6C20L, (VECTOR(int16_t, 4))(0x6C20L, (VECTOR(int16_t, 2))(0x6C20L, (-2L)), (-2L)), (-2L), 0x6C20L, (-2L), (VECTOR(int16_t, 2))(0x6C20L, (-2L)), (VECTOR(int16_t, 2))(0x6C20L, (-2L)), 0x6C20L, (-2L), 0x6C20L, (-2L));
                        int8_t l_438 = 1L;
                        VECTOR(int32_t, 16) l_439 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                        int32_t l_440 = 0x47CD151AL;
                        uint32_t l_441 = 9UL;
                        uint64_t l_442 = 18446744073709551611UL;
                        VECTOR(int32_t, 16) l_443 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-5L)), (-5L)), (-5L), (-3L), (-5L), (VECTOR(int32_t, 2))((-3L), (-5L)), (VECTOR(int32_t, 2))((-3L), (-5L)), (-3L), (-5L), (-3L), (-5L));
                        uint8_t l_444[7][6] = {{0x59L,0xB2L,252UL,0xB2L,0x59L,0x59L},{0x59L,0xB2L,252UL,0xB2L,0x59L,0x59L},{0x59L,0xB2L,252UL,0xB2L,0x59L,0x59L},{0x59L,0xB2L,252UL,0xB2L,0x59L,0x59L},{0x59L,0xB2L,252UL,0xB2L,0x59L,0x59L},{0x59L,0xB2L,252UL,0xB2L,0x59L,0x59L},{0x59L,0xB2L,252UL,0xB2L,0x59L,0x59L}};
                        uint16_t l_445 = 0xA6F6L;
                        uint16_t l_446 = 0xA547L;
                        int32_t l_447 = 0x35E70FABL;
                        uint8_t l_448 = 0x84L;
                        int32_t l_449 = 1L;
                        int16_t l_450 = 9L;
                        uint16_t l_451 = 0x1267L;
                        int16_t l_452 = 0x7551L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_435[i] = 0x376DL;
                        l_432 = l_431;
                        l_433 = 5L;
                        l_452 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0L)), 0x3A9B56FAL, ((VECTOR(int32_t, 16))(l_434.xyxyxyyxyyxxyyxy)).sa, l_435[0], 0x5BC61976L, 2L, 1L)))), (int32_t)((l_438 = (l_437.s5 = (l_436 = 0x8AL))) , (l_451 ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_439.s13)).xxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_440, (-9L), (-9L), (((l_441 , 0x446277B2L) , GROUP_DIVERGE(2, 1)) , l_442), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_443.sfc)))), l_444[1][5], ((((l_446 = l_445) , 0x79713DB2E5227E56L) , l_447) , l_448), 0x47E783E2L, l_449, ((VECTOR(int32_t, 4))(7L)), 0x0D6A0584L, 0x3624F4D2L)).s3004)), l_450, ((VECTOR(int32_t, 2))((-6L))), (-1L))).odd, ((VECTOR(int32_t, 4))(0x15CDB920L)), ((VECTOR(int32_t, 4))(1L))))).lo, ((VECTOR(int32_t, 2))((-5L)))))), 5L, 0L))))), ((VECTOR(int32_t, 4))(0L))))).even)).xyxyxxxy)).s7015235256313510)).hi)).s45)))).odd))))), ((VECTOR(int32_t, 8))((-8L)))))).s70)).hi;
                    }
                    l_423[2] = l_453[3];
                    if ((l_455 , (l_456 , l_457[2][1])))
                    { /* block id: 294 */
                        int16_t l_458[1];
                        int32_t l_459 = 0x1B403B14L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_458[i] = 1L;
                        l_453[3] = (l_423[0] = (void*)0);
                        l_459 &= l_458[0];
                    }
                    else
                    { /* block id: 298 */
                        VECTOR(uint32_t, 8) l_460 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 3UL), 3UL), 3UL, 4294967295UL, 3UL);
                        VECTOR(uint32_t, 8) l_461 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x3BF89C8AL), 0x3BF89C8AL), 0x3BF89C8AL, 0UL, 0x3BF89C8AL);
                        int16_t l_462 = (-1L);
                        uint16_t l_463 = 65535UL;
                        int64_t l_464 = (-1L);
                        VECTOR(uint16_t, 2) l_465 = (VECTOR(uint16_t, 2))(0UL, 0UL);
                        VECTOR(uint32_t, 4) l_466 = (VECTOR(uint32_t, 4))(0xD388D18FL, (VECTOR(uint32_t, 2))(0xD388D18FL, 0x8B393728L), 0x8B393728L);
                        uint32_t l_467 = 0xDE73A0E2L;
                        VECTOR(uint32_t, 2) l_468 = (VECTOR(uint32_t, 2))(4294967295UL, 0UL);
                        VECTOR(uint32_t, 16) l_469 = (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0xA6FD3B57L), 0xA6FD3B57L), 0xA6FD3B57L, 4294967293UL, 0xA6FD3B57L, (VECTOR(uint32_t, 2))(4294967293UL, 0xA6FD3B57L), (VECTOR(uint32_t, 2))(4294967293UL, 0xA6FD3B57L), 4294967293UL, 0xA6FD3B57L, 4294967293UL, 0xA6FD3B57L);
                        VECTOR(uint32_t, 16) l_470 = (VECTOR(uint32_t, 16))(0x8345FE1BL, (VECTOR(uint32_t, 4))(0x8345FE1BL, (VECTOR(uint32_t, 2))(0x8345FE1BL, 1UL), 1UL), 1UL, 0x8345FE1BL, 1UL, (VECTOR(uint32_t, 2))(0x8345FE1BL, 1UL), (VECTOR(uint32_t, 2))(0x8345FE1BL, 1UL), 0x8345FE1BL, 1UL, 0x8345FE1BL, 1UL);
                        VECTOR(uint32_t, 16) l_471 = (VECTOR(uint32_t, 16))(0x1C403D4FL, (VECTOR(uint32_t, 4))(0x1C403D4FL, (VECTOR(uint32_t, 2))(0x1C403D4FL, 7UL), 7UL), 7UL, 0x1C403D4FL, 7UL, (VECTOR(uint32_t, 2))(0x1C403D4FL, 7UL), (VECTOR(uint32_t, 2))(0x1C403D4FL, 7UL), 0x1C403D4FL, 7UL, 0x1C403D4FL, 7UL);
                        int32_t l_473 = (-4L);
                        int32_t *l_472 = &l_473;
                        int i;
                        l_453[3] = (l_425 = (((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 2))(l_460.s21)).xxxyyyyxxyyxyxxx, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_461.s2241)).xwwzyyxz)), ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_462, (l_464 &= l_463), 0xC0BAL, 1UL)).yyywzywywyyyzzzz)).lo)).s67, ((VECTOR(uint16_t, 2))(l_465.xy))))).xxyxxyyx, ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_466.wy)), 0x7B713EA9L, 0x5F43BBEFL)).yxxywwywywzwyxyw, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(1UL, 0x36401061L)).yyyx)).zxxzzxwxzzzxwxzw, ((VECTOR(uint32_t, 4))(l_467, GROUP_DIVERGE(0, 1), 1UL, 4294967287UL)).wwzzwzxyxyxzzwxx))).sbc)).xxyy, ((VECTOR(uint32_t, 16))(l_468.xxyyxyxyyyxxyxyy)).s1061, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(l_469.sad20)).even, ((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xEDBCEA6EL, 0xF7F8A9FBL)).xxxxyyyxyyyxyyxy)).hi, ((VECTOR(uint32_t, 4))(l_470.s9955)).wwyywyzw, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_471.sd39f7d08)).lo)).even)).xyxxxyyy))).s42))).yxxy))).wxywxywx))).s2250166522103175))).sf , l_472));
                    }
                }
                l_475++;
            }
            else
            { /* block id: 305 */
                int64_t l_478[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
                int64_t l_479 = 0L;
                int i;
                l_353.x = l_478[8];
                if ((l_303 = (l_353.y = l_479)))
                { /* block id: 309 */
                    int32_t l_480 = 0x741AE26AL;
                    for (l_480 = 9; (l_480 >= (-4)); l_480 = safe_sub_func_uint16_t_u_u(l_480, 4))
                    { /* block id: 312 */
                        uint16_t l_483 = 0xD854L;
                        struct S0 l_484 = {0x551E6EEFF959A93CL,-10L,0xBA00F09966E42AA6L,0x291D8012DD5B7979L,0x9ACC4F9FF4D84ABEL,0x116D29E5L,0xB95C072C1048EE19L,0x43D3L};/* VOLATILE GLOBAL l_484 */
                        struct S0 l_485 = {0x416E0EA0470E2D56L,0x13L,0xF84ACC2E609E4DDEL,0x58C13B6A56908380L,0xD5FFEF3958F571CFL,0L,8UL,65529UL};/* VOLATILE GLOBAL l_485 */
                        l_353.x |= l_483;
                        l_485 = l_484;
                    }
                }
                else
                { /* block id: 316 */
                    int8_t l_486[1];
                    VECTOR(int32_t, 8) l_487 = (VECTOR(int32_t, 8))(0x2C892050L, (VECTOR(int32_t, 4))(0x2C892050L, (VECTOR(int32_t, 2))(0x2C892050L, 1L), 1L), 1L, 0x2C892050L, 1L);
                    int32_t l_488 = 0L;
                    VECTOR(int32_t, 4) l_489 = (VECTOR(int32_t, 4))(0x1F48F05BL, (VECTOR(int32_t, 2))(0x1F48F05BL, 0x66FB7692L), 0x66FB7692L);
                    VECTOR(int32_t, 16) l_490 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x104F00DAL), 0x104F00DAL), 0x104F00DAL, (-7L), 0x104F00DAL, (VECTOR(int32_t, 2))((-7L), 0x104F00DAL), (VECTOR(int32_t, 2))((-7L), 0x104F00DAL), (-7L), 0x104F00DAL, (-7L), 0x104F00DAL);
                    VECTOR(int32_t, 4) l_491 = (VECTOR(int32_t, 4))(0x4EF6FB81L, (VECTOR(int32_t, 2))(0x4EF6FB81L, 0x1305CCDDL), 0x1305CCDDL);
                    VECTOR(int32_t, 2) l_492 = (VECTOR(int32_t, 2))(0L, 0x0EE92921L);
                    VECTOR(int32_t, 8) l_493 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x461D7C65L), 0x461D7C65L), 0x461D7C65L, 5L, 0x461D7C65L);
                    VECTOR(int32_t, 16) l_494 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    VECTOR(int32_t, 2) l_501 = (VECTOR(int32_t, 2))(0x5A4137ECL, (-4L));
                    uint8_t l_502 = 252UL;
                    int32_t l_503 = 9L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_486[i] = 0x5BL;
                    if (((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(0x28C18716L, 0x3D8E88D5L, 1L, 5L, (-10L), 0x5EAD04C6L, 3L, 0x5F0DF1E9L)).s4361467602163702, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))((l_303 = l_486[0]), ((VECTOR(int32_t, 16))(l_487.s0373152127315371)).s7, 0L, 9L)).wxzyzxxyyyxzzzzy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x406F166AL, 8L, (-1L), 1L)), 0x06D778F3L, 0x5577884AL, 8L, 0x1DDB39A8L)).s5043554501034145)))))).hi)).s02, (int32_t)l_488))).yxxxxxxyyxxyxyxy, ((VECTOR(int32_t, 16))(5L, 0x62E9FDBBL, 0L, 0x4153483DL, 0x0FD9A0FDL, (-1L), ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0xD70EL, 0UL, 0xC692L, 0x2DD3L)))).x , 0L) , (l_303 &= (l_353.y = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_489.zy)).xyxyxxxyyxyyyxyx)).s3))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x323673B6L, 0x7C36F028L)).xyyy)), ((VECTOR(int32_t, 2))((-6L), 0x21798CB9L)), 1L, 0x1136541BL, (-1L)))))).sc5)).yxxyyyyyyyxxyyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_490.s12)).yxyyxyxy)), ((VECTOR(int32_t, 2))(l_491.xz)), ((VECTOR(int32_t, 2))(l_492.yx)), ((VECTOR(int32_t, 2))(l_493.s51)), 0x22F27443L, 0x68E53D12L))))).s85)))), 4L, 0x41034CE9L)).xzzxzwwywyyzywxy, ((VECTOR(int32_t, 16))(l_494.s8a18570747ff8f68))))).sd)
                    { /* block id: 320 */
                        int8_t l_495 = 1L;
                        uint64_t l_496 = 0xF02502A17E87573AL;
                        int64_t l_497 = 0x2AE1BD1A7188E3E1L;
                        l_497 &= (l_495 , l_496);
                    }
                    else
                    { /* block id: 322 */
                        uint32_t l_498 = 0xD03E6DC0L;
                        l_494.s7 |= 0x0C85CB00L;
                        l_498++;
                        l_353.y |= 0x561302B3L;
                    }
                    l_503 ^= (l_353.y |= (l_303 = ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_501.xyxy)).hi)).yxxx, ((VECTOR(int32_t, 4))(l_502, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(0x05A2FAA2L, (-4L))), (int32_t)0x1CBEA303L))), 0x22478477L))))).x));
                }
                for (l_479 = 0; (l_479 <= 11); l_479++)
                { /* block id: 333 */
                    int32_t l_506 = 0L;
                    VECTOR(uint32_t, 2) l_521 = (VECTOR(uint32_t, 2))(4294967290UL, 4294967288UL);
                    int i;
                    for (l_506 = (-10); (l_506 > 17); ++l_506)
                    { /* block id: 336 */
                        int32_t l_510[2];
                        int32_t *l_509 = &l_510[0];
                        int64_t l_511[6];
                        VECTOR(int32_t, 2) l_512 = (VECTOR(int32_t, 2))((-1L), 0L);
                        int32_t l_513 = 1L;
                        VECTOR(int32_t, 4) l_514 = (VECTOR(int32_t, 4))(0x4D6E097AL, (VECTOR(int32_t, 2))(0x4D6E097AL, 4L), 4L);
                        VECTOR(int32_t, 2) l_515 = (VECTOR(int32_t, 2))(0x74ED5C90L, 0x0E75BC7EL);
                        VECTOR(int32_t, 16) l_516 = (VECTOR(int32_t, 16))(0x5FA97EC0L, (VECTOR(int32_t, 4))(0x5FA97EC0L, (VECTOR(int32_t, 2))(0x5FA97EC0L, 0L), 0L), 0L, 0x5FA97EC0L, 0L, (VECTOR(int32_t, 2))(0x5FA97EC0L, 0L), (VECTOR(int32_t, 2))(0x5FA97EC0L, 0L), 0x5FA97EC0L, 0L, 0x5FA97EC0L, 0L);
                        struct S0 l_517 = {3L,1L,0xC3EB5C79E4853E7AL,-5L,0UL,-4L,0UL,1UL};/* VOLATILE GLOBAL l_517 */
                        uint32_t l_518 = 0x955086DAL;
                        uint32_t l_519 = 3UL;
                        VECTOR(int32_t, 16) l_520 = (VECTOR(int32_t, 16))(0x767E6ED9L, (VECTOR(int32_t, 4))(0x767E6ED9L, (VECTOR(int32_t, 2))(0x767E6ED9L, 0x3FA63F78L), 0x3FA63F78L), 0x3FA63F78L, 0x767E6ED9L, 0x3FA63F78L, (VECTOR(int32_t, 2))(0x767E6ED9L, 0x3FA63F78L), (VECTOR(int32_t, 2))(0x767E6ED9L, 0x3FA63F78L), 0x767E6ED9L, 0x3FA63F78L, 0x767E6ED9L, 0x3FA63F78L);
                        int i;
                        for (i = 0; i < 2; i++)
                            l_510[i] = 0x16253E8FL;
                        for (i = 0; i < 6; i++)
                            l_511[i] = 0x3C3E2BBEA51605E5L;
                        l_509 = l_509;
                        (*l_509) |= l_511[4];
                        l_353.x ^= ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_512.yxyyyyxy)).s01, ((VECTOR(int32_t, 8))(0x3F0EDEC7L, l_513, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_514.wzxzyzyy)).s57)), 7L, 0x4057B1BEL, 0x69221232L, 0x7A337508L)).s61, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x6FE5B107L, 0x78469E99L, 0x0BA9D071L, 0x29F5CE19L)).yzyyywxzzzxyzxzz)).lo, ((VECTOR(int32_t, 8))(l_515.yxxxxxxy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_516.s7e)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1B0D8EC0L, 0x34CECA29L)).lo, ((l_517 , l_518) , l_519), 0x2B6A94FDL, 0x168C0093L)).odd, ((VECTOR(int32_t, 8))(l_520.s5277fd34)).s03))).xxxyyxyy))))))).s05))).hi;
                        l_303 = (-5L);
                    }
                    --l_521.y;
                }
            }
            --l_524;
            unsigned int result = 0;
            result += l_303;
            result += l_353.y;
            result += l_353.x;
            result += l_354;
            int l_365_i0, l_365_i1;
            for (l_365_i0 = 0; l_365_i0 < 2; l_365_i0++) {
                for (l_365_i1 = 0; l_365_i1 < 9; l_365_i1++) {
                    result += l_365[l_365_i0][l_365_i1];
                }
            }
            result += l_524;
            atomic_add(&p_588->l_special_values[9], result);
        }
        else
        { /* block id: 346 */
            (1 + 1);
        }
        l_552 ^= ((p_588->g_273 = (((safe_div_func_int8_t_s_s(((p_588->g_253[3][3][2] = ((((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(p_588->g_529.s035b335014dc0fc5)).odd, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x0AE7E162D3755EBBL, ((VECTOR(int64_t, 4))(0x22552297DF388914L, 0x56E136B9ADE21504L, (-1L), 0x300225D53A53AF0CL)), ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(p_588->g_530.s63a793c9f7a75274)).sdf13, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))(l_531.xy)), ((VECTOR(int64_t, 4))(0x39D75E16D389FCEBL, 0L, (-1L), 0x64307F1E3C5FF8E8L)).even))).xyxx, ((VECTOR(int64_t, 2))(p_588->g_532.sb9)).yyxy))), (safe_add_func_uint32_t_u_u((l_548[6] = (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))((GROUP_DIVERGE(2, 1) == ((p_588->g_58 , l_537) && (((safe_lshift_func_uint8_t_u_u((((+((p_217 || (safe_lshift_func_uint8_t_u_s((p_217 > p_588->g_300[6][1]), 3))) ^ (((safe_add_func_int32_t_s_s(l_537, ((*l_544) = 0x92AEF626L))) & 0x7A49FFC47E7303D8L) | (safe_sub_func_int8_t_s_s(p_588->g_270, l_547))))) < 0x49A4953AL) >= 0x4C3660EEL), 1)) && p_216) < p_216))), 0xEEL, 9UL, 5UL, 9UL, p_217, ((VECTOR(uint8_t, 8))(0UL)), 3UL, 255UL)).s4, 6))), l_549)), ((VECTOR(int64_t, 2))(1L)), 0x7F0B249E15DBBECFL)).lo))).hi))), (-8L))).s0150573034125701)).sdd)).xxxyxxxx))).s4 < p_588->g_54) || 0xAAL)) , l_551.x), p_216)) < p_588->g_298.f0) , l_531.x)) > p_588->g_300[4][1]);
    }
    (*p_218) |= (safe_rshift_func_uint16_t_u_u((l_548[2] ^ l_547), l_555));
    --l_562;
    return (*p_215);
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_50 p_588->g_297
 * writes: p_588->g_253 p_588->g_50
 */
struct S0 * func_221(struct S0 * p_222, uint64_t  p_223, struct S1 * p_588)
{ /* block id: 190 */
    int32_t l_290 = (-1L);
    int64_t *l_291 = (void*)0;
    int64_t *l_292 = &p_588->g_253[0][6][2];
    int32_t *l_293 = &p_588->g_50;
    int32_t **l_294 = &l_293;
    int32_t *l_296 = &p_588->g_50;
    int32_t **l_295 = &l_296;
    (*l_293) = ((0x696A8D5574EA3051L > l_290) >= ((*l_292) = 0L));
    (*l_295) = ((*l_294) = l_293);
    (*l_296) |= 0x14AFA8B0L;
    return p_588->g_297;
}


/* ------------------------------------------ */
/* 
 * reads : p_588->g_58 p_588->g_50 p_588->g_76 p_588->g_54 p_588->g_254 p_588->g_274
 * writes: p_588->g_58 p_588->g_50 p_588->g_76 p_588->g_254 p_588->g_274 p_588->g_273 p_588->g_54
 */
struct S0 * func_224(int32_t  p_225, int32_t ** p_226, struct S1 * p_588)
{ /* block id: 143 */
    int8_t *l_237 = &p_588->g_76;
    int32_t l_240 = 0x4CC8F7C6L;
    VECTOR(int32_t, 16) l_252 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    int16_t l_260 = 0x67D4L;
    uint16_t *l_279 = &p_588->g_280;
    uint16_t *l_283 = &p_588->g_280;
    int32_t l_286 = 0L;
    struct S0 *l_288 = (void*)0;
    int i;
    for (p_588->g_58 = 0; (p_588->g_58 < 19); p_588->g_58++)
    { /* block id: 146 */
        int8_t *l_236 = (void*)0;
        if ((atomic_inc(&p_588->g_atomic_input[27 * get_linear_group_id() + 14]) == 4))
        { /* block id: 148 */
            int32_t l_234 = 0x0042DFD0L;
            int32_t *l_233 = &l_234;
            int32_t *l_235 = &l_234;
            l_235 = l_233;
            unsigned int result = 0;
            result += l_234;
            atomic_add(&p_588->g_special_values[27 * get_linear_group_id() + 14], result);
        }
        else
        { /* block id: 150 */
            (1 + 1);
        }
        if ((**p_226))
            break;
        (**p_226) = (l_236 == l_237);
    }
    for (p_225 = 0; (p_225 == (-24)); p_225--)
    { /* block id: 158 */
        int32_t l_241 = 0L;
        int32_t *l_245 = &p_588->g_54;
        if (l_240)
        { /* block id: 159 */
            uint64_t l_242 = 18446744073709551615UL;
            l_242++;
        }
        else
        { /* block id: 161 */
            (*p_226) = l_245;
        }
    }
    for (p_588->g_76 = 23; (p_588->g_76 > 20); p_588->g_76 = safe_sub_func_uint32_t_u_u(p_588->g_76, 2))
    { /* block id: 167 */
        int32_t *l_248 = &p_588->g_50;
        if ((**p_226))
            break;
        (*p_226) = l_248;
    }
    for (l_240 = 0; (l_240 <= (-15)); --l_240)
    { /* block id: 173 */
        int32_t *l_251[7] = {&p_588->g_54,&p_588->g_54,&p_588->g_54,&p_588->g_54,&p_588->g_54,&p_588->g_54,&p_588->g_54};
        VECTOR(uint16_t, 2) l_265 = (VECTOR(uint16_t, 2))(0x7B3BL, 0x28BFL);
        uint16_t *l_266 = (void*)0;
        uint16_t *l_267 = (void*)0;
        uint16_t *l_268 = (void*)0;
        uint16_t *l_269 = (void*)0;
        uint16_t *l_271 = (void*)0;
        uint16_t *l_272[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        uint16_t **l_281 = &l_269;
        uint16_t **l_282[7][2][7] = {{{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266},{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266}},{{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266},{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266}},{{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266},{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266}},{{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266},{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266}},{{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266},{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266}},{{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266},{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266}},{{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266},{&l_272[8][1],(void*)0,(void*)0,&l_272[8][1],(void*)0,&l_267,&l_266}}};
        int16_t *l_284[10][1] = {{&p_588->g_273},{&p_588->g_273},{&p_588->g_273},{&p_588->g_273},{&p_588->g_273},{&p_588->g_273},{&p_588->g_273},{&p_588->g_273},{&p_588->g_273},{&p_588->g_273}};
        uint32_t l_285 = 4294967292UL;
        int32_t l_287 = 1L;
        int i, j, k;
        p_588->g_254++;
        for (p_588->g_58 = 0; (p_588->g_58 <= 28); p_588->g_58++)
        { /* block id: 177 */
            int32_t *l_259 = &p_588->g_54;
            (*p_226) = l_259;
        }
        l_252.sf &= l_260;
        (**p_226) = (((safe_rshift_func_uint8_t_u_s((((((safe_mod_func_int32_t_s_s((((&p_588->g_50 == &l_240) ^ (l_237 != l_237)) > ((p_588->g_254 && p_225) , (((((((l_286 = ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_265.xyyyyyyy)))), (l_252.s6 = (p_225 | ((p_588->g_274[7][1]++) & (p_588->g_273 = (!(safe_mod_func_int16_t_s_s((((*l_281) = l_279) == (l_283 = &p_588->g_280)), 0x29BBL))))))), l_285, FAKE_DIVERGE(p_588->local_1_offset, get_local_id(1), 10), 0x9A20L, 0UL, p_588->g_58, 1UL, 0UL)).s1) , p_588->g_54) ^ p_225) != 3L) & 0x78EF78CEAEB1FCBEL) || (-10L)) < p_225))), l_240)) ^ 0x47C1L) & 0x6F13C1FFC5D27DD1L) > l_287) ^ 0x1BB5L), 2)) , 0xE9L) <= l_240);
    }
    return l_288;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[27];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 27; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[27];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 27; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[196];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 196; i++)
            l_comm_values[i] = 1;
    struct S1 c_589;
    struct S1* p_588 = &c_589;
    struct S1 c_590 = {
        0x49225D62L, // p_588->g_50
        0x0F9E473BL, // p_588->g_54
        0xF4L, // p_588->g_58
        0x66L, // p_588->g_76
        0x77L, // p_588->g_77
        (void*)0, // p_588->g_89
        (void*)0, // p_588->g_94
        (void*)0, // p_588->g_219
        {{{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L}},{{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L}},{{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L}},{{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L}},{{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L}},{{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L}},{{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L}},{{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L}},{{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L},{0L,9L,0x0E0C4DDB9A783487L}}}, // p_588->g_253
        8UL, // p_588->g_254
        0L, // p_588->g_270
        9L, // p_588->g_273
        {{0x4F07992EL,0x4F07992EL},{0x4F07992EL,0x4F07992EL},{0x4F07992EL,0x4F07992EL},{0x4F07992EL,0x4F07992EL},{0x4F07992EL,0x4F07992EL},{0x4F07992EL,0x4F07992EL},{0x4F07992EL,0x4F07992EL},{0x4F07992EL,0x4F07992EL},{0x4F07992EL,0x4F07992EL}}, // p_588->g_274
        1UL, // p_588->g_280
        {4L,0x6FL,0x6255CB79CFFCAE45L,0L,1UL,0x6F734314L,0xE1F0A15FA0B68F68L,65532UL}, // p_588->g_298
        &p_588->g_298, // p_588->g_297
        {{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL},{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL},{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL},{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL},{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL},{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL},{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL},{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL},{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL},{0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL,0x6B77408FL}}, // p_588->g_300
        (VECTOR(int64_t, 16))(0x06A849198B583E42L, (VECTOR(int64_t, 4))(0x06A849198B583E42L, (VECTOR(int64_t, 2))(0x06A849198B583E42L, 3L), 3L), 3L, 0x06A849198B583E42L, 3L, (VECTOR(int64_t, 2))(0x06A849198B583E42L, 3L), (VECTOR(int64_t, 2))(0x06A849198B583E42L, 3L), 0x06A849198B583E42L, 3L, 0x06A849198B583E42L, 3L), // p_588->g_529
        (VECTOR(int64_t, 16))(0x0CAB1BC7F549D7B3L, (VECTOR(int64_t, 4))(0x0CAB1BC7F549D7B3L, (VECTOR(int64_t, 2))(0x0CAB1BC7F549D7B3L, 0x6F98773F745D2F5BL), 0x6F98773F745D2F5BL), 0x6F98773F745D2F5BL, 0x0CAB1BC7F549D7B3L, 0x6F98773F745D2F5BL, (VECTOR(int64_t, 2))(0x0CAB1BC7F549D7B3L, 0x6F98773F745D2F5BL), (VECTOR(int64_t, 2))(0x0CAB1BC7F549D7B3L, 0x6F98773F745D2F5BL), 0x0CAB1BC7F549D7B3L, 0x6F98773F745D2F5BL, 0x0CAB1BC7F549D7B3L, 0x6F98773F745D2F5BL), // p_588->g_530
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L), (VECTOR(int64_t, 2))((-1L), (-9L)), (VECTOR(int64_t, 2))((-1L), (-9L)), (-1L), (-9L), (-1L), (-9L)), // p_588->g_532
        0x0A8CEE36L, // p_588->g_569
        &p_588->g_569, // p_588->g_568
        &p_588->g_568, // p_588->g_567
        {{0x17A76F7029DE197FL,1L,0x9842511A1793FA9EL,0x0B9254E20B2C11E3L,0x1A2E6565316E3C0EL,0x1144D079L,0x77D4F67B80D12432L,0x7D44L},{0x34290FE06DA53718L,-9L,0xB388B909BB94EF98L,0x12F7C8D6BD2A8BF4L,0xE51AC914133CB6FFL,0x2F855B37L,0xFD25B76F890A2411L,0x0B69L},{0x17A76F7029DE197FL,1L,0x9842511A1793FA9EL,0x0B9254E20B2C11E3L,0x1A2E6565316E3C0EL,0x1144D079L,0x77D4F67B80D12432L,0x7D44L},{0x17A76F7029DE197FL,1L,0x9842511A1793FA9EL,0x0B9254E20B2C11E3L,0x1A2E6565316E3C0EL,0x1144D079L,0x77D4F67B80D12432L,0x7D44L},{0x34290FE06DA53718L,-9L,0xB388B909BB94EF98L,0x12F7C8D6BD2A8BF4L,0xE51AC914133CB6FFL,0x2F855B37L,0xFD25B76F890A2411L,0x0B69L},{0x17A76F7029DE197FL,1L,0x9842511A1793FA9EL,0x0B9254E20B2C11E3L,0x1A2E6565316E3C0EL,0x1144D079L,0x77D4F67B80D12432L,0x7D44L},{0x17A76F7029DE197FL,1L,0x9842511A1793FA9EL,0x0B9254E20B2C11E3L,0x1A2E6565316E3C0EL,0x1144D079L,0x77D4F67B80D12432L,0x7D44L},{0x34290FE06DA53718L,-9L,0xB388B909BB94EF98L,0x12F7C8D6BD2A8BF4L,0xE51AC914133CB6FFL,0x2F855B37L,0xFD25B76F890A2411L,0x0B69L},{0x17A76F7029DE197FL,1L,0x9842511A1793FA9EL,0x0B9254E20B2C11E3L,0x1A2E6565316E3C0EL,0x1144D079L,0x77D4F67B80D12432L,0x7D44L},{0x17A76F7029DE197FL,1L,0x9842511A1793FA9EL,0x0B9254E20B2C11E3L,0x1A2E6565316E3C0EL,0x1144D079L,0x77D4F67B80D12432L,0x7D44L}}, // p_588->g_579
        0xB35E1B9E44CDBB85L, // p_588->g_585
        {0x7C85C0B4C452084CL,0x59L,18446744073709551615UL,0x62010529FD75BC85L,0xCF5147CA6FE22DEDL,0x7433C735L,0x77F893AB07864493L,0xBAE0L}, // p_588->g_587
        0, // p_588->v_collective
        sequence_input[get_global_id(0)], // p_588->global_0_offset
        sequence_input[get_global_id(1)], // p_588->global_1_offset
        sequence_input[get_global_id(2)], // p_588->global_2_offset
        sequence_input[get_local_id(0)], // p_588->local_0_offset
        sequence_input[get_local_id(1)], // p_588->local_1_offset
        sequence_input[get_local_id(2)], // p_588->local_2_offset
        sequence_input[get_group_id(0)], // p_588->group_0_offset
        sequence_input[get_group_id(1)], // p_588->group_1_offset
        sequence_input[get_group_id(2)], // p_588->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 196)), permutations[0][get_linear_local_id()])), // p_588->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_589 = c_590;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_588);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_588->g_50, "p_588->g_50", print_hash_value);
    transparent_crc(p_588->g_54, "p_588->g_54", print_hash_value);
    transparent_crc(p_588->g_58, "p_588->g_58", print_hash_value);
    transparent_crc(p_588->g_76, "p_588->g_76", print_hash_value);
    transparent_crc(p_588->g_77, "p_588->g_77", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_588->g_253[i][j][k], "p_588->g_253[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_588->g_254, "p_588->g_254", print_hash_value);
    transparent_crc(p_588->g_270, "p_588->g_270", print_hash_value);
    transparent_crc(p_588->g_273, "p_588->g_273", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_588->g_274[i][j], "p_588->g_274[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_588->g_280, "p_588->g_280", print_hash_value);
    transparent_crc(p_588->g_298.f0, "p_588->g_298.f0", print_hash_value);
    transparent_crc(p_588->g_298.f1, "p_588->g_298.f1", print_hash_value);
    transparent_crc(p_588->g_298.f2, "p_588->g_298.f2", print_hash_value);
    transparent_crc(p_588->g_298.f3, "p_588->g_298.f3", print_hash_value);
    transparent_crc(p_588->g_298.f4, "p_588->g_298.f4", print_hash_value);
    transparent_crc(p_588->g_298.f5, "p_588->g_298.f5", print_hash_value);
    transparent_crc(p_588->g_298.f6, "p_588->g_298.f6", print_hash_value);
    transparent_crc(p_588->g_298.f7, "p_588->g_298.f7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_588->g_300[i][j], "p_588->g_300[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_588->g_529.s0, "p_588->g_529.s0", print_hash_value);
    transparent_crc(p_588->g_529.s1, "p_588->g_529.s1", print_hash_value);
    transparent_crc(p_588->g_529.s2, "p_588->g_529.s2", print_hash_value);
    transparent_crc(p_588->g_529.s3, "p_588->g_529.s3", print_hash_value);
    transparent_crc(p_588->g_529.s4, "p_588->g_529.s4", print_hash_value);
    transparent_crc(p_588->g_529.s5, "p_588->g_529.s5", print_hash_value);
    transparent_crc(p_588->g_529.s6, "p_588->g_529.s6", print_hash_value);
    transparent_crc(p_588->g_529.s7, "p_588->g_529.s7", print_hash_value);
    transparent_crc(p_588->g_529.s8, "p_588->g_529.s8", print_hash_value);
    transparent_crc(p_588->g_529.s9, "p_588->g_529.s9", print_hash_value);
    transparent_crc(p_588->g_529.sa, "p_588->g_529.sa", print_hash_value);
    transparent_crc(p_588->g_529.sb, "p_588->g_529.sb", print_hash_value);
    transparent_crc(p_588->g_529.sc, "p_588->g_529.sc", print_hash_value);
    transparent_crc(p_588->g_529.sd, "p_588->g_529.sd", print_hash_value);
    transparent_crc(p_588->g_529.se, "p_588->g_529.se", print_hash_value);
    transparent_crc(p_588->g_529.sf, "p_588->g_529.sf", print_hash_value);
    transparent_crc(p_588->g_530.s0, "p_588->g_530.s0", print_hash_value);
    transparent_crc(p_588->g_530.s1, "p_588->g_530.s1", print_hash_value);
    transparent_crc(p_588->g_530.s2, "p_588->g_530.s2", print_hash_value);
    transparent_crc(p_588->g_530.s3, "p_588->g_530.s3", print_hash_value);
    transparent_crc(p_588->g_530.s4, "p_588->g_530.s4", print_hash_value);
    transparent_crc(p_588->g_530.s5, "p_588->g_530.s5", print_hash_value);
    transparent_crc(p_588->g_530.s6, "p_588->g_530.s6", print_hash_value);
    transparent_crc(p_588->g_530.s7, "p_588->g_530.s7", print_hash_value);
    transparent_crc(p_588->g_530.s8, "p_588->g_530.s8", print_hash_value);
    transparent_crc(p_588->g_530.s9, "p_588->g_530.s9", print_hash_value);
    transparent_crc(p_588->g_530.sa, "p_588->g_530.sa", print_hash_value);
    transparent_crc(p_588->g_530.sb, "p_588->g_530.sb", print_hash_value);
    transparent_crc(p_588->g_530.sc, "p_588->g_530.sc", print_hash_value);
    transparent_crc(p_588->g_530.sd, "p_588->g_530.sd", print_hash_value);
    transparent_crc(p_588->g_530.se, "p_588->g_530.se", print_hash_value);
    transparent_crc(p_588->g_530.sf, "p_588->g_530.sf", print_hash_value);
    transparent_crc(p_588->g_532.s0, "p_588->g_532.s0", print_hash_value);
    transparent_crc(p_588->g_532.s1, "p_588->g_532.s1", print_hash_value);
    transparent_crc(p_588->g_532.s2, "p_588->g_532.s2", print_hash_value);
    transparent_crc(p_588->g_532.s3, "p_588->g_532.s3", print_hash_value);
    transparent_crc(p_588->g_532.s4, "p_588->g_532.s4", print_hash_value);
    transparent_crc(p_588->g_532.s5, "p_588->g_532.s5", print_hash_value);
    transparent_crc(p_588->g_532.s6, "p_588->g_532.s6", print_hash_value);
    transparent_crc(p_588->g_532.s7, "p_588->g_532.s7", print_hash_value);
    transparent_crc(p_588->g_532.s8, "p_588->g_532.s8", print_hash_value);
    transparent_crc(p_588->g_532.s9, "p_588->g_532.s9", print_hash_value);
    transparent_crc(p_588->g_532.sa, "p_588->g_532.sa", print_hash_value);
    transparent_crc(p_588->g_532.sb, "p_588->g_532.sb", print_hash_value);
    transparent_crc(p_588->g_532.sc, "p_588->g_532.sc", print_hash_value);
    transparent_crc(p_588->g_532.sd, "p_588->g_532.sd", print_hash_value);
    transparent_crc(p_588->g_532.se, "p_588->g_532.se", print_hash_value);
    transparent_crc(p_588->g_532.sf, "p_588->g_532.sf", print_hash_value);
    transparent_crc(p_588->g_569, "p_588->g_569", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_588->g_579[i].f0, "p_588->g_579[i].f0", print_hash_value);
        transparent_crc(p_588->g_579[i].f1, "p_588->g_579[i].f1", print_hash_value);
        transparent_crc(p_588->g_579[i].f2, "p_588->g_579[i].f2", print_hash_value);
        transparent_crc(p_588->g_579[i].f3, "p_588->g_579[i].f3", print_hash_value);
        transparent_crc(p_588->g_579[i].f4, "p_588->g_579[i].f4", print_hash_value);
        transparent_crc(p_588->g_579[i].f5, "p_588->g_579[i].f5", print_hash_value);
        transparent_crc(p_588->g_579[i].f6, "p_588->g_579[i].f6", print_hash_value);
        transparent_crc(p_588->g_579[i].f7, "p_588->g_579[i].f7", print_hash_value);

    }
    transparent_crc(p_588->g_585, "p_588->g_585", print_hash_value);
    transparent_crc(p_588->g_587.f0, "p_588->g_587.f0", print_hash_value);
    transparent_crc(p_588->g_587.f1, "p_588->g_587.f1", print_hash_value);
    transparent_crc(p_588->g_587.f2, "p_588->g_587.f2", print_hash_value);
    transparent_crc(p_588->g_587.f3, "p_588->g_587.f3", print_hash_value);
    transparent_crc(p_588->g_587.f4, "p_588->g_587.f4", print_hash_value);
    transparent_crc(p_588->g_587.f5, "p_588->g_587.f5", print_hash_value);
    transparent_crc(p_588->g_587.f6, "p_588->g_587.f6", print_hash_value);
    transparent_crc(p_588->g_587.f7, "p_588->g_587.f7", print_hash_value);
    transparent_crc(p_588->v_collective, "p_588->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 27; i++)
            transparent_crc(p_588->g_special_values[i + 27 * get_linear_group_id()], "p_588->g_special_values[i + 27 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 27; i++)
            transparent_crc(p_588->l_special_values[i], "p_588->l_special_values[i]", print_hash_value);
    transparent_crc(p_588->l_comm_values[get_linear_local_id()], "p_588->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_588->g_comm_values[get_linear_group_id() * 196 + get_linear_local_id()], "p_588->g_comm_values[get_linear_group_id() * 196 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
